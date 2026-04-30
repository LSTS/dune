//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 47810ebdc3879861837e89177f26e6aa                            *
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
    msg.setTimeStamp(0.4139093506583118);
    msg.setSource(27964U);
    msg.setSourceEntity(236U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(44U);
    msg.state = 7U;
    msg.flags = 2U;
    msg.description.assign("MAZYZNILOXSGEAKJELQCVUMOFTGBMSACVIIJSBQHSFOTZQPDBYKEBYCDFCJKJKAJNHQLGBUAVXIJOYLPOVWXVZPWJRVHRRKAIDCQQVEMNGXQEUBTTLSDHKCUA");

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
    msg.setTimeStamp(0.4765788269842952);
    msg.setSource(44347U);
    msg.setSourceEntity(237U);
    msg.setDestination(56809U);
    msg.setDestinationEntity(253U);
    msg.state = 59U;
    msg.flags = 223U;
    msg.description.assign("ZYCRBERVOFYXIMQXQRPSPLSKFULUMUNODVA");

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
    msg.setTimeStamp(0.36901209480905706);
    msg.setSource(47161U);
    msg.setSourceEntity(211U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(31U);
    msg.state = 154U;
    msg.flags = 190U;
    msg.description.assign("EAVYMPHWKHBVREXFSQNOQCVMPQXAIKHXNGCSPJZUMLYNYWNXNRODGSDADDEVOSLZRNJHFZUBIWWPLKEBELAQAJPSHOBDMWYVIFFPIDATDRPTSUZYYVRXBI");

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
    msg.setTimeStamp(0.49496128388036276);
    msg.setSource(8783U);
    msg.setSourceEntity(201U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.7094845819978863);
    msg.setSource(48831U);
    msg.setSourceEntity(13U);
    msg.setDestination(3951U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.489407264842331);
    msg.setSource(40436U);
    msg.setSourceEntity(52U);
    msg.setDestination(1916U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.741606926035405);
    msg.setSource(1054U);
    msg.setSourceEntity(30U);
    msg.setDestination(2205U);
    msg.setDestinationEntity(34U);
    msg.id = 47U;
    msg.label.assign("ZKHZXBPCXXRFGWADHGCCERIQYQVFRSTJXXDGAKUPWLNKUKSUSQHBNUSNAAMNTJOPDWBZSDSAIVULEUQYQVYGPEFNGAJOXZRBKSYIGDMWTLMQPNOXEPALTMESOWZ");
    msg.component.assign("MHMBDIRWKQCOEFULAWPDPUPMIXCPGRRYONCKJJRAYFHDLBAKIWXGFZDIGRSCEFEGLVCZTUMIHEBCCOXTUHLVLLWRAQGUCJNQSBWHZHHQNSSEJIPJFUJSBTJAHKHIOZDZ");
    msg.act_time = 32441U;
    msg.deact_time = 27560U;

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
    msg.setTimeStamp(0.15188302543501508);
    msg.setSource(58156U);
    msg.setSourceEntity(129U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(151U);
    msg.id = 54U;
    msg.label.assign("RTFSWJMIMGZONTQJAECNSJWQUZXXKHRAVZDKVJRMCBTZLBYHRIKLOSDGPLPVCXHWDJLBGISKRVQHEJNMDIOEYFVUQHFUODGEBSEYVQRFWEKZRXJCYJCCATKYYINLFZOEITSKEXLIZUDTSBFMAPHNOFRROUJLHVJQVMNRNNWGTHPGQUDXHXBMGYGYFUONWBXYISGBIHSAUTXYTPALKLPPPXMFEBDCLKCDVSAEZZDOPFAOGQZUKINTQ");
    msg.component.assign("MHFOMDXIJARCHRTUTQWRVLHZFDYGJQOBYNTAZANOXOQJDUMDFQUPWKEGRNIKKCVQKVOVMUUSKNRLYIYBJTFBKTYYAGFIFQNACQRQLZIPVBHURWXEVTHEXGBSRYEQMRDGEGZLZZJONWZYVALNDXLTLBWHEEWLNXLPRPCCNJXSNOSMAAHZKY");
    msg.act_time = 657U;
    msg.deact_time = 56719U;

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
    msg.setTimeStamp(0.6021540479898414);
    msg.setSource(63967U);
    msg.setSourceEntity(78U);
    msg.setDestination(10547U);
    msg.setDestinationEntity(98U);
    msg.id = 220U;
    msg.label.assign("RZBMAEPFVTTKHLNBBOMQFRUQZSAJHNWZJSUOUMCRFWHCRXPGYQPSTMWCLLKFIYVE");
    msg.component.assign("IHGRBXPFTISGMCLXUBNHIMGBCZAZHTQFDRBWJCAMPUEVGDASFOSVVQJZGKLTMGJGOAQOXETYWSTPJHUAQYUBEJWULDGUEVWQEOEJQNRHIWEKJCXJIIDHCBUSYPHNXVJYYQMQJLRKLKRCFADSFQNPPAEKBFSOATHYCZNRMVKDWIBRMZHWYYODLIMDXFIGLCZDIWBSLXSCFNXX");
    msg.act_time = 58677U;
    msg.deact_time = 34583U;

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
    msg.setTimeStamp(0.8460534683202213);
    msg.setSource(33993U);
    msg.setSourceEntity(223U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(111U);
    msg.id = 46U;

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
    msg.setTimeStamp(0.45071362623059463);
    msg.setSource(3714U);
    msg.setSourceEntity(160U);
    msg.setDestination(40646U);
    msg.setDestinationEntity(181U);
    msg.id = 202U;

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
    msg.setTimeStamp(0.408673495914918);
    msg.setSource(22158U);
    msg.setSourceEntity(182U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(236U);
    msg.id = 62U;

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
    msg.setTimeStamp(0.908266588233698);
    msg.setSource(61700U);
    msg.setSourceEntity(56U);
    msg.setDestination(31136U);
    msg.setDestinationEntity(106U);
    msg.op = 166U;
    msg.list.assign("IELTZNQNOYLTIURHKXDHCGCDRKWCQWNADSFYFSAEVOPXMGHTAKTVWKAEHCBUQGLOLTIDBSINXPNXGJGQBNUXWOUPEUYRVSIUMQZDJSHBNJVSQLRWYFCKPDHIZUAQRBGAOOCWKGRXVGZBUFWBWCTHPNZOAFAZBLYAFMPRCMTPFNDZKMFVHVDFTKYLAOZTJLDUPKEOYUJRXFSELGNZEBOKYV");

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
    msg.setTimeStamp(0.611058947342504);
    msg.setSource(13757U);
    msg.setSourceEntity(126U);
    msg.setDestination(62U);
    msg.setDestinationEntity(198U);
    msg.op = 242U;
    msg.list.assign("PMVLYMHPAGEEJJMTJVEBZTHKUXNLGIKCQBOMYXLAFREQLKHPNDSJTHIORFKTNSOQJIGEBVZWFGMYRXKMSTAIIAMKVKXYWLXRZRIGGBRFAJWVYMANMTJDIYOONXEHFBFSUVPDTAXUKUDTQCTKNWZZCPICNCSOXJKPDTDOFC");

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
    msg.setTimeStamp(0.7534634440675269);
    msg.setSource(33141U);
    msg.setSourceEntity(51U);
    msg.setDestination(27546U);
    msg.setDestinationEntity(235U);
    msg.op = 222U;
    msg.list.assign("UQIKNCOWXYWPVRBJBZDCJFAGRJTPMZBSYFOMDJXZWOEIEFCHUWGPXVLVMHPGCNSFAOPUAUMTHKYVUZDSHIIRLQXJOMRHPPLMNYJDCRGZOYLQWXCFBWSCMKRBRXRFW");

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
    msg.setTimeStamp(0.8432763864607771);
    msg.setSource(37403U);
    msg.setSourceEntity(176U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(57U);
    msg.value = 143U;

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
    msg.setTimeStamp(0.9721458448617998);
    msg.setSource(13821U);
    msg.setSourceEntity(79U);
    msg.setDestination(49848U);
    msg.setDestinationEntity(137U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.7145626875969198);
    msg.setSource(24173U);
    msg.setSourceEntity(219U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(79U);
    msg.value = 1U;

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
    msg.setTimeStamp(0.7985257337690658);
    msg.setSource(1282U);
    msg.setSourceEntity(46U);
    msg.setDestination(24608U);
    msg.setDestinationEntity(176U);
    msg.consumer.assign("SCGBOZFAVDUVIKYILFGTYEPWZFWCKNMDRVMHHNTCMFPITWEXICQYMQTBETGBRLPJEMEUYZFSLSZIIBIOGHGGQZAXUSHFGUJDPUJLKFBMJBQOWKNCNPXSECRW");
    msg.message_id = 21852U;

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
    msg.setTimeStamp(0.3413081590607573);
    msg.setSource(31411U);
    msg.setSourceEntity(126U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("VEALALCGVWXPEZXTXFXMGYMXJZONREAKLSWRLJIWJQHMHQGITLYDJWDTNFCOPCGYIDNOKFIDIPURVBHQFENHPIYVJQVLQJAWRKWSLNTULOMBCOAAIMXUFWTZYMPRUZEASEHKVDLOFPMHMJWQZOBWRHHQEPCEUOZSCAOZGFHVBLSIVVBBKDTYGYRTANUPCXKIBMJRKDVQKFZNRXSCEATTJJBYBPYCU");
    msg.message_id = 19505U;

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
    msg.setTimeStamp(0.7297846085869916);
    msg.setSource(63882U);
    msg.setSourceEntity(24U);
    msg.setDestination(31936U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("WMEZMWENLHDCARSETFZRSHBDLSCZGQCRDTPOJQKFXGGCIEPIHWASMKPOZZIKALDOTBBDMWPCCHJDRVGTQFHFGUVYJRVTNYJQJW");
    msg.message_id = 56324U;

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
    msg.setTimeStamp(0.9135797651181654);
    msg.setSource(4328U);
    msg.setSourceEntity(80U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(184U);
    msg.type = 185U;

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
    msg.setTimeStamp(0.7366691437522914);
    msg.setSource(8286U);
    msg.setSourceEntity(131U);
    msg.setDestination(35903U);
    msg.setDestinationEntity(198U);
    msg.type = 69U;

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
    msg.setTimeStamp(0.5365155756447757);
    msg.setSource(61374U);
    msg.setSourceEntity(145U);
    msg.setDestination(51726U);
    msg.setDestinationEntity(177U);
    msg.type = 46U;

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
    msg.setTimeStamp(0.09555045597537126);
    msg.setSource(56362U);
    msg.setSourceEntity(230U);
    msg.setDestination(47578U);
    msg.setDestinationEntity(113U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.019850302435224787);
    msg.setSource(27360U);
    msg.setSourceEntity(40U);
    msg.setDestination(59347U);
    msg.setDestinationEntity(116U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.34363536270922923);
    msg.setSource(41260U);
    msg.setSourceEntity(247U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(21U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.28984302530033756);
    msg.setSource(55765U);
    msg.setSourceEntity(149U);
    msg.setDestination(43925U);
    msg.setDestinationEntity(160U);
    msg.total_steps = 49U;
    msg.step_number = 0U;
    msg.step.assign("DXHJLGFIWMZWRDUYCKTKTWFQUCJGBYSTEUABOXPPQROWANCHOKXVVTUBRQBJBTOUBFHFGXRLTJAVUPNSCLLSEUHASZLIXRRYOAPPRTCNZAAQIHYSFPLAWKEBPDIMKYHYGVMTJBLDGEDHIVHZSVMWUQIKOXZXQJLAJWCVQNNNR");
    msg.flags = 248U;

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
    msg.setTimeStamp(0.9068500267762557);
    msg.setSource(46461U);
    msg.setSourceEntity(246U);
    msg.setDestination(58470U);
    msg.setDestinationEntity(205U);
    msg.total_steps = 161U;
    msg.step_number = 227U;
    msg.step.assign("RYAYSBWNTVKNZDHFHMDUIORLSKTVILAEPAGRRBOTDUYXSPUBTCEFLUCEDXWXJIMYOISBIVJTBUPMZEYOFGYNUYJQHIXYPHXLALOLARXMNOGJZPXNJKBNIHNCLGCZQQDPFFHAOBJQUTMCFVTEEWVIYQZZGIMCCTNLOQEQGKCMW");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.30894841874591805);
    msg.setSource(17958U);
    msg.setSourceEntity(204U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(120U);
    msg.total_steps = 112U;
    msg.step_number = 106U;
    msg.step.assign("CISKQBJGGTYWVFOMQGUFASJPLXLDSJMMYIERQTQWZBESSWYDKKHXAWTSXSTRNQNATRNKFDUFIDOYYYYTHJ");
    msg.flags = 149U;

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
    msg.setTimeStamp(0.4877283995358733);
    msg.setSource(3252U);
    msg.setSourceEntity(251U);
    msg.setDestination(35326U);
    msg.setDestinationEntity(127U);
    msg.state = 248U;
    msg.error.assign("PBLOWCXGDYVLCNTDTLZZPHUITXHZDCKRUDKGRZBYVLQS");

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
    msg.setTimeStamp(0.7926389988417901);
    msg.setSource(40299U);
    msg.setSourceEntity(1U);
    msg.setDestination(27469U);
    msg.setDestinationEntity(159U);
    msg.state = 64U;
    msg.error.assign("MBXKICSSGNKRLHJEPHNINBSJXUJKMVRFNLJWZSDBZXRFNQDODMETBSDJMAZPZRASQXCRRYPQOKTWXGOG");

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
    msg.setTimeStamp(0.5144296738607833);
    msg.setSource(61989U);
    msg.setSourceEntity(5U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(187U);
    msg.state = 59U;
    msg.error.assign("RVIZMGTJFNSGYWJCQVPAYQBDVNXNWPYPEHBWRXBBPL");

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
    msg.setTimeStamp(0.01649607759303484);
    msg.setSource(28824U);
    msg.setSourceEntity(85U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.8586576426503478);
    msg.setSource(29997U);
    msg.setSourceEntity(190U);
    msg.setDestination(62219U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.870457408329897);
    msg.setSource(38128U);
    msg.setSourceEntity(149U);
    msg.setDestination(14222U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.28007412674905696);
    msg.setSource(56280U);
    msg.setSourceEntity(21U);
    msg.setDestination(3301U);
    msg.setDestinationEntity(235U);
    msg.op = 219U;
    msg.speed_min = 0.307073429758834;
    msg.speed_max = 0.8099199495258339;
    msg.long_accel = 0.5508812121342185;
    msg.alt_max_msl = 0.9704684457023367;
    msg.dive_fraction_max = 0.4909890315711267;
    msg.climb_fraction_max = 0.7218161377625945;
    msg.bank_max = 0.10378725185126403;
    msg.p_max = 0.800504068507452;
    msg.pitch_min = 0.5605734705548896;
    msg.pitch_max = 0.7825905811704753;
    msg.q_max = 0.2667041767760967;
    msg.g_min = 0.9925835846413185;
    msg.g_max = 0.32699737498834547;
    msg.g_lat_max = 0.6334102878317753;
    msg.rpm_min = 0.18229705068849777;
    msg.rpm_max = 0.9746460760862382;
    msg.rpm_rate_max = 0.5891133460065419;

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
    msg.setTimeStamp(0.19754363986609924);
    msg.setSource(39156U);
    msg.setSourceEntity(14U);
    msg.setDestination(40410U);
    msg.setDestinationEntity(60U);
    msg.op = 206U;
    msg.speed_min = 0.675020574482517;
    msg.speed_max = 0.9044870152344272;
    msg.long_accel = 0.696101280234446;
    msg.alt_max_msl = 0.7366385799816941;
    msg.dive_fraction_max = 0.7064601992096088;
    msg.climb_fraction_max = 0.6416535311340834;
    msg.bank_max = 0.92969229075119;
    msg.p_max = 0.40343521396997495;
    msg.pitch_min = 0.039502104272504335;
    msg.pitch_max = 0.38684736342748505;
    msg.q_max = 0.5441585592440568;
    msg.g_min = 0.4742303910923531;
    msg.g_max = 0.8260513287246692;
    msg.g_lat_max = 0.30350170303546253;
    msg.rpm_min = 0.06689206056511199;
    msg.rpm_max = 0.24805364445533273;
    msg.rpm_rate_max = 0.3602021404272465;

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
    msg.setTimeStamp(0.879340523178649);
    msg.setSource(31155U);
    msg.setSourceEntity(12U);
    msg.setDestination(46278U);
    msg.setDestinationEntity(100U);
    msg.op = 118U;
    msg.speed_min = 0.7360666662655351;
    msg.speed_max = 0.7703996173505635;
    msg.long_accel = 0.5725179181596632;
    msg.alt_max_msl = 0.16974801314195476;
    msg.dive_fraction_max = 0.21644562926264765;
    msg.climb_fraction_max = 0.8686577690965234;
    msg.bank_max = 0.02129663364074741;
    msg.p_max = 0.8281965875173747;
    msg.pitch_min = 0.09156222389511415;
    msg.pitch_max = 0.29361295238492724;
    msg.q_max = 0.37144355690196684;
    msg.g_min = 0.6730555468332956;
    msg.g_max = 0.2080386238464883;
    msg.g_lat_max = 0.1692797625718936;
    msg.rpm_min = 0.16015826793264665;
    msg.rpm_max = 0.7533271492470264;
    msg.rpm_rate_max = 0.3529690139208628;

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
    msg.setTimeStamp(0.0021933979781960655);
    msg.setSource(61581U);
    msg.setSourceEntity(241U);
    msg.setDestination(9762U);
    msg.setDestinationEntity(160U);
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.8154013221342261;
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
    msg.setTimeStamp(0.2910484937598181);
    msg.setSource(57733U);
    msg.setSourceEntity(10U);
    msg.setDestination(60162U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.883906870700279);
    msg.setSource(16460U);
    msg.setSourceEntity(237U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(113U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 224U;
    tmp_msg_0.quality = 135U;
    tmp_msg_0.reps = 185U;
    tmp_msg_0.tsize = 240U;
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.9922563374872471);
    msg.setSource(12108U);
    msg.setSourceEntity(213U);
    msg.setDestination(26755U);
    msg.setDestinationEntity(151U);
    msg.value = 0.2509597983720212;

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
    msg.setTimeStamp(0.5956384837954377);
    msg.setSource(7446U);
    msg.setSourceEntity(54U);
    msg.setDestination(64925U);
    msg.setDestinationEntity(110U);
    msg.value = 0.03907782359905332;

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
    msg.setTimeStamp(0.2996413982019057);
    msg.setSource(62347U);
    msg.setSourceEntity(111U);
    msg.setDestination(7819U);
    msg.setDestinationEntity(110U);
    msg.value = 0.20363850105043257;

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
    msg.setTimeStamp(0.5815035797519696);
    msg.setSource(64075U);
    msg.setSourceEntity(5U);
    msg.setDestination(45183U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.8754618228867997;
    msg.lon = 0.4288774808710395;
    msg.height = 0.11229170632579177;
    msg.x = 0.08067892237500274;
    msg.y = 0.7860087520607756;
    msg.z = 0.4114471432366943;
    msg.phi = 0.761615149405986;
    msg.theta = 0.2824576530565619;
    msg.psi = 0.06779467692391461;
    msg.u = 0.14994341047884974;
    msg.v = 0.5124505986419586;
    msg.w = 0.8678419880019603;
    msg.p = 0.34053232897018015;
    msg.q = 0.5899937102393592;
    msg.r = 0.14642702922370632;
    msg.svx = 0.5827724637090979;
    msg.svy = 0.35145570196651066;
    msg.svz = 0.06987454716826269;

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
    msg.setTimeStamp(0.04290644860786108);
    msg.setSource(12018U);
    msg.setSourceEntity(164U);
    msg.setDestination(1448U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.1362101739017132;
    msg.lon = 0.10654408053329012;
    msg.height = 0.9827506369391144;
    msg.x = 0.3931863115611861;
    msg.y = 0.08806769503490508;
    msg.z = 0.30434341048379;
    msg.phi = 0.06765634882580285;
    msg.theta = 0.01552122891204688;
    msg.psi = 0.7624771092522927;
    msg.u = 0.8967941396821011;
    msg.v = 0.865589277985468;
    msg.w = 0.5163554903128363;
    msg.p = 0.4366967684847607;
    msg.q = 0.46588262155779214;
    msg.r = 0.7614387966799583;
    msg.svx = 0.8493789404698743;
    msg.svy = 0.09794427480706869;
    msg.svz = 0.8025504172654537;

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
    msg.setTimeStamp(0.3311065876916067);
    msg.setSource(7411U);
    msg.setSourceEntity(193U);
    msg.setDestination(35544U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.99982447970661;
    msg.lon = 0.34493757830300864;
    msg.height = 0.16702322330905794;
    msg.x = 0.16144788460595305;
    msg.y = 0.5135047004595575;
    msg.z = 0.9293958859221864;
    msg.phi = 0.12794704652522415;
    msg.theta = 0.3925688749487174;
    msg.psi = 0.6051678336407803;
    msg.u = 0.2996717833356094;
    msg.v = 0.37511961608444655;
    msg.w = 0.6612248871638705;
    msg.p = 0.29390634820125894;
    msg.q = 0.8660871099052312;
    msg.r = 0.7690205929995299;
    msg.svx = 0.4963381151880054;
    msg.svy = 0.35201138909121454;
    msg.svz = 0.4341145812696403;

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
    msg.setTimeStamp(0.38246329423913705);
    msg.setSource(42007U);
    msg.setSourceEntity(218U);
    msg.setDestination(4587U);
    msg.setDestinationEntity(132U);
    msg.op = 185U;
    msg.entities.assign("KMBMICTVALYGRWEZPDPTZTEBQBCFQTREVKFFWEXRCIYEMMLXHABXYDQAYGJOOYMDMEIVISXXKVLBZJWXZJPRKZUZCFMTWGSBSQJKADNARLWSJXDHNAWOPWBJQJFLGRYJVSKHCIWQTHIROSGRKKOUCGV");

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
    msg.setTimeStamp(0.27007788294544366);
    msg.setSource(59746U);
    msg.setSourceEntity(233U);
    msg.setDestination(10179U);
    msg.setDestinationEntity(137U);
    msg.op = 230U;
    msg.entities.assign("SCDEQDJTAKALSZHRYBYBEVIHMUTEGDYFVIABVDLUEQEKUYCRJGXPYGBIQVNITGCZSEEPWRFHVORKGAUSYOJMNDNITLZLLVZQIRNELMFRHJBJHWPOVZSOSWXUQSQBMVZCFODWFWIXPQDFZXKWHBWXLNJPYOMAMMWIIUTJPCLCFXZUADOGXSKLXYTMGRAFKOQ");

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
    msg.setTimeStamp(0.15211340220547964);
    msg.setSource(5753U);
    msg.setSourceEntity(134U);
    msg.setDestination(29879U);
    msg.setDestinationEntity(237U);
    msg.op = 68U;
    msg.entities.assign("PQEWAINXWADTCCJUMYXJVEFUOJKVUZNFBJRHFHDECPMBNPYVVVRWDQMSETKPQPMOALJKBOXKCZHREGYFGLDQPX");

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
    msg.setTimeStamp(0.5344902254667601);
    msg.setSource(44858U);
    msg.setSourceEntity(172U);
    msg.setDestination(1899U);
    msg.setDestinationEntity(169U);
    msg.type = 180U;
    msg.speed = 17994U;
    const signed char tmp_msg_0[] = {114, -121, 96, -41, -73, -106, -58, 91, 37, 37, -117, 85, -92, 49, -103, 125, -113, -62, 25, -121, 65, 57, -89, 78, 104, -23, 37, 58, 15, -76, 8, 48, -111, -39, -109, -98, -99, 27, -13, 71, 85, 35, -120, -45, -85, 106, -68, -33, -58, 17, 69, -81, -91, -2, -48, -114, -13, -12, -85, 20, -64, 62, 106, -50, 96, 80, 83, 99, 5, -67, -114, -1, -42, -92, -104, 1, -75, 105, 79, 25, -85, -124, 20, -124};
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
    msg.setTimeStamp(0.5094679583646348);
    msg.setSource(60067U);
    msg.setSourceEntity(66U);
    msg.setDestination(461U);
    msg.setDestinationEntity(101U);
    msg.type = 132U;
    msg.speed = 64179U;
    const signed char tmp_msg_0[] = {82, 30, -87, -120, 108, 123, 72, 107, -5, 88, 32, -56, -91, 122, 38, -24, -85, 7, 89, 105, -124, -31, -91, 75, 56, 74, -58, -20, -93, 95, 58, 47, -99, -36, 45, 61, 98, 31, -36, -15, -10, -58, 64, 118, -88, -40, -22, 51, -33, -99, -63, -119, -51, 8, -84, -127, -81, 125, 118, -84, 33, -27, -62, 119, -13, -66, 14, 11, -34, 26, 5, 109, 28, 30, -62, -90, 1, -9, 104, -16, 96, -55, -113, -66, -117, -29, 122, -44, -64, 33, -6, -13, 59, -52, -29, 116, 107, 64, 87, 99, 75, -124, -126, 89, -13, -11, 71, -126, 67, 2, -77, 67, 33, 22, 28, -77, -2, 1, -81, -42, -64, 41, -98, -109, -52, 74, 109, -31, 99, -59, 65, -54, -13, -60, 10, -46, 18, 54, -93, 126, 87, -59, -89, -84, 85, -98, 84, 119, -48, -26, 9, 108, -74, -96, 50, 107, 105, -111, 10, 119, 103, -82, -83, 13, -87, 112, -117, 34, -50, -9, 64, 37, 30, 73, 20, -5, 54, -54, -98, -128};
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
    msg.setTimeStamp(0.09710821745711629);
    msg.setSource(45904U);
    msg.setSourceEntity(13U);
    msg.setDestination(7918U);
    msg.setDestinationEntity(135U);
    msg.type = 56U;
    msg.speed = 21020U;
    const signed char tmp_msg_0[] = {-27, 123, 7, 5, -40, -85, 111, 71, 96, 91, -97, 99, -38, -2, 22, 45, -6, 91, -78, 4, 105, 124, 38, -110, 34, 26, 111, -28, -9, -29, -7, -85, -99, -18, 59, 7, -107, -93, -15, -64, -8, -12, -62, 114, 122, 17, 88, 81, 83, 10, 63, -76, 90, -25, 52, 25, -7, 66, -45, -99, 106, 125, -85, 98, -28, -125, -41, -6, -122, -35, 29, 84, -7, -70, -77, -13, -53, 71, -70, -54, -13, 70, 48, 91, 65, -85, -84, 37, -37, -44, 111, -9, 63, 10, 101, -66, -15, -31, 49, 125, -5, 10, -112, -81, -89, -29, -120, -118, 116, -49, -76, 82, -11, -128, -35, 105, 109, 96, 59, 116, -82, 27, 81, -23, -126, 8, 55, 109, 36, 42, -43, -29, -17, -89, -57, -127, -24, -118, 96, -83, 117, 27, 21, 111, 118, -47, -128, -54, 38, 103, -38, 62, -91, -114};
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
    msg.setTimeStamp(0.21751616929956796);
    msg.setSource(24598U);
    msg.setSourceEntity(142U);
    msg.setDestination(232U);
    msg.setDestinationEntity(137U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.04854183668671008;
    msg.bank2p_pgain = 0.5803431128418869;

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
    msg.setTimeStamp(0.013908014853520778);
    msg.setSource(320U);
    msg.setSourceEntity(80U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(33U);
    msg.op = 92U;
    msg.tas2acc_pgain = 0.17279279297989525;
    msg.bank2p_pgain = 0.3755716317331951;

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
    msg.setTimeStamp(0.8935730395345045);
    msg.setSource(32061U);
    msg.setSourceEntity(69U);
    msg.setDestination(36338U);
    msg.setDestinationEntity(83U);
    msg.op = 95U;
    msg.tas2acc_pgain = 0.37535434652726674;
    msg.bank2p_pgain = 0.6430240230947094;

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
    msg.setTimeStamp(0.2391861380667748);
    msg.setSource(22897U);
    msg.setSourceEntity(64U);
    msg.setDestination(18089U);
    msg.setDestinationEntity(22U);
    msg.available = 4271103117U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.9266165249006886);
    msg.setSource(39181U);
    msg.setSourceEntity(107U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(134U);
    msg.available = 1983469281U;
    msg.value = 206U;

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
    msg.setTimeStamp(0.18784883779154427);
    msg.setSource(6641U);
    msg.setSourceEntity(151U);
    msg.setDestination(36481U);
    msg.setDestinationEntity(183U);
    msg.available = 2807024849U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.9025792051755558);
    msg.setSource(16588U);
    msg.setSourceEntity(163U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(226U);
    msg.op = 210U;
    msg.snapshot.assign("RKMKVZSPGTRAPHCXXVUJWEQUCZEGDQRKGFHLJRUEJBFNCOIYVNOSZWTEJTQZJWPWYGBNDBTTUBXWBWEUQZUNLDGVIYSLXERMZTFAJHDFGNYVIYMMQXCEAPPAXNFHBCVCSHCDLMTKPURHFQLGPGNWWYJIQSOGOIMY");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.7720754401524753;
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
    msg.setTimeStamp(0.5291555127787657);
    msg.setSource(15110U);
    msg.setSourceEntity(213U);
    msg.setDestination(2579U);
    msg.setDestinationEntity(99U);
    msg.op = 237U;
    msg.snapshot.assign("MMZRJDHESTFZDQWGCGFWJHOMDFWVJBPUPGBHRBMLAEDCUVZAGIOJEVXFENQQTKUHMSEIGAVZLJFONEAETZNIVGFWLRXIJWRZRAUFJYCZCKPXXHOWXWDCJMVIYDIOSLTVRMFYOHKUXKHQBNVGOMKQAXKAUSGNSRQUSNARZTIDXAGQFNPJKYNRPHJBDCYXLYZSIPCOUPIYRPBOSP");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.7708513144894075;
    tmp_msg_0.sys_src = 5660U;
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
    msg.setTimeStamp(0.7227124064193946);
    msg.setSource(36251U);
    msg.setSourceEntity(19U);
    msg.setDestination(45478U);
    msg.setDestinationEntity(114U);
    msg.op = 246U;
    msg.snapshot.assign("TPYPEVCRDYPYLGQEMVJSOUCHCJYZXXRNVBHRVKUTGLOILMOFAYNTDMGRISCTUFKRVJXOTRKWGEWATONAMSDUGLZEKSIJZKPLQXALZUNVREYBGNHRLCAIZAUIBDGMMENAHJTOWJCVSQKFIREMIGZDHZZQYJAHSCSEXCNK");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 215U;
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
    msg.setTimeStamp(0.7890740080454213);
    msg.setSource(60379U);
    msg.setSourceEntity(144U);
    msg.setDestination(24009U);
    msg.setDestinationEntity(233U);
    msg.op = 7U;
    msg.name.assign("ASXBEHQQUYRWTUUTLSVDGZYLEZIYAPJVAHTOFISGONJXYHBULNUWVQXSROIDPQPKXPJNHQPTAMWMEHS");

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
    msg.setTimeStamp(0.6752580735948707);
    msg.setSource(18371U);
    msg.setSourceEntity(154U);
    msg.setDestination(10937U);
    msg.setDestinationEntity(32U);
    msg.op = 216U;
    msg.name.assign("OENXQDNQDMNXCUIOTSGFMKIOBWNCNIMNXQAOTRNPTDAOAVUOHEWHJTKUMFLDFVJWSLILUBRXWKRVTNBGGSPGLYKJRCGVTEVQYSTWZMLIUUZHEBAXYWXAYAQBBIBAMPHEIFQMREYTKSOEZPCKF");

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
    msg.setTimeStamp(0.27093876448);
    msg.setSource(32383U);
    msg.setSourceEntity(78U);
    msg.setDestination(48549U);
    msg.setDestinationEntity(43U);
    msg.op = 179U;
    msg.name.assign("INGIRQUYSPAQHRZDAULJHJJKYFEULBVSRTMPGFSOEDVAPPUDLSZMHWXXEFKVKOODLRQIXYYJMDIPXKURBPOKUMHSZVATUZZPDMBNRJICXWBLUGIBTFLCXQPAGFFYQCHGIKHZBTVVKBJTMIVLCWMECKCZWVNSXYSEXLWRUHJCGAXDQYEBWMGTTEWHJEYCNLABHJGZYNTRANGVMCARSTIOQOQTZS");

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
    msg.setTimeStamp(0.35785971426479124);
    msg.setSource(28763U);
    msg.setSourceEntity(88U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(156U);
    msg.type = 149U;
    msg.htime = 0.10217109073514452;
    msg.context.assign("JJNARWBGADEOOLBHCPYQSUTUZMFASZH");
    msg.text.assign("SLWPBCHXUGADUCBTNNCVYTLQGHTPINUMTXSDOYKUWHN");

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
    msg.setTimeStamp(0.7933066969849771);
    msg.setSource(135U);
    msg.setSourceEntity(241U);
    msg.setDestination(33816U);
    msg.setDestinationEntity(222U);
    msg.type = 233U;
    msg.htime = 0.42571836937077334;
    msg.context.assign("YOOVLAGDLJZIJZTHCSUTLJCCPNRXWURMQXZKAYIQXWYOKWVMUMYHSHCEMMBLKTBDPGRRSIFUOBGFJMVTNYHZXIKEBLZKEUAOZHEPRUNRYCAPTWPMRDEEYHRTFNFAQGLDTQNKDXPKRVEFKCINMYDWLVZPKGVYUJOUJNAFWZEXSGXVHCQVXNNLQBDDHISNDHZLFYHTFSSJ");
    msg.text.assign("CYJJGVIVBRUEMYAJRWYXOAGLEOHZDRPTVZRLMPDQOWOQFQDFESDOYNVNGKBWGSGSHCTQN");

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
    msg.setTimeStamp(0.19206198481819015);
    msg.setSource(10326U);
    msg.setSourceEntity(162U);
    msg.setDestination(22417U);
    msg.setDestinationEntity(49U);
    msg.type = 135U;
    msg.htime = 0.8681387004524588;
    msg.context.assign("DQRHWKZYXMODPZGVJTDFGFIOVUVYKMVVLHYEYAIZNQLGPEJIWRAXYXWPTLVDLHNYQZRERPJXJFJOELWNQXXIGDFMWDIMZAMCSCFUAHFOYOBCNKWKWEEDHJGYLSQFBXUALTSAFUBTEXERUKVQBRCZJGDGTRFLWHDNLHMPWHAPCUNSAZOJZEOCIBDTGFQKTZJMTNSIPMLKBPAVKOBCBOYNSCOJVKNPQCXSRBCBUQTXAEGIKHUZGHPRWYMSISNIQ");
    msg.text.assign("DZMLKMNQUNVCRWWMTUCFNCNPUXJBRJMODSXIBMRXDBUDQOXCCKEKHOYCDYISVBMPYOAHQVFKZOPFWAAVPHJYMLCRXPZLVXISESYMZUGWVSLCZEAZWSEAJABSUKAZGIKOEIGYHVRPKFMOEENTEJROD");

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
    msg.setTimeStamp(0.7060553911082471);
    msg.setSource(3470U);
    msg.setSourceEntity(154U);
    msg.setDestination(63340U);
    msg.setDestinationEntity(233U);
    msg.command = 153U;
    msg.htime = 0.4148122814903322;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 209U;
    tmp_msg_0.htime = 0.6193820805608566;
    tmp_msg_0.context.assign("MHHVPOVSOJZLEYPRHDIEIBAQCICVARGVNDXCCTBXFDUHENGLZEQSCRYUXVMLYPMEASSDGVKKZUOYLAMOEJLGHWAWYJTNVAPRJZQCLTNOTXKNVLHTKSYUBYKXGFJWRONGWQQWZRRPUUDIMXPEC");
    tmp_msg_0.text.assign("QCNPKWSHVUDQVYVBTODHKBFKXXSENJQNIAPVSIPOFOKJWOLEREEXZHXZCFYFLCFSZLFGXGIBNHXOVUJEXCIAKBOUJUQLQWRRMVIUIPCJZBSRBWADOMWXGQYVIDPPRYHLVKUZMESKJBCTWTDTNUHCQYBTCDMNFWWZMYKVSJLJGEEIHDSQYLDBGCWMAHFXXIDKM");
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
    msg.setTimeStamp(0.0201775288301298);
    msg.setSource(36467U);
    msg.setSourceEntity(141U);
    msg.setDestination(56794U);
    msg.setDestinationEntity(15U);
    msg.command = 199U;
    msg.htime = 0.399020846828681;

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
    msg.setTimeStamp(0.8533864304680246);
    msg.setSource(25606U);
    msg.setSourceEntity(153U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(188U);
    msg.command = 34U;
    msg.htime = 0.962493710164945;

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
    msg.setTimeStamp(0.5741271039969208);
    msg.setSource(40963U);
    msg.setSourceEntity(29U);
    msg.setDestination(24596U);
    msg.setDestinationEntity(91U);
    msg.op = 186U;
    msg.file.assign("PQPNMUYPBVLZD");

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
    msg.setTimeStamp(0.2647904782400814);
    msg.setSource(42522U);
    msg.setSourceEntity(205U);
    msg.setDestination(53519U);
    msg.setDestinationEntity(223U);
    msg.op = 254U;
    msg.file.assign("JJPIKPJNZFMUSHQDEGCXOPTHCLUKQTAVZUABBBJCOCAVHSRNDSREVVYPTKSLZGKAMKYRZFMCGBILUAEQONZFPWGJTXXRSSIVYQKKC");

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
    msg.setTimeStamp(0.7402460055646367);
    msg.setSource(26526U);
    msg.setSourceEntity(199U);
    msg.setDestination(17491U);
    msg.setDestinationEntity(27U);
    msg.op = 203U;
    msg.file.assign("EJGGXIHXQWDBDBGEZUKCEAKPYFRMRNOOSSQUBCJCAXIVONNVMZRSWEQDMPAFZEJYHDXDHCPKQTUCOJIRSGFFAGPICDVWTMUOWLVLUATJFNTYWKYLEDRORGHFSTJQEMZMHHPPWHQURYJCYLMKJQPGGEXSMJIZZORKWEINPVBAKXYQALGKVPYUKBLXVABZ");

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
    msg.setTimeStamp(0.9360513323986175);
    msg.setSource(9504U);
    msg.setSourceEntity(150U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(147U);
    msg.op = 137U;
    msg.clock = 0.029066801754828786;
    msg.tz = -35;

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
    msg.setTimeStamp(0.6782018632913985);
    msg.setSource(7328U);
    msg.setSourceEntity(10U);
    msg.setDestination(50395U);
    msg.setDestinationEntity(180U);
    msg.op = 249U;
    msg.clock = 0.11575897515174793;
    msg.tz = -83;

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
    msg.setTimeStamp(0.16099977612607208);
    msg.setSource(7663U);
    msg.setSourceEntity(235U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(209U);
    msg.op = 52U;
    msg.clock = 0.49039477459854175;
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
    msg.setTimeStamp(0.7348307658110097);
    msg.setSource(8511U);
    msg.setSourceEntity(80U);
    msg.setDestination(61963U);
    msg.setDestinationEntity(196U);
    msg.conductivity = 0.8065133336283594;
    msg.temperature = 0.4295679963891269;
    msg.depth = 0.8466843245280508;

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
    msg.setTimeStamp(0.7939243525471023);
    msg.setSource(23651U);
    msg.setSourceEntity(109U);
    msg.setDestination(54580U);
    msg.setDestinationEntity(131U);
    msg.conductivity = 0.49478739416657247;
    msg.temperature = 0.6458242876311545;
    msg.depth = 0.8009356426914285;

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
    msg.setTimeStamp(0.9700911170780284);
    msg.setSource(44822U);
    msg.setSourceEntity(143U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(93U);
    msg.conductivity = 0.6539829626174475;
    msg.temperature = 0.0741454037973841;
    msg.depth = 0.20166458115095798;

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
    msg.setTimeStamp(0.47589266285702725);
    msg.setSource(515U);
    msg.setSourceEntity(173U);
    msg.setDestination(7902U);
    msg.setDestinationEntity(253U);
    msg.altitude = 0.8330700424028582;
    msg.roll = 54426U;
    msg.pitch = 25801U;
    msg.yaw = 31658U;
    msg.speed = 8433;

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
    msg.setTimeStamp(0.9725128150044468);
    msg.setSource(27421U);
    msg.setSourceEntity(248U);
    msg.setDestination(18139U);
    msg.setDestinationEntity(228U);
    msg.altitude = 0.6906829901187544;
    msg.roll = 29938U;
    msg.pitch = 55018U;
    msg.yaw = 48686U;
    msg.speed = 7538;

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
    msg.setTimeStamp(0.6095694367364031);
    msg.setSource(32501U);
    msg.setSourceEntity(135U);
    msg.setDestination(11343U);
    msg.setDestinationEntity(251U);
    msg.altitude = 0.256806934172091;
    msg.roll = 60763U;
    msg.pitch = 63377U;
    msg.yaw = 7801U;
    msg.speed = 23267;

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
    msg.setTimeStamp(0.02050043423779846);
    msg.setSource(25969U);
    msg.setSourceEntity(91U);
    msg.setDestination(39583U);
    msg.setDestinationEntity(226U);
    msg.altitude = 0.16821202308383132;
    msg.width = 0.007199658500106287;
    msg.length = 0.951415145708708;
    msg.bearing = 0.5865539989353535;
    msg.pxl = -13249;
    msg.encoding = 233U;
    const signed char tmp_msg_0[] = {65, 106, 119, 22, -75, 57, -31, 82, 79, -63, -23, 78, -89, 13, -101, -123, -65, -102, -31, -84, 115, -96, 66, 122, -33, -108, -45, -45, 125, 107, 43, -72, -14, 97, -45, 114, -72, 89, -85, -1, 107, -74, -116, 60, 22, -24, 16, 10, -93, -120, -30, -64, -100, -109, 125, -91, 5, -73, 111, -7, 43, -49, -29, -34, 96, 75, -1, -107, 120, 18, 83, 28, -75, -21, -75, -123, 122, -5, 120, -55, -98, 69, 29, -40, -94, -27, 51, 6, -90, 111, -14, 6, 90, 15, -94, 107, -72, -101, 124, 20, -66, 4, 55, -116, -114, -91, 75, 118, -94, -59, 42, -32, 12, -24, -91, 9, -119, -126, 96, 44, -15, -75, 126, 54, -53, -22, 20, -114, -15, -41, 69, 18, -102, -29, 54, -85, -7, 125, 28, -76, 70, -105, 82, 123, -83, -120, -25, -28, 121, -13, 65, 17, 86, -97, 45, 52, 103, 108, -23, -47, -108, -52, -15, -83, 15, 11, -127, -38, -100, 124, 73, -4, 31, 58, 3, 75, -61, -121};
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
    msg.setTimeStamp(0.564120347839028);
    msg.setSource(916U);
    msg.setSourceEntity(74U);
    msg.setDestination(842U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.9675235255537817;
    msg.width = 0.4820993917363914;
    msg.length = 0.008792210510530363;
    msg.bearing = 0.26162467738353357;
    msg.pxl = -30199;
    msg.encoding = 22U;
    const signed char tmp_msg_0[] = {-100, 75, -101, -78, -22, -78, 100, 78, -27, -81, -42, -110, -119, -81, -107, -56, -104, -88, 54, -33, 78, 49, -112, 26, -27, 110, 111, 18, 47, 32, -81, -52, 100, -106, -44, 27, 121, 48, 105, 108, -87, -117, 34, 91, 59, 66, -53, 88, -46, 88, -86, 52, 63, -10, -35, 118, -33, 71, 53, 51, -108, 102, -56, -2, -61, 62, 40, 26, -35, -55, -4, 125, -99, -32, 66, 41, 86, 122, 112, 124, -93, 97, 104, -47, 91, 41, -25, 80, -64, -5, 72, 24, -128, 75, -84, 11, -2, 94, 73, 7, -125, 119, 77, -90, -112, 32, 96, -1, 1, -30, -67, -39, 93, 104, 32, -91, -83, 97, 30, -15, -39, 97, 100, 19, -2, 115, -81, 72, 111, 126, 20, -5, 54, 95, 2, 72};
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
    msg.setTimeStamp(0.9942453824374599);
    msg.setSource(53525U);
    msg.setSourceEntity(220U);
    msg.setDestination(52657U);
    msg.setDestinationEntity(107U);
    msg.altitude = 0.08238137499932552;
    msg.width = 0.9088415193186189;
    msg.length = 0.02277222492259945;
    msg.bearing = 0.6285145503029614;
    msg.pxl = -5721;
    msg.encoding = 164U;
    const signed char tmp_msg_0[] = {-43, 68, -33, -126, 16, 34, 27, 123, 0, 76, 95, -54, 116, 117, -65, -55, 68, 58, -113, 70, -86, -71, -36, -121, -24, 54, -69, -32, 111, -12, 120, -55, -92, -31, 107, 84, -19, -79, 120, 85, -36, 6, 36, 96, 105, -37, -79, -23, 113, -45, 43, -46, -7, -84, 113, 54, 56, -56, -82, -46, 22, 30, -99, -122, -13, 24, -89, -43, -112, 70, 89, -105, 102, -29, -45, 5, -54, 66, 13, -1, -118, 8, 121, -74, -61, 9, 4, 11, -28, -52, 10, 93, 63, 33, 103, 63, 43, -33, 35, 111, 43, 17, 66, -9, -101, -43, 31, 104, -11, 17, 53, -89, 91, -94, 18, 107, 27, -55, -9, -97, 52, -37, -34, 117, -26, 60, 34, -18, -56, -54, -28, -53, -95, -123, 93, -118, 61, 24, -59, -80, 83, 8, 18, 20, -87, -103, 70, -28, 93, -38, -53, 120, -20, -22, -53, 26, 99, -24, 16, -120, 31, -19, 96, -20, 37, -18, -94, -75, -109, 26, -52};
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
    msg.setTimeStamp(0.026807965868396844);
    msg.setSource(46800U);
    msg.setSourceEntity(206U);
    msg.setDestination(39203U);
    msg.setDestinationEntity(163U);
    msg.text.assign("FQUYOFJFWIDCUHJVCUGKJJGXLQTZOHUYLHIORJWYEYUQDUJZIQMTZWEREEGNCMFCNQTVYTVUKSHRLXEALNACKFMAASLZUEMFHVPAMRJLFCHOTSIDABBSQKTGMUKZYADGMHDBXQDWDEVZXHPGJJAKIQIKDPNRLXEVIZNMOJBHXKPTODPXVGIZRPEICNOQFSNVBZRPTNFDLBKKVYFMS");
    msg.type = 88U;

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
    msg.setTimeStamp(0.6267269002512088);
    msg.setSource(17143U);
    msg.setSourceEntity(33U);
    msg.setDestination(40861U);
    msg.setDestinationEntity(125U);
    msg.text.assign("FGPZLWAQAHHNHTILYBLFMDTEERGPYTKIJAOQJNHMLZCLDPFBHSHKEGVOOIJIYCVMXRENUVKAQZFMVDFQQTRSRZOEAYEWLWSXCQRHGOOXUTJUWGIQUKGJMVUFZXHFKSYVKBA");
    msg.type = 72U;

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
    msg.setTimeStamp(0.08668700808201091);
    msg.setSource(57974U);
    msg.setSourceEntity(41U);
    msg.setDestination(55704U);
    msg.setDestinationEntity(245U);
    msg.text.assign("ULMCEQEXZJTNXGXQHUOVBSPIGCUDMIWHQWGACGOJPYBYRVVWWUZHVIZMKSIWSARSOSKDFOVTYVLWFPRTDZWBZKOHHBJDAKZAOUSBAOFCJBWPIKTDSQECATMGMPWIWAKNAFYJINISFUNCLTTOKGDREATDRCPULIXZFHYVNHSNNBPXVQZFMQKYQMPLDXOJRMDQLHZE");
    msg.type = 50U;

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
    msg.setTimeStamp(0.03655095758389959);
    msg.setSource(11907U);
    msg.setSourceEntity(203U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(7U);
    msg.parameter = 165U;
    msg.numsamples = 87U;
    msg.lat = 0.9433311586464554;
    msg.lon = 0.8268271375885544;

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
    msg.setTimeStamp(0.17318250074315045);
    msg.setSource(30148U);
    msg.setSourceEntity(67U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(194U);
    msg.parameter = 158U;
    msg.numsamples = 46U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 57284U;
    tmp_msg_0.avg = 0.9850465472420991;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.4013468382716485;
    msg.lon = 0.47538795810077494;

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
    msg.setTimeStamp(0.5267063133434399);
    msg.setSource(21526U);
    msg.setSourceEntity(127U);
    msg.setDestination(51413U);
    msg.setDestinationEntity(2U);
    msg.parameter = 13U;
    msg.numsamples = 146U;
    msg.lat = 0.6497883060789881;
    msg.lon = 0.6511997780916928;

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
    msg.setTimeStamp(0.7200640579032564);
    msg.setSource(55440U);
    msg.setSourceEntity(42U);
    msg.setDestination(43388U);
    msg.setDestinationEntity(217U);
    msg.depth = 23685U;
    msg.avg = 0.5095020578155346;

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
    msg.setTimeStamp(0.304078271101376);
    msg.setSource(875U);
    msg.setSourceEntity(56U);
    msg.setDestination(22136U);
    msg.setDestinationEntity(139U);
    msg.depth = 13843U;
    msg.avg = 0.5325070515674643;

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
    msg.setTimeStamp(0.681291209529024);
    msg.setSource(59392U);
    msg.setSourceEntity(185U);
    msg.setDestination(50244U);
    msg.setDestinationEntity(219U);
    msg.depth = 37542U;
    msg.avg = 0.6721498752361496;

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
    msg.setTimeStamp(0.1178761275268504);
    msg.setSource(52107U);
    msg.setSourceEntity(92U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.33490099888993097);
    msg.setSource(19089U);
    msg.setSourceEntity(206U);
    msg.setDestination(26222U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.8600280669355724);
    msg.setSource(59336U);
    msg.setSourceEntity(209U);
    msg.setDestination(13611U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.867317090549342);
    msg.setSource(44419U);
    msg.setSourceEntity(203U);
    msg.setDestination(9393U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("GXRXLLMODZTWSEHTDDFEFJVNPFVDJITLSWZWUKQUHUIULGROIKPGCIOLKBMZTSWMBUXZFRQSIQBNQFAXGOPWRPQTAPBJIQNVEMYQXBAYBSZECXJNHEGQCNENYVPGKHLYNMRRMMFELBPTGHOJSVIXSYFHRCSUHKTAZKCLIIKJFYXRTPOWUQXURVCWZDOWEDYBRPYDKPQNSVG");
    msg.sys_type = 16U;
    msg.owner = 4290U;
    msg.lat = 0.714506911151463;
    msg.lon = 0.6508027018843436;
    msg.height = 0.3971175982341689;
    msg.services.assign("FRBJMZASXQCSVKDPPIYMQJMIPNEQDZJBZHFXCEIKCSORTZEGFTGIQUDKZLISBHMGUAAYZBGYIZXQKVMIREWTDOXNBRGNAZSWHNVEOECIUCFKTPRSRHSYTXAPPFWNSDULEFRUKCVKKKVLQEAMOPAHOOQLFYJEFAYVVLCGRJXPWNTDEJANTTMLBPUZDLCBCMBIGCWASLITJWUHOBDUV");

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
    msg.setTimeStamp(0.7510028031725798);
    msg.setSource(61672U);
    msg.setSourceEntity(187U);
    msg.setDestination(34480U);
    msg.setDestinationEntity(229U);
    msg.sys_name.assign("VDLQMMGYTJMFRJQWTARZFYUHKAAYYNNILLOBTIHXHLCCZLVSSBOEMSQUFRYJWFJICBVPZQNGVQAAZMJHGEXMOTIJRYVIADJGBRRNSZJAWHFWXEFAJGORMEYBTWUWUDDUPUDNFNDKSYGFCKPTTSSQLCX");
    msg.sys_type = 38U;
    msg.owner = 63748U;
    msg.lat = 0.46027273763646503;
    msg.lon = 0.9783967011529923;
    msg.height = 0.9921437247204078;
    msg.services.assign("YVCSDBLMQJEYCBNZMPXFGNBSPCCETMBQTYSCTPRAROVMUXKEZEKZDOQZOKNXLIRGMTLSZXKMKIHIJTSOGKCUTEPOMGALNZOESOKTPFDRXVUMSOBESOUHVNVV");

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
    msg.setTimeStamp(0.5236272301384371);
    msg.setSource(1932U);
    msg.setSourceEntity(158U);
    msg.setDestination(44831U);
    msg.setDestinationEntity(234U);
    msg.sys_name.assign("EGZMJTFBWKDCKQQKSQPQGPWILCOLAXPEUDMUDIPWAHDIWNVTBBXATQFNTQYHDZREFNAUIHPSWBVBKNWWKMVVAIGOTJENNYWAZCFYFDDKMRPFCKBCQORGCJYJMFLWZVCXGXDZSHDTHLIXXNYSLJJULOYTHBUXMNSHCOGEKEO");
    msg.sys_type = 38U;
    msg.owner = 29518U;
    msg.lat = 0.5284085374645068;
    msg.lon = 0.6944630868842175;
    msg.height = 0.966867511405833;
    msg.services.assign("PBWFNKFRUMCCGSSZGMCJZXPCNDZUJXIVBVUQTHMXCBTKTUERWJTLOEALOXELWJUIQLUMCOTWN");

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
    msg.setTimeStamp(0.27600346490090577);
    msg.setSource(55360U);
    msg.setSourceEntity(16U);
    msg.setDestination(64716U);
    msg.setDestinationEntity(221U);
    msg.service.assign("IWHTRCXXQYNSBRTXLTXIMPZHVACGGGNRFUSAQDKMQSIVZUAFYLXCOIKYZJBHDSHRUJMOMBEGEMZNRZBEQJXJOSJWGTNJTBPHWDUQRFVUFYKRCVDQ");
    msg.service_type = 124U;

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
    msg.setTimeStamp(0.911578356816623);
    msg.setSource(39409U);
    msg.setSourceEntity(190U);
    msg.setDestination(60091U);
    msg.setDestinationEntity(185U);
    msg.service.assign("HMOKSNZGEPMBDRBKKFGAITBDQZHFYLWDLLDDJMIHNYWTDETPMKEEFXDFVWLCTNUYIWTWOZSWTFUZRIWZRUJCJDSPAYMPNKBGGVZRYGIUCLZGMMAACAFJBOROHJTUQRFESFVIHGDNMSUJMLUWFZWHAJKAFVYPCHTPLSQUGXVLPKCXOKJBCOGCQVNQBZVVEQJAQPIXKDNKEEORYBCG");
    msg.service_type = 231U;

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
    msg.setTimeStamp(0.39434773521579325);
    msg.setSource(52617U);
    msg.setSourceEntity(23U);
    msg.setDestination(22112U);
    msg.setDestinationEntity(40U);
    msg.service.assign("OLMSZAWQNUHDEZSPMZOYTXLAPOVDCCTBXYFVVRVESGFVBLCRCDZJABKPLMMYNZCFUBWYOGDNGNRYCXDQVSNUFWTHGXLANXENNAHEQAGISOLSJPQWGKJQCQHPIRXZURBCGFVYPTQWCKDXHVJTICJIJTRRTKSGYOJOHESNFNQEUEIZUIRQZTJLLDMYXVFRZHUTFSAHEMKPTBZEUMUXALAKWWKWWFXJKHFBLOIBRSP");
    msg.service_type = 240U;

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
    msg.setTimeStamp(0.11265142452409893);
    msg.setSource(29398U);
    msg.setSourceEntity(181U);
    msg.setDestination(59263U);
    msg.setDestinationEntity(187U);
    msg.value = 0.030049914933903854;

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
    msg.setTimeStamp(0.7714974460715003);
    msg.setSource(40969U);
    msg.setSourceEntity(161U);
    msg.setDestination(46170U);
    msg.setDestinationEntity(188U);
    msg.value = 0.1408199746192862;

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
    msg.setTimeStamp(0.7641532145274593);
    msg.setSource(64265U);
    msg.setSourceEntity(66U);
    msg.setDestination(31904U);
    msg.setDestinationEntity(97U);
    msg.value = 0.013843734300136301;

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
    msg.setTimeStamp(0.7059857275457673);
    msg.setSource(28012U);
    msg.setSourceEntity(246U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(60U);
    msg.value = 0.47136302594994506;

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
    msg.setTimeStamp(0.3820707078964162);
    msg.setSource(47823U);
    msg.setSourceEntity(200U);
    msg.setDestination(50539U);
    msg.setDestinationEntity(140U);
    msg.value = 0.025917003371102254;

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
    msg.setTimeStamp(0.11100623259773879);
    msg.setSource(10345U);
    msg.setSourceEntity(197U);
    msg.setDestination(51632U);
    msg.setDestinationEntity(132U);
    msg.value = 0.1393766418697553;

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
    msg.setTimeStamp(0.8977292357529344);
    msg.setSource(56828U);
    msg.setSourceEntity(204U);
    msg.setDestination(63961U);
    msg.setDestinationEntity(52U);
    msg.value = 0.5103383715613131;

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
    msg.setTimeStamp(0.07799448115178598);
    msg.setSource(22284U);
    msg.setSourceEntity(245U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(119U);
    msg.value = 0.6999305250455106;

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
    msg.setTimeStamp(0.6741050839515765);
    msg.setSource(16806U);
    msg.setSourceEntity(22U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5564444633766691;

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
    msg.setTimeStamp(0.2735706274700975);
    msg.setSource(65082U);
    msg.setSourceEntity(235U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(105U);
    msg.number.assign("ZZDPWGPOXHVKKGOKTXWAHMBUFHSAACXFWGTNSAZZHBEYIKJLPLLZEFVSSOMMSRUXVMJZJUVRBUEHGSWIKROIJNMDGIXXDRCQNIQUDKG");
    msg.timeout = 30586U;
    msg.contents.assign("OAGNHYJZTBZZUGHXZNSTBCAMYJXWCMBRVWKQPBHQPBLOEQWDTIMNJMAVADBEDHZGKHNLFOVSHAQYNCJGJYYTICSMDDEFYRWPEVDRHIRIRFPHDIKXONCFTFXFZAETZPUGYYPLUTOCTFSPSCJUAUSXUWCKQZLIKCMGGRMVEEQQLNBDANLUW");

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
    msg.setTimeStamp(0.24457996678899452);
    msg.setSource(37897U);
    msg.setSourceEntity(189U);
    msg.setDestination(9945U);
    msg.setDestinationEntity(245U);
    msg.number.assign("GPYRAJGIZPUVPHEZQTKWHWGGQLLBVQRYECJKDEPHJCXBURNSJRJCRMMTVKZBFIXAQGWMMJXDROAGFXOUDKAGCCUFKKPSEZLQHENTPTRZPXPFATMWMHODTHUZVXAJQWYSYXTDBIEISJUSLUQGCLGXNSSANRYZEIQIMVWNHBPMBLZOJFGEOIYTSNONUCBAIXWTOFN");
    msg.timeout = 17247U;
    msg.contents.assign("BJTBPTSFUESMGHPBTEMIEDJQKHNEDMFJHRGGBXZKJYTYPTUGMZNCAAPGYKNTCPSBCMALJAJRZHMKIVTRYUHZOLCQDEYDKUKRBCBJKDWRGOVQEPFCOCFOLLWLXYZWIVGOKWLPQUMZKUXYWRNXFWMLYZNUVOXVAROWIVNGXQGNEWKUXDLBHLSHVVJON");

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
    msg.setTimeStamp(0.03379384370644889);
    msg.setSource(39824U);
    msg.setSourceEntity(150U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(140U);
    msg.number.assign("JZDPBFLUYHVJEKDIORQTYOLCUUFMEIMVTIHSVYFSEWPDBRAFCMNLJIDWGLZUIQBDBEBOQJSGCGRANJNFFTFVSLLIDKHCMTVYAHQTPJNWRHLAANQLBIPWADWFKOVQJUXGMIKLM");
    msg.timeout = 7348U;
    msg.contents.assign("BHKXUWUKDYPQGHGGRCUBATFZOIWOCEHMWWAORZJSPFHHZXREJIJPSUKQPIGXCNLJIFCDDETQTSLNAHSMLXAWNINZVXDDRBXOYMPANBKPYMBCNRXZXMDMMMYTKZCWCVGIPFPUZQJBHZRNARSTIWUEHSEWCNMHVSZJTMPACFRNTBIVVTFYSVDZOODUJNYSSWHWGJYOUEXFAFCYDOFBUYJLELRYJEKVOQLVQLLOGXPKQGAKIQGEGRB");

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
    msg.setTimeStamp(0.82721881859349);
    msg.setSource(36451U);
    msg.setSourceEntity(59U);
    msg.setDestination(29991U);
    msg.setDestinationEntity(10U);
    msg.seq = 492492600U;
    msg.destination.assign("WRZULAIXTUIBOOGIOYTILDZHOFBXQRUJYOPMITHQHBONRSBEPNVARPNPSJPRDJNJDEHUTYNYHHMOLMNMXQJDMFWZEKCUFAZPCESSOPIGG");
    msg.timeout = 2038U;
    const signed char tmp_msg_0[] = {39, 67, -115, -116, 119, 14, 73, 108, 26, -111, -111, 62, 93, 120, 11, 69, 62, -124, 75, 121, -22, -12, 59, 75, -110, 3, 42, -106, 20, -38, 10, 8, -111, 39, 110, 50, -9, -118, 120, -110, -5, 32, -100, 121, 76, 75, -51, -108, -104, 120, -19, -111, -89, 94, 19, 108, 75, -6, -49, -76, -77, -83, 35, 33, 43, 84, 59, -106, 65, 46, 47, 11, 53, -72, -10, 20, 6, -78, -110, 47, 113, 45, -18, -48, 55, -47, 9, -115, 56, -67, 95, 114, -44, 38, -102, 30, 18, -88, 24, -126, 29, -122, -109, -98, -6, -125, -115, -57, -43, 56, 20, 34, -29, -50, -53, 101, -43, 9, 89, 61, 80, -13, -77, -76, -86, 122, -82, 64, -6, 103, -110, 102, -36, 9, -9, 96, -9, 106, -58, -2, -9, 79, -63, -55, 14, -58, 98, -93, -37, 1, 64, -2, 32, 42};
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
    msg.setTimeStamp(0.7808761677453211);
    msg.setSource(7918U);
    msg.setSourceEntity(225U);
    msg.setDestination(13179U);
    msg.setDestinationEntity(106U);
    msg.seq = 1707405640U;
    msg.destination.assign("FENADMXOTPOEEWVQNJXZSFYIPXKJMZAFNQJONHDJLZZBNYCXYSVRMLFVJKUEIZSQRHQVSSAXMEUGSRYWKLZLZUYPEDYTGKOZZFMDYWHDFREKOUWJCFVVANBUBTGUCGQPGCTDRSPRQHJXEPDRMEAVHLTFGOINLDACKGVTXSQHFYAYLOECABOMFQQDLRIWBGJXWRNBGZTP");
    msg.timeout = 22551U;
    const signed char tmp_msg_0[] = {61, 68, -64, -29, -61, -26, 87, -2, 27, -1, -50, -104, -76, -89, -83, 111, -74, -27, 86, 23, 72, -119, -12, 119, -82, -22, 1, -62, -12, -27, 84, -10, -37, 30, -33, 38, -53, 82, 34, 10, -110, -12, -113, -59, -120, -56, 55, 9, 20, 99, 106, 108, -87, -52, -51, -97, -69, 110, 85, -35, -43, 14, 100, 115, 112, 62, -73, -94, -108, 47, 19, 117, -60, 111, -46, -65, -22, -102, 126, 98, -108, 113, 112, 89, 34, -34, -101, 3, -127, -117, 16, -6, 29, 98, -102, 117, 118, -32, -80, 32, 104, -81, -78, 94, 28, 90, -118, -24, -100, -114, -18, -85, 0, -29, -91, 29, -20, -108, 0, 101, -54, 102, 53, 120, 61, -82, 66, -22, -37, -20, 100, -45, -55, -124, 78, -119, -102, 108, -74, 84, 38, -89, 107, -14, -82, -56, 112, -114, -120, 23, 7, 125, 55, -28, 111, 28, 23, 115, -97, 13, -98, 114, 67, -20, -14, 56, -121, -114, -65, -67, -11, 63, 25, 115, 102, 3, 80, -5, 38, -31, -15, 14};
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
    msg.setTimeStamp(0.416580760749645);
    msg.setSource(17703U);
    msg.setSourceEntity(59U);
    msg.setDestination(60071U);
    msg.setDestinationEntity(145U);
    msg.seq = 2936253737U;
    msg.destination.assign("JZQLDETAUXEFCVNOWAPXYGGQDNKOQKFQZJCCTVTLXDJMQUMRHTGWNVFHIPJZXWESRXVKYPGFMPRYKHEWGARSLKOMTGGLZLVVUIBYXUIVFIUEGADNOHBYBNXJSOPYBIRLAQKUJSERYMTABDINQCVWMWPELAESCCOGKZTOULILHYSBUMIRMWZDFKZCMZHFPCNXCFKFNQJQBVITJNVYSRJLBTNDZIHGSUJSKDRRHPAX");
    msg.timeout = 30203U;
    const signed char tmp_msg_0[] = {-33, 13, -43, 53, 107, 122, -52, -51, -38, 119, 53, 91, -98, -105, 115, 2, -30, -55, 6, -35, 67, -32, 1, -39, 3, 116, 49, -89, 42, 31, 107, -74, 52, -7, -67, -81, -29, 100, 49, 43, -122, 97, -4, 19, 26, 114, 14, -27, 91, -2, -37, 31, -38, -70, 114, 5, -8, -47, 13, 8, -27, 23, -46, 115, 24, 1, 89, 6, 87, -34, 54, -123, 41, -16, -116, -83, -73, -27, 49, 34, -38, 51, -39, -97, 97, 15, -115, 24, 78, -42, -14, 14, 18, 124, -53, -90, 96, -31, -82, -119, -99, 86, -7, 58, -23, -42, -59, -14, 80, -35, -5, -117, -72, -92, 41, 12, -88, 110, -37, 37, 19, 111, 66, -46, -117, 53, -65, -5, -15, 51, -116, -106, 64, 86, -15, 94, -37, 105, -61, 125, -111, 36, 117, 71, 8, 22, -52, 70, -3, -104, 69, -17, -51, 94, -99, 118, 77, 69, -46, -107, -53, 15, -2, 13, 94, 73, 26, 58, 92, 17, -40, -43, -91, -79, -58, -90, -29, -61, -105, -74, 1, 36, 50, 91, 65, -75, 124, -87, 39, 88, 61, -25, 57, 8, -91, 118, -53, 45, 113, 54, -74, -107, -38, -10, -9, 19, -49, -57, -5, -84, -108, 1, -35, 101, 60, -12, -55, 60, -65, 122, 56, -126, -9, -45, -6, -15, 122, -119, 47, 6, 20, 105, -98, 56};
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
    msg.setTimeStamp(0.5838540570190736);
    msg.setSource(23994U);
    msg.setSourceEntity(185U);
    msg.setDestination(7146U);
    msg.setDestinationEntity(20U);
    msg.source.assign("GCLXHBFZEYTIUPOEMNJXJETYHHIKXJTMOAZNTJMDBFQWREKRDZZVRXGOLDTVBDHVAVNTKDRMSBQDUQHVTJYEAWJACHFQGJFSURCTTFYLHZCWHUOXGAZSFVUUGPBXABWNWPDUOFKNKECWKJAZXYRIYKUOYZWNILABIYVZUQCMNLX");
    const signed char tmp_msg_0[] = {110, 70, -69, 102, -71, -101, 5, -59, 28, -124, -121, -107, 72, -48, -19, 40, 88, -96, 107, 37, 125, 45, 92, -14, 62, 123, 51};
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
    msg.setTimeStamp(0.05101517030327074);
    msg.setSource(3123U);
    msg.setSourceEntity(19U);
    msg.setDestination(33937U);
    msg.setDestinationEntity(191U);
    msg.source.assign("AULXQQMHMDZFYYHMNHPGUXKLLLXAFDPQRXPYAQGNZWEMAXZHTILNQDTKUQUNFIVOTVKBJUJIPTDHCVDHWWDNMLIAJWIEKBQERRWZYJLVNWAIBFARFIRVZOFJCTTMXNGOFKMEOHSVCSTPPKSTDSUZLBVSMMDCYZLHPYYDKEQUGSDVRJNGWEIECEXOKJUGWXBZNJAGBCGZSFREC");
    const signed char tmp_msg_0[] = {55, 46, 121, -21, -68, -3, -59, -50, 2, -115, -12, 119, -109, -59, -125, -28, 73, 97, 21, 59, -72, -51, 50, -62, -87, 102, 119, 27, 4, 78, -81, 66, 51, -35, 38, 91, 21, -106, -42, -116, 82, -33, -16, 106, 1, -68, 76, 12, 18, 90, -22, 32, 0, -54, 38, 112, 126, -11, -92, 35};
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
    msg.setTimeStamp(0.7790951762193796);
    msg.setSource(39280U);
    msg.setSourceEntity(250U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(88U);
    msg.source.assign("XBVHERMHXUOALIKHRPIDGFPMTOTHJFDJCQXLVSTBZMCPNAHEJTJKQYBHPGVUOGMBMFBTEWJELECORARNTLSNPXIRZSWEGWMCNVJZQRLUQZRKFWCBLTIPIWDDJKKSHFUZZSHMDBJSUMXWKUVATOQGDEGAELMLRVXFCANFEJGJVKPIYYLQFBXSDIWHKYWEAGAYPPOIUTFUWLBRWDCSTNUNNKUAVKCQBVVYOCXMGYDXFQCGZNARNYQSOIZZOHD");
    const signed char tmp_msg_0[] = {-95, -99, 48, 43, -64, -88, -121, 59, 66, -126, 72, -57, -100, -101, 46, 33, -101, -125, 24, 57, 84, -125, -86, 52, -39, 105, 109, -7, 40, 62, -103, 93, -77, 40, 88, 84, -95, -55, -41, 118, -47, -15, -20, -63, -60, -77, -51, 29, 88, -78, 110, -121, 65, 18, 77, -128, -56, -62, -103, -14, -17, 108, 57, -69, -88, 2, -69, -122, 45, -36, -21, -121, -46, 69, -84, -93, 22, -119, 39, 91, 16, 31, -52, 64, -49, 110, -98, -80, -20, 27, -37, 17, -115, 8, 18, -115, -114, -22, 78, -24, 71, 79, -52, 114, 68, -125, -34, -37, 84, 46, 72, 78, 39, -67, 93, 5, 1, -72, 123, -123, 60, -17, -28, -72, 53, 111, -65, 107, 55, -83, 0, 56, 114, -74, 16, -73, 88, -104, -107, 69, 83, 110, 87, -94, -69, 34, 8, -39, 51, -120, 22, -14, -97, -103, -35, 79, 7, -109, -64, -103, 33, -79, 10, -53, 113, -14, 123, 52, -24, -127, 7, -125, 43, 115, -15, 8, 75, 49, -117, 21, 117, 10, -120, -55};
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
    msg.setTimeStamp(0.07381003206212167);
    msg.setSource(56285U);
    msg.setSourceEntity(53U);
    msg.setDestination(36543U);
    msg.setDestinationEntity(170U);
    msg.seq = 2409102691U;
    msg.state = 78U;
    msg.error.assign("VAUHRZUFUOHPAYLZWOSIKWSYBATLJFSDDXCDYPKYDDERYVXIMQEFPTNBZXJPLOLNGJDUROZEOFSEAGTKYRAQKHPGZGRVSKDWBISVCKGIBTPABJWXKBMZFIVLMYULSINFCQNXUSEWZSVN");

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
    msg.setTimeStamp(0.4025332501641936);
    msg.setSource(61671U);
    msg.setSourceEntity(184U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(223U);
    msg.seq = 3794782196U;
    msg.state = 46U;
    msg.error.assign("PTGVWZTXHBJZBFLJESAQPIUAITMAXTWPEEFIKNFWVRHTEUUJDABLSJMMUFCN");

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
    msg.setTimeStamp(0.8370138227162183);
    msg.setSource(11956U);
    msg.setSourceEntity(5U);
    msg.setDestination(40192U);
    msg.setDestinationEntity(15U);
    msg.seq = 4029354008U;
    msg.state = 100U;
    msg.error.assign("HCLPKBYAFYQFYKDBRTDURNGOMSPYHDEJQZZLJPSWVLRFIQZPXEEGKBXRXTCITBFPUTYZN");

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
    msg.setTimeStamp(0.9834687346172305);
    msg.setSource(15985U);
    msg.setSourceEntity(204U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(15U);
    msg.origin.assign("YLTDJUAVLFDPUUPWQAHOBYGVNCQWKOMSLGAEVXOURRFJYEHEWTTQWDOKLDQJTYQLZVVFRKMNJQRCNAYWJFGYFZDYGEQJXUUOMMCSVGWCNZGBYYDISSPDKDTHIHGEIKANZSKOHPXUMONQYLASDZVICHKVCP");
    msg.text.assign("OQMGWBSKIHBMLPPZNAOZVMXXGIWLAYQYHHCUFHNVQTITNDQFZIFPRKEFBUGMFOCQLQTJXMNSWDKKRVHZTCRJRJANICBRVDAMURWJCHXOGGJENPZYJYPUTEDOSMMKSJJXNCXSQBWZAYUDDZEDELLHUTVLACXJLSLZGGQCKGYEEKHPNVCWBGOYYCIDYQWOSVASFIFZVURXO");

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
    msg.setTimeStamp(0.4436513449799455);
    msg.setSource(8555U);
    msg.setSourceEntity(44U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("NWIXNRAIWUWFNWGQKCXSBTGHGZGLXFEQHYMQIJLCIDRC");
    msg.text.assign("DIWJXFXSHMJTZLOXHGSVTETKJYWLCGQTVHBRAXRRKKKUVFNMKKLOMHBMBUZRJIEBGECYDVBRZZKTUKAINPQYXQFVNULUWQIIPAQILFENONZROFSHPJCHMGABRGDMEHVGSFECZXSELSHVEWORDKNNBLJCBTYPDTHQOY");

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
    msg.setTimeStamp(0.6178796094923731);
    msg.setSource(222U);
    msg.setSourceEntity(48U);
    msg.setDestination(17076U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("YSLOABTIABYJUGYMTRLNQNKCCBCNWBIYYFZBDFKQSIFQEEVXTDPNIDFVKZQFJNIRPTMLKPVLVDIXPTLRSMVQGWOUMFZZFLGDCLJYGKTXPXCPHINOULXUHEYWYTJAVGBOUWHEHHDJMKCVGZBLRNJTBGVDSIFTEROZWQIXIJUWNOXGFTLZQCMWKUSKASKNBEVAASZUSCRAJZAJCHV");
    msg.text.assign("OZZYQBUJGMFRONGHWXPQXPMHQQIDDRLJMQYHZJZSNPMSDWIZAVKEIKRXRDLVOZBYYSDPTGKFJEXENUNVPKSTLUOFXZJMRUCBFMCFNDESCYKRMIIBQASRRCRVDPWUASVTUXHONHBNDOSWBGPLUHCEBXGKILXAVPDGOKYLNTIKQ");

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
    msg.setTimeStamp(0.3719785139688381);
    msg.setSource(9604U);
    msg.setSourceEntity(172U);
    msg.setDestination(8087U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("JNNUNWCPUTHAPYNWKXBDHRSBKOZEEYQEVYJWICEGNQLKMIABPAGTSCHFQBBPQJOLQNAMFHWJCLPJVLNSBCOIJKCVAUQWOPWYMOHUCRVUVZLQFRBWNSZTDMMSAFRKETSISMPZRJDSWVXZOADBJGEZNUQDMGQVFTGXKPXYXO");
    msg.htime = 0.711849841372464;
    msg.lat = 0.7004372113981738;
    msg.lon = 0.05846763599878879;
    const signed char tmp_msg_0[] = {-15, -68, -76, -65, 95, -18, -12, -122, -86, 41, 78, 111, 100, -39, -83, -21, 58, -16, -52, -19, -17, -80, 68, -68, -27, -3, 16, -62, 19, 44, 81, 43, -66, 83, -53, 93, 93, 51, -88, -69, 31, -47, -10, -49, 113, 40, 107};
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
    msg.setTimeStamp(0.15260065464453232);
    msg.setSource(56225U);
    msg.setSourceEntity(220U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("IKRJGTDZLFPAQMXVEERMYRVDDBZNIABJMGSKBUIBVTGKMLDCGTKDJWZNJUKDYDSQGGYCGRXOTBIUHSNVPCUESWULPHYTRDSHFXAEEHCMZOUSXZFFQWHJGZAEGWMACZKRAVDEAYHEJBWYCVVVQHLFNZXGKVQFMJXB");
    msg.htime = 0.5253425493130712;
    msg.lat = 0.6854703468652197;
    msg.lon = 0.9683968436227625;
    const signed char tmp_msg_0[] = {-73, 4, -47, -17, -54, -68, -76, -47, -118, 77, -6, -98, -49, 63, 12, 56, -73, 45, 20, -44, 3, -3, 31, -18, -118, -81, 8, -1, -127, -109, 34, -94, -15, 121, -102, 67, 61, -126, 68, 70, 33, 114, 90, -87, 82, 1, -28, -36, 38, 91, 89, -63, 82, -94, 117, -36, 59, 113, -75, -102, 67, -51, -66, 4, 95, 117, 3, 16, -61, -22, 33, 118, 104, -16, 51, -78, 3, -3, 29, -79, 48, 126, 98, -13, 53, -95, 48, 109, -73, -35, 77, -68, -76, -6, 73, 55, 94, 6, 62, 50, 5, 65, -54, 8, -15, 97, -83, 87, 83, 124, 111, 106, -65, -66, -125, 102, 74, 98, -56, -96, -106, -110};
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
    msg.setTimeStamp(0.8957920820362882);
    msg.setSource(20096U);
    msg.setSourceEntity(167U);
    msg.setDestination(59662U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("WHBPZXJSQHBADITUBFXZAFDWJRZFRYQLNUTNWJMPAAEBVYLIDNONYIGQSFHYIVVEOCEVZNFVLGLZCMMZSSPQGECRHXSXGXLCLMDTDZHTKJOQAOGNHKPTY");
    msg.htime = 0.7348318237427928;
    msg.lat = 0.43004740207724446;
    msg.lon = 0.47817585404797314;
    const signed char tmp_msg_0[] = {-10, -106, -56, -55, 61, 49, -62, 21, 119, 25, -53, 2, 11, -14, -118, -66, 103, -96, 70, -119, -7, -106, 1, 29, -124, -55, 102, 26, 60, 118, -4, 23, 83, 12, -90, 82, -125, 49, -86, -106, 12, 84, 51, 61, -90, -52, 58, -67, 45, -113, -80, -71, -96, 113, 77, -31, 30, -63, -120, 0, 121, -81, -127, 15, -121, -16, -26, 75, 55, 112, -66, -59, 123, 59, -18, -3, 15, -102, -124, 121, 123, -56, 2, 3, 35, 5, -65, 100, -116, -57, 17, -61, -63, -86, -44, -62, -37, -12, 13, -26, 5, -90, -3, 66, -45, -16, 26, 1, -53, -43, 85, -6, -39, -5, -70, 103, 65, 9, -95, -102, -56, 17, -91, -25, -31, 56, 107, -117, 28, 53, 88, -44, -90, -28, 45, 15, 119, -112, 90, 1, -58, 30, 69, 6, 29, -77, -64, -117, -44, 99, -48, 4, 124, -94, 45, 94, -126, -118, -54, 89, 85, -56, -33, -43, 80, 36, 122, -16, -17, -58, -39, 0, 84, -32, -102, -55, 102, 116, 1, 108, -66, 89, 126, 63, 16, 90, 62, -16, 124, -92, 123, 73, -41, -7, 31, -66, 126, 21, -31, -82, -107, -125, -123, 21, 109, 113, -102, 119, -96, 100, -93, 26, 73, 108, -101, -30, 46, -36, -109, -38, -34, -40, 42, -101, -48, -22, -122, -8, -65, -21, 116, -31, -126, 39, 109, -70, 66, -4, -127};
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
    msg.setTimeStamp(0.4109240332049374);
    msg.setSource(11764U);
    msg.setSourceEntity(125U);
    msg.setDestination(51192U);
    msg.setDestinationEntity(88U);
    msg.req_id = 50901U;
    msg.ttl = 59378U;
    msg.destination.assign("VVGKXQOIOFAXCAOBNWDYWQTEUNDYCQDWIKZOQKNVVLMKLNXDVWWZVNIIFCTNHBXPYMSGRJIDENXMESRLIBIJEGSCUXTBHDMHRYSJRHPGMECEPLGQMMWAUSSFJJRZCBYCRTBLLVRHTGY");
    const signed char tmp_msg_0[] = {57, 116, 60, -34, -74, 103, -50, -40, 20, 0, 58, -74, 103, 100, -124, -24, -56, -9, -50, 18, -20, -112, 118, 89, 50, 26, -33, 42, -36, -68, -34, -37, -116, -47, 0, -31, -35, -68, 13, -59, -103, 32, 109, 53, -2, -56, -27, 1, 96, -106, -96, 119, 0, 8, 95, 118, -38, 24, 85, 46, 70, 17, 46, -25, -39, 27, 55, 107, -54, 60, -107, 61, -28, 124, 3, 107, 53, 82, 24, 35, -46, -54, -45, -93, -104, 100, 33, 26, 27, -25, -91, -113, 15, 102, 112, -86, 80, -101, -52, -13, 120, -105, -104, 36, -87, 87, 61, 25, 100, -58, -77, 112, -63, 31, 68, -97, 80, -126, 6, 59, 103, 70, 124, 120, 60, -79, 63, -62, 27, -34, 85, 65, -115, -13, 21, -126, -58, -15, 55, 17, -70, -40, -64, 109, 61, -19, -118, -66, -118, -88, -110, 90, -14, -71, -77, -17, -76, -4, -94, -86, -53, 34, 68, -70, -83, -95, 116};
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
    msg.setTimeStamp(0.9193547377168475);
    msg.setSource(24744U);
    msg.setSourceEntity(197U);
    msg.setDestination(20815U);
    msg.setDestinationEntity(73U);
    msg.req_id = 59251U;
    msg.ttl = 14666U;
    msg.destination.assign("GXWLYPCWAYZUXOMMNUSROPBEAVXTJTBYWCWCGIYWTFGTEAPKEBJTMMNNWGJHSSOFAWZQDCZSQRGIMEWQJHQTEXIKUOYDTLNVOWVDLPKJHLBZJNRKUNIKOUECJNWCDDNYBBPSFSCRVFAQXNHGHBXXQYVNERBTERKMUVRJPDISZFFQLIRFUCAPMQLHAYIZKMPLTEVAKVZ");
    const signed char tmp_msg_0[] = {26, 40, 26, 5, 27, -76, -44, 113, -89, 45, -83, -39, -83, -63, -40, 113, -61, 64, 45, 96, 109, 32, -3, -82, -5, 46, 84, 21, 126, 31, 113, 108, -10, 11, -35, 99, 126, -42, -106, -1, -20, 8, 98, 80, 104, 70, -60, -102, 65, -41, -33, -55, 78, 102, -20, 38, 70, -106, 11, -3, 88, 55, -56, -61, -84, 42, 125, 39, 53, 84, -34, -83, 4, -127, 94, 25, 41, 111, 3, 73, -39, 22, 52, -27, 94, -101, 74, 122, -6, 111, 87, -62, 2, -4, -29, -24, 80, 83, -21, -44, 108, -104, -125, 25, 95, 117, 95, -9, 43, 55, 43, 7, 25, -76, -68, 20, -102, 38, 65, -82, -35, -9, 103, 59, 113, -40, 96, -76, 85, -102, 7, -45, 95, -12, 81, -20, 15, 68, 4, -61, -54, 38, -6, -28, -68, -36, 64, 29, 60, 32, -30, 19, -94, 2, 41, 13, -27, 93, 64, 53, 125, 41, 8, 12, 46, 39, 59, 22, -62, 56, 97, 85, -43, 69, -28, -21, -112, -31, -50, 102, 11, -6, -86, -4, 121, 58, 121, -76, 23, 65, 55, 103, 97, -126, -95, 95, -98, 66, -93, 113, -39, -23, -62, 86, 39, 88, 47, 4, 96, -34, 32, 53, -16, -93, -39, -36, -86, -113, 89};
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
    msg.setTimeStamp(0.5026306300055298);
    msg.setSource(51995U);
    msg.setSourceEntity(249U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(170U);
    msg.req_id = 49179U;
    msg.ttl = 38171U;
    msg.destination.assign("OWZFTPRNFFCJHCTGBIDSRNZEAXLZYNEUUNXIS");
    const signed char tmp_msg_0[] = {72, 47, -45, 113, 111, 16, -101, -92, -109, 100, 86, 100, -74, 0, 107, -53, 121, 100, 114, -44, -105, -27, 8, -87, 19, -28, -15, -40, 78, 114, -55, 98, -10, -71, -62, -105, 27, 2, 11, 113, 58, -47, 9, 37, -78, -110, -123, 120, 115, 17, 99, -71, -28, 40, -84, -74, -64, -56, -30, 39, -118, 43, 24, 51, 4, 56, 3, -37, -24, 118, -112, -8, -85, 74, 61, 39, -100, 79, 42, -81, -122, -53, -27, 40, 28, -7, -47, -59, -37, 32, -15, 126, -83, 118, -116, -27, -122, 122, -24, 59, 50, -76, -24, -54, -11, -111, -62, -31, 67, 22, -26, 54, 22, 59, 74, 84, -56, -63, 48, 63, -61, -80, 63, -47, -54, -24, -43, -36, 28, 45, -62, 13, -42, 32, -27, -24, 14, -85, -57, -41, -9, 54, -109, 66, 105, -121, -103, -54, -64, 79, 13, -59, -26, 72, 61, 86, -122, 56, 111, -109, -40, 90, 62, -74, -93, -123, 41, -41, -24, 60, 98, -86, 22, -77, -39, -50, 3, -65, -57, -40, -63, 81, 120, -8, -51, 14, 98, 21, 120, 59, 19, -96, -103, 40, 83, -71, 84, 45, -89, 42, 59, 95, -12, -81, 9, 77, -81, 106, 24, -49, 54, -94, -105, -63, -110, 111, -97, 2, -59, -11, 120, 30, -79, 122, -122, 15, 52, 121, -93, 8, 67, -64, -103, -26, 25, -102};
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
    msg.setTimeStamp(0.5266574172006063);
    msg.setSource(21096U);
    msg.setSourceEntity(38U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(200U);
    msg.req_id = 46138U;
    msg.status = 111U;
    msg.text.assign("JJBQAIGIOXWURCEPYHFHCBFSOXWLSOKRGJUMUUHNGTTRATZNSUFCCQYRZGFRSJWQIXUMVKVSVOEJJLKUPCYNQCPPRBQXKW");

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
    msg.setTimeStamp(0.19726441316668886);
    msg.setSource(27163U);
    msg.setSourceEntity(118U);
    msg.setDestination(28774U);
    msg.setDestinationEntity(87U);
    msg.req_id = 38141U;
    msg.status = 244U;
    msg.text.assign("IDAGBMQYWSQLXXQNDNULYADBQJBIOFXDMFWOIWGEVSOHYUOVPNKXPLWPUVDZBNHMTKLATZSHQMZQSJVL");

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
    msg.setTimeStamp(0.6959628125858531);
    msg.setSource(21519U);
    msg.setSourceEntity(192U);
    msg.setDestination(28890U);
    msg.setDestinationEntity(97U);
    msg.req_id = 44683U;
    msg.status = 3U;
    msg.text.assign("RQEFDFHODJIFBZMQWUWJQJSHNSPYYKRABXPCBTRFJSYJCYQZXXZERAXMWFHVSKZENWTTWPVHCXKVQOGTEGSBIUPBNOZFNPIRUYHJGJAKYGDMDNHWNXAMONIEGLWYRHLDQFLVCBVMAAUBYTRYOCKISSKALQWOGQXSLCWHAIZLOGJZOMAEDPVNBTSXSQUKCHTNDDLB");

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
    msg.setTimeStamp(0.9069671868389355);
    msg.setSource(5949U);
    msg.setSourceEntity(21U);
    msg.setDestination(44710U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("VVXEURFERVLTHICIIYBIHWDWAZFXQAWIHKSVCBPSMVJMZQBKYVZLMADAZSXDRISOGGQCDKXWPAXWLLTSUBKFCPSBBGVQJORXRKGZLYLJWHMDZPVPADOULISTHNCGENOPKCHSNWIMNYNSAXJOYVRYLNCFUPEDROCOEOIKHEJYUJFGQKTRIOBUKDBTUNUYMUQLFHGYGUFMPHDEQB");
    msg.links = 2258297478U;

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
    msg.setTimeStamp(0.8348417314371168);
    msg.setSource(14633U);
    msg.setSourceEntity(31U);
    msg.setDestination(26347U);
    msg.setDestinationEntity(211U);
    msg.group_name.assign("UAJHZACNFPRGEQNRKESGOIFKHYSPSJYNCMKOBOCRGJBCIQEBHZASXCYOAXSDZVWFEFNNNGZIFKXTRWCISLHGAPDCDILZTKLIMUMUEKCQHWXVRPOCQMDYDGLQRQDRHYXAWQPVFSYVOGEZVIXTOYGRKVNSBUBVITGHBAJZPAYDXYJWAMWTZPEOTULVEBMOQJVFQTJEKBLOULLFNTDUWHJILGFZTWPSTMRUQEBIN");
    msg.links = 1807037514U;

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
    msg.setTimeStamp(0.9044762581732693);
    msg.setSource(33167U);
    msg.setSourceEntity(119U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("IOVTXKDTBXEPOJVXCCGHXPTTPEY");
    msg.links = 2094847306U;

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
    msg.setTimeStamp(0.061756595192174135);
    msg.setSource(49838U);
    msg.setSourceEntity(75U);
    msg.setDestination(54571U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("IRSENHSWODBBZFOGFAUQYHHTZMXSUIIWBACJXEDSPWOOHJSQRWRIXCHFAYLTJAKYQOJQCQLCHYZFZIZFPNLQHENWKWSDPLKERRPDCKCUGIDAXIMFKYPDFGEZTHXXCIXTGJPKFDNNLJULMQCDLPAZVUVXTRYYUPWKVEZSVARGSXAUNRUJMCX");
    msg.action = 219U;
    msg.grouplist.assign("CXUEQJQLRLRWSMVMGCSESCOOZICBCJOERAZIIDYYAPSTTJXYHJXNJXIOCFTMHSZDHQNJMJAMPGSWDIDULTEWRZUVKBGNXSKLUQOFVBCGRSFBXYBUPTEYGQQLZUBNRDZ");

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
    msg.setTimeStamp(0.5019109209143133);
    msg.setSource(53570U);
    msg.setSourceEntity(83U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(150U);
    msg.groupname.assign("VXGYJJVWLUMKAMBKSQHOQRIHBPLABNEWUYFSGVIDFDNDZUM");
    msg.action = 184U;
    msg.grouplist.assign("DNQCBUAJTMIGWRTAQEZAOCKXTXKISENUUPXKDQPEBEIWDEGBOWZXUEUQPVABGSUHWHLBWBQXITJESMBWJFHRRGXYSBWZARYQBPZIGTVMRNHRRODOYYGMDFKLZCLWZXUTZCPDFIPGTDPYRFSJSDYHMKNFNVTFMPCYQOHJQGHNECZOYTFANLTMMGIASHJZNKCCRULLVOIFVPLCWLRJHUMVJXWVAVOEZY");

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
    msg.setTimeStamp(0.9467662541984159);
    msg.setSource(52338U);
    msg.setSourceEntity(91U);
    msg.setDestination(2099U);
    msg.setDestinationEntity(157U);
    msg.groupname.assign("OBCYRRFAXKNAYJXZEHCDTGAYBCGCJSILAVMWUZLWENPWJZDGKAWOPAREUDTJVEIXQCGBRLDOOTFMFXUGZPWKINOKHYXJUUIGHMKCZURZMRTFVOPECHWLJFSLLSNBRQXRTHBNCZITTGSYPHMFCVMYSHJMTLETVQJAMSBGPVKHWGSYAXPURZCFVDIMHWYQOOJGFAOUAQETKVPH");
    msg.action = 106U;
    msg.grouplist.assign("VMINOEHEPOCBJLOTQIAZEPZDEAHAMGYJWKHUTKMSKSBFNIQVSRILBRWLILHJMYWELHQZOGVFSUFCJVAWCKTUETZGQKPNBYHUCCGVDRKKCZJXARIBRCCVTRZYFUBALDSDMWFMVYDJRQMHQTPWXTOGHUBDJYJJTBQAAJRNWRBINAFNUPUPSGKHXSSEHTWVYIKUFZMOQZRPTEDFABW");

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
    msg.setTimeStamp(0.296830720823116);
    msg.setSource(22572U);
    msg.setSourceEntity(146U);
    msg.setDestination(27502U);
    msg.setDestinationEntity(235U);
    msg.value = 0.674374886859351;
    msg.sys_src = 28777U;

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
    msg.setTimeStamp(0.3341057824677389);
    msg.setSource(54047U);
    msg.setSourceEntity(65U);
    msg.setDestination(36499U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8860901939885384;
    msg.sys_src = 48598U;

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
    msg.setTimeStamp(0.23913613711112103);
    msg.setSource(682U);
    msg.setSourceEntity(9U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(41U);
    msg.value = 0.9513175809103057;
    msg.sys_src = 21330U;

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
    msg.setTimeStamp(0.10036388765997728);
    msg.setSource(22245U);
    msg.setSourceEntity(159U);
    msg.setDestination(43447U);
    msg.setDestinationEntity(182U);
    msg.value = 0.9022741300666627;
    msg.units = 64U;

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
    msg.setTimeStamp(0.00837265691815392);
    msg.setSource(40637U);
    msg.setSourceEntity(195U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7756269082722032;
    msg.units = 136U;

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
    msg.setTimeStamp(0.2425633027010794);
    msg.setSource(42230U);
    msg.setSourceEntity(219U);
    msg.setDestination(11980U);
    msg.setDestinationEntity(224U);
    msg.value = 0.3390228718927163;
    msg.units = 209U;

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
    msg.setTimeStamp(0.59304110660063);
    msg.setSource(47911U);
    msg.setSourceEntity(211U);
    msg.setDestination(43399U);
    msg.setDestinationEntity(142U);
    msg.base_lat = 0.8752552954748405;
    msg.base_lon = 0.3952447894424239;
    msg.base_time = 0.10829945251039907;

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
    msg.setTimeStamp(0.31955836308574415);
    msg.setSource(32705U);
    msg.setSourceEntity(147U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.0260282578726293;
    msg.base_lon = 0.5357274474032451;
    msg.base_time = 0.4805941042902564;

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
    msg.setTimeStamp(0.8280991742501552);
    msg.setSource(15020U);
    msg.setSourceEntity(80U);
    msg.setDestination(32549U);
    msg.setDestinationEntity(126U);
    msg.base_lat = 0.47261030059036213;
    msg.base_lon = 0.43646284175847583;
    msg.base_time = 0.18218645067273254;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 22409U;
    tmp_msg_0.priority = 74;
    tmp_msg_0.x = 1054;
    tmp_msg_0.y = 4867;
    tmp_msg_0.z = -5931;
    tmp_msg_0.t = -14179;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 70U;
    tmp_tmp_msg_0_0.htime = 0.7550380644825;
    tmp_tmp_msg_0_0.context.assign("XDWJSXBZCKMDYSJWNYATCOWCFJOSEKTIYZBFYHBXSHFOWULNJUHGUQIPCYBKSLLBJZXPIMRITMLKRMRFMBAEZKKBGRRKEYFQPNDSYFOODVVZMGTNXEHSUEAQNCADJCNBTGZAGPXOCQFFRMWUTLNOZNTFJRRZBGQHNHCAIHXPHPZIWJEDVQVMWXXYQPEEPRVLCUKVVG");
    tmp_tmp_msg_0_0.text.assign("RRPXQJOYSDOSYZJZHJWVKGKPMBBIJTOLQXFTBCKFLFLLBNHESZAMVSTDNISJKPKAYTDDMDAYHGUEMFOUGZGVMWSFDHANAICMWEOCNEOHUWBLMXEJGPQJFWYYXCQOOZERQBIRLNXBZRDIZVKCFHPUIGIVTNLCFBVSCWEXHTKCGWKALUSPKQJQFREKXSIEXLJWNHPDWBPMXXRVCMNTMGVVGYQDQHZELSIUZVZUYTNPNU");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6627369642341753);
    msg.setSource(40353U);
    msg.setSourceEntity(131U);
    msg.setDestination(7974U);
    msg.setDestinationEntity(145U);
    msg.base_lat = 0.13308719187335005;
    msg.base_lon = 0.8945851017790497;
    msg.base_time = 0.1382806397533829;
    const signed char tmp_msg_0[] = {25, 38, -53, -20, -32, 118, 13, 76, 104, -76};
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
    msg.setTimeStamp(0.2971597123932914);
    msg.setSource(16514U);
    msg.setSourceEntity(253U);
    msg.setDestination(12107U);
    msg.setDestinationEntity(156U);
    msg.base_lat = 0.6731254348584634;
    msg.base_lon = 0.45569665834143;
    msg.base_time = 0.1304913918472982;
    const signed char tmp_msg_0[] = {-20, 99, 39, 69, -4, -61, -69, 80, 86, -71, -97, 86, -122, 95, -94, -12, -85, -121, 68, -36, 70, -96, -90, 124, -22, 49, 51, 101, -72, -40, -45, -72, -104, -117, -116, -23, -64, -43, 103, -59, -6, 91, -90, 40, -59, 123, 112, -65, 46, -38, 114, 4, -34, -123, 76, 104, 70, 71, 76, 44, 93, -55, -94, -67, 94, -95, 0, 9, -64, 90, 67, 85, 114, -18, 116, 29, 98, -3, -106, -52, 83, 77, 23, 55, -127, 32, 105, -79, 63, -28, -120, -107, 35, 115, -91, 69, 0, 122, 7, -13, -81, 53, -48, 19, -98, 60, 116, 86, -53, -11, -75, 29, -16, 51, 83, -59, -124, 48, 96, 42, 82, 32, 40, 120, 100, 116, -118, 66, 119, -123, -106, -118, 99, -82, -61, 37, 1, -125, 118, 35, 120, -105, 108, 55, 106, -33, 44, 77, -37, 66, -2, 27, 97, 65, 23, 53, 111, 78, -60, -42, 111, 14, 90, 96, 83, -121, -128, -100, -111, 11, 99};
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
    msg.setTimeStamp(0.8045628745086233);
    msg.setSource(34451U);
    msg.setSourceEntity(233U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(151U);
    msg.base_lat = 0.501615808364321;
    msg.base_lon = 0.12936976606038164;
    msg.base_time = 0.039103685003593514;
    const signed char tmp_msg_0[] = {73, -9, 73, -7, 25, 79, 23, -32, -80, -77, -11, -63, 79, 4, 1, 106, -87, -56, 6, 49, 76, 120, -120, 66, -81, -31, -108, -98, 7, 120, 89, 3, 67, -3, 80, 22, 19, 43, 83, 48, -92, -51, 89, 70, 36, 42, 38, -104, -93, -88, -74, 32, -117, 30, -61, 52, 46, 30, 125, 60, 53, -61, -26, -25, 66, 29, -119, -106, -6, 72, -63, -76, -14, -5, 100, -92, 36, -126, -81, 111, 90, 18, -67, -109, -128, -25, -11, -32, -12, -5, -1, -1, 0, 83, -10, 42, 85, 105, -69, -98, -123, -26, -27, -30, 4, -34, -67, 34, 90, 113, 112, 2, 93, -119, 62, -80, -78, 2, -7, 82, 56, 53, -61, -125, 33, -114, 116, -68, -14, -28, -3, -127, -102, 82, 59, -100, 54, 109, -114, 36, -29};
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
    msg.setTimeStamp(0.48979466115382675);
    msg.setSource(64170U);
    msg.setSourceEntity(158U);
    msg.setDestination(55276U);
    msg.setDestinationEntity(64U);
    msg.sys_id = 4514U;
    msg.priority = 75;
    msg.x = -26806;
    msg.y = -23375;
    msg.z = 13815;
    msg.t = 5017;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 162U;
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
    msg.setTimeStamp(0.7196285464439811);
    msg.setSource(34120U);
    msg.setSourceEntity(228U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(248U);
    msg.sys_id = 47880U;
    msg.priority = -1;
    msg.x = -30330;
    msg.y = 25760;
    msg.z = 14781;
    msg.t = -31065;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.08530416622024217;
    tmp_msg_0.type = 101U;
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
    msg.setTimeStamp(0.9070659027324378);
    msg.setSource(2563U);
    msg.setSourceEntity(138U);
    msg.setDestination(42719U);
    msg.setDestinationEntity(50U);
    msg.sys_id = 40270U;
    msg.priority = 95;
    msg.x = 27632;
    msg.y = 11414;
    msg.z = -26118;
    msg.t = 28405;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("CZUDPHWOIXAPICQUQSNYATOBSOVQOQOEHQZMKHBWTFOZHCSATFDURPGMKUJYQNZFCFNEJXROVIBQXPLJRMJUXDBVLAMVEKRURLAEUPNXTJMTPMZGJEOLYSEHCWIVDZJAMNRCKPSDQDGLASNTWXCIDXWI");
    tmp_msg_0.sensor_class.assign("NZCCSZROABUBKQEPTNKWULIMQHBYOCJQOCPMVQXZHTUVGEWDCJZ");
    tmp_msg_0.lat = 0.6555959430079815;
    tmp_msg_0.lon = 0.9122877690243045;
    tmp_msg_0.alt = 0.07139654285769959;
    tmp_msg_0.heading = 0.3090781362322276;
    tmp_msg_0.data.assign("GHGETORMZZJXPYQACWNLRJBHMSJXTWUFFFCNMKBORRLITZYJZQFPIATYXJYUMZAUTHODDXNQSWLIZQHOUGDCKLFVMICMHFGOQCROEUJBBXGNESHBLKSLAHNEVMWSPXUACDXZWTROBEGZBYYAVHUMAPIVISJVTBVDPPCOKKSNQLOUZDRSJYPCAIS");
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
    msg.setTimeStamp(0.8961111268534451);
    msg.setSource(47565U);
    msg.setSourceEntity(81U);
    msg.setDestination(4936U);
    msg.setDestinationEntity(138U);
    msg.req_id = 55621U;
    msg.type = 229U;
    msg.max_size = 62519U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.29688640176321734;
    tmp_msg_0.base_lon = 0.873591750124084;
    tmp_msg_0.base_time = 0.3504071708002827;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 61676U;
    tmp_tmp_msg_0_0.destination = 44429U;
    tmp_tmp_msg_0_0.timeout = 0.04682172941881213;
    IMC::LblRangeAcceptance tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 28U;
    tmp_tmp_tmp_msg_0_0_0.range = 0.8342402537776517;
    tmp_tmp_tmp_msg_0_0_0.acceptance = 109U;
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
    msg.setTimeStamp(0.7199932829594611);
    msg.setSource(46021U);
    msg.setSourceEntity(73U);
    msg.setDestination(8555U);
    msg.setDestinationEntity(167U);
    msg.req_id = 34959U;
    msg.type = 169U;
    msg.max_size = 13638U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6963779032731101;
    tmp_msg_0.base_lon = 0.7467866394660583;
    tmp_msg_0.base_time = 0.529875610578106;
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
    msg.setTimeStamp(0.8685965086338516);
    msg.setSource(27756U);
    msg.setSourceEntity(45U);
    msg.setDestination(28748U);
    msg.setDestinationEntity(207U);
    msg.req_id = 54380U;
    msg.type = 240U;
    msg.max_size = 42478U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7881100717645619;
    tmp_msg_0.base_lon = 0.38056716259365786;
    tmp_msg_0.base_time = 0.36317271100836346;
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
    msg.setTimeStamp(0.2769094489859403);
    msg.setSource(54487U);
    msg.setSourceEntity(170U);
    msg.setDestination(22249U);
    msg.setDestinationEntity(67U);
    msg.original_source = 33656U;
    msg.destination = 3434U;
    msg.timeout = 0.8217937922522698;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3560U;
    tmp_msg_0.off_x = 0.14944182610295909;
    tmp_msg_0.off_y = 0.6132944078079988;
    tmp_msg_0.off_z = 0.3229081337493189;
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
    msg.setTimeStamp(0.562633347796049);
    msg.setSource(27416U);
    msg.setSourceEntity(3U);
    msg.setDestination(60269U);
    msg.setDestinationEntity(35U);
    msg.original_source = 33802U;
    msg.destination = 7935U;
    msg.timeout = 0.2673340184332935;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.043860462079533535;
    tmp_msg_0.base_lon = 0.2989759973625148;
    tmp_msg_0.base_time = 0.8007488865236351;
    const signed char tmp_tmp_msg_0_0[] = {109, -68, -53, -85, -113, -109, 70, -114, -48, 11, 18, 106, -72, -22, 7, -28, 89, -58, 24, -120, -25, 72, 120, -96, 60, 60, 117, 21, 74, 31, -35, 116, -27, -117, 78, -32, -77, 115, -128, 35, 105, -30, -2, 107, 104, 31, 112, 30, 3, -91, -111, 15, 42, 82, -3, 81, -26, -123, 98, -66, -5, -91, 12, 33, -14, -86, 113, -16, 90, -115, -85, 65, -36, -38, 72, 5, -2, 14, -56, 40, -114, 42, 65, 60, 62, -90, -105, -24, 105, 126, -74, -121, -34, -45, -67, -91, 76, 115, 16, 119, -97, -8, 36, -57, -7, -75, 113, 93, 37, -43, 102, 6, -61, -110, 58, 96, 17, 48, 112, 15, 112, -63, -101, 10, -126, -8, -26, -64, 118, -113, 0, 75, -109, -121, -47, -106, 46, 121, -39, -34, 44, -109, 38, 95, 68, -97, 87, -53, 33, -36, 93, 95, -75, -117, 102, 22, 67, 24, 47, -50, -21, 51, 77, 2, 7, 23, -27, 80, -102, -50, -104, 115, 67, 23, -117, -16, 103, 61, 73, -11, -55, -59, 94, 79, -100, -102, 64, -38, 18, -78, 13, -20, 72, 53, -57, -91, -49, 5, -97, 42, -18, -56, 10, -47, -57, -41, -19, -71, 126, 113, -2, 59, 89, -16, 18, -4, -110, 2, 89, 39, -47, -11, -105, -111, -124};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8296842052679281);
    msg.setSource(9178U);
    msg.setSourceEntity(156U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(246U);
    msg.original_source = 61368U;
    msg.destination = 56056U;
    msg.timeout = 0.3483302720329158;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 95U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8070304906814036;
    tmp_tmp_msg_0_0.speed_units = 254U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.08328212369761678;
    tmp_tmp_msg_0_1.z_units = 217U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5961324387325254;
    tmp_msg_0.lon = 0.2894409645371381;
    tmp_msg_0.radius = 0.28490162409870434;
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
    msg.setTimeStamp(0.23523131500152472);
    msg.setSource(4575U);
    msg.setSourceEntity(198U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(216U);
    msg.type = 192U;
    msg.comm_interface = 61828U;
    msg.model = 16190U;
    msg.list.assign("FGOUARCNFWXSNYBVVTWEUGMHT");

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
    msg.setTimeStamp(0.7869391531954827);
    msg.setSource(27943U);
    msg.setSourceEntity(195U);
    msg.setDestination(20953U);
    msg.setDestinationEntity(248U);
    msg.type = 19U;
    msg.comm_interface = 50018U;
    msg.model = 33829U;
    msg.list.assign("SWZMXRPYGZFWHTXYJTBJKVUYYMBFPXMOACBLUEKALZJADMDDUCVOQATMIFTOXIGVLXHPRCGSTWGUCIJJCCPWSWHCZJBXIQEETEYIVHGGTWYUCQLHQBOAHDRZDFHACNTPGCHOQMXTKFVMFDNUAEVNBZQQBLZELIVJFRYJNOIDSXKURUYSUSEDSRQZOHDESRHPBWNALSPOFZFLXIKKVQGDWEMRJRWBQKBYPNO");

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
    msg.setTimeStamp(0.8995133113921958);
    msg.setSource(47917U);
    msg.setSourceEntity(178U);
    msg.setDestination(24630U);
    msg.setDestinationEntity(133U);
    msg.type = 94U;
    msg.comm_interface = 65443U;
    msg.model = 22968U;
    msg.list.assign("HZWESNYDPLLCWL");

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
    msg.setTimeStamp(0.0749775331027499);
    msg.setSource(52773U);
    msg.setSourceEntity(67U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(231U);
    msg.type = 237U;
    msg.req_id = 2520985723U;
    msg.ttl = 38227U;
    msg.code = 229U;
    msg.destination.assign("ORLFGJXXLDLAGEYNSDVEOGFNXETLQSTSSUUYZMCIQHDTICIQYOPYBCWIVROCKUAUOSNUINETTRDIECPPEQKWJKLBNFNRTYQHOWXKWZNIXFGWVDQUBSBSPHEYXLKQFCXHKWMQYCKYOWDBNBJTZMMLIZTNVBERURMRZKUHJMVYKVBZIVABPHMVFLAQUAXQGYDXGGCJVNJTOXDOZMPZDLIABMFFPSVJCAGAFHWWGTAPEJMLHJ");
    msg.source.assign("EKMKKEWUCRJDRZVDQTPQ");
    msg.acknowledge = 9U;
    msg.status = 75U;
    const signed char tmp_msg_0[] = {-84, -14, 26, 122, 9, -16, 85, 106, 124, 46, 120, -82, -10, -106, -55, -72, -31, -40, -122, 75, 44, -61, -113, -17, -108, 124, 91, 78, 41, -112, -63, -15, -111, -41, 85, -34, -73, 67, -18, 43, -69, 44, -96, -28, -87, -117, -55, 87, -17, 93, 97, -52, -99, -42, 73, -73, -105, 121, 16, 105, -42, -122, -56, -52, -6, 25, -15, -62, -35, 78, 1, 54, 111, -8, 31, -63, -128, -60, -89, -68, -5, 11, -27, -50, -93, -128, 125, -119, -24, 32, 73, -66, -5, 66, -25, 54, 43, 27, 1, 98, 91, 3, -3, -118, -94, 106, 91, -80, 117, -88, 17, -25, -45, 83, 33, 2, -93, 20, 40, 99, -8, -28, -5, -87, -49, -22, 38, -18, -18, -33, 12, 99, 29, -8, -85, -81, 62, -60, 18, -56, 35, -77, 98, -126, -11, -88, -18, -3, -106, 104, 104, 29, 115, -126, 111, -93, 43, -97, -18, 62, 57, -31, -84, -38, 62, -101, -109, -110, -110, -14, 111, -111, -23, -57, 22, 38, -54, -1, -26, -48, 55, 72, 68, 50, 30, -78, -50, 34, 65, -21, 90, -79, 42, 15, -51, 69, 102, -11, 87, -28, -27, 88, 34, 63, -39, 29, 108, 38, -20, -63, 76, 5, 118, 78, 2, -21, -69, -116, -58, -73, 106, 90, 37, -89, -11, 87, -2, 103, 30, -33, -106, 114, 101, 77, 51, 10, -101, 32, -38, -89, 116, -85, -100, 55, 73, 49, -4};
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
    msg.setTimeStamp(0.17081353847812963);
    msg.setSource(5435U);
    msg.setSourceEntity(137U);
    msg.setDestination(23178U);
    msg.setDestinationEntity(147U);
    msg.type = 62U;
    msg.req_id = 3599366738U;
    msg.ttl = 38150U;
    msg.code = 56U;
    msg.destination.assign("OTHZUCIKXTPYWAHZZUGVWGOUKZXYSJKLBAGREYGEHCDKUQITIGAATXPLNSLIMMHUQDDBLGAFONRJXQBQYCUPEVMFFKHEAUVRTZSDNQTEAXRJOVWKZMKIHSZHYNFYULTBFDYMCEP");
    msg.source.assign("BUWYSGMJNPMTCIXUOUQBHTAEQLKYVPURBXZSSIZNMPAHEKHLAALXGSENPFTBEPYBHFOOLJHWNRGZOTFBSWJQEQPSRNDHDDDULOEUZJKYCVWITGQEQEDH");
    msg.acknowledge = 15U;
    msg.status = 228U;
    const signed char tmp_msg_0[] = {24, -28, 85, 53, 24, 56, 44, 97, 2, 45, 90, 80, -106, -106, 21, -88, 71, -66, -74, 122, 11, -76, -98, 118, -93, -54, -80, -58, 77, 22, -1, -23, -32, -2, -94, 100, 14, 32, 51, -37, -16, 15, 104, 121, 98, -34, -94, 85, 27, 120, -111, 75, -103, -49, -21, 27, -95, -118, 49, 81, 69, -58, 22, 5, 37, 77, 121, -88, -118, 26, -4, -120, 72, -102, -99, 19, 119, -44, -48, 43, -45, -104, 52, 18, -114, 66, 14, 20, -78, -21, 89, -79, -12, -59, -77, 48, -82, 30, 31, -49, -60, -13, -9, -76, 67, 57, 52, -117, -14, -102, 57, -120, 123, -96, -94, 41, 28, -98, 3, 82, 75, 121, 107, -83, -50, -18, 78, -62, -75, 27, -89, 125, -37, 80, -18, 19, -94, -19, 37, -116, 96, -69, 46, 37, 115, -102, 45, 95, 31, -26, -104, 111, 49, 111, -5, -24, 76, -123, 68, 83, -37, -80, 16, -34, 84, -88, 27, 77, 92, 90, 41, 94, -59, -112, 114, -11, -45, -117, 41, 78, -125, -122, -43, 122, -28, 2, -120, 19, 23, -101, 57, 51, 94, -95, -78, 4, -46, -50, -80, 0, -65, 123, 35, 126, 72, 40, -46, 20, -78, -125, -2, -107, 98, 1, 114, -92, -55, 81, -47, -64, 23, 11, 61, -110, -39, -90, 7, -126, 95};
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
    msg.setTimeStamp(0.6846136677089273);
    msg.setSource(52944U);
    msg.setSourceEntity(235U);
    msg.setDestination(41657U);
    msg.setDestinationEntity(22U);
    msg.type = 178U;
    msg.req_id = 274358592U;
    msg.ttl = 37568U;
    msg.code = 168U;
    msg.destination.assign("AZJSKHBOLVWZNYZBGUKCDBWBKPJAGZCVQFFECFPPAGBJREZRCRNFUBXHNQIPKUEJTSHOONLRMEHAQNH");
    msg.source.assign("BWMHFWOLRBGJLVMQGBCNNOPTQARIURPLVJALWUIRIMWJGZMRMHKBDTZBNIYAHHRUSDQSTOUNZOLHBGKZSXNPEDNSDXIVTEOTNOJPPYVJJXKFFMCIBZCJYGMQVQDGNRPNIDDKWKTHYVPFSAXDGEAXFGZQETPOKHQEXPGXHI");
    msg.acknowledge = 167U;
    msg.status = 87U;
    const signed char tmp_msg_0[] = {-104, -50, 23, -55, 36, -12, -127, -41, 74, -29, 38, 36, -16, -14, 118, 116, -89, -42, 5, -36, 107, -2, -11, -14, 2, -105, 83, 68, 81, -92, 49, 66, 119, 50, -114, 83, 99, 59, -19, -1, 110, 116, 112, 57, -116, -24, 3, 118, 40, 59, 118, 34, 88, 23, -32, 6, 4, 24, 29, -88, 42, 50, 21, -78, -73, 50, -5, -72, 73, -123, 112, 124, -121, 27, -105, 27, 4, 12, 57, 35, 47, -97, 6, -88, 69, 105, -113, 50, -111, 121, -48, -26, 77, -96, -93, -49, -75, 78, -90, -7};
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
    msg.setTimeStamp(0.6440663587632646);
    msg.setSource(59498U);
    msg.setSourceEntity(74U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(113U);
    msg.id = 97U;
    msg.range = 0.5498530920858717;

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
    msg.setTimeStamp(0.19962130347820217);
    msg.setSource(23047U);
    msg.setSourceEntity(51U);
    msg.setDestination(24589U);
    msg.setDestinationEntity(189U);
    msg.id = 43U;
    msg.range = 0.7733748160395825;

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
    msg.setTimeStamp(0.6473972672552509);
    msg.setSource(50521U);
    msg.setSourceEntity(81U);
    msg.setDestination(59493U);
    msg.setDestinationEntity(105U);
    msg.id = 48U;
    msg.range = 0.1696896970663868;

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
    msg.setTimeStamp(0.14617166004803395);
    msg.setSource(60998U);
    msg.setSourceEntity(231U);
    msg.setDestination(52217U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("FJWQNQGKESZXQJWBZKMCCLFVCTHALIYTZXDOFYVIXUBWADQAHTDNLUEVZOAMYGBIMUMGVKOXIZRMHLRIDTKTVJNXCYQHNUSOFZQLPHREGRUCKRVYDYWYEKAEXRAWWBPDNMBIXAJZHGCJQSMDIUQLNNECPZHWPSPJROUIFDGGLOKSYLWKUREETICEELSPJYFPFCJNRTIOAQAVZSGWDOYFSAXQPZVMMNHUVXJFSPKBRBSHHCBDTV");
    msg.lat = 0.9564581879372096;
    msg.lon = 0.8094625842329006;
    msg.depth = 0.11565927390900055;
    msg.query_channel = 81U;
    msg.reply_channel = 209U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.3954848754056025);
    msg.setSource(10039U);
    msg.setSourceEntity(230U);
    msg.setDestination(47145U);
    msg.setDestinationEntity(198U);
    msg.beacon.assign("BVDSPISIXGANGZIENEWNOGLUAHXULQNKHVATPKVXTDIMPDEYRLTDLZOUHSOGOLKKEFVAZSZKTPJRWWUVCYYHGQBHW");
    msg.lat = 0.008295849828295565;
    msg.lon = 0.3574753451357503;
    msg.depth = 0.58943924634497;
    msg.query_channel = 149U;
    msg.reply_channel = 180U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.6556709788629618);
    msg.setSource(62491U);
    msg.setSourceEntity(113U);
    msg.setDestination(26810U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("JGNGDKOQCLLGJMMHJG");
    msg.lat = 0.7513657638162448;
    msg.lon = 0.27769304543408524;
    msg.depth = 0.11340479752088484;
    msg.query_channel = 149U;
    msg.reply_channel = 11U;
    msg.transponder_delay = 91U;

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
    msg.setTimeStamp(0.7212451215703644);
    msg.setSource(27861U);
    msg.setSourceEntity(118U);
    msg.setDestination(14869U);
    msg.setDestinationEntity(176U);
    msg.op = 89U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WOCQSPXJGYEKZGITJTXPYSKBSYLZLDWMXOJCNRUYOITH");
    tmp_msg_0.lat = 0.835268632313381;
    tmp_msg_0.lon = 0.7854961630414811;
    tmp_msg_0.depth = 0.2648867312166189;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 200U;
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
    msg.setTimeStamp(0.932467332673215);
    msg.setSource(35335U);
    msg.setSourceEntity(149U);
    msg.setDestination(62187U);
    msg.setDestinationEntity(39U);
    msg.op = 175U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XDACEDUOLEHHOOAJEGPZHZIPIOLTAZUTFDGNFEYLGGEIFQKVXPICDWQNVFPMMXBUUZGOJDBGMWTJVRRZFGIVSSOFCY");
    tmp_msg_0.lat = 0.8150219251915043;
    tmp_msg_0.lon = 0.8580421498324788;
    tmp_msg_0.depth = 0.9677453498393034;
    tmp_msg_0.query_channel = 33U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 209U;
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
    msg.setTimeStamp(0.976931468157343);
    msg.setSource(44764U);
    msg.setSourceEntity(176U);
    msg.setDestination(40625U);
    msg.setDestinationEntity(195U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.4054509603855926);
    msg.setSource(2878U);
    msg.setSourceEntity(253U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(19U);
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.7129145316034678);
    msg.setSource(12263U);
    msg.setSourceEntity(67U);
    msg.setDestination(29519U);
    msg.setDestinationEntity(75U);
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AZYPLKTCSEOVFFVZLBUZTHXVWCPRSVAZBUSHTLOCXWMDLTMWQHXLVFJTRCDNSTMDICRPYLZESXJEYJJJTREMQGNRPOZVUYGNFAKHKEIKXABZSGIHZNMUGMAHXOTVDIUDZIBWYBDJMOXERRYOLVBQGGFNBFFHYKJRIBQKTPVLXOALFXYGOAADSCCKCWUEHWNTSOPKANGIGNIQPQJEDJMOKPRCUHHLGYVQIWMEZRUQNWBUNPDMAKECWBJSS");
    tmp_msg_0.sys_type = 19U;
    tmp_msg_0.owner = 43009U;
    tmp_msg_0.lat = 0.39403519211983185;
    tmp_msg_0.lon = 0.3284718159500749;
    tmp_msg_0.height = 0.568306288962379;
    tmp_msg_0.services.assign("YFYFSPLEWDLKZGTHJGDQEHXJCOFVAVEDREIHYRXTSIXMOZVLSUXXFUAWUBOXNCZRFMAYJIAYILBMYSSSYQRZRKQMGREJCECZQBTROXGKEKNABDUPUUGBVXNBRLMUIHPTNVFOWMZZNHWXJOLYEFNQSOWTQKBJHSVCAUXAGCDUIGPCCOTGTPPOKIEEFHZNNDRVMZOSWVYBKDMPLWITDACWAQMTLRGQVDIHJPPWNJNFISZLBKBPJVML");
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
    msg.setTimeStamp(0.7870196563312216);
    msg.setSource(4836U);
    msg.setSourceEntity(27U);
    msg.setDestination(3659U);
    msg.setDestinationEntity(51U);
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 227U;
    tmp_msg_0.command = 206U;
    tmp_msg_0.settings.assign("WQOEWATEETXIBXDDMKY");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 55181U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6381391544026099;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.635522087752677;
    tmp_tmp_tmp_msg_0_0_0.eta = 2372252805U;
    tmp_tmp_tmp_msg_0_0_0.duration = 39295U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ATSFENINRUOBCVRGNRTEHSGJLLXUHBVINNPDJBJSFDQWHQZGNUXTTQRTMRIAETYMLWUEDOKACECCHYAMEDPJVJHQSBZPLTHIZWRGHUOQKOFPIQFQFGAOPWYPCOEWBYZXROCWKKPGHCPYVKMSWJVZZSNDYZGIOMMXDFKHLITLJCARXDYFQRXUOZNUDKMBGVMLMAASLWXBGJPXUTMPKZNBKVYVZJQEQVVES");
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
    msg.setTimeStamp(0.20043944343557063);
    msg.setSource(16957U);
    msg.setSourceEntity(165U);
    msg.setDestination(40483U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.5543210059115631;
    msg.lon = 0.9833881080074038;
    msg.depth = 0.4295736199692364;
    msg.sentence.assign("CDSJZNEOMGGTHQBXNLXPDJWHYRTKMYBEVTJSGFYZIVPFO");
    msg.txtime = 0.9510104180912804;
    msg.modem_type.assign("HWQALQNRVPYQRXCHGXOPKRGUXZEYKTSAGJHRQ");
    msg.sys_src.assign("RMQIAZMDVLBUTEIVPCCMKYOPMSAHBCMGALFLGTJLUXWHJSUNXFBLDJFEYGXBSIAWPQVFJITYQQTOTKDEWRSHCWNPAGVSIJENSNOGIBJRZXBICFYYYUEZEOBCAPDCZXSALUPPWHWZN");
    msg.seq = 31910U;
    msg.sys_dst.assign("KMVQUTBCBPRBFNMZOCHXKLDRXUFMGHGOOFLRMDZPASRURZWVNXHTYJJDQFWYCJLMIZSEASMKFICVNEHJRQSZEUJDVIKKSAYHRFEWLSKMAGSQCGILDZAPGWXO");
    msg.flags = 19U;
    const signed char tmp_msg_0[] = {57, 2, 71, 81, -15, -86, -55, -117, 19, 25, 105, 17, -123, -69, 91, -27, -41, -79, 126, 109, 79, -26, 76, -13, 71, -105, -35, -27, 32, 93, -35, 83, -59, -2, 35, -45, 6, 13, 43, 48, 71, 48, -41, -42, 125, 66, -121, -45, 43, 29, 42, -111, 55, 41, 85, -29, 121, 75, -118, 109, 58, -13, -29, -15, 81, 8, -88, -48, -83, -11, 81, -75, -63, 108, -81, 60, -56, -79, 88, 29, -8, -55, -21, -70, 45, -112, 16, -37, 62, -11, 21, -4, 48, -98, 118, 41, 23, -40, 43, -20, 13, 87, -84, -59, -112, 51, 72, 7, 100, -53, -23, 39, 91, 56, 95, 64, -19, -48, 69, -56, -56, 32, 120, -36, 92, 80, 99, -11, -11, -97, 63, -127, -78, 34, 113, -8, -89, -81, -124, 42, 99, 70, -128, -103, 22, -38, 56, 91, -110, -105, 18, 80, 39, 96, 84, 68, 61, -71, -14, 22, 112, -38, 65, -95, -18, 76, 121, 3, -10};
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
    msg.setTimeStamp(0.6983585772539465);
    msg.setSource(12532U);
    msg.setSourceEntity(106U);
    msg.setDestination(5419U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.6239726808862492;
    msg.lon = 0.9920681742673592;
    msg.depth = 0.8854291529125677;
    msg.sentence.assign("LIPKMKQMLXYPFKQASUWIBURNNOADBYMCDBZDAMNRBHGCNMTDYCOXVQGSQTYHJVZMLACOAOWQDYDTEVNRIYLTFNZXBXDROJJNJDSKNBUSMDSJCPWUYIBOWHZVFJUGJAGIPFVSQJGXORSFJUOFYZA");
    msg.txtime = 0.228577252108904;
    msg.modem_type.assign("HKICTCSBSLRUXNAKIXJAOMSZYAWHHKFLOKXBVSTDCJSMVBGRPPRQYUGJNUXZUWQTGPJUTWEGJUPZZCVFHHAQFQEWQNDFHRZWBJQHTODQAIZWMMOIAPNKJDNHAGUQNHKKOYYRWIIYYIMVCRRMBFTEBXZYLDPFLITCEVWOG");
    msg.sys_src.assign("HAZQKRGTCVEOQIHCVDFKSQPYZQXLOLJLSVKIGZTTBVCFEWOPYJXMIUNUADQSBGAQBTADCMAJHJVNTIZCMPZIQWSGVEXRXHPHFWTHLOXXZWNDGWSTQNKHDHMCRYLQOVAMVMUWBSIRXYXEMNIMDGWCZYSUDNWLAXOFBWKYR");
    msg.seq = 28097U;
    msg.sys_dst.assign("FNRNABWJHAMDYWKW");
    msg.flags = 163U;
    const signed char tmp_msg_0[] = {-35, -109, 3, 70, 86, -83, 92, -48, -65, -43, -76, 18, 35, 33, 72, -101, 104, 101, 103, 80, 7, -40, 113, 111, 78, -30, 39, 61, -67, -20, 96, 80, 121, -86, -18, -83, 51, 2, -113, 76, 43, -66, 38, -17, -91, 24, 91, 20, 108, -12, -18, -122, 19, 108, 83, 53, 32, 103, 47, 82, 51, -39, -45, 115, 15, -53, -42, -106, -44, -38, -36, 47, -17, 97, -76, -111, -75, 13, -92, -2, -101, -100, -66, -45, -26, -40, 74, 51, 78, -49, -17, -92, 88, -50, 116, -85, 27, -124, -113, 111, -71, 8, -85, 96, -25, -44, -33, -56, -15, -29, 29, -105, -94, -14, 3, 115, 73, -32, 81, -1, 16, -110, 114, 4, -44, -79, -99, 13, -74, 9, 37, -25, 77, 96, 71, 59, 35, -49, -2, 65, 25, 52, -92, -90, 92, -105, 44, -49, -17, -57, -43, 30, -42, 123, -117, 103, 13, -18, -15, 81, -17, -67, -55, 3, -58, -106, 43, 89, -71, -104, 89, -111, 58, 36, -7, -53, 46, -67, 7, -39, 51, -122, 7, -80, 31, 50, 41, -8, 57, 63, -27, -51, -64, 124, -31, -16, 72, 115, -128, 81, 25, 109, -40, -64, -31, 96, 122, -30, 113, 96, 103, 87, -85, 4, 33, -31, -125, -28, 15, 56, 80, -61, 56, 102, -41};
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
    msg.setTimeStamp(0.19368551504390596);
    msg.setSource(22913U);
    msg.setSourceEntity(99U);
    msg.setDestination(36038U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.07070330868611907;
    msg.lon = 0.1374248698967534;
    msg.depth = 0.27416130366111435;
    msg.sentence.assign("LAYBEWXRKZQGVHBJYGGVRTZALRMPAWQUEZVIOYMQEDMSMFRCGBJSAWGKOFDUEQN");
    msg.txtime = 0.5792618108054174;
    msg.modem_type.assign("CNWUPSIITVCNJORLARRPKMRKUHZESFWGTYJZRZLXIBSDJYNWOZFEQMUHBVWYZTYOPYBOLZGAXZOXYHBWGPAPXXEKJXITQNMXHTBXUNSKRFSCJNMGETRLKDADMRCUAGCCCPLOAOWHMVHEZFEAUYVDHUMTIDVAJQALORFLF");
    msg.sys_src.assign("IGVBDGDOERMHMTEUEPZZROPQWWBAXQAFVTDFBSDDYJXWCQTETKWCG");
    msg.seq = 27996U;
    msg.sys_dst.assign("MPHYNOHMBZEOAARTNVGEMAARTHCMEVVUWNKPYUQJDWOTGJNPIDRLZARIZFDSZWFCEZRJQNFIHBIUOXNHEWRET");
    msg.flags = 14U;
    const signed char tmp_msg_0[] = {22, 111, 126, 28, -107, -13, 126, 29, 77, 60, -104, -44, 111, 6, 32, 49, -115, -102, -54, -79, -108, 28, 101, 117, -100, -25, 26, 81, 10, -78, -31, 100, -40, -118, 7, -128, 70, -106, -59, -7, 71, 119, -105, 41, -74, -63, -102, 114, 81, -51, 14, -111, 43, -35, 67, 93, 37, -72, -64, -115, 95, 10, 119, 70, -46, 49, 29, 115, 63, -54, 91, 119, 70, -103, 43, -1, -40, -37, -69, 123, -120, 35, 85, -101, -54, 52, -113, -124, -34, -105, -88, -85, 117, 70, 114, -52, 124, -96, 81, -39, 82, -4, -81, -30, -61, -45, 31, 25, 16, 13, 31, -42, -127, 98, -120, 88, 0, -104, 87, -57, 118, -66, -123, 33, -106, 0, 6, -68, 55, 58, -63, 18, -111, -86, -71, 57, -85, 45, -10, 31, 65, -116, -11, 115, 75, -21, -54, 34, 79, -53, 38, -1, -28, -80, 107, 3, 21, -8, 11, -68, -107, 10, 67};
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
    msg.setTimeStamp(0.32414687416510213);
    msg.setSource(7914U);
    msg.setSourceEntity(229U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(71U);
    msg.op = 215U;
    msg.system.assign("NYYFIUTVKDUSSRSAFYMIDITXICTFHGLKHMAJWPHSMJZJQURZZXTIPYULZDLNLNNAGKPAABSELGAVCXWDHJDBKXPNALPEELSGCRBSEKXBXBPUOKOXZBYONGPVEBAYUXZWOCDYIQCOTFQIVOOBEYKYRGMPHRVXJQFZRLZWQVNOWUCRTWPRHWKWTQC");
    msg.range = 0.8054029384777761;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.5444221113842552;
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
    msg.setTimeStamp(0.14585216200123485);
    msg.setSource(29648U);
    msg.setSourceEntity(72U);
    msg.setDestination(58269U);
    msg.setDestinationEntity(42U);
    msg.op = 33U;
    msg.system.assign("HICYSVUXDBDJIGOZTQFUUICAMOGWTKOXEJKGEKRNVHVFBKBDCGBROGERMBZDQLSEMCYZZHGLENTHAXFPPRVVKHRVPWWBKCINUXERYOAIWPRTCNMSBUHAQDTFOPXMLSMLYKHBDAHXPYMLFZAZIANMVZFPYQRCJTLXNSTLLXWAJHNKEUDZAGIKQRPWSOQJUYIUVDDFOQTOJGEFNX");
    msg.range = 0.16252323642179822;
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 221U;
    tmp_msg_0.op = 206U;
    tmp_msg_0.request_id = 21663U;
    tmp_msg_0.plan_id.assign("ZMONBGPXHTWMPUWAEKNAIOBIQLFTGZCOLNHJTQRWRHKYHMFDURFGLOBGDROPTIMYCAZVDODMCSUOYNBPJLOXYPJXBVRAGAEQGSGXOCSTVAEWEPEVDONSUDJHGVMLTHXWNXETEHQKIXLJGNQBWBYFSJLIKLMGUWJLKYVIQC");
    tmp_msg_0.flags = 61762U;
    IMC::ExtendedRSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.42793775547592316;
    tmp_tmp_msg_0_0.units = 75U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ZFGMDGQYNHLIRMSKUSNFURULIRBODCZAZDLDETIHKJJWRFSAVWGJTJGBMEBIBWPYFDVGSLAXTKMWNQTJVAQEAIWUUTBZPLWVQQQAPFOLYXOCQRVXEOJNZYNEBJOYHCCXEUMWCZKKFTSHFFEIKZ");
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
    msg.setTimeStamp(0.17088068362577646);
    msg.setSource(3351U);
    msg.setSourceEntity(172U);
    msg.setDestination(37074U);
    msg.setDestinationEntity(201U);
    msg.op = 103U;
    msg.system.assign("RVDFNINBGILBPEQAQLAHIIIQLXPIPMZKDBECQAGLFXDIXUOCNTDVPFZVVYMMLTRXJNMEQHCKOWUSSFSWJXLUUQKNCBVOADFYKANLLSMOYYMKTMBFLMEBCYQSEZTPAJUHUCKGGRVTEFKTJHZHKDPVBTAFWGGRSXWDRSRUOYZRAGGOYJZMJWJE");
    msg.range = 0.6739232359534864;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 57509U;
    tmp_msg_0.duration = 52549U;
    tmp_msg_0.speed = 0.3514525857738662;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.x = 0.13188770745100387;
    tmp_msg_0.y = 0.42375036062544325;
    tmp_msg_0.z = 0.8614938980854429;
    tmp_msg_0.z_units = 250U;
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
    msg.setTimeStamp(0.9426592279634914);
    msg.setSource(8603U);
    msg.setSourceEntity(23U);
    msg.setDestination(4668U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.845710864777018);
    msg.setSource(1757U);
    msg.setSourceEntity(186U);
    msg.setDestination(18548U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.9064162013461765);
    msg.setSource(35480U);
    msg.setSourceEntity(68U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.2578240669648538);
    msg.setSource(37457U);
    msg.setSourceEntity(83U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(234U);
    msg.list.assign("ZNCKPYGIYERKWUZMCBROLTKXQZXHUYGKZGISMCXXDZVEMJBVOSDFJRMHUODMYNLLMTMJLIKSHBLRWCLBKAGCPWKJGPSRVZISSEAYSTVWJJZOTIDUCFEXDOUVBIUHBETGHJWUDPVZXRERSFQFFATEPWQQDNGUOPAWOXELMPFBG");

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
    msg.setTimeStamp(0.4111115031281516);
    msg.setSource(5098U);
    msg.setSourceEntity(178U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(2U);
    msg.list.assign("RTVGQEEQIHNXUDSPHCOTAKVDAGHLRMUPCZKHUNQGKEQFFTFMVOJOTJTCXUEZHJAPBBFVTJILDFJJBIKFDWEQOLNWXUOMNYAKDGHOCMKRTRDFIWREHPWYWBEYMNFCXJVRLYIEEIJZLEGNMAAGSWJJMSCTDZUBTOWURLXPGDQNUYBISDRZQWFTVOUQONBZXFLPBSBXYPKCLMGLRVVPYNCMZG");

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
    msg.setTimeStamp(0.6404515903645084);
    msg.setSource(44304U);
    msg.setSourceEntity(243U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(218U);
    msg.list.assign("LMYTGQUZWGXSWCWRPGINBXOEYSVSZCFJZ");

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
    msg.setTimeStamp(0.1084258573376915);
    msg.setSource(42772U);
    msg.setSourceEntity(54U);
    msg.setDestination(42767U);
    msg.setDestinationEntity(194U);
    msg.peer.assign("OKATMSZKBTZXHTUSMVLUTJCEQLRSAWBXAIZCFGREYGPCAABNMJPEDJIDFHGGSRWRGVYUVNQLZUJIPUFMRPSKYPRQBQLDMXIHIPSOWQLSYZXENGHKEQJR");
    msg.rssi = 0.9588080718744594;
    msg.integrity = 54726U;

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
    msg.setTimeStamp(0.9897978673685699);
    msg.setSource(12193U);
    msg.setSourceEntity(113U);
    msg.setDestination(20824U);
    msg.setDestinationEntity(43U);
    msg.peer.assign("UBSJBZQGBQTWCSSKPRSHGTXVOQCQTSRSVOFELGMWYXNACYNKQMJHBGKNILWLMCKNAZJGXQIAEDZFZPCXYDZUYPPHKEJQMFFUMLTMRRNCUSNYDLY");
    msg.rssi = 0.4824697256468078;
    msg.integrity = 19731U;

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
    msg.setTimeStamp(0.37599411975207575);
    msg.setSource(45602U);
    msg.setSourceEntity(146U);
    msg.setDestination(7168U);
    msg.setDestinationEntity(67U);
    msg.peer.assign("HHFVQJXXOCEKAJQNVWURISWJWCLANZYBVEYLJAIFRTAZGJVHORDIDELGUDKNEYLCMSWUAKUFEGFPCZTHNBRGYQBTJMMMXKQXKEIWHXRDCNAMLJKUVVWGGIRSOAXERVIFUAPZCOHRSSWWHJONHKMTSQYUKSRQTZPPYFJPKUMVAGTLYTQJDEHDGMXVKBIRDZLBOPLYPDZDSTIFVGOIXLAOOC");
    msg.rssi = 0.082319662726559;
    msg.integrity = 65411U;

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
    msg.setTimeStamp(0.09125716930279726);
    msg.setSource(59222U);
    msg.setSourceEntity(146U);
    msg.setDestination(26841U);
    msg.setDestinationEntity(68U);
    msg.req_id = 41824U;
    msg.destination.assign("SSALVWOOEHYQSMJGIRNHNCURJNDLBAWTJHWZHAXTCDAVKODBZLPGQVLZYAWDGGACTQHFZXPRZQSASBVKIQOWJCXMEVTUIZCEUXPFDNQTBZLZKNMTMQLNMBYYFTELIPFVUNVVKTJRDURKXAHXWEOXUWMCOXJEHWHABIMUPUSYDZSMKCWCKFRCKPBEDPGXTFSZEOHFNVOGJLFG");
    msg.timeout = 0.3162264746965353;
    msg.range = 0.6953975282545883;
    msg.type = 12U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.7506504704493432;
    tmp_msg_0.speed = 0.02107430079196726;
    tmp_msg_0.turbulence = 0.20130657519221506;
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
    msg.setTimeStamp(0.6875344049336692);
    msg.setSource(39046U);
    msg.setSourceEntity(97U);
    msg.setDestination(26099U);
    msg.setDestinationEntity(22U);
    msg.req_id = 57241U;
    msg.destination.assign("OMIUHZMMMZTLJSVDRJKLUEAEGDZGDJNSQUAOOAULBUBJVQHQQCCTYQJHRXTFRKJEWKRYLWFICMBBPATUBCWXXWCTNHMMMPYRVVBGIRICCDEKPYNOSIANHURNWWDLLPPFQXLEVQGLGXHSGWVDMTBGYENIUKAWFKIAOBSKUBEVHP");
    msg.timeout = 0.02853621724258859;
    msg.range = 0.7120141795972879;
    msg.type = 185U;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("RRPBWACIZRLZNYSHWLNQRAFTCXJTWSSHISICDGXVUOOUJRCIBUEWDXVYBTSCOMXEKTYABDHBXUZKIHWOJWHQCYFKSKAZARPTYNFSILDMWNREJGWNGZPROEMFWUKHQKZMLPYJSZGEXNQUFTIGJKTXPEGNDOKQBQZVVLXJVDLQMQTKNLZVFYIJDPUYMALGIMQVKJPMYDMOAGCVMJFSCXWRHUGUECHNFHCFDEDBZLSXL");
    tmp_msg_0.links = 2138490582U;
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
    msg.setTimeStamp(0.5212278836731171);
    msg.setSource(37248U);
    msg.setSourceEntity(235U);
    msg.setDestination(33061U);
    msg.setDestinationEntity(208U);
    msg.req_id = 62933U;
    msg.destination.assign("JZDDBNRANYUWSAAIDSASVRVFAQTENOYOEHMATXVCJBUDLPPFBZYYFKCKXRVFSCXHDOEMLCBUYIPMJBNZOZVRWHXDVIYACJHRSSWFZXGELRNCTYHZIPQFRMELGIOTWZIUIPMCQWOGRYOXMXBQDCKTEWSSXILDVIWJEWGPTXQHGJYJGQEPPZGQUVVQTNMUHOFFWLICLKPBBUTPANMTUCGGJWSKNNLMNLRJGK");
    msg.timeout = 0.17759868001036172;
    msg.range = 0.8517674058680065;
    msg.type = 116U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 86U;
    tmp_msg_0.op = 18U;
    tmp_msg_0.plan_id.assign("ONICMHFEIDJCXGRTLRUCMOQPVBASHHADBBMZPJBRLFEXYSHNRKGYVQWUQNPKINQAZJNVSLXVJWLPYCNPPTKWQOEZOGGDSMAHEXZRTFANRLGUNLSSGSFQAMLVLCXTTCTHKFIPJDVYOCDWPHJTIYBRWWPIOXVOQDZFN");
    tmp_msg_0.params.assign("BQZAPOTMUKQXVLORGBUS");
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
    msg.setTimeStamp(0.9559550373103047);
    msg.setSource(55051U);
    msg.setSourceEntity(165U);
    msg.setDestination(39923U);
    msg.setDestinationEntity(8U);
    msg.req_id = 28822U;
    msg.type = 25U;
    msg.status = 134U;
    msg.info.assign("SSLXYGGWOXOBRMBMWIURCUQMYDCYAJODJO");
    msg.range = 0.24779667227818547;

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
    msg.setTimeStamp(0.018876834177959156);
    msg.setSource(9392U);
    msg.setSourceEntity(223U);
    msg.setDestination(49504U);
    msg.setDestinationEntity(193U);
    msg.req_id = 26451U;
    msg.type = 6U;
    msg.status = 151U;
    msg.info.assign("HWBYLHMGXTPVPIVHDWGTCVAVJPUNRAIHDYQVEWVCFCEUKKBTJRQUKRERLIGAPAXTGAKRDTHKPHFYUNAPODHPORSLBJJPMEZNZOMVBJMYXJUFJYWIJAGCEARQXSZYLQCXDDHINOKTWIRGLLHTGWZCMFUVKVDKYQANEMWPBQZSJZQWYENNGSNMTOLCOULBKFPGCXDJXSK");
    msg.range = 0.3142474018037643;

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
    msg.setTimeStamp(0.7477155971292344);
    msg.setSource(26730U);
    msg.setSourceEntity(132U);
    msg.setDestination(24245U);
    msg.setDestinationEntity(52U);
    msg.req_id = 42018U;
    msg.type = 228U;
    msg.status = 123U;
    msg.info.assign("IRTIMULXPOCVLGEFEJGHVFFHHSJAWNBNNFVRUTLZBOJGEICMEXDUNAHMNIZRSJXQTPPPBMOUVVBMUDGACBYQHOBXFNXRBOMTYHSTPWURICKIEBQLWITVQLMJZDKNARCAAXPFKOYGGPDHADKUQDZZETMHWYJKYDRDMETAPWPROFVLKDCYW");
    msg.range = 0.7615672055468669;

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
    msg.setTimeStamp(0.3248825361598425);
    msg.setSource(12403U);
    msg.setSourceEntity(118U);
    msg.setDestination(13877U);
    msg.setDestinationEntity(245U);
    msg.system.assign("IZFSWSTHHNYVSDLZHPKYRHQEQFLTCBGNRGQAQOGGLWEUVCFMMATQUDWXFWVVRBJTDZYKUDKXYDSCMVJLOIBBVJQEIWUMJTTDRKBCAQOWNWINMIBPDGQUJAOMPZIDMRZKEDMUEOTSUYSXLTAGHXVUNECBE");
    msg.op = 114U;

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
    msg.setTimeStamp(0.5188528824663734);
    msg.setSource(5267U);
    msg.setSourceEntity(219U);
    msg.setDestination(30209U);
    msg.setDestinationEntity(144U);
    msg.system.assign("SGYWRJQAAEIMWQOUPOGGCEFBVLQSOWFQIXLEQNNMKPJPBYEIYUERXXZPUFRAYDVSCVIPQFSZPPWQBDHHOZOIJWAVLHRRPUDRGVZHGEZDJRDNWACLZFHKNTHMCYKOFXDSSLSQDWSABIIBMBTEGJZVITKFJTCKFDTYGLAUTYUNCBOYVNLDRMQYICQOTVTKKNHBAUNXXKXCHEZVTXJEKMFUSU");
    msg.op = 176U;

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
    msg.setTimeStamp(0.8825917827648209);
    msg.setSource(49571U);
    msg.setSourceEntity(52U);
    msg.setDestination(61572U);
    msg.setDestinationEntity(172U);
    msg.system.assign("AXRJTUBLLEMGKHRABGNQOFQGLDTDTJLPVMXJFWNZREVEVSVWOUPHVJGNSMIOPBIFWXEBOLWTBUZZYCAYSBANJVJCINTCOTPZMYGVKLRHRRHDAWXYSTASSXIUWTZJYCMKUOIUYPPKMMDTFUWLBJQUHHQBMMGXWIMSIFVZRACNUJXFBUKXLGDWRQGQKCECHJIOKRDGDV");
    msg.op = 149U;

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
    msg.setTimeStamp(0.7405060248419958);
    msg.setSource(1336U);
    msg.setSourceEntity(79U);
    msg.setDestination(53495U);
    msg.setDestinationEntity(116U);
    msg.value = 9774;

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
    msg.setTimeStamp(0.9746886544911585);
    msg.setSource(42496U);
    msg.setSourceEntity(139U);
    msg.setDestination(46360U);
    msg.setDestinationEntity(4U);
    msg.value = 26550;

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
    msg.setTimeStamp(0.5078512322273916);
    msg.setSource(46282U);
    msg.setSourceEntity(135U);
    msg.setDestination(57130U);
    msg.setDestinationEntity(114U);
    msg.value = 14781;

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
    msg.setTimeStamp(0.2371013543219016);
    msg.setSource(29299U);
    msg.setSourceEntity(168U);
    msg.setDestination(19657U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7481778784810597;

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
    msg.setTimeStamp(0.5679865818013665);
    msg.setSource(32092U);
    msg.setSourceEntity(36U);
    msg.setDestination(20519U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8126848371480815;

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
    msg.setTimeStamp(0.568021235702742);
    msg.setSource(48484U);
    msg.setSourceEntity(57U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(79U);
    msg.value = 0.00028196817430847787;

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
    msg.setTimeStamp(0.2318576487468993);
    msg.setSource(25638U);
    msg.setSourceEntity(252U);
    msg.setDestination(50535U);
    msg.setDestinationEntity(42U);
    msg.value = 0.028431114438355998;

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
    msg.setTimeStamp(0.01779860856975568);
    msg.setSource(42632U);
    msg.setSourceEntity(169U);
    msg.setDestination(36062U);
    msg.setDestinationEntity(74U);
    msg.value = 0.23903455323810907;

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
    msg.setTimeStamp(0.6542844622628182);
    msg.setSource(39176U);
    msg.setSourceEntity(202U);
    msg.setDestination(45959U);
    msg.setDestinationEntity(254U);
    msg.value = 0.01159287601597736;

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
    msg.setTimeStamp(0.4533581873785084);
    msg.setSource(48417U);
    msg.setSourceEntity(154U);
    msg.setDestination(10423U);
    msg.setDestinationEntity(53U);
    msg.validity = 49931U;
    msg.type = 195U;
    msg.utc_year = 2777U;
    msg.utc_month = 239U;
    msg.utc_day = 214U;
    msg.utc_time = 0.9032855634662972;
    msg.lat = 0.7146939696064427;
    msg.lon = 0.6657516392402971;
    msg.height = 0.36508478873962347;
    msg.satellites = 83U;
    msg.cog = 0.21062263228399225;
    msg.sog = 0.2292131597703847;
    msg.hdop = 0.25681868927939944;
    msg.vdop = 0.829158032319423;
    msg.hacc = 0.13938555371294548;
    msg.vacc = 0.29250013751595094;

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
    msg.setTimeStamp(0.17556282766182996);
    msg.setSource(43589U);
    msg.setSourceEntity(196U);
    msg.setDestination(42434U);
    msg.setDestinationEntity(32U);
    msg.validity = 28732U;
    msg.type = 40U;
    msg.utc_year = 27480U;
    msg.utc_month = 240U;
    msg.utc_day = 75U;
    msg.utc_time = 0.6318765598014455;
    msg.lat = 0.5353323442519072;
    msg.lon = 0.28500816261931927;
    msg.height = 0.14233593742750672;
    msg.satellites = 23U;
    msg.cog = 0.490553291197224;
    msg.sog = 0.042935586510010504;
    msg.hdop = 0.6730023664688995;
    msg.vdop = 0.12244906256631738;
    msg.hacc = 0.5710252077569953;
    msg.vacc = 0.7998483950252658;

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
    msg.setTimeStamp(0.26652397702569985);
    msg.setSource(9862U);
    msg.setSourceEntity(48U);
    msg.setDestination(47814U);
    msg.setDestinationEntity(103U);
    msg.validity = 44667U;
    msg.type = 86U;
    msg.utc_year = 37791U;
    msg.utc_month = 91U;
    msg.utc_day = 24U;
    msg.utc_time = 0.007750272337130104;
    msg.lat = 0.6711177101574402;
    msg.lon = 0.17022422298698536;
    msg.height = 0.7688699721191267;
    msg.satellites = 115U;
    msg.cog = 0.46417521268648476;
    msg.sog = 0.8682752705965443;
    msg.hdop = 0.7041502677513128;
    msg.vdop = 0.24218861590723795;
    msg.hacc = 0.49663711928947185;
    msg.vacc = 0.7462037895169389;

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
    msg.setTimeStamp(0.009412063415814242);
    msg.setSource(26174U);
    msg.setSourceEntity(59U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(222U);
    msg.time = 0.09887213106787851;
    msg.phi = 0.2631368630804065;
    msg.theta = 0.6408879921964632;
    msg.psi = 0.7227808267396982;
    msg.psi_magnetic = 0.8319474387892793;

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
    msg.setTimeStamp(0.3680277155015679);
    msg.setSource(25478U);
    msg.setSourceEntity(139U);
    msg.setDestination(64640U);
    msg.setDestinationEntity(166U);
    msg.time = 0.23361013144000786;
    msg.phi = 0.6418200302913438;
    msg.theta = 0.9712315079810016;
    msg.psi = 0.376526713508211;
    msg.psi_magnetic = 0.6806129716851755;

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
    msg.setTimeStamp(0.11124175997045593);
    msg.setSource(7300U);
    msg.setSourceEntity(20U);
    msg.setDestination(32388U);
    msg.setDestinationEntity(12U);
    msg.time = 0.41415948319595064;
    msg.phi = 0.9792259524233795;
    msg.theta = 0.34349792233802623;
    msg.psi = 0.5241032978034273;
    msg.psi_magnetic = 0.44290632861686396;

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
    msg.setTimeStamp(0.3577137839420075);
    msg.setSource(23559U);
    msg.setSourceEntity(101U);
    msg.setDestination(14587U);
    msg.setDestinationEntity(95U);
    msg.time = 0.08194628013126026;
    msg.x = 0.36745772755985695;
    msg.y = 0.9504076039881788;
    msg.z = 0.16989666225370903;
    msg.timestep = 0.5534027274206634;

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
    msg.setTimeStamp(0.5406744107598134);
    msg.setSource(13992U);
    msg.setSourceEntity(91U);
    msg.setDestination(14258U);
    msg.setDestinationEntity(133U);
    msg.time = 0.3193251105744479;
    msg.x = 0.191355633068358;
    msg.y = 0.6286371885507307;
    msg.z = 0.5617411600369245;
    msg.timestep = 0.05409970967213429;

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
    msg.setTimeStamp(0.6017381161177946);
    msg.setSource(28839U);
    msg.setSourceEntity(235U);
    msg.setDestination(15163U);
    msg.setDestinationEntity(240U);
    msg.time = 0.384834563623214;
    msg.x = 0.7569990596223745;
    msg.y = 0.8127102769196209;
    msg.z = 0.2410738336341216;
    msg.timestep = 0.7364915107747227;

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
    msg.setTimeStamp(0.16984352430050664);
    msg.setSource(43939U);
    msg.setSourceEntity(86U);
    msg.setDestination(58377U);
    msg.setDestinationEntity(242U);
    msg.time = 0.117375922827343;
    msg.x = 0.7810007078220095;
    msg.y = 0.5969394519038965;
    msg.z = 0.5395457186065876;

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
    msg.setTimeStamp(0.5827239430507953);
    msg.setSource(55145U);
    msg.setSourceEntity(195U);
    msg.setDestination(30421U);
    msg.setDestinationEntity(93U);
    msg.time = 0.624199343646727;
    msg.x = 0.32376086014740735;
    msg.y = 0.2022864450543096;
    msg.z = 0.5116585137531628;

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
    msg.setTimeStamp(0.966919324969998);
    msg.setSource(61676U);
    msg.setSourceEntity(197U);
    msg.setDestination(43128U);
    msg.setDestinationEntity(190U);
    msg.time = 0.5828132912937045;
    msg.x = 0.5110656414702792;
    msg.y = 0.32730544872465295;
    msg.z = 0.08776807025159439;

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
    msg.setTimeStamp(0.6228228011024702);
    msg.setSource(29108U);
    msg.setSourceEntity(210U);
    msg.setDestination(62757U);
    msg.setDestinationEntity(50U);
    msg.time = 0.3717083558735471;
    msg.x = 0.14040389927732422;
    msg.y = 0.9664187747275987;
    msg.z = 0.23693751733402113;

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
    msg.setTimeStamp(0.7695934598830494);
    msg.setSource(34199U);
    msg.setSourceEntity(24U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(57U);
    msg.time = 0.10899761997876778;
    msg.x = 0.6366111095093918;
    msg.y = 0.5498642073192002;
    msg.z = 0.6709440819580571;

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
    msg.setTimeStamp(0.21794559935776292);
    msg.setSource(1882U);
    msg.setSourceEntity(95U);
    msg.setDestination(60793U);
    msg.setDestinationEntity(248U);
    msg.time = 0.04862305567512193;
    msg.x = 0.10182156254149821;
    msg.y = 0.2009417532411546;
    msg.z = 0.7515911517969311;

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
    msg.setTimeStamp(0.42319510758433876);
    msg.setSource(31137U);
    msg.setSourceEntity(148U);
    msg.setDestination(45225U);
    msg.setDestinationEntity(175U);
    msg.time = 0.16960958367149204;
    msg.x = 0.9556190452038816;
    msg.y = 0.043225224087374614;
    msg.z = 0.03922311528581246;

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
    msg.setTimeStamp(0.6411925777888969);
    msg.setSource(31700U);
    msg.setSourceEntity(131U);
    msg.setDestination(653U);
    msg.setDestinationEntity(131U);
    msg.time = 0.20143702210403847;
    msg.x = 0.34221255841220766;
    msg.y = 0.11753862081884581;
    msg.z = 0.4232181733736632;

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
    msg.setTimeStamp(0.8419412553824082);
    msg.setSource(62841U);
    msg.setSourceEntity(126U);
    msg.setDestination(2864U);
    msg.setDestinationEntity(143U);
    msg.time = 0.4532444398703851;
    msg.x = 0.5421832978565577;
    msg.y = 0.3863112250749212;
    msg.z = 0.07203924928888628;

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
    msg.setTimeStamp(0.5734433244855754);
    msg.setSource(4146U);
    msg.setSourceEntity(84U);
    msg.setDestination(22295U);
    msg.setDestinationEntity(124U);
    msg.validity = 135U;
    msg.x = 0.1072587202252;
    msg.y = 0.9794828113861117;
    msg.z = 0.5854211221278721;

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
    msg.setTimeStamp(0.3552882165769178);
    msg.setSource(8921U);
    msg.setSourceEntity(176U);
    msg.setDestination(36509U);
    msg.setDestinationEntity(155U);
    msg.validity = 236U;
    msg.x = 0.9021748967526315;
    msg.y = 0.8821297040336281;
    msg.z = 0.4645721455025782;

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
    msg.setTimeStamp(0.7344801370699215);
    msg.setSource(19219U);
    msg.setSourceEntity(12U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(169U);
    msg.validity = 174U;
    msg.x = 0.5492498626686233;
    msg.y = 0.21270822775753973;
    msg.z = 0.13186765654412524;

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
    msg.setTimeStamp(0.25312797141950283);
    msg.setSource(54167U);
    msg.setSourceEntity(246U);
    msg.setDestination(3459U);
    msg.setDestinationEntity(58U);
    msg.validity = 132U;
    msg.x = 0.37457446787969484;
    msg.y = 0.6329945120675391;
    msg.z = 0.7687922991026821;

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
    msg.setTimeStamp(0.8530079688012071);
    msg.setSource(11730U);
    msg.setSourceEntity(186U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(219U);
    msg.validity = 208U;
    msg.x = 0.9137587481483339;
    msg.y = 0.9297939999189436;
    msg.z = 0.6249100048263887;

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
    msg.setTimeStamp(0.39839053909178446);
    msg.setSource(4405U);
    msg.setSourceEntity(240U);
    msg.setDestination(3935U);
    msg.setDestinationEntity(97U);
    msg.validity = 12U;
    msg.x = 0.21817410510580437;
    msg.y = 0.6807280633221948;
    msg.z = 0.7335411973716869;

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
    msg.setTimeStamp(0.771857163376824);
    msg.setSource(28333U);
    msg.setSourceEntity(98U);
    msg.setDestination(53930U);
    msg.setDestinationEntity(30U);
    msg.time = 0.46775911622261757;
    msg.x = 0.674438795775308;
    msg.y = 0.29572844958660816;
    msg.z = 0.9706985664175425;

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
    msg.setTimeStamp(0.18229572306501884);
    msg.setSource(49333U);
    msg.setSourceEntity(105U);
    msg.setDestination(45856U);
    msg.setDestinationEntity(146U);
    msg.time = 0.7667794957091494;
    msg.x = 0.11657536918249878;
    msg.y = 0.7441773673464763;
    msg.z = 0.7259585712656855;

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
    msg.setTimeStamp(0.5159066034088604);
    msg.setSource(65262U);
    msg.setSourceEntity(217U);
    msg.setDestination(11270U);
    msg.setDestinationEntity(61U);
    msg.time = 0.915382617934584;
    msg.x = 0.5903851604141104;
    msg.y = 0.9186339324216096;
    msg.z = 0.39368002261150925;

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
    msg.setTimeStamp(0.3356954427840396);
    msg.setSource(50664U);
    msg.setSourceEntity(170U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(63U);
    msg.validity = 180U;
    msg.value = 0.29655946801843835;

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
    msg.setTimeStamp(0.1529128854883428);
    msg.setSource(1349U);
    msg.setSourceEntity(146U);
    msg.setDestination(58119U);
    msg.setDestinationEntity(39U);
    msg.validity = 51U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7973793579860805;
    tmp_msg_0.beam_height = 0.763926102494237;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.18426573541962576;

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
    msg.setTimeStamp(0.7869856939306111);
    msg.setSource(24025U);
    msg.setSourceEntity(196U);
    msg.setDestination(50614U);
    msg.setDestinationEntity(229U);
    msg.validity = 254U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.49244782326730474;
    tmp_msg_0.y = 0.14173188928929703;
    tmp_msg_0.z = 0.3741747664703182;
    tmp_msg_0.phi = 0.522218036244761;
    tmp_msg_0.theta = 0.9186609266692926;
    tmp_msg_0.psi = 0.7035850866652744;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.17117476526621445;

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
    msg.setTimeStamp(0.3707017912243592);
    msg.setSource(61879U);
    msg.setSourceEntity(58U);
    msg.setDestination(49247U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6591462349820613;

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
    msg.setTimeStamp(0.7754509389986554);
    msg.setSource(14773U);
    msg.setSourceEntity(27U);
    msg.setDestination(22925U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5331883468348049;

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
    msg.setTimeStamp(0.1345733138598204);
    msg.setSource(32247U);
    msg.setSourceEntity(108U);
    msg.setDestination(36250U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6150488902642636;

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
    msg.setTimeStamp(0.07427228505891459);
    msg.setSource(35716U);
    msg.setSourceEntity(32U);
    msg.setDestination(20973U);
    msg.setDestinationEntity(159U);
    msg.value = 0.29749939969875316;

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
    msg.setTimeStamp(0.5417216687147344);
    msg.setSource(29212U);
    msg.setSourceEntity(199U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(245U);
    msg.value = 0.4457066637997046;

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
    msg.setTimeStamp(0.7043003232254399);
    msg.setSource(27888U);
    msg.setSourceEntity(163U);
    msg.setDestination(38047U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8239794894522875;

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
    msg.setTimeStamp(0.2056497006921938);
    msg.setSource(19363U);
    msg.setSourceEntity(229U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5409705587847955;

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
    msg.setTimeStamp(0.9412978527904415);
    msg.setSource(2815U);
    msg.setSourceEntity(186U);
    msg.setDestination(46114U);
    msg.setDestinationEntity(157U);
    msg.value = 0.691806053757935;

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
    msg.setTimeStamp(0.24035437470129273);
    msg.setSource(19373U);
    msg.setSourceEntity(36U);
    msg.setDestination(5120U);
    msg.setDestinationEntity(183U);
    msg.value = 0.639135675991656;

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
    msg.setTimeStamp(0.28219333885341624);
    msg.setSource(40138U);
    msg.setSourceEntity(70U);
    msg.setDestination(28917U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6457012970092627;

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
    msg.setTimeStamp(0.8581103190102409);
    msg.setSource(43201U);
    msg.setSourceEntity(209U);
    msg.setDestination(4618U);
    msg.setDestinationEntity(120U);
    msg.value = 0.22284785110998906;

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
    msg.setTimeStamp(0.6104221735429057);
    msg.setSource(19177U);
    msg.setSourceEntity(58U);
    msg.setDestination(24006U);
    msg.setDestinationEntity(123U);
    msg.value = 0.025693545971440024;

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
    msg.setTimeStamp(0.7006284859301839);
    msg.setSource(43772U);
    msg.setSourceEntity(202U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7395415388763238;

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
    msg.setTimeStamp(0.7524510281710644);
    msg.setSource(6712U);
    msg.setSourceEntity(24U);
    msg.setDestination(16043U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5335009382550024;

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
    msg.setTimeStamp(0.303939235189987);
    msg.setSource(63440U);
    msg.setSourceEntity(55U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(44U);
    msg.value = 0.25480489978285226;

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
    msg.setTimeStamp(0.22152075447106256);
    msg.setSource(32439U);
    msg.setSourceEntity(96U);
    msg.setDestination(58838U);
    msg.setDestinationEntity(202U);
    msg.value = 0.2725031275544949;

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
    msg.setTimeStamp(0.35635870435568184);
    msg.setSource(38786U);
    msg.setSourceEntity(224U);
    msg.setDestination(37160U);
    msg.setDestinationEntity(91U);
    msg.value = 0.6489532136795786;

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
    msg.setTimeStamp(0.9622895231115344);
    msg.setSource(15346U);
    msg.setSourceEntity(84U);
    msg.setDestination(60325U);
    msg.setDestinationEntity(225U);
    msg.value = 0.055276119265916135;

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
    msg.setTimeStamp(0.7977468101545377);
    msg.setSource(58668U);
    msg.setSourceEntity(80U);
    msg.setDestination(24247U);
    msg.setDestinationEntity(158U);
    msg.value = 0.9642616541941982;

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
    msg.setTimeStamp(0.8580104540285205);
    msg.setSource(41373U);
    msg.setSourceEntity(76U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(81U);
    msg.value = 0.3603640155662071;

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
    msg.setTimeStamp(0.6166318396827923);
    msg.setSource(59107U);
    msg.setSourceEntity(21U);
    msg.setDestination(64074U);
    msg.setDestinationEntity(125U);
    msg.value = 0.9146471097981953;

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
    msg.setTimeStamp(0.9094119024870478);
    msg.setSource(28355U);
    msg.setSourceEntity(205U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(16U);
    msg.value = 0.616874441812693;

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
    msg.setTimeStamp(0.158551294594944);
    msg.setSource(52297U);
    msg.setSourceEntity(1U);
    msg.setDestination(42426U);
    msg.setDestinationEntity(70U);
    msg.value = 0.26416347560607134;

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
    msg.setTimeStamp(0.6825246666382248);
    msg.setSource(37238U);
    msg.setSourceEntity(224U);
    msg.setDestination(64996U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5921699632024666;

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
    msg.setTimeStamp(0.42316154336572975);
    msg.setSource(49089U);
    msg.setSourceEntity(60U);
    msg.setDestination(57261U);
    msg.setDestinationEntity(120U);
    msg.direction = 0.30807875853581;
    msg.speed = 0.8001386480120154;
    msg.turbulence = 0.8440917658359561;

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
    msg.setTimeStamp(0.8551719347582347);
    msg.setSource(34942U);
    msg.setSourceEntity(224U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(118U);
    msg.direction = 0.13680067281474373;
    msg.speed = 0.6340550901256743;
    msg.turbulence = 0.032221196918626904;

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
    msg.setTimeStamp(0.9627752147921597);
    msg.setSource(62105U);
    msg.setSourceEntity(193U);
    msg.setDestination(4158U);
    msg.setDestinationEntity(104U);
    msg.direction = 0.30762412456198585;
    msg.speed = 0.207765476065776;
    msg.turbulence = 0.24301944736421233;

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
    msg.setTimeStamp(0.403312482169637);
    msg.setSource(21472U);
    msg.setSourceEntity(103U);
    msg.setDestination(10272U);
    msg.setDestinationEntity(252U);
    msg.value = 0.10028569152943345;

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
    msg.setTimeStamp(0.5437359697216634);
    msg.setSource(51272U);
    msg.setSourceEntity(127U);
    msg.setDestination(44401U);
    msg.setDestinationEntity(141U);
    msg.value = 0.06499886667071497;

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
    msg.setTimeStamp(0.41478238822135216);
    msg.setSource(235U);
    msg.setSourceEntity(109U);
    msg.setDestination(35346U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8207753373267668;

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
    msg.setTimeStamp(0.5410529734947217);
    msg.setSource(63132U);
    msg.setSourceEntity(201U);
    msg.setDestination(44024U);
    msg.setDestinationEntity(51U);
    msg.value.assign("EWQVCKNVZREFOOZMZJDRCDKMUAZFUQLSUOIXAOHBKGTJGJCMWYUBYAORDBXGSMUKTNZDBMWLVANJNYEMNWYOEWOMBHPVJJXZPDDCQNTLTTJHSGQQCXQQIAPHFYLVTTXRTWHUFCLKPDQKVBFWYKJANRLJGIHERTGCNHVFIHSIGZHIKDUGPSWDQAFJUOGLFSYFHXACRLKPIVBY");

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
    msg.setTimeStamp(0.38657249551883477);
    msg.setSource(1761U);
    msg.setSourceEntity(190U);
    msg.setDestination(63256U);
    msg.setDestinationEntity(108U);
    msg.value.assign("VEXSEOOIUNIBETYQDBRJWXNPJWVDYFGEAVOLSNAFRAHANSJPHVSQZYTWHCWDMICDNAFLDQXTLDAXXVBKLORSZYAUKYMMAYDBRWQJDHOPCEZKFITRQYCCUGWGZEQFZGRW");

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
    msg.setTimeStamp(0.8662907466600613);
    msg.setSource(57958U);
    msg.setSourceEntity(191U);
    msg.setDestination(673U);
    msg.setDestinationEntity(232U);
    msg.value.assign("ULDFPQNTCMWCIMIDSJUURNUNHAHQSKBMBTEVKOGUNMGAOLZZLLKNWMWYVBTBOZHJGUAEKXNFHOGVEZKHDMHQCVRUQEGTLWSEFOBKQXZSTMELEWXICOSWASPZYJSJQXCRJQDQKFHFANYGVMPBLNFBFEIWFRGJOIAPYKPMGTRLGSTXPGPSTUJYWIYEFXCDIVQRRAIJIAPZOLOBNXWZUXNADDQBJPFOHKXHUTYTHMRVJVVCVRSCDPRKZL");

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
    msg.setTimeStamp(0.289956097350769);
    msg.setSource(57649U);
    msg.setSourceEntity(219U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(120U);
    const signed char tmp_msg_0[] = {31, -29, -128, 15, -43, -90, 119, 24, 60, -57, 85, -108, 124, 51, -47, -119, -23, 26, 30, 46, 53, 72, -15, -46, -86, -21, 123, 30, 126, -53, 125, -67, -55, 39, -66, -26, 116, -18, 47, -4, 54, -4, 47, -84, 71, -119, 21, -69, -89, 118, 19, 24, -80, 113, -10, 98, 41, 63, -124, 92, -90, 25, -76, 20, 64, 114, -5, 101, -41, -44, -18, 105, -88, -82, -35, -114, 110, 19, -73, -77, 10, -49, -20, -15, 78, -60, 22, -37, -125, 120, 5, 46, 21, -73, 6, -103, -91, 75, 99, 102, 73, 64, -61, -95, -31, -119, -42, 68, 31, -93, -86, 120, 102, -18, -65, -68, 52, -36, 45, -31, -115, 34, -82, 64, 13, -42, 31, -22, -2, -61, 53, -47, 64, -108, 27, 31, 79, -26, -8, 55, -1, -54, -128, -110, 63, -53, -40, -57, 45, -98, -100, -29, 1, -53, -40, 86, 110, -56, -68, -89, 92, -121, -114, 5, -44, 102, -77, 89, 65, 2, -58, -100, 107, 117, -113, 102, -27, -126, -70, 72, 39, -60, -29, 116, -27, -104, -19, -59, -31, -46, 14, 69, 59, -74, 36, -84, -55, 7, 33, -63, 67, -84, 98, -83, -71, -41, -40, -50, -4, 109, 17, -55, 46, -100, -92, 113, -58, 91, -82, -53};
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
    msg.setTimeStamp(0.2720190133695748);
    msg.setSource(11844U);
    msg.setSourceEntity(130U);
    msg.setDestination(18772U);
    msg.setDestinationEntity(215U);
    const signed char tmp_msg_0[] = {-73, -89, -120, -58, 4, 111, 27, -33, 27, 110, -50, 20, -93, -67, 8, 88, 8, 49, 103, -88, 106, 11, 22, -101, -110, -53, 64, 7, 99, 84, 20, 9, -99, -18, 122, -68, 30, -35, 112, 87, 82, -27, 14, -90, -91, 121, 7, -106, 38, -79, 14, -89, 30, 90, 61, 40, -8, 74, -50, -104, -39, -74, 103, -109, -8, -75, -115, 3, 35, 107, 22, -53, -25, -100, 105, 108, 75, -114, -103, -75, 69, 101, 4, 117, -113, -68, 49, 26, -44, 29, 85, -13, -88, 79, 102, 53, 16, -95, -37, 101, -119, 83, 113, -101, -83, 119, 93, -2, -20, -112, -114, -57, -65, 102, 27, 39, -93, -127, 125, 118, 88, 110, -34, 62, -54, -32, 23, -104, 45, 14, -37, 103, 22, -57, 64, 0, -79, -118, -67, -88, 7, 5, 105, -93, 18, -91, 53, -77, 73, 57, -36, -33, 38, -88, 88, -126, 19, -98, 36, -52, -120, 104, 12, 39, -105, 59, -42, 26, 87, 69, -112, 38, 21, -6, -126, -80, 118, -106, -113, -6, 9, 11, 89, 23, 68, -127, -95, 85, 119, -5, -84, 71, 70, -115, 43, -86, 121, 122, 85, -44, -25, -31, 105, -31, 80, -10, -83, 88, -92, 59, -106, 26, -69, -4, 108, 88, 125, 81, 98, -25, -2, -2, -81, -52, -22, 101, 103, 57, -76, 18, -84, -8, 9, 26, -81, 2, 101};
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
    msg.setTimeStamp(0.18483486011917427);
    msg.setSource(13736U);
    msg.setSourceEntity(246U);
    msg.setDestination(46050U);
    msg.setDestinationEntity(24U);
    const signed char tmp_msg_0[] = {-103, -3, 83, 112, 41, -117, -43, 14, -39, 118, -19, -113, 74, -7, 102, 104, 13, -113, 27, 32, 75, 56, 50, -94, 88, 33, 85, 102, -100, -118, -91, 92, 1, -20, 106, 105, 30, -104, -23, -70, 80, 94, 92, 19, 47, 101, 52, 80, 97, 110, 76, -46, 115, 105, -86, 111, -79, -64, -39, -43, 109, 72, -45, 25, -61, 27, -2, -71, -97, 65, -81, 72, 75, 100, 40, -13, 102, 59, 46, 53, 122, 95, 105, 75, -103, -6, -34, -17, -51, 52, 104, 29, -9, 114, -101, -122, 77, -75, -30, -97, 111, -96, 116, 14, -37, -120, 121, -31, -76, 118, -66, -20, -93, 14, -70, -36, -65, 113, 106, -98, 104, -29, -41, 92, 86, -99, -99, -28, 46, 30, -25, -88, -94, 12, 73, -107, 61, -39, 65, 15, 52, -95, -99, 84, 37, -69, -30, -15, -7, -102, -117, 98, 110, -99, -21, 111, 49, -61, 24, -57, 30, -109, -111, 4, -93, 80, 86, -110, -64, 25};
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
    msg.setTimeStamp(0.18466675873322647);
    msg.setSource(9082U);
    msg.setSourceEntity(121U);
    msg.setDestination(64660U);
    msg.setDestinationEntity(52U);
    msg.value = 0.09466057443120912;

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
    msg.setTimeStamp(0.6067028949451732);
    msg.setSource(35486U);
    msg.setSourceEntity(244U);
    msg.setDestination(39066U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8848886507436107;

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
    msg.setTimeStamp(0.06843220845099651);
    msg.setSource(46434U);
    msg.setSourceEntity(214U);
    msg.setDestination(12756U);
    msg.setDestinationEntity(227U);
    msg.value = 0.6719041124885949;

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
    msg.setTimeStamp(0.9512000264111543);
    msg.setSource(9037U);
    msg.setSourceEntity(57U);
    msg.setDestination(23459U);
    msg.setDestinationEntity(7U);
    msg.type = 252U;
    msg.frequency = 2383366948U;
    msg.min_range = 18394U;
    msg.max_range = 23416U;
    msg.bits_per_point = 35U;
    msg.scale_factor = 0.6233016608537458;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.11091625054909526;
    tmp_msg_0.beam_height = 0.15055454358744813;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {24, 101, 39, -49, 115, 43, -107, 120, 84, -11, -31, -93, -41, -58, 5, -88, 37, -107, -23, 117, -50, -80, -31, 118, 8, -47, 86, -111, -5, 21, 63, -46, 15, 33, 33, 34, -2, 43, -98, 105, 43, 74, -27, -128, -21, -40, 54, 8, -100, 102, 82, -8, -8, -18, -44, 87, 125, -71, -87, -98, 40, 57, 0, 0, -126, -42, 77, -59, 99, 120, 94, -6, 120, -35, 88, 125, 110, -34, 86, -112, -98, 7, -10, -10, -105, 62, -55, -126, 117, -97, -18, 87, -101, -28, 89, 76, 14, -2, -114, 47, 46, 11, -76, 34, 47, -13, -74, -110, 109, 113, 0, -62, 53, 63, -18, -95, -54, -71, 122, 101, -72, -128};
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
    msg.setTimeStamp(0.7727458612203543);
    msg.setSource(27075U);
    msg.setSourceEntity(243U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(210U);
    msg.type = 98U;
    msg.frequency = 2291186075U;
    msg.min_range = 58746U;
    msg.max_range = 59235U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.5725605486537665;
    const signed char tmp_msg_0[] = {-1, 49, 60, 35, 29, -31, -60, -91, -65, -111, 102, 49, -31, 98, -62, 50, -28, 63, 2, 48, -116, -81, -109, -106, 114, 12, 79, -48, -33, 38, -46, 96, 93, -46, 51, 28, -53, -126, -46, -84, 97, 2, -8, 23, -17, -58, 89, 124, 51, 10, -36, -71, 112, 99, -83, -33, 12, 14, -99, -63, 90, -104, 1, -103, -112, 95, -47, 14, -4, -25, -67, -8, -22, 74, -26, -97, -28, 74, -48, -116, -106, -46, -101, 112, -78, 74, 15, -72, 114, 18, 90, -28, -63, -12, -38, 91, -45, 56, -98, -50, -40, -24, -12, -59, 93, -118, 10, 73, -80, -106, 114, -55, 65, 65, 8, 110, -10, -53, 44, -76, -94, -43, 60, -118, 110, -69, 49, -6, -71, 38, -16, 51, -3, 94, 52, 106, 34, -21, -86, 122, -46, 85, 12, 97, 72, 108, 105, 18, -125, 117, 117, -50, 1, -20, 33, -75, -27, -61, 99, -49, 5, -70, 83, -87, 85, -100, -50, -44, 62, 83, -11, 92, 73, -122, -13, 126, -98, -2, 57, -121, 72, -27, 84, 21, 1, -125, -33, -125, -78, 60, 3, -32, 42, 22, -118, -115, -125, 69, 36, -64, 3, -15, 87, -114, -51, -44, 24, -111, 120, -24, -100, 18, 48, 6, 99, -57, -73, -112, 35, -40, 98, 33, -4, -75, -105, 66, -58, 69, 13, 108, 50, -50, 82, -102, 34, -104, -60, 65, -35, 21, 66, -63, -122, -101, -30, 4, 118, -46, -34, 96, -37, -6};
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
    msg.setTimeStamp(0.19549176677842128);
    msg.setSource(4436U);
    msg.setSourceEntity(81U);
    msg.setDestination(33116U);
    msg.setDestinationEntity(127U);
    msg.type = 98U;
    msg.frequency = 1895838536U;
    msg.min_range = 17667U;
    msg.max_range = 59327U;
    msg.bits_per_point = 250U;
    msg.scale_factor = 0.4383386325950548;
    const signed char tmp_msg_0[] = {116, 103, 124, -6, -12, -20, -80, 5, 50, 10, -51, 102, -41, 3, -5, -13, -1, -74, 126, 80, 9, 94, -100, -23, -12, 71, 1, -94, -38, -7, -42, -35, -26, 53, -34, 38, -36, -30, 36, 71, 26, -89, -118, 5, 3, 28, -117, 55, 92, 89, 49, -128, 122, 81, -77, 102, -28, 51, 104, 115, -68, 110, 73, 93, 46, 20, 62, 44, -104, 97, -113, 95, 126, 50, -89, 86, -12, -120, 117, 108, -73, -22, -11, -83, -102, -10};
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
    msg.setTimeStamp(0.8682657020638626);
    msg.setSource(52809U);
    msg.setSourceEntity(77U);
    msg.setDestination(24144U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.04989160961835748);
    msg.setSource(40667U);
    msg.setSourceEntity(91U);
    msg.setDestination(6145U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.641754174369184);
    msg.setSource(22226U);
    msg.setSourceEntity(186U);
    msg.setDestination(35948U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.2810431406613305);
    msg.setSource(23538U);
    msg.setSourceEntity(140U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(248U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.9036622597507006);
    msg.setSource(30602U);
    msg.setSourceEntity(1U);
    msg.setDestination(803U);
    msg.setDestinationEntity(57U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.26394792149082);
    msg.setSource(51241U);
    msg.setSourceEntity(183U);
    msg.setDestination(60307U);
    msg.setDestinationEntity(173U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.7358299017259917);
    msg.setSource(18733U);
    msg.setSourceEntity(116U);
    msg.setDestination(28124U);
    msg.setDestinationEntity(12U);
    msg.value = 0.8858981193720632;
    msg.confidence = 0.8143019947585435;
    msg.opmodes.assign("XOSHNHZTQKETWBJDKJWU");

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
    msg.setTimeStamp(0.44421108432670975);
    msg.setSource(62472U);
    msg.setSourceEntity(54U);
    msg.setDestination(56090U);
    msg.setDestinationEntity(173U);
    msg.value = 0.18074189244068384;
    msg.confidence = 0.8686853350331178;
    msg.opmodes.assign("ZCTCNETHGFVVAEVOOXPLNOADIBIXOCMUSTAIRWXLEYJVMKYZXRYNDPGVQLRGXWDNWELAZKQZSLEGZUHRTVWSDDURVIZPJFWQJPZLWNBJFSCGOIDWEKKPLJRGLGZJFOPFFXYKYNIFMODIHFFYTICBDAAQSHWKROBJNUTPMMSUBNKNSKUHTFYBSXXEPQBAEVMDRVCUXQQUOADX");

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
    msg.setTimeStamp(0.8464983605834001);
    msg.setSource(53708U);
    msg.setSourceEntity(113U);
    msg.setDestination(15263U);
    msg.setDestinationEntity(73U);
    msg.value = 0.6630195334294275;
    msg.confidence = 0.9894318056595652;
    msg.opmodes.assign("UWCSXVCIGRDAEFDIBDGJFFHABIZYEMUMHUHADEFENELZMNSJMBVOXRGWYSWCRPFQLPJUXJWOCHZKFVXXWWRSKXHQZKDODBXLAWYQGLSUMTKIUHVQAOQUSNHFRNWVUNOLCLKCPQCMXAQUEJAEKTJNCOTAJEOZRLZGICTUJOYPOYTYZKTQVQ");

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
    msg.setTimeStamp(0.9349374321092291);
    msg.setSource(51953U);
    msg.setSourceEntity(185U);
    msg.setDestination(17278U);
    msg.setDestinationEntity(85U);
    msg.itow = 4124898169U;
    msg.lat = 0.7890811003367347;
    msg.lon = 0.7274761186868356;
    msg.height_ell = 0.14085693320480452;
    msg.height_sea = 0.3797093278940775;
    msg.hacc = 0.12452491111230746;
    msg.vacc = 0.5500341864428551;
    msg.vel_n = 0.9597116378666127;
    msg.vel_e = 0.9053915397020189;
    msg.vel_d = 0.6921847867566953;
    msg.speed = 0.4297959131265875;
    msg.gspeed = 0.1173035683910496;
    msg.heading = 0.2255981376402283;
    msg.sacc = 0.33372349753796526;
    msg.cacc = 0.5051696850499465;

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
    msg.setTimeStamp(0.9821970479859712);
    msg.setSource(20193U);
    msg.setSourceEntity(186U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(203U);
    msg.itow = 3127554004U;
    msg.lat = 0.5006222358393099;
    msg.lon = 0.4116577538308065;
    msg.height_ell = 0.11320618335830945;
    msg.height_sea = 0.9207565593741448;
    msg.hacc = 0.3850696969273312;
    msg.vacc = 0.8348043145687528;
    msg.vel_n = 0.2114304431265439;
    msg.vel_e = 0.442644811989931;
    msg.vel_d = 0.8343396146575376;
    msg.speed = 0.20453056825541482;
    msg.gspeed = 0.15423117750313164;
    msg.heading = 0.03111131862520966;
    msg.sacc = 0.20871196233141387;
    msg.cacc = 0.460221226224923;

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
    msg.setTimeStamp(0.05230479295627222);
    msg.setSource(50517U);
    msg.setSourceEntity(91U);
    msg.setDestination(8955U);
    msg.setDestinationEntity(34U);
    msg.itow = 83326204U;
    msg.lat = 0.043813504258305325;
    msg.lon = 0.996102097471173;
    msg.height_ell = 0.2034899510822631;
    msg.height_sea = 0.5269120159709;
    msg.hacc = 0.8468924973063585;
    msg.vacc = 0.10102890106640139;
    msg.vel_n = 0.06628770629192071;
    msg.vel_e = 0.1765931434743655;
    msg.vel_d = 0.7341465814745811;
    msg.speed = 0.3414284589602703;
    msg.gspeed = 0.22665602224827852;
    msg.heading = 0.6661179352104363;
    msg.sacc = 0.15956756825965834;
    msg.cacc = 0.6044832926271427;

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
    msg.setTimeStamp(0.3088949710175741);
    msg.setSource(18290U);
    msg.setSourceEntity(52U);
    msg.setDestination(15182U);
    msg.setDestinationEntity(62U);
    msg.id = 135U;
    msg.value = 0.9535432978926557;

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
    msg.setTimeStamp(0.8526285378342168);
    msg.setSource(35093U);
    msg.setSourceEntity(176U);
    msg.setDestination(42691U);
    msg.setDestinationEntity(106U);
    msg.id = 111U;
    msg.value = 0.892803176009863;

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
    msg.setTimeStamp(0.6916579805227422);
    msg.setSource(16976U);
    msg.setSourceEntity(195U);
    msg.setDestination(38838U);
    msg.setDestinationEntity(237U);
    msg.id = 79U;
    msg.value = 0.22493365031719925;

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
    msg.setTimeStamp(0.14327733073597515);
    msg.setSource(42240U);
    msg.setSourceEntity(109U);
    msg.setDestination(57329U);
    msg.setDestinationEntity(38U);
    msg.x = 0.010863826661065445;
    msg.y = 0.18741832854459883;
    msg.z = 0.9187952157678311;
    msg.phi = 0.6898718756572705;
    msg.theta = 0.7211656223064928;
    msg.psi = 0.2865173671881148;

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
    msg.setTimeStamp(0.6388944445717775);
    msg.setSource(6526U);
    msg.setSourceEntity(35U);
    msg.setDestination(63527U);
    msg.setDestinationEntity(182U);
    msg.x = 0.9024219851091813;
    msg.y = 0.7325655041908283;
    msg.z = 0.6451407355000841;
    msg.phi = 0.1480855061356099;
    msg.theta = 0.05160633457658814;
    msg.psi = 0.3598847414493327;

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
    msg.setTimeStamp(0.32669331695275805);
    msg.setSource(7120U);
    msg.setSourceEntity(213U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(141U);
    msg.x = 0.6108862966335831;
    msg.y = 0.6156486418446127;
    msg.z = 0.40411677774283594;
    msg.phi = 0.39055138935738787;
    msg.theta = 0.7179692931740542;
    msg.psi = 0.9195406784301877;

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
    msg.setTimeStamp(0.6820951530477142);
    msg.setSource(59832U);
    msg.setSourceEntity(168U);
    msg.setDestination(9215U);
    msg.setDestinationEntity(132U);
    msg.beam_width = 0.9351253517140464;
    msg.beam_height = 0.571436742450493;

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
    msg.setTimeStamp(0.43949163769984434);
    msg.setSource(3806U);
    msg.setSourceEntity(183U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(120U);
    msg.beam_width = 0.019523810961243893;
    msg.beam_height = 0.4919344040335465;

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
    msg.setTimeStamp(0.6507761787854727);
    msg.setSource(7186U);
    msg.setSourceEntity(180U);
    msg.setDestination(29786U);
    msg.setDestinationEntity(217U);
    msg.beam_width = 0.9090644084764677;
    msg.beam_height = 0.7601022616894204;

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
    msg.setTimeStamp(0.7313250871529918);
    msg.setSource(13077U);
    msg.setSourceEntity(126U);
    msg.setDestination(23087U);
    msg.setDestinationEntity(242U);
    msg.sane = 164U;

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
    msg.setTimeStamp(0.14103510440458444);
    msg.setSource(1348U);
    msg.setSourceEntity(44U);
    msg.setDestination(34492U);
    msg.setDestinationEntity(40U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.8918914736699873);
    msg.setSource(26288U);
    msg.setSourceEntity(177U);
    msg.setDestination(44300U);
    msg.setDestinationEntity(208U);
    msg.sane = 0U;

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
    msg.setTimeStamp(0.6023211773957012);
    msg.setSource(57643U);
    msg.setSourceEntity(159U);
    msg.setDestination(20072U);
    msg.setDestinationEntity(135U);
    msg.value = 0.970266786928308;

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
    msg.setTimeStamp(0.2978035222740427);
    msg.setSource(42872U);
    msg.setSourceEntity(193U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(205U);
    msg.value = 0.07191364872914452;

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
    msg.setTimeStamp(0.1676557410678452);
    msg.setSource(45248U);
    msg.setSourceEntity(146U);
    msg.setDestination(28470U);
    msg.setDestinationEntity(22U);
    msg.value = 0.8420653388515704;

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
    msg.setTimeStamp(0.6412459346160161);
    msg.setSource(32997U);
    msg.setSourceEntity(110U);
    msg.setDestination(2848U);
    msg.setDestinationEntity(218U);
    msg.value = 0.49247350019385827;

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
    msg.setTimeStamp(0.7184888405650728);
    msg.setSource(10070U);
    msg.setSourceEntity(48U);
    msg.setDestination(60577U);
    msg.setDestinationEntity(177U);
    msg.value = 0.31616583834336676;

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
    msg.setTimeStamp(0.5270216236692777);
    msg.setSource(27898U);
    msg.setSourceEntity(117U);
    msg.setDestination(51459U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5932214139152958;

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
    msg.setTimeStamp(0.2791135332967788);
    msg.setSource(55274U);
    msg.setSourceEntity(72U);
    msg.setDestination(16064U);
    msg.setDestinationEntity(244U);
    msg.value = 0.09539343741582484;

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
    msg.setTimeStamp(0.3056489911117154);
    msg.setSource(977U);
    msg.setSourceEntity(78U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5747836743378415;

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
    msg.setTimeStamp(0.945730546210454);
    msg.setSource(21917U);
    msg.setSourceEntity(29U);
    msg.setDestination(47943U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3982351016942578;

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
    msg.setTimeStamp(0.8560274021691205);
    msg.setSource(50868U);
    msg.setSourceEntity(104U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7407048483431474;

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
    msg.setTimeStamp(0.19005376304680832);
    msg.setSource(19948U);
    msg.setSourceEntity(206U);
    msg.setDestination(57411U);
    msg.setDestinationEntity(15U);
    msg.value = 0.11983069370467636;

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
    msg.setTimeStamp(0.14502973947365527);
    msg.setSource(1658U);
    msg.setSourceEntity(195U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(40U);
    msg.value = 0.04863148302475451;

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
    msg.setTimeStamp(0.06213787039829333);
    msg.setSource(10697U);
    msg.setSourceEntity(238U);
    msg.setDestination(20226U);
    msg.setDestinationEntity(71U);
    msg.value = 0.7372571379994952;

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
    msg.setTimeStamp(0.34352682935556444);
    msg.setSource(26015U);
    msg.setSourceEntity(101U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8451751583916962;

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
    msg.setTimeStamp(0.8629125742501667);
    msg.setSource(34845U);
    msg.setSourceEntity(249U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9598600016527672;

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
    msg.setTimeStamp(0.9111411427715657);
    msg.setSource(44333U);
    msg.setSourceEntity(117U);
    msg.setDestination(52013U);
    msg.setDestinationEntity(204U);
    msg.value = 0.41236821340728713;

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
    msg.setTimeStamp(0.009736415422280431);
    msg.setSource(38218U);
    msg.setSourceEntity(211U);
    msg.setDestination(28151U);
    msg.setDestinationEntity(135U);
    msg.value = 0.8471966268567291;

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
    msg.setTimeStamp(0.9728222634085093);
    msg.setSource(42668U);
    msg.setSourceEntity(206U);
    msg.setDestination(21149U);
    msg.setDestinationEntity(236U);
    msg.value = 0.005293131975122045;

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
    msg.setTimeStamp(0.7235104648229584);
    msg.setSource(49241U);
    msg.setSourceEntity(42U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(27U);
    msg.value = 0.13821854038371117;

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
    msg.setTimeStamp(0.9949260917736705);
    msg.setSource(64915U);
    msg.setSourceEntity(65U);
    msg.setDestination(10256U);
    msg.setDestinationEntity(40U);
    msg.value = 0.04658436450074954;

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
    msg.setTimeStamp(0.7720429312795556);
    msg.setSource(45425U);
    msg.setSourceEntity(222U);
    msg.setDestination(62266U);
    msg.setDestinationEntity(187U);
    msg.value = 0.5305387253287294;

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
    msg.setTimeStamp(0.24620705834355427);
    msg.setSource(32491U);
    msg.setSourceEntity(76U);
    msg.setDestination(54553U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3458127454053048;

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
    msg.setTimeStamp(0.7003414561506696);
    msg.setSource(2380U);
    msg.setSourceEntity(127U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(118U);
    msg.value = 0.4461186600735151;

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
    msg.setTimeStamp(0.0011968007628270216);
    msg.setSource(34706U);
    msg.setSourceEntity(14U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(49U);
    msg.value = 0.7992621870153679;

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
    msg.setTimeStamp(0.6999399733068364);
    msg.setSource(61506U);
    msg.setSourceEntity(205U);
    msg.setDestination(23575U);
    msg.setDestinationEntity(36U);
    msg.validity = 5689U;
    msg.type = 250U;
    msg.tow = 4130794609U;
    msg.base_lat = 0.7833031252091671;
    msg.base_lon = 0.26837551638737644;
    msg.base_height = 0.7478571579301556;
    msg.n = 0.6301251440454637;
    msg.e = 0.9661536821802645;
    msg.d = 0.4962488368338581;
    msg.v_n = 0.7370765744907724;
    msg.v_e = 0.4697735344784214;
    msg.v_d = 0.7947603610911839;
    msg.satellites = 40U;
    msg.iar_hyp = 19646U;
    msg.iar_ratio = 0.7715541270564598;

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
    msg.setTimeStamp(0.37539647196462167);
    msg.setSource(838U);
    msg.setSourceEntity(238U);
    msg.setDestination(25064U);
    msg.setDestinationEntity(46U);
    msg.validity = 2779U;
    msg.type = 162U;
    msg.tow = 1623073342U;
    msg.base_lat = 0.3826971609729112;
    msg.base_lon = 0.42006843608380207;
    msg.base_height = 0.8804481007568542;
    msg.n = 0.3968989217550952;
    msg.e = 0.4922985845976653;
    msg.d = 0.5351426057425741;
    msg.v_n = 0.8272430400602659;
    msg.v_e = 0.13195793052211757;
    msg.v_d = 0.6525891788497968;
    msg.satellites = 106U;
    msg.iar_hyp = 21660U;
    msg.iar_ratio = 0.05275025654823051;

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
    msg.setTimeStamp(0.30241304000965485);
    msg.setSource(9224U);
    msg.setSourceEntity(237U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(43U);
    msg.validity = 2466U;
    msg.type = 129U;
    msg.tow = 455734304U;
    msg.base_lat = 0.3335095111881795;
    msg.base_lon = 0.6037910671139981;
    msg.base_height = 0.9757489864003627;
    msg.n = 0.9927877869032188;
    msg.e = 0.1465745387924049;
    msg.d = 0.9529090987289927;
    msg.v_n = 0.27374615159507854;
    msg.v_e = 0.5968737231799802;
    msg.v_d = 0.9188688497840656;
    msg.satellites = 116U;
    msg.iar_hyp = 27921U;
    msg.iar_ratio = 0.6854081035001099;

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
    msg.setTimeStamp(0.9367232864548652);
    msg.setSource(38020U);
    msg.setSourceEntity(233U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(168U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.28188988684576877;
    tmp_msg_0.lon = 0.9808016246819432;
    tmp_msg_0.height = 0.8103992829880369;
    tmp_msg_0.x = 0.12316274260802951;
    tmp_msg_0.y = 0.5847637851308969;
    tmp_msg_0.z = 0.7859353675929;
    tmp_msg_0.phi = 0.6607532089208797;
    tmp_msg_0.theta = 0.4886659687810271;
    tmp_msg_0.psi = 0.42401312429759064;
    tmp_msg_0.u = 0.6542681387187337;
    tmp_msg_0.v = 0.43848821735687704;
    tmp_msg_0.w = 0.7591376450134016;
    tmp_msg_0.vx = 0.9410874627768927;
    tmp_msg_0.vy = 0.9022870767783007;
    tmp_msg_0.vz = 0.5561597276224681;
    tmp_msg_0.p = 0.17379210704414572;
    tmp_msg_0.q = 0.051790691060383365;
    tmp_msg_0.r = 0.14117371187114425;
    tmp_msg_0.depth = 0.5535732436727286;
    tmp_msg_0.alt = 0.3210724961727601;
    msg.state.set(tmp_msg_0);
    msg.type = 41U;

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
    msg.setTimeStamp(0.27736689674025994);
    msg.setSource(56418U);
    msg.setSourceEntity(143U);
    msg.setDestination(59601U);
    msg.setDestinationEntity(203U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.27735221008328126;
    tmp_msg_0.lon = 0.3107852604469964;
    tmp_msg_0.height = 0.526150931313179;
    tmp_msg_0.x = 0.9082171758084637;
    tmp_msg_0.y = 0.2818349363293159;
    tmp_msg_0.z = 0.6674920596308204;
    tmp_msg_0.phi = 0.05512873643747651;
    tmp_msg_0.theta = 0.04439634053787622;
    tmp_msg_0.psi = 0.6760877095698239;
    tmp_msg_0.u = 0.9395041894623607;
    tmp_msg_0.v = 0.41922394716324274;
    tmp_msg_0.w = 0.1812828918311329;
    tmp_msg_0.vx = 0.9638515896393359;
    tmp_msg_0.vy = 0.405723990816236;
    tmp_msg_0.vz = 0.26223830228559253;
    tmp_msg_0.p = 0.9616781967462911;
    tmp_msg_0.q = 0.6115966654289529;
    tmp_msg_0.r = 0.03952066744150862;
    tmp_msg_0.depth = 0.276200157129012;
    tmp_msg_0.alt = 0.9537475399124973;
    msg.state.set(tmp_msg_0);
    msg.type = 183U;

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
    msg.setTimeStamp(0.12982424863385544);
    msg.setSource(21995U);
    msg.setSourceEntity(185U);
    msg.setDestination(65025U);
    msg.setDestinationEntity(39U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.17823641801284873;
    tmp_msg_0.lon = 0.9510118423332545;
    tmp_msg_0.height = 0.7752683382317237;
    tmp_msg_0.x = 0.9197392899050046;
    tmp_msg_0.y = 0.9397349423804894;
    tmp_msg_0.z = 0.794019969441307;
    tmp_msg_0.phi = 0.1381176730037943;
    tmp_msg_0.theta = 0.42507119469243426;
    tmp_msg_0.psi = 0.2424190643056513;
    tmp_msg_0.u = 0.8177654336883011;
    tmp_msg_0.v = 0.9300246266890099;
    tmp_msg_0.w = 0.06854072678249801;
    tmp_msg_0.vx = 0.817756592581244;
    tmp_msg_0.vy = 0.4675670657090293;
    tmp_msg_0.vz = 0.21104905455386447;
    tmp_msg_0.p = 0.4087713018549327;
    tmp_msg_0.q = 0.5932964653340466;
    tmp_msg_0.r = 0.8963511697386639;
    tmp_msg_0.depth = 0.4305384449602552;
    tmp_msg_0.alt = 0.4504572595020795;
    msg.state.set(tmp_msg_0);
    msg.type = 190U;

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
    msg.setTimeStamp(0.2794608237984507);
    msg.setSource(31795U);
    msg.setSourceEntity(172U);
    msg.setDestination(60556U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5764772119811582;

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
    msg.setTimeStamp(0.4491497709292802);
    msg.setSource(36331U);
    msg.setSourceEntity(66U);
    msg.setDestination(50104U);
    msg.setDestinationEntity(221U);
    msg.value = 0.42910510988575357;

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
    msg.setTimeStamp(0.9240528739642975);
    msg.setSource(8778U);
    msg.setSourceEntity(240U);
    msg.setDestination(28756U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7879678504716467;

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
    msg.setTimeStamp(0.5675271767609542);
    msg.setSource(45620U);
    msg.setSourceEntity(252U);
    msg.setDestination(8348U);
    msg.setDestinationEntity(246U);
    msg.value = 0.9374876754939985;

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
    msg.setTimeStamp(0.134320756977389);
    msg.setSource(47409U);
    msg.setSourceEntity(74U);
    msg.setDestination(11290U);
    msg.setDestinationEntity(199U);
    msg.value = 0.24649049721097116;

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
    msg.setTimeStamp(0.5066720590353537);
    msg.setSource(46793U);
    msg.setSourceEntity(84U);
    msg.setDestination(50000U);
    msg.setDestinationEntity(220U);
    msg.value = 0.3404306539194609;

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
    msg.setTimeStamp(0.4393129879858284);
    msg.setSource(5308U);
    msg.setSourceEntity(208U);
    msg.setDestination(48463U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2615406118264688;

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
    msg.setTimeStamp(0.4144377531446156);
    msg.setSource(58275U);
    msg.setSourceEntity(230U);
    msg.setDestination(3773U);
    msg.setDestinationEntity(215U);
    msg.value = 0.48665775485290774;

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
    msg.setTimeStamp(0.51723463473129);
    msg.setSource(25832U);
    msg.setSourceEntity(211U);
    msg.setDestination(48352U);
    msg.setDestinationEntity(215U);
    msg.value = 0.6507459627189908;

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
    msg.setTimeStamp(0.7230887624639831);
    msg.setSource(63632U);
    msg.setSourceEntity(106U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(125U);
    msg.value = 0.23276842649249163;

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
    msg.setTimeStamp(0.747104899984131);
    msg.setSource(1805U);
    msg.setSourceEntity(120U);
    msg.setDestination(10834U);
    msg.setDestinationEntity(11U);
    msg.value = 0.08297477668008157;

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
    msg.setTimeStamp(0.5407061270101715);
    msg.setSource(38836U);
    msg.setSourceEntity(74U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(130U);
    msg.value = 0.49557825135144373;

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
    msg.setTimeStamp(0.8769006957062185);
    msg.setSource(13958U);
    msg.setSourceEntity(131U);
    msg.setDestination(54713U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8010430553117421;

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
    msg.setTimeStamp(0.7595461185912498);
    msg.setSource(51086U);
    msg.setSourceEntity(18U);
    msg.setDestination(55923U);
    msg.setDestinationEntity(203U);
    msg.value = 0.13394532883416965;

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
    msg.setTimeStamp(0.24018894625989373);
    msg.setSource(18365U);
    msg.setSourceEntity(131U);
    msg.setDestination(51465U);
    msg.setDestinationEntity(180U);
    msg.value = 0.09373707825048161;

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
    msg.setTimeStamp(0.6398459858986195);
    msg.setSource(992U);
    msg.setSourceEntity(113U);
    msg.setDestination(45768U);
    msg.setDestinationEntity(235U);
    msg.id = 84U;
    msg.zoom = 181U;
    msg.action = 237U;

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
    msg.setTimeStamp(0.33273827010772894);
    msg.setSource(56755U);
    msg.setSourceEntity(170U);
    msg.setDestination(32932U);
    msg.setDestinationEntity(32U);
    msg.id = 139U;
    msg.zoom = 251U;
    msg.action = 125U;

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
    msg.setTimeStamp(0.9214477096720739);
    msg.setSource(35806U);
    msg.setSourceEntity(110U);
    msg.setDestination(29041U);
    msg.setDestinationEntity(93U);
    msg.id = 250U;
    msg.zoom = 155U;
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
    msg.setTimeStamp(0.353472356167564);
    msg.setSource(33254U);
    msg.setSourceEntity(32U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(203U);
    msg.id = 141U;
    msg.value = 0.8195707636266191;

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
    msg.setTimeStamp(0.3258960617325293);
    msg.setSource(51151U);
    msg.setSourceEntity(95U);
    msg.setDestination(6260U);
    msg.setDestinationEntity(130U);
    msg.id = 173U;
    msg.value = 0.8157552754490225;

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
    msg.setTimeStamp(0.9346764060392797);
    msg.setSource(33563U);
    msg.setSourceEntity(192U);
    msg.setDestination(15130U);
    msg.setDestinationEntity(155U);
    msg.id = 163U;
    msg.value = 0.32130171428987975;

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
    msg.setTimeStamp(0.2569297589601246);
    msg.setSource(24431U);
    msg.setSourceEntity(87U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(90U);
    msg.id = 171U;
    msg.value = 0.9118725513850865;

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
    msg.setTimeStamp(0.03547240368290894);
    msg.setSource(58763U);
    msg.setSourceEntity(169U);
    msg.setDestination(16637U);
    msg.setDestinationEntity(3U);
    msg.id = 76U;
    msg.value = 0.22435832948013346;

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
    msg.setTimeStamp(0.4859574612482065);
    msg.setSource(8665U);
    msg.setSourceEntity(85U);
    msg.setDestination(19980U);
    msg.setDestinationEntity(82U);
    msg.id = 155U;
    msg.value = 0.8461797982728754;

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
    msg.setTimeStamp(0.3740447485467684);
    msg.setSource(52376U);
    msg.setSourceEntity(129U);
    msg.setDestination(12933U);
    msg.setDestinationEntity(168U);
    msg.id = 253U;
    msg.angle = 0.10846737944650375;

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
    msg.setTimeStamp(0.06124651949927695);
    msg.setSource(35980U);
    msg.setSourceEntity(127U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(232U);
    msg.id = 138U;
    msg.angle = 0.27108032500576873;

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
    msg.setTimeStamp(0.48115376179822567);
    msg.setSource(49013U);
    msg.setSourceEntity(175U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(120U);
    msg.id = 191U;
    msg.angle = 0.9151838520744626;

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
    msg.setTimeStamp(0.2676740642241009);
    msg.setSource(30713U);
    msg.setSourceEntity(245U);
    msg.setDestination(39216U);
    msg.setDestinationEntity(182U);
    msg.op = 229U;
    msg.actions.assign("KXCLZTQHQEPHQCOIMAXRYEENDAVRYNEJOIVKXUTNBQMZEVNUQSVZZCLZXDAUVRGBFLGSYPMMTGXBSKCQDELRKPXKDFIHGYGDTDK");

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
    msg.setTimeStamp(0.6352136302718887);
    msg.setSource(26440U);
    msg.setSourceEntity(73U);
    msg.setDestination(60061U);
    msg.setDestinationEntity(14U);
    msg.op = 9U;
    msg.actions.assign("MBEUGTJCCDOLACIKFUMATPVWPOGOP");

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
    msg.setTimeStamp(0.30138848352225045);
    msg.setSource(508U);
    msg.setSourceEntity(91U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(44U);
    msg.op = 234U;
    msg.actions.assign("LHJLOXRORFHPPSGHCUKAQFPSFRTEERKPCIRMAQSVKPRZLSHSQOBBYVBFZSWDNVNEZDOBSVSYYKBZDGMOHYXHIMIUMSZZVBGCPVYIDQZIKUJDIVAJJWHEHTIAQCEFTNNUUTXF");

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
    msg.setTimeStamp(0.32266753514898616);
    msg.setSource(30407U);
    msg.setSourceEntity(107U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(169U);
    msg.actions.assign("LIXQKIFTERIKJAQRSTODSHFEHZPONCNCKUXJAWJPRVBIYAUPTBEMZOGSYVJCOMEJAZFBDENUEVVVHWKDUGMGYPWEACYRQNLWVPJGRXMLCKPFARDLRKA");

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
    msg.setTimeStamp(0.1494313365394957);
    msg.setSource(62637U);
    msg.setSourceEntity(41U);
    msg.setDestination(6148U);
    msg.setDestinationEntity(236U);
    msg.actions.assign("NIRNZUXORQGCHADYWBWDSEGZILTNRNWZLKVJQQIUHAQGAJWYKMOIWYMRHCLQHZZCNFZJNJCETBMSSBVQPGYOHQWFULMVLDEDP");

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
    msg.setTimeStamp(0.27933760379953254);
    msg.setSource(39321U);
    msg.setSourceEntity(254U);
    msg.setDestination(59638U);
    msg.setDestinationEntity(181U);
    msg.actions.assign("OGBCKFDLRRAFGMECGCIZXECZYCLZMJVDWCTFYVNAJGZVNBSRTYVHUUJJJXBQRHQZKPJOAWTQJWXLZOGPXYWPIK");

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
    msg.setTimeStamp(0.35907389946847323);
    msg.setSource(61684U);
    msg.setSourceEntity(175U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(12U);
    msg.button = 217U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.52665166915448);
    msg.setSource(38340U);
    msg.setSourceEntity(56U);
    msg.setDestination(24838U);
    msg.setDestinationEntity(103U);
    msg.button = 214U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.8782410589716924);
    msg.setSource(48737U);
    msg.setSourceEntity(104U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(79U);
    msg.button = 61U;
    msg.value = 217U;

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
    msg.setTimeStamp(0.2068106916796767);
    msg.setSource(47422U);
    msg.setSourceEntity(56U);
    msg.setDestination(24192U);
    msg.setDestinationEntity(25U);
    msg.op = 190U;
    msg.text.assign("VBALMZKKSBGNCYBGDDHJVYULZVLPFUDGSJOPSKKINYTMELIJQMUFWITREVWTFPRSNUMUKBZWZXQQQOIEBHOHCQPXIVYAMDNROJBAHVIWRNBJFNEQQEEKDONJSACMTCJLLBOGHAZYVBFGHFSDVIBIFPYCPKOWCAHJZFLEGCCATREPWOULRTLQAYAINTWZGDRSZTWSIXGRXASTPKKPMLQMRDXJYYCXSNMXOTRH");

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
    msg.setTimeStamp(0.490230667767396);
    msg.setSource(55350U);
    msg.setSourceEntity(50U);
    msg.setDestination(61730U);
    msg.setDestinationEntity(92U);
    msg.op = 230U;
    msg.text.assign("BPZREUQYYVTPTGRNOYIDVGJOCSWJLETYSAJIEIUTSLRSWFGYHGFCCOFASRQBWHWRHVDAMQORUVZOUVGAJKGCPHLTXDBSUVJEZXHOLFLPQPMQECJTQNJTXFVDRSOXRSNAHMZLCIVGESDQGLGMMPCB");

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
    msg.setTimeStamp(0.24361088169173073);
    msg.setSource(11779U);
    msg.setSourceEntity(77U);
    msg.setDestination(19686U);
    msg.setDestinationEntity(82U);
    msg.op = 13U;
    msg.text.assign("DEJQGGFYTXLBFKHPDWJOJFBOROASHAZYLXUNFZEJDWINIVJKLGZUVPLUCAGLFUDMBFXQIQWIHZBKJGYYJZNDTVUCKWTPXVQPHMVODQCTQFMWNMIPSCMACFXFEJQXSSNNXL");

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
    msg.setTimeStamp(0.7855282627969764);
    msg.setSource(14604U);
    msg.setSourceEntity(101U);
    msg.setDestination(15898U);
    msg.setDestinationEntity(67U);
    msg.op = 57U;
    msg.time_remain = 0.06356724516495427;
    msg.sched_time = 0.01675251667490829;

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
    msg.setTimeStamp(0.0685764144381309);
    msg.setSource(65226U);
    msg.setSourceEntity(170U);
    msg.setDestination(35403U);
    msg.setDestinationEntity(227U);
    msg.op = 9U;
    msg.time_remain = 0.2591434449366158;
    msg.sched_time = 0.8170029425589156;

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
    msg.setTimeStamp(0.4034345616004946);
    msg.setSource(10927U);
    msg.setSourceEntity(244U);
    msg.setDestination(39852U);
    msg.setDestinationEntity(19U);
    msg.op = 153U;
    msg.time_remain = 0.29241359765978014;
    msg.sched_time = 0.9254284409750287;

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
    msg.setTimeStamp(0.09927275127755686);
    msg.setSource(46043U);
    msg.setSourceEntity(140U);
    msg.setDestination(41276U);
    msg.setDestinationEntity(73U);
    msg.name.assign("VNHTKOHTQQHMXFWDGYFQPEHDFWQKJZPZCRLXBOEUTNLCSSHXBPAJEUBUWJIDLWTNOQFBGBIKLFYXAKTJRBXZLPWJGZUVDGEJRYQACWAXULDPTTARISNEHOMMGFEQOISUNVASSKJEURVYISJIUMKSVCMCCXPDCMQUDXNCNDPO");
    msg.op = 181U;
    msg.sched_time = 0.30812397735253894;

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
    msg.setTimeStamp(0.9863477030197968);
    msg.setSource(18187U);
    msg.setSourceEntity(57U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(217U);
    msg.name.assign("NEBTEOJJNRTSSRGGQVORHIRMKDKE");
    msg.op = 179U;
    msg.sched_time = 0.6381389796660386;

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
    msg.setTimeStamp(0.3614906527249858);
    msg.setSource(56471U);
    msg.setSourceEntity(121U);
    msg.setDestination(44892U);
    msg.setDestinationEntity(193U);
    msg.name.assign("KIUUCOFTDRDQDHGKAWCNEDPSYUHAZBKZFJFADULOTNRVLHQTLYJVSOZRWNIKCMNOKKIGXSUHIWEFBTTSHWZVPUZXRHCWCLOSBRMKDVHQKUQXJGTJBCBFLJAIMVBIIQNW");
    msg.op = 150U;
    msg.sched_time = 0.12123285447907495;

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
    msg.setTimeStamp(0.7045856410003024);
    msg.setSource(45612U);
    msg.setSourceEntity(150U);
    msg.setDestination(56473U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.01239482823199134);
    msg.setSource(54317U);
    msg.setSourceEntity(27U);
    msg.setDestination(17592U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.3035577677789203);
    msg.setSource(43718U);
    msg.setSourceEntity(177U);
    msg.setDestination(53161U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.3865856062060632);
    msg.setSource(24402U);
    msg.setSourceEntity(192U);
    msg.setDestination(58298U);
    msg.setDestinationEntity(189U);
    msg.name.assign("NBMDVEQKFRDGIOPNECUKJDNXEKMFHKMIAEPNWYUEGAVIQSLBZVTZQTXLNNAUTPAHSSJRPBOLJOPUTRJHLDNWLZVGYSZH");
    msg.state = 98U;

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
    msg.setTimeStamp(0.9414389024052503);
    msg.setSource(29078U);
    msg.setSourceEntity(217U);
    msg.setDestination(1931U);
    msg.setDestinationEntity(12U);
    msg.name.assign("CWAOEQOPMPSWJJQHFNZRFMZPCEAZIYEZMTLZEBOWMKNUNAHYQTHTFLPLWTIOSGIHIDIXXOGXDKOGTJMQBXEBTESKJRNFJXUBFAFYQASIDVCAJNHBLDIQQWLUYLRGQLDYSCJNGWUAFRSDUIKSAFADODZSRXLPQOIXFLTJUKCEVSFVWNUBYPSEMWMMDMRPZX");
    msg.state = 39U;

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
    msg.setTimeStamp(0.1257165545846517);
    msg.setSource(33926U);
    msg.setSourceEntity(168U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(177U);
    msg.name.assign("AVVYFKBPFMORKFEHOUPFTLBBFVSCZJHTTQGUTGAHTWZAHTHWCWXEUOBAIZZCNPMYLPSDAIKRLNBZVCDSOBNXXAUTMPYEXOWYEWKAYGIBIKHGJIBQSJNNGVHMXGAWHKPEQIEEITCXKBICLRLVVRHPQQMQOS");
    msg.state = 16U;

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
    msg.setTimeStamp(0.7579262647520683);
    msg.setSource(32670U);
    msg.setSourceEntity(31U);
    msg.setDestination(22576U);
    msg.setDestinationEntity(226U);
    msg.name.assign("QONAOEHGMRMAMZEXXBZARVYVTQOEWUPQ");
    msg.value = 145U;

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
    msg.setTimeStamp(0.1855474590673203);
    msg.setSource(36063U);
    msg.setSourceEntity(165U);
    msg.setDestination(34297U);
    msg.setDestinationEntity(16U);
    msg.name.assign("JERSLPOXBJAOWREGEYDDMIXKIGIMKIKFLDYRBGQXGMWCGTFLUXBZFQHALSWXKVGOASFLNNYAJACWPUQFHSTCJNPEDMBLERETWMJOJQHUYHYZLZSYSNVSINTVBBQXTLTBVRQHLIWWHUHVNIMGVXKRKNXVRJCOCANKEPJWLHWZFDYPBQXGYCDMZDDUQNCQCOSXMSPKQHIIZZIAKPKUVTOVW");
    msg.value = 90U;

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
    msg.setTimeStamp(0.7192329887343603);
    msg.setSource(58911U);
    msg.setSourceEntity(223U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(26U);
    msg.name.assign("VSQKGBQAXBWCTMTDMEYRBIHWDRAOTVGSVONRGZGUQBCLUUKAIGJLFYCAIYNXRUGIEPYACWXPDFDCWZUPRYVZIWZPACSOEEESQEXHCVHORJQLNZTLAUHSJPYYZFZOJYBXKDFWKBRKHCVDRIGFNPWTTXUZGIXKMOQWEXLEKFQNIOHJTLMSXMGERZLLVQCJSPSLXNWGQEUPJUFMSDKUTAJNHWMANFMVYOZBDOFHKMDHMVNYFLSPJAOBPNHBCDQTKI");
    msg.value = 23U;

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
    msg.setTimeStamp(0.4998696664989899);
    msg.setSource(9804U);
    msg.setSourceEntity(116U);
    msg.setDestination(12125U);
    msg.setDestinationEntity(247U);
    msg.name.assign("RPJYCDPUEKGLJAFNEIXQYSJWPYJCZFVDDMNQUJPBKLNTOVWZWXJTKRQPWHLCDVUBTQQFXHBINS");

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
    msg.setTimeStamp(0.9880434834762288);
    msg.setSource(53073U);
    msg.setSourceEntity(155U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(182U);
    msg.name.assign("QCABVCLZGUAYSIRRNCQKWJQWDYBIWZIMTXS");

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
    msg.setTimeStamp(0.1550158386353211);
    msg.setSource(13995U);
    msg.setSourceEntity(139U);
    msg.setDestination(4290U);
    msg.setDestinationEntity(125U);
    msg.name.assign("SDJWFKENMJBNPLYDENVOTVMLRZPBAXQ");

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
    msg.setTimeStamp(0.6013319505279686);
    msg.setSource(45323U);
    msg.setSourceEntity(143U);
    msg.setDestination(20661U);
    msg.setDestinationEntity(170U);
    msg.name.assign("LYUUQMXCWTPNMZXKYJOIZYLCAJWXFYDSJVLFMALMVXOXHGCMNSKDJSUPKBHPKTLZCNAVBPXZVWSFEOQHNIJXVREPGECYQDBTHTREHTNMQIBLQEQOGWAUFTFUJDTDRFUWCSYHTQIMPRENROJELIFCDYEXFGFIAPCVCXEOSZNKGDEWKRNGAYBMVVZYBVJIPHOONYDUWBMFWNJMLUZSKADOTRQKJPAZGBGBZQWVXDKSUGOSAHZARCRSUTW");
    msg.value = 190U;

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
    msg.setTimeStamp(0.8655179740189995);
    msg.setSource(54255U);
    msg.setSourceEntity(66U);
    msg.setDestination(41104U);
    msg.setDestinationEntity(51U);
    msg.name.assign("EDNVHINRORTSNQYWBAPFTOOUOXYPNKZDGZZUIBTYRPPEMIBDSDLZYIVNLHJLVKCFIAQKWWIHROLSDFTKCEAZPURQBXWDJDRZQJHXNJVJGTATQXELLULJK");
    msg.value = 145U;

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
    msg.setTimeStamp(0.46865963334096583);
    msg.setSource(38490U);
    msg.setSourceEntity(61U);
    msg.setDestination(57012U);
    msg.setDestinationEntity(30U);
    msg.name.assign("ROZWALJITGYBCKGOCD");
    msg.value = 155U;

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
    msg.setTimeStamp(0.20924351650499895);
    msg.setSource(48609U);
    msg.setSourceEntity(230U);
    msg.setDestination(32255U);
    msg.setDestinationEntity(223U);
    msg.id = 110U;
    msg.period = 4029432815U;
    msg.duty_cycle = 1650864758U;

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
    msg.setTimeStamp(0.6882970266494114);
    msg.setSource(15576U);
    msg.setSourceEntity(53U);
    msg.setDestination(47904U);
    msg.setDestinationEntity(210U);
    msg.id = 196U;
    msg.period = 3172157487U;
    msg.duty_cycle = 1437314276U;

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
    msg.setTimeStamp(0.6481391727560074);
    msg.setSource(8331U);
    msg.setSourceEntity(187U);
    msg.setDestination(26950U);
    msg.setDestinationEntity(96U);
    msg.id = 42U;
    msg.period = 1253840994U;
    msg.duty_cycle = 176047793U;

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
    msg.setTimeStamp(0.8903497302376117);
    msg.setSource(22558U);
    msg.setSourceEntity(130U);
    msg.setDestination(48322U);
    msg.setDestinationEntity(48U);
    msg.id = 169U;
    msg.period = 4027604822U;
    msg.duty_cycle = 1809190053U;

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
    msg.setTimeStamp(0.8011767975655373);
    msg.setSource(43047U);
    msg.setSourceEntity(2U);
    msg.setDestination(54705U);
    msg.setDestinationEntity(17U);
    msg.id = 188U;
    msg.period = 3862192155U;
    msg.duty_cycle = 1470066379U;

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
    msg.setTimeStamp(0.022821088179399318);
    msg.setSource(7611U);
    msg.setSourceEntity(28U);
    msg.setDestination(32236U);
    msg.setDestinationEntity(43U);
    msg.id = 254U;
    msg.period = 3061528208U;
    msg.duty_cycle = 3449053143U;

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
    msg.setTimeStamp(0.5008481607377961);
    msg.setSource(44242U);
    msg.setSourceEntity(233U);
    msg.setDestination(41467U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.8274143850554329;
    msg.lon = 0.4699118232476944;
    msg.height = 0.2803643600718534;
    msg.x = 0.9008291292065885;
    msg.y = 0.021505894277734305;
    msg.z = 0.5614860243028025;
    msg.phi = 0.2729036887229904;
    msg.theta = 0.2395854814929046;
    msg.psi = 0.7376729454644683;
    msg.u = 0.30755078358270904;
    msg.v = 0.9317737234017502;
    msg.w = 0.16719896683625168;
    msg.vx = 0.04955267475174674;
    msg.vy = 0.22078020906250373;
    msg.vz = 0.5674186717620449;
    msg.p = 0.2518779910938117;
    msg.q = 0.08531640168323151;
    msg.r = 0.7013272440301479;
    msg.depth = 0.554652710756715;
    msg.alt = 0.9712778394696181;

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
    msg.setTimeStamp(0.15458373928623093);
    msg.setSource(48546U);
    msg.setSourceEntity(144U);
    msg.setDestination(38105U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.4476044873690809;
    msg.lon = 0.7107235152058184;
    msg.height = 0.7861442669604359;
    msg.x = 0.6918787199424813;
    msg.y = 0.049654095181165814;
    msg.z = 0.8015049621097249;
    msg.phi = 0.13124631581457968;
    msg.theta = 0.5729000561782739;
    msg.psi = 0.1640035648656064;
    msg.u = 0.7168606216976522;
    msg.v = 0.3473733145936623;
    msg.w = 0.021387380911359055;
    msg.vx = 0.02713499204696579;
    msg.vy = 0.8080823688283595;
    msg.vz = 0.12086397215463207;
    msg.p = 0.4434770852066733;
    msg.q = 0.9974363876265152;
    msg.r = 0.46433128266565893;
    msg.depth = 0.7750478454332164;
    msg.alt = 0.4206499702034283;

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
    msg.setTimeStamp(0.3773691693933754);
    msg.setSource(49265U);
    msg.setSourceEntity(123U);
    msg.setDestination(1093U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.8064677894151786;
    msg.lon = 0.6082659327228571;
    msg.height = 0.10412208437258297;
    msg.x = 0.08239205593314614;
    msg.y = 0.12823945942153514;
    msg.z = 0.9706204712207784;
    msg.phi = 0.0414554801085838;
    msg.theta = 0.9528110892691188;
    msg.psi = 0.37477640464811224;
    msg.u = 0.20987616245392315;
    msg.v = 0.5534572269645588;
    msg.w = 0.790150900763294;
    msg.vx = 0.6822882190273549;
    msg.vy = 0.7638566740581267;
    msg.vz = 0.492451820698777;
    msg.p = 0.18664400512131163;
    msg.q = 0.9510680005304146;
    msg.r = 0.9386228543630563;
    msg.depth = 0.5190917814695106;
    msg.alt = 0.19274196916838138;

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
    msg.setTimeStamp(0.7676209358956175);
    msg.setSource(48679U);
    msg.setSourceEntity(139U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(174U);
    msg.x = 0.2574743419878164;
    msg.y = 0.9162323060502738;
    msg.z = 0.9491882044153946;

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
    msg.setTimeStamp(0.8321849876396893);
    msg.setSource(18463U);
    msg.setSourceEntity(235U);
    msg.setDestination(52192U);
    msg.setDestinationEntity(220U);
    msg.x = 0.7131672810535061;
    msg.y = 0.1721422372355973;
    msg.z = 0.6138132095394117;

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
    msg.setTimeStamp(0.9289981426767681);
    msg.setSource(31094U);
    msg.setSourceEntity(220U);
    msg.setDestination(8620U);
    msg.setDestinationEntity(209U);
    msg.x = 0.26922454992862366;
    msg.y = 0.0010472549768694162;
    msg.z = 0.751793207901892;

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
    msg.setTimeStamp(0.07848209498359138);
    msg.setSource(20370U);
    msg.setSourceEntity(209U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(2U);
    msg.value = 0.16245185808373386;

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
    msg.setTimeStamp(0.8452107295479269);
    msg.setSource(180U);
    msg.setSourceEntity(62U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(41U);
    msg.value = 0.4601575118943739;

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
    msg.setTimeStamp(0.31652486924652223);
    msg.setSource(52931U);
    msg.setSourceEntity(138U);
    msg.setDestination(50084U);
    msg.setDestinationEntity(46U);
    msg.value = 0.052406070188615206;

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
    msg.setTimeStamp(0.6969286787741465);
    msg.setSource(19738U);
    msg.setSourceEntity(88U);
    msg.setDestination(39410U);
    msg.setDestinationEntity(165U);
    msg.value = 0.431082882679113;

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
    msg.setTimeStamp(0.806292702780186);
    msg.setSource(10895U);
    msg.setSourceEntity(243U);
    msg.setDestination(55239U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6977755776317127;

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
    msg.setTimeStamp(0.6112789600595678);
    msg.setSource(13475U);
    msg.setSourceEntity(59U);
    msg.setDestination(12355U);
    msg.setDestinationEntity(2U);
    msg.value = 0.11667473525545691;

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
    msg.setTimeStamp(0.5135286234568138);
    msg.setSource(36596U);
    msg.setSourceEntity(146U);
    msg.setDestination(52820U);
    msg.setDestinationEntity(69U);
    msg.x = 0.4458688678998294;
    msg.y = 0.6405478795174666;
    msg.z = 0.6873213921280203;
    msg.phi = 0.16317050281673873;
    msg.theta = 0.7021161642657461;
    msg.psi = 0.3080969036291298;
    msg.p = 0.9358883571779131;
    msg.q = 0.43557712602895937;
    msg.r = 0.5101602019549156;
    msg.u = 0.5298094876311272;
    msg.v = 0.19541287173966126;
    msg.w = 0.7278633537447614;
    msg.bias_psi = 0.03824594318329744;
    msg.bias_r = 0.8133429234601991;

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
    msg.setTimeStamp(0.4429435509201499);
    msg.setSource(53064U);
    msg.setSourceEntity(177U);
    msg.setDestination(33476U);
    msg.setDestinationEntity(100U);
    msg.x = 0.23461209831318952;
    msg.y = 0.8786271693612093;
    msg.z = 0.8501221783935312;
    msg.phi = 0.8329474908405927;
    msg.theta = 0.6620234242825385;
    msg.psi = 0.8440934950532791;
    msg.p = 0.1388327893985074;
    msg.q = 0.719346428462081;
    msg.r = 0.5349214825732228;
    msg.u = 0.5427108282126258;
    msg.v = 0.40503495894370845;
    msg.w = 0.5366279369156047;
    msg.bias_psi = 0.7444091860674018;
    msg.bias_r = 0.27354180514759796;

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
    msg.setTimeStamp(0.0601615997557009);
    msg.setSource(25370U);
    msg.setSourceEntity(58U);
    msg.setDestination(546U);
    msg.setDestinationEntity(36U);
    msg.x = 0.652798347822486;
    msg.y = 0.26643116223208296;
    msg.z = 0.05318632082855845;
    msg.phi = 0.09535389198602973;
    msg.theta = 0.4486724615024824;
    msg.psi = 0.1842594772379249;
    msg.p = 0.09156660520548254;
    msg.q = 0.8002191044025527;
    msg.r = 0.3439776636116303;
    msg.u = 0.9500249673445272;
    msg.v = 0.2135251465104212;
    msg.w = 0.9872910107185192;
    msg.bias_psi = 0.835341007340032;
    msg.bias_r = 0.5219265397277619;

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
    msg.setTimeStamp(0.8157691966463262);
    msg.setSource(8085U);
    msg.setSourceEntity(155U);
    msg.setDestination(49520U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.6798934970431388;
    msg.bias_r = 0.8449871870626596;
    msg.cog = 0.918671623473271;
    msg.cyaw = 0.3484419151529504;
    msg.lbl_rej_level = 0.9735871158467364;
    msg.gps_rej_level = 0.1393465836553932;
    msg.custom_x = 0.34143373538018773;
    msg.custom_y = 0.8557123583348413;
    msg.custom_z = 0.6277081157038029;

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
    msg.setTimeStamp(0.269069320398827);
    msg.setSource(44417U);
    msg.setSourceEntity(174U);
    msg.setDestination(42322U);
    msg.setDestinationEntity(187U);
    msg.bias_psi = 0.7182206391933883;
    msg.bias_r = 0.5738727012856161;
    msg.cog = 0.7686802168923829;
    msg.cyaw = 0.6205278512279663;
    msg.lbl_rej_level = 0.04163935764367077;
    msg.gps_rej_level = 0.7090328675022981;
    msg.custom_x = 0.3000831492101176;
    msg.custom_y = 0.8290188753760761;
    msg.custom_z = 0.0746188100618076;

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
    msg.setTimeStamp(0.9009283138948331);
    msg.setSource(12927U);
    msg.setSourceEntity(62U);
    msg.setDestination(62016U);
    msg.setDestinationEntity(223U);
    msg.bias_psi = 0.8033685223736461;
    msg.bias_r = 0.8408051857728626;
    msg.cog = 0.9024542700925327;
    msg.cyaw = 0.7486837876333987;
    msg.lbl_rej_level = 0.8407730365126986;
    msg.gps_rej_level = 0.47155352048550425;
    msg.custom_x = 0.11992621308334828;
    msg.custom_y = 0.16633590769429296;
    msg.custom_z = 0.0736199476099203;

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
    msg.setTimeStamp(0.961350879984034);
    msg.setSource(58844U);
    msg.setSourceEntity(46U);
    msg.setDestination(2588U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.26261855414468727;
    msg.reason = 122U;

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
    msg.setTimeStamp(0.405692836137148);
    msg.setSource(21192U);
    msg.setSourceEntity(82U);
    msg.setDestination(45452U);
    msg.setDestinationEntity(74U);
    msg.utc_time = 0.5818336907505617;
    msg.reason = 13U;

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
    msg.setTimeStamp(0.8329823578947575);
    msg.setSource(62553U);
    msg.setSourceEntity(41U);
    msg.setDestination(8931U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.22385850803945084;
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
    msg.setTimeStamp(0.8071238250664566);
    msg.setSource(63857U);
    msg.setSourceEntity(147U);
    msg.setDestination(31071U);
    msg.setDestinationEntity(239U);
    msg.id = 104U;
    msg.range = 0.8330384553559484;
    msg.acceptance = 37U;

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
    msg.setTimeStamp(0.14751826208356045);
    msg.setSource(60515U);
    msg.setSourceEntity(42U);
    msg.setDestination(1098U);
    msg.setDestinationEntity(123U);
    msg.id = 95U;
    msg.range = 0.8446718560338572;
    msg.acceptance = 10U;

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
    msg.setTimeStamp(0.7759545296715536);
    msg.setSource(21787U);
    msg.setSourceEntity(52U);
    msg.setDestination(61565U);
    msg.setDestinationEntity(48U);
    msg.id = 164U;
    msg.range = 0.2884516974899973;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.8172586134490833);
    msg.setSource(31449U);
    msg.setSourceEntity(48U);
    msg.setDestination(13208U);
    msg.setDestinationEntity(104U);
    msg.type = 208U;
    msg.reason = 148U;
    msg.value = 0.74824335140494;
    msg.timestep = 0.5856479325677895;

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
    msg.setTimeStamp(0.19752160071001768);
    msg.setSource(63718U);
    msg.setSourceEntity(176U);
    msg.setDestination(9288U);
    msg.setDestinationEntity(77U);
    msg.type = 47U;
    msg.reason = 155U;
    msg.value = 0.28293306142365326;
    msg.timestep = 0.9140907584448489;

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
    msg.setTimeStamp(0.6867045683421954);
    msg.setSource(46752U);
    msg.setSourceEntity(14U);
    msg.setDestination(37645U);
    msg.setDestinationEntity(82U);
    msg.type = 177U;
    msg.reason = 137U;
    msg.value = 0.5478476985410468;
    msg.timestep = 0.43729369120678263;

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
    msg.setTimeStamp(0.13380221397159442);
    msg.setSource(64877U);
    msg.setSourceEntity(36U);
    msg.setDestination(5907U);
    msg.setDestinationEntity(106U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CZPPCIIAHWXSWBPUTRFUMZMRBHMFWOLJPLBTSQEMQVIENUHJNQWLZNRYXISIXQRDYNCQQVTFSGRMWZPVLONRHCRELFEMHFGNITQAAHPKBNYJFPJOSFGKWVKRXEUHGMNUGSGXDWFJECAJXYKVLYOINHDEZVIWHHYRKZAQAKZMUGUPBXIFUBXJNDCQYECIOTJKL");
    tmp_msg_0.lat = 0.8530769346948691;
    tmp_msg_0.lon = 0.2834428898362885;
    tmp_msg_0.depth = 0.9818111131046833;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 229U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.41143875247559003;
    msg.y = 0.328567140231391;
    msg.var_x = 0.3490143027234268;
    msg.var_y = 0.14324002832987115;
    msg.distance = 0.9399672878905201;

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
    msg.setTimeStamp(0.733587639429593);
    msg.setSource(7465U);
    msg.setSourceEntity(254U);
    msg.setDestination(38302U);
    msg.setDestinationEntity(239U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TZYFVGVJEGPNZJGCHUDSNGBAUBYOLFCIHHWAMXVNGLNQFCPBSNGHEABLCZMURAFCWUEGXKCWFPISHZKKOQWUXYNQFCCLPKTVXPAXHITJTOEIUKKEWXKFRWGDSDQMRDVYSZRDKFITIADHXUTOWZSJSERIIRSCBPWEJXWJHVEUPGOANGAMBBALRDWXVZJVTLMUMJQOYBIEMQUBYQYHRZKDZEPYBDLZL");
    tmp_msg_0.lat = 0.9521662950016221;
    tmp_msg_0.lon = 0.4892164266465717;
    tmp_msg_0.depth = 0.6209760195837712;
    tmp_msg_0.query_channel = 147U;
    tmp_msg_0.reply_channel = 154U;
    tmp_msg_0.transponder_delay = 178U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.32186556074279526;
    msg.y = 0.25486172576470134;
    msg.var_x = 0.9570979115006402;
    msg.var_y = 0.820948088864701;
    msg.distance = 0.6386914540814601;

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
    msg.setTimeStamp(0.3587466099413581);
    msg.setSource(49616U);
    msg.setSourceEntity(56U);
    msg.setDestination(29448U);
    msg.setDestinationEntity(182U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XQWEOIOEWXVFGWDRZCKNUFEZRDIFRYMJOMANNEGAHVSSHASELFHNUYGMUHZJDXZJKVVXIUXZMAOLDLFHYQNJEGPJ");
    tmp_msg_0.lat = 0.15103282586919176;
    tmp_msg_0.lon = 0.6596918150757184;
    tmp_msg_0.depth = 0.10189893932194494;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 85U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.12397786006228018;
    msg.y = 0.1958012971718528;
    msg.var_x = 0.967123573253695;
    msg.var_y = 0.6074736338526915;
    msg.distance = 0.671973577833461;

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
    msg.setTimeStamp(0.6313346522932379);
    msg.setSource(15636U);
    msg.setSourceEntity(87U);
    msg.setDestination(40666U);
    msg.setDestinationEntity(140U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.35038922323224053);
    msg.setSource(8259U);
    msg.setSourceEntity(19U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(29U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.51366487982565);
    msg.setSource(60422U);
    msg.setSourceEntity(245U);
    msg.setDestination(5816U);
    msg.setDestinationEntity(87U);
    msg.state = 217U;

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
    msg.setTimeStamp(0.5397556735630397);
    msg.setSource(51409U);
    msg.setSourceEntity(148U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(207U);
    msg.x = 0.7945637579240079;
    msg.y = 0.6865032844992586;
    msg.z = 0.49470538281241827;

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
    msg.setTimeStamp(0.4663141346782995);
    msg.setSource(39113U);
    msg.setSourceEntity(251U);
    msg.setDestination(60056U);
    msg.setDestinationEntity(67U);
    msg.x = 0.16771041318144653;
    msg.y = 0.20028885276617248;
    msg.z = 0.026993678928743825;

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
    msg.setTimeStamp(0.3186767691031659);
    msg.setSource(7580U);
    msg.setSourceEntity(254U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(5U);
    msg.x = 0.6419120521473389;
    msg.y = 0.39224786270284673;
    msg.z = 0.0229590560904247;

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
    msg.setTimeStamp(0.08829586844844128);
    msg.setSource(64470U);
    msg.setSourceEntity(197U);
    msg.setDestination(6434U);
    msg.setDestinationEntity(110U);
    msg.va = 0.8851479635314538;
    msg.aoa = 0.14860474342337993;
    msg.ssa = 0.29326799324306485;

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
    msg.setTimeStamp(0.599741576711348);
    msg.setSource(53416U);
    msg.setSourceEntity(93U);
    msg.setDestination(53736U);
    msg.setDestinationEntity(11U);
    msg.va = 0.15348410240007548;
    msg.aoa = 0.3764134142652992;
    msg.ssa = 0.15913364142701414;

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
    msg.setTimeStamp(0.6800140754338124);
    msg.setSource(34404U);
    msg.setSourceEntity(50U);
    msg.setDestination(27265U);
    msg.setDestinationEntity(47U);
    msg.va = 0.5217074994737725;
    msg.aoa = 0.36989535145342956;
    msg.ssa = 0.32763802657827346;

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
    msg.setTimeStamp(0.4576589381375503);
    msg.setSource(4963U);
    msg.setSourceEntity(42U);
    msg.setDestination(60742U);
    msg.setDestinationEntity(230U);
    msg.value = 0.23925693630781641;

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
    msg.setTimeStamp(0.15978102986661435);
    msg.setSource(33391U);
    msg.setSourceEntity(221U);
    msg.setDestination(14058U);
    msg.setDestinationEntity(61U);
    msg.value = 0.94683158308888;

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
    msg.setTimeStamp(0.633883118276041);
    msg.setSource(45720U);
    msg.setSourceEntity(69U);
    msg.setDestination(1071U);
    msg.setDestinationEntity(67U);
    msg.value = 0.8801657004749501;

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
    msg.setTimeStamp(0.8248028646294108);
    msg.setSource(18426U);
    msg.setSourceEntity(16U);
    msg.setDestination(58578U);
    msg.setDestinationEntity(220U);
    msg.value = 0.39957582134194936;
    msg.z_units = 236U;

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
    msg.setTimeStamp(0.034628979335425525);
    msg.setSource(38398U);
    msg.setSourceEntity(191U);
    msg.setDestination(59797U);
    msg.setDestinationEntity(200U);
    msg.value = 0.09484690962449427;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.377594805284694);
    msg.setSource(56215U);
    msg.setSourceEntity(106U);
    msg.setDestination(21864U);
    msg.setDestinationEntity(211U);
    msg.value = 0.338881365783135;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.9981465091613158);
    msg.setSource(2798U);
    msg.setSourceEntity(143U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8647913474010699;
    msg.speed_units = 213U;

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
    msg.setTimeStamp(0.44571662104773657);
    msg.setSource(51507U);
    msg.setSourceEntity(177U);
    msg.setDestination(63374U);
    msg.setDestinationEntity(205U);
    msg.value = 0.17112902026150723;
    msg.speed_units = 18U;

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
    msg.setTimeStamp(0.975438890180835);
    msg.setSource(5154U);
    msg.setSourceEntity(73U);
    msg.setDestination(7656U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5532080301422713;
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
    msg.setTimeStamp(0.26494627132857396);
    msg.setSource(54449U);
    msg.setSourceEntity(8U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(67U);
    msg.value = 0.2414623734983521;

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
    msg.setTimeStamp(0.33537015927585234);
    msg.setSource(57088U);
    msg.setSourceEntity(22U);
    msg.setDestination(8072U);
    msg.setDestinationEntity(101U);
    msg.value = 0.698608775131533;

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
    msg.setTimeStamp(0.9089310882232103);
    msg.setSource(22017U);
    msg.setSourceEntity(186U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(150U);
    msg.value = 0.712443022413251;

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
    msg.setTimeStamp(0.9178800725705852);
    msg.setSource(53640U);
    msg.setSourceEntity(29U);
    msg.setDestination(38913U);
    msg.setDestinationEntity(39U);
    msg.value = 0.26317465035644916;

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
    msg.setTimeStamp(0.9829148122005529);
    msg.setSource(3913U);
    msg.setSourceEntity(109U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(159U);
    msg.value = 0.8443895714911225;

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
    msg.setTimeStamp(0.40550301802493416);
    msg.setSource(58166U);
    msg.setSourceEntity(153U);
    msg.setDestination(64064U);
    msg.setDestinationEntity(104U);
    msg.value = 0.15538975422785783;

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
    msg.setTimeStamp(0.24589473767027004);
    msg.setSource(49608U);
    msg.setSourceEntity(245U);
    msg.setDestination(39202U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9337924502039612;

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
    msg.setTimeStamp(0.7381540904126903);
    msg.setSource(19130U);
    msg.setSourceEntity(232U);
    msg.setDestination(59100U);
    msg.setDestinationEntity(245U);
    msg.value = 0.3955271406171803;

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
    msg.setTimeStamp(0.014162213454203876);
    msg.setSource(9346U);
    msg.setSourceEntity(12U);
    msg.setDestination(1712U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4734284417803625;

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
    msg.setTimeStamp(0.22586437735307552);
    msg.setSource(24237U);
    msg.setSourceEntity(12U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(97U);
    msg.path_ref = 3756685121U;
    msg.start_lat = 0.828546565815034;
    msg.start_lon = 0.22545558293355006;
    msg.start_z = 0.8006509112400855;
    msg.start_z_units = 22U;
    msg.end_lat = 0.3612496829872468;
    msg.end_lon = 0.47910461913115654;
    msg.end_z = 0.21333120559108165;
    msg.end_z_units = 116U;
    msg.speed = 0.5969691635341811;
    msg.speed_units = 240U;
    msg.lradius = 0.7469002698024083;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.5229197781550217);
    msg.setSource(49613U);
    msg.setSourceEntity(204U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 809855918U;
    msg.start_lat = 0.07638418335002772;
    msg.start_lon = 0.4528951063558172;
    msg.start_z = 0.5715431146723667;
    msg.start_z_units = 0U;
    msg.end_lat = 0.20167420244359502;
    msg.end_lon = 0.3184205883259389;
    msg.end_z = 0.8740031262490551;
    msg.end_z_units = 168U;
    msg.speed = 0.4252810534479743;
    msg.speed_units = 183U;
    msg.lradius = 0.3303390377599451;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.5859167101443759);
    msg.setSource(34910U);
    msg.setSourceEntity(46U);
    msg.setDestination(48276U);
    msg.setDestinationEntity(51U);
    msg.path_ref = 1901496415U;
    msg.start_lat = 0.4944600581368386;
    msg.start_lon = 0.8824239148440987;
    msg.start_z = 0.6854944565102904;
    msg.start_z_units = 237U;
    msg.end_lat = 0.849440137364866;
    msg.end_lon = 0.4873257388607033;
    msg.end_z = 0.5517144984157216;
    msg.end_z_units = 57U;
    msg.speed = 0.9306425167023913;
    msg.speed_units = 102U;
    msg.lradius = 0.8905080149829133;
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
    msg.setTimeStamp(0.5103720519270921);
    msg.setSource(35015U);
    msg.setSourceEntity(154U);
    msg.setDestination(4805U);
    msg.setDestinationEntity(187U);
    msg.x = 0.9405439003302877;
    msg.y = 0.450182211419891;
    msg.z = 0.21058075128079246;
    msg.k = 0.06722916832050319;
    msg.m = 0.6748471932608184;
    msg.n = 0.22548953753898793;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.8623342789046601);
    msg.setSource(5559U);
    msg.setSourceEntity(0U);
    msg.setDestination(49132U);
    msg.setDestinationEntity(201U);
    msg.x = 0.24426893683363915;
    msg.y = 0.4077443436398329;
    msg.z = 0.9032764079557324;
    msg.k = 0.13413476137490588;
    msg.m = 0.9146118942396035;
    msg.n = 0.44050445356933543;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.03750763211257757);
    msg.setSource(23759U);
    msg.setSourceEntity(238U);
    msg.setDestination(240U);
    msg.setDestinationEntity(24U);
    msg.x = 0.8297106180578443;
    msg.y = 0.7044374739753867;
    msg.z = 0.028436265515578762;
    msg.k = 0.9169200777867197;
    msg.m = 0.5325376342460314;
    msg.n = 0.5724756744988636;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.03017387238413305);
    msg.setSource(37507U);
    msg.setSourceEntity(14U);
    msg.setDestination(51135U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7087576391323863;

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
    msg.setTimeStamp(0.6979071389977005);
    msg.setSource(37891U);
    msg.setSourceEntity(5U);
    msg.setDestination(16336U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7794541088833007;

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
    msg.setTimeStamp(0.4866154805384859);
    msg.setSource(62206U);
    msg.setSourceEntity(58U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8687048114221336;

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
    msg.setTimeStamp(0.2307135508141318);
    msg.setSource(43015U);
    msg.setSourceEntity(205U);
    msg.setDestination(34113U);
    msg.setDestinationEntity(212U);
    msg.u = 0.403337276489503;
    msg.v = 0.027391535523982102;
    msg.w = 0.18346443073184238;
    msg.p = 0.1408783096767181;
    msg.q = 0.2228832400231715;
    msg.r = 0.05237759879791304;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.919585999122931);
    msg.setSource(47255U);
    msg.setSourceEntity(95U);
    msg.setDestination(22111U);
    msg.setDestinationEntity(171U);
    msg.u = 0.9526238096442232;
    msg.v = 0.7416981783970348;
    msg.w = 0.3915268099094539;
    msg.p = 0.2729974996214437;
    msg.q = 0.7056844589589137;
    msg.r = 0.2332361390645562;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.4799434433923795);
    msg.setSource(15945U);
    msg.setSourceEntity(46U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(79U);
    msg.u = 0.09615592370493453;
    msg.v = 0.9170383513510695;
    msg.w = 0.5304261286056624;
    msg.p = 0.6877708660709606;
    msg.q = 0.6074082222037696;
    msg.r = 0.003966505526244668;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.3566196932527157);
    msg.setSource(31886U);
    msg.setSourceEntity(205U);
    msg.setDestination(1123U);
    msg.setDestinationEntity(159U);
    msg.path_ref = 1360968592U;
    msg.start_lat = 0.09143611603452528;
    msg.start_lon = 0.3478907039214588;
    msg.start_z = 0.019358172471783175;
    msg.start_z_units = 220U;
    msg.end_lat = 0.5153935089485346;
    msg.end_lon = 0.6522127391515444;
    msg.end_z = 0.6162852991015237;
    msg.end_z_units = 191U;
    msg.lradius = 0.7113660911283864;
    msg.flags = 204U;
    msg.x = 0.6246836035012326;
    msg.y = 0.9965264896054734;
    msg.z = 0.2649896837882809;
    msg.vx = 0.017605844202842724;
    msg.vy = 0.26675848180774486;
    msg.vz = 0.5208913031832201;
    msg.course_error = 0.7067814096496374;
    msg.eta = 12583U;

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
    msg.setTimeStamp(0.27560128356649605);
    msg.setSource(31334U);
    msg.setSourceEntity(180U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 1173689681U;
    msg.start_lat = 0.7223992887389545;
    msg.start_lon = 0.8484193357056019;
    msg.start_z = 0.2720734329434804;
    msg.start_z_units = 133U;
    msg.end_lat = 0.8682307827946293;
    msg.end_lon = 0.2583175394177124;
    msg.end_z = 0.25866989076679836;
    msg.end_z_units = 206U;
    msg.lradius = 0.12155982167203594;
    msg.flags = 50U;
    msg.x = 0.053812855784410196;
    msg.y = 0.6535115974882368;
    msg.z = 0.453203829800495;
    msg.vx = 0.7216631908938204;
    msg.vy = 0.8399221107303673;
    msg.vz = 0.27708376628699805;
    msg.course_error = 0.404062905091386;
    msg.eta = 35535U;

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
    msg.setTimeStamp(0.7896915564721327);
    msg.setSource(31690U);
    msg.setSourceEntity(235U);
    msg.setDestination(57999U);
    msg.setDestinationEntity(93U);
    msg.path_ref = 1510864328U;
    msg.start_lat = 0.016077398366394657;
    msg.start_lon = 0.9159571507636141;
    msg.start_z = 0.22749615471030693;
    msg.start_z_units = 161U;
    msg.end_lat = 0.9518599581843101;
    msg.end_lon = 0.873489397330444;
    msg.end_z = 0.008567013454320982;
    msg.end_z_units = 118U;
    msg.lradius = 0.48166482052791826;
    msg.flags = 100U;
    msg.x = 0.2116622055267079;
    msg.y = 0.9322563690005634;
    msg.z = 0.18169466630668551;
    msg.vx = 0.9404523492206;
    msg.vy = 0.860356753262794;
    msg.vz = 0.8100826182027148;
    msg.course_error = 0.650949167391288;
    msg.eta = 5202U;

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
    msg.setTimeStamp(0.084168277441388);
    msg.setSource(13273U);
    msg.setSourceEntity(157U);
    msg.setDestination(9514U);
    msg.setDestinationEntity(201U);
    msg.k = 0.09131789782097555;
    msg.m = 0.9456141374645655;
    msg.n = 0.32035861032753776;

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
    msg.setTimeStamp(0.9818854218650751);
    msg.setSource(16103U);
    msg.setSourceEntity(138U);
    msg.setDestination(3257U);
    msg.setDestinationEntity(25U);
    msg.k = 0.153534363403805;
    msg.m = 0.9998687266299054;
    msg.n = 0.7090799514754635;

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
    msg.setTimeStamp(0.5025497897014035);
    msg.setSource(11847U);
    msg.setSourceEntity(212U);
    msg.setDestination(35949U);
    msg.setDestinationEntity(25U);
    msg.k = 0.850182789182653;
    msg.m = 0.9550839594624592;
    msg.n = 0.7921727828498827;

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
    msg.setTimeStamp(0.538133904430617);
    msg.setSource(9334U);
    msg.setSourceEntity(240U);
    msg.setDestination(56625U);
    msg.setDestinationEntity(39U);
    msg.p = 0.864081726270842;
    msg.i = 0.449118914644256;
    msg.d = 0.9774591480216643;
    msg.a = 0.3250449188146862;

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
    msg.setTimeStamp(0.005806942762454637);
    msg.setSource(9738U);
    msg.setSourceEntity(33U);
    msg.setDestination(42536U);
    msg.setDestinationEntity(168U);
    msg.p = 0.4735220291657355;
    msg.i = 0.3253411378650418;
    msg.d = 0.1922895583407317;
    msg.a = 0.8468901153112854;

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
    msg.setTimeStamp(0.5042827866714871);
    msg.setSource(7759U);
    msg.setSourceEntity(186U);
    msg.setDestination(54703U);
    msg.setDestinationEntity(197U);
    msg.p = 0.16425365000432113;
    msg.i = 0.22702858901231404;
    msg.d = 0.9159827575524362;
    msg.a = 0.5417453353514686;

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
    msg.setTimeStamp(0.8086878286453446);
    msg.setSource(42225U);
    msg.setSourceEntity(154U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(216U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.26104149554460454);
    msg.setSource(58613U);
    msg.setSourceEntity(42U);
    msg.setDestination(8283U);
    msg.setDestinationEntity(46U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.6215195335750493);
    msg.setSource(36262U);
    msg.setSourceEntity(109U);
    msg.setDestination(34248U);
    msg.setDestinationEntity(84U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.9827860898987572);
    msg.setSource(1949U);
    msg.setSourceEntity(235U);
    msg.setDestination(4125U);
    msg.setDestinationEntity(73U);
    msg.x = 0.6324350073318973;
    msg.y = 0.5534625098724181;
    msg.z = 0.29951648356935534;
    msg.vx = 0.2740519679750094;
    msg.vy = 0.6590177108581718;
    msg.vz = 0.49660210152627327;
    msg.ax = 0.2579174206334379;
    msg.ay = 0.507102430365615;
    msg.az = 0.9635733389007749;
    msg.flags = 14556U;

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
    msg.setTimeStamp(0.3235685309334706);
    msg.setSource(26117U);
    msg.setSourceEntity(99U);
    msg.setDestination(8230U);
    msg.setDestinationEntity(253U);
    msg.x = 0.18849728326766657;
    msg.y = 0.7506126773428793;
    msg.z = 0.9873780156382808;
    msg.vx = 0.500752282884644;
    msg.vy = 0.37368503355276883;
    msg.vz = 0.1361838584414934;
    msg.ax = 0.24898491045340776;
    msg.ay = 0.768672786664038;
    msg.az = 0.6251569922763847;
    msg.flags = 1916U;

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
    msg.setTimeStamp(0.5663705928438457);
    msg.setSource(41701U);
    msg.setSourceEntity(101U);
    msg.setDestination(26166U);
    msg.setDestinationEntity(190U);
    msg.x = 0.37241747036947614;
    msg.y = 0.4217458870458125;
    msg.z = 0.49236433460258744;
    msg.vx = 0.7842805112177428;
    msg.vy = 0.8716821213238111;
    msg.vz = 0.3142758707571708;
    msg.ax = 0.22554507212081765;
    msg.ay = 0.48847821033747174;
    msg.az = 0.7736160422026324;
    msg.flags = 14040U;

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
    msg.setTimeStamp(0.9006380254812799);
    msg.setSource(17003U);
    msg.setSourceEntity(110U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(146U);
    msg.value = 0.05055141911221728;

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
    msg.setTimeStamp(0.7913603368324271);
    msg.setSource(48115U);
    msg.setSourceEntity(16U);
    msg.setDestination(54039U);
    msg.setDestinationEntity(119U);
    msg.value = 0.7606966992105288;

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
    msg.setTimeStamp(0.7319684819591451);
    msg.setSource(43302U);
    msg.setSourceEntity(249U);
    msg.setDestination(55837U);
    msg.setDestinationEntity(97U);
    msg.value = 0.4334567468675796;

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
    msg.setTimeStamp(0.167339154220567);
    msg.setSource(37522U);
    msg.setSourceEntity(130U);
    msg.setDestination(32406U);
    msg.setDestinationEntity(58U);
    msg.timeout = 31492U;
    msg.lat = 0.1196011990139555;
    msg.lon = 0.7275999301388401;
    msg.z = 0.5462844077072007;
    msg.z_units = 169U;
    msg.speed = 0.32490572932588846;
    msg.speed_units = 88U;
    msg.roll = 0.6227532258397314;
    msg.pitch = 0.8493562707991568;
    msg.yaw = 0.6947155383718614;
    msg.custom.assign("PNJMZJOKAUCWLSJIXDNVHQLRSORFXXCYFXOZKWGKYOUWEYYUCDNIKHNWXZFJQVJSZYPZUDRUSPRPOTRFVMFSNFMHJYHYZNWVRGIXCDNLCNEMQYRKLORLQGGITACZHWLTHQMVTMPHFCJTVNQNTUEMBDCEJCPXQMPKSEKDJGJGOAUIHBLZVUXTTPQERFWDGQGFYVOOWWTGXDISSABVUPDMSQIXLABDKL");

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
    msg.setTimeStamp(0.45369217062527456);
    msg.setSource(41650U);
    msg.setSourceEntity(131U);
    msg.setDestination(4596U);
    msg.setDestinationEntity(64U);
    msg.timeout = 80U;
    msg.lat = 0.6781059767291269;
    msg.lon = 0.3972544703698071;
    msg.z = 0.8881637970513694;
    msg.z_units = 240U;
    msg.speed = 0.4025765228692485;
    msg.speed_units = 93U;
    msg.roll = 0.7206368573597375;
    msg.pitch = 0.7324118047421744;
    msg.yaw = 0.37667040199577495;
    msg.custom.assign("DBTGCMYMMCYXGNKBFTQSZEHEHEOCRNAYSFXTJQULQBOZWNDADZBLAVNXMWKUYNJIFSLDPGRMBSZGDNYLLRRBUZRIKUXZGRDRWCUUITPHTAJUBWFDMWJLABVOFEOOELJPJBHXOEPDVMREVIJFHEKSPFYIMFDNHKKGYJBHMQILQKNIVZCKYYKNFOWGAXPCAAPZVCEVXTPSCXMGSISCASEFNWQZYWX");

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
    msg.setTimeStamp(0.9722201378808867);
    msg.setSource(19393U);
    msg.setSourceEntity(165U);
    msg.setDestination(25980U);
    msg.setDestinationEntity(176U);
    msg.timeout = 13925U;
    msg.lat = 0.0695710626676449;
    msg.lon = 0.6537580607828286;
    msg.z = 0.05759539974343575;
    msg.z_units = 98U;
    msg.speed = 0.9337318894123209;
    msg.speed_units = 66U;
    msg.roll = 0.043784978308555655;
    msg.pitch = 0.0681873032386795;
    msg.yaw = 0.6772049120079721;
    msg.custom.assign("SFXJFMVZUJTDOHGHMPMYEHXXJZYAQOCDGQMXJCYRCTQFFAKUUWBGFDNJPAXTHXFLPIUMNHPRKZFJERGBNJVGBOEYPDKTDGPLDNAAQZCSGKXHCWYFQBGTRMOLVAOVXHJCKENDKQPSTBBVXMHRYMDJIRIVVIAGOWDRQUWHUJZOOLATCZLNPGNOYZSSWICPYWQYXIMBUSWHKWRUKVTLTPKDBAONEYLRQSIUWCCZSVEENIFEMKR");

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
    msg.setTimeStamp(0.9818941172956543);
    msg.setSource(31528U);
    msg.setSourceEntity(38U);
    msg.setDestination(53218U);
    msg.setDestinationEntity(138U);
    msg.timeout = 25630U;
    msg.lat = 0.13534737021503151;
    msg.lon = 0.82713274710367;
    msg.z = 0.8258779359486158;
    msg.z_units = 93U;
    msg.speed = 0.28527965325198834;
    msg.speed_units = 220U;
    msg.duration = 54001U;
    msg.radius = 0.5085368798958052;
    msg.flags = 194U;
    msg.custom.assign("MZSGWIDAEOMBVUEIMBOICKBTHPPRPQKIO");

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
    msg.setTimeStamp(0.2535139345028493);
    msg.setSource(19516U);
    msg.setSourceEntity(204U);
    msg.setDestination(22646U);
    msg.setDestinationEntity(47U);
    msg.timeout = 56151U;
    msg.lat = 0.8662535964180077;
    msg.lon = 0.6353456404268303;
    msg.z = 0.345317576245327;
    msg.z_units = 56U;
    msg.speed = 0.23081145487911936;
    msg.speed_units = 146U;
    msg.duration = 5603U;
    msg.radius = 0.2936122870646324;
    msg.flags = 9U;
    msg.custom.assign("NQGDSIJAZBNWXFYMITMTHRDHNWUVRVXLODDYFXNVOJKIUSXVTZVROBKPMHMPMXW");

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
    msg.setTimeStamp(0.31373302790553115);
    msg.setSource(31475U);
    msg.setSourceEntity(217U);
    msg.setDestination(48881U);
    msg.setDestinationEntity(74U);
    msg.timeout = 346U;
    msg.lat = 0.5873669885400663;
    msg.lon = 0.023352569543484858;
    msg.z = 0.049889988632516036;
    msg.z_units = 166U;
    msg.speed = 0.7870922752579692;
    msg.speed_units = 246U;
    msg.duration = 17108U;
    msg.radius = 0.26719351398582725;
    msg.flags = 216U;
    msg.custom.assign("ZJGHUWGFIUSNZSOHBSRDPBJKLDMIASAKDDHJNIWFDVYGYYWRIBQDONPECROZVHTXRCKSGLBMHG");

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
    msg.setTimeStamp(0.9484948071029533);
    msg.setSource(7788U);
    msg.setSourceEntity(35U);
    msg.setDestination(62499U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("NOKJAJVBDXPHSDVPLFUUOIMVNUTXUTTSZQBODCYMWGAGTHGGDXKPQYAEPXIMHQJOKHEBYPKRFJBYBCAMERVCFNIOAILMRITHKQWSHFNGMNLLSZXXYREBSLAIHJZODJYNXTOMUENCXWRZPQHPQRYIDAAUMOZFDGRWVQUESVOLVEYTZCLQZKJFKMWLHDKLNKZWFPUEPMALNUSRBHIWCYVGYRJCSDUXWVP");

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
    msg.setTimeStamp(0.45484606471730005);
    msg.setSource(25093U);
    msg.setSourceEntity(135U);
    msg.setDestination(25272U);
    msg.setDestinationEntity(210U);
    msg.custom.assign("CEGPVHHKUIBXXVBWJKUNTSCRFAZVJVKFTOUIYVJPXSJZMEBHKLSNMSQZVOGEGKQMRQZDHGYALVOTUAEBWNMZUDCTQYILIKLNUKIIDKVBQCPSYWPTTEHGZQXXTTNEFPMDA");

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
    msg.setTimeStamp(0.15104929944538292);
    msg.setSource(57081U);
    msg.setSourceEntity(66U);
    msg.setDestination(13062U);
    msg.setDestinationEntity(40U);
    msg.custom.assign("PRWTCDPGBZAUHECYJBCXTRLHKLLPHEITKKLPDMCCVLVRJVSMBXFRIISOFBRYQGPRBPAMNVRBHHDJDTIUMQNSYCIXVBDJUFYVQSLOPUMAOUIHGUVDAIROZLGWXVNTGPQAFYBEHBMCVJ");

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
    msg.setTimeStamp(0.669780677767946);
    msg.setSource(25697U);
    msg.setSourceEntity(219U);
    msg.setDestination(44566U);
    msg.setDestinationEntity(66U);
    msg.timeout = 31336U;
    msg.lat = 0.8799620235021998;
    msg.lon = 0.7360569011017719;
    msg.z = 0.4800233012382292;
    msg.z_units = 33U;
    msg.duration = 13561U;
    msg.speed = 0.7515317560566285;
    msg.speed_units = 23U;
    msg.type = 146U;
    msg.radius = 0.1760137763976276;
    msg.length = 0.0967469896973625;
    msg.bearing = 0.5818515794235991;
    msg.direction = 74U;
    msg.custom.assign("ETWTUZKNCLLITPNDUIDPNVGZIPWQQFBTMACQVLXSNFFKVWTJYLMSOXHKVHHIJQNOMOEAUVBBEOLRRRUGWUCHAZCDZFNFDYIRMLIDEXMVYSSUGOSLFONWQPFPKAJQYJHQLRTBBLVKVTKDRS");

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
    msg.setTimeStamp(0.023487437717914617);
    msg.setSource(36422U);
    msg.setSourceEntity(92U);
    msg.setDestination(9496U);
    msg.setDestinationEntity(200U);
    msg.timeout = 52931U;
    msg.lat = 0.7778923767068444;
    msg.lon = 0.8761852710094643;
    msg.z = 0.501085974553642;
    msg.z_units = 237U;
    msg.duration = 19327U;
    msg.speed = 0.7220700191218472;
    msg.speed_units = 253U;
    msg.type = 137U;
    msg.radius = 0.934596606265189;
    msg.length = 0.23788568904957708;
    msg.bearing = 0.9032212663861806;
    msg.direction = 110U;
    msg.custom.assign("QWTOFCGMZHRVGSRIMRFOTBTKWEQFJZFAQVQXGUYIXLDJFYZIYWVSXDTUJWSNIRCIRDZBULYOGPCRUEWKSPLLDAXYUOWGVAHHJZNHBDIRTYYNWANETEEBBBIEASXPCVWYNZNCNSGODHMLFUDFYPOJQMSZEUHMKMQSKHKAKHJHCFKIGPDBVRKCKFGXZVADCTQYPETNZLMTPSMJQPVGJCFEEIAUALXRNJQXRWMA");

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
    msg.setTimeStamp(0.7721616551112604);
    msg.setSource(35136U);
    msg.setSourceEntity(139U);
    msg.setDestination(4086U);
    msg.setDestinationEntity(214U);
    msg.timeout = 10090U;
    msg.lat = 0.27959890989870895;
    msg.lon = 0.9430810336517021;
    msg.z = 0.49747201211975833;
    msg.z_units = 118U;
    msg.duration = 9948U;
    msg.speed = 0.5955075905540056;
    msg.speed_units = 204U;
    msg.type = 128U;
    msg.radius = 0.8524595924460259;
    msg.length = 0.7510812965148389;
    msg.bearing = 0.8067125240092391;
    msg.direction = 147U;
    msg.custom.assign("NDHCXZEULGKRQGAHDVAKCGOBLHJJTALUPCTHIQTAVVFMWRMWSCUWLDLIYIHEQWSIKYVYBZUDNNHDWEAUHNUTMGGXKHEOZSYRNUKMCCQXFMAVOPWDKZZPTBRVANCJAVREBUQNJRWSSPOTJSLKUSEGWSAZRHFPY");

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
    msg.setTimeStamp(0.3300255113038296);
    msg.setSource(18038U);
    msg.setSourceEntity(5U);
    msg.setDestination(2014U);
    msg.setDestinationEntity(54U);
    msg.duration = 2847U;
    msg.custom.assign("TLRJCOTGIZPBOYRLXCCOGQAGVIVVCRYNEFBXMMHOKBTCTVCVMQPPAUGDQDYWSZDA");

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
    msg.setTimeStamp(0.712492389727481);
    msg.setSource(1399U);
    msg.setSourceEntity(175U);
    msg.setDestination(19668U);
    msg.setDestinationEntity(2U);
    msg.duration = 58127U;
    msg.custom.assign("RORWYPVKZUQGLYAYLFCUKCGBTEPVIBRCHETUDCJSOYULVJQEWUHAAXHWSQKBLPRIIPUGHURROZNSNOVMAUGRXZFWIQNJJMOTVMMHFBMSYNPXPDQVDPMSIIBOQZKXTCNYVAXXZWABVMHKTAHARZSESWOKFIUIGLTCLFQFDWDEV");

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
    msg.setTimeStamp(0.9355103041012192);
    msg.setSource(50716U);
    msg.setSourceEntity(71U);
    msg.setDestination(26682U);
    msg.setDestinationEntity(228U);
    msg.duration = 5509U;
    msg.custom.assign("GJOZDONCWOHVCDXZXMIJUBTAJEABOMWBIYLVBYPCXJSQEDDGYHHBYVIFJMTXWOIPETXFRWMFQBWGROJEPQFDDGQKLPONVAAXWJZCQGLKEMSTEZORRN");

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
    msg.setTimeStamp(0.9994261405029469);
    msg.setSource(57055U);
    msg.setSourceEntity(120U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(1U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.34714067515954583;
    tmp_msg_0.z_units = 165U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1607U;
    msg.custom.assign("VOJSIBCDWIVJHOXWGLXRGGNMIMCAQHGOUOZHNSRFCHQIIVNPJUDLESWCYULPBBFVFNNYEWUQHLRVCXRFUNRRKGJQYLKVTQQMLZMJLGDDIPMLZESZOREZBWPCFEASKPBFIDGZFSRXCDAJZHWPQUYOGQVATCDGXMQWBTONACTKUNINRVICREEH");

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
    msg.setTimeStamp(0.03433068518600524);
    msg.setSource(28199U);
    msg.setSourceEntity(21U);
    msg.setDestination(53070U);
    msg.setDestinationEntity(218U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7184363151159973;
    tmp_msg_0.speed_units = 204U;
    msg.control.set(tmp_msg_0);
    msg.duration = 32068U;
    msg.custom.assign("JXZPTKFSIYOZXCOCJIMWXALJRFZLQTTGLSDKJHBYEGAZOCUDMXREEMGUXNPNPSWCMQHFTDNURMFPXHKKVRIOSWRQJTZTNGTUAMPOJLUFVIEYGZBXOPNAQKCDFFFUVBUVLREAONYANLDUVLUYMSHHGFU");

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
    msg.setTimeStamp(0.2695855032638592);
    msg.setSource(58138U);
    msg.setSourceEntity(63U);
    msg.setDestination(49689U);
    msg.setDestinationEntity(134U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5147942045326565;
    tmp_msg_0.speed_units = 254U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22954U;
    msg.custom.assign("HBANRXJAPBPBMHBWWJNTMWXFYSIZXORTHURGMHKTIOXPELWJZOTDALXJHLDLCRFRJQQIBDLNJKDOBKJQACSMYNGIDBCWPGUORFYYLUXRGMCYQLFUWRVWHEUYHPZWVNZEVFQEOLIFSYJVVPMMKDJUGFOYNEMKAQTVKDQTCSTTPCPGLCYDUNG");

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
    msg.setTimeStamp(0.9832136569510926);
    msg.setSource(10430U);
    msg.setSourceEntity(142U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(7U);
    msg.timeout = 27851U;
    msg.lat = 0.889208263988198;
    msg.lon = 0.9222136364824942;
    msg.z = 0.070701610421956;
    msg.z_units = 133U;
    msg.speed = 0.4636300510353404;
    msg.speed_units = 213U;
    msg.bearing = 0.7654723496387073;
    msg.cross_angle = 0.5075250893188028;
    msg.width = 0.2877571997242562;
    msg.length = 0.38012614570348635;
    msg.hstep = 0.01197432566138601;
    msg.coff = 187U;
    msg.alternation = 241U;
    msg.flags = 91U;
    msg.custom.assign("ETQHISVTCMJKSPN");

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
    msg.setTimeStamp(0.9106716987002513);
    msg.setSource(37234U);
    msg.setSourceEntity(191U);
    msg.setDestination(17859U);
    msg.setDestinationEntity(43U);
    msg.timeout = 28073U;
    msg.lat = 0.8774094315903311;
    msg.lon = 0.7268321292378986;
    msg.z = 0.03479272953703627;
    msg.z_units = 216U;
    msg.speed = 0.4554171356211689;
    msg.speed_units = 74U;
    msg.bearing = 0.7258666705928473;
    msg.cross_angle = 0.15870022991006916;
    msg.width = 0.4286060338005666;
    msg.length = 0.5452105583732088;
    msg.hstep = 0.2257718163044874;
    msg.coff = 56U;
    msg.alternation = 36U;
    msg.flags = 248U;
    msg.custom.assign("RUQCPSZEAFSRLEYZFMYYERFLYFTZIYHZGQQBXFWVBPKUHCRQLDRXRNEU");

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
    msg.setTimeStamp(0.3995348722279466);
    msg.setSource(56169U);
    msg.setSourceEntity(32U);
    msg.setDestination(46219U);
    msg.setDestinationEntity(174U);
    msg.timeout = 41612U;
    msg.lat = 0.15151450016208146;
    msg.lon = 0.03395512709313708;
    msg.z = 0.46679782801839553;
    msg.z_units = 145U;
    msg.speed = 0.9215932797788607;
    msg.speed_units = 222U;
    msg.bearing = 0.4915821890208927;
    msg.cross_angle = 0.6799266270668696;
    msg.width = 0.29252495936571;
    msg.length = 0.5259929744472635;
    msg.hstep = 0.35337440464492753;
    msg.coff = 253U;
    msg.alternation = 125U;
    msg.flags = 76U;
    msg.custom.assign("BLZWDBZKJOTJZPPKWMWRSTKVPBSI");

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
    msg.setTimeStamp(0.2585352566255281);
    msg.setSource(17891U);
    msg.setSourceEntity(191U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(114U);
    msg.timeout = 16771U;
    msg.lat = 0.8388537883033378;
    msg.lon = 0.3447386413125466;
    msg.z = 0.8685559259418059;
    msg.z_units = 218U;
    msg.speed = 0.09571920668868605;
    msg.speed_units = 49U;
    msg.custom.assign("BHQEFSAUTKZVORKQIKADVVHLKIIOUWXZDRKSVZPPPMWQMYVZFEARICHXNSYCMQ");

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
    msg.setTimeStamp(0.7091464106670945);
    msg.setSource(18654U);
    msg.setSourceEntity(191U);
    msg.setDestination(22688U);
    msg.setDestinationEntity(53U);
    msg.timeout = 51140U;
    msg.lat = 0.10679682025113957;
    msg.lon = 0.1461234241779208;
    msg.z = 0.7693302145171326;
    msg.z_units = 66U;
    msg.speed = 0.5056678220580696;
    msg.speed_units = 150U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3510751108428566;
    tmp_msg_0.y = 0.7105879369380047;
    tmp_msg_0.z = 0.5722826548746784;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBTPCGOPWADBRGSTETPPVJFPFNATYJRPKHQCUIDOKDEEJCUQMWXCINBWUFQFJDZWZJWOTXFQVSYXLMQHHDMGXBEAOHCIFVUOOYGYWLRUGOTYUQPUVLGKKBD");

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
    msg.setTimeStamp(0.16564350852762555);
    msg.setSource(58654U);
    msg.setSourceEntity(70U);
    msg.setDestination(36415U);
    msg.setDestinationEntity(249U);
    msg.timeout = 47143U;
    msg.lat = 0.08188629067326458;
    msg.lon = 0.8706606404374627;
    msg.z = 0.05848235439164373;
    msg.z_units = 153U;
    msg.speed = 0.799391887363837;
    msg.speed_units = 236U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.45658039985008103;
    tmp_msg_0.y = 0.5958217653881026;
    tmp_msg_0.z = 0.6274297518089262;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XWQNLWTSBWYKLUHMBPGPOPBDWDMUNUCPVVXIZSRNJOFVEFALENRNIQKLZMKTTWWIQSUIVPKELCMHMZLRDBWQVHAVSMRBYHJGYDNHETTFXFJZROZYNYFVJRJJEXCPNDSECFZASAYTKSOEGEZNQAORGDTELGGDYIGQICOJBOFIFMFWHAPPWQCYVI");

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
    msg.setTimeStamp(0.3636400506744498);
    msg.setSource(17611U);
    msg.setSourceEntity(84U);
    msg.setDestination(42259U);
    msg.setDestinationEntity(227U);
    msg.x = 0.06530997778964387;
    msg.y = 0.25082808198478024;
    msg.z = 0.6842335105317181;

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
    msg.setTimeStamp(0.2961802579825368);
    msg.setSource(3636U);
    msg.setSourceEntity(129U);
    msg.setDestination(32468U);
    msg.setDestinationEntity(49U);
    msg.x = 0.8846419354060583;
    msg.y = 0.3120223786415868;
    msg.z = 0.6844795361355578;

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
    msg.setTimeStamp(0.6547102216494889);
    msg.setSource(27255U);
    msg.setSourceEntity(129U);
    msg.setDestination(19048U);
    msg.setDestinationEntity(235U);
    msg.x = 0.6570544547118564;
    msg.y = 0.12287455850590545;
    msg.z = 0.9642785672268921;

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
    msg.setTimeStamp(0.5240966007717298);
    msg.setSource(17271U);
    msg.setSourceEntity(12U);
    msg.setDestination(40704U);
    msg.setDestinationEntity(164U);
    msg.timeout = 5810U;
    msg.lat = 0.33722312184071546;
    msg.lon = 0.7909303794562973;
    msg.z = 0.8312006824894418;
    msg.z_units = 6U;
    msg.amplitude = 0.8320451643414796;
    msg.pitch = 0.7408602422480952;
    msg.speed = 0.8022295880436362;
    msg.speed_units = 2U;
    msg.custom.assign("PMXLPMUJLOKOWPGCYUEAAASARKPJRVFERVECOZOQCOLISNCVWINBFXTMNQNWUQYSMKMIBQZHIIHJDSSPAKJFAPOHOREGABDHHQCXTMRKXIVIQTHMUCEYOFLONFZDEZTMCQJNFGINJDSDRGBZLGCYKIFVLPHUYXBWWLXIGVHBSRJY");

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
    msg.setTimeStamp(0.6961913159922444);
    msg.setSource(28068U);
    msg.setSourceEntity(233U);
    msg.setDestination(6746U);
    msg.setDestinationEntity(224U);
    msg.timeout = 20587U;
    msg.lat = 0.38151692728014897;
    msg.lon = 0.3483717961844697;
    msg.z = 0.478673668863869;
    msg.z_units = 72U;
    msg.amplitude = 0.15922688755386394;
    msg.pitch = 0.21960258044946368;
    msg.speed = 0.9926367550860414;
    msg.speed_units = 51U;
    msg.custom.assign("UBOILTSINERMWZRLZNJNGZMZVOKJAUHIVPIUTNQQBHACENYRZYHVEALYSREFOHMKMTPYDSDIDEQAFTVGCRLBCIDSVXCUN");

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
    msg.setTimeStamp(0.8267454971307635);
    msg.setSource(29846U);
    msg.setSourceEntity(224U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(151U);
    msg.timeout = 19847U;
    msg.lat = 0.6281166213096465;
    msg.lon = 0.39564337942999805;
    msg.z = 0.23472894708226832;
    msg.z_units = 15U;
    msg.amplitude = 0.2986806927409065;
    msg.pitch = 0.3930617471227128;
    msg.speed = 0.6828765012380569;
    msg.speed_units = 208U;
    msg.custom.assign("UBHYIDGJAWQAMZNTCOEHMBXJCZKHGURMEFDVDQXSUNKMLFHZSOEWKPLFZQGAQWESEPJOBYYMRZBGKJBSCJPDCPFUYGAZYIIXU");

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
    msg.setTimeStamp(0.8932649989566993);
    msg.setSource(20999U);
    msg.setSourceEntity(23U);
    msg.setDestination(48661U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.8483715256736915);
    msg.setSource(42380U);
    msg.setSourceEntity(162U);
    msg.setDestination(43984U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.7204420799302182);
    msg.setSource(54915U);
    msg.setSourceEntity(239U);
    msg.setDestination(45671U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.671037404898272);
    msg.setSource(57603U);
    msg.setSourceEntity(117U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.819276559115026;
    msg.lon = 0.5499190069436748;
    msg.z = 0.674193811109023;
    msg.z_units = 98U;
    msg.radius = 0.14666127689410813;
    msg.duration = 56674U;
    msg.speed = 0.8340751388874084;
    msg.speed_units = 197U;
    msg.custom.assign("DAJRJVYIPRHUKNVQUMAJCQTGHICPXUALTELBANDJKXAWBDYQFYHRRIWRXZITDZCFEZVFTQAXVBUGYZGENURJEKFSXJTSQVFOHCSAWJSGEXPYLWIBFXZPGVQKWMOYCDIJWSHGTWOHMHAVKOOLBTZXQHBJWNPGHSDBSIWCNFTRNTUQJPVYLPVPOCMQOSHZKSZZLMVXAKUIIKWFLY");

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
    msg.setTimeStamp(0.30390929365692887);
    msg.setSource(45141U);
    msg.setSourceEntity(192U);
    msg.setDestination(26363U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.501414674187624;
    msg.lon = 0.26428503016488347;
    msg.z = 0.8422834052270155;
    msg.z_units = 198U;
    msg.radius = 0.7692934836949716;
    msg.duration = 11451U;
    msg.speed = 0.6984867631940131;
    msg.speed_units = 67U;
    msg.custom.assign("XUZKSWODCINNYSYKWLRPIIMHENYVGWECTMGQZUCXULMCABNDAUCVDGIIHFQENRVWWBEZRCMUGGNWTHFUGYWWKYDPIPNMZWBDEVALPFBRUPPIYCTGQMBVJXLOZHJCQMGNDKVPZRBLQLBHOMDURMFOQNPOTOUANAYKUJFEXQAYZXPT");

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
    msg.setTimeStamp(0.23783663199670024);
    msg.setSource(34362U);
    msg.setSourceEntity(137U);
    msg.setDestination(29139U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.32618183464614303;
    msg.lon = 0.9649225439240345;
    msg.z = 0.604898848296113;
    msg.z_units = 249U;
    msg.radius = 0.7415885811004922;
    msg.duration = 35544U;
    msg.speed = 0.4270400597621644;
    msg.speed_units = 140U;
    msg.custom.assign("GPXHEGZNXXINOUWAGPVEWQCVZBMQZPISHHRTMVA");

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
    msg.setTimeStamp(0.11895493879181773);
    msg.setSource(34061U);
    msg.setSourceEntity(138U);
    msg.setDestination(2915U);
    msg.setDestinationEntity(125U);
    msg.timeout = 63455U;
    msg.flags = 132U;
    msg.lat = 0.4222151665683763;
    msg.lon = 0.8682699851099099;
    msg.start_z = 0.9647690622505636;
    msg.start_z_units = 88U;
    msg.end_z = 0.9924548127446552;
    msg.end_z_units = 189U;
    msg.radius = 0.9786513724081971;
    msg.speed = 0.40977585465844957;
    msg.speed_units = 233U;
    msg.custom.assign("NUWHVDCOXBQWEJDOYKEDRPWOIVSGYLSGZKTCVPJRATLIWTHAUJDSXVJLHHNCNHNEPQPQPZJMUALCEOHUMKJEMLKBGGSXIREIHKFQOMDJGEWMXGIQQ");

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
    msg.setTimeStamp(0.04291661586853479);
    msg.setSource(40017U);
    msg.setSourceEntity(84U);
    msg.setDestination(4389U);
    msg.setDestinationEntity(171U);
    msg.timeout = 38673U;
    msg.flags = 123U;
    msg.lat = 0.17523391850517367;
    msg.lon = 0.19383591775286368;
    msg.start_z = 0.19377839087018522;
    msg.start_z_units = 43U;
    msg.end_z = 0.6578576624630156;
    msg.end_z_units = 0U;
    msg.radius = 0.6882653460983061;
    msg.speed = 0.594917370884481;
    msg.speed_units = 146U;
    msg.custom.assign("JPNAZCNWRXDHHVDGRUXPICXPYMKNCEIKPKAHBTDZMAFDFFJQGXVKHLRPUFUATHJQUISRZVUOSZDNTMDJAAWIJGJQRSYOVXLYZBEREFTTSGVGYHXSEWGMALEMXNLUBQAGCKBKXSPVNHURNQYCVSUOZZQEMWQOJUTOCZUETTD");

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
    msg.setTimeStamp(0.2431300587849199);
    msg.setSource(45865U);
    msg.setSourceEntity(220U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(38U);
    msg.timeout = 28206U;
    msg.flags = 120U;
    msg.lat = 0.9183447023084251;
    msg.lon = 0.5753732190674632;
    msg.start_z = 0.5377782937696638;
    msg.start_z_units = 13U;
    msg.end_z = 0.546693938569437;
    msg.end_z_units = 145U;
    msg.radius = 0.23103038564460043;
    msg.speed = 0.41005779912018636;
    msg.speed_units = 137U;
    msg.custom.assign("XOEOWKPEYMXQQHLDPMVUYWDOOXHZDWHSABGBNCSIBPOJFABVFIPFKVJSZOWIBTFJQJPIZNZLAMMWUWGVQCAKUYDXUPNVYTCRYCSXTGMOASWTCFRAJJRJDIBMVQKGEESFZTGWZEQUCFNNCHRYCDBADJIQAGLRMSARDWZORKFMAZPGLLUEWHYFYXOKHXKLNJULHXU");

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
    msg.setTimeStamp(0.9158343044524333);
    msg.setSource(13256U);
    msg.setSourceEntity(106U);
    msg.setDestination(42326U);
    msg.setDestinationEntity(184U);
    msg.timeout = 25664U;
    msg.lat = 0.4536185961272313;
    msg.lon = 0.690476315515816;
    msg.z = 0.9968002440363329;
    msg.z_units = 137U;
    msg.speed = 0.27536820685249863;
    msg.speed_units = 53U;
    msg.custom.assign("RKUTKYKLLOJRLSATMFXBJDCKKEQTHABADMCPSTDVYEETCLVXJXWORLPCCDJHFOEHDQWJLNSQFSNMGMPYDYTKRRUZZMREITTXBYRZCEMQFOGNJZCNGIOSXBPVIQRBKFZJFPQPCGGTMXIHWNHSREZMPHXYSQPAJOMSXNBUUZOZUGWBIVWDTGQNNALVHXCWDSAWEOZYSUW");

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
    msg.setTimeStamp(0.35854390294155614);
    msg.setSource(5258U);
    msg.setSourceEntity(90U);
    msg.setDestination(50801U);
    msg.setDestinationEntity(101U);
    msg.timeout = 40446U;
    msg.lat = 0.18733761124809112;
    msg.lon = 0.6459051183140314;
    msg.z = 0.5517363714488216;
    msg.z_units = 9U;
    msg.speed = 0.6655334960140574;
    msg.speed_units = 132U;
    msg.custom.assign("KTJSIFCQCWEJMBLTPRRTOIMBDHOOXKHFCRBMJUOWLWZUUFVZJDPPIORDJIGLBFKXMHRCEKGUSXMURPLACBNSOGQPXJXBVDWAZPOUWJXYXKFZGTVYQMDYQZZRKSDNNGKFHEWHKQYSGHATGVTXFUQHAWNIDCTNNDKXEEOFOZWFUTHJSUYNQGMDEHJVCVQYLGFRAPJPRGYTATCYISILERBZAEALIAAWZVNIYLHEDYOLSSB");

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
    msg.setTimeStamp(0.9727498973958089);
    msg.setSource(37002U);
    msg.setSourceEntity(9U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(207U);
    msg.timeout = 56382U;
    msg.lat = 0.48069480631547146;
    msg.lon = 0.7193054651509526;
    msg.z = 0.9228887313617264;
    msg.z_units = 71U;
    msg.speed = 0.9848647510127745;
    msg.speed_units = 53U;
    msg.custom.assign("HBANIINQAGLRYDJOSZYHKPWFFRHHFDYJVJBWYIHTUMVWZABKNREER");

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
    msg.setTimeStamp(0.18769412824702814);
    msg.setSource(54988U);
    msg.setSourceEntity(69U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(208U);
    msg.x = 0.9068398821771522;
    msg.y = 0.6172446599928472;
    msg.z = 0.2654238788457153;
    msg.t = 0.9394499793707946;

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
    msg.setTimeStamp(0.7234276531075233);
    msg.setSource(4799U);
    msg.setSourceEntity(244U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(110U);
    msg.x = 0.08481158974863201;
    msg.y = 0.5081748968695043;
    msg.z = 0.07782955574433226;
    msg.t = 5.883216911117817e-05;

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
    msg.setTimeStamp(0.9106164479637067);
    msg.setSource(32675U);
    msg.setSourceEntity(48U);
    msg.setDestination(49963U);
    msg.setDestinationEntity(151U);
    msg.x = 0.2642447193437746;
    msg.y = 0.6264006311182736;
    msg.z = 0.05392066968026443;
    msg.t = 0.22789158701210077;

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
    msg.setTimeStamp(0.2467949824216613);
    msg.setSource(32525U);
    msg.setSourceEntity(245U);
    msg.setDestination(12884U);
    msg.setDestinationEntity(185U);
    msg.timeout = 5066U;
    msg.name.assign("HDMOKZYMKTVSGWOONELZJHUXRHIBZFAYRVIATLSUONZASEEIVEXUYWCHRQHBLZCYTGWOUGJRPDSJCKQTXBKSLJULAEYVVNXGZWKYNIQMGIFJXFBKBKTYQQMSMCRSMVDTUJAQCLEMZDRVZRAPVFNXOHUFEPMUIDOICDLMNPAFAGLPVBPRJPTJWXBHN");
    msg.custom.assign("VPWRCEELJTIVZFZTKBXVZ");

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
    msg.setTimeStamp(0.022542780767087267);
    msg.setSource(13321U);
    msg.setSourceEntity(185U);
    msg.setDestination(11335U);
    msg.setDestinationEntity(129U);
    msg.timeout = 15572U;
    msg.name.assign("BMOKOFWKTNXNDTZBGWAQUMCJCSTOMPPVJRNGBUDJ");
    msg.custom.assign("HFVHZSJJNMNSPNDUNGGZLDYHMENEAOSYRURDAULMDQYGRTAKQWWIOAAPWCFLDBJHRTTJRXDTDXBJK");

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
    msg.setTimeStamp(0.7875808357675049);
    msg.setSource(54705U);
    msg.setSourceEntity(214U);
    msg.setDestination(20216U);
    msg.setDestinationEntity(75U);
    msg.timeout = 14792U;
    msg.name.assign("LABRSHEUPOEXPPADYGAPMZWHUTRJXIKIZTQRNHHISMNHRBYKOROEVQTBUOCUIRDAZPKD");
    msg.custom.assign("PIMVRAVWIJDZSUARZTSWGMYBRPKHCFHBVGXKEATYVWCSELEXHLZPPVDYHCJEPZYIHNZJXHOQURQYFETWEYNZNLALYFTUIIDKCSDBKCNDBUKMBZAGLYLFACOUFETOIJAQKTHFPRGJXGSPVOPZWJMMLZCUUNPGJWRFOJAMUXIQWNIVBIDJMSQLKLOIKQNHXCDEHCWQWVDQBARGSOOGRMOQMQVVWXNTYUDNEGFXRDSHSFOTCBTNBPSRZXTAFLK");

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
    msg.setTimeStamp(0.6881274925034936);
    msg.setSource(452U);
    msg.setSourceEntity(233U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.8472053277969029;
    msg.lon = 0.696810792903836;
    msg.z = 0.6107326816921222;
    msg.z_units = 158U;
    msg.speed = 0.3838596337156589;
    msg.speed_units = 60U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5434917393706953;
    tmp_msg_0.y = 0.10644200822972338;
    tmp_msg_0.z = 0.21011693310085655;
    tmp_msg_0.t = 0.7395636009277942;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 42294U;
    tmp_msg_1.off_x = 0.873991166912896;
    tmp_msg_1.off_y = 0.4921676487407445;
    tmp_msg_1.off_z = 0.437685625106801;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.176378535301834;
    msg.custom.assign("JSECLLXLNRIMVBUANDNGXULEJRQRVIDBIMRZQRJFRTDUPTPFXTDFXOYWADVJMMBMXYHWMTS");

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
    msg.setTimeStamp(0.15382596144849814);
    msg.setSource(39275U);
    msg.setSourceEntity(8U);
    msg.setDestination(28878U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.7624761892618193;
    msg.lon = 0.8516584084573076;
    msg.z = 0.6678878131066727;
    msg.z_units = 122U;
    msg.speed = 0.6156543842754134;
    msg.speed_units = 12U;
    msg.start_time = 0.3465854719720115;
    msg.custom.assign("YBCITYRPRQNACVDRVUUKMNCYAURVODJJZPSLQEOHWUKNWHNMVRYXGGWWOIAFYFZZHXZOJYPJYNILAQVBLFHOKGEZYQQZIKUAHLAULASXENFKMNVMSWQX");

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
    msg.setTimeStamp(0.06630867742590385);
    msg.setSource(20733U);
    msg.setSourceEntity(73U);
    msg.setDestination(17938U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.4444356173951778;
    msg.lon = 0.030926397257682647;
    msg.z = 0.1486400489050983;
    msg.z_units = 252U;
    msg.speed = 0.3589800488908216;
    msg.speed_units = 90U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.08955917530079616;
    tmp_msg_0.y = 0.2458903376041084;
    tmp_msg_0.z = 0.07832638479627063;
    tmp_msg_0.t = 0.6713624066973543;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.033320051507869874;
    msg.custom.assign("YZNMSWIBSXOKGQVMKCWYKOCAOQIQNBSSLGAKCYBFVKBLGUJTSDQKDZCYPJPSUXLXADDAMVCKUNMRZEHTHEUTDPPVLEJ");

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
    msg.setTimeStamp(0.05803681511699943);
    msg.setSource(58706U);
    msg.setSourceEntity(150U);
    msg.setDestination(45173U);
    msg.setDestinationEntity(223U);
    msg.vid = 62227U;
    msg.off_x = 0.5747777837374833;
    msg.off_y = 0.31226604345281384;
    msg.off_z = 0.43166946042454435;

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
    msg.setTimeStamp(0.9279586924788127);
    msg.setSource(21519U);
    msg.setSourceEntity(120U);
    msg.setDestination(20047U);
    msg.setDestinationEntity(31U);
    msg.vid = 53762U;
    msg.off_x = 0.36130407084560845;
    msg.off_y = 0.44301617463361265;
    msg.off_z = 0.5848213841909538;

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
    msg.setTimeStamp(0.9150264621473386);
    msg.setSource(57210U);
    msg.setSourceEntity(37U);
    msg.setDestination(21423U);
    msg.setDestinationEntity(246U);
    msg.vid = 48825U;
    msg.off_x = 0.17134034246943652;
    msg.off_y = 0.061707020030936977;
    msg.off_z = 0.4879211747841492;

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
    msg.setTimeStamp(0.8539176925712371);
    msg.setSource(35932U);
    msg.setSourceEntity(238U);
    msg.setDestination(20787U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.5556861061973849);
    msg.setSource(24649U);
    msg.setSourceEntity(133U);
    msg.setDestination(41691U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.2902340321564032);
    msg.setSource(48857U);
    msg.setSourceEntity(241U);
    msg.setDestination(5784U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.9223314882668371);
    msg.setSource(65407U);
    msg.setSourceEntity(20U);
    msg.setDestination(5447U);
    msg.setDestinationEntity(217U);
    msg.mid = 15050U;

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
    msg.setTimeStamp(0.002769732945745229);
    msg.setSource(28950U);
    msg.setSourceEntity(44U);
    msg.setDestination(3392U);
    msg.setDestinationEntity(104U);
    msg.mid = 29383U;

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
    msg.setTimeStamp(0.06282074173915964);
    msg.setSource(13285U);
    msg.setSourceEntity(69U);
    msg.setDestination(34521U);
    msg.setDestinationEntity(173U);
    msg.mid = 4506U;

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
    msg.setTimeStamp(0.27851662236332675);
    msg.setSource(35094U);
    msg.setSourceEntity(156U);
    msg.setDestination(60802U);
    msg.setDestinationEntity(191U);
    msg.state = 171U;
    msg.eta = 22205U;
    msg.info.assign("PLYABJAZQEWVHTCCJNESGXVHVBAFYVIVIUZOCGVCRQBIOOQONBSEVFXXCLMUTKBTTSHMFRXWPXUSJGUDLLITYAKMRXOYSGJPKRUEDHMWRB");

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
    msg.setTimeStamp(0.14643880732652548);
    msg.setSource(65522U);
    msg.setSourceEntity(75U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(6U);
    msg.state = 154U;
    msg.eta = 35473U;
    msg.info.assign("TFQULOVWMMYJFXPRZWZMSUNBGMXYHXZELTATEYJSMQVNJNLADHANWPJNGPSIKFXTHGKH");

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
    msg.setTimeStamp(0.7505548947237708);
    msg.setSource(25822U);
    msg.setSourceEntity(39U);
    msg.setDestination(23112U);
    msg.setDestinationEntity(89U);
    msg.state = 194U;
    msg.eta = 42413U;
    msg.info.assign("XBOWNACBGJWITARZQKKWUYPILRCMXXFREASONBADVHFIQHKUOBXGNHSKMVNQPLDMEZFQBJJVRLLNQOWREIVVRPW");

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
    msg.setTimeStamp(0.504771198787224);
    msg.setSource(34237U);
    msg.setSourceEntity(198U);
    msg.setDestination(30982U);
    msg.setDestinationEntity(193U);
    msg.system = 30914U;
    msg.duration = 45338U;
    msg.speed = 0.8142442497997299;
    msg.speed_units = 190U;
    msg.x = 0.6410766517538001;
    msg.y = 0.49149693722142895;
    msg.z = 0.3045546327473071;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.7426030035873438);
    msg.setSource(64988U);
    msg.setSourceEntity(174U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(94U);
    msg.system = 26877U;
    msg.duration = 36128U;
    msg.speed = 0.5263204857187187;
    msg.speed_units = 141U;
    msg.x = 0.3280141805915232;
    msg.y = 0.8212971153323405;
    msg.z = 0.8334562706203191;
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
    msg.setTimeStamp(0.1393996868601144);
    msg.setSource(16264U);
    msg.setSourceEntity(54U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(160U);
    msg.system = 17826U;
    msg.duration = 63411U;
    msg.speed = 0.8304138086084472;
    msg.speed_units = 169U;
    msg.x = 0.3298698481317286;
    msg.y = 0.12953072995747528;
    msg.z = 0.33441704155403473;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.5674770457154036);
    msg.setSource(62273U);
    msg.setSourceEntity(78U);
    msg.setDestination(23328U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.5642960250270959;
    msg.lon = 0.8002119904316901;
    msg.speed = 0.33331476929438475;
    msg.speed_units = 181U;
    msg.duration = 17653U;
    msg.sys_a = 23968U;
    msg.sys_b = 46942U;
    msg.move_threshold = 0.13031116277815036;

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
    msg.setTimeStamp(0.6704889525798768);
    msg.setSource(28699U);
    msg.setSourceEntity(229U);
    msg.setDestination(58982U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.43105150623165456;
    msg.lon = 0.32804801040176756;
    msg.speed = 0.24992056577206634;
    msg.speed_units = 22U;
    msg.duration = 62939U;
    msg.sys_a = 60896U;
    msg.sys_b = 26506U;
    msg.move_threshold = 0.3981236370527699;

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
    msg.setTimeStamp(0.2736889962498471);
    msg.setSource(4557U);
    msg.setSourceEntity(125U);
    msg.setDestination(30692U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.6991910172553337;
    msg.lon = 0.714688204029777;
    msg.speed = 0.18010513579388132;
    msg.speed_units = 227U;
    msg.duration = 38178U;
    msg.sys_a = 56402U;
    msg.sys_b = 38842U;
    msg.move_threshold = 0.43249663801878935;

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
    msg.setTimeStamp(0.007685066562963971);
    msg.setSource(15488U);
    msg.setSourceEntity(101U);
    msg.setDestination(46675U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.42385552248033553;
    msg.lon = 0.7422656699866499;
    msg.z = 0.7910202300052986;
    msg.z_units = 205U;
    msg.speed = 0.5681910761015053;
    msg.speed_units = 128U;
    msg.custom.assign("WYJHNQJEVZEFCRHPTXKMDOYQYTGCCMAVHNANYPTMXLZEFZLBOFTBOXNUVRLOGYSZBTAIOTLKRJCMDJVFPKUPPXMOHOUOUCIKXSISKJDBNTAWWSGBKNYZVWBVRMYAQAEPYUVYKEHDEXFRIZHIFSBVJ");

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
    msg.setTimeStamp(0.04885255857712345);
    msg.setSource(53123U);
    msg.setSourceEntity(190U);
    msg.setDestination(45675U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.3121792395177406;
    msg.lon = 0.6397912926355817;
    msg.z = 0.20061981651128158;
    msg.z_units = 213U;
    msg.speed = 0.7709430775799399;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.14086630600968653;
    tmp_msg_0.lon = 0.8257053217224273;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ATTVGKUQPSGLJQAFTOUEJUDZWYLHBLMAJAZXZHSSJYDCOIVZGEFEFCWICNVDENKYPIFOZSCXWHNYGCARFQBKEVWRMOEMSNQKYQYRGQBJBLPZECATFVDPIQXJGPRMTHIWFSTXFNLODXMKDHMYRNXMOWOHW");

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
    msg.setTimeStamp(0.18365738448249502);
    msg.setSource(63679U);
    msg.setSourceEntity(149U);
    msg.setDestination(49868U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.26036757618219186;
    msg.lon = 0.5410507916340492;
    msg.z = 0.9329702027930168;
    msg.z_units = 22U;
    msg.speed = 0.9620209843100612;
    msg.speed_units = 222U;
    msg.custom.assign("TJAULGAZKPXJJTKADFFHCXTVFDHGUC");

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
    msg.setTimeStamp(0.7580082921123142);
    msg.setSource(35577U);
    msg.setSourceEntity(188U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.19917775722601572;
    msg.lon = 0.8846562275525798;

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
    msg.setTimeStamp(0.5338315517570658);
    msg.setSource(34910U);
    msg.setSourceEntity(131U);
    msg.setDestination(10825U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.0903187866737658;
    msg.lon = 0.6550646059203474;

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
    msg.setTimeStamp(0.2965125286595309);
    msg.setSource(22005U);
    msg.setSourceEntity(221U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.8481312982375144;
    msg.lon = 0.6689707491874125;

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
    msg.setTimeStamp(0.7902853231134698);
    msg.setSource(54197U);
    msg.setSourceEntity(136U);
    msg.setDestination(9U);
    msg.setDestinationEntity(6U);
    msg.timeout = 51128U;
    msg.lat = 0.32503357021385926;
    msg.lon = 0.35673335521620697;
    msg.z = 0.36670772471677104;
    msg.z_units = 54U;
    msg.pitch = 0.9124395806629191;
    msg.amplitude = 0.4656242901436888;
    msg.duration = 56512U;
    msg.speed = 0.20790612432064937;
    msg.speed_units = 225U;
    msg.radius = 0.7847098929863546;
    msg.direction = 238U;
    msg.custom.assign("AVLAVBTWRQEOIMOSKLCJZLYXIONUHXLOWFIEHEVTKOIEGGNO");

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
    msg.setTimeStamp(0.2856611152561037);
    msg.setSource(48999U);
    msg.setSourceEntity(147U);
    msg.setDestination(38403U);
    msg.setDestinationEntity(137U);
    msg.timeout = 55561U;
    msg.lat = 0.4270611357628721;
    msg.lon = 0.9411411910844525;
    msg.z = 0.38551614012981483;
    msg.z_units = 69U;
    msg.pitch = 0.8026747366193954;
    msg.amplitude = 0.6091321342620576;
    msg.duration = 24205U;
    msg.speed = 0.5474027696475824;
    msg.speed_units = 135U;
    msg.radius = 0.7785612430536091;
    msg.direction = 106U;
    msg.custom.assign("VONDSBIHAPWVSZHLJCMMIXEMLMNZDPCXRQFOGLNKOYTVLFXZDFTGHDYFFBAHXOVXOQJRWNZTAREJIIJGRWDHFOEVBJUPUMVGGKOWVSKCLXSSGNFNTRQPDNUKCHSAYSCEABPYCPVWLQEOAAHQQBJBXNYWYXLQUEZBRCIMAMKIKJSXBOTDBBKRZCGUIFTIIEQNUCUKPJHZWWAY");

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
    msg.setTimeStamp(0.018295161293566342);
    msg.setSource(29988U);
    msg.setSourceEntity(138U);
    msg.setDestination(64818U);
    msg.setDestinationEntity(141U);
    msg.timeout = 13649U;
    msg.lat = 0.918920856286334;
    msg.lon = 0.7715864670997189;
    msg.z = 0.33769111382140593;
    msg.z_units = 135U;
    msg.pitch = 0.3729377046881823;
    msg.amplitude = 0.18863708338996088;
    msg.duration = 14417U;
    msg.speed = 0.2590159958480648;
    msg.speed_units = 101U;
    msg.radius = 0.9870851391280829;
    msg.direction = 59U;
    msg.custom.assign("EDEVJJRLKHNNPJVTRUMMSKKTZSDQLHIGVAVWWWVDAUBGXRAYGFODTLYOCACSAETWOEDTLCSMXDIXPSLYFBQVOFPWKFQNOQLGMRNZCGWUYQMUPRHUHFDXFXAIOTZWHZNALBPZQFVGEPNJPAEUQBGESJUMASRILGOZDHVJXLJIVFKZBJTYUNUNOQONLWXFRTZXPXHCKKPEKIEIYYQSMDFJMBNMZHTWHIRXDE");

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
    msg.setTimeStamp(0.6854107703046911);
    msg.setSource(44963U);
    msg.setSourceEntity(177U);
    msg.setDestination(45274U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("NVCODWKZIWIHQSXJPTBBSQMSSZPBAGFVGDJLJKSBFTROICMHXGLZDAVSZWSDTFQDDIBZZFXCOCCMXZC");
    msg.reference_frame = 98U;
    msg.custom.assign("COMQJRZDXPTNBFGOYFIDRRHWROUMAQPHKRGKJXZEPGYTJEEYDQTZADFLSMSWIDSOIZCDEIFZOWGPEPYSOHNBFRAUXQTGVNRBJINMXLOUXDPNVNCSNJWZE");

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
    msg.setTimeStamp(0.5970971485289598);
    msg.setSource(22546U);
    msg.setSourceEntity(252U);
    msg.setDestination(33381U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("ZWOWVMLNPTKOKBALBHEHEUE");
    msg.reference_frame = 221U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10112U;
    tmp_msg_0.off_x = 0.22201543810079694;
    tmp_msg_0.off_y = 0.03352525305758325;
    tmp_msg_0.off_z = 0.5686317327898346;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ARQTYUUXXYOFIBUGLMUCPVMYVOMDGGIETJQRJWKEATRDUMIMQZBSXLCIPOTSNXXONCAZPJFCEXNBKFVIWPVVUCZFLWTVBOKYXDFESWOSGGNDJQFSQTMTRKELILHRZAVHGBKUXQHPIBJIHJEDMVGQUKFTRYOIFYHBDPCDVFASAQJVEZJLJDPCGTPYKEWWRFBNKOMCWYQORLWMKEAESOKHSPBHDZMNCGPHXC");

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
    msg.setTimeStamp(0.802279520566389);
    msg.setSource(49463U);
    msg.setSourceEntity(16U);
    msg.setDestination(5026U);
    msg.setDestinationEntity(176U);
    msg.formation_name.assign("WWGYXQGEMZHPLQDTLBYEOWDCIQOVHSRPVLKGLTRPRDNIQUUHE");
    msg.reference_frame = 223U;
    msg.custom.assign("KLBWGDNKKRLTENEUICYJXEVFNALSWYRVXRDZDASQWKXNHZKLHWDXYVCQWCPLBISFOLHOATPSURDKHZSDMMWYMNQHQQIXDRY");

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
    msg.setTimeStamp(0.18432748243362862);
    msg.setSource(31436U);
    msg.setSourceEntity(62U);
    msg.setDestination(15558U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("EOBPDSRFPTHVRQKWCZWUQAAOHGNHHLCMIYVONCXNLCZQBATIFRSYVOLBEPGTZGGMMJSSHBQBJEFPMMWUUOMPMLWGDQIPUFRYULSAWKIEKIFKIFVKKSDDXUZHCWPASVCNPOSXXBJXGUQHPDLBFFGQKHDGYLMKXVURMAZMVETSJXXZJJNZARNENWWAZ");
    msg.formation_name.assign("VXANWIAFNCCOOJZQPJUQQEMVTQDSITEIMRMHGJKIWQPYFGRMXAZEAAQTEZLETVKHDSKWGDVNOAHNBGMKJCKNZLVIXRJNXBTWVEDCGWDVFRZTJUNETUGERZMYB");
    msg.plan_id.assign("LHDCJSWUFTTQNPWGPNSOPOVMUJFIVSLCKSZVJVIBPOXHECIJRNWNPVANSFQFJOZSLZKXFATELSYPBSYXJRQQKEAUSKLFDGGBRRT");
    msg.description.assign("MTOOPLDIMHGDBWGFJYPYUIGRCRBWKGBIHMUSAUSJEJCBACCQXEDRHNWCTXRDOLGMFVYAQLAHEWFYVAMKSSQEXVCWYTZHNEIQMIRVLQVRWXSVAKBMBSKSJLWTFACPVGGLCPTYZEUC");
    msg.leader_speed = 0.7483403705263714;
    msg.leader_bank_lim = 0.1435936915144861;
    msg.pos_sim_err_lim = 0.973606475477997;
    msg.pos_sim_err_wrn = 0.3926053503037735;
    msg.pos_sim_err_timeout = 46914U;
    msg.converg_max = 0.8328634573297045;
    msg.converg_timeout = 22770U;
    msg.comms_timeout = 54799U;
    msg.turb_lim = 0.7212587087253851;
    msg.custom.assign("BOAXTSYRWXCLKQTXXCBCEIGTMSEXWCQQVWTLDSINQMMEDCGPRKYDOOQKFKPFLQE");

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
    msg.setTimeStamp(0.9621799393592819);
    msg.setSource(63997U);
    msg.setSourceEntity(57U);
    msg.setDestination(45232U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("HQCSKMDYSGKGLBRBJDYUFXIZPKHNEPKKOAAMXQJYVBDYGSSFROCMCLXDPWTADLHIVVMTAPCXQGQTINZCKUWGMRHABERVETAEJIZPWXLOCVNUMFKJUFHJZIEOFE");
    msg.formation_name.assign("RFBISCHULWSNWYDFZXOWVGGOQVQHPUPCTPYUQDXEPOMXYANCOAOMQFDASZEWAUOCLLXCZKWXFHCEBPZMTKTJPZORRVCKJSKXYKINEIQRHYDGQEDYPJPHUFQSGXBHHGOBJJDFJFLRNAUFIXFWSYEZAYMOWNIMMQLDIKTVITCRIVQEYRHWNUWVQHMXUETLITJSYGTMRZTSVEMLGTLCCHLGGNABNBZNULSJIMPNSOUBJKRBRPXBJGVKZKKAEDWBDF");
    msg.plan_id.assign("XIRMUQMSEFCVPYVJUZOOMFBAWJOBHCGLVPXHKCYKSRYJKHZZSDHLPUQEANLFIJPYVPOLAJGODTFIUYYJLNSZBECEEZRQCWGVNEGXQASRWAZECVBQVPCMTPZWWSPHGMXUGSVTIYFNDDTBILKLRYQMIDCA");
    msg.description.assign("LJSTLYNAVYBLWZTHUPPWSJIMIGSDVWKMDSBWCXHLTEBJKZUSLMGVQCRATKLXTESVQEPEKRYHNFACWGIDVFSGMOQIBBQUKDZOOSMIFRZCCOYBWRXZYEXXHQGTQOMRWKLXRDRPQBKI");
    msg.leader_speed = 0.6787791390643314;
    msg.leader_bank_lim = 0.3311881677533479;
    msg.pos_sim_err_lim = 0.19819383875571728;
    msg.pos_sim_err_wrn = 0.04522406256144562;
    msg.pos_sim_err_timeout = 55267U;
    msg.converg_max = 0.532562971361428;
    msg.converg_timeout = 1336U;
    msg.comms_timeout = 22893U;
    msg.turb_lim = 0.13510881103526284;
    msg.custom.assign("LPAFOWYESIJMCKICQXWMDAVMDCBZIZTKLMMLQFIPPZVABJTQPUFLHPBFGUVAOJPEKQVYDONHBXGDMHEHYAKNGUSNBXWXEHRXWOMNECTSIDHEXAFXWSYQWDSQGVROINLYKJNZSSRGZZORICUZTGPJEZWQGAARQLDDUZBSHYOAUJEFIMGI");

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
    msg.setTimeStamp(0.2504298088265474);
    msg.setSource(17675U);
    msg.setSourceEntity(72U);
    msg.setDestination(905U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("XHWUTLEPLPNGFDQNWOQYAHBJCJWBKYNWAYOSOCRLSQIYMNWXNSVZUOUQTGPPRVCHSKWMJQXIPJFAEMAEYDAJBHXGINDFZOJNDZTWFGEKKJHZCMQMONTDJGITGGSXTOSKFZDY");
    msg.formation_name.assign("LKWWKAVGBTVAQIMECVNFXYWRZJGJFMRAIMLQEUFAVLJKFUK");
    msg.plan_id.assign("EEMJCINRNLYTMYQTFLPHRSABISAHWNPVJXASZWMGXKFANSXR");
    msg.description.assign("ARJRIULZMDSVVACXJNEGQTTMTTKJIBKOBXDLBYBQMSWOFJXVWCNCNUGVWEBFYYYKYHRMUFHZRVKKBPXTICRQSMCAVRJYRPKKJTZXOFEBQHENECGVNPNETTJUJFDIZDODDSTBDPOLUFLCEPIAYYCDDIQAURXQMPPRGSSZTFEFKNPCWJSBXJHIAMZOGLLHUXWAGQEWIGIBGAXZLAA");
    msg.leader_speed = 0.3165838092556472;
    msg.leader_bank_lim = 0.600439417232387;
    msg.pos_sim_err_lim = 0.605487185851055;
    msg.pos_sim_err_wrn = 0.3507130973708017;
    msg.pos_sim_err_timeout = 61732U;
    msg.converg_max = 0.31046529917026644;
    msg.converg_timeout = 30823U;
    msg.comms_timeout = 62282U;
    msg.turb_lim = 0.7938413022398837;
    msg.custom.assign("CEBANPSTTGFMQRVXALMUEEPAWZUQAVDINRGSEYGLDEJRMCKBWOJWGBFQINEFMGZTRUSEUKVIEPULMFIPXGNEXAZJXHCKTASRHHHQLBQWKOTHZJFSTYLICUPDIHIXLVVONZKTYSEAQQSXZXMPXMBCRQPCUGIWKKVYCJJZOFDUZRGNCYUMCQOYLFIJAIGSPWQRMHYSJLLOBAVWADOTDYYWVDURRGNDNJZJHNKZOBOFWNHKKFFPBXBDL");

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
    msg.setTimeStamp(0.7081224623507983);
    msg.setSource(1073U);
    msg.setSourceEntity(149U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(90U);
    msg.control_src = 36658U;
    msg.control_ent = 222U;
    msg.timeout = 0.35944172374322025;
    msg.loiter_radius = 0.6460303270816515;
    msg.altitude_interval = 0.008722076385701327;

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
    msg.setTimeStamp(0.042376662288390654);
    msg.setSource(49263U);
    msg.setSourceEntity(159U);
    msg.setDestination(26584U);
    msg.setDestinationEntity(11U);
    msg.control_src = 20325U;
    msg.control_ent = 71U;
    msg.timeout = 0.0671934086513225;
    msg.loiter_radius = 0.5415691157721823;
    msg.altitude_interval = 0.6070195488937605;

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
    msg.setTimeStamp(0.964910088086553);
    msg.setSource(39608U);
    msg.setSourceEntity(154U);
    msg.setDestination(55702U);
    msg.setDestinationEntity(221U);
    msg.control_src = 4675U;
    msg.control_ent = 203U;
    msg.timeout = 0.18868985297504715;
    msg.loiter_radius = 0.5196103045485618;
    msg.altitude_interval = 0.4228568264884085;

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
    msg.setTimeStamp(0.10682232487508081);
    msg.setSource(64166U);
    msg.setSourceEntity(193U);
    msg.setDestination(64168U);
    msg.setDestinationEntity(206U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7807347387373575;
    tmp_msg_0.speed_units = 112U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07596825176882427;
    tmp_msg_1.z_units = 131U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8642079805937882;
    msg.lon = 0.5066839441224876;
    msg.radius = 0.2644032318936764;

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
    msg.setTimeStamp(0.8821600395193286);
    msg.setSource(49451U);
    msg.setSourceEntity(135U);
    msg.setDestination(44763U);
    msg.setDestinationEntity(12U);
    msg.flags = 94U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7004891584598334;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8589361761339681;
    tmp_msg_1.z_units = 59U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4146395088590952;
    msg.lon = 0.8332739673820846;
    msg.radius = 0.07703831014945672;

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
    msg.setTimeStamp(0.8769052663880852);
    msg.setSource(27562U);
    msg.setSourceEntity(246U);
    msg.setDestination(6048U);
    msg.setDestinationEntity(144U);
    msg.flags = 168U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.975264011698254;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.011026738558855942;
    tmp_msg_1.z_units = 225U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.727598795120634;
    msg.lon = 0.6335294624695329;
    msg.radius = 0.4734485954067368;

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
    msg.setTimeStamp(0.6400536806032537);
    msg.setSource(52545U);
    msg.setSourceEntity(182U);
    msg.setDestination(56017U);
    msg.setDestinationEntity(220U);
    msg.control_src = 52839U;
    msg.control_ent = 76U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 29U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4089410398070007;
    tmp_tmp_msg_0_0.speed_units = 104U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5000153909641926;
    tmp_tmp_msg_0_1.z_units = 140U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9000846759266831;
    tmp_msg_0.lon = 0.6050794074774581;
    tmp_msg_0.radius = 0.652325171465881;
    msg.reference.set(tmp_msg_0);
    msg.state = 202U;
    msg.proximity = 154U;

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
    msg.setTimeStamp(0.7875830995621064);
    msg.setSource(52335U);
    msg.setSourceEntity(59U);
    msg.setDestination(30708U);
    msg.setDestinationEntity(195U);
    msg.control_src = 48481U;
    msg.control_ent = 119U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 137U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13948992042231112;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0824841496645139;
    tmp_tmp_msg_0_1.z_units = 181U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2339313370531001;
    tmp_msg_0.lon = 0.62052422483044;
    tmp_msg_0.radius = 0.8724953597942853;
    msg.reference.set(tmp_msg_0);
    msg.state = 155U;
    msg.proximity = 94U;

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
    msg.setTimeStamp(0.6292840802018119);
    msg.setSource(46664U);
    msg.setSourceEntity(116U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(223U);
    msg.control_src = 58388U;
    msg.control_ent = 253U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 77U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.16295832995305193;
    tmp_tmp_msg_0_0.speed_units = 223U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.03610931494291203;
    tmp_tmp_msg_0_1.z_units = 31U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.754395195040323;
    tmp_msg_0.lon = 0.499299240341875;
    tmp_msg_0.radius = 0.06646481153088313;
    msg.reference.set(tmp_msg_0);
    msg.state = 126U;
    msg.proximity = 144U;

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
    msg.setTimeStamp(0.09560245671159184);
    msg.setSource(38851U);
    msg.setSourceEntity(65U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(214U);
    msg.ax_cmd = 0.09431137681904389;
    msg.ay_cmd = 0.11135416782718888;
    msg.az_cmd = 0.9678364707852457;
    msg.ax_des = 0.23925414533216094;
    msg.ay_des = 0.39543496408761525;
    msg.az_des = 0.6203491904754249;
    msg.virt_err_x = 0.07778964392665932;
    msg.virt_err_y = 0.9406282158718817;
    msg.virt_err_z = 0.4127902365996946;
    msg.surf_fdbk_x = 0.549222326438801;
    msg.surf_fdbk_y = 0.787660905882906;
    msg.surf_fdbk_z = 0.0651394751908081;
    msg.surf_unkn_x = 0.8750305409152539;
    msg.surf_unkn_y = 0.6994420900180753;
    msg.surf_unkn_z = 0.820562954892846;
    msg.ss_x = 0.10302395843427303;
    msg.ss_y = 0.09530147034922065;
    msg.ss_z = 0.31095855748019874;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BRQXDPUUTSCYJNISNVFDOSJFWKYHPYWROBRECYTXZVHSYFJJIQEJAWBVAHGKVMCVSDZHEKSQOTBRXIEMNNAFBHMIXNHDMWMTSKWJULIAWRNXOYZNQVJMAEBWBJFLQLZATUSYVNZLZLBWCWEZIBMJDGXQCTKAQFRACQCFFTPDGPOLYMOZXRFHKGVEQDGDRTUAGGPPQHEENZEPVDITLGTNSRAPCORUOLIMVXXHL");
    tmp_msg_0.dist = 0.605790761795852;
    tmp_msg_0.err = 0.5862655172947364;
    tmp_msg_0.ctrl_imp = 0.8515527335867108;
    tmp_msg_0.rel_dir_x = 0.8285662438154435;
    tmp_msg_0.rel_dir_y = 0.9820519086491023;
    tmp_msg_0.rel_dir_z = 0.7686214199575162;
    tmp_msg_0.err_x = 0.10095537520883813;
    tmp_msg_0.err_y = 0.4868349197604883;
    tmp_msg_0.err_z = 0.5986336358167755;
    tmp_msg_0.rf_err_x = 0.590498937103202;
    tmp_msg_0.rf_err_y = 0.9713027903187313;
    tmp_msg_0.rf_err_z = 0.7079097632808555;
    tmp_msg_0.rf_err_vx = 0.2747096413290513;
    tmp_msg_0.rf_err_vy = 0.8912738585210025;
    tmp_msg_0.rf_err_vz = 0.3381353167726482;
    tmp_msg_0.ss_x = 0.7912061487846661;
    tmp_msg_0.ss_y = 0.30373732888713123;
    tmp_msg_0.ss_z = 0.17427948255784786;
    tmp_msg_0.virt_err_x = 0.6223331761568931;
    tmp_msg_0.virt_err_y = 0.4656438949797117;
    tmp_msg_0.virt_err_z = 0.7223985358390991;
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
    msg.setTimeStamp(0.5285865743421787);
    msg.setSource(8109U);
    msg.setSourceEntity(119U);
    msg.setDestination(21220U);
    msg.setDestinationEntity(98U);
    msg.ax_cmd = 0.9245948148619489;
    msg.ay_cmd = 0.34661601153197885;
    msg.az_cmd = 0.9697564771897452;
    msg.ax_des = 0.06270261250689246;
    msg.ay_des = 0.3623208715664419;
    msg.az_des = 0.45388333123957414;
    msg.virt_err_x = 0.6067555869204015;
    msg.virt_err_y = 0.05797676409609709;
    msg.virt_err_z = 0.5907998041032497;
    msg.surf_fdbk_x = 0.6444149042769791;
    msg.surf_fdbk_y = 0.6436917559689529;
    msg.surf_fdbk_z = 0.9508149170972268;
    msg.surf_unkn_x = 0.5007224352787476;
    msg.surf_unkn_y = 0.9755137467345485;
    msg.surf_unkn_z = 0.48218006113091816;
    msg.ss_x = 0.24019447126186388;
    msg.ss_y = 0.0801785982796086;
    msg.ss_z = 0.40031297937321064;

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
    msg.setTimeStamp(0.2763414007950632);
    msg.setSource(49175U);
    msg.setSourceEntity(87U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(252U);
    msg.ax_cmd = 0.36950123735242657;
    msg.ay_cmd = 0.10668836337167154;
    msg.az_cmd = 0.03538905988823193;
    msg.ax_des = 0.5016650250393043;
    msg.ay_des = 0.8062369961036092;
    msg.az_des = 0.5406730813635365;
    msg.virt_err_x = 0.08769065595316661;
    msg.virt_err_y = 0.7166654769529833;
    msg.virt_err_z = 0.2509347732897059;
    msg.surf_fdbk_x = 0.6848001866024869;
    msg.surf_fdbk_y = 0.8118402909543732;
    msg.surf_fdbk_z = 0.7778198996709387;
    msg.surf_unkn_x = 0.7013519878156141;
    msg.surf_unkn_y = 0.9797577836220507;
    msg.surf_unkn_z = 0.5930391074812753;
    msg.ss_x = 0.7903678449697514;
    msg.ss_y = 0.15288389806987757;
    msg.ss_z = 0.48413679695413214;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CPOGMYIQECPNGQAFLSPGBXZBTTDHQXFWVDXDRLXAJEEBZTVDNSTABIIVFAHEMPIQSAHHB");
    tmp_msg_0.dist = 0.36735895217422876;
    tmp_msg_0.err = 0.5818056110056471;
    tmp_msg_0.ctrl_imp = 0.3668325923156961;
    tmp_msg_0.rel_dir_x = 0.5814102150166267;
    tmp_msg_0.rel_dir_y = 0.49565120024214115;
    tmp_msg_0.rel_dir_z = 0.12304877718430385;
    tmp_msg_0.err_x = 0.0015853718910032732;
    tmp_msg_0.err_y = 0.7817842594649453;
    tmp_msg_0.err_z = 0.6746541227145797;
    tmp_msg_0.rf_err_x = 0.6859822936350478;
    tmp_msg_0.rf_err_y = 0.09697309381185826;
    tmp_msg_0.rf_err_z = 0.9406375545038315;
    tmp_msg_0.rf_err_vx = 0.45155789612040975;
    tmp_msg_0.rf_err_vy = 0.9385815838293821;
    tmp_msg_0.rf_err_vz = 0.018627951530190368;
    tmp_msg_0.ss_x = 0.354604589321334;
    tmp_msg_0.ss_y = 0.6412493764042728;
    tmp_msg_0.ss_z = 0.8440754724891417;
    tmp_msg_0.virt_err_x = 0.48706530207399557;
    tmp_msg_0.virt_err_y = 0.10903056196304972;
    tmp_msg_0.virt_err_z = 0.2570282843053381;
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
    msg.setTimeStamp(0.9715044808829266);
    msg.setSource(6384U);
    msg.setSourceEntity(89U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(63U);
    msg.s_id.assign("RCGTFUQCGNZZXBFDFPGDGOQOCETMRDOYEZEFTYIVDMATYIPMGDPJGKICKQFUXQOKMHASYNRXYJZABLXBVHNVBXKNHBCTXPAHVJSLQIPSPJFHHZEIIRSUTWAFUJTHWQR");
    msg.dist = 0.376967477137526;
    msg.err = 0.09171820775060324;
    msg.ctrl_imp = 0.7003519189560496;
    msg.rel_dir_x = 0.7391410680520372;
    msg.rel_dir_y = 0.16744915904057478;
    msg.rel_dir_z = 0.4822731580804428;
    msg.err_x = 0.7514617005770526;
    msg.err_y = 0.9040373201150719;
    msg.err_z = 0.958699714387445;
    msg.rf_err_x = 0.27005843492203274;
    msg.rf_err_y = 0.36973132994992486;
    msg.rf_err_z = 0.9897794454851883;
    msg.rf_err_vx = 0.9441008423441393;
    msg.rf_err_vy = 0.26196426836254283;
    msg.rf_err_vz = 0.06180481666717497;
    msg.ss_x = 0.7301446585873231;
    msg.ss_y = 0.8288768014559835;
    msg.ss_z = 0.16938218066265986;
    msg.virt_err_x = 0.4186539136584485;
    msg.virt_err_y = 0.8177753069308785;
    msg.virt_err_z = 0.45278491347894534;

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
    msg.setTimeStamp(0.8164077036575736);
    msg.setSource(59279U);
    msg.setSourceEntity(232U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(187U);
    msg.s_id.assign("JCRRVDUVEVLYTYWCYINBSSNIFQDJLMZVFNGG");
    msg.dist = 0.03926192377623228;
    msg.err = 0.5154475149719496;
    msg.ctrl_imp = 0.07317168220102666;
    msg.rel_dir_x = 0.7995030872725226;
    msg.rel_dir_y = 0.9317872679032544;
    msg.rel_dir_z = 0.6983353977638693;
    msg.err_x = 0.08706871254969217;
    msg.err_y = 0.44799142423626825;
    msg.err_z = 0.8393535846101688;
    msg.rf_err_x = 0.4694777939130046;
    msg.rf_err_y = 0.28500001805520747;
    msg.rf_err_z = 0.43747691876730843;
    msg.rf_err_vx = 0.7663979422740196;
    msg.rf_err_vy = 0.7910102415664931;
    msg.rf_err_vz = 0.18543557295434654;
    msg.ss_x = 0.16964214858950133;
    msg.ss_y = 0.9520356174757645;
    msg.ss_z = 0.7057984439258661;
    msg.virt_err_x = 0.15294631259372793;
    msg.virt_err_y = 0.48657940786450904;
    msg.virt_err_z = 0.46524245904447015;

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
    msg.setTimeStamp(0.4740124903010713);
    msg.setSource(53179U);
    msg.setSourceEntity(4U);
    msg.setDestination(3882U);
    msg.setDestinationEntity(21U);
    msg.s_id.assign("JTUKQITLDRSIXMMMZGLFPRVXFEEFAAVANOZFTSNMCHSXUVRZFAWGZEYJHBMLFLIQNJZETYAMLAZHWKJDYW");
    msg.dist = 0.698876395648737;
    msg.err = 0.24701784291067397;
    msg.ctrl_imp = 0.3210340877716067;
    msg.rel_dir_x = 0.052510580639464566;
    msg.rel_dir_y = 0.7703017366992629;
    msg.rel_dir_z = 0.6205963279551708;
    msg.err_x = 0.5417935397431509;
    msg.err_y = 0.6388777829375739;
    msg.err_z = 0.31557967378565177;
    msg.rf_err_x = 0.2664293350008631;
    msg.rf_err_y = 0.35249255971966964;
    msg.rf_err_z = 0.3277897234620505;
    msg.rf_err_vx = 0.5878383515130892;
    msg.rf_err_vy = 0.8989358998825264;
    msg.rf_err_vz = 0.8517391576187601;
    msg.ss_x = 0.5512357266042303;
    msg.ss_y = 0.7338511960260518;
    msg.ss_z = 0.7446745110404707;
    msg.virt_err_x = 0.6115443316349211;
    msg.virt_err_y = 0.10109271355136018;
    msg.virt_err_z = 0.8339432434046106;

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
    msg.setTimeStamp(0.911080364644331);
    msg.setSource(9535U);
    msg.setSourceEntity(109U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(40U);
    msg.timeout = 51614U;
    msg.rpm = 0.013786137809943644;
    msg.direction = 0U;
    msg.custom.assign("QAKPBPQMWLETGZHYEVSLROXTFYGORLJTABHNKXKHKVTFCYVGUQIPHBQBGYIJGFJVBNEMCIRLSJLE");

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
    msg.setTimeStamp(0.4876967030452868);
    msg.setSource(20464U);
    msg.setSourceEntity(251U);
    msg.setDestination(52221U);
    msg.setDestinationEntity(103U);
    msg.timeout = 21327U;
    msg.rpm = 0.8129332883557158;
    msg.direction = 160U;
    msg.custom.assign("NNSZSDNJERHANECDRVQUGJXMUVXUXHOFVAOBNPQTKXCVAZZCAWGLXZHWOTKKIBCPHCZQLDJFPBSCAGAUMSRGKBSSMBPOHDWWXEB");

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
    msg.setTimeStamp(0.5663248551899412);
    msg.setSource(29634U);
    msg.setSourceEntity(143U);
    msg.setDestination(39141U);
    msg.setDestinationEntity(114U);
    msg.timeout = 38596U;
    msg.rpm = 0.17240896507117842;
    msg.direction = 5U;
    msg.custom.assign("CZFOGUMTEPPZOZBCMSYSSDANRPDDHMUJNIQWIAAVPMOBKPRRTTGKNQRHBVE");

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
    msg.setTimeStamp(0.21698277767096297);
    msg.setSource(46893U);
    msg.setSourceEntity(192U);
    msg.setDestination(21594U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("OWQGDMCAJVJETVYSYPZLWRHKELPXBTADAGBYFRGUGOXKZHQFRWDWPSMEWEXEVRBUJWXDFQMHNYHJPKTBKMCYJXCAZVCRVJNPVKLSHQAGTLNLBVWWNJNXXAYSIGMVIULILMCEGORSLXDFKFQIHBYAFRNMSVGKJOQEWOENPHFMMBYHUZRUTZPOEQSMDURCUTK");
    msg.type = 149U;
    msg.op = 183U;
    msg.group_name.assign("UQQWOTQIHRYSJWNSVUCFTEKRNTVXSBQTQVTPXTPJSYWOHYCPEKBNBFAEDVTSNELBHYBUCRRAPIQRGLYHUKICGNJPEAMNJALNVAQFKRFYMFNBIVXVZWZDSYKZIQOM");
    msg.plan_id.assign("OUKOHHQNANWPPARAZHSWCHOMZYMCKDWOZZLHJOQDFCDXVYFVGHLIVGTEXJIKFDCBVBLAMQMFUKPQJSRJDGPKBWSTZQTRXWCVYF");
    msg.description.assign("YWIFHKDNYHCCMTQVJEVBTLFMUUZNFLL");
    msg.reference_frame = 49U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55966U;
    tmp_msg_0.off_x = 0.20676378146107643;
    tmp_msg_0.off_y = 0.7897688261835857;
    tmp_msg_0.off_z = 0.2007938796778468;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.1370413173169388;
    msg.leader_speed_min = 0.323373359208865;
    msg.leader_speed_max = 0.08741095309015734;
    msg.leader_alt_min = 0.6547776471447205;
    msg.leader_alt_max = 0.08287102198806817;
    msg.pos_sim_err_lim = 0.3448176508981625;
    msg.pos_sim_err_wrn = 0.6839719660688242;
    msg.pos_sim_err_timeout = 52255U;
    msg.converg_max = 0.678945578242583;
    msg.converg_timeout = 40350U;
    msg.comms_timeout = 30397U;
    msg.turb_lim = 0.9219801506687421;
    msg.custom.assign("BACZGCEEZXIXJYJMFSTGLJVVDBILUACRKZIWGWFXKXACAPYGLEFYYOSOUEJHHCGUBDGWZNLQBDPALDPWKXKDFZYAAGCBQEDSFYPTZIKMRZHHELTSKPLJFMFWFVQJKLTTWHMZOOPYZBXLIWTDUTIJWU");

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
    msg.setTimeStamp(0.7434570959303302);
    msg.setSource(19378U);
    msg.setSourceEntity(31U);
    msg.setDestination(35523U);
    msg.setDestinationEntity(162U);
    msg.formation_name.assign("GBWNDLXHRISUQXOIXPPCHEYAPJWOLCZPGFVLYOVAKKIDAJQCTWPUTJDVNVNMVHMNTQJKGOSEAEETMKFPCYOHFPATRPDRLJCUBXRBDOAAEHSITJICQYBUCOTGFPQTYGSDFHSVDYUHLSKWZINWNSFKBWWZUCACIQNIDEAUTMCSUNGXMLHXRZEQBLWEMKZGDIGJWMKRZTFVJGLKRZZBQXVGMMSQFWZENOBYIYFYALL");
    msg.type = 70U;
    msg.op = 205U;
    msg.group_name.assign("JGPPHOOMWIXDHGZDFRNKUMBICOBPNXYRQNFSJHWPATGZLBWVAASXAEB");
    msg.plan_id.assign("OUAELBHVXWDTFTEYWOHYQEFJUSGMURDJSQPWLNHDDIZXDUAOJDTMPSDRZENMMECUXZINOCZLPWOLTMXDFSWRZJDIVUGNRXANJOPLHABVMZMYTAICOB");
    msg.description.assign("ISORPKQZTKNUAEQLAFDMZTRFXNJJUFYCPGNVBEKXMUSEVCOQBGQPMTKHGOMIPFJGBYZZFLQPXROFIANKMHDWPVHEYCAAXIXRSNTNNKLNUJWATQNIRTSW");
    msg.reference_frame = 126U;
    msg.leader_bank_lim = 0.4649239209982883;
    msg.leader_speed_min = 0.7468499378105035;
    msg.leader_speed_max = 0.24002812003285812;
    msg.leader_alt_min = 0.14484186851892933;
    msg.leader_alt_max = 0.7684144677131484;
    msg.pos_sim_err_lim = 0.5803672970720182;
    msg.pos_sim_err_wrn = 0.013027109442057538;
    msg.pos_sim_err_timeout = 46027U;
    msg.converg_max = 0.9934836914923904;
    msg.converg_timeout = 25267U;
    msg.comms_timeout = 40263U;
    msg.turb_lim = 0.7058386909230303;
    msg.custom.assign("JTRNAAAQVHWPILYRUXKPYZLAMSRTKPNGEYKWTSODVZCJIMOXLBYNRWUOQZQSFTCBHJHPJXYJWOBRXO");

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
    msg.setTimeStamp(0.09549097106317184);
    msg.setSource(58726U);
    msg.setSourceEntity(49U);
    msg.setDestination(63954U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("JKWJISPUBRKAVTEVDVTIPUDWHKHRDETHOAUZUMMGIABIRCYXEYOBBQLXDFOXIFNPQHHJJUWWNQCGSLSVQSTGVDWCAYREKDXWNQZZCZBODCWATWEFSOCOWTNRNCHKUNCBDFESFSNIBFLKPALJTPDVUGFQCXKGFPBZLIXYZMVYQLPFNLTLETEORZRHKLJXGJUGOWRZHYRPMSIUBHAXULJZBAXJ");
    msg.type = 90U;
    msg.op = 217U;
    msg.group_name.assign("ZFHBNGEEHUQRZOOBCNSAAULEAOGHNIYPCPOQKDXFCZVWDIZTRMVLHWIDXHRBJBJUUQZGVUUITJBOHHCFOSPMDVXSMTKTWONEXCWJLNGAJVFJBKWSOIPWYXXFGSRWE");
    msg.plan_id.assign("KFCYIFJVJRGGXUDQBANNNBXZUGASEWXLLXSSSTFASOSBPZKWZPDWEYQKUVYPIKGILFIVEFSDRQWMJPCIRZTUKZEORGKHCWOIVUGRHDLTYHMBVHITTDXQQWHNSURZOCLRAEPBMAACRKRWTMNYNIAQZOVTZLHEBFTONXBUCNHHZVJUHYXLFGEEMDMLQCJVJCWPOBRJTYJEZDAGFPMXBDFAKKB");
    msg.description.assign("PVZIAESGMLQCGKLKHOZYQRWMLUQHHDWRGADELRXUKAKAJZVIWKNVXRFXJIPIGWZWSMFLPYHLATVRDQDCEXEAPWOZMEGUFGMKJTIZJZBBHIYOUFBZACPXZYOUNGYOQXFYOJNHNJVMWOKDKXNQUVMDUPBFCEPTJPUGCGUTVYTRSNAQIEMH");
    msg.reference_frame = 22U;
    msg.leader_bank_lim = 0.08596460346292412;
    msg.leader_speed_min = 0.8793053397561026;
    msg.leader_speed_max = 0.11836687352723008;
    msg.leader_alt_min = 0.5548677419760085;
    msg.leader_alt_max = 0.7704808988396759;
    msg.pos_sim_err_lim = 0.03962537541324873;
    msg.pos_sim_err_wrn = 0.4099184349664593;
    msg.pos_sim_err_timeout = 23787U;
    msg.converg_max = 0.9535555143435929;
    msg.converg_timeout = 12946U;
    msg.comms_timeout = 29508U;
    msg.turb_lim = 0.8445669932551931;
    msg.custom.assign("CUCGGXPOIXLBBYZPQNRDQFMUGGYMYCNV");

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
    msg.setTimeStamp(0.5517647630682431);
    msg.setSource(51796U);
    msg.setSourceEntity(188U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(73U);
    msg.timeout = 64668U;
    msg.lat = 0.9770983111214542;
    msg.lon = 0.43606764088121686;
    msg.z = 0.4776832431419683;
    msg.z_units = 92U;
    msg.speed = 0.20857403490940407;
    msg.speed_units = 200U;
    msg.custom.assign("XYABPDJGHEXCFQNDBKRUPQHOKAVMZERLYSJTLIAN");

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
    msg.setTimeStamp(0.27656241683208416);
    msg.setSource(21442U);
    msg.setSourceEntity(105U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(142U);
    msg.timeout = 23442U;
    msg.lat = 0.6261686270961188;
    msg.lon = 0.48869250265849395;
    msg.z = 0.16872807619320918;
    msg.z_units = 0U;
    msg.speed = 0.49417426042837476;
    msg.speed_units = 191U;
    msg.custom.assign("ZGHMFETCHCCNCUPINFIBUHBEHWTBULWNODWOYCQGXANTVGTCBFEPIZJKSEBFMVPHFCXKFRJKBKSGPYQLHXJUAMWWYAZXKDAVVYARBOANGMMGYVSUXOWBYSDTIJQZIARULUFKSOROSDRFRIN");

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
    msg.setTimeStamp(0.09612217657777422);
    msg.setSource(21522U);
    msg.setSourceEntity(201U);
    msg.setDestination(55617U);
    msg.setDestinationEntity(213U);
    msg.timeout = 2156U;
    msg.lat = 0.2881032790829986;
    msg.lon = 0.9842691378482082;
    msg.z = 0.7843792961668067;
    msg.z_units = 224U;
    msg.speed = 0.6756411368152405;
    msg.speed_units = 128U;
    msg.custom.assign("ZZNUMEIAGUV");

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
    msg.setTimeStamp(0.7936812212707985);
    msg.setSource(31021U);
    msg.setSourceEntity(6U);
    msg.setDestination(65130U);
    msg.setDestinationEntity(104U);
    msg.timeout = 58723U;
    msg.lat = 0.6148566366610367;
    msg.lon = 0.17325603546447133;
    msg.z = 0.39884272258983;
    msg.z_units = 254U;
    msg.speed = 0.5255200478794124;
    msg.speed_units = 223U;
    msg.custom.assign("DTSRMWDPFFMKCKRJMZVPNXOUBSBPZYYJGPPVZQTDCWWCIOYXIPOBLVANIZPQIJDAMLSYEXBEGYUVCGJEURBEYLSWECLSLYDVGQXARKBAAOJUECRMGHMVGRNCDYFMLZWOWCFVBOSRFXOAEHBQOJWKHUIKQCHKZFBUHVKVLTMJZNMNNGZXHEBPTKGASTDVQTMCNQRZFSIAXFHTROAYGUKJKLSSLQLWWZWFP");

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
    msg.setTimeStamp(0.5394738428825803);
    msg.setSource(59593U);
    msg.setSourceEntity(5U);
    msg.setDestination(26000U);
    msg.setDestinationEntity(97U);
    msg.timeout = 5638U;
    msg.lat = 0.6110930072141156;
    msg.lon = 0.6559849277295382;
    msg.z = 0.26115489296363104;
    msg.z_units = 47U;
    msg.speed = 0.04258983797717053;
    msg.speed_units = 196U;
    msg.custom.assign("UEWOSZNTGOESXLKBGUQAUPDYDHZFBMECMGRJJUULFYLXABTPBHAHVDWVXQFSEKQOOCXLSJFBAVMYMXHADVETIFXDZWHFHWKIZYVLJCZLCGLXQNZWAFYRPIVRBAECNRJNOHGSWJGGSRHBDPRANNNKUNTHVJZEQWMCQMQYBIIDQZYIKEVGGDOIJYKTUUKPORQTVELKANJYHZTYPKPORMZBMDPOSPQTGSFNUXOKXWIMTUWCFSIFWATCJ");

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
    msg.setTimeStamp(0.867522975381993);
    msg.setSource(39956U);
    msg.setSourceEntity(54U);
    msg.setDestination(35636U);
    msg.setDestinationEntity(74U);
    msg.timeout = 58131U;
    msg.lat = 0.7988596127975671;
    msg.lon = 0.3692865047586966;
    msg.z = 0.16990967960320336;
    msg.z_units = 54U;
    msg.speed = 0.49468909937582684;
    msg.speed_units = 48U;
    msg.custom.assign("MCSAYBSXUDKZBRNHPABUWBEZGFMMUGJFEPVUCMIJKNYBQJZTNKDOHSQLHBQSAELOXTRFVNNXSUIHJSXRKY");

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
    msg.setTimeStamp(0.8353149862312436);
    msg.setSource(24739U);
    msg.setSourceEntity(141U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(17U);
    msg.arrival_time = 0.5788210807623132;
    msg.lat = 0.44164441800006393;
    msg.lon = 0.658465876693045;
    msg.z = 0.7240007573546733;
    msg.z_units = 83U;
    msg.travel_z = 0.5942959155851991;
    msg.travel_z_units = 11U;
    msg.delayed = 123U;

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
    msg.setTimeStamp(0.6834133031484467);
    msg.setSource(64891U);
    msg.setSourceEntity(243U);
    msg.setDestination(56382U);
    msg.setDestinationEntity(140U);
    msg.arrival_time = 0.7674564050648087;
    msg.lat = 0.6782113307663099;
    msg.lon = 0.3399190337480962;
    msg.z = 0.6603966663532809;
    msg.z_units = 21U;
    msg.travel_z = 0.6067556960759444;
    msg.travel_z_units = 81U;
    msg.delayed = 163U;

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
    msg.setTimeStamp(0.4034334656647218);
    msg.setSource(49595U);
    msg.setSourceEntity(143U);
    msg.setDestination(23795U);
    msg.setDestinationEntity(21U);
    msg.arrival_time = 0.9220054010017581;
    msg.lat = 0.17530779533536356;
    msg.lon = 0.45985934554731867;
    msg.z = 0.45128470736578985;
    msg.z_units = 14U;
    msg.travel_z = 0.4935765527306235;
    msg.travel_z_units = 73U;
    msg.delayed = 39U;

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
    msg.setTimeStamp(0.8776079458088092);
    msg.setSource(28866U);
    msg.setSourceEntity(2U);
    msg.setDestination(1245U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.40762609795660987;
    msg.lon = 0.2522397001642075;
    msg.z = 0.42602880271737187;
    msg.z_units = 115U;
    msg.speed = 0.02058420272170658;
    msg.speed_units = 221U;
    msg.bearing = 0.768562087408525;
    msg.cross_angle = 0.5043525332327687;
    msg.width = 0.8989398297700373;
    msg.length = 0.13709895280555517;
    msg.coff = 43U;
    msg.angaperture = 0.2720770938780126;
    msg.range = 36812U;
    msg.overlap = 83U;
    msg.flags = 100U;
    msg.custom.assign("HUWRAMLJPGAXAGSQOGNRIBZTGJQERZLSXCIPIOABXNWZKXMHEVUFZUMICIQQWWPNMRKXGOHEVWLKUKDTQKXKREHOJTJTHODZBOMYLWCYKYEVIVWYPSBFYRWSURJZYHHALHFTTMCBRNEUFVTYZPNCYAD");

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
    msg.setTimeStamp(0.9073961820051674);
    msg.setSource(57477U);
    msg.setSourceEntity(62U);
    msg.setDestination(12644U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.41959948242084577;
    msg.lon = 0.29393044901681387;
    msg.z = 0.13912251892661887;
    msg.z_units = 165U;
    msg.speed = 0.5292577961662301;
    msg.speed_units = 161U;
    msg.bearing = 0.9690851530617904;
    msg.cross_angle = 0.025062510592900655;
    msg.width = 0.1738786079758251;
    msg.length = 0.3814553367482537;
    msg.coff = 186U;
    msg.angaperture = 0.49633938354628493;
    msg.range = 62087U;
    msg.overlap = 148U;
    msg.flags = 236U;
    msg.custom.assign("BQHWOCUTLTRWWWFAOOMVSYIE");

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
    msg.setTimeStamp(0.9082135373767865);
    msg.setSource(56005U);
    msg.setSourceEntity(14U);
    msg.setDestination(50113U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.38089949415956004;
    msg.lon = 0.7346742328269299;
    msg.z = 0.4140415987966435;
    msg.z_units = 178U;
    msg.speed = 0.22576170275673024;
    msg.speed_units = 176U;
    msg.bearing = 0.0765901154012163;
    msg.cross_angle = 0.5702129726541207;
    msg.width = 0.9196148404579568;
    msg.length = 0.8147932687916001;
    msg.coff = 88U;
    msg.angaperture = 0.6495731347536629;
    msg.range = 43745U;
    msg.overlap = 88U;
    msg.flags = 23U;
    msg.custom.assign("JQURZLAGCDELCULABVANTZYATIOYRYRGVGMWXFLQXXUVICPADUNKOMJKJDPUOZGXGSAKWQQZRTQTHVEDEBHFIREIMVSADBCKKPLWSPWOFYDIGCZYFZPSPSGGJTJJWQCKQRAPXJNFTHFXQJHT");

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
    msg.setTimeStamp(0.45547729665996717);
    msg.setSource(2674U);
    msg.setSourceEntity(162U);
    msg.setDestination(30730U);
    msg.setDestinationEntity(210U);
    msg.timeout = 38401U;
    msg.lat = 0.9362261372818094;
    msg.lon = 0.06098107221205351;
    msg.z = 0.3179694507937356;
    msg.z_units = 173U;
    msg.speed = 0.6876354465212281;
    msg.speed_units = 6U;
    msg.syringe0 = 199U;
    msg.syringe1 = 134U;
    msg.syringe2 = 248U;
    msg.custom.assign("SZLFQZECNEYGFHKWFGQJGIKBQPQGCSABWJHSYOAXJAVTORIPISAIHEVLTROOIHQMLWRMRTNBKOLNCVYUUHQSGYMQOUCYEOKCTBADCJYZEJJWKZZSCVTDZPXPHMMILCGHFVMRVPBIDDJUDXJNHLJAWFHTRSXWLNPDVQUAXURUVL");

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
    msg.setTimeStamp(0.727384600432259);
    msg.setSource(53080U);
    msg.setSourceEntity(99U);
    msg.setDestination(5241U);
    msg.setDestinationEntity(214U);
    msg.timeout = 736U;
    msg.lat = 0.0005680376531312925;
    msg.lon = 0.9028832641203205;
    msg.z = 0.8783105550860065;
    msg.z_units = 238U;
    msg.speed = 0.16012123198785044;
    msg.speed_units = 22U;
    msg.syringe0 = 130U;
    msg.syringe1 = 155U;
    msg.syringe2 = 194U;
    msg.custom.assign("SKUHAZNYPNIMZGNXTTRWMCAOCWMICOTSCEBJDXJARCXRZFYNELWKLHAILVDTVUSIFMERGPIUDNVEYGNJUSVUUKGLVRIKDQMBLIJVSVHIYWKZBBOJZJDWFRCSZWDVZLBEOGQPOPHTOFSRXUAQKSKYAIWDLNYDTHBFMXQZTEXHRYFQHMVNGSELPBFOWHGEBQDUCRXQRVMTZKWZQFQXX");

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
    msg.setTimeStamp(0.854324004316759);
    msg.setSource(37823U);
    msg.setSourceEntity(40U);
    msg.setDestination(10593U);
    msg.setDestinationEntity(67U);
    msg.timeout = 24050U;
    msg.lat = 0.4994137071973106;
    msg.lon = 0.3491310122544389;
    msg.z = 0.6843621578614946;
    msg.z_units = 191U;
    msg.speed = 0.42133126360267503;
    msg.speed_units = 249U;
    msg.syringe0 = 150U;
    msg.syringe1 = 89U;
    msg.syringe2 = 230U;
    msg.custom.assign("SZNDNOKIAHEHRUZLMJBXTXZWCXXRTYKQFOSEKHECCJPUGQIGNKZJSTXXUMVPLKNHYCGRMHVZBPVGFARNJSHLRM");

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
    msg.setTimeStamp(0.7899600167952106);
    msg.setSource(5630U);
    msg.setSourceEntity(66U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.9795884133435624);
    msg.setSource(59824U);
    msg.setSourceEntity(229U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.1245636019698515);
    msg.setSource(35968U);
    msg.setSourceEntity(21U);
    msg.setDestination(58213U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.471768211144451);
    msg.setSource(46299U);
    msg.setSourceEntity(134U);
    msg.setDestination(5650U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.37382133827024844;
    msg.lon = 0.5859017566161;
    msg.z = 0.9405996486463147;
    msg.z_units = 136U;
    msg.speed = 0.4127953633129563;
    msg.speed_units = 2U;
    msg.takeoff_pitch = 0.10336094623466185;
    msg.custom.assign("QHNDHIVPENWRJFAEFKXBRZCBBBJOIJXTWWCWTKBAHHBQUYPSUISXETITZCEZOFN");

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
    msg.setTimeStamp(0.9299807515543845);
    msg.setSource(44720U);
    msg.setSourceEntity(215U);
    msg.setDestination(18399U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.7869098489864621;
    msg.lon = 0.009631902370558776;
    msg.z = 0.16319868248548208;
    msg.z_units = 133U;
    msg.speed = 0.6376928049995007;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.18166386508481858;
    msg.custom.assign("AAHTYBCJNDEFWUIYIRSGAKMLJGOWKPSLYSWZKYILBPF");

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
    msg.setTimeStamp(0.17636795602270994);
    msg.setSource(39787U);
    msg.setSourceEntity(140U);
    msg.setDestination(37362U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.9476145319806767;
    msg.lon = 0.989083133037399;
    msg.z = 0.9078444263706928;
    msg.z_units = 185U;
    msg.speed = 0.6561332042464848;
    msg.speed_units = 119U;
    msg.takeoff_pitch = 0.3466221384419521;
    msg.custom.assign("DJPETVFARQLFKNZKXBJHRMUFTHFWERBTPFDROSETSNQMZJFGRAIHBWUOVADBXLJXPWDYSEVOGXLMPHQXMHECZTBWDKLQCLGHWLVACVSCIUNNLBCMYDLUWUHTUOIPZJYGVVRZAIBWUNOEPGQNWGPGRFIZGVDYYYKCEDRPHTSEGTXOIRJZNSKYWQZSDCWHXAIYFXURLFVBMKQFSTPODQXLCJZNUEOAMPCSN");

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
    msg.setTimeStamp(0.9565156397751347);
    msg.setSource(9819U);
    msg.setSourceEntity(215U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.9754150090986575;
    msg.lon = 0.5125301903206739;
    msg.z = 0.9188022276906116;
    msg.z_units = 118U;
    msg.speed = 0.7554859437804364;
    msg.speed_units = 79U;
    msg.abort_z = 0.48895614265297027;
    msg.bearing = 0.09778792511317302;
    msg.glide_slope = 60U;
    msg.glide_slope_alt = 0.7172046655663955;
    msg.custom.assign("AHNFKKBUTIQDSXWVTZGWJLOVALJJRWYCGTTWLGEKDZJZYKQOYHPVXXNMFHXEMIGPBNBUAYTRSI");

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
    msg.setTimeStamp(0.04709103333626774);
    msg.setSource(11732U);
    msg.setSourceEntity(126U);
    msg.setDestination(26926U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.7158707785665022;
    msg.lon = 0.7298970867818771;
    msg.z = 0.1686385146543008;
    msg.z_units = 74U;
    msg.speed = 0.06640683596688057;
    msg.speed_units = 45U;
    msg.abort_z = 0.02959420901882015;
    msg.bearing = 0.19196373589395943;
    msg.glide_slope = 236U;
    msg.glide_slope_alt = 0.7223843160534612;
    msg.custom.assign("AQEBLPQDBSRCMRTJTUEDAIQYEPLMYLNCHZILNYXKJBZGDGPWEMHNTZMGECGFIQJOAKMTREVHGVPEVORZCEASAMWSLFHUIIDUYZFRFFTIPOYXKJVMCWJZVSXWVBLDFXQSNKNBPXHWAQHCIJJASXJA");

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
    msg.setTimeStamp(0.7660822856494334);
    msg.setSource(35694U);
    msg.setSourceEntity(187U);
    msg.setDestination(32345U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.514759873040522;
    msg.lon = 0.009632655315465533;
    msg.z = 0.1773848097514088;
    msg.z_units = 202U;
    msg.speed = 0.09937446771408098;
    msg.speed_units = 47U;
    msg.abort_z = 0.850262616028742;
    msg.bearing = 0.22134838495162645;
    msg.glide_slope = 142U;
    msg.glide_slope_alt = 0.7335137948284092;
    msg.custom.assign("PZFMUDPQHGCQHDQNDDEQXVHMXGAUOYPTWYKFMJYBDF");

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
    msg.setTimeStamp(0.9098529109079209);
    msg.setSource(18629U);
    msg.setSourceEntity(187U);
    msg.setDestination(59281U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.604667234089215;
    msg.lon = 0.27045637753848784;
    msg.speed = 0.1925463824642415;
    msg.speed_units = 52U;
    msg.limits = 91U;
    msg.max_depth = 0.8134490305730315;
    msg.min_alt = 0.18801159125008815;
    msg.time_limit = 0.4898655413105242;
    msg.controller.assign("EDBUOYASDNMWBJNCHZHAFACQBDEJGIVQIFKTSTKZSSVRAECKYFDOTRRHKWYQMPPOXONBUWLGAOVLKMHKAUJWGENNPKLXSSXUQMZHLTAVLIEMGREKBCTDWUYOFCQF");
    msg.custom.assign("WXMHXOCARYPLUIGNAYWUFRAQBGEXT");

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
    msg.setTimeStamp(0.983385331826478);
    msg.setSource(22808U);
    msg.setSourceEntity(42U);
    msg.setDestination(41921U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.9849353121453553;
    msg.lon = 0.50592365499078;
    msg.speed = 0.3815064886023736;
    msg.speed_units = 47U;
    msg.limits = 129U;
    msg.max_depth = 0.6921343652363405;
    msg.min_alt = 0.7728256158832469;
    msg.time_limit = 0.8866010933319804;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8216218410130057;
    tmp_msg_0.lon = 0.18185742195701482;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XOPHGOCWCHSLTDVAMVEONZXIZVERECQJQSOAE");
    msg.custom.assign("MCTQTSVFJDKQQEUXUINUQYZICBPOKYRHSKNJFRIFJQDDEJYPK");

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
    msg.setTimeStamp(0.3839527843977706);
    msg.setSource(46994U);
    msg.setSourceEntity(218U);
    msg.setDestination(33871U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.12383010543415596;
    msg.lon = 0.986968356226022;
    msg.speed = 0.6476646682563315;
    msg.speed_units = 10U;
    msg.limits = 82U;
    msg.max_depth = 0.7975999461288069;
    msg.min_alt = 0.529012445983285;
    msg.time_limit = 0.2945551872528003;
    msg.controller.assign("NRVGABQIKCKZAPVGVNBUTOSMDKVPIMIXR");
    msg.custom.assign("FHBSWUKNRGVNWFCIHDEJJPQNGQISARNKYPLLZKEROXXBYABWOLZAYJVZMFEBQNSDAAGFVIBWYFKGBWZIBCDWLTTDKQQJEDSIEWDDUFYMPHKZUCMPURCASGDSZFCPMFQPSGTNNJTINCBKHVVMOVZBRQZHRQKTAZMXKOEKXOXYOSCUHGAYTRMLIEJTEUSHLUQHXUTPJRMYPNVXLLCHQGDRJOEYUWNXVBXOXOFFWPVWEHIGLUGDVAZMIOAJPLRC");

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
    msg.setTimeStamp(0.5226069369905515);
    msg.setSource(37855U);
    msg.setSourceEntity(12U);
    msg.setDestination(8665U);
    msg.setDestinationEntity(98U);
    msg.target.assign("ILYPQKKFNIIRXLBTACBHSEEUGOWMRHTBKCSSBCELFVJFBJJPRKDULBPNAORXARQNIEWWNECZSMILPYBHXCHLTDDNKHOZVZZTXQ");
    msg.max_speed = 0.1809251502918593;
    msg.speed_units = 14U;
    msg.lat = 0.6643642699990121;
    msg.lon = 0.3233229991392852;
    msg.z = 0.8175658020461516;
    msg.z_units = 102U;
    msg.custom.assign("UEYJQZQZVMVCYJGZTDINHFSHJDGUVFWXVNOUHVJMUHBRURXFSGAKSLUA");

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
    msg.setTimeStamp(0.6044470761138596);
    msg.setSource(27035U);
    msg.setSourceEntity(51U);
    msg.setDestination(25490U);
    msg.setDestinationEntity(21U);
    msg.target.assign("AWJMIXBANLQFBDXYOXQJZFMWGDTPTLOVEHJKKEINSROMZEYNLPUOXBZTAYNSFTCOJZFKYUHGELKRSVJYVPLUXECRGZPWFTZJHMBDIDNBDCVIDEXEVOUSQWHSPUDYCSDAOHXDRSBJMQHBIWSZUOKRLEGVKJXYOZNNNWLHGPTDULAQISZRUGXWNAGCPGXPAKQTASHTFJ");
    msg.max_speed = 0.7089143902139418;
    msg.speed_units = 113U;
    msg.lat = 0.11908273771517597;
    msg.lon = 0.16270614297944908;
    msg.z = 0.34018888280567827;
    msg.z_units = 129U;
    msg.custom.assign("GUCUCOXHLEBEZOBYNKN");

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
    msg.setTimeStamp(0.008862042282063998);
    msg.setSource(17165U);
    msg.setSourceEntity(227U);
    msg.setDestination(35085U);
    msg.setDestinationEntity(97U);
    msg.target.assign("EXMZZKPQNWFLQBFKVOFVNABHPEHFHKDTKLRWZJFFAUNARUVZPSXIMINOXKRDWCMEJPLJSDYBMTQPYPGAVCSWWXCRENYWGUJABEWIORZYNQJQYPTNMUOSVBDHJFADJCWIUFEZKTJBMKQHDYUBGKZTFRJUALHYDVYAQTGHCBAGRTKYBFPGSDLETIIIWZSMOHOUCPYMAOXIPVTMXZKMNURLGSGLIT");
    msg.max_speed = 0.922662474239046;
    msg.speed_units = 219U;
    msg.lat = 0.5908332090690857;
    msg.lon = 0.855384038850596;
    msg.z = 0.7283089837099402;
    msg.z_units = 131U;
    msg.custom.assign("TYPSVQLCCQZTSODWZSJBTTXAVBYKT");

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
    msg.setTimeStamp(0.47209666735684563);
    msg.setSource(59588U);
    msg.setSourceEntity(2U);
    msg.setDestination(39053U);
    msg.setDestinationEntity(72U);
    msg.timeout = 45417U;
    msg.lat = 0.9331424594476563;
    msg.lon = 0.8110359714477682;
    msg.speed = 0.1771717540002099;
    msg.speed_units = 148U;
    msg.custom.assign("AMKSAVEBWCTLTBDDZUPASLRJQJUOLYUAVHAKLBEIGKVAPHPRIXMKTFGUWENFQJUNPYZRFAUXVWGWXIKUCUWTIYAKFPVZWFMDMPKPCYUBNONZEXWFEXXFLDGQBQXLSMHQEWRSZTZTMIOLDEEIRBMJGGFYBDSIJOXPRKBYTHQZDFYNHJNOQOBNSRDOBCVGCIYDKXVJYHCISSECGJXUNCKZTVTLCHJJSVE");

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
    msg.setTimeStamp(0.38957817466874345);
    msg.setSource(40871U);
    msg.setSourceEntity(204U);
    msg.setDestination(30749U);
    msg.setDestinationEntity(23U);
    msg.timeout = 2668U;
    msg.lat = 0.5098782707312505;
    msg.lon = 0.1820205103601663;
    msg.speed = 0.7922579332534584;
    msg.speed_units = 130U;
    msg.custom.assign("YICVIMMXKAXOBORZAFZVTDQLHSYTSWZFDWISQXEQRSAURWLULCQHJHLVZDFBLPOGOQIVPGNZKNPYSWJLTIOQUCMBMWDNVHUKNZOYHGPBJXKAKSFBF");

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
    msg.setTimeStamp(0.5576344510881582);
    msg.setSource(22601U);
    msg.setSourceEntity(51U);
    msg.setDestination(45414U);
    msg.setDestinationEntity(133U);
    msg.timeout = 18745U;
    msg.lat = 0.4002049432365993;
    msg.lon = 0.49289583590597996;
    msg.speed = 0.16278328218351867;
    msg.speed_units = 181U;
    msg.custom.assign("PMIECXKLVLRGZHZJIJYXOATJXNVNCGZDUMAFEPTZTQRSBGWESCMFJWNWRCTLKKQUGNCAFSBTFOVWECMNRLORXSQQRBZIUVXSTSUAPUIUBWHQXGLNCHGNVRPSODEZRBXNPDHVOJXIMKKLYQPEZDVKXZUJQAJYY");

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
    msg.setTimeStamp(0.09258006706630784);
    msg.setSource(17222U);
    msg.setSourceEntity(67U);
    msg.setDestination(13433U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.6012439766742956;
    msg.lon = 0.696908507975472;
    msg.z = 0.5225204998505579;
    msg.z_units = 97U;
    msg.radius = 0.1748636846742524;
    msg.duration = 63973U;
    msg.speed = 0.15610888743834384;
    msg.speed_units = 96U;
    msg.popup_period = 45529U;
    msg.popup_duration = 57923U;
    msg.flags = 225U;
    msg.custom.assign("JBLHPMAVOUHEBRBDOAYNWRLSIEFWGAPRZWLQZVBYBGQDKEDDRRHWTBXUZIQALICKJBTATQXTWDPRLMMXNKMCYUFUELRWFGIJASYCJMGTFHPGDSEZXBVLUDZVIZSPHJTFYFNZVXKAKTOLERMIZXJURQDWKYPS");

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
    msg.setTimeStamp(0.7279614186110422);
    msg.setSource(36760U);
    msg.setSourceEntity(34U);
    msg.setDestination(17534U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.4076719971732937;
    msg.lon = 0.6633439801509843;
    msg.z = 0.0009669951266377819;
    msg.z_units = 140U;
    msg.radius = 0.5107823728239791;
    msg.duration = 49260U;
    msg.speed = 0.8458634768855282;
    msg.speed_units = 28U;
    msg.popup_period = 7120U;
    msg.popup_duration = 3661U;
    msg.flags = 25U;
    msg.custom.assign("RCEZYTFPJXGXWIAADNQEBTNDFVHLRZXRWMVFPKBZHPLIWUGCHTUODKDLPWCWPVFRZCUEHTSBKFJSXGANIANOHGDQBUORMWEYYKPYFNALXGTOMHBXMKZLQSCZMVPDCJCXFTOANWZKWEUIDQRHKEYERUNGBXZMPYJWSIAVKBHITEVOYLQILKRJEUJMVDAPSDJHNZAZHXSNULEATVMSPYUGISOQSWLQVRIOOXBFTBJFSLJOFCQ");

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
    msg.setTimeStamp(0.3440142541752822);
    msg.setSource(30254U);
    msg.setSourceEntity(177U);
    msg.setDestination(19277U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.42158297267055067;
    msg.lon = 0.34825712045172896;
    msg.z = 0.7145676429372662;
    msg.z_units = 75U;
    msg.radius = 0.8415281307312968;
    msg.duration = 35702U;
    msg.speed = 0.06699652973441717;
    msg.speed_units = 171U;
    msg.popup_period = 22640U;
    msg.popup_duration = 14323U;
    msg.flags = 192U;
    msg.custom.assign("QOLORQXCHBFBYTPZCPNJEEZAOVUPFTKHUDQZQDNGFHFARLZAEWCPMQNPJDFMTYCBKRQXOTHFOXRUCLIGSRSGVRNYNGLAWSIDZCPJSWLIIRKEODGBVCWVKSYVSLMWMBWLMHVLHAETNJHDXLZVUNKAKNDSYXKZFEIRHHDPRCFGGZJJ");

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
    msg.setTimeStamp(0.2864970315119575);
    msg.setSource(22506U);
    msg.setSourceEntity(39U);
    msg.setDestination(29129U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.5159928915788026);
    msg.setSource(50854U);
    msg.setSourceEntity(103U);
    msg.setDestination(55771U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.32130591675376075);
    msg.setSource(58456U);
    msg.setSourceEntity(197U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.3708682340974543);
    msg.setSource(20176U);
    msg.setSourceEntity(29U);
    msg.setDestination(35838U);
    msg.setDestinationEntity(170U);
    msg.timeout = 21583U;
    msg.lat = 0.2116570293768003;
    msg.lon = 0.2501729498593591;
    msg.z = 0.9579241666250083;
    msg.z_units = 45U;
    msg.speed = 0.7791514943009579;
    msg.speed_units = 230U;
    msg.bearing = 0.7463967958359871;
    msg.width = 0.9948658512016603;
    msg.direction = 168U;
    msg.custom.assign("NHTRGFVKULBXYHYLIRFMLKRATPZKYGVCCYZPDDTORFZTSYDLG");

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
    msg.setTimeStamp(0.9507246730039174);
    msg.setSource(974U);
    msg.setSourceEntity(37U);
    msg.setDestination(53066U);
    msg.setDestinationEntity(47U);
    msg.timeout = 44612U;
    msg.lat = 0.15188372528388394;
    msg.lon = 0.5850142586528584;
    msg.z = 0.3284303101465983;
    msg.z_units = 68U;
    msg.speed = 0.2164334838049511;
    msg.speed_units = 48U;
    msg.bearing = 0.8613206279730778;
    msg.width = 0.16631576970107975;
    msg.direction = 64U;
    msg.custom.assign("FHEJGQDSUTSUKDWAKWYPEGMTAOJJNWIFOEACWDHNWSSQNAFODUMNISMPVEGSUXEVHQFEOCKCJBETNROXXWFKYYTBIJLLNIOTPUKIGMGRSCYSHKBCAHUIIVFZXGBNMRELRLBLRDOXRZEVHQRHWBWPTNTXZOM");

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
    msg.setTimeStamp(0.752713987466991);
    msg.setSource(14567U);
    msg.setSourceEntity(15U);
    msg.setDestination(52035U);
    msg.setDestinationEntity(3U);
    msg.timeout = 22177U;
    msg.lat = 0.16879562181047036;
    msg.lon = 0.8938773126227132;
    msg.z = 0.9580079936513592;
    msg.z_units = 124U;
    msg.speed = 0.4048950572622191;
    msg.speed_units = 206U;
    msg.bearing = 0.36081751657968875;
    msg.width = 0.13009905896203322;
    msg.direction = 42U;
    msg.custom.assign("LQYEHVHBSYWIOAAUCGFS");

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
    msg.setTimeStamp(0.17661182436978307);
    msg.setSource(39371U);
    msg.setSourceEntity(95U);
    msg.setDestination(47342U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 110U;
    msg.error_count = 69U;
    msg.error_ents.assign("BGBOSLKCIIJFFKRQWLVNEHNGXULRTNRJFCNTXFGXSQXOCEJVVQVVTPFTLIDJGDUHS");
    msg.maneuver_type = 9818U;
    msg.maneuver_stime = 0.8299165182336673;
    msg.maneuver_eta = 37350U;
    msg.control_loops = 3302725445U;
    msg.flags = 198U;
    msg.last_error.assign("WJRDUBWCADTCRPWXIBNBQPXIQIBDGBWUNNJSYYYLKNGFFKPRIOLMOLZZNKFUUGOPVAZVSHJVTVKSWEBHZPQM");
    msg.last_error_time = 0.42992448942422123;

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
    msg.setTimeStamp(0.25660916492166164);
    msg.setSource(23420U);
    msg.setSourceEntity(123U);
    msg.setDestination(30366U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 25U;
    msg.error_count = 58U;
    msg.error_ents.assign("DXKNFGRRSAFLUPSTYTJMEMMMJMLGWJXCORRVSYXQSVZLVNAHGVKGLZIHVTMUCWUKRWNIQYLMYKNCASCNBVBHRKMTZUCJEBIDADCNYYACSNXQHARGCDGTFIPWBJNTDKOOHGREPUAUAQWKBXXZSRLWSLKGFFNFQSYRPWBJQ");
    msg.maneuver_type = 44764U;
    msg.maneuver_stime = 0.6164942423447218;
    msg.maneuver_eta = 41U;
    msg.control_loops = 239123578U;
    msg.flags = 114U;
    msg.last_error.assign("GIWEMMJIIFOSBMDSPZVCLXVDBWDGNTPEPWFJBVLCWOCNTXEORSKBGNOS");
    msg.last_error_time = 0.45515353712057693;

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
    msg.setTimeStamp(0.5444400911139747);
    msg.setSource(60418U);
    msg.setSourceEntity(122U);
    msg.setDestination(51814U);
    msg.setDestinationEntity(185U);
    msg.op_mode = 186U;
    msg.error_count = 188U;
    msg.error_ents.assign("IIJZXKZMDKBZLTTJHMZXRVUQICSSHPQWDNTJWPPOGPKBDLAZNISMWKUBVDHLFCWFOHYYTSFMPORULVRGDFVBKSLROENIAMNHOZLYQETSQROWVDBASMPGATMGNEUUQFYKFMANWPNEWCBJIQILIZEYJXUPAXCGZUEXYTYYKMWAYVCRODHPLVQHRSFUJZBBKERXUGF");
    msg.maneuver_type = 23520U;
    msg.maneuver_stime = 0.47909952475614126;
    msg.maneuver_eta = 50273U;
    msg.control_loops = 109014284U;
    msg.flags = 149U;
    msg.last_error.assign("RUDWHFHYXJJDLOHLKGLYMSAQPNPPTBZPTALTGCGUOXREVLFUWRLYSVVJCBBHFIIJMKXRMBRDPRRINGDSDVQTUVWZNEFEEOTPXGZNGZLGQWSKTWAFUYKGMFMQXRWYSYSPHIJYTCUZSQMBAABHOCFPENZY");
    msg.last_error_time = 0.7781258003657788;

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
    msg.setTimeStamp(0.2539482853454714);
    msg.setSource(57417U);
    msg.setSourceEntity(228U);
    msg.setDestination(57287U);
    msg.setDestinationEntity(29U);
    msg.type = 254U;
    msg.request_id = 16679U;
    msg.command = 222U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 36409U;
    tmp_msg_0.flags = 223U;
    tmp_msg_0.lat = 0.23110502038166225;
    tmp_msg_0.lon = 0.3926061220221666;
    tmp_msg_0.start_z = 0.2036790647146366;
    tmp_msg_0.start_z_units = 74U;
    tmp_msg_0.end_z = 0.5985446446823014;
    tmp_msg_0.end_z_units = 180U;
    tmp_msg_0.radius = 0.3190415108361807;
    tmp_msg_0.speed = 0.45133615608506095;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.custom.assign("FEZOHXUKFHWMZIASLSXFOXZATJIPNLGYFCLMZICWLK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49574U;
    msg.info.assign("AWTBNJLFGJCBEPLWVUUYTQYGQWCPUWEVYOVDVZFRJDE");

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
    msg.setTimeStamp(0.15048208554614206);
    msg.setSource(24901U);
    msg.setSourceEntity(155U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(37U);
    msg.type = 21U;
    msg.request_id = 43322U;
    msg.command = 104U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 21532U;
    tmp_msg_0.lat = 0.7567356661097162;
    tmp_msg_0.lon = 0.04348381171378013;
    tmp_msg_0.speed = 0.7409342581266364;
    tmp_msg_0.speed_units = 229U;
    tmp_msg_0.custom.assign("VKSRRFVGAHYTINKKIGCDOXZGLFYCTKSTHKGCIEXEQMTUGXZBGVUAQPURLZCPENTVYFLDGWHCTNYBYRDKYBYNVWIQWCWNQGSLKJJQKMHHVHZFRZATJNUCLBEWJJSJFYBBIWBMEAHJVWCIODUISPPZAWIFAJMZPSRDNLJPPTUBYOGU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23182U;
    msg.info.assign("YTRBFRVZVSBOCHGIBVYIAXAPOYCNQZWWIDGVXUGGLXEVLQCHSDXH");

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
    msg.setTimeStamp(0.06842294305216023);
    msg.setSource(46884U);
    msg.setSourceEntity(166U);
    msg.setDestination(51052U);
    msg.setDestinationEntity(27U);
    msg.type = 143U;
    msg.request_id = 35486U;
    msg.command = 6U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.608397410987776;
    tmp_msg_0.lon = 0.3841659733320829;
    tmp_msg_0.z = 0.5757827783531665;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.speed = 0.11811633778972919;
    tmp_msg_0.speed_units = 182U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.15295982143736808;
    tmp_tmp_msg_0_0.y = 0.6350901699778208;
    tmp_tmp_msg_0_0.z = 0.9026404347435272;
    tmp_tmp_msg_0_0.t = 0.5244280780080022;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 40769U;
    tmp_tmp_msg_0_1.off_x = 0.24265339681068754;
    tmp_tmp_msg_0_1.off_y = 0.8262514444393102;
    tmp_tmp_msg_0_1.off_z = 0.9393304287695791;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.4787149430552915;
    tmp_msg_0.custom.assign("CVTCEEFQOADKXGPYOLWOENBJUEVNUCXYGORRZDCJJYVOWXSXWAILLIFWGZFORILAHPRPHKSJEBPUUNDXAQNYZWDVJHTUXVLKMMXLE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34263U;
    msg.info.assign("XSKAJNTUAFEBQJWKICGYIGATQGEGHCWMADWJWTLXVQHYIXUSRFWPALHSCKQSYEJLZVQIMUJPIZRMNYVUHMMCDGAGSFBCETKEMSFRTVFSGCLKLRZYNOPGURGITODFPNZL");

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
    msg.setTimeStamp(0.5804874896081521);
    msg.setSource(60198U);
    msg.setSourceEntity(123U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(216U);
    msg.command = 177U;
    msg.entities.assign("PPHWUHFQXUFCWMHNFNMJEZDVYPJSQRMCWQLTYXMMPADDRRABRKRIGKQVKALFIGUYNYVGOPWSABBJCYBKLIEUF");

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
    msg.setTimeStamp(0.9272023876874939);
    msg.setSource(39506U);
    msg.setSourceEntity(121U);
    msg.setDestination(32885U);
    msg.setDestinationEntity(218U);
    msg.command = 194U;
    msg.entities.assign("HADQXPHKQPBEIPCAHLKWFZZRUXQSWEXDIPXFFVRSSKXAFRYGOJECPGYHWZNWANASSDBCAYLPOCJMYHVYZWNVLZOHDBURGMEJEUYGITZMNMPVTMUPBWHOCQIFZTTADU");

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
    msg.setTimeStamp(0.602285786961856);
    msg.setSource(59672U);
    msg.setSourceEntity(183U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(57U);
    msg.command = 72U;
    msg.entities.assign("OHWYHIGVKPANHSJRUSZQKXZWOUHKMOUBCNOLSNDPWOMPEQSOGIZFTYGBYMNMDDFCYZDQVOCSLGTEJUUNRYVCUIZJKNMRSLEAJQHPRWBGTAXQLXCLZMZQVFZJEEZWYBMDUHGTSCGEHXWRTXBCVYLBRBXAFTRSZPLVWNCICFXWJWAKUSTKNEAOXUPFKQBWIDDVBOBHO");

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
    msg.setTimeStamp(0.3064880108451693);
    msg.setSource(53339U);
    msg.setSourceEntity(36U);
    msg.setDestination(42119U);
    msg.setDestinationEntity(248U);
    msg.mcount = 36U;
    msg.mnames.assign("ISLAYRWWOPKCXBLAUIEPLBGHUBPYWDXQEDOIJHIZOVTRKMFDTKNHXGTVOFLKMNBZKURUDMEHNTESGKCERYPALQALZJFJUJKIGMXNWCNXMOZFDBJYUIIAYDZNTCOSEFRIXGLNIWXQZQCCRBVWYSVHCIEASWOKRFUHUNXFRSYVSAAMUAJZOFJLYZGTBDETJYMVQKPGHXJCSGQMHNPVLHABLVFCHSFKTTZCTXWPDMQEDQBJOQZSURRBDQNMPGWEOY");
    msg.ecount = 119U;
    msg.enames.assign("JJAUPUYRRMVGUBWWDAONK");
    msg.ccount = 35U;
    msg.cnames.assign("OWOYVCTYHWDANEERVINUGUMFMHILBCRBFQNVNKQEYQECXDKBJYTZSQJGIHLJVSLSZHUKTFILYEXISPTYGCVPLNQTWLOKBAUPKJCW");
    msg.last_error.assign("XFBRYVRNHGNTCWAQKQEPMWIOQFFNBLTOMZVIFNCVBHLUWPDSIOISUGUPNFPBVJLUHUZCBRMEDXEOHZAHGTSXKSMJJWEMRDQQMRKI");
    msg.last_error_time = 0.14967669423279217;

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
    msg.setTimeStamp(0.6267938527845337);
    msg.setSource(35154U);
    msg.setSourceEntity(239U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(183U);
    msg.mcount = 6U;
    msg.mnames.assign("EUGYHGWYSOAYVMMGJJATOEDOURUWKFWLMTHQOUNRUNKXCCCZGXMAFTTIILQUPKPPHBETQNBLVCKWAEHUEXZNKSZTFBHIPXJSLNJBMKWCZVVRMXXNFSCGENPMSYHOMHBXJAJYQZDRIQTJVVTSZGFXRWLJUJFKPKJCCDHQPLSFWWOIDKHLDDDMFPUCRGAREQOLYEVXWDIYUTB");
    msg.ecount = 173U;
    msg.enames.assign("GITQHINBITGPXEJUCCWMGQXYXCDCVK");
    msg.ccount = 46U;
    msg.cnames.assign("PMHPLFSBNOZGRWCIHMI");
    msg.last_error.assign("QHQROTHBDCBZCTWINFRNIUXYCRBEIDRYEMTDQCMYXAYONDSCZWZMMHJNJPLYVTNVTTXWSQORNVAKGAFGNZGEDETPUBIPSLESLDPGHXVVNJKOMLRGVJWMKVOOCQMLVSUIUHOTHJPGEPBAVKQXXWOCGOQYIFWYREFSXXKIBSEEWIJGUFAGXUOUJXBLBBSLPHJUUCDDZLMWAPIRRMUYSTEKQRZDNKIJFYFKCPNFTMPLCZAALAHSAWZBYDZ");
    msg.last_error_time = 0.5368697492895098;

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
    msg.setTimeStamp(0.15286649914018113);
    msg.setSource(52090U);
    msg.setSourceEntity(216U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(55U);
    msg.mcount = 225U;
    msg.mnames.assign("JEOCGZIHFPRYKONTCKDFTMHXSLBSXJCVZZPJHZWFPYTUZUUR");
    msg.ecount = 141U;
    msg.enames.assign("GHSQCNRGXEDBKXKOZNGHGGINJSSZLFXPFFKQXTBMEOWEDJPCWCALIQQRVKGDLDUZRDIMZEXAMFNISLTCXAKFNYVHDLSYYZEPYAQIKFNYSWZIJNOV");
    msg.ccount = 181U;
    msg.cnames.assign("AIDBRLRJXZNCGHWKGNXEAHAUKMNLSPHPCSNSZSELWMAVWWUDXRWQFSGYMLZIOORCBTGETTPGDEDOTFFHINLTZWCESYAKISWNHXMVBZURHVUKKJLKCWDPXAPVZRORTMYDVKWNFMYELUEOJEIQQODFBIDLNXIPBAGJHXYJOKTYTNZFQYTVHJKMKIBGQHEVYXPJOAHSRVLCQBXLVQVRYPMBFQWCGEPOUMBUCDBQFATYDJJXUZPCFGIR");
    msg.last_error.assign("OOBNALWTAFTFWZNKDRBEXUAVSARDBRPUFCXECLXMCYJXQOXBSPJIZMTKFEKYGPXQZWWFFUSHJHWVDTILQLBAWZPNOYQJOVJKGXVDPWKLNUPGOIQHXKRGAMHUCEGBNRQWINTIOGRFUYYBSNRQMRVYVIDMSGDWHLTZKOGLEQNMHTVSDCIBZ");
    msg.last_error_time = 0.06471322723800399;

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
    msg.setTimeStamp(0.2976705145977644);
    msg.setSource(31101U);
    msg.setSourceEntity(206U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(102U);
    msg.mask = 40U;
    msg.max_depth = 0.3374202774610341;
    msg.min_altitude = 0.8457082282350269;
    msg.max_altitude = 0.8331872358589758;
    msg.min_speed = 0.9524944465870777;
    msg.max_speed = 0.9728522827495532;
    msg.max_vrate = 0.015811169579533546;
    msg.lat = 0.8360810417825286;
    msg.lon = 0.5633372629683095;
    msg.orientation = 0.2949097936065589;
    msg.width = 0.620687934540927;
    msg.length = 0.6673695907834833;

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
    msg.setTimeStamp(0.8712883567187258);
    msg.setSource(11687U);
    msg.setSourceEntity(204U);
    msg.setDestination(3001U);
    msg.setDestinationEntity(254U);
    msg.mask = 142U;
    msg.max_depth = 0.3465882150483319;
    msg.min_altitude = 0.2552111310626183;
    msg.max_altitude = 0.8211161752274913;
    msg.min_speed = 0.7320662580715588;
    msg.max_speed = 0.8444861470830362;
    msg.max_vrate = 0.6035451891504535;
    msg.lat = 0.11365491513646342;
    msg.lon = 0.5813483529707909;
    msg.orientation = 0.37597982027782706;
    msg.width = 0.9110864037323513;
    msg.length = 0.6362171951152856;

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
    msg.setTimeStamp(0.8633408469014258);
    msg.setSource(1752U);
    msg.setSourceEntity(241U);
    msg.setDestination(17242U);
    msg.setDestinationEntity(30U);
    msg.mask = 1U;
    msg.max_depth = 0.360477329535547;
    msg.min_altitude = 0.7357774251351807;
    msg.max_altitude = 0.8009598929239209;
    msg.min_speed = 0.6926597699054426;
    msg.max_speed = 0.5500923527457997;
    msg.max_vrate = 0.363186859541632;
    msg.lat = 0.5064528868852683;
    msg.lon = 0.8673609984563084;
    msg.orientation = 0.7185387833972144;
    msg.width = 0.6924204881860081;
    msg.length = 0.02304156313944905;

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
    msg.setTimeStamp(0.05770745593889093);
    msg.setSource(28172U);
    msg.setSourceEntity(115U);
    msg.setDestination(44348U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.7548796799435089);
    msg.setSource(13090U);
    msg.setSourceEntity(44U);
    msg.setDestination(16263U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.48827699832083693);
    msg.setSource(44186U);
    msg.setSourceEntity(219U);
    msg.setDestination(23022U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.7321683661213036);
    msg.setSource(59491U);
    msg.setSourceEntity(200U);
    msg.setDestination(39875U);
    msg.setDestinationEntity(40U);
    msg.duration = 35231U;

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
    msg.setTimeStamp(0.49112923284955823);
    msg.setSource(31023U);
    msg.setSourceEntity(235U);
    msg.setDestination(22811U);
    msg.setDestinationEntity(2U);
    msg.duration = 59661U;

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
    msg.setTimeStamp(0.10023775326798967);
    msg.setSource(49229U);
    msg.setSourceEntity(240U);
    msg.setDestination(14339U);
    msg.setDestinationEntity(9U);
    msg.duration = 53684U;

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
    msg.setTimeStamp(0.9971865687982567);
    msg.setSource(49523U);
    msg.setSourceEntity(202U);
    msg.setDestination(7416U);
    msg.setDestinationEntity(160U);
    msg.enable = 69U;
    msg.mask = 3995384055U;
    msg.scope_ref = 3396969460U;

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
    msg.setTimeStamp(0.0922039690001577);
    msg.setSource(42632U);
    msg.setSourceEntity(223U);
    msg.setDestination(16999U);
    msg.setDestinationEntity(196U);
    msg.enable = 35U;
    msg.mask = 48214664U;
    msg.scope_ref = 2402757951U;

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
    msg.setTimeStamp(0.7520858723508429);
    msg.setSource(18585U);
    msg.setSourceEntity(172U);
    msg.setDestination(64809U);
    msg.setDestinationEntity(130U);
    msg.enable = 5U;
    msg.mask = 2526970681U;
    msg.scope_ref = 2873105893U;

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
    msg.setTimeStamp(0.008772105417794829);
    msg.setSource(27727U);
    msg.setSourceEntity(83U);
    msg.setDestination(50834U);
    msg.setDestinationEntity(33U);
    msg.medium = 93U;

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
    msg.setTimeStamp(0.7565489822358238);
    msg.setSource(54696U);
    msg.setSourceEntity(87U);
    msg.setDestination(30212U);
    msg.setDestinationEntity(31U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.8023681896794573);
    msg.setSource(55976U);
    msg.setSourceEntity(208U);
    msg.setDestination(803U);
    msg.setDestinationEntity(171U);
    msg.medium = 160U;

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
    msg.setTimeStamp(0.49052806041459807);
    msg.setSource(5491U);
    msg.setSourceEntity(95U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(88U);
    msg.value = 0.914871541417924;
    msg.type = 12U;

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
    msg.setTimeStamp(0.28329229478552287);
    msg.setSource(10028U);
    msg.setSourceEntity(148U);
    msg.setDestination(52544U);
    msg.setDestinationEntity(80U);
    msg.value = 0.511289025346061;
    msg.type = 14U;

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
    msg.setTimeStamp(0.14462254590224188);
    msg.setSource(6403U);
    msg.setSourceEntity(221U);
    msg.setDestination(23362U);
    msg.setDestinationEntity(49U);
    msg.value = 0.584465954559604;
    msg.type = 248U;

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
    msg.setTimeStamp(0.02853306372027198);
    msg.setSource(36168U);
    msg.setSourceEntity(17U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(159U);
    msg.possimerr = 0.2622895802544284;
    msg.converg = 0.9397142742789867;
    msg.turbulence = 0.8849819649595568;
    msg.possimmon = 16U;
    msg.commmon = 85U;
    msg.convergmon = 209U;

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
    msg.setTimeStamp(0.7874534779092981);
    msg.setSource(54639U);
    msg.setSourceEntity(136U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(234U);
    msg.possimerr = 0.17859279248442284;
    msg.converg = 0.9591830596862057;
    msg.turbulence = 0.321328284168244;
    msg.possimmon = 40U;
    msg.commmon = 81U;
    msg.convergmon = 183U;

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
    msg.setTimeStamp(0.186622167937052);
    msg.setSource(30231U);
    msg.setSourceEntity(156U);
    msg.setDestination(59948U);
    msg.setDestinationEntity(155U);
    msg.possimerr = 0.28768618148212877;
    msg.converg = 0.6823621565022562;
    msg.turbulence = 0.4460381654453911;
    msg.possimmon = 56U;
    msg.commmon = 140U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.18342828427772295);
    msg.setSource(48531U);
    msg.setSourceEntity(240U);
    msg.setDestination(40625U);
    msg.setDestinationEntity(167U);
    msg.autonomy = 151U;
    msg.mode.assign("OPUOHQLZFTOWQNWZHRNGOVHCICYDCCTWVVJZAYRFMZSGHHFRYQJAKDG");

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
    msg.setTimeStamp(0.3051355554506495);
    msg.setSource(55808U);
    msg.setSourceEntity(49U);
    msg.setDestination(13541U);
    msg.setDestinationEntity(209U);
    msg.autonomy = 210U;
    msg.mode.assign("ZDROGAXJZFSJNGQAFBMPGQFQDRATOUNMKALZTAEIKOQHNNJCBIGJFOEYQWVNYMJWRULGRBYVNSRLUWVSBJTZQSRSDZPXXOHAFEOHSVWITOBHRGKXMYBIJOFUXTDSHMYLKVET");

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
    msg.setTimeStamp(0.5696774843245052);
    msg.setSource(13801U);
    msg.setSourceEntity(86U);
    msg.setDestination(1083U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 211U;
    msg.mode.assign("XRLJYMTUZTUESGWIWQGJPNEVRBYBGKPOLMGOEKPLLSFHQASCVVPVCPUOWJIFDGBMEMHGNOHEXAFCTUIZYOFAIRMLOKUQUSDVTWZYRSCNDIVBTACDFZFNQMHDURWPUMIQONUZBLUKBLLAMYSDXSHQDJEYFVITRIGQJKYQQIXZEGPCXTWVMAKDKHLFVNARBWIORWBXJBHAKRFEVKTRXNCYKMZTCNJPDSAHTPWJSHZJJWSZNX");

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
    msg.setTimeStamp(0.0720913559698888);
    msg.setSource(40529U);
    msg.setSourceEntity(237U);
    msg.setDestination(48996U);
    msg.setDestinationEntity(23U);
    msg.type = 169U;
    msg.op = 207U;
    msg.possimerr = 0.07923609400883702;
    msg.converg = 0.4767660041043589;
    msg.turbulence = 0.8208941277104441;
    msg.possimmon = 142U;
    msg.commmon = 171U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.42609667750609403);
    msg.setSource(44853U);
    msg.setSourceEntity(149U);
    msg.setDestination(46935U);
    msg.setDestinationEntity(193U);
    msg.type = 243U;
    msg.op = 62U;
    msg.possimerr = 0.2980361733086142;
    msg.converg = 0.16078297642856143;
    msg.turbulence = 0.19132305358118928;
    msg.possimmon = 252U;
    msg.commmon = 162U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.1985351922975246);
    msg.setSource(51958U);
    msg.setSourceEntity(68U);
    msg.setDestination(48728U);
    msg.setDestinationEntity(117U);
    msg.type = 131U;
    msg.op = 30U;
    msg.possimerr = 0.13239068980495217;
    msg.converg = 0.43661850143801495;
    msg.turbulence = 0.13869493413234313;
    msg.possimmon = 30U;
    msg.commmon = 32U;
    msg.convergmon = 20U;

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
    msg.setTimeStamp(0.5734973969339824);
    msg.setSource(51039U);
    msg.setSourceEntity(147U);
    msg.setDestination(15940U);
    msg.setDestinationEntity(213U);
    msg.op = 56U;
    msg.comm_interface = 206U;
    msg.period = 40593U;
    msg.sys_dst.assign("VXCRMOOONHDSAHJBMLDRHRYINQUJLAPISLRUWXKXEZWQLAIFVMIPCZDAHUPQEZXNYOTCVWYWPKAMVWTDAIZUVBLPYJFIMCFZVEBIYBYWQCLACVLPNMTMSNOXULQSCFRFCDOKRXSZWHB");

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
    msg.setTimeStamp(0.7057042899256685);
    msg.setSource(56208U);
    msg.setSourceEntity(88U);
    msg.setDestination(48872U);
    msg.setDestinationEntity(174U);
    msg.op = 86U;
    msg.comm_interface = 125U;
    msg.period = 65313U;
    msg.sys_dst.assign("TKMSAEOECUWTALDRWFIUECEAEFBCLDGILIYWNLJHFWBFCBPCJSSNRBYLJDGIVSAVZHMWVQUVRQDJEIUYSMGQNVFZJQUSKNKXZGMRNKJHIHFHOXRCXYMYPSWXWZLOZDEPXBOTGXFYVHWCTSEHTDRTXJWHZEUOLTFZRNRKGPFUPGB");

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
    msg.setTimeStamp(0.08238644825634034);
    msg.setSource(61367U);
    msg.setSourceEntity(9U);
    msg.setDestination(11345U);
    msg.setDestinationEntity(231U);
    msg.op = 183U;
    msg.comm_interface = 234U;
    msg.period = 56521U;
    msg.sys_dst.assign("HOMMPDMXQAAWGBONXQVCJBPYZDUTYOCVUAQNRMCDHPSI");

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
    msg.setTimeStamp(0.010841620874393776);
    msg.setSource(3473U);
    msg.setSourceEntity(51U);
    msg.setDestination(54276U);
    msg.setDestinationEntity(154U);
    msg.stime = 1659064201U;
    msg.latitude = 0.4908260407322713;
    msg.longitude = 0.42371897919112256;
    msg.altitude = 31257U;
    msg.depth = 1333U;
    msg.heading = 64215U;
    msg.speed = -2693;
    msg.fuel = -45;
    msg.exec_state = -50;
    msg.plan_checksum = 9143U;

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
    msg.setTimeStamp(0.7224731032927161);
    msg.setSource(17547U);
    msg.setSourceEntity(76U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(25U);
    msg.stime = 4288619509U;
    msg.latitude = 0.4382631633526105;
    msg.longitude = 0.5864251523944357;
    msg.altitude = 60119U;
    msg.depth = 47772U;
    msg.heading = 47904U;
    msg.speed = -20456;
    msg.fuel = -25;
    msg.exec_state = -3;
    msg.plan_checksum = 49697U;

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
    msg.setTimeStamp(0.05742480610332468);
    msg.setSource(19632U);
    msg.setSourceEntity(128U);
    msg.setDestination(13120U);
    msg.setDestinationEntity(129U);
    msg.stime = 1604155753U;
    msg.latitude = 0.8789620963710061;
    msg.longitude = 0.1523687538552555;
    msg.altitude = 37023U;
    msg.depth = 17942U;
    msg.heading = 45626U;
    msg.speed = 25788;
    msg.fuel = -21;
    msg.exec_state = 99;
    msg.plan_checksum = 37165U;

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
    msg.setTimeStamp(0.6263834177964385);
    msg.setSource(31854U);
    msg.setSourceEntity(145U);
    msg.setDestination(46254U);
    msg.setDestinationEntity(30U);
    msg.req_id = 19968U;
    msg.comm_mean = 248U;
    msg.destination.assign("DBQHBKCCHQALIUYEBXZILUSKMZZLFYGZJKCZTHRBHDGHNVDRMKTTQSACCNNIUNKVFOWHGFUMCFUFEFOZIGCHJOJODCPPTQKQWJPXEVDVMTEVOVSYJGBAUSXWMUSOPLTPXRIGXRI");
    msg.deadline = 0.4239256727870354;
    msg.range = 0.47704034508749826;
    msg.data_mode = 149U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51724U;
    tmp_msg_0.lat = 0.9854475836949483;
    tmp_msg_0.lon = 0.30533197303252324;
    tmp_msg_0.z = 0.5636228405795051;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.5486691378382565;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.custom.assign("XFJDHPCQXYCETNXFZNDFLJTCMIAAWRGLTFWLPVYHPUREZKWGYJLNZSMBFPBEVLQUOZXKCXOKKVAEETVTQHMVGUUQJSCSTSOGOIMOFUGZRGIFACMDYSMBEVHORVESOGRI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LCKRBCLOYJPB");
    const signed char tmp_msg_1[] = {-73, -13, 90, -28, 43, 79, -114, 55, -26, 96, -14, 55, 13, -21, 3, 34, 117, -33, 41, 84, 49, -24, 19, -35, 106, -24, 111, 89, -23, -82, -117, 26, -40, -86, 7, -99, -50, -95, 44, 82, 35, -15, -113, 110, 34, -38, 23, 107, 47, 62, 0, -82, -4, -119, -102, 58, -117, 60, 31, 51, -3, 69, 26, -2, -29, 23, 99, -2, 103, 113, 126, -81, -19, -26, 51, -31, -98, -30, -114, -38, -120, 86, -114, -30, -27, -56, 71, 83, -100, 30, -78, -115, -91, 52, -106, -79, 64, -9, -76, -124, 39, -45, 96, 66, 0, -34, 42, -96, 79, 30, 52, -31, 85, 11, 114, -120, 6, 90, 124, -71, -50, 7, 125, -11, -50, -44, -109, -111, 61, 44, -104, -76, 29, 76, 116, 59, -18, -6, -66, 91, -24, 37, -4, -66, -79, 23, -42, -41, -100, -97, 90, -89, -21, 48, -67, 56, 68, 27, -86, 76, -99, 83, -85, 50, 98, 113, -7, -51, -35, -46, 111, 125, -15};
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
    msg.setTimeStamp(0.7763234090853203);
    msg.setSource(4928U);
    msg.setSourceEntity(241U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(232U);
    msg.req_id = 48451U;
    msg.comm_mean = 236U;
    msg.destination.assign("JXCMQGANKFHWXFAGTJEQDPAINNYNIWMJMUKZYIUFULWRXKWTFLATXDIKROFLQSDDZAGQTUGZOCOIQLQXRWCPKVXSYSEWRBADULHN");
    msg.deadline = 0.10324311442438405;
    msg.range = 0.5304803540257879;
    msg.data_mode = 115U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PZGCJACHHKSYKHYSUYQOCJUTIKHFEESOBLSAIJEYJMDFHVHDEVWFBSZKJAXWAPVCKLVUJCWNDGOXXRLHI");
    const signed char tmp_msg_1[] = {-42, 56, 40, 116, 100, 125, -55, -106, -11, 25, 96, 7, 91, -52, -36, -56, 35, 19, 120, 94, -81, -52, 1, -46, -36, -45, 75, -73, 42, -2, 6, 47, -125, -17, 109, 104, -1, -35, 52, 36, 114, -101, 36, 6, 0, 16, -115, -72, -74, 19, -3, 61, -91, -108, -69, 25, 103, -126, -21, -116, 41, 3, 44, -70, -7, -118, -51, -79, -25, -22, -65, -46, 44, -59, -26, -8, 28, 33, 107, -113, 54, -16, 65, 12, -50, -103, -99, 10, 92, -103, -99, -107, 87, 4, 35, -1, 113, -29, -123, 14, 91, 4, 119, -34, 121, 85, 58, 94, 107, 82, -81, 46, 33, -51, -13, 68, 96, 42, -100, 23, 124, 125, 109, -114, -17, 94, -40, 53, -30, 112, 85, 82, 59, 64, 33, -26, -17, -26, 30, -107, 115, -65, -31, 68, 82, 62, 1, 34, 68, -64, 91, 123, -32, 8, -73, -93, -59, 119, 67, 85, -51, 3, 84, -80, -58, -73, -96, -66, 81, -113, 42, 52, 126, 110, -30, -18, 73, -13, 11, -53, -20, 19, -67, 8, -92, 122, -115, -90, 97, -88, -106, 106, -113, -47, 96, 33, 37, 8, -74, 119, -55, -13, -88, 71, 113, -56, 65, -23, 63, -34, -12, 122, 49, -77, 41, 53, 17, -113, -33, -20, -8, 50, -48, 68, -77, -111, 81, 100, 54, -4, -45, 50, -118, 125, -6, -56, 34, 96, -24, -66, -54, -27, 72};
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
    msg.setTimeStamp(0.4498909539194086);
    msg.setSource(32281U);
    msg.setSourceEntity(99U);
    msg.setDestination(25800U);
    msg.setDestinationEntity(181U);
    msg.req_id = 8802U;
    msg.comm_mean = 203U;
    msg.destination.assign("PMZVDQXVYJYQTWEBQOHJJLSOCVJMSLSXPIDFTXEPJAGQFZZPBVWRKOTHPETGOXKMKIUISTMFLTIYWZHINCMDNGLDYEMJAQDPIWTCULWVDXGVUYXSBKKRIRJSBYFZGXFWECENFJLMKLRVE");
    msg.deadline = 0.8065194048251424;
    msg.range = 0.17220361914645077;
    msg.data_mode = 241U;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("QBBUGURDMYHQSWSYGSICBDXNYFZKDJRCWYTIXBWOJPSKYZHTWUEIFLKYBKCAUBZUEUZLNMCWNPQIUBIBPVKLHIVULAXIMULQLTEPREZRDWGQJSPFHVJLIPXRJIZOTWWSEHNJVFDXAOA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DHTEHLAHHUVOSRJSXYTSPAGKDOZQAFJEHUGQPINSXVEJL");
    const signed char tmp_msg_1[] = {-111, -21, 28, -25, -84, -90, -31, 111, -88, 87, 73, 37, -4, -102, 115, -40, 117, -20, 14, 47, -15, -6, -59, -25, 75, 28, 60, 100, 35, -59, 121, 14, 53, -47, -85};
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
    msg.setTimeStamp(0.08806036551214902);
    msg.setSource(56701U);
    msg.setSourceEntity(176U);
    msg.setDestination(62042U);
    msg.setDestinationEntity(58U);
    msg.req_id = 59184U;
    msg.status = 129U;
    msg.range = 0.9004815476676238;
    msg.info.assign("ZOQOKUXAAYBTIMEJESACVDUVPTZMCULDGKYDPFEWKATRJRLXMTZVOLTSWQJHIYHLYNOZCDTHBPJLGEWJJDYWHKYVKLEZIVQBSINJWKOMONQYLSNZDFJBRPYGBXBWIFHNKXXPPWFLNIQBMSKQDGDRGKHELAIZFEEAYRUSABKGVVHPFONUSUQIOCZXZDHCMVMQRUUVPXFXGUFMDRPTOFNH");

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
    msg.setTimeStamp(0.15800655397448404);
    msg.setSource(24214U);
    msg.setSourceEntity(5U);
    msg.setDestination(49352U);
    msg.setDestinationEntity(84U);
    msg.req_id = 5014U;
    msg.status = 76U;
    msg.range = 0.6772372595001377;
    msg.info.assign("MMTSWPXVJFHWZFKDXHZZWINOZRCRURDUCLGTJOAWHIUTVYDLMPOAMWHMZMWLVINUZBRBEUAFVCZJQYXSISMGETJKBXLROBRKVQGVXLTFEGFUXM");

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
    msg.setTimeStamp(0.9600406435102774);
    msg.setSource(56172U);
    msg.setSourceEntity(7U);
    msg.setDestination(24369U);
    msg.setDestinationEntity(4U);
    msg.req_id = 8770U;
    msg.status = 181U;
    msg.range = 0.3456515235533507;
    msg.info.assign("OIOEKEFPDMWIHSYBXE");

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
    msg.setTimeStamp(0.015910503907469398);
    msg.setSource(54473U);
    msg.setSourceEntity(71U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(169U);
    msg.req_id = 52U;
    msg.destination.assign("DFTGXBXYZIMIBIL");
    msg.timeout = 0.8970330712275698;
    msg.sms_text.assign("JQWXTZYPQECOAAPAUISCGAGRECSEKUZGRHTZLHTBOBRFBBZSPKMGSDXIHFYLYWOVNCPRWMJYSUNNUOVFCJWYMOQGITOQJCMNQMHYLVHRVS");

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
    msg.setTimeStamp(0.8714354185001212);
    msg.setSource(38691U);
    msg.setSourceEntity(130U);
    msg.setDestination(15266U);
    msg.setDestinationEntity(245U);
    msg.req_id = 48785U;
    msg.destination.assign("CYJDIMMDKHIFIBAZQCMJMWVCJCJJWLRGAXVUEPQTGGGOYYTEYCPETVSZRJQBXEXMBDIXIIZYOEBKGNOUNVTNHMSVFZPNRFKCGXXVEUQEIBE");
    msg.timeout = 0.9616491073020771;
    msg.sms_text.assign("QXABBCFNENFDJWCZIYFVLSRPRAIUWKZZJRMTMTJTDUUTMPKXCRSMAPXFKVLXWCNGOPPLUAGIHOMCEJDDEEHOHANPWGWYLIWLGZMUKKNMKKJKMRAZTDOSLGLRPTYSXBFEHZDBRUVBFDQGJTLJDCQHTANQQJ");

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
    msg.setTimeStamp(0.9791493768778905);
    msg.setSource(36503U);
    msg.setSourceEntity(205U);
    msg.setDestination(18278U);
    msg.setDestinationEntity(122U);
    msg.req_id = 56166U;
    msg.destination.assign("ORJHZXKLWXOXWBELLEDRAHSLMRQUIIAFYVFGGAERPBUIHUTIPLADRTLEQJBHQMSUWRZMIKDLGDVCSJJGVCDAVFIKCNTHRTBPEXEWDQWGFJZOCYNXNYNBQICADQDRPBVHVXPYKKNETEGAZQDMKVSUQYWBZP");
    msg.timeout = 0.6295692955583145;
    msg.sms_text.assign("NVPRPHBRMLAJUPFGMZQZMGOTECNAYBWMYCALQDBWFRMFWKKSFKABZESDBIYXEJHWBWULZFOQCMSBRVJOWGSGXSTTJJMEPQIZDSCDEHUNONCKGYPXQOUVUEHVJZATLXWQONEIRFJKBTORTXGXECWKRAVTFSLYJUDDUMGYGHHHYKXHTTDQVLINYWDLS");

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
    msg.setTimeStamp(0.7668284766962173);
    msg.setSource(36901U);
    msg.setSourceEntity(192U);
    msg.setDestination(51549U);
    msg.setDestinationEntity(47U);
    msg.req_id = 62479U;
    msg.status = 159U;
    msg.info.assign("AQUWHETURIVDQSRBXOKTAWKVMGZMJVWPALROFDDVARLWSFRNBCPYVPISHEIDIYOJIONJUWTVFJEECHLGUKSM");

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
    msg.setTimeStamp(0.8695021645832777);
    msg.setSource(6582U);
    msg.setSourceEntity(222U);
    msg.setDestination(38088U);
    msg.setDestinationEntity(204U);
    msg.req_id = 32938U;
    msg.status = 146U;
    msg.info.assign("TPTPLGXKTJKWKLUUUGZWFNXEGTNBAPWVJZRQVINFKWLBMALCSPZIBALQYADYVFQPAFPSLOHIRQIAKHCMHUHRWZCOXEDFSQIRWNFGHSTBDYCKTXMMEUXJNJKYDNRLCVVTJPGQFJBCHAHUSMZMUVVARQMLOZUHCBGLOEWWFTMIGUWYPECJVXIBWILMYEDTGBXBYJNDYOCQFK");

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
    msg.setTimeStamp(0.9036327917052177);
    msg.setSource(35536U);
    msg.setSourceEntity(81U);
    msg.setDestination(25635U);
    msg.setDestinationEntity(73U);
    msg.req_id = 19362U;
    msg.status = 1U;
    msg.info.assign("XTVZKYUWEWYXVSMJIZPGAZDMLBFQNHOZAEHEBGNZIJNKBQMCUQPQFXQYKUQVOTNWAOEGKJBCVFFHPRLBTDORLJTXMWLWFGLZURMOIHKJMOFWCJGICJEJFFECTE");

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
    msg.setTimeStamp(0.5964964367371358);
    msg.setSource(50451U);
    msg.setSourceEntity(149U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(37U);
    msg.state = 111U;

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
    msg.setTimeStamp(0.21945328451124357);
    msg.setSource(37020U);
    msg.setSourceEntity(181U);
    msg.setDestination(63267U);
    msg.setDestinationEntity(133U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.4958467571966221);
    msg.setSource(61159U);
    msg.setSourceEntity(109U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(36U);
    msg.state = 158U;

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
    msg.setTimeStamp(0.6347787821614719);
    msg.setSource(55208U);
    msg.setSourceEntity(74U);
    msg.setDestination(50687U);
    msg.setDestinationEntity(8U);
    msg.state = 157U;

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
    msg.setTimeStamp(0.4667820845537338);
    msg.setSource(49988U);
    msg.setSourceEntity(54U);
    msg.setDestination(36679U);
    msg.setDestinationEntity(11U);
    msg.state = 210U;

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
    msg.setTimeStamp(0.7728006437272936);
    msg.setSource(16190U);
    msg.setSourceEntity(60U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(217U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.4883038850499527);
    msg.setSource(7265U);
    msg.setSourceEntity(217U);
    msg.setDestination(19641U);
    msg.setDestinationEntity(211U);
    msg.req_id = 5623U;
    msg.destination.assign("OZIBAOQQFHUDOBHWJDGRRKNMIFJZCRTGEKCBYUUGLSCTWRJZRLIEVISPVXAYNMZDQZAISHLPNAUWOSNXZKJUTAQQVQNOYAXXTBDZWIPCBLRHVKDGMISLESMZPAYHPJMCWBWPGISHMPTWSREXJKCFOCKQWKLWLTONVQJ");
    msg.timeout = 0.5608198123453426;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 30780U;
    tmp_msg_0.sys_dst.assign("EBROJHLMRJBIPEDFVWIPZNODJUIHHVAWPQVEQZAWDWAFVCTCGIAGGMXDJKSTCWDKBPMJQTXCUVREZNUHLWSWWGI");
    tmp_msg_0.flags = 35U;
    const signed char tmp_tmp_msg_0_0[] = {54, -1, -16, -80, 55, -4, -57, 72, 102, -29, 14, -57, -99, -39, -80, -20, -31, -63, -113, 4, -101, 121, -123, -35, -128, -114, -61, -102, 5, 28, 40, 71, 16, -99, -11, 115, -3, -88, -110, -18, -24, -91, -75, -110, -38, 51, -107, 12, 102, -127, -44, 75, -118, 47, -99, -102, 79, -45, -51, -52, -122, -111, -128, 125, 50, 94, 121, 5, 107, 95, 46, -81, 108, 6, 93, 80, -71, -5, -43, 32, 31, -125, 13, 106, -38, 63, 18, 126, 66, -34, -94, 69, 17, -19, -78, -64, 109, -36, 111, 99, 34, -42, -99, -110, -50, -63, -52, 106, 35, 6, 103, -71, -11, -69, -28, 44, -19, -43, -40, -117, -114, 110, -128, 85, 113, 118, 24, -37, 18, -62, 91, 107, 23, 95, 81, 95, -33, -81, 10, -89, 32, 26, 3, -80, 103, -114, -8, 45, -64, 100, 32, 78, -35, -105, 2, -25, 36, 0, -126, -93, -80, 22, -102, 9, 125, 5, 15, 120, -20, -79, 110, -45, 103, -93, 113, 115, -91, 49, -91, 63, 4, 77, 61, 111, -31, 37, -97, 40, 88};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.17418761550405248);
    msg.setSource(63911U);
    msg.setSourceEntity(48U);
    msg.setDestination(38350U);
    msg.setDestinationEntity(236U);
    msg.req_id = 43552U;
    msg.destination.assign("KJRSTPSCGFOPITQWUFXUGMUCUHVOVYHBXOZTFMJEIFGAELLZGTDYITWN");
    msg.timeout = 0.05083055290879246;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("KSNKXTLMRFOVVDOKWSOEDFLTADJCQPDLVOITPCKUMJCRCKIIWQKHKDCUGQQJAHNLPLGEPANSHYCGJYJXJTZVINVWIIRJYHONPCUPRQWXGPMVJXFEIMZMTQRPFFCHEQYOUXGQDWTTB");
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
    msg.setTimeStamp(0.8472057902174235);
    msg.setSource(6907U);
    msg.setSourceEntity(116U);
    msg.setDestination(31117U);
    msg.setDestinationEntity(36U);
    msg.req_id = 43044U;
    msg.destination.assign("KXMIUIOEQOTICMRZVICURDFAXMNBQLRBMCHIBJG");
    msg.timeout = 0.09616860573971364;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07904680818981813;
    tmp_msg_0.y = 0.2593651967083531;
    tmp_msg_0.z = 0.3535283267760929;
    tmp_msg_0.t = 0.48049398642316477;
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
    msg.setTimeStamp(0.29184281186888983);
    msg.setSource(12778U);
    msg.setSourceEntity(179U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(76U);
    msg.req_id = 17381U;
    msg.status = 179U;
    msg.info.assign("CUSCGEIRAVUWATBZCLRNBUMQPFFPCLROIIMHHELGWVYKMJMQDABTJKIOMXJYEAAQDVNUGLSTVSIHKTQWYQAESKMCRKZBYCZCVSLLBQNVFJUPUARFCNOLCRIQOHINJDIMUZJKDVHRMGGXKDBVAGHXTQSYJGDTOZJXEKEHZAGPJVDPRHFGOIXEJPWBOZDWZNWPTPXTNTSQEXPXULSMNFILFONCBBUXATUEOVOKZSYHYPLSFYYWRMBFGXRWYWEWK");

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
    msg.setTimeStamp(0.7380842101984896);
    msg.setSource(20484U);
    msg.setSourceEntity(190U);
    msg.setDestination(17209U);
    msg.setDestinationEntity(202U);
    msg.req_id = 2557U;
    msg.status = 104U;
    msg.info.assign("KLBLGHBZSVYOTNFWFDWHMJCUQVZNHRSXIFCHYNGHTQHXHJBMPAJZVZXSCTYTDQQLPBMFNEWQOWRKVZSRMWDRCVASRBAZRQX");

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
    msg.setTimeStamp(0.7791996711975483);
    msg.setSource(9857U);
    msg.setSourceEntity(23U);
    msg.setDestination(37207U);
    msg.setDestinationEntity(83U);
    msg.req_id = 27037U;
    msg.status = 133U;
    msg.info.assign("TIOGRIUOCGUGPFKFFPDUYXBAIREEIZYPSNDMBRDVJWBWPTOFAADUMLQBLWTHRODMGZJUGNKJVHSCYTZLIYXOSBRXMIDK");

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
    msg.setTimeStamp(0.4462945487603035);
    msg.setSource(65001U);
    msg.setSourceEntity(239U);
    msg.setDestination(57218U);
    msg.setDestinationEntity(219U);
    msg.name.assign("NDUBQZJZSMGXZBCTQMVHFFASJFRFZT");
    msg.report_time = 0.44127979929704086;
    msg.medium = 103U;
    msg.lat = 0.4115766617103783;
    msg.lon = 0.3077242727732683;
    msg.depth = 0.8147929289229696;
    msg.alt = 0.1230490837658279;
    msg.sog = 0.36603896858441154;
    msg.cog = 0.7977997785551721;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("CPNWTPSWMCORYLQKOAGVGQKTJIAWQIOXPQKMXNUJUYRBSQDHJGXISXNFSOIKTHRRLCREBVYQOQYNDZVFNOWBOHGOVA");
    tmp_msg_0.max_speed = 0.3243069654364049;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.lat = 0.8071384426911058;
    tmp_msg_0.lon = 0.12880475090610222;
    tmp_msg_0.z = 0.3132796160960367;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.custom.assign("LLVHDASIVPYSPTRWGTOOXQQPARZFKBKCRICVSYKZBOFDWBOORMNEHICSIOMUQYQCAPESFCVLBDAHDCXONPVMBUPASHJMVGJFPHGXQSNJHWWUTMFVFAHEDFUTSIQXZRVLBTSTEZKDAJJZFCR");
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
    msg.setTimeStamp(0.04190623500264501);
    msg.setSource(64189U);
    msg.setSourceEntity(129U);
    msg.setDestination(46601U);
    msg.setDestinationEntity(109U);
    msg.name.assign("ZXAFRZEXIKZWDABHRFWWEYLXWYHSWSVHADEPRJRMXBBMCFJTNGQZURUVPWPOFECXONHCRQNTMQTYJAVBIKLRKSFUQNVLENFVLOKVZVWWTIZCHBBXMXSPOYCCQWXJNLKDAIUJZJTAJVRSOEMDNFUUBGHKQIDYGMDLY");
    msg.report_time = 0.32512944093113616;
    msg.medium = 56U;
    msg.lat = 0.22963878659978432;
    msg.lon = 0.024797020504774725;
    msg.depth = 0.11420432019227922;
    msg.alt = 0.7548011132333975;
    msg.sog = 0.10060712781949743;
    msg.cog = 0.5354719140793177;
    IMC::Abort tmp_msg_0;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5043247538054874);
    msg.setSource(6237U);
    msg.setSourceEntity(27U);
    msg.setDestination(27220U);
    msg.setDestinationEntity(72U);
    msg.name.assign("HKDCLPKXAREPUUOANOYFXFAYPMWKWADEUAVFQNFBRXJCTVHECRDZOBWSPELGJJQYDNZZIRZBGXDYVHTQNBYNEQJGWAWSWEYMCIHDDFTOORMWGVHKTHMCFWXVWHZIUDGKJITRSJE");
    msg.report_time = 0.7072749643323806;
    msg.medium = 79U;
    msg.lat = 0.5506159060716103;
    msg.lon = 0.2697556684290301;
    msg.depth = 0.7805934954522726;
    msg.alt = 0.5684500008759042;
    msg.sog = 0.7711478700949427;
    msg.cog = 0.5760975137321959;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1177849022U;
    tmp_msg_0.start_lat = 0.17225280177603297;
    tmp_msg_0.start_lon = 0.9127161689184085;
    tmp_msg_0.start_z = 0.19234972723218802;
    tmp_msg_0.start_z_units = 28U;
    tmp_msg_0.end_lat = 0.8855760829513889;
    tmp_msg_0.end_lon = 0.48723774771667117;
    tmp_msg_0.end_z = 0.7494382879306614;
    tmp_msg_0.end_z_units = 71U;
    tmp_msg_0.lradius = 0.7187996964506281;
    tmp_msg_0.flags = 117U;
    tmp_msg_0.x = 0.5835472775178326;
    tmp_msg_0.y = 0.3655437582064255;
    tmp_msg_0.z = 0.6218031316134864;
    tmp_msg_0.vx = 0.6251003877257958;
    tmp_msg_0.vy = 0.3391258271292844;
    tmp_msg_0.vz = 0.054317382433930805;
    tmp_msg_0.course_error = 0.5335026329424642;
    tmp_msg_0.eta = 24580U;
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
    msg.setTimeStamp(0.3737106986501141);
    msg.setSource(59541U);
    msg.setSourceEntity(165U);
    msg.setDestination(64593U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.4463844211375815);
    msg.setSource(20938U);
    msg.setSourceEntity(135U);
    msg.setDestination(37280U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.4058608394423108);
    msg.setSource(17622U);
    msg.setSourceEntity(7U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.31080000589263135);
    msg.setSource(37777U);
    msg.setSourceEntity(196U);
    msg.setDestination(57716U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("VQHVOJRYRCRBDKYTNPUAKPVGOQPOSHUPSHBDBPDHLAAFCQLMCCISFMUDDJWXXFJSXGCBBAGWDTGXNTWRCAZYSMSODHNEVUUICWTIAAVINZYZZAILFJAYCNPIGPKOIZOFOFIDKATLQNGWSTQQHIGURUWYJLFQVEQXEKYFJZEFEHVTLZQNGSKIBTGZEMKUNLJZWZWESKLMLWNEVCUYRXX");
    msg.description.assign("EPUWIKQPNMLZROEGHMTEAMXGTEGTWSVKHLUDCQRASZSZEINTSUCNYIJZPLQZANKCOGHOWCMVWNNBPJNTEBMONQSODBKPJMFCGVHLZFQRXOALSMWCEJXADVWGUHOKXIFZMSXYDFSYBRYHTDTXOLLPUAJRGJIBKAVUJHTDRREXLYIYDGZDUEFMQ");
    msg.vnamespace.assign("IEMEPFKDBLXIHRQAGWCEIILHJVGKBPLAKENXSJBFAZYCPDHKOFQBXSYICVTGZREBKSDRYPOVZHUMMAHLCKSYSWANNITOCLQDQOGONTUFCSQPZEOCKABAMWFEGMCBGVWOPVTTZJRMSDDHFEYYXWHUZXVURWBPRMUETX");
    msg.start_man_id.assign("FTKYKDAIVPHVIRUFSSWTGPBJRSAKUGXZEJJETUNVIWHPOUCDXYBKMBVOOBECZCNFENWMSJSIGTGWCQWOKLBIZTHCAIRZXDDRJXJQAUSKZXZBTFXLODOMDNWOIFGXORSCFG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LGONDVFIHGHGGWBLUPFYJIHWDAGKRBVMLANLXJXXGUVYMVNTNAZONWTFRQBBMZJMVDGZEUGFUVAWBOCKKKZIUTZRHALSU");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("CVFNQZJHEAOWLCFTTBEFSBALADPWNBDVIGFLUXTYLVQGKWIYHCXKGORRHJWKFCPPIRHONJXQMJXGYNDBSJWMQWMHMYSHBTDKDYSKMEAGFSQIIKNZREYTNNUAUXXBXPTEJCJBVZTGZXRQAPUCUCGAQWLGVLWYRJOIRHKABEZJSUTKMYFNKR");
    tmp_tmp_msg_0_0.max_speed = 0.17225075637143994;
    tmp_tmp_msg_0_0.speed_units = 107U;
    tmp_tmp_msg_0_0.lat = 0.5744354256214738;
    tmp_tmp_msg_0_0.lon = 0.9444783755956132;
    tmp_tmp_msg_0_0.z = 0.5748895484264206;
    tmp_tmp_msg_0_0.z_units = 235U;
    tmp_tmp_msg_0_0.custom.assign("NUWSNVCTSVDSYUAEGEGAOYCEAUXLHKJHARWIBKJMVHGBEYACPXFBEHEKNZVEZXQIQUOJMFTUSLDIZL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Drop tmp_msg_1;
    tmp_msg_1.timeout = 60131U;
    tmp_msg_1.lat = 0.1667967947654807;
    tmp_msg_1.lon = 0.7455633500456904;
    tmp_msg_1.z = 0.0005828093464879114;
    tmp_msg_1.z_units = 185U;
    tmp_msg_1.speed = 0.8659570231196776;
    tmp_msg_1.speed_units = 194U;
    tmp_msg_1.custom.assign("HSOQQDLRBEAUUHCYJTSUQCGIQSPYJKNRVCUKEYRHXHPAWWOEPKKELLLLLXTDFWOMPBGJGKPIEBAZCJPBZMOLFMVWMBQUZMYREESOWVRLXINMZZYSDUXGQPFJKDEHCNODTQTNQAELTYCFYMSMALDVXZPTIBTYTCRNOUATBGDZPNXAGDQKXJNOIRSHGNGZBORIOXZKVCIYYAUXNIZJAVSSJDGPMI");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.08164813785381608);
    msg.setSource(1220U);
    msg.setSourceEntity(50U);
    msg.setDestination(51872U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("DTGAHMCIYAGFHPZBNKOSTAADXIAIOWMJBBQDNHNDQFRWVDBVUUFELWGCUYHPZUWHVIXLJRGDOQMLELWAJGICQA");
    msg.description.assign("KFZLGRXSZIHYLQXCLXGMGRIYBEWPZQXZVQVDCLQHOTJQXYJNWXQIYBRQDJSJCAYVONHVLOJTOTDPTEBSEUMFNXGSENQPUYZYGQGNCHMFTLAKPCSNDRVUSZUAVXLYVWDWCFJUWDZTUCDBSTAH");
    msg.vnamespace.assign("DHWTIGBYZEWZFULHPUHHFIPJKIKEXZBZWMFJQAOCKJTBDRGTYVPWDGYTLEXKBOCYTWBGYPXSJRCHRNQIGJYUWLSBMUSMBRPAQMFEIKVEZBFFVSAYANDNGMESJJCTUZPPQXUSDEJMFPXXNZKKTGQXCDDQOLCGJRINCKMCLVKOLOXEZAMYIQARWRVIUQJAWNSQPVTVOWOGVRMUZFFIZEHOSHNUIXRLDHDHTXBHYAMNAWBKQFVSUPRYNCLOLO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JLMAQWDILFIYYSACRLPNQMSKQGFNAGQPDVJRRNTWSCTDGKUTJENSCZPJPVZAHHYEZUDZIQDOBYYHMOGVHVGTMHFCODBDVEUHIWRTOBMYTWAQFZAOIOMAWNGJBVICMCMLHKFRUUKCYYZESOQTNTKLXDZPOTUXAEQLXDAJSNSIPRYWTBWYFOFIJDHXBJGPVBZXGGECRXNIUBGJVBWRUMPEKLNOCPWVUNZRLPXSWBEEIQRJZACQ");
    tmp_msg_0.value.assign("NRSOKDXHVFAPRCBKAFCUVNHURIRQSIAKDXIKZPSWMNEJUTEGCQZFYOJYWKZSVMTJOXWHCYIFAMJKCANBANBQRSJVKEXMMYJBQWYXQHTYPZPETYZDDTWIAJGXUTLUTURVEEHMVSLZFZRFGBSLZDAWPCHYIEXDOXCWKGVIEKBYLFDBOKQFUPSPAOMFLCJNEGUDTYXRMQHWLDWWTZHGCLNNEUJPGUOSOBVLBJDCHGTNOZXQRPMIBQHIPOSG");
    tmp_msg_0.type = 18U;
    tmp_msg_0.access = 179U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UXGSOXHGQCWJFQWYPWKKRBAPKSZRLCRTJEYZKAWJFMXMMBDPEDFOWOZHV");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LLNHRNJMTQHEOFPUBJEPHZDKRVVUGOCWJXKLWQASLPBDDJSASHMDQCEGTMAFRAVJEQFIXXIWCUEIWSMYQTNPERUQUSVGKCWXAGKZBWDEVMINFWYTYBZYGNARAGAWXBZKERXCFKJXXHTZRIHZVNYOKCNOQMGC");
    tmp_msg_1.dest_man.assign("QPVLFADJKMKCLWJDFUHOKFYJWREBVHDQDMSXXCHYEPGCZVTNMOJOAPYGCCNQCWZNQARADVIMXTTWHQGSFZTAHXLYJQGHPUAUNEXPMMUIYWDRSNROYEWDUUEYVM");
    tmp_msg_1.conditions.assign("XYXMMNLWLGSSTNCCPHBEMDGUTHSOWMKMYVOGMLEEQBBYPSUDAQCYOIEFBRBUJOEH");
    IMC::LogBookEntry tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 212U;
    tmp_tmp_msg_1_0.htime = 0.7814351549992875;
    tmp_tmp_msg_1_0.context.assign("DOAQZHLYRJKBAVICLWOENIHNXRUOWJGRBIAGQMCUWVPLMEPNJXDXUONHFNYHLQGFWZCETOCNWBVMSSEKBAHNRSWCOZISQSEQXKKYTGJIXPO");
    tmp_tmp_msg_1_0.text.assign("VKRNIEQAIRILOZTVHDQQOHIZPWDBOGABNJKLKUFRJJOHHBMAENRXRYTLCASXNSUHTCUMNDHZYPNZCOUKVEQFIHUDBJGGWSSAUUHXKFYGPXZBOMIMWLWIXDACLBPCEMEFTWIFQFLHVKPZUPZZLYYWSZAGSTJJSEFVWAYMYXVAGYKJGEJCVLDZOGVTVCXKPEIRCONREVCWGDDHNOQLFQRILMBKDFAFYQ");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6708647846933419);
    msg.setSource(826U);
    msg.setSourceEntity(26U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("VULMNARFLISVSAHNSBLUJHKURDQQZMAEWQWFXWFHVVIYQILOFBAOYKXJQSIXCXTAMKOBLTGZOFUCEWEPBXOOHDVFJHUDEPUSWDLHTUN");
    msg.description.assign("UPWGTUIXQUEQEXXLTHLLYNGVQCGIOIXKQUSTVVTWXSDEDOSVBJWSZMBBPHUCYOTQRFPBPWQCNNTZPGLCYVBQFCFRIUAYCYOMTAHZMDONFSCABEHJZMDPZVWAFWDGRLHYPFVCWARLVLRIZZRBYSEDUXOJVFHUAJUMEBMAYBNI");
    msg.vnamespace.assign("KKLEPQOPJDGOHWJUGHNLBBWBQXKRWPEKOSZHBATPLROWWXGPGRFAFIPMCZSRUYRZYKZDBOGHCCDZVMDVUNOTLKCEATFDXFNPIBHTSOXQHJDWYRXHEPEIULWJHEU");
    msg.start_man_id.assign("UCCDKGBGORZRGDPCIVECLOKZXOUMXOALREIDZTJMMTTFHWUFSYEBBNAEVYFKNYHXHSTSVWNLVFESAQTCIAPXQ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ILOVFWVMJCDZGDGXAISVTRUJDGPYVNPBDZDRFIEMNYIZFZWYKVUKXSTNJEOQRPEXLUEYNISZGATJTESCCLH");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.40434060969606256;
    tmp_tmp_msg_0_0.lat = 0.4554493987808095;
    tmp_tmp_msg_0_0.lon = 0.7210221916529942;
    tmp_tmp_msg_0_0.z = 0.2009480405937364;
    tmp_tmp_msg_0_0.z_units = 225U;
    tmp_tmp_msg_0_0.travel_z = 0.9633378080065708;
    tmp_tmp_msg_0_0.travel_z_units = 176U;
    tmp_tmp_msg_0_0.delayed = 240U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CompassCalibration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 44210U;
    tmp_tmp_msg_0_1.lat = 0.2934561710602125;
    tmp_tmp_msg_0_1.lon = 0.6835748351312358;
    tmp_tmp_msg_0_1.z = 0.2069987136317123;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_tmp_msg_0_1.pitch = 0.024066592524072394;
    tmp_tmp_msg_0_1.amplitude = 0.10451045042692741;
    tmp_tmp_msg_0_1.duration = 48086U;
    tmp_tmp_msg_0_1.speed = 0.36337609845549557;
    tmp_tmp_msg_0_1.speed_units = 195U;
    tmp_tmp_msg_0_1.radius = 0.8803564260241242;
    tmp_tmp_msg_0_1.direction = 77U;
    tmp_tmp_msg_0_1.custom.assign("CCMZPMULVDMKNRPATTXXBIGEAHJUTSEZNTOUTNRUJMPYCWFPQBCVOEILBMBZYGVVIAEUEMDCMZFBRNHTQIOWCCQBRKLYYDYLGSXDESOEJIZKPTNXCBSEWKWWOUDSGDFXEHTJ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TrueSpeed tmp_msg_1;
    tmp_msg_1.value = 0.5482034974442096;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5717677089665956);
    msg.setSource(48085U);
    msg.setSourceEntity(134U);
    msg.setDestination(56800U);
    msg.setDestinationEntity(12U);
    msg.maneuver_id.assign("YHLKRXOTMCNXPMSKGIOUAZYYVNGOVETVWXPVM");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.7758348118057381;
    tmp_msg_0.lon = 0.5836440638479662;
    tmp_msg_0.z = 0.04246123881418418;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.speed = 0.4315651166172919;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.abort_z = 0.2731092239665821;
    tmp_msg_0.bearing = 0.664262988882508;
    tmp_msg_0.glide_slope = 32U;
    tmp_msg_0.glide_slope_alt = 0.8178392396562792;
    tmp_msg_0.custom.assign("IJIEGSJCZKFOUMEZBOWYSSXTHAQCYOGTJHPGMMETDTKHZMUHAJXSHDVRUDOWSWMLIGXTINCPSDQNFOKDBFBAADXSBUALQPTRLMSHAEFNRKRQMVFYYVNYEYHJLKIDOKYJTXVONHKUEBSBQCLVJJPZVWFYQPZBGTWVBPCWMGIGXCUQNICMZNCKGEBQVBFSLELVMZKLRAA");
    msg.data.set(tmp_msg_0);
    IMC::DissolvedOxygen tmp_msg_1;
    tmp_msg_1.value = 0.40183949870663227;
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
    msg.setTimeStamp(0.8429107531130918);
    msg.setSource(55647U);
    msg.setSourceEntity(28U);
    msg.setDestination(7219U);
    msg.setDestinationEntity(239U);
    msg.maneuver_id.assign("HIOADYMDGFEVOPWLCWZZVNKTMDISCQXAUKEFSSABBWRSELGPRGHBHIVUY");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 45082U;
    tmp_msg_0.lat = 0.1907094702890918;
    tmp_msg_0.lon = 0.21811105158873623;
    tmp_msg_0.z = 0.44931403724921537;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.speed = 0.031027653660962273;
    tmp_msg_0.speed_units = 159U;
    tmp_msg_0.bearing = 0.3113788920268009;
    tmp_msg_0.cross_angle = 0.2761959445396085;
    tmp_msg_0.width = 0.651399899264118;
    tmp_msg_0.length = 0.7664535818689941;
    tmp_msg_0.hstep = 0.18839931602215854;
    tmp_msg_0.coff = 193U;
    tmp_msg_0.alternation = 233U;
    tmp_msg_0.flags = 103U;
    tmp_msg_0.custom.assign("UBFMYERYBUMJKFSWFCDQTUSXUPPTIGMNDHQKXMADHYYJWALQRNZHKBIZJTXJLIUHZMLOHBKYHPDIOKCTRDWNZERPGAOTRXPQHIESSCWTNLFSVDVODVMG");
    msg.data.set(tmp_msg_0);
    IMC::VersionInfo tmp_msg_1;
    tmp_msg_1.op = 77U;
    tmp_msg_1.version.assign("HONUIOHPNKQLRNKFFDMVRPBSIRHUJWGXFUQCEZYCYLAZOPLPGYIVOXKBVIGUFQSUPZCNWNMEIGZHVSRURFQPPTOGVNOJBLNDTXCBWJAWQSHYQJTWIYDLR");
    tmp_msg_1.description.assign("PKPRYKVSFNYYXFVDERXVSEOYAOBHAZJURZMRTXMEBADEQMMFPLXWGIMVHNIAYSJKELVYGTHTBNDLEUGUWNUQKJLR");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GpsFixRejection tmp_msg_2;
    tmp_msg_2.utc_time = 0.9522039094627319;
    tmp_msg_2.reason = 44U;
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
    msg.setTimeStamp(0.40473946427756724);
    msg.setSource(9959U);
    msg.setSourceEntity(132U);
    msg.setDestination(49522U);
    msg.setDestinationEntity(245U);
    msg.maneuver_id.assign("NOPYVSVQRAPTPIFKZQIBFSUWLEREERGOBFHUKTXPCMAGBFJXYFQOINZZTJGKMZUHOHKLSUEMWTXHNKSDGZVOJYQNNWNJ");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 12224U;
    tmp_msg_0.name.assign("OCNXNNSFQXJABVQOIHDRRBKDFYDPREFLBTLUJCMDJNHLKZKJCEZEHKVTPHWXJFUPTOEMLGSGFMWLXDYHJEOEKDPTAORBZUKY");
    tmp_msg_0.custom.assign("JJMCJMGASAQNHWJJSKEWGOZHCVCPZLTETAYWEDFFVBSGBNUVQMCQFIHCXMYTKJADKIKOLBIXZQZRYSDVZPLALUOTHBFKEEMALWHUULPGZOVCMXFGKDPRZENQNWIJEPWKSTPCNVEFWNIRWBURYCHYPBWUALTXRQTNDRBFIYGG");
    msg.data.set(tmp_msg_0);
    IMC::Land tmp_msg_1;
    tmp_msg_1.lat = 0.24283180415287053;
    tmp_msg_1.lon = 0.4951333987466663;
    tmp_msg_1.z = 0.3631812503664008;
    tmp_msg_1.z_units = 168U;
    tmp_msg_1.speed = 0.4007918977196149;
    tmp_msg_1.speed_units = 199U;
    tmp_msg_1.abort_z = 0.2866190690178966;
    tmp_msg_1.bearing = 0.9132332926088628;
    tmp_msg_1.glide_slope = 167U;
    tmp_msg_1.glide_slope_alt = 0.7413500296800334;
    tmp_msg_1.custom.assign("PFMYREVNTEABIMZGJDPAVEVWXFZGMTBXWVDDNJWHMNGZCCTQAESHUFRHBEXMNZYOOHLEYXLIKMMVDCANIZITUSWRFBSONKHBCHXOQJNOYSSXCUOIZORWKLJFUGBQKYEAXATL");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ButtonEvent tmp_msg_2;
    tmp_msg_2.button = 8U;
    tmp_msg_2.value = 75U;
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
    msg.setTimeStamp(0.8895571879604236);
    msg.setSource(58187U);
    msg.setSourceEntity(176U);
    msg.setDestination(48582U);
    msg.setDestinationEntity(229U);
    msg.source_man.assign("MAKTRMWCFUGGSONXYEDHYASKUBOUFYIOLKTQEYBHP");
    msg.dest_man.assign("FTNOCUTTCWQNKVGCGGUKMAXTYMXJKMOVZRKYVIDBHJOHKQHAYHAZEXXJRFPDMFJHZERHWFVIXBWKEPLEYSBIZUQZIXNCUJVSQQPAFTRJVDLLBCNDSXZFFNDUVGNDGGRAZWIMHSALECQQNSYPVPJOGUOBWCCASRSHTYIEQQTXBUKZWIUWAMTYKGXGHPFLPOBEMWODLUVBMSDSPKSEFILVEFOJRLWMNAOCBCIZYQRNMKHZXARBULPTJLD");
    msg.conditions.assign("YTZSKXVMJQKHVGKRQGBDBZPTHHZJQUTVNFCZOHFSVNVCBNGWLRAILLYGSSJKWOJQTAAGCFEIBXZIMXNDDLONRCTKDIUGVELVKAJAJLAOGYPY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UPXTKFMEBTXYSCQLHULMZAEURCNCLKSOBRHNHCWWEWKYIJDYIAAFEFMLUJQIMVNWKQHPSROGBLBAQDFGCGJMJBGJTVRJTADQQSMUHRXXRDDFTEHZNIEXPYCCMFONRMWJYHQSLBYNWAKDPYBXUIPYSVZTETAVFNKQPOOFOSVSFPGQIIKGAFSNCTRWMDKEEVBERBGZVGOCGXACVYDDLWHGHZRANIPUL");
    tmp_msg_0.predicate.assign("VMSJQNIHWLYFAPFNGJZEHVWSUPADYAMHYEHJJNWQJDSCCKBGLHERHZWTCDZASKXBMPMKVVAATPCBIUFGZNPSILCRWUULYAWYCYXPQLMUQTVCQGLLGBJXVZKZDKIPORSGSFDQZDKUFAYPNUBETNLWRVECFCHQOOSAULKGWPQGYSQXCUXSDKUWMXTKEGFOJINEXVKOTTRIPBRZWMATIDTTNVMGHXFEIFDYHBRNLJYORFNXOBORRZZH");
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
    msg.setTimeStamp(0.9511231228924539);
    msg.setSource(5999U);
    msg.setSourceEntity(130U);
    msg.setDestination(9526U);
    msg.setDestinationEntity(142U);
    msg.source_man.assign("HRRHTWLQDKIMPZJHZKBAJBWITWFKCNZUYOPLUJVNMIZOTWHLJSTYALMWCTSDUJQIEMCPDARFHVP");
    msg.dest_man.assign("UVMORBOFDUNFOCDLIXDKAAPJDNKWZOXFTVLWOZNVSFPQHIBSJQNBJXVUJWZQPTLOWGPMGWBFISXRHPEAJWSFXPKYUCHBSGCVQEHROSHMZGZLVYCCIBTLZMEMYFEBXAGACPGIDJGWWKXEEQTOQK");
    msg.conditions.assign("RKTRPIVZYPGHTBOLGGYXWABJLHCVYIWQSSHGREKFEAWNXFTUTDFJPRBFHELLODKEOLSXDJZCKOYSNSCAIJNSBXAUJEZWFDVDTDFZUEXQORNUMNUZVNZHYIINPIOQTVTBAAEVJTVGOIABERZKSEQMEIZWQHJXQKYHGXOAXYLJZULUUFQGCODMXHSYCMVSOBFYHMRQJARKIPKNVWCPCDMTKXYQRPBUGJDWNWLMLGRVWMMPSWPGBCFM");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5645552872431902;
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
    msg.setTimeStamp(0.38487343932103424);
    msg.setSource(46800U);
    msg.setSourceEntity(114U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(111U);
    msg.source_man.assign("QTWHGULDMVKGVODCHOEBMXIOSWD");
    msg.dest_man.assign("LCZBHWXWHNSYXVCZZJINAJWSNLGUEKMPYRFIUDZXBHFFHVUDJRPOZDJCTKEJBUCKNRXTKOCRQIQUVLOPXUGMEHGLYYWCSVRINFVLODITHDSINABXMSBCCUDIZGQUZFODKWIJPQ");
    msg.conditions.assign("YCQAJBULJPKSWYKQOIQDHEGEVORZGUQNHAYDFEECNFWOXYLZYHQWRZCMTGWARJLJYNHJFKGRNBBSEJWUCIUWZLUCTWATBTBLVQUSPYTCSYQPORNOXOMCLIJKTUIGVVBELSMPPBATVABKRNXDSHQDHTZAZZXLCMFTAQVYIYORQKCHPXXFJKRNMISDISMEPWPNMAVFRSPGDKXZOXRXSLLV");

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
    msg.setTimeStamp(0.7056050554280463);
    msg.setSource(19478U);
    msg.setSourceEntity(68U);
    msg.setDestination(549U);
    msg.setDestinationEntity(26U);
    msg.command = 250U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VLFXYFQCQBLASMUEAERSNAEHQBEVIWAHZYHTPTJYTDGRJJBLRPFDTCUOSLXWJVILMAYNSLCPXMRSTGDEIVTGVPOJZJARTQGJXDLUHQEVRNOXZQGBOANURGWZHZGCBVMBZTIIOPMDFKXZCDUPCEBOFNJRKFUHWIIVQHWIYPGSTOGMTLXOZX");
    tmp_msg_0.description.assign("GUJFWHECRDNVTRRYGOXYJAOXNEABRTBFPQWUJCNTWQVNFDJXYIPUJZEYIZBFR");
    tmp_msg_0.vnamespace.assign("HOCKHSRWZELITCJNPXPGRQMOXIKXSUZVDPVIEPBNLNKBQSUILLCVMIIFZEZSVXRNZQAWYEDTGVDKVXSKKCUWBGGDUNALKOTMAUVHNXOMFGQZVWOWMABLHDGTHPMFWSQLYDPJJCPADMFXTJTROLSYQIIRYPJFISDUYHCZZJQYEIAMUHZTNTJRMR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QYFPXWATZKIFBUCBZZPHETNOABNZWPCFEORMVKPSTVSGYJDLHLQIZROAUCOMLDWTEMERGLNEDBRZURCOKEQOQFOYDQJIHGFKURHIXXFVTYN");
    tmp_tmp_msg_0_0.value.assign("HZPXIIRUAEEZNQPRXROKYLB");
    tmp_tmp_msg_0_0.type = 90U;
    tmp_tmp_msg_0_0.access = 168U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AWEYDFENKRTLTPLDSMETZVLYOZQXJXDZJYJDVCKCTKQXRYOOZGP");
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
    msg.setTimeStamp(0.18186903222386797);
    msg.setSource(10248U);
    msg.setSourceEntity(153U);
    msg.setDestination(56677U);
    msg.setDestinationEntity(3U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RNZBKNQHPDFTIIDKXLTYWPAKUVHQRPKOAFSCPNLLXPUUCRKSPNATWFTXQMUGUVQNWVAUTFQIMOAQEZZMIRGHEIWEEHFCDLDMTOFPXSJWJYOIEUHENJCPJFBSNHLEBCCDBCDYQJNDTAGZBYYIIKHPLSBRJVVWDAOTECJXXLAM");
    tmp_msg_0.description.assign("GHWBGULBQUYTCOCE");
    tmp_msg_0.vnamespace.assign("AZAXPNQXNNZOFUABTBRUQHRPREHHIHQPMUJPYTEOOJPIBGNYMXYZCTNXMIHODFLRQSYKGVUCJUSWNBOUQMLYZLKSHHPZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HLSKEHRPEEKXADUMIJNZETGIAFOWMFBCEBYLTHJYDHTZJZVBICYBEMEFCLTNUPRQYJHFXPQAMVARMQDVQMQIZZFYTCWPYXIMWNESBZJXUGUAQBWVGZDGKKGPUJXQFTKQER");
    tmp_tmp_msg_0_0.value.assign("IDENINUMNTJGDARULVFXBIBHUWMLUDHFOTYHQUKTEJGYSOPBEZMKNMSBRZKVAXJQLEZSTXTOCPOZPHOSPBQKCIFCALCFSADMGWTBJNSKXSZNXEGSTFNHZDIYTHWBFWOMOVFCDXXUCYPLPQJBXVKGGDXQZBRPIZVKRILOUCJZRYWDAKMUAUMPQAYREVWKRRIYPVXRWLSGAYNQAWLCVQRJSIFGNTEUDHGLPHEHYENABZYMWLOIVCWHTJDCFM");
    tmp_tmp_msg_0_0.type = 204U;
    tmp_tmp_msg_0_0.access = 100U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XHQUKRLRGTFBRMXPXVOYLCHULKVBOJMFPOYCBMIVDJZWRGBYIEZTXQLDSFJQDHLDDUETKSFOWUIJZAQQQGYAEDLSBRIWSVGXPADPTCPMBKJXICJFAGZ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EIYRMJYCJVLYKPZAKUGFUOZFYNKPRURNAXMYHCUAAWOZVDHHDFSELPKXIPOEBBEHTYRTHGGTNTYMSKJCGPWDXATQCJZVOMZNQVRRLAKUBQIQULKCWLDGPWPMDFJQMESHHVBXQGEIKCPDTRVRRGAXZTIIX");
    tmp_tmp_msg_0_1.dest_man.assign("NERKZOFKDSUKBNAGWMNPDYDPWSAVEXNLLUTLRYMOSTYQRLXOPKEJYWRKBMKFFANRGIGADGTRTBWYWSGHJXKGYQFYAIMOHIEBVJVCDIMACEPSSHIGEROXNREXODMHQFFFHHHQCJUZMXUAVPWIYWQXMSZUPDUCDIHCCPZITWKFVWTJCIPBUMJGOENVVBLRLGAAIOXZEBZHJOSZMWQCZJPQPEUDXSQXUZHBNY");
    tmp_tmp_msg_0_1.conditions.assign("WXFKENXIIMJEMLBBNZUTHZGULWBCNKQSPHJTXHGONCATMARSBWHWQTBMQICWARVGFRVEARJZGFVVOLRKWQPFLQFEOOYXXPNZYMGHEDLFDVDYBJYCYRESGGYJIXLCWZGZSTJVZWKCANQDLKJOHQTSAFISYLSAUXVMZPFPPZESWTAOGFERQXY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Formation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.formation_name.assign("QRPSRBEXPFOTMWRCEPLSXWKYFWBTVLQEQDGRYEAWVBPQPYZVIOVPXXZOMQFTUCOKNINQMBRQUHLSNDOOEISXZJRDKRGOMAAZGSZJKZYTHWZWUXKHNGSYJAYDJEUDJHUJUZCMTCCMGNYKUNXZQIEBIHTYRNOQHXDVTCCFFOKMSAGVDBBBLIXOZPALI");
    tmp_tmp_msg_0_2.type = 113U;
    tmp_tmp_msg_0_2.op = 58U;
    tmp_tmp_msg_0_2.group_name.assign("YUGERKQCNIIXDUZVXCNMQKOIUHBYOSOAXWRGOJFLWACJMVBQOXLJBQVNFKPPKSNSRTMMVKPJLDVTEVQGMNHPBLJUPAREFBZPYBKDYTVPQYZWYAMERNKRTBNXQZMAAIZCLSHXGJVDJGZSPCSHFWNCLGOIILNWIECBXLEYUUDTUEWXHZYQTUMSTZBHPOKWUVABRYCFSFGODJOCMDAWDVH");
    tmp_tmp_msg_0_2.plan_id.assign("QOLCFRSVYMZZKNLMFKMKPJZSTWILPGOZXVCHHXYWJRNMUDTIPXOUNONHUNABEPUTLPXGTXDKMCEQJMQZEEWEBWWXCBQMXVUPWVIASBLFJGYAXYPRQJFCHZARYADCLEWDQGBTZNATJCUGKXIFGQNHQHWMYHRKSALEFBCMGIISEIKHOGFSPBVRCRZSOVGUIJLDUHXIHZOQAODGIOMSTYWZNEFAJKYFTSVDKCADFVSBOVTLBWTN");
    tmp_tmp_msg_0_2.description.assign("HAXTJQFWZWUBXQMHUTRYSBREZUUDTSUEMYPNWJCONUELTIGLQMNNJGOFITHPGARQPAACDJYPKGPZEBVBRFMKZCLMRTANJDCXRKQOAHEYPKGLNUJODISINDFCTAMNFDYREFSPJKGXSHWDSIZVVVSYXVERVBDKPGVXOVIOGBDXLCXHAOKILRFHMSLWLKYKBYWHGAMN");
    tmp_tmp_msg_0_2.reference_frame = 223U;
    tmp_tmp_msg_0_2.leader_bank_lim = 0.43903669464274353;
    tmp_tmp_msg_0_2.leader_speed_min = 0.8682238418708847;
    tmp_tmp_msg_0_2.leader_speed_max = 0.6777176960758959;
    tmp_tmp_msg_0_2.leader_alt_min = 0.03393532705012803;
    tmp_tmp_msg_0_2.leader_alt_max = 0.8292358107509218;
    tmp_tmp_msg_0_2.pos_sim_err_lim = 0.3278051362236697;
    tmp_tmp_msg_0_2.pos_sim_err_wrn = 0.8511132238524907;
    tmp_tmp_msg_0_2.pos_sim_err_timeout = 53432U;
    tmp_tmp_msg_0_2.converg_max = 0.5778203426901739;
    tmp_tmp_msg_0_2.converg_timeout = 40817U;
    tmp_tmp_msg_0_2.comms_timeout = 30702U;
    tmp_tmp_msg_0_2.turb_lim = 0.7194104893376542;
    tmp_tmp_msg_0_2.custom.assign("IWJJOGGLJDBXBYBNCXAZQHWFWRYXDIOPSFMIJ");
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
    msg.setTimeStamp(0.4278758918988914);
    msg.setSource(35576U);
    msg.setSourceEntity(99U);
    msg.setDestination(34368U);
    msg.setDestinationEntity(56U);
    msg.command = 121U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EWHXCCJWWZEGDPTHQPEXEBDGJDNHCORYBGQCTELZSAMUMQXBVROIWVIMPHJKEDQAOCNVDAENSWKYOMIWJQUCCOOXLSFHKBKNYZSRSRJOSTYODMUPFRFPGTQYXKYGGPNMUZNEWOJMGMSLTGFRCVCDANHZNATJQFIKPYTALUABDKAZRUUTXVBNIWFYFIPUPHZURFRBFV");
    tmp_msg_0.description.assign("PMPCKHOZAYRQWZBBEGSAXRJUNSDKRC");
    tmp_msg_0.vnamespace.assign("CNBUYPZHREATKEBMWCDYRCBSFWPYRORAEYTGKQLOLOAWBNVHMJKDPLYDEKHTBTSJJIXSRIIHMXYDZLXMBPNKDTXDUZPOXGVXTGJLDLDFCQCJYUVACAGPYUASFNOFEWZVRWAUOGATXKYUZVCGJZWFLLITKHZWIKJIDSVNJSHLBTEIQGQJQWIVRPNMQMUOREMEHASQWNMYXVHGQPIEZXPGTORBM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WMPYITOUHBNICIXFCZPKHAJUMAPXROCMOKLFPSGHBVDJZNPFSBDEHHPYVSKOYATBJ");
    tmp_tmp_msg_0_0.value.assign("HCTSGHFAWJEJJKHVHQCWDHWYAVZXZJDWM");
    tmp_tmp_msg_0_0.type = 11U;
    tmp_tmp_msg_0_0.access = 203U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OITCCMCFYZIXROJSPVTFECBASUREACATZGWXLSOWHVNNYKVTNVLIMFWYNMPQNLKQXOHULHTUQJRBJLSHDMBZMLHOYIUCUJH");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TKFPSNYGMVQBGPLZOPNBAHARQGEACEIMULCRMFRIGKOP");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 25220U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5047412587516482;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6653527513814147;
    tmp_tmp_tmp_msg_0_1_0.z = 0.496443555052668;
    tmp_tmp_tmp_msg_0_1_0.z_units = 253U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.3457292640202928;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 123U;
    tmp_tmp_tmp_msg_0_1_0.duration = 12955U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.7086466004465405;
    tmp_tmp_tmp_msg_0_1_0.flags = 227U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WHELOCYTLPLQRQOEDBBOGYGDKKJXJNZZVWBEYTWWAGPAANQWPTGIKTLBCXOWZZKJGMVZHCZQMZJRJRHLAUBHMYYFNIRXDUNALFXTKCVDSJTUPCMXEATSEQPWISEHQFLLIBCFAXOSYEBFSXGLUXKKMHTDFBNZFQAEDZVMCSWOUQJPASFV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::GpsFix tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.validity = 33435U;
    tmp_tmp_tmp_msg_0_1_1.type = 250U;
    tmp_tmp_tmp_msg_0_1_1.utc_year = 9363U;
    tmp_tmp_tmp_msg_0_1_1.utc_month = 81U;
    tmp_tmp_tmp_msg_0_1_1.utc_day = 166U;
    tmp_tmp_tmp_msg_0_1_1.utc_time = 0.3080862926054432;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.7547284805653844;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.708251128862437;
    tmp_tmp_tmp_msg_0_1_1.height = 0.5538172163019166;
    tmp_tmp_tmp_msg_0_1_1.satellites = 20U;
    tmp_tmp_tmp_msg_0_1_1.cog = 0.09797944339674913;
    tmp_tmp_tmp_msg_0_1_1.sog = 0.6055559685624865;
    tmp_tmp_tmp_msg_0_1_1.hdop = 0.4038020999237937;
    tmp_tmp_tmp_msg_0_1_1.vdop = 0.541137555653812;
    tmp_tmp_tmp_msg_0_1_1.hacc = 0.5546674903046579;
    tmp_tmp_tmp_msg_0_1_1.vacc = 0.2717374329661798;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::FollowReference tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.control_src = 21505U;
    tmp_tmp_msg_0_2.control_ent = 160U;
    tmp_tmp_msg_0_2.timeout = 0.5963898781933281;
    tmp_tmp_msg_0_2.loiter_radius = 0.9907773704844418;
    tmp_tmp_msg_0_2.altitude_interval = 0.3908972185672951;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.7432354376054552);
    msg.setSource(13783U);
    msg.setSourceEntity(73U);
    msg.setDestination(13926U);
    msg.setDestinationEntity(9U);
    msg.state = 31U;
    msg.plan_id.assign("DYGHVREYFJWBPUYEAVOHOHUWZQCFSMGQBVRORSCJUPXQLFULWAPDITJGMWMBIECZJBOKLMFQDXATSDCCBEPLCSWNGAKBWALCZYHARNADE");
    msg.comm_level = 152U;

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
    msg.setTimeStamp(0.9756053768669736);
    msg.setSource(22333U);
    msg.setSourceEntity(201U);
    msg.setDestination(8561U);
    msg.setDestinationEntity(134U);
    msg.state = 198U;
    msg.plan_id.assign("NAJKRZQYUISCLKEOAROJIATEXRSOCOYDBPYSTCTNMJVXLXQXGDHPLMGRHTQIEEJAHBDPOEWGYIMBBCVBFLZQAQNIWHYDMGDDKGRMWTEXHUSQFPUJKZWINZVAXCFADYSDZMFHJKDKRAAXUPLVEWBQGUJXLKZGOBCFFTNRZPTVFVNKUCKMCHBN");
    msg.comm_level = 116U;

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
    msg.setTimeStamp(0.24753055352297715);
    msg.setSource(28972U);
    msg.setSourceEntity(49U);
    msg.setDestination(10335U);
    msg.setDestinationEntity(200U);
    msg.state = 156U;
    msg.plan_id.assign("CXPKHABURHIKQHQEYLZSGCUKEGANKRESQGTUYUMCYTANOOVVWDVEFUGQXXQLQWUUAIPLSCQEOXKYWMZTSZCANHPTNPJZXLBRWZGSNPMFNWHXOJAYDKPONBTRLXKJXBFVKLBGOYHGXDYIIOAZWIRUJCWLDPPMTOZMFGPJDVYEUZTZSANWQFHXSTPBWJSIHHLJGVHFIDLSQRKEIMVROD");
    msg.comm_level = 93U;

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
    msg.setTimeStamp(0.615949478577843);
    msg.setSource(14689U);
    msg.setSourceEntity(243U);
    msg.setDestination(16985U);
    msg.setDestinationEntity(9U);
    msg.type = 31U;
    msg.op = 158U;
    msg.request_id = 25255U;
    msg.plan_id.assign("NWPZIGFLOPQDJMBABQSPIVOOVRWZBFVJNSFWLASEXLYDTPVIOUDGDCYXHVXHCUUHRLYSYKKQGNREOZQDTJERYIBHKFQVXLJLGJXCTAQJMRTNESEWMSBYSZFALAYGEMQGOLNWWPITRYMKJBDOEYBWCBGLABZNVRIIHATPOE");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.6992436734148674;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AJGZGRZHZRYRNCMHZPPGWJKQARQDLNFMTMHPWJPWVSIJUODADUAUIGVLCFNCXKIMWYNDCXYBSMLEONTTKKQIROBODUODKSSSXBETITAUUKQVECNPNNSERYJCXHBDLCGFIEOHVBYWQUWGUXOKMTPVPNWFLZQZUAMLGJOJJIXMYAZFBVOQBFYGHFVSSSQK");

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
    msg.setTimeStamp(0.014718007518829568);
    msg.setSource(42466U);
    msg.setSourceEntity(212U);
    msg.setDestination(62934U);
    msg.setDestinationEntity(144U);
    msg.type = 214U;
    msg.op = 248U;
    msg.request_id = 10291U;
    msg.plan_id.assign("GXJMJGWLHYPPRQOWAKHXBCLBWHXIGLDNGFIAXUJCBSVZQAOWHUSIEQLJVWOFTOSDFOGZPVQCYOOWMSDHUAQRNPBAKMDEMTTYDLVQXYEZIJIGTVBTCTXSWXHZTUSXRBKTARUKJZOXQCFRLRADLUUYTYNGCIFPKKRWEWKHZPMQCFFBPMCFJEPIQUVVYYMCDBFETEAOPDHQZHSZNJRGSVLNNYXGDGF");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.33626832498785075;
    tmp_msg_0.v = 0.18766897849401454;
    tmp_msg_0.w = 0.2981314036799798;
    tmp_msg_0.p = 0.9867161525324091;
    tmp_msg_0.q = 0.5207212077589028;
    tmp_msg_0.r = 0.7765706514001807;
    tmp_msg_0.flags = 78U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QPZKRPODRVRWESOLGFYHYWNCMZKNQGXJLPGOUUXIWFWUFUQIYRVXBELGWRBSVWYHBSNCOADNTJJCNEXBBTWGWZUTRCPCPJXFVWZKDJHMVEXPZKKLHZKHTJOYMPLHTQXUUSV");

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
    msg.setTimeStamp(0.6084021334746305);
    msg.setSource(39389U);
    msg.setSourceEntity(195U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(230U);
    msg.type = 133U;
    msg.op = 28U;
    msg.request_id = 1358U;
    msg.plan_id.assign("DXCJTONCSBAJTSBNVTKUNENLLXEYFNMPDWQLVQLQIUGXZAMUTRMCJQMMIRBPHYCXDKGPLITIYPNSKFQODSRLXVDUBHPHOKHEQFOTIHFNGVVDJWBHMOCOZHATOBVFUPJWDWEYUBZRXX");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 173U;
    tmp_msg_0.eta = 8067U;
    tmp_msg_0.info.assign("JNWZASZOPVBMWPVWXFMVUDGMZHCDMHZMAMFQRDCQQENXPLIEVDUFXIJANFROVTDQYVAIKEKTHOPJWMZGTRDLUJDGTBBECCGRZROHIHUHJITVYYCXYJKKUTMEROYYBGPDYTQNKZFWFJVZFGMYNCOXSQAPQLAVKIXKCNWCWUBSINPWSSSYECNHNPPBQLBUQDKSBOGUFJSWERURFARBTIJLLFSBXAAYCJEKUMOGEZEQLOPXKXHGWHZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWIDFHNXMKJOSLKFUSILOVKXZGWOYPCQFHXBMPJCIQFZSMJHPFWHQGPZAUZYJLRYPGHRHMZIGINLOPMJXFAUQMYWLTRBWVCCNNTLTTSEGDQEHNZOB");

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
    msg.setTimeStamp(0.5424079123406078);
    msg.setSource(24129U);
    msg.setSourceEntity(0U);
    msg.setDestination(16475U);
    msg.setDestinationEntity(158U);
    msg.plan_count = 40303U;
    msg.plan_size = 616657701U;
    msg.change_time = 0.3805970596412721;
    msg.change_sid = 27293U;
    msg.change_sname.assign("FKIUBSEHADSZYABIMPQLEHMCDZEXWYVAYKNVSEKBODGGOIJTX");
    const signed char tmp_msg_0[] = {56, 6, 20, -15, -98, 61, -39, 43, -1, -20, -53, -79, -56, -39, -75, 39, -24, 102, 36, -94, -111, -74, 73, -1, 31, 14, -127, 44, -20, 99, -79, -49, 41, -15, 60, 26, 96, 112, 22, -30, 112, 33, -83, -22, 36, 15, 56, 31, 36, -124, 95, -81, -68, -55, -47, 74, -85, -49, 111, -126, 41, -75, 25, -17, -60, -12, -127, 73, -92, -75, -43, 98, -1, 1, -25, 89, 52, 75, -115, -114, -42, 63, -41, -114, -14, 67, -102, 90, -86, -32, -61, -87, 19, -121, 62, -50, 101, 61, -10, 4, -14, 45, 99, -54, 56, 17, 48, -10, -121, 85, -82, 46, 101, 87, 111, 109, -23, -5, -87, -40, -54, -18, -109, -4, 87, 73, 71, 6, 125, 102, -2, -122, -12, -3, 65, -68, -45, -74, -79, 35, 67, -92, 45, -109, -100, 73, 116, -114, -24, -113, -99, -1, -24, 93, -84, -43, -63, 85, -80, -94, 9, 15, 28, 126, -1, 85, 121, -64, 56, 108, 90, 32, 95, -17, -105, -62, 116, -40, -124, -29, -82, 35, -63, -6, 95, -97, -31};
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
    msg.setTimeStamp(0.10772414413589093);
    msg.setSource(65047U);
    msg.setSourceEntity(238U);
    msg.setDestination(26076U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 16710U;
    msg.plan_size = 3449159504U;
    msg.change_time = 0.5835783531439995;
    msg.change_sid = 61499U;
    msg.change_sname.assign("UINITOHPDFFQXUXKPDWDQIHNSFMOVSJQJWSIAYOJZGEMXEVCXVMAGQWHZPVBYWSLEOTRJYTOGKJHWLBHBSRPXHBAPNGSUKVVNGOUMYDYWYTJYTLZXOBJWEZUCDCDPUYYOTHDMGJATEVFKAUOZIKQASNBZHSNDMRPLVCEUZBPCFELMWRGPDLXBHWVCBEFATUX");
    const signed char tmp_msg_0[] = {79, -43, -68, 48, -102, -69, -51, -58, -105, -121, -22, -90, 126, 70, 55, -84, -114, 99, 66, 72, -26, -127, -93, -103, 114, -85, -98, 114, 55, -98, 22, -92, -114, 91, -66, -22, -41, 0, -66, -47, 52, -37, -98, 53, -94, -54, -124, 78, -21, -116, 33, -102, -117, -2, -115, -71, -109, 31, -106, 94, -44, 101, 85, 113, 88, -92, -95, -46, -72, 115, -117, 38, -54, -106, -111, 33, -60, 94, -7, -14, 119, 88, 6, -30, 8, 14, -106, 49, -57, -35, 13, -53, -88, -40, 75, 69, -79, -67, -31, -38, 18, -25, -99, 126, -54, -120, 69, 7, -102, 9, -45, -34, 62, -117, -59, -25, 116, 93, -106, -17, -43, -122, -119, 5, -69, -105, -96, 38, 41, 24, -95, -126, -77, 97, 14, 69, 2, 98, -123, -106, -78, 36, 125, 12, -14, 88, -115, 90, 52, 55, 78, -111, -2, -20, 56, 24, 37, -104, 30, -74, -66, -73, -5, 30, -126, 21, 108, 59, -85, 76, 101, -118, 114, -17, 37, -11, 15, -44, 100, 97, 55, 89, -78, 28, 86, 27, 26, 66, 94, 85, 2, 61, 101, -113, 82, 22, 68, -48, 57, 68, 72, 109, -18, -61, -76, -57, -58, -90, -33, -41, 34, 50, -41, 44, 46, -19, -92, 120, -37, -91, 109, 11, -115, 68, -127, 112, 18, -122, 88, 84, -120, 34, -62, 20, -54, -118, -71, -30, -112, 57, 28, 26, 3};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LMZYLZDQMWQODANVUBUNNXQSFAWIOIDPJQTDXACNSEESJGPTKBLZUPQKDCSHWLINMRRHFVHRQPNHPJXLRRUILVMZDUJIJXGTEPFCKIYSJGGASHBHFTCQTFFVFEDVSCUWASZOLPPCTAXMLUKGBVVKAEYRDOIHYFIWKEWEMCKWTRWOKNYQMVGGZFYJMDRUXGAP");
    tmp_msg_1.plan_size = 21546U;
    tmp_msg_1.change_time = 0.49736251032948897;
    tmp_msg_1.change_sid = 36959U;
    tmp_msg_1.change_sname.assign("NYYBKVGIFLNPVDTFSUIUCEKHXZIMRBDBFARHFYFFEUUGQAGBIJRAZOLFVKMJYCEALDYYHRLSOOINCUPZWQWIOJCXXENUNNKCTGRLZLODMGKLBWWMVOMSAXQRPWMAGDHZCNOAAXLPJKVJCJFBOKWDZHZWZEBLILUGPNVPTHYXDQPTKSUZUMEWYR");
    const signed char tmp_tmp_msg_1_0[] = {72, -88, -16, -9, 57, -89, -126, 40, 99, 61, 2, 0, -73, 17, 6, 60, 39, 78, 90, 83, -33, 71, 59, 20, 101, -92, -17, 120, -80, 55, -52, -43, -31, 105, -82, -119, 112, -81, 4, -79, 1, 92, 62, 66, 115, 51, -20, 104, -44, 53, -19, -111, 78, 19, -114, -76, -106, 62, 100, 111, 88, 123, 16, 103, -120, 13, 20, -45, -48, -26, 82, 28, 121, -53, -79, -80, 79, -123, -79, 30, -27, -56, 82, 116, -95, -13, -119, -84, -11, 20, 4, -59, 40, -9, 72, 1, -63, 112, 126, 72, 45, -77, -61, 88, -107, -88, -42, -22, -67, 89, 97, 4, -34, 92, -25, 79, 52, 22, 71, 2, -12, -9, 73, -94, -52, 42, -55, -122, 93, 74, -107, -74, -102, -5, -2, 11, -108, -13, 59, -96, -92, -100, -53, -38, 99, 17, -27, 19, 117, 44, 36, -24, 95, -86, 18, -35, -51, -115, 8, 10, -18, 89, -84, -38, -120, -2, -115, 47, 106, -17, -49, -3, -66, 30, 21, -107, -86, 86, -115, -50, -55, -19, -90, -103, -108, -67, 34, -53, -20, -118, 21, -84, -29, -79, -83, 89, 40, 17, -94, 111, -79, -36};
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
    msg.setTimeStamp(0.39203341723585283);
    msg.setSource(21731U);
    msg.setSourceEntity(206U);
    msg.setDestination(47988U);
    msg.setDestinationEntity(231U);
    msg.plan_count = 12180U;
    msg.plan_size = 2920277559U;
    msg.change_time = 0.6102275726959034;
    msg.change_sid = 6138U;
    msg.change_sname.assign("JETPOGHWSTHYNDQUVSRYMPCTWUFGDESQRJCQSUMRPHLVKHRAYCUUIALDASNO");
    const signed char tmp_msg_0[] = {64, 72, 21, 106, -33, -42, -22, -88, 38, 66, 86, -80, -70, -74, -28, -119, 114, 113, -75, -12, 64, -93, -2, -51, 98, -46, -13, -31, 71, 77, -60, -39, -53, 42, 29, 26, 13, 62, 31, -36, 115, -122, -95, -38, 70, 50, -64, -9, 111, -101, 41, 19, -55, -10, -118, 50, 25, 75, 119, -8, 18, 89, -22, 42, 4};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TJDSPDFHNVNOADLXKXXVEUCQZCDTUNAPCCMRYPWKDYNGTJWEOQGXBUAJSFGLZFRVHDWWYOIMMMSCELQCVBZDBRBKLAJQIFBAHDVZNYCOYUWRQGVAJSUNGBZQPLPHMFZCGQORKGPXJANKUEGZETSUOXEMEBFCOSWIHARMHVKQKXZNBTLSOKIDPFDYHLIBMRFZCOLVFEIIVWYQSJRZJNHTMYPAWKRXTTRH");
    tmp_msg_1.plan_size = 40499U;
    tmp_msg_1.change_time = 0.3157291579514625;
    tmp_msg_1.change_sid = 59879U;
    tmp_msg_1.change_sname.assign("XRKCJWNVUNVWDAWJOKWQQCOPBJACLNOAESZJCWITVVLPWJPSMKZPQSBHILRRFFGHPBVWSRFLTYPNRHKLGFMCGBUVCQSJILMQWIESWEZUCKZCRZXMAWRGUVCDYGORNDOZXAISXHGUQDOHPEHDMUKJYAEABZDFHYUCTKMYPQKNFYXBVTGOTQT");
    const signed char tmp_tmp_msg_1_0[] = {87, 35, 6, -15, -95, -35, -87, -88, -37, -108, -39, 77, -61, -32, -60, 114, -22, -39, 9, 84, 86, 89, -118, 62, 97, -41, 103, -41, -7, -116, 81, -12, 113, 92, -116, -51, 114, -21, 88, -115, -34, 24, 58, -30, 29, 102, -39, -101, -104, -61, -93, 33, -38, 13, -46, 107, 34, 53, 24, 71, -86, 79, -2, -106, -1, 12, 50, 9, 88, -19, -66, 39, -127, -45, -104, 16, -117, 51, -93, 86, -75, -104, 113, -28, -30, -89, 124, -24, -56, -59, -92, -33, 35, 13, 51, -13, -60, -38, -33, -112, 65, -80, 63, -73, 111, 94, 79, 55, 105, -115, 101, -119, -6, 39, -58, 14, 65, -14, 9, 120, 73, -94, 19, -118, 69, 82, -105, -33, 97, 16, 112, 114, 86, -45, -99, -45, 113, -116, 101, -65, 72, 3, -18, 54, -49, -82, -93, 87, -98, -35, -29, 49, 81, 54, -95, 21, 100, 95, 60, 102, -93, 79, 35, -55, -108, -119, 87, 41, 7, 18, -88, -101, 47, 23, 105, -45, 61, -42, 81, -82, -98, -63, -5, 81, 63, -20, 48, -9, 92, -70, -86, 38, 65, -93, 76, -11, -38, 80, 31, 5, -58, -68, -25, 125, -4, 113, 120, -37, 99, 76, 18, 79, 62, 47, -90};
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
    msg.setTimeStamp(0.4436414618199612);
    msg.setSource(63185U);
    msg.setSourceEntity(51U);
    msg.setDestination(42666U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("IDHRULFFOQMAIXMAMUOBFUKCKCAXPLTSYGGEHTKSYRENIPQWRUMNHPKXKWIVJLPEUZEYXZPJKUHCQQHQJWNJOCTINVZIJFMBCDTCVQKGZXHGBQSFQJWACUVORVJDWTZGPAHD");
    msg.plan_size = 9744U;
    msg.change_time = 0.9641125949807977;
    msg.change_sid = 55080U;
    msg.change_sname.assign("BTWHKRRCYBPIAGJWPBDJNFWZJISTHUXQAVDKASETPKGYORFEBXRAIDSEFKL");
    const signed char tmp_msg_0[] = {-113, -52, -122, -31, 29, -54, -51, -60, -77, 41, -49, -13, 3, -94, -84, 44, 26, -84, -20, 5, 44, -36, -107, -56, -2, 46, -111, -10, -20, 92, -36, -55, 28, 58, -113, 17, -95, -118, 10, -102, 34, -71, -77, 35, -38, -51, -23, 57, -59, 52, -36, 14, 7, -45, -94, 108, -6, -10, -93, -59, -54, 33, -95, -41, -66, 37, -11, -108, 76, -79, -108, 105, -24, 110, 66, -26, 103, -64, -38, -21, -116, -13, 49, 3, -51, -83, 121, -20, 0, -101, -66, -102, 18, 38, 4, -82, 31, 43, 2, 114, 70, -65, 80, 110, -42, -4, -94, 124, 40, 108, 57, -112, 71, -52, -67, 58, 66, 98, -53, -62, 77, 42, 70, 62, 26, 64, 88, 71, -55, 98, -11, -101, -111, 35, -26, 88, 41, 87, -34, 66, -31, -1, -68, -124, 34, -97, 51, 57, 24, 10, 107, 125, -16, -30, -80, 17, -34, 95};
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
    msg.setTimeStamp(0.694414358064313);
    msg.setSource(17390U);
    msg.setSourceEntity(115U);
    msg.setDestination(51542U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("NTFNTGROJUOAHFJLBHPTDYGVLJUCNVBUXXFNFNUPASENQFGZAABZZVMPSGRBGLCHRPGCCXDXDIQAICIKGVLXEQYGZRQTMNDZOJIWHSQGEDBOAKVEUDWNYHPCPNSKWJMZWHFEPRQYXWLATXRXAHJWUEQYTOXTNPMVUIZSKJMKDTZQTMIBVILYMWSM");
    msg.plan_size = 39800U;
    msg.change_time = 0.6508604619844458;
    msg.change_sid = 6024U;
    msg.change_sname.assign("HUAYTMLCYZXWKYXBMVWDBFJXRZRRMEXBHYKQMMAZVONKQPUVCGXQLDTIQDTFMKKJTFGLIEIQDIOEHZDACW");
    const signed char tmp_msg_0[] = {-115, -84, -46, 53, 121, 76, 118, -37, 22, 85, 81, -122, -38};
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
    msg.setTimeStamp(0.3673517968270409);
    msg.setSource(37586U);
    msg.setSourceEntity(33U);
    msg.setDestination(50587U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("VTPTESTBMAWKYUCQWJUMYPHGNWDPXNIDPLZSAXCAMQFKRKJSZDBGFDUWMPGKIEKOYPXWXIOXHJOCLZVYLJQAIJHOOFAXRLNFKAULZRTMOUVTBVMEVKJPGAZCQQSHZBHESZLGCWBGKAMSCNNMGLTQUODSIERBY");
    msg.plan_size = 18044U;
    msg.change_time = 0.9228652321224404;
    msg.change_sid = 42185U;
    msg.change_sname.assign("UWZQOHCUJWKUSHCNJCERUDDINCPKCFYMFYBQLHUNQLZFOWALPDYVIPAZSTDLQOTYVPAYJRXIIDNAKBZCUVVUAZSGRZXKNHWRXRLUXOGIGMEPOBAWLCIVBHEQPEABQZUXVTKKFFHZAJOWSOQJATWORBTSFHMFLQNGRFSBBIXS");
    const signed char tmp_msg_0[] = {126, 38, -96, 120, -77, -112, -104, 4, 58, 82, -71, 120, -34, 105, 86, 53, -15, 18, -36, 50, -80, -63, -70, 105, 125, -92, -77, 19, -19, 87, 70, 38, -119, -6, -33, 17, 19, 50, 10, 71, -50, -113, 90, 100, -30, -50, -69, -73, -84, -45, 104, 2, 50, -41, -107, 70, 84, -71, 47, -34, 73, -117, -128, 30, 52, 118, -87, 49, -46, -71, 0, -60, -46, -29, 113, 91, -70, -53, -53, -29, -1, 13, -51, -103, 51, 115, 94, 50, -66, -61, -117, 108, 31, -115, 55, -83, -90, -55, -30, 77, -53, -64, 41, -52, -5, -13, -33, -67, -28, 99, -122, 90, 63, 62, -106, 102, 71, 17, -13, 11, -62, -83, 111, 26, 39, 46, 56, 111, 79, 70, -121, 114, -116, 79, -77, -31, 22, -48, -34, 89, 15, -117, -101, -94, 3, -95, 0, -6, -86, -64, 45, 88, -56, -94, 64, 63, 62, 88, 109, 119, 85, 118, -28, 53, 29, 102, -58, -102, 63, 81, 106, 113, -111, 103, -115, 45, 109, 49, 83, 9, 88, 48, -57, 92, 33, -47, -99, 61, 108, -64, 81, -54, -7, -23, 28, -34, -49, -120, -25, -83, -95, -67, -5, -35, -42, -98, -78, -76, -89, -23, -16, 69, 17, 18};
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
    msg.setTimeStamp(0.31849338314816145);
    msg.setSource(6476U);
    msg.setSourceEntity(232U);
    msg.setDestination(20189U);
    msg.setDestinationEntity(210U);
    msg.type = 50U;
    msg.op = 105U;
    msg.request_id = 17897U;
    msg.plan_id.assign("UPNNJUEOZMHMOPPDPRVUELGVBKENJDTDELDEFYEFHZSGPUOXTENIUMAKRNQFSKQIYAABVKZGOOSXXGZXWUDTCXBAYYRCFDCNTSMVXBSVQGSMUJKWIYBNBKRUIUUIFVRSZXJFATKZAHLWZGOOMOSWWNLSICREOYT");
    msg.flags = 62718U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 115U;
    tmp_msg_0.plan_id.assign("BVCSNNATUIDENJNJNBHPJBZSHMPSOZRFWYIAUCUMWYHAALOSIBOZVRYZEZUPQYBDLYEUMATDLTDPYEKVHKLWDGCFXAXEWKJIYOFXWOVMACGQBVJXVQJDFGDUCXSPNUF");
    tmp_msg_0.comm_level = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZLGPGIPUMMUVBOPXRRDGBLUVY");

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
    msg.setTimeStamp(0.8838719970384574);
    msg.setSource(4530U);
    msg.setSourceEntity(2U);
    msg.setDestination(45457U);
    msg.setDestinationEntity(6U);
    msg.type = 125U;
    msg.op = 247U;
    msg.request_id = 20225U;
    msg.plan_id.assign("EUFPOEGLBNMSLPNUIOHLWNMJBDYIAUZQKXNWZGXBUQJQIKIYRDDCNBMQVXHIHHEEHJGPNTVXSWEQFDDHSUGEBZBFWICYOBGUPVQTKEPMOSRXTFAVRJDSVYRCVZQEUFNCNGJZQRXOXSWLMSTUTMSAMLYAHAVRSXJHNAFRVIULAVWIGHKKZCK");
    msg.flags = 53958U;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 234U;
    tmp_msg_0.time_remain = 0.6317289783621594;
    tmp_msg_0.sched_time = 0.45276671494999254;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KTHTCIQZIXSLYELPJPXWLVFYJUSSNDOHSMCVVTAFAIQJSPAHOGWDZDUJGWRHOUNMVKBUIFPPGSSZPYRNWTFDATSZWJXZZEJPQAFORTYEKEOUMVBNXARURWXHNFQQBUBKGMAXMJTRGQCYSOIKYCFCXT");

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
    msg.setTimeStamp(0.4434859010870871);
    msg.setSource(1172U);
    msg.setSourceEntity(121U);
    msg.setDestination(36846U);
    msg.setDestinationEntity(213U);
    msg.type = 45U;
    msg.op = 156U;
    msg.request_id = 7460U;
    msg.plan_id.assign("WMTTHVNASUMSIBHAUEWTDHWFUCSZLX");
    msg.flags = 56611U;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.error.assign("UCTUDSWRYPHPXKEMDFNHTLEJMBJRZAHOCUKSEAMWJLVEHRGUYZXYPKBYYON");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCEXOBYTYPMLPISHLTOWIJNFDPQGAXERCKUBHSPFFRCOFDYORTWMOMTTLJARQAQYWDSQPGUSWITOYZNYDVGNNTZAHSMXRBVMAUOHNMCZMTLVPZKLVKQXYPQRXFGQEVWLHLECAUTCBSXVMBEZEJUINZWGKRXKFQZSFAANPVIUHBIWE");

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
    msg.setTimeStamp(0.9192993064239526);
    msg.setSource(17580U);
    msg.setSourceEntity(243U);
    msg.setDestination(12891U);
    msg.setDestinationEntity(1U);
    msg.state = 27U;
    msg.plan_id.assign("EYHUQQIAKWUERACURBAYEJHFUJIALOXBOUHPJPIASUHRBMYZZOEKQDTGHENALINQJKRRDVLCSTWRTCJVYIEMWXQUQKIFIOLCMDBMNVPUTEHWSVTBAOFKTZGDGEOFOKXKD");
    msg.plan_eta = 2086406229;
    msg.plan_progress = 0.7436252386736362;
    msg.man_id.assign("ULAIZSRGGPZOTTLADYONDXMSZITTXDMVFQFTOQTGJVXXSEJCMPTCUFMHUIPZK");
    msg.man_type = 29783U;
    msg.man_eta = 1342907117;
    msg.last_outcome = 54U;

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
    msg.setTimeStamp(0.28922324923476184);
    msg.setSource(36720U);
    msg.setSourceEntity(71U);
    msg.setDestination(63343U);
    msg.setDestinationEntity(161U);
    msg.state = 120U;
    msg.plan_id.assign("IHKMTWGYDNVVVEGFGIQCISBEOJAAKHEZAZPWVZ");
    msg.plan_eta = -249187904;
    msg.plan_progress = 0.7777528433310372;
    msg.man_id.assign("JEJWNYFOAPHKRNZZTEFBQPLFJXFJYIGNZTNVKURMTHUPWRUJTQBMWVPUMCZRBXSFHDKSQTLMCBUSFMOHSISQXKNIVLFGROQGAGBSXEHKJZDEAZEWIUVCQVYNZHVYADCBEAQARJTITMBOLFCUCPKBGQYZXDMVWVJLLYGIWSTPALYENRXKGDOPAMITGXWOGXMCNAIRLQYEHDO");
    msg.man_type = 15887U;
    msg.man_eta = 130651236;
    msg.last_outcome = 37U;

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
    msg.setTimeStamp(0.6187391462121612);
    msg.setSource(6660U);
    msg.setSourceEntity(32U);
    msg.setDestination(62636U);
    msg.setDestinationEntity(197U);
    msg.state = 49U;
    msg.plan_id.assign("COFNGWATCYUQISEIEDCOBSIPMIJOJYZVBUIJRXVWZKOYZHFFQYRMBGBQFZNOUTA");
    msg.plan_eta = 868733462;
    msg.plan_progress = 0.9211049645311499;
    msg.man_id.assign("UJLDYAUEZRYWXGDMAACSSEBVBHUQNHK");
    msg.man_type = 28094U;
    msg.man_eta = 973468974;
    msg.last_outcome = 229U;

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
    msg.setTimeStamp(0.5699498471956151);
    msg.setSource(8388U);
    msg.setSourceEntity(219U);
    msg.setDestination(18195U);
    msg.setDestinationEntity(82U);
    msg.name.assign("CWDNLAMLMHWSWPEAWADEZFFZVQGKVTVYFVRGNLUIMCCMRTJORZMEQPRZSKDIIOKZOUOZFDORTKLGNYYHRBIVXPJVCJCKNMHYFUYUSJXJLXBBTSKMHHRGQNATSNCPICKQRQBCYXEWIWEGZGYXJIATOTBMNFFSUPAWIBRCTYGVXPZGEBJVZDXPAQLXOIFSEDWBUHPBDJSUETKGYIPBNDDHNPFCLKLFLMAJQHOQEUU");
    msg.value.assign("MGUDVNMAKMLQYHACNFHDIBTJYBJHKHGAGKVTGDUXQZSLKSBSTSTRWWUTOA");
    msg.type = 188U;
    msg.access = 67U;

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
    msg.setTimeStamp(0.760696006699185);
    msg.setSource(2217U);
    msg.setSourceEntity(18U);
    msg.setDestination(35344U);
    msg.setDestinationEntity(46U);
    msg.name.assign("OTGQGAUIOTVMVSRERKGXIDFWEDMDZCXKAQVNGXCWJZKNZDCWIPNLMULOGPMBFQPNYGTJWYKUCBEJRJDAROEAIXHXYUWCKUEDQBSTSWMEBTPLJEMLHOBHYZYQWTBTITICAXALEAPCVWM");
    msg.value.assign("ULEDCWKVDQZRLOCBQSAHSMCBJKLNYUJMXFAHBBQYMAJOCFRYIENKVHSZMGYTCZQOWRZUYRBVXGJPTVNLIGMMONAGKSFASGTVVLNUSUSHWFRMGUHXEAWWOQWIWPDALVNXACFIFTXUWEJOLCOAXFRJLAZRRXGSHRKBQSZDJDIGTMTJJHWBVCLCQURFDHPMPLPHEVPQKEU");
    msg.type = 109U;
    msg.access = 83U;

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
    msg.setTimeStamp(0.7775591805060453);
    msg.setSource(34053U);
    msg.setSourceEntity(50U);
    msg.setDestination(12268U);
    msg.setDestinationEntity(74U);
    msg.name.assign("RNJIWAAQYTCCXLJKZQFETDHOVKXPJSUBTVLLLGPZTVICUWQEMEFHWUQZGVOYNEGBPDFYLRQUPAZBEZBPPQQWAQV");
    msg.value.assign("GSBBUQZHAMFTJHLCDXNGMKIIIQYOXWCSNZHGNAQDQAVFLTZUSRJITVEXRXKQLVIBMUGIKBTGCKGKQCHHYRWWFTNWSUOYEGLMOPVDYEXPWMNPJXRIKBWZBDMLEWPTLQOPFNEAJSVSOVRARCVFBLEPHXSOKAKZUODQYGYVVFFNJKMUOHMAHKEZXRUROUBFFDFQTLCLNCDPDGNAZ");
    msg.type = 76U;
    msg.access = 195U;

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
    msg.setTimeStamp(0.9165066658451945);
    msg.setSource(28656U);
    msg.setSourceEntity(35U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(78U);
    msg.cmd = 206U;
    msg.op = 121U;
    msg.plan_id.assign("SSVDBCDCNPUSKDLYLKPATJGIIYJNRCFFYXXHI");
    msg.params.assign("FIYHNDWIRRZZECPYEVKLJCVUIRZQASWGTIBFUFRWOSGUDWBQSZMJNPNGKFWSHUZJQLUZQJFWOBXEAJYKDLHHVSTNTAHICFWSDCIYKEVRMMEBPYSSODDLJGTXSLMUOWCDGPOIAYEMFXISQWVABTJPMDBMKCVGRYBIKNVLOHAPIOJTCJVOAFNFHKANXRPUXQGKZXHENRPHPKXZPTBQDQBLEHONBAXVYNXMCTGOXZQACYWGRYURJFGCZU");

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
    msg.setTimeStamp(0.7287800972679361);
    msg.setSource(58017U);
    msg.setSourceEntity(40U);
    msg.setDestination(13392U);
    msg.setDestinationEntity(220U);
    msg.cmd = 171U;
    msg.op = 241U;
    msg.plan_id.assign("SRYZHKQQONLVGMUDHLINDKIVORANZOXWIXOMSYVXBTHTNBPXSWJPFHIBKHTNIEKFTDHWYNGQSAGDBUMMGAQLMYFOFAMNJJFQPDNQRGBWAAEEXCCZULURRNWCTJYIIRWCJYRCGWKMCECQSVPSSVBBGWOMRLXBLOYXUUUPFMGQJKYTBFLECIVAPZOXETIHQVDCZHJRDTQYHFYKKKUAVPCOLSZZEDUNAKGTFVJZTSLEP");
    msg.params.assign("XAOXBIVKUGAJIEFQKHJBQQUXVAGYWOQKMCPETWABASWDDZBGENXBKIOJPRCTFIRCCVHMXNHQBHDTUTPUUTAYFROGNHVEJYBUZLX");

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
    msg.setTimeStamp(0.2508588299174943);
    msg.setSource(14497U);
    msg.setSourceEntity(152U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(144U);
    msg.cmd = 89U;
    msg.op = 251U;
    msg.plan_id.assign("KLVVHNETSFQRCYLRHHPVBURYPXHPWKBBRKZHQCBOQDSBXFHPATZVSHDAEEKYECNMXRNZJDNGFPNCOJLFRLJTEWYLIWNMCERGGLTZWRQQOWVDXBSFTPAMIKIVSCRNA");
    msg.params.assign("QUNJSHRNWQBMWZOUCRDBWKVTCXEJOPPADXYJRRLNBLHNGPCWRIKQDMTYGQEAOVTDVHGXKOKFUFIBJIBEVNIGJZMYNIHZZRTOAVHMLZPAGSYMOQFPCGIPJUPOKMEITVLNYUBZXWSOXLDLHVFXBCCWMSJXBVXEEF");

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
    msg.setTimeStamp(0.41208408272435704);
    msg.setSource(13059U);
    msg.setSourceEntity(95U);
    msg.setDestination(49125U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("RUYYOTAGSMPCOCMQSMKFCWPZVVZIBTAMWIYOKJTMJUHVLHWCBLTESEOXXFQKTKLLMPRQNGUHUJGZCZARQEGOANCXUYJQRMWGKPXIKMPVTREXBBPWTWYEZGBOCQOSNGHULILHXQRKPTNEFINIF");
    msg.op = 207U;
    msg.lat = 0.15783585521917964;
    msg.lon = 0.739459737757002;
    msg.height = 0.0357024990605449;
    msg.x = 0.9537342426795179;
    msg.y = 0.03636808705256722;
    msg.z = 0.29881208544493476;
    msg.phi = 0.6428340270609443;
    msg.theta = 0.05085291119090041;
    msg.psi = 0.6532233185868462;
    msg.vx = 0.1536130167030645;
    msg.vy = 0.383743887946874;
    msg.vz = 0.7930849188062477;
    msg.p = 0.8382129297455025;
    msg.q = 0.2911032113746508;
    msg.r = 0.3013059825934492;
    msg.svx = 0.751214068807071;
    msg.svy = 0.7858432319751547;
    msg.svz = 0.7156797975638197;

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
    msg.setTimeStamp(0.9758554792222343);
    msg.setSource(52566U);
    msg.setSourceEntity(171U);
    msg.setDestination(27318U);
    msg.setDestinationEntity(123U);
    msg.group_name.assign("AIOWYTPZHGXQUAYOOASXGPPGQLHMPJNYMWWEFAJXLISLEXAGPHRTEGCHXKRRSMJENNHIVDCTJWZVTBIBXMWNZHXKHLEABCAMSNNWLCABEDKLBOUDLPYBFSTUXVKRJDIH");
    msg.op = 108U;
    msg.lat = 0.4989963487924942;
    msg.lon = 0.3024111059986877;
    msg.height = 0.39802076440740397;
    msg.x = 0.4801673943643763;
    msg.y = 0.003956914965140723;
    msg.z = 0.06358132076535061;
    msg.phi = 0.6726168731511037;
    msg.theta = 0.4197348541540028;
    msg.psi = 0.8662774834467409;
    msg.vx = 0.8203692781600828;
    msg.vy = 0.05585541160551688;
    msg.vz = 0.5296595377164474;
    msg.p = 0.19466524247723127;
    msg.q = 0.20104522449579076;
    msg.r = 0.09082347738981955;
    msg.svx = 0.8477625372225784;
    msg.svy = 0.22369530248785485;
    msg.svz = 0.223296371577265;

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
    msg.setTimeStamp(0.3215493114719753);
    msg.setSource(18571U);
    msg.setSourceEntity(140U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("UAWTMLKSKZRGYDPGBLCYNIUOOJNZFV");
    msg.op = 19U;
    msg.lat = 0.960905799898088;
    msg.lon = 0.44868470687125306;
    msg.height = 0.6787486567589496;
    msg.x = 0.22297587901639415;
    msg.y = 0.206211725940753;
    msg.z = 0.7041488385701528;
    msg.phi = 0.022613705250893568;
    msg.theta = 0.8801640508010512;
    msg.psi = 0.43096085918977967;
    msg.vx = 0.358012090378388;
    msg.vy = 0.5816166647920072;
    msg.vz = 0.32635121437493464;
    msg.p = 0.9762691641967731;
    msg.q = 0.07620347865911403;
    msg.r = 0.33047901718451167;
    msg.svx = 0.5758433009522682;
    msg.svy = 0.12438478805173792;
    msg.svz = 0.9598186026135966;

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
    msg.setTimeStamp(0.187261965599973);
    msg.setSource(37593U);
    msg.setSourceEntity(137U);
    msg.setDestination(57315U);
    msg.setDestinationEntity(69U);
    msg.plan_id.assign("EWTHMYOQSIBQLOMJEZXXNVVSNKFH");
    msg.type = 91U;
    msg.properties = 94U;
    msg.durations.assign("RDYXRAMKHSXYNFAQNDGYBVJAFCOAKZQOUFLPREDJWBZJPNBWSCRQFVKTARSTMPVTHEBCFYKWGJPLWWTHUFMJUUTFLXVZSZPELMRSALTIIGUOAFHXDSHOGVROHTNDTIIBMJGTKUVVRESWICAKQZBLSTPQOAYF");
    msg.distances.assign("YHUQZWQYMBACIHENRTHWGMUWAGSRPVKLQOIBTDVPUKITIMDWIHTCBSXDZUYRAHJXBADSXMXGS");
    msg.actions.assign("BWGBWPUBQWINPYDPVXVTUNJNEDKOJVKJUMTFCILLRVYHZPHPPTVLUENMDYJACRQMTYUTSSTOKGAAERHSPRICFNRCMKVALQH");
    msg.fuel.assign("IAZRUNFUYXIQOIBOSMDFQRINGOIBWCVAETZYPQEMDFNSMUAGUKCSSVAKUCDPCKRJTRHWNSVXLOGX");

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
    msg.setTimeStamp(0.05834742310656693);
    msg.setSource(53664U);
    msg.setSourceEntity(134U);
    msg.setDestination(46218U);
    msg.setDestinationEntity(66U);
    msg.plan_id.assign("YBCQAUJDXCLTPIASZKXEBDFKVIGZMOCVOQAWYJAOZDFANPESVZVUFLDFQKQLSWCIKNOMERTFH");
    msg.type = 249U;
    msg.properties = 203U;
    msg.durations.assign("TQHQLQQYLRBMKNSNVZCTXTNHOGMNVJDWUSEVGIOUOPJCCZPAPPXRUWDYPNAQVBJFBZSVSIODRSYEZAHAADKXKNHNQYLAFCFDOIISAXYFMWLJCHTUZ");
    msg.distances.assign("MWSLFBAFACLYDODFOQWCPGLLXOBEGJBZVKMDJSDNQAKWYHPBHNAFZCLX");
    msg.actions.assign("GOAKZVULBVKMMBJAMWBFDCXHEVQQNAHHLXKSYGCMJFWOSZWNKIWEQSHODVLDLPXKRNPVISZNEQREWKDVOCHCDNWJEFGXYSCJURTCIZBFRRYBOISJZESNPPTKCEJBLIFJOOUQZFNLITYNURYETUTBXLJ");
    msg.fuel.assign("JJFXBKAYMOAQGIYYTOWDBJNQIMKUTZTMROZDVASSZNEEPESTVPQLSJIAEMAKTXIAFYBBWZWGEUHJKUVYFRQPHMVYROWFNGIQAZTPQJRNPBYXCDQURWJCVMVKFIHSZIMORRCVAGXOC");

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
    msg.setTimeStamp(0.9093107995009468);
    msg.setSource(10779U);
    msg.setSourceEntity(0U);
    msg.setDestination(62384U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("NPSYMQIYWWSFEBPEGYDJSBYFDAIFTQFASNQCWCNVEZXVMGSNGEXLAQUSLZIKJMDZJACDAHXAEIGFPITXYXPEKIWVTCLJWYRMURXHBLGENCVPMWGBXJCDGRQCMBB");
    msg.type = 30U;
    msg.properties = 245U;
    msg.durations.assign("SBHPNSXHGZIKASTYYRUZSIKCGMWRWUFUHZNDMAOEOTBUXRMAKMYHWYLJTZDWCDXXNJWVNGAYQYRSVNLIGJFK");
    msg.distances.assign("PGTKTHSDNBKJ");
    msg.actions.assign("LZDZFPAIUGIKAQPTUGWNMTIJJZEVBFCKQYXJRZSQQJJWKLPZRFDUPNMRIEIDDXZSIDSRZRAIYTMBPBCBYYXNNEMLAUYDOEWFXVKSTOEDSHMOPXHERADAJLZOOHPEKIJSVQOMFJHGYGKKTQGWCUBFXY");
    msg.fuel.assign("FKXBFAFJWYGBHQEJDROLDKNTIUOSXKCCQYKMMSXSKMWLIVDNCXVQTEFRPAMJGYSEFYNNDRNRBTVPTSBIYXPBQJUQIIJFZZFZVVOLBHGQFSZSTBHNYKVTWZAHL");

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
    msg.setTimeStamp(0.6931146212966386);
    msg.setSource(6047U);
    msg.setSourceEntity(41U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.38615595702167194;
    msg.lon = 0.29697758634750504;
    msg.depth = 0.3779101582667014;
    msg.roll = 0.6976529418619142;
    msg.pitch = 0.7634109546526153;
    msg.yaw = 0.683317209670493;
    msg.rcp_time = 0.662642738423524;
    msg.sid.assign("XAHTDEFJMCKBJKWBKTNVFPQIRQ");
    msg.s_type = 115U;

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
    msg.setTimeStamp(0.10017164036834858);
    msg.setSource(17749U);
    msg.setSourceEntity(248U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.41634343252189465;
    msg.lon = 0.055661618570613136;
    msg.depth = 0.020739897961484344;
    msg.roll = 0.06788551511276109;
    msg.pitch = 0.32056048759250555;
    msg.yaw = 0.5172584479455488;
    msg.rcp_time = 0.06982622294117669;
    msg.sid.assign("CEPLDFXUQJTLJRRLGEKSLVRDJTIOTLMRHHIBPVKXEBSWHMSNABZDPYKUCWYHTIWMGPGXWZMZPXMVFJCIFPGKXPUVINQYDKHUOHKKOUVKMYEATSCDGSFEMWHQRFFUKHZIQBIGNTMCEWCAFRFPZQXDKGAJZXAZDFBIBLCASXRRNTPCOBZUNVGNASTJCQYBHJXPRZQYTDUYRBEWGDOLQNOSIVWOJOEDQYV");
    msg.s_type = 50U;

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
    msg.setTimeStamp(0.10644723608022222);
    msg.setSource(48254U);
    msg.setSourceEntity(159U);
    msg.setDestination(38838U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.8570414337672292;
    msg.lon = 0.959523306652566;
    msg.depth = 0.14216789174072542;
    msg.roll = 0.4213274918507274;
    msg.pitch = 0.5996307964533472;
    msg.yaw = 0.8727291114227083;
    msg.rcp_time = 0.5248464476792573;
    msg.sid.assign("DVIXOELYMVRDYCZLHRQTXSPZTGLVJVTWNTJGHBOEFCWXJYLMNQKYTNJECENFYZFZNASHBHNPXNDHEAUUEPSJDJFXFLMWDGLOMMHLQ");
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
    msg.setTimeStamp(0.9459331060318049);
    msg.setSource(33201U);
    msg.setSourceEntity(72U);
    msg.setDestination(61805U);
    msg.setDestinationEntity(140U);
    msg.id.assign("UJTOSDWXWLJTKNBYMFQUFCWGEYKEPGZVPINHBRHTKXBPWSFZBZWOYGXDGCKJOCYGAMXIHIWPHMPAZAIESXDNGQZFUKHZDF");
    msg.sensor_class.assign("TFXJSXQZKZBEYLAYBDGDXRXPDWCBZXESEIKKVJOCKLQBLDANRHUMNKJDCENHZJLXSQVJAYTRMVJTTUAZILWRUDPIOZFTGQRMTURIWGCFCYZNCJXAVHGUYIIGNYVBDACSHSFKGPUKPMWBVWMERFEHGVODOUORJAHQTJPXBLIEPSYNZNPHJWYZRRBM");
    msg.lat = 0.6456610284760785;
    msg.lon = 0.5831355737872034;
    msg.alt = 0.48317404842652745;
    msg.heading = 0.5945637177825367;
    msg.data.assign("VGSFLEQBGICEAAHEMUKKTZBPJVRQHXKDMCOPJPEKIWOXHFNRRZHXJFQDZTSZR");

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
    msg.setTimeStamp(0.3942081546154337);
    msg.setSource(19248U);
    msg.setSourceEntity(165U);
    msg.setDestination(2594U);
    msg.setDestinationEntity(30U);
    msg.id.assign("DVYITJLNGOVXVLLBRKZRKNTXHSRYXXMBQKWHNTGAGKYJBPVMCNTVZGQITLFDUWESANWQVABZSNHRBQKWKHPLHRGMEBAUXSFFIDSUYKRHHTYUMYPIIDQKJMYF");
    msg.sensor_class.assign("FBYQXRVKFAGNKKRFUYJSJZXMTFRLHOFDHQRMPUUGONJNFXPSTJIIBMQNACYAHHVPNGIRLDRMSCXNPUOKFYLHETJGKOFSIKBNQYXLWERTWZBDLQDMVAWEIKLOILPXAXVIKDMRFGCTHUEAHLARVLTCSVSIBCOKJVLUWOCYODCZHQNAJSZJCUQXPEGXSQQYECSCMUMPIGHDUWWVBTSBRYYDHVTYMGNJZATGPWIZEDJ");
    msg.lat = 0.5386018705988427;
    msg.lon = 0.6217129412896821;
    msg.alt = 0.6846005489388596;
    msg.heading = 0.5255101581567851;
    msg.data.assign("CBHSBOJHXYPRQCTSFVHYTNOLIPDQTQOIVPQBEAWPTRBGJEATNCKWHAIDSZPMRIMLVMQK");

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
    msg.setTimeStamp(0.5478452360084115);
    msg.setSource(33641U);
    msg.setSourceEntity(196U);
    msg.setDestination(64179U);
    msg.setDestinationEntity(148U);
    msg.id.assign("LCHJXBJTDXI");
    msg.sensor_class.assign("YELHSRTKMUYRUCYYDWQNIZOIKGFAMMQBIQWRAWUONPALJPCZJMBSKKZLYEYNBJNDHGAXKKGXBLKRFKWFMQLZQIWPPICMSRUSDSVTXFFJAHBQTTDBQJOOTGNUOCDHRPDQMFUUNVEXXWLBLJOHBFEPNGI");
    msg.lat = 0.5219989955807529;
    msg.lon = 0.22557679188653124;
    msg.alt = 0.9083587855058052;
    msg.heading = 0.8771397003901107;
    msg.data.assign("LFLQQBDBNDSINFTZZZNSBRCJIJIUMRNYEIZJWEODMCJXNNXUFHFTLYGASZQWWVWGUJHQSZVHWGIVYGVWASYYQUTKZIHGNOOQEEIMGJGFRLBSTEDLUYYPKHVOYFSKPKBCCXMWRPFNCOQAZCJGIXEYXSRBFLXAPAHWOKWTZVTMOJDLAUBMLGPDPPUQKKXRLMCBTTMQDOMRSXDOOFNVLCRNTIZKTHYAUCRBAJCVPHKAPV");

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
    msg.setTimeStamp(0.25106231464183115);
    msg.setSource(19730U);
    msg.setSourceEntity(145U);
    msg.setDestination(65282U);
    msg.setDestinationEntity(207U);
    msg.id.assign("KOICYSGMTNEURHPEOEHQQAHKXSDGXHMAXGLUDPFJJNDKJJXTBRXQHASOVMCBKZWGZAFRJNIQKIIENDHFOTIXZPSHZPMEZLQITDVKJEWLWWZADOMQTNIFRZQNTSBJPTBPEZAGYUIYFPWLYVECCHMRTLV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HHISQPZAYCBMOCUJRBLWQKXRTUHWDPUMAMTZXLGGGIWZOXLGCAVMBZUAKKNPLDEFYPIZHBJVAHEAOKCRCNEE");
    tmp_msg_0.feature_type = 38U;
    tmp_msg_0.rgb_red = 109U;
    tmp_msg_0.rgb_green = 173U;
    tmp_msg_0.rgb_blue = 210U;
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
    msg.setTimeStamp(0.290995450341863);
    msg.setSource(39367U);
    msg.setSourceEntity(76U);
    msg.setDestination(12462U);
    msg.setDestinationEntity(38U);
    msg.id.assign("HDOYRLTAZLGDRXHJXWJBJKAFUHFBBPLVCVFODFAYRHQJFINORCKYEAKLDDS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DKEYWFUIEQCWKHIBVLPRYCELDWPPRMMKSOSXAFYLNPZTDLUIGJTIWTYDNQMHJDIGBPBWAHKAUIHTANFJUSOVTSRCKERAZVREQEBPJZ");
    tmp_msg_0.feature_type = 169U;
    tmp_msg_0.rgb_red = 164U;
    tmp_msg_0.rgb_green = 243U;
    tmp_msg_0.rgb_blue = 156U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.25537751484907156;
    tmp_tmp_msg_0_0.lon = 0.20377619412603354;
    tmp_tmp_msg_0_0.alt = 0.7244860439485774;
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
    msg.setTimeStamp(0.23241519973976354);
    msg.setSource(33038U);
    msg.setSourceEntity(1U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(252U);
    msg.id.assign("QOMHHLFCHJLSTNWRRYAOKAGNLMEVXITUUWXPMYQHUXPDXSLVLGRNUIRORLQCBJJIZCFBYETQZJCIIPEPNVQFSYOXSJBXGYOJYIMEZSJWPMDZQZDIWCDSLZDDGNIYGWVNKWFXW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WPZCRXQUNEXWYPAFNGXMWENBRN");
    tmp_msg_0.feature_type = 107U;
    tmp_msg_0.rgb_red = 126U;
    tmp_msg_0.rgb_green = 135U;
    tmp_msg_0.rgb_blue = 148U;
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
    msg.setTimeStamp(0.22119238937289287);
    msg.setSource(57840U);
    msg.setSourceEntity(127U);
    msg.setDestination(30512U);
    msg.setDestinationEntity(13U);
    msg.id.assign("TBJBLWRJSOORCQHJGDUHDLBYILCAPFGAZCOZTFBEIFAAKIYAAGXBTUU");
    msg.feature_type = 164U;
    msg.rgb_red = 241U;
    msg.rgb_green = 7U;
    msg.rgb_blue = 50U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6534571612237476;
    tmp_msg_0.lon = 0.689267054150483;
    tmp_msg_0.alt = 0.5497731763018191;
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
    msg.setTimeStamp(0.9074418285740232);
    msg.setSource(29776U);
    msg.setSourceEntity(71U);
    msg.setDestination(8141U);
    msg.setDestinationEntity(26U);
    msg.id.assign("WDQBMJIVMWITFZCGNSXTELKSCMOUGSOEMFMCXCDFFOVLRIKBVEWZMJUTNYLFWIEHETKXHOWKC");
    msg.feature_type = 88U;
    msg.rgb_red = 218U;
    msg.rgb_green = 137U;
    msg.rgb_blue = 240U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.21764676125395255;
    tmp_msg_0.lon = 0.5866966438026453;
    tmp_msg_0.alt = 0.9129200315436671;
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
    msg.setTimeStamp(0.8096409318033668);
    msg.setSource(14044U);
    msg.setSourceEntity(26U);
    msg.setDestination(11429U);
    msg.setDestinationEntity(65U);
    msg.id.assign("IVMJSDNNFQHOQAISGZCQRVMWFKJTNYVFCEBKIUWNTQCMSQREGRDSVNAUCKYFCGMXKQGEVYKQWFEJZUNWNDADZOMYPUWWYPCEVTLSAYVBPIBHMJCHFPKHZHDOHUBXHEZXZPRSCULTHJMWBQUOKHBLETRBGUKWPSZJALOAXGRYZIRQEXZUOIPAPSWTPMEDBCPRHVOFXAGDBYSAFIDNTFRFOJCXTVOXLXTEJMKLIVDLBSDIKYUGLWQJINMJNAR");
    msg.feature_type = 159U;
    msg.rgb_red = 104U;
    msg.rgb_green = 29U;
    msg.rgb_blue = 126U;

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
    msg.setTimeStamp(0.7783700751741567);
    msg.setSource(27831U);
    msg.setSourceEntity(155U);
    msg.setDestination(22828U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.418407077636447;
    msg.lon = 0.3493598985566161;
    msg.alt = 0.4742960349362326;

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
    msg.setTimeStamp(0.5961615998614272);
    msg.setSource(51389U);
    msg.setSourceEntity(5U);
    msg.setDestination(10590U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.807870818145566;
    msg.lon = 0.8547024737703217;
    msg.alt = 0.013992014489570659;

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
    msg.setTimeStamp(0.4475050540102572);
    msg.setSource(25929U);
    msg.setSourceEntity(225U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.32646573449712524;
    msg.lon = 0.8668890742490013;
    msg.alt = 0.18829839383636038;

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
    msg.setTimeStamp(0.9060610499434797);
    msg.setSource(40158U);
    msg.setSourceEntity(119U);
    msg.setDestination(32523U);
    msg.setDestinationEntity(88U);
    msg.type = 47U;
    msg.id.assign("PLAWDQLAYBQGSHQULDCHUXFMWMLQMIXTDEOJVRVNRHTTGOGUMCVRSEOZLOCDUEPNKTECPXWCYCXKRKQLAQZRJGUIZSDETEQICAUJGHNAIUPFDXITTBKWAHDMBYYVVIMCOKFBCTBUZMDDKHEZGITJVNZNFSGEVAERJNMORRKAVXLKPOQFLPJMSWYPXKJXIFBFWILOEHVFHNRJ");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 46U;
    tmp_msg_0.angle = 0.13465878976012502;
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
    msg.setTimeStamp(0.2145455534307401);
    msg.setSource(43895U);
    msg.setSourceEntity(145U);
    msg.setDestination(43980U);
    msg.setDestinationEntity(165U);
    msg.type = 190U;
    msg.id.assign("NFHFKUFYUOIFCBZI");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("WJCKVTCRMWPKQCCPQASTXD");
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
    msg.setTimeStamp(0.12354058374045762);
    msg.setSource(29019U);
    msg.setSourceEntity(220U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(82U);
    msg.type = 239U;
    msg.id.assign("RCZXULHMZMZFWNLHFDPVKTFYDSTLQAFMWVTGBFFIVYJQKJHHTKLEUVGINYQQGBRKLZWGXHYTWLENYOSVAIHFJXZMYCJFOUOCZRGJWBIAUZPPVVRKNIGBOBZUJNWFSGWCEASRMPNSYJNIXVQXDCUTFQKRSXSQNTKICHSBCMRTYAAXUQYBDPUJLWEWEZSHERNBICIRDDVHLYQTKMWOGPXHETJXXDLCOUMKPBOPOAC");
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 62U;
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
    msg.setTimeStamp(0.9344299802213605);
    msg.setSource(56427U);
    msg.setSourceEntity(90U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(67U);
    msg.localname.assign("XWAPSANBKDCHQATQPULZIJHZYWN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZNESAFETHMOLHDTVPJBIEFNXWBWLZZLOQKRUZDXZMXNLCPKZPKAXHWSGFQCRPNYWGKCBYACVHOMBIPUXVMRKCGKXOTLYGZHQEYRZJFOKEDECYQIWIAFCWWUIETQXNAOQBMSTOMJPVRUCBRYVRLRZLBJNDODZPQHXEJBIBGGIADSASRVCPUMGLSVTJTXJTQHKYDAGAJHFIMBNVCQLUIYPOSOWDMTRKJQGWU");
    tmp_msg_0.sys_type = 133U;
    tmp_msg_0.owner = 49641U;
    tmp_msg_0.lat = 0.2879829275591077;
    tmp_msg_0.lon = 0.47258191385274473;
    tmp_msg_0.height = 0.997642890722425;
    tmp_msg_0.services.assign("CWYCTUZPYJBBIRYKYKBCEUYDRGCYSIXXVRXNRPZOMLOLGONVLOIQBDXSSFAJTWSAKKSODDWUETTACHJQWFJIEVGYJM");
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
    msg.setTimeStamp(0.22648410878214464);
    msg.setSource(44669U);
    msg.setSourceEntity(79U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(122U);
    msg.localname.assign("MTIQUQDXBSFDVJGARGIUISDSXDOUEA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JDTAMVMNRNFKZPGEXSXXWQKNGLINTIHGZJFHEQYBBWLEEMIPUDRSOFKJNPCHOODXGMTWQBKMPVORFZJWZQQHWSLHVMGJYTBRALUYLQRLYAOCOLJHIHTBWXNDAJHGDNTOSMGPZFMTNWDZCVAJYVCYXSEFTBYVKORHDGSNHIZUURTUZAFXKKCNBY");
    tmp_msg_0.sys_type = 188U;
    tmp_msg_0.owner = 18257U;
    tmp_msg_0.lat = 0.9359815141537499;
    tmp_msg_0.lon = 0.026710897936498723;
    tmp_msg_0.height = 0.6181639551833991;
    tmp_msg_0.services.assign("QLPFWKGGHEIEBTMPWVHGWZGZETOQKJIWCUJMQHCRUKEEDGTUZFSPJTLLTCYVHSSUMNVUAVJLMVKCSWEABGDQCARPYIOJIBODRDROJHILYXYQFIESUZNQVMRAJWANCZMBKQCDAHRPNXDWKRBIMBSPNFXGDWHUKBAXWEFVDOPOYTFIQODOLYQMUOTIKNEYTDYBRCFYSHELLHMLAHIPG");
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
    msg.setTimeStamp(0.6694171836226898);
    msg.setSource(26704U);
    msg.setSourceEntity(250U);
    msg.setDestination(27623U);
    msg.setDestinationEntity(224U);
    msg.localname.assign("PAHCLWBWMALLWSFHPRPGCOIZFOVWTFATXDQPXKJAXOVSHYAFJWEPLMVABMKCBOPD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MXIXMFIMZNKQAUPEUPNYVVKXGSAALPUNCEFBOBWOOBTRPJTNRHIQYTXCSDSDZWLSYGREJFRCWUVBMKDMMVSPXTGOAUTLEDDEBWNITGYZTAICJPZRHRNDGQLJVIPYIECXXEHNXGEIUFLHRDDVQQPAVGMKQORFDXZOHLHWQHNSLMOCJWEBIL");
    tmp_msg_0.sys_type = 213U;
    tmp_msg_0.owner = 58160U;
    tmp_msg_0.lat = 0.8122974581021358;
    tmp_msg_0.lon = 0.8990184253216288;
    tmp_msg_0.height = 0.6815654940471343;
    tmp_msg_0.services.assign("ISCBRLPJBOXWLSWSIFQCDVZVZRVNIUHRDWFMVAIDLQZOJKECJLYHKUZDGATBEBFGHQTZSSVHFNEMLKMWOHFXAE");
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
    msg.setTimeStamp(0.10713437703581952);
    msg.setSource(6852U);
    msg.setSourceEntity(201U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(233U);
    msg.timeline.assign("PSZMHANKVFGAJDLTBEUIDNVWYZUODUZVPTRMOMRACFOBSLYYVHWKHNJLZHMZOOSCMVBAIIUGYKBIGEATNWVXETFZLEWNSWFMGRXPNJFUQKMJP");
    msg.predicate.assign("PVKVEBQSDJCTLWDSMESHVTMOWHHUFZIMMNJCPKJITOSYXZKAYODUQKGQZTHAELVJNFIOBSZJLNRONBJMPZXDUSQCIXOUDTCIUGHIXWBQTBVULKPTDBQTVFAPWY");
    msg.attributes.assign("VYUOIEPAJCAVPLTLPQXYIZUOUAABESUMEWQLRAVFXLGRNMURDZMFNIBBVFUZNWEBAUSLFWIDIMFMGUIWSCLSNOBHHRFARJKSGKKSPTYYNJAELEBYZKSWXJCGIPZWXXCIMCDKKTEGVKUOBTJQYMXHOBOPYRMQDFELRLTVPZNSQCXQOBBHNGJCVWSXDTJDQAZHHHSRUFENJV");

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
    msg.setTimeStamp(0.5138668536415476);
    msg.setSource(47114U);
    msg.setSourceEntity(184U);
    msg.setDestination(59504U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("ZWHVYUJKORKGVVZMTDWLEVBBDLARFNZAMOPFFQBFNKVCOADLFTUCJJKDSQOGYVRMPHGRWPKXSQEPYVGVIQEBRLAPVNKXSHUOPIDBWIETCBSHJYPKGILUZDKGLJTLZOHWRNMWONGSBKXNMIVWDCSCCZUQRFPTGFTQQWYTAQXLCAMKAADSDZITZYPOC");
    msg.predicate.assign("VKAUBDYXPBGUOAMJFOPZVIJQWVHGCELNEMHHJMJDPTWRKXMCETRAMZFSIKFZQORIVXVYFAOWVFLENBTOXZHULHLYPQNCWAPNNHLOQUNKCTXWHNDWKISXWECGIGPSPYGKQYTMPFBEWNJZBLYLPGUADAYLKVJYHBCONOTITXUYYIHKSRMCTFEZZDBKGJQRXRLDVCCUSRQRBIUME");
    msg.attributes.assign("PMJEUGLMGPHQLCVKZMJIYLOWUQNODEQIINR");

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
    msg.setTimeStamp(0.570576354563764);
    msg.setSource(38906U);
    msg.setSourceEntity(19U);
    msg.setDestination(15242U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("NPVRRPNKKFAHXJFIEYEYHMDDIKZBVGWWQBFADHQMUHGZHGPBAPILBFKEHURYLMXUQ");
    msg.predicate.assign("RBHYGQYJNELYKXBDWVNMBTJMCZHTECIXSPWOKOJUYHAOHNRKOACLLKIUASMVPXEMSKCPBMBFJRFWTRKDSFQYXUFRCRDDALAVVLKUUOHXNYPHJZZQILRGKLYIZSQOEDTWFTNWLIHFPAINJIMVJZPLHCZRFHBSKZEOVMPZXDADTQDQANQYYWPHVGOAGTWFCGBEBLNUTJSEGKECTDWYCXNUWXOXGXQVBJUPQSOTGIIEQMCDVBR");
    msg.attributes.assign("VDYJAGULRVNSFEVFRSAJNWUHACPAONTKTCMBCGEJAICKOWMLNFMRXBRZLQUUUW");

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
    msg.setTimeStamp(0.9683064362410126);
    msg.setSource(28638U);
    msg.setSourceEntity(0U);
    msg.setDestination(50229U);
    msg.setDestinationEntity(124U);
    msg.command = 174U;
    msg.goal_id.assign("SVINYUHBDJEVHJRRMXYTBCPKMLNQWIBGOQKQMFSIDHNVGXYLEALGETPLYEMOLINECHCSDALYTNWKCXOWHZOATIMQQBDZDWSVEQOTRRKGECZUJEOUKPBTONTPZFPVRCDJUUPMBOIAEZQXJVUFHBAMGJXFLHJSGZNWFYIYAVQCBKYRUAZHTPWDXKREFGHXFMRQJYBNQWZADPCRFNTCTSNKHYSXALJFWFDVRBVUSZLMGZAGWMDJPSIUKS");
    msg.goal_xml.assign("SNYMZUBMTJKTNKLFNEGVCWOTECNWAJCQRYHVKFYDQXRFZXISLPAQYRZJQTWWSYSMOMLCUVGRVTRSEIQZOWIPRIUNLWGGKJICWNMKFETGHRLIZVUAONUDDPCAYJJKPJQXILKYHKTVTLBIONUBBVZBESSOOMHOHPWHRNOMPAJYXPEUXPATJTEGXLVVBDGZDPKORYMLWAXQFUCZSEFSXHCERBFMUJWCFGPQZBIDI");

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
    msg.setTimeStamp(0.5116592433023198);
    msg.setSource(18325U);
    msg.setSourceEntity(143U);
    msg.setDestination(41085U);
    msg.setDestinationEntity(203U);
    msg.command = 113U;
    msg.goal_id.assign("WGEFFIYJKYIXXVEYPEXNMYWTHDWH");
    msg.goal_xml.assign("LLSVWKWYWPEJULSRVZNGHSQQBZUTFJBBBXUPNHGFUEICBVNMXIASCHFZGQPXFRDSOPWYNYBDDEMKRILRZTMQUOVTQXDTEGYAOLJGLEOGUKBECFJJSDXHLDQCMYVPLKSFQZHHPATGIIDKJRFGNAHAZHTRXNGEUUDKYIJUPWTMEPXYJCSSOQIDYFSVARGOAMWMCPQBYETHW");

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
    msg.setTimeStamp(0.09866262676060944);
    msg.setSource(26849U);
    msg.setSourceEntity(73U);
    msg.setDestination(53642U);
    msg.setDestinationEntity(87U);
    msg.command = 89U;
    msg.goal_id.assign("HYDCKEUQCTJVMUIKVBAKIEHAXXBNVUMEKGKLMHMRTYYCDGPZZMNZDUNMJGASKQYEHVNDUCQYKXAOERWOTADBENITQSFDTTUZQPBVLVXJDBUUGOVWTBROHKHJDPCRFIXKRAXPGLBIWLQSILWNFHZFAOSGEPLOQMJPWSRSKICMLJJNHLWRBOW");
    msg.goal_xml.assign("KGBICXQRKBRDOAWYEMNLTUJKXNQUWGGMAWCOYCBONJCNADEZKVFXAUJXLDPYVRBQSICFDXMPGRHTYVWFPJZRHSGEWOTSULBYKFFTQYXVAPSQMTPHJFZILYJWPIFQHRCEFMNJLNHDBXDHTVERUCBRYOWQFWBHUZAKIELVCZUXXJGPZGZM");

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
    msg.setTimeStamp(0.6791345822313146);
    msg.setSource(44828U);
    msg.setSourceEntity(190U);
    msg.setDestination(61376U);
    msg.setDestinationEntity(61U);
    msg.op = 144U;
    msg.goal_id.assign("PEVOMBQBPMNSTORUHCVPTJFHEHRTFBNXOGTULDSEEWGIXLKYDUFAJBXBDWNANYHEXWZZNZVAWKZKOUJCLAFOQEYZCTIOLNLQLIUQMXKSYHSRUP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FAYQQSVTHQVZIZTAKCBYAWLESZKGCCPMESRJRIKLYITUMEREKPTDBLQILYOJVOSSTMUSR");
    tmp_msg_0.predicate.assign("MXUKJSYDRJQZIBIYWRLOIDVTHVFCTRGTMBELUHQNIELNFSLXFXFBNHIEBNGHWOBMXLFMZGQTPVUXLYVQPNNELOXFSKYJMDCGFTJXSGICFREDOZDJEJTMDAOHCVNZRVOVRCZUZAWMPKPAOSFNNZSFCGGOIEUUKGEUALTYQKRGTAVR");
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
    msg.setTimeStamp(0.7678508628013515);
    msg.setSource(4907U);
    msg.setSourceEntity(17U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(56U);
    msg.op = 228U;
    msg.goal_id.assign("OMZLBQFUPRLINUDUQFDQCCMNUNWMVZARHSVZXFRGWFLILOXFDGCQIJIWSSABXGHSHTNHGOUAKZLASPYPCPMSZLVTRKMZRPGQCPGYIORCXYOFBMRGWGVWKKRDZKJYKYWIYBQECEWJNEQQRXZDTEENUHDWNYJFHAEULBJTWAMNCBJXUPDEUNLJOCDZCTTYPD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OXXTWJUDINADSIHRMCPVARVAIMNSCUTEIQCTQESJRDLVQMCVMKNENDXFDIGKJJIWDXGTSFAFMRBHYQGAJGIGOVDUAFWCAJY");
    tmp_msg_0.predicate.assign("NCNXEFIXRJNXCMCWGEUPWKCBDHIJZOWWLPXBZYNFQCKSRHQYTILWGISESQZRSPMKYEQWKLYNIFZOIXDSAJBUDHDUNPSQNYXKPOBPSCXTLTGCFVEBSV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VKEYZZZVCMYQAGAU");
    tmp_tmp_msg_0_0.attr_type = 186U;
    tmp_tmp_msg_0_0.min.assign("QHRMKOCWGXFVCNUPGDMDUQTVJTZLMKZVJGOOZGYYZPARMCSUBVAGKLYWTMVRUBPEUASQWRIMOOJBUVXZHVGJWXAPLPRAIBFOQKSSRSSSHLPLKJCIHYWMOENQPDFNDRFCNLSBJATTEHLV");
    tmp_tmp_msg_0_0.max.assign("GRJIUPRCJTKQDWJNMDSWBVYCJKRAKBZGCGCFMXSXWJTJLEPKIGIBYBQQUUFLFXZRNRHPQSHZIWDSKUSOKTIIFPHNYOHTZYMWMFYBMEGGDCGYVCMZEFUZAOEWVLNIZCASSHXCAHULYLAEWMAXORGMIKKQLWY");
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
    msg.setTimeStamp(0.8857472219431941);
    msg.setSource(48584U);
    msg.setSourceEntity(13U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(222U);
    msg.op = 75U;
    msg.goal_id.assign("XJMMEYWFESASNALVBERNXEEMGKGTMRWFZARHHFOIKZIRKHCDVBLDKMJNRIVEYKEFBUARSOPIBRXSULNLOQYZZPBZTZNQOHVWTCEXVJBUCDDXGYGQMJIQOLFQENASRNLFGBUAGQSAJDPXVHSWEWSYZTOYSZJPKBLGQCTCAQHZDLICMWKHTKGJDOBOCUPWHANDHXFXDJVFKIPPIPXGWKWYVJNUQYTJPNYZRTCY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XLCRCZIIAYVKQEFJBVTSOATLBDGVTNRNEJIYWGMLZPOGAQMISBDGVLNKXWWUASMZCERLZXHPRIVCWBONYWPGGRXEHUEOTAQJFPAXBGUURDXSBVHMMKFOCHSOMUNNXSSDOUMLWNBIJXUFOBYSERJNDYWVCBGYLFFECXP");
    tmp_msg_0.predicate.assign("NZFSQAKYEGDVKNIHJFCQUHQDNXNXZTUEEWDSKTQNVCIMWJEKQIDMRILQKPLWZVIGZBDWLYPNZWHFGYBILTDOBUXSGCTMJLCBABAJXRGCAYBSWTTXEYCNCJOEQVHUFVARXSYZZRGHUPZBUVYJDKVFARBREEMSKANLXRPNTDUXXGPCIIENQE");
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
    msg.setTimeStamp(0.7233526919456079);
    msg.setSource(21507U);
    msg.setSourceEntity(85U);
    msg.setDestination(262U);
    msg.setDestinationEntity(127U);
    msg.name.assign("OYHBMNNLKUSBMAQGYVDFFYDZHRJIZJITPRWODAVUNVXQOKOQIGRVLVENTYRAJHGZKEESIZVAOWLBURPECILPBROOADWCYGTPWBSHCKFXSIZBEKFWTMCBPQAIINRMCTKTOCNYTLGGBWHXKJYNSCQMDXDHYXGTDAPMMXZZJSSVQDKJRHLYUGVENAUGNFAEWFUFJOO");
    msg.attr_type = 232U;
    msg.min.assign("QTBRAPYDRZDZTXVJIMZJKWQGMLNHSWYRPLFJLEIXHSHLPTOQNIBKCXENLBXJDGDWCSWYMUFKKQODIXJNVMTBGYXVVVNJNTJYKGJGMGUQTUQSISPPVRIARYFLHFEYACATCCBOGTKLSUPOPRARUEUGYKDBJEDJIWREHZNVKCIRXPPTVSNKQEMVZNWPLDLSYVNIOA");
    msg.max.assign("WXGEZMLRPZTWIYORTIVCNGJWDYNXJSVHYMCVJSBPULZKDNFYBGGRBVZAKSYHDOSCNEZVKFDLEMSSUXIUNZUQZLBAPMDAHAUYXXVQSUUPEHPTCHQZKGJCKQFDABNTXEUTOFSELNIIMNRMOXEGVJQYCPIE");

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
    msg.setTimeStamp(0.5502979465075816);
    msg.setSource(10102U);
    msg.setSourceEntity(16U);
    msg.setDestination(42605U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CVTPWFNKQAFUSDSVORAWUHOKSLVKCJJLYFBMHMNBPKJGPDQVICXXOTJCRQDDUURWJZOMATHVRBMHPFQGWAD");
    msg.attr_type = 135U;
    msg.min.assign("AELJPDVSHVRYVNCNRMKULZPSSDRAWPBRDYFZVZIDTIXRDJQQXQBHULUOVJMAEQCMBHWYZNHNXAOOWOWUJVVWXRKDYZXXUYYONFUBIKCFQJQWKIXCJICNMETHSPNKRGRAQHOIBTSFGOJQIZSWYAKAJHCWKIGULFWHPVSAUEBMLGQXFUGTKKIMYYTNLZMGRMEPUOERWVX");
    msg.max.assign("BUMGSXCUFBJMBOGTBRAEBJPDIDOZLJBELMRBWEWRCTYHXDXWSLMNLCXKFTCQAIQHDPJIJZRIZZRFKOAFZKTHZYFAVJCKQQVHKYPFCIVWIDOVQCTDIZRLKTDXVCVAVLNFBEABZOMPOGXVGZYNOWYJIHGYMTMVTNHCUSQJSOQHSHEGANKQHNYXWLERGPHUVEFSJYNULPSLIPJKPSWPKRMOUFFDTWCNLGQWRAINEN");

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
    msg.setTimeStamp(0.1544438682871382);
    msg.setSource(61195U);
    msg.setSourceEntity(108U);
    msg.setDestination(15192U);
    msg.setDestinationEntity(240U);
    msg.name.assign("TZXAEAQFXUDZFVNCPTOUIJDRTSUICSWFVWVVLXHRWMTUECCDKFUDYGGQZNMSDFLBBPCQKHBKOBOKHLFRKMAINHEEYPOFCKWZPNJUKNDXOEPUZLOWXVPTORVAYJNQUTJCKDWIRUATHTKCTRZMXWGYHJSWULCDVFLPZGXSRCIZVGQYNAGLIJFMEJFBQBSMSGPJP");
    msg.attr_type = 42U;
    msg.min.assign("SXVTDPTSVEYHXLOFWHJYBHQDKVGCGYPTWZZQOJKDASKRRZEUQLVIVLJWRJPCGFWETKOAEHXMZKNSYBVFJPOULCXBRYAKWESBZDHRRPNWSFBJNBGJBQTOVOIACLSBRCQOXATNUJGVSXMBFOTCMPRRAUPXQDUCQXNGQAGJXO");
    msg.max.assign("HQYNLMRUQMEYSJPEWFIMZTYSPKVGXZFVJQWDOQJZDFFISWBVGPTLNGKQYCVXHWLTOVNBICKXPBKLAYHINAMRGKPJJYMEYENWQFGXCZUHEATJOLWBXXGQWCMUODKTSPCDNCQDHRIURLUFBWUJVTXGAAXNDKAZOJDPTYNCSPKTZMIOOZBDMSWHOSCQJKUFIDIFBXSIPKFRBVADWVHMBRV");

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
    msg.setTimeStamp(0.47003914574749084);
    msg.setSource(47719U);
    msg.setSourceEntity(8U);
    msg.setDestination(41645U);
    msg.setDestinationEntity(33U);
    msg.timeline.assign("FUZGWNHYNTWJPMMWPCXRIWQVURSZKDNQTKKSVDXIOXSLNORKGVGTIZVSQJZJQECJZIZAOLNDIXHNGVXAVFBEPRAWQHHWLUAUTFYIEYBKARAKDZAIMBNPDCRMUBGFMHTDSCVCLEIJSDY");
    msg.predicate.assign("KFFGNJHLOXPFHUZTFIQ");

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
    msg.setTimeStamp(0.5533140344567846);
    msg.setSource(26946U);
    msg.setSourceEntity(107U);
    msg.setDestination(23224U);
    msg.setDestinationEntity(184U);
    msg.timeline.assign("VEWSUXPFWVMHIZHRBQRYNQJSDCTVVY");
    msg.predicate.assign("JVXJYCRCUAPOTISYRJXNUWUCVGQBPAYUEUAKRNKSIWHXYHTGVZJKVFRADNSTNDMIEFFDAPLTBTZINHKILBHFEMJNZNWYNMSFBUAGXADDCRROXUYJELUNZQSCGGKHIKZLBCXYAXRMKIEQFWTQMBQOEIDZJPKMFSVPHEBRLSGDWTXFZCHBCXZHIYOBSQUIQPZJWUDTYCAYWL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EFTUPYGPIZDOAAJAOCFFWSCWRODKKBQX");
    tmp_msg_0.attr_type = 85U;
    tmp_msg_0.min.assign("MWRSFIAKUMRQYOMFSZWZHVTRAWHYCVBXOOFQEEIJHYPLVPCCVQDPUYMAUZDJTZXEPFMNCOMBQHVGLJNWKHINMEKSXYFIGKTDDPZUBFEMFJINZVGRIPXSEYLWAYINBRSUJKNWSOOAQCVGXVFCYLBFNOH");
    tmp_msg_0.max.assign("UTZBOKSDHLKVACHJZNUUACMRTMOYLBOYBXIPIXPWJWRESHFYUGNRXFVPZRGRHWSTADQBETNVAHHCRGJTJYIINEVBGZFRWSFWYODEHTZECMOZDDTQQMNIUFQLMBZSYXIFKYIGXOGVCCYNQWCGPFUDNPPSKEFFLQTBWCVUDMXAGDASMESXLHJBZUVROQHALNVSJZIKCOJXKOLVILUNDPKMQWFPJRHXKTTKBNYLAGEWSQAGWCMDIQEPKORMJPAXYB");
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
    msg.setTimeStamp(0.3244488833764896);
    msg.setSource(62242U);
    msg.setSourceEntity(47U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("XSRUYUJIYGXOMRLCZDJWMEOECXGFIIEGDDEBKHHVIWRPNTAMVLJNF");
    msg.predicate.assign("GZWASSYYZDBAPNCQGOSFBIDUIGWDTOZIJHXRJOHAYTVCEHKBOGCMERIQXIRKLRAGCYILMB");

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
    msg.setTimeStamp(0.4630169041131862);
    msg.setSource(21460U);
    msg.setSourceEntity(253U);
    msg.setDestination(50987U);
    msg.setDestinationEntity(113U);
    msg.reactor.assign("ZTFIRLWXEZRYHAIENARQXFRHKUUANJSYYDPXXGMHNQXBQNXVJDLRRTDQFVEUJGQGPJLCQRDKFQOTOVSKMDLVNIXTBCOCBNBSHUMJYEHRAOOZUTZKFO");

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
    msg.setTimeStamp(0.5315556877479558);
    msg.setSource(12248U);
    msg.setSourceEntity(213U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(195U);
    msg.reactor.assign("MGAVEJOITNNQIYEPJSRDXPKWEXQOFURXUDCSWATFBFHHDAUWBOCQVXQHMVMXOZPPHYXQHKNDAYIPCZRMFJENFAVQCRYUNVZJWOLYDLORSYZKQWTJKJADSVGFFTNISJ");

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
    msg.setTimeStamp(0.045898639712270706);
    msg.setSource(4194U);
    msg.setSourceEntity(106U);
    msg.setDestination(10434U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("YERVJNKWXZBJDNUBMJFILLSTDRDOKEZWHANXIUZWSCYVQAHYMPAQOTQNRDZZROFZOBWTHQJRKLIAJUDRJCPTWRBESAGUHBWMQWELFNMLXKITDZPMEQLPWBUQSICTDVPPOFCMWXTSGIBXMMALOVKXWIQVSYPSFUXNJQOEIKQGAJEGEPCTZYGZGIYFHCBGMKANSXOROTOIVKGKRFEDHCCXHVN");

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
    msg.setTimeStamp(0.42725337866225455);
    msg.setSource(13208U);
    msg.setSourceEntity(207U);
    msg.setDestination(33518U);
    msg.setDestinationEntity(129U);
    msg.topic.assign("XOEBWGDUAQTHZCBSGNMCYJMNQRZOWMQFZLTOUGKFRAPREKPBWLAD");
    msg.data.assign("GAZFWIBSTMCHOVJJIGLFUWKDRLQPXFMORQDNHMLHVJVCTJGDKECHUZYASYVHYKUIYJFMOSGZSAIYWZPXEOOZBLDOWTZJLKNEISZKNITXYBPJXPMXAXMASHRFQTKTEUGKIMLHHIHQXCRUHULLJQGBFNOQVKETEDRFPPCAUREEZWQBWNTMVBXJPFSVCCYTPUNWWWYMAXEBOEXZJCYDPIRGWNNN");

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
    msg.setTimeStamp(0.7607723088074775);
    msg.setSource(35235U);
    msg.setSourceEntity(6U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(147U);
    msg.topic.assign("MNLOYWXXTIFRMJGCRDOJWXNZMUVDTJTOHUPELEUTBRYAFOCRVBTOXGZPWVXVVUKLMDQNSFGYCSNKBUVKJUQFABFIUISIABWNDAQXWQFZQQOZAUMZZEQYLRHVCFGPGGZPUBTKTACQAPXIHSF");
    msg.data.assign("YTVEDYXGOHNDRPETFAMJKBWKVCHRBILBWAGIFOYMRIAUCXUIRNKAVUJZOQNGKDZPQLSRQHAXTREVSKFCRSIBJWBNFYDKUOCPTGQSRRXZULUEWCZUMRKJHHQMGTFEOVDJNOMIPXXBWMSAOWMNZQLPOWTBCGPXGAVISVEZWENHVBEDCEPNOJBXLFTVLVZOYMEHQPYUHCSMG");

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
    msg.setTimeStamp(0.34715209335553454);
    msg.setSource(60992U);
    msg.setSourceEntity(156U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(55U);
    msg.topic.assign("DRIKKJZESOCANCOJPKOYEYCRDGUSGIIYAQQMOOSHOZTXACSRPGXIBWWTFUNXJQENKZNBVDAAXJGODLQNIJBWJFRQTVQTUTGLDWVWXVCBBDAZPUWLYKIZVATNVRSFCWHLOMBANHXNLUTQYZSMRVPVFAOGRPRFGUHTRHDIGUPKYMHMMFNHZTICDAZ");
    msg.data.assign("NKQEDLXCQYBLNWKVWLEQLXVGHEIUJNXMGHDPEMGPMHWGGWSKSNOUJSUFXEHHTCFASSUZQPYNGIDHCBTBPAODLRIROVGZIZOFSTHGHKKVZQOCYWFQJUTFFUKQJVWJXIYYATBMRWNSPMPJNAMEDKBFYZXBLZMZUJRNAFTAPSAJKIQBDCGECBVWMIVAZLYTGDHCLKETNFEYXRTRE");

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
    msg.setTimeStamp(0.19387315367197422);
    msg.setSource(55586U);
    msg.setSourceEntity(34U);
    msg.setDestination(63220U);
    msg.setDestinationEntity(34U);
    msg.frameid = 216U;
    const signed char tmp_msg_0[] = {-66, 66, 49, -80, 92, -107, 44, -30, -84, -53, 38, 73, 117, 3, -103, -102, 60, -81, 113, -100, -75, -110, -29, 108, 77, 0, -75, -53, 70, 115, -95, -110, -23, 125, 56, -2, -80, 57, 29, 21, 57, 121, 112, 49, -18, -60, -10, -59, 89, 87, 81, 122, -75, 14, 14, -108, 108, -98, -95, -104, 86, -41, -112, 123, -113, 41, -74, 113, 14, 109, 83, -59, 7, -47, -93, 16, -4, -128, 53, 90, -6, 26, -67, 88, 2, -70, -32, 13, 24, -78, 55, -50, 29, -107, 99, 49, -73, -85, 89, 38, 88, 19, -111, 98, -67, 56, 25, 87, -68, 55, 96, 27, 46, -64, 53, 94, -14, -42, 105, -6, 108};
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
    msg.setTimeStamp(0.8044891079819477);
    msg.setSource(4334U);
    msg.setSourceEntity(57U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(34U);
    msg.frameid = 98U;
    const signed char tmp_msg_0[] = {96, 16, 100, -62, 16, -80, 63, 82, -73, -98, -70, -51, -124, 32, -51, -19, -68, -55, -109, 121, -120, -25, 36, -41, -92, -87, 104, 42, 122, 23, 74, 67, 111, 49, 56, 54, 44, 55, 29, -82, -24, 59, 73, -108, 106, -26, -59, -96, -3, -24, -101, -71, 121, 25, 93, 120, -78, 63, -66, -40, 43, -19, -18, -14, 100, -23, -116, 62, 77, 39, 65, -19, -96, -56, -99, 44, -63, -116, -84, -3, 22, -5, 47, -52, 3, 27, 60, -43, -107, -22, 23, 105, 36, 61, 95, 2, -110, 36, 95, -56, -90, 116, -108, -53, -49, 48, -122, -27, 55, 76, 34, -47, 5, -33, -8, -23, -18, -38, 34, -91, -126, -123, -119, -62, 23, 35, -25, 70, 72, -47, 112, 108, 86, 68, -78, -30, 23, -69, 109, 68, 59, 83, 2, 68, 49, 63, -1, 75, -7, -24, -77, -26, 11, -44, 3, -42, 47, -46, 106, -71, 39, 33, 24, 65, -50, 123, 46, -52, 5, 2, -85, -70, -81, 62, -125, -79, 125, 72, 61, -104, -72, 68, -38, 92, 41, -106, -64, -115, 72, -32, -47, 74, 18, -29, 43, -48, 74, 17, 114, 38, 102, -128, 13, 16, 67, 27, 34, 54, 67, 98, 38, 51, -44, -124, 38, -109, 97};
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
    msg.setTimeStamp(0.9658378645863438);
    msg.setSource(1263U);
    msg.setSourceEntity(128U);
    msg.setDestination(36210U);
    msg.setDestinationEntity(73U);
    msg.frameid = 70U;
    const signed char tmp_msg_0[] = {-52, 86, 24, 48, -2, 66, -92, -107, -103, 101, 45, 69, -113, -91, -93, -95, -125, 18, 2, 8, -1, 57, 14, -99, -27, -62, 97, -122, -67, -60, -56, 86, -65, -40, 98, -94, -55, -62, -21, -34, -95, 72, 88, 85, 102, 115, -102, -39, -94, -125, 119, 121, -118, 75, -117, 63, 101, -124, 79, 81, -75, -108, 51, -45, 83, 9, 105, -18, -116, 85, -47, 9, -7, 63, 22, -3, 8, 9, 107, 110};
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
    msg.setTimeStamp(0.11093366861905085);
    msg.setSource(27066U);
    msg.setSourceEntity(132U);
    msg.setDestination(24450U);
    msg.setDestinationEntity(127U);
    msg.fps = 117U;
    msg.quality = 22U;
    msg.reps = 58U;
    msg.tsize = 203U;

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
    msg.setTimeStamp(0.540940261278466);
    msg.setSource(2863U);
    msg.setSourceEntity(168U);
    msg.setDestination(56460U);
    msg.setDestinationEntity(23U);
    msg.fps = 98U;
    msg.quality = 92U;
    msg.reps = 215U;
    msg.tsize = 118U;

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
    msg.setTimeStamp(0.5577593893606999);
    msg.setSource(49949U);
    msg.setSourceEntity(91U);
    msg.setDestination(42999U);
    msg.setDestinationEntity(198U);
    msg.fps = 99U;
    msg.quality = 82U;
    msg.reps = 7U;
    msg.tsize = 88U;

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
    IMC::Sampling msg;
    msg.setTimeStamp(0.5053475280702647);
    msg.setSource(15676U);
    msg.setSourceEntity(152U);
    msg.setDestination(27629U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.2980987506215005;
    msg.lon = 0.4511865737543822;
    msg.z = 0.8875340761410011;
    msg.z_units = 173U;
    msg.speed = 0.20832989109690025;
    msg.speed_units = 252U;
    msg.sampling_type.assign("IDKDUUEVZYJENMETQFIHLCWDPKETYDRNQKNCSWBQOFKCCUQBZXEKPTQSABLJFYUJBHRKBUJTMFLGLSKPPIABTURCISPOMZHVDAWSDANTBGKGPHXSHAECCVQVDAVWSSZJGWZLJIXUOMRPFHOQYSYCZSXAXZVKMLDDQRRWGTTEBYNYHVGIYRNMYDLXHPOFGRLKEJMCLWPWXVIEMEUZJGIIFVFXFMOOQOIRVQHBUAJURTGZGNACOXLJPAHY");
    msg.sampling_args.assign("KRWHFTFPHQOMPQPBLYUEEALBPGYZUGZAGSKAVSKCCHLOWVDATMDONBEFYNWQADNEACGEFMYKXWILEVTRJJNKMVBRERBIRQVGPCRCNUMHXHRXEXOJWMRHHGZHXXTJUJNTVTWGYOBNPSULWTQSIDYJLRMJYKQPIHSVSZOEGQKVDBOODQAESOYZZJBLMGNIXSZJ");
    msg.custom.assign("IPNJYLWGKITHUIQDCGYKEZFPMZAFSHOFKHBVNJLDPOBXSEWEVYQXUQPJHCBVSKKMIHOMOTJKNPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sampling #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sampling msg;
    msg.setTimeStamp(0.43081333276490863);
    msg.setSource(43296U);
    msg.setSourceEntity(21U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.036471144397879685;
    msg.lon = 0.25467946308492406;
    msg.z = 0.3632722735202416;
    msg.z_units = 0U;
    msg.speed = 0.1892202896236982;
    msg.speed_units = 163U;
    msg.sampling_type.assign("JTUEBGBRFMLRDXVXQYCROPVORXLTAORENQHNKHUEEAZRAMZKHYNMNKCWKYGCZATSFPLLDFLTUUDJFKMGHSKGPIHNWYOPACEGZRSUIVGHKACBUYRZMOLSVJJAXWOENVCUNQQNFBAIIKZYPY");
    msg.sampling_args.assign("MDNSACMSNPQYQUOSIDLSHDBCAPGWHTYYTPRIMISZVEUMWTZVXFZOCPONPJZZTBJYJDYNVWJUDGRMZWNLQKCPEFYFPHJGNMTKCMZ");
    msg.custom.assign("MMIGNUDQOVXXETOYWADRAEXIQBEZIMWXFNYJWZHGMDJJHWIGFNYOGADLPLXTBYWZCNJRGZYSTJBOIKWWJWOVLVMHFQBLKAWHSIIMRYEGCSVVZUHVQPLMRGKOERPARJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sampling #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sampling msg;
    msg.setTimeStamp(0.8101930782569434);
    msg.setSource(29365U);
    msg.setSourceEntity(239U);
    msg.setDestination(24527U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.011378083183777088;
    msg.lon = 0.6828604156736312;
    msg.z = 0.15878869043897503;
    msg.z_units = 193U;
    msg.speed = 0.008442401781447173;
    msg.speed_units = 246U;
    msg.sampling_type.assign("LWLEBIOQXMRNMFRYKZNKYTPGOUNQEEFHQHBRNVPMXQPCUOVROHSKGACNGOTFWNDGYUJMRLYVIVGMCUJDTNJZZJSJGAXYQUOIHIVVCAUWGIEDWFAXQDICBOZNQDYODZRAFXWMPCZHFBMBIISTPJVCJDFDCLSN");
    msg.sampling_args.assign("BMCAIMJOCAVKWJPBVGDTDKRSPNSQKEVJHYUATVTRAVZKELEYZOZRQYSEYHMPXWKILTGUSNWUOWKXJGISSCQIXQYLSKWGLPYFFYRXIBYWQNPLHCIPVLKGEKXXOFVMNOAECUURBVRQPHTXISXOLXABVBHSMNFRY");
    msg.custom.assign("LRAFYTIWGNFXFLWVBDJMANKNZZZBKPBXIUOQUERSQINSOPSSFHGUHHWCHILCERUYAJJSLLQPMXEHAXEZECDGDAHXAXFDYAMLRCVKCFTGHBWHRUKVWSUWTOTQXPIBXGPQTKUNKJQZBDNDFUMCNTJDBGLVCEWFMKOGTOHKQVOMJILGAZPPFZRSDZVLJZTBQVYVUNACWJGIUQQTRIYWVIYDOXXRONWMEIBYENCVKPJRAMDSYYPJOBOZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sampling #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SamplingAction msg;
    msg.setTimeStamp(0.2684355682734212);
    msg.setSource(37223U);
    msg.setSourceEntity(176U);
    msg.setDestination(8429U);
    msg.setDestinationEntity(34U);
    msg.action = 200U;
    msg.type = 254U;
    msg.description.assign("EOTVBNJTBZWLQKMEANZQAYFJVEADZQCOWVYUJFHJVQJECFKSTWPZCMFUDYJXIFKOXYNPWCILKRTFMZFYRWUXUIABHCDELMSGBQNOKOTHXAMBRZNECPTGIBVXZVQWHMRIPRILIHUGHDVYDJOUDMAXLRHRGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SamplingAction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SamplingAction msg;
    msg.setTimeStamp(0.5179943046810942);
    msg.setSource(7759U);
    msg.setSourceEntity(199U);
    msg.setDestination(42891U);
    msg.setDestinationEntity(60U);
    msg.action = 240U;
    msg.type = 142U;
    msg.description.assign("ZZYHPNDJBNCVNDWRMXCSMGIQXXLELJQTYIEFKBRBSVFDBZJUVEYAYPBSECONLEFBPGLKODYZWVTRL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SamplingAction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SamplingAction msg;
    msg.setTimeStamp(0.8854583510655785);
    msg.setSource(13523U);
    msg.setSourceEntity(9U);
    msg.setDestination(35802U);
    msg.setDestinationEntity(100U);
    msg.action = 254U;
    msg.type = 118U;
    msg.description.assign("NEHERZFQLAVHYRRMJDTZCXHEJEWPYQCDKHFLQTERRSJTFBHDYSFOTJYUUQTUMVPTRPUOGOSJURPZMGAANVQYFYNIXKPGAIWWKWFXOVESCEXXDEDIHFMBNCKYBODBSIHXKBBZTQHVPZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SamplingAction #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9572119310335548);
    msg.setSource(57852U);
    msg.setSourceEntity(199U);
    msg.setDestination(17672U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.39162223705289034;
    msg.lon = 0.28796487424946615;
    msg.depth = 254U;
    msg.speed = 0.20429656252281259;
    msg.psi = 0.6967146681461223;

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
    msg.setTimeStamp(0.8548072864207471);
    msg.setSource(22695U);
    msg.setSourceEntity(52U);
    msg.setDestination(36608U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.1050146247320144;
    msg.lon = 0.03533717763011668;
    msg.depth = 52U;
    msg.speed = 0.9502915816519586;
    msg.psi = 0.6630898153065553;

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
    msg.setTimeStamp(0.17663428321941366);
    msg.setSource(13688U);
    msg.setSourceEntity(49U);
    msg.setDestination(56994U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.9843206852654203;
    msg.lon = 0.6991072822559647;
    msg.depth = 49U;
    msg.speed = 0.09434303203820016;
    msg.psi = 0.9900429537220247;

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
    msg.setTimeStamp(0.8525918831524718);
    msg.setSource(64607U);
    msg.setSourceEntity(244U);
    msg.setDestination(3793U);
    msg.setDestinationEntity(45U);
    msg.label.assign("SMRONVXDGIVBDARFMAPSIXOGUOJETICLMXHCHSTADVKTHQJGASLOWKHIMGVQIRYHJOZWPAVPUKNUGXEQFOPFSBDLXFBKATWHXRTDLQZPTSHJAMFWTCUENYKQINTIMSCGBLYPXMOSHBZVYTFLQRKZIUJQFCLDVVCBCLLDGNMYYEBMEFJZCXZJQLKBUNJJUBKQPUNWEUNXRYWYKAPHINZGWORIEMSC");
    msg.lat = 0.0017287962931790135;
    msg.lon = 0.4203614575404152;
    msg.z = 0.5509433827088288;
    msg.z_units = 130U;
    msg.cog = 0.32725167369582353;
    msg.sog = 0.06053097585300227;

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
    msg.setTimeStamp(0.2784917538374536);
    msg.setSource(3731U);
    msg.setSourceEntity(138U);
    msg.setDestination(64490U);
    msg.setDestinationEntity(211U);
    msg.label.assign("GNSJKZIWRXCUIKEMKXVXEUOABJLTNOZWDBMQMXBBNLBJQTKBUEOTAQIFWPHJWCMYHFIQIYNRLZPPVEDIUKQTBFOADGPHDQDZMAKTXVDNFPVOVIOXEBMRAAXEORFYGDYKZSNMNUCSXMJAUOH");
    msg.lat = 0.6797820585581231;
    msg.lon = 0.10512430373492543;
    msg.z = 0.09268757856340248;
    msg.z_units = 133U;
    msg.cog = 0.9368626631691679;
    msg.sog = 0.3154719531768574;

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
    msg.setTimeStamp(0.7561224374471297);
    msg.setSource(46040U);
    msg.setSourceEntity(224U);
    msg.setDestination(32469U);
    msg.setDestinationEntity(181U);
    msg.label.assign("NTSHEHYZLVTLLXNZRWNFNPTSZRLIXFCQUIVKJFAAZBXJROZUDCBGWEXLHQSFIAMYUUKFZJQHCGKOIXEXUWCVQHMQWOPVLNVHTRUZYOMHPOEPNOPTJRYOPHOEDGFUPFMDAN");
    msg.lat = 0.25725062915491315;
    msg.lon = 0.35452839287938975;
    msg.z = 0.9888078706888168;
    msg.z_units = 191U;
    msg.cog = 0.8967585778851893;
    msg.sog = 0.7804525393844729;

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
    msg.setTimeStamp(0.7243284805853585);
    msg.setSource(43007U);
    msg.setSourceEntity(87U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(0U);
    msg.name.assign("AXBHPNYHJGWKSONVCZOIBQJCYEYUQNDSEAUYXNGWVMCCJAPOBHNHNXDNFWLXDBLMEZVCYAMNGQPTJHFWBOOKQAQBKMVKIXFQFTTGQZRQSISVRTEMUJIKGWGPJTIGRULPAGKFFVSULHYMKUVNGLGHEEZPXLWTLCBUAPFQODIRIXYDWYAWJCERSVHKDPDJHUCRXXWFPSIKCMSBEOARSTHEDOMPATILTMMROLVZYDBBQSCDFZOJUZR");
    msg.value.assign("PTZZRRXRJXBIHANZSAFANBRMXIGILNSSPNTXJKKPYFEYABJOYIJEDYVIMVLZNDRLLSHYGJBPOLUKYTAUCOCUILLAJHHNQJBYTPDNBEWPCWOEEJTPTFMQKANCOBQZUWWMMTMZSHIGVMUWFMGUUCGMWJOLEUHXCKQOXSSQKCKWEOGDRTEQVWXRCIIXGQJVQSHZLQZSYDUZDKKFMNYFVNODVXHARTERLSVWAFFHYDTFBGDVWIPAGRXCEHBQCBKDPF");

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
    msg.setTimeStamp(0.8160540147027306);
    msg.setSource(64403U);
    msg.setSourceEntity(179U);
    msg.setDestination(38371U);
    msg.setDestinationEntity(178U);
    msg.name.assign("QYVINUUPQNTPWQPCAJKOYIXCFWDPZNEJIXPXTRHYUSGHXTBXMSNSVUUAZEJIRIDFCBOZCVBVARLZGFCTYYDMZNGMGSEFZCAVCHVYRRKDDURHIKKBDNKYGDWWGEWTDGHHDLMHMOFQMUKRERAKNLOPCSSSLLOMMIBFAFZGEQKBITNNQRPJORAXLYLKNWEAPFJTCGBVJJJVIVMCSGWUIXEXBHZLZWQJZFQXBBTXUEPJ");
    msg.value.assign("AYLQPSLWGYARDTUZCERUAPITQKCJRGDTMKRSOUETYESQCBJWWADJGOWFOHLGRRTVMAOHXEICXENHSNKQIKNYNCYEXGIPYHVHQHDSZBZWOUREOMPKACGCXAPLIVBXBKLDIOYIQJBWFFLQSWMPDCOTFUJZNUSWZBYRJDXZMIOHNXXWAFFALITEBPZMKCVNHQBBFKYBAIFHLEMUHVKVMPUDQZFZVXMJGGVYQJNRDUOZPGPLSGTJVNDTTR");

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
    msg.setTimeStamp(0.3745160629564064);
    msg.setSource(8105U);
    msg.setSourceEntity(212U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(219U);
    msg.name.assign("PWINHQLCFAGMUKSTHJUIDGKNPECQDRSAAKHXZTGNPRWRHMMIMFBWZAL");
    msg.value.assign("OGVBQOXBKATZGBTWLXRSPUOQCZMLHEBVOPRHFTCCQHGDUGTFVGLCIOMRWJRNQMCDJWLPUHWEMEWQLWDZHXJFJVJADQRASNUUVSHZFQMNYCSIAEBVIEODIAUXXCXJGTJZI");

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
    msg.setTimeStamp(0.6671234458792509);
    msg.setSource(33037U);
    msg.setSourceEntity(14U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(144U);
    msg.name.assign("PKNHRICJRIWTKQUJFXBCQEQWXTDLLACQSGPXNZRMCYUEYCOHOZTJLRXODPYGESQJHPPRQUVEEIPQLMIDJMPZFMCDIEOSTKUFZJKBSKLLGXVZDBMNMEAWXSZHNTWAMBZVQLUWYVIISJQOTHADRVWSAPFODZMOUE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VWXRQKAZVDVHGDHSYXRLSXGAKRCMNJQSYPXNEFOFHQGRQOIKVJVSRCFLXNXADSWMTTEKSPCGYKZGJUFEBOHYXWPFXARHDMXNUSWADCCOOZQITCEDCFVJZZUGHHFZRKEEVRIYUGZWBANIABQABLOMTPGAROPUNZHJOWZMXSEGDUNILVQ");
    tmp_msg_0.value.assign("DRERZFUFQIADJFEOBL");
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
    msg.setTimeStamp(0.4415502797305172);
    msg.setSource(27045U);
    msg.setSourceEntity(12U);
    msg.setDestination(24457U);
    msg.setDestinationEntity(141U);
    msg.name.assign("NEJRUACDZVYJOUZERVNEZHSNDECRVQNFBWQGSOKKVPQZTAHWMRPHDWJFFAVJUYNGGZYIMPGDIBXRLCYDNPIMUOBEHVCUVKWWYTBOGARGFCBTERRLXJOGXZBMFUHAUMLSLAKQESJSDTRIYSXKIDETSYOGSHMXWXLGIPNDFVSFFCBZMLKAWWKJCYBIXULBQNPAIKETXUMKJYQVICQOJCEUJFBPTPLTOOPXFL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IPJKOEXHEPGGCCRITYDFCYLQXGQQMUDZWPBXXPTYYLVJMROZASSAZHCQYTJKFTUKMSYMHTLXLVAL");
    tmp_msg_0.value.assign("TYNLAEEMJBBPXUKVAEOWJMFQXIYGLSDMCTYZTDPGDZJXCVWQAAFNY");
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
    msg.setTimeStamp(0.7706442569278484);
    msg.setSource(39140U);
    msg.setSourceEntity(244U);
    msg.setDestination(54174U);
    msg.setDestinationEntity(213U);
    msg.name.assign("GMFUHIICDYYUWRFOQJLEPLVZSYCLVADMUIHYXZZNVBXCTBKKYCLHLSUOIMCIAKSEWQGDPLZMQDXYOAWMDIADRJROYGRNJFJEOLGFNNMBEXAEHOTFVODUTUKZMQRILNSVKNGXWOXSXSSBBRWMNAWJDYJVSKRWEZXPHCSETPDQBGFUQIPFYKNCNXOGZTWLIVP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UNJJQFTHREEOIKIXNXJYCQOLPSVWWGUIMNZAEBVUZHAOZNPLYIOACICDWFOFWKWMYUJAGYPYZASNILXMTQPPIMRLIYRGQQOFKOUEKYANVESDSBDYFBTMBSDCAXOIHHVJZHJWDABPRTGHLQBDKQKRTXCBFZRYOENLX");
    tmp_msg_0.value.assign("JAXJYHBTPPQBTGMJBPMZIIIKXDZNFAYSEDOJDAMLCZXXQCLEDUOZBJZKNFEJGHMOEYTKFLNUATFSOTLQRWZHYAIJOYMLYFPCQKCIYZWKLRKDVXXSFSGETIGHSXZZWRKGIGFXNDGCB");
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
    msg.setTimeStamp(0.7685105380393593);
    msg.setSource(63122U);
    msg.setSourceEntity(7U);
    msg.setDestination(54626U);
    msg.setDestinationEntity(49U);
    msg.name.assign("TXNSUQNDAQKQFFZXZXHWXVHWVWJSAJCAYOYLAOVTSMXKSAJDOPMHMPSCLEINRBZGCPUFHBQEXBOKIZMTHBCYJIVVWEUJUBOGFDUDMJBKRDMGPAQOVIIR");
    msg.visibility.assign("GABDJUBCSBSVRI");
    msg.scope.assign("VXKHSJKQOXGTFMMJENBDJKYVMEGGYBFEPNQTTQOZLKWRDASTTCMHNUCKAGOURXILYBNQDOCEPLAXIJAKELDYRGQUORIFJULXQFWLWSRIGKFIROTANWHFPPAPYZPOWWIFPBPUOMQGSVLDWLEVYVUHYQRCMLRCLZVUKGZDDCXTSVCEUKDJATZQOBRXHWSVYDNAVBTPWPMOCZZRHBKNGEAIMCTHIDHNEGHJJSBAJF");

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
    msg.setTimeStamp(0.3032092354639965);
    msg.setSource(49782U);
    msg.setSourceEntity(230U);
    msg.setDestination(44105U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RBLRCWTNRBMSMWSJXKATJLRX");
    msg.visibility.assign("DIKRKAHYNRKIFYWKXZEWWEHJTBIHXZZIBORVPSTFDLNQXJFBYQOOSCYOSZRJLEYLKPVQYXGWFSBGCSNPXWLMCDG");
    msg.scope.assign("FXOWZSIPEUBICRQECJRNKBWKESAVTGTARGXLPOAWMXEDMJTKULXGRIHIYXHLTMCXDXHSRQRTAWFKQCOMJOUYLCSTZCEIHZFWBISURFMDYFPHNBNAHVGWNXWRBZQDEYQZFAGUDEPQEVY");

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
    msg.setTimeStamp(0.8200994761062966);
    msg.setSource(42786U);
    msg.setSourceEntity(243U);
    msg.setDestination(18712U);
    msg.setDestinationEntity(135U);
    msg.name.assign("BWNMJRHHKZUFTGLJYODWROUPKXDNVTNXFNEDQQEJJSKIEPSOXHL");
    msg.visibility.assign("YDVNYIBWRCUVXPPRSRCXTFXERZLFESOKQBYPTMJPVXLPASWTGEHMTXQBIQFBNWMKJZOICH");
    msg.scope.assign("PFSESHUWJREAXANKTSOABXXGLCUQMJRVBJFGOGQZCIZOLYAXSIDSKQFBVLTHFKYTUQNHJFYMDDFZSCHZPGLVMWXZCAR");

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
    msg.setTimeStamp(0.21837818955900234);
    msg.setSource(49702U);
    msg.setSourceEntity(139U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(62U);
    msg.name.assign("COGPXZLJSUMUVUVDGANRACYQROLUGEOVTAXNYYIOJYVTLJUQREESEZCOKBDYTTPZSTFEJKIVW");

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
    msg.setTimeStamp(0.1721585848598789);
    msg.setSource(30805U);
    msg.setSourceEntity(30U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(40U);
    msg.name.assign("DQKBJDGDTZXJMJXUOLDHZCQEZLHLPCJUTKQDFDGMEACRVNKTBJVLQSVTSTYNAMLLOFYPYEFYYFXKQZSRYJYATUGSCOIBMBCXONSUPYFZZYWHSWPABMPGNHROUVB");

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
    msg.setTimeStamp(0.28438264745985553);
    msg.setSource(9296U);
    msg.setSourceEntity(74U);
    msg.setDestination(60840U);
    msg.setDestinationEntity(125U);
    msg.name.assign("OZTZBCDUIGRLGDPJKHVOACPNWHHWVDRXRJTFXJJZXCJWPEREMPVIZBMBHRNSGSJKKASWOIWPNAQEEGPFMSNFBMRTSDZWQKDADZQLAFIBXYAKDXMUBSLEYYPUOZQZQTVEYHTIKRYCSVQOJCMAPYVTMLQBYZLNUTNCXWCESERUXRWMGUDKDB");

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
    msg.setTimeStamp(0.1756215714482946);
    msg.setSource(61693U);
    msg.setSourceEntity(171U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(217U);
    msg.name.assign("YWHIXOADWLKQCQZNHAHYCXIFOBMFZGXGXTFDNJYZJFRLOVOESQDONINRPLLPBDMVSGWBEK");

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
    msg.setTimeStamp(0.5953959629455112);
    msg.setSource(38132U);
    msg.setSourceEntity(136U);
    msg.setDestination(3380U);
    msg.setDestinationEntity(249U);
    msg.name.assign("SZSCPZEHZAQOTJWLXVFKUEFVDUKCVOWCXELCDELORXDMDSZNZMFICZGDAKTUAQYBVLJKYDRYHQHZPBWBURVHZDEGHFNQSNXEJOSNSFTFVWJMYUMMWTQUCNGGRMRKNGKRCUDIBLGABBLPTNXPBVRCGIWBJIVMVKAWTXSJPSQYLYSGCEYPPEFOTOOQYXAGNNYOPLUD");

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
    msg.setTimeStamp(0.2968878334557695);
    msg.setSource(61961U);
    msg.setSourceEntity(203U);
    msg.setDestination(564U);
    msg.setDestinationEntity(119U);
    msg.name.assign("NUNYTBRRJQHXXSKOUFAFGVLCXPBJUUXSWNYVIDIYDJCJJEOOROALFAXDZWERRXNWHMJBHIACWYNZIQJAIBTJXQHYCUZSNWLWCLZARAMGRGLIZWLTVSEGISEEQVAEQEMJMAFVTNUFUBZKEKUMTMKOKDPGSIDRFDCVWGKHHZXKBFQPGPBOXNMPRFOCHDPETGH");

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
    msg.setTimeStamp(0.24265205073202756);
    msg.setSource(33254U);
    msg.setSourceEntity(103U);
    msg.setDestination(55992U);
    msg.setDestinationEntity(104U);
    msg.timeout = 3570508593U;

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
    msg.setTimeStamp(0.7016913912304684);
    msg.setSource(38810U);
    msg.setSourceEntity(108U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(219U);
    msg.timeout = 291525185U;

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
    msg.setTimeStamp(0.4974770752324472);
    msg.setSource(57703U);
    msg.setSourceEntity(143U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(198U);
    msg.timeout = 2781175248U;

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
    msg.setTimeStamp(0.9035241619811233);
    msg.setSource(9858U);
    msg.setSourceEntity(162U);
    msg.setDestination(42678U);
    msg.setDestinationEntity(185U);
    msg.sessid = 1749826828U;

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
    msg.setTimeStamp(0.7112198066481753);
    msg.setSource(56740U);
    msg.setSourceEntity(199U);
    msg.setDestination(47799U);
    msg.setDestinationEntity(47U);
    msg.sessid = 3717555U;

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
    msg.setTimeStamp(0.4559214456396442);
    msg.setSource(55683U);
    msg.setSourceEntity(154U);
    msg.setDestination(44180U);
    msg.setDestinationEntity(90U);
    msg.sessid = 1160099432U;

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
    msg.setTimeStamp(0.9161128432241192);
    msg.setSource(33102U);
    msg.setSourceEntity(99U);
    msg.setDestination(60545U);
    msg.setDestinationEntity(127U);
    msg.sessid = 1270290552U;
    msg.messages.assign("IPEEHYVXRCTWMMECDTECIYLLOZTIDRGGEZIVOFUXWNDDCUEHNCKTKPAWIJDYFVSHMUPBDYWLCKFTPGMDKMYHXCOAKTXHTEDRRWZYXRQAQXLWRUACBYSVEJCOJHORARZLVOUXYXFHQJBMHUFPLIONUBROVJPVIDIVWJNWEQTBZG");

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
    msg.setTimeStamp(0.7320807892419245);
    msg.setSource(33823U);
    msg.setSourceEntity(161U);
    msg.setDestination(62420U);
    msg.setDestinationEntity(59U);
    msg.sessid = 3217415983U;
    msg.messages.assign("ZQBANABSHSWUCWQKNJNXHOFZUCIVRORGBBYVMPEOQSFEVFXGLPHDZIPYXWFHZWMTAIVHDVETIIGPTLCNLMYJUOANOQFRHLQJGD");

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
    msg.setTimeStamp(0.918799414534802);
    msg.setSource(55204U);
    msg.setSourceEntity(15U);
    msg.setDestination(3743U);
    msg.setDestinationEntity(178U);
    msg.sessid = 1677296146U;
    msg.messages.assign("WERMBJZCHWSMUTEWOTYQXVAEFNRTDIJCAUQRLGFPSOYXIVOKNAQCUOJLBFOFWTGZIGREXFXYUHXKULVSOETCVNUMINNBKIRXSAMWB");

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
    msg.setTimeStamp(0.8909051371885613);
    msg.setSource(2950U);
    msg.setSourceEntity(246U);
    msg.setDestination(36705U);
    msg.setDestinationEntity(17U);
    msg.sessid = 2119369559U;

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
    msg.setTimeStamp(0.8334145050805736);
    msg.setSource(17990U);
    msg.setSourceEntity(214U);
    msg.setDestination(35759U);
    msg.setDestinationEntity(166U);
    msg.sessid = 1999335606U;

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
    msg.setTimeStamp(0.4693601136568558);
    msg.setSource(40640U);
    msg.setSourceEntity(176U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3362213756U;

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
    msg.setTimeStamp(0.9524245333867719);
    msg.setSource(31988U);
    msg.setSourceEntity(167U);
    msg.setDestination(5692U);
    msg.setDestinationEntity(16U);
    msg.sessid = 107467918U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.888191977861749);
    msg.setSource(59125U);
    msg.setSourceEntity(119U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(246U);
    msg.sessid = 604239819U;
    msg.status = 149U;

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
    msg.setTimeStamp(0.46582796699989326);
    msg.setSource(32275U);
    msg.setSourceEntity(230U);
    msg.setDestination(36085U);
    msg.setDestinationEntity(97U);
    msg.sessid = 2860576526U;
    msg.status = 144U;

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
    msg.setTimeStamp(0.6920930780518472);
    msg.setSource(9999U);
    msg.setSourceEntity(69U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(97U);
    msg.name.assign("FURVMAAUVNVCSJPJEPMUTEGQOMXGYEWRDKWBRIPEDVGWKIOYNUQNUYKFYCBMWLAZUZFZJZDCQWDHCDAIKRFQKUIEAWEXGYKDOLRLGHSATHDFRFXDFXPLINWBUKTYBSYEXNCAAOALHZXNJAJOGIMSOJPCBQRMCTVSJDUFBXYQQFQVHPKEPOWYVI");

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
    msg.setTimeStamp(0.8730213688017154);
    msg.setSource(56476U);
    msg.setSourceEntity(65U);
    msg.setDestination(2922U);
    msg.setDestinationEntity(150U);
    msg.name.assign("KREEZELOBWJUEYXAPJJSNLORCDGBHCVDWAJHAVOYGDBREIBZNZMOXYHLAUXXFXSEIBMCOFDPBRKLXXQWAAMJZMYGVNMRVQJKCPNGPEHSXRVNWHYNAVWHSIOUHBIFLMULHBLIULTQVPCMWMFUDAADOLCQTYNUQDHIFQCT");

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
    msg.setTimeStamp(0.3957427717912321);
    msg.setSource(39474U);
    msg.setSourceEntity(213U);
    msg.setDestination(55978U);
    msg.setDestinationEntity(93U);
    msg.name.assign("NJZCAEQMWZYDOUNZZUDARGZUVYYTBGJUEVEFCRKPOLBBLMUKEMAAHGTVYYDGQGWSMOSHYFXXXNMDDTSEKLJGIIPPKSQAHHDCWLMDTLHDGRATAROFTWLSVTOICJBQFQXWKJBUNKXEICXXPQTMPZFIWYXHKGIALSVBJEQHNTLXWPIRNSURHHYIVZBCOPECOFENMLAUSYSBQIKOVTDRWKBUMZGKRHCOXZSPPLVOYDIERNGCFVJQW");

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
    msg.setTimeStamp(0.8182000385973102);
    msg.setSource(35120U);
    msg.setSourceEntity(142U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XZKKFMFVRYSK");

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
    msg.setTimeStamp(0.33625215172039746);
    msg.setSource(39619U);
    msg.setSourceEntity(37U);
    msg.setDestination(14378U);
    msg.setDestinationEntity(3U);
    msg.name.assign("DZCQHSMZAXCLWNRNBJTBZDTWCVXSLOVFPPGMWFUWHVGIHSJSCAOIEJMVSFSYZQPOJVTJROJEHKINDYQLYKCLVTUUHPXGYDNBBEVCZLZPACMWZHJSRONKGTGXXRYUKPTWKCRLUIXLDPCMDWBNKXRSPIHJXBADHMLWUJZFOFYGMAAQNURBYPUEXOATIZDGEQEER");

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
    msg.setTimeStamp(0.8909619482249032);
    msg.setSource(13902U);
    msg.setSourceEntity(104U);
    msg.setDestination(22093U);
    msg.setDestinationEntity(197U);
    msg.name.assign("QAUKMYSUPQJWXZIAPUALGUJNZREMZFNAPDABBKEOYIALHPQGXXSEWHHQNCDMCYRVYQEVXHWBGBGOFJXJGFZRZXKJJFGDSUEUSHCNWFDOXWJNCAPLTLGBOHASBYBRDCNVRIKFQWWMRTSZVKKWIT");

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
    msg.setTimeStamp(0.4770588292443858);
    msg.setSource(14236U);
    msg.setSourceEntity(124U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(12U);
    msg.type = 254U;
    msg.error.assign("SQPGRKEWICVIUFJBUSJNAHWJXPXGGSLMENMFQSADUPRDSADNHYLXTFWRJTNUMYKUMVEIOIPEMMRJYLXMFAPWIMSNVGCMNABGSBLQMOTNCSRBFCHEQXZYYJKOAFODZHIRORLDPLLDGSJKXNIVOYCBIEAHWUATRQOVUIKBGUXTTHZQCQTJXKUCCFCNDLNETYZVDEBE");

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
    msg.setTimeStamp(0.8373768731632445);
    msg.setSource(407U);
    msg.setSourceEntity(115U);
    msg.setDestination(38118U);
    msg.setDestinationEntity(117U);
    msg.type = 217U;
    msg.error.assign("CLJNMWOVXFUINRCGYVMIQZRCQHMKFNZCQPASIXWTLOYFMFPRKJQNDHAZGOZMFHHYGWDDXKRDQQVTPVPUCWARBJWL");

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
    msg.setTimeStamp(0.8565957965540435);
    msg.setSource(56817U);
    msg.setSourceEntity(225U);
    msg.setDestination(12205U);
    msg.setDestinationEntity(194U);
    msg.type = 248U;
    msg.error.assign("VDHVDNLPEBYYOZMCRYCZAKARYLNBQPGOHPHQCKTTUNFNCDRDIOCEJLZPYXHKIENP");

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
    msg.setTimeStamp(0.9485151601662539);
    msg.setSource(50819U);
    msg.setSourceEntity(21U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(246U);
    msg.seq = 59719U;
    msg.sys_dst.assign("FMVCYLSKOANUEKXZPDGYLDEIGQYQZQMTSDVWHCWUSSXCHUJLACNTQKIBFVKQIFYRRREWLZMZZAHWZRLMAZEAXJCGWBBTCATYPKJBDVROJXPCAC");
    msg.flags = 50U;
    const signed char tmp_msg_0[] = {87, -101, -85, 69, -127, -42, 18, 11, 106, 74, 80, 83, -99, -10, 99, 19, 78, 2, -26, 3, -14, -123, -30, 31, -23, -89, -8, -33};
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
    msg.setTimeStamp(0.7535325208779171);
    msg.setSource(37266U);
    msg.setSourceEntity(248U);
    msg.setDestination(460U);
    msg.setDestinationEntity(25U);
    msg.seq = 33289U;
    msg.sys_dst.assign("GKPRJXGVJAQHWGYTNJCNGKACSIRDNXOPBFYHLCSPLPGNPOMVVWMWKRULWT");
    msg.flags = 151U;
    const signed char tmp_msg_0[] = {-118, -2, 13, 5, -99, 23, -67, 8, 82, -48, 45, -40, 42, 99, 44, 66, 97, 126, 42, -101, 8, -51, 69, -53, 110, 93, 64, -86, -30, 4, -55, -27, -14, 18, 75, -109, -80, 63, -77, 99, 120, 82, -16, -62, -102, -105, -106, -28, -92, -62, 75, 66, -11, 75, -89, 85, 106, 94, 108, -102, 97, 39, -107, -122, -15, -42, 125, 53, -123, 114, 17, -42, 29, 78, 34, -5, 75, -22, 95, 110, 97, -118, 111, 102, -119, -106, -111, 124, 68, -16, 65, -79, 123, -60, 126, 125, 38, 2, -14, 109, 44, -85, -41, -70, 93, 37, 81, -88, -89, 9, 63, 11, -121, -69, -65, 72, -74, 120, -101, -74, -47, 50, -108, -69, 105, -119, -20, 51, -111, 126, 125, -48, 28, -121, -14, -28, 33, 86, -39, -113, 76, -95, 8, -40, -47, 73, 12, -119, -85, 42, 49, 1, 66, -118, 34, 23, 55, 0, 9, 103, 107, 66, -32, -114, -126, -83, -64, -117, 41, 94, 70, -77, 122, 66, 9, 29, 12, -67, 8, -43, 27, -50, -127, -77, -89, 66, -2, 118, -80, 30, 13, -20, -13, -121, -128, 13, 96, 58, 23, 100, -115, 70, 125, 76, -35, 46, 21, 33, 105, 92, 59, 13, -73, -60, -100, -21, 58, -34, 20, 80, 120, -34, -69, 6, -40, 32};
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
    msg.setTimeStamp(0.4309626714132391);
    msg.setSource(55602U);
    msg.setSourceEntity(122U);
    msg.setDestination(23803U);
    msg.setDestinationEntity(76U);
    msg.seq = 60401U;
    msg.sys_dst.assign("DCFILPCJVIEXKMFYFUCTWBVEMZPVZHHUUUACXNIFPTALMOQLGQRPYQNOVPENUOUGVPINKRRCJSMGWJESZCAYUGHIOWZBLRLAEJQRELXDRVWMHC");
    msg.flags = 225U;
    const signed char tmp_msg_0[] = {-36, 91, -25, -11, -17, -87, 57, -97, 36, -51, 33, -118, 60, -87, -89, -77, 83, 79, 117, -81, 120, -125, -19, 103, 20, -106, 79, 29, 70, 122, -109, -28, 41, 22, 6, -114, 68, 41, -75, -3, 126, -60, -52, 0, 126, 63, 100, -56, -65, -62, 78, 19, -127, 87, 107, 38, 10, -128, -83, -8, 70, -84, -9, -17, -39, -5, 10, -94, -102, 85, 16, -94, 7, -66, -60, -49, 95, -95, -92, 115, 17, -24, 100, -89, 46, -128, 36, -94, -79, -66, -125, 101, 110, -103, -113, -46, -86, 8, 90, 27, 116, -112, 21, 19, -45, -122, 19, -12, 42, 5, -118, 108, -115, 116, 81, 79, -87, 47, -114, -88, 123, 119, -30, 72, -41, 42, -68, -4, -73, 118, 99, -95, -59, 65, -8, 42, -75, -64, 47, 62, -70, -124, 52, -43, 30, 111, -102, 2, -41, -104, 7, -120, -89, -51, -29, 65, 116, -91, -58, 13, 34, 47, -116, -5, -71, 121, 12, 111, -2, -87, -23, -21, 76, -76, 40, 20, 64, -62, -120, 123};
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
    msg.setTimeStamp(0.9266461237737493);
    msg.setSource(45753U);
    msg.setSourceEntity(42U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(24U);
    msg.sys_src.assign("BODPAPDRHHJHHGKUNZOSTFDJDZGGYPPPHAJATCXCWRMEOFRFDJQWTEOTMZUYCMRAKUOJVTXNBFVBQZVOHNQQBKVMBHTTALXPALLMWGHOHLAYJTUUFKQUGNPYQKKQZYZWSPIUAUTYOGFGDWGMIVRGMDVCINESLIUBDZSYMFNLZZELBDVTVSCHXMRBWXDYSCBIEXWOQSJLLXXKJMQAKIRCE");
    msg.sys_dst.assign("MHNVPXOFSKAEBXBSDURJSAD");
    msg.flags = 236U;
    const signed char tmp_msg_0[] = {124, -2, -55, -22, 22, 106, 9, -49, -114, -11, -36, 111, 23, -45, 94, 0, -91, -62, 92, 82, 98, -113, -10, 46, 65, -21, 86, -103};
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
    msg.setTimeStamp(0.25808427793899213);
    msg.setSource(35251U);
    msg.setSourceEntity(172U);
    msg.setDestination(23938U);
    msg.setDestinationEntity(138U);
    msg.sys_src.assign("ADVSUIGSJNYRNCJRKFAHPDPDYFSMWLGIPVKNLNILRQEIVAZSIZWBUBYYEHHQGZBFOJRKJVHLSCOAZUKOJXTFCLLQUVTPWOVMJTTAXYDQTBXRSLPZDTAIGRDQOWODFIJJGADMKEOHRBCCMSLHXCEHZSQZMYTBWCNPPVYYLFKDTSWFBQTUUZDQXIJGRBUWQXCOKZQPVGCGUY");
    msg.sys_dst.assign("HOKGMABMIFWTFPSSDPLQAPZLTJOKDSZBQHCSBFTGNMYEWOVOPCWZYAEMQXRJGYOWCHOBNBXCLVDYPPGIEYSFDIGZYCKJZWUVJOLRQNMNWWRNIOCZXCWKQQUPFFUWNHL");
    msg.flags = 144U;
    const signed char tmp_msg_0[] = {-36, -33, 74, 41, -1, -107, 120, 119, 33, 78, -101, -127, 10, 66, 71, 66, -100, 19, 41, -46, 32, -80, 98, 72, -7, -21, -72, -62, 22, 124, 28, 99, 78, -31, -113, -102, -81, -53, -51, -100, 85, 10, 95, 90, 3, 90, 112, 126, 64, -100, -16, -86, 69, 102, -59, -41, -62, -42, 27, 42, -89, 25, -58, 43, 28, -67, 107, -52, -127, 88, -77, 95, 94, 72, -101, -96, 20, -28, 68, -86, -86, -108, -59, 98, 73, 123, 3, -23, -56, -91, 109, -100, 89, -33, -21, 69, 96, 7, -60, 103, 97, -120, -21, -96, 10, -63, -105, 75, 82, -112, -120, 41, -61, -75, 81, -53};
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
    msg.setTimeStamp(0.5506540904864135);
    msg.setSource(50341U);
    msg.setSourceEntity(213U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(66U);
    msg.sys_src.assign("XZDUUIIKHQVJNCCLWNOIOSLOJE");
    msg.sys_dst.assign("LNTHVLXHVUU");
    msg.flags = 225U;
    const signed char tmp_msg_0[] = {64, 38, 46, 66, 14, -9, 40, -44, 52, 98, -74, -96, -82, -13, 110, -45, 41, 103, 21, 115, 87, -20, 52, -50, 37, -49, -114, -43, 17, -112, -72, 7, -61, -67, 34, -51, 108, 91, -125, -73, -77, -112, 117, 46, 14, -78, 39, 10, -28, -12, -109, -60, 113, -102, 111, 60, -27, 54, 92, 93, 107, -88, -54, -103, -47, 123, -3, 95, 85, -55, -94, 115, -13, 95, -103, -6, 7, 121, -85, 73, -68, -59, 3};
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
    msg.setTimeStamp(0.7340196607494608);
    msg.setSource(7247U);
    msg.setSourceEntity(14U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(68U);
    msg.seq = 64353U;
    msg.value = 253U;
    msg.error.assign("PANCTEPASZSOMLJSXUZYENNNCTPLAKRKEQDBROAVMRTHFQFOZJVQUKSEJNUQIJBMJEEWUHMVZOHYSBWUTYLDERKYWILSTAPXTPFLMCMVRFHPJXTWAWQWBREQIAVBNUHATNPEXRUBGBZRSQCGDNOCSFHYKGMDDKPBVLZILKQOZITXKLCUWJRFCZXMOFGXUDVOKWPIWUIMHYYDOCVCGYRHTLII");

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
    msg.setTimeStamp(0.6892666698647527);
    msg.setSource(22405U);
    msg.setSourceEntity(254U);
    msg.setDestination(40893U);
    msg.setDestinationEntity(22U);
    msg.seq = 16230U;
    msg.value = 64U;
    msg.error.assign("PVCCENRDZWNUDSMFTEQZZEUJANTYRAGDGYOHKIZQLNTAHYRGGOLCVRQULWKBCMBPGNVTKVXATVKNIHJQMXEKOOSXRSXUMXJEKOAHWXTYHIFCBEPTUPAKEYCRQKLCTAWYLZNFOAQABWEWYKFDTXOSWWGBFHFOD");

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
    msg.setTimeStamp(0.6841907567075624);
    msg.setSource(38501U);
    msg.setSourceEntity(203U);
    msg.setDestination(11571U);
    msg.setDestinationEntity(127U);
    msg.seq = 25433U;
    msg.value = 37U;
    msg.error.assign("GAUJZRNGKOOCTQVUURJFNPWIRDDDYYELPFLEGEDMOKXLSLBWUJPRYIUZMHWSIRDXGVTXONOGJGSIJVNLXYANGADSKOAQNEABQJLZCISFAFBCEZHOIFQBDYAYSNPFMPYVMJCMYPCXNRWLCDHZIOQQLCXTZFZWBMHKVGLCHBWQJ");

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
    msg.setTimeStamp(0.8807341777484202);
    msg.setSource(39229U);
    msg.setSourceEntity(16U);
    msg.setDestination(23284U);
    msg.setDestinationEntity(216U);
    msg.seq = 11978U;
    msg.sys.assign("WKIGFMMAJITWUSVCBZPVYZYNOYDBBUPKFHORVMVXIPTXGDSHGXUPLROWIZLYKXAQRNHETWRJAQTVZUPOYZILYUDECJOFXN");
    msg.value = 0.8493353607842327;

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
    msg.setTimeStamp(0.735315394912925);
    msg.setSource(2531U);
    msg.setSourceEntity(10U);
    msg.setDestination(18046U);
    msg.setDestinationEntity(100U);
    msg.seq = 23454U;
    msg.sys.assign("EBKPVGISETHPRCQFIYMYQGHLZOUWFAQRSUBNHMMGFCS");
    msg.value = 0.5064130691583113;

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
    msg.setTimeStamp(0.99874765908854);
    msg.setSource(12314U);
    msg.setSourceEntity(201U);
    msg.setDestination(3162U);
    msg.setDestinationEntity(53U);
    msg.seq = 16742U;
    msg.sys.assign("VRYKTESAWKCWRJZMWQFQHMPCKGVCVPJHZPIHGIRUIBFMZPAXTORFRFOXTNNTDEKLCSVGEWIEOYJPFZTIDESGFE");
    msg.value = 0.11712034416001049;

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
    msg.setTimeStamp(0.41749316293399585);
    msg.setSource(24913U);
    msg.setSourceEntity(131U);
    msg.setDestination(47168U);
    msg.setDestinationEntity(29U);
    msg.seq = 58148U;
    msg.sys_dst.assign("OWHNMIPGIDYJTLUMFXWQDEQACLBYXXTKQLZOTZHCUUBRYYLX");
    msg.timeout = 0.3126858309379643;

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
    msg.setTimeStamp(0.46741431073583195);
    msg.setSource(61932U);
    msg.setSourceEntity(126U);
    msg.setDestination(51210U);
    msg.setDestinationEntity(150U);
    msg.seq = 6537U;
    msg.sys_dst.assign("APNJCCWCDVJIFXSNFIVUNUJMIPYZPQNKDKHMHRSBCMZWNIPVXOHJVPTJSIEJIUBNBQUTXAERXTLNNHWHVLCLZUVEZSPDKSXPBHWFYODNEKLQGZCTKCEAWWIRCXAFIWFEQQLLZKFWTTGSEKRDFUWYSPIUPZGORABQQBOHGOVQGZOBQUHYTTRYYRDGFHLSBMLDAMCAVYTDLQGGVBOYWKFMOMGREZKHXEDJUTCULOXAGXPZRJOIS");
    msg.timeout = 0.36968889644578207;

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
    msg.setTimeStamp(0.4034120147120046);
    msg.setSource(35349U);
    msg.setSourceEntity(76U);
    msg.setDestination(35750U);
    msg.setDestinationEntity(208U);
    msg.seq = 51896U;
    msg.sys_dst.assign("RGQHXAMSRTQAZEVIHZLHIRGFDWUYNRXHACMYJOPTHRBGNSNXCODYUKPNAFWZNSQVNOTSWSUDFGDQUNGIIVBOPODDJENADIEKAVRSXHVIFCPAOIGHWPJYLTEVCWZBRHKKMMQLRVIMYIRPXUUJMMQHEUDFXHJKOBVJSFXKWMDJUBMLDISEWESZTTRYEBTUCQXCLBCCKYZO");
    msg.timeout = 0.38490746751345617;

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
    msg.setTimeStamp(0.43510531257163354);
    msg.setSource(64737U);
    msg.setSourceEntity(138U);
    msg.setDestination(26937U);
    msg.setDestinationEntity(206U);
    msg.action = 204U;
    msg.longain = 0.8462353208980093;
    msg.latgain = 0.9481783340321139;
    msg.bondthick = 3608488691U;
    msg.leadgain = 0.2466097040904781;
    msg.deconflgain = 0.1914810999490657;

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
    msg.setTimeStamp(0.7240842814492507);
    msg.setSource(24718U);
    msg.setSourceEntity(21U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(206U);
    msg.action = 113U;
    msg.longain = 0.3528751446736579;
    msg.latgain = 0.1170701338074761;
    msg.bondthick = 3270502207U;
    msg.leadgain = 0.5369245560491607;
    msg.deconflgain = 0.8200804027710569;

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
    msg.setTimeStamp(0.9012718443198529);
    msg.setSource(54169U);
    msg.setSourceEntity(197U);
    msg.setDestination(51482U);
    msg.setDestinationEntity(253U);
    msg.action = 102U;
    msg.longain = 0.6990046237574717;
    msg.latgain = 0.8569848093871972;
    msg.bondthick = 824366932U;
    msg.leadgain = 0.6630656676624492;
    msg.deconflgain = 0.42853997662632803;

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
    msg.setTimeStamp(0.847219121870606);
    msg.setSource(58517U);
    msg.setSourceEntity(133U);
    msg.setDestination(20276U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.3323963551713026;
    msg.dist_min_abs = 0.5269541397241155;
    msg.dist_min_mean = 0.20352358707411677;

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
    msg.setTimeStamp(0.4509117587165484);
    msg.setSource(11887U);
    msg.setSourceEntity(168U);
    msg.setDestination(54321U);
    msg.setDestinationEntity(26U);
    msg.err_mean = 0.2309015733315909;
    msg.dist_min_abs = 0.7218300546003819;
    msg.dist_min_mean = 0.9560547533085559;

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
    msg.setTimeStamp(0.056895831337566816);
    msg.setSource(8155U);
    msg.setSourceEntity(50U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(223U);
    msg.err_mean = 0.7220490795291672;
    msg.dist_min_abs = 0.9110036486973557;
    msg.dist_min_mean = 0.6465193282950173;

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
    msg.setTimeStamp(0.012610214876908943);
    msg.setSource(20383U);
    msg.setSourceEntity(204U);
    msg.setDestination(35634U);
    msg.setDestinationEntity(21U);
    msg.action = 233U;
    msg.lon_gain = 0.0034149486523573636;
    msg.lat_gain = 0.05198207574988456;
    msg.bond_thick = 0.6228270997743082;
    msg.lead_gain = 0.05094850775543658;
    msg.deconfl_gain = 0.3407001511088066;
    msg.accel_switch_gain = 0.691559602504196;
    msg.safe_dist = 0.2988643175438711;
    msg.deconflict_offset = 0.7526100053736317;
    msg.accel_safe_margin = 0.6959181151750766;
    msg.accel_lim_x = 0.4650425251202639;

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
    msg.setTimeStamp(0.26348935355601266);
    msg.setSource(11854U);
    msg.setSourceEntity(217U);
    msg.setDestination(43409U);
    msg.setDestinationEntity(172U);
    msg.action = 36U;
    msg.lon_gain = 0.5228171162204861;
    msg.lat_gain = 0.2691113091595374;
    msg.bond_thick = 0.8213016001526797;
    msg.lead_gain = 0.032583556472588815;
    msg.deconfl_gain = 0.3953582591219449;
    msg.accel_switch_gain = 0.5744995572349219;
    msg.safe_dist = 0.7878440751012373;
    msg.deconflict_offset = 0.8304793101130294;
    msg.accel_safe_margin = 0.6449133221685215;
    msg.accel_lim_x = 0.3873459235873865;

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
    msg.setTimeStamp(0.8304315577718828);
    msg.setSource(16165U);
    msg.setSourceEntity(44U);
    msg.setDestination(39394U);
    msg.setDestinationEntity(195U);
    msg.action = 251U;
    msg.lon_gain = 0.990340023579941;
    msg.lat_gain = 0.5488090523771333;
    msg.bond_thick = 0.5406666551676454;
    msg.lead_gain = 0.9331331540364296;
    msg.deconfl_gain = 0.37651919309129;
    msg.accel_switch_gain = 0.9552038903265646;
    msg.safe_dist = 0.9268475114985661;
    msg.deconflict_offset = 0.29468933295749156;
    msg.accel_safe_margin = 0.6390273567166028;
    msg.accel_lim_x = 0.39123931933242106;

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
    msg.setTimeStamp(0.7396788509164344);
    msg.setSource(43283U);
    msg.setSourceEntity(73U);
    msg.setDestination(2112U);
    msg.setDestinationEntity(9U);
    msg.type = 40U;
    msg.op = 121U;
    msg.err_mean = 0.575529325801662;
    msg.dist_min_abs = 0.12946720865450712;
    msg.dist_min_mean = 0.20925249585231442;
    msg.roll_rate_mean = 0.7134196664028979;
    msg.time = 0.4936865271671299;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 29U;
    tmp_msg_0.lon_gain = 0.17171301676047002;
    tmp_msg_0.lat_gain = 0.08974712189642997;
    tmp_msg_0.bond_thick = 0.7280190958258048;
    tmp_msg_0.lead_gain = 0.6006515500260625;
    tmp_msg_0.deconfl_gain = 0.3534001194689519;
    tmp_msg_0.accel_switch_gain = 0.6357825551194689;
    tmp_msg_0.safe_dist = 0.3517401286935675;
    tmp_msg_0.deconflict_offset = 0.6357840558757273;
    tmp_msg_0.accel_safe_margin = 0.8358970292288554;
    tmp_msg_0.accel_lim_x = 0.43706629932136953;
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
    msg.setTimeStamp(0.43012832332485496);
    msg.setSource(14851U);
    msg.setSourceEntity(62U);
    msg.setDestination(13850U);
    msg.setDestinationEntity(229U);
    msg.type = 14U;
    msg.op = 201U;
    msg.err_mean = 0.6985253168113287;
    msg.dist_min_abs = 0.5186366856293085;
    msg.dist_min_mean = 0.4718041893084508;
    msg.roll_rate_mean = 0.21784120958545405;
    msg.time = 0.07174232992786056;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 166U;
    tmp_msg_0.lon_gain = 0.014120048616544922;
    tmp_msg_0.lat_gain = 0.9508388323746549;
    tmp_msg_0.bond_thick = 0.17134717726746518;
    tmp_msg_0.lead_gain = 0.15823006177499332;
    tmp_msg_0.deconfl_gain = 0.4876945106342301;
    tmp_msg_0.accel_switch_gain = 0.0968105451128507;
    tmp_msg_0.safe_dist = 0.39415958205236223;
    tmp_msg_0.deconflict_offset = 0.533682822224298;
    tmp_msg_0.accel_safe_margin = 0.2738383030053271;
    tmp_msg_0.accel_lim_x = 0.4377097459457754;
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
    msg.setTimeStamp(0.08176639228694593);
    msg.setSource(14947U);
    msg.setSourceEntity(101U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(80U);
    msg.type = 96U;
    msg.op = 108U;
    msg.err_mean = 0.5960414445919199;
    msg.dist_min_abs = 0.24850410692427716;
    msg.dist_min_mean = 0.6241693856347974;
    msg.roll_rate_mean = 0.9193955171383561;
    msg.time = 0.3639632340508492;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 38U;
    tmp_msg_0.lon_gain = 0.8542659169448293;
    tmp_msg_0.lat_gain = 0.05711910274433796;
    tmp_msg_0.bond_thick = 0.9068055081451493;
    tmp_msg_0.lead_gain = 0.41403941252594856;
    tmp_msg_0.deconfl_gain = 0.8027371824511674;
    tmp_msg_0.accel_switch_gain = 0.008321899563032975;
    tmp_msg_0.safe_dist = 0.6975555804555423;
    tmp_msg_0.deconflict_offset = 0.749820900949641;
    tmp_msg_0.accel_safe_margin = 0.34270501705799616;
    tmp_msg_0.accel_lim_x = 0.3207477910020582;
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
    msg.setTimeStamp(0.7275705023819817);
    msg.setSource(35702U);
    msg.setSourceEntity(49U);
    msg.setDestination(2535U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.3421746204108306;
    msg.lon = 0.7406889639951254;
    msg.eta = 1852184330U;
    msg.duration = 49770U;

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
    msg.setTimeStamp(0.23323959397870342);
    msg.setSource(64584U);
    msg.setSourceEntity(144U);
    msg.setDestination(54873U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.1438867691773752;
    msg.lon = 0.13680066433721239;
    msg.eta = 2750751015U;
    msg.duration = 2625U;

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
    msg.setTimeStamp(0.6969288335877755);
    msg.setSource(64160U);
    msg.setSourceEntity(204U);
    msg.setDestination(11569U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.03457572889053262;
    msg.lon = 0.7426245606066901;
    msg.eta = 2484282519U;
    msg.duration = 53444U;

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
    msg.setTimeStamp(0.543739445651873);
    msg.setSource(65110U);
    msg.setSourceEntity(31U);
    msg.setDestination(4528U);
    msg.setDestinationEntity(19U);
    msg.plan_id = 20289U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7111664608911288;
    tmp_msg_0.lon = 0.8205363069060522;
    tmp_msg_0.eta = 3543702596U;
    tmp_msg_0.duration = 45303U;
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
    msg.setTimeStamp(0.7895264484891277);
    msg.setSource(14957U);
    msg.setSourceEntity(246U);
    msg.setDestination(5123U);
    msg.setDestinationEntity(67U);
    msg.plan_id = 25239U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8904743498347472;
    tmp_msg_0.lon = 0.009779870961866055;
    tmp_msg_0.eta = 2543363826U;
    tmp_msg_0.duration = 56046U;
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
    msg.setTimeStamp(0.903390241004659);
    msg.setSource(563U);
    msg.setSourceEntity(18U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(35U);
    msg.plan_id = 22776U;

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
    msg.setTimeStamp(0.6025917893863941);
    msg.setSource(28132U);
    msg.setSourceEntity(106U);
    msg.setDestination(3332U);
    msg.setDestinationEntity(101U);
    msg.type = 162U;
    msg.command = 116U;
    msg.settings.assign("KYZESSHYIBMZVXMKMGWTRMEDTZEAFETFBAPBFOUANGXOHKFBQNJGRDSAZPGSRAVLXLXLODOFEGITPEOZQQKHOSXOTOIXNJVGSRNRGJLWRKHWRXIUWACNCCZQJN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 29699U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4294413017122525;
    tmp_tmp_msg_0_0.lon = 0.5355388843554532;
    tmp_tmp_msg_0_0.eta = 1126698650U;
    tmp_tmp_msg_0_0.duration = 4284U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LVORSHLODHKANZCSSBOGILDODURXABOPCUTHIXJDMDQHTATNXFSAPEXWNNRACDYQXLWCDFRBLGETZYJEH");

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
    msg.setTimeStamp(0.8906068678945419);
    msg.setSource(23320U);
    msg.setSourceEntity(110U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(231U);
    msg.type = 250U;
    msg.command = 18U;
    msg.settings.assign("WBMCTDSWLJKMIZNDZHTPNMMIDGQZRSPHQHCPWWEHALCAJZCEIWWMRUIHZNVTRNOFDWVAPRTSPXTBQJVSIPZXRKYXXCWYNKKTETXKPBBKJGYDSVGRMEVUYVMXVCFOPAMFCSPJGSLZHNHLRR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 650U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8322797550358852;
    tmp_tmp_msg_0_0.lon = 0.6036923972664147;
    tmp_tmp_msg_0_0.eta = 1140778030U;
    tmp_tmp_msg_0_0.duration = 63912U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ANOXXVPPWBDFOCEQXAQEWJIFIMMFLALTECTHPKLVFVDWQEXYBUGPHSEGMRWDYCTSJROGWIHPRZXOBRLSUIMBFTCFMVJINNKDHXPXZEOOJECCCYQSICOVQUARZLBSLAZXVSBUDDZRFKWPEMWBPRKZCFXHHQLKZNGJDIAKDSJRNAVTUSUJZQTXUPVHPRWUIENNOGYSKOTUCGZDMKMWZQLYYJYOJUTGFIVSGYHYJAWTLMEHMGNKNNV");

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
    msg.setTimeStamp(0.3603005773419269);
    msg.setSource(28169U);
    msg.setSourceEntity(11U);
    msg.setDestination(5289U);
    msg.setDestinationEntity(97U);
    msg.type = 86U;
    msg.command = 8U;
    msg.settings.assign("TZHXJGVLKSSMJDAEFTRBODQYCZELIPFYGAGYQMEXFKSYVOSHBXIEOBUSNSVACUMPRPPLZIDFVPPOPIQVNQZXXJKZRMGWGBZLMTASUTXNAQIKXHSJLVKPKGIVWZDYUKLNUBBWQOYBMQHQAWGVY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17311U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5913719127374177;
    tmp_tmp_msg_0_0.lon = 0.02206818463161342;
    tmp_tmp_msg_0_0.eta = 3045928612U;
    tmp_tmp_msg_0_0.duration = 55515U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BNWFXKKWFXQTHPLIWWGPQUIVQLCTCKHJGHJFBBSCTKXSEMAVFONGJERYBBEXWEGZOPXHAVOJPTLUUJWKAYYMSEIHSJZAGBDYAKFPTXTIFPOYXMDRGQLQDOYNIUHCAAJULVGODAQAJQLDTZWPEWKDLCBCJTULVJMRNYGDHLNVMMICLDZQMVUXRAOTRPZRHKDOYHGMQCSBBKYMPIFRWTSXNYSOEQEIRXDNUZEIWSKVBVUZECVMNZSPFNHZRFZGUI");

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
    msg.setTimeStamp(0.7187574391314042);
    msg.setSource(45299U);
    msg.setSourceEntity(250U);
    msg.setDestination(16343U);
    msg.setDestinationEntity(128U);
    msg.state = 120U;
    msg.plan_id = 35722U;
    msg.wpt_id = 230U;
    msg.settings_chk = 47693U;

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
    msg.setTimeStamp(0.3425568298040256);
    msg.setSource(16360U);
    msg.setSourceEntity(9U);
    msg.setDestination(14743U);
    msg.setDestinationEntity(57U);
    msg.state = 163U;
    msg.plan_id = 45694U;
    msg.wpt_id = 245U;
    msg.settings_chk = 2907U;

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
    msg.setTimeStamp(0.1726543358668885);
    msg.setSource(42772U);
    msg.setSourceEntity(241U);
    msg.setDestination(40315U);
    msg.setDestinationEntity(79U);
    msg.state = 30U;
    msg.plan_id = 28134U;
    msg.wpt_id = 16U;
    msg.settings_chk = 40120U;

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
    msg.setTimeStamp(0.17033515755875772);
    msg.setSource(15550U);
    msg.setSourceEntity(177U);
    msg.setDestination(24352U);
    msg.setDestinationEntity(71U);
    msg.uid = 252U;
    msg.frag_number = 8U;
    msg.num_frags = 18U;
    const signed char tmp_msg_0[] = {-63, -35, 24, -104, 76, -111, -75, 47, -24, -26, 76, -36, -52, -36, 63, 81, -101, 48, 21, 96, 8, -98, -41, 20, 92, -80, 19, 79, -102, 114, -25, -41, 0, -48, -28, -95, -50, 126, -100, 14, 7, -7};
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
    msg.setTimeStamp(0.2793521804826731);
    msg.setSource(15594U);
    msg.setSourceEntity(177U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(95U);
    msg.uid = 128U;
    msg.frag_number = 210U;
    msg.num_frags = 226U;
    const signed char tmp_msg_0[] = {21, 33, 39, -36, 65, 14, 91, -117, -115, -114, -82, 76, -103, -60, 50, -89, -56, 16, -66, -111, -41, 121, -24, 52, -27, -74, -78, 40, -32, 60, 6, -26, 117, -13, -28, -52, 18, 65, 99, 97, 76, -44, 115, 64, -57, 59, 71, 57, -72, -48, -14, 10, 58, 20, -72, -5, 37, 2, -42, -82, -114, -117, -124, -115, 92, 110, -83, -93, -117, -88, 92, -25, 33, -10, 28, -37, -93, -16, -93, 41, -125, -8, 30, -25, -113, 124, 121, 124, -101, -62, -92, -18, -81, -5, -38, -17, 18, 1, -38, 94, 28, 85, -4, 83, -21, -22, 73, -87, -58, -73, 125, -58, -67, -117, 65, -108, -76, 20, -16, 53, 87, -85, 12, -66, -15, -34, 113, -7, -125, 69, 8, -67, -81, -74, 62, 73, 22, 85, -118, 53, -115, 78, -4, -33, -14, -2, -72, -9, 74, -39, -86, 77, -112, 11, -77, -113, -29, 16, -48, -70, 101, -86, -104, -72, -127, -94, 84, -29, 126, 81, 119, -4, 24, -85, 44, 79, -37, -78, -28, -39, -49, 66};
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
    msg.setTimeStamp(0.5134121291886371);
    msg.setSource(44550U);
    msg.setSourceEntity(0U);
    msg.setDestination(43141U);
    msg.setDestinationEntity(158U);
    msg.uid = 9U;
    msg.frag_number = 231U;
    msg.num_frags = 93U;
    const signed char tmp_msg_0[] = {17, -54, 28, 89, -29, 59, -78, 13, 101, -82, -50, 39, 41, 12, -1, -10, -15, 111, -75, -113, 88, 110, -109, 75, 37, -81, -117, -8, 69, -26, 92, -8, -15, -105, 75, -70, -61, -2, -17, 122, 98, 41, -94, -67, 40, 45, 14, -20, 75, 30, -53, 27, -5, 18, 112, 0, -40, 3, -63, -54, 62, -13, -58, 28, -15, -12, -65, -2, -13, 124, -26, -96, 117, -4, -93, -51, 77, 74, -128, -20, -102, 26, -126, 23, -117, 74, -118, -27, 33, -121, -117, 97, -12, 59, 47, 52, -5, -89, -10, 68, 116, -99, -80, 69, -96, -60, -56, -107, -117, 82, -51, -75, 9, 104, 29, -6, -18, -84, -92, 0, -108, -47, -50, -84, -91, 111, -50, 42, 7, 57, -125, -54, 110, 75, 109, -89, -98, 21, -111, 53, -94, -63, -93, 23, 24, -16, -102, -66, -87, 0, -66, -73, 59, -31, 124, -74, -56, 30, 46, 1, -128, 49, 118, 94, 19, 69, 43, 2, 45, 76, -39, 60, -30, -51};
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
    msg.setTimeStamp(0.032216172022556666);
    msg.setSource(27206U);
    msg.setSourceEntity(194U);
    msg.setDestination(2750U);
    msg.setDestinationEntity(47U);
    msg.uid = 237U;
    msg.op = 211U;
    msg.frag_ids.assign("CCKEQRRLEIVKNTVPCNGNROMXASOEZEMZTY");

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
    msg.setTimeStamp(0.1632661881944497);
    msg.setSource(46621U);
    msg.setSourceEntity(141U);
    msg.setDestination(59414U);
    msg.setDestinationEntity(130U);
    msg.uid = 194U;
    msg.op = 210U;
    msg.frag_ids.assign("DJNOYIPCZAMIKOBCOTLYNESVIDGLNEYTMHMZNBPRLXBDUSMFEQDZAVRWAQRSWHXDTAAYZZTWMXAUOKUSGUXPMSUFVTJJPBAQKNRJKYIEKGFACBOVPGPMYZDVSDQCNBTHKCCGJFLQPGFMWDK");

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
    msg.setTimeStamp(0.3017796688655827);
    msg.setSource(62521U);
    msg.setSourceEntity(50U);
    msg.setDestination(20960U);
    msg.setDestinationEntity(110U);
    msg.uid = 19U;
    msg.op = 182U;
    msg.frag_ids.assign("QNSBVYQQRJAEAMQZJRKYRYQQFKLSENFKSJAWBAPLAJMZZFEQHNUIATBEVWNOCKVJXZIFTYOYLVFWOZYCXUTINXMEJ");

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
    msg.setTimeStamp(0.4042671472289511);
    msg.setSource(44770U);
    msg.setSourceEntity(250U);
    msg.setDestination(59957U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("UQQZMPGRKCGOAONCNCTEBWGTSJXUKRFVHBVDHLOYMCUBBFINRXUKZIVGMFLILSUJOTEHVARQGKNXZINQNKEZREXETACHBXFHRDNUBGPYAWAESZJBIYHVJUGYHDWPOODWYKUOYMNFLXSSVDEZPSSMBDATAKFHEKPGIPRMJHJQVWIKPWMDZCJZLMQXFNXCTFQDRJLAUJVOUTCQSCLPRIWFEWHWLBYTXFVYTZXONWYTPOEAKSLDZIVSMBQJQL");
    const signed char tmp_msg_0[] = {19, 23, -75, 115, 124, 24, -20, -33, -109, 95, -69, -4, 58, 66, -67, 21, 77, -13, -83, -121, 121, 2, 31, -27, 97, -44, -124, -62, 93, 93, -27, -128, -34, -3, -53, 74, -16, 49, 21, -3, -121, 56, 0, 83, -6, 91, -98, 74, -3, -34, 75, -97, 25, 107, -119, -32, -99, -22, -102, 39, 125, 1, 63, -41, 28, 87, -68, -115, 70, 103, -54, -63, 99, -34, 92, -16, -120, 48, 63, -87, -121, -114, -100, -10, -45, 15, 125, 19, 51, 22, -31, -123, 119, 100, -117, -58, 87, 64, 30, 48, 91, 126, -16, -92, 3, -24, -84, -103, -47, 88, 100, 16, -61, 17, 78, 108, -9, -4, 109, -60, 7, -118, 32, -4, 108, 116, 84, 102, 117, 104, 18, -22, -118, -110, 86, -71, 30, -121, -17, -101, 10, -112, 44, -54, 112, -35, -11, -21, -25, 52, 42, -45, -98, -123, 81, -67, 122, -102, 92, -43, -62, -82, 51, -68, -15, -108, 32, 120, 14, 11, -107, 16, -102, 120, 64, 89, 31, -115, -114, 43, -40, -125, 111, -123, -90, 40, -18, 5, 51, 65, -64, -63, -59, 16, -52, 122, -97, -80, 9, 96, -51, -18, -113, -102, -91, 32, -102, 110, 0, -85, -72, -19, 89, 44, -62, -99, -58};
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
    msg.setTimeStamp(0.2737177110890624);
    msg.setSource(51213U);
    msg.setSourceEntity(11U);
    msg.setDestination(53485U);
    msg.setDestinationEntity(223U);
    msg.content_type.assign("OEQWAGRFPAVBYECYJKDTHXZGCWYEMBVLWAOTCFSQBCCSADTTBPCFWTVUYNXKVIIQQBZQMGLISRYSPUMFBGLMDGAIFKESHFZDAQZKYIHOGHLVTBXTKJSDXQMRTZONNJEJNZOESSFHVUHZKEPXXQBLMDZHFNKALIJCANOHPGQRKUGCEPNFTARUVGOMELKKEYLIJN");
    const signed char tmp_msg_0[] = {99, -123, 21, -45, -63, -72, -117, 19, -21, 39, -16, -120, -61, -52, -94, -84, -84, -69, -59, -121, -111, 47, -80, 26, -108, -32, 123, 61, -77, -115, 68, -46, 7, -79, -99, 62, 0, 1, -63, 36, 77, -7, -17, -25, -20, 56, 101, -123, 55, -92, 43, -17, 75, 89, 104, -103, -93, 53, 17, -41, -51, -120, -10, -49, 113, 27, 99, -43, 46, -115, 36, -69, 10, -126, -75, 32, -86, 91, 45, -109, 90, 50, 22, 63, -116, 72, 23, 85, -6, -105, 54, -90, 45, -123, -4, -29, 97, -124, 31, -114, -29, -51, 90, -82, -104, 22, -15, 51, 62, -74, -80, -128, -65, -74, 36, 66, -114, 31, -86, 96, 34, 116, -54, 13, 16, -59, 19, -97, 77, -119, 52, -60, 77, 54, -9, -7, 104, -98, 63, -61, -71, 92, 42, -124, 32, -98, 117, 34, -113, -41, 82, 76, 2, 2, -7, 4, 71, 40, 99, 56, 90, 13, 104, 124, 102, -53, 74, 22, 53, -67, -27, -126, -110, 98, -66, 86, 123, -16, -96, -48, -16, -123, -103};
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
    msg.setTimeStamp(0.08056253370694222);
    msg.setSource(59519U);
    msg.setSourceEntity(118U);
    msg.setDestination(62465U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("JRYLXENUSJLHSPPLDZMQCMKZRPSZA");
    const signed char tmp_msg_0[] = {-41, -99, -40, -112, -34, 46, -97, -16, -11, -114, -30, 0, -108, 4, -110, -45, 116, -45, -35, -23, 68, -11, -87, -109, -101, 61, -48, -114, 117, 113, -65, 15, -3, -74, 106, 3, 15, 45, -100, -87, -33, -73, -44, -87, -20, 53, -50, -90, -73, -24, -108, 88, 2, 51, 63, 102, -68, -35, -109, 85, 6, 2, 40, -62, 4, -4, -78, 83, -83, 89};
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
    msg.setTimeStamp(0.8085485079854109);
    msg.setSource(64591U);
    msg.setSourceEntity(116U);
    msg.setDestination(41264U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.17528782105548935);
    msg.setSource(34837U);
    msg.setSourceEntity(198U);
    msg.setDestination(34259U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.12181317118315216);
    msg.setSource(37901U);
    msg.setSourceEntity(206U);
    msg.setDestination(32377U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.4352160520155982);
    msg.setSource(27342U);
    msg.setSourceEntity(180U);
    msg.setDestination(14019U);
    msg.setDestinationEntity(164U);
    msg.target = 985U;
    msg.bearing = 0.9751757892202626;
    msg.elevation = 0.7208478230359538;

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
    msg.setTimeStamp(0.23948440322472542);
    msg.setSource(64849U);
    msg.setSourceEntity(96U);
    msg.setDestination(29111U);
    msg.setDestinationEntity(191U);
    msg.target = 17684U;
    msg.bearing = 0.40525066819439637;
    msg.elevation = 0.9545478766252947;

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
    msg.setTimeStamp(0.6722914989594269);
    msg.setSource(56339U);
    msg.setSourceEntity(229U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(146U);
    msg.target = 960U;
    msg.bearing = 0.46359702803563607;
    msg.elevation = 0.9614018131863155;

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
    msg.setTimeStamp(0.4596671182180492);
    msg.setSource(44362U);
    msg.setSourceEntity(144U);
    msg.setDestination(14093U);
    msg.setDestinationEntity(187U);
    msg.target = 56874U;
    msg.x = 0.34929685692283574;
    msg.y = 0.4936004500214416;
    msg.z = 0.6628973096488741;

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
    msg.setTimeStamp(0.8332722939065663);
    msg.setSource(48655U);
    msg.setSourceEntity(52U);
    msg.setDestination(8129U);
    msg.setDestinationEntity(15U);
    msg.target = 18873U;
    msg.x = 0.6024272454583213;
    msg.y = 0.3823237111321205;
    msg.z = 0.35600853373107266;

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
    msg.setTimeStamp(0.0389529954108192);
    msg.setSource(17103U);
    msg.setSourceEntity(43U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(200U);
    msg.target = 14656U;
    msg.x = 0.7115540446950532;
    msg.y = 0.1247773622451459;
    msg.z = 0.23888659315486882;

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
    msg.setTimeStamp(0.8001640378750332);
    msg.setSource(55632U);
    msg.setSourceEntity(80U);
    msg.setDestination(29771U);
    msg.setDestinationEntity(89U);
    msg.target = 17317U;
    msg.lat = 0.5708399386696341;
    msg.lon = 0.6866543339011583;
    msg.z_units = 115U;
    msg.z = 0.7575939580394222;

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
    msg.setTimeStamp(0.7565595138601348);
    msg.setSource(57052U);
    msg.setSourceEntity(31U);
    msg.setDestination(13878U);
    msg.setDestinationEntity(110U);
    msg.target = 56661U;
    msg.lat = 0.8156711434586598;
    msg.lon = 0.7927813961500013;
    msg.z_units = 32U;
    msg.z = 0.5972605764203158;

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
    msg.setTimeStamp(0.9874674688950598);
    msg.setSource(47427U);
    msg.setSourceEntity(188U);
    msg.setDestination(12689U);
    msg.setDestinationEntity(143U);
    msg.target = 48324U;
    msg.lat = 0.31015880511070615;
    msg.lon = 0.4892520265972189;
    msg.z_units = 69U;
    msg.z = 0.5760567559364912;

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
    msg.setTimeStamp(0.36749001895818567);
    msg.setSource(6361U);
    msg.setSourceEntity(136U);
    msg.setDestination(19192U);
    msg.setDestinationEntity(235U);
    msg.locale.assign("GECVKYNTMXSZFPFFOLHCETXUOPWMGZRGKTMQHZPUNQUSHI");
    const signed char tmp_msg_0[] = {-125, -60, 109, -115, 78, -52, -58, -106, 108, 87, -29, -117, 47, 2, 55, -81, 54, 126, -112, -51, -67, -86, -1, -123, 82, 66, 78, 93, -99, -7, 88, -102, -85, 60, -51, 23, 31, -93, 79, 42, -103, 49, 99, -78};
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
    msg.setTimeStamp(0.5236545222739712);
    msg.setSource(48528U);
    msg.setSourceEntity(232U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(226U);
    msg.locale.assign("YVOZCFMQXDWVPXDCTBYPPUJEXWQRJNIRFQJPCYGUQNEEBGSQRACWNNRPEYCQOMKTVISPTCTMEXDOFUIGDAKVVRCOQBJOCLPMXYLSXINZLDOKAZYBPBLHSMIATVKTYTNNZBFHHGUNZKLVCKM");
    const signed char tmp_msg_0[] = {-86, -97, -66, -79, -1, -55, 0, -47, -120, 31, -49, -5, 71, -128, 52, -93, -89, -66, -32, -14, 101, 13, 122, -57, 93, -46, 32, -100, 121, -7, -126, 85, -4, 81, 89, 45, 117, -128, 27, 9, -40, 41, -35, -1, 51, -54, 80, -55, -110, 44, -49, 63, 44, -74, 106, -122, -50, 14, 115, 20, -93, -82, 66, 14, 116, 72, 20, 41, -100, -39, 31, 18, 60, -8, 77, 19, 90, 9, 63, -35, -91, 67, 8, 60, -84, -30, -84, 10, 112, -75, -56, -94, -115, 109, 34, 39, 84, 124, -26, -94, -110, 98, -53, 41, 22, 94, 13, 117, -46, -66, 17, -93, -34, 81, -36, -105, 84, 31, 55, 57, 87, -85, -29, 108, 15, -83, -49, 58, 79, 66, 52, 55, 102, 56, 100, 47, -83, -125, -62, 92, -56, 96, 107, 104, -12, 64, 44, -72, -28, -118, -122, -61, -18, -89, 79};
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
    msg.setTimeStamp(0.67545937101558);
    msg.setSource(22555U);
    msg.setSourceEntity(119U);
    msg.setDestination(62468U);
    msg.setDestinationEntity(103U);
    msg.locale.assign("ZGUFVHPIXAIIUJZRNVOKTJFYBAMEUFMKERODYCKDJRUKLVXNNAEMDVVZHMCHXAUSWYHNECURKWPQAYDRGKHGKQOBIRLBDMLIUXZOSXPNBBBBREQPIWJZCTYGSMIVSYUXOJLQQZIQDBNHKGGUPEKHPHSODQAFTMJCHGQMETZMFBAYVDOESOXVVPYTYGADLJXGJCWJFMUPVLHXCBWL");
    const signed char tmp_msg_0[] = {-87, -14, 6, -68, -88, 83, -63, 106, -116, -66, -1, -106, -101, 84, -80, -112, 78, 41, 104, -23, 96, -79, -14, -47, -31, -92, 36, 54, -101, -106, 52, -112, -12, 57, 74, 96, 50, -119, -62, 5, 10, -99, -100, -23, -75, 8, -86, 117, -126, 49, -13, -4, 121, 41, 19, -40, -83, 19, 91, 97};
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
    msg.setTimeStamp(0.4697090308712325);
    msg.setSource(51131U);
    msg.setSourceEntity(92U);
    msg.setDestination(14957U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.6441967912081377);
    msg.setSource(13160U);
    msg.setSourceEntity(189U);
    msg.setDestination(45094U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.7530602908310422);
    msg.setSource(26274U);
    msg.setSourceEntity(211U);
    msg.setDestination(46188U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.4066234907015692);
    msg.setSource(54490U);
    msg.setSourceEntity(173U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(117U);
    msg.camid = 21U;
    msg.x = 2151U;
    msg.y = 2504U;

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
    msg.setTimeStamp(0.3219242984163381);
    msg.setSource(31092U);
    msg.setSourceEntity(76U);
    msg.setDestination(52561U);
    msg.setDestinationEntity(3U);
    msg.camid = 120U;
    msg.x = 60450U;
    msg.y = 46352U;

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
    msg.setTimeStamp(0.624162557010394);
    msg.setSource(22690U);
    msg.setSourceEntity(164U);
    msg.setDestination(20108U);
    msg.setDestinationEntity(61U);
    msg.camid = 121U;
    msg.x = 13619U;
    msg.y = 59433U;

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
    msg.setTimeStamp(0.37923535729305813);
    msg.setSource(47424U);
    msg.setSourceEntity(200U);
    msg.setDestination(37190U);
    msg.setDestinationEntity(108U);
    msg.camid = 67U;
    msg.x = 199U;
    msg.y = 50060U;

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
    msg.setTimeStamp(0.9879558147661985);
    msg.setSource(53123U);
    msg.setSourceEntity(50U);
    msg.setDestination(63114U);
    msg.setDestinationEntity(20U);
    msg.camid = 94U;
    msg.x = 20308U;
    msg.y = 49625U;

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
    msg.setTimeStamp(0.5459447459406096);
    msg.setSource(62451U);
    msg.setSourceEntity(88U);
    msg.setDestination(47901U);
    msg.setDestinationEntity(150U);
    msg.camid = 229U;
    msg.x = 30788U;
    msg.y = 10068U;

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
    msg.setTimeStamp(0.5598352575003741);
    msg.setSource(48468U);
    msg.setSourceEntity(144U);
    msg.setDestination(41273U);
    msg.setDestinationEntity(23U);
    msg.tracking = 195U;
    msg.lat = 0.05968838309820934;
    msg.lon = 0.25823873709906753;
    msg.x = 0.05914564813501133;
    msg.y = 0.9942832558796197;
    msg.z = 0.7852822335973993;

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
    msg.setTimeStamp(0.9223640922669536);
    msg.setSource(32413U);
    msg.setSourceEntity(208U);
    msg.setDestination(20024U);
    msg.setDestinationEntity(55U);
    msg.tracking = 177U;
    msg.lat = 0.15551335383636744;
    msg.lon = 0.3396479027691003;
    msg.x = 0.7870029110888573;
    msg.y = 0.18482240263090666;
    msg.z = 0.6899264368623572;

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
    msg.setTimeStamp(0.47876925050260144);
    msg.setSource(11154U);
    msg.setSourceEntity(140U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(38U);
    msg.tracking = 94U;
    msg.lat = 0.6647295672203508;
    msg.lon = 0.5930755316637792;
    msg.x = 0.6462162062350529;
    msg.y = 0.5354564608711374;
    msg.z = 0.5167487478739898;

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
    msg.setTimeStamp(0.15220962502017532);
    msg.setSource(43522U);
    msg.setSourceEntity(31U);
    msg.setDestination(3960U);
    msg.setDestinationEntity(89U);
    msg.target.assign("GMVVHRLNHTTOWBSFAZIQIDBMKWBNQJOBKHQYMQXSVPFHSDQJORLLIIRUUEGYOLWJVKHWCVFADYQNZQDCVFNIPXXEELSXBZUVXGWZTDJRIQEZKNVACSRXKWHERAYLSQTXHZFOEGUTMYHPFSYHPYPFLKPXNDENMDOJWCNBKVMS");
    msg.lbearing = 0.21999609136378706;
    msg.lelevation = 0.17822384862868978;
    msg.bearing = 0.5842653575860017;
    msg.elevation = 0.4887098896628542;
    msg.phi = 0.30868025391080656;
    msg.theta = 0.780141545732391;
    msg.psi = 0.09936684643469629;
    msg.accuracy = 0.6993746585883156;

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
    msg.setTimeStamp(0.07295565344425359);
    msg.setSource(31036U);
    msg.setSourceEntity(214U);
    msg.setDestination(11360U);
    msg.setDestinationEntity(245U);
    msg.target.assign("TYUZCLVXISUDGOLGXDPGPDMHMIOIQQLFIIYICNLQVOKCUEYFJTCYUDPHLOJPPXGJENNYKTGABRARVXZNLVMYJSBWGOORRTKAXVLPNVPUWBQFHTLFFVLAVTMAUKXKAWEZFEWOWREFRTPKCITIHJRDCPEMRFYJWKWBXGSQZZCAFWHXSNTSUBGJZZPAG");
    msg.lbearing = 0.299176266710372;
    msg.lelevation = 0.32905123867392894;
    msg.bearing = 0.7812323092052941;
    msg.elevation = 0.12695103585103418;
    msg.phi = 0.41191821755603;
    msg.theta = 0.4806452595982321;
    msg.psi = 0.5113743743887171;
    msg.accuracy = 0.6701769242206574;

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
    msg.setTimeStamp(0.021635815402361924);
    msg.setSource(4721U);
    msg.setSourceEntity(63U);
    msg.setDestination(16528U);
    msg.setDestinationEntity(99U);
    msg.target.assign("MXEDHAAKSHXATZKRWMOHRCVNUDRPKJBVBRPDZYSFGBBVJABCFPFJTBDWREYQFKTXMHGVOEPJLCYGKPCBS");
    msg.lbearing = 0.8812572824116488;
    msg.lelevation = 0.7175771435243486;
    msg.bearing = 0.2228534527660393;
    msg.elevation = 0.8035529915589813;
    msg.phi = 0.731281331982414;
    msg.theta = 0.6534405141104715;
    msg.psi = 0.21658894539866025;
    msg.accuracy = 0.10656617309683714;

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
    msg.setTimeStamp(0.3381615251991691);
    msg.setSource(20522U);
    msg.setSourceEntity(117U);
    msg.setDestination(34143U);
    msg.setDestinationEntity(236U);
    msg.target.assign("KBIJILWUTRYUBZMUEAZFUOTPHLEWDSOVTJIRLUKJVUJMQSYVEDDOGSXNT");
    msg.x = 0.5027925592966229;
    msg.y = 0.7886699668676125;
    msg.z = 0.14089027249321517;
    msg.n = 0.24935508762389513;
    msg.e = 0.19660162010351112;
    msg.d = 0.4632488964678524;
    msg.phi = 0.8659358582959998;
    msg.theta = 0.5329264915880874;
    msg.psi = 0.19244309043338736;
    msg.accuracy = 0.15252277642849077;

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
    msg.setTimeStamp(0.8231749713354201);
    msg.setSource(31678U);
    msg.setSourceEntity(168U);
    msg.setDestination(59508U);
    msg.setDestinationEntity(249U);
    msg.target.assign("VRWLTEQDWEDHWVXKVTRHWJGAVNOAGJFGQUKQXNVHMULKGREBKITJMGBHUEWX");
    msg.x = 0.828761723950044;
    msg.y = 0.7159886608108318;
    msg.z = 0.029328011135788534;
    msg.n = 0.7700723466239282;
    msg.e = 0.062010716119853426;
    msg.d = 0.36964588267973375;
    msg.phi = 0.9381005768108283;
    msg.theta = 0.7132028995513495;
    msg.psi = 0.9416621799915009;
    msg.accuracy = 0.8821830205846533;

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
    msg.setTimeStamp(0.7099413078080689);
    msg.setSource(6892U);
    msg.setSourceEntity(14U);
    msg.setDestination(1625U);
    msg.setDestinationEntity(124U);
    msg.target.assign("GCUCEIWQNOVIVOOUUTYZYFTBPVHJ");
    msg.x = 0.8954180451177939;
    msg.y = 0.19044769343259027;
    msg.z = 0.3348047562538412;
    msg.n = 0.4052007271344493;
    msg.e = 0.9965542805155079;
    msg.d = 0.8886756294074033;
    msg.phi = 0.1270893482662765;
    msg.theta = 0.030023862364413567;
    msg.psi = 0.29916538333597076;
    msg.accuracy = 0.3210710843691972;

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
    msg.setTimeStamp(0.2758426065578351);
    msg.setSource(24172U);
    msg.setSourceEntity(237U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(149U);
    msg.target.assign("LARNBOQWEEDQOTPKLXZTX");
    msg.lat = 0.6193503623369332;
    msg.lon = 0.8297226175712245;
    msg.z_units = 204U;
    msg.z = 0.7257333852562098;
    msg.accuracy = 0.8457624313015134;

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
    msg.setTimeStamp(0.3293075171275771);
    msg.setSource(48612U);
    msg.setSourceEntity(163U);
    msg.setDestination(13499U);
    msg.setDestinationEntity(92U);
    msg.target.assign("IKMSRHINVNRHZGPIATQFFGTPJIANCCHFZYDEZRVOFWQLOQWFPGCHNYKBXKJ");
    msg.lat = 0.1986198839377762;
    msg.lon = 0.6150705609287724;
    msg.z_units = 199U;
    msg.z = 0.4444709596896934;
    msg.accuracy = 0.8014375731069288;

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
    msg.setTimeStamp(0.13440436926356225);
    msg.setSource(26252U);
    msg.setSourceEntity(241U);
    msg.setDestination(11422U);
    msg.setDestinationEntity(78U);
    msg.target.assign("MMKKGLECPAUUUSKBNJORWEZXULIEBMGQDTVJRPTKCFVADNQOYGBDCTZONXT");
    msg.lat = 0.48241639411750503;
    msg.lon = 0.1442901268352852;
    msg.z_units = 167U;
    msg.z = 0.3655103152801378;
    msg.accuracy = 0.30020092963747746;

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
    msg.setTimeStamp(0.24893576784233118);
    msg.setSource(61627U);
    msg.setSourceEntity(52U);
    msg.setDestination(62052U);
    msg.setDestinationEntity(219U);
    msg.name.assign("YHGFKWTAMLNTIIXFCVCDBVYKGWKRSVOJXAGMANMSNWKIGLROLNAPTBXSDWPQEUVDJNKVUHP");
    msg.lat = 0.7775240412141615;
    msg.lon = 0.2988283657099119;
    msg.z = 0.621389098581017;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.553301706276325);
    msg.setSource(31425U);
    msg.setSourceEntity(144U);
    msg.setDestination(14238U);
    msg.setDestinationEntity(158U);
    msg.name.assign("CNIOUGBTNYDHPDMKRMRKPBKGBMWBRXARNAVTZQDPQWCFMGMUVUJXJBFISAUPNLVKDXXJSIIELCEKYEPZSFSJRMRJGSTAOYFBXJBPHQDPJXWCTKKUHFLFQMMDIHXQXYFUWYVLHESKVWOTXESTLIWTXWWCLUEHLHVGOCZQKCHVEZPOEDIGHMMSGJPGOAAZYNWAUNCJGUVYBJSEACRTNNVFOAVOSIQOAHRNYZ");
    msg.lat = 0.8010126919388915;
    msg.lon = 0.7426227444818098;
    msg.z = 0.4522740723113877;
    msg.z_units = 136U;

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
    msg.setTimeStamp(0.29086059725923974);
    msg.setSource(33349U);
    msg.setSourceEntity(60U);
    msg.setDestination(56720U);
    msg.setDestinationEntity(109U);
    msg.name.assign("OOLHPSUQYCRFCGDKQRTSFWHIDIQVWSOGDQBOHNGMXFHKBYJEURLOQFLPLXKSCBORDZSKTPPXGCRBR");
    msg.lat = 0.6258281552190643;
    msg.lon = 0.7768076223609304;
    msg.z = 0.7717606348722367;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.18061341410252818);
    msg.setSource(16895U);
    msg.setSourceEntity(244U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(219U);
    msg.op = 68U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RVKOENHGIHISASXFTKRUBONZEHJMBGZYZLSJBGHDZIBAQXCMQINTFOCYMRKHWDTPLAJYYUZTTDIPALXFJUXOD");
    tmp_msg_0.lat = 0.3796475697267284;
    tmp_msg_0.lon = 0.054460562526115086;
    tmp_msg_0.z = 0.4261099746358803;
    tmp_msg_0.z_units = 252U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.24182505674243449);
    msg.setSource(23856U);
    msg.setSourceEntity(176U);
    msg.setDestination(36810U);
    msg.setDestinationEntity(149U);
    msg.op = 216U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GVBZGCSFPRHYZBRBMJYOOZKLYKADDIIRXPYNNDXGMHBQSVIOEKSEZEQIIZSPLBTHNFEJMLFQULBMAWHZECKSCGCVKYDXKWTHPZUGJLRFPHFFULQFAXYPBMCUOKEKGVGPT");
    tmp_msg_0.lat = 0.4771053847276293;
    tmp_msg_0.lon = 0.5251501519231765;
    tmp_msg_0.z = 0.44782174939826813;
    tmp_msg_0.z_units = 177U;
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
    msg.setTimeStamp(0.42490315788379385);
    msg.setSource(10597U);
    msg.setSourceEntity(207U);
    msg.setDestination(60855U);
    msg.setDestinationEntity(47U);
    msg.op = 97U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WCUXMJUFJUDTBRKUHIZVYBJTQTIHQCECWOFCZWMKBMRHENGFSHXPXQCMDKWIMVEHDNPAYBSHUDLIKBWLRYQNQGBFDXXTKASUCPTEKPXPVAKWEYEOJOZWRRPPIPOBEAJOQSATYHILMELNMOTDNQYQIZLVU");
    tmp_msg_0.lat = 0.9032642506716375;
    tmp_msg_0.lon = 0.9142978835857377;
    tmp_msg_0.z = 0.40664679849700436;
    tmp_msg_0.z_units = 248U;
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
    msg.setTimeStamp(0.36464400754438164);
    msg.setSource(53957U);
    msg.setSourceEntity(213U);
    msg.setDestination(45958U);
    msg.setDestinationEntity(49U);
    msg.value = 0.4693515940365638;
    msg.type = 179U;

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
    msg.setTimeStamp(0.1931930356568392);
    msg.setSource(43115U);
    msg.setSourceEntity(76U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8142787939369468;
    msg.type = 35U;

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
    msg.setTimeStamp(0.5533763152307912);
    msg.setSource(592U);
    msg.setSourceEntity(229U);
    msg.setDestination(11518U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6915663243551318;
    msg.type = 92U;

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
    msg.setTimeStamp(0.8366122237523052);
    msg.setSource(40418U);
    msg.setSourceEntity(148U);
    msg.setDestination(11333U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6624718396729882;

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
    msg.setTimeStamp(0.8545144136730002);
    msg.setSource(47100U);
    msg.setSourceEntity(127U);
    msg.setDestination(45706U);
    msg.setDestinationEntity(218U);
    msg.value = 0.0342633490336407;

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
    msg.setTimeStamp(0.7556440079547891);
    msg.setSource(31941U);
    msg.setSourceEntity(172U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6265685354203131;

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
    msg.setTimeStamp(0.3411071902181596);
    msg.setSource(36703U);
    msg.setSourceEntity(163U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(162U);
    msg.timestamp_last_service = 0.8012280261413601;
    msg.time_next_service = 0.5728335615329015;
    msg.time_motor_next_service = 0.06424542086696428;
    msg.time_idle_ground = 0.6563960923324162;
    msg.time_idle_air = 0.9212822453814721;
    msg.time_idle_water = 0.1327327077912196;
    msg.time_idle_underwater = 0.15501390187509123;
    msg.time_idle_unknown = 0.7814010339182204;
    msg.time_motor_ground = 0.6376881934999777;
    msg.time_motor_air = 0.3837995099849332;
    msg.time_motor_water = 0.6575850491708795;
    msg.time_motor_underwater = 0.7220301084547398;
    msg.time_motor_unknown = 0.9150841811272135;
    msg.rpm_min = -32752;
    msg.rpm_max = 15400;
    msg.depth_max = 0.7542275564986843;

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
    msg.setTimeStamp(0.5260694533593845);
    msg.setSource(34167U);
    msg.setSourceEntity(53U);
    msg.setDestination(13958U);
    msg.setDestinationEntity(72U);
    msg.timestamp_last_service = 0.3636066495982626;
    msg.time_next_service = 0.8584124239767147;
    msg.time_motor_next_service = 0.20409419963492936;
    msg.time_idle_ground = 0.5535636835957995;
    msg.time_idle_air = 0.7194129560342024;
    msg.time_idle_water = 0.918515589233351;
    msg.time_idle_underwater = 0.313868300949642;
    msg.time_idle_unknown = 0.2852624043099292;
    msg.time_motor_ground = 0.14877768094490096;
    msg.time_motor_air = 0.4084595533051779;
    msg.time_motor_water = 0.5708608289050532;
    msg.time_motor_underwater = 0.8557824119062558;
    msg.time_motor_unknown = 0.11475534925904618;
    msg.rpm_min = -3799;
    msg.rpm_max = -20032;
    msg.depth_max = 0.13742642838785135;

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
    msg.setTimeStamp(0.4541355612661494);
    msg.setSource(13778U);
    msg.setSourceEntity(105U);
    msg.setDestination(21807U);
    msg.setDestinationEntity(204U);
    msg.timestamp_last_service = 0.8593960506910345;
    msg.time_next_service = 0.2078518152533615;
    msg.time_motor_next_service = 0.5660141187223076;
    msg.time_idle_ground = 0.21839216390701566;
    msg.time_idle_air = 0.8065053669152392;
    msg.time_idle_water = 0.5527855235433383;
    msg.time_idle_underwater = 0.01419469187305733;
    msg.time_idle_unknown = 0.3050202623628181;
    msg.time_motor_ground = 0.1123102890129285;
    msg.time_motor_air = 0.764507153150688;
    msg.time_motor_water = 0.9215730051974402;
    msg.time_motor_underwater = 0.29015043019636255;
    msg.time_motor_unknown = 0.2987801371852836;
    msg.rpm_min = -11355;
    msg.rpm_max = 9781;
    msg.depth_max = 0.45250511531633764;

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
    msg.setTimeStamp(0.7817705125994723);
    msg.setSource(35154U);
    msg.setSourceEntity(23U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(65U);
    msg.severity = 54U;
    msg.text.assign("EELJZIUNUQDSCVKEAYBTBMPODFNWPAIBQSVRPDUYQJVWGTCLCJNKIHPYFWPPLUXVFJCHTFYHGENYLACYOHUPBRYGVRDLSZXQEBPPMWUAEHUUNUFBFCIVLKCLXREDDRZBVZOKXOO");

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
    msg.setTimeStamp(0.9003073107042021);
    msg.setSource(61762U);
    msg.setSourceEntity(190U);
    msg.setDestination(29469U);
    msg.setDestinationEntity(209U);
    msg.severity = 92U;
    msg.text.assign("WZQNYCEVDMSQTRSHPSHGOTNZBCFRAVKGKONHSNUPNWWJCQDPNUVZGDYHMTNPSQAXIZGDFUAIQIWIMKTLOQCUBOJUSIFAPJHMFRHMZOLCNHNORQBXKBKLHLWUTGHRJNARPKK");

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
    msg.setTimeStamp(0.5211880595908384);
    msg.setSource(42560U);
    msg.setSourceEntity(64U);
    msg.setDestination(10963U);
    msg.setDestinationEntity(126U);
    msg.severity = 73U;
    msg.text.assign("LSKVOGFZRHINMKVTTYBSSONVEOTUPCWOIGYMPPEKAYKDIQSIONKCGJMQMWUMDTVJIWMIVAWGOLHHASFCYYRJFPOUEQYTZBRLMALEGDZPACXJXEMKASLWRCSKXIMBEYXNWQZPMPLOCTJCBCZDKPSBYAGUZVLBZWRHJUXYQDHRTHVZTZIUNAGDBXBLKAEVQVXYDXQFONUCNOWWFHGRVFXIDNNHJEPPKJJHDWESQRXL");

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
    msg.setTimeStamp(0.8701646781019498);
    msg.setSource(1818U);
    msg.setSourceEntity(58U);
    msg.setDestination(63490U);
    msg.setDestinationEntity(131U);
    msg.channel = 90;
    msg.value = 2013180917;
    msg.gain = 83U;

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
    msg.setTimeStamp(0.24397414307856335);
    msg.setSource(16096U);
    msg.setSourceEntity(24U);
    msg.setDestination(58950U);
    msg.setDestinationEntity(189U);
    msg.channel = 118;
    msg.value = -561632785;
    msg.gain = 188U;

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
    msg.setTimeStamp(0.5924209282189622);
    msg.setSource(60040U);
    msg.setSourceEntity(100U);
    msg.setDestination(45066U);
    msg.setDestinationEntity(170U);
    msg.channel = 58;
    msg.value = -653564467;
    msg.gain = 213U;

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
    msg.setTimeStamp(0.24481731193418577);
    msg.setSource(34067U);
    msg.setSourceEntity(208U);
    msg.setDestination(51437U);
    msg.setDestinationEntity(76U);
    msg.ch01 = 0.8988596013021385;
    msg.ch02 = 0.4446741459885951;
    msg.ch03 = 0.42701329269619925;
    msg.ch04 = 0.15419536706359205;
    msg.ch05 = 0.5834167466196023;
    msg.ch06 = 0.5606730622828903;
    msg.ch07 = 0.2969279319287853;
    msg.ch08 = 0.8204424372569755;
    msg.ch09 = 0.6002660418888242;
    msg.ch10 = 0.2695374671306162;
    msg.ch11 = 0.8917489458042805;
    msg.ch12 = 0.581593221166031;
    msg.ch13 = 0.07285384043560317;
    msg.ch14 = 0.8997316242783184;
    msg.ch15 = 0.6225906295438448;
    msg.ch16 = 0.6565476557835467;

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
    msg.setTimeStamp(0.17234484063151934);
    msg.setSource(53944U);
    msg.setSourceEntity(247U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(190U);
    msg.ch01 = 0.7719881953300268;
    msg.ch02 = 0.43390879021020456;
    msg.ch03 = 0.031098356589812526;
    msg.ch04 = 0.09989085116412422;
    msg.ch05 = 0.4066223889469105;
    msg.ch06 = 0.14540918563588046;
    msg.ch07 = 0.28100503663098186;
    msg.ch08 = 0.8621997128730085;
    msg.ch09 = 0.805495198493596;
    msg.ch10 = 0.009560191445997401;
    msg.ch11 = 0.9661403145144537;
    msg.ch12 = 0.14281165287047992;
    msg.ch13 = 0.016707969563142355;
    msg.ch14 = 0.22807286864322063;
    msg.ch15 = 0.8133978756287094;
    msg.ch16 = 0.23279966063490598;

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
    msg.setTimeStamp(0.10510661385180109);
    msg.setSource(3232U);
    msg.setSourceEntity(40U);
    msg.setDestination(49435U);
    msg.setDestinationEntity(242U);
    msg.ch01 = 0.62871555570815;
    msg.ch02 = 0.9790577673559537;
    msg.ch03 = 0.7047875906179836;
    msg.ch04 = 0.4859212575587848;
    msg.ch05 = 0.18860872926696148;
    msg.ch06 = 0.16672392488659604;
    msg.ch07 = 0.5489588181898366;
    msg.ch08 = 0.8336680235876193;
    msg.ch09 = 0.42971624560457733;
    msg.ch10 = 0.18729720813955064;
    msg.ch11 = 0.320685435379635;
    msg.ch12 = 0.5422506584222042;
    msg.ch13 = 0.9113891736754458;
    msg.ch14 = 0.35962951668761267;
    msg.ch15 = 0.051607071744636746;
    msg.ch16 = 0.32279718393244783;

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
    msg.setTimeStamp(0.49181550517090855);
    msg.setSource(25999U);
    msg.setSourceEntity(182U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(144U);
    msg.op = 63U;
    msg.lat = 0.9374066842838259;
    msg.lon = 0.37210503811405726;
    msg.height = 0.08522567615534327;
    msg.depth = 0.7478021578741484;
    msg.alt = 0.5785646292714296;

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
    msg.setTimeStamp(0.45585546467945515);
    msg.setSource(15106U);
    msg.setSourceEntity(115U);
    msg.setDestination(59866U);
    msg.setDestinationEntity(116U);
    msg.op = 100U;
    msg.lat = 0.48729451513303557;
    msg.lon = 0.7659492391344378;
    msg.height = 0.5520328809318635;
    msg.depth = 0.6556707241494844;
    msg.alt = 0.3305169760923008;

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
    msg.setTimeStamp(0.08719832356233059);
    msg.setSource(7283U);
    msg.setSourceEntity(217U);
    msg.setDestination(37732U);
    msg.setDestinationEntity(53U);
    msg.op = 151U;
    msg.lat = 0.9242593698292649;
    msg.lon = 0.6759834459552598;
    msg.height = 0.4915948240809087;
    msg.depth = 0.7021320569399542;
    msg.alt = 0.9640992047759067;

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
    msg.setTimeStamp(0.0988450862302016);
    msg.setSource(30818U);
    msg.setSourceEntity(197U);
    msg.setDestination(4975U);
    msg.setDestinationEntity(50U);
    msg.direction = 0.1646103759224269;
    msg.speed = 0.6708717014039344;
    msg.turbulence = 0.9571418909141958;

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
    msg.setTimeStamp(0.8755823053974358);
    msg.setSource(17238U);
    msg.setSourceEntity(234U);
    msg.setDestination(45542U);
    msg.setDestinationEntity(19U);
    msg.direction = 0.7809466887791129;
    msg.speed = 0.3723764327203686;
    msg.turbulence = 0.5157210537683827;

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
    msg.setTimeStamp(0.20414207123048922);
    msg.setSource(27321U);
    msg.setSourceEntity(247U);
    msg.setDestination(36538U);
    msg.setDestinationEntity(54U);
    msg.direction = 0.7458217540663559;
    msg.speed = 0.3902067818110607;
    msg.turbulence = 0.9675072333751094;

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
    msg.setTimeStamp(0.9392909023854602);
    msg.setSource(60298U);
    msg.setSourceEntity(85U);
    msg.setDestination(6495U);
    msg.setDestinationEntity(19U);
    msg.msg_type.assign("HFWHMMQLLNYDFTHCDLQCTFWAXPQUJKMTTENWGFZBDERZAPQWTKXXZOFVTERRBQPVBECGDFULJZGIBZTFPDBHSWKQKJNELUTKUOKITIAJUMLVDZJYAAESGZSNOLBKGIBMGPAVVKSMVQHEKYNFAWVRNCENICDTSVOAEZYBYBPPJMOOCBUPXPUMIYGSYGSRREGQRXFSIQMHJDYXSZONDXCOIHNAYCPJOUIRHZGDCVUWHLRVCXMURWJLAOKHN");
    msg.sensor_class.assign("KNJTVWZURAVMKKCIQBDRBGAXYLXURUOBTGOQEJDOYHVPXDELHPXDNHUNYACAXDPUKFMBYMCECBOJCMOSHXPVIBOZRGXUQLJSLATGYJCFMKPRWGTSPHZIRQZGMUSDZWQGTWYMLBVAKRIZNPQKAQLPBXFWNHNLMUTWISYLHWBIFOJNNWVERAFOCEZSONIIGROSSYFKVW");
    msg.mmsi.assign("RPGWPFFLSMZVFPJSUBHLASJTNYEZHCJRXYZIEOKROUBRMJKKNXGVXMUQQYWJSUUWMSHWEVZOKLYPSBZLRGDSZITZOQDVNYFQEFLECGLVFWHIHHZXPDGYRYQRLJBCTNVPQYWNAIXOAKMTIECMRGCYKEMEBXAUWIWJNCMUPQESAVNVRDNDW");
    msg.callsign.assign("GHAKTDIGUSRGJGARMYQAJMOVOVHAKBXRVSKJTMHIYBYGUUJQXZRPBXPREWEYVKCTYMEUVPCOALHSFQIIRYBJPWQKLFSHMWIDDUNGATBDDWUEQMSZBJGTAPQQTCOCFOELCWVJSTGEHZYZGRWSATKPHFSDDOXYINXICKXENM");
    msg.name.assign("NWOPEFENSAYILYMHSDWRBAKZXRBLDANBXBMQHKFHBRUOTFQQUCDWYYMTLCDPOELEJZOYAXOJQBQJMFVYT");
    msg.nav_status = 141U;
    msg.type_and_cargo = 212U;
    msg.lat = 0.7086355953453706;
    msg.lon = 0.011050234503280021;
    msg.course = 0.30787375127270733;
    msg.speed = 0.4170288368775332;
    msg.dist = 0.5597020212300939;
    msg.a = 0.33745141099549003;
    msg.b = 0.552378668985459;
    msg.c = 0.5496446889061324;
    msg.d = 0.04921930227061544;
    msg.draught = 0.5751921673277184;

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
    msg.setTimeStamp(0.5132374922047165);
    msg.setSource(59510U);
    msg.setSourceEntity(79U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(32U);
    msg.msg_type.assign("XNMDJSGEXPFSNGIUXSBFJOULITEZHLTBVZKJGHSKEMHMQOWCVFOBYIXILUQTZALWYMCKPOEGMQAZWXKGLJPKAVLRDJRFWZYVIVHADCGOSBBOFNUOEAWHNEDCJTSNDSFLGNHVWINEQYFBFZHUXJHMECYUBQUPMMEHPHQRIKQBS");
    msg.sensor_class.assign("HYVSZVRMWFZIPZUVISFKWAHUUHOALABDKNMYZRLKSXBSDYSTYDTCOENV");
    msg.mmsi.assign("JCLIXSFITMDJCNFRAVLVCOKWBWHNCCNNRYPUHYVPLMXMVMZYUUIULYPOTNHYEUFZAKDMXOQKVXISAFKLFGXDWBTPSQLELJTOJSQJWEBCHPSXAZWEQNLWTSHBFTIXAJFNNHCUARZU");
    msg.callsign.assign("EVUMGZLXRODOEHAHSCVSNYRCFXQ");
    msg.name.assign("VJWWZWKUMEYAMXEXJEWARTCEFSNTJGMSNZZUDUVIIDZXUMBXLUQDR");
    msg.nav_status = 172U;
    msg.type_and_cargo = 118U;
    msg.lat = 0.9649845505556505;
    msg.lon = 0.8657875465212248;
    msg.course = 0.23400284500656565;
    msg.speed = 0.6812476572009812;
    msg.dist = 0.5688381606610743;
    msg.a = 0.6779001515660875;
    msg.b = 0.9864040588873645;
    msg.c = 0.21293079639251344;
    msg.d = 0.1701944831384986;
    msg.draught = 0.44450594140731237;

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
    msg.setTimeStamp(0.6953055287748683);
    msg.setSource(29664U);
    msg.setSourceEntity(231U);
    msg.setDestination(59347U);
    msg.setDestinationEntity(80U);
    msg.msg_type.assign("RLNGSXJEEIZHUQSKRQNOBGHLOPPCTRYPBBVOJLGMSPBNLMXIXKAFXZZJMAJTAXWNUWWQYWAVLFZBEPKCZPGXHZXTISAJRYTSHQZPIGLKWUYLEIOQEMIBMHOIGVHHKRSUSVLLNDJKVVTGYFBPCWFJDIFPFRYAUADDAGDYMOHTVFUCKXCNKQCOWLRVJH");
    msg.sensor_class.assign("JGWTGICLUHOVIVWEXMAIMVCJPOFBBZYLCEUHKRXKFDWIKGQYKCBEFPAGDMTPBWQRVJNRWGGUDPJVRSVMKZNKTLFYADYSNIBXAZCZZNNCNYRWETPNMJZDMQCODLOWRUJMTOTPLSSPJHRTQAFHVPMSDHZUHPFJQQDKOUVQZBLSEVSTIUSXGVAAYQDXEYBEEGKBMANKXWXLROSFFGHLRLCTBJHWMSCXIZGYLDXNEJEIFCU");
    msg.mmsi.assign("AEWIPZJOBAGZDFXSNBVOWYSFHIDCIYVFGYHCHEWFHOPQLVXJGHIBPRJZWASROTBMRXJSUQMFSBAECIGBUOGXVOEZPIUJZWWUULYSBCJKQEVRRTHNKGNSKLQBPOVTPHINVWKKJMZCALYICEQNBMNDVTFGJFXQNWRUXLROYXDZJFWXESLQXMTLCZQHENU");
    msg.callsign.assign("LZJGFDIROCDICJQVUBMPREVRVOTOZLPGKXKQAOJLIQSMHLMGNDHLAXYYFEAHOGPBGKWJKZBOMLBXTWNPVPYWXSCEUGHNMTFDHNQXRZMNRENRSBLDUGWPCIDCNHPLBYYPIITMZMATUZANJUBEWVSYQCCOBE");
    msg.name.assign("QWPARWFIXYHMGWQNXQLTIUROTFNTLBGWZOSPQWDFZJNTEEHHHKNQHUMMJJZAQIVMNXBVYEKFVUFJTAE");
    msg.nav_status = 226U;
    msg.type_and_cargo = 35U;
    msg.lat = 0.05161258405575686;
    msg.lon = 0.9931141684070667;
    msg.course = 0.9992594997979678;
    msg.speed = 0.5543086288844725;
    msg.dist = 0.29996965742956017;
    msg.a = 0.9582723436572821;
    msg.b = 0.7825468455296902;
    msg.c = 0.8695693698501173;
    msg.d = 0.4801026186823456;
    msg.draught = 0.36165493050122477;

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
    msg.setTimeStamp(0.5896557128677936);
    msg.setSource(49715U);
    msg.setSourceEntity(214U);
    msg.setDestination(6155U);
    msg.setDestinationEntity(113U);
    msg.depth_at_loc.assign("MHSHYQUEDOYKZROMKOEBSSGUFHFONIGRZVMWQVAPTTBULXTYHMXSGVCXTMPPNVZKCPQTVDCNWJAPRQZNNRWBJWXNFTWOFLOGRMEWAKYQHXUEOREYPIFSQTJSJGOAVJMNKBEZLNDHSARWMTZHAJOIGHVYPACUTDBXFRDX");
    msg.danger.assign("DGLGJDONXHBWTKVISMIRPLJTDAWWSOSTBXBJKQWMBGYQTJIVGQYYGQCQEUUWQSRZGEFMAYKYNSUKEJRDUGQKXHVVEBVRTNFXXSEUCBOFASVJLMAZKFOEPRYGXHOZNIDMOMMUITTAFVNZWMZUMYADLFAMYC");

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
    msg.setTimeStamp(0.9068279819395285);
    msg.setSource(16195U);
    msg.setSourceEntity(137U);
    msg.setDestination(48401U);
    msg.setDestinationEntity(247U);
    msg.depth_at_loc.assign("KCXKWSAFMHFCCJEIULHGNSEZWFDCSEOPBNMKIDZLKTZIGVVXEXZJHCUROEFFGBAVNTQBOQMDHRIAZXQTKJEMWQJCHVZSNYYWKCXVQURXMVBWPRISVJIZJZMLUHNYLKOHEYRNPOOUSUYFWRBMAQPICODQMNBWQGEBUSLXGBCZQJYOAAUCGKPTTNAYDBUYTWXGLHGOSWUIYJIL");
    msg.danger.assign("UVVLUVFSHUBTLCDONRSRSZDZCTFWNWOUBRGQCXHLYQXJCHCRYUKOQJNONPMEEEEXWSJEEINHYKAQWAVOGDHGUCISMJPRZDLZNXKRAGZOJMRJWYFNADBPSCAKZGABDKPKPZDXNSKQGFHZBKUUAPBGTQVIYTSSKIDBFLMNWYJCELTHHPSOMQOFTVVBNJTTPOXMOMDVECPPIIVZMLKEUYFRTIICZQIQM");

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
    msg.setTimeStamp(0.5481889408859888);
    msg.setSource(20202U);
    msg.setSourceEntity(113U);
    msg.setDestination(49548U);
    msg.setDestinationEntity(137U);
    msg.depth_at_loc.assign("PNEOUGCJAMBFVLEXDKBWSPPZCHAFGGCLXPTHNUEKBWLJSCQTSFYEXIWEONXHFYXMRLGIJCYVGTUDDKXDJMGBFWDRJBAMJWNIOSPKCABKDZSWQIGYYZGHUHRVQQQTVXTMLHHTQRAFSSPNZUWXRVNIAKZCLYCZRGMIPDAQXIIWOOELFZLGFOMPTRJAUVNNCRVJDCEBMOJPTHUONKYDDUYHWSZVOVZRIIEEHZPVKT");
    msg.danger.assign("OFFPDEBPIQALQGKWWIWRUSCLJNJOMEKZXFILZRKTANAPFHZEKOKYATYUBRQBBKYINOIGFMSUHAQNDJJJVDUZSERACZJEEOPVCXDVAQCDISTVFHFDDEGUHWWNQZPXGQZJXWJXTQAHVFRKNJCYCOUUYCTUIVYKWWRWSTDMSFHRGKEPOMJMMXHUTHBMXYBPZALQTBLUTCOWHAIGGLVRNOYMLDLYMENCXBESPGNQYFSSPGIBIZRBXSPZCTVHDN");

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
    msg.setTimeStamp(0.8920046204592614);
    msg.setSource(52123U);
    msg.setSourceEntity(144U);
    msg.setDestination(31886U);
    msg.setDestinationEntity(41U);
    msg.time = 0.018301455275020695;
    msg.x = 0.7448649373673241;
    msg.y = 0.9254771590160437;
    msg.z = 0.6351604540245436;

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
    msg.setTimeStamp(0.12837408718648924);
    msg.setSource(15916U);
    msg.setSourceEntity(152U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(252U);
    msg.time = 0.5219210276951959;
    msg.x = 0.6124950381228473;
    msg.y = 0.7089318726450481;
    msg.z = 0.516312019361253;

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
    msg.setTimeStamp(0.006438359299439811);
    msg.setSource(61183U);
    msg.setSourceEntity(238U);
    msg.setDestination(12698U);
    msg.setDestinationEntity(55U);
    msg.time = 0.9758763307976782;
    msg.x = 0.2424657161269529;
    msg.y = 0.5859469335126887;
    msg.z = 0.4308278353994516;

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
    msg.setTimeStamp(0.9564854799036796);
    msg.setSource(20267U);
    msg.setSourceEntity(140U);
    msg.setDestination(4929U);
    msg.setDestinationEntity(236U);
    msg.nbeams = 166U;
    msg.ncells = 75U;
    msg.coord_sys = 20U;

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
    msg.setTimeStamp(0.19637293273776035);
    msg.setSource(60512U);
    msg.setSourceEntity(131U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(225U);
    msg.nbeams = 156U;
    msg.ncells = 71U;
    msg.coord_sys = 165U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.6577910418616425;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.3728510684189229;
    tmp_tmp_msg_0_0.amp = 0.11813343934321952;
    tmp_tmp_msg_0_0.cor = 10U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9999147343665117);
    msg.setSource(36650U);
    msg.setSourceEntity(41U);
    msg.setDestination(64406U);
    msg.setDestinationEntity(178U);
    msg.nbeams = 198U;
    msg.ncells = 105U;
    msg.coord_sys = 57U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5550329946487775;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.21504301104494894);
    msg.setSource(58280U);
    msg.setSourceEntity(120U);
    msg.setDestination(48111U);
    msg.setDestinationEntity(53U);
    msg.cell_position = 0.4333684052633696;

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
    msg.setTimeStamp(0.674565411680439);
    msg.setSource(50403U);
    msg.setSourceEntity(145U);
    msg.setDestination(30306U);
    msg.setDestinationEntity(209U);
    msg.cell_position = 0.09129370374614132;

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
    msg.setTimeStamp(0.7748973299966128);
    msg.setSource(44513U);
    msg.setSourceEntity(231U);
    msg.setDestination(61021U);
    msg.setDestinationEntity(140U);
    msg.cell_position = 0.1393346915851904;

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
    msg.setTimeStamp(0.730091547335421);
    msg.setSource(25606U);
    msg.setSourceEntity(57U);
    msg.setDestination(55164U);
    msg.setDestinationEntity(117U);
    msg.vel = 0.01697635852240409;
    msg.amp = 0.11807840189102747;
    msg.cor = 24U;

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
    msg.setTimeStamp(0.06144002877609478);
    msg.setSource(27161U);
    msg.setSourceEntity(52U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(162U);
    msg.vel = 0.24644794812659032;
    msg.amp = 0.7284122432800391;
    msg.cor = 234U;

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
    msg.setTimeStamp(0.12073421708315402);
    msg.setSource(54711U);
    msg.setSourceEntity(154U);
    msg.setDestination(26798U);
    msg.setDestinationEntity(144U);
    msg.vel = 0.341637104518016;
    msg.amp = 0.5670164183337558;
    msg.cor = 242U;

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
    msg.setTimeStamp(0.21626199684410663);
    msg.setSource(49631U);
    msg.setSourceEntity(56U);
    msg.setDestination(32619U);
    msg.setDestinationEntity(144U);
    msg.value = 0.2706470185936608;

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
    msg.setTimeStamp(0.5483357855206922);
    msg.setSource(2400U);
    msg.setSourceEntity(48U);
    msg.setDestination(1567U);
    msg.setDestinationEntity(78U);
    msg.value = 0.5429206805843697;

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
    msg.setTimeStamp(0.572990487332223);
    msg.setSource(6645U);
    msg.setSourceEntity(169U);
    msg.setDestination(44871U);
    msg.setDestinationEntity(227U);
    msg.value = 0.858799451392103;

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
    msg.setTimeStamp(0.964788735082336);
    msg.setSource(11800U);
    msg.setSourceEntity(125U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(95U);
    msg.sig_wave_height_hm0 = 0.918938998281516;
    msg.wave_peak_direction = 0.4030109062348627;
    msg.wave_peak_period = 0.11690387612037367;
    msg.wave_height_wind_hm0 = 0.8987196972399654;
    msg.wave_height_swell_hm0 = 0.04897326461184537;
    msg.wave_peak_period_wind = 0.8766481486566543;
    msg.wave_peak_period_swell = 0.3373315757155356;
    msg.wave_peak_direction_wind = 0.1346044667335745;
    msg.wave_peak_direction_swell = 0.7883659707508103;
    msg.wave_mean_direction = 0.6285870681600312;
    msg.wave_mean_period_tm02 = 0.9304058346421075;
    msg.wave_height_hmax = 0.3783125835058786;
    msg.wave_height_crest = 0.6778595999059955;
    msg.wave_height_trough = 0.8389003382530423;
    msg.wave_period_tmax = 0.877764421181768;
    msg.wave_period_tz = 0.22617888150608978;
    msg.significant_wave_height_h1_3 = 0.8111014311346444;
    msg.mean_spreading_angle = 0.49378314918917166;
    msg.first_order_spread = 0.5296713773233119;
    msg.long_crestedness_parameters = 0.5472974778966008;
    msg.heading = 0.966752458506206;
    msg.pitch = 0.6957561351888518;
    msg.roll = 0.2916170059162797;
    msg.external_heading = 0.4314337046536403;
    msg.stdev_heading = 0.744344015476519;
    msg.stdev_pitch = 0.08340231947698717;
    msg.stdev_roll = 0.7976675788946478;

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
    msg.setTimeStamp(0.30891330602944556);
    msg.setSource(8711U);
    msg.setSourceEntity(168U);
    msg.setDestination(5293U);
    msg.setDestinationEntity(217U);
    msg.sig_wave_height_hm0 = 0.34451125813204575;
    msg.wave_peak_direction = 0.8325511684908942;
    msg.wave_peak_period = 0.7557153779180987;
    msg.wave_height_wind_hm0 = 0.23460074672855613;
    msg.wave_height_swell_hm0 = 0.6872667568352305;
    msg.wave_peak_period_wind = 0.25062118477351414;
    msg.wave_peak_period_swell = 0.7124351037237246;
    msg.wave_peak_direction_wind = 0.5072921380234009;
    msg.wave_peak_direction_swell = 0.25364285200713443;
    msg.wave_mean_direction = 0.41626966338305127;
    msg.wave_mean_period_tm02 = 0.1708203645386629;
    msg.wave_height_hmax = 0.1635715945302857;
    msg.wave_height_crest = 0.014545334114111741;
    msg.wave_height_trough = 0.2762480589950136;
    msg.wave_period_tmax = 0.09663170037068058;
    msg.wave_period_tz = 0.1747835723232788;
    msg.significant_wave_height_h1_3 = 0.27601765257339117;
    msg.mean_spreading_angle = 0.9826422860480059;
    msg.first_order_spread = 0.07673944706703995;
    msg.long_crestedness_parameters = 0.5412003612463043;
    msg.heading = 0.8079392362332545;
    msg.pitch = 0.6684715158732785;
    msg.roll = 0.5724734877353389;
    msg.external_heading = 0.21806946813499617;
    msg.stdev_heading = 0.8170628387432;
    msg.stdev_pitch = 0.7933302279774609;
    msg.stdev_roll = 0.38392365829609243;

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
    msg.setTimeStamp(0.7516744088344631);
    msg.setSource(64401U);
    msg.setSourceEntity(208U);
    msg.setDestination(4560U);
    msg.setDestinationEntity(67U);
    msg.sig_wave_height_hm0 = 0.45632412989492155;
    msg.wave_peak_direction = 0.2281133328916204;
    msg.wave_peak_period = 0.32881765202781954;
    msg.wave_height_wind_hm0 = 0.9534920887586559;
    msg.wave_height_swell_hm0 = 0.6075934218594227;
    msg.wave_peak_period_wind = 0.31529478087796237;
    msg.wave_peak_period_swell = 0.5817249043926852;
    msg.wave_peak_direction_wind = 0.33828163521492194;
    msg.wave_peak_direction_swell = 0.30879749303682136;
    msg.wave_mean_direction = 0.262496942572651;
    msg.wave_mean_period_tm02 = 0.7341643349669349;
    msg.wave_height_hmax = 0.5147241649306298;
    msg.wave_height_crest = 0.9770748316156982;
    msg.wave_height_trough = 0.3455832130657741;
    msg.wave_period_tmax = 0.09370392308121689;
    msg.wave_period_tz = 0.1752529815066166;
    msg.significant_wave_height_h1_3 = 0.17505541585482465;
    msg.mean_spreading_angle = 0.15598708927413651;
    msg.first_order_spread = 0.8897384554042598;
    msg.long_crestedness_parameters = 0.6812974465477251;
    msg.heading = 0.7885738366448898;
    msg.pitch = 0.6546873429967922;
    msg.roll = 0.007707330561494752;
    msg.external_heading = 0.5561337350436628;
    msg.stdev_heading = 0.5707260421335401;
    msg.stdev_pitch = 0.8620229643370934;
    msg.stdev_roll = 0.7029894411374358;

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
    IMC::WaterFlow msg;
    msg.setTimeStamp(0.9967469885217123);
    msg.setSource(40196U);
    msg.setSourceEntity(185U);
    msg.setDestination(15978U);
    msg.setDestinationEntity(40U);
    msg.value = 0.19907543319518728;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterFlow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterFlow msg;
    msg.setTimeStamp(0.08595426703122555);
    msg.setSource(27156U);
    msg.setSourceEntity(222U);
    msg.setDestination(37617U);
    msg.setDestinationEntity(176U);
    msg.value = 0.47216347343679455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterFlow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterFlow msg;
    msg.setTimeStamp(0.4221673668885594);
    msg.setSource(62491U);
    msg.setSourceEntity(207U);
    msg.setDestination(36186U);
    msg.setDestinationEntity(118U);
    msg.value = 0.951855932049539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterFlow #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8708739631982197);
    msg.setSource(22253U);
    msg.setSourceEntity(60U);
    msg.setDestination(1715U);
    msg.setDestinationEntity(157U);
    msg.name.assign("BCARKUCUSCNXTXOCUXHFVSFBPODAZZHMDSKBWJVQJOLQEZQFMDYEYEPSIUF");
    msg.value = 55U;

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
    msg.setTimeStamp(0.6167746221712204);
    msg.setSource(23662U);
    msg.setSourceEntity(46U);
    msg.setDestination(51569U);
    msg.setDestinationEntity(236U);
    msg.name.assign("QLXIBQDTBGCYZLVCNJATZHCZVSXUMWQDDEISUVLKNFWFTLJCOIUYRXIFXNAAXPEKBUAPGTDFNEHTFYNUGPZARHWPEYVVRHDBGCQOGYINZUERJPJWEUIZAMKHVFSFNWROIPTFVPQYSKJYPCACCSWGKPBSGOHWBDBMGRKWUHLTXTL");
    msg.value = 129U;

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
    msg.setTimeStamp(0.8588104598641717);
    msg.setSource(21148U);
    msg.setSourceEntity(230U);
    msg.setDestination(50540U);
    msg.setDestinationEntity(190U);
    msg.name.assign("CTGFSJNWUDPYAYD");
    msg.value = 197U;

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
    msg.setTimeStamp(0.3024645212960032);
    msg.setSource(52939U);
    msg.setSourceEntity(151U);
    msg.setDestination(825U);
    msg.setDestinationEntity(186U);
    msg.name.assign("OYROTBAGYLJRCOWIGYJKMHBULUTRIEHPWZEVNRPKDMLFEQFTKQMAQBIKJVZLQMZSVBTSZMBGBCACZODPGVDLZJJWLHJNCBCNXSLACBXPUFPSCAGVAGLYPDEKMNTGUQPQXUFNDKKDVGDRHRYJMUYUUNHWQPRADADWSGHFFXZHGDOSJKOMTFXFOKUNEXFERQOCWIIZVXXTLTOEAOHYSNTVZXTNEYJPWWCIUCQXIF");

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
    msg.setTimeStamp(0.5269889305213455);
    msg.setSource(38988U);
    msg.setSourceEntity(104U);
    msg.setDestination(55986U);
    msg.setDestinationEntity(203U);
    msg.name.assign("YQPLDXIZMXFDJJMSXDWXSNCAHKRLMYRZDDYZJFKHSOWJIHDUWADEAMUJMFSEZYLENRSPBQMTXMLUOTZFIGTALPILQMQTKVJNHRJAYVHLNZ");

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
    msg.setTimeStamp(0.8078327153103783);
    msg.setSource(22939U);
    msg.setSourceEntity(6U);
    msg.setDestination(39799U);
    msg.setDestinationEntity(40U);
    msg.name.assign("WDZTACSSMVGIUNNURFEEWYKWZVGBDWCXSJGLMFBQTNUSBFBJVABOLHREXIYISFNJMGNFAMCFIJDZAGWDLVXPTNPUCEZFGLTIOWZHALOKRZFAQCX");

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
    msg.setTimeStamp(0.743937100211582);
    msg.setSource(5018U);
    msg.setSourceEntity(184U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(137U);
    msg.name.assign("RWCQYUFDAEAQKUPLMZNSQWGLHUWWIOYDBJCSESHUFIRWJRIWICYNDEGUVXVDSJNKUZTZTVFUTAVZFIXPOQBROBGAAYZXLGERKQWHHRWPQYQOEFXPICYCOAEPFNJHXYTCNTNKGQRLTXBWDMASBOUJZMIZOGEMWPTRYZH");
    msg.value = 171U;

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
    msg.setTimeStamp(0.40871038134036786);
    msg.setSource(37094U);
    msg.setSourceEntity(85U);
    msg.setDestination(21912U);
    msg.setDestinationEntity(34U);
    msg.name.assign("XDKUGIKPZSFQOADYRYHLEWUAFZGACVTGBLSCTANQXSJINONRFEXHOGVVWLAOZULGSNGTLWYVGHYBZDKBFMFAQQMHQNFAQDHLHJPIMXJCDKBZCKOCCCQHGYHSTLZYSCDDAVXOZIBPUORVYIBUJSXPZWNVEVQWSTFURXHYEENDBKPLEGJFYJQIMTWQRYCKI");
    msg.value = 165U;

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
    msg.setTimeStamp(0.052132963297268686);
    msg.setSource(20942U);
    msg.setSourceEntity(138U);
    msg.setDestination(61419U);
    msg.setDestinationEntity(38U);
    msg.name.assign("PFLFEEUQOQMXXOGVKPUCSRCULTPUAEWOHIRSVITYBHZTKTWDZDYKRVVDACIUDMMMVBVYANFW");
    msg.value = 41U;

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
    msg.setTimeStamp(0.8704479342157433);
    msg.setSource(59296U);
    msg.setSourceEntity(10U);
    msg.setDestination(23749U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5541714970700846;

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
    msg.setTimeStamp(0.30596618376910245);
    msg.setSource(10847U);
    msg.setSourceEntity(134U);
    msg.setDestination(35921U);
    msg.setDestinationEntity(151U);
    msg.value = 0.44349910768413126;

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
    msg.setTimeStamp(0.754809752291944);
    msg.setSource(62144U);
    msg.setSourceEntity(244U);
    msg.setDestination(38027U);
    msg.setDestinationEntity(190U);
    msg.value = 0.18311452847096976;

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
    msg.setTimeStamp(0.8770249198449172);
    msg.setSource(41571U);
    msg.setSourceEntity(38U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(50U);
    msg.value = 0.47434009296503243;

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
    msg.setTimeStamp(0.4071547827540537);
    msg.setSource(15034U);
    msg.setSourceEntity(157U);
    msg.setDestination(44926U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5941639889898085;

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
    msg.setTimeStamp(0.8692721058803916);
    msg.setSource(17770U);
    msg.setSourceEntity(127U);
    msg.setDestination(798U);
    msg.setDestinationEntity(61U);
    msg.value = 0.21969398183379862;

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
    msg.setTimeStamp(0.5622091081578744);
    msg.setSource(54017U);
    msg.setSourceEntity(235U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(184U);
    msg.value = 0.9569253160306228;

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
    msg.setTimeStamp(0.11179537710422693);
    msg.setSource(16893U);
    msg.setSourceEntity(216U);
    msg.setDestination(41551U);
    msg.setDestinationEntity(5U);
    msg.value = 0.31203360740516095;

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
    msg.setTimeStamp(0.0498053921317303);
    msg.setSource(55111U);
    msg.setSourceEntity(11U);
    msg.setDestination(6558U);
    msg.setDestinationEntity(85U);
    msg.value = 0.22693522351710782;

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
    msg.setTimeStamp(0.2155065670088595);
    msg.setSource(21252U);
    msg.setSourceEntity(204U);
    msg.setDestination(5716U);
    msg.setDestinationEntity(107U);
    msg.restriction = 115U;
    msg.reason.assign("SUHEFNRYEYURCTETHVSOFQCNNSTXGOTFFYWPRBCMVEHAXSOLVKZLRDPGUPRZPVVZPCAMBXZCCKZPMYJBUFXRZIDQJSLKADZYOERBNLZFIXKSFQTNVJAFNAJAQBYGDSHQOW");

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
    msg.setTimeStamp(0.0988510027854217);
    msg.setSource(4761U);
    msg.setSourceEntity(12U);
    msg.setDestination(28081U);
    msg.setDestinationEntity(62U);
    msg.restriction = 92U;
    msg.reason.assign("THTXUVLIRYXKGJLXMNQHQNPRCBCAZOKRGIIPOKRFASOGGVSFFUVVDOTZZSTJUYHWWRSLSTHHUDSSUZWCLRYXORDPMAYKGVXYTDEXIAWNHZTMPPCNZJLQKTSCXJBUIIZLJBEVYMVBTHOGMHBIRYPGRHNAJBYEJWKQXWWFCIFADEQAQWGMFMXBPWYWAK");

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
    msg.setTimeStamp(0.8082904281898969);
    msg.setSource(50196U);
    msg.setSourceEntity(123U);
    msg.setDestination(38301U);
    msg.setDestinationEntity(86U);
    msg.restriction = 126U;
    msg.reason.assign("QKFDHTROZBQMHPIGPYCOCABOAVSBXBTOLJSJBTWWRWXGLYLHTPLTEYZFUTNMFXDBMFCOSNZUXYTVIZEZRPUNMUVGZVFDMZWZAVNJJJOCCORSADOJZXQHCJMA");

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
    msg.setTimeStamp(0.6163986140778829);
    msg.setSource(7399U);
    msg.setSourceEntity(239U);
    msg.setDestination(60216U);
    msg.setDestinationEntity(77U);
    msg.op = 182U;
    msg.request_id = 491569627U;
    msg.entity_name.assign("QXUADAVPWFKOUEWFJTAYDSZKMVGVLSGGOMVKBQVZKMBSRJUIVXVHELIKWZEQYOZVVICUIYAIZKZHZZMDKOHLFTYDCONCBQXFPYEAFAQWFJHPKRJDBWHDGJJEBLMSSZXGXQBBGLIGRSNYFWPHSIPPNUTHEYTJPIPXYLLWSECKDCCILIRXJFMBOLY");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("UZEWQYPLHCPRTWYJNACLPSTVUGKQXIHDCRVRUYMJLBYJPJUWTJOHJQSQDMMWMNRMPCKANLHRNAEMAJABZVENNTRFFIKKGYYDSWQVMPDHOOUPCSOFZGBFZILBEYRBWMAZILOZUQUSTNIGSDCKHVZVDETAJRHBLSXPWGOQGFEMOWFIXZCLXDTFVVSBYQINPXFWGKYALGDONXYGTIEFLKUOISIXDHRDEQZXMZXVXVASCJTNEB");
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
    msg.setTimeStamp(0.08291157890049294);
    msg.setSource(57972U);
    msg.setSourceEntity(132U);
    msg.setDestination(26032U);
    msg.setDestinationEntity(25U);
    msg.op = 171U;
    msg.request_id = 1305835162U;
    msg.entity_name.assign("OPIGLCGKADOHJOPZSTREWEHQEXNJGRFQLPJKUNYRXDEQAHCRQDPBBRYLJBXLIKMSMDZFFMPTXHRGNNINOTGFNOPVNSAYQQSDTTMCMYFIYVOLBRPOJHIGSWSNVO");

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
    msg.setTimeStamp(0.26767295057306284);
    msg.setSource(19094U);
    msg.setSourceEntity(155U);
    msg.setDestination(15840U);
    msg.setDestinationEntity(5U);
    msg.op = 3U;
    msg.request_id = 1879977049U;
    msg.entity_name.assign("PCXZFHZFTZCAGYGIERBUTSAWEAWOZYTYPBWNSNQOTUFMCGRIMMSIHREANPEIBQVFCBKGHXITWDNDXWOTVRIYXLATMDVRDJEARCIWJLGUILILYXVTGGDBJJVEZBELSFMZJOQKQDHKTZHQBVEDOFSPTNJWUYAPKHSFDSBOWNRQDRNQFSLPHPECWOPYOACHGYOCUGSK");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("NIYXAXCAXWEPPYDTKBHLRGMWGFHCMOLUTHSQHEPETDWEIPOFKNAEJKTUHOJLIAZXZSRPCZFYJMIKJZGVPVZEQIQSGMASHDNURDSRPEJUJCYIUSLDYUYYAERIBGASPOTICDUSXLMVWTYJYQVFMZOUUIBWOXVWNPQTZBHNPXQVVOXFKQAXHJD");
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
    msg.setTimeStamp(0.6702022101703422);
    msg.setSource(62825U);
    msg.setSourceEntity(176U);
    msg.setDestination(1514U);
    msg.setDestinationEntity(90U);
    msg.name.assign("JMHGWVVVCBYUTQLNSXOGZEXSBBOZBGJFGNKESYATVBWCGQNACTHHVNWKNUYPRZFMPQHZMPAICPOLIQARMRQQFTSUDKHVESBAXLGPXMWBJDIPHDDRNXULDRXDXMTAFKHOUYHJJQLRYVIOVNOPOMQWLWQDPMCYEYZZGAYSRCEABLLBIKZSXDLAOMRUFDPTEIHYKCOSIKWUURUMBNSITGCJKOZJLIJZCFRUNFJTZWISEKFXHPDGWCAVTQJ");
    msg.type = 194U;
    msg.default_value.assign("RPSCKLUIXGUWPUGDXZQMKUKDPSWDBRTLFDWSJXSEZECHVUIMHDAZXQJWZQMOFMKZYIOXWNKTPHXWFMFTYWLEDNBSIMNNQTAQKAUQGURAIRLJUHWI");
    msg.units.assign("NCYXTSNRNMUYYZDQBBNTGRAADYGAHPGACMDPQDVBGGLGTCIZBXETVNJIHHCZINEUNIKHMKYLRPTDXRUYAHYOWPJEAOOOXJJSF");
    msg.description.assign("MSQHQOODRDAGJAPTQBWKXKBPXOHVAHRJQRFMBMNKSFYNKINEWPNBFUOHASCRAOZAETTIFRBODQLQVURUKIVNRYLPEKRBWXXOVSEJWXNIPJJIHJDUYJZWVSTQCSVUZEFMDIDICPGBFYNFRSFZEYDKWTGHWMEGMIUZSGFGUBAHZWELHDTLXCGQXMZKJTVJMNTIWYBLVZQXMLCYZXHPAVACHTPYWYZJ");
    msg.values_list.assign("YEELKUKVJHFEKSCJNQWGWJXOFEMBQXOQZFYYIVMRBJDCGKMBFNBHSHFCNQTVAXIJRCIWGOLDYVKIJDMP");
    msg.min_value = 0.4227421802391733;
    msg.max_value = 0.024702544499240475;
    msg.list_min_size = 180U;
    msg.list_max_size = 31U;
    msg.visibility = 134U;
    msg.scope = 15U;

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
    msg.setTimeStamp(0.4919741305542593);
    msg.setSource(7979U);
    msg.setSourceEntity(133U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(230U);
    msg.name.assign("BUZZLQWQYOWKTB");
    msg.type = 30U;
    msg.default_value.assign("GUVEMGMWNBWVVSNXFVBLEBMJZSANLBPMQJSRKCRDJKKAPRQPX");
    msg.units.assign("WEKZPPNEGLDBKNNSZVZNXDZPXQMUGSOOQXJTIDYVHCJPFRJIJMVMWPLCHIAUGPGTSOWMRJHVACULFOSUEMGGUQKJRMZAPDKTNCUXCESYVPJLWLQYSHLWUHPMNIWPQCELZIRSQDBEQAQACBDFOTWM");
    msg.description.assign("SHBKYVIAVSEACNCBGPQNHQCPFANBMZWTBQYRIESOZXNMTFCLMAMZGGVVJVFAGOPBVTDGTCQXYONZNWPFOGWVGOCUNEBNDXXJYPXPUKRKGWJUTEAIQXTUIXTAJJPYASBZJEVJTMLSOIEKHNQHBIKRKEZFFEZGCYOYUELUSPRSB");
    msg.values_list.assign("YJOAGVDBWVVZTLILRPYKIRUHOHUWQHXQAZBZLQDMFMQOEQGTUJCOJKODBXWDRCCPSFSKLTGJKNTJNPBKRLIXNQIECNYAGSDWCKPAAX");
    msg.min_value = 0.6476376796299359;
    msg.max_value = 0.36446140573183405;
    msg.list_min_size = 213U;
    msg.list_max_size = 59U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("DYKSVFUBGAHEKXTZCFAKBFYPTOCPVYSWLKTIAXYCHNIOCRDGVNZIXDSSLRYXPHEGZAFCONFJEIPZREVOWGRLMZOJTBFIMBEVUUHOKTAVFERPAGDRLGAQXJXYDRNKICFCQFCPQSBOTHGHU");
    tmp_msg_0.value.assign("ITGEWPDWLNYNSDYVAUTXUVSAFENBEBAFJJWQJIIMABFNWBJAGTDPQVDJTCOWNGXZZVZRNKNMTXUUYKFYRHYCZEHPAGRV");
    tmp_msg_0.values_list.assign("ZIUQZVKLADAWXSJPFJNVAMMBKMANUHZILOOPKQJFRICMXHTOFTRKFYRSJASLIRUEEVPHXTPQDQJWGSEYFLQNCNQVECFUHCGESZTWRBUPVGGIYMFAPBZVJZSYBRBCYIRJLGHLPZXQTEUYDKTCMXSXYGFBLMXGBXFWKMIALHHTLXGQCMETYQRDNERJHZCDUONDHOUZKTDOPNADLJVBOOFBKVSGUBKWHPERIYIDQSKWXWZYCJNWOUVPTENC");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 137U;
    msg.scope = 113U;

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
    msg.setTimeStamp(0.18222636012350402);
    msg.setSource(47518U);
    msg.setSourceEntity(216U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(152U);
    msg.name.assign("ZTUMKAUJJHJZOKLGQUVAIWLWGJCBLNVOWFTDJEPQBKVNPZBOHIZGLRHNFRDUBBSGFCIOYBUVIXPAVSYWITXAMZOPMPTRSKNKDJNTOXRUNHUQAGPQGDTOQRMIGQLQECZIEDDGTBKIFYPFESSVDGCECFRJAVMPDXMHWSYZKYAWWGTNBVEPKWXLCVHEKNYTWDCRTRAMKZAYBQHUYLVSSMSXUHFIEZILNEJLQELMROXDOXMFZPRUQN");
    msg.type = 142U;
    msg.default_value.assign("QHTGAHLWITEILXFGRAGWJFANFSUCWUDNVTIQATPVVGJQJQMWHTBNDLSZWXXNYSMXZOEZCUFNL");
    msg.units.assign("KFUAQAABSXELCDFHORWXOKQFIMAJOYBWOZ");
    msg.description.assign("YSZAMWNPSBKNMCOIMFRCVSIKCLKGKVGYGNQPZAYZQTOJYDKLSFIXXCZOWXJXRYFQKTTCJDODQBUXLWMAASEBUYALGLZBDVRSCFJVRZGLQXLJIHAUUIDURZCLVAEKEPGTWSMPPKOMFFSZBMXOFLQWFJSNTVBNWXUONRFXCFBBKEMSOQTYLJQTHHXPBDVGUCGHIDPTUERIAWWNZHDRMEIQEABDKVUMGVPHIJYUWTNPHYIYOQGRJE");
    msg.values_list.assign("PMFIPNOYXRMIJPVZAVCGFAKELZSOPRHFRIAPCAVBZLXQSYEEZMBGBDSSBYUKUCTUHWNEHGMMMJKWSFKKXWAQODVTABTWZQOQRTUHPYGDORYGWJOADQWUNELCDUAPJCLHTQVIHGPASZPOFDJNYXWEPMKTDNKIXXHIKUZHVCTHHUJNYVGCSNEYXJCNLNXOQMJWKBOGEBZ");
    msg.min_value = 0.23447209670688363;
    msg.max_value = 0.21424090410565455;
    msg.list_min_size = 171U;
    msg.list_max_size = 121U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("HAAFTPYHOOXTMBXIAMNXHCJHMXNGUKXCRKJSWYFLVOTKZRCIRQTPD");
    tmp_msg_0.value.assign("ZGLIFAGFGQSHITRPREVTEPHRLMFMPEUOZMTQPRLNTOKIBTRWONIASRTAVHZVWYLJLPDFS");
    tmp_msg_0.values_list.assign("EKVVLHUCYLEQEDDTIVAKPJZCEWGZOTOJAJVLDHXGLCQAALXAHYKELVVUKMVIWKDDRGFZHJMZSYBBWMUXRICUPDDWIJEZQISNHMQBMCNRJUMGPFNITYTQJXFJHBFUNGNRSYSSPTMGZQGTTMYWUBYDVUKOFWQUAIDEBOYNJQHFSAZSAOCRZLUHOPJBMFMKWRNFOHCWIDPKLXGYOEKWOGHBXSGCAQSNEZPWPVNTLVITRNYCEXRXAXFLSQ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 96U;
    msg.scope = 247U;

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
    msg.setTimeStamp(0.6884938055576711);
    msg.setSource(37494U);
    msg.setSourceEntity(235U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(179U);
    msg.param.assign("VPBEAHIBYSQYPGRCDFUGJIWTXDFHNTVXGPJEKTOGYMGDNAHSAKZYZOSWYORNGCTEKEHONSDUXXLSCMUDVVQZBFQWJPLBFFXZDKMRQNJHQZHUYAGWOQUQKZUDNMPPBDDISARVAHUYIJRFBRUOXNCMPEQLAMLSHBMZLRBCQLCCLISBWOTFGTVSDRANVEGNEIZZJHIRJLK");
    msg.value.assign("ZHOTBNFGTRPLKCXZGSXULLLKBODOCQOILIMNQPSYDZUUVERMXNYFFLNYFICSPMKIEMFG");
    msg.values_list.assign("PNLJHLAZTGQQIMXTQCGXHCNADOSBPIVSRCFLZRCPWTBYRVQGJNWDLSQBOXDJJDCTOGZHZWGNWCODFUMXQOZDKNGJFKJUHFYCKFGSEXPTAYGDRTZPESUJIOPFRNMIOULIRANUEWMBBGHIRZQZDQBVW");

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
    msg.setTimeStamp(0.13583489219966893);
    msg.setSource(9908U);
    msg.setSourceEntity(37U);
    msg.setDestination(55161U);
    msg.setDestinationEntity(149U);
    msg.param.assign("WGCCIKZKGFSPIVBDDUMSUXAHGJLTBUCQPMNPINWSBSCTFLLDJOOZWGTSKPQPJTEQRLTXDNCLOFZOMYVAHTEYCUATYEIXHQNLVFKAEJWQRYYSUNPYAHNFGCGHRCAPASRZHUKYXRVLUNDETEFKBXXJVVMDIWMZBWOJCYOLPMFMZKOVMOJEDFBTAWYHUSBKIQRLZJTXQPWLHRZEDRFYMSHVIREQMZWXJUKOKFANABNQJGDENXWHIOBCBGDR");
    msg.value.assign("DZJEGESXSMVSSKTZGXKQASNHOHDKQMERHUZPQLZUIXNLSHNXWAZAMCHLUNZTAAGJOZINNDWYEKYVRBDKUJOMNHVUGGPEHLJCXTMYYEUVICVKBNPTHFYVDGDLQPFFXSRBOOAGNYJWQEXKLMEYWMFCWJM");
    msg.values_list.assign("SESFAHKGOGGRDOYHGTVIXCJBTYESKMYWBCFWNBUNFVZEDVOLTZKREUVLQCAVHEBUGIVUGZPNSOPHMDDMFXYMDOUIKQWBRWEBNUJEXXYURATOCFSVXCLDJBPQGNAJHPKMBNWCVHDFYIALRYILRZXOMWNYNQQXLXXFJSIIZNMMPLATSTZKPJBGPUSZUUXZKW");

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
    msg.setTimeStamp(0.6284238047805416);
    msg.setSource(35916U);
    msg.setSourceEntity(235U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(95U);
    msg.param.assign("SFUWRSLGAADCVUYHSIMZNQJMVSVZTNJGBRLZYOQITDCSKUSPIFPHLFFHQWHSVQKBOCBXNHZXGUTOXLIOXNPAKOUXWMVRUIEDPTYDHJLOMCZDBKCFIEMGAWRKUCFGUDJKMIZPRNQHKJPRAYTEWPJWQAWQIEMHRETMKLCYCCBDCJNIPJYPOLTNXAQGZNEJSROXSFHPDVLSXTEIEGXRUYHBGTWZALEW");
    msg.value.assign("VPDAEBJPLSACTYOBFVBTTOZTXIOSQWLSRQTMIJYUBVWMJGVLGECLNCNFADBBLKWCRUEZTRNONMJZEAVRDJLYLHCPKXSRHSDKEQMDGMYFDHKGIJQGILVSCWXWZZOQZSGSNOCFJOJYEPJC");
    msg.values_list.assign("PQRGDYAJLAXTFPDYWIDDTXTKXKPFGKVNQIPBREAZKGVMRR");

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
    msg.setTimeStamp(0.19920156746675932);
    msg.setSource(28724U);
    msg.setSourceEntity(180U);
    msg.setDestination(13596U);
    msg.setDestinationEntity(86U);
    msg.op = 198U;
    msg.version.assign("LMHSKVCDKZDTIQSTHGFPKTPWGDKDSPMAQBVZBXBDQUKEJXGEEOIMFSUESGUSABNOLMERJGKJQIZDVHWYDWBZUWJSGHAEUBDUEXBMTBMOWISICVFCNZYFKZPJRCYICLIEPAQRFJGFNXQCVTERAZLUOIQTYFHYTROAZXFWLPYLPVCVMFWQUORYJSDHAYDLARJKZONHKJOCNRHGHGMXOXREMLBLNKVVWBXQ");
    msg.description.assign("YQKMYAJPRKGPVCUISPLPQECCRXBDTTHAXFFRYBIADVTFASXTRRWVMHKHLCZVUKBQHHWMYGNGQRZSPBNICNUHFFHKIFIDWIMEDENPOUYJYRVMPAQASLSOXSFIJQZCEBDKFNLJWNELAJNAUAQLUPEQBBOUKWTNDZFSKOOOSDLSXUTGCWGVZBGFTJOQEYHDMWZALZRMJLYXZKKYPZVEITXOWDHHRPGLOXDTEJJQROXJIVGCNGWSEBNVUXYMBGICMT");

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
    msg.setTimeStamp(0.2640283142654689);
    msg.setSource(35671U);
    msg.setSourceEntity(77U);
    msg.setDestination(45594U);
    msg.setDestinationEntity(80U);
    msg.op = 223U;
    msg.version.assign("LJKDPJSUDPWHLUTNISQYXCEIPGRVZYAUNCYCLTCEFJNGWMIUPHFBVMDGTURUQXXEVTWHMXSKKQRNAHOMGGWOMDMINZRSIBKJEECWJPGNKADAXYFFANLPAJ");
    msg.description.assign("HQNWKCUREERZSXTBHCZSLGYNUDQJXEAXTORBEHJKADMKLQLPIWNZD");

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
    msg.setTimeStamp(0.11975563552364998);
    msg.setSource(21127U);
    msg.setSourceEntity(247U);
    msg.setDestination(21059U);
    msg.setDestinationEntity(38U);
    msg.op = 15U;
    msg.version.assign("SYPGHTWMLNQJVWUROAFSXALCSJZTOECQLQQEBTVSXNJBAIPBWAHJQEHABTHCULFNIMYJOLCOMDFFGYHDXKPGCLGGDVNGRVAVWDMJZJMORGUCEONIYWBHEMVIIPWWCEUXUBXNANZGSUFHATVLNPKDZRDSTBAJYIXFNZSBQRHKUFZQSITDPRQRWEXOVFIEDYETPFPWMQLDNOPZKTXHCUMIQXJMLZRYYOCROBKUYL");
    msg.description.assign("ZTJRBPQFNPFLMLHYSUWJFBPVSEKRLATGOROBOBGDRYWGCWJQCPENNXVNCELFWOEDRGIYSATIUWVCOE");

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
    msg.setTimeStamp(0.9067728380474184);
    msg.setSource(9799U);
    msg.setSourceEntity(154U);
    msg.setDestination(12650U);
    msg.setDestinationEntity(24U);
    msg.value = 0.7961216668631249;

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
    msg.setTimeStamp(0.6006806295551196);
    msg.setSource(65479U);
    msg.setSourceEntity(87U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(35U);
    msg.value = 0.5884699345891831;

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
    msg.setTimeStamp(0.7807516538210475);
    msg.setSource(26377U);
    msg.setSourceEntity(210U);
    msg.setDestination(33461U);
    msg.setDestinationEntity(198U);
    msg.value = 0.4271989531160112;

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

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.3536804172761876);
    msg.setSource(40607U);
    msg.setSourceEntity(8U);
    msg.setDestination(27813U);
    msg.setDestinationEntity(115U);
    msg.value.assign("JYHVQVGAQBGNNMBQIUICZWDMSADVDLFFJZWJJGLVRDGDJJCNWIUBHTHNPDFXBVIABQKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.5082196759006099);
    msg.setSource(26518U);
    msg.setSourceEntity(153U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(88U);
    msg.value.assign("RJNKZJUNYSJTXZCTPUKYSXZLYGQDUXTDLZWCVGEESCBXMRSUBHIPRGAGMUOBQVNHUBMEXIUCFCJXDHNXVZKEITGAPPFALKCDDVBNHLGBHWUEDMEZYXUTPTAYWSBFADKRJHRYPCARPMQNVWHBMVOGYOIMVMWNYVVTSJLKSFYQOWWFOSLLPLYAGILDIOCSAGBZIJQWZPZKFRCVBIERRFJHFDCPHQODXWTQGUSJTAQFKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.9874086122139258);
    msg.setSource(34940U);
    msg.setSourceEntity(137U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(83U);
    msg.value.assign("BVJAXNOMSQOHGENAYRHCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #2", msg == *msg_d);
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
