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
// IMC XML MD5: 52e8ed7dae56165e5cb85d3a1111bdfd                            *
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
    msg.setTimeStamp(0.0132025245511);
    msg.setSource(29990U);
    msg.setSourceEntity(85U);
    msg.setDestination(59477U);
    msg.setDestinationEntity(8U);
    msg.state = 70U;
    msg.flags = 91U;
    msg.description.assign("QRFNIQJEDTOMGCYONVKHSPOLKEOCVQWHIPOFHZKTHBZIYQVWXIEJWZWSMMYUWRGBAKDTTQJRGJKNEIMCPZXOOMNNXQCZEZGSVPMSVAMVTHUNRQQGSMBYUELCOHCDTREWDYCVGIUACKQLGUZJJFILUVWFDDELWDGSFSLCNIGFIYXCKYDBRXBYELZWPHXOADBYRAANBSSMJJRNVUXZUAXNZTFRWFHJEBAOTJIHTSHLTQKKAAPPRYU");

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
    msg.setTimeStamp(0.727047934364);
    msg.setSource(26075U);
    msg.setSourceEntity(194U);
    msg.setDestination(26370U);
    msg.setDestinationEntity(111U);
    msg.state = 80U;
    msg.flags = 70U;
    msg.description.assign("LRBMRLXVKFHKEYLAFRXULDUBBPO");

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
    msg.setTimeStamp(0.714087910006);
    msg.setSource(258U);
    msg.setSourceEntity(162U);
    msg.setDestination(32841U);
    msg.setDestinationEntity(133U);
    msg.state = 144U;
    msg.flags = 181U;
    msg.description.assign("PRHRKXMOAZDCTZBPMDXOKFRJLCQVXLGUPCBPJUXDZWVVNKWCFGZQEQAWBVDALMHWSUGPTANVLYIMDNOYRVZOLGY");

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
    msg.setTimeStamp(0.821611652618);
    msg.setSource(7842U);
    msg.setSourceEntity(14U);
    msg.setDestination(13577U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.065159963093);
    msg.setSource(46556U);
    msg.setSourceEntity(146U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.328912412814);
    msg.setSource(11752U);
    msg.setSourceEntity(33U);
    msg.setDestination(26336U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.124287640393);
    msg.setSource(17873U);
    msg.setSourceEntity(219U);
    msg.setDestination(16943U);
    msg.setDestinationEntity(132U);
    msg.id = 206U;
    msg.label.assign("IHWRAKWXRMGQIPUVNRZTYVNDOSRFWXUARWYRFYAYBKCAQUCJPPXPOPOKHXDSGRUAJMQVJVEOXNKWMDNMHWIBKZVUAZCOQALYJYSNEQDXVDHTCHGIFZCOLELPYPNNCDMGZEWAMWTLUIKCEBJDHKNJGCKSNGSZPVJRQUBTDYABQUOLKAZ");
    msg.component.assign("TKVDOWHZNWPEMSXRWIZSXIUXJAROUJGJLPEVACQRGRHYEMOZKEJICTGFYMPUTQEZJSOMXZWCBBFADDFDFDPHKJMOCNIURD");
    msg.act_time = 48788U;
    msg.deact_time = 29289U;

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
    msg.setTimeStamp(0.944337974653);
    msg.setSource(48683U);
    msg.setSourceEntity(67U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(79U);
    msg.id = 127U;
    msg.label.assign("BDEAMOINTJRGTFNUVSBHBMNIHEQCGAED");
    msg.component.assign("JWTNAIFLBGEHBLCREWVPJYKBHFXQFNATEYGZQMAJHOWBGPHTUUVUZBZORXFDYDRYNMNSXMQWOGHBRMRVVZEPNLGIYIPWUZKRWPYHSUANESXCBUEQQCJFBHD");
    msg.act_time = 28522U;
    msg.deact_time = 9893U;

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
    msg.setTimeStamp(0.342524633234);
    msg.setSource(24581U);
    msg.setSourceEntity(9U);
    msg.setDestination(4066U);
    msg.setDestinationEntity(17U);
    msg.id = 104U;
    msg.label.assign("IWRYXGALVIKMMMAOIKTNVHDLXXMSVGPHMU");
    msg.component.assign("BHNZLOCTPYBBZVGDKEKNMSFPJCULHTRCKSYWAHNKEFSSQHZEARLSYNJGEQRMAACQMSEMYASDBPGLXNRMIYBFOOROVOVGBBEMFCUIIPGGEURVPVDQJJ");
    msg.act_time = 5288U;
    msg.deact_time = 13135U;

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
    msg.setTimeStamp(0.0609514258974);
    msg.setSource(19407U);
    msg.setSourceEntity(73U);
    msg.setDestination(45901U);
    msg.setDestinationEntity(15U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.302903174838);
    msg.setSource(11264U);
    msg.setSourceEntity(96U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(56U);
    msg.id = 135U;

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
    msg.setTimeStamp(0.618670198901);
    msg.setSource(31918U);
    msg.setSourceEntity(153U);
    msg.setDestination(47655U);
    msg.setDestinationEntity(79U);
    msg.id = 15U;

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
    msg.setTimeStamp(0.707241286659);
    msg.setSource(31319U);
    msg.setSourceEntity(167U);
    msg.setDestination(20541U);
    msg.setDestinationEntity(106U);
    msg.op = 215U;
    msg.list.assign("LUXTDTJZBOUWZNMVUNMUXCFJUARQPGWTDKRZYLPSMYROQHHLH");

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
    msg.setTimeStamp(0.928426331449);
    msg.setSource(49524U);
    msg.setSourceEntity(149U);
    msg.setDestination(40011U);
    msg.setDestinationEntity(100U);
    msg.op = 241U;
    msg.list.assign("WXHHPKJPBXCWOVRHBYKIYVPKLVMWQNYLGGPBXAIAMCCYWNDMBLLMRXNVQ");

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
    msg.setTimeStamp(0.823270842308);
    msg.setSource(59265U);
    msg.setSourceEntity(37U);
    msg.setDestination(944U);
    msg.setDestinationEntity(226U);
    msg.op = 181U;
    msg.list.assign("JKYPGPLRVMFSHAEQDQWIKNVLVGVQQMYREZOXWFXWSCITDSNJP");

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
    msg.setTimeStamp(0.402096390943);
    msg.setSource(49587U);
    msg.setSourceEntity(96U);
    msg.setDestination(50107U);
    msg.setDestinationEntity(117U);
    msg.value = 244U;

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
    msg.setTimeStamp(0.00440614467432);
    msg.setSource(24480U);
    msg.setSourceEntity(233U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(75U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.0712114431968);
    msg.setSource(39350U);
    msg.setSourceEntity(69U);
    msg.setDestination(3279U);
    msg.setDestinationEntity(123U);
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
    msg.setTimeStamp(0.968331872523);
    msg.setSource(8776U);
    msg.setSourceEntity(167U);
    msg.setDestination(4876U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("EABFKLYDDRQUFAWNIMVRCPGUJNPGUTZNIGWCKILAHQRPSTWDDNFEPTDJOI");
    msg.message_id = 53221U;

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
    msg.setTimeStamp(0.648617069779);
    msg.setSource(14038U);
    msg.setSourceEntity(213U);
    msg.setDestination(17290U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("BWKXTMGCNVOFVCGBEZHTPMAFHHCTGRUUNSDVJBXWIWQXROZZKLOZTXAAZGYDEVSYNXVESFMBTPEXHQYIUKAJDJYNWJZXBQTQRWHYEGIDLVCHDKNLJJSNUIWGQPOXJGNFROPUAZSEWUIKPPORQDUCRTMJCYEOKLPIUVLLFGHSADTSTTMNLRYMAPKKXCSGHOBHAFJCWPIBBLVIZQQAEUCDVMXDIMF");
    msg.message_id = 38706U;

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
    msg.setTimeStamp(0.788653682822);
    msg.setSource(4998U);
    msg.setSourceEntity(13U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("EWIYOHQWHDGXJILGPDBZMVLWTXDVQUOYBYTOQLYAJILXWUFZWAYPTMERJJVRPNZZATNQZNSBHVQPMCGRZFKNKFLRHHBAONUUQPEFSWWLTREGMGYVKCZXBUUXZGCFKYZC");
    msg.message_id = 49954U;

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
    msg.setTimeStamp(0.10132468873);
    msg.setSource(2354U);
    msg.setSourceEntity(87U);
    msg.setDestination(46284U);
    msg.setDestinationEntity(49U);
    msg.type = 56U;

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
    msg.setTimeStamp(0.269499381442);
    msg.setSource(28470U);
    msg.setSourceEntity(162U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(254U);
    msg.type = 59U;

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
    msg.setTimeStamp(0.588754272059);
    msg.setSource(33604U);
    msg.setSourceEntity(176U);
    msg.setDestination(18539U);
    msg.setDestinationEntity(226U);
    msg.type = 129U;

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
    msg.setTimeStamp(0.747667118009);
    msg.setSource(64298U);
    msg.setSourceEntity(219U);
    msg.setDestination(9495U);
    msg.setDestinationEntity(91U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.00802163270259);
    msg.setSource(38637U);
    msg.setSourceEntity(140U);
    msg.setDestination(54986U);
    msg.setDestinationEntity(219U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.00565860934827);
    msg.setSource(59930U);
    msg.setSourceEntity(124U);
    msg.setDestination(56357U);
    msg.setDestinationEntity(80U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.711000834141);
    msg.setSource(48399U);
    msg.setSourceEntity(30U);
    msg.setDestination(7223U);
    msg.setDestinationEntity(23U);
    msg.total_steps = 234U;
    msg.step_number = 174U;
    msg.step.assign("ZXBRNYDWRJRDYKEXMPBTTPNMCTQKUSXBEKJMLYTPZLIUNIKWUVAGIOOJWHXYEQQEFTSFMZDAQLAXXIVDDHZLDLLCNSIKNAEVNHYSDQRNKSRPGFVHTPJPFXADATGUCHPBVPEWQMAGTXYEAZTULSWUYVJAHKOQCCOQZDSFUZRDBCPCJNMSMVEVWFLROWUGCRVEAPZJIHO");
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
    msg.setTimeStamp(0.781446360188);
    msg.setSource(34070U);
    msg.setSourceEntity(90U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(103U);
    msg.total_steps = 240U;
    msg.step_number = 31U;
    msg.step.assign("OEBDOWRLTVWX");
    msg.flags = 237U;

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
    msg.setTimeStamp(0.038808509549);
    msg.setSource(27627U);
    msg.setSourceEntity(248U);
    msg.setDestination(50445U);
    msg.setDestinationEntity(46U);
    msg.total_steps = 88U;
    msg.step_number = 106U;
    msg.step.assign("RIRDNGHRYWRPCTTFNOWMGVOYKWSJPQTPDBSXCVHAVFYZJKFJTVMHEPMILPVPUCMHKBLFZYLEKYIJNTMXKRFZUEQYWOCTIEI");
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
    msg.setTimeStamp(0.308976587427);
    msg.setSource(38142U);
    msg.setSourceEntity(70U);
    msg.setDestination(62939U);
    msg.setDestinationEntity(87U);
    msg.state = 17U;
    msg.error.assign("IFNROCITBHPEBLSHFRFQQJERYJDHLIXNSDPG");

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
    msg.setTimeStamp(0.375795342649);
    msg.setSource(20309U);
    msg.setSourceEntity(159U);
    msg.setDestination(34814U);
    msg.setDestinationEntity(94U);
    msg.state = 81U;
    msg.error.assign("CWHNUMOJSCHTXOEFBYVRBRAJUFDODFJZLGWMCBSVEVHTKWBYTEPDYCJGPWMFEIRMZVEKHEVZSXGYXZQGTQFILWGKLPLKHGOCYJFPBIHFAOULBILMXAUTZXQXQVFSRQNIJPENUXMPGCNSACTRRVTCFHFYILDGDPQKBWLOBDZDHSLWJCKKCUBYVDZEZYTOOHIJKYNDMGZNIASPBSEUXQIMMNWQAKRQSOXAQVZNVTXNURASMOLAKPHETPAUWRIG");

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
    msg.setTimeStamp(0.687441083664);
    msg.setSource(19527U);
    msg.setSourceEntity(207U);
    msg.setDestination(51225U);
    msg.setDestinationEntity(253U);
    msg.state = 96U;
    msg.error.assign("FEZYNZXAOLWPUXFMKSCHPTKXXEDVJQVXVERAMVYUDBUJLMCXFAJLVRKJEXMJLSNOTYYQTIGTNSSPMVBKFCCZMGYDGFPFSTYCKI");

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
    msg.setTimeStamp(0.76483297103);
    msg.setSource(50970U);
    msg.setSourceEntity(103U);
    msg.setDestination(6701U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.697646741685);
    msg.setSource(18263U);
    msg.setSourceEntity(37U);
    msg.setDestination(50097U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.931847990037);
    msg.setSource(48021U);
    msg.setSourceEntity(23U);
    msg.setDestination(7591U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.876336549489);
    msg.setSource(52969U);
    msg.setSourceEntity(178U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(120U);
    msg.op = 179U;
    msg.speed_min = 0.560180473591;
    msg.speed_max = 0.240588181185;
    msg.long_accel = 0.144600465918;
    msg.alt_max_msl = 0.820880251184;
    msg.dive_fraction_max = 0.251305771615;
    msg.climb_fraction_max = 0.226714326288;
    msg.bank_max = 0.647901858726;
    msg.p_max = 0.249320006116;
    msg.pitch_min = 0.845113870657;
    msg.pitch_max = 0.605492524344;
    msg.q_max = 0.424981653044;
    msg.g_min = 0.930245321177;
    msg.g_max = 0.317681124319;
    msg.g_lat_max = 0.147343475033;
    msg.rpm_min = 0.399331251745;
    msg.rpm_max = 0.368075146671;
    msg.rpm_rate_max = 0.752442594059;

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
    msg.setTimeStamp(0.62214062798);
    msg.setSource(4168U);
    msg.setSourceEntity(170U);
    msg.setDestination(32180U);
    msg.setDestinationEntity(207U);
    msg.op = 133U;
    msg.speed_min = 0.382099121338;
    msg.speed_max = 0.418492682433;
    msg.long_accel = 0.342366737697;
    msg.alt_max_msl = 0.430670550798;
    msg.dive_fraction_max = 0.200216644133;
    msg.climb_fraction_max = 0.908170021094;
    msg.bank_max = 0.851587590054;
    msg.p_max = 0.919006614101;
    msg.pitch_min = 0.393656218487;
    msg.pitch_max = 0.39307227614;
    msg.q_max = 0.913295874016;
    msg.g_min = 0.19992619183;
    msg.g_max = 0.41281453711;
    msg.g_lat_max = 0.040549912377;
    msg.rpm_min = 0.36599779045;
    msg.rpm_max = 0.816127092315;
    msg.rpm_rate_max = 0.884162249782;

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
    msg.setTimeStamp(0.0267967233549);
    msg.setSource(25803U);
    msg.setSourceEntity(237U);
    msg.setDestination(1540U);
    msg.setDestinationEntity(124U);
    msg.op = 144U;
    msg.speed_min = 0.121967166927;
    msg.speed_max = 0.388678120876;
    msg.long_accel = 0.959539970567;
    msg.alt_max_msl = 0.28390075561;
    msg.dive_fraction_max = 0.503305607739;
    msg.climb_fraction_max = 0.519565034425;
    msg.bank_max = 0.757291405898;
    msg.p_max = 0.886155172714;
    msg.pitch_min = 0.579506867833;
    msg.pitch_max = 0.056249299847;
    msg.q_max = 0.168494875291;
    msg.g_min = 0.72924028835;
    msg.g_max = 0.296999959736;
    msg.g_lat_max = 0.257457153052;
    msg.rpm_min = 0.990057240389;
    msg.rpm_max = 0.0219443276654;
    msg.rpm_rate_max = 0.182221092019;

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
    msg.setTimeStamp(0.0306348452097);
    msg.setSource(19511U);
    msg.setSourceEntity(135U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.437107029395);
    msg.setSource(64183U);
    msg.setSourceEntity(189U);
    msg.setDestination(26240U);
    msg.setDestinationEntity(137U);
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.540978775146;
    tmp_msg_0.lon = 0.913498684875;
    tmp_msg_0.z = 0.381957672443;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.34574659822;
    tmp_msg_0.speed_units = 245U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0523558624557;
    tmp_tmp_msg_0_0.lon = 0.165012950807;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("JILYUYRMLHCQAWKBDOGVPCHPIMVOTUKETJGVTSCWHBPWDKHDCZBCOVMANRLXQX");
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
    msg.setTimeStamp(0.876581253373);
    msg.setSource(39573U);
    msg.setSourceEntity(108U);
    msg.setDestination(32026U);
    msg.setDestinationEntity(136U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("DFCIOBKNODZQEUVSGGHDOQACEQFTDQPJIUAOYATSOZDCLOIMAUKVWEMUORGPYKMNHVKSEFKTNXDIKMFQDINSAYGR");
    tmp_msg_0.text.assign("CVRFQGSIGAIMXHRKSBDYKJMFGDDWTVNTXVYMEUJRCIKARXOSWPXOPYXTRJSDQTOYBENFSPQZPFSKNRGLMJLXOFLGUPLZEFQVVAZGCLOEJFKSKFXPBEAJIWLGQBHWZALPXHBMCP");
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
    msg.setTimeStamp(0.346047057595);
    msg.setSource(50048U);
    msg.setSourceEntity(196U);
    msg.setDestination(38240U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.240297961148;
    msg.lon = 0.959901464472;
    msg.height = 0.697812148235;
    msg.x = 0.426479351331;
    msg.y = 0.264822053372;
    msg.z = 0.791851977587;
    msg.phi = 0.713230782383;
    msg.theta = 0.969889057207;
    msg.psi = 0.277249157363;
    msg.u = 0.388931669725;
    msg.v = 0.718677806745;
    msg.w = 0.501305266306;
    msg.p = 0.408931381036;
    msg.q = 0.625252239553;
    msg.r = 0.0213479991559;
    msg.svx = 0.954277915652;
    msg.svy = 0.175173781751;
    msg.svz = 0.571479072087;

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
    msg.setTimeStamp(0.286636268813);
    msg.setSource(14217U);
    msg.setSourceEntity(95U);
    msg.setDestination(24400U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.518564843235;
    msg.lon = 0.0417296598017;
    msg.height = 0.196417294526;
    msg.x = 0.681922726836;
    msg.y = 0.470258757941;
    msg.z = 0.437578161138;
    msg.phi = 0.234597222809;
    msg.theta = 0.565701132922;
    msg.psi = 0.339935767528;
    msg.u = 0.42056421087;
    msg.v = 0.402637039975;
    msg.w = 0.674140478447;
    msg.p = 0.194663336895;
    msg.q = 0.310406120274;
    msg.r = 0.609360617512;
    msg.svx = 0.382106815927;
    msg.svy = 0.546806406156;
    msg.svz = 0.149018731434;

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
    msg.setTimeStamp(0.292441631627);
    msg.setSource(37664U);
    msg.setSourceEntity(142U);
    msg.setDestination(63117U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.184602399637;
    msg.lon = 0.44730329387;
    msg.height = 0.394666982694;
    msg.x = 0.427777699501;
    msg.y = 0.888401268528;
    msg.z = 0.0667325807236;
    msg.phi = 0.173572802235;
    msg.theta = 0.197383796429;
    msg.psi = 0.283998904665;
    msg.u = 0.554243582139;
    msg.v = 0.533576815366;
    msg.w = 0.116242429341;
    msg.p = 0.0473116434241;
    msg.q = 0.0475401659828;
    msg.r = 0.807558890517;
    msg.svx = 0.599558003534;
    msg.svy = 0.276369085998;
    msg.svz = 0.0190808913792;

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
    msg.setTimeStamp(0.0407122421735);
    msg.setSource(39389U);
    msg.setSourceEntity(118U);
    msg.setDestination(53696U);
    msg.setDestinationEntity(161U);
    msg.op = 141U;
    msg.entities.assign("PEDLLMLPQSUDQFFVJZCANNYCBWJATOPRBVQIKWNGQI");

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
    msg.setTimeStamp(0.757866244338);
    msg.setSource(47044U);
    msg.setSourceEntity(224U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(110U);
    msg.op = 31U;
    msg.entities.assign("TXZJGROOVGSZYHPEJULTUUHTBUCQFYPLJHDYOPVVDLAIMOYMXVSPLZWUYMVRNHBKDFNSCSCAHIABMUEELWBOHVXHWFNQEOPSTLNONZYSZLEXDYKBKABNKWQLHVTBWSJCFJR");

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
    msg.setTimeStamp(0.685865852106);
    msg.setSource(19783U);
    msg.setSourceEntity(92U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(234U);
    msg.op = 77U;
    msg.entities.assign("ANTNKCIXWRAFNOBTELBPNWMDRBKNCWAVXOOJFRWHHMUUDVAYDEAIGHJAFSBZLBWGYSDJHJFDJQHVHZHFMKGAASRPSXTKOREDDISLYSULVSQHEOZZJQDGVQNUOKTPPCFNKWYUGALIZXMKXPQFUJTPMRPKIVUCHGLNENXDQBUGOEHBLCCIXOMTYIWSQGFVEYTJVLEAGYKPRVZQCZTDMXLRKEIWMTTEZXRIZYRQPS");

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
    msg.setTimeStamp(0.00812475908496);
    msg.setSource(27066U);
    msg.setSourceEntity(86U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(151U);
    msg.type = 235U;
    msg.speed = 33512U;
    const char tmp_msg_0[] = {42, 70, -52, 24, 41, -22, 121, 51, 11, -95, -56, -9, 80, 10, -123, 4, 89, 99, 49, 58, -16, -87, 31, -84, -33, 102, -50, -122, 114, -81, 10, 53, -114, -61, 79, 97, -2, -121, -84, 11, -45, -81, 46, -22, 12, -66, 48, -97, -70, -70, 15, 17, 119, 8, -42, 6, 42, 42, 65, -79, -42, -78, 83, -30, -114, 37, 108, -6, 76, -47, -83, -71, 42, -64, 35, 108, -18, -49, -58, 123, 19, -46, -100, -119, -18, -40, 10, 57, -21, 106, 70, -18, 103, 57, -90, 84, -6, 103, 63, -105, 6, 16, -98, -81, -86, -46, 73, -117, 74, 66, -121, -80, 75, 38, 14, 68, 119, 56, -70, -68, 1, 39, -123, 38, -4, 90, 58, -44, 24, 102, -48, 42, -123, 34, 110, 77, 122, 24, -53, -29, -85, -114, 110, -41};
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
    msg.setTimeStamp(0.367596856185);
    msg.setSource(19146U);
    msg.setSourceEntity(52U);
    msg.setDestination(46334U);
    msg.setDestinationEntity(53U);
    msg.type = 236U;
    msg.speed = 39589U;
    const char tmp_msg_0[] = {57, 36, 81, -55, 27, -16, 60, 120, -56, -18, 19, -89, 35, -112, 99, 93, 93, 102, 12, 29, 34, 73, -116, 90, 106, -10, 70, -17, 71, -81, -54, -8, 78, -5, 11, 12, 92, -36, 32, 122, -91, 78, -14, -1, -28, 85, 37, 21, -77, -73, -79, -53, 10, 45, -18, 51, 46, 70, -82, -3, 114, 79, -56, -13, 101, 46, -1, -77, 73, 78, 77, -118, 68, -56, 82, -122, -119, 126, -106, 50, -63, -111, -11, 121, -32, -20, 59, 78, 29, 69, -1, -128, 1, 21, -104, 99, 108, -5, -70, -98, -99, -126, -120, 37, 90, 3, -77, 105, -33, 44, 22, -46, 40, 63, -112, -103, 60, -102, 94, -61, 0, 5, 15, -112, 42, 40, 63, -41, -28, 51, -38, -45};
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
    msg.setTimeStamp(0.721244922878);
    msg.setSource(5614U);
    msg.setSourceEntity(151U);
    msg.setDestination(6452U);
    msg.setDestinationEntity(95U);
    msg.type = 71U;
    msg.speed = 56432U;
    const char tmp_msg_0[] = {43, 25, -54, 53, 119, 35, 114, -78, -60, -45, 3, 26, -111, 1, 80, -41, -18, -109, 124, -34, -34, -25, -81, 79, 25, 103, -64, 41, -41, 88, 4, -123, -16, -16, -96, -99, 64, -122, 62, -82, 91, -71, -43, -122, -106, -119, -45, 71, 55, 115, -80, -58, -90, -32, 97, -97, 29, 16, 112, -37, -103, -98, 122, 63, 2, 14, 20, -102, 35, 79, 25, -107, 53, 84, -107, 67, -18, -35, -122, 23, 85, 54, -39, -22, -93, 18, -87, 69, 59, 54, -15, 23, -108, -53, 112, 84, 35, -43, -121, -58, 2, 87, 113, -35, -110, 81, -61, 23, 102, 119, -2, -62, -46, -22, -34, 111, -10, -74, 37, -47, 126, -38, -8, 38, -97, -85, -19, 6, 18, -38, 103, 103, -9, 33, -22, -96, 43, 13, 70, 22, 25, -63, 76, -11, 24, -65, 15, -87, 55, -53, -64, 59, 16, 6, 112, 66, 9, 13, 8, 85, 9, -90, 29, -57, -64, 116, -115, -59, -121, -27, 95, 123, -41, -81, 31, 123, 55, 116, -61, -47, -10, 45, -59, -71, -55};
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
    msg.setTimeStamp(0.167800731463);
    msg.setSource(19557U);
    msg.setSourceEntity(129U);
    msg.setDestination(60126U);
    msg.setDestinationEntity(166U);
    msg.op = 70U;
    msg.tas2acc_pgain = 0.776822816424;
    msg.bank2p_pgain = 0.856772036625;

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
    msg.setTimeStamp(0.190257733317);
    msg.setSource(24960U);
    msg.setSourceEntity(68U);
    msg.setDestination(1800U);
    msg.setDestinationEntity(48U);
    msg.op = 165U;
    msg.tas2acc_pgain = 0.294908101376;
    msg.bank2p_pgain = 0.408082969676;

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
    msg.setTimeStamp(0.0350407899509);
    msg.setSource(33419U);
    msg.setSourceEntity(114U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(171U);
    msg.op = 86U;
    msg.tas2acc_pgain = 0.87676348806;
    msg.bank2p_pgain = 0.727372067611;

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
    msg.setTimeStamp(0.710134826622);
    msg.setSource(37639U);
    msg.setSourceEntity(53U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(193U);
    msg.available = 3424614490U;
    msg.value = 178U;

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
    msg.setTimeStamp(0.160517156009);
    msg.setSource(17035U);
    msg.setSourceEntity(220U);
    msg.setDestination(9686U);
    msg.setDestinationEntity(188U);
    msg.available = 3068840907U;
    msg.value = 222U;

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
    msg.setTimeStamp(0.0650358185205);
    msg.setSource(39016U);
    msg.setSourceEntity(245U);
    msg.setDestination(42876U);
    msg.setDestinationEntity(67U);
    msg.available = 1341447318U;
    msg.value = 213U;

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
    msg.setTimeStamp(0.953216162726);
    msg.setSource(25557U);
    msg.setSourceEntity(203U);
    msg.setDestination(47757U);
    msg.setDestinationEntity(248U);
    msg.op = 209U;
    msg.snapshot.assign("DETFAAZZKRMHPFGPSJRMYQQVUMPAZJKWIUYBNDKUOUAEMQIBLISBANDWZZVICSCMCZRIUGJVBCWNUVPWWBGPTEARXHHVLNUMCYSZADCVUMNF");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.108032645248);
    msg.setSource(20703U);
    msg.setSourceEntity(99U);
    msg.setDestination(17251U);
    msg.setDestinationEntity(174U);
    msg.op = 193U;
    msg.snapshot.assign("SKWJYNKELUHENBBCPCZAKJZBZDQVVLMOIBZCDMPQYMUGAJNPOTAKKYIQFNOYREAHLFUO");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MRMMSTSAWXNKJADHXEWFUZSLNOWYQISIGVGOQPEWGUQKMCWTMDKYCUAFEEPVGRWTUROPXQMXHYAPZIRBZGNAMHIJFZND");
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
    msg.setTimeStamp(0.630840477554);
    msg.setSource(19915U);
    msg.setSourceEntity(0U);
    msg.setDestination(8958U);
    msg.setDestinationEntity(61U);
    msg.op = 175U;
    msg.snapshot.assign("UKFDDGZWNQBYNCMVFHNMTAUMQZAXQYFCZDFRZEOQVIROMROECMYCRGMHWILABTYTIJHDKKHMTWLPLNNWXJOJOSQLNCEW");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.154898784322;
    tmp_msg_0.speed = 0.732192335206;
    tmp_msg_0.turbulence = 0.534053009257;
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
    msg.setTimeStamp(0.707265789733);
    msg.setSource(17145U);
    msg.setSourceEntity(222U);
    msg.setDestination(60489U);
    msg.setDestinationEntity(46U);
    msg.op = 30U;
    msg.name.assign("YCJVEFNHIQBASX");

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
    msg.setTimeStamp(0.62404987649);
    msg.setSource(13908U);
    msg.setSourceEntity(252U);
    msg.setDestination(60712U);
    msg.setDestinationEntity(219U);
    msg.op = 191U;
    msg.name.assign("KWPMAUAVWLXMZFDYBPLRPQBJAGTULIVPFUHKDVXXYHNHBRJKZPFPVKMCRGYIXBNFYJBMYRINUTIKKLZQVAZJFJJENOZEOFHVLZOLZMSXDJYDSMVLHRQYCJQNDCQAWBOQHSSUGWHXFZACOMSHICECWIGGMRODVHQTYSSQKBCUIOTYTNSFOIGDWXIMWTUAGWRAECCNKKNVEZPEJFDFIPXDXRGSEXCGDREJHGWTOVLUQEYNTBBNOSKWTPLMEAUTP");

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
    msg.setTimeStamp(0.21027704445);
    msg.setSource(16681U);
    msg.setSourceEntity(236U);
    msg.setDestination(41166U);
    msg.setDestinationEntity(193U);
    msg.op = 125U;
    msg.name.assign("RFLSRDSXWHCQACBVSQEJUKAGSXYVUUKOTZEYQNIVLVGGNPVJMQBHLIRFQVXMTPTSIDTSAEFYAGOYTSWILCJZGXUUNWZUOFZZKKVMOKVOPSHLPCFDXWSXWQXDMQPLPBBOMXAUCYXCJMPJUOGRNGLHPEENHLDCIIBRZQTVWPUWQCJEHDBPGNIGJXTYZRICLWDKKDLAAM");

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
    msg.setTimeStamp(0.981797437906);
    msg.setSource(59438U);
    msg.setSourceEntity(182U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(179U);
    msg.type = 185U;
    msg.htime = 0.354974740532;
    msg.context.assign("OSLAOZSCSUEYUMNIZXAUPHZXXJJRWSTTDTGHEEXMIJDSZUKPGTTRVLRGJSWNMMRECXWKDTBXLAQWBLMTY");
    msg.text.assign("OUMZEWRAHTURGLTSTGBFIGARJHSPJOCCDVROAIDWKGABHLJRJZCLFDPMSESQQSGGDMRLPHXFEYMPRZBSJLYIDVSOIYEEFBEYGTRMLKTZHVXCXGCIUIKQUH");

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
    msg.setTimeStamp(0.771621250335);
    msg.setSource(11397U);
    msg.setSourceEntity(41U);
    msg.setDestination(16945U);
    msg.setDestinationEntity(179U);
    msg.type = 41U;
    msg.htime = 0.590185529544;
    msg.context.assign("PQXVAFUHIJWXTPKAXITDDUCVKDMVASWYJRIJVURQHHFKIMEGYVIWBYENZLXEBNZGWWFOQRYGSKBHOUULZAHRMAOUFVOVPNPUBCNEJLWCXZPYDFGZLHUPOEWODLEXCOVYSQZAAMMESASGQINNCDFKFNJRCTMGKCIKOYSTIGMMVJRLTOGEQNMZRRCWPBHJHDKAHLMQDNXYFKJXKBSTBPEFPYQAOXRDDUGWLBBWIZCVTTSJQSLNCSYXUBRETQI");
    msg.text.assign("MSMPPMLEUMTVQFMJWVMWWCRSZAJGAKHRHFNKRXJGSFZLWXRWQSEFOZWIZ");

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
    msg.setTimeStamp(0.68090680688);
    msg.setSource(4822U);
    msg.setSourceEntity(32U);
    msg.setDestination(37554U);
    msg.setDestinationEntity(209U);
    msg.type = 52U;
    msg.htime = 0.039507309635;
    msg.context.assign("EFUBQRTUEYEJBIMNMIVQTNDDGKRZJLGJCPPVPRUC");
    msg.text.assign("WHUKOCTWTAGHYANYLSKWJJGALJZKAGEEGNUCPRRPNRITFUTYHPMLLGKDSKMAFUZMVCPWFJYWJBSDIOOYNTXCOUIQIAVXDKVISGKSRWZEAHIMUPCLDFRMOYHVLZBNEMBXWXJDATMATQENBDGDLBOXVXPCAJBDTYOFZCVZFQRECNPZDOKHCEFHETUEJYFGURXBSLVQUQGPQMCHFIIXNBSPRLOQWXJBZNQN");

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
    msg.setTimeStamp(0.127612595341);
    msg.setSource(52940U);
    msg.setSourceEntity(212U);
    msg.setDestination(2632U);
    msg.setDestinationEntity(108U);
    msg.command = 185U;
    msg.htime = 0.104712966653;

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
    msg.setTimeStamp(0.84822370653);
    msg.setSource(31129U);
    msg.setSourceEntity(118U);
    msg.setDestination(55458U);
    msg.setDestinationEntity(175U);
    msg.command = 44U;
    msg.htime = 0.927198864745;

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
    msg.setTimeStamp(0.857341542784);
    msg.setSource(48140U);
    msg.setSourceEntity(235U);
    msg.setDestination(14966U);
    msg.setDestinationEntity(169U);
    msg.command = 237U;
    msg.htime = 0.444998790814;

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
    msg.setTimeStamp(0.367315953191);
    msg.setSource(39657U);
    msg.setSourceEntity(105U);
    msg.setDestination(17231U);
    msg.setDestinationEntity(81U);
    msg.op = 60U;
    msg.file.assign("VMVJVNRGYHLMIGZSIFQYFEVLPIKXQZBKXRQBGKBRAPCOESYAQFBHZLWNEPEUJZYOIXNJXTWCNNCTVXIZQRPLDHTGLHTMPMRGRNOFGUHACDCAMCOKQWSKUGJNEKSHDYMYPTFUUDLAFOSORFUNJQJOFBIFWWIANBJXCWZTESQLKSTHCHPOVDMDHZGKUSVZKERENYIOMWQUEYMKE");

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
    msg.setTimeStamp(0.446038735315);
    msg.setSource(51203U);
    msg.setSourceEntity(10U);
    msg.setDestination(44505U);
    msg.setDestinationEntity(52U);
    msg.op = 58U;
    msg.file.assign("UNPXDZPACPOSVLRPLVWAZMIOCCUTUTBDOUZEKWSJEJJPFGUYBBIVXXSKCATYSCQFBHHUBVLPWMLQPKERGNOUDEBVTGZ");

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
    msg.setTimeStamp(0.59742476261);
    msg.setSource(60420U);
    msg.setSourceEntity(150U);
    msg.setDestination(40157U);
    msg.setDestinationEntity(93U);
    msg.op = 88U;
    msg.file.assign("CXXEUVOYNLWKZROYJITBNDWQHTEUDIQQJQAHYADIPQVCUHVJIKHCYGLTKDGWWMJLBJMPENAVMYWAJSRUFTBZMWSPXXRNCBPOICE");

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
    msg.setTimeStamp(0.501344068408);
    msg.setSource(2157U);
    msg.setSourceEntity(37U);
    msg.setDestination(10281U);
    msg.setDestinationEntity(127U);
    msg.op = 86U;
    msg.clock = 0.547222935417;
    msg.tz = 106;

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
    msg.setTimeStamp(0.689366996409);
    msg.setSource(49030U);
    msg.setSourceEntity(23U);
    msg.setDestination(52716U);
    msg.setDestinationEntity(151U);
    msg.op = 10U;
    msg.clock = 0.447554219594;
    msg.tz = -127;

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
    msg.setTimeStamp(0.0371039339938);
    msg.setSource(18042U);
    msg.setSourceEntity(52U);
    msg.setDestination(47904U);
    msg.setDestinationEntity(48U);
    msg.op = 68U;
    msg.clock = 0.669654299404;
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
    msg.setTimeStamp(0.567150867332);
    msg.setSource(54588U);
    msg.setSourceEntity(146U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(145U);
    msg.conductivity = 0.0541033483946;
    msg.temperature = 0.240389282623;
    msg.depth = 0.307710021527;

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
    msg.setTimeStamp(0.315828391573);
    msg.setSource(63996U);
    msg.setSourceEntity(30U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(43U);
    msg.conductivity = 0.309078327948;
    msg.temperature = 0.925348849897;
    msg.depth = 0.729981311816;

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
    msg.setTimeStamp(0.309584325495);
    msg.setSource(55277U);
    msg.setSourceEntity(93U);
    msg.setDestination(15975U);
    msg.setDestinationEntity(163U);
    msg.conductivity = 0.264580669944;
    msg.temperature = 0.0141697910921;
    msg.depth = 0.197004606846;

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
    msg.setTimeStamp(0.276258372516);
    msg.setSource(2151U);
    msg.setSourceEntity(204U);
    msg.setDestination(16603U);
    msg.setDestinationEntity(207U);
    msg.altitude = 0.653126572268;
    msg.roll = 44610U;
    msg.pitch = 30204U;
    msg.yaw = 39938U;
    msg.speed = -24880;

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
    msg.setTimeStamp(0.577120377855);
    msg.setSource(47479U);
    msg.setSourceEntity(214U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(135U);
    msg.altitude = 0.618944671915;
    msg.roll = 8796U;
    msg.pitch = 64177U;
    msg.yaw = 31378U;
    msg.speed = -29516;

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
    msg.setTimeStamp(0.0354657479183);
    msg.setSource(16026U);
    msg.setSourceEntity(17U);
    msg.setDestination(18986U);
    msg.setDestinationEntity(97U);
    msg.altitude = 0.683947866243;
    msg.roll = 58767U;
    msg.pitch = 23448U;
    msg.yaw = 49653U;
    msg.speed = 31947;

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
    msg.setTimeStamp(0.71147652707);
    msg.setSource(18868U);
    msg.setSourceEntity(17U);
    msg.setDestination(9891U);
    msg.setDestinationEntity(139U);
    msg.altitude = 0.741773525739;
    msg.width = 0.717256391185;
    msg.length = 0.322684964184;
    msg.bearing = 0.842444407683;
    msg.pxl = 26243;
    msg.encoding = 155U;
    const char tmp_msg_0[] = {70, -36, -10, -102, -102, 89, -31, 84, -105, 77, -39, 16, 107, 84, 80, 38, 58, 104, -108, -7, 24, -99, 1, 30, 112, 38, -112, 109, -127, -75, 86, -69, 43, -42, 47, -56, -94, 81, 12, -75, -116, 53, 18, -12, -34, 49, 8, -29, -8, 44, -106, -39, -30, -125, 102, 117, 29, 119, -1, -55, -128, 64, -103, 26, -128, -101, 98, 81, -20, 39, 3, -98, 78, -6, 53, -94, 97, 75, -88, -36, 75, -77, 11, 1, 9, -119, -24, 108, 55, 12, -105, -1, 75, 53, -121, -94, 76, 24, 67, 59, 96, 121, -76, -90, 122, -90, 80, 89, -16, 79, 115, -92, -123, 36, 113, -119, -106, -126, 93, 17, -73, -98, -40, 65, 13, -84, 75, -72, 19, 30, 33, 81, 99, -16, 51, 39, -53, -124, 23, -116, -19, 108, -6, 73, -105, 21, -97, -27, 61, 51, 66, -64, -48};
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
    msg.setTimeStamp(0.682832589629);
    msg.setSource(7072U);
    msg.setSourceEntity(31U);
    msg.setDestination(44584U);
    msg.setDestinationEntity(176U);
    msg.altitude = 0.0191686993052;
    msg.width = 0.781590769099;
    msg.length = 0.486963376732;
    msg.bearing = 0.767929441711;
    msg.pxl = -29808;
    msg.encoding = 107U;
    const char tmp_msg_0[] = {-1, 125, 30, 83, -67, 68, 105, 53, 83, -17, -64, -41, 65, -2, -70, -33, -98, 0, -109, -97, -90, -37, 105, -112, -91, 86, 115, -107, -31, -78, 124, 11, 117, -91, -92, -52, -108, 106, -82, -6, 79, 54, 46, -55, 93, 14, -69, 4, 25, 94, 7, 116, -93, -26, -58, -120, -39, -40, 73, 76, 53, 1, -105, 72, -34, -64, -80, -72, -86, 20, 52, -53, 3, -90, 30, -99, 64, -116, -4, -73, 37, 18, -37, -36, -87, -26, -76, 119, 83, -66, -85, 36, 71, -115, -120, 59, -79, 12, 99, -90, 37, 114, -32, -54, -62, 98, -109, 66, 60, 69, -87, 10, 33, 53, -17, 9, -105, -44, 37, -32, -62, -17, -85, 93, -81, 13, 74, -45, 105, 121, 95, 73, -114, -120, -42, -81, -99, -101, 119, -66, 56, -53, 71, 9, 83, 104, 95, -113, -45, -9, 96, 119, 124, -89, -70, 68, -105, -6, 37, 11, -39, 116, 70, 33, -45, 89, -9, -121, -1, 29, 100, 43, -24, 62, -86, -91, -80, -61, -54, 54, 65, 60, -73, 116, -33, -72, 97, 68, 52, 102, -87, -87, -87, 122, 92, 75, 82, 81, 25, 62, -19, -3, 25, -49, 109, 73, 67, -74, -47, -119, -52, -101, -97, -128, 65, 66, -69, -11, 97, 5, 110, 101, -25, 62, -39, 88, 66, 35, 120, -83, 52, 109, -89, -43, 62, 101, 7, 53, 66, 16, 114, 72, -77};
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
    msg.setTimeStamp(0.781714750727);
    msg.setSource(8079U);
    msg.setSourceEntity(174U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(77U);
    msg.altitude = 0.586935607853;
    msg.width = 0.139143306507;
    msg.length = 0.469567843225;
    msg.bearing = 0.329374060644;
    msg.pxl = 8896;
    msg.encoding = 203U;
    const char tmp_msg_0[] = {109, 98, 81, -38, -110, 116, 72, 61, 68, -24, 30, -110, -64, -108, -31, 113, 24, -106, 18, 79, 24, -124, -93, -82, 51, -18, -6, 109, -49, 12, -80, -8, 14, -82, 85, -26, 112, 1, -68, 6, -19, -88, 69, -21, -94, 37, 57, 26, -93, 65, -69, -14, -10, 110, 81, -114, 1, -38, -98, 89, -9, -36, -118, -41, 88, 95, -124, -11, 41, 57, 108, -82, 101, -73, -43, -98, 39, 92, 10, 73, -52, -36, -60, -120, 46, -101, -111, 70, -41, -30, -94, 0, -119, 82, -67, -93, 30, 115, 86, 40, -66, -104, 122, -18, -8, -58, 76, 72, -25, -14, -48, 120, 28, 89, -39, -12, -72, 32, 39, 93, -125, -59, -3, -112, -118, -120, 31, -76, 20, -80, -96, 67, 62, -57, 36, -59, 87, 122, 30, 58, 17};
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
    msg.setTimeStamp(0.236814776298);
    msg.setSource(41237U);
    msg.setSourceEntity(175U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(97U);
    msg.text.assign("FUNCIYSXRHZIYTKPEHKAHFOAAAHQZSJTDVVYOVMVWJLHYOOSIZPYZZOTOJNTXJCUDJELRDONMYLLMGSBHGWFKWUFBBHEMQIFFVQFRPDKLZQHMNKFAMJKJUAPGRDASBUDXIWBCRGRUDVPTWGFIPYCDBRJTSMNJUKHZBBCMYEYITLAACMLKEPWBYVUNLXGWESDZPDQOTXNOVEM");
    msg.type = 10U;

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
    msg.setTimeStamp(0.0154054435172);
    msg.setSource(21417U);
    msg.setSourceEntity(139U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(135U);
    msg.text.assign("NRTXUROFFMMCLSHWTMPZTHVYRRYGNVKZGJNBQVKPIXDGPFRJSWYITHYJDJRQUZEOXEDGAJSKUIWPEFAZLVGUERITZNYZCBDFUXECZZCMOTLFYBJXKOLNYNXHRMDDNPKIWPBOWJMQCGFQNMFKNBRBBCAQOFGFAXGMIHAELIZKIPDWYSWEDASHUVYLQXOSBUPMWSBEMOWSHVTXKTOVUQSTKUHAVSOLVHQNJQQXGIYEJCERVGCILCTP");
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
    msg.setTimeStamp(0.234161397963);
    msg.setSource(39831U);
    msg.setSourceEntity(154U);
    msg.setDestination(56504U);
    msg.setDestinationEntity(31U);
    msg.text.assign("WBTGAQGOFSBAIJBYWFXCXPQBPPZKNQLFGNHBPRAZFTFOQDMJZTMISGRDACUXSNROGKTAONRRQLAMYLAGEMIHUELYTNKWIUVRJDWRRZXAXKVQEWHTSJZQAV");
    msg.type = 180U;

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
    msg.setTimeStamp(0.0836365505165);
    msg.setSource(8040U);
    msg.setSourceEntity(143U);
    msg.setDestination(32165U);
    msg.setDestinationEntity(41U);
    msg.parameter = 141U;
    msg.numsamples = 190U;
    msg.lat = 0.0466367892074;
    msg.lon = 0.466887548151;

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
    msg.setTimeStamp(0.9030615442);
    msg.setSource(2215U);
    msg.setSourceEntity(79U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(137U);
    msg.parameter = 209U;
    msg.numsamples = 47U;
    msg.lat = 0.708757828578;
    msg.lon = 0.847384276069;

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
    msg.setTimeStamp(0.736393512896);
    msg.setSource(5541U);
    msg.setSourceEntity(217U);
    msg.setDestination(16552U);
    msg.setDestinationEntity(200U);
    msg.parameter = 228U;
    msg.numsamples = 250U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 4314U;
    tmp_msg_0.avg = 0.634824441991;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.634345864336;
    msg.lon = 0.99814695102;

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
    msg.setTimeStamp(0.738311643595);
    msg.setSource(17330U);
    msg.setSourceEntity(195U);
    msg.setDestination(51993U);
    msg.setDestinationEntity(112U);
    msg.depth = 218U;
    msg.avg = 0.189270037123;

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
    msg.setTimeStamp(0.300006293739);
    msg.setSource(506U);
    msg.setSourceEntity(173U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(63U);
    msg.depth = 28477U;
    msg.avg = 0.674396089804;

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
    msg.setTimeStamp(0.0206735713511);
    msg.setSource(1637U);
    msg.setSourceEntity(97U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(81U);
    msg.depth = 13153U;
    msg.avg = 0.0442712498194;

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
    msg.setTimeStamp(0.192895463374);
    msg.setSource(32331U);
    msg.setSourceEntity(141U);
    msg.setDestination(18027U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.256466383911);
    msg.setSource(55405U);
    msg.setSourceEntity(62U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.456505059078);
    msg.setSource(45654U);
    msg.setSourceEntity(143U);
    msg.setDestination(21119U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.44031379376);
    msg.setSource(49872U);
    msg.setSourceEntity(159U);
    msg.setDestination(37698U);
    msg.setDestinationEntity(23U);
    msg.sys_name.assign("UQPPZFJHDSHKFQNBPOXQKFWHEZXRSVRBANWVPAQJNUWFZKTGVGUDWXWEUZGHSLATKCMPBBQQXGCNTYAFDWKIJMZLPRBTWBUFVKICFRJDI");
    msg.sys_type = 139U;
    msg.owner = 17455U;
    msg.lat = 0.44194842651;
    msg.lon = 0.256960165863;
    msg.height = 0.20539735531;
    msg.services.assign("XDKETGRFWCJNBTEJUQZAWTQDDCXLZSBXJCKBHRVBYHWXAEOZWIYCUALAGFIGIVOQPNRSSXBMVNSPTKFGKSRRYPOVOC");

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
    msg.setTimeStamp(0.649710772081);
    msg.setSource(48300U);
    msg.setSourceEntity(238U);
    msg.setDestination(32582U);
    msg.setDestinationEntity(161U);
    msg.sys_name.assign("LRIRPAXIZDSAFWVBDZXEUWKENNBPJIJTXLLHNYGFYDKJJGINHBGHOJRABPNHMYXIHUHJDEMIRECHRGAOSZVBOTUGEQQHXTOUGFECOXSBIVNKEVTTSQFYCGQUKEMZQZZSXYLIQYYJZVLFUIZPAVLTIEQOJDHOOTR");
    msg.sys_type = 106U;
    msg.owner = 7018U;
    msg.lat = 0.336905192473;
    msg.lon = 0.379902669159;
    msg.height = 0.91865296893;
    msg.services.assign("GIBBNLQGQKCZHCSMYZEWIRHQCSFACSUEKDMLXEPGFBYZDEYAAZVCJNJRDAZQTUNAHJIFGBKXALJKROUMUQGWDANVHPVD");

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
    msg.setTimeStamp(0.0128055263485);
    msg.setSource(40193U);
    msg.setSourceEntity(176U);
    msg.setDestination(4021U);
    msg.setDestinationEntity(93U);
    msg.sys_name.assign("KWAIPWXHDYERBQJKTAXUZPBXQMLKJRSY");
    msg.sys_type = 46U;
    msg.owner = 45961U;
    msg.lat = 0.352251127934;
    msg.lon = 0.557799073808;
    msg.height = 0.879160381147;
    msg.services.assign("RXQDGDUCZJSZEAOFPDYCMGJJPFLXUIIQUHWXYTXTYVCOFAKRDLAJGOYJEDCJTXMKTOHMZVZPKWNIPXHBFXNWMUVYHHIUEXFJW");

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
    msg.setTimeStamp(0.576804456954);
    msg.setSource(64957U);
    msg.setSourceEntity(159U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(145U);
    msg.service.assign("YRENZPPBOPNXPEBQDZQSWBRVHUIVRVPNCOJCLXJFQYANHGYCKOBUAAFLDPZNIGWSIIHCPGZGKXQZOKRQKVKNJANLFGXNGEGBY");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.48820087963);
    msg.setSource(47320U);
    msg.setSourceEntity(176U);
    msg.setDestination(44837U);
    msg.setDestinationEntity(108U);
    msg.service.assign("RCIGELOBREIJKHKEBMJWKQHJWQDYRQHCLORLTNPRQBRHFSYYJCGPYIGAFMZPFCLLQTOUPCMZTUFCSSAQRDTKNKBSPUXOWIPETGTOVNXGAVPXAAZQMGYVCNDEZCOLXYDMGDWHJVKVZGPMYXZTECFCDHFMSASMVYELSZJSKJHGFIAOTMEEWWKRAX");
    msg.service_type = 141U;

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
    msg.setTimeStamp(0.348031045172);
    msg.setSource(27510U);
    msg.setSourceEntity(206U);
    msg.setDestination(49152U);
    msg.setDestinationEntity(206U);
    msg.service.assign("OJKXBBEYBUMHHFAZHYEXSBNCUAQQDHKBLTVTUWBADCXSLTYAVZDBSFLIMJUGTOYFOVNZCWEOZAWJZNCMPWHHFLKZVQYHXGAWDRCEHRYPVJTCOQMOXDQVTWMNPNIBFRUUFPSDLKQRJDKIZUNOMOIGTKVSYQYPHDQPVRFYRXLPFIQUWN");
    msg.service_type = 55U;

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
    msg.setTimeStamp(0.616366886356);
    msg.setSource(31821U);
    msg.setSourceEntity(83U);
    msg.setDestination(32434U);
    msg.setDestinationEntity(68U);
    msg.value = 0.598351529988;

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
    msg.setTimeStamp(0.0898574932515);
    msg.setSource(41179U);
    msg.setSourceEntity(221U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(197U);
    msg.value = 0.809034732396;

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
    msg.setTimeStamp(0.0887651922369);
    msg.setSource(12712U);
    msg.setSourceEntity(74U);
    msg.setDestination(18550U);
    msg.setDestinationEntity(137U);
    msg.value = 0.728515517693;

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
    msg.setTimeStamp(0.894452120074);
    msg.setSource(16866U);
    msg.setSourceEntity(200U);
    msg.setDestination(6280U);
    msg.setDestinationEntity(17U);
    msg.value = 0.852695187192;

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
    msg.setTimeStamp(0.288249678943);
    msg.setSource(47725U);
    msg.setSourceEntity(152U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(203U);
    msg.value = 0.592342719497;

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
    msg.setTimeStamp(0.397185747189);
    msg.setSource(29351U);
    msg.setSourceEntity(132U);
    msg.setDestination(11319U);
    msg.setDestinationEntity(150U);
    msg.value = 0.795169356963;

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
    msg.setTimeStamp(0.00577244962981);
    msg.setSource(2606U);
    msg.setSourceEntity(165U);
    msg.setDestination(32460U);
    msg.setDestinationEntity(233U);
    msg.value = 0.416156899081;

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
    msg.setTimeStamp(0.0463086494217);
    msg.setSource(57397U);
    msg.setSourceEntity(228U);
    msg.setDestination(216U);
    msg.setDestinationEntity(247U);
    msg.value = 0.000313402484865;

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
    msg.setTimeStamp(0.502589758322);
    msg.setSource(61479U);
    msg.setSourceEntity(89U);
    msg.setDestination(54196U);
    msg.setDestinationEntity(8U);
    msg.value = 0.593178169518;

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
    msg.setTimeStamp(0.747690086362);
    msg.setSource(25461U);
    msg.setSourceEntity(0U);
    msg.setDestination(45268U);
    msg.setDestinationEntity(179U);
    msg.number.assign("YMMQKGTAXYRZDBXZXGCPODMYXSNXRRJZBICBNNHMTAVELEWPLJZVFIFNBEPDTWAMIECJKRPFUBHPAIXANYRRJHEIJDXXUZOOIKLTCRVTBUKQJKJYTGWSBGVEEKOGMVBVHQLQUIGIUSHDYCFWHCLHOTZPHWKWVDWBJYPYFRRSUBQVUEDSLVLQZZUWSLQONYTVPEKCYQSOSXINRGMQTPCZFIAASKDHAJMOGJFNDFD");
    msg.timeout = 45293U;
    msg.contents.assign("GRLVJWZQRIMOBEIBVNEGORWSYUHOWGXFESSOKSIFPSJNZFTHNCJXNP");

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
    msg.setTimeStamp(0.614398347979);
    msg.setSource(15864U);
    msg.setSourceEntity(150U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(36U);
    msg.number.assign("BPPPBJHCHXEVSKWGJSJQCSAXIPTHAKUDJDHYIHPINWYZDAUOUVEGVMRWLGFKGSOCVNEMYKILNIKOXJIOOXLKUEXMHFXLSGNQAAENSKWMPWTGRDGJDCNTDEUBYTFWMHKSPAOAVHUYQCRCLRTJLTVRAXFSIZZWBHKZSVRYHWAJMUBMZYZIZMXYRURLQORBPBJLNLQBQCPGNQY");
    msg.timeout = 33934U;
    msg.contents.assign("WLLYZRRUQRHPIT");

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
    msg.setTimeStamp(0.191463459668);
    msg.setSource(34012U);
    msg.setSourceEntity(196U);
    msg.setDestination(546U);
    msg.setDestinationEntity(57U);
    msg.number.assign("DIMYQJKZSCOXBVMVOLVRGIUTFOSOEGEUICRRDYEDIXCDOIPSKGNIFAPXIDKMPPEEE");
    msg.timeout = 55105U;
    msg.contents.assign("UZTZGLWYAQOVYXJYMVRHATFFUYGPPRFAAAWEYSGSMVMPGQKAHVFCFVJEJVKHMJDZLTJXQFUPSIEABWDLYAIZCTNUTRWEILEMJDLKOBNNWSOHBPNJXGLNXXT");

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
    msg.setTimeStamp(0.110935740217);
    msg.setSource(53634U);
    msg.setSourceEntity(219U);
    msg.setDestination(9145U);
    msg.setDestinationEntity(87U);
    msg.seq = 2109481254U;
    msg.destination.assign("KSJZGSNRXWXWEXEHSSUBHNDHXEGMMXEQQSCOUMTWQCWGKLFZIXIYZKSIGKCVNLPUJBNNZSOODHRBPVTKOEZAFCQHLZGAYGUVBTBCJDLKPQIOCLGVOJERJEVTGWLIDIMZCBUEFTIQHK");
    msg.timeout = 48382U;
    const char tmp_msg_0[] = {5, -102, -48, 8, 110, 54, -61, 23, 0, 113, -17, 99, -91, 57, -41, 23, 32, 51, -33, -94, -110, 67, 17, 89, 51, -95, 124, -73, 30, -12, -93, -41, -18, 6, 2, -47, 86, -92, 101, 51, -10, 96, 48, -3, -74, -53, 111, 93, -1, 40, -46, -64, 73, 36, 112, 80, 97, 17, 79, -12, -84, 122, -83, -10, 26, 6, -87, -112, -70, -48, -12, 100, 67, -108, 3, 54, -76, 33, 10, -102, 26, -110, 62, 93, -93, -40, 95, -84, -15, -81, -43, 7, 64, 1, 99, 88, -66, 22, 31, 8, -49, -101, 116, 57, -97, 93, -25, -15, -75, 21, 90, -120, 99, 2, 74, 17, -46, -117, -52, -87, 61, -126, -49, 27, 31, -31, -51, -33, 46, -22, -78, -72, 66, 76, -69, 55, -118, -119, 13, 71, 5, 19, 123, -81, 30, -20, -55, 43, 35, 57, 59, -27, 63, 79, -22, 14, -46, 97, 85, 6, -31, -26, 123, 80, -128, 11, -26, 105, -17, 62, -18, 29, 80, -125, -85, 62, -34, -99, 15, 13, -86, 12, -108, 110, -2, 12, 39, 125, -113, -27, -31, 49, 54, 31, -94, -124, -81, -121, 41, 19, -6, 57, 77, -78, 69, -115, -13, 112, 70, -110, 103, 106, 105, -22, -125, 120, -102, 13, 61, -110, -100, 121, 76, 100, -122, 58, 25, -23, 97, -49, 98, 55, 45, 93, 60, 59, -88, 46};
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
    msg.setTimeStamp(0.963817822722);
    msg.setSource(59985U);
    msg.setSourceEntity(118U);
    msg.setDestination(27966U);
    msg.setDestinationEntity(111U);
    msg.seq = 788471099U;
    msg.destination.assign("OSIDSDPFLFQCXGSVOORDZVWNXLHVBHXZUFCAPUTADKNBGCPWXDEMCNCGFBBDLLWBIYJNSRREMKVYJNVPMBWJETLZDHDFMPJYEORMOXBAYCDKNLUTAIHTXQVSTMLIVXMYPUNTKQZPZWSVGWSVUKLQMIRRTNAIAZPNWFQCUOILSFZZGPTOIPOAGHIEJGJFXWHKVRCZASWKCTJRQLFYJHSNRWHJAIKRBFUZMQE");
    msg.timeout = 17285U;
    const char tmp_msg_0[] = {-115, 121, 39, 40, -123, 71, -96, 78, 55, 5, -6, 86, 103, 51, -120, -68, 92, 37, 36, 0, -106, 50, 8, -54, -45, 2, 18, 4, 24, 70, 108, 7, -53, 12, -79, 98, -60, 88, -60, 111, 30, -75, 119, -117, 5, -70, -48, -84, 83, -2, 46, -12, 99, 69, -20, -101, 0, -68, -71, 10, -19, -52, 59, 102, -115, 8, 0, 121, 62, -12, 110, 80, -27, 60, -18, -73, -47, -104, 71, -8, 2, 47, 49, -3, 45, 81, 123, 120, 0, -62, 90, -48, 47, 112, -114};
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
    msg.setTimeStamp(0.171253722103);
    msg.setSource(41951U);
    msg.setSourceEntity(25U);
    msg.setDestination(60708U);
    msg.setDestinationEntity(161U);
    msg.seq = 4195867794U;
    msg.destination.assign("JEUSUTFOQBZVRQGFPUIHONBTGQMCYCMPUEVTIWHLCDJPRYAYQJSSUOAFXJKHWFLCMNYSLBNMIDDCHWYXEHEPFZJUGKBLTUXSQSIOTPWKYWNKXKDLKAOBRLQAVXMKDKYAMIEPUXHMQKXANOIPPZFWSGDGGLMDHFDMKCBJTNMEVVQWINGERVYICJZWQWSAXAVZBUIOJLZT");
    msg.timeout = 3835U;
    const char tmp_msg_0[] = {-68, -63, -108, 109, -116, -105, 115, -47, 103, 96, 62, -121, -4, -95, 81, 49, 52, 104, 7, 115, -7, 26, -98, 2, -25, -91, 14, -62, 82, 47, -95, -49, 48, 81, 18, -39, 6, 43, -39, -106, 61, -92, -69, -51};
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
    msg.setTimeStamp(0.336718505849);
    msg.setSource(45176U);
    msg.setSourceEntity(114U);
    msg.setDestination(33748U);
    msg.setDestinationEntity(7U);
    msg.source.assign("FMEYKLHHTCOPVQOLRXZECOAKIOPYDGQJWADQLVSPKPBGBMGQFYAFUZETTNHHGXJSVPDFYMBADWJWJTMRDOSSJYEPNQCPCVAVPUVUQOEWUYQXWUUJLSCOGCIRZGXLOYXSRNSNULKPTZWZN");
    const char tmp_msg_0[] = {-80, 118, -80, 1, 120, 90, -106, -125, -70, -88, -26, 21, -26, -97, 123, -44, -48, -118, 125, -80, -56, 83, -63, -86, -42, 100, 79, 80, -30, -58, 101, -105, 87, 99, -50, 4, -82, 9, 5, -17, -114, -68, -123, -28, 107, -39, 15, 123, -66, -127, 51, 78, 70, 24, -85, -97, -47, 56, 2, -53, 125, -97, -8, -9, -9, -10, 78, -26, 28, -48, 101, -128, -21, 103, -38, -8, -39, 91, -72, 8, -6, -88, 48, -41, -2, 87, 17, -106, 20, 88, -67, 6, 45, 42, 59, 113, -26, -82, 31, 48, 50, 125, -123, -99, -77, -109, 30, 45, 45, -81, 89, 62, 12, -32, -121, 78, -9, 32, 63, 11, -6, -122, 33, 12, 68, -23, -71, -36, 71, -79, 61, 100, -127, 66, -82, 11, -113, -89, -18, 33, 12, 99, 61, 24, 69, -41, 90, 122, 82, -45, 14, 7, -114, -107, -81, -96, 81, 20, -35, -7, -69, -78, -12, -109, -4, 46, -85, 101, -95, 111, 44, 44, -83, -8, -36, 103, 12, 82, -78, 69, 69, -80, 78, 86, -120, 97, -128, -42, 83, -17, -117, -53, -47, -74, -9, 80, -102, 38, -123, 44, 24, -45, -116, 120, 121, 72, -104, 92, 90, -102, -37, 0, -1, -1, 83, -19, 86, 19, 82, -19, 38, 93, 33, 61, -73, 43, -121, -104, -96, -28, -70, 55, 62, -107, -59, -96, 23, 115, -111, -114, -110, 101, -43, -68, 47, 120, -91, -103};
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
    msg.setTimeStamp(0.26988527716);
    msg.setSource(10372U);
    msg.setSourceEntity(130U);
    msg.setDestination(29606U);
    msg.setDestinationEntity(57U);
    msg.source.assign("BCYAITNFXLB");
    const char tmp_msg_0[] = {-17, -33, -16, 111, 40, 9, 103, 2, 68, 114, -65, -90, -114, -15, -50, 38, -57, 64, 40, 124, 30, 115, -104, 33, 104, 46, -101, 120, 121, -57, -62, -84, 114, 7, -17, -125, -73, -93, 124, -109, -109, 118, -102, 92, -23, -62, 73, 36, -112, 59, 66, 26, 13, 26, -44, -105, -35, 107, -50, 74, 5, 32, 93};
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
    msg.setTimeStamp(0.788756802099);
    msg.setSource(9471U);
    msg.setSourceEntity(141U);
    msg.setDestination(36281U);
    msg.setDestinationEntity(113U);
    msg.source.assign("YLNDHEYPDIPTYAKNDFBQXOYLSYYRANYBPQGSAMHGVWHVLTXRDBKTEDUSQZLWISTUVUPGMMOSIZKAVNLFSURFXDUPVFBHFVPXOEPECHTXBRCGVYNCOJUKW");
    const char tmp_msg_0[] = {-49, 73, -27, -52, -30, -2, 93, 6, 113, 100, -53, 55, 10, 104, -76, 90, -8, -84, -1, -88, -95, 36, 32, 93, -72, 93, -25, 99, -68, 71, 126, 84, 96, -18, -86, 113, 75, 22, 120, 1, -73, -119, -2, 124, 10, 41, -46, 118, 56, -10, -90, -74, -111, -27, -100, 50, -43, -13, 14, 66, -84, 39, -26, -80, 50, -89, 39, 17, -61, 12, -119, 18, 39, -27, -46, 53, -128, -50, 44, 80, -23, -18, -55, -120, -36, -32, -71, -29, 98, 125, 93, 34, -89, -91, 37, 86, -56, 63, 48, -61, -91, 107, 123, -106, 80, 108, -57, -30, 36, 107, -54, -19, 23, 12, -81, 25, -30, 99, 25, 124, -61, -109, 26, 112, 99, -29, -87, -124, 97, 35, 91, -32, 1, 17, 104, 68, -116, 30, 48, 42, -64, 49, -121, -26, 94, 120, -3, -94, 53, 21, 91, 87, 38, 49, -70, -125, 56, 98, 7, 27, 34, -8, -65, 69, 84, 46, 18, -105, 60, 87, -117, -49, 83, -109, -19, 110, -99, -104, 103, -16, 44, -123, 7, -1, -119, -39, 86, -104, 116, 33, -123, 29, 67, -115, -38, 89, 107, 16, 72, -52, 123, 31, 18, -20, -3, 108, 117, 80, 95, -104, -33};
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
    msg.setTimeStamp(0.251905889351);
    msg.setSource(47669U);
    msg.setSourceEntity(22U);
    msg.setDestination(26967U);
    msg.setDestinationEntity(113U);
    msg.seq = 3942034106U;
    msg.state = 94U;
    msg.error.assign("VVHDSDAZVYKUQPLCEEIIDBRYOXYHMATVRWCYCAAFIVPTSKZECHJKGAXTB");

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
    msg.setTimeStamp(0.713220956485);
    msg.setSource(40055U);
    msg.setSourceEntity(96U);
    msg.setDestination(976U);
    msg.setDestinationEntity(34U);
    msg.seq = 262847662U;
    msg.state = 150U;
    msg.error.assign("RIQQWCAPYPNCXZJDMMKNDWKBAPEXAUCXBILTRAKOCTYQJZFIUGMFARODGOFXUMKUXFRPJUGKDJSZYPBFTTQZSQUIVBYNKWMVBREWYJAQMRMHTCSJIWAXPUVESMVCNKFFYIEZYLWHCCFQUXCNIEXSHPDVMON");

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
    msg.setTimeStamp(0.402663780507);
    msg.setSource(60870U);
    msg.setSourceEntity(29U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(61U);
    msg.seq = 4034451788U;
    msg.state = 194U;
    msg.error.assign("ADJZBTYKSHTCUINJFTCZOODAQUH");

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
    msg.setTimeStamp(0.129592586136);
    msg.setSource(62295U);
    msg.setSourceEntity(20U);
    msg.setDestination(9933U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("DCJBMVGQZMZIYHDEGROTCYITLLAWKOIEUIBUNWEVTDZXIYWQYJKYFYMESGMLGRUFGCVAXNYDQKHRLSQERTIVSGSVZGEBINUQDMNHFUSXRWRDBBWJJABMSCFKDSKUIDVUFDPLLWQPHNMXFBRNWUPZTRQMBABVVFOGHSNLZYQQCEBCYIWUJTXOHNNJUWOAMGPECIAROKKJQJKKZZZOTAYWZSFVEVPOHXEHTKPFXHMXFPCCHLPRLTSJXN");
    msg.text.assign("GOZLFTIMAEWENJKQPXNCWKKVOJUUSCHNCDXSDFQYMYIWCHDWWOEBUVBIVQYZGUZAMANFFKWUHNBDIKAJRNLXSMHTJXQDLIAJYMXPOHYKBVESRYXPBJBFODVBUCJCOGGVBSZZJWZSXXQDGPCDYLRITAYTTZCFHZARGUULNAQIWKMSAGEELHS");

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
    msg.setTimeStamp(0.220623916543);
    msg.setSource(50694U);
    msg.setSourceEntity(64U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(110U);
    msg.origin.assign("EJACPSEAVEYLJOOUF");
    msg.text.assign("DDAFUUPLCDMOAWVPLGDZBOMTSNTUGOKZVCCAQHGIPIJPNSVYWWKUGYDKIPYHIBLFTMPWCQFMIVMDBURCEEWQZNDSEOKXNKHXOJIURLOMQHWSHKYMKYJKREFBIYRTSXQSONLQROPXCTSNMPDMNXBAAVVXBJFGFCYEXIRWOZSJYYEQVWKBUTIALNTRGUTNDZTLNBGWDHJREEPPUSCFRQXRHGAIMJJFGYCOLZEHVXFZJHCZBLAQAJBTQFZEVUSXHA");

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
    msg.setTimeStamp(0.717630659903);
    msg.setSource(41984U);
    msg.setSourceEntity(146U);
    msg.setDestination(47127U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("XYQHZMUPTOXVOIVABWWNCNSIUKTAUYLOGTCM");
    msg.text.assign("TFCOBYDRMHDMZQYVSMKTBWNOFHEOASEYGTGYSUROBWZBUFDRLLHPBSJGJXJCGPPHCDSKDNIRAAZAQFNHXRVCIJZPUSXKPROGOIKZLYCARIMDNJNYISIVUHYRTJUCTDRLLPWAXZPIJMMEIVQZFROACBNKJKGNMSXN");

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
    msg.setTimeStamp(0.819362548547);
    msg.setSource(20081U);
    msg.setSourceEntity(128U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("MLKEXHJMNPZWRJIKAXQIATSVLCZYKSARTXPGHOXKKCUN");
    msg.htime = 0.439670865256;
    msg.lat = 0.452519758883;
    msg.lon = 0.822489121493;
    const char tmp_msg_0[] = {-40, 22, -57, 59, -75, 109, 40, 36, 55, 106, -95, 78, -2, 55, 112, 0, 78, -52, -91, -21, -1, -102, 67, -96, 26, -48, 86, -77, -84, 94, -40, -90, 34, 45, 26, -60, 78, -45, 42, -87, 126, 113, -53, -91, 61, -16, -112, -79, -41, -62, -79, -69, -14, 85, 3, -22, -124, -32, -127, -106, -43, 55, 80, -44, 50, -90, -114, -83, -54, -38, -106, -112, -21, 77, 66, 25, -86, -64, -122, -87, 124, -105, -82, 87, -34, 30, -71, -31, -45, -69, -110, 81, -35, -61, -55, 98, -6, -69, 73, -73, 85, 78, -104, 17, -79, 62, 7, 116, -23, -36, 11, -67, -65, 105, -16, -12, -18, 114, 95, 7, -65};
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
    msg.setTimeStamp(0.512678844089);
    msg.setSource(33632U);
    msg.setSourceEntity(176U);
    msg.setDestination(33914U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("NLYHVDETQHEWPYRFLIMABDLDJYNSMTETCRGLUWGPWUPIEWCDYIOYKCQRHAZYXROOQJAZQAIEZJSSBTPZYDSUEUFJYBMNXTVKDDBVQLRVWRXPKSMEWNRMTPNZFMQUVNJSXQUOL");
    msg.htime = 0.213793552601;
    msg.lat = 0.608050932579;
    msg.lon = 0.874779288996;
    const char tmp_msg_0[] = {53, 83, 39, 105, 37, -84, 125, -45, 100, -17, 117, 125, 117, -128, -36, -50, 54, 118, -111, 29, 29, -13, 83, 59, 28, 9, -65, 41, 77, 92, -60, 20, -31, 121, -126, 90, -111, 58, 42, -78, -38, -84, -35, -8, -56, 84, -33, 53, 79, -101, 12, -30, -112, 113, 42, -110, -60, -43, -110, -70, -79, 33, -85, -97, 60, 28, -71, 65, -118, 112, -122, -61, -124, -64, -84, -73, 34, 45, 17, 80, -115, -73, 84, 14, -126, 45, 125, 80, -74, 30, 80, -65, 32};
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
    msg.setTimeStamp(0.319008512856);
    msg.setSource(21074U);
    msg.setSourceEntity(83U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(246U);
    msg.origin.assign("FGAVYWJBYGMYGBOIOMVAJZFEBWVQOSHIRNQMUPBXGLRTYKVTJANLGCVZGQCGCOWITNQCAQOJNFCUBDNRRDVEBZLXXONUUZBLSFRXPOIJIDUEZUFIOCMHYXTFVGTREZZDCJFEWMVWLGBQMQTQWHBAN");
    msg.htime = 0.440437242088;
    msg.lat = 0.0457405400944;
    msg.lon = 0.141827377048;
    const char tmp_msg_0[] = {59, 100, -10, -78, -39, -97, -15, 126, 39, 94, 65, 71, 86, -108, -16, 65, 23, -40, 15, -110, -72, -6, -81, 53, 29, 64, 71, 124, -83, -58, 5, -48, -88, 66, 77, 109, 16, -73, -106, 2, -88, -43, -48, -35, 55, -8, 20, 118, -123, -117, -14, -14, -38, -49, -113, 59, -128, 49, -52, -41, -98, -4, 55, -100, -61, -93, -51, 33, -112, -101, 111, 23, 1, -27, -83, 82, -25, -40, 100, 60, 103, -91, 60, -26, 18, 49, -32, 70, 21, 102, 92, -74, -39, 105, 116, -8, 2, 119, 108, 47, -32, -39, -120, 106, -127, -22, -124, -101, 81, -124, -111, -95, -91, -94, 9, -87, 30, 122, -4, 35, 98, 103, 56, -53, 103, -44, 63, 66, 73, 85, 107, 92, -48, -57, 20, 19, -108, 45, -23, 75, -25, -45, -16, -99, 115, -61, -46, -17, 120, 4, 76, -57, -16, 85, 79, 120, 41, -104, -10, -72, -44, -67, -55, -90, 57, -109, 109, 115, 16, -22, -42, 73, 92, -86, -119, 47, 44, -51, 121, -88, -98, 116, 75, 6, 47, 6, 83, 102, -80, 95, -95, 42, 43, 92, 72, -102, -9, 126, 48, -85, -126, 105, -35, 39, 107, -107, -12, 103, 27, -32, 75, -58, 18, -87, -88, 94, -39, 121, -123, -12, -54, -29, 23, 19, -53, -63, 39, -126, -73, 52, 73, -97, -16, -7};
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
    msg.setTimeStamp(0.173268136126);
    msg.setSource(23709U);
    msg.setSourceEntity(97U);
    msg.setDestination(50735U);
    msg.setDestinationEntity(20U);
    msg.req_id = 54491U;
    msg.ttl = 7436U;
    msg.destination.assign("HRKTPSSTHMVWLFWYPJPRSDDHLVGFWAOUOZMAUVCPRWKRSL");
    const char tmp_msg_0[] = {-98, -27, -106, -16, 10, -80, -82, -115, 84, 6, 103, 16, 54, -11, 17, 87, 86, 78, -79, -70, -114, -106, -37, 94, 34, -12, -113, -121, -112, -59, 59, -50, -39, -41, 110, 35, 85, 77, -79, -11, -114, -124, -124, -25, -113, 57, -93, 114, -82, -94, 91, -2, -77, -30, 98, 116, -42, 75, -34, -32, -15, -115, -38, -102, -102, -67, 85, 33, -128, 43, 11, 95, 34, -110, 23, 91, -47, 72, 37, -74, -66, -88, -105, -1, -63, 38, 3, -61, 126, 83, 96, 105, -56, -119, 41, 105, -62, 105, 60, 41, -88, -7, 58, 121, -116, 118, 66, 43, 101, 121, 113, 71, -10, 61, -102, 60, -73, 3, -1, -69, 42, 101, 13, -107, 34, -108, 64, 103, -94, -84, -127, 101, -107, -67, -69, -10, 31, 36, 20, -78, -88, -122, -31, -9, -12, 76, 80, -81, 26, 41, 11, -123, 8, -20, -37, 70, 99, 49, -36, 97, 83, 88, 29, 50, 51, -8, -17, -36, 39, -24, 8, -21, -97, 76, 78, 61, 87, -91, 84, 98, -63, -7, 16, 72, -125, -2, -84, -7, -120, 31};
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
    msg.setTimeStamp(0.73749943332);
    msg.setSource(16053U);
    msg.setSourceEntity(160U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(123U);
    msg.req_id = 8137U;
    msg.ttl = 21192U;
    msg.destination.assign("ICUCSEEGRHFFGWVQBYBHQHNRMFXDDJQUZUDDNGQPNOLGUSPMZNDTFEBUEVAIZJGCOAZZKORXVECZYKZCWBIWVFMEYSKXTTP");
    const char tmp_msg_0[] = {17, 44, -113, -121, -57, 44, 12, -31, -10, 105, 102, 100, -111, 72, -49, 22, 101, 106, 108, 64, -24, -10, -18, -21, 32, -81, -59, -19, -38, 33, 78, -36, 8, 10, -61, 69, -15, -42, -124, 96, 50, -122, 37, -104, 72, 3, 68, -21, 15, 56, -117, -24, -108, 82, -4, -106, -122, -56, -16, -2, -98, -22, 57, -11, 101, -10, 70, -85, -56, 4, -93, -72, -64};
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
    msg.setTimeStamp(0.826732864207);
    msg.setSource(40199U);
    msg.setSourceEntity(201U);
    msg.setDestination(54391U);
    msg.setDestinationEntity(160U);
    msg.req_id = 47507U;
    msg.ttl = 43971U;
    msg.destination.assign("GCYWLAQQWDJSXXRFUPNLEQNEQYMKOSUVDINNXAEBWHTAFXHLE");
    const char tmp_msg_0[] = {91, 99, 121, -105, -120, -110, -67, -14, -110, 21, -85, -48, 12, -24, -7, 76, 57, -15, -80, 96, 65, -108, 24, -4, 22, -123, -63, -123, 107, -53, -61, 124, 98, -78, -102, 86, -20, 61, -128, 121, -61, 89, 62, -22, 121, -91, 75, 111, -11, -22, -126, -95, 24, -128, -54, 76, 92, 69, -32, 6, 112, -13, -111, 108, -14, -69, 57, -75, -79, 2, -109, -12, 14, -124, 88, -79, -98, 29, -16, 72, 32, 81, 60, 75, -73, 9, -94, 126, -89, 77, 25, 47, 126, 32, -33, -113, 55, 23, 117, 14, 124, -96, 89, 8, 39, -8, -43, 122, -15, -95, 82, -15, -62, -28, 52, 87, -121, 66, -55};
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
    msg.setTimeStamp(0.12089906988);
    msg.setSource(11558U);
    msg.setSourceEntity(235U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(40U);
    msg.req_id = 8582U;
    msg.status = 72U;
    msg.text.assign("XICWFIRJYRXCZPWLDNGGEARUO");

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
    msg.setTimeStamp(0.833173308012);
    msg.setSource(13847U);
    msg.setSourceEntity(6U);
    msg.setDestination(64535U);
    msg.setDestinationEntity(19U);
    msg.req_id = 63424U;
    msg.status = 10U;
    msg.text.assign("PUUGIUZBRQSOFGUESQIZKHRVKDBXDBITQHFNBPBMPFMGLHQMIYILZSNOEPNSWAXHVVVVEBTTRAOTJQKZJSZNYXJCKRDOGGVDKEQBOXOHIBAWDUZWYYNANYGSKWDEDQFBRAARMRZFCGFPOEEWVDVXSMONPYHOCQUTWTPATJFRMWXYGKHCFLTL");

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
    msg.setTimeStamp(0.508102533649);
    msg.setSource(35783U);
    msg.setSourceEntity(220U);
    msg.setDestination(211U);
    msg.setDestinationEntity(7U);
    msg.req_id = 43932U;
    msg.status = 53U;
    msg.text.assign("ZMFZQTRZDVSXQRUKHJVMMQPZTYGUIZLOHBPRRKGWFBKITKZAIXBQYQOOCLNSMERZRWOTPJFPGBXLDHOHAILCEDMDDWDIUQADPFEEXBNVSXYXYRUOTZVQXKKVWWPYLAWYCHRILXUQGECHFFSEBBUZLJFFNJAIPNXDMGWLITAUCLNICFBDJNKVYVSQWCT");

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
    msg.setTimeStamp(0.673906686266);
    msg.setSource(22331U);
    msg.setSourceEntity(198U);
    msg.setDestination(47229U);
    msg.setDestinationEntity(189U);
    msg.group_name.assign("LXOVYKTETQFJUANCTGBLZMFEVCMUQEOTVRCKWPSJFIQNBTKDSWPPWHMKOMDCEVUKFSZIPTAXSVRVEBJRALGLPHDNPUWRZXFZVOHNYBYMRMODWMAIQEDOSHJCFNUJTSLOVEBABYATMSKXURJGXMHLICKIIPYDBDQKUIZWOOQYZITH");
    msg.links = 1653287863U;

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
    msg.setTimeStamp(0.549119897734);
    msg.setSource(22394U);
    msg.setSourceEntity(7U);
    msg.setDestination(42393U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("AYLRPFWGAHNJBVRRIKZNHBMCWTDSGEWLXLOFUZQMVXLSJHGPEFMMAIABTYKBMRQWZYWGEXDPQPIYPXNTPOPOKQTMNEBIEIHREFGUHNVNKAUCJJRKMQDIAFSJWGRVQSQRVIBCTTCVGCXKHBWIDGSZREDMFUUNJLWJTHSLEMXNYQJLYBBK");
    msg.links = 866943253U;

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
    msg.setTimeStamp(0.116141287263);
    msg.setSource(38747U);
    msg.setSourceEntity(201U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("XZSVKLKTDXCJPAFXAEXEWSKKAQHMFFJNZTPLCNDSUGERNJKXEJCPWTLNRKGDLWQVFNJZNUBDHJIBRBOIZ");
    msg.links = 3241696751U;

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
    msg.setTimeStamp(0.086724220602);
    msg.setSource(39157U);
    msg.setSourceEntity(235U);
    msg.setDestination(31198U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("ZNDGPZSQSHJEBBKMVUCSXGZKONPMUHAVJOQRKIBRWVKSJBZHGDWMJHGFCKXVSFCWKNUWQZFQHGQODZREOMIBJSAHCIFFNPAARLIVYWYZOXTODTSTYTEFELNRDCKNQLIVYLOYLMPDPQBINTDPHCXAJWJTREEJHMADKCEXMEYFPKSOILUTZRBDACGXPGCPTKLQXLBFUENSHNNDFXLMWAGXGJZUWYAQVIBUMYZRAJLRMUT");
    msg.action = 109U;
    msg.grouplist.assign("PABYGTOMCOUKKWVQHISPEOXLVJXYOYJCJCQLUPHFRXPQYURXMJMIQXGSYNHKACUOZICZKFZLILISNXKAKWKALPNTNMSDPYXVYIOWEQDPQPROTESBDTLMYRANJUSCLVFGFHWXZVEGISISVDHNDJGAZGGJHUCJOGNUHKXDQWVQBTJNCTQZUW");

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
    msg.setTimeStamp(0.775329421579);
    msg.setSource(53032U);
    msg.setSourceEntity(109U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(173U);
    msg.groupname.assign("YXTBELZOAIGZFYCHEYDZMUQGYWBUQDRIZMXBCGUOMWCKUMEELLFSXIAHTKBCNKZRAJIBFUADHGMHCANAVHZDGOQOFKEYZKFVCKZQLRBIKVGMIQSTDCUDHYJXDPEJXSBDIFTPJMQLQSHRXVNUKGIIJVIBVOCLWYAWGPJPHFDZJMTLEVPTJTYDFNTNAENUHOSWWMOVPPZJRSSLMANPVUKEEPBYLRWNOOXAGSWNVWLXQBFRGRCTOXXPFRQKNUS");
    msg.action = 229U;
    msg.grouplist.assign("IDTCCTMLJRCLVYYLNUXGCAYSFBQWSGPNRZDNUQEHEDAWFYFIBJZVJUAVKMBOEPVWFKTQFYTOGUFMVEKOSEMWIHWUQHQGHVPXJIWSQJXKJUAZKBDTZXPHOADZECLHBNQQGIEMLD");

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
    msg.setTimeStamp(0.334616892864);
    msg.setSource(6999U);
    msg.setSourceEntity(213U);
    msg.setDestination(61262U);
    msg.setDestinationEntity(104U);
    msg.groupname.assign("UIWFOLKDETJSNMSKRSVXEBVWABOHUWPZXNGYWABGENSGZQNCVIMCFSZFCVBRPJKLQCWNVSYWHQKOKEBXUYFAHQMUJXSESQHKVSLXRZEGKKTFPADJIUTMTYIMGVNZZBPOAXLBLGVPHZVNNIYLNHRYQOHEPMDMLYPJAUDBFPCTOAGOMAGHPCUDI");
    msg.action = 29U;
    msg.grouplist.assign("LJTAEREIDUHCQEDJICGIJXKDDBXCVUWOMYSRHBAJCMQQNIIUIPTTKJQHFOXBUYNYZCYZYFLXKUPFXPMHOVVZLGNTCKETOLSKESTORVATTMLUWFFKBVGZOBAGHPYMFGSNWUJIAMHRGGMWSHFAATVJQCNXRBFEKYFSDXOQPCZNLNPXHWWJJXSHXNLLLQQQPDTUDMVVZWUP");

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
    msg.setTimeStamp(0.76512158348);
    msg.setSource(31932U);
    msg.setSourceEntity(201U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(4U);
    msg.value = 0.584891154116;
    msg.sys_src = 36091U;

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
    msg.setTimeStamp(0.832640423818);
    msg.setSource(65158U);
    msg.setSourceEntity(141U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(7U);
    msg.value = 0.0279778156897;
    msg.sys_src = 23651U;

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
    msg.setTimeStamp(0.606354973304);
    msg.setSource(19836U);
    msg.setSourceEntity(64U);
    msg.setDestination(28433U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0602173744606;
    msg.sys_src = 13182U;

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
    msg.setTimeStamp(0.261749869875);
    msg.setSource(13637U);
    msg.setSourceEntity(28U);
    msg.setDestination(1803U);
    msg.setDestinationEntity(209U);
    msg.value = 0.833736447539;
    msg.units = 56U;

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
    msg.setTimeStamp(0.979975294688);
    msg.setSource(14952U);
    msg.setSourceEntity(33U);
    msg.setDestination(33773U);
    msg.setDestinationEntity(138U);
    msg.value = 0.0436083392111;
    msg.units = 30U;

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
    msg.setTimeStamp(0.961807660097);
    msg.setSource(34774U);
    msg.setSourceEntity(25U);
    msg.setDestination(35764U);
    msg.setDestinationEntity(225U);
    msg.value = 0.982145338408;
    msg.units = 203U;

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
    msg.setTimeStamp(0.151258881958);
    msg.setSource(24827U);
    msg.setSourceEntity(38U);
    msg.setDestination(24514U);
    msg.setDestinationEntity(93U);
    msg.base_lat = 0.412015877445;
    msg.base_lon = 0.0916582871363;
    msg.base_time = 0.507733565909;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 2078U;
    tmp_msg_0.priority = -117;
    tmp_msg_0.x = 10979;
    tmp_msg_0.y = -164;
    tmp_msg_0.z = -9139;
    tmp_msg_0.t = -5624;
    IMC::ReportControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 126U;
    tmp_tmp_msg_0_0.comm_interface = 170U;
    tmp_tmp_msg_0_0.period = 44962U;
    tmp_tmp_msg_0_0.sys_dst.assign("QKHHFOZQLDRTWQKYQOBDEUVCRYYERSUBPCOJDMTTQJWBPWEAGUVOKESTTAJHHYIAXMWCJSMWGRWIZJSOMCZXPGHNVANJFEIYFDVKXFUGWIOXHMPGHKEYZLEIWGUVCYCOVRNPXZNZBNXXBWNLOKPEIREQQSTKOFDLUVQSDVXUCYFCRAFSDQNDDZSRHHJEGIFDTNUAUIPXBKULGNFALMVISJZGAGXNJTLLTTSAZZBMMPKMBBCIQYJBCMRRPKWOVF");
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
    msg.setTimeStamp(0.641977410262);
    msg.setSource(30374U);
    msg.setSourceEntity(249U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.813339625753;
    msg.base_lon = 0.294124378816;
    msg.base_time = 0.229368507529;

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
    msg.setTimeStamp(0.984430073425);
    msg.setSource(37070U);
    msg.setSourceEntity(175U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(38U);
    msg.base_lat = 0.270785887458;
    msg.base_lon = 0.00765764804611;
    msg.base_time = 0.677962167605;

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
    msg.setTimeStamp(0.650456697654);
    msg.setSource(56928U);
    msg.setSourceEntity(213U);
    msg.setDestination(37350U);
    msg.setDestinationEntity(217U);
    msg.base_lat = 0.440356762944;
    msg.base_lon = 0.198122958305;
    msg.base_time = 0.283843980493;
    const char tmp_msg_0[] = {-98, 7, -6, -53, 78, -82, -25, -84, -90, 71, -9, 49, 75, -64, 45, -106, 98, 1, -32, 82};
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
    msg.setTimeStamp(0.89388132149);
    msg.setSource(45579U);
    msg.setSourceEntity(14U);
    msg.setDestination(34315U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.673894541799;
    msg.base_lon = 0.111107630314;
    msg.base_time = 0.902370057776;
    const char tmp_msg_0[] = {-58, 93, 46, -9, 84, -105, 51, 110, 93, -25, -2, 71, 50, -88, -39, -12, -90, 21, -56, -75, 38, 84, -40, 9, 5, -104, -53, 63, -49, -81, -115, 84, -35, -41, 11, -64, 102, -45, -7, 55, -52, 99, -28, 110, 15, -56, -4, 123, -29, 88, -95, 23, 87, -109, 91, -37, 66, 45, 36, -12, 57, -12, -111, 55, -4, 20, 110, 121, -14, -34, -67, -107, 5, 92, -37, 96, 44, -124, -78, 125, -14, 82, -76, 10, 60, -4, 58, -32, 109, -33, -79, 38, -55, 90, 81, -18, 111, -49, 56, 16, -8, -15, -120, 51, -64, -25, 45, 68, 123, -100, 7, 120, -33, -115, 125, -62, 106, 125, 47, -108, -74, -5, -121, -61, -66, 22, -85, -103};
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
    msg.setTimeStamp(0.426300541199);
    msg.setSource(16128U);
    msg.setSourceEntity(176U);
    msg.setDestination(37526U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.554808839268;
    msg.base_lon = 0.819262635266;
    msg.base_time = 0.555384581761;
    const char tmp_msg_0[] = {51, 85, 8, -119, -61, -82, 85, -76, 65, -75, 27, 50, -112, -125, -127, 8, -31, 68, -80, -63, 56, 94, 66, 34, -23, -39, -80, -10, -17, 12, -57, 44, -31, 53, -10, -72, 64, 97, 31, -85, 50, -115, 55, 12, -33, -43, 78, 73, -58, -65, -121, 79, -102, 119, -64, -33, 97, 99, -64, 19, 29, -24, 43, 6, -36, -92, 102, -126, 94, 126, -32, -13, 70, -46, -40, 23};
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
    msg.setTimeStamp(0.239187581536);
    msg.setSource(47755U);
    msg.setSourceEntity(120U);
    msg.setDestination(8550U);
    msg.setDestinationEntity(8U);
    msg.sys_id = 16252U;
    msg.priority = 76;
    msg.x = -20832;
    msg.y = 24046;
    msg.z = -10222;
    msg.t = -24599;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 187U;
    tmp_msg_0.range = 0.0752987529754;
    tmp_msg_0.acceptance = 28U;
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
    msg.setTimeStamp(0.478682037962);
    msg.setSource(55706U);
    msg.setSourceEntity(31U);
    msg.setDestination(32662U);
    msg.setDestinationEntity(187U);
    msg.sys_id = 17851U;
    msg.priority = 55;
    msg.x = -17006;
    msg.y = 20116;
    msg.z = -12278;
    msg.t = 27207;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 135U;
    tmp_msg_0.clock = 0.246896785941;
    tmp_msg_0.tz = -11;
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
    msg.setTimeStamp(0.599698630355);
    msg.setSource(46173U);
    msg.setSourceEntity(133U);
    msg.setDestination(24462U);
    msg.setDestinationEntity(2U);
    msg.sys_id = 6286U;
    msg.priority = 9;
    msg.x = -10701;
    msg.y = -13563;
    msg.z = -20986;
    msg.t = -10302;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 251U;
    tmp_msg_0.value = 0.390836560123;
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
    msg.setTimeStamp(0.100548715863);
    msg.setSource(18546U);
    msg.setSourceEntity(130U);
    msg.setDestination(36716U);
    msg.setDestinationEntity(1U);
    msg.req_id = 44894U;
    msg.type = 182U;
    msg.max_size = 34223U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.109877171982;
    tmp_msg_0.base_lon = 0.204800473129;
    tmp_msg_0.base_time = 0.674669648033;
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
    msg.setTimeStamp(0.0793406165259);
    msg.setSource(55039U);
    msg.setSourceEntity(206U);
    msg.setDestination(62588U);
    msg.setDestinationEntity(3U);
    msg.req_id = 27659U;
    msg.type = 192U;
    msg.max_size = 14447U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.592807382228;
    tmp_msg_0.base_lon = 0.38218594897;
    tmp_msg_0.base_time = 0.299730083119;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 34799U;
    tmp_tmp_msg_0_0.priority = 48;
    tmp_tmp_msg_0_0.x = -26881;
    tmp_tmp_msg_0_0.y = 23660;
    tmp_tmp_msg_0_0.z = 19728;
    tmp_tmp_msg_0_0.t = 16281;
    IMC::Voltage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.326379277482;
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
    msg.setTimeStamp(0.0830094759485);
    msg.setSource(60667U);
    msg.setSourceEntity(237U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(234U);
    msg.req_id = 4859U;
    msg.type = 128U;
    msg.max_size = 60944U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.00720049464863;
    tmp_msg_0.base_lon = 0.172038998918;
    tmp_msg_0.base_time = 0.627894894619;
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
    msg.setTimeStamp(0.0802233028367);
    msg.setSource(44032U);
    msg.setSourceEntity(180U);
    msg.setDestination(33524U);
    msg.setDestinationEntity(52U);
    msg.original_source = 42302U;
    msg.destination = 20950U;
    msg.timeout = 0.801482787864;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 33571U;
    tmp_msg_0.sys.assign("ZPUZZMRPDKWMIFSJLMAOLUFBGYONIBKQQXOCKGCKPIZAEWHHELWTWZMHKSCTB");
    tmp_msg_0.value = 0.328170982044;
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
    msg.setTimeStamp(0.747621568169);
    msg.setSource(13182U);
    msg.setSourceEntity(57U);
    msg.setDestination(11105U);
    msg.setDestinationEntity(99U);
    msg.original_source = 35100U;
    msg.destination = 12696U;
    msg.timeout = 0.668199469419;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("ZPRQDWLWMFCQUFHFYYGZLBWIRANTRQMFYMHKKIGUCTQGGJCVELUWHMNRVYLGLMZRLRZIBROSBACVJNDWPOZZSSTCTIJQJWNYJISEQXXATPVPBYFSAJDXAHNVGBVEOJMUIOGPCUOKNXJFZUEXFG");
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
    msg.setTimeStamp(0.873996210627);
    msg.setSource(26472U);
    msg.setSourceEntity(6U);
    msg.setDestination(31740U);
    msg.setDestinationEntity(58U);
    msg.original_source = 43489U;
    msg.destination = 34557U;
    msg.timeout = 0.425488893225;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 21U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("SAWUCTRCKTZIQIBJFVBLIHWOSJDUUJLONGMEUAZTQHGEOKCUAGLHRIKPHTUBWXEQFNEAPNOCZZICGMCGMXMSVYYVGPVWGJKJEGVXRXRDWHXTRQIQAICBDXPMLCZWHVDXGFUZYJTJMKFPG");
    tmp_tmp_msg_0_0.lat = 0.338408813046;
    tmp_tmp_msg_0_0.lon = 0.937229444591;
    tmp_tmp_msg_0_0.depth = 0.969224886011;
    tmp_tmp_msg_0_0.query_channel = 108U;
    tmp_tmp_msg_0_0.reply_channel = 247U;
    tmp_tmp_msg_0_0.transponder_delay = 150U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.128006963445);
    msg.setSource(18101U);
    msg.setSourceEntity(179U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(31U);
    msg.type = 157U;
    msg.comm_interface = 61111U;
    msg.model = 40998U;
    msg.list.assign("FPTJFEJTCYOFIZAGSEHUJABXGAKHKVTMENVJYUCEPJLDORCGWYGMLILXHVDKSVNBNCFRTPBYRJWXGBCWZRDLAURPFRMKSOYFUZPQVSEUAIPNMXTPHXYTMHCLMKUILRGQQWAZUGUQHVCNITFSFUNLDSSHKYCOFEOQQGQDQXMXJYVARIBWTMXIVOKQEBWUIZMNEDBRXAAZIWLFBGWSGNREDMXDPYLKZPT");

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
    msg.setTimeStamp(0.407979107033);
    msg.setSource(33166U);
    msg.setSourceEntity(50U);
    msg.setDestination(38674U);
    msg.setDestinationEntity(252U);
    msg.type = 144U;
    msg.comm_interface = 44016U;
    msg.model = 56254U;
    msg.list.assign("LGFFKFVLGYQBCWDSSKUNZGBVJFZVROFETKZCYWZZBQCKWASRJEJOWQQPFMISQFGDKKOPGATVMIYXNARTOCLIQFKHGBGMIUMZSPZUXMYCVPJTRHUGUEORHUTPLBLJTXUWJAWYDZKCRLPNIHEIHYBVYTAZIOZJBSMOSDQVNNJDRPIMTHREOKHPVRXEXWUXXEKMHEBHNTLQTOMQMAIDAISFCRDVECNNDNJLNSPSXGWLAXF");

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
    msg.setTimeStamp(0.483773551674);
    msg.setSource(58658U);
    msg.setSourceEntity(114U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(131U);
    msg.type = 39U;
    msg.comm_interface = 7162U;
    msg.model = 60683U;
    msg.list.assign("MANSYDASOXMDHWPGCWVKIEIPINGISRKGEWINRXCIMHFPBWTTJRJTMPYHZHNLRYWAUREZPKXQSKGUDOFIECBCXNKIWAUERQMCJBNQQDONRJQGUABHDGCBDUSEVOMOLHLVAYVKTAXSYWXVJZLHGBSLVKHRFBYSUYFPAUXIUOHZTMCUGQZOWCNVWLPRLBFSJOUJVDMDGTJPTTC");

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
    msg.setTimeStamp(0.901536528733);
    msg.setSource(17693U);
    msg.setSourceEntity(128U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(55U);
    msg.type = 115U;
    msg.req_id = 2834372634U;
    msg.ttl = 52782U;
    msg.code = 215U;
    msg.destination.assign("YXFGMAXOLNFGXDFXRQVERJSSGNLWBBMHCTTHUUENKCEIROZBYCPOYQDUZPAQEIQLYRUCVRHTEKQPOSGXYGNYIHKATWBZJSDAAVVKUVKFDDBJYWGHZNNZLBZUWNVQRJZFW");
    msg.source.assign("REFPBXPBMESIKGEMMDWJEJRQSITJEAGTSEPLHPYNIJYBTGNXVWJKTICASCORVYHHFNDMHDYNAEXHXBWDWOBMLZRZBUVRCFPDDZRYLVSRCMHLKAQUBESUYDMVFCPKGYMRNIIAOLJWUVSFDUYVNRCUEGQZWCQZNFBFUQGHUOOGZXMHISQXFROJPWMTKCVCALFZYPTUQQWAOSHTJLIJXXNXSYQPETLXKWQKAUKIHBOGNDZFAICJZTWGGKB");
    msg.acknowledge = 45U;
    msg.status = 144U;
    const char tmp_msg_0[] = {-46, -5, -123, 99, 116, 30, -127, -114, 108, 76, -105, 93, -35, -64, -89, -5, 22, -116, 43, -86, -55, 26, -85, -5, -91, 121, 4, -37, -24, -116, 1, -59, -10, -93, 1, -5, 17, -127, 25, -48, 116, -40, 55, -71, -119, -7, -47, 44, 53, -115, -111, -89, 28, 13, -37, 38, -23, -32, -74, -52, 112, 46, -27, 11, 54, 73, -83, -127, -23, -58, -9, 76, 91, -55, -54, 45, 24, 98, -79, 3, 22, 90, -2, 4, -69, -23, 5, 20, -126, 88, 111, -83, 72, 50, 68, -26, -6, 119, -76, 104, -115, -104, -83, -123, -117, 62, -1, 28, 104, 3, 88, -77, 49, -19, -64, -57, -74, 22, 98, -70, -34, -120, 1, -4, 74, 80, 48, -128, 118, 81, 113, 126, -90, 107, 24, 3, -32, -117, 46, -45, -1, -105, -74, 49, -128, 1, 59, 118, 83, 39, -62, 35, -64, -77, -25, -124, 57, 106, -105, -60, 62, -72, -69, -77, 35, 69, -34, -76, 75, -52, -31, -47, 30, 73, 94, 23, 47, 13, 33, -6, -128, -1, 84, -36, 122, -4, -45, 73, -19, 113, 100, -25, 58, -65, 78, 120, 25, 33, 35, -94, -45, 64, 72, -88, -93};
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
    msg.setTimeStamp(0.745057810082);
    msg.setSource(40969U);
    msg.setSourceEntity(199U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(171U);
    msg.type = 162U;
    msg.req_id = 1813935314U;
    msg.ttl = 52610U;
    msg.code = 183U;
    msg.destination.assign("NQBGJEUQTJLBIVHVEQAQRLXCLOUPTZSDEWYMMVKASLKGDICQBKJXBJDGVCWNMCRCAJZKHRAOSK");
    msg.source.assign("SKFMYGDDDONHAIPBWGEFRTHBFQJCEVXXMNCJBQHBWUOYTMDSRKQCNYEKQPFPOQOJNRBFHMHYUJOWKWHKVZXGTLRZHBCLMKHOXVGYZQCOMTJOCGJAFRSYENFGEMKJSLDDTYJECEEHLMUUCFSNAIUWTTXXIANRAZXPTJCUDWPGELLSREGQRLYMX");
    msg.acknowledge = 208U;
    msg.status = 35U;
    const char tmp_msg_0[] = {-64, 53, -117, -63, -74, -84, 122, 67, -80, -80, -52, -70, -92, -25, -3, -22, 77, -13, 68, -124, -41, -114, -115, 114, 94, -102, 0, 66, -123, 92, 77, 29, 23, 23, -96, -35, 121, 33, 36, 124, -64, 105, -88, 12, -85, 33, 88, -123, -35, -128, -4, -95, -84, 13, -72, 0, 26, 70, 92, -82, -79, -120, 105, -126, 50, -120, 121, 26, 98, -118, -36, -42, 36, -71, 114, -71, -14, -52, -105, 108, 38, -66, -71, -101, -46, -44, 111, -116, -39, -74, 46, 74, 26, 20, -80, -105, 20, 125, -74, -32, 120, -98, 108, 89, 90, -33, 121, -58, -18, -76, -93, 90, -90, 79, -127, -50, 113, 89, -39, 66, 25, -100, 16, 102, -23, -1, -10, -59, 83, -66, 115, -77, 98, 120, -18, -99, 59, 117, 52, 82, -72, -68, 105, -46, -28, 122, -5, -66, -21, -11, -56, 126, 109, -13, 109, 102, -69, -65, 111, -12, 85, -11, 104, 118, 104, -31, 68, -55, -78, -5, -74, 56, 81, -56, -91, -13, 124, -103, 109, 15, 12, 27, -10, 87, -28, 91, -75, -104, -14, -61, -110, -97, 41, 54, -100, 27, -81, -82, -75, 19, 39, -29, -37, 105, -10, 126, 118, 8, 108, -106, 45, -98, 88, 73, -105, -8, 85, -48, 104, 78, -24, -6, 75, -46};
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
    msg.setTimeStamp(0.456987609631);
    msg.setSource(13449U);
    msg.setSourceEntity(164U);
    msg.setDestination(39291U);
    msg.setDestinationEntity(190U);
    msg.type = 193U;
    msg.req_id = 831049651U;
    msg.ttl = 12773U;
    msg.code = 171U;
    msg.destination.assign("NLKBJZGEWSMCJWNUAMLNAUDIQDBXBHGUZQVCFMHGBZCIO");
    msg.source.assign("HJBKEIUEIJSEVRPMZKMYNRPITIUMRUCUZUSUOBSGFBDLKHXCBXOGJIGMOEYSSNMQRQLYADOICPOGPHCYQZBYDYGDLAXKFHBZSIBVTBNCGARVDUSKNLRXTMEZFJSPRZKTNATWQKLXLQXNPJOCTLWLVMNJQZDAVAIECCKEWGPWAXFKPNOWXTFLHFYTVLFYYWHUEWDTWVWNGAWOGOJFSEXMKBRG");
    msg.acknowledge = 192U;
    msg.status = 246U;
    const char tmp_msg_0[] = {22, 33, 60, 90, 92, -102, -28, -17, 26, 0, 97, -91, 122, -29, -27, 28, 72, 4, 9, -70, -85, 103, 64, 125, 100, 48, -65, 118, 29, -121, 106, 31, 78, 62, 82, -3, 112, 30, -27, 38, 90, -32, 23, 13, -61, -20, -13, -42, -127, 109, 79, -116, -70, 54, 35, 7, -33, 99, 32, 19, 106, -119, 70, 119, -30, 92, -94, -38, -50, 93, -54, -77, -113, 95, 0, 119, -35, 67, -42, -32, 3, 36, 12, 64, -32, -3, -118, -42, -87, 31, -91, 114, -67, -11, -43, 99, -81, 66, 1, 96, -65, 93, 19, 4, 106, -49, 123, -127, 112, -92, 117, 101, 22, -31, 14, -57, 1, -14, -73, -5, -93, -9, -31, 108, -99, 113, 81, -107, 122, 18, -18, -76, 48, -37};
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
    msg.setTimeStamp(0.671677477785);
    msg.setSource(53585U);
    msg.setSourceEntity(18U);
    msg.setDestination(31996U);
    msg.setDestinationEntity(29U);
    msg.id = 199U;
    msg.range = 0.226913797835;

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
    msg.setTimeStamp(0.814827193922);
    msg.setSource(33911U);
    msg.setSourceEntity(222U);
    msg.setDestination(54237U);
    msg.setDestinationEntity(139U);
    msg.id = 14U;
    msg.range = 0.597430496107;

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
    msg.setTimeStamp(0.55832626218);
    msg.setSource(34646U);
    msg.setSourceEntity(231U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(18U);
    msg.id = 128U;
    msg.range = 0.348349687533;

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
    msg.setTimeStamp(0.000160946576603);
    msg.setSource(48180U);
    msg.setSourceEntity(113U);
    msg.setDestination(41584U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("KYHTLSJPWVTTDIUEWOGYSWKVDHQUVLFTRRZACQSNPJZDAVBHIQFBMYSDDDHXTQSHMOP");
    msg.lat = 0.108973954241;
    msg.lon = 0.150478133284;
    msg.depth = 0.398652786489;
    msg.query_channel = 93U;
    msg.reply_channel = 64U;
    msg.transponder_delay = 105U;

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
    msg.setTimeStamp(0.332942782962);
    msg.setSource(35311U);
    msg.setSourceEntity(42U);
    msg.setDestination(401U);
    msg.setDestinationEntity(113U);
    msg.beacon.assign("IZGHLEZXABDOACBRJTDVTJGOHDVADPIBLZKVZOJDQZWYPFMWXHUVHMAKEZGQCEPYWUCFKWBSPMBKGNNLXEMCGFHIILXZBLRJIYPMAOIY");
    msg.lat = 0.323722225824;
    msg.lon = 0.383147473734;
    msg.depth = 0.562286419408;
    msg.query_channel = 129U;
    msg.reply_channel = 87U;
    msg.transponder_delay = 185U;

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
    msg.setTimeStamp(0.560381985513);
    msg.setSource(12464U);
    msg.setSourceEntity(197U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(249U);
    msg.beacon.assign("URPQDISSIGJHJQTFEERDLARXVWXOVHVRHPTQWQNPIWKQQSHHPKBKSLHALMYUFBTWLOSURUCKVPQUDTDEMCZXPNNSBGTOAEXCOWXTCCEGGPLXUEEMCDLMYRNYYUZHJGSSKZMIBATBICYAEGOZLRZMVLKDMGERSVGUPTRCMYPFFWJSRIFPKUOWJGC");
    msg.lat = 0.275178061018;
    msg.lon = 0.379555889249;
    msg.depth = 0.955969647971;
    msg.query_channel = 162U;
    msg.reply_channel = 166U;
    msg.transponder_delay = 62U;

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
    msg.setTimeStamp(0.0077225188124);
    msg.setSource(46481U);
    msg.setSourceEntity(90U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(231U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.483503477658);
    msg.setSource(42115U);
    msg.setSourceEntity(154U);
    msg.setDestination(43687U);
    msg.setDestinationEntity(33U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.739832606895);
    msg.setSource(21911U);
    msg.setSourceEntity(9U);
    msg.setDestination(21953U);
    msg.setDestinationEntity(222U);
    msg.op = 145U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UZSMCKHAXLVUIKNMPHJNPUNANAYLWRFASIJJRKNSDDLMOQLUOVMGPBDUFODACWMQFKCMUGEBVNDYFNPBHWPRQGXKOAAWBJIUZSCCBXFZSVWHXXRINKJDLKVAZTGBHJLWSXWHVHROYMJRGBIEJHVGIQXGDTYQ");
    tmp_msg_0.lat = 0.636240893933;
    tmp_msg_0.lon = 0.54642326965;
    tmp_msg_0.depth = 0.479750021818;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 78U;
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
    msg.setTimeStamp(0.618066788528);
    msg.setSource(18247U);
    msg.setSourceEntity(177U);
    msg.setDestination(4751U);
    msg.setDestinationEntity(154U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 209U;
    tmp_msg_0.time_remain = 0.127550702818;
    tmp_msg_0.sched_time = 0.933829534113;
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
    msg.setTimeStamp(0.78915695678);
    msg.setSource(29970U);
    msg.setSourceEntity(78U);
    msg.setDestination(13905U);
    msg.setDestinationEntity(32U);
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.035473051039);
    msg.setSource(47319U);
    msg.setSourceEntity(79U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(72U);
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 43597U;
    tmp_msg_0.comm_mean = 210U;
    tmp_msg_0.destination.assign("BRGLRRNBSPLQSEOTLCILHFOXSUGOWXYARSOVXKRFWTYLMSXDTZARWUZQYSXTKTYETQBZZKSNESCZYEILACHIKKLWOVVNACHYQTWSWFYTMHITDIAPLGNEDAVIXNUKSHUPHUDYBPUAGNUZMCPJAAXZAWRWWOVGZNIXMGUDQMPDKJJJKCXMEEYPRFOFDOPFCXVFVJGBZBBHWDFHGEKJNVBQRG");
    tmp_msg_0.deadline = 0.0693110865689;
    tmp_msg_0.range = 0.266482059291;
    tmp_msg_0.data_mode = 92U;
    IMC::AirSaturation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.461242563831;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("XYOZPSTFUYQFPIGYITNGWWHYTACSQFCITKAVDOGBWRRFLCXUGIGJCXDUWERNIDFXWBZAZVCKDOEPMVNLQZHUWIDTECGQBQLRSLMIVVFTVJVNSRQUPEWBZBSPXKPGHHGMMTULEBKUMHRBTYZ");
    const char tmp_tmp_msg_0_1[] = {17, -93, -40, 15, 43, -81, 89, -93, 2, 57, -40, -14, -103, 26, -27, 88, 39, -101, -83, 39, 38, -92, -41, -15, -57, -29, 10, -118, -63, 62, 85, 75, -41, 29, -86, 29, 40, -100, -110, 12, 121, 16, -107, 7, -40, -118, -47, -44, -107, 12, -10, 12, -113, -112, 46, -43, 96, -61, -22, -26, -30, 118, -10, 97, -95, 112, -3, -5, -20, -116, 0, 30, 120, -11, -55, 117, 111, -29, -102, 27, 48, -71, -127, -37, 76, 20, -4, 64, -108, 6, 46, 62, 78, 61, -31, 77};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.161982473523);
    msg.setSource(28940U);
    msg.setSourceEntity(56U);
    msg.setDestination(44167U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.78879479556;
    msg.lon = 0.874464607847;
    msg.depth = 0.588370200085;
    msg.sentence.assign("LNHCODDYDJAKORTTFDJZKVXJGCMNCMFUSFTUSKZAXFIGNXBWEJWEBHZJNOYTAEYQQDCUBLFHGXEVJSBPOYAIQAQNQRJBNHRK");
    msg.txtime = 0.472360772028;
    msg.modem_type.assign("SWOCNYKMZEEMHDMTEWTNVKDDXZWPUFXMRLMCEMZFOSAGYOLKIXSXPPGOUASQNBUKQJVNDYIIVVWZMPASCVNEZRIAXFHLHLWJANJBZQGPHSRHUPYXSQQQITIDJBRHZIKMAHJMRYGFNQIEQJLOPJYFVTRGJXEACOXRFMLLCYPULKELOTDVPVKXTFGYTSJOHVCEPKRJRDHBFRBTBKZUICGOONALUEACSQYAUCWUHGWTFDDXNWIQTGBSZWBFGVN");
    msg.sys_src.assign("MBWQOKKPMGXHMRNCDLOJPFFYSWBUTULEOCMMJHVGULMCOSPCDLNZXLSAYAQXAHEBRZYMSAEVQYPCYEGNZGOKTPQKLQNPAQYSFKXIUARZJFJWGSJMTKRDCRFOVOSUVRTTDVIWAPIQGIKNTNTF");
    msg.seq = 40180U;
    msg.sys_dst.assign("JOEWTEOKEPAONESTCGKHXPMYBIRNUFVFCEXWOMLXGDALRFBADZQRJHGCXRWJVFPCEXWNHNSUGAJYSVGIYPYSAHKAQBAZZOMTEZHIFWBUJHHFTXZOFDEQOXSNRSDVJFGWULNUVWNQKXNLAKVBDSICBYRMTBYIUEYUTIHOMKIXNZLWIDVRHJMBPOSLIKFUCMUVTAMNZPGMXRCQULAQLZTCPEDP");
    msg.flags = 214U;
    const char tmp_msg_0[] = {-98, -20, 17, 43, 108, 64, 56, -46, 1, 67, -119, -97, 44, -116, 5, 90, 2, 53, 60, -65, -40, -41, 121, 111, 101, 67, -88, 56, -38, 22, 120, 72, 45, 29, 36, 110, -6, 123, 30, 64, -83, -89, -7, 56, -127, 24, -114, -33, 64, 87, 43, -80, 87, 87, -120, -98, 96, 70, 86, 67, 102, 10, 60, -39, -79, 113, 38, -57, -30, 27, -90, -92, 20, -116, -82, 95, 58, -121, 36, -126, -107, -44, 112, 126, 55, -12, 2, -128, -101, -64, -81, -16, -17, -26, -18, 41, 111, 109, -82, -41, -87, -100, 113, -10, -91, 48, 91, -103, -71, 36, 55, -49, -72, -64, 115, -49, 51, 45, -119, -68, 78, -115, -121, 35, -18, -84, -36, 45, -112, -48, -86, 122, 5, -37, -6, -43, -60, -19, -122, 33, -16, -51, -90, -29, -10, 75, -99, -93, 1, 41, 61, -72, -104, 74, 68, 84, -100, 48, 112, 13, -51, 15, -26, -50, -37, 119, -59, 45, -87, 52, -40, 102, 68, 17, -30, -21, -109, -10, -54, -22, -105, 86, -126, -77, -7, -122, 21, -21, -123, 29, 73, 99, -128, -122, 103, 5};
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
    msg.setTimeStamp(0.186876101186);
    msg.setSource(37387U);
    msg.setSourceEntity(150U);
    msg.setDestination(19438U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.536804758635;
    msg.lon = 0.68479797354;
    msg.depth = 0.584436125316;
    msg.sentence.assign("GQESIVNMDRXGZVOCWDJKLSNPMZJLFTACHVDJMKWKWI");
    msg.txtime = 0.376347801558;
    msg.modem_type.assign("FNWJPDSBIRMZOKKHDVECUXLCULQARIHUVPXQZRMSIVZQGVNWXQCNTWWRNSKTZZZNFJPLRSKAWTAMJJYOGDEETEAURJBQXGVLSOFWOWHNMNQMJXFTDIYTILATSNRVGXO");
    msg.sys_src.assign("HPZKMFJISTDEWBHJWHBVXRTGVARMPSTAKIHLBICUDCOTODBDGFIXMDYFDRTVARJPRXWLKCEONTBOLOWQKTGPRMMPXWW");
    msg.seq = 15189U;
    msg.sys_dst.assign("GTTIISMEWBZEIKBO");
    msg.flags = 212U;
    const char tmp_msg_0[] = {86, -33, 116, 64, 88, -34, 40, 81, 57, -93, -19, 124, -20, -119, -123, -107, -29, 9, 103, -41, 80, 23, -23, -110, 99, 97, 25, 50, -12, 71, 116, 19, -108, 116, -77, 43, -4, 11, -124, 52, 75, -122, -101, -63, 49, 106, -77, -12, -37, -92, -29, -98, -86, 124, -19, -83, -39, 5, -64, -54, 26, -67, 4, 0, 89, -57, 65, 32, -51, -119, -122, -16, -48, -45, 17, -34, 124, -63, -4, -37, 108, 69, -68, 119, -98, 58, -114, -20, 49, -95, -10, -12, 14, -96, 5, 61, 120, -30, -72, 101, 112, -41, 120, -125, -44, 20, -8, 30, -44, -19};
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
    msg.setTimeStamp(0.209122334245);
    msg.setSource(5054U);
    msg.setSourceEntity(30U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.748776945947;
    msg.lon = 0.0303721115657;
    msg.depth = 0.846662841537;
    msg.sentence.assign("KFGEPJXHRHBORNUZVQKQDEDAVXFBYJBEFGPKILXMCGDMUXPFVMOZIDOULEBZNBUMCQKJSLYXAZBBBDQSFYCMJEQTSTUZJGQKCLLPVWWWDWGJNPWONATGQMSETESVEAVCNIVLOYMCTXWFZJXRHVIEIWYSMTWDOAFQOKCPUYNRMIHCKCYGHGSJWQ");
    msg.txtime = 0.787033180515;
    msg.modem_type.assign("KZKMUIWRXBPARPHNHCWIKRFXAAMJRXTQBSTFYULFWQSSYZSLSEQKBEOXNVNBPUPNOQXINOIBDCOJSSLSZPGZCFUYVIGGDTTDHKJZXEDCBHGPUJQJQYFCDMOWRGLQEFMWTMIDHKOIUFEAZWSPNRXCOJPNGWYQFUCINYERNDKYBVVCHAPMTKFXVXWZRTKFBHAWEGYMAJELOOHNAICRGPBKOELLMXYVZUVJZ");
    msg.sys_src.assign("FXWGBFQIBIWYZXGBSFZCMDCWLJPYFNSEWKDSMFHPKYYH");
    msg.seq = 65498U;
    msg.sys_dst.assign("QOSTNRSTEUGMOALFSBKVVAXGASHWBDKHEHIAOVJKJNLNOICPMUZUHXEYQTCPOXHTVPHRADIJALIMGMZLPIKKLAVJSXOZXUDJBJLBYSLSICIKUBHWWUFVBJNBGMRCGFLEMYPCVZRTOREDHHXASQFWKRFBVRQAFYPNGDJZUVNOCETLZENCGQERBZKQUSLNQVAWIRUECKETTYYSDRYWTWTDMWDPNGFNZXBGIQYKPMCWWFXQUCFOXMOIJZXDYP");
    msg.flags = 24U;
    const char tmp_msg_0[] = {-81, 58, -75, 64, 120, 120, 80, 0, -3, -49, -86, 86, 97, -14, -11, 79, -96, -11, -29, -76, 18, -126, -9, -97, 120, -62, 124, 20, -48, -116, -101, 119, 68, -3, 17, -76, -80, -55, 65, 126, 13, 65, -73, -47, 114, 37, 0, 44, -58, 62, 37, 64, 13, 75, -101, 75, 12, -114, 56, 12, 77, -42, -64, -32, 122, 7, -64, -31, 117, -14, 48, 48, -49, -64, -68, 53, -34, -18, 4, -61, 126, -36, 48, 107, -85, -107, 50, 41, -59, 81, -12, 111, 88, 86, 1, 9, 26, -66, -98, -65, -127, -55, -36, 47, 58, 107, -54, -105, -61, 98, 8, 33, 53, -31, -17, -9, -92, 57, -109, -22, 68, -122, -20, -45, -12, -62, -65, -91, -53, -103, -51, 11, 76, -53, 16, -35, 100, 16, -6, 111, -3, -119, -116, -126, -5, -32, -71, 53, 44, -120, 23, 64, -8, 61, -84, 31, -63, 122, -13, 123, -81, -77, 20, -45, -12, -57, 7, 88, 8};
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
    msg.setTimeStamp(0.684227088036);
    msg.setSource(47209U);
    msg.setSourceEntity(98U);
    msg.setDestination(11620U);
    msg.setDestinationEntity(42U);
    msg.op = 217U;
    msg.system.assign("QGMBLWCEFCAFQAAXDYBXSEQUZWZYAWSVKCRSLPULORAWEPCBXQVCLIMKXLMRAGNAOICQXROBPHBSJYITAFWJSGVNRHDWHRDPNIJIBIZVZFNHBPGOLVTGJURZNBIETTKZUHWLUQWFHHXYCDVK");
    msg.range = 0.695957783713;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 55908U;
    tmp_msg_0.bearing = 0.981953619995;
    tmp_msg_0.elevation = 0.396617850134;
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
    msg.setTimeStamp(0.57651729354);
    msg.setSource(6344U);
    msg.setSourceEntity(161U);
    msg.setDestination(65179U);
    msg.setDestinationEntity(42U);
    msg.op = 135U;
    msg.system.assign("PJGTBQDBZIEB");
    msg.range = 0.592667527356;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.177046539353;
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
    msg.setTimeStamp(0.896722954208);
    msg.setSource(56099U);
    msg.setSourceEntity(91U);
    msg.setDestination(11919U);
    msg.setDestinationEntity(142U);
    msg.op = 45U;
    msg.system.assign("YSYXZPMKFADZFHICDZKSJRTDEMSYAMOWBGTNUZXHJZRZXLUPYNEMWAKQWNKGREABKEKSYJIQVMPPJBWGTS");
    msg.range = 0.45789106059;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KVSAJOCQQURDNMBISOZDEVZAHNVPXKMBJLXMYDMAHWNDQKVBBZLBHSUDEMJUTNVLBPGWSTLGKHRSTPVOHDUGIXLOKYPHWPQTRNMCFYOIZIPYCWOZWE");
    tmp_msg_0.lat = 0.867385145802;
    tmp_msg_0.lon = 0.422072046936;
    tmp_msg_0.depth = 0.888892303406;
    tmp_msg_0.query_channel = 214U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 204U;
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
    msg.setTimeStamp(0.458785886446);
    msg.setSource(40764U);
    msg.setSourceEntity(197U);
    msg.setDestination(36936U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.840945392625);
    msg.setSource(47558U);
    msg.setSourceEntity(116U);
    msg.setDestination(31732U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.486853508143);
    msg.setSource(24778U);
    msg.setSourceEntity(156U);
    msg.setDestination(14108U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.496406999036);
    msg.setSource(6663U);
    msg.setSourceEntity(216U);
    msg.setDestination(11982U);
    msg.setDestinationEntity(164U);
    msg.list.assign("HTDUBNAFJAXVCBHPAEOKBNJJRJLUFYAQGWUAVDVRWSQVNKPIRWXPVZGEBATYEFBOLSWCEQD");

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
    msg.setTimeStamp(0.0693333546217);
    msg.setSource(24923U);
    msg.setSourceEntity(81U);
    msg.setDestination(37522U);
    msg.setDestinationEntity(252U);
    msg.list.assign("XIYIEVOLUBJYIMKKHXCDNEONPWJPXAXIPKZLIRISULEMLZTYVWVBAEBPNFHUBXZTSROQZYTVQPCWPO");

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
    msg.setTimeStamp(0.634913383204);
    msg.setSource(43898U);
    msg.setSourceEntity(178U);
    msg.setDestination(26879U);
    msg.setDestinationEntity(67U);
    msg.list.assign("UZNLPYMTMFHJDTKSIKOYPGHUZQZGFSAEAATKJVTFJNAUWUTPKBVQJQNCKKVIYNQECRGGVFBCVOTLTEJGCFOPEATLWCVHMSJGSIIRPXVILYHXUILPUBRDNKLWMAPXUERXNNIKJJABFZFLGSEZKTGMJOIWCUPQCOWYRXEHLSNQVRRZARMFNZDMTGVMBXDGXQBCJHKSD");

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
    msg.setTimeStamp(0.868390575909);
    msg.setSource(34368U);
    msg.setSourceEntity(227U);
    msg.setDestination(25984U);
    msg.setDestinationEntity(203U);
    msg.peer.assign("UZTAUMQKJYFOY");
    msg.rssi = 0.174041706917;
    msg.integrity = 45234U;

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
    msg.setTimeStamp(0.418478689609);
    msg.setSource(36690U);
    msg.setSourceEntity(86U);
    msg.setDestination(53726U);
    msg.setDestinationEntity(17U);
    msg.peer.assign("IAINTIAELUCINEJQGLYHYACEWRYUQPZLKGNHOEMOSAZFUMNCGBVHTWXSRFLVPGXJOZICFLIJINPORSJOHUWZMFTWCJCTFOAYNDJEVQTKLWRRKBBBAHRSRHVIUUYGLPKUDXJAXGIPMPOBGTPBNZVXJDQQY");
    msg.rssi = 0.914998452778;
    msg.integrity = 52649U;

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
    msg.setTimeStamp(0.581577360531);
    msg.setSource(34329U);
    msg.setSourceEntity(129U);
    msg.setDestination(15233U);
    msg.setDestinationEntity(170U);
    msg.peer.assign("NZXORILKISWQGMIMPAINKNPPDBIRTDUQSZJHFYBRONUDYELLMNGMGEYWBOVDBCRNCMJASQTWSZSACNAMLHSCCHLTSGJXPFKWCREWFTTZRWDKOHSPDACIOUJQXAFZJEGGKKEYXIEHGJAOUPIYMVFNOWUQZBMEVSTEJVMIJRGQBZSXVLXCVKVYBHDZYQAURYDGZPBUWRFELWCNXVHYJQUKKTRYLWHGON");
    msg.rssi = 0.983935307649;
    msg.integrity = 59389U;

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
    msg.setTimeStamp(0.512881049833);
    msg.setSource(36110U);
    msg.setSourceEntity(180U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(175U);
    msg.req_id = 27176U;
    msg.destination.assign("UVGMBDMUPSXDNHOSRIQGRRJGMSIZFAFHWLHVVBXILINBTTCBCGDTVEUJIQASDAYQPCLJPTUXYKNKTOFOLJDWAATPSWZSUCZKTDAOULKOPKMF");
    msg.timeout = 0.176107854636;
    msg.range = 0.906004883687;
    msg.type = 51U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 174U;
    tmp_msg_0.op = 165U;
    tmp_msg_0.err_mean = 0.547569554232;
    tmp_msg_0.dist_min_abs = 0.668775961849;
    tmp_msg_0.dist_min_mean = 0.719117720539;
    tmp_msg_0.roll_rate_mean = 0.423834714817;
    tmp_msg_0.time = 0.0774316154775;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 168U;
    tmp_tmp_msg_0_0.lon_gain = 0.536802475656;
    tmp_tmp_msg_0_0.lat_gain = 0.903445718242;
    tmp_tmp_msg_0_0.bond_thick = 0.0404446211651;
    tmp_tmp_msg_0_0.lead_gain = 0.192101142968;
    tmp_tmp_msg_0_0.deconfl_gain = 0.74975652159;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.949455382736;
    tmp_tmp_msg_0_0.safe_dist = 0.543742611355;
    tmp_tmp_msg_0_0.deconflict_offset = 0.819442521577;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.489765418414;
    tmp_tmp_msg_0_0.accel_lim_x = 0.77808270331;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.82411613422);
    msg.setSource(13600U);
    msg.setSourceEntity(181U);
    msg.setDestination(3541U);
    msg.setDestinationEntity(223U);
    msg.req_id = 44668U;
    msg.destination.assign("YVTRFJJLVRWWDCRIJSOXQQISOVOXRMVGGRHDKNYCBYWETDNFOQAHFGHQZXXCBZPAEYTURRTYZJAXYNQSBMULWTGBHDMAXPISUWINJUVUFMCNGIBEHKWUHKFJMTEEZWEMKCPUPPPQEAYMLTZDIFQHBTTLFAAHLMCJUKCLJKUCOBFYVESZONEVKXIMHIWOVQJPSNLSB");
    msg.timeout = 0.767632802536;
    msg.range = 0.788969670681;
    msg.type = 11U;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 7189U;
    tmp_msg_0.type = 237U;
    tmp_msg_0.status = 235U;
    tmp_msg_0.info.assign("ZIEGMGYSDIFRWASUFKADRZUOFAWEQBQV");
    tmp_msg_0.range = 0.847878592574;
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
    msg.setTimeStamp(0.834818212352);
    msg.setSource(2525U);
    msg.setSourceEntity(192U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(236U);
    msg.req_id = 26310U;
    msg.destination.assign("BUVKOJQPGUBPQSSXWYRTIOWEAKYSNEIJWKSWXMKONPBHQJHYUGDCIZHMLEOCOMMQDEZXHFGVWCKTALVFJEWMZLPXUQAFZJJRRYILSEDQBXQBLPSQYRTRHGUMGEOTWHMIVNBQIDUMHZLHCHX");
    msg.timeout = 0.951353694565;
    msg.range = 0.75702236042;
    msg.type = 99U;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.433953162247);
    msg.setSource(44402U);
    msg.setSourceEntity(244U);
    msg.setDestination(5922U);
    msg.setDestinationEntity(72U);
    msg.req_id = 43437U;
    msg.type = 182U;
    msg.status = 107U;
    msg.info.assign("GCTYHMKGYUDNPG");
    msg.range = 0.0461225800281;

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
    msg.setTimeStamp(0.393368015928);
    msg.setSource(3205U);
    msg.setSourceEntity(211U);
    msg.setDestination(24498U);
    msg.setDestinationEntity(228U);
    msg.req_id = 54070U;
    msg.type = 198U;
    msg.status = 229U;
    msg.info.assign("YTXSIVZOFYLFZWQELPPJFUESBBUYMWUXONFYIBHZXXFJGHDAFMONAGFIJSDCNBLSDQUKXKCMADKTTEJPDVKZSBCKLUVBHVIAQXXHBEZFOOCTNAQGIBXRWWVJSPXUMPAFZQGPVLPNEYLLSHTENYREBOALKWEWRANONTOIWMVIRGVRKRRMGJJORTICEFBDMGIMDWAYZCGPHVMHKYSJKUNCCENYIZTMVLGCKD");
    msg.range = 0.937901665841;

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
    msg.setTimeStamp(0.0651202745187);
    msg.setSource(12154U);
    msg.setSourceEntity(226U);
    msg.setDestination(61469U);
    msg.setDestinationEntity(110U);
    msg.req_id = 1598U;
    msg.type = 154U;
    msg.status = 1U;
    msg.info.assign("BMLMBRHXPHLNZOESZQAPMMRFERESEGQVJBAYNJWSFHEJVVWOTOAYDFFEYQNIARXESZGCALETVPEYBXJGYUKCWUKFUIIBYOMRDQTXEPOICXZZDSZDROJUBTVKKDSTHDRQMPXKBGTVSCOWNLSLAYJIPAHAUUVCGWJBNXAGBJYHFSILWCDQCHXDLZGVJOTIPNGDMIFTHPHHNKVAMRNMGXYKIZLTQCLQWLWXQRK");
    msg.range = 0.0120611462845;

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
    msg.setTimeStamp(0.286589275934);
    msg.setSource(50745U);
    msg.setSourceEntity(200U);
    msg.setDestination(46240U);
    msg.setDestinationEntity(220U);
    msg.value = -16447;

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
    msg.setTimeStamp(0.149021503334);
    msg.setSource(13216U);
    msg.setSourceEntity(38U);
    msg.setDestination(64805U);
    msg.setDestinationEntity(85U);
    msg.value = 23984;

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
    msg.setTimeStamp(0.827087505382);
    msg.setSource(15993U);
    msg.setSourceEntity(10U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(152U);
    msg.value = -22134;

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
    msg.setTimeStamp(0.971401970436);
    msg.setSource(21562U);
    msg.setSourceEntity(45U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(161U);
    msg.value = 0.485697820215;

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
    msg.setTimeStamp(0.980954997763);
    msg.setSource(63598U);
    msg.setSourceEntity(77U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(55U);
    msg.value = 0.00973904581529;

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
    msg.setTimeStamp(0.292961780374);
    msg.setSource(43829U);
    msg.setSourceEntity(204U);
    msg.setDestination(36354U);
    msg.setDestinationEntity(108U);
    msg.value = 0.177952686226;

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
    msg.setTimeStamp(0.283780837938);
    msg.setSource(35520U);
    msg.setSourceEntity(62U);
    msg.setDestination(25902U);
    msg.setDestinationEntity(245U);
    msg.value = 0.759477135192;

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
    msg.setTimeStamp(0.548616391598);
    msg.setSource(37943U);
    msg.setSourceEntity(104U);
    msg.setDestination(25260U);
    msg.setDestinationEntity(146U);
    msg.value = 0.811149853982;

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
    msg.setTimeStamp(0.917767047543);
    msg.setSource(33655U);
    msg.setSourceEntity(75U);
    msg.setDestination(45805U);
    msg.setDestinationEntity(35U);
    msg.value = 0.664480407456;

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
    msg.setTimeStamp(0.252515435734);
    msg.setSource(56864U);
    msg.setSourceEntity(206U);
    msg.setDestination(10652U);
    msg.setDestinationEntity(152U);
    msg.validity = 50920U;
    msg.type = 19U;
    msg.utc_year = 46307U;
    msg.utc_month = 168U;
    msg.utc_day = 94U;
    msg.utc_time = 0.593369517143;
    msg.lat = 0.197851301121;
    msg.lon = 0.839937647845;
    msg.height = 0.688558917196;
    msg.satellites = 147U;
    msg.cog = 0.323814659082;
    msg.sog = 0.692668749586;
    msg.hdop = 0.215570444856;
    msg.vdop = 0.11548256753;
    msg.hacc = 0.585073818996;
    msg.vacc = 0.396555843665;

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
    msg.setTimeStamp(0.244971785073);
    msg.setSource(8063U);
    msg.setSourceEntity(43U);
    msg.setDestination(30957U);
    msg.setDestinationEntity(235U);
    msg.validity = 46244U;
    msg.type = 219U;
    msg.utc_year = 54906U;
    msg.utc_month = 10U;
    msg.utc_day = 144U;
    msg.utc_time = 0.80043715411;
    msg.lat = 0.471001430323;
    msg.lon = 0.85025844122;
    msg.height = 0.731345897463;
    msg.satellites = 72U;
    msg.cog = 0.217470325734;
    msg.sog = 0.929288142802;
    msg.hdop = 0.566635121577;
    msg.vdop = 0.523688819245;
    msg.hacc = 0.77943732189;
    msg.vacc = 0.0724360120961;

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
    msg.setTimeStamp(0.952479288416);
    msg.setSource(55818U);
    msg.setSourceEntity(121U);
    msg.setDestination(44774U);
    msg.setDestinationEntity(49U);
    msg.validity = 37028U;
    msg.type = 200U;
    msg.utc_year = 54087U;
    msg.utc_month = 77U;
    msg.utc_day = 26U;
    msg.utc_time = 0.718434201212;
    msg.lat = 0.994471674906;
    msg.lon = 0.71986347079;
    msg.height = 0.891537089769;
    msg.satellites = 10U;
    msg.cog = 0.621404468038;
    msg.sog = 0.33874579607;
    msg.hdop = 0.57958151217;
    msg.vdop = 0.532034254108;
    msg.hacc = 0.965833865629;
    msg.vacc = 0.988644965467;

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
    msg.setTimeStamp(0.539697661282);
    msg.setSource(32445U);
    msg.setSourceEntity(25U);
    msg.setDestination(7407U);
    msg.setDestinationEntity(248U);
    msg.time = 0.991325463281;
    msg.phi = 0.667899223066;
    msg.theta = 0.455292286848;
    msg.psi = 0.480899851215;
    msg.psi_magnetic = 0.335049646335;

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
    msg.setTimeStamp(0.971279078241);
    msg.setSource(9778U);
    msg.setSourceEntity(45U);
    msg.setDestination(44880U);
    msg.setDestinationEntity(173U);
    msg.time = 0.0612220258838;
    msg.phi = 0.913597082293;
    msg.theta = 0.485792006261;
    msg.psi = 0.34743794724;
    msg.psi_magnetic = 0.565260830228;

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
    msg.setTimeStamp(0.599835634517);
    msg.setSource(8618U);
    msg.setSourceEntity(234U);
    msg.setDestination(1297U);
    msg.setDestinationEntity(58U);
    msg.time = 0.110789287923;
    msg.phi = 0.789052233273;
    msg.theta = 0.896087346973;
    msg.psi = 0.615681389401;
    msg.psi_magnetic = 0.0118145839915;

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
    msg.setTimeStamp(0.928518588738);
    msg.setSource(22630U);
    msg.setSourceEntity(188U);
    msg.setDestination(31974U);
    msg.setDestinationEntity(242U);
    msg.time = 0.162987016946;
    msg.x = 0.610313222281;
    msg.y = 0.0262552825032;
    msg.z = 0.53363962388;
    msg.timestep = 0.331682858667;

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
    msg.setTimeStamp(0.780267952894);
    msg.setSource(41686U);
    msg.setSourceEntity(60U);
    msg.setDestination(5722U);
    msg.setDestinationEntity(45U);
    msg.time = 0.886104128677;
    msg.x = 0.101446396463;
    msg.y = 0.908502392376;
    msg.z = 0.734511685643;
    msg.timestep = 0.245371167876;

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
    msg.setTimeStamp(0.117438204024);
    msg.setSource(7976U);
    msg.setSourceEntity(0U);
    msg.setDestination(36677U);
    msg.setDestinationEntity(99U);
    msg.time = 0.620582335569;
    msg.x = 0.592654233403;
    msg.y = 0.878783186496;
    msg.z = 0.511111197092;
    msg.timestep = 0.593627023582;

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
    msg.setTimeStamp(0.0261166123646);
    msg.setSource(22647U);
    msg.setSourceEntity(44U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(27U);
    msg.time = 0.51936297488;
    msg.x = 0.373464637215;
    msg.y = 0.302172874281;
    msg.z = 0.938779040449;

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
    msg.setTimeStamp(0.281029969184);
    msg.setSource(57729U);
    msg.setSourceEntity(225U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(80U);
    msg.time = 0.999365935153;
    msg.x = 0.354972094738;
    msg.y = 0.350284305493;
    msg.z = 0.457042268285;

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
    msg.setTimeStamp(0.719345700353);
    msg.setSource(6023U);
    msg.setSourceEntity(88U);
    msg.setDestination(25319U);
    msg.setDestinationEntity(188U);
    msg.time = 0.530162423217;
    msg.x = 0.94956076246;
    msg.y = 0.0895746063165;
    msg.z = 0.155378315735;

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
    msg.setTimeStamp(0.402481394829);
    msg.setSource(667U);
    msg.setSourceEntity(90U);
    msg.setDestination(5969U);
    msg.setDestinationEntity(122U);
    msg.time = 0.0124306251001;
    msg.x = 0.940099388103;
    msg.y = 0.371741994734;
    msg.z = 0.894921735353;

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
    msg.setTimeStamp(0.427388776168);
    msg.setSource(38944U);
    msg.setSourceEntity(215U);
    msg.setDestination(40093U);
    msg.setDestinationEntity(148U);
    msg.time = 0.0848735234516;
    msg.x = 0.456035555218;
    msg.y = 0.172809822603;
    msg.z = 0.541033187708;

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
    msg.setTimeStamp(0.412115311245);
    msg.setSource(60437U);
    msg.setSourceEntity(65U);
    msg.setDestination(41241U);
    msg.setDestinationEntity(60U);
    msg.time = 0.261366071356;
    msg.x = 0.810017795244;
    msg.y = 0.288787921568;
    msg.z = 0.78570430595;

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
    msg.setTimeStamp(0.721757701821);
    msg.setSource(17551U);
    msg.setSourceEntity(37U);
    msg.setDestination(56722U);
    msg.setDestinationEntity(96U);
    msg.time = 0.234170403818;
    msg.x = 0.644238558272;
    msg.y = 0.0508993149271;
    msg.z = 0.314590457622;

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
    msg.setTimeStamp(0.0607911517307);
    msg.setSource(47565U);
    msg.setSourceEntity(195U);
    msg.setDestination(29362U);
    msg.setDestinationEntity(78U);
    msg.time = 0.37282235957;
    msg.x = 0.816784719478;
    msg.y = 0.7036051579;
    msg.z = 0.249434969872;

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
    msg.setTimeStamp(0.499697753543);
    msg.setSource(56857U);
    msg.setSourceEntity(235U);
    msg.setDestination(22696U);
    msg.setDestinationEntity(23U);
    msg.time = 0.208867104426;
    msg.x = 0.908403704297;
    msg.y = 0.960500372092;
    msg.z = 0.479154116708;

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
    msg.setTimeStamp(0.697162432739);
    msg.setSource(56872U);
    msg.setSourceEntity(154U);
    msg.setDestination(59567U);
    msg.setDestinationEntity(47U);
    msg.validity = 59U;
    msg.x = 0.447307898915;
    msg.y = 0.372547300557;
    msg.z = 0.335613101744;

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
    msg.setTimeStamp(0.271789649371);
    msg.setSource(51448U);
    msg.setSourceEntity(140U);
    msg.setDestination(10708U);
    msg.setDestinationEntity(124U);
    msg.validity = 179U;
    msg.x = 0.100378536653;
    msg.y = 0.159580670597;
    msg.z = 0.0598791814256;

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
    msg.setTimeStamp(0.27142582714);
    msg.setSource(23770U);
    msg.setSourceEntity(245U);
    msg.setDestination(62210U);
    msg.setDestinationEntity(184U);
    msg.validity = 111U;
    msg.x = 0.0794889243225;
    msg.y = 0.362655076197;
    msg.z = 0.534043954172;

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
    msg.setTimeStamp(0.778186194612);
    msg.setSource(11638U);
    msg.setSourceEntity(224U);
    msg.setDestination(53721U);
    msg.setDestinationEntity(177U);
    msg.validity = 151U;
    msg.x = 0.608513201122;
    msg.y = 0.829802690277;
    msg.z = 0.972625616169;

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
    msg.setTimeStamp(0.781542201627);
    msg.setSource(39747U);
    msg.setSourceEntity(229U);
    msg.setDestination(25020U);
    msg.setDestinationEntity(73U);
    msg.validity = 99U;
    msg.x = 0.383566833997;
    msg.y = 0.860447107349;
    msg.z = 0.0356981332533;

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
    msg.setTimeStamp(0.251350448755);
    msg.setSource(19025U);
    msg.setSourceEntity(65U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(161U);
    msg.validity = 235U;
    msg.x = 0.735351354503;
    msg.y = 0.852308082738;
    msg.z = 0.493006289018;

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
    msg.setTimeStamp(0.293741894195);
    msg.setSource(22075U);
    msg.setSourceEntity(181U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(170U);
    msg.time = 0.670536590124;
    msg.x = 0.577726881901;
    msg.y = 0.459825352202;
    msg.z = 0.601952052603;

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
    msg.setTimeStamp(0.43230231472);
    msg.setSource(59368U);
    msg.setSourceEntity(7U);
    msg.setDestination(39813U);
    msg.setDestinationEntity(162U);
    msg.time = 0.786232018197;
    msg.x = 0.633335073654;
    msg.y = 0.858069741342;
    msg.z = 0.577122213932;

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
    msg.setTimeStamp(0.288778781679);
    msg.setSource(13681U);
    msg.setSourceEntity(241U);
    msg.setDestination(23028U);
    msg.setDestinationEntity(112U);
    msg.time = 0.15394333806;
    msg.x = 0.706246326044;
    msg.y = 0.96337668017;
    msg.z = 0.626318899335;

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
    msg.setTimeStamp(0.703581632421);
    msg.setSource(45282U);
    msg.setSourceEntity(50U);
    msg.setDestination(34212U);
    msg.setDestinationEntity(186U);
    msg.validity = 203U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.11024479884;
    tmp_msg_0.beam_height = 0.843420023784;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.143419700273;

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
    msg.setTimeStamp(0.322249957572);
    msg.setSource(61549U);
    msg.setSourceEntity(42U);
    msg.setDestination(36110U);
    msg.setDestinationEntity(67U);
    msg.validity = 224U;
    msg.value = 0.439615808313;

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
    msg.setTimeStamp(0.531021234749);
    msg.setSource(25891U);
    msg.setSourceEntity(155U);
    msg.setDestination(55839U);
    msg.setDestinationEntity(247U);
    msg.validity = 58U;
    msg.value = 0.471666439126;

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
    msg.setTimeStamp(0.998518345296);
    msg.setSource(60712U);
    msg.setSourceEntity(122U);
    msg.setDestination(56812U);
    msg.setDestinationEntity(84U);
    msg.value = 0.501617315496;

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
    msg.setTimeStamp(0.744648475873);
    msg.setSource(31453U);
    msg.setSourceEntity(56U);
    msg.setDestination(62659U);
    msg.setDestinationEntity(47U);
    msg.value = 0.577630209824;

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
    msg.setTimeStamp(0.989143124356);
    msg.setSource(3517U);
    msg.setSourceEntity(62U);
    msg.setDestination(11687U);
    msg.setDestinationEntity(117U);
    msg.value = 0.306838467804;

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
    msg.setTimeStamp(0.744409292264);
    msg.setSource(34982U);
    msg.setSourceEntity(144U);
    msg.setDestination(35011U);
    msg.setDestinationEntity(116U);
    msg.value = 0.658713081397;

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
    msg.setTimeStamp(0.942043475187);
    msg.setSource(23085U);
    msg.setSourceEntity(152U);
    msg.setDestination(11846U);
    msg.setDestinationEntity(73U);
    msg.value = 0.636651489118;

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
    msg.setTimeStamp(0.26092496142);
    msg.setSource(4416U);
    msg.setSourceEntity(153U);
    msg.setDestination(50206U);
    msg.setDestinationEntity(71U);
    msg.value = 0.330951879097;

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
    msg.setTimeStamp(0.73019861785);
    msg.setSource(36841U);
    msg.setSourceEntity(200U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(245U);
    msg.value = 0.431954378209;

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
    msg.setTimeStamp(0.783420301388);
    msg.setSource(35120U);
    msg.setSourceEntity(68U);
    msg.setDestination(31142U);
    msg.setDestinationEntity(164U);
    msg.value = 0.956670604005;

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
    msg.setTimeStamp(0.377316382572);
    msg.setSource(28699U);
    msg.setSourceEntity(24U);
    msg.setDestination(7530U);
    msg.setDestinationEntity(215U);
    msg.value = 0.337952390603;

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
    msg.setTimeStamp(0.0343012423423);
    msg.setSource(40610U);
    msg.setSourceEntity(227U);
    msg.setDestination(63820U);
    msg.setDestinationEntity(125U);
    msg.value = 0.33947265208;

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
    msg.setTimeStamp(0.00121311503771);
    msg.setSource(38493U);
    msg.setSourceEntity(188U);
    msg.setDestination(14314U);
    msg.setDestinationEntity(163U);
    msg.value = 0.363677105976;

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
    msg.setTimeStamp(0.148976747657);
    msg.setSource(48456U);
    msg.setSourceEntity(188U);
    msg.setDestination(9913U);
    msg.setDestinationEntity(216U);
    msg.value = 0.440781586442;

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
    msg.setTimeStamp(0.0890372660351);
    msg.setSource(6731U);
    msg.setSourceEntity(253U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(199U);
    msg.value = 0.36149631052;

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
    msg.setTimeStamp(0.528857507147);
    msg.setSource(42873U);
    msg.setSourceEntity(196U);
    msg.setDestination(37191U);
    msg.setDestinationEntity(186U);
    msg.value = 0.704873045089;

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
    msg.setTimeStamp(0.865741351627);
    msg.setSource(39034U);
    msg.setSourceEntity(252U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(122U);
    msg.value = 0.913239941196;

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
    msg.setTimeStamp(0.820175927041);
    msg.setSource(54200U);
    msg.setSourceEntity(137U);
    msg.setDestination(46000U);
    msg.setDestinationEntity(66U);
    msg.value = 0.67257661713;

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
    msg.setTimeStamp(0.110669187351);
    msg.setSource(46622U);
    msg.setSourceEntity(117U);
    msg.setDestination(53695U);
    msg.setDestinationEntity(16U);
    msg.value = 0.612125792881;

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
    msg.setTimeStamp(0.536849372218);
    msg.setSource(60426U);
    msg.setSourceEntity(204U);
    msg.setDestination(8407U);
    msg.setDestinationEntity(123U);
    msg.value = 0.0780082145952;

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
    msg.setTimeStamp(0.38478459484);
    msg.setSource(20015U);
    msg.setSourceEntity(95U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(106U);
    msg.value = 0.727136348776;

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
    msg.setTimeStamp(0.0948641946185);
    msg.setSource(16798U);
    msg.setSourceEntity(148U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(61U);
    msg.value = 0.619053637316;

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
    msg.setTimeStamp(0.406811108468);
    msg.setSource(20449U);
    msg.setSourceEntity(148U);
    msg.setDestination(42380U);
    msg.setDestinationEntity(59U);
    msg.value = 0.674103534451;

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
    msg.setTimeStamp(0.82186387618);
    msg.setSource(10027U);
    msg.setSourceEntity(77U);
    msg.setDestination(45408U);
    msg.setDestinationEntity(22U);
    msg.value = 0.324539740888;

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
    msg.setTimeStamp(0.0554523733446);
    msg.setSource(9476U);
    msg.setSourceEntity(23U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(104U);
    msg.value = 0.939279060075;

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
    msg.setTimeStamp(0.966871910691);
    msg.setSource(28154U);
    msg.setSourceEntity(31U);
    msg.setDestination(31273U);
    msg.setDestinationEntity(78U);
    msg.value = 0.469503373358;

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
    msg.setTimeStamp(0.676426299038);
    msg.setSource(28719U);
    msg.setSourceEntity(201U);
    msg.setDestination(21150U);
    msg.setDestinationEntity(19U);
    msg.direction = 0.647867440905;
    msg.speed = 0.614272306086;
    msg.turbulence = 0.312610054641;

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
    msg.setTimeStamp(0.621166261207);
    msg.setSource(11295U);
    msg.setSourceEntity(240U);
    msg.setDestination(48786U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.417990133541;
    msg.speed = 0.122923121861;
    msg.turbulence = 0.27712684918;

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
    msg.setTimeStamp(0.45535155806);
    msg.setSource(48287U);
    msg.setSourceEntity(206U);
    msg.setDestination(57750U);
    msg.setDestinationEntity(55U);
    msg.direction = 0.0879987371917;
    msg.speed = 0.411993293802;
    msg.turbulence = 0.0849426787768;

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
    msg.setTimeStamp(0.508365930658);
    msg.setSource(61557U);
    msg.setSourceEntity(126U);
    msg.setDestination(64815U);
    msg.setDestinationEntity(225U);
    msg.value = 0.00211905763912;

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
    msg.setTimeStamp(0.814120897108);
    msg.setSource(32474U);
    msg.setSourceEntity(92U);
    msg.setDestination(20565U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0111488249133;

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
    msg.setTimeStamp(0.703970691033);
    msg.setSource(30400U);
    msg.setSourceEntity(68U);
    msg.setDestination(44613U);
    msg.setDestinationEntity(24U);
    msg.value = 0.399934238531;

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
    msg.setTimeStamp(0.597434356034);
    msg.setSource(52106U);
    msg.setSourceEntity(194U);
    msg.setDestination(31760U);
    msg.setDestinationEntity(209U);
    msg.value.assign("UUADMHXCOFUSSGMWZQWADGMNUNDCBLMZPQOPYYVHZCASWNYTXXDUQVFBUGXRD");

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
    msg.setTimeStamp(0.927945230331);
    msg.setSource(560U);
    msg.setSourceEntity(113U);
    msg.setDestination(17522U);
    msg.setDestinationEntity(102U);
    msg.value.assign("KDFXDOAKLHKMZPBLHFKFJYXOEAVBUFBIIIVZZTUDJATCGOYMRGNVPKRQHZRTEASGBDEYZVRBAWHGDRWMJWXNVQJAMFSIMYSTTKLHFUTGNABBHXIVZXHRPQSUGNCSFJBUTYXNDOLNEJVSWXYNEIPWEPUXVJXYKUTCAFIAGKIEMLLWCVACYTELCOQWUQOCOSUELVPMDHQMDWDXQORIYGDRJCQCZQIFKQGOSHCGSTRBNK");

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
    msg.setTimeStamp(0.827961701868);
    msg.setSource(60823U);
    msg.setSourceEntity(77U);
    msg.setDestination(4227U);
    msg.setDestinationEntity(236U);
    msg.value.assign("SSAJHQRURUEEOXZUCMYFPDTOPXINEZFBLGSYXHGNETIKCWTMCPTPQLOH");

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
    msg.setTimeStamp(0.109422378387);
    msg.setSource(42690U);
    msg.setSourceEntity(252U);
    msg.setDestination(16464U);
    msg.setDestinationEntity(232U);
    const char tmp_msg_0[] = {-85, -36, 41, 4, 94, -90, -21, -61, 41, -76, -110, -114, -122, 23, -117, -126, -115, 117, -71, 90, -49, -38, 41, -59, -92, -62, 76, -23, -59, 113, -119, -11, -103, 4, 39, 2, 100, 72, 55, -124, -104, 7, -61, 102, -111, 105, -106, 45, -73, -54, -73, 109, 48, 110, -23, -27, -75, 41, -44, 64, -14, -56, 124, 21, 17, 112, -3, 124, 42, -65, 101, 4, -46, 34, -112, 39, 68, 75, 48, 62, -82, 96, 2, 38, 24, 67, 89, 73, -9, 51, 19, 6, -63, -61, -99, -122, -70, -109, 124, 45, -10, -99, -23, 48, -41, -54, -43, -83, -96, 52, 66, -39, -123, -86, -30, 50, 51, -52, 70, -4, 24, -49, 3, 60, 3, -32, -100, 1, -91, -38, 34, -107, 10, 86, 59, 115, -125, -44, -94, -10, 102, -18, -61, -68, 21, -120, -64, -115, -5, 73, -87, -22, 51, 15, -77, 114, 0, 99, 102, 64, -70, -74, 91, -92, 103, 62, 122, -91, -82, 14, 100, -97, 16, 32, 91, -107, -49, -103, 117, -27, 87, 41, 55, 83, 6, 98, -107, 96, 119, 120, -28, 124, 15, -29, -14, 66, -84, 28, -123, 31, 71, 92, 67, -59, 68, -97, -44, 18, -37, 0, -51, -62, 14, 41, 13, 23, 75, 52, -94, 104, -83, -117, -59, -120, -94, -116, -51, -67, -120, -122, -62, -68, -110, 78, 124, 52, 114, -77, 24, 20};
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
    msg.setTimeStamp(0.282436160917);
    msg.setSource(46596U);
    msg.setSourceEntity(87U);
    msg.setDestination(13288U);
    msg.setDestinationEntity(189U);
    const char tmp_msg_0[] = {101, -120, -106, -7, 19, -61, -16, 121, 125, 57, -127, 102, 83, 11, 115, -99, 41, -43, 62, 107, -121, -95, -85, 73, -116, 71, -60, -117, 6, 36, 20, -83, 36, 2, 102, -17, -3, -52, 77, 14, -5, -37, -114, -11, 10, 13, 66, -87, -50, 14, 92, 39, -97, 71, -87, -14, -106, -84, 20, -53, -34, 100, 53, 1, 115, 97, 88, -70, 68, 15, 10, 66, -79, -62, 9, 73, -70, 118, -37, -26, 120, 4, -91, 65, -111, 98, -21, 3, 108, -118, -55, -116, -24, -119, 67, -58, -41, -120, 122, 25, -15, -101, 82, -113, -110, 13, -41, 118, -72, 61, 74, 98, -27, -62, 40, -110, -72, -35, -62, 59, -19, -106, -11, -79, -37, -82, 69, -56, 27, -119, 7, 70, 114, -98, -124, 46, 115, -112, -120, -72, 22, -108, 103, 95, 75, 122, -14, 54, 99, 19, 21, -9, 67, -49, 34, -121, -127, 87, -21, -99, -116, 69, -118};
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
    msg.setTimeStamp(0.655314310818);
    msg.setSource(48501U);
    msg.setSourceEntity(246U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(99U);
    const char tmp_msg_0[] = {74, 21, 3, 38, 101, 90, 44, 28, 41, -125, 102, -43, 7, -101, -51, -115, 123, -96, -37, 88, -45, -88, -71, 40, -128, 124, -87, 38, 27, -12, -13, 26, 9, 5, -100, -89, -67, 40, -21, -112, 94, 35, -97, 101, 106, 9, 125, 46, 20, -119, 21, 31, 116, -121, 106, 37, -46, -121, -126, -77, 84, -100, 56, -27, -80, 66, 60, 109, 67, -1, 52, 58, -42, 32, -116, -66, 45, 89, -13, -42, -25, -17, -82, 68, 9, -110, 48, -103, -64, -3, -3, -109, -33, -73, -14, -20, -127, -28, 107, -92, -123, -57, 4, 94, 109, -85, 37, -48, 112, 67, -123, 71, 38, 26, 86, 114, -69, 78, 77, 66, -69, 62, -80, 59, -87, -21, -103, 40, 32, -39, -125, -86, 71, -109, 87, 31, 6, 15, 0, -113, 90, -59, 94, -127, 43, -75, -107, -58, -93, -41, -69, 49, 96, 22, 79, 3, -40, -109, 124, 19, -104, 91, -49, -105, -120, -38, 100, -106, 30, 106, 49, 18, -101, 9, 26, 71, -21, 123, 122, 8, 110, -88, -19, 22, -28, 89, -126, 114, 36, -111, -64, -108, 7, 83, -41, 23, -42, 108, -63, -98, -29, 23, -19, -57, 44, 85, -5, 82, -83, 114, 33, -8, 71, -45, 119, -37, -81, -24, 57, -93, 14, 9, 46, 91, 28, -118};
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
    msg.setTimeStamp(0.47552874134);
    msg.setSource(5624U);
    msg.setSourceEntity(195U);
    msg.setDestination(30253U);
    msg.setDestinationEntity(17U);
    msg.value = 0.546973952549;

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
    msg.setTimeStamp(0.717740673289);
    msg.setSource(21141U);
    msg.setSourceEntity(170U);
    msg.setDestination(46074U);
    msg.setDestinationEntity(91U);
    msg.value = 0.782711565207;

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
    msg.setTimeStamp(0.174089055379);
    msg.setSource(55420U);
    msg.setSourceEntity(130U);
    msg.setDestination(6322U);
    msg.setDestinationEntity(201U);
    msg.value = 0.11581884846;

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
    msg.setTimeStamp(0.07889710308);
    msg.setSource(10019U);
    msg.setSourceEntity(15U);
    msg.setDestination(19481U);
    msg.setDestinationEntity(207U);
    msg.type = 84U;
    msg.frequency = 850200202U;
    msg.min_range = 58928U;
    msg.max_range = 33395U;
    msg.bits_per_point = 226U;
    msg.scale_factor = 0.139132546014;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.798822116767;
    tmp_msg_0.beam_height = 0.795150952265;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {46, -50, -8, -114, 1, -51, 89, -44, 2, 22, 14, 21, -35, 78, -87, -18, -72, 45, 37, -70, 35, -4, -2, -103, -23, 23, -33, 91, -10, -53, 92, -110, 98, 9, -51, -25, 60, -10, -27, -89, -14, 76, -106, -39, 40, -45, 87, -40, 109, -62, -128, -95, 96, -77, -127, 113, -117, -41, -61, 72, 28, -100, 77, -120, -128, 37, 42, 34, 2, 94, 22, 10, -21, 18, -22, -96, 59, 60, -80, 18, -66, -83, -71, -123, -68, -62, 97, 86, 22, 106, 115, 93, -99, 72, -50, 120, 39, 56, -65, -51, 83, -125, -100, -60, 7, -14, -49, -127, -60, 4, -25, 34, -24, 121, 106, 123, 52, 124, 78, -115, -97, 32, 108, -45, 92, -56, -73, 111, 101, -71, 16, 100, -71, 34, -13, 124, 83, -85, 62, -57, -120, -69, -66, -28, 21, 31, -127, -87, 78, -87, -23, -55, 51, -16, -120, 46, -109, 126, -73, 57, -64, 54, -19, -81, 97, -52, 68, 4, 22, 94, 21, -51, -18, -86, -78, -102, 13, 88, 50, -90, -122, 108, 111, -16, 24, -65, -115, -24, -72, 21, -95, 125, -91, -123, -40, 28, -4, 119, -36, -105, -91, 94, 108, -16, -33, -66, 62, 99, 56, 35, 5, -103, -11, -70, -69, 9, -67, -120, -12, -38, -67, 22, 115, -113, 37, 123, 31, 51, -116, 81, -61, -45, 67, -98, -114, 32, -29, 102, -42};
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
    msg.setTimeStamp(0.0902410933068);
    msg.setSource(15421U);
    msg.setSourceEntity(179U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(56U);
    msg.type = 72U;
    msg.frequency = 246459126U;
    msg.min_range = 13436U;
    msg.max_range = 52134U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.489817919163;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.292741004404;
    tmp_msg_0.beam_height = 0.444000091529;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, -85, 88, 57, 105, -36, -16, -110, 25, 48, -57, 21, -57, -8, 39, 68, -90, 120, 58, -72, 2, -77, -47, 75, 69, -120, -36, -118, -94, -66, -32, -46, 125, 12, 85, -112, -76, -119, -127, 103, -11, -79, 17, -127, 102, -112, -125, -87, 61, -123, 90, -90, -120, -121, -58, 16, 65, 72, -21, 73, -43, 121, -44, -104, -126, 113, -111, 104, -92, 74, 26, 83, -97, 82, -116, -13, -76, -21, -61, -95, 9, -16, 22, -7, 107, -107, 74, 57, -58, -81, 87, 68, 21, 62, -14, 18, 20, -56, 50, 36, 85};
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
    msg.setTimeStamp(0.88965454318);
    msg.setSource(52132U);
    msg.setSourceEntity(93U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(38U);
    msg.type = 223U;
    msg.frequency = 4085473711U;
    msg.min_range = 58189U;
    msg.max_range = 57506U;
    msg.bits_per_point = 2U;
    msg.scale_factor = 0.413724768829;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.60790591548;
    tmp_msg_0.beam_height = 0.250243821912;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {42, 35, 71, -74, -63, -36, 100, 85, 16, 117, -108, -104, -4, 52, 114, -37, 71, -93, -9, 125, -39, 61, 49, 103, -105, -101, -116, 17, 37, -86, -29, -118, -53, 61, 50, -59, 108, 120, 64, -30, 122, 115, -57, 11, -40, 58, 93, 5, 85, -98, -27, 112, -101, 107, -20, 10, 13, 120, -99, -51, 23, -13, -57, -13, 70, 60, 65, 50, -19, -10, 94, -121, -61, -5, -17, -109, 96, -36, -105, 1, -67, -77, -23, 67, -90, -100, 50, -120, 105, 98, -112, 42, 7, -54, 70, 109, 50, -128, 11, 7, 76, -38, 71, 12, 40, -60, 86, -11, -97, 70, -80, 31, -66, -39, -67, 3, -36, 19, 72, 7, 37, -20, -124, 126, 92, -69, 105, 35, 62, 110, 0, -16, 10, -57, -25, 88, -91, 73, -84, -110, 40, -39, 49, 38, 28, -112, 88, -66, -59, -20, -51, -22, 38, 67, -58, -39, 44, 55, -99, -67, -71, 61, -39, -115, -13, -78, 71, -106, -15, 31, -51, -114, -14, 99, -123, 16, -35, 27, 61, -12, 6, 0, -19, 106, -34, 75, 115, 2, -126, 123, 103, -100, -94, -45, 44, 107, 90, 114, -120, -106, -26, 2, -106, -46, -19, 84, -4, 63, 60, 5};
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
    msg.setTimeStamp(0.407193629193);
    msg.setSource(14315U);
    msg.setSourceEntity(131U);
    msg.setDestination(27766U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.226398017631);
    msg.setSource(3043U);
    msg.setSourceEntity(228U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.165787741234);
    msg.setSource(60972U);
    msg.setSourceEntity(138U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.793060587317);
    msg.setSource(16997U);
    msg.setSourceEntity(13U);
    msg.setDestination(56114U);
    msg.setDestinationEntity(197U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.693172781103);
    msg.setSource(50447U);
    msg.setSourceEntity(226U);
    msg.setDestination(43185U);
    msg.setDestinationEntity(170U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.192000705244);
    msg.setSource(41839U);
    msg.setSourceEntity(127U);
    msg.setDestination(35345U);
    msg.setDestinationEntity(105U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.890191303519);
    msg.setSource(11601U);
    msg.setSourceEntity(61U);
    msg.setDestination(17451U);
    msg.setDestinationEntity(3U);
    msg.value = 0.946061569409;
    msg.confidence = 0.338680896374;
    msg.opmodes.assign("IKDZJTVIAXZTLGXAPALQIVBRBPBBIWEDLOWZSOLCPJBARVYSNKIYVJGEJMCZADNEVLPZTCMXYUHKERDFKOQOJWCWAUGHBGOHYXLYPFNZYEQSHPQHWVXRXWCMQJDFRFOVGAJZSPTTDLGPFYJFYDSMLVXSMBNIYGPSRTKEGUHGCMBUMOSNDUFTCNDRT");

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
    msg.setTimeStamp(0.863611370181);
    msg.setSource(28255U);
    msg.setSourceEntity(70U);
    msg.setDestination(29549U);
    msg.setDestinationEntity(124U);
    msg.value = 0.157479381629;
    msg.confidence = 0.540193571078;
    msg.opmodes.assign("FDFRNFXHBSLYIYAZJUJERVXLMGQJDPPZEOZWTYSVGQFNFRZKII");

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
    msg.setTimeStamp(0.0383483909421);
    msg.setSource(51381U);
    msg.setSourceEntity(126U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(39U);
    msg.value = 0.626827242972;
    msg.confidence = 0.672321610692;
    msg.opmodes.assign("CUNNETLLLBAFMYAHVPHMCGHOFWPWWIUTMKTUIBKATPATQIZBZYKGNMNLKCJRABJCSTHSHVOGDIVQFQQLZJILCVYSGDYFNNEGRFSJGPQDIIXMPMWSEZOBPSSRGHVCHNOEJLBDKCCOOJAXUZLOTBFITXMXKCBKMSUVMXJXRZKWPHRROYERVJZNPPYYGBVTEVFEBUWDIJRQADDASFZAXLOUGJAMVWIEDYKGEZNQUPQRZYDLWXQFHF");

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
    msg.setTimeStamp(0.446191771338);
    msg.setSource(13475U);
    msg.setSourceEntity(102U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(179U);
    msg.itow = 2565420729U;
    msg.lat = 0.214353095094;
    msg.lon = 0.754373274419;
    msg.height_ell = 0.62381718314;
    msg.height_sea = 0.570472720808;
    msg.hacc = 0.991022505815;
    msg.vacc = 0.278098872553;
    msg.vel_n = 0.599724993384;
    msg.vel_e = 0.445118207335;
    msg.vel_d = 0.0834530082543;
    msg.speed = 0.722458639043;
    msg.gspeed = 0.240833583153;
    msg.heading = 0.763516709133;
    msg.sacc = 0.923258498879;
    msg.cacc = 0.687022207658;

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
    msg.setTimeStamp(0.281908080636);
    msg.setSource(59449U);
    msg.setSourceEntity(79U);
    msg.setDestination(13330U);
    msg.setDestinationEntity(225U);
    msg.itow = 2656519401U;
    msg.lat = 0.112992120264;
    msg.lon = 0.726045624835;
    msg.height_ell = 0.260413778681;
    msg.height_sea = 0.363887320468;
    msg.hacc = 0.629570038396;
    msg.vacc = 0.239099315159;
    msg.vel_n = 0.360570858598;
    msg.vel_e = 0.876059652833;
    msg.vel_d = 0.795359194324;
    msg.speed = 0.309165882403;
    msg.gspeed = 0.275484729314;
    msg.heading = 0.851967666642;
    msg.sacc = 0.579873619332;
    msg.cacc = 0.0199413422488;

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
    msg.setTimeStamp(0.760418368563);
    msg.setSource(60537U);
    msg.setSourceEntity(162U);
    msg.setDestination(57744U);
    msg.setDestinationEntity(113U);
    msg.itow = 2692489280U;
    msg.lat = 0.726672271425;
    msg.lon = 0.944867076408;
    msg.height_ell = 0.074858387004;
    msg.height_sea = 0.287501200775;
    msg.hacc = 0.00704848060724;
    msg.vacc = 0.112934681196;
    msg.vel_n = 0.374257529066;
    msg.vel_e = 0.157884943391;
    msg.vel_d = 0.433140849715;
    msg.speed = 0.144160151227;
    msg.gspeed = 0.788944354889;
    msg.heading = 0.818173390588;
    msg.sacc = 0.823128685391;
    msg.cacc = 0.364421855285;

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
    msg.setTimeStamp(0.855239997858);
    msg.setSource(32121U);
    msg.setSourceEntity(174U);
    msg.setDestination(24387U);
    msg.setDestinationEntity(234U);
    msg.id = 56U;
    msg.value = 0.85679805336;

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
    msg.setTimeStamp(0.409895308434);
    msg.setSource(53498U);
    msg.setSourceEntity(114U);
    msg.setDestination(2168U);
    msg.setDestinationEntity(187U);
    msg.id = 114U;
    msg.value = 0.0499314113913;

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
    msg.setTimeStamp(0.620228996235);
    msg.setSource(28562U);
    msg.setSourceEntity(227U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(153U);
    msg.id = 10U;
    msg.value = 0.188050489442;

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
    msg.setTimeStamp(0.568795750298);
    msg.setSource(63991U);
    msg.setSourceEntity(185U);
    msg.setDestination(36301U);
    msg.setDestinationEntity(207U);
    msg.x = 0.227619542248;
    msg.y = 0.902828149503;
    msg.z = 0.296124895512;
    msg.phi = 0.749692502851;
    msg.theta = 0.799940993405;
    msg.psi = 0.0687436643766;

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
    msg.setTimeStamp(0.198511894813);
    msg.setSource(18482U);
    msg.setSourceEntity(11U);
    msg.setDestination(59183U);
    msg.setDestinationEntity(92U);
    msg.x = 0.0438678075697;
    msg.y = 0.708882573141;
    msg.z = 0.862450936357;
    msg.phi = 0.896445749068;
    msg.theta = 0.67351393403;
    msg.psi = 0.281125213181;

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
    msg.setTimeStamp(0.0391710004601);
    msg.setSource(12043U);
    msg.setSourceEntity(74U);
    msg.setDestination(50488U);
    msg.setDestinationEntity(155U);
    msg.x = 0.389157707346;
    msg.y = 0.556438595012;
    msg.z = 0.85617224641;
    msg.phi = 0.159414826976;
    msg.theta = 0.718640272984;
    msg.psi = 0.85055385041;

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
    msg.setTimeStamp(0.256982364908);
    msg.setSource(56766U);
    msg.setSourceEntity(174U);
    msg.setDestination(41426U);
    msg.setDestinationEntity(222U);
    msg.beam_width = 0.260795240405;
    msg.beam_height = 0.37233813981;

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
    msg.setTimeStamp(0.628634373747);
    msg.setSource(59454U);
    msg.setSourceEntity(197U);
    msg.setDestination(29568U);
    msg.setDestinationEntity(46U);
    msg.beam_width = 0.974706461785;
    msg.beam_height = 0.906490005107;

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
    msg.setTimeStamp(0.0176144996996);
    msg.setSource(1949U);
    msg.setSourceEntity(137U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(28U);
    msg.beam_width = 0.977204853303;
    msg.beam_height = 0.355877888846;

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
    msg.setTimeStamp(0.88570799951);
    msg.setSource(20961U);
    msg.setSourceEntity(28U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(102U);
    msg.sane = 4U;

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
    msg.setTimeStamp(0.466632796899);
    msg.setSource(36722U);
    msg.setSourceEntity(121U);
    msg.setDestination(55202U);
    msg.setDestinationEntity(207U);
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
    msg.setTimeStamp(0.930138373187);
    msg.setSource(4224U);
    msg.setSourceEntity(53U);
    msg.setDestination(13386U);
    msg.setDestinationEntity(214U);
    msg.sane = 156U;

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
    msg.setTimeStamp(0.327478714481);
    msg.setSource(3801U);
    msg.setSourceEntity(140U);
    msg.setDestination(39388U);
    msg.setDestinationEntity(24U);
    msg.value = 0.765985499055;

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
    msg.setTimeStamp(0.0585499100796);
    msg.setSource(19317U);
    msg.setSourceEntity(6U);
    msg.setDestination(48873U);
    msg.setDestinationEntity(125U);
    msg.value = 0.412272598305;

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
    msg.setTimeStamp(0.778954278088);
    msg.setSource(42569U);
    msg.setSourceEntity(112U);
    msg.setDestination(46809U);
    msg.setDestinationEntity(187U);
    msg.value = 0.479144657704;

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
    msg.setTimeStamp(0.429195405573);
    msg.setSource(16341U);
    msg.setSourceEntity(159U);
    msg.setDestination(12579U);
    msg.setDestinationEntity(92U);
    msg.value = 0.579717078126;

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
    msg.setTimeStamp(0.922958629796);
    msg.setSource(5604U);
    msg.setSourceEntity(104U);
    msg.setDestination(26029U);
    msg.setDestinationEntity(197U);
    msg.value = 0.348377421124;

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
    msg.setTimeStamp(0.587564319538);
    msg.setSource(28499U);
    msg.setSourceEntity(244U);
    msg.setDestination(47278U);
    msg.setDestinationEntity(32U);
    msg.value = 0.287950360801;

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
    msg.setTimeStamp(0.563147008603);
    msg.setSource(59540U);
    msg.setSourceEntity(76U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(17U);
    msg.value = 0.256324507135;

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
    msg.setTimeStamp(0.234837815079);
    msg.setSource(18355U);
    msg.setSourceEntity(214U);
    msg.setDestination(20041U);
    msg.setDestinationEntity(208U);
    msg.value = 0.926880088813;

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
    msg.setTimeStamp(0.0428509656875);
    msg.setSource(13396U);
    msg.setSourceEntity(175U);
    msg.setDestination(18128U);
    msg.setDestinationEntity(86U);
    msg.value = 0.841349791543;

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
    msg.setTimeStamp(0.929292423382);
    msg.setSource(54309U);
    msg.setSourceEntity(229U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(205U);
    msg.value = 0.78326456993;

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
    msg.setTimeStamp(0.753571414297);
    msg.setSource(50241U);
    msg.setSourceEntity(119U);
    msg.setDestination(56636U);
    msg.setDestinationEntity(219U);
    msg.value = 0.498571528081;

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
    msg.setTimeStamp(0.872560051434);
    msg.setSource(34245U);
    msg.setSourceEntity(223U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(5U);
    msg.value = 0.894513844623;

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
    msg.setTimeStamp(0.792397895937);
    msg.setSource(30906U);
    msg.setSourceEntity(15U);
    msg.setDestination(63824U);
    msg.setDestinationEntity(89U);
    msg.value = 0.206065740806;

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
    msg.setTimeStamp(0.364787276212);
    msg.setSource(4762U);
    msg.setSourceEntity(186U);
    msg.setDestination(10325U);
    msg.setDestinationEntity(13U);
    msg.value = 0.32944913667;

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
    msg.setTimeStamp(0.756139844679);
    msg.setSource(60849U);
    msg.setSourceEntity(225U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(112U);
    msg.value = 0.813119685403;

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
    msg.setTimeStamp(0.645342809179);
    msg.setSource(31044U);
    msg.setSourceEntity(201U);
    msg.setDestination(38282U);
    msg.setDestinationEntity(187U);
    msg.value = 0.962617249984;

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
    msg.setTimeStamp(0.855294714933);
    msg.setSource(13613U);
    msg.setSourceEntity(205U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(177U);
    msg.value = 0.622266679464;

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
    msg.setTimeStamp(0.568200448661);
    msg.setSource(40306U);
    msg.setSourceEntity(18U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(125U);
    msg.value = 0.139692288908;

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
    msg.setTimeStamp(0.442771731654);
    msg.setSource(44621U);
    msg.setSourceEntity(246U);
    msg.setDestination(60481U);
    msg.setDestinationEntity(68U);
    msg.value = 0.809934126832;

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
    msg.setTimeStamp(0.484274074352);
    msg.setSource(49156U);
    msg.setSourceEntity(28U);
    msg.setDestination(59821U);
    msg.setDestinationEntity(211U);
    msg.value = 0.133308569361;

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
    msg.setTimeStamp(0.592875787419);
    msg.setSource(1840U);
    msg.setSourceEntity(173U);
    msg.setDestination(5888U);
    msg.setDestinationEntity(90U);
    msg.value = 0.365465670166;

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
    msg.setTimeStamp(0.209115854598);
    msg.setSource(22028U);
    msg.setSourceEntity(6U);
    msg.setDestination(4348U);
    msg.setDestinationEntity(3U);
    msg.value = 0.930681713269;

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
    msg.setTimeStamp(0.260542412865);
    msg.setSource(53390U);
    msg.setSourceEntity(7U);
    msg.setDestination(18380U);
    msg.setDestinationEntity(215U);
    msg.value = 0.562861852017;

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
    msg.setTimeStamp(0.370528770261);
    msg.setSource(62907U);
    msg.setSourceEntity(149U);
    msg.setDestination(4788U);
    msg.setDestinationEntity(217U);
    msg.value = 0.768536630141;

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
    msg.setTimeStamp(0.285161590506);
    msg.setSource(17277U);
    msg.setSourceEntity(247U);
    msg.setDestination(24639U);
    msg.setDestinationEntity(138U);
    msg.validity = 5349U;
    msg.type = 151U;
    msg.tow = 2585279861U;
    msg.base_lat = 0.355116431601;
    msg.base_lon = 0.479244942361;
    msg.base_height = 0.759515734265;
    msg.n = 0.723635667296;
    msg.e = 0.690496436466;
    msg.d = 0.601086895577;
    msg.v_n = 0.812179464292;
    msg.v_e = 0.991680224365;
    msg.v_d = 0.637538586445;
    msg.satellites = 136U;
    msg.iar_hyp = 16106U;
    msg.iar_ratio = 0.0914705860971;

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
    msg.setTimeStamp(0.716126384737);
    msg.setSource(56628U);
    msg.setSourceEntity(4U);
    msg.setDestination(64042U);
    msg.setDestinationEntity(182U);
    msg.validity = 14313U;
    msg.type = 83U;
    msg.tow = 4165542864U;
    msg.base_lat = 0.0207493542306;
    msg.base_lon = 0.0893071510555;
    msg.base_height = 0.98335117123;
    msg.n = 0.993654673412;
    msg.e = 0.266658353078;
    msg.d = 0.957058317204;
    msg.v_n = 0.81845151789;
    msg.v_e = 0.729933208866;
    msg.v_d = 0.97176918096;
    msg.satellites = 139U;
    msg.iar_hyp = 42650U;
    msg.iar_ratio = 0.437698376736;

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
    msg.setTimeStamp(0.816588979361);
    msg.setSource(33364U);
    msg.setSourceEntity(35U);
    msg.setDestination(11463U);
    msg.setDestinationEntity(76U);
    msg.validity = 13350U;
    msg.type = 122U;
    msg.tow = 2242391386U;
    msg.base_lat = 0.993365670068;
    msg.base_lon = 0.509670845077;
    msg.base_height = 0.910268277463;
    msg.n = 0.567020384304;
    msg.e = 0.120538230859;
    msg.d = 0.0692655905418;
    msg.v_n = 0.332075848397;
    msg.v_e = 0.209542710081;
    msg.v_d = 0.52443786875;
    msg.satellites = 247U;
    msg.iar_hyp = 42055U;
    msg.iar_ratio = 0.0311584572704;

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
    msg.setTimeStamp(0.551837664041);
    msg.setSource(14689U);
    msg.setSourceEntity(208U);
    msg.setDestination(16442U);
    msg.setDestinationEntity(77U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.321447044944;
    tmp_msg_0.lon = 0.778773000409;
    tmp_msg_0.height = 0.269666482195;
    tmp_msg_0.x = 0.398253868131;
    tmp_msg_0.y = 0.0497065393389;
    tmp_msg_0.z = 0.661964197042;
    tmp_msg_0.phi = 0.336930260625;
    tmp_msg_0.theta = 0.782133062833;
    tmp_msg_0.psi = 0.225984846892;
    tmp_msg_0.u = 0.667216267738;
    tmp_msg_0.v = 0.421967172645;
    tmp_msg_0.w = 0.43159982706;
    tmp_msg_0.vx = 0.938893564917;
    tmp_msg_0.vy = 0.712071384316;
    tmp_msg_0.vz = 0.346289720482;
    tmp_msg_0.p = 0.141422100221;
    tmp_msg_0.q = 0.427405333818;
    tmp_msg_0.r = 0.609248240086;
    tmp_msg_0.depth = 0.338667198743;
    tmp_msg_0.alt = 0.854114456497;
    msg.state.set(tmp_msg_0);
    msg.type = 77U;

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
    msg.setTimeStamp(0.399486724027);
    msg.setSource(39766U);
    msg.setSourceEntity(15U);
    msg.setDestination(36955U);
    msg.setDestinationEntity(51U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0613714381591;
    tmp_msg_0.lon = 0.343718243324;
    tmp_msg_0.height = 0.49280593267;
    tmp_msg_0.x = 0.332977361797;
    tmp_msg_0.y = 0.940837852591;
    tmp_msg_0.z = 0.237616011152;
    tmp_msg_0.phi = 0.0779135460182;
    tmp_msg_0.theta = 0.0159014901174;
    tmp_msg_0.psi = 0.677845782298;
    tmp_msg_0.u = 0.957180686437;
    tmp_msg_0.v = 0.843443208996;
    tmp_msg_0.w = 0.748017697419;
    tmp_msg_0.vx = 0.037179980567;
    tmp_msg_0.vy = 0.187952854533;
    tmp_msg_0.vz = 0.146269786575;
    tmp_msg_0.p = 0.728203389407;
    tmp_msg_0.q = 0.837973906137;
    tmp_msg_0.r = 0.634219325794;
    tmp_msg_0.depth = 0.48848895047;
    tmp_msg_0.alt = 0.969771561921;
    msg.state.set(tmp_msg_0);
    msg.type = 235U;

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
    msg.setTimeStamp(0.670561901315);
    msg.setSource(22140U);
    msg.setSourceEntity(224U);
    msg.setDestination(63942U);
    msg.setDestinationEntity(11U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.860488481863;
    tmp_msg_0.lon = 0.937124035024;
    tmp_msg_0.height = 0.558095256944;
    tmp_msg_0.x = 0.308264316543;
    tmp_msg_0.y = 0.696644515979;
    tmp_msg_0.z = 0.313666146649;
    tmp_msg_0.phi = 0.430879567498;
    tmp_msg_0.theta = 0.690725820463;
    tmp_msg_0.psi = 0.0965883626263;
    tmp_msg_0.u = 0.126283416476;
    tmp_msg_0.v = 0.258387105241;
    tmp_msg_0.w = 0.679061487109;
    tmp_msg_0.vx = 0.258773351344;
    tmp_msg_0.vy = 0.40160503384;
    tmp_msg_0.vz = 0.841267329004;
    tmp_msg_0.p = 0.278219708686;
    tmp_msg_0.q = 0.163776683147;
    tmp_msg_0.r = 0.0937080583766;
    tmp_msg_0.depth = 0.537192171449;
    tmp_msg_0.alt = 0.0238817606978;
    msg.state.set(tmp_msg_0);
    msg.type = 207U;

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
    msg.setTimeStamp(0.278659946453);
    msg.setSource(47425U);
    msg.setSourceEntity(154U);
    msg.setDestination(46940U);
    msg.setDestinationEntity(65U);
    msg.value = 0.296751228487;

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
    msg.setTimeStamp(0.826759072569);
    msg.setSource(11028U);
    msg.setSourceEntity(123U);
    msg.setDestination(50177U);
    msg.setDestinationEntity(8U);
    msg.value = 0.907684591387;

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
    msg.setTimeStamp(0.568804378164);
    msg.setSource(17763U);
    msg.setSourceEntity(158U);
    msg.setDestination(23100U);
    msg.setDestinationEntity(14U);
    msg.value = 0.879790533052;

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
    msg.setTimeStamp(0.0176402473364);
    msg.setSource(65285U);
    msg.setSourceEntity(33U);
    msg.setDestination(29223U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0296398482182;

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
    msg.setTimeStamp(0.18428505549);
    msg.setSource(61868U);
    msg.setSourceEntity(55U);
    msg.setDestination(55835U);
    msg.setDestinationEntity(195U);
    msg.value = 0.579313691729;

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
    msg.setTimeStamp(0.841409293072);
    msg.setSource(13339U);
    msg.setSourceEntity(167U);
    msg.setDestination(40155U);
    msg.setDestinationEntity(180U);
    msg.value = 0.701619706251;

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
    msg.setTimeStamp(0.0542464436957);
    msg.setSource(18643U);
    msg.setSourceEntity(32U);
    msg.setDestination(48689U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0509996713416;

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
    msg.setTimeStamp(0.483092414646);
    msg.setSource(23394U);
    msg.setSourceEntity(145U);
    msg.setDestination(42985U);
    msg.setDestinationEntity(159U);
    msg.value = 0.368833279486;

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
    msg.setTimeStamp(0.0461590181157);
    msg.setSource(7250U);
    msg.setSourceEntity(31U);
    msg.setDestination(17854U);
    msg.setDestinationEntity(233U);
    msg.value = 0.252224832107;

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
    msg.setTimeStamp(0.710658239905);
    msg.setSource(254U);
    msg.setSourceEntity(33U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(132U);
    msg.value = 0.297673718244;

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
    msg.setTimeStamp(0.0546590863268);
    msg.setSource(29359U);
    msg.setSourceEntity(93U);
    msg.setDestination(61551U);
    msg.setDestinationEntity(247U);
    msg.value = 0.176335321842;

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
    msg.setTimeStamp(0.741650003977);
    msg.setSource(52283U);
    msg.setSourceEntity(39U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(84U);
    msg.value = 0.598715321502;

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
    msg.setTimeStamp(0.0424432508748);
    msg.setSource(27511U);
    msg.setSourceEntity(200U);
    msg.setDestination(36434U);
    msg.setDestinationEntity(65U);
    msg.value = 0.058166556047;

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
    msg.setTimeStamp(0.798349203569);
    msg.setSource(20725U);
    msg.setSourceEntity(123U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(83U);
    msg.value = 0.378427277432;

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
    msg.setTimeStamp(0.570563517698);
    msg.setSource(17683U);
    msg.setSourceEntity(96U);
    msg.setDestination(23192U);
    msg.setDestinationEntity(189U);
    msg.value = 0.0909092149818;

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
    msg.setTimeStamp(0.283459168184);
    msg.setSource(34081U);
    msg.setSourceEntity(178U);
    msg.setDestination(38206U);
    msg.setDestinationEntity(241U);
    msg.id = 169U;
    msg.zoom = 186U;
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
    msg.setTimeStamp(0.978455723681);
    msg.setSource(54590U);
    msg.setSourceEntity(97U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(104U);
    msg.id = 39U;
    msg.zoom = 160U;
    msg.action = 80U;

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
    msg.setTimeStamp(0.891542086025);
    msg.setSource(22673U);
    msg.setSourceEntity(51U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(66U);
    msg.id = 206U;
    msg.zoom = 90U;
    msg.action = 178U;

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
    msg.setTimeStamp(0.362659388414);
    msg.setSource(63448U);
    msg.setSourceEntity(214U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(218U);
    msg.id = 218U;
    msg.value = 0.503638148364;

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
    msg.setTimeStamp(0.344065156901);
    msg.setSource(33640U);
    msg.setSourceEntity(102U);
    msg.setDestination(13110U);
    msg.setDestinationEntity(100U);
    msg.id = 98U;
    msg.value = 0.0932303364114;

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
    msg.setTimeStamp(0.952360985469);
    msg.setSource(6744U);
    msg.setSourceEntity(17U);
    msg.setDestination(35395U);
    msg.setDestinationEntity(166U);
    msg.id = 235U;
    msg.value = 0.0848704564744;

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
    msg.setTimeStamp(0.0285863380477);
    msg.setSource(12698U);
    msg.setSourceEntity(163U);
    msg.setDestination(56510U);
    msg.setDestinationEntity(27U);
    msg.id = 198U;
    msg.value = 0.119811860696;

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
    msg.setTimeStamp(0.543385160322);
    msg.setSource(40478U);
    msg.setSourceEntity(234U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(162U);
    msg.id = 14U;
    msg.value = 0.570037562864;

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
    msg.setTimeStamp(0.180031441072);
    msg.setSource(32549U);
    msg.setSourceEntity(21U);
    msg.setDestination(1174U);
    msg.setDestinationEntity(142U);
    msg.id = 71U;
    msg.value = 0.282710057434;

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
    msg.setTimeStamp(0.28576726484);
    msg.setSource(52930U);
    msg.setSourceEntity(207U);
    msg.setDestination(38795U);
    msg.setDestinationEntity(174U);
    msg.id = 225U;
    msg.angle = 0.666898439122;

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
    msg.setTimeStamp(0.0813191157053);
    msg.setSource(49768U);
    msg.setSourceEntity(235U);
    msg.setDestination(21774U);
    msg.setDestinationEntity(207U);
    msg.id = 7U;
    msg.angle = 0.388047243386;

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
    msg.setTimeStamp(0.784458351901);
    msg.setSource(30339U);
    msg.setSourceEntity(138U);
    msg.setDestination(11979U);
    msg.setDestinationEntity(173U);
    msg.id = 213U;
    msg.angle = 0.251961754753;

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
    msg.setTimeStamp(0.621992724274);
    msg.setSource(6005U);
    msg.setSourceEntity(125U);
    msg.setDestination(52430U);
    msg.setDestinationEntity(6U);
    msg.op = 151U;
    msg.actions.assign("EYXCNTWQILSOFGFQWNJPYPPWULAWKRDWPDTNVSDUDONDVKUKBFYMTPNSEYRRBBJUZWHLRZPKQHANWGSOXAQGIQDBQHGWNECRYXDTMNEAFPGCGCMQRZLVKXMIBCIALSJMNIDCBUSTGHVMEERXHEAGHDBPJTTKFMYZIZU");

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
    msg.setTimeStamp(0.212724919748);
    msg.setSource(48998U);
    msg.setSourceEntity(226U);
    msg.setDestination(63020U);
    msg.setDestinationEntity(37U);
    msg.op = 31U;
    msg.actions.assign("MYGOAVVLQLPDITDUNUHJUGMHPRUROJMLIFWRKDPHLPJBYAWCNNXJBROAAEWKMISIQFIZEOFFIQJEPMWCOSDIFDBSJDUHCKVJOCSSHZ");

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
    msg.setTimeStamp(0.66369015225);
    msg.setSource(3310U);
    msg.setSourceEntity(60U);
    msg.setDestination(40425U);
    msg.setDestinationEntity(116U);
    msg.op = 214U;
    msg.actions.assign("SCJGHYNPUJIQDWKTVOBTWDEJODNREXTKHKKSTBZOWWRY");

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
    msg.setTimeStamp(0.046954142526);
    msg.setSource(105U);
    msg.setSourceEntity(107U);
    msg.setDestination(64008U);
    msg.setDestinationEntity(44U);
    msg.actions.assign("GWAFKJBTHDYVUMINXZRJFHDQZFKPRVVJZSDKFRXCNMYYUG");

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
    msg.setTimeStamp(0.306727697776);
    msg.setSource(52950U);
    msg.setSourceEntity(170U);
    msg.setDestination(19389U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("EREQFWGRXBIPIBXTSRLTYGKCSWVHWZYUBNVUJBYQZSQJRIVOCULRAUCZFPWBHMNNUQQXWIIJDLQVYNCIOCILKTAFAVBDEMAKXYWAMNYUGSIDMAPVZTCYOXLMKDPJUNFDJFPEUHDFAOJMOXZORSLFTCBVOXLNGEYEDAGJAVDQLIFFVHRTVHLDWEKKSHDJICRGMTYBEQ");

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
    msg.setTimeStamp(0.301921742146);
    msg.setSource(19806U);
    msg.setSourceEntity(245U);
    msg.setDestination(32953U);
    msg.setDestinationEntity(202U);
    msg.actions.assign("SUDJENZGWPRNFUPMFVQJEQUZVCFQDAKVTAZSPXJPIOUMEWYVHFKRTISRZKQTRQYDVMXJGHYHKTGCRROULCIBEMYBPXUESUJNHHCIZMCD");

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
    msg.setTimeStamp(0.546915596309);
    msg.setSource(44243U);
    msg.setSourceEntity(216U);
    msg.setDestination(55199U);
    msg.setDestinationEntity(30U);
    msg.button = 253U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.36070609156);
    msg.setSource(1323U);
    msg.setSourceEntity(219U);
    msg.setDestination(48521U);
    msg.setDestinationEntity(73U);
    msg.button = 118U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.760602345028);
    msg.setSource(18133U);
    msg.setSourceEntity(162U);
    msg.setDestination(48508U);
    msg.setDestinationEntity(34U);
    msg.button = 235U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.764308035348);
    msg.setSource(14336U);
    msg.setSourceEntity(248U);
    msg.setDestination(1220U);
    msg.setDestinationEntity(48U);
    msg.op = 226U;
    msg.text.assign("SBIGDKEDIFPUMXIJGTZPRENNPTPOJKUCTLIJHSS");

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
    msg.setTimeStamp(0.527729033337);
    msg.setSource(21852U);
    msg.setSourceEntity(208U);
    msg.setDestination(50962U);
    msg.setDestinationEntity(184U);
    msg.op = 189U;
    msg.text.assign("NOZOTNGVLOTHILNQYSCBUAFLDGLPRSWRLZJMNTUJZFLAYZSKMQJDUASVLISVYBABNJRHJWLTKYQKQFMCCGRMBJRYECEXAQXDWTQNMXESXOCOZUJWFFTMXXHETHYEMZKIGHGGPIEOFVIHHDHBWCDXDEUWDKGQVWZSHDCKOZAWXIPPIABBJEUANKOPVGYONGMCOGSZKTFQZLEFNEBJXRUPPLAQFSIRTKMBPXFUVYRCRIVWWYIVAJSD");

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
    msg.setTimeStamp(0.213318715309);
    msg.setSource(23670U);
    msg.setSourceEntity(4U);
    msg.setDestination(12782U);
    msg.setDestinationEntity(122U);
    msg.op = 69U;
    msg.text.assign("BNOYQJKTWMPIYVQOSELE");

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
    msg.setTimeStamp(0.140932190475);
    msg.setSource(2887U);
    msg.setSourceEntity(115U);
    msg.setDestination(64844U);
    msg.setDestinationEntity(4U);
    msg.op = 54U;
    msg.time_remain = 0.358075848953;
    msg.sched_time = 0.915585581207;

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
    msg.setTimeStamp(0.914940136408);
    msg.setSource(45512U);
    msg.setSourceEntity(210U);
    msg.setDestination(56701U);
    msg.setDestinationEntity(180U);
    msg.op = 177U;
    msg.time_remain = 0.0784715011236;
    msg.sched_time = 0.526440470394;

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
    msg.setTimeStamp(0.954778243117);
    msg.setSource(38835U);
    msg.setSourceEntity(20U);
    msg.setDestination(21225U);
    msg.setDestinationEntity(253U);
    msg.op = 41U;
    msg.time_remain = 0.898659032299;
    msg.sched_time = 0.307590862499;

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
    msg.setTimeStamp(0.815278138406);
    msg.setSource(47046U);
    msg.setSourceEntity(82U);
    msg.setDestination(52742U);
    msg.setDestinationEntity(40U);
    msg.name.assign("BIJPTXQVMFZKMTBXLXFNZQGBTODPSQREOELUOEFWTQQRACGBNUBRHSCYTPMDUQOKLOFDTDJAJCLWANRRGSAKMYWZLZAZKUNXFWTFTVUUMVGAXQZMRWG");
    msg.op = 238U;
    msg.sched_time = 0.753968028174;

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
    msg.setTimeStamp(0.867737888109);
    msg.setSource(36677U);
    msg.setSourceEntity(142U);
    msg.setDestination(8582U);
    msg.setDestinationEntity(251U);
    msg.name.assign("WJNZVTUMWSVQHIGNZKZLCRJJMNYLYOYXOBWWJMZDAXBYGJEIAUBGUBXRBPLVSYCJWVKV");
    msg.op = 170U;
    msg.sched_time = 0.383126071813;

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
    msg.setTimeStamp(0.727599568706);
    msg.setSource(39686U);
    msg.setSourceEntity(56U);
    msg.setDestination(64967U);
    msg.setDestinationEntity(98U);
    msg.name.assign("CITQDSKZLCIYCQSUZGTWXOFBKFBAWAPWPLYFHQIEKJFJNCIRHJKBTPXUOVWOXXBZERYCARKDRUVXYGYNFLPSDZEBULPLWRNXQSLEANHBBQZKYXMVISGORTXDPGEGQLBUCNMJMSGDVYYDIQV");
    msg.op = 68U;
    msg.sched_time = 0.199531356281;

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
    msg.setTimeStamp(0.200191831231);
    msg.setSource(65346U);
    msg.setSourceEntity(234U);
    msg.setDestination(41768U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.388814792817);
    msg.setSource(51142U);
    msg.setSourceEntity(239U);
    msg.setDestination(64698U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.394688415149);
    msg.setSource(16205U);
    msg.setSourceEntity(8U);
    msg.setDestination(42789U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.188350398487);
    msg.setSource(12123U);
    msg.setSourceEntity(94U);
    msg.setDestination(42183U);
    msg.setDestinationEntity(220U);
    msg.name.assign("DRZFVCGSNQWXPBZRYMJIONTKBDJOATSKIVEPRVHHYZNTAJMJXEVFLPTAZWCOZFPOYFYNTTFYFIGLDOXDPMRBSDSJOMSNDEBXQCCNGWRARUMITOGQVWXPBJUHJXFPCBIWGOYNDJZLNBVZSEMTHFBGCWPIHLSIVNQQCZLSQVUCXEEKMCDKEKWCQXFEPOQAFAMKKGQKOKDWZWYRRUWZKUVHLSIUYEBUMTVJGEMALH");
    msg.state = 166U;

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
    msg.setTimeStamp(0.606611588062);
    msg.setSource(53555U);
    msg.setSourceEntity(27U);
    msg.setDestination(13874U);
    msg.setDestinationEntity(147U);
    msg.name.assign("UDWGLPJJYRIVXUUCMLBQEQSQIDMAGTPPPDNHWPZIPMCOEWAFAEKXWHDMLIIXWGXTJWSOWKIVOZGZJJDYONRIJCLQBYGUOFBFANEDTATHZWFELXZNTNUCVSRJXLTDCZFALZOSHMELCMHEAUSRXBAKIOQFGEEVVVSQXKMZRUYBNYGFMSTAGQYURVINHRUQQPJFTVODHNVBYYYUPRHLZWTAJGSKS");
    msg.state = 9U;

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
    msg.setTimeStamp(0.892900839363);
    msg.setSource(46191U);
    msg.setSourceEntity(8U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(157U);
    msg.name.assign("BYXMSLOLATYURFKDWVQMGEGLNEXDTSTYSBMAQTTVMLJWHGCXQMBJRCZAQVMUAGJECLIBZENVLULOHVREYTMCPIKRPOFDPPWRHHOUZOG");
    msg.state = 44U;

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
    msg.setTimeStamp(0.871004503975);
    msg.setSource(47827U);
    msg.setSourceEntity(2U);
    msg.setDestination(32020U);
    msg.setDestinationEntity(21U);
    msg.name.assign("MHHSKYWPVPABROUDLMRZNJYXWETRXURFLZQEQKFUMWZLYNHDJYZWYJVFGTGEAIVZDBKIRMZNJNZAMJKGGFINOOJWRQCQQZFQEIWJCEDCUFGKCLADOTYIAOVBXONOUUXRJWEVXFGGULEBRULNKKDSYBPHRCYZKCGMPSSHPWMWTTDFKKNGYTUFVEPIXQXMSQHDNIGAETEDIFHSLMDBBPVCCIRS");
    msg.value = 3U;

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
    msg.setTimeStamp(0.124757010718);
    msg.setSource(60712U);
    msg.setSourceEntity(180U);
    msg.setDestination(42158U);
    msg.setDestinationEntity(149U);
    msg.name.assign("UPUMPZYIKTGIGHMYZBEJSIDWW");
    msg.value = 253U;

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
    msg.setTimeStamp(0.0594583977383);
    msg.setSource(64731U);
    msg.setSourceEntity(241U);
    msg.setDestination(40853U);
    msg.setDestinationEntity(21U);
    msg.name.assign("QTLGGMLNMYMWNXGZOPGSYRLVWFIWJPTPOUMUEBRIVVBSHIQDYOPHZYWIDVXRIDQPCNVQUARLEUHFUQCYQAKELWSYYDKRKCCCDSSZDXSRTAJKNIFUTKTFZARRCITGANFLODLRXDFZPJEQESBOJMKO");
    msg.value = 164U;

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
    msg.setTimeStamp(0.965945442156);
    msg.setSource(18660U);
    msg.setSourceEntity(203U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(104U);
    msg.name.assign("QEBRLCJJRYXDYFWJRETUOASSCKOYSTPUMIWONUQQIJSQUUYSLSBKSWRDBOFOBANRUXWHDGEAPXNVTGVIEJHAMBDUMFEDKGCSMLGHHTCCMXZYBXTDUKYZO");

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
    msg.setTimeStamp(0.656416785019);
    msg.setSource(2955U);
    msg.setSourceEntity(210U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(47U);
    msg.name.assign("HZTJXKMWFUECIAWPHBQQAJHJLNANCKAMDFOFUNJQQCGYYZ");

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
    msg.setTimeStamp(0.861248105585);
    msg.setSource(56673U);
    msg.setSourceEntity(202U);
    msg.setDestination(11040U);
    msg.setDestinationEntity(191U);
    msg.name.assign("EJLMBYSSBDMEOXZHFDWYWKENRLRZJLJVHKFVRSJYOCPGIUPAZWUIWVNGFACGROMZMFONKUDTTPEDSVWTDVCYDGSXIEIKIFWPENUELXWFNQCBSIQNGTBIHYYOFNRRXZPSLSSJUOKGMAABHHTDCLOVLGXOYEHEDOXFCBWDCQIPYRHUMPKVBUVMVJMJUTAXAGUKIJKACWXAZGFTZQRNUZMQEHPPZBKLAMIBJRXTOW");

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
    msg.setTimeStamp(0.255506961688);
    msg.setSource(40902U);
    msg.setSourceEntity(123U);
    msg.setDestination(11173U);
    msg.setDestinationEntity(64U);
    msg.name.assign("XGGNOQBREUYDMAWWXDHMJOIQHKRXOSSCBMZRKQQBYTFPGNUJXOMTALHARMP");
    msg.value = 186U;

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
    msg.setTimeStamp(0.816019788489);
    msg.setSource(3750U);
    msg.setSourceEntity(243U);
    msg.setDestination(61136U);
    msg.setDestinationEntity(22U);
    msg.name.assign("KMFKXDLLCOGHRPMLTIMGQNWWCNGSZIBSELPORSFJDXJQMVSTFJTATAYWDKDZIVKGZ");
    msg.value = 65U;

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
    msg.setTimeStamp(0.0264894724112);
    msg.setSource(19320U);
    msg.setSourceEntity(0U);
    msg.setDestination(60328U);
    msg.setDestinationEntity(146U);
    msg.name.assign("OSNEJAEIZQKRKYPRANUALWZCOROFNQHXZDSYEVFKIQQAAWEHEFMVCWDGBDNFJCAISSXEHNQQMFPTUKILVLJDBDDRUFYWKMVTUSKZLLWRSIFMDMZGNJGPOQCXAKCNVLGBEYXSOFGODNXWXHMCJICWYBZUBLQUYBVBVETUKIRHVMYWSWBUMJZTGAPHDOPAG");
    msg.value = 196U;

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
    msg.setTimeStamp(0.32241783286);
    msg.setSource(26424U);
    msg.setSourceEntity(73U);
    msg.setDestination(52134U);
    msg.setDestinationEntity(115U);
    msg.id = 6U;
    msg.period = 3773618801U;
    msg.duty_cycle = 3721656310U;

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
    msg.setTimeStamp(0.00390099047225);
    msg.setSource(51386U);
    msg.setSourceEntity(23U);
    msg.setDestination(43720U);
    msg.setDestinationEntity(219U);
    msg.id = 154U;
    msg.period = 3121433288U;
    msg.duty_cycle = 2674578626U;

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
    msg.setTimeStamp(0.662339438394);
    msg.setSource(18161U);
    msg.setSourceEntity(25U);
    msg.setDestination(29207U);
    msg.setDestinationEntity(204U);
    msg.id = 39U;
    msg.period = 531889024U;
    msg.duty_cycle = 1475997595U;

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
    msg.setTimeStamp(0.208511444615);
    msg.setSource(443U);
    msg.setSourceEntity(221U);
    msg.setDestination(30573U);
    msg.setDestinationEntity(130U);
    msg.id = 196U;
    msg.period = 4126477621U;
    msg.duty_cycle = 4196329084U;

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
    msg.setTimeStamp(0.899039830823);
    msg.setSource(5080U);
    msg.setSourceEntity(99U);
    msg.setDestination(1779U);
    msg.setDestinationEntity(181U);
    msg.id = 216U;
    msg.period = 268493609U;
    msg.duty_cycle = 4031385970U;

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
    msg.setTimeStamp(0.495702902299);
    msg.setSource(46986U);
    msg.setSourceEntity(89U);
    msg.setDestination(28271U);
    msg.setDestinationEntity(242U);
    msg.id = 203U;
    msg.period = 2818539882U;
    msg.duty_cycle = 1707616536U;

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
    msg.setTimeStamp(0.0922425322645);
    msg.setSource(59413U);
    msg.setSourceEntity(128U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.535649913768;
    msg.lon = 0.747719691457;
    msg.height = 0.243343202129;
    msg.x = 0.441093342625;
    msg.y = 0.250463296253;
    msg.z = 0.82281148628;
    msg.phi = 0.0225776555528;
    msg.theta = 0.848618854722;
    msg.psi = 0.697266470999;
    msg.u = 0.0234794304733;
    msg.v = 0.523110476965;
    msg.w = 0.893995272943;
    msg.vx = 0.129108515459;
    msg.vy = 0.444468042309;
    msg.vz = 0.665812538423;
    msg.p = 0.396714017589;
    msg.q = 0.525618023825;
    msg.r = 0.76517568897;
    msg.depth = 0.27930589629;
    msg.alt = 0.187601406029;

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
    msg.setTimeStamp(0.272249895449);
    msg.setSource(25258U);
    msg.setSourceEntity(89U);
    msg.setDestination(46925U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.739189561825;
    msg.lon = 0.81817088185;
    msg.height = 0.744323623199;
    msg.x = 0.364973733421;
    msg.y = 0.464653821617;
    msg.z = 0.914815644695;
    msg.phi = 0.154670755427;
    msg.theta = 0.343383259362;
    msg.psi = 0.924723026225;
    msg.u = 0.393659403224;
    msg.v = 0.625557124313;
    msg.w = 0.0704273022408;
    msg.vx = 0.74057745194;
    msg.vy = 0.362666064364;
    msg.vz = 0.93683224507;
    msg.p = 0.591931572753;
    msg.q = 0.963531015055;
    msg.r = 0.51277903;
    msg.depth = 0.610245191641;
    msg.alt = 0.529428181533;

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
    msg.setTimeStamp(0.583467783472);
    msg.setSource(37152U);
    msg.setSourceEntity(162U);
    msg.setDestination(55967U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.24651592543;
    msg.lon = 0.126569914326;
    msg.height = 0.774102397224;
    msg.x = 0.658739149587;
    msg.y = 0.852725723207;
    msg.z = 0.364386494043;
    msg.phi = 0.451965281675;
    msg.theta = 0.765142204377;
    msg.psi = 0.0186755894159;
    msg.u = 0.94623771101;
    msg.v = 0.0756103279611;
    msg.w = 0.750683556163;
    msg.vx = 0.997698073227;
    msg.vy = 0.337479524223;
    msg.vz = 0.995314946059;
    msg.p = 0.198396513749;
    msg.q = 0.19856321734;
    msg.r = 0.812334442112;
    msg.depth = 0.823120137031;
    msg.alt = 0.0271931670586;

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
    msg.setTimeStamp(0.846140982446);
    msg.setSource(9466U);
    msg.setSourceEntity(133U);
    msg.setDestination(17361U);
    msg.setDestinationEntity(155U);
    msg.x = 0.558140317572;
    msg.y = 0.139483835789;
    msg.z = 0.989502197654;

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
    msg.setTimeStamp(0.782321929062);
    msg.setSource(57395U);
    msg.setSourceEntity(16U);
    msg.setDestination(58822U);
    msg.setDestinationEntity(147U);
    msg.x = 0.413801324275;
    msg.y = 0.556917151873;
    msg.z = 0.548421003357;

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
    msg.setTimeStamp(0.309347031274);
    msg.setSource(44165U);
    msg.setSourceEntity(114U);
    msg.setDestination(6351U);
    msg.setDestinationEntity(198U);
    msg.x = 0.797880972142;
    msg.y = 0.853961416174;
    msg.z = 0.323800697173;

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
    msg.setTimeStamp(0.628478573448);
    msg.setSource(38402U);
    msg.setSourceEntity(66U);
    msg.setDestination(1175U);
    msg.setDestinationEntity(153U);
    msg.value = 0.496445063285;

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
    msg.setTimeStamp(0.385778628119);
    msg.setSource(39430U);
    msg.setSourceEntity(178U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(91U);
    msg.value = 0.295569847796;

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
    msg.setTimeStamp(0.0116733452857);
    msg.setSource(55763U);
    msg.setSourceEntity(80U);
    msg.setDestination(53572U);
    msg.setDestinationEntity(150U);
    msg.value = 0.998972417448;

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
    msg.setTimeStamp(0.64896831784);
    msg.setSource(51219U);
    msg.setSourceEntity(212U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(236U);
    msg.value = 0.163837304399;

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
    msg.setTimeStamp(0.501981334214);
    msg.setSource(39214U);
    msg.setSourceEntity(152U);
    msg.setDestination(23049U);
    msg.setDestinationEntity(40U);
    msg.value = 0.41057695506;

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
    msg.setTimeStamp(0.0590562124336);
    msg.setSource(62206U);
    msg.setSourceEntity(26U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(76U);
    msg.value = 0.362751565296;

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
    msg.setTimeStamp(0.643609742323);
    msg.setSource(16135U);
    msg.setSourceEntity(211U);
    msg.setDestination(28096U);
    msg.setDestinationEntity(60U);
    msg.x = 0.270531954444;
    msg.y = 0.701141686045;
    msg.z = 0.909648590083;
    msg.phi = 0.693020720124;
    msg.theta = 0.88034144345;
    msg.psi = 0.462072786439;
    msg.p = 0.881402730205;
    msg.q = 0.829035153341;
    msg.r = 0.334554863738;
    msg.u = 0.947048194347;
    msg.v = 0.632136604587;
    msg.w = 0.648719249013;
    msg.bias_psi = 0.213728234311;
    msg.bias_r = 0.575138228019;

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
    msg.setTimeStamp(0.472739699021);
    msg.setSource(6690U);
    msg.setSourceEntity(11U);
    msg.setDestination(772U);
    msg.setDestinationEntity(200U);
    msg.x = 0.284516149618;
    msg.y = 0.44595137904;
    msg.z = 0.420383233526;
    msg.phi = 0.40731134764;
    msg.theta = 0.213466208043;
    msg.psi = 0.849020887666;
    msg.p = 0.0967635557623;
    msg.q = 0.00536209872421;
    msg.r = 0.689380908142;
    msg.u = 0.0171118775252;
    msg.v = 0.349201151819;
    msg.w = 0.17412386131;
    msg.bias_psi = 0.512552555541;
    msg.bias_r = 0.574104654266;

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
    msg.setTimeStamp(0.504969776363);
    msg.setSource(14268U);
    msg.setSourceEntity(10U);
    msg.setDestination(31909U);
    msg.setDestinationEntity(151U);
    msg.x = 0.951014322715;
    msg.y = 0.693558151216;
    msg.z = 0.358245946968;
    msg.phi = 0.555648351379;
    msg.theta = 0.696298581959;
    msg.psi = 0.0595682870499;
    msg.p = 0.138732260115;
    msg.q = 0.801706854907;
    msg.r = 0.122020948597;
    msg.u = 0.208112735111;
    msg.v = 0.908157449741;
    msg.w = 0.63873396591;
    msg.bias_psi = 0.0279468455997;
    msg.bias_r = 0.669806955299;

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
    msg.setTimeStamp(0.222007353922);
    msg.setSource(35805U);
    msg.setSourceEntity(20U);
    msg.setDestination(57556U);
    msg.setDestinationEntity(72U);
    msg.bias_psi = 0.859805782727;
    msg.bias_r = 0.335669466199;
    msg.cog = 0.802275518652;
    msg.cyaw = 0.492914750869;
    msg.lbl_rej_level = 0.988637952649;
    msg.gps_rej_level = 0.532072699399;
    msg.custom_x = 0.469296756373;
    msg.custom_y = 0.147733870771;
    msg.custom_z = 0.459969249908;

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
    msg.setTimeStamp(0.268194695708);
    msg.setSource(4582U);
    msg.setSourceEntity(187U);
    msg.setDestination(58258U);
    msg.setDestinationEntity(238U);
    msg.bias_psi = 0.762526818767;
    msg.bias_r = 0.251942624793;
    msg.cog = 0.186020223874;
    msg.cyaw = 0.369080088097;
    msg.lbl_rej_level = 0.263542380185;
    msg.gps_rej_level = 0.596358234576;
    msg.custom_x = 0.387427620054;
    msg.custom_y = 0.650331744541;
    msg.custom_z = 0.480109413459;

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
    msg.setTimeStamp(0.368948796783);
    msg.setSource(56964U);
    msg.setSourceEntity(70U);
    msg.setDestination(56118U);
    msg.setDestinationEntity(134U);
    msg.bias_psi = 0.224477053169;
    msg.bias_r = 0.821953949925;
    msg.cog = 0.0673730161523;
    msg.cyaw = 0.0639923515751;
    msg.lbl_rej_level = 0.664845601669;
    msg.gps_rej_level = 0.648592081333;
    msg.custom_x = 0.666341162436;
    msg.custom_y = 0.88290584172;
    msg.custom_z = 0.432412040608;

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
    msg.setTimeStamp(0.0624254334814);
    msg.setSource(4672U);
    msg.setSourceEntity(38U);
    msg.setDestination(63082U);
    msg.setDestinationEntity(24U);
    msg.utc_time = 0.0473904062551;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.868972098261);
    msg.setSource(33057U);
    msg.setSourceEntity(24U);
    msg.setDestination(538U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.124084512339;
    msg.reason = 129U;

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
    msg.setTimeStamp(0.360269605632);
    msg.setSource(48831U);
    msg.setSourceEntity(80U);
    msg.setDestination(53482U);
    msg.setDestinationEntity(110U);
    msg.utc_time = 0.302848309303;
    msg.reason = 69U;

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
    msg.setTimeStamp(0.0434136808675);
    msg.setSource(18772U);
    msg.setSourceEntity(14U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(138U);
    msg.id = 178U;
    msg.range = 0.261084325334;
    msg.acceptance = 3U;

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
    msg.setTimeStamp(0.536873349562);
    msg.setSource(26528U);
    msg.setSourceEntity(85U);
    msg.setDestination(17868U);
    msg.setDestinationEntity(26U);
    msg.id = 31U;
    msg.range = 0.637513480904;
    msg.acceptance = 176U;

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
    msg.setTimeStamp(0.499580090274);
    msg.setSource(20388U);
    msg.setSourceEntity(191U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(229U);
    msg.id = 184U;
    msg.range = 0.732713750958;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.257807674401);
    msg.setSource(3184U);
    msg.setSourceEntity(194U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(162U);
    msg.type = 150U;
    msg.reason = 69U;
    msg.value = 0.413256188208;
    msg.timestep = 0.0854621372545;

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
    msg.setTimeStamp(0.0254713106467);
    msg.setSource(29694U);
    msg.setSourceEntity(213U);
    msg.setDestination(5588U);
    msg.setDestinationEntity(186U);
    msg.type = 119U;
    msg.reason = 196U;
    msg.value = 0.316455302393;
    msg.timestep = 0.662677047733;

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
    msg.setTimeStamp(0.742741104635);
    msg.setSource(7038U);
    msg.setSourceEntity(234U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(1U);
    msg.type = 144U;
    msg.reason = 158U;
    msg.value = 0.502544294946;
    msg.timestep = 0.579333263669;

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
    msg.setTimeStamp(0.495220808892);
    msg.setSource(30703U);
    msg.setSourceEntity(88U);
    msg.setDestination(56108U);
    msg.setDestinationEntity(57U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QPYYWQPHZYCKVMLAMGJGTDKZNOCKKMKCAPAHOGGLEIBDTLZMFEHD");
    tmp_msg_0.lat = 0.667470041459;
    tmp_msg_0.lon = 0.326350539919;
    tmp_msg_0.depth = 0.322230149044;
    tmp_msg_0.query_channel = 219U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 38U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.516927373919;
    msg.y = 0.842107687808;
    msg.var_x = 0.73406841399;
    msg.var_y = 0.191205664474;
    msg.distance = 0.600621131154;

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
    msg.setTimeStamp(0.996369171175);
    msg.setSource(16705U);
    msg.setSourceEntity(60U);
    msg.setDestination(27273U);
    msg.setDestinationEntity(61U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HAQZVNRJBPLEALQIRCAEPWIZNUDJXRBEJPYQDZPNNTLBFRXESHKSTJYOWTJMMDXIKWETXNVHWIUSVFYBOAHZGUXC");
    tmp_msg_0.lat = 0.113444327588;
    tmp_msg_0.lon = 0.274837901166;
    tmp_msg_0.depth = 0.0367152245894;
    tmp_msg_0.query_channel = 136U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 17U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.625765525904;
    msg.y = 0.840640474481;
    msg.var_x = 0.172419283112;
    msg.var_y = 0.665697206206;
    msg.distance = 0.892082292541;

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
    msg.setTimeStamp(0.404078204681);
    msg.setSource(18614U);
    msg.setSourceEntity(180U);
    msg.setDestination(5325U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IFTHAGNLHSYSUFIURMILYKOZCYJSGJAVHRCHROSSZHWSHPBBDDNEPGJNDCOXJEXOBWWG");
    tmp_msg_0.lat = 0.365452892362;
    tmp_msg_0.lon = 0.0132136130147;
    tmp_msg_0.depth = 0.798098586745;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.623092135472;
    msg.y = 0.268148111133;
    msg.var_x = 0.128470862178;
    msg.var_y = 0.182220705071;
    msg.distance = 0.329518594198;

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
    msg.setTimeStamp(0.199728910448);
    msg.setSource(27702U);
    msg.setSourceEntity(239U);
    msg.setDestination(44849U);
    msg.setDestinationEntity(45U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.308110424042);
    msg.setSource(56158U);
    msg.setSourceEntity(234U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(84U);
    msg.state = 31U;

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
    msg.setTimeStamp(0.550213156225);
    msg.setSource(56367U);
    msg.setSourceEntity(198U);
    msg.setDestination(8051U);
    msg.setDestinationEntity(177U);
    msg.state = 83U;

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
    msg.setTimeStamp(0.0172707922542);
    msg.setSource(53256U);
    msg.setSourceEntity(8U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(104U);
    msg.x = 0.995895012489;
    msg.y = 0.158669901638;
    msg.z = 0.138752208458;

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
    msg.setTimeStamp(0.806015752307);
    msg.setSource(63650U);
    msg.setSourceEntity(24U);
    msg.setDestination(64790U);
    msg.setDestinationEntity(222U);
    msg.x = 0.751507593073;
    msg.y = 0.23438781485;
    msg.z = 0.840630582715;

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
    msg.setTimeStamp(0.978272708879);
    msg.setSource(60891U);
    msg.setSourceEntity(231U);
    msg.setDestination(39444U);
    msg.setDestinationEntity(15U);
    msg.x = 0.671757641979;
    msg.y = 0.696132995322;
    msg.z = 0.102275488319;

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
    msg.setTimeStamp(0.170018170227);
    msg.setSource(19476U);
    msg.setSourceEntity(52U);
    msg.setDestination(24356U);
    msg.setDestinationEntity(11U);
    msg.va = 0.5792841464;
    msg.aoa = 0.0124248869551;
    msg.ssa = 0.398639774525;

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
    msg.setTimeStamp(0.995295774807);
    msg.setSource(51560U);
    msg.setSourceEntity(252U);
    msg.setDestination(27600U);
    msg.setDestinationEntity(209U);
    msg.va = 0.818212621669;
    msg.aoa = 0.0183490230785;
    msg.ssa = 0.524815172208;

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
    msg.setTimeStamp(0.149961591531);
    msg.setSource(38074U);
    msg.setSourceEntity(176U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(218U);
    msg.va = 0.416528563815;
    msg.aoa = 0.292045700831;
    msg.ssa = 0.535963556286;

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
    msg.setTimeStamp(0.825786250548);
    msg.setSource(47235U);
    msg.setSourceEntity(165U);
    msg.setDestination(13996U);
    msg.setDestinationEntity(2U);
    msg.value = 0.951919316106;

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
    msg.setTimeStamp(0.408709526823);
    msg.setSource(60646U);
    msg.setSourceEntity(225U);
    msg.setDestination(45641U);
    msg.setDestinationEntity(135U);
    msg.value = 0.527334233241;

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
    msg.setTimeStamp(0.153265083645);
    msg.setSource(26560U);
    msg.setSourceEntity(244U);
    msg.setDestination(60608U);
    msg.setDestinationEntity(111U);
    msg.value = 0.674614274222;

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
    msg.setTimeStamp(0.838097169775);
    msg.setSource(9243U);
    msg.setSourceEntity(85U);
    msg.setDestination(39817U);
    msg.setDestinationEntity(59U);
    msg.value = 0.456840291511;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.53096443842);
    msg.setSource(39243U);
    msg.setSourceEntity(99U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(24U);
    msg.value = 0.740482695676;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.858837401652);
    msg.setSource(27069U);
    msg.setSourceEntity(146U);
    msg.setDestination(51302U);
    msg.setDestinationEntity(254U);
    msg.value = 0.916820581518;
    msg.z_units = 149U;

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
    msg.setTimeStamp(0.72006307445);
    msg.setSource(48564U);
    msg.setSourceEntity(189U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(37U);
    msg.value = 0.923998209777;
    msg.speed_units = 0U;

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
    msg.setTimeStamp(0.451502498501);
    msg.setSource(31657U);
    msg.setSourceEntity(23U);
    msg.setDestination(59218U);
    msg.setDestinationEntity(13U);
    msg.value = 0.3530608352;
    msg.speed_units = 180U;

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
    msg.setTimeStamp(0.632204848157);
    msg.setSource(46609U);
    msg.setSourceEntity(74U);
    msg.setDestination(40427U);
    msg.setDestinationEntity(77U);
    msg.value = 0.587152430674;
    msg.speed_units = 77U;

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
    msg.setTimeStamp(0.0380194129496);
    msg.setSource(4377U);
    msg.setSourceEntity(140U);
    msg.setDestination(33577U);
    msg.setDestinationEntity(114U);
    msg.value = 0.327292723112;

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
    msg.setTimeStamp(0.329928003253);
    msg.setSource(27161U);
    msg.setSourceEntity(24U);
    msg.setDestination(47960U);
    msg.setDestinationEntity(75U);
    msg.value = 0.802733482055;

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
    msg.setTimeStamp(0.309619074425);
    msg.setSource(14576U);
    msg.setSourceEntity(181U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(107U);
    msg.value = 0.720950304495;

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
    msg.setTimeStamp(0.0732591557497);
    msg.setSource(8128U);
    msg.setSourceEntity(143U);
    msg.setDestination(34048U);
    msg.setDestinationEntity(126U);
    msg.value = 0.162091316642;

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
    msg.setTimeStamp(0.49402362621);
    msg.setSource(10139U);
    msg.setSourceEntity(8U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(93U);
    msg.value = 0.479343222167;

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
    msg.setTimeStamp(0.939727079473);
    msg.setSource(63437U);
    msg.setSourceEntity(126U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(12U);
    msg.value = 0.475588152441;

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
    msg.setTimeStamp(0.20579135892);
    msg.setSource(6258U);
    msg.setSourceEntity(146U);
    msg.setDestination(41994U);
    msg.setDestinationEntity(27U);
    msg.value = 0.780154662745;

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
    msg.setTimeStamp(0.409053137105);
    msg.setSource(26551U);
    msg.setSourceEntity(228U);
    msg.setDestination(47934U);
    msg.setDestinationEntity(245U);
    msg.value = 0.506028806796;

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
    msg.setTimeStamp(0.828685580037);
    msg.setSource(19983U);
    msg.setSourceEntity(44U);
    msg.setDestination(48204U);
    msg.setDestinationEntity(184U);
    msg.value = 0.370041095138;

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
    msg.setTimeStamp(0.244660983345);
    msg.setSource(40196U);
    msg.setSourceEntity(133U);
    msg.setDestination(11966U);
    msg.setDestinationEntity(67U);
    msg.path_ref = 2481589579U;
    msg.start_lat = 0.137930854856;
    msg.start_lon = 0.346300049976;
    msg.start_z = 0.197673453412;
    msg.start_z_units = 140U;
    msg.end_lat = 0.371311745881;
    msg.end_lon = 0.591288678208;
    msg.end_z = 0.559884593221;
    msg.end_z_units = 100U;
    msg.speed = 0.760187412529;
    msg.speed_units = 201U;
    msg.lradius = 0.573949358925;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.250044596441);
    msg.setSource(40681U);
    msg.setSourceEntity(150U);
    msg.setDestination(21037U);
    msg.setDestinationEntity(29U);
    msg.path_ref = 1323950595U;
    msg.start_lat = 0.0716909789319;
    msg.start_lon = 0.876675100883;
    msg.start_z = 0.907782272991;
    msg.start_z_units = 156U;
    msg.end_lat = 0.987833070024;
    msg.end_lon = 0.463790704154;
    msg.end_z = 0.340650176774;
    msg.end_z_units = 80U;
    msg.speed = 0.383639503622;
    msg.speed_units = 205U;
    msg.lradius = 0.675532995751;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.138733423723);
    msg.setSource(31369U);
    msg.setSourceEntity(208U);
    msg.setDestination(29446U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 1688061439U;
    msg.start_lat = 0.023533206979;
    msg.start_lon = 0.254583319771;
    msg.start_z = 0.315966931177;
    msg.start_z_units = 37U;
    msg.end_lat = 0.654107313645;
    msg.end_lon = 0.591036021207;
    msg.end_z = 0.772986917594;
    msg.end_z_units = 200U;
    msg.speed = 0.216313581914;
    msg.speed_units = 110U;
    msg.lradius = 0.846521896897;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.0843971051038);
    msg.setSource(25873U);
    msg.setSourceEntity(33U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(107U);
    msg.x = 0.508562831037;
    msg.y = 0.405822638336;
    msg.z = 0.5859956282;
    msg.k = 0.756619097284;
    msg.m = 0.521080380023;
    msg.n = 0.0159346590895;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.726754967019);
    msg.setSource(4983U);
    msg.setSourceEntity(77U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(128U);
    msg.x = 0.667827308851;
    msg.y = 0.659507183452;
    msg.z = 0.71972424905;
    msg.k = 0.891587103242;
    msg.m = 0.750175203477;
    msg.n = 0.4360784115;
    msg.flags = 70U;

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
    msg.setTimeStamp(0.868406390483);
    msg.setSource(50659U);
    msg.setSourceEntity(247U);
    msg.setDestination(20219U);
    msg.setDestinationEntity(151U);
    msg.x = 0.255725207888;
    msg.y = 0.291154504916;
    msg.z = 0.0402049236295;
    msg.k = 0.193878179994;
    msg.m = 0.670475201886;
    msg.n = 0.937328767885;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.74845351133);
    msg.setSource(24252U);
    msg.setSourceEntity(252U);
    msg.setDestination(53437U);
    msg.setDestinationEntity(106U);
    msg.value = 0.648002605506;

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
    msg.setTimeStamp(0.00933073899621);
    msg.setSource(26521U);
    msg.setSourceEntity(75U);
    msg.setDestination(17336U);
    msg.setDestinationEntity(207U);
    msg.value = 0.272534622616;

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
    msg.setTimeStamp(0.685194583108);
    msg.setSource(409U);
    msg.setSourceEntity(188U);
    msg.setDestination(56743U);
    msg.setDestinationEntity(197U);
    msg.value = 0.64119566052;

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
    msg.setTimeStamp(0.883106230375);
    msg.setSource(51399U);
    msg.setSourceEntity(241U);
    msg.setDestination(51292U);
    msg.setDestinationEntity(164U);
    msg.u = 0.399657476303;
    msg.v = 0.193701906344;
    msg.w = 0.888062755866;
    msg.p = 0.558504178082;
    msg.q = 0.913942922646;
    msg.r = 0.84310085578;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.942549153762);
    msg.setSource(27818U);
    msg.setSourceEntity(193U);
    msg.setDestination(32999U);
    msg.setDestinationEntity(2U);
    msg.u = 0.0426236425334;
    msg.v = 0.658485130796;
    msg.w = 0.567118211028;
    msg.p = 0.405673954625;
    msg.q = 0.807122410953;
    msg.r = 0.407030536914;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.75582383633);
    msg.setSource(51877U);
    msg.setSourceEntity(38U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(45U);
    msg.u = 0.589591077588;
    msg.v = 0.625732251124;
    msg.w = 0.0176933443972;
    msg.p = 0.991320995669;
    msg.q = 0.96971128422;
    msg.r = 0.929956998317;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.589276874999);
    msg.setSource(3435U);
    msg.setSourceEntity(166U);
    msg.setDestination(32884U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 1946913311U;
    msg.start_lat = 0.884621394817;
    msg.start_lon = 0.30218873431;
    msg.start_z = 0.997196710035;
    msg.start_z_units = 7U;
    msg.end_lat = 0.557274090913;
    msg.end_lon = 0.235449935833;
    msg.end_z = 0.291066993913;
    msg.end_z_units = 123U;
    msg.lradius = 0.605752782128;
    msg.flags = 207U;
    msg.x = 0.410255017667;
    msg.y = 0.996638955894;
    msg.z = 0.550911880845;
    msg.vx = 0.135215075757;
    msg.vy = 0.485277160323;
    msg.vz = 0.712927747417;
    msg.course_error = 0.0170209214366;
    msg.eta = 21763U;

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
    msg.setTimeStamp(0.490500635671);
    msg.setSource(41240U);
    msg.setSourceEntity(208U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 3990745736U;
    msg.start_lat = 0.311877670584;
    msg.start_lon = 0.850486019034;
    msg.start_z = 0.64557303815;
    msg.start_z_units = 82U;
    msg.end_lat = 0.260299299924;
    msg.end_lon = 0.546111011205;
    msg.end_z = 0.472578268904;
    msg.end_z_units = 114U;
    msg.lradius = 0.932754290282;
    msg.flags = 33U;
    msg.x = 0.224116600784;
    msg.y = 0.438602633733;
    msg.z = 0.704990505114;
    msg.vx = 0.973986526599;
    msg.vy = 0.188624558547;
    msg.vz = 0.255560908345;
    msg.course_error = 0.293498932556;
    msg.eta = 60173U;

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
    msg.setTimeStamp(0.0792367269454);
    msg.setSource(13274U);
    msg.setSourceEntity(66U);
    msg.setDestination(45979U);
    msg.setDestinationEntity(160U);
    msg.path_ref = 4067350698U;
    msg.start_lat = 0.650781295209;
    msg.start_lon = 0.0456224529336;
    msg.start_z = 0.402028564493;
    msg.start_z_units = 23U;
    msg.end_lat = 0.5866513688;
    msg.end_lon = 0.292254170385;
    msg.end_z = 0.116222857409;
    msg.end_z_units = 174U;
    msg.lradius = 0.439522056728;
    msg.flags = 244U;
    msg.x = 0.736096276929;
    msg.y = 0.697389469412;
    msg.z = 0.806019293425;
    msg.vx = 0.666012248013;
    msg.vy = 0.360759735687;
    msg.vz = 0.306863441363;
    msg.course_error = 0.498032977191;
    msg.eta = 19583U;

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
    msg.setTimeStamp(0.773219540001);
    msg.setSource(34667U);
    msg.setSourceEntity(85U);
    msg.setDestination(43295U);
    msg.setDestinationEntity(9U);
    msg.k = 0.487823824777;
    msg.m = 0.890014155543;
    msg.n = 0.626516323084;

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
    msg.setTimeStamp(0.592607003337);
    msg.setSource(3634U);
    msg.setSourceEntity(197U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(28U);
    msg.k = 0.503989904128;
    msg.m = 0.292007545254;
    msg.n = 0.462983015777;

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
    msg.setTimeStamp(0.212902338137);
    msg.setSource(61920U);
    msg.setSourceEntity(159U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(157U);
    msg.k = 0.699411849701;
    msg.m = 0.967453110442;
    msg.n = 0.80841964024;

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
    msg.setTimeStamp(0.551265192032);
    msg.setSource(21789U);
    msg.setSourceEntity(68U);
    msg.setDestination(32432U);
    msg.setDestinationEntity(85U);
    msg.p = 0.955943320594;
    msg.i = 0.121233047837;
    msg.d = 0.879363504344;
    msg.a = 0.609443256119;

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
    msg.setTimeStamp(0.0492648555414);
    msg.setSource(19400U);
    msg.setSourceEntity(191U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(138U);
    msg.p = 0.442071805154;
    msg.i = 0.0294706945415;
    msg.d = 0.894574457702;
    msg.a = 0.991869377533;

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
    msg.setTimeStamp(0.140480638075);
    msg.setSource(35445U);
    msg.setSourceEntity(122U);
    msg.setDestination(27787U);
    msg.setDestinationEntity(9U);
    msg.p = 0.343034320694;
    msg.i = 0.524413015806;
    msg.d = 0.520030621208;
    msg.a = 0.72596507761;

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
    msg.setTimeStamp(0.855218946055);
    msg.setSource(52359U);
    msg.setSourceEntity(54U);
    msg.setDestination(17601U);
    msg.setDestinationEntity(102U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.137825826037);
    msg.setSource(16641U);
    msg.setSourceEntity(126U);
    msg.setDestination(26953U);
    msg.setDestinationEntity(104U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.220861842044);
    msg.setSource(63772U);
    msg.setSourceEntity(54U);
    msg.setDestination(15753U);
    msg.setDestinationEntity(208U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.892193645893);
    msg.setSource(44154U);
    msg.setSourceEntity(51U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(195U);
    msg.x = 0.905894365352;
    msg.y = 0.720572665008;
    msg.z = 0.316153233657;
    msg.vx = 0.415787165681;
    msg.vy = 0.00801538523152;
    msg.vz = 0.1946322088;
    msg.ax = 0.486175823283;
    msg.ay = 0.596022163736;
    msg.az = 0.830900259089;
    msg.flags = 45591U;

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
    msg.setTimeStamp(0.795384082951);
    msg.setSource(59476U);
    msg.setSourceEntity(194U);
    msg.setDestination(20111U);
    msg.setDestinationEntity(129U);
    msg.x = 0.57153048354;
    msg.y = 0.695520963568;
    msg.z = 0.488816301765;
    msg.vx = 0.79133638751;
    msg.vy = 0.927950615388;
    msg.vz = 0.648907525388;
    msg.ax = 0.253035955514;
    msg.ay = 0.498062376572;
    msg.az = 0.888972675097;
    msg.flags = 12581U;

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
    msg.setTimeStamp(0.213292696344);
    msg.setSource(24172U);
    msg.setSourceEntity(147U);
    msg.setDestination(30616U);
    msg.setDestinationEntity(145U);
    msg.x = 0.590375370377;
    msg.y = 0.409007915605;
    msg.z = 0.393132048341;
    msg.vx = 0.334274170618;
    msg.vy = 0.559777723688;
    msg.vz = 0.673111685386;
    msg.ax = 0.753674410444;
    msg.ay = 0.977563117463;
    msg.az = 0.58290775295;
    msg.flags = 38550U;

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
    msg.setTimeStamp(0.492462571076);
    msg.setSource(31055U);
    msg.setSourceEntity(181U);
    msg.setDestination(12804U);
    msg.setDestinationEntity(39U);
    msg.value = 0.797061092449;

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
    msg.setTimeStamp(0.991410618161);
    msg.setSource(35686U);
    msg.setSourceEntity(105U);
    msg.setDestination(45380U);
    msg.setDestinationEntity(122U);
    msg.value = 0.368575601555;

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
    msg.setTimeStamp(0.0365602707828);
    msg.setSource(39581U);
    msg.setSourceEntity(43U);
    msg.setDestination(19244U);
    msg.setDestinationEntity(156U);
    msg.value = 0.563076470136;

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
    msg.setTimeStamp(0.0877999823615);
    msg.setSource(58915U);
    msg.setSourceEntity(37U);
    msg.setDestination(40889U);
    msg.setDestinationEntity(244U);
    msg.timeout = 27379U;
    msg.lat = 0.00973878634358;
    msg.lon = 0.182014010106;
    msg.z = 0.534872926443;
    msg.z_units = 194U;
    msg.speed = 0.0148411204078;
    msg.speed_units = 234U;
    msg.roll = 0.396945304512;
    msg.pitch = 0.352119222747;
    msg.yaw = 0.05913363418;
    msg.custom.assign("TYQZONXLFZJQLAMHGIEFUSPKFXTPGQNTORVDGJRDRRPLRMSWBSDEYINFULJXUIUGUIJBYEWBSPQOMYXHDTZCEGBNWKNXMGRCEXCECZEWYCCOKAQOPKFEPIODSHOBSZPOIQBZTGYUGANJAMGKLKZUTAMVAULZHHLDVEOPUXSVWAJQJHRYBHLSZUYVDMDIDVXWRRXVVKLTAZGWBPKMNNDVAJBKFBLQTCHFFICFNCSJHCFMRXOM");

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
    msg.setTimeStamp(0.915721424503);
    msg.setSource(28298U);
    msg.setSourceEntity(11U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(154U);
    msg.timeout = 33791U;
    msg.lat = 0.951650242828;
    msg.lon = 0.505149143168;
    msg.z = 0.666861365227;
    msg.z_units = 200U;
    msg.speed = 0.0307680827132;
    msg.speed_units = 195U;
    msg.roll = 0.452553973336;
    msg.pitch = 0.158039389292;
    msg.yaw = 0.343510741822;
    msg.custom.assign("YPUPGZDIZYUFCIUHWFIZXJJWFWBKBYQJROKDHPYMUTJNXXGKVMQJCOKZPCGVNRABFHRAIUHXNJOAFEA");

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
    msg.setTimeStamp(0.592708105139);
    msg.setSource(48966U);
    msg.setSourceEntity(51U);
    msg.setDestination(28318U);
    msg.setDestinationEntity(128U);
    msg.timeout = 41702U;
    msg.lat = 0.844896622703;
    msg.lon = 0.225324269689;
    msg.z = 0.89557687241;
    msg.z_units = 39U;
    msg.speed = 0.658142318834;
    msg.speed_units = 140U;
    msg.roll = 0.761846737362;
    msg.pitch = 0.345952659976;
    msg.yaw = 0.520783632046;
    msg.custom.assign("PMTMJOXBEEWLHEJJKKQGHBZHUXMUEGOIWKQMXFIOVUKPPCCCEJXOPEPYBWYEQAUASBCNQVGRKGXXBCODIGHKWCCTVLBTAFSDADWRTWRALGJXFIOUFWISNJVRYZSZUFS");

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
    msg.setTimeStamp(0.630077836062);
    msg.setSource(31979U);
    msg.setSourceEntity(230U);
    msg.setDestination(21667U);
    msg.setDestinationEntity(208U);
    msg.timeout = 33485U;
    msg.lat = 0.0618881610447;
    msg.lon = 0.144515440484;
    msg.z = 0.417008798007;
    msg.z_units = 223U;
    msg.speed = 0.178931138798;
    msg.speed_units = 94U;
    msg.duration = 14812U;
    msg.radius = 0.992538873032;
    msg.flags = 116U;
    msg.custom.assign("EMNQJJXZNPZWEUEHTZJXWWPYPNPLOVMUVRPLOVNO");

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
    msg.setTimeStamp(0.505869591836);
    msg.setSource(18624U);
    msg.setSourceEntity(215U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(12U);
    msg.timeout = 62122U;
    msg.lat = 0.424549060277;
    msg.lon = 0.378919835195;
    msg.z = 0.628554253283;
    msg.z_units = 118U;
    msg.speed = 0.790192021448;
    msg.speed_units = 51U;
    msg.duration = 24937U;
    msg.radius = 0.210053212009;
    msg.flags = 68U;
    msg.custom.assign("ATPRJMKMDXVWUYSCQWNRIAKNKQWXEOIJTAQGMPCVFD");

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
    msg.setTimeStamp(0.472755424479);
    msg.setSource(17888U);
    msg.setSourceEntity(79U);
    msg.setDestination(21843U);
    msg.setDestinationEntity(60U);
    msg.timeout = 22725U;
    msg.lat = 0.429225384708;
    msg.lon = 0.129223349338;
    msg.z = 0.530778756781;
    msg.z_units = 132U;
    msg.speed = 0.440759613925;
    msg.speed_units = 86U;
    msg.duration = 28875U;
    msg.radius = 0.574885795319;
    msg.flags = 50U;
    msg.custom.assign("KVBMPLDMMBZWQEKGLYTATCPSXOIQFXPFMGQRIWKHQAXRQEPWYNRBBEUZCLHMKHBRDSKPMFOOXQJSJRULMOJXEUXETLXVXECHNSFLRUIIUFFMYVCATOGPUFSKHKNSDBECUNEDBGKISHZSNBVGNCCEOMAYOVQVGUBVJZJZLTWILJZGTITILZAUWPVGSGTNYLPFHRQAC");

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
    msg.setTimeStamp(0.094052035284);
    msg.setSource(35220U);
    msg.setSourceEntity(86U);
    msg.setDestination(47990U);
    msg.setDestinationEntity(154U);
    msg.custom.assign("EOQIULSNYDWVERYKEQZPHDSYRKMZXXTHGQK");

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
    msg.setTimeStamp(0.620565533823);
    msg.setSource(6892U);
    msg.setSourceEntity(17U);
    msg.setDestination(36023U);
    msg.setDestinationEntity(148U);
    msg.custom.assign("VMSJSEPHASRCTWLLGYCPDZGTPEFZKPWOONXXXNTNOZVDB");

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
    msg.setTimeStamp(0.326617954819);
    msg.setSource(33431U);
    msg.setSourceEntity(237U);
    msg.setDestination(49138U);
    msg.setDestinationEntity(160U);
    msg.custom.assign("MBSOFFTWPGROJWDYPMJYSNXKEDUXMIGBHZN");

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
    msg.setTimeStamp(0.269278190673);
    msg.setSource(43140U);
    msg.setSourceEntity(66U);
    msg.setDestination(37279U);
    msg.setDestinationEntity(198U);
    msg.timeout = 6817U;
    msg.lat = 0.916072513913;
    msg.lon = 0.711271840249;
    msg.z = 0.353122874477;
    msg.z_units = 18U;
    msg.duration = 4244U;
    msg.speed = 0.191450694348;
    msg.speed_units = 133U;
    msg.type = 99U;
    msg.radius = 0.698220676972;
    msg.length = 0.66809152811;
    msg.bearing = 0.0895794843914;
    msg.direction = 241U;
    msg.custom.assign("LKIISAHJFKEWTOHOZRHKAJZCEVDXNTWOOSIEMIEVIHXQDERTRCDYZYDUGFBRIPHBMWSXBBZRNVBAVLXWEYPMIUO");

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
    msg.setTimeStamp(0.366486267468);
    msg.setSource(17660U);
    msg.setSourceEntity(204U);
    msg.setDestination(39811U);
    msg.setDestinationEntity(61U);
    msg.timeout = 10258U;
    msg.lat = 0.334369967473;
    msg.lon = 0.983125860417;
    msg.z = 0.785893837768;
    msg.z_units = 73U;
    msg.duration = 39194U;
    msg.speed = 0.456057799434;
    msg.speed_units = 207U;
    msg.type = 181U;
    msg.radius = 0.98211624152;
    msg.length = 0.0761680918055;
    msg.bearing = 0.39268852536;
    msg.direction = 28U;
    msg.custom.assign("VETLNCOCNUNMMYLQDLDKNOQFDQZCFWZKQSISUTOKJURPSEDKYXUTYYYWHAITVJYICVAULIRRYEBGAIKXJMSLOVGARMSGNDQWHXCGDEWFQRPCGHPAAXBDGK");

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
    msg.setTimeStamp(0.855121076002);
    msg.setSource(34043U);
    msg.setSourceEntity(194U);
    msg.setDestination(44276U);
    msg.setDestinationEntity(124U);
    msg.timeout = 30418U;
    msg.lat = 0.691103870521;
    msg.lon = 0.492394167868;
    msg.z = 0.417849808403;
    msg.z_units = 130U;
    msg.duration = 19791U;
    msg.speed = 0.207823400375;
    msg.speed_units = 221U;
    msg.type = 5U;
    msg.radius = 0.188914889771;
    msg.length = 0.235573049687;
    msg.bearing = 0.154706559184;
    msg.direction = 63U;
    msg.custom.assign("JCDRVSKPVIAWTJPLHSCCNODWVQKVPUCPSEXOHEFHYRZEJHKHOGWMEWSPXCMPTBBNOHGITJYWYILRNPZDHAZAKIPVDNUTHMJIQQEANYWGTRVNFFYZJOQBRCJDDIFMNFGBBPAUDFWURL");

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
    msg.setTimeStamp(0.516081820884);
    msg.setSource(21341U);
    msg.setSourceEntity(189U);
    msg.setDestination(200U);
    msg.setDestinationEntity(158U);
    msg.duration = 51942U;
    msg.custom.assign("IKIOPLZBWPKPDSIQZQXSRTREVHOESIZZLFYSXRGWBBCNHPGHUUPCOMWBDCARDCYYYAYIASNXJOFDNHVTNJGTCCVVMUYKSMSFAYRRNNVHVZXTYUQBTPWRTJIUJQETUCYCIFMJOJFOTLQKQVAHKWBZQLFMORPLBMFEDPFXKLLCGTQKGFMROFNWIXLOZBMJBEHEGECKKAJSHKLX");

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
    msg.setTimeStamp(0.68431578559);
    msg.setSource(63404U);
    msg.setSourceEntity(82U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(135U);
    msg.duration = 9599U;
    msg.custom.assign("FIGLEBPXEILHSDRLVQQOPWOEEJRWSCKQKDLLIFNPXVJKYNCJEDJVNHWJUMDTAQHFGAQSATRYLM");

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
    msg.setTimeStamp(0.446145886417);
    msg.setSource(31U);
    msg.setSourceEntity(107U);
    msg.setDestination(3365U);
    msg.setDestinationEntity(139U);
    msg.duration = 27355U;
    msg.custom.assign("KNGFSHJPOFTPTXEHWAARVGRFDBVSDMUNBBHSJWJF");

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
    msg.setTimeStamp(0.844182353428);
    msg.setSource(27126U);
    msg.setSourceEntity(70U);
    msg.setDestination(21037U);
    msg.setDestinationEntity(72U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.686298169728;
    tmp_msg_0.speed_units = 218U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1025U;
    msg.custom.assign("LDQGEBUWMBNCTGDVLDVUMUIKDSRRECVUIOTGHZQUQACWBLXTYHAOVTDSHWHGJPHJJVNSWYJDKAELJGYNWPFANRDNSPFSZLEGIZTWYIBLYFFYJPRKTNFPGHVATNUZJJE");

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
    msg.setTimeStamp(0.307201236383);
    msg.setSource(19608U);
    msg.setSourceEntity(189U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(73U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.975095579468;
    msg.control.set(tmp_msg_0);
    msg.duration = 48323U;
    msg.custom.assign("MSYWHSLDZXPJUSBFKZQWUJTVJGNGKTSHROGONFBOIMQHWPORXQWDZTFMHIXMOLKHSGAAWPPEWQDZZZMCIWNCUJKFCXBCKXGYQRMVBEGXDAXBQLHSPHFFETRCNUHBNTPAXSUTRMVCTDLFEBICAIZANECGVRLTWJQKLCASJ");

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
    msg.setTimeStamp(0.00527560708583);
    msg.setSource(57394U);
    msg.setSourceEntity(179U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(13U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.0392284827703;
    msg.control.set(tmp_msg_0);
    msg.duration = 55053U;
    msg.custom.assign("CVGZTOGCACQXXTDTKYFMUHOJXGKBPTRDPPSAICEFBMEPZCZVLK");

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
    msg.setTimeStamp(0.12002186344);
    msg.setSource(47249U);
    msg.setSourceEntity(243U);
    msg.setDestination(28020U);
    msg.setDestinationEntity(59U);
    msg.timeout = 57716U;
    msg.lat = 0.287134303138;
    msg.lon = 0.376680342623;
    msg.z = 0.598302329606;
    msg.z_units = 107U;
    msg.speed = 0.286071278401;
    msg.speed_units = 203U;
    msg.bearing = 0.188481151764;
    msg.cross_angle = 0.43255016954;
    msg.width = 0.368287386053;
    msg.length = 0.0151604457605;
    msg.hstep = 0.26014969644;
    msg.coff = 118U;
    msg.alternation = 106U;
    msg.flags = 194U;
    msg.custom.assign("NQVGAZYVZLMFKCXHIQIUOPEJMCLRXDNTOSMCEQZKHMJJACESMOWBMNKBASTPVRIEICSVKFOQGPTTYOVLVWEJXTTUCVTNIBXWDQAFPLEJTGFNTKAUGDRKNDIRQUMXWDZGDUAALWYYHOKBGUXBBEHINNCJAHMJCWSZSNQTMHWWXOQLODCPEDUPZFKFOAOZDGYWSZEUFYSFZUMLYKAFVPHKRJLXZQNIGDIURBPGRSFYV");

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
    msg.setTimeStamp(0.437357985008);
    msg.setSource(54633U);
    msg.setSourceEntity(233U);
    msg.setDestination(20490U);
    msg.setDestinationEntity(84U);
    msg.timeout = 7370U;
    msg.lat = 0.0463550691751;
    msg.lon = 0.341432114562;
    msg.z = 0.639387057743;
    msg.z_units = 44U;
    msg.speed = 0.803072200768;
    msg.speed_units = 81U;
    msg.bearing = 0.846575685325;
    msg.cross_angle = 0.841346105417;
    msg.width = 0.681888406449;
    msg.length = 0.874568524659;
    msg.hstep = 0.858450168642;
    msg.coff = 56U;
    msg.alternation = 97U;
    msg.flags = 232U;
    msg.custom.assign("BZRGDQISAFVHATJFRBWRXKAMCVWLQSPBXIDNQYBTWH");

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
    msg.setTimeStamp(0.83635433967);
    msg.setSource(39279U);
    msg.setSourceEntity(64U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(164U);
    msg.timeout = 24617U;
    msg.lat = 0.93705739497;
    msg.lon = 0.853370162585;
    msg.z = 0.331416088703;
    msg.z_units = 191U;
    msg.speed = 0.926517509064;
    msg.speed_units = 34U;
    msg.bearing = 0.218094007454;
    msg.cross_angle = 0.743626447873;
    msg.width = 0.690605843633;
    msg.length = 0.0853986552489;
    msg.hstep = 0.340516488939;
    msg.coff = 202U;
    msg.alternation = 206U;
    msg.flags = 229U;
    msg.custom.assign("XPHMJIVJEMNRWVYTQQXREAVWJCPFSAVCSIYBZPRAWLOWEAHXYJUUVUWBMFLXVFYWGKZCRDDBOBTOXPQCIEQDGKWZEZKRE");

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
    msg.setTimeStamp(0.885987579986);
    msg.setSource(35542U);
    msg.setSourceEntity(144U);
    msg.setDestination(1395U);
    msg.setDestinationEntity(236U);
    msg.timeout = 23833U;
    msg.lat = 0.225950269756;
    msg.lon = 0.175252531471;
    msg.z = 0.365034665931;
    msg.z_units = 140U;
    msg.speed = 0.967467048295;
    msg.speed_units = 104U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.58217634365;
    tmp_msg_0.y = 0.545974507638;
    tmp_msg_0.z = 0.670154058628;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NPZCQQIPMQTFGBZIVT");

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
    msg.setTimeStamp(0.777329496479);
    msg.setSource(28753U);
    msg.setSourceEntity(249U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(56U);
    msg.timeout = 34301U;
    msg.lat = 0.0125663236217;
    msg.lon = 0.783477764725;
    msg.z = 0.592558804477;
    msg.z_units = 7U;
    msg.speed = 0.390692458121;
    msg.speed_units = 221U;
    msg.custom.assign("UXJACIDETKPYHTFGVXCHHDTHDHOXVYFNZFFRBRIZZAHCTIPVVGLFPAOUPJULLUZVRW");

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
    msg.setTimeStamp(0.68707787107);
    msg.setSource(38068U);
    msg.setSourceEntity(103U);
    msg.setDestination(28093U);
    msg.setDestinationEntity(61U);
    msg.timeout = 47585U;
    msg.lat = 0.396860666444;
    msg.lon = 0.0440310605863;
    msg.z = 0.270436097177;
    msg.z_units = 227U;
    msg.speed = 0.0197141418181;
    msg.speed_units = 90U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.210351504371;
    tmp_msg_0.y = 0.814257876902;
    tmp_msg_0.z = 0.79488900217;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FMTDLSCCDLLUQKOCIXBBBHQHIJUWHVYKONPVZNLXHBQMSNUEFNKTHWEKYDWXIHUURSVDUJAIBMTYYKDMXJJRKIBWAKGMFLEUWZJGTFGSHMBJTYFJCWUZUCYASAQOPTKPFROVFZJELYRRPVJEEBOTPDXPGIPTIVNXENCGOHIIFWUHEPGNQLSVQZMAERXFXZRDLGOKVYRQRXCWILAWCKMODZGSPCBCZBHADZGAQDYLAE");

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
    msg.setTimeStamp(0.709092088711);
    msg.setSource(36124U);
    msg.setSourceEntity(72U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(68U);
    msg.x = 0.927023936105;
    msg.y = 0.614767136132;
    msg.z = 0.270369798465;

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
    msg.setTimeStamp(0.66284007453);
    msg.setSource(57547U);
    msg.setSourceEntity(209U);
    msg.setDestination(41173U);
    msg.setDestinationEntity(209U);
    msg.x = 0.136473738104;
    msg.y = 0.875231720237;
    msg.z = 0.131455998937;

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
    msg.setTimeStamp(0.532175176236);
    msg.setSource(54766U);
    msg.setSourceEntity(133U);
    msg.setDestination(37502U);
    msg.setDestinationEntity(214U);
    msg.x = 0.560116135771;
    msg.y = 0.029625829757;
    msg.z = 0.331351673798;

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
    msg.setTimeStamp(0.565133924182);
    msg.setSource(13882U);
    msg.setSourceEntity(231U);
    msg.setDestination(49214U);
    msg.setDestinationEntity(219U);
    msg.timeout = 27040U;
    msg.lat = 0.418285763112;
    msg.lon = 0.552109427935;
    msg.z = 0.435279796154;
    msg.z_units = 86U;
    msg.amplitude = 0.820087709495;
    msg.pitch = 0.770592880447;
    msg.speed = 0.927765754036;
    msg.speed_units = 116U;
    msg.custom.assign("AEZHKSIEXCEAPKYCDUAMWJLGZKUARVVLZSVJPRFQNLHYODCHEUFXIGYPUULCUCXFFZGOJLOOIJYVKIUQXCWWIRJQKJFRSLYDQLAOG");

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
    msg.setTimeStamp(0.869296285231);
    msg.setSource(22249U);
    msg.setSourceEntity(50U);
    msg.setDestination(19662U);
    msg.setDestinationEntity(144U);
    msg.timeout = 386U;
    msg.lat = 0.470705392994;
    msg.lon = 0.847674984548;
    msg.z = 0.873859462548;
    msg.z_units = 45U;
    msg.amplitude = 0.867902802175;
    msg.pitch = 0.116276263311;
    msg.speed = 0.617238968648;
    msg.speed_units = 70U;
    msg.custom.assign("UQOLWBPZGKHYYVNLLJPBAEIWIYGVJXXHVDJLZRGMOQKXXJLBMZDQCQPNJNQLMYRRHWXYLXQRFXUWOZHQXARTIJMGYPXGITINLOGUVMELUQCHMFUCSADFTZHBWNNMXCTEZABODKVOUPLWVKNPFBEHANBKGCWCSJSTSICVCVTUTDSQWORAESEGDBKHYDZKRRTSMAWZHODUYBZDOEVSPHDAPAIFTCNMTSGNYZSUR");

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
    msg.setTimeStamp(0.157901309681);
    msg.setSource(33258U);
    msg.setSourceEntity(148U);
    msg.setDestination(13587U);
    msg.setDestinationEntity(142U);
    msg.timeout = 28038U;
    msg.lat = 0.713273593294;
    msg.lon = 0.312354197967;
    msg.z = 0.393202049411;
    msg.z_units = 123U;
    msg.amplitude = 0.544698109548;
    msg.pitch = 0.419963404846;
    msg.speed = 0.0302854936652;
    msg.speed_units = 197U;
    msg.custom.assign("KNPURAWCFDBUGLMEJEHQUTDCBODTXMSYVDVKLEQXJMWIDNNKBXQFWXISEQFTWPKZRZMZJKETAQWCXBQODGSFCPNCOVJVFHTRVMTYZIQGGRRDORTUAGVHTHICBJRSFYOGKTLNGUXLQPYBWYRMHJHSS");

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
    msg.setTimeStamp(0.197689488339);
    msg.setSource(38307U);
    msg.setSourceEntity(75U);
    msg.setDestination(13977U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.986974933633);
    msg.setSource(11836U);
    msg.setSourceEntity(7U);
    msg.setDestination(56634U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.315439071912);
    msg.setSource(2299U);
    msg.setSourceEntity(93U);
    msg.setDestination(37744U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.286539541811);
    msg.setSource(2420U);
    msg.setSourceEntity(141U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.0485038422014;
    msg.lon = 0.168988379653;
    msg.z = 0.665818170845;
    msg.z_units = 15U;
    msg.radius = 0.423463068453;
    msg.duration = 26116U;
    msg.speed = 0.963038924852;
    msg.speed_units = 148U;
    msg.custom.assign("PTTAGLDMFVZEKOLVHVYCTXKBTRXTEQXKUSGWFHCWNDAOGSEIBQMZLPQLABFHXXZUKBFZSTWLRVESKTNXDPUHQLFCCPEHIICKKTQBHARLJGBRZRLGJOYMBWBERITNNENZAADNIFQGYMPJORKHF");

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
    msg.setTimeStamp(0.184706240155);
    msg.setSource(14212U);
    msg.setSourceEntity(49U);
    msg.setDestination(10334U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.119961419358;
    msg.lon = 0.601735474062;
    msg.z = 0.0154843819866;
    msg.z_units = 241U;
    msg.radius = 0.34343729679;
    msg.duration = 63377U;
    msg.speed = 0.152586481813;
    msg.speed_units = 223U;
    msg.custom.assign("XUXQWELKSTUKD");

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
    msg.setTimeStamp(0.920026973932);
    msg.setSource(6602U);
    msg.setSourceEntity(18U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.433047250391;
    msg.lon = 0.220931031825;
    msg.z = 0.990166508341;
    msg.z_units = 83U;
    msg.radius = 0.609105737115;
    msg.duration = 34571U;
    msg.speed = 0.556523017233;
    msg.speed_units = 155U;
    msg.custom.assign("XSBOGCTEUNJNQDZPAZHGUBWYLVRXARIIMLRWVDBAXQIQESLPFIUZLOQMHYPGKIANVKEWNSTJYABVOSKECUYUCPOGXCPQYJWOFEDSVDLTWYLPOLSZVNKGPPLVNSIFJOKVRFBARTCVMAQMQHJLKLKACSRDGCCBJWFBERZNNXXBFUNVWJZUDTMKXKIYMTQZGOEQJHRXTCFJFHHSWBYGEONGWDEGMTRFPPHWJYDZIHKBQIYHM");

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
    msg.setTimeStamp(0.633978695825);
    msg.setSource(25724U);
    msg.setSourceEntity(48U);
    msg.setDestination(23879U);
    msg.setDestinationEntity(20U);
    msg.timeout = 48918U;
    msg.flags = 30U;
    msg.lat = 0.182581687459;
    msg.lon = 0.139388669208;
    msg.start_z = 0.230923855747;
    msg.start_z_units = 8U;
    msg.end_z = 0.592461653032;
    msg.end_z_units = 34U;
    msg.radius = 0.153680660412;
    msg.speed = 0.662374706944;
    msg.speed_units = 32U;
    msg.custom.assign("YHNIQVQJGCWZOAZAWONUHZOHYZABHWXHYCQKFKDBBSIZUMETPGNJCJBOSTPPUWDLKUEMODIKDFDBMTRHCPFROVCDKIGXCUEMXFESLLTKXDAZINCKGXVTAWRRTUFZJGUQTXJQLDHIFTQPPDGNMJXMEEHFLCCBKESTGSUOVRRNIJPYBJULGHPLVBWLMNAARPWNSYVSECYZAFAYYQEJKYWKYNSXVBDOPHLGROIZMQURFTLNQVXSRGVFAVSI");

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
    msg.setTimeStamp(0.938037313614);
    msg.setSource(33779U);
    msg.setSourceEntity(27U);
    msg.setDestination(27800U);
    msg.setDestinationEntity(206U);
    msg.timeout = 56601U;
    msg.flags = 25U;
    msg.lat = 0.882132216811;
    msg.lon = 0.0914824249269;
    msg.start_z = 0.858745905976;
    msg.start_z_units = 207U;
    msg.end_z = 0.608164909521;
    msg.end_z_units = 176U;
    msg.radius = 0.554658179794;
    msg.speed = 0.756246058536;
    msg.speed_units = 243U;
    msg.custom.assign("KGOJABGACUHLZJLQEMWFOBHWSZWHPDDCCLKTLJYNUDEGLLTNX");

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
    msg.setTimeStamp(0.0167727370003);
    msg.setSource(24714U);
    msg.setSourceEntity(53U);
    msg.setDestination(19326U);
    msg.setDestinationEntity(215U);
    msg.timeout = 14511U;
    msg.flags = 82U;
    msg.lat = 0.478619124589;
    msg.lon = 0.50495157419;
    msg.start_z = 0.308509484675;
    msg.start_z_units = 94U;
    msg.end_z = 0.265679112612;
    msg.end_z_units = 149U;
    msg.radius = 0.035367900041;
    msg.speed = 0.163895412178;
    msg.speed_units = 204U;
    msg.custom.assign("PGJUPTLHFAJGAMKEMBHENOZIIGZVXZCRGHSUVAELXISRNNOCLHZFPLVTHQFYGZGUZHQCPYWJOSJSTBSBMLOMQVEILUNXNOEMIMWAKQGPDMAQBTFLCCTZSQALFUJOTGUJXZOJDQKDHVPXEWHVUEWZDRRIFTUKACYANAYXDMIKMNFWYDKJBJEYSYCSTHBRCOBIMKRKWXYNVHEVUDUNTXCFLADVPDWJQNI");

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
    msg.setTimeStamp(0.413833851812);
    msg.setSource(40575U);
    msg.setSourceEntity(110U);
    msg.setDestination(44847U);
    msg.setDestinationEntity(163U);
    msg.timeout = 3827U;
    msg.lat = 0.986296633906;
    msg.lon = 0.694994071832;
    msg.z = 0.791745133579;
    msg.z_units = 35U;
    msg.speed = 0.827332308575;
    msg.speed_units = 40U;
    msg.custom.assign("YUJJQTCOQNQBUFWCUPOWIKXRTJQLPKAWLKULNXPYMORAUVAJRYNKKTQFGIAPEFTKOJETBGZHTDPDGGQVCWUDUNVBHEODJBMEBKXJFCLACKXQNWAITBTNHVTESGSSKDPZLMAZIEUDHVVIBPUCZFDGIQJMVEDWTMYWOXOXPCZVOGIJSYMABRHIIYRLHWLJLRISKMNRQZNXNXMCGXDVBFBHGARHSHRPPEFWAMSUCEYLZFEZYGSOSYVLFYCNSWDF");

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
    msg.setTimeStamp(0.994975474034);
    msg.setSource(2858U);
    msg.setSourceEntity(40U);
    msg.setDestination(59515U);
    msg.setDestinationEntity(27U);
    msg.timeout = 59233U;
    msg.lat = 0.182783402674;
    msg.lon = 0.633385912566;
    msg.z = 0.991102193537;
    msg.z_units = 251U;
    msg.speed = 0.310084143534;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0518608375298;
    tmp_msg_0.y = 0.890024857865;
    tmp_msg_0.z = 0.226690250593;
    tmp_msg_0.t = 0.923999140483;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SCDNSGRHHYOTZSDLYPPRXQRBSCMKPHECCMKQUFWEDZCQUXNFOBMAZEFDRTSGKUGOWVLNACGQJUTZJIJRQCAMRBHMPBIBRMKQKEZVVSSKYMXVFJNBJWXLGUZUHNKWVEOUETFVHXWHORFRHAHVRTDLYYCPZXZQADPKNYPEIAWPQOUXFEJD");

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
    msg.setTimeStamp(0.671785435835);
    msg.setSource(30744U);
    msg.setSourceEntity(138U);
    msg.setDestination(47043U);
    msg.setDestinationEntity(18U);
    msg.timeout = 36827U;
    msg.lat = 0.14149013592;
    msg.lon = 0.998247549012;
    msg.z = 0.464172780651;
    msg.z_units = 183U;
    msg.speed = 0.399258562255;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.664946945719;
    tmp_msg_0.y = 0.680763842658;
    tmp_msg_0.z = 0.738077776608;
    tmp_msg_0.t = 0.931827803355;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LOIYFOYCNLOSJCBRTRNSBPCHPIGJWYSDQNXNPQVAOWXRTEZHTYYOMXIPLECOFAAJOERWVMGPMLJERUUBTADAYEODIZKFKHBXZMAZQRWKIQYYCIGSDIVZRHUPZBEYMYVXAKHGTHQOGBWWQTZIGBZUNWCJWJWUPLNMQLRZVVFOIRXVVGXUJSDUFFWXSKHNSKCQAPUSJSQ");

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
    msg.setTimeStamp(0.852582835333);
    msg.setSource(27642U);
    msg.setSourceEntity(29U);
    msg.setDestination(27820U);
    msg.setDestinationEntity(140U);
    msg.x = 0.423193121753;
    msg.y = 0.681711527916;
    msg.z = 0.583290196193;
    msg.t = 0.170952600456;

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
    msg.setTimeStamp(0.297053032262);
    msg.setSource(1463U);
    msg.setSourceEntity(248U);
    msg.setDestination(3486U);
    msg.setDestinationEntity(0U);
    msg.x = 0.396502419099;
    msg.y = 0.699899207665;
    msg.z = 0.358086350699;
    msg.t = 0.0852617823922;

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
    msg.setTimeStamp(0.0849759377298);
    msg.setSource(2822U);
    msg.setSourceEntity(109U);
    msg.setDestination(11543U);
    msg.setDestinationEntity(110U);
    msg.x = 0.87916645227;
    msg.y = 0.71574758618;
    msg.z = 0.910205412338;
    msg.t = 0.695454573866;

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
    msg.setTimeStamp(0.723792900421);
    msg.setSource(38210U);
    msg.setSourceEntity(55U);
    msg.setDestination(32678U);
    msg.setDestinationEntity(9U);
    msg.timeout = 64175U;
    msg.name.assign("PMFNIAPSJOXTPHQYYHTEMFKZNWWBGHMGMZQDTTMOOGADZNXYJYEJTUSJCNBQTFDXACDPVMZVKDBVQHYELFIVANZLQXHRMOIMVKIURRRGJWFJYUTCLHLWWIPFMDAKWNIKUGGU");
    msg.custom.assign("JZAPXMTWLSPVLCDRWUGQONKBYVX");

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
    msg.setTimeStamp(0.984725287947);
    msg.setSource(21310U);
    msg.setSourceEntity(250U);
    msg.setDestination(43493U);
    msg.setDestinationEntity(58U);
    msg.timeout = 2086U;
    msg.name.assign("MEYTTWEFFXJCMVEBMPVIQPKWSSDSNVXYPLVFLJJAEKAUGWLKBQPXTSYIORUCDQCEJMCCGAGOHNNZQXRFBWJOOAIRSCACVTZMSMXIKDJILGVKZADZLXYNQRFAVGKZPJJEJCKODDVGFRULALQXKWN");
    msg.custom.assign("SZMNGRVZSMASHRECPLWTGWCEOJANPPIBGCTXG");

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
    msg.setTimeStamp(0.404104799154);
    msg.setSource(14091U);
    msg.setSourceEntity(98U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(80U);
    msg.timeout = 50498U;
    msg.name.assign("QUJBLLRWJLCMNJIDPMMPFYZL");
    msg.custom.assign("JZBKLOGVEICWHPTOLAHTGFVURFQLZKFGWBAWXHIUFIMFQIJMFPBALPOTODOCQSGQGZNDBYXPSQ");

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
    msg.setTimeStamp(0.878790457961);
    msg.setSource(42386U);
    msg.setSourceEntity(66U);
    msg.setDestination(43102U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.594340644934;
    msg.lon = 0.408400916253;
    msg.z = 0.325262729353;
    msg.z_units = 165U;
    msg.speed = 0.442302666249;
    msg.speed_units = 34U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52791U;
    tmp_msg_0.off_x = 0.658369301348;
    tmp_msg_0.off_y = 0.0427087400747;
    tmp_msg_0.off_z = 0.767212080946;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.590165471463;
    msg.custom.assign("PVEVAFIGAZOSKIHWKNKWKBDHFVLYGGMQJWYFSLOTHWRJSULSOZHNQJRZCQFPCCKGBNNLUNFZUYCTBGAHSCROIJSSVOMEYODYPGUNLLNTUVBEICRUETOSDIWDQJHZPXHHYDLBRFEYPJMIZTXIDRCRPEZQEQCFNBVXWVUKFVLMHWRPMMNWULPIKWVNXGBKOMH");

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
    msg.setTimeStamp(0.454746729151);
    msg.setSource(50188U);
    msg.setSourceEntity(125U);
    msg.setDestination(36697U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.719633276833;
    msg.lon = 0.601644853787;
    msg.z = 0.222695402711;
    msg.z_units = 241U;
    msg.speed = 0.843613616919;
    msg.speed_units = 30U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.856775985165;
    tmp_msg_0.y = 0.141517291437;
    tmp_msg_0.z = 0.439348913151;
    tmp_msg_0.t = 0.613669838651;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 29155U;
    tmp_msg_1.off_x = 0.594712451183;
    tmp_msg_1.off_y = 0.104680660834;
    tmp_msg_1.off_z = 0.0512377780137;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.263801767379;
    msg.custom.assign("JUVSUERGREOUHUEXWNPDQHYMTAQUVHCNJHBQBTGOFCSFXLEDJBJANGLXORPIKTVGZOUDTZZMVXRQHDPLYBKOWIMYHUFOYSNSLMZCQFNMTIBCXTRSFVRCLPZFXBIORGGBEVWLKZXSDAKZIKDVSWQKABYVUKQDR");

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
    msg.setTimeStamp(0.945801220826);
    msg.setSource(22080U);
    msg.setSourceEntity(62U);
    msg.setDestination(24342U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.606610236801;
    msg.lon = 0.555942093752;
    msg.z = 0.580979568655;
    msg.z_units = 64U;
    msg.speed = 0.0753022265564;
    msg.speed_units = 240U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0789211508565;
    tmp_msg_0.y = 0.615543497434;
    tmp_msg_0.z = 0.536799366434;
    tmp_msg_0.t = 0.570956041273;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.442266483159;
    msg.custom.assign("REIVULOYPEMFYTXOUQQDDBBVEUFZDBYLIZGZKKNJRHTEGJZUIPQRVVWIHLI");

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
    msg.setTimeStamp(0.708000630348);
    msg.setSource(10839U);
    msg.setSourceEntity(213U);
    msg.setDestination(25995U);
    msg.setDestinationEntity(248U);
    msg.vid = 34118U;
    msg.off_x = 0.966700786819;
    msg.off_y = 0.607284295545;
    msg.off_z = 0.688588353065;

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
    msg.setTimeStamp(0.381471421028);
    msg.setSource(20745U);
    msg.setSourceEntity(171U);
    msg.setDestination(58289U);
    msg.setDestinationEntity(101U);
    msg.vid = 26124U;
    msg.off_x = 0.109359177852;
    msg.off_y = 0.715564015019;
    msg.off_z = 0.2081786837;

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
    msg.setTimeStamp(0.465170286463);
    msg.setSource(11754U);
    msg.setSourceEntity(253U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(13U);
    msg.vid = 47002U;
    msg.off_x = 0.877578195538;
    msg.off_y = 0.453890182837;
    msg.off_z = 0.0113040053803;

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
    msg.setTimeStamp(0.99418264577);
    msg.setSource(63347U);
    msg.setSourceEntity(113U);
    msg.setDestination(600U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.504692202659);
    msg.setSource(3658U);
    msg.setSourceEntity(237U);
    msg.setDestination(33538U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.573479432293);
    msg.setSource(12409U);
    msg.setSourceEntity(247U);
    msg.setDestination(54433U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.228150111841);
    msg.setSource(62798U);
    msg.setSourceEntity(143U);
    msg.setDestination(47205U);
    msg.setDestinationEntity(209U);
    msg.mid = 16179U;

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
    msg.setTimeStamp(0.988132705772);
    msg.setSource(2192U);
    msg.setSourceEntity(38U);
    msg.setDestination(41468U);
    msg.setDestinationEntity(60U);
    msg.mid = 54753U;

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
    msg.setTimeStamp(0.109414034693);
    msg.setSource(28826U);
    msg.setSourceEntity(95U);
    msg.setDestination(18754U);
    msg.setDestinationEntity(25U);
    msg.mid = 18995U;

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
    msg.setTimeStamp(0.171926807545);
    msg.setSource(48010U);
    msg.setSourceEntity(225U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(8U);
    msg.state = 179U;
    msg.eta = 6684U;
    msg.info.assign("YTXOHWPZKSFIXMGAXYPNKFCIBELAXLAZGJWZFROCQSAXQJFVMJATOBIONOZDQMZKQIDBXGBLRETUYUVURHIVVNYUPSJUCTGJSNKRYKRXWERIPNHAOSLDDWPWPJVGBHGEDQEYRQEIADBBCMN");

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
    msg.setTimeStamp(0.856109273675);
    msg.setSource(5014U);
    msg.setSourceEntity(32U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(162U);
    msg.state = 241U;
    msg.eta = 24874U;
    msg.info.assign("RRSNTEBSJYSISLOIHTHMWICOUFALDHQDFBUEWUBXMHIJCDOQYTHVKSVVTNUZZRFG");

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
    msg.setTimeStamp(0.150193406355);
    msg.setSource(19106U);
    msg.setSourceEntity(45U);
    msg.setDestination(25857U);
    msg.setDestinationEntity(54U);
    msg.state = 186U;
    msg.eta = 15871U;
    msg.info.assign("DUTFIKGSJAQAICQBFLVNBTWKKLNODUFCPIPZZCXGZEOLZRXGQWVNQFTTQUGEMMC");

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
    msg.setTimeStamp(0.187736815133);
    msg.setSource(21488U);
    msg.setSourceEntity(250U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(83U);
    msg.system = 55363U;
    msg.duration = 49667U;
    msg.speed = 0.0900596534677;
    msg.speed_units = 114U;
    msg.x = 0.874884047801;
    msg.y = 0.94752029223;
    msg.z = 0.495611874116;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.8835474557);
    msg.setSource(28152U);
    msg.setSourceEntity(95U);
    msg.setDestination(33205U);
    msg.setDestinationEntity(53U);
    msg.system = 50067U;
    msg.duration = 44258U;
    msg.speed = 0.0214123426005;
    msg.speed_units = 79U;
    msg.x = 0.507867159948;
    msg.y = 0.93999590789;
    msg.z = 0.162307343619;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.239994968363);
    msg.setSource(53171U);
    msg.setSourceEntity(72U);
    msg.setDestination(37208U);
    msg.setDestinationEntity(156U);
    msg.system = 23983U;
    msg.duration = 20233U;
    msg.speed = 0.689844932854;
    msg.speed_units = 58U;
    msg.x = 0.860592395555;
    msg.y = 0.369433815697;
    msg.z = 0.40224186946;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.558240427123);
    msg.setSource(61872U);
    msg.setSourceEntity(11U);
    msg.setDestination(45678U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.707859338315;
    msg.lon = 0.556011929611;
    msg.speed = 0.974211349073;
    msg.speed_units = 129U;
    msg.duration = 58539U;
    msg.sys_a = 20955U;
    msg.sys_b = 62445U;
    msg.move_threshold = 0.0401143661619;

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
    msg.setTimeStamp(0.736852164651);
    msg.setSource(24369U);
    msg.setSourceEntity(28U);
    msg.setDestination(8323U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.670285481663;
    msg.lon = 0.634657768266;
    msg.speed = 0.336148965843;
    msg.speed_units = 178U;
    msg.duration = 11721U;
    msg.sys_a = 57242U;
    msg.sys_b = 12883U;
    msg.move_threshold = 0.229520544226;

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
    msg.setTimeStamp(0.860471535826);
    msg.setSource(3618U);
    msg.setSourceEntity(103U);
    msg.setDestination(20378U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.363651653345;
    msg.lon = 0.421040931422;
    msg.speed = 0.481154176015;
    msg.speed_units = 58U;
    msg.duration = 28058U;
    msg.sys_a = 1318U;
    msg.sys_b = 33283U;
    msg.move_threshold = 0.440972758483;

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
    msg.setTimeStamp(0.170937590271);
    msg.setSource(64442U);
    msg.setSourceEntity(152U);
    msg.setDestination(4096U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.430340143833;
    msg.lon = 0.506014294176;
    msg.z = 0.658944135776;
    msg.z_units = 143U;
    msg.speed = 0.941519260637;
    msg.speed_units = 223U;
    msg.custom.assign("VJGDNXMMZCIYWKANKMKOBZBOPDPLVFAFIZVWEQCGGLQODSYINFIEFAYHTZZOOYQKGMTHSIEGJJCEJMNDUDUUCABVPHYQNVTMMSWLMBLVCBBUYAVRVYCSNNDTWCIYPGYJZTQHFJXRRHLATEAXKTOEPU");

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
    msg.setTimeStamp(0.232491253157);
    msg.setSource(39057U);
    msg.setSourceEntity(237U);
    msg.setDestination(16816U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.211307289234;
    msg.lon = 0.262257298589;
    msg.z = 0.440331318253;
    msg.z_units = 110U;
    msg.speed = 0.0301095496239;
    msg.speed_units = 10U;
    msg.custom.assign("OJFKEZISVOYGDVRJZEDTANIJOVAZKXBRZLLVHWSJWOVFHGQCWAJGWEWBYHMGPPDVBKSFQAZBYRVTQUULNERRSYFQLKEHDCCJRIZMWWGJPOVTPELNCPMKCRYGKOUMMNFGUEXBUUWXEMTONIKJICHSZVHGHPNSVPZDXEIJMXIFUKQLATMRYDPLYHQFNXPSAMQKDQFZSBNDQAOTYEXKFBXBXFCHYCTSMBASOYQWIIHUNTCUIOGALJBND");

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
    msg.setTimeStamp(0.110353720212);
    msg.setSource(10024U);
    msg.setSourceEntity(35U);
    msg.setDestination(18813U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.589075847617;
    msg.lon = 0.817913723909;
    msg.z = 0.207470905013;
    msg.z_units = 129U;
    msg.speed = 0.0042019969025;
    msg.speed_units = 68U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.756986174407;
    tmp_msg_0.lon = 0.887718029661;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IQTHAPCEOJLSBPDWBSXJFAVTDFZNFWHTRBEVAOLTSPJRKJFAKDPABGUHJHYVRRURWHYBRMINBQPUMGTVIRHZBDYTLVGYLIMRYHSKKPASWXFOSNQJARCPQWKGYJQZEMKINOUGZJVIUAOWFUZIZAQECZMIBNTLVSGSQTMHCGXQJKMPVZWGCDXHDUTKFIVOXUMYNUEKAXOSCC");

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
    msg.setTimeStamp(0.701041881458);
    msg.setSource(65241U);
    msg.setSourceEntity(250U);
    msg.setDestination(50685U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.275146435848;
    msg.lon = 0.0442327014912;

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
    msg.setTimeStamp(0.368273168454);
    msg.setSource(42878U);
    msg.setSourceEntity(193U);
    msg.setDestination(21026U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.228701317325;
    msg.lon = 0.806656199721;

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
    msg.setTimeStamp(0.971191144989);
    msg.setSource(2384U);
    msg.setSourceEntity(212U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.647964501598;
    msg.lon = 0.685582098044;

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
    msg.setTimeStamp(0.150022022577);
    msg.setSource(58873U);
    msg.setSourceEntity(186U);
    msg.setDestination(8682U);
    msg.setDestinationEntity(78U);
    msg.timeout = 649U;
    msg.lat = 0.126415436189;
    msg.lon = 0.521174958762;
    msg.z = 0.978671574665;
    msg.z_units = 186U;
    msg.pitch = 0.30841201287;
    msg.amplitude = 0.752652149058;
    msg.duration = 14526U;
    msg.speed = 0.936932323524;
    msg.speed_units = 200U;
    msg.radius = 0.29561906615;
    msg.direction = 82U;
    msg.custom.assign("PBWFELXCHGMRHAWUANDNSOKVYOVKAFHHOLIBWAORZXWRWSPPUUUFCSAJTLGVEDKKJAQKZJJCBMYAWJGMRVMGYMO");

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
    msg.setTimeStamp(0.637707483026);
    msg.setSource(50922U);
    msg.setSourceEntity(250U);
    msg.setDestination(15259U);
    msg.setDestinationEntity(213U);
    msg.timeout = 45672U;
    msg.lat = 0.068556393025;
    msg.lon = 0.909595614547;
    msg.z = 0.0134328594945;
    msg.z_units = 194U;
    msg.pitch = 0.508944376223;
    msg.amplitude = 0.474858262324;
    msg.duration = 39055U;
    msg.speed = 0.22143368443;
    msg.speed_units = 31U;
    msg.radius = 0.447090227591;
    msg.direction = 126U;
    msg.custom.assign("KXXBCTERERLFMITRAFJZTBHYAKGRVUCPBRNPSTMCGJBZOVYCGOQVREGMDZQMTFGXJUPONZBLRJICFENPMXXWKYJITPNOMGZODUEVUSFABOJHYEWBLUMGUTIPSRSMQYFSYXHVDFA");

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
    msg.setTimeStamp(0.493051207192);
    msg.setSource(7624U);
    msg.setSourceEntity(48U);
    msg.setDestination(4122U);
    msg.setDestinationEntity(217U);
    msg.timeout = 8287U;
    msg.lat = 0.193002693932;
    msg.lon = 0.709455945356;
    msg.z = 0.0775332837807;
    msg.z_units = 28U;
    msg.pitch = 0.317784135287;
    msg.amplitude = 0.158208826068;
    msg.duration = 53785U;
    msg.speed = 0.880616205542;
    msg.speed_units = 159U;
    msg.radius = 0.203678902487;
    msg.direction = 114U;
    msg.custom.assign("YQPHTCFVOCOIXSUGJZPDEVTLOCUPLNOHRHWP");

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
    msg.setTimeStamp(0.178245326331);
    msg.setSource(38845U);
    msg.setSourceEntity(188U);
    msg.setDestination(51964U);
    msg.setDestinationEntity(18U);
    msg.formation_name.assign("OLGPRBEDLEUNLBBAQQGKOSXPQXNMSJYGKOKTVHMRNZELJUGTWKWIYWPXXJFSDCGLHCMVTHLAQGMCFIKWEGULYYHSISRAATPAVJFUIOMPIGBODICZYZTSVLHZEPVNYNQTAFWOUHPKCDTGPEXKUQBYOHKJKBQSXKPDVDJXECTZQFVRSDWFEHBIME");
    msg.reference_frame = 138U;
    msg.custom.assign("DJGRVDKUBGMQLDHCMSGXQHSLCYMBVYDACNWIACKPQLAYQHZMQPKJFRGZFNFJTEQXAUALMALTDWBIWYBIHVOCRWYJEPUEXUZPFUISXKUQIBZRZTSPEHBVWHNXUUZWSNAEDLHOKGBTVPKGAAJXMTPPCYFISJMUNKKNTOSEJNVBFDCEJJGGOICHMNSCFFHZWTLQRXYKORCMRMGLRRELNOQBTBWGHOZIFKYXEPVDOYTSNXF");

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
    msg.setTimeStamp(0.202214320461);
    msg.setSource(29427U);
    msg.setSourceEntity(116U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("ACIGNCCITOOTHSWUIOQWTGNUTSLLKIWHNYFDSLAAXQLFIAEXVYAWAARDRSTESGQRVPLZRMFOIPFWSEQDXOKMDNDEBRKLHBVGQDRUFEBWLFFPYZCKTEMJXUMGUKUBANJKOEXZRWKIJXD");
    msg.reference_frame = 152U;
    msg.custom.assign("YGXCZKKHDVTMIFTDVEQRDECPOXLJKLSZZJBOVCEULONBODATLCOYWOYMXNAHVZVHZLFYVWSGFWNBIRNJLZGEYCKWCSDCMGXYOEIDZGGUUTJFZNDTBWQEBQSXQYGWTRTVUQKUNEAAQDIHJYJELUDHLVIOFFRJXBUQKXQVRMFMPSLOPYHUEKOFAGHIERWNWMLZMPDSBBPAXHAYRXZRUNVMWQXIHGKIRRPSWKSJIQNAIPUBJPFMSACTCMFHPJGS");

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
    msg.setTimeStamp(0.696883373087);
    msg.setSource(60425U);
    msg.setSourceEntity(102U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("HYSICEAYNUZCFWJFVPOABSBKGWUPSQAOTGAZGBOOJGPKPYJSBRNCXVLDNKMOAZOLPFENBTQOBVWFIRUMXAWRJEGGOMMNXISCIFJXJUBZXQEVLCUTMNJYQHUIRWUWZTNBTGCUG");
    msg.reference_frame = 61U;
    msg.custom.assign("HHWZNPRBZTSTKLDRCXLPGLGXZANIDHFLWLTEYIUZEUORBIVKLRKDEMNNNXWPQLHSXFGFQJQECYZFKLMQMGSDBHYJJIKREHUWOVVSWIFUFAVKKZSATOSTBLFYXCATXULCWJJKPFDXWBKNTNNPBGQNEYZIBCRAPHAJRAIVEISZMYPHGOBIYMZMCZUQBFTJDMXYWURTSVHYOJMKICOXGUPFUAYGRAOSMQVTEACW");

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
    msg.setTimeStamp(0.0239913651114);
    msg.setSource(36573U);
    msg.setSourceEntity(55U);
    msg.setDestination(35460U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("OSQCXQNXWWILSKSCXGMVUMOAWHG");
    msg.formation_name.assign("LONQNDZCUWUEPZLFQIHWPIJKNVPXBYHTWLQMPVEXBOELLVFOTDIKHEUNGXREAPRHUBWVYOCUGKJNTRJZQNPMFTHMDAGLJIMARSYMSVFZOWAKPZIYTSKAYWC");
    msg.plan_id.assign("VCBEGBCKASRJYMBWCXLKAKXMJXWXKFWLWZRNAAOTNKPUPZOVTYLCSDYNBSDUTFGSIFBVVAPWWEQLTHLUTCXMARQJMHKRFRRKI");
    msg.description.assign("SOGILSEBVUZGVJLEKIPLXCGDDMNNOYCPGOAIPYOCQTTIPTSMSFAZNXPFRAVAEDUWXUBRCWXZLMBUKXRHVFFQGZZELGFLZUIUKSVEOAKDDYOPOXYCPYEBDQQIPBABWKVQJQBMRSLEMUJBHNWTPFNXUWRCIEAXNSLSTHCMHWHKKRVLWJJBSGDIDSTAFDYENFQXRWIYQOZDJRJKKPTRCWMEVHG");
    msg.leader_speed = 0.331444060324;
    msg.leader_bank_lim = 0.586713255539;
    msg.pos_sim_err_lim = 0.43680443136;
    msg.pos_sim_err_wrn = 0.653434418628;
    msg.pos_sim_err_timeout = 44697U;
    msg.converg_max = 0.00853369891265;
    msg.converg_timeout = 41896U;
    msg.comms_timeout = 50138U;
    msg.turb_lim = 0.0464873643695;
    msg.custom.assign("VNCKHLMVASINFVJYPNEPDUTSZGCDBKQMAEVDUQCVMASHQRLILDOJFUBXYIJQOOWSHGRXHNSAFZZUTFSSPXIZNTXFOCOUNSRRTPYZTBIXWNIRMGQPDSQJLYBBUMBHDRYYZMUWXQVNBYOCEWQGMBEEYGXMEPTBYVLFJUITFNLJNVTDRGFJZPKADOVXGOALXGZMEBCHHQMLQDAFRATCKVFKWSHHXPRCIJGKWPEIGILEWO");

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
    msg.setTimeStamp(0.681366621728);
    msg.setSource(52132U);
    msg.setSourceEntity(73U);
    msg.setDestination(30497U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("MFTWTIHDMEXWHFQOHNBQCRKJVAIBWBKLXHEZBDUUVFOZMGUWLUQXIPWIRLVKLBUHCOOINHOMEGIGRCNXJYKLSHIVTNYFAKZCZTTOTCRXZPZUBKZXLJE");
    msg.formation_name.assign("OAFXACDASPASCNSJZIAPQPONLHTGMQMIBAGZZRIEWVDFHKREIWPKRBQTDUTBIJSPZYJHXNFXEHRVTWVSYUYQCCEQXLITHLMLFVNGOVKUMGUJCQFUTGCHZPNEKNHOURFWVXMWTUMZQFRNPDFQHMOZWAFNKYLWLEMBLQHQRRKMGIWDVNARI");
    msg.plan_id.assign("PMDYOCXCBEMXFZMXBQWGYVWNKSQCPTZTKRSYNHVQUIGTLUGDRDWRTMZNUNCOJTVIXFPIFXEULFYNQMKOCPRNAYUSTHFNVISJWAGJJZKJMRPQJWATYERBAJMIWLIDOEPNHHWBZHTGPLMEEGAWEUOSEYVJZWAQSKXGCLIOQGPAHSBQRIOQPPBOGDIQCB");
    msg.description.assign("FWDRTVJKYPUTWBVUHGNOFKYQDTQLCJBDEZYCEUYYERCTEKBAIXHHTIBTJV");
    msg.leader_speed = 0.656755036524;
    msg.leader_bank_lim = 0.841350986232;
    msg.pos_sim_err_lim = 0.798806328678;
    msg.pos_sim_err_wrn = 0.229681275768;
    msg.pos_sim_err_timeout = 8584U;
    msg.converg_max = 0.672655912897;
    msg.converg_timeout = 23070U;
    msg.comms_timeout = 59255U;
    msg.turb_lim = 0.802394644255;
    msg.custom.assign("SEQINEGSDUPKYFLNTCJRSVBTRLZRYKYGIGCVAIUCVREFBDRTYBMWTGBPREXJDBWRYCOIKLZPCKHSLCKAUSXGBYZBASKMJFDNOWWOJOMXZMSMXUXBANLGTRRUZKPNKZPDQIQOAUOEQHAQELUQJFUSJHGNQNLHJLOSMCDHYIIOEEBIVWXFNMWHVHZKUWOHLZXZYWDLTJYZFQCTXDHJPEANAWPYDTVXGCTHWXFPVMGV");

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
    msg.setTimeStamp(0.565187177849);
    msg.setSource(21193U);
    msg.setSourceEntity(50U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("HZQQICNTQJYKNJXJJFZPXCCYAMFSAYNPLYHPFBQIPEDNLODRCRINHDPXFMZULEPKPZWVDTSTNUQZCKQOFIZMAROUAGVLBVLHTWOXYDSMUESXEKUJETFI");
    msg.formation_name.assign("VNNQXHKUEBBELEOVEGTVDBCNZHFJLIIIYWGQUCPNGAXKIACSKLBUOGNODRFBPFYXSBWEPTNZIYRXQSTGCAOMQVMRYQLKRJWKUFLRWZDTQXVK");
    msg.plan_id.assign("MHZNEZQJGFJAHOMJBFLHDSGMNVPQVKSYDFVLFPJKCBGIXCWUQYEWDPPMZLXIVQQIUJECKPOEWCOKPZEABSUXDJSTNIOIRITTSYSFNVTFDHVZFRUXSTCHDUBXALGUATMMRWILGDBXYXKEXITNTRDKUIAHBOGLKCRLZWERPBFJPKYMXWIOYHNLOEASSCOAGTWRTNGPCFVGHHZUJBBKODPDYMWYZRQVRYUXQSZJOWQCAYLHBJZRNLAF");
    msg.description.assign("JUZXZTQWTPLGIBGWVJNATWFJNZCCTTHZNRPAQIMIGHVQGPJCZYZBKVVDMVFOJOROFRAHBFOLBCOSNQDGFPXSSKGLNRYTKEFEJMAVDRRQKFOHHNDBWLCNMTACBDBEXWWJLTUKBUIMSHRLILKDGDMURJECEQZXUWSVPBUOOLXGPHKYXWTYG");
    msg.leader_speed = 0.229801926731;
    msg.leader_bank_lim = 0.987284419897;
    msg.pos_sim_err_lim = 0.347613176504;
    msg.pos_sim_err_wrn = 0.169810519708;
    msg.pos_sim_err_timeout = 63705U;
    msg.converg_max = 0.596701949914;
    msg.converg_timeout = 4392U;
    msg.comms_timeout = 6672U;
    msg.turb_lim = 0.425532565094;
    msg.custom.assign("MIBQYPDXGKEXPTWEVSINNMCNKSHAJPBJDGSVILRQIZJCCA");

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
    msg.setTimeStamp(0.419734169446);
    msg.setSource(43764U);
    msg.setSourceEntity(165U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(101U);
    msg.control_src = 55955U;
    msg.control_ent = 191U;
    msg.timeout = 0.657391373627;
    msg.loiter_radius = 0.98761682546;
    msg.altitude_interval = 0.433289996305;

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
    msg.setTimeStamp(0.280143023429);
    msg.setSource(58575U);
    msg.setSourceEntity(95U);
    msg.setDestination(24807U);
    msg.setDestinationEntity(40U);
    msg.control_src = 12464U;
    msg.control_ent = 139U;
    msg.timeout = 0.813541440211;
    msg.loiter_radius = 0.668934550316;
    msg.altitude_interval = 0.52101266438;

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
    msg.setTimeStamp(0.696491065778);
    msg.setSource(14390U);
    msg.setSourceEntity(244U);
    msg.setDestination(19291U);
    msg.setDestinationEntity(236U);
    msg.control_src = 5838U;
    msg.control_ent = 71U;
    msg.timeout = 0.880058384958;
    msg.loiter_radius = 0.601244222713;
    msg.altitude_interval = 0.874484242107;

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
    msg.setTimeStamp(0.572679806504);
    msg.setSource(62334U);
    msg.setSourceEntity(100U);
    msg.setDestination(59348U);
    msg.setDestinationEntity(168U);
    msg.flags = 62U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.882827762168;
    tmp_msg_0.speed_units = 109U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.253243123059;
    tmp_msg_1.z_units = 172U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.488158054448;
    msg.lon = 0.109216823729;
    msg.radius = 0.594036792135;

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
    msg.setTimeStamp(0.685319446977);
    msg.setSource(13176U);
    msg.setSourceEntity(245U);
    msg.setDestination(39911U);
    msg.setDestinationEntity(222U);
    msg.flags = 186U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.481458296465;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0540950988308;
    tmp_msg_1.z_units = 195U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.517725804806;
    msg.lon = 0.636130719849;
    msg.radius = 0.39914911607;

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
    msg.setTimeStamp(0.26480255049);
    msg.setSource(42734U);
    msg.setSourceEntity(52U);
    msg.setDestination(40751U);
    msg.setDestinationEntity(63U);
    msg.flags = 210U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.554059140171;
    tmp_msg_0.speed_units = 154U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0467855520659;
    tmp_msg_1.z_units = 134U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.327628118714;
    msg.lon = 0.65572108814;
    msg.radius = 0.908103723726;

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
    msg.setTimeStamp(0.586201566303);
    msg.setSource(36797U);
    msg.setSourceEntity(235U);
    msg.setDestination(33486U);
    msg.setDestinationEntity(82U);
    msg.control_src = 6827U;
    msg.control_ent = 223U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 96U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.494761570956;
    tmp_tmp_msg_0_0.speed_units = 219U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.458863355235;
    tmp_tmp_msg_0_1.z_units = 165U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.636515922697;
    tmp_msg_0.lon = 0.279895273261;
    tmp_msg_0.radius = 0.667561296131;
    msg.reference.set(tmp_msg_0);
    msg.state = 237U;
    msg.proximity = 32U;

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
    msg.setTimeStamp(0.952949640158);
    msg.setSource(23031U);
    msg.setSourceEntity(160U);
    msg.setDestination(16663U);
    msg.setDestinationEntity(45U);
    msg.control_src = 6699U;
    msg.control_ent = 243U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.38414934838;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.331617653093;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0893454228104;
    tmp_msg_0.lon = 0.958190410015;
    tmp_msg_0.radius = 0.481061238166;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 194U;

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
    msg.setTimeStamp(0.941266452143);
    msg.setSource(59619U);
    msg.setSourceEntity(153U);
    msg.setDestination(41067U);
    msg.setDestinationEntity(31U);
    msg.control_src = 63540U;
    msg.control_ent = 62U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 10U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.816182516243;
    tmp_tmp_msg_0_0.speed_units = 251U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.13890781737;
    tmp_tmp_msg_0_1.z_units = 205U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.64088779006;
    tmp_msg_0.lon = 0.555915620021;
    tmp_msg_0.radius = 0.75847206978;
    msg.reference.set(tmp_msg_0);
    msg.state = 72U;
    msg.proximity = 7U;

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
    msg.setTimeStamp(0.452428887215);
    msg.setSource(36704U);
    msg.setSourceEntity(139U);
    msg.setDestination(54157U);
    msg.setDestinationEntity(253U);
    msg.ax_cmd = 0.595242525852;
    msg.ay_cmd = 0.64841868835;
    msg.az_cmd = 0.743822626321;
    msg.ax_des = 0.295805874173;
    msg.ay_des = 0.421011363808;
    msg.az_des = 0.756677850189;
    msg.virt_err_x = 0.0152172603374;
    msg.virt_err_y = 0.912846863292;
    msg.virt_err_z = 0.14899119801;
    msg.surf_fdbk_x = 0.0810334021258;
    msg.surf_fdbk_y = 0.565966135779;
    msg.surf_fdbk_z = 0.00837159168009;
    msg.surf_unkn_x = 0.971044225984;
    msg.surf_unkn_y = 0.917114069821;
    msg.surf_unkn_z = 0.190140477625;
    msg.ss_x = 0.646739070246;
    msg.ss_y = 0.408409314397;
    msg.ss_z = 0.899755005382;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GHYUPZTVJMYYSUQTQQCWGQYJEQVVEGFURNRZBPHTEOEKXQJDWBOORMSJKHHUFOFNWDMGITOJCYUXZNHNMNNXSDUEBKAYRGPXSCGWSRMUZRPEQIO");
    tmp_msg_0.dist = 0.105337707548;
    tmp_msg_0.err = 0.702042592285;
    tmp_msg_0.ctrl_imp = 0.700946869392;
    tmp_msg_0.rel_dir_x = 0.703807526981;
    tmp_msg_0.rel_dir_y = 0.902666889903;
    tmp_msg_0.rel_dir_z = 0.758078676951;
    tmp_msg_0.err_x = 0.0172647921007;
    tmp_msg_0.err_y = 0.664943013128;
    tmp_msg_0.err_z = 0.938183996216;
    tmp_msg_0.rf_err_x = 0.354272748165;
    tmp_msg_0.rf_err_y = 0.302049831899;
    tmp_msg_0.rf_err_z = 0.16380748813;
    tmp_msg_0.rf_err_vx = 0.117961944305;
    tmp_msg_0.rf_err_vy = 0.324932977992;
    tmp_msg_0.rf_err_vz = 0.633584962802;
    tmp_msg_0.ss_x = 0.711661077087;
    tmp_msg_0.ss_y = 0.911465783903;
    tmp_msg_0.ss_z = 0.459629089863;
    tmp_msg_0.virt_err_x = 0.177100564461;
    tmp_msg_0.virt_err_y = 0.872806436591;
    tmp_msg_0.virt_err_z = 0.136152445835;
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
    msg.setTimeStamp(0.251910028071);
    msg.setSource(16410U);
    msg.setSourceEntity(190U);
    msg.setDestination(30985U);
    msg.setDestinationEntity(237U);
    msg.ax_cmd = 0.698027056141;
    msg.ay_cmd = 0.162825454032;
    msg.az_cmd = 0.466617081849;
    msg.ax_des = 0.951334250017;
    msg.ay_des = 0.174050636372;
    msg.az_des = 0.885024825601;
    msg.virt_err_x = 0.629472458969;
    msg.virt_err_y = 0.10772644056;
    msg.virt_err_z = 0.984472412739;
    msg.surf_fdbk_x = 0.500340272475;
    msg.surf_fdbk_y = 0.016467582688;
    msg.surf_fdbk_z = 0.292755852835;
    msg.surf_unkn_x = 0.880962509601;
    msg.surf_unkn_y = 0.408180486979;
    msg.surf_unkn_z = 0.613309769565;
    msg.ss_x = 0.900105218562;
    msg.ss_y = 0.673770132897;
    msg.ss_z = 0.107538158301;

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
    msg.setTimeStamp(0.753415415862);
    msg.setSource(55456U);
    msg.setSourceEntity(222U);
    msg.setDestination(985U);
    msg.setDestinationEntity(73U);
    msg.ax_cmd = 0.655236022657;
    msg.ay_cmd = 0.304435910512;
    msg.az_cmd = 0.080936360712;
    msg.ax_des = 0.178532160096;
    msg.ay_des = 0.867907061325;
    msg.az_des = 0.0312905680359;
    msg.virt_err_x = 0.857837439245;
    msg.virt_err_y = 0.738876523905;
    msg.virt_err_z = 0.078454670521;
    msg.surf_fdbk_x = 0.0728490544319;
    msg.surf_fdbk_y = 0.62803196065;
    msg.surf_fdbk_z = 0.766481409412;
    msg.surf_unkn_x = 0.67971845686;
    msg.surf_unkn_y = 0.295448735591;
    msg.surf_unkn_z = 0.0347486330483;
    msg.ss_x = 0.621234437703;
    msg.ss_y = 0.885214077402;
    msg.ss_z = 0.838339157124;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YNFBPKLUMAXDKXHTOLIQXQLHNRTNKNCLDQAFSIQMBUOBJPGNMRWIKCRTCAKYOWCDJVBWMACXRZYOAJMMSNLQHIGPTPXAKYHUECXFZRGVSFHCGCXQILDFGPXQYRUZFNHQCLEJEUBAROADURPKGTSVRFBIMJVTSDXIVVUWWFUSOTJOGSNWPMAZDEWEVWGPFZVSTBUQRSEDPZNWLTZUHMJJYJNOIIVDQZYGYSOBLHWEBEVYBZHFKIHEPK");
    tmp_msg_0.dist = 0.48414745072;
    tmp_msg_0.err = 0.132915915297;
    tmp_msg_0.ctrl_imp = 0.579806184743;
    tmp_msg_0.rel_dir_x = 0.400031814571;
    tmp_msg_0.rel_dir_y = 0.0668515545356;
    tmp_msg_0.rel_dir_z = 0.87377876231;
    tmp_msg_0.err_x = 0.0641276032749;
    tmp_msg_0.err_y = 0.444104285808;
    tmp_msg_0.err_z = 0.301503116199;
    tmp_msg_0.rf_err_x = 0.854136724692;
    tmp_msg_0.rf_err_y = 0.172410039286;
    tmp_msg_0.rf_err_z = 0.476689866916;
    tmp_msg_0.rf_err_vx = 0.773272424081;
    tmp_msg_0.rf_err_vy = 0.628855838745;
    tmp_msg_0.rf_err_vz = 0.460007536807;
    tmp_msg_0.ss_x = 0.50429164063;
    tmp_msg_0.ss_y = 0.915306566241;
    tmp_msg_0.ss_z = 0.978892950835;
    tmp_msg_0.virt_err_x = 0.0887151749654;
    tmp_msg_0.virt_err_y = 0.40192117683;
    tmp_msg_0.virt_err_z = 0.283575388684;
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
    msg.setTimeStamp(0.784839844616);
    msg.setSource(3234U);
    msg.setSourceEntity(159U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(102U);
    msg.s_id.assign("XPJDLTWZALDNFQWJZXSKAKPPVXOUFGQQLWXHRCIXEEVVIOEEAHYZFHKETOFBGPMCCLUCFKMXJJNYPUEMVCQXZBOVYTJBRWASETGKWWICXCSVYKZIMLHMTAFALZNJUJQGRSGTIDWFUDYJQSBGJLENYSXITZISGOKTZIQBPCOR");
    msg.dist = 0.128015182341;
    msg.err = 0.310661671269;
    msg.ctrl_imp = 0.692173660861;
    msg.rel_dir_x = 0.637574382059;
    msg.rel_dir_y = 0.190580641053;
    msg.rel_dir_z = 0.262890073062;
    msg.err_x = 0.0792524319149;
    msg.err_y = 0.640175476765;
    msg.err_z = 0.113095390121;
    msg.rf_err_x = 0.700429170621;
    msg.rf_err_y = 0.212459800641;
    msg.rf_err_z = 0.0134039559119;
    msg.rf_err_vx = 0.921975519525;
    msg.rf_err_vy = 0.652910975048;
    msg.rf_err_vz = 0.992624212485;
    msg.ss_x = 0.66259044108;
    msg.ss_y = 0.877084929836;
    msg.ss_z = 0.67646986894;
    msg.virt_err_x = 0.812017079653;
    msg.virt_err_y = 0.101014291574;
    msg.virt_err_z = 0.615439982005;

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
    msg.setTimeStamp(0.166311905104);
    msg.setSource(28765U);
    msg.setSourceEntity(73U);
    msg.setDestination(14151U);
    msg.setDestinationEntity(41U);
    msg.s_id.assign("INWKIZFJLQJDXDAAIGOZHYGAKTXHGNHUCNOKTVLMBPDZWPDLNXYWMNWERJNUHNUCPRZVDCXDGOLREQIUZVDFHEBSAAEOKVRSFUBUVQFKMKEPKJGUIADECTTJFUQDFIHQCVQPHEJTXJOORJBPNBEHHUSYZYORYMKPFYWXWQWKBTXXSFSBAFPGYOLXNJMPBWNYLMCIVMVBOGLGLZKSYIVARGUQSFCQDRLMXCHTCTE");
    msg.dist = 0.564014384042;
    msg.err = 0.994318182423;
    msg.ctrl_imp = 0.382830141512;
    msg.rel_dir_x = 0.694521473109;
    msg.rel_dir_y = 0.905800656576;
    msg.rel_dir_z = 0.355370441757;
    msg.err_x = 0.0223001972887;
    msg.err_y = 0.674617915033;
    msg.err_z = 0.94176052792;
    msg.rf_err_x = 0.704189265377;
    msg.rf_err_y = 0.775826343806;
    msg.rf_err_z = 0.157679614043;
    msg.rf_err_vx = 0.730100855115;
    msg.rf_err_vy = 0.234347008746;
    msg.rf_err_vz = 0.9281418613;
    msg.ss_x = 0.435866538721;
    msg.ss_y = 0.691138168279;
    msg.ss_z = 0.868181510026;
    msg.virt_err_x = 0.419330367176;
    msg.virt_err_y = 0.823418215959;
    msg.virt_err_z = 0.900615963061;

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
    msg.setTimeStamp(0.624862941468);
    msg.setSource(41055U);
    msg.setSourceEntity(144U);
    msg.setDestination(35406U);
    msg.setDestinationEntity(69U);
    msg.s_id.assign("FMHOQVHKJREQYAPWFUTLMMFBOHSGVGGFFWIRETQKURLGMQISLTJDRXLSKAMIZRGXUVDPIPKYXSSMCDVVLTGXKNUIKLOYQBYLTHTVXNBZSIDQITODEYSBNDERPFWAWARHJRCUFUNVJWVGJJJLPHAZN");
    msg.dist = 0.829496246721;
    msg.err = 0.869281629567;
    msg.ctrl_imp = 0.412060175594;
    msg.rel_dir_x = 0.259595073627;
    msg.rel_dir_y = 0.840159970724;
    msg.rel_dir_z = 0.0320003301346;
    msg.err_x = 0.874135046645;
    msg.err_y = 0.781347193532;
    msg.err_z = 0.846652666859;
    msg.rf_err_x = 0.564646897122;
    msg.rf_err_y = 0.883099769799;
    msg.rf_err_z = 0.977829965716;
    msg.rf_err_vx = 0.26228274458;
    msg.rf_err_vy = 0.83945499743;
    msg.rf_err_vz = 0.662279811014;
    msg.ss_x = 0.824992565426;
    msg.ss_y = 0.795744487425;
    msg.ss_z = 0.311573955754;
    msg.virt_err_x = 0.0284636287816;
    msg.virt_err_y = 0.835255268708;
    msg.virt_err_z = 0.0913484698501;

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
    msg.setTimeStamp(0.599567677129);
    msg.setSource(37398U);
    msg.setSourceEntity(164U);
    msg.setDestination(58674U);
    msg.setDestinationEntity(137U);
    msg.timeout = 24920U;
    msg.rpm = 0.191360243044;
    msg.direction = 45U;
    msg.custom.assign("CTBQYUEIJDQGYPCIAZAJSORUJLARRGTXECMCQCXFOGQWIFNTHKUTBGMAUPNZFDEZJCVNXVYKKNYBABJGTGJVSOXFLNEMPLHFFYQDDIOEZEHIYKOFFOBWETEWAXGUJTNNVXZZMBKJWJTMRZOLSXCEENYOVHWSRGVUBKKPSKLMMSYPHJZARHMMNQDLNFUKARBVHUWZLGOXRCIVVPFRGULHPDQBCXQKWYDAZSICDTDABDXPLUSO");

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
    msg.setTimeStamp(0.816293391969);
    msg.setSource(8061U);
    msg.setSourceEntity(114U);
    msg.setDestination(5907U);
    msg.setDestinationEntity(109U);
    msg.timeout = 8213U;
    msg.rpm = 0.329375671529;
    msg.direction = 95U;
    msg.custom.assign("WWHYPELDZBVEJNJVWPBWZIYHOLWKNQBXMELRAKTQXOFKDYQPGDPZSHRQOLKZFVKSJTSGGYGBBICJZCFGSAAGIRFDHXAIXTHJEQONUOMSAPUDIZUDVGFUGZGQLPJCMPOIARRUQMZDUYVLLIAKRHAEEYNMOXRIMHRMYCPSYXYCNFYFODXUQNKBDJCLNKSIATJMENCXDPWTGTRBSNLJMQHEHFUOVOWTWVVNZJSLFTWCEUIKABCXMVPHS");

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
    msg.setTimeStamp(0.200139308901);
    msg.setSource(41116U);
    msg.setSourceEntity(60U);
    msg.setDestination(25382U);
    msg.setDestinationEntity(189U);
    msg.timeout = 14142U;
    msg.rpm = 0.101475384683;
    msg.direction = 222U;
    msg.custom.assign("AENCLMDGHHUYIKCAYRZHEQBCGFXLJONNR");

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
    msg.setTimeStamp(0.277937886694);
    msg.setSource(30591U);
    msg.setSourceEntity(144U);
    msg.setDestination(24764U);
    msg.setDestinationEntity(41U);
    msg.formation_name.assign("GGMHYFELEMDVWFXDPHUJXEEWL");
    msg.type = 13U;
    msg.op = 6U;
    msg.group_name.assign("QLLROXCPEWVDONDHCZCOPQXAAAINBJZOXNBCHNEEREXRUSJIYAZSTASIWULQNQKYNFBOTQFOAUWWIKKAMDWZWVGYGNYTAPUNKPECUMJIVLFGHWYSYIVDLMXSZCHKTKIGTBFPRMWFGDJHTFLSVMAOCGFPZTGIQDJLMVOXDGWQKCURQRCIEXGCRXKOWNEPUODVAMMXZPRUHR");
    msg.plan_id.assign("FKLQADBGYOZQNVUDDMVDRJDZPALJGTUTWWNCFMTRMTQIISHQKKFHWAVATXZNNLEFBZRYPKFVVCDIZNSKBQIJCXXQCBIGGSUPAFWWPYXMYQOVSYEPWBOSSTTPUBVJKKTZNEEACLYZL");
    msg.description.assign("NRNYTNONTWBCSJWJD");
    msg.reference_frame = 199U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15039U;
    tmp_msg_0.off_x = 0.177925727732;
    tmp_msg_0.off_y = 0.445478169397;
    tmp_msg_0.off_z = 0.574688316045;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0516701286711;
    msg.leader_speed_min = 0.0454325860746;
    msg.leader_speed_max = 0.0477916867091;
    msg.leader_alt_min = 0.0630571066402;
    msg.leader_alt_max = 0.765312427133;
    msg.pos_sim_err_lim = 0.675314784457;
    msg.pos_sim_err_wrn = 0.215130639079;
    msg.pos_sim_err_timeout = 9788U;
    msg.converg_max = 0.0630921261416;
    msg.converg_timeout = 28683U;
    msg.comms_timeout = 41874U;
    msg.turb_lim = 0.510129625121;
    msg.custom.assign("QEMBAVEQRKHEXCVRAFNDHDZFZMOGIWRRGTEYYEVRGEYBCTRCOKTLACYJGJIJHOKAOZISOJUMWMHXHPJJALYVAILMWNYFVZDGKBGPPQNPWXFGQRELSHAMIMUJASXDTITTVUDELKCMBLFIWNKYRVNOGRCSFXWVHQNMCMRWAZDSTFKJUKOYLOUENCLISKCFJFPUDPTQKNLDIUWXQVVZNZWJBPZZUUUDAOINCPQ");

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
    msg.setTimeStamp(0.861660377896);
    msg.setSource(29586U);
    msg.setSourceEntity(215U);
    msg.setDestination(10812U);
    msg.setDestinationEntity(219U);
    msg.formation_name.assign("AITGNADHYCLEQZSYBKFGUCWLBEPPSQMVR");
    msg.type = 213U;
    msg.op = 64U;
    msg.group_name.assign("KPSAQFJHCTIDVNRCAHNRQBQOQTYCKYUSGNJUVFAAPQBIDPHRWQMCFWEVXZZIPXWYZDVJLLVXADGGKWMEPAEFOZORHGRAFJHXLFTRHSBQDUJJKPTZOWEDXKMMBXXILGUZDQMJOAUSEWRSLCNSHNSGCKIHKWJKFYSKTXOYCGBCGHLPPTWILOIEZXIMJFSCVWUYBOLROBYNZTDMZAJYNTBOTLIUUNZLQDTEDFMSAHYKXIPEURUQV");
    msg.plan_id.assign("WSTWPSXEQMQMULIUWVPOMROOBBBHDYPKKNXWXMQHILAUZFNMXGIMEJZDSDZGAHTNUOYDSTUHAIYPILTLNCNJTYAYOE");
    msg.description.assign("AXBUHGJGXJHLTXQYUGGLNAYSDBVZKNEBOZPVSNMYVQFZNDFXKSDZOYAXCOUEDRKDCGAFKPCJBCKCWXXMMGLFOKZAWUCEWULOWUMATWXTBLSIJMIFSRLMGUPHYYWQECIKXJIWCVOJEQIGRQZFSKNHLMOSEHJXZGGHHVMBOHWPOWTEPCNFNTVZJLCAKZDRAPUNRULAYPTI");
    msg.reference_frame = 77U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19969U;
    tmp_msg_0.off_x = 0.0744555950265;
    tmp_msg_0.off_y = 0.346638490291;
    tmp_msg_0.off_z = 0.944434328297;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.962486398788;
    msg.leader_speed_min = 0.409025131473;
    msg.leader_speed_max = 0.592294524708;
    msg.leader_alt_min = 0.70404681864;
    msg.leader_alt_max = 0.625943098048;
    msg.pos_sim_err_lim = 0.503746480215;
    msg.pos_sim_err_wrn = 0.321390742582;
    msg.pos_sim_err_timeout = 21055U;
    msg.converg_max = 0.988923430052;
    msg.converg_timeout = 5107U;
    msg.comms_timeout = 28580U;
    msg.turb_lim = 0.953855004536;
    msg.custom.assign("QPACEEHWFALUVEWQHSKEZUYVVORNCFMXQRQPYZEYAZIHTOADLOUWXXMVKOHSGPUTHBMRPYQJITMYLOSLCXKDTTTVMCPPKLEUCBGYAHGOGEUSTCSPJDZECNCNIWZFSPIVBLJUZNFLJJEFSBTQHUSIBXMZFWGHJLCPRHILYDQGOHMBDTFKEXSB");

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
    msg.setTimeStamp(0.0173284561864);
    msg.setSource(47408U);
    msg.setSourceEntity(249U);
    msg.setDestination(43020U);
    msg.setDestinationEntity(65U);
    msg.formation_name.assign("MEOHWXJRDOGNBSINMTJTULHAPXAWZXTRCWJQCHWMPTBATZ");
    msg.type = 151U;
    msg.op = 108U;
    msg.group_name.assign("EBLBKAVKMIDITXRSZHLOMUWLAHWXBULJPTYQSMOFLFFZQJXHSNRBTYVCZWONYDEFIEJGEOYIUYRWQIASTKZGUPTDQHMRVQEDBSCDZYVXHBLQKNRGHPNXMHTPXIEGLACZNABMFXIVLSRFTBPQBLZPJYWJMDCUTTAKFKLRGQUFFH");
    msg.plan_id.assign("BKUCFHPRZNJMIPJQKYLFOVNDXTKHYCYEUBKVLTCQYGWKJLWROAWRSCMREKUFGDBIOIZMKUNDAIPVOTPVKSZUNJXZNNJQPPMBBIYSXFA");
    msg.description.assign("EVGAWKSQUNGZUZLBJXSNVFJHYUEONVPMIBOXNHTCKFMNATJWEKZJVRFLHXVKOKDJEBXEWPCMOZLSBLH");
    msg.reference_frame = 34U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6040U;
    tmp_msg_0.off_x = 0.951199500466;
    tmp_msg_0.off_y = 0.67572168991;
    tmp_msg_0.off_z = 0.747762604788;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.457885567575;
    msg.leader_speed_min = 0.955862047762;
    msg.leader_speed_max = 0.188686840575;
    msg.leader_alt_min = 0.325781364716;
    msg.leader_alt_max = 0.18449386703;
    msg.pos_sim_err_lim = 0.671124700152;
    msg.pos_sim_err_wrn = 0.334506291622;
    msg.pos_sim_err_timeout = 50172U;
    msg.converg_max = 0.488865207153;
    msg.converg_timeout = 53845U;
    msg.comms_timeout = 49997U;
    msg.turb_lim = 0.3338045524;
    msg.custom.assign("WNVEWKHPXRIQDC");

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
    msg.setTimeStamp(0.357455531995);
    msg.setSource(5452U);
    msg.setSourceEntity(141U);
    msg.setDestination(7236U);
    msg.setDestinationEntity(106U);
    msg.timeout = 4706U;
    msg.lat = 0.581525134328;
    msg.lon = 0.617605201194;
    msg.z = 0.0724126145327;
    msg.z_units = 134U;
    msg.speed = 0.751141833467;
    msg.speed_units = 122U;
    msg.custom.assign("RCGRMOFGITMCFQTSRAMJIVMIXUTXPWRJSSNKNPMYFBVNCDAXEDQDKAUNOFZPCOFMQZTQMFGISLSYGZZIVRGHOTPPBSVRWOWERLLZQLUHWWCQATZNMDNHC");

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
    msg.setTimeStamp(0.983085727797);
    msg.setSource(10064U);
    msg.setSourceEntity(205U);
    msg.setDestination(3808U);
    msg.setDestinationEntity(6U);
    msg.timeout = 32963U;
    msg.lat = 0.451279246967;
    msg.lon = 0.671182468225;
    msg.z = 0.971609311788;
    msg.z_units = 211U;
    msg.speed = 0.821154031476;
    msg.speed_units = 61U;
    msg.custom.assign("QBNRABALFQUPZPPVROXLMSUQWZBKSHCZTWVLLAEZUTEXEOYNWKWJIJKOCJQNDJIOMLZZQXQHDJGNMBOHXPNMGIPSFHVCADLETDNXCFMLPDAGSBYQZQBOTGJTCLSMVWYYHZAUKQRTMSRDHGYGMDBRWJTFIHXEGZEOERDCBASUYVCAGFEBGJDFXSKNFWJKUUIMILCSKRVPMPLYYKCROREWQOJTUZGUDXVFTYVBITUI");

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
    msg.setTimeStamp(0.811198652092);
    msg.setSource(48509U);
    msg.setSourceEntity(188U);
    msg.setDestination(63669U);
    msg.setDestinationEntity(88U);
    msg.timeout = 11319U;
    msg.lat = 0.449766062703;
    msg.lon = 0.0632049743156;
    msg.z = 0.719580260683;
    msg.z_units = 150U;
    msg.speed = 0.291043885134;
    msg.speed_units = 169U;
    msg.custom.assign("HFQOTHSMODCBYPZMUOIWAKVFPRIXSENXHFLCQMLFTCOOGRRSPMDQCJXTB");

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
    msg.setTimeStamp(0.264456880442);
    msg.setSource(54539U);
    msg.setSourceEntity(4U);
    msg.setDestination(54174U);
    msg.setDestinationEntity(29U);
    msg.timeout = 12069U;
    msg.lat = 0.393197747451;
    msg.lon = 0.528071821611;
    msg.z = 0.251897604689;
    msg.z_units = 103U;
    msg.speed = 0.286146946827;
    msg.speed_units = 239U;
    msg.custom.assign("PDYOUKTWKNDVUHXLHCWRTKKVGYWKLWNSHSFMXZLCEVCBOJPXAJJ");

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
    msg.setTimeStamp(0.306185305599);
    msg.setSource(37379U);
    msg.setSourceEntity(47U);
    msg.setDestination(26475U);
    msg.setDestinationEntity(76U);
    msg.timeout = 61635U;
    msg.lat = 0.223776401372;
    msg.lon = 0.890916849219;
    msg.z = 0.836265928222;
    msg.z_units = 127U;
    msg.speed = 0.358930562659;
    msg.speed_units = 159U;
    msg.custom.assign("BTXSWSHVRRPHMQGPCXPPDIWKQDNCIIVYQAR");

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
    msg.setTimeStamp(0.472553376528);
    msg.setSource(34260U);
    msg.setSourceEntity(194U);
    msg.setDestination(21041U);
    msg.setDestinationEntity(32U);
    msg.timeout = 33090U;
    msg.lat = 0.2200498176;
    msg.lon = 0.904098172093;
    msg.z = 0.771986943797;
    msg.z_units = 125U;
    msg.speed = 0.0336054374328;
    msg.speed_units = 139U;
    msg.custom.assign("UWBDRTSVGWRUILQQJGXZXEZQMUAYLJBGQBHRORBWUNPAUJJKYNCDTDPPIKGKYXHRTCWAXZVBEUCNNVELGTHAOEMA");

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
    msg.setTimeStamp(0.0452189077573);
    msg.setSource(643U);
    msg.setSourceEntity(198U);
    msg.setDestination(46918U);
    msg.setDestinationEntity(176U);
    msg.arrival_time = 0.0578562753141;
    msg.lat = 0.848768708522;
    msg.lon = 0.12069197987;
    msg.z = 0.795164937686;
    msg.z_units = 10U;
    msg.travel_z = 0.274161765585;
    msg.travel_z_units = 67U;
    msg.delayed = 0U;

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
    msg.setTimeStamp(0.0982221343746);
    msg.setSource(47158U);
    msg.setSourceEntity(3U);
    msg.setDestination(4203U);
    msg.setDestinationEntity(13U);
    msg.arrival_time = 0.768301487313;
    msg.lat = 0.279725272956;
    msg.lon = 0.484658243977;
    msg.z = 0.1375334705;
    msg.z_units = 90U;
    msg.travel_z = 0.553323622136;
    msg.travel_z_units = 121U;
    msg.delayed = 38U;

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
    msg.setTimeStamp(0.501067261232);
    msg.setSource(17005U);
    msg.setSourceEntity(51U);
    msg.setDestination(60203U);
    msg.setDestinationEntity(118U);
    msg.arrival_time = 0.455984585951;
    msg.lat = 0.0309810884667;
    msg.lon = 0.930621966587;
    msg.z = 0.616602993754;
    msg.z_units = 125U;
    msg.travel_z = 0.458096433051;
    msg.travel_z_units = 124U;
    msg.delayed = 174U;

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
    msg.setTimeStamp(0.790713206637);
    msg.setSource(40666U);
    msg.setSourceEntity(173U);
    msg.setDestination(23775U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.84808695567;
    msg.lon = 0.088230626103;
    msg.z = 0.456170753646;
    msg.z_units = 27U;
    msg.speed = 0.318034934385;
    msg.speed_units = 212U;
    msg.bearing = 0.614565356453;
    msg.cross_angle = 0.451261899284;
    msg.width = 0.895859747969;
    msg.length = 0.969769839866;
    msg.coff = 90U;
    msg.angaperture = 0.355042232385;
    msg.range = 16078U;
    msg.overlap = 150U;
    msg.flags = 126U;
    msg.custom.assign("RHERWHAEMEYWMQBFTLSMXBCVUQQUSEPROMPBGVYUEZIGNQFVFPSCCDSDGRIIITRUSYDXNSFLJFTXCBJUJNMZRTQHAHYGXXCMLEHAVKATBUMGKEYCADFDHPTYKIMWWHKVLEZNTNVSONCZPPAOORAYZPGOZWACIZZRTKQTAVEUGSKUJJIWIKXPNLGLXFLYUFVRGJDJVLEBOKWNPRXFODDJNYDQBSWODUKMMVBSJJYXZAILHWFCCQPQXIBOWOBLKH");

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
    msg.setTimeStamp(0.273973565325);
    msg.setSource(29414U);
    msg.setSourceEntity(95U);
    msg.setDestination(44644U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.751075880193;
    msg.lon = 0.602100760856;
    msg.z = 0.896440970159;
    msg.z_units = 168U;
    msg.speed = 0.0329218002575;
    msg.speed_units = 244U;
    msg.bearing = 0.862869170806;
    msg.cross_angle = 0.978626297252;
    msg.width = 0.211449239701;
    msg.length = 0.182640618007;
    msg.coff = 247U;
    msg.angaperture = 0.39796023222;
    msg.range = 29626U;
    msg.overlap = 219U;
    msg.flags = 228U;
    msg.custom.assign("SGYDIDAYYSBNAPIVFMNLVXSXXRUM");

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
    msg.setTimeStamp(0.279397904806);
    msg.setSource(8719U);
    msg.setSourceEntity(57U);
    msg.setDestination(53984U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.287124019364;
    msg.lon = 0.497576393661;
    msg.z = 0.401612941242;
    msg.z_units = 190U;
    msg.speed = 0.0751654419971;
    msg.speed_units = 72U;
    msg.bearing = 0.996249581725;
    msg.cross_angle = 0.41024850576;
    msg.width = 0.736252398052;
    msg.length = 0.491580776403;
    msg.coff = 97U;
    msg.angaperture = 0.938917199173;
    msg.range = 40031U;
    msg.overlap = 229U;
    msg.flags = 12U;
    msg.custom.assign("YEUCOCOADLWCIKSSVJIAOQODJPDNEAVDEMTJHATFMBBAKTKSRBWKMBBGRSZLYDWXTZLIBVMASUMAZMKOIPLJPGXWXZESSYRNRWYJEHZLCKOXNWPYUBLUFLXKIAYBHWIXVQWGZEGITTRUURRFSQCJCQQSRQOGXHJRYFVUD");

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
    msg.setTimeStamp(0.067216721874);
    msg.setSource(61139U);
    msg.setSourceEntity(72U);
    msg.setDestination(24294U);
    msg.setDestinationEntity(160U);
    msg.timeout = 52187U;
    msg.lat = 0.115176649425;
    msg.lon = 0.726590976879;
    msg.z = 0.893344363262;
    msg.z_units = 18U;
    msg.speed = 0.107085404228;
    msg.speed_units = 6U;
    msg.syringe0 = 210U;
    msg.syringe1 = 70U;
    msg.syringe2 = 240U;
    msg.custom.assign("MUEFPCLVFSIKRDMMIXGLAPBLFWZBXLGWMNLGSAPZTNAJKKQIKEUDOZSHEOYUVPJBWTNBZHJXCVBRHAIVEXYVFAAZOLGHVQNMMRGNDNGRIWQDPTUQRQB");

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
    msg.setTimeStamp(0.64956225488);
    msg.setSource(51692U);
    msg.setSourceEntity(59U);
    msg.setDestination(60373U);
    msg.setDestinationEntity(70U);
    msg.timeout = 48080U;
    msg.lat = 0.481974814124;
    msg.lon = 0.893064515819;
    msg.z = 0.922627918019;
    msg.z_units = 101U;
    msg.speed = 0.186413385658;
    msg.speed_units = 20U;
    msg.syringe0 = 89U;
    msg.syringe1 = 223U;
    msg.syringe2 = 236U;
    msg.custom.assign("USQAMTYOFKMIO");

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
    msg.setTimeStamp(0.689692644841);
    msg.setSource(30731U);
    msg.setSourceEntity(76U);
    msg.setDestination(38910U);
    msg.setDestinationEntity(29U);
    msg.timeout = 18704U;
    msg.lat = 0.171939491487;
    msg.lon = 0.115892032395;
    msg.z = 0.780083096051;
    msg.z_units = 108U;
    msg.speed = 0.650983603031;
    msg.speed_units = 78U;
    msg.syringe0 = 188U;
    msg.syringe1 = 136U;
    msg.syringe2 = 2U;
    msg.custom.assign("COXSXPGQBUCMYQF");

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
    msg.setTimeStamp(0.475995826095);
    msg.setSource(9953U);
    msg.setSourceEntity(156U);
    msg.setDestination(14831U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.321906564708);
    msg.setSource(1819U);
    msg.setSourceEntity(228U);
    msg.setDestination(43925U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.641970262676);
    msg.setSource(6332U);
    msg.setSourceEntity(116U);
    msg.setDestination(52092U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.0927340435138);
    msg.setSource(37899U);
    msg.setSourceEntity(11U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.0083871327266;
    msg.lon = 0.773713103302;
    msg.z = 0.877982163202;
    msg.z_units = 186U;
    msg.speed = 0.597716473565;
    msg.speed_units = 55U;
    msg.takeoff_pitch = 0.420815032545;
    msg.custom.assign("ZDGYRKMQQSXZLBNOBBZJYJWBLLVTJGEINTUOEEBXCGKROHLSSEWYPDCTKGVDGXCYAMQXGXYHLMEYCSQGUJFGFPZRKABYRFHUEZFIQYWKCUHUMUJZLDMVRPFZJJDTOSMVKRAZBIRKFCRIUEZLPAHCICJIWLBISBDCWENUKXEAHHVRMOXNTOXLNFEPVFTTVXFVIIQOUPKQDQVUMAANLYPMOPMJATARHJSWHNPNTDSGFKGNOAIVSCDSHWBWNWD");

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
    msg.setTimeStamp(0.254625273917);
    msg.setSource(11011U);
    msg.setSourceEntity(12U);
    msg.setDestination(2182U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.00206425792871;
    msg.lon = 0.793637866933;
    msg.z = 0.992773955927;
    msg.z_units = 204U;
    msg.speed = 0.104758301438;
    msg.speed_units = 69U;
    msg.takeoff_pitch = 0.492844841188;
    msg.custom.assign("TQQGLVVRQZUXZIAYBZFPEEKJTDVUCESYMKXKVCIGEPHCOOFWOOAPDDVOZZXRYGGAPUIYIRLMJASOVLLTRXEDXSDFJGZBJSJKNMWDINENFGUVLBORWCKPXWBCKXEEGQNWPLQMZQSTDMMZFITMFSXFZHVYYPRZEGHBQGQKWBAINUQEALUDKMASNJCSKHNNHTWIJABS");

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
    msg.setTimeStamp(0.561128095377);
    msg.setSource(54953U);
    msg.setSourceEntity(120U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.646666004048;
    msg.lon = 0.746715750865;
    msg.z = 0.414267033801;
    msg.z_units = 203U;
    msg.speed = 0.40892609732;
    msg.speed_units = 124U;
    msg.takeoff_pitch = 0.31334667964;
    msg.custom.assign("WDOVDSKRQGQZJB");

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
    msg.setTimeStamp(0.710579482137);
    msg.setSource(63058U);
    msg.setSourceEntity(69U);
    msg.setDestination(47015U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.666932157161;
    msg.lon = 0.597449796927;
    msg.z = 0.789040714555;
    msg.z_units = 184U;
    msg.speed = 0.285928131465;
    msg.speed_units = 122U;
    msg.abort_z = 0.406485001622;
    msg.bearing = 0.0983514222927;
    msg.glide_slope = 134U;
    msg.glide_slope_alt = 0.0781021834416;
    msg.custom.assign("ZSINAJDYKTQGXXQENJERRJRSAHVSDCQQDHHNNMUDAUTUDRULLCOYUJTAPMZIHHINCDACYUNMIGGYERFACMXOCVWGPRUYFXWLNJCWKIVTPXOPRNVMZOBF");

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
    msg.setTimeStamp(0.47153101906);
    msg.setSource(13082U);
    msg.setSourceEntity(155U);
    msg.setDestination(11082U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.78122252012;
    msg.lon = 0.194712679735;
    msg.z = 0.147941387949;
    msg.z_units = 72U;
    msg.speed = 0.935877258697;
    msg.speed_units = 205U;
    msg.abort_z = 0.415459157794;
    msg.bearing = 0.166092096171;
    msg.glide_slope = 225U;
    msg.glide_slope_alt = 0.561004896516;
    msg.custom.assign("DRVXIOXMWELUDJTOUJONQJTLUAKUMYRGFCGHJQIVETALDBVHFKUZSQAJADTSPWMPGD");

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
    msg.setTimeStamp(0.20338030871);
    msg.setSource(36573U);
    msg.setSourceEntity(253U);
    msg.setDestination(22706U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.9477502295;
    msg.lon = 0.784080636984;
    msg.z = 0.7784177019;
    msg.z_units = 120U;
    msg.speed = 0.757138993251;
    msg.speed_units = 196U;
    msg.abort_z = 0.497857840367;
    msg.bearing = 0.788480105179;
    msg.glide_slope = 122U;
    msg.glide_slope_alt = 0.0443701186276;
    msg.custom.assign("RZCJXJFEKCNGNTTLVGOLIESWKRGMSFDZYLVTMGNXUWQXMABUHKCBAQNVZHWWQUREUIRZSBDJTIJODSVKYZSGBHVCJLWXOPTXHDYLUHVUTQBOBKUOHSFGTGLTXPEYUUIIMRWJFZANPAJRDFUJPOJVEFQGYCZXERAQINI");

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
    msg.setTimeStamp(0.847112862846);
    msg.setSource(63066U);
    msg.setSourceEntity(151U);
    msg.setDestination(64762U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.49738285957;
    msg.lon = 0.0964481105699;
    msg.speed = 0.480880767791;
    msg.speed_units = 41U;
    msg.limits = 79U;
    msg.max_depth = 0.205725440875;
    msg.min_alt = 0.185080997234;
    msg.time_limit = 0.88753068777;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.540171527703;
    tmp_msg_0.lon = 0.443405284478;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RSWBRWCROKEUEG");
    msg.custom.assign("RYMONRRTJPUCTEPFDEXHAQDXJBLOHMDEKBOCEPPGMZULIKXBBVQNLTNXIRWGKWU");

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
    msg.setTimeStamp(0.0853675008319);
    msg.setSource(14068U);
    msg.setSourceEntity(49U);
    msg.setDestination(30503U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.123999598061;
    msg.lon = 0.112630822207;
    msg.speed = 0.834616719775;
    msg.speed_units = 217U;
    msg.limits = 27U;
    msg.max_depth = 0.527087022815;
    msg.min_alt = 0.508491376273;
    msg.time_limit = 0.442332654544;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.933474028162;
    tmp_msg_0.lon = 0.956164309441;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OZWASQVEPLXDECUQPHYKZNUCMIPOBFHEKBCESBEGYDUEIIIPTXJMRDMXWBRSYWUFQCMKAWLSJXKFAMWCHLCIZAZKNOPXDVMBHECAMJXVOWHDGQKQBDTFYSHQGQZUUJVRZXSFYDTHLRJFZAPVOWKRLIAPITLNDNJYYWPNTZFUGJN");
    msg.custom.assign("YZQDOKQOQKTZMETRLTAJQQMGDGMUKIBOYUYGSIRYNTSERXYSMKYOQCNWHVLFIWWOFZMFCOJGXZNGHGBMEXUDBBWRBHODRLDWNIBDEFVIOFJFPELQATTHNJFFJYLYZBSJXACLEVURCPQSLINAUMGXVEXWU");

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
    msg.setTimeStamp(0.0516310404765);
    msg.setSource(9214U);
    msg.setSourceEntity(175U);
    msg.setDestination(2987U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.800598491872;
    msg.lon = 0.711422693405;
    msg.speed = 0.482476313408;
    msg.speed_units = 23U;
    msg.limits = 57U;
    msg.max_depth = 0.685827577987;
    msg.min_alt = 0.737901883402;
    msg.time_limit = 0.713881427117;
    msg.controller.assign("OKDYIHXKUTTSNPAZPBXWFWWLXHLCKBDNRETVZWJYQYZYGMEOIGFAHASBWQLMRJDQPTWSXSHAKUUUHGQMDOOXOEZCMPMDGFOIZVIYHUBZDPAJUGLQWJZRLMJKVNKNAVHC");
    msg.custom.assign("YMFSXGGPONDZJEFPUJGQLICVAUWEUODFXYSKLGYUDISB");

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
    msg.setTimeStamp(0.576138517243);
    msg.setSource(2551U);
    msg.setSourceEntity(225U);
    msg.setDestination(43081U);
    msg.setDestinationEntity(230U);
    msg.target.assign("XIILVRMGGHMDLXFFJDFDNWSAAMJHNWHSKQNVSTTEKHKVVIUHJOU");
    msg.max_speed = 0.831177256803;
    msg.speed_units = 31U;
    msg.lat = 0.643724395858;
    msg.lon = 0.560890452078;
    msg.z = 0.593268147195;
    msg.z_units = 118U;
    msg.custom.assign("VZTAFXQUUNQBGGCHDBDYIJNFVNYGCNRSGNQTACJQRWGWXLUXTVOXBYSJTCWCINSEBMTXDLRODSPYDSVHKEEXTZARAOWZDADIWUYHGHMUEHWZKKRZPPAJADFVPPBVKOSFEPLHSYMWNDBAXRISFMETQIGEVOMYKHRQOLZHIOW");

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
    msg.setTimeStamp(0.614493432079);
    msg.setSource(48784U);
    msg.setSourceEntity(142U);
    msg.setDestination(45532U);
    msg.setDestinationEntity(160U);
    msg.target.assign("BTQKLSCGZYBJYKAFI");
    msg.max_speed = 0.859628206026;
    msg.speed_units = 115U;
    msg.lat = 0.343591921849;
    msg.lon = 0.315555113044;
    msg.z = 0.283556664959;
    msg.z_units = 93U;
    msg.custom.assign("SMXSWQQITWLUBOVJUKYXIBEAXVABRYIKDDXCHHUPSBOKUDGYMEADNPHVFGUSCWZZUSTJTGYMPTPEZBPLKRZGZIMDKMSONTJHKUBHHQPPKBNAMGCSGDUQAESOYIAIQUMAQDVMZCHHRRXRWBCTLMTRVBLCYQQYGOELXPONDHZVKGOVAYFXJVJWLUENCFLFDFFITEXFWSINJCVZJNYORGRRCIEETBAKEFXROY");

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
    msg.setTimeStamp(0.156721032927);
    msg.setSource(6321U);
    msg.setSourceEntity(203U);
    msg.setDestination(58478U);
    msg.setDestinationEntity(16U);
    msg.target.assign("WMHCSTGDMWYBNYTAPEGEFDWGQNWSXZMMMYCXPMTYDZVFJSYYOLDIJSTZHOFIJOIRWAKGNPEWKHTFRVAWPLIIMWSCGCVZQZCEHNJURSMOBJSEUOOUGRIREQQATZJXEUJPHOIODEAXVFMJXPQONNZFIVVACSHMLPNBULZLYXUVZPZPTRRINPVUYKQXALTEBCBAEN");
    msg.max_speed = 0.0883538477349;
    msg.speed_units = 248U;
    msg.lat = 0.538580351705;
    msg.lon = 0.842527916339;
    msg.z = 0.0760418158174;
    msg.z_units = 254U;
    msg.custom.assign("WYSFJMQXSRCZEBXKSNWRDVMHQOXZPPDFYKABNJJBDJCZLKRUMTWFCHPCCXFRVGYKHTKQGXRFAUPDMQSALROAJIJZKSETBNNMIATWGVCPODSSDLTULG");

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
    msg.setTimeStamp(0.462484449409);
    msg.setSource(3308U);
    msg.setSourceEntity(20U);
    msg.setDestination(3479U);
    msg.setDestinationEntity(132U);
    msg.timeout = 55649U;
    msg.lat = 0.316271840175;
    msg.lon = 0.114084343688;
    msg.speed = 0.826513749303;
    msg.speed_units = 11U;
    msg.custom.assign("TCWAPOPOMNTDYCEAYQLFTXNBAXSNNXIVXPFMJCHVQGFSVIVBGYSKHKBCPPYDDBLNJGRARJBNZAREOYJLESZFISUUURUJSZRVEKBZYVZFRIWXERCIWETGYPFMEKPMJWMZAIKOXDBQUTEKUIJORVSLBSCROIXNBWGLFTNOTLFQEJUGGZOQWDDVMQHNZADVHMDWOGTCDM");

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
    msg.setTimeStamp(0.52476057118);
    msg.setSource(4528U);
    msg.setSourceEntity(247U);
    msg.setDestination(48169U);
    msg.setDestinationEntity(146U);
    msg.timeout = 61087U;
    msg.lat = 0.409483689637;
    msg.lon = 0.447366767822;
    msg.speed = 0.980684170816;
    msg.speed_units = 249U;
    msg.custom.assign("SJUVIISTCMRWNRXYBFGSPEVJCRDWYFZKYMUHKLSYEFBNIDGIDMZPBHDCGDBOUNVRSZDRKIBYAVSJVNPSXLOZQBPPXCMIXRKNAODMTOKWCZGHULGXTWCTNBDYSYOCJQDUTOGVJAOVYQFMTIKQXERRCLLNEWVNHINXMGFZLJKYYHKUEZAUUHAHAXAVGOPFWCEIFJQSULGO");

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
    msg.setTimeStamp(0.59773410886);
    msg.setSource(1493U);
    msg.setSourceEntity(162U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(254U);
    msg.timeout = 25521U;
    msg.lat = 0.00676792922318;
    msg.lon = 0.328315930458;
    msg.speed = 0.677533110196;
    msg.speed_units = 118U;
    msg.custom.assign("FTMFCKGJXKGPPDFMBVPLSWORBLTOVYIHVWBEWUSHGVYKAJTHKZYEBXYOYQGPFDXBPYZIEJMCQNFWNXDWAUZEZNGDLQLMQEECAAYAZJVNGJQKPYNEQAOIUBHRWCTRGRUXSOXAMTSNFDOXUYJDRZMJBRCVBZXGMMOUFFOIRHJRXKCALHKKXZKTQDCVKINYMTNPZBNSLLDWSRMQIIOJUGVWAITVVILPNSPDTRICZLSUJQDGWBELCFCFSHUWS");

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
    msg.setTimeStamp(0.508743722929);
    msg.setSource(49995U);
    msg.setSourceEntity(232U);
    msg.setDestination(548U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.666233052229;
    msg.lon = 0.736835112389;
    msg.z = 0.741858572129;
    msg.z_units = 57U;
    msg.radius = 0.289499803528;
    msg.duration = 29047U;
    msg.speed = 0.128221345808;
    msg.speed_units = 112U;
    msg.popup_period = 52874U;
    msg.popup_duration = 25332U;
    msg.flags = 169U;
    msg.custom.assign("FKXKXVBNKASPDKKZCQPAKRLOVCSMRQXBHQKJCTQLZ");

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
    msg.setTimeStamp(0.672252119814);
    msg.setSource(59075U);
    msg.setSourceEntity(176U);
    msg.setDestination(64603U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.484221146268;
    msg.lon = 0.258865443261;
    msg.z = 0.96286853911;
    msg.z_units = 50U;
    msg.radius = 0.038037814568;
    msg.duration = 16869U;
    msg.speed = 0.818663851224;
    msg.speed_units = 128U;
    msg.popup_period = 33192U;
    msg.popup_duration = 31263U;
    msg.flags = 105U;
    msg.custom.assign("SARVMXNYJZALIRLHQXPSCVANXTKOQMYZFILKSJVMJBPILDZAMYWGNNVOEVELCYFWYRFBEBTMHIKOUFCEJZDHOVPJGGRTCPBNECIPHRLXSOHOHIAOJELQZZUXMAKLIDBFQMOIGCFSWMRJDUTATUSRHZDRDEZACMGBYVPTCRQJBBXTPQOYJGFWGPIQDHXGTODPMRNU");

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
    msg.setTimeStamp(0.223650858525);
    msg.setSource(28123U);
    msg.setSourceEntity(41U);
    msg.setDestination(607U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.540530720817;
    msg.lon = 0.798303077746;
    msg.z = 0.944914134117;
    msg.z_units = 118U;
    msg.radius = 0.220628412727;
    msg.duration = 4863U;
    msg.speed = 0.895110046936;
    msg.speed_units = 151U;
    msg.popup_period = 20555U;
    msg.popup_duration = 41628U;
    msg.flags = 172U;
    msg.custom.assign("WJFHJDEDYOJHDVRNPETCSDKRNGIZSHEVOXYXKHSKNLONSWHQKIEMJCTQIDHXMECSWRUBZGMKYM");

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
    msg.setTimeStamp(0.324752866854);
    msg.setSource(28939U);
    msg.setSourceEntity(232U);
    msg.setDestination(53354U);
    msg.setDestinationEntity(7U);
    msg.timeout = 59407U;
    msg.lat = 0.896908002707;
    msg.lon = 0.860688029073;
    msg.z = 0.930814803442;
    msg.z_units = 215U;
    msg.speed = 0.934334125064;
    msg.speed_units = 166U;
    msg.bearing = 0.647926584928;
    msg.width = 0.0761259583788;
    msg.direction = 160U;
    msg.custom.assign("OAYCNDZUBDYMXTIXSTHDUTWPE");

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
    msg.setTimeStamp(0.674985262479);
    msg.setSource(49695U);
    msg.setSourceEntity(158U);
    msg.setDestination(13814U);
    msg.setDestinationEntity(131U);
    msg.timeout = 17052U;
    msg.lat = 0.0121961388296;
    msg.lon = 0.190679358386;
    msg.z = 0.430528391164;
    msg.z_units = 224U;
    msg.speed = 0.224295894038;
    msg.speed_units = 21U;
    msg.bearing = 0.175631445265;
    msg.width = 0.21117257305;
    msg.direction = 34U;
    msg.custom.assign("BDNMXNYUWZREDYOXKPNGQSIVZMHDPMIFXNHEAKVGOBOCBUTGYGOCPIQHMFQHSVWEABJIFIULHAXRZQPMZPOPLFJRDVTNCLBYJZNHHHKMZCZVKZJUYMWHUHLPJZLARWODILESXINDEVTDLWRAOAEVRFFRZOBYTVRBWCFETKEIKCYXEQUWQTQVQTTYBMGSVNUKYLYPKSKBTSOJUJ");

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
    msg.setTimeStamp(0.965152135285);
    msg.setSource(38484U);
    msg.setSourceEntity(78U);
    msg.setDestination(19006U);
    msg.setDestinationEntity(115U);
    msg.timeout = 27003U;
    msg.lat = 0.630392447069;
    msg.lon = 0.00255596020096;
    msg.z = 0.499887152533;
    msg.z_units = 198U;
    msg.speed = 0.654313398897;
    msg.speed_units = 115U;
    msg.bearing = 0.318049122101;
    msg.width = 0.633235481064;
    msg.direction = 0U;
    msg.custom.assign("GEOYOXLTULBFJBNUFJBTIGABDRBRCSZBLRCWBPQFJJKYDQCDAGGMMMANFWRJLOHJDIVICSXQUFVQOUPKNNACHRXZKUPXDPZGPETDCTLQPUKVORRMQIHWGNQLTXYAGGVQFZMXPCUYYZSLNSOTIKX");

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
    msg.setTimeStamp(0.417070213042);
    msg.setSource(58949U);
    msg.setSourceEntity(97U);
    msg.setDestination(8426U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 105U;
    msg.error_count = 211U;
    msg.error_ents.assign("OIJYQAUPZMIPEXSFFTSFSKGTZFNDYZUQQMVYKBPVR");
    msg.maneuver_type = 9425U;
    msg.maneuver_stime = 0.718288215216;
    msg.maneuver_eta = 12138U;
    msg.control_loops = 29678086U;
    msg.flags = 92U;
    msg.last_error.assign("QVYNYWGUWSKAEBRGIUKULVHJSSPRLYXMLZEVBHFKZLAXUGCINJZHCMXXOMRWADCMTANFFRMBNWCBDHTKHFAUOAQHMHJBPBREILIMZYHCKOEDLPTOSEYSCOFNQUAXYHVIWZCZD");
    msg.last_error_time = 0.59802120631;

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
    msg.setTimeStamp(0.407356391775);
    msg.setSource(1142U);
    msg.setSourceEntity(85U);
    msg.setDestination(40200U);
    msg.setDestinationEntity(218U);
    msg.op_mode = 200U;
    msg.error_count = 28U;
    msg.error_ents.assign("APZNFQVJHCXYPSPMPOKQTPGCKTXEWGMNXIRATSLDWVXNRFEFCXYANSWLRSSJKAKTRAMTLJHQIZTLONVMYGMGODXISVLBEWAUIQJNZMQEO");
    msg.maneuver_type = 35876U;
    msg.maneuver_stime = 0.521436009286;
    msg.maneuver_eta = 10082U;
    msg.control_loops = 2508473260U;
    msg.flags = 98U;
    msg.last_error.assign("IJEMNZKJGAUEPAKOWGEVAIFDPYQHKOQWSRLWJYGOJRBGMVCIFZFBVUJCINLEBKNAXDMTCZAVYYYUU");
    msg.last_error_time = 0.661826310208;

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
    msg.setTimeStamp(0.811538941306);
    msg.setSource(35830U);
    msg.setSourceEntity(146U);
    msg.setDestination(536U);
    msg.setDestinationEntity(191U);
    msg.op_mode = 38U;
    msg.error_count = 146U;
    msg.error_ents.assign("QIEQKBKWBJOGIYL");
    msg.maneuver_type = 18220U;
    msg.maneuver_stime = 0.477586223633;
    msg.maneuver_eta = 40607U;
    msg.control_loops = 1759319018U;
    msg.flags = 240U;
    msg.last_error.assign("JAJUADBEGPMPVJQTGNIZQEVRUSMLDNZLLHMQUYFTZQVJOGWUT");
    msg.last_error_time = 0.831512509248;

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
    msg.setTimeStamp(0.806000194676);
    msg.setSource(47997U);
    msg.setSourceEntity(174U);
    msg.setDestination(48803U);
    msg.setDestinationEntity(76U);
    msg.type = 81U;
    msg.request_id = 22546U;
    msg.command = 15U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 34100U;
    tmp_msg_0.lat = 0.196653312976;
    tmp_msg_0.lon = 0.316950841155;
    tmp_msg_0.z = 0.0669083128659;
    tmp_msg_0.z_units = 248U;
    tmp_msg_0.speed = 0.0303473246631;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.custom.assign("DRRJZJUFTOYURPEHMIBDKPXFIMYOQYYAGIHCLNUPBLRONMJXHDGWDEAHXSEEZYZAASYWHWCQXFSPVPMJVRFQOJOMUTMRMGUCITTPKKAMBCOOXVYWYSOGDTPQFVQZNIQGXBCKBUXJZLKQSBDFCGTLLFIEHOBUHKCFKENJLYKQLRGCLJDDXZBAGIKDLAZVKAJWIRVSEAEPVA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21658U;
    msg.info.assign("WQCDVOIVXPCRUHFITTYRDFYLHROKPSZKMUBTEGVHHZFHSDXZQWTAGPLAVSADQDFMQKDPSRSKJFNRFGNLZJXLLYEVWNVCWAXSHKIWILYOOUEGVXTJLQLWHQUOXYJAAMCKBTQMPWOWNYGVRENKTNCQC");

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
    msg.setTimeStamp(0.443720977077);
    msg.setSource(53827U);
    msg.setSourceEntity(181U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(187U);
    msg.type = 93U;
    msg.request_id = 33323U;
    msg.command = 234U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.838726874389;
    tmp_msg_0.lon = 0.684378827207;
    tmp_msg_0.speed = 0.0347975779045;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.duration = 22947U;
    tmp_msg_0.sys_a = 17579U;
    tmp_msg_0.sys_b = 35208U;
    tmp_msg_0.move_threshold = 0.791350115804;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47749U;
    msg.info.assign("YWKSEOARMPMQYKWPCCOX");

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
    msg.setTimeStamp(0.755743434096);
    msg.setSource(164U);
    msg.setSourceEntity(241U);
    msg.setDestination(7507U);
    msg.setDestinationEntity(166U);
    msg.type = 9U;
    msg.request_id = 47143U;
    msg.command = 144U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 10967U;
    tmp_msg_0.lat = 0.695178953671;
    tmp_msg_0.lon = 0.296166014655;
    tmp_msg_0.z = 0.836230367713;
    tmp_msg_0.z_units = 4U;
    tmp_msg_0.speed = 0.890028773435;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.custom.assign("LIJHGUQQOIPIIUGEQWQPQJROVHCSDFYZMDVDYTWHZPWHFPTOJBMUXVATLBCJSEXZLUYMWRNIZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38566U;
    msg.info.assign("XIBRIHAVRZSSZPBGINGJDHXPMTUVAYEUHXUUAADRSYXQMZPONOYETKAEQICNPLRBOUMVYICFVFKIVCGCBZFJLRAYYITGQNHZVHEELTKDAHMFVKPVMQFDMWPPNKUMJANHQNMXHGDOERUOOXZPLBCQNGGYGDQTAIPXWSEINRKFEKXCOYMWTSDJZBSWCJUREGZKFLXBSLWZUXJGJKLUCYSWDJQSPVEH");

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
    msg.setTimeStamp(0.40480903793);
    msg.setSource(47524U);
    msg.setSourceEntity(50U);
    msg.setDestination(64816U);
    msg.setDestinationEntity(50U);
    msg.command = 40U;
    msg.entities.assign("YKLGVWSLFSVJCKBGUYQCHIXWLGMNCLUAIZWABUAGJYBBYFYPPAMQFEIQSGVSFTAYMUWPZLHCNKNDOGCBJNSDHGUJNYOTKQXOEMTOKDUBKZMXYQDKUIFROJBLDKHTVRIMNUJDAETISXATWZUEZHZYDUFPBJWXEWJHRFPNSLIMJCGLXAQIVWEZBHARLHPOQWOINMDQEBDYZCKWRPSVHKCTG");

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
    msg.setTimeStamp(0.758066181259);
    msg.setSource(62689U);
    msg.setSourceEntity(85U);
    msg.setDestination(35874U);
    msg.setDestinationEntity(30U);
    msg.command = 13U;
    msg.entities.assign("EOIRCMBRVUYOUSHCSGDZYPQCBOCYHREUGILZXNSONEIERCUTEDCLPENIARBPWAVLMDXDEFDEHMTUCIUJVTAGJJTLFXBFDVLXATGQOLIKHMKVVWQWQSRONUH");

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
    msg.setTimeStamp(0.328899044935);
    msg.setSource(40015U);
    msg.setSourceEntity(114U);
    msg.setDestination(41151U);
    msg.setDestinationEntity(168U);
    msg.command = 152U;
    msg.entities.assign("URASAVTDQWKLMMTGCCOSBUOXBQLNRCZHNGJEESNNXYZ");

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
    msg.setTimeStamp(0.432558027173);
    msg.setSource(29347U);
    msg.setSourceEntity(230U);
    msg.setDestination(41651U);
    msg.setDestinationEntity(245U);
    msg.mcount = 174U;
    msg.mnames.assign("UDNZSUKBGEUBDAQ");
    msg.ecount = 179U;
    msg.enames.assign("QDLVCQCIAUGSPILHBVQGSXUFGHGSOYDAWNVEARTBASKBAFPGVTFGWVTYZDMSSNIUZZKUTKBRQMPYDXOFJNEFKVMOHGIJMFJWZLAZ");
    msg.ccount = 0U;
    msg.cnames.assign("QALBXOXYMMISLFBQWRHGMUPDPDIJQGQRUNNRWWFVVMRFJOKGNFJZSTPRLTNBTYQAKORHGWERCSNTPMDAWVOUPOTHLPJCYBQZFRASCXUSYMTBAKWUDSACKDNIBMKBOLWWX");
    msg.last_error.assign("YWTVXGTJEQFLRPUXIEXCQFJQTUWUGIPAOQMYZAWTVWYGVIG");
    msg.last_error_time = 0.832466848151;

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
    msg.setTimeStamp(0.65227580351);
    msg.setSource(57100U);
    msg.setSourceEntity(147U);
    msg.setDestination(53111U);
    msg.setDestinationEntity(135U);
    msg.mcount = 70U;
    msg.mnames.assign("YTQBRVZNZEKHLYFJCPBGAVIKDUTDWHRLNFWIFBNRPJUBFVGYZCCKDHVQGZLCCSWSPXNZCYCZOKMMAQLPAOUVJQOXLKQYSKINWADPDOBFHYRLGWRZMYIWHYTFWTLMTIXNMPTGRJAAKJWETGFLFKSUOSMXSVXNSMTUPRVBISMJAELJEZUQOBCYHEVHEIHRSXFICZINONCKXHGDLMAEZAUFQJTEYURMGDABIGHJBEQSKEURTDBOO");
    msg.ecount = 222U;
    msg.enames.assign("TVKPBLDPDWLWRQUTELLOPVOARSUCIUSNRKITJHSTBKVURGJFXHDKHIHOZHVQDTNBYIUUKEXKIIMYLMAIJJQ");
    msg.ccount = 220U;
    msg.cnames.assign("ZEXVIBRQRYYBXIEATTZVGFIHSMOOAQVSSJBMAQVOZELXKDNKSKPYKFJLBWANMMC");
    msg.last_error.assign("DFHIINPSLGMFQACTVIMLDXXKFSHSFHMXLOBTPHMRADISAKIACBIQMVUSMRCLTIHMGGWJYSUFPJNAYUBWDBAGCFW");
    msg.last_error_time = 0.223109294592;

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
    msg.setTimeStamp(0.928554888511);
    msg.setSource(39714U);
    msg.setSourceEntity(139U);
    msg.setDestination(38648U);
    msg.setDestinationEntity(155U);
    msg.mcount = 184U;
    msg.mnames.assign("UYLKFLTIVXZEWEKFTKBYNQPVKARRNBCCWPOAKBWFJLCXMHJHIEDPHEPZZSDCUAUJUWEQTCRCZYBURXPKFAWNHWHIUJXGTTMDPBXVGFFBJANGIZNCOWGMUDBQSOXOWHVRKZNFGORUELGBLJZYHYVJATORQEPQEUDZJNHMNTKVCOMGSGADSLUDSQYKGQBTP");
    msg.ecount = 167U;
    msg.enames.assign("VZYOKLUJIFCGXHG");
    msg.ccount = 36U;
    msg.cnames.assign("ZTKEXKCTQXFWHNVKRIOKTOLPCQXAEMLAROUGDRUCPORPLZDBWATRPHFWOOJUFXECFZGPFWIZIIIYJLBADUGKWJNXLJFSTSQYPYAZMEVDYELGANORHWJQDBBXBGSEHQHYOBVNWFQEJHUDSIGSPCKRVYSIXDBT");
    msg.last_error.assign("PQLRTLLHADVLELVEIF");
    msg.last_error_time = 0.587940920862;

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
    msg.setTimeStamp(0.351033574385);
    msg.setSource(32350U);
    msg.setSourceEntity(160U);
    msg.setDestination(3821U);
    msg.setDestinationEntity(95U);
    msg.mask = 84U;
    msg.max_depth = 0.117006235496;
    msg.min_altitude = 0.0587634888533;
    msg.max_altitude = 0.627895314323;
    msg.min_speed = 0.93545216256;
    msg.max_speed = 0.263101228735;
    msg.max_vrate = 0.854699189516;
    msg.lat = 0.932242661746;
    msg.lon = 0.718339609001;
    msg.orientation = 0.558634305308;
    msg.width = 0.905636802927;
    msg.length = 0.471493009817;

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
    msg.setTimeStamp(0.523112099714);
    msg.setSource(32778U);
    msg.setSourceEntity(160U);
    msg.setDestination(39794U);
    msg.setDestinationEntity(213U);
    msg.mask = 75U;
    msg.max_depth = 0.083815207642;
    msg.min_altitude = 0.204709675776;
    msg.max_altitude = 0.751529295889;
    msg.min_speed = 0.947689792926;
    msg.max_speed = 0.961963587093;
    msg.max_vrate = 0.60992699129;
    msg.lat = 0.138260656532;
    msg.lon = 0.773587969133;
    msg.orientation = 0.829005314337;
    msg.width = 0.526230275238;
    msg.length = 0.727717922443;

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
    msg.setTimeStamp(0.415385706996);
    msg.setSource(21008U);
    msg.setSourceEntity(153U);
    msg.setDestination(58348U);
    msg.setDestinationEntity(247U);
    msg.mask = 228U;
    msg.max_depth = 0.538395053045;
    msg.min_altitude = 0.492382835391;
    msg.max_altitude = 0.806452451897;
    msg.min_speed = 0.18441978877;
    msg.max_speed = 0.0838543665453;
    msg.max_vrate = 0.482254600005;
    msg.lat = 0.827645950732;
    msg.lon = 0.950123050093;
    msg.orientation = 0.653648639926;
    msg.width = 0.521796870236;
    msg.length = 0.0680049041979;

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
    msg.setTimeStamp(0.976636413401);
    msg.setSource(1094U);
    msg.setSourceEntity(168U);
    msg.setDestination(62774U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.477082089808);
    msg.setSource(29798U);
    msg.setSourceEntity(135U);
    msg.setDestination(9088U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.291526675004);
    msg.setSource(40754U);
    msg.setSourceEntity(251U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.419600979631);
    msg.setSource(24178U);
    msg.setSourceEntity(113U);
    msg.setDestination(20196U);
    msg.setDestinationEntity(186U);
    msg.duration = 57678U;

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
    msg.setTimeStamp(0.514495320225);
    msg.setSource(61597U);
    msg.setSourceEntity(222U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(249U);
    msg.duration = 27832U;

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
    msg.setTimeStamp(0.896910403822);
    msg.setSource(55372U);
    msg.setSourceEntity(149U);
    msg.setDestination(64354U);
    msg.setDestinationEntity(205U);
    msg.duration = 39237U;

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
    msg.setTimeStamp(0.255642975681);
    msg.setSource(18348U);
    msg.setSourceEntity(134U);
    msg.setDestination(34745U);
    msg.setDestinationEntity(62U);
    msg.enable = 96U;
    msg.mask = 307857331U;
    msg.scope_ref = 56460264U;

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
    msg.setTimeStamp(0.30594547443);
    msg.setSource(42485U);
    msg.setSourceEntity(219U);
    msg.setDestination(56284U);
    msg.setDestinationEntity(21U);
    msg.enable = 234U;
    msg.mask = 310913071U;
    msg.scope_ref = 3067041919U;

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
    msg.setTimeStamp(0.226863029513);
    msg.setSource(59624U);
    msg.setSourceEntity(177U);
    msg.setDestination(8025U);
    msg.setDestinationEntity(46U);
    msg.enable = 36U;
    msg.mask = 4054016041U;
    msg.scope_ref = 1225139177U;

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
    msg.setTimeStamp(0.358793537775);
    msg.setSource(58616U);
    msg.setSourceEntity(83U);
    msg.setDestination(50201U);
    msg.setDestinationEntity(114U);
    msg.medium = 81U;

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
    msg.setTimeStamp(0.331136938274);
    msg.setSource(7980U);
    msg.setSourceEntity(81U);
    msg.setDestination(59165U);
    msg.setDestinationEntity(36U);
    msg.medium = 140U;

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
    msg.setTimeStamp(0.16989922351);
    msg.setSource(61481U);
    msg.setSourceEntity(122U);
    msg.setDestination(13346U);
    msg.setDestinationEntity(78U);
    msg.medium = 90U;

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
    msg.setTimeStamp(0.45087533907);
    msg.setSource(55273U);
    msg.setSourceEntity(61U);
    msg.setDestination(42696U);
    msg.setDestinationEntity(207U);
    msg.value = 0.631759855857;
    msg.type = 193U;

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
    msg.setTimeStamp(0.283817313147);
    msg.setSource(24901U);
    msg.setSourceEntity(34U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(117U);
    msg.value = 0.786363871104;
    msg.type = 20U;

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
    msg.setTimeStamp(0.0985152399628);
    msg.setSource(39470U);
    msg.setSourceEntity(76U);
    msg.setDestination(45914U);
    msg.setDestinationEntity(211U);
    msg.value = 0.742597181597;
    msg.type = 68U;

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
    msg.setTimeStamp(0.673428793917);
    msg.setSource(3433U);
    msg.setSourceEntity(165U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(175U);
    msg.possimerr = 0.327984611559;
    msg.converg = 0.180082380012;
    msg.turbulence = 0.670901646999;
    msg.possimmon = 49U;
    msg.commmon = 228U;
    msg.convergmon = 97U;

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
    msg.setTimeStamp(0.116093087099);
    msg.setSource(15451U);
    msg.setSourceEntity(187U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.61237510729;
    msg.converg = 0.778168651757;
    msg.turbulence = 0.877641437964;
    msg.possimmon = 239U;
    msg.commmon = 23U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.055752625077);
    msg.setSource(55595U);
    msg.setSourceEntity(75U);
    msg.setDestination(56216U);
    msg.setDestinationEntity(6U);
    msg.possimerr = 0.190988757799;
    msg.converg = 0.397081520033;
    msg.turbulence = 0.344399814821;
    msg.possimmon = 185U;
    msg.commmon = 106U;
    msg.convergmon = 166U;

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
    msg.setTimeStamp(0.841880008449);
    msg.setSource(22038U);
    msg.setSourceEntity(60U);
    msg.setDestination(8087U);
    msg.setDestinationEntity(231U);
    msg.autonomy = 130U;
    msg.mode.assign("PJEEOZDVRMGYXPDDERDYJGJOSVIHGXJVCWTOLPRKJANAILLORVXUKMGFUNGWXDEIECICOLKOXFSCTHJLJYITWDZPYKIINBQWFBCOTNACTXTMKQMWPSWABFDPFGQHQLFATZSUWVQLQZKUSKPWNEKWZTQDAUBHZCQVXRHDMMLBPSUGRMWOXRTUVXEBUUASLHVYNTHNFJIEYDKPMAHQOSRQPRLYEJZFJFYASGCEVHZBNGYMGZBCZF");

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
    msg.setTimeStamp(0.521840790106);
    msg.setSource(564U);
    msg.setSourceEntity(143U);
    msg.setDestination(39111U);
    msg.setDestinationEntity(79U);
    msg.autonomy = 226U;
    msg.mode.assign("AKGLEYHICYOUTOFFNUASXJTURSXESBYCMDKOROSQULLRSFNYZZWOFIZCFGTXTWABAWQVYBDJTOGTSDZEZBEYEELLNFGTMIDRXGSYCWJEDYLQHGAPNMZQBKFUPRHISPQJRXBJEPRACH");

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
    msg.setTimeStamp(0.598672575432);
    msg.setSource(23013U);
    msg.setSourceEntity(139U);
    msg.setDestination(4806U);
    msg.setDestinationEntity(127U);
    msg.autonomy = 1U;
    msg.mode.assign("LQPTUKSPHEH");

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
    msg.setTimeStamp(0.577526367989);
    msg.setSource(7474U);
    msg.setSourceEntity(22U);
    msg.setDestination(57464U);
    msg.setDestinationEntity(35U);
    msg.type = 21U;
    msg.op = 254U;
    msg.possimerr = 0.381795935399;
    msg.converg = 0.571738866129;
    msg.turbulence = 0.954192936561;
    msg.possimmon = 88U;
    msg.commmon = 228U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.944125084958);
    msg.setSource(34471U);
    msg.setSourceEntity(240U);
    msg.setDestination(56487U);
    msg.setDestinationEntity(130U);
    msg.type = 180U;
    msg.op = 36U;
    msg.possimerr = 0.425892129439;
    msg.converg = 0.386851333363;
    msg.turbulence = 0.0551965495029;
    msg.possimmon = 24U;
    msg.commmon = 192U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.0630789717593);
    msg.setSource(59048U);
    msg.setSourceEntity(144U);
    msg.setDestination(54746U);
    msg.setDestinationEntity(86U);
    msg.type = 59U;
    msg.op = 82U;
    msg.possimerr = 0.477404277205;
    msg.converg = 0.712460293424;
    msg.turbulence = 0.852547735269;
    msg.possimmon = 95U;
    msg.commmon = 96U;
    msg.convergmon = 34U;

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
    msg.setTimeStamp(0.871185113243);
    msg.setSource(38690U);
    msg.setSourceEntity(103U);
    msg.setDestination(7365U);
    msg.setDestinationEntity(170U);
    msg.op = 26U;
    msg.comm_interface = 98U;
    msg.period = 11919U;
    msg.sys_dst.assign("AAJSHSWDBZEDVPIFBWRZDZLCXNROQKKKZYQXEVWFXIZLUOMDTBTEYWHNLAOF");

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
    msg.setTimeStamp(0.289331242373);
    msg.setSource(55665U);
    msg.setSourceEntity(43U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(136U);
    msg.op = 62U;
    msg.comm_interface = 21U;
    msg.period = 2630U;
    msg.sys_dst.assign("JXAPARQFWNRHPFYAUXGQFCWJVYINCQKEZVHJFVBIZKLGSEBYJJTAKNERTUZVINILKNGQUMOEKIXQGXTSGBTLEDVCQ");

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
    msg.setTimeStamp(0.409931215332);
    msg.setSource(41238U);
    msg.setSourceEntity(161U);
    msg.setDestination(18704U);
    msg.setDestinationEntity(170U);
    msg.op = 152U;
    msg.comm_interface = 136U;
    msg.period = 34865U;
    msg.sys_dst.assign("VCJUMQBZRLKGBKYXASPKBGPWLGFSORIWMSFRXQXPQVPSDWJUHCFESHAFZGZOOXZDNZBJXAHWTNAVBJXBRELPBJADCLIPAKNYRKMEHWUPTOBVTUIRPETQKKWNDSZDOBWTBXIHEYFLOSNGWVTFQDFHLXWVZYCOICQRFSJECMAETKVVLTHGMSDNAYFISYJIGRKGMYQMJQJKFRQNEVEODYYMUYWAPCNTUUVGEICDDOLLCHUUOZHZI");

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
    msg.setTimeStamp(0.981714929351);
    msg.setSource(54289U);
    msg.setSourceEntity(148U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(122U);
    msg.stime = 1940136495U;
    msg.latitude = 0.578394359216;
    msg.longitude = 0.972090958323;
    msg.altitude = 3543U;
    msg.depth = 48699U;
    msg.heading = 48251U;
    msg.speed = -14836;
    msg.fuel = 66;
    msg.exec_state = 119;
    msg.plan_checksum = 42323U;

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
    msg.setTimeStamp(0.472794141611);
    msg.setSource(55656U);
    msg.setSourceEntity(168U);
    msg.setDestination(26178U);
    msg.setDestinationEntity(45U);
    msg.stime = 5841326U;
    msg.latitude = 0.731083840644;
    msg.longitude = 0.200056584415;
    msg.altitude = 59897U;
    msg.depth = 55363U;
    msg.heading = 38777U;
    msg.speed = 19082;
    msg.fuel = 58;
    msg.exec_state = 120;
    msg.plan_checksum = 34462U;

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
    msg.setTimeStamp(0.713607498628);
    msg.setSource(3933U);
    msg.setSourceEntity(19U);
    msg.setDestination(21643U);
    msg.setDestinationEntity(114U);
    msg.stime = 3962759056U;
    msg.latitude = 0.505683871202;
    msg.longitude = 0.0366736896543;
    msg.altitude = 14017U;
    msg.depth = 9920U;
    msg.heading = 25054U;
    msg.speed = 22514;
    msg.fuel = -32;
    msg.exec_state = 61;
    msg.plan_checksum = 65433U;

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
    msg.setTimeStamp(0.685514142712);
    msg.setSource(16885U);
    msg.setSourceEntity(89U);
    msg.setDestination(21877U);
    msg.setDestinationEntity(74U);
    msg.req_id = 10199U;
    msg.comm_mean = 194U;
    msg.destination.assign("VTKGJDDJKXVPGRSCQPFPHNNHXOIYTFLHLSBOSQGEBMMQBEAKAWYYDYAUREUBDUWCTVDKTVXWZGHVSUPUCPCYHCMXFXPUXEYBCOKNZHTDKIQWMNZFLFJXIVRAJMQNGIRPXBIAPGWIZROFZJWEJJWTGBEBPWHIDAEHR");
    msg.deadline = 0.380807145353;
    msg.range = 0.667847313905;
    msg.data_mode = 172U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 205U;
    tmp_msg_0.request_id = 1364U;
    tmp_msg_0.command = 93U;
    IMC::AutonomousSection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0454930965696;
    tmp_tmp_msg_0_0.lon = 0.710194856606;
    tmp_tmp_msg_0_0.speed = 0.974856273492;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_tmp_msg_0_0.limits = 212U;
    tmp_tmp_msg_0_0.max_depth = 0.0413328056295;
    tmp_tmp_msg_0_0.min_alt = 0.195185378381;
    tmp_tmp_msg_0_0.time_limit = 0.88602784164;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0940267451442;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.920439998453;
    tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.controller.assign("KFNBDKCTWXRAYOYMWIMOVJTEWBNMFGAGHVIXSUKKXRRHATUPPAIGQVCMJFPRGRGTUUOEKTSVOLNSAQEZTDNGCLLZZWYBSULQDAULTEDSDBIJYHFZGJJQSFEEVDLSVLXRGRMP");
    tmp_tmp_msg_0_0.custom.assign("HRIUSCVKVQFJWTKDPBJSUNECFPATLHNIZRGBAPXPETLXAPDDZVHJDAJFFQSOETCKVCTPNZOCSBNKGUUOHFRCFANCJDBWRYXCOGUKGQUNWPUOXQKDWJWOVACMKRZQLXTGDVQJXWHSHOGBEHRMQMLQZLIG");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 47812U;
    tmp_msg_0.info.assign("RSCXKSAZEVXXSSDELOURFWXRYSIIZORGXNUWQWLHVISTENGDUTBVWAYYTEIAW");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JMDVEFXRBLCOCWUMMSEFVYIZNWFQTLJGLYXSHPAFTWDDQRUZKKAZOSBZHIDWCGTPEZMZYNK");
    const char tmp_msg_1[] = {-60, -28, -83, 115, 5, 10, -7, -86, -100, -39, 53, 2, 94, -2, 92, -5, -42, -121, 8, 116, 18, -13, 92, 115, 21, -3, -29, 85, 115, -31, -53, -31, -84, 118, -38, -113, 121, 25, 96, -32, 106, -77, 67, -6, 3, -29, 99, 16, 28, 111, -38, 104, 47, -72, 44, 65, 106, -24, 55, 81, -55, -98, -86, 107, 69, 58, 19, 59, 28, 115, 75, -86, -53, -53, -3, 87, -43, -122, 16, -39, 16, -50, 38, 29, -123, -6, 112, -114, 69, 109, 2, -98, -42, 108, 87, 53, 72, -92};
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
    msg.setTimeStamp(0.506695341422);
    msg.setSource(42938U);
    msg.setSourceEntity(145U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(18U);
    msg.req_id = 61264U;
    msg.comm_mean = 227U;
    msg.destination.assign("JMALALWOBFKUSPNGWXIYYKGDKUZDVNNABZQGKBTLPIWRBODHCZTARSDSVYPXDNOVZWXNRDEMJMREGMGTAWIPGSFMANXFYOKRFLHTCQYTZIHLRGAAKQEXMUWRDQWLTLUCBIDRJRSOYWQQEYEBUJVHVHCSFZAWICHBQPPVIKOLSC");
    msg.deadline = 0.776022815463;
    msg.range = 0.129785909731;
    msg.data_mode = 129U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("VDIMFPRVYPPYVZMYBJBGOAQHWDWEVHMAZXIVTDFDCYYKBOKQWDHJUUFRIWOWLZOLMZRYHEXCQJRXKCBCTQXIVOLIGTSMOIXCZTNGTXPCNDJNRSBGQTDPYJSGFRUDFKECAHUKWRVTSGAGQNQZGNXJFMDNCQA");
    tmp_msg_0.op = 232U;
    tmp_msg_0.lat = 0.877642796205;
    tmp_msg_0.lon = 0.785966316883;
    tmp_msg_0.height = 0.124494838025;
    tmp_msg_0.x = 0.294657064545;
    tmp_msg_0.y = 0.843436066177;
    tmp_msg_0.z = 0.78544060849;
    tmp_msg_0.phi = 0.331642759101;
    tmp_msg_0.theta = 0.375363626156;
    tmp_msg_0.psi = 0.373945603981;
    tmp_msg_0.vx = 0.422509686996;
    tmp_msg_0.vy = 0.843937908012;
    tmp_msg_0.vz = 0.911257942035;
    tmp_msg_0.p = 0.823420342097;
    tmp_msg_0.q = 0.0393676211275;
    tmp_msg_0.r = 0.0981730722914;
    tmp_msg_0.svx = 0.963348544374;
    tmp_msg_0.svy = 0.448027449543;
    tmp_msg_0.svz = 0.610725103843;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KNUEVEUAFLKUXFHVGRBZTPGUONTAFSXHUBWFMVHLLDYYNGSEWWYRVETGZILAMSAQOZPCHXXNYXASQCVLJSWKRICSKVHWGWNNUUGZLZEOCBFAIWFVD");
    const char tmp_msg_1[] = {26, -53, -105, -85, 124, -57, -43, -76, -1, -78, 19, -54, 59, -12, 35, 22, 111, -25, -94, -11, -123, -86, 114, -120, 39, -110, -121, -78, -7, 70, 48, 61, -79, -50, -15, -3, -47, -107, -123, 85, -3, -44, -75, -113, 106, -13, -88, -26, -52, 79, -67, -110, -90, -81, -44, 64, -93, -78, 48, -99, 93, -96, -71, -88, 114, 118, -15, -63, 125, -100, 71, 96, 1, -98, 63, -92, -56, -37, 92, -86, 91, 71, -29, 87, -63, -83, 97, 111, 125, -90, -49, 113, -24, -107, 70, 51, -126, 89, -115, 12, 57, -127, 105, -54, -100, 120, 107, -31, -79, 64, -128, -105, 124, 72, -33, -6, 41, 3, -89, -118, 113, 25, 84, 66, -41, 23, 114, 118, -104, -44, -113, 97, -75, -78, -101, 126, -125, 46, -122, -51, -117, -109, -15, -6, -61, 84, 78, 90, -62, 24, 46, 105, 32, -80, -81, -46, -50, -88, 21, -128, -35, -66, -102, 119, 97, 96, -113, -125, 123, 112, 40, -7, -60, -106, -13, 88, -62, -121, -75, -51, 64, 30, 17, -40, -51, -3, 102, 85, 54, 111, -80, -125, 124, 57, 43, 40, 67, 3, 47, 77, 75, 18, -45, -99, -116, -21, -30, 3, -106, -59, 118, -61, 38, 66, 57, -2, -103, -86, 118, 42, 21, -114, -86, 96, -20, -126, -126, -13, 56, -58, -69, -79, -12, 94, 64, -101, 5, 124, -57, 40, 113, 2, 71, 41, -19, 68, 13, -27, -100, -76, 86, -81};
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
    msg.setTimeStamp(0.152968697898);
    msg.setSource(31054U);
    msg.setSourceEntity(144U);
    msg.setDestination(59276U);
    msg.setDestinationEntity(105U);
    msg.req_id = 51612U;
    msg.comm_mean = 118U;
    msg.destination.assign("PISHAMWQXYNBJEIMMBNCQAMORQTTDWFEGTDZBNCBPSRKFKKRRILNTOXJUKFGVRNZEAXACLZXOVZYGOPJLYVXKCFTHNLVVCPWYICJEWGOZSGLMJEKYGBRPNJOKNBFNJOLDDIMOEDCHXJAUSAWMYXDUQZAILMWHTBQSHAPREIHCLPZHQVDXBWH");
    msg.deadline = 0.494770475926;
    msg.range = 0.913928725779;
    msg.data_mode = 15U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OPMTVWZDZBYRCJNRIJOGTBTBQEGEJAXTYU");
    const char tmp_msg_1[] = {15, -55, 104, -59, -29, 91, -18, 60, -1, 90, 24, 99, 109, -84, 103, 69, 121, 30, 62, 74, 64, 120, 113, 44, 52, 39, -121, -53, 73, -40, -94, 52, -60, -77, 8, 110, 34, -16, -18, -84, -32, 4, -70, -41, -12, -99, 66, -114, -9, -92, -54, 44, 39, 44, 13, 104, 41, -91, 3, 23, 73, -106, -111, 113, 89, -89, -39, 121, 7, 10, -101, -81, 86, -66, -8, 45, 107, -113, 40, -11, -92, -81, 65, -92, -81, -41, 9, 113, 85, 23, -81, 105, -37, 38, -23, 120, 9, 14, -76, -115, 63, -87, 21, -88, 68, 112, -107, 54, 91, 46, -123, 65, -82, -70, 49, 97, 83, 23, -45, 51, 45, -35, 12, 81, -95, -66, 102, 98, 12, -109, 20, 32, 10, 44, -125, 90, -8, 67, 102, -94, 91, 29, -79, -47, -125, -118, -44, -96};
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
    msg.setTimeStamp(0.926009247883);
    msg.setSource(42051U);
    msg.setSourceEntity(47U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(66U);
    msg.req_id = 10959U;
    msg.status = 205U;
    msg.range = 0.996626187656;
    msg.info.assign("BDAWYVFODCHZTOCZQZWQOFNWYEDIPYLSXALVDKZFFZBLKEMFDYMFFHRGKIEMVTWFANUSKSCGIPAAZHRGXHMBRYCLOJHHYNTKGVVEWXRRREKDJJVSBSPNNHUVNETYCMOP");

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
    msg.setTimeStamp(0.80883814034);
    msg.setSource(53433U);
    msg.setSourceEntity(52U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(157U);
    msg.req_id = 2737U;
    msg.status = 201U;
    msg.range = 0.551839596219;
    msg.info.assign("FOZKPUBCXMGOIHGHRLPLNATYOADEEVIPANWJNJLDVIUXSJPUYMYULMOWZQMDCRFDCEPISRLFCAMFGUYRVJUMOZHBKEEUILONDRHYBXBGUHSTZHAZKJPVABUJXZUJCZNCLZPKAIYSYKISSAENQXMYWQTTQKARWWXFMLPBDVSPQVQWCNKWZLNRTBHXWIJDPWOHTFHGQGXKTMMQTLOIWVOZTFRGFVTJBFGNYCSAEVG");

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
    msg.setTimeStamp(0.609539551436);
    msg.setSource(15322U);
    msg.setSourceEntity(34U);
    msg.setDestination(25836U);
    msg.setDestinationEntity(253U);
    msg.req_id = 13058U;
    msg.status = 70U;
    msg.range = 0.484199714096;
    msg.info.assign("TNXSMQOVFOTHWQXTKKVGXMJMDYALAEZUFAHKYCVPHOFZZTGRRH");

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
    msg.setTimeStamp(0.149010530681);
    msg.setSource(7887U);
    msg.setSourceEntity(249U);
    msg.setDestination(61193U);
    msg.setDestinationEntity(125U);
    msg.req_id = 54383U;
    msg.destination.assign("QWESBRNMNGREELGPIYIEWKTRWQYZXWVTSMAVPZKKMMOSOCWVSLVRJSXQBIEPMUHQAKIACETGUDUTDCSADHDIYYPMLQTBNHBLJRVAAPNGLCTHGWXAEREPFPTZFPGGFKMXUXCBINVYKVXJMROHSZQFWYXTZFAHDMNQAJZSCXOHZZOGGPXLJSPZU");
    msg.timeout = 0.124169236762;
    msg.sms_text.assign("JYABSJJMZZJXDZPZXZJRUDIHHGDNOWIYEUGJMTLPPBDLTYRBXFFWVVHSLBRUUDVDTBVOHISZOGFCNAFGHSQOPKKTVFRGNDUEZEZMRDDENNKNAFGRSBJAYNJFBCMLQXXLMKLTWGHQYOLCITWYIXEEHOWSYQSEXRKEQQUYUYKZTWXVSKWTVUCGBCXLOGHQKCSMSCEFOUAQVNMCAYWMLTIXRDZCARAJMFINABVOLBPF");

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
    msg.setTimeStamp(0.13830928924);
    msg.setSource(24424U);
    msg.setSourceEntity(169U);
    msg.setDestination(35021U);
    msg.setDestinationEntity(252U);
    msg.req_id = 37587U;
    msg.destination.assign("NOMLORBJYYSZHTEEZHEYSKDRZJIRDQWFALKCIHBDYATTUGOZMGYGPVTVHBYDWCSYSMQUGUXDHNXVFQENZMPAGANWWONRTTZRFSBGWDWOUBFIJKAIWKJFGQPQJILKK");
    msg.timeout = 0.0444520871095;
    msg.sms_text.assign("EZGJHFNWBXXZIBSTGORPUCFJSJXGCFPUSXVVQLYGJLCHDSESLPFDGUGXLWUHWROMKCUQTKNKJCWJLXIPZEDOZKADGCTNBOIXGOLSNNPNDHPATMIKRKCPPALBCJBTVYBJMAYELWOWVUQOYSRVQZERWCMFRSXONPXHIZVRDHXQ");

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
    msg.setTimeStamp(0.0670896512356);
    msg.setSource(29025U);
    msg.setSourceEntity(227U);
    msg.setDestination(1U);
    msg.setDestinationEntity(82U);
    msg.req_id = 13385U;
    msg.destination.assign("UQQKTXGDXRJHDCTLEHLDNUQMNEQRNSWEKDXOWTSYJFSKODTHVXUNEGOGAISLYECUXMJRAFTADIPFLFSZULUVJINUEHDKLASRPMBZVLXGMWJGBFQWHJFIPSWPICDKHAVYCUCOPPSKKFXTFYZWBTNPQOBFAWMQMBOYWSMVKAVARZJWMPGRPBZGGCCVXZ");
    msg.timeout = 0.70132167049;
    msg.sms_text.assign("IRUBMJKODMBLTQZSOHBZWLMVECTTXNUVFRPAFMBGSKIWLWQMKXWRQNNXDNQJTDIOCTCCKFXGHBFITPSAXCGCIDOUKAMPMJUDVUYACCRAIZOOERRERKSUSVDRTEHYDTKQQLJUTJUKGQPZGZPCYYAXENGYVIFFZLLPGPOZC");

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
    msg.setTimeStamp(0.509016218399);
    msg.setSource(48736U);
    msg.setSourceEntity(223U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(105U);
    msg.req_id = 44100U;
    msg.status = 168U;
    msg.info.assign("ULOPNVFTZHJCCVDVXNJWAAUEPPZHNMQOGHNMTKZQPVLRKTIZISUIVGOSUAHPVXXHDWTPUZQGLWAEYYQKCGUFBSVXGYOXDDVERKAJCMGCBBZVBN");

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
    msg.setTimeStamp(0.795865681185);
    msg.setSource(39683U);
    msg.setSourceEntity(164U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(188U);
    msg.req_id = 56747U;
    msg.status = 114U;
    msg.info.assign("OSHHMYRBKVKBJSUERWIWOMZXQKUORWFYNZTJTANDTYYFQDPZISWQXIRRVSQHMTAQHDGEPXOXOEUNJHGEMCXLVYKSDHDWS");

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
    msg.setTimeStamp(0.798816772248);
    msg.setSource(47702U);
    msg.setSourceEntity(50U);
    msg.setDestination(10744U);
    msg.setDestinationEntity(101U);
    msg.req_id = 21424U;
    msg.status = 183U;
    msg.info.assign("XHPIANBZTB");

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
    msg.setTimeStamp(0.220770577472);
    msg.setSource(2424U);
    msg.setSourceEntity(160U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(62U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.733322088895);
    msg.setSource(51886U);
    msg.setSourceEntity(63U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(177U);
    msg.state = 132U;

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
    msg.setTimeStamp(0.474485646982);
    msg.setSource(19597U);
    msg.setSourceEntity(189U);
    msg.setDestination(53829U);
    msg.setDestinationEntity(198U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.226525479005);
    msg.setSource(41005U);
    msg.setSourceEntity(153U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(250U);
    msg.state = 84U;

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
    msg.setTimeStamp(0.322919411268);
    msg.setSource(3060U);
    msg.setSourceEntity(73U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(100U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.332782213599);
    msg.setSource(57795U);
    msg.setSourceEntity(151U);
    msg.setDestination(46846U);
    msg.setDestinationEntity(14U);
    msg.state = 15U;

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
    msg.setTimeStamp(0.613546415007);
    msg.setSource(46816U);
    msg.setSourceEntity(114U);
    msg.setDestination(150U);
    msg.setDestinationEntity(214U);
    msg.req_id = 61857U;
    msg.destination.assign("BDEBXWFDHQMHNOORULMSGVGOLDCDOWEGXEWSZNOXJRDVWVXUTBITZQMKEXINSUJRIYKIAJSVZNRZLPPQYYSLSDHAYCTLCGXH");
    msg.timeout = 0.781873706186;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MJSVWLVJCSCUGQRIWZHYGFHNMIDJLXHNIYXKULKNRSSUJHIKOLWDTEDBYCTERIABPJDXCFOVSSIZVFPLLZODAJQZIZWKTCRXONDXXQGOPOTFQHETKPMDFPSQKOEBRCUNPAXUMWKIQDKMAXVEBGEEPVPBGOMBHFRHPMRYYQZNXVTLOGWMNAWYRVCFBHWCP");
    tmp_msg_0.sys_type = 45U;
    tmp_msg_0.owner = 41460U;
    tmp_msg_0.lat = 0.96647485616;
    tmp_msg_0.lon = 0.265671000915;
    tmp_msg_0.height = 0.382735569954;
    tmp_msg_0.services.assign("QGUVGPTAFPEJQHAKLDEIANLMWZSYIADCNMGLZOEONXWIXALRTQQEYDYSEVVZNQHBWRHEAEDULWZNNDPPRGZOMEKOCKAJGJSIPZOWYZXFMSOVYYBDTEHXNAXQHBKKZSOCO");
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
    msg.setTimeStamp(0.858976062589);
    msg.setSource(38772U);
    msg.setSourceEntity(160U);
    msg.setDestination(64805U);
    msg.setDestinationEntity(215U);
    msg.req_id = 16974U;
    msg.destination.assign("BNFFMELTJSQDWAOLXFXXRYMPCTEGAJHUGOKZAVIRKBYOSLJOMGXZLHQPFUPQHMMGQQILREDMKJTCFXNUFSFOSJBVEKMEBUP");
    msg.timeout = 0.783157348877;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.702066785174;
    tmp_msg_0.time_next_service = 0.241071626752;
    tmp_msg_0.time_motor_next_service = 0.155007016011;
    tmp_msg_0.time_idle_ground = 0.613219770589;
    tmp_msg_0.time_idle_air = 0.00673023448281;
    tmp_msg_0.time_idle_water = 0.868900058106;
    tmp_msg_0.time_idle_underwater = 0.744103462727;
    tmp_msg_0.time_idle_unknown = 0.0429853664004;
    tmp_msg_0.time_motor_ground = 0.21294941614;
    tmp_msg_0.time_motor_air = 0.589161121279;
    tmp_msg_0.time_motor_water = 0.940891787396;
    tmp_msg_0.time_motor_underwater = 0.50153279732;
    tmp_msg_0.time_motor_unknown = 0.497609102196;
    tmp_msg_0.rpm_min = 8137;
    tmp_msg_0.rpm_max = 31096;
    tmp_msg_0.depth_max = 0.0350307055674;
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
    msg.setTimeStamp(0.00266051762767);
    msg.setSource(36827U);
    msg.setSourceEntity(236U);
    msg.setDestination(24987U);
    msg.setDestinationEntity(253U);
    msg.req_id = 56195U;
    msg.destination.assign("CURFMVNXFDIPXQLKFZSCKUGPUVFVUKQBFRKOZUD");
    msg.timeout = 0.370188649947;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.791462118299);
    msg.setSource(56164U);
    msg.setSourceEntity(164U);
    msg.setDestination(33129U);
    msg.setDestinationEntity(105U);
    msg.req_id = 34996U;
    msg.status = 58U;
    msg.info.assign("DBYMQHFAJSEBOXQLNZGIW");

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
    msg.setTimeStamp(0.139052876687);
    msg.setSource(1549U);
    msg.setSourceEntity(43U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(56U);
    msg.req_id = 48370U;
    msg.status = 59U;
    msg.info.assign("CPBYTROHVHLIORRIJZAIPGOQEXDVUOXNBPTJZKPUPRWJBFXRDJFBQNAKZVIS");

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
    msg.setTimeStamp(0.518414037789);
    msg.setSource(39240U);
    msg.setSourceEntity(132U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(201U);
    msg.req_id = 48006U;
    msg.status = 114U;
    msg.info.assign("RVRLDRTQTABNAFNYPUSEOOOEZGPCXCACMKXGBLSPTEZWSPFXMQDAYOBYBBGUMXRDMEXWBIGBZGTUZAQMISTYLRSPSCMFLELOHKJYYZKVUPFWALNQSHZWKGGIMWAZIPQJZVDPTXC");

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
    msg.setTimeStamp(0.201575147361);
    msg.setSource(40469U);
    msg.setSourceEntity(84U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.403177080026);
    msg.setSource(16913U);
    msg.setSourceEntity(142U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.558454296667);
    msg.setSource(36462U);
    msg.setSourceEntity(165U);
    msg.setDestination(49687U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.627586406864);
    msg.setSource(53910U);
    msg.setSourceEntity(250U);
    msg.setDestination(37036U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("XATQZAODZRCTEJBQCLCBLFKBUUMSUWFLNDVVXZQMOHBWIDUVGYHGOCTOPIHKKBFJETVBQREDMPROSXIIGTOUNHGXHOJHQRLYJRDKCZAKBILRZCZJEULTAUIYVVAGHSESEEOGJVNFYEKXWVEDCWWHXCMPXJSNMNFFIAIRPKNFGMTRKFVWLYNWWNGBQZZPAQAH");
    msg.description.assign("GQUKJFYNBNUYOJKGYMSIHRIZDPLWSNPZTDCARZPKLNRALQJUBXUTTKFOWDBAYOXIGCGINPLGFCXVEBUYDBWLEVAXX");
    msg.vnamespace.assign("NHIMHKWZOVVTCOPRXHJLBHXMPGOSOWZNGBFYVICVTCPBIEFQSSZMNPOKXNDDNYXFVGZJJHKSVG");
    msg.start_man_id.assign("XZLCBKKAWEGYAGMPPCJIWO");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 254U;
    tmp_msg_0.quality = 204U;
    tmp_msg_0.reps = 153U;
    tmp_msg_0.tsize = 82U;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.803087612027);
    msg.setSource(20787U);
    msg.setSourceEntity(136U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("SNRCPMBILWVVCBORXATVFXWDJCUEOJQEYTNFJJXMLQZKTGFJLGCOGGSPIKRYWWMBDNDMKESUAKMMONKNLITPONVFZAKYYDNMHBHZGPNIBTYSFHGEYLIAAZILCCMQBKWNEDAHXSKAJIPSLDEFEMQIQPXTPBJBGDGFPSURYXPRATXAHUOKXUVGAIBFZCTUCUUYVG");
    msg.description.assign("RAESEBOCHWGPXUKIOICQPNDNYJRXTBAKZTVTHPWDSXHRGFJZKSQJSFLNZTSUKMCTUNSFRZAPIQBEHVCIOOJBMODWQTYGUBMNMCNOVQFCTYDIHZAXGZUKSEPNZLSWTIXPPDUKBLVRKSVKEAFFVHLLDUNBMYYMVWRUYGKGBXMRINOOEHCASP");
    msg.vnamespace.assign("BAWPHXULHGZWWCUIIHNJBZSPNMKCEEFLPUQQKXNFBCJDVCSLFXLMPKRDVGYHPUXBAYNROLYOFTTWSVH");
    msg.start_man_id.assign("NXSOWDNWROJPLWZBTPRJXEYQPUBRYNLBZUNKEKWQASIYOENRHQUAWRZ");

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
    msg.setTimeStamp(0.596437469315);
    msg.setSource(20718U);
    msg.setSourceEntity(70U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("TSELITIEFUPXXJCWFRLKMSTLECSDZCAEDSERGIGRLYVHTFBGGTFKDEQDDARTLBLHBZHNQBKZNOQKOFNXPQYSPNVJOHZPJULGJXWTHUPQVEBYJNKCAJJVXKWAXVAVXYZRUHMUIWOTFWSPWOIAGIDRCVBKHZYUGJRWPSDYCEUPWXHWRIMYMDJYNHRUIZDVNSKAXS");
    msg.description.assign("BKRNVUJBEMGARAKYLITJTCEVFAGTZFJGVNHSXYVONOUHHGPRWPWVDYLZXCCTLNZUSMHLMCIIUFIXHZSMZUXWFSABDEILZRAOEBEXEJGXKZADGCYMSPSBMQDQKOEVKJUIQWOPLRWPHBUDNQTXDNCPPLRHQGOMRJYTKXWPJTBOZOYAQEOLVWJTTGJBUMDENGIZQLQPXQFTSLYGDKHYKFRRCCODIYDS");
    msg.vnamespace.assign("HFCNGLTLMEGLKBWBFCKSDBSPRRUNPGYOVIHJJCTAHSZPEKRZEELHTOJQLVYKRBYXOQIQQJFTJNFVGXWMWNKBMBUGLSQNPZCQKDXYCESHRAMRHFTNMMEYSIMDAAOIOFJGIUYIVWDOWVMCXZINVGULCAHWWPMYICBEVVNBVZWZQCXPKDAMRUJPFNGBXETUIRXZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JPPDUBNHQDPQFXFPDAXJSLLAMKOORCULYSPNOHEIXFLQBSTBTSQOKRNGKVINCMWSDCTHIKRELMYGDLGYNGVYYJQEXZEVWQZZMUIYMTWOYVLAUAEBWYE");
    tmp_msg_0.value.assign("JXBZSABLPUWEPFGVIGCDMYQTFTCWLDDABAUGMDFAKRSBEWRJOSSZFTIJYSCBXVGUHNDTFSLZEJNFCETOOOAANPPGSRLNVVRURKBWLVFWCGDP");
    tmp_msg_0.type = 220U;
    tmp_msg_0.access = 186U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YOSIQKWBLUGMOXTFHHBUIUXEIQQDRMDYKJNQTMSOHSDICXTTLBYAZFULBKYHYXSMGQNFYKFDDKOEKGVOOTSACIDLIPNZTWCGMWIVEJETHTRRYTSLPRFOWLRCQVZGFEPCAUNKRGKMZYQPKWN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MNRCANTJLCKOWQZHLAWMVRLGOWXNQQBXDPACRGGFZPCKVYWXTLXYOATMQPXTCCWUOQKQHIGFNGLHPXYKNBMMLSSWUVSPCMFDIBBRJSEJZHYEFTNHYOOKLMUROJWADIQNRRIUULDKDPYDSJCRAKSRBLZBVFLQUUVIA");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 26336U;
    tmp_tmp_msg_1_0.flags = 189U;
    tmp_tmp_msg_1_0.lat = 0.397420717094;
    tmp_tmp_msg_1_0.lon = 0.505726292495;
    tmp_tmp_msg_1_0.start_z = 0.625333899533;
    tmp_tmp_msg_1_0.start_z_units = 135U;
    tmp_tmp_msg_1_0.end_z = 0.268439296241;
    tmp_tmp_msg_1_0.end_z_units = 200U;
    tmp_tmp_msg_1_0.radius = 0.286582973394;
    tmp_tmp_msg_1_0.speed = 0.462052467054;
    tmp_tmp_msg_1_0.speed_units = 181U;
    tmp_tmp_msg_1_0.custom.assign("QJCOUWLFOZQNUBPPTLGTAUBIMAWWBIBTSZIOUXGNYLRHUPAQRAHBMJAERJRMUSEEXEFUZGHDZSFLKYPJQGQHQYHDJCPSKRKEXDJVGUXDYLWRSNPFKLWVOXFQYZATREDZZHICWPOVKQGQFZITGVUNFIBYWBEHDXVXDMTBIHOGCKYMOUBLMMTVQELZTYXCKJYXCEKBLTNFSDNTSHDW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.663894234588);
    msg.setSource(42701U);
    msg.setSourceEntity(251U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(254U);
    msg.maneuver_id.assign("FQTQZLIAMGUUNRRKXLQNCGUXEULHDEPSJDYDAHAWTGJBRGRAJFQVFQSTFOMWVSLBBVMGOQFZETHGKXNPHRYCWWTYKHFWBOCWECSIHJPXMJZVTKZTSXOUYUDMS");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 39775U;
    tmp_msg_0.lat = 0.564094591743;
    tmp_msg_0.lon = 0.0629848110499;
    tmp_msg_0.z = 0.194949234381;
    tmp_msg_0.z_units = 185U;
    tmp_msg_0.amplitude = 0.763769192982;
    tmp_msg_0.pitch = 0.0287231810434;
    tmp_msg_0.speed = 0.376443580806;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.custom.assign("FVGATMBRXDPIQODQNJPBRMLVETGDFDBHPTQVMCCFWYSKNADNLZ");
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
    msg.setTimeStamp(0.71377818128);
    msg.setSource(45399U);
    msg.setSourceEntity(43U);
    msg.setDestination(53009U);
    msg.setDestinationEntity(180U);
    msg.maneuver_id.assign("DXBURAKZBWWXMFLPLJUMKWOOXZPOFQVKNQDNISXOGUAHVFVWEYBYHIYWLNPEFNROPTFILEPBJKSCVWXRTDTHKZTPKMXZFCLVARHNJJMPQQJSEGQASXSPGHUCRAZDEQHBSWGRMFYDHLBTDIYGQWSAJYQCTYVZHKUIIYSCFGFCNBTIXARENMMVBBIJNKVOGBDZLUWMHER");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.460968386738;
    tmp_msg_0.lon = 0.790668968292;
    tmp_msg_0.z = 0.995739359354;
    tmp_msg_0.z_units = 16U;
    tmp_msg_0.speed = 0.0878382563461;
    tmp_msg_0.speed_units = 186U;
    tmp_msg_0.takeoff_pitch = 0.403605671842;
    tmp_msg_0.custom.assign("ALCLBIBMLJIPZVACVQYKYJUMKOJIOUTVCRXVGEQURSKZYWLBKHQHLINOPWHRXJFEHWSPWPLIQHCGHEOEVFSOAKNHUCBXKVAVQGRCGLACBYDYYMKJAAIOXIPAQTMDJZZFOGSCZLXEWWSQSDEETDYSGEGTNUWPXEXSMNTTMYNZKWBDMUOURQNCKMMTWRD");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("LOPPCFVTQCHOULIFJFUWSTNPZWUWAMTSWBNJWRBCQHOTSJZESJECTJLYNDLGPYOBKYRYFPYDZTBZCAVKLVVEQKCKHHXIYLCMLXNDVISJGJIMXVMNOYFXXENKFOXQBJUQIWDRRGXNVBZNJMWHBDPZ");
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
    msg.setTimeStamp(0.0295389224529);
    msg.setSource(21214U);
    msg.setSourceEntity(185U);
    msg.setDestination(53511U);
    msg.setDestinationEntity(148U);
    msg.maneuver_id.assign("YRWAHWAVQSBZMCYKXUXFFHLXFRDYWMQSFLUGDQHOZTJJI");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 62467U;
    tmp_msg_0.control_ent = 11U;
    tmp_msg_0.timeout = 0.938950003532;
    tmp_msg_0.loiter_radius = 0.415405806658;
    tmp_msg_0.altitude_interval = 0.929504432666;
    msg.data.set(tmp_msg_0);
    IMC::TrueSpeed tmp_msg_1;
    tmp_msg_1.value = 0.806663408955;
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
    msg.setTimeStamp(0.263166550265);
    msg.setSource(22195U);
    msg.setSourceEntity(180U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("LVCUIGDETFMRHFHOEQKKDJBLUSCVWQXOSJVXLRKMRPIQKZGMEBWRGVAHUVQPSZJUNYITGWSDRQATHHSLVKCUDQQNHTTYOVHRLIJUUSNHNVYPEXABJTMNZBFOYVXANNRFOCOIPXJMKELNEEKYYGBCWELEZOLPDTWOCRXIPGEBPADOFBJ");
    msg.dest_man.assign("WPTQKKIKULXPGTLWBKAEPYYBPRIZQJXHMUWEYGCXULQKSFUFCVUWQJZFAHYDCKESYOGFEWMQCNPGZZHRWVMCRJRSHCIGNMPHVDDILDJODJAVFDOHTGIFKEBRZJXNWAJNTRVRZKEAYNOSJOUPISBVMWZRMBFXQOKQYOSXIDBYOSHJTHRYL");
    msg.conditions.assign("DGDTDDOFBQHZVGPWNZSUTECTBIAIZYLERTXUJOMIMJKETHLNJQHWUSXFZKYBTNOSXVXSBJKNJNBHHWZAYHFYYVDESQGLLU");

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
    msg.setTimeStamp(0.496051858439);
    msg.setSource(10972U);
    msg.setSourceEntity(39U);
    msg.setDestination(49804U);
    msg.setDestinationEntity(180U);
    msg.source_man.assign("CEKGDUULFCNYSVKFQPWRZQRLDSPNEKTXEBMIQOLXOBBQPVDHNHRWUXUZTEDRZMFAGHLGJYNIGNKKOFLTTDSQCCEHWFUGDMYLEXP");
    msg.dest_man.assign("BVXVOWIZDGIZCUHOW");
    msg.conditions.assign("VWGFYHGFMTVJDMZYTRZKTWWKXUOTYUHAZOIQXEJCSVBLIVTUBWVGQWIINKEMCBULWFBFSPCADHLPBYWTJZFZRUUYRCVQIROABIMZRJNBJBFLYXAESODCCHYOJAWEJZNNYSHAKKNZMMTAH");

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
    msg.setTimeStamp(0.314284053901);
    msg.setSource(39584U);
    msg.setSourceEntity(166U);
    msg.setDestination(10311U);
    msg.setDestinationEntity(155U);
    msg.source_man.assign("TRQCCWRCLYHVTPWIWRUVEXNFBYHCDRNGIEVKPXSKIDDRCFYVIUMOUIETRBOARGBGQTMNISOVMDXMVPEIKRVJNWHTZWIYZKWAFQXSONZPBXJSMTUFAFQUFHVZXYLDEOZTHYKNGMXVJZRACWHTMLMJPBNDLUMPXTZGHLGKFXPEKDPODQLCFZSUGSDQRGQWEQTZQWEAJCSBEBAOLMABFKINALOVUSAYYZBQHJOHJBWIKSGLDXAJKPJOUUPCYG");
    msg.dest_man.assign("MLYKGWEJRUHPSCVPKHXLWOKSZXEUBQCQKUHNDXGZFDAASOUVFIXSCATOROCKYVFMECVRZWGADQLORPLCWFXZYEZILBBMHJHKW");
    msg.conditions.assign("UUZKSXGDEEMMMTJKBGGBDJHYNEYXWAWIHXXCXCMRECSPDVPSOHBIOQKNTEGZWSNBDHJRZQFJJFGEJFAEA");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OYYJVRDZDOIIVXVUBLNAKQLBICSWRBRQLBPCSAERVWXRJNAMXEJYXUFCNZMMVDSAZBBPMQOTBSUCRKFPQLHWNQOXOGFJSVHJDTHQPPVGCKHZMYKCTCLWAAUIOHNYOKGSNHALMWZYPTGSVDLMWJWWEFUFAZBFCVDYWQNKOMDOHLQMXZTTIWFDJGUIPLZGEHSIRRUUBITQDQKXNTHXCEUMEEZGEHXIDCZTJJNRGRUONV");
    tmp_msg_0.visibility.assign("EWXCVUTNEIGFPZZQEDXQPRIQGXLFRIWVRROBNXBCMWIDVAUTHOCTXCKFOEPTJUDWHRHJZVYEBFSEYSMMHMKURMNLGBCRPJBTXYIIKLYSQOXQRSYLFDCABGXFZTDQYCDNCPN");
    tmp_msg_0.scope.assign("IQHXKDXLQXRUUEMNAAEGQNHKJPFSPWEDRUIHNHHEJVIHWQCIMKZUXKIRLWQRGVSUXJJNYBMQVTUCTRXRIAMYNOBNNDAFOGREBRMHPAEWFWSPOHLOOLXITJVIGQUYLVDDJLTMZSPFBHUBLDEEKWVXSFSEGPKRZGXCFTGKMDZAMILZ");
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
    msg.setTimeStamp(0.114589398398);
    msg.setSource(15671U);
    msg.setSourceEntity(195U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(81U);
    msg.command = 224U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IQPQXYRHZTICTFWZGQIQDJBMMECJJSQEEHWZPAFTXAVFDWYJSJRHKBVNEVWNBLQRFVMAKLNTHMRTBNBHFSAGBWIYGEEYLDJROUUKDYYVFNQJVLCIYAEHAUKTWYAUJRKPOUGVDQWBARXCKENOIGZWZUMXSHOLSTBZMKAYMROQDLJPCPMUDSZDCNVUXMPIUBITQZZEHPMARCXIWPLDBXLFNCSNSISDOOXTKOWKJHGV");
    tmp_msg_0.description.assign("DCZOZXYIGRADFBRPSQVRUJTRGWTXHTL");
    tmp_msg_0.vnamespace.assign("PHWDYBZQYUAYMVUGIWPRNIEZKTIHZFCQVQRCGMHLZTDMJOIEHBMDFPZPXMTRFYYDSQFMWEUMQSRBTACUVBOXXPJYONAZJFKCHSSDSKKDBTNERFGDBICZSPCDIKZRALXVQLNLNWFOEYVNWQMXPIFHNRVLRUKYZB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DZXBXCPSOCUSQIQGLVXMYRJUCTZMMOFYONKWCWMUTGISSKPNEPLZCDHBYBUHFRDSPGFDEGOBYALMJBWTVRFYZNHIBVNGQQMYJDZWKVURBCWUNKJIEOJHTRDEQVCSLQXTDOSNWZAEKMJOAGPT");
    tmp_tmp_msg_0_0.value.assign("UQCHWDHDJTALSVEVOCXPLSCYMBQOLKOHITATQERBSTOKDNLKGDIHOMSJSESSNGINZDRMBZIEKCDAJCMRAOZSZUTFLETCWYFBFPIVHWWMJWJMHVMPQEVGCVIZXAGPKRJRKXABHYJEMAFPYXRFYOFKNWRWQUXKJXYQUUMDUCHEHUDSTNQBLVDYVKLXNVQYRBFNZLGRXFGVTEXAONJO");
    tmp_tmp_msg_0_0.type = 234U;
    tmp_tmp_msg_0_0.access = 180U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WZMEOOOXMVVAULAMNWIPWEKWJHSYJUBUNVGTFQWPEGKFZUNLXBISFGQHYSGDKFOJAISGLNHHUMRCOCPKEYJGRDMVNN");
    IMC::NavigationUncertainty tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.00224168986647;
    tmp_tmp_msg_0_1.y = 0.894170659098;
    tmp_tmp_msg_0_1.z = 0.832995081798;
    tmp_tmp_msg_0_1.phi = 0.511377476634;
    tmp_tmp_msg_0_1.theta = 0.0481588576766;
    tmp_tmp_msg_0_1.psi = 0.939387308428;
    tmp_tmp_msg_0_1.p = 0.713380415447;
    tmp_tmp_msg_0_1.q = 0.259564371208;
    tmp_tmp_msg_0_1.r = 0.794127365275;
    tmp_tmp_msg_0_1.u = 0.972057380875;
    tmp_tmp_msg_0_1.v = 0.409962053642;
    tmp_tmp_msg_0_1.w = 0.516952395388;
    tmp_tmp_msg_0_1.bias_psi = 0.313640691271;
    tmp_tmp_msg_0_1.bias_r = 0.0419428325727;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.471380041094);
    msg.setSource(50480U);
    msg.setSourceEntity(217U);
    msg.setDestination(55055U);
    msg.setDestinationEntity(116U);
    msg.command = 22U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZNULCHWICXTHRGDICKBLARNDCPHKUGYIAEUQMJQPYJFOQKUQDNEBASEMWTWBLONXPRRMOICPDZOZHGSIIWGJHPDFKBYUQJTKRPEMAHA");
    tmp_msg_0.description.assign("SPDBSDPTGSXVHALGEIPFKWAYOTOGUZCFBMIVOWYDEYCKACJDMLJZRYXIEFELQJZUMRQOPUVOLEKBVCVIIBUDMJZOZQZJJUURNTCBIOWVPTNJKMMRFXFIMIXFMAHBWAXKSJLEBRDUNGHYEDOSVVIUKYRNNMWQOHDFGPLWNJHSXYLHXWRZQUCMHKSBGFFQCLEGINZAXG");
    tmp_msg_0.vnamespace.assign("SBURSACXVVANZYTZBKXJSBPDYFOTUYKRGLATPRITZQFCMNFUJEUTECMEWBOXVQLKIBIUNRJSJWXMKXTIFPQFJQGUXDKYAHACDUBMLNQMIFEWHFELIUCHRVVHFRHXHMSGLNXYSAVMWPJOGZVJZOPDIKMCGTYANEVZBONOQVQRGWYELYLVALSCXQCJOFWDEGZBSUIJEHBSPQCWHDDTLOLWFGSPREYAIRZKDNMXKJOYHTQIGDBKHPAMDWNZPOWRK");
    tmp_msg_0.start_man_id.assign("SPXGYFPNHQTTDAQHHYKJFLZZRGNBROLNNXCDALGYAFWSKRNFMSFBWWFEDUUHUTHMXCRLOJTUZZADNPKNVTFLDOGDQCEUUMPRLYETNEWKTCTSIIOWJPBVIQTJJORMLGMYKDDLQDPIRKSIXMWVNBSCGSWZRXC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("DOLSEBILAOIGKNYJPSPUGBTIY");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 27918U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.252226161976;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.750258544553;
    tmp_tmp_tmp_msg_0_0_0.z = 0.00619707601541;
    tmp_tmp_tmp_msg_0_0_0.z_units = 157U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.619198424845;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 19U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.697984380801;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.41076883172;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.0618511576079;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KUPBTJXUROMGAHHX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.958265151861;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JIWNZSPVQLHNHUCTOZJYYRYWOLYXPIMWQNQBDKHRWMXJVDJZOFNFPLFFTFVUCZIEFWETEKPVJTKHOWBBBBGL");
    tmp_tmp_msg_0_1.dest_man.assign("WBGLVFGZPZEXJYCDFEWRRNADDEBLZAIOJFCDLDBULQHBRKIBMQMEOEGSSAKSJNOWXIMKPXOIYIQDQVSQFYIYC");
    tmp_tmp_msg_0_1.conditions.assign("HADODNXVVKXFTEQIHLBVCCJYNBYQBUMGVVAFZERJGTDTAODVSPSTNRPQUSVFEXHMIDHSZYADUAUZJPCPXMZEBE");
    IMC::PH tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.68289734053;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Voltage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.000957437082443;
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
    msg.setTimeStamp(0.450068392136);
    msg.setSource(32220U);
    msg.setSourceEntity(92U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(166U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SLCFWBDOHRRLNHX");
    tmp_msg_0.description.assign("MKZHYXSYSIUWBRVTLJIXWBDIIZNRQRVFHUWZJBUYCFOAOLAZKCLNCHVLXMXBCAPFSXMUETHQYRETWNGFVBVKPXQPPDVAMEUFQFVPBA");
    tmp_msg_0.vnamespace.assign("IXUQVKKSAPDFMSZUFIKZWIBWDACLNOGAQYASYZGSOMCFVOK");
    tmp_msg_0.start_man_id.assign("DGBGJOVAQBPLMDSSZSRKASWSHSJZBYWVYWTPNTAKJRVCMLLAZSEXPNPMHG");
    IMC::EulerAnglesDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.98676899087;
    tmp_tmp_msg_0_0.x = 0.0293815922824;
    tmp_tmp_msg_0_0.y = 0.519738983543;
    tmp_tmp_msg_0_0.z = 0.0427546455452;
    tmp_tmp_msg_0_0.timestep = 0.120604653496;
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
    msg.setTimeStamp(0.874342599898);
    msg.setSource(40133U);
    msg.setSourceEntity(200U);
    msg.setDestination(26262U);
    msg.setDestinationEntity(93U);
    msg.state = 220U;
    msg.plan_id.assign("BZCKMYSAVONGEKKQTPUWNYEPSVXVBZNDPBSKUYVWUEGVCOSHYUELOALRZSFNACFMMXIDLDHWCWRCZLLJCHXDZHUWGICKCUIKRRNQQRFJAROHOPFDJSVHMSZSXEQAJRYXIMBJTUVIYLMPTFTJPAEBBGNZGPYZEJMJYBHJRSXPXQECSNTMKHGFWDVWVPGJUBDI");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.387545055042);
    msg.setSource(22666U);
    msg.setSourceEntity(56U);
    msg.setDestination(33944U);
    msg.setDestinationEntity(79U);
    msg.state = 80U;
    msg.plan_id.assign("CWWMGFJPZDCHUMDYUOLQHDRWPIULPLTUZOCPKLETAWTCYZRUKVGQOAEXOHTNOYKUCPBIRGONNDASXWBFZFZHAADLNYZSPMKENDUESBJMRCMGJYSIQJXTADFPAZCXVIXZZITRMCVWFFRTJIDVOBLOAWBERHWMLEPSJUTPJLWVQKVBGYKVTVJISBXHMYBQIRIKGISC");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.0226048281164);
    msg.setSource(20770U);
    msg.setSourceEntity(190U);
    msg.setDestination(56948U);
    msg.setDestinationEntity(251U);
    msg.state = 106U;
    msg.plan_id.assign("HGXBLNZXLDIPWQWTLFQLHWMVKRKJIYWAP");
    msg.comm_level = 214U;

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
    msg.setTimeStamp(0.201713925401);
    msg.setSource(36173U);
    msg.setSourceEntity(117U);
    msg.setDestination(55588U);
    msg.setDestinationEntity(14U);
    msg.type = 58U;
    msg.op = 54U;
    msg.request_id = 65040U;
    msg.plan_id.assign("XLTXWNCBPAWZVEJIBUBOJFAGOXTNGCTFYYYSKBUSPNCJDRHELKQWEDWRKHJOPKSAYPUFXLLMAZHHJYSQPSCHDMNPEOTDIICLPQSWGVMRWFOMBTUKYROJVRIUAONRIXUEGFRYKQAZELCSDWJRZFV");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 244U;
    tmp_msg_0.goal_id.assign("VQKYAESUQJMKDCRBWZUUPWOKFXOJXMIZRPCXTQURPELZESVCPNDRQCTFETAOQTZOPSKNYAANRGTJZRLSZOHUWLWGAENTJHDRNGKMOLZABJMSFUBIDCRCGMSEGHHXPMBYUWLKKFBSDDWFBQNBAIGFNHKFOCDHVXZ");
    tmp_msg_0.goal_xml.assign("OTWIIMCBXVUVRTKARVPKCWBHVJXQZLJXZBEIVOXPSTMWAYWDYLGEWKUPYWATNAZXDDPHBRWAHPGIHGNXIBHRQDHLTQAJWCNMFMOUSFPKKQCTROOYNOCXJMUTERINCVFMUKYSLJSAYSWJISDQKYVTPFEVUDUEOHGKMDBLDVURAFGGDMSBPVAQMQPNUGZCHOHBXLZRCUJESLZICFSZFYQXFJQNIEXDEAYCNGNHRLZBGJNYKWTIBL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GXGQLOZTIHHOIUGJNFKDDEKWKIQJSJRLJLOLQXTVAKEPMDBTGDOFHUHNNMOPYQMHEOBEXQIWTGPABYZNKZBNUUKSCALFXKPKACGMNVKQFDSPDSLVOWWXANVIBNFZVPUWQGRCHFYZBPIJQTCAWLWMOFWRBXJHUVSBECIDSMRTPYJYTMAXYARXZIFRLHCHDARESLICVYYRNUCMFOMKVIVOHJRUYEBRTGCLEZVZSJQTTWBSEFPUXYXDZPSG");

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
    msg.setTimeStamp(0.97877254565);
    msg.setSource(44006U);
    msg.setSourceEntity(52U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(155U);
    msg.type = 201U;
    msg.op = 101U;
    msg.request_id = 57217U;
    msg.plan_id.assign("RNKZLTYBVJVSFRQQYQSTWUSXQDYACVYJFWZYVJDPFDUBPUKICVWWHINAHAXYAHTCKG");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.446515187474;
    tmp_msg_0.y = 0.938307344425;
    tmp_msg_0.z = 0.592940354716;
    tmp_msg_0.phi = 0.661262954442;
    tmp_msg_0.theta = 0.483441844701;
    tmp_msg_0.psi = 0.168168214646;
    tmp_msg_0.p = 0.971604642921;
    tmp_msg_0.q = 0.296032302979;
    tmp_msg_0.r = 0.0904548223207;
    tmp_msg_0.u = 0.826641022701;
    tmp_msg_0.v = 0.34914699835;
    tmp_msg_0.w = 0.0888034393375;
    tmp_msg_0.bias_psi = 0.114256844097;
    tmp_msg_0.bias_r = 0.908287545689;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SFTENBLRMOBXMZLEIFGZFLYJMNSKBOSAVVREFPNQRTPUFNMJYTKLPNAWLTOSIBHYFJOAWHLANVKBUCICOIDVWUSTPGDFDSJGEFPEGFJAEHJDGVDZCHNZWZALWHHTYSOMAXCVJRLCIXOCQQB");

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
    msg.setTimeStamp(0.773288217987);
    msg.setSource(31704U);
    msg.setSourceEntity(180U);
    msg.setDestination(60825U);
    msg.setDestinationEntity(87U);
    msg.type = 239U;
    msg.op = 102U;
    msg.request_id = 197U;
    msg.plan_id.assign("LSROOURPGBDFSOTSWDMERPUKEVDAUPAJMNZYJNCNDZYNOBIXGMQPSLTOWUUGYQUMVDTHJSIPLOEHPEPBPYZBQSXKVWFGDKDRQOAXZSIHLOWXZCCSZRJJQAVTHJVCESICVFIJYGAQKFRCPVMREOIQYNZBATDFKWJXXDKGYRNMBKUEXKRMZEZRHPLKULFFTQBIHFILNXGZYCNJFNVCINMMTHXTWUKAJBQEAQHGYHCGWEAMXYVWDWLBALGUW");
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.513909560955;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BDBBIVJWSZOVVFJFXTYYQFWAYTJHXLQMWREFYHDZIPOADOKPRORFWHKBCBMVKCEAFSVPEVFHRKLSAAKASCXDNNELQNTTBYQZTXPXRCSCURRMMYKVAGEDNSJUNSQOIZHOIXNJGZHMUQHELLTZWEQORDYUNVKWHCWDSMPIZBAYIZCDUGQDRETGLJOWMGVXMJZSNLNHKBXIYMQCCWPTGK");

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
    msg.setTimeStamp(0.14256338391);
    msg.setSource(51441U);
    msg.setSourceEntity(158U);
    msg.setDestination(36993U);
    msg.setDestinationEntity(244U);
    msg.plan_count = 17934U;
    msg.plan_size = 4235205687U;
    msg.change_time = 0.796595889049;
    msg.change_sid = 49226U;
    msg.change_sname.assign("XHBEONIDSRLCNYSVAQYDMUR");
    const char tmp_msg_0[] = {7, 29, -68, -43, 14, -93, 54, -81, 11, 77, -86, 50, -89, -55, 121, -39, 0, -82, 126, -29, 26, 57, -47, -27, 101, -8, 121, -30, -89, -59, 117, 103, 60, -59, -96, 37, 31, 117, 85, -25, 104, -1, 37, 75, -111, 38, -13, 118, 36, 54, 101, 13, 69, -107, 108, 58, 120, 97, 27, 51, 118, 102, 76, 80, -35, 117, 84, 6, 38, -25, -26, 118, 25, -56, -33, 69, -2, 73, 43, 77, 26, 29, 64, 61, 58, -82, -102, -86, -34, -64, -128, 14, -128, 47, -94, -123, -1, -61, -82, 90, 90, 122, 43, -19, -89, -31, -108, 82, 110, -105, 28, 36, 31, 120, -81, -103, -20, -19, 89, 2, -115, 29, -102, 51, 97, -6, 52, -94, 55};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KJYBUEANHMDHXDEMDNRUWKEVRXYCTMGZGAUCTPJXAOYSFVIWQHXSFPWDMVNDIGZAZMNJKRPTUFUJEHGKHWPQKGVVXBKFLMXNDPMOWFSKJEQTPASCGQAGTWLKOVBHIKFYIQZGXHDBBZCYSILRFONWRSRTLJBIMEYVOXNJCDZITSLJYNEZRWLXCNZSRUFZCYQAPNUJDYGQEBEHVM");
    tmp_msg_1.plan_size = 65015U;
    tmp_msg_1.change_time = 0.451204123011;
    tmp_msg_1.change_sid = 15199U;
    tmp_msg_1.change_sname.assign("PRIODGWBMZTKBNZTQSWPNXIXIFDGGMVHMVNKSPMXILBZOJARYFWHQOLJHUROTUDZCZJQQVNPRCEHOFOAJKWLBRNSSXLIFAUUINMGMYMEKJQIDVBFTOQBFHKZCGQCRELEUDSFDWPUDGPFXDRXWNDJUYGOEBHZZMIYZRHYOBBCVACAZPISXJXKEGITWNAKWXSLVCJCE");
    const char tmp_tmp_msg_1_0[] = {-113, -107, -61, 53, 93, -20, 47, -126, 6, -39, 55, 30, 66, -19, -51, -96, 67, -87, 16, -76, 72, 108, -90, -38, -45, -84, 7, 31, -91, 83, -101, 29};
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
    msg.setTimeStamp(0.00215019337468);
    msg.setSource(51396U);
    msg.setSourceEntity(38U);
    msg.setDestination(18757U);
    msg.setDestinationEntity(123U);
    msg.plan_count = 13199U;
    msg.plan_size = 312740239U;
    msg.change_time = 0.604991580535;
    msg.change_sid = 3505U;
    msg.change_sname.assign("UZPRSZGGCQQJOPBAHEKWJEDECJFU");
    const char tmp_msg_0[] = {115, 64, 53, 92, -57, 7, 27, 70, -99, 92, -57, 9, 44, 8, 31, 53, -114, 32, 52, 70, 25, 9, -7, -14, -8, -33, -1, 31, 0, 1, 102, -80, 64, -98, -33, -58, -88, -79, 45, -85, -38, -16, 114, -74, 33, -74, -69, 7, 126, 78, -9, -44, -89, -49, 109, -95, 1, -21, -72, -16, -41, 3, 106, 118, -23, -123, -53, -78, 95, -66, 32, -58, 85, 84, 109, 12, -119, -61, -109, 48, -128, -21, -110, -64, 87, -85, -46, 29, 32, -62, -99, -45, -55, -49, 8, -106, 28, -92, 98, -110, -102, 83, -116, -58, -42, -94, 99, 5, -117, 93, -99, -71, -67, 84, 39, -46, 29, -44, 40, -85, -81, -2, 118, 54, -105, 4, -8, 18, -74, -127, 78, 6, 34, -125, -108, 76, 0, 4, -72, 89, -76, 63, -19, -122, 64, 121, -43, 75, 37, -60, 103, -18, -99, 110, -106, -87, -61, -119, 45, 75, -46, -114, -4, 18, 88, -63, -3, 100, 122, -94, 26, 93, 66, -13, -56, -76, 82, -82, 41, 120, 105, 54, -46, -114, -71, -117, -56, -72, 30, 91, -127, -71, 23, 58, 44, 65, -61, -105, 111, 118, 79, -90, -113, -51, -55, 5, 86, -126, -10, 49, -92, 41, -14, 125, 86, -74, -88, 1, 89, -89, -82, 48, -122, 67, 76, -18, -42, 57, -87, 7, 85, 2, 5, 101, -88, 106, 120};
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
    msg.setTimeStamp(0.898049463745);
    msg.setSource(21133U);
    msg.setSourceEntity(44U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(26U);
    msg.plan_count = 34340U;
    msg.plan_size = 209485513U;
    msg.change_time = 0.205968377659;
    msg.change_sid = 45065U;
    msg.change_sname.assign("KVOUWPJDHROPZQFYBNPYZWBTENTXLLXXXAFOAKWSUHETBTWZIFWKGQXSIERCRKHYANBTOVVTQNCKHLC");
    const char tmp_msg_0[] = {-17, -82, 84, 99, -114, -94, 43, 119, -16, 23, -64, 40, 30, 51, 48, 10, -69, 5, 76, 112, 61, 0, 73, -5, -81, 18, 20, -103, 45, 123, -120, -9, -59, -86, 26, -26, -11, 56, -125, -13, 106, 11, 115, -14, 46, -54, 65, -103, 120, -123, 118, -48, 126, 100, -117, -20, 66, 38, -87, -79, 61, 21, -42, 102, -72, 67, 89, 44, -18, 57, 69, 119, -46, -62, -30, 74, 13, 93, -112, -10, -13, -17, -117, 35, 69, -34, 53, 12, -2, 25, -127, 51, 58, 36, -104, -57};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MHBDNEUDPMXQXHIDVGSWCUZMCAVIACQBTNZZIPYRJNAFXRICAJKLSSNPDCRERLGOUIPFMLGZBCOFGAUWQMYYBCVDZOZNTNFHCNPOHXGWPFYHKBYRSKKAFUMGB");
    tmp_msg_1.plan_size = 29592U;
    tmp_msg_1.change_time = 0.115066812717;
    tmp_msg_1.change_sid = 9415U;
    tmp_msg_1.change_sname.assign("ZLQQHNWJLDSGCOXECIQURVNYVMBERYJZYALHGQVXQDANFUWOHGTNZXIGOFSIHIEQTIUPLUMAPUEPOFTGYBHVOVITHDWONOWPWWCYQLMUBPCZVSADCKELAAEBXKKWXHEDAIAFPJNPKNRFXXFBDUFSGGEKRFPCIRPLNSJYONOTBDMMLDFCSCRETBLWMZZDUQGUZWKBZBTXXIKYSMQSCEHTJQVUKYTZAMRLPGOJSKRXJYRHRVKMBTV");
    const char tmp_tmp_msg_1_0[] = {107, 5, -61, 46, 73, -107, 82, 96, -10, -15, -40, 118, -30, -10, -63, 5, 109, 44, -79, -123, -39, 68, -90, 73, 0, -63, -118, 22, -79, -43, 109, -20, 100, 56, -1, -115, 75, 113, -124, -91, 76, 62, -68, -65, -21, -53, -83, -117, -74, 92, -65, -104, 119, -80, 73, 92, 118, 67, -38, 22, 41, -72, 46, -40, -89, 38, 113, -60, -13, -52, -9, 110, 28, -40, -14, 100, 46, 49, 26, 17, -84, -23, -113, -59, -80, 54, 84, 98, 114, -80, -43, 6, -63, -4, 100, 49, -105, -51, 112, -4, 81, -122, 34, -125, -22, -31, -112, 104, 66};
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
    msg.setTimeStamp(0.584602513082);
    msg.setSource(7389U);
    msg.setSourceEntity(149U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("JHMHEJDNFAZAUWHXJSVBJVGTPYBLLUDSVEWRKNGYNPANOVFFCCOLBOGQMCQAMONUZZTTMPASEIFKLKWKUHNOUZEPPIZKLQ");
    msg.plan_size = 30157U;
    msg.change_time = 0.170708688224;
    msg.change_sid = 54840U;
    msg.change_sname.assign("GFGOXQHOCFXTTDAMGHKMHKMTBIEJVVJLW");
    const char tmp_msg_0[] = {-44, -36, -17, 121, 84, 93, -42, -67, 65, 9, 59, -101, -25, 23, -113, -47, -20, -44, -22, -9, 95, 114, 100, 101, -63, -120, 112, -48, 125, -79, 18, 105, 84, 120, 90, 117, 31, 6, -72, -58, -40, -114, -60, -39, 71, -2, 66, 1, -35, -33, 23, -20, 68, 11, 72, 12, 55, 87, 48, 123, -81, 29, 71, -110, -49, 118, 61, -96, 70, -89, 49, -80, 96, -78, -102, 114, 107, 57, 97, 32, 64, -90, 117, 39, 83, 75, -97, 56, 71};
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
    msg.setTimeStamp(0.818528641477);
    msg.setSource(33032U);
    msg.setSourceEntity(233U);
    msg.setDestination(20626U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("ZQYNIXIGNHMYGJRQLIEQSMTICWABVYWJJYXQNSSLKNFBEDPHJWKAEPGMHCPDTXBNTYKBULDVVKWAXKBUEPCWESZVVFZLHEQFONOVZJULFMIUQCCALGLKOTFTWJPWEULMHFFMMKBIHFGROXCSYBVUEJFHMZRBAXIDTZPDOVIUCKYAAGNWDTOGVFQQBRGWRHXQPTQP");
    msg.plan_size = 58790U;
    msg.change_time = 0.965790960647;
    msg.change_sid = 4877U;
    msg.change_sname.assign("JPPKSQNXDWCBUNUAYBBIHCDFCMSPSEVJVPTVFQNUEDOEVOEBRTXJMIKMEDIKXJIWTYWRFQLLZESAHYBLIQN");
    const char tmp_msg_0[] = {22, 101, 40, -99, -111, -8, -37, -39, 49, -49, -57, 103, 16, 105, 72, 79, 58, -33, 101, -80, 99, -81, -21, 107, 64, -12, -107, -104, 120, -86, -3, -12, 60, -122, -90, 121, 65, 40, -105, -21, 16, -125, -38, 6, 54, 64, -27, 117, 46, -95, -74, -101, 23, -59, -112, 98, 122, -33, 12, -114, 65, -75, 112, -3, -20, 12, 78, 104, -82, 53, -76, -60, 126, 26, 112, 22, -80, -29, -51, -14, -126, -71, -91, -92, -29, -33, 56, 34, -126, 98, -120, 20, -27, 33, 15, -125, -29, -57, 7, -86, 74, 23, 43, 124, 33, 29, 12, -3, -6, 48, 54, -73, -127, -43, -1, -124, 72, 41, -75, 102, 115, 111, -101, 105, 44, 115, -94, 36, 64, -115, -7, 90, -8, 30, 95, -32, -2, 46, -7, -5, -69, -70, -62, -126, -99, -52, 102, 94, 126, -85, -40, 87, -38, -125, -118, -122, 38, 39, -115, 22, 105, 100, -15, 15, 6, 124, -6, 72, -98, -115, -64, -93, -66, 87, 52, 117, 11, -14, -87, 110, 19};
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
    msg.setTimeStamp(0.177590716379);
    msg.setSource(59062U);
    msg.setSourceEntity(30U);
    msg.setDestination(32505U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("NJKHBVTIEPVQEGSGXCPKRBYGLRDKORPIAJWUCCBNLIPMDAUYOULBYHZTWKNGAMTFKSTOSSNFJMGELEKIROMSUBPTYDPECWAE");
    msg.plan_size = 22404U;
    msg.change_time = 0.828573092269;
    msg.change_sid = 59861U;
    msg.change_sname.assign("OENHFLKQDHKXTREEFOKQVLOLQNMAWHJQPOBFUMSESMWZPMLHEYCTRPNRNYFGNDBS");
    const char tmp_msg_0[] = {-43, -11, -50, -126, -126, -86, 82, 66, 126, 72, -54, -117, -69, 107, 98, 20, -2, -19, 116, -94, 45, 36, -122, -94, 126, 43, 76, 32, 35, -15, 35, 99, 98, -14, -74, -90, 109, 48, 48, 80, 98, 63, 34, -102, 49, 61, 43, 91, -40, -114, -59, 116, -9, 122, 102, 102, 45, 48, -35, 84, -40, 84, -62, -127, -32, 119, -82, -71, 50, 65, -25, -121, 34, 83, -82, -108, 59, 46, -122, 92, 35, -53, 16, 57, 66, -71, -39, -3, 76, -35, 124, 30, -50, 123, 119, -30, 111, 60, -103, 50, -32, 17, 17, -98, -126, -100, 104, -114, -98, 113, -1, 25, -24, -50, -63, -128, -73, -74, 59, -97, 96, -72, 27, 13, -100, -3, 97, -4, -48, -9, 4, 7, -47, -36, 22, 29, -63, 99, -57, -12, -87, 84, 76, -111, 95, -101, -52, -94, 26, 92, -103, 112, 54, 65, 93, 13, -58, 43, 80, -35, 85, 71, 125, -113, -9, -62, 1, -79, 107, 0, 78};
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
    msg.setTimeStamp(0.757177297908);
    msg.setSource(60764U);
    msg.setSourceEntity(202U);
    msg.setDestination(13512U);
    msg.setDestinationEntity(43U);
    msg.type = 69U;
    msg.op = 54U;
    msg.request_id = 1939U;
    msg.plan_id.assign("NRSZVVVXJIGDDKRDWMVFYIPSYCUEOLZMFHAQCCBXVTTMZWYEUHCBZDHISAVEIQEZDVNURGYSLUOTGWGROABBNOXPURDKBFLZNGYKRNPCHJUYLKRPIJCKITGKHSFCOPLXIKEWMOYHMAKHLAEFWVLIUSGXZHDYQSSUWTWSXPFYTEJ");
    msg.flags = 11748U;
    IMC::Abort tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PLSUQUGIDKHZWBHMWQLTOZTLUZPVDDOWTAPBIXCEYFODCCYYUXFZWMWBGEVQVGEIVIJJGDVVYLXPTJMGAZEUKSOXXSJOHOCTLJEBUMJNGCBQHUNRCLEXDTOMFEKKTALFGANSQRYNLINKODMIMHSDEU");

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
    msg.setTimeStamp(0.803208689549);
    msg.setSource(58126U);
    msg.setSourceEntity(182U);
    msg.setDestination(50450U);
    msg.setDestinationEntity(212U);
    msg.type = 47U;
    msg.op = 87U;
    msg.request_id = 62910U;
    msg.plan_id.assign("MTIBXLZRLZKGVPDBBG");
    msg.flags = 8949U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.637087214831;
    tmp_msg_0.z_units = 192U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KSZNQZFXFPVAWYDTSYXBKXNNKGJIHMGAKTHJQFGAYORRXWPTZSOINCWQLHFSUJREHHZPCKPZILNEDUCQHSPDOXJFOYCOXAYCGYRWUFHGLFVRTJJKRSKDOERTPCUQICOMWTMVTNHMXSMTWUKWWMJVDECYPDDBYXIGVBPEOJDEABRZBAENBNANQOZBEZVLSCGGEIKYILWMSOIKQXVDHQJGULRMUIMPLJYFDLU");

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
    msg.setTimeStamp(0.626775741572);
    msg.setSource(61363U);
    msg.setSourceEntity(17U);
    msg.setDestination(32319U);
    msg.setDestinationEntity(184U);
    msg.type = 146U;
    msg.op = 10U;
    msg.request_id = 211U;
    msg.plan_id.assign("NAGIIZRYWPZKCVOYQDFWZOVMWOFNCWIYETHXGQYJIXGKUSSHFRYQXPTDNRGQIOOFEVSJJOSDBEKAOYFGHBSLQZAPUSLVDZAJMCCCBARHLFZKRX");
    msg.flags = 5735U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.119469052873;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("INWYSYRLXBUGMLYLIUWGYKRQCLLIUVLPKBAISQHYHNTAWCURJHSIHISEUEKYNPAJOJADEZRQBASJXOOCCWAMBOOTXNIQVMSTJQFTSGZRPISLJRZDQBZDQMKDVZZPHTPFZGHSKVKPEHTZ");

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
    msg.setTimeStamp(0.778517608107);
    msg.setSource(44652U);
    msg.setSourceEntity(120U);
    msg.setDestination(45223U);
    msg.setDestinationEntity(52U);
    msg.state = 246U;
    msg.plan_id.assign("XCYXJQIHPABITKPBIQCZTRYGKUDZOJXZNRQJKGMEADTYJIDZSDFJUTHCRLMSREOUTTSBGAUQCOMVJIKLIKJSGQSEPWJAPCSFYZJNZZATMUUBKIVIGHVOFMHEC");
    msg.plan_eta = -1379156967;
    msg.plan_progress = 0.0689275015794;
    msg.man_id.assign("CIPQKOCSRWGXTPQNJHSIPJKORPQIBJAJXSFTPKVTEIVLUYCUJCLDNADVONCVEZXIPIEHLLGQMCMVTVFTXKLTHHWCHARLGW");
    msg.man_type = 4075U;
    msg.man_eta = 82414856;
    msg.last_outcome = 12U;

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
    msg.setTimeStamp(0.609319864021);
    msg.setSource(19119U);
    msg.setSourceEntity(33U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(51U);
    msg.state = 93U;
    msg.plan_id.assign("DQUWGUZBMNLPMHNQJPGXLLBVFPUKTNPNGQRYZHKJIQJZYTASBGTOKEDYIWJTYFFRFUNCQIRVUMNYQVK");
    msg.plan_eta = 1841939802;
    msg.plan_progress = 0.656679642476;
    msg.man_id.assign("POZHWUYMBBCBHSFIBDXDPSTCEWWLPNBHNJYLFEUKDPPRCVXIMEVLIUAQQKWEQXSTDHSMWTXKMNGRQTRIISLCGHRFBKQYMJWBFMMGZUXFKVRECOCPANVINWECHNLIDJORXYBELMYXTXCJJSOTZROZDVZOTIBJUHAQAQOYULLSUODHORPYNSRJKTUGXMWHFSVZKYWUYTVQJVZAHGKELDDQPAASIGG");
    msg.man_type = 10077U;
    msg.man_eta = -491060426;
    msg.last_outcome = 207U;

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
    msg.setTimeStamp(0.913799811629);
    msg.setSource(31755U);
    msg.setSourceEntity(193U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(129U);
    msg.state = 185U;
    msg.plan_id.assign("QBJMFVHOSORTVL");
    msg.plan_eta = -1433805767;
    msg.plan_progress = 0.249049136512;
    msg.man_id.assign("XFURLWJOTSGMYN");
    msg.man_type = 8323U;
    msg.man_eta = 666820445;
    msg.last_outcome = 192U;

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
    msg.setTimeStamp(0.816958169274);
    msg.setSource(27844U);
    msg.setSourceEntity(218U);
    msg.setDestination(1263U);
    msg.setDestinationEntity(4U);
    msg.name.assign("SCBMLTGQDACREUGJKTGRSNXQZNSTBFIEVJGPIMHKEGRVQVVE");
    msg.value.assign("YCNRMGTNEXCXEUSOQQDPGUFPCWMTLXXPRJLRUXFKIIQBOJZOHKCJIAABFOVGAYHHLVMOERSICZXNYKKZAXVEPCFDOFDTLJKKZGFDYHQHHJKHUJOIWQLRLUMDQYSZJUXCKZOQDBEMPMTZBYSOLGMWCTWMGLXFAIQNRWPWEECBKIRGW");
    msg.type = 47U;
    msg.access = 84U;

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
    msg.setTimeStamp(0.755670454006);
    msg.setSource(2229U);
    msg.setSourceEntity(178U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(26U);
    msg.name.assign("ZNKTRVTZCRNQTTRBVQLFQDFUZCLDVBYYVEKBPIJSSSXWXSGOVRPLKEUAYMBNBHDGOMCPDRQZEUKJCUKLIMKYAERPPEXGHQAXDMFFLOKHANPDIORGLRIHSGBTTGYNTSVMEJYSZBIDFSFWDNOBLHIUICZBJGWETVEQHDRWLWP");
    msg.value.assign("IYZOLSDWIOQODNBCWZIGEUOEGLYIWFHMGWSAUPLZSTEOXNBURBFPZEWXMNWVMSTPCPARPGNRQTNIZCVGVHJFKWQAFDVKSDUXULCQMGINKZCBAYDVQBHVQTLBXJSBYFIYKMTNXSMIARGBIRRCRGSCUMTUJFMLXCOSOGBJKPOVJEVN");
    msg.type = 196U;
    msg.access = 148U;

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
    msg.setTimeStamp(0.971248335341);
    msg.setSource(47289U);
    msg.setSourceEntity(33U);
    msg.setDestination(42142U);
    msg.setDestinationEntity(115U);
    msg.name.assign("QKCUZHVFNHALPDJHXRPEKDYIKTZYSPSEHOYBJYVLFGZCRMVSAUCYPAVSTIGJBARVMLKEAXHMKIDBQAYXXLSZXZFQNZNOUQVLOQMOQWDCKWCWWJMRTBAZEKXSCGYOJPZVDPCXRYTITLOCYHITZHMSXYQUUFSMZEEAHFBFDLGEJSGXBUQRTIJWPIEQQXONFNWDTWOGKBRUNFBPWOFIDFNOJREAWTB");
    msg.value.assign("HXRBKOWUZFOMQAJUHYFAQFBWBIGWRPMJRKBKECWLTSZRNPENLELWOEBSRQFJUMVRKCFLGKUOBGAPAVPZGIOTNIGDDNZGPYVERIHZUWYBOPVATJNUAYCGIEQGJMOQJSYJDVCOYHOZMHINNKJEUAKUPXMXDSTDVPSWFB");
    msg.type = 222U;
    msg.access = 139U;

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
    msg.setTimeStamp(0.250889032824);
    msg.setSource(63658U);
    msg.setSourceEntity(155U);
    msg.setDestination(33049U);
    msg.setDestinationEntity(111U);
    msg.cmd = 92U;
    msg.op = 198U;
    msg.plan_id.assign("CDRGALWGEJIENWAKEDAQFBMLFTOAKJUYWVFNPUECSMPWLORYTBFYFCYRTIPXYPKIE");
    msg.params.assign("YNISUWYZUBFEIVZBGDQFMOZELKBDEZXYHXSEDMWIQZWBQCK");

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
    msg.setTimeStamp(0.401319293091);
    msg.setSource(58136U);
    msg.setSourceEntity(124U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(102U);
    msg.cmd = 246U;
    msg.op = 220U;
    msg.plan_id.assign("GPQAEYMFIJDBOVTITTHMONHGVIRHAIXXM");
    msg.params.assign("ADQWDBWLOKHNUMBKWIPAMDFHGOAHHGQEFUPBBSCUFTENKKEJXHCPQMOASNFXOXTCEXYNYCEGZVLTRBTAFZFBZAWKVRZPQCKRYVZUOJMBGHLMJXIKGJUYNO");

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
    msg.setTimeStamp(0.50864197883);
    msg.setSource(56474U);
    msg.setSourceEntity(94U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(188U);
    msg.cmd = 8U;
    msg.op = 15U;
    msg.plan_id.assign("UEPJQBGDNQICIRTBYKOMIDZRVHFQJDOMGLWGQNWMLAXDKPPFYKCTAIKEEVBARTPRCMCZQZZIOEMGSTJZJBWSZZGIPOVWISPXCFHYPNHHRAKGHRUUUIGDXLKFSWSSTYRJSLUVKZINHXEBXVLJFWLECKRMOXRUZNVDYHGLNEHNNZNXQJCJFWSXCESCHUKEAIFVBDYHAYGLVAQGMFDLETOQUWOQDYJQ");
    msg.params.assign("VCSSKIJXZSGNRQBXNENXHZKINXFAFKQIJSNKHJXETRNBIWMAGBEWWOGBEJJTATUHUUITIEAYFPJECZNECSBMDMAWMYDDQOSUAMZITWNCTGCYPRKLFAGCNO");

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
    msg.setTimeStamp(0.57254814404);
    msg.setSource(24496U);
    msg.setSourceEntity(190U);
    msg.setDestination(14212U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("QMVAGFOEIDXRPDBKFCDPLSITLYVHTBKXGUPDSHCWJMWYFGYMNKPXUZVSEZJBCVZAQMZALTQUJCRYMGRLGXLBSUPDJFDIDZNKCQTYKOFOBOHJWKGZMPBHAAXNLWGDZWRSCYM");
    msg.op = 11U;
    msg.lat = 0.256348749601;
    msg.lon = 0.306889078581;
    msg.height = 0.0854622316404;
    msg.x = 0.0263870947674;
    msg.y = 0.583035765624;
    msg.z = 0.335508294388;
    msg.phi = 0.881235424687;
    msg.theta = 0.217021194013;
    msg.psi = 0.105015801295;
    msg.vx = 0.0339518553884;
    msg.vy = 0.863896383308;
    msg.vz = 0.561429525752;
    msg.p = 0.434696092433;
    msg.q = 0.0973378109493;
    msg.r = 0.658192514869;
    msg.svx = 0.112837693761;
    msg.svy = 0.498258717846;
    msg.svz = 0.631732252319;

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
    msg.setTimeStamp(0.505189782004);
    msg.setSource(5296U);
    msg.setSourceEntity(137U);
    msg.setDestination(61708U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("VQNXOCAMNDNDSGTEOE");
    msg.op = 125U;
    msg.lat = 0.0750086438573;
    msg.lon = 0.329246021714;
    msg.height = 0.111704995168;
    msg.x = 0.944690642774;
    msg.y = 0.323252910582;
    msg.z = 0.519055365661;
    msg.phi = 0.672727357607;
    msg.theta = 0.719965751722;
    msg.psi = 0.622489842926;
    msg.vx = 0.692105793269;
    msg.vy = 0.781893220318;
    msg.vz = 0.457230942519;
    msg.p = 0.611676771035;
    msg.q = 0.853933259136;
    msg.r = 0.922347117478;
    msg.svx = 0.373532899728;
    msg.svy = 0.643710557484;
    msg.svz = 0.35416155676;

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
    msg.setTimeStamp(0.748798763092);
    msg.setSource(22695U);
    msg.setSourceEntity(39U);
    msg.setDestination(17878U);
    msg.setDestinationEntity(81U);
    msg.group_name.assign("YGTEIPGNDMWNKNHHZDOMCVEIYJTIEMTZTVKUMGRFBIQGBHUSKYUGOBXBAVOWDDZ");
    msg.op = 162U;
    msg.lat = 0.793977608749;
    msg.lon = 0.220024542913;
    msg.height = 0.687090581516;
    msg.x = 0.674135375338;
    msg.y = 0.71876195236;
    msg.z = 0.718326750805;
    msg.phi = 0.203077291566;
    msg.theta = 0.122225637145;
    msg.psi = 0.478787249788;
    msg.vx = 0.451475070931;
    msg.vy = 0.176198529493;
    msg.vz = 0.933873547427;
    msg.p = 0.721379269057;
    msg.q = 0.760926984062;
    msg.r = 0.743025132041;
    msg.svx = 0.659666278728;
    msg.svy = 0.533846997037;
    msg.svz = 0.716110959178;

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
    msg.setTimeStamp(0.0577923376131);
    msg.setSource(35455U);
    msg.setSourceEntity(20U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("MDKDHEFZSLKZDKBIMRGQOCVPMOYSHSM");
    msg.type = 201U;
    msg.properties = 134U;
    msg.durations.assign("CLNTOKYWFPHVXTEVXPLWXMPFTJOAUSRGX");
    msg.distances.assign("TVSIBHWMPAIDQEZRWDXGZXGMQIQSUKZUNMWAUAEJ");
    msg.actions.assign("GLZNOJKXMTAAZMHBHRLEQHABCQNMTUQZXSCPKKDBDMGEDKCRXDNKCDVBQVUESXSJSATHZYPJVNYRIEBZQHIWRIGPUCTDXVAFGHRLUEDQAFFBJCMKTWJLAFOXYPJVJIKNEEOUKURUGPRCNWFCDKIFESOTQUVZWOGNWKYYGAMAFFPOHBXSWZSHOXJMBQTVUZTJOXYNRNTSRMLGGJZ");
    msg.fuel.assign("SYUYVSVNQURGPYBSQWIADIUJPESLOBRZBBGQBHMKNPQUAVGQCFUUJOYDWHGMUTLCJRWXLIPSQBDHWOXVXWYOVZCNYRKYUFUBWRAFFTCGQVHSJIHOXL");

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
    msg.setTimeStamp(0.181198976005);
    msg.setSource(23911U);
    msg.setSourceEntity(42U);
    msg.setDestination(57344U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("NVSGFTXHLXCQCZPYHLCAS");
    msg.type = 10U;
    msg.properties = 111U;
    msg.durations.assign("YBQJAFNDMLZNAJPLQVHAUHYACXSBODEKBNGEDDAWTYCEOJUUTGLUJXWZILNPOTJSERKPMXZQTVRGVWDVMVKIDZDWJNQMOLOIWPSQTLRVHYXGRPSQYGDIICFOIBMDLPCMUZKZOGK");
    msg.distances.assign("DLPAXTRMEAMOUODJQVIXQVZFNTUDXSUBEWAE");
    msg.actions.assign("DFWTCOGOJEZPVPJZGKZGHSTCCYQXBAAYBSZNOIHQDOHXTCFSHXXPTOAJOHFKXNUTWSYJPRHBQLVTXKNKBTADCIPIVW");
    msg.fuel.assign("DDZVQVBHMLGFPKHOGSESJSXSYIHIODNZOVHDEZQGMUTWUDELRIPWAAKEXSZXYMAFJCGKLDLFNUBTINCGXJOEWQRFBVVMBLGCUFCUTXASGYNRCWXKPBBNJQGHCEQWRVEQQVBNKYFZYFZUAPZSDWOIXJGWK");

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
    msg.setTimeStamp(0.389263314369);
    msg.setSource(56017U);
    msg.setSourceEntity(91U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("FVPLMYYAWHYJMKTNEWLMZDQPBSMTAHYZGPBHKVXNTBWFQAACTVZCZJRWYLEOMVCPIQECNGGXFWGGXEKLACOMHZRJFFGOCDURF");
    msg.type = 184U;
    msg.properties = 248U;
    msg.durations.assign("GWYNGBOLUYMTXHIOZPZMFGHNSQWCOOWBVNAXDBLEIRQIFLPRERRGJNFBVPZPYGOLVUYDPTMCZJVUXUCOMKNOCLWCSHHKAWFURMYGFYMRERZRPHMYKUTSKISTZXPNCBTZEIDAKIHAWWKBTTAILVKCQJMFDVGTLGNZN");
    msg.distances.assign("JEJRCEZBSCKLWOFOQSCISYIOFYMNXPMERHRGQ");
    msg.actions.assign("EBKOQNTCOJXFGDVHJOBTXEIITGMYGBVWMIBMZSCDJAUYLMCKFBOLUKASPIGVT");
    msg.fuel.assign("VLNWIWKZENMIFTCVLQXDFGSWHRWYFDZWXVHVUOXGAKBHNDWPACJBDXSOASH");

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
    msg.setTimeStamp(0.56877797709);
    msg.setSource(24872U);
    msg.setSourceEntity(195U);
    msg.setDestination(25518U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.129061100946;
    msg.lon = 0.120695729482;
    msg.depth = 0.0474744456693;
    msg.roll = 0.780595514627;
    msg.pitch = 0.913517691077;
    msg.yaw = 0.184039771189;
    msg.rcp_time = 0.458561591066;
    msg.sid.assign("ZPOASASCNQACEYVGUOIRRFVOMHFNZCMDQZPOBJXCOACKNHGSLRMPKMQALPRLDNOVQRMBJTRJRQYXTBGBIUCDRZUNDXEWWBVIWQVHRIXZAELYRDDHXVIMZBSSWXIDKNPNJEEYZVKNQDPGLOKPKXNHJFEPTXGGLLSCUJQOTDUWGJZYWUGNEIHKQOEYSMSKITYFSVCFFDIMWUTMTEELAJLMAFBFPHUUYYXTBQXPOJZHTGUAKWW");
    msg.s_type = 213U;

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
    msg.setTimeStamp(0.848517458332);
    msg.setSource(21844U);
    msg.setSourceEntity(146U);
    msg.setDestination(53131U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.563456415898;
    msg.lon = 0.136547754746;
    msg.depth = 0.112306187728;
    msg.roll = 0.340616938485;
    msg.pitch = 0.181825756383;
    msg.yaw = 0.59391253323;
    msg.rcp_time = 0.232868041706;
    msg.sid.assign("XVWWXNOZKQKHJCHVZGNHTOYRPQKGDAAZLLZCPJZIEEANIIWTDNGXVIQRJAWGCCDTQPFOMHRXWOOVLWDXQIUBDEPLL");
    msg.s_type = 65U;

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
    msg.setTimeStamp(0.375093620859);
    msg.setSource(48361U);
    msg.setSourceEntity(193U);
    msg.setDestination(34261U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.734643655527;
    msg.lon = 0.680237886103;
    msg.depth = 0.164523172881;
    msg.roll = 0.337287473825;
    msg.pitch = 0.200629352255;
    msg.yaw = 0.535000388281;
    msg.rcp_time = 0.75540166693;
    msg.sid.assign("NFJMFIJLDRSHAXALSXQGCDLLKDZMAUVVPNOYETOBKQIJRCATSZKHNDHFTSJZVCQMHWMNBQEYOSUFJWPZZLPVSWRDCXOYVRKIYMTLUJAIFVNKPQEIRVBSEOCDZSEBBWHVONBJZTYJDQGXAEDOUGYBJHRZHLPCQQKATLFMUGBACEKOVZUBYPPTXM");
    msg.s_type = 137U;

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
    msg.setTimeStamp(0.674908680741);
    msg.setSource(32361U);
    msg.setSourceEntity(45U);
    msg.setDestination(48205U);
    msg.setDestinationEntity(41U);
    msg.id.assign("POYDQJWXSTEXYAUFYMYODVDACZZPLAFZOMVFIZJJHDCRHQUCILWUJNYQSHOLWGMUTIWPHIIQPOWXSGHTANLQHPAJPTKIDWXGVGKEFFXCJPVRLHYEGKCEVOEFCCVISXKMLKVQKAZNUZEPFNLSNYOZMZFVHNSWMDDQCSLECBEBCIXESK");
    msg.sensor_class.assign("TWVHZDMDBTOZMYXPFSIWTYLYGAVATQJMLBHPGFGAHDJQWCPNVLAPUWYGXUIBKYTFISTLIPWULZSEVIZCBCCVCRGQSUBRSCUOIQTKHDGEVNXUNASNZBCGJFWYIQQOGAQDIZFEEHIEURQDXLZZKAYVAOURWFMRKMMTPJCKZKBOJKBRSBOPROOQRKNPEFLHTNFCDNRJXDISGWXDVKPSZGNHLEOKOHTNUMHXWAMQDNFMYXXJJVHEXVPAYUSRYWEC");
    msg.lat = 0.25043035764;
    msg.lon = 0.620795907213;
    msg.alt = 0.744554422945;
    msg.heading = 0.33239469221;
    msg.data.assign("PLQMYZZTFLNXQUPOBBDERLBVKDWSSAZZHSYFAGVGQ");

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
    msg.setTimeStamp(0.843353529574);
    msg.setSource(57087U);
    msg.setSourceEntity(20U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(67U);
    msg.id.assign("PENWKXAAWQLYZGVIGBHCGRVPLAVCCMKNBSBTHESCIJXJMUVQDQITTBYWOIUTCNRKFIPAAOEHDILFADTZZPHJIKZZNZICTZFWPYBRDDFMTDQV");
    msg.sensor_class.assign("UXTYULVFHAJZAAPRQGXDELNEUDAYTRBXEVDITIIFEKLBZHBBPMOLDQEFZSWSWLUEUDOWXKNQCTPJGZYMCYHZIBYVKBNVGRTPTUOUJUOPVKIZKASOINFPCTMUGOICSQRBWTECTBQQMKQXVXWJHWJVXAPWAZLSKXHFIWGZXUEQNVYGBSRYCMPJFDMFDSLCVTACHLDIHSNJNSFNRMYFWZ");
    msg.lat = 0.126459404006;
    msg.lon = 0.405068769592;
    msg.alt = 0.53517324975;
    msg.heading = 0.481058589771;
    msg.data.assign("KEWDJFSTTKYMDCLDOTVNBAKZPZRRQEEQGJMCAHLTIUGBJNXFYEXRWNJYSQFPOGOLZPKPAMQWFVTCAEQWMWQQWWHDSFRZFGXLIIKVPVLGLRFTMTAYGJILHSODYSLWHRNQLVSRRUDJSIOVBYTBXKZHYFAORIXUVMOPNHRPNUHCLPVDCEPJNUGAYNDAZBUFWYMXOEBUKBZAHKBMIHOCZDESIAEIGCGPQMUXSNUCJEZGNQJIVZSBKX");

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
    msg.setTimeStamp(0.609040358715);
    msg.setSource(6317U);
    msg.setSourceEntity(113U);
    msg.setDestination(43184U);
    msg.setDestinationEntity(17U);
    msg.id.assign("CWHIWNARKUNQKGVUWWWMVPDERAKXSGFDKVXTNEDWECEDUGQFMZTZBYSMTXGWIQSEHIQVSAHAIMBHTTHRBYJNSYOINFEPPBCUVOOLVLPSOUVQNNDIVIRJCHQLIARRPMZDHZFCGLTKXWYJROFDZMJAYMYMLTUQGJPSAFBKEWIOUBXGW");
    msg.sensor_class.assign("CGGHWTNAHWYFTLJKMXCKDUDRKIAXLLQQSUNBJWNNJRAEEFEBHXIECPYVVJDIGADVPLOYIUPNZELZAYKARDYBQZVSLUJBQHNCBNMZOGPIBZTTIYRVYTZCQTVKXLIGMJZQMUUTGSZPPTHXPREKQWPLLNBLXWRHWIYBYWHTFBOUEHXFAMPEUSFOGHHVWUFF");
    msg.lat = 0.463339018831;
    msg.lon = 0.0353793842047;
    msg.alt = 0.497245375929;
    msg.heading = 0.00278101324875;
    msg.data.assign("KUGOYMOKFZFWYQZAWCCRFIJIAEETPXOEYMRFIVXFEHNWPAIHCYMFAFDLYNZZPONZPGCVUMEMXWLILBLSMHLJFQKNSQNZIBJHLAREDOZHCZTYPDLURBKMPAYJRHESKXF");

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
    msg.setTimeStamp(0.896738402875);
    msg.setSource(14826U);
    msg.setSourceEntity(80U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(246U);
    msg.id.assign("KIKHKHFDSBDHSJSEZWNOAAWPVUOEAOQMEPLQOOIRPCLYJBVXANRWRBGUEFXRQMEAHJLDTDZHGFOVRSKPOZDQMZVPUMWIOLTJNZMLXLWCMQZELSCKECATDTVDGKSZITDCHUAPTLNFYGBFURNYGZUAPDJCTQHXFTWCSTZOQLTFVGGJXKEYWCWYRAJHJNEAXGDLXBFINQRYYVIBXUQJMIGNVSOCKPHFUZRQMJNIBPBXYVMF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XYRIYBMXYRPOVKJDXPBKYBCKZVITSKLDRYXHAWZLVKAFNMPEXLNHGQIRELQWIGAQSLJQPAJGEVCORBVNGPHUORSCFTIOBWGCCHTOTPZUCMRJAYFIKSGZLPNFXUZJLNQWASAPKKDKVWHZOBHVTJLXZTBUWEJDIEJV");
    tmp_msg_0.feature_type = 115U;
    tmp_msg_0.rgb_red = 231U;
    tmp_msg_0.rgb_green = 143U;
    tmp_msg_0.rgb_blue = 220U;
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
    msg.setTimeStamp(0.736993568212);
    msg.setSource(55686U);
    msg.setSourceEntity(208U);
    msg.setDestination(59962U);
    msg.setDestinationEntity(133U);
    msg.id.assign("UEIGWGTUWPAVFWUDVRZMBXTCNDUBVSJIOOFSLWDSOHICBKCDRTEIDIILAU");

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
    msg.setTimeStamp(0.990657090533);
    msg.setSource(49200U);
    msg.setSourceEntity(232U);
    msg.setDestination(51965U);
    msg.setDestinationEntity(248U);
    msg.id.assign("WZZNDBASHAUQMULTMRBYVVSXKTPKRRIZBPEDQCUKZCSVUUYJXVMGIHNDNXFJLTIDGRUCMZTOLBAUGHPHHCXGJKOLBSIXIZGYMNLYNTYPWPWWPOIFFWKQQVQRMAIKMSWWQVCTFJFHMZBPLOLZLGESNMFNIGTAAMQGDEJYKXIYKERECDAFFBLAQXHSJKUCVJVLRJWXTRGUXPKCIYZOTEQOAPUEPAZNXHENOHYWVORERC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CBUNIBCYKPCAHYSDLFUGRQIKIYZUELFGDZXLYKXSYVNGFWAGLMWDBMRTWKGMHZNNAMKRUIXRJBJLBYBJUKHXSSTTEXZQDICWIZWPVTTDHLAJWNTDMDTVTXXEC");
    tmp_msg_0.feature_type = 163U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 59U;
    tmp_msg_0.rgb_blue = 187U;
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
    msg.setTimeStamp(0.947301945351);
    msg.setSource(35527U);
    msg.setSourceEntity(225U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(219U);
    msg.id.assign("XFQATORUCXENJVPUALGGDBMBPLHISFFISKAQEZDXYBCXTJHSMKRQORFMYHYLWZZGGJXAUYQKFROERVIWUUXCIR");
    msg.feature_type = 204U;
    msg.rgb_red = 67U;
    msg.rgb_green = 65U;
    msg.rgb_blue = 156U;

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
    msg.setTimeStamp(0.118923122325);
    msg.setSource(22630U);
    msg.setSourceEntity(125U);
    msg.setDestination(40325U);
    msg.setDestinationEntity(194U);
    msg.id.assign("IOBFONGADWYPPLNTBGCSCFODVHCGCVGRVINJENPVIHUJPRLHQYXFBFHSGKPOYVIZEBEAXBKADXIVZKZZJQJJUZQMOPXXOWQXDUDPTBTYOWMWSYRFQQRJBENPPNTVRNHAKSUVFCLLVOWCAKMWNDZBHSSEOKDUHWIMGRISFYUTIG");
    msg.feature_type = 165U;
    msg.rgb_red = 66U;
    msg.rgb_green = 36U;
    msg.rgb_blue = 68U;

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
    msg.setTimeStamp(0.0739168206343);
    msg.setSource(39470U);
    msg.setSourceEntity(248U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(116U);
    msg.id.assign("AVFIIDEKWJFLIELLLHSWCVECFOMWKOJHSTDQMGZPWKRNNAHKIJJQGGMEFPHYIFJDZMJQOXQKBUUYSCDMEONREZDVOBXS");
    msg.feature_type = 112U;
    msg.rgb_red = 185U;
    msg.rgb_green = 98U;
    msg.rgb_blue = 100U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.503071949635;
    tmp_msg_0.lon = 0.294943839872;
    tmp_msg_0.alt = 0.237514070829;
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
    msg.setTimeStamp(0.769545703181);
    msg.setSource(28970U);
    msg.setSourceEntity(201U);
    msg.setDestination(43077U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.456162804996;
    msg.lon = 0.394432278698;
    msg.alt = 0.310202862573;

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
    msg.setTimeStamp(0.332662341725);
    msg.setSource(62230U);
    msg.setSourceEntity(87U);
    msg.setDestination(22563U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.405135993302;
    msg.lon = 0.942304854839;
    msg.alt = 0.526879569414;

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
    msg.setTimeStamp(0.748289802374);
    msg.setSource(15006U);
    msg.setSourceEntity(187U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.263281776322;
    msg.lon = 0.767555476462;
    msg.alt = 0.66205577146;

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
    msg.setTimeStamp(0.999126165354);
    msg.setSource(1891U);
    msg.setSourceEntity(81U);
    msg.setDestination(53462U);
    msg.setDestinationEntity(29U);
    msg.type = 131U;
    msg.id.assign("DDFCGMSGRJRMVKWHDTGBXZIQBLQIBBSTCNSCYPCPGUJRKIVKBYBEQJFYGRPWAOOLEVLFHUEKXIJDUGQZXIPFHKNMRADDKLMUROAOZAVBHUAVSPAYVFHLJUTMDVPDYPFYQNKZBTSLXIQOXGRGXPOYFXZCWXGTFDUNHGZYXICVS");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2332127734U;
    tmp_msg_0.start_lat = 0.275504402426;
    tmp_msg_0.start_lon = 0.0782778697694;
    tmp_msg_0.start_z = 0.799187776262;
    tmp_msg_0.start_z_units = 165U;
    tmp_msg_0.end_lat = 0.953068213527;
    tmp_msg_0.end_lon = 0.32297360563;
    tmp_msg_0.end_z = 0.770964297309;
    tmp_msg_0.end_z_units = 129U;
    tmp_msg_0.lradius = 0.60354706021;
    tmp_msg_0.flags = 232U;
    tmp_msg_0.x = 0.301497934274;
    tmp_msg_0.y = 0.454128962809;
    tmp_msg_0.z = 0.714689202844;
    tmp_msg_0.vx = 0.877818276357;
    tmp_msg_0.vy = 0.149442897201;
    tmp_msg_0.vz = 0.212848820998;
    tmp_msg_0.course_error = 0.218600215595;
    tmp_msg_0.eta = 47889U;
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
    msg.setTimeStamp(0.296784155753);
    msg.setSource(6992U);
    msg.setSourceEntity(88U);
    msg.setDestination(24288U);
    msg.setDestinationEntity(54U);
    msg.type = 42U;
    msg.id.assign("MQFBMUKHWXVJTPRPHKZGDBEZENRTLRMCHTITVRSLXAPHKREMLLDDAQULK");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.147090282292;
    tmp_msg_0.y = 0.580543524802;
    tmp_msg_0.z = 0.556566983256;
    tmp_msg_0.vx = 0.69086980265;
    tmp_msg_0.vy = 0.526411941209;
    tmp_msg_0.vz = 0.105619947707;
    tmp_msg_0.ax = 0.44087156282;
    tmp_msg_0.ay = 0.383710302297;
    tmp_msg_0.az = 0.596407036617;
    tmp_msg_0.flags = 46041U;
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
    msg.setTimeStamp(0.744903625529);
    msg.setSource(60244U);
    msg.setSourceEntity(50U);
    msg.setDestination(49934U);
    msg.setDestinationEntity(218U);
    msg.type = 223U;
    msg.id.assign("YARUYSDSAILFMSMPFEG");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 141U;
    tmp_msg_0.period = 1851811720U;
    tmp_msg_0.duty_cycle = 1930613506U;
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
    msg.setTimeStamp(0.455845202068);
    msg.setSource(51332U);
    msg.setSourceEntity(6U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(161U);
    msg.localname.assign("ZOCZPHYTFSOKSMJXEGNKEXKUNTQJKZDUSENDLIFQNTPIMORMKIFQLIXDRVQGFKDUEHWFIWCWCDRVCPOLSGJTPM");

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
    msg.setTimeStamp(0.44019448547);
    msg.setSource(64414U);
    msg.setSourceEntity(181U);
    msg.setDestination(16278U);
    msg.setDestinationEntity(85U);
    msg.localname.assign("DNYVPSLSWHDESDAMHVVPKEZYVQPEIDRFFVKZGPRRIYMHEWAFGPKWNYOADVDWIMIJCQSBAPSGJMYTZXEWJCROBMUNBEGAYXZUJIXQETOQFXZPGRPBSEAUQSWBVBKATNWMFSBNRHTTLFQDYHRYZGYBWBQTXOMSIMPDAOOXLCNZCQTLHOLUGNJWKEILZFXCSHR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MAPYITLTDSERUFYWKNZKODHCRLCGNNHWLW");
    tmp_msg_0.sys_type = 136U;
    tmp_msg_0.owner = 18849U;
    tmp_msg_0.lat = 0.957892722204;
    tmp_msg_0.lon = 0.588604487913;
    tmp_msg_0.height = 0.902246989015;
    tmp_msg_0.services.assign("XEKSUWJZVLBWHSW");
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
    msg.setTimeStamp(0.595270482101);
    msg.setSource(48715U);
    msg.setSourceEntity(40U);
    msg.setDestination(28912U);
    msg.setDestinationEntity(15U);
    msg.localname.assign("IEIGAUSBVIXJDZTGIAUQLDPBZXFLPKUWWQXWFJPGQIJFSIMANHXOREVOVTLOTAFTFRYLACKPUIEKJZ");

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
    msg.setTimeStamp(0.331734574974);
    msg.setSource(61289U);
    msg.setSourceEntity(189U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("SSOHNHQOMYEQHNIZOYTCZLDNLDGMGT");
    msg.predicate.assign("SWRDEPUCLHUOFSTIJMKCUOSZZNANOKRSZZMDBFILVEMAYVO");
    msg.attributes.assign("IZTUSKXYOJLANBBHXFPZMDXT");

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
    msg.setTimeStamp(0.464353951034);
    msg.setSource(10326U);
    msg.setSourceEntity(26U);
    msg.setDestination(10233U);
    msg.setDestinationEntity(15U);
    msg.timeline.assign("NPESAJGFXUUYKHVWIAXJLJOFZMRXGKUHPQOENGJKLSCMXNEFHRXOTXZATCICAJZQDPBENZIWKLDUYPCFUYOVQYSGIHTFJXWWNTAMWSVCATJXQJYKIHMEUOJALBRUHQLDDDIOIFWWFCKFSCRLHEKWUQYVEHYPCPTBDRBKUCQWOETINVPNRESNVAPHDGGOHZDNUGFZWGVQRIFBQBMTRZ");
    msg.predicate.assign("IEMTQRGJAEEVVMBQZMHKBPPLPMODFHYCUBJVAYTQUXWCUTZQJBEBPFWBKCRLPSRMHRJRLKTOQNCKLHIOYXNVGLGXFPRGFSXJWWTZDAZUMHCBNYOTRFUUGFCMNHFWXGWNAPLUDLAEHSOGSJKXIMINNASHEZIYGQYUPPGCTVOJNFCFTVYHEKEWZLDSZICMNLVFGXXMODQJDZKAETAZUQOKADORXIHVBSNKRJIYBSLTRWYIBDZO");
    msg.attributes.assign("AOYQZJQBKSSQZDCYVYMIDJHVDFPFAOUJOIHAJNTQXIPXWIZNLZHKDMDXAWQQVGRXEPBMIGTBWHGKSAFWFVHHUJGNURCDZQQJOWVTUOKECLXSCUPLZSTUZWBXRHBAJTPBTVXI");

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
    msg.setTimeStamp(0.128746899025);
    msg.setSource(51424U);
    msg.setSourceEntity(2U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("GCHEIPBMWBNZHGLMHSKFXMVOMVNUGOPFIYEDLNWJCRPAVDXWNYVTSRJGOQVB");
    msg.predicate.assign("EUGCJCNWBYZJLSHHWHQIUMFPDOBDDHPYDRBEFVZTHDAPNCEHWEVZAUPYTZIZKONLJQIOGYFQMKTNOSCHKVIWOYAVYXJXYACXZBRUFVBEVFVJUXDEQJRPPFGBKLTCBJSQTUWEWSWCRLSLDOPGIBENXAVGHQZUMOHXHYCAQXCSWQAKFZJLIMDJPFQTVRFITMNSGYOXYSTBGKNGNIFMXM");
    msg.attributes.assign("OJUUKEEYSEOFAZHFFQAWLTQZUIKREYNBSRHVULOKDWGKFXHEFTALYTRGDEPQPMNLGVZPJRHGEVPTDBCWVXJCNFOCQMRWEQXTCEQMJTTBCQZPQNBSUXVXIBKOIVLISSRUFYIXUWSWJMTKMUZKLXYFRCORHZKNYHCANMVKPZLFRMOOUDZAVOBXBDBJDI");

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
    msg.setTimeStamp(0.236404087831);
    msg.setSource(36944U);
    msg.setSourceEntity(159U);
    msg.setDestination(56070U);
    msg.setDestinationEntity(233U);
    msg.command = 123U;
    msg.goal_id.assign("OIBQJOBYEXEBODTQRKRSFAUESXWKYTIQTKAMYTAUAIPCTOMFSIQ");
    msg.goal_xml.assign("OCNHHGDXUSINMOVGZOAZUMHUSYSAZYKQUDKFXTNEVAPNMRSQQNPDERTRGYJRVBLIJOYRFYUJGDSFHCPXXEPVJUPPFFLRTXOPYALGHKWVHNDCFZDCCRQKBPZTWPEMJLIJZBNEASXELVIT");

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
    msg.setTimeStamp(0.740702539752);
    msg.setSource(22304U);
    msg.setSourceEntity(244U);
    msg.setDestination(63426U);
    msg.setDestinationEntity(104U);
    msg.command = 216U;
    msg.goal_id.assign("JUEYTZNGKQLJYKFSOBFCXQODSQPEFPZLPPGEBXJRQOKNHUVXUTFCWFJBAFKKMWTWRMKKEWGLNUNQOYCCBAZKXA");
    msg.goal_xml.assign("MEMIWOVRFGXYLOAJITZOSCXMWUHZKLAREZXEUJQOGDYLLQVXDYPSKQRPVCNENFBRHGQJVEPSJBHBRKSNAVSNHMDKYPUNTGYTSXEKOWIUULQRNUFZMKAEODCUNVVROSGUTAATRMJLLXWTLAVHQBWZOBCPFZDAPTDHMFIZQMTCZWJZROYZHBXBITQLFDFJNPOJUCIKERIIY");

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
    msg.setTimeStamp(0.0496859649483);
    msg.setSource(35488U);
    msg.setSourceEntity(101U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(47U);
    msg.command = 141U;
    msg.goal_id.assign("BPXSEWFUKWGFIZVHAAWWBAPADOJHVTXKKSZHLNGYCBXDUKOSKMYAEDUJCRPGZKQFXGFYRMPMMXLLVBIPXTZBJYMZQWUKETSNGWTYFPUDYOQM");
    msg.goal_xml.assign("OGJVCDQHJUXLWTKAHJAXHPYNANVRCKMWNCLYTQDUBHZXVPJSDTQNTPBFUODGVEPDOTRWVEWREZNPIUGQGLQHJASOBYNNBTLQMSCEEFOGHNWJKLFSJLFYKABUJMPEXUGCVLYWXGKLIRQTMRTHWZMFSFKXIAZEB");

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
    msg.setTimeStamp(0.961248784535);
    msg.setSource(19773U);
    msg.setSourceEntity(138U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(138U);
    msg.op = 194U;
    msg.goal_id.assign("JFWUFDRXJGACNIYWIPFOXBKZGRAYTQDMITWPUAXYCPFCCUNYTUKLCHLJBBLDZENFRNDWNOFRXLWGHZSYFAPKCTQOOYXI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EZSZBEFSUIMDUT");
    tmp_msg_0.predicate.assign("TCENBWSBBNHAQJQZYVOTATJFVZLUHOROLXXKMMBDADONTPYFXMPVMDOTLACWBHVQMPOXCLSFFDYEXFQRDIQKGKSGEKZRCRRXRNQHVWGEUYDDWYCKQD");
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
    msg.setTimeStamp(0.297434412499);
    msg.setSource(61535U);
    msg.setSourceEntity(41U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(221U);
    msg.op = 87U;
    msg.goal_id.assign("OXKXEZPDCZLMKTEPJKLNRWRMAHJYISDWNVSAWTODQHLOPWGWNPQXHSGLIATEYSBDXRGGYVJRSPABPCDCJDZBFKFUUWIGQZXJYFBEQRBMULVOBLKHZNQYF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GFYUHHQNCPRZETSKKUXFCMIUWENRSAJHFUGSXOKSPTGBLRIJGCXRDBGZL");
    tmp_msg_0.predicate.assign("PBIDRPAYIXWCUSHYCSRCBNLZWCYAK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QGMPIOZCACLHHXFWLUQADZCEZAHYKNOKLDPZFUBNXIXHAEVEPMRSHFEIFBUSCJCWACJPDUUYVZKXRTBAWYZGUBBWRANFSKGDNLMPQYOIDBRHXZLYTFELMFOXKTWXTEONQWZBYHLMCNNKEGEEOLMFVNDQTVQJYZLCKOXLTXOCBQTXGV");
    tmp_tmp_msg_0_0.attr_type = 151U;
    tmp_tmp_msg_0_0.min.assign("FOURUZPHPYDGSUVATJQFFHNDZDPLFKSYIYMZMEIVRMDDOCXIBQJPKYASQUPGBJVAKWHRMNONTDWRSOMQXHUMKEWNOJRSGYGTOZIEWFUVWCFDMNTBDZLEYLCWOHLZKMFWZOVATIJKSGVBHTQUGBHWVVOWCSQCIYACJPSPPRBEPWFTLTZIIGHRRCJXLUEKOHLEAGYASQBXHLSZZXABI");
    tmp_tmp_msg_0_0.max.assign("OLJTCXHPQCJNPZGKEQVVIGRUMTLBPCXRCQQATHJTDJAVDMOMOHVGWMKANUYQJUIZSFOKAZUQZUZDETDVTYYFYIKHZWFAVIAAQLHMNEXGKYMBCPZBHXOXCBRQNWHWLSOGOSBJUVNXRV");
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
    msg.setTimeStamp(0.348688899112);
    msg.setSource(54661U);
    msg.setSourceEntity(33U);
    msg.setDestination(25101U);
    msg.setDestinationEntity(154U);
    msg.op = 54U;
    msg.goal_id.assign("HZDYQNBRLHLTYGTKUQOBEOHJMXTTIAIAXNFOFRSWUTZNUZXSNCRCVMYQUHEBNGAEJHTJXYFTPLLPPDWUEMYBVCWBEDEXSWQCMTFUPUITFAMBSRWVOGGANGAZFKZGXGGYSNROSKUFGUBDDLMQAICHKDNDBMBOIPHAZNPD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PAOCJFYGJHRVWXSYXCAMDOLXEEAFUTNJNFDRBEKPWRLVSKAGVSISQVTCOJFWJGTRPMHMPQBKCIDCGZROTHDSJXYKFVBSMMWQAQVMRVJFSNMLCJTRMCMAODOFBHWIOKOXGTDY");
    tmp_msg_0.predicate.assign("AKYAMSRLPNZAGZMDUHKWKFQIHWICEXHRJFTDHDPOJBDKGUVZZWIIQFKBGMPEUYBFDOLUZUTQGLHYGYSNCCBXXRRZYAEGJOOODNEEYTXAEDCWGNPTQQJMURAXYUQLRQKO");
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
    msg.setTimeStamp(0.619503900393);
    msg.setSource(53627U);
    msg.setSourceEntity(145U);
    msg.setDestination(5472U);
    msg.setDestinationEntity(176U);
    msg.name.assign("JGIZSIEHCWHBYENDFTBQQCLJWEHUMWWATPYDQGSMAFXYADMHRJWQLYOZUAMYJZAMIHYQQWYLOCGDJJICUUXAROBKKTZEXXCMZGFRZFEUZVORVDTPQHILRUJCBKLTZFIXLTEEVHUKXAVFGOVGCBJJRBLKFZXCWXNRDKPVIUIHPAVOEJVSGBLBDXTSOPSYKRRHSSDLRS");
    msg.attr_type = 120U;
    msg.min.assign("NHTCVTCVIPOSAKLEJTVADOGLXHGTFGPSQQSWYZFWLQAEZEIEDXAXFLDCQNIXKCDJUUPAXXLUQNALKMPJGZAZCMMUCOYLORRBYKNIVUGBHCLORWKQBYJZWMGHUKXEQIBESETMCOOWRDAZGVTTONPDFZTQDJTYZHNVGMKEWWESKRBDNMIZYDYAVNQRJXPIVVBJRONUKFBISWPJUDHMQYHN");
    msg.max.assign("NNOIDRMFYPHJHMSIUQJTYWRRPIQZSGTYZFWABBUEWOBX");

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
    msg.setTimeStamp(0.847944498209);
    msg.setSource(43850U);
    msg.setSourceEntity(183U);
    msg.setDestination(17367U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ALLCBJIYEVHSGDKVDJVTBGJWQBCQTTQZRELRLAVMYWUYNEFNTFQHDEHUQQVAJHGTHSPHNBLFDQRTMVZJNZGSUTLCIAVXQYBAHIQGTZVRUXCOKWULSDYDKIMSZHBEMFRZPGALPUSWZYWKDJFOMCOKACDUFKIIAGSISEKRBDDQYPTUOWSXEWYGORGPPFMVFOBEMXBPCXRCXZRMOXNNEYNKJZPPPLXMNSJWERIUFHOWGCVXIMKLKNJBTHXAAWIZO");
    msg.attr_type = 173U;
    msg.min.assign("HEKXRCITRPZGVW");
    msg.max.assign("PIJBWFBXZQWEHUCKXBPRQXIDMFPHUHQPELOBXUXOQWAWGAVEDPQSZLGARDTUBGOZRHDWGIYYSFJLOVNMDNAFCAVPMLSUQYUNMFDAYB");

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
    msg.setTimeStamp(0.390034318682);
    msg.setSource(17140U);
    msg.setSourceEntity(136U);
    msg.setDestination(62694U);
    msg.setDestinationEntity(184U);
    msg.name.assign("MHHZEUUDJKLINQUIWWLYQDYCK");
    msg.attr_type = 93U;
    msg.min.assign("SRFVJHSURICTMTMIBFLHEYPDPOWQCZWUZVFDNPPSOYIEKLZUQVFLUTQRIPMFTKLDSCNGLHHZZMLCFYYHQGGZOIJJOABKSKJWAUQCKRZOXSDUVYGPXZMIEBJXLRJCHAHMKEIPGBNWLTVXGHVAUFPHBEMYRXXNWDYKAAGFCKNNTGQMMEAYCZNOYDTNSOQC");
    msg.max.assign("YXQJVLKDLRRJZDSUKTSEMZUNNVBAQKBVETMIQFWJGUMAJWLUXYBOOXEEAYLDDPBHPYGTNYZKMDZWLBSVIRVCVDOIS");

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
    msg.setTimeStamp(0.739651965298);
    msg.setSource(28008U);
    msg.setSourceEntity(167U);
    msg.setDestination(25883U);
    msg.setDestinationEntity(162U);
    msg.timeline.assign("OHMTTTPPPJWJLANLJOQANPOPAGZCHGRNACIGWHELCRGXWE");
    msg.predicate.assign("VRQSFVEOVCLIJSDWJTSAQOQRQXFVAOZIIKVUKIZKEECFCDGMWDGONJBFUMHAKCYPNEUOXOPXJSMNRFKBDZITQGYNEHZBHMBACTZHDJXKDGGTWLOMAEUHSBVILHPEYJUUSWUH");

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
    msg.setTimeStamp(0.707981751928);
    msg.setSource(17414U);
    msg.setSourceEntity(20U);
    msg.setDestination(59568U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("LPUGJXSFOZCSJHYPUDVXHCXKOKYGGRRMRFGNUVHGMWCVMOTBZLPNEPDCZBTVZQBYQGEBRLBSGTLENEKVVKMMADPQHDZYKYXAPKPQYTOXJJAPEHHFB");
    msg.predicate.assign("KQUQVGFCFEDZIRLNNATMFBSGQYNHIMIMSRCWYUCRSRIIILWPBXYTYXYBTLFVJHSCUKOWKADLEKVORWYJUPEUESIDYMGKDPYLHOEBSCLLAKQDVPNXTVMZQPRDGAFYABBEUZCGEHFFUPAEAZIXHOTQZOXNGWQNOTOADPJLXTHQVGP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZMMXOMPTWECYCNBSCHNBMIWBVYSYPUBRFLRSGBBLLJKAZUAYXARGCZNTPPETJODVUHJYNIYZWRPBKNSHJQNWQSMEDAGEXQZTVJMIOKFWDZIXOGNVCCFVLALMMNJFDLFWLBDYWVQXYGPOBBJZXGCKAXYAIUVVTRTCPQEEXUIQTISJDQH");
    tmp_msg_0.attr_type = 99U;
    tmp_msg_0.min.assign("TZRJBXIHJZSPOUPNBRIPCILLUSDQSFUCXHFCDXNYTJFYMVXJGURDQOSLLHOQNWYUPAIVNXKMRSBRAKEQTPZLOMZBIJUAZGWJPEYBSZZFKKWIEOZOUWDWEHGKWRMFERZJQKVFCECHYUNGDIVTBXEGYDNNJYYMKLPBGJLHRRTXSMCCVNDEACPHVMULIVBPWGWFYFABGQTKAQCHAKYFUQOMPVVDHQXDEXLCAIROBSAS");
    tmp_msg_0.max.assign("DGABXVBDMQEYRBJKHRVUCPXAKZNVNOMLFORNGXEECRWCGHLUEOJWIZHAQBQYQDMALXKJYOPLDJTMJHPNMDWQLMVPVDG");
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
    msg.setTimeStamp(0.342253700276);
    msg.setSource(50603U);
    msg.setSourceEntity(19U);
    msg.setDestination(38289U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("STCWBREYQQMLPZJYZYSLBUEFZXWMCLROXZCYRBPJBEKZGWFURBEXUSCQFMHMBSSMUJFNCRHDGETFQIOFIUIPYNSHQSAPLMVCKSPOWPCLNMUQXPHBXPVVOJFABGCONMNIWUVTQKQFJYGHKATXVWRTFWSVTEHDKHONJD");
    msg.predicate.assign("ZGYVFZYBRAERFNJHBMDFHLTPXPDQOYBTIYAWGMOIKYGEIRMXXSZZHLAKNFJHHZGRPJBPHLLZAYOWCXTSXOJFQMQREEBDHCXCZZNOVWRLVLGSXSQNSOUBJIGLBWCCHHOYUVVTCVDUVVLPDJTWMAMLBQRNAF");

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
    msg.setTimeStamp(0.351823564999);
    msg.setSource(29208U);
    msg.setSourceEntity(69U);
    msg.setDestination(50185U);
    msg.setDestinationEntity(68U);
    msg.reactor.assign("NSLZHBTVEQIXLOWLQFUUUFKXIHFNEUDEAAUEWZBCASDBNMVKZZINQPBLOGFUHCGNXGBYCWNTJZRAIJYXHTBBSJPVZFPOVSWADWMWDRHNCMKGZZSIXBCPLTYNSSKFFMFIQVKYAOTRYAIXRDEEJJPZHEYLWKPTDQMDYPGJXUMCICPGKXRBDCPTXFRRHGMLLUAHGOJGWNJETSUQHQRYJGQRAYTMRXJKVEEMTWBLNSQDKPIOIQ");

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
    msg.setTimeStamp(0.475930808773);
    msg.setSource(26433U);
    msg.setSourceEntity(201U);
    msg.setDestination(22U);
    msg.setDestinationEntity(190U);
    msg.reactor.assign("TAXEUMHRVUQWEWMZBZKWLHHQFKHGCCFNFTHFBWODQOKVSTLNACSGBEINLADKVMOPLYPDILCRJOOQFUSVTAILYMNNUPJIQCRAFBHVAOZVKOZJNFVAYRKLVRERYXHBQXTMFSEGLMUPHACFEOMZXBIPGRDDSEGFTW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KKCABFTSOOGRYTDSNIBPUUXZHFRUXEEULOBY");
    tmp_msg_0.predicate.assign("ZMVJSJZIZNHBQJGEVAAUHBOBCAKVMAXEYUPNOYYDRIPKQJJERKSCPPNQNHUWZESGSIWKCCUCJABOPWKOTNSYHQFCDDZWYQFFLGLAQSAUBKFGUXDDBBLDXIXIFLWEXOUOMRIHVYVFXQTLYXIMSOJKIRHTWDRONTTJOPWCAEVVCMTTWZMUPBGGVMZIQVHDWRUPLFLRE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJCHINYLDVPCRXZXVZLPTZOKDZIFKDACUTJWTYRINXKFPBHPFSSUFTJOTRIHIOMDJQNFUDZIJWROSATPVLMUMKWSWJCZNBNYXMLOMUMQAFPKYHXQELYQAFZYSCRUMSCLBQYEPGSSUFVKEHUQNZNOXXRKADVDWDGPSWAFEGBUWHGGPQLGRBEZKEUOEVDYVBBYTTAKNZWLMHCIXGAEXJAJQMRVGGSL");
    tmp_tmp_msg_0_0.attr_type = 211U;
    tmp_tmp_msg_0_0.min.assign("WSTQKMDVIEGAHJMLJPOXHNVGGNHFHFLWPGGORSHHSKFMWDAHXNJCXXZMNBAJZHMKFXKGYFCYSSQLENVLPOIVVYWLMAJZZLDBCGOTRQJEDZKCTQZLJDFTBAOEOYOQRGCDPCNHXBIIMCLENYKBSVVWCUAXROQWSRDIZKCIQXMEYKHGLUFZ");
    tmp_tmp_msg_0_0.max.assign("LUEEPPAKDNDRNOALHARONJIBDHBAYZCNKJHMYPCLXVYWIRMXKMGYWBIPFFGRXQZXQFCWYUDOCIVVJUGMTTXZXHUACIBATWMYTKLHSQAKWPJBPSJFSIDVWUOZUGNJTZKEBNNVJUJESGMQBKWLHMPQATMFSYZQKZOXXQWVPLBWVJWEHHMCFL");
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
    msg.setTimeStamp(0.907590812456);
    msg.setSource(50462U);
    msg.setSourceEntity(251U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(62U);
    msg.reactor.assign("LXMKZCSTEXBBOZBJAGJMIYXDUMKTVLFRMRECEAFOCIHMIWQHCLOOTWTUXRNUVLZHJTRHYEKGSITLHQUZVYADPOYMLOSPDNEGOQNMVPLWUWYNCSJGDOQQVIZNMSAVDQDVUSZAMYSXAPBHB");

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
    msg.setTimeStamp(0.695106438828);
    msg.setSource(44064U);
    msg.setSourceEntity(115U);
    msg.setDestination(28907U);
    msg.setDestinationEntity(166U);
    msg.topic.assign("GIUGJDUPIKWZYBUTBPSVTSIRCEKULDASENFKFCOSBKJNGIWMBQMUDFPLTLRJHUPYYSJKZKSRGAVZQYXFWFEQDQWOGHUVWKNRZWCZHUKFBVLLPEEMREXISTRNGVYIPZAGVCCBKEAZSVCGQQRABNDRMHYYLROIPTHOLQAZYODXAAXMMEXDQCXBCOPJGHSECKWMPLMJQBCLNJDUXMYTZFAF");
    msg.data.assign("OGUTINXGNVWCSOUTEQVJAZAUADHPSVMDFEAKLLTVUFEUQEJVJFUGFZYEDKHDMXPMRSUWAOBRZAIOIZNEQXLHGNMHQJUCWGTYNXJBJMIVMODFPRERQBKXVDGDK");

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
    msg.setTimeStamp(0.280654534658);
    msg.setSource(51750U);
    msg.setSourceEntity(33U);
    msg.setDestination(11325U);
    msg.setDestinationEntity(186U);
    msg.topic.assign("BPAZLGWCKRXIUYPCYXKQVRPBIFNEDJFVSXWOQBYSIVEAUPOIUDIWUNGLRVMGJTZOAJDXSOVACRDFUVNQANGWRCKEFRPJRUMXSCTLEPNHNWIWLHGRZUQGDAMBKKJBHYSZFUEHOCCXQZSOHMFLOCTNUMWLTGHAOHGIXDYKYCOZJTKMBMFJELFGDMDDYYBTQUVRSFNIVHIZMWAQPSWHAFJTJSKYRESMOBZNEXLCLEQJVQXBDGE");
    msg.data.assign("WXZFHVWMEFMXHOTNDHXTLAFBDSWQHXXQFPMVKFXBXW");

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
    msg.setTimeStamp(0.0688158715241);
    msg.setSource(2206U);
    msg.setSourceEntity(15U);
    msg.setDestination(11712U);
    msg.setDestinationEntity(236U);
    msg.topic.assign("LBLHZSUDFMGIGWLBMJHWTZPIJLOICVEMAKYTBFDYJEPTHZRHCCYYVOHOJWSMRPWHXFCZTBJRNVXXMDDLRGKPCRXFTHTGIPGKJJUXBIMXQNQZUSOKOFBVKSHZYMZANUWTQOGAFJDVNFUQIYADBVSZVGYTKRQOVSGQNSWDBQNHIILNWLQRCUXFCPYQPEEPDBBGFEAZREKAEVKIXUNCZWUNCOFANLUGLPSM");
    msg.data.assign("CZNGXYPEUJXWGGOKZYMBHWDHQAERTHPDSOKKSCMUTDIODEHAZVYGGNKMQBVRTTQQIIDSBOWOYZNJNYAZCFLEDKZKQCTVJLAVCUIIPVFNILYRKBURLJFBLMVBCXFQRMRMHD");

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
    msg.setTimeStamp(0.128565566991);
    msg.setSource(9221U);
    msg.setSourceEntity(19U);
    msg.setDestination(28088U);
    msg.setDestinationEntity(209U);
    msg.frameid = 181U;
    const char tmp_msg_0[] = {-44, 67, -79, 7, -10, -41, -55, 30, 3, -86, -126, 13, -69, 42, 9, 11, 83, 61, -45, -15, 65, 14, -85, 4, 97, -38, -71, 15, -48, 85, 50, 79, 125, -93, 0, -118, 121, -2, -67, -45, -42, 29, 75, 68, 23, 101, 35, -22, 60, -93, 22, -2, 86, -84, -111, 49, -122, -126, -84, 55, 63, -60, -46, -30, 51, -60, -27, -64, 54, -115, 80, -81, 93, -21, -21, -54, 102, 117, -22, -101, -110, -122, 26, -20, 105, 117, 90, -5, 109, -38, -34, 4, 36, -128, -114, -48, -41, -96, -15, -6, -85, 32, 35, -97, -74, 89, 76, -41, -103, -19, -109, 92, 55, -42, -12, -4, -24, 20, 117, -86, 28, -93, 43, -69, -43, 75, -59, -33, -15, -13, -20, 84, -81, 85, 101, -18, -46, -20, 65, -26, 0, 4, -3, -18, 8, 36, 18, -64, 69, 84, -111, -81, 15, 126, -67, 110, -21, -45, 116, 12, 9, 18, 27, 43, -44, -128, -4, 107, -4, 68, 105, 44, -58, 75, -38, -65, 16, 120, 94, -112, 83, -51, -77, -101, -95, -83, -106, 112, 45, 48, 58, 47, -14, -69, -93, -62, 108, -34, -100, 86, -3, -71, 112, 22, 70, -40, 24, -89, 53, 94, 45, 30, -8, -75, -124};
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
    msg.setTimeStamp(0.791502725005);
    msg.setSource(2228U);
    msg.setSourceEntity(249U);
    msg.setDestination(55321U);
    msg.setDestinationEntity(113U);
    msg.frameid = 167U;
    const char tmp_msg_0[] = {108, 70, 69, 38, -33, 60, -124, 42, 62, -94, 76, 34, 31, -74, 0, 73, 12, 51, -83, 96, 16, -1, -93, 22, -73, -56, 91, -15, -111, 73, 29, -5, -9, 29, 28, -47, -73, 101, 125, 34, 17, -90, 91, -28, 15, -115, -55, 107, -86, -14, -22, -17, 27, 32, 126, 93, 113, 89, -18, -80, 103, -125, -8, -27, -115, 95, -34, -53, 23, 6, -32, 67, 4, -13, 50, -25, -1, 70, -15, -126, 74, -7, -17, 19, -123, -115, -36, -94, -26, 86, -35, -57, 56, -6, -105, 60, 21, -26, 54, -2, -95, -67, -50, -30, -41, -107, -35, 68, -88, 56, -110, -35, -1, -83, -65, 7, -63, 66, -41, 4, -56, 70, -7, -50, -61, -94, -22, -87, -29, -55, 31, 59, -96, -125};
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
    msg.setTimeStamp(0.59133810832);
    msg.setSource(55073U);
    msg.setSourceEntity(142U);
    msg.setDestination(38991U);
    msg.setDestinationEntity(62U);
    msg.frameid = 242U;
    const char tmp_msg_0[] = {67, 119, -13, -128, 61, 2, 79, 10, 99, -122, 111, -96, -81, -68, -57, -58, -41, -1, -18, -122, -50, -70, -64, -16, -105, 121, 54, 126, 71, -52, 80, 13, -52, 33, -75, -41, -81, 33, -50, -1, 22, 109, -9, 100, 97, 72, -117, 112, -113, 63, -85, 48, 79, -51, 103, -61, 51, -64, 90, 93, 57, -97, -5, 123, 121, -103, 93, -30, -36, -45, -82, -103, 111, -55, 43, -119, 28, -108, 59, 56, -19, -50, 53, -115, 11, -72, -118, -108, -51, -10, 66, 36, 46, -49, -118, -118, 39, 19, 52, 30, -25, -122, 104, -111, -69, -8, -66, 57, -108, -57, 63, 60, 112, -77, 48, 79, 56, -63, 66, -105, 38};
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
    msg.setTimeStamp(0.959667774018);
    msg.setSource(21992U);
    msg.setSourceEntity(58U);
    msg.setDestination(30379U);
    msg.setDestinationEntity(34U);
    msg.fps = 83U;
    msg.quality = 215U;
    msg.reps = 106U;
    msg.tsize = 222U;

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
    msg.setTimeStamp(0.273266854591);
    msg.setSource(13766U);
    msg.setSourceEntity(24U);
    msg.setDestination(59252U);
    msg.setDestinationEntity(86U);
    msg.fps = 147U;
    msg.quality = 5U;
    msg.reps = 122U;
    msg.tsize = 22U;

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
    msg.setTimeStamp(0.450953804357);
    msg.setSource(46455U);
    msg.setSourceEntity(79U);
    msg.setDestination(41565U);
    msg.setDestinationEntity(166U);
    msg.fps = 70U;
    msg.quality = 136U;
    msg.reps = 170U;
    msg.tsize = 200U;

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
    msg.setTimeStamp(0.753887163927);
    msg.setSource(36419U);
    msg.setSourceEntity(223U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.0480172281134;
    msg.lon = 0.482118027528;
    msg.depth = 94U;
    msg.speed = 0.609160354609;
    msg.psi = 0.343679416861;

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
    msg.setTimeStamp(0.349173610094);
    msg.setSource(17502U);
    msg.setSourceEntity(19U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.0166982296016;
    msg.lon = 0.867875346234;
    msg.depth = 244U;
    msg.speed = 0.0383407173766;
    msg.psi = 0.035961832057;

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
    msg.setTimeStamp(0.810789338716);
    msg.setSource(43685U);
    msg.setSourceEntity(49U);
    msg.setDestination(5089U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.568380668986;
    msg.lon = 0.903471916449;
    msg.depth = 146U;
    msg.speed = 0.739089203298;
    msg.psi = 0.497190978686;

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
    msg.setTimeStamp(0.213280596403);
    msg.setSource(5056U);
    msg.setSourceEntity(240U);
    msg.setDestination(12930U);
    msg.setDestinationEntity(19U);
    msg.label.assign("MTWFFXOLVREDATYIOSCGKZOWTPBDQOIMLBMHDTLLCSAJHNPKXAMUFHUWECNZPXLGJMRQZLDNPITMSYKENBLBSLHYHZDEXNWQWEYVNPWOOEBQDRUXBVIYQBKZRDGFGKTKKYGIQUNTPUCZVONZVEUJVPQRKCVHB");
    msg.lat = 0.954851390069;
    msg.lon = 0.411534242697;
    msg.z = 0.873348685822;
    msg.z_units = 42U;
    msg.cog = 0.464711399144;
    msg.sog = 0.824108280369;

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
    msg.setTimeStamp(0.672773625669);
    msg.setSource(60384U);
    msg.setSourceEntity(87U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(64U);
    msg.label.assign("JIGOXQZHVTTDZPJQGZFWLPFKKBPUMBKSALGRCEKENONOMJGBVXDSBCBXSCQTUASNNHDZKVRXAYOD");
    msg.lat = 0.587161515319;
    msg.lon = 0.526443363599;
    msg.z = 0.78816704202;
    msg.z_units = 244U;
    msg.cog = 0.566245843402;
    msg.sog = 0.497651139742;

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
    msg.setTimeStamp(0.575423396024);
    msg.setSource(4687U);
    msg.setSourceEntity(95U);
    msg.setDestination(25926U);
    msg.setDestinationEntity(172U);
    msg.label.assign("KSZFHWLREDXRBUGLXYUCTVROVOKEZOROASMSLGMVOROSPDIQOJHKPOEBFTLJXADDCQQMTBHTUAHWFXXUYIPUKMKPLUXGXLTEFUWMKVDNMGWZYQOCYTGJGTWQVRFCNABJZAWFVERCAPZJDNEIAMCUPKWNQGDHQSHLMBHPMYRQEZISDAEYIVIJSZLRJRAVGUQSBFCAJSTCFGO");
    msg.lat = 0.386499540236;
    msg.lon = 0.316763294905;
    msg.z = 0.407043897961;
    msg.z_units = 109U;
    msg.cog = 0.134841763864;
    msg.sog = 0.765802336527;

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
    msg.setTimeStamp(0.308028757706);
    msg.setSource(55594U);
    msg.setSourceEntity(135U);
    msg.setDestination(36862U);
    msg.setDestinationEntity(230U);
    msg.name.assign("KVWEPAJAQCCGGLFKAMKSLXTRNGNLRTCXFHUESUPWUBNBRIYNWPKIBDZWHZTIIPXVOOVUCSMLGXKQUGDHPPSBOYLBBGQXMNLUETIRAJMFMLAZJNNRCGWOFMZJWEVYNEZSOTIGFPRLQEZFGHUQGDDYQQISOLKHFMVJPKVWDVZPFHAOQQFBDAMEWXTTDUOXOOJMYSJNSHRXDETXCYYAPCZBSYVICEQCUXBUZKRHRAHHZNKIKEJVVJ");
    msg.value.assign("LBUXZHFRDWTQPEDWECOOJUCFIODALNNSDFGJKTNDAYPGOTLLUWCZMIMKXUXJAQTBBFMFHVFFFXJVWPPGNABNYKTSSPBYRSSDGUIIOUYYNBEQHFJGNQQTQHRXKHJVKPLIVXNORRGOTEGICPMBJUPJMSGDJKDCIRSUCCMCSZATWHKLOHWAGQBRVXOCJMAYWNXMZXXVVDKREQEEOZEDASYVQWMRMGYNAITRIIZVUHHTZKBQBZWZPLULYLWSE");

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
    msg.setTimeStamp(0.195434940787);
    msg.setSource(3198U);
    msg.setSourceEntity(84U);
    msg.setDestination(1475U);
    msg.setDestinationEntity(164U);
    msg.name.assign("JVVKIPGWPMSOKBJR");
    msg.value.assign("ATFYEURXAYPCZNNPMIIDIWZMRWOVXOWJPRNOFXECMDFTYBBGSTTRGBIIUQCSKXHEDTWNLXYKWPXQHKMISEIUACWHEFTDFYJYRCWVGLTQEBIBZFKQHSGVYILPNJVNSNNRCZUNSEAVIGRSERYMVXSLJUDHQVQJJBPAOCKOBAEYHZVTJFTCDZKDDPFEAZTULODGDB");

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
    msg.setTimeStamp(0.923392274532);
    msg.setSource(16615U);
    msg.setSourceEntity(242U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(141U);
    msg.name.assign("ANXVUILGGMQTEDBOWLNSCQVUIPSFVDEOJQAOKVKZTKRQCQYTEGJKWXHRXIJCZODBRQJZWNARIBJFONUSGOHGMTDKQNTGBPMEPRFYAPNJ");
    msg.value.assign("NYGQRFUFNKLGDVDRDWXVOWMNSKXMBRXCXMDYIYNDEKQDRRKPSTGXQZDYOVOVQBLZZHIYWHMXAEBFJSRLQFTLUCVLASITRJVJXWJFZJDDKWIJPVI");

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
    msg.setTimeStamp(0.783261557717);
    msg.setSource(27719U);
    msg.setSourceEntity(62U);
    msg.setDestination(30391U);
    msg.setDestinationEntity(201U);
    msg.name.assign("IPASVETNMTCSZLEBURHBIJWGCZYDPTJXMPPUNQAMYTDNRDFROIDAHIKLJZQCELWUZJQOQNVGBSXIZPKOBWJRTWYJREISSREWKZKYLMMBMZLOFHNHFKAIFRBXGVJAZJOBOXCVMSLJVBGSNBTKICNUYYNJULHAQQVIOZWFXZCNOEQRKHSNMXQFQCXFDPFUEXYOMXIFGWBDHRLUARVEGGKDGDAEHDVCTWTGSKCYPYYLPQSUPDLEU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TTOTKNMDUGCWRSPPIFOOUJSMRVHQKTAZPJHXZXNKGZVRCLNJIRHAVANDJGLQVJYKYCTEPNHHQXLGQZBPFBOSQJESNWPQJTEWHIQBUUGHCISRCIKEEUNEZWOPGNFCMZYVPGVITOCWBUFDLSIFIZQBCVGULVDBYWZPCSELATZYHMDMFMRQAGDYATXLXCUFMYEQHBWIXVNFOPIWEBXSDLDYDKVAUEARUYWOFOKJBATKZLMHGNOSFMKXJXWLRDSX");
    tmp_msg_0.value.assign("SZQDIMWFKLEPRKHZHXJNOTLPBLKHGVMHKWNPUAAKBGQXLYMFYDWLQLWZIXFCBBGSYFPQRMSNESGOZQURMKGCKKNBFARMVRZOIYUGVJARWIZAQMSEJHDWGTNDJITCXLRGQPWJOVDHPTJYDCAKVHBOTDFRITICHTMATDNSSCEIXFEJNLSHIIFEJXUULAFYGSZNYNDPUPUHVTOANOUJLPCBSCFZCWVJWMEEZQOYBMPXAQEVKQGRXUUBRBXOZ");
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
    msg.setTimeStamp(0.738803345542);
    msg.setSource(29439U);
    msg.setSourceEntity(44U);
    msg.setDestination(34560U);
    msg.setDestinationEntity(171U);
    msg.name.assign("SAKLWMSUEUVQIPXEQTJROIMANXYDLZCVHFACCCKTWIPDOKTOENATHBVADGQZJXZYLRZGJZUJSQGRPBUNTYOTVSXBHIEGVOLNBFMLTZYNBWOOGCVYWJXTYJLQL");

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
    msg.setTimeStamp(0.155123050598);
    msg.setSource(12458U);
    msg.setSourceEntity(221U);
    msg.setDestination(14622U);
    msg.setDestinationEntity(109U);
    msg.name.assign("TFUQXASOIXHYMYDMRLKYRMUJNHFOXPLDDBWJBOZRNDBGBLJCJRDHPQNWETHUABAFJXITL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XMHKREDFGGIMWYMAIHJLYILVHJZEEIOOYHEBFTOBCAXUKKXRQQQQQFXFAJSOJVQCQMXVALDUGDCTUTZJBPWSTPKCSBGKYPIQWDENCCHMRDFSWYTOHQGJRBYYOVXSZJLTRDVSLYEAFMRCIPGZVWXBAEDIWTXIBMACFHPVELGRJNUMLUGLTZKNZZPZUOPRWZANHNVIENWNTUPTCNFUOKZXJWSSKPBHVDSGA");
    tmp_msg_0.value.assign("KSPHWSYWTUNPWIDYXQVVWBSASPORFFCDTLNYUBTIZTMZOKXRNLGDAEDRUEKRGNEIVFBBCCVGFVVGIKDHUL");
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
    msg.setTimeStamp(0.996069117632);
    msg.setSource(61566U);
    msg.setSourceEntity(32U);
    msg.setDestination(723U);
    msg.setDestinationEntity(72U);
    msg.name.assign("FZWEGCDGHNMYDVZPVFMKGCRHENPYQCITHVIZNZOOPNLMPAEAAPVXOKXRAJHRUVYRXXEAKEJTJCKLKCGRNRIXBTKXOLHSAYJGPQEKLKLXUYJDHOYRHWOTUM");
    msg.visibility.assign("BFLCPLKKOGUBFTQVDSBLBIZLWCZKJESVETYIAOCXNUMKZMHAOBESPGZEZCWSWWDRRNCVVGRNYGFGMOFLJLQXBXLWQFMYIJWJMFTJGWDTQVPUNVASCEHXBFKLQNRSAITAMDDCPEHNOYHUXIVLEWYBIQAYJPFGRORZDFBSXCHOOMJMOHSUMIGNSIDKRHEFHTACPZEPZVIYQJJKJRMZGODUSYDWXKTHYPKQID");
    msg.scope.assign("ZILCRDGIKSAOQPVWFAVRESCJLBOMCTRCUNSEPUUXEFOXYJBKCZZZOFYLZQINWNNYJNCETLKWYMWJMBOKTWTVPOAASXFNGZIMGCGDMPZTJEXTAJAPMYJBRIFDHSANYX");

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
    msg.setTimeStamp(0.534107147968);
    msg.setSource(50801U);
    msg.setSourceEntity(46U);
    msg.setDestination(14934U);
    msg.setDestinationEntity(33U);
    msg.name.assign("UZGLQALECSMWNKUIXNBTDPQGXMFIPWKLLVQGDLCJOAETHDYEHKGHYRRWCDPSBQNIMPGCDNJPCUYGBRLKPACZHBDYXDWOTSBVXKOZEFRMKOVYSWJMUZOOIIFQESKLAQORFTEUBNAOCPD");
    msg.visibility.assign("QTRDOVAYOEGIDVSWNDZHSLWHJEXUPMNIOWJCMSWLSXLVYNKCHDIQKUHCQIGBSKYVJEKFWLTAIPJFIFUNBZYTFBDBQBJYWLCZFRFZXNDOCASNPMMNIVWEEXGENTJYPRJQJROQOILWHWACOQGSQVBUUPMXMWGHMDMYAXZAFAKJRYECFHZBKPKARDXEAXYOVHNLZFPKGPQMPMELLGTSYOABDVHZVGRUFCG");
    msg.scope.assign("MKFSJWCYWHNBDISPFVYPWXWROGULKAMMTRDZXMCDACRBIH");

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
    msg.setTimeStamp(0.997920156884);
    msg.setSource(62028U);
    msg.setSourceEntity(206U);
    msg.setDestination(58293U);
    msg.setDestinationEntity(248U);
    msg.name.assign("WAHHRRPFWEPRCEIRQTSBAKADDUFFSNBODOXTBTZSQMLNWQZTHOSJDULSLNEXHZDEFMSHXCKVXYICUJGWRLJIPXRVVGXTBZVMYUKQUXLIOVLGMFYQYGSZCOILKYLURZOEQUTWLTFRJCGTUFQHED");
    msg.visibility.assign("RZMBZOVGWIZSEANJVLQDPJDGLNDXNVMOBIGFQHAAFEVLRFDKQJILTCRGIGPRRDGCYKWLFFIQKJXCTHPNLZSXOLTPMUEDZOVSHTALHHNOGJVGQIAWTCVWIXTCWW");
    msg.scope.assign("SWYQDGTRADLPNEKNJVECAFFZVBBGDDKUSJGMYUYQISYXRJJXLJEVMZGEEXZBGYLOGVOHOGJBFZCURHUTAR");

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
    msg.setTimeStamp(0.909704570754);
    msg.setSource(62110U);
    msg.setSourceEntity(92U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(169U);
    msg.name.assign("NFQPFPETSOUEDVVAEOZSAZKXOFNXHHCZLOIRWVEWJFQXLUIZUDJPFRCWDVRUUYIYYYXJGYWIEGBVJRIQADGJZUEFQPXASQWKEWLBBIHTFXOPBXEJKTTLZVGFYQWCXNXITNY");

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
    msg.setTimeStamp(0.998545867978);
    msg.setSource(28757U);
    msg.setSourceEntity(117U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(41U);
    msg.name.assign("TMFYCGLYQQKDMKPIIUFHFUHTQRCNMMSDOBSS");

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
    msg.setTimeStamp(0.768324481808);
    msg.setSource(50328U);
    msg.setSourceEntity(168U);
    msg.setDestination(26249U);
    msg.setDestinationEntity(56U);
    msg.name.assign("JFQGMKUVAVAWKQKRGLLINUOJHBZOZEGCFOSLZDFQWGSADTECPBDYSFEIQMGNKONICOYJQILGXGSGHLOAMIFQSSZHPLRYZTOARVXCDIVZMUZEYBUNSJFIMHTPWGOFHWBTHKUTUTLUPMHVXBLXNRPJXYARXRQKXPREHABJBDYDMFNQHAVZWWHZUJJFIXEXKPTWSBRPDNKXSMJJDSIOVKCFVGCBTLWBTYUPCDRENYMZYPCREVKU");

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
    msg.setTimeStamp(0.0839697243025);
    msg.setSource(38074U);
    msg.setSourceEntity(55U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(152U);
    msg.name.assign("QISVLVAOEWIKVPDTPPHUICDRITYTFBOYSLWLGJGOKLSQBFGHBXMOJBAKGEYHGSVROHTKTYXTIFNVXTHCCZQAUMRNOWVDVXMPEZYNPFFZWSJZBCINOFNDEIXMZORWJJCHUWDGQUNQQXUYFOGLLAVRAPRQVIPDNNBXSLFZKJSEIUXDUFKBMYHVKWHMPUZNILHRZYWREMCELSEAMDXBCOAQAUZYKKYKMDDHCN");

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
    msg.setTimeStamp(0.250897825627);
    msg.setSource(58448U);
    msg.setSourceEntity(91U);
    msg.setDestination(18150U);
    msg.setDestinationEntity(149U);
    msg.name.assign("GDNISGVWFCRMAJCLBGFIPXTIKDOJMQAXJZEQCYTRGFDIFJGVHKNBAIYNYTSZEKLWRIUQCNZQPXCVDPYSOSJLMNFUCLUQTRLXTRZYKWPMRVJGEUVLRHWVHAADZQE");

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
    msg.setTimeStamp(0.995215024053);
    msg.setSource(12164U);
    msg.setSourceEntity(233U);
    msg.setDestination(26021U);
    msg.setDestinationEntity(86U);
    msg.name.assign("FAANSGKVOYYBEOHUIOKQNMRJNVHBDMHXWTOBZRHXXOOCAPSMMYXPJWAAZTQUKGIKYREBCWEQFEMYRBRDNFMVIMCWSJKKNMLUBIJOIZPPZHVQTNFRCYZVUMDJLVZZHJQULWCZDAVQLSNGDFCHPGXBKTPDFLSIXPGBWDGYRTKNZXOPGESESFAQUGBQCPVIAEIVJWTWRITKYRFEJHDSWIJUOALBPHXEUDCTGROFTUADCNECTSY");

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
    msg.setTimeStamp(0.722401546202);
    msg.setSource(25618U);
    msg.setSourceEntity(156U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(161U);
    msg.timeout = 3180581152U;

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
    msg.setTimeStamp(0.964179483205);
    msg.setSource(63897U);
    msg.setSourceEntity(112U);
    msg.setDestination(10206U);
    msg.setDestinationEntity(103U);
    msg.timeout = 1963952354U;

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
    msg.setTimeStamp(0.761115459301);
    msg.setSource(32163U);
    msg.setSourceEntity(55U);
    msg.setDestination(24559U);
    msg.setDestinationEntity(24U);
    msg.timeout = 941633504U;

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
    msg.setTimeStamp(0.420122534236);
    msg.setSource(58700U);
    msg.setSourceEntity(185U);
    msg.setDestination(42240U);
    msg.setDestinationEntity(2U);
    msg.sessid = 407916125U;

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
    msg.setTimeStamp(0.87846547322);
    msg.setSource(22509U);
    msg.setSourceEntity(188U);
    msg.setDestination(13011U);
    msg.setDestinationEntity(134U);
    msg.sessid = 832256334U;

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
    msg.setTimeStamp(0.428637354281);
    msg.setSource(57576U);
    msg.setSourceEntity(43U);
    msg.setDestination(55046U);
    msg.setDestinationEntity(170U);
    msg.sessid = 4075076193U;

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
    msg.setTimeStamp(0.683055107515);
    msg.setSource(48585U);
    msg.setSourceEntity(100U);
    msg.setDestination(38880U);
    msg.setDestinationEntity(152U);
    msg.sessid = 706985809U;
    msg.messages.assign("AWAARPOIDFNUMXDVQCRQBZESPGRBGJOCSXWTUCXJEBVRYAVHQGIQZJASDGETLCXLCISKNLIWROEKJVWYIJKUEYKOLVFPWAZBJSFKMUAXNLOKDXDSHRMMHKPJDRVPSAOXLXZYYNEHGFCZPHUUWBLYCRZNXIITTFAQPJRMHZFUVNPLBTCLDJPDWHGNNTTHEOSEJVEYKHEUBZSGUIYGMBWRYCITZVOLWM");

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
    msg.setTimeStamp(0.732153295707);
    msg.setSource(60715U);
    msg.setSourceEntity(119U);
    msg.setDestination(37988U);
    msg.setDestinationEntity(55U);
    msg.sessid = 1028501656U;
    msg.messages.assign("ZYSFENVUKQYDBJGRIRZSUDXSSVSRDBNZEBQYLMMSLKALIWZJSQVNQIACNPNMXWFPMCSCHQPPUNPPFBFYGAVBJLSTFAQJYRMXQEEBFVKTDCHZMONJDKBRGHKTHDURTCMAVJCIWREXXDTFOJPWTWELIRYHIEGQLXJABJUWDICZPMKSAXWKKGVHIOIUZVHGDGZLBWULZLTCKPCWIATFWOOMXYVC");

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
    msg.setTimeStamp(0.985538017562);
    msg.setSource(21034U);
    msg.setSourceEntity(92U);
    msg.setDestination(53299U);
    msg.setDestinationEntity(47U);
    msg.sessid = 1965475678U;
    msg.messages.assign("GBXADIVBOCBWRDOKUSYRJTJAHGVXOZLYYPENWZHQSTBDVTIDVNULNMWTVHBTQZGYCUGDNHIKRIALHARIQJXRWWBHSLLSXJKFQGIEJOWKBMECJLNMEVWZQPACOGHDQMVRVYFONKDDQNTUANPHFFGPZGBHZCYFCWVEAPGLJOTMXOHNSUK");

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
    msg.setTimeStamp(0.198585110721);
    msg.setSource(37964U);
    msg.setSourceEntity(224U);
    msg.setDestination(5017U);
    msg.setDestinationEntity(75U);
    msg.sessid = 3615961017U;

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
    msg.setTimeStamp(0.0319462138118);
    msg.setSource(26919U);
    msg.setSourceEntity(199U);
    msg.setDestination(11485U);
    msg.setDestinationEntity(13U);
    msg.sessid = 2742732824U;

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
    msg.setTimeStamp(0.571262787706);
    msg.setSource(5254U);
    msg.setSourceEntity(151U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(56U);
    msg.sessid = 3752048476U;

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
    msg.setTimeStamp(0.67818468378);
    msg.setSource(40074U);
    msg.setSourceEntity(45U);
    msg.setDestination(47730U);
    msg.setDestinationEntity(170U);
    msg.sessid = 1029355138U;
    msg.status = 95U;

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
    msg.setTimeStamp(0.954106585577);
    msg.setSource(31391U);
    msg.setSourceEntity(111U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(116U);
    msg.sessid = 2718663846U;
    msg.status = 191U;

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
    msg.setTimeStamp(0.221276736276);
    msg.setSource(1596U);
    msg.setSourceEntity(56U);
    msg.setDestination(33834U);
    msg.setDestinationEntity(226U);
    msg.sessid = 912177827U;
    msg.status = 217U;

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
    msg.setTimeStamp(0.452517782911);
    msg.setSource(24092U);
    msg.setSourceEntity(9U);
    msg.setDestination(23290U);
    msg.setDestinationEntity(92U);
    msg.name.assign("MCIBIPYCTCYYIRQGQAFFKMZPWRGKWGBRQMCVOXGKZAKZXXWXTPCCKVEQTWSYXJSBFQQOMTOJSQPYIKJKWMHJLIIXVUOCECFUWHNLDNTRIUQBLZHEMODHHGXAXTLKRDYQXIGCLUNDFDSMUSWPHUJHWAVEABTFDBFSVZEEACYNLNSRAJEADTREGGDSDORLVOZJZPMLSOKLZIVXAHBEFJEWHWHFUOYN");

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
    msg.setTimeStamp(0.703451840428);
    msg.setSource(45190U);
    msg.setSourceEntity(31U);
    msg.setDestination(33489U);
    msg.setDestinationEntity(64U);
    msg.name.assign("EVDDZKFFNAHNRCCYBRCJAEQQLINQKVOTCFAORXBIMVTGONIMPTZAMWSFGPGUFLPQBZHJT");

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
    msg.setTimeStamp(0.286815111183);
    msg.setSource(61649U);
    msg.setSourceEntity(84U);
    msg.setDestination(29428U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ZONKVTFRZPKLSZOIEFTWBSFUCRGNYPQEFCLBQQVYINJDWQTXJXMXQZXGMGCWUMLJJZHDSRZWTETDAPHOJPHKHUVSKLSOVDRJGKMLVFNACNBDNEXNQFZHERGQJDQCCWMBPTOXKSYIWIKKJEHDEGAQCWLSOYWFAVSFBDOIAPYDXCKOEHIFSORLHUZIYRZHNIUIPCZPYVWAGKBMGVJXMRAMOFYSY");

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
    msg.setTimeStamp(0.986110673959);
    msg.setSource(38474U);
    msg.setSourceEntity(154U);
    msg.setDestination(59239U);
    msg.setDestinationEntity(65U);
    msg.name.assign("PTKYFTUROQJSKEHXIVQKDICVBOTQSGLLUCETWCGUZVHMTOUYQAWOXZUFDIBDYVPFBLEELPJQW");

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
    msg.setTimeStamp(0.37058835894);
    msg.setSource(394U);
    msg.setSourceEntity(73U);
    msg.setDestination(57659U);
    msg.setDestinationEntity(218U);
    msg.name.assign("WPJDXRFWATBMBFLQJLELEDHBJIQNTZEJWASQYCRRCSXCOPVTTMPRSIUERSKGHWSKOIYGKARNEHMVMCCEKATHLRGNYUBGYUPXUBUXIXAXEHFCQUDEODIILSBZOKPJDPZUVNFGJRRWQDLWSQASCQHVZVFYGFIDUCIOOYMWJYZNNMTGELZZPXKHRVHWGEFJFYYNAKLWGKKCNAJFOWVLOVDCUDSPMXTGAIMQBTFJATBBOXLVSPZHMYZTQZNXBNQ");

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
    msg.setTimeStamp(0.238545521633);
    msg.setSource(29246U);
    msg.setSourceEntity(216U);
    msg.setDestination(26583U);
    msg.setDestinationEntity(167U);
    msg.name.assign("LIRMYDCXOODTUWBIEOAFEVQWWOCZGMPFXZJQVTCNYBLQWHXVYUM");

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
    msg.setTimeStamp(0.209331903432);
    msg.setSource(20177U);
    msg.setSourceEntity(110U);
    msg.setDestination(61270U);
    msg.setDestinationEntity(244U);
    msg.type = 89U;
    msg.error.assign("HKRBVOATZONLCRAUSXFNBXWUVZHEENPBUPBGXDZHKHLUAGIBHIRKONJADP");

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
    msg.setTimeStamp(0.376438033724);
    msg.setSource(19198U);
    msg.setSourceEntity(223U);
    msg.setDestination(28192U);
    msg.setDestinationEntity(127U);
    msg.type = 234U;
    msg.error.assign("XVQYBKFUJHYALGXGOHIDJLPJNTYSLEBSRNEFWWXTCUMMUCKZSPZFVWRZMLPGBVVXCAHEDBQNGNDMWPCNIMPMUHVCDMYEORPQZQVZFNXKTESBIHRBZSUYHJUHFDTNIBCAYGVTQKYEMZRSEDWUUREZNIQOKLRKYRJATZTXILXDLXWNJZKXOOVARYTGPHGKXFIWLAGDSCJLTOBE");

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
    msg.setTimeStamp(0.253871495837);
    msg.setSource(21115U);
    msg.setSourceEntity(143U);
    msg.setDestination(58212U);
    msg.setDestinationEntity(105U);
    msg.type = 200U;
    msg.error.assign("BLCWEFUEHIPRGXQEPMSZNXSS");

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
    msg.setTimeStamp(0.630976811281);
    msg.setSource(37859U);
    msg.setSourceEntity(25U);
    msg.setDestination(1534U);
    msg.setDestinationEntity(117U);
    msg.seq = 40870U;
    msg.sys_dst.assign("JBTTEIDAFRNLTGRGCHEAZLJAKGZIDTNIOVNSNHITHZQIMIEWCWPLXDPDVUWFVKYQRRBROGWHRJAQYCZPJFMBLQDFFGSUXTDWO");
    msg.flags = 156U;
    const char tmp_msg_0[] = {49, 38, -32, 28, -45, -57, 119, 33, -110, -72, -45, 33, -16, -114, 79, -85, -44, 126, 123, 73, -57, -14, -112, 42, -40, 22, -24, 28, 89, 71, -75, 31, 95, -63, -89, -27, -88, 19, -119, 34, 116, -31, -92, -88, -32, 57, -57, -56, 83, -98, -1, -28, -33, -124, -23, 82, 66, 27, 82, -91, 52, 114, 7, 40, -18, -124, 122, 9, -126, 39, 86, 106, 35, -93, -23, -104, -78, 3, -30, -38, -34, 24, -106, 40, -85, -78, 33, -25, -37, -27, -37, 51, 112, -85, 107, 122, 65, -64, -69, 78, 27, 113, -49, 30, -37, -50, 84, 75, 75, 46, 40, 63, 18, -61, -102, 23, 6, 45, 95, 122, -66, -65, -20, 64, 46, 23, 121, 19, 40, -8, 98, 66, 105, 54, 38, 75, -50, -20, 74, -60, -32, 104, 121, 74, 102, 29, 115, -17, 82, -95, 90, 10, -124, 50, -37, 122, -50, -55, 116, 116, -79, -63, -107, 12, 30, 34, -63, -115, -75, -98, -17, -74, -10, 35, 116, -89, -19, -65, 119, -101, 71, 27, 102, 86, 98, -58, 92, -41, 79, -33, -14, 41, 55, 35, -49, -35, -87, 52, -76};
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
    msg.setTimeStamp(0.725336470113);
    msg.setSource(23146U);
    msg.setSourceEntity(194U);
    msg.setDestination(8741U);
    msg.setDestinationEntity(240U);
    msg.seq = 5504U;
    msg.sys_dst.assign("HZOEWBOFVTJFAFBOMDGBSONZIHYPWXJEWVQSBSKYNKFROTZCITLXDJVZHHYXIKEQPQJBNTHLGZFBHEYAYRFRTLEBNMMBQGLOKTKYEZPGIMYNHDAFLURNDUUROOTSDCMJLIMCXNQGKZWZJPSQJIMGEUCBYRDWQFCCNLPIDSOCHUKVVQDSGDSRPWWMXMJXVFIAORY");
    msg.flags = 108U;
    const char tmp_msg_0[] = {-120, 79, -108, 52, 62, -128, -30, 64, -68, -94, -6, -107, 100, 110, -9, -55, 37, 104, 99, 124, 66, -87, 3, -125, 121, 47, -12, -12, 122, 59, -43, -119, -119, -48, 3, -56, -44, -57, 101, 59, 26, 17, -117, -23, 67, -37, 23, 58, -42, 55, 78, -7, -75, 24, 51, 86, 119, -1, -26, -85, -76, 80, 89, 93, -121, 118, -20, 15, -92, 105, -99, -56, -106, 84, 79, 36, -60, -65, 62, 82, 80, 21, 86, 89, 34, 21, -21, 109, 87, -47, -26, -48, -24, -88, 62, 77, -11, 4, -34, 17, 92, 31, 90, -77, 52, -13, 6, 83, 16, -111, -106, -104, -72, 58, -43, -86, -3, -45, 68, 40, 25, 34, 41, -128, 76, -112, -25, -13, -95, 11, 55, -11, -71, -20, -50};
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
    msg.setTimeStamp(0.169648926301);
    msg.setSource(31788U);
    msg.setSourceEntity(23U);
    msg.setDestination(32157U);
    msg.setDestinationEntity(8U);
    msg.seq = 20938U;
    msg.sys_dst.assign("XFQCJKBHOIWWLXKBMHUXINOALRDFGSECIGYGXRLLFBHNROYWIVCZPOZXNRFVVRJMWXEJPLCGKHPEQYQCUTXKATNRJJFGVETMS");
    msg.flags = 220U;
    const char tmp_msg_0[] = {15, -117, 11, -71, -94, 0, -31, 104, -73, 120, 51, 102, -118, 47, 79, 95, 106, -110, -25, 51, -60, 114, 90, -42, 89, -82, -45, -107, 49, -79, -53, -10, 51, 79, 53, 108, 108, -102, 102, -69, -16, 108, -31, -30, 112, -88, 122, -27, 21, -57, -21, -32, -99, 20, -69, 103, 106, 94, 68, -103, 112, -35, 2, 4, -11, -42, 28, -37, -121, 74, 97, 115, -90, -2, -41, 42, 22, -100, -74, -14, -116, -12, 38, 34, -86, -82, -93, 3, 48, -75, 102, -14, -71, -115, 52, 56, 6, -63, -8, -78, 47, 118, -5, -43, -52, -102, -93, 111, 114, 3, 63, -101, 71, -20, -115, 93, -16, 62, 55, 51, 10, 122, 27, -78, 58, 42, 66, -8, 56, -89, -44, -49, -91, -27, 79, 53, -108, -19, 106, 59, 33, -119, -76, 85, -20, -55, -120, -66, -27, 93, -6, 57, -7, -70, -61, 16, 38, 102, 101, 43, 0, 122, 92, -46, -87, 114, 101, 110, -122, 104, 69, 53, -95, -25, -37, -65, -17, -64, 124, -11, -57, -122, -36, -112, -8, 119, -41, -17, 9, 109, -34, -123};
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
    msg.setTimeStamp(0.0653305779773);
    msg.setSource(42200U);
    msg.setSourceEntity(254U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(110U);
    msg.sys_src.assign("PEDWLAMWSTXVVHEREQWRFCGBWPSBERABOYFMOPVKGUOTXAPQCFIIZZVYOFBEUDRAMUMBYCOKLCOZHKCHZQENPPXM");
    msg.sys_dst.assign("RZOKFEWAOIRHDLSIKIQKJJVHJRDNVDQKDYSLCGXCJUDZSLYEPAYXYOMWWLTXTRBGVYRAMEDKQYMRXKEYYLBHFEQQSTLWPENWZACBNRVXKSBYEFINAVHXKCHNUWPRILHOPPCBKGXIUMOQNJSYQTUOTFBIJRAMZGMZFZNWHGZQWAXISIOCOGHFHLDTFVXVB");
    msg.flags = 187U;
    const char tmp_msg_0[] = {-87, 122, 40, -85, 57, -4, 126, 49, 24, -55, 81, -19, -89, 77, 49, 74, 0, 94, -72, 125, -82, -102, -7, -71, -97, -60, 17, 4, -40, -97, -47, 68, 108, -106, 76, -92, 54, 46, -101, 74, 12, 16, -4, -88, 67, 34, 29, -66, -59, 84, -93, 42, 64, 66, -70, -44, 74, -104, -116, -79, 106, 23, -17, 20, -117, 14, 31, -20, 79, -112, 75, -9, 3, 51, -29, 20, -25, -96, -49, 1, -102, -69, -121, -27, 82, -76, 2, -80, 59, 84, -32, -78, 35, -71, -40, 85, 19, 71, 122, -99, -88, 59, 63, 72, -51, -107, 126, 120, 14, 44, -32, 93, 86, 1, 105, -80, 27, -39, -97, -61, -122, 22, -36, 26, 82, 105, 42, -84, -110, 46, -30, -29, -101, -78, 32, 8, 22, 124, -18, 49, -98, 102, -69, 7, -99, -96, -3, 54, -49, -1, -50, 117, 35, 11, 125, -75, 74, -110, 68, 63, -91, -54, 54, 29, -104, 112, -77, 72, -99, 94, -53, 109, 8, -50, -10, 58, 116, 117, 84, -58, -100, -37, 47, -88, -14, 119, -108, 91, 87, 58, -108, 84, -21, 6, 28, -107, -118};
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
    msg.setTimeStamp(0.0051866188393);
    msg.setSource(51876U);
    msg.setSourceEntity(40U);
    msg.setDestination(21878U);
    msg.setDestinationEntity(173U);
    msg.sys_src.assign("BNOEJKQVOXYRTYBZPWCJOCRCCMTBQPPFHHLLAZPHCFVTAAMBYYDZHOWTKDAYEHVYBIBUQSLPCENRWLYMEDCUKMORTNJCDQSGTFEVUXEEYIQSMJIVLEDIGKSLXMWNPXGVUGSXRGIHJVQRFHSXZWQNNBJKJJTTXRAGNZFWHUAMXLNMNPRTDLNILSJADKOWKHQXGPDIFVSWQEJOGXMMOFDWGURSKDZVVAWZTAUURLFFCUCOEZGIOZAKU");
    msg.sys_dst.assign("MBSLENQLFWWIBXTBWUGDKLREAZFORSNWHYKJRFOVLJYKGUPOYDBQDDRUMNIVTBNVXNYZYSYUQPDVQPACATKQWMEIYHKOXRCDEMXKUMOGQVHZMXOOPXZXBHHOQSVGAIJQQNVPHZSTNMTZRLTHSDFARJPFCFMTHCJIENACGGGXRDAECYOFCBDMLTHJSLDG");
    msg.flags = 76U;
    const char tmp_msg_0[] = {47, 68, 82, -52, 104, 83, -67, 7, 59, -85, 110, -13, -8, 55, -7, -123, 74, -51, -8, -119, -126, 126, -58, -66, -28, -26, -79, -117, 60, 65, 121, 90, 58, -51, 81, -42, -3, 19, -45, -121, 126, 95, -34, -75, -30, 47, 107, 126, 125, 110, -61, -14, -112, -9, 51, 94, 92, -25, 92, -122, -13, 114, -83, -119, -82, 15, -120, -29, 14, 7, 105, 4, -58, 9, 122, -99, 103, 106, 37, -56, -26, -48, 42, 39, -126, -116, 22, 79, -15, -116, -84, -96, 18, 89, 108, -116, -79, -114, 68, -102, -1, -40, -50, -68, 91, 29, -96, 79, -69, -66, 114, 13, -113, 99, -15, 22, -58, -116, 99, -35};
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
    msg.setTimeStamp(0.61931526147);
    msg.setSource(22146U);
    msg.setSourceEntity(111U);
    msg.setDestination(50810U);
    msg.setDestinationEntity(176U);
    msg.sys_src.assign("JRBUPDRZTBALNEKKHFIJQQKGQQRUEPHLSBLUATPOLWGWSCMWSAKOVMPHBVJXOXJEFCSMCAGJRWVGBIMLTKIV");
    msg.sys_dst.assign("CBLKGZOHUXFFTERDPEJRYUHCUQNALDNKPVSINAYVHPFJKYZNMQMHVUPQFLONFGIJFQULKXLIICDWMQBVNWCJFQZDIBOUAGSGSMDNERXMPCSNWFREGHSPYSIRIIBMENCDVLJCTYKWFTRVTOAPUGWTRBYPOZEMZBZVRAXSZBCYGTJBGTPQQTZWWHSHGOCJQRAXSYCAKKLKTXXGBUJEWAAOFOADIM");
    msg.flags = 210U;
    const char tmp_msg_0[] = {-55, 103, -71, 6, -71, 97, -102, 123, -121, 32, 90, -3, -112, -80, -56, -87, -10, 94, 88, -76, -37, -1, 27, 8, 65, -20, 99, -44, -19, 100, -78, -55, 114, -75, 95, -3, -79, 37, 62, 62, 122, -74, 118, 55, -50, -51, 39, -64, 73, -93, -63, -74, 59, 0, 44, 125, 34, 20, 20, -114, -5, 64, 97, 85, -55, -88, -106, 107, 125, -101, -47, -22, -111, -64, -78, -65, 71, 119, 123, 34, -124, 44, -119, -45, -71, -18, -51, -12, 48, 10, 101, 93, -23, 54, 116, -73, 5, 88, 86, -72, 34, -100, 21, -16, 85, -102, 76, -26, -52, -36, 38, 56, 11, -106, 83, -9, -9, -69, 4, 13, 98, 30, -40, 52};
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
    msg.setTimeStamp(0.286746289215);
    msg.setSource(61913U);
    msg.setSourceEntity(239U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(138U);
    msg.seq = 13926U;
    msg.value = 246U;
    msg.error.assign("IGYYWIGGJPPCQEZJTIDYDDQHLORKRAVFQFKMARWJBZQGNEXMYXCCQMHNWULPWLOODBUGLZVXQMRMNZMBKVAPLWQVWNFSSUWSUUVKBJBUHMOMSFFHBJBKJOJCQACICGYTTUGRMWLMYFNIIAGPNDSROAAZHXGIDFVDTITCFRSUZPBKRHPFHTHYGXATIOZATVZULLETNEVRCSFJQS");

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
    msg.setTimeStamp(0.0764512603406);
    msg.setSource(13925U);
    msg.setSourceEntity(4U);
    msg.setDestination(17765U);
    msg.setDestinationEntity(245U);
    msg.seq = 58687U;
    msg.value = 136U;
    msg.error.assign("TJSQCUUHTOVXEIHPWNQIWABUHFYVAPDLPQEGXZPMBKCYHZWJLAWQGWZXYKKOWHYDAZUQHDRKJWMFRAIRSQPNGFSMKRXPXEDTVQBGERTVFXULUWZNRIJGIOLUNXVXCFHSZEYNBCCTLTAYGDHIEBCODPZGJFYOZNLCJCMJYEQGAVVJNRIMGNPUBYNTEPOMKEWAAR");

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
    msg.setTimeStamp(0.804441717826);
    msg.setSource(2358U);
    msg.setSourceEntity(39U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(206U);
    msg.seq = 26414U;
    msg.value = 159U;
    msg.error.assign("JROMIYWUZJBGVFMCLTKRTLYBBVKDOEYTSHOEVIFZIFWBEULQPQAABXNJZDOZPFKXXSOEFDONJNESCZHNWPNLXNBPKHEBCAEMFXHRGEIFWDUUNQXJSPAMMCFGUUUFPTVYTSICHGMKKLAEZMYPTBVHBRQRR");

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
    msg.setTimeStamp(0.715616690644);
    msg.setSource(33487U);
    msg.setSourceEntity(210U);
    msg.setDestination(46250U);
    msg.setDestinationEntity(61U);
    msg.seq = 35507U;
    msg.sys.assign("AXENJEKYOWVDZLQJPVOUEIRPRRJCFDBBSINQFWMOHYEPOWN");
    msg.value = 0.71142728599;

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
    msg.setTimeStamp(0.364172904685);
    msg.setSource(6261U);
    msg.setSourceEntity(13U);
    msg.setDestination(6099U);
    msg.setDestinationEntity(221U);
    msg.seq = 4618U;
    msg.sys.assign("ADMXVFMYKJVYDMJNVAAWFQQAKVVGTJTBBSUSBFDAHYFXRUFYPMJOTZZKAQCLBNGRQKYYZGYHXAQEIBIHWRDHCRN");
    msg.value = 0.742302720442;

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
    msg.setTimeStamp(0.618160719918);
    msg.setSource(48618U);
    msg.setSourceEntity(227U);
    msg.setDestination(7769U);
    msg.setDestinationEntity(66U);
    msg.seq = 51890U;
    msg.sys.assign("AWVQIZSCUOBLXIZ");
    msg.value = 0.0736933174671;

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
    msg.setTimeStamp(0.081617653744);
    msg.setSource(54397U);
    msg.setSourceEntity(58U);
    msg.setDestination(36727U);
    msg.setDestinationEntity(20U);
    msg.action = 144U;
    msg.longain = 0.139042551932;
    msg.latgain = 0.107566937942;
    msg.bondthick = 2851211177U;
    msg.leadgain = 0.50967803522;
    msg.deconflgain = 0.355000718423;

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
    msg.setTimeStamp(0.127170487033);
    msg.setSource(15922U);
    msg.setSourceEntity(17U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(113U);
    msg.action = 195U;
    msg.longain = 0.721359221985;
    msg.latgain = 0.894513428791;
    msg.bondthick = 3639663555U;
    msg.leadgain = 0.551133083437;
    msg.deconflgain = 0.196591808971;

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
    msg.setTimeStamp(0.525234889416);
    msg.setSource(12597U);
    msg.setSourceEntity(51U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(65U);
    msg.action = 224U;
    msg.longain = 0.604638283682;
    msg.latgain = 0.0993316296788;
    msg.bondthick = 1123846516U;
    msg.leadgain = 0.752782931045;
    msg.deconflgain = 0.916453447842;

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
    msg.setTimeStamp(0.344819446998);
    msg.setSource(41201U);
    msg.setSourceEntity(62U);
    msg.setDestination(40172U);
    msg.setDestinationEntity(68U);
    msg.err_mean = 0.236155905595;
    msg.dist_min_abs = 0.978842776967;
    msg.dist_min_mean = 0.443598161042;

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
    msg.setTimeStamp(0.0405460787791);
    msg.setSource(44980U);
    msg.setSourceEntity(49U);
    msg.setDestination(47015U);
    msg.setDestinationEntity(118U);
    msg.err_mean = 0.15415467619;
    msg.dist_min_abs = 0.41907026422;
    msg.dist_min_mean = 0.944176448788;

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
    msg.setTimeStamp(0.00782162634077);
    msg.setSource(60322U);
    msg.setSourceEntity(170U);
    msg.setDestination(49599U);
    msg.setDestinationEntity(244U);
    msg.err_mean = 0.229909473501;
    msg.dist_min_abs = 0.687247514786;
    msg.dist_min_mean = 0.103671663994;

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
    msg.setTimeStamp(0.480202561223);
    msg.setSource(49307U);
    msg.setSourceEntity(55U);
    msg.setDestination(18022U);
    msg.setDestinationEntity(92U);
    msg.action = 88U;
    msg.lon_gain = 0.078979650039;
    msg.lat_gain = 0.327921990412;
    msg.bond_thick = 0.471926165088;
    msg.lead_gain = 0.564536933043;
    msg.deconfl_gain = 0.47472549942;
    msg.accel_switch_gain = 0.166406629932;
    msg.safe_dist = 0.448748778504;
    msg.deconflict_offset = 0.71018726915;
    msg.accel_safe_margin = 0.6264266046;
    msg.accel_lim_x = 0.520079784121;

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
    msg.setTimeStamp(0.278397455708);
    msg.setSource(64816U);
    msg.setSourceEntity(159U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(5U);
    msg.action = 78U;
    msg.lon_gain = 0.502796030268;
    msg.lat_gain = 0.866435885632;
    msg.bond_thick = 0.313744908191;
    msg.lead_gain = 0.12456950513;
    msg.deconfl_gain = 0.366806021567;
    msg.accel_switch_gain = 0.0967360730052;
    msg.safe_dist = 0.0742088147058;
    msg.deconflict_offset = 0.473888131765;
    msg.accel_safe_margin = 0.506538656601;
    msg.accel_lim_x = 0.768013514166;

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
    msg.setTimeStamp(0.457806283084);
    msg.setSource(47394U);
    msg.setSourceEntity(101U);
    msg.setDestination(54914U);
    msg.setDestinationEntity(239U);
    msg.action = 83U;
    msg.lon_gain = 0.0991605029036;
    msg.lat_gain = 0.918251190375;
    msg.bond_thick = 0.759863988212;
    msg.lead_gain = 0.563369804432;
    msg.deconfl_gain = 0.560051674633;
    msg.accel_switch_gain = 0.948107011396;
    msg.safe_dist = 0.881771434452;
    msg.deconflict_offset = 0.341344416108;
    msg.accel_safe_margin = 0.02474963114;
    msg.accel_lim_x = 0.208752797649;

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
    msg.setTimeStamp(0.0472878389048);
    msg.setSource(54952U);
    msg.setSourceEntity(131U);
    msg.setDestination(2843U);
    msg.setDestinationEntity(191U);
    msg.type = 155U;
    msg.op = 246U;
    msg.err_mean = 0.336583238438;
    msg.dist_min_abs = 0.715847664332;
    msg.dist_min_mean = 0.153668090145;
    msg.roll_rate_mean = 0.394717393022;
    msg.time = 0.326443375699;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 100U;
    tmp_msg_0.lon_gain = 0.244993407001;
    tmp_msg_0.lat_gain = 0.791245582116;
    tmp_msg_0.bond_thick = 0.00285290248304;
    tmp_msg_0.lead_gain = 0.357698677029;
    tmp_msg_0.deconfl_gain = 0.0692118272895;
    tmp_msg_0.accel_switch_gain = 0.0166920540215;
    tmp_msg_0.safe_dist = 0.921361396483;
    tmp_msg_0.deconflict_offset = 0.178883036824;
    tmp_msg_0.accel_safe_margin = 0.387639263735;
    tmp_msg_0.accel_lim_x = 0.303610267655;
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
    msg.setTimeStamp(0.413070929732);
    msg.setSource(32259U);
    msg.setSourceEntity(113U);
    msg.setDestination(12885U);
    msg.setDestinationEntity(200U);
    msg.type = 121U;
    msg.op = 134U;
    msg.err_mean = 0.20351576611;
    msg.dist_min_abs = 0.497639587944;
    msg.dist_min_mean = 0.27255122314;
    msg.roll_rate_mean = 0.769314438804;
    msg.time = 0.949465119835;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 244U;
    tmp_msg_0.lon_gain = 0.0769756912522;
    tmp_msg_0.lat_gain = 0.200569448679;
    tmp_msg_0.bond_thick = 0.318382430592;
    tmp_msg_0.lead_gain = 0.389027304915;
    tmp_msg_0.deconfl_gain = 0.342307027507;
    tmp_msg_0.accel_switch_gain = 0.320299581351;
    tmp_msg_0.safe_dist = 0.436582748782;
    tmp_msg_0.deconflict_offset = 0.279769374141;
    tmp_msg_0.accel_safe_margin = 0.454011196051;
    tmp_msg_0.accel_lim_x = 0.313439788356;
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
    msg.setTimeStamp(0.461343112013);
    msg.setSource(9177U);
    msg.setSourceEntity(208U);
    msg.setDestination(58984U);
    msg.setDestinationEntity(113U);
    msg.type = 49U;
    msg.op = 125U;
    msg.err_mean = 0.767811463742;
    msg.dist_min_abs = 0.651872337789;
    msg.dist_min_mean = 0.655282311819;
    msg.roll_rate_mean = 0.297182820312;
    msg.time = 0.985428349245;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 237U;
    tmp_msg_0.lon_gain = 0.839328792344;
    tmp_msg_0.lat_gain = 0.744999589;
    tmp_msg_0.bond_thick = 0.250367714806;
    tmp_msg_0.lead_gain = 0.990225523748;
    tmp_msg_0.deconfl_gain = 0.707677267331;
    tmp_msg_0.accel_switch_gain = 0.512491329658;
    tmp_msg_0.safe_dist = 0.313925275638;
    tmp_msg_0.deconflict_offset = 0.761960181394;
    tmp_msg_0.accel_safe_margin = 0.110279806366;
    tmp_msg_0.accel_lim_x = 0.937752874993;
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
    msg.setTimeStamp(0.82911472048);
    msg.setSource(56567U);
    msg.setSourceEntity(155U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.587050930819;
    msg.lon = 0.20330325533;
    msg.eta = 1911733165U;
    msg.duration = 27409U;

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
    msg.setTimeStamp(0.167586215392);
    msg.setSource(61300U);
    msg.setSourceEntity(49U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.905266785535;
    msg.lon = 0.321775497696;
    msg.eta = 3450562569U;
    msg.duration = 9515U;

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
    msg.setTimeStamp(0.373016720453);
    msg.setSource(15546U);
    msg.setSourceEntity(40U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.776136428777;
    msg.lon = 0.417973543681;
    msg.eta = 3878428931U;
    msg.duration = 38087U;

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
    msg.setTimeStamp(0.722362120995);
    msg.setSource(63342U);
    msg.setSourceEntity(227U);
    msg.setDestination(37783U);
    msg.setDestinationEntity(202U);
    msg.plan_id = 12805U;

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
    msg.setTimeStamp(0.0961356871737);
    msg.setSource(24287U);
    msg.setSourceEntity(82U);
    msg.setDestination(14615U);
    msg.setDestinationEntity(238U);
    msg.plan_id = 41251U;

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
    msg.setTimeStamp(0.289403282453);
    msg.setSource(42276U);
    msg.setSourceEntity(24U);
    msg.setDestination(27389U);
    msg.setDestinationEntity(162U);
    msg.plan_id = 1268U;

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
    msg.setTimeStamp(0.647546532477);
    msg.setSource(14481U);
    msg.setSourceEntity(94U);
    msg.setDestination(11932U);
    msg.setDestinationEntity(29U);
    msg.type = 17U;
    msg.command = 169U;
    msg.settings.assign("QBSVOVSKZVLZMNBSWFODOPNWAMIRSCSOTRXWVQCLQWZDZXREPJRYIPWYODDTXPLWMDAX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 39958U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.955801658355;
    tmp_tmp_msg_0_0.lon = 0.0988201216845;
    tmp_tmp_msg_0_0.eta = 1244468013U;
    tmp_tmp_msg_0_0.duration = 26933U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KBNDUXIOHVGBY");

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
    msg.setTimeStamp(0.678147757033);
    msg.setSource(58782U);
    msg.setSourceEntity(179U);
    msg.setDestination(28822U);
    msg.setDestinationEntity(30U);
    msg.type = 68U;
    msg.command = 104U;
    msg.settings.assign("THVGEYMRPUTSAWYYJVUHOZRLBNNRGWQWXPBDZDIHGZOUKRCZVXOXNIBJGCIAETBMTSOGRPMJONPATTSPHDBIZYMVHGVYPJWVDMDKSCHIMKZXJKQKSCPJLVMDGEFRUGTIVRNYDQQBLEUXAFBBRFMKACWQXLPKXKEGRJSGASZIMEFCYIWUTUFYDLZYQFCAJUSOXUECOQZHWELLNFAHYFNHLLPCNQNHOWEXSXBROJJKMWCVWTADLASQI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53259U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OQQFBIGOWSXAPBCMNXYEGHUGKZDBZYZMXNJPWENMZEDAHTBGIIXLAVPFHMVITZFETPLCDNJQKAQWDLZCU");

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
    msg.setTimeStamp(0.147362978566);
    msg.setSource(6218U);
    msg.setSourceEntity(154U);
    msg.setDestination(31873U);
    msg.setDestinationEntity(241U);
    msg.type = 95U;
    msg.command = 170U;
    msg.settings.assign("GJYURXJWFCOYBCZZCYPRIMLEGWKVRKVMSZSWXSGILUXVANCA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25487U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.698263333058;
    tmp_tmp_msg_0_0.lon = 0.296170114121;
    tmp_tmp_msg_0_0.eta = 220066080U;
    tmp_tmp_msg_0_0.duration = 41981U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DFXKQGPDIPPTXDXZDTMXHDENOJBGFUARISBRMSZUHSHBYIBCFKRYEOEWTFUEIVLFKZXUNCVLV");

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
    msg.setTimeStamp(0.012048570238);
    msg.setSource(35200U);
    msg.setSourceEntity(64U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(44U);
    msg.state = 111U;
    msg.plan_id = 26895U;
    msg.wpt_id = 48U;
    msg.settings_chk = 12178U;

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
    msg.setTimeStamp(0.781552349693);
    msg.setSource(28727U);
    msg.setSourceEntity(152U);
    msg.setDestination(30956U);
    msg.setDestinationEntity(127U);
    msg.state = 44U;
    msg.plan_id = 45453U;
    msg.wpt_id = 98U;
    msg.settings_chk = 24254U;

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
    msg.setTimeStamp(0.584946154677);
    msg.setSource(33351U);
    msg.setSourceEntity(57U);
    msg.setDestination(22530U);
    msg.setDestinationEntity(123U);
    msg.state = 33U;
    msg.plan_id = 7205U;
    msg.wpt_id = 222U;
    msg.settings_chk = 61396U;

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
    msg.setTimeStamp(0.906646598118);
    msg.setSource(36185U);
    msg.setSourceEntity(71U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(246U);
    msg.uid = 225U;
    msg.frag_number = 181U;
    msg.num_frags = 91U;
    const char tmp_msg_0[] = {35, 4, 5, 99, 85, -101, 40, -66, -99, 94, 79, 25, 47, -80, -122, -15, -45, 84, -109};
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
    msg.setTimeStamp(0.92336397741);
    msg.setSource(49340U);
    msg.setSourceEntity(103U);
    msg.setDestination(22005U);
    msg.setDestinationEntity(226U);
    msg.uid = 24U;
    msg.frag_number = 13U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {107, 35, 44, -25, -7, 73, 22, 69, -44, -34, 122, 19, -59, 93, -3, -16, -128, 41, 65, 25, 66, -77, 56, -108, -4, 75, 107, 113, -48, -56, -55, -3, 45, 69, -97, 99, -78, 9, -101, 105};
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
    msg.setTimeStamp(0.902820514748);
    msg.setSource(17691U);
    msg.setSourceEntity(10U);
    msg.setDestination(23986U);
    msg.setDestinationEntity(197U);
    msg.uid = 222U;
    msg.frag_number = 94U;
    msg.num_frags = 237U;
    const char tmp_msg_0[] = {-38, 12, 30, -11, 119, -65, 83, -103, 48, -6, -106, -46, 92, -41, -11, -89, 45, 45, 57, -45, -115, -117, -47, -7, 7, -117, -92, -104, 19, -46, 97, 60, -110, -64, -41};
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
    msg.setTimeStamp(0.636918387748);
    msg.setSource(10733U);
    msg.setSourceEntity(207U);
    msg.setDestination(28943U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("MEMHQDMOUZEEPUOYBSCMZKALCIACFUTFOVEGESVYMLRZGVPTRAVKRICHTAPLCTBWPBLALOOCGLEIMCLCGSHPNWKKWTMTJLRJEXQFXQNTAOYDWLGIOQHFXQCDSRYWJPUEVJRCNDPLQUTUUDMDEZJSAZSWGNSUGGYBIHMFGYNYIKZJPD");
    const char tmp_msg_0[] = {125, -103, 28, -51, -29, 73, 51, -101, 26, -28, -70, -63, 23, 17, -113, -97, -54, 113, 30, 104, -23, -50, -36, 73, -79, 24, -49, 81, 30, -35, -110, -18, -37, -58, -56, -86, 101, -27, 83, -25, -37, -42, -71, 37, -1, 103, -118, 108, -103, -38, -115, -2, -78, -35, -15, -12, 16, 116, 89, -23, -45, 68, 103, -111, 108, 30, -1, 52, 84, 27, 48, 42, -105, -12, 52, 34, -120, 10, -52, 66, 53, 123, 25, 47, 63, -124, -34, 75, 59, -47, 75, -47, 77, -114, 52, 69, 81, -56, -29, 46, -76, -11, -37, 51, 108, 6, 6, -41, -105, -30, 82, -78, 120, -14, 25, -56, 102, -55, 84, -18, 106, 55, 55, 76, -36, -44, -29, -27, -15, -78, 52, -127, -51, -59, -68, -24, 41, 110, 90, -56, 124, 21, -41, 36, 103, -16, -78, -37, -122, -50, -71, 109, 12, 19, 4, 61, 109, -116, 78, 80, 83, 124, 87, 0, 17, 11, -12, 72, 3, 74, -114, -118, 64, 41, 23, -49, 85, -101, 90, -108, -123, -123, -122, 75, -6, 123, -81, -53, 78, 88, 47, 74, -84, -96, 2, -106, 36, 74, -85, 6, 105, 107, 111, 100, -46, 39, -90, -30, 120, -91, -122, 7, -115, -115, 32, 93, 58, 64, 110, -126, -59, 92, -61, -33, -66, -102, -12, -17, -21, -121, -77, -105, -21, 57, 29, 12, -10, -57, -103, -121, -19, -114, 59, 1};
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
    msg.setTimeStamp(0.580314421676);
    msg.setSource(47010U);
    msg.setSourceEntity(80U);
    msg.setDestination(22963U);
    msg.setDestinationEntity(60U);
    msg.content_type.assign("CJHTZGZXGMUDNZVGKWXXZAXIYJAOMCBYZTESRIVOQRDNVYPCITPLBVN");
    const char tmp_msg_0[] = {-85, -62, 39, 80, 77, -84, -27, 0, -95, -61, -104, -38, -116, -46, 18, 63, -14, -10, -97, 61, -53, -106, -127, 38, -17, -13};
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
    msg.setTimeStamp(0.671844271395);
    msg.setSource(34204U);
    msg.setSourceEntity(210U);
    msg.setDestination(44185U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("WDVGUILPMAMDXTSOFITETINGKDCFMACCEUHRQJHTSRYIPKJMPGCOTRCHETVLADENDKZBTFHIIMYVOIFPUGEFP");
    const char tmp_msg_0[] = {-41, 65, 7, 30, -69, -13, -11, 71, 7, -28, -26, -81, -86, -83, -103, 53, -119, 70, 116, -88, -70, 75, -16, 13, 124, 103, 29, -32, -103, -116, 48, 40, 41, 115, -6, -79};
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
    msg.setTimeStamp(0.292960974623);
    msg.setSource(25139U);
    msg.setSourceEntity(136U);
    msg.setDestination(26805U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.601851250412);
    msg.setSource(17304U);
    msg.setSourceEntity(20U);
    msg.setDestination(61356U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.0288245689771);
    msg.setSource(4866U);
    msg.setSourceEntity(127U);
    msg.setDestination(22303U);
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
    msg.setTimeStamp(0.572552248894);
    msg.setSource(52880U);
    msg.setSourceEntity(135U);
    msg.setDestination(46857U);
    msg.setDestinationEntity(78U);
    msg.target = 43147U;
    msg.bearing = 0.529180853136;
    msg.elevation = 0.132325582282;

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
    msg.setTimeStamp(0.735954894667);
    msg.setSource(43915U);
    msg.setSourceEntity(43U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(249U);
    msg.target = 20844U;
    msg.bearing = 0.407274247085;
    msg.elevation = 0.617004296236;

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
    msg.setTimeStamp(0.225506316222);
    msg.setSource(60055U);
    msg.setSourceEntity(233U);
    msg.setDestination(42503U);
    msg.setDestinationEntity(2U);
    msg.target = 50846U;
    msg.bearing = 0.581778195577;
    msg.elevation = 0.584620246488;

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
    msg.setTimeStamp(0.740922542664);
    msg.setSource(59631U);
    msg.setSourceEntity(154U);
    msg.setDestination(3185U);
    msg.setDestinationEntity(101U);
    msg.target = 45895U;
    msg.x = 0.256904413558;
    msg.y = 0.260814984294;
    msg.z = 0.130216502425;

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
    msg.setTimeStamp(0.854434377264);
    msg.setSource(39226U);
    msg.setSourceEntity(108U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(169U);
    msg.target = 59414U;
    msg.x = 0.992448916885;
    msg.y = 0.836697543399;
    msg.z = 0.593635879825;

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
    msg.setTimeStamp(0.854816374552);
    msg.setSource(36566U);
    msg.setSourceEntity(28U);
    msg.setDestination(38073U);
    msg.setDestinationEntity(36U);
    msg.target = 6034U;
    msg.x = 0.0439318654281;
    msg.y = 0.371355745574;
    msg.z = 0.797565914412;

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
    msg.setTimeStamp(0.709513593398);
    msg.setSource(45674U);
    msg.setSourceEntity(157U);
    msg.setDestination(21475U);
    msg.setDestinationEntity(188U);
    msg.target = 3354U;
    msg.lat = 0.563471289042;
    msg.lon = 0.955794931291;
    msg.z_units = 228U;
    msg.z = 0.852205906543;

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
    msg.setTimeStamp(0.0364322034931);
    msg.setSource(58459U);
    msg.setSourceEntity(129U);
    msg.setDestination(15410U);
    msg.setDestinationEntity(71U);
    msg.target = 43270U;
    msg.lat = 0.805037230665;
    msg.lon = 0.780470007893;
    msg.z_units = 65U;
    msg.z = 0.97035803711;

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
    msg.setTimeStamp(0.307176074445);
    msg.setSource(41125U);
    msg.setSourceEntity(110U);
    msg.setDestination(4289U);
    msg.setDestinationEntity(226U);
    msg.target = 3768U;
    msg.lat = 0.917334990868;
    msg.lon = 0.577884080886;
    msg.z_units = 33U;
    msg.z = 0.602106515181;

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
    msg.setTimeStamp(0.191300929152);
    msg.setSource(37590U);
    msg.setSourceEntity(184U);
    msg.setDestination(37428U);
    msg.setDestinationEntity(152U);
    msg.locale.assign("DPOQAVBNCSSQOTZJTXNXQRGWFTRTFZUYGSPDIFJLEDRPXSAAOPDZRNBDYKMVBCJTCYFMLJNEMFVYFOXEUWARAYEMMRDGECLBOJQNZCT");
    const char tmp_msg_0[] = {39, -2, 99, 54, 17, 36, 84, 73, 95, 50, 19, -87, 9, 10, -124, 115, 75, -80, 16, -109, 60, 55, 69, 59, -63, -59, 24, 41, 37, -45, -79, 52, -56, -55, 46, -96, 8, 8, 61, 95, -23, -116, -126, -60, 53, -13, 52, -73, 68, -29, 42, 36, 72, 114, 53, 95, 8};
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
    msg.setTimeStamp(0.483790412441);
    msg.setSource(61848U);
    msg.setSourceEntity(45U);
    msg.setDestination(24800U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("WLGBNTJQEAKXKVCXWTHYFGNBOQHJJGOZMXPYOUVZER");
    const char tmp_msg_0[] = {4, -9, 78, 3, -123, 78, 85, 110, -94, -22, 99, -66, 3, 47, -29, 111, -67, 53, -125, -113, 93, 6, -34, -58, -59, -77, 117, -68, 7, -18, 77, 101, -85, 76, 120, 82, -114, 40, -85, 40, -52, -119, -39, 102, 24, -45, -44, 41, 93, 51, -55, 9, 78, -92, 72, 2, 23, 102, 92, 22, -22, -58, -79, 65, 77, 35, 97, -29, -128, -124, 90, 69, -100, 54, 7, -51, -106, 90, 48, 54, -23, -59, 25, -99, -13, 80, -60, 34, 116, 98, 22, -109, -23, -19, -82, -70, 15, 39, -21, -58, 112, 60, -107, -45, 117, -51, 86, 44, -6, 45, 25, -62, 4, 53, -22, -114, 36, -116, -36, -111, 95, 55, -46, -89, 0, -16, 17, 82, 86, 111, -29, -93, 51, 101, 51, 105, 67, 85, -102, 60, -109, 110, -70, 3, -38, 51, 87, 35, 36, 8, -33, -56, 111, 84, -86, -41, 28, -84, 91, -28, -120, -54, -127, -78, -16, 38, 101};
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
    msg.setTimeStamp(0.869081994041);
    msg.setSource(64442U);
    msg.setSourceEntity(69U);
    msg.setDestination(22340U);
    msg.setDestinationEntity(216U);
    msg.locale.assign("OSYWCXDFTTRFVBHKBUQGZUQLLJPLWZVPPFKRWNWYDRMQLOKXEIZWETOHGMEAAIAFAXULBMVYILZJMKXHYUZGTOCQRLSAMLIK");
    const char tmp_msg_0[] = {59, -26, -125, 90, 110, -3, 46, -99, 70, 15, 47, 55, 107, 30, -84, -64, 54, -88, 95, -38, -119, -107, 119, 38, 77, -84, 31, 24, -121, -58, 6, 99, 114, 8, -73, -41, 86, -3, 126, -114, -13, 19, -110, -103, 86, 52, 68, -123, -92, 72, -125, 100, 35, -29, -117, -115, 96, 31, -5, -48, 19, -47, 12, -111, -48, 97, 11, 80, 99, 53, 91, -87, 60, 39, 70, -97, 119, 59, -54, 67, 4, -40, 112, 125, 118, 114, -49, 65, 103, 26, -124, -27, -69, -96, 19, -63, 107, -23, 23, -77, 76, -54, 36, 73, -87, 15, 117, -22, -68, 18, 111, -95, -85, -74, -64, 12, 119, -8, 40, 108, -14, -60, 16, -73, 60, -124, 114, 23, 10, 24, -6, -93, 91, -20, 106, -114, 2, 92, -45, -118, -70, -115, -46, 45, -120, 0, 25, 108, -87, 18, 24, 28, 97, 41, -34, 117, -37, -112, -88, -106, -30, -28, 37, 26, 122, -73, 1, -113, 118, -1, 4, -95, 99, 38, -85, 105, -17, 4, -49, 50, -114, -118, -9, 124, -66, -87, -81, 60, -94, -33, 94, -112, -36, 99, -2, 24, -72, -123, 97, 117, 0, 13, 11, 43, 87, -87, 97, -68, 25, -81, 33, 70, 85, 32, -85, 28, 17, -36, -84, 98, 109, -112, 4, 27, -111, -64, -80, -92, 118, 58, 74, -39, 54, 39, 115, 39, 0, 99, -48, -42};
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
    msg.setTimeStamp(0.525017158504);
    msg.setSource(14752U);
    msg.setSourceEntity(103U);
    msg.setDestination(11858U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.451873720574);
    msg.setSource(7309U);
    msg.setSourceEntity(203U);
    msg.setDestination(12955U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.467310768318);
    msg.setSource(22536U);
    msg.setSourceEntity(238U);
    msg.setDestination(19754U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.357008471218);
    msg.setSource(9671U);
    msg.setSourceEntity(163U);
    msg.setDestination(4164U);
    msg.setDestinationEntity(65U);
    msg.camid = 211U;
    msg.x = 52286U;
    msg.y = 52316U;

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
    msg.setTimeStamp(0.613013628393);
    msg.setSource(23453U);
    msg.setSourceEntity(242U);
    msg.setDestination(40319U);
    msg.setDestinationEntity(8U);
    msg.camid = 6U;
    msg.x = 17849U;
    msg.y = 11278U;

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
    msg.setTimeStamp(0.254558317767);
    msg.setSource(21596U);
    msg.setSourceEntity(13U);
    msg.setDestination(59133U);
    msg.setDestinationEntity(170U);
    msg.camid = 211U;
    msg.x = 718U;
    msg.y = 54899U;

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
    msg.setTimeStamp(0.57005147317);
    msg.setSource(34085U);
    msg.setSourceEntity(96U);
    msg.setDestination(34139U);
    msg.setDestinationEntity(4U);
    msg.camid = 131U;
    msg.x = 34684U;
    msg.y = 41962U;

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
    msg.setTimeStamp(0.694577999797);
    msg.setSource(54076U);
    msg.setSourceEntity(93U);
    msg.setDestination(20891U);
    msg.setDestinationEntity(5U);
    msg.camid = 185U;
    msg.x = 50047U;
    msg.y = 29565U;

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
    msg.setTimeStamp(0.160345860885);
    msg.setSource(34465U);
    msg.setSourceEntity(249U);
    msg.setDestination(35234U);
    msg.setDestinationEntity(178U);
    msg.camid = 90U;
    msg.x = 58468U;
    msg.y = 61470U;

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
    msg.setTimeStamp(0.520404447359);
    msg.setSource(57545U);
    msg.setSourceEntity(91U);
    msg.setDestination(10845U);
    msg.setDestinationEntity(150U);
    msg.tracking = 136U;
    msg.lat = 0.59117126634;
    msg.lon = 0.63944075512;
    msg.x = 0.839127296165;
    msg.y = 0.130501755965;
    msg.z = 0.593181595464;

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
    msg.setTimeStamp(0.0757086258188);
    msg.setSource(49562U);
    msg.setSourceEntity(168U);
    msg.setDestination(49298U);
    msg.setDestinationEntity(148U);
    msg.tracking = 75U;
    msg.lat = 0.761909437498;
    msg.lon = 0.193927104175;
    msg.x = 0.0785803792799;
    msg.y = 0.444738146282;
    msg.z = 0.6324393645;

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
    msg.setTimeStamp(0.289254990039);
    msg.setSource(32976U);
    msg.setSourceEntity(184U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(7U);
    msg.tracking = 138U;
    msg.lat = 0.523596724694;
    msg.lon = 0.408865413747;
    msg.x = 0.713045199914;
    msg.y = 0.780150763138;
    msg.z = 0.468657479977;

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
    msg.setTimeStamp(0.759347732978);
    msg.setSource(8996U);
    msg.setSourceEntity(22U);
    msg.setDestination(64477U);
    msg.setDestinationEntity(143U);
    msg.target.assign("LXIPILRDJYMRJKYUUSUVBLMDHBSVGUJMZTMRIMRPJCBVORKCEJYHHMALGZFTQJUUWDAJLUKELWCCE");
    msg.lbearing = 0.563921799055;
    msg.lelevation = 0.218646828748;
    msg.bearing = 0.0227878928845;
    msg.elevation = 0.147727219036;
    msg.phi = 0.932524560343;
    msg.theta = 0.144564038257;
    msg.psi = 0.790687092421;
    msg.accuracy = 0.564010384205;

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
    msg.setTimeStamp(0.549386636034);
    msg.setSource(61996U);
    msg.setSourceEntity(189U);
    msg.setDestination(61734U);
    msg.setDestinationEntity(159U);
    msg.target.assign("NSGIMIVGAZKVYHMGYBJURMBVMJPVSGFQGLOPRNJLPHPISIDRXYOXKEEZOUECRCTBXICRGWVBQSEBAKOYSEPZHSYDQXKFLCCJVKPXQUQTWDLCTWETAWQLFSUPDBONVJQIWFAILLRSSAJNWOTKMBVUXAZNBLHIPQYOFDAEYZUMCKNOFPR");
    msg.lbearing = 0.15954847002;
    msg.lelevation = 0.109842630777;
    msg.bearing = 0.903967678828;
    msg.elevation = 0.121985216271;
    msg.phi = 0.506390197053;
    msg.theta = 0.336115052457;
    msg.psi = 0.577649441606;
    msg.accuracy = 0.0913097169591;

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
    msg.setTimeStamp(0.37482129898);
    msg.setSource(13204U);
    msg.setSourceEntity(65U);
    msg.setDestination(12566U);
    msg.setDestinationEntity(171U);
    msg.target.assign("UIIGVEBBWDAXLTBCQPLCBWAASOPJVRXMQHNPGTJYBRUTUYOZSKKJZQTARFVLNNUSHWIEMVMCELRXUYIYCZLZYAUVJTCSOFWMTPMIGAKEOSHFWE");
    msg.lbearing = 0.0303948485357;
    msg.lelevation = 0.878225582045;
    msg.bearing = 0.16985796003;
    msg.elevation = 0.65015038037;
    msg.phi = 0.0285536433183;
    msg.theta = 0.259666644799;
    msg.psi = 0.33578012764;
    msg.accuracy = 0.0978710930291;

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
    msg.setTimeStamp(0.110008769506);
    msg.setSource(34356U);
    msg.setSourceEntity(67U);
    msg.setDestination(51702U);
    msg.setDestinationEntity(193U);
    msg.target.assign("XPPKIMBFOSOADSJGS");
    msg.x = 0.287449357475;
    msg.y = 0.372927727511;
    msg.z = 0.310133287937;
    msg.n = 0.238361200796;
    msg.e = 0.993861934748;
    msg.d = 0.527887775129;
    msg.phi = 0.198707326913;
    msg.theta = 0.521623681042;
    msg.psi = 0.510781799832;
    msg.accuracy = 0.508209200458;

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
    msg.setTimeStamp(0.114261317043);
    msg.setSource(41175U);
    msg.setSourceEntity(225U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(50U);
    msg.target.assign("HZBUGQYSGFMGWSLTROTFKCIAMDIFROCLIEGJWEQRPNUYECHKMAOMDZWSXCMZEPLWLKXABWAEYRBFFIPUCYYLQQVOHRBYCESTSMJRPNHOEZZQNJVRZCLIDOQJBVUZKLPKOHXWXXBWXVJABZCRAWMVPKDXRMKAGTG");
    msg.x = 0.658100544899;
    msg.y = 0.518128773677;
    msg.z = 0.706503300441;
    msg.n = 0.558650378661;
    msg.e = 0.922791379749;
    msg.d = 0.576909890709;
    msg.phi = 0.0924227930968;
    msg.theta = 0.523977400561;
    msg.psi = 0.913928902633;
    msg.accuracy = 0.314446211284;

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
    msg.setTimeStamp(0.704688052058);
    msg.setSource(55521U);
    msg.setSourceEntity(178U);
    msg.setDestination(12885U);
    msg.setDestinationEntity(10U);
    msg.target.assign("PMATAXWLXPSKECAANDLCWOOXPDMHEIUVCXBMTSUIICZWINJBUYLWQMHQHYDQCZUSFXROF");
    msg.x = 0.838331283918;
    msg.y = 0.395390192852;
    msg.z = 0.273230787538;
    msg.n = 0.465433072405;
    msg.e = 0.0455689007377;
    msg.d = 0.170375658202;
    msg.phi = 0.818916824376;
    msg.theta = 0.22982479962;
    msg.psi = 0.612277071093;
    msg.accuracy = 0.616592514771;

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
    msg.setTimeStamp(0.62752354195);
    msg.setSource(31113U);
    msg.setSourceEntity(35U);
    msg.setDestination(41083U);
    msg.setDestinationEntity(191U);
    msg.target.assign("KJECALJDEOYSQFSIRNTUOIAWTOFCPVCFSLBMSGGLPMUHKVZQXFPPRJNSXHXDLWRERUAZJUGYRMKPUTFHKMSHWEMZVRLCHYLIFXCGZMFJTYVSFINVANQTGVWQOJWYBUMVKXOBEAGYKYQBVZBHDIRQGGDTHERBZCQTUDSKOQAWDAOGFWQYKLRAELUOQDMINWBNZJZZCTAPDXEKIGCNEFKXUN");
    msg.lat = 0.739663134864;
    msg.lon = 0.38296479295;
    msg.z_units = 85U;
    msg.z = 0.00998592934697;
    msg.accuracy = 0.601808279256;

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
    msg.setTimeStamp(0.806414439204);
    msg.setSource(17277U);
    msg.setSourceEntity(45U);
    msg.setDestination(15851U);
    msg.setDestinationEntity(190U);
    msg.target.assign("SEYCTIPUYAWNLDWENDBRIMFGIBPGCMAPAYIJXLUEWHNKGRGQCXEORTLKCDLPWQXSRTCQOFOIIINEHBSIYXWMBPVWFEHAYGGRNVBWHXJDSLMEDUTDZROCFVCMFTZKVQEJIQKCQTSKKHCONAVUZXNZWDLSYQZUHJSXFWGFAUOBKQWPQUFPSXJLHVAGUFTBTLHJQ");
    msg.lat = 0.0248355647;
    msg.lon = 0.469806485492;
    msg.z_units = 231U;
    msg.z = 0.741274318623;
    msg.accuracy = 0.758711932858;

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
    msg.setTimeStamp(0.126707483396);
    msg.setSource(9996U);
    msg.setSourceEntity(218U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(3U);
    msg.target.assign("WDICMXGPGRFADXIXQOXSNWQZKGXQDHMQLGKCKCQVLBRJRNSDXTEUQRMXOMPJPWAMEIFOLTNPHEIXYHDNHFJLZIJZAWYZVEY");
    msg.lat = 0.52808155314;
    msg.lon = 0.529931017877;
    msg.z_units = 53U;
    msg.z = 0.863487106839;
    msg.accuracy = 0.282052983923;

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
    msg.setTimeStamp(0.0916481173154);
    msg.setSource(34981U);
    msg.setSourceEntity(249U);
    msg.setDestination(25615U);
    msg.setDestinationEntity(184U);
    msg.name.assign("WFVYZTMVEJIV");
    msg.lat = 0.0544076019263;
    msg.lon = 0.395062690894;
    msg.z = 0.0864995008005;
    msg.z_units = 57U;

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
    msg.setTimeStamp(0.871042470568);
    msg.setSource(45431U);
    msg.setSourceEntity(42U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(60U);
    msg.name.assign("FKIRZRICXIXEXTIMSBIPLBTEXWWZXVMZUKQWRQKDVJDFJBMHIQGKNOGRNYTDXPGLVBNREBESCHASCEBTVUGHRMZLHOPTXFGKQHXWFIDPYMOPLFOQJGRZLZSZEUJNUMFNBEIDAWNDUOMTYPGQLHMCXJPOKTGCWABGUYTWSBANSBVRACWOQYNOFHKUQLDKVDGSHRCUKMOSEUTPILXPZS");
    msg.lat = 0.909569025562;
    msg.lon = 0.0652373199716;
    msg.z = 0.0669218311065;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.288425609594);
    msg.setSource(21650U);
    msg.setSourceEntity(49U);
    msg.setDestination(5294U);
    msg.setDestinationEntity(183U);
    msg.name.assign("UCMESOOJRQDFRHQAJUPMFHNMHHWACMZDNSTELFYVNQWAUMAPLZUCGFVRIQUIGDWPSBNXPNQMVETFEEVWFJLWXLKRUBMFNXJFKYXUNWRZTVSCQSXTTXEWTXTZYJTSFYHZAYPRAACPRGGJRXDETKZBDJJECQOLSPSGIWPAOGUKISZODIHPKZDGVQMKCMKXBYCLOHKSZYCIOHLLEGWGVABBGUJTNRXNBDQDPOZLVKA");
    msg.lat = 0.274271653965;
    msg.lon = 0.245348185052;
    msg.z = 0.780352249572;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.820689769892);
    msg.setSource(61115U);
    msg.setSourceEntity(181U);
    msg.setDestination(59085U);
    msg.setDestinationEntity(72U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.232709705773);
    msg.setSource(46851U);
    msg.setSourceEntity(162U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(220U);
    msg.op = 254U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WDPBOZCLKAMPEUXUCNVAFFBQFEGRPYSVVDZLZAKZGXZNPSJGGZJRSXDVKKYWIIOITMZFGOJFNTKROSVVQJSWULSBCKHEACETRSMPQZNKCSDOCYAJKREREQCP");
    tmp_msg_0.lat = 0.0951763735701;
    tmp_msg_0.lon = 0.018633123753;
    tmp_msg_0.z = 0.280623858657;
    tmp_msg_0.z_units = 100U;
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
    msg.setTimeStamp(0.942529163979);
    msg.setSource(39619U);
    msg.setSourceEntity(36U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(248U);
    msg.op = 232U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UBECIOYMWMZEJNRZAHTNKQUIDWYDLMVVDBLDKASWJWEDYNPPXKIGNECHHMRWERUFGNYBGCRIATPOYVWKZVDLDNWCXFJTQBZQTYFOSFVOJGTSOEFTVAEIBBPBROSKTDWMLSHXPPVLBNCQROSSZQUUWRFBEFXOUFNAFUIMVIIJOLLWLJCQELXTNHPKAFQUSVPAJTRMRXJAHHGDPCQZSXTOYKUHQZCCPZCMXGUAYHI");
    tmp_msg_0.lat = 0.929330828711;
    tmp_msg_0.lon = 0.774420741966;
    tmp_msg_0.z = 0.640663203701;
    tmp_msg_0.z_units = 141U;
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
    msg.setTimeStamp(0.0451769780759);
    msg.setSource(11170U);
    msg.setSourceEntity(209U);
    msg.setDestination(58311U);
    msg.setDestinationEntity(11U);
    msg.value = 0.671549230536;
    msg.type = 225U;

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
    msg.setTimeStamp(0.628168310035);
    msg.setSource(47835U);
    msg.setSourceEntity(143U);
    msg.setDestination(11730U);
    msg.setDestinationEntity(131U);
    msg.value = 0.39754352656;
    msg.type = 218U;

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
    msg.setTimeStamp(0.359047022256);
    msg.setSource(54148U);
    msg.setSourceEntity(71U);
    msg.setDestination(31048U);
    msg.setDestinationEntity(100U);
    msg.value = 0.728009584466;
    msg.type = 80U;

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
    msg.setTimeStamp(0.468132571746);
    msg.setSource(42038U);
    msg.setSourceEntity(186U);
    msg.setDestination(52979U);
    msg.setDestinationEntity(109U);
    msg.value = 0.114766985565;

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
    msg.setTimeStamp(0.315277560473);
    msg.setSource(14955U);
    msg.setSourceEntity(38U);
    msg.setDestination(32392U);
    msg.setDestinationEntity(104U);
    msg.value = 0.187418357312;

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
    msg.setTimeStamp(0.790723634739);
    msg.setSource(5663U);
    msg.setSourceEntity(137U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(118U);
    msg.value = 0.00867470591025;

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
    msg.setTimeStamp(0.145975851925);
    msg.setSource(2070U);
    msg.setSourceEntity(198U);
    msg.setDestination(37453U);
    msg.setDestinationEntity(141U);
    msg.timestamp_last_service = 0.0922015958509;
    msg.time_next_service = 0.0903612974312;
    msg.time_motor_next_service = 0.0950773104532;
    msg.time_idle_ground = 0.167937709341;
    msg.time_idle_air = 0.82099190698;
    msg.time_idle_water = 0.943247366908;
    msg.time_idle_underwater = 0.40705234687;
    msg.time_idle_unknown = 0.160646912389;
    msg.time_motor_ground = 0.775223847675;
    msg.time_motor_air = 0.231352710029;
    msg.time_motor_water = 0.868524823133;
    msg.time_motor_underwater = 0.774043353706;
    msg.time_motor_unknown = 0.524415246647;
    msg.rpm_min = -29638;
    msg.rpm_max = -31071;
    msg.depth_max = 0.660685487501;

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
    msg.setTimeStamp(0.416718386392);
    msg.setSource(31526U);
    msg.setSourceEntity(160U);
    msg.setDestination(11736U);
    msg.setDestinationEntity(67U);
    msg.timestamp_last_service = 0.478039035405;
    msg.time_next_service = 0.490913604558;
    msg.time_motor_next_service = 0.780359568388;
    msg.time_idle_ground = 0.192181241686;
    msg.time_idle_air = 0.713546724615;
    msg.time_idle_water = 0.072125551826;
    msg.time_idle_underwater = 0.667080407484;
    msg.time_idle_unknown = 0.205846578521;
    msg.time_motor_ground = 0.507440295995;
    msg.time_motor_air = 0.737893967128;
    msg.time_motor_water = 0.787319560501;
    msg.time_motor_underwater = 0.856946846907;
    msg.time_motor_unknown = 0.272840226057;
    msg.rpm_min = 6801;
    msg.rpm_max = -27863;
    msg.depth_max = 0.379393233708;

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
    msg.setTimeStamp(0.329566852096);
    msg.setSource(32173U);
    msg.setSourceEntity(24U);
    msg.setDestination(30696U);
    msg.setDestinationEntity(79U);
    msg.timestamp_last_service = 0.465571077309;
    msg.time_next_service = 0.647739724772;
    msg.time_motor_next_service = 0.46147851271;
    msg.time_idle_ground = 0.458242200859;
    msg.time_idle_air = 0.266371030576;
    msg.time_idle_water = 0.577445734804;
    msg.time_idle_underwater = 0.859652608574;
    msg.time_idle_unknown = 0.990358096533;
    msg.time_motor_ground = 0.969361047738;
    msg.time_motor_air = 0.127591733065;
    msg.time_motor_water = 0.564798653551;
    msg.time_motor_underwater = 0.461737791237;
    msg.time_motor_unknown = 0.953225340496;
    msg.rpm_min = 32663;
    msg.rpm_max = -26146;
    msg.depth_max = 0.301504456345;

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
    msg.setTimeStamp(0.576252110052);
    msg.setSource(11036U);
    msg.setSourceEntity(12U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(75U);
    msg.severity = 193U;
    msg.text.assign("DWAZSOENZPFBIHSRESWZRFWPFWXXKQUJLSBDXURVLYKHAEOCEQLTIITBHMGPEJLJXODRLSDORN");

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
    msg.setTimeStamp(0.840498950263);
    msg.setSource(56096U);
    msg.setSourceEntity(105U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(2U);
    msg.severity = 155U;
    msg.text.assign("BJASRHYLRCWPKQYJMBEEQJMMRDRFXLIGAISPJLXRKTKFGCM");

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
    msg.setTimeStamp(0.280474442529);
    msg.setSource(7187U);
    msg.setSourceEntity(204U);
    msg.setDestination(38109U);
    msg.setDestinationEntity(162U);
    msg.severity = 220U;
    msg.text.assign("OOMPATRMPGJLDVICANXJAWLXRZHGDFVTDFFWLYGVHNWFFSCEWDUMVHSKQDFMXRBZMNIFOUIKEOBCQNSUVWYZQJXSPFCKKRICMDZPZTNAGJSPBAYHLTHAJJT");

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
    msg.setTimeStamp(0.342086460934);
    msg.setSource(28085U);
    msg.setSourceEntity(230U);
    msg.setDestination(17950U);
    msg.setDestinationEntity(252U);
    msg.channel = 48;
    msg.value = 253530592;
    msg.gain = 207U;

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
    msg.setTimeStamp(0.728354173033);
    msg.setSource(28248U);
    msg.setSourceEntity(188U);
    msg.setDestination(878U);
    msg.setDestinationEntity(193U);
    msg.channel = -44;
    msg.value = 2089743056;
    msg.gain = 126U;

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
    msg.setTimeStamp(0.43995129185);
    msg.setSource(45250U);
    msg.setSourceEntity(145U);
    msg.setDestination(63454U);
    msg.setDestinationEntity(185U);
    msg.channel = 76;
    msg.value = -750713165;
    msg.gain = 179U;

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
    msg.setTimeStamp(0.935003251562);
    msg.setSource(23392U);
    msg.setSourceEntity(77U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(117U);
    msg.ch01 = 0.860025089153;
    msg.ch02 = 0.762914219013;
    msg.ch03 = 0.503597615518;
    msg.ch04 = 0.207639633761;
    msg.ch05 = 0.0824957169556;
    msg.ch06 = 0.694799558894;
    msg.ch07 = 0.373636203489;
    msg.ch08 = 0.2393805239;
    msg.ch09 = 0.66057723099;
    msg.ch10 = 0.0875840432329;
    msg.ch11 = 0.707030572139;
    msg.ch12 = 0.197284850147;
    msg.ch13 = 0.0601118240986;
    msg.ch14 = 0.270094140325;
    msg.ch15 = 0.0102385256583;
    msg.ch16 = 0.212485835813;

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
    msg.setTimeStamp(0.380539346032);
    msg.setSource(908U);
    msg.setSourceEntity(186U);
    msg.setDestination(56139U);
    msg.setDestinationEntity(33U);
    msg.ch01 = 0.215344402828;
    msg.ch02 = 0.764063475327;
    msg.ch03 = 0.0709751473259;
    msg.ch04 = 0.676288866277;
    msg.ch05 = 0.0238478241256;
    msg.ch06 = 0.286137463017;
    msg.ch07 = 0.830715879248;
    msg.ch08 = 0.680728935658;
    msg.ch09 = 0.197185080431;
    msg.ch10 = 0.558888138646;
    msg.ch11 = 0.551118522152;
    msg.ch12 = 0.411241280476;
    msg.ch13 = 0.0615470184393;
    msg.ch14 = 0.0194369167019;
    msg.ch15 = 0.520856649261;
    msg.ch16 = 0.980103210942;

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
    msg.setTimeStamp(0.00407420463186);
    msg.setSource(33714U);
    msg.setSourceEntity(93U);
    msg.setDestination(49608U);
    msg.setDestinationEntity(65U);
    msg.ch01 = 0.181521043685;
    msg.ch02 = 0.126653320715;
    msg.ch03 = 0.058021574296;
    msg.ch04 = 0.572795593814;
    msg.ch05 = 0.587476670495;
    msg.ch06 = 0.482800597372;
    msg.ch07 = 0.946263397305;
    msg.ch08 = 0.439462251171;
    msg.ch09 = 0.44125909065;
    msg.ch10 = 0.0792335569787;
    msg.ch11 = 0.825258645603;
    msg.ch12 = 0.311878721855;
    msg.ch13 = 0.549126265775;
    msg.ch14 = 0.799377139281;
    msg.ch15 = 0.82316474827;
    msg.ch16 = 0.42120808303;

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
    msg.setTimeStamp(0.992354961759);
    msg.setSource(53193U);
    msg.setSourceEntity(116U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(71U);
    msg.value = 0.795915897415;

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
    msg.setTimeStamp(0.698837427098);
    msg.setSource(10686U);
    msg.setSourceEntity(226U);
    msg.setDestination(39775U);
    msg.setDestinationEntity(129U);
    msg.value = 0.436038563813;

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
    msg.setTimeStamp(0.410079462168);
    msg.setSource(22211U);
    msg.setSourceEntity(121U);
    msg.setDestination(61888U);
    msg.setDestinationEntity(155U);
    msg.value = 0.104614686722;

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
    msg.setTimeStamp(0.243889166623);
    msg.setSource(33542U);
    msg.setSourceEntity(167U);
    msg.setDestination(54917U);
    msg.setDestinationEntity(224U);
    msg.op = 229U;
    msg.lat = 0.160874100171;
    msg.lon = 0.166937147495;
    msg.height = 0.581425195768;
    msg.depth = 0.255405250441;
    msg.alt = 0.537088619835;

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
    msg.setTimeStamp(0.975469147062);
    msg.setSource(52653U);
    msg.setSourceEntity(223U);
    msg.setDestination(10653U);
    msg.setDestinationEntity(97U);
    msg.op = 207U;
    msg.lat = 0.976844710678;
    msg.lon = 0.177731529954;
    msg.height = 0.571228631211;
    msg.depth = 0.0292966868348;
    msg.alt = 0.683195585014;

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
    msg.setTimeStamp(0.121401444783);
    msg.setSource(59151U);
    msg.setSourceEntity(234U);
    msg.setDestination(43311U);
    msg.setDestinationEntity(25U);
    msg.op = 135U;
    msg.lat = 0.370749899101;
    msg.lon = 0.472273254466;
    msg.height = 0.946800126046;
    msg.depth = 0.293033671045;
    msg.alt = 0.800537388909;

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
