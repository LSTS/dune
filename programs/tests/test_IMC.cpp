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
// IMC XML MD5: 4600656f536c140f01ba27b5b4ef98cc                            *
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
    msg.setTimeStamp(0.5936136207024003);
    msg.setSource(39551U);
    msg.setSourceEntity(140U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(219U);
    msg.state = 135U;
    msg.flags = 254U;
    msg.description.assign("OQOZEMLYIANSPQHDHSBRXRRW");

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
    msg.setTimeStamp(0.20116390758821534);
    msg.setSource(37770U);
    msg.setSourceEntity(56U);
    msg.setDestination(45477U);
    msg.setDestinationEntity(88U);
    msg.state = 239U;
    msg.flags = 38U;
    msg.description.assign("IHLZOLWNSADGFTUKWSQQBEOQF");

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
    msg.setTimeStamp(0.03967476051557839);
    msg.setSource(55536U);
    msg.setSourceEntity(113U);
    msg.setDestination(54849U);
    msg.setDestinationEntity(142U);
    msg.state = 212U;
    msg.flags = 125U;
    msg.description.assign("QNXAXZOWSMFGSZJGVZWRUNBFKEBOMVTQPSEXSWLEJXCQAWNSOXAIYDLKGVOHUYJILDL");

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
    msg.setTimeStamp(0.7294652941358634);
    msg.setSource(50559U);
    msg.setSourceEntity(147U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.9711490587418407);
    msg.setSource(52436U);
    msg.setSourceEntity(56U);
    msg.setDestination(27106U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.6316570761742292);
    msg.setSource(49415U);
    msg.setSourceEntity(11U);
    msg.setDestination(56582U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.7391735748752535);
    msg.setSource(28825U);
    msg.setSourceEntity(109U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(195U);
    msg.id = 83U;
    msg.label.assign("BQYMTJIQYQYJEYZGBQPZQAEJUTKWYJFCPAXLLJLEZSNNEGHUMRHOODDNGIRFJUXBBMSUHIVKLMLLJBRDSACEPGZCTTRHUGOPNJSAJEYWUDDKXBCAESVKVKRZXCNMXWAAMQMFEHYXDOFWHNUWGRTIGNKDNOHGUWFSCGORVMAZQKVIQGCFFFCPYCZTBSNHSWTDHQUVILDJTNYVB");
    msg.component.assign("BELZTKUAXOAOZJWENXDDNIKMMWLCCTIUERZCLNVZSUJMQDGPECTFLBPKPVDFSKMTULALISLBBOQXIJILUUWCBJPVJVBQCGMHZROAVFWDETXRVREHVPBWHTSXDPVIFYQDWDTRJYXAMNYXGTRBEZNRNIGTQQNGHHCAYOGMJIRPFFZWCONDEXYLYMKWDOIJNCKQQTKGUPUOMEBGHGAPABKXRH");
    msg.act_time = 62676U;
    msg.deact_time = 18377U;

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
    msg.setTimeStamp(0.7967310219480458);
    msg.setSource(62291U);
    msg.setSourceEntity(236U);
    msg.setDestination(59083U);
    msg.setDestinationEntity(104U);
    msg.id = 53U;
    msg.label.assign("YIHRSZSTBGTPYQDAEPODXQYXCOZEZRUWULGFVAOHDBFQNBRIAVEVGJFJHBCGKILQRUTIUMOBXDNRTWCKZMSMQZUDWCSKEVQTLFZTJVHMRAMRDGESTWKIXHJNYAAQPMEFNJNHZOATKGBLSLRSMOVOMNXU");
    msg.component.assign("YCTLXNCESFJOAGYPSELDRGIEDBJQYJXLIBFNOIVHVAEMMZFUSHHNVXLHSJHWHYLGTXVWGNDYANSJIEWVMQRJROACVBGURPASQIOQSSCPDUUCDTQTEGQKFNFOJWTKZJNXRBFXPNCDPOXHHVWNJDXFBULBTOMEYFPAFGISTZXTGMEAWKICRSTGBBZOVKRQVUACDMCZDULUKY");
    msg.act_time = 65247U;
    msg.deact_time = 46908U;

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
    msg.setTimeStamp(0.48847647919139026);
    msg.setSource(13478U);
    msg.setSourceEntity(22U);
    msg.setDestination(17206U);
    msg.setDestinationEntity(153U);
    msg.id = 210U;
    msg.label.assign("MSLAAUHJDADHCRRBEKJVFJHXEBYSKFYAXLZDJHUFPRWDZOBOEOPWSMLUUCMMANYDGSWYPXQHQQKRMDZUPCMI");
    msg.component.assign("DDHQYUPRMTSDTEFQOPDMCWTWQJHHRIRJARKHEBRIDGPDRSIZDUZPYYIFXXZIQQABNTSTZGOJFHUWACEYMNTIZKXFCQMSUAJZGAAYROAEIOEZGLGILCENEQBUESVXSKBFVNIZKZBMNBBHXTJMLFTAXYGNCUPKJOXAYOWLDIWGJPQNLTCPLOK");
    msg.act_time = 9745U;
    msg.deact_time = 16367U;

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
    msg.setTimeStamp(0.8351288381785015);
    msg.setSource(30018U);
    msg.setSourceEntity(39U);
    msg.setDestination(40420U);
    msg.setDestinationEntity(244U);
    msg.id = 107U;

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
    msg.setTimeStamp(0.08088008953999326);
    msg.setSource(25733U);
    msg.setSourceEntity(76U);
    msg.setDestination(62789U);
    msg.setDestinationEntity(50U);
    msg.id = 94U;

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
    msg.setTimeStamp(0.6113873631227391);
    msg.setSource(12714U);
    msg.setSourceEntity(126U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(167U);
    msg.id = 134U;

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
    msg.setTimeStamp(0.09420745766637184);
    msg.setSource(39349U);
    msg.setSourceEntity(118U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(2U);
    msg.op = 47U;
    msg.list.assign("ERVYPIYPUKEGMPFYAKDMKTJVNPRAWBGKJNHRERQETJIJWZDLKMBZXDSCOKGTCMJONYSHIGIFADWWSSTXQWOUBBOQLMVMENTAFKCWTNYABEEQZLOFZDFHPTBMG");

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
    msg.setTimeStamp(0.753703829664866);
    msg.setSource(21595U);
    msg.setSourceEntity(225U);
    msg.setDestination(31285U);
    msg.setDestinationEntity(113U);
    msg.op = 232U;
    msg.list.assign("MRTLJCWNIFKEBEFLSHDSMEOLVPSTPVQZADTDKFBMJSETLMPCASPIIINDVXHRNRUHELJCXYRJEGCGZAOPXMOIBUHOAXEQQREXYREURJOZ");

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
    msg.setTimeStamp(0.043128624636125656);
    msg.setSource(22913U);
    msg.setSourceEntity(250U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(97U);
    msg.op = 18U;
    msg.list.assign("QPWZTROYKTVRVGNMPVNNSZCWKHBAVUJJHSIDYVNFLDULBASQKKQZLWIEAOBUZLSPKIASGUQRTQIXFHYFBJYCOUSALKTXROEDVJOOPJEMCAMISWKGPRQXYHDIBWXTVAXEGCEFDMHWOHFLQXHDWGDZCUELVRCGIXWBCJAENOTJCXGKHUPPXQMGTFNQIRPHMDZZKAF");

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
    msg.setTimeStamp(0.8531624779723629);
    msg.setSource(49606U);
    msg.setSourceEntity(218U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(227U);
    msg.value = 75U;

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
    msg.setTimeStamp(0.7248872224735574);
    msg.setSource(10221U);
    msg.setSourceEntity(66U);
    msg.setDestination(40759U);
    msg.setDestinationEntity(125U);
    msg.value = 226U;

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
    msg.setTimeStamp(0.9589287526442244);
    msg.setSource(60956U);
    msg.setSourceEntity(217U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(185U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.5694517430329081);
    msg.setSource(25668U);
    msg.setSourceEntity(57U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(189U);
    msg.consumer.assign("FYYGOYFTRSZWNBJMCOPROZSJADAIUZUTGAEEFVPOYWCZPZSLDLFBJNUMCNCJUALIDJLKGKIRXZLRMVOQXEOMVTMTPSKACXNRBBKSDROWAPNCEWAVZGBVTKBNZJMYCFYUXPQLWYYMUPGJUWIUQKXXHEKARPIBSFLQOIRTGXUMVVJLAQYNFHHHERSDUBPGWHAQITFLCWXEM");
    msg.message_id = 59522U;

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
    msg.setTimeStamp(0.20836594882222748);
    msg.setSource(2240U);
    msg.setSourceEntity(215U);
    msg.setDestination(59418U);
    msg.setDestinationEntity(218U);
    msg.consumer.assign("OSXIJWNRJUPMEIKLJEHNJVKEVOUAPZMXNXLXOWBFKYBIMZZMVYORYDJEMBTFDOZMWJZBBRXLYATTNTGVCTUDSGXEZUKDUCOCHHJIJCWCWQXEPNUYGFCOSWWEP");
    msg.message_id = 37219U;

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
    msg.setTimeStamp(0.5959851198280247);
    msg.setSource(52286U);
    msg.setSourceEntity(30U);
    msg.setDestination(42484U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("USTQWRPMXUXSDBNLSKTRMXXWMGEQDXOFHYVDUJFAFRQACZVVLBTOSTGQYOZRDMECHY");
    msg.message_id = 3716U;

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
    msg.setTimeStamp(0.8522811200068036);
    msg.setSource(47889U);
    msg.setSourceEntity(103U);
    msg.setDestination(12514U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.1054565541506155);
    msg.setSource(154U);
    msg.setSourceEntity(108U);
    msg.setDestination(63501U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.7897966645830272);
    msg.setSource(23782U);
    msg.setSourceEntity(13U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.48157866456478915);
    msg.setSource(28985U);
    msg.setSourceEntity(167U);
    msg.setDestination(35271U);
    msg.setDestinationEntity(107U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.22985044339857075);
    msg.setSource(36295U);
    msg.setSourceEntity(37U);
    msg.setDestination(38768U);
    msg.setDestinationEntity(240U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.5862103870644569);
    msg.setSource(15087U);
    msg.setSourceEntity(46U);
    msg.setDestination(33788U);
    msg.setDestinationEntity(48U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.6469153451049587);
    msg.setSource(15939U);
    msg.setSourceEntity(211U);
    msg.setDestination(20834U);
    msg.setDestinationEntity(65U);
    msg.total_steps = 202U;
    msg.step_number = 7U;
    msg.step.assign("ODQCWKQVZCPCXMKLUWMRGOBJUBUIJOEKFBRGTNWEHKIPILOBHSTZNXBISCBMAIJQVHEPICSZCNXPWTVKAAWQNJKFBJFTZIXCZSMXYUSLLIQPYFUEAGFAGGMNNFSSXYAUDUPGLQKGTCOIEJAREVEJHTPWRDBKEWDMLDXVHAFJSFYDXZZFWUHGXXPVMVEHOGLQKYROSJVYOIBNRGYZUJVMLZYS");
    msg.flags = 48U;

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
    msg.setTimeStamp(0.564269827810591);
    msg.setSource(60612U);
    msg.setSourceEntity(148U);
    msg.setDestination(1093U);
    msg.setDestinationEntity(212U);
    msg.total_steps = 24U;
    msg.step_number = 166U;
    msg.step.assign("IALREVORRKVCSIZHOMPBBHWZAPPKTTIQLESCLBCAOFNKOYOTUWKMQBPNAGXEQSSPFWKJUGWEIKDVOJCGPNZUYVRQVFOBHMBDAGMFJRFOANQSTLHRWLRWJFGDQGZDWDEVZUNUCZVQFLMBUMNLTEMIWYVLHJXEASFYTDVZTHVAITPYIMFEJNXUZOURDNHKDJXLSUCXJKCBLGOKPRFGXDHRKGCXCZCW");
    msg.flags = 205U;

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
    msg.setTimeStamp(0.8707410621192504);
    msg.setSource(24760U);
    msg.setSourceEntity(151U);
    msg.setDestination(38008U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 105U;
    msg.step_number = 189U;
    msg.step.assign("WAMCQQCAWZETQKNUQUXFIHLFPALKLZRIZJUGIFMEWIUGIXRNVIGXJQGFQCYOYMCBZCLREXDNRTWDLEOSEGTMAAGXNQMWHCSPKDJVRYFQDXX");
    msg.flags = 180U;

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
    msg.setTimeStamp(0.9856598602112532);
    msg.setSource(53146U);
    msg.setSourceEntity(31U);
    msg.setDestination(23702U);
    msg.setDestinationEntity(19U);
    msg.state = 148U;
    msg.error.assign("KCFDYSBHAEHZRIQTAUDUDPMXYVVYULKVIWEORHUJFBBIZLVLMTGKFCCXOLFHMGEGUJPOYIFYZQABBIUBKUJMNYVNQXJLOMAZUGNTONGWLXCAXEVGZORQPZIHKTKJAOSA");

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
    msg.setTimeStamp(0.8239233845551366);
    msg.setSource(29475U);
    msg.setSourceEntity(223U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(136U);
    msg.state = 93U;
    msg.error.assign("PSOHIJGPKRXCTXQASXKAISSLOQCAAEWUQAUNLIMMDNWAYEWBGUPNMNDHKXA");

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
    msg.setTimeStamp(0.40755061214851207);
    msg.setSource(38303U);
    msg.setSourceEntity(89U);
    msg.setDestination(3622U);
    msg.setDestinationEntity(39U);
    msg.state = 232U;
    msg.error.assign("KGSMXHERPQAEOWLIRIOQIFTDCWWFXIPJRSDWPNHVQFJOLYPFZNBRYMSDXVSQUBOPXGBOMJUMSOKJZMNQBEHFYEJSFALBWCJLYZFIEVZNUPHSRUXUVGSFKQASUWXXHIIVJVWQCZUAYITCYKNVTTXDUANDRRQMGCOFB");

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
    msg.setTimeStamp(0.1963961984584346);
    msg.setSource(17766U);
    msg.setSourceEntity(200U);
    msg.setDestination(7126U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.17845768898062164);
    msg.setSource(23048U);
    msg.setSourceEntity(205U);
    msg.setDestination(16260U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.09795845677300452);
    msg.setSource(51414U);
    msg.setSourceEntity(121U);
    msg.setDestination(48673U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.25345473929408013);
    msg.setSource(38602U);
    msg.setSourceEntity(7U);
    msg.setDestination(58246U);
    msg.setDestinationEntity(102U);
    msg.op = 88U;
    msg.speed_min = 0.9539754290252357;
    msg.speed_max = 0.7037260039261569;
    msg.long_accel = 0.3555100238093496;
    msg.alt_max_msl = 0.3257672809338138;
    msg.dive_fraction_max = 0.5058788543921342;
    msg.climb_fraction_max = 0.7140244878649767;
    msg.bank_max = 0.43168394606985716;
    msg.p_max = 0.6456409795426769;
    msg.pitch_min = 0.4040885069835879;
    msg.pitch_max = 0.4996305645823933;
    msg.q_max = 0.7016984712220743;
    msg.g_min = 0.6251307379556752;
    msg.g_max = 0.16898867234609716;
    msg.g_lat_max = 0.6573019709568535;
    msg.rpm_min = 0.923021854588206;
    msg.rpm_max = 0.4737607605998905;
    msg.rpm_rate_max = 0.22970157677550695;

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
    msg.setTimeStamp(0.527513443259723);
    msg.setSource(47640U);
    msg.setSourceEntity(240U);
    msg.setDestination(4757U);
    msg.setDestinationEntity(230U);
    msg.op = 220U;
    msg.speed_min = 0.8830461291607571;
    msg.speed_max = 0.2854436250404796;
    msg.long_accel = 0.6966907024298349;
    msg.alt_max_msl = 0.12220343342310858;
    msg.dive_fraction_max = 0.8166052062166484;
    msg.climb_fraction_max = 0.5990635418237185;
    msg.bank_max = 0.4717002938836795;
    msg.p_max = 0.9587768074868758;
    msg.pitch_min = 0.43364208127759984;
    msg.pitch_max = 0.4948087192935553;
    msg.q_max = 0.18224890557543738;
    msg.g_min = 0.20945015895184604;
    msg.g_max = 0.4846617180780812;
    msg.g_lat_max = 0.9298758397346392;
    msg.rpm_min = 0.03489007136203559;
    msg.rpm_max = 0.7484295371023606;
    msg.rpm_rate_max = 0.772896520912769;

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
    msg.setTimeStamp(0.32359019045185067);
    msg.setSource(27281U);
    msg.setSourceEntity(48U);
    msg.setDestination(35903U);
    msg.setDestinationEntity(68U);
    msg.op = 20U;
    msg.speed_min = 0.2242539630682191;
    msg.speed_max = 0.9895738137475539;
    msg.long_accel = 0.3006798019558521;
    msg.alt_max_msl = 0.9671864259524181;
    msg.dive_fraction_max = 0.08035196714940696;
    msg.climb_fraction_max = 0.2288968064200081;
    msg.bank_max = 0.6486497624238113;
    msg.p_max = 0.35626560489473313;
    msg.pitch_min = 0.4872870789217555;
    msg.pitch_max = 0.2025748905912047;
    msg.q_max = 0.1766010147717474;
    msg.g_min = 0.16154501142348;
    msg.g_max = 0.8066559273302473;
    msg.g_lat_max = 0.281464663735992;
    msg.rpm_min = 0.7881677155568542;
    msg.rpm_max = 0.8310245237381606;
    msg.rpm_rate_max = 0.3576373651825363;

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
    msg.setTimeStamp(0.8942500686181512);
    msg.setSource(15263U);
    msg.setSourceEntity(30U);
    msg.setDestination(47705U);
    msg.setDestinationEntity(196U);
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("SYEGOFYROYUVCWJKBWNVAGPDYRXXTSDBBFPPPTQSECMRUCYEFXROXIIBKURBEFHUXLJCTKGQFAWGFUQGYPASPRSZQBWZGZBABEDJEKTIRJQKMUVMORPFIBCLWLLPYADBSLHGOTTHDZCCTKFNLPKYMXKMSYONXXNADUOZNWRNVCHAEGOJJQZDWJISRFSZXEZYXWNHLCVSVVAQGVKQAVVHIMNQAUFHZ");
    tmp_msg_0.timeout = 26064U;
    tmp_msg_0.contents.assign("YFNZSBHSBRDTEOPYQCWQMMFI");
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
    msg.setTimeStamp(0.5555806456791271);
    msg.setSource(22663U);
    msg.setSourceEntity(220U);
    msg.setDestination(64391U);
    msg.setDestinationEntity(54U);
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 56664U;
    tmp_msg_0.value = 0U;
    tmp_msg_0.error.assign("KSIYBGFFESMPKVHXTLFPKXCLWPOCBKLRDCPCWOBRUDMOKRHIIILWTLDWMOYVDQLUESUXERNHTXWEIUTAYXFGBAZLZXUSOZVMPJHNFUYATFYWUNLJFAODNNQQZ");
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
    msg.setTimeStamp(0.2661740701445767);
    msg.setSource(10844U);
    msg.setSourceEntity(192U);
    msg.setDestination(46469U);
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
    msg.setTimeStamp(0.6739332829983439);
    msg.setSource(30705U);
    msg.setSourceEntity(109U);
    msg.setDestination(46604U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.43275761316623873;
    msg.lon = 0.7731291844358916;
    msg.height = 0.5805590251720556;
    msg.x = 0.11584835492168277;
    msg.y = 0.9307286844711049;
    msg.z = 0.7139029844111475;
    msg.phi = 0.8228640662085738;
    msg.theta = 0.05277600371497004;
    msg.psi = 0.8464279247526336;
    msg.u = 0.5447486277290916;
    msg.v = 0.46912777927309923;
    msg.w = 0.44446706731226004;
    msg.p = 0.6569769231197929;
    msg.q = 0.3077092303546114;
    msg.r = 0.16988699706294275;
    msg.svx = 0.9895176816885662;
    msg.svy = 0.12974031693925425;
    msg.svz = 0.4909323703379165;

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
    msg.setTimeStamp(0.6938696719170367);
    msg.setSource(13333U);
    msg.setSourceEntity(107U);
    msg.setDestination(2086U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.32236496499605516;
    msg.lon = 0.3530402816333189;
    msg.height = 0.4256137684752819;
    msg.x = 0.9088981311530797;
    msg.y = 0.45382849782861556;
    msg.z = 0.21807798550685253;
    msg.phi = 0.16871805350941305;
    msg.theta = 0.803076757015811;
    msg.psi = 0.1383437145869374;
    msg.u = 0.037959764982185895;
    msg.v = 0.9124865299190168;
    msg.w = 0.6277177487724993;
    msg.p = 0.6542735756811429;
    msg.q = 0.28066454274893005;
    msg.r = 0.7210748552299068;
    msg.svx = 0.19710262370163645;
    msg.svy = 0.8906253261261012;
    msg.svz = 0.9108021679914533;

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
    msg.setTimeStamp(0.12749185302341093);
    msg.setSource(35481U);
    msg.setSourceEntity(250U);
    msg.setDestination(43114U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.56942095817952;
    msg.lon = 0.26383681925138447;
    msg.height = 0.13303735315405796;
    msg.x = 0.0048349570877325165;
    msg.y = 0.15358305881712497;
    msg.z = 0.15592823906681474;
    msg.phi = 0.9900908723239756;
    msg.theta = 0.9312786308649125;
    msg.psi = 0.8773508729038563;
    msg.u = 0.06981080472997814;
    msg.v = 0.6291156877124657;
    msg.w = 0.3806751934215713;
    msg.p = 0.021662291006969703;
    msg.q = 0.9926999824039444;
    msg.r = 0.7833036699939373;
    msg.svx = 0.9016021790029017;
    msg.svy = 0.9300100095116584;
    msg.svz = 0.06513780159697025;

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
    msg.setTimeStamp(0.44375114595513054);
    msg.setSource(46244U);
    msg.setSourceEntity(161U);
    msg.setDestination(505U);
    msg.setDestinationEntity(225U);
    msg.op = 33U;
    msg.entities.assign("ZNXIAULRQZVHJUBUYBIGYKTSNJFOMCPGKLCMBSZEWFRSPAWFLZIQEMFYTDXOJBCEYQRUDRBXOJDNZKQGTADYISXMICFYICAMYUXDCSRNTWIHJUDDLEQRJPGXHGWHKALGVTMORVQCTWFTVWDQBNXPZCWRESRPVHCIHSHBAZON");

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
    msg.setTimeStamp(0.9222916492764766);
    msg.setSource(55857U);
    msg.setSourceEntity(141U);
    msg.setDestination(29096U);
    msg.setDestinationEntity(131U);
    msg.op = 119U;
    msg.entities.assign("MONPUFYWKTKHKZAUBMFIIIXTHZNDUAADWSQQTYWPYVJJYCLQCQWMFAEFGDYEOQXJLDMXRHKHSFITQONVLRXNPFCZKCPBTNAPBGEXOIIBGHUUSMZWPUEZBKVDNPWRENAEKKUSJUEVJPLLXRCACFKFCIDBFWHTBYRZQGVBLCVBOCIRWORTPGRZPGSGVXATMTLUULFJYOSMMAEOTSDBSXQJJSNYJYOANK");

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
    msg.setTimeStamp(0.8101923189094922);
    msg.setSource(54773U);
    msg.setSourceEntity(63U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(242U);
    msg.op = 55U;
    msg.entities.assign("MRJIUZAWTUKHWJSTEYSYPIDQCKCEONVOIMIZIYBBYWSHGUSLLCJMTOCZUYYNBGLXERMKJQNXIECWGISPOABQPQYWZKCPUDFJAPMALXHXAEMQVSZOPJPDECRNFGCOORRQYJZFVCFUUTKLHMWLFILBGZESPMDKEYBHQRIEZKRFJVQNWHGVMVXYBTI");

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
    msg.setTimeStamp(0.8750228890519004);
    msg.setSource(49345U);
    msg.setSourceEntity(37U);
    msg.setDestination(31725U);
    msg.setDestinationEntity(107U);
    msg.type = 119U;
    msg.speed = 6531U;
    const char tmp_msg_0[] = {96, 123, 123, 5, -87, 77, 19, -54, 103, -88, -106, 102, -117, -88, -93, -50, 120, -4, 3, 87, 109, 122, 57, 85, -24, 11, -4, -40, 32, -70, -59, 32, -50, 119, 68, -4, 92, 63, -2, 1, -64, -83, -43, -84, -30, 94, 51, 123, 93, 87, 92, 45, -71, 15, 4, 78, -103, -43, 100, -56, 101, -51, -12, -56, -88, 117, 91, 19, -11, 84, -35, 121, 82, -61, -78, 44, -47, -32, -27, 24, -75, -94, 15, 11, 45, 119, 97, -21, -66, 124, -67, -14, 98, -86, 81, -74, 82, -72, -32, 21, 74, -8, -40, 84, -67, 125, -121, -83, 109, -40, -51, -80, 110, 121, -61, 26, -15, 117, -105, -70, -40, 126, -118, 34, -68, 80, 63, 15, -82, 89, -92, 56, 108, -128, 79, 57, 10, -75, -95, -69, -102, 71, 110, -37, 82, -5, -23, 3, -67, 72, -102, -126, -98, -122, -104, -11, 56, -5, 64, -101, 59, 37, 115, -36, -112, -81, 11, 25, 56, -23, 126, 116, -70, -62, 64, -63, 100, 56, -26, -4, 95, 79, -54, 47, 63, -125, 89, -49, -94, 31, -49, -34, -4};
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
    msg.setTimeStamp(0.6068828332827575);
    msg.setSource(42735U);
    msg.setSourceEntity(189U);
    msg.setDestination(36156U);
    msg.setDestinationEntity(244U);
    msg.type = 61U;
    msg.speed = 48860U;
    const char tmp_msg_0[] = {-125, 27, 24, 37, 55, 81, 7, 101, 48, 21, -108, 61, 58, 65, 9, -11, 116, 42, 113, 114, 8, 26, -123, -2, -114, -11, -89, -98, 91, 19, 15, -50, 0, 95, -5, -91, -64, -7, 53, -28, -109, 43, 1, 98, 21, -55, 118, -26, 86, 121, 4, 64, 73, -67, -40, 120};
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
    msg.setTimeStamp(0.6071786237042662);
    msg.setSource(58404U);
    msg.setSourceEntity(113U);
    msg.setDestination(43137U);
    msg.setDestinationEntity(221U);
    msg.type = 210U;
    msg.speed = 63822U;
    const char tmp_msg_0[] = {-16, -56, 4, 31, -57, 63, -13, -48, 98, -41, -105, 42, -54, -121, -69, -30, 85, 106, 94, 111, 19, 52, 97, 27, -59, -39, 71, -2, 56, 80, -62, 36, 42, 53, -85, -43, -107, -37, 105, 1, 5, -126, -91, 91, 124, -74, -106, 56, -63, -58, -38, -23, 78, 7, 124, -125, -45, 76, 48, -43, -4, -106, 12, -109, -54, 123, -102, -46, -94, 39, 89, 75, -85, 122, 59, 24, -123, 29, 77, -108, 75, -87, 6, 13, -36, 103, -126, -84, -16, -40, 93, 65, 113, -55, 46, 85, -86, -70, -103, 84, -57, -58, -117, -82, 72, -49, 9, -24, 115, -85, 71, 57, 35, -18, -82, -103};
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
    msg.setTimeStamp(0.9689783454789005);
    msg.setSource(15886U);
    msg.setSourceEntity(201U);
    msg.setDestination(42618U);
    msg.setDestinationEntity(72U);
    msg.op = 1U;
    msg.tas2acc_pgain = 0.8559270861119659;
    msg.bank2p_pgain = 0.24687136476318838;

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
    msg.setTimeStamp(0.45717797734239307);
    msg.setSource(26118U);
    msg.setSourceEntity(56U);
    msg.setDestination(51579U);
    msg.setDestinationEntity(95U);
    msg.op = 121U;
    msg.tas2acc_pgain = 0.9431443076273169;
    msg.bank2p_pgain = 0.7162139720090374;

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
    msg.setTimeStamp(0.48402424201727146);
    msg.setSource(43401U);
    msg.setSourceEntity(156U);
    msg.setDestination(60967U);
    msg.setDestinationEntity(208U);
    msg.op = 26U;
    msg.tas2acc_pgain = 0.8269272688350936;
    msg.bank2p_pgain = 0.5342825885668072;

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
    msg.setTimeStamp(0.8991634808683944);
    msg.setSource(56589U);
    msg.setSourceEntity(41U);
    msg.setDestination(48515U);
    msg.setDestinationEntity(191U);
    msg.available = 142645396U;
    msg.value = 127U;

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
    msg.setTimeStamp(0.48970125490603567);
    msg.setSource(23250U);
    msg.setSourceEntity(187U);
    msg.setDestination(17392U);
    msg.setDestinationEntity(84U);
    msg.available = 4113535197U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.8518627451475995);
    msg.setSource(10387U);
    msg.setSourceEntity(126U);
    msg.setDestination(25209U);
    msg.setDestinationEntity(252U);
    msg.available = 3187444883U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.9168284528881301);
    msg.setSource(4589U);
    msg.setSourceEntity(109U);
    msg.setDestination(23581U);
    msg.setDestinationEntity(5U);
    msg.op = 157U;
    msg.snapshot.assign("SQJULPIDHZHWVMGPOXDGHOKJLQIOCPSIUCWZAYWGAYPNRBBOJNWXUYCTEMZXMNGIORIYKWFLVSUAHZRLHQMQKNRACGJHGFQBUXNDUMLWHATBYCRQVJYPELDBKCGDLFX");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.5726160826133131;
    tmp_msg_0.type = 254U;
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
    msg.setTimeStamp(0.7028755791937665);
    msg.setSource(43800U);
    msg.setSourceEntity(235U);
    msg.setDestination(2691U);
    msg.setDestinationEntity(143U);
    msg.op = 90U;
    msg.snapshot.assign("IIPTQUVOFKLADJMWLNEQZFA");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("QNENMFQMCPOQXRGYBKYWIFHXDAFDNHBZXBVCCWFVRMIUEGQKOBXOUMSAXKSKHNABHHWLWSJLNNWEYNYTVVGOICMXP");
    tmp_msg_0.lat = 0.9773502816442299;
    tmp_msg_0.lon = 0.9597339148209413;
    tmp_msg_0.z = 0.1746789511490623;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.cog = 0.3890774799918385;
    tmp_msg_0.sog = 0.12983231367367087;
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
    msg.setTimeStamp(0.9207211527172235);
    msg.setSource(42974U);
    msg.setSourceEntity(128U);
    msg.setDestination(59495U);
    msg.setDestinationEntity(98U);
    msg.op = 233U;
    msg.snapshot.assign("IPDKFQOGGLXHEDFDIVFCKIVWOMRIBZTHNEBZXMCZPTLJRGBIOUPFUGCUDRVTKXTMJHSHFAQSIFTIYBBLJPTNNYULZWFAAKYLKKQGJXVMUXLNOWWNDBVJSBSUMPYZNDAEAJIAQAESOHJGZTLOYOOJSEZGMEPEZVVRQGOXQNCIPWUJKTUBKBFLWPCYSHPNKCWPWUGQTICXLGDYHKYRMMXNC");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 26U;
    tmp_msg_0.request_id = 15081U;
    tmp_msg_0.command = 203U;
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 4110393148U;
    tmp_tmp_msg_0_0.id.assign("TGRFUPLJTVRSDZZHBCGBPQDZJKGGMOSOGHDZDXUKKMDLLRYJTNRBORTLQAFZVKWTEEOUERNBEEZPPA");
    tmp_tmp_msg_0_0.memento.assign("LZGZOHMSOFVXFYKEKMTCTHYQUAHPADFJXPSGEPVEWLZKJWDMQVOGFZCNWNSNKWMAOOROYXNEPONQYQRRIXEIFRHUBDDZHFKXAQUBFJLWYGKPXHFKUUZBDZQMCRLEBUETUBJE");
    tmp_tmp_msg_0_0.timeout = 29429U;
    tmp_tmp_msg_0_0.lat = 0.39253768194091054;
    tmp_tmp_msg_0_0.lon = 0.6668799582382126;
    tmp_tmp_msg_0_0.z = 0.6702535426569894;
    tmp_tmp_msg_0_0.z_units = 232U;
    tmp_tmp_msg_0_0.speed = 0.12738508112849212;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_tmp_msg_0_0.duration = 34505U;
    tmp_tmp_msg_0_0.radius = 0.05667213140900473;
    tmp_tmp_msg_0_0.flags = 15U;
    tmp_tmp_msg_0_0.custom.assign("TKKGEHEGGIHESLJFDDEUANEONJBUEQHPASUZVXQIOLIXSSRAVXXFSWBRCNTZSBBUOSLPPYPBRPEMEZWRYKNYUNCARQQCFFXCTNMKTIYUDWOASMSWVRXPAGVMHOOHTZCAKRTVAVALQROXIDNDGNGVILT");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("AUCXJXDDKVQVSOTBYQGWLGXQYIYASKZCHHUZYMGLCBUJAEQQAKPICXYKVTCEWIFNYVYLOHSZOIIPBMNFYHQGXNWXMLOPNUTWWUMWDV");
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
    msg.setTimeStamp(0.8309690686029965);
    msg.setSource(54561U);
    msg.setSourceEntity(232U);
    msg.setDestination(43223U);
    msg.setDestinationEntity(212U);
    msg.op = 150U;
    msg.name.assign("JDVSJCTZRHFVQGJACTOYUGKHATDKEYCTDBJDLTZILYTLFLPBKXJIGNIEOBCZYOSKKOWPOMBANQDPXIFLJRPWRYEHROPQEACSVOSAZIAQXKHTMJGNPJMFGCEYVXURXEZIUDWIOGEBHUYEEWIVTUGSMSJNUDPRLTOPXMCMQXXDAZLPUGRVCBWOAVCFDHNFMIUBLLABNNZFKZHWHBGJLDRKKZWPMYSQSTUYNQKEH");

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
    msg.setTimeStamp(0.5683935186492015);
    msg.setSource(25829U);
    msg.setSourceEntity(129U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(27U);
    msg.op = 151U;
    msg.name.assign("XIBPWYEBZJMPLYNMRWDZBQZEXCIHIRMZKLFJDAIFAUFLWN");

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
    msg.setTimeStamp(0.6831309127787858);
    msg.setSource(5000U);
    msg.setSourceEntity(181U);
    msg.setDestination(1718U);
    msg.setDestinationEntity(9U);
    msg.op = 254U;
    msg.name.assign("CVVNMEWUSROCJXLUZTRHYMSTTBVJQILGBTQHICQXFYHFXDAWVEASFASOHLVIOBUOMPMYZTWBL");

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
    msg.setTimeStamp(0.5398845136625046);
    msg.setSource(42441U);
    msg.setSourceEntity(70U);
    msg.setDestination(59080U);
    msg.setDestinationEntity(41U);
    msg.type = 154U;
    msg.htime = 0.9875343711698414;
    msg.context.assign("WUNCKHFSPMJPXMRENFBXTLGDUHLAXWDPRCJJVQAEHGUMWLVNDIQCBVUZBRSUGRWQAGZDSNUXCEUNOJJMJARVQWATWGPICOSEGYPXYQZFJYLNZHMKEMRFPKIJTAMROIUANBR");
    msg.text.assign("IQRCPJKOGGOTWNDNBFTAJKVECWPRMVIJVLNRCXDDZAZFQYVUKGNKVFQSSFXEJBYHSKFZMGCZWRAZYMEVMPMDCADJLSZORINWFWMBBKSPGCJUBISNMSAGDYPSWUHQKZUCSRHXTRLYLDLFAVYHIHAYOWPATRABKUVTFOIWE");

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
    msg.setTimeStamp(0.7482143666518585);
    msg.setSource(40504U);
    msg.setSourceEntity(113U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(180U);
    msg.type = 95U;
    msg.htime = 0.4756606308924588;
    msg.context.assign("QAOLMKCRAYWKPJDGVRQYEVRTUBBHZSNBFMGOODKJVXHKEYHPFRAORRHDGTWIBPLGATSXLEXZKAFAYPWGXNVCPGNICIZIUXQQVQUSFIXTSSESRJXWOCDUNTKCUQEMHOURWWFECDDVZSTYIMHLKWUIBTHQFUNLEXFECBQCGQBKIORLHJYFOJFCOYHPTWEDLZJYGPUVTMAAILDNXGABYVXDWZKDJMZ");
    msg.text.assign("RDHXLKECWDKHSQIRJVIOAJIFRKPNAYCXHNVINFDAFGJLPTXBCTCMOLRZBEPEXXJGZYWJBUFKWRAGKJSKQZZQMHWLUPRINVBWHGETDJYEVLUSVHCIUIYFGUNXSHHBYKT");

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
    msg.setTimeStamp(0.2208238816540702);
    msg.setSource(49660U);
    msg.setSourceEntity(76U);
    msg.setDestination(44788U);
    msg.setDestinationEntity(174U);
    msg.type = 123U;
    msg.htime = 0.08117459419438577;
    msg.context.assign("IXNXDFMPEJOGABHRHDBJVWNZCJOEQSGYYDHBZNJCUOCZLDMPANPNUVKQXVQJEGOLKBPMKKZTHPGDRLWTULQSGPHUFDTLGYDDYCSXVUYJMWYAHEFHC");
    msg.text.assign("EWEQJNNNUVSPSZGCPYEEJTUHXNTDRLFTUKPMBZIKHQZAODDFIACRFIIHCASTVJIZZYIXNCFGOEUNJOSBSWPNYFRIJMDWYFONXMFKAATVGOELXPEYZFWZAWMHIMRSAAOYIWVBYKPJRGUGXKILLWFDOLWEVHULVC");

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
    msg.setTimeStamp(0.3719290915453223);
    msg.setSource(17052U);
    msg.setSourceEntity(62U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(196U);
    msg.command = 212U;
    msg.htime = 0.3239547364160762;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 244U;
    tmp_msg_0.htime = 0.3764021329905456;
    tmp_msg_0.context.assign("MRGFFMSEHIYYEQMIHWALFSTLIUKWUOTYHODPMSKYWY");
    tmp_msg_0.text.assign("VSWVGXQHYQXIUYZZXMEUIZTPBEKDPPMQBAVYQIKJPULSGPCIIFOCTEZVVBYHEQASIAHMDIDMGHNQVSDEXCXZFGZMBLCDRVFRDAGBUKNAZFNRUHPKTDJTDJNAREWXRWQFZPXTBJFOEHSOKTFRQULYOCXSMIYH");
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
    msg.setTimeStamp(0.3244053261705162);
    msg.setSource(18654U);
    msg.setSourceEntity(181U);
    msg.setDestination(11988U);
    msg.setDestinationEntity(249U);
    msg.command = 30U;
    msg.htime = 0.5603061500699201;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 76U;
    tmp_msg_0.htime = 0.5163630969794734;
    tmp_msg_0.context.assign("GSINSSHTNNGTXUNRVKMQFXFKPFHFDKWLGAZIBTMDCOELNEIMNHGFVDSEXMUYBWMCOYKAHSQAIPGBMBQRWQUCVJQWPRAZYDDFTXDTCTVZABB");
    tmp_msg_0.text.assign("NJENBVKMIFDNGSJPKZILNACFUXREUQPOLDJPVKBKSZGOFQZFXRXKOMMCJYSQRTHSQIDQZPKGTFXQHAWUABXYTNVNRUZUJRRGDHPLDSEXGSJMUJCZYKJHITQPCZHTIMTCLGCDEBVEMROGGQARSPXBJAHGYBLLWHLAVMCFZVVITDPLNQNBEBPYEAHEFDLOXWBWOCHURVTGODY");
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
    msg.setTimeStamp(0.27385029271239303);
    msg.setSource(39366U);
    msg.setSourceEntity(224U);
    msg.setDestination(26943U);
    msg.setDestinationEntity(22U);
    msg.command = 21U;
    msg.htime = 0.9850237021112906;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 178U;
    tmp_msg_0.htime = 0.6303760071525669;
    tmp_msg_0.context.assign("FHEDUHBGOATPCFIMTHFLVDHGJTFZPRHZWNWNIZIPTGZWVMOQTBKSOCENYXUSASIJNEAXVXMYWSMYRUHGKVZLKKQPZAQXO");
    tmp_msg_0.text.assign("CSGOTAFALNQYTDNCLDOCKQWVTRIIKRQPWATRIJDZJBCGELTHLXWDXQSHVPMOFDPKLAUSXSUWDPDGCHUKXYPNQUPAWHFRNBYFKNVEJOFYWLHGROGREPRUTVQBUQLJZEBDKHCGYJUPKONUCHRRFHEXKGVCIZECOILCWYDANYNTUMWEMEJYJKDFSOJXJPOPFKUEGOTGIZXMZ");
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
    msg.setTimeStamp(0.441397450979619);
    msg.setSource(30971U);
    msg.setSourceEntity(36U);
    msg.setDestination(49520U);
    msg.setDestinationEntity(195U);
    msg.op = 252U;
    msg.file.assign("IDVNZNQSAIQDXHCKZLBXOMPTCPTOVJNISDVBNDQ");

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
    msg.setTimeStamp(0.5146254240259924);
    msg.setSource(20854U);
    msg.setSourceEntity(229U);
    msg.setDestination(11283U);
    msg.setDestinationEntity(104U);
    msg.op = 57U;
    msg.file.assign("ZYODNIALIKKBJMYOBZNPMGXNSLFTWRWDZQFLAQSFAITJQTPTZGKVDOPUOPEVMEMEVLZGSWFGWANOJBVGKSVFRXIAHUCSDWBOWJSTASAIKBCLQVCIQKZVFLQQYUQHHKPCUSVEYCCBUUCIRETHXEFULEVYYOJJZRCRNXAHBYMOKDNCFPCMEPMOJZQLFSUIVGYYTDDLAJEXZGKXLTDMG");

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
    msg.setTimeStamp(0.9849351662635);
    msg.setSource(57479U);
    msg.setSourceEntity(221U);
    msg.setDestination(25687U);
    msg.setDestinationEntity(66U);
    msg.op = 176U;
    msg.file.assign("ILKCSYVFUVPKYZJOZWYOERFRENWOIIIRNWUTWMHXNDBKOWTZMKFTUUURGFHDFQNXZQYQLZQIKTTHSWAAWQHTXGCXDLPDRDWSTDRSLWCBEUAVBJPOZQCSQXAFCGU");

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
    msg.setTimeStamp(0.5721003671446362);
    msg.setSource(11207U);
    msg.setSourceEntity(225U);
    msg.setDestination(14163U);
    msg.setDestinationEntity(42U);
    msg.op = 20U;
    msg.clock = 0.3002103245444233;
    msg.tz = -61;

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
    msg.setTimeStamp(0.6910716907423843);
    msg.setSource(38939U);
    msg.setSourceEntity(130U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(192U);
    msg.op = 45U;
    msg.clock = 0.24351018686386128;
    msg.tz = -47;

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
    msg.setTimeStamp(0.5196671316141194);
    msg.setSource(10219U);
    msg.setSourceEntity(83U);
    msg.setDestination(63842U);
    msg.setDestinationEntity(138U);
    msg.op = 145U;
    msg.clock = 0.3238636806084273;
    msg.tz = 34;

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
    msg.setTimeStamp(0.8888593805135386);
    msg.setSource(58812U);
    msg.setSourceEntity(240U);
    msg.setDestination(55413U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.257204202158827);
    msg.setSource(1883U);
    msg.setSourceEntity(24U);
    msg.setDestination(342U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.13282552100013212);
    msg.setSource(25388U);
    msg.setSourceEntity(166U);
    msg.setDestination(35623U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.031450974506521456);
    msg.setSource(60800U);
    msg.setSourceEntity(47U);
    msg.setDestination(52903U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("BCHNBVPFPQCJTCFIZBHLSCXGINPRAWIDFDOKZWOVTGJFHEUOSVMFNYUIWFFZPAYLBYPDZAAROISIDLBFMQJDVDXPBYRGOZKZALKPWSDNERQUYOWRCDEQTYVHRYGCXJMGMWMLPIZLEW");
    msg.sys_type = 97U;
    msg.owner = 46240U;
    msg.lat = 0.8966402073915656;
    msg.lon = 0.851399244712797;
    msg.height = 0.515080816310538;
    msg.services.assign("FECRBFBHYUQJTMMTJVXMFUJTIDTNTYCAVSVNMEGHSQNGYNCZFCRZFLUOKZYBAPULTZSAGAWLGDKDKZVHCKQZLDUOXXHMOJZGRRYRNYXFLTETUYSQKHMABGFPNDWPLIOPVQIKOYMZITNMUVQPDBKWGPEEEENKZAUPWOPLROAQWNAN");

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
    msg.setTimeStamp(0.8732562816515218);
    msg.setSource(9416U);
    msg.setSourceEntity(1U);
    msg.setDestination(57137U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("MLKBUCDNWAJQEPOQRWKKDBJKIHIOYPFVXHZAPLRZMKSRKNTBLIGGNXAQNVYDZEMCJASIZBHFHVFWTMTFUVNMOOSOXGZFCKEBEGMYWFOYZHCAJTBFHEZHSZPCBQ");
    msg.sys_type = 126U;
    msg.owner = 35268U;
    msg.lat = 0.859026421563631;
    msg.lon = 0.6343988305257106;
    msg.height = 0.7075512186601493;
    msg.services.assign("OWDYJIVQPWGRMFISQJUHAKBHDVMULRAEJREDXMJGLUJXUAVFGSNNQELVWIKWXAESKUSUOSOHXFRJRVPGBORVCGMJQDTREXTDGQPZLANADAQCHWSEKQJTADZTPDOTNTHCIQOCTSXVHFLGPKYUMIDOEXZABVINMWBPFBMCVOUMIFYFFUCHWXZRNCHTYBWLDOMKPRZKZIYZNYPGPUC");

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
    msg.setTimeStamp(0.21390676120016794);
    msg.setSource(45326U);
    msg.setSourceEntity(122U);
    msg.setDestination(32169U);
    msg.setDestinationEntity(124U);
    msg.sys_name.assign("HKRUVEBYFTCZJZQLSCSPMZGEJXGFNXVFEKYWNIPIQVDRLQFEKMVLPXILAHKYDPASCNIDKMMSFZKXTIWACBHABHVPQRTHYZPKDOBTFCWFCUMLRTEVYQJBOPPWRANGEMDYAUDNFMDGFMMVAOLACSUOQGLIYJXXXTBWXPNZBTEDIWJMBTRTBOGPJSVHJJZSZUQNORECGX");
    msg.sys_type = 246U;
    msg.owner = 60525U;
    msg.lat = 0.4731884142411068;
    msg.lon = 0.7665314586327747;
    msg.height = 0.4761508073794848;
    msg.services.assign("IAFDUCABIBZSWJJXPLWEJFRAVQLNWYRMQGFDQASPSOTDJTBRYWBLWCYEAUCRYUXEGKWXBNDPHZDTVHZLGTEFSCVLKQCUDIKVCMSXYFGVJQHSTIXQFMFAAWIWLUGLIBEUOYULZ");

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
    msg.setTimeStamp(0.7193704558950333);
    msg.setSource(16847U);
    msg.setSourceEntity(55U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(30U);
    msg.service.assign("YVVTWZADVQWTIHMIWVPUBYOKFAEJLYZXXSTONHRJDRGXOSBMKXVKZMXDHTLHFDNUUGAAEWJCZFHDMIUHQJACTDFZTYIABCLNKKCOGZGRJNSLBRWQQGRHXGXBITERICTHYXFDGELQMYIYNKRZOUEEJBFODVFSECZSAJWBKGFGVPWWLHDQXYPBKVPQNQMFZPTKIAMLOUTSPCJWGQSRCWSXLSFAEQSDUMNZMN");
    msg.service_type = 58U;

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
    msg.setTimeStamp(0.29089976025182807);
    msg.setSource(54680U);
    msg.setSourceEntity(94U);
    msg.setDestination(3592U);
    msg.setDestinationEntity(200U);
    msg.service.assign("YZDYPHRCYFMSJPMAARWPFBNBIVQKBIYCPMQWJPZXQUQAFT");
    msg.service_type = 47U;

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
    msg.setTimeStamp(0.9506213999644413);
    msg.setSource(3150U);
    msg.setSourceEntity(209U);
    msg.setDestination(15059U);
    msg.setDestinationEntity(148U);
    msg.service.assign("DZKLORHEHPECHJNJQNOXFPFCQUBBQWJUENPQLEVXYORMQUWM");
    msg.service_type = 86U;

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
    msg.setTimeStamp(0.9510198340454848);
    msg.setSource(33354U);
    msg.setSourceEntity(250U);
    msg.setDestination(4841U);
    msg.setDestinationEntity(62U);
    msg.value = 0.811713755373766;

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
    msg.setTimeStamp(0.2893130702094967);
    msg.setSource(39944U);
    msg.setSourceEntity(228U);
    msg.setDestination(5140U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5924829634861042;

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
    msg.setTimeStamp(0.41796735556167);
    msg.setSource(44252U);
    msg.setSourceEntity(60U);
    msg.setDestination(32616U);
    msg.setDestinationEntity(96U);
    msg.value = 0.03563488627981781;

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
    msg.setTimeStamp(0.5249339777509368);
    msg.setSource(10904U);
    msg.setSourceEntity(78U);
    msg.setDestination(26382U);
    msg.setDestinationEntity(47U);
    msg.value = 0.6321234646022832;

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
    msg.setTimeStamp(0.14907521116305578);
    msg.setSource(50754U);
    msg.setSourceEntity(54U);
    msg.setDestination(37413U);
    msg.setDestinationEntity(119U);
    msg.value = 0.13897878466418512;

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
    msg.setTimeStamp(0.9087176138766436);
    msg.setSource(33114U);
    msg.setSourceEntity(18U);
    msg.setDestination(37080U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9496054411044901;

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
    msg.setTimeStamp(0.5836127919138218);
    msg.setSource(7110U);
    msg.setSourceEntity(67U);
    msg.setDestination(6169U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9313757003465412;

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
    msg.setTimeStamp(0.5506960925049472);
    msg.setSource(58467U);
    msg.setSourceEntity(55U);
    msg.setDestination(58674U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9166448802808925;

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
    msg.setTimeStamp(0.6155834667298559);
    msg.setSource(42372U);
    msg.setSourceEntity(168U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5619804829506577;

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
    msg.setTimeStamp(0.8486634530159525);
    msg.setSource(20218U);
    msg.setSourceEntity(166U);
    msg.setDestination(38405U);
    msg.setDestinationEntity(55U);
    msg.number.assign("YYGFTCZNOKNILMMZCEUVQWQHLYSBMPVWPUSLAUDNNKFGIEDYOBHSAWRWSXJGOODHECARBIDIFVQUOHUPLIARNRJKFCYXPFBSRGQXNQWMMGFAKPMKJGHZHDPJTXTABKTXVKMTWVPMOHUQIFACXASTICCOKCQPWGZFJXYLVAYHXBJNDTPVVCPFZLRUDEUQ");
    msg.timeout = 61280U;
    msg.contents.assign("BONBWDQHEGWJHHYRYVNJSPZBIVCMTJZPPCLFWKGWDJLEMJRQJSCSTTDXVMNXIHEXURFISEESMVHOSGDJWOM");

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
    msg.setTimeStamp(0.2968781762339038);
    msg.setSource(18986U);
    msg.setSourceEntity(62U);
    msg.setDestination(48169U);
    msg.setDestinationEntity(162U);
    msg.number.assign("ZGOIQDTHRQLXGLFHCNRUWBVBXDCUQSKBQGLVVYMQXPSIYQJAWFCENAVPPIBLEFMGHDOFZNRYDK");
    msg.timeout = 26992U;
    msg.contents.assign("RJDYULUPPKZQJXOKOCGQCAUYBQEWMXEIYHFOODDFXVKBILHFUTDLZGIFRAQNTPHAHZXOPOCYTZWYEYEIRTRZTSA");

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
    msg.setTimeStamp(0.7843425817731593);
    msg.setSource(20118U);
    msg.setSourceEntity(104U);
    msg.setDestination(42189U);
    msg.setDestinationEntity(254U);
    msg.number.assign("PSNSOWZLZJNHAUVCQRKIUAMJONWHSQTYMWYDFYPNIHADQLIOOGOZFTVEX");
    msg.timeout = 52611U;
    msg.contents.assign("VIGHDQCOLSOGIRYAWWJYLGRLFAMBIVTCFKGSNOUEFXBQTKFUVPPBDEDYP");

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
    msg.setTimeStamp(0.8453562739447011);
    msg.setSource(6342U);
    msg.setSourceEntity(140U);
    msg.setDestination(19229U);
    msg.setDestinationEntity(43U);
    msg.seq = 156922502U;
    msg.destination.assign("VMNVOBXQCOIGNZALBYRGUPSTDLUKIQVQXLCVGHPHHHYMJZXGOSSJDXLPWSEZOZUTTROLRAFWJJDBTOFKAEAXNHRSTEKPHLNUXKCWFRVVCCMMOXWGQNYSYHXMFRNYZWJMIHECJWGYFMNY");
    msg.timeout = 31835U;
    const char tmp_msg_0[] = {-84, -47, 48, -4, -69, 92, -81, 75, -104, 64, -53, 82, 30, -49, 98, -34, -91, 40, -50, 57, 70, 73, 14, -5, 58, 24, -27, 90, -119, 4, -63, 46, -91, -37, 58, 62, 31, -123, 117, 82, 114, 60, -78, 35, -32, 102, 30, -94, 39, 55, 79, 121, 53, -48, -125, 108, -58, 94, -13, 51, -1, -83, 64, 77, -68, -81, 84, 76, 123, -65, 56, -124, 53, -79, -39, -113, -43, 124, 106, 71, -35, 50, 53, -24, -94, -89, 54, -116, 46, 18, -23, 27, -99, 5, -62, -90, -25, -16, 65, 73, 84, 20, 97, 108, 83, -125, -77, 29, -34, -52, 21, 121, -60, -107, -111, -111, -85, -78, 109, -64, -92, -66, 20, 42, 76, 7, 42, -42, 28, 11, 10, 40, 54, -30, 85, -31, 109, -103, 69};
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
    msg.setTimeStamp(0.545502162085433);
    msg.setSource(44411U);
    msg.setSourceEntity(171U);
    msg.setDestination(34065U);
    msg.setDestinationEntity(192U);
    msg.seq = 2111959779U;
    msg.destination.assign("FDSSOCDYTDKLJAKYJPFWCIPOPNJXEWOSOIUSMTML");
    msg.timeout = 29555U;
    const char tmp_msg_0[] = {67, -102, -103, -60, 122, 48, -18, -62, -7, -67, -39, 47, 63, -42, 60, -102, 29, -21, 102, -99, 122, 107, -29, 18, 106, -57, -16, 24, 48, 50, 3, 35, -91, -33, -44, -93, -89, 1, -83, -59, 116, 42, -118, -91, 38, -63, -59, 37, -82, -107, 40, -44, 47, -79, -38};
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
    msg.setTimeStamp(0.22445863490987938);
    msg.setSource(8010U);
    msg.setSourceEntity(166U);
    msg.setDestination(55370U);
    msg.setDestinationEntity(64U);
    msg.seq = 3507025813U;
    msg.destination.assign("HGJTKLPWITTRGPFUPWKKUZZOYAAJNZODJMGYMBFGAHSOACIMBVNZTKNHQLVYSCVYLDCLDWRVLJRREVQOXPEIGWCUFDMROXUDGNQDSBBEXAVMBFANKDECOUTKVHBEYRUNEMMDCVFGITDFIJ");
    msg.timeout = 7995U;
    const char tmp_msg_0[] = {-102, 53, -44, -86, -109, 57, -26, -116, 78, 104, 78, 107, 51, 93, -5, -108, 70, 12, 97, -8, 96, 87, -120, -112, -16, -31, 122, -18, -75, -22, -47, -23, 101, 23, -104, 66, -56, 68, -46, -62, 23, 31, -65, -66, -67, -74, 112, -69, -117, 44, 121, 73, -71, 110, -77, -81, -78, -57, 77, 101, 45, 59, 111, -91, -8, -17, -120, 121, 115, -17, -59, 13, 93, 40, -49, 24, -68, 76, -66, 115, 110, 69, -110, -110, 13, -120, -95, 51, -26, -110, 38, 52, -60, 122, -54, 74, 107, -96, -41, 46, -74, -105, 116, -8, 71, 125, 104, -124, 32, -88, 52, 23, -99, 96, 106, 10, -118, -7, 75, -46, -10, 124, -101, 82, 46, 30, 28, 32, 64, -62, 95, -10, -20, -76, -85, -83, 18, 10, 76, -62, 29, 63, -40, -8, 24, -14, -2, -86, -4, 118, -32, -69, 78, -93, 61, 91, -66, 11, 19, -5, -22, 27, 63, -17, 15, -5, -75, -108, 29, -114, -56, -56, -97, 65, 116, 24, 124, -43, 2, 9, 36, -22, -5, 122, -109, 59, -83, -40, 37, -108, -19, 124, 38};
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
    msg.setTimeStamp(0.035891476094238484);
    msg.setSource(27745U);
    msg.setSourceEntity(81U);
    msg.setDestination(2406U);
    msg.setDestinationEntity(223U);
    msg.source.assign("NYCBOCHQJWEIXHUFFIVIGFKVKHCUGAOFIEQAAJSYLWDZMIKLPWUECEVXMCUPAYDXASYMTVSZZPCFNNMXVZIBFPRQOKLCREWZGZQVMTJTBUTUPGIXVSGDXPQRJDGGAZGKHKELOHDBQBBDWCLRLYLSENSEHNTTOSRCVJRRUWXOXPBVVXZKDZ");
    const char tmp_msg_0[] = {-10, 114, 100, -85, -76, 30, 3, 37, -44, -2, 96, -98, 74, 95, 36, 102, -46, -43, 66, 87, 109, -84, -117, -98, 51, -19, -112, 91, 42, 27, -29, -62, -45, -35, -74, 16, 50, 110, 109, -8, 81, -41, 5, 11, -47, -71, -103, -26, 95, 53, 38, 5, -99, 4, -37, -84, 93, 11, -26, 53, 77, 104, -16, 66, -84, 91, -60, -82, -85, -22, 39, -24, -31, -37, 58, -79, -25, -48, -6, -115, 61, -114, -40, -123, -96, 39, -13, -99, -72, 24, 61, -86, 60, 84, 27, -67, -90, 126, -26, -108, 51, 55, 21, -30, -11, -115, 82, 20, -87, -49, 55, -2, 99, 9, -99, 15, -83, 111, 95, 118, -24, -58, -71, -66, -32, -46, 52, -23, -120, 48, 95, 51, -50, -9, -126, 57, 8, 86, 92, -78, 0, -84, 19, -13, -16, -79};
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
    msg.setTimeStamp(0.6851883185181725);
    msg.setSource(9682U);
    msg.setSourceEntity(222U);
    msg.setDestination(518U);
    msg.setDestinationEntity(108U);
    msg.source.assign("EOHZNJYHNQVVTFYUESYXQREKGAOPQQBQSECPRWKMUIBEJBPQNWCHUTYEHXBSWVPHNHCMMLKINZFEOUIPLFGDJPSHQNMUCBEVDVKYRRYXZIDMMLFIKGUMWITOHKREGSNBUZODXISPBLTXXJGZYMWWTKLTOFXUODACH");
    const char tmp_msg_0[] = {-6, -47, 120, -124, -23, -78, 63, -47, 106, -84, 111, 7, 113, -25, -115, -60, 18, 52, 60, -80, -123, -80, 27, -95, -89, 112, 83, -29, 43, 3, 11, -77, -73, -34, 99, 110, 95, -42, 2, 85, -11, 98, -18, -91, -111, -85, -44, -22, -16, 37, 84, -33, 55, -9, -111, -1, -71, -29, 108, 96, -7, 91, -4, -8, -28, -67, -110, -48, -95, -67, 105, -104, -63, -21, -38, -15, 86, 52, 123, -66, 116, 42, 110, -109, 114, -63, 113, -58, -17, -96, 0, 65, -52, 38, 44, 68, -51, 98, 7, -17, -80, 80, -90, 0, -76, -79, 107, 96, 50, 107, 107, 45, 41, -33, 57, -93, -2, 88, 5, 11, -71, 61, -74};
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
    msg.setTimeStamp(0.07322431594006784);
    msg.setSource(53805U);
    msg.setSourceEntity(94U);
    msg.setDestination(36169U);
    msg.setDestinationEntity(158U);
    msg.source.assign("QBCCSOYRBEJJIZMTFEAHLKJVWFUOYMSMZXXAEIEDTGFBKITEABMQZBSFRPDXURSCDNXTYIRQPYHVYXPWZWCDZUCONHUM");
    const char tmp_msg_0[] = {-82, -88, -56, 89, 60, -87, 81, 75, 37, -62, -11, -49, 53, 47, -15, -128, 108, 79, -110, -1, 35, 81, -128, 65, 25, 118, 122, 124, 126, 75, -55, -26, 114, -117, -89, 30, 22, -107, -108, -97, -84, -75, 27, 68, 25, 92, -113, 94, 107, -32, 123, -126, 116, -49, -103, 96, 81, -105, -113, 29, -118, -71, -112, 13, -50, 78, -100, -18, 88, 41, -109, 3, -21, -56, 112, 20, -76, -80, -103, -95, -72, -121, -32, -39, -107, -6, 67, -118, 25, -78, -6, -3, -91, -101, -31, 2, 102, -44, 120, -127, -119, 38, 66, 94, 3, -5, 106, 32, 72, 58, -26, -18, -34, 52, -93, 32, 67, -95, 49, -2, 42, 79, -64, -62, -32, 86, -127, -23, -74, -28, 122, 67, -100, -61};
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
    msg.setTimeStamp(0.939051819185324);
    msg.setSource(47950U);
    msg.setSourceEntity(216U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(64U);
    msg.seq = 2557440316U;
    msg.state = 132U;
    msg.error.assign("OHGJFRXIBZHWRTYYDGDJLEPNQSMCYFDULZIATSJHEBIOJOMBLDWXEQCXEJDQKVYEAWNVGXUCTIAWPVMLOLXBCMFHQIPMZQVAMKRRSMFSVKTEDHUJKCSIXUFTMDBZRWOLJAALWNGROZVKNEYHRCGWFNRKJZXXHXFPVDNTZPQACYXGEUUQFOCZOBBWCFBGKVKLPVKTAJGIJUMPWATLNMUSSQESQPIHH");

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
    msg.setTimeStamp(0.28099672142731524);
    msg.setSource(50476U);
    msg.setSourceEntity(234U);
    msg.setDestination(48536U);
    msg.setDestinationEntity(82U);
    msg.seq = 1239945788U;
    msg.state = 59U;
    msg.error.assign("SWTTJDBBQLYXF");

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
    msg.setTimeStamp(0.7762179507324102);
    msg.setSource(17828U);
    msg.setSourceEntity(4U);
    msg.setDestination(43099U);
    msg.setDestinationEntity(195U);
    msg.seq = 4175150818U;
    msg.state = 212U;
    msg.error.assign("EMYCLGIWCDXTMEXLYIZUHPDDQOJWNDORRRXLXOWNFOZNBZACARFVLZVRLGOGHCSHGKPAQWJYSXJXMKNDNRYNVTFBVFOEUBPSYWRQZCOIEVSLFQDQTMVWDILJJBHITCPSSCSFQJTDJNJZKGKZEXZYLMTATUNJYXEHVEUZVPEMUVHAUKMBAKRQNINCRGLTHXMSVHKUFKTKYWCBSQGBIPPJUBYOHEPMIZMQAOWRWQ");

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
    msg.setTimeStamp(0.9751457260744031);
    msg.setSource(63141U);
    msg.setSourceEntity(69U);
    msg.setDestination(18224U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("IEXEPHYORAQVLPGGLMJHGNIGDEQNIBOZDESLBLLJBPVQSFQEGQKPMJVCLIGWUYBVUVMPDIUKICBWHECFDDOQTNVOTIUDOTQMTNAXZFAYYAAYSMDRZFNKKHSSXZYPNZJFRRUHNFSMPEVQCMYTZGNVSJURUWJP");
    msg.text.assign("MVRHNLEEANEWOWFZARHFVNVKLPGIAUOWIEZWBATGKVIFUDVTKREYUOSBNRSOOKRHUSDCNJCMGMSCXZPGBJSOSXZAGAPLDCXJXBWBLYPWCUWQVQYJEMYUKHXFDOKYVPDIUSCQPWGFJIAVKZMTGNPTTAPCEKZTXKMDTLEFHTLDPQHMTRXHNOFOJLCYEIRBBXNEQGPIQDBUQJMYXZVRLLF");

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
    msg.setTimeStamp(0.047044406287734986);
    msg.setSource(6241U);
    msg.setSourceEntity(75U);
    msg.setDestination(47110U);
    msg.setDestinationEntity(228U);
    msg.origin.assign("STFIWCRJQZVPGCWBIEGGQPFLGBELAYEXAMNZLVNLPEAQUOCLYXRMMTULIJLQTSPMCZNMUIVSBBSUYTNLFDDNDEKKGXYUVEYJFXFPPMWCSCIHEWFRTCYNVRKZRRDQNVOBJPAHQEUAPRWMKDZTZSNXCVUBKKAYIGMHJJGSODOHGKAWUIHEGZTJQFXMFBHHQVZONUGOHBWFMVKSOPEZDRRBJSXDFHYDYONTKIAXLTKOSVJCQYUXCJT");
    msg.text.assign("GXDFTPWARBNHLUJWEEVGBGMHIYMLGLRBVKJEXJUYRVEXUDJXCAMUGLBJZEHFSVWTQQVKZNVJOQRWNYKZEYNTFTWNWPFNKKTUSHRZUUMFBKAOPXTAECDFAXULCXOQIDOQGHPKZDOIHIBHP");

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
    msg.setTimeStamp(0.9047328525802454);
    msg.setSource(8917U);
    msg.setSourceEntity(199U);
    msg.setDestination(38536U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("FDVICOGPUHXWXERXICHPFEPHNRWFKMSYLSRHMRKOUTUTYZGJFXBWPEEQEMTKQAEIFMKFLHLZHNADVIBMVZGEJCASCOKDDGSVVCTXMIKSPJNXYZYUIJDOBWLNGUWQGAEAZRDMHQFNUAOWCQLNXTVLQPDQMBYIJEGWCJQVHSZMBXUZDRYWIMNROLFSGAAJUBOAKZJYBQNVURLIWRKZP");
    msg.text.assign("XOGWDLSDHSRTADAXZYQLLCATQFJDSAMRFTYSDXXPFELKWIBJHNHGPDNGYAMEUINCUKQTUKTQZASMOLGFAQCRYVQNYCGYCESMPJXFKCTBOWRNLVHVKXFZAJOZPWJHCERSIURVGPGPXPCIKDOILLDQBSPPAJJYONWGLRNGNEC");

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
    msg.setTimeStamp(0.24316478558595367);
    msg.setSource(44225U);
    msg.setSourceEntity(46U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("FJVWYUXSHQQQRPIGTBBLCIXAXSDHIMNZRCAMWKUOSKAZLDMCWEZWEMAOZGXEGVDCVUIBIULMENMHSKNKXTXQPWJWFZFOLYIBDFDY");
    msg.htime = 0.7104280857726973;
    msg.lat = 0.9059613833160234;
    msg.lon = 0.6548576385446251;
    const char tmp_msg_0[] = {81, -84, -60, -1, 98, 34, 119, -90, -6, 64, 67, -12, -17, 105, 118, 125, 123, -75, 13, -43, -53, -89, -128, -126, -113, -90, 82, -2, -27, -93, -37, 76, 17, 82, 57, -93, 9, -70, 80, -128, -5, 64, -75, -126, -91, -2, 26, 34, 39, 111, -118, 60, -102, 20, -40, 45, 40, -38, 44, 78, 52, 112, -28, 58, -6, -68, -119, -95, -18, -85, -96, 116, -128, -12, 71, -125, 21, 119, 3, -79, -119, 45, -49, 69, -124, -115, -7, -57, -10, -64, -111, 106, 77, -64, 68, 57, -73, 123, 66, 84, -19, 115, 0, 88, -14, -101, 73, -86, -73, 106, -34, -89, -17, 76, 13, 124, -125, -61, 63, -100, 106, -128, 3, 92, 104, -109, 117, -120, 27, 62, -126, 47, -19, 123, -51, -5, -89, -35, 59, -113, 2, -123, 75, -16, 94, -38, 59, 29, -39, -28, -110, -24, -80, -95, 7, -55, -85, 103};
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
    msg.setTimeStamp(0.38488216097641825);
    msg.setSource(32627U);
    msg.setSourceEntity(60U);
    msg.setDestination(12768U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("AZJBJZMLFHABBFNKUEJQDASZRKTOAUZQIARFXCVPJOHZDWKLCSSICVMXNBSHEYYSYINHQPNABSASTDZUWBCVVMIXUADDURIITPYFCMWFRXTDXECQDKYUNDJLNLGCFQIPFLNRRJOKYTMQLKPXNGTXWJUTGPHTVELTWVEYICLHQAJOG");
    msg.htime = 0.8365677115478497;
    msg.lat = 0.22256233942296189;
    msg.lon = 0.9005929100689766;
    const char tmp_msg_0[] = {-56, 39, 37, -62, -42, -108, -86, -57, -25, 82, 28, -79, 109, -13, 38, -31, -26, -79, -112, -26, -81, 96, -126, -42, -120, -70, 106, -111, -71, -16, -47, -68, -59, -15, 0, -95, 42, 123, 91, 44, -77, 12, 30, 106, 66, 85, -99, 67, -118, 97, 54, 15, 101, -1, -59, 116, 12, 93, -69, 124, 102, 78, -24, 71, 29, -91, 62, -49, -91, -78, 83, 56, 86, -56, -46, -122, -115, -128, -124, 69, -114, -26, -58, -9, 113, 11, -55, -47, 74, -103, -18, -123, 117, -99, -78, 115, 104, 124, 4, 99, 53, -83, -58, 107, -51, 110, -91, -107, -113, -91, 124, 95, -96, 108, 17, 93, -8, 65, -23, -91, 112, -114, 75, -71, 98, -110, -65, 121, 91, 107, 93, -25, 42, -23, -38, -127, -124, 96, 5, 4, 40, -78, 17, -63, 46, -54, 43, -4, -67, -8, 37, -45, -81, 111, 79, -2, 3, -29, 2, 22, -114, 85, 31, -105, 68, 47, -100, -64, -62, 5, -6, 15, 99, 63, 8};
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
    msg.setTimeStamp(0.061447532400844884);
    msg.setSource(44717U);
    msg.setSourceEntity(25U);
    msg.setDestination(15874U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("EPEQEOPTJXXCGSADWPXRHKEHIVGJIIYRGTCUDMNITSRNAODDLSZOCCEPTCKYHFIIIAGBHQLNMAVXOAUTJVDUSSJVONPSJQZBFALRKWFFZMPZJVKXSIUCVOEQXWYBYUEWHTMRGLPYXUW");
    msg.htime = 0.4200445392557316;
    msg.lat = 0.3979436807509802;
    msg.lon = 0.8501956038600694;
    const char tmp_msg_0[] = {-60, -17, -125, -19, -65, -52, 1, -113, -64, -70, -33, 29, -117, -43, -107, -128, -41, -40, 112, 87, 43, 93, -114, 0, 61, 99, 8, 57, -8, -56, 30, 73, 25, 3, 73, 93, -3, -116, 29, -19, 49, -79, 69, 62, -128, 58, -75, 42, -81, 104, 96, -44, 123, 57, 48, -93, -1, 95, -1, 122, 102, -21, 9, 46, 89, 82, -104, 106, -84, -85, 105, -125, -103, -21, 71, -24, -20, -94, -46, -80, 124, 109, 43, -42, 87};
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
    msg.setTimeStamp(0.5863386056199921);
    msg.setSource(39324U);
    msg.setSourceEntity(154U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(83U);
    msg.req_id = 46996U;
    msg.ttl = 7961U;
    msg.destination.assign("CJWJZEYJNEQHSSEWNREOELSTJDCXIYKJRJJPUICSTGBVHIJEYBLHKNBOXBUWAFROFYELXMHFVMAXPZVQBFNZWGMPLKWSXOSIZCQNTLUGXPABOEW");
    const char tmp_msg_0[] = {122, 42, -90, 126, 110, -77, -128, -113, 78, 34, -74, 36, -57, -6, 27, 99, 52, 21, 14, -111, 0, -124, 51, -3, 53, -92, 41, -43, -77, -3, 65, 88, -68, 100, -67, -26, -23, 3, -115, -44, -92, 94, 6, -79, -26, -90, 29, -62, 68, -94, 3, -105, 38, 112, -102, -104, 64};
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
    msg.setTimeStamp(0.25840787249350683);
    msg.setSource(49792U);
    msg.setSourceEntity(127U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(217U);
    msg.req_id = 2604U;
    msg.ttl = 37572U;
    msg.destination.assign("XDHYYXEINOLYQFNGHIDCTSSKUKAONQWZMPKQYAOFQFBWHSRRMGQRHRQTZVALNIEGCTOCESUPHVFWDJXNUGZGWCVVFDLOKWLYADUMFLBDLRKZTSTBXCJBSNNDHGIRUDJITRTFWIBVIISACJFEABZHKMWPOMTPWPCZGPSDKVBHLVURQSGXEMEZBAONYMUHYNEMQYVKXPCOPZXLUJBXG");
    const char tmp_msg_0[] = {-15, 72, 21, 122, -10, 72, 18, -51, -119, 3, -102, -18, 117, 32, 69, -31, -27, 84, 89, -86, -103, -104, -108, -32, -9, 108, 18, -88, -106, -26, 18, 54, 4, 52, 79, 125, -75, 58, 58, -117, 37, 107, 126, 124, 100, -23, -35, 53, 12, -121, -118, -39, -43, -52, -82, -46, 47, -61, -72, 52, -78, -103, 15, -94, 40, -77, -57, -34, 100, -64, -65, 68, -45, -7, -70, 77, 104, -94, 44, -38, -109, -30, -16, -84, -68, -84, -88, -23, -36, 53, 44, -22, 76, -116, -118, -40, 18, 100, 13, 67, 113, 121, 58, -124, 85, -71, -64, -46, -111, 4, -117, 0, 16, -116, -67, -93, 36, -107, -126, 1, 122, 66, 41, 50, -77, -124, -99, -24, -114, 101, 4, 122, 84, -35, 71, 77, -70, 103, 45, -58, -97, -85, -117, -39, -81, -12, -74, -28, 40, 87, -78, -41, -112, -52, -91, 62, 106, 39, -82, -16, -33, 112, 38, -31, -87, -101, -5, 72, -121, 48, 61, -112, -61, -18, -19, 53, 110, 53, -36, 15, -111, -74, -63, -113, 46, 103, 44, 39, 6, -43, 99, -115, 95, -37, -113, 49, -61, -100, -55, -97, -30, -84, 100, -37, -84, -43, -20, -21, 72, -99, 117, 43, 52, -52, -72, -103, -93, 44, 77, 105, 80, -31, 34, 59, -38, 101, -4, 38, 86, 119, -50, 34, 53, -72, 66, 95, 35, -59, -20, 42, -62, 121, 30, 65};
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
    msg.setTimeStamp(0.27370332283294874);
    msg.setSource(2764U);
    msg.setSourceEntity(211U);
    msg.setDestination(55474U);
    msg.setDestinationEntity(53U);
    msg.req_id = 25464U;
    msg.ttl = 34166U;
    msg.destination.assign("QVZUNRJHRNDCHGFXIOCEIRTOAFXQMTWZCAMKLYNPLZEOSUUVMINKWXIIJQSSDPSTPQGOFELDTVKNAFFALPXVWQIMMJYDNMJZMBHTIBTWJGKFVHDEDZEVCSNXIYKCOFNPPAYWCTHWFAFGGOGJTHZWYRRKCHEMJBSYIRQQSOGGYZOYFEUSBXWRGCWAGDQDEUNRRSDBEPHBZBHPKCAIYBCULZOUZUKKUUAQWNBSLMXBTAHJLDVOXLYE");
    const char tmp_msg_0[] = {78, -94, -73, 18, 15, -13, 38, -45, -46, 4, -55, 62, 59, 39, -55, 102, -92, -42, 97, 94, -33, 120, 110, 47, 43, 78, -17, 68, 106, 76, -6, 106, 31, -106, -34, 106, 6, -25, -101, 106, 4, 117, -121, 113, -2, -97, -4, 39, -85, -2, -19, -45, 73, 126, 35, -77, 86, 54, 13, -73, 123, 10, -67, -30, -1, 56, 74, 38, -86, 43, 50, -67, 44, -127, -43, -108, -40, 52, 12, -57, -113, 68, -13, -11, 77, -125, -45, 84, 9, 113, -45, -40, 60, 2, 37, -62, 38, 88, -2, -94, -12, -128, 102, -68, -14, -9, -63, 21, -32, -120, -1, -119, 6, 60, -8, 4, 64, 55, -50, -5, 79, -1, 113, -62, -36, 53, 41, 69, -55, -37, 80, 35, 112, -65, -84, -38, 92, 90, 81, 56, 58, -20, -30, -127, 79, -96, -27, 77, -8, 15, 117, 116, 46, -109, 52, -98, -39, 35, -19, -104, 57, -40, -6, -63, 15, -100, 101, -106, -34, 2, -120, -30, -80, 51, 120, -115, 61, 78, -69, -66, -37, 53, 107, 18, -122, 41, -48, -15, -122, -17, -47, 111, 31, -88, -33, -33, -24, 66, 60, -25, 6, -49, 78, -68, 99, -31, -82, -61, 48, -40, 75, -55, -22, -61, 60, -19, 76, 57, 8, 120, 101, 94, 119, 12, -26, -13, -35};
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
    msg.setTimeStamp(0.7937717991246204);
    msg.setSource(53281U);
    msg.setSourceEntity(181U);
    msg.setDestination(60817U);
    msg.setDestinationEntity(176U);
    msg.req_id = 24044U;
    msg.status = 81U;
    msg.text.assign("PJOBJUKFRQYWOKDMEXUJCROPNMMZWTWAOYTLLOKIXXBCGAWFBHNSQYNCESYBNRPPGYWWHCSVDMVFFITZHWCOAIBZBYFKJBUOGRSLGXZTYNORHLHEGFCAVQUGRXWADQJMKUHRJAULQLXUNARQEVBZSFVBOICWJIXQMCAVKPDJQEMPKZTDINCPPSKX");

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
    msg.setTimeStamp(0.7832993430682369);
    msg.setSource(56481U);
    msg.setSourceEntity(233U);
    msg.setDestination(42100U);
    msg.setDestinationEntity(223U);
    msg.req_id = 44133U;
    msg.status = 211U;
    msg.text.assign("GJYMLDPERJZMJTLDPRMDFTUVXCKQYPIHUIVPBUPSBHPPSGTDMRNMQYTKARTFELJWQLXZWPRUAHROTNAWAJSYCVLQVCFGBZSOIVDZKKNQMT");

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
    msg.setTimeStamp(0.8708132578144688);
    msg.setSource(54272U);
    msg.setSourceEntity(22U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(215U);
    msg.req_id = 22432U;
    msg.status = 5U;
    msg.text.assign("PJKDEXRNGMDKAOGVYWXUUKPBJUFTULUAQDFNAWVTHIAWVRFLYLCCHXNTRJJTVPUTISTZMJHKZVWQBMSSQGQBKI");

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
    msg.setTimeStamp(0.03784139088866301);
    msg.setSource(25351U);
    msg.setSourceEntity(125U);
    msg.setDestination(14672U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("OOLXHHGHQBAYTXUBEVVGHIPGXOMPDWLUTECYDJNLHJQWQLXYFKCTNUJHHIOFVVACGIPAIFJQUXVTNYMDAZFLTMSBGNHEJRPWIEUQNZWNYBSORVWXEYXCURZFPPEKUQKKOTFADWCZHDLLMUSIPEWSMFTIAGNBKAXQZUDQSKEGYVRRQAOMTEEDBWSMISKDVXGTJLAAFVRKJPZGWL");
    msg.links = 3883246683U;

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
    msg.setTimeStamp(0.29060946348876215);
    msg.setSource(38395U);
    msg.setSourceEntity(254U);
    msg.setDestination(8998U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("KKIBYPGPFTUNTNDZRGLCSQXZCOFZDJNJSGYEZYIBVNEMESEQKSVCCEGVAPZXQCBDQKHDQLFZLRUABUPITUUNHOCVLNVQRAFEWPWRZWKRGELALACEJUBL");
    msg.links = 1492888173U;

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
    msg.setTimeStamp(0.9761688991921403);
    msg.setSource(3608U);
    msg.setSourceEntity(182U);
    msg.setDestination(56892U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("YZNPRVVWSRZGRAUCNBTMKPYIVUCQVNLAXJPZZNMADLWOOGDCABMGYBTMLFLZEIZNQHMYYZGNOITNBMBWSBRIIKQWTASNEKCFILCQECYIZXWWRLVSXTYDTVQOGXJROEUTJSJMFKUWQQFLZJSWJKRJHGQEMPIYKPDTWKMPOKAICFHMJNBUSSLGRYHYNUAJEVFHXSAUXSEZRPGDRKBLQBUDFHGGCLFTEC");
    msg.links = 3118725326U;

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
    msg.setTimeStamp(0.27333053885508163);
    msg.setSource(59383U);
    msg.setSourceEntity(10U);
    msg.setDestination(9320U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("HERWJRKZOUVYEQZKXCFWGDNBRYYCSJTCYLQFFQKGUZXETCIZKYIVMNRSDJOJDKVCJOIBSLRHDUXSPYSEFHGIMXNPMNSDUAEFTFDWTJQVYAHDPLAWOLPYVGPQZHRIBXWUXCECBJMMJAEZBOLJHYKTXPQHTBBHLCOPUIEKYAKQOIPGIUBXWLHMNSUNOAKMWQWAQLVTPGUTVMKWUFVAXELFZGFB");
    msg.action = 19U;
    msg.grouplist.assign("FOKRZXYZQKCQVTERWIAEIWECMIKBXSUGUDOZEXDHVZRAYFSITOFBMXWBHQQXBJNYVJXTYZPLGL");

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
    msg.setTimeStamp(0.9553305201738467);
    msg.setSource(42753U);
    msg.setSourceEntity(49U);
    msg.setDestination(9818U);
    msg.setDestinationEntity(24U);
    msg.groupname.assign("IBVUXVMUOHHLNHCRMKSUVLNDIAZNEQFJIPMSRFRZRDZCLKSFHVABPGRGIXJUNFCDOWGXHTQCQWWLSGXIGAZTPOPTDA");
    msg.action = 104U;
    msg.grouplist.assign("SXELLENMAVDERAEATNMECZHYIFYUIWNPNMFZBYAOPBUMTDLQYNGQCJSBGVRYFOZPJXXNJYNUCRPPCIZRDYHXOPVABFXBWIVDQREEIJQWHKEOZARSGQWTLSUVQIKTSHTMTBKILJGCKYZTGVDHXNDVJJYVEJTUKQFROLOUSYGNZDGVNAUTGJBKPQLMPMXFRHGWXBHDXHKUAJKZILLSOFSHWCZKGCQTREDOPCIVMBHDUBPZORCFSFCMQU");

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
    msg.setTimeStamp(0.21779807773235305);
    msg.setSource(5192U);
    msg.setSourceEntity(177U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(42U);
    msg.groupname.assign("PCFMIXFRUTZNYMACLXFSSKWKYGBDXIHEBWRYMKUUZVJPKMYALT");
    msg.action = 97U;
    msg.grouplist.assign("CFMTYWLHIEQFUIFANPCMMKQMUVDGDCCZCXUHXXDYTZGVINBMLTABBEJITRGNYFXZZVSEERNAEMCYSJIBQRWWPWMDCAHSVPIAOHVIKPVIKWQDWGBFUQSDXADMNWJRQRTOVZNLEPZFCNUHVZSPBYCLATEKQRYVKAHHFAFYQWGFOJSFUXQKKDNAXYLJPURGUZGBTJLQNPTOOKJURRGIHONPDXGJRGSLSCTWWHILOOHOJXLDEBBTE");

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
    msg.setTimeStamp(0.7794376367321906);
    msg.setSource(12147U);
    msg.setSourceEntity(125U);
    msg.setDestination(59942U);
    msg.setDestinationEntity(152U);
    msg.id = 90U;
    msg.range = 0.3350245856430625;

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
    msg.setTimeStamp(0.8051209158197031);
    msg.setSource(231U);
    msg.setSourceEntity(206U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(201U);
    msg.id = 114U;
    msg.range = 0.22296862171394083;

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
    msg.setTimeStamp(0.266192135322476);
    msg.setSource(33696U);
    msg.setSourceEntity(2U);
    msg.setDestination(65145U);
    msg.setDestinationEntity(159U);
    msg.id = 13U;
    msg.range = 0.41095636162114213;

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
    msg.setTimeStamp(0.942029262152029);
    msg.setSource(29288U);
    msg.setSourceEntity(168U);
    msg.setDestination(14325U);
    msg.setDestinationEntity(227U);
    msg.beacon.assign("FEOCAQOEQKGYALOBPYVESCBXITOTUOTKELZ");
    msg.lat = 0.2939688380833124;
    msg.lon = 0.5987207496828646;
    msg.depth = 0.334377385865239;
    msg.query_channel = 42U;
    msg.reply_channel = 151U;
    msg.transponder_delay = 110U;

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
    msg.setTimeStamp(0.1735461874762655);
    msg.setSource(20685U);
    msg.setSourceEntity(100U);
    msg.setDestination(32338U);
    msg.setDestinationEntity(105U);
    msg.beacon.assign("IXXGNJOXWUDLELGUVIYNAURIDNLECXRTWFLBBWSIMFODIQHRGUPDBGEIGBCZVUTNVYUCJIKMTPFMPJWOC");
    msg.lat = 0.36415089186289196;
    msg.lon = 0.49909073349034183;
    msg.depth = 0.4342435379968437;
    msg.query_channel = 177U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 40U;

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
    msg.setTimeStamp(0.080082454919992);
    msg.setSource(20901U);
    msg.setSourceEntity(19U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(56U);
    msg.beacon.assign("NKZFBKAUEJIQMKEERDHVFZJYXZOONLGDSWAJYXSLLIKWSWZACY");
    msg.lat = 0.8501898092747631;
    msg.lon = 0.5111582590544638;
    msg.depth = 0.33230565153497404;
    msg.query_channel = 197U;
    msg.reply_channel = 27U;
    msg.transponder_delay = 14U;

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
    msg.setTimeStamp(0.524927720241469);
    msg.setSource(39505U);
    msg.setSourceEntity(143U);
    msg.setDestination(44343U);
    msg.setDestinationEntity(108U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.3062241415353816);
    msg.setSource(18917U);
    msg.setSourceEntity(191U);
    msg.setDestination(4097U);
    msg.setDestinationEntity(238U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.9164067162081043);
    msg.setSource(32962U);
    msg.setSourceEntity(8U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(56U);
    msg.op = 62U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EBDDTFUQHGJCMEKTANFKGCZLBLKQVZDODTIYMCZMXEYIJJPFJGVSRLOTDMRABQIRUVQLWZSA");
    tmp_msg_0.lat = 0.21494132794026422;
    tmp_msg_0.lon = 0.3521049322001758;
    tmp_msg_0.depth = 0.7490255662488877;
    tmp_msg_0.query_channel = 186U;
    tmp_msg_0.reply_channel = 113U;
    tmp_msg_0.transponder_delay = 115U;
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
    msg.setTimeStamp(0.8885064167806331);
    msg.setSource(3391U);
    msg.setSourceEntity(177U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(93U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 1729U;
    tmp_msg_0.sys.assign("IIYMLKFHUBZRFOSIWOBDEDPNRMAYLXBZYIMKMGOUGUQTQZTHAUBDGAWPZPIQF");
    tmp_msg_0.value = 0.9748548196047685;
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
    msg.setTimeStamp(0.32305032528235067);
    msg.setSource(29099U);
    msg.setSourceEntity(188U);
    msg.setDestination(17502U);
    msg.setDestinationEntity(205U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.plan_ref = 212440446U;
    tmp_msg_0.id.assign("ZTZGMWPTAFKQVBYRMZHOSCHHYDXBUQOUJLBWZPNVEYGPRALWCUVLLTGIFPHSPLTXODYLCKRSUGMNPAXIICXMBKIZQSMKBKVXWMAASQKPJEVXTRVRXVHGCDHFVDLHOQRKJYFNHRDPBBEENPJOWFZSCNLYOGVXOVDCTGOSHXLECMZCAQWFIQRYFJCMZKYFNTRWBAASETRJBFJQEEWNKYINUDWINFUGWLTEJPTBAIIOUOJQI");
    tmp_msg_0.memento.assign("LCDYHZVTSYWKYXZBAGAKXTWSUMCFGAIRNLRNFUSICYHMCHVSDINJXKATDLHTHWJQHFQTVQFFFOFBIHUFDXHTNINPFROLWRVIZZ");
    tmp_msg_0.timeout = 17079U;
    tmp_msg_0.lat = 0.18357956671833264;
    tmp_msg_0.lon = 0.30371456637457783;
    tmp_msg_0.z = 0.805332146718789;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.speed = 0.12320313253974902;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.bearing = 0.6819428450498407;
    tmp_msg_0.cross_angle = 0.08051749686044418;
    tmp_msg_0.width = 0.3310846989314197;
    tmp_msg_0.length = 0.41115581998591577;
    tmp_msg_0.hstep = 0.9728821614815878;
    tmp_msg_0.coff = 224U;
    tmp_msg_0.alternation = 76U;
    tmp_msg_0.flags = 222U;
    tmp_msg_0.custom.assign("RMBAJMNBPNPRKJDRPTZCIVTXNIZMPYZUAMNFBWJDRGWFXEZZHIEQGNPLHTZEWULRSKWREUPHOUQJFQJTCBVVXUEZFSHFHBOCFQTIFMOIAVOTOQWMVXGTBQTPOLZLCAQYCPUMNDAJLYXUVWKNIEQWRYPXAGRASSAGEAUXLDWGZJIKXSYKHBVSYJIGLNYXCMBDCLLTHPHBQDFUQWKFFDTS");
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
    msg.setTimeStamp(0.624598628280577);
    msg.setSource(51680U);
    msg.setSourceEntity(64U);
    msg.setDestination(59238U);
    msg.setDestinationEntity(160U);
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MKTNXXYFVMBUXYVKLJRYMBZEQQBAKYJXXBIDGRFAKLDZSETMBOXGASNYJICGOUQFCDSYTBURPKKFCLUIDDJODLSTHBCCJNCOLJTHYFSHE");
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
    msg.setTimeStamp(0.6526810365938419);
    msg.setSource(32668U);
    msg.setSourceEntity(253U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(106U);
    msg.op = 204U;
    msg.system.assign("KZEALBZNLZABWLHQUHNDOKMXDGVOVZEQFNHXTIEDXHZYLHFOESTXSVPIQWMWCUGLDQFPQZUAJDKENXMAMAYSXGC");
    msg.range = 0.6302324946779785;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.plan_ref = 788181102U;
    tmp_msg_0.id.assign("LJYDNOQQRFNXHPNCBIVGVQWAJLPMIDBQWAFXATXJZFMUHZTNGECNZTXAPAKCOOJPBXFZLTYSCARZSAWFJPGWQWSUSCSYSLCGFBKHXIXIDZDEFEUNZKIENOQRDZXLDYBMHQKOVTDMCTKBSPNIRGMHWBYQCVMDHZXAIIBYVUHKCIBMZJIYJLRFWPETUGHVEXEELOAPNYKUHJWRTWJKJOGTHK");
    tmp_msg_0.memento.assign("AYBVCTSSOULWFWJUAZDJZNXYWOMECDEKVURBQRQMPLTKMNIDWIJZXPGXWTWGNUEQMNCFOBLC");
    tmp_msg_0.system = 22550U;
    tmp_msg_0.duration = 50601U;
    tmp_msg_0.speed = 0.006753314397586863;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.x = 0.09320660326625174;
    tmp_msg_0.y = 0.9430928290980033;
    tmp_msg_0.z = 0.85609024025799;
    tmp_msg_0.z_units = 178U;
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
    msg.setTimeStamp(0.18600310239467077);
    msg.setSource(15368U);
    msg.setSourceEntity(82U);
    msg.setDestination(4583U);
    msg.setDestinationEntity(225U);
    msg.op = 14U;
    msg.system.assign("ZTIUYROYBUWTWHUTTYLQMJAIPHSVUOOKNLMIJPWHLV");
    msg.range = 0.8402428512058697;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.3909568122067195;
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
    msg.setTimeStamp(0.7488381163896547);
    msg.setSource(2156U);
    msg.setSourceEntity(97U);
    msg.setDestination(27241U);
    msg.setDestinationEntity(90U);
    msg.op = 33U;
    msg.system.assign("BBUSGAHHTVRFEUYDYXVJLIJGPDEFRAVBYSDTEJXRRFJIHYIXSKQLVHKMGMDTAUQXGAOECKCQBWZZWDYPWBCFOFLIBAKOWZOTRCEMTXCLZNCZVIJMWGXIQGBMCQMNHHOKEHPYWEWLYOAOKQQLWJXVTJFKSPKCAFIIVDZNNINBIMPZYDSQAXQUNRLLRLHNWOGANCHKPPHZPRJMSPTOPTFNTOUNEUFWTXDDRGMAJV");
    msg.range = 0.2205076153544313;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.7632983041788672;
    tmp_msg_0.y = 0.34784825367403227;
    tmp_msg_0.z = 0.5931122476892448;
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
    msg.setTimeStamp(0.4243856037240763);
    msg.setSource(229U);
    msg.setSourceEntity(35U);
    msg.setDestination(9127U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.2209913487192775);
    msg.setSource(37829U);
    msg.setSourceEntity(142U);
    msg.setDestination(22400U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.11676038601787675);
    msg.setSource(61531U);
    msg.setSourceEntity(30U);
    msg.setDestination(52506U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.3061167223042027);
    msg.setSource(17081U);
    msg.setSourceEntity(130U);
    msg.setDestination(35924U);
    msg.setDestinationEntity(200U);
    msg.list.assign("ILLGFSQSOYAUNOFJEBITHQKKMDEUKFJWRZKRAPAAWGQJDXPVKOZRLTVTWNCSPGJBLWONJOHYXCIAVGTFSGAGNLZPCVTCTSNBHYIGNLMUDENYUSHXKLJUSCJBTJSWZPDYCXRFLTDOYQUFKHGKTZBHTDNHYMIWPAXAEXNPWHRFFQVUVX");

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
    msg.setTimeStamp(0.35261268512163213);
    msg.setSource(8724U);
    msg.setSourceEntity(133U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(252U);
    msg.list.assign("BJKDLPSHFWJVQTDQVPVREOTPQJAGOHWGIRAAUYMIOOLXZHAPTVUCLWEPXBHQJOMGENRGZFSGSTBIMCEFJHOFSYYYDANJFPTCZDJLWUMVUMLLFFEYXOCCODQZESUKKVGBDUEZAUNSTCCLSVWMHWJVFARNSGV");

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
    msg.setTimeStamp(0.3233193265914418);
    msg.setSource(51228U);
    msg.setSourceEntity(152U);
    msg.setDestination(64579U);
    msg.setDestinationEntity(207U);
    msg.list.assign("RRUGHNJPCCWYPEYITGEAQXSBRXAAJUPSWBGCUINFOMXFRJWRVSWYKOTVJFLXGUTMMAHKNZMDWHNZNLMHXXIZKPUNEBZCFTSHRQUXROEOBUDEOPZLDBPUZJSOVEPDHNLVEUQGIAOYGLZJXOQWCITATVGCBAOFAYMILFIYHNDCEWSZPHCKSCDTUVKTMXCKYOVDMFPMMNQLTBLHSISYEZFQIWRBVRFBJQXDYAQQWKQD");

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
    msg.setTimeStamp(0.3609615917090069);
    msg.setSource(35202U);
    msg.setSourceEntity(94U);
    msg.setDestination(20837U);
    msg.setDestinationEntity(134U);
    msg.value = 16408;

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
    msg.setTimeStamp(0.026219542876806834);
    msg.setSource(55666U);
    msg.setSourceEntity(241U);
    msg.setDestination(26667U);
    msg.setDestinationEntity(29U);
    msg.value = 25672;

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
    msg.setTimeStamp(0.5765570476192925);
    msg.setSource(64267U);
    msg.setSourceEntity(214U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(62U);
    msg.value = 23416;

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
    msg.setTimeStamp(0.587335574352688);
    msg.setSource(48412U);
    msg.setSourceEntity(126U);
    msg.setDestination(5819U);
    msg.setDestinationEntity(144U);
    msg.value = 0.696989713014046;

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
    msg.setTimeStamp(0.23065603312266814);
    msg.setSource(43379U);
    msg.setSourceEntity(241U);
    msg.setDestination(51631U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6380283724522451;

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
    msg.setTimeStamp(0.10864776781913754);
    msg.setSource(35410U);
    msg.setSourceEntity(237U);
    msg.setDestination(17450U);
    msg.setDestinationEntity(16U);
    msg.value = 0.00338439896220899;

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
    msg.setTimeStamp(0.19118941478952378);
    msg.setSource(16133U);
    msg.setSourceEntity(134U);
    msg.setDestination(53383U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8918573866340698;

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
    msg.setTimeStamp(0.4585974695343553);
    msg.setSource(28162U);
    msg.setSourceEntity(46U);
    msg.setDestination(29360U);
    msg.setDestinationEntity(8U);
    msg.value = 0.9317030812120938;

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
    msg.setTimeStamp(0.2279780657134014);
    msg.setSource(40758U);
    msg.setSourceEntity(18U);
    msg.setDestination(8004U);
    msg.setDestinationEntity(232U);
    msg.value = 0.4269605589069304;

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
    msg.setTimeStamp(0.728263237219366);
    msg.setSource(60588U);
    msg.setSourceEntity(246U);
    msg.setDestination(9491U);
    msg.setDestinationEntity(243U);
    msg.validity = 55156U;
    msg.type = 55U;
    msg.utc_year = 17118U;
    msg.utc_month = 224U;
    msg.utc_day = 11U;
    msg.utc_time = 0.8026849595621466;
    msg.lat = 0.3712625274119038;
    msg.lon = 0.5990080631452228;
    msg.height = 0.017118390670742833;
    msg.satellites = 136U;
    msg.cog = 0.0948377328663077;
    msg.sog = 0.7450089655112951;
    msg.hdop = 0.05032999500685309;
    msg.vdop = 0.0773420612712552;
    msg.hacc = 0.38434746171136747;
    msg.vacc = 0.8640183855528647;

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
    msg.setTimeStamp(0.5593171070189653);
    msg.setSource(22045U);
    msg.setSourceEntity(130U);
    msg.setDestination(18398U);
    msg.setDestinationEntity(158U);
    msg.validity = 53352U;
    msg.type = 241U;
    msg.utc_year = 27476U;
    msg.utc_month = 51U;
    msg.utc_day = 35U;
    msg.utc_time = 0.3759742901918487;
    msg.lat = 0.12180845329943635;
    msg.lon = 0.19954113903000226;
    msg.height = 0.916915918094509;
    msg.satellites = 53U;
    msg.cog = 0.37714634710001116;
    msg.sog = 0.1127093521843393;
    msg.hdop = 0.04488895843255414;
    msg.vdop = 0.3076023606903475;
    msg.hacc = 0.5402166003475056;
    msg.vacc = 0.7462487923079544;

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
    msg.setTimeStamp(0.9730566953780758);
    msg.setSource(16261U);
    msg.setSourceEntity(215U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(217U);
    msg.validity = 58632U;
    msg.type = 71U;
    msg.utc_year = 32802U;
    msg.utc_month = 138U;
    msg.utc_day = 2U;
    msg.utc_time = 0.556617621502323;
    msg.lat = 0.7909047367110694;
    msg.lon = 0.43013849330176124;
    msg.height = 0.942145453844394;
    msg.satellites = 252U;
    msg.cog = 0.5349047116831794;
    msg.sog = 0.38125362209175717;
    msg.hdop = 0.07049767196018664;
    msg.vdop = 0.26766283882761943;
    msg.hacc = 0.06287395073717461;
    msg.vacc = 0.4409425713338351;

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
    msg.setTimeStamp(0.898254781740838);
    msg.setSource(3248U);
    msg.setSourceEntity(89U);
    msg.setDestination(26825U);
    msg.setDestinationEntity(77U);
    msg.time = 0.5236680434090859;
    msg.phi = 0.11917144081007713;
    msg.theta = 0.4615354525998251;
    msg.psi = 0.9076595154571125;
    msg.psi_magnetic = 0.8958071741014386;

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
    msg.setTimeStamp(0.8532579957687235);
    msg.setSource(63420U);
    msg.setSourceEntity(100U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(231U);
    msg.time = 0.9617892549108708;
    msg.phi = 0.58749716659743;
    msg.theta = 0.47780919303011227;
    msg.psi = 0.2689743219524756;
    msg.psi_magnetic = 0.9172422992919207;

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
    msg.setTimeStamp(0.9881470926205679);
    msg.setSource(13536U);
    msg.setSourceEntity(38U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(254U);
    msg.time = 0.7208128194511602;
    msg.phi = 0.8682110484755299;
    msg.theta = 0.6728612364944374;
    msg.psi = 0.4071811687172857;
    msg.psi_magnetic = 0.1706692993682607;

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
    msg.setTimeStamp(0.673383204227953);
    msg.setSource(12418U);
    msg.setSourceEntity(241U);
    msg.setDestination(5837U);
    msg.setDestinationEntity(75U);
    msg.time = 0.9604630010760737;
    msg.x = 0.09519665125773924;
    msg.y = 0.9860279452492372;
    msg.z = 0.6276726902613049;
    msg.timestep = 0.6695250354497869;

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
    msg.setTimeStamp(0.04686510158478219);
    msg.setSource(43540U);
    msg.setSourceEntity(179U);
    msg.setDestination(37422U);
    msg.setDestinationEntity(60U);
    msg.time = 0.8146384167448095;
    msg.x = 0.17998459274754175;
    msg.y = 0.4981737111445109;
    msg.z = 0.815197575702308;
    msg.timestep = 0.4939776323988494;

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
    msg.setTimeStamp(0.41671326271070586);
    msg.setSource(11783U);
    msg.setSourceEntity(211U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(99U);
    msg.time = 0.9938029482260774;
    msg.x = 0.8461978355081738;
    msg.y = 0.8398986326826463;
    msg.z = 0.14916491535402443;
    msg.timestep = 0.07844117160415165;

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
    msg.setTimeStamp(0.3897056193456069);
    msg.setSource(35756U);
    msg.setSourceEntity(238U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(148U);
    msg.time = 0.6783699799224804;
    msg.x = 0.9516796344868041;
    msg.y = 0.9741917120738198;
    msg.z = 0.8672014785334844;

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
    msg.setTimeStamp(0.6346818511450899);
    msg.setSource(45096U);
    msg.setSourceEntity(208U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(149U);
    msg.time = 0.6226248409013503;
    msg.x = 0.18133075865296888;
    msg.y = 0.4108402498104726;
    msg.z = 0.9921300248134575;

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
    msg.setTimeStamp(0.6221666841640565);
    msg.setSource(7043U);
    msg.setSourceEntity(213U);
    msg.setDestination(53339U);
    msg.setDestinationEntity(218U);
    msg.time = 0.6562699789016699;
    msg.x = 0.4035584613719472;
    msg.y = 0.669576926412081;
    msg.z = 0.2633234958061207;

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
    msg.setTimeStamp(0.8360460476329475);
    msg.setSource(42280U);
    msg.setSourceEntity(141U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(153U);
    msg.time = 0.9478676404892511;
    msg.x = 0.917388280767716;
    msg.y = 0.29232376886354117;
    msg.z = 0.12435652178102996;

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
    msg.setTimeStamp(0.268017135231462);
    msg.setSource(46750U);
    msg.setSourceEntity(87U);
    msg.setDestination(20638U);
    msg.setDestinationEntity(167U);
    msg.time = 0.5104961996441235;
    msg.x = 0.3470007131781122;
    msg.y = 0.3309249738047785;
    msg.z = 0.21967799104266406;

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
    msg.setTimeStamp(0.8211186156743531);
    msg.setSource(56264U);
    msg.setSourceEntity(55U);
    msg.setDestination(24641U);
    msg.setDestinationEntity(76U);
    msg.time = 0.4710917604947613;
    msg.x = 0.8026762810120622;
    msg.y = 0.5066610106894605;
    msg.z = 0.6893880065442846;

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
    msg.setTimeStamp(0.1503081759157211);
    msg.setSource(28013U);
    msg.setSourceEntity(129U);
    msg.setDestination(46343U);
    msg.setDestinationEntity(8U);
    msg.time = 0.6211595378257883;
    msg.x = 0.9226951289416905;
    msg.y = 0.7095051364492371;
    msg.z = 0.22848369080902564;

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
    msg.setTimeStamp(0.26497209073805006);
    msg.setSource(56506U);
    msg.setSourceEntity(162U);
    msg.setDestination(64152U);
    msg.setDestinationEntity(82U);
    msg.time = 0.7764255544420369;
    msg.x = 0.6863446434852386;
    msg.y = 0.3579975906781985;
    msg.z = 0.4306972987282125;

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
    msg.setTimeStamp(0.13177175203947633);
    msg.setSource(53347U);
    msg.setSourceEntity(254U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(203U);
    msg.time = 0.4719587212669336;
    msg.x = 0.6493668671194908;
    msg.y = 0.3472710735288208;
    msg.z = 0.8679600642502661;

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
    msg.setTimeStamp(0.011795011216927498);
    msg.setSource(61219U);
    msg.setSourceEntity(204U);
    msg.setDestination(46703U);
    msg.setDestinationEntity(35U);
    msg.validity = 118U;
    msg.x = 0.25661470740341696;
    msg.y = 0.8829471680671194;
    msg.z = 0.8328902157435294;

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
    msg.setTimeStamp(0.4998681784544572);
    msg.setSource(11802U);
    msg.setSourceEntity(230U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(156U);
    msg.validity = 136U;
    msg.x = 0.05591093060201202;
    msg.y = 0.05464289698644598;
    msg.z = 0.46642866653719883;

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
    msg.setTimeStamp(0.596874131167795);
    msg.setSource(14580U);
    msg.setSourceEntity(222U);
    msg.setDestination(24859U);
    msg.setDestinationEntity(235U);
    msg.validity = 118U;
    msg.x = 0.21440086046874762;
    msg.y = 0.5417881580624688;
    msg.z = 0.7865606686937582;

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
    msg.setTimeStamp(0.1638617642968958);
    msg.setSource(1023U);
    msg.setSourceEntity(88U);
    msg.setDestination(57837U);
    msg.setDestinationEntity(232U);
    msg.validity = 248U;
    msg.x = 0.7094111294205123;
    msg.y = 0.7197090505986931;
    msg.z = 0.1379653148197859;

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
    msg.setTimeStamp(0.3903350842018328);
    msg.setSource(49174U);
    msg.setSourceEntity(24U);
    msg.setDestination(46914U);
    msg.setDestinationEntity(251U);
    msg.validity = 50U;
    msg.x = 0.9025832985701449;
    msg.y = 0.39863420114784753;
    msg.z = 0.6428631396670532;

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
    msg.setTimeStamp(0.860408596562269);
    msg.setSource(44826U);
    msg.setSourceEntity(33U);
    msg.setDestination(11191U);
    msg.setDestinationEntity(224U);
    msg.validity = 7U;
    msg.x = 0.7596382059722396;
    msg.y = 0.5127173914008295;
    msg.z = 0.8206769129934075;

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
    msg.setTimeStamp(0.6392792385864815);
    msg.setSource(23465U);
    msg.setSourceEntity(52U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(253U);
    msg.time = 0.5745426341964859;
    msg.x = 0.07569714476531342;
    msg.y = 0.4272601300125347;
    msg.z = 0.7419988025635065;

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
    msg.setTimeStamp(0.3746283462927704);
    msg.setSource(60473U);
    msg.setSourceEntity(206U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(177U);
    msg.time = 0.8616410725408795;
    msg.x = 0.5466694193090845;
    msg.y = 0.6140479504949193;
    msg.z = 0.1467600054465018;

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
    msg.setTimeStamp(0.07555801888475655);
    msg.setSource(35864U);
    msg.setSourceEntity(242U);
    msg.setDestination(8241U);
    msg.setDestinationEntity(101U);
    msg.time = 0.6552926757620928;
    msg.x = 0.58903202985985;
    msg.y = 0.946455086505399;
    msg.z = 0.6991156741735236;

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
    msg.setTimeStamp(0.4179726869582575);
    msg.setSource(25961U);
    msg.setSourceEntity(210U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(21U);
    msg.validity = 233U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5678385363310471;
    tmp_msg_0.y = 0.28991359482688894;
    tmp_msg_0.z = 0.13961379674787722;
    tmp_msg_0.phi = 0.224875288242271;
    tmp_msg_0.theta = 0.6383761427561161;
    tmp_msg_0.psi = 0.9247105837571773;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5820795118550063;

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
    msg.setTimeStamp(0.9535806738387878);
    msg.setSource(31654U);
    msg.setSourceEntity(59U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(217U);
    msg.validity = 144U;
    msg.value = 0.16055710798586764;

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
    msg.setTimeStamp(0.085213507123032);
    msg.setSource(58602U);
    msg.setSourceEntity(84U);
    msg.setDestination(43155U);
    msg.setDestinationEntity(7U);
    msg.validity = 154U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6669001913142583;
    tmp_msg_0.beam_height = 0.5903106953074295;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.974289848663134;

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
    msg.setTimeStamp(0.2954093186387444);
    msg.setSource(18748U);
    msg.setSourceEntity(172U);
    msg.setDestination(191U);
    msg.setDestinationEntity(173U);
    msg.value = 0.03477564204690986;

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
    msg.setTimeStamp(0.959612358023628);
    msg.setSource(45771U);
    msg.setSourceEntity(148U);
    msg.setDestination(15057U);
    msg.setDestinationEntity(55U);
    msg.value = 0.2973415094131635;

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
    msg.setTimeStamp(0.5240870431582365);
    msg.setSource(24638U);
    msg.setSourceEntity(8U);
    msg.setDestination(64629U);
    msg.setDestinationEntity(114U);
    msg.value = 0.42595894393589895;

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
    msg.setTimeStamp(0.18665025141200386);
    msg.setSource(50293U);
    msg.setSourceEntity(34U);
    msg.setDestination(33400U);
    msg.setDestinationEntity(18U);
    msg.value = 0.36998780405711706;

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
    msg.setTimeStamp(0.9362495911391054);
    msg.setSource(59097U);
    msg.setSourceEntity(139U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(106U);
    msg.value = 0.16285815476707943;

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
    msg.setTimeStamp(0.7132417483205934);
    msg.setSource(40730U);
    msg.setSourceEntity(78U);
    msg.setDestination(2154U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5857343001012547;

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
    msg.setTimeStamp(0.1533458165956577);
    msg.setSource(17395U);
    msg.setSourceEntity(5U);
    msg.setDestination(46822U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9439907810215951;

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
    msg.setTimeStamp(0.5275930233561856);
    msg.setSource(13962U);
    msg.setSourceEntity(189U);
    msg.setDestination(14933U);
    msg.setDestinationEntity(222U);
    msg.value = 0.31953452651336767;

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
    msg.setTimeStamp(0.0005287235701405546);
    msg.setSource(6873U);
    msg.setSourceEntity(89U);
    msg.setDestination(38755U);
    msg.setDestinationEntity(11U);
    msg.value = 0.2932365809578842;

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
    msg.setTimeStamp(0.3207594907700544);
    msg.setSource(6461U);
    msg.setSourceEntity(58U);
    msg.setDestination(41600U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9162507228484814;

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
    msg.setTimeStamp(0.9517356434001765);
    msg.setSource(24896U);
    msg.setSourceEntity(112U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(43U);
    msg.value = 0.1427155819478373;

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
    msg.setTimeStamp(0.18078120307447287);
    msg.setSource(11979U);
    msg.setSourceEntity(187U);
    msg.setDestination(36010U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9364813380617903;

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
    msg.setTimeStamp(0.04681959540514524);
    msg.setSource(11218U);
    msg.setSourceEntity(224U);
    msg.setDestination(49478U);
    msg.setDestinationEntity(209U);
    msg.value = 0.5667504102997991;

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
    msg.setTimeStamp(0.6787514907311433);
    msg.setSource(25941U);
    msg.setSourceEntity(210U);
    msg.setDestination(1627U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6967974081223574;

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
    msg.setTimeStamp(0.9411703062800904);
    msg.setSource(63389U);
    msg.setSourceEntity(57U);
    msg.setDestination(34378U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6320137345510133;

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
    msg.setTimeStamp(0.6268041005640336);
    msg.setSource(26034U);
    msg.setSourceEntity(25U);
    msg.setDestination(24060U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5286435644914279;

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
    msg.setTimeStamp(0.8168585823288489);
    msg.setSource(19848U);
    msg.setSourceEntity(143U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9481338825634934;

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
    msg.setTimeStamp(0.1588565491701185);
    msg.setSource(5415U);
    msg.setSourceEntity(85U);
    msg.setDestination(30431U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9474762470459085;

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
    msg.setTimeStamp(0.5896872541556509);
    msg.setSource(64240U);
    msg.setSourceEntity(212U);
    msg.setDestination(5813U);
    msg.setDestinationEntity(227U);
    msg.value = 0.741448334694441;

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
    msg.setTimeStamp(0.5566899232452296);
    msg.setSource(15689U);
    msg.setSourceEntity(139U);
    msg.setDestination(36807U);
    msg.setDestinationEntity(87U);
    msg.value = 0.37734739470643586;

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
    msg.setTimeStamp(0.7709048012829144);
    msg.setSource(57768U);
    msg.setSourceEntity(97U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(154U);
    msg.value = 0.18795214979559827;

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
    msg.setTimeStamp(0.35685278555505895);
    msg.setSource(522U);
    msg.setSourceEntity(76U);
    msg.setDestination(56639U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8838439618948952;

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
    msg.setTimeStamp(0.7008071008682866);
    msg.setSource(62374U);
    msg.setSourceEntity(68U);
    msg.setDestination(20851U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8937147135486893;

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
    msg.setTimeStamp(0.940331845657348);
    msg.setSource(6185U);
    msg.setSourceEntity(239U);
    msg.setDestination(17752U);
    msg.setDestinationEntity(123U);
    msg.value = 0.501264259297969;

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
    msg.setTimeStamp(0.6465182619854064);
    msg.setSource(46827U);
    msg.setSourceEntity(91U);
    msg.setDestination(16665U);
    msg.setDestinationEntity(57U);
    msg.direction = 0.495510130215003;
    msg.speed = 0.2375784838536633;
    msg.turbulence = 0.21305774791831678;

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
    msg.setTimeStamp(0.20836524015663627);
    msg.setSource(48047U);
    msg.setSourceEntity(14U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(121U);
    msg.direction = 0.537145177116949;
    msg.speed = 0.25927375795948937;
    msg.turbulence = 0.5954007009728146;

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
    msg.setTimeStamp(0.7347246731654558);
    msg.setSource(2655U);
    msg.setSourceEntity(37U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(87U);
    msg.direction = 0.43638415839937783;
    msg.speed = 0.2677787132620628;
    msg.turbulence = 0.11804055541689173;

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
    msg.setTimeStamp(0.2664814215075554);
    msg.setSource(22396U);
    msg.setSourceEntity(203U);
    msg.setDestination(22265U);
    msg.setDestinationEntity(56U);
    msg.value = 0.06243142938388757;

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
    msg.setTimeStamp(0.6678949897794048);
    msg.setSource(15770U);
    msg.setSourceEntity(2U);
    msg.setDestination(39177U);
    msg.setDestinationEntity(92U);
    msg.value = 0.38838317473007133;

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
    msg.setTimeStamp(0.25829605807914047);
    msg.setSource(48716U);
    msg.setSourceEntity(89U);
    msg.setDestination(55792U);
    msg.setDestinationEntity(48U);
    msg.value = 0.11060000953046256;

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
    msg.setTimeStamp(0.4602666938596719);
    msg.setSource(17404U);
    msg.setSourceEntity(167U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(242U);
    msg.value.assign("PLDBWTZOMJIMUEEVLTHGJTNPMXXHIWJCJTOGVXMKJFNILZRKTONJIPRXRWOVKCGMIOFUFTHNMUAPHFYPS");

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
    msg.setTimeStamp(0.4622180422945511);
    msg.setSource(41930U);
    msg.setSourceEntity(160U);
    msg.setDestination(53891U);
    msg.setDestinationEntity(141U);
    msg.value.assign("JTNPSPWCKPSZUXOIFGKFEJUSMKBEMSOIFVFVLAIPTRMYFQZQUAPOTKBZUWKYNQFJOXMINCGZYKBEHDJACQKTVHHVNLVJQNBYQTPE");

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
    msg.setTimeStamp(0.050486644804977776);
    msg.setSource(44368U);
    msg.setSourceEntity(181U);
    msg.setDestination(54437U);
    msg.setDestinationEntity(119U);
    msg.value.assign("JMQEOLBQMDMGALMEDPRWEVNEMVVTNNFIWOIPQLLPBQQACETAWNUESHCNMSXELUTATUSHUIEGHZCCNIVQKDKUIYMDVUYXOILTBWROOYSVDQEGPYPBHMAVZLUWJSOYPUNPNTHTPIAFJLGZLBWUZZCQIFFFRYMTJJKCKAGBXDGJXSYLYIMNFWKSPCBRDQCWHYOXXVVOZHKATAGRFCRBODOJPGZTASSGNBKECWHXZZWSXRURFBXQV");

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
    msg.setTimeStamp(0.781165603779413);
    msg.setSource(37397U);
    msg.setSourceEntity(185U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {107, -45, 41, -35, -4, -106, 43, -99, -22, -80, -100, 55, 110, -28, 110, -72, 126, -117, 90, 67, -12, -126, -109, 35, 96, -26, 1, -105, -110, -19, 119, -99, 69, 12, 107, 53, -83, -14, -40, -1, 111, -94, -1, 59, 44, -50, 66, -39, 83, 121, -43, -91, -79, 11, -43, -40, -89, 106, 125, 59, -85, 25, -33, -95, -106, -11, 123, -105, 93, 122, -44, -43, -84, 102, 81, -79, -28, -41, -106, -126, 42, 75, -31, -26, 32, 50, 22, -119, -61, -63, -72, -21, 65, -54, 16, -43, 70, 21, 37, -77, -116, 89, -38, -33, -68, 123, 45, 13, 48, -100, 100, 27, 56, -92, -3, 102, -53, 2, -44, 2, 100, 121, 105, 65, 0, 92, 120, -81, 90, 82, -118, -44, 102, -86, -36, -124, 90, 101, 39, -35, -126, -121, 86, -29, 70, -21, 123, 119, -124, -105, 7, -78, 68, -87, 37, -10, -58, 53, 36, -78, 70, -63, -16, 107, 84, -41, -46, -18, -2, 105, -87, 40, -26, -77, 1, -118, 89, 61, 119, -62, -65, 121, -11};
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
    msg.setTimeStamp(0.5598351666276282);
    msg.setSource(54844U);
    msg.setSourceEntity(177U);
    msg.setDestination(57567U);
    msg.setDestinationEntity(62U);
    const char tmp_msg_0[] = {88, 1, 40, 33, -24, -108, -111, -50, 71, 22, 39, -115, 117, 26, -14, 125, 39, -19, 120, 51};
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
    msg.setTimeStamp(0.06625505134850718);
    msg.setSource(29638U);
    msg.setSourceEntity(122U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(230U);
    const char tmp_msg_0[] = {6, -69, -87, -77, 88, -107, 91, 103, 11, 113, -83, -40, 10, -29, 40, -120, 26, -30, 43, -88, 37, -72, 34, -117, 49, 115, -104, -123, 61, 92, -122, 61, 71, -57, 92, 21, -1, -10, -74, -28, -54, 69, -12, -126, 55, 24, -12, 116, -86, 115, 100, -38, -43, -30, 111, -102, -7, -67, 100, 119, -45, -11, 76, -110, -43, -81, -37, -127, 13, 112, -75, -57, -30, 30, -39, -12, -76, -15, -29, 35, 5, -14, -110, 120, 91, 1, 2, 113, 25, 115, -58, 36, -50, -84, 49, -107, -58, -91, -42, 33, -99, 88, -62, 10, -58, 17, 1, -102, 15, -63, -99, -63, 10, 83, -102, 47, 93, -86, 2, 86, -76, 111, -51, -115, -100, -111, -11, 117, -27, -60, -39, -32, 104, -98, -115, -80, 10, 5, -108, 84, -101, 44, -23, -51, -55, -113, 89, -84, -104, 11, 4, -116, 108, 68, -96};
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
    msg.setTimeStamp(0.07587672288104774);
    msg.setSource(56202U);
    msg.setSourceEntity(216U);
    msg.setDestination(47179U);
    msg.setDestinationEntity(163U);
    msg.type = 205U;
    msg.frequency = 2469157323U;
    msg.min_range = 5541U;
    msg.max_range = 59542U;
    msg.bits_per_point = 233U;
    msg.scale_factor = 0.9189309502020092;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.883123291644264;
    tmp_msg_0.beam_height = 0.14810854955166364;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-98, 7, -5, 108, 91, -5, -112, -108, 90, -111, 16, 95, 96, -92, -1, 12, 33, 41, -26, 117, -65, -102, -49, 91, -69, 61, -79, 5, 70, -83, -31, -51, -38, 94, 58, -35, -81, -98, 105, 49, 96, 69, 7, 61, 0, -40, 117, 94, 90, 28, 73, -90, -54, 98, -118, 81, -41, -24, -128, 90, -38, 49, 95, -89, 102, 55, -42, 61, 52, 23, 14, -103, -84, -14, -114, 104, -103, -9, 97, 52};
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
    msg.setTimeStamp(0.3278245117181535);
    msg.setSource(11367U);
    msg.setSourceEntity(155U);
    msg.setDestination(11414U);
    msg.setDestinationEntity(121U);
    msg.type = 98U;
    msg.frequency = 1220910124U;
    msg.min_range = 29136U;
    msg.max_range = 8495U;
    msg.bits_per_point = 154U;
    msg.scale_factor = 0.2466482032923354;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7906368447483548;
    tmp_msg_0.beam_height = 0.7715681976245866;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {43, 85, -65, -2, -49, -94, 0, 101, 23, -119, -44, -11, -36, -54, 27, 102, -68, 27, -35, -11, 59, 8, -46, 116, -55, -3, -90, 105, 75, 124, 30, 56, 2, -96};
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
    msg.setTimeStamp(0.8474554643777017);
    msg.setSource(27799U);
    msg.setSourceEntity(114U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(97U);
    msg.type = 230U;
    msg.frequency = 4066669588U;
    msg.min_range = 55299U;
    msg.max_range = 25138U;
    msg.bits_per_point = 52U;
    msg.scale_factor = 0.8792295926225328;
    const char tmp_msg_0[] = {51, -13, -10, -31, -33, -31, 96, 108, -126, -90, 28, 73, 113, 17, 102, 46, -99, -9, -111, -36, -76, 3, 72, -128, -85, -47, 43, -51, -62, 111, -33, -18, 51, 33, 58, -74, 5, -43, 111, -97, -15, -113, 39, -90, -54, 37, 8, 84, -110, -38, -69, 86, -117, 57, -105, -114, 73, -13, -57, -67, -123, 6, 65, 103, -120, -21, 55, 7, 121, -18, 73, -19, -6, -54, -57, 80, -97, 48, -29, -69, -88, -71, 36, 120, -71, 62, 61, -26, 86, 38, 18, 25, -76, -53, -25, -100, -94, -48, 108, -53, -39, -48, 106, 73, 83, 91, -53, -2, 49, -82, -64, -105, -13, -72, 4, 10, -59, -108, 96, 120, 123, 82, 12, 83, -42, -67, 66, 19, -6, -111, -81, 77, 111, -97, 33, 106, 16, 23, 62, 42, 16, 89, -94, 54, 125, 7, -125, -89, 51, -101, 123, -99, -15, -96, -109, 107, -40, 59, 97, 37, -10, 18, -83, 103, 33, 55, -43, -35, -57, 32, -59, -46, -10, 17, 98, -32, 41, 119, -27, -117, -106, 114, 49, 10, 44, -112, -86, 70, -44, 50, -119, -41, 126, -40, -18, -56, -113, -11, -88, 1, -96, 122, 37, 90, 68, 72, -34, 23, -51, -4, -26, -59, -71, 54, 79, -91, -19, 34, 25, 21, 69};
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
    msg.setTimeStamp(0.18648987511833182);
    msg.setSource(24969U);
    msg.setSourceEntity(144U);
    msg.setDestination(49782U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.15221517257798356);
    msg.setSource(11150U);
    msg.setSourceEntity(145U);
    msg.setDestination(32016U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.5661048601542455);
    msg.setSource(32156U);
    msg.setSourceEntity(253U);
    msg.setDestination(39130U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.9339124711745457);
    msg.setSource(8372U);
    msg.setSourceEntity(209U);
    msg.setDestination(42520U);
    msg.setDestinationEntity(204U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.277127861781854);
    msg.setSource(15196U);
    msg.setSourceEntity(53U);
    msg.setDestination(16926U);
    msg.setDestinationEntity(229U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.11517665219062723);
    msg.setSource(34524U);
    msg.setSourceEntity(237U);
    msg.setDestination(26544U);
    msg.setDestinationEntity(175U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.922368455614753);
    msg.setSource(22932U);
    msg.setSourceEntity(251U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(8U);
    msg.value = 0.015029090853786786;
    msg.confidence = 0.2752359853251861;
    msg.opmodes.assign("ZQWZCHRHUJXUTJYFFYUGGKSEHYTJBUHQYPPKEIWOGPIIYUNIRPGUAFZMEVBBOE");

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
    msg.setTimeStamp(0.8064133920437929);
    msg.setSource(53812U);
    msg.setSourceEntity(152U);
    msg.setDestination(4815U);
    msg.setDestinationEntity(199U);
    msg.value = 0.7321016524444165;
    msg.confidence = 0.9106113402835109;
    msg.opmodes.assign("KOJZVFREJJHKGFWYQUDNSJUTSKYFCRMMWZRMRTNBBPFLLIFBJOIAWQVORSOAJKWLUGJZUEMXEECDQWAALTNVRBNXPTMMZHNNRCUGVAXSPWGAJIKCNAQQDFDDEPZTBQLGXUSLLTGHPNYSMOIBAAIWRCZJMVUHKOHFESUMKTIWKHDBPXQFIHQENRFCYWEVTFDQHESEHGGYZKHOSICMYDLCSBJZUXDPVVPDRYBQVPLGTYIAZKNTBXOCYZVLX");

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
    msg.setTimeStamp(0.7121011798954076);
    msg.setSource(16489U);
    msg.setSourceEntity(73U);
    msg.setDestination(61177U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7406390721045132;
    msg.confidence = 0.7095727513490657;
    msg.opmodes.assign("EPQPXBYXYZXBDLZQJFRGGUNARWTIVIWVMMMTIRYCWREDSOVLASUHRUZOCPJWYDYVKXSYCBKTROFSLPAIRQWFRBGUCVMKPFEEXGAUALBPOTBABQGSXGIPZZMHIJWFCKVLEUZHRWDAJQVITQ");

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
    msg.setTimeStamp(0.9769870446385349);
    msg.setSource(39057U);
    msg.setSourceEntity(172U);
    msg.setDestination(23531U);
    msg.setDestinationEntity(134U);
    msg.itow = 454727713U;
    msg.lat = 0.12535940376208288;
    msg.lon = 0.3602009694945253;
    msg.height_ell = 0.9722150904155429;
    msg.height_sea = 0.9478165160114479;
    msg.hacc = 0.06145745600688923;
    msg.vacc = 0.26869027438512316;
    msg.vel_n = 0.7721864264285779;
    msg.vel_e = 0.500850284537524;
    msg.vel_d = 0.761567069886306;
    msg.speed = 0.8627300836459298;
    msg.gspeed = 0.9093862838723128;
    msg.heading = 0.2666623963106368;
    msg.sacc = 0.6538822531589517;
    msg.cacc = 0.9611710418798006;

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
    msg.setTimeStamp(0.42699304504675106);
    msg.setSource(34525U);
    msg.setSourceEntity(73U);
    msg.setDestination(16091U);
    msg.setDestinationEntity(143U);
    msg.itow = 2516311560U;
    msg.lat = 0.9839148981661782;
    msg.lon = 0.02617849708065445;
    msg.height_ell = 0.872237661688808;
    msg.height_sea = 0.4706630667471986;
    msg.hacc = 0.5118310116664588;
    msg.vacc = 0.6739840068477899;
    msg.vel_n = 0.657653165880091;
    msg.vel_e = 0.7243376403291987;
    msg.vel_d = 0.243177138147471;
    msg.speed = 0.4136727638196953;
    msg.gspeed = 0.3167452493877735;
    msg.heading = 0.23022058808454404;
    msg.sacc = 0.6616480048188934;
    msg.cacc = 0.4154079856168641;

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
    msg.setTimeStamp(0.36266651796779514);
    msg.setSource(29855U);
    msg.setSourceEntity(75U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(222U);
    msg.itow = 2257642112U;
    msg.lat = 0.8971038539777144;
    msg.lon = 0.9973946168869435;
    msg.height_ell = 0.5100024135167931;
    msg.height_sea = 0.6476305551502751;
    msg.hacc = 0.13062093799194152;
    msg.vacc = 0.20493028746692166;
    msg.vel_n = 0.7590530996585804;
    msg.vel_e = 0.6862100552103924;
    msg.vel_d = 0.5859743089696631;
    msg.speed = 0.20794263919874423;
    msg.gspeed = 0.9778885684987454;
    msg.heading = 0.43163156361334054;
    msg.sacc = 0.1879616508893781;
    msg.cacc = 0.5834685568727471;

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
    msg.setTimeStamp(0.9197468976146087);
    msg.setSource(15108U);
    msg.setSourceEntity(111U);
    msg.setDestination(43499U);
    msg.setDestinationEntity(105U);
    msg.id = 8U;
    msg.value = 0.353481515101703;

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
    msg.setTimeStamp(0.8731775968751428);
    msg.setSource(21652U);
    msg.setSourceEntity(41U);
    msg.setDestination(49529U);
    msg.setDestinationEntity(136U);
    msg.id = 84U;
    msg.value = 0.40236016260140617;

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
    msg.setTimeStamp(0.07182166815125646);
    msg.setSource(24608U);
    msg.setSourceEntity(209U);
    msg.setDestination(10015U);
    msg.setDestinationEntity(234U);
    msg.id = 71U;
    msg.value = 0.8539441116746914;

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
    msg.setTimeStamp(0.6838681902308748);
    msg.setSource(36140U);
    msg.setSourceEntity(100U);
    msg.setDestination(11383U);
    msg.setDestinationEntity(31U);
    msg.x = 0.2588820054611465;
    msg.y = 0.5122777824486031;
    msg.z = 0.3431932972544739;
    msg.phi = 0.9684945993704646;
    msg.theta = 0.9506535894540054;
    msg.psi = 0.8990082777381687;

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
    msg.setTimeStamp(0.4726350934574932);
    msg.setSource(31986U);
    msg.setSourceEntity(180U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(192U);
    msg.x = 0.8480865139669475;
    msg.y = 0.5381296007257934;
    msg.z = 0.38791475521911944;
    msg.phi = 0.0457994368812078;
    msg.theta = 0.11689302949707525;
    msg.psi = 0.5554811209992352;

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
    msg.setTimeStamp(0.727325937705018);
    msg.setSource(325U);
    msg.setSourceEntity(194U);
    msg.setDestination(18015U);
    msg.setDestinationEntity(29U);
    msg.x = 0.48495860621970166;
    msg.y = 0.3290135410951367;
    msg.z = 0.36793842334424565;
    msg.phi = 0.646862274421694;
    msg.theta = 0.8481251328206975;
    msg.psi = 0.6031240632370365;

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
    msg.setTimeStamp(0.27071843797642803);
    msg.setSource(56239U);
    msg.setSourceEntity(251U);
    msg.setDestination(10829U);
    msg.setDestinationEntity(121U);
    msg.beam_width = 0.5191273253016702;
    msg.beam_height = 0.44804323347628494;

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
    msg.setTimeStamp(0.6136499379865216);
    msg.setSource(9903U);
    msg.setSourceEntity(112U);
    msg.setDestination(9736U);
    msg.setDestinationEntity(137U);
    msg.beam_width = 0.7033440512780013;
    msg.beam_height = 0.4440015637437583;

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
    msg.setTimeStamp(0.9999380536343068);
    msg.setSource(7353U);
    msg.setSourceEntity(99U);
    msg.setDestination(50543U);
    msg.setDestinationEntity(98U);
    msg.beam_width = 0.5526176397493464;
    msg.beam_height = 0.22302176703165932;

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
    msg.setTimeStamp(0.9125724619897597);
    msg.setSource(49935U);
    msg.setSourceEntity(213U);
    msg.setDestination(54544U);
    msg.setDestinationEntity(77U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.7604512283491516);
    msg.setSource(36320U);
    msg.setSourceEntity(109U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(228U);
    msg.sane = 13U;

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
    msg.setTimeStamp(0.6355508351634309);
    msg.setSource(33254U);
    msg.setSourceEntity(220U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(202U);
    msg.sane = 100U;

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
    msg.setTimeStamp(0.7779876852851076);
    msg.setSource(63743U);
    msg.setSourceEntity(141U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(132U);
    msg.value = 0.443586409932726;

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
    msg.setTimeStamp(0.5367373567799064);
    msg.setSource(26034U);
    msg.setSourceEntity(0U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(12U);
    msg.value = 0.3293959196174876;

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
    msg.setTimeStamp(0.1611975925426703);
    msg.setSource(39106U);
    msg.setSourceEntity(205U);
    msg.setDestination(8702U);
    msg.setDestinationEntity(140U);
    msg.value = 0.10085604201995557;

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
    msg.setTimeStamp(0.23350813449536834);
    msg.setSource(14875U);
    msg.setSourceEntity(58U);
    msg.setDestination(30067U);
    msg.setDestinationEntity(52U);
    msg.value = 0.25665181114340285;

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
    msg.setTimeStamp(0.27968535437068176);
    msg.setSource(64084U);
    msg.setSourceEntity(185U);
    msg.setDestination(42866U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9346148203038454;

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
    msg.setTimeStamp(0.7077288965638368);
    msg.setSource(20688U);
    msg.setSourceEntity(52U);
    msg.setDestination(21403U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7988705149687076;

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
    msg.setTimeStamp(0.9563977169310877);
    msg.setSource(44788U);
    msg.setSourceEntity(169U);
    msg.setDestination(5529U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7918432304053028;

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
    msg.setTimeStamp(0.3299940750875816);
    msg.setSource(16245U);
    msg.setSourceEntity(189U);
    msg.setDestination(54049U);
    msg.setDestinationEntity(13U);
    msg.value = 0.42017180662241227;

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
    msg.setTimeStamp(0.9404634440030857);
    msg.setSource(18842U);
    msg.setSourceEntity(249U);
    msg.setDestination(3544U);
    msg.setDestinationEntity(152U);
    msg.value = 0.5838785072764141;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.07184149582941846);
    msg.setSource(12083U);
    msg.setSourceEntity(96U);
    msg.setDestination(26850U);
    msg.setDestinationEntity(90U);
    msg.id = 227U;
    msg.zoom = 101U;
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
    msg.setTimeStamp(0.4263646250993588);
    msg.setSource(37806U);
    msg.setSourceEntity(165U);
    msg.setDestination(14856U);
    msg.setDestinationEntity(128U);
    msg.id = 137U;
    msg.zoom = 119U;
    msg.action = 169U;

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
    msg.setTimeStamp(0.5696317035790516);
    msg.setSource(27396U);
    msg.setSourceEntity(9U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(249U);
    msg.id = 221U;
    msg.zoom = 42U;
    msg.action = 131U;

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
    msg.setTimeStamp(0.6788226877544753);
    msg.setSource(50004U);
    msg.setSourceEntity(89U);
    msg.setDestination(24674U);
    msg.setDestinationEntity(235U);
    msg.id = 131U;
    msg.value = 0.5100912339296649;

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
    msg.setTimeStamp(0.8737925074747562);
    msg.setSource(25178U);
    msg.setSourceEntity(50U);
    msg.setDestination(51398U);
    msg.setDestinationEntity(3U);
    msg.id = 159U;
    msg.value = 0.11893874831010576;

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
    msg.setTimeStamp(0.19363993369446242);
    msg.setSource(24030U);
    msg.setSourceEntity(155U);
    msg.setDestination(17510U);
    msg.setDestinationEntity(9U);
    msg.id = 151U;
    msg.value = 0.3088052897277347;

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
    msg.setTimeStamp(0.9181777300449786);
    msg.setSource(63630U);
    msg.setSourceEntity(6U);
    msg.setDestination(59529U);
    msg.setDestinationEntity(151U);
    msg.id = 221U;
    msg.value = 0.9039236984486991;

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
    msg.setTimeStamp(0.11498185142323714);
    msg.setSource(29861U);
    msg.setSourceEntity(54U);
    msg.setDestination(20620U);
    msg.setDestinationEntity(237U);
    msg.id = 155U;
    msg.value = 0.16200793075676412;

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
    msg.setTimeStamp(0.5771492455190368);
    msg.setSource(44577U);
    msg.setSourceEntity(53U);
    msg.setDestination(56225U);
    msg.setDestinationEntity(56U);
    msg.id = 237U;
    msg.value = 0.2973882942223256;

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
    msg.setTimeStamp(0.6630197187931453);
    msg.setSource(53479U);
    msg.setSourceEntity(149U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(59U);
    msg.id = 43U;
    msg.angle = 0.5835945658463035;

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
    msg.setTimeStamp(0.888784315082151);
    msg.setSource(34680U);
    msg.setSourceEntity(121U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(136U);
    msg.id = 239U;
    msg.angle = 0.8104262092829688;

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
    msg.setTimeStamp(0.8704880898653857);
    msg.setSource(19516U);
    msg.setSourceEntity(185U);
    msg.setDestination(19611U);
    msg.setDestinationEntity(208U);
    msg.id = 210U;
    msg.angle = 0.18864932927929356;

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
    msg.setTimeStamp(0.45705771601590595);
    msg.setSource(28728U);
    msg.setSourceEntity(36U);
    msg.setDestination(6666U);
    msg.setDestinationEntity(126U);
    msg.op = 22U;
    msg.actions.assign("VGDSHVWKOYNXYYMBBQTPLHYJMIITFRDCSMCCZQENKBIZFLCFXGVHAADBEAENYZMAPREWSZQRPUJXZBTKVWTEMRGJCMNLOKDCWTFSKFJUQTCVQNWLPLXRXSTUADUPASYXRISHZHDCIJQKLVQHFSIATMLPMIGWWFUOURKKDOCGWRXMLOFZAXJOGGNUGPTOBNDKCJYTIP");

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
    msg.setTimeStamp(0.8780654466748968);
    msg.setSource(6424U);
    msg.setSourceEntity(9U);
    msg.setDestination(36090U);
    msg.setDestinationEntity(227U);
    msg.op = 238U;
    msg.actions.assign("SYSEHMLELZOPTFRZXXAAQKTVZKVYFJTTMHEGIGWDAVCCIRBTEPALUYICLAJWTKFQDHRFEIJPABTPLHZPBYRVIUXJMXKRJINWPNAHAKYMLCHKXYHRZNKDGPQCQUYVVXFHUWXIVGKVNBWWCFNSPCQLOGOWFSRWZDOETOKQVUGQABQPJGBMGVPIBDURHUMOSLYEDJRNUROEUTMSWXZCFQZZWCSJDHEJFIYNMCD");

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
    msg.setTimeStamp(0.7537035993576875);
    msg.setSource(59384U);
    msg.setSourceEntity(210U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(154U);
    msg.op = 157U;
    msg.actions.assign("USGGFAMSFZOLOCWYMCAVBCVQSOCKZPSLNGK");

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
    msg.setTimeStamp(0.7743481498283283);
    msg.setSource(21676U);
    msg.setSourceEntity(161U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(113U);
    msg.actions.assign("ITARXXGHISXGCIPTCVVNABQELGHOYWZINLZBRUZJWSAQMUGNBGXCBUMPQXMATXHDIDRODWSHTNXMVFBJJGKUDSCFLEGKFLZU");

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
    msg.setTimeStamp(0.7914138520612167);
    msg.setSource(5052U);
    msg.setSourceEntity(240U);
    msg.setDestination(10645U);
    msg.setDestinationEntity(97U);
    msg.actions.assign("GERSXLSIMVEOBIXKTVQJDWAFOWZAQJDZSNKNWAKPFRIFXFIDPMWJIEARHIGTCVVHZUNYKBVLFFKYZAAKWRIOJQONZMTHOCNKGPHKNBSPDICBEJHZQUGTDVYFESRYQQTUXZCLXXZVYJDIFOTLJBEBNLDYUMLLZXFDCUYGFUQCQXHSAWRPHMRURH");

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
    msg.setTimeStamp(0.06563896024031357);
    msg.setSource(10577U);
    msg.setSourceEntity(134U);
    msg.setDestination(8374U);
    msg.setDestinationEntity(1U);
    msg.actions.assign("FBCCUBMIMMHUCNEQVJEQQDLTGTQRJOSEXBBEWPFBCRNAGKGPCRJSMMKYTVTHSUGZXLNXNWOETIXZHEOVNLDZHWLSMZVGPXKDJLIFLFHJSZIAMDRVKKYOSOHFSJTYBYTVKKWDRYJIYZAPSKPOHDFGHYDWLUVNAGQCWDJTXLLWFAIIRFX");

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
    msg.setTimeStamp(0.7191171861038271);
    msg.setSource(39173U);
    msg.setSourceEntity(106U);
    msg.setDestination(20243U);
    msg.setDestinationEntity(87U);
    msg.button = 186U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.6807878701893734);
    msg.setSource(34010U);
    msg.setSourceEntity(168U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(222U);
    msg.button = 177U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.25301461115140633);
    msg.setSource(12693U);
    msg.setSourceEntity(50U);
    msg.setDestination(15374U);
    msg.setDestinationEntity(205U);
    msg.button = 39U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.28016205604045696);
    msg.setSource(30283U);
    msg.setSourceEntity(77U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(134U);
    msg.op = 159U;
    msg.text.assign("OUWYVQPBNDRMBMMGZHRNLFPMADAQLVPIQKOTXXWAZQLLDECVSKXQKSGUSREBZTHZFPVHNIQLCZKUTDEJRAJGHWFGCNN");

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
    msg.setTimeStamp(0.08021064139498402);
    msg.setSource(17736U);
    msg.setSourceEntity(139U);
    msg.setDestination(32381U);
    msg.setDestinationEntity(155U);
    msg.op = 5U;
    msg.text.assign("NESNAIEADYDBPPBAPPLGZTMOJXEIHSUTCBKSXGTFVKSTOBYVWYFGCCHQWCSDQRHXNUIKVCNSIGJBZXUMOCGBFVUMFQPVJNAOJZGLQ");

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
    msg.setTimeStamp(0.5476399992201005);
    msg.setSource(17140U);
    msg.setSourceEntity(117U);
    msg.setDestination(33030U);
    msg.setDestinationEntity(200U);
    msg.op = 178U;
    msg.text.assign("ZLKEYWFSUGAFUHGOEJQWCTXBLZHHPSGDOYYFXZXEDMQRVBSYMNRVQPH");

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
    msg.setTimeStamp(0.23099874071209603);
    msg.setSource(27693U);
    msg.setSourceEntity(87U);
    msg.setDestination(18726U);
    msg.setDestinationEntity(166U);
    msg.op = 195U;
    msg.time_remain = 0.05328412021191331;
    msg.sched_time = 0.2674048766304098;

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
    msg.setTimeStamp(0.4367195812251081);
    msg.setSource(45204U);
    msg.setSourceEntity(64U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(97U);
    msg.op = 160U;
    msg.time_remain = 0.30853941780768424;
    msg.sched_time = 0.9309272612662796;

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
    msg.setTimeStamp(0.4067584870015172);
    msg.setSource(18864U);
    msg.setSourceEntity(204U);
    msg.setDestination(63816U);
    msg.setDestinationEntity(84U);
    msg.op = 55U;
    msg.time_remain = 0.387230399079988;
    msg.sched_time = 0.18093228236574188;

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
    msg.setTimeStamp(0.5033223340357489);
    msg.setSource(12743U);
    msg.setSourceEntity(205U);
    msg.setDestination(57289U);
    msg.setDestinationEntity(55U);
    msg.name.assign("QGLQPLNQLBGZJWHGCGWJVPRSDMFDJQNYNURWOEAUOUFZUXITKAUGOAAFFMXYMTJHSRNZIBWKFKIKOOPPKNZUVMCSHEPOAVFHKXEBANQSCOZNUHXYBZCCTB");
    msg.op = 20U;
    msg.sched_time = 0.11080313367084593;

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
    msg.setTimeStamp(0.401769503164801);
    msg.setSource(2447U);
    msg.setSourceEntity(24U);
    msg.setDestination(45072U);
    msg.setDestinationEntity(80U);
    msg.name.assign("FCXHPHNCAYVBAOTMHELSUYMRTEQ");
    msg.op = 185U;
    msg.sched_time = 0.1185196462325192;

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
    msg.setTimeStamp(0.9344444613839225);
    msg.setSource(40499U);
    msg.setSourceEntity(172U);
    msg.setDestination(11625U);
    msg.setDestinationEntity(147U);
    msg.name.assign("HSVBHHQWQTZJEBIJHFXEJJLNDPBFXAOKMEFCGSSGMI");
    msg.op = 53U;
    msg.sched_time = 0.558700712510159;

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
    msg.setTimeStamp(0.10636468987383585);
    msg.setSource(38981U);
    msg.setSourceEntity(125U);
    msg.setDestination(5208U);
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
    msg.setTimeStamp(0.6162540007607347);
    msg.setSource(43508U);
    msg.setSourceEntity(129U);
    msg.setDestination(23042U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.49259004254594785);
    msg.setSource(59858U);
    msg.setSourceEntity(117U);
    msg.setDestination(46485U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.5185676203291436);
    msg.setSource(36164U);
    msg.setSourceEntity(107U);
    msg.setDestination(28770U);
    msg.setDestinationEntity(129U);
    msg.name.assign("ACRFBKBIWYUGJTPGA");
    msg.state = 144U;

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
    msg.setTimeStamp(0.9547168778757191);
    msg.setSource(49243U);
    msg.setSourceEntity(181U);
    msg.setDestination(59353U);
    msg.setDestinationEntity(3U);
    msg.name.assign("NHVWGSUHGKXWVJIBLQGURQPMDCOZLKFWIIUEKZKFBVXCIKOXRWSRXNITSFCAQNTAYVLMAEZVUXICZABFPGNDKHLULNHWHAHMEDPSKFFAUMMOTDQENWMTTBTOJJINXVNGZBYLRGGAEYYTXPQQYFOSEFRIBWOWEHMJKCMVJJTYHLCSGHTJXBPURIAVHCW");
    msg.state = 143U;

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
    msg.setTimeStamp(0.9410704544454531);
    msg.setSource(46808U);
    msg.setSourceEntity(0U);
    msg.setDestination(36415U);
    msg.setDestinationEntity(10U);
    msg.name.assign("DTIXVUGNJNFPYUAPXKYGVWLSSAHTEGKHRYOTPFKXEJAQXLSSTHAXZLZPBLDMQKOZBWKCMJBQRGYZBNEUYUWI");
    msg.state = 18U;

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
    msg.setTimeStamp(0.6204026053931815);
    msg.setSource(60846U);
    msg.setSourceEntity(67U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(32U);
    msg.name.assign("ZRKSPEOAHXLXSGVCJLYHKWZPIHBTCFPBWQXURASFCMUMALBCCTFRBWMRLULIQPGCKOJAJWCZOYELGKJNFSOVRDDTIBWVOZITEZXEPOSRHWUVUQZHKPYYJNNSYSVOFEMOXPTQDQAEDICQMAUUDMFFZSDDNIMWBYRLYPNVKAIPZOSLC");
    msg.value = 57U;

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
    msg.setTimeStamp(0.9041338768874387);
    msg.setSource(51851U);
    msg.setSourceEntity(129U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(27U);
    msg.name.assign("GLXPXDWIGNBTRENAUCOEZMZNTVJKAHTFZFRYJPSNLTFFXSHRZYSPKOMRFOXRVAFXNJMHIXSYCVZNRFAQJSMQQSUFLWOWPYIBYOBWQUPMJSTYNZEEMQMMJRIWELBKNUHLALAWXGKQBTGTNRTCKHHYJCEECS");
    msg.value = 51U;

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
    msg.setTimeStamp(0.5410021089105455);
    msg.setSource(9700U);
    msg.setSourceEntity(104U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(179U);
    msg.name.assign("HOQSYBUKMSHRTCWWOBWHPXVVGROGPUFONMPNEZASAMISRNVDAJOJDSVQZEKEUWTUAZXGLCXPQPDJPMYYIPSCGQFFWKMDTNPTVQZJLEACXERFPFI");
    msg.value = 192U;

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
    msg.setTimeStamp(0.27894926197314407);
    msg.setSource(44805U);
    msg.setSourceEntity(221U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(6U);
    msg.name.assign("HPESUZNUAZSJTXEWEFSLRTOGKLQSXFINHCNWDZOMZUQOLLVFCMEYPTBKJOCWENWICXDZJPIZNOQUYQXCIGN");

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
    msg.setTimeStamp(0.15564669692967137);
    msg.setSource(29779U);
    msg.setSourceEntity(106U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(173U);
    msg.name.assign("TZZFCUHMPBXLLQRXEGVNADNKLSUVUCWBISUDYJQFEIPOKAZIRDQBCTGSKOQPMOYGACJMIORULLRDDGVCHCJRMVWLNKSAXAGZVTIYRZJEPBZWDHGYAJHHROFXYIVWELBKPSLFJSXXVQXKDYKMBITEIBZPJHEWAIDDPNEONPZNFBSEUJCSAVUMWFCHMBDQPEQVHOJLFNTAZPYHRYYAIKTMUUGXGUHCTSMRKFCXMFTXKZ");

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
    msg.setTimeStamp(0.2620824468810301);
    msg.setSource(17413U);
    msg.setSourceEntity(18U);
    msg.setDestination(54061U);
    msg.setDestinationEntity(64U);
    msg.name.assign("NEFMQBAJXLLXU");

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
    msg.setTimeStamp(0.09962890680859604);
    msg.setSource(36838U);
    msg.setSourceEntity(154U);
    msg.setDestination(11144U);
    msg.setDestinationEntity(172U);
    msg.name.assign("CQWDIGHNXFDKYLKOAMRZPOZGRDPYDEZSOLSOMXZQVH");
    msg.value = 97U;

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
    msg.setTimeStamp(0.9282386586429223);
    msg.setSource(49094U);
    msg.setSourceEntity(170U);
    msg.setDestination(18395U);
    msg.setDestinationEntity(78U);
    msg.name.assign("EWMDCXERUGZRASPOMUTSWUTBTDXOIUTYKBIMSDGHAJZNWPQBVKQUXBBAGIZPOJVHGAEDZYVFSUNHXWFKYJNRNFMSLOBFLLGVM");
    msg.value = 233U;

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
    msg.setTimeStamp(0.7379588113389223);
    msg.setSource(41799U);
    msg.setSourceEntity(93U);
    msg.setDestination(55281U);
    msg.setDestinationEntity(147U);
    msg.name.assign("CTEGGGGFWVVJDTLBROWQJLCSPAZMWPKHZLLEFWFTSHLRQRAOUSEGSDVLDVMRNOYTUIITGUBAKMKOHSBFQKZGFUAOVTNZZPSBJNZAUJXYPFYDUXJVELCNUDUQIDLECCOTPDIXRNQHONRWFCRVJIQSKYIKSWXXINLIVGOOHKYYRYXCMHVKMEGFAMZCZTVXCJYIWMEMESDBRHYHJMQBEWCFAJBKTNRNPXOAABAQZXHWNPDI");
    msg.value = 72U;

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
    msg.setTimeStamp(0.27181740020225864);
    msg.setSource(46510U);
    msg.setSourceEntity(82U);
    msg.setDestination(4019U);
    msg.setDestinationEntity(222U);
    msg.id = 54U;
    msg.period = 850320654U;
    msg.duty_cycle = 3353311840U;

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
    msg.setTimeStamp(0.8604324987424122);
    msg.setSource(29360U);
    msg.setSourceEntity(91U);
    msg.setDestination(10594U);
    msg.setDestinationEntity(45U);
    msg.id = 221U;
    msg.period = 2523185788U;
    msg.duty_cycle = 1419230540U;

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
    msg.setTimeStamp(0.7558779112432347);
    msg.setSource(40843U);
    msg.setSourceEntity(6U);
    msg.setDestination(1294U);
    msg.setDestinationEntity(43U);
    msg.id = 45U;
    msg.period = 3610625537U;
    msg.duty_cycle = 3027550295U;

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
    msg.setTimeStamp(0.8179376824457041);
    msg.setSource(35854U);
    msg.setSourceEntity(227U);
    msg.setDestination(22063U);
    msg.setDestinationEntity(235U);
    msg.id = 250U;
    msg.period = 1734155004U;
    msg.duty_cycle = 2241951461U;

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
    msg.setTimeStamp(0.49394795754263143);
    msg.setSource(57161U);
    msg.setSourceEntity(43U);
    msg.setDestination(1140U);
    msg.setDestinationEntity(36U);
    msg.id = 5U;
    msg.period = 177881460U;
    msg.duty_cycle = 3543777052U;

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
    msg.setTimeStamp(0.029349253928303454);
    msg.setSource(21324U);
    msg.setSourceEntity(140U);
    msg.setDestination(13212U);
    msg.setDestinationEntity(125U);
    msg.id = 26U;
    msg.period = 3133360319U;
    msg.duty_cycle = 2241839351U;

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
    msg.setTimeStamp(0.7356853605494287);
    msg.setSource(59597U);
    msg.setSourceEntity(167U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.20740136403170728;
    msg.lon = 0.5298484056424214;
    msg.height = 0.5667696280045004;
    msg.x = 0.18559642129136722;
    msg.y = 0.6937201405943528;
    msg.z = 0.3040622995039832;
    msg.phi = 0.1452298012750487;
    msg.theta = 0.26993805901398005;
    msg.psi = 0.38855918396817335;
    msg.u = 0.7731252453745702;
    msg.v = 0.631765093564211;
    msg.w = 0.3387131338507453;
    msg.vx = 0.20235629136076116;
    msg.vy = 0.6341070317758356;
    msg.vz = 0.09389237307507481;
    msg.p = 0.5363251801897218;
    msg.q = 0.7697524636640862;
    msg.r = 0.7147920259106669;
    msg.depth = 0.20084278312072756;
    msg.alt = 0.43319724757859257;

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
    msg.setTimeStamp(0.7653584324881476);
    msg.setSource(16312U);
    msg.setSourceEntity(161U);
    msg.setDestination(25905U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.8174805163818581;
    msg.lon = 0.14260581253546156;
    msg.height = 0.049092753163310854;
    msg.x = 0.8424815011863129;
    msg.y = 0.4697228333350253;
    msg.z = 0.31604498206861076;
    msg.phi = 0.11557396106233053;
    msg.theta = 0.6528123527207342;
    msg.psi = 0.16182932537116423;
    msg.u = 0.7933349390443146;
    msg.v = 0.5126440435456008;
    msg.w = 0.09349368350506726;
    msg.vx = 0.28301293065990596;
    msg.vy = 0.6113998644278363;
    msg.vz = 0.2767485226463704;
    msg.p = 0.18122168041758824;
    msg.q = 0.7686857317548278;
    msg.r = 0.9860446126197524;
    msg.depth = 0.48410830557166695;
    msg.alt = 0.47496456847114954;

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
    msg.setTimeStamp(0.1608650656115158);
    msg.setSource(51289U);
    msg.setSourceEntity(200U);
    msg.setDestination(43590U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.6440350951105864;
    msg.lon = 0.34633894621253236;
    msg.height = 0.28400545442705083;
    msg.x = 0.9393687378571701;
    msg.y = 0.1806596721365724;
    msg.z = 0.15490247430317727;
    msg.phi = 0.7683088168303761;
    msg.theta = 0.24572638267154645;
    msg.psi = 0.9221467121681524;
    msg.u = 0.28201873528907007;
    msg.v = 0.874728050773703;
    msg.w = 0.32219035170447385;
    msg.vx = 0.15472460298579793;
    msg.vy = 0.6352613756382675;
    msg.vz = 0.6486753625628732;
    msg.p = 0.8161670247255932;
    msg.q = 0.45773355466350363;
    msg.r = 0.4658724198997888;
    msg.depth = 0.923145623379512;
    msg.alt = 0.043545019967500154;

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
    msg.setTimeStamp(0.7953792098935603);
    msg.setSource(12061U);
    msg.setSourceEntity(183U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(163U);
    msg.x = 0.6830091231440552;
    msg.y = 0.8740686505743333;
    msg.z = 0.766873012152488;

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
    msg.setTimeStamp(0.12736205999328398);
    msg.setSource(47448U);
    msg.setSourceEntity(246U);
    msg.setDestination(4532U);
    msg.setDestinationEntity(56U);
    msg.x = 0.14932525471340097;
    msg.y = 0.7055001684781894;
    msg.z = 0.35826803617555236;

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
    msg.setTimeStamp(0.4670961509625624);
    msg.setSource(41588U);
    msg.setSourceEntity(189U);
    msg.setDestination(31387U);
    msg.setDestinationEntity(243U);
    msg.x = 0.3852961916933546;
    msg.y = 0.9615502501427586;
    msg.z = 0.8432458927273295;

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
    msg.setTimeStamp(0.8536822558844842);
    msg.setSource(49650U);
    msg.setSourceEntity(235U);
    msg.setDestination(48789U);
    msg.setDestinationEntity(238U);
    msg.value = 0.23364564303864355;

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
    msg.setTimeStamp(0.9359298664909855);
    msg.setSource(15353U);
    msg.setSourceEntity(99U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(126U);
    msg.value = 0.44609923128547846;

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
    msg.setTimeStamp(0.40898725835304417);
    msg.setSource(10600U);
    msg.setSourceEntity(93U);
    msg.setDestination(36120U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7928264841880006;

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
    msg.setTimeStamp(0.9834402110116439);
    msg.setSource(44149U);
    msg.setSourceEntity(226U);
    msg.setDestination(37608U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7346542468337927;

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
    msg.setTimeStamp(0.9630638367508423);
    msg.setSource(20858U);
    msg.setSourceEntity(233U);
    msg.setDestination(20040U);
    msg.setDestinationEntity(8U);
    msg.value = 0.9723436710570723;

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
    msg.setTimeStamp(0.5950498528734585);
    msg.setSource(4479U);
    msg.setSourceEntity(57U);
    msg.setDestination(29565U);
    msg.setDestinationEntity(237U);
    msg.value = 0.24829757697315802;

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
    msg.setTimeStamp(0.21503983888602374);
    msg.setSource(24786U);
    msg.setSourceEntity(178U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(94U);
    msg.x = 0.7273747695719964;
    msg.y = 0.3373683831134925;
    msg.z = 0.36941320937756994;
    msg.phi = 0.6510877667426022;
    msg.theta = 0.3827808327125455;
    msg.psi = 0.3212491170514279;
    msg.p = 0.22317951564595795;
    msg.q = 0.158319270849271;
    msg.r = 0.48069731240146263;
    msg.u = 0.08110852938626767;
    msg.v = 0.6519511220224977;
    msg.w = 0.3958015031092351;
    msg.bias_psi = 0.3311951604012976;
    msg.bias_r = 0.04604419826760686;

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
    msg.setTimeStamp(0.3323039183604166);
    msg.setSource(7996U);
    msg.setSourceEntity(49U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(152U);
    msg.x = 0.714628794908788;
    msg.y = 0.3861918656600333;
    msg.z = 0.8433194388287428;
    msg.phi = 0.7002021514997746;
    msg.theta = 0.28065883583736295;
    msg.psi = 0.21962472534977306;
    msg.p = 0.45529003757974507;
    msg.q = 0.37169197227040407;
    msg.r = 0.6547240986514145;
    msg.u = 0.020231751898327377;
    msg.v = 0.8246570313201298;
    msg.w = 0.5720153119631703;
    msg.bias_psi = 0.27520546577339144;
    msg.bias_r = 0.6680394696254132;

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
    msg.setTimeStamp(0.08032340190109022);
    msg.setSource(61431U);
    msg.setSourceEntity(219U);
    msg.setDestination(14520U);
    msg.setDestinationEntity(144U);
    msg.x = 0.7996166296628617;
    msg.y = 0.45294046388057285;
    msg.z = 0.19996958667298192;
    msg.phi = 0.23911790286026213;
    msg.theta = 0.4487313289862358;
    msg.psi = 0.5229063255694869;
    msg.p = 0.3607167011233333;
    msg.q = 0.5414589452028619;
    msg.r = 0.8438330948630087;
    msg.u = 0.48609738805253;
    msg.v = 0.6541276178402441;
    msg.w = 0.4167222604006422;
    msg.bias_psi = 0.8488578007546124;
    msg.bias_r = 0.5211248210263344;

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
    msg.setTimeStamp(0.1685071370304696);
    msg.setSource(8655U);
    msg.setSourceEntity(222U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(172U);
    msg.bias_psi = 0.48466154505692116;
    msg.bias_r = 0.8420940356161507;
    msg.cog = 0.7449297744547348;
    msg.cyaw = 0.45867841423101285;
    msg.lbl_rej_level = 0.3428255699219014;
    msg.gps_rej_level = 0.20263023355443732;
    msg.custom_x = 0.48429377868586376;
    msg.custom_y = 0.9162662057429606;
    msg.custom_z = 0.7443145442974598;

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
    msg.setTimeStamp(0.8396347552179843);
    msg.setSource(44856U);
    msg.setSourceEntity(46U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(39U);
    msg.bias_psi = 0.17934486521123216;
    msg.bias_r = 0.9950541691059561;
    msg.cog = 0.15913297432043993;
    msg.cyaw = 0.08786153327115354;
    msg.lbl_rej_level = 0.3680144032438607;
    msg.gps_rej_level = 0.8801676799038284;
    msg.custom_x = 0.17561321931226603;
    msg.custom_y = 0.7901007536453654;
    msg.custom_z = 0.18551499216156198;

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
    msg.setTimeStamp(0.6453896200452974);
    msg.setSource(39744U);
    msg.setSourceEntity(240U);
    msg.setDestination(43356U);
    msg.setDestinationEntity(20U);
    msg.bias_psi = 0.8568120526939345;
    msg.bias_r = 0.12039301727138108;
    msg.cog = 0.6993924912831795;
    msg.cyaw = 0.6719772379255117;
    msg.lbl_rej_level = 0.718712908876301;
    msg.gps_rej_level = 0.10146252092305852;
    msg.custom_x = 0.13736963752386055;
    msg.custom_y = 0.709833181737454;
    msg.custom_z = 0.13727896522318261;

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
    msg.setTimeStamp(0.5943975677734158);
    msg.setSource(64486U);
    msg.setSourceEntity(208U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(68U);
    msg.utc_time = 0.19003396042804555;
    msg.reason = 75U;

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
    msg.setTimeStamp(0.4391642940475874);
    msg.setSource(63955U);
    msg.setSourceEntity(6U);
    msg.setDestination(39717U);
    msg.setDestinationEntity(165U);
    msg.utc_time = 0.3448853470723867;
    msg.reason = 104U;

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
    msg.setTimeStamp(0.34791566013857034);
    msg.setSource(43377U);
    msg.setSourceEntity(61U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.2405887702856545;
    msg.reason = 65U;

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
    msg.setTimeStamp(0.09744955722273752);
    msg.setSource(16735U);
    msg.setSourceEntity(101U);
    msg.setDestination(34087U);
    msg.setDestinationEntity(5U);
    msg.id = 247U;
    msg.range = 0.6062941747823355;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.30800085166304225);
    msg.setSource(46924U);
    msg.setSourceEntity(22U);
    msg.setDestination(63767U);
    msg.setDestinationEntity(160U);
    msg.id = 246U;
    msg.range = 0.9922881893456909;
    msg.acceptance = 8U;

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
    msg.setTimeStamp(0.11991814936097878);
    msg.setSource(23713U);
    msg.setSourceEntity(181U);
    msg.setDestination(54707U);
    msg.setDestinationEntity(212U);
    msg.id = 26U;
    msg.range = 0.04945734732711726;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.8315173385212301);
    msg.setSource(18194U);
    msg.setSourceEntity(63U);
    msg.setDestination(63548U);
    msg.setDestinationEntity(131U);
    msg.type = 9U;
    msg.reason = 49U;
    msg.value = 0.37774511017920354;
    msg.timestep = 0.38595799625862637;

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
    msg.setTimeStamp(0.956724895695093);
    msg.setSource(33077U);
    msg.setSourceEntity(86U);
    msg.setDestination(36292U);
    msg.setDestinationEntity(22U);
    msg.type = 144U;
    msg.reason = 101U;
    msg.value = 0.13759633183704556;
    msg.timestep = 0.655322468100585;

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
    msg.setTimeStamp(0.49372681687379905);
    msg.setSource(28637U);
    msg.setSourceEntity(51U);
    msg.setDestination(41240U);
    msg.setDestinationEntity(47U);
    msg.type = 164U;
    msg.reason = 24U;
    msg.value = 0.5379944846672652;
    msg.timestep = 0.8451376086335369;

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
    msg.setTimeStamp(0.8527326084091945);
    msg.setSource(7516U);
    msg.setSourceEntity(136U);
    msg.setDestination(60961U);
    msg.setDestinationEntity(48U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LGAWASIXLSNHKIYKXBDSECAOAJANOUCVYADPQDYTLVFHDFFPQKUNCTTXGYRQBNFUQEAITYGDZMEUIAJPRCRZCBCGJNKZZPRONDBYLXGSQWPGLBZPPVEUCUNVYMHMCCMFWGFZNZDVYZPRTKFVOIGMEEIEXIUJHDLMZSHLHDBBCROGVXJNOYALHXEMTJSHPBMKNKZYPRWR");
    tmp_msg_0.lat = 0.7814502988720108;
    tmp_msg_0.lon = 0.8771944113163413;
    tmp_msg_0.depth = 0.08266106713353527;
    tmp_msg_0.query_channel = 48U;
    tmp_msg_0.reply_channel = 193U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12823832395102697;
    msg.y = 0.3888623099756373;
    msg.var_x = 0.8124444755047199;
    msg.var_y = 0.8479746964956095;
    msg.distance = 0.11902025352367407;

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
    msg.setTimeStamp(0.6217895172767463);
    msg.setSource(26561U);
    msg.setSourceEntity(182U);
    msg.setDestination(53871U);
    msg.setDestinationEntity(238U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LWIUUGNDSSQANPZRSRWLCWCWYYKMNHK");
    tmp_msg_0.lat = 0.24999056314171664;
    tmp_msg_0.lon = 0.8215549421571228;
    tmp_msg_0.depth = 0.8639278686680407;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 76U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.43599968848050585;
    msg.y = 0.9357133741521567;
    msg.var_x = 0.2071877643101101;
    msg.var_y = 0.0032156981546986874;
    msg.distance = 0.37283259211900455;

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
    msg.setTimeStamp(0.8745026770402996);
    msg.setSource(29163U);
    msg.setSourceEntity(249U);
    msg.setDestination(57182U);
    msg.setDestinationEntity(82U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CYLUNXATTUCVNXTNPVZK");
    tmp_msg_0.lat = 0.06213041091254423;
    tmp_msg_0.lon = 0.4789129743658218;
    tmp_msg_0.depth = 0.9969634675130971;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 81U;
    tmp_msg_0.transponder_delay = 4U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9247867062795571;
    msg.y = 0.6887551016594362;
    msg.var_x = 0.16821694634001505;
    msg.var_y = 0.615135286980514;
    msg.distance = 0.44645529176162024;

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
    msg.setTimeStamp(0.07284364543028765);
    msg.setSource(51756U);
    msg.setSourceEntity(217U);
    msg.setDestination(43711U);
    msg.setDestinationEntity(7U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.6380334879683602);
    msg.setSource(7929U);
    msg.setSourceEntity(103U);
    msg.setDestination(59879U);
    msg.setDestinationEntity(133U);
    msg.state = 36U;

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
    msg.setTimeStamp(0.8204618350762083);
    msg.setSource(13351U);
    msg.setSourceEntity(234U);
    msg.setDestination(14594U);
    msg.setDestinationEntity(121U);
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
    msg.setTimeStamp(0.9520392349006156);
    msg.setSource(58892U);
    msg.setSourceEntity(75U);
    msg.setDestination(36891U);
    msg.setDestinationEntity(166U);
    msg.x = 0.8270329781886001;
    msg.y = 0.08872724525891373;
    msg.z = 0.82299951304105;

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
    msg.setTimeStamp(0.9385083054634387);
    msg.setSource(4010U);
    msg.setSourceEntity(161U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(124U);
    msg.x = 0.5380443968763433;
    msg.y = 0.9209754404128893;
    msg.z = 0.878099426128733;

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
    msg.setTimeStamp(0.03031430189804174);
    msg.setSource(60838U);
    msg.setSourceEntity(145U);
    msg.setDestination(33953U);
    msg.setDestinationEntity(216U);
    msg.x = 0.8896983771953538;
    msg.y = 0.2600491819612635;
    msg.z = 0.18977532106405515;

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
    msg.setTimeStamp(0.32217287729497235);
    msg.setSource(51914U);
    msg.setSourceEntity(51U);
    msg.setDestination(54906U);
    msg.setDestinationEntity(149U);
    msg.value = 0.11100688775273104;

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
    msg.setTimeStamp(0.9410829030418381);
    msg.setSource(45508U);
    msg.setSourceEntity(108U);
    msg.setDestination(48467U);
    msg.setDestinationEntity(123U);
    msg.value = 0.2523801230838514;

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
    msg.setTimeStamp(0.06503357206792515);
    msg.setSource(39646U);
    msg.setSourceEntity(183U);
    msg.setDestination(48731U);
    msg.setDestinationEntity(230U);
    msg.value = 0.08383824714592125;

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
    msg.setTimeStamp(0.4027876783385437);
    msg.setSource(33993U);
    msg.setSourceEntity(233U);
    msg.setDestination(1535U);
    msg.setDestinationEntity(148U);
    msg.value = 0.077494309393345;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.1822023133571412);
    msg.setSource(30661U);
    msg.setSourceEntity(157U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(132U);
    msg.value = 0.43238648766742216;
    msg.z_units = 15U;

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
    msg.setTimeStamp(0.32890671238292946);
    msg.setSource(35814U);
    msg.setSourceEntity(19U);
    msg.setDestination(9892U);
    msg.setDestinationEntity(27U);
    msg.value = 0.10983784828191545;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.47441767828370573);
    msg.setSource(40886U);
    msg.setSourceEntity(72U);
    msg.setDestination(18847U);
    msg.setDestinationEntity(231U);
    msg.value = 0.748017043312811;
    msg.speed_units = 187U;

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
    msg.setTimeStamp(0.7408770183215878);
    msg.setSource(63282U);
    msg.setSourceEntity(175U);
    msg.setDestination(12686U);
    msg.setDestinationEntity(88U);
    msg.value = 0.19117636250419323;
    msg.speed_units = 208U;

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
    msg.setTimeStamp(0.607694347189883);
    msg.setSource(60370U);
    msg.setSourceEntity(198U);
    msg.setDestination(33363U);
    msg.setDestinationEntity(223U);
    msg.value = 0.32559262178223725;
    msg.speed_units = 95U;

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
    msg.setTimeStamp(0.08342869370707595);
    msg.setSource(50521U);
    msg.setSourceEntity(170U);
    msg.setDestination(55448U);
    msg.setDestinationEntity(99U);
    msg.value = 0.021125037333061036;

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
    msg.setTimeStamp(0.4198826570121392);
    msg.setSource(60427U);
    msg.setSourceEntity(193U);
    msg.setDestination(63443U);
    msg.setDestinationEntity(200U);
    msg.value = 0.5726219238266985;

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
    msg.setTimeStamp(0.23693742238319215);
    msg.setSource(62268U);
    msg.setSourceEntity(122U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(108U);
    msg.value = 0.12718108578425114;

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
    msg.setTimeStamp(0.1116903170984006);
    msg.setSource(5961U);
    msg.setSourceEntity(14U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5801666740245925;

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
    msg.setTimeStamp(0.19746034542953406);
    msg.setSource(54165U);
    msg.setSourceEntity(12U);
    msg.setDestination(56274U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9485683702297301;

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
    msg.setTimeStamp(0.11126325813795546);
    msg.setSource(36969U);
    msg.setSourceEntity(233U);
    msg.setDestination(27224U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5503300536776791;

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
    msg.setTimeStamp(0.8762284018385145);
    msg.setSource(36714U);
    msg.setSourceEntity(181U);
    msg.setDestination(35635U);
    msg.setDestinationEntity(225U);
    msg.value = 0.4940209762394606;

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
    msg.setTimeStamp(0.2127154976789184);
    msg.setSource(65250U);
    msg.setSourceEntity(167U);
    msg.setDestination(32503U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9423846215206731;

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
    msg.setTimeStamp(0.9081115116707796);
    msg.setSource(24587U);
    msg.setSourceEntity(26U);
    msg.setDestination(9612U);
    msg.setDestinationEntity(196U);
    msg.value = 0.34293622166377313;

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
    msg.setTimeStamp(0.9265870368918552);
    msg.setSource(27128U);
    msg.setSourceEntity(27U);
    msg.setDestination(27322U);
    msg.setDestinationEntity(32U);
    msg.path_ref = 2242510057U;
    msg.start_lat = 0.7097755159557045;
    msg.start_lon = 0.18973031378512817;
    msg.start_z = 0.975143204986464;
    msg.start_z_units = 12U;
    msg.end_lat = 0.5295541916991411;
    msg.end_lon = 0.14721833720798694;
    msg.end_z = 0.24504334889048418;
    msg.end_z_units = 117U;
    msg.speed = 0.9819769150140659;
    msg.speed_units = 37U;
    msg.lradius = 0.730828864254186;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.31803593727149704);
    msg.setSource(41766U);
    msg.setSourceEntity(40U);
    msg.setDestination(38818U);
    msg.setDestinationEntity(205U);
    msg.path_ref = 3145456998U;
    msg.start_lat = 0.5142719137157584;
    msg.start_lon = 0.10912176697405618;
    msg.start_z = 0.20923683449163544;
    msg.start_z_units = 221U;
    msg.end_lat = 0.9913178771183898;
    msg.end_lon = 0.5985808200020373;
    msg.end_z = 0.688483083107257;
    msg.end_z_units = 64U;
    msg.speed = 0.17982193427992343;
    msg.speed_units = 101U;
    msg.lradius = 0.9225306360444135;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.6812858759007888);
    msg.setSource(31237U);
    msg.setSourceEntity(93U);
    msg.setDestination(22402U);
    msg.setDestinationEntity(22U);
    msg.path_ref = 1292613013U;
    msg.start_lat = 0.19558091435083025;
    msg.start_lon = 0.01423313336522003;
    msg.start_z = 0.2240756916638016;
    msg.start_z_units = 229U;
    msg.end_lat = 0.5842954429925661;
    msg.end_lon = 0.014831392955891087;
    msg.end_z = 0.46567387596627074;
    msg.end_z_units = 35U;
    msg.speed = 0.7815532742728196;
    msg.speed_units = 241U;
    msg.lradius = 0.6558335709195436;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.31858197782516207);
    msg.setSource(14985U);
    msg.setSourceEntity(60U);
    msg.setDestination(32108U);
    msg.setDestinationEntity(98U);
    msg.x = 0.6319113992208744;
    msg.y = 0.6343042937661162;
    msg.z = 0.1280007234375543;
    msg.k = 0.9643110247185482;
    msg.m = 0.6627910894254317;
    msg.n = 0.40933910402307583;
    msg.flags = 112U;

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
    msg.setTimeStamp(0.555901396118995);
    msg.setSource(42432U);
    msg.setSourceEntity(52U);
    msg.setDestination(9766U);
    msg.setDestinationEntity(189U);
    msg.x = 0.6313247025614193;
    msg.y = 0.7534951307882611;
    msg.z = 0.43642053677416426;
    msg.k = 0.7337545701300977;
    msg.m = 0.9672738223559633;
    msg.n = 0.9273865157812461;
    msg.flags = 142U;

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
    msg.setTimeStamp(0.5756295009766289);
    msg.setSource(21662U);
    msg.setSourceEntity(21U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(241U);
    msg.x = 0.06873401002379909;
    msg.y = 0.9553759156019207;
    msg.z = 0.08261458439732661;
    msg.k = 0.6974443569300022;
    msg.m = 0.8753898452388943;
    msg.n = 0.17666448399923118;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.5881646100843525);
    msg.setSource(39348U);
    msg.setSourceEntity(219U);
    msg.setDestination(47228U);
    msg.setDestinationEntity(86U);
    msg.value = 0.22874575052930224;

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
    msg.setTimeStamp(0.927612163912984);
    msg.setSource(32483U);
    msg.setSourceEntity(24U);
    msg.setDestination(10812U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6501567441621501;

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
    msg.setTimeStamp(0.3019576899643349);
    msg.setSource(5102U);
    msg.setSourceEntity(220U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(218U);
    msg.value = 0.573758073769187;

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
    msg.setTimeStamp(0.42731440041247826);
    msg.setSource(44204U);
    msg.setSourceEntity(214U);
    msg.setDestination(14967U);
    msg.setDestinationEntity(191U);
    msg.u = 0.5304534374423439;
    msg.v = 0.12749014819089266;
    msg.w = 0.35986001482411245;
    msg.p = 0.8415225519232549;
    msg.q = 0.40640023893663413;
    msg.r = 0.11396779492179587;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.8952370592003446);
    msg.setSource(25145U);
    msg.setSourceEntity(67U);
    msg.setDestination(42934U);
    msg.setDestinationEntity(235U);
    msg.u = 0.6017584876555669;
    msg.v = 0.8849644514787478;
    msg.w = 0.6819524007745645;
    msg.p = 0.9108710589047697;
    msg.q = 0.6629996449085795;
    msg.r = 0.9024707669218772;
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
    msg.setTimeStamp(0.9177333711256376);
    msg.setSource(2974U);
    msg.setSourceEntity(142U);
    msg.setDestination(7143U);
    msg.setDestinationEntity(68U);
    msg.u = 0.18232627636191523;
    msg.v = 0.41089199038582214;
    msg.w = 0.8858270193793287;
    msg.p = 0.9311897230325225;
    msg.q = 0.03496732559204285;
    msg.r = 0.7709011517569996;
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
    msg.setTimeStamp(0.40949508050188643);
    msg.setSource(1260U);
    msg.setSourceEntity(76U);
    msg.setDestination(739U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 641711088U;
    msg.start_lat = 0.41298255124919314;
    msg.start_lon = 0.6539556607207515;
    msg.start_z = 0.09974627232543642;
    msg.start_z_units = 59U;
    msg.end_lat = 0.027804929266259104;
    msg.end_lon = 0.6221467624511805;
    msg.end_z = 0.5736279887534906;
    msg.end_z_units = 69U;
    msg.lradius = 0.6841495571179051;
    msg.flags = 3U;
    msg.x = 0.21588526174746747;
    msg.y = 0.17468782747693967;
    msg.z = 0.21043940191442767;
    msg.vx = 0.8554475607144472;
    msg.vy = 0.31701206642033175;
    msg.vz = 0.5351212007883672;
    msg.course_error = 0.6732604144684571;
    msg.eta = 4332U;

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
    msg.setTimeStamp(0.13809561581666274);
    msg.setSource(61498U);
    msg.setSourceEntity(41U);
    msg.setDestination(301U);
    msg.setDestinationEntity(102U);
    msg.path_ref = 3291472598U;
    msg.start_lat = 0.8616203055478697;
    msg.start_lon = 0.6990123299623713;
    msg.start_z = 0.8151067263571594;
    msg.start_z_units = 22U;
    msg.end_lat = 0.942239077268335;
    msg.end_lon = 0.710202565509782;
    msg.end_z = 0.5985354711996707;
    msg.end_z_units = 76U;
    msg.lradius = 0.3943565176221606;
    msg.flags = 174U;
    msg.x = 0.8474376604906348;
    msg.y = 0.9978040200855736;
    msg.z = 0.02749418226242817;
    msg.vx = 0.7237066121731909;
    msg.vy = 0.31982521826024923;
    msg.vz = 0.07675716928546006;
    msg.course_error = 0.7668053072080696;
    msg.eta = 14696U;

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
    msg.setTimeStamp(0.5973631358533374);
    msg.setSource(63610U);
    msg.setSourceEntity(214U);
    msg.setDestination(10810U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 4242864009U;
    msg.start_lat = 0.010678150035585476;
    msg.start_lon = 0.6330025408923153;
    msg.start_z = 0.5485562885572551;
    msg.start_z_units = 244U;
    msg.end_lat = 0.5464738534940808;
    msg.end_lon = 0.6383395605505595;
    msg.end_z = 0.48432625860080203;
    msg.end_z_units = 229U;
    msg.lradius = 0.7322421954534936;
    msg.flags = 59U;
    msg.x = 0.5345157820927426;
    msg.y = 0.6080403468489757;
    msg.z = 0.8710894206506082;
    msg.vx = 0.017490430239175958;
    msg.vy = 0.691438302403301;
    msg.vz = 0.5099132509885143;
    msg.course_error = 0.3081191608755721;
    msg.eta = 58722U;

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
    msg.setTimeStamp(0.8235046047836173);
    msg.setSource(33379U);
    msg.setSourceEntity(112U);
    msg.setDestination(11158U);
    msg.setDestinationEntity(86U);
    msg.k = 0.2394091301657093;
    msg.m = 0.030774047090733392;
    msg.n = 0.2650458142398592;

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
    msg.setTimeStamp(0.08708560179404645);
    msg.setSource(829U);
    msg.setSourceEntity(119U);
    msg.setDestination(54742U);
    msg.setDestinationEntity(244U);
    msg.k = 0.4122552669463353;
    msg.m = 0.3184671340874563;
    msg.n = 0.39750532462666766;

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
    msg.setTimeStamp(0.9819748667503458);
    msg.setSource(57126U);
    msg.setSourceEntity(192U);
    msg.setDestination(24394U);
    msg.setDestinationEntity(222U);
    msg.k = 0.8877429179818837;
    msg.m = 0.38596871976657776;
    msg.n = 0.42753106814895425;

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
    msg.setTimeStamp(0.7682473810725287);
    msg.setSource(36258U);
    msg.setSourceEntity(165U);
    msg.setDestination(24574U);
    msg.setDestinationEntity(188U);
    msg.p = 0.8008120150324366;
    msg.i = 0.3361839524861263;
    msg.d = 0.4648149036119371;
    msg.a = 0.9037145336994763;

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
    msg.setTimeStamp(0.8756488536614297);
    msg.setSource(11477U);
    msg.setSourceEntity(35U);
    msg.setDestination(36155U);
    msg.setDestinationEntity(160U);
    msg.p = 0.8134699255188764;
    msg.i = 0.10126937316925444;
    msg.d = 0.30987933993592465;
    msg.a = 0.6390465722430682;

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
    msg.setTimeStamp(0.0025932422773463637);
    msg.setSource(52820U);
    msg.setSourceEntity(25U);
    msg.setDestination(12445U);
    msg.setDestinationEntity(28U);
    msg.p = 0.9895195010392447;
    msg.i = 0.08050599065277597;
    msg.d = 0.22216400782352885;
    msg.a = 0.93401822702339;

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
    msg.setTimeStamp(0.644039104608734);
    msg.setSource(21482U);
    msg.setSourceEntity(144U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(114U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.7088886102787869);
    msg.setSource(44568U);
    msg.setSourceEntity(252U);
    msg.setDestination(34850U);
    msg.setDestinationEntity(215U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.690060057006411);
    msg.setSource(15378U);
    msg.setSourceEntity(0U);
    msg.setDestination(25594U);
    msg.setDestinationEntity(50U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.6328644759274614);
    msg.setSource(42814U);
    msg.setSourceEntity(189U);
    msg.setDestination(40196U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 3874398620U;
    msg.id.assign("EQBCIXHOUVBJRODKWBJLNDNRFKIWGCWQDLMSVREQECKJGMPAVPYDFDFWVGGKOMYXFJLEGRIWXFHQKYDBZM");
    msg.memento.assign("CGIUSWRGZJTWAHUVHSWDNEHVKJWNHJYYKMBGKQOZKLHFVVZFUDBRBFPAZBDAFIYFVQCLONWYSNMERPSSLDIVYYBGVFSLSGJAYEPMUPGRIXXXZUPXXMLOSCDQNFEUTAMXUNIRTVKBMEYALLOWCAUCHXLCDFGKOMHHXACPGJEIMBGNTOPD");
    msg.timeout = 42671U;
    msg.lat = 0.29835143740597836;
    msg.lon = 0.6003743228105796;
    msg.z = 0.09130514709163162;
    msg.z_units = 204U;
    msg.speed = 0.6229500790662448;
    msg.speed_units = 240U;
    msg.roll = 0.6802488346166632;
    msg.pitch = 0.22893077141696427;
    msg.yaw = 0.11946272951014125;
    msg.custom.assign("TCTKWRYIUYTJKQNQKUVGMDCHCBPRYHRFMJBIFMZSLNEERYPODCTQPLSPCWAXBBYIURESLAHPKYULPCDXQWXHXVZKGCWDVKDMFBXJQHMXJOOUBFNGILZOTKMLVFVNTWEOBRPIOZDDYLRSMWVMQYWFVUBVZIZIXAVHMSATENGAQPMHVLETNRUDACYFQSQFTKXNEXJGBZWDQUOJAADCZGKUFLKJYEGICZZHXWJJ");

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
    msg.setTimeStamp(0.7884969721850823);
    msg.setSource(10041U);
    msg.setSourceEntity(88U);
    msg.setDestination(48238U);
    msg.setDestinationEntity(164U);
    msg.plan_ref = 3039915343U;
    msg.id.assign("LVNXEFTQKNVSFCXRPXCBKGJMSULTZAPTHIGPDYRXGMDFVWNKGEEKKBPKEMABJHOTRLQWQXWWGAFTDXRKUVYTSTODSBUEZWQPXYVQCVOZGTZMDIWPSNGRXCKJFBYAPCVRDVJWYGSLLTYCJCZDNURQFMBAYJ");
    msg.memento.assign("XDDAZACNPBURGMXOGAVIDBRIFINLNOFJWSJDCRNTXOLVHFJNXQQCZBIPVVLFISEUPYJSEWFRGWUHYTHXXLREQDTZKGWYAXKTYZGWJCYKZWYSUHTOXTTO");
    msg.timeout = 35403U;
    msg.lat = 0.16535196526088713;
    msg.lon = 0.8432497334744742;
    msg.z = 0.8873797714692904;
    msg.z_units = 57U;
    msg.speed = 0.2526220119468966;
    msg.speed_units = 198U;
    msg.roll = 0.3625891003428795;
    msg.pitch = 0.11388784586874645;
    msg.yaw = 0.20481581420702177;
    msg.custom.assign("JUOPMVOPMNQMLBPEYUYLSDDXWCSJIYVVWBZFHAZYWHEHVXBKTLSEDTYRVDJRZFMPTFBFXPYOJMCSFAZZXKOHGTYBKVBUJLIGCLLODZIMABXRGYGCTFOQSGKJGEUFZRWUWMZNHNRNTCALTDPWGFUAJQIXVSASWNNXQSOINXWKUNPHUAVZHJKKIQQJPK");

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
    msg.setTimeStamp(0.18741959213304715);
    msg.setSource(48179U);
    msg.setSourceEntity(52U);
    msg.setDestination(41858U);
    msg.setDestinationEntity(40U);
    msg.plan_ref = 469419903U;
    msg.id.assign("SMRIMGJAQXXHNHZOAIORLBRSYCRUPOJODJODJPOXYLIVVOTXLKEDPIEFIBUQEXHTQRYJVGBZVUXMSIBAJTMOKGCTJAVPSEKDSPVIFQWMWYFXKZSCSSYHNAFDEMCZBFGUUKBBLGZADGDUOCNTWELUAUYPTYMKNTPSMTRLIECHLOKHWFWWPDGQJQXNLQNYUCMQPVGFWKWXCJLHHCGZJANKHAHBZUEILNCEZVQDWFRWEFNBNXT");
    msg.memento.assign("OXPKMZMGSAWUGCEDHUQQDFQIQHUYIBNFEEJRDGAFSAMSDPBFLRMALTANKZEOCYWCEIDIYA");
    msg.timeout = 64056U;
    msg.lat = 0.7772021637893072;
    msg.lon = 0.4979952291883356;
    msg.z = 0.26188164175046436;
    msg.z_units = 124U;
    msg.speed = 0.23726659661421023;
    msg.speed_units = 217U;
    msg.roll = 0.2477348716711948;
    msg.pitch = 0.029236351299062102;
    msg.yaw = 0.5598183668877916;
    msg.custom.assign("TFGWRBWHZHJLFPDMBOBLUYNTTPOLKXMOYIPNCSVQJ");

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
    msg.setTimeStamp(0.6502447228794551);
    msg.setSource(61709U);
    msg.setSourceEntity(52U);
    msg.setDestination(20999U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 43992886U;
    msg.id.assign("KHBFLDSHVAASAVKPHUKRSPYFQWIZOYBMWVZJUSKINKEIPMVUMOICQRQGR");
    msg.memento.assign("AOGTIOGIHFSWWREMCHJIZOKRTOLQEQOWAQOMCKIYRULMLRTHCXXJQMKUBPOCZRVGRSZPGLTXHPGTHPAFZWIBVIEEFEYHDLYFEQYLNEGABWRDYQVUFKPEPCNREXWUDBJPNNMKUMPTUFGYKTSUABJHICBIFXBQXJFBICARJAJNVJWOZTSDCKIFMWWDVHGVYZUQYPBTSNCQL");
    msg.timeout = 18145U;
    msg.lat = 0.5515500180448887;
    msg.lon = 0.44794565674107356;
    msg.z = 0.6773157722563703;
    msg.z_units = 29U;
    msg.speed = 0.8138068559169123;
    msg.speed_units = 95U;
    msg.duration = 56625U;
    msg.radius = 0.2248934269316828;
    msg.flags = 30U;
    msg.custom.assign("EIWMSQPEATLHKOUMG");

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
    msg.setTimeStamp(0.8824922878936599);
    msg.setSource(47987U);
    msg.setSourceEntity(118U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(46U);
    msg.plan_ref = 3910847218U;
    msg.id.assign("NHWCNSCHZOIXRRFMVMMTRIBKOUQFDAOLJOEZWHVLPBOVDSGKZNIYGASAZBVWLLOPEPUTYHJNOQTFAIJZYBKJDYUJGLDRMTWGGHNBCOKNEIZIHZNLEQRDQWPSMYXJPHTLBHHJQPDBGCQQXUXKBFYADTUKMGQCANWYLVXWKMBZGCVIWVSSCUXRQ");
    msg.memento.assign("JFPNMNSGHUCWXEIOUQLTYKEEEAMFNMGZGCAVKCFSVZMNBDNGDHWKLOQUXMXACFRATOHKYJKOJHZQGIVQROQQRCGCFXDMLKBVVSOV");
    msg.timeout = 22917U;
    msg.lat = 0.9387533316301087;
    msg.lon = 0.23760177344316058;
    msg.z = 0.5946990150411676;
    msg.z_units = 204U;
    msg.speed = 0.48824396163346995;
    msg.speed_units = 5U;
    msg.duration = 39843U;
    msg.radius = 0.6645052681948674;
    msg.flags = 23U;
    msg.custom.assign("QHQLULFVAQTVGYCRCXVPPVEQPJWGCBTBNIRLVZAGDKTE");

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
    msg.setTimeStamp(0.6638859728205337);
    msg.setSource(17921U);
    msg.setSourceEntity(199U);
    msg.setDestination(1383U);
    msg.setDestinationEntity(200U);
    msg.plan_ref = 655757311U;
    msg.id.assign("ZQZDFJDTUQJPLBKOFKBXBSATVLBYROZFHFHXWEAWWKVUPHRNQCOOULWCOJDYTVRKXMENSVRXPLMRUDEOCETVHJH");
    msg.memento.assign("KWSTHQSKFGKLLQNTWHDCFYGFJPSUIEEWHQYKIFCMAKDVEMDVJHUGXCSGBDSHUADIRWOZCWYOMPINVXDIFRRZVNELBQJIJKPGAZLFLXBWTJLZPOEOBTU");
    msg.timeout = 54249U;
    msg.lat = 0.24048378996034336;
    msg.lon = 0.1311733837893697;
    msg.z = 0.5249157681605595;
    msg.z_units = 53U;
    msg.speed = 0.22957231321821991;
    msg.speed_units = 164U;
    msg.duration = 19213U;
    msg.radius = 0.7599726494669224;
    msg.flags = 185U;
    msg.custom.assign("PECCCFLZLGCMEJWUVEISEXBUJVNHNFKWSPPRIFZEOFOTBPQTRKLRDVQWCLORHHYBGSZRMKXBWVDGQTIRRIWEJMOEROPQHBBGLAYNWCOQGGFKPYUTFIJHVLBOINEGAEABJGXBSFJIZMSIWTJLAMVPHTDXXYLFIQUAYKMUDAQHPQMHSNZRAQZDYNWYPCDUNFVRFUTZ");

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
    msg.setTimeStamp(0.7066394539613967);
    msg.setSource(14483U);
    msg.setSourceEntity(38U);
    msg.setDestination(16761U);
    msg.setDestinationEntity(187U);
    msg.plan_ref = 745038223U;
    msg.id.assign("XASMFNCFXMKBGSGVYCWPBKEHIDJNMOEATAZZRYXGCWRVEEUFMCQANNGQSJURARTZGLSDKOFRYCIBOKATMFQODTGBAYJATPMHNNLEIPDYIBHEEZBKFIKDDVIQROPTXS");
    msg.memento.assign("DUAQIZAXWZCXKQSBDZYVCMIHNGFEEMOFPYQIUZGUAPPLTJDPFLZTQDKMUYTEGTWRQDEGCKVXMHLYOKKCNTFAHFXIIOYLIIXRNOAJIJLVQDDVIGPWRGRSTXGWUUCJAEPBLJEXQHSVRSCKBCXJTZNBPDGMUUTDVFNXFFASNYQBKBJZPUSCJTGHHNAORYZBWOSTMPLSOEIKKBONQELYCZUJFNRMNHOLRMLWRWHVVMAFWDAZYSGMXSWVBORH");
    msg.custom.assign("EGRCGACCASKDBJQBPIUUAFLZOOUFTAYOUJIDBUWITBBPZALUPYZEXLBHPHGMSNGMSHQLHKRYCCQOMWIXJKOQVGASDUJXZMRHXZKJLTCJPPCRVTSVBWQPATYVFDHTSWKDSWKBGWANYIMALQXFOZNIRZSEDQYLAFCGRIQYTMQFJWLUWHNJCRVJEXSDVIKVUVUFWKMEEDMOVPHINNQFYDWBGEFRMRKTPGPYJNHXSBNDFNOEZGLV");

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
    msg.setTimeStamp(0.6800757487803748);
    msg.setSource(48272U);
    msg.setSourceEntity(85U);
    msg.setDestination(17977U);
    msg.setDestinationEntity(188U);
    msg.plan_ref = 2799015808U;
    msg.id.assign("FRJISCVTHAGRDBOHCZMWLVTGOSUQTWEUMVPYTZNTBERLCITAWMXCHGMGAI");
    msg.memento.assign("DUIVHZWRCLDEIYQAGNLFKOBEPMBCZRWLRYQHDANSCJGQKQHMPDIICVKVWFATKAHWHYUXNDHEYIYUMMQKTIXJBQTEBRUKLXGZZSOYLOLHDLIABLCGPGKTSUBWUYMLCESTVTXRFWOOGNJPTJBNSIFAUXFFJWFSPBOXNJPJGYSMPZIIOSSTRWZWSCEKGDHNEQLNDAURVZURKKHVVQQVQMEFGBPYZMOZNJADBXXYRCCVMOOVE");
    msg.custom.assign("MXKDHIOIUFNCVTOOUQOFSERDLPYBHULHRWYEKMNTUZZUVUGQALEPZNUJPYXQBZMCMSWHMDHODKJXPLOPFGVQI");

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
    msg.setTimeStamp(0.5968300141864933);
    msg.setSource(5875U);
    msg.setSourceEntity(151U);
    msg.setDestination(38739U);
    msg.setDestinationEntity(21U);
    msg.plan_ref = 3847835081U;
    msg.id.assign("WWQEWGHVBRRNBMPDOHERHYWGKRZZOZSCBTVKRHJLGLIRUMDWYCHLIXVRYL");
    msg.memento.assign("NCMIZQOVVIKOKTPHSRCEQDLOKVBNNGBDUSSZOTEAUANOWYWBWEZIBWSCUDZGVCLYJJOXFYAPUDHYNXERSJTQQGJLRPUPHIWBMVWCSZUJFQAMLBPDXYJTMRPXYTDVRKDSMVHFQCAMZXFOTAVJGGYGBHBXRTZAUQAKYDJOELZABCGDWGRHLINPTNFHNEWUKXPCKTIMZEMFGFXHUTLYEEQ");
    msg.custom.assign("YRKMWHVVPWGZATZPHCNMAXHROTJDAZUPEPDZUFDRELIJHUKQXSMJJZXLNWFSJWCEUGVGZPRMDMEWVCKOLODFBOPEOZFS");

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
    msg.setTimeStamp(0.9740004574952361);
    msg.setSource(52641U);
    msg.setSourceEntity(235U);
    msg.setDestination(57562U);
    msg.setDestinationEntity(76U);
    msg.plan_ref = 2043140025U;
    msg.id.assign("QOSLAIEZWNWHNBLXTGNHSVYRFXXLLFBBLPVEDHQLCFYOPVJDVZPDXTWYSKGNYOWIPKYMRNCIKRFAMZBZLYUTGOXCMNQTKQXAMFBTTUVESRZKPTUWOYDFSQMRXENGHIRFCUUFKNYQHZNACWPSMPAMYHUVCDYVSHLRMJSJMBWBJBZPJZVCCJEISIAKLDW");
    msg.memento.assign("SOUNPJXWNWMVXRZFHSDOGKBDJYNRCIRNBBEEGXTCRDCGPAWKVELCMWHWPVBMYBIDCSNABZPTZDFOJZVKTOVLJBFJBXZTZHSVFPFDRZFNGTKWTCTDUIJLSMKYRGXIXNMLMUMIHUALIKFQEPZLDYCOCOULYIVHKYMQEWYQKFUMEOHZEPPFXWGHRTSLSZJVUQNQFSAAPQVYCGIOQKUIEQS");
    msg.timeout = 12688U;
    msg.lat = 0.24381375830828722;
    msg.lon = 0.6983930633458524;
    msg.z = 0.9432034043764488;
    msg.z_units = 71U;
    msg.duration = 45927U;
    msg.speed = 0.18988592360018963;
    msg.speed_units = 222U;
    msg.type = 61U;
    msg.radius = 0.15487006033272965;
    msg.length = 0.6537295350733413;
    msg.bearing = 0.9755598167525441;
    msg.direction = 105U;
    msg.custom.assign("NBPTUAHQZYIBHLCYJJFGMU");

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
    msg.setTimeStamp(0.7118264896997932);
    msg.setSource(41336U);
    msg.setSourceEntity(22U);
    msg.setDestination(7256U);
    msg.setDestinationEntity(220U);
    msg.plan_ref = 2897556348U;
    msg.id.assign("KRZATSWNLJJNNMAINFEUYVZKPDIQJFQTRCOLOGCMKSDYBHMYAKPWCDVZEEAYSFHZXYXQTDNVGHQXLFXKYKVGPUAEFJTRJLWESIDBQLBEXSPIADCJBUYLHUUGGBRZOIOQWFQIVOAEUSDMQOWNDORKPYUSUZHZTLRYRCHGZGCVGESMWXARQVKIOBJPPJPWVBNMBSTCRLMNPWKRFDNJXGTEDKTUWUCBXABELHOJFNGHLCIXOYFIAMXITVZV");
    msg.memento.assign("FZLUDMGKLDXLLEDEPTCQAYNJFUNTBTWYOZDZRUOGBDWCJVYU");
    msg.timeout = 11323U;
    msg.lat = 0.08358670518476763;
    msg.lon = 0.04476037266527555;
    msg.z = 0.9410143768560788;
    msg.z_units = 128U;
    msg.duration = 15881U;
    msg.speed = 0.9794398485653383;
    msg.speed_units = 241U;
    msg.type = 76U;
    msg.radius = 0.3668612923881631;
    msg.length = 0.2488041412068186;
    msg.bearing = 0.7518776346795024;
    msg.direction = 183U;
    msg.custom.assign("LYCHQJYIBJRHMLNDGIVSUAIFAECTLRJBWTJJISMKXBLLECTUWEPSOVYYUKTHZUZDBOICGKMAFCAFCVRJHYFKDLFOHKHHLJJMNPUZOENTECGGVOYDUQKDQWOGPASGDOTIHPGPGQPXDTHZDFYUERNVKPXNQRWICSEPVAUQZPMWQINAIINEJBQOQXXBYOFKZWNRXAZJFE");

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
    msg.setTimeStamp(0.6508339539063625);
    msg.setSource(64236U);
    msg.setSourceEntity(15U);
    msg.setDestination(40662U);
    msg.setDestinationEntity(217U);
    msg.plan_ref = 292678361U;
    msg.id.assign("TGTSZIXHBNYWNGCODHBEXAWUTTBJOUJFNFVSJXBFGJXVSGPHQGKYRRWZCPHMJJBDABOPAIYQNDCLLDFWHNWQTK");
    msg.memento.assign("FVYSXPRKOQOCVQWWRUCISVIJVLIQARCOAALWJOKMBHFKRILWHARBTTXFYXOGMKKDZVAXVDZVVPLQOMUXMXYBIBRDMDIIEQHYNLGTAJQYBFVGHECDZUJGTBFUJDBCBTDIVXWYZZMWQCLQYPSYWMGRJEDSEIDPEWGL");
    msg.timeout = 23326U;
    msg.lat = 0.8186997678796336;
    msg.lon = 0.7677909092868717;
    msg.z = 0.7970905135840616;
    msg.z_units = 98U;
    msg.duration = 3356U;
    msg.speed = 0.09337988898449956;
    msg.speed_units = 190U;
    msg.type = 34U;
    msg.radius = 0.26458028551994894;
    msg.length = 0.10681192962056896;
    msg.bearing = 0.5396106369472183;
    msg.direction = 188U;
    msg.custom.assign("CPKGSTKDPUHBXBZVEJLKQCJFQTHKUWWVJKLUEFLSGYLZXDNRSSOQQJEAISHSGCGNIPIORBSRORYRFVLTVDHXGZWMNCYWZUMPODCHVVFBEMCXETIBASKEXFBFYPRPIQQUMPBDTUDOFOWFGZXJGMSMOVUHZNECNXBBKXYKLYLRTQBRNTCMEXC");

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
    msg.setTimeStamp(0.17927390606830207);
    msg.setSource(9398U);
    msg.setSourceEntity(81U);
    msg.setDestination(8370U);
    msg.setDestinationEntity(100U);
    msg.plan_ref = 1750637185U;
    msg.id.assign("HOYCNXEIVVRQCLAGUGDNRAEK");
    msg.memento.assign("UHSCZHQNKSETFFPFNYHJFYTVOXOIUFPSKTJTQLHEUBGWADTVETXTBWTYUSRXMRSHZNVEYALYBDJIXANVRGZLBYFBOIRGNIRCNBOVUAAMDDIGUMHPCRKEVWDOMPQVKYRQQDWJNBDXALQLYZEYJ");
    msg.duration = 5116U;
    msg.custom.assign("ZESSWKIFFQUKRXSJAWAUJBBZOJUOYLFVAVHNDGRHHEFJFQTRYYTFXJVZUUOCAMWSRVUPUYOENGKMPOBAYZILEWGKCGZOLIXDEZVQLTDMCVQERMIIZIJBHKJKNSLHPDFRWUUYCPLQTEATOHZVWVQSXSJTRXOAATSQJVDBCYBWYHCFTKXHBPIAKNNKFUMLJMBHMQQRQNIDZHBWPGNEPSGKXXMNYSRVWGM");

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
    msg.setTimeStamp(0.7137579397516164);
    msg.setSource(17266U);
    msg.setSourceEntity(37U);
    msg.setDestination(36166U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 2653824231U;
    msg.id.assign("PEHBIILNPUDJFDKZPIWLPEWTVBZVQHIPCZFGLNKKSGHMZPYYMWPDNRIJGYXITJWDJVT");
    msg.memento.assign("NXAMOMPREDMXIVBTHETPCKHKOLNOXALIVPICCROXDJRPLEMGGA");
    msg.duration = 47009U;
    msg.custom.assign("VDONHBWHWQNWUFZLSIDYQTEGSEAZDGIVIQHJPYMSKFPETUPIOBDKJDQPRVBOAPLFRIKEXXUD");

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
    msg.setTimeStamp(0.3679798000643615);
    msg.setSource(1395U);
    msg.setSourceEntity(16U);
    msg.setDestination(39010U);
    msg.setDestinationEntity(251U);
    msg.plan_ref = 3685184843U;
    msg.id.assign("KEVMGIWSATYSRRBPVRMPUCFFDUXUHUEWFYENHPWXQKZUZWICMSILAACUVPMLXVGBWDEFVDMNIEMXSOTETRYLFCNVPZVOBJCZHKCBYATOSYJREWYKTQTYXVOQMRBUBIWVNPLKHOQYOBIGGEFJDPQZHDXNGRCLDTKMCIHWSZYBQQJBOJXDNVSZRJL");
    msg.memento.assign("LEZYXTFUSMICASMJCPCIRUASZWIQKQOOHUWEATPKVZYXEVVWUFVFLSZEPBLLZDSHNAX");
    msg.duration = 33067U;
    msg.custom.assign("CKFAVFAZDVTHBMTGPUIAMNOXZBLPWJWARJVBHTRBRQRVYYOQIBEVTTVFIDVCPJBQEVCAUSPQZMZWJFMFLKHLDJFBUDSKTWXCLHSYHGAYWKJBOZMDPOXUHDOKEMAAQVRDSUTGEDFZCTEICJKKUONIPYNNLWSMBORVCWPTNIUAKDSUGMNXGGFHNJGFEKOALSMOXLHPNRCQKCEIWBGJXFQWYQHZSXIPEWQ");

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
    msg.setTimeStamp(0.2749897914929619);
    msg.setSource(19153U);
    msg.setSourceEntity(171U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(11U);
    msg.plan_ref = 3369607572U;
    msg.id.assign("GZQUIPRLYYEAMLIEMXBHHCCYIVMYQOXTEVLPPOWRRLUWDXGNNEUOUDWORKJITJKHCMXPMBAVIRBWPKOCLJKGKGUTYWHDOZNXCBOXPAMJBXVDSNFTIACRXLZNDIFDVPHFSIFSKZXJZGWOLQZFNOSAQIRUAJHRBMLRKZZUTYJCNPCHSBVMUWSSTTGTBQBVLQ");
    msg.memento.assign("ROITFZQJXCVFINMRXFPEBDCMGEKEEGNWZLXFNCCLPMYYOVNJYAJQLFITWWHSOXKWWBUEHVGIDPJBBLILDSPVYJMTSKEUOTRBHYWUAQSZDJIHBUVOCPQTEGRXOLBZKYBZEVETTYJOFCWJRNLRQNLGX");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3982634055U;
    tmp_msg_0.start_lat = 0.5299896793482081;
    tmp_msg_0.start_lon = 0.24838879255972035;
    tmp_msg_0.start_z = 0.35983459806386797;
    tmp_msg_0.start_z_units = 140U;
    tmp_msg_0.end_lat = 0.13184088889105094;
    tmp_msg_0.end_lon = 0.590669891491307;
    tmp_msg_0.end_z = 0.6393326049109104;
    tmp_msg_0.end_z_units = 220U;
    tmp_msg_0.speed = 0.5188389526450347;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.lradius = 0.48753317695261755;
    tmp_msg_0.flags = 21U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55971U;
    msg.custom.assign("YYILCYRAFTDTFEKHPOEFEINTAPGBAMBTOVICBZHMDBKTDOGZQXLOCVRALGDUHXNVVWVTAIVQPCBWJZKLDWGMAKWRILWQHLTPSMNBPHESXOSAIFXQMLSQZSRWUVDUOTNJEZUBCCPHKTQLCXFJZQJNYREKIKRMCNTLYAGMRMVEGGSVAZJCGYWHXBYDHIDVSBPRGJXREYZYXOIBUEZUQJ");

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
    msg.setTimeStamp(0.9158757966621616);
    msg.setSource(53788U);
    msg.setSourceEntity(195U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(184U);
    msg.plan_ref = 467248974U;
    msg.id.assign("HHWHOIYDRTZQITUDKDBGTPIBNTTMCRRENXWKQNVGKGIHAZTOGQPDJCWMYYNZSVLLXNBBUXROIXXUJVCGVICGMGAW");
    msg.memento.assign("TULRLZZSUUESHFYDYPQRKAXMBQTLMDWTDQPKCCDHCPGJCGHOIHBOXEAEOXTZBRLIDMOHFJLRCGZUHCCOPKIAZTLBFLTQVMPQAGBNFYQBWPAGYOJJYXSWUIYDCLTXSKEWPDQHOPHTRXCFLBKOMSKFWDY");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1953668676U;
    tmp_msg_0.start_lat = 0.5527177042965203;
    tmp_msg_0.start_lon = 0.7785805157615262;
    tmp_msg_0.start_z = 0.8887315969022272;
    tmp_msg_0.start_z_units = 192U;
    tmp_msg_0.end_lat = 0.191354553366199;
    tmp_msg_0.end_lon = 0.09905062274489596;
    tmp_msg_0.end_z = 0.3893918282198082;
    tmp_msg_0.end_z_units = 179U;
    tmp_msg_0.speed = 0.23813461885632103;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.lradius = 0.698300816576563;
    tmp_msg_0.flags = 165U;
    msg.control.set(tmp_msg_0);
    msg.duration = 31192U;
    msg.custom.assign("SBTDKSSIPHRQZEWWYFBTPUSLEJMUJZCEWCWRVZLXTQPFNVRICDWPXFQCGKWIMYNIDKBEKTKDEWDZOLGEZHOKINWKUEJMRAXLYAQUNEGVOIAQHUVRBTPHF");

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
    msg.setTimeStamp(0.20878703354283712);
    msg.setSource(40160U);
    msg.setSourceEntity(45U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(181U);
    msg.plan_ref = 1583836651U;
    msg.id.assign("PCSBLVYPVODCJRNNJJBUZSYMDWZKYCFDFJHNTLEHDIJSNXOWGZGCWHFETXLXACUCEEBBSODHZICFXIKOARFIJRXIVGMMXPEOKRPTRJHUKDBWGZVIRQUGUQQIYUSWTQZKFZJTMGWLHUVHGYGWSXRFMQBKIZOEQWEYTXKBNYCPMOMBVHPKEMANQNEQRCHIFGCYSANHVPLRLPQMLQABOAOAWTDJXDKLLUNAYXZ");
    msg.memento.assign("NMTVQTVXWUMHEDHETGPQTBDIEBAVZURLGZGWWYRMFKORCGJBIQLDKBCTYXUITTBLUKOWJI");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7685256712596005;
    msg.control.set(tmp_msg_0);
    msg.duration = 15107U;
    msg.custom.assign("RVNOKWQTSHRPOZLXEFDQRTURYNJWDSFIZXSSLDBJQKVRQIGXPFAKUNBZYMGJHDWNHIBZNLLIOTUEKASSEJHWWUPKYKBOAPGWHNPCCCUNXVD");

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
    msg.setTimeStamp(0.11287221781355894);
    msg.setSource(37329U);
    msg.setSourceEntity(174U);
    msg.setDestination(52730U);
    msg.setDestinationEntity(159U);
    msg.plan_ref = 35805850U;
    msg.id.assign("HMHDWUFDWBGQTTOZWSTQQZKGHPONGHFGHCBFFJIETBOPNXJLHLAXWLCWVSCLDOYSXDWIQYZNKFKVURHRYLEPEBCKCZMAIHJIBIXMPXU");
    msg.memento.assign("VTICXFYARQB");
    msg.timeout = 18842U;
    msg.lat = 0.362583654930826;
    msg.lon = 0.2649646904395484;
    msg.z = 0.11896426573817165;
    msg.z_units = 224U;
    msg.speed = 0.5357594834485833;
    msg.speed_units = 79U;
    msg.bearing = 0.6702307939480726;
    msg.cross_angle = 0.698912374900594;
    msg.width = 0.7916164075307948;
    msg.length = 0.457645712445224;
    msg.hstep = 0.8614720636678794;
    msg.coff = 195U;
    msg.alternation = 14U;
    msg.flags = 14U;
    msg.custom.assign("KHOLVDHTPMBASORDKDJLYHEYHKOGCNQNSMUXXPSVKWBUGNGGWCICXNRQEDVTZRRSEXQELVJUILSNXETWXHPAUXSLJVHQGXTQINWSBPSBTVTPJAFVAZQSLAFMYOCWJTIRBIPFOFMTGOVFIUTLDORMD");

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
    msg.setTimeStamp(0.5875568498634152);
    msg.setSource(31452U);
    msg.setSourceEntity(90U);
    msg.setDestination(55943U);
    msg.setDestinationEntity(65U);
    msg.plan_ref = 4171037085U;
    msg.id.assign("RXGAAGNUJZZGOXKTNEVUINYDQWJIMPMSMVOUFGCPXFSTADRKNSFXNVUMSENXTJYWLMLBZBMQQRKRJCBBMMLOIKLHQOVOWOLBGPLRWIFANSNFOQKFDWYMJIKRAVWXBDHFTTFZELHUPUZGLTIEVUBPOUYXCYCGPKJEHTKCSVHYPGBZINAGDIXCTHS");
    msg.memento.assign("FBKSTQSIVULZMGXBKJYLBWAYZBGMGKXGGUXCOSQIJNI");
    msg.timeout = 34788U;
    msg.lat = 0.6739638701368234;
    msg.lon = 0.7401448022327015;
    msg.z = 0.43883290237840267;
    msg.z_units = 72U;
    msg.speed = 0.4262037294163422;
    msg.speed_units = 252U;
    msg.bearing = 0.5128277939417542;
    msg.cross_angle = 0.3679151439551672;
    msg.width = 0.2673963538628581;
    msg.length = 0.8745622357989703;
    msg.hstep = 0.7937825730674106;
    msg.coff = 238U;
    msg.alternation = 110U;
    msg.flags = 15U;
    msg.custom.assign("CQHDZOPGNEPVDTONBYOGZVOJHAXSKXZFKIQPBRLMCUKSADREZMYEHTU");

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
    msg.setTimeStamp(0.5445374371252427);
    msg.setSource(4781U);
    msg.setSourceEntity(83U);
    msg.setDestination(52421U);
    msg.setDestinationEntity(220U);
    msg.plan_ref = 3865403852U;
    msg.id.assign("NUYAJHIWETPXCEYLNAADMVBPDEORIJVRUGYXUSSESMBIFSBVZMMREAVZXWIZBGSCGCGBTVJBMNIATDMHUQZUKQWSLGKQRIDJLPRKEKHBFUPXYLNMXELHWYHKNOKJTLFJUKRIPQSIBXYGWEAXSCHZHDTNFFGOZWJQNXICHCANXQPCPDWQTUDVJQYZMLFAVRFUWDHOPFOCJBGEOOZYSYNCUQGKKDSLBZHTVNYOPVOKFLWLWTCEAX");
    msg.memento.assign("YVWKREUEZTLODPYISVOGYCSHPEAXUAXWNLBJSDAKCWTWLSWWNTVPJMDJWFIBFFSCDLBMXNJEQCYKUKGGMOFCRRHHSVNEUALKUQPGZFFDLOQIPPTXWHYMPJAMURZAAIADDZNFLCXEIISOOJTHXLQPSDIBBXLNSEHCJEROJKGYXYOOTR");
    msg.timeout = 39916U;
    msg.lat = 0.32054015289485904;
    msg.lon = 0.21721594773711483;
    msg.z = 0.3994026236037146;
    msg.z_units = 195U;
    msg.speed = 0.6746391860763765;
    msg.speed_units = 35U;
    msg.bearing = 0.4777392116444553;
    msg.cross_angle = 0.42450357815943585;
    msg.width = 0.7940797093097421;
    msg.length = 0.5891804807899068;
    msg.hstep = 0.05478657964991285;
    msg.coff = 88U;
    msg.alternation = 120U;
    msg.flags = 218U;
    msg.custom.assign("NFJDKWUVNIRGWWGZBCPOZTUBQDFPT");

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
    msg.setTimeStamp(0.9536705941755015);
    msg.setSource(29245U);
    msg.setSourceEntity(73U);
    msg.setDestination(10323U);
    msg.setDestinationEntity(73U);
    msg.plan_ref = 1558020641U;
    msg.id.assign("PNTHGZKIRFXNMMMHSGWNPYFOQCFUJTLSEYFDISFRJJLQELWKKZBOYLWNOLITBZED");
    msg.memento.assign("ZSKKYDLSOCCVTIQLHNPUKGTEJNUQLARHTUPSEAZBVSPIUDCXEWRZUAYRJAHQWFKVFRDMMVFBTILLYAUTFNWRVMGNTLTWOBFVUYBTPYOFVKBPIQHXWXGHCEFNGIOQFSRXFRCPAKPOYHWZJBXXJXMJFUEDKPTZPJGIEQDHCSVQVBGMWBILWZMKDNKBLJINNZXIQOAYDROPWQZUEDL");
    msg.timeout = 6585U;
    msg.lat = 0.16374588680808244;
    msg.lon = 0.7947648516269997;
    msg.z = 0.8619252173903768;
    msg.z_units = 86U;
    msg.speed = 0.7009708004769921;
    msg.speed_units = 221U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.771383580576176;
    tmp_msg_0.y = 0.45237692790754225;
    tmp_msg_0.z = 0.2795891356098874;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OHMZFEURQSUBIXSARWVHFVLXEGRLBRNMQMYNVNZUNJKQDYNIOPKFLJFAJQLSHYVFTMBNFBXJOWKDPJPKZALJAESRWDDUUNVEADSKTPSTBDGXRHHFDIKBXLYZZQUISJ");

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
    msg.setTimeStamp(0.42255729988624935);
    msg.setSource(18884U);
    msg.setSourceEntity(226U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 2650351359U;
    msg.id.assign("BYYMKDAPLBQDSYCBOLIFOYANLPIRPFOZWYQLIXFBJIVSZMKNJTCURNKMHDBPGDHNTXELJJUQNJGWVSDJWERXWTZGZHKLVTAXQEQHBUEEUGTACYESAMXUUZFSGDNMEHPXCXTRMDCCH");
    msg.memento.assign("ETBGUWRIQUJFWKFXVHFNFNIXHIPZMDRVTJXVGQZULCOYOVNZCSPTIEWJABIOOUPDQXZEALJHJBPHUGKYBEQTGCHCFCTUMIVKXSYS");
    msg.timeout = 37959U;
    msg.lat = 0.5726024112167654;
    msg.lon = 0.47164221741067525;
    msg.z = 0.12440998166672013;
    msg.z_units = 237U;
    msg.speed = 0.5061956090725934;
    msg.speed_units = 125U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5772448912972531;
    tmp_msg_0.y = 0.14428079019558582;
    tmp_msg_0.z = 0.07037758126200089;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NAHXGYMNUGUQFHQKWRLNASEEVGYPMIPBXIBJVURWVTGHSMVCYRNIHOKXAKLZWPGDJJCGZPIPLMOMKQXPZZRZEOVGORIUXDEDNQHEJYHMFKACMXBNPPUYQZOGFDJDWMTUSTXYQDUIROZYJ");

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
    msg.setTimeStamp(0.28137328407845896);
    msg.setSource(17162U);
    msg.setSourceEntity(202U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(95U);
    msg.plan_ref = 3433099739U;
    msg.id.assign("DZUUPVAUTOCQODTZFCBAGOHPCGUWNMDQVQJGYASSQKZDXHGVMEUXYERLLMSPTYAJHFVDLKUYTSRGJTSXFTOPPMWXRIXCYNJLBSIUQLWQBFWRMAHFDWVUBPRILGEBLIFTMHMJCJAKACCWZKLZNZESHIDKEUIOITTFMVDQMFEAPFLJYFNCINSYKRZXYGJGBRREYNKZWOOJKKGRQHNUASSXMHAEZBYLPBOKXPC");
    msg.memento.assign("TWUMFGLAOBQOZWEDCKFUTSXGTECLUHUPMHFDAPJXPPBVQBPNXGSBLEZKZOJZRHSHNZOUCPLHSCCDZYJLIPKYVGDFEHDAWZDQKIHGWZLBNHTHNRTRRKJ");
    msg.timeout = 12979U;
    msg.lat = 0.6978092653364852;
    msg.lon = 0.9379823812004277;
    msg.z = 0.6983141621256475;
    msg.z_units = 231U;
    msg.speed = 0.7527915997035959;
    msg.speed_units = 251U;
    msg.custom.assign("NIIHSXDJKRFPRNLSLBUOEXYEZGJKVBJYLUHSUIWNKPCUCWMUPLTCPIMVAIBLYIBTKZJDOGNEQYUAXAZRWEWZMTHRYUJSQFAQPRJKOHIDSMMLMTPFVRJOLTBTVENEKPWTBJHLMXIYYQWPQGJDKROHBVUAFYCSDAGRGAROOXQCCGGZWWF");

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
    msg.setTimeStamp(0.9237615996186817);
    msg.setSource(41330U);
    msg.setSourceEntity(234U);
    msg.setDestination(63257U);
    msg.setDestinationEntity(50U);
    msg.x = 0.6252309265259051;
    msg.y = 0.682030911784823;
    msg.z = 0.6002548380464374;

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
    msg.setTimeStamp(0.537748265675116);
    msg.setSource(10844U);
    msg.setSourceEntity(138U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(193U);
    msg.x = 0.9746844140221166;
    msg.y = 0.45830749246860003;
    msg.z = 0.7422585576297606;

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
    msg.setTimeStamp(0.932383252916362);
    msg.setSource(22018U);
    msg.setSourceEntity(128U);
    msg.setDestination(58988U);
    msg.setDestinationEntity(143U);
    msg.x = 0.03648259949227872;
    msg.y = 0.5181043124988649;
    msg.z = 0.264249764879238;

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
    msg.setTimeStamp(0.34284690847784083);
    msg.setSource(54507U);
    msg.setSourceEntity(162U);
    msg.setDestination(27400U);
    msg.setDestinationEntity(52U);
    msg.plan_ref = 322508084U;
    msg.id.assign("NDDZKTNZXGBCBMXRVQLDNTYUQFOHESRNVYICWBDITEMGSZBQSCBSUBTXY");
    msg.memento.assign("CBXKDBQRMMITARHUZLOTGOEDMDCZUYJVATTTMJYWOFSHMXNFEQUBOVXYPSZGDKLWVXZKNCTDGDVOJZRFMQZWYNTFWYKIORTVERKJQEHSAIYXSYKPHJUPQJLUSCHBPQXEIMROQHJPEZLIQNNCNGRPHRNXHABLOADICHAAKAJFNUGSBXTPYUHEDBIGOIQLGYICUDNNCFZVGR");
    msg.timeout = 49090U;
    msg.lat = 0.3376922750324516;
    msg.lon = 0.0749701542144866;
    msg.z = 0.6508560298212853;
    msg.z_units = 195U;
    msg.amplitude = 0.6899587899537626;
    msg.pitch = 0.6016504079602301;
    msg.speed = 0.8589492927482432;
    msg.speed_units = 131U;
    msg.custom.assign("XBZMYWECWUHCGBXDHUIIIRUDZIDXUPPOFJRXVOCAVHXEJSKLDMRUJUETAFLKBZGZOIQREMNEBDHSCTGFVGVUSANMCIWXZKWYGESMORLFVBIAQWFLGVHWLAFTT");

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
    msg.setTimeStamp(0.8874553600022344);
    msg.setSource(50678U);
    msg.setSourceEntity(64U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(61U);
    msg.plan_ref = 1214515867U;
    msg.id.assign("PMRBJZDDUJRLZDOVJFMROHRRTWDEAWRXHHLBNWHHSWLVLTINLRPOHXJTCBQFKKFANEJQMGIEXWVUAKJNEFAPXLBUOMWSYIMTTGTGINVOCBKYUCLPHICHDMSIFNMSXGCXDACSQYZJEBEAEQUTEQTKDOAPV");
    msg.memento.assign("IBBQNGNBMEHKZFGTQGPXSDYVLGBTUKHWDSPXBAZYYYNKKFXRMPCJIXLIVDCZLOCRHANGOLEDSFESTTGRWTJLJIILMQACJFSQTXFWVGGZXZAXREHNMJHCPWUPSXTDTMWNEKONAOKFZMQXCILCTODAKSREJUDNBYBIVDFOFXKJQ");
    msg.timeout = 5827U;
    msg.lat = 0.10375580059315881;
    msg.lon = 0.6159029172839636;
    msg.z = 0.6623129451820875;
    msg.z_units = 33U;
    msg.amplitude = 0.3800057706179606;
    msg.pitch = 0.9816999590989435;
    msg.speed = 0.46373016073079676;
    msg.speed_units = 207U;
    msg.custom.assign("RLINIWZUDGZWZEIBYVEBLTCPRUFJFJBACHYLTKLBPXLKKJISLCTZHQHPAOFDJQHTTRKGGFYFCA");

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
    msg.setTimeStamp(0.10748726909890016);
    msg.setSource(32060U);
    msg.setSourceEntity(10U);
    msg.setDestination(17234U);
    msg.setDestinationEntity(0U);
    msg.plan_ref = 1309800105U;
    msg.id.assign("SRUYLKLZXJWHYMUFEDDHKUKUHDZFYHZYOUPDVSXHSGUNUCIVFTQWCXBRRXUJUSPYFONMKQFVCVNQH");
    msg.memento.assign("SDUIRRQBZMZSXEQWRAQJYIMKLJLZSLVDVJLJWREAT");
    msg.timeout = 21023U;
    msg.lat = 0.5237953098072712;
    msg.lon = 0.6435371912176198;
    msg.z = 0.06341465005239966;
    msg.z_units = 5U;
    msg.amplitude = 0.7561871003461169;
    msg.pitch = 0.12665069348058522;
    msg.speed = 0.3365326738277018;
    msg.speed_units = 135U;
    msg.custom.assign("NNQHYBFRFNSOMMTWPZSRVLNPVYDOUUZYXKEMFTEZILTXALCVAFNXYRBHMJFEMDZCUHGKAQISJSQLQXWWHCJPVTKRIJVUOXFDUHZJDASUMLOZUCJHHAOMYQZCSVUBQEWGCYTUGNBXTOKVCZDBPQXFIREJIBPLKHMTTCAOYLIDLIFCKEGGWGXSPDJTNOJNXNRBDNIAJQILMPKPWZEOXSVRVGARGYADHSFYLSYRVOBHKZMEW");

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
    msg.setTimeStamp(0.6815297277594392);
    msg.setSource(57200U);
    msg.setSourceEntity(109U);
    msg.setDestination(34995U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.9579466860783648);
    msg.setSource(9978U);
    msg.setSourceEntity(4U);
    msg.setDestination(39512U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.34865436902325175);
    msg.setSource(10740U);
    msg.setSourceEntity(205U);
    msg.setDestination(50116U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.7181573881063198);
    msg.setSource(11768U);
    msg.setSourceEntity(141U);
    msg.setDestination(49716U);
    msg.setDestinationEntity(195U);
    msg.plan_ref = 2052836164U;
    msg.id.assign("SFYOMPQLDDIHJTAVIFLCGKOPXKHBOCJIUYYDZZLFBJYKWMHNSGJECFKLSCLLTZPEYAGDCRJMGFVARGABTUGSBPUBHHOCNV");
    msg.memento.assign("GIKHWKVWFBAJPXZBNLYPRWNIVZJNTHIVXUOMCIRSLYJOWTURVSURLOZZRDPYQKOQNRBBNODVNDMFJMJQGCNYFSYVYOKHMWTSFDRCFKCEAHPWXJJAQUVKAPIEDXMBMVELPMQBAHWGGXSZHCDFQMZUIDFLPEUFGTPBHKULHZFETTTOXINWWUEOIZACQJXSSKDQXBHIRGPSGV");
    msg.lat = 0.1992307459217696;
    msg.lon = 0.1430863769930385;
    msg.z = 0.38142017308916965;
    msg.z_units = 175U;
    msg.radius = 0.47956450824398256;
    msg.duration = 24397U;
    msg.speed = 0.10855580777116669;
    msg.speed_units = 221U;
    msg.custom.assign("STVHLBDRZHWWZNZEGVILMPEAIDSTSVGQXLMXOBDETCRMQOHKAKCNBJNXGAVFRLIRZYGOKLNWTFSGDOSXNJVPCHUEHWACEF");

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
    msg.setTimeStamp(0.9582746539079099);
    msg.setSource(26180U);
    msg.setSourceEntity(249U);
    msg.setDestination(55502U);
    msg.setDestinationEntity(134U);
    msg.plan_ref = 817569110U;
    msg.id.assign("XHCUWFXYVMUEDBKAVJVXBFPKVJHDJIAJOLPJZUDUEGNYMKCJGCYBTNVJOZEOHSHNSVYETNGRLQRGQNPUZTDSLFSAXIEQHPPFLYODAQSBLHPGMY");
    msg.memento.assign("LZSYZMKNYRLVNEWSACEZVRDVWQLHYRLLKISIHKMZCBPNTGGAUMYJOGCCLXXMIFPDBFBVNZWOKBYFFDDSSMEBDGWXIUWAOJVILZEJTPKYOAJPHEMXVUBNFEBELZXJHTXRQZUXWBQMGCNVCHJQOMJKIWYMNGVIEDKPGXWJTAQTIAXUDNORTGDFHUFHHZJQEYOQSTQJCOGRCKDZIRNUGVHORFPFP");
    msg.lat = 0.7281353750137899;
    msg.lon = 0.3246948905917385;
    msg.z = 0.7998200312211358;
    msg.z_units = 6U;
    msg.radius = 0.47001428784068533;
    msg.duration = 24849U;
    msg.speed = 0.4569837461390164;
    msg.speed_units = 22U;
    msg.custom.assign("AFGBLUKKWLRHXHIWNITALVHIAEXONJNLJYJIKJHFYKQYCBWOIAYIENOEEXBFEKBXHQSJUNTWPKTVCPXSBCGYDDLLAWFTWPZZCBLORBMDRXIJJZCHPAVZCEVSFRMQMDZVVRSPYZWAGRTVVUMJGIOEQQGFRNEC");

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
    msg.setTimeStamp(0.12333987525561685);
    msg.setSource(57503U);
    msg.setSourceEntity(111U);
    msg.setDestination(18487U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 2731622727U;
    msg.id.assign("HWRUDAMCNEWXYQYCNBEMXXRGODZJEVGAFVLMLQFWDXBUIKWYHULKSMZCMCSDPCRFKYIGOQSTSNKGKNTFJLPYPUOSQLBQOOTHTNPDIGRJMEAFAGXRBAYKJXMJXDKPEOEORCJFXOXVBMIHGHSLSBNDHQPQRWKQRIVUYBVLNIVPZGZCWLPHXIACKKVTSU");
    msg.memento.assign("FVTZSRDEPCLQYYXEEMRZBRFQCROBWOEHFHFZWXKHMWGILOOMTMLENRUGXQABSUVONCINZIJKZWOVMIUGANPGLINJEXETLKCSAQMTJGPTSWASQGTFYCSJSMRYWKRHMARBAODIPSWIPKPIZYCHXHUPOHKVKFDCOGPWVVYUULVBVKJUQBBKJPUHHHCZTWTQVDZLJQLQGMVRXJ");
    msg.lat = 0.20687128495938267;
    msg.lon = 0.2889196254617611;
    msg.z = 0.494832864058959;
    msg.z_units = 68U;
    msg.radius = 0.10118456158168176;
    msg.duration = 7931U;
    msg.speed = 0.060099904142417615;
    msg.speed_units = 106U;
    msg.custom.assign("QTNNQAQPFYGIJNIDWZDRJDBASUXGCSZCJIPRHDBLLXTRYKOQMMMYVASOKPJTJOMGSHVWFKUDAXOBLLFZUHTGBYCFUNGJXVSYVHEWZCEICLDLEXNEFKSVBQMHASEEFEVKSIXLVAGURAQQYIBMYCKEJUCGIBQKPANNWVMYRBXQMCBDVTECPZAXZMO");

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
    msg.setTimeStamp(0.11124971528886651);
    msg.setSource(52742U);
    msg.setSourceEntity(152U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(228U);
    msg.plan_ref = 867743860U;
    msg.id.assign("FONYCAHPKAWAINOEGEEVCBG");
    msg.memento.assign("JJSWCMWBOXYVTXHRHOIYKAJAPAOXEYIPQZHXKPUHZFFBEJWNCIFDHVLKUFJFIHDSCWXLAQQTWJKUTJMQUARCALZNELNYQTZPUBDLWGNHAZYOQHBXVLC");
    msg.timeout = 5967U;
    msg.flags = 44U;
    msg.lat = 0.21246246074231245;
    msg.lon = 0.22936846390423649;
    msg.start_z = 0.7618187942111765;
    msg.start_z_units = 238U;
    msg.end_z = 0.34244137294577415;
    msg.end_z_units = 129U;
    msg.radius = 0.006735459379337172;
    msg.speed = 0.12776269129920892;
    msg.speed_units = 111U;
    msg.custom.assign("KXIKOHJNVJOSGMLPDYYGFPBLLMAFWIYTDUXNGDDUNNQYBEWIMBWQMTUKOSGVBCNWRYLCOOJRANZZTFGSAPXBQJUDFAILOCMNJIHVYPRVHKDBEZEJAIAVZCLKMZDPRMWGHVWXBWHUPDRCSJEVQJXVNL");

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
    msg.setTimeStamp(0.6781475532608569);
    msg.setSource(13876U);
    msg.setSourceEntity(88U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(68U);
    msg.plan_ref = 1643930498U;
    msg.id.assign("FGJPQSAKVVIJUDKQALGWULAKSCASSIHEOWXTSXJRHTTGEZGTJYOGVQLNQYODRILMLHJTGOTTKCYJGYWCEKVYWEYPNNZHUDYBHNEVPDKPPDOSVELMQH");
    msg.memento.assign("VBBSDCTRRHLUMZNEIJCUBMIMFZZPBWKCJDPILZKRSFBYTCUQBDXTVVTJYRGPTGXHMAYFHWDBEAXUEZJOGDHVHRWXOKWLTQLGGENLAPDRFWLJNJLPMEIOMWAUJTIBCULIJXKYNKAKXQYFCIFSGNVAXPZVEFXWWOFMPYHQCDKAYMRGZSVRCZNWZSZTHRAF");
    msg.timeout = 7249U;
    msg.flags = 105U;
    msg.lat = 0.14605786565018375;
    msg.lon = 0.8275708401518147;
    msg.start_z = 0.49875487294220966;
    msg.start_z_units = 102U;
    msg.end_z = 0.28753317971718406;
    msg.end_z_units = 202U;
    msg.radius = 0.7519508173893786;
    msg.speed = 0.26717729578348437;
    msg.speed_units = 135U;
    msg.custom.assign("CXDQSGSQVGDWTXLCBVTDMSOETMBAANQOSZLDBAZEIJUDQFTMZJOVDJVJBCFZLPVYOKTMHHFLLNWQPKIIACFWBYJSOXQFMPXOPMWIUXJSDMHRANGUGNRQNIRGEBLKIPIJREOHFPZLDKWPFLWIYRXLSCNDEJYKVSBWRZCRAWWXPNORVCMMAAYQUNZOREUBTCVATQAKOGYVXKIHGJTBHXHGTKULPISEFZBVHEYXYS");

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
    msg.setTimeStamp(0.5229356662447718);
    msg.setSource(2276U);
    msg.setSourceEntity(80U);
    msg.setDestination(27107U);
    msg.setDestinationEntity(162U);
    msg.plan_ref = 666563230U;
    msg.id.assign("ZAUYRWKOMPGJCKKQCIYJXSTNEASWAOVFTKTOFFLBDQJQZLXJNCRUADIWJRFRXGKEOTRLFJQXBHBWGFQOJAGJANMVPEKCJGIGPZWRXPOCPESITURIMZSFDYCZTDMGDVNYVIWABQHOGEDQMLCHHHZZKEBELDHDUPXPNBOULKLFDBBMSNYIICWSYAEMXQKRZWYM");
    msg.memento.assign("LKFQJRLXIRESBDEUNJJQXDYRVESDAYAODEJSKEBQHKWNIGYWHHPTKZGGQXWNKAATDEQAGWFJKFICGHYUAECLWWJMIBPYAUCQMUYNXIOFURVEPGHBHIMXOKDXZCZNNZGMQHLMODCEVMNRXHR");
    msg.timeout = 44854U;
    msg.flags = 179U;
    msg.lat = 0.8507419017584682;
    msg.lon = 0.434996199872008;
    msg.start_z = 0.6096382185868462;
    msg.start_z_units = 29U;
    msg.end_z = 0.141066339503638;
    msg.end_z_units = 122U;
    msg.radius = 0.9556197460157049;
    msg.speed = 0.23541839752819005;
    msg.speed_units = 155U;
    msg.custom.assign("VNSFFVKJMIDPRGIHIYNA");

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
    msg.setTimeStamp(0.6598099603129803);
    msg.setSource(28622U);
    msg.setSourceEntity(56U);
    msg.setDestination(56176U);
    msg.setDestinationEntity(187U);
    msg.plan_ref = 3369750904U;
    msg.id.assign("GQESOMURKZKNCMZHXPDPSKJNWNXCUJZUDGABMWXUEMRYLYKTQFPXNCFUIUJFGIUCMCAIYKHWHOOWOGQSDBYRWDPZVCPAJZRIMTYWJPRODIYDHIVVFGNDQLRIPCINJHASJNLOBLGQFZVRXTEARBVLXIGCKJEABBEMHZTGHTRGOVXXQLOKTFAYBSUBYFNEPVRLKMPSFMDJAEMBPWHDTWCKZEATFQOLVECZ");
    msg.memento.assign("ANMNSUFTBTNLQWXADAYCRBGKVZQJWVMDKLYKJEJOTYLAMIMOTJTSVAUHULEKIPSXYRYWRKBCGGCRZLCEKQQURRXCHAPGTRIAVZVWBMPFHLZJXXIEROSNSFBOJCDFKILLYBNBH");
    msg.timeout = 59786U;
    msg.lat = 0.29932847196281187;
    msg.lon = 0.6594356962527687;
    msg.z = 0.63414894411917;
    msg.z_units = 171U;
    msg.speed = 0.5475580909756266;
    msg.speed_units = 231U;
    msg.custom.assign("COWDCYZSHAYBEKGAOXUPBSPSXJQTHFUJBLGSYHMKSUUDJJOGPGHIICALOOFRQVPHZTRNAZFEQTYJEIEWLUOXHCIDNPUXFCVDTFRNQPIEYLJMNZVYIWPIVAOGRELEACFJEKKECWYBQDNDJTRPXZATWSOYLXMWUMDMMZYZUTGOZICRQJQTWIKVA");

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
    msg.setTimeStamp(0.9926493370894146);
    msg.setSource(52608U);
    msg.setSourceEntity(156U);
    msg.setDestination(55272U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 3507803825U;
    msg.id.assign("HVAALXXPITFSQLABHSNVYDNOROHEZYCFKCJQUWQMLORJNLGEDLSDLRERDGXIXVZSUEVTBRSSTDWZCXMHACZRBMIQTGJMBWEZYVIXAN");
    msg.memento.assign("LEDDCJXYEZTFJNAWEEZEGUPATMSNOM");
    msg.timeout = 23836U;
    msg.lat = 0.6157094083799537;
    msg.lon = 0.42559823062438773;
    msg.z = 0.6775584865245151;
    msg.z_units = 19U;
    msg.speed = 0.5415466166317799;
    msg.speed_units = 217U;
    msg.custom.assign("KGMGEYKLLWDSHRNJOQEQEWUMTROSKRSLQSUBZVBPFADYLBPRDJXFJISDPPZVVBNLNUDZWUTMOYOHYZECHGDBQZEPAGEBIVKWTAAYHVXCMSEMIQMFOIZJCWWRSJJYKDDXUUAXFFPIWNCFEAOLCDSWPZIVSIXTOZLJUSNQHAQLHGXVGRBFFDKGPRZIEIEKRKUGYP");

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
    msg.setTimeStamp(0.3305464566391798);
    msg.setSource(11576U);
    msg.setSourceEntity(75U);
    msg.setDestination(24535U);
    msg.setDestinationEntity(102U);
    msg.plan_ref = 722376526U;
    msg.id.assign("YVJXSHBHTXVOWZBRIIOFXXURBJULOIKXMWTGAJLCHJKXGBZALTDZVNIQNQZTUUCGEBOQEIFRENXIXVNTOQKYWTBYNZYILWJFJMYJBYDHSFURJNRERDEECALHXUVVSBPRBNQFETAZVPNDLNOAPACZYGKU");
    msg.memento.assign("SVHJOMCOEIBZJKZNAIACCVVBWEDQCRMIAAUWHYVFCUEEASUFEHMJOGVGGQBGSXMVAIOTGMRBZKNDJUDALYBNPTDQXTPOGZWGREONCLXYYWYQOTFIMSYXVJHGLLRBYWDPJQJEUKPPJ");
    msg.timeout = 21648U;
    msg.lat = 0.903962506136109;
    msg.lon = 0.3815928622781237;
    msg.z = 0.3125215789527873;
    msg.z_units = 32U;
    msg.speed = 0.030338321917313116;
    msg.speed_units = 223U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8088928348673173;
    tmp_msg_0.y = 0.2808132157076427;
    tmp_msg_0.z = 0.6211578637063883;
    tmp_msg_0.t = 0.9575204242635588;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KSKVLDZFOMNFROLVRJCWQSPJKNNGCCOJELWPUCGIUWNYEFNICTHKBOZNIYTEFAGTXVRZCPFJOZIRYCHODKUUDRVNFXQYUNYXVMLVAHOGCLJAGMTAPRTRIUBUUKEDYSBHZ");

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
    msg.setTimeStamp(0.5550489799238073);
    msg.setSource(4248U);
    msg.setSourceEntity(29U);
    msg.setDestination(59813U);
    msg.setDestinationEntity(213U);
    msg.x = 0.45138615809415916;
    msg.y = 0.4518358088343978;
    msg.z = 0.09952744599463093;
    msg.t = 0.627595112259808;

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
    msg.setTimeStamp(0.32492382210276594);
    msg.setSource(22274U);
    msg.setSourceEntity(12U);
    msg.setDestination(19396U);
    msg.setDestinationEntity(179U);
    msg.x = 0.206187246271769;
    msg.y = 0.7072566559851575;
    msg.z = 0.743714442337067;
    msg.t = 0.5089421054320984;

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
    msg.setTimeStamp(0.20167874524399165);
    msg.setSource(13784U);
    msg.setSourceEntity(150U);
    msg.setDestination(5376U);
    msg.setDestinationEntity(202U);
    msg.x = 0.5902888925282522;
    msg.y = 0.008286868033907768;
    msg.z = 0.40913411763687546;
    msg.t = 0.8727307438403132;

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
    msg.setTimeStamp(0.5369062655079113);
    msg.setSource(60381U);
    msg.setSourceEntity(125U);
    msg.setDestination(64892U);
    msg.setDestinationEntity(84U);
    msg.plan_ref = 1903261428U;
    msg.id.assign("WULPXHSEDOFBHCHVYBFBCQMRRVERNUJVBTEGQKFCGSKAMQDFCET");
    msg.memento.assign("MNHKTZNRSEZPLIUOGZGMDYWVEOAFMXVQTNQFULOTTYYFBEKLMDAJBHM");
    msg.timeout = 23586U;
    msg.name.assign("EZVICYCUUXIQGNQYKOAUXPXZJWUDGTPJEVGYVSESZHGJPBVTZXPCUQRKNQWEUBIYERLKIAABSDNWREOWKXHVUSTRZQXVTISVWRQIABFTPYNPLJCAAAHELOLHOFHQEVXEKZNDYYKFFWRBBCAOMMJXNIZP");
    msg.custom.assign("KEIKWMJZFCDVDLPUXGBESHGTALUOMMGITSCOQZTHMNYOCXRTTZYYOCPYKCHGYVBDPFAVJJBVSNSEPUSCIVJAXMLMDBLBAEPHRQPEZLOCHQUNFMBYFNFSJJQBRXAQGAHXRQVKDPKQUCVSEQFORFLNRGBDOVTNUOQGYYUTKVAZWQDRZUHZSEZIGLFZDVALHWWWHDPKMOKSIIIJNHWPXYIIFLXKBFMGEMAWBICUJTNLUXJJTW");

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
    msg.setTimeStamp(0.10699304749323646);
    msg.setSource(63154U);
    msg.setSourceEntity(238U);
    msg.setDestination(591U);
    msg.setDestinationEntity(225U);
    msg.plan_ref = 3947949199U;
    msg.id.assign("LWBPAPXMOLGMBIXHQLUFAWVSKBDHERFKMEJZTUQAQZNOYYBTLIWOEHUIVRWZSRCXOGQZCBPMNNDPUWKWJDMZHLAERRDMZHGFXLJXOGVTAUTJIUBEWCYSNNIFFGEDNAMKSYJVMPHPVOTASGSTJUFYZDXCTMPCWRIFUNPSTURSRKXKPBQYAOGYPDWSNVLWDOVGCQUHZGHAYKQRQFZKHEFOVCNKD");
    msg.memento.assign("XUGUWREHBICYMSVAPUIYBSFGSTVOSUHGEWCFMTTOOVSPNNNRBVFFPRINQSESYLKFGVYKOJKQPNIRXKGKSAZJYJXDPJHWZUTFNCLDKMDQCYRKMIMJNBDWFTXKZXILJITDWHBDCSRDIGFCANSHZTQDMVJOWUAULNZZGEQDTOXEFYRYWEPBZ");
    msg.timeout = 6400U;
    msg.name.assign("RMGYBKQHYVSBACDWPZNEVNXKFUMOFWCHVTLXFMJMTQVOKKSMLKNAHTASBONNGULBKNNJINXOBQTYWXFAAIWIYDUDQIDOBYJACRDZFLAGHWUMNGYODXAFSEQGUZTEQHCHMRXLYZAYTIDEUZUS");
    msg.custom.assign("PSGCZEIAODXELNGUOWVLYJKBMTVXCASLVZBUXLFQQTRWCSYBEMNVJGVAFRWQFONEQBWDSTP");

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
    msg.setTimeStamp(0.522616060300179);
    msg.setSource(16383U);
    msg.setSourceEntity(90U);
    msg.setDestination(47367U);
    msg.setDestinationEntity(97U);
    msg.plan_ref = 2461382034U;
    msg.id.assign("FOZCPNBLUDYOILNQLPMQFKVWVEJVLKASKFQEYCBIUDBDXRQJLGFPDOOMIADHFTURIBXAASYMVHLUWTCKBEWNRSSUKDIVMOGUCNUZHPAWYNMJFOPBPRCYCHZKGDJNEUPCQIRWTXHVMRMHOSXGHLJ");
    msg.memento.assign("GVZEEENGJTHHLFLMIPVZFYQPCDQQHKGRCCRTMFLZDNWKRJYMHWFZLIMMZAEOHPTJEPJQXOPVTUICFNBPGSSIIYSCJSOUWGIKAEBVJBIVXFAUYGARASNDXCAUHYZSLBOZGRFDAYBWEJBBMEBPWJSTTQQWOOZQPUNUKMRWNYCDDULREXFPKNAXOQKLZDHQTDXGCKIVVRMSRATXEXYDKNJCYHKUTNQLFILN");
    msg.timeout = 64231U;
    msg.name.assign("FODCXKJXEEBRKCCPVPFKUERNIOFYPARPIILFJKTKWBUNRPIMCJPGTNPUERETDOILHQVBZSXROZLFEDOLYLSDJSMCGMZTSYEAAIKHGNGUWSWTKYDJEOFSJBXSQVGFXYBQJCAIHRCQHVXAZWMRAMLHEZUHQQWJKTTVFITWNPQMGAYKYNOVXIDZLQHGZEGWTQSBHPOAMXDNVQVMOUCJYDUUDLXONBAXM");
    msg.custom.assign("ETHARAYPSAUTSRNJGBURYWVCROIVEYSNSGASGVXKBFOWIEIMVFOZTEYQCBMMMXLIHDPWFJZUSGXMEQWRPEXLYQQHDDQJRPJNUUHZIKOKUJDLAVXLVAUJELQZRDYZPTCCLLDOZTMCMOFTKSFCPUUTNJD");

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
    msg.setTimeStamp(0.8208784943207926);
    msg.setSource(44107U);
    msg.setSourceEntity(205U);
    msg.setDestination(54304U);
    msg.setDestinationEntity(152U);
    msg.plan_ref = 2573153440U;
    msg.id.assign("XHUQORWAKPUKCVRZCDRDDEDAWPLBDTILVZOCKXUDUYEQJMACSWIKIGNHZSFEDBJGTYPHFEKOIZNLAUFBPGNENYWTMQBMPBFHZEWYQULBZNIATRHCGAEBIMYSTHWYRBKJQSDWFAVUGNJPHIEYYOXNCPAZWOXRSMCNJQFMKVZFVYPWRPMGLFATVWPQOFLQDGORLCVBSSTTXSSVHLJFCYZXKUZCDGNJHXSQALJERBOIUJIXUT");
    msg.memento.assign("YCLJVLNZEUGZDXHNWZWJEYRGPIJUVBKEILLYYGJGTQRDCSVUSUYGNRVSILVTMHODREMWYRBUWQOWAICOQTZHVZDHTPBNNAQXDLCOHSWTKLAKBZGDHZVIJMKBFJXTAYOKSYAZAZSCWQCDURNEJPIZTYFAMWBJWVBPCAFXTOISHPBJJLUFPXUFRBNUMKCIPYQKOLROESNEAMENFTPVFGPXXKWOMBUMRQVLSMMFQFIRKXPEXCSAKHHODQGQFC");
    msg.lat = 0.8715334519523802;
    msg.lon = 0.6308247293569992;
    msg.z = 0.8129726507040894;
    msg.z_units = 49U;
    msg.speed = 0.7715199225990631;
    msg.speed_units = 71U;
    msg.start_time = 0.3076429058374044;
    msg.custom.assign("UGXYEEYFGEDGMKWTIQIXPSBHTVMNELIUWGKYKTBHDUWCZPMBDVUHIOLJZYISVEFHCWDAHNQYNTESTRKJEJVMWLWMTCQWQPBVAZNKLZKCLKEKCDBEGLVUPVNXOZLPNNBLTHUTJRARPQZDZXN");

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
    msg.setTimeStamp(0.5959313783033408);
    msg.setSource(63551U);
    msg.setSourceEntity(58U);
    msg.setDestination(23193U);
    msg.setDestinationEntity(68U);
    msg.plan_ref = 4124773143U;
    msg.id.assign("PQIRDBQWYSCJWFPCHSBSYOFXQKIGVWTZKTHEVIIUIWLFCO");
    msg.memento.assign("FYFKJHPSXXINNGCTTEDKFCVIXMCVWWPYAHRUNDJDSBGFPPBYREOPRHEQUSFTOERMIBBQXEOVOSXDKSDMKQGEDFLICLCCGTTJZVA");
    msg.lat = 0.6973088829494284;
    msg.lon = 0.8642859584294044;
    msg.z = 0.9013922542669636;
    msg.z_units = 206U;
    msg.speed = 0.20679699297323262;
    msg.speed_units = 176U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7599122923002558;
    tmp_msg_0.y = 0.4002079951715357;
    tmp_msg_0.z = 0.467991305044271;
    tmp_msg_0.t = 0.32459637356389615;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2898U;
    tmp_msg_1.off_x = 0.20893280239785705;
    tmp_msg_1.off_y = 0.14358826649643097;
    tmp_msg_1.off_z = 0.0622037769067052;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4166605966482023;
    msg.custom.assign("HITRSPCHROLBSXMFCPXUGAOBNXOPOCOJNGPUSZIEDNJDYNKONIKFUZULJZEYRBLYTFVBQBBYHBZDSZDCYBCLJMALPKTSBQGHEFHWSTQVAFMMLRUGWKKZAXWBVIEAQGEWKVMQVPQIOQARCXOPZHKWSCXHJTLOFVGRHKTEEJNMHPIIUFCIQIVDCEDWFN");

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
    msg.setTimeStamp(0.4481770973367777);
    msg.setSource(26476U);
    msg.setSourceEntity(250U);
    msg.setDestination(46538U);
    msg.setDestinationEntity(181U);
    msg.plan_ref = 1996314187U;
    msg.id.assign("LZDHPUMAWFBIHWXTWQJIEOUUXVQWRPYIDLSPRZPPTKSJRAUKCUFQSTIVOZMDMKMCOEVYYKMVQIAWDBCHLTTLIVAKRYBEHKRRATNUWAIXYIVNECHLNOGZLBGWLVBKZCAGEWQCOGEXZXJQGNTBAOCRPSUDFIDNEQSPJILNNLMVKJJDHAPFKXVOJXZGQTMYUJLECEFZHZRZGFFMJBFSBDBOKSSDUNQGYANYCSTFYCWMJYVGNB");
    msg.memento.assign("KWDTIHLHBNVTVGJNKMLVVULJGTHAAMEDSXQYKXJBDSVCEJHBTRBEFLJRBYZFXENGVLFJFJMPYIGXKZWNPCPDBTHXIPYUJXKVGYNPHWWGSFCAOKEAQZQFUMERFALRUQNTZHQTFKLSNGDNXKGZJRPXBMUYGLUOARSIZZOWINRPIOYCFOWSYBCAPEBVSIUWYPUFWULVQDMSRZOOU");
    msg.lat = 0.440155499122861;
    msg.lon = 0.010528209709976477;
    msg.z = 0.7369226794076505;
    msg.z_units = 217U;
    msg.speed = 0.756016254154765;
    msg.speed_units = 66U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9348193113911776;
    tmp_msg_0.y = 0.3406182732974803;
    tmp_msg_0.z = 0.7054752511798711;
    tmp_msg_0.t = 0.5664918023229503;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2528575638983215;
    msg.custom.assign("LRPVKELGPEKGPUEOWELLDGUNHNCQDAIZVJUYWTJBSKXVXFENJWBNWBMHIVCNREQUNTUEOJSQXXXLORKYMIARAYFNWCQREFETOBLAOIFRZPCGNNGCMUZPJOCDXZHWHYSTBHYADINZZVCXAKGVYXBMVTFQMDMGEBFRQFHCSTKSZAIDOVMMFZPSDZKJYOUVJVB");

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
    msg.setTimeStamp(0.4288802609286886);
    msg.setSource(2767U);
    msg.setSourceEntity(235U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(249U);
    msg.vid = 30409U;
    msg.off_x = 0.7658377500084069;
    msg.off_y = 0.0698883409934512;
    msg.off_z = 0.35570139603321793;

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
    msg.setTimeStamp(0.6066258250449817);
    msg.setSource(38330U);
    msg.setSourceEntity(3U);
    msg.setDestination(6108U);
    msg.setDestinationEntity(86U);
    msg.vid = 37512U;
    msg.off_x = 0.9235142728769442;
    msg.off_y = 0.4006559751893817;
    msg.off_z = 0.24465820256608284;

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
    msg.setTimeStamp(0.048049044746684366);
    msg.setSource(48047U);
    msg.setSourceEntity(184U);
    msg.setDestination(40513U);
    msg.setDestinationEntity(9U);
    msg.vid = 35780U;
    msg.off_x = 0.2524475728159439;
    msg.off_y = 0.2710357589266542;
    msg.off_z = 0.9973501565002076;

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
    msg.setTimeStamp(0.8534379514985567);
    msg.setSource(7697U);
    msg.setSourceEntity(248U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.3488633325585929);
    msg.setSource(34777U);
    msg.setSourceEntity(150U);
    msg.setDestination(22850U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.3575548214480804);
    msg.setSource(11018U);
    msg.setSourceEntity(235U);
    msg.setDestination(10239U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.574967994822203);
    msg.setSource(65519U);
    msg.setSourceEntity(73U);
    msg.setDestination(53013U);
    msg.setDestinationEntity(2U);
    msg.mid = 17063U;

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
    msg.setTimeStamp(0.20057819974705315);
    msg.setSource(37436U);
    msg.setSourceEntity(65U);
    msg.setDestination(11552U);
    msg.setDestinationEntity(60U);
    msg.mid = 51035U;

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
    msg.setTimeStamp(0.44789136115015515);
    msg.setSource(14262U);
    msg.setSourceEntity(170U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(187U);
    msg.mid = 54781U;

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
    msg.setTimeStamp(0.02861702283972556);
    msg.setSource(34429U);
    msg.setSourceEntity(89U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(188U);
    msg.state = 184U;
    msg.eta = 44407U;
    msg.info.assign("OTADQMLKAPLPZYTSFCULSFDIDCHIWVIFKWTSSPGBFHNVAKUDLSTIAEPYLKRUVKPIWNZNYNYFHBMHBZDCQMHVYRAWUOPJWVIXMQLDREWYJFFEOGSOADOXATYJEBKBWOQFSOXEHJTIUANNBLGEFXEODVZRCBAQLUKAQQJRWRLXZZVNKHZZGJUYTOMXCXMIZJOTYVFRVSBMGQCPXJMG");

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
    msg.setTimeStamp(0.3213943350090448);
    msg.setSource(27877U);
    msg.setSourceEntity(20U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(197U);
    msg.state = 25U;
    msg.eta = 39467U;
    msg.info.assign("AAHWQTUBRFGMPNSCEWGDIIGGOFFXZEEZJULDCAMRWIJJZSEOYJMMIXOZO");

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
    msg.setTimeStamp(0.6829513421642976);
    msg.setSource(6135U);
    msg.setSourceEntity(226U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(186U);
    msg.state = 230U;
    msg.eta = 16838U;
    msg.info.assign("HVMDFISAIDJACGKOCOLHHZVUCYBOPVXZORIMARTINBMPKKTMBGMEQQJXSHWJBZNCTXDZXXMZWSWXJLRJWJFJUHTPWQHDIGZSLVGIEZTKOQOHLBARNUTPHAVUVQBXFLEUGYARJDFEQYGERWBVRDKCGBDKENPRDYLWYNPZLCCLSKARGVIDTSEUMDWMKEOBFNQEQUVOJSHNAFWPSAGJSQFGFTKXQUAPOIWXZMPYKY");

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
    msg.setTimeStamp(0.9910739298432222);
    msg.setSource(21559U);
    msg.setSourceEntity(25U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(93U);
    msg.plan_ref = 3319537691U;
    msg.id.assign("COQNIPWNDDYFWWTLDTRTDFCHBXXNVVISKWCNUPGWBVINMMWGGUZWUJRQYYFMQPGZDOSLOIJRHQNGLRMPHMDPTHSLUEVHYQIYJLPOCMKXTUJJGFMKAAAHRQCNKQUSFSAFRHYEBGYOWJEBVECHRFNLTCCQLQXPEFBXTOALDKVDBHBIABUUJFEVUXYGGSRPAEZVTOIKPYZMEHPCDZLAMGOWWXNNZKMRZCKJSASUIBV");
    msg.memento.assign("KWNDZGFQPHYUMVVZFMPTOWXTHBTSYFYLTRLHUJLCGTJVNNOESVKECWPRWGTJEBZFBKAKBJAALXAMSYNFHNVONDHFXAUAFUSNUTCLICWNZQQSECGMYGSWBONDIDRDPPGMXDIMNMGOLTJFIJAYEVCZDPMRRCARRBCEVXSZYIGIATYRSJSWIXJMZRUIQAHDLOBEXKLPZGPXWPUHQJBXXWZVHGZEOQY");
    msg.system = 50228U;
    msg.duration = 32249U;
    msg.speed = 0.3812574188747607;
    msg.speed_units = 91U;
    msg.x = 0.886141742325217;
    msg.y = 0.7040741544108039;
    msg.z = 0.572792005282934;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.6615691972719702);
    msg.setSource(6408U);
    msg.setSourceEntity(88U);
    msg.setDestination(24219U);
    msg.setDestinationEntity(101U);
    msg.plan_ref = 1932029504U;
    msg.id.assign("MGOLSWKISQACLEOXSOCG");
    msg.memento.assign("RXTHTVZGDRLEVUELDTFNKKWXJOEYSFHIPXHASQFYYGZNIAWIVJXXXHZXMFKTPZFLMWUERFKJCMLSDQSFWLYBOXFKAQGDCWRHMCEJUVVVOKGUUDOWHK");
    msg.system = 56680U;
    msg.duration = 65090U;
    msg.speed = 0.7930181955043939;
    msg.speed_units = 135U;
    msg.x = 0.8441438595186973;
    msg.y = 0.6393686703824385;
    msg.z = 0.7231918019534269;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.028299360925054362);
    msg.setSource(29612U);
    msg.setSourceEntity(28U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 1785243219U;
    msg.id.assign("NDZRISAOONFLQJEJZOKMLCVKENLUXRBCPPTTGT");
    msg.memento.assign("YKSNFEAPDVPWXUOMOUDYGQHRWKCPCRGAXAKZLXSIZMSWOFUTDMGNYXSTWGCMJKQEZTIJXRFVZUBMNTUCDDWACPJVYKNLMTEQHGBOMSTRKHS");
    msg.system = 39498U;
    msg.duration = 32400U;
    msg.speed = 0.3440935998559952;
    msg.speed_units = 184U;
    msg.x = 0.18504677754491672;
    msg.y = 0.5911003793531577;
    msg.z = 0.7258634562382381;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.9790280300076503);
    msg.setSource(40783U);
    msg.setSourceEntity(53U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(174U);
    msg.plan_ref = 1571457026U;
    msg.id.assign("SAFWMIVSHJCWNXHCJG");
    msg.memento.assign("IGOJDRIPLFICVLTVXEDKYMMBNJVAHNYEGSLIZBPUWHOFJFZZHOODBCEPXOCMIQNZROXYBBPSRFGQNZXZQVTVYLUCXAWUBXQYRASKLNKEFTKKUYRRBJIPDLYSQWAEMBJMXDDQMZHWRDAUEGIQTTAULAVLIOOBOCPMFUMTJRHWHEPKTRHMEASSSFGPKPHXRYNUZPUSJYTAXLLG");
    msg.lat = 0.8600994790148992;
    msg.lon = 0.2656005551706876;
    msg.speed = 0.06779541901646224;
    msg.speed_units = 123U;
    msg.duration = 48716U;
    msg.sys_a = 14850U;
    msg.sys_b = 2916U;
    msg.move_threshold = 0.2380619087182525;

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
    msg.setTimeStamp(0.9693710661269282);
    msg.setSource(13410U);
    msg.setSourceEntity(166U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(188U);
    msg.plan_ref = 3405397999U;
    msg.id.assign("FXUAKZIEAWMBIXWADFUIHEYCYVGOYJYGMBWBHSJFLXTDXWEQNMXFZXYBYHEEYBPDTKBOYMLUISDAELMTUJCHSKDOARZCRRFOTQNQHKLJBCMNISTPRUQXSAVMNGOQFRJSNOSFRWDGRUVMVGZKQNEQU");
    msg.memento.assign("XELFVMNDMEJVZDKTCWHBZIMXLXAJCRPTFQOOZMTHWSALTJNWCJVOOWGGUEOELKCNHPZKSNSEAZEYDOGLTRQXWHDWDFSBR");
    msg.lat = 0.8319613417800351;
    msg.lon = 0.5895083617774729;
    msg.speed = 0.741109853542793;
    msg.speed_units = 249U;
    msg.duration = 15961U;
    msg.sys_a = 52507U;
    msg.sys_b = 4588U;
    msg.move_threshold = 0.37142582008204283;

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
    msg.setTimeStamp(0.3998583863166446);
    msg.setSource(11217U);
    msg.setSourceEntity(58U);
    msg.setDestination(44085U);
    msg.setDestinationEntity(118U);
    msg.plan_ref = 404012200U;
    msg.id.assign("IZZXCDKDXLQFETGOPMBCWSSLMNTVYFCRUBZINHTJEAHRSWARMFDLPBLSJRQKZTQTBM");
    msg.memento.assign("TOAPEPXJHPFFEJIYKAUZYVSDLAPPQKLLLTDSDRBYQKMKTIRONQYNOIUXLHDZLVABSTCSWGYWQWNYYPQRRENYPZSCXFHKBDMVJBEALCHWYRCXBJGZ");
    msg.lat = 0.1081367586437395;
    msg.lon = 0.5631267261040807;
    msg.speed = 0.5223330484834036;
    msg.speed_units = 63U;
    msg.duration = 46918U;
    msg.sys_a = 21332U;
    msg.sys_b = 31994U;
    msg.move_threshold = 0.054045462672786315;

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
    msg.setTimeStamp(0.5028398980626705);
    msg.setSource(4089U);
    msg.setSourceEntity(132U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(13U);
    msg.plan_ref = 747628287U;
    msg.id.assign("KKFOPCBZEZQTNFDLJOQNCATDSKSNIRPZBFOJJEYDDUWIPTRTUXFFNQCYBGYXMUVXADGZGEOBYXJXMHJFHLBXIJHVHOKIVAZKJCHXSTPNRSRGWUHTLLUP");
    msg.memento.assign("KUMLSSMULJWHGTUUWBZXYXYNVGXBDSJBQSBCPFFEBFFGMGRRKO");
    msg.lat = 0.637071523343742;
    msg.lon = 0.8442624081007017;
    msg.z = 0.1344730421858885;
    msg.z_units = 32U;
    msg.speed = 0.38953117244169344;
    msg.speed_units = 20U;
    msg.custom.assign("NETDMETGXFTUMIYQKXZHZDBIEHKVRISQYTETIUOYOZIARSHELLYUKITJKUNWSSUNPWIFZWFDBRSEAGWZYOJMRLBBPFVGAAKVJQMVUBSXFLWIHQSTNMWJPONEKSINLXZTCMHZCVQOPADRGPGHNHPPEFEJGMBRYNMMBNDC");

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
    msg.setTimeStamp(0.8544346665505024);
    msg.setSource(18263U);
    msg.setSourceEntity(80U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(246U);
    msg.plan_ref = 1126612209U;
    msg.id.assign("GYLPPAAOXLAQOCSIDTHGFNBMJLLQLZVCLUSABALFRMPATRYINJUGUBAVDQEORZVEXXIDHMIMDFEUQRBSVJBBGQSRZNOWUHGPLXEROKETQMIHXPGTZFNESKYRZYBYLSNL");
    msg.memento.assign("STZTNCYMVMBENP");
    msg.lat = 0.9798694295951921;
    msg.lon = 0.005910618878396057;
    msg.z = 0.29182885796641567;
    msg.z_units = 9U;
    msg.speed = 0.05147817923825404;
    msg.speed_units = 1U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5514605887026637;
    tmp_msg_0.lon = 0.3650204788836662;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GTGAFSYURNCWDZTOYCRBFBHNKOISFHTPQYWOSFXNWGDRRTJKMCHVDVXHBSIYDQMJLQUWGKLJKMQSVVGNSIRDGJXMSFLLOKPATJBNGOWUOATKEZCYIVAARPRHUXTMJGPIUBTPWSLGXIPXQMUHLXWDCRIQLBSOIXYTGNNEUVLAOQCFMWPJNQEZRMDPJZZD");

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
    msg.setTimeStamp(0.704320129564434);
    msg.setSource(60004U);
    msg.setSourceEntity(137U);
    msg.setDestination(60924U);
    msg.setDestinationEntity(87U);
    msg.plan_ref = 455073062U;
    msg.id.assign("BSUZPBVUWCFRRZXIGGNFOYVRRLHWOMBLNVLZZLTKHCIHWOPHKDVMGMVNFDQYKI");
    msg.memento.assign("JPMROHZYGBRKJOFSBUCFOMXJZYZVIMKFJDRZIMDFHVQNZMUEVVEADGTZHLEEOLPIDTGDWJGOGSYZBIVLVSQCNPGAYIDVEPKBRWPLHIFHIAWIBYIRSBVKUNXHANELQAFNECBJ");
    msg.lat = 0.896038660808772;
    msg.lon = 0.7500685580260471;
    msg.z = 0.4245293745463119;
    msg.z_units = 166U;
    msg.speed = 0.5867133397289376;
    msg.speed_units = 202U;
    msg.custom.assign("KCDPKLAHVWNLBMECILNKZGMJBGJZPXTINEPGEGRHGSPZDPYNVNCGAOHUZFXISIQELQRLVBWBZAQHBYLIMAUFZASHFEDQEJMOGWNMSWRFGDICPVPUAQEXPUXKOKKYTFRWZSHLUESJLDNJNVTRXVIOWIYUX");

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
    msg.setTimeStamp(0.07661648004617261);
    msg.setSource(31514U);
    msg.setSourceEntity(217U);
    msg.setDestination(44294U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.744607278101828;
    msg.lon = 0.863585577566992;

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
    msg.setTimeStamp(0.0670383050830482);
    msg.setSource(24125U);
    msg.setSourceEntity(150U);
    msg.setDestination(38679U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.08704281646424394;
    msg.lon = 0.8457326117354784;

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
    msg.setTimeStamp(0.7924484177297243);
    msg.setSource(38992U);
    msg.setSourceEntity(2U);
    msg.setDestination(7443U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.1009272712907382;
    msg.lon = 0.6266928227909618;

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
    msg.setTimeStamp(0.5864590439481758);
    msg.setSource(58249U);
    msg.setSourceEntity(85U);
    msg.setDestination(23029U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 3176109254U;
    msg.id.assign("MBFUVJBXRPMWARVQRECZMCSYBOOPFCUATSEHUCRTWUKJHJSXGFLNLFNUVERHSNYHIAEDIFNZVZNADD");
    msg.memento.assign("UFILZBBQAUNVLTZCWPSCDXVHKGRFPCRBHGITJXYFBOAXVNRSYYXFKMOVNSLKDYMVTQQNPXEBRZODSSGZPOEZDHRPHGHZMIFYQDWCEMADHMFTSQIACQIZEYGWWJBAEVWTMLUUEINOHUTGXASUHRIVK");
    msg.timeout = 1484U;
    msg.lat = 0.3892175714039384;
    msg.lon = 0.7364520482011522;
    msg.z = 0.8747375936956611;
    msg.z_units = 4U;
    msg.pitch = 0.6765939452941832;
    msg.amplitude = 0.6487729211595172;
    msg.duration = 28074U;
    msg.speed = 0.8197505791917389;
    msg.speed_units = 100U;
    msg.radius = 0.6321899236983293;
    msg.direction = 73U;
    msg.custom.assign("DOTCNZAXPEKZSPHSAVHPAFRS");

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
    msg.setTimeStamp(0.9544023730070403);
    msg.setSource(4236U);
    msg.setSourceEntity(218U);
    msg.setDestination(5656U);
    msg.setDestinationEntity(247U);
    msg.plan_ref = 482023056U;
    msg.id.assign("XXHRFRRAVEEFKUZJJQPGVOHTQRRHFVOGBTTTZHAOSDCSLAEGIJXKPTJBPVVI");
    msg.memento.assign("JVWLSEVGUGCAGPQBWBSKIQLEKCAISTNBMXPAOKJEEBPSIZHQLYMOUSSQBTOZYYOYCWYGCKWRXILCULJZZPFLXOVVYRUTLWVTFNEDDQNZUPPOSJNHUJRZFVUKMZPASTRXMRXGEPWEIEQHVMZRMXXSSFCDIBDJRGYQD");
    msg.timeout = 11698U;
    msg.lat = 0.3115466818728123;
    msg.lon = 0.5080574232869987;
    msg.z = 0.9600967623121841;
    msg.z_units = 129U;
    msg.pitch = 0.9420667642014329;
    msg.amplitude = 0.9418086899424543;
    msg.duration = 17811U;
    msg.speed = 0.18894054190153287;
    msg.speed_units = 102U;
    msg.radius = 0.6649749867667635;
    msg.direction = 227U;
    msg.custom.assign("YHCUTZBRVGMXALQGIXVCJVRIOJFJBDUTOYBINSAYZJZGUAJQYKHNOWQPZBHKUTGEIGVZDJXGHCTEUQCWPAFJNCCLSYWMMEXQAZOVYJQRCDDLVEHGEWPSUOTFXGLOLZVSARBDZRKVI");

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
    msg.setTimeStamp(0.486183173813603);
    msg.setSource(46491U);
    msg.setSourceEntity(42U);
    msg.setDestination(13538U);
    msg.setDestinationEntity(168U);
    msg.plan_ref = 2409027574U;
    msg.id.assign("VQDIBCJJARESJPKQCPSMCFMCZVUDDUWAHSHLGXYTJSWOENELRKKMDXFJIBNUKHQVVGRXALUZIVYVFIFPXHUVHLERORXNGOTTBELDEQYDZRPQTVWKISBWIHCEYQDOARAIQTHMCWDGTYTCNKWGDBFJNBAJJHZNTFPFXOZC");
    msg.memento.assign("JBYZNWUQJJHOXMERNKHBQPMIQXDLBVMTNRRROCZUDHEHUIADHNVOGLTTVMFIAGZXMXORTFDOJRGSXSXGNOIEZBEKKSAQXQJNGUHQKBUCJAKEPQUDCWVYBQTINZYGGUIFDAGCDRWLPOIOWYIYIWNVMFJIQWZZPAHBCUCCEFLZTWVJPJMLKHCKJYZKODFGUAMSTFXXMELTCLELVRNVAWZMKXFYYPQGPASKF");
    msg.timeout = 26234U;
    msg.lat = 0.43207546284624854;
    msg.lon = 0.6239200645424953;
    msg.z = 0.06924564584710258;
    msg.z_units = 77U;
    msg.pitch = 0.3657453797387822;
    msg.amplitude = 0.3158806443964157;
    msg.duration = 41570U;
    msg.speed = 0.5121308627880649;
    msg.speed_units = 35U;
    msg.radius = 0.5255227024811076;
    msg.direction = 35U;
    msg.custom.assign("UDXNDPMXSVSZZEJHGYPAIOWLJGAPVPJHSSLQTLZIYISONNTECJTGZOCSUYRSPJIOJPTRBORVZFYHAAVCXURMFQA");

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
    msg.setTimeStamp(0.671098562098235);
    msg.setSource(6435U);
    msg.setSourceEntity(11U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(15U);
    msg.formation_name.assign("JCAWAAQJTELMMRGYGKRJRYYTGFFDHWTAGRQPEXFIZQOHFLCIMZRVVYWDMFJMVNUIRPTUNSKQNBZJZQQMXPGWEKPCHYODVGSJXCUFHWOOBDJKOUHZTLCFJAZJUBVPSHNVCPDHSYU");
    msg.reference_frame = 228U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21895U;
    tmp_msg_0.off_x = 0.9281722165506434;
    tmp_msg_0.off_y = 0.34180836508815415;
    tmp_msg_0.off_z = 0.2703579565981966;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XNTBSBBVCXKDQSYLZNWCKDFFYICWTALTDOCUAVLKWGMXMRKDOMZSJUOODBQETJMFIHTUVPFMHQKSECJWDPKDHNFQVZCLLRIRGYZTEQYGCIECRNZHPRVOVJGOAJEFYTJEGBDXLWQYUSRBMXXAFXXZMUSPZSKBQLHKIPRAQOMQAGCSUSULDNRBMGEKGHAHIVWUJBJEAELHVMHXZRPPFYINNUFFYWTWEBHPNTYNALIZZSXJDNGJUYOK");

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
    msg.setTimeStamp(0.8960234049739664);
    msg.setSource(48301U);
    msg.setSourceEntity(17U);
    msg.setDestination(9396U);
    msg.setDestinationEntity(71U);
    msg.formation_name.assign("JQITYDXZIRYQZEDZQIDVPDVNSTG");
    msg.reference_frame = 204U;
    msg.custom.assign("QTBNAMRJPHRKTZHBOYRMMAOGPIWZUFBZDMGIDVQJHLTSXSDLACSWBGZGGPDLMVJOPCAQLXZOCOPEHRIWALMCIQSXCIQQFVNMPKBOOKHLQWIMYEZRJWL");

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
    msg.setTimeStamp(0.31381706176340507);
    msg.setSource(56287U);
    msg.setSourceEntity(185U);
    msg.setDestination(14224U);
    msg.setDestinationEntity(89U);
    msg.formation_name.assign("BLZYMLEHURCFKBAIALNOQBGDQHOZKZFIHTGHKQTRESZADZODPRJQIROJYBNBSHRBNAWFOCOAXCDVJIXLPJZUHTTVFQPZKJMBAXKTCISWHMJFSNFWOTOIDVPCCVWRKXWGDXIVTPBCMXNRNQUMJFUYUSBSEZULKEXQYFYNGNAPVYJMDBTPKJMHDWUMHOPECPYEWCUQNIOSYMFLUSVENLKGVIQXGWKGWLRT");
    msg.reference_frame = 155U;
    msg.custom.assign("ZEVAIHVJTDLOUDNBTGBGMPLFWAFFTPVWOMKPARTSYUBIXJSGERGDOCIIWLBRDXEBJKLQQVEXMIXUWQZZHBQDMFRCLQCPJZIJETHVEFNCJWPJXDMANVFIUNBDULMEWHTZBSXXYRGGYKNOSTYMQWAHFIJSO");

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
    msg.setTimeStamp(0.9885315578669525);
    msg.setSource(58255U);
    msg.setSourceEntity(154U);
    msg.setDestination(48129U);
    msg.setDestinationEntity(125U);
    msg.plan_ref = 924905581U;
    msg.id.assign("BHJQKIBJNWODDFETSKMIVWFCQGZDGZEZHPYTSRJWNXINSYRGLRECQSSQGYFWXYNKUTHYCDPIVADYAHXPWOXZTJOMPZXKPROOWAAXGBKCZWNVUNRUEUGQUYUEY");
    msg.memento.assign("MXTAXQPHXXKWYILVPRBIKGTMGRCD");
    msg.group_name.assign("PQBOXGBXXBWDVFODLIBYZHFOUTNEIJISZAXBEYYOSGRUUAZRRSFJFHZRFGDDUARQWTKWFVQPLCINJIGPCNXJWZRXMKDOSIHWBVAIIJBMXWRZKEQVUVTYHZYUUGAQZJOKDVNTXSEFVEVKTKCMMPLAHMWFNLNPKLYYONCYCGCWGFGGUXKQLHD");
    msg.formation_name.assign("ZQPOLDHZGXNLHFXYNHVASEAKCLAQMNTOCDZANBKMNFWHQPIHRTNMARRBPSCLOMZXUKSKLVEEIGCVHWAKEDDUKFGVOBRVTBDGZUORVSZOAPMTSZYQIPXBOWHJCUGHBYSKPELCRSIWFWHQBBWLYQMYVGXIEOXXSLFHTPAYNSJTJSUEUYDZEQJDVICUNQNDRGCMKPIMJXYWXTJCGWTQUDJOUFRYAFJNGJILDKGVIAMWWBTFOPQ");
    msg.plan_id.assign("TGDIGCMCHAMVHLFWYEGILPZMKILBIDVBSZXPZASXGYUCLJARKGIQOZNCGLLYLNUMKADABWWNUJECVUELBHXMDZR");
    msg.description.assign("WMNDGOJSCTCNHGTZGFICQWNLKUXNKATLFMOOFRJLUDRJNKU");
    msg.leader_speed = 0.5214636841796794;
    msg.leader_bank_lim = 0.614593257505503;
    msg.pos_sim_err_lim = 0.03627832295419786;
    msg.pos_sim_err_wrn = 0.9960478056784616;
    msg.pos_sim_err_timeout = 35396U;
    msg.converg_max = 0.8233092760155428;
    msg.converg_timeout = 12213U;
    msg.comms_timeout = 34444U;
    msg.turb_lim = 0.22643122739754884;
    msg.custom.assign("TXDXGNPZQDEEDZCIOJTJHUMWXAFXZPJLAMANRUYHYGSIYWYINWMFTDETICRJRVBUAWCLEHAXTNSBHQZUMKKDBBKEZMQEOZOQGFRNSNKIXUJSXCDMVTPIKGZJQUZVESLVWGRWGHOIPHR");

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
    msg.setTimeStamp(0.2886088815090253);
    msg.setSource(15872U);
    msg.setSourceEntity(249U);
    msg.setDestination(6364U);
    msg.setDestinationEntity(67U);
    msg.plan_ref = 1099951283U;
    msg.id.assign("DCWSOYKETGWXXOHNKGOHQVNXEQLUTVFYRJHBFFQELSIYCUDOFFLZRBQMAMYMCVQZFCMTBWLKDQKMVSIEACTLGRAZWWXPGCBKDEJMJOGHTNRIASBHJZNUONPBWSXXIDRYNAQPWVZCOLBPKZIDLQZPTXUPKYJCWLJZPJT");
    msg.memento.assign("QHQBWFITRHQVBIXSLXGNNDKGEKCDCXMFSOHZEOMZSUEWIXLTLULRIOEBPXHDSEJPEDDWRJXLZDQZAEIPKZWFEJMPNBPJSTWCBAJSXZDTVCPUMRINRCYFFBNSGWGKFHKNRWYIMJVUGROEAZRHBACVKNLPBMNHMHTOZ");
    msg.group_name.assign("AEEFTSMOFYICCONSTEHYOASWLVZDAUTBUCNICREZXJNSILLPEJBVHCUOMWPQLSTZIOQRZYQGNZGVGV");
    msg.formation_name.assign("IHFAIGRMRCTBGPIMKKDJENKMTLFCASXMEIZVHJXKSAUWWIRVNNOHFAOZPPZMCTXGWQWGVEJVDKMOGPNRAXI");
    msg.plan_id.assign("YPRFOYVQLUGANZAFKLQISRAJXFVZZIZADWRSLVKEJQZESBUMTMDYIVDMYYHCZOJXIHIVBCTNREPGZWTJYCXVOJUTNNMWLASFHVFOWGQENXTOHVLTSLGNQKSRLYZCZZBYFQLUVDCFYQOPKGWDPJIPWRJHNKBMWIREEIDXEWUMJGKRTEUCNGFBIKXBCFMDAAMXVB");
    msg.description.assign("QZIWBBRTFYXLBWDYGWBQNBUBHRMMCUAVKAWVLETFDXHJDZWVSWRQZVLGOFMRWDAKXGZRPMLTCXRWMVMFBKOORSSTZVFPIYNCMXJNOVMQYSEAAYMHIUAEATFGQBIGQKSRPPQNDECLJN");
    msg.leader_speed = 0.7840808381333719;
    msg.leader_bank_lim = 0.5361265438876666;
    msg.pos_sim_err_lim = 0.9665780753872327;
    msg.pos_sim_err_wrn = 0.7963491124552982;
    msg.pos_sim_err_timeout = 17579U;
    msg.converg_max = 0.6335843376566073;
    msg.converg_timeout = 14917U;
    msg.comms_timeout = 62548U;
    msg.turb_lim = 0.19284710990547316;
    msg.custom.assign("CAJOOQIFJRIWCYWWVXVICXNADNGRKPZAKATODXXFTTIUKKKSJPPZQAVURGHOWSOLOJNIMTBBNBYLFYQSJSNFMGTCXEIUEXMUEUBUUYNXOALMTCMQGYSSJCUELPSFLOBEHMQFKMVHQEBDKKABVXIZYIKDWLTDDJPDRBEKHUCYZHCMGAHRZZLIHEXPDVWGZDWRRMNITWSVLMGLOJGQZC");

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
    msg.setTimeStamp(0.9241873855061802);
    msg.setSource(45556U);
    msg.setSourceEntity(19U);
    msg.setDestination(52011U);
    msg.setDestinationEntity(86U);
    msg.plan_ref = 3719048830U;
    msg.id.assign("QFPEKGLWZHSLC");
    msg.memento.assign("QHQERWJWUGSNXBRQFKTDOIXVZPDOYKWWOCYJ");
    msg.group_name.assign("UWZKYDJCPGVGSHBLXN");
    msg.formation_name.assign("ZHFVKZUNNRFPBXQZBTTNROYEPCWKIIDMSJLHSXGZXQLQWWGGVXFCWOKJFHVHAVRJYTDLRMIYAQSPLQUMLUNUPODFYBFGXLCNSNJNDQOTQEIKKIHQVMCEWUUHX");
    msg.plan_id.assign("EGTNKDUHAEAUOVXTAHRZOOCVTZMIGAMHIRWLLSJKWQYEBCXXSZYBNNURNVQUFQBRMDBUAFIBYVCYCETRJWPMDUJSPUFZAYWGTGBJFAEXGIHHNKQVLXVIKYJFJVGIXDLKPMVPKPSNDLMIQVMJFODPMZDJRDOGHKSNHUFIAECPXLJEKXBDBDHNOGFAQTGTSFCWZOSWOQCLYASTZWOSYBRLTUXRYGYMWLEI");
    msg.description.assign("CTAPCYLUHLJPTVNGSXFGIPPERZJJTWLGFYDDBNSHBTYOWNWGIVJZAOSWQ");
    msg.leader_speed = 0.23926853416741845;
    msg.leader_bank_lim = 0.8517187326786726;
    msg.pos_sim_err_lim = 0.06981272727067311;
    msg.pos_sim_err_wrn = 0.16146202827623057;
    msg.pos_sim_err_timeout = 34535U;
    msg.converg_max = 0.9214555917532024;
    msg.converg_timeout = 59009U;
    msg.comms_timeout = 2333U;
    msg.turb_lim = 0.40826699164460056;
    msg.custom.assign("IBTTIJPPDEWEUQZFVAQCMMARVQJAXAUMLVRUPBWMRINYEKNSVCFGMDKTBTYDACIDSJJGIBKRIWSLHIMGWKIOSXNPBMGAHDKKYTJLEAYXUNOHFGVLDGEZWVZSHPDCYUSFQRHWJJAOHSVWVQMGUZKBHCFERXDCVOJOOQIKOLXWKYESVPZQQUXWBBFXFBXIMARZRNPUH");

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
    msg.setTimeStamp(0.6206981569802752);
    msg.setSource(21267U);
    msg.setSourceEntity(163U);
    msg.setDestination(13863U);
    msg.setDestinationEntity(162U);
    msg.plan_ref = 3704715871U;
    msg.id.assign("PJKPHAFCVMPUGIGKAVLXECHMNTWKZXFJZVMDCGXSRLYCSDWAYTIXQITXSJNTQFNFXXADEZQNVLNLOMLOWYUISYJKAH");
    msg.memento.assign("WEBBENGGSLZLPPMXTSPLXYQNKOCLYSLJRDDRIWABBZTGVWOACEPFZDXIMPHUNUNXOSIBQNVHWGVXBUTSRMGLISJMFFIDLJAAQQYLTRCZGQPUDYDJANYRKXWKKGWTORQFNUVQVZUCAUHNFWBMMEIJERWMZYAGTCXPXXOFTKVIIHTCUOEXKBNPPDRYSLKPEADYOQKSELGY");
    msg.control_src = 39514U;
    msg.control_ent = 189U;
    msg.timeout = 0.025080987238722652;
    msg.loiter_radius = 0.6100214634760572;
    msg.altitude_interval = 0.8967068475600215;

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
    msg.setTimeStamp(0.6218646309144223);
    msg.setSource(10995U);
    msg.setSourceEntity(79U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(129U);
    msg.plan_ref = 2710196229U;
    msg.id.assign("KEBZWOWPOTOCBCXNVKFYZWQJLYHNDXAXACSNSNAFNCIKGITFPSELWJTYXEHFKKZMCPNSJWRGCGIIQQUPMDJAAOZWANLSOMRRMKZTADUNOLUTRZSQZZJEYJLHQMHJYCBBIGILUQFTEHPITOEE");
    msg.memento.assign("PSLFHWCHLZQGXFLRGIGCMKVFWWRDJDIVTYBUTIPDLGTBSIXEIBJGWSYSDQCJZGQSKODIDTNQ");
    msg.control_src = 7290U;
    msg.control_ent = 205U;
    msg.timeout = 0.026372655159724756;
    msg.loiter_radius = 0.21646224306049322;
    msg.altitude_interval = 0.09200537775103856;

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
    msg.setTimeStamp(0.8298018993772377);
    msg.setSource(54768U);
    msg.setSourceEntity(183U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(82U);
    msg.plan_ref = 182888938U;
    msg.id.assign("WTZRQMAZYOVBBAKHLBRDMXLVSNLQORHCDYRNQGYSXWVIQLDJEDKLFYYNEIBGOMYTLRUNMUPTOXVKSWNIZNIUNNUGTFAMPCLWEABHVVZGXXUIDDXCSJMHSDLYQWAFQMOFITEWBKAUNIGJUTCXFPEROHZDEUBVJIBKCFTFJOYMPDSKWEZSRHZXGUG");
    msg.memento.assign("FCGEJEDENBFQIYOQZXHCXSQTZVPV");
    msg.control_src = 11232U;
    msg.control_ent = 33U;
    msg.timeout = 0.8439406695867677;
    msg.loiter_radius = 0.9830867339443655;
    msg.altitude_interval = 0.28384910065298785;

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
    msg.setTimeStamp(0.8310794929252797);
    msg.setSource(64791U);
    msg.setSourceEntity(140U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(219U);
    msg.flags = 229U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.03842391619840957;
    tmp_msg_0.speed_units = 193U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9856891907072701;
    tmp_msg_1.z_units = 228U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.945002573290018;
    msg.lon = 0.03230804812269905;
    msg.radius = 0.5327210841288902;

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
    msg.setTimeStamp(0.3966097984267175);
    msg.setSource(49791U);
    msg.setSourceEntity(104U);
    msg.setDestination(62971U);
    msg.setDestinationEntity(238U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1268014938407015;
    tmp_msg_0.speed_units = 220U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.10287109512369152;
    tmp_msg_1.z_units = 23U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6594590051009197;
    msg.lon = 0.4970525259656675;
    msg.radius = 0.03846433987397058;

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
    msg.setTimeStamp(0.8810390531286763);
    msg.setSource(38770U);
    msg.setSourceEntity(200U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(184U);
    msg.flags = 60U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6912362550208266;
    tmp_msg_0.speed_units = 239U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14449280178026613;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1086584015695301;
    msg.lon = 0.5850324819632717;
    msg.radius = 0.2031005150802636;

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
    msg.setTimeStamp(0.833176278819884);
    msg.setSource(41648U);
    msg.setSourceEntity(110U);
    msg.setDestination(57738U);
    msg.setDestinationEntity(217U);
    msg.control_src = 10383U;
    msg.control_ent = 95U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 163U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13537748871186017;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.17997527469201968;
    tmp_tmp_msg_0_1.z_units = 105U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.22030172339127108;
    tmp_msg_0.lon = 0.8201616524980435;
    tmp_msg_0.radius = 0.8534309801579429;
    msg.reference.set(tmp_msg_0);
    msg.state = 115U;
    msg.proximity = 128U;

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
    msg.setTimeStamp(0.47535825573895985);
    msg.setSource(43602U);
    msg.setSourceEntity(41U);
    msg.setDestination(34778U);
    msg.setDestinationEntity(35U);
    msg.control_src = 1015U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5891095619791396;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12525906747111393;
    tmp_tmp_msg_0_1.z_units = 203U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2460525989132888;
    tmp_msg_0.lon = 0.9562219131939221;
    tmp_msg_0.radius = 0.7868597844770093;
    msg.reference.set(tmp_msg_0);
    msg.state = 189U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.6567734428757183);
    msg.setSource(38810U);
    msg.setSourceEntity(105U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(231U);
    msg.control_src = 7762U;
    msg.control_ent = 33U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 249U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4789059599895844;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9428311131625451;
    tmp_tmp_msg_0_1.z_units = 109U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.08527463436966554;
    tmp_msg_0.lon = 0.22689315051534797;
    tmp_msg_0.radius = 0.730466000859186;
    msg.reference.set(tmp_msg_0);
    msg.state = 243U;
    msg.proximity = 6U;

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
    msg.setTimeStamp(0.01756918297899801);
    msg.setSource(44961U);
    msg.setSourceEntity(211U);
    msg.setDestination(39739U);
    msg.setDestinationEntity(78U);
    msg.ax_cmd = 0.6047685740955717;
    msg.ay_cmd = 0.542531268996321;
    msg.az_cmd = 0.12857537513325823;
    msg.ax_des = 0.5478135149858451;
    msg.ay_des = 0.28713445779524105;
    msg.az_des = 0.41869160884326295;
    msg.virt_err_x = 0.740235700448933;
    msg.virt_err_y = 0.43752458713420295;
    msg.virt_err_z = 0.8441678329098549;
    msg.surf_fdbk_x = 0.9983417476718722;
    msg.surf_fdbk_y = 0.2014125112897196;
    msg.surf_fdbk_z = 0.17896883777626282;
    msg.surf_unkn_x = 0.04672474759361611;
    msg.surf_unkn_y = 0.8592787909165367;
    msg.surf_unkn_z = 0.3201359896489394;
    msg.ss_x = 0.40298914611790204;
    msg.ss_y = 0.8344639743478734;
    msg.ss_z = 0.7837597627112741;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KHXHGCEGDPGMUUSVSBZTMVHMCTRGZWIRPMJARZFFSQURZPLQPMDSFUQBGBGUPDANFXHINBXTOBKBBLGPEPDELWNITDMOXWAWJOSVOROCLFWMTYQENXIIYZDQKYNBQEHXUCZZQEZVJAVCAYJCNLNYSKUCQJAZBGLWWKXHOGDTWLOXAFYJJCIYHNAALUKTHUTSVCVIGFMKTOSNREEVPQINJ");
    tmp_msg_0.dist = 0.6383869591456436;
    tmp_msg_0.err = 0.058994185920902775;
    tmp_msg_0.ctrl_imp = 0.8105653746115549;
    tmp_msg_0.rel_dir_x = 0.7647831695435716;
    tmp_msg_0.rel_dir_y = 0.7989779330663096;
    tmp_msg_0.rel_dir_z = 0.7541940290409433;
    tmp_msg_0.err_x = 0.3912096602648214;
    tmp_msg_0.err_y = 0.5105548482534109;
    tmp_msg_0.err_z = 0.760833430694068;
    tmp_msg_0.rf_err_x = 0.7559755206760993;
    tmp_msg_0.rf_err_y = 0.328460118802672;
    tmp_msg_0.rf_err_z = 0.07211010976413146;
    tmp_msg_0.rf_err_vx = 0.8136934347991199;
    tmp_msg_0.rf_err_vy = 0.39277752190458803;
    tmp_msg_0.rf_err_vz = 0.7993857317172082;
    tmp_msg_0.ss_x = 0.7177690783758603;
    tmp_msg_0.ss_y = 0.5968711022243952;
    tmp_msg_0.ss_z = 0.5304510615264866;
    tmp_msg_0.virt_err_x = 0.4266291400399147;
    tmp_msg_0.virt_err_y = 0.5088649216345573;
    tmp_msg_0.virt_err_z = 0.8976521006569257;
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
    msg.setTimeStamp(0.965516079568043);
    msg.setSource(38594U);
    msg.setSourceEntity(27U);
    msg.setDestination(46060U);
    msg.setDestinationEntity(137U);
    msg.ax_cmd = 0.1710101653071836;
    msg.ay_cmd = 0.7497494046575659;
    msg.az_cmd = 0.38680055240559186;
    msg.ax_des = 0.5100904732087062;
    msg.ay_des = 0.16881795488991658;
    msg.az_des = 0.5253580440562661;
    msg.virt_err_x = 0.07254995252113394;
    msg.virt_err_y = 0.33813266753855964;
    msg.virt_err_z = 0.7761321082499288;
    msg.surf_fdbk_x = 0.697783449648416;
    msg.surf_fdbk_y = 0.6162787270550545;
    msg.surf_fdbk_z = 0.542052805939007;
    msg.surf_unkn_x = 0.4707719442348923;
    msg.surf_unkn_y = 0.49873720444221614;
    msg.surf_unkn_z = 0.8874709858685564;
    msg.ss_x = 0.44799920933876114;
    msg.ss_y = 0.25298561833823086;
    msg.ss_z = 0.28205952846266946;

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
    msg.setTimeStamp(0.35693922595729866);
    msg.setSource(23850U);
    msg.setSourceEntity(239U);
    msg.setDestination(59357U);
    msg.setDestinationEntity(217U);
    msg.ax_cmd = 0.7979372562017188;
    msg.ay_cmd = 0.7577563914589399;
    msg.az_cmd = 0.9688167658482003;
    msg.ax_des = 0.4536562800256094;
    msg.ay_des = 0.01470208291255004;
    msg.az_des = 0.7541206294570554;
    msg.virt_err_x = 0.47997566358999155;
    msg.virt_err_y = 0.6629020964688052;
    msg.virt_err_z = 0.07835381413763332;
    msg.surf_fdbk_x = 0.8340581931897305;
    msg.surf_fdbk_y = 0.2524247052484956;
    msg.surf_fdbk_z = 0.18000682103254406;
    msg.surf_unkn_x = 0.3136637870618648;
    msg.surf_unkn_y = 0.3907833608540182;
    msg.surf_unkn_z = 0.7608967511668552;
    msg.ss_x = 0.23336202166950193;
    msg.ss_y = 0.9108871344879883;
    msg.ss_z = 0.4413795805975529;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RSCLXLDJBGPTJWQPEAA");
    tmp_msg_0.dist = 0.1772513012718938;
    tmp_msg_0.err = 0.047217321198079754;
    tmp_msg_0.ctrl_imp = 0.8237021126877139;
    tmp_msg_0.rel_dir_x = 0.43001350820919304;
    tmp_msg_0.rel_dir_y = 0.5814375497648906;
    tmp_msg_0.rel_dir_z = 0.9085026442025252;
    tmp_msg_0.err_x = 0.09713977101801563;
    tmp_msg_0.err_y = 0.8721323473532705;
    tmp_msg_0.err_z = 0.08950438744688294;
    tmp_msg_0.rf_err_x = 0.061043833954753546;
    tmp_msg_0.rf_err_y = 0.435017836700077;
    tmp_msg_0.rf_err_z = 0.3275981987982348;
    tmp_msg_0.rf_err_vx = 0.6516832553120815;
    tmp_msg_0.rf_err_vy = 0.8804685103841866;
    tmp_msg_0.rf_err_vz = 0.43358586678597044;
    tmp_msg_0.ss_x = 0.4473927107378033;
    tmp_msg_0.ss_y = 0.657288040514245;
    tmp_msg_0.ss_z = 0.06673183612886491;
    tmp_msg_0.virt_err_x = 0.0049213210737393265;
    tmp_msg_0.virt_err_y = 0.7020662004767156;
    tmp_msg_0.virt_err_z = 0.05239066821255112;
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
    msg.setTimeStamp(0.8949602307152685);
    msg.setSource(23374U);
    msg.setSourceEntity(206U);
    msg.setDestination(22308U);
    msg.setDestinationEntity(86U);
    msg.s_id.assign("OIZPMLTLIAOPNTIUFBBAGCZDXR");
    msg.dist = 0.24929001976245868;
    msg.err = 0.8768078693992708;
    msg.ctrl_imp = 0.7145188963791462;
    msg.rel_dir_x = 0.1848495111971229;
    msg.rel_dir_y = 0.9570063253848363;
    msg.rel_dir_z = 0.5083980235287731;
    msg.err_x = 0.231066252303619;
    msg.err_y = 0.8658174645514223;
    msg.err_z = 0.32147038834478014;
    msg.rf_err_x = 0.32442141042869876;
    msg.rf_err_y = 0.2023602698601633;
    msg.rf_err_z = 0.5083282389683127;
    msg.rf_err_vx = 0.22415842375053174;
    msg.rf_err_vy = 0.10882488718644157;
    msg.rf_err_vz = 0.7324521269879843;
    msg.ss_x = 0.11825560426294579;
    msg.ss_y = 0.13820731134021091;
    msg.ss_z = 0.6987732484122916;
    msg.virt_err_x = 0.4074293741649292;
    msg.virt_err_y = 0.2914174164674447;
    msg.virt_err_z = 0.9142391217062721;

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
    msg.setTimeStamp(0.7704732698179598);
    msg.setSource(57175U);
    msg.setSourceEntity(120U);
    msg.setDestination(48946U);
    msg.setDestinationEntity(248U);
    msg.s_id.assign("TVZNIKMVNMKICFRJYADSYVOIFZYSXEVPGSODRAPEZVTUTMEQQPFJTKQXTWHBAWQDJSJLGBIYRMJKLHRWLBNMWYPQVMHOACYF");
    msg.dist = 0.9953790680724525;
    msg.err = 0.48988815402856545;
    msg.ctrl_imp = 0.28879607134795404;
    msg.rel_dir_x = 0.346034131774019;
    msg.rel_dir_y = 0.3163852880847099;
    msg.rel_dir_z = 0.17585978064801977;
    msg.err_x = 0.25722894738717117;
    msg.err_y = 0.9734069376883079;
    msg.err_z = 0.5754176489268351;
    msg.rf_err_x = 0.3997451037948585;
    msg.rf_err_y = 0.06694481599869684;
    msg.rf_err_z = 0.5742548569979724;
    msg.rf_err_vx = 0.22711630019792173;
    msg.rf_err_vy = 0.23469968627707527;
    msg.rf_err_vz = 0.9100144831473099;
    msg.ss_x = 0.0844164399858518;
    msg.ss_y = 0.0037631581811161663;
    msg.ss_z = 0.31227246013658927;
    msg.virt_err_x = 0.6422803209500672;
    msg.virt_err_y = 0.2649549292758333;
    msg.virt_err_z = 0.5319461458229184;

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
    msg.setTimeStamp(0.6590248391310219);
    msg.setSource(48291U);
    msg.setSourceEntity(27U);
    msg.setDestination(31052U);
    msg.setDestinationEntity(212U);
    msg.s_id.assign("BLMNIXPHKJOGYBBDVYIWBUCGSRFICYLPQCNFEOSFTESJQXEBXCZNWNQMYWAQOFIZWDARMJKTFCYDWKBBWYSUHMEFOEFTBF");
    msg.dist = 0.3829488822206182;
    msg.err = 0.6323356304181159;
    msg.ctrl_imp = 0.2624050352544157;
    msg.rel_dir_x = 0.6189030578588766;
    msg.rel_dir_y = 0.6391855471754665;
    msg.rel_dir_z = 0.6121720391825742;
    msg.err_x = 0.809933882430496;
    msg.err_y = 0.43020492023502255;
    msg.err_z = 0.8009913616398044;
    msg.rf_err_x = 0.9044315267348099;
    msg.rf_err_y = 0.006201485539599538;
    msg.rf_err_z = 0.3480593415175727;
    msg.rf_err_vx = 0.12872276903446356;
    msg.rf_err_vy = 0.20632096252050436;
    msg.rf_err_vz = 0.9942990110690961;
    msg.ss_x = 0.10912621322402438;
    msg.ss_y = 0.11711755633926402;
    msg.ss_z = 0.953624747502871;
    msg.virt_err_x = 0.265817567068959;
    msg.virt_err_y = 0.8502915560282273;
    msg.virt_err_z = 0.8021924461282434;

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
    msg.setTimeStamp(0.11491289635846824);
    msg.setSource(63293U);
    msg.setSourceEntity(161U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(204U);
    msg.plan_ref = 487727760U;
    msg.id.assign("RELXHMAACWJZRJLLQTINHDPRNMYIKXNDMDEGQVDHUSFQFKITXGJREPCYZYREIWIVMPAVMOBZTBKJTPRUFZXQJALDMQENOGVRJAVKMUDYCLOCTHHRSTUZLXUUSEFWPNDFOSLSDGBVSNBMLSPBVXYCUVOMTFTQTXCVMKWLVBFHHUSBIGYZKCYJXBNAKWWYNQJWNOOBFTQEJAKCEAEQCZWGWEGPPHSPKZIUBDGPKRZYD");
    msg.memento.assign("SHTPTQJOATKPJFDLVTNHBIQWISEUUYHWYOZCYEROXPSSMBTCVWLFXDVZJOSAMDIXPXCEUKIJAIWGXKLNZRGLXKLQZYQTUTPEMLCHVRNSKEFLJANKRNBDEAFJAELMCFSEPBWWOOFUTBLVWWRMQDVMHNMIIDPIRKCGDXOHPCGURVFTVIB");
    msg.timeout = 18425U;
    msg.rpm = 0.7299762102417846;
    msg.direction = 174U;
    msg.custom.assign("NTKEAOAMSMYTYQZUS");

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
    msg.setTimeStamp(0.44097867665823753);
    msg.setSource(51711U);
    msg.setSourceEntity(158U);
    msg.setDestination(61344U);
    msg.setDestinationEntity(252U);
    msg.plan_ref = 1131027102U;
    msg.id.assign("JVYPMNEVGNHUWDMCZBFOAYNITX");
    msg.memento.assign("PVSCEQDQOBAPOQDWCMJPLQTIMAOLLVJBAJHUCWBKVSSNLZCFZUUMIVWXIRMDGGYRTMIKQPRUYLIKYHXTUUTZSVFJTIBBANBYQXGUVHNNZNXCZBUFJVUWGCKDYGICKYFQYFXZTYEOGJREZKBHMPQHKKVMQBXPN");
    msg.timeout = 7352U;
    msg.rpm = 0.5393137517350041;
    msg.direction = 113U;
    msg.custom.assign("RJOLEMPFHJZCRAIULFNFFREVWCBUEHDYFXOPCFAKWJTNXGMBW");

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
    msg.setTimeStamp(0.5648744180451779);
    msg.setSource(6254U);
    msg.setSourceEntity(87U);
    msg.setDestination(48558U);
    msg.setDestinationEntity(26U);
    msg.plan_ref = 2033655445U;
    msg.id.assign("LEXUQFMPGKRPW");
    msg.memento.assign("MLIYVQWCIUQISCOGXIJNRNLLMPJFELMWYBPUDTPMCTOMIXADKMCWBVBNMNFPACLCMYXRATJTRKUADQPTSPBNDHOOXKKUUUFGOLVFCRBZGAGFMABHJZZRLGGXZSBJJCTNOXHCGXYWVYZTKEWVHERSJJMTHFYTYPSFNZWAEOEKGWICEGKVUPSBRQEGKRNHAXSYSIBDLBQFWASVDXVKIIHAILVRHQWKYDUPNZHQFHSE");
    msg.timeout = 12072U;
    msg.rpm = 0.893646391309782;
    msg.direction = 31U;
    msg.custom.assign("QMGDAMGIBBUQTKGNJS");

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
    IMC::Memento msg;
    msg.setTimeStamp(0.6212430954620892);
    msg.setSource(59558U);
    msg.setSourceEntity(117U);
    msg.setDestination(6988U);
    msg.setDestinationEntity(34U);
    msg.plan_ref = 4215747183U;
    msg.id.assign("POLKDQPQLCVHLYLXBDZNARKHLACUNUOFMVQDHOBYGSOGEATMLIWCRQTMUARVXPMUOIZJFXJVZSOIDEWAWMCFRDAIYQCPTILIRPETZY");
    msg.memento.assign("EFRNHOCOEJBUYASWWDBMJYHAWTTXZLMZDOSDJQRIBTJGXCYRQQQKNYWESNGQAXDRVOGNKYMDUEDFWMXFFIATBPGNCODIIJHMSPJPKCMRCCOTPIOBYDRALQFIWYHEUHIQXEBNJZXSVRAHMBUCBAVCNXZVGWZDKKEYUXVMLVWIDLAVSICQCOLGPZVKGLFZYRMUXLOSTMFSLINEJVHZKBRTZZUJFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.5693178606662825);
    msg.setSource(32751U);
    msg.setSourceEntity(134U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(214U);
    msg.plan_ref = 2042588344U;
    msg.id.assign("OXMUOTRRQKPBTIDASFHSMCJMXXVMJCIVDYZXJXHSVAUJBJMYBPLBKLZXEIKMVWPEZQEORALHPNWYGQSUWGCYCQHFKPLLGMNAAOBDOFHPCKSCWRIGGTTTSEALWGFIVJVFNGKQFEUUDXZIEUBLJGNTTNQWDHVWOBRJCLINFZBBKMLOPCQAOXZSBKVUYPKXFS");
    msg.memento.assign("CECZRRHMLPQSOTQWYCJVQNDDKFWSRUTIUSRRMGQJLRHXQJCOBXQTEEKMLGUYEXDIKBONXHFTPZOAOVBGPJFKHVYZYGSXKIL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.714372749016289);
    msg.setSource(54667U);
    msg.setSourceEntity(253U);
    msg.setDestination(8527U);
    msg.setDestinationEntity(1U);
    msg.plan_ref = 2019714067U;
    msg.id.assign("BPMUZIQFZGPYGSKUEFTZRWAIWOJUPDCUYDQGTWUYRDXENLYXNVYLBMFVGJZTFTMAWBCGWCLUXQFJALMBKRPSFCZYALRIMKEBKXKVYEFVTHZCZEGTXAJLEFQFNBKHJUXJPLMHBIJSUMILAUDQBPVTVSAWQKZWOUBRWODDVDSGPWGGJZGSHYEFCOTRQKMMQCINPHOOOCYHXXINMDHNHVBSRHEJRSVSOLPNHOISADREDCNTYVQOIRQCTJXXINAEK");
    msg.memento.assign("TBSJDWWVUBLVKDPMWHRKLBZMZGOHGGDTGHICXLCTEFXJLATQPEIVZIAFKPMRDYYPGQZHZDNOLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8590949220964698);
    msg.setSource(32192U);
    msg.setSourceEntity(14U);
    msg.setDestination(2540U);
    msg.setDestinationEntity(165U);
    msg.op_mode = 42U;
    msg.error_count = 0U;
    msg.error_ents.assign("XKQVDXHZXWUEFTJGEPAWUHZQGOYWJSLKQRHFYAKEWASIOBQDFTGYXZXGOCZMZNVOABVKIXJNRHWIPCFTJSIFAKMNAMIRYDCHNNEIZZHHCBOFGZVVTLGJSWKYQVUOSOAPNUFGYQXCDTJJMMRQRPWHWUAYECNNXQMCLZIIIPLDVPKPQLZCUCJFCGBLBRSUVOTSSEWDSVLHNMBBUBDEYTMJOKULLOTF");
    msg.maneuver_type = 20409U;
    msg.maneuver_stime = 0.8985825787741964;
    msg.maneuver_eta = 61984U;
    msg.control_loops = 3028127888U;
    msg.flags = 55U;
    msg.last_error.assign("QBWCBPLFUIKZVENRUDDTSYFBZTYZMFBPOHXAMMWLLGOMICCMJQLTHDUMIANPGYJTFNFOCQIAJSWESYVHRINXZJPAWALQCIJWVUKLFLKGOPYVYNWCZSGVJILZZAIITEPHJEGVXVVADKXLBBAFVRRXHKFMTSBFUDKAXUOSQXZXUKLHEZNQWFNURCSRRHQRQGECSSUJEWONVBCMAGIRTBQXPTTCJDHODOPRPHZXGYNMKYWTUEGWEOJMQKYDY");
    msg.last_error_time = 0.44910242504280895;

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
    msg.setTimeStamp(0.08676198911663102);
    msg.setSource(28409U);
    msg.setSourceEntity(210U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(82U);
    msg.op_mode = 93U;
    msg.error_count = 210U;
    msg.error_ents.assign("EJWWPLMSLTGQNEVISHPSCHLVALWDTCKNXEGKBSAXJXSDGMRMLCNDRIX");
    msg.maneuver_type = 63999U;
    msg.maneuver_stime = 0.4004966903854751;
    msg.maneuver_eta = 8520U;
    msg.control_loops = 3179903764U;
    msg.flags = 206U;
    msg.last_error.assign("UWZPSTITIHFDTOAJWYNFDNAEFAWFWSLSCCGRVGNJMQCBJDVVGLRVBMEWLQJENAOQSLCASSPPITNHRCSRXDWWDOVEAHVUMIDEXGDAZMXPZNRRGWWLMYMYINTFSEXKKCLDUUDBZJVECWZXYYRMCQ");
    msg.last_error_time = 0.8259923543703427;

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
    msg.setTimeStamp(0.633193452424636);
    msg.setSource(54576U);
    msg.setSourceEntity(160U);
    msg.setDestination(44678U);
    msg.setDestinationEntity(118U);
    msg.op_mode = 11U;
    msg.error_count = 214U;
    msg.error_ents.assign("XLUMWELWCSFPYFKGFUAIKBRLAGFVVMGGNGEFSCTLIHNCEDWYPXYZUYNCPZSRPZJHLGLGZCNXWKNFEJOXYDFOVQWYPUHMSCHKUKYFNBUTDIWPJMDBNDZFZQOVRQPOQOETUJSIHCOMQSMZTEJRS");
    msg.maneuver_type = 59890U;
    msg.maneuver_stime = 0.29706551001593273;
    msg.maneuver_eta = 22969U;
    msg.control_loops = 3447852165U;
    msg.flags = 4U;
    msg.last_error.assign("QRMJPEXFPEJCUBKMLILECNYGOORIDFYJUBBNBOXMRAVBMLAIVSBTLALTQIWDGYHNHQVUGKRVKSAZIJLSWOJZARWXORGEHFWUVYUDOCOBZZNXQQEJAKCISSWTMFFGDKNKFFLUMOKWAFNQPCDVCXOPBHAJPDIZINVRHVGHEREWUFGTSSLPKWCRNWFTCHRZEJPTLQQPAYTHLKZXZBEWUMDQZCZIOPQTDMSDGYYIUPXHKH");
    msg.last_error_time = 0.022914858088082246;

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
    msg.setTimeStamp(0.8640632813273997);
    msg.setSource(3602U);
    msg.setSourceEntity(151U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(190U);
    msg.type = 222U;
    msg.request_id = 33132U;
    msg.command = 146U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.plan_ref = 1498303728U;
    tmp_msg_0.id.assign("ZYSBRXLJPFTFINPNPHKKJRURLJCOWJQCEEZDAOSLXDLKVQMNIXFYMNNAPMEMHBZEAGTNWRRVHBKHDYKSDPLBWRRCFGJXAUQAUVBOTGEOZGSKTOMIXWFRROQZTDLFAAGXLBZISHUMTGBIATLNVOBHUPEEWTPDQVONUYCOJGWIQXYLCOMSUCAIYDEVIHGYFHRNWIZKSYMSFYMEIJHNWGGVXSQQSKYDAC");
    tmp_msg_0.memento.assign("XXDWDKWHXEEYFRTRZXTLPKMPRGURTHSAXUPFYTGALUYJBOJPDNOUNYHNPGISEAQZKKSGSOVMDFQVFAKWZOIQLAHNUTPBYCJMQZTHSQRSZEQCPOXJBVGRLBVVEMNMLGYQNASELIRDFQUUAYJZYQPDAHADRIFBFXHWYMVEBSKUNABCC");
    tmp_msg_0.lat = 0.6605363666029244;
    tmp_msg_0.lon = 0.292097051601379;
    tmp_msg_0.z = 0.5429659039227781;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.speed = 0.06278722644069612;
    tmp_msg_0.speed_units = 151U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.16826896337954234;
    tmp_tmp_msg_0_0.lon = 0.478071227258396;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OWIHVWFTGYWQRQZLIWTVURPGTIHT");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("KODWBWSLIYRBTBIHQPNQMOKBEQURFIKNKCAYVWNIBKOMTR");

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
    msg.setTimeStamp(0.11833707377647462);
    msg.setSource(53303U);
    msg.setSourceEntity(16U);
    msg.setDestination(14459U);
    msg.setDestinationEntity(224U);
    msg.type = 187U;
    msg.request_id = 33628U;
    msg.command = 243U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.plan_ref = 2505899899U;
    tmp_msg_0.id.assign("HGUPYHBFUGKAUIOVCVAKWIVBLYSTROHJKDZWLUQDXJTFRERNNFJZQIHZSFRIBFGLMJPWPVWIBNPULBMXJMRTPGGXBCOKJHAXAMEUEBDZIXFYZVNETVASODVHCWTYRGEOYNGPMOODTTVPNUYFCRAJCOQWHEQGKDHISKZMKZEBZQJJUAQZDIBIHADCSDCXPFXKTZQCCIKTYQRLPLQUNNLEYNUYYWXXSAMSRFGWVMFSBOAMDNVELJX");
    tmp_msg_0.memento.assign("AMYJEISOVLEKKSIRNAEDCLUYXVDQTTLJVWJJBVUPAMMFSGAQLRTVRUKDCIQDHSXNNDUIKGOUWBGNLQLBEHBGZOMFPDCITIXESIBLYYGNTVSXKVJTOZAELUEKNFAWQWFQNZAJPOCITDOYDPDNXCPUEQWOONPZJLSYRZBVMNVVHBITYAJXFRKCFXWZHPTHBQFFJYTCOPARHSUMWSHMLGEZ");
    tmp_msg_0.timeout = 62875U;
    tmp_msg_0.lat = 0.8941458330613742;
    tmp_msg_0.lon = 0.4218238711327945;
    tmp_msg_0.z = 0.06394515958749192;
    tmp_msg_0.z_units = 97U;
    tmp_msg_0.speed = 0.3915565991356954;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.bearing = 0.9546629499949805;
    tmp_msg_0.cross_angle = 0.2969905299190424;
    tmp_msg_0.width = 0.10821830414188316;
    tmp_msg_0.length = 0.9344725843281411;
    tmp_msg_0.hstep = 0.08025153342414115;
    tmp_msg_0.coff = 194U;
    tmp_msg_0.alternation = 12U;
    tmp_msg_0.flags = 16U;
    tmp_msg_0.custom.assign("FILYPTYINRRJUFZDGXFSNNRFRSSBQTIJPSTJIZEYYHWLZKKCTMDIRITMJPHUEXUYJGLRCKEVFVEODBXWUVZIQVOBPXOSEUDBXWPGGHKSRQNNLBVFSLVNRCVAEAOPSEWJDZHFMBLKERLXHQGQGUPAXHMQXGMCEZMGMAZWNEWIDKHWUQOQMCWWTUTKOBYOYTUKCWSZXVBMJKJYJOGQRLFPNLFDIFLUYIHOVDHZOCDCPPX");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("PHTSDXNUFCNMHQZODABSQECVUMPARSDCTIUCERLSUMPZNFKYILHEFIUFAHQVWSBQKXIBHHNNOFOLPKMRSAVQBIFGEWQMNRTMPVWGVTIJKYUBWYLDLOXFGWVZMDZCLONRKLQAHSTJMZCMZYMWTPAVD");

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
    msg.setTimeStamp(0.16659182700915576);
    msg.setSource(44372U);
    msg.setSourceEntity(246U);
    msg.setDestination(18814U);
    msg.setDestinationEntity(7U);
    msg.type = 20U;
    msg.request_id = 16873U;
    msg.command = 52U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 3047246993U;
    tmp_msg_0.id.assign("DUNROXNYDUILQJFLKKHTUBJMGBJZHKUGHTDBFJOOPLIXWYCOZNQMIDREXTAZQLNAGREYHMYWJPWDFWRDHMGZUEVOACSMCKIBTTGHGHIFPXXVQNVCDLTCYWLYAGESMAKEVTKZKYJVURUBOCNHBBAQXVIEILBHQMMLLSEFUWNCKPEVXJWTSQPQUCAHIZAOLRAABCEYWOJ");
    tmp_msg_0.memento.assign("PQUXKKKHHHABDRORJSWLFFVUCBGSNT");
    tmp_msg_0.group_name.assign("CBLASHZGENWKCFPR");
    tmp_msg_0.formation_name.assign("TXTYJHPENYCIYVAMZEOFWRDPKTGZAHSVQ");
    tmp_msg_0.plan_id.assign("IFWUAZDTTCMTDNKMRFCRIHSHYXZAETHAXJYQYOYVNEWIWQRWPPKUCKAYNBQULURBFQGKTHPUQUMFZDHOBCZOVOQZCDUGVKVPDIBZPPNLERGFNEEVBJDLTGFZBSHWYDSOOEZCCNWLJTCLLXOJIIGXNEITELLFPJYWARUVCSBFIJAUZKYFWQRDRMTJNVUEPWMNJSH");
    tmp_msg_0.description.assign("QMDNBVHPLTRDCFCWRUAQUYJKXDGSCAOBZEKFVGICLWZQJHZRIRJHBLYFHENTUFBTYGNSYXMAYJQOOALYMVTLUAGSOZAUWCGMFSHTGZNGWDPHICBDDJYOMUMSDPLKWUPODJJMXKKDQCPILSPFRHWIWQGEENZBKBOEYWXPVV");
    tmp_msg_0.leader_speed = 0.07043376920524891;
    tmp_msg_0.leader_bank_lim = 0.3712974411866393;
    tmp_msg_0.pos_sim_err_lim = 0.6525928977877127;
    tmp_msg_0.pos_sim_err_wrn = 0.523299826118779;
    tmp_msg_0.pos_sim_err_timeout = 20200U;
    tmp_msg_0.converg_max = 0.996026107527123;
    tmp_msg_0.converg_timeout = 8496U;
    tmp_msg_0.comms_timeout = 27159U;
    tmp_msg_0.turb_lim = 0.09672035870999263;
    tmp_msg_0.custom.assign("XGAHOYTRLVNPTNBKLDHDPMUFCQMGMEURQZQQBYCIFYNMRXUUXKJIHOCDPOQOCJGRMBVYWJHWAMZTHEUUZKXNDSXVXOOSAOGKBRUDKTFLJTXHDNAMCAPZFGZLLEVCRWOJBYSAKQYVZQHBZTPFLNRSIHEFTCICIZUGQESKVCXVDPIIGSESTJVLSMDPEDEEWDWEWARZFYGBWBXFAGB");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("BNWANGBZSPNRJTAKGSKSIVGEEDQEXGYLYCDJYOBNDUKLSKPMBFQPDDJGGQICAWJFYWVHNLCRNHQRMFOMHTFLNVBZXMISVBRQXEJQIXIOJCUTKMRTXMZVJAIWCRRTYNZOXBWZFLHGFGIYOMHZUTFRUDNMZCLQKCDXADTWJTMHPHPSYUSGSHUZXYOCPWXHUZJYVHOBVPCVAYTAKOARZECEQUKDFWAPISJMAEPVGELIWTDXPEEFF");

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
    msg.setTimeStamp(0.7963190934177655);
    msg.setSource(40818U);
    msg.setSourceEntity(103U);
    msg.setDestination(42152U);
    msg.setDestinationEntity(72U);
    msg.command = 225U;
    msg.entities.assign("PJYIPXFUTJEKUWZYMDCTGLSABBZRWCKDMRHRAKTEYEULQOLUICVPLFXEKORJGHJWVJKLHFAHXFLBTFABJRHHVZEJNXLSOHKKOPGPNFVSGKCPQMHLWUSERBEJBDQNSSQAZYINAAZSOBDUYPDIFZNCCSDTVCYCMHWCVODKBVFJIUOOW");

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
    msg.setTimeStamp(0.8038735150953467);
    msg.setSource(55697U);
    msg.setSourceEntity(120U);
    msg.setDestination(330U);
    msg.setDestinationEntity(33U);
    msg.command = 97U;
    msg.entities.assign("GXURUTIENGNYJNVABYXWZZBPQFOKCARVYESSKAIATCVZLZOSWUVKAPTNHNGHNDFEILXKQNFHEUEUBXXIGVHMOLNRAGZIAJYSVJOZBEIWJCQOLBQZOPKKUBGRMXUTMOYPVDPCQZVTRBSKNMCWHWHOQTJLPLKDQFXUFVOPGODPMPWJACIFDUPWSATLYHEBRJYXZFRYYQSK");

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
    msg.setTimeStamp(0.4344027351105231);
    msg.setSource(756U);
    msg.setSourceEntity(81U);
    msg.setDestination(24824U);
    msg.setDestinationEntity(192U);
    msg.command = 2U;
    msg.entities.assign("YUWVXMIOCKHNPPUAGMNYOUTJCMZMVWBKUFSEIQNODXZWLZLTALPYTHYUOVJYRSYMMZCLVDMTLSYLFSHEFGNXDERGKIDKIBQSJBEMXJGYZPAUKJBRNRBUDLTIAMIQQCNYSGQJUAXTCZHVZNMNIEVDRHHWDNCPPOESUAXRPPDRTZGWEFTBWZSLRVAAEHHTOF");

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
    msg.setTimeStamp(0.628267318748791);
    msg.setSource(14030U);
    msg.setSourceEntity(154U);
    msg.setDestination(15790U);
    msg.setDestinationEntity(83U);
    msg.mcount = 85U;
    msg.mnames.assign("DENZBCHJOCTTLAGRYERMTLQGFTUHBGUBLQRSALVCHJLGJAHIMNQNTLZYSXANKFQBDJSHSZGPCJRMXZGZDSVQZYDFJEOXZHTLWEFNMRYFOJOGXVAKWDXTXCMMYFFEIMBIIMBVBGOVHZSQUWOVURYKUWYPXPNIPNIDNKCNPCDSQDGWKDBTBVZJKJAFIWUUHACRXWHKQOATBCOASE");
    msg.ecount = 45U;
    msg.enames.assign("YYNAPTMOJNBRNMDGFNMHKHBSTJIHFTYIRVLOMXLJUSLKWEKHPBOEAZE");
    msg.ccount = 176U;
    msg.cnames.assign("XZXQODJSCBAVWEBRRUNQPKVCQVGXTWXFLKOIRSZFWVDSYEZHJCOKGGBJAXTGRJILLAANVJYQWY");
    msg.last_error.assign("VCSVYALLDIJDZMDZXWPZYXEYDMRSSITJOHUWKSUBSKFCFGPBVFLNRAKHMXQYRMCHBKWXGGFJMQGBZFEOWJOVMAKYLNFPMABZWUCEYOLRTDSEBSJCLFGYUIJNWISQDPBTVGLADHTAETWAYQJVOJWVRURQAFKYTHTXLUPHWINI");
    msg.last_error_time = 0.6493303930148346;

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
    msg.setTimeStamp(0.8799729807943981);
    msg.setSource(23000U);
    msg.setSourceEntity(225U);
    msg.setDestination(11063U);
    msg.setDestinationEntity(40U);
    msg.mcount = 221U;
    msg.mnames.assign("OTUPXLVAAKECHAQUIXCCZZQT");
    msg.ecount = 55U;
    msg.enames.assign("HKVTRIPKXFAROPAZJKJIBCKWDEWBLTMGFPCVYZQKLCSYQXAGDPRSMBFUEKPUOEILRBYDQMISLOYD");
    msg.ccount = 13U;
    msg.cnames.assign("HDPGKAMWKYNVCWLUNZPTOWLYIDWVDCBXLMBNDTRVSPA");
    msg.last_error.assign("PFCJLFFHJSAVNQCUANYEOQQSFFBZKEHVDKO");
    msg.last_error_time = 0.36897392822272335;

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
    msg.setTimeStamp(0.8695057008994684);
    msg.setSource(11773U);
    msg.setSourceEntity(80U);
    msg.setDestination(18322U);
    msg.setDestinationEntity(78U);
    msg.mcount = 149U;
    msg.mnames.assign("NODKQUGCMLSWQUPKDQRDNEBPLHHYPTZEDUNABPWUIKCGNMWCIGXAHRLHTXQTOYABDUGPZYXZKPPNQJDIVFZHAAQVFHIOEATEOFWAZTXYZNXFGIOYCPBNNLISJGGZHXMUEJUDSXQJLOWECCVMYKVRKOVOHBRSGUF");
    msg.ecount = 140U;
    msg.enames.assign("QRDJXBUBIDGHUUOTURSCHTHOSVWSVLTDOJQEXWXJMTABFOIQCKMZKEGCNYFCYDYLZOLJRCNCWAEPAVKERQNBGNFYYDCMWMPMWEFORPGANIAHGHJGMPIEVIWUKZIPFSGRAFXDNDDFTJTXIELVVUJHQKZBDPBZBVJRZSAQUWONMFKADVIBQSZXWYFTMHFJQEPGVHOEGQLX");
    msg.ccount = 223U;
    msg.cnames.assign("DFMNSPHXILEMUWUGVJNRCEUKEFIJQOMZCBPJQYHOILGWQEHTTJSHOCJVXOVAKDPKYBYDCZWHBHCOFCLHJBHGOTSRTWVDPATZCVAIUTVCFXHEQLRR");
    msg.last_error.assign("PYRXOTYRDVIJVBPMFRTODDPRLCAFLTTKTPCHUZLAWFYMHEFYRHBTVUXDVSWJZKCJMJNBUTGRRJNLJWXFKVBSXMTPUZDRBYPICFK");
    msg.last_error_time = 0.6667308125669849;

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
    msg.setTimeStamp(0.5416465557952393);
    msg.setSource(56364U);
    msg.setSourceEntity(236U);
    msg.setDestination(49792U);
    msg.setDestinationEntity(206U);
    msg.mask = 240U;
    msg.max_depth = 0.6579936413718522;
    msg.min_altitude = 0.9519539261053802;
    msg.max_altitude = 0.19566496869976924;
    msg.min_speed = 0.3034874575708213;
    msg.max_speed = 0.24107976896807193;
    msg.max_vrate = 0.009604077765496655;
    msg.lat = 0.9542867926159513;
    msg.lon = 0.9112408031633634;
    msg.orientation = 0.4346863215739305;
    msg.width = 0.546440403464536;
    msg.length = 0.46168865997332753;

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
    msg.setTimeStamp(0.3321763338425916);
    msg.setSource(24508U);
    msg.setSourceEntity(248U);
    msg.setDestination(60467U);
    msg.setDestinationEntity(229U);
    msg.mask = 181U;
    msg.max_depth = 0.22937898407181856;
    msg.min_altitude = 0.9425046258885458;
    msg.max_altitude = 0.911590868864905;
    msg.min_speed = 0.7156913815918863;
    msg.max_speed = 0.6179516206129555;
    msg.max_vrate = 0.5701200405130964;
    msg.lat = 0.28962816888852017;
    msg.lon = 0.23864479342308953;
    msg.orientation = 0.16426348044604644;
    msg.width = 0.8645159348534198;
    msg.length = 0.6459043987122686;

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
    msg.setTimeStamp(0.8767556124404676);
    msg.setSource(14794U);
    msg.setSourceEntity(196U);
    msg.setDestination(1486U);
    msg.setDestinationEntity(20U);
    msg.mask = 14U;
    msg.max_depth = 0.15169912537986985;
    msg.min_altitude = 0.40776119796972565;
    msg.max_altitude = 0.03464902926744484;
    msg.min_speed = 0.6097678014976673;
    msg.max_speed = 0.42078993392427466;
    msg.max_vrate = 0.6172536516745388;
    msg.lat = 0.24596770246800748;
    msg.lon = 0.020695038644575114;
    msg.orientation = 0.354237505274428;
    msg.width = 0.6054195304658251;
    msg.length = 0.6902979330912784;

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
    msg.setTimeStamp(0.19295402136357254);
    msg.setSource(65220U);
    msg.setSourceEntity(121U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.9454023076009915);
    msg.setSource(43452U);
    msg.setSourceEntity(159U);
    msg.setDestination(32417U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.9413279790007418);
    msg.setSource(52945U);
    msg.setSourceEntity(227U);
    msg.setDestination(41242U);
    msg.setDestinationEntity(19U);

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
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.2990697269218445);
    msg.setSource(45957U);
    msg.setSourceEntity(96U);
    msg.setDestination(34186U);
    msg.setDestinationEntity(79U);
    msg.enable = 219U;
    msg.mask = 602184649U;
    msg.scope_ref = 1734118976U;

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
    msg.setTimeStamp(0.094724276750482);
    msg.setSource(42036U);
    msg.setSourceEntity(56U);
    msg.setDestination(49730U);
    msg.setDestinationEntity(10U);
    msg.enable = 111U;
    msg.mask = 752548284U;
    msg.scope_ref = 1628079947U;

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
    msg.setTimeStamp(0.2735067439417288);
    msg.setSource(43570U);
    msg.setSourceEntity(61U);
    msg.setDestination(20741U);
    msg.setDestinationEntity(174U);
    msg.enable = 153U;
    msg.mask = 3919132472U;
    msg.scope_ref = 1139535351U;

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
    msg.setTimeStamp(0.3526779263551616);
    msg.setSource(55880U);
    msg.setSourceEntity(120U);
    msg.setDestination(21308U);
    msg.setDestinationEntity(165U);
    msg.medium = 30U;

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
    msg.setTimeStamp(0.14689758841808354);
    msg.setSource(47673U);
    msg.setSourceEntity(119U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(90U);
    msg.medium = 175U;

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
    msg.setTimeStamp(0.04456277291266475);
    msg.setSource(4210U);
    msg.setSourceEntity(69U);
    msg.setDestination(27422U);
    msg.setDestinationEntity(50U);
    msg.medium = 147U;

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
    msg.setTimeStamp(0.010253994082431328);
    msg.setSource(48338U);
    msg.setSourceEntity(225U);
    msg.setDestination(11437U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9908950876764907;
    msg.type = 177U;

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
    msg.setTimeStamp(0.283730641249316);
    msg.setSource(54252U);
    msg.setSourceEntity(231U);
    msg.setDestination(24932U);
    msg.setDestinationEntity(156U);
    msg.value = 0.2464071110294328;
    msg.type = 188U;

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
    msg.setTimeStamp(0.4510429770951746);
    msg.setSource(17432U);
    msg.setSourceEntity(158U);
    msg.setDestination(24569U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9889312240127097;
    msg.type = 119U;

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
    msg.setTimeStamp(0.912402143089861);
    msg.setSource(54311U);
    msg.setSourceEntity(204U);
    msg.setDestination(41336U);
    msg.setDestinationEntity(134U);
    msg.possimerr = 0.1361885712141333;
    msg.converg = 0.4548239901406498;
    msg.turbulence = 0.0916248707413948;
    msg.possimmon = 231U;
    msg.commmon = 171U;
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
    msg.setTimeStamp(0.7336505394884918);
    msg.setSource(36360U);
    msg.setSourceEntity(225U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(1U);
    msg.possimerr = 0.5068933389550582;
    msg.converg = 0.4916633405591334;
    msg.turbulence = 0.6919555061812004;
    msg.possimmon = 45U;
    msg.commmon = 67U;
    msg.convergmon = 251U;

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
    msg.setTimeStamp(0.8313766219287206);
    msg.setSource(38377U);
    msg.setSourceEntity(146U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.11684521134649817;
    msg.converg = 0.7212662087075358;
    msg.turbulence = 0.9109944619953854;
    msg.possimmon = 157U;
    msg.commmon = 17U;
    msg.convergmon = 95U;

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
    msg.setTimeStamp(0.18546035549384032);
    msg.setSource(53347U);
    msg.setSourceEntity(7U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(158U);
    msg.autonomy = 46U;
    msg.mode.assign("LTUDRLFZZVLGYCOULVCBRNUJLHAKAJLRBQSOVPXWWXABTPXRYFHEVDBLLKRBQXMFQXJDTREYZGDAJGLKWNGTQBH");

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
    msg.setTimeStamp(0.5319990596374691);
    msg.setSource(34926U);
    msg.setSourceEntity(38U);
    msg.setDestination(25612U);
    msg.setDestinationEntity(2U);
    msg.autonomy = 252U;
    msg.mode.assign("JSDNMSXZFAPOFYSCOKDYVNJHZHQENTFBZALUWVTUOGFYNFEPD");

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
    msg.setTimeStamp(0.6056150377029599);
    msg.setSource(60586U);
    msg.setSourceEntity(75U);
    msg.setDestination(4142U);
    msg.setDestinationEntity(175U);
    msg.autonomy = 92U;
    msg.mode.assign("TEECUTKWSCBLZKYHLBJDHACXMOTIRSSFXAGNQBFKVMNDNQRPCTVLOKGZUWXMMUMQPHHARANZVEXBLOETJQQGPKEJNDDIIYJVZYYSTXAGIEDIAZYUBVNIQMYRXCEHVPRXWFNAGKYSJELAGQKNYXYBGZPCUSTQKCSRQRPGOZIPOMJOLPCOPURMNGTKWNVDFJWOZXBXFLUWJEFRDLKBHUWAMGFJETDIBRPICFWJOLYUZHSHWUHDZODFWB");

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
    msg.setTimeStamp(0.535393425433639);
    msg.setSource(59043U);
    msg.setSourceEntity(209U);
    msg.setDestination(37872U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.46992596672711995);
    msg.setSource(35889U);
    msg.setSourceEntity(48U);
    msg.setDestination(51268U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.4686185034018735);
    msg.setSource(50335U);
    msg.setSourceEntity(223U);
    msg.setDestination(9583U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.031407908381422045);
    msg.setSource(58799U);
    msg.setSourceEntity(149U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("SGQDLGFWERWNRRTEITFLCVSZGXZHWDIZZXHNCDPBAEDACIYOZKIQACGDJTXNHSYTPJDQOMLUPBMMVPPENQXJQMNY");
    msg.description.assign("CRBHGGCEUTHXKWFTUXODBKRJKAAPUKMXDQJEMSKZTZICRLRSGNIPOZAORWBGDPYFANQSCPDYVDZOXNBJUEMRVMIBOKQMCCTFICFXQBFWLRMOLJFQFRKFAZGLWSEQVNZYVBWXSXWDYSUKTVEDWNMVAJJZBLOGEUXOIIIDPTQVLUXVBHYPRAIOHCIPGQPSKWHEJLLDJWYQTVHYZPANSGEUYRBUE");
    msg.vnamespace.assign("SEPZCLPJCTOWJIVJNCDYVOYKQOZILYKEJPTKLZOPKLWGDDBIMHNWAWHTQTMNGKXQTIXBHLIBEFFIPZAWYKUEITAJADNYRIHVGRRA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YBGQGIEDZJPWOUKFKYHRUDKGUEIIUQPNXOIHNDJVDWVYCNPVVCDNHZOIGDICBAFCGNOMVJXYIERCRJWKFLMGELRGZSOLFQZPMRAQWTNKKGKRMQCUBRHINSVSHXPGYLOUACILPJOJNQQXEXVGTUKKUOBPPSMFSAWASJLDMJCYZCBITXDXSTEBMWFZS");
    tmp_msg_0.value.assign("RIVBDVYMKZVZEBJKRLDWBBYSOGHARDABNZAPOVVDCSOQECQQHSCJLSTCOJSVXUUMZFQNCLTXFCRWTLENEMCZYMUUXQQGFIUFDYYSTRBKFNATVKVKLRPETIJAMPKOXXBFEGZYOSHHKHEXVRPLGRFLEHRXPHXDLWHTOYOLXTIQGGOLWVWZJUKZJNTFUPMNJKIHNDQP");
    tmp_msg_0.type = 129U;
    tmp_msg_0.access = 119U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YPIMYLEOTGZRGZPAQVFGEXEOVZTQZNVW");

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
    msg.setTimeStamp(0.9350700148709119);
    msg.setSource(8965U);
    msg.setSourceEntity(64U);
    msg.setDestination(7695U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("CQBYGNEUFLWYQSYKMGJAEZGQFAFPVONSUZKHGVSJFBLRLSNCSJ");
    msg.description.assign("NJKKBCIIYQKRNNOOBQAMPMYKCVDMDUIDKAJWCWABLHWZLYCJQARFRKPBGVENSFXWZDFOAJETFMSZOIHMTXZLDGZSGJPCPJWDASAYROXXMXQXDLMNDVGWIVGSE");
    msg.vnamespace.assign("NFAKJFMTMAOLIHTFXDCAEXQZCQHD");
    msg.start_man_id.assign("WZOAAPTHUBKQICVJICHQZQGRCEDVOWLDLNODKYKXTBMCUXPKSUFPYUZKALTFAAOJNFVWVRCNJNJWMCDXIVPGI");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("XNFZXFVJJOAMTMXBFMAINQBUIVHQRGWWRSWXVXZAJNONLDPLDBPOGHKWYCXGLTREVBUMRZMVZEIHBAFIWJKJFEMGGXTBNLXLEDQNCUDVZJHUPFMOPBEYUINTOYERCRASRICACCKEAYJLSKPOIPTKLRUWLSLEKGYAMOCYAG");
    tmp_msg_0.dest_man.assign("AJBNCUBFQXEYGRJKI");
    tmp_msg_0.conditions.assign("BOYWWCPHHMSWPHEYLQRFEWQBLJXTCPCLBHUBNRXWRRTZKNDAGAFXHZIAIUFTJGZQHLCZQLXVYBJDSXUTQXJZNKOHFFUGTZEOIJG");
    IMC::EntityActivationState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 82U;
    tmp_tmp_msg_0_0.error.assign("JNDQPNTWODRHSOGSNYVGJDIIVMQNHNXGEJSEMAVIUULBFODCQQHSL");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::SoundSpeed tmp_msg_1;
    tmp_msg_1.value = 0.07362259535800786;
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
    msg.setTimeStamp(0.8539904492229624);
    msg.setSource(15027U);
    msg.setSourceEntity(86U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("TQVBFFUENITYJEIULLQNCBBOVGJDRUJJSPSPQYDCVAMSMZIJCFRXOXYOLWOIAAWNVPWFZAGNHUGMCLHGGYTMPWXTMTQGKHRWVPESHYUOINHCSABKDVUZUODDZIWDONNACKQMJPDLBOIDNKZXYVB");
    msg.description.assign("VYTMQHVFXRJEMKHLHEYDKQZCCNOKLCTBYWUAEIVJFBFNJBXANRZKTJCFMENAWOOCVQWDLMWXPSLOOUUGGEONGIQPMDODMJRGVUZORHJDSNOKCTUFXPIBDFGOPLJGJUCEUXBSKQLMLTPFXSYAPXZSZTLVTDTWMAWVZKHAWDNSWIIVICSAHCSKDRAYWSQFLUTBBBY");
    msg.vnamespace.assign("UDUFDJMXUFAVZIIRXHXQSUOBZDTRSZFMOAMNBHDG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DEQHXIESXZKYZPLZJFHBQFXSUAIRKBJTASPQOULRNPLGXEYIKDKZRAZSKSBXYHVGGUA");
    tmp_msg_0.value.assign("DJJKLWIXJOZLIKINWMOMATSRSESKBUGQRXLGZPUTPNCYNTHIMESQLTCIONBVFPPGPYEPFMBNSETXNPOXUCWJYIXJHNATWFADUBZHRJYVTHGITVGUCBUJZL");
    tmp_msg_0.type = 88U;
    tmp_msg_0.access = 205U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DUEMCQFICPURSCDBWISXFFOVZPAJYJYFAZJMNHSKRKSVWLDHINHQOIQQXZFNQVSAJKBWNXOOCHILLXHCCBMERMLPAXZWDOJVCQPNMJFWTPIKOMPGGIACLPMTTFEIZKRPYBLZRALBDLAEFYPDWVLSNEKVKNTSYBWAVVFCKJVGHZVYMZTGSXQEZUJBJSOYHJTPRUYTBSYXDUTODIUWNTZQABGBYCGHRGOGKGDHEIKGUMENUWEXFAX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MUNIFJRZDZSSASVSMOYMCKQQWHMVYYWLBTYNAJIUNAMPEYBAUBTDWSBFUFKCXVSCSRCDFXOTKSLGPOONNPHVTQGDBYZPIOGKPQAJIQAXTLENTCHZXDWCOEFRCWSJTXETIVUHMLKAHMBVRNWOADGZQGIBHEGVUQJYPLIAKETEGYVGVLWZFZRFFOCJJBWLBCORCSDFTRMEMNUHKLXBUGPXPLXGIAPYKQKWNEJHPXJDHHUQVKZQDWNELRJOUYDXIR");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 2240766678U;
    tmp_tmp_msg_1_0.id.assign("INHIFMWPLWZIVPMVCQLZCYXAVJKITRCPXIJALDHOAXGMNTTYSIOISWDMSDOAXUHQOOSRVEFLHADVNFRKYNGMFLJULCWGURHMPWQKTLFDBDWKKBHKALWCOAGVPAYPEPSHUVCBEGJEVONVKFXIZMYBBDJJFBZRSMBPQSERAAZINOPTCTZEQVYGLXUXYMU");
    tmp_tmp_msg_1_0.memento.assign("WUVLZLUMXVEXDZEABOGQFIMJTKXHTLJNFRMYWHLUPHULCYSSOVKYZYZTTSQXZEHNQBIHSWBXSLBZPGUUJOKCOBZNIAPEAPECRKJYARGPOWXMMZFVSBMNJPTIFQVONNHVDVNDMLHAQDJNGBMEKAOODFHB");
    tmp_tmp_msg_1_0.control_src = 29825U;
    tmp_tmp_msg_1_0.control_ent = 19U;
    tmp_tmp_msg_1_0.timeout = 0.6250375346407768;
    tmp_tmp_msg_1_0.loiter_radius = 0.8908837232949457;
    tmp_tmp_msg_1_0.altitude_interval = 0.652827538917923;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::QueryEntityState tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.45080292847427794);
    msg.setSource(15980U);
    msg.setSourceEntity(188U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("XUPTEFIRELMSMGWOMXSNSWMSVKJZDRJVFGEADTYCOIMLZSCLUUGLVQJAJWBTCRSHYNWHVMMDHYBTEDSAPLQLNBJPOQNNWUGNZXJKDPQVGOILBTEOWDPZFRIMHPFCWBKASFRBYMCTPEUHVYVLUBIPIXKQVNRFWTEJORHKOKAUZGJXEVXXDTFIPTJBXGOZMGDDAAFKUTWOZCBY");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 1601381925U;
    tmp_msg_0.id.assign("HSGWPIFFECLDQFQELDRKRJBBQJU");
    tmp_msg_0.memento.assign("PKOKUSNJIDUQVLTRYHKAAARPOI");
    tmp_msg_0.timeout = 55133U;
    tmp_msg_0.flags = 32U;
    tmp_msg_0.lat = 0.1335311549746543;
    tmp_msg_0.lon = 0.2887385141711226;
    tmp_msg_0.start_z = 0.7094076691750213;
    tmp_msg_0.start_z_units = 59U;
    tmp_msg_0.end_z = 0.31755490312938495;
    tmp_msg_0.end_z_units = 88U;
    tmp_msg_0.radius = 0.5326545298043079;
    tmp_msg_0.speed = 0.7763873353879048;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.custom.assign("GUDFVMVILSYDORUMLMPOVAVVNDEWQXPYANXRIOJGNTQEWECTORDVYNOEIFMFBJUATZZMAQAIDZWUINFCBXRUJGZTHS");
    msg.data.set(tmp_msg_0);
    IMC::DesiredRoll tmp_msg_1;
    tmp_msg_1.value = 0.08900918905918309;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblConfig tmp_msg_2;
    tmp_msg_2.op = 236U;
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
    msg.setTimeStamp(0.676374178923359);
    msg.setSource(14560U);
    msg.setSourceEntity(131U);
    msg.setDestination(45089U);
    msg.setDestinationEntity(78U);
    msg.maneuver_id.assign("MNUSFHWAWOIEFTPMPZJDUTGRIJXXKDCQOZZEMYJFMSQZPPUNSBCYXVAADAF");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.plan_ref = 1779928005U;
    tmp_msg_0.id.assign("FHEKKEVWPEZORVZRYPQKTNPUZXTFRNGFURDKRUUQVLAGOTNHFYPCMTCPDDITLCNJXTIMVEAYBKEWNNEXBJJTGWBQHZXRBKWYBZF");
    tmp_msg_0.memento.assign("NLNASIPVMRVJCNBKOLELDZJNSJBCBXZGGMXUTQIXHWKULQBWZORZAVPIBLUYVTFNWOYOKZILFIIHOTGHASQ");
    tmp_msg_0.timeout = 56240U;
    tmp_msg_0.lat = 0.8950865319925028;
    tmp_msg_0.lon = 0.8469792736371896;
    tmp_msg_0.z = 0.7674866265969206;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.amplitude = 0.8324719153215318;
    tmp_msg_0.pitch = 0.2687590937039961;
    tmp_msg_0.speed = 0.02501614413312625;
    tmp_msg_0.speed_units = 246U;
    tmp_msg_0.custom.assign("MZLSXYBYWZZCWCBUZURMIXSNBKQAMKZONVFLQRCZFGEMRBGXHAEUJTKIKVJGGQGDERYCXTPXNHSXBHAKSAHFWHQUIPAVHEZQDRVVMNY");
    msg.data.set(tmp_msg_0);
    IMC::StationKeeping tmp_msg_1;
    tmp_msg_1.plan_ref = 722642721U;
    tmp_msg_1.id.assign("YYURVHUCQVDUZEWENEVPOTMOGLUGDRQFGDYWSZXQWAMOMZWFWTAENRFJJEAYYJFOXAPEFCYXRHPXRHXJLAYMBAVZGZTIGWJLIQNJQBHCXFOZDUKBICTMFBVSTQPHLQSJGKNJZISDNSTSCRVIGYDLOUBIRJKXKFYQNZOVZHLIMDPEWCVNRDNCKXABVKNFWVIPWDOTHKSBCLHJBMCXFYBSELAPIBGMDQUOLGKGOZTKCTUIQAWMMRPLAXR");
    tmp_msg_1.memento.assign("JLWPQENVSRSVUYBZDOMLKUKIXTVNYHGOZKBFCWSKVJTAAQDNTFMMZMDJLEMXPZASOCQJXMGEWZGDJCWPYRQPUCUOEAFQNZVGNQHSDNIHXFHYKNJKTOAUTDBBPBPVU");
    tmp_msg_1.lat = 0.05663136946722502;
    tmp_msg_1.lon = 0.018068310406836985;
    tmp_msg_1.z = 0.1352669708030857;
    tmp_msg_1.z_units = 27U;
    tmp_msg_1.radius = 0.35567167236074904;
    tmp_msg_1.duration = 2914U;
    tmp_msg_1.speed = 0.08909444888251472;
    tmp_msg_1.speed_units = 175U;
    tmp_msg_1.custom.assign("FZJKJPULJDBUDFQNQJEXOWAXIODMBLBICPJCVYONTCMQWMYPJOVLQNPJZXXBOFUAHLIRPANHJWTUXUIIEFYVHMXGTVTQGVSDCSNHOSGRBTOMKDOCZXAAIVIARHLASNEW");
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
    msg.setTimeStamp(0.8866268552625877);
    msg.setSource(34158U);
    msg.setSourceEntity(109U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(34U);
    msg.maneuver_id.assign("FUSIHOXPQKMBUHHBMGIXIUAXM");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 221664283U;
    tmp_msg_0.id.assign("PRPZPAMZUSFYPAXSCRWZNYZCOENJWBKAUYURTVKAGHXZEVVIHBWMLMQRXGCXAPGXNFHOTJDFZJNIWVZONLYDXYOMQSEICQRMBAYUCSJITKBVTUENCBKMGRYBZHUEJFMYXTDITFLKIVBDWODUHLMGFILSINNTEJTRYOQGXGDBCVWHRFRMEKWVRECSWXTALMNNVJPHDUTESCOVOQDAQPKFSHAKKAPHWFIQEUOQIXSDLHWO");
    tmp_msg_0.memento.assign("WAPZFDYXZHYBVUCQXUENFILETMRUUMLPJVTGMCSOZQNAWBOYWAHJDXERDBNGSHFYWMNBLUBGIKDPRLFIGHPQAMJQCVXGCVAJBWKFKXMSKQQLTSOWXPORKZTNVAKLRSBMJDEGLCGAOQRULVNDXVKOICZZNMGCEZEAOIDSZSZJPEYIHTAMNSXUWBZCTQXUQHYIQKHWGIOYYIPUBDWEOCEJSY");
    tmp_msg_0.timeout = 31912U;
    tmp_msg_0.lat = 0.5509166590802572;
    tmp_msg_0.lon = 0.05313427252988012;
    tmp_msg_0.z = 0.5621143120693189;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.duration = 20719U;
    tmp_msg_0.speed = 0.8541249218985515;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.type = 10U;
    tmp_msg_0.radius = 0.0463125829753086;
    tmp_msg_0.length = 0.7985513424291399;
    tmp_msg_0.bearing = 0.39223575839401326;
    tmp_msg_0.direction = 252U;
    tmp_msg_0.custom.assign("SDCEMHBGJNGCLDKYZQQHNKQBGIB");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("OUEZLGRCLPTUCCTLMCUKYAGZZVWECMNQOFBVMKGSQJISINGFYRYBALJGDPUAQMKNRPMEXRCSRKGJPIEZZLBZSEVRMIWCQJXUYMWSNSJYUTOUKBBAJPHHGDVFUDFBRHEWNVYWKZHYSBNLTETTVDDCOHKPXWXDNQPBIXQALYVFHXNXGPRRAJAUIXGMJWOKXHQIWHGFFLUAQAVVORNAMYTFDSTNQEFZEVDSTDPIXCOOKHWEJYCTWZMODIL");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("NSYRQNHEDZPQLVODFCEXJUWGCSWCHUPBLXEGBRADHNNGFKXXVPGATSGYLZKNTOYLUVQHAPNJSTURMJDTQQZECCJJLSSQNRWZOKKOIJOPYMXTBUOJPNRVVBGVGHCSMDRHPKVMFTYJTWHLSHWISXI");
    tmp_tmp_msg_1_0.predicate.assign("QLTBEOGZKMGBTDSRHUUFCISLXUCTCHJDRVFHYUFBCMUYQRODLGJCFDIINIRSGXKWZBVPPJBNOQENRYTQRPXMOXEZBZSUTOHPBEIIJZPPICQVMALLNCVVTJKAOQMKRNHVUZWDKQMMAAOO");
    tmp_msg_1.tokens.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryPowerChannelState tmp_msg_2;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3580263828238005);
    msg.setSource(8609U);
    msg.setSourceEntity(224U);
    msg.setDestination(48575U);
    msg.setDestinationEntity(179U);
    msg.source_man.assign("HJDSWOLQFHPDDGGTRWCEUQYBZBUCPTROKKUXCERYTQNWBXAKXZPWIMVPJZPEKTQRMOBDUUHWNASNIVVLXLFYCVLUVRIPUWSAXYIQJGODWXVZUCWLGSLRXXMZPFIMOYJSTJBZTQRNDIGDDLNBFUOJHAREBTZGAMIJVMFHHFHSEKJQMFMYJTOZCHRPYPSALTKGWRQFD");
    msg.dest_man.assign("MKNIKLDCHHGFOMSIOBWWMAYHXQJDSNUAQZTQHGNGGLPHZOHNSGAYQJJHBFOUOKSSZRSVWMRDEVDKBLFFJNEZCJMTXKYDUQXOAPPBNIFQDFMXTVMLITWZQZKKPWACEATCIPRXLELOERRVIFTNRALWQRVALCCVQARU");
    msg.conditions.assign("SYFIWNCNLMFMIKRKZYXYGGSNTDGPYMECHONBIVIUJDUORUPTFSBSHSNIYTGGWNOUXPGWSPVERTZHYLQXTVIZZZZVCDHXQRKVLVVBJADILOHEYQQJBONQWMRTKNADPOWBFUJXF");

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
    msg.setTimeStamp(0.2509622345503949);
    msg.setSource(63231U);
    msg.setSourceEntity(88U);
    msg.setDestination(3192U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("EFCPBNDQBBFNHEBMIMKVYESBPXZQWESCLLGUAIUZAIPKXOCGWOTLLUPVGBJGLRUXSHJJSZGVGVGUVQSPKWUAQVKCFVBEZMQR");
    msg.dest_man.assign("IWLDGHJABSYJXIYWDPPZHUXRKULMLZBXTGBF");
    msg.conditions.assign("HWEADIJZSZVJECLNYZSKAURLGUGISUOFCRNARNUVJBUHZXUGSQBPKXZYCFOXDVHNXS");

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
    msg.setTimeStamp(0.1679106672728159);
    msg.setSource(27313U);
    msg.setSourceEntity(11U);
    msg.setDestination(23583U);
    msg.setDestinationEntity(94U);
    msg.source_man.assign("IJLUYTESMQPTUAUKSMORKPNOURXJADJRAIWEZOATHWTHMVJBSCBXDRAGQOVPXYWGRBXYMCBPKIYNYOBQXJEFJHFHNZVUBZOPALLLNNZCGMPGWHOHSENQFPLRZDTDFMAUBGGUPITWSYARFZKGXLJIISSQTKYLIBWLFLFXZXUFMMSUJGSFNHKWZVXVTJAMIYCCDKOOEZMQPKHGCERTQNFNWIEBVYVDVQJGEIHLVR");
    msg.dest_man.assign("PYAXSSGMCMMSPJMPPQVUTNFIYHEXJUGAOLMSWZUQNTVPEGMIXZIWYGXDMNDLHVDUBHJALPFXOOXNWBRFLBDDCHHFZAJJDVWOYCYTQIWIKPRYEEBMWAQOQYKSEZVTDOKMXFSAVFONZKUDBABSBUANROCQHVWQZGCKKARULQTGINRJYBITUSFPHYBVHFZDOEMLCJACRCBVUZT");
    msg.conditions.assign("UAGDJVZIQORCSOBUJFISTAUGIPKYUVFISAYDAYVLXCKHSGRROCMBNXRXIKUJWMMHOOXQTJMCXQMJVPPWVIYBJZUVMBIRSNAANLCSBULDHBNPCJVAVWJZPQWSQHEOTZQOGWPNHWNZEJYGUEFTWFYKPACXEHKFZETZZBXDEPPLOKDRTZLOTMMCFQDGHBFBIYWYRSK");

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
    msg.setTimeStamp(0.17456506750486034);
    msg.setSource(20159U);
    msg.setSourceEntity(215U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(9U);
    msg.command = 148U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DYEFMAOPRGXFPYRTKSYSUDHWVVGLTPGJGXYHLCZQ");
    tmp_msg_0.description.assign("JGANPCADXZIKBAVMAZYOLEOHVLTNNDPULXKYGLYEYSXFJJ");
    tmp_msg_0.vnamespace.assign("KEFCNNUOBPXSTPUHULLYJWYJDDXGSVBORHZYDUJLJXGYPIINYVZXCWQDSZMWJEFFEUGDNZWODVQOHGAURPDXJPWVXKEMETQTAWGKQDDQBSAGBHVFAELMPUBEUKGVFTFCFNNMSRLSH");
    tmp_msg_0.start_man_id.assign("ORZHOQAQJUEEGYWSNJDVDULOQSXNFIDMKKOWTAAHIWVXZFPBXNWRBHYYWMGKJYEWROTUXYPTLBGGAPLPEHEYVXCEHOLKIWQKZXYCBCDQSRINSLJYSKTZFVNPHCIJAFEOPPPPNMIHRNSDQDUOJAFXOWXUDVGKFSXMTFBZIAGMMVKBZBGGHUEESVWDPNZHDCUEIQKTVFTMRWITKMXQDMUGIUALQR");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("EHKIMEHGHWHYSBRYMGSBRCWVLIZRDCIDQRBBADLOZVJOOANZZRWMUUPDTQSQNGOQTVXNJFSJOUTWOJCLBHUHNWZAZFPSCRNCUXPDCSUFXJMFUYZPMBRWEEMAXPVLXKGWAHPUAGCPEOCJLVWMUVKHGWPEVKMERJLKTXHXKXINSYFNJEDBIKIBLGZRSLINQQDTVHFPGWBAKRDITVYZOFSYTOEFOF");
    tmp_tmp_msg_0_0.dest_man.assign("UFLWVQEQDTDWOORWQULGKPYKOJGVVJRWGBUDFBBZAGIQVCWFSNHKLISYEIAWXPYLKZSSGTVCAPVENQCDFOXMJBSUGWCALNOHZWVJRFVMAHCQMYIIOMIXGBJQRESEEEPGVYTFVNBQTBYJAMDGTNXUZHETMHTNUOKRIKEPZXPGXZAULOKTRZFSJPQRPXQUZBWCLSYLNFRKLDKXBNMCYS");
    tmp_tmp_msg_0_0.conditions.assign("SMTRIHQJXTAGLFGTQDALZRWOHNMHJMKEGTPRFVQINPCMXAQBEUSFEFECEMKKPRNJKWZHJSDVLFTHZMVOWVESSOXXBZOWGIAMNFUBEROXZIRUUJZXLCILYWKGNITHAKSODWYKFJFWBNVXUORBUCGQCIYSLDVJQZAGXSQVBRCQTYXDFHCTEKLLIUDZSQAHOGHRPCWJGYMPPNVFBDMPJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7030615016033225);
    msg.setSource(10076U);
    msg.setSourceEntity(149U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(254U);
    msg.command = 33U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OFHRFECGSSVTTWMKVZEAQEEMIJCKDDPCHHFZZZKCKSIDBCCORFMWWVWLMW");
    tmp_msg_0.description.assign("SPVTEHIZMDBRYNMZZJOJMWGBCDCSTDFEXBVJGMGJIGRPKWDUYOYRUXLZNEVLCQKFPJAPLRLPQWXZRMOOZUBMHGTXVPDNEOXOFOWNTHASXWFWJHWLUEYQSHEYABMNALMALZSTUCOOFUNKQXERRADHCENOSWRWYAQTKRHYYSVFZPXVKTJUZNWQEIIHPKILBBILXECTCXGDGKFSIJJDDGUZVIHTJCTCRVCIAQANYYHUBFA");
    tmp_msg_0.vnamespace.assign("HFFBAKKRCGJILDCNZZTXPCOSINOLYHRZGCZMOJDIQOEMJQJPJAWQMGAFOHBMMXUCVHSTEXJCULVKUYRBESYQGZDJTBSJTKEORTSWHAKTPFIUVNORALWVDZSRENXNVBYFQKQLUTQEIMPMGIYRMOHWPBGUXNPGYWFHWIAXUWAJIGYLA");
    tmp_msg_0.start_man_id.assign("DMQGNRLVDYGTCIIMYUWEGAPG");
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
    msg.setTimeStamp(0.5745806277399722);
    msg.setSource(20229U);
    msg.setSourceEntity(78U);
    msg.setDestination(16145U);
    msg.setDestinationEntity(251U);
    msg.command = 206U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZLFBDITZMKUHDXZPINYEWFFWFEJSXHQARARMJDQXVNKCVZFIGAJOOKTTDHPKAMJYSUPEMXCQMSVLSYBZLSQQBXNIOGRTPCHRMFHEFZLCHW");
    tmp_msg_0.description.assign("YYQWUYPNTGAWWPKPTQMFUMWPR");
    tmp_msg_0.vnamespace.assign("CIFLHYOQJAKTPCD");
    tmp_msg_0.start_man_id.assign("ONFDXWQGLJUEOZSYCZKEISFBMEBLNMFRWCSQLYGIIKLDEQGBUUYGYYBXQTTRVNJBFYDZTGAQXKTWZJGCUFBANACITODPVJHTHHAGPCXHRNVFHMVPHGZJMYJYRJMKFSXKIWNXAPMRDOFGLTQOOKEOJNKRVUUSMERA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AVRTIYMHIORWMKRNJMNJEHARBXNPNBDZAFPIXGCSWFELROJYNMNGQSCMLKUOCQTAEOCMPCYRVDQIGOWWHIQWXLMGDNZWXCGQOJOJEZNWVJZJQRMDTBXMLLFJKSEHXKCXXUIPUMDKCRFFYDOSTFZVFQSVWIQQSVTEDOKZLUDK");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 3605715290U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("AKATWPWREKLNUMLIZSIBPANLQPFWMGLIXTIHPMPFRWCKFJXRDWQZKRL");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("QMDJGBASESLKZEARWORBMDDXGVLTUUEZZKRRMUVPAHPXZSQKUZYNAHSBBKXXXPRAODNQBMI");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.764641546830346;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.19617899402628236;
    tmp_tmp_tmp_msg_0_0_0.z = 0.4116343947218811;
    tmp_tmp_tmp_msg_0_0_0.z_units = 172U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.18993619337990408;
    tmp_tmp_tmp_msg_0_0_0.duration = 10072U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8082463076345963;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 194U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KLGMMMQOMXIOSWEQMECDBGMKAQRIMZ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FormCtrlParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.action = 134U;
    tmp_tmp_msg_0_1.longain = 0.3564598098116558;
    tmp_tmp_msg_0_1.latgain = 0.030825281245837388;
    tmp_tmp_msg_0_1.bondthick = 2336855967U;
    tmp_tmp_msg_0_1.leadgain = 0.2003107372359274;
    tmp_tmp_msg_0_1.deconflgain = 0.6646984400073371;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6391136446451655);
    msg.setSource(30333U);
    msg.setSourceEntity(194U);
    msg.setDestination(16178U);
    msg.setDestinationEntity(30U);
    msg.state = 195U;
    msg.plan_id.assign("ANDCMCDVOCRHNFFLLANGDPZZRBJYDFFCLPFOXGVYLZWGMEJWBIBWVIMOIEDUEHLGETUUZSSHCWKSHEQKVQOQMPXIHAEMVVSUVRNBMBRYIAOANNKKIXFLHIXYTQTWBFGYPQKYXSTQXMXYWKJUGKCBFNIQPUJUOT");
    msg.comm_level = 170U;

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
    msg.setTimeStamp(0.7236216319911962);
    msg.setSource(59798U);
    msg.setSourceEntity(145U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(31U);
    msg.state = 247U;
    msg.plan_id.assign("ZGXEAZTWXKQXVZUSYLXMVQQVTNBVBFOHVTILGNTMDMRRBHIMPXWNYADMCKRBGBGDCUP");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.4085702599038239);
    msg.setSource(37761U);
    msg.setSourceEntity(207U);
    msg.setDestination(51629U);
    msg.setDestinationEntity(170U);
    msg.state = 157U;
    msg.plan_id.assign("GVHHPWVCJWNUVBNXZJYKYMSOKTZBAZSRQPRMGKFFHRJKOOFZJNSAFEPXPZSNSDQEIJIJPOKOZFHJBHQARTMCFNYIQIUKRGVC");
    msg.comm_level = 250U;

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
    msg.setTimeStamp(0.7218321449688109);
    msg.setSource(55653U);
    msg.setSourceEntity(174U);
    msg.setDestination(25409U);
    msg.setDestinationEntity(55U);
    msg.type = 112U;
    msg.dt = 235U;
    msg.op = 187U;
    msg.request_id = 29266U;
    msg.object_id.assign("SDELHNFWIDTJRZGBUYAAYGILCGRJKLBIHDUOSYKXYWONAJB");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -29628;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RTCUGYALWHRGVVRZFIYXGYPMFMXQRITFJDZZMCZSJKVTXAFBJEVNOVMUVSQTFGJTPLFUOBUHBADDJJQHZCKTWIXBWHMFDKHZKWJVLGINFSQBDGOMXUYZTLGEERDEXCZVHRZKDDPPPWNQYEXPCHWCTJIMSRGUPVFNIHILLSNFKNBQJBRPNXDOEWQCYSVEXKIELOIRUAADMSACGCLESWHAU");

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
    msg.setTimeStamp(0.6403188110032935);
    msg.setSource(8851U);
    msg.setSourceEntity(148U);
    msg.setDestination(22466U);
    msg.setDestinationEntity(213U);
    msg.type = 225U;
    msg.dt = 204U;
    msg.op = 1U;
    msg.request_id = 25040U;
    msg.object_id.assign("JBTPUXDUCEDBVGXWTSAOFMYGEO");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.5485311759889696;
    tmp_msg_0.converg = 0.8309032303902504;
    tmp_msg_0.turbulence = 0.2577153805532686;
    tmp_msg_0.possimmon = 194U;
    tmp_msg_0.commmon = 108U;
    tmp_msg_0.convergmon = 140U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JMTBCRZBMXBWLGUQHCVSMHFXINIELEUSQNOFJMBIMCVQDNINRWOPIVUFUEHLVSSHNBBFNJDVEOZHASXXCXGUDGPPEWTOGNWFEPEWAZGRVQHPZFUATCIRUUKAARSJUCMKEKDSVBJTRMOYOLWYR");

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
    msg.setTimeStamp(0.9209119882698705);
    msg.setSource(51382U);
    msg.setSourceEntity(118U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(100U);
    msg.type = 17U;
    msg.dt = 179U;
    msg.op = 17U;
    msg.request_id = 43331U;
    msg.object_id.assign("RZQQSLALBPTYFQASGTZELPWVQNRANREAAKUOYZOCYONKGZAUQZLNCLOFKFDXPZXMWWTJMSKWGJUFCJJYUHVIERYSSJXLLRFXADMMBONPBYXUAHYMBEGTWBUQVMRQJSWHGEVVQKIIMTRIHXGFPDVUOQJZCCDLNBDNYHJWEDFEYESLIOUDHICMKUVVPHCOBLGWXBTNNJECBHWIVAZODXPFDRKOPIVFYNRCFTXSSZQTPTUKMAJGRGZMXBEK");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.20477524169574424;
    tmp_msg_0.lon = 0.6681320287274588;
    tmp_msg_0.alt = 0.6260077171435894;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BXBNURDDSFVVPTLGEIKPLFFPLJYCLTNHYHVWBUMZHQKXRIYLKYCSHPQVROJMWQKQBOMINUGWLYBOFBCADHCZLOUXROWMSOHZHSTSLZBZENYNJJDMYNXACKAGD");

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
    msg.setTimeStamp(0.008599888829340818);
    msg.setSource(47863U);
    msg.setSourceEntity(56U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(188U);
    msg.object_count = 2820U;
    msg.object_size = 938396286U;
    msg.change_time = 0.4353836825242593;
    msg.change_sid = 48688U;
    msg.change_sname.assign("BMMABVPAMWLANXGZLBGEJOLBXNXCKSJTPGFODVYHENTAVTLFCLWEDKYJXRKKPYPWMBRZYTRCWILRMGQELJGYFOSAVZWFUWMJPCYKHOIDRMSW");
    const char tmp_msg_0[] = {54, 57, 114, 87, -45, -59, 67, -1, -56, -69, 6, 85, 83, -73, 75, -83, 61, 124, 42, 124, -86, 12, 120, 52, 60, -54, -19, 39, -53, 48, -2, -35, 67, -128, -20, 93, 82, -82, -9, -102, 27, 19, -12, 40, 74, -14, -13, 84, -39, 26, 41, -68, -87, -14, 73, -13, -17, 16, 118, -39, 63, -109, 44, 105, -89, 23, -66, 8, -89, 100, -111, -16, 14, -127, 74, -91, -15, 116, -64, -93, 69, 81, 82, -108, -98, 2, 79, 34, -88, 17, 80, 76, -92, 80, -60, -69, 41, 34, 68, 34, -85, -64, 7, 3, 77, -37, -42, 73, -28, 58, -14, 49, -73, -102, -56, -37, 23, -80, -10, -81, -7, 71, 46, -125, -116, 118, 16, 116, -40, 122, -79, -109, 15, 24, -47, -80, -80, -117, 63, -93, -22, -110, 49, -110, 44, -102, 58, 109, 72, -75, 59, -85, -14, 50, -106, -106, -6, 47, -105, 62, -19, -13, 38, 19, 77, 81, 117, 14, 91, 58, -72, 3, 10, 120, -103, 27, -25, -43, -106, -115, -108, -30, 13, -87, 75, -23, -114, -91, 22, 3, 70, 36, 43, -71, 5, -95, 67, -63, -36, -57, 25, -99, 52, -69, -77, -50, -31, 102, 87, 78, -124, -53, 84, -50, -118, 8, -13, 78, 126, 115, -53, 45, -119, 98, 14, -122, -1, 9, -111, 28, 67, 80, -31, -91, -95, 6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("XCZEASEIOJWESMTRLZKGENAYDBQNONVMXERHQQBYTXSBWMVUVJNOYVLYQCZDLVFJQBOVAKIVNKIQQPFZVFNCDNWKKQGRLAXOWRHZMKRPUGFWHXIJUJCBIDDNLAHEPWKLJHYPIWGCZKUYJRYYFAHFRDSTDFVXGDFUBBBMTTSPZNLUTMJBTHHOSSJUTSYZIBPYCMRZWUAMTGPGGAFWEQCRDOKKGIXEANMXF");
    tmp_msg_1.object_size = 18224U;
    tmp_msg_1.change_time = 0.4992449988890437;
    tmp_msg_1.change_sid = 57950U;
    tmp_msg_1.change_sname.assign("NUUJBPKQHZMVTRJOJMXARGECDYGLESQJRCMWNSZYQAMANWMELGNOVOWPAWKAVNYINZNQYPQCIGNBRBLFHDXEEUOTVHURLVQOYWWKJIAYSDPDLDTCFWBUQCUHTSSLSOBIJGYFGDRQKGFGYBIQDZJXCFOWXAAMHKAEMXTXZRNCHHEWCPBUPFDFNUOVHSZLGUHRSXHJMYZBZKJSYAETGIVVKTTIMOJPTVPCBVKEWPDBDPKSCRZXZTMKFX");
    const char tmp_tmp_msg_1_0[] = {-87, 112, -4, 27, -100, 103, 42, 13, -18, -96, 110, 45, -39, 65, -71, 100, -103, 11, -115, -20, 49, 29, 30, -80, -83, -59, 83, 119, -8, -102, -54, -53, -26, 41, -29, -2, 19, 59, -52, -18, 111, 22, -21, -38, 116, 119, -121, -23, -104, -45, 43, -13, 87, -112, 103, 26, -114, -86, -91, 110, 121, -118, 102, -28, -50, -87, 110, -37, 50, -13, -45, -115, -108, -84, 10, -47, 124, 68, 36, 35, -44, 121, 29, -52, 84, -114, -42, -58, -75, 23, 82, 123, -58, 43, -51, 47, -1, -100, 41, -59, 101, 115, -126, 38, 51, -100, -64, -124, -114, -15, 100, 57, 91, 5, -113, 9, 57, 23, -70, -115, -54, -99, 93, -8, -118, 4, -77, 11, 116, -22, 86, -121, 116, -83, 75, 14, 19, -85, 16, -119, 2, -48, 33, 19, 24, 110, -77, 34, -119, 52, -94, -40, 89, -29, 30, 98, -73, 87, -127, 111, -57, -68, 58, -101, 0, -62, -51, 114, 83, -18, -78, 102, -84, -33, -95, 110, 36, 103, -114, 76, 6, 78, -102, -3, -104, 103, 75, 42, 3, -8, -124, 42, -106, 22, 29, 32, -10, 53, 3, 67, 85, -106, 89, 120, -18, -21, 72, -128, -115, 73, -63, -91, -91, -58, 36, -82, 96, -74, 25, 76, -118, 90, 15, -59, -109, 48, -84, 114, 14, 93, 107, -33, -75, 53};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("SVXYZAJFNHOTCNDZWYBGZXFFGMEPOQTZRTNTYVVZYJIZFCIPFXGWPASEAMQVWFBBCMLLIMUPMOUIHPPRQIDRKQHOKVDTNXXJBBOPMLEWULKTENUAVAPJZJBWLWBDWWJXOWYLQRAUKASODHRHJMCCNCCYPKPOEQXJBGJNNEAVREVGAIUGHWQHFCTGQRDF");
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.2559558651729974);
    msg.setSource(34747U);
    msg.setSourceEntity(160U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(128U);
    msg.object_count = 39030U;
    msg.object_size = 4058995101U;
    msg.change_time = 0.6005640644155946;
    msg.change_sid = 25740U;
    msg.change_sname.assign("NLUXYNJIZUZIEDYLYRCRQBXUPXYMWOVEYBJOCSWAIMELDKDTDJKVMMMSBWZKSHNRTVCSMIWQWQETHUCNJXQURCIXAQHKKVWBFTWSPYHHRQ");
    const char tmp_msg_0[] = {2, 3, -6, -123, -10, -75, -49, -19, -58, 6, -89, -14, 75, -19, 91, -79, 72, 14, 106, -121, 30, -79, -52, 62, 121, 6, -104, -12, -12, 54, 81, -113, 65, -56, 115, -122, -26, 104, 41, -41, -104, -29, -82, 49, 18, 18, -99, -81, 16, -92, -7, -21, 48, -55, -25, 37, 11, -38, -101, -91, 114, -27, -80, -111, -43, 11, 13, -14, 39, -51, 67, 126, -3, 45, 13, -77, 61, 71, 21, -113, 115, 10, -96, -122, -93, -93, 77, -8, -80, -5, 118, 36, -71, 1, 46, -98, -23, 38, -119, 87, -100, -46, -117, 33, -24, 42, -45, 22, -38, 87, 108, 48, -54, 107, -53, -83, 62, -77, 34, -91, -103, 126, 28, 82, -67, -106, -64, -32, -16, -114, -22, 105, -87, 124, 111, 28, -114, -39, 62, 69, 6, -84, 124, 123, -101, 50, -57, -72, 120, 51, 114, -89, 5, 70, 9, 29, -4, -84, 103, 50, 21, -21, -124, 16, 67, 19, 0, 75, 44, 57, 43, 88, 80, -58, 57, 98, -26, 82, -67, 76, 5, 52, 55, -57, -95, 85, 92, -95, 76, 22, -74, -128, 2, -106, -128, 14, -45, 90, -123, 18, -69, -103, -112, 44, -123, -3, -49, -7, -83, 30, 113, -104, -82, 71, 45, -41, 63, -108, 43, 87, -124, -29, -94, -20, -17, 125, 55, -75, -116, 59};
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
    msg.setTimeStamp(0.9757542546182044);
    msg.setSource(29331U);
    msg.setSourceEntity(35U);
    msg.setDestination(8421U);
    msg.setDestinationEntity(102U);
    msg.object_count = 25777U;
    msg.object_size = 3613201711U;
    msg.change_time = 0.0031836773524039907;
    msg.change_sid = 32916U;
    msg.change_sname.assign("SGERWAKJRPSXKJAXZQOHMGVKJMSDYXMPZQOGSYTHEZXPYOAMYLIFFZKUBMTUMPEYITXCTEG");
    const char tmp_msg_0[] = {-76, -103, -5, -80, 49, -60, -42, 20, -28, 90, -57, -95, -45, 64, 75, 33, 120, -88, -14, -44, -126, -52, 66, 79, 101, -5, -3, -36, 97, -86, 90, 38, -77, -1, -110, 37, 28, -34, -68, -44, 86, -37, -62, 96, 25, 22, 54, -71, 1, -73, 8, -73, 105, -110, -100, 10, 37, 34, -25, 118, -53, 44, 121, -95, -77, -45, -120, 86, 17, -91, -20, 84, -86, -65, -29, -114, -73, 105, 48, -33, -51, 100, 86, 61, -77, -14, 92, 20, -73, -107, 115, -80, -2, 76, 81, -93, -42, -113, -118, 102, -97, -128, 49, 121, -93, -86, 19, 103, 40, -12, 1, 14, -54, 66, 18, 97, 123, -95, -103, 115, 56, 25, -69, 107, -124, 84, 10, 65, -99, 2, 46, 28, -115, -96, 91, -82, -47, 126, -127, 31, -89, 0, 23, 125, 12, 41, 15, -1, -27, 3, 57, -41, 75, -42, 111};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("GRCPMMXFIAUTYPKYGNJKGYCJCADDNBXEMAPHSELNKEMUSTDHIVLCHHTVWOBJEXBGDMTIGNEMPORUUFRFZKEQKHOCIMPKSWQXFLWJFTYASW");
    tmp_msg_1.object_size = 23824U;
    tmp_msg_1.change_time = 0.6888503230282684;
    tmp_msg_1.change_sid = 53941U;
    tmp_msg_1.change_sname.assign("JZIJISATYVSPBYMZEHOCOZTDUUNIMFAPBJSKPVEIXMXQAHKFLPTCVCQMHHTGTYQHWGWBSFTKVQWDXNVYOCGIIUHAKUCCYOHCVLVIZGCFBTRWKDKHKOOYXERNUX");
    const char tmp_tmp_msg_1_0[] = {1, 98, -66, 123, 88, 92, -63, 9, 78, 89, 50, -6, -97, 37, 120, -93, -87, 33, -98, -25, -45, -82, -19, 53};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("GQYAMJKYFZKSZYHWUMVRFWUMPHODTOMWLRTXFAIUDADBLZOGIBCOMSXUSMQCKGRAKUQNUPDTCJUGIRNYCQEDFMULDQEVHOXQWPHPA");
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5787410486350124);
    msg.setSource(20280U);
    msg.setSourceEntity(206U);
    msg.setDestination(46257U);
    msg.setDestinationEntity(141U);
    msg.object_id.assign("RQYMVUGWFCPNXMYNAKHVEQVODDJHTKPSPAYBMRJBHUCXYSJPZEJHKQMAYMGXNLWWSRPKXVOLAVE");
    msg.object_size = 43336U;
    msg.change_time = 0.5621491785822621;
    msg.change_sid = 57632U;
    msg.change_sname.assign("VQNKDFRDWFIOQWRINEMPSYMIOWHGQPWVKCCCQAJEZUEIFGVXZGWEANLNNTOHTJFIAAPMCXXYVXGKYQQBJLSKPBTMXWCKVGNYXHAHCOWGAYMSLTYUCENVRKSDIIBBRLTPDJYVVHPRTUDQLOIFVCJFRJUZYOOEBBZZDTUMBBZWHGGLNHZWXJLELOAPGDBLUZSQYAKKYXRJQORFEQMJZUEBPMVP");
    const char tmp_msg_0[] = {-112, 47, 113, -50, -108, 73, -64, 124, 86, 73, 43, -120, 86, 94, 55, -69, -128, -115, -31, 48, 48, 90, -110, -54, -59, -37, -101, 126, 26, 56, -50, 108, 102, 70, 45, 75, -89, 33, -1, 40, 68, -2, -55, 74, -16, 36, -64, -107, 23, 71, -66, 23, 105, -49, 47, -26, -28, -49, -57, -121, -125, 81, 86, -94, 44, 61, -21, -9, 48, 93, 124, -117, -95, 94, 87, 31, -113, -86, 41, -71, 97, 33, 56, 2, -70, -101, -113, -115, -98, -10, -101, 49, -90, -68, 98, -93, -38, -103, -69, 78, 100, 65, -113, 15, 35, -22, 99, -75, -93, -9, -35, 85, -29, -37, -3, -38, -115, -126, 96, -122, -108, 52, 38, 115, -16};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("ARCLMDNJUKZGNAIWBTEEMDNNXSOSPIFQYQNCNGZCPOJTLFSWDMOXAZBFLIBJMDPIXESA");

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
    msg.setTimeStamp(0.01385718168824479);
    msg.setSource(20490U);
    msg.setSourceEntity(10U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(39U);
    msg.object_id.assign("XZTOWNIZWYZMPRUOXTZEWOHLT");
    msg.object_size = 23600U;
    msg.change_time = 0.1559200125903073;
    msg.change_sid = 5436U;
    msg.change_sname.assign("KLWHNANBBMTVBUIGJIZACQJRVACFGFUFNRISUJWXRPWOPAUWFBNPGBCTPFVRYVJBHBUZGUTQHWKUWGAJPCINEISADDHAMNLPXWNCZOUEVXZOCLUQQZXEQOSSORIHTDVXXTVLXADFHLFKKDSOFEGIHJWMSQKNLEEKOYEXZTWDJPCNHSMJHETMRSMGDEAYCWAKVOBMPDDIYRQRNYR");
    const char tmp_msg_0[] = {-92, -80, -67, 74, 50, 79, 123, 7, 81, 16, -14, 50, -21, -99, -27, -37, 119, 48, -64, -112, 121, 113, -114, -88, -93, 8, 65, -14, 98, 27, -64, -12, -6, -35, 53, 55, -96, -87, -19, -126, -37, 106, 88, 23, 20, 5, 52, 120, -7, 66, 25, -88, 14, -113, -18, 64, -50, 27, -8, 0, -26, -27, -55, 116, -83, -14, -43, 69, 53, -19, 77, -84, -79, 46, 105, -9, 118, -15, -30, 112, -113, 81, 116, 29, 43, -111, -75, -122, 76, 93, 66, 93, -86, -87, 111, -5, 67, -126, -110, -110, 36, -79, 67, -36, 60, 43, -72, 110, -81, 103, 53, -103, 24, -9, 99, 41, -117, -8, -70, -24, -59, 117, 85, 81, -92, -125, -73, -15, -64, -93, 3, -92, -123, 70, 104, 102, -1, -64, 35, 109, 60, -95, -35, 13, 84, -45, -48, -46, 103, -90, -84, 21, -81, -77, -20, 26, 78, 115, -114, 86, -18, 16, -103, 88, -82, -5, 39, 52, 63, 56, 0, 95, 49, -1, -88, 6, 80, 83, 120, 124, 124, -7, 29, 126, -15, 69, 29, -110, 21, -103, -67, 36, -88, 76, 52, -5, 92, -45, 90, -77, -120, 23, -87, 42, 14, -83, 87, -29, 100, 79, 7, -81, 2, 56, 68, 81, -11, 26, -78, -26, 30, -62, -28, -12, -92};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("YZFQPWWSCUUJOUBQMHACQENFTOQZROKOHJASPTXWIPIJNEXFUCNLLQFBRKRJXDHVKDYMDOZGYMSWJFGAJVLTZGXBBVKNILUWHCQOUPWRNWSLKUBFCOCKHIYLJETJYGDUBKFXOSV");

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
    msg.setTimeStamp(0.015734253886394156);
    msg.setSource(37445U);
    msg.setSourceEntity(1U);
    msg.setDestination(58603U);
    msg.setDestinationEntity(235U);
    msg.object_id.assign("XZJGENSSBQIVCCIMOFDJUVAZFLPLRDNCNIYMAGQBGTOIHJGOQKVWNGWRSKKYTODJNXJHWOVLSILGLLQRUKJCZMLYTCTMISWTXRSRCTMSWKFMHAHP");
    msg.object_size = 42956U;
    msg.change_time = 0.181450705531496;
    msg.change_sid = 8321U;
    msg.change_sname.assign("VHAEXLRNJKPBDBKEUZXTXFQBOQJIBDRGZKQNWWDQUSJRXJAZIKVLKZMTGXZBRAXWLDASVEYFEBSIVYQDINUVYBJOLLPYTMOCEKRWSRSTANUFGQFWKNVZQYDCWVUEVPEFAZGAPXJCHLUUTKAPHMGGOXYQXJHLHMUWPMSYCWXJLODMSMHCQHFBUNHZTIFKYNYPDRRVCNOITTEOB");
    const char tmp_msg_0[] = {-60, 33, -39, 100, 81, 66, 30, 117, 116, -119, -28, 37, 16, -97, 26, 17, -77, -15, -93, -101, -83, -99, -122, 97, 125, -53, 56, 47, -74, -99, -82, 9, -10, 9, -73, -111, 24, 99, -97, 41, -76, -40, 12, -34, 23, -77, 32, 55, 94, -54, 77, -42, 109, -110, 17, -24, 4, -62, -87, -100, -35, 28, 94, 17, 111, 121, 111, 42, 113, 106, 62, -74, 111, -101, 107, -104, 9, 68, -20, -80, 104, -8, -45, -34, -35, 80, -26, 105, -6, -128, 99, -19, -75, 3, 97, 109, -42, -45, 117, 104, -34, -25, 61, -82, -13, -67, -57, 33, 85, -118, 94, -99, -73, -54, -91, -46, -22, 77, -33, -91, -36, -107, -126, 59, -73, -100, 63, -64, -83, -59, 60, -34, -92, -113, 50, -91, 7, -123, 34, -79, -46, 55, 41, -47, -22, 7, 34, 90, -40, -52, -1, -85, 22, -121, -45, 113, -71, 45, 121, 48, 6, 124, -26, -47, -16, 58, -36, -93, 58, 120, 82, -73, -29, -38, 10, 73, -98};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("ZZQECFOBOYFOOFVJIHGDYWMNXWCPBCJJWNBSFVYYRIQKMHL");

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
    msg.setTimeStamp(0.9611707485677857);
    msg.setSource(26928U);
    msg.setSourceEntity(32U);
    msg.setDestination(1285U);
    msg.setDestinationEntity(230U);
    msg.type = 1U;
    msg.op = 175U;
    msg.request_id = 64496U;
    msg.plan_id.assign("ZFOKDDEOHUDFUSNZHABVVKZHMCLAWPVORPEIQIJAZJSFXQJDTLGMVTRGNMCYYJEANHTTFTDZEABYQWPHRUWIUGJKUNOIAXZYFDWFGIICQPCSBNKHOEZJKKLIVXWEKRTBNJFJQMUZRODSYLEFXMPGHCPCQHJVNDRQDPPKQPZWGNSBGRXPGICCXJEOBOCTSLTAKWTMSNLXLSKHZLUEVMRBTLOVSLUBUGOMBIUQF");
    msg.flags = 21959U;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 240U;
    tmp_msg_0.range = 0.42557980997757716;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HHFIHOURTXSOLNOZKOEFKBKIPTYLNVAZKOERNICHXZAJDNFXIUHLAOVQQAVSMRXGVBSTLBVXDDAQTTDXCEKMDYDYRHKCOEOKWSANSPWGTZEYMDDZFTJCSPLLPCPMSLVNWJXRJQG");

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
    msg.setTimeStamp(0.86037657868151);
    msg.setSource(36738U);
    msg.setSourceEntity(77U);
    msg.setDestination(41551U);
    msg.setDestinationEntity(18U);
    msg.type = 35U;
    msg.op = 178U;
    msg.request_id = 15973U;
    msg.plan_id.assign("OEEQMVJTRBPANNZKSYDXCABMJRQMVRRFTYBHXLUXHGJMDTXERFVHNAXHWOCZUQSASIKPAGNIQKTXGYEBZFVYDPODFXSRBSCVNEFJTPOAUNWIUISTGQGGMZQPRBFICWJRZYHAOAHLOKEXTHIFFLCWVJHPJIVLVGDWV");
    msg.flags = 31571U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GHOZXTSHUCGPOXQEGIPTVFYCBPIAKPEVWGQKZVNGKTBWLBEWLQSKMIBHSFRVZEYAPMJPTKUURZMXDKYFXQXQNZBAOVHRIPTS");
    tmp_msg_0.description.assign("ATPSBBKAHBOKQWYRJVDRIMXTKGHVXWTVGDHFEZELCBOPXGMANJZCTNNGTWCRQWXTFDZPLUNGDFXGUUPMZHALBGHEOLRSOTSMNODIREPRAEBI");
    tmp_msg_0.vnamespace.assign("BUZKQMESSPJWEYIQRYDFHIAGTXHTTHLWLUPETKPEDQSHKCJIJMETCUFDZGLUWGRXYNJUABTPVGVFSCLSRDOMZMFYZWBDYJELFYOIVHAJDVHQQPOFHTXHEPHJCAUCDVYOWK");
    tmp_msg_0.start_man_id.assign("PJKXTZCZTFLEL");
    IMC::WindSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.direction = 0.45172191738797673;
    tmp_tmp_msg_0_0.speed = 0.37217362806863763;
    tmp_tmp_msg_0_0.turbulence = 0.30029516741084306;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CHYZKUZTHMWRSPABTIAIVKNGSZQFFTFZENKMGVNGIMDBXPCOJECLDWZKHOWGYYQPJCQDIGLTFOEORFYBQVEJBYLPUBLMDLTSWCPTGGXPSARZBICY");

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
    msg.setTimeStamp(0.013795576841210133);
    msg.setSource(2835U);
    msg.setSourceEntity(14U);
    msg.setDestination(37386U);
    msg.setDestinationEntity(158U);
    msg.type = 131U;
    msg.op = 190U;
    msg.request_id = 47680U;
    msg.plan_id.assign("YJXFHBMUZLDVOHWNBEAQMREGVWTHBNZAOOHQZMSXOKEXERQNEZHNIAGYCXXTLYTZIAFYPTDPOQSFWAKFZEVIDVRZMGJJSMOLEUBIFIOQOHDCKICYVCPRELDIQUKRCSBXWUBGCRUMFZPAANOXLKGTSQPYGVUCNYCWFUQZPRCAKOSRLVJUMXKSBDLIWHVYLNXHHNAFTBFAWRGQYTLYNSJMMIPIWSZWNKJTDKJQJRVEHJBLDPXVTTDD");
    msg.flags = 28305U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.30599793745403436;
    tmp_msg_0.speed = 0.9554126722962579;
    tmp_msg_0.turbulence = 0.1513091382441074;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FVUSKYGJNBLCIMPYXRWNHKLQAWWEDRQHWRBNXIXLTDAJSSHIDGJDFZNJBESCVIMNQPFKUDGLQUYHYXXMRCLZRVVESMPOGHZFHQDJSATNTFFJWLYJMVZMMCSPKBOUTXWOOXSNSMZPVWQJKZICQENOXNYAACPUHAGEWMYQGYGIABZUVZLBTGHLPVPFQDVERHLBKRFIZIORIZEJKWAEABUUMN");

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
    msg.setTimeStamp(0.9160739290441787);
    msg.setSource(25860U);
    msg.setSourceEntity(126U);
    msg.setDestination(13238U);
    msg.setDestinationEntity(126U);
    msg.state = 239U;
    msg.plan_id.assign("ZQZQYDMXUNAGSGHQIIYLHVQFKWHWGHZYWDSWWROMVTUJKSXFFXULJPMNWFSEYHXVVMCBTRKIEAOUXZNWLRMOGHYIEPVPSKGEAHIJQLCFHAENPIGYZJOTGIHVQQTJPUOPKXTDCJJUNBCTMICCWPLMDYURSMASLOHOLBFBNVTFRJCIKKYECNBZQRPQKBXEOBGYOIRQPSEMPBJGRANMNZZLTF");
    msg.plan_eta = 132939622;
    msg.plan_progress = 0.032850244864848555;
    msg.man_id.assign("HNKVOJGVXIDYOKBAGGGCGYRDSZNWTMQQECBEQZFPAQQKVVZTYLOYPSATYCEIMMAJUXDPDHKMWATHNRBXJTJDFNTUWTRMPZBEHCVFFWJACBYEDNRVWBUKIJNSPWLHAOUFBBEBPDONVKIOWLXSSONLJQCDRXONXLKMLBFCLMTDUGI");
    msg.man_type = 28787U;
    msg.man_eta = 160571972;
    msg.last_outcome = 181U;

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
    msg.setTimeStamp(0.7386169267263762);
    msg.setSource(43063U);
    msg.setSourceEntity(191U);
    msg.setDestination(10926U);
    msg.setDestinationEntity(172U);
    msg.state = 101U;
    msg.plan_id.assign("JQJSZSVVSFNMUTSXPTTKEHRIDISGZFSCXZGNDDROXUZLPABVSHMBWZYCQNGQOMZYPICVEDXNWWTOQQUXRKUOVBAVGWFLLRLFOGIWJKHPVKIHMTEEMEUNUHAACKGFFHGDXCEPSRARYJDPEKKYBIREOSQNDJZAJXMRTMOKGBFUOC");
    msg.plan_eta = 152923775;
    msg.plan_progress = 0.08940521066491314;
    msg.man_id.assign("OSZNJLNDAMKGPKLIJILZZHZNEDBWCDQIWNTGONOFXQRGARTVUBKYROQGUSWYWRKCRACXYTESDDEZOURKFMXXWJEDQCZRBNBKQUXNOESWVJCHSKVAHHQJCVBMEEPCXTJLAPVFGMPOHABDZIDJFYUZCPEYPBQTUKTIWNWOMBPHXTRPISLFHGSMYVZLXFDPIKWUFFIMTPLQFAATSNQHB");
    msg.man_type = 36903U;
    msg.man_eta = -1150100974;
    msg.last_outcome = 183U;

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
    msg.setTimeStamp(0.7906247560485263);
    msg.setSource(21141U);
    msg.setSourceEntity(153U);
    msg.setDestination(57567U);
    msg.setDestinationEntity(14U);
    msg.state = 6U;
    msg.plan_id.assign("IYNWMOCPDBTHBVVVOSOXOORZUGAUOEJHVMSHRGTLFOIZDFWIWQGTLVJBTVSOBSYMVAFPUMYRDDIYVGDNJMBKCNFSHQYERKWUSEMPQLKHYLEUXUKKJQXCSRNAHPECMJMTJBRRNIAILSAHKXHTAPGBZFAYDWGGXUHCWGAWJVUWQKBXQXCPEFEXFKXMLQJZNEAIRPYZNPTO");
    msg.plan_eta = -1588674912;
    msg.plan_progress = 0.5330742937787585;
    msg.man_id.assign("PTKALTSIZJGZEEKZGTSYSQNHDLUBZNAKFEQKJIRJHLXDWCUYHXJVXQHCPKJBLOOFOGDFUINZUVFDAKRSIVYZLEUFLNSXUAMSS");
    msg.man_type = 63095U;
    msg.man_eta = 131247824;
    msg.last_outcome = 187U;

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
    msg.setTimeStamp(0.9700575388967191);
    msg.setSource(61776U);
    msg.setSourceEntity(50U);
    msg.setDestination(4635U);
    msg.setDestinationEntity(248U);
    msg.name.assign("LDMQWZSTKSNKFZXDNGDNXIYDBGEOUMQIWGVNUMHJLNVSWEFBYZAURLCXWQZWEUGFBCRBVWCPKKCENVTSFAYRDBCUXPVDPFIUOKAIBTMFWFEIBORHPMMLHITCVNHHHUOTUKKMJYMQFPTSNLSIJSLZSEBXVQDOEVIJYGWIRJOWHOHJHELPJCQKKPAHGRXGONFYQXXAYTYBCFQQWZVOKDA");
    msg.value.assign("SHGPXWODFGCQZZKYFVPVTXZYNQOUJTHIQLKVPTLYEFRSRVMVHFLJWGVSHIBWOXMDVUA");
    msg.type = 108U;
    msg.access = 196U;

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
    msg.setTimeStamp(0.5946026695527054);
    msg.setSource(4615U);
    msg.setSourceEntity(8U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(146U);
    msg.name.assign("ZWCRTZPWLARQSWMMYJICRDGOQPTBDVGNVURSKPFEFHUIFVSNDJOIHGWXHOINPNTACASXNYPDHRRLDWTQNREWVIPUNBWXBJUUOCMKEPCKYAUGKOXHMOOBMIZWAJCJTNDXVIWLSUCHYXBKBSFQBEYSCBUGHUNSQETQVCGMJLXRTULYLZRTEVKEHBJRTGVOASNFDASCEZLKWMYH");
    msg.value.assign("UKFRNMRYZHUXVANGDKIDARMMVFTLYHUSFUNKSUOVZWOPPLMGJRCPDGXJKSJBKRFKPZGACGJAEZTHERMLPZM");
    msg.type = 244U;
    msg.access = 74U;

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
    msg.setTimeStamp(0.36857008890866605);
    msg.setSource(4545U);
    msg.setSourceEntity(251U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(77U);
    msg.name.assign("NAEIVHGPWLRSVRJUTHQFCYWLLSZR");
    msg.value.assign("TRFAVDXCZNTMPUFTFSKPUGWADWEWBNYTHZCBMLSVOAIHDQKTINZQHFQZMIIVNAMAKLPOSPRWJRXOTIVYUDPIAHBQTPHGFDJVKCLGJOCFLHHXJCJUGUDPLLWDCOIFYAGTZRJMBUJKGRMRHYRBKAKSDC");
    msg.type = 245U;
    msg.access = 26U;

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
    msg.setTimeStamp(0.8233497579008727);
    msg.setSource(32007U);
    msg.setSourceEntity(189U);
    msg.setDestination(14568U);
    msg.setDestinationEntity(152U);
    msg.cmd = 71U;
    msg.op = 22U;
    msg.plan_id.assign("YSJIGFQGDTMWQMPZTYKTPICZZQABBIFEMOONUCHIEHNYNNVHTUHAVXNBEEFIHSVSURPUQDAUABVTJLLFFPVTMQPKQXYAJRMHCJZPDEXKYDUOSEKW");
    msg.params.assign("SJJQJVDCGUBLQFFFWJKOQDGZTSDZQPLVYZPHMTAVHOWVYKRSQMDXNHUWQZYKPYXPMIQGJWCPBAIUEGEMUUJDXWJBCVNIGIMDFMRDDWJZVRYFHSKQCLFXHCHFRETSGBAXNHATNXLSMCPLOROKMHIN");

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
    msg.setTimeStamp(0.4171213667911078);
    msg.setSource(43358U);
    msg.setSourceEntity(229U);
    msg.setDestination(21837U);
    msg.setDestinationEntity(78U);
    msg.cmd = 48U;
    msg.op = 215U;
    msg.plan_id.assign("SHFPLMDCWVFWPOAYLZSUFETCCGIEGUQKKNXKRYYPQBIFWURQVMLNRZGIFOGEVZKOZVYRBTGEAWOCSHHJODEJDZYYZLOXHLTIHQCUYSJVQLAXPBBJOMZDTRYXMJIRIQJMNTRVGIMKALNUYMGPNDANZOPQZVADKIXINFAJWVUCWRFRKEPPNGJKBSEHPXBSEHJDNDWXEKTBJNTQHLF");
    msg.params.assign("UNUDSNTKYKXWUMKOCYKXJVZBXXNFMPWLAILFJZSTUGQSAPBUYIIOKHGQHSIYTAVKMXQWLOSPYHQFIWJRBCBMBDGNDZNUWCBREGICBPEPCTTHGSAATXSDQLTYJRHLBAMNDQCHKQRCTMRVMZUDFLZXNJFQKQIDDZJTVFHAPZEBZHOPMIEPIYEWSXOVPUGWEHCZRJGEMAUKN");

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
    msg.setTimeStamp(0.408441258699376);
    msg.setSource(31534U);
    msg.setSourceEntity(156U);
    msg.setDestination(13297U);
    msg.setDestinationEntity(161U);
    msg.cmd = 221U;
    msg.op = 191U;
    msg.plan_id.assign("SKCZMFLXAP");
    msg.params.assign("CDNDMGBLEENGUIGLREJPHBTOYERPSFJFVKNAMIXVQGDMTLPULZUTFDNYJSAIEDLFYXXBOAVIXRGPBTSRUBGSYACTROCNQVYWMGCBAWRSRCKXABHVVZDWQTLWHNAFMQZBMKSQJVMRZXAHWAUJEBEJXQIYNLOYKHKVPWPQTLPYZZSTBPHDHPEYSJHDTNOXLGONIWFWUEVFFJQKKLGZAHEZCWUQCU");

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
    msg.setTimeStamp(0.04359384401220601);
    msg.setSource(33076U);
    msg.setSourceEntity(112U);
    msg.setDestination(48126U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("CEGTZZJPWGYSJCQHLXJSBRXROWXQIVQHBLLPKXSRXDZOPPCAAOJYTPXOQOUFEGGHKORCMGKPINWTTRNUKYVFBTZTAWESHYLXSAAGNYMUUNDMWCOGQSYDHCEBLRFHVDLIVDZZWYNQEUYXOV");
    msg.op = 14U;
    msg.lat = 0.451176695706503;
    msg.lon = 0.7165889358056772;
    msg.height = 0.7899358400381683;
    msg.x = 0.3518797381915796;
    msg.y = 0.05083284514995756;
    msg.z = 0.6487592090086016;
    msg.phi = 0.0675347151325354;
    msg.theta = 0.8207166977016451;
    msg.psi = 0.009263693547458818;
    msg.vx = 0.43313084811983127;
    msg.vy = 0.670930286217899;
    msg.vz = 0.6315747733662754;
    msg.p = 0.8821187376301091;
    msg.q = 0.9344112712491114;
    msg.r = 0.8723604628255482;
    msg.svx = 0.8821300011345852;
    msg.svy = 0.9440067637426236;
    msg.svz = 0.32303422382913527;

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
    msg.setTimeStamp(0.607467904138311);
    msg.setSource(35245U);
    msg.setSourceEntity(144U);
    msg.setDestination(59358U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("OISDJBUDFADQWUUYVWHFWOQMCYWUEGNUKXOMMVMJUQREQXZQMKNDOULFTCFYLAKRSOBFLKBARQEHIMGTLKXB");
    msg.op = 22U;
    msg.lat = 0.6368149122176249;
    msg.lon = 0.7636261697662853;
    msg.height = 0.7193229094564879;
    msg.x = 0.6405482128818863;
    msg.y = 0.09435753010789283;
    msg.z = 0.20642667869404618;
    msg.phi = 0.5023394970585413;
    msg.theta = 0.030091976607186766;
    msg.psi = 0.32233259111267465;
    msg.vx = 0.007924587622831103;
    msg.vy = 0.5553239806294262;
    msg.vz = 0.6301019194302103;
    msg.p = 0.8596176386196713;
    msg.q = 0.3045395953053206;
    msg.r = 0.4312739285580921;
    msg.svx = 0.33030323521744953;
    msg.svy = 0.7259616853250193;
    msg.svz = 0.17718132503507278;

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
    msg.setTimeStamp(0.10786411866315926);
    msg.setSource(60954U);
    msg.setSourceEntity(190U);
    msg.setDestination(16110U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("IAFJHYSOKIGTLVMUPZFEEUFWRQMGRTUQIASLWOEVJDUORJYCWHPOPQMLHKHZWWCVQTBYINMVYGGLFDUEASJMGSFXUXTRGDSKLUZNTTZYWEVXDKWDNIBAKKZARYDYBTXJAXKVOXMDCKMJZVDKNPZLYBLLIYBEGTWBSQHCBHNANNQRQSPPOBFJURBMQSTXEEAPBNVICLEFCJCMGLWZOXGCVANXPOYRPOONQDPKSDEVIWCRSUHHMGZX");
    msg.op = 203U;
    msg.lat = 0.8947559510760492;
    msg.lon = 0.24611304189215943;
    msg.height = 0.8936779383873321;
    msg.x = 0.7430133261272609;
    msg.y = 0.19259505598673443;
    msg.z = 0.14436466181759366;
    msg.phi = 0.29770759669747204;
    msg.theta = 0.43429739714654236;
    msg.psi = 0.6795856572974122;
    msg.vx = 0.024583121957932996;
    msg.vy = 0.473687455456417;
    msg.vz = 0.31230462447132357;
    msg.p = 0.6671306169596078;
    msg.q = 0.2846148631990575;
    msg.r = 0.41918330154994565;
    msg.svx = 0.3980662965525886;
    msg.svy = 0.5225521136586354;
    msg.svz = 0.44129714844682777;

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
    msg.setTimeStamp(0.21930931476862292);
    msg.setSource(56146U);
    msg.setSourceEntity(176U);
    msg.setDestination(24712U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("HHHKUNNYBEFMPTXOMAMEYBOUSCKCKZOSUXIKNNDYOULVZTXPWKISZRGJWSDJQCMVEYUZXHZQPQLPYJWPBXWU");
    msg.type = 18U;
    msg.properties = 244U;
    msg.durations.assign("XGEKZJQDEXOVWWTWJDNJMYUOFBJGADYBVEZFLPBNOGJCEZIEFCIAYTNOGXVKPWFYMLLFOSXHJLFZWIUPAFHPYCNJFZSQQHRSGRDDSZHHKNMVPGOOHDXPANLTTMLGERPASPWSBQINUKRIDZXIXKBAQTIRTASEEKBMXLBETHRPWDIFYDMWHLBPAFLEQKCGSXCQYTKVJSQYRHJMCWOZUNKCGLOQVUHVNVZUUG");
    msg.distances.assign("KFTMWCVOXSLERIBEDHQDIAAAQOPDGLMFOECIJDNSJYGCCFVPKAHBNRZPJIGROBXWNNHHCUCRKAZBZORWYYMHFGFASPWHTJLKDMPTMKNUYESHZVSRJNPFHHWEUKFXRNODUYMMTWYNAWTFTSHCXUWQTPXQDKGCTXBEOXUJBATLIVPUBEMZLLVDVXKUWJYMEQAAOENLQZFRRQIKZGFZG");
    msg.actions.assign("LQLUZPJMPCTINSIFEYTNMUEJBRYI");
    msg.fuel.assign("XEIGKQGZUIMFZ");

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
    msg.setTimeStamp(0.4151611882554481);
    msg.setSource(18168U);
    msg.setSourceEntity(214U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("WTONNVQFAIKWSAMOFPPHPMNJEQMPUMPLVAUQEXZGSJUIZIXALSYPLWDTSAGHTNMMKVKFDRNUBIORQAW");
    msg.type = 245U;
    msg.properties = 95U;
    msg.durations.assign("ORCMLSTASNPDTHKUQNIJRLFWQXNMBBIUPWKFPMPZZKTUDYWIQGXMOZZEPOUCKGKEVLVCOWRYSSDPUQGQFZIICDRYUBGXHGRVBFXZHEARULNTGWAZGQW");
    msg.distances.assign("REJGUZXTEHVMQGSBYJOTKMFJNFUNSSHUXWRROZZDYHGXEVWONAKEGUIHUAREDXWDPDLPAKKTZMTRPCDNHXLMAYVOTBTPSUPXIOBCRKFWBAQZWWFICWXDQAONGIARDCNCWCLUGLIHIWGSYFEJRMFKHDYEUBPJVLPYYLCSXYWLRICMVTZLKZYOXATLBV");
    msg.actions.assign("IFBMZEGCXWUBMIZXCYZTDPJWTYARLG");
    msg.fuel.assign("SZIXHHLJDXVBCTKIYPEAVELGKFJTBGKANDDYWAFNMVOFUFEGPUDLBBLYCQVCOZOWJZYMJQWOBNRTMTCMIZCRLVWZKGMRC");

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
    msg.setTimeStamp(0.3596749639942908);
    msg.setSource(16687U);
    msg.setSourceEntity(184U);
    msg.setDestination(178U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("FYCJMWQTIXJUFOBIJKYXTXYBCIVQLRYAPZWUIGQSMKVKNPDMIORPPKGSNMHGLADNOZNKLWXNRTSHLGWJTKDSDJUEPCVGFLZRZECZDWZEAORCFJHTTXJDZR");
    msg.type = 101U;
    msg.properties = 15U;
    msg.durations.assign("CRFORDRNOCAKLGVZKHOAXSITFEBVXMSDNYDLFUGEEUJYBVPMYHGKFSENVHWOGPWQJSXVNARONTWPLFDREIMUAUKTYTKRMIRTWIHHPGKSQBCSYNVQUBMZQFICOMUCWNZJHKDJBAZQVELGYBYTNAQJPAAGESANLTCJVOHPWZURWSOSFPZUGGPMIWHAQEPOLXBMFLIXZOVVYDYQFMXRNFDTDHBDCLCSIXQCMWEKZJQT");
    msg.distances.assign("JTRZLPXHEUYSPETZQWTLOGITWDARDTKCDJOLMCVMRMNB");
    msg.actions.assign("GFKWSZIJOWJNYQBFVAJECYANFXKGTQAMVLMIVXHDPDECRVKTCSFZZUHHPNYBJLVHNISGEMFCNARCDVEQGMITRULOGJZNXGQUPPRMYUUNQIHCKCYVXDZMEDLLOXTOPLWWGOABTFJUEUBLLMDPJBMYPJAYFDSFH");
    msg.fuel.assign("YSUPYYPCWNSIYZSPPVGGYSHPOJHQMCZJNZXOIER");

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
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.7566666422853525);
    msg.setSource(10054U);
    msg.setSourceEntity(92U);
    msg.setDestination(30827U);
    msg.setDestinationEntity(135U);
    msg.id.assign("KLKWUUKEIPJTEMCBOHRZMPHPENLQZGVQSOLNGBQIEATEBWAA");
    msg.plan_id.assign("YPFGTSZXGYIFXERLKXAHDKBXIWTZAHCVSHYATLVDOCRMNOSRHWIGRXQQVUJOQLOYFKGUUGCFIMTPFCNEPNKEV");
    msg.maneuver_id.assign("YJNDQSQSWTUBFYCUDNXNNABMZNETRZAARTFXXGEVAHSYVCKVOQGTOYKICYUNRJRWMONGRQHUPBEKONFZZYIDTAAMXDLPQWSBFVODIUWYMPICUVGRLPWPIJOTZIYMHDHBBQKVYFALRJCQLPXPBFDTJDBLXLTLJVUAWBESXOFXFPZEZGSTKUMLEQGXMNKHXWPWJCGFZREKGZYCHRHCKJVHIWBOAJRVOAJCPIKWHESSFL");
    msg.memento.assign("WTIWZHJCBHDRMMBHJMPDOWDIFGUXWKCCCIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.36094541892136534);
    msg.setSource(10841U);
    msg.setSourceEntity(152U);
    msg.setDestination(60283U);
    msg.setDestinationEntity(252U);
    msg.id.assign("HEUYSJGKASYPEWCQBHNTSBAIVHHXLPCIGABPYLXA");
    msg.plan_id.assign("YDNRGGFHXWTQMIHXSZUCFOGLPRBGTKTWLUSAQTXUTCWSBSHDQXZXKVZXPCZOAFIMNRERPRBMZENQCDJGJEIVTTAFKUNITJFVUDBKOZQPVXNHYDJGZYMWBSVKGNIBLBYYMPLFHBEIHHIDWYZUAIOMAYOJPSXAGRLUMAQKOMLHREDULUHRKOYNDJJGORQJNSPBSCZOELIUZXJDPHNBCKPOCMEYFCVWNYISKCAWJQFAGWVWQDKVWMVELECLEPASQT");
    msg.maneuver_id.assign("PXZRAMOGTGANVLLKIZKUCWMCSTGOUVKGDJEBZABJLWQZZFGHDEKRAQNZNBIAGQIDHRYXYTPIJMKLUJKYIKPIIIFHKCGGLISVNOXDNOMYVPTNQXXDVHJV");
    msg.memento.assign("CYZRCNPYOYTIAQVQXYDQNCVVFFUSSWGFKRYCYWAHVLNGWXFDWNVEIUBFHMNSPHZJLFZTOTRMWBPPKQTNACKEXXKHZCYBNMQWCKEVTSDOTLOONBJWIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.5763717878872295);
    msg.setSource(8773U);
    msg.setSourceEntity(219U);
    msg.setDestination(27439U);
    msg.setDestinationEntity(193U);
    msg.id.assign("XAREKHCOUSAOZJLKHVAMDDYINSMQAOQIQNRILBUWGLKMWJKHLTPQDGZGYWMOPIXJQFUESSEVXKBFBATWLPJGEWUSBYDKNJMELFSMXCNVBNNYBKGYMFVFYWNCSPZGTXAYAJYVZXZXHHFIZOWIACYYJPWMNRBTFCMNSXLTICVLQUHVOKLIUAQCIFPREJITTETUDRQVBDSURGPTQNDARGPFZLOWZ");
    msg.plan_id.assign("KFGKAOWOOPXEZVZNHBYDRFKGSAQIIIRTIILDXHVWUMSUCKEVMXYLSFRQHXPBTCXCCEGLFLBGMVZJIUQDNDRMPBBUQTQNZPZHCMNFB");
    msg.maneuver_id.assign("SSNVYIJPHLQNWFECGSLX");
    msg.memento.assign("CJEKNLLSHNGDUFWXXYOYRTCQVXVWQLHDPEGNXOBAPKNSFGWUPXKQQCEQVSZHZQAGSQWGHWZLKUPIMUJYEZDMABRJCIXAAOVEOIJXXSLFUJOBPKBMCCPGWUYUDNIBBVITTDFSTYETRKKLECKYMRWCDZTTOKQHDJGAZXDWIYALZWSIRVRNAEACVLOVTMWNHUMPJOBHFJTITONNGXJRFMEMBFAQMRJYRYPQSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9674880641676702);
    msg.setSource(60083U);
    msg.setSourceEntity(198U);
    msg.setDestination(6968U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.8756711699159302;
    msg.lon = 0.2915760221499425;
    msg.depth = 0.7395298060021974;
    msg.roll = 0.6484537552933562;
    msg.pitch = 0.2998358540830087;
    msg.yaw = 0.18506537571020287;
    msg.rcp_time = 0.8310944471321489;
    msg.sid.assign("CHOWUKNBJUQJOLOKSMKRZTWTTPMOGJNVUEWYMFBULAITJPCLCSYAOPEYKZSQHEXTFSSACXYTJSDINAIJVXDHPXYBRWBTCREDKAFKRRYJZRDVSUHBIYBHEGOVAXQQXZVLRELBUYNJQNCJZYLTGDNOFQSQSKQFEDAMDZGIVXKQVNFMESGLMKPVPIEFUHMOZ");
    msg.s_type = 19U;

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
    msg.setTimeStamp(0.187802999203602);
    msg.setSource(15297U);
    msg.setSourceEntity(99U);
    msg.setDestination(25893U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.11880873840438133;
    msg.lon = 0.6321273094924219;
    msg.depth = 0.287242177380325;
    msg.roll = 0.3185814844793299;
    msg.pitch = 0.5599996229631974;
    msg.yaw = 0.15963150000999982;
    msg.rcp_time = 0.42381879534732825;
    msg.sid.assign("KYIRQTVLGUNZUZUMFNOAWAMKIYOZGIXPXGSKSSFQRTJUWSSGWXZOCWSPTILTENGUSXPBEFXVYVBVRHRDHFFOAPFMDQRULALRWUFZYVYQDJXKQJABYNMTGCECCHBHKHYCXNPTBSFLDFYKELSMICDOMRQICQLJDWCPMGQOZPOJBGEDVOISWJKTDPNJKMRLEVXKDJAJAUIVXGQRJEWCMHBMPXIOZHNLFEGYDNQEYUZCBLBTANWAAVHIH");
    msg.s_type = 90U;

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
    msg.setTimeStamp(0.2634147223626203);
    msg.setSource(21682U);
    msg.setSourceEntity(229U);
    msg.setDestination(47618U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.4250576412669316;
    msg.lon = 0.3451761488197571;
    msg.depth = 0.41806384445433775;
    msg.roll = 0.29775523336296206;
    msg.pitch = 0.958198394527984;
    msg.yaw = 0.5736708281125291;
    msg.rcp_time = 0.09658611353861679;
    msg.sid.assign("VVLKEKRJCHRFMYZATBYDIPUBC");
    msg.s_type = 72U;

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
    msg.setTimeStamp(0.4983907344062314);
    msg.setSource(21902U);
    msg.setSourceEntity(50U);
    msg.setDestination(9173U);
    msg.setDestinationEntity(215U);
    msg.id.assign("HJRKVIRDUGEGFWPFPMIQOIQFSYLOEJBDICSUSNDPYTUXLABUFTNNRKVMUASALHVVMAXLZTTJUCSUQQWYBXDIIIUYFBMKYRMEARWNXLGVJBHQCGIDWBSXCMYGCSCBZHPWHVADHKNAQVHEOOAXTFFOGBYNNSEWTTWCGLJZYUZ");
    msg.sensor_class.assign("OJYEJFMLPHRWCJMWYNDBCDJFVTWDZAUKUYWPFUSEKG");
    msg.lat = 0.07439940748561491;
    msg.lon = 0.5544732809237344;
    msg.alt = 0.18250534173383792;
    msg.heading = 0.5642432011239614;
    msg.data.assign("ZNSYFILDIOFEKVWWNTDAIPSQAMWFLEOEVYYPGGANBQBOMMDRBRBDUPLTVQXNCVSOHBCSSXLVLSREQAZNFMXJLJIJGTPBZGCPK");

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
    msg.setTimeStamp(0.6251901369199578);
    msg.setSource(38945U);
    msg.setSourceEntity(43U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(223U);
    msg.id.assign("ZBAHVKLIWBKHUOWFPYGTYMKKENNZQXHEVEDGFPYGIZBZVQSAJUQEGYIPLSCTRRNRIUTKLJHBERNZPPNYSYYGAZOMFJCDDAIWDDXOZVLAJXIDUPXVIACEQNOEGXXNLDUDVFMQZHBOAJQWTCKJUHSJTLULORFMQWMZPOGFHWLWOJVTBNPHRSUSGXGPCMCFSASWBCTTRMIDOYYGXSHELRESRIMYKTKITAVQKJCV");
    msg.sensor_class.assign("FSEKEYECIFUKUQVCCPWUXWNWOWWAULDQYXASZKLMEDHGHNGZQBUCKARWHPMTLOIAPFEWXGXOXMBWEHUIVZNAQXDYBJLYXLUTZCJVJHSVGBOJFBNKYZRGSIJDJGUKNCWMYJRXSBQNHPFCDXRFDSPAEHWZTEARFLYINFKGJTGAAMVOEMIKTRBINRZTPDOOYNVIOFRAQTLSOMCDTDHBZPIDRRCVHMHMIVGUCSSYYJTZPBQLUVKGQ");
    msg.lat = 0.8164912175727159;
    msg.lon = 0.503364222849634;
    msg.alt = 0.5939715029415288;
    msg.heading = 0.3727139895800091;
    msg.data.assign("RCQAIEKONZKNKPQGCRLFIXIBBOSFIPLXNMFGXTUMJXHSCALWIIHWHLIHDHQTUETWJTMUMKZTMVYJJYFPGJIJGEPYOJZUPNSBDXDMBATVDWFESSYLYYSWPDFSZMEZLOHTEBUTLBMSABGRNTGVFXANYJZQTEVVHCQDAGUAZYLOFDBGXORRMSKFPBNSGJWRDKZVQQDACMOOWXQWVREYPQUPICHPLVCXOANNWIFCHN");

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
    msg.setTimeStamp(0.377557330614105);
    msg.setSource(19067U);
    msg.setSourceEntity(41U);
    msg.setDestination(61968U);
    msg.setDestinationEntity(49U);
    msg.id.assign("UEVKDJEVOIGJVGWJFLFBIFOCFUNQZRPPBVNXTBJAPSUYNPYWPHSLSNBPDEYHJWVWTMALCRQFKKJZEVNYZBORLHJOWCXSUUBZLGAYQYDDGNQRTMEHQXBYMXHGMDUOCUZSCORVKCRQTRHWUOIOEXAGDNXSBTYPMMROHDCXGLKFRSTIKCUKWWTGMVXLCSNMUEWHQQFMTXADTIDAAALISBEPBWGNIIQKJMCVAEJFHFEZYKRPGIODZLNHQVFSZIATL");
    msg.sensor_class.assign("GPRGEVVPEFAKJRHJCQBQWXRTKDAQDXLSFRTSYLTJUUQNRHMJSTVGXWXQYCWBBGSILSOSHGPBXLXUUOBERPBVGLMCOAOSAYIHOWVNNZIRNAOH");
    msg.lat = 0.43642061220922;
    msg.lon = 0.21355980606156633;
    msg.alt = 0.6673759995760891;
    msg.heading = 0.7214622378477563;
    msg.data.assign("UOGNOTDNQPCCLMDQGUUHTPNDYGEBCSILC");

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
    msg.setTimeStamp(0.5797923417126741);
    msg.setSource(21118U);
    msg.setSourceEntity(43U);
    msg.setDestination(21047U);
    msg.setDestinationEntity(148U);
    msg.id.assign("AXLOCRXNGKAAPGPZRNIETFPBIBEOMSMDVUOGCLOCTEAWFKDRJYNLDHBTSBDIQDOZYWNCYMAZJMGMBDEWYRTFPUVZCPWZZNNXCQHPQOVJUBUWGGLEMDADHXZJREWINVABCHUKJNQRBRXTGMNUKFQPXHQXIXQMAWKHTLQQAEUURFYKEYSOFYJGP");

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
    msg.setTimeStamp(0.8581308329222366);
    msg.setSource(5373U);
    msg.setSourceEntity(9U);
    msg.setDestination(22327U);
    msg.setDestinationEntity(50U);
    msg.id.assign("BPOEEWBIWOXNS");

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
    msg.setTimeStamp(0.2994946065460795);
    msg.setSource(45865U);
    msg.setSourceEntity(66U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(35U);
    msg.id.assign("HZJMAJYXBZYTCQVWTRRMMULCPVKTORYHLMWMWIFLXGWDUHOZLBTNATPKZGVQMOOLHRYFRGTEUASXKURLASHZYQMAKCKISDTNWYFXCOPQSFEYBEJCDBTGCNESSWFBHAHZWVNSEPWBDBDVXTPSADHIUJQVPX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UOEXRAWBIXNLTHEWOCKVWPGTEDFRGOZRYXFHIPKQHAGMQHEJYZJZJXFNKQKPKILICBDNVZDWJRAJOTUFMSQBHDUGRSRICLZGUTBAVZIJYGCPWWVKYGSNNDJORNUSFXWQZDKDXKYAXGWZESAKCQBPROXHHTQVWDAYLMUOUZQMMNYUAJLSMPYFTLVCXTYAZFRHLMVNBMCGICOWGEPIJVUEPIBFOLUPNACLDPTBEVSBRHFYQHFMTNVQ");
    tmp_msg_0.feature_type = 51U;
    tmp_msg_0.rgb_red = 94U;
    tmp_msg_0.rgb_green = 31U;
    tmp_msg_0.rgb_blue = 188U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9727970694370955;
    tmp_tmp_msg_0_0.lon = 0.4067086274262467;
    tmp_tmp_msg_0_0.alt = 0.5938491736172398;
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
    msg.setTimeStamp(0.654304792936543);
    msg.setSource(14626U);
    msg.setSourceEntity(218U);
    msg.setDestination(8399U);
    msg.setDestinationEntity(117U);
    msg.id.assign("MOOJFWIKFVKMCHXRXVGDYCTQQCVZUQOWESPZTUHWETZCZMTHNPLEKGGLCLSRCSJFVJKRLSAFTWOTXSEBMAKNV");
    msg.feature_type = 236U;
    msg.rgb_red = 209U;
    msg.rgb_green = 74U;
    msg.rgb_blue = 234U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7318010262970394;
    tmp_msg_0.lon = 0.1881251450523408;
    tmp_msg_0.alt = 0.9497611072834837;
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
    msg.setTimeStamp(0.05060348032407591);
    msg.setSource(16098U);
    msg.setSourceEntity(243U);
    msg.setDestination(3449U);
    msg.setDestinationEntity(127U);
    msg.id.assign("QBWHUWMFXKEAGFRMECGYCAWLJGTIRUKEXOGTXDFMZGBCODMFRJOVWNXYZEBUTALSAMGPTFPIYWOLHNTGVEZBRPRVBWPZDCRVPLJIRJDPANFRORKCYDDVHQMEQTXYMSTSFSVPZULESNJTUCXQBYQSIQVMEJPPYWADBJUKZOLTSIQCCZOSNULNAOFDHDLALJNIBIQHVWUCYOSJWIHEVZIPYHFBVKGDXKAZKA");
    msg.feature_type = 193U;
    msg.rgb_red = 156U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 84U;

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
    msg.setTimeStamp(0.3979459530604421);
    msg.setSource(15658U);
    msg.setSourceEntity(215U);
    msg.setDestination(3194U);
    msg.setDestinationEntity(213U);
    msg.id.assign("GXVMCXCGAGQSPNEDZHYVBSKWJZMAGJPFKIDPYQNIYCWROFHQXNRZSYPORNHFBAZNA");
    msg.feature_type = 38U;
    msg.rgb_red = 239U;
    msg.rgb_green = 102U;
    msg.rgb_blue = 208U;

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
    msg.setTimeStamp(0.7997728788185761);
    msg.setSource(24054U);
    msg.setSourceEntity(162U);
    msg.setDestination(51469U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.8673390732443634;
    msg.lon = 0.7561206591722809;
    msg.alt = 0.5992851052459376;

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
    msg.setTimeStamp(0.6633893612907005);
    msg.setSource(49464U);
    msg.setSourceEntity(109U);
    msg.setDestination(34746U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.5387315912654289;
    msg.lon = 0.9382452058757093;
    msg.alt = 0.7979703087345146;

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
    msg.setTimeStamp(0.16537346940911846);
    msg.setSource(30046U);
    msg.setSourceEntity(184U);
    msg.setDestination(61120U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.6609392557793526;
    msg.lon = 0.16103993725468146;
    msg.alt = 0.16053997403306897;

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
    msg.setTimeStamp(0.005660551417730031);
    msg.setSource(25189U);
    msg.setSourceEntity(103U);
    msg.setDestination(13055U);
    msg.setDestinationEntity(97U);
    msg.type = 179U;
    msg.id.assign("IUQXYLOUTJQUBFKNFESPNOBBJOWZQWVVVZBCAUQKTRLKHXHSHTLYDPLMXMOZZJIRVPLLXXSHXPMXAOWDUHTQHTGBHRRULTIJMORDBNIW");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 59683U;
    tmp_msg_0.status = 168U;
    tmp_msg_0.text.assign("JNRZOLEFODFJOVFOJYMPDTV");
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
    msg.setTimeStamp(0.7034207920689926);
    msg.setSource(62032U);
    msg.setSourceEntity(203U);
    msg.setDestination(23884U);
    msg.setDestinationEntity(21U);
    msg.type = 145U;
    msg.id.assign("UZTEDUVJCFIGFBYZOCDLNMIBNZQNWHQSAKAEINPOFSGAMKRAMKHLPTQBHHFMCBKIJQSXQTCXDOPJMVWUEFHYQFWOCIZWJHFYTLJWACCVTNOONZWVMVIWQEFEASZGRKGGWLNJPPMPZEVEJKYBJYWKZUOLYVNGUUTDHDLSFTIUDQYZRDBGXKKEWTLCDANFUTRBIRLTYOPSSSXJJQAUOAOYSMUPKHCBPCNMXXRRLGVRPVGHRD");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.409245339993653);
    msg.setSource(4942U);
    msg.setSourceEntity(115U);
    msg.setDestination(18221U);
    msg.setDestinationEntity(84U);
    msg.type = 245U;
    msg.id.assign("GEIELPKTXEVBKLWTROFTAZKFEIBQVYDPPFYBMTMSAHPSNNUXGPZCWJCHEQCYFHTPKIWCXVCMYMSDQFRFNGMGELVEDQRZHNHKYGLUZ");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 190U;
    tmp_msg_0.longain = 0.3810743277927857;
    tmp_msg_0.latgain = 0.3981428618535803;
    tmp_msg_0.bondthick = 1465620913U;
    tmp_msg_0.leadgain = 0.035930496369072196;
    tmp_msg_0.deconflgain = 0.6558289628810862;
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
    msg.setTimeStamp(0.3244130107382065);
    msg.setSource(44075U);
    msg.setSourceEntity(136U);
    msg.setDestination(42585U);
    msg.setDestinationEntity(173U);
    msg.localname.assign("AFAVJUCINAZWXLOOCSGNDYOBSHGPKBVRLOGTGGCIXPOABHSEJSDNIOZFVBWHNLETEITVKTEKZXERCAYEPBSUDEKFFWPFNJJFTRNXULJBDBOMVUTPJTPPHMMWSSZDVIPTYQQZLYRFAMMLCRA");

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
    msg.setTimeStamp(0.8214320126756002);
    msg.setSource(58120U);
    msg.setSourceEntity(117U);
    msg.setDestination(13369U);
    msg.setDestinationEntity(246U);
    msg.localname.assign("HXOCIAMIMKEAJAZYBOSNXGXBQFVRHBOGQCWVAGSDPBHKNLERNTPFWRLIUJPHUQVZVGSRJBQTPGOOYLEAPIVGGLFTW");

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
    msg.setTimeStamp(0.2284331238901568);
    msg.setSource(35488U);
    msg.setSourceEntity(148U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(126U);
    msg.localname.assign("PAQAETZHDQPFEHCMWCRCDUNFWGAMAMOUPINVWSLNUESWCBLRNSZMOZQJTECTOZTSJVCVWBTFQNXEUUUSZEWIRJOPEYIUFVCBZERVOBPDQTNJZLGKDJKFPHWEMLX");

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
    msg.setTimeStamp(0.07585231751833865);
    msg.setSource(14899U);
    msg.setSourceEntity(28U);
    msg.setDestination(53579U);
    msg.setDestinationEntity(205U);
    msg.timeline.assign("SRKREWQNNFYVJCCKCXHRMTZNGLJDPXTLEJLLJUYVCGMJJKQXMSYOAHWKPPUGTFKYAOUNIGCSBWJGCRDWBSAAXBQKVMVEHNMHTDMBEUOSDIQYCMGZTHEMQOQUFFBARWSKOFQREKSXY");
    msg.predicate.assign("LNIBCUJTIPLZWOLXNKFGVPPTTUGCYFDEABDWJKIUOUQFDFWGRVSCGIZMDAKZQGROXGPPJKNJHIFVLXDTVPPSBAXBXHDVHXEMUQEAQYWMHWVBZJHYUNLOHXBJYRQWOMKGGCSPZXAYYNGCRSYDRPAJFEQXMBRVRAKZETINUIKNYHZOTUCVKJCCGFHJUMOEYPWALABETRFFMWSOBYJKVWIANHBEZZZDLSLXFTQQILNCORVEDNWLTSCMK");
    msg.attributes.assign("GGLVDSAIFRZUFSHVLCIWUJVEONZFXPALPPCDCTYCOZLNSTLRPQRCJKUKIRTHUCXSXWDSJZGYQVKEQTTWYQDWHUAXIGOXAFXMHPHSBBJAQBMATKKJVV");

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
    msg.setTimeStamp(0.6641823972699005);
    msg.setSource(85U);
    msg.setSourceEntity(145U);
    msg.setDestination(24444U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("NUCXSYHUZWQYLFPGCUQDESJLWTCWXYNBEKOZTUPLXVTJMMVNSHROXMMFVAFHYCXBJFWXKUISFIMKWLLZUNZKSAEGHDDTNKVMQNAOIYSPVIJYYDGNRAJJOQFOBZBPMLFLHSCCTBKAGC");
    msg.predicate.assign("MEWYILHWRPFZXLBRSZJQYESRUSAQTPMPXXNNIYXMWLGLMQQNHMHOGJFFEPKDQZCNWQMFAJNRSKHQTMCAZQFVXLCKILUUCSUUPZNKXDYTMVLJWAXBVSONRVVYWFXESJGTCRAOKD");
    msg.attributes.assign("HJHWRGJCCGXBRRLMXOTJUVOOAIWBPODCJZYTJZWIGBGDEZAUJUZQLILSADIEASYKN");

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
    msg.setTimeStamp(0.8327421989245474);
    msg.setSource(37299U);
    msg.setSourceEntity(248U);
    msg.setDestination(59955U);
    msg.setDestinationEntity(170U);
    msg.timeline.assign("XIXQNRCJDUXWWCWJOGDOIYPGCQBXKMAHOVNPYYYRDMJBPKFQTNSXZLKOPTWBMGRULKAVRFQCXIFV");
    msg.predicate.assign("BYXWRTHCBSWMERCXXLIKPPBTOWYLOUSKTJRWIEUGADRQFKVVSXQTTHTNCNYGRHQUEKMSLQOGEDPIDNQVVKAYFMGZJIFYZKSDMJNMLDKGCAYOOOYLUMFAQXMIIIUUIWZPFSEJGKWIWKCFGBLXNUEZC");
    msg.attributes.assign("HCQLHWAPJNRINUORMBFAEGSYPBVSCQNLOFVKLGVMLOTOOMNJMDRCGFWTECWRVOXTLYCCXZQQLUMKIKFQNHURPQKBIKVA");

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
    msg.setTimeStamp(0.08291037431300796);
    msg.setSource(9473U);
    msg.setSourceEntity(90U);
    msg.setDestination(1146U);
    msg.setDestinationEntity(44U);
    msg.command = 109U;
    msg.goal_id.assign("HIITNJOYEXMLWBFMVEORDQCIXAGZLSXKMIANKZWFWNCKEQHKTAHUOTYUJYMOCNH");
    msg.goal_xml.assign("KMYQHRNFNTYKXPJUUMODLMEFRBMUTWAZQHJLLFAPEHRDCFNSYQMCOTRCOOHXEVBTDHXRXDCIPXHKWKGKPLONMVGSRUYBYPZICQYRSXKSFNHBKFPEGAHHKDCYDJTGEPMIFAJHQLMBECAGWEMZNGNVBXAIVWPSTILJVBQOOKJJSVGLUWSDKQYXWRWADEXQDYFQTSNOOZLUZIRIJGDNULAVWFAZESAQSJNO");

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
    msg.setTimeStamp(0.4632231045385764);
    msg.setSource(48086U);
    msg.setSourceEntity(158U);
    msg.setDestination(37983U);
    msg.setDestinationEntity(174U);
    msg.command = 97U;
    msg.goal_id.assign("AXXGFMFQMJLDYJGDXLGLWTIZNWURRAZBJDJGOPVOYOEXUPGOAIKJDKGQSJQXKAAPRLNQMFYTRCKVLDWAGQPESMHOQPIYUFBNMJSRPUNDOZSTDDKFYSWQFHOVOWMEAIZUVSWTFNBERVMGHLTQYENXPRLJNTVNIUKEEAVJBJCYGBMNHUZCINHVDYCBKIFCZABQMCOYFLRMOCKVHKZURVITXEHZDBLETBCSWWSI");
    msg.goal_xml.assign("FHZRSGGPEJRKDXE");

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
    msg.setTimeStamp(0.2569113307056562);
    msg.setSource(1457U);
    msg.setSourceEntity(39U);
    msg.setDestination(43827U);
    msg.setDestinationEntity(219U);
    msg.command = 81U;
    msg.goal_id.assign("BEUJNGVPTZAAWREZYQOATFKFNOQPLVWNXXBPRSFHWUKUDXWMFREYBDFBVQBACKZFOTTROVHMXHYPJAIDRIZXVIKFSQICQWJEANKCDDLJCZDQDTTGOKVDHFBCEUGUJVYJZRSRPCSXLEHLCYOFJAUWFYGPQZBYOIXLGEHNPKSZPTIMYGYQGPHAZQJDNGUIDLCRGELSAYM");
    msg.goal_xml.assign("TRWVUYKBXPKYHVLORZOWYBWYAPHGOWWHSVVIDBNJQKTZXFRAOLJKMERFUJMLQGZZCPOX");

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
    msg.setTimeStamp(0.2585300896872982);
    msg.setSource(54857U);
    msg.setSourceEntity(35U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(63U);
    msg.op = 245U;
    msg.goal_id.assign("GNSDHBVFJGNB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FOXZXDBVOWATHDXAIQDPXKBIOLJOJAUIIFNNWOZGJNAXLK");
    tmp_msg_0.predicate.assign("OOQMBUDUSYI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ONNMRAJLVDIFBJJKKLGCUNAYWEAPKEFYUTCAXIBEFPZJEXATBQJFRKMVGWKXEBFQZHMWSLAWJZNBESQMVCLYOZKBQDDDW");
    tmp_tmp_msg_0_0.attr_type = 197U;
    tmp_tmp_msg_0_0.min.assign("EZEKYBWXESZWTSNRMSUUBZDDUATBNLMCOVDAXGIUHPFRQJEVNBKEXHLLTWJQPXUZUGQOHEFHPTRLNGPFEMDXEZCILRWMXHIJVHYIQULRQMFUNBCTPBZPPSK");
    tmp_tmp_msg_0_0.max.assign("HWQBCMWXPFJRKKLJAXPRWFCDKLDCIBFLNHJFUATCRXRINKSICDJQNHBTWIASIFSDSQETGIBSGEZIJMQNHEDXCCZBCUQAMONTPQLUHSVDJZTPXCKELQRTSFBEHDXLJYUBGIYMSACMEOXFYGURWBGJRDUYOVUGHPMYBARAPSEJNVEVSYOPVEWMNXQDEOWUQRVZHUKHNZZWNVWKVFGAYPGVPMUXFZZDONR");
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
    msg.setTimeStamp(0.6655142694446318);
    msg.setSource(37826U);
    msg.setSourceEntity(75U);
    msg.setDestination(20109U);
    msg.setDestinationEntity(111U);
    msg.op = 109U;
    msg.goal_id.assign("YGQUJTVLCUHMWJADANWDNBSLPTLWLSFGSRYAHKTUWYHLRWJICCSZRNFNGEPLQRYFEXAIOIBMVECBAASVKMZUQFVJSDITYKYXDQNVLTHVQWJGAMOOBMBWKZHMSZODPQAXZQFMEXYDDDEEFVSNNEXJSPITUXTXZOKKLLTVRMCCJXFAGOTGUZDAMYJPDNRLEWHZUCWJWQXOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MMHTGOTEHZPKSSKUQPRE");
    tmp_msg_0.predicate.assign("LWVQMGYETZEONEAYSJTUGVANUQOXHIRGBCPBVAGNTQRXDIHQXYOMZKPPEHBYABLHFAVFYCRPZGGKJVSPDQTULXXDNHSRLVTJWJGPOCSEKRFMEA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GWPZHCVARFN");
    tmp_tmp_msg_0_0.attr_type = 84U;
    tmp_tmp_msg_0_0.min.assign("HTIZWCCURLX");
    tmp_tmp_msg_0_0.max.assign("ATGQPBBHDRKVHTVIMYMCLJOGISXXKPOBFPSICCNBDXBSFGIVJEFDZKIWNAGGPOXHTWWQUAVEETZAKHNQQHLNGNYZKFPEYUWOLYPEZSBNTWYGSJGUHREJKZCJGSMCPOURLUVDXXACCSQTCFJJVKYUAIWVPABDJMDMBLWFWNAQOUELXEQAJRKVLISCLMZIDGHQWDOZDWYOUBQYXFRSHPPRNHUVTIRNRFUMFMOMZRCTNQOTLXTAZZMYLDXE");
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
    msg.setTimeStamp(0.19050400610167129);
    msg.setSource(42269U);
    msg.setSourceEntity(142U);
    msg.setDestination(3182U);
    msg.setDestinationEntity(158U);
    msg.op = 42U;
    msg.goal_id.assign("BOXZDYDHNRSOMJEUHNLECVZTDWNXNEWLFNPESGWQJGFIHOITDZFT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ODAMIGVZKCGZUWXNMJQCRBJCAQDBUHAVKOPBMXJPGHXHOFLYZKDLRQQTCWTFUXAZTVTTGITYXIDZSEDENMSLQKRFMYJPOQJWLSEGOAAWNCSOJVFHZNDBECPSOORKFGEUUWBBAKHIVRTBYEUBARRULRPTLJEWEBGVXYCFXLLVVIHAWFQVWDPMJCCNYGRNNCTIYP");
    tmp_msg_0.predicate.assign("KWWXWVQTFOENPOLFPQDZZR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SBAZNSTCTDDNZHXQODCXT");
    tmp_tmp_msg_0_0.attr_type = 179U;
    tmp_tmp_msg_0_0.min.assign("QWLOGAHHOPEUYBJYTUFMYWCBFESEJGLRAQKQSGVVSGAJPCOOWKHAORXJCEHRSQPWPEVSOZDWPUQ");
    tmp_tmp_msg_0_0.max.assign("GNINYHRRZHFCCSPAXPONEANNUAKEUPSVSZUEIAIAFYDZLXDVPRHPXTQLPSOKHJLRNYTBXVKMJLFMVYCFAOLAYDWWUFREQJCZPMXQBOIHVUYPXZEXGVPXIBYKFBJLMQPEKW");
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
    msg.setTimeStamp(0.7872651737822975);
    msg.setSource(6817U);
    msg.setSourceEntity(57U);
    msg.setDestination(2149U);
    msg.setDestinationEntity(205U);
    msg.name.assign("TCZKLUSXYZQUHNAHSUBSNKAYIUSOIYLMSOPMBGQHMFHXKWPZFQXJGOWADCZHDURCFMZRDUXYBVUYQFI");
    msg.attr_type = 1U;
    msg.min.assign("SKMMKEHXUYJQHBVUETIAQTDOGAWFUSDMHZFRWMKNMLOBKSMVXJWKPORKZJLBAXOIUS");
    msg.max.assign("SAGTREZIHQYKMHGQIQPROXIRBXZWYISUMDJEIMTOJVMBQBUTCYXKMCWNHSJJLKVEAZHXLOWZBYLRKDKAQXOBSQFHFMWHPYTPJSAIXMYZFHJSSTFLANWGXLAVGCFLI");

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
    msg.setTimeStamp(0.530569113218088);
    msg.setSource(25234U);
    msg.setSourceEntity(170U);
    msg.setDestination(60801U);
    msg.setDestinationEntity(56U);
    msg.name.assign("KUKBSGXHEVQFBHEKQM");
    msg.attr_type = 181U;
    msg.min.assign("YGMWCNXMMEHEINYXDSPVFKCKLZRQCABVBNRSUDECCYUZDENTOHWFQGENUJTAQBWUDFGUOPJKBWSFUXQYMBBLSTLDXAUCHTLGXDIKNROLYPFGHMHHIJSEPHQRJUGLEVTOVCSZZRAVOVFSLRKRARTMOVT");
    msg.max.assign("QBEIDBZWGPLRIRMJTAPPVGIJZOSLNDFZXBWYHISGHFQANFDEAMXVLKPIGLRYFWCXBFMRLCGFU");

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
    msg.setTimeStamp(0.2501578573118497);
    msg.setSource(60542U);
    msg.setSourceEntity(148U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(133U);
    msg.name.assign("IHRLSCDJWCCT");
    msg.attr_type = 135U;
    msg.min.assign("FKQFUARGZEGWWFENVYXKHZUIBZDKTRCVGAVIGXDOIJXHGPSBQMOOPCKMIEWKMQCHGXCONKYBVAACGTOGYBBHADJCRQUKKZCYVLFQXTYLFSQJJBCZRSJEDDLEOSDYYSSDLUAPRNKXGZTFJPVZJMINAMRRESNFQIIQTOAWWWLHHNERVHJOZXXZNNUUTDP");
    msg.max.assign("NICLFHUSIUWGSFREQSPCECJSBJWNDTGDAKTEHVIQMHBQGXYYEZZAHUFPKFTPTAJUJZNRZYBCJTMTSVMVJGZREXJBYQLXIF");

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
    msg.setTimeStamp(0.48621193334511614);
    msg.setSource(41403U);
    msg.setSourceEntity(25U);
    msg.setDestination(5518U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("QCJDFUSZMWXKLQGXZMDITGJSOLTDIBAFEREICBNTJMXVJINRTRNMXZPVSOHHKLBYUKVZQYSLWWETJOVEPJGFVDWANLJHCWWPYGBKNPUPGGXOUBSBSNLPDTTPVDEACTLOZUBYCKGYRYDUQSSFPHVQWUGUOSUAZZXVFHFRZQBWOQSNAYOKGEEDNMIAKMPFTAIYIQGARVDXCXIHIOVQRNYKWJCTRLHHMJQBHKEMDCMFICAL");
    msg.predicate.assign("SOTAVIKJBPERTQNWUWHLWPMXLKOMKDBFVPMEFZCSRLDAKZTXROXHXCKCWYGDGMRDWVNGUYZAQEFZRYKHEAFZAOOVKWJWQOXMDELUMLHPXHAKLNUVJBUIPJRDEISUTWDHCNOHJCZIJDMSAWFRXMIYZYSIJBSPYHVRGUTEBFSTQPYAFVNFOQXNTQWJJAINY");

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
    msg.setTimeStamp(0.6673579416466561);
    msg.setSource(42162U);
    msg.setSourceEntity(124U);
    msg.setDestination(60762U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("EHSPOOMWALCIQJOQMYGPQKQQXCIUKQAZKKVXRXWSWNY");
    msg.predicate.assign("FNRHDSSLUIDCELABGNWVOBBTZHCNAFMBFVRFKSRZUVQTHSUDRIJBPEDEETBRYCSYSDKHTWPWURYENBKJPEUVXEMSOMQLDZHOXKFBYNECJLQTAUZPLGFNOOKXVQPXWIXYYIXKAPTYIEOUMXMHWJKXNUZIZGPMJNHLLKQZ");

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
    msg.setTimeStamp(0.6491557635692421);
    msg.setSource(53542U);
    msg.setSourceEntity(15U);
    msg.setDestination(46201U);
    msg.setDestinationEntity(208U);
    msg.timeline.assign("RIECQRIUZAKHUTAWWXOHWMKUCNSKUQFJYETOWILKTBODVDZZQDUTZVYEZRNIPGCTSWZXOQLYJUEHASIXAAWVIZDPQELXWJEDCYRBSUBOQLOAODVRBYLNNBPEPSAMFFKHNQJFBCSSQTWGUN");
    msg.predicate.assign("SPKRIZCWHGJBPURDZXTTQHBXVWUYIACBUVTQDQLAVBKEDTEMIKNROFWUBMXJNEZUYSUAOYXILEPLTPNOKHNCKBQOOOCASHONNGSZDPUESJDTQJCDUFZAOLSILTFXIACWHBGRDXNERVYGGJEPSCGPUXHTQYRVIJWQKDIZQYKMZYKPM");

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
    msg.setTimeStamp(0.15535054739802878);
    msg.setSource(36173U);
    msg.setSourceEntity(194U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(48U);
    msg.reactor.assign("AVNLGSOXZKQIZRVWTMJIUTELYJAFMGHMRGEIVSWHQFEBRCPFLVVXTZKBXHHDFEGLQGEWOMMAILADYYDTCYPJYPZNIWBSHHKIIMOUDLAWLDHPNZPWYLTOBUEFIYKSEFSAAAUKNOCLBBXODIWDPZNYSMXSHYJKOFDVQOFFXJVMZCSRCKWTEBQOORRGVNSJQUYUKKDR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CUHOWMVPGAKYKDSYPRSZTPMCPAFFLMFEVBNGINJTIJNPJRDILFCHIOBGORDQEONTNNLMZWVXEVDDUVMAMTRILSOKGAVEBFJGFSLZEZLEMWPXEYYXZEMCDBVHN");
    tmp_msg_0.predicate.assign("UQFTMMCIRKTDSICCVWDCKXAWSWPZQHHFTTBHAEYBUWXBYKUNSSKVCHPPNYEDRTHRSXZCDIDWUREFRHOVTMLRZGIADOSMKJEEJGJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WKVHPNEYSNHXIQELDNTBIWZGJKNLMYAZEBKDEREJTPMPSSIIAGCRXGGWCYZGMWPBXFLSIRCLTGXNDSHFUQXZFZOLFDYARCIOWORKQCDRSYQXPQVZBTVOTYJFVUOMANDMTBCPZKOFVHHTKJMVZSAAUOVWWQCBWIGPMBKUUUHGYDNJBGLUOMKEVBHCFZQQSPVUORPLXTAFFGYXNYPLNMWEWMCFQTZULSNERIEKQACBXHOJVJDUTDH");
    tmp_tmp_msg_0_0.attr_type = 166U;
    tmp_tmp_msg_0_0.min.assign("LMLWWJYGVRTZRYESQIQTIPTEFPHSKMSBRYYQSRGOQJQZVOUXXXQKCHOLNFRRWLVIPTKZKEAYSFVEUVFWGQAZBXJUURSFQMAIMIBAIBMCVMYHMTFLOJWOJCBOLDIWHTXSSYFAUNFTJILEROWPHMXLZDNDZJGBDACBCJEHJSNZXVKXTGMDPWOYZRJCBMQPRPBPLYHKPCDDEUFNAGSEDHNAEWUDTZOHCIGEWUCYAP");
    tmp_tmp_msg_0_0.max.assign("SJUGDCIMPOYXVRAMLKZCREEHLDYTWITFAYIMLXAXYQJFVDOADSKAKQPTBMZEIDSMWJTSUOZZRJHKWLWUTOFIBFRWYWVZXYYCEHHRHGEJBNJREWZWDUMVFMBNAOEIGMHFCLBNTDNLZBBPPSCCVQUZXQQXGKFNDOOIIHCGPWUOGXRGQQSORUJGYYNZXAVEOLITUXNSMAAHRVPRQWU");
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
    msg.setTimeStamp(0.6359430709124971);
    msg.setSource(9279U);
    msg.setSourceEntity(202U);
    msg.setDestination(58201U);
    msg.setDestinationEntity(21U);
    msg.reactor.assign("SQWBFUSMTMVFUYHTDAUQVQPMBAWPZCDVLBNRWELJGBJOJUWXLOFEDJPPOSGMWOACPNHTSDCAPUNCDCCXIXGBILATEZRPRZTRPNGSNXQGTZYEPFJTQKTGFTYWYWYKVEMVFXGLOKHTEGJNAJFKYZMXDESVEYHUKKVKQQXDKAARQAEZAIUOMBYHXJIUIDKIMIPCHUNLCOSGRIBWOYHFQCRMHCFHR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XBKGUYGMQNSBVEGRSOKHIHUBYHFKFAUPWZCDYQMTNYMJVRISDCWCZNANFUFPJSLWFNGJBTJFNXLMODAPMIBUHSNOHMCRMDGLSAYIFRBXKALYA");
    tmp_msg_0.predicate.assign("EUBYXYSEUMWADHPFYUASOUWKTENBDCIZJPGVHNLRLKBWXBONTVSZPYWZOOARRXBLVPEMCOSCIWIGLBKPQANKFAPGPZEETRVICDJKHMLLMDDYFUXCRQLSEQIPTGHXYYGHVGZVCKNMNUWFQILWVGNHJRGGPONSQCFHXRWXPIAQZMZMBBULTDDMTOJFODIFCRHKKTOYXBYIRGJSAMVCNTUCKEWQLANTUXIADQUFHREVOXJSQZAEDMJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FGBEQKSSALQRGXTOFDNQIZVOXJPVPZBKNZRDBUDFVUPHVPBJGMAXEAOCDASRVJLNXJDBYUOWPSTMIWRTCRDTTUALDAXLXRFNRNANNFSYIBQUQHQACHEELZQJGJZKGGLYEWZKVUMSDYAYHIETKKIQQKCOMCZPBSDLIJW");
    tmp_tmp_msg_0_0.attr_type = 220U;
    tmp_tmp_msg_0_0.min.assign("VSTDXKCRTQAMUGFRFBJBQRIASSDHYVCLMSRVHYCIOUODLJJWLAJWGYNOEMTFPAINPFXLCCOBGKQPGMIDSHBBWEHUXNHULGXMDHGCNZOXPONVYXNWVUHWPMSSTMWWGAKNTLFMMCUSXZFHYTTZZKQDZVNNSZQPAYJRIFRCCDGKWEJQIVLPUSRGKRPIXQAEXOJXTIEAWVADEECAHDLZQBKEMP");
    tmp_tmp_msg_0_0.max.assign("NHTFXIBTVQPJWLYAGVMWYOGVPLQMNCOCOFUGBEVPLVPEZRJWKCAWTHXDNWKHIDGLRQOZTBFMYLBSWTAPFHNADPRTCVBZFFZWGBIRAQXNTRKFWKMNVKQZICC");
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
    msg.setTimeStamp(0.5086283647198685);
    msg.setSource(19746U);
    msg.setSourceEntity(98U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("VPHSQZNNCARHDZKHEDWDYGGNZWYUTAHQXNUQMLQDRLFLKAVMCXIVOVNEFBRFXTVXJURWBLNVDKHMRTSUBWBORHZZPZFPATQSJGNOAFRGJAJMRNMPILPWCRQCKYAYUDTVBGTUBWELVOIVATOOEHVKYWFXOINQXTSLCQIUCSFSJSSMGOZZCGPBXSMWYAKIZBYTJDSUEGYJWEFAC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AFFAZXALWVGLSTXEMCORCIHIEERQVYRGEPZLXXSGWLGRIXWMIPKRJNCDVIKTHIJIUHEMNPPZFAYOYBGMPJOQUXEDYKJHTBRKGRJLVFKORATQCMSDQCOCFRQBZRFKZUQMIYVUOAWANNTSUZFHLQBDVNSBHPECAWD");
    tmp_msg_0.predicate.assign("JREVMFLXTJFFPKJPVHQCWCJYWVUWJIEOFWFAXMRJSBNYQQGNCWEWTGSPWPFJJJGURWQDNTALBOTELKMKVNHCOAANABXTKBPGDISHCAMTBPXIUFRZYTFOBZVTIYBVNXNARUPXOHXYZKDDHIQIHRJPUSYMGSZKUORWVXQIIRLOQULOMKATMMHCLMYHLGCDASZQLWQQDVYXGZSCFG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AOLFJYXCLIIQBTZWMMGIGBTSGJKBVLZLRAUSOWECAAXQRJAFCKXHEETPRKYDCJHPBPJZXNWMYDQHRGTCUJFYWXVRPNMOZKZSNFPECASKOFPSLNMCSHEIUHQWHJAZSHLIRMCYKVTOTYYNVOYZIMNTAZDHHANXBNSQEGOUBVOTHSVFCXWLIBDXRDJLKDBEKDPWIVBQUKDMLPCFUVEFMGWNDPFPTEGUXIZMGFGU");
    tmp_tmp_msg_0_0.attr_type = 217U;
    tmp_tmp_msg_0_0.min.assign("VZAJWTMAFIXJNYQILJZMYNUZHROXBLMTYXVGQDQSROWEJLYBVHKKKAIESFHJIAGWDRGRANETFNAGZPDQMZRKDLCVYIXXNDTDBNXHSHVMDQYMMZVOLBCJGNHTACTLPKDYCAQKZCIUHOGCAQFOJWPFSVKYDHKFJPRWVBOJNONPG");
    tmp_tmp_msg_0_0.max.assign("DTYWKJNDJLCDAKEGWYYVSSTNUBLKXMHARZHYZGAYONSSRBQVNHMWHZCXCXDVQTIXDFTXAMUPVXTKJGSTIPVEFFQELIQMEQZCUPCMUIJEDGBCQJHNPHVYZNFMUICBOOPPGUKWIIRNJYRUCKBYAUBPZSHSIZMTLKAWOMWANNQBJFNIEPSVJOEWLGKQGOPAGEKRLEJDBSRDTWOPWYHUUCVYRXQBFWLZRSMRGORHFXXCLMAVOOZHEGXFTJDZ");
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
    msg.setTimeStamp(0.9701021862014871);
    msg.setSource(40556U);
    msg.setSourceEntity(61U);
    msg.setDestination(31173U);
    msg.setDestinationEntity(92U);
    msg.topic.assign("VPZOTYNXTEWDHKSXRMJTOHTHUGRRBWTAOEVVBILPDRI");
    msg.data.assign("VPLXZXKWIOCHEMMACBIPWZPFKUEEQLKMXVWRIHIXTPVGPZQIERVQGRENXOJUQUTALCDEMIYMYJCSGVCQUSMFISZHMUVJYNBXESCBQELL");

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
    msg.setTimeStamp(0.29546684031650716);
    msg.setSource(25563U);
    msg.setSourceEntity(237U);
    msg.setDestination(3628U);
    msg.setDestinationEntity(65U);
    msg.topic.assign("CQPNETDVKAKVWFHDIPHEIGKSWXSULYLKEYBGVSSTWNUUTHODXAVGXMOXJUSOHQNLWPVBUBMIRJCKGMQADWCJZEIYHZZTPBTXTMXYCJGFS");
    msg.data.assign("XIQGGWAZSVACGLYYHCTIXBFWIDEZBGPNIERLEVETRMRYUJDPQFBDNZYCWCSSJFLEWLUMRCUJVUJPOZJVWLQARMDOCREAZMSVWHMWOLFYQYBMVXQGJLZFFIXKNTZUETPYQBGDSGTIFQXHRHYTXDJBWONMJUKJKBTITWMRDLUSKFVDXKQNYUKIZFECAABSIKUCNKHPHBTZKPXODLMLTGFKNHO");

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
    msg.setTimeStamp(0.2695646430623544);
    msg.setSource(5359U);
    msg.setSourceEntity(27U);
    msg.setDestination(6864U);
    msg.setDestinationEntity(124U);
    msg.topic.assign("MLNFCREMFZFDZMXNCOBNDSUJMNXPRSDSLBMIKDSYBVEVIGTZULCGKTVVGNWJOKFOQGGGAGPHCFKEEVZVUIKMFJPFUSQJIQQRQULRJPEGICQHVIHHNXYAEZLI");
    msg.data.assign("CRQDBMUDOPZKVZMBFTEJPLUJK");

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
    msg.setTimeStamp(0.34170105529158734);
    msg.setSource(44684U);
    msg.setSourceEntity(245U);
    msg.setDestination(19510U);
    msg.setDestinationEntity(15U);
    msg.frameid = 61U;
    const char tmp_msg_0[] = {22, 39, 7, 12, -61, -89, -30, -51, -107, 28, -87, 108, 46, -115, -43, -82, 101, -26, -96, -109, -27, -88, 97, 16, -24, 125, 68, 37, 120, -6, 98, 81, -28, -75, 67, -51, 15, 81, 29, -28, 52, 31, -69, -126, -116, -105, -102, -48, 51, -14, -102, 93, 56, -65, 21, -75, 125, -47, 21, 98, -122, -1, 126, 25, -66, -33, -25, 37, 101, -88, -101, 51, -34, -48, -38, 12};
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
    msg.setTimeStamp(0.358565442562474);
    msg.setSource(41050U);
    msg.setSourceEntity(40U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(180U);
    msg.frameid = 69U;
    const char tmp_msg_0[] = {-38, 26, -12, 86, -3, 4, -106, 16, -28, 99, 106, -121, -117, -80, 41, -33, -60, 106, -86, -122, -52, 37, 118, 85, -88, -115, 57, 120, -71, -11, 108, 56, -3, -78, 44, 115, -82, -41, 58, -100, -109, -113, 76, -54, 66, -84, 3, 125, -91, 110, -83, 104, 7, -58, 113, -32, 125, 117, 4, 121, 86, 122, -56, 100, 66, -44, -24, -101, -112, -118, 70, -92, 90, 17, -41, 88, -110, -8, 82, -68, -116, 35, 99, 7, -67, -101, -55, 27, -63, 8, 102, 57, 29, 71, -91, 24, -58, -50, -43, -2, -44, 84, 17, 42, 54, 105, -26, -56, 26, -10, 118, 22, -110, 2, 118, -89, 37, -128, -70, 12, -5, 80, 36, -40, 42, -11, 88, -124, 65, 54, 113, -60, 87, 41, -85, 84, 42, -128, 6, 8, -90, 52, 114, 42, 40, 5, -30, 56, -19, 29, -72, 60, 0, -22, -117, 106, 38, -3, -120, -31, -53, 106, 73, -9, 32, 102};
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
    msg.setTimeStamp(0.26542442100313757);
    msg.setSource(42737U);
    msg.setSourceEntity(48U);
    msg.setDestination(37127U);
    msg.setDestinationEntity(72U);
    msg.frameid = 109U;
    const char tmp_msg_0[] = {81, 58, -39, 12, -86, -115, 98, -77, -51, 68, -96, 87, -19, -80, -36, -64, -13, -71, -89, 100, 27, 5, -43, -5, 44, -11, -106, -119, -45, 100, -63, -10, 60, -72, 98, -76, -126, 57, -37, -65, 122, -127, -112, 82, 103, 7, -76, 85, 27, -110, 117, -26, -120, -17, 24, 22, -68, 77, -110, 90, 14, -61, 69, 60, -34, -54, 67, -94, -82, 77, -52, 87, -36, -85, 53, 65, -96, 39, 112, -126, 2, 44, 49, -77, 105, -100, -88, 44, -128, 68, -123, -93, 36, 106, 114, -54, 46, 118, 107, -43, 22, 1, -94, 63, -95, -12, 69, -122, 37, 97, -8, -118, 82, -103, -73, -94, 52, 31, 45, -102, 5, 3, 90, -7, 91, -109, 59, 42, -47, 16, -20, -59, -64, 49, -58, 37, -87, -30, 124, -30, -103, 95, -71, -18, -6, 9, -70, 119, 111, 109, -70, -95, -98, 41, -53, 14, 68, -53, -36, -114, -63, -32, 48, -40, 84, -76, 69, -128, -18, -84, 124, -119, -120, 119, -42, 94, 21, -41, 108, 16, -11, -92, 107, 112, -111, 118, -85, 48};
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
    msg.setTimeStamp(0.13666199604689544);
    msg.setSource(56292U);
    msg.setSourceEntity(23U);
    msg.setDestination(19994U);
    msg.setDestinationEntity(38U);
    msg.fps = 175U;
    msg.quality = 14U;
    msg.reps = 93U;
    msg.tsize = 200U;

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
    msg.setTimeStamp(0.2915654879603834);
    msg.setSource(25875U);
    msg.setSourceEntity(31U);
    msg.setDestination(29859U);
    msg.setDestinationEntity(8U);
    msg.fps = 34U;
    msg.quality = 46U;
    msg.reps = 174U;
    msg.tsize = 2U;

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
    msg.setTimeStamp(0.04540064992667037);
    msg.setSource(46755U);
    msg.setSourceEntity(12U);
    msg.setDestination(65241U);
    msg.setDestinationEntity(199U);
    msg.fps = 190U;
    msg.quality = 44U;
    msg.reps = 199U;
    msg.tsize = 55U;

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
    msg.setTimeStamp(0.23454297047890638);
    msg.setSource(4381U);
    msg.setSourceEntity(194U);
    msg.setDestination(13054U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.7764029525628297;
    msg.lon = 0.4721628754760028;
    msg.depth = 29U;
    msg.speed = 0.6046544669228645;
    msg.psi = 0.5108397605821559;

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
    msg.setTimeStamp(0.6633177715623277);
    msg.setSource(12618U);
    msg.setSourceEntity(9U);
    msg.setDestination(24010U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.6320131175352173;
    msg.lon = 0.31218444701586867;
    msg.depth = 184U;
    msg.speed = 0.24857754812582722;
    msg.psi = 0.9362702147292302;

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
    msg.setTimeStamp(0.9271322550408146);
    msg.setSource(6548U);
    msg.setSourceEntity(160U);
    msg.setDestination(23501U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.5963327840059206;
    msg.lon = 0.09481583043827402;
    msg.depth = 253U;
    msg.speed = 0.8495318170224072;
    msg.psi = 0.6368351721113927;

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
    msg.setTimeStamp(0.9865952897078084);
    msg.setSource(58436U);
    msg.setSourceEntity(239U);
    msg.setDestination(3533U);
    msg.setDestinationEntity(183U);
    msg.label.assign("VKJJCSADSDDYMEUUHLLGXHNGFOMATLZNHKKIRYPWOEOVRZHFZPLUINYACWYISJUSPFGFWEMBECIMUBOWHZTROZBFRMQFBRRKFQWWKBUCLYFPUITTPLVJXTEVCMHCTIXXQRVQOLBBNMCPNDJYZ");
    msg.lat = 0.2179798596889121;
    msg.lon = 0.18457411263204726;
    msg.z = 0.9311373752999594;
    msg.z_units = 1U;
    msg.cog = 0.5646637860725879;
    msg.sog = 0.8453132317598241;

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
    msg.setTimeStamp(0.7673395585258359);
    msg.setSource(37324U);
    msg.setSourceEntity(196U);
    msg.setDestination(62600U);
    msg.setDestinationEntity(140U);
    msg.label.assign("NMTWHEXDEMAASNCCNQJBDSFTSVXWZSYBCDJFBMIEYWQAAAIKKVEYG");
    msg.lat = 0.8878067144915887;
    msg.lon = 0.4101187733323163;
    msg.z = 0.4701092012835819;
    msg.z_units = 65U;
    msg.cog = 0.7363814292040296;
    msg.sog = 0.19916779588010325;

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
    msg.setTimeStamp(0.8864091946390269);
    msg.setSource(8697U);
    msg.setSourceEntity(240U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(42U);
    msg.label.assign("TNRTVAOFHGKGUPTKUYVHQCDRIBUECFFDSWLFXLRCXTGRQQVNQGSITOZJYGAXQYVNLVBKRULPWQRAJCIHYWGFONLRDONDGZCAHHAUZCVACSPVJUTBSUJXLZKBNEPSMEIBBOXXPMNQDHSCBIAZGKYNKMYEXHNJDQMRTTEFCUIQ");
    msg.lat = 0.5510643173663548;
    msg.lon = 0.35923371016524497;
    msg.z = 0.5228202740650143;
    msg.z_units = 189U;
    msg.cog = 0.8135878577722382;
    msg.sog = 0.7524844538442363;

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
    msg.setTimeStamp(0.5566372587024359);
    msg.setSource(65494U);
    msg.setSourceEntity(86U);
    msg.setDestination(46595U);
    msg.setDestinationEntity(217U);
    msg.name.assign("UZTSPIXTCHKEXZAKPPDGLTNGRFPCPBHZDXXUHTWCJIVRDRIPEHLOQM");
    msg.value.assign("RGUMNVAXCKIQFCGIWFCNPVMVRFWIWEAKEBLHEEXBLNYYH");

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
    msg.setTimeStamp(0.5103309833339328);
    msg.setSource(21730U);
    msg.setSourceEntity(5U);
    msg.setDestination(55247U);
    msg.setDestinationEntity(135U);
    msg.name.assign("EKZYMYBIZIHMCJIMWXFQILPKRARZAHERIYXWCBSPOTFHPFWHHXUYAHXBDWJBCUOGDBHSAKPUYJRJCSPPNOJATN");
    msg.value.assign("LGXOVYZAKSSAERJCHOYFXWZNAMNUENVWDGPKYAYNPIJEGOTTPRVXXXPFTWSQICFBNYGTFQHLBTIELVDVLCZXGIPGQDRIENIKWISOGXLRMUXBTHLQOJRBOMELSAELQ");

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
    msg.setTimeStamp(0.10804025835467368);
    msg.setSource(21583U);
    msg.setSourceEntity(14U);
    msg.setDestination(6975U);
    msg.setDestinationEntity(117U);
    msg.name.assign("FHMUFKMZZPJODNCMFTCATJUWLNHXFLCTZPAFGYZJMQCTNVDEDBIUEKTWGPZVQLDGJROUMEJYLSUWSQQBGXKTHPNORSPBXLQPBGSFITCWPPBVINFJEYSLFHSZCQERBAHCVCAXXOGGRVKUVABKOTKKRAJUYLVWZIWXROVSD");
    msg.value.assign("QKDRHJSNNLRPNZEKTOMJQJPBXQLGXKWHHQEPFTMHXWWFFZQMTSYULFJDDHGJOJQTFCMBVAPIBWFNNSJZESCWDVDLZYIVLMADYVMJEXZIHYPXUGAOWGSRTUEVSNMCGCTOJCBDOPTKTOSKBZYHRFIVEAUPNCTQGWAIJUNVRXOEMQKDYIHYVKRCBBRRFLUGQI");

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
    msg.setTimeStamp(0.6748557596895266);
    msg.setSource(38043U);
    msg.setSourceEntity(116U);
    msg.setDestination(38077U);
    msg.setDestinationEntity(151U);
    msg.name.assign("DLWRPCJHHZPZHTGSQGADHCSVZFXNAMX");

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
    msg.setTimeStamp(0.779185086611915);
    msg.setSource(61655U);
    msg.setSourceEntity(133U);
    msg.setDestination(40318U);
    msg.setDestinationEntity(171U);
    msg.name.assign("UEHORPCRNKMZARDYJUZABIVKOBNVUYYEKLHGQUFCSBGCXPXTKFDYSHQBZVONXBZZSGOAMPUWDWYFZSDTEIHJAEQCWVCLHHMLRRUAGPLQQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DZGFWYFYIEEKOAOBG");
    tmp_msg_0.value.assign("PSOPMZUMNVFHDXANEBQWRWDJWNTSSYRWTBXTCUJRPUC");
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
    msg.setTimeStamp(0.3247140635866107);
    msg.setSource(12478U);
    msg.setSourceEntity(227U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(80U);
    msg.name.assign("WUOTQJIECSUZBQWRVLJWDVUYNFPXCQIDLHAPEUQDPGHCGZCTRVBBLGFYWLOKRMHKXCJFVCQPRAHLOSHWOQZMUIENAKTHVXIGOYLLYB");

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
    msg.setTimeStamp(0.641925051415128);
    msg.setSource(50706U);
    msg.setSourceEntity(149U);
    msg.setDestination(44549U);
    msg.setDestinationEntity(62U);
    msg.name.assign("NUBAYZSRKHPOBSAAMOKXGGEDXISSMHTKQYJQMGAGWHETEPIQADMV");
    msg.visibility.assign("CZUVXXZJNWWAVMBFNOGYCPCFMZOTQXPWDTDAWARQWVDLLYSWYVEAVPHCLZSIKCKOVERQEFNRLKHWJFZPYTBHEKONSHIRMGODTUYNKTRAMWKJTVYSEFUDDSBWGIXFFUSTPMUDKOISAUZGDCIFPMLABHIGIHRKOEPNEEXYGXXSBGURLKDQIOPQDALAPSHLYZ");
    msg.scope.assign("ZEJQRNYVNCOAQMZHSPMDHWIVZAPBNZLXFRWCZBGNLXKGDCFHIT");

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
    msg.setTimeStamp(0.09263141210815617);
    msg.setSource(7434U);
    msg.setSourceEntity(89U);
    msg.setDestination(14909U);
    msg.setDestinationEntity(140U);
    msg.name.assign("ZEQTNMQTRUEMHLJRYSJIX");
    msg.visibility.assign("YNBLUVNTFJGVWRQBHELEHEZTTXQMF");
    msg.scope.assign("LOAZDWKCMXPRHJGSTEHGBHIFGZJNIUSNMWPPFUFFFISVAICIVZOMJGAFDWUEXCHPEQERDYODLXOOBTQCAEAOGGKDLJVYBRDKBHHSWQHYEZKCWITZKRMAAJCDUEZNCULDPFVUSRTXSUWWKMXRXBPNOLMQXJIPCQNTPASJGAQWQETMSNYDRLEFHOBOVUUOYVIVNMUMWGXRBVIJPFALZKXKKGKRPIYGZEBJYLNJCBQYSCVRZXL");

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
    msg.setTimeStamp(0.9648310727625785);
    msg.setSource(13845U);
    msg.setSourceEntity(125U);
    msg.setDestination(2061U);
    msg.setDestinationEntity(22U);
    msg.name.assign("VJOCXNFRJGHGVESFYOTXMLZYPORYAXPJYFVQTIGWDEOW");
    msg.visibility.assign("EJCEDLUVJNAANUSPNMJFLPDMBIKVWMXGKSTFIHBMOBQQDHAXAQFPRZCYBBWUEJAYEGWDMCPORZAQZCKDZATQJTFCELAXDJBZOQZJCSGRDQITUDNBCWFVXHYEFXCYGMKSNPIYWIYKTIOFGVILXWLSZFOLOURKBTUTGSMJRIDPFDFLRXPVHLNYEGOVSRGKXGHGQIRHYYTAMOWL");
    msg.scope.assign("IMKESGPPFGJGJKCCWMUMHNZUWDDRKFTPHCHGJXNSYIEWFAKCAJBRVODBWPUVNXRFBYJSIOVCHDZDVMOZGEOGUHFAQOO");

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
    msg.setTimeStamp(0.6940127422304003);
    msg.setSource(11801U);
    msg.setSourceEntity(23U);
    msg.setDestination(57822U);
    msg.setDestinationEntity(212U);
    msg.name.assign("XGSZMFNBRQMCEJHCQPOLKROTXBTOFNVWZNYOHGCPZIASMCKVHQZVWEAIIYKLRETOSPIGVDLPNHTFPREHKUPLNEBVYFYCUYKIJPTJXJNIWBOATFRVJMPVZKFVAIHMDYUDBAMLCQZWVDJJLUESEHXSRAFOSUHUBQVXRCKOMRIQSQLXBBE");

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
    msg.setTimeStamp(0.3648040151400622);
    msg.setSource(13548U);
    msg.setSourceEntity(15U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(238U);
    msg.name.assign("HZYEMVYOHJFFHSMTBDSSCKCPJEODQKGUOCNDLIYNUVSPPSRYUHOLHNATSYGTEEGVCTTVEOQYESDNZTIUCFWIDOLFPBJLUHGENYSCOKQOPMZPBXFMDZBKZIRUXKLILXXWRZATKJNGCGJGRCJTUKZXBBBHZWEWWFXBAYJVVAQGPHKKOAXMHVQRQDWFSLCGRNLALUPDTJGVEHDYPEWIUQWFWSJXN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZMIRJDZREHFYDAJBRZ");
    tmp_msg_0.value.assign("GGAXVZRSLJXKUQWGZCKTCUKWIPSXNQKAYLQNQWALSXUOETCWFENDYMOWIHWDTCNEJUFXGVGPHAQCOGHHJNMYRHCFVTLOBOMBA");
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
    msg.setTimeStamp(0.3855914795738056);
    msg.setSource(39629U);
    msg.setSourceEntity(207U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(152U);
    msg.name.assign("CKTQUBMCRWVKLOILEBDBGXCXPELOMWPJZFZOJQYGTLZBAIYLWPMHLBSZKFXRVCNIEVKLTERDOWNHYPSQPIUXMBQYWHXMWFVBZSTDVCMARNXQUTPGCGAXHEHZKNKPCOEFIJOWYFFEHLGASBMCZVKZQTPIDDTSAGQAJRIWKYVNSXYEABRYUDTJONQDFXJWAQNOIDSTADYHFLPHS");

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
    msg.setTimeStamp(0.8792444467953255);
    msg.setSource(63632U);
    msg.setSourceEntity(230U);
    msg.setDestination(41134U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ZBXHRFFBDGZCNWGELIZBEMFGCXWBHTFJMCYSACNYOLJURPIJHHNTWNULHWOESIMOYIBJGUQTABOGRQLNLGOKZSLVVIQZPZKUPDALEZSNUUIUHQWLXTRFWNODDBHIKSQPAEHCSCGMNZERTEKAVUOTRMBKEVAMEHMIAYTTHPK");

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
    msg.setTimeStamp(0.13553283516585324);
    msg.setSource(44466U);
    msg.setSourceEntity(35U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(45U);
    msg.name.assign("NHQYPCPIHZTXSRAALSWEYJDVBAFWXVYERDIFWFGSANOSLKZRBFXCVBGATIUOUNQIIFADROLPSFBIHPHXYQYZKCQBBZCTSHGGDNLRMLJJNWBTPUQENZAEKEPJKKBORZOUWCPWJEFRXSKRPNTHEUBGMCAXN");

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
    msg.setTimeStamp(0.29230881278162824);
    msg.setSource(27093U);
    msg.setSourceEntity(230U);
    msg.setDestination(42421U);
    msg.setDestinationEntity(187U);
    msg.name.assign("RDZXGIACQMCZDFYBBXFSPPDICGLQERHYTPMGDVGMDPOWUCHOVJDKMIXULWIJIYIYMPLNAXXCIAWKOZTIRMWPOLRSKAZBLQTTSMYKBKJXTWHSWCSARGUVNPUWDDQBQSVFMRSEKTEJEERNFWBLPZPTOBNVJYVVWJPF");

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
    msg.setTimeStamp(0.39593547803294027);
    msg.setSource(44269U);
    msg.setSourceEntity(45U);
    msg.setDestination(10186U);
    msg.setDestinationEntity(238U);
    msg.timeout = 2237202325U;

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
    msg.setTimeStamp(0.2871976341955649);
    msg.setSource(25362U);
    msg.setSourceEntity(115U);
    msg.setDestination(58546U);
    msg.setDestinationEntity(229U);
    msg.timeout = 353874504U;

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
    msg.setTimeStamp(0.579212244375444);
    msg.setSource(40213U);
    msg.setSourceEntity(38U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(203U);
    msg.timeout = 3644173519U;

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
    msg.setTimeStamp(0.1986919570973643);
    msg.setSource(51059U);
    msg.setSourceEntity(117U);
    msg.setDestination(47790U);
    msg.setDestinationEntity(146U);
    msg.sessid = 1674217997U;

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
    msg.setTimeStamp(0.28097163224319477);
    msg.setSource(12138U);
    msg.setSourceEntity(20U);
    msg.setDestination(64934U);
    msg.setDestinationEntity(135U);
    msg.sessid = 3657461407U;

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
    msg.setTimeStamp(0.6714321394309649);
    msg.setSource(9566U);
    msg.setSourceEntity(73U);
    msg.setDestination(43229U);
    msg.setDestinationEntity(228U);
    msg.sessid = 2149974226U;

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
    msg.setTimeStamp(0.5510587063072203);
    msg.setSource(32733U);
    msg.setSourceEntity(251U);
    msg.setDestination(16620U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3519996498U;
    msg.messages.assign("RJLZKQGXCKCIVDJWFAMDXBSFAOWZBCHXPSQGRSWARAZUGZFHIBS");

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
    msg.setTimeStamp(0.28458725308206534);
    msg.setSource(64063U);
    msg.setSourceEntity(129U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(54U);
    msg.sessid = 371690077U;
    msg.messages.assign("UBNFUYKUZJGMVESSXJPKXCFLIUJEFRJGNKGWOSMPQFCXEGRCZORLCYMOHWJQOMPDPLDFMVUNLVLNNGHHOTTOUITKGFWWLVPZYKADEJGJGQBRHMQGXQDSIBAYPMPCEMZYNVDDLROCXBYBAVWLSZTYWPYNSPSXCUUCRSIHDRDZRHEVCEQWDAAOLIOOFNWPHYBAXVMEWYBNZIIWSK");

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
    msg.setTimeStamp(0.23220565459914533);
    msg.setSource(48637U);
    msg.setSourceEntity(157U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(119U);
    msg.sessid = 3921898068U;
    msg.messages.assign("ETAFJREGBWHCEWLTUQKWXNKDJQVHCXSENSKNLUEAKVVCHPMOYHIIKIGCUUBDAKGDOMXTOQRZFWVVJLKRHROIIZJZFYOXPZKQELOFMOCYBXSFUSZLGNNLPTYUJIOPBXTTJZHPECPDVAGWCWTSWNG");

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
    msg.setTimeStamp(0.19849137525008487);
    msg.setSource(2266U);
    msg.setSourceEntity(21U);
    msg.setDestination(60624U);
    msg.setDestinationEntity(247U);
    msg.sessid = 1764200278U;

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
    msg.setTimeStamp(0.9663700153497904);
    msg.setSource(49497U);
    msg.setSourceEntity(243U);
    msg.setDestination(63033U);
    msg.setDestinationEntity(121U);
    msg.sessid = 2342792773U;

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
    msg.setTimeStamp(0.32477954680674925);
    msg.setSource(9843U);
    msg.setSourceEntity(128U);
    msg.setDestination(33549U);
    msg.setDestinationEntity(128U);
    msg.sessid = 3330068330U;

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
    msg.setTimeStamp(0.05079564653154578);
    msg.setSource(15710U);
    msg.setSourceEntity(38U);
    msg.setDestination(51224U);
    msg.setDestinationEntity(172U);
    msg.sessid = 1107991744U;
    msg.status = 247U;

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
    msg.setTimeStamp(0.28872050428302765);
    msg.setSource(6751U);
    msg.setSourceEntity(144U);
    msg.setDestination(49767U);
    msg.setDestinationEntity(47U);
    msg.sessid = 220589694U;
    msg.status = 33U;

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
    msg.setTimeStamp(0.5769525478239163);
    msg.setSource(41871U);
    msg.setSourceEntity(142U);
    msg.setDestination(39396U);
    msg.setDestinationEntity(163U);
    msg.sessid = 468410993U;
    msg.status = 111U;

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
    msg.setTimeStamp(0.7872484561765022);
    msg.setSource(30038U);
    msg.setSourceEntity(9U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(31U);
    msg.name.assign("IWOIHFQRNRBRCTRFONXKAQDNIYYBXZWIMMQAKBLYWEDCBAGCEFBWDKNYTKGMXGDHGJAOLZIITVYOVHELVKLQFLMNGUPFTSPBSBNXJELZMXSBPYXIJEPMEKSFKTECYLJDDRUTUPQOPHUSCGEOVHWQCERZCYBQJUDLTAOPGYUQ");

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
    msg.setTimeStamp(0.2656387261629095);
    msg.setSource(53090U);
    msg.setSourceEntity(172U);
    msg.setDestination(5652U);
    msg.setDestinationEntity(137U);
    msg.name.assign("KVOBYGLMISLMBWPDWYNPGANZGFUQJRIMDJHNPYNIKIUWTDMQTQCQMLQGUMGXLBINYUYCCDXJABIPMFWTQXJASSEREDAPHCHEWVHLLZSCENXSOKGWBUYTGAESXJUGLCDUQHZZHOUJEZUOEJOYVKPBTXTPWVKHVJDTWBRFOYFFZFRDKTKZFRIGZVLJCOMSHXLVPPGBDAMAZCQROKFZFVRPVRRONIYKBWEBUDWQMSEQLXHSETNIYAIXCOVXH");

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
    msg.setTimeStamp(0.009428071712460406);
    msg.setSource(26846U);
    msg.setSourceEntity(161U);
    msg.setDestination(26519U);
    msg.setDestinationEntity(25U);
    msg.name.assign("GIRVXSYUQHEGSFSYYBCWEHYUTCDTWCADDHPSLMBFFCEMFJVLLLIITWOHWMGVPKISWGICUWCPXHLIYIJXUXRSOWIYRGZJFPPWRGYHDANGAOHYAQHERLZCCDDGDJNUQCXJTFBJQPNTREZSVJAZROXXNTRNROKVKOZBZZIFBTDOOHNYVKGFPMLQQJVYKNJAEIXKQBNMAUOPQVRWOHXMMSMCQDT");

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
    msg.setTimeStamp(0.19113977590831965);
    msg.setSource(58800U);
    msg.setSourceEntity(9U);
    msg.setDestination(50840U);
    msg.setDestinationEntity(119U);
    msg.name.assign("ENOKLRDGYOQCMXZBREBOMCHZQFKDWMHWMWKFJSXCJWXCOPWWWFXGHZIPWSYNPVVTVSCPJYMB");

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
    msg.setTimeStamp(0.700455642434717);
    msg.setSource(21591U);
    msg.setSourceEntity(66U);
    msg.setDestination(11141U);
    msg.setDestinationEntity(69U);
    msg.name.assign("QRBROVKXMAESVFYKXKDXLSLDANZUFTVNASCPYEHHZYKDS");

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
    msg.setTimeStamp(0.7724017681150915);
    msg.setSource(358U);
    msg.setSourceEntity(61U);
    msg.setDestination(26132U);
    msg.setDestinationEntity(9U);
    msg.name.assign("CZXHCCLBRLYAFCJRDNOCRWEXWEGBIYNSBXSUUGXBMGWIRIROPMNTCKWPYJVSZDMKHGJNMAODLNSAKOJHRKBZJMDDXPPKWSAUSUQPREKHLYJANTWCQZFVOCQIGZQDBUHQLJDPNSVFGXTHPYXJCEOZRWTXWOGBFSCBQTHUVIGVRAEVLNBPPHYIFNGUXREAKDVEIVNKDQUVVSIHMEOMMOJOMIZEYBPTFFFATLKHDQ");

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
    msg.setTimeStamp(0.1054373570692646);
    msg.setSource(16453U);
    msg.setSourceEntity(44U);
    msg.setDestination(21423U);
    msg.setDestinationEntity(15U);
    msg.type = 238U;
    msg.error.assign("DYAQMRWPOLCHUXHYRREFWNTFAGYYGHZIBVULWMXPBKBBKJQBJHMIOCPXUDQKPJOSKMIXWIYJQWRDXCODUZEOLLKGEMILRAFBCFNDSNQIPACVFQHSNDLTTOFVCRLTXHIBEZBKTJXKXIWJVUNPTUOXNWPRGYVFNZVVJVLASUOZCGMJFYVZQPUYODFFJLETYRTQHSZQHBVMLIRKUSGHNESZC");

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
    msg.setTimeStamp(0.6099069573161788);
    msg.setSource(48521U);
    msg.setSourceEntity(158U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(198U);
    msg.type = 113U;
    msg.error.assign("POUEKYEEIVKEOZCAZIKNJCIALFFQMWCQPCTPTTDKYGYJOEXCUCJZFZBKXKKSOTZCMTIIASGHBHDGQHDTLBIPSDXDPOIUXGYWRGPIADILUJXUDARVGRSLNAKXPARUUEJHSGWNMWPQTWLWV");

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
    msg.setTimeStamp(0.5685954045834636);
    msg.setSource(51045U);
    msg.setSourceEntity(201U);
    msg.setDestination(31939U);
    msg.setDestinationEntity(224U);
    msg.type = 33U;
    msg.error.assign("YNHVLAGNFFXDJSUPZGUWZLBMJEQACQGKKPDUTUWOSAKNXVDJFNZMMGHXACIHIYOGEQWNEJWDRKBXBHEWGGEPRYL");

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
    msg.setTimeStamp(0.6882690879439335);
    msg.setSource(42490U);
    msg.setSourceEntity(138U);
    msg.setDestination(62375U);
    msg.setDestinationEntity(201U);
    msg.seq = 7900U;
    msg.sys_dst.assign("BXNVKFFLPNELFYEZTLSUJBLAGGEOMYZDQNLUFUGPXCABKABQNEKMYHKCDQXOTUDSSRGWWQJWDRMMRCKZYBCMOUBYOZGIBFTJBYXHBZNXZVPCURDVTOUPEXIJTKDRIODAQOHMGRJHZGILFMJFRIAAWIZHXWK");
    msg.flags = 78U;
    const char tmp_msg_0[] = {44, 22, -78, -37, -17, 86, 71, -116, 92, 123, -71, -46, 37, -121, -70, -125, -14, 36, 92, -84, 27, -90, -1, -100, -115, 116, 50, -103, 0, -40, -67, -78, -67, 94, 94, 60, 90, 15, -32, -4, 94, -87, -94, -127, 0, -8, 60, -43, 84, -32, -73, 11, 69, -118, -21, 78, 8, 121, 67, -17, 69, 25, 16, 41, -66, 82, -94, -43, 93, 71};
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
    msg.setTimeStamp(0.3822374086811472);
    msg.setSource(54431U);
    msg.setSourceEntity(222U);
    msg.setDestination(65526U);
    msg.setDestinationEntity(5U);
    msg.seq = 25645U;
    msg.sys_dst.assign("KRTHLTRJIDUNORCVBCHBIGBNVGHRIESHFVMQXPZWOESACIXGALYGKSOZNACXFCFPILGWKEBZQNAENTWSCMZGLYSFOBJRQWHSPPFDKVWIIYYUBXRPURYZAUXXCTVDMECIRGZIQOFQFTSOFTBGZBXUDLQJTAWYIUZBVJLKWJUPTJAEFCWYJHPNMVLVAKDPGXG");
    msg.flags = 161U;
    const char tmp_msg_0[] = {-1, 123, 118, -79, -10, 62, -35, -114, 57, -109, 69, 26, 2, -54, 22, -122, -3, -16, 94, -97, -84, -107, 120, -43, -62, -10, -39, -53, 22, 41, 82, -65, 40, 101, 42, -9, 59, 57, 5, -51, 110, -90, 120, 113, -65, 81, 84, -33, 91, -71, 61, 0, 116, 27, 93, -43, 124, -1, -44, 43, 49, -121, -49, 120, 91, 51, 88, -108, 25, -8, -61, -45, -3, -70, 48, -3, 56, 40, 65, 4, 23, -15, 4, -113, 6, -80, -74, 40, -31, -5, -29, -94, 30, 52, 47, -16, 26, -33, -64, -52, -84, -70, -10, -59, 73, -15, -8, -58, 6, 104, -23, -68, 44, 52, 41, -42, -104, -49, 58, -105, -122, -126, 61, 99, 112, 12, -107, 72, -99, 102, -45, 121, -79, 111, 42, -65, 89, 113, 4, 0, -124, 26, 0, -85, 68, -114, -41, -100, 98, 84, 71, 92, 110, 106, -102, -36, 73, -124, -71, 59, -109, -94, 44, -89, -113, -80, 125, -118, 57, -74, 103, -127, 74, -64, -90, -41, 53, 11, -91, 59, -97, 95, -11, -22, 82, -117, 123, 51, -103, 49, 120, 103, 9, 43, 101, -5, 47, -35, -49, 90, -24, 31, -26, 125, -4, -27, 11};
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
    msg.setTimeStamp(0.7585052362215399);
    msg.setSource(14394U);
    msg.setSourceEntity(47U);
    msg.setDestination(36573U);
    msg.setDestinationEntity(232U);
    msg.seq = 50048U;
    msg.sys_dst.assign("LTUESKZKNHFQLGZWJJDKYNTWAXZXDORGNBLYVWWSAFFGTXDPHQEOFIETEDCEODPHFQPEXLZIHNJZFYJJJGBVLRYHMKJPMCUBBCHMBGAOVQNIDSUGTIZFRKMDHABKEBPLIFJSCQUIWQRNQTAIGHFHSUVONISQCUOZVPCXYLYMDYOSGYVXXCEKMEAX");
    msg.flags = 198U;
    const char tmp_msg_0[] = {59, -111, 16, 103, 14, -76, 5, 18, -6, 29, 9, -124, 2, -121, 48, -26, -120, 29, -76, 64, 78, -5, -82, 46, -12, -62, 70, 78, 119, -33, 14, 111, 63, -5, 102, 69, 80, -10, -4, 114, -84, 40, 47, -70, -69, 2, 74, -60, -70, -66, 73, 111, 68, -95, 80, 46, -107, 121, -67, -43, 96, 26, -128, 13, 9, 21, -3, 7, -128, -120, -10, 102, -96, 121, 35, 80, 111, -32, -57, -89, -86, -49, -116, -110, -27, 34, -122, 15, -83, -73, 20, 53};
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
    msg.setTimeStamp(0.7478173493168905);
    msg.setSource(27741U);
    msg.setSourceEntity(88U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(174U);
    msg.sys_src.assign("MSPLBIORHSLUYXENOCPXWKKYPOMBKYMAUFVEMAKAXCUFKRCNUQBZCEHJXHZNGOWZNACQVZDQLXTHRHJYBWOEEIFSAOWGVIOGUVSSODFWHXVBGYDTDFHQJDBJNHC");
    msg.sys_dst.assign("ZMJXRTIRUZXXKVVESUKGTZCRCOGEQXFPQQMLHMNVENUJFBPRDPMDQWPBNCCUVRAOHCRPENNYTYXKSYHOLBNWJTJRNSOIYDTJSXZBCHMAFLQKHDSVU");
    msg.flags = 223U;
    const char tmp_msg_0[] = {57, 7, 79, 33, -23, 100, 56, -85, 44, 35, -51, -17, -58, 47, -20, 38, 116, -34, -113, -82, -88, 71, 92, 15, -21, -126, -20, -56, -116, 26, -87, 64, 49, 0, -8, 33, -118, -41, -5, -12, 33, -126, 94, -31, 52, 91, -45, -60, 21, 88, -6, -121, -47, -81, -71, -115, 58, 4, 63, -35, -102, 109, 78, 91, -115, 57, 25, -18, 62, -13, -119, -96, -107, 83, 45, -34, -120, -48, -87, -68, 61, -101, 76, 86, 11, 101, -87, -122, 94, -100, -88, -37, 37, -59, 118, -124, 41, -97, -74, 57, -45, -4, -126, -4, -61, -115, -23, -63, 62, 12, 74, 72, 5, 40, 85, 68, 126, -23, 102, 62, 13, -38, 118, 24, -108, -28, -15, 92, 65, 93, -90, -45, -6, 14, 7, 107, 77, -89, 29, 111, 75, 88, 50, -37, -9, -110, -54, -89, -42, 94, 7, 41, 33, 8, 99, 114, -96, 28, -40, 64, 107, 4, -5, 61, -64, 106, 26, 45, 99, 23, -63, -49, 119, 30, 119, 79, 41, -44, 7, 90, -44, 60, 23, -26};
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
    msg.setTimeStamp(0.9713832864623659);
    msg.setSource(29687U);
    msg.setSourceEntity(242U);
    msg.setDestination(50842U);
    msg.setDestinationEntity(237U);
    msg.sys_src.assign("XPKKABAKZIUCOURD");
    msg.sys_dst.assign("QSIWCHJQJCEUBURPVICLVLEYZPSZQVMWUMSSYNIXXBAWUNNXPZMIDFFYCRKQQJOHZLEQDFJACDRDOSHVIMGCEPAPFETRIBOZOWGIROANKVSADGCDBVUCMCBPHNDKWJHTVASIGPVEJBXHTKTXKVKGTIORMKWUUPTUBYYDSCTHLQZQTZTKZWGLEEWBXLLLKDFAABFNZWAGVMRWRLHYGNTYBOOOSEJ");
    msg.flags = 157U;
    const char tmp_msg_0[] = {-42, 98, 81, -46, 22, -115, 101, -94, 102, 121, -53, -125, -64, 25, -22, -70, 6, -11, 119, -77, -59, -126, 47, -120, 76, -3, -87, 70, -70, -18, -101, -84, -81, 45, 117, 121, 120, 92, -5, -40, 7, 98, 36, 124, -69, -2, 15, -82, 112, 107, -72, -113, -40, 61, -38, 38, 118, 72, -103, 5, -90, -44, -10, -122, -61, 28, -125};
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
    msg.setTimeStamp(0.26570239759826764);
    msg.setSource(28813U);
    msg.setSourceEntity(218U);
    msg.setDestination(28381U);
    msg.setDestinationEntity(209U);
    msg.sys_src.assign("ZFLIOSOJMXOWYPSBNCUJLCDHQQYORTVPCBLUIFSRXPUVLYFKGQHEJZDMDMPKWGPLWTSEDJKHNRGNBQXTSHVENRSDKKCFQXLTFAAXFMOEUTWJRYGMWDHGYMOTWBIRLPNCIJZCZEAXWNQKTLVVXKVTKADMTBNBKGARYOLZGFRGLZQVCAUOEHQEWDCWGDOIVASXMSVJ");
    msg.sys_dst.assign("XQMFGYNMZZGMZINCFSGVSXLIMUDAUGPHELBQSCIIRXODHZITMCACOTUCAHNDJNKVRJYAUJFDRBJYMPZKSZPWUWBQQWR");
    msg.flags = 23U;
    const char tmp_msg_0[] = {26, -77, -119, -127, -113, -30, -8, -108, -117, -5, 9, -124, -101, 39, 23, -126, 124, 92, -43, -32, 85, 79, 35, 48, 105, 76, -112, -108, 23, 123, -119, -69, 116, -113, -67, 86, 19, 99, 48, 122, 84, -14, -109, 103, 33, -126, -58, 15, 68, 125, 123, 60, 85, 16, 125, -105, 110, 25, -73, 120, 12, -120, 112, -26, 100, 55, 93, -70, -70, 54, -124, -113, -41, 15, -45, -122, -112, 20, -108, -8, -29, 107, 82, -115, -44, 82, -3, 126, 102, -100, 90, 7, -99, 37, 92, 47, 117, -18, 25, -127, -116, 40, 46, 9, -26, -3, 14, -12, -94, -106, 54, -60, 58, 100, 43, 91, 85, -41, 4, 15, -99, 115, 30, 69, 94, 58, -39, 76, -18, 67, 43, 114, -84, 94, 30, 42, -47, -64, -23, 42, 69, -119, 44, 89, -7, 113, -18, -119, 17, 34, -71, -91, 38, -36, 95, -25, -6, -73, -2, 37, -124, 115, 27, 124, 101, -105, -118, -14, -93, 92, -17, -72, 69, -29, 98, 14, 0, -82, -55, -29, -50, -77, -27, 100, 41, 77, -75, 8, 78, -100, 89, -113, 39, 107, 84, -95, -98, -62, -117, -44, 49, 69, -86, 50, 103, 96, 74, 88, -108, -62, -51, 105, -117, 65, -44, -78, 80, 31, 118, 5, -92};
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
    msg.setTimeStamp(0.4300616911950096);
    msg.setSource(11603U);
    msg.setSourceEntity(88U);
    msg.setDestination(36626U);
    msg.setDestinationEntity(44U);
    msg.seq = 12361U;
    msg.value = 166U;
    msg.error.assign("FHLAOABGENNKNDRINCGWVLYYMWKOELPKAAAJYOYYHMZXHGMQIFPNUIVFRHTEMVBRMWFZGDKDNWCTBMVSQJDRXYUKRWDAQMFQZJVMJDIUNP");

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
    msg.setTimeStamp(0.8839641340186605);
    msg.setSource(20981U);
    msg.setSourceEntity(107U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(117U);
    msg.seq = 37385U;
    msg.value = 26U;
    msg.error.assign("IVTJUSNROSKJCEPSEVYZDJSEJWQPXPSRWOQCHBSHAGDQMKUHBVHBDMTDLFWDQTWOCLLYDMPSXPHZONGEFYXRBQXJAXJMKLJJIYCMYEONLGRYUZB");

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
    msg.setTimeStamp(0.835095708672081);
    msg.setSource(58959U);
    msg.setSourceEntity(211U);
    msg.setDestination(13920U);
    msg.setDestinationEntity(183U);
    msg.seq = 28000U;
    msg.value = 222U;
    msg.error.assign("HLNXVVGRPLYDGFDPSJAAICTDRZOOXCPIBIWIAOXMACGSJCOTTILKUASQYIJTHWZTLMSHYUZQKZUHSBCEKAFKOXRORUUQYYKAPNGTRSJGQTXYQCCZEBVNFNMIOAXIQZERQSGMHASCHMIWBRNBBTLMSDEPUVGPLBDOYNWMDVRGVEBVEFIWANZQTNFEEY");

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
    msg.setTimeStamp(0.10854245185598133);
    msg.setSource(41007U);
    msg.setSourceEntity(29U);
    msg.setDestination(2548U);
    msg.setDestinationEntity(135U);
    msg.seq = 17954U;
    msg.sys.assign("KTCUWQZRFLYHOSSBMMZOKNWYSXMHOOFEDVNHUDWCKQEZNFLENZRWUZHVSQBRJGGCJVOAMRCVJZBJVRGBRECISTKFZTLCBEOEPYZVLLLJATBGJDKSILHOJITUXIFZXWVXDNOCKGGAGTRYNQDGLUQNLMXVJIMYPWPOQCMQTAFXRSDTWBVPPQHSEFPUIIFPXGDEUUWODXYT");
    msg.value = 0.8402501535980813;

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
    msg.setTimeStamp(0.6980019227153742);
    msg.setSource(58174U);
    msg.setSourceEntity(124U);
    msg.setDestination(19155U);
    msg.setDestinationEntity(19U);
    msg.seq = 64178U;
    msg.sys.assign("FQPLEVNHFOQOVNCTVIOZVACPHGLGGXPRNYXCXXILDTWTEWWKIGMTSBBVCYUXQNNRZC");
    msg.value = 0.40136374169761646;

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
    msg.setTimeStamp(0.19181442325801146);
    msg.setSource(50214U);
    msg.setSourceEntity(132U);
    msg.setDestination(15374U);
    msg.setDestinationEntity(62U);
    msg.seq = 31660U;
    msg.sys.assign("JNXKYSUIBOZJYDICSHRIBFPQFDXZEQMZIHHYRVMNRINNXMPCLMIILUXWLKSBCATJJVMAXEFXREDOSWAKBYGKGWYGTKDBOTYVJQSSPFQIPMZNSQUTEFGGEOGOQSBVVWRAWKULBFDDREVUWRZGNUXEHNZAYXQOWJWZWNIELVJNYYQOLQARUTDLLLUFHHFHTRMXFMGVOCKNVDCBDOTUJUPHQJCIXSYTAHPCFLRGAZSK");
    msg.value = 0.4605558132864527;

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
    msg.setTimeStamp(0.17288136958532574);
    msg.setSource(59306U);
    msg.setSourceEntity(220U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(65U);
    msg.action = 33U;
    msg.longain = 0.9211256674415852;
    msg.latgain = 0.2827711334992632;
    msg.bondthick = 2865418436U;
    msg.leadgain = 0.33310440798560836;
    msg.deconflgain = 0.4957961618020177;

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
    msg.setTimeStamp(0.7957914019621017);
    msg.setSource(59688U);
    msg.setSourceEntity(179U);
    msg.setDestination(13038U);
    msg.setDestinationEntity(216U);
    msg.action = 57U;
    msg.longain = 0.9476669483882689;
    msg.latgain = 0.1600628057252329;
    msg.bondthick = 1458666435U;
    msg.leadgain = 0.8114604602350948;
    msg.deconflgain = 0.8155753854101844;

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
    msg.setTimeStamp(0.7438106085518492);
    msg.setSource(46741U);
    msg.setSourceEntity(196U);
    msg.setDestination(6397U);
    msg.setDestinationEntity(135U);
    msg.action = 179U;
    msg.longain = 0.21673727771096363;
    msg.latgain = 0.32562850417160427;
    msg.bondthick = 582580394U;
    msg.leadgain = 0.5128623688591607;
    msg.deconflgain = 0.29099968444200064;

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
    msg.setTimeStamp(0.6649834053263467);
    msg.setSource(8839U);
    msg.setSourceEntity(146U);
    msg.setDestination(31200U);
    msg.setDestinationEntity(38U);
    msg.err_mean = 0.7397918319669973;
    msg.dist_min_abs = 0.023195780356785933;
    msg.dist_min_mean = 0.1640732295998818;

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
    msg.setTimeStamp(0.028548387236520534);
    msg.setSource(34495U);
    msg.setSourceEntity(250U);
    msg.setDestination(25484U);
    msg.setDestinationEntity(85U);
    msg.err_mean = 0.08637015972037754;
    msg.dist_min_abs = 0.3018113468885685;
    msg.dist_min_mean = 0.11106574948385295;

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
    msg.setTimeStamp(0.6643638826191867);
    msg.setSource(38389U);
    msg.setSourceEntity(245U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(51U);
    msg.err_mean = 0.35207873238942566;
    msg.dist_min_abs = 0.7459452161571746;
    msg.dist_min_mean = 0.5983923814139026;

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
    msg.setTimeStamp(0.4466306663299827);
    msg.setSource(56739U);
    msg.setSourceEntity(166U);
    msg.setDestination(39229U);
    msg.setDestinationEntity(237U);
    msg.uid = 246U;
    msg.frag_number = 73U;
    msg.num_frags = 69U;
    const char tmp_msg_0[] = {70, -30, 101, -19, -65, 71, -37, -16, -8, -70, 96, 104, -88, 60, -70, 41, -24, 88, -88, 87, -94, 45, -45, 88, 105, -109, 114, -107, -31, 76, -82, -108, -62, -20, 23, -48, -45, -61, 83, -98, 123, -125, -70, -8, 57, -14, -119, 16, 70, 7, 73, -35, 24, -66, 11, -103, -31, -88, -38, 56, 126, 33, 56, 24, -57, -72, -86, 108, -74, 50, -65, -128, -84, 46, 61, 61, 9, -7, -116, -65, -112, -101, -119, 38, 49, -36, -4, -63, 31, 1, 101, 96, -18, 53, -46, -77, -89, 102, -99, -98, -1, -94, -98, -57, 10, 88, -66, 84, 21, -48, -128, -119, 96, -58, 62, 16, -18, -38, 74, -28, -97, -36, -17, 36};
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
    msg.setTimeStamp(0.30433788111774296);
    msg.setSource(63734U);
    msg.setSourceEntity(114U);
    msg.setDestination(12978U);
    msg.setDestinationEntity(40U);
    msg.uid = 39U;
    msg.frag_number = 17U;
    msg.num_frags = 28U;
    const char tmp_msg_0[] = {-23, 53, 91, 72, 96, -97, -106, 23, 96, 50, 94, 22, 38, 21, -11, 36, 57, 100, 74, 113, 69, 124, 13, 52, -74, 17, 80, -87, 34, 32, -53, -19, 41, 125, 89, -70, 40, 24, 82, -20, -107, -57, -112, 122, 70, -74, -71, -88, -79, -76, 89, -65, -66, -41, -89, 57, -61, 114, -40, -15, -109, -110, 51, 55, 113, 80, 76};
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
    msg.setTimeStamp(0.49077379733548554);
    msg.setSource(22926U);
    msg.setSourceEntity(211U);
    msg.setDestination(36316U);
    msg.setDestinationEntity(65U);
    msg.uid = 57U;
    msg.frag_number = 65U;
    msg.num_frags = 143U;
    const char tmp_msg_0[] = {95, -115, -19, 98, -24, 25, -114, -30, 52, -49, 7, 19, -126, -38, -25, -76, -125, -33, 9, -123, 47, -36, -26, -127, 86, 37, -67, 118, -108, -69, 66, -5, 20, 55, -51, 10, 46, 8, 27, 69, 89, -38, -6, 85, -80, -42, -57, 57, -66, -88, 5, -37, 3, 57, -102, -118, 94, 70, -63, 57, -49, 38, -37, 74, 18, -95, 40, 9, 102, -86, 14, -78, -12, 57, 78, -12, 85, 43, -99, 9, 12, -122, 7, -52, 122, -47, -45, -99, 123, -5, 64, -125, -93, -122, -87, 61, 36, 29, -84, 74, 118, 42, 9, 69, 120, -63, 103, -46, -59, -107, -53, 65, -12, 5, 33, 84, 37, -39, 92, 119, -103, 7, -4, 31, -4, -55, 81, -73, 37, -92, -37, 31, 28, 2, 27, -69, -101, -91, -13, 59, 91, -13, 85, 74, 102, -12, -93, 86, -40, 6, 103, -5, 88, -95, 46, 53, -24, 46, -36, -56, 76, 62, 112, -125, 14, -95, 22, 124, -7, -76, 11, -56, -76, 65, -70, 56, 116, -59, 126, -49, -31, 42, -100, -60, 17, 48, 109, -84, 126, -55, -22, 75, -100, 6, -31, 105, -89, 31, -88, 101, 104, 12, 40, -11, 73, 64, -9, 27, -1, 99, 122, 98, 91, 43, 124, 119, 65, -116, 105, -42, 121, 37, -46, -35, 74, 125, 27, -25, -10, -82, -42, -55, -74, -14, 75, -28, -56, -52};
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
    msg.setTimeStamp(0.8157299731546959);
    msg.setSource(47108U);
    msg.setSourceEntity(233U);
    msg.setDestination(58591U);
    msg.setDestinationEntity(68U);
    msg.content_type.assign("BACDBHRMXTPVFSMDOCXMKVCFZZHSWOGTANGTFVHUHLKYUJOGSTBYQONGGMEUICYJJKUBRZSWQTFWVIEVACQBAJYPDNIXOHUVZRBSETDTAPVCWQLGMDGGEXUOCFGJSRLKQYBYISZZCIVBDLYNWKKYNWCXXNJTNCWDQQBXSHIAZQPWMRPEPLLSONDOXHAKXNFILMRILZQVOKJKEHGJAQPFKDIVPUXYMWMDRRHLPJUIHUAFSEZJRARTPMTZELFYUB");
    const char tmp_msg_0[] = {33, 9, 71, 17, -123, 57, 102, -50, -60, -33, -125, 29, -40, -123, 37, -125, -121, -69, 72, -53, 61, -82, 48, 71, 4, -21, 94, 60, -26, 32, -24, 45, 123, 72, -117, -112, 96, -61, -47, 52, 41, 85, -110, -46, -111, -56, 121, -61, 37, -81, 93, 94, 46, 98, -17, -112, -39, 10, -69, 105, -85, 90, -120, -44, -35, -87};
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
    msg.setTimeStamp(0.3999392871197305);
    msg.setSource(9395U);
    msg.setSourceEntity(1U);
    msg.setDestination(53940U);
    msg.setDestinationEntity(39U);
    msg.content_type.assign("MDFTUZLWJVVHHFMIVHKQLUCJYDTOALZOQETAFRSAAINVJDTWUXCEQYGNZSBECCWINFRTIPYYHEWNGDGOGJOMCMRBWRSJCHPWRAMOUET");
    const char tmp_msg_0[] = {38, 111, -97, 100, 66, -57, 126, 3, 48, -53, -42, 50, -48, -65, 69, -98, 126, 54};
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
    msg.setTimeStamp(0.974760521199016);
    msg.setSource(52632U);
    msg.setSourceEntity(42U);
    msg.setDestination(26491U);
    msg.setDestinationEntity(58U);
    msg.content_type.assign("AQJYWTLVKGETALKMTCIKOWTCMMOXEUBJLQGRQRFRISDSVHSBPTYNGZWFOYYNVWNZGXHOIFCFDEXBRAUSSFKWQFQPTZBSSTTIXYIPNVQTHBRBZVNMUJSKHEALUPLJPVUQARFPOGKZIMOSBEZUSXALCYBTPEIVPEOVFHYWKDDYWNWRCJMUJXFQMPUHBJVGMWJZYVEMAHAACUNJNRDIDGNGFPHDJHQZCQDICLOOLLUCLOXHRXCGWIBR");
    const char tmp_msg_0[] = {74, 58, -22, 40, -93, 0, 7, -96, -27, 118, 48, -115, 76, 126, -110, -111, -100, -111, -27, -124, -28, -115, -49, -114, 86, 28, 7, -53, 9, 58, -120, -31, -32, -89, -50, 50, -102, -66, -107, -25, -77, -68, 49, -126, 62, -28, 80, 35, 51, 80, 86, 24, 86, -24, -52, -92, 54, -31, -121, -6, -105, -102, 7, -33, -110, -54, -77, 49, 10, 35, -23, 36, -61, -74, -34, -101, 29, -85, 8, -85, -111, 117, 76, -98, -48, -103, 51, -57, 2, 76, -80, 45, -70, 1, -1, 0, -48, -103, -59, 99, 119, -1, -19, 110, 25, 13, -113, 41, 60, -122, 28, -39, 107, 69, -45, 30, -50, 88, 50, 53, 11, 67, 12, 112, 33, 31, -48, 51, 93, 78, -37, -91, -121, -42, 42, 100, -37, -113, 105, -90, -56, -3, -6, -16, 71, 112, 65, -65, -68, -109, -90, 35, 64, 32, -44, -21, 107, 8, 24, 58};
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
    msg.setTimeStamp(0.6132456917081215);
    msg.setSource(52941U);
    msg.setSourceEntity(170U);
    msg.setDestination(48393U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.12910276096364304);
    msg.setSource(21759U);
    msg.setSourceEntity(186U);
    msg.setDestination(54186U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.9889387469455736);
    msg.setSource(51403U);
    msg.setSourceEntity(146U);
    msg.setDestination(61340U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.9880037444812532);
    msg.setSource(53147U);
    msg.setSourceEntity(165U);
    msg.setDestination(63947U);
    msg.setDestinationEntity(183U);
    msg.target = 36443U;
    msg.bearing = 0.14381492842924293;
    msg.elevation = 0.43398009252091374;

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
    msg.setTimeStamp(0.046385103163369745);
    msg.setSource(23315U);
    msg.setSourceEntity(210U);
    msg.setDestination(2600U);
    msg.setDestinationEntity(77U);
    msg.target = 3400U;
    msg.bearing = 0.420007564332159;
    msg.elevation = 0.10673941664438524;

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
    msg.setTimeStamp(0.28997112015242565);
    msg.setSource(496U);
    msg.setSourceEntity(245U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(202U);
    msg.target = 40657U;
    msg.bearing = 0.11598617499279062;
    msg.elevation = 0.1991628585065971;

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
    msg.setTimeStamp(0.12702807099726154);
    msg.setSource(57324U);
    msg.setSourceEntity(84U);
    msg.setDestination(22149U);
    msg.setDestinationEntity(140U);
    msg.target = 9288U;
    msg.x = 0.062389474180910676;
    msg.y = 0.37408451184138825;
    msg.z = 0.8468400337644479;

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
    msg.setTimeStamp(0.9685986969536988);
    msg.setSource(1221U);
    msg.setSourceEntity(13U);
    msg.setDestination(13844U);
    msg.setDestinationEntity(193U);
    msg.target = 2448U;
    msg.x = 0.15557536062755117;
    msg.y = 0.9141471163314219;
    msg.z = 0.374773006625305;

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
    msg.setTimeStamp(0.3722287435833638);
    msg.setSource(23802U);
    msg.setSourceEntity(162U);
    msg.setDestination(4588U);
    msg.setDestinationEntity(92U);
    msg.target = 64359U;
    msg.x = 0.6963436172850502;
    msg.y = 0.2925969449348008;
    msg.z = 0.08664007623826153;

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
    msg.setTimeStamp(0.5200108974365696);
    msg.setSource(12697U);
    msg.setSourceEntity(235U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(160U);
    msg.target = 41484U;
    msg.lat = 0.6531280140338646;
    msg.lon = 0.25044325609909623;
    msg.z_units = 80U;
    msg.z = 0.8380833395150721;

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
    msg.setTimeStamp(0.558479352846145);
    msg.setSource(19209U);
    msg.setSourceEntity(174U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(40U);
    msg.target = 6728U;
    msg.lat = 0.2550686749033769;
    msg.lon = 0.03572289549385621;
    msg.z_units = 17U;
    msg.z = 0.737618079099553;

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
    msg.setTimeStamp(0.2883097578740008);
    msg.setSource(32531U);
    msg.setSourceEntity(85U);
    msg.setDestination(63655U);
    msg.setDestinationEntity(129U);
    msg.target = 17517U;
    msg.lat = 0.9591840354724968;
    msg.lon = 0.5655356102327038;
    msg.z_units = 121U;
    msg.z = 0.46661458791251775;

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

  return test.getReturnValue();
}
