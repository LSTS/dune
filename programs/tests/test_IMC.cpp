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
// IMC XML MD5: b1259c5520f7984d32553175736ee30a                            *
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
    msg.setTimeStamp(0.331745792368039);
    msg.setSource(26393U);
    msg.setSourceEntity(102U);
    msg.setDestination(43509U);
    msg.setDestinationEntity(69U);
    msg.state = 90U;
    msg.flags = 115U;
    msg.description.assign("LSKMDSCGRYOAQNXMRB");

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
    msg.setTimeStamp(0.7503337236974047);
    msg.setSource(62355U);
    msg.setSourceEntity(168U);
    msg.setDestination(12991U);
    msg.setDestinationEntity(58U);
    msg.state = 197U;
    msg.flags = 64U;
    msg.description.assign("RLLYBVFDLEKRCGJPLNOOXSEXEYNDBJFCPXPXINVODAPKTRJMXTGFKPSFZZINBVHMXGVIEAMCEJCSEBVOQRYYDRKOKJBT");

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
    msg.setTimeStamp(0.6332622537260569);
    msg.setSource(65340U);
    msg.setSourceEntity(222U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(218U);
    msg.state = 39U;
    msg.flags = 23U;
    msg.description.assign("APEJJMUPQNIGKXZUJYAFNZSBLQCOTWROWCHDEJKDTZWPKMUKUJGDOVJJYLCBXHBZTUOCGPMSHWPHFAFTXWOCVWOUPJBLRQUQIGPETPMILOMHATYUPVZSKIYFYMRNRDDOTDAVDAAENMQABKXPYTFADCIDGRNRVXRHILJQBMIYHXNASGZYSCHCKDOE");

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
    msg.setTimeStamp(0.6263261156967875);
    msg.setSource(54077U);
    msg.setSourceEntity(135U);
    msg.setDestination(24498U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.24110451289452683);
    msg.setSource(54059U);
    msg.setSourceEntity(1U);
    msg.setDestination(8383U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.3439746209550516);
    msg.setSource(46629U);
    msg.setSourceEntity(113U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.049045761031040414);
    msg.setSource(39963U);
    msg.setSourceEntity(26U);
    msg.setDestination(41717U);
    msg.setDestinationEntity(111U);
    msg.id = 81U;
    msg.label.assign("ZOWHNYFGRC");
    msg.component.assign("BOMAHTKKONPHROVGSYQZNJPSSXKEMZLJOJTXUQBOLAYMCEZJJGHDQACYATGWXUWWVBXB");
    msg.act_time = 26859U;
    msg.deact_time = 51282U;

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
    msg.setTimeStamp(0.2493562980441606);
    msg.setSource(14784U);
    msg.setSourceEntity(213U);
    msg.setDestination(56813U);
    msg.setDestinationEntity(11U);
    msg.id = 7U;
    msg.label.assign("NBNOKNICFVDGMVWSAIEHLDPSJTXBPLPWQKLRTGDFCEITJXTKZYGOHSQGJPXXSMPRHFTFDQMDLNOLJXWAPOICCCOVWDWNHARUZEER");
    msg.component.assign("BRZMWAAZSZOKSYSWYRYOXWRBPANAJOLEMTGTBBTWOPNPLEIYSOAIURDPLQHCWDEVHUMXQGJKUXVQDLTQAVMCMXUFKGBSFEIDYJEBKJJFHJSLFVFTU");
    msg.act_time = 22313U;
    msg.deact_time = 538U;

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
    msg.setTimeStamp(0.25087247731617157);
    msg.setSource(39082U);
    msg.setSourceEntity(78U);
    msg.setDestination(45406U);
    msg.setDestinationEntity(39U);
    msg.id = 228U;
    msg.label.assign("XHPYEVFLRJHVUEIERJALAYYUFHWJJYKQMSPTKOGWQUHMCLCRTXZTOWYIGIMJICOTOAS");
    msg.component.assign("SRBWXJZJWYJQLEBBGFWCIDYTUVMJAUQRGYHNVDUVONQAOEUEPWXOGT");
    msg.act_time = 1434U;
    msg.deact_time = 4701U;

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
    msg.setTimeStamp(0.6372017507656771);
    msg.setSource(15068U);
    msg.setSourceEntity(28U);
    msg.setDestination(19077U);
    msg.setDestinationEntity(102U);
    msg.id = 94U;

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
    msg.setTimeStamp(0.7119054995886569);
    msg.setSource(57650U);
    msg.setSourceEntity(69U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(8U);
    msg.id = 18U;

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
    msg.setTimeStamp(0.23506520855756963);
    msg.setSource(37054U);
    msg.setSourceEntity(63U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(200U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.8632190928300173);
    msg.setSource(20561U);
    msg.setSourceEntity(17U);
    msg.setDestination(17224U);
    msg.setDestinationEntity(212U);
    msg.op = 206U;
    msg.list.assign("DPYOVNTHQRXDJHOGJSDMLBRNLEVEIIDPHRZLAKKCPJPOEWXXNBGIFXWUWXTGMPZVZRFAVBYHPUNUVBCECLGURXYPFDTZMKWAGSJFZXMIUBEHQHAKYNOGINCVIN");

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
    msg.setTimeStamp(0.5718564718794598);
    msg.setSource(37580U);
    msg.setSourceEntity(138U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(53U);
    msg.op = 41U;
    msg.list.assign("AJAYZFKHKHMCCDHYZEXTAOUHLQIYNTQUPICHVEXTRCTSXNVLCGGDXJZBVADPJVY");

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
    msg.setTimeStamp(0.471512679947935);
    msg.setSource(505U);
    msg.setSourceEntity(9U);
    msg.setDestination(5773U);
    msg.setDestinationEntity(61U);
    msg.op = 1U;
    msg.list.assign("PUGVBUHVGSVJWKLJMJLBUBGINWTXRZTLBTKTBDMQOEYMYNHJDKCWMCCUQXTLQDHLRDSGOYPKNWZHGPFMORDEUOYIFIVGDSZRNVIJLXZSYIQPPFCSAXXMFVOQERRWMLEEHESEDZQBQWYPFXVJFUVAFMJYSNDSISUAAJAAYGKVOOTUXKCBFZGIETPGZCEAKQHVCKIAJMRZNRSWLCIRFJONGDQPPTOHNTX");

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
    msg.setTimeStamp(0.7011170675849888);
    msg.setSource(37607U);
    msg.setSourceEntity(236U);
    msg.setDestination(36588U);
    msg.setDestinationEntity(176U);
    msg.value = 179U;

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
    msg.setTimeStamp(0.6003151316017674);
    msg.setSource(10777U);
    msg.setSourceEntity(169U);
    msg.setDestination(23993U);
    msg.setDestinationEntity(114U);
    msg.value = 191U;

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
    msg.setTimeStamp(0.37229808138029863);
    msg.setSource(11238U);
    msg.setSourceEntity(146U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(89U);
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
    msg.setTimeStamp(0.02636328325713755);
    msg.setSource(33335U);
    msg.setSourceEntity(121U);
    msg.setDestination(8890U);
    msg.setDestinationEntity(112U);
    msg.consumer.assign("QLDFTRUHVFDJUSIHYJKCABDYSEDQBJFYWLZMIVBXKZETPFGNKEMFPVHEUNZOUWNQJJWWHJMGDBUYBRJRXUIIAYEBVLTONAXIZJXDKWAGE");
    msg.message_id = 50164U;

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
    msg.setTimeStamp(0.7014668685879987);
    msg.setSource(64067U);
    msg.setSourceEntity(5U);
    msg.setDestination(26899U);
    msg.setDestinationEntity(48U);
    msg.consumer.assign("SVRDYVRAGWFFKVWNKWWQNYPUHJJXPWEDHJDYIVFTV");
    msg.message_id = 84U;

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
    msg.setTimeStamp(0.9403845085994114);
    msg.setSource(41281U);
    msg.setSourceEntity(169U);
    msg.setDestination(19391U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("DBYAXUUJHYLEZRNAVRRMJKLKKIVTLHNOCETQP");
    msg.message_id = 33237U;

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
    msg.setTimeStamp(0.6530492647013105);
    msg.setSource(12932U);
    msg.setSourceEntity(33U);
    msg.setDestination(29021U);
    msg.setDestinationEntity(181U);
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
    msg.setTimeStamp(0.998049234333277);
    msg.setSource(48635U);
    msg.setSourceEntity(89U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(0U);
    msg.type = 187U;

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
    msg.setTimeStamp(0.7206128698017918);
    msg.setSource(50210U);
    msg.setSourceEntity(100U);
    msg.setDestination(1991U);
    msg.setDestinationEntity(75U);
    msg.type = 203U;

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
    msg.setTimeStamp(0.24957165366100686);
    msg.setSource(37692U);
    msg.setSourceEntity(231U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(3U);
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
    msg.setTimeStamp(0.3983344157753308);
    msg.setSource(32308U);
    msg.setSourceEntity(167U);
    msg.setDestination(7856U);
    msg.setDestinationEntity(23U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.4672857657658789);
    msg.setSource(50708U);
    msg.setSourceEntity(38U);
    msg.setDestination(33623U);
    msg.setDestinationEntity(81U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.8598301691998218);
    msg.setSource(48491U);
    msg.setSourceEntity(5U);
    msg.setDestination(40852U);
    msg.setDestinationEntity(247U);
    msg.total_steps = 189U;
    msg.step_number = 60U;
    msg.step.assign("VBQGQXJEFQUUQNOPTAGFYGIVJVLOYUWDCUKFGTJRQOHFRDWEBKISMAWYSWROFUMXCPX");
    msg.flags = 32U;

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
    msg.setTimeStamp(0.642142443761363);
    msg.setSource(58978U);
    msg.setSourceEntity(132U);
    msg.setDestination(62924U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 31U;
    msg.step_number = 203U;
    msg.step.assign("USSXESTGQVIKNTYIZKHOCUBJDIAGHXIWTVUSTXBASGFBWXUIKIPQXBSAWNHYAMVAOORQQKRVCVTSBHOOLCNZMXEQPZALDLOWLCHKZNNMYIBYQVPRJHFWGCBNTYPDHYJTKTABYUUHAPMZZEGRKXDCSPFMJCQGRWILRDODOXWWOFJKGNUENMTHVDOLXECGWRFZIEAEJFGZRJGFCPLFEMYFLMRPFWUVNEC");
    msg.flags = 108U;

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
    msg.setTimeStamp(0.010419423971604669);
    msg.setSource(63496U);
    msg.setSourceEntity(39U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(154U);
    msg.total_steps = 24U;
    msg.step_number = 2U;
    msg.step.assign("PLIVFISOAVNWLNRXTACJYUWUSFTHRLEUZLIXNPOELZRJTNWHCYHHWHWYGHHDQSXMPQADVLRERVZZZHPUQRBWALVOWEITMGXSGFLEUIBOKUOVYIHJZIPEFCQNXPVJJYOBMXRGNFKJQKDRDXKTACBBDSPWFSKYKNUSPD");
    msg.flags = 71U;

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
    msg.setTimeStamp(0.09672704782556663);
    msg.setSource(12792U);
    msg.setSourceEntity(131U);
    msg.setDestination(63796U);
    msg.setDestinationEntity(81U);
    msg.state = 158U;
    msg.error.assign("QQZTICIWHRZGLSMBNAFSFZEKHYGOPXGMCLDBNKWAWZVOHOYFWQXLGDZRCPYUJUOCEWRNIBMRDWPLKYPNRZUPQKDCVFYPCVFASYL");

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
    msg.setTimeStamp(0.41526389356941085);
    msg.setSource(61491U);
    msg.setSourceEntity(67U);
    msg.setDestination(50020U);
    msg.setDestinationEntity(62U);
    msg.state = 168U;
    msg.error.assign("YYRTNKLCVMJITKL");

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
    msg.setTimeStamp(0.8070117214914118);
    msg.setSource(40857U);
    msg.setSourceEntity(133U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(160U);
    msg.state = 79U;
    msg.error.assign("OWONAJFGAMOA");

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
    msg.setTimeStamp(0.48371476679657166);
    msg.setSource(42008U);
    msg.setSourceEntity(194U);
    msg.setDestination(36302U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.4878309466969899);
    msg.setSource(8451U);
    msg.setSourceEntity(83U);
    msg.setDestination(23272U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.05892149607978281);
    msg.setSource(35301U);
    msg.setSourceEntity(189U);
    msg.setDestination(35447U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.3616317193077667);
    msg.setSource(49789U);
    msg.setSourceEntity(58U);
    msg.setDestination(12399U);
    msg.setDestinationEntity(4U);
    msg.op = 185U;
    msg.speed_min = 0.8950644774135181;
    msg.speed_max = 0.02119338171637475;
    msg.long_accel = 0.5619496763126693;
    msg.alt_max_msl = 0.40467665839229827;
    msg.dive_fraction_max = 0.9853172214766038;
    msg.climb_fraction_max = 0.422159804922571;
    msg.bank_max = 0.1833600445258693;
    msg.p_max = 0.9601447104059326;
    msg.pitch_min = 0.3686489342804644;
    msg.pitch_max = 0.1287601982686598;
    msg.q_max = 0.052612632130598413;
    msg.g_min = 0.0988909236454556;
    msg.g_max = 0.21487435034249447;
    msg.g_lat_max = 0.6587667070561871;
    msg.rpm_min = 0.7170800977055539;
    msg.rpm_max = 0.5697777053572824;
    msg.rpm_rate_max = 0.2365051940767332;

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
    msg.setTimeStamp(0.3664696325262561);
    msg.setSource(54352U);
    msg.setSourceEntity(3U);
    msg.setDestination(156U);
    msg.setDestinationEntity(143U);
    msg.op = 166U;
    msg.speed_min = 0.6996044553770976;
    msg.speed_max = 0.18191363995397414;
    msg.long_accel = 0.7832585266442401;
    msg.alt_max_msl = 0.8618062319173679;
    msg.dive_fraction_max = 0.22946584684073545;
    msg.climb_fraction_max = 0.009927314415326571;
    msg.bank_max = 0.5877001380101156;
    msg.p_max = 0.24574454900589704;
    msg.pitch_min = 0.5743420369705757;
    msg.pitch_max = 0.8883974070732846;
    msg.q_max = 0.7645315624605925;
    msg.g_min = 0.4208227826506755;
    msg.g_max = 0.07180846843523914;
    msg.g_lat_max = 0.9864349600431143;
    msg.rpm_min = 0.3587231579650644;
    msg.rpm_max = 0.17323391057073878;
    msg.rpm_rate_max = 0.6515629753100626;

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
    msg.setTimeStamp(0.5259456560505329);
    msg.setSource(49938U);
    msg.setSourceEntity(35U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(207U);
    msg.op = 16U;
    msg.speed_min = 0.11068605958370936;
    msg.speed_max = 0.7637057036416203;
    msg.long_accel = 0.08552245113287171;
    msg.alt_max_msl = 0.5875005315233709;
    msg.dive_fraction_max = 0.9385542539415049;
    msg.climb_fraction_max = 0.45666128979462717;
    msg.bank_max = 0.9945553739313026;
    msg.p_max = 0.1816716031173935;
    msg.pitch_min = 0.68045317390902;
    msg.pitch_max = 0.6881117614699694;
    msg.q_max = 0.2766413661519712;
    msg.g_min = 0.26515837695255473;
    msg.g_max = 0.5301866700082671;
    msg.g_lat_max = 0.768252380713863;
    msg.rpm_min = 0.033348942379175295;
    msg.rpm_max = 0.34847985551125094;
    msg.rpm_rate_max = 0.9776155454313622;

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
    msg.setTimeStamp(0.5252075584191109);
    msg.setSource(20511U);
    msg.setSourceEntity(100U);
    msg.setDestination(10253U);
    msg.setDestinationEntity(95U);
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("VYIHDNUVIXWDSMSRQDCWSJPYEYKFFFVFKKIYIRLSJQAJNOUTBIVENTKAQQIJGWMYLOYIWDELFZAGXRMOKLQGJUKLXNAQPHPTXC");
    tmp_msg_0.x = 0.591945407735998;
    tmp_msg_0.y = 0.7549760946205689;
    tmp_msg_0.z = 0.2524794958742749;
    tmp_msg_0.n = 0.7422335544041272;
    tmp_msg_0.e = 0.6752700179930007;
    tmp_msg_0.d = 0.7576290522127611;
    tmp_msg_0.phi = 0.6882109558454084;
    tmp_msg_0.theta = 0.5043945162833274;
    tmp_msg_0.psi = 0.3425691895126648;
    tmp_msg_0.accuracy = 0.41238304438482143;
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
    msg.setTimeStamp(0.9958636342686309);
    msg.setSource(31067U);
    msg.setSourceEntity(96U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.9615690782947525);
    msg.setSource(7598U);
    msg.setSourceEntity(102U);
    msg.setDestination(63821U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.07077425683262994);
    msg.setSource(51344U);
    msg.setSourceEntity(62U);
    msg.setDestination(11832U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4769191956537868;

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
    msg.setTimeStamp(6.591211807449593e-05);
    msg.setSource(15940U);
    msg.setSourceEntity(188U);
    msg.setDestination(54577U);
    msg.setDestinationEntity(246U);
    msg.value = 0.49072973051722035;

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
    msg.setTimeStamp(0.1684973723555956);
    msg.setSource(35933U);
    msg.setSourceEntity(246U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(197U);
    msg.value = 0.08921464696309589;

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
    msg.setTimeStamp(0.9291751416726018);
    msg.setSource(25142U);
    msg.setSourceEntity(167U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.3818355055028727;
    msg.lon = 0.6137272241560654;
    msg.height = 0.5007830009897702;
    msg.x = 0.746178872766063;
    msg.y = 0.4756937037401472;
    msg.z = 0.17464070575210744;
    msg.phi = 0.16684377158963692;
    msg.theta = 0.9205121701527369;
    msg.psi = 0.43677700954612597;
    msg.u = 0.855540277206807;
    msg.v = 0.40893518996204414;
    msg.w = 0.8276128209211308;
    msg.p = 0.12166050373271065;
    msg.q = 0.37103287268536145;
    msg.r = 0.5098114681803725;
    msg.svx = 0.6500484755398548;
    msg.svy = 0.7220300416670299;
    msg.svz = 0.5524701331453679;

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
    msg.setTimeStamp(0.416959040566114);
    msg.setSource(21969U);
    msg.setSourceEntity(85U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.3302900413742925;
    msg.lon = 0.11052351143729189;
    msg.height = 0.20931453654562882;
    msg.x = 0.573381984571163;
    msg.y = 0.29786283683835735;
    msg.z = 0.2319888720540263;
    msg.phi = 0.9284664425522164;
    msg.theta = 0.998512636414436;
    msg.psi = 0.626905049881374;
    msg.u = 0.9902926982234006;
    msg.v = 0.08278816390024879;
    msg.w = 0.31383936375791976;
    msg.p = 0.44756158123527723;
    msg.q = 0.05394632568795632;
    msg.r = 0.6134827776903806;
    msg.svx = 0.02371190868794304;
    msg.svy = 0.9138423010287963;
    msg.svz = 0.08672581876522722;

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
    msg.setTimeStamp(0.10837542207852835);
    msg.setSource(43731U);
    msg.setSourceEntity(218U);
    msg.setDestination(22720U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.08772917816172432;
    msg.lon = 0.6140072114605847;
    msg.height = 0.5448683754736898;
    msg.x = 0.6063659683490016;
    msg.y = 0.6689643245359844;
    msg.z = 0.6749012961879443;
    msg.phi = 0.22806389648012193;
    msg.theta = 0.6148505836885079;
    msg.psi = 0.22394088195934192;
    msg.u = 0.060775544204221155;
    msg.v = 0.395629287981037;
    msg.w = 0.6112111723945416;
    msg.p = 0.6835538036770713;
    msg.q = 0.8960775591668172;
    msg.r = 0.6448549709745497;
    msg.svx = 0.33957346715513925;
    msg.svy = 0.31582354371684185;
    msg.svz = 0.8593159311347874;

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
    msg.setTimeStamp(0.7486837850962452);
    msg.setSource(6221U);
    msg.setSourceEntity(15U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(50U);
    msg.op = 223U;
    msg.entities.assign("TZIFMALXJEIAUXKVTJVHBZPHAKSRODDWCVTGZKOMJRZMCLXFDSPCIQYGUXEQCUJSBEGSKHHGMJYFTPKZIUMKOCIHRRSHWWYNDDEZOBWPVBSZJQGJ");

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
    msg.setTimeStamp(0.04702641978992794);
    msg.setSource(63645U);
    msg.setSourceEntity(203U);
    msg.setDestination(14458U);
    msg.setDestinationEntity(157U);
    msg.op = 213U;
    msg.entities.assign("SIOGELSPPUQITELCQDLWWMDYRDVTGXKGRWFAWHHVIETUZUKNG");

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
    msg.setTimeStamp(0.2869764165767066);
    msg.setSource(35200U);
    msg.setSourceEntity(123U);
    msg.setDestination(30546U);
    msg.setDestinationEntity(183U);
    msg.op = 140U;
    msg.entities.assign("OGMDUGLNQFSCHMLZQNWQZBBLEUUEQJJAYTJTKVLTBAGFPZDICXIWGWPLDYEVQALXUHODUSIOJEIPKDYIJJFTPCIEGIXW");

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
    msg.setTimeStamp(0.4163566243930783);
    msg.setSource(6073U);
    msg.setSourceEntity(107U);
    msg.setDestination(29255U);
    msg.setDestinationEntity(200U);
    msg.type = 49U;
    msg.speed = 12898U;
    const signed char tmp_msg_0[] = {87, -8, -58, -3, 115, 62, -67, 39, -28, 66, -10, -24, 103, 71, 87, 37, 125, 42, -63, 31, 44, -96, 47, -75, -48, 3, 7, 42, -39, -14, 52, -52, 82, 16, 32, 85, 37, -48, -67, -97, 70, 91, -98, -94, 109, 54, -30, 105, 62, -14, 108, -9, -128, -81, 85, -20, 21, -110, -33, -46, 14, 103, -83, 41, 73, -124, 108, 113, 89, 78, 82, 31, 38, -52, -39, -65, 85, -66, 16, -85, 105, -18, -109, -97, 80, 20, -25, 81, -52, -21, -114, 43, -100, -59, -126, 98, -36, -76, 92, 114, 93, -27, -122, 14, -55, -92, 45, 40, 72, -93, -13, 117, 51, -16, 74, -110, -32, 76, -126, -118, 81, 116, -123, 15, -64, 110, 119, 75, -34, -66, 63, 55, 15, 104, 28, 69, 74, -64, -11, 120, 43, 124, 41, -14, 89, -78, 93, -47, -127, 23, -7, -54, -32, 92, -16, 71, -98, 4, 7, 92, 2, -8, 8, -115, 84, 79, 102, -45, 82, -29, 20, -24, -104, -94, 5, -113, -75, -115, -39, 65, 84, -74, -77, 5, 92, 22, -52, 75, -78, -116, -98, 87, 54, 80, 121, -74, 53, -70, 104, -109, 18, 87, 13, 125, -53, -110, 16, 45, 103, 24, 92, 29, -64, 45, -23, 97, -96, 60, 126, 67, -20, 64, -32, 70, 76, 119, -1, 68, 48, -109, 26, -30, -39, 114, -127, 33, 109, -35, -94, -10, 38, -81, -124, 51, 72, 54, 3, -123, 84, -8, -113, 99};
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
    msg.setTimeStamp(0.623074138764982);
    msg.setSource(59811U);
    msg.setSourceEntity(7U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(13U);
    msg.type = 202U;
    msg.speed = 37799U;
    const signed char tmp_msg_0[] = {-78, -81, 2, 7, 106, -44, -9, -55, -65, 69, -107, -53, 23, -13, 15, 33, -102, -73, 66, -94, 18, 81, -78, 7, 107, -117, 124, 98, -108, -49, -114, 58, 105, 67, -28, 10, -78, -18, 116, -104, -82, -92, -81, 125, -96, -115, 7, -20, 92, 17, -109, 17, 44, 22, 91, 86, -5, -52, -86, 16, -8, -50, -114, 64, -37, 100, -86, 8, 45, -101, 23, 114, 24, 91, -42, 29, -53, 72, -20, 51, 45, 40, 31, 73, -50, 116, 64, -36, 1, 34, 0, 61, 20, 72, -111, 11, -7, 13, -13, 30, 8, -60, -87, -10, 70, -76, 116, -111, -116, -113, -69, -38, 3, 24, 18, -30, 98, -75, -44, 61, 43, -103, -110, -43, -115, -29, -36, 103, -33, -81, -108, 93, 81, 1, 114, 49, -83, -127, -74, -28, -98, -111, 117, -32, -11, -42, 84, 78, 110, -33, -73, 94, -6, -6, 21, 15, -17, -121, -1, 97, 95, 123, -102, -121, -97, -108, -8, 125, 21, -36, 16, -83, -74, -121, 78, 0, -96, 74, 96, -43, 61, 103, 104, -107, -113, -5, 81, 121, 28, -30, 82, -126, 106, 103, -61, 2, -13, -121, 24, 47, -56, -4, 124, -101, 29, -99, 34, -75, -91, -75, 98, 113, 65, -63, -80, 70, -9, -93, -110, 30, 86, 52, 36, 51, -61, 52, 25, -61, -20, 46, -72, -103, -65, 13, 39, -18, -116, 85, -38, -11, 123, 46, 65, -73, 53, 106, 35, -33};
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
    msg.setTimeStamp(0.08078926872662506);
    msg.setSource(58808U);
    msg.setSourceEntity(26U);
    msg.setDestination(58478U);
    msg.setDestinationEntity(145U);
    msg.type = 233U;
    msg.speed = 4793U;
    const signed char tmp_msg_0[] = {-92, 51, -83, 96, -22, 43, -33, 124, 125, -54, -39, -65, -22, -71, 80, -18, 115, -50, -46, 32, -7, 11, 97, 91, -94, 1, 121, 67, 40, -75, -120, -6, 6, 90, 78, 84, -29, -76, 44, 15, -99, -45, -89, 121, 93, 18, 115, 113, -121, -25, -109, 111, -22, -124, -44, 59, 39, 3, 56, 1, 63, -112, -93, 88, 91, 48, -23, 9, 57, 50, -87, -122, -88, -13, -28, 29, -64, -85, -48, 123, -96, 96, -117, -116, -126, 15, 54, 49, 27, 16, 102, -128, -19, -1, 80, -71, -92, 47, -44, -3, -32, 120, 15, -3, 20, -75, 5, -74, -75, 19, -95, -54, -33, 33, 18, 25, -99, -122, -24, 109, -118, -55, 2, 59, -100, 83, 59, -71, -7, -35, -3, 26, -41, 123, 55, -87, 28, 126, -99, -101, -52, 1, 52, -102, 1, 123, 94, -33, 69, 19, -118, -124, 26, -58, 108, -39, 123, 52, -4, 60, 7, 2, 113, -88, -115, -95, -2, 39, -119, -49, -31, 17, 20, -34, 19, -85, -51, -56, -72, -74, -21, 47, -94, 98, 107, -63, 76, -4, 93, 32, -59};
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
    msg.setTimeStamp(0.8417980072060665);
    msg.setSource(62292U);
    msg.setSourceEntity(247U);
    msg.setDestination(5702U);
    msg.setDestinationEntity(118U);
    msg.op = 136U;
    msg.tas2acc_pgain = 0.9351959984141456;
    msg.bank2p_pgain = 0.518588988701186;

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
    msg.setTimeStamp(0.7345167179456009);
    msg.setSource(35343U);
    msg.setSourceEntity(222U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(205U);
    msg.op = 99U;
    msg.tas2acc_pgain = 0.1539796673062177;
    msg.bank2p_pgain = 0.8828970389049562;

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
    msg.setTimeStamp(0.38219316004826964);
    msg.setSource(6980U);
    msg.setSourceEntity(210U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(5U);
    msg.op = 66U;
    msg.tas2acc_pgain = 0.9400360437814234;
    msg.bank2p_pgain = 0.568585345355264;

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
    msg.setTimeStamp(0.3710008439840172);
    msg.setSource(2257U);
    msg.setSourceEntity(131U);
    msg.setDestination(11542U);
    msg.setDestinationEntity(207U);
    msg.available = 2098966333U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.36236145369782413);
    msg.setSource(6918U);
    msg.setSourceEntity(202U);
    msg.setDestination(62675U);
    msg.setDestinationEntity(72U);
    msg.available = 85552077U;
    msg.value = 107U;

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
    msg.setTimeStamp(0.413528953753884);
    msg.setSource(35082U);
    msg.setSourceEntity(69U);
    msg.setDestination(1156U);
    msg.setDestinationEntity(226U);
    msg.available = 2336182082U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.17559221954319182);
    msg.setSource(8771U);
    msg.setSourceEntity(88U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(247U);
    msg.op = 52U;
    msg.snapshot.assign("LVWNVVOWIBDUEWTARNYSJMKKEMHTJYFAIFOZKJNBELWKQRYLEZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TVJEDQZLXXOWKQIFTKAFDKLYHIYYQNRZMPFRIUJDXMTZLQLBPPWRMHACXOJZPTFCZCSZNJRFOOBOUZVYKATWLIKGCSGEGQUDOOCAFU");
    tmp_msg_0.sys_type = 0U;
    tmp_msg_0.owner = 37735U;
    tmp_msg_0.lat = 0.6905343136262361;
    tmp_msg_0.lon = 0.9747750309238408;
    tmp_msg_0.height = 0.7782247244903874;
    tmp_msg_0.services.assign("FIKAJYXECRSZKHVDEGOKQRMCBSNMJYPYDIWGNPAXXPCFCROGAEP");
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
    msg.setTimeStamp(0.6301265766807479);
    msg.setSource(44498U);
    msg.setSourceEntity(152U);
    msg.setDestination(10354U);
    msg.setDestinationEntity(217U);
    msg.op = 25U;
    msg.snapshot.assign("OLJAQWRTASZGGUEXAMNWTBBHUUXMPWSOIZDLTQJCDSWMBCIEZVMMNSVDBJEOFZFNQBMNUTSGIHXNAXAHKJUKRHVFKEHGKNLTNKQVCWZQELJPGMDPTGYHNZEO");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3528584341712777;
    tmp_msg_0.lon = 0.06124893629904671;
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
    msg.setTimeStamp(0.7443117159885203);
    msg.setSource(43706U);
    msg.setSourceEntity(247U);
    msg.setDestination(40325U);
    msg.setDestinationEntity(188U);
    msg.op = 77U;
    msg.snapshot.assign("HEEYGJWDEWLFIKIDNEVYOZOMSZFXPJUMXQHAEIQNGGAUAGIEFWDSBNIQMNOMPRUUQPFAXSDJKVKCLBHAPGDRMXQRKNCCSIJPUZKRCHNOWSLRKUYZRYWWBKTTBVVAFCQUCZRKHBZQJPLBXPTPLIO");
    IMC::ENCAwareness tmp_msg_0;
    tmp_msg_0.depth_at_loc.assign("MFLYSFAEVBXEYWKNRBZVZBFLQXSAAAQLZWVICNILS");
    tmp_msg_0.danger.assign("FZDPRTLFINXGEFBXRXKDYJCGDFUUDQADRKAATZJNGNUTCVHPSWDPQZDKZLYQCBQJNEDURZJSSLYSYOPYEGOEPMETQLKFBIWWGUYLPOMHMFCMTGO");
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
    msg.setTimeStamp(0.62789281521671);
    msg.setSource(16848U);
    msg.setSourceEntity(81U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(15U);
    msg.op = 88U;
    msg.name.assign("MPZTXQTQVEIKKTHKAFXHNXZBKZTHKQGONFVCIUSRSSTJCLUDJGSHCDLCMTHAUNPXYEIUKDNEFRAPIHOUARESTMCPZBKLNGQDLAFHATMDGOMPCOG");

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
    msg.setTimeStamp(0.058675741478123045);
    msg.setSource(6253U);
    msg.setSourceEntity(110U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(144U);
    msg.op = 149U;
    msg.name.assign("PQBNIPJXKJFBPOZXNQYOIVSZDJRNLZSOYRWLBRXGLBPDGUFVAACXSJNISFDPCZWAAJCQITKSREWYEMQHHXHHFUFNLCDYDLQEVJSOWUGCPTUAYLMPHCKVPWWZGFGIWBRAUKTBKYSTRUDBUEFHJMVNVKHEIKNAXHMXVLUMIVSDTEEJQMVIUWEIZEVONFCBJXDMHXGLZYBRCQQTDLTSROPSKTGYKAWNBYMO");

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
    msg.setTimeStamp(0.4158664916081515);
    msg.setSource(63839U);
    msg.setSourceEntity(82U);
    msg.setDestination(26383U);
    msg.setDestinationEntity(216U);
    msg.op = 236U;
    msg.name.assign("XFVNIDGDCROQNJQXCKWRHMVWUGELSCAPDRDPXVRMADZE");

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
    msg.setTimeStamp(0.11868259002530845);
    msg.setSource(48388U);
    msg.setSourceEntity(132U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(177U);
    msg.type = 38U;
    msg.htime = 0.1677504221467253;
    msg.context.assign("UKXJFRGSGHAGGFRVHGTNRYGPQSWEIB");
    msg.text.assign("YDHSSWAGLQ");

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
    msg.setTimeStamp(0.7184604972818058);
    msg.setSource(8143U);
    msg.setSourceEntity(5U);
    msg.setDestination(5321U);
    msg.setDestinationEntity(88U);
    msg.type = 233U;
    msg.htime = 0.15352876016631511;
    msg.context.assign("UVROEIPEOHRHUKGGHGFSCDRAXRDEUTHLWMUSRINZXCZPTEQVVMHWYNTBBYDGNLFKLZQSBYFCBMJSOOKNWZMCKLWEXPYRDEIMTCESYWIPFCKQQJTGNQTOZANYHBAQJUCXLVQGJTZITJNDRKRHEBUVUMPOSLWLFGIDATZOJMLIHNTJEDAFQAOUICXPJKJBUGSHMAYPXPXQYVRKVVMPSBWFSYFLZBZUGJX");
    msg.text.assign("SBEEQSCXIFLMOCSYYWXZNIFHXVCQTOEANHNWWFLRYVQBAMIFMLJEPDZKXGLSXEHPRXYLOYZNEXHFKKUQWIDJALYVEVJBSUMGJLCZSTLYEXSXVITYFXOSZLWCCOWZUWKQZJPTGNRRMMUANPDKOAHTIKEJHNQIHYQCMBFMDOOZNGGAMJSAPO");

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
    msg.setTimeStamp(0.3803849348799164);
    msg.setSource(53954U);
    msg.setSourceEntity(12U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(60U);
    msg.type = 110U;
    msg.htime = 0.6578288438199367;
    msg.context.assign("GCOVHJOLXYYQEXSCQBSKMSHTOWPGRQOPSIKOVAYSFZYERDCVQKPEMFWIDQGLQSTLTWIFMMTLLVJFNACIRIMBVOZTPBNMXASTDYGPENXMQEAAXZBHKKGBJTVSYDXDYUCWSLGYPNIJRKKHFALXUEHPFAVKPMDJRZKQRFL");
    msg.text.assign("FBCZTDNBKKBKNDSWOEHGPGWJVLDPHRICFISTGCKORPVFVBMCSVXAHEMRYSETBNJNKXAUWLCJUKJWWCCGAMYMBWVXLJYIJHLIENKWMLPNIFRQZZHUSCIPCJIPYQCEAPOBHLTBHYVGUFENQSXEZRDSQQWSMDA");

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
    msg.setTimeStamp(0.3869050285003224);
    msg.setSource(45393U);
    msg.setSourceEntity(159U);
    msg.setDestination(17592U);
    msg.setDestinationEntity(122U);
    msg.command = 30U;
    msg.htime = 0.1379912790711546;

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
    msg.setTimeStamp(0.5340210957835905);
    msg.setSource(54214U);
    msg.setSourceEntity(29U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(194U);
    msg.command = 48U;
    msg.htime = 0.3131012721057982;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.htime = 0.7676741931938256;
    tmp_msg_0.context.assign("VKUWKCWITGKLEBSJTUAOTZZTADUAOQQFAGHFNYXDQ");
    tmp_msg_0.text.assign("NGIEJAMVRBQSRIZSWTRAUZUQAMRWSOCVRYNHLKFLGAYLWDQTGJZFXLAWOHDSFACPHJFHLWEUPUENRZTVVDZKCFMLBQPRNYNOTGOIFABTAMPIBAYWPWUOQTDEWDSIXIDUIIZPJQZXQPFBODTESFOSIXCHXEGQCPQUVXNCVVJXYLHUKBGKSPHIYKRKZJFMRXKEUDGECNE");
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
    msg.setTimeStamp(0.6070040710970093);
    msg.setSource(48226U);
    msg.setSourceEntity(210U);
    msg.setDestination(12474U);
    msg.setDestinationEntity(137U);
    msg.command = 100U;
    msg.htime = 0.3711526269130514;

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
    msg.setTimeStamp(0.2285904246347471);
    msg.setSource(4567U);
    msg.setSourceEntity(161U);
    msg.setDestination(19631U);
    msg.setDestinationEntity(218U);
    msg.op = 66U;
    msg.file.assign("RCFDLSYJZDTWAWRYVUBBMAGBKAWXBLHCBGPMNQQKKVZLCJJJMSLOREVOBIALZKJTFMCPSSIEUTHTFHPJBCMSFHEQOFNYGJXOLHZJUZNODIUEOFCDVNVHUHLUYOMXUMGSQRCYKMVEMZLWXCDXTKOY");

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
    msg.setTimeStamp(0.9747898001484476);
    msg.setSource(55952U);
    msg.setSourceEntity(173U);
    msg.setDestination(32753U);
    msg.setDestinationEntity(28U);
    msg.op = 30U;
    msg.file.assign("DSNQWPYZXUQFKGMLSCU");

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
    msg.setTimeStamp(0.2338824632690566);
    msg.setSource(24480U);
    msg.setSourceEntity(136U);
    msg.setDestination(47679U);
    msg.setDestinationEntity(77U);
    msg.op = 132U;
    msg.file.assign("SOOKQKXFIILMOSUGWKAHRSZXOLWCVNUGQONAXJANW");

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
    msg.setTimeStamp(0.017517443147756162);
    msg.setSource(21655U);
    msg.setSourceEntity(238U);
    msg.setDestination(47594U);
    msg.setDestinationEntity(141U);
    msg.op = 196U;
    msg.clock = 0.868752677305487;
    msg.tz = 27;

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
    msg.setTimeStamp(0.30701462736012);
    msg.setSource(41341U);
    msg.setSourceEntity(111U);
    msg.setDestination(41081U);
    msg.setDestinationEntity(7U);
    msg.op = 210U;
    msg.clock = 0.2302339817496849;
    msg.tz = 59;

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
    msg.setTimeStamp(0.4127864825686943);
    msg.setSource(34648U);
    msg.setSourceEntity(130U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(233U);
    msg.op = 68U;
    msg.clock = 0.6208050887278266;
    msg.tz = 62;

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
    msg.setTimeStamp(0.1701653815739287);
    msg.setSource(50148U);
    msg.setSourceEntity(99U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(0U);
    msg.conductivity = 0.16794646138008207;
    msg.temperature = 0.28366282000521115;
    msg.depth = 0.5860071081079765;

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
    msg.setTimeStamp(0.22368736777788334);
    msg.setSource(52163U);
    msg.setSourceEntity(174U);
    msg.setDestination(45888U);
    msg.setDestinationEntity(74U);
    msg.conductivity = 0.1759095712833828;
    msg.temperature = 0.5461733361964964;
    msg.depth = 0.19903343143629737;

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
    msg.setTimeStamp(0.03188928418824177);
    msg.setSource(32392U);
    msg.setSourceEntity(43U);
    msg.setDestination(25601U);
    msg.setDestinationEntity(105U);
    msg.conductivity = 0.33063780982489077;
    msg.temperature = 0.3487213900499949;
    msg.depth = 0.8421806870657308;

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
    msg.setTimeStamp(0.8920196904204574);
    msg.setSource(12791U);
    msg.setSourceEntity(25U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.6159300242936496;
    msg.roll = 43326U;
    msg.pitch = 32726U;
    msg.yaw = 49449U;
    msg.speed = -32618;

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
    msg.setTimeStamp(0.6200382617089812);
    msg.setSource(8123U);
    msg.setSourceEntity(193U);
    msg.setDestination(18597U);
    msg.setDestinationEntity(80U);
    msg.altitude = 0.6927014577547149;
    msg.roll = 41854U;
    msg.pitch = 17571U;
    msg.yaw = 2151U;
    msg.speed = -1468;

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
    msg.setTimeStamp(0.10155354629798119);
    msg.setSource(15330U);
    msg.setSourceEntity(186U);
    msg.setDestination(17810U);
    msg.setDestinationEntity(215U);
    msg.altitude = 0.9245974021720467;
    msg.roll = 13302U;
    msg.pitch = 9071U;
    msg.yaw = 64280U;
    msg.speed = 6128;

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
    msg.setTimeStamp(0.9043563132703024);
    msg.setSource(48985U);
    msg.setSourceEntity(46U);
    msg.setDestination(43529U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.4117394481508576;
    msg.width = 0.823247411170495;
    msg.length = 0.2517168774107378;
    msg.bearing = 0.11814398952933325;
    msg.pxl = 68;
    msg.encoding = 184U;
    const signed char tmp_msg_0[] = {46, 77, 98, 66, 58, 121, 125, -88, -25, 50, 94, -96, 102, 14, 13, -61, 122, -54, 111, -19, 4, 11, 93, 22, 73, -22, 112, 12, 64, -70, 105, -25, -70, 51, 109, -9, 49, -109, -18, -18, -4, 50, -59, -14, 73, -126, 70, 88, -85, 62, 11, -106, 22, 85, 91, -82, -53, -14, 33, 83, 66, -12, 59, -71, -74, 2, -44, -92, 57, -82, -61, 2, -116, -92, 61, 74, -127, 47, -7, -48, 108, -99, 50, -24, 20, -119, -127, 117, 77, 67, -10, -119, -126, 1, 16, -30, 118, -20, -45, 43, 99, 48, -54, -4, 31, -112, -40, 56, -91, 108, 108, 78, 37, 10, -89, -81, 103, 45, -27, -112, -104, -73, -71, 23, -25, 55, 34, 35, 78, 109, -123, 27, -124, -88, -13, -116, 63, 37, 80, -70, -124, -103, 1, 61, 50, 117, 126, 43, 47, 45, 92, -88, -56, 126, -102, -9, -12, -68, 80, 38, 57, 0, 119, -89, -2, 88, -56, -79, 56, -21, -116, -96, -96, 74, 110, 32, 4, -96, 118, 47, -92, 62, 41};
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
    msg.setTimeStamp(0.2788153699490963);
    msg.setSource(36257U);
    msg.setSourceEntity(97U);
    msg.setDestination(24876U);
    msg.setDestinationEntity(40U);
    msg.altitude = 0.8805838030715754;
    msg.width = 0.863512002061107;
    msg.length = 0.7525047431264226;
    msg.bearing = 0.8473686118566301;
    msg.pxl = 13077;
    msg.encoding = 90U;
    const signed char tmp_msg_0[] = {-103, 27, 19, -23, -54, -7, -69, -49, -73, -55, -87, 96, 103, -110, -108, 74, 70, -28, 95, 39, 10, -109, 120, -2, -83, 106, 95, 58, 22, 70, 104, 17, -56, 113, -8, -16, 71, -59, 112, -50, -32, -73, 54, 98, -122, -38, 100, 85, -116, -51, 50, 40, -3, 37, 43, 89, 93, 100, 66, 4, 48, -29, -26, 49, 106, 50, -50, 31, -73, 118, -2, -53, 11, 11, -59, 25, 42, 3, -27, -76, -112, -60, 41, 123, 29, 95, -64, -69, 122, -3, 73, 69, -33, 33, 78, 71, 38, 71, -4, 75, -108, -112, 98, -71, -7, -77, 67, -108, 106, 80, 87, -55, 84, -127, -95, 40, 10, -84, -53, -82, -89, -13, -14, 112, -50, -86, -104, -111, 109, -93, -15, 63, -79, -39, 85, 1, -40, 26, 6, -38, 103, 87, 8, 21, 46, -104, 51, -36, 88, 104, -127, -99, 48, -82, 56, 106, -31, 68, 34, 59, 93, -128, 108, 11, -103, 22, 103, 41, -108, -22, -108, 104, -91, -74, -53, 65, -21, 118, -126, -29, -52, 69, -49, -93, 112, 54};
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
    msg.setTimeStamp(0.3262834780232855);
    msg.setSource(36436U);
    msg.setSourceEntity(87U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.526577517326729;
    msg.width = 0.9150164580664377;
    msg.length = 0.017936559924705664;
    msg.bearing = 0.6555373955706896;
    msg.pxl = 10566;
    msg.encoding = 157U;
    const signed char tmp_msg_0[] = {123, -69, -97, -99, 10, -128, -10, 86, -81, 83, 90, 118, 85, 40, -48, -63, 51, -52, -32, 97, -8, 20, -17, 8, 42, -5, -113, 90, 110, -84, 46, 23, 121, 52, 5, 98, 92, 14, -6, -117, -18, -46, -112, -46, 2, -59, 77, -91, -24, 65, -77, 43, -53, 2, 4, -23, 87, -109, 42, -9, -74, 114, -74, 57, 106, -31, -117, -94, 50, -61, -80, 116, -121, 60, -55, -42, 35, 8, 86, -103, 1, -63, 16, 100, 23, -55, 86, 39, 22, 16, -95, -56, -80, 74, 32, -46, -32, -17, -20, 100, -2, 34, 2, -89, -23, 104, -29, 32, 89, -63, -55, -96, -76, -66, -100, 123, -107, 118, -29, -49, -127, -96, 54, 24, 85, 17, -124, 44, -123, 21, 120, -32, 8, 67, 65, 65, 49, 109, -8, -27, -106, -97, 30, 11, 72, 46, -10, -126, -76, 78, 25, 56, -98, -71, 13, -96, -22, 0, -8, -54, -60, 110, -82, -87, -79, 100, -118, 111, -66, -29, -43, -78, 52, -54, 104, -10, 87, -75, 12, -98, -53, -128, -110, -115, 116, 103, 110, -126, 33, 125, -9, -123, -32, -99, 21, -74, -7, 99, 45, 55, -80, 4, 50, 5, 65, 82, -74, 64, -82, -66, 92, -45, 5, 102, -3, 48, 117, 68};
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
    msg.setTimeStamp(0.012402852707102507);
    msg.setSource(8685U);
    msg.setSourceEntity(100U);
    msg.setDestination(33429U);
    msg.setDestinationEntity(25U);
    msg.text.assign("JBQRLBEZMTAHSYXWGFUIMVIPFOUFDNKEYNGUDVWSIBZDYAN");
    msg.type = 184U;

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
    msg.setTimeStamp(0.032707291132524796);
    msg.setSource(451U);
    msg.setSourceEntity(82U);
    msg.setDestination(98U);
    msg.setDestinationEntity(188U);
    msg.text.assign("DXJNKBKYCECJSDXPFJQHDIOEIHPRGTLPEYQPMNWEGU");
    msg.type = 229U;

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
    msg.setTimeStamp(0.32996567060752313);
    msg.setSource(16779U);
    msg.setSourceEntity(225U);
    msg.setDestination(15242U);
    msg.setDestinationEntity(222U);
    msg.text.assign("WJMUVFXFYGELXXIJTZEBLFYEZPSMHDCCQPHCKIAEZQAECYMC");
    msg.type = 171U;

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
    msg.setTimeStamp(0.4297734265291486);
    msg.setSource(223U);
    msg.setSourceEntity(197U);
    msg.setDestination(41871U);
    msg.setDestinationEntity(233U);
    msg.parameter = 87U;
    msg.numsamples = 70U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45903U;
    tmp_msg_0.avg = 0.11921333716773774;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.42748413946000485;
    msg.lon = 0.19669730975226019;

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
    msg.setTimeStamp(0.9150704608380482);
    msg.setSource(56225U);
    msg.setSourceEntity(32U);
    msg.setDestination(55468U);
    msg.setDestinationEntity(147U);
    msg.parameter = 139U;
    msg.numsamples = 144U;
    msg.lat = 0.42132780730702324;
    msg.lon = 0.5539717182179208;

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
    msg.setTimeStamp(0.5021611699822122);
    msg.setSource(33617U);
    msg.setSourceEntity(172U);
    msg.setDestination(51708U);
    msg.setDestinationEntity(12U);
    msg.parameter = 250U;
    msg.numsamples = 88U;
    msg.lat = 0.9135299827578677;
    msg.lon = 0.7888088300747513;

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
    msg.setTimeStamp(0.6687563951872251);
    msg.setSource(50400U);
    msg.setSourceEntity(118U);
    msg.setDestination(62473U);
    msg.setDestinationEntity(47U);
    msg.depth = 17057U;
    msg.avg = 0.11004524216386025;

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
    msg.setTimeStamp(0.29676610575711937);
    msg.setSource(25166U);
    msg.setSourceEntity(111U);
    msg.setDestination(30551U);
    msg.setDestinationEntity(190U);
    msg.depth = 41930U;
    msg.avg = 0.2555250883089878;

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
    msg.setTimeStamp(0.17819907662302037);
    msg.setSource(16440U);
    msg.setSourceEntity(173U);
    msg.setDestination(41531U);
    msg.setDestinationEntity(104U);
    msg.depth = 34927U;
    msg.avg = 0.5666419197823601;

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
    msg.setTimeStamp(0.13411210924276995);
    msg.setSource(38784U);
    msg.setSourceEntity(172U);
    msg.setDestination(60382U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.5180441482371504);
    msg.setSource(24572U);
    msg.setSourceEntity(97U);
    msg.setDestination(14242U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.18977119717241964);
    msg.setSource(64711U);
    msg.setSourceEntity(162U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.20441536518853232);
    msg.setSource(40205U);
    msg.setSourceEntity(19U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(20U);
    msg.sys_name.assign("HCMIWQYUJBFIQQVEJAIVYCOVRPBDLLSRKDEHTCKJPDRACRNPBJLPZGVSRYJSMZZSDXTFZJWSEKHWQLPRLUXNXIBMIQKDTTABMQOPWCNYOCNEKNHJGMMQZGZXXTGEGXPUNSTWVGOFKALEAACMCRREGMNOCLYHFZEBVWKBUSSXOFTVLYYIUQWQFRIYJDARVTUSUDKPAILFVGDXLMZIAYVAOOXPWSEFWUZHPT");
    msg.sys_type = 165U;
    msg.owner = 35356U;
    msg.lat = 0.37225496992902507;
    msg.lon = 0.45911541299385616;
    msg.height = 0.6655299821032521;
    msg.services.assign("LIEUICETVGJZGYPEWFLVNOLFFDGMDYPVDSPLENHHOCAGDERDOLTYLKPFCZBEVCGYKJHJWGHXMEIBFWUBHRUXHGCDKKHOSYNONSVIPVWTKTTQPADQNCQWBCXDZGKANXWZUBXEUMKVXTFXPQTMKOLQRCMYDWNQRCQRXIUAJYZRZSSAYSJQQFXHNYRRAHJSLJBLHIWW");

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
    msg.setTimeStamp(0.5330874346929653);
    msg.setSource(62712U);
    msg.setSourceEntity(197U);
    msg.setDestination(7253U);
    msg.setDestinationEntity(32U);
    msg.sys_name.assign("RFRPBIZRARLNYAIHTWPMDUPNXNOOHLILJGSFOCKKBIGBRCDHSRFKDEDEYYEZHGAXYXACFQECMWLXZWXMFYPZPQZJAWYSINLIFTHDRKBHTABFLVRTQPSJJUNJPFOUZVSNGQHBGUOHSOVIGQBVZCATQBPC");
    msg.sys_type = 124U;
    msg.owner = 648U;
    msg.lat = 0.6905224816419675;
    msg.lon = 0.046970227314693025;
    msg.height = 0.8767247984958185;
    msg.services.assign("MZTEVLUCYCHHDOSPNFANPQPBFMCAJJGHQGJTYQANVFEDIKEBXMLIGTUTBIRKONUWWURKOTFAUZENKWJQBMMXBUYEQLSZJCLVPKWJLHSZRSUDTJEOXSSFUGCLXFXVJHGXSBUDFSOMVDVSQRCMYNIYQDLMLAEMHZZTPNWQCBXHHERXRAOTGNVOLBHWPPWP");

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
    msg.setTimeStamp(0.18287125260890158);
    msg.setSource(43806U);
    msg.setSourceEntity(250U);
    msg.setDestination(40245U);
    msg.setDestinationEntity(162U);
    msg.sys_name.assign("SWVKKWOXSOBWKIVYGXTXKFJERPFPXCDUUOLFOUKIHNKGEMGHDLUPYGNGFFETCWJNL");
    msg.sys_type = 139U;
    msg.owner = 29776U;
    msg.lat = 0.9659078400931262;
    msg.lon = 0.8378365846027125;
    msg.height = 0.9725125316935215;
    msg.services.assign("BDLJQQLXSSEIWKDFHVAYZUVFCTBCMJIYXDPJISJAKYEDJERKMSBKFJGHEUQDFHNSXEDITTRWBYXDZJWQQXMKZOVXWMCGBWZPGCBPNRBIDXKRDACSMOJRLJHQFWVUPVISZCKVICWWCOUOZLCSOPUPFYQPTKZEBAJLNGMQWAPRTHMGRMOOHEIMNSURU");

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
    msg.setTimeStamp(0.5919722266300133);
    msg.setSource(3349U);
    msg.setSourceEntity(209U);
    msg.setDestination(11300U);
    msg.setDestinationEntity(43U);
    msg.service.assign("GDTCCYLHZGDKXHTPHBPLAZJJVMIXNTTHNXYWLWMMPFRSFAAUOOSOXALTLIWDCSNHRGIQRHOEPJTTTLUSMMWZEXFAEWFGHSGYJNPQRQCHVQNFUSNJAJWLYRLVKSGBRUOVKAMEXEKMQ");
    msg.service_type = 117U;

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
    msg.setTimeStamp(0.48537484182570045);
    msg.setSource(51826U);
    msg.setSourceEntity(116U);
    msg.setDestination(64768U);
    msg.setDestinationEntity(150U);
    msg.service.assign("UKVWVAFDOJKMZONBXOOPRUGSZTYOQMELUPRIRKRGAMRBMHGPCDWCAVX");
    msg.service_type = 236U;

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
    msg.setTimeStamp(0.2415814904418746);
    msg.setSource(26721U);
    msg.setSourceEntity(56U);
    msg.setDestination(15739U);
    msg.setDestinationEntity(177U);
    msg.service.assign("GIFTVGUXNUYVMJCBQIQBRMKOPFAXBBGLSIJZPVIYALCDWZOKXHQTHOANRSCXWRWXPEZIVUBEQWASCCWXMKJCGKBGTRRDHPJAHZIPBSEVSPKEJKENYNDDMMTXFHYMEDIXOBNRPMPXIHRYYRLVKSTQSQDWJVVNEDTHJDOUCFJISCRWMLUDXNGOANLZOASQELFVTWMTFIGUFYFPWHGQPZULRJUEBTKQFAOGZKLZYGCOHZMWHJUKNY");
    msg.service_type = 124U;

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
    msg.setTimeStamp(0.06514086376379158);
    msg.setSource(30798U);
    msg.setSourceEntity(220U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4182698482536942;

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
    msg.setTimeStamp(0.47149009474698045);
    msg.setSource(49391U);
    msg.setSourceEntity(58U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(185U);
    msg.value = 0.5722056423500215;

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
    msg.setTimeStamp(0.18253897260724672);
    msg.setSource(54094U);
    msg.setSourceEntity(161U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(157U);
    msg.value = 0.3982169085288594;

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
    msg.setTimeStamp(0.03281474539359419);
    msg.setSource(2271U);
    msg.setSourceEntity(129U);
    msg.setDestination(59132U);
    msg.setDestinationEntity(38U);
    msg.value = 0.23740037633833844;

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
    msg.setTimeStamp(0.4738457388717743);
    msg.setSource(24319U);
    msg.setSourceEntity(105U);
    msg.setDestination(10655U);
    msg.setDestinationEntity(7U);
    msg.value = 0.2901193144137604;

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
    msg.setTimeStamp(0.2689428347311378);
    msg.setSource(64558U);
    msg.setSourceEntity(125U);
    msg.setDestination(59715U);
    msg.setDestinationEntity(64U);
    msg.value = 0.5074107181457166;

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
    msg.setTimeStamp(0.4998987382321731);
    msg.setSource(15419U);
    msg.setSourceEntity(105U);
    msg.setDestination(30054U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5479303304138332;

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
    msg.setTimeStamp(0.7394205655883279);
    msg.setSource(35850U);
    msg.setSourceEntity(107U);
    msg.setDestination(8432U);
    msg.setDestinationEntity(30U);
    msg.value = 0.4582599014079528;

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
    msg.setTimeStamp(0.672609318285286);
    msg.setSource(7590U);
    msg.setSourceEntity(95U);
    msg.setDestination(62960U);
    msg.setDestinationEntity(128U);
    msg.value = 0.2061179101505346;

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
    msg.setTimeStamp(0.43624678574062226);
    msg.setSource(41187U);
    msg.setSourceEntity(88U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(203U);
    msg.number.assign("KLURIYVOOABNSUHUVIZNSVFFLAGTQMGJBJGJPODSIGPDGWYTSLYRFEKLHQVEJEEEQJRONECIWLYUTNCLHRKNPAXZHQSXCOISJZSNUTDNVIDCONLOHGRBFRUKTCFXWAKXMGGJBDDWYVYQE");
    msg.timeout = 50370U;
    msg.contents.assign("NYMQSKDQUAOPKJCYBGRCEFEYJZCTSGLJWTUDCNBTQCSJVRGJDFUEWUENDFZESASBOISQIBCPXGSAXJIIBTTWNQTFMFRCPZAZZZMKLWSYOPJRMZAWKMADSEXNCBWMRHVLYMGXJFNGADHDULQTWYGPFPROXXEBHMXQPZHASUKTIARVHOHYZVKHJQVNCUBBPIOUKGFPILOVOEYKWLHM");

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
    msg.setTimeStamp(0.3059853473056908);
    msg.setSource(60008U);
    msg.setSourceEntity(95U);
    msg.setDestination(53906U);
    msg.setDestinationEntity(42U);
    msg.number.assign("RGKCYQJEMKHGFKRLZITSNKZWMWWVWHBXOLUVJXZSPDBLCDXEQEYFPVTGZAJCPTFXSGVNPVTRFNHGXDFQNARXRETLWIGLJBIQZHNAFSSQHRJBLYQXOMVEHKUCVUGEMIBOUJCQJGYLZCYBFZOSIODDERSZYMCRNTBKHIZMDPUAYP");
    msg.timeout = 7915U;
    msg.contents.assign("OCSDAKLUDXTDNDFSAFMRSGGBGFACBSWGGNIRTHUOIZAYCZOPXACUKGYRABEYBUBITBFJJKBYOTMNYZEKWEFHLERQJELXHXQ");

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
    msg.setTimeStamp(0.6810665428731649);
    msg.setSource(62135U);
    msg.setSourceEntity(162U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(200U);
    msg.number.assign("HXSNMUEMRWGUXDNYQYSAB");
    msg.timeout = 30390U;
    msg.contents.assign("TLGMTCBDSYDJELOUXNZOQXRVERGVROSQDRJALWBRTFWGVKFFHNVSSPUZYIEXQKAOTMUJJOYPHBYGITKIHYHTBMVKMUDYCQXFWWJZXLUOMVOVCAVMLQFNZRSWNZGXBQYIDHLYTGERMMZCCWINZPTKMDKRPEHDQZXXFKFAGKPZNHDNKOHWQWCANXPERIIPKSTPHAZWLGHXPJYUQUFCFSDYCCJNPAEBCFUBUVLD");

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
    msg.setTimeStamp(0.9131115550093195);
    msg.setSource(22860U);
    msg.setSourceEntity(244U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(245U);
    msg.seq = 2893767484U;
    msg.destination.assign("JWSWOBHJGBIEXKVVBDBGWODNWBTPSUWOMEHTRQUZNQHYKNRMFFSUMQEFHFZPFMYUAILVDBXGXYBCCCFML");
    msg.timeout = 37221U;
    const signed char tmp_msg_0[] = {-13, 102, -69, 86, -12, -16, -23, -87, -64, 110, -125, 40, 0, 7, 20, 34, 75, -85, 58, 10, -58, 107, -35, 25, -108, -128, -102, 6, -31, -18, -49, 100, 99, -36, 18, -52, 83, -51, 7, -93, 20, -92, -35, 34, -61, -90, -104, 50, -122, 95, 94, -37, 70, -114, -19, -92, 37, -122, -90, 82, -11, -27, -18, 41, -32, -88, 74, -90, -65, 37, 17, -121, -30, 77, -59, -126, 25, 6, -71, 58, -100, -69, -7, 61, 17, -76, 82, -57, 123, 78, 68, -19, -25};
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
    msg.setTimeStamp(0.34834703143334067);
    msg.setSource(8188U);
    msg.setSourceEntity(201U);
    msg.setDestination(17751U);
    msg.setDestinationEntity(31U);
    msg.seq = 2693231641U;
    msg.destination.assign("FMLGBEGJHQXVOHKEUCXRQRPYOIXZDBZRUXWYIBPWVJZIPHAWCFXFUTOVYRLXHYCRMLEDCKGIKILQTIFYWQAXJWYXNLBJLDPVOBATBKVERLQUMTWZHNVSRGGTXCMQWOUXYOBTHQCDSSDGBLZJAN");
    msg.timeout = 6528U;
    const signed char tmp_msg_0[] = {-111, 72, -98, -104, -72, -6, 53, -86, -47, -31, -88, 57, 122, 21, 122, 15, -126, -114, -31, -122, 13, 121, -99, 93, 111, 73, 0, 52};
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
    msg.setTimeStamp(0.7384822640109041);
    msg.setSource(43744U);
    msg.setSourceEntity(42U);
    msg.setDestination(33531U);
    msg.setDestinationEntity(100U);
    msg.seq = 262080591U;
    msg.destination.assign("XLIEWFCAMWLSUHJBMZGBGZYWPZROABWLZUSWIUVWQQPCJEYOGYTSPNFEXSGYEJZH");
    msg.timeout = 13704U;
    const signed char tmp_msg_0[] = {106, -57, -110, 71, 29, 125, 50, 96, -51, -95, 46, 66, -67, 2, 50, 62, -121, 34, 29, -92, 125, 86, -115, 87, 54, 7, -127, -109, -56, -62, -3, -65, -35, -63, -28, -18, 122, 113, 116, 56, 3, -45, -56, -59, 76, 40, 105, 95, -107, -103, 121, -115, 107, 82, -98, 112, 126, 101, 109, 46, 100, 45, 108, -124, -73, 99, 96, -29, 35, -113, -124, 116, -66, 116, 15, 96, 35, 44, 67, 65, -13, 36, 42, -42, 66, 32, -56, 95, -14, 9, -18, -33, -71, -86, 98, -31, -24, -95, 38, -110, 48, -119, 74, 99, 22, 21, -95, -99, -108, 34, -51, 45, -11, 53, 30, -122, -25, -94, -97, -4, 37, 101, -82, -1, 17, -127, 114, -87, -100, 16, -80, 93, 99, 89, -86, 55, -45, -8, 84, -71, 81, 126, -17, -100, -74, 44, -127, 2, 11, 5, -10, 122, -47, 54, -67, -48, 9, -16, -7, -100, 43, -20, 40, -44, -46, -96};
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
    msg.setTimeStamp(0.7459259990852406);
    msg.setSource(13344U);
    msg.setSourceEntity(187U);
    msg.setDestination(64193U);
    msg.setDestinationEntity(134U);
    msg.source.assign("HXPUEDAHDFKQRIYNBICFHSUAWVCFZXISFUOLNNGYHNHIAJHWAZKBZOBWHQMGJSMNRCKTSWLIPLJALE");
    const signed char tmp_msg_0[] = {-42, -85, -120, -22, -28, -38, 99, 12, 29, 76, -78, -16, -78, -4, -107, 2, 80, 113, -57, 30, -104, -43, 19, -11, -92, 32, -12, 42, -12, -32, 97, 107, -89, -4, -79, 21, -83, -54, -110, -55, -54, 29};
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
    msg.setTimeStamp(0.5123603585279906);
    msg.setSource(30549U);
    msg.setSourceEntity(180U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(142U);
    msg.source.assign("DCSJZJLNYYJMVPCNXESFFVVGMIBXOURYI");
    const signed char tmp_msg_0[] = {-89, 124, 104, -10, -57, 13, -47, -100, -122, -75, 96, -79, 1, -68, 42, -38, -74, -39, -126, 36, -31, -51, 44, -78, 121, -124, -98, -60, 73, 71, -77, -90, 5, -22, 85, -65, 1, -127, 84, -19, 113, 122, 5, -32, -58, -115, 87, 126, 45, 61, -95, 104, 48, 125, -102, -14, -67, -116, -14, -27, -75, -118, -19, 40, 89, 52, -63, -70, 39, -10, 86, 92, -113, -7, 8, -119, -96, 118, 96, 82, -65, 108, 91, -28, -77, 22, -7, -61, -64, 34, 81, 117, 59, -68, -92, -58, 17, 42, -111, -27, -93, -66, 122, 100, -81, -14, 85, 24, 117, -98, 24, 115, 45, 47, -104, 27, -70, -64, 102, -32, -35, 17, 3, 25, -112, 27, 66, -53, 117, -13, -71, 103, 85, -3, 34, 105, 55, -89, 30, -106, 9, -120, 96, -67, 105, -45, -114, -6, 115, 28, -92, 82, -38, -65, -83, 37, -90, -109, 10, -7, -99, 68, 13, 97, 101, -39, 32, 45, -113, 33, 33, 51, -78, 124, 34, -92, -23, 96, 41, 31, 10, -81, 72, -73};
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
    msg.setTimeStamp(0.769398581612006);
    msg.setSource(64768U);
    msg.setSourceEntity(127U);
    msg.setDestination(31648U);
    msg.setDestinationEntity(232U);
    msg.source.assign("JKXKLIPNLIYXRQBSTYUPJKWUOXDAGIVYRCEIHJFYPMVISVMTKKMBIOKAZETTANHUDWNILJWPFJYDNCBCFGYZWDGSSLWNUCWMRVTSYXSSVIXKCKDMVHKARXWRYOHPDVEINOEXDQOKJVCHEQZNDRAPCTLMQFSQOFWNXQHNZPOLMBL");
    const signed char tmp_msg_0[] = {-26, 125, -45, 83, -79, 54, -75, 74, -92, -85, 85, 121, -103, 24, 30, 69, 86, -39, -24, 118, 32, 99, 42, 39, -114, -120, 90, -41, -1, 93, -52, -106, 84, 124, -26, -58, -126, -87, -113, -22, 42, 39, 50, -125, 33, 29, -96, 53, 112, 45, -93, -25, 24, 119, -74, -99, -96, -7, -19, 48, -63, 110, -34, -3, 44, 21, 43, -92, -39, 101, -93, -81, 96, -51, 8, -66, 42, -86, -17, 53, -98, -71, 114, 21, -87, 21, -94, 48, -46, -127, -54, -79, -121, -21, -23, -16, 59, 52, -125, -74, -31, 22, 29, -21, 52, -28, -113, 32, -87, -47, 66, 31, 119, 100, 81, 11, 84, 60, -117, -80, -117, -40, -81, -116, 56, -11, -117, 114, -114, -118, -69, 38, 112, 119, 56, -89, -105, -105, 97, -11, -5, 82, -107, 81};
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
    msg.setTimeStamp(0.08694242727536428);
    msg.setSource(26935U);
    msg.setSourceEntity(208U);
    msg.setDestination(30055U);
    msg.setDestinationEntity(20U);
    msg.seq = 1648227616U;
    msg.state = 197U;
    msg.error.assign("LGOEEGIAZOHGHXVHKSZRNJECGUNCNBWNVTNMQMYYXRJQCCTCOWAQPMFPCNKCSHJKLPSUZQUDHAUIWYLDZLXBRPBXNPORRABQHDDVRNZMTWEVSOBVUBSKKEERFEZJUXTNYXLXKAIGYFIGUIOIGTMFZDBFMXVPB");

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
    msg.setTimeStamp(0.8245938489712201);
    msg.setSource(56440U);
    msg.setSourceEntity(244U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(159U);
    msg.seq = 3309927698U;
    msg.state = 229U;
    msg.error.assign("UXVFEPERCVTSQNIUXUWTXGQHMMGCJYORBBFUFFNCUEXMVAAZFLHDQKXNRFVETMKMMGQTNDHQHKQVLUMWUCLBGBIOLVFCBSEIJPZJ");

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
    msg.setTimeStamp(0.368765484496941);
    msg.setSource(59291U);
    msg.setSourceEntity(227U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(37U);
    msg.seq = 125084375U;
    msg.state = 234U;
    msg.error.assign("NCMIWDBUJSVGLBDKPYUOXJIXXZWHMIQLFAOTBMGLVPZJZETGCIKYKLIGUUJQWMUQFCDNQQABHPBTPDQMIKADWUNEYNPARLOQAZENUXVOGPTWSORDQCIPSHESXLBAAKRKSZYGKRXOOIJVGYMCGJKNNGGXBJRFRHFVSUNFQENLZHJSROUESADMMLXETWDMEWXOFCYSJQFNDCVFFBWOZTZTVHERAHBVPTCYIMHZBSD");

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
    msg.setTimeStamp(0.6474788571175407);
    msg.setSource(48995U);
    msg.setSourceEntity(182U);
    msg.setDestination(6209U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("QDPUUZBSDNYOTVYTIWQELRQHCACOGEGLIPVTGGRIEWULEYCOMSURBUISHJXXNDKCSAUMVZJEWGKCMRGMQVZSXCFHZKNZGNRGBERPJIAQBGPPUBKLYLAJWFBYKWAVOIFP");
    msg.text.assign("KBKANGANDBXAZHYHFIZZKQMFXWNYFDHOZBSELTYKGBUQPFNWAPIWWSXQDOULVBWEFVNQOXLRFVMVYVMJAICQLRURVDXSJXCPEHQLRXDPVIJSOWHIKALCTQRYUNCTSYMTLPUZYEQPMSJJCTKHTISBZGUVEGIOLMBGAMWBJXEVCNERDR");

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
    msg.setTimeStamp(0.4324432171903655);
    msg.setSource(8478U);
    msg.setSourceEntity(163U);
    msg.setDestination(29753U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("TYBTEEYNMRGWUHJTZDCRFVCKUPSWEFXBJXKGVZFAHMNBWRFCSYKDMOMGEJGNPQLLHDSWWTYPGQOBPMPCYKLOSZCBIWEVIVMJNJFPDHXSJWSLODTJDOGNOKQYXBURUSKUEJEXNCWAB");
    msg.text.assign("BRVQHXCGQEAGROHMTYBCQGRRKTUONZYPTLEKNGUFNZSTFQHSBHKAJAXKNMCUQFOABEEUIEKBDMDHEJZZPHROGLSYTADHEVTNXSFZDWDBUVYYJCIVZVYZYUPKJTXOCXHKMNWQJRWQDSNEIIOTDLSSBQQUMCFLRJIOWAMFTVXFPIMWOSLXIUSUBWLKVWCAJLEZNOPGIVIOZPXSQAYPRNBLDDCKRPHWGA");

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
    msg.setTimeStamp(0.3298214347222975);
    msg.setSource(35397U);
    msg.setSourceEntity(105U);
    msg.setDestination(55677U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("SSZXVEGVSNMRFQHGIXDBMEGDOPAQYUWYMONHWQUFCIHIDTVDNXZ");
    msg.text.assign("DOVTPEBHHATPEDARVSMUOJFIUMKTGEJTGURIMFMLAQAEHFEAUMSMPZISDWMGWRYREVYISCIJVAEKQMNVZJBYXEGOETWPBOZOHFYDKQQWRHHLGIXCZRMWNIWJTXHFXKVFTFCYHKNCZPAFWBCRLDDQUUCBGQUBDYQZPOFTNNIBBYNSXJPGMXRUHEKXHSKRZWG");

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
    msg.setTimeStamp(0.5206974658374738);
    msg.setSource(23797U);
    msg.setSourceEntity(228U);
    msg.setDestination(64467U);
    msg.setDestinationEntity(140U);
    msg.origin.assign("RVAQFAJWVYWSGGIUHPKDCRUNTLKSBBHBVPOBLKDPOEDRCZSYHPFEABEYFRTDLWWMBUCDVCOZELXGEVSPFIWKKDTQUOMGGCMHDFKHJILLUYNNMCJKQXFDIWYWCZUCAIYNSCNQILMVGEVQOAIXCOOAHTE");
    msg.htime = 0.7585840902570902;
    msg.lat = 0.2693267729563801;
    msg.lon = 0.053859851626222865;
    const signed char tmp_msg_0[] = {-128, -91, -46, -43, -67, -30, -8, 26, -37, -38, -49, -19, 117, -37, 26, -33, -89, -61, -5, -74, -106, 79, 9, -22, 26, -125, 82, 102, 3, 5, 113, -85, 118, -127, -101, 104, 28, 38, -50, -89, 26, 75, 3, -4, -119, -32, 87, -110, 30, 88, -109, -68, -86, -34, -89, 71, -96, -91, -81, -127, -123, 64, -63, 60, 61, -22, -15, 105, 57, -75, 82, 82, 67, -86, -127, 103, -127, 113, 0, 72, -101, 29, -89, -108, 125, -5, -84, 76, 122, -94, 86, 7, 120, 42, 57, -116, 123, 66, 52, 93, 61, 20, 52, 99, 67, 88, 79, -32, -110, 107, -67, -81, 117, 88, -59, -10, -55, 78, -18, -16, 43, 45, -32, 38, 42, 3, 124, 78, -37, 33, -96, 47, 47, -65, -128, -70, 7, -33, -117, -63, 19, -13, 57, 56, -26, 108, 116, 57, 98, -58, -126, -79, 11, 37, -119, 4, -55, -60, 87, -34, -63, 57, 46, -127, -94, 20, 56, 31, 7, 98, -78, -62, -93, -100, 92, 80, 24, -84, 32, -74, -6, -85, -7, -37, -11, 1, 103, 72, 19, -89, -51, -66, -112, -6, 110, 122, -97, -17, 88, -20, 115, 69, -62, 45, 99, -5, -82, 63, 82, 103, 3, 108, 94, 4, -93, 18, -62};
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
    msg.setTimeStamp(0.03746510632812472);
    msg.setSource(52472U);
    msg.setSourceEntity(168U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("OWSCEFIKGFJCXMIBZAJDRWAMLXMNVXVDSPZQCCOJISLSVVSXNXERDZLVOMDSFMTPQHNSLYUTWMTBGRKDVBHGKTTJBLJUEPDMEEBJHRUSFWVDOUKGALWPLJRGGZUKFYCYDNVQPCNKBRNHXTLWLUSZYGZJRTQZXVERAYAACPHGWRCAEDNMXYPBFYYOIBTWJOIOCKYSUFWZ");
    msg.htime = 0.9773159762843089;
    msg.lat = 0.8942193169973637;
    msg.lon = 0.10572121672899759;
    const signed char tmp_msg_0[] = {88, -50, 93, -105, -83, 12, 27, 3, 0, -29, -71, 106, -3, 47, -20, 9, -28, -103, -121, 37, -85, -6, -99, 16, -64, 25, -86, -65, -2, 22, -91, -64, 35, 101, -26, 105, 62, -124, -80, -27, 106, 7, 31, 5, 50, 13, 64, 103, -122, -19, 79, 53, -107, -31, -41, 44, -50, 122, 83, 91, -75, -41, -75, -96, 110, -13, -19, 4, -7, -68, -118, -80, 121, -93, -112, -89, 84, -24, -7, 94, 1, 2, -12, 41, -66, -35, 5, 64, 32, -112, 23, -12, -9, -41, 53, 102, -81, -75, 43, -29, 110, -27, 24, -121, -36, 73, 44, -18, -49, 59, -47, 124, -40, -114, 26, 9, -37, -75, -45, 30, -126, 121, -54, 113, -79, 116, 104, -67, -21, 123, -60};
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
    msg.setTimeStamp(0.03061236275839596);
    msg.setSource(40013U);
    msg.setSourceEntity(154U);
    msg.setDestination(33339U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("YMBSDHWMQFZJUTAIYQGCOXNWXIGJUMQLUCICFTGJGFSLDQPGBLZPVGMFTBGRNQDACFBJOEEXLRUIONEQJTQLLGXRRCYOQFXVXWZHHRRIDPYIAXNXEPJYMHNVQYNLHZWDTPT");
    msg.htime = 0.5448204111742712;
    msg.lat = 0.7329092784578579;
    msg.lon = 0.13831980190356952;
    const signed char tmp_msg_0[] = {-26, -54, 101, 1, -118, 80, 22, -82, -68, -5, 39, 32, 20, -58, -126, -33, 103, 91, -65, 119, 22, 29, 8, 53, -54, 47, 97, 115, -37, 111, 79, 39, 49, 16, 25, -3, -61, 32, -19, -55, -115, -123, -128, 106, -111, -55, 77, -86, 86, 70, -107, -128, -36, -35, -107, 21, 75, -42, 84, -4, 15, 19, -20, -80, 115, -47, 43, -46, 117, 126, -94, -86, 58, -29, -62, -113, 39, -2, -46, -17, 14, -84, 14, -33, 92, -123, 89, -67, 109, 34, 21, 29, -89, 36, -114, -1, -54, -98, -66, -109, -9, -54, -82, -88, 125, -77, -2, 89, 62, 20, 7, 61, 101, 10, -51, 123, -76, -48, -11, 111, 42, 88, -11, -18, 102, 89, 29, 126};
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
    msg.setTimeStamp(0.6399935719769966);
    msg.setSource(46317U);
    msg.setSourceEntity(14U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(197U);
    msg.req_id = 16745U;
    msg.ttl = 48773U;
    msg.destination.assign("ZTYIFTNOZAGAEREXYTEUABNJBIIFXCYJYDYQUEAAFCDVNVXYXKIOIMTQRIBWCTYBPHSATWWEOUFBHAFRRNWDSSOMXHLILIKGDMGGQQRUCXKBTPPXMZM");
    const signed char tmp_msg_0[] = {71, 64, -57, -123, 97, 23, 76, 4, -101, -98, -22, 98, 17, 114, 13, -7, 50, -40, 67, 1, -3, 71, -33, -14, 109, 84, -108, -54, 58, 36, 108, 113, 77, 125, 87, -101, 118};
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
    msg.setTimeStamp(0.40096929474244714);
    msg.setSource(38254U);
    msg.setSourceEntity(135U);
    msg.setDestination(48122U);
    msg.setDestinationEntity(158U);
    msg.req_id = 44707U;
    msg.ttl = 20141U;
    msg.destination.assign("MGDSSKQEHRLUKDQZIEBZQGBYUZORBDXFCYHNWKJYKYWDNUIUAXFJOGJMWQSCZMIRRMKAUXGFIADYCLUGICGQFFPMVBZQTUKBZHSHLLWVVPWNSCM");
    const signed char tmp_msg_0[] = {-106, 64, 115, 13, -28, -88, 111, -91, 6, -20, 22, 71, -56, 120, -64, 86, -95, -43, 99, -125, -76, 80, 1, 124, 45, -43, 121, -77, -67, -108, -86, 110, 15, -70, 61, 87, -82, 42, -33, 41, 95, 34, -10, -75, 43, -73, -61, -111, 116, 70, -109, 84, 99, -54, 105, -6, 9, -79, -35, 57, -128, -73, -27, -79, -48, 3, 104, -74, -32, -34, 99, -106, 23, -4, 73, 15, 59, -28, 9, 43, 18, 92, 73, 121, 70, -5, 53, -77, -46, -24, 1, 25, 98, 126, 81, -96, 68, 68, -20, -105, 75, 24, 70, -106, 39, -36, 5, 46, -111, 92, -34, 51, 70, -66, -36, -57, 2, -68, 14, 75, 32, 98, 88, 76, 95, -123, -50, 66, 83, -124, 55, -89, -59, -49, -45, 101, -33, -30, 22, -4, -63, 107, -80, -54, 17, -4, 105, 29, -26, -53, -11, -8, 27, -68, 69, 49, 125, -119};
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
    msg.setTimeStamp(0.2459665281902148);
    msg.setSource(59271U);
    msg.setSourceEntity(235U);
    msg.setDestination(54148U);
    msg.setDestinationEntity(186U);
    msg.req_id = 8915U;
    msg.ttl = 44526U;
    msg.destination.assign("NRSEAXKOYACACUVCQBFLMJUDOPSYTXDVSZQCTPZZMJSZEJKAKTITYLQWRLQGOIGOXELYLQDRRJUMKHJBYZYTDALWZZFDYSYMFNNSIYWXJVWCKMMTXPFNFOHCDQCPKXAULGIQHDLFOTUQUDCMHIGWV");
    const signed char tmp_msg_0[] = {20, -22, -81, 69, -110, -7, 102, -80, -57, -11, -24, -103, 64, 5, 89, 116, -110, 61, 41, -64, 65, -47, -99, -56, 106, -102, -27, -117, -26, 116, -58, 36, 42, -16, 47, -111, -61, 35, 67, 26, -52, 16, 64, -66, -5, 77, -38, -114, 57, -98, -60, 47, -121, -30, 21, -58, 18, -116, 88, 114, 65, 67, -118, -54, -23, -70, -20, -51, -94, 51, -120, -104, -79, -91};
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
    msg.setTimeStamp(0.03696616936720365);
    msg.setSource(35979U);
    msg.setSourceEntity(42U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(95U);
    msg.req_id = 44777U;
    msg.status = 93U;
    msg.text.assign("HDTYZLPLUYCZNEYTRFDTL");

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
    msg.setTimeStamp(0.585258204927584);
    msg.setSource(46735U);
    msg.setSourceEntity(233U);
    msg.setDestination(42882U);
    msg.setDestinationEntity(33U);
    msg.req_id = 51521U;
    msg.status = 58U;
    msg.text.assign("TTAKFHSRRUJJTMUIQZKMXJFBSYEUIEKELOHWLMNHVZBCYPTNTHDYLGQBQEMNACHYYXWFBGLNXXKVTRYZNNQVSZERSBVWCYVFNIVZWHJKOPGQTQETJIGZMJASCFSABMAZRYKZQWOOUGODWDOOKWNPCIDFFARHJVTNXIQMPLYXEWMJXRHDJAPVSRXABGILU");

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
    msg.setTimeStamp(0.8682491791664314);
    msg.setSource(39875U);
    msg.setSourceEntity(169U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(125U);
    msg.req_id = 61563U;
    msg.status = 27U;
    msg.text.assign("JJQAAVPJWWZWOEAOEZKTDXLNOJJRWOGKDSDDSRPSZEBZYHYXMGZJLGXSWPCWIVIYVQKQIAJUEHHYNAMGPLTDKJQSHLNPMTSTHOVADDGNBMZYHZHEVDMNIXRVFCPXBEOESKTOYCXUYICONCCLQILNXAKVB");

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
    msg.setTimeStamp(0.3444448146181117);
    msg.setSource(9178U);
    msg.setSourceEntity(128U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("ERXQNWICWNHUBJGIBQHYKSHYPWFFPUENSKKGYLRYCDGYEDFKPTPZVUWTLYWVMZJVGJKKCOADWISMTRZVRLUTIQZBXMYKECGRJNBDESUSOZONNCJQTHLQLJIQIFBNNPIWMWPGLO");
    msg.links = 3643937844U;

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
    msg.setTimeStamp(0.7482255912199233);
    msg.setSource(6549U);
    msg.setSourceEntity(114U);
    msg.setDestination(44878U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("QWPSJAGUKLXLQOBCLPTBXGVQYZUAKZIPQRPDFOOYXBLMFMTANRQAMOGIGWESLZFXMWZSORVYKZHKXEEFAHBHFBNAKOJXDMGIHYWLSHGYSQUHYAMYUUKDEDATZSDBXGAQCPZVQUTCWNIPRTPOWBZKUNMCNBD");
    msg.links = 1780767970U;

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
    msg.setTimeStamp(0.2721173319904603);
    msg.setSource(38113U);
    msg.setSourceEntity(217U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("BTABDOALSQQEJSHWWGUQYCQDOEBQMLDSZNNCHMNBJXDAQUTKYWKZFBDNEXKPRRCWWVRP");
    msg.links = 2595979494U;

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
    msg.setTimeStamp(0.6729906173131698);
    msg.setSource(63225U);
    msg.setSourceEntity(36U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(197U);
    msg.groupname.assign("OSHGZCAWTCYITWIHGJOMZIPVQEPBCFVFGXAUUDTYOQLWSLVQJSOKADGHKYEBRAFS");
    msg.action = 119U;
    msg.grouplist.assign("FHLEIIKBQVIRPCBDOVPGAWOCJBCJJULQBHXYMMDYKAPUDMJYJTLYHWZQSXPAIYNXVAFVIAUJCHGEGZWMRSDNOLBXGHTBONOKNXUTLQRKEFFQSOQFEHUANVARZELUCBYSFCCPNXIHKPSPYAR");

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
    msg.setTimeStamp(0.37580862323854025);
    msg.setSource(45868U);
    msg.setSourceEntity(217U);
    msg.setDestination(24923U);
    msg.setDestinationEntity(125U);
    msg.groupname.assign("SDKORPISDKFDDZYOXAPRPBMFTXPCPAVKFZMMYKUJOAVKGWYWGPLGQBQOWXBUMJHGZWXMSDCKJHAIQCNGNRFWBFZMIVTKEUVJHVXRMOCRXBNXANEZAQLBNLJEFEURDLZJKVCYJFTHPWEVWBDYQNVNWOTCZBOEBSOIEADTNILGIQGCDRFRYHTSEYO");
    msg.action = 113U;
    msg.grouplist.assign("MEYBJEURYIUWOXNZCVLTQVOENUDLJIDDGNIFZAJGEGDTEWCMEGHQOSPYWAPSXGLYKWBMFWFNJTNWEHBBCHPVMANPOIIUCKKUOGHOHLLWCGUYFRNNKCECDRSYMWOODEGZSXBQWUXRPCQDQSGFTBMAVJKDTMHPRJSQ");

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
    msg.setTimeStamp(0.29402871879619175);
    msg.setSource(36934U);
    msg.setSourceEntity(79U);
    msg.setDestination(39869U);
    msg.setDestinationEntity(191U);
    msg.groupname.assign("VPPEFKYFHNVGODPYPDMUHEELHCUAWNXCUMCDZSVJBIMEYJXKREQICDIRALTSWAIKWGSHIHAGLNNKANPLIEOJKIYKVMLPHFOWCHUGFVYTYWNBNGNKDICXFQFFZQUDMGCXENTVQVARBESMJRWQLUMGBLPRHYTROURLHJADXOGOIXQKMLOJWHXCVIJLPDVQTMXUBOSFQFSWAKTVAJCYKQXBEZBTZ");
    msg.action = 224U;
    msg.grouplist.assign("BWJCFOFHHTRICMEBEBJPB");

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
    msg.setTimeStamp(0.9324953051716713);
    msg.setSource(43547U);
    msg.setSourceEntity(47U);
    msg.setDestination(61619U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6596378361125481;
    msg.sys_src = 52977U;

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
    msg.setTimeStamp(0.9275283048748143);
    msg.setSource(44974U);
    msg.setSourceEntity(238U);
    msg.setDestination(31602U);
    msg.setDestinationEntity(140U);
    msg.value = 0.4782981410824536;
    msg.sys_src = 26695U;

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
    msg.setTimeStamp(0.8336843889128058);
    msg.setSource(64782U);
    msg.setSourceEntity(114U);
    msg.setDestination(13741U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6604097386692457;
    msg.sys_src = 37548U;

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
    msg.setTimeStamp(0.3740431243671749);
    msg.setSource(27978U);
    msg.setSourceEntity(73U);
    msg.setDestination(25922U);
    msg.setDestinationEntity(134U);
    msg.value = 0.23047447789391984;
    msg.units = 243U;

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
    msg.setTimeStamp(0.7661785180425439);
    msg.setSource(10525U);
    msg.setSourceEntity(252U);
    msg.setDestination(40015U);
    msg.setDestinationEntity(90U);
    msg.value = 0.1507648410916449;
    msg.units = 51U;

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
    msg.setTimeStamp(0.1005719793274078);
    msg.setSource(30991U);
    msg.setSourceEntity(130U);
    msg.setDestination(3406U);
    msg.setDestinationEntity(128U);
    msg.value = 0.6529607021764466;
    msg.units = 102U;

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
    msg.setTimeStamp(0.7037320509688371);
    msg.setSource(33487U);
    msg.setSourceEntity(37U);
    msg.setDestination(30154U);
    msg.setDestinationEntity(24U);
    msg.base_lat = 0.8909493049067084;
    msg.base_lon = 0.9526140855997486;
    msg.base_time = 0.755927769859348;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 63421U;
    tmp_msg_0.priority = -62;
    tmp_msg_0.x = 2496;
    tmp_msg_0.y = 12865;
    tmp_msg_0.z = 28870;
    tmp_msg_0.t = -18695;
    IMC::VehicleCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 146U;
    tmp_tmp_msg_0_0.request_id = 50829U;
    tmp_tmp_msg_0_0.command = 91U;
    IMC::ImageTracking tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.maneuver.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.calib_time = 60220U;
    tmp_tmp_msg_0_0.info.assign("PBGVSZCTCPSLSTKMKVRCQBQRKDACGKYBVTBRTJLHGYEUVIIDTZOWTYPMDUEJVANTQSORJVAFUURWWDHYWAAWGWOWKGZBQUSGLNZEIOBKCBYLYHFANRVSTQXEUOMZDDQMPXJZKAJWTDYYNXXFFNOIRFCGFJPFJMXXEIJQDZHZUNIPZSIZLLLFDX");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.792642316799698);
    msg.setSource(54135U);
    msg.setSourceEntity(208U);
    msg.setDestination(27256U);
    msg.setDestinationEntity(41U);
    msg.base_lat = 0.9451997170716643;
    msg.base_lon = 0.1154197991175504;
    msg.base_time = 0.03188626810113171;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 11775U;
    tmp_msg_0.destination = 34897U;
    tmp_msg_0.timeout = 0.22788512344373424;
    IMC::DesiredVerticalRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.28733641410726474;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9131515538955857);
    msg.setSource(48242U);
    msg.setSourceEntity(238U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(4U);
    msg.base_lat = 0.34878901049054456;
    msg.base_lon = 0.042331948280776244;
    msg.base_time = 0.40740260076689105;

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
    msg.setTimeStamp(0.9443440339039971);
    msg.setSource(29189U);
    msg.setSourceEntity(2U);
    msg.setDestination(36136U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.9602477865422772;
    msg.base_lon = 0.2737336455735667;
    msg.base_time = 0.9719921106322253;
    const signed char tmp_msg_0[] = {47, 97, 61, -32, -114, 61, -66, 110, -83, 7, 113, -77, 97, 85, -124, 44, 51, -110, -116, 29, -55, 3, 17, -99, -99, 89, -88, -99, 46, -61, -61, -79, -104, -50, 44, 56, -66, 102, -93, 90, -11, 3, -6, -62, -88, 113, 12, 28, 40, 42, -99, 76, 94, -39, 44, 17, 6, -39, -77, 111, -73, -98, 72, -18, 0, 6, -61, -13, 105, 10, 68, 15, 9, 115, -125, -54, -118, -91, -73, 11, -3, 42, 2, 35, -107, 39, 66, -35, -42, 62, -122, -15, 53, 113, 10, 116, -5, -11, 21, 99, -56, 4, -70, 70, 29, -8, -125, 73, -68, -103, 107, 59, 43, 119, 62, 96, 41, 100, -6, -81, 32, -42, 55, 43, 54, 49, 95, -90, -81, -79, 83, 13, -14, 87, 32, -10, 61, 74, -2, 2, 13, 35, -2, -27, -66, -74, -24, 9, -7, 114, -78, 106, -81, 106, -128, 116, 82, 112, -20, -58, 108, 82, -89, 112, -21, -103, -94, 102, 57, -109, 72, -58, 125, 76, -1, -41, 77, -9, 69, -43, -104, 109, 119, -108, -46, -59, 12, -118, 80, 118, -94, 85, 42, -77, 92, 7, 110, -16, -56, 56, 101, 83, 54, -42, 89, 48, 36, -114, -97, -48, 67, -31, -120, 20};
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
    msg.setTimeStamp(0.5175592701497794);
    msg.setSource(42455U);
    msg.setSourceEntity(167U);
    msg.setDestination(29238U);
    msg.setDestinationEntity(52U);
    msg.base_lat = 0.37102927715221734;
    msg.base_lon = 0.8229434837747988;
    msg.base_time = 0.8145462051194706;
    const signed char tmp_msg_0[] = {-101, 88, 109, 0, -79, -74, -1, 63, 27, 92, 26, 34, -65, -25, -106, -40, -54, 83, 36, -86, -26, 94, -45, -119, -86, -9, -22, -102, -64, 90, -87, 36, 7, 5, 34, 25, -104, -63, 99, -70, 14, -49, 97, -92, 86, 11, -102, 106, -114, -91, -55, 18, 73, -82, 52, 21, 123, -98, -72, 24, 85, 73, -124, 108, 78, -49, 41, -12, 44, -67, 104, 125, -6, 50, 106, -71, 53, -96, -45, -121, 126, 62, 119, -49, 30, 94, -111, -27, -98, -44, -92, -47, 82, -35, -88, 93, 31, 11, 105, -73, 25, -108, -112, -66, 86, 83, 25, -79, -6, 50, 105, 75, -126, 33, -35, 95, -57, -47, 126, -43, 4, 26, -41, -12, 29, -113, -87, 105, 29, 109, 80, -72, -99, -110, -53, -2, 45, 79, -31, 66, -94, 6, -92, 66, -22, 52, 47, -85, 40, 60, 103, -90, -96, -68, 18, -4, -78, -38, 86, 75, 78, -24, 111, 105, -110, 94, 50, -11, 69, -122, -116, -93, -108, -18, 117, 106, 51, 121, 57, 86, 86, -122, 20, 101, -117, 29, 12, 124, 67};
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
    msg.setTimeStamp(0.33793467681378697);
    msg.setSource(62314U);
    msg.setSourceEntity(15U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(142U);
    msg.base_lat = 0.5886075600403533;
    msg.base_lon = 0.07570389459533733;
    msg.base_time = 0.8620879372583818;
    const signed char tmp_msg_0[] = {39, -90, -13, 88, -24, 42, -55, -84, -3, 94, 10, 30, 36, -112, -68, -95, -116, 89, -62, 121, 21, 110, 117, -121, 111, 16, 55, 97, -23, 32, 105, 93, 115, 68, -85, -33, -55, -73, -64, 108, -49, 2, -86, -30, -28, -52, 60, 60, 97, 49, 41, 105, 89, -56, 82, 49, 28, -12, -96, -11, -29, 31, -113, 61, -41, -41, -29, 58, -99, -46, -99, -28, -89, -35, 62, 126, -12, -49, -9, 95, 72, 43, 15, 54, 57, 104, 104, -22, -34, -3, -53, -62, -5, 100, 19, -96, 14, -4, -79, 100, -61, -7, -111, -23, 19, -14};
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
    msg.setTimeStamp(0.3654100529348273);
    msg.setSource(20083U);
    msg.setSourceEntity(65U);
    msg.setDestination(15386U);
    msg.setDestinationEntity(172U);
    msg.sys_id = 20U;
    msg.priority = -70;
    msg.x = 10252;
    msg.y = 11866;
    msg.z = 9721;
    msg.t = 2481;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.9860798735676772;
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
    msg.setTimeStamp(0.6945278198018369);
    msg.setSource(1641U);
    msg.setSourceEntity(4U);
    msg.setDestination(18457U);
    msg.setDestinationEntity(111U);
    msg.sys_id = 36388U;
    msg.priority = -113;
    msg.x = 1701;
    msg.y = 30152;
    msg.z = -6951;
    msg.t = -5252;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1172890224U;
    tmp_msg_0.destination.assign("TKPMNTIFRUEIVSQNFBJRYDKEYXCGRFALJWZKHGEQNZDPQXPTLCM");
    tmp_msg_0.timeout = 46939U;
    const signed char tmp_tmp_msg_0_0[] = {-12, 23, -117, -64, -29, 122, 90, -123, -80, 17, -1, 88, -39, -25, -40, 8, 16, -37, -20, 63, 40, 87, 68, -86, -103, 35, -85, 41, 79, -60, 80, -12, -94, 51, -123, -123, 24, -128, 83, -41, -3, 84, -87, 27, 117, -109, 2, -38, -113, 61, -111, -62, 69, -80, -38, -48, 63, -118, -7, -97, -61, 0, 119, -125, 95, 109, -125, 14, 82, -28, -92, 5, -16, 101, 19, 119, 42, 14, -25, 74, 54, 0, -24, -70, 44, -75, 67, 108, 20, -1, -123, -69, 91, 32, 15, -18, -103, -38, -88, 28, -21, -55, -36, -94, -81, -57, 104, 90, 94, -47, -98, -32, 72, -100, 22, 2, -96, -31, -52, -126, -73, -82, -4, 111, -12, -26, 103, 62, -33, -119, -22, 73, -2, -127, -17, 105, -116, 57, 38, 61, 6, 6, 60, 18, 118, -78, -36, -116, 34, -69, 49, -78, -44, 33, 108, 114, 55, 102, -107, 113, 89, 79, -22, -67, -65, 48, -119, 95, 54, -16, -64, 84, 4, -68, 106, -60, -123, 50, -96, 95, 78, -54, 65, 120, 20, 34, 13, -19, -68, -116, -113, 113, -54, -94, 77, 22, -5, -99, -8, 115, 95, -53, 35, 13, -1, -61, -7, 36, 117, -128, 112, 60, 26, -89, 49, 54, -105, 29, 67, -39, -61, 106, -120, -55, -59, -50, 41, 113, 52, 23, -68, -58, -19, -37, -103, 93, -97, 36, -64, 108, -86, -45, 122, -116};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.49724850026479595);
    msg.setSource(25028U);
    msg.setSourceEntity(154U);
    msg.setDestination(39590U);
    msg.setDestinationEntity(28U);
    msg.sys_id = 65524U;
    msg.priority = -74;
    msg.x = 15392;
    msg.y = -8914;
    msg.z = 26483;
    msg.t = 18827;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.4184194747413631;
    tmp_msg_0.y = 0.08946371930648966;
    tmp_msg_0.z = 0.8538875696640604;
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
    msg.setTimeStamp(0.09812976735802725);
    msg.setSource(62188U);
    msg.setSourceEntity(69U);
    msg.setDestination(26324U);
    msg.setDestinationEntity(71U);
    msg.req_id = 42448U;
    msg.type = 211U;
    msg.max_size = 33228U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6857222053685168;
    tmp_msg_0.base_lon = 0.8868258090086434;
    tmp_msg_0.base_time = 0.3697952428530219;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 16866U;
    tmp_tmp_msg_0_0.destination = 64672U;
    tmp_tmp_msg_0_0.timeout = 0.7005620032275234;
    IMC::FormationEvaluation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 146U;
    tmp_tmp_tmp_msg_0_0_0.op = 46U;
    tmp_tmp_tmp_msg_0_0_0.err_mean = 0.811429831827911;
    tmp_tmp_tmp_msg_0_0_0.dist_min_abs = 0.8725159268985883;
    tmp_tmp_tmp_msg_0_0_0.dist_min_mean = 0.019851220763144717;
    tmp_tmp_tmp_msg_0_0_0.roll_rate_mean = 0.7587901079618241;
    tmp_tmp_tmp_msg_0_0_0.time = 0.0054314878892124385;
    IMC::FormationControlParams tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.action = 4U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon_gain = 0.6011007660081342;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat_gain = 0.5925155203837651;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.bond_thick = 0.7851497673750533;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lead_gain = 0.4977453096252137;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.deconfl_gain = 0.152186324624764;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accel_switch_gain = 0.78419892853824;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.safe_dist = 0.8513252397938319;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.deconflict_offset = 0.21279839882428586;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accel_safe_margin = 0.7070968699816826;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.accel_lim_x = 0.03813578433414744;
    tmp_tmp_tmp_msg_0_0_0.controlparams.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.2823035902816827);
    msg.setSource(56700U);
    msg.setSourceEntity(73U);
    msg.setDestination(42124U);
    msg.setDestinationEntity(229U);
    msg.req_id = 26459U;
    msg.type = 190U;
    msg.max_size = 8138U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.37677956659776346;
    tmp_msg_0.base_lon = 0.8923923048131981;
    tmp_msg_0.base_time = 0.728450592740925;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 52812U;
    tmp_tmp_msg_0_0.priority = 26;
    tmp_tmp_msg_0_0.x = 13816;
    tmp_tmp_msg_0_0.y = -15051;
    tmp_tmp_msg_0_0.z = 17938;
    tmp_tmp_msg_0_0.t = 29208;
    IMC::ColoredDissolvedOrganicMatter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.9170668499859087;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.7368563441140039);
    msg.setSource(57326U);
    msg.setSourceEntity(192U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(18U);
    msg.req_id = 21091U;
    msg.type = 239U;
    msg.max_size = 45373U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.03248956094131594;
    tmp_msg_0.base_lon = 0.5852814072622271;
    tmp_msg_0.base_time = 0.0727683542105575;
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
    msg.setTimeStamp(0.09066067498444397);
    msg.setSource(10290U);
    msg.setSourceEntity(67U);
    msg.setDestination(24164U);
    msg.setDestinationEntity(24U);
    msg.original_source = 16314U;
    msg.destination = 30765U;
    msg.timeout = 0.8776000533969259;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 8110U;
    tmp_msg_0.lat = 0.3216394911789515;
    tmp_msg_0.lon = 0.3691170343879048;
    tmp_msg_0.speed = 0.5980026988369427;
    tmp_msg_0.speed_units = 126U;
    tmp_msg_0.custom.assign("EAHCSMTNJBBYMEOBGCWRUYUYSIGBWGSFGPOIDLNJDBVZQPPEKYPNHZKRIKIWXTEXFLFYVOBMVRFWAHSXAHUBTEUSLLGUPCHQJSVUOCNWIKALDXUBMOCVJNQGKKLYEUPFZWWICWPKTDTKMNEYFKFUDAEIAQBTTGDSRFXXZDJGQSVTBZNFMPTVHRQZOYRYEKSOCOJXUQDARRSMNZL");
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
    msg.setTimeStamp(0.9348436277094583);
    msg.setSource(11129U);
    msg.setSourceEntity(2U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(244U);
    msg.original_source = 63737U;
    msg.destination = 50099U;
    msg.timeout = 0.24171232692144584;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.7674415320418594;
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
    msg.setTimeStamp(0.6234896953742102);
    msg.setSource(58828U);
    msg.setSourceEntity(124U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(85U);
    msg.original_source = 45152U;
    msg.destination = 20845U;
    msg.timeout = 0.13479285821653197;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 87U;
    tmp_msg_0.text.assign("BFETRUKTCMDPOLGWNUJNJRVEMWVQXLVXDCVJYXPPGYKBKBBFXARAAEPWAESIICWQBNXZGROOVZOBXCYNUYWEYRSMZLKZSTQHKIG");
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
    msg.setTimeStamp(0.7237107537271098);
    msg.setSource(52733U);
    msg.setSourceEntity(48U);
    msg.setDestination(62942U);
    msg.setDestinationEntity(112U);
    msg.type = 59U;
    msg.comm_interface = 14045U;
    msg.model = 13746U;
    msg.list.assign("GDYDRXFVTYWGSKAVBZSTXJBTDAESWFNNMYMUQRKOLDLUNCVIKRHAQSOMEXYDMZKWCXOUAKQGCLGYDSOEFCCQRHJJPAQVLIVLFNWAHEEBGXWWSJDEPWWSDBHORNXHHCCKLBJCOGPBFORTVXPPLUZUSIPYUSOFQZJFPHBTRMPPYPEUMIZNDIQOGEGIMUHNUNZQTAZKTLTTRMKZDEJRUVBFBVOXL");

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
    msg.setTimeStamp(0.8493127317492833);
    msg.setSource(55599U);
    msg.setSourceEntity(42U);
    msg.setDestination(44306U);
    msg.setDestinationEntity(110U);
    msg.type = 142U;
    msg.comm_interface = 21097U;
    msg.model = 48566U;
    msg.list.assign("HFKCNDHNUTOZL");

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
    msg.setTimeStamp(0.9538350372318689);
    msg.setSource(42275U);
    msg.setSourceEntity(235U);
    msg.setDestination(1250U);
    msg.setDestinationEntity(124U);
    msg.type = 225U;
    msg.comm_interface = 123U;
    msg.model = 14263U;
    msg.list.assign("TWLIBSRQEGKDGNYVIMSDUERZTGXFDHPYXAZIULOCXTYCEJOIJULABZRXMEWCOQVOZPJMAUIGWHBPROCHKMXRABJXYKLHIKOBRYWSXPGLVVFTWCZSPYSGECOHFEQCV");

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
    msg.setTimeStamp(0.8747786957708755);
    msg.setSource(46229U);
    msg.setSourceEntity(157U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(156U);
    msg.type = 180U;
    msg.req_id = 3330428029U;
    msg.ttl = 890U;
    msg.code = 161U;
    msg.destination.assign("ZLGUKABBXIQJDRKLZRMZZQPBNOVATFPRIJLAOEUYQOVXFISCZGXVCZOUYTCEPKIYTNVOIQFYGKMDILYGCVFVBOQUYULXWFSNAVGXLWBDOPNGAPBXCTPTSXDWEN");
    msg.source.assign("IUPUTCSIXHMWTUOZHZDLKVAESWIFFABJWGCZMIPAJUZKCPEDSQXKPCVIVXRMBLFNHHPLDPBIZAXGRNEZKGMBJWLHLIGQOSSWFKMMCOPQOXYO");
    msg.acknowledge = 245U;
    msg.status = 241U;
    const signed char tmp_msg_0[] = {-81, 108, 54, -3, -1, 22, -117, 62, 34, -110, -109, -69, 52, 124, 111, -25};
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
    msg.setTimeStamp(0.996630906784065);
    msg.setSource(31748U);
    msg.setSourceEntity(13U);
    msg.setDestination(617U);
    msg.setDestinationEntity(113U);
    msg.type = 146U;
    msg.req_id = 2446453420U;
    msg.ttl = 47901U;
    msg.code = 86U;
    msg.destination.assign("FPAZWEEWRWBTTRANBQSYFYCOARVLQEVGBZMQKZWSLRILDZLIPXFUXVXZOFQJJEUJLGFVLOYCXYKMPXAKJMMJUXISWPYODBQCJGQAPAKSLEVEZYUBCDMPMEP");
    msg.source.assign("POGDTGBYKCDJRLHMTQZVVZICWLMWYFJRW");
    msg.acknowledge = 228U;
    msg.status = 207U;
    const signed char tmp_msg_0[] = {-25, -117, -62, 83, -118, 39, 6, -91, 116, 3, 5, -72, 54, -56, 11, -103, -39, -120, -45, -86, 31, 74, -26, -47, 33, -51, 89, 83, -93, -58, -37, -15, 5, -2, 13, -77, -20, -64, -28, -94, 37, -82, -24, -101, -57, -121, 109, 116, -102, -105, -120, 4, -118, -8, 41, -94, 32, 49, -109, 50, 45, -15, 27, 86, -48, -109, -14, -50, -16, -9, -52, 26, 88, 81, 100, 42, 90, -68, -121, -58, 83, -38, 4, 12, -106, 79, 3, -89, -21, -33, -17, -66, -111, 56, 25, -66, 98, -109, -93, 116, -9, 31, 3, -19, 125, 44, -124, -97, -75, -1, 64, -39, 80, -107, 23, 65, 2, 103, -69, 121, -110, 19, -27, -24, -47, 28, -40, 37, 53, -33, 8, 97, 80, -21, -74, -64, -55, -34, 97, -124, -90, -116, -49, 30, -16, 83, 2, 60, -98, 42, 91, -9, 32, 46, -25, 97, 12, -128, 40, -14, -30, -65, -110, -30, -127, 113, 66, 125, 104, 18, -116, -106, 86, 90, 90, 26, 5, -47, 17, -33, -24, -35, -9, -12, -17, -100, 6, 3, 84, -3, 48, -47, 55, -118, 54};
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
    msg.setTimeStamp(0.5510779108294166);
    msg.setSource(61564U);
    msg.setSourceEntity(59U);
    msg.setDestination(45810U);
    msg.setDestinationEntity(209U);
    msg.type = 15U;
    msg.req_id = 3157161402U;
    msg.ttl = 58627U;
    msg.code = 162U;
    msg.destination.assign("OXNKJNPITDBZCEDUBMYRFNCNHDBZMTGEFAVZOJCWLOKHPYUZOMMFFWYWYSASQGBYDLFPXZKVUSORCOLIBHRYUSCANKERRHHICDHGPXFPASQDKTMHAHJDEDOMXWBPCJMESQUGLITXTKSNBBFTWZQJQTVKNOX");
    msg.source.assign("BFKEXXRBDVWSYUHLHN");
    msg.acknowledge = 7U;
    msg.status = 9U;
    const signed char tmp_msg_0[] = {-25, -19, -52, 114, 40, -125, -123, 28, 83, 113, 103, -31, 102, 63, 29, 53, 9, -36, -119, 123, -31, 94, 19, 118, 32, -77, -37, -25, 65, 42, -117, -33, -126, 114, -70, -23, 21, -113, 118, 32, -109, -58, -73, -80, 82, 35, -128, 93, -91, 69, -94, 82, -75, -28, -52, -97, 81, 108, -65, -117, -60, 54, -49, -70, -32, 81, -79, 111, -77, -81, -84, 37, -31, -28, -26, -40};
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
    msg.setTimeStamp(0.8096349325319542);
    msg.setSource(61780U);
    msg.setSourceEntity(201U);
    msg.setDestination(15998U);
    msg.setDestinationEntity(231U);
    msg.id = 42U;
    msg.range = 0.5134559897234577;

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
    msg.setTimeStamp(0.3775067738715314);
    msg.setSource(51607U);
    msg.setSourceEntity(55U);
    msg.setDestination(63178U);
    msg.setDestinationEntity(29U);
    msg.id = 53U;
    msg.range = 0.38489587383854174;

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
    msg.setTimeStamp(0.9401755409059303);
    msg.setSource(7378U);
    msg.setSourceEntity(231U);
    msg.setDestination(46545U);
    msg.setDestinationEntity(187U);
    msg.id = 124U;
    msg.range = 0.43800631601906714;

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
    msg.setTimeStamp(0.98107464888757);
    msg.setSource(49921U);
    msg.setSourceEntity(185U);
    msg.setDestination(40267U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("GLWYDNHMRADFOROSYPYDJKBQJHJLBDQSILNHVPNJMQAXXBVTZXXBBMNJQMIUIFUVXWKAWXAGIPRIBDRNOOJNPNUVEHQFULAZTMVCIWYPEHIPEHVANSEQULFGOXFUGMKA");
    msg.lat = 0.6104840057882532;
    msg.lon = 0.49786716896440386;
    msg.depth = 0.6226606710693813;
    msg.query_channel = 196U;
    msg.reply_channel = 201U;
    msg.transponder_delay = 95U;

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
    msg.setTimeStamp(0.704726142568787);
    msg.setSource(21413U);
    msg.setSourceEntity(43U);
    msg.setDestination(31305U);
    msg.setDestinationEntity(251U);
    msg.beacon.assign("DXWYGMZTTRAHVJONSEQPGTIMCEMVNYLWITRWGPDHEHBPYUCOBIJBNQJOQWLVRHSSCXSENIPZXNRCGTLRDLSKPZIEMIRUCOSBAZGKQNRTUVFDFBRXHSXMBXDMBXQFLJKOWAHQVNNAYKSWBDMOWFTYARKIOTAVFLWVDLWCYXCKLTVUUMDCOXFCBNQJWYGBPJYGDSNVUEUAKPUIPQAOQFPAKZJIHLGSJCHAXZKHIULEFGTGEK");
    msg.lat = 0.4064276763601101;
    msg.lon = 0.3537011596120787;
    msg.depth = 0.48386546534333663;
    msg.query_channel = 53U;
    msg.reply_channel = 163U;
    msg.transponder_delay = 200U;

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
    msg.setTimeStamp(0.0912002885252241);
    msg.setSource(22719U);
    msg.setSourceEntity(108U);
    msg.setDestination(36035U);
    msg.setDestinationEntity(114U);
    msg.beacon.assign("QGUCFMZXVJITNIHFCAWBPHBT");
    msg.lat = 0.4750314649376688;
    msg.lon = 0.9866743035237067;
    msg.depth = 0.8655443873920633;
    msg.query_channel = 138U;
    msg.reply_channel = 236U;
    msg.transponder_delay = 156U;

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
    msg.setTimeStamp(0.9558589877962927);
    msg.setSource(29903U);
    msg.setSourceEntity(103U);
    msg.setDestination(350U);
    msg.setDestinationEntity(173U);
    msg.op = 47U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WFILQZYCAMJHSWHGNTCYHBNKKHYHEZSTRYPHIJPPWLMOGWOUFBZPAELXLSDHIQXYQAUJOAHTUFLPXRDCTXBUKFQRZEVRVKWCRBFYCOQJEEXPOLFTWGBOSUTHIYCVAUOKXITENCKROQMNYWUIBLLVSVCDJNRQUBGAFJZQBSGMAZEWUSVMTZRWMCBZOVENDNEDOVXHLLGFMSNCSRIJABPMRPMXFVDDPKDFUTQJGYYMQVK");
    tmp_msg_0.lat = 0.7499967547591747;
    tmp_msg_0.lon = 0.023619561139055056;
    tmp_msg_0.depth = 0.6207078095922961;
    tmp_msg_0.query_channel = 185U;
    tmp_msg_0.reply_channel = 225U;
    tmp_msg_0.transponder_delay = 10U;
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
    msg.setTimeStamp(0.5422963305453165);
    msg.setSource(35527U);
    msg.setSourceEntity(109U);
    msg.setDestination(34616U);
    msg.setDestinationEntity(132U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.14315978029918852);
    msg.setSource(49191U);
    msg.setSourceEntity(4U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(121U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.1875104529145022);
    msg.setSource(27148U);
    msg.setSourceEntity(35U);
    msg.setDestination(53585U);
    msg.setDestinationEntity(161U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.3297833177567858;
    tmp_msg_0.speed = 0.5078894620325896;
    tmp_msg_0.turbulence = 0.6161261399676186;
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
    msg.setTimeStamp(0.2346123051804807);
    msg.setSource(14848U);
    msg.setSourceEntity(135U);
    msg.setDestination(37904U);
    msg.setDestinationEntity(107U);
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 46651U;
    tmp_msg_0.lat = 0.4231527314037893;
    tmp_msg_0.lon = 0.31176510386174505;
    tmp_msg_0.z = 0.5634523221733935;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.speed = 0.0688040133881066;
    tmp_msg_0.speed_units = 85U;
    tmp_msg_0.roll = 0.2337548919348762;
    tmp_msg_0.pitch = 0.33541460010241;
    tmp_msg_0.yaw = 0.05845151185303654;
    tmp_msg_0.custom.assign("IRZCYAKDSLDIQFNPTBRMGMBVIOXICPPY");
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
    msg.setTimeStamp(0.19540491794398762);
    msg.setSource(5242U);
    msg.setSourceEntity(231U);
    msg.setDestination(15421U);
    msg.setDestinationEntity(188U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AKTNDJYUSJPOFHYERBGOZANHLOZYJTCSWRUWYSSWNRVQGNYTHZMAVIQEIWPUOIDMPGAKKGXXJEPLLWZVQNCYMBMUTEASMMAFPJTJUAFNJXHYNBVLROWFOMNUCOLIQCDRPXFKZVZAGFTEHTKMVAKBJIYUGXRCIZPKWXMPFRJFSECKHQJVIQZDXZIWEHHYOCMHKLFSGSVWBUOBQTLCEDZNDDKTOLXBDB");
    tmp_msg_0.value.assign("WYVFAFVTHNGFXIGUWFJMOCGHUHOCRCBQJLXIAVPPMJNGYOPLLOKCDMTFPKNGZGAQXMVVXZDSIOEVZYYCDBEAKUHVUAEWTANJIPWFGEHSJYDRNYZZHNHBRSKSZCPKWIFHQMRQRSFKRKBKIOWUQDARFDRAZYKEGVMTQEECIXCBRBZQNJQJIZLRIIWN");
    tmp_msg_0.type = 188U;
    tmp_msg_0.access = 33U;
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
    msg.setTimeStamp(0.762841422564425);
    msg.setSource(255U);
    msg.setSourceEntity(7U);
    msg.setDestination(42623U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9634682551261231;
    msg.lon = 0.03360304074041587;
    msg.depth = 0.12803053102248796;
    msg.sentence.assign("BQOAMLCKSSTIMAYYNOZFNUEOKJDHZIZCDUSNUDKMLSBERYMFYENDWRRMVWGPTXXXTNRHWEHVBGYMJHPTNKZQVFCWLEBTQPXAKUQLDMMPCCCGFSAOVOJVEXEHOLBMKPSBEKVCGJLPAEUZKPIABHWOJGSKXAFJXZUESGOYRUORSIFIDYSQNJVZWVUCXLTXBWWOAQLCRGDHQXFNVFQZIVIRWGBIZUBRQNGFLTDUJNIHTPMAD");
    msg.txtime = 0.2717621235386295;
    msg.modem_type.assign("DWVTQWXVVHVULUNWBOJSHCXUHKINWRCFMSYDQFQCQZPLJIUDJLEEKBIDVHTGXGIQWNGAHMPPENEREHIKTDKTKAIUXPQHZFFRPMCCYEVNBEAOZUSXHSNYZDTLBPSTDTTQRYYFGZVJPALMFRIYZCWVLSJSDXOWYOJWGLEKXMPOZSHURACIFLISWJMDCRVKBAKBPBOERMNXHNQQROFYZAFGAPAUNGYORK");
    msg.sys_src.assign("DDQOYKBKDGCVHPRRJBZZZWNIXGUAFNMPKETPLAEXQDNLIIZAPDHQYVNGJMINVBEUIRMEAWNPWTOXPPZFMSYZIFUWKIEJSKUMAPLCVIXRERJBIVTXNELCGZGXGSTERUJCJRNWKMQCWODQVQYIAGFHSXDLYVSXRBHHUFUHGYYVKJLDORJSHMTYBTQVRB");
    msg.seq = 45351U;
    msg.sys_dst.assign("UQIRIBMDXNESYCHONWEQDSAYXCMLLPOIUZBFAAGWYZXTSJLZGAVSAQJKUZBSMDKEQFBQMCBVRZVKTCPFJHBIHNOJLVZR");
    msg.flags = 148U;
    const signed char tmp_msg_0[] = {-19, 119, -80, -106, 23, -3, -105, -7, 87, -71, 43, 20, -19, -77, 96, 5, -3, -57, 55, 39, -83, -108, -86, -127, -102, 66, 68, -91, -14, -9, 20, 35, 8, 84, -108, 31, -31, -28, -8, 23, 24, -121, 126, 43, -17, 16, 32, -96, 111, 125, 117, -6, -99, -1, 49, 60, -39, -112, -31, 16, 60, -31, -100, -116, -30, -30, 87, 9, 71, 36, -41, -15, 91, -18, -109, 58, -98, -86, 29, 99, -91, 88, 15, -39, -96, 31, -38, 44, 110, -90, -23, -83, -87, 66, -29, 27, 77, 45, -44, -88, 110, 119, -62, -67, 86, 71, 38, -1, 49, -56, -28, 109, -47, -35, -10, 50, 11, -33, 110, 42, 56, 65, 121, 56, 99, -33, -1, 102, 82, -38, -125, 95, -23, 122, 65, -81, -42, 85, -1, -102, 30, 34, -61, 9, -60, 27, -3, -14, 36, 79, 85, -87, 121, 80, 11, 45, -96, -36, -22, -115, 107, 83, 35, -7, 73, -6, 63, 107, -125, 97, 55, -37, 10, 33, -7, -26, 102, -38, -105, 45, 81, -101, 77, -23, 61, 113, 52, 21, -89, -103, 113, 105, -45, -74, 55, 99, 19, 81};
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
    msg.setTimeStamp(0.8612901420757527);
    msg.setSource(9318U);
    msg.setSourceEntity(21U);
    msg.setDestination(8622U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.26078443731381973;
    msg.lon = 0.06018708695011399;
    msg.depth = 0.8377475098205034;
    msg.sentence.assign("LMQIYAZWYFCCLGEXGBQBGJYRXVAGOKZJRMYJFSQTUSPNPAJTVMUXWCKPQNQAZWFHJPLZRUTMIIHUHDYNMFCEIBXAGKDUJOEEHEJABKYWNIDTWZOUNHIZLZKNHHOGCDYNOGOLCZFLCFWPXTILRPASHGDMEIXCWBVOKGLWQUDVRLVFHTTVPQDPJOTZKSPAMONTWNSFFIVJPKQERXBULXUASHSKAERDRVRDCDQESXUBYNBYMTCQZWVGFXMKB");
    msg.txtime = 0.43812082790768914;
    msg.modem_type.assign("RQNFCVTYTSVXQUPCWLZRUHFSJXBIDYIJSWEOHUFZVTRERLY");
    msg.sys_src.assign("CVHVVTHUCYGBKNDTDKBJXMQDHIRPCYKIVPFT");
    msg.seq = 42192U;
    msg.sys_dst.assign("PLAKTLXDKFSZWHZHVWUSIDJRKLGCOPNVAPWNGFUGBYSOQSRAEYYIBXZJOZLDFTZFJQDKTVNTBUOWROI");
    msg.flags = 183U;
    const signed char tmp_msg_0[] = {-83, -7, 53, -32, -2, 84, 21, 34, 37, 31, -20, -111, 46, -61, 86, -85, 18, -33, 102, 103, -81, -83, -74, 37, 117, -33, -46, -69, -70, 81, -108, 16, 27, 7, -127, -24, -20, -18, 66, 96, 108, -117, 55, -4, -73, -87, -90, -58, 37, -56, -92, -57, 83, -95, 122, 98, -93, -38, -79, 34, 112, -74, 88, 92, 20, -34, -76, 8, -99, -68, 37, 39, -5, -71, -88, -65, -90, -84, -47, 122, 82, -99, 56, 72, 85, 33, -8, -41, -6, 73, 113, 2, -43, 114, -76, -20, -95, -88, -82, 40, 80, 80, 60, 60, -121, 119, 59, 109, 4, 111, 9, -77, -124, -16, -18, 65, -9, -23, 124, -6, 27, 110, -15, -102, -67, -54, -121, -53, 123, -110, -126, -5, -55, 19, -77, 65, -1, 105, -11, 35, -92, -100, 54, -128, -6, 70, -88, 101, 114, 122, -93, 6, -71, -41, -5, 120, 33, -77, -51, -39, 3, 73, -24, -94, -43, -54, -53, 65, 25, 121, -26, -44, -37, -43, 113, -94, -56, 3, 75, -61, 32, 123, -127, -56, 72, -96, -117, 49, -29, -73, -72, -61, 50, -41, 51, 2, -42, -32, 92, 76, 34, -10, -94, 8, 2, -8, -99, -101, -93, -20, 11, 110, -105, -6, 100, 51, 108, -37, 117, -56, 87, 46, -68, 25, -61};
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
    msg.setTimeStamp(0.1887778227357857);
    msg.setSource(24105U);
    msg.setSourceEntity(22U);
    msg.setDestination(2413U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.4890880717667597;
    msg.lon = 0.9743644385660934;
    msg.depth = 0.12311253742840422;
    msg.sentence.assign("POITCAOIPZGKSQCWEJDDYNSBFLWQAJJAXUOOBKWFCWEBJLYRZJTRZWYRIJFMGIYULZSGVGYQSQVSPJRGEDZIMCIMZCMMEYTAAJKVOSQTVHYDWCMOFFUFHUMEALSSZXVIHBLBNPBLOTBEDVDUSXAYKHPTDMKAFGVFXHPGPHALGIURCQHMNCDAUBHZBXRWNYONWKKXLZIPEFJRORDRGQPUGWKXULLCNRVXQNMQBPNEVSXOYIQKCHKDEVJXNT");
    msg.txtime = 0.23502826242341435;
    msg.modem_type.assign("TVXLDYOXRBSXZXWAVFIRYQAEDZJDZDWFMSNLOVUOUGSEGQTLBBOYYWKNDNEAXWPEIBWYVRKKIGJHTIZPUOLXVGSVA");
    msg.sys_src.assign("VULJTYLVKNXFGHVVSIACVBOHZQBHQZYNCOXQGIYHIMHNNEDKYGUPJURJAYQNSIPQOSJMQGZKCSOVUGJCKSRFKWJABTAAFOVDEIIJ");
    msg.seq = 49590U;
    msg.sys_dst.assign("XULDFTSNUWOPVLNUTPORUCDSDFZOSGTRGHKRYXXXSQXMLAJGMDFWYMDKVYEADYJUAZTOVBIBDKEFLHFISOCOWBGQCHPICTMGECCPHWFCRYIWNRYIVQZKVDRABYUFMJHKBRNLPEJACWJYVZJRQTJOUZPAVDPLWLINJMSGNKISPIFOGEBHGNKQQTZWYBVRZTBJPAOAXUWGVUKIMUPZFJNMHOQTEALXINZBCELSEDEKMREHTSQYQXQVHA");
    msg.flags = 153U;
    const signed char tmp_msg_0[] = {-115, -110, -107, 84, 25, 123, -78, 123, 0, -22, 97, 120, 95, -63, 113, 26, -120, 105, 58, -114, -118, 38, 47, -56, 103, 35, 2, -50, 2, 70, 34, -6, 96, 24, 2, 16, -22, 102, 31, 35, -76, 11, -4, 125, 10, 32, -54, 89, 16, 14, -40, -42, -113, -117, 61, -37, -39, -34, -85, 45, -38, -102, 11, 58, 90, -79, -44, -101, -51, -114, 21, -56, 27, 16, -111, 17, 96, -33, 98, -7, -88, -77, -38, -117, 97, -60, -96, 63, -39, 126, 13, 3, -128, 53, 58, 89, 93, -42, 116, -91, -68, -87, 126, 104, 81, -15, -46, 86, 93, -7, 86, -85, -67, 94, -5, 115, 53, -109, 8, -67, -94, 1, 13, 124, 124, -47, -72, -42, -77, 27, -60, 5, -55, -27, -71, 11, -69, 99, -46, 72, -21, 95, 74, -100, -99, -94, -116, -63, -20, 54, -32, 126, 70, 32, 113, -49, -122, -76, -3, 43, 81, 46, -82, -54, 123, -4, -113, 75, 51, -6, 84, -46, 73, -106, -68, 75, 79, 56, -62, -60, -20, 60, 107, 119, -50, -42, 67, -112, -17, 83, -126, 0, -2, -30, -64};
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
    msg.setTimeStamp(0.7245070355036631);
    msg.setSource(5618U);
    msg.setSourceEntity(135U);
    msg.setDestination(65489U);
    msg.setDestinationEntity(10U);
    msg.op = 254U;
    msg.system.assign("LZPVLHDGQCRJQDKLCRAEPXEPSCQAYFXWBJLUADASJVWFBEAASLJMWST");
    msg.range = 0.39748063915227083;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.9766949077710788;
    tmp_msg_0.x = 0.2585736668742967;
    tmp_msg_0.y = 0.6920653216598212;
    tmp_msg_0.z = 0.6398156598966641;
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
    msg.setTimeStamp(0.5318424248541446);
    msg.setSource(44795U);
    msg.setSourceEntity(248U);
    msg.setDestination(55738U);
    msg.setDestinationEntity(247U);
    msg.op = 53U;
    msg.system.assign("YUNTQRCLUDOGZVDPMGRAHXYTPMFMJGEPNNJQCBZMQA");
    msg.range = 0.635388976810219;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.8869503752756297;
    tmp_msg_0.ay_cmd = 0.9483738444591437;
    tmp_msg_0.az_cmd = 0.9660794617100128;
    tmp_msg_0.ax_des = 0.39743654826699215;
    tmp_msg_0.ay_des = 0.6880648503767973;
    tmp_msg_0.az_des = 0.9814714695231979;
    tmp_msg_0.virt_err_x = 0.6823799934858512;
    tmp_msg_0.virt_err_y = 0.5446059523295713;
    tmp_msg_0.virt_err_z = 0.0357022503436214;
    tmp_msg_0.surf_fdbk_x = 0.34985951919744507;
    tmp_msg_0.surf_fdbk_y = 0.4035435555012664;
    tmp_msg_0.surf_fdbk_z = 0.555294973837329;
    tmp_msg_0.surf_unkn_x = 0.5712860869677622;
    tmp_msg_0.surf_unkn_y = 0.43431661674625466;
    tmp_msg_0.surf_unkn_z = 0.6558303673007363;
    tmp_msg_0.ss_x = 0.23949971284315996;
    tmp_msg_0.ss_y = 0.405089621964861;
    tmp_msg_0.ss_z = 0.003441529372250507;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("NJYDXXDITBRPJKHXUISWBALTUZTTODCNAVLZQROBZECWWAYAIXOGHAJMDYGZVDKHBTNLPCFMYKJUVTLAZEGJRJAGVEWZPNEXMTCPKEDIBOTXSWBPZOSOFQLGRHJXFH");
    tmp_tmp_msg_0_0.dist = 0.9566351210444994;
    tmp_tmp_msg_0_0.err = 0.19764834235522477;
    tmp_tmp_msg_0_0.ctrl_imp = 0.016795572220753785;
    tmp_tmp_msg_0_0.rel_dir_x = 0.7876725386847483;
    tmp_tmp_msg_0_0.rel_dir_y = 0.6108909398088924;
    tmp_tmp_msg_0_0.rel_dir_z = 0.6118383364502281;
    tmp_tmp_msg_0_0.err_x = 0.9120230339654513;
    tmp_tmp_msg_0_0.err_y = 0.7120120016981353;
    tmp_tmp_msg_0_0.err_z = 0.16641362185651543;
    tmp_tmp_msg_0_0.rf_err_x = 0.8931050275222279;
    tmp_tmp_msg_0_0.rf_err_y = 0.6932982623924684;
    tmp_tmp_msg_0_0.rf_err_z = 0.07955807396603809;
    tmp_tmp_msg_0_0.rf_err_vx = 0.16948733362013035;
    tmp_tmp_msg_0_0.rf_err_vy = 0.8411063670699465;
    tmp_tmp_msg_0_0.rf_err_vz = 0.9065858532691508;
    tmp_tmp_msg_0_0.ss_x = 0.16841887172978787;
    tmp_tmp_msg_0_0.ss_y = 0.5181562089411506;
    tmp_tmp_msg_0_0.ss_z = 0.03813017206138525;
    tmp_tmp_msg_0_0.virt_err_x = 0.1989148810978535;
    tmp_tmp_msg_0_0.virt_err_y = 0.7224223431857109;
    tmp_tmp_msg_0_0.virt_err_z = 0.048046616838568035;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.753350090501653);
    msg.setSource(45271U);
    msg.setSourceEntity(112U);
    msg.setDestination(21374U);
    msg.setDestinationEntity(138U);
    msg.op = 112U;
    msg.system.assign("CUCHKCGRJKVAVJAGXWTYQOFQBPEIZNMEGWLYSGVNWGTTQITEECIRDVJRLHUNMMSNFRTYELSQCXPDYNNCTYLPDYHCQQIAALIBVWXDKUFJKQFGTSEQURKJZJFCUI");
    msg.range = 0.14108017831210207;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.7540058437591642;
    tmp_msg_0.lon = 0.45127149794221166;
    tmp_msg_0.z = 0.2025077008108047;
    tmp_msg_0.z_units = 105U;
    tmp_msg_0.radius = 0.06540310305518582;
    tmp_msg_0.duration = 22356U;
    tmp_msg_0.speed = 0.6443497329046145;
    tmp_msg_0.speed_units = 97U;
    tmp_msg_0.custom.assign("AISXZOYWVXXDBFCZNETHRJYETGFFZOEGJCPLFTFJLUVBFPVDYPMTKKICXBWAYYUXOXGLNDHSYJHIOIZURJBZVCGMNUFZSDLPBJK");
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
    msg.setTimeStamp(0.911590922094442);
    msg.setSource(15597U);
    msg.setSourceEntity(244U);
    msg.setDestination(12382U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.9551645401002032);
    msg.setSource(56341U);
    msg.setSourceEntity(152U);
    msg.setDestination(23002U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.5435639693718121);
    msg.setSource(33136U);
    msg.setSourceEntity(225U);
    msg.setDestination(58526U);
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
    msg.setTimeStamp(0.013918642307580997);
    msg.setSource(595U);
    msg.setSourceEntity(169U);
    msg.setDestination(46136U);
    msg.setDestinationEntity(189U);
    msg.list.assign("NMDMURNJSGBJKDWUZFHRXINHQYVHYYGLVKKTHFUAWWHQRPAIUSPDWANANWFPTSBODEUZUYJPTLQRXPMRCULV");

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
    msg.setTimeStamp(0.10448422779118127);
    msg.setSource(51119U);
    msg.setSourceEntity(85U);
    msg.setDestination(6827U);
    msg.setDestinationEntity(86U);
    msg.list.assign("WIMIJIQGHVQYPRLSOXYEWYDIXSTRCGBYSQYM");

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
    msg.setTimeStamp(0.4107085084509733);
    msg.setSource(59376U);
    msg.setSourceEntity(120U);
    msg.setDestination(48260U);
    msg.setDestinationEntity(114U);
    msg.list.assign("SUPXVGHETOKXIYSXXIHSAUHGPHDKBHSQJEBQAFQOKHZDEPUJVLGICUWAVRTGCRJWBDXCOKSXVWLMIBTTQFZFQBDKYORJTQANGBKAUHHROACNDULVIYJEZGNPVGUVNMYFPHMTCCFWDHYOAJUIQKRAY");

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
    msg.setTimeStamp(0.43956118529771193);
    msg.setSource(31620U);
    msg.setSourceEntity(182U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(43U);
    msg.peer.assign("WQMASHCZILDZMVNSESFFBUUROLZBQKRPRWYQORJZTDOUHLRFYKYQGVPGRIQACJJETOJTQYCHBHYVDCPEMJAWAXDXXFBZCTIQKMYFFJQTGABMWESETWNKACHJYUGWKTNZCHTJXNMXWKOCNLMYNUZO");
    msg.rssi = 0.20098749458398912;
    msg.integrity = 39881U;

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
    msg.setTimeStamp(0.6017434396458856);
    msg.setSource(30375U);
    msg.setSourceEntity(181U);
    msg.setDestination(59260U);
    msg.setDestinationEntity(54U);
    msg.peer.assign("IAWDGGPIQXYBNKCRZDSLJFQZUVYAXPELJPFIHZVFGMYMOLXFZEMVFGJBOWATPBIYINIJWDBHGEFDMWJETNEACXRLTSMITITLRBWUTHGNEFTXKUCLDOVSEVHTZZ");
    msg.rssi = 0.6127392467872758;
    msg.integrity = 11326U;

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
    msg.setTimeStamp(0.33705030523761537);
    msg.setSource(23037U);
    msg.setSourceEntity(124U);
    msg.setDestination(23300U);
    msg.setDestinationEntity(5U);
    msg.peer.assign("DBEKRILEEMWLAMABWPWOJXZYVRQZSHGWJSZGROBYHXRNJWTDGOZHCBQPHPEFDDYXSYCZNAKBUDWLRKGVILGKMXONLHFWVBZHAADCKQXTNDTJBGQIVKUNTUNBXLDYDZCEO");
    msg.rssi = 0.8955492782516873;
    msg.integrity = 50500U;

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
    msg.setTimeStamp(0.7846405925683642);
    msg.setSource(28210U);
    msg.setSourceEntity(181U);
    msg.setDestination(16291U);
    msg.setDestinationEntity(170U);
    msg.req_id = 33141U;
    msg.destination.assign("DGNRIPMMPHQO");
    msg.timeout = 0.5409487600962853;
    msg.range = 0.11039774022216053;
    msg.type = 20U;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.16816290222727226;
    tmp_msg_0.phi = 0.6278401067772957;
    tmp_msg_0.theta = 0.13882754650907414;
    tmp_msg_0.psi = 0.5340902556427158;
    tmp_msg_0.psi_magnetic = 0.8058459915354604;
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
    msg.setTimeStamp(0.8068018558344023);
    msg.setSource(45449U);
    msg.setSourceEntity(190U);
    msg.setDestination(54566U);
    msg.setDestinationEntity(68U);
    msg.req_id = 26331U;
    msg.destination.assign("TWYBHOXUEGCAUDCJXEWAVEQOGYYKFKUBNULMVTHERCJJBIGPGCMSAEAVTNWSYRHFDEHBFVUUGJJTAUAFXCENMKPWCPYQSVDTOOWAIZQKHVMSNDPLZGNKSPGRIWBSXZIZXCJKYPXONTRCZNDRSHGHWQMFTJXOYFALAEEQIDVZ");
    msg.timeout = 0.3493486042870879;
    msg.range = 0.27110151661471127;
    msg.type = 240U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 189U;
    tmp_msg_0.error.assign("BEDIWSAKOLQHDPTUBJIMOPOQJUGJBFDFHMDRSBVPFYHLCTYVNPIEGVJLVANOWMWSKKHKUPRESQWMWCTECRGWBPOQPLVETCAKSXMXTCIATVKQZJDMGQUGRJYFOYEYLGNUTLRZHYBPFIDNESBXAHGOWICVDBUZYZUFNKGWLNOJRMCMTYGZFAFXIQHWKOGWZMIKZRSXRASXVQJUVBIPULQYCMCPRNANHBJXEIYFZAFUSNDZSELXQVAKT");
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
    msg.setTimeStamp(0.38353255506095385);
    msg.setSource(6686U);
    msg.setSourceEntity(71U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(222U);
    msg.req_id = 64796U;
    msg.destination.assign("FKBEGBCYCLOOVFGMOREEZRQWIAPSZAHNDJQUFPIIQGPUCKQDBVZNENGDCQXOLYATODHBYZPYZEDZMOEOALNXYKKSRJOZJYATVZBNCYAVHKVHVCTLCTSMPYLQTUKMVNGFTXRLONAUPXILUBSUXJWJSQJPJIULF");
    msg.timeout = 0.87606522793433;
    msg.range = 0.6173817985160179;
    msg.type = 142U;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 232U;
    tmp_msg_0.range = 0.1019243768083321;
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
    msg.setTimeStamp(0.9948120181260149);
    msg.setSource(56824U);
    msg.setSourceEntity(103U);
    msg.setDestination(21962U);
    msg.setDestinationEntity(178U);
    msg.req_id = 13535U;
    msg.type = 224U;
    msg.status = 41U;
    msg.info.assign("LAKMDEJOKSQLKSXCZHMWZVBIXCYSXMQZTLQBSUYFNIQXTQUYTGOKVLRMINQNSDRKIBSOTNKVOUNHWHACPLHQVRGNFBMRAHEYFGZGIJZRDRAZUPBCNWKARFJIYALBLPOGUXCVPXYXCZEWVGJGYRIJSHDMXLIZTKDPWCHMJOZFKELFWQPWMSYUJTCEDYVUOBHIHWTFBPZXRGWTDCJQNNEEMDIBFPEMAQVAROAUODF");
    msg.range = 0.35327918161835825;

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
    msg.setTimeStamp(0.8361273875826349);
    msg.setSource(12655U);
    msg.setSourceEntity(138U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(4U);
    msg.req_id = 509U;
    msg.type = 234U;
    msg.status = 56U;
    msg.info.assign("ICJZZOSXRCXCCSKOBOQWSCPXNETFJFVHUTGMWMKEFSTVDDRCSDBQHBAFFAWMGRJRJUXNKEBXHJJUVOXFYNLXMCTGJZBJYHBWELQBFNNPOUSLZIDUAWQYPHODGDMVJUIRIOKZEVNLZIDVESMWIWPCAQTRRIRGQZLOXLFZXIMUNAAEPOBWGQVOMQFSEZVAQYPGSPCKTEULCIYPR");
    msg.range = 0.546630284682932;

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
    msg.setTimeStamp(0.19015148449587826);
    msg.setSource(53404U);
    msg.setSourceEntity(87U);
    msg.setDestination(8569U);
    msg.setDestinationEntity(180U);
    msg.req_id = 32440U;
    msg.type = 232U;
    msg.status = 101U;
    msg.info.assign("WUVCEYHGDTCLPGVQNFEWGJDNEEDMWSJZRALCJOREDCYXSYZEUAJBCJMKYVDJYETOBSQYQRXSSKGPHYTNQGLTZFIUNMPIVJHIBSHPCFEMUT");
    msg.range = 0.18652507898040693;

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
    msg.setTimeStamp(0.9923226894742333);
    msg.setSource(57496U);
    msg.setSourceEntity(199U);
    msg.setDestination(34743U);
    msg.setDestinationEntity(98U);
    msg.system.assign("UWGNZSVEJDWZSZXPQFLHDMHRNDEHVJFMALGFAFFIPMOTTLZXADULVXWLOAWPTTZOSCCODUKROTYBPPUIVGBCEVIYBPIPSIGLBJIWWQBHCNZXEKZGNKQSLVGNRBXUWEAIRYWNLRGUSULMEKIKKTNHVYNXRMQYQJGFE");
    msg.op = 49U;

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
    msg.setTimeStamp(0.12920524354244278);
    msg.setSource(26011U);
    msg.setSourceEntity(188U);
    msg.setDestination(59269U);
    msg.setDestinationEntity(1U);
    msg.system.assign("UGWOMISUIEMWNZIBBHTRQEKKFYLDHWJFWNKMPEJOTPIQCGFVIAKNVCBCOJOWBXKAXUAMMJRARCZGSUQSVNCRQHGJRRDYXAWJIUVMYPNQKUDDMPIHOCLADUYCKAVQLMLWXABSPAPSTOBKYQZUGTFVFUXGYHSNGPRYEIJSEFQXRUDZOVHCXGSLQTCHHLLVDYMPVTTLEFDYHKZKRSBXBFGNOZOETTCZETJFBLGY");
    msg.op = 247U;

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
    msg.setTimeStamp(0.023130805678606814);
    msg.setSource(31644U);
    msg.setSourceEntity(175U);
    msg.setDestination(20360U);
    msg.setDestinationEntity(241U);
    msg.system.assign("RCLOVEYZWIZUTFVJHN");
    msg.op = 6U;

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
    msg.setTimeStamp(0.7866724792252405);
    msg.setSource(33682U);
    msg.setSourceEntity(57U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(246U);
    msg.value = 14249;

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
    msg.setTimeStamp(0.44790714394062714);
    msg.setSource(77U);
    msg.setSourceEntity(18U);
    msg.setDestination(43225U);
    msg.setDestinationEntity(79U);
    msg.value = -13886;

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
    msg.setTimeStamp(0.207864899505945);
    msg.setSource(19767U);
    msg.setSourceEntity(67U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(164U);
    msg.value = 12906;

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
    msg.setTimeStamp(0.7007679811007733);
    msg.setSource(48806U);
    msg.setSourceEntity(32U);
    msg.setDestination(4031U);
    msg.setDestinationEntity(128U);
    msg.value = 0.23408443514140242;

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
    msg.setTimeStamp(0.12224052384590867);
    msg.setSource(52707U);
    msg.setSourceEntity(102U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(119U);
    msg.value = 0.1809140983670645;

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
    msg.setTimeStamp(0.7997556158727793);
    msg.setSource(44663U);
    msg.setSourceEntity(83U);
    msg.setDestination(16565U);
    msg.setDestinationEntity(134U);
    msg.value = 0.7410762723817977;

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
    msg.setTimeStamp(0.21963427404715752);
    msg.setSource(49575U);
    msg.setSourceEntity(53U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(79U);
    msg.value = 0.23404819047902803;

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
    msg.setTimeStamp(0.4047209723318843);
    msg.setSource(58025U);
    msg.setSourceEntity(23U);
    msg.setDestination(2787U);
    msg.setDestinationEntity(36U);
    msg.value = 0.49763362551765467;

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
    msg.setTimeStamp(0.09402164728020557);
    msg.setSource(59896U);
    msg.setSourceEntity(235U);
    msg.setDestination(22703U);
    msg.setDestinationEntity(56U);
    msg.value = 0.6135746847931945;

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
    msg.setTimeStamp(0.3893970202078262);
    msg.setSource(16603U);
    msg.setSourceEntity(126U);
    msg.setDestination(21850U);
    msg.setDestinationEntity(139U);
    msg.validity = 44745U;
    msg.type = 210U;
    msg.utc_year = 40619U;
    msg.utc_month = 37U;
    msg.utc_day = 181U;
    msg.utc_time = 0.2797140661360441;
    msg.lat = 0.29735678023376577;
    msg.lon = 0.2212804380410337;
    msg.height = 0.648057201863219;
    msg.satellites = 80U;
    msg.cog = 0.2997853331097915;
    msg.sog = 0.30010748653480845;
    msg.hdop = 0.6353636273583961;
    msg.vdop = 0.20035046172336712;
    msg.hacc = 0.8859137748321158;
    msg.vacc = 0.6012216199266821;

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
    msg.setTimeStamp(0.6274620185640203);
    msg.setSource(56181U);
    msg.setSourceEntity(242U);
    msg.setDestination(63497U);
    msg.setDestinationEntity(166U);
    msg.validity = 6241U;
    msg.type = 66U;
    msg.utc_year = 47594U;
    msg.utc_month = 37U;
    msg.utc_day = 154U;
    msg.utc_time = 0.9722942087038176;
    msg.lat = 0.6633711548837616;
    msg.lon = 0.31432843176948677;
    msg.height = 0.5658800990534143;
    msg.satellites = 174U;
    msg.cog = 0.13891280591633937;
    msg.sog = 0.41079744278603825;
    msg.hdop = 0.047717788315825405;
    msg.vdop = 0.45806801883499104;
    msg.hacc = 0.8972176063767301;
    msg.vacc = 0.8706166389284673;

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
    msg.setTimeStamp(0.6199494022048049);
    msg.setSource(19463U);
    msg.setSourceEntity(252U);
    msg.setDestination(20562U);
    msg.setDestinationEntity(224U);
    msg.validity = 35800U;
    msg.type = 72U;
    msg.utc_year = 55728U;
    msg.utc_month = 156U;
    msg.utc_day = 127U;
    msg.utc_time = 0.26101234375402027;
    msg.lat = 0.16304247840084773;
    msg.lon = 0.5413863364771047;
    msg.height = 0.3001359723080327;
    msg.satellites = 20U;
    msg.cog = 0.5038686201194473;
    msg.sog = 0.5024498286560014;
    msg.hdop = 0.7595203060631643;
    msg.vdop = 0.6227217651727942;
    msg.hacc = 0.419889611968593;
    msg.vacc = 0.9901266282132547;

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
    msg.setTimeStamp(0.04195673199637873);
    msg.setSource(19355U);
    msg.setSourceEntity(95U);
    msg.setDestination(63369U);
    msg.setDestinationEntity(7U);
    msg.time = 0.8996459554039963;
    msg.phi = 0.3514085393941586;
    msg.theta = 0.19550886872309126;
    msg.psi = 0.0634333661363492;
    msg.psi_magnetic = 0.3726598513523838;

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
    msg.setTimeStamp(0.11418788743381669);
    msg.setSource(20864U);
    msg.setSourceEntity(149U);
    msg.setDestination(15657U);
    msg.setDestinationEntity(174U);
    msg.time = 0.400303415364206;
    msg.phi = 0.4800716363041122;
    msg.theta = 0.6139018316263101;
    msg.psi = 0.30861297477886274;
    msg.psi_magnetic = 0.31259794235712446;

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
    msg.setTimeStamp(0.42936124711615054);
    msg.setSource(2382U);
    msg.setSourceEntity(20U);
    msg.setDestination(3200U);
    msg.setDestinationEntity(54U);
    msg.time = 0.6396871435958936;
    msg.phi = 0.553057204756879;
    msg.theta = 0.26063911901318026;
    msg.psi = 0.954397921484761;
    msg.psi_magnetic = 0.49560190233304235;

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
    msg.setTimeStamp(0.6356519255903591);
    msg.setSource(46171U);
    msg.setSourceEntity(2U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(221U);
    msg.time = 0.056098179797055225;
    msg.x = 0.8491047960954757;
    msg.y = 0.4876599914866421;
    msg.z = 0.7807462028158451;
    msg.timestep = 0.32789583197967953;

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
    msg.setTimeStamp(0.5759080438418254);
    msg.setSource(22304U);
    msg.setSourceEntity(131U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(23U);
    msg.time = 0.9177088352488951;
    msg.x = 0.2443044389770187;
    msg.y = 0.7907215625934012;
    msg.z = 0.9009386386391632;
    msg.timestep = 0.33283552065945077;

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
    msg.setTimeStamp(0.5026077011168294);
    msg.setSource(40378U);
    msg.setSourceEntity(206U);
    msg.setDestination(47123U);
    msg.setDestinationEntity(189U);
    msg.time = 0.4520997905991039;
    msg.x = 0.8780267820751472;
    msg.y = 0.9022566062252465;
    msg.z = 0.7917374575234315;
    msg.timestep = 0.05858488813322282;

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
    msg.setTimeStamp(0.27740862916698983);
    msg.setSource(42185U);
    msg.setSourceEntity(173U);
    msg.setDestination(33166U);
    msg.setDestinationEntity(248U);
    msg.time = 0.6719918047364739;
    msg.x = 0.8343012245742553;
    msg.y = 0.9750295175941588;
    msg.z = 0.8265623131231564;

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
    msg.setTimeStamp(0.27987161580250486);
    msg.setSource(39006U);
    msg.setSourceEntity(247U);
    msg.setDestination(5813U);
    msg.setDestinationEntity(145U);
    msg.time = 0.7715027453902531;
    msg.x = 0.08041602679943316;
    msg.y = 0.030081123770687834;
    msg.z = 0.4458651681939714;

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
    msg.setTimeStamp(0.7219134226798308);
    msg.setSource(11702U);
    msg.setSourceEntity(33U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(91U);
    msg.time = 0.08107404724165679;
    msg.x = 0.3814754829387461;
    msg.y = 0.3086544204037862;
    msg.z = 0.790549048994167;

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
    msg.setTimeStamp(0.4501299001152613);
    msg.setSource(6476U);
    msg.setSourceEntity(24U);
    msg.setDestination(5487U);
    msg.setDestinationEntity(222U);
    msg.time = 0.4724053964545032;
    msg.x = 0.36547091910054896;
    msg.y = 0.021103013306292162;
    msg.z = 0.7918783475243156;

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
    msg.setTimeStamp(0.09397937485920216);
    msg.setSource(34115U);
    msg.setSourceEntity(124U);
    msg.setDestination(23281U);
    msg.setDestinationEntity(40U);
    msg.time = 0.5791028119432438;
    msg.x = 0.9126997276231728;
    msg.y = 0.06495394652602815;
    msg.z = 0.6463787299303831;

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
    msg.setTimeStamp(0.7603167338162065);
    msg.setSource(21504U);
    msg.setSourceEntity(120U);
    msg.setDestination(41994U);
    msg.setDestinationEntity(197U);
    msg.time = 0.37094267990044216;
    msg.x = 0.12899541046642826;
    msg.y = 0.6980673654011477;
    msg.z = 0.660930298314293;

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
    msg.setTimeStamp(0.020092261300742154);
    msg.setSource(56942U);
    msg.setSourceEntity(158U);
    msg.setDestination(25998U);
    msg.setDestinationEntity(234U);
    msg.time = 0.2540309136486161;
    msg.x = 0.808826932519799;
    msg.y = 0.19062429696042715;
    msg.z = 0.30876761152443544;

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
    msg.setTimeStamp(0.5724104126188115);
    msg.setSource(42877U);
    msg.setSourceEntity(244U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(224U);
    msg.time = 0.2593374315288589;
    msg.x = 0.6754629602938544;
    msg.y = 0.7013148104810023;
    msg.z = 0.5651940964010286;

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
    msg.setTimeStamp(0.5384155513940788);
    msg.setSource(34181U);
    msg.setSourceEntity(214U);
    msg.setDestination(10803U);
    msg.setDestinationEntity(112U);
    msg.time = 0.15461364847532;
    msg.x = 0.6009995654186954;
    msg.y = 0.8122371727142037;
    msg.z = 0.8780513248753332;

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
    msg.setTimeStamp(0.020514100344014796);
    msg.setSource(1586U);
    msg.setSourceEntity(63U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(79U);
    msg.validity = 16U;
    msg.x = 0.5814701893611013;
    msg.y = 0.32941074618367483;
    msg.z = 0.6070855227418605;

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
    msg.setTimeStamp(0.9677571056975615);
    msg.setSource(22141U);
    msg.setSourceEntity(54U);
    msg.setDestination(45809U);
    msg.setDestinationEntity(202U);
    msg.validity = 196U;
    msg.x = 0.1909665576157371;
    msg.y = 0.7172063889897027;
    msg.z = 0.9991138743308631;

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
    msg.setTimeStamp(0.21859398188088253);
    msg.setSource(14796U);
    msg.setSourceEntity(244U);
    msg.setDestination(27618U);
    msg.setDestinationEntity(5U);
    msg.validity = 29U;
    msg.x = 0.5856350247746062;
    msg.y = 0.8066959141551878;
    msg.z = 0.6337141935747174;

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
    msg.setTimeStamp(0.8240243610444513);
    msg.setSource(24139U);
    msg.setSourceEntity(20U);
    msg.setDestination(27739U);
    msg.setDestinationEntity(152U);
    msg.validity = 224U;
    msg.x = 0.24020530056692657;
    msg.y = 0.18143794293270832;
    msg.z = 0.3470505066560271;

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
    msg.setTimeStamp(0.5210803346565844);
    msg.setSource(31413U);
    msg.setSourceEntity(220U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(220U);
    msg.validity = 2U;
    msg.x = 0.765235716975955;
    msg.y = 0.4333007368973667;
    msg.z = 0.5119573561136718;

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
    msg.setTimeStamp(0.4817718479361486);
    msg.setSource(49863U);
    msg.setSourceEntity(52U);
    msg.setDestination(32656U);
    msg.setDestinationEntity(41U);
    msg.validity = 235U;
    msg.x = 0.1692770656194892;
    msg.y = 0.15277095622432746;
    msg.z = 0.29616359138501813;

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
    msg.setTimeStamp(0.8242300676508085);
    msg.setSource(15511U);
    msg.setSourceEntity(146U);
    msg.setDestination(12040U);
    msg.setDestinationEntity(67U);
    msg.time = 0.7045714577462662;
    msg.x = 0.8271266290223754;
    msg.y = 0.7667931998368156;
    msg.z = 0.26743483489645525;

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
    msg.setTimeStamp(0.1346984594620294);
    msg.setSource(49585U);
    msg.setSourceEntity(160U);
    msg.setDestination(1348U);
    msg.setDestinationEntity(203U);
    msg.time = 0.6081703335789623;
    msg.x = 0.175491864564693;
    msg.y = 0.2880469608100771;
    msg.z = 0.9606682413016308;

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
    msg.setTimeStamp(0.5168553494342214);
    msg.setSource(65134U);
    msg.setSourceEntity(162U);
    msg.setDestination(12751U);
    msg.setDestinationEntity(33U);
    msg.time = 0.7396940580721958;
    msg.x = 0.2816709556491853;
    msg.y = 0.5710754563647048;
    msg.z = 0.4626489871527776;

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
    msg.setTimeStamp(0.16602752072489346);
    msg.setSource(25963U);
    msg.setSourceEntity(230U);
    msg.setDestination(37885U);
    msg.setDestinationEntity(31U);
    msg.validity = 96U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5510503785453251;
    tmp_msg_0.y = 0.5292696700719627;
    tmp_msg_0.z = 0.08072027418550543;
    tmp_msg_0.phi = 0.9760165662719982;
    tmp_msg_0.theta = 0.5157987936111617;
    tmp_msg_0.psi = 0.07365083991370658;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7668023824677543;

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
    msg.setTimeStamp(0.5357434417842214);
    msg.setSource(26654U);
    msg.setSourceEntity(174U);
    msg.setDestination(29492U);
    msg.setDestinationEntity(180U);
    msg.validity = 230U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9120754954843704;
    tmp_msg_0.y = 0.9612937310681844;
    tmp_msg_0.z = 0.2821438688626875;
    tmp_msg_0.phi = 0.2722573347514796;
    tmp_msg_0.theta = 0.9857544563041257;
    tmp_msg_0.psi = 0.6246897314330611;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1657106413241879;
    tmp_msg_1.beam_height = 0.22610569260499347;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8082923943102913;

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
    msg.setTimeStamp(0.45967004168694026);
    msg.setSource(19893U);
    msg.setSourceEntity(225U);
    msg.setDestination(11602U);
    msg.setDestinationEntity(244U);
    msg.validity = 40U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6620777603689373;
    tmp_msg_0.y = 0.13307801043148793;
    tmp_msg_0.z = 0.37350890608528187;
    tmp_msg_0.phi = 0.7918145597199688;
    tmp_msg_0.theta = 0.18132822684708294;
    tmp_msg_0.psi = 0.23243420267648485;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.14702578280068979;

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
    msg.setTimeStamp(0.2139373784924854);
    msg.setSource(60909U);
    msg.setSourceEntity(69U);
    msg.setDestination(22721U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6035791557774127;

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
    msg.setTimeStamp(0.5963455649096);
    msg.setSource(43225U);
    msg.setSourceEntity(7U);
    msg.setDestination(13019U);
    msg.setDestinationEntity(169U);
    msg.value = 0.025750248523822905;

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
    msg.setTimeStamp(0.06556777593119534);
    msg.setSource(16183U);
    msg.setSourceEntity(80U);
    msg.setDestination(13778U);
    msg.setDestinationEntity(230U);
    msg.value = 0.19102799556675742;

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
    msg.setTimeStamp(0.05420749473752673);
    msg.setSource(33107U);
    msg.setSourceEntity(77U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5785302579090568;

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
    msg.setTimeStamp(0.9819110915069139);
    msg.setSource(46757U);
    msg.setSourceEntity(230U);
    msg.setDestination(46254U);
    msg.setDestinationEntity(92U);
    msg.value = 0.37949277294261163;

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
    msg.setTimeStamp(0.6018978279102848);
    msg.setSource(49802U);
    msg.setSourceEntity(59U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(241U);
    msg.value = 0.40535673858550747;

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
    msg.setTimeStamp(0.40504745981407253);
    msg.setSource(14680U);
    msg.setSourceEntity(82U);
    msg.setDestination(11924U);
    msg.setDestinationEntity(115U);
    msg.value = 0.8163110723062897;

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
    msg.setTimeStamp(0.562997545120608);
    msg.setSource(18346U);
    msg.setSourceEntity(70U);
    msg.setDestination(55394U);
    msg.setDestinationEntity(236U);
    msg.value = 0.3819314974930773;

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
    msg.setTimeStamp(0.3961268764219966);
    msg.setSource(14146U);
    msg.setSourceEntity(211U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(200U);
    msg.value = 0.13812169758412984;

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
    msg.setTimeStamp(0.7822861138796383);
    msg.setSource(42115U);
    msg.setSourceEntity(86U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(135U);
    msg.value = 0.9907701875913708;

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
    msg.setTimeStamp(0.739459635357927);
    msg.setSource(23601U);
    msg.setSourceEntity(110U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7721854122315488;

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
    msg.setTimeStamp(0.13691930780928596);
    msg.setSource(54104U);
    msg.setSourceEntity(51U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(27U);
    msg.value = 0.7334895189858371;

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
    msg.setTimeStamp(0.5374157756175829);
    msg.setSource(15051U);
    msg.setSourceEntity(244U);
    msg.setDestination(30570U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7608283009475901;

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
    msg.setTimeStamp(0.3556689682913172);
    msg.setSource(3221U);
    msg.setSourceEntity(166U);
    msg.setDestination(42304U);
    msg.setDestinationEntity(134U);
    msg.value = 0.23373134412329977;

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
    msg.setTimeStamp(0.39375729826890393);
    msg.setSource(58209U);
    msg.setSourceEntity(9U);
    msg.setDestination(40364U);
    msg.setDestinationEntity(15U);
    msg.value = 0.43155273361583424;

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
    msg.setTimeStamp(0.5189146804136999);
    msg.setSource(5881U);
    msg.setSourceEntity(102U);
    msg.setDestination(12210U);
    msg.setDestinationEntity(146U);
    msg.value = 0.9407101619315592;

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
    msg.setTimeStamp(0.5796956553616118);
    msg.setSource(46481U);
    msg.setSourceEntity(209U);
    msg.setDestination(31329U);
    msg.setDestinationEntity(53U);
    msg.value = 0.07891795881709307;

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
    msg.setTimeStamp(0.08156615466916517);
    msg.setSource(45983U);
    msg.setSourceEntity(78U);
    msg.setDestination(26933U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7266634901882492;

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
    msg.setTimeStamp(0.666323559623026);
    msg.setSource(53322U);
    msg.setSourceEntity(52U);
    msg.setDestination(8647U);
    msg.setDestinationEntity(231U);
    msg.value = 0.2632593959711038;

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
    msg.setTimeStamp(0.5754140338321503);
    msg.setSource(21300U);
    msg.setSourceEntity(84U);
    msg.setDestination(61581U);
    msg.setDestinationEntity(179U);
    msg.value = 0.3848681526690463;

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
    msg.setTimeStamp(0.6511598150358474);
    msg.setSource(52515U);
    msg.setSourceEntity(41U);
    msg.setDestination(30873U);
    msg.setDestinationEntity(194U);
    msg.value = 0.46416772169291964;

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
    msg.setTimeStamp(0.6576253390966083);
    msg.setSource(51473U);
    msg.setSourceEntity(235U);
    msg.setDestination(27760U);
    msg.setDestinationEntity(93U);
    msg.value = 0.07535731235245369;

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
    msg.setTimeStamp(0.3608915905436946);
    msg.setSource(15778U);
    msg.setSourceEntity(132U);
    msg.setDestination(59041U);
    msg.setDestinationEntity(35U);
    msg.value = 0.424907092803156;

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
    msg.setTimeStamp(0.9502811808281374);
    msg.setSource(41979U);
    msg.setSourceEntity(90U);
    msg.setDestination(5580U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7647306341803594;

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
    msg.setTimeStamp(0.8185866303262295);
    msg.setSource(60088U);
    msg.setSourceEntity(158U);
    msg.setDestination(41253U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.24528320384912305;
    msg.speed = 0.11737243693797761;
    msg.turbulence = 0.38038890560633076;

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
    msg.setTimeStamp(0.23046905545001684);
    msg.setSource(28401U);
    msg.setSourceEntity(118U);
    msg.setDestination(22599U);
    msg.setDestinationEntity(248U);
    msg.direction = 0.7323583823503544;
    msg.speed = 0.01615511162594574;
    msg.turbulence = 0.9887005393894284;

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
    msg.setTimeStamp(0.11593774629451903);
    msg.setSource(35409U);
    msg.setSourceEntity(55U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(54U);
    msg.direction = 0.8064952650522071;
    msg.speed = 0.18072202600047038;
    msg.turbulence = 0.43523107320122445;

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
    msg.setTimeStamp(0.858900135319285);
    msg.setSource(51098U);
    msg.setSourceEntity(134U);
    msg.setDestination(34543U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6917756075739273;

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
    msg.setTimeStamp(0.5006726378130796);
    msg.setSource(41574U);
    msg.setSourceEntity(218U);
    msg.setDestination(35830U);
    msg.setDestinationEntity(23U);
    msg.value = 0.4307089437474151;

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
    msg.setTimeStamp(0.9065951431243793);
    msg.setSource(47177U);
    msg.setSourceEntity(208U);
    msg.setDestination(61054U);
    msg.setDestinationEntity(151U);
    msg.value = 0.09718389044751086;

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
    msg.setTimeStamp(0.7626749101760868);
    msg.setSource(19172U);
    msg.setSourceEntity(177U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(125U);
    msg.value.assign("OXDHLZOVPZKWCQROGYRZOFMQUGIKWACICIBLGXWAVXOCSQMKTUYUVSKACHBTYDGWLMPBKDHRGGBULFMQOJXSPTDFUNCMSEFQUELAFNSPNHVHLFRSQZ");

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
    msg.setTimeStamp(0.35371149765096066);
    msg.setSource(64945U);
    msg.setSourceEntity(136U);
    msg.setDestination(59098U);
    msg.setDestinationEntity(71U);
    msg.value.assign("CNJBKZDKQHFEZWUPFIJPJRMDMKHBBGAAZGEJHDHMLOTRLLOMFTNVJOUYMVXUIOQNVNRAHPLBZVRTCEAEFSJFYGBPPOONZKSUAIWLQCYEYULTZRINGOKWLWZCGPBSVCVYCPTDEECURPRSDMDCWXNAYFFLCKIVVGSVTXMEOUUJZDYNFTXGEYHNBJXFSQWGTAS");

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
    msg.setTimeStamp(0.4712758220779907);
    msg.setSource(10389U);
    msg.setSourceEntity(232U);
    msg.setDestination(46218U);
    msg.setDestinationEntity(149U);
    msg.value.assign("IBPKTPDIWZRLOMVUWBSQBVTRLQPEAKJZLZOPZSTGTWNFKOCVLYRZCMCSELAGAUBMU");

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
    msg.setTimeStamp(0.3461009028607194);
    msg.setSource(42085U);
    msg.setSourceEntity(202U);
    msg.setDestination(37232U);
    msg.setDestinationEntity(72U);
    const signed char tmp_msg_0[] = {-128, -104, -41, 22, -107, 56, 45, -17, 106, -87, 50, -66, 4, -98, 10, 19, 61, 39, 93, -77, 46, 123, -23, 82, 92, 120, 82};
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
    msg.setTimeStamp(0.02174208564029778);
    msg.setSource(29362U);
    msg.setSourceEntity(159U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(85U);
    const signed char tmp_msg_0[] = {-75, 17, -43, 124, 64, -79, -53, -81, -76, 107, 67, -83, -91, -79, 117, 125, -51, 108, -78, 22, -102, -75, 120, -33, 84, 69, 16, -23, 6, 22, -70, 126, -46, -3, 40, -31, 11, 99, -106, 32, -123, 58, 107, 121, -50, 29, -70, -125, -109, 38, -63, 88, -19, -20, -33, -120, -48, 24, 102, -81, -49, -43, -95, 98, 25, -64, -39, 55, -86, -92, -123, -4, 19, 29, 100, -11, 27, 113, 38, 85, 42, 112, 76, -40, -39, 116, 110, 98, -45, -29, -83, -78, 75, -40, -88, 57, -21, -35, 91, 1, -50, -75, -33, 21, 106, -14, 95, -16, -42, -26, -85, 19, -1, 74, -122, -95, 63, 45, -70, -91, -38, -85, -118, -15, 81, -67, -57, 97, -47, 74, -40, -102, 82, 109, -24, -68, -105, -23, 99, -71, -55, 55, -14, -79, 103, -77, 121, -53, 124, -97, 45, -18, -38, 14, 102, 101, -19, -48, -122, 96, 2, 8, -120, -68, 40, 6, 28, 91, -85, -119, 1, 49, -81, 51, 27, 91, -44, 53, 109, -22, -43, 114, 74, -70, 84, -58, 20, 50, 118, 12, 87, 20, -28, -82, -66, -59, 120, 41, -39, -67, -37, 81, 110, 100, -10, 52, 110, 119, -97, -33, -52};
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
    msg.setTimeStamp(0.1456242873076331);
    msg.setSource(15308U);
    msg.setSourceEntity(211U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(204U);
    const signed char tmp_msg_0[] = {79, -103, -97, -92, -19, 9, 101, -34, 80, -104, 48, -2, 9, 120, -54, 116, -37, -72, -42, 63, -105, -101, -116, -23, -98, 47, -97, 32, 39, 2, 36, 83, -81, -26, -24, -97, 111, -113, -74, 78, 96, -71, -105, -30, 120, 101, 118, -4, 49, 114, -38, -102, 115, 28, -22, 8, -87, 108, -84, 28, 104, -89, 93, -122};
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
    msg.setTimeStamp(0.13675625074697229);
    msg.setSource(20066U);
    msg.setSourceEntity(227U);
    msg.setDestination(4502U);
    msg.setDestinationEntity(177U);
    msg.value = 0.8526543106200537;

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
    msg.setTimeStamp(0.5166906489885149);
    msg.setSource(55618U);
    msg.setSourceEntity(174U);
    msg.setDestination(54929U);
    msg.setDestinationEntity(194U);
    msg.value = 0.4695125450560692;

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
    msg.setTimeStamp(0.5907012964296461);
    msg.setSource(25838U);
    msg.setSourceEntity(243U);
    msg.setDestination(11954U);
    msg.setDestinationEntity(86U);
    msg.value = 0.4051874257891548;

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
    msg.setTimeStamp(0.24856452959052122);
    msg.setSource(4975U);
    msg.setSourceEntity(242U);
    msg.setDestination(15014U);
    msg.setDestinationEntity(230U);
    msg.type = 58U;
    msg.frequency = 2892533808U;
    msg.min_range = 37088U;
    msg.max_range = 30780U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.625912222875662;
    const signed char tmp_msg_0[] = {-123, 69, -121, 85, -99, 75, 31, -25, 2, 39, -93, 80, -17, -63, 107, -109, 48, -59, -21, -32, 36, 16, -48, 118, 27, 6, 39, 7, 27, 117, 6, 79, -25, 4, -94, -37, -28, -85, 35, 23, 49, -121, 50, -112, 109, 72, 29, 117, 81, -104, -98, 62, -71, -59, 68, -46, 8, 95, -95, -90, -65, 107, 32, 97, 36, -110, 83, -27, -91, -63, 34, 7, 116, 4, -31, -70, 52, -85, -111, -29, -57, -24, -70, 50, 52, -47, -76, -109, 11, 21, -79, 121, 24, 54, -19, 89, -94, -5, 117, 111, 110, -2, 124, -31, -100, 66, 98, 94, -90, 21, 22, 64, -106, 91, 35, 28, -41, -75, 73, -13, 2, -27, 55, 86, -58, -98, -29, -45, -112, -87, 94, -121, 84, 46, 61, 57, -114, 3, -125, -24, -11, -115, -31, -123, -5, -68, 64, -51, 120, 45, 95, 43, 79};
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
    msg.setTimeStamp(0.331545433605656);
    msg.setSource(51899U);
    msg.setSourceEntity(69U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(225U);
    msg.type = 184U;
    msg.frequency = 3846585780U;
    msg.min_range = 54653U;
    msg.max_range = 63063U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.2537022674918745;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.07191743130059303;
    tmp_msg_0.beam_height = 0.530876752218265;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {56, 108, 77, 10, 71, 16, 51, 72, -108, -65, -106, -70, 24, -67, 13, 41, -100, 112, 94, 10, -28, -55, -16, 13, -108, 6, -110, 52, -39, 0, -27, 78, -31, -25, -68, 5, 123, -60, 51, -88, -68, 41, 34, -96, 121, -1, -60, 49, -117, 69, -102, 71, 45, 62, 66, 108, 88, -57, -47, -39, 32, -65, -51, 119, 100, -128, 30, 40, 68, -57, 67, -111, 113, -50, 88, 101, 78, 99, 104, 51, 41, -49, -85, -27, -109, -69, 37, -125, 10, 33, 7, -59, -78, 10, 103, -93, -72, -118, -106, 12, 39, -96, 122, -77, 126, -19, -98, -88, -99, 125, -115, -102, 4, -23, -72, -18, -61, -63, 67, 109, 5, 124, 35, 108, -79, 76, -126, -72, -68, -16, -112, -27, 86, -14, 15, 65, -124, -118, 3, -67, -94, -118, 89, 120, 28, -99, 104, 120, 77, -111, -70, -95, -48, 16, -27, -57, -6, -72, -93, -126, 9, 105, 105, 5, -59, -69, 86, -25, 83, 100, 87, -97, -72, 32, -101, 66, -46, 99, -53, -112, -64, 33, -39, 0, 87, 59, -36, -63, -107, -77, -63, 19, 67, -116, -96, -101, -101, 120, 116, -111, 76, 78, -32, -2, 92, -92, -92, 79, -27, -120, -45, 77, -14, 110, 22, 6, -70, 39, -45, 110, 19, -5, 98, 56, -67, -26, 37, 121, 7, -26, -94, 36, -97, 66, 96, -91, -121, 86, 86, -118, 39, -69, 31, 20, -24, -116, 51, -104, -18, -46, 86, 86};
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
    msg.setTimeStamp(0.34561514931673354);
    msg.setSource(5043U);
    msg.setSourceEntity(202U);
    msg.setDestination(40764U);
    msg.setDestinationEntity(219U);
    msg.type = 98U;
    msg.frequency = 422739U;
    msg.min_range = 23928U;
    msg.max_range = 13302U;
    msg.bits_per_point = 13U;
    msg.scale_factor = 0.4457497323722981;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5004078331747012;
    tmp_msg_0.beam_height = 0.2928474302933959;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-29, 37, -53, -37, -6, -49, 43, -79, -27, -66, -75, 1, -97, 51, 108, 19, 81, 51, -76, -35, -94, -101, -57, -77, -46, -103, 15, -51, 91, -37, -47, 99, -70, -117, -96, -35, -11, 120, -114, 19, -101, 92, 33, -69, 115, 113, 124, -90, 84, -110, -1, -65, -50, -61, 37, 108, 51, 79, 45, -112, 6, -79, -64, 10, 99, -101, -88, 99, -10, 35, -25, -16, 124, 86, -72, -61, -1, -74, 32, -93, -100, 3, -84, 27, 114, -71, 123, 50, 26, -104, -63, -45, -98, 41, 124, -20, 28, -119, 55, -73, 34, 118, -9, -105, 31, 105, 64, -77, 59, 64, 56, 38, 92, 103, 50, 75, 54, -57, 75, 51, 21, -106, 40, -2, 28, -58, 72, 102, -45, 57, 107, 75, 32, 74, 90, 2, 45, -117, -11, -31, 32, -81, -105, 12, -43, 17, 44, 99, -26, 118, 103, 0, -59, 119, -65, 5, 10, -125, 76, 35, 85, -38, -71, 82, -96, 32, -90, -53, 89, 16, -61, 25, -14, -16, -65, 36, -100, 96, -128, -47, -1, -100, -38, 124, -85, -110, 104, -61, -114, -71, -49, -27, -11, -109, 85, 90, 55, 119, 27, -93, -124, -65, 89, 106, -78, 37, -91, -13, 49, 120, 89, 83, 117, 14, -2, 23, 43, -1, 80, 115, -63, -13, 97, -4, -101, -28, -97, 104, 113, -24, -51, 99, 92, -127, 41};
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
    msg.setTimeStamp(0.07814611272494953);
    msg.setSource(63994U);
    msg.setSourceEntity(251U);
    msg.setDestination(49229U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.12434530981697056);
    msg.setSource(26029U);
    msg.setSourceEntity(174U);
    msg.setDestination(33873U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.06199093264342781);
    msg.setSource(30988U);
    msg.setSourceEntity(66U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.07903355857546202);
    msg.setSource(44911U);
    msg.setSourceEntity(3U);
    msg.setDestination(43835U);
    msg.setDestinationEntity(132U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.5253318774731894);
    msg.setSource(46422U);
    msg.setSourceEntity(172U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(247U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.8431579131898549);
    msg.setSource(49164U);
    msg.setSourceEntity(173U);
    msg.setDestination(36316U);
    msg.setDestinationEntity(70U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.3331991024160287);
    msg.setSource(5795U);
    msg.setSourceEntity(17U);
    msg.setDestination(2084U);
    msg.setDestinationEntity(44U);
    msg.value = 0.3774913491144285;
    msg.confidence = 0.40807461645760656;
    msg.opmodes.assign("ZTTDKBOILAKHZIUNBGLRXJCWFNXCYMDSWRFUBCUYATZZTOWEMLVAMRHGDSMYQURKJLVYGMBERYQVIQHCFNBOTJXOTIHJKRQSSVEXGSTVPPLXXAWWAVARUPHNDCCSNMGG");

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
    msg.setTimeStamp(0.971401475957574);
    msg.setSource(43102U);
    msg.setSourceEntity(169U);
    msg.setDestination(38482U);
    msg.setDestinationEntity(148U);
    msg.value = 0.3633585484414551;
    msg.confidence = 0.2053014604216825;
    msg.opmodes.assign("IJJWLMGORIVLRLMKYLUULPEEHBSBNFUWRWZSYXDVDQINIUESPWPZABACMNTKYYWHZZXEXXDOWFPGHSNKBCXQSEIJGVNFMJADJOQBBWFQNE");

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
    msg.setTimeStamp(0.9670412184491795);
    msg.setSource(4525U);
    msg.setSourceEntity(34U);
    msg.setDestination(17534U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5473020006371246;
    msg.confidence = 0.39030248800471246;
    msg.opmodes.assign("ZAHDWWFINGNPCJXWMMVEICCCSDQIKDITWUQJQLFAWLALVSEXBBKIXHMPUHPMJWCILMVYYAKERLUXFZRGKTWFVKCEBPOYYRESQFGNUTADQGEMPFZIVXTVNEWHZDBPQ");

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
    msg.setTimeStamp(0.16158728719948312);
    msg.setSource(52059U);
    msg.setSourceEntity(216U);
    msg.setDestination(57969U);
    msg.setDestinationEntity(191U);
    msg.itow = 923553369U;
    msg.lat = 0.5518282742289293;
    msg.lon = 0.11178944246287814;
    msg.height_ell = 0.023628457374456513;
    msg.height_sea = 0.2199312990456721;
    msg.hacc = 0.3851564457155311;
    msg.vacc = 0.698831247170023;
    msg.vel_n = 0.29952276204598416;
    msg.vel_e = 0.9332968862202485;
    msg.vel_d = 0.7706838899263457;
    msg.speed = 0.6495006915596631;
    msg.gspeed = 0.39111553257021925;
    msg.heading = 0.5780846909344977;
    msg.sacc = 0.6842513619860099;
    msg.cacc = 0.29428700553304876;

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
    msg.setTimeStamp(0.8635480487553767);
    msg.setSource(25539U);
    msg.setSourceEntity(20U);
    msg.setDestination(54731U);
    msg.setDestinationEntity(250U);
    msg.itow = 2027060334U;
    msg.lat = 0.1231205841452967;
    msg.lon = 0.6270932798959746;
    msg.height_ell = 0.959447186202328;
    msg.height_sea = 0.5201114933586565;
    msg.hacc = 0.7331686342708681;
    msg.vacc = 0.5445838132439397;
    msg.vel_n = 0.9903729765520859;
    msg.vel_e = 0.8877674814187189;
    msg.vel_d = 0.4374833021383172;
    msg.speed = 0.47679330689182264;
    msg.gspeed = 0.041031970205753776;
    msg.heading = 0.4444991916697154;
    msg.sacc = 0.7487831476567485;
    msg.cacc = 0.8792109284995443;

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
    msg.setTimeStamp(0.9061789293317345);
    msg.setSource(22920U);
    msg.setSourceEntity(81U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(83U);
    msg.itow = 854951673U;
    msg.lat = 0.5275616338963423;
    msg.lon = 0.5436093082207174;
    msg.height_ell = 0.5526120003808009;
    msg.height_sea = 0.44938242617496993;
    msg.hacc = 0.42324933109205964;
    msg.vacc = 0.4285362374703945;
    msg.vel_n = 0.504188541923346;
    msg.vel_e = 0.55108310467394;
    msg.vel_d = 0.9687868632915575;
    msg.speed = 0.12095717685297169;
    msg.gspeed = 0.28716861410471783;
    msg.heading = 0.41466802577129236;
    msg.sacc = 0.9190744970747804;
    msg.cacc = 0.2524648781267089;

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
    msg.setTimeStamp(0.145682729936484);
    msg.setSource(19700U);
    msg.setSourceEntity(28U);
    msg.setDestination(18011U);
    msg.setDestinationEntity(86U);
    msg.id = 116U;
    msg.value = 0.19687837115426066;

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
    msg.setTimeStamp(0.9253260710448181);
    msg.setSource(38436U);
    msg.setSourceEntity(94U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(116U);
    msg.id = 72U;
    msg.value = 0.12634190591965555;

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
    msg.setTimeStamp(0.3727466982389378);
    msg.setSource(1597U);
    msg.setSourceEntity(180U);
    msg.setDestination(38556U);
    msg.setDestinationEntity(166U);
    msg.id = 147U;
    msg.value = 0.6850786862978558;

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
    msg.setTimeStamp(0.8395923870668877);
    msg.setSource(41844U);
    msg.setSourceEntity(186U);
    msg.setDestination(899U);
    msg.setDestinationEntity(132U);
    msg.x = 0.06126474052037778;
    msg.y = 0.6322774679475425;
    msg.z = 0.9160782005856823;
    msg.phi = 0.23460728123572627;
    msg.theta = 0.19055855801689126;
    msg.psi = 0.4889376042799204;

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
    msg.setTimeStamp(0.039550673129922664);
    msg.setSource(34446U);
    msg.setSourceEntity(72U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(236U);
    msg.x = 0.9221266219071476;
    msg.y = 0.988213047652261;
    msg.z = 0.5914593362694772;
    msg.phi = 0.27541704844055837;
    msg.theta = 0.7272850691296265;
    msg.psi = 0.5230992856178975;

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
    msg.setTimeStamp(0.5675690944207332);
    msg.setSource(43457U);
    msg.setSourceEntity(122U);
    msg.setDestination(58106U);
    msg.setDestinationEntity(210U);
    msg.x = 0.7085135602004734;
    msg.y = 0.3945474240403387;
    msg.z = 0.33125441963448965;
    msg.phi = 0.26416329116155535;
    msg.theta = 0.625254298326271;
    msg.psi = 0.7838260351192954;

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
    msg.setTimeStamp(0.5796166760998406);
    msg.setSource(61840U);
    msg.setSourceEntity(107U);
    msg.setDestination(28263U);
    msg.setDestinationEntity(244U);
    msg.beam_width = 0.31912937697223276;
    msg.beam_height = 0.31754799670363043;

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
    msg.setTimeStamp(0.27452847672730574);
    msg.setSource(2755U);
    msg.setSourceEntity(224U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(252U);
    msg.beam_width = 0.9954560733543363;
    msg.beam_height = 0.6012456156615729;

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
    msg.setTimeStamp(0.34584645433559036);
    msg.setSource(64783U);
    msg.setSourceEntity(50U);
    msg.setDestination(21749U);
    msg.setDestinationEntity(46U);
    msg.beam_width = 0.3052109305379255;
    msg.beam_height = 0.6971880550893593;

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
    msg.setTimeStamp(0.74731015561483);
    msg.setSource(32216U);
    msg.setSourceEntity(40U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(246U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.14358451797959548);
    msg.setSource(28895U);
    msg.setSourceEntity(185U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(145U);
    msg.sane = 228U;

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
    msg.setTimeStamp(0.5311171201390245);
    msg.setSource(42191U);
    msg.setSourceEntity(196U);
    msg.setDestination(40676U);
    msg.setDestinationEntity(155U);
    msg.sane = 121U;

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
    msg.setTimeStamp(0.7906328472997356);
    msg.setSource(39918U);
    msg.setSourceEntity(168U);
    msg.setDestination(10074U);
    msg.setDestinationEntity(22U);
    msg.value = 0.49867839493413635;

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
    msg.setTimeStamp(0.05136933737844873);
    msg.setSource(26861U);
    msg.setSourceEntity(94U);
    msg.setDestination(61810U);
    msg.setDestinationEntity(250U);
    msg.value = 0.5589403642036628;

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
    msg.setTimeStamp(0.7841665716773845);
    msg.setSource(11669U);
    msg.setSourceEntity(150U);
    msg.setDestination(339U);
    msg.setDestinationEntity(74U);
    msg.value = 0.4061068313171098;

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
    msg.setTimeStamp(0.05382268685233993);
    msg.setSource(50914U);
    msg.setSourceEntity(211U);
    msg.setDestination(33093U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8880607290202575;

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
    msg.setTimeStamp(0.5391339602493751);
    msg.setSource(35044U);
    msg.setSourceEntity(63U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(240U);
    msg.value = 0.257385127924067;

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
    msg.setTimeStamp(0.4489082850954704);
    msg.setSource(52505U);
    msg.setSourceEntity(31U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(108U);
    msg.value = 0.15978964784683336;

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
    msg.setTimeStamp(0.5005930982276214);
    msg.setSource(14029U);
    msg.setSourceEntity(208U);
    msg.setDestination(8714U);
    msg.setDestinationEntity(91U);
    msg.value = 0.7788745812329838;

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
    msg.setTimeStamp(0.4348035316107064);
    msg.setSource(35669U);
    msg.setSourceEntity(140U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(27U);
    msg.value = 0.028010347897613252;

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
    msg.setTimeStamp(0.8986963233825767);
    msg.setSource(57513U);
    msg.setSourceEntity(166U);
    msg.setDestination(8594U);
    msg.setDestinationEntity(134U);
    msg.value = 0.37977604411710186;

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
    msg.setTimeStamp(0.9507573454827627);
    msg.setSource(9299U);
    msg.setSourceEntity(233U);
    msg.setDestination(46732U);
    msg.setDestinationEntity(207U);
    msg.value = 0.968138839940224;

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
    msg.setTimeStamp(0.20535314919317293);
    msg.setSource(2671U);
    msg.setSourceEntity(66U);
    msg.setDestination(10440U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7437111077916169;

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
    msg.setTimeStamp(0.020478123223860667);
    msg.setSource(35504U);
    msg.setSourceEntity(252U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(115U);
    msg.value = 0.651522899143421;

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
    msg.setTimeStamp(0.5251346875574768);
    msg.setSource(55440U);
    msg.setSourceEntity(214U);
    msg.setDestination(40648U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4565458622757097;

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
    msg.setTimeStamp(0.5436718972570541);
    msg.setSource(42295U);
    msg.setSourceEntity(27U);
    msg.setDestination(57693U);
    msg.setDestinationEntity(80U);
    msg.value = 0.39869288601404074;

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
    msg.setTimeStamp(0.014609882596424928);
    msg.setSource(58314U);
    msg.setSourceEntity(151U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(212U);
    msg.value = 0.7536183062390621;

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
    msg.setTimeStamp(0.9779923986424448);
    msg.setSource(39282U);
    msg.setSourceEntity(97U);
    msg.setDestination(55020U);
    msg.setDestinationEntity(158U);
    msg.value = 0.8249633176234122;

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
    msg.setTimeStamp(0.6314380542739171);
    msg.setSource(48121U);
    msg.setSourceEntity(234U);
    msg.setDestination(62523U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8875982302615761;

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
    msg.setTimeStamp(0.36274524848618905);
    msg.setSource(26614U);
    msg.setSourceEntity(145U);
    msg.setDestination(24125U);
    msg.setDestinationEntity(109U);
    msg.value = 0.21823589971187551;

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
    msg.setTimeStamp(0.7109981113339302);
    msg.setSource(632U);
    msg.setSourceEntity(237U);
    msg.setDestination(3613U);
    msg.setDestinationEntity(254U);
    msg.value = 0.1449277850865055;

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
    msg.setTimeStamp(0.03565596905099011);
    msg.setSource(4834U);
    msg.setSourceEntity(177U);
    msg.setDestination(14415U);
    msg.setDestinationEntity(36U);
    msg.value = 0.09659028359070587;

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
    msg.setTimeStamp(0.8065786788305831);
    msg.setSource(16789U);
    msg.setSourceEntity(102U);
    msg.setDestination(30443U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7584890635583303;

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
    msg.setTimeStamp(0.766850986372361);
    msg.setSource(41564U);
    msg.setSourceEntity(147U);
    msg.setDestination(35180U);
    msg.setDestinationEntity(87U);
    msg.value = 0.8369864521519436;

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
    msg.setTimeStamp(0.6623008641326201);
    msg.setSource(20614U);
    msg.setSourceEntity(148U);
    msg.setDestination(16138U);
    msg.setDestinationEntity(37U);
    msg.value = 0.06042306696663202;

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
    msg.setTimeStamp(0.023866352476731523);
    msg.setSource(7684U);
    msg.setSourceEntity(228U);
    msg.setDestination(29052U);
    msg.setDestinationEntity(206U);
    msg.value = 0.7895021869974826;

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
    msg.setTimeStamp(0.7893996642401193);
    msg.setSource(18720U);
    msg.setSourceEntity(150U);
    msg.setDestination(54523U);
    msg.setDestinationEntity(240U);
    msg.validity = 63827U;
    msg.type = 65U;
    msg.tow = 782686455U;
    msg.base_lat = 0.868449427772515;
    msg.base_lon = 0.5338828309853612;
    msg.base_height = 0.9854022059571499;
    msg.n = 0.44139737249099487;
    msg.e = 0.790768263762347;
    msg.d = 0.4098722404170655;
    msg.v_n = 0.8939205521047671;
    msg.v_e = 0.4634908337167327;
    msg.v_d = 0.051579084695579036;
    msg.satellites = 214U;
    msg.iar_hyp = 53004U;
    msg.iar_ratio = 0.5792539930049281;

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
    msg.setTimeStamp(0.1985465867776829);
    msg.setSource(23994U);
    msg.setSourceEntity(182U);
    msg.setDestination(52504U);
    msg.setDestinationEntity(96U);
    msg.validity = 50477U;
    msg.type = 10U;
    msg.tow = 3574752530U;
    msg.base_lat = 0.6965865179745673;
    msg.base_lon = 0.012182874535870747;
    msg.base_height = 0.886397626078104;
    msg.n = 0.44412406348727496;
    msg.e = 0.48707805419151684;
    msg.d = 0.9570684793063547;
    msg.v_n = 0.5104505751839259;
    msg.v_e = 0.5843503105745511;
    msg.v_d = 0.48532205268443274;
    msg.satellites = 242U;
    msg.iar_hyp = 50936U;
    msg.iar_ratio = 0.3678164047807173;

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
    msg.setTimeStamp(0.8508464221945389);
    msg.setSource(3834U);
    msg.setSourceEntity(190U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(150U);
    msg.validity = 18252U;
    msg.type = 149U;
    msg.tow = 2399974176U;
    msg.base_lat = 0.626601067432792;
    msg.base_lon = 0.06600269494494959;
    msg.base_height = 0.1240585519184998;
    msg.n = 0.10814472737379499;
    msg.e = 0.44939242795615053;
    msg.d = 0.5649828437090079;
    msg.v_n = 0.9916097425159575;
    msg.v_e = 0.47290881565231835;
    msg.v_d = 0.6808979851892284;
    msg.satellites = 197U;
    msg.iar_hyp = 14389U;
    msg.iar_ratio = 0.39303364918540573;

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
    msg.setTimeStamp(0.10737527104376565);
    msg.setSource(28965U);
    msg.setSourceEntity(221U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(80U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8325688168775243;
    tmp_msg_0.lon = 0.24680788453030178;
    tmp_msg_0.height = 0.07849773824095851;
    tmp_msg_0.x = 0.16169489219396715;
    tmp_msg_0.y = 0.789747716038273;
    tmp_msg_0.z = 0.2669950900977657;
    tmp_msg_0.phi = 0.30948023570407035;
    tmp_msg_0.theta = 0.5431076562188532;
    tmp_msg_0.psi = 0.03749141018097446;
    tmp_msg_0.u = 0.8882544386683584;
    tmp_msg_0.v = 0.06709394005598446;
    tmp_msg_0.w = 0.2168870282992138;
    tmp_msg_0.vx = 0.5966686356759925;
    tmp_msg_0.vy = 0.06312288194363314;
    tmp_msg_0.vz = 0.10048395644760821;
    tmp_msg_0.p = 0.9158150781679821;
    tmp_msg_0.q = 0.47186674640716464;
    tmp_msg_0.r = 0.2406933402657856;
    tmp_msg_0.depth = 0.12205794075079446;
    tmp_msg_0.alt = 0.4058890516992377;
    msg.state.set(tmp_msg_0);
    msg.type = 48U;

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
    msg.setTimeStamp(0.00851189260492824);
    msg.setSource(733U);
    msg.setSourceEntity(116U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(36U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5587654573937267;
    tmp_msg_0.lon = 0.21622697205519226;
    tmp_msg_0.height = 0.8925688259404666;
    tmp_msg_0.x = 0.6563631596498064;
    tmp_msg_0.y = 0.3516889080208263;
    tmp_msg_0.z = 0.8936103636778776;
    tmp_msg_0.phi = 0.9869371430121067;
    tmp_msg_0.theta = 0.2014484187789114;
    tmp_msg_0.psi = 0.22748163796686527;
    tmp_msg_0.u = 0.39992038398406926;
    tmp_msg_0.v = 0.966015430813077;
    tmp_msg_0.w = 0.8845163697964712;
    tmp_msg_0.vx = 0.586068366188676;
    tmp_msg_0.vy = 0.4591248741192627;
    tmp_msg_0.vz = 0.12643766776286336;
    tmp_msg_0.p = 0.16115007048923147;
    tmp_msg_0.q = 0.855600148625468;
    tmp_msg_0.r = 0.7945449062770981;
    tmp_msg_0.depth = 0.06474449786571701;
    tmp_msg_0.alt = 0.7209224484338708;
    msg.state.set(tmp_msg_0);
    msg.type = 83U;

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
    msg.setTimeStamp(0.9516841153474949);
    msg.setSource(53177U);
    msg.setSourceEntity(81U);
    msg.setDestination(26001U);
    msg.setDestinationEntity(233U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.47443435301444203;
    tmp_msg_0.lon = 0.48130453351511127;
    tmp_msg_0.height = 0.5761492519420106;
    tmp_msg_0.x = 0.45019580716265195;
    tmp_msg_0.y = 0.9426586383971961;
    tmp_msg_0.z = 0.2962599458313204;
    tmp_msg_0.phi = 0.7663802644101486;
    tmp_msg_0.theta = 0.27609827418760335;
    tmp_msg_0.psi = 0.22613582048164793;
    tmp_msg_0.u = 0.6999125228458406;
    tmp_msg_0.v = 0.8101539546805854;
    tmp_msg_0.w = 0.5545582546153904;
    tmp_msg_0.vx = 0.02741544059589973;
    tmp_msg_0.vy = 0.08611391343628594;
    tmp_msg_0.vz = 0.14796894905716196;
    tmp_msg_0.p = 0.2332423489766482;
    tmp_msg_0.q = 0.4093585007328773;
    tmp_msg_0.r = 0.6623950451276693;
    tmp_msg_0.depth = 0.39368374970265674;
    tmp_msg_0.alt = 0.41749046298854975;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.4691047303968896);
    msg.setSource(13893U);
    msg.setSourceEntity(75U);
    msg.setDestination(24349U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7621591850782523;

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
    msg.setTimeStamp(0.1796319143262034);
    msg.setSource(23522U);
    msg.setSourceEntity(170U);
    msg.setDestination(13670U);
    msg.setDestinationEntity(139U);
    msg.value = 0.10240891571569755;

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
    msg.setTimeStamp(0.819316483995251);
    msg.setSource(55856U);
    msg.setSourceEntity(58U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(142U);
    msg.value = 0.634994478338376;

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
    msg.setTimeStamp(0.6000028740324977);
    msg.setSource(44427U);
    msg.setSourceEntity(134U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6660920528464293;

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
    msg.setTimeStamp(0.8285858199943397);
    msg.setSource(55494U);
    msg.setSourceEntity(16U);
    msg.setDestination(45850U);
    msg.setDestinationEntity(167U);
    msg.value = 0.24395604307939067;

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
    msg.setTimeStamp(0.11719659578856145);
    msg.setSource(22287U);
    msg.setSourceEntity(56U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(53U);
    msg.value = 0.8323470445452692;

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
    msg.setTimeStamp(0.9806602235309955);
    msg.setSource(32829U);
    msg.setSourceEntity(199U);
    msg.setDestination(44779U);
    msg.setDestinationEntity(28U);
    msg.value = 0.3454407342319258;

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
    msg.setTimeStamp(0.03431571153556301);
    msg.setSource(5623U);
    msg.setSourceEntity(131U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6034715811160163;

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
    msg.setTimeStamp(0.8871620266187199);
    msg.setSource(35339U);
    msg.setSourceEntity(181U);
    msg.setDestination(33228U);
    msg.setDestinationEntity(147U);
    msg.value = 0.7698040076323637;

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
    msg.setTimeStamp(0.588547809114715);
    msg.setSource(43466U);
    msg.setSourceEntity(29U);
    msg.setDestination(12868U);
    msg.setDestinationEntity(47U);
    msg.value = 0.783273465592007;

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
    msg.setTimeStamp(0.5233478530822953);
    msg.setSource(17009U);
    msg.setSourceEntity(116U);
    msg.setDestination(24872U);
    msg.setDestinationEntity(95U);
    msg.value = 0.022836886055171868;

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
    msg.setTimeStamp(0.6885942742089286);
    msg.setSource(3313U);
    msg.setSourceEntity(127U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(147U);
    msg.value = 0.6312903968375857;

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
    msg.setTimeStamp(0.44054661591275057);
    msg.setSource(18501U);
    msg.setSourceEntity(91U);
    msg.setDestination(3232U);
    msg.setDestinationEntity(254U);
    msg.value = 0.49588101460140177;

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
    msg.setTimeStamp(0.93007366732636);
    msg.setSource(40323U);
    msg.setSourceEntity(131U);
    msg.setDestination(14529U);
    msg.setDestinationEntity(18U);
    msg.value = 0.3671738708969752;

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
    msg.setTimeStamp(0.4034873998807249);
    msg.setSource(23079U);
    msg.setSourceEntity(223U);
    msg.setDestination(55336U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5580113755943418;

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
    msg.setTimeStamp(0.2838279429922669);
    msg.setSource(14537U);
    msg.setSourceEntity(180U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(146U);
    msg.id = 71U;
    msg.zoom = 235U;
    msg.action = 253U;

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
    msg.setTimeStamp(0.7304168867651926);
    msg.setSource(17244U);
    msg.setSourceEntity(212U);
    msg.setDestination(18950U);
    msg.setDestinationEntity(99U);
    msg.id = 141U;
    msg.zoom = 74U;
    msg.action = 150U;

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
    msg.setTimeStamp(0.238958594645178);
    msg.setSource(15213U);
    msg.setSourceEntity(235U);
    msg.setDestination(31137U);
    msg.setDestinationEntity(88U);
    msg.id = 119U;
    msg.zoom = 226U;
    msg.action = 241U;

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
    msg.setTimeStamp(0.6082609106685314);
    msg.setSource(24682U);
    msg.setSourceEntity(185U);
    msg.setDestination(54462U);
    msg.setDestinationEntity(34U);
    msg.id = 218U;
    msg.value = 0.3952524745683187;

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
    msg.setTimeStamp(0.0004847847129699767);
    msg.setSource(28213U);
    msg.setSourceEntity(142U);
    msg.setDestination(29232U);
    msg.setDestinationEntity(73U);
    msg.id = 237U;
    msg.value = 0.3562207121413874;

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
    msg.setTimeStamp(0.5133967315829877);
    msg.setSource(1887U);
    msg.setSourceEntity(103U);
    msg.setDestination(1277U);
    msg.setDestinationEntity(17U);
    msg.id = 241U;
    msg.value = 0.7399942158891526;

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
    msg.setTimeStamp(0.2761157506515678);
    msg.setSource(14104U);
    msg.setSourceEntity(240U);
    msg.setDestination(1717U);
    msg.setDestinationEntity(210U);
    msg.id = 16U;
    msg.value = 0.4778214829553038;

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
    msg.setTimeStamp(0.554889160449862);
    msg.setSource(40567U);
    msg.setSourceEntity(211U);
    msg.setDestination(51549U);
    msg.setDestinationEntity(192U);
    msg.id = 184U;
    msg.value = 0.22550178110789765;

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
    msg.setTimeStamp(0.3269927130718563);
    msg.setSource(22227U);
    msg.setSourceEntity(209U);
    msg.setDestination(3952U);
    msg.setDestinationEntity(63U);
    msg.id = 117U;
    msg.value = 0.09388244817700442;

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
    msg.setTimeStamp(0.28750393480282876);
    msg.setSource(7468U);
    msg.setSourceEntity(50U);
    msg.setDestination(59886U);
    msg.setDestinationEntity(234U);
    msg.id = 211U;
    msg.angle = 0.3669450909822364;

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
    msg.setTimeStamp(0.14679772843373107);
    msg.setSource(58600U);
    msg.setSourceEntity(250U);
    msg.setDestination(44328U);
    msg.setDestinationEntity(15U);
    msg.id = 132U;
    msg.angle = 0.7171209668394977;

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
    msg.setTimeStamp(0.8670884461026608);
    msg.setSource(39380U);
    msg.setSourceEntity(245U);
    msg.setDestination(56919U);
    msg.setDestinationEntity(205U);
    msg.id = 194U;
    msg.angle = 0.9886823403881123;

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
    msg.setTimeStamp(0.8420357170660564);
    msg.setSource(8964U);
    msg.setSourceEntity(237U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(145U);
    msg.op = 56U;
    msg.actions.assign("NLSXBZOYYRGVSSTLEZOXJFXUPRVVLKHCGNCNYIZFBRKQCSMCTRIZYYTJEIAMPEUTAQAPNGECYFCVNPEDHAZBHKIOOYIDOGMCHTWPWUGEFNLQWNGBEYDLBROEGUTOGCUTVLWLKMDPMKVGVTVNLXFZBAQMSSZCUMDWISKZHDTQULXSJSKDFIJHXQ");

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
    msg.setTimeStamp(0.6349082798004638);
    msg.setSource(45841U);
    msg.setSourceEntity(149U);
    msg.setDestination(28765U);
    msg.setDestinationEntity(35U);
    msg.op = 185U;
    msg.actions.assign("XONFDTHJSXPHDKUCAZISSGUBRFMUBQVRUREQQDVBRGSPZRVVOFGGEFHUCYTFPWMDUQURFWYXVHCTKJQCUZWDZMGMXJHYTERTLIIYBKFFYGYMELISANKPPDWZWUCHQKVDQAOAXVJMXAAOTZKTAWUHAONIWSANCHDVIIEXHYWKVGIRJYLPLMPZQMEGCOIJWBALPNCBYSGPCBBNNEOJLENQJPBQXXLGWBTXDKSSHDYJFTFZZKOIKSNMJOLME");

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
    msg.setTimeStamp(0.4408539879099854);
    msg.setSource(6955U);
    msg.setSourceEntity(12U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(193U);
    msg.op = 193U;
    msg.actions.assign("YQFENERBPFPECOYCXBDDYTURYTAVPHNMWXVAFALQGDSIZRTVYOCISFWJFCMHJZGBFBSTNMTDJWZBCLIMOQUSKICUNJHXFXGJVQOUMUFMJEULPFXJYYQDAEIKWOEZBXZWYKFUJPGLGOATHPAWZIVZWRDDGRIEBCDYCUGKH");

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
    msg.setTimeStamp(0.9789803010173577);
    msg.setSource(53583U);
    msg.setSourceEntity(191U);
    msg.setDestination(2769U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("VBWKNVJFYWBAPNEXTWOGKQIIXEEWJTMFOUFGMGSJSLXJYGNQVADONUTZWHCXPYGRAXWBDGRXFSPOHMIIDQSMSCUPMCHAVJKEBVOUQTAFNKERAEZZOMQRCHOHCTQYIRFZEBESDBBNRYNKYRMNVXFKDRTZASNTYFEPHWPC");

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
    msg.setTimeStamp(0.5246223088592645);
    msg.setSource(65112U);
    msg.setSourceEntity(80U);
    msg.setDestination(29007U);
    msg.setDestinationEntity(35U);
    msg.actions.assign("AYXNSOBJMKPCUWDTHRYOMXTKVQUEBQAIUIKTHSPVDUYAJHGKXQRBTMJKQNFDPY");

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
    msg.setTimeStamp(0.9016204415343732);
    msg.setSource(45904U);
    msg.setSourceEntity(29U);
    msg.setDestination(52530U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("IRQOOKXIUBGOELULALZPHMQEDCVPVBYRLEFIEXDYKQNRIMETYXERFXSFTUPTGYIMZNZNENCNCFXANPWZKDLKWAPQETHKDDOZXJZFLJMZXTYUIGBGGHPGJSBRJXAOWMVCGYJIFROTRMVAMFLCZJBZSWJCJSCHVDDIYKNAWWKUUQUGBAFIDSQKGVSAHUQHINZXBVO");

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
    msg.setTimeStamp(0.4079722608915578);
    msg.setSource(4247U);
    msg.setSourceEntity(214U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(166U);
    msg.button = 68U;
    msg.value = 40U;

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
    msg.setTimeStamp(0.7933551897529602);
    msg.setSource(43043U);
    msg.setSourceEntity(17U);
    msg.setDestination(9057U);
    msg.setDestinationEntity(17U);
    msg.button = 209U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.9402593969601137);
    msg.setSource(37956U);
    msg.setSourceEntity(2U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(2U);
    msg.button = 80U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.8556958548586896);
    msg.setSource(27389U);
    msg.setSourceEntity(150U);
    msg.setDestination(44567U);
    msg.setDestinationEntity(71U);
    msg.op = 1U;
    msg.text.assign("DOBFEJNITKSWWPNSECGQXELTRYJHAUHPVKHLBVHLBEFXOGFGRVPWOOEAEYIJYSSBXMVLHJKTMQQTGXJZYFGFMUJRULKYULQKGUYESIRQQOVBAVIZCUCDHGSWTLIMIDODSMZAEQCEAGHPKPBGOISTUIBRCSYPMLZCPIIMRNWUFRYFNEKDWWPVB");

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
    msg.setTimeStamp(0.21667785923231353);
    msg.setSource(35885U);
    msg.setSourceEntity(139U);
    msg.setDestination(819U);
    msg.setDestinationEntity(45U);
    msg.op = 240U;
    msg.text.assign("DSXWCJPTNRKWVKTMMFDUAKAOQVSZPUAIKZZDAMUFEJORULIYAULYMHRDXCMUFLEBCAEEMRQWWDLYCWLPXQTXYSNKCEQEEECOSNNRIOGKUJRGAPOGCHVPIKNPWRRBVFNRIGHZKHHSVSGZHITFBOBXJESYOAGCANTIGUXIFLXFLBYAMWHEQPYGTVLDIOBDURVMQVZHPHZSFQPYBJODCFFOBKMCUXGIPSTZZZWMHJVLTXBKQNSQTD");

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
    msg.setTimeStamp(0.5570057205276564);
    msg.setSource(9413U);
    msg.setSourceEntity(21U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(18U);
    msg.op = 138U;
    msg.text.assign("AOTAVJJDNCU");

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
    msg.setTimeStamp(0.09907534166714338);
    msg.setSource(13826U);
    msg.setSourceEntity(251U);
    msg.setDestination(37862U);
    msg.setDestinationEntity(132U);
    msg.op = 253U;
    msg.time_remain = 0.3996071099707269;
    msg.sched_time = 0.07422709396200444;

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
    msg.setTimeStamp(0.4632064657121039);
    msg.setSource(44465U);
    msg.setSourceEntity(216U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(214U);
    msg.op = 2U;
    msg.time_remain = 0.15153783170104917;
    msg.sched_time = 0.8916673127878519;

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
    msg.setTimeStamp(0.6764198964492009);
    msg.setSource(21892U);
    msg.setSourceEntity(209U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(64U);
    msg.op = 22U;
    msg.time_remain = 0.4409253081362605;
    msg.sched_time = 0.6948866904598682;

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
    msg.setTimeStamp(0.6419277784473458);
    msg.setSource(12779U);
    msg.setSourceEntity(92U);
    msg.setDestination(9316U);
    msg.setDestinationEntity(101U);
    msg.name.assign("IRWZGPQJPSQYYNOWYABJTPFFRGWIJJSONPENLWJUYCEUXEVKDPHRFHCNXDABXDMTGBXZNOOXDZIIXVVZIKPPHTRYJWBX");
    msg.op = 232U;
    msg.sched_time = 0.71748265672426;

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
    msg.setTimeStamp(0.8421013224271633);
    msg.setSource(25840U);
    msg.setSourceEntity(229U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(60U);
    msg.name.assign("AOZYYBHSDPQNVIYWIAZHUDLGPAGZKSRYVWZRCGRQMOPVJUKNBLLKDELOROOCSNLPGMUICLCXROMEYQEBZRXCLSPXVHKTHFRWAFEMAJPMYJTXVOZTUWXHVJICKXUWMDLSRKSYVQGQNMFKWFTVLQNDTTMBIRIIXTGWYRJHBVHFDAHLGUCOSBBYXEKWZPQEFFMUCJPDNOMQGCETGEAFD");
    msg.op = 91U;
    msg.sched_time = 0.7217150073570775;

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
    msg.setTimeStamp(0.2348671748781347);
    msg.setSource(37837U);
    msg.setSourceEntity(252U);
    msg.setDestination(14491U);
    msg.setDestinationEntity(6U);
    msg.name.assign("QGKDUIHJWIWYTVKGFSHUENKHGYZOBRBADEYIBFEYXSOSQTVQNRINVUROHXIQXXABRBVSFKOIQJMGVNLXYHPWUUMPSGRFPTDJEKRDPCIEPQJTGQLDMMACSUYZKSHJIOGNZCEONLXQJUQRZEAKFYCJTTPHEVOMNMRUPKXTAZHVCHWLMBBAPDBNZLXJLIDMNWLFGCSNYKWZW");
    msg.op = 6U;
    msg.sched_time = 0.016582659460513627;

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
    msg.setTimeStamp(0.3773976350490368);
    msg.setSource(35034U);
    msg.setSourceEntity(98U);
    msg.setDestination(65465U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.9351124658223364);
    msg.setSource(37662U);
    msg.setSourceEntity(10U);
    msg.setDestination(39291U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.8624594061740164);
    msg.setSource(49294U);
    msg.setSourceEntity(220U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.3170105293228098);
    msg.setSource(40633U);
    msg.setSourceEntity(2U);
    msg.setDestination(6259U);
    msg.setDestinationEntity(27U);
    msg.name.assign("TJDNKZHHIAIAIKLYLQBQJOGUXVRSBGNSAFGWGFZHZWRZZFEOYDTUZIMKOKPRQUXGNXEUTMTVYXWWZFRSDUPUMTWXWLAXBTMCXINPBFPM");
    msg.state = 65U;

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
    msg.setTimeStamp(0.719575045417229);
    msg.setSource(33296U);
    msg.setSourceEntity(206U);
    msg.setDestination(63124U);
    msg.setDestinationEntity(116U);
    msg.name.assign("KGTIYCBZQOVUTIATCOQVEINDIOQYFWDNGUXBOLABLNSPYHZOUXCJXLBEBUMKVLJXBDAAIJSMWRXWNZOIZVSMPFDMIPTESV");
    msg.state = 233U;

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
    msg.setTimeStamp(0.6317108140449034);
    msg.setSource(4166U);
    msg.setSourceEntity(89U);
    msg.setDestination(7248U);
    msg.setDestinationEntity(155U);
    msg.name.assign("YEXKMIQUHNHWBBFBCRIUFEUFPZCIVKQYCRSLTGEJS");
    msg.state = 26U;

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
    msg.setTimeStamp(0.28767584670278024);
    msg.setSource(52508U);
    msg.setSourceEntity(38U);
    msg.setDestination(53418U);
    msg.setDestinationEntity(22U);
    msg.name.assign("WEGWNWZHYZRTZXUXBECSTGERZRQCSLOLIWNCNDNPVTUHYROXDSIPOFRZCCJFXYKKDMYALQTAZOEKREUVHKWVNFVLFQJIVICEMAXAOSUXBOQUOGEBXKNBWNDUEJMAGKBWHDVSOZTBKDLLAGWZCRYXQINPNOXMYAWBRPNZFSPJKJIFGPHJMCJQSFBZUBQDPMPMCJFLQLVTSHMCGITHUGSFLQYEVKWHRKULVYIRHODQ");
    msg.value = 243U;

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
    msg.setTimeStamp(0.8147945144911737);
    msg.setSource(39230U);
    msg.setSourceEntity(14U);
    msg.setDestination(44393U);
    msg.setDestinationEntity(90U);
    msg.name.assign("UIIAOIHDUGRAQZKXTXAGBECJVVHKSLRUWURTSIIZPFRLOPOADQZWDFHWOHNAQNENJVJKYYORJTDGMAFCYMXESJKEGIXHJFDJOBRTLD");
    msg.value = 95U;

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
    msg.setTimeStamp(0.46870498122233273);
    msg.setSource(15847U);
    msg.setSourceEntity(249U);
    msg.setDestination(31505U);
    msg.setDestinationEntity(228U);
    msg.name.assign("MRLVIHDMFVRPYBWZATLXKOARHDMNDEBWT");
    msg.value = 134U;

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
    msg.setTimeStamp(0.26332899984969294);
    msg.setSource(11565U);
    msg.setSourceEntity(186U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(147U);
    msg.name.assign("CUJGZMTLGHRHDGDQOEYIXUFOQAUPIOEDQMWWUEAYFSVQFCZNCDICHKFKKQEEXPREMAFALG");

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
    msg.setTimeStamp(0.6586863516406022);
    msg.setSource(3131U);
    msg.setSourceEntity(82U);
    msg.setDestination(30212U);
    msg.setDestinationEntity(119U);
    msg.name.assign("OEMKIXLMMYAVJUFLNPSWCEMFNHZFCGJPXCWFR");

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
    msg.setTimeStamp(0.264853363987161);
    msg.setSource(44776U);
    msg.setSourceEntity(228U);
    msg.setDestination(5739U);
    msg.setDestinationEntity(168U);
    msg.name.assign("TTGLNZOPKGOLCLSBSVSBEZPOQRJGNCUWZMJFJVNYEIDFACKUSHWVFLUSIGMQPASOHNUJBVNZOKXAMBEHZEJAUTFWVWDTIP");

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
    msg.setTimeStamp(0.675636296431527);
    msg.setSource(60007U);
    msg.setSourceEntity(182U);
    msg.setDestination(17134U);
    msg.setDestinationEntity(184U);
    msg.name.assign("HQARCUCLLFJCEBWHNLUMCQEMJFEXSBEKIMXSQYDBFSKTZATQNRRWQHXZCMWHFTCRDYZTLGGIKGKUHSGJLVMZYRIUKSRONVJDXSCD");
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
    msg.setTimeStamp(0.4384715194810953);
    msg.setSource(28635U);
    msg.setSourceEntity(208U);
    msg.setDestination(48244U);
    msg.setDestinationEntity(70U);
    msg.name.assign("SJJQSITURFRTLGXEAUVWEXCFOHRIZELHZBPOJBAVMCYFRZHAXXNMZUGBFTWNXLUMMKOPPKLDNNZUYPQAUQNJMDXLZTQSYKVFGXLYDFQYDNNBPDNLAGGWETDHDLSWHTIOSFPBUWEXICRCHANKXXBDVQIOHFEVOVMTQUKWAOEWYAZVTJWVCZGKGRYOZNRIGSUEJYQBMJAUTKIQFPCBVLIHHBSI");
    msg.value = 31U;

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
    msg.setTimeStamp(0.529712313850373);
    msg.setSource(40286U);
    msg.setSourceEntity(115U);
    msg.setDestination(1289U);
    msg.setDestinationEntity(187U);
    msg.name.assign("NQXIDJARLFNTPQPLJXEM");
    msg.value = 167U;

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
    msg.setTimeStamp(0.12180803650054328);
    msg.setSource(4131U);
    msg.setSourceEntity(201U);
    msg.setDestination(29127U);
    msg.setDestinationEntity(15U);
    msg.id = 106U;
    msg.period = 3152526345U;
    msg.duty_cycle = 1790315838U;

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
    msg.setTimeStamp(0.7175418882943979);
    msg.setSource(64449U);
    msg.setSourceEntity(171U);
    msg.setDestination(54484U);
    msg.setDestinationEntity(69U);
    msg.id = 155U;
    msg.period = 287894261U;
    msg.duty_cycle = 4089119043U;

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
    msg.setTimeStamp(0.37951572532251376);
    msg.setSource(28377U);
    msg.setSourceEntity(75U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(60U);
    msg.id = 77U;
    msg.period = 3321378285U;
    msg.duty_cycle = 2258923655U;

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
    msg.setTimeStamp(0.7989352914049954);
    msg.setSource(9348U);
    msg.setSourceEntity(137U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(189U);
    msg.id = 133U;
    msg.period = 738000604U;
    msg.duty_cycle = 3731677665U;

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
    msg.setTimeStamp(0.5827747235836783);
    msg.setSource(985U);
    msg.setSourceEntity(158U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(3U);
    msg.id = 19U;
    msg.period = 2701156645U;
    msg.duty_cycle = 3978685745U;

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
    msg.setTimeStamp(0.9584149524633306);
    msg.setSource(49536U);
    msg.setSourceEntity(178U);
    msg.setDestination(38227U);
    msg.setDestinationEntity(86U);
    msg.id = 186U;
    msg.period = 1651800532U;
    msg.duty_cycle = 2659281942U;

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
    msg.setTimeStamp(0.07803485934194831);
    msg.setSource(45510U);
    msg.setSourceEntity(30U);
    msg.setDestination(11165U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.23426351267315026;
    msg.lon = 0.9446849966674684;
    msg.height = 0.38995110067912087;
    msg.x = 0.5526875251818875;
    msg.y = 0.6199780919475252;
    msg.z = 0.3100724139325498;
    msg.phi = 0.4976286009063532;
    msg.theta = 0.9360959285975863;
    msg.psi = 0.595943214311738;
    msg.u = 0.9088322343152064;
    msg.v = 0.005700110437828698;
    msg.w = 0.022708519174735264;
    msg.vx = 0.5554943146632668;
    msg.vy = 0.18936534448148423;
    msg.vz = 0.45761731586074084;
    msg.p = 0.6433038216300172;
    msg.q = 0.04386276179824555;
    msg.r = 0.3428253394893124;
    msg.depth = 0.03821067340641893;
    msg.alt = 0.7601648557800378;

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
    msg.setTimeStamp(0.3554501949637706);
    msg.setSource(41425U);
    msg.setSourceEntity(12U);
    msg.setDestination(62511U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.03422620536591492;
    msg.lon = 0.6751798073468377;
    msg.height = 0.9170364165964575;
    msg.x = 0.7185291600938272;
    msg.y = 0.6362765159105631;
    msg.z = 0.11246013800543397;
    msg.phi = 0.7270273683115164;
    msg.theta = 0.3041822902444269;
    msg.psi = 0.8622213106281983;
    msg.u = 0.5133517571214807;
    msg.v = 0.4978824917234034;
    msg.w = 0.14156977563702322;
    msg.vx = 0.18142753315387639;
    msg.vy = 0.35495134017432184;
    msg.vz = 0.6015607223107791;
    msg.p = 0.1936435670244202;
    msg.q = 0.34220490386287816;
    msg.r = 0.16882815590036704;
    msg.depth = 0.9722740833725625;
    msg.alt = 0.13597315808692167;

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
    msg.setTimeStamp(0.0025796832086557586);
    msg.setSource(37549U);
    msg.setSourceEntity(45U);
    msg.setDestination(46828U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.3637361884896191;
    msg.lon = 0.7040256112285478;
    msg.height = 0.9177660606601361;
    msg.x = 0.12178509928765979;
    msg.y = 0.986895133560393;
    msg.z = 0.9272559092075234;
    msg.phi = 0.31828793490898666;
    msg.theta = 0.009000713556576945;
    msg.psi = 0.18461767440613996;
    msg.u = 0.6783774820708832;
    msg.v = 0.08891532539084523;
    msg.w = 0.5017151804423771;
    msg.vx = 0.6349812406180025;
    msg.vy = 0.13847070010920137;
    msg.vz = 0.5394511941099404;
    msg.p = 0.6133427214783342;
    msg.q = 0.6349954038076204;
    msg.r = 0.6811886399039928;
    msg.depth = 0.3397160633934645;
    msg.alt = 0.3380652318780635;

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
    msg.setTimeStamp(0.8402884963989282);
    msg.setSource(43829U);
    msg.setSourceEntity(20U);
    msg.setDestination(57409U);
    msg.setDestinationEntity(88U);
    msg.x = 0.014898514918170735;
    msg.y = 0.9418615875572294;
    msg.z = 0.6842563840138421;

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
    msg.setTimeStamp(0.4049220456395187);
    msg.setSource(45305U);
    msg.setSourceEntity(239U);
    msg.setDestination(54660U);
    msg.setDestinationEntity(94U);
    msg.x = 0.7889846108519574;
    msg.y = 0.22607106473980265;
    msg.z = 0.3336227977164057;

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
    msg.setTimeStamp(0.6031034622825081);
    msg.setSource(27943U);
    msg.setSourceEntity(92U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(11U);
    msg.x = 0.6863958659667714;
    msg.y = 0.01241902657252647;
    msg.z = 0.3790292464156846;

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
    msg.setTimeStamp(0.8071693811666281);
    msg.setSource(5104U);
    msg.setSourceEntity(246U);
    msg.setDestination(7397U);
    msg.setDestinationEntity(68U);
    msg.value = 0.46359100964896194;

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
    msg.setTimeStamp(0.804637659144562);
    msg.setSource(50723U);
    msg.setSourceEntity(209U);
    msg.setDestination(59231U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6418268131369912;

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
    msg.setTimeStamp(0.8952145200824049);
    msg.setSource(13687U);
    msg.setSourceEntity(54U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(52U);
    msg.value = 0.02564068949821552;

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
    msg.setTimeStamp(0.020194931760465717);
    msg.setSource(32949U);
    msg.setSourceEntity(92U);
    msg.setDestination(48530U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8789939750159684;

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
    msg.setTimeStamp(0.9715979455917264);
    msg.setSource(33516U);
    msg.setSourceEntity(161U);
    msg.setDestination(18855U);
    msg.setDestinationEntity(109U);
    msg.value = 0.5373485181280988;

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
    msg.setTimeStamp(0.27969650205548424);
    msg.setSource(15571U);
    msg.setSourceEntity(107U);
    msg.setDestination(28342U);
    msg.setDestinationEntity(142U);
    msg.value = 0.1282647076486606;

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
    msg.setTimeStamp(0.831643054497388);
    msg.setSource(56637U);
    msg.setSourceEntity(64U);
    msg.setDestination(49072U);
    msg.setDestinationEntity(229U);
    msg.x = 0.7706588134270014;
    msg.y = 0.5310511270141584;
    msg.z = 0.8555944878248263;
    msg.phi = 0.6121351270528306;
    msg.theta = 0.7355360743322494;
    msg.psi = 0.7720417930641201;
    msg.p = 0.44841051105301655;
    msg.q = 0.5137633315138549;
    msg.r = 0.25452481826012197;
    msg.u = 0.809830744800219;
    msg.v = 0.39843081473590436;
    msg.w = 0.5970596008966662;
    msg.bias_psi = 0.8648707336469729;
    msg.bias_r = 0.17231485329209406;

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
    msg.setTimeStamp(0.19890760794588813);
    msg.setSource(43778U);
    msg.setSourceEntity(11U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(17U);
    msg.x = 0.5703057618794103;
    msg.y = 0.768227306148211;
    msg.z = 0.9281184384344002;
    msg.phi = 0.28492679131982956;
    msg.theta = 0.5522741611520228;
    msg.psi = 0.126579950505888;
    msg.p = 0.646883762742579;
    msg.q = 0.592735083043406;
    msg.r = 0.49055658100093924;
    msg.u = 0.18469970774676725;
    msg.v = 0.19499802805093824;
    msg.w = 0.5910035267485103;
    msg.bias_psi = 0.04800787603143164;
    msg.bias_r = 0.6092710994353533;

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
    msg.setTimeStamp(0.1148786336240678);
    msg.setSource(2478U);
    msg.setSourceEntity(62U);
    msg.setDestination(26795U);
    msg.setDestinationEntity(75U);
    msg.x = 0.8804339178278361;
    msg.y = 0.8634595639417982;
    msg.z = 0.5772608391802024;
    msg.phi = 0.19216492940501495;
    msg.theta = 0.5098379508069564;
    msg.psi = 0.44988394997069137;
    msg.p = 0.4381423534111123;
    msg.q = 0.7223496171950403;
    msg.r = 0.9873557532399817;
    msg.u = 0.3696246379352921;
    msg.v = 0.35858434306629716;
    msg.w = 0.45741458910144583;
    msg.bias_psi = 0.6560043588167477;
    msg.bias_r = 0.10573083409309103;

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
    msg.setTimeStamp(0.5075117359646537);
    msg.setSource(18332U);
    msg.setSourceEntity(137U);
    msg.setDestination(16847U);
    msg.setDestinationEntity(125U);
    msg.bias_psi = 0.15487535319280765;
    msg.bias_r = 0.7540545166911964;
    msg.cog = 0.7320428570306916;
    msg.cyaw = 0.3306623841151579;
    msg.lbl_rej_level = 0.6268262756324798;
    msg.gps_rej_level = 0.022269907399581457;
    msg.custom_x = 0.748037969601013;
    msg.custom_y = 0.7771980137621957;
    msg.custom_z = 0.7797691845940761;

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
    msg.setTimeStamp(0.6459887697563985);
    msg.setSource(59787U);
    msg.setSourceEntity(65U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(252U);
    msg.bias_psi = 0.63990089742504;
    msg.bias_r = 0.08847925474632456;
    msg.cog = 0.9180422041164644;
    msg.cyaw = 0.559402167698754;
    msg.lbl_rej_level = 0.15431448865149922;
    msg.gps_rej_level = 0.6397761282735224;
    msg.custom_x = 0.7292411036010154;
    msg.custom_y = 0.42574899155880863;
    msg.custom_z = 0.6412898654566359;

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
    msg.setTimeStamp(0.04591728301316356);
    msg.setSource(5456U);
    msg.setSourceEntity(166U);
    msg.setDestination(26562U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.8363477483447177;
    msg.bias_r = 0.9555440730202218;
    msg.cog = 0.17185653278929602;
    msg.cyaw = 0.2966034903148269;
    msg.lbl_rej_level = 0.326647548124834;
    msg.gps_rej_level = 0.6224961669158501;
    msg.custom_x = 0.38578021351082614;
    msg.custom_y = 0.8299555030481166;
    msg.custom_z = 0.3730566319293259;

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
    msg.setTimeStamp(0.3487272264961414);
    msg.setSource(9257U);
    msg.setSourceEntity(94U);
    msg.setDestination(46820U);
    msg.setDestinationEntity(25U);
    msg.utc_time = 0.24887162621294068;
    msg.reason = 12U;

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
    msg.setTimeStamp(0.22505997658371213);
    msg.setSource(11414U);
    msg.setSourceEntity(27U);
    msg.setDestination(35267U);
    msg.setDestinationEntity(241U);
    msg.utc_time = 0.13281054398132142;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.7750245319188712);
    msg.setSource(46947U);
    msg.setSourceEntity(150U);
    msg.setDestination(41716U);
    msg.setDestinationEntity(204U);
    msg.utc_time = 0.05174910663559307;
    msg.reason = 41U;

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
    msg.setTimeStamp(0.6217991664056753);
    msg.setSource(62738U);
    msg.setSourceEntity(228U);
    msg.setDestination(58701U);
    msg.setDestinationEntity(235U);
    msg.id = 125U;
    msg.range = 0.06073851882355907;
    msg.acceptance = 154U;

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
    msg.setTimeStamp(0.9612536185629612);
    msg.setSource(57854U);
    msg.setSourceEntity(58U);
    msg.setDestination(21374U);
    msg.setDestinationEntity(26U);
    msg.id = 92U;
    msg.range = 0.5636757967493993;
    msg.acceptance = 38U;

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
    msg.setTimeStamp(0.9241388975684303);
    msg.setSource(45987U);
    msg.setSourceEntity(237U);
    msg.setDestination(37180U);
    msg.setDestinationEntity(43U);
    msg.id = 190U;
    msg.range = 0.7906969648811523;
    msg.acceptance = 7U;

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
    msg.setTimeStamp(0.07323378151568083);
    msg.setSource(8386U);
    msg.setSourceEntity(161U);
    msg.setDestination(23645U);
    msg.setDestinationEntity(5U);
    msg.type = 23U;
    msg.reason = 153U;
    msg.value = 0.7049994969375887;
    msg.timestep = 0.9410618637633325;

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
    msg.setTimeStamp(0.479794486954514);
    msg.setSource(20806U);
    msg.setSourceEntity(62U);
    msg.setDestination(43282U);
    msg.setDestinationEntity(19U);
    msg.type = 11U;
    msg.reason = 96U;
    msg.value = 0.6757743659350617;
    msg.timestep = 0.3049192613500409;

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
    msg.setTimeStamp(0.3090556510361757);
    msg.setSource(23249U);
    msg.setSourceEntity(13U);
    msg.setDestination(1997U);
    msg.setDestinationEntity(31U);
    msg.type = 251U;
    msg.reason = 30U;
    msg.value = 0.9483625744233396;
    msg.timestep = 0.26211174875170296;

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
    msg.setTimeStamp(0.09217314987750413);
    msg.setSource(9870U);
    msg.setSourceEntity(158U);
    msg.setDestination(21228U);
    msg.setDestinationEntity(94U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JVSAWLMYMWOLNYSPCHTLOOXUQCLJDQXJOKPRGRDZLDVUPQPWBQAPEQMGNIAMFKXFDPOQLFBQFHUIWTMENCVJPREUDJAJEFXXYNSHGMWIWOEYCSYJSAEBZDYKBWCZYZDJXGQAFCTZKSPEUBGSAGOEUMYRLQLBZ");
    tmp_msg_0.lat = 0.056596473111167445;
    tmp_msg_0.lon = 0.463566956884083;
    tmp_msg_0.depth = 0.33055583999835314;
    tmp_msg_0.query_channel = 201U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 206U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.656726733253446;
    msg.y = 0.6841385960568205;
    msg.var_x = 0.491746322705648;
    msg.var_y = 0.1896427277015149;
    msg.distance = 0.022664767737656244;

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
    msg.setTimeStamp(0.014933789840115508);
    msg.setSource(39411U);
    msg.setSourceEntity(109U);
    msg.setDestination(26134U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IVLYBLRISZELOCJFBQVRXSPWZCSWCASHCPTKTBMXSRKPOVHZLDHJRSJOUDBEQVDTMNIMMYLGOORYCVJCLFGELPBQBARFDRDXCUTKEMETYQNMAAEQHLGXJWPUVQFRYISOKKAWDKEFAHZFNNYHTGXFNKPVKNAWPKQGYSEYZJTWUJOXRJRQBVJBWE");
    tmp_msg_0.lat = 0.5308422749203724;
    tmp_msg_0.lon = 0.566861602011516;
    tmp_msg_0.depth = 0.8030438727003848;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 5U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.516832136386787;
    msg.y = 0.47048701569754736;
    msg.var_x = 0.5281337865947167;
    msg.var_y = 0.2683864709438638;
    msg.distance = 0.06654470161217996;

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
    msg.setTimeStamp(0.9734544611201519);
    msg.setSource(6885U);
    msg.setSourceEntity(239U);
    msg.setDestination(45027U);
    msg.setDestinationEntity(74U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OVEEUYRRWYXFNMXNGAWOWJUEEMFBMQCRJOKLLVGIUUAKYVIUEMHSDRFXWOBHEPNTHNQYSYHVHBLTGEMVIQTMAKOPDJTBCPGLHKANBASKFSSIZZCOYADRZMMRLDCCYBBXBSTIKPNSFGJFDQOADQFIFWERWHWLAGNGBKOPPHPLY");
    tmp_msg_0.lat = 0.3378786474685601;
    tmp_msg_0.lon = 0.8594917503126145;
    tmp_msg_0.depth = 0.32553608295017533;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0876725619166786;
    msg.y = 0.38922846315538784;
    msg.var_x = 0.3809704285786607;
    msg.var_y = 0.15959538027924747;
    msg.distance = 0.012843999851343324;

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
    msg.setTimeStamp(0.5226799147522783);
    msg.setSource(5465U);
    msg.setSourceEntity(206U);
    msg.setDestination(20807U);
    msg.setDestinationEntity(60U);
    msg.state = 44U;

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
    msg.setTimeStamp(0.7271641426316318);
    msg.setSource(57649U);
    msg.setSourceEntity(171U);
    msg.setDestination(22375U);
    msg.setDestinationEntity(52U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.8067302454342947);
    msg.setSource(25272U);
    msg.setSourceEntity(47U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(79U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.3366567531710102);
    msg.setSource(2856U);
    msg.setSourceEntity(13U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(178U);
    msg.x = 0.16654410701879752;
    msg.y = 0.5687244190323507;
    msg.z = 0.14539500934967564;

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
    msg.setTimeStamp(0.9301575573359041);
    msg.setSource(15388U);
    msg.setSourceEntity(81U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(176U);
    msg.x = 0.8155252788993697;
    msg.y = 0.15867164214058616;
    msg.z = 0.014564492793025186;

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
    msg.setTimeStamp(0.28371218218985883);
    msg.setSource(39697U);
    msg.setSourceEntity(220U);
    msg.setDestination(33762U);
    msg.setDestinationEntity(170U);
    msg.x = 0.9350051516757197;
    msg.y = 0.21988826787597482;
    msg.z = 0.43376528647899326;

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
    msg.setTimeStamp(0.4254922286706653);
    msg.setSource(14807U);
    msg.setSourceEntity(215U);
    msg.setDestination(65208U);
    msg.setDestinationEntity(104U);
    msg.va = 0.42984232505445064;
    msg.aoa = 0.5130384172696364;
    msg.ssa = 0.908078563933721;

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
    msg.setTimeStamp(0.09010090949646177);
    msg.setSource(31920U);
    msg.setSourceEntity(215U);
    msg.setDestination(52147U);
    msg.setDestinationEntity(216U);
    msg.va = 0.5147826358422696;
    msg.aoa = 0.41497303409820074;
    msg.ssa = 0.19983963022521878;

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
    msg.setTimeStamp(0.9119363597101945);
    msg.setSource(38085U);
    msg.setSourceEntity(190U);
    msg.setDestination(59646U);
    msg.setDestinationEntity(214U);
    msg.va = 0.42174308499008284;
    msg.aoa = 0.6272335584904881;
    msg.ssa = 0.15978165696168345;

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
    msg.setTimeStamp(0.8969381198861338);
    msg.setSource(33032U);
    msg.setSourceEntity(68U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5277960064190839;

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
    msg.setTimeStamp(0.1445771903336086);
    msg.setSource(33699U);
    msg.setSourceEntity(40U);
    msg.setDestination(18670U);
    msg.setDestinationEntity(111U);
    msg.value = 0.19503395817269265;

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
    msg.setTimeStamp(0.9813263286145879);
    msg.setSource(41970U);
    msg.setSourceEntity(250U);
    msg.setDestination(44452U);
    msg.setDestinationEntity(197U);
    msg.value = 0.22590385648207967;

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
    msg.setTimeStamp(0.6655172652686984);
    msg.setSource(33136U);
    msg.setSourceEntity(28U);
    msg.setDestination(58646U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6564996759596605;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.9094629160239223);
    msg.setSource(59275U);
    msg.setSourceEntity(188U);
    msg.setDestination(8755U);
    msg.setDestinationEntity(78U);
    msg.value = 0.22179139591727315;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.022263955301695892);
    msg.setSource(34462U);
    msg.setSourceEntity(87U);
    msg.setDestination(3511U);
    msg.setDestinationEntity(73U);
    msg.value = 0.06583260050123207;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.849524890304993);
    msg.setSource(3056U);
    msg.setSourceEntity(239U);
    msg.setDestination(65115U);
    msg.setDestinationEntity(95U);
    msg.value = 0.8496381856012377;
    msg.speed_units = 134U;

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
    msg.setTimeStamp(0.04491395765240769);
    msg.setSource(54046U);
    msg.setSourceEntity(180U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(54U);
    msg.value = 0.016265601274978447;
    msg.speed_units = 218U;

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
    msg.setTimeStamp(0.11008041769654409);
    msg.setSource(16335U);
    msg.setSourceEntity(104U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(129U);
    msg.value = 0.4796810845153622;
    msg.speed_units = 246U;

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
    msg.setTimeStamp(0.6268569204106058);
    msg.setSource(61308U);
    msg.setSourceEntity(58U);
    msg.setDestination(61984U);
    msg.setDestinationEntity(161U);
    msg.value = 0.20058925613751566;

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
    msg.setTimeStamp(0.4876926039005458);
    msg.setSource(41967U);
    msg.setSourceEntity(10U);
    msg.setDestination(45937U);
    msg.setDestinationEntity(232U);
    msg.value = 0.05990253259353062;

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
    msg.setTimeStamp(0.45579745139760597);
    msg.setSource(38990U);
    msg.setSourceEntity(118U);
    msg.setDestination(21688U);
    msg.setDestinationEntity(209U);
    msg.value = 0.703712494167537;

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
    msg.setTimeStamp(0.4802944797276768);
    msg.setSource(15935U);
    msg.setSourceEntity(154U);
    msg.setDestination(53217U);
    msg.setDestinationEntity(158U);
    msg.value = 0.006934906162227916;

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
    msg.setTimeStamp(0.3298774469469081);
    msg.setSource(13215U);
    msg.setSourceEntity(223U);
    msg.setDestination(9780U);
    msg.setDestinationEntity(137U);
    msg.value = 0.628793117970027;

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
    msg.setTimeStamp(0.5901108473873531);
    msg.setSource(64926U);
    msg.setSourceEntity(150U);
    msg.setDestination(61984U);
    msg.setDestinationEntity(124U);
    msg.value = 0.5536264456795181;

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
    msg.setTimeStamp(0.07383721157547007);
    msg.setSource(38291U);
    msg.setSourceEntity(249U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5926653500672749;

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
    msg.setTimeStamp(0.6007753125628127);
    msg.setSource(45115U);
    msg.setSourceEntity(137U);
    msg.setDestination(7129U);
    msg.setDestinationEntity(68U);
    msg.value = 0.8938908241394528;

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
    msg.setTimeStamp(0.07655948198660811);
    msg.setSource(62115U);
    msg.setSourceEntity(197U);
    msg.setDestination(28695U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3968613858891874;

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
    msg.setTimeStamp(0.14890924084036306);
    msg.setSource(12167U);
    msg.setSourceEntity(119U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(75U);
    msg.path_ref = 2086396051U;
    msg.start_lat = 0.4615526763696679;
    msg.start_lon = 0.1285395422522828;
    msg.start_z = 0.1786658009710025;
    msg.start_z_units = 237U;
    msg.end_lat = 0.12854357754900192;
    msg.end_lon = 0.05392328424189208;
    msg.end_z = 0.806420063207733;
    msg.end_z_units = 87U;
    msg.speed = 0.8431227216162107;
    msg.speed_units = 198U;
    msg.lradius = 0.2489185705561512;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.5672128928854641);
    msg.setSource(63228U);
    msg.setSourceEntity(117U);
    msg.setDestination(36566U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 2032493229U;
    msg.start_lat = 0.5408073416617987;
    msg.start_lon = 0.7149455956479065;
    msg.start_z = 0.9123841784583401;
    msg.start_z_units = 16U;
    msg.end_lat = 0.16459937993353868;
    msg.end_lon = 0.28654213275892115;
    msg.end_z = 0.7371284785403839;
    msg.end_z_units = 146U;
    msg.speed = 0.8923717600519683;
    msg.speed_units = 243U;
    msg.lradius = 0.5276583025322633;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.19114100736750783);
    msg.setSource(61196U);
    msg.setSourceEntity(248U);
    msg.setDestination(3375U);
    msg.setDestinationEntity(169U);
    msg.path_ref = 1499152972U;
    msg.start_lat = 0.5938666605459294;
    msg.start_lon = 0.7169942270713866;
    msg.start_z = 0.216614172469064;
    msg.start_z_units = 10U;
    msg.end_lat = 0.777119260010787;
    msg.end_lon = 0.8396718954868504;
    msg.end_z = 0.0936481429856475;
    msg.end_z_units = 82U;
    msg.speed = 0.4412378584527299;
    msg.speed_units = 77U;
    msg.lradius = 0.37777896213027806;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.15959642124759865);
    msg.setSource(54364U);
    msg.setSourceEntity(241U);
    msg.setDestination(49638U);
    msg.setDestinationEntity(60U);
    msg.x = 0.6265412696039862;
    msg.y = 0.06653662050105802;
    msg.z = 0.3610786892314425;
    msg.k = 0.16358099315911712;
    msg.m = 0.04412089085145765;
    msg.n = 0.16243132646380165;
    msg.flags = 163U;

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
    msg.setTimeStamp(0.9992419777629238);
    msg.setSource(17264U);
    msg.setSourceEntity(200U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(178U);
    msg.x = 0.37597803586935563;
    msg.y = 0.19605213117668918;
    msg.z = 0.1195379797723497;
    msg.k = 0.7805861658057797;
    msg.m = 0.029111220991272835;
    msg.n = 0.793279386143354;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.7764190574137273);
    msg.setSource(63291U);
    msg.setSourceEntity(171U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(89U);
    msg.x = 0.6151897315441802;
    msg.y = 0.1322523635729167;
    msg.z = 0.014123360673003127;
    msg.k = 0.4912806391591892;
    msg.m = 0.7072936827484594;
    msg.n = 0.9101023170040085;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.1769706369170041);
    msg.setSource(55639U);
    msg.setSourceEntity(118U);
    msg.setDestination(16599U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8620085807105162;

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
    msg.setTimeStamp(0.5767650761633086);
    msg.setSource(34591U);
    msg.setSourceEntity(149U);
    msg.setDestination(43457U);
    msg.setDestinationEntity(235U);
    msg.value = 0.036986793212784974;

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
    msg.setTimeStamp(0.7162664071010649);
    msg.setSource(7166U);
    msg.setSourceEntity(175U);
    msg.setDestination(20246U);
    msg.setDestinationEntity(157U);
    msg.value = 0.4899062289274848;

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
    msg.setTimeStamp(0.4075886316341657);
    msg.setSource(9637U);
    msg.setSourceEntity(111U);
    msg.setDestination(40681U);
    msg.setDestinationEntity(226U);
    msg.u = 0.22727376458161808;
    msg.v = 0.5063077792083255;
    msg.w = 0.22812467271318015;
    msg.p = 0.5729214622748657;
    msg.q = 0.35999088466080575;
    msg.r = 0.10373204316763529;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.4281393830919069);
    msg.setSource(37111U);
    msg.setSourceEntity(174U);
    msg.setDestination(48600U);
    msg.setDestinationEntity(185U);
    msg.u = 0.898875019331788;
    msg.v = 0.4086500461626258;
    msg.w = 0.5079145628146824;
    msg.p = 0.9026597434475845;
    msg.q = 0.0027351989907334895;
    msg.r = 0.7825750254284974;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.07060411253269716);
    msg.setSource(9644U);
    msg.setSourceEntity(242U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(251U);
    msg.u = 0.40989946892779094;
    msg.v = 0.505683904244994;
    msg.w = 0.02075362822009441;
    msg.p = 0.8334379128171452;
    msg.q = 0.6156251052686288;
    msg.r = 0.24065156299728563;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.6395995716106149);
    msg.setSource(21126U);
    msg.setSourceEntity(140U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 3837983000U;
    msg.start_lat = 0.842946836539041;
    msg.start_lon = 0.9130969339189692;
    msg.start_z = 0.7391545969995427;
    msg.start_z_units = 0U;
    msg.end_lat = 0.2990075897507931;
    msg.end_lon = 0.5498733383098339;
    msg.end_z = 0.8776502402953343;
    msg.end_z_units = 44U;
    msg.lradius = 0.8637565380834078;
    msg.flags = 41U;
    msg.x = 0.2401792116895407;
    msg.y = 0.6819152665736219;
    msg.z = 0.9466186414669026;
    msg.vx = 0.7770413644695008;
    msg.vy = 0.3466975712175917;
    msg.vz = 0.43265810765907187;
    msg.course_error = 0.7735255238099629;
    msg.eta = 2349U;

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
    msg.setTimeStamp(0.6051873036665151);
    msg.setSource(32349U);
    msg.setSourceEntity(200U);
    msg.setDestination(36953U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 3119354438U;
    msg.start_lat = 0.25027652868705597;
    msg.start_lon = 0.9922760726327129;
    msg.start_z = 0.15212146136644833;
    msg.start_z_units = 3U;
    msg.end_lat = 0.5654989769007708;
    msg.end_lon = 0.8494903058360677;
    msg.end_z = 0.7643331785543253;
    msg.end_z_units = 119U;
    msg.lradius = 0.7442578230432898;
    msg.flags = 203U;
    msg.x = 0.806620873415179;
    msg.y = 0.06811042889372898;
    msg.z = 0.9072094448452189;
    msg.vx = 0.9354390171801109;
    msg.vy = 0.2605858312443048;
    msg.vz = 0.7244231968104172;
    msg.course_error = 0.1203502269437704;
    msg.eta = 63669U;

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
    msg.setTimeStamp(0.24580654749127417);
    msg.setSource(13760U);
    msg.setSourceEntity(3U);
    msg.setDestination(25439U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 1347801103U;
    msg.start_lat = 0.5566276709356972;
    msg.start_lon = 0.9937627255822346;
    msg.start_z = 0.25219101407315814;
    msg.start_z_units = 68U;
    msg.end_lat = 0.9731024518166868;
    msg.end_lon = 0.8111167482410974;
    msg.end_z = 0.8460956170321513;
    msg.end_z_units = 26U;
    msg.lradius = 0.5199525599084229;
    msg.flags = 106U;
    msg.x = 0.25034251121764795;
    msg.y = 0.1470338017392553;
    msg.z = 0.784421087303101;
    msg.vx = 0.6977438628494014;
    msg.vy = 0.945518320670093;
    msg.vz = 0.8678222611062413;
    msg.course_error = 0.4672722759393536;
    msg.eta = 50248U;

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
    msg.setTimeStamp(0.909221273007932);
    msg.setSource(12651U);
    msg.setSourceEntity(247U);
    msg.setDestination(19522U);
    msg.setDestinationEntity(141U);
    msg.k = 0.5367305884985887;
    msg.m = 0.07405775782363833;
    msg.n = 0.8255183402159386;

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
    msg.setTimeStamp(0.1126195599239368);
    msg.setSource(46231U);
    msg.setSourceEntity(195U);
    msg.setDestination(29447U);
    msg.setDestinationEntity(62U);
    msg.k = 0.8658725895099694;
    msg.m = 0.017493205796694444;
    msg.n = 0.32685191259085267;

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
    msg.setTimeStamp(0.9651519412468477);
    msg.setSource(9487U);
    msg.setSourceEntity(165U);
    msg.setDestination(51439U);
    msg.setDestinationEntity(188U);
    msg.k = 0.5782366186048431;
    msg.m = 0.08105593608882788;
    msg.n = 0.900410675880023;

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
    msg.setTimeStamp(0.7106534530461045);
    msg.setSource(60943U);
    msg.setSourceEntity(29U);
    msg.setDestination(25214U);
    msg.setDestinationEntity(156U);
    msg.p = 0.2613180629867956;
    msg.i = 0.2764417191514065;
    msg.d = 0.9635283456598714;
    msg.a = 0.4380139110152861;

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
    msg.setTimeStamp(0.852055418156119);
    msg.setSource(4189U);
    msg.setSourceEntity(124U);
    msg.setDestination(41605U);
    msg.setDestinationEntity(35U);
    msg.p = 0.11466581859690894;
    msg.i = 0.40412492830204116;
    msg.d = 0.40351208742037836;
    msg.a = 0.9393744307248966;

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
    msg.setTimeStamp(0.1925086686411872);
    msg.setSource(13261U);
    msg.setSourceEntity(96U);
    msg.setDestination(53775U);
    msg.setDestinationEntity(106U);
    msg.p = 0.43592884036638546;
    msg.i = 0.3012854762628193;
    msg.d = 0.8709099421584713;
    msg.a = 0.9335023979434236;

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
    msg.setTimeStamp(0.4381718807349825);
    msg.setSource(26598U);
    msg.setSourceEntity(0U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(254U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.4944927018288313);
    msg.setSource(47465U);
    msg.setSourceEntity(63U);
    msg.setDestination(33586U);
    msg.setDestinationEntity(83U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.6687527980022474);
    msg.setSource(57060U);
    msg.setSourceEntity(173U);
    msg.setDestination(14292U);
    msg.setDestinationEntity(62U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.242938302310986);
    msg.setSource(25655U);
    msg.setSourceEntity(242U);
    msg.setDestination(8095U);
    msg.setDestinationEntity(104U);
    msg.x = 0.6752456446728767;
    msg.y = 0.7373464617314257;
    msg.z = 0.6051551828097562;
    msg.vx = 0.5696621766874986;
    msg.vy = 0.8928787392296711;
    msg.vz = 0.6074959646838306;
    msg.ax = 0.5045320809081257;
    msg.ay = 0.4089408925923892;
    msg.az = 0.5649700892781122;
    msg.flags = 41646U;

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
    msg.setTimeStamp(0.5777994832587713);
    msg.setSource(59767U);
    msg.setSourceEntity(198U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(173U);
    msg.x = 0.08943640492764271;
    msg.y = 0.559598301040446;
    msg.z = 0.7351004990117548;
    msg.vx = 0.673263980428461;
    msg.vy = 0.10827686230306244;
    msg.vz = 0.5917280566935568;
    msg.ax = 0.9862194785659558;
    msg.ay = 0.026683186531113012;
    msg.az = 0.1831322642733918;
    msg.flags = 6788U;

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
    msg.setTimeStamp(0.6193703553753078);
    msg.setSource(60602U);
    msg.setSourceEntity(184U);
    msg.setDestination(51871U);
    msg.setDestinationEntity(131U);
    msg.x = 0.1110419956808476;
    msg.y = 0.26408085512517043;
    msg.z = 0.8213418128224493;
    msg.vx = 0.9776784240629801;
    msg.vy = 0.0569018021752532;
    msg.vz = 0.30492374370506614;
    msg.ax = 0.4105476957038211;
    msg.ay = 0.7066275427047544;
    msg.az = 0.2808439973864282;
    msg.flags = 10726U;

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
    msg.setTimeStamp(0.8985147405026161);
    msg.setSource(26076U);
    msg.setSourceEntity(177U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5053714367052417;

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
    msg.setTimeStamp(0.6538957619864026);
    msg.setSource(163U);
    msg.setSourceEntity(161U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(206U);
    msg.value = 0.6972491056467891;

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
    msg.setTimeStamp(0.5181317306661103);
    msg.setSource(55346U);
    msg.setSourceEntity(158U);
    msg.setDestination(63267U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9168700311757957;

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
    msg.setTimeStamp(0.17943858909495736);
    msg.setSource(30374U);
    msg.setSourceEntity(204U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(71U);
    msg.timeout = 25622U;
    msg.lat = 0.399416611747471;
    msg.lon = 0.12525858552319813;
    msg.z = 0.45500773883158663;
    msg.z_units = 100U;
    msg.speed = 0.5118289374554138;
    msg.speed_units = 136U;
    msg.roll = 0.692351101244823;
    msg.pitch = 0.5355899269262651;
    msg.yaw = 0.9026696772686951;
    msg.custom.assign("ITKIJYNMVAHUIHBKLFDMXENVBUYCLDYYGTCVSQXGHGEUQFEZVQWUYEJCUHUWDSPSLJRRIWZRAUBBPOYKNAFGXCZKWTGANNXIFTEVZIXNC");

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
    msg.setTimeStamp(0.007695261028460076);
    msg.setSource(58135U);
    msg.setSourceEntity(161U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(1U);
    msg.timeout = 46860U;
    msg.lat = 0.3097708415928576;
    msg.lon = 0.3060153680139308;
    msg.z = 0.5028823521457291;
    msg.z_units = 182U;
    msg.speed = 0.03655175260952803;
    msg.speed_units = 48U;
    msg.roll = 0.14106526992654966;
    msg.pitch = 0.5613837658308438;
    msg.yaw = 0.598576961957939;
    msg.custom.assign("XJMINMNGDYBIKZIWHVUZNLAILDQYGQDBWPEOSSEHUMZPHXQSYDATGJTMRNVMBGVQLPZRGMZATRQAZCUBFQUSDTYUPELSRWQLMXAEHSFZCJFETCWBOLEF");

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
    msg.setTimeStamp(0.992213903877736);
    msg.setSource(30570U);
    msg.setSourceEntity(143U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(179U);
    msg.timeout = 44571U;
    msg.lat = 0.6647721529018943;
    msg.lon = 0.18967462520835754;
    msg.z = 0.3542945935042878;
    msg.z_units = 217U;
    msg.speed = 0.4319973202498609;
    msg.speed_units = 8U;
    msg.roll = 0.8595782866440292;
    msg.pitch = 0.3183902531128866;
    msg.yaw = 0.35030772709359204;
    msg.custom.assign("MVSPCVEYDWCWTNJLOHNOTEYMELDMJZJMWXNVIIJYDSELEYSXVHKHHDKVAMXXVQLGGEMPGFBGFKSNCDROUIBGWLOUQQPTKIWYDOMMQFRUDUXZTIBWPISVYCBAZD");

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
    msg.setTimeStamp(0.09729874954792284);
    msg.setSource(19595U);
    msg.setSourceEntity(159U);
    msg.setDestination(26824U);
    msg.setDestinationEntity(248U);
    msg.timeout = 9673U;
    msg.lat = 0.6433557036428107;
    msg.lon = 0.1665940202286662;
    msg.z = 0.16467176632871683;
    msg.z_units = 244U;
    msg.speed = 0.5261431023568125;
    msg.speed_units = 248U;
    msg.duration = 28757U;
    msg.radius = 0.6708557367030578;
    msg.flags = 201U;
    msg.custom.assign("HMQNWTQZXGWYZNKVRZGYMDXARHCLDWGHOCHHRYVKPNRLEDZQDJBKMKQXAAWUXDNSGUEJJWCYGTFSYFCQGOZBPNVTDMPWTRGKCPHILFFPTXDVNUCEIWOLBADEUVFVECANFBIWZFIUYPQJRBKTWOVP");

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
    msg.setTimeStamp(0.20374279544169183);
    msg.setSource(46745U);
    msg.setSourceEntity(199U);
    msg.setDestination(52618U);
    msg.setDestinationEntity(201U);
    msg.timeout = 16066U;
    msg.lat = 0.34918709086536026;
    msg.lon = 0.3428601411149821;
    msg.z = 0.13196709700347908;
    msg.z_units = 236U;
    msg.speed = 0.1421734775771405;
    msg.speed_units = 242U;
    msg.duration = 15502U;
    msg.radius = 0.17920720148136404;
    msg.flags = 166U;
    msg.custom.assign("YLKPHOAUDZNKEMHRYPGQAIOPXFYBPRVXHPKPWQXYETYBUMVHFVFQXNGUTTWCFWTNIAAYLWGJKQSPGSJAVXAAJGZTENSRLWOTCOSZVCRUWSFROQJJJYHTCREKKDFAMDOBDLBBSBZIHZQIBCLWZOAKJIDCMQDPDWOLLCVHSROXGLKIVPUZEFSBBNUMIKGELYXIDQMMTPGIMMRDHFUJSOFYRUQDCZQNLXTEFGXRVTNKNN");

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
    msg.setTimeStamp(0.35603750582530636);
    msg.setSource(56833U);
    msg.setSourceEntity(246U);
    msg.setDestination(59007U);
    msg.setDestinationEntity(167U);
    msg.timeout = 1277U;
    msg.lat = 0.2750779408234538;
    msg.lon = 0.6903591302826331;
    msg.z = 0.04579830496230697;
    msg.z_units = 242U;
    msg.speed = 0.9831982720956122;
    msg.speed_units = 168U;
    msg.duration = 18847U;
    msg.radius = 0.9225248778708633;
    msg.flags = 39U;
    msg.custom.assign("QMGOAAMSTDQJROZNTVKTRYEDQGZHCQNUVKRIPCKHWFVWLNIBWXULDNYLJYYAXDZGBHZXQGSVLXIDQFSEWBMGCGBRNMZTFQSXJZTWAWPLUPKLZSWXDQWCKHFSPVSZFPTEBLAVUAN");

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
    msg.setTimeStamp(0.8106472888280642);
    msg.setSource(31020U);
    msg.setSourceEntity(40U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(86U);
    msg.custom.assign("DTQCPVNFPSMYOXIQHYSMHIDFQKOKJKVRWXWSDBXVEPHXYRCMGHTVOPGWAISWQTERSEAYUBNNQWUBQVFSKWSLVUMIZEXNCJOTXLDGVBKPIOPGIADQBGMLRYFJZNIHWOJCTYRSLRFONAZCXBYIDEKJTTUFRZAERTLZLSUJGUWMGJFLNXHHAMCM");

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
    msg.setTimeStamp(0.34761789309612245);
    msg.setSource(11140U);
    msg.setSourceEntity(15U);
    msg.setDestination(5145U);
    msg.setDestinationEntity(80U);
    msg.custom.assign("QHKVOSWOOUNTWHKMGBBAKXVJCDRTZBEXGUYSRGNZCRMDLGZESCWZMIDVQZBFJPSYLEXXSQBRLUMGENNVMUYOTIXJKAJYHBYUBPLKNDBPAJVYRDNLEJTCXXSR");

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
    msg.setTimeStamp(0.43787853582735625);
    msg.setSource(34709U);
    msg.setSourceEntity(182U);
    msg.setDestination(24334U);
    msg.setDestinationEntity(248U);
    msg.custom.assign("VMMTHZSDKRDQNVYNUWILPHRSKIRTIVKBSJHJOEOQUXYDZNBWFEXOQQCSBBZJIPNTTTCDIMFBAHGLAYKKOJOKEOKVPQANEDMMVTADTCJEHYXMEYKYUZLNMP");

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
    msg.setTimeStamp(0.5007288256501726);
    msg.setSource(14688U);
    msg.setSourceEntity(78U);
    msg.setDestination(22646U);
    msg.setDestinationEntity(72U);
    msg.timeout = 56804U;
    msg.lat = 0.43725828024084934;
    msg.lon = 0.2648258023018327;
    msg.z = 0.23623949196870742;
    msg.z_units = 116U;
    msg.duration = 21221U;
    msg.speed = 0.14027300440880164;
    msg.speed_units = 18U;
    msg.type = 241U;
    msg.radius = 0.11039045651201373;
    msg.length = 0.7933406303283123;
    msg.bearing = 0.8529985952183337;
    msg.direction = 73U;
    msg.custom.assign("ROWLZPPAPVSNXJJSHJHLBQUCIAJVQZEIMNFISCVPMKRCBGQWRIYCXFWWNMYFYHLCNTOVWPYRCEKJUOVYNHYCBACJGJMSEKURQAILWXSGPBIDGQEQNFTFMTHRVXJAHFPTYOLWRDXYOBETHPVGOFGVAZQKEXUZSJKYFCQOSZAOKUTIEZLIFGUWKZSBTLNNAHJBUIBOXXDKTRNVMZMTSPXDLGQKWMEZERKDMSGBXNLMDWBPRVZDACEAHTHGULYFU");

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
    msg.setTimeStamp(0.21933953056588928);
    msg.setSource(36604U);
    msg.setSourceEntity(189U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(21U);
    msg.timeout = 59675U;
    msg.lat = 0.13400050661038554;
    msg.lon = 0.25247338856866086;
    msg.z = 0.6391493807731591;
    msg.z_units = 175U;
    msg.duration = 53266U;
    msg.speed = 0.8617357933785171;
    msg.speed_units = 15U;
    msg.type = 203U;
    msg.radius = 0.04349556705962254;
    msg.length = 0.6074108808369563;
    msg.bearing = 0.5590323362412962;
    msg.direction = 54U;
    msg.custom.assign("WNATDOPVGGHGULEQTSIOTTREXXQOOGYVKJCJFBNCGDJIPBOALSCPNMZBEGTYFHYDYPPMXDCUYGLEXEWEHCMVSVMNBJKRSBCILTZIDFARMSUMSPEB");

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
    msg.setTimeStamp(0.8347622884632244);
    msg.setSource(47582U);
    msg.setSourceEntity(182U);
    msg.setDestination(53108U);
    msg.setDestinationEntity(52U);
    msg.timeout = 57923U;
    msg.lat = 0.8831663118868684;
    msg.lon = 0.08834795991855204;
    msg.z = 0.13551059186674175;
    msg.z_units = 49U;
    msg.duration = 61027U;
    msg.speed = 0.29125336449596617;
    msg.speed_units = 99U;
    msg.type = 216U;
    msg.radius = 0.09113595918096873;
    msg.length = 0.4641314326981859;
    msg.bearing = 0.28114725025686027;
    msg.direction = 224U;
    msg.custom.assign("QGGQNGSUUMPFXIAURDHLCLENYJFIHUHCJXIYDOXPZVEKHACIJITMHHYOMY");

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
    msg.setTimeStamp(0.04713550265414124);
    msg.setSource(35689U);
    msg.setSourceEntity(208U);
    msg.setDestination(23301U);
    msg.setDestinationEntity(144U);
    msg.duration = 20096U;
    msg.custom.assign("MQSCCDMFYPNFGUUKHZHUWIZVTRUPYLRUHCBIIGSXFDLOVRXEKUOAQUNCOEWKCLBMKLVUDDPXNZVMOSEJNOTYWJXWAEQPNOFJYCFOHGOJJQJGLDSGBLWTHVZGGPMDTXRTMCEJFRSCIKVSIWBNSHOARITAWLFIBZMUQYQE");

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
    msg.setTimeStamp(0.9641348749917696);
    msg.setSource(9012U);
    msg.setSourceEntity(50U);
    msg.setDestination(24393U);
    msg.setDestinationEntity(169U);
    msg.duration = 9085U;
    msg.custom.assign("IDBUSHMFEVESIAUHYHNLTVR");

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
    msg.setTimeStamp(0.38623330399971745);
    msg.setSource(5527U);
    msg.setSourceEntity(110U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(79U);
    msg.duration = 41994U;
    msg.custom.assign("PZJPSIPFRETLTDCZRGZNKKGTNNDUQADQTYJKGZUUEQGVROMBJKGNQALWVIVTTZSCWHMHOYRSWVHVYTMETDLCGSHVJAKRYUNKUFULSMJPYSZXJPWSLWOYXCEODSXWHBFKYQOALBDAIVNZAPEROQPTCMFBLJZDGJMHRNCNYXPLJAZHKROCFEYXIPYIUQVCUDCMGAWIWOSQITWXQSFOAQWMXFLHXLURGKRCFFEKBBVHAEN");

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
    msg.setTimeStamp(0.6072024041145032);
    msg.setSource(5004U);
    msg.setSourceEntity(55U);
    msg.setDestination(19712U);
    msg.setDestinationEntity(204U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.3511394138260452;
    msg.control.set(tmp_msg_0);
    msg.duration = 3039U;
    msg.custom.assign("GXDBEWJUOOZTHMRYLMAVSEPPYQNRTWEMNNDKRIQZEYNIEIXPBBVZXUUMBSJZRYXVFAYNPIYDWHMGVIGXKLJAHZSVMPILKELIFWBTGOYVFKLZSRXUSECTHARJRSNSOMBPTOTJTWGONORKQKRQXCIKVAFDADUFSYCCZPLQBDPDXUMLEKWMBVZEFHWKXLWSBIFAUSVLQZQWTJJBGZGCJPOEQHDOQCUAPCCCFHTHCYFUDGWFLTYN");

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
    msg.setTimeStamp(0.005650151279256499);
    msg.setSource(44751U);
    msg.setSourceEntity(201U);
    msg.setDestination(48841U);
    msg.setDestinationEntity(141U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.33393022596515853;
    msg.control.set(tmp_msg_0);
    msg.duration = 3404U;
    msg.custom.assign("RQOJYYHQJTVWYUPXGFMKRWRRBEEJGBKNNUOXCZLTAG");

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
    msg.setTimeStamp(0.4992579842295405);
    msg.setSource(54657U);
    msg.setSourceEntity(95U);
    msg.setDestination(23812U);
    msg.setDestinationEntity(79U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.26973155749969857;
    msg.control.set(tmp_msg_0);
    msg.duration = 5793U;
    msg.custom.assign("AGBLYRULXDUUSNFRYMABJDTGMRHQGWOJCSJYACXMEMLCHMEXNTWDIGDXKSVBIISEWGDLOSEVWKQSD");

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
    msg.setTimeStamp(0.3857325588500954);
    msg.setSource(27945U);
    msg.setSourceEntity(222U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(191U);
    msg.timeout = 55037U;
    msg.lat = 0.4613775471655137;
    msg.lon = 0.12769560153866966;
    msg.z = 0.5492620056075501;
    msg.z_units = 65U;
    msg.speed = 0.47653679495096213;
    msg.speed_units = 217U;
    msg.bearing = 0.13776849596737306;
    msg.cross_angle = 0.2633904834768086;
    msg.width = 0.45755899544106937;
    msg.length = 0.26904331462414466;
    msg.hstep = 0.14537107305369446;
    msg.coff = 187U;
    msg.alternation = 44U;
    msg.flags = 154U;
    msg.custom.assign("VPNWPCCGZCHMERHIIYBAOQIDHLCUFKXSJZFLYTBTWJHNLAIKCLUUMAJNGMWDQSENZCVFBARFUCWKXOOHCRMVAIWZSMYRNSVYLDRCBXQYSPJTOWXCIGEOUHEEZFDLKZYDHFSXWVTGBYZLNVTEKRXGPWMKRSDUWMVPGIDPQTUYBRRTFTS");

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
    msg.setTimeStamp(0.7854935215751908);
    msg.setSource(51888U);
    msg.setSourceEntity(53U);
    msg.setDestination(6281U);
    msg.setDestinationEntity(102U);
    msg.timeout = 20912U;
    msg.lat = 0.8911143482916709;
    msg.lon = 0.6876603818820329;
    msg.z = 0.695395793256484;
    msg.z_units = 229U;
    msg.speed = 0.479911950567495;
    msg.speed_units = 87U;
    msg.bearing = 0.3932315349272143;
    msg.cross_angle = 0.6410405457800454;
    msg.width = 0.6740947933582555;
    msg.length = 0.6690844165429882;
    msg.hstep = 0.29308522363482925;
    msg.coff = 116U;
    msg.alternation = 42U;
    msg.flags = 59U;
    msg.custom.assign("AOGUTKFCLGARPGURJHJXTVCVYZLUUQXCVJKBUDWOWGYQXTELJCVLRDJQANSVILCLWONOGDBCKFMTSJGIQZIILNMWCSRUNXVKWGBLQIODUYHEZMMEOFAXKXBNFPDTWZTEZSKKKRQHPJFPRATZFPBEIEKJRNAIRAOBMYRZQTRDQWXSCYHEVHYJKZHWOAYIDVAQSOGNWCTOFSSBSIBDPEHUSPNMPXBNMXJGNLFWXYEEZPHBMYMZTPHGYLFDQMFA");

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
    msg.setTimeStamp(0.9287063394774638);
    msg.setSource(24779U);
    msg.setSourceEntity(40U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(33U);
    msg.timeout = 47967U;
    msg.lat = 0.881963198888877;
    msg.lon = 0.996297490617536;
    msg.z = 0.8948326529127338;
    msg.z_units = 67U;
    msg.speed = 0.1795831351244217;
    msg.speed_units = 157U;
    msg.bearing = 0.5532068248119977;
    msg.cross_angle = 0.9994275507593874;
    msg.width = 0.20770601742011674;
    msg.length = 0.8726719644665211;
    msg.hstep = 0.40516947019982363;
    msg.coff = 62U;
    msg.alternation = 91U;
    msg.flags = 209U;
    msg.custom.assign("YUPPNLDWYDYFFGGDNAXQGIWRAFGTCRWJUJOHSFTPPNCJXXDMNHTKKDSGWUTDIVFBBBDHLJEUGNLIMFYUMVPKCSZBZNONYJAZVMYTBYXLJMMVKWTXFBOVZPLPPJBKS");

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
    msg.setTimeStamp(0.9954087186234484);
    msg.setSource(38223U);
    msg.setSourceEntity(75U);
    msg.setDestination(1356U);
    msg.setDestinationEntity(254U);
    msg.timeout = 39385U;
    msg.lat = 0.3224617249266736;
    msg.lon = 0.5091632870857797;
    msg.z = 0.14486090517669026;
    msg.z_units = 129U;
    msg.speed = 0.6818170692505423;
    msg.speed_units = 52U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1222990108357902;
    tmp_msg_0.y = 0.14941355354637376;
    tmp_msg_0.z = 0.6595125878751426;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RFZGYIQWOSXUMSJHTSKWQHJOITBBVLMPTRTKKFYHWWGLLNEXRBHEQXVANPWZKTDLLVICTARIPZMNEPGCRYUMXKDSOUNHXWUPPKNZGDECFHYFBNOBCSSNJEUMKFXFLVSZMAYYLLIFSCCWXLDDAZPHJISVTQYAODLAJIRJUXNNOOGZMORSBQGMFDFQREKWEBEVJI");

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
    msg.setTimeStamp(0.11262583316246122);
    msg.setSource(39255U);
    msg.setSourceEntity(54U);
    msg.setDestination(21563U);
    msg.setDestinationEntity(10U);
    msg.timeout = 51325U;
    msg.lat = 0.21613291234964693;
    msg.lon = 0.5734024011968405;
    msg.z = 0.12337353483134716;
    msg.z_units = 238U;
    msg.speed = 0.4589728942283662;
    msg.speed_units = 135U;
    msg.custom.assign("MHJYHYVGUACCMWICXODECLONUAVUYRSFXHQZDJDTSWQPKPLCRBQDPFZNLJBUFMMBDZRYUFMTMQWDAEKEFOIEOSPCKQQMTUMRPHSZHWRFVYGVDZYJNXIZOFHTCITRIVYLAZJIWVOKLXNAEWXGZUDBHPSZXYKBUOPPROESQNVVBNQYJVEGHCWIRHLTDPSNUWSLKNXKGUFHZOKWXLNJTNGGFQBATMVICBE");

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
    msg.setTimeStamp(0.07037987657415967);
    msg.setSource(44386U);
    msg.setSourceEntity(135U);
    msg.setDestination(40217U);
    msg.setDestinationEntity(51U);
    msg.timeout = 49705U;
    msg.lat = 0.7673426185948764;
    msg.lon = 0.45047978344128037;
    msg.z = 0.683176087650026;
    msg.z_units = 30U;
    msg.speed = 0.831141666321109;
    msg.speed_units = 114U;
    msg.custom.assign("SBNIKPLQOKRFXFKVCWIBBPEYNQDDLFZDGDNPLVUABAKAOCQCTBBICPURCRITXSKWEUQDRXEJTCZPGTJWEIUMNZSDGWAROWUWUZIJAJGJTOHAOXAFLMLOOSXQTWONBKXBCYMIFKPC");

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
    msg.setTimeStamp(0.9127366578143313);
    msg.setSource(45021U);
    msg.setSourceEntity(252U);
    msg.setDestination(1193U);
    msg.setDestinationEntity(233U);
    msg.x = 0.9486818723093674;
    msg.y = 0.9196163003029497;
    msg.z = 0.16002601897580726;

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
    msg.setTimeStamp(0.5181643659016896);
    msg.setSource(54805U);
    msg.setSourceEntity(250U);
    msg.setDestination(22736U);
    msg.setDestinationEntity(170U);
    msg.x = 0.3039931259869316;
    msg.y = 0.3173796458095609;
    msg.z = 0.43641706214347087;

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
    msg.setTimeStamp(0.6839700555252859);
    msg.setSource(25274U);
    msg.setSourceEntity(109U);
    msg.setDestination(46245U);
    msg.setDestinationEntity(224U);
    msg.x = 0.323724387297495;
    msg.y = 0.9755905031141667;
    msg.z = 0.2492407089124814;

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
    msg.setTimeStamp(0.8417141746716384);
    msg.setSource(15812U);
    msg.setSourceEntity(21U);
    msg.setDestination(42436U);
    msg.setDestinationEntity(129U);
    msg.timeout = 11922U;
    msg.lat = 0.7163163656013002;
    msg.lon = 0.7250683211296985;
    msg.z = 0.2426963989831037;
    msg.z_units = 87U;
    msg.amplitude = 0.6166807047042667;
    msg.pitch = 0.08573636345181312;
    msg.speed = 0.548464220486907;
    msg.speed_units = 229U;
    msg.custom.assign("VQLXUMMEDAKHCXCWGZUXREWZDBQLOPPSBSXKYTPZEQSORIXTVMMCPWXYSPJZDOFGHOCJDJKDBKHRXGRGINTUHSTOTHAVJUUMYPPIICQLGTUZWKBFYYQMRGDSRKWAAAVUEZCWTFRQIJXVVQNEZBHOMVLJKZYFXBOBZADNBQFENDLHJNGIIWSANYEBSUCUIXIPVYFGNLVNNBJFMOFYFNEAHCWOKTQLVIZMUCDPG");

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
    msg.setTimeStamp(0.5403623263926377);
    msg.setSource(57358U);
    msg.setSourceEntity(126U);
    msg.setDestination(46015U);
    msg.setDestinationEntity(91U);
    msg.timeout = 52845U;
    msg.lat = 0.020654332889547877;
    msg.lon = 0.08617020867541303;
    msg.z = 0.11638861128187716;
    msg.z_units = 212U;
    msg.amplitude = 0.7821798813110095;
    msg.pitch = 0.9698909291087158;
    msg.speed = 0.8735370667790047;
    msg.speed_units = 182U;
    msg.custom.assign("QSRXDTTWMSNFBBRPNWJDMEHBSTWJXUMJLXLRXLAUEFDHWIQNNGJFHJCLKIZPREQGDVVVFJEXHOBCOCLOPSCHKVECKHAZCJEIYVYBWATTSZCZXLFQYMMPINKSIGYEBOUHQRZA");

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
    msg.setTimeStamp(0.43213417895204853);
    msg.setSource(43497U);
    msg.setSourceEntity(167U);
    msg.setDestination(33659U);
    msg.setDestinationEntity(215U);
    msg.timeout = 15437U;
    msg.lat = 0.19212494329673158;
    msg.lon = 0.3795559474747946;
    msg.z = 0.43288377409332746;
    msg.z_units = 190U;
    msg.amplitude = 0.15954781355409642;
    msg.pitch = 0.9833836159492093;
    msg.speed = 0.5261186163100351;
    msg.speed_units = 140U;
    msg.custom.assign("OUPIYKTUKQSUSIDCAAOMOIEBMAOFYEEAYVWNFRXLHUMRVHPYNOMCGXRKBPERSDTVDMEPXCLHTURYUBRMRNVLXHAPJRQOJHWHCBSAPJWXGUKTVWSODGSNEIDKKGXZHDFWJESZZOWRGBYHEPUAWCCNNFKQGVMTVZOUJTIMLLJLYFGFCIFKMGMTWQFHBHZLVOPEPPRBDVQWXDCACITGZQGKTZBXTEIYZFJNWAXULYAXZLZBJQC");

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
    msg.setTimeStamp(0.2324099982684481);
    msg.setSource(46407U);
    msg.setSourceEntity(17U);
    msg.setDestination(45181U);
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
    msg.setTimeStamp(0.564185895383311);
    msg.setSource(32185U);
    msg.setSourceEntity(145U);
    msg.setDestination(57180U);
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
    msg.setTimeStamp(0.20821392914791625);
    msg.setSource(25829U);
    msg.setSourceEntity(34U);
    msg.setDestination(38267U);
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
    msg.setTimeStamp(0.4354137285966869);
    msg.setSource(46456U);
    msg.setSourceEntity(218U);
    msg.setDestination(62547U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.3207136612429694;
    msg.lon = 0.7922627662808743;
    msg.z = 0.7881777446085455;
    msg.z_units = 205U;
    msg.radius = 0.7001510463217465;
    msg.duration = 52041U;
    msg.speed = 0.13532456538595183;
    msg.speed_units = 180U;
    msg.custom.assign("WUJHDZSQLJKASVCGMMGEBZPYYFUDFATZQVBKVASNZIOLOSUHKVQDJOLVYGQMWEPZWIDGFCXWNNXJTHCAOFNTKUOWQFYGTTKYRPAPQLCIZOMXUOJEVRAOBSRVTNFIQFWHHGYMHXEBEOELDCXKXHRWUDBPJAWRNPGCEXGVOSPISHFKEHFINDBXSDZDNUEWTBMMYZCDBITIBCVXQCRTALLUJXNKYPJMNPCVQEIAGRKYMLIPLFYGBJZTUQSRLRKWHU");

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
    msg.setTimeStamp(0.8536473567115266);
    msg.setSource(32551U);
    msg.setSourceEntity(188U);
    msg.setDestination(36126U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.14906116698748828;
    msg.lon = 0.8820377741813713;
    msg.z = 0.8619804043903788;
    msg.z_units = 199U;
    msg.radius = 0.16713501066145053;
    msg.duration = 46331U;
    msg.speed = 0.5873872050226904;
    msg.speed_units = 65U;
    msg.custom.assign("IIWUJWFCSDJVLKLKECIZZFLFMCNKRSXWGLQRUYNTHDVELZLOBEWIXXHHRYGHUJNVUDXHPDGPCTBRZCMKHWFHUYADUOGSTMYAEBOGPHNVVNWJKSLWCXSMSPVPCAOVSZLMQRLFKBBQZNUNJEIORZCPNEMGFVQYRIYBQXYMAQJFTJANEQAHGEAWEDBY");

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
    msg.setTimeStamp(0.6182486110060895);
    msg.setSource(9517U);
    msg.setSourceEntity(64U);
    msg.setDestination(4653U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.713101502473153;
    msg.lon = 0.8098437642700268;
    msg.z = 0.7176758144219677;
    msg.z_units = 11U;
    msg.radius = 0.06906093474427955;
    msg.duration = 24380U;
    msg.speed = 0.34323203002144875;
    msg.speed_units = 198U;
    msg.custom.assign("AAFYWOSGRXSQYECQPLYGWWFHEYFRPUAFXVYRNSSIGVPMHXYKNLTBLZVWXVMONUOZECCIUFAWETTMNUDJAIYRRQBBVXSNBHLLIOITUWEHVCLKYYHOHXFGKSXJAKHHIMVDJPIKJHCXOFTNQPTNTG");

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
    msg.setTimeStamp(0.09670727842814031);
    msg.setSource(21201U);
    msg.setSourceEntity(6U);
    msg.setDestination(52329U);
    msg.setDestinationEntity(162U);
    msg.timeout = 36809U;
    msg.flags = 191U;
    msg.lat = 0.18244563856190732;
    msg.lon = 0.6894106155082868;
    msg.start_z = 0.12955823711135028;
    msg.start_z_units = 222U;
    msg.end_z = 0.7848977896776572;
    msg.end_z_units = 129U;
    msg.radius = 0.2305498136513232;
    msg.speed = 0.6863021367123054;
    msg.speed_units = 129U;
    msg.custom.assign("PROMCNEGZREAZISVFKJAEORWRBJWTJIKBUYHWFHGGFGVXPTETJYNFJQWKAGRXOOBTFOYONGXHSQWQCBBJKQTQLZUWPNDMCBIJLZCYBZDFDUOHSLIB");

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
    msg.setTimeStamp(0.12055494075074735);
    msg.setSource(20682U);
    msg.setSourceEntity(34U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(195U);
    msg.timeout = 12808U;
    msg.flags = 120U;
    msg.lat = 0.24880889449846133;
    msg.lon = 0.12744949859696764;
    msg.start_z = 0.6440498762112246;
    msg.start_z_units = 143U;
    msg.end_z = 0.6117034452952759;
    msg.end_z_units = 133U;
    msg.radius = 0.48562641832066655;
    msg.speed = 0.31564508713073003;
    msg.speed_units = 176U;
    msg.custom.assign("AGJTQWONSLLKLNJVBRXHUGQBWFUKMVUZSRYWDCXTZJCPOWOJWOMDIKCQRPFAHWDXJVRCCFKPEBFBVFHHYEAMTMXXEHOOZXUTHTIPIFVQISKQYRSOSNDZBYZCLYNKQLSNAJIOENEGWBZHFRUQBHFQHLMRAOCIZUELJFDMLDGAYOIKTXANPRIULLAENJG");

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
    msg.setTimeStamp(0.8765488439407966);
    msg.setSource(28704U);
    msg.setSourceEntity(218U);
    msg.setDestination(36443U);
    msg.setDestinationEntity(87U);
    msg.timeout = 44507U;
    msg.flags = 24U;
    msg.lat = 0.22348740544558587;
    msg.lon = 0.9016058759931235;
    msg.start_z = 0.6857160695024942;
    msg.start_z_units = 220U;
    msg.end_z = 0.3623258516384945;
    msg.end_z_units = 44U;
    msg.radius = 0.2721827876614039;
    msg.speed = 0.22014351205874116;
    msg.speed_units = 10U;
    msg.custom.assign("DXLIPAJAHLBQOFOTOKVLDRQNGIWCYUPXHZHCDDFIBHISYEXKOXHFFMFBUBHJWYWSQYWFLMTVIBGSCOGQZUNTWPNKITPRPNEKLLUVAMEYDHEJANPVPZGRSVCEQQRHVEMWYLIGFPEWVSJOHURZNXTMOYZTJECLJFBBGVKUIJAIOSAOJCQUKCQWNMEZPGDNGAKKNLRTVDWKRQZTXXXRTGCRCIOFRNC");

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
    msg.setTimeStamp(0.7738263982960251);
    msg.setSource(19829U);
    msg.setSourceEntity(200U);
    msg.setDestination(15683U);
    msg.setDestinationEntity(5U);
    msg.timeout = 28182U;
    msg.lat = 0.7420581490505804;
    msg.lon = 0.7819905385240528;
    msg.z = 0.4465057407194152;
    msg.z_units = 160U;
    msg.speed = 0.9047725367464718;
    msg.speed_units = 147U;
    msg.custom.assign("OLHBHZXNKSMTHVFXZJCFSSPFEL");

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
    msg.setTimeStamp(0.4383143219371074);
    msg.setSource(25795U);
    msg.setSourceEntity(207U);
    msg.setDestination(35069U);
    msg.setDestinationEntity(136U);
    msg.timeout = 36716U;
    msg.lat = 0.16736536900784116;
    msg.lon = 0.39062002595752654;
    msg.z = 0.20818312475437983;
    msg.z_units = 191U;
    msg.speed = 0.9050987485611792;
    msg.speed_units = 158U;
    msg.custom.assign("UEBVYPQSBQMMRKCGITREDXZWXDGFEVGPBBTPCMESUZSCGMYKSFHFPYUKOETHFNNVNKWWKYVBHIRJLNMATKADBMCWOVKRURMPDLAWHJHJTPYAOUKAQCWRCHMLLJAXOQYXLBLLTRTRAGVIMOQSFTRDXQYZVPOSCVDJTFLQESGAXFILEHOEFQZMYLZUZCGNFWNPPYXEJQSDUHGIONOUXCJIKIAAOXENXZNBUJHDRZIDZGCGBISWIYTHQZKVV");

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
    msg.setTimeStamp(0.374070292367505);
    msg.setSource(31600U);
    msg.setSourceEntity(229U);
    msg.setDestination(63489U);
    msg.setDestinationEntity(64U);
    msg.timeout = 20820U;
    msg.lat = 0.36613522634914364;
    msg.lon = 0.9746517453288661;
    msg.z = 0.3055635323505359;
    msg.z_units = 46U;
    msg.speed = 0.588746318838928;
    msg.speed_units = 203U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6187427681062428;
    tmp_msg_0.y = 0.3441071297973234;
    tmp_msg_0.z = 0.8569501849797102;
    tmp_msg_0.t = 0.6133466895574182;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ODCQZFPPYCTXOYDKTDMCXQYJPN");

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
    msg.setTimeStamp(0.9155879253481789);
    msg.setSource(38499U);
    msg.setSourceEntity(240U);
    msg.setDestination(42489U);
    msg.setDestinationEntity(97U);
    msg.x = 0.7134470654110664;
    msg.y = 0.9908328034137853;
    msg.z = 0.6156503734662035;
    msg.t = 0.04476855034629579;

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
    msg.setTimeStamp(0.6151542253811135);
    msg.setSource(11890U);
    msg.setSourceEntity(211U);
    msg.setDestination(42189U);
    msg.setDestinationEntity(183U);
    msg.x = 0.6612220753058087;
    msg.y = 0.6177445672034837;
    msg.z = 0.9329611419383723;
    msg.t = 0.46604529705148423;

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
    msg.setTimeStamp(0.07003258662290324);
    msg.setSource(47844U);
    msg.setSourceEntity(174U);
    msg.setDestination(45082U);
    msg.setDestinationEntity(168U);
    msg.x = 0.12352691174454111;
    msg.y = 0.929957115333063;
    msg.z = 0.7888491771735907;
    msg.t = 0.3514297932875111;

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
    msg.setTimeStamp(0.8280532207661498);
    msg.setSource(34813U);
    msg.setSourceEntity(247U);
    msg.setDestination(46383U);
    msg.setDestinationEntity(87U);
    msg.timeout = 24134U;
    msg.name.assign("FEZUIGEBAVPDTMWZCFGLAPVTCAHTRSWTEHJ");
    msg.custom.assign("LGGKQRAAFZVLTQGKSEGHYJOKIOAVJHZYLDFYNLFIZIWCGMBKFCKQAYNHNSNZBZCSRPXXFRVECHDJWUJYORFBMUWYYNVTYEQPDKDTDZYJLLATSIVOGXZRPKEPPJZRLWGMWSJSOQTRAAUFOIBIHPUWQBTMFOKQDBAFCDELKHBHPHWRXGWQZCOMSVUTOJQWEIITRTPHVKDMNNDXSA");

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
    msg.setTimeStamp(0.2324131595427692);
    msg.setSource(258U);
    msg.setSourceEntity(150U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(219U);
    msg.timeout = 30250U;
    msg.name.assign("TOBZQKKZVIONHCBPNIZSZRIPNFMGHXWUEYIEMPTUGMSYTOCRUWTHAARZCWXQGOKCU");
    msg.custom.assign("UVLWNRTMKIHHGNURXNXVQOJCLSVKDBTDORBVVHYAURMRQGCIGVOHYOAINWUOTPPFQWFSKZDEKQREKOVOVBQALYLSINCFUCMOWRSDXSWFUDALQLFKCQBJBLAUKNMDDAVYCQGAPEYRSTGJDMZSMEFEBEZUPFEKZPTJABPOIBRZXYJUECPGLTUJJXFWTDXYMIWTNHJG");

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
    msg.setTimeStamp(0.7755257364178516);
    msg.setSource(40988U);
    msg.setSourceEntity(182U);
    msg.setDestination(24817U);
    msg.setDestinationEntity(30U);
    msg.timeout = 19650U;
    msg.name.assign("RBVANMKYPTSMCKNPBUMLRIHESYCGFWGMAGLOELDNNEXLYJAGZTDKBBRNVKDJTFUOMVQHXYTCUWLFISDQFQIVZNVQORHOSSCJUXENPVRPHXDAVFRMZAXWVSBHTFRPYBQWKSDSJPIGUYWPVMWGZJXIZLCJFVKGYQBPLWHEAPTHCOFKKTLZUBALSDICIIOUOXODFNGHWOLQQPXAJEETEMDTYRQYKWCQZTZCGMMXEJHCNR");
    msg.custom.assign("ILGLDTUNDNQGCSUFAGKIIXPAVLILYDJBWUXGITSDHXFGYORLWAJMBVJJTCMWVBCTJRPYONUHOAHNQHEWSKXFLYXYVKPFLJRJAUFFQNYIEZWTKCLFCZSPKECPOWOQVCOAOJPMDRTMVNSUKCHAQCLSZBIJTNQHKOSABGOPIGFEBQWWHQUIZRRHEGJZYAQRBBMSXDYEIVSXHDXTRYG");

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
    msg.setTimeStamp(0.5525018295266453);
    msg.setSource(44083U);
    msg.setSourceEntity(59U);
    msg.setDestination(56211U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.8956012563117259;
    msg.lon = 0.03298995835572016;
    msg.z = 0.4050984775989134;
    msg.z_units = 64U;
    msg.speed = 0.3189035582570864;
    msg.speed_units = 153U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13794U;
    tmp_msg_0.off_x = 0.23605378112537834;
    tmp_msg_0.off_y = 0.7376881579912341;
    tmp_msg_0.off_z = 0.2582119456269353;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.495817339267671;
    msg.custom.assign("YHIUGMMMVNPZTBSFTPJCUHZCKISRQNARKAANXKDYHNZFOFHCZYRJHEGUCMFLXGOKNGBIDTURMWEBBKR");

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
    msg.setTimeStamp(0.5666560073012902);
    msg.setSource(45030U);
    msg.setSourceEntity(23U);
    msg.setDestination(51728U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.05623847294505868;
    msg.lon = 0.2386902887526986;
    msg.z = 0.3849974410286615;
    msg.z_units = 201U;
    msg.speed = 0.723862239043521;
    msg.speed_units = 36U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6124870928316217;
    tmp_msg_0.y = 0.14268091659110704;
    tmp_msg_0.z = 0.411857565418123;
    tmp_msg_0.t = 0.17892500437337477;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2881888958053854;
    msg.custom.assign("URPFLJAHNMBNGNXQTNGYXOGXRABNFDBXEWKOICUZTZRGKASJQHEEUJZEYDPECPYJWMWCQEAOKUSGJTDXFNCWMCVLJFYASVTXTVVQOIVGPQLRIJSKKPZCIZOTOHVHYUKBLMOQLHIZBU");

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
    msg.setTimeStamp(0.4919661950076175);
    msg.setSource(52605U);
    msg.setSourceEntity(139U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.6960950323611736;
    msg.lon = 0.6759095776152607;
    msg.z = 0.6908523392891182;
    msg.z_units = 176U;
    msg.speed = 0.3533122468876031;
    msg.speed_units = 234U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8841154659476612;
    tmp_msg_0.y = 0.22083594461973977;
    tmp_msg_0.z = 0.5713257381992596;
    tmp_msg_0.t = 0.7853410713892078;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2788U;
    tmp_msg_1.off_x = 0.36724156495666516;
    tmp_msg_1.off_y = 0.6107429862251783;
    tmp_msg_1.off_z = 0.2710777621479369;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.02960505932841684;
    msg.custom.assign("YRKNXZWRYZBHRFAQJVJCKJMRTYESBBTEJZCPZASJCKOIHKVXVTNZASLKAJXKFIOPVEHNZPIQMMHUSIEVOEGVWUXQBSTKSWMTBTEODLFDDPGDSENPD");

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
    msg.setTimeStamp(0.8586056325552041);
    msg.setSource(24828U);
    msg.setSourceEntity(100U);
    msg.setDestination(57674U);
    msg.setDestinationEntity(168U);
    msg.vid = 47780U;
    msg.off_x = 0.4846090175413945;
    msg.off_y = 0.0836054493964844;
    msg.off_z = 0.539274042677197;

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
    msg.setTimeStamp(0.7092822091731568);
    msg.setSource(12457U);
    msg.setSourceEntity(209U);
    msg.setDestination(7809U);
    msg.setDestinationEntity(234U);
    msg.vid = 43690U;
    msg.off_x = 0.7649014223641831;
    msg.off_y = 0.3426334085547452;
    msg.off_z = 0.16447285150826108;

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
    msg.setTimeStamp(0.6612617570630724);
    msg.setSource(59435U);
    msg.setSourceEntity(115U);
    msg.setDestination(40564U);
    msg.setDestinationEntity(16U);
    msg.vid = 64949U;
    msg.off_x = 0.47506772820761556;
    msg.off_y = 0.27747683989436855;
    msg.off_z = 0.9211885440046075;

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
    msg.setTimeStamp(0.3292188281768925);
    msg.setSource(14344U);
    msg.setSourceEntity(9U);
    msg.setDestination(14296U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.13486741055344875);
    msg.setSource(52281U);
    msg.setSourceEntity(66U);
    msg.setDestination(53695U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.8054088089995968);
    msg.setSource(59919U);
    msg.setSourceEntity(86U);
    msg.setDestination(38895U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.5224916016297675);
    msg.setSource(55147U);
    msg.setSourceEntity(174U);
    msg.setDestination(7145U);
    msg.setDestinationEntity(166U);
    msg.mid = 47893U;

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
    msg.setTimeStamp(0.9071213788490043);
    msg.setSource(17205U);
    msg.setSourceEntity(128U);
    msg.setDestination(37023U);
    msg.setDestinationEntity(69U);
    msg.mid = 36333U;

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
    msg.setTimeStamp(0.014894875697670784);
    msg.setSource(59646U);
    msg.setSourceEntity(123U);
    msg.setDestination(63962U);
    msg.setDestinationEntity(119U);
    msg.mid = 38618U;

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
    msg.setTimeStamp(0.6992233748319704);
    msg.setSource(60607U);
    msg.setSourceEntity(247U);
    msg.setDestination(41410U);
    msg.setDestinationEntity(50U);
    msg.state = 137U;
    msg.eta = 37915U;
    msg.info.assign("NSYICSSJEUMEGTKTFVBTJCTFENXUKAUZCJYPLKYNUKKRMMZMODDZTIARNFLZMPXQRIXQORQVKQWORYPAXFLZTIJEYVAVWGMAEDNVDNIXHOLGEVVLVWHYBPXBEXYOQGPHCJHHUXKZCUXAUFGZOSANSLJLCPBLSWOPQGWMUIMJTMCIANDYOFGKFHQHQDBXVCMYSYQCWHBGRRRERKPHBTULIUZGWAJESDHEIDZKBLSNBWGW");

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
    msg.setTimeStamp(0.030122639003295038);
    msg.setSource(3379U);
    msg.setSourceEntity(224U);
    msg.setDestination(8190U);
    msg.setDestinationEntity(200U);
    msg.state = 232U;
    msg.eta = 6047U;
    msg.info.assign("YSXYYOHVKQIQWWRUKFVLNMGNTNUVCAPGYHOFPTMAQGVNRDXIFFDKUWWVEORIBLSKNGWO");

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
    msg.setTimeStamp(0.5308524840666698);
    msg.setSource(35117U);
    msg.setSourceEntity(202U);
    msg.setDestination(4281U);
    msg.setDestinationEntity(225U);
    msg.state = 71U;
    msg.eta = 54728U;
    msg.info.assign("CHOCBITTUAEVACSJJZLYBBJLLDSOYXPZLQQKTAEZWAWKVUZXNEMZZUJPSYIMBEOJTMAPARDRPDSSCWVDYNFPHKNWBHIKDISWJWOYRHQMCYDJWVJOXPQACDHHAZDONN");

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
    msg.setTimeStamp(0.30777230074956496);
    msg.setSource(64221U);
    msg.setSourceEntity(110U);
    msg.setDestination(35414U);
    msg.setDestinationEntity(174U);
    msg.system = 63985U;
    msg.duration = 60833U;
    msg.speed = 0.4852088448119901;
    msg.speed_units = 88U;
    msg.x = 0.706576646084629;
    msg.y = 0.2107831256611694;
    msg.z = 0.9566240201537602;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.8550721075818946);
    msg.setSource(27926U);
    msg.setSourceEntity(228U);
    msg.setDestination(32650U);
    msg.setDestinationEntity(11U);
    msg.system = 38748U;
    msg.duration = 47099U;
    msg.speed = 0.15330204307644413;
    msg.speed_units = 184U;
    msg.x = 0.9905271112957305;
    msg.y = 0.1315967388790409;
    msg.z = 0.843086037997941;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.4606850166127492);
    msg.setSource(29469U);
    msg.setSourceEntity(37U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(84U);
    msg.system = 17215U;
    msg.duration = 26360U;
    msg.speed = 0.24118240070799546;
    msg.speed_units = 10U;
    msg.x = 0.9214319213020569;
    msg.y = 0.8755059508701275;
    msg.z = 0.26269447574086435;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.9259024842664664);
    msg.setSource(48792U);
    msg.setSourceEntity(173U);
    msg.setDestination(23663U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.8065552565183428;
    msg.lon = 0.10095529819765758;
    msg.speed = 0.11329194858304681;
    msg.speed_units = 246U;
    msg.duration = 53238U;
    msg.sys_a = 35613U;
    msg.sys_b = 4339U;
    msg.move_threshold = 0.9325501177973959;

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
    msg.setTimeStamp(0.6143410568322344);
    msg.setSource(542U);
    msg.setSourceEntity(5U);
    msg.setDestination(39218U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.6659139363099777;
    msg.lon = 0.20777248791059644;
    msg.speed = 0.3136667599218873;
    msg.speed_units = 60U;
    msg.duration = 19959U;
    msg.sys_a = 59406U;
    msg.sys_b = 62743U;
    msg.move_threshold = 0.5661483089770135;

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
    msg.setTimeStamp(0.9205268970978898);
    msg.setSource(43968U);
    msg.setSourceEntity(48U);
    msg.setDestination(22108U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.35328755288395364;
    msg.lon = 0.16089164681564028;
    msg.speed = 0.4601072048153618;
    msg.speed_units = 250U;
    msg.duration = 37475U;
    msg.sys_a = 17074U;
    msg.sys_b = 38360U;
    msg.move_threshold = 0.7782611878760823;

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
    msg.setTimeStamp(0.6751046396479992);
    msg.setSource(37942U);
    msg.setSourceEntity(213U);
    msg.setDestination(39716U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.20520224818541621;
    msg.lon = 0.8358777026433806;
    msg.z = 0.25227619195124784;
    msg.z_units = 2U;
    msg.speed = 0.8649500613042849;
    msg.speed_units = 244U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.63217994776427;
    tmp_msg_0.lon = 0.30753073382920715;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OCSQGZLTBREPHWCLIJOVZDDFWXLYIWPSXZCTEFVTJPFSUPAOBJMFTYVHMNKGWIVGJGXLGHRXJACKFKEQQYLDYNHNESATEFNJZMIYXOCDWUKPNGOPVMFUSBJHITFYNRBCPOIAUEHHADMDVSCWZHRSVYBHVMUMWNAUPXMYSLQRWBZPOWQXNBAOAFKSUGGRQIKKOQDYCDERSZDERJGLUAQUCVZUIJEYRZZLGKRFTCDTNKWP");

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
    msg.setTimeStamp(0.1528777249562353);
    msg.setSource(6785U);
    msg.setSourceEntity(110U);
    msg.setDestination(53726U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.37230001258379564;
    msg.lon = 0.23335248648234663;
    msg.z = 0.689590419918039;
    msg.z_units = 206U;
    msg.speed = 0.34752808928055157;
    msg.speed_units = 21U;
    msg.custom.assign("DDGQEVZIYCMSOGTBJYPQBIECDOKQHRMXNWXLPBNQEIFKEGMYGMHFLIHOIZOJEMELSLOJWQGBMJQGCIXARYCYHKCLMFTWEBBRUYKSVPLULAZYWUJAKATRVKBGGDNUHPZABWKWDYDEUBLPPFXCAWPIXSURIRAVYSFSFINNVSGOBQOVKTOCTXAQJCRZVTDLPTJESNMTXFSCXMIQNUVKZHDRPXTHF");

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
    msg.setTimeStamp(0.42110881738671047);
    msg.setSource(39988U);
    msg.setSourceEntity(254U);
    msg.setDestination(1794U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.16862874535559147;
    msg.lon = 0.5618114392739691;
    msg.z = 0.3609099215512671;
    msg.z_units = 214U;
    msg.speed = 0.2785782695702692;
    msg.speed_units = 78U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3793272558641406;
    tmp_msg_0.lon = 0.7380120806737931;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ANWTCUVJGIVBRGTGNCFKXVCFMDFUKEELQTOPQAWOYNMZBQKRIYDFDKANKDZFFSQQBJUEMMTJYYZEGOCZVTHSXODJRKQYSLYJTALCAGOCHSEP");

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
    msg.setTimeStamp(0.21452854056215098);
    msg.setSource(8050U);
    msg.setSourceEntity(195U);
    msg.setDestination(34937U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.7640497993146513;
    msg.lon = 0.710866673960062;

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
    msg.setTimeStamp(0.353178446980028);
    msg.setSource(20125U);
    msg.setSourceEntity(137U);
    msg.setDestination(32162U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.8172110105920627;
    msg.lon = 0.4727719711977758;

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
    msg.setTimeStamp(0.5799822720717883);
    msg.setSource(36768U);
    msg.setSourceEntity(242U);
    msg.setDestination(11632U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.06718573779091908;
    msg.lon = 0.7172710328577437;

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
    msg.setTimeStamp(0.5974294547077454);
    msg.setSource(20075U);
    msg.setSourceEntity(80U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(188U);
    msg.timeout = 59975U;
    msg.lat = 0.21224913271828294;
    msg.lon = 0.6298863577298601;
    msg.z = 0.6906499217378568;
    msg.z_units = 231U;
    msg.pitch = 0.25890525064815095;
    msg.amplitude = 0.7651485118971167;
    msg.duration = 39259U;
    msg.speed = 0.16047376241251;
    msg.speed_units = 12U;
    msg.radius = 0.8944183849187163;
    msg.direction = 234U;
    msg.custom.assign("DOBOFXZFJFMZRPLKPFNKFREHSFUCWKNSXLIKPALOVJHSGYTQZGJMRABQNQTYGNBMGLTOBWDQMMSAKHIDXUIDSQIATIMSFVFLXPNZACGSSYVQJJHRETXRXZGEEHNCSAXYNBMMNGPUIYNQMUZUIOZRPEAQXAGWBCAWCDVIURPLYRJUECBJWHFVJZKJNV");

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
    msg.setTimeStamp(0.9945551771059261);
    msg.setSource(3986U);
    msg.setSourceEntity(11U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(198U);
    msg.timeout = 2130U;
    msg.lat = 0.6268798640034937;
    msg.lon = 0.053706144292872016;
    msg.z = 0.31644560075185424;
    msg.z_units = 184U;
    msg.pitch = 0.047631898125318206;
    msg.amplitude = 0.5852792859352166;
    msg.duration = 36299U;
    msg.speed = 0.0682997895606049;
    msg.speed_units = 200U;
    msg.radius = 0.3310046953509781;
    msg.direction = 27U;
    msg.custom.assign("GCKIKWATXFYSNVJYYLHBOAUROCSNCZTDHORKQTGLMYPBPTMYNZXIDIMYVBWWHGSXACKECPJGQMZPCVVRZLFDAPEJNUWQFHEDGHISUGBNLBIBMISYIBOHIXZJKVQPDHPQMWESUCANZEFDZZNIRVXQEGXRUOSQHMJAFLONTFVRALKECOR");

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
    msg.setTimeStamp(0.8659262973380151);
    msg.setSource(29021U);
    msg.setSourceEntity(143U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(165U);
    msg.timeout = 45725U;
    msg.lat = 0.5622402366889758;
    msg.lon = 0.6490342580647355;
    msg.z = 0.37683869899546074;
    msg.z_units = 19U;
    msg.pitch = 0.19677676913274167;
    msg.amplitude = 0.03912974661895241;
    msg.duration = 28234U;
    msg.speed = 0.6793508123058063;
    msg.speed_units = 54U;
    msg.radius = 0.23808591142362523;
    msg.direction = 50U;
    msg.custom.assign("WQCZDDBIELEBLZVTENFUQZHKSEI");

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
    msg.setTimeStamp(0.37635463670307145);
    msg.setSource(9227U);
    msg.setSourceEntity(9U);
    msg.setDestination(50917U);
    msg.setDestinationEntity(85U);
    msg.formation_name.assign("MGEEFXFQRLDGVHNAWTGUYEZBHVOSHAVEUIKCDZKRYMTSFDJDKTANKQLYIJWCJDTQDTAXGWKLFOCJDVCAXSZUIUIBNSAOABOEINGZRXJOE");
    msg.reference_frame = 92U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59576U;
    tmp_msg_0.off_x = 0.40081707644818865;
    tmp_msg_0.off_y = 0.45216435566578694;
    tmp_msg_0.off_z = 0.3027906843158895;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RJCMIQHUXQXGTCCAWFCMOQLEPQPILDUGGUFUWDYG");

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
    msg.setTimeStamp(0.7526279271141317);
    msg.setSource(28736U);
    msg.setSourceEntity(251U);
    msg.setDestination(59087U);
    msg.setDestinationEntity(168U);
    msg.formation_name.assign("DKEQRCUVCCTZCZRPULKJNEDAEABIMOGYZWDIUUGKRTTVQWFIBXMWOSPQNMBRUWKWJFGCAAYMNYVIJYERSPLDBNJZFUFCILLHDQDGVOAVSIYUJMDHNJTRKWVTSZFHBNHQHKLZWHOTOXPNLTSEUPSLPPNEFTGXIOZYXYZICJQUBNMJILGEOSEASSDXVVYAXAODZBFMRXMYGKYMISCWGVGXRPBXMPWCP");
    msg.reference_frame = 60U;
    msg.custom.assign("TXTPBWDCFYOHQRONMEUPFWLTYE");

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
    msg.setTimeStamp(0.5303513225662976);
    msg.setSource(18898U);
    msg.setSourceEntity(157U);
    msg.setDestination(16563U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("BKUUDFAXWKRBLAOYHCFZHQOXJCHLZZGPGAYHMNKPARIDCPMQVNYBRATKCPJEBSLMTRJLWUSXEJXKCBQUVPQXHWNOQOKAJXNFWBGVQJWEEMDFZWIJYLRZAERRHYBSZVGYNUQIGJFTGCSSUVMZLNROTOIDQNGDPPTNNDJRHKMNHCSMYOXDOVAGWXVXTBLOVTCYFISAKUVFJEMBHZIWSWOASBFLLMZLXC");
    msg.reference_frame = 75U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65094U;
    tmp_msg_0.off_x = 0.2014183344801952;
    tmp_msg_0.off_y = 0.38327677486758616;
    tmp_msg_0.off_z = 0.8069405371984356;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LNJZJNRKTSZQXSLOIIZKEBRZZRUVKCIDJCEBGNNCBAPEYGUIGCMSHQXHCUISVKTLABVMFDGWXSTJJSYLYEDYAIHQYMRVNCPVQHPKPHOOKQRTZDOJOWKYEAKJEZBJLUTIETYGFDAZPGLRLICLRHXGAITCSVDRXML");

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
    msg.setTimeStamp(0.9268134855242237);
    msg.setSource(16723U);
    msg.setSourceEntity(231U);
    msg.setDestination(43479U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("XYSZUCQZGBLFKXSOAYIZBFZFJCFRCISWRJEVBPSUTPXNYAQKOUAMGVWILWQUSHLWATUCLNCEVGCQMIQDJYFWKYATIKIVYHPHHNASJTAIDFJOKEKCHGCMXUZZTJEMTVNPKLGXLVXNVWW");
    msg.formation_name.assign("TMIMYCKZHWTZIJKBHYLGDDXSCGYVMDFUMLUCSJEJCXTXEASKPKDZTHBMZUVLOODCABPJNFXBIRYFWUHNDOHAJAKDAUTRQDWVYNAPGKKBFLKQNIXSETSYLSUFGXWVCLRIVRHTWHCZEAQGBTRPWRQEPGXKMJVUMXVVFLIMLIVNOJBCZDNYAENCUFBNFOWDWPYBGTGZSTXHNEPLZIPA");
    msg.plan_id.assign("LYBNTZERROGWZXQTUWJANLMXJOQYMCDGJOHAFHMOUWPSYHEYZTHXQZKVXBOCDPJIUGBURPGAZVQLXNNIAGQWMANEAXFRSGPHWIRVXMJFXAOVPLFVRQMWRWHBNKZLLHASFFODUZLNJS");
    msg.description.assign("ANAGLZBUVZXVKYRHTZZQANDHNIUPRIFUKIEVLEBGQDTBLFYPQDAJDCXCFOAIMTMFWGBTZXBAEJKUGKXWKCVFWNSYYOZOHXNWPPVGIPHJ");
    msg.leader_speed = 0.7468057474589497;
    msg.leader_bank_lim = 0.8130297096408151;
    msg.pos_sim_err_lim = 0.39993964106950275;
    msg.pos_sim_err_wrn = 0.9792516612352502;
    msg.pos_sim_err_timeout = 44479U;
    msg.converg_max = 0.0678633679765065;
    msg.converg_timeout = 26798U;
    msg.comms_timeout = 17309U;
    msg.turb_lim = 0.8180010341570032;
    msg.custom.assign("LXCVSSNFPEOCHFPYMPKLXDXLRSTTBSINRPHQWHWYLSIQOGYNEBUDRAMTRBQFZUSOCVDAAPKVDBTDVASDGWYKLOEJSNYMTXNHSTZMMWUIPWKJATBCPCBFJOCNCRXHXEWVTFDQMLEEDHUJPFMKGGXDGOCQVZZIITVJGU");

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
    msg.setTimeStamp(0.1450813436669678);
    msg.setSource(17235U);
    msg.setSourceEntity(76U);
    msg.setDestination(49613U);
    msg.setDestinationEntity(18U);
    msg.group_name.assign("YNFYBLRKGOVDHDHPAJLNXPJUZVKASHLWYIVZMFHECOJMAAMDMZMVAECYZXRWPXAYNPWZBNBYRAUTLSUJNUPBFQJPVWXHCLKHZSUFBBNWNUTWEDIBTQOFWKTSFPXEHSGQPKEJPHQCWWGVCLANXJOXRODIGVGKGFQVJXJEGZUIVRQQETIF");
    msg.formation_name.assign("GRUOCIHGDYGPPJASKIMBWWHBPIYFMJOVULJNQFMNEJJFMWKTCAAQNRBTZPEXIDBTTBSHDFREYGQCYNXGTDLZOHPZSOHNUNGLCMLLEOQQXZAUVEHMRVJVBRPCNPTGLBBFZYNRWLNLXYERSDMXAAHZJUECBMLQISOYHLUFRFDSWTKVEQYXWUIZKBIOIDAUSTKVPUVXAXVZYKXWHCQCMKWAASZJCUWVJKXSF");
    msg.plan_id.assign("SLQUOUJBJKBRZARIZBZIHTVNNQZHAIHNESMVBFLYCZPCOWTPWKYCYVHWDFFAFPTTSBYOTILLFEEWOAFETADEYJRXCHNUBKFAXDIRNJBQNNBKHXCGPRRATVSLCEULVOJDGM");
    msg.description.assign("KDMYBQGRYWCYQDXAOINNZMNYIPYQRTCLOZRZSEAXAVEEMXSRQDUHMGNZSOTTQABKCPFYIVMGICLENKDADWYWZIHCJNLSGTDBFFRBUMVEHTFAYAHNZPJZHFA");
    msg.leader_speed = 0.4078453165036292;
    msg.leader_bank_lim = 0.9255988387180633;
    msg.pos_sim_err_lim = 0.8032515874173386;
    msg.pos_sim_err_wrn = 0.12491791907236649;
    msg.pos_sim_err_timeout = 48870U;
    msg.converg_max = 0.47573555467694584;
    msg.converg_timeout = 22474U;
    msg.comms_timeout = 40796U;
    msg.turb_lim = 0.5489842344148599;
    msg.custom.assign("XHSMWJGRSJPQUUYAALZWLPLAKCLVVDSOMWEPZZATMQYCNWNTMMNQFGENUTREZUIJSSGEARNDIQYJSZFAEXNNISCQULJFIMGOHNEZIFGWTORBMRWOLKMSBOVFGYVXHYQKBYGIYWHRMEKUKZTWTVDBVVVXOYFGIBPREXYKUGXLXDMFGKCTAFPFBQABDJZ");

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
    msg.setTimeStamp(0.36229070702282573);
    msg.setSource(23541U);
    msg.setSourceEntity(149U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("QHSJIGIVBVDREACQVMYLAOLDEGBNGAJHOAZQQVZPPSDLYAIGCJZTIRAIXQZWPHEDNOWSZQOOKTRCWAXCELJYUFLZJLGKPWXCXKJHJHAWIOXECZXRWBDMMCHFXIPGYULBXBRIDLFMCUUVTZPTSMZDOTMSTQXBYDRPKBGEQEWSNIHHBNKKFAECOWZLRYKUKWFFYENMFRNKJJYTHBRGYNMLNQUXOSHWGEDIBNVDQUMPTF");
    msg.formation_name.assign("MYSIWMLGAKITODUWGGQTJELDRJPVKNRHSBAVORXUONBZCTE");
    msg.plan_id.assign("GQHWERWMTYEHFITTDHAQCNKZWVYXMTOYUNHYRFNXVDPYQAAAHOJKPACWBJHOOWMVTOPRJAKQNPDAUISORUMIXCTSSJPSCQSMEQXHBLMRRXLHVLOKUIGNUXVVIZHEZLBXCYGBJZAFJEWGAVNEBZLBMLLQRZUGBOFZUGFDRFNKWNFVNYDCTLDMDPPHJXCJWZSFKDQTERRIJCDETGGGIQPEMOKSTAVZNPBCGEMPKWVDUKSZF");
    msg.description.assign("FUHLXMGBYVSINOSPHYEHWADRWCVFUEDSXNGVFGDSOVBQABBSEFKSCZXHIDFVYEDGXFFBLPXQKU");
    msg.leader_speed = 0.02197717043981451;
    msg.leader_bank_lim = 0.32570591547583394;
    msg.pos_sim_err_lim = 0.3671673151867487;
    msg.pos_sim_err_wrn = 0.29274302238231165;
    msg.pos_sim_err_timeout = 58286U;
    msg.converg_max = 0.8213490623216367;
    msg.converg_timeout = 24426U;
    msg.comms_timeout = 63023U;
    msg.turb_lim = 0.3842177950697939;
    msg.custom.assign("PNPCFBOIIJPPAGMYWOKXEUBIQXEBVEPQKFHDQBWNURHBUFUANBQEJRJOVEAKXDJZBTOSWMRTGYQVNPR");

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
    msg.setTimeStamp(0.04933822738678284);
    msg.setSource(43457U);
    msg.setSourceEntity(102U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(104U);
    msg.control_src = 55977U;
    msg.control_ent = 125U;
    msg.timeout = 0.48425949401560053;
    msg.loiter_radius = 0.9456209852924113;
    msg.altitude_interval = 0.34787076787681603;

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
    msg.setTimeStamp(0.8730989187986937);
    msg.setSource(53581U);
    msg.setSourceEntity(160U);
    msg.setDestination(15164U);
    msg.setDestinationEntity(68U);
    msg.control_src = 808U;
    msg.control_ent = 101U;
    msg.timeout = 0.23652631244890598;
    msg.loiter_radius = 0.31254681420044894;
    msg.altitude_interval = 0.22603248111366347;

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
    msg.setTimeStamp(0.9687161538010464);
    msg.setSource(52854U);
    msg.setSourceEntity(150U);
    msg.setDestination(32626U);
    msg.setDestinationEntity(135U);
    msg.control_src = 6802U;
    msg.control_ent = 32U;
    msg.timeout = 0.8213689776442279;
    msg.loiter_radius = 0.2742055581332159;
    msg.altitude_interval = 0.45574279605127654;

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
    msg.setTimeStamp(0.7558116828654893);
    msg.setSource(41444U);
    msg.setSourceEntity(131U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(110U);
    msg.flags = 178U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8805375406599871;
    tmp_msg_0.speed_units = 205U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1735781124208685;
    tmp_msg_1.z_units = 246U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19142369735161768;
    msg.lon = 0.8780615467819256;
    msg.radius = 0.8238891161782452;

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
    msg.setTimeStamp(0.34113467636347905);
    msg.setSource(53839U);
    msg.setSourceEntity(16U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(246U);
    msg.flags = 88U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6433647047817485;
    tmp_msg_0.speed_units = 123U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.31514559457413904;
    tmp_msg_1.z_units = 90U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.09910792462374685;
    msg.lon = 0.9037561938707829;
    msg.radius = 0.024819862351727617;

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
    msg.setTimeStamp(0.5685340869603852);
    msg.setSource(2397U);
    msg.setSourceEntity(9U);
    msg.setDestination(51426U);
    msg.setDestinationEntity(137U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.14527655719900445;
    tmp_msg_0.speed_units = 58U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5922290847582659;
    tmp_msg_1.z_units = 28U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3727025786636442;
    msg.lon = 0.9860584224324598;
    msg.radius = 0.2516119192526506;

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
    msg.setTimeStamp(0.3566620162925358);
    msg.setSource(39348U);
    msg.setSourceEntity(248U);
    msg.setDestination(60747U);
    msg.setDestinationEntity(113U);
    msg.control_src = 20748U;
    msg.control_ent = 153U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 163U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.919522309730657;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9216788440354056;
    tmp_tmp_msg_0_1.z_units = 173U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24732612532136733;
    tmp_msg_0.lon = 0.20890470526588045;
    tmp_msg_0.radius = 0.6704974469274618;
    msg.reference.set(tmp_msg_0);
    msg.state = 248U;
    msg.proximity = 41U;

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
    msg.setTimeStamp(0.7580676079079715);
    msg.setSource(46811U);
    msg.setSourceEntity(210U);
    msg.setDestination(21592U);
    msg.setDestinationEntity(183U);
    msg.control_src = 44939U;
    msg.control_ent = 184U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 9U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5020981833386706;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.10206322901439469;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.48211685884765954;
    tmp_msg_0.lon = 0.263628756356022;
    tmp_msg_0.radius = 0.48533515191419674;
    msg.reference.set(tmp_msg_0);
    msg.state = 107U;
    msg.proximity = 64U;

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
    msg.setTimeStamp(0.23649207617924062);
    msg.setSource(55543U);
    msg.setSourceEntity(206U);
    msg.setDestination(64874U);
    msg.setDestinationEntity(190U);
    msg.control_src = 14317U;
    msg.control_ent = 181U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 202U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7962944703336325;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4013426389599174;
    tmp_tmp_msg_0_1.z_units = 202U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3538819582596491;
    tmp_msg_0.lon = 0.6975855388469118;
    tmp_msg_0.radius = 0.7473379999786657;
    msg.reference.set(tmp_msg_0);
    msg.state = 81U;
    msg.proximity = 167U;

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
    msg.setTimeStamp(0.5516857238675221);
    msg.setSource(49212U);
    msg.setSourceEntity(213U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(194U);
    msg.ax_cmd = 0.8838980983473618;
    msg.ay_cmd = 0.06772576258348684;
    msg.az_cmd = 0.03066452275248699;
    msg.ax_des = 0.9109813015705953;
    msg.ay_des = 0.13001810400833413;
    msg.az_des = 0.16663248043385748;
    msg.virt_err_x = 0.48152480777503737;
    msg.virt_err_y = 0.2525370250649154;
    msg.virt_err_z = 0.4465440908075171;
    msg.surf_fdbk_x = 0.46492795746975524;
    msg.surf_fdbk_y = 0.012153645262360069;
    msg.surf_fdbk_z = 0.8821409735271974;
    msg.surf_unkn_x = 0.623294526053531;
    msg.surf_unkn_y = 0.8953000685138338;
    msg.surf_unkn_z = 0.37850347308998855;
    msg.ss_x = 0.2911483848354508;
    msg.ss_y = 0.39479885055876784;
    msg.ss_z = 0.23187873486946586;

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
    msg.setTimeStamp(0.6507509838551754);
    msg.setSource(23039U);
    msg.setSourceEntity(110U);
    msg.setDestination(49616U);
    msg.setDestinationEntity(198U);
    msg.ax_cmd = 0.870726950440499;
    msg.ay_cmd = 0.8797528462709527;
    msg.az_cmd = 0.727805679048632;
    msg.ax_des = 0.290141844156665;
    msg.ay_des = 0.2023015665416774;
    msg.az_des = 0.19204580693797713;
    msg.virt_err_x = 0.43268698737612166;
    msg.virt_err_y = 0.2406850037603463;
    msg.virt_err_z = 0.5447253599864924;
    msg.surf_fdbk_x = 0.636904620681117;
    msg.surf_fdbk_y = 0.7278808395633605;
    msg.surf_fdbk_z = 0.20969949303467517;
    msg.surf_unkn_x = 0.026293774613446064;
    msg.surf_unkn_y = 0.742618764568083;
    msg.surf_unkn_z = 0.9065663716735544;
    msg.ss_x = 0.513346902157398;
    msg.ss_y = 0.8982127129932728;
    msg.ss_z = 0.5763500067134594;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DGYGOWZBEGKPIBXFHLPECPXYOLLHNKUMEYCDMTRZOKKIEXMHVQZKMTTJCPQCOFJLAGAVLREOJSNDFSSKFCHFRJXVGIITNRGSQWJLVVMNZJIUUHRCSMXACLKDBQZUPQJVJHOTKMXTNAUCKQXFAZLWFVYFCBTDEJNMUPGYPQLZWODVFWLDBGVGWAHXNIYUWNRPDZEOMBEYRWRIVQ");
    tmp_msg_0.dist = 0.9319308784202364;
    tmp_msg_0.err = 0.14288590252129385;
    tmp_msg_0.ctrl_imp = 0.45933109446643405;
    tmp_msg_0.rel_dir_x = 0.8020546743030977;
    tmp_msg_0.rel_dir_y = 0.04344419561231294;
    tmp_msg_0.rel_dir_z = 0.03656970967382289;
    tmp_msg_0.err_x = 0.6346250946904447;
    tmp_msg_0.err_y = 0.15254086838052205;
    tmp_msg_0.err_z = 0.802065243290307;
    tmp_msg_0.rf_err_x = 0.2204644442094561;
    tmp_msg_0.rf_err_y = 0.09175807229997668;
    tmp_msg_0.rf_err_z = 0.6107992908316741;
    tmp_msg_0.rf_err_vx = 0.1670005949541018;
    tmp_msg_0.rf_err_vy = 0.12214116294542876;
    tmp_msg_0.rf_err_vz = 0.2487789368675738;
    tmp_msg_0.ss_x = 0.5528870996183726;
    tmp_msg_0.ss_y = 0.8396219422253401;
    tmp_msg_0.ss_z = 0.42350915164523384;
    tmp_msg_0.virt_err_x = 0.9259708820078492;
    tmp_msg_0.virt_err_y = 0.06585965837936913;
    tmp_msg_0.virt_err_z = 0.0875277395949784;
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
    msg.setTimeStamp(0.33384976845102676);
    msg.setSource(12566U);
    msg.setSourceEntity(241U);
    msg.setDestination(32347U);
    msg.setDestinationEntity(254U);
    msg.ax_cmd = 0.5304322860997663;
    msg.ay_cmd = 0.988293243119537;
    msg.az_cmd = 0.17256511451299794;
    msg.ax_des = 0.2796932205246474;
    msg.ay_des = 0.45206104862887153;
    msg.az_des = 0.16567400999173143;
    msg.virt_err_x = 0.011287722027529035;
    msg.virt_err_y = 0.8895799773489292;
    msg.virt_err_z = 0.41055578214698396;
    msg.surf_fdbk_x = 0.15813835260205167;
    msg.surf_fdbk_y = 0.9483132954103142;
    msg.surf_fdbk_z = 0.297190212989628;
    msg.surf_unkn_x = 0.647620490548835;
    msg.surf_unkn_y = 0.7223993973212198;
    msg.surf_unkn_z = 0.40418638925962425;
    msg.ss_x = 0.534346249824267;
    msg.ss_y = 0.5958119335862686;
    msg.ss_z = 0.9807871000117536;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZOVRJDXFKBJFIEERZYBOCGEEQBEJHJLUOGBFGSUWNHNDAGMQVEVTMAYLWSQNHPKGZPBULJNHUGZKZTPRLBSLMTSNXDVSWKWXSZEHNEVAITDUXLJPXHTAQPCERCMYIVFXAIYGOMXMSKWJIGDBPCMEJBRRTFQBKKVIZCBALAHHQIYYDTHRWORNFON");
    tmp_msg_0.dist = 0.2125193571587467;
    tmp_msg_0.err = 0.3187720212685089;
    tmp_msg_0.ctrl_imp = 0.8950872265494623;
    tmp_msg_0.rel_dir_x = 0.46412900786354894;
    tmp_msg_0.rel_dir_y = 0.5327853662948551;
    tmp_msg_0.rel_dir_z = 0.35251239259981215;
    tmp_msg_0.err_x = 0.8293181392816227;
    tmp_msg_0.err_y = 0.8266430167226554;
    tmp_msg_0.err_z = 0.009897998855418755;
    tmp_msg_0.rf_err_x = 0.886966626826941;
    tmp_msg_0.rf_err_y = 0.5969685710731975;
    tmp_msg_0.rf_err_z = 0.23124588302158122;
    tmp_msg_0.rf_err_vx = 0.2812734593821312;
    tmp_msg_0.rf_err_vy = 0.6624535093743563;
    tmp_msg_0.rf_err_vz = 0.16353451411759556;
    tmp_msg_0.ss_x = 0.20752959465457665;
    tmp_msg_0.ss_y = 0.8010664535845076;
    tmp_msg_0.ss_z = 0.09514619121092249;
    tmp_msg_0.virt_err_x = 0.37751163724300263;
    tmp_msg_0.virt_err_y = 0.6508927383169799;
    tmp_msg_0.virt_err_z = 0.513103855270436;
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
    msg.setTimeStamp(0.043195390102993114);
    msg.setSource(13136U);
    msg.setSourceEntity(132U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(96U);
    msg.s_id.assign("PPFDADCECFJQLRDQIYSWBVGEKZUMCMXKBQKBOUWUVANWLIZXKOSRYWAWQOPTOHDUYIAHXHWOKCFDXHGKHPNIDAEVZGXUEBYCWVPKTYDSLRYIQJCSOGTOBXMSNRTACSOBYKQLHPMNLMHSZYARWNAPYGM");
    msg.dist = 0.29334984151365084;
    msg.err = 0.9010617485810639;
    msg.ctrl_imp = 0.07618907610701164;
    msg.rel_dir_x = 0.9423220373449768;
    msg.rel_dir_y = 0.09582391662368672;
    msg.rel_dir_z = 0.6820128774381071;
    msg.err_x = 0.706108786211609;
    msg.err_y = 0.9679688967898283;
    msg.err_z = 0.0780984998661447;
    msg.rf_err_x = 0.8727110464837423;
    msg.rf_err_y = 0.8798106602784287;
    msg.rf_err_z = 0.25382532978824945;
    msg.rf_err_vx = 0.689407173342058;
    msg.rf_err_vy = 0.08784637925579197;
    msg.rf_err_vz = 0.2387210246671856;
    msg.ss_x = 0.3057192792145903;
    msg.ss_y = 0.25550977736367453;
    msg.ss_z = 0.4376377807073186;
    msg.virt_err_x = 0.906973109278749;
    msg.virt_err_y = 0.8061888293382242;
    msg.virt_err_z = 0.7290938823874437;

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
    msg.setTimeStamp(0.388572727231529);
    msg.setSource(30802U);
    msg.setSourceEntity(214U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("HCYZIJMWOPBLGYZYUVULXLPVVPCDPFQGMTNTIWYWOSTPEUTOSUJRDKGMSKDCNJH");
    msg.dist = 0.6971029804238628;
    msg.err = 0.4106080233929954;
    msg.ctrl_imp = 0.12868649132508536;
    msg.rel_dir_x = 0.29636581456366906;
    msg.rel_dir_y = 0.9414542004878045;
    msg.rel_dir_z = 0.33997003101128054;
    msg.err_x = 0.8700875639954486;
    msg.err_y = 0.5896838238341822;
    msg.err_z = 0.35086612628024416;
    msg.rf_err_x = 0.29994787844303106;
    msg.rf_err_y = 0.214816104901684;
    msg.rf_err_z = 0.8190665953167867;
    msg.rf_err_vx = 0.27004822609123813;
    msg.rf_err_vy = 0.44046799836926676;
    msg.rf_err_vz = 0.9932523943894879;
    msg.ss_x = 0.9430165123285756;
    msg.ss_y = 0.5579814563425104;
    msg.ss_z = 0.9732808486855513;
    msg.virt_err_x = 0.9713715649850776;
    msg.virt_err_y = 0.6728097117168997;
    msg.virt_err_z = 0.3828832505142846;

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
    msg.setTimeStamp(0.13590105687163412);
    msg.setSource(35561U);
    msg.setSourceEntity(61U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(62U);
    msg.s_id.assign("CFYHZLIJUIAMLXDBMXNUEGEXTUOAQBBKGPWWLVCRIWVIFGOQJJDMJDFRFSBZLWNYUMTNZRDAEMREFLKGIKKMVGVQLR");
    msg.dist = 0.14807100194473277;
    msg.err = 0.19322221679027296;
    msg.ctrl_imp = 0.253196907530869;
    msg.rel_dir_x = 0.6647748878080654;
    msg.rel_dir_y = 0.42147634187637684;
    msg.rel_dir_z = 0.3006261344223563;
    msg.err_x = 0.21298882586045087;
    msg.err_y = 0.24873242957162534;
    msg.err_z = 0.362493513503894;
    msg.rf_err_x = 0.882099986088196;
    msg.rf_err_y = 0.005930823084084325;
    msg.rf_err_z = 0.014561171357629354;
    msg.rf_err_vx = 0.12766401575201558;
    msg.rf_err_vy = 0.8311439328586487;
    msg.rf_err_vz = 0.6742173875438529;
    msg.ss_x = 0.38295552567845237;
    msg.ss_y = 0.24805040129805478;
    msg.ss_z = 0.35314726277544384;
    msg.virt_err_x = 0.6847685272275797;
    msg.virt_err_y = 0.05208772752901902;
    msg.virt_err_z = 0.4610754402702415;

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
    msg.setTimeStamp(0.3233677085196395);
    msg.setSource(36007U);
    msg.setSourceEntity(118U);
    msg.setDestination(41694U);
    msg.setDestinationEntity(10U);
    msg.timeout = 22549U;
    msg.rpm = 0.15484475651794483;
    msg.direction = 135U;
    msg.custom.assign("NMKSBFEVCCLKDGOHHEVTVCMQMWBIMWLRUQFHULXNHVTURLSPBJZXNJZITVDQQDEJGMWBA");

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
    msg.setTimeStamp(0.4632317372927257);
    msg.setSource(58286U);
    msg.setSourceEntity(191U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(113U);
    msg.timeout = 16170U;
    msg.rpm = 0.8127662317902418;
    msg.direction = 237U;
    msg.custom.assign("NEROSTZNREKSLLPJBYZLYWORVCIPVEWHTUNTBEUFXXRANYIRBWUNOBTHGVEXDDMWXHJOHMMXTYKQKYVRQSDZHMLRDAYVMLOVZJGEMPHCAMOLIUBHJGCTHMNLGLKDTENCVSWCZAYKWSPKGGZFUKQGRJEUWBSZSIDFASQIVP");

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
    msg.setTimeStamp(0.5823265758071313);
    msg.setSource(23871U);
    msg.setSourceEntity(167U);
    msg.setDestination(30675U);
    msg.setDestinationEntity(93U);
    msg.timeout = 5734U;
    msg.rpm = 0.819417038214904;
    msg.direction = 112U;
    msg.custom.assign("HVTLSJKWAIFKTUEZRPKEIYYYDZKTLORUBODJCCCPBTYJDNWMPABZNZMHYAPOEMAQUSXGYGPBXJOEEGUBUFWRBSKVEVQWQPX");

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
    msg.setTimeStamp(0.4306711269272926);
    msg.setSource(41469U);
    msg.setSourceEntity(94U);
    msg.setDestination(28409U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("WCTDMVUJHHJVHZEBZXMYIBBLHLFRVHWRZBLZZSKYKWSBMFNIVAIYLKPUCKFQGGKPHABQJNIMQRNKDNSOKFSEBKFDIXKLBQYPGIDJWHDXXLEQPGGNUWAPNLHXXMNTWADUGEASCNASCBARRVUFLMDAMQMCJKRJTVUWOFONIHJOTOQNCTVRGIHULUTJAXPZUCGWFEEPDJVWXZEGVOYSRECZE");
    msg.type = 61U;
    msg.op = 36U;
    msg.group_name.assign("UXGQXUHDOJMJEPCVVIQQKJDCLVNESODOXVILGYPGZMNLPHSIOXSTEUAXMIZMMFWQDETGKCZWRRZJPIFJYNRGISUOCKNKJPPAHOJCUALBLYXQINFVVXDRKVPARTRWWWFXSUZTFHKJSMVFZJTXADKAKLCYBMLYCGNYQZOQLPBNNMWOSKVRBRYRYFDIFWCTEDSYEAKFTBZLCHZDPNSRGZDTHCBMIBILUQOHYEEOMGWWAFXPBTHEQUUG");
    msg.plan_id.assign("AFQQQOYPNHPRDVAUGYWTJTQURVFMILJXVPZBHWOAXPBTNGIYOIYDUSA");
    msg.description.assign("GIVAJPIUDTLVHCAGBFUFMHVMXROGBDKSSSLTTFTQFZBMYKHVWRPNXFXXDIVNCGQWJEPMICHUYADGGJEMOZWRRPISXTQCCUDEPJEYJNISNMOLRSKWHHXQMBFYYDUIBZSCDPXXWVUFLRQLCEKRGVZLWTDQUXKVYKTWTSEWFOKALNNCGMZBOLKESNQGBPPNWBMUJHKYSHRHXRBQEDVOZOJYQIGOOAQZDCN");
    msg.reference_frame = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25188U;
    tmp_msg_0.off_x = 0.837493779314126;
    tmp_msg_0.off_y = 0.2667925655628467;
    tmp_msg_0.off_z = 0.09351625936032548;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9703606931728904;
    msg.leader_speed_min = 0.8848489623378498;
    msg.leader_speed_max = 0.9857999408200702;
    msg.leader_alt_min = 0.47577043780009665;
    msg.leader_alt_max = 0.34401050573718805;
    msg.pos_sim_err_lim = 0.8963867507014864;
    msg.pos_sim_err_wrn = 0.5162188964347691;
    msg.pos_sim_err_timeout = 2752U;
    msg.converg_max = 0.8071039982759777;
    msg.converg_timeout = 44975U;
    msg.comms_timeout = 44365U;
    msg.turb_lim = 0.6385586754089121;
    msg.custom.assign("JXCNRAUBYDEXKUWTTICEPBIYVPBCILIEVEOTZQUDNLZLIJQUFOCDQXJWSBQVBEZDWZTVHOZAMXDNZPIQFQGERUHWLRDATNJSABHESCAKMUNNLDTTCDZCPDBBHDOGLBYEXHCWLTZMAAFWMFYGXARXQJORPGRKEXYRJFMPNGJRXHSCIQO");

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
    msg.setTimeStamp(0.2649690179971069);
    msg.setSource(8194U);
    msg.setSourceEntity(123U);
    msg.setDestination(60975U);
    msg.setDestinationEntity(199U);
    msg.formation_name.assign("PNAPZJWIBBTKPEHTVGGIMRGQLZDGJKILEQVUTFHEMWBDIIEYDOEAJNLPRBXWOXWVSXPZSXFJUPXJHIQHASGQVZFCIVMSFACOHLSWXMVLYKXPNMKHZVWXIJSBJRHQFWRMTKUHAQFYUDSJSZPTWALMUUVQCDWBWTGELHENDMTQPAYURKTKENDLRODZINNEFCYCYOOAZYTEORXMROFB");
    msg.type = 59U;
    msg.op = 244U;
    msg.group_name.assign("EGMOOJIWECNQIDINSKMOHDOGHMEQEXXAILFLAYPGVZSKCQVP");
    msg.plan_id.assign("FEKJBBZCUXPGXJORKLMQTEXCAHGEIWNKSRMPFWHRRDJEBIDMBQJATGKKVFZRHIU");
    msg.description.assign("QWNKVXMHLRFMTOQUUZCPQNSPAGOHS");
    msg.reference_frame = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40124U;
    tmp_msg_0.off_x = 0.38660698274923155;
    tmp_msg_0.off_y = 0.4829717679830099;
    tmp_msg_0.off_z = 0.5080697008839485;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.39268749460154506;
    msg.leader_speed_min = 0.9684509281292553;
    msg.leader_speed_max = 0.34820522798408404;
    msg.leader_alt_min = 0.35687936142792087;
    msg.leader_alt_max = 0.8131921134239173;
    msg.pos_sim_err_lim = 0.9113007254167882;
    msg.pos_sim_err_wrn = 0.5401601000290328;
    msg.pos_sim_err_timeout = 26751U;
    msg.converg_max = 0.3027901494511579;
    msg.converg_timeout = 44906U;
    msg.comms_timeout = 58064U;
    msg.turb_lim = 0.9701027424436872;
    msg.custom.assign("XEFJNPIMOAVTINUSOHFXYUWNVNDKJTWPMJUAFBZCCUARSSGYSUZBQQTSMYALWBLEVUBHNEAQIXESXDQVTMVDSCAMPOJZEKYACLHIMSZNDRRRHCXDQOIKQVZIFMNCIFSLCRNFKYZDVVUWDEULGAKMYH");

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
    msg.setTimeStamp(0.09956835271372055);
    msg.setSource(49399U);
    msg.setSourceEntity(162U);
    msg.setDestination(44549U);
    msg.setDestinationEntity(200U);
    msg.formation_name.assign("ZQZEYMARKLCLBAMGEDWDUCIQJIMALQQRVCYNRVIGAIUCVNJTTURHPOBFIGBASGPIKSAJRWDXTGMDHBKZJOJLOETZPDBRRCHGP");
    msg.type = 217U;
    msg.op = 14U;
    msg.group_name.assign("XJVWFRYADKKUJNIQYYZEGIVPQHGSGZHIJSKLCPHNFCOCUSIMLFUTUVMBDSOATWLJDADNHEFCDXRKKUBISERCKGOXBKFMDYBQPDXRNNLCHZTSZMKGHUVQAXISABVEVOTESHHVYGROOZYLCPBHBTALIPNPSNWZCDZOTZARFEIBAKIXORWUXLEJGDLBGNVJZMJJFXPAW");
    msg.plan_id.assign("ENXHWIKGHERTOKTXLWLXZLBUDATJCLOELJZSTVZFVHVVLGEUBSRLJGOW");
    msg.description.assign("ACWYMBNJQVQVCQTBHUGHCJOWWRQRLGEEQZNNIFWBYZGEMZJSDFBWFUXNZLIKRWAUEZGDHSPTOCDIG");
    msg.reference_frame = 220U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61583U;
    tmp_msg_0.off_x = 0.004810281656693061;
    tmp_msg_0.off_y = 0.2950900000533565;
    tmp_msg_0.off_z = 0.10493942458827488;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7336665938084624;
    msg.leader_speed_min = 0.44589583326151694;
    msg.leader_speed_max = 0.6538767852000008;
    msg.leader_alt_min = 0.14481661946798563;
    msg.leader_alt_max = 0.781545862599586;
    msg.pos_sim_err_lim = 0.8455301227243427;
    msg.pos_sim_err_wrn = 0.3188862500111379;
    msg.pos_sim_err_timeout = 39594U;
    msg.converg_max = 0.4134881184434085;
    msg.converg_timeout = 691U;
    msg.comms_timeout = 9801U;
    msg.turb_lim = 0.45411527195151846;
    msg.custom.assign("HLXZCSKOELMZAHFRCKSYAHFSDJLVIDRWNHXRYPWMVZRVPMVSEATGTQUXLXJKKANPKXBDPVFAIVPFGCSYOMOSTQRMZKMIZPTXQXUYJJVZ");

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
    msg.setTimeStamp(0.08043330399136739);
    msg.setSource(20764U);
    msg.setSourceEntity(111U);
    msg.setDestination(22940U);
    msg.setDestinationEntity(148U);
    msg.timeout = 24125U;
    msg.lat = 0.2965283078903487;
    msg.lon = 0.9915379822469541;
    msg.z = 0.053440741389820134;
    msg.z_units = 197U;
    msg.speed = 0.0504095679817389;
    msg.speed_units = 217U;
    msg.custom.assign("GRLMPBCJFRUIXKVFNCPPTWDOOGSKOSKUF");

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
    msg.setTimeStamp(0.4945918422414812);
    msg.setSource(51079U);
    msg.setSourceEntity(74U);
    msg.setDestination(45425U);
    msg.setDestinationEntity(32U);
    msg.timeout = 14036U;
    msg.lat = 0.537632844396565;
    msg.lon = 0.48242219967006794;
    msg.z = 0.5808677126808418;
    msg.z_units = 12U;
    msg.speed = 0.37505150990633573;
    msg.speed_units = 128U;
    msg.custom.assign("CVHRYTHHMSFWKMWVJKCYTQQVVUBLXNJKERFDHCRWUWMTYSDUOIZGOYMDFHZZIZIUATAJMGUWMTNLQZDJINVXEZAIQUTKEMJTEDZRWSNGPSPVXJCQXRANLOCEOIORCGRKNEPOYPCSQYCSHBWAKMXXANPKYQOBYULHIGIOLIWAVZAAEZJHSXLQMVCRLTBBSBAFBNVSRBBPNLUOPPEZGQDJD");

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
    msg.setTimeStamp(0.5273400271617158);
    msg.setSource(24872U);
    msg.setSourceEntity(142U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(170U);
    msg.timeout = 53335U;
    msg.lat = 0.8158771547242397;
    msg.lon = 0.9113096516417198;
    msg.z = 0.22878545278486584;
    msg.z_units = 158U;
    msg.speed = 0.6178337535117464;
    msg.speed_units = 92U;
    msg.custom.assign("WTVAIGQHGHNQOGHTCBRQBFJVENZTFIBQFJBHPAYFUAGSLFDWVVLWDUELESMPSMRCHXXOFFTZGARWXKSIUGVCVAJUPPMACXJPMOURQNGDTSNNOOGZETWTBTPZKRQKNZZCJAOLTOVKVRGQVELHYAHJUMYIZMRODTBOHHY");

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
    msg.setTimeStamp(0.05685612720340316);
    msg.setSource(46117U);
    msg.setSourceEntity(93U);
    msg.setDestination(54095U);
    msg.setDestinationEntity(190U);
    msg.timeout = 29764U;
    msg.lat = 0.7618060737355036;
    msg.lon = 0.017750512534708163;
    msg.z = 0.7893424691970194;
    msg.z_units = 224U;
    msg.speed = 0.9535731151985346;
    msg.speed_units = 159U;
    msg.custom.assign("TJLHDHNDDQGWLZFTISUXZKOLCPHN");

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
    msg.setTimeStamp(0.955903735753984);
    msg.setSource(4990U);
    msg.setSourceEntity(240U);
    msg.setDestination(58569U);
    msg.setDestinationEntity(63U);
    msg.timeout = 55253U;
    msg.lat = 0.9474566904706593;
    msg.lon = 0.36748137590767205;
    msg.z = 0.4753070042969215;
    msg.z_units = 166U;
    msg.speed = 0.5309412788701019;
    msg.speed_units = 200U;
    msg.custom.assign("NAAFRGXNCGBWPYCWVFUGBIYVMQLHUEMSUMSOUCKJHVYNBOWIUVCKPOHFRRGPNQQBTYBLJPCUDFIWFZT");

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
    msg.setTimeStamp(0.900643292089881);
    msg.setSource(3335U);
    msg.setSourceEntity(12U);
    msg.setDestination(37267U);
    msg.setDestinationEntity(9U);
    msg.timeout = 32508U;
    msg.lat = 0.15433429900480788;
    msg.lon = 0.5585393675300263;
    msg.z = 0.9206462556205873;
    msg.z_units = 94U;
    msg.speed = 0.9145460349032317;
    msg.speed_units = 242U;
    msg.custom.assign("QGGNMVMCDFUYAZSUDSBDQDFVAFVPGAPYVKJJBLONWYKJWEHBYEBQPUQVOQSMTEJFTZRDOVPSZOMENNRUYKJSEKIBDLKIA");

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
    msg.setTimeStamp(0.586463589881235);
    msg.setSource(39782U);
    msg.setSourceEntity(131U);
    msg.setDestination(60290U);
    msg.setDestinationEntity(100U);
    msg.arrival_time = 0.9648708775441536;
    msg.lat = 0.6565370208493287;
    msg.lon = 0.02785366153796942;
    msg.z = 0.024990760653734068;
    msg.z_units = 93U;
    msg.travel_z = 0.9387001287383184;
    msg.travel_z_units = 251U;
    msg.delayed = 178U;

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
    msg.setTimeStamp(0.34267776829271124);
    msg.setSource(52475U);
    msg.setSourceEntity(212U);
    msg.setDestination(16878U);
    msg.setDestinationEntity(0U);
    msg.arrival_time = 0.13076305620924844;
    msg.lat = 0.7368875528760104;
    msg.lon = 0.3248318837009142;
    msg.z = 0.7505833033822328;
    msg.z_units = 128U;
    msg.travel_z = 0.3239711975409484;
    msg.travel_z_units = 67U;
    msg.delayed = 27U;

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
    msg.setTimeStamp(0.5033201190976082);
    msg.setSource(44736U);
    msg.setSourceEntity(251U);
    msg.setDestination(49841U);
    msg.setDestinationEntity(67U);
    msg.arrival_time = 0.2639469524004362;
    msg.lat = 0.5365503079366476;
    msg.lon = 0.952993875854534;
    msg.z = 0.6355071511429622;
    msg.z_units = 192U;
    msg.travel_z = 0.8224405723465278;
    msg.travel_z_units = 135U;
    msg.delayed = 44U;

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
    msg.setTimeStamp(0.2047644894744428);
    msg.setSource(11449U);
    msg.setSourceEntity(142U);
    msg.setDestination(8790U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.23458214643795228;
    msg.lon = 0.7274258177279604;
    msg.z = 0.12247189800605496;
    msg.z_units = 163U;
    msg.speed = 0.7552841067500456;
    msg.speed_units = 148U;
    msg.bearing = 0.4018513859012468;
    msg.cross_angle = 0.40672470407757777;
    msg.width = 0.07065677331444575;
    msg.length = 0.8415954908847998;
    msg.coff = 230U;
    msg.angaperture = 0.5986896095612195;
    msg.range = 15673U;
    msg.overlap = 26U;
    msg.flags = 202U;
    msg.custom.assign("IOFWQAUFCJGNSHTPXZVLEBHOLCPSPMDVKGUZJYBNQJJXBMVLAICVSYQREZYUGBNEZRTGOZANXKAIAHEFBBDAMZOOCUWRYECKBNIDCQPXEYMJDGJVPWUXAKQUFRJEMIOTUGMCFGBLHAGDKRSLYHNVQSNMKYTFHISISIDOKVFTFPYWZMDGWLTKNEXEOISPLBVLQOWDPYNRUMCZQGH");

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
    msg.setTimeStamp(0.11272459755225162);
    msg.setSource(8856U);
    msg.setSourceEntity(125U);
    msg.setDestination(53174U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.10443769787119073;
    msg.lon = 0.1842708599325722;
    msg.z = 0.32297557214759665;
    msg.z_units = 151U;
    msg.speed = 0.6492882506352797;
    msg.speed_units = 18U;
    msg.bearing = 0.49680325453119323;
    msg.cross_angle = 0.49744173588454554;
    msg.width = 0.046703031067875544;
    msg.length = 0.6553614107980549;
    msg.coff = 63U;
    msg.angaperture = 0.9280391604000477;
    msg.range = 16678U;
    msg.overlap = 139U;
    msg.flags = 114U;
    msg.custom.assign("BZDLVRQHBPXDPNHMKVSYPHVNFKFVMNEMJHZNOPXAWWSVHVQSUQHYSCCEAHZRAFNFCXAWQSDYMDPILQQKQJEXPKCLVOSP");

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
    msg.setTimeStamp(0.615272477218036);
    msg.setSource(18134U);
    msg.setSourceEntity(229U);
    msg.setDestination(6958U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.6801854558076018;
    msg.lon = 0.4181335247096465;
    msg.z = 0.40963469167766364;
    msg.z_units = 45U;
    msg.speed = 0.610844233441916;
    msg.speed_units = 207U;
    msg.bearing = 0.06602947874833742;
    msg.cross_angle = 0.35488169142353865;
    msg.width = 0.0052540925251175485;
    msg.length = 0.39076258699580135;
    msg.coff = 119U;
    msg.angaperture = 0.7686497195214795;
    msg.range = 62228U;
    msg.overlap = 91U;
    msg.flags = 221U;
    msg.custom.assign("TFCPBYTLTNLYIDGANTMRGTGPBEYMDRSUVUOZKACEUKMQJHOPBECQSOWDPRVWHQMOQOEWWWFJWIWANUTJGVTFXHAJIPHXVVFGCLOPNYDURMSIRYLQYVLHVWKSUYYQXWRAPQKNRESIVXBKMJHXXBDQGGRICDXJLEGGZZETUBYSZHCXFLJNPGLHZRIXKOOKIUEAMBPC");

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
    msg.setTimeStamp(0.43068140339076577);
    msg.setSource(6705U);
    msg.setSourceEntity(171U);
    msg.setDestination(37542U);
    msg.setDestinationEntity(153U);
    msg.timeout = 16510U;
    msg.lat = 0.7101344652933917;
    msg.lon = 0.4377367425170552;
    msg.z = 0.25919972818358494;
    msg.z_units = 74U;
    msg.speed = 0.690671333807937;
    msg.speed_units = 248U;
    msg.syringe0 = 133U;
    msg.syringe1 = 200U;
    msg.syringe2 = 8U;
    msg.custom.assign("LMAHTDSKIMUAGWUVSYLUAOVYUKNGBOIBQ");

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
    msg.setTimeStamp(0.8363043709179699);
    msg.setSource(63030U);
    msg.setSourceEntity(211U);
    msg.setDestination(31900U);
    msg.setDestinationEntity(71U);
    msg.timeout = 34291U;
    msg.lat = 0.7824712962665248;
    msg.lon = 0.961564955319894;
    msg.z = 0.11957610953903264;
    msg.z_units = 68U;
    msg.speed = 0.6286877546481454;
    msg.speed_units = 230U;
    msg.syringe0 = 37U;
    msg.syringe1 = 152U;
    msg.syringe2 = 12U;
    msg.custom.assign("YUSGJOYFHISJRBDNKWNNKGDZMRAOAQYEAIEPVGLWCDDXBMSBMMYVXLBCEKXRJJDXFDWUCHRGJUVFIYIAMUSHMTZWUQNUIKHXAOAAKLKVZHZKLRADLHHTQOPZABFPCQDNQTTFPSJMVNVIBTVTALTYNJITWNOGQWOREEFRCYRPYWXPCEZYJRGCVLPBHQINIZPUUOTBGXECOJFFQFKBSVGRZHWPKKLC");

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
    msg.setTimeStamp(0.040679099071061486);
    msg.setSource(5037U);
    msg.setSourceEntity(13U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(143U);
    msg.timeout = 62336U;
    msg.lat = 0.9295066409014241;
    msg.lon = 0.23535276054646437;
    msg.z = 0.5836213872315541;
    msg.z_units = 175U;
    msg.speed = 0.7672183511158083;
    msg.speed_units = 54U;
    msg.syringe0 = 205U;
    msg.syringe1 = 213U;
    msg.syringe2 = 52U;
    msg.custom.assign("WGWSWQPCVJFXDFPQHLDKMASBZGSOINVEIUWABOULYFPPFZWGVSTKLOJWUUNZKIRCLLOFARZHEAPNPWVAXBJIALJKHWXAHDCFTJAYMHFZHDJBYSWYYXORHMEEXNQDMSRLECEKVXBITPCTTOTLPIYGGBJVNMJUGHGUOOZRDHENTZPZLJ");

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
    msg.setTimeStamp(0.8108853720496217);
    msg.setSource(700U);
    msg.setSourceEntity(64U);
    msg.setDestination(31740U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.08935552662371582);
    msg.setSource(13791U);
    msg.setSourceEntity(69U);
    msg.setDestination(49330U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.8018212136816039);
    msg.setSource(10019U);
    msg.setSourceEntity(131U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.8007977823921597);
    msg.setSource(14222U);
    msg.setSourceEntity(142U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.2112174639927109;
    msg.lon = 0.6554922074318994;
    msg.z = 0.8420005741747854;
    msg.z_units = 40U;
    msg.speed = 0.2823734603615633;
    msg.speed_units = 82U;
    msg.takeoff_pitch = 0.4762615877992187;
    msg.custom.assign("JQQXZSHGHISIIUZTJHKIXMTSFMHVFYDNJYUFAJUBUWOWCKRP");

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
    msg.setTimeStamp(0.25456242890547176);
    msg.setSource(17509U);
    msg.setSourceEntity(221U);
    msg.setDestination(17322U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.2651765882401701;
    msg.lon = 0.49254102435744573;
    msg.z = 0.04522455345356213;
    msg.z_units = 184U;
    msg.speed = 0.1312894197342238;
    msg.speed_units = 109U;
    msg.takeoff_pitch = 0.4607530052198294;
    msg.custom.assign("CGZCWZUBWGSRAXJPTUOJ");

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
    msg.setTimeStamp(0.1401257272051426);
    msg.setSource(30156U);
    msg.setSourceEntity(58U);
    msg.setDestination(31120U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.1751731571907602;
    msg.lon = 0.10910606083112062;
    msg.z = 0.931021296567999;
    msg.z_units = 208U;
    msg.speed = 0.47951942163419625;
    msg.speed_units = 238U;
    msg.takeoff_pitch = 0.7535052689933301;
    msg.custom.assign("HRAPDSNFDNIHNDLENHTKQXGRHYYUPMUDCOQEGLQOPSLFXBWDRK");

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
    msg.setTimeStamp(0.8166489042442244);
    msg.setSource(37369U);
    msg.setSourceEntity(95U);
    msg.setDestination(62028U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.5475799878702664;
    msg.lon = 0.9831852074900858;
    msg.z = 0.9826808865352445;
    msg.z_units = 26U;
    msg.speed = 0.9962676299885644;
    msg.speed_units = 103U;
    msg.abort_z = 0.6479261199579534;
    msg.bearing = 0.6763476453538956;
    msg.glide_slope = 116U;
    msg.glide_slope_alt = 0.0353881122782469;
    msg.custom.assign("FAYWSQIFVCQVPISNYANKRTNQPBUQUNKMXXEOMEOFIXTAJVGBKCFKWTJDATLVRDZOGHZTPHNNRGQAPOZHIBCUCXYMSCCRKCZTHNGWRQWLOBIJPMPZAUIBZBRMFTDBOLSSYFGHNYVRSHMAESELUMCHTJJVXGFKDPDRVXWOFYYNGRDIGLYEXWXXTMRUNUYDVKJCJBEYHTVQAGAMJZWKGOPMD");

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
    msg.setTimeStamp(0.30314379492562427);
    msg.setSource(39553U);
    msg.setSourceEntity(215U);
    msg.setDestination(35377U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.06645555848670937;
    msg.lon = 0.2638148059849289;
    msg.z = 0.1511308136975129;
    msg.z_units = 101U;
    msg.speed = 0.3704477342430742;
    msg.speed_units = 132U;
    msg.abort_z = 0.4754614485155556;
    msg.bearing = 0.9733326511515599;
    msg.glide_slope = 140U;
    msg.glide_slope_alt = 0.8180933368691827;
    msg.custom.assign("FHGTCDCGZFCGKSOXNIYRN");

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
    msg.setTimeStamp(0.25519276726794493);
    msg.setSource(30266U);
    msg.setSourceEntity(68U);
    msg.setDestination(62743U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.05200197015643304;
    msg.lon = 0.41745357921678106;
    msg.z = 0.9275259588746531;
    msg.z_units = 151U;
    msg.speed = 0.01774148802984421;
    msg.speed_units = 10U;
    msg.abort_z = 0.965882228558083;
    msg.bearing = 0.7188311471255698;
    msg.glide_slope = 194U;
    msg.glide_slope_alt = 0.8751077410277417;
    msg.custom.assign("CMLPKCPSOAVTFAZDTVXTIADJUUEIPKXYLCNRANWELMTQJWFDBIYWTMRCSZWANYWBFJFOJPEGEFOFISLBXZUQCDINSVLMDTGWGKGEDJOGDEYTHWUEBSHXRZGXBLXKUHWKG");

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
    msg.setTimeStamp(0.681126670592346);
    msg.setSource(12685U);
    msg.setSourceEntity(36U);
    msg.setDestination(54023U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.20872603122920697;
    msg.lon = 0.9351201001374991;
    msg.speed = 0.8712178296214297;
    msg.speed_units = 171U;
    msg.limits = 151U;
    msg.max_depth = 0.4059927422368478;
    msg.min_alt = 0.367263633972976;
    msg.time_limit = 0.8519305636278232;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7573887927746629;
    tmp_msg_0.lon = 0.35769637472946136;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TSTOEXTUTFAPUBYPWZZLVMWVYEKHBUBPYBNXPKDWUGOXNILZPXMDCDCUWEAFGQLZOQYL");
    msg.custom.assign("BKIQLBIMTNWZVIJCCEQVOXILJZQGCXQJNDFLKRDYIXAGPLNZKUXQHJNHBHJFKRUODKSWWTQFZRUXBPAMWWAXAHUDOGEBRFWTVAYFFFDZCDCYTEXBVZUVNSGIH");

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
    msg.setTimeStamp(0.04550478909287681);
    msg.setSource(2982U);
    msg.setSourceEntity(191U);
    msg.setDestination(34152U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.532754275567315;
    msg.lon = 0.47258209502940807;
    msg.speed = 0.43773339939989353;
    msg.speed_units = 95U;
    msg.limits = 119U;
    msg.max_depth = 0.7891547534983642;
    msg.min_alt = 0.46755540494797887;
    msg.time_limit = 0.8594263949288994;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.03824600306265569;
    tmp_msg_0.lon = 0.46316946059861674;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TNPHOSXUTDOYBTSINXCKACWYGVZYVGMGRDUMOOSTSAWLGAMEBRWLTQYTCLNPJZFDKYTWUYXRNXGAEFIPAEVVIJIBQVRVHXMEUBESHLQATQCCUZNNMIKGSZBDWMPHPKBXAVCOBVHLRHNTLDZOLFFEZJGQFUDGYBNBXJAXLWISMQIZFQEFRDRYOZUJWCKGOTOIFXPCWLOJPWDUZSVERIUKKHAVMQSXPUFEZJ");
    msg.custom.assign("EZSUUCUODVXXVCFYMTAKBRAKNGFOHKWPJPCPXLHVFHPIVLCEYUABBXWMJGXGLOIWCZSTZHWQIQFABKILRAVRKCOAPCNXLRDQRQKZTQJSTEYGSOKSBOUGDGISIVWAJOPMNIINRCBPIUSJODYTNVZZSERBFF");

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
    msg.setTimeStamp(0.42422237128247453);
    msg.setSource(34747U);
    msg.setSourceEntity(239U);
    msg.setDestination(41948U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.4688107595318418;
    msg.lon = 0.9560871729717496;
    msg.speed = 0.7664504407836333;
    msg.speed_units = 134U;
    msg.limits = 213U;
    msg.max_depth = 0.259614711350595;
    msg.min_alt = 0.6296304085336122;
    msg.time_limit = 0.7295600168396631;
    msg.controller.assign("ZGHFEGUKZW");
    msg.custom.assign("KFNMWYUSUBSSVVOXNEIRNKAROMGHUMTEVKAQZDIXIHSKHDDZFKRVAUTGGXBCIFTDLQSPRHEDBYNUGXMZQYGWJPRNZSVXYWDFZAFSMSGUPHLIMAANQLYJAZFFSDWPBMJTAIKZCPKCSVWGKHERJOIPXNFLXCGCJXNBXUWQEUAPZCVLOIJHLJOPBVKRCWOOJBWYFQJMLMABZ");

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
    msg.setTimeStamp(0.5649254211565649);
    msg.setSource(62447U);
    msg.setSourceEntity(25U);
    msg.setDestination(31138U);
    msg.setDestinationEntity(108U);
    msg.target.assign("CVJLMJICGITRBPSIZYULLLKGGNJNCTSREPLRPTCIGYHPWBAEMFSHCOQEMORLEMMCTAWTQZFWYCVLRTUEZHSOXLSVQZNRUPUKTQXQAFEJAOWKOLHOVIJRNWDBGBOQYNRHFNDQPVFRZGRB");
    msg.max_speed = 0.30456268173421386;
    msg.speed_units = 215U;
    msg.lat = 0.5092564692495987;
    msg.lon = 0.22768276624041128;
    msg.z = 0.8722776104318929;
    msg.z_units = 254U;
    msg.custom.assign("PKPMNWNTHOVOKLHGZFEUXOQOBHKPSAXRLMKWQVQEYEWFS");

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
    msg.setTimeStamp(0.06295667349976897);
    msg.setSource(38500U);
    msg.setSourceEntity(225U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(54U);
    msg.target.assign("WJYMVVRSFHJDCQBMWIZMDXLFILCWTUKLCSIACGSZSXPFPRRKIYVQFGYDYTHBSGIWMGJPAOGJMKAXGEJBNOJGAQDTPCWTQULSTFZKWESRYMVZPLBIHONLFOATHLCNYUXSVDHNCZKMXQUXBP");
    msg.max_speed = 0.43929468246574277;
    msg.speed_units = 174U;
    msg.lat = 0.11683487339484044;
    msg.lon = 0.37643405063661817;
    msg.z = 0.5857880005141691;
    msg.z_units = 129U;
    msg.custom.assign("AHOVPRSNQPIIWTEVKIAUJBRLKXGJGFCWDNTGQSVPXIHBATMEEJVHRVZAQTXHBMMAQLAASODFWLEYRWRZUMDXGMZ");

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
    msg.setTimeStamp(0.07436475214882654);
    msg.setSource(64563U);
    msg.setSourceEntity(115U);
    msg.setDestination(38249U);
    msg.setDestinationEntity(90U);
    msg.target.assign("EUDOVRMJPUWUDTKVWZQPAEOELHEWNHWOTMAIGJFYSASKZUXPUIBJQQWXFZQSQWCPSD");
    msg.max_speed = 0.29593244570677324;
    msg.speed_units = 221U;
    msg.lat = 0.3653451397856671;
    msg.lon = 0.6012309542046449;
    msg.z = 0.9006502912900011;
    msg.z_units = 21U;
    msg.custom.assign("PRYSZNEEVXQABQGMSLUAVQUWRIJGXZEYRTDCUFDPKKNMRNHJORTZWBSY");

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
    msg.setTimeStamp(0.2378363441437158);
    msg.setSource(50606U);
    msg.setSourceEntity(224U);
    msg.setDestination(20353U);
    msg.setDestinationEntity(124U);
    msg.timeout = 29510U;
    msg.lat = 0.4494712683264427;
    msg.lon = 0.9956799256872968;
    msg.speed = 0.5729052944294863;
    msg.speed_units = 253U;
    msg.custom.assign("BPRIWRLYZCUPGHJJBRYHCSN");

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
    msg.setTimeStamp(0.06520177294275231);
    msg.setSource(6422U);
    msg.setSourceEntity(52U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(144U);
    msg.timeout = 36874U;
    msg.lat = 0.028724753644315926;
    msg.lon = 0.06852537169631301;
    msg.speed = 0.10952128787584636;
    msg.speed_units = 194U;
    msg.custom.assign("XOVXUONCPRWFTKJFPPLJUFSWFKJJTPEMDZLDKUYFUVLHOFRRGSMRLVWXITHAFLUQSJDNCDLQMXBTYDLKB");

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
    msg.setTimeStamp(0.6698003014426457);
    msg.setSource(33272U);
    msg.setSourceEntity(86U);
    msg.setDestination(32849U);
    msg.setDestinationEntity(17U);
    msg.timeout = 26516U;
    msg.lat = 0.6617880038075429;
    msg.lon = 0.835360777670722;
    msg.speed = 0.7643789707170139;
    msg.speed_units = 48U;
    msg.custom.assign("DBTDMANBPYQLXZXKZHXKHXCYBPGOFRERSWWLCXLJWFBOVBWWJGGLCEBNYPBRFJYAJIUCIHSRTIZKHRWONGOZGK");

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
    msg.setTimeStamp(0.2785333250649179);
    msg.setSource(30847U);
    msg.setSourceEntity(84U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.9172582459316427;
    msg.lon = 0.9883839817416761;
    msg.z = 0.5954575128299657;
    msg.z_units = 38U;
    msg.radius = 0.5956342976908506;
    msg.duration = 15956U;
    msg.speed = 0.8553049081356616;
    msg.speed_units = 215U;
    msg.popup_period = 25850U;
    msg.popup_duration = 46176U;
    msg.flags = 212U;
    msg.custom.assign("IYCZSEHOKHJCLGLUMBQFIFBXXMVUGEFWWLNDALLZFPBSKMPCQGJVUJLKITDQCKTNZTMZUEWJFORAKLWEUDQPYVNSRVQBXBKANCSQRESZOEEPYOJDTFBTLXYICHMGJBMWVOCGAQNVWQ");

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
    msg.setTimeStamp(0.05455961512232532);
    msg.setSource(29518U);
    msg.setSourceEntity(186U);
    msg.setDestination(15815U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.8995435247059164;
    msg.lon = 0.8472318467601374;
    msg.z = 0.7463957077815286;
    msg.z_units = 26U;
    msg.radius = 0.7261041800358554;
    msg.duration = 9756U;
    msg.speed = 0.9644339771194494;
    msg.speed_units = 202U;
    msg.popup_period = 14657U;
    msg.popup_duration = 19180U;
    msg.flags = 178U;
    msg.custom.assign("SBXPMTMTRXWJBMWFQMKLACCZRUPCPZMPGHGNNISCGIQVSNLRH");

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
    msg.setTimeStamp(0.8732218240840076);
    msg.setSource(21532U);
    msg.setSourceEntity(155U);
    msg.setDestination(41906U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.5908830576623924;
    msg.lon = 0.32980114926135873;
    msg.z = 0.30741087806645295;
    msg.z_units = 117U;
    msg.radius = 0.9091172532349261;
    msg.duration = 31815U;
    msg.speed = 0.8219672687778566;
    msg.speed_units = 210U;
    msg.popup_period = 18524U;
    msg.popup_duration = 25141U;
    msg.flags = 106U;
    msg.custom.assign("ILPVQSIGZHQMNJACUBSZTR");

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
    msg.setTimeStamp(0.40128475821993015);
    msg.setSource(46532U);
    msg.setSourceEntity(94U);
    msg.setDestination(56000U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.5189298044107358);
    msg.setSource(62013U);
    msg.setSourceEntity(91U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.9580770027173777);
    msg.setSource(37515U);
    msg.setSourceEntity(254U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.4046583002618982);
    msg.setSource(64930U);
    msg.setSourceEntity(69U);
    msg.setDestination(35771U);
    msg.setDestinationEntity(76U);
    msg.timeout = 51643U;
    msg.lat = 0.510885450374651;
    msg.lon = 0.8456762147582292;
    msg.z = 0.16244651718412895;
    msg.z_units = 240U;
    msg.speed = 0.26735176643819314;
    msg.speed_units = 106U;
    msg.bearing = 0.025111536016367286;
    msg.width = 0.4713070649431985;
    msg.direction = 6U;
    msg.custom.assign("BPVNGWCWSETJHMRADLRDPDSYVIYJWUSDAUXKIEINESIOLCBGGHQHOORIURYEGHAGZOMMIVFOWESWBXFJBTVQIAFHAWYORGBBZLXZRYLUNEAAAIXUKSFJFXTFUQRNZFFXJZYKQAHPIULQNTQNFBSCYHZGYRCIPPJTKTEQRQJGGZJKTLVTBVVPZEJAPJECOHZBOGZLUKNRQCHKD");

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
    msg.setTimeStamp(0.5799649093473651);
    msg.setSource(64047U);
    msg.setSourceEntity(200U);
    msg.setDestination(43861U);
    msg.setDestinationEntity(35U);
    msg.timeout = 11037U;
    msg.lat = 0.7445210197825468;
    msg.lon = 0.5799501816709698;
    msg.z = 0.020472375995850944;
    msg.z_units = 19U;
    msg.speed = 0.5936157589049923;
    msg.speed_units = 164U;
    msg.bearing = 0.7112382620471742;
    msg.width = 0.7949589391821208;
    msg.direction = 124U;
    msg.custom.assign("BEGQJQCMZKKWFUNAZVIYNJWFWSZPHRHCGZHEXLRVNIUVLOOSYUPCLECQBDOSTGPWAXBVICMCVQJED");

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
    msg.setTimeStamp(0.2879200142343348);
    msg.setSource(8318U);
    msg.setSourceEntity(126U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(211U);
    msg.timeout = 19979U;
    msg.lat = 0.5186186276159673;
    msg.lon = 0.1964671301711831;
    msg.z = 0.5648459421446741;
    msg.z_units = 134U;
    msg.speed = 0.27834989350510553;
    msg.speed_units = 126U;
    msg.bearing = 0.16833581097049577;
    msg.width = 0.6075984163076732;
    msg.direction = 65U;
    msg.custom.assign("RTZHLSRBLLPUPWOXPXPUOUWQTLPVIKXYBB");

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
    msg.setTimeStamp(0.19294225854681946);
    msg.setSource(5444U);
    msg.setSourceEntity(80U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(177U);
    msg.op_mode = 134U;
    msg.error_count = 248U;
    msg.error_ents.assign("FDGYFRUJPQZLQGWPDXSXYTQFEADSILOCSVWCMJSPJBXSNMBOMMLZUVATOQZGINGORNJZQUTKKSWZUFLAFIQNIWNCVCEAYGHCYVEMWUWGIQACCGIOVNYWIRRPUHPJAIBXRTHOFZWPHDPJXHTVTMKGNOKFXFZVPIDYBPEMDZHXEWNGRHRSOCKXNXDSGOEBALHQBKKLMUURLJTLDKYDEZYEBSRIJCFJTQASZUEBMHCJVNBMYLRLADYPKHFTOQ");
    msg.maneuver_type = 26474U;
    msg.maneuver_stime = 0.5033014095621081;
    msg.maneuver_eta = 43463U;
    msg.control_loops = 1116114618U;
    msg.flags = 168U;
    msg.last_error.assign("ZCCMUBZPGMVQPWIQSMVBRCRDOZULKBZUYRGUMTETBYFXHFPNQSKJOJQPHLFVEAFFGAIVAXGQDMAACWCQLHHKMWYJUZNJNBDMZDREAGXSTNBYTAFYEILPFUJWQYOLSKISXVLNLKUIZYTIOIJWBULWYROYNGJXHKMIXOXXVDFHSLGNBOQGLOTHQFCESXAHENWCIRHBMTAPBEGRPM");
    msg.last_error_time = 0.5397730035802052;

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
    msg.setTimeStamp(0.548872131294471);
    msg.setSource(38131U);
    msg.setSourceEntity(79U);
    msg.setDestination(58970U);
    msg.setDestinationEntity(212U);
    msg.op_mode = 18U;
    msg.error_count = 178U;
    msg.error_ents.assign("KTMCXRGNYIDVFXSIVKNRLCQOSBPKDDTRBLONURMMUYARSOCQWEGVCYFAGSCBLEYDWEVSBOIGNGNDXTMHFQDQFQZQPYQJWPEMOSVLIFSTNHXDCJYWWVUEUDHYOHWOZUJFBOZAZBKYWANAEUSMKOUCEGD");
    msg.maneuver_type = 47952U;
    msg.maneuver_stime = 0.30867776926266166;
    msg.maneuver_eta = 10232U;
    msg.control_loops = 1564265528U;
    msg.flags = 5U;
    msg.last_error.assign("YUZBYFSEASIJHUMKJSTTJLNANYKODCMDLFWFYINCVQLJCBHIIQELBQXAJQMWRJBHLAYMBOCPODPRZERZGIEFHHQETUXKLKMWAKODASPKKZOPXZVIUEGTEWTIFVTJRGFQGSUURXTAVODVHSCBJHNNPNBA");
    msg.last_error_time = 0.07342855934733172;

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
    msg.setTimeStamp(0.22848003063909794);
    msg.setSource(43279U);
    msg.setSourceEntity(236U);
    msg.setDestination(41359U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 239U;
    msg.error_count = 114U;
    msg.error_ents.assign("INZZQPWAMVWNOLNGSKSQCIPDEWURLXYNZIDLUCJKSGTMMSSHTQTBCSOJWGRQKKZGQGHPFMFD");
    msg.maneuver_type = 26116U;
    msg.maneuver_stime = 0.03941078577517865;
    msg.maneuver_eta = 28109U;
    msg.control_loops = 4266045051U;
    msg.flags = 176U;
    msg.last_error.assign("CZTFETGGZKWRHWHDYHIVIRXQPYZUXEEJDNIBUMRNVDHKKYFJGPAGASQCHYCVHQWGPNUPDANYOAZLLYHWBQQTBCGMNSSOIDSFXACCTXWFCDQWTIILDSCVLDUAAEJVJRQBAFWJLKLKPOM");
    msg.last_error_time = 0.19415879902644662;

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
    msg.setTimeStamp(0.9759161758445185);
    msg.setSource(37444U);
    msg.setSourceEntity(45U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(129U);
    msg.type = 146U;
    msg.request_id = 43460U;
    msg.command = 239U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 58531U;
    tmp_msg_0.lat = 0.9184750408098736;
    tmp_msg_0.lon = 0.2727863698451557;
    tmp_msg_0.z = 0.13706932905356373;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.speed = 0.18163717619465947;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.bearing = 0.2647993522846346;
    tmp_msg_0.width = 0.41344937723333053;
    tmp_msg_0.direction = 253U;
    tmp_msg_0.custom.assign("NVMJFBMBGSTQNJBYPFYAQDAKIDXIMZZDMBVLSTRQTVMAEHDUJXZEVJXUATCDJUXLKDXREZZGEFCZTFTEHMNBLGLBOBUGPIOHGRWFEWANRFJHQNUWVIKPIKLOWXRTWQDPKMZVYSCTOHDOAJACJCLAQQRGYSTKKZGYCSPPGTWZEXHQVIXVIGBFBHPUYPSUOXRFAHRZLGBOQCJPDIVUCMIJESUDYSKSYMVFP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62984U;
    msg.info.assign("WZEXIFHWUUYNCAPFMUDKXYTEWJHVTBLGOSEBYAVJJKVUPFSXNJYYHAGZFZPUVGWIXHEOGDZMDTLPICZOSJVQRRCFEOMNCGFAKUDQ");

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
    msg.setTimeStamp(0.30422357518022325);
    msg.setSource(58862U);
    msg.setSourceEntity(249U);
    msg.setDestination(40613U);
    msg.setDestinationEntity(184U);
    msg.type = 13U;
    msg.request_id = 46229U;
    msg.command = 101U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 46275U;
    tmp_msg_0.name.assign("LSLENPTBNWXUBUOCALGUWWWRRJWVGDVAIVZZXAVCTZQXKCHCMKIJESFTHGKICCHAWRTMPBQCNPPZEZPQFQNMRLOTNWPSUYMRQRTXZMBJAPKGDIHREFOXUEWLMJQID");
    tmp_msg_0.custom.assign("ZFIPTBOYQNBQEYWCCEGMFVHYITTMRGTLEMDWYOOXNZWOCHNWUKGYYUTJIMBWRCBRANLHNEKXULESWJLXFLGYINLTZQKVFSDFXNRJGNKNWSPCATOAETMRYDAXPZMFSBWDVIGDQGDAOHOCKUVDBTSIJKHUHRLMCVGTZUVPSPVFOCLPRKJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55744U;
    msg.info.assign("GJAOKRWLKIJSMMNDCBNULRORISSWRWTQNTBHRKBGNNXBEHXFVDHUYYGSESDRIHVFOKQZQSMUDFPYXAJIMVLWOCCZLGXRYCEGJFVZDBHMWNTYCPWAMOPHJDBJQEYASVSXHAQFGEJIXCIUUYCKSXQGVENCZWKHPDJKIZAKXBIYDTVKFXRPVZLFPQMPLWKFBTRPHNZJPOGEVVXFT");

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
    msg.setTimeStamp(0.4703403168234854);
    msg.setSource(31074U);
    msg.setSourceEntity(232U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(246U);
    msg.type = 215U;
    msg.request_id = 61580U;
    msg.command = 192U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.500885645784405;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 21335U;
    tmp_msg_0.custom.assign("MSLXIPZUCHAURJUVVGSERHTYYYBINRVFDWKZNMOFBLGJOPVRWJJMVHIYHQMDOBGARLZCMDDHPNBDGLERQQHFXXZQOEF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59305U;
    msg.info.assign("SPDRSPMULOTUBGVOOOUOXGVOLSCCUIPPPNLWCYBDRDABZHSAMIIYRDJMBZYECBXCJVDNSUZRHHQIGKXENHMUZJVKCSUYKNEWLIKJQIFCZUCHFWADMRIIFOYIVYDEXFTNTERQVX");

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
    msg.setTimeStamp(0.15842876770968284);
    msg.setSource(344U);
    msg.setSourceEntity(201U);
    msg.setDestination(26410U);
    msg.setDestinationEntity(254U);
    msg.command = 27U;
    msg.entities.assign("XZRPJTMKGUBPBNQMPJDYDAXUJTPHTSZOFAUIOAUQIZWPMAKREQLXDHFJMTNMQVAYVWPRLZ");

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
    msg.setTimeStamp(0.7883356611375354);
    msg.setSource(32535U);
    msg.setSourceEntity(39U);
    msg.setDestination(51870U);
    msg.setDestinationEntity(38U);
    msg.command = 3U;
    msg.entities.assign("PDDONSLTFQMQFGWOEZMADALPLMVUCRAJIKLBBOFXGKCIFNRBYGHTTQDEMLHYNVMRATRJRGORPYPEDJVGPJJTJJOZIDALXGYUIHHMMOUKDRSWCUOUWHIWHVBYEIZORTYPCEVLMZFVQWXBAZKANGDWZQBGTPDCGFHIBCZFUBBMYSNTSSXNNLENMVPEOQCXJWUSEXZKZHXAPICQCQPSNUYXSJEKYVTRKGIIBOKDCWETANZRFWKHASUYFHQLJFKVQW");

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
    msg.setTimeStamp(0.923738893221936);
    msg.setSource(51676U);
    msg.setSourceEntity(68U);
    msg.setDestination(28638U);
    msg.setDestinationEntity(208U);
    msg.command = 163U;
    msg.entities.assign("JENVMAUOMPYQSESZPYQXFMTARIKRMXVRDSXSQCOAIJOCASWPYHBLUWKPHINKRRCIF");

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
    msg.setTimeStamp(0.1435862972765113);
    msg.setSource(48508U);
    msg.setSourceEntity(215U);
    msg.setDestination(31113U);
    msg.setDestinationEntity(212U);
    msg.mcount = 81U;
    msg.mnames.assign("BTAHYKLTNYOCMSBJUXJTGOOPLNMTZOGXFVBKVKXEJDHMLHFLFLYPCTWMLWQUNONIHEIINZZXWGSUFXNCUAIUFLTRPQOZTGWJFWRJRUEZIEXJCHADGHSUKQPDMVDBKADYBESCEKYHIWGYGDQGTWZKDEKMBIIQECXTVWAYSPANNBBZOSCMUJARGQVJYZCWVAZRMLLTZRQVDVPQSPFKOSSEUSVURINCKRQM");
    msg.ecount = 54U;
    msg.enames.assign("THBINXFFSROGOLXZTCRYHZTZUKFQAEBOVFKZBVAEERLWAJLNMEEUVQEVEYSNMCAYPSWKBKYVKZSBRHXSGTBYGPDNZMJHGMWYPRKKMHGOCJLKUSCNXYUVVLPITWAWIDFBXZOFEDBWQJIQHCZFMMINNPAJNRMXCMDMBUDUZQQFYUCRATPSPIBWLLTPAAJONLXNIRDHSVOECUXGLUFVHWDGYUJSSXTJILZJGFGGCRAQPCIOQHTDRHXJPD");
    msg.ccount = 249U;
    msg.cnames.assign("SIJINMZFKIUJWLQRVFNSASEWBTPBXHELOECHHYHVUMQNARCJCHDJBFATCIGOUNQBKRSNLHXGJHGOTZSGWVCYSVYLOKUTMAZBEZKKXPXWTDVFZHUADQXIOGMRQWWMXWZLOFDJNEDPXZYGQTCRMEHYUPSZZPINL");
    msg.last_error.assign("HPQTAEMFGEMDZQKIZXQXEGENNMDVCHKUYSKWVGYOFBUAVYPCCYAUHKOGLNXTTISGUAJYVD");
    msg.last_error_time = 0.3655536005884622;

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
    msg.setTimeStamp(0.8401773199268815);
    msg.setSource(30436U);
    msg.setSourceEntity(179U);
    msg.setDestination(21692U);
    msg.setDestinationEntity(32U);
    msg.mcount = 33U;
    msg.mnames.assign("UIIVIFPVBRJDHJMCGLQNPNUBVRETLETFZCRCNITJIDLBBCLOYWAMSVKQOUYBJAHAEJADAEKGILESVSVJXQRBPSKFEHGPZXOTOOCJWDWTEAKGMCYLOLZYQSVZAMWODKSIAGTTJFXEFBUHKWKYSNYMHJSDHHFZUVYQYBQPBFZSBUURGSYLZDXNFWHCWZCPMAXQMXROHRAPLNZNRWUJPUXGFGWKW");
    msg.ecount = 228U;
    msg.enames.assign("YKIABWKDSQSVEKHVSHBQCDKFZJSMYRQXQLANX");
    msg.ccount = 6U;
    msg.cnames.assign("DMXFKOLTPBXPWIWKKPLUYKTRSAXQVQSQRFBGZDHZHQKJGCEHWPIRUYBMNILSTEAAXFYOYRQVOVLDWJLQDRAOEZURKUNFLCFDHZCPGUDMXXJIQPIVWEWVCSIKBPQUNSHFNEWRVZSZBDEBLDSXNVNLZJOJWVUTWKEPMTJCYRZCBOGGYTVNXMPEJMAKGGHNTFIMLGJIAMDC");
    msg.last_error.assign("ZAQQXISDEA");
    msg.last_error_time = 0.38916408038673467;

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
    msg.setTimeStamp(0.010008593657241938);
    msg.setSource(13360U);
    msg.setSourceEntity(120U);
    msg.setDestination(31863U);
    msg.setDestinationEntity(53U);
    msg.mcount = 188U;
    msg.mnames.assign("XHFHHIIPTHIFMYBEYDKKMQTQYPLPXMZPUOJOKAKSSOVDZLBDCJKUNFAXAKLKSWPSKDWIOAUTNRLNAQVEMVCNOOZWDFMBKCRPRQAEYYTGTBBXCJVXRQEYSZXQIIGEEZY");
    msg.ecount = 224U;
    msg.enames.assign("FFVHFYYLKLQIOGNSAJPTWPORCWCCQPEUAXGFGUSOJBNCZPOHVMPXEHMNYXTVATFZZJDMHBKILYAOAMSWVIIMNFTIWUDXVJMUJODZNDQURSHHGIJEXQYTCNTGAJQTOKADMTRCSYXYLKGLRWRFWZMEDZPSNPD");
    msg.ccount = 68U;
    msg.cnames.assign("MOCPMTEVJLLWEFRASCANJKIPJSDLQBRYREPBDTFQMYHTAELRKQUNHCMTESNKOOGEQEWTYWQPDAKFVNGJCZSLZXJ");
    msg.last_error.assign("VDDQYKFMLHQPZVFUHLVALBIUKJRCCOSPFHYYEHYSEGJWMDPLEGORYONBNWJFIKXGXFGCLOBWSSVKHFIUEMZWXUZMBGLANPAPJTJEDTNSRIDBVPZJHBQNGYXZBTCSIOAONMJQPLKDFYQKWITGQ");
    msg.last_error_time = 0.18943389534750465;

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
    msg.setTimeStamp(0.8535895617772262);
    msg.setSource(4838U);
    msg.setSourceEntity(177U);
    msg.setDestination(57050U);
    msg.setDestinationEntity(85U);
    msg.mask = 63U;
    msg.max_depth = 0.5631146489431014;
    msg.min_altitude = 0.7759012342314179;
    msg.max_altitude = 0.9518994622822636;
    msg.min_speed = 0.20453079086625536;
    msg.max_speed = 0.9894759903093933;
    msg.max_vrate = 0.8136015333647499;
    msg.lat = 0.4679368761517574;
    msg.lon = 0.22646545066632107;
    msg.orientation = 0.21653883363694293;
    msg.width = 0.7915399799287661;
    msg.length = 0.04235957914064559;

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
    msg.setTimeStamp(0.2712022395326179);
    msg.setSource(8349U);
    msg.setSourceEntity(122U);
    msg.setDestination(63236U);
    msg.setDestinationEntity(12U);
    msg.mask = 165U;
    msg.max_depth = 0.9454437016035695;
    msg.min_altitude = 0.37951779498364246;
    msg.max_altitude = 0.47030214090512845;
    msg.min_speed = 0.23707846949063804;
    msg.max_speed = 0.8243042240020244;
    msg.max_vrate = 0.051517465457545764;
    msg.lat = 0.6218049940782658;
    msg.lon = 0.9799780234115245;
    msg.orientation = 0.12670178435570367;
    msg.width = 0.453239958501058;
    msg.length = 0.07530329615194409;

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
    msg.setTimeStamp(0.5651068065973451);
    msg.setSource(28300U);
    msg.setSourceEntity(133U);
    msg.setDestination(38764U);
    msg.setDestinationEntity(56U);
    msg.mask = 149U;
    msg.max_depth = 0.2146743971895011;
    msg.min_altitude = 0.20472871103963186;
    msg.max_altitude = 0.22765523064891158;
    msg.min_speed = 0.945950213207447;
    msg.max_speed = 0.5448362848573369;
    msg.max_vrate = 0.24907451392596514;
    msg.lat = 0.20589680208325167;
    msg.lon = 0.7339102495560264;
    msg.orientation = 0.8250102055198049;
    msg.width = 0.9034121724467076;
    msg.length = 0.9906470957392823;

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
    msg.setTimeStamp(0.03023889838318261);
    msg.setSource(23337U);
    msg.setSourceEntity(138U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.74445619010168);
    msg.setSource(45707U);
    msg.setSourceEntity(247U);
    msg.setDestination(8189U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.5314107909357362);
    msg.setSource(54011U);
    msg.setSourceEntity(215U);
    msg.setDestination(58074U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.17356646485405147);
    msg.setSource(42847U);
    msg.setSourceEntity(216U);
    msg.setDestination(25747U);
    msg.setDestinationEntity(222U);
    msg.duration = 65182U;

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
    msg.setTimeStamp(0.404425411470968);
    msg.setSource(26476U);
    msg.setSourceEntity(244U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(68U);
    msg.duration = 24500U;

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
    msg.setTimeStamp(0.6734684492219387);
    msg.setSource(38012U);
    msg.setSourceEntity(29U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(32U);
    msg.duration = 23294U;

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
    msg.setTimeStamp(0.24005983089500293);
    msg.setSource(13125U);
    msg.setSourceEntity(72U);
    msg.setDestination(2112U);
    msg.setDestinationEntity(97U);
    msg.enable = 126U;
    msg.mask = 2070182521U;
    msg.scope_ref = 3709553792U;

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
    msg.setTimeStamp(0.7490533287875936);
    msg.setSource(49349U);
    msg.setSourceEntity(185U);
    msg.setDestination(30586U);
    msg.setDestinationEntity(131U);
    msg.enable = 183U;
    msg.mask = 3877643259U;
    msg.scope_ref = 923879113U;

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
    msg.setTimeStamp(0.4688661918016602);
    msg.setSource(49739U);
    msg.setSourceEntity(14U);
    msg.setDestination(53656U);
    msg.setDestinationEntity(152U);
    msg.enable = 14U;
    msg.mask = 3326351639U;
    msg.scope_ref = 2614158197U;

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
    msg.setTimeStamp(0.5985300352254954);
    msg.setSource(57813U);
    msg.setSourceEntity(42U);
    msg.setDestination(4334U);
    msg.setDestinationEntity(154U);
    msg.medium = 219U;

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
    msg.setTimeStamp(0.15550767632884666);
    msg.setSource(15415U);
    msg.setSourceEntity(145U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(36U);
    msg.medium = 58U;

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
    msg.setTimeStamp(0.6213613512136199);
    msg.setSource(19246U);
    msg.setSourceEntity(5U);
    msg.setDestination(40373U);
    msg.setDestinationEntity(30U);
    msg.medium = 162U;

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
    msg.setTimeStamp(0.3911937430243063);
    msg.setSource(52084U);
    msg.setSourceEntity(9U);
    msg.setDestination(15190U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9733488208464589;
    msg.type = 24U;

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
    msg.setTimeStamp(0.31368089371302255);
    msg.setSource(50564U);
    msg.setSourceEntity(217U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(100U);
    msg.value = 0.2663901981436736;
    msg.type = 33U;

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
    msg.setTimeStamp(0.2832133613035872);
    msg.setSource(57895U);
    msg.setSourceEntity(14U);
    msg.setDestination(61710U);
    msg.setDestinationEntity(120U);
    msg.value = 0.6746636702842849;
    msg.type = 250U;

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
    msg.setTimeStamp(0.23088622129238745);
    msg.setSource(13245U);
    msg.setSourceEntity(2U);
    msg.setDestination(38030U);
    msg.setDestinationEntity(72U);
    msg.possimerr = 0.1436804504351824;
    msg.converg = 0.49793459464965173;
    msg.turbulence = 0.6331614674833848;
    msg.possimmon = 35U;
    msg.commmon = 36U;
    msg.convergmon = 239U;

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
    msg.setTimeStamp(0.9935032034486887);
    msg.setSource(36029U);
    msg.setSourceEntity(46U);
    msg.setDestination(33792U);
    msg.setDestinationEntity(74U);
    msg.possimerr = 0.8753412658725553;
    msg.converg = 0.8729849750442044;
    msg.turbulence = 0.6022701768090396;
    msg.possimmon = 172U;
    msg.commmon = 200U;
    msg.convergmon = 127U;

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
    msg.setTimeStamp(0.29868426687130545);
    msg.setSource(29518U);
    msg.setSourceEntity(106U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(164U);
    msg.possimerr = 0.15483149070466473;
    msg.converg = 0.9502763080545562;
    msg.turbulence = 0.7819929099690579;
    msg.possimmon = 115U;
    msg.commmon = 221U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.47407677183114494);
    msg.setSource(43891U);
    msg.setSourceEntity(153U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(110U);
    msg.autonomy = 143U;
    msg.mode.assign("LOXPEERDWWRPNSFNRJCDAUKOTVVSBUNHNAHFCLMALZEXGGHPBAWPJ");

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
    msg.setTimeStamp(0.11505585468611401);
    msg.setSource(22561U);
    msg.setSourceEntity(243U);
    msg.setDestination(61207U);
    msg.setDestinationEntity(53U);
    msg.autonomy = 2U;
    msg.mode.assign("DEXPMLCRGNZLDZZTRFQLSNIVJSVTKIKJLOESEVDYQGIBLLRSBIEEAVHIUIOMCNWOHVPNGSSSFMQBPIKAYMTEKWSEDXBZKHUNODTVAHKHGKIIWWOMHBRXTDQMQGAPPQBTOFWRNRCPRZADUYDDZKUUQVJZYNBYQGJULZUROOHTCOV");

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
    msg.setTimeStamp(0.9179585975754004);
    msg.setSource(24741U);
    msg.setSourceEntity(62U);
    msg.setDestination(8931U);
    msg.setDestinationEntity(206U);
    msg.autonomy = 159U;
    msg.mode.assign("TXNGGUDJDQPOWBMUMQEKECEWDHLZVFLSZSAMLNNXOSHTSVEGRYBXJTJXENMQCLVQPEXUGGRUQIABSJYKHYIEDPAQCTFCZAEDWGWGNQRFNMDYUVIJLJUTHKSKZILRDJAKWH");

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
    msg.setTimeStamp(0.5984422684713403);
    msg.setSource(42817U);
    msg.setSourceEntity(20U);
    msg.setDestination(49823U);
    msg.setDestinationEntity(71U);
    msg.type = 10U;
    msg.op = 251U;
    msg.possimerr = 0.4420456666018806;
    msg.converg = 0.7814733308687587;
    msg.turbulence = 0.602463949941271;
    msg.possimmon = 40U;
    msg.commmon = 244U;
    msg.convergmon = 205U;

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
    msg.setTimeStamp(0.3144856296139542);
    msg.setSource(56536U);
    msg.setSourceEntity(195U);
    msg.setDestination(30033U);
    msg.setDestinationEntity(145U);
    msg.type = 58U;
    msg.op = 129U;
    msg.possimerr = 0.10552989700062021;
    msg.converg = 0.47556696275410304;
    msg.turbulence = 0.24346879543341293;
    msg.possimmon = 99U;
    msg.commmon = 140U;
    msg.convergmon = 134U;

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
    msg.setTimeStamp(0.39042856718446584);
    msg.setSource(53648U);
    msg.setSourceEntity(7U);
    msg.setDestination(57475U);
    msg.setDestinationEntity(187U);
    msg.type = 203U;
    msg.op = 16U;
    msg.possimerr = 0.45162106772292454;
    msg.converg = 0.06697641159945489;
    msg.turbulence = 0.9545729100391808;
    msg.possimmon = 153U;
    msg.commmon = 112U;
    msg.convergmon = 113U;

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
    msg.setTimeStamp(0.14695357273437393);
    msg.setSource(20539U);
    msg.setSourceEntity(63U);
    msg.setDestination(14687U);
    msg.setDestinationEntity(34U);
    msg.op = 97U;
    msg.comm_interface = 187U;
    msg.period = 59272U;
    msg.sys_dst.assign("YHGRXLTMRLJYZOYZJMATZFDHJZSEZSBMXOELDNJATTEACDDTWLNHUJVCYKMBNYSCNGRFZAFSEQQMHZGFWOKMPKEBHYLXMUSRQDGILWAWCNK");

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
    msg.setTimeStamp(0.8664185516633066);
    msg.setSource(13034U);
    msg.setSourceEntity(218U);
    msg.setDestination(16531U);
    msg.setDestinationEntity(123U);
    msg.op = 13U;
    msg.comm_interface = 77U;
    msg.period = 51775U;
    msg.sys_dst.assign("QBZZANDPXLHOGRDAUFAWQBMEQBGVGCVLFQHINZEKXLCCJORPXYJPAIFUPLWZYRHLNBJLEJPIJPCKGWSMZNYERCCVXV");

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
    msg.setTimeStamp(0.3826090824347058);
    msg.setSource(51822U);
    msg.setSourceEntity(245U);
    msg.setDestination(51805U);
    msg.setDestinationEntity(161U);
    msg.op = 131U;
    msg.comm_interface = 83U;
    msg.period = 63022U;
    msg.sys_dst.assign("KPALLTAPMICLVOYJIRYVTTQZALNVCKPZVUNRXOOYPZCEHBMHHSQVQDWRPAFXQOQEGFPFJTSWZAITTXXGECVVXGYMLWEMQIJSWGDUKRFNHWCQPRPBBSJFBDSMINRDJGLSPCWEMZDMFIARDOMTFHDMBBXIEKXCPHRDSZELEICROQVBQTSXVWBHFMJ");

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
    msg.setTimeStamp(0.27659829481955955);
    msg.setSource(35641U);
    msg.setSourceEntity(251U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(138U);
    msg.stime = 1816655668U;
    msg.latitude = 0.3039603805161679;
    msg.longitude = 0.860736281949644;
    msg.altitude = 37915U;
    msg.depth = 44612U;
    msg.heading = 27159U;
    msg.speed = -9799;
    msg.fuel = 81;
    msg.exec_state = 4;
    msg.plan_checksum = 10262U;

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
    msg.setTimeStamp(0.7441634126435996);
    msg.setSource(59575U);
    msg.setSourceEntity(82U);
    msg.setDestination(64914U);
    msg.setDestinationEntity(37U);
    msg.stime = 1294297687U;
    msg.latitude = 0.48499822824494665;
    msg.longitude = 0.4666159339862457;
    msg.altitude = 55352U;
    msg.depth = 14223U;
    msg.heading = 52889U;
    msg.speed = -30687;
    msg.fuel = -86;
    msg.exec_state = -39;
    msg.plan_checksum = 33919U;

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
    msg.setTimeStamp(0.762944966136839);
    msg.setSource(29857U);
    msg.setSourceEntity(159U);
    msg.setDestination(20014U);
    msg.setDestinationEntity(61U);
    msg.stime = 2756682872U;
    msg.latitude = 0.6651182120807683;
    msg.longitude = 0.7890412615547812;
    msg.altitude = 20402U;
    msg.depth = 52273U;
    msg.heading = 56113U;
    msg.speed = -4260;
    msg.fuel = -18;
    msg.exec_state = 126;
    msg.plan_checksum = 54585U;

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
    msg.setTimeStamp(0.5146971116265437);
    msg.setSource(46619U);
    msg.setSourceEntity(135U);
    msg.setDestination(3624U);
    msg.setDestinationEntity(178U);
    msg.req_id = 25500U;
    msg.comm_mean = 110U;
    msg.destination.assign("IMUDNCGHQFQOOPPWLEKYEHGSLVVPVORRGLRMGM");
    msg.deadline = 0.030276502160356822;
    msg.range = 0.8164418208658589;
    msg.data_mode = 17U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.35659018087219996;
    tmp_msg_0.x = 0.21623787130329353;
    tmp_msg_0.y = 0.816657296542479;
    tmp_msg_0.z = 0.6838483884610502;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RLPVTMUWGDPNKZMAHWLANCBS");
    const signed char tmp_msg_1[] = {124, 14, -97, 63, -56, -115, 4, 10, 115, -20, 17, 113, -126, 43, -22, -103, -105, 17, 107, -15, -82, 124, 55, -10, 47, -4, -95, -98, 94, 119, -87, 5, -14, -57, 76, -16, 64, -30, 12};
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
    msg.setTimeStamp(0.6468284990165878);
    msg.setSource(33071U);
    msg.setSourceEntity(205U);
    msg.setDestination(10250U);
    msg.setDestinationEntity(92U);
    msg.req_id = 4598U;
    msg.comm_mean = 250U;
    msg.destination.assign("KWDRUCRVHHGUUCFCNJJJBVCBIDBKTSXDCPUISZTKPETMMUJVGBXAEHLDNGUEFEMKRVSRLYGYDGECRULAGHPNBZ");
    msg.deadline = 0.031155519495579154;
    msg.range = 0.7007662114779374;
    msg.data_mode = 252U;
    IMC::QueryTypedEntityParameters tmp_msg_0;
    tmp_msg_0.op = 134U;
    tmp_msg_0.request_id = 2722508526U;
    tmp_msg_0.entity_name.assign("SNFHHVODBRBHZABGUVAJTDREFZMRGNEQTUNPYDTLJITYOUXKCBZPPQMYILLJSAGZCVVFBECSXOXQHZWXAOEWSWIDGNWPCVYJCKLCJIFHVMFMRBMJNRMQWIGLCINGEISICAYWOOMEQIVMVAUDYMFPHJKEKQEPZPHTPOWKRYJRLFBHSFYAALWEHSQUZSDYDBCUUTDSUOKVBZWPTVXTOZLXCXXLUNEFAG");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GLZCDRNAGOTUXMHDZTMJFMBLOEUKCDFWPAEYVRBFOWWXPXYJZZXMCIBLJDFTVITSZKOEOZMAPHRHLHWCWYGTKJYOECMNMUVQIXYBAYRJSZCYYZQBPIEIHKAUEKGDIGTVVRFTQRPHSJPAQKVFFOBQLDMFIVZODBCILXJNNRSWQUJNCJKRVWHBVUQAALXYKJGUNZXQEBEKDOPGDHSSUCPOTULMQRWNNAIYHLMXBNTXGPLCAEFUS");
    const signed char tmp_msg_1[] = {-10, 14, 58, -63, 7, 55, -34, -7, 28, 12, 118, 120, -124, -19, 96, -37, 2, 42, -67, 1, 93, 25, -117, 45, 80, 91, -114, 66, 99, 77, -116, 117, -122, -36, -127, -112, 89, -17, -105, 20, 42, 116, 8, -96, 48, 92, -16};
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
    msg.setTimeStamp(0.5964819657479667);
    msg.setSource(60031U);
    msg.setSourceEntity(44U);
    msg.setDestination(27868U);
    msg.setDestinationEntity(99U);
    msg.req_id = 856U;
    msg.comm_mean = 10U;
    msg.destination.assign("KUTDTGJFPMQANAJXKELHMBCYVOKTXTPULRORSAMDWPRFBVCGDEIFUKGLIIXWQQAJVKYABYHTYPFRCOBTHUFHQIQNWWXEPNRWGWFSZVTMQCYXXDUSZKTAWNMFIS");
    msg.deadline = 0.3365005386408336;
    msg.range = 0.36685898239315917;
    msg.data_mode = 21U;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 49U;
    tmp_msg_0.ncells = 12U;
    tmp_msg_0.coord_sys = 92U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CANWTDOWTJOSORSXGCBUSRLWDWAQCTBHIPVVRHQMYRPMAKMUPTPVNFZYJKHFRZWJKHXBKBOZCUJLHKGWFB");
    const signed char tmp_msg_1[] = {13, -31, 79, -46, -68, 72, 28, -108, 73, -127, -50, 49, 118, 111, -127, -119, 115, 115, 98, 48, 100, 89, -57, 125, -68, 11, -85, -50, -63, 69, -96, -124, 120, 2, -92, 24, -58, -31, 34, 52, -14, 97, 53, 124, -73, -36, 24, 14, 60, -51, -79, 50, 123, -67, 87, -18, 50, 97, -21, 122, -47, -54, 31, 111, 59, -37, -126, -12, -116, 32, -16, -46, -28, -39, 44, -19, 57, -109, -45, -110, 58, -42, 83, -123, -31, -38, -119, -109, -19, -11, -48, 29, -57, 73, -34, 8, 80, 67, 14, 29, -51, -85, 56, 121, -94, 1, -123, -66, -57, -106, -89, 64, -40, 28, -42, -93, 104, 119, 46, -49, 30, -2, 94, 57, -67, 58, -107, -24, 69, 47, 109, 98, 54, 17, 66, 75, -46, 16, 38, 109, 24, 41, -31, -56, -12, 61, 86, 42, 110, -96, 15, -10, -25};
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
    msg.setTimeStamp(0.42668529661702603);
    msg.setSource(53721U);
    msg.setSourceEntity(33U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(61U);
    msg.req_id = 26125U;
    msg.status = 20U;
    msg.range = 0.372262044632924;
    msg.info.assign("OKLWWAQTDOFOQMSXILDMVNAVECEEXBZDURZBBONIPWSFECYWNELVRPBGLNOLVFPDNGYNXLHQGBGUJMPRXVXCTUBTASEUMRZUPVXRAEYYYGOKXAZJZGFEYDHJUGHENIYAEXIWGWJJXQJLDATMTWKFOCLUOTVIHJQFZQMYGIKCH");

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
    msg.setTimeStamp(0.05372152070370351);
    msg.setSource(32259U);
    msg.setSourceEntity(187U);
    msg.setDestination(52803U);
    msg.setDestinationEntity(29U);
    msg.req_id = 28161U;
    msg.status = 35U;
    msg.range = 0.6220293062199558;
    msg.info.assign("RIQFTXYNNOVHBJJMTGSWDJJUAPUOCGIBBHMWBARQTXQEVLBFMOJSRWGMASUDFINHRNOTMCWPCGXJVUQTYZGOFTOVZDMGACJWIPRRPKSHYTAWEIBYXCZJWNTCFCBNIAVMZKULYTSYZHIVPCQGKXJPZMIYLDPFWXS");

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
    msg.setTimeStamp(0.03917318335513553);
    msg.setSource(26701U);
    msg.setSourceEntity(15U);
    msg.setDestination(63877U);
    msg.setDestinationEntity(67U);
    msg.req_id = 58511U;
    msg.status = 17U;
    msg.range = 0.3636337893230781;
    msg.info.assign("FJJDYWMMUVPCVETIISZRALKKDEVZFMRPOHCMTVDCMLZKKEQWLBVSDWKSVBZKWSPQHSYIJVHXXFTBMUZVEOBUGNIEXGZTEFGHNKQZLLYQWBGYDUMNCNMATQRRQAXMPPLCDCUVWIJOJHHQJYGNDOGPNTRFYKQCAUSZYAGOBFHPLQFFIANNXEOJYIURCHCGYJOKBXTOGJDFALBVDSPINTZWOAPBWHRXXT");

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
    msg.setTimeStamp(0.8394498036385205);
    msg.setSource(2955U);
    msg.setSourceEntity(234U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(224U);
    msg.req_id = 12911U;
    msg.destination.assign("KXPRAYFPBXIKGXFCAYAVCBQENYSOXOJNWEZXKSFGRBPQGFVEGCTVYDHQGQELMTZWZLEBHVTUUBVUXATGJPKHISECCMYOREWIPFMDAJJBPXRMTOIRRQTYHPYUSQSHUYLZMEBQGRHDSDLUOZJTEKALODWNVLIBSZIEDWKNWJMVFTJPKLQRZINVIKNZGDFXWUJVALFYIAHANPYZUSKCWLCKLQAMXXOMSHCWGRZ");
    msg.timeout = 0.2825210754612789;
    msg.sms_text.assign("TOZYWRXTISZWWIPQSXQESLSGRUCHQPDBBFPHUECCJGXVNISPUJTINNFEZRZVWODWJWAPLCABAKGOONIUHLATANDRYDGLFRCJVMUKGQBNVHHFOGJFCTATWFHHFMTZBUEQMOIFDJTZTSSKXECEBABLVCYNYJRUMYJO");

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
    msg.setTimeStamp(0.9178835758180771);
    msg.setSource(2365U);
    msg.setSourceEntity(223U);
    msg.setDestination(19399U);
    msg.setDestinationEntity(62U);
    msg.req_id = 55893U;
    msg.destination.assign("CHUSWCOMHGAZAFMNJRVJBEFGXHRPYHFLECWOHNWUPHZCZQNFBEIIYLEAUSEKTRPXUJMJLCDXDBPAYGQRIGTPZMJIZDFTLIVWRVQCJNSNEOWCUQTWOEVNBNJYAZDILGXGETHBKSZXYOBOYRALPKDDXNZDRIFVMPBTYHAOKGJBAVQTIKLZJOKDOCCZSTYEGMPFWKXNTYUXTRISDWSMUENSWFAVAFPQVPIKHHMKB");
    msg.timeout = 0.5862294264610647;
    msg.sms_text.assign("TSILTRFOFHVYXDSACENRRXUEOABXZQKKIPZGYIKRQIQJQENAH");

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
    msg.setTimeStamp(0.03471650864189191);
    msg.setSource(8308U);
    msg.setSourceEntity(50U);
    msg.setDestination(47048U);
    msg.setDestinationEntity(34U);
    msg.req_id = 58208U;
    msg.destination.assign("XRILECOVKMBXNCWPJSOQRYUEUCANZPGOOGGHEYZGMMPOSBVAABIUUDZSIFAKJTBZFPFKICYORKAILTRZKKYJWADTMNVXJPXXLEBUCSUCTDFJQUENKMPXALUGQUJSRBHJPHHBDJWXNHSVHSTPHRWHSMTMDFRUYMCLSGIZNVGVYRKTVWGIZBLFDCFWLGQDJMXJMYYAOKALWHGAWNKNOCCQVQWVLXVRTTIYIBPIBZFYQEESDEWZNQPN");
    msg.timeout = 0.4984959552297594;
    msg.sms_text.assign("RMBGBLNITVGHHKPDNTVVFYAFQHZXBHYEMJDFPECCASFSRFWYUEJYCDGXJTPIQANUGTQXTWWCFFFMADHRYZFNCMTNZGH");

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
    msg.setTimeStamp(0.6776053327125056);
    msg.setSource(14831U);
    msg.setSourceEntity(77U);
    msg.setDestination(30854U);
    msg.setDestinationEntity(150U);
    msg.req_id = 51419U;
    msg.status = 103U;
    msg.info.assign("ZFCLITJGBBMPQVFWTEDMJHJQV");

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
    msg.setTimeStamp(0.11816544482169467);
    msg.setSource(9031U);
    msg.setSourceEntity(64U);
    msg.setDestination(6339U);
    msg.setDestinationEntity(53U);
    msg.req_id = 16238U;
    msg.status = 201U;
    msg.info.assign("WAPTQNBBIOOWXJSCEFDUHKFZKPJZPOECQLLPYJIBYXSZYGKOGRZYOSLVQVULDJXB");

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
    msg.setTimeStamp(0.6549382702392169);
    msg.setSource(7678U);
    msg.setSourceEntity(253U);
    msg.setDestination(9581U);
    msg.setDestinationEntity(197U);
    msg.req_id = 54655U;
    msg.status = 195U;
    msg.info.assign("WUEXZLYKREMOWYSNNDQCQTUZOJIZETJRMJGEXBVLODVPVDUESRKKMPBCASDZQLIROGZAFWHDOCFKRYNQVEFSPVAEHLULFIVGDQPJTXXWJZRMUQQHLGAEMJJXYSCCQYSHMMFAIUGKEIDRCRB");

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
    msg.setTimeStamp(0.9043227533878505);
    msg.setSource(25060U);
    msg.setSourceEntity(238U);
    msg.setDestination(54369U);
    msg.setDestinationEntity(67U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.9307999044944655);
    msg.setSource(8901U);
    msg.setSourceEntity(245U);
    msg.setDestination(54069U);
    msg.setDestinationEntity(231U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.9763527463506951);
    msg.setSource(47135U);
    msg.setSourceEntity(35U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(5U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.03347612194515148);
    msg.setSource(58089U);
    msg.setSourceEntity(114U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(28U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.7024676623540964);
    msg.setSource(57973U);
    msg.setSourceEntity(172U);
    msg.setDestination(51996U);
    msg.setDestinationEntity(24U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.8656304251360859);
    msg.setSource(15429U);
    msg.setSourceEntity(42U);
    msg.setDestination(46566U);
    msg.setDestinationEntity(173U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.5525110284473173);
    msg.setSource(15122U);
    msg.setSourceEntity(51U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(21U);
    msg.req_id = 50614U;
    msg.destination.assign("ORNGTKLXLCVFAAUXQGWGDSJUGEKMURONFZIWAVMOJMOQBYFCIFRCJZIOZWANEXTGYVJMQVKMEEYPV");
    msg.timeout = 0.038075959201730125;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8837074653633326;
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
    msg.setTimeStamp(0.6101697980859826);
    msg.setSource(27496U);
    msg.setSourceEntity(112U);
    msg.setDestination(8289U);
    msg.setDestinationEntity(83U);
    msg.req_id = 23414U;
    msg.destination.assign("MPBSLYBYKPSUIRQQHJLIQBYDOPDYLSVCDVOXZOSHPZXPEJOEOUXOIJUCUENPFUQHSKVXIVJQMGDNDTPBAHIRPIWEQJKYZBMSCC");
    msg.timeout = 0.038178866637012976;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.6751382958808729;
    tmp_msg_0.width = 0.8921939446606209;
    tmp_msg_0.length = 0.8400553636431305;
    tmp_msg_0.bearing = 0.16256825296617605;
    tmp_msg_0.pxl = -30560;
    tmp_msg_0.encoding = 44U;
    const signed char tmp_tmp_msg_0_0[] = {87, -98, -3, 0, -121, 78, -125, 107, 39, 15, -3, -110, -114, -124, -25, 93, -14, -73, 32, 0, -116, 117, 60, 118, -96, 56, -116, 67, -9, 100, -118, 121, 120, 21, -77, 33, -57, 95, 107, -118, -65, -18, 121, 36, 40, 102, 88, -54, -5, -44, -47, -19, -123, 122, -36, -85, 41, 52, -47, 123, 69, -64, 7, -43, -110, 89, 81, -13, -63, 114, -95, 98, 101, -70, -15, 30, 84, 70, 103, 30, -75, -48, -5, -115, 63, -12, -23, -108, 22, -40, -86, 108, -24, -72, 16, 19, 58, -68, -63, 98, -10, 111, -30, -98, -119, -39, -77, -49, -23, 102, -105, -120, 123, 93, -8, 51, 17, 64, 77, -87, -92, 17, 90, -35, 90, -15, 111, 61, -89, -59, 88, 9, 15, -66, -51, 103, 67, -89, -44, -121, 30, 35, 66, 121, -116, 45, 29, -8, -84, -52, -114, -32, 119, 93, 31, -46, -112, 120, -99, 2, -55, 64, 57, 70, 107, -35, -46, -126, -72, 27, -7, 82, 72, 35, 14, -125, 71, -22, 5, -28, -117, -2, 42, 36, 2, -128, 114, -107, 13, -117, 44, -10, -33, 36, 25};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7061345426598232);
    msg.setSource(50059U);
    msg.setSourceEntity(29U);
    msg.setDestination(19210U);
    msg.setDestinationEntity(130U);
    msg.req_id = 56916U;
    msg.destination.assign("JJWLDMRBATRSXEIMUPPQTQWPRHAIVWOXIQTLRKMUSXSJQBC");
    msg.timeout = 0.9119968486568479;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.10150061463141546;
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
    msg.setTimeStamp(0.8128425633120586);
    msg.setSource(35648U);
    msg.setSourceEntity(165U);
    msg.setDestination(53306U);
    msg.setDestinationEntity(17U);
    msg.req_id = 14879U;
    msg.status = 125U;
    msg.info.assign("YMMKDKHEFUHEJLZCWFCJBSXQJLFSPKRACZYGJVYQDAYGQTIOVYQXVZIGIWPRVONSDAZIHFDKHROTMRSDKXSSWNMMUQSTKBKNPBTOVWDYLUTIXLYWGIUGIWRUBENNMHXUIISFLISLGPEFOKRUNHPJZVAZAMCQCVHJGNFZDUPPQJXWQMVWRPQRKBNCEBYWFTJPLAHOEVNPWGMKXFDXEEBALC");

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
    msg.setTimeStamp(0.8726109748156209);
    msg.setSource(25399U);
    msg.setSourceEntity(215U);
    msg.setDestination(1708U);
    msg.setDestinationEntity(47U);
    msg.req_id = 39412U;
    msg.status = 124U;
    msg.info.assign("BUTPVBCIUFDZFHEJVPWWSNNVKRSKFWWLTACANWOQHYMZZBJGMIXIGVYLDHXJBCQLOZGOQUSYQBSRNJPEUGEGDRVBLWQPPCFDQNTRWAXJURFUCLVVRGHDDIFTVKKYYNBKFEKJEHMFQXEEAKUJTJKMONXAECYBZDAWUMSHEWCTDMFWO");

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
    msg.setTimeStamp(0.787526251332102);
    msg.setSource(53969U);
    msg.setSourceEntity(75U);
    msg.setDestination(23523U);
    msg.setDestinationEntity(83U);
    msg.req_id = 14932U;
    msg.status = 101U;
    msg.info.assign("BBJYDIKZEFVNBTJUMQBNLCMIEZXRIDUEBADRHITHLUULBGRCQNWRAAOAKEKQUGRPWRYCDSUQRBXURMISMYRVCVMJPWOBVOAC");

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
    msg.setTimeStamp(0.9142519400176087);
    msg.setSource(1172U);
    msg.setSourceEntity(211U);
    msg.setDestination(16775U);
    msg.setDestinationEntity(170U);
    msg.name.assign("RRPPZPDSHTRTSJGODNYGCEXNFOKEEWLAPQCBRJOCAAFELLNGMQDPXJHSBMETEFZMGXOCJTCWYMCRHKFTVCXSILZQFCYWKNJGGOIJPIWWLUCPADF");
    msg.report_time = 0.13386140140096758;
    msg.medium = 234U;
    msg.lat = 0.4746894757688921;
    msg.lon = 0.9918250812075203;
    msg.depth = 0.8708328439936662;
    msg.alt = 0.39511333220753686;
    msg.sog = 0.4775511343284261;
    msg.cog = 0.6528813227216741;
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.7854582460008322;
    tmp_msg_0.lon = 0.008104557981530869;
    tmp_msg_0.depth = 0.804784920955959;
    tmp_msg_0.sentence.assign("MSYIDTXGRLOLEQKPZCYNUALCJRFKSIRNYFEAUXRDRSFHIIBCXTBQZHWLRMSONPFIVKWXOPMSUEQDYQZQAUTNEFWFVQNVOBTJDZGJNPWTAXAMYWNEFLHJKUSGBJZUWIAXVVNFYPPFDABMSHVPUITDGWCGVBVYYZUPRAMORPKL");
    tmp_msg_0.txtime = 0.4692436440739248;
    tmp_msg_0.modem_type.assign("ONHNBIZAQDMECTKLPUIGGUULQFIOTSSLWUUGUOXZEXXQFIRBCIMMWFGDMKFKDWQQWECJXZCPANZNMYDBNTYAUMDJZYKURTDVKBCWKNEBLYPSORCRMOAHNAJKZMGOSWFKBPNPXOPCXQHIDZASTJRQWJPHYRFVHDSGOZCVJQXIVWGHQRXPWVETVHFFMJVCVARSXLAPDUOLGFIY");
    tmp_msg_0.sys_src.assign("KPXLLTVDEVTBFJAKLSBQAYNKRBMAROSRHMQTIYYWFZAEIOCIKTAHORKNBWWSSYXWLSAGSPAHLRDEOXPDZVLHKEFBYQVMDQAKNQNHYOKCVBUZSRGMMJXNKYNXMYMGWNOVUJPUTZDFBPIHPPECBBMIMNQVICLIJHOCJCIXCDULPBCMRZHYXEFXAQAUTVICGYTQTRSVJOFFFTIXDKXDVNZGUJGZZOJLUD");
    tmp_msg_0.seq = 4292U;
    tmp_msg_0.sys_dst.assign("OGZTVWMYJPNJDMBCPLTHNGIJZXHOTKZRFSKACTZRUUEFYFLVTPPXNOAAWSUYQGXVIDOZALEWWJVAJDRARAUPBHIMQRIOVKXYFTPBQUDBZQCIKMUJFLMWCYSRCNVUMPWFDMEAFBSTCPUONLSLKGFWVDEPLBIGUJHJBLNHRYIGEDQDYQFNQSQZNTXYEKYQBGDTXAQSGBZKRGXZKEEAHMJXWIFEKOHKHWSBCTUNOXSCEL");
    tmp_msg_0.flags = 170U;
    const signed char tmp_tmp_msg_0_0[] = {-111, -18, 52, 92, -57, -11, -114, 87, 118, 32, -102, 9, 46, 22, 81, 20, -13, -54, -61, -8, -50, -95, 50, -8, 88, -27, -79, -72, 66, -62, -106, 121, -61, 25, 38, 50, 19, 101, -106, 51, 76, 43, 28, 123, 121, 91, 9, -102, 26, -5, 72, 102, 76, -126, -102, 93, 84, 43, -103, 100, -61, -9, 46, 59, -23, 72, 12, -74, 88, 114, 73, -78, 17, -90, -118, 9, 21, -37, -88, 77, 65, 116, -85, 67, 33, 6, -4, -23, 70, 24, -75, -79, 3, 16, -113, -83, 63};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.40331130950287897);
    msg.setSource(1415U);
    msg.setSourceEntity(228U);
    msg.setDestination(40198U);
    msg.setDestinationEntity(250U);
    msg.name.assign("TFSRPTLPMHXSZUYCFCCOAZIAMKAKKBNFBNCHPAIWXJAZSNGIIBZDGEXDTGXXFPEMJV");
    msg.report_time = 0.5889352357898663;
    msg.medium = 114U;
    msg.lat = 0.13646682681393363;
    msg.lon = 0.31468860121498154;
    msg.depth = 0.7745775156687271;
    msg.alt = 0.5469803431635649;
    msg.sog = 0.3299040565448754;
    msg.cog = 0.5833192732323549;

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
    msg.setTimeStamp(0.6324297415694474);
    msg.setSource(62198U);
    msg.setSourceEntity(9U);
    msg.setDestination(21328U);
    msg.setDestinationEntity(171U);
    msg.name.assign("AOBBDUCLXDREIZTRJREPDVUXGWBPKSDDURNLGGINQCWUYMGFILCARMMGFSTXPRRFQJPNAHQTSZTJQHIQWVOPWYOBLGPOHAOAITUIEJBFXFNRFFMXJYKMHAUTGKEFWUSQWPYRVBCZLHCT");
    msg.report_time = 0.2677599804207623;
    msg.medium = 41U;
    msg.lat = 0.03388061190973979;
    msg.lon = 0.6035522523605649;
    msg.depth = 0.2864510776609226;
    msg.alt = 0.49993748081289446;
    msg.sog = 0.43152619778033263;
    msg.cog = 0.4767237332860821;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 36U;
    tmp_msg_0.text.assign("LYWXELEOIXSRJJQAWWXCGVTCZNLFMFBSMFURXSFFIQRPQJAZPMHIYPAARDZRDQTUJOOWGVBGEIEOUKVHBDLTSGDIVPHLBZKWZNZTKANUFAHKIQEYYCVLOYQBNLXLCVDTUHFTHVBTJGQVNCMDYAHEOSEWZIFIHGRBNAMDLMUNYXMUBSCRGROEVDPFNPGPXDUWXACENBSJZNCKLCWMFXYQJHKWGMBVHOQXPSIYPTJDZRC");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7084121011629297);
    msg.setSource(44201U);
    msg.setSourceEntity(97U);
    msg.setDestination(48877U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.6251046633189453);
    msg.setSource(12841U);
    msg.setSourceEntity(238U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.6485595723243974);
    msg.setSource(37707U);
    msg.setSourceEntity(155U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.8889599565833962);
    msg.setSource(10745U);
    msg.setSourceEntity(106U);
    msg.setDestination(48181U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("QUFARDLWLGHQAVYZWUBMBVKIXOKFJYDFCAXGALBKMKMX");
    msg.description.assign("OEKMRHUTIUZFYDJZBVVLYHVLHOJLZIRSETNKVQAISVCANVNPEXBAHXTEQWRDWGMDZRKVKUJQBABVLRFDKWLTZWGOBLAMUVPWEMRMBQPCJUQGBDWUKFSKRSWQTQYMBEDPZOEISWUYXFQEIJMNNJCAAUHKSHXSWDYZ");
    msg.vnamespace.assign("AWQDWNWITMER");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JFJWBVBKPWKYSZCQMTJOYSDFETWPBLKHEIDMQYNRVFGYYBQRSCVAXXHVMAIDXZBIDABVMINWHRGNPXPTWOPDUVOGLYHCOFYZGSGKZLXDJLEGIOJDRVEQCFSMEATRUSIKRKZTCOGZQJXLUPIJOQVIHVJRNECRAJMQEBMFSQFLFKUITCHRAWFSPCBKHPZKWYNUULNGT");
    tmp_msg_0.value.assign("EMMXQAFTEOBDBZNVVAESCRLJFCFNUNJHINMUPALSSVGAJIVESFJXEHNHXRCOWAJOPBDALWISHZIZOMGKGXXDVBYHWOCNTQSYZGKLUUDRTCURATQBGDVYWIBNYOWGHMUOUQWOJTNJBHYPGMWTICPGFOSQKUKXXYPARWJJEKIMGUWLRNYMDLWEFQYLZBXEQKCFTFNRKTDLVIDIACDQFYFSZAZSVHDSJLERTUGZYP");
    tmp_msg_0.type = 208U;
    tmp_msg_0.access = 200U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YQWSCXJCOEDKXKDXAEVXZGCYAPJFGVWJNFWIXNRVOKRBH");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VKYRTOMRMQFDZHNMQPXVYCKWVLTSZWWHZIYCUCOOUSQOBDZGRQPGASWNWVMNFTGTIEKQVMGHNKFTQNOBKUIFKGSDRMBFDSPJMARLDRTXRSOEPKIANVDEVHAGTUFCCJLPPUGHZLJCQLOQDEKGGNGVCYZTLUUZIAUYTIXSRPADLXBWHPLIMNMUYILIYUMVJWOJXFQEHBFJKROXITCJYVEQXEHWHLCBAPZPABBKXW");
    tmp_msg_1.dest_man.assign("OOLVLCFHEYFGMUMLVZCJSPMOAWZWNVKYBWCCZAYT");
    tmp_msg_1.conditions.assign("VJWCXYGFDMCLZMMRUTUIUORLBGOVNKIUEDZZGEZJHGJRPPVVKQLWTQUIFGSMNJWJJGYHABCIAPLYXINVRVPSYKWOXFMZACMYFNHZFMXESHCCNFZNSZZOTSQBPIOTCJXERXU");
    IMC::SadcReadings tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.channel = 43;
    tmp_tmp_msg_1_0.value = 1928172209;
    tmp_tmp_msg_1_0.gain = 172U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GpsFixRejection tmp_msg_2;
    tmp_msg_2.utc_time = 0.26633360616557067;
    tmp_msg_2.reason = 60U;
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
    msg.setTimeStamp(0.22007667225799865);
    msg.setSource(29072U);
    msg.setSourceEntity(37U);
    msg.setDestination(65507U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("AKTGCNVDPKNFMAGKPYZWSWTZTODQOZGCZKCISGSYBXLVHSIORJUXOMVXGSFSIJYRHIDWMLHJODUMLEIZLBDWGUNVZQPGAHXQYQVVPQAEFUBJNXMNABGT");
    msg.description.assign("TTHXLBUKDWRFELQPKWVRSKNZOHWWWUGARGUYZKJGSQJTNNHUCBIMQJUTLELDOMZZYMFPHPTQHCVYBMWBAGZNJDUQOGRPXPULAOQHHYDIPANOGSQAFUGCIEVOFVSETEJEMOFRVEEGQXMVYAGILCRSPDYXUZJERZHKKVIXRNVRXXTYBZQBCRXWSQPCOJFFMBXDLTJXMFSJSLCNWICGFKVDCIENYLABVPFAKNMIPWMCITAIAYSSWDLHYZBDKHO");
    msg.vnamespace.assign("IGKIEFUAMCEYCXOSSFPWQUZMOBQGIEUERTYYAIWYDYNJRDCODVOIIAPKMXGARFANETRVBNQXMUBCBGDZMXQJPSUTEEAJQVXIHCNSNDGGNMKLQPFXAWMOZZWTPSZVLHGHMLKFBVHBRTRHHXCLREGDJSEURRFWJMKHHVRWDBDF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TRWIZFTMVQIUTPRELYXRJIQZTMESCPLKQLWOWCSUADGVSAYYSOHANEKJGETTUWDJHNYLIFBWXPFHKDVEOZ");
    tmp_msg_0.value.assign("CGMTABOWUSBADVBWOIKHORSRSGZYROLFWZGXQWBCIWHXTDBYXOMIPJROEUXVULODX");
    tmp_msg_0.type = 33U;
    tmp_msg_0.access = 22U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PJSSSGSKLUTOCXPQDBDHVTFERTHJVWVWZVDZBOGWRQZACSMUPSOQOBPTNKIBVKIUURVYMFPMPBAEOABMLACQKFHYRHHGQOUOGPIGEJCNSWIYKECZTONRLFDIRSRKNAMNVWIQNJSCWJJZKWZIUGWBYVXGYLXJXLTQRAXHLYZMGRYKNIWUEBFNLTEKTCUAZLBGOPMUIIF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WCNJQIOPLSZRIBKDPLZSQVSNRJQRMYAJCKVRWUDTXTHQEHKWHOPSGARYUXLAZTAGOHQOBJDYNNUSLBFTD");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 45942U;
    tmp_tmp_msg_1_0.lat = 0.6253892232203602;
    tmp_tmp_msg_1_0.lon = 0.9024073314608895;
    tmp_tmp_msg_1_0.z = 0.35855661168792163;
    tmp_tmp_msg_1_0.z_units = 238U;
    tmp_tmp_msg_1_0.speed = 0.8247244869462482;
    tmp_tmp_msg_1_0.speed_units = 208U;
    tmp_tmp_msg_1_0.duration = 20486U;
    tmp_tmp_msg_1_0.radius = 0.7168058216420364;
    tmp_tmp_msg_1_0.flags = 220U;
    tmp_tmp_msg_1_0.custom.assign("HSUYJIKDQJAEMWLAQKGONXIZSPNGSRDED");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::VehicleLinks tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.localname.assign("GGTIBQENCHMQUHNEDGMMDMGWXRNNIFAJJPOMTTOZAIRDQFJUVKSACSHPLWYYJGTLUFQDLSXIZWMGYUVUQNPVLJTBFIETHPFSFBEVRLALKSXRABOVRPOAATMWVDKQGYMFWEIJVOTYPWCXCUGYOMCTYBIPFHXIBXBNCEYGQJZNHWHLUDIYECWRCDKXMROOUSCPTXVKVZKF");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::AcousticStatus tmp_msg_2;
    tmp_msg_2.req_id = 42718U;
    tmp_msg_2.type = 106U;
    tmp_msg_2.status = 42U;
    tmp_msg_2.info.assign("UXRROHDWYQLVIOEPVGYBDKHJGLZLPXZUNSXRDCNKWHUFJMSHDWTCAKCCJIELQYDRWZGNCSIHGDLPLJYFQOBUKKPRTVMMMQBFZGWPTGOEZEHQUJLULRAMKJTNFICFAICTSFZAJBXBGIRVBAFFRNYQOPUYOAWCAIYQZWPWPSLFIAHHPDTDVJAXNJX");
    tmp_msg_2.range = 0.381108658215337;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::ParametersXml tmp_msg_3;
    tmp_msg_3.locale.assign("SJSOORIDBLCNQHGFAUKRGCAJFTTYOLKESVENUPGJTFVQKLTSIHRKLHZLYEWOWCPUYYPPUPHFWCECXRYXIXKCVFXNHKJHMCQUIYMSXWRETMKBTDIRRYJANNRMALFIPAGLODHQSVWPZUXAGEBDSWEXDNRNFWSCUTJQIGGLBEZZ");
    const signed char tmp_tmp_msg_3_0[] = {56, -92, 124, 41, 32, -73, 15, -119, 40, -16, 24, -39, -115, -77, -4, 4, -112, -49, 50, 25, -28, -42, 6, -13, -82, -1, 84, 59, 94, 64, -3, -29, -120, 24, 112, 27, 15, 107, -37, -117};
    tmp_msg_3.config.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.7153777035152435);
    msg.setSource(62031U);
    msg.setSourceEntity(120U);
    msg.setDestination(28017U);
    msg.setDestinationEntity(43U);
    msg.plan_id.assign("YUFJKSFSROFIX");
    msg.description.assign("NGXZGYGJCADJADXFBKULSMKUNRCBPTVEPANYOYVLLEFYFBEHBCIVVKVETUGXMIBRBOFAALDFEHHYMNRABFRUHQHXYRHWBNXQNSTJONIJZPRCFTQOLZKCKDNVIZOMEV");
    msg.vnamespace.assign("UPPAOEZFWUHOYASEQHCGKRZLDPAYQJHHIXLFDUQUTNS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MODYEUOWGIOCVQSHYEPLYRODKKDFPKOLVXBUJFXELNCXJZMRPVLQHNMDQCTKVWTQRGCQEVJKHGTBEILAKPZZNYQBAGRMQTYMDBXXFRZGRMSBLPEWMUUMSUINJPVUEKWQTHLXFEWZCOOBBRTWYAPZGDJEZXUEHJPLZAIDISCU");
    tmp_msg_0.value.assign("XPTIAQHVBEFCKTVHFEPPSFRTPXSBUJZULMPJQORQLUXRSAVLYLUKUTGXCDPDIMDENIEWSRSCEVLONFCRAAJBXALRWNWBNMBJWSNTBAFI");
    tmp_msg_0.type = 128U;
    tmp_msg_0.access = 236U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DQOZKMEEUSIGEPVKOXLSBHGCJCNFQDBMIDLBGHPEPCOYMOCRTHQMSBDJTJEWTSIRIRFJCOGDIPFSFUOXQHAJZTAGSKTAJEYYNUPFBOVQXLKHPTYJHZGKVQATVBKNVORNNFRUHCWKINXVWXCRMEVDYHKULTIYGMKUGXXMCNDATLPABPPVADJVYIICUNQEBRYESZRJYSGMAWLQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DDCXPFBQLQTGOPYZCR");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 15049U;
    tmp_tmp_msg_1_0.lat = 0.22460578314434265;
    tmp_tmp_msg_1_0.lon = 0.9561987362977705;
    tmp_tmp_msg_1_0.z = 0.8903467666921168;
    tmp_tmp_msg_1_0.z_units = 57U;
    tmp_tmp_msg_1_0.speed = 0.23681419052196595;
    tmp_tmp_msg_1_0.speed_units = 176U;
    tmp_tmp_msg_1_0.roll = 0.5618214971426554;
    tmp_tmp_msg_1_0.pitch = 0.09854191125831269;
    tmp_tmp_msg_1_0.yaw = 0.8848343088641814;
    tmp_tmp_msg_1_0.custom.assign("DCSQFZRORPFASPMMMAFHRDWKBKYSWCUBUTLODIUHDGDJUJLFUNIMZKHTKNBSOXMQSLAVTYCQUBUGWDHCVQNERZVRQXWZBOKJVAOKQXTKAPOLWSRPCADXOIEGMGVNJECWLLJNDITDUZJXGGEFIXHEYAEMDWTVUNXPCVZHZHETNYQRVHHWVICIEXMGY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ManeuverControlState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.state = 60U;
    tmp_tmp_msg_1_1.eta = 50685U;
    tmp_tmp_msg_1_1.info.assign("SWXXOFIJPKODTEZRLRKBNVRGCGNGPEGJCWCRCMUZZVHMLXTCRQZLNYHIVLYFNOADZPDTVHVPHCNPKKAMEKMUXFRXDLYGCXKFVOOBANHDDYQIVGAEBSIIOLFPTFZWLSGTBOGMDGQAJSLTMXSYXPORSJQRUEUNDWIMVFJTACPYETNJESYMMIXJRCQW");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::GpioState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.name.assign("MCTELIQUBSRITJZCCQ");
    tmp_tmp_msg_1_2.value = 169U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::TrexCommand tmp_msg_2;
    tmp_msg_2.command = 43U;
    tmp_msg_2.goal_id.assign("BZMFXJIYURNHXKWOCRHGRACDACTHOQOEVVQTIUAAEWDPSEMUWRJKQCCYGGEDTIBAFXKCAGOIBUOTVVWKZQZIUPHCUTTPRLXVRJJACYPFJEHMHPNAYQZHHP");
    tmp_msg_2.goal_xml.assign("PPCIXXYQXBFFYXOOFBYYJLJVZIUVRJQHGBSUOEDEXGLIOMUPEMZ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PlanControl tmp_msg_3;
    tmp_msg_3.type = 247U;
    tmp_msg_3.op = 205U;
    tmp_msg_3.request_id = 57566U;
    tmp_msg_3.plan_id.assign("QRSIZQUWYQWZGUDXNMPJFOWFTSYXDKBVKMNIREVPUTBJYTURHCVSARNDH");
    tmp_msg_3.flags = 1443U;
    IMC::AcousticOperation tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.op = 80U;
    tmp_tmp_msg_3_0.system.assign("CIKCGSPVOJLPOQBHLWRKAMFOSLZUTBQHYENKRNJDNGTOGPYBHVHALIKZKFEBWEPGCEEFVCBYCBIAIFMARLHSFMURTWCRWWMHXWNIFLVMFRMDZDJUQDMQOOEGHGBSWXHYSYLHFPPPSESIKRTULMKEDXXEPL");
    tmp_tmp_msg_3_0.range = 0.34955398821846795;
    IMC::SoiPlan tmp_tmp_tmp_msg_3_0_0;
    tmp_tmp_tmp_msg_3_0_0.plan_id = 57956U;
    IMC::SoiWaypoint tmp_tmp_tmp_tmp_msg_3_0_0_0;
    tmp_tmp_tmp_tmp_msg_3_0_0_0.lat = 0.6070181964881927;
    tmp_tmp_tmp_tmp_msg_3_0_0_0.lon = 0.48532484120888764;
    tmp_tmp_tmp_tmp_msg_3_0_0_0.eta = 976436996U;
    tmp_tmp_tmp_tmp_msg_3_0_0_0.duration = 15438U;
    tmp_tmp_tmp_msg_3_0_0.waypoints.push_back(tmp_tmp_tmp_tmp_msg_3_0_0_0);
    tmp_tmp_msg_3_0.msg.set(tmp_tmp_tmp_msg_3_0_0);
    tmp_msg_3.arg.set(tmp_tmp_msg_3_0);
    tmp_msg_3.info.assign("FCUQLSGTJRMFCKDTMUFXHZKWXBUBEVQHVULBMHYIDNOXYROOFVPCWWBLUBLHZHJFNMQNDTLQTHCDIRPESCSWJZJDMRTIGQVXIOJMYXLDEJYZRMSYPZC");
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
    msg.setTimeStamp(0.0024905110563273603);
    msg.setSource(16339U);
    msg.setSourceEntity(113U);
    msg.setDestination(5963U);
    msg.setDestinationEntity(252U);
    msg.maneuver_id.assign("ZJGVMFVCRGZJEDTSWBYKHABDLLCHXRESFHBCAWPTYPFTZBX");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.4316189101723398;
    tmp_msg_0.lon = 0.42113828236305473;
    tmp_msg_0.z = 0.19752735029892254;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.speed = 0.6551109552361881;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.abort_z = 0.02889211886170151;
    tmp_msg_0.bearing = 0.857533602582695;
    tmp_msg_0.glide_slope = 253U;
    tmp_msg_0.glide_slope_alt = 0.24753987804521493;
    tmp_msg_0.custom.assign("PDOVJWYURUKPHEUFHGAMIXRFOSAUZBBSEAOQQHIIQVGREZXNMTHGGMFBVIFXZJCKNCQKESCFYOYIBNXVOPQYVXLXPTDWICSEBDKEFUXLTLHDLJTJQNZWSEYRDCGHTHJUIBEDHZJGLWNBCYSAPOXMLAOUJWTTPSGFTNOBFMKVGUWYMEPQMMMZFAIQXALAKNBWLKZTPCRKMZVDUWROZNLECRUCSNBLOZSGVQNDKFARDYVPYISACYWKHDIVJ");
    msg.data.set(tmp_msg_0);
    IMC::ManeuverDone tmp_msg_1;
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
    msg.setTimeStamp(0.5210074943652315);
    msg.setSource(52219U);
    msg.setSourceEntity(214U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(141U);
    msg.maneuver_id.assign("XLUYWDTPSLYRAXDMVMLZAOULVLOPXRJMGHKSOAVMTLRFPBGZNILHFFCJOAQUFRBCGSAQJNYAZVOCSWXWVFFQDOKOZERTOESPUBJLCWZCYHXMQGBHMVMWQJBQNSHSQEZXIESZKAVOAGFHTTWBUPGGPJ");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 2260U;
    tmp_msg_0.lat = 0.44491547469734627;
    tmp_msg_0.lon = 0.3992500173170972;
    tmp_msg_0.z = 0.6025908823753872;
    tmp_msg_0.z_units = 91U;
    tmp_msg_0.speed = 0.09297584808488724;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.bearing = 0.13745529025459602;
    tmp_msg_0.cross_angle = 0.29393458588047006;
    tmp_msg_0.width = 0.8161931160094151;
    tmp_msg_0.length = 0.6378823452042367;
    tmp_msg_0.hstep = 0.4976473460091808;
    tmp_msg_0.coff = 23U;
    tmp_msg_0.alternation = 160U;
    tmp_msg_0.flags = 124U;
    tmp_msg_0.custom.assign("BDOYOZNGXFSPGELXUDOFSYJTYVPQWSCVXDDHWJKPHMCQFHAXWVAKXFIRRORM");
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
    msg.setTimeStamp(0.7665672979546203);
    msg.setSource(57697U);
    msg.setSourceEntity(62U);
    msg.setDestination(28812U);
    msg.setDestinationEntity(12U);
    msg.maneuver_id.assign("IGEUAZJMDJJAGWTCUFRIOKQKCDPTZJPVDPLBXAYWXTNEUMYIZYHUPBGHJYSHDBYLNUNAUMVNPPAXIIMKFQNZOBUYAXQHHYOFOYEAEXLKGOTSBQCQAKEVCOHWNVHFEXYFWROKGNNFMERMQVJGZTSTSR");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 10574U;
    tmp_msg_0.lat = 0.4507653757197274;
    tmp_msg_0.lon = 0.2912233141374688;
    tmp_msg_0.z = 0.2755653345491301;
    tmp_msg_0.z_units = 102U;
    tmp_msg_0.speed = 0.8483378639312308;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.custom.assign("JRRTBTWRVZBHUEQIOOPAE");
    msg.data.set(tmp_msg_0);
    IMC::EulerAnglesDelta tmp_msg_1;
    tmp_msg_1.time = 0.9935079198276927;
    tmp_msg_1.x = 0.5307068217389547;
    tmp_msg_1.y = 0.9468984841645028;
    tmp_msg_1.z = 0.03248828301735707;
    tmp_msg_1.timestep = 0.6527587253523808;
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
    msg.setTimeStamp(0.18233532079473003);
    msg.setSource(2708U);
    msg.setSourceEntity(238U);
    msg.setDestination(9573U);
    msg.setDestinationEntity(155U);
    msg.source_man.assign("EZQROFMHNXWFIZMGSMZOYMSVCGEXXTUQHJBXIDFPRKTOQBHFASYDRWBHBGIVDSKUAAWMUPYICCENONAADYCTELMEEXOWGJVTQCKGOWZAGZLFZNZBAZLYHWJJRBCVLFGHQABDWUTZPSKONLBKIPCNINDBHFQFMVYMKKETJUJHXLUOJXZRTQPJF");
    msg.dest_man.assign("DWCPNLHJZLOESAOYDRCDMBEQYMNRTBHMTXGPSAHLVMOKTONGEDWDMUIJULZGXBGFAQYUGDLJYRULRYOSFXCLGFSWWZTINQMIJFICBKSIMFXSZWPWVOCAVCCXHQRRIETTPHKIUFEIXAJYKB");
    msg.conditions.assign("FZNMHWQTONUEITEBWBFQDZSAWRZKULRHXOJOCOFXQSVQRIDWQXXNSVKLQDHLGTJHHBKGJSSXYZVPPTLDNMEVYEYAVNKYHVJMDBMDWWZXWSBQKKPAIAMGUFYURZPLMFJBSFDEAARPGLINWTUISTYHGKROZJILNDFRDLTSZTJRM");
    IMC::MsgList tmp_msg_0;
    IMC::VerticalProfile tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.parameter = 83U;
    tmp_tmp_msg_0_0.numsamples = 241U;
    tmp_tmp_msg_0_0.lat = 0.5129504371622201;
    tmp_tmp_msg_0_0.lon = 0.21180007256169786;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.09314937818424274);
    msg.setSource(30544U);
    msg.setSourceEntity(110U);
    msg.setDestination(58065U);
    msg.setDestinationEntity(69U);
    msg.source_man.assign("OTAQNHEYLSQGHKAILCRRAOSPPBALMVVZODDPKGCHBRSUHGQRNFLXGYXOEAINHFLWYZKDEKEYEIQJMXONRUHFT");
    msg.dest_man.assign("BVDHSBGVDLOEISDOVOPJGMETR");
    msg.conditions.assign("VTFMTZZUKRCFHLEYPYMTLKOCQZUYYOUJNGPEUXHMCOOAJVDRJQCFXSGYKSDSXUWDXVFWADARMEKLPQRKRFSCPITZBBJIIHVLSGYTJOARDDKIYGDNRZBYTNFDBPJVOOMEUMPBNQHZLSEFKLJKUYGVWBWEUQWJHQRMZJVDTCAUGFOHGWBWSEUDAMGEPNQCEQXZIQILNPXWRSBVXPAYXHHPZTOHLNCWFBNXOITLHNKNVQJXEAVIGWZFSR");
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 16U;
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
    msg.setTimeStamp(0.06639968815645636);
    msg.setSource(15291U);
    msg.setSourceEntity(195U);
    msg.setDestination(32787U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("KPYMIVEKIZDNDSZUCQBWYYGFXUXZORYWHRVOXLXEIALYQFKQXDZGGWRWWSGLROIHRVAJCMLJUSSVCAKJTHPPGMBSXTHBSWPYWVNETRCX");
    msg.dest_man.assign("RHTRTNMOIRFSVBHWGBLJTGKBBBVKGESMNIZZRHZKWXQH");
    msg.conditions.assign("GUJMKJAGSXFKAMBIVKCGRBWHRWAPHXEVLOZSJJCFFLFDWFUPPCNYLDFDINONNVPDFDGTVZYWMTVLMJQONDAEWMXJYASCRISYLMCDBRSZTKBNQVLGXLKYWZUIGNYEKUAWQPPRHTSHNTDQUMLRESCMTSBBXHBQXAGLBEFQRIJTEQZSWAKIENYPVRCRHEVIZKJPBIGJHXKKOXOYWUMIPVLZTQAQDYXUHOSTOFYEAQZHEOOJIGUCBCRZOXWPCGDTZH");

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
    msg.setTimeStamp(0.30195622817759726);
    msg.setSource(13445U);
    msg.setSourceEntity(223U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(146U);
    msg.command = 188U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TPYJJQMCRTGFAHBLCODUVFPNYRQCXDPZWJKFPAJXUWICYJTZXUOMTJBJLUZFRKJQYMDMCHREEYKUPIAVLRQEGIGMCHUERTYVCZQEWDNQOFZSIZMOONUXBFSXBSLISJSASTSWNYXHTESKBYBAEDODKACODGHWFQCDXEAFGWUGGKEQVIBONTRBLXWVPBPNYQKZZIULFYNOXZSDMLV");
    tmp_msg_0.description.assign("LJNAMKDABYJLXTBHVYMQZMGIMZKXVOIWXXITTITDEPMGFVHQRPKEZFPLLDAUTKBMPRFTJJZFSCFRQWZMREZBLZNPIYNUWVSJQCYSOUNPYODGJIORTQKACNCLXWSVOVQNSJEQGGADERUHARNDZOSBUDFLQLXISPVORYBIVOBVXNOSYMSYWOUEZJKTNRRCKPHCIKAUHUFWFNWZHECDL");
    tmp_msg_0.vnamespace.assign("NUIFRKXXEMTLXYDJGYIDSYDRNYNWOZBUOKXZTGVXHLYIZANLHZKFDBIYVPJGMKUZHYHEEWFOXRFAFCRUGZPSECTMRWCGWVAAGLHXYSLCSKMLNIJZNEGJGOZVVLIQBADIBP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JOSMSOWRQNNAMYOLDWRUKKOLGGRODSWV");
    tmp_tmp_msg_0_0.value.assign("WDVRSPSTOAOUVAKFQTUAFDZRPEGLARSBFOXJMNSZXVFUCRLVNPHZXTNS");
    tmp_tmp_msg_0_0.type = 69U;
    tmp_tmp_msg_0_0.access = 37U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KINRXKASXNWKOBRCTVCAAFOGBPPWWHIJCLUNEMZYYSNYJNQDHWFBCTLLJXKOTELCBYGMEKNMQLPVGHOMVLUTQDBHCZPJDPPW");
    IMC::SetServoPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 228U;
    tmp_tmp_msg_0_1.value = 0.9842068072821306;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::FormState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.possimerr = 0.5311990766449928;
    tmp_tmp_msg_0_2.converg = 0.2890507218029085;
    tmp_tmp_msg_0_2.turbulence = 0.7867750572140404;
    tmp_tmp_msg_0_2.possimmon = 156U;
    tmp_tmp_msg_0_2.commmon = 217U;
    tmp_tmp_msg_0_2.convergmon = 47U;
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
    msg.setTimeStamp(0.9115370180501353);
    msg.setSource(40879U);
    msg.setSourceEntity(218U);
    msg.setDestination(6662U);
    msg.setDestinationEntity(212U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QUJJKRWGVILWZYFDIGKIHQJAASAJSIKQGACWGLHOSFGKLGHTPURQITXEXMLRPLCYVFCPXJVMWHSMVZRRKTUKTOFJBFYLIWJIBNYVOOLCHXBMCYHPDAOXEMDONSVULASPNIYETUTZGYWXWDZTNMCEZIXEUUZBSBSDFFBVXEGZRFTUJEQNUKNWRPOYWSLAPHNBVDDUKZG");
    tmp_msg_0.description.assign("ZNFQCNTGZWKRYQFEWKZFADWXKDVQOPPRYQCOUDYRWZFHDLBIVCCWDWVCNGKAYBGKCTBVHGLEVEMPSSNXOELDMYNYXZIUWGJLPJKPRF");
    tmp_msg_0.vnamespace.assign("OIAADRZSVGAMCENCRRUPEOTQXUSAREXCSRQVXPFFTGPUYOWQCSQQWHEAGQPDPNFLYLXOKSFFOZWHKWTDZDROYEGJYVYBXMHUMTZAUNCYUJZGZKFSGHIJJJSRUKE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MYVAWVBFFXFVSSAWAOMPTALWKUODJYRBREIYOLGWJHZNEPOXZGBVOSWLFLHZCEXSZVTEKFINQCPZFRKLRQEKMGUFBBGIJHJAETYKUJ");
    tmp_tmp_msg_0_0.value.assign("BOHVCELVWCZCWJURSTMTAJIXCKTPVIKPHNNZOFSLFRNLXHRNRXOEAZARHFSQBHYCSCXIBHULSAGOYMDEDWDGHBQVJZLBZWXYU");
    tmp_tmp_msg_0_0.type = 38U;
    tmp_tmp_msg_0_0.access = 154U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MGLXHNBUEYOOYAHUVJVYEIOQPCOTGOYTWRIPKKBAQTDLCGCVALXPFBUFSNQHUCGBNEMFFQODJNWZPMPPXKUMIWXDMYEXVPMOPKFSIAXLQUGZXZBTCDEZQISDZVGKMIWUEHUZTZAGGCKYPLKJLDEWKRJDWLORSBXLFNONQSDNRHCVHNTZBAOAJAHRQFNRQKSTJBMCWZMFLGSVRYWVAMITSYECSLIXVKXYHWJFTTUHQAPCVUJWBHIY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QFYHYOBPTUXJEFSJNNISWLCJSCQEDHYMJDUEHVTVEZOPSTKHNMEQFHBYTLHBBULNPBQRFDMMWLWGBYEFUIXOTAINFLTCPHUMXXZKJSGIZVXIOPJXNGDMREKHRQSGLXJQIZMMVRYXDRKJUQGHKWVGAASPRWSQUWDZBAGCJIK");
    tmp_tmp_msg_0_1.dest_man.assign("WDZPTNNPFHYQCNORMIPTVDBWPEZBACQWNDVTANOJYIEIGBXBVRTRZXFDTHFHANSIWCCPAEEGM");
    tmp_tmp_msg_0_1.conditions.assign("EMPYEZMIEPUXYLFVUDENMKPJCIBEVDQXYDOHZTAYWWSUYFJTCCPRMLTFENAGNVLK");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.9635587938407747;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.speed_units = 192U;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 43627U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XGHIKDITLYJCZDNHNLUZDQHWPUMMGCADBOULJBFHZPRGBJZYJQRCUSRGXMDVBKCOIFNHLNZDQRJTTEARDCMVGAJWSEJYGFYSMWPYGWTBVBKWFCJBYMUOHVKVBNOPLZVZCEOAQCOYWCKXWMDFYNVADVNIMWEXOQIKXQFAZWAU");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CoverArea tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.01644309836239055;
    tmp_tmp_msg_0_2.lon = 0.29242031809511004;
    tmp_tmp_msg_0_2.z = 0.32794755024322186;
    tmp_tmp_msg_0_2.z_units = 197U;
    tmp_tmp_msg_0_2.speed = 0.5231078197943195;
    tmp_tmp_msg_0_2.speed_units = 146U;
    tmp_tmp_msg_0_2.custom.assign("LOKWTVEQHVOKXLIUQLTRHESUNLFSNMXKRXTTBZYPHKFFNGQMGEFRCKQPCGNSSWUBICURVJACZWKJBLIBPOMYVTDEYEPPYXNEKVMHGRQJUSABJQWMPLCZDZBRFHYQM");
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
    msg.setTimeStamp(0.6039383150296599);
    msg.setSource(20055U);
    msg.setSourceEntity(232U);
    msg.setDestination(31574U);
    msg.setDestinationEntity(43U);
    msg.command = 69U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NNSGXSJIYGYFVTLVLHTHBZPYDWTEROQBFJXUVFJKWAXNOUHYKFFHDIMAEYKBBQFGLVPNFSYHKJIEDRTUKEZWPYZOVOPQQBZKBTUIPKJNRYVDLCZHNQDINMSZEHCRLOAVCTMXHWTKTUCGJFRITAOXGCNUUPQGSCPXUKAJFMORHJLWSMCUBUEOZSLRQAOGLADECLNDPXDEGWK");
    tmp_msg_0.description.assign("JDHEPDXNYPEUGILYTUKJBQHMWBLKQGCVLILNJUPVXHSHDPBQITWQMKHRNDJLSGHTBDFCRTMPMILOYZWUDHFYKAOUKUDEABAFGYAXSOOLKXOXWKDVCGACOKBRMNQDZVEVIWJEWAXZINLNROGSNWPCWKQSTQBTFZG");
    tmp_msg_0.vnamespace.assign("IABWZLCSSKOYUZFZBMJBJJMQWEOXYGXVUTMHKLTSZEZTOFCMKCJMQHEOFEAEJLAKSEQDIKBRKEUSWWLCKYAWNWVVTROLSDCZHMFWOMYQWOCXVUPDVMJJBSRGTFLPDNJUPOXRGOAGUPXDHLHGYRRNHHXXDTXCAQEZBVHSNCRVXSUWTGIZIIFFEAUTBPNCKGSFBLNYAGNXMZRCBQWDNLEQYJHZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GOEVUKYXCHQHFCUUQVIXSJUWRJOIDEVUNAPKLYLAAJGKOWHLQGPEHSRKWAUXEXKFHFLZJCQVQHTYWCQMUHZLMJRYXXRTINOPTOZSLCQLDSEKFJBNIQVAOOMSBFRAIGNPGBVUYLCZDINMFPRZKSMEUDBTWIWLMPVIZBQYWGXZXZOFJWSJNKRBIVDKTDCDBVENEYCBLEXRWUHCSOAKRPANNMJMDYI");
    tmp_tmp_msg_0_0.value.assign("BJIMROVLXLLYESWQTXNIZYRTLGCCDOKSOPJBQYGQLWQWGALVGKMWQPVUAXRFSLQRCDMCUBLVWHRXZZIUQMKTTANCNTPMICKZHIWHGDKFLQDZWCBFQTDUJHNRGVMUOOUVSDBDZXHTTFXPGPEJNAIBPFMJZFSHVKABWEOIOABHOTYPTDGZEVIXIAEPREDSCXLCFFJINCPUJUXSMHOKAEOFRSMDGSUWYUYZNEJHNZXFYMAKBRNKVJBWJ");
    tmp_tmp_msg_0_0.type = 83U;
    tmp_tmp_msg_0_0.access = 57U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DMMTEAWFRFMVZPNHNWPYXAMQGAXYFPAWJLGRWFPURLQJSKBWHSSCOMUILCCPYBSOHDRCJGIQDDANHGSYWRZKYBOBNZVTBBIMRHITCZQRJDCOGMCHXBISIYUEGUXUFDULOYIEDXEVLNZPMEVAJAZDNLQDSYBGTPLESKUV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PZXWWDFKLRJCUHGQINIGCOJZFIJPDCBNPDSROTNNPPGEDQTHBXGDNQXOYBZATETSIVQTBVQWRAYVC");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.4356047031891145;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.13944352541886218;
    tmp_tmp_tmp_msg_0_1_0.z = 0.002859080487684018;
    tmp_tmp_tmp_msg_0_1_0.z_units = 185U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.4808623851669639;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 6U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.1016000658751558;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.6375676790606564;
    tmp_tmp_tmp_msg_0_1_0.width = 0.5328224147952793;
    tmp_tmp_tmp_msg_0_1_0.length = 0.6535959328467509;
    tmp_tmp_tmp_msg_0_1_0.coff = 59U;
    tmp_tmp_tmp_msg_0_1_0.angaperture = 0.11935112839606876;
    tmp_tmp_tmp_msg_0_1_0.range = 55710U;
    tmp_tmp_tmp_msg_0_1_0.overlap = 151U;
    tmp_tmp_tmp_msg_0_1_0.flags = 144U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XADDAFOEJQLEXVQEKWUGNXHMSLKYCUFRIYUYLQAOMXMIRNZGRPQKCMCNFBZTTOSNPLIJBOVJDQIMTUUPVPVZXOFHZAVPURJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XBEBNHCMQPWCAGSENNLCXPAXQWNQGIARFHOQOXGCVZMCJMNNVTDIUCDTDTAFEVWZEGFZMKVLOLYKBHMULNKLBTYGQMFVIPHRZOFDVZFSBKTYAOAWSNULK");
    tmp_tmp_msg_0_2.dest_man.assign("GJVFQQJURTFYLNTABKPUQNSASJIPUZRMKKNDCMNTQFXCHDMUFHMIBFYOMZHRZHSZBUOIXLVJHXMYXLJRFOXPFDCCPCYMTZWIVODPAIRVUQWEFXWAMHQNEUKYERIVLCRVNQMICEWEEAQIBBBAZUOGGWBJDSOZOPJLFHSOAJSMVKIKGLCDSKDKBQTLDXODNHGVHRR");
    tmp_tmp_msg_0_2.conditions.assign("RUFAOHQEXZGVEHMYFTQPXDVWDLITKTBEJPZMWCXVKQTSVOHHXDPSYXNEJYNEZIFCNJGAIUORATWLZGPRPZFCQSDYQJELUQOODALNULVUZDIBRBMOKBKIRBFKRZHHDGXTOCNX");
    IMC::PowerChannelState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("KVZWNWPWNRTJEPXWRDHYYQNZWOJQYKXJAEPUVCOPYFYLDLTWJEUBSTYCXBGXTVMQADMOBOBZXPSYMJHEHCBGACVICDLDMPYHDGTUFGGVKAKKKSOELFWSSMRHZROOLORKPIBCITMCUDOFTZEGZFUMJTSULTQCBUSASQVVGDFRLLZQXVEIPGGTQZIKNFWCYBEHJQUIQXUHMFABDEQENPIGHBFMDZ");
    tmp_tmp_tmp_msg_0_2_0.state = 65U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::UsblPositionExtended tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.target.assign("VLRRTSGAKZETIUZNVWJUJAUAKPRUXNGJZTZFMFICKYGOBCOYKPZLLJXIXSTHNSLPLM");
    tmp_tmp_msg_0_3.x = 0.8221299109577691;
    tmp_tmp_msg_0_3.y = 0.16688129321945788;
    tmp_tmp_msg_0_3.z = 0.5264246689692247;
    tmp_tmp_msg_0_3.n = 0.5192896749940723;
    tmp_tmp_msg_0_3.e = 0.6752164431683213;
    tmp_tmp_msg_0_3.d = 0.8539612448604449;
    tmp_tmp_msg_0_3.phi = 0.27272371910094273;
    tmp_tmp_msg_0_3.theta = 0.8706048383403693;
    tmp_tmp_msg_0_3.psi = 0.10579397246896916;
    tmp_tmp_msg_0_3.accuracy = 0.3372165059174531;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::SonarData tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.type = 132U;
    tmp_tmp_msg_0_4.frequency = 2984073946U;
    tmp_tmp_msg_0_4.min_range = 50774U;
    tmp_tmp_msg_0_4.max_range = 25296U;
    tmp_tmp_msg_0_4.bits_per_point = 213U;
    tmp_tmp_msg_0_4.scale_factor = 0.05948514514003933;
    IMC::BeamConfig tmp_tmp_tmp_msg_0_4_0;
    tmp_tmp_tmp_msg_0_4_0.beam_width = 0.5002802366087589;
    tmp_tmp_tmp_msg_0_4_0.beam_height = 0.8336609595762074;
    tmp_tmp_msg_0_4.beam_config.push_back(tmp_tmp_tmp_msg_0_4_0);
    const signed char tmp_tmp_tmp_msg_0_4_1[] = {83, 59, 93, 15, 13, 28, -112, 39, 88, 56, 35, 114, 78, 115, 54, 6, -102, -112, -40, 21, 74, -32, -91, -42, -92, 91, 107, -96, -46, -63, 0, -83, -90, -44, 8, -54, -20, -55, 124, -124, 69, -25, 28, -108, 104, -64, 106, -42, -63, -94, -29, 7, -81, 117, 77, 98, 81, 57, -61, -36, -101, -28, -32, 113, 115, -114, 22, -128, 79, -95, 59, -27, 77, -47, -76, 102, -118, 114, 30, -52, 86, -60, -86, -80, -6, 29, 111, -72, 83, 49, 57, 33, 88, -4, -54, -117, 13, 120, 93, -4, 120, 105, 91, -55, 84, -115, -120, -128, -7, 86, -64, 113, -94, 123, -15, -6, -29, -102, 82, -20, 14, -90, -83, -74, 88, -110, -82, 3, -13, -17, -85, 68, -15, 121, 5, -42, -18, -83, 11, -54, 35, 94, -38, 68, -56, -78, -29, -39, 79, -22, -116, 46, 16};
    tmp_tmp_msg_0_4.data.assign(tmp_tmp_tmp_msg_0_4_1, tmp_tmp_tmp_msg_0_4_1 + sizeof(tmp_tmp_tmp_msg_0_4_1));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.12681813708462164);
    msg.setSource(56591U);
    msg.setSourceEntity(172U);
    msg.setDestination(2726U);
    msg.setDestinationEntity(5U);
    msg.state = 118U;
    msg.plan_id.assign("SWZATRMSXMZEIUAUSSHGZJBUDMKFHLAKOCCCKBFADVVWVFHIONYORLCQASGIBDPNLHBNVHLUXOUWIVTKYGAGZVX");
    msg.comm_level = 105U;

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
    msg.setTimeStamp(0.8056054455917837);
    msg.setSource(19317U);
    msg.setSourceEntity(173U);
    msg.setDestination(18878U);
    msg.setDestinationEntity(199U);
    msg.state = 12U;
    msg.plan_id.assign("SPUAFFUBBLWNSRCCSZBOZAJXQALTFVZMZHXWFRLMDLJWSPEMWWFUYDPBOLFWXKEWBCJDTTXTIKKJSOQXYHMLCJWKKOAQOBTEAOWLCLPGVHTAREIRYEBUC");
    msg.comm_level = 178U;

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
    msg.setTimeStamp(0.7376322579293731);
    msg.setSource(62915U);
    msg.setSourceEntity(30U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(102U);
    msg.state = 95U;
    msg.plan_id.assign("YLIILBBKPMCXUTUBZUMGMQKTNXNLUGWIYNTKSARAYSPWVNWPXVBADZTQWFES");
    msg.comm_level = 252U;

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
    msg.setTimeStamp(0.7948670056564138);
    msg.setSource(37944U);
    msg.setSourceEntity(76U);
    msg.setDestination(12403U);
    msg.setDestinationEntity(23U);
    msg.type = 41U;
    msg.op = 4U;
    msg.request_id = 25206U;
    msg.plan_id.assign("NGUHTORARBSPMZWGFHLKINLZZ");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 22594U;
    tmp_msg_0.control_ent = 34U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 223U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.09282308391253491;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 96U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.119912962662175;
    tmp_tmp_tmp_msg_0_0_1.z_units = 9U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.5674340987128944;
    tmp_tmp_msg_0_0.lon = 0.5246363562256973;
    tmp_tmp_msg_0_0.radius = 0.8588263601482503;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 206U;
    tmp_msg_0.proximity = 110U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VNKHQYJTOAPDJXXNRMHLNLXTKXRARANFQODCQDSQHYUBQHWTZ");

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
    msg.setTimeStamp(0.20381233679037347);
    msg.setSource(9741U);
    msg.setSourceEntity(210U);
    msg.setDestination(3288U);
    msg.setDestinationEntity(197U);
    msg.type = 2U;
    msg.op = 92U;
    msg.request_id = 21518U;
    msg.plan_id.assign("WIGQAMGJXVQHTBBYOFDCMJBVSCQNFSODVWNDPGWZWKKTITDBNAFDTAZUPOIHIXYAJLTMYZWHFUJQVERRVWKBUAYLJNNAIMSOHKLZMRGVWWUJMFHYACGNSOXFCCCUPFNSLEQIDQHINXMZFGCOUAFALSKBTNTBPLFDBRQWEGHBYHVDMXUYRCUQNWXSKZVIQKGQEB");
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 16333U;
    tmp_msg_0.destination.assign("RJTGUYNRYZNJWNVYPVWXMXDOXHMQMQVUEAHSXVEYSDEZPNMREWEWZHLSKIHUBVQICCGGBXCGQKSKYFGDAPOSIYRBZWEJBPBQIKHLGTIAAJCJKTBLXFKYMEAWOBQZLSWQTZXCGVFSJZUDTNKAFCJKPSIOXGI");
    tmp_msg_0.timeout = 0.6454841938262142;
    tmp_msg_0.range = 0.538070858285924;
    tmp_msg_0.type = 10U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6514602804501225;
    tmp_tmp_msg_0_0.lon = 0.4001699190005302;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OUXQYZACSOTNUTJBFQUMZHCVGGGSYUOPNAMIHGSCDRZABVZSUATWHRGAJZKIAWCCVTMDVLBEURKFIKXJXWELBWBAQEHUUXKAMVFPIRDFLZCPUOBBAGTSYGBIBPVCGHSHOZYCZSPFXOWLNKRNSKEYOQVXHSNHCKJQWQSFQRUNFLMKGYEYNEDNQQMIWPLHJTMQXTNKOOIJXAZVPWLXCPMRDDJKLRPJXLFDYDMVOZMPLNYTJBFJE");

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
    msg.setTimeStamp(0.5978768514718001);
    msg.setSource(47628U);
    msg.setSourceEntity(225U);
    msg.setDestination(3680U);
    msg.setDestinationEntity(28U);
    msg.type = 100U;
    msg.op = 221U;
    msg.request_id = 37427U;
    msg.plan_id.assign("UPERLLCLXITARREOKDMDURYIXFTEUAFVNWZFSPICRKQZEMPRWBZBQXOJRONFCJUTSTKKXVTJSZCGGYWBXMNKKHMGYWYVGDLWNALMINQELHXGJVCYDVMWLAJZSJORTTDRQZYQHLTSCFPYIISGZWVMAEYDNBMBIEKBGBZQNXXHGACOFXPWCNFGFCNAVDZQBEPLADPHIOAKHOYKVJUMQHFHPAUDZHITUFVYQRKWQOWLSBMONGXE");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 21U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.653802580114976;
    tmp_tmp_msg_0_0.speed_units = 77U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2765738506285387;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.27521618381551904;
    tmp_msg_0.lon = 0.8060867882136102;
    tmp_msg_0.radius = 0.24573722829896139;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HJWNIQGEHHCXRINIZLVBLDXYVYOSGLUSWQSLJTBTCONHHJJEFDYLTKFQQXQGSTKQVTDUEWRYNRBUIOMGVUFETAPSZLYQMGCAVTYGUNCYZKKZNSCDKDJWDYPJCUIEEAAR");

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
    msg.setTimeStamp(0.6841284970636928);
    msg.setSource(37268U);
    msg.setSourceEntity(45U);
    msg.setDestination(46241U);
    msg.setDestinationEntity(81U);
    msg.plan_count = 55111U;
    msg.plan_size = 1901478010U;
    msg.change_time = 0.42308624329619304;
    msg.change_sid = 24767U;
    msg.change_sname.assign("YZVYHMZKZMMCKALQSTEKFZKPGXACUGLHGTZOJMEKCKGTEAWYGXDDIBRWQPBLVHXWXZIXIQIYDRRPSYNWHCESQRCZUBUAOUQNNRXFHYNQRLVRMDCHEIPSBVBAEJ");
    const signed char tmp_msg_0[] = {-92, 96, 101, 58, -101, 123, -58, -110, 13, 73, 7, -46, 69, 52, -113, -70, -3, -90, -4, 43, -65, -59, -19, -89, -27, 53, 66, -49, 62, 8, -43, 101, 74, -102, 36, -34, 17, 109, -120, 119, -35, 8, -93, -58, 50, -128, -99, -46, -11, -41, 112, 34, -124, -16, 7, 8, -40, -30, 53, 122, 107, -10, 82, -128, -80, 41, 114, 96, 63, -102, -2, -64, -66, 122, 31, -38, 56, 78, -109, 49, -121, 69, -93, -114, -87, -94, -30, 71, -13, 48, -69, -90, 95, -58, -38, -20, 80, -50, -94, 113, 80, 117, 1, -3, -54, 79, 105, 63, 18, -66, -12, -88, -54, 12, 65, -66, -37, 80, 69, -54, 32, -60, -107, -80, 64, -61, 63, 34, 83, -79, -98, -56, -72, 104, 117, -5, -37, 96, -38, 88, -5, 64, -90, -29, -51, 100, -48, -59, 114, 91, 52, 122, 99, 91, -119, -115, -99, -97, -56, -24, -3, 47, -67, 7, 6, 65, -123, -97, -73, 126, 122, 122, 10, -5, 5, -98, -94, 57, 0, 88, -96, 83, 0, -13, 105, -119, -87, -114, -67, -24, 115, 58, -44, -35, -23, 56, -80, -100, 124, 74, 52, 2, 65};
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
    msg.setTimeStamp(0.5869526800680446);
    msg.setSource(49928U);
    msg.setSourceEntity(178U);
    msg.setDestination(4320U);
    msg.setDestinationEntity(101U);
    msg.plan_count = 25106U;
    msg.plan_size = 811204182U;
    msg.change_time = 0.7225606102858403;
    msg.change_sid = 54884U;
    msg.change_sname.assign("PQZDPRCGSVOAETVOPBNLIONLTYCVVTKHQSHIYCNHSDPHTLUYJNRGQOHMEMXWXEVQSIKWPFJCNAQEDMXJPUFVXYYKJIBZMEDRGUMNAJKKPQODTBCHFYIOGKBLDUAFQEUQWLFRYFMIHWAOSYQCHEXZCSVLUSJ");
    const signed char tmp_msg_0[] = {-127, -59, -1, -43, -127, -111, 95, 51, -112, 108, -125, 12, -34, 89, -118, 84, 9, -114, 105, -128, -56, -124, -104, -42, 60, 83, -27, 86, -111, 102, -102, -117, -86, -124, -53, 32, -44, 67, 56, -52, -128, -105, -5, 55, -67, 4, 94, 40, 122, -103, -65, 84, 4, -52, -126, 3, -53, 18, 120, -79, 57, -68, -94, -64, 121, 53, 4, -48, 3, -7, -2, 124, -37, -43, 8, 72, 8, 10, -118, -93, -6, -59, 84, 63, -88, -24, 54, -111, -67, 0, 51, -66, 15, 15, 36, 64, -6, 113, -38, -103, 75, 24, -30, -91, 21, -52, 110, 89, -110, 7, -95, 38, 95, 108, 6, -57, 124, -51, 52, 24, -124, -56, 1, -63, -86, -101, -44, -56, -101, -33, -5, 66, -89, -114, -116, -38, -49, 100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LIGJOYPCPKUHPXFFRCKKYNWHDTQMWOLANLJFAPAIHEXGBYJXHTROUYLUPZHSUZXOBFAALGGVVZCIXNPRMLSXBKNNZJOTMUDLDC");
    tmp_msg_1.plan_size = 477U;
    tmp_msg_1.change_time = 0.5653403441585151;
    tmp_msg_1.change_sid = 40003U;
    tmp_msg_1.change_sname.assign("WDNALJHIWKZAAPQACKLLQWUQJZWZCCDGHOZOLJPVVCBOONXTNSVJAGXCDXXFUUSPKWHMPMSVXBGJCZSOYIORIUYQEBRTLOQVDRYMXDYFSGNMKTUMJNGINERAGEZMGYNEVFFYHLRMKVXFPKFQWLHCSHORVWSPNKLBMDZLYUIKPPAVQUDWAGDDEUIJZITTUHXGBROWDBFTWHZZTRCPFQYF");
    const signed char tmp_tmp_msg_1_0[] = {-104, 85, 44, 71, -114, 26, 12, -115, -26, 17, 66, 43, -49, 11, -70, 19, -91, 56, 84, -3, -59, -50, -86, -88, -99, 30, -100, -87, -82, -66, 98, -37, 10, -34, 105, 33, 9, 47, -43, 105, -80, 62, -69, 46, -113, 102, -116};
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
    msg.setTimeStamp(0.1483093116728319);
    msg.setSource(6815U);
    msg.setSourceEntity(230U);
    msg.setDestination(16939U);
    msg.setDestinationEntity(114U);
    msg.plan_count = 59464U;
    msg.plan_size = 2713306846U;
    msg.change_time = 0.017512477925707315;
    msg.change_sid = 43771U;
    msg.change_sname.assign("YZTSZRZBNIAMWISZNIHDSLAOFWPWXRRSTVJLJXQXWTTVUIKLDTWCAONQAOBVAULSPIAEREUMKGBEMOMKPLPAHCJEFBVMSINJKUQQQGNVYYLZVFRJHGYQDGYSRZWMQ");
    const signed char tmp_msg_0[] = {-35, -93, 104, 63, 43, 83, 55, 82, -31, -107, 30, -8, -80, 86, -6, -66, 82, -79, 0, 92, 10, -120, -21, -21, -64, -109, 107, 88, -107, -53, -1, 111, -37, 116, 7, -11, -40, 79, 42, 62, -25, -94, -84, -41, 117, -97, -60, -58, -100, -27, -21, 64, 119, 111, 58, 18, -77, -95, -48, 122, 66, 125, -5, 121, -39, 15, 48, -70, 121, 66, 87, 99, 25, 122, -15, 112, -51, -91, -105, 48, 10, -46, -104, -2, 91, -46, 116, -16, 101, -61, 126, 23, -54, 50, 61, -36, 59, -87, -104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UFWDJRILANKETMI");
    tmp_msg_1.plan_size = 26166U;
    tmp_msg_1.change_time = 0.8555948629937571;
    tmp_msg_1.change_sid = 22332U;
    tmp_msg_1.change_sname.assign("AMVDMPQUFNYAYCGNJQYDBGNHXLUAGTQUWGBCVTTBWWQDVKRGMKIRKMIEUIMGEXXTEVZZKNCLWZEJWLNBMKBAIAZDPEBOQAIYKVSXZOSPFKACHFDCXFDSJNHTCPCZQQFXHRUNLWJZPMBTFWXPFNYEJSAHBDBRIJIDLCFEEZPDNJZOWYLHTPYGOSSAOFJOVHLVKGHLECGNMVYDJIPXSWUTFUTREUSURQXXOAJULWORKQK");
    const signed char tmp_tmp_msg_1_0[] = {45, -89, 13, 105, 42, 4, 113, 104, 126, -16, 119, 114, -85, -68, 87, -29, 24, -85, -102, 18, 98, -62, -72, -71, 84, 81, -67, -84, 7, 89, 75, -38, -11, 23, -90, -72, -86, -67, -60, 92, -14, -17, 83, 60, -28, 40, 17, -61, -104, -85, -110, 104, 54, 62, -66, -106, 29, -51, 32, -109, -56, 59, -65, 91, -59, -108, 61, 73, -94, -13, 67, -15, 37, 120, 69, -68, 103, -10, 49, -94, -114, -107, 47, -36, 48, -71, 13, -13, -92, -32, 49, -95, 29, 72, -48, -58, -20, 86, -89, -100, 15, -19, -89, 19, 77, 101, -27, -65, -89, 76, 119, -114, -32, -115, -22, 21, 100, -109, 107, -81, -50, 78, -1, -109, -20, 107, -102, 101, -71, 68, -128, -30, 15, -45, 100, -104, -125, 19, -67, -64, 63, -35, -86, -127, 84, 64, -126, 68, -119, 62, -42, -12, -50, -62, -86, 13, 9, -14, -80, 23, -102, -116, 95, -121, -56, 80, -64, 96, -90, -94, -31, 117, -66, -100, 5, 45, 12, -5, -91, 121, -118, -95, -52, -76, 65, 92, 81, -10, -108, -29, -32, 122, 15, 29, -97, 23, 123, 14, 52, 58, 104, 100, -61, -24, -31, 84, -20, -101, -30, -20, 20, 65, -85, 122, 27, 107, 81, 59, -112, -110, -44, 67, 7, 39, 66, -72, 44, -97, 13};
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
    msg.setTimeStamp(0.84167761561022);
    msg.setSource(17342U);
    msg.setSourceEntity(60U);
    msg.setDestination(7387U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("FJHKFCNUSBDCSWBMJMOUJTCLCUEYNEWTFJJILYOZNWXTSEZLAKJFCGRMQIYILXLERHRSQDPDORIGDQVLTBPGFKJNHYAMLPKVTGHQDTRPIIHUXEXVINC");
    msg.plan_size = 21177U;
    msg.change_time = 0.35522813788893937;
    msg.change_sid = 56959U;
    msg.change_sname.assign("NDDUERLWREEVMIQKLXCFTRKUFOGMJYCHIPLNOFHBEWXNFKDJJDQCWNEAIRUFAPBXHLLOWARQYADYDPPJSGXUZVUAZDFXFYTSEDOSOLKIVARVDZJXYJWHVPBGNYIPOHZRCOMHAKOPQKIHUWGQUMCUXGUJTBXZZHSZJQTQELFRZYPJGTANWMNBMZCZGJBAQVTHYMMKKBLMCUBQSEITTNGRSYLXBISGPVHYENSICRVBACN");
    const signed char tmp_msg_0[] = {-3, -34, -120, 80, -8, 43, -61, 54, 63, -62, 84, -79, 115, -103, 27, -72, -101, 111, -21, -91, 57, -90, 87, 103, 52, -8, -51, -26, 119, -16, -10, -71, 36, -47, 111, 53, -94, -102, -11, -23, -67, -112, -29, 105, 8, -121, 42, -119, -23, 113, 94, 108, 21, -74, -31, 69, 56, -72, 102, -120, -39, -91};
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
    msg.setTimeStamp(0.5929671072031939);
    msg.setSource(10917U);
    msg.setSourceEntity(87U);
    msg.setDestination(62003U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("NOPSOBHQHFGPAOUGXRLROEAKZRJWUZCXVAWFEAJTKBJQIQMTSTEDNABNZPLEQKAWHLHOENVCHGHMUIVCYNROFXASPCCMFECVKNJDKZMGDMSUKBWSZAMXTRSJLOIQXFKXGTSUDMKKZRHPVNFCTXYCUJIPDWDFEIMTESDSBKFJVDYUQVOYGYYQPXTQDGJWARRHESJLMHHNQBPWOXIFZWIYBUMPGBVLZLCNTVWJBXLTCFGRIWEYGPYB");
    msg.plan_size = 19640U;
    msg.change_time = 0.6819877677243568;
    msg.change_sid = 17242U;
    msg.change_sname.assign("MNTZJRABYHXNMEVGBKQFXTZALIJRDVFVTWJPRHCSFTZGVUXTXQRQJPDFVVEGNRPWEEJSNROACNKRQOSCEXIUGOWNSDOTKPLCHLOBOKNBPSFHKBQCZANGUAXUKPTLHYCBIFJYSTGMPLYEPFJVQJSQAVUZKMLYLFMWDK");
    const signed char tmp_msg_0[] = {12, 94, 0, 11, 100, 27, 19, -68, 118, 47, -122, -85, 107, -50, 62, -36, -32, -87};
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
    msg.setTimeStamp(0.29003437922600517);
    msg.setSource(53311U);
    msg.setSourceEntity(80U);
    msg.setDestination(33522U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("PMRQOFIHOUCCKLMBKOPFECDUANACPYIZXTKLGFNOHCRX");
    msg.plan_size = 52343U;
    msg.change_time = 0.8098581289926198;
    msg.change_sid = 61817U;
    msg.change_sname.assign("AXYERGDBXKDYEIVYSBZTKJAGXCJMOSGSSDKWE");
    const signed char tmp_msg_0[] = {53, 80, -76, -3, -53, -51, 10, -79, 124, -44, 112, 61, 119, 44, 115, -13, -57, -30, -87, -26, 9, -108, 75, -118, -108, 35, -108, 55, 56, 70, 120, -75, 13, 28, -45, -78, -45, -101, 87, 73, -119, -24, 22, 111, -19, -97, 74, 79, 11, -18, -126, 65, -77, -26, 23, -44, 117, 34};
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
    msg.setTimeStamp(0.7978914066429871);
    msg.setSource(9922U);
    msg.setSourceEntity(220U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(147U);
    msg.type = 146U;
    msg.op = 185U;
    msg.request_id = 12218U;
    msg.plan_id.assign("YVSCGCPGPXNZMIGZLTDWKZVHXVIHNJGJKCKDVLCNTOFIQBPBNKSETUEJLWPFBVVJOCMQUXEXKLZMDOQUWRVZWPYDYRROIVBFHAGARLIFYEFYPLRMNXGDQSNJUPAHQIAHPCICAVMEBQXDPMFFEQJJMMOTDEGKLTDWXUOWEAUZAZSFOCUMOOZRUQEYHAJHHWSRQSKTNYRWUALSIRVLTQXMBTFNJSLUZNBDTWIBHEOJYKDKTBWXNRPSGFGIYZCCKH");
    msg.flags = 14890U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 41064U;
    tmp_msg_0.lat = 0.06426518890171329;
    tmp_msg_0.lon = 0.21666230048216883;
    tmp_msg_0.z = 0.4528809462439143;
    tmp_msg_0.z_units = 151U;
    tmp_msg_0.speed = 0.7390659405302717;
    tmp_msg_0.speed_units = 65U;
    tmp_msg_0.custom.assign("POZNVXRVVAHSDUEVPUQDMYMERMAAPMDXCYYFZKFINOWCJAHQPOVAREAKXWIZETKDOSKEWHBFOTUWZVRVAYTCYSLJUPXBNIBKFBMQPZHHKZXJWWFXKVRACXGYFNGSETSHQSCFRHIFZOIUCSJIZDNCTXR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GUJAYBTHUSJIFEFAUABHYPQFQSOOTBGLGFECWCTQXUYUSLKHSNCAPPCFVPJCJMJVEWQHOIPANISTDNVIYOZCNDKKUT");

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
    msg.setTimeStamp(0.9716276678512987);
    msg.setSource(7888U);
    msg.setSourceEntity(8U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(184U);
    msg.type = 175U;
    msg.op = 194U;
    msg.request_id = 39100U;
    msg.plan_id.assign("MGZXSZWKKLQGJHIKEDTRAZCBIYSJEDNIWKVHMTTIKWWEMZVXXKSRHKAOSFSRBNN");
    msg.flags = 56678U;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 123439353U;
    tmp_msg_0.status = 104U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WKONKLDPLRHKHPZZWNCWVNJOJGLCGGXYWPQMEFCJDVUUKMEHAYLETPVRSUMBDSWOAYCKSMEJARTEQEPUHTIZFOJVSFZLLUNOSCFAMLPCXFDIMEKLIYRJDFXKQQQXGMQJDNPJGVGEQSNAFHHLSBTGUYIDWUFXQQRUVMBOJPZBZBNHPGTJMTBATSONAZWFMIAZTVKRNWHGHYNIOIOZILUZHRXDT");

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
    msg.setTimeStamp(0.13585371530767443);
    msg.setSource(18690U);
    msg.setSourceEntity(3U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(11U);
    msg.type = 137U;
    msg.op = 64U;
    msg.request_id = 31301U;
    msg.plan_id.assign("PKGHLSDOKSXLZVBIAFNEBUQYEDTGURFGVKCJJISOJGPAATPOORFRQAXTRRRWCCBHXCXTBFMUGBQTSNETLZMDWOPIZHDBLOKMWNVWPGLEWYLJHVDLPYSDTICUPTNAZ");
    msg.flags = 49253U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 19404U;
    tmp_msg_0.custom.assign("FUITXUHFDSZLOLKKDRYNGYFRWTSISNCKAOCTYUHPLBRGSHHIXCFRMNMOSOYCBAZUWWGCIWCMUPUKZBCNGTLSDSZJXHYBJXQUVPVTVKVSIJWAAZMSIKJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DWMMSCYYMWLBQYGORNBZUYUJDVNOSTITWFMAKOOVIXDQKKXFGVAJVNKKEEBRIDPODFREGNBSNEPGJQUZRJAZIULIUHLVEATASLURWVDEPICCTKNJHGXFYPDTYHNGZNPLBGAWCWHTSXBHSQNLVMPTQCHTUDMVFQBZSZHGXAIBWWDMFLYQIAPURGZOEQCDOHPVRRZCFOUJH");

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
    msg.setTimeStamp(0.40733037020389795);
    msg.setSource(49921U);
    msg.setSourceEntity(62U);
    msg.setDestination(6821U);
    msg.setDestinationEntity(110U);
    msg.state = 53U;
    msg.plan_id.assign("ZPVNJRCCALCEQNMTBHHQXVBOPNTSXZOJTIFZVXYSJCQIPINUKFZHHFGXDXFVMNNCHOOBTVXLPHWAZXEQVSVRCARURDRFLWKGEUIRTWHZCWDW");
    msg.plan_eta = -438973957;
    msg.plan_progress = 0.49099996277457003;
    msg.man_id.assign("ITSZVSMHQIJRQVAICZBBMMHSHGXCQLYAAUVLTSHPKJOREAFJEKDBNLEVNFYHMPDTUERIIIQRMQWUSZCZMPGBTFSAOWNLOOUIBFECWLXDXFLTIVDUUQATBKBYQDYGEZXFNPZGJMDWRXIDMCAYFUKBJMJHSUEVJFGZGEOK");
    msg.man_type = 28989U;
    msg.man_eta = -1174354849;
    msg.last_outcome = 185U;

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
    msg.setTimeStamp(0.9328794517778654);
    msg.setSource(41341U);
    msg.setSourceEntity(185U);
    msg.setDestination(35602U);
    msg.setDestinationEntity(141U);
    msg.state = 242U;
    msg.plan_id.assign("SBCUQJRGOTQVXCTRXINODPAHOPLZIRATNQPVYVOPZHOIPIVHANGFARNVJATXKBKZJCZL");
    msg.plan_eta = -802694899;
    msg.plan_progress = 0.009175469585791629;
    msg.man_id.assign("VVSAYCVEEJMBIYIKQHFJKIWQAQVXRVAMLUOOTLYOZQBPXYPVDXJOMZPQCAIDYODOXDCFQXNYIMQECLGKEVTJTESUAFETJNIZKKEHLKSIZGXQMRZLKEUBH");
    msg.man_type = 44398U;
    msg.man_eta = 1395601782;
    msg.last_outcome = 155U;

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
    msg.setTimeStamp(0.506671230382445);
    msg.setSource(30356U);
    msg.setSourceEntity(40U);
    msg.setDestination(18625U);
    msg.setDestinationEntity(140U);
    msg.state = 126U;
    msg.plan_id.assign("OMIZPWVCLY");
    msg.plan_eta = 741338464;
    msg.plan_progress = 0.17732668726569967;
    msg.man_id.assign("QXAZIJPWNLLYYCTPCWQXAHMUUFVYCUFACKQDBPWDRHACNNNBQORXLBBWGEFOCHIWSJTKIVTJVKSXUKGDSYAVJMKJHLDCHMQTSDPPQEYOZKTBIOMUGRHZILUGOCKRVSVEZPMAOOPNWJGVFKDXDYNUQSWRAQ");
    msg.man_type = 34852U;
    msg.man_eta = -342249804;
    msg.last_outcome = 33U;

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
    msg.setTimeStamp(0.5201906100172032);
    msg.setSource(54678U);
    msg.setSourceEntity(91U);
    msg.setDestination(42471U);
    msg.setDestinationEntity(215U);
    msg.name.assign("CTDVFZGUGVFRKEVCPLJEOOEZMSKRUEHPTSRNCGQQLVBAPKYNTEBHEXIMGJBRKFPFJALRNSWRWDNHZIZKODOLDSCTLOCQFACJVUXJHRHRUYFWNCWDTNKNBREPDBSOPHZNXYUGDQIYWLHSNVEJ");
    msg.value.assign("XPWGGIVLUIQXGFYEVJITMCXTLXLDGBMXDOFQSVKWSCTORFQPMEWLAHNHKBYLSKTFXAEEMTTCEGXDYWQIQMLKGOUPSPBYEULEEJN");
    msg.type = 243U;
    msg.access = 75U;

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
    msg.setTimeStamp(0.18777696309316305);
    msg.setSource(37898U);
    msg.setSourceEntity(192U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(150U);
    msg.name.assign("GKOREGOWFELHEJVYQTUUVEYHQERVQCGUXZKAZERXDWKNHWDQMJDOIMNBKIDDRXZLXJEJXFBGJTSJTASNZPFCFZIKGROKWCKMGWKXWCTENTXAWWVBQUYJJABEZVOFPPZDUZHLCNXYADUAKPFRAOSYFBUDMMQGYTISOPRSIH");
    msg.value.assign("JSKOZTOLSIEXMKLWKEDTFTUWFNKCFBFTVSCWHNWGOPQZHINMHAVKISPNDLASKCTKRLZAJALMOTLYEVXAEZLGYRZBYQPKJXPXJV");
    msg.type = 220U;
    msg.access = 63U;

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
    msg.setTimeStamp(0.014881807213354192);
    msg.setSource(25053U);
    msg.setSourceEntity(148U);
    msg.setDestination(58750U);
    msg.setDestinationEntity(196U);
    msg.name.assign("QGZELFUZMUMGXMGVCWDDXXPMOSETJRNQQICKAOXPDSGIWWWFSNWBWKPYHVYCVPWJPHSNESDKRCHYZYKBATTZCJKBFKQHMLEARBSAAMEGOOVUDRVFBLJQQFMSXBPCJNTNBZGDUECRNXNBGAWVDP");
    msg.value.assign("FDNYAUSNCLHRVTLUFNFKFLFCWVWTIYDCBYSKZOATQWGEUOCEGSOTAGTHXXDEUOFGMLGMNYGMPIKJEKPDPEJBLKZZQQXLAMYSIVBLOFRNLQMJDJEFSKWWEZLORPXMEHZWKATDCFSZQWDGTHQRBDCVSMUZXMAUWUSWJHBKSVNHRIPIORTONYHVIRJYXUBPPHOZBZAMPIJIEQFPBBAJGVNWAASQNUQKTYRBEQICZVPVH");
    msg.type = 78U;
    msg.access = 196U;

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
    msg.setTimeStamp(0.617887577154909);
    msg.setSource(10032U);
    msg.setSourceEntity(208U);
    msg.setDestination(33059U);
    msg.setDestinationEntity(55U);
    msg.cmd = 243U;
    msg.op = 88U;
    msg.plan_id.assign("KPOOZEHONQWYIOWBRGNUKHBNRGJMYOCVKXTQMBLFSIBXCEELZMRZZTVCSKAFYJPXURGKCLU");
    msg.params.assign("UBHHGCSONNRAPXYEQVLJEWFEAJZBRVDLITWJWSQRPRSQQDZXFXLJDOVMACHMFFXPPHJYLBJYEKZBBUUABYOMLTXOORLSQCADNYDNEMNLPTXVRMXVMAOIFPNGIGACORGGPSFOBBE");

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
    msg.setTimeStamp(0.3898457164069101);
    msg.setSource(7045U);
    msg.setSourceEntity(78U);
    msg.setDestination(46715U);
    msg.setDestinationEntity(132U);
    msg.cmd = 84U;
    msg.op = 119U;
    msg.plan_id.assign("UTTMRIPAKQPTOWPKSDDEOYGCLFZEIFTZVRZOUKGZSCAOGYIQLNACXJEPWQWNJUZIEWEUPNVVWXPMFRTXSPOLZSHTCG");
    msg.params.assign("ZPGOKRATHPZLTGWLUCEJCDV");

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
    msg.setTimeStamp(0.2591205571902502);
    msg.setSource(53895U);
    msg.setSourceEntity(97U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(43U);
    msg.cmd = 234U;
    msg.op = 178U;
    msg.plan_id.assign("GAOUFNCLIAJSMPVMVVECMVTJYPWZAQYODZNLOMHJXKFQYFYVHYWTILBQQBG");
    msg.params.assign("COGWDGTSCRZHXRVMIH");

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
    msg.setTimeStamp(0.006722146714931987);
    msg.setSource(40790U);
    msg.setSourceEntity(19U);
    msg.setDestination(47890U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("UPFOGPLUZOILKNBXXBVAVWXSCGMEDRMGKUNMFAWGWONHZCTMEJHPHTXETXFYCTUUBTSDHJHOGCRSZISQUIJIZXENFUOJOVEQGGUYLHGLKVASMDBLPVHKFSEIQHNLOVYYTCPSMNITLTWYFOEBJMCXFPDSSHFMNRFKSQEXBCLQOYUZJTRMODIADVIW");
    msg.op = 91U;
    msg.lat = 0.5558398121949297;
    msg.lon = 0.1371657320419497;
    msg.height = 0.977945660732246;
    msg.x = 0.02732157851733652;
    msg.y = 0.18198185686405466;
    msg.z = 0.021235661258844574;
    msg.phi = 0.587739213815649;
    msg.theta = 0.5488832178700948;
    msg.psi = 0.3968089862119114;
    msg.vx = 0.22198914396530067;
    msg.vy = 0.25388523537822116;
    msg.vz = 0.760668297892733;
    msg.p = 0.725315884227529;
    msg.q = 0.9754850964136192;
    msg.r = 0.2887498349609383;
    msg.svx = 0.007615825835768586;
    msg.svy = 0.07502652362889939;
    msg.svz = 0.2068837249520833;

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
    msg.setTimeStamp(0.5704551173371515);
    msg.setSource(40907U);
    msg.setSourceEntity(217U);
    msg.setDestination(20663U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("PYXVZVRUDSFCQPKOLKYQVANJZJQEFKVKRIDLZXDEEXNLVZBJWBQHFKTCKWMBMTG");
    msg.op = 38U;
    msg.lat = 0.7655646350415966;
    msg.lon = 0.03241704118707489;
    msg.height = 0.32550632063782714;
    msg.x = 0.7133043632203159;
    msg.y = 0.10690432799404781;
    msg.z = 0.5658028951513598;
    msg.phi = 0.19817192916667992;
    msg.theta = 0.775960528809262;
    msg.psi = 0.44508425742832325;
    msg.vx = 0.9761023855799406;
    msg.vy = 0.8128119644053264;
    msg.vz = 0.39610431844008953;
    msg.p = 0.6458166868340324;
    msg.q = 0.0874807905943179;
    msg.r = 0.9167910035388603;
    msg.svx = 0.321400325541234;
    msg.svy = 0.8936373602116582;
    msg.svz = 0.5092939416478087;

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
    msg.setTimeStamp(0.4053877275308868);
    msg.setSource(9658U);
    msg.setSourceEntity(177U);
    msg.setDestination(41229U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("UHZVTFQLRMPZUOGXDKIFJDLXPJAJJUCPUACLSBTSJYMAFQROKBWTGBEKKIIODOYQENEAGJYJSMAYIQMIPNGWUQFZTXLBAPYCEAADODSQQHXKPTCEXOVHGTWGSFWBROVWWSKPDKLZDQLLWHVSUJHEHNKRCEGNMFCFCYBG");
    msg.op = 154U;
    msg.lat = 0.7245956952143304;
    msg.lon = 0.9917866134767092;
    msg.height = 0.9011833147087844;
    msg.x = 0.5759333881112698;
    msg.y = 0.3722276733191836;
    msg.z = 0.37241641968160666;
    msg.phi = 0.7431403401350224;
    msg.theta = 0.015346831667121807;
    msg.psi = 0.6395145558786614;
    msg.vx = 0.577652149647093;
    msg.vy = 0.9752527232280739;
    msg.vz = 0.8231803428907212;
    msg.p = 0.07342494267599897;
    msg.q = 0.9749895653716447;
    msg.r = 0.3719852354036758;
    msg.svx = 0.6370053050506403;
    msg.svy = 0.7767606364414947;
    msg.svz = 0.8014396286526685;

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
    msg.setTimeStamp(0.6491358364765232);
    msg.setSource(9855U);
    msg.setSourceEntity(41U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("XIVVCIHYRBTPJNRBTGICEZWXOFNIICWHTFZDHUPPSMKIKWLSBJEZDXCOUELIVSGXZOUQFCZFMHUFXGTAWJBUSSEVCBTNAADTYETRTMYNSYGHFKYHGFVXUBNVUDAKSFVNPKYHHQEGPM");
    msg.type = 98U;
    msg.properties = 196U;
    msg.durations.assign("NYBANXJYZSXCNRTTKUAAFTMDVZEAOBXOLUKRIZMFQBJFHGSVRPAHGCWQXLGS");
    msg.distances.assign("CBXZIHZSQXJHRKHOFQWAGYOVBYGVUNYFCKEBQRTUAJXCDFCLMBXPQHTKCMSN");
    msg.actions.assign("CXIGGWYPCGVUYIFOHAUBIKUJPBOEDGZKEBYYNJGJTKERCAOMWLLSNFYEMXSETLIKNZKMUZKJIXFOWWJZSLVECJYVEVVWFUWVGNQAJIHEAWQDRENVCD");
    msg.fuel.assign("TCBSLBNGNCZFLTYOXWSQXGSJTPKYKOITZEAVACMSTLFHOMUUNHTGVGRQMYUIMJCGXHPBDUHJGROQXGNVDWNMAUPLOZSUBZAAOLJ");

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
    msg.setTimeStamp(0.7522578410242737);
    msg.setSource(858U);
    msg.setSourceEntity(27U);
    msg.setDestination(32430U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("XHUNLHMEDWHKLYQBCNYUHYPJSFZJKIKBLCWFJFMDNSRBPWADVUFQXAYLEEGTAXIXJSFEIGAWSQXINFIYSVYYURCXVNBCARUTEZYREHHSDQRWOWDRZCLCZYJBNTMVLSVUWSROZIABGQONBCIQQJMVAKWLYUEONTLZVGQPDZTJCMDQPAXIBOOBUTOUDXGV");
    msg.type = 216U;
    msg.properties = 8U;
    msg.durations.assign("CZXUKIAOJXAEQVRFBHAIJASCPIGBOQWZJBHZTHLWEXTKYMCNBXLBXFULKJLCOCGKKTDYAIKVSPQYRSMMTXSDBDJODURLBOZMYPSUVRNPZJIJJJAQWDWGTDLKOHQACVCPFKYPSYMAPWTRDIBZDCAIOOHPZFLLXEBIETYVVMNNGZVUQADPCMYYNXWVNFVEPGFHFORULWUKETLBMHNSRSXGVGISXNQRWITQDTCFJNSGEFRORUHHGWEUEQMYFEK");
    msg.distances.assign("LZUBNCAUJAGAHCFAEJUIOWOGEQJJOPFDKQBNLHGGEFXKOTWDXHMKYQTMINTRJTRXCYAPLCOZZZZNIQDGKEIZBYEMOQQR");
    msg.actions.assign("GJAABWSLPPBVFSFSODKRCSILPVPMYYVKQBAZNYKCRMQFMURNGNRPIEBAEZMVHLSMIZJIKEAGYRWEFBIIQPFMJVRZHCEATVOTZCNEDRLWIGXWEKAOQTLKYWKJQOIIFSXPCUOTULAJCWMXHULGFKXZOPOHLGUDQGKEDXDCLBHCSWTOPHY");
    msg.fuel.assign("UJYWHUPLEFIKZPW");

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
    msg.setTimeStamp(0.23125555791121977);
    msg.setSource(57762U);
    msg.setSourceEntity(121U);
    msg.setDestination(32638U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("XFAHLCCLKFQURDUYHBKOWYNUSBPOGUYSQYSJIHRLFECWTJKKUURIGSSCVDAKIXIDDXCIDUWYOQEQNPEXARACTLPJIFPELAZNSVIOWBWSOJTXMABATWZQPOKMBVHPNVKGRMYWTMJGZYTGLUCTSYXJTBHCAMEODUQEFUJZEGECZENZRFOFJFBJVPKZXIXNWZWRJNMDGRPVCVTDVGYSQLWDNXMHI");
    msg.type = 115U;
    msg.properties = 133U;
    msg.durations.assign("EUUHVKEMCPMBIDJGYJZOYKGILGWOBJNRIHZHDFHIWZAAYZEQPDNRTPSPXQNWFMUKSBVDXVQXKTXERJWHGUESCRYPDQNIIMWVWLXBAIBWFYCQZSOGDUULYSMYLPLSLOHBTQMFRKVGVTYJNCCPNRJHZIMDSFAPQTSJXVAAURHTOCLGXCTBBEQOHAYPKERCQNRQLGIOUTXHBXJEAIVWNJVOOGWJFZEMLTPBSMLOFFNEDTDZZU");
    msg.distances.assign("PHACTXDHJFMUIYLDPWWIIKUZUKKBGIIONECLJXPFWCCSTWUDJLTHJJDHYVQWBDZNLDFDVYNEZJQNFBKVVARWKBOXHCQBECLRBCDPTYIERIRTRTBQJCMUPRMGPWREMKSXOHLZBDATVKUQEUCLMHEINOXPP");
    msg.actions.assign("DCMHHXJMDIMUNEWWDZXI");
    msg.fuel.assign("BYABUSAAFIMQWJIIGBZKYVAXJFNCMIMCSSKPZWOEVQPWKETJWUALLSHVTWAMNMCSPQITEIJHXBEMVLHYDFIEBHHGZBYKYTUTAKMCBSWDJNRXXEHHRDFPJGBYCURBCFNDCVVXZRYPDAGOTROIVDPKOGIDUEFUKYPXXWONESLKZRJOZTUSLLOLUOQOKZWRNZWJSCCFLH");

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
    msg.setTimeStamp(0.2445035233008903);
    msg.setSource(18590U);
    msg.setSourceEntity(67U);
    msg.setDestination(3911U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.022229738803764443;
    msg.lon = 0.7342528528570776;
    msg.depth = 0.2869308044343044;
    msg.roll = 0.4755796407671117;
    msg.pitch = 0.5308848542166671;
    msg.yaw = 0.07428927247912287;
    msg.rcp_time = 0.731532249270688;
    msg.sid.assign("IFLXXUVYMOSGUWYHLMKVYNKPIYKJGIDQJJMEATZSEOQQDERFJIHGJBTTWAAFXWLPLCAFBTDZUPUXNONNVOJAKBPRHQIAUBKMRROSCFGOCMFUYBWXPSRJIZENZWHOECQLSSYBGQUDSHRYWDRVNQWHICZ");
    msg.s_type = 209U;

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
    msg.setTimeStamp(0.9491608596132093);
    msg.setSource(21668U);
    msg.setSourceEntity(117U);
    msg.setDestination(41477U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.5928174695014987;
    msg.lon = 0.4329681019968449;
    msg.depth = 0.8367406700335761;
    msg.roll = 0.9009822272338757;
    msg.pitch = 0.22236851016786552;
    msg.yaw = 0.22865054994643552;
    msg.rcp_time = 0.4854721958941587;
    msg.sid.assign("VPWZCJBGVRFFBIXOIXZTEUINDJOOKAMDZYMPAIKYLDDEWYVHXLYANPJQVWFPTKQAQCEZUHVFPKYRSPGDCYTVMUNYOLCIZTOFDDYFLWRRBBTMZKBQRXRFQMFDFQWEULWNISWPBIZOJSQUSGDWCFVN");
    msg.s_type = 208U;

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
    msg.setTimeStamp(0.24635545655783497);
    msg.setSource(46404U);
    msg.setSourceEntity(23U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.5923392396220096;
    msg.lon = 0.3538449745809068;
    msg.depth = 0.36250917585563713;
    msg.roll = 0.4937634594079163;
    msg.pitch = 0.643502354878816;
    msg.yaw = 0.42296899472486316;
    msg.rcp_time = 0.37550286080623163;
    msg.sid.assign("GDVQHEKAYNDYEBJLYOECCLMERDBZDGWNFFIGQVKHCAPHIQUVTINUWEQXZXTPZFXITOVCBUCTMCJIRKSOEFCJEPABTPFPHTUZKDWYSEDGRRLSWNBTVMNCQLUQLWSVHGYGTRHNMSIOMQPJXGZARKYOETYHZGNKQHBSPFSXSXKAXJWDUUJWMHGQYRBJGJTFFSRIYC");
    msg.s_type = 148U;

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
    msg.setTimeStamp(0.8047217650430842);
    msg.setSource(33536U);
    msg.setSourceEntity(43U);
    msg.setDestination(18490U);
    msg.setDestinationEntity(54U);
    msg.id.assign("RJRSUCGGKPZGCXMLQQAGBASFIJXKSNQWWLNVQVVPFDSTQWXXKTFYCRCTPVQFESCYMXHQKQUBEZQHYUKOWPJWCIUWDGDPYZECATLEJJHNSLLDNVNKDMBLBVGRGUJDIBNQXSJIMAPLWOBOBYEGIWMHDHVEOAMUSANPMCXHTPHVKKZYRTPZJCLFSKZZRTJGACOWDZMERGRODAXIXYUTTFIYVTBOHMLRFWNFEFUUEZNYS");
    msg.sensor_class.assign("QALNPIJNDSXFTZPYDNGHMBZYJILCWROVHNUQBWIWVLJMYAIXQQXZHLJQOOSSLMTKIAZRPYXSKSKFGOAGFYFVDCUZQQDEFFRHLJOGVRKWNENLPDUELHGESNXUTHYRUKWTBVAROCBGVCFRZGWULKSBOVNVBBKQELEPVTNJNWDRRYQBIOPMZPXBITW");
    msg.lat = 0.8337890751306588;
    msg.lon = 0.5277933585947933;
    msg.alt = 0.9894609025949404;
    msg.heading = 0.47214301508327106;
    msg.data.assign("WWUJZHJKPWKZQWJTGBFZADVATKHSZSCJJXYYQFBUNUBMIUFIOUGGYXRLWNNBZCRPEHJNDJQAATZKUBASUQVOLIGXCSOYVZPLZVQQWFDHDRSPDQHHVEBUPJPKUGSLOYTCNIGVCPOTGOOBFNLTIBREKATKITJWARHPSNSCXEEEIDMEFCYGSECLWOMELFQAHTBLIGVKOFSWMDJMNYFRFHQIIOVRPTLKXXEMWGRAXMC");

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
    msg.setTimeStamp(0.6577370223642148);
    msg.setSource(41680U);
    msg.setSourceEntity(114U);
    msg.setDestination(55316U);
    msg.setDestinationEntity(251U);
    msg.id.assign("HNHNEIWKLZTKSQUQSZJLYFKMIEEXCKYIRYXIAAUUMUVLCVAKUODTNNPVSACCRWIJWWVQVOZAFDFGEHZFYNWMOCXLTGIHGNNYEDYPLXHRCRQQLOCAWSDURPGD");
    msg.sensor_class.assign("KJNDLDSBXOFOPAWGOIJMVRHFXWULECIZAQZKWKYWVQQLFHQZIHHTDDSMPRWMVQQMIOBRFCJLMBMMSANRGWEZCGKSPUQNCOPKDHYPVCUXPMVMHZJDEWNRTHSBLVCJDEGEPTEBXUPEVECOGTFNBFVABYRYFKXAQIOZUFTCGIDOIXDPJISABWKEEYYKNHFUHUROCYWCTABZUMTVKULYNSZ");
    msg.lat = 0.9472662486640843;
    msg.lon = 0.787477895944621;
    msg.alt = 0.8264334265098375;
    msg.heading = 0.43668792546142887;
    msg.data.assign("KQKGXLPNPDFMWZKJBZTYPTQEXGZJIMFLRNJNJUEUQEETBIYXYYQZMDRWKMZFASIFSVRQCWNKWWALGVCQQASHGRKACZYDFJDISPXEUNXVOOUORJVDLODMBOPUCBBGSBEOQMBYERALUHPUYWKDSONWRVOYQGJDFKDHIUVMMHPI");

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
    msg.setTimeStamp(0.052463658196555296);
    msg.setSource(49207U);
    msg.setSourceEntity(41U);
    msg.setDestination(57976U);
    msg.setDestinationEntity(72U);
    msg.id.assign("ZWIYRNPETLTOXPRHVEDJWSOEBKNWILRDONJIAFWYXIULFKGOIBGUQGNNWJTMESDUJYUHFC");
    msg.sensor_class.assign("GAJWPHJVRPCLLKYUBVGTDHDRVNPADTFJSXKLGOQXTYDBCMHDUBRBTUWBZXLHMDGEPPBKICKMAFOBFCTKXMWIETQALEWQPZJRQSPNZRTHKWDRULQNDWOAEHIKANLHJJLAXEGFQICCJIVXUOXHWOPVVNSOBMHTRUNWOIZSMMDVSVGTEJIPWF");
    msg.lat = 0.9352954663266994;
    msg.lon = 0.1692732581390971;
    msg.alt = 0.42023755832922105;
    msg.heading = 0.507438897956139;
    msg.data.assign("BGDEUEHZRBXJXMCNBTNKAAIDSVSJQDAETDKFRKIHOYALXYYTSMKP");

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
    msg.setTimeStamp(0.08835178433772006);
    msg.setSource(53842U);
    msg.setSourceEntity(66U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(205U);
    msg.id.assign("YIRNATDKDJWFHDDAJKVSLNXNXRVEPOEZFVLZA");

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
    msg.setTimeStamp(0.8925635875419766);
    msg.setSource(33657U);
    msg.setSourceEntity(7U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(197U);
    msg.id.assign("LJXGSGBJSRPNJAXCWBUKASEZVHRYIBLOVOKLMIHZNQDCAUHPCREHFWJNYFXSQAKYOWZZZCSOEKTLVBNDGPCSUNEFPI");

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
    msg.setTimeStamp(0.42366263987826436);
    msg.setSource(19676U);
    msg.setSourceEntity(69U);
    msg.setDestination(62555U);
    msg.setDestinationEntity(52U);
    msg.id.assign("XXOEYWQZZYKGLCHFQBLVPICNKLXNNRRSIHWSHOQTVJRQXKVGXJTPHSAIRMLQBFWSQLDDWCWE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TNUNDNFTSTERALLFZVCOQLKIMHBSLIQREZUKTREVMFDXCFXFGWKGC");
    tmp_msg_0.feature_type = 34U;
    tmp_msg_0.rgb_red = 147U;
    tmp_msg_0.rgb_green = 84U;
    tmp_msg_0.rgb_blue = 22U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5662819615172459;
    tmp_tmp_msg_0_0.lon = 0.7760494821649931;
    tmp_tmp_msg_0_0.alt = 0.9517946102165947;
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
    msg.setTimeStamp(0.5703533652527906);
    msg.setSource(22583U);
    msg.setSourceEntity(199U);
    msg.setDestination(63704U);
    msg.setDestinationEntity(175U);
    msg.id.assign("UFUITTDOPDQFXTUMDEIKQMYWUFNSJZAKVDSEEFOGYHFMYAYEBGHIUL");
    msg.feature_type = 133U;
    msg.rgb_red = 75U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 2U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.17088662713736258;
    tmp_msg_0.lon = 0.6746443944646872;
    tmp_msg_0.alt = 0.0903471782241505;
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
    msg.setTimeStamp(0.41135289077538406);
    msg.setSource(16454U);
    msg.setSourceEntity(188U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(65U);
    msg.id.assign("UJJQWOZNXLXYLQVLXHPJNIRUBNFBJSDWEOSMXCSAHQDOTTJRWTRHZBQFCESBBKISOZTWHOBMJGYOOZRSFBVHGMLWJKIYVIGPVRUUWPATNOHPVCHCKPMKEITVHEIWGYMLCJFZUXIXMDALSNIQOPJTDZLZJPHYFRYMQUFPGFDDNGXAYLBGQKARZTAAORBYVECWFGUSWZVEKAHDSGQMRWFPIYLKCAXXADNNCLS");
    msg.feature_type = 5U;
    msg.rgb_red = 145U;
    msg.rgb_green = 37U;
    msg.rgb_blue = 180U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3363513220542428;
    tmp_msg_0.lon = 0.34526636074754014;
    tmp_msg_0.alt = 0.839109494263502;
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
    msg.setTimeStamp(0.1133180201462628);
    msg.setSource(35033U);
    msg.setSourceEntity(23U);
    msg.setDestination(31169U);
    msg.setDestinationEntity(140U);
    msg.id.assign("NGNIMMSOEWMXPUEGRQGFYXLSWRAKKQAXFODKITKYKQDWGMFTCCWCVIBOCUXHMENG");
    msg.feature_type = 160U;
    msg.rgb_red = 58U;
    msg.rgb_green = 95U;
    msg.rgb_blue = 188U;

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
    msg.setTimeStamp(0.42290147067753503);
    msg.setSource(34018U);
    msg.setSourceEntity(112U);
    msg.setDestination(11846U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.9442978166204926;
    msg.lon = 0.7039492163277852;
    msg.alt = 0.24673243141826273;

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
    msg.setTimeStamp(0.3666279301076327);
    msg.setSource(55951U);
    msg.setSourceEntity(180U);
    msg.setDestination(61149U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.26736744518773303;
    msg.lon = 0.6616769863728121;
    msg.alt = 0.653565049553328;

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
    msg.setTimeStamp(0.36411814597308223);
    msg.setSource(45866U);
    msg.setSourceEntity(30U);
    msg.setDestination(37929U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.2969505538367091;
    msg.lon = 0.964509916082059;
    msg.alt = 0.20746748904977186;

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
    msg.setTimeStamp(0.7669422239760958);
    msg.setSource(42756U);
    msg.setSourceEntity(42U);
    msg.setDestination(57714U);
    msg.setDestinationEntity(30U);
    msg.type = 18U;
    msg.id.assign("WIZYRFNWYRVETLDMUDERZ");
    IMC::Frequency tmp_msg_0;
    tmp_msg_0.value = 0.1144686921109691;
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
    msg.setTimeStamp(0.3604451263231838);
    msg.setSource(49095U);
    msg.setSourceEntity(24U);
    msg.setDestination(64920U);
    msg.setDestinationEntity(3U);
    msg.type = 33U;
    msg.id.assign("XREPBLPDJILMICGEXOXUNTUBSAKMZOPTLUIQPRFHFZACVFBTGBXUWZHSKRCVDWNJAVJRNTQVVNSSKONADBGJZVSRAPYEFXYDJISMCMXIBXHDGKBLZEKBRWUCOQDTNROQTZJMIPCVSSHOCRLULCWLPWIDSHYAFFLKXHEEQWNIKZMSRGYITBKCXNFKPQEKVFUPTWPBZGOXZOWAFOEQMAWJLHDDOVYGJYR");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 221U;
    tmp_msg_0.error_count = 155U;
    tmp_msg_0.error_ents.assign("AQNDPSRUSXVZXMETPQXFSVTAOMLIJANPQOLDNXGTXXPHOYWEIQGASMDQNHKZRIOJQVLMPDDPOPISZNXUFUCFODSKETWEAKNJBBJWJAZBNCXBDSCSSCBGYLGARIERLHJHELWAXHGTKIVYQURJKCGYGRSUZOJJAQ");
    tmp_msg_0.maneuver_type = 65214U;
    tmp_msg_0.maneuver_stime = 0.11469515827339827;
    tmp_msg_0.maneuver_eta = 30927U;
    tmp_msg_0.control_loops = 3385065944U;
    tmp_msg_0.flags = 154U;
    tmp_msg_0.last_error.assign("MROSIYSFZENJOCXYEZCVDDWVZHRBEWDGBRHCKYCYJXJYFDZDUPSJWWPAWBZTHXLGGXXEEEFLLNYQBYLKQKAJXVIUOQGW");
    tmp_msg_0.last_error_time = 0.218670917742245;
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
    msg.setTimeStamp(0.6475795446795436);
    msg.setSource(60810U);
    msg.setSourceEntity(191U);
    msg.setDestination(35583U);
    msg.setDestinationEntity(77U);
    msg.type = 188U;
    msg.id.assign("TKAROQVEFGAKMOGHTAENYMHKE");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 172U;
    tmp_msg_0.label.assign("LJMISJNHNZEQJRUJXRPBBLVUZLPDYTWNXIRQYGCHPWAOSWCWHWKJENAWUAGHJARFRN");
    tmp_msg_0.component.assign("RSMWJPQNWGTSLJZCSRSHBSWMJKVARXQMNKRLBYBQNAKHLNXVHGDZVSLCDSGMTRYVMVFCJCJIEESFUFOUUXAOQFYTDOFNTLBZJOGUWGLTWK");
    tmp_msg_0.act_time = 38395U;
    tmp_msg_0.deact_time = 30629U;
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
    msg.setTimeStamp(0.6379158739992995);
    msg.setSource(50672U);
    msg.setSourceEntity(117U);
    msg.setDestination(26758U);
    msg.setDestinationEntity(171U);
    msg.localname.assign("OVRWTJNVQKKEFCGLRQIEYRNRAHYVSUOLOGUBMSUYYSPSLPGUDZTMDHGOHTXFFRLIWXBJRMUKTDXCGZYZQGSCNDEGCVUGPJM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RLNBFLUIQYTEGORANZQPTRIAUTYWCEBEEAFSDDYFWLHFCOBXPKHXIDQXGSNOGZDYEUHTRLSOVRZMBWQRCCDLWIOTBUCLYTNWQZUGCWZDVLVERHGQTQ");
    tmp_msg_0.sys_type = 244U;
    tmp_msg_0.owner = 5923U;
    tmp_msg_0.lat = 0.7057957160932651;
    tmp_msg_0.lon = 0.4254245899672129;
    tmp_msg_0.height = 0.696208363503311;
    tmp_msg_0.services.assign("XQKSAPAXRYEMIZFNCAGFDELHONXFONPPNPFSZUJJYMDVURBNZWURHSAGTSHWXTJTZKCLAOZODGLWGARWCQCQJYENJQKUULEJUJWYZAMEZHHOSHIMEOFLFXNZKYXQTYTVKICBVSXVGPVDUEIBSMBVWNYDMMKTPX");
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
    msg.setTimeStamp(0.5950783691652884);
    msg.setSource(8063U);
    msg.setSourceEntity(192U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(243U);
    msg.localname.assign("ODNGFZEWYLLSOLGXNUDTEYMZZPVVXQQUUKVPLISGSUKAYQQWHMJARVFTSJHMXOATWAXRMKIHXZBNPEJKKIEROCNYBYOKCGFUSPPJTTHBLMWLQOHGENQIVCRLWECUPYVT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PFNDSTTFJFJIKRXECNNYXZLISBLLISKHUFATQRJAVALDVPEOWSYOPK");
    tmp_msg_0.sys_type = 235U;
    tmp_msg_0.owner = 32222U;
    tmp_msg_0.lat = 0.7863879538375411;
    tmp_msg_0.lon = 0.38537316183972403;
    tmp_msg_0.height = 0.2915763807194658;
    tmp_msg_0.services.assign("ZUGNRDFNUSBHQXAPYWBORYLXBLBUZWYKGFJWEGSPSTQCUVTKEXUPAHWEHYLUPOWMNOHIWASJUJDUEGZJJGOZTJECKPDHKFDLIMAETEDSHVZRTAWIGFRNBDVSLBDHXTYR");
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
    msg.setTimeStamp(0.20077128164616787);
    msg.setSource(16765U);
    msg.setSourceEntity(2U);
    msg.setDestination(36903U);
    msg.setDestinationEntity(15U);
    msg.localname.assign("EGLCKLVMGPWMSHSITXEXDILYUNTETKVRJTAGJALGZNIVVWIKELYINUZSBTAUJQQCRSRGHNTXXXYPYNONMOYOKDLSBPHPZCVWVZZQMHRJMIZURFOGDURPTJBUZJHGVORFHLTSWQLDCMDUSNXCSHKUEQFTACDSWCAQZCPIJQJNIWZBRWMPNEQAXXO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZGRVNQGSYHECAOWQAICIYNUSWHZJUYLQOPAUROWWDAWJFXHJNLEZLLETGCMOEPIDDTBZOKPXIYUZBQFPUHZBGPYGHXJKXABRFMVVGVENIKTKJVSYQDBYXLKHVPGNGNWDRXLOFNX");
    tmp_msg_0.sys_type = 99U;
    tmp_msg_0.owner = 10654U;
    tmp_msg_0.lat = 0.2157087437756673;
    tmp_msg_0.lon = 0.29476733160614976;
    tmp_msg_0.height = 0.30042540223601744;
    tmp_msg_0.services.assign("MFAZODXJRNWPVDRGSDAVBEQKQNUAYCVIQWBOTOXKRKPSCUKZSXYARYOUGGIYRELPUTSFGGTNAFXJLOKXEQTMZEFURLLKDVVRSEOZEXTPWPBBHOQRXBQYIHABUEWSJVNZBGWPIQDLHLTZKPAIFHNQGHCHCSUJBYJSMKOZMRMCMWFWVPDZHBUAPFKCDNUHQMIWJSIEBLJIQUNXKTCEDIJRYPYTLTEMXYGCZGGMYVI");
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
    msg.setTimeStamp(0.3031579083016903);
    msg.setSource(29227U);
    msg.setSourceEntity(92U);
    msg.setDestination(32281U);
    msg.setDestinationEntity(223U);
    msg.timeline.assign("JBFRGTZXIITSRRFBUJEMLXWCOZUYSQYVUYLJYQGMLKSHXOUCZSBVEGTYCWNIBOHNXLWQZNCPZQIZDCUQPAMKBCDTHFOUWULYVLDOAAOOEJRNTSVIEQBHDWAKGBKRNDTGMJXAXSWLFHSQRREGG");
    msg.predicate.assign("PAJOPWHZOZMGSKZPYCEGTYFAIWQOMFROFSRMNIIVKZXDBSGDREVANTIHKYYLAZEIKAVDGKDIHCXAMFMXUDQXSXNFVVOBSNUTGNQNYXLKQCWNNAJFILPJXPUEYOCRKUEWRHFLTFPLQMCIBVTUSSTWVQQUAJEVAHRBEBZPO");
    msg.attributes.assign("WDTVJDLTZILNKUTGIFZLOMGXTXAQFMRPGBWPQUTOUQVMQYKLTTEWOLCXOVCRZZNGUYJQRFDCXSVQUUGYRLHLNXUWDOEHZSKKAMCKPKSJRQMHNLGUVTNWIP");

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
    msg.setTimeStamp(0.24925718560562338);
    msg.setSource(13709U);
    msg.setSourceEntity(154U);
    msg.setDestination(50986U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("HMTADIUZJKUTFFIKBDUHAAJGLORWUBRXCINKSDQGJVDANAWYYZHQMGZJRZEAOIHKTEOQXVFFCEAMEWCLXBZTODYVSGXGSFSQCVZYSROMSPAPIGIJIEPGZFDVWYRLWGMHPPCWLQUCHPBJWTZFBOTMXQLEYRVLZBJJRXENLVHESOUEHINWQYDKPSDPBDMXYILVSEGTNSJFNKRPHRCCMWODR");
    msg.predicate.assign("JKIRQYCIKNVDOYXDLWXRRHUXGBIJWETOVYRNWFFJLOSOGTGABSPGULREZNNCKKDFFZYAASPDNVWSZPCTAYYPTXC");
    msg.attributes.assign("GTHVTHVEIQGSXYVOPTZDSPFLMAPNZNOBVFIDJUJAWNIQUAQOKDQUXFKSRMFMDGXYCJEPNBMOUYZBKBVKJRVUILNHAYEYMPOZDTWALPCXCHUWDPHWTSMIBFSSKBEXEQNIRWGGYSBLXYXWALZEEQCWXM");

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
    msg.setTimeStamp(0.23549174607365442);
    msg.setSource(43386U);
    msg.setSourceEntity(138U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(231U);
    msg.timeline.assign("OHMACYZEKUYLNUHXAOYAPTWPXQEVBXTZVIGNNTREBDUJSWMWKEXJJUYIEKPIZKDJNUJXFNDWLYGXFCRDBWODDUKLOCQCALVRWWZFOLXIIQTFYTRBBQVSSZVHBDLMTAGCNQLSEVRQRAPSSBFWHMCHRGQCMYKIZUIUGTBSAPVPMYCQBCVKQTAOGXFGOKJOHLHDLNSOGWRNDZTSYPT");
    msg.predicate.assign("MDMHGKOWKINJJLIDMBVEYKKFDWQFOH");
    msg.attributes.assign("VZRTJBFXFIKWJDDHOSOMFDDHSAHMIENGRUFLMAOYQTQBPOVTEHHKPTLYMKJOZVSYNCHVYLJRFGJTAWQBNVFTXTLKPNWDMUCCYJKNCUDTPOSOOJDSPQCYEGSYDXNUQIBXQDBWZMGGAOXKJWBFKZEIPSICAQXQXVLIM");

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
    msg.setTimeStamp(0.040269673800191974);
    msg.setSource(56982U);
    msg.setSourceEntity(229U);
    msg.setDestination(20335U);
    msg.setDestinationEntity(64U);
    msg.command = 206U;
    msg.goal_id.assign("OVWFMDMEGXAAZZEHCDLSZTPFDCIXIXGXIHEEEOJXPDFHHFLKFRRZTDVMNXTGZUPSBYOVNZXLKAAKHTWKULIXYUCKSDBBCJZASLLWWCGBGKDSMODPJRPZWMHJWHOYJYQRBIONQYHSECQNMPKTLBQAMOVUGXHELRLGVCE");
    msg.goal_xml.assign("MQQPTETLPGVMUFHVF");

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
    msg.setTimeStamp(0.231255040110787);
    msg.setSource(36724U);
    msg.setSourceEntity(130U);
    msg.setDestination(49522U);
    msg.setDestinationEntity(235U);
    msg.command = 192U;
    msg.goal_id.assign("ZFUSJTRBDYGLXXQNYHCDBHWPFSDXLJQERMBIYKSOSGVZTCWZEJGEKBRUMVLIIZMTEQITVQPCTSTVQKLHDIHLNARYXHCZHWNXPHXZCAFAKJPNJMVKVIBSEAONXDKKAGPQYCCGXRGMEZURMZF");
    msg.goal_xml.assign("PRFXTSBTSUAAUMHMGJKFHJEGIBRBEGIVHZIHWADWUNCEYOTQQSLJKDOOSMYFEPXGJXZYVDHSMECOOCPTIGAMBLJPUCYVXFEHUZSIICINBNVCXMWRQYGUAVWCFHLJMHFVMNTCZDPSQTORFKNBMLSLIBYUEGRYZQAWZFT");

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
    msg.setTimeStamp(0.31141839128854454);
    msg.setSource(26905U);
    msg.setSourceEntity(82U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(177U);
    msg.command = 82U;
    msg.goal_id.assign("GWFKZPXYZZUCSROJAQNZGVWKDFSBYGLNCQWOLAFATCCCHUTHOVNVNYENZKWZAJSNEBLQDSCUMTFWGBVWERJBXEPXGDPCONPBYUCUZLQ");
    msg.goal_xml.assign("QRSWECULWFUHYKDDXHVBGOMJTSVSOBFUHHXVEBYZZPNMILCVJESCKLAPYVQGRHIHAZKGGPYYBQGZMSVHFGKQVOEBMPAYUTIPIJWPMSBEIGCAAREKDTNXUEQTIFUAFLRNQWVZJD");

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
    msg.setTimeStamp(0.35253290403261994);
    msg.setSource(2681U);
    msg.setSourceEntity(211U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(54U);
    msg.op = 127U;
    msg.goal_id.assign("HCRTRDRCPSGASDNBRGAMDBBBTWLYNJWPCNKNAJYCQKVXAHUNZYWPSTPKBXVHGUJOGCIWFXMQGPETQWVLDNDLRMXGOVZKUFNXMFLMSAWJQHIUPJMHDBTIAPMCPOZJOVDUZCBWXPLMETSKZEAVOZXTWHLOIOFLYUTFLHISSMOJCSHBWBVNGMQFJFAJZKIEUOQSRDRXNXUAZHHSIIVIEBGXJNEEYPGYFZCERFZEEUYTKVQY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JCQKQFHXSUHZHOJRFEKMBYGIOAUTBIALJPUVLGUKHDPLETXWNQUTQSHTGIWNEFDBNNTGXODAIGXMMHPGZOVVPOKJAQWEJPBIAZLZEUPUSDEUYXWYDBYMDCQJBEPXVQIDMJEXYCYECRLAJWBHKPUZTRCRLMRSZRS");
    tmp_msg_0.predicate.assign("JCXRVVIKSHBQSNICEXRYZLBGKBIRTJDYMEZFEADMZILFIYXUXTAKFINTIKAWBZDJRYHMFPBVFXQHQHYJYWCDGBFFAUQAHGKGPNMDPAXZQWFYMWDPOJGUUWHTTSQYSPJTDFEEYNNUSLQCCRK");
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
    msg.setTimeStamp(0.5649033581744283);
    msg.setSource(39959U);
    msg.setSourceEntity(95U);
    msg.setDestination(48177U);
    msg.setDestinationEntity(61U);
    msg.op = 204U;
    msg.goal_id.assign("UOFTPFPCNYITQNMLJAQMLWVCTVDWKBVICURHQHEBMQPGYSXRUXCXXQLBYTUOCOTEULSZWFMQUDYJBQSSBDHHMBYKRGBBZYAYVGRVRYJFKDZAGTISVKHFRGEVCPQTUZHZJSBINNWFDXITKEANXUEZAGLMSDPMCNEMMZAJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IKQANZJOODIYZRNBIZHITFUFGEFKHWSLPVYQKDGELDPLPWRUAXVJWBSJNXHFYVWQKCGFAACHUOJSSPUQQUBGMDGRHQEVITSQBOKTXCKGUEBZYOEO");
    tmp_msg_0.predicate.assign("CNOOFMJVSHSRYJBYAQVPNHVFNARYGUNOUHOUISPDHOSAPBBMRGFSLXWJKCAITKRXYULCZZEGIZELQUWMRJZLARZTRZSXMFNRTVQKCBQSCPKTONQKWAGFWYZBXHEIGXTTKNDFIVDCJXVRKEDRAJISFYOXBVQILUIPKPWHHPHDTWMLZCEXJKHYGXGQOOMCBOHZDGBSAEDL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XIRWACAVMCKQRHORJFSXTENFAAJDFROZAUGYQELPUWXRLBXZUZHJPZNXQTNSOFZKMQTULNFPEUAMLYGLMFEHSIOATJZQTJDHNWWGPUCYYKWEBCBIMRECPFLOJDFTHIXLQBNNVDYWKEDDYXSIZLOTVQHHCGSZ");
    tmp_tmp_msg_0_0.attr_type = 83U;
    tmp_tmp_msg_0_0.min.assign("BROFZNSWSOPRXXKECRYHDBRLJJVHMGGMUTUFAWTAZKTCCXFEBHEMZPMSUXVYIIKSKCQDTPQIPYNOBSOVBZMXOTNDFYXWWEBWLDLTQQCZOAMGPNGHDJYDHDKKWVHNAELNJRSEGJNUNVXSIKRHEPZPVTKCPGQLUHHFQULXGMKOCOVRWGRFSWDIQGIFFCZFIIFNVDXTWLYRRMBUSLVUYZOGVMCQOJJUXZHKBJYDNBLUETYAIZJWQPSCAJEEL");
    tmp_tmp_msg_0_0.max.assign("FYHSNZVADCRGXJIEYTQZJUFSXTEPFAAOAGAGZLOBIGKIPMSMRKKOTIEDTQZVWBYLTEMKWTFECCCMUOVQXNOQVWIABQPLSMBVUUYXZWLKIWWCPFRHBJGUTMFKMEWPNLYGZHMGQDHRXZVDCQWSIPOMALYNTZUOOZCYHJGBIXMAVBJAVDZNXHCJKQGHYENFQGPRTNEKPCJSFYDRSNVNDJRHLHUX");
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
    msg.setTimeStamp(0.9725050915922475);
    msg.setSource(58700U);
    msg.setSourceEntity(125U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(209U);
    msg.op = 184U;
    msg.goal_id.assign("QZDKOQJLYRKFVSMNVDZZXBHFYOTWDFDEXVHMIDEPZSQWFJKVNXQUIACBCDSGQUSGTPFESFPHTZSGCXMKCBRSHYLHSRZBIPUCOGFFHDYNWRXNOMCQDJBBLBVAWXVWVRBOPTLOEYZJCRHKMWNJOQIALXINTECHAMJQPPCNDMLLBHWMG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BPZIAROPFSNKZTRFHVWJNOITNEZGZKADZLCBYVOBOWQRYYWKMWHWQMEUEBJAGYQSNHZKVFKRSIDILTBPPTDSTINVDJNDVZNCGXMNRRLMAJUOBPRQCOAQNGZCRGBMQOWQPBKREPFUZACJDEGFLYUTSJ");
    tmp_msg_0.predicate.assign("DTHZSXVOTFYGYEWDBRUFKIWWVWYEGWVNOMABNRUETQOLYUEGOBQEQQKAGEZTEKJTXSMESIASPCCHAYDRUPPMDTQOBVZHJMPUIJYASRURKTBFTULKAQFHHUZQXMJIPWNOJXLPBLLKLCPCHFDZGMKZZLJJVJFDFPYSSGGVVOIXHGK");
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
    msg.setTimeStamp(0.7263197678838185);
    msg.setSource(40126U);
    msg.setSourceEntity(206U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(71U);
    msg.name.assign("GOBWOJGLGCZRBMLPBOXGEFTQKTXPDETSXAWXEFMEJHULCMBDMEHMIPQJRHGCVNFVFAIUUUVRVKSLRQQBPZRWZMIHYDDFTWINBDNHQUKSSEROLXWKVFKWXYSKXMESAVGZYRBGOCAOGJCIHCLMDACIBPHZPFTYECDUMYINODNRFGSAPZAJHQWXYCALUN");
    msg.attr_type = 31U;
    msg.min.assign("DCTFSIBKKBCIIQGSMHZNLQUDXNMMUMQXLEKQSEMEUBTHJAVKADUNFXCYYEWIWPOKPPQFQWBIJT");
    msg.max.assign("OHNDAESYYLQTGXAEQKRDBHFOJIXRBTOEOEAVTJLVDPIMMSFKUZKTEPQNOQYYUYHKJQIJWPACGKPAVMTSKIEVNRRBRPCBVDFNQNZOKUCEMFRKPVSYHNWZQJHIBRBCFKCCXPDLNMKGFRXCXMISULHXVZGDAZ");

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
    msg.setTimeStamp(0.38027965400569474);
    msg.setSource(30085U);
    msg.setSourceEntity(133U);
    msg.setDestination(43464U);
    msg.setDestinationEntity(168U);
    msg.name.assign("ASLCRPFDKSBJUF");
    msg.attr_type = 230U;
    msg.min.assign("FZNJBEUEKKKQLIVDAWITNZNHPHKLJZAYAJDMKQZSDXNIUSBMGCBTOIYAOTJOSJBVDYZQMFGRGONJNMLEHHQPZLCYHNPLTJBDOKVERVSSYYWPXHHMCEEKI");
    msg.max.assign("NXABLNAIVSSGXRHPSYJKFLTUFYM");

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
    msg.setTimeStamp(0.33558119903772);
    msg.setSource(50062U);
    msg.setSourceEntity(38U);
    msg.setDestination(59523U);
    msg.setDestinationEntity(228U);
    msg.name.assign("KFORBUZCBUWZUQJFGAECAKERVXJLXDICMXQJDDTDCTGSMWYNGCAFHNYYBTSUXAJGDOPSTSHLVXHNLWJZMYPFILHFGNMOPTHDXUYEUJREWZLNGQOIHPBRVOXMYPCOSQLKZFIMULQKNLDWPXQGVOCRBMJXUSRWWRLDIBKGKKCQEVFNDAPAHEOJKGIWOS");
    msg.attr_type = 161U;
    msg.min.assign("TUHCDETGZBVQELVKEHRLXDAFHRETVYGAOTBCBJQVZEPKSUOIGOXZMOILLMWTFQBXYUI");
    msg.max.assign("JZWSLYJKXMJONOCQKWMTTNSDUOXKSVWXIIGEQMDRWWQNCYAOHHNGEETTFANSRZKMRTVLI");

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
    msg.setTimeStamp(0.07799217533225222);
    msg.setSource(30401U);
    msg.setSourceEntity(190U);
    msg.setDestination(22506U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("ZQOPWEOGTWHCJYJRPEIAXJRPNCUJOYFQBINZA");
    msg.predicate.assign("ZZTGCGRNRRAAFJYKPKJVRUKSVIMVZLOEWECQRESHLOWFXWKSJOLBDMGTXZPUIBTYDSMLJQHAEGMFXCPTXDTUIAQBFOLVIGWPAZSZYGHDHBYRBINYLRVYWPQRDCFKPIIBOEALXAUUTMLFP");

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
    msg.setTimeStamp(0.7354319586133742);
    msg.setSource(21104U);
    msg.setSourceEntity(202U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("MDVPJSBOITXQQHESHIMFXVUFTZYXGRAQQGLYRZQOHUXONVMUZUYWCCPWXPEYWZHKXMYFTCLSQPMTGNQWAUDVLKIBGBWGTOFNKEVDAWUCODSYCOBQRAETOINGCJAOEMABLUEQJLIPGYBFMFYZHUHBSCRPRRFFIYCZPWAVNYDXBGFHHRJVMJEJNLZHJREITFWSDDRKTMXOSXOLVNRVSNJABZPCIDNBVHDSSJAXLTKZDUP");
    msg.predicate.assign("QSXADGHPMCWJHVNRJGYUEWUJGBFALGKLLSJVJFPSLFZJVXQNRDZDCUQNRMQLVXXUKQNLXUNNMCXCPHQVWOROGIIYKLJMFTUPAGWOIEWEXYEQVCURFEFWLKGLRAQXTWTUNFHXTOCMKAB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QVGCORVPNBXWRGVURNIWIEFTFNCKUKWXGZUDIUNLVCZBYTJIMHAMFDKVUCIFOQZCFLGYMEFJLXWPQIZAAFSGGYOUJEJGFLGKWASEPVBLMWADTFMHALRXRSCNKCHMAXZEPBTJYTMESHZRBBCCXVETUHYPJUHZSKYURYYSMKATEBCPQJLQIGSMPDSASHBXIIKOZBOFRDUJDXNEWXNIYWTNWPQZHJSTDTNKODOVKOYVBELHAQN");
    tmp_msg_0.attr_type = 223U;
    tmp_msg_0.min.assign("IKTKWEBQKMFDSPEZRMHVOLFRUCVTIABPWOVJNBIMDFYNIYFXODRKLRRQMJKJZDRVVECACZ");
    tmp_msg_0.max.assign("NGZJGRFCGYVNLEMXEOKFKJBQBYUAEFIYABTKMVYMJFHNUGKTOSYKOPIPZIEUALXDZ");
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
    msg.setTimeStamp(0.44307601245066686);
    msg.setSource(27033U);
    msg.setSourceEntity(166U);
    msg.setDestination(51924U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("RWSGRJSKQGPIECFEPCKMQVKNOXMANSKIXMLUYILHAAPWEMYTFDPGWDYMNVJLDNQQYEIXLURXAPNJMOZODFFKLMNWHJJPIQASMIRWPLJUVXYXEAKYBPXFWKUDSLDLBLUEGBNCWQIJFGTSZLEXCFHDOV");
    msg.predicate.assign("BTITPTJEWCYSPCSEOFQAXEAKGSROBZQLYOXLYZYIVERZDRIYLRAHXBCXMZUTKZKUPEWSSJNZVEAFIQAWCWKMKCFWDNTQQRJKLPGIMIUZQRIBNOVNMKNPFGNLIOAWFBSSBCBTQVJZJCDMWWXDVLPYOMVTALXOOAKBJZFMCEUWFHHDNVDGHXYKDCUHZNHTUBYGWGHUESLNOFXLPDDGMJPRYUJCGTHVHXRFUGEPDYRFJUSHM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PSPBAJVUURNKDWQCJWUUEUQBORVDWMEMTREOCCVZMINMROKGYEOQBJUSSOLLJOISXAEUTGIRAXDZEPIQPYNJYAQHFPXZLKHYFCHBQ");
    tmp_msg_0.attr_type = 109U;
    tmp_msg_0.min.assign("FSELVFAQPPBOWSEZHGFUSZKLTWQEEVXAWKZHXCDIHYJAAORDFUURTDICJQCDCSMFSWYDFIIEHIQPOAVNYGUXVBYVXNKLZJYK");
    tmp_msg_0.max.assign("HBDSPDQKJSQUXGTFMRIWOIWAHAMSNSSLAZYQGIBXWIJHWBTVMQLKRVXFLQWACEKUJCQAKPDGGXMDUZJIUEOANYRDKVNJOGCFVOGPVCFRVCEQCYUACXWRSKMBJEBOVETXLZVPANIFWHGETIHNDXKZMLQQPLORGEZYIAZEMZODIWCTRKDUYUNHQPJUHNDFLLFASBIKOZBCLHSKOGBN");
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
    msg.setTimeStamp(0.4904455229982966);
    msg.setSource(52881U);
    msg.setSourceEntity(154U);
    msg.setDestination(5854U);
    msg.setDestinationEntity(78U);
    msg.reactor.assign("SCTEEDYIQQIWPKLMJHVQVZWKZBFKFZTTPUQYHHSHJZXDLVFOAUNSPAEIUNRIEGYYXAOSSKFPRGOZZNWGXDTCAHPHEYZJASNBYFDGJMHOONMTMKWVYVKXPBMHXADYIPPZDVTTLXNUGWCPEKAXSFJXYFRNAPALCRNTVWLGZJDNBXEQF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GNYXKBIRGAQVJJINKHKRDRMQRTIWSSVHHETAATUTVNXRACEENWRXECRUUPIZYFBKKVCMUINMCWIPZRLPKVFABKAGOPLFEJQNNDIOXBLQDOMDPJXDQHEHLAGLQOLKWBSZEPZRONHDMHKFTHPASYVDDQOMTSGXG");
    tmp_msg_0.predicate.assign("KXBHTTBOUUNFYRLKSAPIHWNMKTDYGXYKNPUVLYFMAJNWAQQMEFHKICVLKBKNENGTIGURYOJKXAECCJTOVTOSEUMVRHPDJGCHPWLEODTWDXJBRLCOLIIIHZOVYRWUKEPJSRYZZMQQGKXMXGEESPLMWCBHGDUDWREWZTZMIQJWSLFVACIGIODZBSVANUPVSUUSPYABJHCQXNXDTSBDHXMAGOZQLDRYFQYIVCZMONCLRTJZPAFVHXBG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XGGPEMLFVYNJMDRECPKKCYFICUCLKVVCJQWXXRALLJZITBAPRHQMFSOBSKUNTOOVBGIFJJPAKMDTOZWUSHVMUAEDXPWYUPZIGHTOPWEIYGNMEDARTLHSOTREBWVOQLZBITLJSZXLDAGKWGGRSSQBDBVPLOMMWCIHZXFXFVDWCFGRYWY");
    tmp_tmp_msg_0_0.attr_type = 64U;
    tmp_tmp_msg_0_0.min.assign("GKZRKUZFPJNDUZJNLZGISWVEUQAAIILTCKWVQXMXOTVEHGYFGNZNKZFHRDMYSFPONITVHQEDLJOGJPSAKBUAXRODUUMOMLKKVNVEMCYTWBFMSXHECRJNSAMRXHYVDJENTHEYMRYCAXJNEFFESOZHKOJVQBWFAWWGPYAOLTSTOPUFYKWDBJDGIPRDQOBUHRULVMBYAXTIQQPXGWQNWPLBCLCSXCZCCKSZBFS");
    tmp_tmp_msg_0_0.max.assign("RHMPVLZCJRTZXDIILCJVQBMCDSKOKYXNZAUPSPTBIFYPRAUJOPFUWLARVTEWTCNOMJGHFQQUMDRNOAMFDKUTSDSEYGAQIJOGLHABKAUZWAFEIDZSHMASZEYBCHWOWLVBIRBFXYMQJQPWFOAFODBYCTFTRQGBTCEEYLBURJEGZUYMQSGWZMUWLXYKXNJVNYKULZVPDINWHGXIVGNHOJCFDTVDMIGXXTOLPN");
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
    msg.setTimeStamp(0.3950673653949095);
    msg.setSource(37642U);
    msg.setSourceEntity(218U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(27U);
    msg.reactor.assign("TYBQIQBCMKLBKHXSNFWHZITNQGCDNAHRGCZAWJWEZQOXYABVGXWFEGDBBYPZOPGZJTOSHZUHTJYJDQPWJLLHJWGOKFOXVILPFVKIZJNDZMBRIIJPKEOTQCSDFTMMDSWVEHELQNTFSCVFYJKUFSCMWBVENKAPRDDCQKIXKYFJQMPUUGUAMLO");

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
    msg.setTimeStamp(0.012558335995147552);
    msg.setSource(5801U);
    msg.setSourceEntity(223U);
    msg.setDestination(19237U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("ZVVRXMVXTSBCKWNYOLOYRLCLZRWCAOIHXOPBQCRGQWEJRLQHYIHYNXYZBGSLDGPLKYIFEEKFKIRDUUDQZNNZDIUHFSWCYIKBAZFDXHWEHBSJJXDWSBEKGTMHPKPAAUTMFFTFJOQNCAGAGUKWXEIZNPLRPOLRNWEGVTJSASDJUVZZDMRTMYMUPELGCJUCMEKOAXQIMTDQIVHPCOBVGTDBQSXXPFYAZSWMYFKNS");

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
    msg.setTimeStamp(0.2225335696720815);
    msg.setSource(36678U);
    msg.setSourceEntity(249U);
    msg.setDestination(16594U);
    msg.setDestinationEntity(209U);
    msg.topic.assign("WZWURFIFWSVULBBRPVHUSAGCOBFAIWZJJEXKLMHXGRIGDPNOAJMQBVITOFASUAQV");
    msg.data.assign("CPPKYYIQFSGWGONHOMVFYAYGXVMZFCTXKPEBDSLPAJCNJKZYOSRZNNNSMULJARQOHCULEEZUAJWNSDFQHYTYNPTUSARDIVXUBQBVHIGRIAOJJMXFNMVPVEUWOQSOTQWEGAXKUXBFTIZFSRCIHLZJTNTECFKADJDZSYWWLMVCKXBRUDDFPTSUMBIBMEWRQQMRRWLLVUOGDKNIZBLXZKEAHXTQYYCGCFPDTOJCGPKHRLIWEPWGOXZGBMBHE");

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
    msg.setTimeStamp(0.5645454823756584);
    msg.setSource(48526U);
    msg.setSourceEntity(10U);
    msg.setDestination(25589U);
    msg.setDestinationEntity(46U);
    msg.topic.assign("FYPWFTGHPEZPUVBKRBQJVDXYCWFCCSVNDHZINEXIMXSIKKRTPPJKEKGIFUSELDGOJAMCHQHNSSAFYBLBHEQNXMCUYTOPECDCUSROGFNMQKEYYNGVVZUPEQQLQXJHHATXRSKXSDIDMVFYTWJTRUWPALKNGVLZXUJBHGWFRLPOJI");
    msg.data.assign("PMNTMYCLGSQIKAFYZYQMFPNFCWLUPWZXSGIJEVRUZRTBBDPQJKV");

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
    msg.setTimeStamp(0.7636375663652114);
    msg.setSource(3380U);
    msg.setSourceEntity(85U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(137U);
    msg.topic.assign("RSZEYKONPYIZQEGOQHUPJKDLOZAGVKUAPBXKQWYEOJZECWFSMNQORHZILGQIHMXTBCFRSYNMUODEVVQCFDZMLNTZGYVEJNFVTVKPSJBSTINDESUDXYQBZCHSPDFJXAULHFALSWBAU");
    msg.data.assign("CWEJYSUMDPXJTVRAPYHXJWVWIXEJCZMAOYFQPAKJDPVMDIRZNKGXLYBSYMQVVIQGJKIBKXSBKJCNZZGAEIPZDNUCAFYOLPPMWGKQDLUXHOZHGQYNZFXHCBFLMKJSQWFHFILIXROXTKPSURFNNDTSGWNUQSLMVZWYTEBDJVLCUNCTGRURGDOAFOYEQCDPGADTFOXWMSBEWEZHMLGHERHUAORIROQTSCBBBVEHBRVILU");

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
    msg.setTimeStamp(0.39674094775576196);
    msg.setSource(19173U);
    msg.setSourceEntity(188U);
    msg.setDestination(22129U);
    msg.setDestinationEntity(52U);
    msg.frameid = 77U;
    const signed char tmp_msg_0[] = {112, 2, -28, 94, 8, 74, 99, 42, -81, 53, -104, -109, -111, 52, 76, 78, -122, 77, -63, -125, 38, 15, -100, -47, 29, -125, 96, -59, 107, -43, 47, 85, 22, 59, 46, -25, 27, -112, 48, 113, 19, 37, -70, 5, -12, 83, -28, -66, 21, -42, 68, 97, 121, 103, 32, -45, -54, -102, 105, 64, -59, -52, 63, 72, -24, -44, 44, -24, -54, 20, 35, 16, 22, -45, -47, -83, -88, -47, 78, -33, 94, -98, -75, 70, -11, -66, -97, 62, 123, 106, 25, 37, 55, -114, -116, 102, 53, 41, -46, 43, 115, -7, 51, -105, -117, -45, 17, -91, 109, 1, -12, -1, -121, 100, 110, 29, 19, -56, -46, 30, 125, 39, -85, 18, 48, -103, 2, 55, 117, 96, 36, -43, -99, 31, 65, 15, -50, -106, 86};
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
    msg.setTimeStamp(0.8065990659081061);
    msg.setSource(6571U);
    msg.setSourceEntity(202U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(30U);
    msg.frameid = 36U;
    const signed char tmp_msg_0[] = {98, -77, 44, 57, -104, 106, -55, -110, 88, -57, 33, -14, -28, 70, 45, 117, -94, -109, 70, 70, -6, -114, 36, 86, -90, -114, 44, 29, 21, -93, 111, 114, -101, 1, -114, 106, 2, -22, -109, 1, -96, -93, -1, -45, -113};
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
    msg.setTimeStamp(0.3319127124482836);
    msg.setSource(62500U);
    msg.setSourceEntity(187U);
    msg.setDestination(49509U);
    msg.setDestinationEntity(140U);
    msg.frameid = 117U;
    const signed char tmp_msg_0[] = {15, 92, 112, 31, 20, -8, 1, 99, 30, 71, 71, 53, 22, -41, 99, -93, -118, -12, 81, 97, 112, 62, 90, -93, -42, -61, 77, 79, -44, -128, 79, -30};
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
    msg.setTimeStamp(0.913670785517496);
    msg.setSource(5529U);
    msg.setSourceEntity(158U);
    msg.setDestination(13766U);
    msg.setDestinationEntity(75U);
    msg.fps = 88U;
    msg.quality = 105U;
    msg.reps = 8U;
    msg.tsize = 229U;

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
    msg.setTimeStamp(0.3977709290219913);
    msg.setSource(25165U);
    msg.setSourceEntity(183U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(38U);
    msg.fps = 234U;
    msg.quality = 94U;
    msg.reps = 90U;
    msg.tsize = 218U;

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
    msg.setTimeStamp(0.6865723721382446);
    msg.setSource(59281U);
    msg.setSourceEntity(89U);
    msg.setDestination(36038U);
    msg.setDestinationEntity(100U);
    msg.fps = 114U;
    msg.quality = 206U;
    msg.reps = 123U;
    msg.tsize = 240U;

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
    msg.setTimeStamp(0.15676902148631322);
    msg.setSource(39515U);
    msg.setSourceEntity(119U);
    msg.setDestination(53173U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.664330781890996;
    msg.lon = 0.30802799101307343;
    msg.depth = 11U;
    msg.speed = 0.3656195556457711;
    msg.psi = 0.09334035012302921;

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
    msg.setTimeStamp(0.186532966846221);
    msg.setSource(24520U);
    msg.setSourceEntity(190U);
    msg.setDestination(30294U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.7059790681345637;
    msg.lon = 0.9900856161902474;
    msg.depth = 108U;
    msg.speed = 0.4583383478715727;
    msg.psi = 0.5542561509167727;

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
    msg.setTimeStamp(0.5111607687666141);
    msg.setSource(15503U);
    msg.setSourceEntity(196U);
    msg.setDestination(55345U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.43672053716832626;
    msg.lon = 0.7398494476714675;
    msg.depth = 143U;
    msg.speed = 0.03423827846828198;
    msg.psi = 0.4050620128036839;

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
    msg.setTimeStamp(0.42727938584083935);
    msg.setSource(32820U);
    msg.setSourceEntity(34U);
    msg.setDestination(50028U);
    msg.setDestinationEntity(232U);
    msg.label.assign("QUBJNFFTKZCNPNYXYSNYOQBSDUHVTCDZJKHESMXKVX");
    msg.lat = 0.4752412851344583;
    msg.lon = 0.10744211475891752;
    msg.z = 0.19344908066708244;
    msg.z_units = 22U;
    msg.cog = 0.5912019027148357;
    msg.sog = 0.612243046074431;

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
    msg.setTimeStamp(0.28338033337980606);
    msg.setSource(49317U);
    msg.setSourceEntity(206U);
    msg.setDestination(21602U);
    msg.setDestinationEntity(67U);
    msg.label.assign("PHGFLNZBVHGVMJPMACYILZBMJSFAVHOIXOUBERPWREJSBAEFRFKUFRMNSYZRZJVJYZCJWRRWHOZJMRSMFXWEWYKTLSJTVPDEKFVQKPJYCWLGICXGUKASDGCDCDXFKGZM");
    msg.lat = 0.09958564476955356;
    msg.lon = 0.5222043056583855;
    msg.z = 0.0332180365962812;
    msg.z_units = 6U;
    msg.cog = 0.2502237053701133;
    msg.sog = 0.29876585084067087;

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
    msg.setTimeStamp(0.5349196465932927);
    msg.setSource(23427U);
    msg.setSourceEntity(236U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(166U);
    msg.label.assign("FEVZSXNBCQOHQKNQNSODUEUPGDEJGOEBVOUFOMWDJNQYNDZGOIZFAEKMKBLZPDIOQYWZJKJJAYLGBRPYPMQKMLTTKPWYRXCMDRMQLGKBFDPLFPXVBVJMMWSZGJWGROXHTUHTTPUGFHRQFDGAVHXZGRLINXHBCJXOKSIEXCOHFJXWSUWBTBMCFRLSUYMHDCCIIAWNUINAIWVQPLZSKVAUEEXVFJCECWSQKLHAVZSTCTASREYHUYLYNDNATV");
    msg.lat = 0.04215837760628682;
    msg.lon = 0.19744112800339741;
    msg.z = 0.11240287550909622;
    msg.z_units = 64U;
    msg.cog = 0.3411190557263166;
    msg.sog = 0.24223880839214507;

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
    msg.setTimeStamp(0.18345069307640238);
    msg.setSource(27458U);
    msg.setSourceEntity(23U);
    msg.setDestination(63014U);
    msg.setDestinationEntity(129U);
    msg.name.assign("CZAWIYGWVWNARZVHDFEKLQMNTUOVPJPUUTDFQSDPWFNLYXJQRGZKBHBEWNOENUVHJAJVBBGPGAIMERRRQHXIBVSCLMXJIVHOPHGYFRDOCSSAQHLTDCQLMELCNXIDWUDGXIXVBQJNUXYODRTTNOM");
    msg.value.assign("RQRPMGWJODHWYQOCHWNXJILVWJAAWDFHFBXEDYQOXGBHWNYQNTGKPELTZTARLUDWFPURMEUGYEZYFFXIFIKIXZNMEILUOENVHSGLLMIISWVYJDTMULPMBYZCVGPMZDRSFBQIYZKFIESPESCVHRNNXLMTJVOTJXFMADCOKVKWZKQKBGDDZORNUJHPXTANA");

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
    msg.setTimeStamp(0.8723909735594958);
    msg.setSource(4659U);
    msg.setSourceEntity(199U);
    msg.setDestination(45593U);
    msg.setDestinationEntity(219U);
    msg.name.assign("GJYHYADPMWENUDCWZVNBKAKQDTHHEEIQONUPGWVGPQMVVFEMZNMFSINMBEAAOOQSPTZIYOJSPYUXTBDRMTKMUJLRSQPKRPFWLLICLJALTEXLEGFHNWWFIAYGUTCDRCDLBGZCKYSWROERL");
    msg.value.assign("PEPYIHZCSTHQJUWAEKYZFWRLRZUYCPKWVYPJDFCTJSGKAEKCTJVMEFVJYRNKDOUMRQRXZYJOLGNJQHQBTNSXLEGVJBBDUDA");

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
    msg.setTimeStamp(0.10563881680678233);
    msg.setSource(35111U);
    msg.setSourceEntity(54U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(237U);
    msg.name.assign("RNILFAOKMTHBUMEDUNXKEUKSXO");
    msg.value.assign("JKWATZIAERKYKHLGTWULUDUEXMEKZFVXOCQWNYDPCJIBZVQAVEOHFZFZKSLXQFGVENCZZRGQOUQYMDWZYXEVYUCNHYXYEIXWZKXAPILJIQJEHNVRFNCSIGGMJLYNDQDCPCWRLXWGGQKOBBSLTUKJKSMHUSMWOTVCDBUEFFASXIFOSCJHRQPLMNPZUIMHDCIAGMDGBTTFTTMNBSWHMIPRNBQRDAGPBWDHTARVHBTLUAYPRVYRFNPOLXSKPOO");

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
    msg.setTimeStamp(0.39394782610638535);
    msg.setSource(33703U);
    msg.setSourceEntity(117U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(13U);
    msg.name.assign("UPBDJNHWHACBGNOZLDLMQJHYESEMLNQNIDPGVKJZKWZABCCVMPNTFOTFMNOIVYCTOUZLRDERVIXNLAKWFYCQMLPRYQRAECSSDHVSJSUGGYBGFWRXFXOXKMTVCYXZXMKIASWBRTGAFXAFYQBDPTVGHLOGIVDFBJWIOETNVQCLFPNSQPUIIWG");

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
    msg.setTimeStamp(0.8890929419525057);
    msg.setSource(36385U);
    msg.setSourceEntity(202U);
    msg.setDestination(19134U);
    msg.setDestinationEntity(178U);
    msg.name.assign("YJKJLNIXVIHEASVAMFRRNOQEFLZNPEFPYFKNXAFITWCJQCQUWBOCJHITYTBBMFLTCGSKSOYAWLNFBOGJRQBHQEGJIZHUVAKIKGZYLDRDSTPJLHGMXDP");

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
    msg.setTimeStamp(0.7715874757482606);
    msg.setSource(27090U);
    msg.setSourceEntity(115U);
    msg.setDestination(51384U);
    msg.setDestinationEntity(130U);
    msg.name.assign("VKYRQCTDGAKAEARNYX");

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
    msg.setTimeStamp(0.8292943668643756);
    msg.setSource(38178U);
    msg.setSourceEntity(140U);
    msg.setDestination(60030U);
    msg.setDestinationEntity(24U);
    msg.name.assign("ZMGSBXVXTQQGPQPPTZGNYVNEAUVWJMLCDBKZGXUNA");
    msg.visibility.assign("OLEQDFKFXJUNTHGDTOWYTNVAJVMHQNDUYHAEXRGVABRMCLHDTQUXNLGZEICHSBZWVENGTG");
    msg.scope.assign("JCZFBZYMMHOGMHDCCZBNGZZBTSFMBQCTUFSTGMODTGCZGSVIGIVXXQAPJRWHSTVKFFVETLOLSKBNPGIUJCNRVEUMOXXWNQSGANKQORYTGIADKVAYTKSCDCRHBQDIFXEWLRZSDTUXMXLRWHEJVWPHNUQYDOKDJUEEYVQKFXEUEEHAGPYMYIIRDPJYOPKJAZXZLTFSIBWJ");

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
    msg.setTimeStamp(0.7418451715472574);
    msg.setSource(8932U);
    msg.setSourceEntity(1U);
    msg.setDestination(28235U);
    msg.setDestinationEntity(252U);
    msg.name.assign("IWVWTWQPXJPYMRDLMFROYVBQPHHZAMLXSKCUNNKLFHOZOZZVMJGPIKAWNXYZLZ");
    msg.visibility.assign("TPXYDLQONGSHBDISKCEPECMAVSBOBYIYIRHKPKUCNXVNYCIQXGRFUADAGBUANFEHRZEOWMJOZOJPSDYYZZWXZHCKKLVXLVPAAMRIBDBPZQVRMOWUYKWCSDBBCANTHGXFYUZNNZMJWZTMVYIWFCINLOWMVTGTZMNCUJKTTOXQRUGTIQJSLXKEALFPFFWLHEQSKGHKWEQURQIAJOVMPSERG");
    msg.scope.assign("XEQZUFLGFMQCHJKRIVQKGAKLOIWZZYUINAYPEEQHNHXDOZJUWZVLSMSYMVADLGRTBCYSNXNFLCOEBXJXRZMFUHQACBFTPZYNHI");

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
    msg.setTimeStamp(0.4034521781847509);
    msg.setSource(39353U);
    msg.setSourceEntity(187U);
    msg.setDestination(31585U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ABIPPFJBAFWMGYNZHDPGQJIMZDLOMXRAUKZWYYVKZJQS");
    msg.visibility.assign("QLEUGRHRPXSQTNCESDIXKGEIANQDGHADUSEZNWMQUYFUXZXFCBQBNJKFIDAGMBUDSHPYIVTTOEXIUPCHBPVNLASRQUTSJKSEHLPHEUTEOIROIJKCOQQVLGUWZYPWNDAMVFVMJAWRPLTYBOZOZFVTGCCMEGZJXBPWXKFKGCXNKSFTPCIDDDORMEOUGZYAHAIFNWZWXYSNQFXHRLZSOMBHVLZAYMJTIJYWKODCFYBNWGPRLWJBRMR");
    msg.scope.assign("AEGDTBFMFEHMDBJCKYMOZGSYQFZPUEWADHNQZGIMUWETPPKMSOLVZYPQULPCYDXZMKUVGXVQHKOCCXTJWMPSHGXYEUZNERBWJXIRLKXOAVSOZOPBIHGWBWCQSJWGNAVWTXEMRHNAHVDJZTAXYAFFGIAVRSOBPGEN");

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
    msg.setTimeStamp(0.8216474020141564);
    msg.setSource(11296U);
    msg.setSourceEntity(55U);
    msg.setDestination(11351U);
    msg.setDestinationEntity(72U);
    msg.name.assign("LNTMBGIAZTMXZKSGYAQBBPFRRDJHOHFRNMJYKSDQMBYQWPWGZSVRPLQKOMNVWWXLTCMSNEF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OJYYGXJCLRSIGLQACOEGIYRLVFLGMESRXACIKVPEZETJTWNCRCOJJMYJVFHHGIRHDBOQNUSKJHPANKBTKQYBVAODYWNFNPXZGZBWGHOETHDBUXDCDFXCEWKUPWLQUAZTPKYBDTIHEVFSSLQQFMFRICULIEGMTYAPKVSNNLWMTQOBPPQNQUXHFBAFPNSWZE");
    tmp_msg_0.value.assign("WTGGKJCPDGMXRCHORIFSMELMILXPPFBPNTEZROZPZJLNLNZRATRDABIGSAPQTVAGAYIWZSLFWOHEGDXJONTTRNYIMOKEZZSLYTYSFF");
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
    msg.setTimeStamp(0.9433714552168676);
    msg.setSource(31249U);
    msg.setSourceEntity(56U);
    msg.setDestination(428U);
    msg.setDestinationEntity(42U);
    msg.name.assign("MSPDNJWXGVBYISXZYEQFQKZC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TTDLQYNCHSZIYYCKYRJWGKBJNDYPKKQDRRLILRQHRSWVAAYBICIBNNOEABEUIMFPKMLVEKAWVHNIGJQZEZUJRXAPLLDYWQVESZPOWPDOZAJGQUMGTDKOBFCRCPD");
    tmp_msg_0.value.assign("TKEXJYGIBSEPKKZCQYAAJHXOYBJHUUDRSPVGUFTAOLGVOZGQMCWSWDDRQYZMZNXPAFWADFUKMPQCOUAVCPRTJIILBWWQHFLUSTGMQIDJMICKRPISKDHWEBLYKSRFBXQQUUXPIVWADPQNTHAJZC");
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
    msg.setTimeStamp(0.7825822889405027);
    msg.setSource(15171U);
    msg.setSourceEntity(31U);
    msg.setDestination(17847U);
    msg.setDestinationEntity(94U);
    msg.name.assign("HRDZQWOFYLXRNDRGESNDNCBTNYECNJLHFKUJSWSZETMACAKKQYDBGKAZTGKBUCWZXUZRNJCUDIYSEYUGWIVJXPMVJLDUMXPYPKILGVHGTZBWHJHXEROZFCDQHMFQURPKWRHFWKBTHPVROLEVHLISSDYKBVNZSVCMULQMUBTVRYPDIFTOTXTOVFLEJOAFPYIIPOIEAWNYMGVRQAECQXZA");

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
    msg.setTimeStamp(0.06776240869434713);
    msg.setSource(45023U);
    msg.setSourceEntity(7U);
    msg.setDestination(16216U);
    msg.setDestinationEntity(213U);
    msg.name.assign("BKLVUZLAJHVQOPSREXXWKZLYDMSRWXOSVIBFJQJKLXMAEANCSNVERZUXCIQDIQHMXHRCDCSGTAPEIYFATEXRJZAQWEFAYOHBLZQCUBMWKOFECYMAVRZMGDYJQLBXNNUYKPRZFCNSUEYIFWGLFJMNHPJNCBEDQWUVPVIJBAFNZDPSIMJUOBHKYZRRDKWCTRPXOLLKGGBTIMTDOPDXTYKOWGKQJHH");

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
    msg.setTimeStamp(0.4095390482380775);
    msg.setSource(18336U);
    msg.setSourceEntity(231U);
    msg.setDestination(3401U);
    msg.setDestinationEntity(196U);
    msg.name.assign("MXJJXSWTZMLSSHWIXDHXWQQOSRNBUQLLOAW");

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
    msg.setTimeStamp(0.6996480182579675);
    msg.setSource(29311U);
    msg.setSourceEntity(136U);
    msg.setDestination(13419U);
    msg.setDestinationEntity(224U);
    msg.name.assign("UDXUSCOQQCZAOGLWSDHIDGMXXNIRFNLVUYUXFQLFZDNEEVMNABBINXCSJCTRHDABLMEQOFVZEVGTHXHZVQBR");

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
    msg.setTimeStamp(0.33595605505907544);
    msg.setSource(12420U);
    msg.setSourceEntity(203U);
    msg.setDestination(28951U);
    msg.setDestinationEntity(74U);
    msg.timeout = 708880928U;

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
    msg.setTimeStamp(0.6913323606331747);
    msg.setSource(44953U);
    msg.setSourceEntity(16U);
    msg.setDestination(16558U);
    msg.setDestinationEntity(47U);
    msg.timeout = 2209412489U;

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
    msg.setTimeStamp(0.6073993527701403);
    msg.setSource(37046U);
    msg.setSourceEntity(57U);
    msg.setDestination(34500U);
    msg.setDestinationEntity(155U);
    msg.timeout = 2841151961U;

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
    msg.setTimeStamp(0.002127195269425175);
    msg.setSource(11126U);
    msg.setSourceEntity(107U);
    msg.setDestination(13781U);
    msg.setDestinationEntity(125U);
    msg.sessid = 3337423330U;

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
    msg.setTimeStamp(0.3852709315544449);
    msg.setSource(25871U);
    msg.setSourceEntity(183U);
    msg.setDestination(63945U);
    msg.setDestinationEntity(60U);
    msg.sessid = 969701815U;

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
    msg.setTimeStamp(0.9058093972955216);
    msg.setSource(21968U);
    msg.setSourceEntity(100U);
    msg.setDestination(16971U);
    msg.setDestinationEntity(2U);
    msg.sessid = 587415227U;

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
    msg.setTimeStamp(0.09587083604073954);
    msg.setSource(56212U);
    msg.setSourceEntity(8U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(90U);
    msg.sessid = 3124313809U;
    msg.messages.assign("FPMGDXEMVPLKCKZGAAWJJLFBWZDWENMXWHNSXIQXHVEYRJYUCEBNNWQTAVGTTYAXLNIBZMEZIFZKNZKRXPAPCKYPJXJ");

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
    msg.setTimeStamp(0.2608639472242593);
    msg.setSource(18346U);
    msg.setSourceEntity(3U);
    msg.setDestination(63679U);
    msg.setDestinationEntity(35U);
    msg.sessid = 2959737848U;
    msg.messages.assign("VNTIBLPOQXNSDCKHQEJOTIVTHGXSSYMDEEXFLWLTOPUUWZMDRGYBRLMQNKYEWCOHUKFIWDEVCSEZFPNMJBAXMPDYEGQFXZAUWQBYBTUCVRERUFMIYUTCCSZNPWJNLBPMLFQGHJNRXZVTARXKGHIXOWOLTZILBSVYVNFDJQUWAPJKIIHCRIAZAHFJKWFKYCUZXAPGLJBHAXGTHOIOMVSGCRRVYKBDMTDGOPORUSVNLGQZKQPMHJB");

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
    msg.setTimeStamp(0.5132040402557174);
    msg.setSource(20300U);
    msg.setSourceEntity(169U);
    msg.setDestination(60291U);
    msg.setDestinationEntity(8U);
    msg.sessid = 3002608005U;
    msg.messages.assign("XGCELMPHWLRBZGTMIFHUETFOZJUSBNTDXXXMNKMYUVUGCWATQBMNPGWBALBOEWCFALVRTEMTKQKVZOSFWHOCPRVBOUSCFDXYJYPDIWQVDZEKYSLIFRGTQLYWQFHDPNSVJQ");

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
    msg.setTimeStamp(0.8391019148698997);
    msg.setSource(46722U);
    msg.setSourceEntity(169U);
    msg.setDestination(31087U);
    msg.setDestinationEntity(125U);
    msg.sessid = 3278854486U;

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
    msg.setTimeStamp(0.5348650622228293);
    msg.setSource(29378U);
    msg.setSourceEntity(172U);
    msg.setDestination(36722U);
    msg.setDestinationEntity(243U);
    msg.sessid = 4142355940U;

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
    msg.setTimeStamp(0.4432292133968987);
    msg.setSource(19323U);
    msg.setSourceEntity(200U);
    msg.setDestination(33387U);
    msg.setDestinationEntity(122U);
    msg.sessid = 3619172294U;

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
    msg.setTimeStamp(0.9325022036892778);
    msg.setSource(25376U);
    msg.setSourceEntity(8U);
    msg.setDestination(50884U);
    msg.setDestinationEntity(70U);
    msg.sessid = 2882561141U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.5361152492238739);
    msg.setSource(20247U);
    msg.setSourceEntity(116U);
    msg.setDestination(11856U);
    msg.setDestinationEntity(13U);
    msg.sessid = 4242345673U;
    msg.status = 107U;

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
    msg.setTimeStamp(0.2071294443423103);
    msg.setSource(17075U);
    msg.setSourceEntity(192U);
    msg.setDestination(11313U);
    msg.setDestinationEntity(145U);
    msg.sessid = 570239265U;
    msg.status = 239U;

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
    msg.setTimeStamp(0.2255463840640256);
    msg.setSource(5589U);
    msg.setSourceEntity(224U);
    msg.setDestination(421U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RVMISQDSBWLVCXVTHQXKAGACIEKLZBWPBIAMTMBPWYUNODNNUXFGLHALWKEIVDVYZJFPUARXOHPJQWTLPHAIXQTSRDUNFGSYENUNDTKACBIPFEJLGOADDONMUTTHOFFXHOYSYRCQQSMKVDTOBAESYIIUGPFHCGLHQFZJRIJCWQANPXZSWMXUWHMUXLGRLZYEZCZNOTZRHJKBLEDEKQMEWFBCQNJKW");

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
    msg.setTimeStamp(0.6877993721788429);
    msg.setSource(5653U);
    msg.setSourceEntity(150U);
    msg.setDestination(49269U);
    msg.setDestinationEntity(126U);
    msg.name.assign("AGROGGBTDZKEIFMBFLRKFUYORIVTORKWEEYTGNKMMJRHZNXGZPRVYNCPHZUYFOMOKOYXQMUAUDNZWLHLCVIJSLQQKJCUBGAIXBAXBV");

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
    msg.setTimeStamp(0.725735466470876);
    msg.setSource(8920U);
    msg.setSourceEntity(115U);
    msg.setDestination(26556U);
    msg.setDestinationEntity(245U);
    msg.name.assign("RIRMDHVMVYNIJPBZLVUYKUSPCIDCKJOPRHAXIDGESVFJZWGRSXUEBBEWGRLZYTCIKOMPYBPAQQTLCTZYBPFJXFHCIZMGWYUIGZBENFZUMCCTFXNZQSLSWVLWMUKJESDJXSARDOOJUKMMQBGKLAVKVUCNANB");

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
    msg.setTimeStamp(0.44048948257216136);
    msg.setSource(23606U);
    msg.setSourceEntity(73U);
    msg.setDestination(14210U);
    msg.setDestinationEntity(156U);
    msg.name.assign("EKRFURWKXCSUDMDAEHUHCNAHBGXBJPMTFUVIKMXFYIFZENCTJAIVKWIHAHNVSBXOKEUJSG");

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
    msg.setTimeStamp(0.5907259281833992);
    msg.setSource(54553U);
    msg.setSourceEntity(129U);
    msg.setDestination(64763U);
    msg.setDestinationEntity(78U);
    msg.name.assign("UJTBVUTGIEFZIOZKVYSRWXEWNXMHFRIKOUDHXQOGGBRGDNKPPPIMYDLFONIWDJPGPPHPOZNGCMKTJYNLMTSBXVQQUATOEGCUEAWZBHYQZMZOSLSMUCXCQNFOIRVRWPAUXV");

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
    msg.setTimeStamp(0.7739111735950472);
    msg.setSource(3189U);
    msg.setSourceEntity(48U);
    msg.setDestination(2756U);
    msg.setDestinationEntity(166U);
    msg.name.assign("TQWIOZJPATPIBPQDXAEWGEVCTINRHJMPFZZGMFKARDIDMOHNLKPQCHUVWHJUJEGTBJCYVYVJORQQONMTUSOCCOUGRBGZSLLVAXQKNDSYKSPKIXYFVGGZUCNMGEXZELBUKMMPFSHQKCXSEDXMWTRDSJQAYGAXHZFILDKOUNUTCBQFRCVSZZABEOWRPACPHIWJMHBIRH");

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
    msg.setTimeStamp(0.12559660016700036);
    msg.setSource(31205U);
    msg.setSourceEntity(186U);
    msg.setDestination(45535U);
    msg.setDestinationEntity(185U);
    msg.type = 94U;
    msg.error.assign("CGWVAREEDYBHVATSFAWOUEPFCXESVCBFGQKUUMTOZYZVMGDWWHCEASTVZKPDPKGCADPBIXNTXNQKFJMKWQTLJSPCZYBRDRRVUXQNXPAYKCSHTGYTYFNTBKUZWEDKOYWREIAPHBOLHQKFGHYZRCOOO");

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
    msg.setTimeStamp(0.9527271918835284);
    msg.setSource(25786U);
    msg.setSourceEntity(27U);
    msg.setDestination(48545U);
    msg.setDestinationEntity(250U);
    msg.type = 237U;
    msg.error.assign("NFYWBRPYFSJTZYDUUHOKMOLGGTWJFXIGLAQIEZBXIKNDXCAMVPJLCDSVXAEIFWOEPNKQFNGFPCFZEOMQTASAVQTEMTBABSZSYCXBHEOFVTUANNRSVRULMPYQRBAIEHPVHSYUCMDRZLQFUHGBCBWZYBLARYDGACSLLQSVIXXGHPUDTZYMGYCXGVZRLHZNVEUQCNJ");

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
    msg.setTimeStamp(0.859897484340383);
    msg.setSource(21124U);
    msg.setSourceEntity(126U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(193U);
    msg.type = 7U;
    msg.error.assign("GTQJEYXUSDKBYZDRISBIFMHZYBKPEZQCWBCEUSGGJNKNAGBHZVWJXBIROFWVISSPDYBUWEOXNVWNCJKLALSEYXTVXWGVHSLKTLILXURETCQYEHWGZSHTFTVMHXKCAOFCAOZFJUUUFNDLBLJDVORSMIYUL");

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
    msg.setTimeStamp(0.01171130053078362);
    msg.setSource(29131U);
    msg.setSourceEntity(89U);
    msg.setDestination(35319U);
    msg.setDestinationEntity(16U);
    msg.seq = 46964U;
    msg.sys_dst.assign("FLDSASUQRTHWTWAMPLEWZ");
    msg.flags = 33U;
    const signed char tmp_msg_0[] = {-76, 7, 109, 10, 18, -12, 115, -123, 75, 102, 62, -81, 82, 124, 21, 27};
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
    msg.setTimeStamp(0.7471877608247974);
    msg.setSource(4133U);
    msg.setSourceEntity(114U);
    msg.setDestination(41877U);
    msg.setDestinationEntity(238U);
    msg.seq = 44893U;
    msg.sys_dst.assign("YHXCWDWWZVHWQNKTUTOPIAFHLHRDKDGUCMDBGGFHLBLOLHMRKLTSALAOMJXTPIXGCWRASXZEUYULXYBXUMASPWQOKJCWTVEVGASMVHUVPWZFEOIOLJQMYFSIDFAIABRZFQFYINARJTVWTTYLCQBDKEQPINUYJGORQPENTQYLUZCNXGPTXGBADKDKMK");
    msg.flags = 70U;
    const signed char tmp_msg_0[] = {-91, 110, 9, -41, 57, -62, -56, -125, -119, -20, 8, -20, 18, 6, -12, 98, -84, 47, -86, 6, 42, -39, -27, -24, 15, 107, 108, 107, 95, 124, 55, -59, 69, -35, 126, -97, 89, -67, -6, 54, -81, 102, 49, 107, -26, -26, -105, -119, 30, 71, 86, -4, 0, -94, -44, 55, -65, -128, -111, -24, 9, -91, -75, 13, -110, -6, -124, -11, -54, 43, 24, 75, -101, 100, 71, -89};
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
    msg.setTimeStamp(0.10614428793694164);
    msg.setSource(4736U);
    msg.setSourceEntity(53U);
    msg.setDestination(62816U);
    msg.setDestinationEntity(125U);
    msg.seq = 49953U;
    msg.sys_dst.assign("PDLEESYTYZXLWUHFAHF");
    msg.flags = 159U;
    const signed char tmp_msg_0[] = {-98, 81, 63, 78, -85, -65, -126, 125, 76, 38, 82, 11, 87, 54, 102, -34, -108, 3, -21, 26, -22, 115, -73, -86, 72, -31, -48, -3, -96, -60, -119, 119, -89, 70, 38, -1, -82, 80, -38, -85, -11, -102, -68, 73, 76, 122, 70, -89, 89, 52, 78, 1, 58, -99, 95, -14, 9, 97, 91, 68, 95, 6, 50, -21, -15, -80, -82, 98, 73, 64, -113, -80, 56, 22, -36, -72, -113, 11, 100, 10, -38, -98, -127, -19, 104, -35, 80, -42, -116, -24, 109, -109, 65, 72, -55, -1, 100, 13, -110, 101, 35, 111, -42, 3, -38, -117, 73, 71, -22, 25, 1, 109, -18, 69, -5, -59, -2, -64, 123, -89, -118, 45, 113, 96, 69, -96, -50, 74, 66, -77, -66, -94, 4, 112, -94, 105, -111, -91, -65, 3, 36, -123, 49, 11, -100, 75, -99, 2, -34, 39, 12, -29, 19, 107, 78, -7, -38, -113, -45, -82, 39, 32, -113, 52, -12, -81, -33, 92, 125, 72, -24, -113, 13, -7, 51, -38, -22, -19, 101, 123, -93, -39, -4, 113, -80, 75, 43, 122, 22, -116, 97, -121, 75, -72, -122, 85, 67, -15, 42, -41, 52, -66, 103, -39, -89, 83, 88, 3, -110, 43, 6, 87, 58, -104, 117, 42, -83, 11, 109, -28, -102, 0, -66, -59, 92, -53, 46, 58, -71, -22, 16, -52, -16, -39, -16, 110, -33, 41, 2, 18, -126, -43, 110, -121, 111, -48, -126, -113, -104, 54, -124};
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
    msg.setTimeStamp(0.9585106117969399);
    msg.setSource(21884U);
    msg.setSourceEntity(91U);
    msg.setDestination(49431U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("ELBYTRUQGNWTVDSNDXPEXTNIRTT");
    msg.sys_dst.assign("LBNOOOBPFDDQKHRHQEBGTTGVSVRPCF");
    msg.flags = 37U;
    const signed char tmp_msg_0[] = {-85, -7, -26, -39, 0, 33, -86, -42, -93, 55, -20, 41, -53, -84, -75, 6, -82, -114, -121, 81, 48, 41, 109, -40, -94, -88, -128, -54, -37, -52, 42, 33, 61, 49, 113, -85, -76, -118, 107, 100, -122, 60, -125, 76, -124, 24, 57, -4, -91, 103, -54, -107, 2, 30, 123, -117, -28, 11, 110, 125, -116, 71, 104, 94, 124, 121, 87, -42, -63, 66, -71, -125, -73, 24, 115, 45, -114, -28, 121, -105, -70, -101, -77, -52, 17, 96, -95, 30, -101, 10, -21, -39, 84, -89, -83, 48, -46, -97, 20, -77, 30, 44, 3, 94, -34, 5, -48, 72, 84, -93, -33, 104, -5, 93, -58, -6, 45, -33, 122, -94, 25, 68, 101, -34, -126, 100, -68, -90, 119, 48, -73, -66, 80, -117, 41, -51, 76, -106, -59, 86, 67, 27, 96, -8, -86, 52, 46, -105, -52, 103, -71, 106, -120, -30, 2, 77, -85, 118, 59, -122, -119, -18, 52, 52, 2, 0, -49, -69, -121, 17, -101, 25, 74, 118, -5, -83, -68, 84, -7, -67, -124, 38, 18, -127, 10, 37, 116, 61, -86, -61, 2, -19, -90, -116, 12, -94, -54, 34, -128, -21, -86, 70, 126, 100, 53, -86, 96, 35, 77, -22, -110, -36, -123, 100, -19, 4, 109, -50, 35, -62, -88, -120, -103, -91, -16, -58, 70, -113, -90, 77, 88, 18, -28};
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
    msg.setTimeStamp(0.20027325465525603);
    msg.setSource(47367U);
    msg.setSourceEntity(229U);
    msg.setDestination(36062U);
    msg.setDestinationEntity(55U);
    msg.sys_src.assign("YSDTWIOBFKHJRTDVIOXGOLVMIDXDEITIFJMCPEIWWMPKWBYATAJLLZVEBSRVWUCEJYXSXJDYJLHIVGKNFCCNHQJOSSAUOWINEHYIBNCPMEFUUNKZSDMKKPCQKJUQFEQZKLRHGCTGWUYZLUUNROPAFATNQGMPVHRFHYHNBYXYPBQRJWT");
    msg.sys_dst.assign("IRKDRTPFHURSPIGGLSLKUMLYJWRNWPLPD");
    msg.flags = 205U;
    const signed char tmp_msg_0[] = {-94, -14, -79, 72, 98, -26, 27, 4, -57, -126, -39, 7, -75, 41, 5, -34, 126, -76, -53, 97, -99, -42, -24, 104, -6, 89, 107, 80, 92, 10, -57, 16, 83, -44, 105, 62, -16, -79, -46, -2, -32, 119, -54, 36, 36, 24, -84, -4, 12, 95, -106, 67, 53, 66, 70, 59, 74, 95, 89, 10, 83, 54, 2, -106, 9, 43, 90, 61, -70, -69, 82, 25, -122, 45, -82, -72, -69, 62, -52, 27, -1, -124, 100, -39, -55, 52, 70, 100, 98, -89, -80, 37, 97, 82, -14, -82, 92, 91, -64, -88, 61, 42, 71, 46, -50, -108, -14, -63, 27, -117, -120, -34, -100, -39, -61, -59, 72, 84, 7, -10, -3, 54, -106, -45, 64, 69, 35, 117, 84, -103, -112, 110, 112, 35, -54, 119, -67, 19, -78, -43, 84, 40, 57, -107, 96, -29, -10, -49, -42, 81, 60, 121, -63, 25, 9, -126, -17, 116, 116, 0, -119, -79, 36, -116, -34, 28, 108, -33, -29, 62, -2, -59, 94, 1, 65, -54, -58, -18, 84, -79, 15, 53, 38, 1, 25, 59, -5, -70, 2, 37, 109, 89, 108, 70, -65};
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
    msg.setTimeStamp(0.4596670223215603);
    msg.setSource(8070U);
    msg.setSourceEntity(200U);
    msg.setDestination(15408U);
    msg.setDestinationEntity(233U);
    msg.sys_src.assign("PDDJFQNQHNCCHVAOKMBBQIEMVEUXHOWLAKJAMGMTYUOENSACGZNTPVBJLAVKXDNWSWPVLVFHLXBFICMUSKFXLYHYECDPDBKTGCDDHGJSD");
    msg.sys_dst.assign("IFSCMQMSYGJMKPWOHTBEJDLLYUHGUYRSVHKPHDIAQVNJMGXTLBAKVXGMDZVTDJIUHKIBFUYFQRKWWUSYXHJEOARGAMQNBCNOKQEWISZJBUPLABMCXOTSLYJIYEATKBPVNAVSWXYRXDRMPDOMNSPZQNFLOXIOZQA");
    msg.flags = 7U;
    const signed char tmp_msg_0[] = {17, 112, 57, -116, -101, 18, -102, -70, 48, 118, -50, -8, -96, -76, -29, 85, -94, 17, 22, 1, -59, 96, 85, -34, -55, -33, -7, 50, -9, 119, -29, 117, 7, 111, 23, -127, -82, 73, 39, -3, 122, -7, -91, 76, -13, 36, 93, 125, 57, -62, 81, -128, 39, 56, -120, 64, 77, 35, 27, -92, -11, -13, -9, -60, 48, -81, -51, 52, -63, -121, -23, 86, -104, -38, -29, 87, 125, 21, 94, 44, -67, -9, -83, 33, -21, 88, -101, -127, -76, 76, -51, 34, 16, -57, -119, -27, -64, -70, 26, 125, -7, 69, 27, 25, 21, 64, -109, 23, -43, 86, 31, -68, 34, 103, -88, 89, 112, -73, 99, 44, -34, 66, 89, 0, 0, 45, -29, 52, -25, -88, -47, 2, 69, -63, -66, 28, -95, 26, 61, -91, -3, -125, -79, -103, -79, 29, -111, 88, -82, -11, 60, 105, -100, -56, 110, 72, -19, -117, -128, 71, 88, 82, -117, -85, 106, 73, 123, -56, -39, -32, 66, -83, 26};
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
    msg.setTimeStamp(0.1026897037917952);
    msg.setSource(5007U);
    msg.setSourceEntity(25U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(162U);
    msg.seq = 33566U;
    msg.value = 199U;
    msg.error.assign("EALSIBULFKVOAHDSKXOMBYUDKMRPGVXYTYZIZWIXLLAPBODNWVQLMSJCDUJYJYIUSPFTTGINBQPWQLTOMBWRZRHNEQTEVIETYVGXHNGUPUQOOTATWMZILHZRGZCJBJOLLCYCQZECKPDHPQTGNVFFMEDPDMKECXDFYJRAIWSRAKGUSKLAEYMMSQPCFHXOWJAGTGGWXCCHIEZ");

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
    msg.setTimeStamp(0.7826778242925276);
    msg.setSource(51345U);
    msg.setSourceEntity(193U);
    msg.setDestination(8680U);
    msg.setDestinationEntity(37U);
    msg.seq = 47970U;
    msg.value = 6U;
    msg.error.assign("LDLJZTHURXCNPXLUOMZXXSZJCENGLWPJWPPFIOVXIQBDZBRQLADKBHYICWSXGDLJCNDYXLATJTSKTNQOMGVR");

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
    msg.setTimeStamp(0.10038833192954744);
    msg.setSource(43279U);
    msg.setSourceEntity(75U);
    msg.setDestination(37219U);
    msg.setDestinationEntity(8U);
    msg.seq = 50247U;
    msg.value = 214U;
    msg.error.assign("FQTSIUAXGXPQDFTVHEOPHJTPWJALLXDCOZXDVRUJIAMMRVGYXCKTIFPQJHYZLYGNKTKNOSIRZOTKQHJFWRYQNWAPPBZEXVCWZRWEDFRNQCIUUXSDSGYDUVNBJZPNGXBWUYVLFHOSDVHSURLWMBIYEBIB");

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
    msg.setTimeStamp(0.658810134347504);
    msg.setSource(24872U);
    msg.setSourceEntity(75U);
    msg.setDestination(24824U);
    msg.setDestinationEntity(27U);
    msg.seq = 2860U;
    msg.sys.assign("DUOGYBAHWCRJVFBSUFGJNCONJHTEHVRMVBUOKTHYXYKUWSLMRBTYJQZAVRNGFIZTGNPBCKSMCDAJZZFQDPVGCPUOHLUQTONFWJIEGIOIEIYDNLKKCGNFKIESMAMXXAPWRRFZTOMTATQREJIXXQCEWLVVRZQUYAJPIIHRSIOEZMTBDPMLBGWSXCYPHKWPDEWOCXWNODNGQHHBLNDXJFYGKARSXPBHCLYZZZEQSEWFJXBKQDL");
    msg.value = 0.03355043065860952;

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
    msg.setTimeStamp(0.1558582398786731);
    msg.setSource(511U);
    msg.setSourceEntity(235U);
    msg.setDestination(19743U);
    msg.setDestinationEntity(160U);
    msg.seq = 33823U;
    msg.sys.assign("KAXTGDKXXPTVFRTDFNGYNUUMBQESDQBTNMLZITGVRZIFLHODUVVQXNLVEPADPTJWZOUQJWOTKXSZMICTBOCEJRGXZYCYIPXMVSDHCLYEHPPHYEAR");
    msg.value = 0.22907231473479428;

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
    msg.setTimeStamp(0.3987214586437189);
    msg.setSource(50457U);
    msg.setSourceEntity(247U);
    msg.setDestination(8109U);
    msg.setDestinationEntity(210U);
    msg.seq = 64589U;
    msg.sys.assign("XTBVCBMITIYPTISFPXWZQLJMKWVVFESPCWUEADOFVEAMBXSQPTJZUABQOZBPCTOEEKMPCRQWIYNKLYQIZMJWFEONGHOEFSDGVWLDVGRSWOXSDKGZKKHTQPGSXIIAHLJSZAHFIJYUNAETJQNDNFPXZWIRJYODGVBLDHLVARYHZMYCDVUURPFELBBEUJUWTKGXLRLMDMUSFJSPXACGCRUAXMRNJQCNWBVCBKOCKQUGQZNKHTYFNZHRMLGO");
    msg.value = 0.06102384568885044;

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
    msg.setTimeStamp(0.5339418519653188);
    msg.setSource(18616U);
    msg.setSourceEntity(21U);
    msg.setDestination(64845U);
    msg.setDestinationEntity(218U);
    msg.seq = 27405U;
    msg.sys_dst.assign("NFASKRSJVLFZWHJGRRRYFTAYUDIBFZGNUQPOAQZQKMKWOUNTVYPQKBAMYFDBNMNZOCLAKBSTISYWABXVDWXBUJZZGCSYQEXWHNHQEGWXMTCRQIVDOVUDLKLXSCEZHPFCSTVGFWFLUTU");
    msg.timeout = 0.8591299076208808;

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
    msg.setTimeStamp(0.2751360720561855);
    msg.setSource(25427U);
    msg.setSourceEntity(185U);
    msg.setDestination(48560U);
    msg.setDestinationEntity(147U);
    msg.seq = 49104U;
    msg.sys_dst.assign("DYQNFDBNJDXTBSLCWCQKZZPUILDZMXFEVYMOJPXBDMOFTNIQFTZTWMESERQQACVYKFXG");
    msg.timeout = 0.7306834937976988;

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
    msg.setTimeStamp(0.1589512983830066);
    msg.setSource(14160U);
    msg.setSourceEntity(113U);
    msg.setDestination(28426U);
    msg.setDestinationEntity(109U);
    msg.seq = 50449U;
    msg.sys_dst.assign("APLWLNSAWCEJRGHRQOATLEUDHJESAODS");
    msg.timeout = 0.3690222702987266;

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
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.9617424328455226);
    msg.setSource(57080U);
    msg.setSourceEntity(13U);
    msg.setDestination(35871U);
    msg.setDestinationEntity(7U);
    msg.seq = 13004U;
    msg.op = 253U;
    msg.baseline_flags = 108U;
    msg.time = 0.3466053435630806;
    msg.class_user_id = 35U;
    msg.application_type = 166U;
    const signed char tmp_msg_0[] = {-14, 11, 88, -12, 22, 108, 92, -117, -47, -35, -94, 101, -8, -67, 27, -80, -76, -56, 7, 84, 35, 104, 51, -72, -88, 109, -56, -26, -67, 40, 117, -37, 25, -21, -17, 13, 107, 73, 110, 9, 3, -91, 106, -128, -88, 35, 7, -59, 52, -121, -61, -22, 69, -31, -67, -26, 31, 26, -63, 73, -67, 88, -20, -89, -65, -100, 118, -90, -105, -76, -29, -34, 53, 79, 107, 60, 69, 117, -8, -18, 110, -95, 54, 75, 117, -120, -21, 37, -79, 94, -89, 106, 29, -47, 37, 30, -53, -24, -73, 8, -24, -75, 15, 91, -17, -118, 118, -57, -18, 2, 1, 68, -10, 67, 24, -11, 3, 86, -96, 104, -70, -2, -73, -36, 10, 13, -1, -79, -44, 3, 21, -51, 96, 28, 78, -128, -60, -103, -46, 23, 78, 30, -5, 108, 51, 79, 57, -33, 41, -121, 39, -106, 53, 55, -113, 117, 37, -1, 114, -34, 69, 123, 95, 94, 61, 82, -4, -104, 104, 24, 104, -104, 109, 107, 104, -55, 15, 39, 6, 80, -36, -41, 34, 85, 54, -89, -117, 21, 77, 49, -8, 23, -112, -74, 55, 30, 110, 126, 53, 9, 47, 121, 17, -55, -109, 44, 113, -17, -125, -97, 19, -28, -61, -63, 87, -86, 12, 119, -75, 22, 41, -42, -16, 112, -61, -17, -109, 112, 112, 37, 86};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("RBAAXAEWCMGNMBNWHGSFVRBPLGKAIONTEPVWAXWVBDKVHJZOZIELMRUKSPIZQQNIORZPAHNGUBWVSZDBPXMPEIVDNDHRDUBWMQYHXZUGWTSLTYIKCLJJFFTACQILRQZJJDRQUCIMVTKCSUEAEOQIBKUZQQUHXKUNGXBVOOXUOVYYQMGTHDDCRKNGJPGNT");
    msg.length = 90U;
    const signed char tmp_msg_1[] = {118, 53, -40, 98, 61, -126, -21, 81, -33, 80, -64, -12, -3, -111, -100, -10, 33, 18, 102, -33, 89, -104, 107, -22, 29, 38, 86, -67, 116, -20, 41, 54, 10, 55, -124, 37, -20, 33, 61, 7, -95, -105, 75, 72, -92, -30, -121, -77, 122, -27, -41, -127, 90, -70, -24, -11, -55, 80, -27, 114, -58, -89, -46, 47, -76, 125, -54, -108, -34, -71, -123, -38, -112, 19, -126, -22, 71, -95, -7, 94, 52, -59, 122, -105, 56, 34, 93, -127, 31, -63, 15, 64, 3, -24, -125, -118, -44, 93, 24, -89, 12, 52, 54, -15, 40, -17, 93, 3, 57, 30, -62, -108, 113, -87, 95, -24, -16, 56, 4, 71, 103, -58, -90, 60, -119, -23, 122, -28, 48, 12, -50, 61, -94, 34, -60, 80, -67, -101, 111, 97, 18, 73, 52, -127, -73, 15, -8, -97, -124, -120, 15, -32, -47, 102, -104, 10, 80, 101, 25, 79, 106, 52, -53, 34, -80, -64, 114, -8, 6, 90, 45, -8, -124, 20, -78, -6, 28, 66, 8, -53, 116, 0, 18, -107, 106, -15, -94, -126, -25, -108};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.9871950971545691);
    msg.setSource(49657U);
    msg.setSourceEntity(107U);
    msg.setDestination(594U);
    msg.setDestinationEntity(161U);
    msg.seq = 15160U;
    msg.op = 20U;
    msg.baseline_flags = 247U;
    msg.time = 0.903106707593228;
    msg.class_user_id = 18U;
    msg.application_type = 236U;
    const signed char tmp_msg_0[] = {101, -11, 97, -59, 64, 17, 52, 88, 9, -93, 33, 82, -116, -19, -83, 121, 88, 84, -116, 42, 40, 4, 89, -23, 53, -52, 72, -15, 30, -17, 107, -123, 116, -24, -34, -116, 96, -13, 30, -94, 98, 14, -42, -124, -109, -70, 65, -85, 51, 33, 16, -68, 123, 66, 73, -47, 121, -1, -117, 93, -103, -1, 66, -94, -103, 65, -91, -17, 56, 112, 39, -24, 105, -52, -2, -96, 67, -127, -108, 123, -48, -99, -84, 80, 42, 56, -12, 108, 78, 69, -45, 19, 41, -90, 99, 52, -39, 79, 34, -50, -125, -55, 75, 7, 62, 80, -69, 36, -12, 48, -102, -111, 86, 120, 35, 34, 13, 3, 114, -27, 20, -52, -26, 3};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("VPBUCVZLQGXGWQSZLETHHGTHNKSAAWPGZBTAIGFPNNZKYUNFZIZRQNDTRSRUOCMYJDMCFCVIQGMIUMFBHYQDKDKJRNYQKJODWACPYWMNVVFMJEJQQIQSBGRUEWBLHBKBVLJUXERHKQX");
    msg.length = 240U;
    const signed char tmp_msg_1[] = {50, -18, 109, 21, 91, 104, 62, 32, -75, 123, -125, -110, -109, -124, 27, -68, 123, 69, -126, 101, -20, 90, -89, -82, 100, 84, 43, 103, -74, 118, -71, 91, 59, -22, 72, 108, -77, 110, 61, 2, 28, -76, 34, -124, 102, 99, 73, -82, 117, -76, -74, -77, -81, 33, 123, -10, -61, 24, -17, -53, -128, -65, 49, 69, 123, -42, -51, 45, 33, -56, 13, 123, 71, 116, 14, 56, 113, -27, -85, -22, 7, -67, 29, -10, -13, -23, 13, -109, 106, -127, -71, -70, 39, -116, 120, -1, 100, -38, -116, -26, 109, -16, 45, 98, 45, -49, 110, -91, -127, 124, -69, 51, 53, 62, -107, 23, 25, -21, 47, 56, -38, 57, 70, -14, -100, 8, 31, 10, -45, 38, -97, -70, 90, 113, -39, -83, 43, -5, 38, 15, 12, 75, -105, -25, 23, -25, -47, 3, -11, 31, -98, 21, 121, -30, -115, 31};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.5539598995428535);
    msg.setSource(32321U);
    msg.setSourceEntity(88U);
    msg.setDestination(27353U);
    msg.setDestinationEntity(103U);
    msg.seq = 23553U;
    msg.op = 105U;
    msg.baseline_flags = 55U;
    msg.time = 0.7421195202305172;
    msg.class_user_id = 117U;
    msg.application_type = 36U;
    const signed char tmp_msg_0[] = {-48, 49, 118, -83, 9, -84, -112, 102, 105, 50, -19, 119, 79, 7, -106, -14, -61, -20, 4, 79, -13, 92, 64, 12, 70, -2, -76, -110, -27, 10, 39, -124, -56, -80, -9, 83, -30, -105, -79, -124, -29, -75, 105, 19, 109, 51, 43, 38, 20, 16, -112, -69, 3, -47, 125, 101, 13, 125, 57, 75, -64, -62, 81, 89, -60, 34, -7, 105, 120, -70, 42, -108};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("AZMBYTLPZQLARFODXBRYAVRIUGNHHTGPIBJWMVVEUHZFSOUTPTIBPLXZKHFFRVCGNPKCGLEUYXPMBUNGUXPAINVATYBIQIVXNIAUDPEEBLDXMMYDZVESBNVYMMKCZYEWWRAULWSJGLFITXRNOOQKLC");
    msg.length = 221U;
    const signed char tmp_msg_1[] = {31, -109, 68, -39, -85, -51, -28, 110, -19, 60, 61, -4, -38, -62, 33, 112, -8, 103, -23, -28, -42, 87, -20, -51, 73, -89, -34, -122, -121, -52, 43, -115, 109, -122, 17, 28, -46, 42, 77, 99, 17, -101, -59, -127, 111, -104, -80, 73, -33, -63, 20, -38, -84, -77, -27, -125, -79, 112};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7272553848133301);
    msg.setSource(59192U);
    msg.setSourceEntity(178U);
    msg.setDestination(47128U);
    msg.setDestinationEntity(60U);
    msg.action = 245U;
    msg.longain = 0.18332645835325845;
    msg.latgain = 0.033416742850328696;
    msg.bondthick = 2586989461U;
    msg.leadgain = 0.5288374373700669;
    msg.deconflgain = 0.8077872425691329;

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
    msg.setTimeStamp(0.04337592068010421);
    msg.setSource(28941U);
    msg.setSourceEntity(228U);
    msg.setDestination(25547U);
    msg.setDestinationEntity(91U);
    msg.action = 90U;
    msg.longain = 0.4720428155714823;
    msg.latgain = 0.2572963482596393;
    msg.bondthick = 1381125289U;
    msg.leadgain = 0.07623475728171825;
    msg.deconflgain = 0.9444205178200819;

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
    msg.setTimeStamp(0.038814909103047635);
    msg.setSource(1123U);
    msg.setSourceEntity(47U);
    msg.setDestination(51617U);
    msg.setDestinationEntity(47U);
    msg.action = 67U;
    msg.longain = 0.6032622833439277;
    msg.latgain = 0.18446970088936654;
    msg.bondthick = 2668170427U;
    msg.leadgain = 0.9641682196671156;
    msg.deconflgain = 0.8194865941647972;

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
    msg.setTimeStamp(0.01724348500876305);
    msg.setSource(43201U);
    msg.setSourceEntity(176U);
    msg.setDestination(7492U);
    msg.setDestinationEntity(184U);
    msg.err_mean = 0.00829297985121169;
    msg.dist_min_abs = 0.7911203484171965;
    msg.dist_min_mean = 0.5401770781620256;

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
    msg.setTimeStamp(0.8094079271231082);
    msg.setSource(53204U);
    msg.setSourceEntity(13U);
    msg.setDestination(36690U);
    msg.setDestinationEntity(172U);
    msg.err_mean = 0.7540162509054994;
    msg.dist_min_abs = 0.5773216903499918;
    msg.dist_min_mean = 0.8155446218154347;

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
    msg.setTimeStamp(0.2828045648784113);
    msg.setSource(15725U);
    msg.setSourceEntity(205U);
    msg.setDestination(7932U);
    msg.setDestinationEntity(220U);
    msg.err_mean = 0.7622898368795221;
    msg.dist_min_abs = 0.04280987456637786;
    msg.dist_min_mean = 0.30195470978392247;

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
    msg.setTimeStamp(0.18940947597111601);
    msg.setSource(31999U);
    msg.setSourceEntity(76U);
    msg.setDestination(41544U);
    msg.setDestinationEntity(119U);
    msg.action = 11U;
    msg.lon_gain = 0.5842460687922831;
    msg.lat_gain = 0.25049939054105774;
    msg.bond_thick = 0.025569354238696218;
    msg.lead_gain = 0.4265743787649733;
    msg.deconfl_gain = 0.9835643493596734;
    msg.accel_switch_gain = 0.2667239132328786;
    msg.safe_dist = 0.31630905807162424;
    msg.deconflict_offset = 0.1715971995455594;
    msg.accel_safe_margin = 0.1671870886534368;
    msg.accel_lim_x = 0.38576926376054366;

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
    msg.setTimeStamp(0.997863454705861);
    msg.setSource(46638U);
    msg.setSourceEntity(39U);
    msg.setDestination(60089U);
    msg.setDestinationEntity(55U);
    msg.action = 33U;
    msg.lon_gain = 0.26767949190918505;
    msg.lat_gain = 0.11844470781299543;
    msg.bond_thick = 0.5150372420992434;
    msg.lead_gain = 0.22600646715456696;
    msg.deconfl_gain = 0.17030558266442752;
    msg.accel_switch_gain = 0.40592718792664606;
    msg.safe_dist = 0.4228435841766949;
    msg.deconflict_offset = 0.6970319106854954;
    msg.accel_safe_margin = 0.09121191607928913;
    msg.accel_lim_x = 0.563768274159211;

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
    msg.setTimeStamp(0.8802786482453625);
    msg.setSource(43164U);
    msg.setSourceEntity(213U);
    msg.setDestination(19455U);
    msg.setDestinationEntity(151U);
    msg.action = 154U;
    msg.lon_gain = 0.7803785250167179;
    msg.lat_gain = 0.1682244324729324;
    msg.bond_thick = 0.0670373932207573;
    msg.lead_gain = 0.4153804076599952;
    msg.deconfl_gain = 0.5336651126068106;
    msg.accel_switch_gain = 0.46172280170379787;
    msg.safe_dist = 0.24649444086448746;
    msg.deconflict_offset = 0.40483453277447823;
    msg.accel_safe_margin = 0.9945908173750416;
    msg.accel_lim_x = 0.7706158998015508;

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
    msg.setTimeStamp(0.6966531656204474);
    msg.setSource(24866U);
    msg.setSourceEntity(179U);
    msg.setDestination(43266U);
    msg.setDestinationEntity(92U);
    msg.type = 151U;
    msg.op = 13U;
    msg.err_mean = 0.9271021845954159;
    msg.dist_min_abs = 0.7108014925623086;
    msg.dist_min_mean = 0.17880967255232272;
    msg.roll_rate_mean = 0.08923194572501247;
    msg.time = 0.8864402250557897;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.8630473508999188;
    tmp_msg_0.lat_gain = 0.4236515674324072;
    tmp_msg_0.bond_thick = 0.8848390231288825;
    tmp_msg_0.lead_gain = 0.13444679135157622;
    tmp_msg_0.deconfl_gain = 0.28006225222793313;
    tmp_msg_0.accel_switch_gain = 0.3544408137301186;
    tmp_msg_0.safe_dist = 0.16621204187370742;
    tmp_msg_0.deconflict_offset = 0.34502770347234357;
    tmp_msg_0.accel_safe_margin = 0.33183829970943324;
    tmp_msg_0.accel_lim_x = 0.6502698969635785;
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
    msg.setTimeStamp(0.880957160774492);
    msg.setSource(52776U);
    msg.setSourceEntity(119U);
    msg.setDestination(36132U);
    msg.setDestinationEntity(178U);
    msg.type = 252U;
    msg.op = 241U;
    msg.err_mean = 0.5567511473745165;
    msg.dist_min_abs = 0.11710291394297534;
    msg.dist_min_mean = 0.23366320754039926;
    msg.roll_rate_mean = 0.28573489736058943;
    msg.time = 0.3233805320073675;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 215U;
    tmp_msg_0.lon_gain = 0.6046004226916766;
    tmp_msg_0.lat_gain = 0.3331806956069351;
    tmp_msg_0.bond_thick = 0.16757357381243076;
    tmp_msg_0.lead_gain = 0.5084066757836672;
    tmp_msg_0.deconfl_gain = 0.08965231642699034;
    tmp_msg_0.accel_switch_gain = 0.9423484443691263;
    tmp_msg_0.safe_dist = 0.6446474237871725;
    tmp_msg_0.deconflict_offset = 0.7736933560805708;
    tmp_msg_0.accel_safe_margin = 0.6197496753678259;
    tmp_msg_0.accel_lim_x = 0.3953401134238832;
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
    msg.setTimeStamp(0.02620002446507097);
    msg.setSource(65291U);
    msg.setSourceEntity(254U);
    msg.setDestination(9586U);
    msg.setDestinationEntity(215U);
    msg.type = 212U;
    msg.op = 166U;
    msg.err_mean = 0.3659296703453233;
    msg.dist_min_abs = 0.8954498331139303;
    msg.dist_min_mean = 0.41264789660275325;
    msg.roll_rate_mean = 0.46871283889685134;
    msg.time = 0.8645714154890479;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 6U;
    tmp_msg_0.lon_gain = 0.30576740306404715;
    tmp_msg_0.lat_gain = 0.8571518626609398;
    tmp_msg_0.bond_thick = 0.25588212898781804;
    tmp_msg_0.lead_gain = 0.33516009271019875;
    tmp_msg_0.deconfl_gain = 0.09675159941104305;
    tmp_msg_0.accel_switch_gain = 0.9292822951577775;
    tmp_msg_0.safe_dist = 0.1368459414763319;
    tmp_msg_0.deconflict_offset = 0.6630327665232307;
    tmp_msg_0.accel_safe_margin = 0.27708662455741817;
    tmp_msg_0.accel_lim_x = 0.1761818902705663;
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
    msg.setTimeStamp(0.46520359053153315);
    msg.setSource(27209U);
    msg.setSourceEntity(226U);
    msg.setDestination(34657U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.05381426041316051;
    msg.lon = 0.24596422487064218;
    msg.eta = 2999089242U;
    msg.duration = 32266U;

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
    msg.setTimeStamp(0.307319051745252);
    msg.setSource(56451U);
    msg.setSourceEntity(186U);
    msg.setDestination(63173U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.2655656329696813;
    msg.lon = 0.13012522357744538;
    msg.eta = 4031257417U;
    msg.duration = 25029U;

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
    msg.setTimeStamp(0.5557635210134111);
    msg.setSource(21477U);
    msg.setSourceEntity(225U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.10450628733125611;
    msg.lon = 0.3086211618828949;
    msg.eta = 2154468551U;
    msg.duration = 46912U;

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
    msg.setTimeStamp(0.9602391744775666);
    msg.setSource(30199U);
    msg.setSourceEntity(99U);
    msg.setDestination(34941U);
    msg.setDestinationEntity(128U);
    msg.plan_id = 5211U;

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
    msg.setTimeStamp(0.8413318355051383);
    msg.setSource(60625U);
    msg.setSourceEntity(69U);
    msg.setDestination(28707U);
    msg.setDestinationEntity(30U);
    msg.plan_id = 14165U;

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
    msg.setTimeStamp(0.5406437674349961);
    msg.setSource(6011U);
    msg.setSourceEntity(199U);
    msg.setDestination(40833U);
    msg.setDestinationEntity(77U);
    msg.plan_id = 47099U;

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
    msg.setTimeStamp(0.2277466293835574);
    msg.setSource(11282U);
    msg.setSourceEntity(145U);
    msg.setDestination(38097U);
    msg.setDestinationEntity(19U);
    msg.type = 155U;
    msg.command = 253U;
    msg.settings.assign("DVNVOQNSPSJYZKLYFVQCDXFAUCRGEVMTOGUSRUFBAJCLEAIHIXLJWBCMWFCAUBVDPNDKDATESKOIKGBQZEJNVEJLJDRXHVYONOJNIPUOFEKSRBXLWUYYGGZTEIQHAPAPECQBWFZIGTMSRMGHHTDHZIGREICWOVKSAJRYWUDVNHWQBYVUCTWBYLMPLUCRIPWBZYAFKMZPQCOKWSJFIXQORGDLYMXOBXDNEZASFKMXJTMNSH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59307U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JEKNHXRQANNLUGFBUFSQTXZYMEPKIXVZORYALZEQYRDXGSHDHWKVTQJGEYRRYOAVNPRSBMHKXECFHRSILZWBKFWOADOGILVDWYPNBUHSWOLLBNTVFZSBCBVLPPAPNSKOGBNAHJCCIVLATJQVUARXCTPWGKMGTFIJEMEOEDGMFFYQDZUAABPWQMCFCXTJXDEMPKQRBEUUZPTIHGRIWCYSMCKWFCIOOIZNDGUIYJTNJOMJKHQVLWTHZXUMQS");

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
    msg.setTimeStamp(0.09555163787817578);
    msg.setSource(61002U);
    msg.setSourceEntity(31U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(237U);
    msg.type = 180U;
    msg.command = 88U;
    msg.settings.assign("SQDDSPGWYGETMCUISKBCLNNXXAZDCNISKZHLVW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16540U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OUPIOIUGDGBXQOHWPMIQQPGHERRFQGVGJVRDF");

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
    msg.setTimeStamp(0.3842845651919867);
    msg.setSource(44256U);
    msg.setSourceEntity(60U);
    msg.setDestination(33782U);
    msg.setDestinationEntity(41U);
    msg.type = 114U;
    msg.command = 10U;
    msg.settings.assign("TNDWSUIMAVZGYKYVLISNPKEMPMYHYRENYRBDRZRQWVHRGAQHJLOTGUWSZTMLCDEXBDGQNVIANPHYKMTMRQKAIKUMXWFTVNYEACIXDWJODBLGHTLIUVJAOKJYGOXSGFEFNLJQHBJOWGPKQPEULMEACSCXLZXDZCEZZAJIIHTUTFXKKNVFFOOJBURYWRFHHSATFZPBB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53655U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5119798975974676;
    tmp_tmp_msg_0_0.lon = 0.7550688625808681;
    tmp_tmp_msg_0_0.eta = 2908822127U;
    tmp_tmp_msg_0_0.duration = 9391U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HMCCMZXWZQGUMHMSIIRLIYJBKTPWYGHBEXPPSDNXMOYBFCXLBVXVNLJKIJOAPFALEJHJFONUQORCZLNGJYMYBAYFEFLASQFQTDRBDCGKMCTABHCTHTZIOWCNYHFFUEVQDQ");

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
    msg.setTimeStamp(0.019812241673321962);
    msg.setSource(64524U);
    msg.setSourceEntity(169U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(228U);
    msg.state = 132U;
    msg.plan_id = 1020U;
    msg.wpt_id = 131U;
    msg.settings_chk = 19350U;

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
    msg.setTimeStamp(0.9665608973683684);
    msg.setSource(14440U);
    msg.setSourceEntity(228U);
    msg.setDestination(45962U);
    msg.setDestinationEntity(224U);
    msg.state = 241U;
    msg.plan_id = 776U;
    msg.wpt_id = 155U;
    msg.settings_chk = 52796U;

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
    msg.setTimeStamp(0.5180364425878533);
    msg.setSource(8531U);
    msg.setSourceEntity(32U);
    msg.setDestination(1201U);
    msg.setDestinationEntity(239U);
    msg.state = 58U;
    msg.plan_id = 40643U;
    msg.wpt_id = 96U;
    msg.settings_chk = 53079U;

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
    msg.setTimeStamp(0.050024085090572545);
    msg.setSource(11751U);
    msg.setSourceEntity(60U);
    msg.setDestination(58515U);
    msg.setDestinationEntity(70U);
    msg.uid = 155U;
    msg.frag_number = 247U;
    msg.num_frags = 95U;
    const signed char tmp_msg_0[] = {-103, 84, -30, 25, -111, 14, 61, -127, 41, 21, 122, 117, -17, -108, -3, 66, 117, 110, 83, 53, 47, -11, 78, -94, 53, -126, -59, -88, -45, -39, 94, 2, 102, -21, -58, -57, 68, -101, -116, -13, 112, 18, 80, -43, 101, -52, -54, 125, 29, -123, 26, -20, -113, 115, 109, -55, -71, 29, -52, -75};
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
    msg.setTimeStamp(0.8792577658816864);
    msg.setSource(45749U);
    msg.setSourceEntity(245U);
    msg.setDestination(5061U);
    msg.setDestinationEntity(254U);
    msg.uid = 165U;
    msg.frag_number = 130U;
    msg.num_frags = 201U;
    const signed char tmp_msg_0[] = {40, 44, -56, -48, -35, 23, -46, -97, -96, -20, -123, -15, 55, 63, 102, -71, -10, -13, 7, -118, 110, -7, 93, 95, -14, 86, 111, -43, 20, 75, 116, -116, -13, -115, -106, -63, 18, -39, 96, -99, -68, 27, 37, 44, 17, 5, -24, 13, -57, -51, 67, 111, 119, -43, 104, -125, -32, 70, 50, 17, 48, 113, -105, -65, -101, 41, -20, -113, -91, 42, 97, 36, 87, 8, 48, -4, 59, 78, -68, -72, 85, 26, 8, 73, -53, 96, 0, 125, 30, 109, 97, -117, 95, -88, -44, -76, 59, -115, -62, -120, 70, -40, -56, 89, 82, 81, 63, -32, -18, 71, -107, -16, 20, -120, -109, 50, 104, -79, 71, 52, -30, -62, 57, -35, -113, -70, 1, -113, -80, 66, -43, -118, 67, 92, 124, 116, 15, -49, 105, 54, -33, -76, -17, -17, 109, 42, 45, 23, 12, 71, 109, -36, 26, 27, 28, 48, -105, -33, 12, 76, 38, 123, -47, -80, 79, 93, -79, 63, -126, 63, -38, -107, 71, 11, 6, -115, 38, 73, -95, -76, 40, 92, 16, -48, 89, 119, 82, 104, -99, 31, 20, 30, 53, 41, 20, 70, -44, -71, -54, 3, 58, -5, -77, 114, -100, -18, -57, 86, 64, 87, -23, 50, -7, -103, 113, 59, 77};
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
    msg.setTimeStamp(0.4958866796458099);
    msg.setSource(6751U);
    msg.setSourceEntity(4U);
    msg.setDestination(34941U);
    msg.setDestinationEntity(196U);
    msg.uid = 115U;
    msg.frag_number = 23U;
    msg.num_frags = 102U;
    const signed char tmp_msg_0[] = {-23, -81, 61, -41, -96, -39, 12, -11, 76, 90, 114, 58, 72, 56, -59, 90, 19, -67, -83, -11, 106, 9, -117, 32, 75, 11, 44, -54, 121, 27, -118, 97, -103, -75, 34, -4, -70, 37, 112, 78, -125, -79, 45, -122, 89, -27, 30, -84, 89, -37, 15, 112, -25, 111, 65, -112, -105, 35, 81, 69, -16, 73, -76, 39, -43, 113, 48, 64, 57, 59, -57, -67, 57, -7, -15, -37, 87, -27, -41, 68, -92, 110, -61};
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
    msg.setTimeStamp(0.35553109624971524);
    msg.setSource(17205U);
    msg.setSourceEntity(21U);
    msg.setDestination(24452U);
    msg.setDestinationEntity(243U);
    msg.uid = 187U;
    msg.op = 165U;
    msg.frag_ids.assign("KYOTVRHEONYJVSROWEJUWQYPNPZQGXOHVEWLLKZIOSYUJMBVOSYFXZAGBMGLAITZSGXKTWNHKVHTSXENXMCSAKOVVUAXFITTEDFUUDJYURPPXUSQOCNDGCLCRUBLATPBFWMWPEZGEGUPNQMMEVLMCIYARMFGMRLFKUQKYAFXNZDA");

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
    msg.setTimeStamp(0.5604599064170911);
    msg.setSource(25818U);
    msg.setSourceEntity(189U);
    msg.setDestination(35244U);
    msg.setDestinationEntity(123U);
    msg.uid = 65U;
    msg.op = 148U;
    msg.frag_ids.assign("XWKENIVLNYVRZQBECMFDNAHCEFMFTCGZVTRNGWJSQTXFQSVWKFUPUJSYKXYWENGKZVHRPXIFESMBIOFOIZOPPCMZZJILYHTCJEWRNSBXQVOLTHKNAMVWWRARFCENAGKEKIMRIUAEUYJBANYGXLLCDAMXBFJGGJYQTZGBHAIRYSUOFBDI");

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
    msg.setTimeStamp(0.06626805951921322);
    msg.setSource(47524U);
    msg.setSourceEntity(17U);
    msg.setDestination(65456U);
    msg.setDestinationEntity(148U);
    msg.uid = 217U;
    msg.op = 209U;
    msg.frag_ids.assign("YXBMEJCRKTGDBAALLEZGQFHAYDPDFRUYJBQFFABEPNQVWVGKLDGZGVFPNLMNPSSTXCCVRCRFZWAJVDTZHDPWJQTMOOQHOWLVUOVZMHYDHKAUQIXJTIEYCLGONMHWDIUQTUWGSMEIHUSYEIGFOXBYQBJUWSHGPYSVCKKHKUYIJEBWOKNUNXFXDLVOWTLXSNCZAQCNXBPOINSMDZRTXRKPTLMMSSKPWBAZIBIAKTJFPQANFJJHRXRCRMUEEOY");

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
    msg.setTimeStamp(0.7795557851116742);
    msg.setSource(4427U);
    msg.setSourceEntity(35U);
    msg.setDestination(50819U);
    msg.setDestinationEntity(89U);
    msg.content_type.assign("DLFIIKZETOUSKINNDWUMRLPVOGGILAZRXGZXYQSHLUWJIJWJPHOWCEYWSJMHTCEYZFR");
    const signed char tmp_msg_0[] = {-12, -1, 45, 65, -24, -57, -58, 97, -111, 111, -13, -117, -29, -49, -43, 86, 41, -111, -94, 98, -32, -73, -54, -53, 57, 116, -69, -28, -48, 82, -72, -16, -128, -81, 6, 106, -105, 17, 103, 24, 70, -77, 5, -5, -31, 36, -121, 80, 125, 96, 25, -62, -62, 32, 27, 123, -101, 38, -101, -13, -93, 123, -67, 113, -41, 13, -49, -117, 0, -88, -2};
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
    msg.setTimeStamp(0.06875370881639065);
    msg.setSource(4081U);
    msg.setSourceEntity(49U);
    msg.setDestination(5326U);
    msg.setDestinationEntity(215U);
    msg.content_type.assign("HXZUZMEJZFMOKSAIVINEWBPMCCLSUVZPEYDFQCVFYLUXTENDTBPAMGFSAUTGCJOXLKOKKCISXBAFDIRYBRXVDTIOKQKTUQYTJRMEFGWHZVLUYMNPNESQQHNKWGPMLTHHOVUTBJJOPGLQRSCDSZWLCGHQFZVABZDDQYNRTZVVYBDJTIJFPJAQUAPROGGXEWYXVSOXRHDWORNELLEIXMWHPUCNBXLWBJIQKIYKDRGMAFCKEOYAFSIHJCBURPNHZ");
    const signed char tmp_msg_0[] = {-103, -123, -49, 77, 40, 115, -56, -73, 110, 90, 59, 1, 112, -127, 69, -31, -105, 56, 74, 70, 32, -46, 40, -113, -94, -30, 46, 45, 52, 98};
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
    msg.setTimeStamp(0.22246198079611967);
    msg.setSource(60237U);
    msg.setSourceEntity(141U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(227U);
    msg.content_type.assign("BVYMHBFERXGQBACMOGFCOINVGCAYDYMXJQJPGFRHSZELHQHJCIBCKRWQKTYINGPVUDYPLZTQLELQJTIKKYRCSIETRGVOXRVTRNZULFKPFXOHIVSWZSJWTXQMGGMVAFZQDQFTOEERMITEL");
    const signed char tmp_msg_0[] = {-24, 58, -87, -124, -22, 14, -22, 77, 77, -73, -38, 26, 45, 7, 100, 55, -93, 29, 26, 23, -101, 52, 27, 27, -44, -7, 123, 0, 24, -57, 47, -62, -78, 17, -111, -29, -74, 126, 76, 7, -114, 28, 73, -59, -35, 46, 102, -89, -22, 86, -125, 51, 31, -32, 46, -121, 70, 27, 4, -18, 124, -86, -3, -7, 85, -74, 58, 67, 17, 44, -90, -49, 76, -65, -122, 120, 55, -7, -6, 19, -125, 11, -67, 29, -44, -90, 45, -88, 125, -52, 81, -69, 117, -93, -122, 68, 122, 43, 123, -4, 72, 99, -77, -32, 58, 37, 51, -6, 53, -36, -124, -84, -11, 12, -87, -10, 70, -125, -22, -12, -27, 63, 17, 71, -60, -31, 64, 4, -119, -12, -71, 28, 88, 5, -95, -79, -88, -69, 55, -5, -7, 84, 37, 60, 95, 28, -44, 67, 33, 43, 94, 77, -63, -18, -84, 101, -97, 60, 114, -122, -11, -3, 12, 122, -14, -1, 48, -28, -40, 57, 38, 83, -105, 63, 20, 45, -27, 34, -50, 52};
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
    msg.setTimeStamp(0.3499303060185215);
    msg.setSource(33100U);
    msg.setSourceEntity(31U);
    msg.setDestination(875U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.380272337358328);
    msg.setSource(40160U);
    msg.setSourceEntity(183U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.07479231738070447);
    msg.setSource(23467U);
    msg.setSourceEntity(21U);
    msg.setDestination(34203U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.2933319061869699);
    msg.setSource(55041U);
    msg.setSourceEntity(207U);
    msg.setDestination(48125U);
    msg.setDestinationEntity(142U);
    msg.target = 43113U;
    msg.bearing = 0.32409491753643505;
    msg.elevation = 0.33682329561356406;

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
    msg.setTimeStamp(0.12552795919872473);
    msg.setSource(50822U);
    msg.setSourceEntity(110U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(142U);
    msg.target = 53848U;
    msg.bearing = 0.8046534567894055;
    msg.elevation = 0.3914305210453254;

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
    msg.setTimeStamp(0.9126576312560675);
    msg.setSource(57635U);
    msg.setSourceEntity(124U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(7U);
    msg.target = 55512U;
    msg.bearing = 0.2077218790599259;
    msg.elevation = 0.8824769531383172;

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
    msg.setTimeStamp(0.4213658213115944);
    msg.setSource(19346U);
    msg.setSourceEntity(174U);
    msg.setDestination(23074U);
    msg.setDestinationEntity(23U);
    msg.target = 18725U;
    msg.x = 0.5859595232458233;
    msg.y = 0.385743310921276;
    msg.z = 0.8245712865402169;

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
    msg.setTimeStamp(0.5943075186833706);
    msg.setSource(42349U);
    msg.setSourceEntity(120U);
    msg.setDestination(5272U);
    msg.setDestinationEntity(159U);
    msg.target = 32094U;
    msg.x = 0.23359142659165233;
    msg.y = 0.4722210811378704;
    msg.z = 0.9534871913684171;

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
    msg.setTimeStamp(0.11207378782426447);
    msg.setSource(28056U);
    msg.setSourceEntity(139U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(247U);
    msg.target = 29069U;
    msg.x = 0.7615659580241249;
    msg.y = 0.2812475942863337;
    msg.z = 0.5737877747643182;

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
    msg.setTimeStamp(0.09506265628708155);
    msg.setSource(64045U);
    msg.setSourceEntity(240U);
    msg.setDestination(12485U);
    msg.setDestinationEntity(151U);
    msg.target = 43945U;
    msg.lat = 0.07936188819635992;
    msg.lon = 0.023293870354842316;
    msg.z_units = 70U;
    msg.z = 0.5030734009844433;

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
    msg.setTimeStamp(0.7764793259183521);
    msg.setSource(8059U);
    msg.setSourceEntity(207U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(199U);
    msg.target = 2257U;
    msg.lat = 0.22568041585359488;
    msg.lon = 0.957968741016862;
    msg.z_units = 72U;
    msg.z = 0.41632811961989946;

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
    msg.setTimeStamp(0.785939128350253);
    msg.setSource(27921U);
    msg.setSourceEntity(188U);
    msg.setDestination(21112U);
    msg.setDestinationEntity(191U);
    msg.target = 25784U;
    msg.lat = 0.9844867674375534;
    msg.lon = 0.45667056958625374;
    msg.z_units = 42U;
    msg.z = 0.567798777613166;

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
    msg.setTimeStamp(0.833911635019432);
    msg.setSource(33613U);
    msg.setSourceEntity(141U);
    msg.setDestination(888U);
    msg.setDestinationEntity(197U);
    msg.locale.assign("VHYEPINRNAJXFUAOPNUADJSPPKTFQSMYUIDTAENYLMMCSTQLBJELNNOFVYGWLUPVIHZHORHOUKKUOJCDKLFXGMXMNSGCTEWPWUFIHWPDCRSXZRJOYZBZNOVYCQGKWDQZCKUKJAIZCVRYAAIYKJVDFMOFGQNJQIWEXAELGFBTEQDSSTBSLFRTDIBTZHCZEWXMWIMOQBBXBKBVMUHRW");
    const signed char tmp_msg_0[] = {-30, -58, -57, -115, 4, 29, -43, 59, -1, 7, 24, 117, -39, -122, 17, -76, 29, 36, 58, 77, -99, 110, 12, 72, 62, -2, 86, -109, 94, -63, 3, -45, 116, -123, 94, 61, -128, -38, 15, 40, 15, 87, -90, 101, -47, 62, 28, 7, -15, 44, -98, 88, -112, -90, -35, -25, 18, 69, 91, -7, -62, -58, 19, 81, 108, 96, -12, -61, -115, 96, 25, 109, 109, -80, 124, 108, -27, 40, 118, -42, 46, 44, -9, -19, 11, -97, -60, 27, 123, 74, 5, 95, 29, 81, -115, 40, 72, 42, 60, 102, -19, 43, -105, -77, 96, -82, 14, 19, -34, 49, -120, 53, -13, 46, 69, 78, 78, -13, -100, -15, 111, -60, 74, 31, 11, -60, 30, 125, 1, -127, -122, -101, 52, -57, -26, 50, 35, 34, 65, 29, 116, -39, 80, 125, -28, -37, -109, -103, 120, 105, 65, 73, -69, 87, 22, -112, -95, -30, 61, -2, 84, -17, 34, -52, -28, 89, -127, -72, -66, -94, 72, 29, -107};
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
    msg.setTimeStamp(0.740263174052693);
    msg.setSource(40601U);
    msg.setSourceEntity(235U);
    msg.setDestination(42418U);
    msg.setDestinationEntity(205U);
    msg.locale.assign("QMCDGCLGGSDBLGWOPHTINZAZKOTYCTLFCFPCAGFPREZUQADNEHKWEGILQTNNPTMBPHPDVYECLUSQQPKSHUWUVGVDXRSJMWFMIWJPBHHMKEXOAMAZWMHRKWOUZSR");
    const signed char tmp_msg_0[] = {-78, 27, 66, -93, -82, -15, -64, 21, 112, 125, -50, -95, 58, -126, -86, -85, 119, -91, -113, -29, 57, 118, 71, -123, 106, 92, 117, -71, 14, 37, 94, -85, 43, 23, 77, 113, -15, -30, -52, 65, 30, -98, -41, 84, -112, 25, -81, 28, 111, 4, 29, 83, 25, 37, 83, 5, 104, 6, -125, 19, -28, 18, 83, -5, 56, -109, -77, 100, -12, 19, -80, 53, 110, 5, 79, -71, 36, -62, -81, -115, 112, 95, -86, -58, -56, 6, -88, 8, 65, -27, 35, 25, -52, 98, -46, 83, -109, -30, 67, -118, 95, 96, 110, -13, 116, -7, -128, -124, -94, 50, -14, -108, -37, -36, -69, -1, -12, 68, 98, 62, 59, -11, 45, 21, 56, -7, 57, 89, -44, 70, -63, 99, 9, 62, 104, -93, -60, 77, -69, 23, -33, 87, -2, -87, 83, -31, -117, -45, 18, -93, -26, -63, -111, 47, 109, 110, 121, 5, -112, -46, -56, -110, 3, -72, -98, -54, 115, -19, -75, 68, 64, -33, -7, 1, 33, -106, 89, -106, 41, 5, 123, 49, -122, -32, 1, 126, -67};
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
    msg.setTimeStamp(0.6259274883871396);
    msg.setSource(48519U);
    msg.setSourceEntity(215U);
    msg.setDestination(49910U);
    msg.setDestinationEntity(178U);
    msg.locale.assign("ZRGKHGXEMVHPGXPFBEJNEAZZSBEXVLTESOVRICXNBXYKKFNOUDFBBPJNWOXOOTCYRICVRUULSMJWHIWQRYUDZDOJXMPLNAOVTWTYTVPKCWKWUXSJXDLLBRJKFIVCGGMMFVIEHFQSWMADQTCJMXLGSYYGZHGTBMKIBAWPUV");
    const signed char tmp_msg_0[] = {40, 115, 28, -43, -17, -48, 29, 85, 24, -85, 47, -16};
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
    msg.setTimeStamp(0.5876328334844685);
    msg.setSource(53609U);
    msg.setSourceEntity(53U);
    msg.setDestination(61589U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.5323741831969173);
    msg.setSource(59329U);
    msg.setSourceEntity(4U);
    msg.setDestination(13943U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.4627530812156777);
    msg.setSource(47066U);
    msg.setSourceEntity(68U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.07271743908996753);
    msg.setSource(41190U);
    msg.setSourceEntity(156U);
    msg.setDestination(1587U);
    msg.setDestinationEntity(22U);
    msg.camid = 62U;
    msg.x = 24350U;
    msg.y = 54269U;

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
    msg.setTimeStamp(0.6090303163989266);
    msg.setSource(20379U);
    msg.setSourceEntity(224U);
    msg.setDestination(41539U);
    msg.setDestinationEntity(216U);
    msg.camid = 224U;
    msg.x = 25324U;
    msg.y = 24818U;

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
    msg.setTimeStamp(0.7996050155092892);
    msg.setSource(1592U);
    msg.setSourceEntity(90U);
    msg.setDestination(3100U);
    msg.setDestinationEntity(90U);
    msg.camid = 221U;
    msg.x = 60494U;
    msg.y = 38416U;

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
    msg.setTimeStamp(0.5398240804140338);
    msg.setSource(47056U);
    msg.setSourceEntity(73U);
    msg.setDestination(42069U);
    msg.setDestinationEntity(244U);
    msg.camid = 92U;
    msg.x = 11834U;
    msg.y = 31858U;

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
    msg.setTimeStamp(0.5017984476714215);
    msg.setSource(57231U);
    msg.setSourceEntity(174U);
    msg.setDestination(17160U);
    msg.setDestinationEntity(204U);
    msg.camid = 140U;
    msg.x = 9971U;
    msg.y = 63128U;

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
    msg.setTimeStamp(0.11661340560581956);
    msg.setSource(2048U);
    msg.setSourceEntity(117U);
    msg.setDestination(10393U);
    msg.setDestinationEntity(200U);
    msg.camid = 162U;
    msg.x = 25493U;
    msg.y = 48545U;

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
    msg.setTimeStamp(0.671903711324137);
    msg.setSource(11655U);
    msg.setSourceEntity(125U);
    msg.setDestination(45336U);
    msg.setDestinationEntity(48U);
    msg.tracking = 193U;
    msg.lat = 0.27285169241455964;
    msg.lon = 0.5433461285072135;
    msg.x = 0.9641159806112716;
    msg.y = 0.7807170689167692;
    msg.z = 0.8261278989951009;

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
    msg.setTimeStamp(0.7499014778630291);
    msg.setSource(4985U);
    msg.setSourceEntity(57U);
    msg.setDestination(19254U);
    msg.setDestinationEntity(193U);
    msg.tracking = 172U;
    msg.lat = 0.8223787957725324;
    msg.lon = 0.14295363456514365;
    msg.x = 0.041286977740222275;
    msg.y = 0.9696779996400287;
    msg.z = 0.4866735692529188;

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
    msg.setTimeStamp(0.5415464148116722);
    msg.setSource(64878U);
    msg.setSourceEntity(131U);
    msg.setDestination(15735U);
    msg.setDestinationEntity(88U);
    msg.tracking = 97U;
    msg.lat = 0.1302621165772181;
    msg.lon = 0.11930481992323205;
    msg.x = 0.6845770310540668;
    msg.y = 0.05756407790852347;
    msg.z = 0.49861739966014973;

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
    msg.setTimeStamp(0.531628922499826);
    msg.setSource(18892U);
    msg.setSourceEntity(142U);
    msg.setDestination(32431U);
    msg.setDestinationEntity(239U);
    msg.target.assign("XLWJSSMBZYZERPRDNBTNSZWOPAYUTPFTNCDHWAHZWVSSZXDSQEFRDKAUFYPQNIHAGCMJRVRCPOQTEKFLIYZKWMLVVKGNFDXJFXLEHBDEBQTCEKOIEFIRWNFNUFMDGGJLQURXVHBBWYUWWCKQGXGJTSVREOMMLDGUOVMSY");
    msg.lbearing = 0.6711403514504334;
    msg.lelevation = 0.8459690085700703;
    msg.bearing = 0.031782645099570184;
    msg.elevation = 0.5777512412103164;
    msg.phi = 0.08939727800108699;
    msg.theta = 0.4662863548833699;
    msg.psi = 0.5175716093460035;
    msg.accuracy = 0.25351889538109107;

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
    msg.setTimeStamp(0.7420513610488023);
    msg.setSource(24646U);
    msg.setSourceEntity(72U);
    msg.setDestination(23887U);
    msg.setDestinationEntity(74U);
    msg.target.assign("HFPZJCXIIFDRSHOUSWAAOKTQNUDBWQHIEWTQYFBZQ");
    msg.lbearing = 0.6379511173040159;
    msg.lelevation = 0.41677834513118484;
    msg.bearing = 0.549589530766618;
    msg.elevation = 0.36715443469113485;
    msg.phi = 0.37372452165498204;
    msg.theta = 0.8480428891858303;
    msg.psi = 0.5500150843175673;
    msg.accuracy = 0.03356011135226966;

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
    msg.setTimeStamp(0.25091301889490614);
    msg.setSource(28236U);
    msg.setSourceEntity(105U);
    msg.setDestination(7817U);
    msg.setDestinationEntity(239U);
    msg.target.assign("WSUVBYZWCKHEFQQLPVLAXZLYZQSDTLBDKCVCNFOBWAWLTAIOEBTWPDKDTCRRXHKPFYSUHMNNLJHPKJUSHPZTDWCUPASNUGORZWSCJUATCVHMMFLWNXMSVXGHQYXXEAQOYKBIUQMHOSDJQLZYTORBYEEIG");
    msg.lbearing = 0.2629138011838168;
    msg.lelevation = 0.3354893071791677;
    msg.bearing = 0.11191904697221966;
    msg.elevation = 0.5033704332409921;
    msg.phi = 0.15199027237949359;
    msg.theta = 0.7832969869369896;
    msg.psi = 0.4174610224568387;
    msg.accuracy = 0.5257329374765262;

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
    msg.setTimeStamp(0.5509974485557052);
    msg.setSource(58465U);
    msg.setSourceEntity(157U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(52U);
    msg.target.assign("YUWJKLFLAMCVUAVWEZPOFMNYNBHMGOMSTHVJAFJNINKJELGDMHYZQHOANWOLGDHNFDUPBVTWKRTDFMQZJOELXGCSSRQIQTAGMZWMXBUHMPAKOZBTQSBDSPCWVBNQYUVEFKTPWQB");
    msg.x = 0.5139178663001417;
    msg.y = 0.818114050750711;
    msg.z = 0.16619639892810667;
    msg.n = 0.20836764113732442;
    msg.e = 0.025985693201018067;
    msg.d = 0.8672008547939585;
    msg.phi = 0.2695684929316877;
    msg.theta = 0.9822971757768376;
    msg.psi = 0.12288119802454944;
    msg.accuracy = 0.2544615282915217;

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
    msg.setTimeStamp(0.5950117443154616);
    msg.setSource(59622U);
    msg.setSourceEntity(205U);
    msg.setDestination(29733U);
    msg.setDestinationEntity(54U);
    msg.target.assign("TYXINXVLPGIIXGNTPUKBMDOFBGHUPROOSZXHQOVMYURYDOEELOPERJTIOKSJLAXHZWKQDBYZAZUHADIJXTDESAVUZMYAKDBTIKZFMGINSASZSCJDSTEAAZNWCKKGNDCGNBNPSEHGMBSRKJXDNVCL");
    msg.x = 0.19718505186533153;
    msg.y = 0.18356026537337766;
    msg.z = 0.8675482164077175;
    msg.n = 0.2111218459573878;
    msg.e = 0.6393328675995239;
    msg.d = 0.4692405343087104;
    msg.phi = 0.02143958235139487;
    msg.theta = 0.7591725540661298;
    msg.psi = 0.38781277395902347;
    msg.accuracy = 0.30746632543030694;

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
    msg.setTimeStamp(0.2743041929989968);
    msg.setSource(47362U);
    msg.setSourceEntity(6U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(232U);
    msg.target.assign("FSHXJQNEKMXSDXLPRHAZIROOJRNWHGNELTAWQYFQXYBNMQCPSEGHGZJDGBTZNNFWPSSGIRDREGTKMIQBMNMPOLVLTUBKMDJULJLHUWBEHNVTCLSYUPDCSZFTKYYEEGVAESXPXHKRTWWMVODPUKHYCPJTARSMKDFXKAFIDZBWYQYQWL");
    msg.x = 0.0861174848051619;
    msg.y = 0.4208176842988336;
    msg.z = 0.8774708311090457;
    msg.n = 0.6879807665981412;
    msg.e = 0.20155293702180566;
    msg.d = 0.6159503522243418;
    msg.phi = 0.12320869901403741;
    msg.theta = 0.3154624400396866;
    msg.psi = 0.700783501745119;
    msg.accuracy = 0.44490995152748414;

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
    msg.setTimeStamp(0.9813221493904887);
    msg.setSource(25369U);
    msg.setSourceEntity(192U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(235U);
    msg.target.assign("XZPIMKQLHWSIQXEUWTQKTYTTDPAHZMEZEYNZOIUUAVHPQBRRFJBPAKCFNDWSBABJCKDDAIOMWIMWYGNCJFANQMY");
    msg.lat = 0.5081734953507177;
    msg.lon = 0.6176241890310263;
    msg.z_units = 153U;
    msg.z = 0.23973066532651244;
    msg.accuracy = 0.4813929699172317;

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
    msg.setTimeStamp(0.4038048906631806);
    msg.setSource(24260U);
    msg.setSourceEntity(28U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(46U);
    msg.target.assign("ENDPMOJCQUXHOCGVKDTAUVODX");
    msg.lat = 0.40458748414119416;
    msg.lon = 0.4263542447317198;
    msg.z_units = 69U;
    msg.z = 0.057056807289211586;
    msg.accuracy = 0.3816522598305431;

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
    msg.setTimeStamp(0.799599780591607);
    msg.setSource(4605U);
    msg.setSourceEntity(176U);
    msg.setDestination(47808U);
    msg.setDestinationEntity(244U);
    msg.target.assign("SUTLBYGOOTSTHVXMWDBWZXYPMBXHEHEHQLJBGYNQRAHQAOMNYBEIAUFUGOZNULPGNFPROWQTLAENRIAMHKZWCFJVHJCWCQWMUFMGZRJLGIFRHADADWELGXCORGKEDCKZYTEPSPDUCPKRETWIZSLKFJHONGJFBOFSIJSWVNPREIMLDYXEZCXSAUMIFXJBPXMBNCYWNTZZTQPLVSPCKUDVVKSBIZRUAXJKVHVIDSKQLJVYYDFBOQNRQIXDY");
    msg.lat = 0.5181998022495018;
    msg.lon = 0.23267802315898756;
    msg.z_units = 138U;
    msg.z = 0.21625659769779482;
    msg.accuracy = 0.15341670141539698;

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
    msg.setTimeStamp(0.06262787913710077);
    msg.setSource(27667U);
    msg.setSourceEntity(83U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(101U);
    msg.name.assign("CVNKNCXVFRXQMCMHCJXUITSABQQJMZBY");
    msg.lat = 0.958322945911899;
    msg.lon = 0.8271577726761836;
    msg.z = 0.8793179367686071;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.5422980761160511);
    msg.setSource(19376U);
    msg.setSourceEntity(189U);
    msg.setDestination(52406U);
    msg.setDestinationEntity(111U);
    msg.name.assign("PAUFUMXWODFFTOASQBWPT");
    msg.lat = 0.2481028047811934;
    msg.lon = 0.048959717245978474;
    msg.z = 0.5091340791124788;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.6868080424685077);
    msg.setSource(33749U);
    msg.setSourceEntity(160U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(88U);
    msg.name.assign("YXDMCKUZUJACZMCQIVDCLYXUNEPNEPTKBYKI");
    msg.lat = 0.26697504116859594;
    msg.lon = 0.5375810152665786;
    msg.z = 0.8230676825532155;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.7185484052337824);
    msg.setSource(55008U);
    msg.setSourceEntity(218U);
    msg.setDestination(63778U);
    msg.setDestinationEntity(16U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.9320564951108042);
    msg.setSource(55578U);
    msg.setSourceEntity(231U);
    msg.setDestination(55571U);
    msg.setDestinationEntity(47U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.40367585304088205);
    msg.setSource(34484U);
    msg.setSourceEntity(217U);
    msg.setDestination(3314U);
    msg.setDestinationEntity(41U);
    msg.op = 252U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VQGSUMDMTPKFQXZEPTORIWXUVZIXWNJYYCFJKMUVVQJKSQRMUARKLPHSKY");
    tmp_msg_0.lat = 0.16060466064590828;
    tmp_msg_0.lon = 0.4664965411444857;
    tmp_msg_0.z = 0.1362154362955591;
    tmp_msg_0.z_units = 137U;
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
    msg.setTimeStamp(0.6471891603974687);
    msg.setSource(10371U);
    msg.setSourceEntity(48U);
    msg.setDestination(11676U);
    msg.setDestinationEntity(87U);
    msg.value = 0.7996651061759092;
    msg.type = 52U;

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
    msg.setTimeStamp(0.9495172830873455);
    msg.setSource(43317U);
    msg.setSourceEntity(236U);
    msg.setDestination(2977U);
    msg.setDestinationEntity(97U);
    msg.value = 0.4328146726830434;
    msg.type = 172U;

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
    msg.setTimeStamp(0.320941342300076);
    msg.setSource(56810U);
    msg.setSourceEntity(138U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(238U);
    msg.value = 0.4628574615942177;
    msg.type = 57U;

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
    msg.setTimeStamp(0.6309272016262916);
    msg.setSource(23227U);
    msg.setSourceEntity(143U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5312366188047015;

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
    msg.setTimeStamp(0.5711115805008322);
    msg.setSource(29758U);
    msg.setSourceEntity(98U);
    msg.setDestination(14775U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7970907962444568;

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
    msg.setTimeStamp(0.9303160982358187);
    msg.setSource(57791U);
    msg.setSourceEntity(221U);
    msg.setDestination(12478U);
    msg.setDestinationEntity(20U);
    msg.value = 0.06585687783570626;

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
    msg.setTimeStamp(0.5253774912243111);
    msg.setSource(3964U);
    msg.setSourceEntity(94U);
    msg.setDestination(10936U);
    msg.setDestinationEntity(10U);
    msg.timestamp_last_service = 0.8625252778767878;
    msg.time_next_service = 0.843131806312854;
    msg.time_motor_next_service = 0.7193081023459791;
    msg.time_idle_ground = 0.6663753448642811;
    msg.time_idle_air = 0.19319539982505662;
    msg.time_idle_water = 0.958579257114682;
    msg.time_idle_underwater = 0.8179957046062039;
    msg.time_idle_unknown = 0.0871839430025737;
    msg.time_motor_ground = 0.09221772708392628;
    msg.time_motor_air = 0.7653664513061361;
    msg.time_motor_water = 0.43462323816878523;
    msg.time_motor_underwater = 0.5860783251126915;
    msg.time_motor_unknown = 0.4863291582003886;
    msg.rpm_min = -11603;
    msg.rpm_max = 29589;
    msg.depth_max = 0.4057948313095704;

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
    msg.setTimeStamp(0.8019584222716865);
    msg.setSource(22164U);
    msg.setSourceEntity(233U);
    msg.setDestination(27286U);
    msg.setDestinationEntity(189U);
    msg.timestamp_last_service = 0.31959025407446373;
    msg.time_next_service = 0.9226451235143228;
    msg.time_motor_next_service = 0.4760463421969552;
    msg.time_idle_ground = 0.49369689356117186;
    msg.time_idle_air = 0.5804723789362713;
    msg.time_idle_water = 0.8845444284762568;
    msg.time_idle_underwater = 0.9996943626604237;
    msg.time_idle_unknown = 0.45372422772962073;
    msg.time_motor_ground = 0.05573237071857384;
    msg.time_motor_air = 0.23330786869898357;
    msg.time_motor_water = 0.9472776876778085;
    msg.time_motor_underwater = 0.0645187325443235;
    msg.time_motor_unknown = 0.22219052175522946;
    msg.rpm_min = 31689;
    msg.rpm_max = 19759;
    msg.depth_max = 0.9833050890289782;

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
    msg.setTimeStamp(0.9275099264952483);
    msg.setSource(23341U);
    msg.setSourceEntity(139U);
    msg.setDestination(36132U);
    msg.setDestinationEntity(16U);
    msg.timestamp_last_service = 0.14768859365931508;
    msg.time_next_service = 0.07507560987349238;
    msg.time_motor_next_service = 0.5980943593629191;
    msg.time_idle_ground = 0.6237844553671335;
    msg.time_idle_air = 0.3215341189278046;
    msg.time_idle_water = 0.16840176728292888;
    msg.time_idle_underwater = 0.3973262717850804;
    msg.time_idle_unknown = 0.38275608698506114;
    msg.time_motor_ground = 0.9788477087227504;
    msg.time_motor_air = 0.9221301187225331;
    msg.time_motor_water = 0.556580332923571;
    msg.time_motor_underwater = 0.0281503793217458;
    msg.time_motor_unknown = 0.48568809456673523;
    msg.rpm_min = -5676;
    msg.rpm_max = 14586;
    msg.depth_max = 0.13158781936827413;

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
    msg.setTimeStamp(0.1281561561917306);
    msg.setSource(10692U);
    msg.setSourceEntity(251U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(146U);
    msg.severity = 129U;
    msg.text.assign("XLYLEXNLPRMOTPRQMHQTEDTSFLVMSPNDWUGTEIOUOIBUZBZOZGVBNPJNJGOJXKSIKJNQXKOWFKZHRFHSRNCE");

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
    msg.setTimeStamp(0.17352960424453412);
    msg.setSource(38346U);
    msg.setSourceEntity(84U);
    msg.setDestination(61698U);
    msg.setDestinationEntity(208U);
    msg.severity = 151U;
    msg.text.assign("ANITRHSCSJYNJIKDOPITWHWPVWNOTRQFFWRPEQSLYMETOY");

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
    msg.setTimeStamp(0.16937306057435908);
    msg.setSource(12603U);
    msg.setSourceEntity(201U);
    msg.setDestination(4395U);
    msg.setDestinationEntity(191U);
    msg.severity = 140U;
    msg.text.assign("WWVKFWJFSKQJRQJISZEDUBEQNPCCICWYSYFTRCCJIZXHYAXXBEFPLMFZQMAVXOXRJMNGHPJXOCUWY");

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
    msg.setTimeStamp(0.005963335347900833);
    msg.setSource(30824U);
    msg.setSourceEntity(246U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(24U);
    msg.channel = -67;
    msg.value = 1073881243;
    msg.gain = 219U;

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
    msg.setTimeStamp(0.5550162398699183);
    msg.setSource(55795U);
    msg.setSourceEntity(113U);
    msg.setDestination(58467U);
    msg.setDestinationEntity(149U);
    msg.channel = 93;
    msg.value = -1680167334;
    msg.gain = 174U;

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
    msg.setTimeStamp(0.611052373830634);
    msg.setSource(28046U);
    msg.setSourceEntity(131U);
    msg.setDestination(21804U);
    msg.setDestinationEntity(116U);
    msg.channel = 23;
    msg.value = -1517987494;
    msg.gain = 192U;

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
    msg.setTimeStamp(0.008334347078772675);
    msg.setSource(37938U);
    msg.setSourceEntity(7U);
    msg.setDestination(15314U);
    msg.setDestinationEntity(178U);
    msg.ch01 = 0.9149632480193232;
    msg.ch02 = 0.2589313700180701;
    msg.ch03 = 0.13463501621764729;
    msg.ch04 = 0.008732429770135774;
    msg.ch05 = 0.33069784006980674;
    msg.ch06 = 0.8560105725331254;
    msg.ch07 = 0.38713022218064463;
    msg.ch08 = 0.5199523786089527;
    msg.ch09 = 0.2513481760901052;
    msg.ch10 = 0.7533759432993112;
    msg.ch11 = 0.845851885007115;
    msg.ch12 = 0.017578809460859768;
    msg.ch13 = 0.2158171448370131;
    msg.ch14 = 0.07125144546675777;
    msg.ch15 = 0.03773003401041364;
    msg.ch16 = 0.11092629498632511;

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
    msg.setTimeStamp(0.6541336640406239);
    msg.setSource(54748U);
    msg.setSourceEntity(228U);
    msg.setDestination(46018U);
    msg.setDestinationEntity(203U);
    msg.ch01 = 0.3264109804758645;
    msg.ch02 = 0.42644523780046484;
    msg.ch03 = 0.462718983608259;
    msg.ch04 = 0.37563792228407256;
    msg.ch05 = 0.9735368080658374;
    msg.ch06 = 0.8730131484534586;
    msg.ch07 = 0.8722123382346787;
    msg.ch08 = 0.2097152148196909;
    msg.ch09 = 0.20344808846831386;
    msg.ch10 = 0.6121535401644563;
    msg.ch11 = 0.5121321351065076;
    msg.ch12 = 0.11882820374341241;
    msg.ch13 = 0.5035403937121488;
    msg.ch14 = 0.30918265204464623;
    msg.ch15 = 0.3048618984248652;
    msg.ch16 = 0.29956032591244386;

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
    msg.setTimeStamp(0.670319043459041);
    msg.setSource(58067U);
    msg.setSourceEntity(82U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(244U);
    msg.ch01 = 0.795626101642227;
    msg.ch02 = 0.3798478278048122;
    msg.ch03 = 0.6962372538239148;
    msg.ch04 = 0.23135634049073206;
    msg.ch05 = 0.4437180592744451;
    msg.ch06 = 0.8167205474289029;
    msg.ch07 = 0.4043046434965799;
    msg.ch08 = 0.3727471825289349;
    msg.ch09 = 0.4439032336011971;
    msg.ch10 = 0.5419686319942324;
    msg.ch11 = 0.591674364271541;
    msg.ch12 = 0.9295141777548088;
    msg.ch13 = 0.8883950377679275;
    msg.ch14 = 0.051202519620541675;
    msg.ch15 = 0.6070775084725215;
    msg.ch16 = 0.7488042440558097;

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
    msg.setTimeStamp(0.05039149966866119);
    msg.setSource(42877U);
    msg.setSourceEntity(201U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(196U);
    msg.op = 187U;
    msg.lat = 0.24534250131450075;
    msg.lon = 0.285904526666114;
    msg.height = 0.39461094566795385;
    msg.depth = 0.9217319084566052;
    msg.alt = 0.27373996638815123;

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
    msg.setTimeStamp(0.37854748601995825);
    msg.setSource(6119U);
    msg.setSourceEntity(172U);
    msg.setDestination(62624U);
    msg.setDestinationEntity(212U);
    msg.op = 13U;
    msg.lat = 0.00891900889196362;
    msg.lon = 0.9678721432557655;
    msg.height = 0.2928638630501236;
    msg.depth = 0.6162641885250839;
    msg.alt = 0.15667059419090834;

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
    msg.setTimeStamp(0.43204170039604695);
    msg.setSource(20490U);
    msg.setSourceEntity(11U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(106U);
    msg.op = 220U;
    msg.lat = 0.5634258136147006;
    msg.lon = 0.5096041992664092;
    msg.height = 0.06788689551814919;
    msg.depth = 0.23922322015029773;
    msg.alt = 0.019568384518022675;

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
    msg.setTimeStamp(0.2592423998179195);
    msg.setSource(14695U);
    msg.setSourceEntity(154U);
    msg.setDestination(52072U);
    msg.setDestinationEntity(68U);
    msg.direction = 0.5758322430443243;
    msg.speed = 0.32985225036594534;
    msg.turbulence = 0.6836455084781731;

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
    msg.setTimeStamp(0.0440748228046145);
    msg.setSource(11431U);
    msg.setSourceEntity(68U);
    msg.setDestination(50082U);
    msg.setDestinationEntity(199U);
    msg.direction = 0.7854625090730446;
    msg.speed = 0.4452448526018422;
    msg.turbulence = 0.9833977072437139;

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
    msg.setTimeStamp(0.12797843407177056);
    msg.setSource(42155U);
    msg.setSourceEntity(10U);
    msg.setDestination(50932U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.5047502021933892;
    msg.speed = 0.909025537755331;
    msg.turbulence = 0.08716562653927562;

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
    msg.setTimeStamp(0.7157393966857455);
    msg.setSource(51016U);
    msg.setSourceEntity(134U);
    msg.setDestination(37100U);
    msg.setDestinationEntity(140U);
    msg.msg_type.assign("RYYQSSGVEYLGPTSHPHMDOGCBEOPLJNBKJWBIPUALWMMDQFFZNLFACKZCTNDCFQVQQJAMKOPBMDVAZCNBIULRSPUWWZKZMUTHHDOUZZQFDEZIIRNRJSVQAOWGTJXKXBQSASTUKOEXRDPILYKDVSGHZFMBGJANHXKERHRFWOXRVHB");
    msg.sensor_class.assign("MPQDZYYOPVWBOHAKPZGQXISTFAUDCYDQSXSUPQSKPIRRZTTLDDTVKLDCWFWFWMNZEFMBOURUCLKJNZKHIJBJEXOZIVBAKULGXGYLSXCWXAZJAXZYHDQMKPCVXLVTMMEOJGCHHNQTNYEHHBIVQANAXMM");
    msg.mmsi.assign("JKXXXYIFFJLQFNOXSDVNMSCKVIQGRXHUGZLGYKQRIIJERSCATORKGMSKSKBDQASKAZDRRRAOZHMPUDICIAHZUOHPYVUNXPPJBMWJWTFVILQDWEYEEWPANTFVJLNOHYDGNMGUOMHKYEAXEDVFWQFOTGLPGPYYWTVTCNLCZZQKHEIGBHWNQQFZCODEFSAWUFNRTWGRBDJSMBZLJZLAVUQAHTMJVLDUNIUEBCC");
    msg.callsign.assign("FZGZLKNUBYPZXNEOBCHHDNXWPZJVJFKVNZQBGJCZNIMAFSXXGECPIDCIWQOADRMRVCVZEFAMRSAWIJAYHKZOJQOZUEHZOJSLBGH");
    msg.name.assign("STPGRMFPAOQFHXPDIXSRQPQGOYEGGDBZEITRMIIKZNAXBZNPTFRJNMLCWOLSNYQTVCEAITQYVZYWBILVJOGYADXXXNRCTDSUVXJKIEHWUHNEGWJDLUFSHSSOFNBZDOQWHIPBGIJKCCUECMEABCMKLUMBAYCEYSQUDMPGXHQVKZD");
    msg.nav_status = 145U;
    msg.type_and_cargo = 157U;
    msg.lat = 0.5149763968676927;
    msg.lon = 0.9942134044736969;
    msg.course = 0.6037916129832863;
    msg.speed = 0.6121230382143171;
    msg.dist = 0.06552315704247436;
    msg.a = 0.4867611593742992;
    msg.b = 0.5720492471146349;
    msg.c = 0.75813763171701;
    msg.d = 0.6877517899814032;
    msg.draught = 0.8615699592500072;

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
    msg.setTimeStamp(0.5155762011395565);
    msg.setSource(43125U);
    msg.setSourceEntity(245U);
    msg.setDestination(60324U);
    msg.setDestinationEntity(72U);
    msg.msg_type.assign("TMKAPQCGCEFIHMPXMGWUVOBHFBPPYQMBOBAZDKPLNUQ");
    msg.sensor_class.assign("FWNQONHJMMDNGFRBUWAFOVAIPWWMMLHCCXMCLPPSLQEQDOQBJGNJMCURFHJRIDIZ");
    msg.mmsi.assign("VRYPBRKCULWQNOVSVHKXOKHUSAEWXQUDZZIOTONIEGNVOHAYCHASGOWFUXUELHF");
    msg.callsign.assign("HUOHHILSKLTINVAQKIZEZBQIJHDBTXTVKDNOCJTJRXVPRSUCSJNQXWLSSVRFDVPTADFIOEWQJMNWWYQRABYUMMXCBGAYKAICZNZWSBXTQACUAQIEPNAKZDKQBGEGSZGLDOODDGQXELXJGJWKZMTXGONDGIOKBPWKHFKXTNEFFLPXPMMRFHRUJTTCPLOZUOMEYHRALHFQVCGPRFFWCJYUVIWCRUVBDENYREMLA");
    msg.name.assign("RULGVKGNVQZPTJSWCADKRRBEJNTXONWAQYKRAWUUGLQMGYBVHZNSPJBKKAOGFVIKKLDEGZHFOZRYJFZJPFDVMMSSXVYIEVRBEAUYCYZESMGUJQOADHGCYFMYTBCNLUABWMJPFIWBBXPEZJYEKFLH");
    msg.nav_status = 154U;
    msg.type_and_cargo = 169U;
    msg.lat = 0.33839372264378664;
    msg.lon = 0.7849512871274881;
    msg.course = 0.8541647574318362;
    msg.speed = 0.6484181794097297;
    msg.dist = 0.3454630602378653;
    msg.a = 0.47255351856931826;
    msg.b = 0.12584866296645802;
    msg.c = 0.09906389464338361;
    msg.d = 0.12067196775287381;
    msg.draught = 0.6206642743430134;

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
    msg.setTimeStamp(0.7544546368295311);
    msg.setSource(14829U);
    msg.setSourceEntity(123U);
    msg.setDestination(5466U);
    msg.setDestinationEntity(129U);
    msg.msg_type.assign("XUHGYIMNHRNXYJEXKTHSIQWDYEXNMATSNTNWTWHEDLYRBTHRAJDMMZAQURUVRSTLOEBHWQPZYGLMCLKYXOJEFAVCIJLKLFCFDONLGBTARCIHOZSWVATJFMXIPKDQZBTPZCNYSAMKOYZRWNGZKZMJKAOLBRQNZOQBBVVRWEIPQDOVSMGGRHBBQDIMQEDYCXIPOQJFFFKKNXELCVSGIWPYUC");
    msg.sensor_class.assign("QLRIDMMRQUPHNEDXMOIGWLCEYQOAHKEHZNJORXNOTZYC");
    msg.mmsi.assign("INLFWHOSJFRMGTSXLIBHAODCCOVRSBXQUAVSPJUVYJNXKROHHWUUETLKXGUMGBHQSUATJMMLMZSVABEHFZTWZCMZIONEURYYBHSOPDLKDFPUBWFQXQKCUOVKJGIEZWXIYRKLXTDKKYD");
    msg.callsign.assign("QGZQCZLIHTBVJUJGPJZJIXKCL");
    msg.name.assign("DNQJSDEFSZYWWOXPYUHDBWPTKXKYMLSGYJDMNEIKBORCJEBIWGOWFNNXVALDOVUVJTIQUUIUZZIWUIBYABLMZWKUFKLCGVFNZFMQHNXQFCCVEYGMPFSWYVTSQFEYQCTLADLHGTGCJNNFRCRRHAUEMVNWERIPZGROHJBSACUJBBTNIMMROKSKCPOTSZPIHZUVPFQWQDSHPK");
    msg.nav_status = 96U;
    msg.type_and_cargo = 189U;
    msg.lat = 0.9997281056109293;
    msg.lon = 0.00991998547597217;
    msg.course = 0.7971198740056322;
    msg.speed = 0.057341138553923754;
    msg.dist = 0.5878582286190193;
    msg.a = 0.6630034459207406;
    msg.b = 0.9784740790129919;
    msg.c = 0.7166264920559019;
    msg.d = 0.09046477891688076;
    msg.draught = 0.40796453002902155;

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
    msg.setTimeStamp(0.605597362758081);
    msg.setSource(27353U);
    msg.setSourceEntity(152U);
    msg.setDestination(30560U);
    msg.setDestinationEntity(8U);
    msg.depth_at_loc.assign("FBWXDBWGSLNRWRZHXTSOIFTYEBSVBNCAIOZIUL");
    msg.danger.assign("RNOTGGQNRDMJBFLBBLGFKKMDIGNMTEZCHJMSIVNPSTOMRUTKQPRFQPMYEHWIZUBQDRCPHCCOYVAXYVNLTOGPSCTGYHI");

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
    msg.setTimeStamp(0.5082969332662542);
    msg.setSource(39108U);
    msg.setSourceEntity(48U);
    msg.setDestination(31333U);
    msg.setDestinationEntity(15U);
    msg.depth_at_loc.assign("VTWWBXESTSATBGZINQLRIJDJVFGABQBQJLEOUINSHEWNBUGTITTBMDO");
    msg.danger.assign("GTIFNLSVEFANPYKRHGBGSMFKVZNDMWOZHBOACEXPGEKIIZFVNEQSCNYIESBMWXHDEBJWRLQJFOXMRUMIBPNDBNUUSATNZGLHRELPCEPVASQHLFXFPHZZDQTUWPQXYSIPKLMCABLKKQRJIDSGAYVUAGMAUHQMSDIOTOKFWLTGWRWBJNHIRECQDDYLAVBGCKWIKYVBYRJGTOKRECYTCZOQMYOJSTAOJDDNLVPZ");

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
    msg.setTimeStamp(0.04540747872053519);
    msg.setSource(53139U);
    msg.setSourceEntity(56U);
    msg.setDestination(27863U);
    msg.setDestinationEntity(242U);
    msg.depth_at_loc.assign("TDFKRPMUVGKXPYBNYF");
    msg.danger.assign("QUJNCLFGMULFLAZXJLGBAZRXPKAJEBICFKTGFLWRHIMODPVUQMYIZOCOCOSZSMDKMTUWYIPGTVMJFCXITMTJKIZLISHKHBXGPRJZHLWDDPQSSEBXRVDHFGCWITNIYWMPLDHANUCKEGUZRRVJDAFXPOYUHNEXECNQ");

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
    msg.setTimeStamp(0.6015824267458921);
    msg.setSource(31599U);
    msg.setSourceEntity(149U);
    msg.setDestination(47333U);
    msg.setDestinationEntity(121U);
    msg.time = 0.40985246471691095;
    msg.x = 0.2732807210015662;
    msg.y = 0.6618949922241406;
    msg.z = 0.2570268378883508;

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
    msg.setTimeStamp(0.6307857181458022);
    msg.setSource(24955U);
    msg.setSourceEntity(216U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(90U);
    msg.time = 0.3747160689730975;
    msg.x = 0.41887190531472673;
    msg.y = 0.6231308250821925;
    msg.z = 0.3459255250226142;

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
    msg.setTimeStamp(0.707774226477821);
    msg.setSource(23909U);
    msg.setSourceEntity(197U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(118U);
    msg.time = 0.23891680201382193;
    msg.x = 0.24538868580416828;
    msg.y = 0.4201366589696123;
    msg.z = 0.24655315098474828;

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
    msg.setTimeStamp(0.5974601616817128);
    msg.setSource(53432U);
    msg.setSourceEntity(154U);
    msg.setDestination(15207U);
    msg.setDestinationEntity(97U);
    msg.nbeams = 25U;
    msg.ncells = 168U;
    msg.coord_sys = 118U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9103230492862611;
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
    msg.setTimeStamp(0.6001948359478021);
    msg.setSource(53531U);
    msg.setSourceEntity(201U);
    msg.setDestination(14985U);
    msg.setDestinationEntity(53U);
    msg.nbeams = 242U;
    msg.ncells = 31U;
    msg.coord_sys = 68U;

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
    msg.setTimeStamp(0.798779272217712);
    msg.setSource(9350U);
    msg.setSourceEntity(207U);
    msg.setDestination(39356U);
    msg.setDestinationEntity(40U);
    msg.nbeams = 89U;
    msg.ncells = 91U;
    msg.coord_sys = 224U;

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
    msg.setTimeStamp(0.36718572236356495);
    msg.setSource(41892U);
    msg.setSourceEntity(230U);
    msg.setDestination(12715U);
    msg.setDestinationEntity(48U);
    msg.cell_position = 0.02786289921334162;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.258952601156509;
    tmp_msg_0.amp = 0.30164844715920125;
    tmp_msg_0.cor = 19U;
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
    msg.setTimeStamp(0.9387968758237446);
    msg.setSource(31470U);
    msg.setSourceEntity(166U);
    msg.setDestination(39500U);
    msg.setDestinationEntity(76U);
    msg.cell_position = 0.33717134972899465;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.01815682647723993;
    tmp_msg_0.amp = 0.3848557228495283;
    tmp_msg_0.cor = 201U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8093584579250365);
    msg.setSource(40425U);
    msg.setSourceEntity(78U);
    msg.setDestination(310U);
    msg.setDestinationEntity(250U);
    msg.cell_position = 0.670914660792514;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6379656885504249;
    tmp_msg_0.amp = 0.5377908985444224;
    tmp_msg_0.cor = 85U;
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
    msg.setTimeStamp(0.8953123243160412);
    msg.setSource(22472U);
    msg.setSourceEntity(218U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(248U);
    msg.vel = 0.6149631127655618;
    msg.amp = 0.690416695142906;
    msg.cor = 161U;

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
    msg.setTimeStamp(0.285838230815998);
    msg.setSource(30016U);
    msg.setSourceEntity(87U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(14U);
    msg.vel = 0.04231832689258941;
    msg.amp = 0.2929279384535929;
    msg.cor = 32U;

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
    msg.setTimeStamp(0.3642090194438604);
    msg.setSource(30945U);
    msg.setSourceEntity(80U);
    msg.setDestination(11501U);
    msg.setDestinationEntity(229U);
    msg.vel = 0.22340626148758203;
    msg.amp = 0.10649052087362576;
    msg.cor = 205U;

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
    msg.setTimeStamp(0.45111773599902105);
    msg.setSource(36042U);
    msg.setSourceEntity(117U);
    msg.setDestination(34549U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7504380133084366;

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
    msg.setTimeStamp(0.1484813563340165);
    msg.setSource(58799U);
    msg.setSourceEntity(72U);
    msg.setDestination(53644U);
    msg.setDestinationEntity(78U);
    msg.value = 0.10734195225297039;

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
    msg.setTimeStamp(0.30027074344372806);
    msg.setSource(21029U);
    msg.setSourceEntity(60U);
    msg.setDestination(12943U);
    msg.setDestinationEntity(14U);
    msg.value = 0.12915823090336287;

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
    msg.setTimeStamp(0.8695635086256255);
    msg.setSource(12808U);
    msg.setSourceEntity(12U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(36U);
    msg.sig_wave_height_hm0 = 0.06314376569626301;
    msg.wave_peak_direction = 0.7822476876738196;
    msg.wave_peak_period = 0.9224828658399259;
    msg.wave_height_wind_hm0 = 0.09419111481251663;
    msg.wave_height_swell_hm0 = 0.2738778444630833;
    msg.wave_peak_period_wind = 0.7586085720167692;
    msg.wave_peak_period_swell = 0.26131720678677006;
    msg.wave_peak_direction_wind = 0.8674452286343074;
    msg.wave_peak_direction_swell = 0.3594978658593817;
    msg.wave_mean_direction = 0.7146898428336178;
    msg.wave_mean_period_tm02 = 0.4956203943083295;
    msg.wave_height_hmax = 0.07974994795115442;
    msg.wave_height_crest = 0.917072633650649;
    msg.wave_height_trough = 0.7087415196051977;
    msg.wave_period_tmax = 0.4627534160405474;
    msg.wave_period_tz = 0.2649928561043611;
    msg.significant_wave_height_h1_3 = 0.6121359458965643;
    msg.mean_spreading_angle = 0.9860808922945791;
    msg.first_order_spread = 0.08113847442378963;
    msg.long_crestedness_parameters = 0.0018907659377348507;
    msg.heading = 0.17297270740685855;
    msg.pitch = 0.9078576708266645;
    msg.roll = 0.9961829088007621;
    msg.external_heading = 0.42358190261426754;
    msg.stdev_heading = 0.5548115710872166;
    msg.stdev_pitch = 0.5221760026596538;
    msg.stdev_roll = 0.4303152184109009;

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
    msg.setTimeStamp(0.7350943907668619);
    msg.setSource(52927U);
    msg.setSourceEntity(218U);
    msg.setDestination(18187U);
    msg.setDestinationEntity(88U);
    msg.sig_wave_height_hm0 = 0.8268835862016706;
    msg.wave_peak_direction = 0.30207083440949956;
    msg.wave_peak_period = 0.7261100153776953;
    msg.wave_height_wind_hm0 = 0.940735009457567;
    msg.wave_height_swell_hm0 = 0.495452490285168;
    msg.wave_peak_period_wind = 0.5573565693359861;
    msg.wave_peak_period_swell = 0.6402140176680495;
    msg.wave_peak_direction_wind = 0.4090805003104586;
    msg.wave_peak_direction_swell = 0.3668329875529627;
    msg.wave_mean_direction = 0.5637911079443205;
    msg.wave_mean_period_tm02 = 0.6578059632093775;
    msg.wave_height_hmax = 0.04156730777357387;
    msg.wave_height_crest = 0.6479954772053758;
    msg.wave_height_trough = 0.6329377464909023;
    msg.wave_period_tmax = 0.10647482422605536;
    msg.wave_period_tz = 0.8899442855738027;
    msg.significant_wave_height_h1_3 = 0.18293495629206535;
    msg.mean_spreading_angle = 0.6546276228668974;
    msg.first_order_spread = 0.09215554190265984;
    msg.long_crestedness_parameters = 0.05320950430449334;
    msg.heading = 0.7397461761312378;
    msg.pitch = 0.5190322409109976;
    msg.roll = 0.9053070024122735;
    msg.external_heading = 0.29500213108441375;
    msg.stdev_heading = 0.08236295522083792;
    msg.stdev_pitch = 0.49678977949504166;
    msg.stdev_roll = 0.2712321079059712;

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
    msg.setTimeStamp(0.6734769883707952);
    msg.setSource(56309U);
    msg.setSourceEntity(214U);
    msg.setDestination(18094U);
    msg.setDestinationEntity(42U);
    msg.sig_wave_height_hm0 = 0.7569740297194079;
    msg.wave_peak_direction = 0.5480828526103617;
    msg.wave_peak_period = 0.37396813737968815;
    msg.wave_height_wind_hm0 = 0.6009333863870466;
    msg.wave_height_swell_hm0 = 0.34768066351519755;
    msg.wave_peak_period_wind = 0.39854922320500286;
    msg.wave_peak_period_swell = 0.8379004425367059;
    msg.wave_peak_direction_wind = 0.6400682798708063;
    msg.wave_peak_direction_swell = 0.6590637085930523;
    msg.wave_mean_direction = 0.9366414142870224;
    msg.wave_mean_period_tm02 = 0.0009078310198538109;
    msg.wave_height_hmax = 0.6030773283910161;
    msg.wave_height_crest = 0.37930981026727484;
    msg.wave_height_trough = 0.42025428193543335;
    msg.wave_period_tmax = 0.3313393286737035;
    msg.wave_period_tz = 0.5922719294510299;
    msg.significant_wave_height_h1_3 = 0.42118114623205194;
    msg.mean_spreading_angle = 0.40623678826296117;
    msg.first_order_spread = 0.415407604317204;
    msg.long_crestedness_parameters = 0.40761771448270445;
    msg.heading = 0.7127150445880108;
    msg.pitch = 0.6350373580156642;
    msg.roll = 0.8679275803128522;
    msg.external_heading = 0.16880271586186346;
    msg.stdev_heading = 0.06512422438448506;
    msg.stdev_pitch = 0.8513278976469063;
    msg.stdev_roll = 0.16026168709438193;

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
    msg.setTimeStamp(0.1213067907597597);
    msg.setSource(50881U);
    msg.setSourceEntity(109U);
    msg.setDestination(47282U);
    msg.setDestinationEntity(132U);
    msg.name.assign("VUJPYESGIHYPYAGMVGSHCMARFDIDAOEYLSITVDUNZUKRVWEIQPBUOAUGTQXCXHUVEKPGNOAZY");
    msg.value = 33U;

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
    msg.setTimeStamp(0.83604699510497);
    msg.setSource(24236U);
    msg.setSourceEntity(45U);
    msg.setDestination(55597U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MOASXQGJNDXKSSZHJAYTGPCIOCQVC");
    msg.value = 103U;

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
    msg.setTimeStamp(0.6936923817529757);
    msg.setSource(3407U);
    msg.setSourceEntity(82U);
    msg.setDestination(13520U);
    msg.setDestinationEntity(209U);
    msg.name.assign("SXKHGLJQWDJJKMMXCCZOYYKLQWDUOUIBZNFVOYMDLKZNAGUPJETWCZYRXAGOBFWMZFRUCXOWHPNTRNNOEFKZTOJLEWPPLIHFGFBOHGEPFHBZKZIDUPAQUEDWVOKBWNTLAUSGCEDYZDMBVJJHRGSLGJERDBRQCVXKTEIMKBSMBFYHSYMQRVPENXDTMNNKIQ");
    msg.value = 16U;

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
    msg.setTimeStamp(0.28796331013711174);
    msg.setSource(47213U);
    msg.setSourceEntity(206U);
    msg.setDestination(62674U);
    msg.setDestinationEntity(195U);
    msg.name.assign("GBDFWESLQMOJAACSBGYVHZKYRPISJNKLMQZWJYXBNPCNXHRULGWBLAUHMYJEVBFGXRGKVZETTQPIJMNU");

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
    msg.setTimeStamp(0.1349581442356672);
    msg.setSource(13282U);
    msg.setSourceEntity(213U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(103U);
    msg.name.assign("HWJTMWEKITGWGGWLHCXKZEFHTEQOEZXTWODJBVCZQOOFLXMUEQKYNFXWDCCGACHKBITLCLRKXIDQALZAVMK");

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
    msg.setTimeStamp(0.6332660680012566);
    msg.setSource(46634U);
    msg.setSourceEntity(71U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(225U);
    msg.name.assign("HVDCDRFCLCAONGDBOY");

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
    msg.setTimeStamp(0.27867222857908347);
    msg.setSource(60031U);
    msg.setSourceEntity(127U);
    msg.setDestination(21233U);
    msg.setDestinationEntity(185U);
    msg.name.assign("HYGEYUBTMTGARJXHPJPVVVHWQHDOLKCMYPQUIQFUAJKEDTMOVCLOYPFRZLMSDKSDYTTPNYTHVNHEPCTTZSNRUZIQISMZLQLJNIIRGNNZAWQQVVOXYCMLDANHRGCDRYKWEGLNCPDIKBWWTEXOUM");
    msg.value = 128U;

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
    msg.setTimeStamp(0.3928026299733298);
    msg.setSource(60172U);
    msg.setSourceEntity(245U);
    msg.setDestination(7563U);
    msg.setDestinationEntity(200U);
    msg.name.assign("OIXQUAYYJASDWRUZQYCWVTCKPDEOXCYTQKUQDEFMKVGGEPWSUVXCNVLCHBTXVKHSDOXGBLBZSCZWNTDIPYXFRGKZVRECENZFTJIHHPLGOXKRRHUNLLWQPHKHVGBZX");
    msg.value = 248U;

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
    msg.setTimeStamp(0.5988679277922564);
    msg.setSource(42425U);
    msg.setSourceEntity(88U);
    msg.setDestination(2765U);
    msg.setDestinationEntity(177U);
    msg.name.assign("OZYAPEJJGXDKAFVORBUGLEIYRBHNXZBOUHIITFMXJIARLVSJRIVLEBTLQWCJYHIELNRGRASMCMVLMIYRLUCSVDOZMOGFQZVYQWKKFZHGCNPQHTYTJVYVFEQTADKATSXHONWUCUWPSEMKPRDHPCOZQEBIBCIJXVXENCNADAOFGWOBAWTCNFSJQKQCSSQWRNLKDXJY");
    msg.value = 34U;

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
    msg.setTimeStamp(0.6082624601365122);
    msg.setSource(12917U);
    msg.setSourceEntity(46U);
    msg.setDestination(27170U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6417402357645238;

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
    msg.setTimeStamp(0.1462624936097331);
    msg.setSource(33104U);
    msg.setSourceEntity(120U);
    msg.setDestination(37704U);
    msg.setDestinationEntity(65U);
    msg.value = 0.9413143047282225;

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
    msg.setTimeStamp(0.15366008038117918);
    msg.setSource(33271U);
    msg.setSourceEntity(243U);
    msg.setDestination(62931U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9992747953200618;

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
    msg.setTimeStamp(0.4506077525479576);
    msg.setSource(61897U);
    msg.setSourceEntity(83U);
    msg.setDestination(48490U);
    msg.setDestinationEntity(95U);
    msg.value = 0.4854010424815486;

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
    msg.setTimeStamp(0.8116827349514472);
    msg.setSource(31977U);
    msg.setSourceEntity(227U);
    msg.setDestination(37741U);
    msg.setDestinationEntity(236U);
    msg.value = 0.839636314369434;

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
    msg.setTimeStamp(0.6185111134357322);
    msg.setSource(49976U);
    msg.setSourceEntity(158U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(70U);
    msg.value = 0.37035190465437595;

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
    msg.setTimeStamp(0.5625153963606537);
    msg.setSource(58450U);
    msg.setSourceEntity(182U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(92U);
    msg.value = 0.39433177221900295;

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
    msg.setTimeStamp(0.8549747904796065);
    msg.setSource(39616U);
    msg.setSourceEntity(207U);
    msg.setDestination(32097U);
    msg.setDestinationEntity(15U);
    msg.value = 0.45146358635825834;

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
    msg.setTimeStamp(0.7055734652427594);
    msg.setSource(1893U);
    msg.setSourceEntity(2U);
    msg.setDestination(40151U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6104251665714739;

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
    msg.setTimeStamp(0.8275924189921063);
    msg.setSource(30854U);
    msg.setSourceEntity(198U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(67U);
    msg.restriction = 192U;
    msg.reason.assign("SCEFPAZTGVIXYNGNVOGRTYQPUCYRQRWODUVDIFDLFTRMLKKENDHBGBBXMSALNWOCQYHFDVLATQQPRNBZCZBUEYHPIKJCESUWOBQTPQWIVLXZRKPEAPWIJNOZVNTHKCTDIMEASVAJWZDMDAQRTUGYKEFWJFLPKEIMHDVQUMJBMNTJKJPJDWFMNXAZGHYELGNSAGJUWLLOOZFCZHFFCBZVICESBXHOSWOSLJXRSOAUHHYXGUXMBY");

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
    msg.setTimeStamp(0.6308317503720546);
    msg.setSource(42132U);
    msg.setSourceEntity(83U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(185U);
    msg.restriction = 132U;
    msg.reason.assign("PZEPPQNIEIENGZPMFAENSZFMHZKIIHFLYXQWRBYVDMJJSIWGCMGTQLNISYWFFAMFHVGDRZBXSYPQJVYSGAUUTQXMKTECCXVMXAEUUTJUBAKRODKHWXMIBXWJOUCOARSLWSPQREXBRDKKTKSQPZRHBTJUMLBLHOJDVDOLNNVTEKYJALFWFAPQCJBWVDSLOC");

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
    msg.setTimeStamp(0.8509090478539977);
    msg.setSource(54882U);
    msg.setSourceEntity(3U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(15U);
    msg.restriction = 8U;
    msg.reason.assign("SAFJAAUKKQYIDPIEEVHZTGFTDGFBQVOTFOCNWDFFJBTXMEGXTKVEDZSKRQUCCHWJHGKRGNILBQQXIHICQSDPDSLJJRYTXZBWZDCZBOALQPDQVHXOKBMJJGNAWYADUZGCEHVNVWQNIPSIGPKESHXPMOLOIGYOJQKAUYVUALAKHLMIUEOYVJMYFENIORXVWGWMHLPNRPCSTEEKWBZMDRWCLVTBNFUTMPSU");

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
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.5607303103627297);
    msg.setSource(10126U);
    msg.setSourceEntity(249U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(18U);
    msg.op = 91U;
    msg.request_id = 308527138U;
    msg.entity_name.assign("HOIWEOSHQAULSXVUFMQUMNCCQEQYPBVLWINYPHNURDSHMCKDKFWLZMWSLNNEHQZDUHRSRWZMBYAADCGVQHBMKPIFGPKOIDIJLLJLRHQFOLMXQQGKAWREUPBVKUEOGGPJJKMAXTYVBRCSUISVITGZLTJUDLYUYNEOFESDTNSZEXDFGXQOIACTPRNBWCRVAHAGBOEZGFVTJWKJ");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NYEREHJIPNWBORQAMXZCLJXZWFRCZNIYEXNPPTWGWGLQGSDHYZFBDHVAVKRICLBJFDQKTGFHNYUDLJDWMKJIEWIIZQHVCMBAAUNSTYMFDGDRNGIVNJLSUOXNNTKQULRORBSBVC");
    tmp_msg_0.type = 17U;
    tmp_msg_0.default_value.assign("KPTQPDJMMLGBHLFTORFCCYOYSJAHTXVFVYMLBDRBEMAJVKHDLDZTASQXGSFYSEIZUWWBEXXHHEUENETQXLHBBJCUYWZTFKUXIHNSZX");
    tmp_msg_0.units.assign("APGAJDZXSUNKMQLDBBEKEJMLCIHPDWTQTQDPAYHQSLIMPYAVHWUYRZACXMPTVCJIELRRSBCOUFGGGDZVHCHYGGNGKEPXEFOBNCQSGBJCVTHIMOIUZONJMAEUVLXWTJW");
    tmp_msg_0.description.assign("ZKWLNKKQOHKBIMKYZLCLSFGXUUVLEZMDKOGQDI");
    tmp_msg_0.values_list.assign("ZLDOYIVFCXUHUUPAFGRGZWKKIBBXYQHEJAETGAGLJJYMEHEQTUDTKAQSLAETDYDCLNWCZSTJXVYQCOLOMWMUZWUBGPVIWTCOMIFMFSZTFOPSNVWYSMSFRXBJZCXYVRHRCZXAKVPQBSGPPESJNXSGHKANGLAVTLZWJYODOUIPMPSHMEHOFPWQCUDOVNDKRYDLJECBMQKWLHRQIBZLQYFURWERVDRBTACMBI");
    tmp_msg_0.min_value = 0.6430132201277559;
    tmp_msg_0.max_value = 0.6727732477642945;
    tmp_msg_0.list_min_size = 226U;
    tmp_msg_0.list_max_size = 165U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("JXKXAHWWVFTUVRIBLJMMIFNUZSGNHLJSBYONTTPMQO");
    tmp_tmp_msg_0_0.value.assign("ZUAGETNOZUACFXXBKSEWDHPAHFREOIOZRYYYHQXOIUWAXEPTBJSHYJNBAXCANTBIWFKDGRNCSKTCSEVQHTDMMLHJCVPPGULWIQVGKUVGWCODLMBC");
    tmp_tmp_msg_0_0.values_list.assign("VLSFLPGOAHATANKJKEMEVPUKQWFDJRGORYMTOWEHLPVHWDBPAVROVLUAWIRBIDOVLBMMCSYBFRCQYUWLVDZAXHIYNQZTQDXKAAWKSGKGCMZSTXPTEPNWUIBICYMBNJOMIIFLKDDVBUCREJFNWLYMTCXRHUFNAEOWSTQNNJPJGHRXMZSCAREGYBJJBEDGNHYLZTFGSPOEKWXUOIDCOPTFRCXFQZQDUJNLUVBEQVZSMIXXGPYZ");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 104U;
    tmp_msg_0.scope = 169U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.6108140940910138);
    msg.setSource(47259U);
    msg.setSourceEntity(208U);
    msg.setDestination(24392U);
    msg.setDestinationEntity(1U);
    msg.op = 55U;
    msg.request_id = 2185152038U;
    msg.entity_name.assign("VMZWMZUMEWISBNTXQAFHXRYUBAUSWHAAVTDGNLFOMROVEDYOGLCIDZCEJKTSBYRZZXRHLGKRQFNKVVWFCGFERZWPSZLKTTPTMOIJMJDKNFEHQZEBUMKIQQNFQGUAPBUTPHRDQOKYPJXDOVULWCLGDHPKZQWMKCIEEFJNJWDPPARJHNFNXHPYXSCGVASAPBJCBAQIMVNGSBSIRHUUGYXCLEYJXBYYOOOIWIJNSDLDCVELALTIRVQYCZTUKOBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.08856248136075096);
    msg.setSource(44137U);
    msg.setSourceEntity(79U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(9U);
    msg.op = 213U;
    msg.request_id = 2759090548U;
    msg.entity_name.assign("JZVEDQKYCSKILLTFCKXOMFBQAFBSAMJUYRIBGYWVTKHMGLYUBSNKDVXXVDPUFNNGIMYKRLPYNXH");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MTZSUMNKWUXPXBJTUUUYNLOFAACEIMQSMZLFFCSGCIGKZLLGHNCIHXPKQBWSJFPHVWOJPQOZNVKWUWPXRZEFYRLDODYSTFXWNUHHJEZBGVYJSHJBMGWRYVCDIZDQRDMKWJVODGOFEQKRRVPXQTCIPUAYRXTDGAOGEAHKILGBJIXSUAD");
    tmp_msg_0.type = 154U;
    tmp_msg_0.default_value.assign("RTJZOOTOOIZMVLTWHZJALFVGXKZHCJWHFMUVSLGTKBUFUDOOEAHOAFNRBESMWLTKAJCQLQZBESZEPVVWRKAWSEHTNDSGPMUCYRPNMGYYYVIUXTCUZZSNMDMGKEDJQVHYVBPAZYNPQMDGLJFNXWCYXKQQJRKMUFDOFKDRIXJNSURTYWADBUJSMHIIVRYCTUZLGJLXBVCRPIOSBFXDBGGEAYQQKRXDPNWLSEBIIPLXFAWHXP");
    tmp_msg_0.units.assign("DCLXYBIJEWTVOZDCGPKEDURRGFHMQIDFSMSARBPOXUWRUPRUJNSCQAQHPTMPEGQJHAWKRBDAACAYLEXBPVKBDPMFEYLLWMVTSCXZNIBTZNMTKZYGKNTCZQESKAYETWIGSLSLVVLJUXNXHJSGYXOLIOYCOOIJNYJUUGTOZX");
    tmp_msg_0.description.assign("TJTQRIZHMSKOUWPCSCCAYVJPEICUSPDNWMJENALECNDTJDYYRLCZXMUJYODHJBQMNGQWARZGRRAADFIVWFATFPKVOXVFMLTGVENWWKJPKXPJEALCVTIZMOLRZMKNHPKDZCJQSJRIYZEZXXYRBIYNIOWQGLSLVAEENSGOIXQOKVUQHUKLDPBFWETFBSQZZPBXGVUDBPA");
    tmp_msg_0.values_list.assign("DKTEEHYJATBBQSEYJSCBWPKRWNPRAGHTSKLNRMGYQYBAIOHPVPUIFJMKMZSADAALLEOZUMTKCXDHXFTFNALYVNHGQWOAHBSLQBAJWAMFEQFFGRNTZMCVYC");
    tmp_msg_0.min_value = 0.8366471805722956;
    tmp_msg_0.max_value = 0.12091317021564707;
    tmp_msg_0.list_min_size = 209U;
    tmp_msg_0.list_max_size = 76U;
    tmp_msg_0.visibility = 220U;
    tmp_msg_0.scope = 251U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.909887006149897);
    msg.setSource(24917U);
    msg.setSourceEntity(233U);
    msg.setDestination(31837U);
    msg.setDestinationEntity(82U);
    msg.name.assign("BPHIRIWFEHLXDQPEHOIIYHJFIHKBPNIKEKVBOPWJUDNOFFGAGCHRXEWFGVGZDUVX");
    msg.type = 96U;
    msg.default_value.assign("PQKLDCLBAXBZTOVBYWUOQATHVGDPOITMUCEIDOMRAXWXGQJFNXCVFRVKYFTYNJWMRSDMPRAWBSHLRXSFNDUIFARJTBUJDFTCWEFUJBPSHPMHMPEFGLZBFIRETQWBQLZCQVQGWSLZDIYMVRYKKPYLMWDACAUVSEHMHROEKIBGZRSXBENOOOMIICQSJYXEIVJLPGNHYQLAZKKPGDNKSFGNJEHHXUVNCZTZTKDZGJCGOSZNLUEIXW");
    msg.units.assign("MGUWLXXPCXGJGOVUSOCSDGVLKWMGNTZGMVSRNHVRNYUCRPBJGHJBGMRUAIBZLQLNOSBHKNTZFOXEMCCMRHWYYYZNELKRIVFKHGWWMPFACZOCKHDKWJTAJEAKALVDIEXZQIWDHEWDP");
    msg.description.assign("FLUQCGYKTZVELARCRXS");
    msg.values_list.assign("ZGOFNPVJHVMQGYRLAPZFCFAMHEONFEPXQURHKHXWDAYYHCAXARLFNJYTQZLOKQQEJIWKCLBYCFDCAKLDPTBXDNNSFEGFGOELLDORRBIKOQTNUCRQISCMIAKIXTSUJUMAPSQGAALITXDKJSUUZSJVSTYWYUHVGMLTGECFBOWUBBIRUJZPBEGZRHXDWXPEXYKNFWBSKEPCKOVL");
    msg.min_value = 0.7650344844964377;
    msg.max_value = 0.7187462464450733;
    msg.list_min_size = 66U;
    msg.list_max_size = 67U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("ZDWXACRJICWHVQUCAQEZNLUYFZPMZXVOWKGTUPPWGOYEZIIQFOLTJKVLRZIIMZHMJAFNIOKRTKTHVY");
    tmp_msg_0.value.assign("RTVSKFVVKELVJKQHLSAYJTRNDJHCFAUQFVCGHBCLWENXYSKDQUSZBQIWHIIGPMZKLZFCUBUZOAJOSBKNHDDUNYRMMIOUPYLURJCGRIQAYTQXFLXNDGSCRVGJIYIXLCPHDKAXIJFWMHLWOBQYPNFWZDZPGLPSHBOMEVCEUKKBQQAXMDETAZWTXERAWEAPMUTRSOWCWGQEGWTNYZMTPOZVGHFCNFIXYRBBTSULERJOHNZODVDTY");
    tmp_msg_0.values_list.assign("UWEUXPVRIUFBVEMUGFMHOLXHLSZNSZGMJCQJHEROVFIHWVCTJTXMPGCWYZWBZLOQ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 110U;
    msg.scope = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.5891425775612822);
    msg.setSource(12086U);
    msg.setSourceEntity(140U);
    msg.setDestination(22723U);
    msg.setDestinationEntity(89U);
    msg.name.assign("CHIGNRCCLSQIGQNEASHUCPYCHETWOLJJYDPNTNVMBPVPCAGYWQBBRZFKWAZCSASNMNMJEOTKNXRFBQBDZEYXRCBQAURRSOGFGXDHLUIKMLSVKIGTSKRTWMNDEUKTDUYVKECFRTWIVYRYWAYCLOGLNUOBIDPPHLZMOPXEHSZJQUFBMFUTQDASDGPJIYFZQJHPHWOZSZJ");
    msg.type = 189U;
    msg.default_value.assign("OWXLGSRVBEYYXDSBNHPKCXYHUEUNBHJLFAIRVPDRYAYKUDFSYIKTNVHSINQPLZZETCBIVFQITLXJXNKNWGEMBSWOKQUDBGCROHKDUETMWZYIBLCAGGTICSWETZSFLWCMMAVGWXFBYZLJRDPIVLTNDZNAQFGZQFAQURUECMRHTOGYEOC");
    msg.units.assign("RFHBUEUCFJHPJEFCTHICMCIYLIMUYKDGZPIAEMPNSUDFGTWAEODRNPLTNGAZSYMBTLYNIZHQGRCBKTKBQJMVDZVDMVYWRXXUGVWADWKTAWAOUKQTYBIQQFKSSAXRJNRIUNQGZHXSJZBZAJGFYVSIXPWKLOEMUPTFFWVHLKXPCWQVYDBMRELQKKRCVNZUBWEPFELQGBVTIQCTJHNAHVZCXMSHCXELGLSXDRYJOWGNRJZOOMYFUHPLJIOPDSEOOO");
    msg.description.assign("LCFILSBJYRJDAGYKGASSGRMWPXGFQPTAHSPYGXAWCSKIPNPJNZKZNONNVUBWPRAUOILAFFHCPHIJVMEDCBWTYVUOCKDUXAMKQGEEHPMRVBVDLRMHYKSLLZCHVXVQJERHQTZNMTOLOEGVUIQQJIYZKTTTOGQFDWISCGWZXLFPDWHYBDIJVWFHZMRTQKXZIUUEBMODFAXYNSDNROAVCUBRZTCLQ");
    msg.values_list.assign("OHEJXPUVASFQTIRFFGBPYUBFGLNOAPDYMESTAHNVLPSCWJNYZIJCWMIKMNEHODQNEXQZDZGUFPDSPRWGOYLPKOBPSTCKWWZNLZLDFUNYBKMRJCAQVVSQGXYDCKLFLWQKNXCMVYQQVKRSNBIDSVOFLIZAMGJKEDXHYBRTBVIMUYKALMEVZIUXRJBJDAJUHYZHATCNWTTBPHVPLRCEZMOGTURCHERJMURAUQCOAGHXTGZJOSWSDFHXXWIQEEXWF");
    msg.min_value = 0.7696487353774378;
    msg.max_value = 0.01294021593505501;
    msg.list_min_size = 154U;
    msg.list_max_size = 145U;
    msg.visibility = 169U;
    msg.scope = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.06068751016828389);
    msg.setSource(22890U);
    msg.setSourceEntity(188U);
    msg.setDestination(56487U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GDBASNXURXGJMQYMAHHKPWTASHPZNQNAOOXRCCTDFKTVIWUUGTHFMYFBQUAGLNCG");
    msg.type = 4U;
    msg.default_value.assign("NOAQCQGHGXZHXTVJXHFECFDXDLDSIMROEJFMIYPSHRWEKCUYEDAGGEGIKVUQSNBRBDJDKBJMNULTPWWVIBEGKVFNQPQPIVIJMALNLLAOAXPXRNVFEPYBKUVKBIFXNKUSBSHRXV");
    msg.units.assign("CFZQHQANDZSHLNXRXZEKYVR");
    msg.description.assign("NEAHXSQIYBRKCTOZTVPARUISNB");
    msg.values_list.assign("DZFAUUTYRUDVUOPKCYCWBCRBMLNJXLABWRRURKMXIROJGQBPHETQLKSBNJGAELZQFQQTADHXOIYTZDUPPWXGZRPOFFDGOROWEAHLSUFJLEERIUOSJICJCOXIZSPIZSKTPLPOKJSXQHFMYQBQBTHVMKBKYWYIEYNMZAKEHQAXYZADUHIQKTPCFDMDVBTWODGYVNEGMNWNAMHPVXU");
    msg.min_value = 0.1348130631525568;
    msg.max_value = 0.530623094713459;
    msg.list_min_size = 4U;
    msg.list_max_size = 43U;
    msg.visibility = 110U;
    msg.scope = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.5563336420455924);
    msg.setSource(14862U);
    msg.setSourceEntity(146U);
    msg.setDestination(58768U);
    msg.setDestinationEntity(208U);
    msg.param.assign("QOBRSEETZMOQKBUPZANPRKVQFGYDUNP");
    msg.value.assign("GSUFTMGEPSVWRHNLPKXSLLXANXDBDIFMAVMROZBSNTEYASFIZKOJGJCBJZFJOCEODLCXSSOHOQATATPXNJQRZUQVPHLEPIDRYGBVHEONSLANFJLKYNSRYHYUUTFWHLWBWBQRXUUOBMWDWVJLVPYBMTIDVBXZ");
    msg.values_list.assign("UWFCAWZREBUOBUADRHYTDLJMVPMDLHUFWZHNOMSRCCLDTVSWNCJWFPPVZCKXOPEXGNYGSTPLHAQRXCYCKAYSZBSOYHXDDBGPBTEEEJMKQXJXSHISZVNCOTBQTBANPRLJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.7457100382030334);
    msg.setSource(11675U);
    msg.setSourceEntity(111U);
    msg.setDestination(10052U);
    msg.setDestinationEntity(27U);
    msg.param.assign("AOFYUHADKSRRZRYHUWEGWLTYZFYRFIRWGSLLXKEKZQOGVVPQDMIZDEKJGIBABSQHDNMOQDBCYFIVHYJOIZTABBSBWMGPEOCHPHIKPKILHTZOQMGCZFMQFDIQXZEGUNTUFTBRKBPQTYFNOTXASFLMPEMQJJXEBLXFEOKJDKTAVSWUDTXNGKRQNOHJWSNARVSCJDPLBPMMNUVHWURVYINWUUT");
    msg.value.assign("GMBMXLOIDDKMYLXUSUNF");
    msg.values_list.assign("UEAERYHVQIHGZDIIONLMJGCBKAIJDGOBCAWPYKNPTRDPXQRWHZNZRQMFOXAFSXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.6526721559907412);
    msg.setSource(56404U);
    msg.setSourceEntity(68U);
    msg.setDestination(9456U);
    msg.setDestinationEntity(145U);
    msg.param.assign("ICMGBSFYGKKLOJQQUBKSXZUCWSANDJMEHGCLYBJOYCUBLWXRKSROCMCJBUQBXFHLVIGWAMNFFKGNLQRABPJAROQEELEYPHADITNTDYNQYFXUAWHZLYGNRTSIMFDPHVTIXMTOXVZTDZNVSQTRPZVLBAUBHZKCDVEZI");
    msg.value.assign("KQHKFVSMEQNHTKVQYNSCJREJUZCPJMELWZVRDHVDBMLAMXUFVYZDPWGOKJANFLUZTCDHOLOQFIWINAIHDBSBUNIMYBKVFSPSUXMGODNBARPITBLLXRBHQNQZOGEKERGDICORXPAEOCJYEFHRGWSXDQT");
    msg.values_list.assign("HATWBVUBJVMMWFXPWWZNCQMRQRMRJEJNNYSLOLCLEDVNQJXBOODNGGZYBIDHZKBFWZJXEYJSCHPUMUTJPSRAZPIKKTQQFUOPRLOSXAMGZHOOBCAFKIJHHVDTSDPUPCFPCWLQANKNQEXIGTGOZSIXXHLVYGDEVQCSBRKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
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
    msg.setTimeStamp(0.16741884756510483);
    msg.setSource(52241U);
    msg.setSourceEntity(83U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(243U);
    msg.op = 155U;
    msg.version.assign("ANGSOYKZWEDAZYHKCCTEGKATQKPDVHMNFOCZZLMSFEZRTSFIMPOHNJXRXRQBHFEJFUTODUBYSHAQJFPSLWVQQREKEUGMXPZLZYVMVXPTHCXUMUIGBXPWAPXDDVEKOFAIOLPGEJFJTCPVJJANRXELOTXMN");
    msg.description.assign("ALZJQGNDFNYXPIIWMUFNFDKWRCXUISUEKJCPZGTXERTKMXJRUATOPIGJWJVVDKQABERQQLPABOGKANRWJDFIFNOERXISATBNWRMYWUHQXLCZDMUNTXICLLDRHSIXZPRHYGSDMBYUNFPKGAPTHSUDVVFWATLEUTJOIOEHOLGMHMESEFKXEJAFSDJSQBVCBOOPKZVXCJQVABTOFTWYVWCZZSMQHZYQHKMZILCBSOMKNYUEZWNVPVBP");

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
    msg.setTimeStamp(0.34448872884947557);
    msg.setSource(50580U);
    msg.setSourceEntity(186U);
    msg.setDestination(53683U);
    msg.setDestinationEntity(220U);
    msg.op = 230U;
    msg.version.assign("NXIYGNXQCNBUTMROAGFCVXAEYDTVBBGKTUFEIDMQLVYBASHJCMDZZWIRYUGXLLWEWRNDUDMZEOVIDHGTHRNXJHMIEWIFUXYBBKXKMONGLPQGLCMIZACUAMJHFFKTJERZIVRZEFD");
    msg.description.assign("OYEYFQHYXOKXCTQXTVJEKCJGPPIODJXMDDZURSFSKWYZXLQCNIWBQTVTLNQUOPKNCKEMJSBNQECZBYVVLRBIPSATHDLSRVVJNMFJZVPUEWINVBODFDNKRHMSNYTZOERNLUPIKKXIDTGXACDROAHXAHGWMYOEJEAGLLYTPVRMKWAIBUFAQMHJZGASFCVIQFAWGUGLSGECZOAZFWSMIUPGUBDT");

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
    msg.setTimeStamp(0.4995080450495686);
    msg.setSource(36179U);
    msg.setSourceEntity(21U);
    msg.setDestination(18846U);
    msg.setDestinationEntity(182U);
    msg.op = 63U;
    msg.version.assign("REMBCJOTZZQATAQYBLKLFUIMVITQPLOEVMDDGDZWKCDOHUSOAG");
    msg.description.assign("LXUOVTMVAFGJJNTLGUYSVWDNJHRRSWUMWKCAFJLW");

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
    msg.setTimeStamp(0.6771954234604012);
    msg.setSource(3818U);
    msg.setSourceEntity(74U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6584842876620489;

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
    msg.setTimeStamp(0.2695338729528529);
    msg.setSource(53400U);
    msg.setSourceEntity(98U);
    msg.setDestination(30453U);
    msg.setDestinationEntity(253U);
    msg.value = 0.6993565286523514;

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
    msg.setTimeStamp(0.10667581169966178);
    msg.setSource(47345U);
    msg.setSourceEntity(189U);
    msg.setDestination(24912U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7645467745540393;

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
