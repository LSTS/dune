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
    msg.setTimeStamp(0.408113226431159);
    msg.setSource(26119U);
    msg.setSourceEntity(241U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(59U);
    msg.state = 222U;
    msg.flags = 8U;
    msg.description.assign("OTCSBFUTVMRBZKHIGWSOQPYJIQDETVOETJPJUOKNJWQPPIDVOYWMXQQZUVYDDLLXGWTOBCSVFWXGVCKSWWHFQXABNUGLNMMHLXCHPYMYFBAELRXKCZGGREIJZYYHIYMBGHBCDANLHREKNAOVDZKFNMJUGCOCNCRUURWXTSMRZCVPFIJAOUEKXLXZSEQHQLYQVKXKURIAZJAHSBDSKVZADBJDTWINPIFYDQEP");

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
    msg.setTimeStamp(0.6824671537209587);
    msg.setSource(13292U);
    msg.setSourceEntity(212U);
    msg.setDestination(63392U);
    msg.setDestinationEntity(247U);
    msg.state = 241U;
    msg.flags = 230U;
    msg.description.assign("NARNSAAXOLGZKKFGMEAWGDJPDWXGESRSWECPOOIICQSXBQOEYTKISAJMHZXZXVWJFINQWYJVNSLGSUVWFVIGBNKZRQBTJTVQMJBBPMIWFDYOYVYRUAVCVITKHXUMLHBDYJYHHYJVGNXUJSFXFCRNYEAFQHPDRTDZNHUGPPOGULCOFHPVFLKYTWHMQCUTBOFZEPRKHTWMTSKUIBGILESDMOTZABCMRNLZIAQXCEWZQCLUPD");

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
    msg.setTimeStamp(0.3309965720615442);
    msg.setSource(49790U);
    msg.setSourceEntity(79U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(137U);
    msg.state = 97U;
    msg.flags = 138U;
    msg.description.assign("ZTPPBDQWANUVLRQBCMHOUTPUUEMYIIZCFBJIREWQUJKOXRBCIOKFTQABIRJVOJMTTOMUIUNIGEFWLBYNQYWMZLOQWMJVBVXSVGGADHBKYRHMZYZPCYCGPNFTCJRQCFBXTHCRBLHKEHJEXXKKGDXFRYVLEPQEFAGNRLPIAIPCDVXSZJTVDZXDLSLLFSNOHDREUZMD");

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
    msg.setTimeStamp(0.973324377932638);
    msg.setSource(17141U);
    msg.setSourceEntity(195U);
    msg.setDestination(32148U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.9089128201029663);
    msg.setSource(21555U);
    msg.setSourceEntity(242U);
    msg.setDestination(9006U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.16679979254855026);
    msg.setSource(65048U);
    msg.setSourceEntity(167U);
    msg.setDestination(33115U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.7457231518711862);
    msg.setSource(8003U);
    msg.setSourceEntity(69U);
    msg.setDestination(28885U);
    msg.setDestinationEntity(94U);
    msg.id = 71U;
    msg.label.assign("WCEWQLULJBZPMTSGEQAQDQLIRHCQCUHGWFBMQXFLLXKTJHPZJGJMUMIETBYEPCIKIDDIZBYCXVTDLVNQIRXSDVKDHWEFTASNCWRYOSQMANFGHQEZPYUDBXPLLGMKIGHUWL");
    msg.component.assign("UKVDPGNKVLZSNPKHCIFGJZGOFNOXSSFFGZAGSYWDZVLSPTHCMAQMWAYPCTXDTZZLQFSYBSMZHESQBITTDRZNXBKBWBLCYYJXPRCWVHRKKFELZJPAYMNNTJMRRZEGIYEQAWTVOWBNQNJLMVXUBGTPJOOETUUIOLWRRBSHFRDCAAUXQYMKCELQGUWTWNRVPIUODODMXFAXLSOJPXAHJIMHHCEHBVKICVJGDECGUKYMEWUUII");

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
    msg.setTimeStamp(0.9832041397752459);
    msg.setSource(10024U);
    msg.setSourceEntity(53U);
    msg.setDestination(51617U);
    msg.setDestinationEntity(117U);
    msg.id = 7U;
    msg.label.assign("GQNEQMBMAJOAZRJUPWRCANBXSOIZFRDQOXFUBLMQMIYPTEJTINGKYCZGTLMRCJDRXXWPSMBSUJNNPEUVDNXZJBCSYYWNKCQHCCGKHFULVZTWRGFDLQLKIAVDJTCQOBAENMJIEFWSUYHU");
    msg.component.assign("UVCVHFZJGQDECAWWPZZBPHEQPJNVXYEYTUKPNWSZBESENRNFIBFAYOCKHTHAODXJCGLGXYIGANIVHCDWHIIDGGGSZAXRUFVJTNBIYTKOHYIHKKONXXBAPRYMWNOLFDFORPLTUKBJAJMTQDLPRVLDCYQUMAKHROMECSUJOEQODDAYNVZUFRMSLFWUMTLKZJLKRDJPVWBQXZBJSBHIQEQZTWTOZWVMETESLSGMCKXGYMQUSFGPCCQXMW");

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
    msg.setTimeStamp(0.29178040505805725);
    msg.setSource(64174U);
    msg.setSourceEntity(147U);
    msg.setDestination(59539U);
    msg.setDestinationEntity(186U);
    msg.id = 9U;
    msg.label.assign("SJSDDERPUWPABANQPYGVEAGYTBILHSCCWZECYOTCKVYAFHKPHBBKQZSHOQYZSWAGSWRVRDYHUNLEJUYVKRDCDTQKROIPIZJTGAQEGQQYFMIIIQWPGRRABXMLFMWMMULLAKZVWFNXVKKIURVCFHMXCJ");
    msg.component.assign("OGAQUXRVIMZCUWZKOTWHRMRCIGTTAQUYEAPWBKOZCPEJFNMWSQLFPYFGYTEQIRJHJYMOJCIASJQPIRPIFBZSFXRHLRAQKTVAPVVUVFBLTCGQDJXXRPSOVWUIBXAAFYYEVYOKGOQKYEHFBGTGEDUXLCKRXGWBNZOWZVSLDLLOZEHUNSSMZSDHIINKBMNFIBWXELQMUXKDOTBKJPDADCVGSXGFHJPNVZNELPMSCBJRUTCMW");

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
    msg.setTimeStamp(0.7553015526837805);
    msg.setSource(14391U);
    msg.setSourceEntity(69U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(253U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.03811367910829233);
    msg.setSource(62537U);
    msg.setSourceEntity(205U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(155U);
    msg.id = 186U;

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
    msg.setTimeStamp(0.5289623028174245);
    msg.setSource(52880U);
    msg.setSourceEntity(140U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(51U);
    msg.id = 226U;

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
    msg.setTimeStamp(0.7195229682453813);
    msg.setSource(31386U);
    msg.setSourceEntity(191U);
    msg.setDestination(9503U);
    msg.setDestinationEntity(186U);
    msg.op = 84U;
    msg.list.assign("XPPWNTCZOMBKEKGCRCUAHYKSPFNAQGOZUHFPLOCGGSVRNBEAWGIEHTJQPCBYQD");

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
    msg.setTimeStamp(0.4860653285368709);
    msg.setSource(45864U);
    msg.setSourceEntity(191U);
    msg.setDestination(3709U);
    msg.setDestinationEntity(195U);
    msg.op = 30U;
    msg.list.assign("LEQQBQHUWEIRIUGJPZYKDLJPYIXDTAECTVZSPDFHSRRGSUAQQBTNVFDXTCJRLNXVGMTPQAIPOISJAFRZJCZUDGWLPBDSTNYGW");

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
    msg.setTimeStamp(0.7521758541189637);
    msg.setSource(16941U);
    msg.setSourceEntity(58U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(180U);
    msg.op = 131U;
    msg.list.assign("ZBEDAJNDELEXFRAQQCBJXRCOAJRDNVUFXGUPIRYVXOFDWPPYKEOLFRALPKAYWTNSXUMAKDLNX");

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
    msg.setTimeStamp(0.7826719868700365);
    msg.setSource(7709U);
    msg.setSourceEntity(161U);
    msg.setDestination(1565U);
    msg.setDestinationEntity(78U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.8826233235236376);
    msg.setSource(16245U);
    msg.setSourceEntity(174U);
    msg.setDestination(9045U);
    msg.setDestinationEntity(201U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.6890304061251654);
    msg.setSource(54818U);
    msg.setSourceEntity(22U);
    msg.setDestination(49958U);
    msg.setDestinationEntity(154U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.4701158548300606);
    msg.setSource(34895U);
    msg.setSourceEntity(160U);
    msg.setDestination(4602U);
    msg.setDestinationEntity(148U);
    msg.value = 251U;

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
    msg.setTimeStamp(0.1957697807618659);
    msg.setSource(36713U);
    msg.setSourceEntity(89U);
    msg.setDestination(55976U);
    msg.setDestinationEntity(210U);
    msg.value = 20U;

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
    msg.setTimeStamp(0.48372026429104387);
    msg.setSource(32295U);
    msg.setSourceEntity(43U);
    msg.setDestination(50604U);
    msg.setDestinationEntity(55U);
    msg.value = 17U;

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
    msg.setTimeStamp(0.27319128323966935);
    msg.setSource(65047U);
    msg.setSourceEntity(231U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("VPGJRSBHINKFMNKQ");
    msg.message_id = 5964U;

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
    msg.setTimeStamp(0.3807325951272854);
    msg.setSource(242U);
    msg.setSourceEntity(130U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("IRCCMZXFSUEVIQJYRJRVHZXQYUAOISPGBPQYHELGEAOIQPTUGATMXLYINNEHPQOUMWNBVUSBNNOWZRGNDVDPFSXZDGLKXQCTRGIRKW");
    msg.message_id = 28995U;

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
    msg.setTimeStamp(0.3483482685484731);
    msg.setSource(5465U);
    msg.setSourceEntity(121U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(22U);
    msg.consumer.assign("OREHDFYZGJZTBTGGHLRZIRHTTWXVVGJUGUZRRAACWNWSDWSXVLKMUMIJODOXVUAXZCNQPQMYQEIUQBWNVBRLIEQXYYICMYCDMKKAKSBQVPMNFHAZTDPYEMKHGTTSTAJWQJRNDVHUGQNOIYDSOLYRGOPVEJXJGFWFULEUGAPPSEMLBBSBPHWIALCO");
    msg.message_id = 53544U;

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
    msg.setTimeStamp(0.7164548926619274);
    msg.setSource(50313U);
    msg.setSourceEntity(151U);
    msg.setDestination(51659U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.015857357186727206);
    msg.setSource(60597U);
    msg.setSourceEntity(182U);
    msg.setDestination(59319U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.6282255360353315);
    msg.setSource(25214U);
    msg.setSourceEntity(5U);
    msg.setDestination(44913U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.11905137440704672);
    msg.setSource(38280U);
    msg.setSourceEntity(253U);
    msg.setDestination(1847U);
    msg.setDestinationEntity(27U);
    msg.section.assign("QXFYAHXBDTUXIDETCESKYNJYIRTLRUMQEFBBVJWUZVJOHMWZFPXXTJECCDJZZJSCAITCZMGUNSIEZHXLIDFVYZHWBSPAAAQUUGNWUEOSNHMKRSIVQELKZLDRLTPGDXYOLDHIVPDRFYJWXWFPGAZNBEGBIGTLMPXST");
    msg.param.assign("EPLMDQYHDGHNOUCRLAKEWWNQNJJPVQALXYECFNHTXJYCLDEVRXLGWUUM");
    msg.value.assign("WZMRGWMYRJTFAWWCJFEPJLIHVZAHEFCIYIFGMGZBRICTTQGTXQBXHLKDXWQUIZQDZOWJGPMLAMQJHRFOKSJSCDOHMAUKGCJONOWAWCQLHOKOAEVZPVDUKYAJXENZPYYQUIISY");

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
    msg.setTimeStamp(0.7416880430437833);
    msg.setSource(24564U);
    msg.setSourceEntity(5U);
    msg.setDestination(9011U);
    msg.setDestinationEntity(247U);
    msg.section.assign("MYYRLNUCXAQKMVDAEORLCUBIAIFHOPLNDFFSREJXHIZPJXLHQUVWIPXGCEDAAAKWEHRGZUQIWNNWQLLYVOZNMVNDBHSMSYTSPSWQUKEXGYAIRSYXBMYSUIRBCZEMKKJBWTMNSBGTBCQHPPNZUTZPVZAZBKTQDTKWEJCXOIRFGHS");
    msg.param.assign("VGUGOAQXOWRDUCORNLBETSNENRTJSIQRLUNAIZLBFMTMJYLHDCHHLQMINWESEETFTSWEGCPYUASACBCVUXYJFAUYBXRSKAUWHQWHKNPFMLSHKFMYOPGGBMAZGTBKOJVJGKTACBKFYQDDTDYYBRZAKUUMYBEHIXRPFPJOTZVSCFSDXLIIVUD");
    msg.value.assign("NWAFLHSAMSYSGZKEVVNQDRWLSPMTLCGZ");

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
    msg.setTimeStamp(0.6351744845625484);
    msg.setSource(51955U);
    msg.setSourceEntity(79U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(149U);
    msg.section.assign("FNOYTVYGTNANYSHVGCAVXECZZHCANOCWHSOEFVGCFBYDXJDWPOETZYEARGIMLQQBIVMYJOHPKVWTVYWBEROMZBZQRNVKAHRRSIIMQUBGPXYBFMXACEDWUPTQJZGFBBANKKCUFHLDZWIRHZKQJRLPMQOHJYREDEBFJLAQAUQIPGWOBDCUZRLDNGXSRLTQWJK");
    msg.param.assign("JMVYQWJENEONKHRRRRIHDKGXPZGMVATABLPPGCSCIJGTXHGOYCNKKIZSCOOJCFDBSGNDMYFPDSFUCLJEZWCZKYBHSEIZTTUGWRQTOFKWGASXWT");
    msg.value.assign("BOMDHDGTRVSLAAUNPUQSFTPGLUKEWEDXVUOLCCYJNMIOAQSDPZGVICJOKYJSPQZTGTQYLZKFJCOTDUQVNUGRJMVVCMEKFBENMIXNBQTDIERFHDCVFPTMPWREORYXCIJZEYWYHAKOSWZVNSADARLNBIAPSVRQGKWZMQTWCUMZHGWUTDIXYJBFLMEXIHIHRYXBNGZRCOXNBQUFCDLOHYAJONBKFZAEVXPUIA");

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
    msg.setTimeStamp(0.9851620227515129);
    msg.setSource(59533U);
    msg.setSourceEntity(65U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(19U);
    msg.op = 221U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TXYSINLCNTXSBXEQGTM");
    tmp_msg_0.param.assign("XQZSDIQYECIFYKRW");
    tmp_msg_0.value.assign("ONXBYYEZWDIIQNPRMTFOXIGPRJRITFLBVXVBWVNUVHNMIPSIUOU");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9953243376957371);
    msg.setSource(20128U);
    msg.setSourceEntity(102U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(56U);
    msg.op = 243U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("HAOTIBWYDAWBIEYWAVUDLWMYXQUGBKBSTXIQUDJXWLMHPKFULRTZVRTHHBINANDCXCUVWILJQGGVQLBFNVZEWNHRRZIODMSKCFNBSRJZJITLQARHQTJODMHAAMCEVPEMNGCEFHGRKFNKKCSGEAKPMNLV");
    tmp_msg_0.param.assign("ORQNFBGLUBSCDWSYDFXXWCWFEQQWZDVUIIKBUMWUBVMFMUOBOPSUUTHOPMJQMAJMNZKJXRTJJQDCOOMWBVJFYJGCEQYLTVHSATFRLKOKYYIYWNLFLPTPWXNGDAPWTZGZLRNAOFZCDPMLAVTWPUAXYKYQDFPEKJSAOVHEUBCGIRHVJPRXSABBIVYMNXTJZHZG");
    tmp_msg_0.value.assign("ONFMVAEWFBINKQTRVWXOJUFTPCVVLUYMKUSHTIZBDRVYWZCLQJRIBRVGUYSLKCXJGGPDZLEHMPOWEYVLNZCXLSYXGAVFAFEPFJVSDAIOQGXBDBQOZYCOGLBBWRHGHFMRQWDQOAHGLSMEPEUZEIXYBKGOBTTDQNCFTRMAOMDOLKKSIGYSRT");
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
    msg.setTimeStamp(0.25340736607945613);
    msg.setSource(24787U);
    msg.setSourceEntity(59U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(156U);
    msg.op = 10U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QFPFYPKKCGCORAZRBANFRLWBLTTYDJJTSKPJQTLOFAQIGXPKLDVBXRRZXLKQDAEGHIFQICKYZANFLSAZMWIHLRHMUVPJGENRNXMCMOKUQPMQDQTNNYFBIEUGBNZTQDHDESJCTOMFHNIVUPNNXZMSVOGPHRAHSHJJXYHUJWWOWGUALUEDGVBYPGAVXLCCWZYRICTSYWSJSMGYAZVIEUTKUWSEJPVLOEFKCZOM");
    tmp_msg_0.param.assign("JDFLVCERGDLXXTKMYAMHDGVNOAZIYYBUDGBZYCYFHWQIICAZKFP");
    tmp_msg_0.value.assign("JNRZYENHODXYFQJILSIGAYHXUDSGVWWUZMWGRMVGYXQSQXSDZEXEIPAJXWJTPDOGXLFUNCYXAIIDILLZFAOCKLE");
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
    msg.setTimeStamp(0.7377398086147268);
    msg.setSource(29207U);
    msg.setSourceEntity(229U);
    msg.setDestination(33729U);
    msg.setDestinationEntity(166U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.5644895973907939);
    msg.setSource(40187U);
    msg.setSourceEntity(88U);
    msg.setDestination(47816U);
    msg.setDestinationEntity(201U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.9326005648871779);
    msg.setSource(34009U);
    msg.setSourceEntity(176U);
    msg.setDestination(55067U);
    msg.setDestinationEntity(239U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.736641520235937);
    msg.setSource(18702U);
    msg.setSourceEntity(214U);
    msg.setDestination(49385U);
    msg.setDestinationEntity(219U);
    msg.total_steps = 229U;
    msg.step_number = 11U;
    msg.step.assign("FCFTFAQSAFUQTVNUOZTGZTPKRABRSGSHJOQSGTXGDQVHNXDELMBZLDEHVLDVBIYXDJKWZJAGEOSXGQCPJVLAUOKNIUAUKSUXBNWPHUYZCMEGERHWVYXCZZRKRLPTOJNQFIJKNBBWDLMAQVVRPANMHPLGPCSOSQYMCZBKHGOFWPCMBAOTJSLHVFEENIMDCWMTIKEWUVYJIQOIXFETYKTIBYDSFMYRHAXIUZDHDWYQERLZYXNKUJRW");
    msg.flags = 229U;

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
    msg.setTimeStamp(0.406256821450643);
    msg.setSource(59601U);
    msg.setSourceEntity(191U);
    msg.setDestination(42589U);
    msg.setDestinationEntity(139U);
    msg.total_steps = 122U;
    msg.step_number = 94U;
    msg.step.assign("SRWWOOQCYNJPTKSJSQYUUYYZCBMKXYRYGNUGFBBNKCAUOMLKLSBLULPRSYKFVMGXVSBIPOEZAJPJWJHPZLBMHKHRHOQHNFKDLVQNYCGDGDNPSALMSMPOXVNCXKTVJUXTBZEDZWEECEOCXQPOWFFEVADXCVMXRQSBWMQJZEETHG");
    msg.flags = 238U;

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
    msg.setTimeStamp(0.09246908365751805);
    msg.setSource(31866U);
    msg.setSourceEntity(246U);
    msg.setDestination(32574U);
    msg.setDestinationEntity(178U);
    msg.total_steps = 129U;
    msg.step_number = 209U;
    msg.step.assign("RNNFXMKKUBRXFGILOZBKEYLIGAUMIPZAGLZXULHQVJNKDJGJPWOBDYLNFNAGWSJSMOVEDXHZCLDTQKDDGSYBYCPFCJAZTRINFSJCJMGSENCDXUMODNOUBKPVWASRHWPFMHCSTIWUEZYVKQZMHOPRTXVWTYFIEOWUHYCTDSVAZEKQGUHTQVRHWLEZMOLSNFAZQOQRQHVQTJAYFBMU");
    msg.flags = 86U;

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
    msg.setTimeStamp(0.010361621175011493);
    msg.setSource(59083U);
    msg.setSourceEntity(150U);
    msg.setDestination(41668U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.3151373896920885;
    msg.lon = 0.6821042580261988;
    msg.height = 0.28035128433944634;
    msg.x = 0.8965834492130074;
    msg.y = 0.14307800608290944;
    msg.z = 0.368309311924952;
    msg.phi = 0.09557696547507222;
    msg.theta = 0.6366401591444429;
    msg.psi = 0.517343856258353;
    msg.u = 0.23474538265216505;
    msg.v = 0.597919370457774;
    msg.w = 0.3357562275161652;
    msg.p = 0.710617164493494;
    msg.q = 0.24835553152749978;
    msg.r = 0.08393937231443371;
    msg.svx = 0.11575276602619433;
    msg.svy = 0.9289484137799097;
    msg.svz = 0.0295578623450935;

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
    msg.setTimeStamp(0.7191263992583543);
    msg.setSource(7109U);
    msg.setSourceEntity(174U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.8529736847982913;
    msg.lon = 0.3999231239369666;
    msg.height = 0.8086443833400441;
    msg.x = 0.7237190886546537;
    msg.y = 0.0013588533123548574;
    msg.z = 0.439955134112364;
    msg.phi = 0.4957964629328845;
    msg.theta = 0.6465815028384154;
    msg.psi = 0.4843596640964293;
    msg.u = 0.4082540913252495;
    msg.v = 0.07922487745839157;
    msg.w = 0.5638360641643577;
    msg.p = 0.3410258380387524;
    msg.q = 0.8653857516648193;
    msg.r = 0.731609403865837;
    msg.svx = 0.05609847650971156;
    msg.svy = 0.6700407958510177;
    msg.svz = 0.47501619689797525;

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
    msg.setTimeStamp(0.7669541700242878);
    msg.setSource(33504U);
    msg.setSourceEntity(186U);
    msg.setDestination(14655U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.03533752522112288;
    msg.lon = 0.029104467493830888;
    msg.height = 0.01933937862878865;
    msg.x = 0.64090256680751;
    msg.y = 0.17887631727479814;
    msg.z = 0.9702900275527482;
    msg.phi = 0.022573525785537174;
    msg.theta = 0.2862100698806105;
    msg.psi = 0.0016948381083604636;
    msg.u = 0.27039989938075326;
    msg.v = 0.36188433275629384;
    msg.w = 0.3941147640783438;
    msg.p = 0.3408000870320895;
    msg.q = 0.7026373178219099;
    msg.r = 0.8958053112570984;
    msg.svx = 0.8352857088166827;
    msg.svy = 0.9778017758041423;
    msg.svz = 0.6638056390435682;

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
    msg.setTimeStamp(0.2006313185593207);
    msg.setSource(59983U);
    msg.setSourceEntity(130U);
    msg.setDestination(8532U);
    msg.setDestinationEntity(244U);
    msg.op = 182U;
    msg.entities.assign("YQZMGNYNXIRVTYPQVCXOQVUQFAIBGJICCVQCTMYORNWDJHNWAXEFSJIOOWDDZBPWKYDBNHFSWLYXUMRHNKHPRETYMJNDVFFRHOSULVKLTZQLBQSKGJLYEYEAPTKZJGDICU");

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
    msg.setTimeStamp(0.571079407097589);
    msg.setSource(25858U);
    msg.setSourceEntity(65U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(27U);
    msg.op = 205U;
    msg.entities.assign("VAUVCGACGTSIVFSJVCRFAIZHGTGQNWUCWNAVPHPMDGIELLZRSDKEJEZTTYXRTMFBXYNGRNWSHOCTJESFXBWOTDPFZGKPKYFHQLKVHRZONRYZYAZKMTLJNIDDHKYXNZTMBSDWOMJXCBIOMDZMQBQIPFJQFEOPMEUOLBRPMLCNEUYFICUWAGPHLYBCXHSWRULIJUPDLLZ");

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
    msg.setTimeStamp(0.32590771527754225);
    msg.setSource(14588U);
    msg.setSourceEntity(93U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(235U);
    msg.op = 84U;
    msg.entities.assign("UAPYAMDCKJWDVKGKRWVJXVGEGZZTHSXJDZZCIWURUYJNSFHRBYQGOL");

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
    msg.setTimeStamp(0.41761848286267855);
    msg.setSource(24694U);
    msg.setSourceEntity(191U);
    msg.setDestination(33391U);
    msg.setDestinationEntity(215U);
    msg.type = 118U;
    msg.speed = 18612U;
    const char tmp_msg_0[] = {14, -68, -98, -53, 86, -74, -61, -54, -72, 82, 31, 40, -79, -101, 0, 47, 99, -25, -119, 23, -111, -82, 54, -85, -89, 47, 0, 35, 72, 27, 75, -111, -126, 24, -42, 14, 0, 63, 70, 75, 126, 61, 34, -79, 81, -105, 47, 43, 77, 125, -120, -51, 65, -103, 99, 9, -122, -45, -59, 17, 37, 81, -69, 58, 87, 11, -66, -49, -23, 126, 0, -81, -65, -13, -111, 92, 84, -69, 76, -121, 32, -89, 22, 113, 31, -87, 20, 84, 12, -109, 0, 25, 61, -36, -87, -93, 90, -34, 84, -17, -115, 50, -85, -12, -79, 105, 29, 79, -45, -70, 95, 98, -89, 84, 102, -29, 30, -23, 15, 50, 108, -97, 111};
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
    msg.setTimeStamp(0.2502157607377675);
    msg.setSource(39078U);
    msg.setSourceEntity(76U);
    msg.setDestination(20166U);
    msg.setDestinationEntity(41U);
    msg.type = 36U;
    msg.speed = 40869U;
    const char tmp_msg_0[] = {25, -120, -38, -83, 54, -53, -13, 125, -95, -70, -39, -106, 7, -62, 54, 98, 18, -80, -45, -120, -42, -40, 40, -45};
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
    msg.setTimeStamp(0.9224759597974432);
    msg.setSource(46142U);
    msg.setSourceEntity(9U);
    msg.setDestination(55256U);
    msg.setDestinationEntity(136U);
    msg.type = 169U;
    msg.speed = 48134U;
    const char tmp_msg_0[] = {-4, 84, -44, 61, -57, 42, -116, 43, 84, 69, -99, 18, 48, 64, -117, 32, 32, -33, -39, 99, -37, -16, -39, -30, 61, 102, 18, -46, 126, 32, -5, -116, -71, -84, -102, 64, -85, 89, -56, -8, 55, -96, 11, 25, -39, 40, 67, -80, -51, -59, 35, 42, 12, -72, -21, 22, -4, 44, 13, 72, 114, 78, 22, 44, -26, -84, 112, -1, 122, -46, 91, -45, 52, 106, -66, 74, -13, -40, -112, 123, 11, -16, -100, 120, 0, 76, 116, -70, -71, -103, -75, -108, 32, 48, 31, 26, -40, 62, -51, -19, 33, -32, -45, 16, -11, 90, -13, -11, 15, -33, 84, 104, -94, 123, 85, -77, -66, -87, 12, 87, 7, -3, -34, -9, -86, 113, 21, -82, 18, -19, 92, 53, 62, -94, -4, 88, 46, -33, -83, -36, 105, -106, -65, -25, 79, -120, 16, 88, 8, -34, -31, 112, 78, 14, 11, 125, -31, -15, -21, 64, 33, -91, 55, -74, 59, 8, 125, 7, 73, 111, -19, 13, 72, 92, -76, -17};
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
    msg.setTimeStamp(0.06810036610851122);
    msg.setSource(55344U);
    msg.setSourceEntity(168U);
    msg.setDestination(19728U);
    msg.setDestinationEntity(140U);
    msg.available = 3127854965U;
    msg.value = 201U;

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
    msg.setTimeStamp(0.7836856650977618);
    msg.setSource(2900U);
    msg.setSourceEntity(10U);
    msg.setDestination(22233U);
    msg.setDestinationEntity(139U);
    msg.available = 2696974437U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.9954212048243252);
    msg.setSource(44482U);
    msg.setSourceEntity(95U);
    msg.setDestination(3747U);
    msg.setDestinationEntity(159U);
    msg.available = 3504213024U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.3850237059541769);
    msg.setSource(37078U);
    msg.setSourceEntity(118U);
    msg.setDestination(18347U);
    msg.setDestinationEntity(122U);
    msg.op = 239U;
    msg.snapshot.assign("VTLYTYBPVARHWBPUKYZZUREJGCCKKMRAXQHYELUCZVSBBKVNMPLGCBQMSIYMOHDQHANEVUFXXZQASUWFHXWVZEMNDRORDYOHCTLETGW");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.8035416255978051;
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
    msg.setTimeStamp(0.2774601413412746);
    msg.setSource(47204U);
    msg.setSourceEntity(40U);
    msg.setDestination(55578U);
    msg.setDestinationEntity(79U);
    msg.op = 251U;
    msg.snapshot.assign("RZTVTHIGRLOBKBNGSVYOCEFUAHKBYJRZZHNSOWDKNBVAWKLSPWAQIGENIAUOMBVLYVZAQCGVOLFIMZZFFTDUOCJLDTQPXRDSMPPACRDGTINHYXLLKEJWBHUNHWQTIFURXTQBEZGJADVKMQCICEQVZWTKXBJSMYUQXDNRDBSZEDLILGHMPAGFPYEUMGMFCDMSIORKEFYJVCRHQPJBFSXFNZWXMYHYYUUOVJTUJKPXGHLXR");
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.9669889939981418);
    msg.setSource(1927U);
    msg.setSourceEntity(12U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(153U);
    msg.op = 213U;
    msg.snapshot.assign("GFRCILGWRZQSAUTSCQPBLKOUNZTFFMXYHCIFGGWELIKCYFIPWTXTBDQAIOADHENAKUBGVKXEMYKQULSMVICJRAXFRKALXYGZSTFDLMVQLHHGGHROOPSOINSYYTYLQMNEUBBMPIJWDJABVCPSXDUDPJGMRAJORRQNYZHXFJZQENNSJXPISPWCUTKNVRWYJZBTZTSYKCODLZDMAWUVOETJDVWWNZH");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 147U;
    tmp_msg_0.entities.assign("XVEVVEWDLMBHDEVYYJTZXWROCNWFCRSMWXSNIOCSDJ");
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
    msg.setTimeStamp(0.8083043497359165);
    msg.setSource(11602U);
    msg.setSourceEntity(145U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(1U);
    msg.op = 166U;
    msg.name.assign("SEESTHLGDMP");

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
    msg.setTimeStamp(0.6616059392525696);
    msg.setSource(49008U);
    msg.setSourceEntity(165U);
    msg.setDestination(30144U);
    msg.setDestinationEntity(144U);
    msg.op = 135U;
    msg.name.assign("NXOPCNLIGIMYXATWSFUZLFPBNJMGSXKINDJJRSFHOUBQEOQBKTXCFTDIOPQHQEUHASRIUCYOAGRKJKRRYVHMLTDQFZPFVKSZZUUCYPPSMWHIUYVLTDVGZOMWDK");

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
    msg.setTimeStamp(0.20286390120999853);
    msg.setSource(26724U);
    msg.setSourceEntity(207U);
    msg.setDestination(26311U);
    msg.setDestinationEntity(68U);
    msg.op = 74U;
    msg.name.assign("HJONLUTUKJWFFRAXQJKOFRUWOMCGQVVDFODCAKDYWMEQRBXTRJTWMRACWKZEEBTLKDVGJGMDITLQDCUQZZXOWYIGOCKVXNRLPXOVAUBHQZIUKZMSDHJZIFGBBIBDASPWLUQYMNMKONGKMRQBJMRIFCVIXYFLQHBVCUOSAERPBTLDJIDIWGSUTPSJHTXNREHWCPEGEGSAYZZANHVZKAEQMVPCPNYUFFEYYP");

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
    msg.setTimeStamp(0.08086414508796647);
    msg.setSource(62834U);
    msg.setSourceEntity(188U);
    msg.setDestination(32266U);
    msg.setDestinationEntity(162U);
    msg.type = 133U;
    msg.htime = 0.9679204351321735;
    msg.context.assign("LIFUVDAECQYXHMOACDRYOVDTQOGZRFTBAHNNOBRTYICHVFMLUOGIGQERHAYPMHPWBRNNJVIIWSJPPWESSKXADUHXKZBLAMJZAMJXCTQTFJOBIJZTLICXVKKCQQDPWENCYPWNDTWTXCMNIBFZXFJYPQLMMGWOGBPQEQLSZS");
    msg.text.assign("KWYWFKMATRVPICANBKGDOHAJHZUKN");

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
    msg.setTimeStamp(0.2947196301674365);
    msg.setSource(60372U);
    msg.setSourceEntity(199U);
    msg.setDestination(29572U);
    msg.setDestinationEntity(147U);
    msg.type = 208U;
    msg.htime = 0.017008455598353178;
    msg.context.assign("UHTUGEWEAHNKOZXRGKEZMTNTTRQPMBVVYHFNBFQFNWRLURGFUWAMBOWMIOZOSMJOJEZICCLJHQVABQXTHBVGZOQFPXIDFPUYHIFEEDCXGMGVCVAAGJTWXNMWYLCHDKADTQEPSYMXQKSZJWNSWRZKOQSBOJPHQSVTUCWLNRR");
    msg.text.assign("IXOWMEOHXUIFVPFZEXRLHXLAALNFRNOPGQYGUWBAYERTTNKSTABQZCSHLFWAUNQMGSELXDLZHPWUBOREKABMCBWKDGCDDKRZHVFWLLORPAKNTUUKG");

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
    msg.setTimeStamp(0.6670534520765383);
    msg.setSource(22022U);
    msg.setSourceEntity(231U);
    msg.setDestination(57077U);
    msg.setDestinationEntity(121U);
    msg.type = 3U;
    msg.htime = 0.07778570395579198;
    msg.context.assign("DRFDVBXTWPJHAHNAITELGRPZVUZLCUDEPFZVVWQKCCCPBTLCUYFLIBHGXSPHCTPDJMCKTWRMDYFKXPQUBYKJYQICXFWSBIWOEQFFOWROVRGQIJDPJJSZYGOOUMNESNINUEZKZAMTMSIWLAVGXYJMBNQHYGALKN");
    msg.text.assign("ZOPZDQSQGKXQOBYYMUXVTVLRSUZPWIEMSHFAHMXCWYONHKQGWDYPUYIDJFVLBIWUISJGOESDAXRRIEQFLNHKBPJIJPYCVEBOBPFAXZBHWBQSDYTSSTTZUHXHMCMAVZTJXHUMAZEUEKODAJRQRNFKJTZKLFU");

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
    msg.setTimeStamp(0.25752249516874104);
    msg.setSource(36720U);
    msg.setSourceEntity(153U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(147U);
    msg.command = 218U;
    msg.htime = 0.7598319443689066;

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
    msg.setTimeStamp(0.008485596293519193);
    msg.setSource(49211U);
    msg.setSourceEntity(200U);
    msg.setDestination(29128U);
    msg.setDestinationEntity(245U);
    msg.command = 100U;
    msg.htime = 0.6483461681393284;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 121U;
    tmp_msg_0.htime = 0.5083820174187662;
    tmp_msg_0.context.assign("CLLFJVARLQFITHRKGIPHBQLZWFJPGJBKQZCNMVEKAOMWDMYSGRXDZQLMOUBITKIMLOVTEEAPUWZMKJYOJEYLHPYFCORWONHTDBIQTFWVDNFWCWUFYSBZSZJIVAYOGYOKDTXMBGCGJWORKEBQEHECV");
    tmp_msg_0.text.assign("HBNMUTOLDOWHREMOQXTRZEUPWGVPGCCIFOQDTNTYQLWOFIGQFNKDKYNWESUATVIBTKXMQSQMDIBPPTSHBBICXLEFSYEHAJWXJZMJFHBIAZUWPVQLQTDWZXAJZZVSEEDIUYJNOKCAGHBLPUIEAFXOSLSFWLNZYNZHMRLDKSOFCVXMZBCEHKYSXTIKRCRUAEAPJGWPJIQNKRJGNVLCSOXPOUPVLRYYRNGWBJGXYHAKJDMMYCVHAGCRDTFG");
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
    msg.setTimeStamp(0.835062934876789);
    msg.setSource(22575U);
    msg.setSourceEntity(25U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(191U);
    msg.command = 229U;
    msg.htime = 0.09859340813372897;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.htime = 0.21833832194689862;
    tmp_msg_0.context.assign("FTOJVKRRGEYMVCCWUGENUKGLDYZNOLXTJYSPOHXLZHSSCDJTYSDLKEBWKFLMJHJNIIYFPBQCERONCOBIPVKYSAAIMVDMYGBMKNEXXLMRNOPUVDZ");
    tmp_msg_0.text.assign("KYPPLFYINTWSHGYHLZQBBZGNHOVXTOUDRSMGFCJPLYLXSEBEHHDWXRNEFUCQQAQDVYBNWCZWVQOZCVRMFKJWUNKPSWRXBJEYZGISJAOUKWGJWPTEVV");
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
    msg.setTimeStamp(0.4940799424089106);
    msg.setSource(64636U);
    msg.setSourceEntity(14U);
    msg.setDestination(20687U);
    msg.setDestinationEntity(89U);
    msg.op = 183U;
    msg.file.assign("WWTUWHMOKHSTBSPELNLAFPQHVGFIDALKKZIGSZVANTMJCLBLFOGHZQMXVXNYARZPXHOQMHULUCTYDLCGXURDOUBDKMKNSJIEQBBDVWUOGUWEQXASQCDAWFXATPNNTCOVYVHQVWAQBII");

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
    msg.setTimeStamp(0.357385184135363);
    msg.setSource(2063U);
    msg.setSourceEntity(152U);
    msg.setDestination(56196U);
    msg.setDestinationEntity(172U);
    msg.op = 205U;
    msg.file.assign("XZGMOBTXKVZMXNDTJPUNLVKLYP");

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
    msg.setTimeStamp(0.6628736773451054);
    msg.setSource(9221U);
    msg.setSourceEntity(36U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(211U);
    msg.op = 111U;
    msg.file.assign("KGPOSEZTIBKYMTIAMRFZODIDUIRIEKAJFBWUOLWORBZLQWVUQLDUSDMTOIVHCJGJSHBWGJQTYAWNJXPYMVYFIROKUPPNQUXL");

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
    msg.setTimeStamp(0.9528657568987224);
    msg.setSource(1203U);
    msg.setSourceEntity(221U);
    msg.setDestination(16443U);
    msg.setDestinationEntity(105U);
    msg.op = 202U;
    msg.clock = 0.432695951140169;
    msg.tz = 35;

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
    msg.setTimeStamp(0.5294590314146806);
    msg.setSource(20347U);
    msg.setSourceEntity(206U);
    msg.setDestination(60416U);
    msg.setDestinationEntity(71U);
    msg.op = 142U;
    msg.clock = 0.06302117213445968;
    msg.tz = -68;

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
    msg.setTimeStamp(0.6037440704014829);
    msg.setSource(33623U);
    msg.setSourceEntity(24U);
    msg.setDestination(50757U);
    msg.setDestinationEntity(6U);
    msg.op = 202U;
    msg.clock = 0.6002132331086769;
    msg.tz = -101;

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
    msg.setTimeStamp(0.6293456333226648);
    msg.setSource(53225U);
    msg.setSourceEntity(59U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.2577355357780251);
    msg.setSource(24007U);
    msg.setSourceEntity(247U);
    msg.setDestination(12182U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.8193674377962487);
    msg.setSource(4347U);
    msg.setSourceEntity(148U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.9934920504941988);
    msg.setSource(23431U);
    msg.setSourceEntity(79U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(248U);
    msg.sys_name.assign("ZGPIJUEVBINHIRDMOHYEYPTFUQRDEYQXOSBYLTPPLLXTYENKAYDTNJXGZEGLDADPIJVOERGOVSWASKJPXBCZKJTJANBRXLXUXTCBDBFKGPYBDJAMG");
    msg.sys_type = 39U;
    msg.owner = 49070U;
    msg.lat = 0.6531925037005063;
    msg.lon = 0.4370530903831735;
    msg.height = 0.34295515559849565;
    msg.services.assign("USAWGKYHSPUNZOWNEJMLHVNOWLOFATXICYEVUJGBXNGKKYXSRMWLNGNGORMVLGQULTDBLSHNDPTXDSVBYWFZTCTKPVXDOOMATDPMIWRYXIPAICTPSJJJUKKQBQGLJGBUMWIASFMZHCNSLUEACDXXDTBPFRUWJBAOFQJFRPZABEQOTEHCDVYGHI");

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
    msg.setTimeStamp(0.35106354198545087);
    msg.setSource(1005U);
    msg.setSourceEntity(10U);
    msg.setDestination(8091U);
    msg.setDestinationEntity(240U);
    msg.sys_name.assign("OAZOKNLYCVSNTJGDDCDWAZSRJXIVASWWVRMFPEINJPKDHJIVHIPKAZBRXPTOBMTUYWXUKLPBVGUWUECUSQRUXLGAYMHACLIGIOWMTGFHBFCLUPHZILCLUREUGNOZJEDSBTXZUGKEIHNZJXLTVLBSVSCRKABWXKLNDYRDQZSFAMTNMOAFJFGNNJHCBWOMYMVFQNATIRSEQEPEJQPPVHVQQOFXHXCBXRQZEWGTMZHYOYMKQCKTB");
    msg.sys_type = 224U;
    msg.owner = 33626U;
    msg.lat = 0.862311999999775;
    msg.lon = 0.9045596302469382;
    msg.height = 0.12809265065202968;
    msg.services.assign("GYFCDNKTOYJWKXIVYSFVMDERYHRE");

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
    msg.setTimeStamp(0.9453745418992756);
    msg.setSource(23163U);
    msg.setSourceEntity(226U);
    msg.setDestination(24288U);
    msg.setDestinationEntity(16U);
    msg.sys_name.assign("PFANQRHAGNYMUPKLEAMACIJIXUYNLLDGTRSERRPXTVGTRVPAKJHFUOVOSUMZPDWUCXVVBJBADCFIQWFWOQERUQCMSMEXAGZNQJOJLHEISZLNDDHNAYNETAIGIZMETLWTCWFDXJZOGYJDQKZYEHOQBNFIZFGVBVWKAKPZYTORDTCCSXHSKSSSDUHBOCNBTYXMRXJPURXKSKUBJNRPOLBBHGHMMMITJVCVIL");
    msg.sys_type = 103U;
    msg.owner = 55418U;
    msg.lat = 0.41017774554951403;
    msg.lon = 0.649695457857046;
    msg.height = 0.3780949746339365;
    msg.services.assign("ILKNDPIBZGQMWZKNZWAMVTMBYDGGVOQTHOYHBEWKDLKWIDUPLZUDXCUHYZCCOSTIRTLXEJAETQLETSZMUGBEOIDJMGXZMSNOPUYFJQCQIFTLPIVGXJWYGAKAKCWFWBRFHAVVYEVNSGRZSGURENXSTHRSBAOSYWKPOUMPIJXYARFRTQLBJFXYNNAVMCNLCRHDHSCJAPUXQLJFTQEXWVOMUZBVPSEPHC");

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
    msg.setTimeStamp(0.4456363571650477);
    msg.setSource(19912U);
    msg.setSourceEntity(154U);
    msg.setDestination(9907U);
    msg.setDestinationEntity(249U);
    msg.service.assign("QQQEVXSQJAOCXYNZCPRJDCETZQFARPFSDJUW");
    msg.service_type = 212U;

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
    msg.setTimeStamp(0.1638831747688454);
    msg.setSource(41933U);
    msg.setSourceEntity(116U);
    msg.setDestination(29138U);
    msg.setDestinationEntity(251U);
    msg.service.assign("QYXIVMHWZBRTNLJQKMAOUQZIVDRBMCPCXMOORTUVGAHCDYZPLGILVPCFRTUHZYETWJQDVMAYHSNWWAEOKZXANTSFDOMLPODARMLUJSWGWDYXKEZNNCYDGKQZOVXZJPUJLJHKAVHRLDYVBFELQMTSNYFUOWOBCFIQQHIETGHTXZDCBSWYMFLPFKSIHYGNUICEICGARNXQSEDVAJWZFJXBSBE");
    msg.service_type = 18U;

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
    msg.setTimeStamp(0.2874636403846361);
    msg.setSource(2059U);
    msg.setSourceEntity(189U);
    msg.setDestination(43424U);
    msg.setDestinationEntity(102U);
    msg.service.assign("CINYELAXMONQJPRHWVJEVUOIXDJMGAAHESLWOHSAMNXCHZOJMRYUXTVSBWCVKZCUKFIGLFQAYPAROGDHOUBJXTZFQOVBHBKIFTBVNEUIGBYADKCNDPBSOLZGWQRLFQEIGRJMCZEXVMQXIIGEDCNGGCXRSUMVFSPYEFLZZQPWKDCBTBWULKMUXJTTCTHWLJRNKYUYS");
    msg.service_type = 211U;

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
    msg.setTimeStamp(0.5332056769068854);
    msg.setSource(8636U);
    msg.setSourceEntity(194U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(220U);
    msg.value = 0.3711553183777647;

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
    msg.setTimeStamp(0.8412941804972517);
    msg.setSource(13598U);
    msg.setSourceEntity(50U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5143356354078977;

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
    msg.setTimeStamp(0.2816193914021978);
    msg.setSource(20885U);
    msg.setSourceEntity(62U);
    msg.setDestination(40098U);
    msg.setDestinationEntity(8U);
    msg.value = 0.907710108693379;

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
    msg.setTimeStamp(0.9988251539152911);
    msg.setSource(60573U);
    msg.setSourceEntity(241U);
    msg.setDestination(41373U);
    msg.setDestinationEntity(236U);
    msg.value = 0.7161190402673973;

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
    msg.setTimeStamp(0.254429826581948);
    msg.setSource(10458U);
    msg.setSourceEntity(174U);
    msg.setDestination(44576U);
    msg.setDestinationEntity(207U);
    msg.value = 0.31246408881819654;

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
    msg.setTimeStamp(0.17966607749287822);
    msg.setSource(38497U);
    msg.setSourceEntity(127U);
    msg.setDestination(8858U);
    msg.setDestinationEntity(5U);
    msg.value = 0.47571134495448164;

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
    msg.setTimeStamp(0.6741603103404161);
    msg.setSource(4299U);
    msg.setSourceEntity(216U);
    msg.setDestination(36427U);
    msg.setDestinationEntity(50U);
    msg.value = 0.3892091375210771;

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
    msg.setTimeStamp(0.8571430149433927);
    msg.setSource(44855U);
    msg.setSourceEntity(77U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(220U);
    msg.value = 0.22237005111478458;

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
    msg.setTimeStamp(0.3513857069854004);
    msg.setSource(47722U);
    msg.setSourceEntity(122U);
    msg.setDestination(30223U);
    msg.setDestinationEntity(136U);
    msg.value = 0.2673689308763384;

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
    msg.setTimeStamp(0.9349240319003064);
    msg.setSource(45530U);
    msg.setSourceEntity(129U);
    msg.setDestination(35307U);
    msg.setDestinationEntity(53U);
    msg.number.assign("ZDWVUPPGTBKCOIDBXSNICTAZMYEONCZSQIRVHGVFWFSU");
    msg.timeout = 31375U;
    msg.contents.assign("AEFWXMKRMAKRSMUVRSACDJQRHKYNMDKDSYOAFMKHZSJQPOYLWXLHLGDCAXHINGXYCTOFMII");

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
    msg.setTimeStamp(0.9905472580325667);
    msg.setSource(58652U);
    msg.setSourceEntity(163U);
    msg.setDestination(22204U);
    msg.setDestinationEntity(194U);
    msg.number.assign("SSYZUDJBCOUQTIPWWIHAFNJQQRPJKUISXECEEKADBAFYLYQELDJGOWNHULXFHLORVDYLYIZRIIZSYTHYXLQYZMKCKGPSKBKWRCJCCGUEQUFBUVAYOODCVMTLFMTZBNVGRBSTPSY");
    msg.timeout = 29928U;
    msg.contents.assign("OLBDRQNTWIXQYLDVMDJHLBXGVPBSJLIUVQQMHUWKTFPCKYYOYTUQRXVBLMLRTBKGEERIWGGEBUBGIRNBVWSGTAXGFMEUUSZQLYSSOU");

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
    msg.setTimeStamp(0.3893451315521972);
    msg.setSource(56689U);
    msg.setSourceEntity(232U);
    msg.setDestination(47368U);
    msg.setDestinationEntity(9U);
    msg.number.assign("PZWGHILUJILEFLFOMBQMUGVNIRGBEEYGDFQDGHLPIFTWCYNSAOWIYSQOAMZIVSMPTVKHMVSCBWKOOQPFYJRXKQCYZORARAMMLNCKNBYEXCVAQXZORZPDSSTUVDLKPLUUXLKKEEOXUDRPXBETHALWZDVJJWHFHINXUTUOXVNJJBDCJRPXNNXFBGHNLPQMGUPCRSTSTGYQJCIQAJMRSBDTFNKJZGAVQOZSDYGIBEZHA");
    msg.timeout = 53476U;
    msg.contents.assign("LWWIXLBQVOVDSUPQHFFFWSCETAVHNGIREOYIKQQWBFANUVXAORPEOTOYLCALYNCTGVDJOQHJNYBVIEENFTKEOJXIWSTGZDHGHQWJKDXCUOPCKXUVNREXBJPHPDAXWQKBNZBFCGDH");

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
    msg.setTimeStamp(0.9403695610203187);
    msg.setSource(51724U);
    msg.setSourceEntity(83U);
    msg.setDestination(51884U);
    msg.setDestinationEntity(146U);
    msg.id = 60U;
    msg.range = 0.9319012895498764;

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
    msg.setTimeStamp(0.7990158287710194);
    msg.setSource(48898U);
    msg.setSourceEntity(58U);
    msg.setDestination(48025U);
    msg.setDestinationEntity(30U);
    msg.id = 27U;
    msg.range = 0.9767883371637589;

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
    msg.setTimeStamp(0.7052577176728859);
    msg.setSource(63395U);
    msg.setSourceEntity(69U);
    msg.setDestination(60320U);
    msg.setDestinationEntity(98U);
    msg.id = 172U;
    msg.range = 0.6520699121238015;

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
    msg.setTimeStamp(0.5705050890172936);
    msg.setSource(62107U);
    msg.setSourceEntity(5U);
    msg.setDestination(50874U);
    msg.setDestinationEntity(206U);
    msg.tx = 63U;
    msg.channel = 226U;
    msg.timer = 54096U;

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
    msg.setTimeStamp(0.22887361110652538);
    msg.setSource(35390U);
    msg.setSourceEntity(81U);
    msg.setDestination(45447U);
    msg.setDestinationEntity(121U);
    msg.tx = 43U;
    msg.channel = 169U;
    msg.timer = 28983U;

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
    msg.setTimeStamp(0.0053731256507668634);
    msg.setSource(5617U);
    msg.setSourceEntity(204U);
    msg.setDestination(14703U);
    msg.setDestinationEntity(131U);
    msg.tx = 160U;
    msg.channel = 249U;
    msg.timer = 32993U;

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
    msg.setTimeStamp(0.26824422900414546);
    msg.setSource(10334U);
    msg.setSourceEntity(66U);
    msg.setDestination(33862U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("IXGKDJLDPHOWGQXPPJYKMNXLBDXNTLUMZSIQEIAFMTVEYTEAQGXVICXQWBJRHDUMZYHZDWBLPZWHEARFICNYDNTJOGZWCZIBQNUSJMSYMFOFSDYFMZPOSIYJLXFAPMUECOOKLOUQQBMHBHULSPTATRLGRRVVBKTXCUHYBVHNEVERJNOZNKFXAXCWTCCCKSIPFOBDMWEVGSYVNTUDAUG");
    msg.lat = 0.7144939754203717;
    msg.lon = 0.196528353015209;
    msg.depth = 0.478187267655524;
    msg.query_channel = 117U;
    msg.reply_channel = 126U;
    msg.transponder_delay = 2U;

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
    msg.setTimeStamp(0.8997910681078368);
    msg.setSource(58776U);
    msg.setSourceEntity(100U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(7U);
    msg.beacon.assign("WVXUXDISPCZQXXWOPWSCVLYRBBARDACDNBNQFPWALABMGDAETQXNVKELRSSIQJPNYEXNBXCJKKDSBEVSHTTITDCBRCFJQRMPFUQZJFPKYUOE");
    msg.lat = 0.24531321406519002;
    msg.lon = 0.4184829190928949;
    msg.depth = 0.34932085851365624;
    msg.query_channel = 67U;
    msg.reply_channel = 184U;
    msg.transponder_delay = 98U;

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
    msg.setTimeStamp(0.7259614748240207);
    msg.setSource(2363U);
    msg.setSourceEntity(17U);
    msg.setDestination(21445U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("RHGOIAVIDPEOLOZKYCAINUGXFDJBMEGFBGXITHZDZTKOFPMPVTQIKBYHFFQPOKAVKSCUVWJCHRVWEGWPSCTEKCMIS");
    msg.lat = 0.20743223973296032;
    msg.lon = 0.9045367807720569;
    msg.depth = 0.7734934758634655;
    msg.query_channel = 102U;
    msg.reply_channel = 57U;
    msg.transponder_delay = 47U;

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
    msg.setTimeStamp(0.27564547436582754);
    msg.setSource(35814U);
    msg.setSourceEntity(15U);
    msg.setDestination(4640U);
    msg.setDestinationEntity(240U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.7528270428576187);
    msg.setSource(31482U);
    msg.setSourceEntity(44U);
    msg.setDestination(48384U);
    msg.setDestinationEntity(97U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.5626872473775357);
    msg.setSource(10788U);
    msg.setSourceEntity(104U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(80U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.42443688360690357);
    msg.setSource(19315U);
    msg.setSourceEntity(54U);
    msg.setDestination(58273U);
    msg.setDestinationEntity(140U);
    msg.address = 163U;

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
    msg.setTimeStamp(0.548738723887278);
    msg.setSource(28347U);
    msg.setSourceEntity(88U);
    msg.setDestination(37240U);
    msg.setDestinationEntity(32U);
    msg.address = 253U;

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
    msg.setTimeStamp(0.3188083383573679);
    msg.setSource(8874U);
    msg.setSourceEntity(178U);
    msg.setDestination(15446U);
    msg.setDestinationEntity(230U);
    msg.address = 228U;

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
    msg.setTimeStamp(0.1101944082053159);
    msg.setSource(37943U);
    msg.setSourceEntity(233U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(32U);
    msg.address = 253U;
    msg.status = 193U;
    msg.range = 0.24508421423153925;

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
    msg.setTimeStamp(0.5835673830588202);
    msg.setSource(8548U);
    msg.setSourceEntity(252U);
    msg.setDestination(406U);
    msg.setDestinationEntity(99U);
    msg.address = 75U;
    msg.status = 102U;
    msg.range = 0.7642036883317075;

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
    msg.setTimeStamp(0.47001366680434487);
    msg.setSource(4840U);
    msg.setSourceEntity(80U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(33U);
    msg.address = 162U;
    msg.status = 91U;
    msg.range = 0.949108036537459;

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
    msg.setTimeStamp(0.5753947417027703);
    msg.setSource(41411U);
    msg.setSourceEntity(91U);
    msg.setDestination(65279U);
    msg.setDestinationEntity(37U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 2916421039U;
    tmp_msg_0.value = 206U;
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
    msg.setTimeStamp(0.9215758394110005);
    msg.setSource(59335U);
    msg.setSourceEntity(102U);
    msg.setDestination(10093U);
    msg.setDestinationEntity(1U);
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 52U;
    tmp_msg_0.value = 246U;
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
    msg.setTimeStamp(0.950215908149351);
    msg.setSource(30549U);
    msg.setSourceEntity(254U);
    msg.setDestination(49005U);
    msg.setDestinationEntity(4U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 154U;
    tmp_msg_0.time_remain = 0.9619377769141346;
    tmp_msg_0.sched_time = 0.39856549281437337;
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
    msg.setTimeStamp(0.5691418272779666);
    msg.setSource(59247U);
    msg.setSourceEntity(146U);
    msg.setDestination(35803U);
    msg.setDestinationEntity(180U);
    msg.enable = 14U;

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
    msg.setTimeStamp(0.09948868810625267);
    msg.setSource(59790U);
    msg.setSourceEntity(140U);
    msg.setDestination(56231U);
    msg.setDestinationEntity(149U);
    msg.enable = 181U;

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
    msg.setTimeStamp(0.37339919608489125);
    msg.setSource(9785U);
    msg.setSourceEntity(228U);
    msg.setDestination(41382U);
    msg.setDestinationEntity(95U);
    msg.enable = 41U;

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
    msg.setTimeStamp(0.3195551122430972);
    msg.setSource(5801U);
    msg.setSourceEntity(7U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(11U);
    msg.summary = 148U;
    msg.level = 106U;

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
    msg.setTimeStamp(0.8877845869715926);
    msg.setSource(54163U);
    msg.setSourceEntity(243U);
    msg.setDestination(12966U);
    msg.setDestinationEntity(118U);
    msg.summary = 49U;
    msg.level = 29U;

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
    msg.setTimeStamp(0.05999161194182423);
    msg.setSource(15564U);
    msg.setSourceEntity(29U);
    msg.setDestination(59781U);
    msg.setDestinationEntity(118U);
    msg.summary = 131U;
    msg.level = 24U;

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
    msg.setTimeStamp(0.37734212180335935);
    msg.setSource(52955U);
    msg.setSourceEntity(26U);
    msg.setDestination(29418U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.5146961256034125);
    msg.setSource(21774U);
    msg.setSourceEntity(179U);
    msg.setDestination(34548U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.6207083010198406);
    msg.setSource(42198U);
    msg.setSourceEntity(125U);
    msg.setDestination(37631U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.15830311060038837);
    msg.setSource(55298U);
    msg.setSourceEntity(46U);
    msg.setDestination(12105U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.9711480158386461);
    msg.setSource(30428U);
    msg.setSourceEntity(248U);
    msg.setDestination(21044U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.5572975046748904);
    msg.setSource(21644U);
    msg.setSourceEntity(250U);
    msg.setDestination(65171U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.8863525197822568);
    msg.setSource(35693U);
    msg.setSourceEntity(26U);
    msg.setDestination(14974U);
    msg.setDestinationEntity(172U);
    msg.op = 42U;
    msg.system.assign("AZZGXYDEIMUFBJNQYITTDKSARNEOBNLJNURWGPUMZUETCXAQYJDRPEXDYPWTQEGRNWBOXSRNJBSILWCNGBIDSOFJLWNYCQXTHRIZGEHGRRFKQLMHCWOTJAYYNQKAPUYJLCSLNFHMEPKBQUDPAJJVFWXDCGKSVVVGFBJUXUXMMCKFXHHMKIUWPKYTWVODZZUIRZLSCQMDGTBOXEBSAAELZOBL");
    msg.range = 0.42739746937045797;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WYDUPZLEEESOZVLKCVEYRAVEYZLNAGJPIGKCUABTJCIAWBXXTSDPYGBOWQEVMJNAFTGGTSKQPGWRHUFQIEHZZITJMDPJJZOXXBJZFDSZKIYXSFUFCUYONFVMBEHJDORQAXWCDROQILEJGKXWBHUXXABMTHDQAPFVKNMHNKSGPKFNOBWKHXCLICUSVFRDPCSQBSYOIICVLEDGAWJPHU");
    tmp_msg_0.sys_type = 69U;
    tmp_msg_0.owner = 41455U;
    tmp_msg_0.lat = 0.3188777346316287;
    tmp_msg_0.lon = 0.29156155590062693;
    tmp_msg_0.height = 0.9826119984806629;
    tmp_msg_0.services.assign("RXKEUAEJVFQZZTHOIHJKIMMGLQKYRFXSFMJMVBIQXWLILJNWXTCFGLBORCDXHZENKUTVCTFJKODTSRRUDCPCBLULSGBNAPWIJGUNIHZANQNAMKMJCYGCBDOABQDISIANQSESEPTKVARGBXXSRPYEBNHIWYDLZFEDMTSDGYHWNEHFDCUSOYQMPYFCFQGBYVCVVWTAKWKOREHOOUHIYZUQPGJQWHMGKZRTYXDPZSLUVAPOJPVJVLTFEZWLORNU");
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
    msg.setTimeStamp(0.001904339675129929);
    msg.setSource(36622U);
    msg.setSourceEntity(36U);
    msg.setDestination(47402U);
    msg.setDestinationEntity(99U);
    msg.op = 197U;
    msg.system.assign("WZEBGDFOIOQOGRWERYDYFGGBKMFAYOIXWLTSXHGIDOCMFLVYPROMBNIABQWFU");
    msg.range = 0.18942728979116485;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 22U;
    tmp_msg_0.actions.assign("INGCMCHDGMNUFAEGIILBKEWJPSWXUXTLOPFZIBQXEPCIRZHRNWLNKTHLKKVOATSWYNDJVBZYCRYAFVUCHZHAVZBALSNHCBWUZAKTFPGBWFMWIDAUFJIYCODNIKDLCYOPRMQQOGTGEUIOQVTOBPVLXJSX");
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
    msg.setTimeStamp(0.6872055791906081);
    msg.setSource(14541U);
    msg.setSourceEntity(53U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(136U);
    msg.op = 90U;
    msg.system.assign("OHJINBEZYXCFOHXWZX");
    msg.range = 0.3554254619054028;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("YKFEFKNKXJXNCWGNJBXYLTSRRIBCSTTVPOUCGJQAIFZHSVGQBVHLPOXZGNGHPRNFSWOLFTDULUJOVWBHQONLUWBPVHQPYLVQWYSKNWTPYWAYEMALRKDXCTOBWRXSFJYWSJEFHFMCEUDMQRCOXESOVJMBMLZCMTERGGHDAARZYXAUETQSACQBJDTQVMPPJKDIZZNGI");
    tmp_msg_0.sensor_class.assign("QCXFKAVCHHRFWAZSBVXMFUODFNEFKHAEJVKYADNCAQVBMEPGRSZUEXYBBEQDIMTNRDBYTRZMVHUOKYVYMACUGWJWLTLKGUDARRCYCQFDWJJKYXTOKPMTJXOUILIBZLTJWQPNHGHKGOUJBVBCHYQI");
    tmp_msg_0.lat = 0.8016576251094852;
    tmp_msg_0.lon = 0.36782318793224833;
    tmp_msg_0.alt = 0.21740603772672462;
    tmp_msg_0.heading = 0.5677002455762336;
    tmp_msg_0.data.assign("IMCHUKOLGUTNEPDVSJISUZTDVRFWUNPWBVSMYDSBZVRKIOXYYHZNFEJHXSJMWPWAKIPMADRZTFHQRVLEVBOFGOYFNYCBEDZLYGSBOAXULDMLNHCFROSJTUKNZMGCLQXXTBEKGKNAHPUIBLEZLCHAXKQDUOPQNMCWEFJUORWQIDEAFVIIATWYHCFTXMZJTJACYLMHQIBBRQLQRPCENNGPKQEMACGOVDPJWGFGXAZXWKWBIXYQROVGSSDPTJZV");
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
    msg.setTimeStamp(0.1286528138161701);
    msg.setSource(52090U);
    msg.setSourceEntity(209U);
    msg.setDestination(52629U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.23176504663707065);
    msg.setSource(51751U);
    msg.setSourceEntity(138U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.2859682891032944);
    msg.setSource(47184U);
    msg.setSourceEntity(174U);
    msg.setDestination(5819U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.5261448168319974);
    msg.setSource(3628U);
    msg.setSourceEntity(186U);
    msg.setDestination(8962U);
    msg.setDestinationEntity(40U);
    msg.list.assign("ISCTTGDYREAWQRBVNVQWJUJZZDOJSHCMBMVBFFSHVXXMJKRWHOSGZFFFTJYXSZCXXBWKPFKMHEAQPWQWOVATSUETKDYYRLRSYKQGBEMMZDRUALGTJONWBUCNHTSSPOCUMPGOKJYUXBTZOQCFLIJRBHPFILZLRKIHJPCRVZVMNMAIXXZYUKLAXBNQENBYEGNNHTQWN");

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
    msg.setTimeStamp(0.4202883863458686);
    msg.setSource(37187U);
    msg.setSourceEntity(20U);
    msg.setDestination(57111U);
    msg.setDestinationEntity(105U);
    msg.list.assign("OKOUOWSFGSXBNLDRDWFDXJMHSCYIAMXVXIKYFLFLZJWOHZNSQWIEMPUAAGUYFKMHVHGVMEICIHDYYCHOWCKRYYQENAJUHRBBGCOEQHHPKAUTMTJOXQVCPZNISDDKVQRETUOYKWEVRDMNLLUNBOZUWXDHZGLFQWWKMGFIQPTENLPWJDTZJFTFVAU");

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
    msg.setTimeStamp(0.7565698208004838);
    msg.setSource(10290U);
    msg.setSourceEntity(1U);
    msg.setDestination(9464U);
    msg.setDestinationEntity(110U);
    msg.list.assign("FWBUKINRMFSRXIXDMVUMYEZABOQMLNYEVYOCYUQERCIAZNJTMPOSLUKWOQSVTTJDZZSSMZFJXKRVOWXZNKCJBNEZI");

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
    msg.setTimeStamp(0.09836946588073825);
    msg.setSource(17271U);
    msg.setSourceEntity(65U);
    msg.setDestination(44803U);
    msg.setDestinationEntity(120U);
    msg.value = -13095;

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
    msg.setTimeStamp(0.6215982167136657);
    msg.setSource(38524U);
    msg.setSourceEntity(210U);
    msg.setDestination(51111U);
    msg.setDestinationEntity(188U);
    msg.value = 14467;

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
    msg.setTimeStamp(0.7998493472755149);
    msg.setSource(11475U);
    msg.setSourceEntity(67U);
    msg.setDestination(12746U);
    msg.setDestinationEntity(20U);
    msg.value = 29276;

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
    msg.setTimeStamp(0.7355215964444028);
    msg.setSource(1981U);
    msg.setSourceEntity(185U);
    msg.setDestination(3560U);
    msg.setDestinationEntity(128U);
    msg.value = 0.427438116240078;

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
    msg.setTimeStamp(0.13182797711032002);
    msg.setSource(31210U);
    msg.setSourceEntity(19U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7415224179733835;

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
    msg.setTimeStamp(0.4808793959012956);
    msg.setSource(662U);
    msg.setSourceEntity(190U);
    msg.setDestination(58519U);
    msg.setDestinationEntity(12U);
    msg.value = 0.5852173684465017;

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
    msg.setTimeStamp(0.6595660545781106);
    msg.setSource(9937U);
    msg.setSourceEntity(202U);
    msg.setDestination(22868U);
    msg.setDestinationEntity(1U);
    msg.value = 0.10812004803726649;

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
    msg.setTimeStamp(0.5184514229001819);
    msg.setSource(13550U);
    msg.setSourceEntity(213U);
    msg.setDestination(60265U);
    msg.setDestinationEntity(107U);
    msg.value = 0.3049208002808873;

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
    msg.setTimeStamp(0.5077627679039574);
    msg.setSource(18564U);
    msg.setSourceEntity(145U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9646196462159856;

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
    msg.setTimeStamp(0.16326587437791706);
    msg.setSource(1539U);
    msg.setSourceEntity(128U);
    msg.setDestination(63255U);
    msg.setDestinationEntity(250U);
    msg.validity = 329U;
    msg.type = 193U;
    msg.utc_year = 36020U;
    msg.utc_month = 170U;
    msg.utc_day = 148U;
    msg.utc_time = 0.582619731969122;
    msg.lat = 0.15620481850296963;
    msg.lon = 0.5458367524473559;
    msg.height = 0.8614832672280256;
    msg.satellites = 66U;
    msg.cog = 0.08296398766911683;
    msg.sog = 0.4112689082659108;
    msg.hdop = 0.31087816201149043;
    msg.vdop = 0.9812773424372101;
    msg.hacc = 0.707702969426243;
    msg.vacc = 0.4373178754057957;

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
    msg.setTimeStamp(0.42207600468937845);
    msg.setSource(20994U);
    msg.setSourceEntity(99U);
    msg.setDestination(12605U);
    msg.setDestinationEntity(132U);
    msg.validity = 19100U;
    msg.type = 65U;
    msg.utc_year = 30509U;
    msg.utc_month = 19U;
    msg.utc_day = 34U;
    msg.utc_time = 0.23711302206112872;
    msg.lat = 0.08139332285016221;
    msg.lon = 0.03204077821229634;
    msg.height = 0.6095569132107683;
    msg.satellites = 52U;
    msg.cog = 0.21824902765566867;
    msg.sog = 0.134156978579565;
    msg.hdop = 0.8569423994288428;
    msg.vdop = 0.3878224228372148;
    msg.hacc = 0.3486898360704359;
    msg.vacc = 0.47819724171906375;

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
    msg.setTimeStamp(0.8354040783632422);
    msg.setSource(62145U);
    msg.setSourceEntity(78U);
    msg.setDestination(12034U);
    msg.setDestinationEntity(16U);
    msg.validity = 23815U;
    msg.type = 124U;
    msg.utc_year = 35965U;
    msg.utc_month = 235U;
    msg.utc_day = 92U;
    msg.utc_time = 0.4321000579720975;
    msg.lat = 0.005816351943968345;
    msg.lon = 0.317835452664433;
    msg.height = 0.737615635512805;
    msg.satellites = 37U;
    msg.cog = 0.2137923741819252;
    msg.sog = 0.5209197119811947;
    msg.hdop = 0.6175723440996128;
    msg.vdop = 0.9630389240009256;
    msg.hacc = 0.85505193832296;
    msg.vacc = 0.7459991958235773;

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
    msg.setTimeStamp(0.8586660493093756);
    msg.setSource(57397U);
    msg.setSourceEntity(37U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(35U);
    msg.time = 0.2546773429978394;
    msg.phi = 0.5832225465582357;
    msg.theta = 0.8883571533539207;
    msg.psi = 0.6842884879734152;
    msg.psi_magnetic = 0.9054881822825032;

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
    msg.setTimeStamp(0.5409310127449781);
    msg.setSource(2927U);
    msg.setSourceEntity(208U);
    msg.setDestination(11952U);
    msg.setDestinationEntity(14U);
    msg.time = 0.610925270123104;
    msg.phi = 0.16421027158488943;
    msg.theta = 0.47819714634382315;
    msg.psi = 0.3570792417408235;
    msg.psi_magnetic = 0.9154258497653744;

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
    msg.setTimeStamp(0.35390017073733016);
    msg.setSource(44993U);
    msg.setSourceEntity(140U);
    msg.setDestination(39566U);
    msg.setDestinationEntity(206U);
    msg.time = 0.6877462053024064;
    msg.phi = 0.306049075890227;
    msg.theta = 0.7278552397184433;
    msg.psi = 0.5760764302111115;
    msg.psi_magnetic = 0.7478739954963194;

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
    msg.setTimeStamp(0.08620125814376722);
    msg.setSource(56805U);
    msg.setSourceEntity(115U);
    msg.setDestination(45929U);
    msg.setDestinationEntity(168U);
    msg.time = 0.15623246868545282;
    msg.x = 0.8747712151009223;
    msg.y = 0.3479783645375083;
    msg.z = 0.48548476102036753;
    msg.timestep = 0.617350350128528;

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
    msg.setTimeStamp(0.0133451787675114);
    msg.setSource(326U);
    msg.setSourceEntity(121U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(147U);
    msg.time = 0.35750015193625906;
    msg.x = 0.9575301457649203;
    msg.y = 0.2641880225214427;
    msg.z = 0.09691598096753518;
    msg.timestep = 0.3924109549593231;

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
    msg.setTimeStamp(0.6164254132474786);
    msg.setSource(48502U);
    msg.setSourceEntity(227U);
    msg.setDestination(17487U);
    msg.setDestinationEntity(209U);
    msg.time = 0.3222735390104867;
    msg.x = 0.7073796826087259;
    msg.y = 0.16747206895241984;
    msg.z = 0.9007426514371089;
    msg.timestep = 0.2950675549424525;

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
    msg.setTimeStamp(0.08600562898380737);
    msg.setSource(60944U);
    msg.setSourceEntity(129U);
    msg.setDestination(30290U);
    msg.setDestinationEntity(253U);
    msg.time = 0.2575488804298922;
    msg.x = 0.7493059130497977;
    msg.y = 0.3149839633940601;
    msg.z = 0.23319744991572844;

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
    msg.setTimeStamp(0.15241862450737553);
    msg.setSource(18284U);
    msg.setSourceEntity(155U);
    msg.setDestination(27606U);
    msg.setDestinationEntity(110U);
    msg.time = 0.8283027046953746;
    msg.x = 0.1797940622852796;
    msg.y = 0.5412877655392394;
    msg.z = 0.9301544718983994;

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
    msg.setTimeStamp(0.7909148482631995);
    msg.setSource(53465U);
    msg.setSourceEntity(232U);
    msg.setDestination(34178U);
    msg.setDestinationEntity(236U);
    msg.time = 0.4739849863123775;
    msg.x = 0.5192516247711674;
    msg.y = 0.5389151862575932;
    msg.z = 0.3427456724232899;

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
    msg.setTimeStamp(0.9760283064776216);
    msg.setSource(64559U);
    msg.setSourceEntity(0U);
    msg.setDestination(50467U);
    msg.setDestinationEntity(81U);
    msg.time = 0.6612010915037265;
    msg.x = 0.8679865351496348;
    msg.y = 0.7581731197567367;
    msg.z = 0.37759707895281147;

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
    msg.setTimeStamp(0.015644650150693162);
    msg.setSource(41187U);
    msg.setSourceEntity(210U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(101U);
    msg.time = 0.7921400950054293;
    msg.x = 0.6119799301686356;
    msg.y = 0.7245985018632415;
    msg.z = 0.5965794687711213;

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
    msg.setTimeStamp(0.21428810771594464);
    msg.setSource(44229U);
    msg.setSourceEntity(134U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(74U);
    msg.time = 0.21777855981063243;
    msg.x = 0.9491124052692295;
    msg.y = 0.009806541390650292;
    msg.z = 0.631974464554779;

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
    msg.setTimeStamp(0.11244850042339305);
    msg.setSource(64029U);
    msg.setSourceEntity(214U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(248U);
    msg.time = 0.5680382485810237;
    msg.x = 0.7176612740057333;
    msg.y = 0.7204122560428717;
    msg.z = 0.9044487766849448;

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
    msg.setTimeStamp(0.8716602387206649);
    msg.setSource(40351U);
    msg.setSourceEntity(106U);
    msg.setDestination(8877U);
    msg.setDestinationEntity(96U);
    msg.time = 0.7605399482585263;
    msg.x = 0.22727692593352544;
    msg.y = 0.8769808045128622;
    msg.z = 0.5923896653437121;

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
    msg.setTimeStamp(0.6171313081486715);
    msg.setSource(13032U);
    msg.setSourceEntity(40U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(195U);
    msg.time = 0.9322111219939869;
    msg.x = 0.6114675174988885;
    msg.y = 0.8943712880221617;
    msg.z = 0.9149534920979462;

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
    msg.setTimeStamp(0.961192552784447);
    msg.setSource(32808U);
    msg.setSourceEntity(215U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(38U);
    msg.validity = 137U;
    msg.x = 0.256161358232441;
    msg.y = 0.4651448991871121;
    msg.z = 0.18479651561173516;

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
    msg.setTimeStamp(0.6536818293920336);
    msg.setSource(37984U);
    msg.setSourceEntity(218U);
    msg.setDestination(38950U);
    msg.setDestinationEntity(111U);
    msg.validity = 253U;
    msg.x = 0.2177132211366486;
    msg.y = 0.7657859070962892;
    msg.z = 0.3712240324862449;

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
    msg.setTimeStamp(0.2820302844479676);
    msg.setSource(54933U);
    msg.setSourceEntity(142U);
    msg.setDestination(15670U);
    msg.setDestinationEntity(101U);
    msg.validity = 127U;
    msg.x = 0.8083332506569464;
    msg.y = 0.013250430507506294;
    msg.z = 0.35093342616992806;

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
    msg.setTimeStamp(0.12384397569462846);
    msg.setSource(12942U);
    msg.setSourceEntity(240U);
    msg.setDestination(31491U);
    msg.setDestinationEntity(28U);
    msg.validity = 217U;
    msg.x = 0.8606934236108806;
    msg.y = 0.87012767284765;
    msg.z = 0.7894164904231591;

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
    msg.setTimeStamp(0.21645856336066627);
    msg.setSource(120U);
    msg.setSourceEntity(38U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(175U);
    msg.validity = 74U;
    msg.x = 0.29526169297342364;
    msg.y = 0.9230313535786702;
    msg.z = 0.8575265497616161;

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
    msg.setTimeStamp(0.5914763795283339);
    msg.setSource(19819U);
    msg.setSourceEntity(254U);
    msg.setDestination(27816U);
    msg.setDestinationEntity(169U);
    msg.validity = 174U;
    msg.x = 0.4376013914340332;
    msg.y = 0.2686473318480921;
    msg.z = 0.1425097917759235;

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
    msg.setTimeStamp(0.11428093613022505);
    msg.setSource(1243U);
    msg.setSourceEntity(251U);
    msg.setDestination(4641U);
    msg.setDestinationEntity(85U);
    msg.time = 0.816167819546706;
    msg.x = 0.42439407105195004;
    msg.y = 0.18197017154444894;
    msg.z = 0.451316744907997;

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
    msg.setTimeStamp(0.5034087602502804);
    msg.setSource(55094U);
    msg.setSourceEntity(84U);
    msg.setDestination(5491U);
    msg.setDestinationEntity(104U);
    msg.time = 0.6714497198769178;
    msg.x = 0.13828316187778256;
    msg.y = 0.5333923533699753;
    msg.z = 0.923915917380003;

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
    msg.setTimeStamp(0.5761441932767993);
    msg.setSource(57844U);
    msg.setSourceEntity(164U);
    msg.setDestination(46783U);
    msg.setDestinationEntity(230U);
    msg.time = 0.9017752667698812;
    msg.x = 0.8748686588461989;
    msg.y = 0.5715686641224414;
    msg.z = 0.24154463732018028;

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
    msg.setTimeStamp(0.8815210118760792);
    msg.setSource(44735U);
    msg.setSourceEntity(73U);
    msg.setDestination(18909U);
    msg.setDestinationEntity(93U);
    msg.validity = 209U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4371478708001699;
    tmp_msg_0.y = 0.6437318411502683;
    tmp_msg_0.z = 0.988913574398444;
    tmp_msg_0.phi = 0.7352614275003148;
    tmp_msg_0.theta = 0.22227604987605665;
    tmp_msg_0.psi = 0.7836763989361357;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.30226640497356905;
    tmp_msg_1.beam_height = 0.39410855003598855;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7216279100888425;

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
    msg.setTimeStamp(0.9944427661293364);
    msg.setSource(54479U);
    msg.setSourceEntity(39U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(38U);
    msg.validity = 201U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6067660788863249;
    tmp_msg_0.y = 0.292801665621371;
    tmp_msg_0.z = 0.585623651080584;
    tmp_msg_0.phi = 0.36793734435752623;
    tmp_msg_0.theta = 0.9384696594178409;
    tmp_msg_0.psi = 0.3849642630927399;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.2770487098255371;

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
    msg.setTimeStamp(0.9599859826747471);
    msg.setSource(11618U);
    msg.setSourceEntity(203U);
    msg.setDestination(29516U);
    msg.setDestinationEntity(161U);
    msg.validity = 139U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8093480475209986;
    tmp_msg_0.y = 0.05027433532918313;
    tmp_msg_0.z = 0.3176592571278206;
    tmp_msg_0.phi = 0.43826660300229237;
    tmp_msg_0.theta = 0.8734255964203503;
    tmp_msg_0.psi = 0.5584664523942576;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.377170738992639;

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
    msg.setTimeStamp(0.264102766608063);
    msg.setSource(485U);
    msg.setSourceEntity(67U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(93U);
    msg.value = 0.32673170565809995;

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
    msg.setTimeStamp(0.00990099396649613);
    msg.setSource(1782U);
    msg.setSourceEntity(242U);
    msg.setDestination(20552U);
    msg.setDestinationEntity(229U);
    msg.value = 0.67670715423984;

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
    msg.setTimeStamp(0.16602096023602186);
    msg.setSource(26573U);
    msg.setSourceEntity(129U);
    msg.setDestination(142U);
    msg.setDestinationEntity(153U);
    msg.value = 0.06936370132585123;

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
    msg.setTimeStamp(0.8296102593888783);
    msg.setSource(46295U);
    msg.setSourceEntity(50U);
    msg.setDestination(19878U);
    msg.setDestinationEntity(219U);
    msg.value = 0.5592128128905648;

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
    msg.setTimeStamp(0.11392390448272138);
    msg.setSource(7857U);
    msg.setSourceEntity(202U);
    msg.setDestination(18202U);
    msg.setDestinationEntity(16U);
    msg.value = 0.08719213140314175;

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
    msg.setTimeStamp(0.1682527694886924);
    msg.setSource(13162U);
    msg.setSourceEntity(227U);
    msg.setDestination(22909U);
    msg.setDestinationEntity(48U);
    msg.value = 0.5922840140700372;

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
    msg.setTimeStamp(0.7160756624492186);
    msg.setSource(65208U);
    msg.setSourceEntity(191U);
    msg.setDestination(34345U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8748669853890974;

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
    msg.setTimeStamp(0.1489947194562271);
    msg.setSource(25369U);
    msg.setSourceEntity(113U);
    msg.setDestination(45103U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8495842849922204;

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
    msg.setTimeStamp(0.5260347131210091);
    msg.setSource(1363U);
    msg.setSourceEntity(99U);
    msg.setDestination(6942U);
    msg.setDestinationEntity(9U);
    msg.value = 0.7650320614659653;

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
    msg.setTimeStamp(0.7445556148131688);
    msg.setSource(37862U);
    msg.setSourceEntity(152U);
    msg.setDestination(31310U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6157585177014645;

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
    msg.setTimeStamp(0.8712456072303771);
    msg.setSource(42344U);
    msg.setSourceEntity(51U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(67U);
    msg.value = 0.4108891716005594;

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
    msg.setTimeStamp(0.05312096045280579);
    msg.setSource(31069U);
    msg.setSourceEntity(60U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(131U);
    msg.value = 0.013468404196827488;

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
    msg.setTimeStamp(0.7529099220308342);
    msg.setSource(32206U);
    msg.setSourceEntity(5U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(251U);
    msg.value = 0.15998667529616273;

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
    msg.setTimeStamp(0.40501026358306325);
    msg.setSource(45927U);
    msg.setSourceEntity(235U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(252U);
    msg.value = 0.48459527702275496;

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
    msg.setTimeStamp(0.28276432921282046);
    msg.setSource(19685U);
    msg.setSourceEntity(125U);
    msg.setDestination(46215U);
    msg.setDestinationEntity(156U);
    msg.value = 0.3440059663667364;

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
    msg.setTimeStamp(0.10502712409184434);
    msg.setSource(21731U);
    msg.setSourceEntity(79U);
    msg.setDestination(10303U);
    msg.setDestinationEntity(245U);
    msg.value = 0.15074972607466153;

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
    msg.setTimeStamp(0.5641748691570668);
    msg.setSource(48317U);
    msg.setSourceEntity(104U);
    msg.setDestination(34578U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8852525171741294;

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
    msg.setTimeStamp(0.06474524588498476);
    msg.setSource(38840U);
    msg.setSourceEntity(41U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(239U);
    msg.value = 0.3579464500860371;

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
    msg.setTimeStamp(0.9664805717823751);
    msg.setSource(28862U);
    msg.setSourceEntity(163U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(212U);
    msg.value = 0.148016567988704;

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
    msg.setTimeStamp(0.2307120057513502);
    msg.setSource(21889U);
    msg.setSourceEntity(115U);
    msg.setDestination(3270U);
    msg.setDestinationEntity(107U);
    msg.value = 0.7463128293817886;

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
    msg.setTimeStamp(0.9407073881437639);
    msg.setSource(17056U);
    msg.setSourceEntity(155U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(138U);
    msg.value = 0.021644626280948875;

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
    msg.setTimeStamp(0.8029008247466901);
    msg.setSource(37933U);
    msg.setSourceEntity(128U);
    msg.setDestination(19586U);
    msg.setDestinationEntity(199U);
    msg.value = 0.8853398592040559;

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
    msg.setTimeStamp(0.48657215292052236);
    msg.setSource(50399U);
    msg.setSourceEntity(17U);
    msg.setDestination(62300U);
    msg.setDestinationEntity(41U);
    msg.value = 0.3496960342989909;

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
    msg.setTimeStamp(0.6024587548642144);
    msg.setSource(7631U);
    msg.setSourceEntity(220U);
    msg.setDestination(46764U);
    msg.setDestinationEntity(105U);
    msg.value = 0.911629126781701;

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
    msg.setTimeStamp(0.1456951724164779);
    msg.setSource(37111U);
    msg.setSourceEntity(75U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(140U);
    msg.direction = 0.14497389788660453;
    msg.speed = 0.9387731101136978;

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
    msg.setTimeStamp(0.6821585526791147);
    msg.setSource(47516U);
    msg.setSourceEntity(7U);
    msg.setDestination(14781U);
    msg.setDestinationEntity(146U);
    msg.direction = 0.9380629303817067;
    msg.speed = 0.5372247994011696;

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
    msg.setTimeStamp(0.10472231484555083);
    msg.setSource(65107U);
    msg.setSourceEntity(38U);
    msg.setDestination(8778U);
    msg.setDestinationEntity(223U);
    msg.direction = 0.8017930649396943;
    msg.speed = 0.2538951642501648;

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
    msg.setTimeStamp(0.8198531896271624);
    msg.setSource(48116U);
    msg.setSourceEntity(49U);
    msg.setDestination(30126U);
    msg.setDestinationEntity(33U);
    msg.value = 0.2905247672353205;

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
    msg.setTimeStamp(0.9990875256343151);
    msg.setSource(15787U);
    msg.setSourceEntity(88U);
    msg.setDestination(49240U);
    msg.setDestinationEntity(237U);
    msg.value = 0.3092159658701231;

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
    msg.setTimeStamp(0.31789616239103224);
    msg.setSource(51135U);
    msg.setSourceEntity(118U);
    msg.setDestination(58045U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5903104194878592;

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
    msg.setTimeStamp(0.8935481806179032);
    msg.setSource(47573U);
    msg.setSourceEntity(148U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(171U);
    msg.value.assign("YEUBBBWHDAMMSUOITNYJZKVDUSRHQFIKHZSZTGSVANUXSYFEMTVNUPLFFEEKCAULSVJHNLALJRHDGBPARYVMVMICJGYACNRPXQAOTYNWOFLPWDPXOOPIWLKCZXSORKMUVPIKCPBNPGQIHHBTJLIWD");

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
    msg.setTimeStamp(0.8878416083699864);
    msg.setSource(27165U);
    msg.setSourceEntity(227U);
    msg.setDestination(7545U);
    msg.setDestinationEntity(240U);
    msg.value.assign("EHWJYCKVCRDWYXEEAKUXFYGMIIGDJJGPQAIQURPVZTSRFULAYZFEZXQPLYHQXIMAYQDXNZFPPLAJEKTHDCRCSGNKBCDQZHJVCSUQDENJFQGTKMWCOBDCKMABHSRVIJOPXXQIBAUGPZVNVUODAZNDEMMJATDGHNOKOGOXPMRLLTXVG");

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
    msg.setTimeStamp(0.20759285525185844);
    msg.setSource(35470U);
    msg.setSourceEntity(141U);
    msg.setDestination(44429U);
    msg.setDestinationEntity(164U);
    msg.value.assign("KWJRZEYRTHTCKCRQPXLPIODUXEXRYFQNAGTDECIOKUMUXEZMTEAGTXSNLWRPFJYTASLAZVVHQFHWXXVGBXSQYBCDRIABJGXOISWQJLZBUHBWOPSCAFGDSJOGNZHAEFJGGCZZ");

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
    msg.setTimeStamp(0.28616831880388205);
    msg.setSource(62720U);
    msg.setSourceEntity(121U);
    msg.setDestination(41231U);
    msg.setDestinationEntity(91U);
    const char tmp_msg_0[] = {-79, -3, 35, -21, -93, -100, 16, -22, -126, 100, 57, -50, -104, 21, 40, 124, -121, -77, 113, 107, 54, 99, 108, 79, -71, 38, 33, -75, -97, -89, 96, -75, 41, -57, -93, -123, 102, -25, 97, 103, -100, 13, -29, 100, -15, 80, 110, -18, -42, -9, 92, -99, 30, 21, -71, 110, 84, -101, 89, 84, -18, 71, -94, 49, -76, 80, 93, -99, -107, -70, 0, -42, -108, -91, -97, -25, -88, -45, 87, 17, 12, 93, -100, -107, -38, 34, -127, -78, 38, -17, 63, 120, 27, 18};
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
    msg.setTimeStamp(0.14971354875634535);
    msg.setSource(52679U);
    msg.setSourceEntity(224U);
    msg.setDestination(21688U);
    msg.setDestinationEntity(58U);
    const char tmp_msg_0[] = {64, -39, 24, 33, 101, 92, 75, 120, -89, -66, -61, 21, -6, -37, -52, 51, 97, 41, -121, -63, -111, -67, -66, 18, -115, -9, 65, 32, -80, 122, 32, 20, -38, -109, 89, 67, -86, 23, -16, -15, 79, -29, 81, -94, -73, -94, 71, -41, -73, -102, 59, 30, 98, 52, 5, -5, -122, 79, -86, 85, -26, 125, -3, -34, 5, 32, -24, 62, 49, -104, -30, 72, 65, -102, 56, 107, 73, -92, 102, -29, 26, 35, -53, 115, 67, -86, 78, 81, -4, -127, -36, 90, -66, -77, 104, 68, 33, -78, -13, -50, 43, -116, 126, -101, 122, 12, 24, -45, -96, -87, 97, -34, 68, -73, -39, 75, 62, -111, -29, 63, 44, -11, 49, -122, -24, -97, 18, -57, 96, -98, -95, -128, 76, -57, 55, 82, -91, -128, 84, 112, 23, 25, -54, 50, 83, 124, -91, -3, 4, 106, -40, -63, -57, -21, -37, -40, 92, 126, 114, -74, -45, 31, 105, 75, 68, -68, -54, 99, 53, -40, -63, 4, -61, -5, 9, 118, -2, 11, 47, 27, 21, 11, 90, -7, -78, -70, -5, 88, -116, -54, 14, 58, 41, -22, -99, 44, -29, 82, -37, -93, -71, -115, -14, 31, 125, -76, -91, 49, -56, -45, 51, 67, -102, -101, 5, -86, -84, 2, -123, 2, -49, -27, -58, 21};
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
    msg.setTimeStamp(0.9840756558274283);
    msg.setSource(15327U);
    msg.setSourceEntity(222U);
    msg.setDestination(50994U);
    msg.setDestinationEntity(206U);
    const char tmp_msg_0[] = {-88, -97, -94, 36, 22, 37, -113, -47, 73, 35, 28, -43, 0, -13, 9, 79, 74, 41, 114, -32, -122, 43, 58, 63, -122, -48, 75, 123, 23, 94, -53, -122, -10, -60, 87, -116, -10, 52, 49};
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
    msg.setTimeStamp(0.8110083977936826);
    msg.setSource(2253U);
    msg.setSourceEntity(100U);
    msg.setDestination(36454U);
    msg.setDestinationEntity(170U);
    msg.frequency = 3524961327U;
    msg.min_range = 22562U;
    msg.max_range = 58816U;

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
    msg.setTimeStamp(0.035799960968755595);
    msg.setSource(36402U);
    msg.setSourceEntity(140U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(174U);
    msg.frequency = 431685524U;
    msg.min_range = 49787U;
    msg.max_range = 7028U;

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
    msg.setTimeStamp(0.8474437890906712);
    msg.setSource(37821U);
    msg.setSourceEntity(215U);
    msg.setDestination(30981U);
    msg.setDestinationEntity(169U);
    msg.frequency = 2829203581U;
    msg.min_range = 28018U;
    msg.max_range = 5347U;

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
    msg.setTimeStamp(0.8312727944315565);
    msg.setSource(55991U);
    msg.setSourceEntity(3U);
    msg.setDestination(9335U);
    msg.setDestinationEntity(17U);
    msg.type = 164U;
    msg.frequency = 646690628U;
    msg.min_range = 2608U;
    msg.max_range = 14548U;
    msg.bits_per_point = 248U;
    msg.scale_factor = 0.7226740806460877;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3478261120976326;
    tmp_msg_0.beam_height = 0.7282687151849861;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-101, 86, 53, 75, 1, -7, 12, -29, 104, 64, -121, -97, 75, -3, 93, -9, 53, -115, -18, 45, -122, 44, -91, -51, 23, -109, 32, 55, -10, -90, 72, -2, 91, -120, -34, 84, -86, -18, -79, 41, 49, 90, -104, 108, -61, -70, 82, 113, -60, 18, -5, -28, 77, 17, -51, 123, -108, 82, -53, 83, -28, -110, -63, 45, -76, 45, 34, 104, -127, 55, 99, 17, 52, -38, 16, -61, -87, -34, -120, -88, 91, 26, 74, -68, -11, -67, -107, 36, -65, 6, -7, -48, -78, 35, -52, -48, 121, -118, -107, -73, 94, -115, -108, 3, -36, -66, 24, -78, 34, 63, -8, -42, 66, 48, 65, 12, -22, -128, 69, -117, 83, -56, -39, -94, -63, 60, -63, -41, -80, 50, 108, 13, 67, -126, 42, -81, 86, -28, 33, 34, 81, -123, -101, 46, 7, -43, -15, 27, 80, 70, -43, 2, -112, -74, -104, -19, -11, 64, 48, -29, 10, -51, 37, 122, -33, 25, 25, 34, -84, -64, 17, 2, -56, 95, 47, 80, -60, 74, 17, -120, -71, 26, 102, 19, -27, -112, -88, 6, 16, 67, 59, -108, -68, -78, 117, 119, -34, -90, -26, 43, -52, 7, -65, 89, -71, -80, -58, -94, 79, 49, 50, 85, 107, 77, 89, -64, -11, 13, 1, -22, -19, -37, -35, 10, 59, 113, 103, -28, -123, -21, 23, 35, -117, -8, 34, -115, -85, 73, 16, -33, 119, -24, -125, -8, 13, -22, 30, -15};
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
    msg.setTimeStamp(0.8820173978653515);
    msg.setSource(56845U);
    msg.setSourceEntity(140U);
    msg.setDestination(49284U);
    msg.setDestinationEntity(220U);
    msg.type = 42U;
    msg.frequency = 2034936275U;
    msg.min_range = 58353U;
    msg.max_range = 5399U;
    msg.bits_per_point = 71U;
    msg.scale_factor = 0.22069763758956207;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5413786417205472;
    tmp_msg_0.beam_height = 0.4511267744627825;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {119, -114, -4, 112, 50, -18, -14, 25, -13, -80, 68, 71, -100, -66, -10, 59, 102, 40, -66, -37, 74, 117, -37, -41, -44, 22, 111, -28, -91, -5, 10, -81, 75, 100, -65, -6, -98, 2, -35, 88, -37, -48, 50, 60, 107, 33, -17, 112, -17, 89, -109, 90, 75, -94, 71, 76, 68, -17, 109, 54, 114, -58, -4, 54, -111, -3, 29, -58, 97, -37, -75, 35, -118, -54, -13, 40, -102, -44, 109, -105, 99, 100, 119, 24, 26, -64, 121, 79, 76, 4, 29, -126, 36, 96, -33, -71, 25};
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
    msg.setTimeStamp(0.1238318515991419);
    msg.setSource(59896U);
    msg.setSourceEntity(73U);
    msg.setDestination(62641U);
    msg.setDestinationEntity(21U);
    msg.type = 182U;
    msg.frequency = 646217312U;
    msg.min_range = 19130U;
    msg.max_range = 59468U;
    msg.bits_per_point = 99U;
    msg.scale_factor = 0.2197001802776236;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9805915115864523;
    tmp_msg_0.beam_height = 0.36720482308382496;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {57, -36, 59, 117, -80, 65, 52, 14, -50, -117, -66, -88, 45, 100, 99, -85, 81, 31, -68, 97, 101, -53, -93, -90, 105, -39, -60, -87, -96, 90, -8, -78, -122, 5, 122, 0, 116, 24, -53, 123, 14, 75, 116, 47, 97, 59, 101, 67, 117, -56, -119, -18, -47, 38, -45, -34, -11, 75, 86, 61, 105, 52, 101, 96};
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
    msg.setTimeStamp(0.7359846310979867);
    msg.setSource(16330U);
    msg.setSourceEntity(113U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.9075613983037183);
    msg.setSource(2617U);
    msg.setSourceEntity(167U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.7894655631222562);
    msg.setSource(31773U);
    msg.setSourceEntity(241U);
    msg.setDestination(50925U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.9916658190702657);
    msg.setSource(32704U);
    msg.setSourceEntity(237U);
    msg.setDestination(52411U);
    msg.setDestinationEntity(106U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.9150761052906203);
    msg.setSource(43144U);
    msg.setSourceEntity(238U);
    msg.setDestination(64116U);
    msg.setDestinationEntity(157U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.5269909741851553);
    msg.setSource(57319U);
    msg.setSourceEntity(213U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(157U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.5360751498074446);
    msg.setSource(54954U);
    msg.setSourceEntity(185U);
    msg.setDestination(26810U);
    msg.setDestinationEntity(22U);
    msg.value = 0.09054867801277389;
    msg.confidence = 0.8459541295403068;
    msg.opmodes.assign("FQZOPYSYGUVGMSJTUWPGBXLDNAWOOYEUFHICXAPKMSSYIXIUIWJLESJZTFJUJUHDVZSKVCLMSUQQCPCTQXPDJHRRDWDLBBILFZVGOYEZEKNYTJAYGR");

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
    msg.setTimeStamp(0.6251050773427048);
    msg.setSource(17220U);
    msg.setSourceEntity(55U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(158U);
    msg.value = 0.792162989231139;
    msg.confidence = 0.8595996602456275;
    msg.opmodes.assign("PBBJMDVZSOSPVUXZASRBAKMTHNSVZPDQCZGDKVISKBFGMBOIKXNOLJOCAXWTNOYVUEUWEZVEUXSCWUWJLVMHGEZCYGYFALILXUWZECOKJIQMRODNEQTRHCPQRTMCMDHXPHRDLRTXNZKAPLCRSCYDLRHJOAJRHNDRYWFFTMYDBIZPBYEIPGALCDHPNVKGTIQQTMFSUUJ");

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
    msg.setTimeStamp(0.6160399753083134);
    msg.setSource(3389U);
    msg.setSourceEntity(199U);
    msg.setDestination(56804U);
    msg.setDestinationEntity(141U);
    msg.value = 0.037645920477691;
    msg.confidence = 0.27014608152042785;
    msg.opmodes.assign("IRNWFVRCHLKSSPSOCCTUZATCWYXPZSZYGIYXVGMOVNMJRAHLIBZDYNUEMHPEGBERFAMGGVNLIYKDQFVDTUNMUDJTAVMIWFEDYQ");

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
    msg.setTimeStamp(0.43430345674955295);
    msg.setSource(20120U);
    msg.setSourceEntity(33U);
    msg.setDestination(20921U);
    msg.setDestinationEntity(215U);
    msg.itow = 922999116U;
    msg.lat = 0.8938967752536161;
    msg.lon = 0.1536105623159877;
    msg.height_ell = 0.32004315127254745;
    msg.height_sea = 0.778302544144377;
    msg.hacc = 0.7526542071242776;
    msg.vacc = 0.6925936141929365;
    msg.vel_n = 0.5733771157213254;
    msg.vel_e = 0.5906462429228185;
    msg.vel_d = 0.6429522038498665;
    msg.speed = 0.9647494447865089;
    msg.gspeed = 0.04317054225921391;
    msg.heading = 0.9413482175510086;
    msg.sacc = 0.4861342054251764;
    msg.cacc = 0.15409111159239142;

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
    msg.setTimeStamp(0.32036918795606384);
    msg.setSource(12927U);
    msg.setSourceEntity(123U);
    msg.setDestination(34646U);
    msg.setDestinationEntity(96U);
    msg.itow = 1829599119U;
    msg.lat = 0.4132318453841328;
    msg.lon = 0.9131483692726154;
    msg.height_ell = 0.5668540908779197;
    msg.height_sea = 0.2313917819517507;
    msg.hacc = 0.8887436667761124;
    msg.vacc = 0.945980301995125;
    msg.vel_n = 0.7534165786903609;
    msg.vel_e = 0.1847779405074541;
    msg.vel_d = 0.7479907964233135;
    msg.speed = 0.2386967475802626;
    msg.gspeed = 0.14740301949933055;
    msg.heading = 0.05166114420669665;
    msg.sacc = 0.26069373058572787;
    msg.cacc = 0.6457632339012217;

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
    msg.setTimeStamp(0.011550802518683567);
    msg.setSource(16205U);
    msg.setSourceEntity(7U);
    msg.setDestination(22232U);
    msg.setDestinationEntity(156U);
    msg.itow = 4115853282U;
    msg.lat = 0.18025078107826165;
    msg.lon = 0.4224413704440919;
    msg.height_ell = 0.510671930710971;
    msg.height_sea = 0.8542565033898663;
    msg.hacc = 0.4574978910211811;
    msg.vacc = 0.9934805064917308;
    msg.vel_n = 0.8833318677151026;
    msg.vel_e = 0.8564326638905687;
    msg.vel_d = 0.2993646542184085;
    msg.speed = 0.6010961734985868;
    msg.gspeed = 0.4434186856647614;
    msg.heading = 0.9326751995637305;
    msg.sacc = 0.7818783092451149;
    msg.cacc = 0.6338578903536918;

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
    msg.setTimeStamp(0.29451305191081634);
    msg.setSource(45861U);
    msg.setSourceEntity(60U);
    msg.setDestination(25025U);
    msg.setDestinationEntity(153U);
    msg.id = 249U;
    msg.value = 0.6031482396599328;

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
    msg.setTimeStamp(0.9933240886992188);
    msg.setSource(47072U);
    msg.setSourceEntity(131U);
    msg.setDestination(628U);
    msg.setDestinationEntity(185U);
    msg.id = 90U;
    msg.value = 0.28938186900146246;

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
    msg.setTimeStamp(0.20143860381702827);
    msg.setSource(37327U);
    msg.setSourceEntity(42U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(81U);
    msg.id = 98U;
    msg.value = 0.7425288393266026;

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
    msg.setTimeStamp(0.08985571406881598);
    msg.setSource(35327U);
    msg.setSourceEntity(141U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(48U);
    msg.x = 0.7814565727146343;
    msg.y = 0.6568989604266939;
    msg.z = 0.18360680388100703;
    msg.phi = 0.5627660224291124;
    msg.theta = 0.21332999312932954;
    msg.psi = 0.006044623419949713;

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
    msg.setTimeStamp(0.5846732607140637);
    msg.setSource(58961U);
    msg.setSourceEntity(91U);
    msg.setDestination(26824U);
    msg.setDestinationEntity(52U);
    msg.x = 0.4976165739752416;
    msg.y = 0.8651744153496744;
    msg.z = 0.31935973277120366;
    msg.phi = 0.16445210168464364;
    msg.theta = 0.9771464852683026;
    msg.psi = 0.1385573947820995;

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
    msg.setTimeStamp(0.5537613460166808);
    msg.setSource(58135U);
    msg.setSourceEntity(174U);
    msg.setDestination(41321U);
    msg.setDestinationEntity(111U);
    msg.x = 0.9249296196913726;
    msg.y = 0.9680927374656121;
    msg.z = 0.5266329339011395;
    msg.phi = 0.7465760349609804;
    msg.theta = 0.22372702611581374;
    msg.psi = 0.1834684418968794;

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
    msg.setTimeStamp(0.729928622518658);
    msg.setSource(63892U);
    msg.setSourceEntity(47U);
    msg.setDestination(42147U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.3531425237438178;
    msg.beam_height = 0.8026026874587635;

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
    msg.setTimeStamp(0.0059324969020396745);
    msg.setSource(9185U);
    msg.setSourceEntity(61U);
    msg.setDestination(18631U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.7265880550693435;
    msg.beam_height = 0.6199588570473934;

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
    msg.setTimeStamp(0.4406971536051618);
    msg.setSource(64094U);
    msg.setSourceEntity(210U);
    msg.setDestination(35804U);
    msg.setDestinationEntity(137U);
    msg.beam_width = 0.4050646520866511;
    msg.beam_height = 0.9517649372380184;

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
    msg.setTimeStamp(0.9325747140867392);
    msg.setSource(50949U);
    msg.setSourceEntity(194U);
    msg.setDestination(18688U);
    msg.setDestinationEntity(155U);
    msg.id = 69U;
    msg.zoom = 240U;
    msg.action = 166U;

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
    msg.setTimeStamp(0.6764642953886436);
    msg.setSource(37678U);
    msg.setSourceEntity(68U);
    msg.setDestination(21314U);
    msg.setDestinationEntity(23U);
    msg.id = 207U;
    msg.zoom = 84U;
    msg.action = 198U;

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
    msg.setTimeStamp(0.8358374421059045);
    msg.setSource(50951U);
    msg.setSourceEntity(192U);
    msg.setDestination(29325U);
    msg.setDestinationEntity(239U);
    msg.id = 98U;
    msg.zoom = 171U;
    msg.action = 52U;

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
    msg.setTimeStamp(0.8909339724632781);
    msg.setSource(46094U);
    msg.setSourceEntity(159U);
    msg.setDestination(62592U);
    msg.setDestinationEntity(231U);
    msg.id = 75U;
    msg.value = 0.8719699811248366;

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
    msg.setTimeStamp(0.8202892205172496);
    msg.setSource(44797U);
    msg.setSourceEntity(85U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(18U);
    msg.id = 62U;
    msg.value = 0.5278760687546612;

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
    msg.setTimeStamp(0.4792674628623025);
    msg.setSource(24142U);
    msg.setSourceEntity(141U);
    msg.setDestination(19524U);
    msg.setDestinationEntity(211U);
    msg.id = 240U;
    msg.value = 0.5472930897924181;

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
    msg.setTimeStamp(0.48377727498043877);
    msg.setSource(49163U);
    msg.setSourceEntity(142U);
    msg.setDestination(12157U);
    msg.setDestinationEntity(42U);
    msg.id = 251U;
    msg.value = 0.14740167220056766;

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
    msg.setTimeStamp(0.45534976058007925);
    msg.setSource(28001U);
    msg.setSourceEntity(111U);
    msg.setDestination(8615U);
    msg.setDestinationEntity(124U);
    msg.id = 96U;
    msg.value = 0.8101798975825082;

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
    msg.setTimeStamp(0.22590663120505206);
    msg.setSource(11752U);
    msg.setSourceEntity(75U);
    msg.setDestination(62404U);
    msg.setDestinationEntity(86U);
    msg.id = 73U;
    msg.value = 0.515832784899526;

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
    msg.setTimeStamp(0.270118070876157);
    msg.setSource(17344U);
    msg.setSourceEntity(95U);
    msg.setDestination(36911U);
    msg.setDestinationEntity(183U);
    msg.id = 44U;
    msg.angle = 0.2774551582077115;

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
    msg.setTimeStamp(0.7943751242868194);
    msg.setSource(31284U);
    msg.setSourceEntity(42U);
    msg.setDestination(29228U);
    msg.setDestinationEntity(174U);
    msg.id = 223U;
    msg.angle = 0.37153315741829385;

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
    msg.setTimeStamp(0.9345654555444558);
    msg.setSource(33771U);
    msg.setSourceEntity(10U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(80U);
    msg.id = 140U;
    msg.angle = 0.8455196879015545;

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
    msg.setTimeStamp(0.5786804266028817);
    msg.setSource(65249U);
    msg.setSourceEntity(249U);
    msg.setDestination(26912U);
    msg.setDestinationEntity(33U);
    msg.op = 157U;
    msg.actions.assign("TWWVFFPTDAQIWXGCZMAWALGIBSFCOGUQVVJNCXLBUYUOUFGXNSPQSQFVNKEHMJUKXDMU");

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
    msg.setTimeStamp(0.550826631429893);
    msg.setSource(38280U);
    msg.setSourceEntity(35U);
    msg.setDestination(913U);
    msg.setDestinationEntity(116U);
    msg.op = 50U;
    msg.actions.assign("SLDEESDNBOIQYZOASRSRXLVGJCLSCTRHWLPUENFXYCTX");

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
    msg.setTimeStamp(0.4666054492311906);
    msg.setSource(47175U);
    msg.setSourceEntity(98U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(236U);
    msg.op = 233U;
    msg.actions.assign("VBTXEVLBKCWDJZCQDHXMXOUNHYMHDPYMGMIHRMWDWGWRHCOYFDQLBTCXWQVJFILLJPJPBRJGOGKSUT");

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
    msg.setTimeStamp(0.6201771637211841);
    msg.setSource(954U);
    msg.setSourceEntity(149U);
    msg.setDestination(24318U);
    msg.setDestinationEntity(197U);
    msg.actions.assign("BQWWRHAZERVQASXOCEMMBUZIVPPCMYUHGVKQRTUHHPEQYETUZVDKPTLWTQGFYSMLNUPBIGFYZECLGMTNXYNBWRSFBMMNHXZDXSGPFTUTQOIOJENTQBEWOXJEGNKLPVAORDAQIKPCCKZGSRJFKOUTKAKLJOHLWJPVHKXRDVZJONNVZHISDVORJKYGQWWJSFBLPLWAMFGRLAVAYERFAJHOYCCX");

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
    msg.setTimeStamp(0.5447759466901851);
    msg.setSource(32569U);
    msg.setSourceEntity(79U);
    msg.setDestination(60762U);
    msg.setDestinationEntity(191U);
    msg.actions.assign("EACOXSVOGWZGBVFRYECNZPOKJEHSTDLXXJPTNDUFVXXQDMASJLLLNFIKYEOGIIAVLLOQPPYZZEHMZCOSQSIKQYCITQBIUHDDNWWTPYIUICVXJYLJEQEMVUVCQWJPQVNMLDBMGGBNAXRANQCBZBGODREWLJMAVUPKRLJOBRTRYMFTASABQKFSOATBCGHJBXXS");

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
    msg.setTimeStamp(0.795914311180898);
    msg.setSource(4475U);
    msg.setSourceEntity(34U);
    msg.setDestination(32701U);
    msg.setDestinationEntity(192U);
    msg.actions.assign("WWRVEPNVDRYQWFXZONJUTNRCMSKDVGNOLTJAPPUBEWUXUQDYSVJXZAFISDIGYINLDHFRHILRAGJMDJZLGZIYDGWQMHFNWFVXQMPGEBKBPFXYSRCESMUPUFTYVTWBNMOTTAZPHHHZFJKLDBPQTRKICKNELHCCUKSOCCAAOVJPWJQIZIXDRQIGOAHDHBEEVXMBYKBKECEIAMNASTWWQ");

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
    msg.setTimeStamp(0.8989323710624415);
    msg.setSource(65441U);
    msg.setSourceEntity(234U);
    msg.setDestination(26775U);
    msg.setDestinationEntity(219U);
    msg.button = 45U;
    msg.value = 130U;

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
    msg.setTimeStamp(0.293553814344097);
    msg.setSource(9816U);
    msg.setSourceEntity(219U);
    msg.setDestination(51113U);
    msg.setDestinationEntity(242U);
    msg.button = 222U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.9482670994599202);
    msg.setSource(16288U);
    msg.setSourceEntity(163U);
    msg.setDestination(43276U);
    msg.setDestinationEntity(158U);
    msg.button = 150U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.5993905360679438);
    msg.setSource(50845U);
    msg.setSourceEntity(67U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(218U);
    msg.op = 215U;
    msg.text.assign("ZFNLVAIILUWPQJEEUEDPMKBITDIVDYHQZNRPXSPHSYIOOCKMVFPUKAXKWMTUYBGZNCFJJYJN");

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
    msg.setTimeStamp(0.8613600351184078);
    msg.setSource(65191U);
    msg.setSourceEntity(35U);
    msg.setDestination(35433U);
    msg.setDestinationEntity(223U);
    msg.op = 252U;
    msg.text.assign("SEUPJMWOHQCEHLRWKCHFTJHTJUOECQYGLGXVTIKQOBAXLDIXBETXWFPCOQVPRKDKEJNZBMFLHYDRGVURNCTUFSVTSNTDBBZVFEIZSFLYXYDDSITXNPSHVRCPLVAHZJOPQOEASAWPHGZSCBILWRAUWIGYMNEGQFXITYWYEYSZWOZMYKKEVKLXQRMUGPVURWVMZDYNOADWGHGLXUNIUKMRJQCMCLIOBK");

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
    msg.setTimeStamp(0.6091743181416583);
    msg.setSource(24123U);
    msg.setSourceEntity(160U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(34U);
    msg.op = 30U;
    msg.text.assign("HRHYQBGFJWDXGOHTFBLTLKCKDJECDUJLUBTZOITSBMGACCZUIHLJWSVQVTEGFQSDPLPLWVPFTPBKWTRBSMAAKKZOJLSTRDMRICQF");

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
    msg.setTimeStamp(0.819600322191138);
    msg.setSource(26277U);
    msg.setSourceEntity(190U);
    msg.setDestination(20074U);
    msg.setDestinationEntity(111U);
    msg.op = 47U;
    msg.time_remain = 0.6083418801362562;
    msg.sched_time = 0.37985123620558947;

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
    msg.setTimeStamp(0.9493857286930911);
    msg.setSource(12595U);
    msg.setSourceEntity(254U);
    msg.setDestination(34679U);
    msg.setDestinationEntity(34U);
    msg.op = 66U;
    msg.time_remain = 0.8290852134366006;
    msg.sched_time = 0.38991687380774;

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
    msg.setTimeStamp(0.3754286810697086);
    msg.setSource(32252U);
    msg.setSourceEntity(120U);
    msg.setDestination(16293U);
    msg.setDestinationEntity(224U);
    msg.op = 26U;
    msg.time_remain = 0.974178681988436;
    msg.sched_time = 0.64733231751847;

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
    msg.setTimeStamp(0.723269807529486);
    msg.setSource(33955U);
    msg.setSourceEntity(99U);
    msg.setDestination(60367U);
    msg.setDestinationEntity(67U);
    msg.name.assign("UAYEIFEZMEKVCYMYZPBHBUEAHDRZFNCQSSIIPPGVXATTQQNQGGYUMWQVFWPLLKODNPBFPVBSYJHWJVVYJLJMRLBUAEVMKVCODCTYXXASFYJLOXGGFKTSOHPRNEVQBCNRDOWMIHWPERTQDNRSOLZDBSDKFUIVSUKWHYKWIXIRXTTWMHUZDJATOXMDZFIDGWCUCGRXZLTLBKJXUC");
    msg.op = 110U;
    msg.sched_time = 0.8879794643625855;

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
    msg.setTimeStamp(0.6865566388277181);
    msg.setSource(2859U);
    msg.setSourceEntity(183U);
    msg.setDestination(40786U);
    msg.setDestinationEntity(94U);
    msg.name.assign("MWMUOSSBDYHOIGQBNEHFDQKVNGQKXYQIZITTCAAZQBTOWPDASARXDPRCXLYPFPEQLZOYOKEKCWJCSQFPVGYKIZMMLGEWZKCJTBSBNCRYEFIKLXAEMJYBNSMOVZJDNBFURIUAAUDGXPOLWZKXHTCHWDPSMIDPRLLFJKFPGIXUZMVRUSUVHEGGYHTJXZEUUXHJPNOVWGNBQQAMJIBJNCUWRFYTRLCAODIVYVGWLNVENOBWJRZSHHVTXKTFDEF");
    msg.op = 81U;
    msg.sched_time = 0.8003645532888588;

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
    msg.setTimeStamp(0.41078359659726393);
    msg.setSource(63000U);
    msg.setSourceEntity(198U);
    msg.setDestination(13103U);
    msg.setDestinationEntity(31U);
    msg.name.assign("NUQJVHCTQBGDKGWNWXUAENHPAXYOBTXHCGPYZITVRRPYWEAPQTEXWQKGLJCVDNEBICABDLUWYYZAUXRHOORRXORNZIKLZYJMAFNZQWIXHEVDNSBWVABRZTGTXAGDSJDESKXLSBHOIKLQPZLGEMNUSSFUEFTKVTIHCUMFMSNGPRKOXZHZFGSLKJDJCI");
    msg.op = 193U;
    msg.sched_time = 0.3224044786633985;

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
    msg.setTimeStamp(0.22235641360117575);
    msg.setSource(53312U);
    msg.setSourceEntity(237U);
    msg.setDestination(31043U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.1147958906227734);
    msg.setSource(60653U);
    msg.setSourceEntity(182U);
    msg.setDestination(5239U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.772431286250323);
    msg.setSource(37515U);
    msg.setSourceEntity(206U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.5479321289929768);
    msg.setSource(30314U);
    msg.setSourceEntity(144U);
    msg.setDestination(18241U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DMTYLJTKBPVUVQSMOCFJPUWARVNVMYZPKN");
    msg.state = 81U;

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
    msg.setTimeStamp(0.09349356076543835);
    msg.setSource(63699U);
    msg.setSourceEntity(204U);
    msg.setDestination(41582U);
    msg.setDestinationEntity(210U);
    msg.name.assign("RFKDKGFYJNMOOUTLHNYDAGFMUBWBIXETHAOCQTIKZHLRVVLTHEDNZBRIJIDKWTVNTYWMPDQIPMQOKFAKTDYXQHASVNEJCRGRVFAUKQHXORRQTULBPEUHJZACOSNVNYCFIIQUGAMCXCBMWMUZEXESWCZEQXWCGMDPYHEPXYAHDLKBFLUOPKAOSFVRMASKEVGZPVGQCLWFDRUGJHIDBPNLTJCQZWRSLZVBNPLMWYXTYBZSJPYJJOXWSUOSZJXIFS");
    msg.state = 23U;

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
    msg.setTimeStamp(0.9426488662155535);
    msg.setSource(35340U);
    msg.setSourceEntity(149U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(94U);
    msg.name.assign("DTQBFSCJDDMIYTJFGKOSVIRKDJMYKTTEHAZOJVFRTXUBLAMLGOJBQENHRMLYXMECBIIUDVCIQTFYPDOVXWKFKPGMSAKXO");
    msg.state = 61U;

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
    msg.setTimeStamp(0.5417454591024011);
    msg.setSource(42131U);
    msg.setSourceEntity(21U);
    msg.setDestination(31977U);
    msg.setDestinationEntity(201U);
    msg.id = 250U;
    msg.op = 45U;

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
    msg.setTimeStamp(0.009881788772258315);
    msg.setSource(43642U);
    msg.setSourceEntity(241U);
    msg.setDestination(61816U);
    msg.setDestinationEntity(230U);
    msg.id = 169U;
    msg.op = 6U;

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
    msg.setTimeStamp(0.1923339344201147);
    msg.setSource(61058U);
    msg.setSourceEntity(201U);
    msg.setDestination(23709U);
    msg.setDestinationEntity(136U);
    msg.id = 243U;
    msg.op = 189U;

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
    msg.setTimeStamp(0.9140201977312513);
    msg.setSource(36111U);
    msg.setSourceEntity(247U);
    msg.setDestination(23114U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.35211036040199895;
    msg.lon = 0.3532722371958513;
    msg.height = 0.23467192461666964;
    msg.x = 0.7198891645586905;
    msg.y = 0.9828167398393732;
    msg.z = 0.5518861347524104;
    msg.phi = 0.680533188781431;
    msg.theta = 0.7159070943816411;
    msg.psi = 0.8896807121551681;
    msg.u = 0.6793924815662801;
    msg.v = 0.8207758177599258;
    msg.w = 0.7876891173259954;
    msg.vx = 0.2819791483247027;
    msg.vy = 0.425299283480299;
    msg.vz = 0.49844843567820185;
    msg.p = 0.6041155396174296;
    msg.q = 0.2226050401470504;
    msg.r = 0.5607013277196761;
    msg.depth = 0.7534518554910048;
    msg.alt = 0.21744299229193031;

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
    msg.setTimeStamp(0.018998867646053852);
    msg.setSource(25148U);
    msg.setSourceEntity(76U);
    msg.setDestination(61204U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.7092157704973566;
    msg.lon = 0.8838152911940381;
    msg.height = 0.743831493892265;
    msg.x = 0.6230638442907865;
    msg.y = 0.4347295188862339;
    msg.z = 0.8988797119985198;
    msg.phi = 0.4189678367502506;
    msg.theta = 0.9684642101213329;
    msg.psi = 0.7738577518385202;
    msg.u = 0.09054522834375178;
    msg.v = 0.40786212725938253;
    msg.w = 0.37222892980271827;
    msg.vx = 0.5337905840130502;
    msg.vy = 0.6599598959853814;
    msg.vz = 0.5087319388024564;
    msg.p = 0.4997567881819549;
    msg.q = 0.390241392634742;
    msg.r = 0.9826791672713362;
    msg.depth = 0.37668486938311296;
    msg.alt = 0.11877052897343066;

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
    msg.setTimeStamp(0.3137984145761116);
    msg.setSource(13319U);
    msg.setSourceEntity(27U);
    msg.setDestination(58898U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.9406815418365507;
    msg.lon = 0.13570231342316397;
    msg.height = 0.5835217794012024;
    msg.x = 0.20204456026521211;
    msg.y = 0.2338838375240493;
    msg.z = 0.6546519816944125;
    msg.phi = 0.749908073086249;
    msg.theta = 0.76598486790255;
    msg.psi = 0.0027701361182638218;
    msg.u = 0.7007144841601822;
    msg.v = 0.2680568922510631;
    msg.w = 0.5003105894415356;
    msg.vx = 0.27105064791910505;
    msg.vy = 0.7930387332309037;
    msg.vz = 0.5398413980789677;
    msg.p = 0.6282327917749266;
    msg.q = 0.08459989906084608;
    msg.r = 0.7331107017400585;
    msg.depth = 0.029436261407626674;
    msg.alt = 0.29699073791697894;

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
    msg.setTimeStamp(0.5820966020026952);
    msg.setSource(19633U);
    msg.setSourceEntity(146U);
    msg.setDestination(54960U);
    msg.setDestinationEntity(43U);
    msg.x = 0.29260191235948396;
    msg.y = 0.8309944855507126;
    msg.z = 0.6438320531535354;

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
    msg.setTimeStamp(0.4133557107466095);
    msg.setSource(35334U);
    msg.setSourceEntity(166U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(41U);
    msg.x = 0.40711830259081383;
    msg.y = 0.9779025174900569;
    msg.z = 0.8852915601202574;

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
    msg.setTimeStamp(0.8594320717439862);
    msg.setSource(49081U);
    msg.setSourceEntity(30U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(191U);
    msg.x = 0.9919951938669039;
    msg.y = 0.1105665488297436;
    msg.z = 0.9507597368405513;

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
    msg.setTimeStamp(0.13587807626373172);
    msg.setSource(19778U);
    msg.setSourceEntity(57U);
    msg.setDestination(21372U);
    msg.setDestinationEntity(115U);
    msg.value = 0.28738628808725797;

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
    msg.setTimeStamp(0.9388355624387774);
    msg.setSource(1062U);
    msg.setSourceEntity(136U);
    msg.setDestination(15679U);
    msg.setDestinationEntity(80U);
    msg.value = 0.423935056940254;

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
    msg.setTimeStamp(0.8972717203955926);
    msg.setSource(62910U);
    msg.setSourceEntity(29U);
    msg.setDestination(21450U);
    msg.setDestinationEntity(208U);
    msg.value = 0.49866812593065446;

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
    msg.setTimeStamp(0.1730484299408338);
    msg.setSource(43762U);
    msg.setSourceEntity(36U);
    msg.setDestination(12652U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9476490834396512;

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
    msg.setTimeStamp(0.2108073530794159);
    msg.setSource(6709U);
    msg.setSourceEntity(119U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(48U);
    msg.value = 0.2628931644176483;

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
    msg.setTimeStamp(0.2883361890788292);
    msg.setSource(49317U);
    msg.setSourceEntity(54U);
    msg.setDestination(59672U);
    msg.setDestinationEntity(205U);
    msg.value = 0.30042593576421517;

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
    msg.setTimeStamp(0.07042707217201039);
    msg.setSource(36724U);
    msg.setSourceEntity(29U);
    msg.setDestination(4924U);
    msg.setDestinationEntity(74U);
    msg.x = 0.4824002175391794;
    msg.y = 0.7591090826484181;
    msg.z = 0.9430476889578959;
    msg.phi = 0.4573983217509182;
    msg.theta = 0.266053889058541;
    msg.psi = 0.8303427450941374;
    msg.p = 0.7600964348269916;
    msg.q = 0.6524504159500579;
    msg.r = 0.8845698864867344;
    msg.u = 0.7978222834468246;
    msg.v = 0.05495298830756057;
    msg.w = 0.9112428237076657;
    msg.bias_psi = 0.006834696474187663;
    msg.bias_r = 0.20709691117009887;

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
    msg.setTimeStamp(0.23395228465512663);
    msg.setSource(6387U);
    msg.setSourceEntity(139U);
    msg.setDestination(8108U);
    msg.setDestinationEntity(56U);
    msg.x = 0.31336572189013767;
    msg.y = 0.4749783244085607;
    msg.z = 0.7031914364666619;
    msg.phi = 0.695893126922696;
    msg.theta = 0.30586420032637573;
    msg.psi = 0.882410756578917;
    msg.p = 0.1553677319458322;
    msg.q = 0.5105784891156052;
    msg.r = 0.4276356802399429;
    msg.u = 0.5352688715655987;
    msg.v = 0.8197877797607491;
    msg.w = 0.13381557367311891;
    msg.bias_psi = 0.3235937258347644;
    msg.bias_r = 0.12012093523198619;

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
    msg.setTimeStamp(0.30775664777366774);
    msg.setSource(50110U);
    msg.setSourceEntity(224U);
    msg.setDestination(13340U);
    msg.setDestinationEntity(19U);
    msg.x = 0.6693216690415659;
    msg.y = 0.7093482732036438;
    msg.z = 0.7155350130171535;
    msg.phi = 0.13487861586665217;
    msg.theta = 0.4450916594156259;
    msg.psi = 0.8600573110300544;
    msg.p = 0.8184662226816136;
    msg.q = 0.10677536230429296;
    msg.r = 0.2766661941778926;
    msg.u = 0.3682334820894194;
    msg.v = 0.25719355895905094;
    msg.w = 0.15877538355864118;
    msg.bias_psi = 0.41002711608556053;
    msg.bias_r = 0.8190920355681325;

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
    msg.setTimeStamp(0.9455630972243574);
    msg.setSource(60852U);
    msg.setSourceEntity(242U);
    msg.setDestination(54350U);
    msg.setDestinationEntity(243U);
    msg.bias_psi = 0.6463831590921285;
    msg.bias_r = 0.8441954542487193;
    msg.cog = 0.21247134410913926;
    msg.cyaw = 0.25481553505407817;
    msg.lbl_rej_level = 0.29450338868418513;
    msg.gps_rej_level = 0.07612516042491124;
    msg.custom_x = 0.3327618370314507;
    msg.custom_y = 0.921479679699944;
    msg.custom_z = 0.18431108122512607;

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
    msg.setTimeStamp(0.5442690911487542);
    msg.setSource(21490U);
    msg.setSourceEntity(120U);
    msg.setDestination(40321U);
    msg.setDestinationEntity(125U);
    msg.bias_psi = 0.2907115773440242;
    msg.bias_r = 0.7823014972539262;
    msg.cog = 0.0862814420596707;
    msg.cyaw = 0.3439362415298195;
    msg.lbl_rej_level = 0.3935223206065074;
    msg.gps_rej_level = 0.10758938153129538;
    msg.custom_x = 0.5118547906603563;
    msg.custom_y = 0.6139533709482532;
    msg.custom_z = 0.33725416547338094;

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
    msg.setTimeStamp(0.5652573514295056);
    msg.setSource(56966U);
    msg.setSourceEntity(208U);
    msg.setDestination(47770U);
    msg.setDestinationEntity(104U);
    msg.bias_psi = 0.4770798436385315;
    msg.bias_r = 0.7651318000146168;
    msg.cog = 0.2660656047706651;
    msg.cyaw = 0.504549031779297;
    msg.lbl_rej_level = 0.02533423801159196;
    msg.gps_rej_level = 0.16627465878232472;
    msg.custom_x = 0.5883780943853916;
    msg.custom_y = 0.4114974668355348;
    msg.custom_z = 0.04757315931552486;

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
    msg.setTimeStamp(0.041937328623270376);
    msg.setSource(7121U);
    msg.setSourceEntity(75U);
    msg.setDestination(1696U);
    msg.setDestinationEntity(14U);
    msg.utc_time = 0.06794141357968275;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.6215864859531927);
    msg.setSource(52186U);
    msg.setSourceEntity(149U);
    msg.setDestination(42662U);
    msg.setDestinationEntity(173U);
    msg.utc_time = 0.9589219177277065;
    msg.reason = 33U;

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
    msg.setTimeStamp(0.9146683295195708);
    msg.setSource(26559U);
    msg.setSourceEntity(53U);
    msg.setDestination(63376U);
    msg.setDestinationEntity(69U);
    msg.utc_time = 0.32614282215542056;
    msg.reason = 7U;

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
    msg.setTimeStamp(0.4430902528328051);
    msg.setSource(22847U);
    msg.setSourceEntity(112U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(164U);
    msg.id = 78U;
    msg.range = 0.23869694447689915;
    msg.acceptance = 90U;

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
    msg.setTimeStamp(0.38029732688150475);
    msg.setSource(10059U);
    msg.setSourceEntity(20U);
    msg.setDestination(23837U);
    msg.setDestinationEntity(99U);
    msg.id = 201U;
    msg.range = 0.060338131413254725;
    msg.acceptance = 217U;

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
    msg.setTimeStamp(0.7070112723458887);
    msg.setSource(20441U);
    msg.setSourceEntity(49U);
    msg.setDestination(53675U);
    msg.setDestinationEntity(138U);
    msg.id = 205U;
    msg.range = 0.7525216542347646;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.26855080753879124);
    msg.setSource(48826U);
    msg.setSourceEntity(9U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(106U);
    msg.type = 23U;
    msg.reason = 188U;
    msg.value = 0.4056835934533014;
    msg.timestep = 0.34921362390639044;

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
    msg.setTimeStamp(0.18528438570845152);
    msg.setSource(45448U);
    msg.setSourceEntity(111U);
    msg.setDestination(7796U);
    msg.setDestinationEntity(124U);
    msg.type = 185U;
    msg.reason = 178U;
    msg.value = 0.018452018292158257;
    msg.timestep = 0.008936887381464143;

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
    msg.setTimeStamp(0.6095858159579165);
    msg.setSource(30304U);
    msg.setSourceEntity(137U);
    msg.setDestination(12306U);
    msg.setDestinationEntity(245U);
    msg.type = 78U;
    msg.reason = 212U;
    msg.value = 0.44941406064463096;
    msg.timestep = 0.3049711049275431;

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
    msg.setTimeStamp(0.9631969061267442);
    msg.setSource(42359U);
    msg.setSourceEntity(79U);
    msg.setDestination(52178U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.9693521821569843);
    msg.setSource(36918U);
    msg.setSourceEntity(165U);
    msg.setDestination(48117U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.44179209138942566);
    msg.setSource(38723U);
    msg.setSourceEntity(237U);
    msg.setDestination(40473U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.4346741023240007);
    msg.setSource(1060U);
    msg.setSourceEntity(110U);
    msg.setDestination(36777U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("IUALQHCWFVRXZKUMSNDNBLHUNEFNRSAMBGAOBTXMQHHINSNDYQYPCPJOQQBCATEVMWDSFMSLFTQHYJFLUMXGORIGVDGMI");
    msg.x = 0.24277155959787133;
    msg.y = 0.8738609163631937;
    msg.depth = 0.273716222801224;
    msg.var_x = 0.17936752901982345;
    msg.var_y = 0.3779565806533711;

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
    msg.setTimeStamp(0.08381631881465457);
    msg.setSource(17043U);
    msg.setSourceEntity(155U);
    msg.setDestination(35718U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("ANRFBEAGGTORPKIDZDEDMZMYLIWOPIAFTHXUFQRHLHJZQBXVZPAVCYNTWAFDZSEOJJCFSYRBGFLOWRRHSQENZKWUXTCZWJWAYGPYBHDONGXLVOHIHVQCMKJVQXSVAJKWQMEKBJLUIDYNOLERGYSMVLTTVSWWBPDHJDDUFBSGCIXRISTHJZ");
    msg.x = 0.20980188854261528;
    msg.y = 0.6212350059490844;
    msg.depth = 0.48335485470641626;
    msg.var_x = 0.3278669042220228;
    msg.var_y = 0.9633771535167397;

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
    msg.setTimeStamp(0.6607822380465112);
    msg.setSource(43065U);
    msg.setSourceEntity(164U);
    msg.setDestination(19283U);
    msg.setDestinationEntity(54U);
    msg.beacon.assign("JIJDZGZILHKELKDQMCSNIPKANSREAKFXOOJISLUVMVITYFFEYSFTXHPWAFELORFGRUWGHFPGRBSJYQAMB");
    msg.x = 0.2935606694440982;
    msg.y = 0.4780877413165321;
    msg.depth = 0.23950657965686684;
    msg.var_x = 0.1940527430406931;
    msg.var_y = 0.07090646685493462;

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
    msg.setTimeStamp(0.5740470362719466);
    msg.setSource(25825U);
    msg.setSourceEntity(218U);
    msg.setDestination(20106U);
    msg.setDestinationEntity(53U);
    msg.value = 0.9500626886951435;

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
    msg.setTimeStamp(0.41288838449506626);
    msg.setSource(133U);
    msg.setSourceEntity(66U);
    msg.setDestination(42795U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6209950198467171;

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
    msg.setTimeStamp(0.27693896038692745);
    msg.setSource(9361U);
    msg.setSourceEntity(26U);
    msg.setDestination(51807U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6688242158586821;

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
    msg.setTimeStamp(0.004246433961207163);
    msg.setSource(3109U);
    msg.setSourceEntity(51U);
    msg.setDestination(9890U);
    msg.setDestinationEntity(212U);
    msg.value = 0.34944852246796576;
    msg.z_units = 5U;

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
    msg.setTimeStamp(0.8056905361094746);
    msg.setSource(51636U);
    msg.setSourceEntity(17U);
    msg.setDestination(57293U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6574274615956124;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.11193248159556268);
    msg.setSource(16155U);
    msg.setSourceEntity(214U);
    msg.setDestination(27436U);
    msg.setDestinationEntity(72U);
    msg.value = 0.41340071909744647;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.6521720053352488);
    msg.setSource(17777U);
    msg.setSourceEntity(67U);
    msg.setDestination(4424U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9979904751021201;
    msg.speed_units = 157U;

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
    msg.setTimeStamp(0.8214915101152432);
    msg.setSource(33501U);
    msg.setSourceEntity(102U);
    msg.setDestination(41437U);
    msg.setDestinationEntity(62U);
    msg.value = 0.8943579256380922;
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
    msg.setTimeStamp(0.6995612796231988);
    msg.setSource(338U);
    msg.setSourceEntity(69U);
    msg.setDestination(2944U);
    msg.setDestinationEntity(253U);
    msg.value = 0.5338975534422147;
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
    msg.setTimeStamp(0.7169369006911008);
    msg.setSource(16985U);
    msg.setSourceEntity(205U);
    msg.setDestination(63535U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3138409160355261;

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
    msg.setTimeStamp(0.26689688848941706);
    msg.setSource(19419U);
    msg.setSourceEntity(223U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9463011328378775;

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
    msg.setTimeStamp(0.2836592726024342);
    msg.setSource(16856U);
    msg.setSourceEntity(94U);
    msg.setDestination(59180U);
    msg.setDestinationEntity(225U);
    msg.value = 0.42904725409801225;

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
    msg.setTimeStamp(0.3402115559108021);
    msg.setSource(31629U);
    msg.setSourceEntity(9U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3255681072613822;

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
    msg.setTimeStamp(0.34017537830821976);
    msg.setSource(8079U);
    msg.setSourceEntity(241U);
    msg.setDestination(2514U);
    msg.setDestinationEntity(58U);
    msg.value = 0.48598293423540395;

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
    msg.setTimeStamp(0.9381689031268267);
    msg.setSource(22303U);
    msg.setSourceEntity(181U);
    msg.setDestination(25065U);
    msg.setDestinationEntity(232U);
    msg.value = 0.6131990624760777;

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
    msg.setTimeStamp(0.49957612982120214);
    msg.setSource(32659U);
    msg.setSourceEntity(237U);
    msg.setDestination(44384U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7349389663122302;

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
    msg.setTimeStamp(0.7779458216178032);
    msg.setSource(32027U);
    msg.setSourceEntity(167U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(4U);
    msg.value = 0.06669424713714445;

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
    msg.setTimeStamp(0.2855870151881481);
    msg.setSource(60125U);
    msg.setSourceEntity(69U);
    msg.setDestination(52437U);
    msg.setDestinationEntity(5U);
    msg.value = 0.06260490943894526;

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
    msg.setTimeStamp(0.5554964546130092);
    msg.setSource(11346U);
    msg.setSourceEntity(5U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(234U);
    msg.start_lat = 0.5113139222302051;
    msg.start_lon = 0.9263939345924752;
    msg.start_z = 0.2723757869909338;
    msg.start_z_units = 118U;
    msg.end_lat = 0.13144236570678436;
    msg.end_lon = 0.5204982798734663;
    msg.end_z = 0.2982273041144523;
    msg.end_z_units = 141U;
    msg.speed = 0.10881848128452964;
    msg.speed_units = 72U;
    msg.lradius = 0.4108133183206789;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.4220902182315609);
    msg.setSource(49517U);
    msg.setSourceEntity(95U);
    msg.setDestination(22994U);
    msg.setDestinationEntity(142U);
    msg.start_lat = 0.16618381297811224;
    msg.start_lon = 0.1280027497829882;
    msg.start_z = 0.5413178770753099;
    msg.start_z_units = 229U;
    msg.end_lat = 0.6419662916980183;
    msg.end_lon = 0.5701919146634307;
    msg.end_z = 0.006955471698653071;
    msg.end_z_units = 194U;
    msg.speed = 0.0062355228566546295;
    msg.speed_units = 14U;
    msg.lradius = 0.5748681019788019;
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
    msg.setTimeStamp(0.4093589683958516);
    msg.setSource(39139U);
    msg.setSourceEntity(84U);
    msg.setDestination(32268U);
    msg.setDestinationEntity(64U);
    msg.start_lat = 0.6419494443199729;
    msg.start_lon = 0.9639238872478164;
    msg.start_z = 0.5535181161888337;
    msg.start_z_units = 227U;
    msg.end_lat = 0.13558421408593224;
    msg.end_lon = 0.8453671726330353;
    msg.end_z = 0.22495871360025887;
    msg.end_z_units = 37U;
    msg.speed = 0.07863538941185788;
    msg.speed_units = 172U;
    msg.lradius = 0.7917980315742288;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.05442593221554537);
    msg.setSource(20118U);
    msg.setSourceEntity(6U);
    msg.setDestination(44242U);
    msg.setDestinationEntity(91U);
    msg.x = 0.07784602802859764;
    msg.y = 0.20309866223970063;
    msg.z = 0.9228786696548447;
    msg.k = 0.7900706347607132;
    msg.m = 0.5556517859533147;
    msg.n = 0.7898203441749027;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.34735190073720956);
    msg.setSource(45099U);
    msg.setSourceEntity(78U);
    msg.setDestination(17265U);
    msg.setDestinationEntity(211U);
    msg.x = 0.001390124283458527;
    msg.y = 0.33422919597964107;
    msg.z = 0.06280723053850867;
    msg.k = 0.5649840073761955;
    msg.m = 0.4930210724949513;
    msg.n = 0.1788691356051091;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.8153059016882455);
    msg.setSource(22339U);
    msg.setSourceEntity(23U);
    msg.setDestination(21184U);
    msg.setDestinationEntity(71U);
    msg.x = 0.9452739090965151;
    msg.y = 0.8924133914911394;
    msg.z = 0.04067676926774877;
    msg.k = 0.7691836986397538;
    msg.m = 0.7928941444708956;
    msg.n = 0.8874155016756547;
    msg.flags = 112U;

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
    msg.setTimeStamp(0.6182660765090858);
    msg.setSource(22317U);
    msg.setSourceEntity(151U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(165U);
    msg.value = 0.5147484473208069;

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
    msg.setTimeStamp(0.7168073457840136);
    msg.setSource(47978U);
    msg.setSourceEntity(68U);
    msg.setDestination(61171U);
    msg.setDestinationEntity(123U);
    msg.value = 0.2922849284680261;

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
    msg.setTimeStamp(0.981962022576375);
    msg.setSource(3876U);
    msg.setSourceEntity(10U);
    msg.setDestination(35239U);
    msg.setDestinationEntity(2U);
    msg.value = 0.2735073220802483;

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
    msg.setTimeStamp(0.8104461586815032);
    msg.setSource(44295U);
    msg.setSourceEntity(86U);
    msg.setDestination(52539U);
    msg.setDestinationEntity(190U);
    msg.u = 0.4585304916346926;
    msg.v = 0.008108093332033661;
    msg.w = 0.5938665071982941;
    msg.p = 0.6811293507306877;
    msg.q = 0.6636047630118895;
    msg.r = 0.6320916925632594;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.4615836003230065);
    msg.setSource(53206U);
    msg.setSourceEntity(128U);
    msg.setDestination(33238U);
    msg.setDestinationEntity(71U);
    msg.u = 0.42795761828178225;
    msg.v = 0.7767720288645465;
    msg.w = 0.8731722890765016;
    msg.p = 0.8745770450732436;
    msg.q = 0.11407764140762078;
    msg.r = 0.9118423922397935;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.9442089704728316);
    msg.setSource(33469U);
    msg.setSourceEntity(142U);
    msg.setDestination(34101U);
    msg.setDestinationEntity(177U);
    msg.u = 0.08541788462360489;
    msg.v = 0.6976768722472737;
    msg.w = 0.5598372899888456;
    msg.p = 0.3296869853400495;
    msg.q = 0.6299761055387186;
    msg.r = 0.5140244797409921;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.8907797490687914);
    msg.setSource(4662U);
    msg.setSourceEntity(82U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(92U);
    msg.start_lat = 0.6371509469154172;
    msg.start_lon = 0.9232159949593315;
    msg.start_z = 0.47913936294128645;
    msg.start_z_units = 82U;
    msg.end_lat = 0.48760053772659495;
    msg.end_lon = 0.48944052135134863;
    msg.end_z = 0.13934394642146264;
    msg.end_z_units = 208U;
    msg.lradius = 0.9636039297335384;
    msg.flags = 36U;
    msg.x = 0.414290615506142;
    msg.y = 0.7369834771736787;
    msg.z = 0.9800210263054069;
    msg.vx = 0.9013888959983152;
    msg.vy = 0.6946109052037381;
    msg.vz = 0.854091580605209;
    msg.course_error = 0.06295889420278156;
    msg.eta = 65081U;

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
    msg.setTimeStamp(0.151625709920719);
    msg.setSource(53017U);
    msg.setSourceEntity(101U);
    msg.setDestination(33241U);
    msg.setDestinationEntity(128U);
    msg.start_lat = 0.6928562237806025;
    msg.start_lon = 0.7595516376888137;
    msg.start_z = 0.28585807239454375;
    msg.start_z_units = 25U;
    msg.end_lat = 0.3471370627343161;
    msg.end_lon = 0.6928700521175629;
    msg.end_z = 0.25719459837467784;
    msg.end_z_units = 118U;
    msg.lradius = 0.5594331365846165;
    msg.flags = 8U;
    msg.x = 0.29750626133431746;
    msg.y = 0.9561016753262013;
    msg.z = 0.5032055575841081;
    msg.vx = 0.5156979880432079;
    msg.vy = 0.7138312315495723;
    msg.vz = 0.3202979281781463;
    msg.course_error = 0.24140024996553566;
    msg.eta = 3840U;

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
    msg.setTimeStamp(0.2280187242333206);
    msg.setSource(36556U);
    msg.setSourceEntity(23U);
    msg.setDestination(63057U);
    msg.setDestinationEntity(49U);
    msg.start_lat = 0.17802738186969957;
    msg.start_lon = 0.36520674507177153;
    msg.start_z = 0.7190550594001335;
    msg.start_z_units = 205U;
    msg.end_lat = 0.7071713417864907;
    msg.end_lon = 0.07637561392444392;
    msg.end_z = 0.02101571558628068;
    msg.end_z_units = 12U;
    msg.lradius = 0.10384816716585854;
    msg.flags = 174U;
    msg.x = 0.224466636338445;
    msg.y = 0.9512610363966476;
    msg.z = 0.9252354060269216;
    msg.vx = 0.22376186271883713;
    msg.vy = 0.5240516991960276;
    msg.vz = 0.40756238697992186;
    msg.course_error = 0.6343520521820066;
    msg.eta = 18509U;

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
    msg.setTimeStamp(0.1318606393180305);
    msg.setSource(46894U);
    msg.setSourceEntity(123U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(42U);
    msg.k = 0.8407986577381366;
    msg.m = 0.1717340301658622;
    msg.n = 0.23699116208492488;

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
    msg.setTimeStamp(0.20965501582138624);
    msg.setSource(36487U);
    msg.setSourceEntity(67U);
    msg.setDestination(55784U);
    msg.setDestinationEntity(22U);
    msg.k = 0.10326164688397521;
    msg.m = 0.6544727862987342;
    msg.n = 0.14670759673051492;

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
    msg.setTimeStamp(0.5790235999230092);
    msg.setSource(51582U);
    msg.setSourceEntity(86U);
    msg.setDestination(11715U);
    msg.setDestinationEntity(159U);
    msg.k = 0.22790025264805414;
    msg.m = 0.777614196392798;
    msg.n = 0.7210548372803596;

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
    msg.setTimeStamp(0.47715358435502786);
    msg.setSource(37248U);
    msg.setSourceEntity(181U);
    msg.setDestination(20365U);
    msg.setDestinationEntity(213U);
    msg.p = 0.562465812904689;
    msg.i = 0.9965233271717244;
    msg.d = 0.5847964332564254;
    msg.a = 0.727388909472169;

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
    msg.setTimeStamp(0.7032098645879999);
    msg.setSource(25369U);
    msg.setSourceEntity(131U);
    msg.setDestination(8541U);
    msg.setDestinationEntity(82U);
    msg.p = 0.5795089939727283;
    msg.i = 0.11815140519143286;
    msg.d = 0.7354147968612071;
    msg.a = 0.4545304307533521;

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
    msg.setTimeStamp(0.05628851570679205);
    msg.setSource(29556U);
    msg.setSourceEntity(245U);
    msg.setDestination(17071U);
    msg.setDestinationEntity(113U);
    msg.p = 0.5844450106950895;
    msg.i = 0.8647637922715357;
    msg.d = 0.9573366853341625;
    msg.a = 0.22031495030606596;

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
    msg.setTimeStamp(0.9869010773761847);
    msg.setSource(27923U);
    msg.setSourceEntity(101U);
    msg.setDestination(30871U);
    msg.setDestinationEntity(219U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.05065668427988845);
    msg.setSource(60086U);
    msg.setSourceEntity(223U);
    msg.setDestination(51353U);
    msg.setDestinationEntity(30U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.7726345607797059);
    msg.setSource(56424U);
    msg.setSourceEntity(236U);
    msg.setDestination(59403U);
    msg.setDestinationEntity(151U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.60715291744473);
    msg.setSource(9584U);
    msg.setSourceEntity(91U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(198U);
    msg.timeout = 30732U;
    msg.lat = 0.5293886129054584;
    msg.lon = 0.9386530769674477;
    msg.z = 0.6529722733954865;
    msg.z_units = 225U;
    msg.speed = 0.9611010006697929;
    msg.speed_units = 87U;
    msg.roll = 0.39763727018332584;
    msg.pitch = 0.30135561284828516;
    msg.yaw = 0.7012572669579744;
    msg.custom.assign("ONDIZWXMSQPEWKHLBHOQIYQGGYQLFHIFOUTWARJVPZRSFXLTAS");

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
    msg.setTimeStamp(0.17506914021562903);
    msg.setSource(29249U);
    msg.setSourceEntity(223U);
    msg.setDestination(21565U);
    msg.setDestinationEntity(93U);
    msg.timeout = 20260U;
    msg.lat = 0.5967537136605131;
    msg.lon = 0.6336351055872622;
    msg.z = 0.05505125010795209;
    msg.z_units = 108U;
    msg.speed = 0.7027572386916585;
    msg.speed_units = 33U;
    msg.roll = 0.8768492146955401;
    msg.pitch = 0.7243552425355846;
    msg.yaw = 0.4154237304528209;
    msg.custom.assign("NQKOXMVOFKVEVLMGSRPJYUXDMCSHJUPUOZIYRQHOVZUJKVVYNGBOYJUFRFCEHPWRSPXDZFGLJBQRCWQNLEXRKSAWWSALPJQTAPDCOUXIONACIZIVIFHIGPPYKREOFDJEYLDTWWKLVITQTTACFXXTNCMT");

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
    msg.setTimeStamp(0.5380898804556755);
    msg.setSource(22707U);
    msg.setSourceEntity(160U);
    msg.setDestination(15896U);
    msg.setDestinationEntity(231U);
    msg.timeout = 20739U;
    msg.lat = 0.002663114538191458;
    msg.lon = 0.646740336304402;
    msg.z = 0.8624200029283791;
    msg.z_units = 13U;
    msg.speed = 0.32750914650342977;
    msg.speed_units = 216U;
    msg.roll = 0.9468493408598871;
    msg.pitch = 0.08307876479893794;
    msg.yaw = 0.7525222450113559;
    msg.custom.assign("BSHABAEERFHITKUFZK");

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
    msg.setTimeStamp(0.25069538957024295);
    msg.setSource(47015U);
    msg.setSourceEntity(83U);
    msg.setDestination(5281U);
    msg.setDestinationEntity(138U);
    msg.timeout = 3987U;
    msg.lat = 0.7360585028388928;
    msg.lon = 0.23195311752611025;
    msg.z = 0.4120847186357006;
    msg.z_units = 43U;
    msg.speed = 0.8875697487667821;
    msg.speed_units = 161U;
    msg.duration = 34995U;
    msg.radius = 0.14381555007332436;
    msg.flags = 80U;
    msg.custom.assign("DNQVZVAEFPFKXDFUCIYAXNYSRDNQBINYVJMDF");

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
    msg.setTimeStamp(0.7092906455504946);
    msg.setSource(3919U);
    msg.setSourceEntity(7U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(146U);
    msg.timeout = 1758U;
    msg.lat = 0.39111509197578287;
    msg.lon = 0.33414300223946547;
    msg.z = 0.18638564996615692;
    msg.z_units = 72U;
    msg.speed = 0.11294681626143122;
    msg.speed_units = 73U;
    msg.duration = 37184U;
    msg.radius = 0.6090968436119488;
    msg.flags = 54U;
    msg.custom.assign("EBDKZWLMSMNRCHGTJLWDTXUJIMCJTBFPDALOLZAZLUNHCPQVYOXV");

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
    msg.setTimeStamp(0.43878068412566307);
    msg.setSource(33569U);
    msg.setSourceEntity(242U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(32U);
    msg.timeout = 35150U;
    msg.lat = 0.38146299037594267;
    msg.lon = 0.42961616064775;
    msg.z = 0.3326453255366698;
    msg.z_units = 68U;
    msg.speed = 0.412341221214118;
    msg.speed_units = 248U;
    msg.duration = 25329U;
    msg.radius = 0.5371495900301008;
    msg.flags = 68U;
    msg.custom.assign("QOEITNXYFUPWZLQQNFYHAHIGJCULITZEWOWWWRA");

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
    msg.setTimeStamp(0.2590018464586068);
    msg.setSource(11408U);
    msg.setSourceEntity(50U);
    msg.setDestination(42753U);
    msg.setDestinationEntity(144U);
    msg.custom.assign("GFMINMQULIBAWCJEUFEXUDWPADNHZVEIPKSFIYHJZBTFLOKYYDVKHTKWCBMXRJGQCLIUGDQESYNDWGFWCTZNMBLCKQOADMGIRQPCLRCPRZXCYBXPXESTANVNVHUVBSOARKNXTLHFVBMOUGKZYJHXZIZNESDMLYZFAOSDOPFZUUSNHTIMJVGSAREJTLYMVBQCEAAWXOXEOZPFQQIJGPWRKWAYKKSLPCDEXRSJUJW");

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
    msg.setTimeStamp(0.8049509634319008);
    msg.setSource(40085U);
    msg.setSourceEntity(131U);
    msg.setDestination(63983U);
    msg.setDestinationEntity(26U);
    msg.custom.assign("SGFGOLBRRWF");

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
    msg.setTimeStamp(0.7563321819152545);
    msg.setSource(29102U);
    msg.setSourceEntity(11U);
    msg.setDestination(57236U);
    msg.setDestinationEntity(223U);
    msg.custom.assign("OLSNLGCZAIFPNFRKZPDIHZSGGYOHPEGWMSEQTOUJFWPZOALEAYUXDKSBKRPCILQTOYVKIIQHVESNXFIYMVVXZWHESMQZLJIBMVBAAORTQWDVBNRJDFVZNUAKUAXJURJKJSUPUFDUZMQALKKUGTIMECNFORM");

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
    msg.setTimeStamp(0.3738821857156652);
    msg.setSource(40026U);
    msg.setSourceEntity(109U);
    msg.setDestination(30988U);
    msg.setDestinationEntity(156U);
    msg.timeout = 39720U;
    msg.lat = 0.904525038450704;
    msg.lon = 0.6919793634216762;
    msg.z = 0.03996304345866153;
    msg.z_units = 65U;
    msg.duration = 41824U;
    msg.speed = 0.7777718850506438;
    msg.speed_units = 179U;
    msg.type = 166U;
    msg.radius = 0.7873180993059152;
    msg.length = 0.33611698996369144;
    msg.bearing = 0.4602182678561837;
    msg.direction = 83U;
    msg.custom.assign("ZJTYILGHNLVFLTRSQYGOANCOYHFWWUXYQEURVSPKIRMKUGXTIQCPRJDDRDHTYSXQUGGYUKLSQXBPWNPHBB");

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
    msg.setTimeStamp(0.25528279836561985);
    msg.setSource(12407U);
    msg.setSourceEntity(193U);
    msg.setDestination(37770U);
    msg.setDestinationEntity(168U);
    msg.timeout = 51289U;
    msg.lat = 0.30611890853942003;
    msg.lon = 0.31796198918273266;
    msg.z = 0.19294051263989787;
    msg.z_units = 155U;
    msg.duration = 44032U;
    msg.speed = 0.6958625435543621;
    msg.speed_units = 222U;
    msg.type = 88U;
    msg.radius = 0.40912685380886793;
    msg.length = 0.8346899117042056;
    msg.bearing = 0.6352211839354024;
    msg.direction = 129U;
    msg.custom.assign("FEKOWNBWUZLUMHCYIZHXGKSLGSEOQYSOSWUYKTARJ");

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
    msg.setTimeStamp(0.639741968829164);
    msg.setSource(62312U);
    msg.setSourceEntity(83U);
    msg.setDestination(27495U);
    msg.setDestinationEntity(30U);
    msg.timeout = 3757U;
    msg.lat = 0.685188736777354;
    msg.lon = 0.7211959048878807;
    msg.z = 0.12636710002023765;
    msg.z_units = 151U;
    msg.duration = 43552U;
    msg.speed = 0.10861806654634176;
    msg.speed_units = 106U;
    msg.type = 226U;
    msg.radius = 0.04857004153158584;
    msg.length = 0.21900268608405338;
    msg.bearing = 0.29125824946201717;
    msg.direction = 242U;
    msg.custom.assign("EVWESQQZMPKMYV");

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
    msg.setTimeStamp(0.08742885248599541);
    msg.setSource(13709U);
    msg.setSourceEntity(183U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(153U);
    msg.duration = 44041U;
    msg.custom.assign("KCHYGMSWUIGXTKYFOOEPNAUQDMZKGLEMRXNZSXVFFRCRTKPXGSOLWIYHLCTBFTZVOKGNHS");

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
    msg.setTimeStamp(0.6229154415335021);
    msg.setSource(25455U);
    msg.setSourceEntity(198U);
    msg.setDestination(15068U);
    msg.setDestinationEntity(48U);
    msg.duration = 21268U;
    msg.custom.assign("HIVSKCYVJQOMAGTFCODBDUKBHTKZGQZXXDWAFWTGCERCGWYQCDUKUMQYBFNUNYQINCZGZUXINGFSRAHVIFHCPWFDLQOUAASYKJEEMYJREAXODOXZENVJGNRKSNZDEFXFIWDIRYGVZGLWPVPBEVUPBVXPATQWLMOSRUOQWRAUCPYHJBQWIHDRLSBRBCLXKOKMLMMYLTZLBUJLHVQMHKJMJSFTNHXJPSSIIMXFHTCBYZLWSNTDJPZRGVOK");

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
    msg.setTimeStamp(0.13134040325708818);
    msg.setSource(51532U);
    msg.setSourceEntity(100U);
    msg.setDestination(12159U);
    msg.setDestinationEntity(85U);
    msg.duration = 6173U;
    msg.custom.assign("UYXRJODIUNMEQUOEWOGRDVPKDHNXABEIQDHSKXNLHLDUPCBOZDGRZEBFVBKPAYFSIKJZVMWPUAFZMSRIDHEUB");

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
    msg.setTimeStamp(0.6206259003883512);
    msg.setSource(6366U);
    msg.setSourceEntity(82U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(104U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.3503145994355482;
    msg.control.set(tmp_msg_0);
    msg.duration = 61376U;
    msg.custom.assign("TWSYWBNVAONDZXMIIETLECFFXYZDYDQSYJCHPKKLAPMUIUBSLERZUVPJDWBSSWCOPRLYXZLQSUTCDSCJCQEDYNUPTFMIXVAQYBJKTKHJQDTOMYVORQMM");

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
    msg.setTimeStamp(0.9186250609537978);
    msg.setSource(41228U);
    msg.setSourceEntity(231U);
    msg.setDestination(15453U);
    msg.setDestinationEntity(243U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.21571037306648244;
    msg.control.set(tmp_msg_0);
    msg.duration = 34U;
    msg.custom.assign("GDCLLSCITDPKPTOKOAGOBGYHOFNSSYDURXQQPBQHYTXBFSTQPRXQUNALGXFPLYPJWACESZBRNKDWMCHAGTTOCLXWEVTEIZRNRSENVFJUJNMEOCMNINHCYKADLVDEOWKDPZVTBZMWYYTFEUOJIVSOZRJFGVVWLXCCQUAUAFDEVLGMZKAUNMFX");

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
    msg.setTimeStamp(0.15413561689933097);
    msg.setSource(45474U);
    msg.setSourceEntity(197U);
    msg.setDestination(54678U);
    msg.setDestinationEntity(4U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.4839722217064887;
    tmp_msg_0.start_lon = 0.05301470004052944;
    tmp_msg_0.start_z = 0.254395012461447;
    tmp_msg_0.start_z_units = 214U;
    tmp_msg_0.end_lat = 0.571352537936639;
    tmp_msg_0.end_lon = 0.9018339437943754;
    tmp_msg_0.end_z = 0.04832266967399235;
    tmp_msg_0.end_z_units = 70U;
    tmp_msg_0.speed = 0.8834512507226392;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.lradius = 0.17625491580653807;
    tmp_msg_0.flags = 144U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44731U;
    msg.custom.assign("IVXOINLKMLTSILZIJYBOUZXASWNADAJTHNQRSVPSOZQSKLJPVCWMUCHBLWQOXMPTETZGEZCVMVELXCUUYZUGAQBWLKOTJANGFKBMSHGJLBZDWTXDZJCTYKQYIXPNVLEVAFHUHUEGFBGYFROWNDYZPAXTJNREXSFADFIMDLRYEMIQUPCERQRNPKSBFKRYGUGCYFMONIQFXSHIJHKOHSDTDDPWORGABVY");

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
    msg.setTimeStamp(0.027364432281203777);
    msg.setSource(63436U);
    msg.setSourceEntity(11U);
    msg.setDestination(13909U);
    msg.setDestinationEntity(211U);
    msg.timeout = 53991U;
    msg.lat = 0.6568564111475785;
    msg.lon = 0.4936925301442294;
    msg.z = 0.10072110385392719;
    msg.z_units = 34U;
    msg.speed = 0.38037551884155685;
    msg.speed_units = 135U;
    msg.bearing = 0.4235778183005182;
    msg.cross_angle = 0.7678070492652288;
    msg.width = 0.33464310879539905;
    msg.length = 0.0112516393285923;
    msg.hstep = 0.022128447206436808;
    msg.coff = 131U;
    msg.alternation = 42U;
    msg.flags = 14U;
    msg.custom.assign("WGMGEZJPVGFZEZKGYISYFLQUQEJCHTVSLQCDPLBFSRPDIKVIAYBAOXDQRWXEYYUSRDHAHDV");

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
    msg.setTimeStamp(0.25946281204602806);
    msg.setSource(28509U);
    msg.setSourceEntity(30U);
    msg.setDestination(36056U);
    msg.setDestinationEntity(213U);
    msg.timeout = 14412U;
    msg.lat = 0.4797048632929053;
    msg.lon = 0.12824227690726242;
    msg.z = 0.1930024238260739;
    msg.z_units = 236U;
    msg.speed = 0.807946955350376;
    msg.speed_units = 219U;
    msg.bearing = 0.6189093401941452;
    msg.cross_angle = 0.48582808912094166;
    msg.width = 0.8756025204260139;
    msg.length = 0.9523999132200545;
    msg.hstep = 0.010927515203049798;
    msg.coff = 161U;
    msg.alternation = 213U;
    msg.flags = 136U;
    msg.custom.assign("ALZONWFHKSHNUXEDKANBGFTHRPFDVVNANWPTWILQMAPFHOMOJJALZPRFAMXJEQGZDIRQJXKSZVRVRNIJZUQGYGTTXFFTGUBDOYVXTYHICKFMDRLTJREACMWQISDYFRHMGXCZAVJKEPBBCZVIHGDCSZCRNYBEXPAUUVGYJXNSWPYFZWEDUEWNSTC");

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
    msg.setTimeStamp(0.3341790849746694);
    msg.setSource(32009U);
    msg.setSourceEntity(52U);
    msg.setDestination(54079U);
    msg.setDestinationEntity(233U);
    msg.timeout = 47573U;
    msg.lat = 0.664504974039267;
    msg.lon = 0.0044766508142043415;
    msg.z = 0.9185277445730962;
    msg.z_units = 254U;
    msg.speed = 0.6245018273257112;
    msg.speed_units = 7U;
    msg.bearing = 0.1579002200992221;
    msg.cross_angle = 0.315410517657401;
    msg.width = 0.831416112011394;
    msg.length = 0.05422857095294853;
    msg.hstep = 0.3757415965405405;
    msg.coff = 242U;
    msg.alternation = 28U;
    msg.flags = 114U;
    msg.custom.assign("KOZSSGQUHXDEGQVUOZGQGOAQZGQHHQNOLLGXIVBBXH");

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
    msg.setTimeStamp(0.518090935670369);
    msg.setSource(58433U);
    msg.setSourceEntity(28U);
    msg.setDestination(47691U);
    msg.setDestinationEntity(99U);
    msg.timeout = 22209U;
    msg.lat = 0.5347744801752103;
    msg.lon = 0.6338152566778126;
    msg.z = 0.7689711162020706;
    msg.z_units = 228U;
    msg.speed = 0.6922724118335017;
    msg.speed_units = 156U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.49670105117005414;
    tmp_msg_0.y = 0.8854088776983128;
    tmp_msg_0.z = 0.5311719927355801;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KQQEIGSAHJDAORAVHETMYQRRTQUEGPIOXGTBHXVSEZNAXRXYQGLEIIIZOWMHZRKMGZIVFKLTCZTECXRLYAYUYYXBMWNSGUCXUSMYHWQMCNJLKTIZRGRKUVSQDXNRBHADOVZEFHCWCUUMOOCIZKUPKFPDEJTJWFMBPAFSLTDJSTZNCANFIOBYAGN");

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
    msg.setTimeStamp(0.625477462030947);
    msg.setSource(2722U);
    msg.setSourceEntity(146U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(29U);
    msg.timeout = 19106U;
    msg.lat = 0.686625117072827;
    msg.lon = 0.6073258935060977;
    msg.z = 0.07613329928305845;
    msg.z_units = 159U;
    msg.speed = 0.5995312851304211;
    msg.speed_units = 212U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.27777243151228836;
    tmp_msg_0.y = 0.9177256434812879;
    tmp_msg_0.z = 0.26630970414684396;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WWFBCYRLSIJNOJFGIUAUK");

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
    msg.setTimeStamp(0.12983604089036094);
    msg.setSource(38526U);
    msg.setSourceEntity(93U);
    msg.setDestination(6260U);
    msg.setDestinationEntity(2U);
    msg.timeout = 46873U;
    msg.lat = 0.26332884806427204;
    msg.lon = 0.9540080597136398;
    msg.z = 0.0020054897589896203;
    msg.z_units = 218U;
    msg.speed = 0.7746510933728632;
    msg.speed_units = 161U;
    msg.custom.assign("SLRCRIFPSCZUKYLZKNEBKPZVZVQVCQVXDWMMJRYPDKUDPSXCQRGGFWTVACNXQEOOGDLXZFMATNVGAJMUUITOXZIVEUFIGELKYBATBABPIMTIRAHBVBDBQ");

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
    msg.setTimeStamp(0.7474070681362097);
    msg.setSource(8727U);
    msg.setSourceEntity(66U);
    msg.setDestination(51080U);
    msg.setDestinationEntity(222U);
    msg.x = 0.8774371497576023;
    msg.y = 0.4593173566280495;
    msg.z = 0.5366543223021575;

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
    msg.setTimeStamp(0.9402800262327271);
    msg.setSource(53452U);
    msg.setSourceEntity(235U);
    msg.setDestination(62882U);
    msg.setDestinationEntity(135U);
    msg.x = 0.33418824732210417;
    msg.y = 0.972475773709043;
    msg.z = 0.3686955794865213;

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
    msg.setTimeStamp(0.17282734672747535);
    msg.setSource(57779U);
    msg.setSourceEntity(38U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(252U);
    msg.x = 0.09763312166805027;
    msg.y = 0.3607328657216038;
    msg.z = 0.13901190583850287;

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
    msg.setTimeStamp(0.7649078782240811);
    msg.setSource(44U);
    msg.setSourceEntity(65U);
    msg.setDestination(35297U);
    msg.setDestinationEntity(9U);
    msg.timeout = 5207U;
    msg.lat = 0.9063144909906148;
    msg.lon = 0.9493129919958042;
    msg.z = 0.5622376982213118;
    msg.z_units = 160U;
    msg.amplitude = 0.6666842791716641;
    msg.pitch = 0.6517061152155749;
    msg.speed = 0.8208913446799001;
    msg.speed_units = 50U;
    msg.custom.assign("UZEGIWXBOPTGIRSSVXIDIPICESHDHMXMNJTOIKBNVMZBXOODDOID");

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
    msg.setTimeStamp(0.2783161349630223);
    msg.setSource(44236U);
    msg.setSourceEntity(173U);
    msg.setDestination(26685U);
    msg.setDestinationEntity(59U);
    msg.timeout = 61454U;
    msg.lat = 0.10547197775321693;
    msg.lon = 0.11599247967805437;
    msg.z = 0.05656210058193212;
    msg.z_units = 242U;
    msg.amplitude = 0.3380505015834583;
    msg.pitch = 0.14447403717686247;
    msg.speed = 0.7124826381730577;
    msg.speed_units = 175U;
    msg.custom.assign("TJEPBZLMRVOWYCEKZCFGRBTUGLQETALCPODTKFYDXOMCUHSRDPQIBJIRFKQZYDAJZAJPGYWKODFWRZYBBRYLVCHHVEGOWEJNTTENDQNSXIQPIXZQXQGZCGFVQVGEKBAORIYLXIYYLWTNKPZLXSSXSPPMKDHWAPRUJONHWUGLJNHAEJMVEMMXAWNGPKS");

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
    msg.setTimeStamp(0.3414803782482345);
    msg.setSource(1560U);
    msg.setSourceEntity(60U);
    msg.setDestination(12485U);
    msg.setDestinationEntity(28U);
    msg.timeout = 35402U;
    msg.lat = 0.4293884069183428;
    msg.lon = 0.9534030417823758;
    msg.z = 0.7239659408314106;
    msg.z_units = 52U;
    msg.amplitude = 0.7531977042820562;
    msg.pitch = 0.827230448549746;
    msg.speed = 0.3941471704276652;
    msg.speed_units = 5U;
    msg.custom.assign("MELOETBXJUA");

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
    msg.setTimeStamp(0.1849151767708731);
    msg.setSource(26562U);
    msg.setSourceEntity(208U);
    msg.setDestination(2406U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.18228673891719116);
    msg.setSource(4863U);
    msg.setSourceEntity(4U);
    msg.setDestination(30364U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.03808773331783999);
    msg.setSource(7149U);
    msg.setSourceEntity(55U);
    msg.setDestination(50613U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.9001049820512323);
    msg.setSource(63577U);
    msg.setSourceEntity(115U);
    msg.setDestination(45123U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.009538023700739418;
    msg.lon = 0.3333291997426032;
    msg.z = 0.3257885799427652;
    msg.z_units = 33U;
    msg.radius = 0.17082378682728794;
    msg.duration = 33376U;
    msg.speed = 0.3598573032554382;
    msg.speed_units = 106U;
    msg.custom.assign("JDBRFKPFYECEMQNBXKCIRPQKPESWGHKNJLUHEZOOCQIQNNFEZOUVQOCXGB");

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
    msg.setTimeStamp(0.2250520393361648);
    msg.setSource(34671U);
    msg.setSourceEntity(163U);
    msg.setDestination(39644U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.42556484959965346;
    msg.lon = 0.5307057059931138;
    msg.z = 0.9328940829923328;
    msg.z_units = 209U;
    msg.radius = 0.7091635418100358;
    msg.duration = 19703U;
    msg.speed = 0.306922649542256;
    msg.speed_units = 145U;
    msg.custom.assign("LPMRHCEYFUDYCNZKVRARHXYQQYLFUFGWGXBXTGYDLTDWJGQFHOZYIJNAPFKABETQWDXDLWFZMMIRMEVKQHXBVPMIJHBZMTOLCVNEPOGXLEADXYKBIQISZKJBIWWQWVCUXULJZEUBLJDOPIZEGLXOAPOHRSSTYBTDMXZQKNFCVROAKOHFALFNTVCRIDRAUSTASMUGGNYVKIEZPUNCKWEYESHHPVSUOSGQNWCBHRMPDSFRNVTOSMIWGKPN");

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
    msg.setTimeStamp(0.9393160984059667);
    msg.setSource(4957U);
    msg.setSourceEntity(194U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.43049595185064204;
    msg.lon = 0.4984076216788015;
    msg.z = 0.46958927144344154;
    msg.z_units = 39U;
    msg.radius = 0.8971555969344389;
    msg.duration = 31121U;
    msg.speed = 0.7691727901565517;
    msg.speed_units = 242U;
    msg.custom.assign("YZHVSRGVUCLPXWOXSHXOAZMAARVJSCJIRGEQFYCIIFBRUWWVMNAEOMBDGUSHGHYIHZDXDIHTUSMQJROHQZTJPVPYQJIOALMFAALNVYCLTBWTCJZISNRTLVGQDYFUVTWFLUZBPEWOEEMBTJPDJOFAIXTZU");

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
    msg.setTimeStamp(0.7507403844083893);
    msg.setSource(4828U);
    msg.setSourceEntity(21U);
    msg.setDestination(61445U);
    msg.setDestinationEntity(165U);
    msg.timeout = 13556U;
    msg.flags = 47U;
    msg.lat = 0.21361476474586027;
    msg.lon = 0.6759006622177003;
    msg.start_z = 0.44838057979843393;
    msg.start_z_units = 21U;
    msg.end_z = 0.6007636225907778;
    msg.end_z_units = 158U;
    msg.radius = 0.2858126752842328;
    msg.speed = 0.406472368876061;
    msg.speed_units = 12U;
    msg.custom.assign("NEBHOMTFXR");

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
    msg.setTimeStamp(0.6952223905187829);
    msg.setSource(32728U);
    msg.setSourceEntity(101U);
    msg.setDestination(54755U);
    msg.setDestinationEntity(240U);
    msg.timeout = 56206U;
    msg.flags = 15U;
    msg.lat = 0.178402356457682;
    msg.lon = 0.29353560956440217;
    msg.start_z = 0.7068299507563056;
    msg.start_z_units = 40U;
    msg.end_z = 0.7248348185116009;
    msg.end_z_units = 20U;
    msg.radius = 0.05477470471619528;
    msg.speed = 0.36365419791391806;
    msg.speed_units = 5U;
    msg.custom.assign("DFJFQNAKPAHDHQEUGBLJNECZNFNFBQIXTUEXWRYFVLORVUBQWMYMGPRVADXVNSXGDWDSHVXWIRCBZFLCYIZCGUGAEYLJJDZRWQFHAELLJXHHKLTRJRNXSFTJPKESPVQOFD");

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
    msg.setTimeStamp(0.7075663861697161);
    msg.setSource(38843U);
    msg.setSourceEntity(134U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(213U);
    msg.timeout = 30915U;
    msg.flags = 246U;
    msg.lat = 0.9615449165011642;
    msg.lon = 0.1263554745983041;
    msg.start_z = 0.21352228558944852;
    msg.start_z_units = 220U;
    msg.end_z = 0.7544590339392945;
    msg.end_z_units = 92U;
    msg.radius = 0.2834977350196135;
    msg.speed = 0.6617230639179192;
    msg.speed_units = 228U;
    msg.custom.assign("YWIBNJKUREWFGHCHXPAOZXLQZQBSLVTYGGBQLAAQWT");

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
    msg.setTimeStamp(0.4954280375594138);
    msg.setSource(11854U);
    msg.setSourceEntity(19U);
    msg.setDestination(1973U);
    msg.setDestinationEntity(132U);
    msg.timeout = 36865U;
    msg.lat = 0.5008116767647888;
    msg.lon = 0.7755378605195941;
    msg.z = 0.18276420037748464;
    msg.z_units = 125U;
    msg.speed = 0.5060317494036537;
    msg.speed_units = 109U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6120744215933898;
    tmp_msg_0.y = 0.7294910589182092;
    tmp_msg_0.z = 0.7853824597678599;
    tmp_msg_0.t = 0.4201674001124699;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TKFEULFABPOGRYLVLDYIUTIGEZTMBABGVMLZOHBJWQGRIBQIQYPZATNOQUKSTDAJJXQEEEMXFVGXSEOPMFUGHNTRLGRXOHXGFXQDYVHYYKSXKUGJHTOWAPPCTTZCXQBKRIVYYSZKIQSLPSRWJZVKKBICCNUPMJVEPEDSNZRRHWGZHCFVXAUNZMFWAICLSMCWMSDNYBADCWFQWXLQDLACE");

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
    msg.setTimeStamp(0.08003158579196379);
    msg.setSource(39110U);
    msg.setSourceEntity(31U);
    msg.setDestination(39725U);
    msg.setDestinationEntity(91U);
    msg.timeout = 57712U;
    msg.lat = 0.0898253834979661;
    msg.lon = 0.7652234464799847;
    msg.z = 0.15460373325668086;
    msg.z_units = 163U;
    msg.speed = 0.3224958837823291;
    msg.speed_units = 59U;
    msg.custom.assign("SVVBOUYVETTUTCTHYZSFPITKEAGYQJARYIHZGBYHQBRMHEBSDLJGLDVXYSPAULJCGFERHCCFUKJOIHEZXMWQFFSZQMZRKPNVIJRNGWVVLMDTTHPQB");

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
    msg.setTimeStamp(0.16301205272808572);
    msg.setSource(65051U);
    msg.setSourceEntity(176U);
    msg.setDestination(15387U);
    msg.setDestinationEntity(228U);
    msg.timeout = 32425U;
    msg.lat = 0.8136347676806113;
    msg.lon = 0.5971856152924035;
    msg.z = 0.48881038687853073;
    msg.z_units = 232U;
    msg.speed = 0.7058509810970417;
    msg.speed_units = 69U;
    msg.custom.assign("FBPMGHOKTDZYZBYZGQDUBIO");

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
    msg.setTimeStamp(0.596538862384483);
    msg.setSource(19766U);
    msg.setSourceEntity(93U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(191U);
    msg.x = 0.9611747183997288;
    msg.y = 0.0076398615050568;
    msg.z = 0.3886998109898553;
    msg.t = 0.057442199005353856;

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
    msg.setTimeStamp(0.1297813935782981);
    msg.setSource(17403U);
    msg.setSourceEntity(231U);
    msg.setDestination(39187U);
    msg.setDestinationEntity(182U);
    msg.x = 0.6113708093632259;
    msg.y = 0.5224524962083595;
    msg.z = 0.242353688774276;
    msg.t = 0.07263172178910338;

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
    msg.setTimeStamp(0.8045726346964841);
    msg.setSource(49955U);
    msg.setSourceEntity(0U);
    msg.setDestination(30374U);
    msg.setDestinationEntity(86U);
    msg.x = 0.6347019822560649;
    msg.y = 0.7762604704078584;
    msg.z = 0.013712269136445854;
    msg.t = 0.47512258425997667;

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
    msg.setTimeStamp(0.7845166167489003);
    msg.setSource(9930U);
    msg.setSourceEntity(202U);
    msg.setDestination(52798U);
    msg.setDestinationEntity(213U);
    msg.timeout = 29238U;
    msg.name.assign("MVIAVHGXAIFSZJDTXOQPLHNMGYTJBDFYVTBZNROQLAEFONFJYM");
    msg.custom.assign("IOOOHEAGHGKFZNHKLLXXJAICLJDRGQQFIVCDRRSSIMTEPXJUGMTTOOZLBTOYAUPYQNXWKSWINKFPVLJJSUCDGRNXABTCNNOZSDDGTVNOHKFEYZKLBESKUXQDRMNZVBMYZBFYYAPMWVXUVTMPKSDJGVOCRCYHBDFYNZKGZUTAGVLCRXMQYLKFQQQBZEBJZPJTNVYDWIVMJSCWHQUMSMPTLWDHEFIRXLURUWRFHWBPPPIIWEJWFACE");

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
    msg.setTimeStamp(0.4890340971402929);
    msg.setSource(49579U);
    msg.setSourceEntity(222U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(57U);
    msg.timeout = 18904U;
    msg.name.assign("QFKDBCFQTYKQESSDIHJKMAHIDEATFWTOHKGVAPFCXLRAKJSJMDNIOXLMGVWTPIYGMKZJCCRUNRNXJSTOGNNPJPVUXGTZSDIEZDPFYRXNBLKUIEFZHGUEBDMCSWBNSQNWSQFGJZTGAQPMCLWAIHEWIIOXUUFOBZOSAVVFMBOVHJLQHMRLBXAKEWMHXQNRRVO");
    msg.custom.assign("YBKQRIGOYLTOQEGFWJMOCSNMUADETISPURVJOHVVCIWFTDQKTCERPYUPDKJYNKWNNTIHBEVZGPVNDAXXFOMRJELJSGHPTED");

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
    msg.setTimeStamp(0.5436699704502388);
    msg.setSource(38426U);
    msg.setSourceEntity(98U);
    msg.setDestination(23546U);
    msg.setDestinationEntity(112U);
    msg.timeout = 9991U;
    msg.name.assign("NYRLLYPOXNGJUBXZLDPRQSGFEMTFYWHXRBIDXLCOSHHETKTO");
    msg.custom.assign("MLNITBJLQALAVZGIFYTRYRYTXNNSQSNIBEJZJRJTQSZGPHLLDNMHYQZRKOBFZFIWGMYTFXRZGBUUCXOILXBQQSHYPDGBVUXYPDEDTCBMXOYVACCEAHDCLTGIBXUMISGWPVKOOVFRQQHFREMDOCAKKIWMAZKBNIEEJOHVQCXWWKENJPUPWEAZZHJSVMJFSFZFMYAIJUGPDCXTNJOAY");

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
    msg.setTimeStamp(0.276379129114388);
    msg.setSource(34792U);
    msg.setSourceEntity(179U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.017221058917361698;
    msg.lon = 0.6710295175649602;
    msg.z = 0.2856974176182455;
    msg.z_units = 39U;
    msg.speed = 0.5354715508605575;
    msg.speed_units = 145U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8592467687702309;
    tmp_msg_0.y = 0.12369577757387173;
    tmp_msg_0.z = 0.9077226059335715;
    tmp_msg_0.t = 0.9237913581097477;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 29910U;
    tmp_msg_1.off_x = 0.9746759718921033;
    tmp_msg_1.off_y = 0.3430705064511348;
    tmp_msg_1.off_z = 0.6809215736431322;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8199727461991904;
    msg.custom.assign("RTSVLFDKWNGSUEDXBDOEDFWYQHZBWADUERZIJXMEGCIPKGZNDEVJMWVVAWIWKXNYUQAVBRPECXXZYALMCJBAFLYZWIEOCQAJJTDFIJPODHRWJRUJLRMSQOMZKXHQQFHGRTRWFZHPSTQJYUBIIGBSKYYKFCHLNMU");

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
    msg.setTimeStamp(0.298776379483652);
    msg.setSource(44266U);
    msg.setSourceEntity(124U);
    msg.setDestination(55218U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.8521059506095896;
    msg.lon = 0.15225839275175734;
    msg.z = 0.4054339271251196;
    msg.z_units = 26U;
    msg.speed = 0.9312739457160768;
    msg.speed_units = 57U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7967570979245256;
    tmp_msg_0.y = 0.004658773285182938;
    tmp_msg_0.z = 0.6193942469071456;
    tmp_msg_0.t = 0.5906977983666549;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.43036223357198056;
    msg.custom.assign("TGBGGVFGHRZHPPQHFZOXOWJIGTWREKYZEWNSQCJEBEMAEFKYGTPOXAOWIGSWYFUAAIBIVWAVYPRTKRKMQIXIKOGFMQMIM");

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
    msg.setTimeStamp(0.403928094792271);
    msg.setSource(13965U);
    msg.setSourceEntity(144U);
    msg.setDestination(17774U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.1395811647951306;
    msg.lon = 0.8277987072461992;
    msg.z = 0.2923971400196971;
    msg.z_units = 25U;
    msg.speed = 0.5633453275961996;
    msg.speed_units = 60U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4305257860140075;
    tmp_msg_0.y = 0.844875470326253;
    tmp_msg_0.z = 0.6190513615950362;
    tmp_msg_0.t = 0.9180989336030201;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 45735U;
    tmp_msg_1.off_x = 0.9408499862599262;
    tmp_msg_1.off_y = 0.6765409403523687;
    tmp_msg_1.off_z = 0.8679834760846823;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.9080724073948362;
    msg.custom.assign("IGOXIAVSJLPBBOYMJILMDGKUYZXXGPKXIYXUMQFGFRJCLZBGUBASYWHMQRBROPLGVVZFYMYQEVKEIRNUHJUWNCQBPJLSTHAPTMDEZAA");

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
    msg.setTimeStamp(0.19232755598832063);
    msg.setSource(40243U);
    msg.setSourceEntity(86U);
    msg.setDestination(3263U);
    msg.setDestinationEntity(89U);
    msg.vid = 40437U;
    msg.off_x = 0.4126900944832844;
    msg.off_y = 0.13820505050096088;
    msg.off_z = 0.7006683046472671;

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
    msg.setTimeStamp(0.4598155042949863);
    msg.setSource(23026U);
    msg.setSourceEntity(177U);
    msg.setDestination(14016U);
    msg.setDestinationEntity(163U);
    msg.vid = 57188U;
    msg.off_x = 0.07230282893419393;
    msg.off_y = 0.31773004715027187;
    msg.off_z = 0.39788544198117926;

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
    msg.setTimeStamp(0.19783448314988517);
    msg.setSource(3704U);
    msg.setSourceEntity(79U);
    msg.setDestination(7439U);
    msg.setDestinationEntity(165U);
    msg.vid = 473U;
    msg.off_x = 0.717024536191072;
    msg.off_y = 0.7261745105863955;
    msg.off_z = 0.4415354200363778;

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
    msg.setTimeStamp(0.765835429648283);
    msg.setSource(25239U);
    msg.setSourceEntity(131U);
    msg.setDestination(58377U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.07530537331432441);
    msg.setSource(53697U);
    msg.setSourceEntity(94U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.07227055010062411);
    msg.setSource(21251U);
    msg.setSourceEntity(92U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.4158541570970167);
    msg.setSource(64032U);
    msg.setSourceEntity(100U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(86U);
    msg.mid = 50585U;

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
    msg.setTimeStamp(0.2369960533512283);
    msg.setSource(49373U);
    msg.setSourceEntity(77U);
    msg.setDestination(53225U);
    msg.setDestinationEntity(232U);
    msg.mid = 58172U;

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
    msg.setTimeStamp(0.8197168782084504);
    msg.setSource(51196U);
    msg.setSourceEntity(122U);
    msg.setDestination(44720U);
    msg.setDestinationEntity(89U);
    msg.mid = 19095U;

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
    msg.setTimeStamp(0.009412756351775964);
    msg.setSource(49283U);
    msg.setSourceEntity(244U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(243U);
    msg.state = 152U;
    msg.eta = 54806U;
    msg.info.assign("YTLJIYRDDZBHOQLAAKUFISDGKNSRPYVAXRBBKEVRUMNZOQKFZSHDLPXKMULVHWFDEGXJQNYPMTZTPFQUBAGXKONLPTXLHECRWIVOHJZXJGFTLIIBYKQXOHJVJUUGRWRHYSCOEQCNGFOLALLMVDBRZPYRIWTGEMZNGHIWOWIWATUFFBMXFMPUTXAUOTYCGCEXNBVNNEVDPCSKEZJDFWGESSQBITJDAMZDMQYAOCVUKAJBCSSJRHMN");

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
    msg.setTimeStamp(0.5889163143029809);
    msg.setSource(28336U);
    msg.setSourceEntity(239U);
    msg.setDestination(18314U);
    msg.setDestinationEntity(90U);
    msg.state = 101U;
    msg.eta = 34779U;
    msg.info.assign("RGEWCVLGCEXCZMQXTWVZEITFJYFPIIIULFDBJJZZDZMOHAUFLUPMRCPKSYMJXXOCSGLATXEYTKGMHBP");

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
    msg.setTimeStamp(0.725829021858661);
    msg.setSource(13309U);
    msg.setSourceEntity(36U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(111U);
    msg.state = 19U;
    msg.eta = 248U;
    msg.info.assign("HZBBZHPPSJBCGYCQMMDYLGQSTTWECNMFTFFVWMXLFITMAXWMLOUWKXIDHUSTXQWEHHPRIIZOQDIPOLCOKRJICWYWN");

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
    msg.setTimeStamp(0.3764578022196886);
    msg.setSource(62775U);
    msg.setSourceEntity(137U);
    msg.setDestination(38413U);
    msg.setDestinationEntity(178U);
    msg.system = 672U;
    msg.duration = 18664U;
    msg.speed = 0.7844603543068763;
    msg.speed_units = 5U;
    msg.x = 0.2317718670643204;
    msg.y = 0.8784831183310035;
    msg.z = 0.16887146536623487;
    msg.z_units = 135U;

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
    msg.setTimeStamp(0.7839737593905941);
    msg.setSource(24007U);
    msg.setSourceEntity(117U);
    msg.setDestination(53336U);
    msg.setDestinationEntity(173U);
    msg.system = 38694U;
    msg.duration = 52344U;
    msg.speed = 0.7915931142610273;
    msg.speed_units = 196U;
    msg.x = 0.5415744920047249;
    msg.y = 0.3765775638882385;
    msg.z = 0.7600439513761934;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.42557565450853563);
    msg.setSource(48197U);
    msg.setSourceEntity(20U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(253U);
    msg.system = 52166U;
    msg.duration = 22378U;
    msg.speed = 0.9148569532745204;
    msg.speed_units = 14U;
    msg.x = 0.0737530020643159;
    msg.y = 0.11616541033134375;
    msg.z = 0.584980958699905;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.4306720298157358);
    msg.setSource(57360U);
    msg.setSourceEntity(242U);
    msg.setDestination(59617U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.8658408620946636;
    msg.lon = 0.21296183585309125;
    msg.speed = 0.8529207238581498;
    msg.speed_units = 180U;
    msg.duration = 6614U;
    msg.sys_a = 11522U;
    msg.sys_b = 5056U;
    msg.move_threshold = 0.38589437598738263;

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
    msg.setTimeStamp(0.7636281177815961);
    msg.setSource(62070U);
    msg.setSourceEntity(88U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.05614291730104437;
    msg.lon = 0.721569356023254;
    msg.speed = 0.3491365024602674;
    msg.speed_units = 98U;
    msg.duration = 3386U;
    msg.sys_a = 61170U;
    msg.sys_b = 16569U;
    msg.move_threshold = 0.4224107984308201;

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
    msg.setTimeStamp(0.9042026325530359);
    msg.setSource(6351U);
    msg.setSourceEntity(117U);
    msg.setDestination(47001U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.03242443903624481;
    msg.lon = 0.41163034773313534;
    msg.speed = 0.8441694912148413;
    msg.speed_units = 124U;
    msg.duration = 28578U;
    msg.sys_a = 46652U;
    msg.sys_b = 25449U;
    msg.move_threshold = 0.22719614808774324;

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
    msg.setTimeStamp(0.2598110964777308);
    msg.setSource(33114U);
    msg.setSourceEntity(20U);
    msg.setDestination(3918U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.9955394857578633;
    msg.lon = 0.03200531498784942;
    msg.z = 0.27487244816153;
    msg.z_units = 14U;
    msg.speed = 0.9167154873613704;
    msg.speed_units = 231U;
    msg.custom.assign("YVWQQPSZAVOYUCATTTJULHXLDYUSPVBJJYDIILRZMJWUTJSNPOAIPEEZRERLHDEGNTUQVPVIVYZROMPITLSPKLQHITSABCWNXHDOFEOBGKNWXJXFVSXFOBQHBZZMPUDKNTBRQWQJUKPBHAGMVIQWNFKGWPDZFXCKAUTRYH");

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
    msg.setTimeStamp(0.9295527160330312);
    msg.setSource(38918U);
    msg.setSourceEntity(180U);
    msg.setDestination(46232U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.5965781948707946;
    msg.lon = 0.7171226351251994;
    msg.z = 0.42729881424059835;
    msg.z_units = 79U;
    msg.speed = 0.3886011985392197;
    msg.speed_units = 169U;
    msg.custom.assign("LRFBNHBBRQNKPYTXKWFGLVQBAWVT");

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
    msg.setTimeStamp(0.4435025672627859);
    msg.setSource(39034U);
    msg.setSourceEntity(159U);
    msg.setDestination(34079U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.8344842949099789;
    msg.lon = 0.5422413297589439;
    msg.z = 0.10388607588155108;
    msg.z_units = 61U;
    msg.speed = 0.7826425279576167;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6151173493714662;
    tmp_msg_0.lon = 0.5701746405159371;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RROEFFVMVQWLGHXTBGMGMQRKJBCHTKCQKJZTITZLWTITWBYGOWONNIBZZSRQUPVZXOAXEJLUSAVQQBFHKUUSNZEKPOEYTCDUBOPKHMNDWBIENEYDXMHVJDICPGPGPJFULYNQUVECWCPKIEMFVDAASWUMRIDCSTHBSAOSYXVFZAXKXQOWRMJKXFUYVHNLAIJJGPFQNHRYH");

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
    msg.setTimeStamp(0.028491097036621005);
    msg.setSource(40188U);
    msg.setSourceEntity(163U);
    msg.setDestination(32018U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.6749872942339535;
    msg.lon = 0.7419162901135035;

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
    msg.setTimeStamp(0.4253242717905378);
    msg.setSource(44755U);
    msg.setSourceEntity(236U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.8126878417091977;
    msg.lon = 0.3812604813306578;

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
    msg.setTimeStamp(0.31740831267685676);
    msg.setSource(58152U);
    msg.setSourceEntity(229U);
    msg.setDestination(39449U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.45094117186706106;
    msg.lon = 0.8996312807693085;

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
    msg.setTimeStamp(0.6582947187589884);
    msg.setSource(21579U);
    msg.setSourceEntity(51U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(140U);
    msg.timeout = 58064U;
    msg.lat = 0.6170848671486981;
    msg.lon = 0.8882135470520772;
    msg.z = 0.5178973604948834;
    msg.z_units = 40U;
    msg.pitch = 0.6676917578143399;
    msg.amplitude = 0.9167028236076725;
    msg.duration = 40566U;
    msg.speed = 0.9163309751502957;
    msg.speed_units = 40U;
    msg.radius = 0.6771938106416001;
    msg.direction = 103U;
    msg.custom.assign("HPSETWGVDKWEEQJOBQLRWFNHLQSQSDQCCYXVWCAQXYPZZUGIOKYGMJIYTODXXFJLJWNTJIXGOJXEKJVDWNKCTLZYXHZCHECGPIUGWLFZGMOTITCPNFLOIBURSTKRBFMKRIBUFMPUNLDOENYQCYFQBRSDLBGXVZLAVWTBIRRUQSIBHAYA");

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
    msg.setTimeStamp(0.6243536226461852);
    msg.setSource(41020U);
    msg.setSourceEntity(175U);
    msg.setDestination(62693U);
    msg.setDestinationEntity(23U);
    msg.timeout = 35681U;
    msg.lat = 0.047986503575337514;
    msg.lon = 0.7466460603599766;
    msg.z = 0.9443663940765238;
    msg.z_units = 175U;
    msg.pitch = 0.9661853595668721;
    msg.amplitude = 0.658026914696843;
    msg.duration = 51310U;
    msg.speed = 0.0016243985996061694;
    msg.speed_units = 219U;
    msg.radius = 0.6866704602290239;
    msg.direction = 225U;
    msg.custom.assign("HIABQUAQQEDPOJTWWXBGFJCVZLNFBSOVCYZOZIHGSYJSLIWLRZELPBXKGNHGKBHZUCKDFYBKLVJQANE");

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
    msg.setTimeStamp(0.3873997722975905);
    msg.setSource(31970U);
    msg.setSourceEntity(235U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(232U);
    msg.timeout = 4453U;
    msg.lat = 0.8948025390800124;
    msg.lon = 0.6685408463817863;
    msg.z = 0.12165335983399872;
    msg.z_units = 226U;
    msg.pitch = 0.16246591319188108;
    msg.amplitude = 0.4597022002700757;
    msg.duration = 16775U;
    msg.speed = 0.03335980481573597;
    msg.speed_units = 19U;
    msg.radius = 0.48114671090367567;
    msg.direction = 191U;
    msg.custom.assign("BJVRSQLMLHUOYMFWJGNFRSDRKOONICBMFTJXFAFWVEKFAWADTJHOHJLBDGDCBHELJXQAOZXUCWPPKRXZAPAVKERESDHSSZTICTNHOYUPZGGJQGAOKLNVUEYEYVZCBFJSGOWQDOMQZXILCBGIQUUQXESYMFNXTLWFRIKBLNZYGDNSVWYPVNFPHYIECJUBRRUDWAIQWEUTGPLTHYDMCNL");

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
    msg.setTimeStamp(0.5606701488007495);
    msg.setSource(40107U);
    msg.setSourceEntity(57U);
    msg.setDestination(42388U);
    msg.setDestinationEntity(29U);
    msg.control_src = 32100U;
    msg.control_ent = 183U;
    msg.timeout = 0.2843090226045861;
    msg.loiter_radius = 0.06346080947609223;
    msg.altitude_interval = 0.2911274726726323;

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
    msg.setTimeStamp(0.707041333226547);
    msg.setSource(40021U);
    msg.setSourceEntity(254U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(53U);
    msg.control_src = 46729U;
    msg.control_ent = 34U;
    msg.timeout = 0.10097034163726126;
    msg.loiter_radius = 0.9652561156020942;
    msg.altitude_interval = 0.26242287107064366;

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
    msg.setTimeStamp(0.7620310038122761);
    msg.setSource(46368U);
    msg.setSourceEntity(200U);
    msg.setDestination(55973U);
    msg.setDestinationEntity(227U);
    msg.control_src = 59216U;
    msg.control_ent = 82U;
    msg.timeout = 0.23278640701901077;
    msg.loiter_radius = 0.34494017275197386;
    msg.altitude_interval = 0.21958881318493484;

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
    msg.setTimeStamp(0.23350451759815716);
    msg.setSource(3555U);
    msg.setSourceEntity(160U);
    msg.setDestination(51106U);
    msg.setDestinationEntity(185U);
    msg.flags = 190U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.02329708470568992;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4011718987358145;
    tmp_msg_1.z_units = 130U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5652837616290823;
    msg.lon = 0.43571020375269354;

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
    msg.setTimeStamp(0.706736435930774);
    msg.setSource(14027U);
    msg.setSourceEntity(7U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(74U);
    msg.flags = 175U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4433644213885315;
    tmp_msg_0.speed_units = 65U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1580342060504335;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.12444476841386287;
    msg.lon = 0.1194669429827322;

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
    msg.setTimeStamp(0.3130868620590591);
    msg.setSource(43282U);
    msg.setSourceEntity(248U);
    msg.setDestination(44273U);
    msg.setDestinationEntity(70U);
    msg.flags = 150U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.038114179523131564;
    tmp_msg_0.speed_units = 142U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.667749344370735;
    tmp_msg_1.z_units = 68U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.982565371349019;
    msg.lon = 0.8748269308436809;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.6049063275301653);
    msg.setSource(43925U);
    msg.setSourceEntity(106U);
    msg.setDestination(31656U);
    msg.setDestinationEntity(241U);
    msg.op_mode = 217U;
    msg.error_count = 173U;
    msg.error_ents.assign("TZOVRQEEQQWBUCSUCLPFNNVJWZQHYBSOBHLDOXDFPSAOTDKZMIWXTLXUMEBQKRZCZYQDYJMGRHQUCRCMAPEPDPLMJHSM");
    msg.maneuver_type = 47828U;
    msg.maneuver_stime = 0.7398718282197974;
    msg.maneuver_eta = 22571U;
    msg.control_loops = 2169692571U;
    msg.flags = 229U;
    msg.last_error.assign("IUTCHMZJOJOSWBBAENIVFIZTWFPMVHSQQMCYYOWERIKGSNMCSAYUBAYXVQJDSLJKZPGMDKFIHZPTAPLTZV");
    msg.last_error_time = 0.9795987225567994;

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
    msg.setTimeStamp(0.7508595789876025);
    msg.setSource(41229U);
    msg.setSourceEntity(111U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(235U);
    msg.op_mode = 81U;
    msg.error_count = 142U;
    msg.error_ents.assign("QYBTVWGNNVFEJHTNOQNILPYA");
    msg.maneuver_type = 8209U;
    msg.maneuver_stime = 0.654428326379333;
    msg.maneuver_eta = 55028U;
    msg.control_loops = 1773646604U;
    msg.flags = 88U;
    msg.last_error.assign("LOFCTAFLVKXRVPVECHXQRPSCKPOGWLPIFMMBOPXQMXYMJYGDDHKFCGPMUZTZ");
    msg.last_error_time = 0.7377643087275512;

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
    msg.setTimeStamp(0.19219241285621824);
    msg.setSource(29609U);
    msg.setSourceEntity(248U);
    msg.setDestination(25241U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 169U;
    msg.error_count = 185U;
    msg.error_ents.assign("RILVHZRYWXLLAKVIFLRQSQNHDIXPFYFBNXGIWXWVELRGXZIWLSSWXNZVMKVTRDDQSD");
    msg.maneuver_type = 47262U;
    msg.maneuver_stime = 0.6347897744359629;
    msg.maneuver_eta = 53756U;
    msg.control_loops = 2372461653U;
    msg.flags = 68U;
    msg.last_error.assign("PLSPMYZIUQKHVJLYMPDEMOYFOTXPKZJMXZAVONJCRXXHJGNBJLQRZAZVGYXPZIJXKPQWICGK");
    msg.last_error_time = 0.8134983851301772;

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
    msg.setTimeStamp(0.7871260261656093);
    msg.setSource(11353U);
    msg.setSourceEntity(38U);
    msg.setDestination(18288U);
    msg.setDestinationEntity(224U);
    msg.type = 129U;
    msg.request_id = 65065U;
    msg.command = 149U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47022U;
    tmp_msg_0.lat = 0.4696023896198137;
    tmp_msg_0.lon = 0.39024137275503146;
    tmp_msg_0.z = 0.9725381579967012;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.speed = 0.618680275365617;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.roll = 0.20864235466315695;
    tmp_msg_0.pitch = 0.0952214401473147;
    tmp_msg_0.yaw = 0.9527653444196275;
    tmp_msg_0.custom.assign("YHDYWPSWGVASCTHPRWHBSCUHMLOLXDTRKPJCYYSNCQIJVRRRECAVN");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("GEFVLFLFTOKOJZLOCZUAYBQQOKOZEKRVOHBPQFVYCJHDRWWWBEZJCDPBVAPDJUUZWKCJKZDKLFQXLTXQBTRRHFESHVKJPTETERJGLBMUCDYGALGGANADPPQCAGEUXHYRQFMNSYQYUMI");

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
    msg.setTimeStamp(0.4381795790639048);
    msg.setSource(45171U);
    msg.setSourceEntity(94U);
    msg.setDestination(45986U);
    msg.setDestinationEntity(28U);
    msg.type = 92U;
    msg.request_id = 51782U;
    msg.command = 110U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 22191U;
    tmp_msg_0.lat = 0.7359827643436858;
    tmp_msg_0.lon = 0.42187162512190723;
    tmp_msg_0.z = 0.1594924850645315;
    tmp_msg_0.z_units = 133U;
    tmp_msg_0.speed = 0.7398673601557351;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.roll = 0.762099874622344;
    tmp_msg_0.pitch = 0.4774885548957718;
    tmp_msg_0.yaw = 0.9250963810524487;
    tmp_msg_0.custom.assign("NXMFKDVEONRSZXNELILNNIMOPEBIOSWAZZTZWJYPCLOXRPDGGRGYXAWMZJCIZPISIVMSVNYTHNPVKBPYJFTJLYHQHHGRKQAYQDSXHQRWYJEGIKEVQUMBFBPHAWURCEQJFGEUFTMLATLOBTXAFJOOXRDVBSCEWDN");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("NTCTUOFEHKXMGLLMUKWKDQYHYKQMWIJRXEUYLGHJQLDNTCWQAMOQPJZVCOHAZFAZPEZ");

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
    msg.setTimeStamp(0.2604081371594673);
    msg.setSource(15552U);
    msg.setSourceEntity(155U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(83U);
    msg.type = 127U;
    msg.request_id = 15296U;
    msg.command = 72U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 13657U;
    tmp_msg_0.lat = 0.016293630308154894;
    tmp_msg_0.lon = 0.02164501609895053;
    tmp_msg_0.z = 0.8382668718951382;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.3757001664843892;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.duration = 40069U;
    tmp_msg_0.radius = 0.5308295066755292;
    tmp_msg_0.flags = 38U;
    tmp_msg_0.custom.assign("BIXCHDGDWNRTPZNQOARIMCERHTGYVUCIDYSEGATVWQIVODAECZLBKINIIZZFQPHOWLNRMRBNLEWYWKUIRHCRWRQMODVGXBMMPLSYNALXTFFHPJSDOFLBJKVMWDQXPZAJXGVPFLYUNGLKJJIUBXKZFSUTQRFEOEMGDKWCZOJGCXWPWZLHEUHFBEJAGYGIUJHSMSTMDUKNNVKAZCTJKOMQYSLBPVPTSUHBOQASBEJVDFPCAHXXTAKC");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("AVHMXNMSPFVCZXSNOOTSBOZUYFHOHJMIVUU");

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
    msg.setTimeStamp(0.1826609627207212);
    msg.setSource(3598U);
    msg.setSourceEntity(251U);
    msg.setDestination(31423U);
    msg.setDestinationEntity(35U);
    msg.command = 169U;
    msg.entities.assign("NISMXUTJRAWNUNYISQVYBXCFSNXZAWLMEQQODGEGCXJWACGVPPOBNBQZZIUNDCLBMNFMLKPAIZHOVVZPLMXLYVEWPTHUPSBOLYJOVPEJGEAVRGCWDTJSIZVHYSLHMTAYHIAMTLXSIKTVXCYXFAOOQCTHWKRUCOIGLDDJDSZNIXCUTWARZHQCPKWTKYVKQRMLRPB");

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
    msg.setTimeStamp(0.3102497017640369);
    msg.setSource(14609U);
    msg.setSourceEntity(234U);
    msg.setDestination(11335U);
    msg.setDestinationEntity(251U);
    msg.command = 48U;
    msg.entities.assign("PCBCXGNXPQESPJN");

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
    msg.setTimeStamp(0.2208040146720539);
    msg.setSource(58859U);
    msg.setSourceEntity(242U);
    msg.setDestination(41524U);
    msg.setDestinationEntity(74U);
    msg.command = 142U;
    msg.entities.assign("PEVSOCABKWHMQIDIXDPZKBXHEOMMRUZBHEKXYOBYPNBPENPWEVRUYGYATXYJTSVSLRCMGMPGMSVCHBQTNIWUQIEUIGCSTFSLWQXTZZGSTYWZNCKEBYOV");

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
    msg.setTimeStamp(0.47584703822960395);
    msg.setSource(35082U);
    msg.setSourceEntity(203U);
    msg.setDestination(51029U);
    msg.setDestinationEntity(185U);
    msg.mcount = 176U;
    msg.mnames.assign("OBDGSEXJEPVKAFOMKLWUBUDQPAUKRHAZNPAZLFCVRZWINHGOCRBFNLPQZYJPECDXCUZPMWFJRXYLRPUKYOWMHPEQQVGZGSMYTRFEYKOMOKIAYEWQYNIDTRTNQVLBRFHQSVDHIBDCEGLJEBTBOMIZYMGVHXJJQVBAVOTRDLMNHJMZCSWWLOXCUSEDQUKGTFEXXFKNNJWJSGKQCTBKFFYVDASIUHUUMPZAVPGZGXRTIACB");
    msg.ecount = 101U;
    msg.enames.assign("NOTAOINGIPSCJYFIEMHZSKUEJ");
    msg.ccount = 3U;
    msg.cnames.assign("STKNAZHABCEKYESCBKTGEDTUQJLRPJSXLCVDAEDTO");
    msg.last_error.assign("UBCMMKVTSHHQAQEUXYWXVUQSPLQOAHXSSKFDNXXORFYQGANDMDAFFEZTYIHFJJEDWURUORQMSZMQZALEUPBEEKTEWBTCKRMRGIAWNSXUCOGNHDHATPLGOYBMOTOAPCNTXFQYIAJUWXJVUVXZEBVTDRBJNJVTBZDK");
    msg.last_error_time = 0.618206167564708;

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
    msg.setTimeStamp(0.6490981596462998);
    msg.setSource(51504U);
    msg.setSourceEntity(15U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(99U);
    msg.mcount = 45U;
    msg.mnames.assign("HMVHRWKYDPYKJQFYPWZYVPWTXQGXOLGXAMZTLKNJWGYOZHAHDPZNLEDHFEBTRSJBNICJCGKBRQZACESCCA");
    msg.ecount = 90U;
    msg.enames.assign("QWXBYEEFSILCSGOBPVPLUZXNJZQTSHWIBPKEJCSUMZQBOUIUHLNVYRHTUHYNGYJXECENBQTTZAZXTAROIWCIHDMXVDALZDEOSKTRCWAMCEMRKFSUQNNLIMOUCSRGUDSFATLLDVFHRYQQFGUBS");
    msg.ccount = 232U;
    msg.cnames.assign("KEAKLTUAFYJREPVSEQUMXPNGYWQQCRANIKCPSVUACKJYBYLTNKBWLRAGIMGGDFOHPTRMWUSFZSXXKCWUELESSDBBUCVERHYVNZOIZTLVJCHPO");
    msg.last_error.assign("ZDXGRVKENPVUOQXYJJYIKMIWFMQDDKRQENRJOMYOGGRUSCRNBBCZTLSJRLALVADJAECHLGRHTEFCTKZNHEVLQUWKIWLLBAUYGIFOZTCDGETMEQZAFNPEXJDJHGUWWIMIHCPTBKOZNPNULSVYODQERKYTUDDTXUXOBHMMQHNHVSBQKXSOOIZNXHSAYEQRAXWAFGPAXBIPCVUSCOQNJYMCVJZUXTBPKASZYFFVVKLCPLTMFYJPWMG");
    msg.last_error_time = 0.13943491207356717;

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
    msg.setTimeStamp(0.45659543048156903);
    msg.setSource(31382U);
    msg.setSourceEntity(81U);
    msg.setDestination(34541U);
    msg.setDestinationEntity(203U);
    msg.mcount = 253U;
    msg.mnames.assign("YCCATRXBKVDNCAANBMUHZJTVVKTUCLPNRBANDJFZSQWRPLCIMVAZFYTBTBAJQIKTGRUKHOJZGVUXEGZUHHEFSOKSSWBIWZVJMJYBGPVLIXSXMQNEZCLUVUIYQQUWTNLBOETGZ");
    msg.ecount = 175U;
    msg.enames.assign("JNZJXNZXNLNIJHYXJGAKPOWKKBOFOWONUREFZNCMDUEXHTJQPQYSRBFJWMGIGIPYGYQLNRDSIYLKUCLLTLHTPEZBKYVWVLLVWXUBDDQAMCOPVQLAZTXVEOPGIQHMDFIUSEPFHFAZWRLENBJBFSWKHQMTEUTECSXSRWFOJVCDPFGCPAY");
    msg.ccount = 97U;
    msg.cnames.assign("OJUEWNVKWGQRXAUMWECDCYBIGZVTQTYPHWQIUZLCXQNEMZMQOZWWDJKOHEELMJFHHXHNDZ");
    msg.last_error.assign("BUGGXXAYCIKDWEFNLRTNMDAPUDNLIUOQNZFWKPCUPCSVZGFOHGIQH");
    msg.last_error_time = 0.21210632665449358;

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
    msg.setTimeStamp(0.7411182497354631);
    msg.setSource(7020U);
    msg.setSourceEntity(237U);
    msg.setDestination(21738U);
    msg.setDestinationEntity(159U);
    msg.mask = 36U;
    msg.max_depth = 0.47080578131932027;
    msg.min_altitude = 0.09239686931894053;
    msg.max_altitude = 0.46426755582572343;
    msg.min_speed = 0.29077199927401776;
    msg.max_speed = 0.1693111487014063;
    msg.max_vrate = 0.928259483596396;
    msg.lat = 0.8123745594764714;
    msg.lon = 0.09219897731051596;
    msg.orientation = 0.017415998989762094;
    msg.width = 0.40151680108474774;
    msg.length = 0.7405507879437592;

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
    msg.setTimeStamp(0.32692991199949795);
    msg.setSource(42409U);
    msg.setSourceEntity(10U);
    msg.setDestination(17448U);
    msg.setDestinationEntity(18U);
    msg.mask = 137U;
    msg.max_depth = 0.8197358850631576;
    msg.min_altitude = 0.7743370058670556;
    msg.max_altitude = 0.34545093042635167;
    msg.min_speed = 0.38491355597747057;
    msg.max_speed = 0.23727437902560788;
    msg.max_vrate = 0.9581813727741977;
    msg.lat = 0.7572326954545473;
    msg.lon = 0.8138103327344677;
    msg.orientation = 0.08111559970967352;
    msg.width = 0.1357038348115076;
    msg.length = 0.4491615149138496;

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
    msg.setTimeStamp(0.16034650918832416);
    msg.setSource(3194U);
    msg.setSourceEntity(140U);
    msg.setDestination(55791U);
    msg.setDestinationEntity(118U);
    msg.mask = 151U;
    msg.max_depth = 0.38112251637680705;
    msg.min_altitude = 0.6004012606889723;
    msg.max_altitude = 0.1843279956170102;
    msg.min_speed = 0.8552372980641277;
    msg.max_speed = 0.6309881080365453;
    msg.max_vrate = 0.6038249086079804;
    msg.lat = 0.3027062751760611;
    msg.lon = 0.736339671888293;
    msg.orientation = 0.23988817586835443;
    msg.width = 0.2893127968397978;
    msg.length = 0.5416077877099145;

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
    msg.setTimeStamp(0.2834459786030842);
    msg.setSource(16077U);
    msg.setSourceEntity(252U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.25600607191958547);
    msg.setSource(17659U);
    msg.setSourceEntity(115U);
    msg.setDestination(13613U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.5678510656398646);
    msg.setSource(27040U);
    msg.setSourceEntity(144U);
    msg.setDestination(29045U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9537885452347475);
    msg.setSource(18695U);
    msg.setSourceEntity(13U);
    msg.setDestination(31839U);
    msg.setDestinationEntity(226U);
    msg.duration = 18897U;

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
    msg.setTimeStamp(0.6720186635648537);
    msg.setSource(55183U);
    msg.setSourceEntity(30U);
    msg.setDestination(40833U);
    msg.setDestinationEntity(188U);
    msg.duration = 39499U;

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
    msg.setTimeStamp(0.5823490756445276);
    msg.setSource(47982U);
    msg.setSourceEntity(170U);
    msg.setDestination(32837U);
    msg.setDestinationEntity(144U);
    msg.duration = 62146U;

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
    msg.setTimeStamp(0.7242556024325097);
    msg.setSource(18472U);
    msg.setSourceEntity(40U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(254U);
    msg.enable = 147U;
    msg.mask = 3728184005U;

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
    msg.setTimeStamp(0.8032428334509308);
    msg.setSource(47145U);
    msg.setSourceEntity(196U);
    msg.setDestination(10729U);
    msg.setDestinationEntity(132U);
    msg.enable = 186U;
    msg.mask = 2297424192U;

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
    msg.setTimeStamp(0.2463537074345552);
    msg.setSource(44496U);
    msg.setSourceEntity(31U);
    msg.setDestination(45010U);
    msg.setDestinationEntity(242U);
    msg.enable = 64U;
    msg.mask = 549206808U;

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
    msg.setTimeStamp(0.9306465757209016);
    msg.setSource(20309U);
    msg.setSourceEntity(173U);
    msg.setDestination(38122U);
    msg.setDestinationEntity(64U);
    msg.medium = 235U;

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
    msg.setTimeStamp(0.45193797358796217);
    msg.setSource(18946U);
    msg.setSourceEntity(35U);
    msg.setDestination(21333U);
    msg.setDestinationEntity(123U);
    msg.medium = 197U;

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
    msg.setTimeStamp(0.8421306216401256);
    msg.setSource(55809U);
    msg.setSourceEntity(167U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(108U);
    msg.medium = 199U;

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
    msg.setTimeStamp(0.7068819673018416);
    msg.setSource(55219U);
    msg.setSourceEntity(156U);
    msg.setDestination(27548U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.6218301955867257);
    msg.setSource(47965U);
    msg.setSourceEntity(132U);
    msg.setDestination(15794U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.5671765467644796);
    msg.setSource(65476U);
    msg.setSourceEntity(82U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.03584089418368397);
    msg.setSource(16677U);
    msg.setSourceEntity(98U);
    msg.setDestination(11694U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("MPFFCOPUVFSCPYSXLPJEMCBOXEMVLVFMDZQBQYGXUUQSNKJQIXYJJAXOYGZIMUCGOWCLCSHLEZIWYBUHIHDWDZYIHHAORNWTBTVLVDGHCENMJXZN");
    msg.description.assign("JLXEPVFLJBIUGSAHUWDWMRSVKFUZQGRJYSIAFSDREAUYQGETJQQIICEGDFMAIOOMLJYGVDLUTSLKWCFORWJKJZLEPALCDNCHDPBSZOKUNWHDTGPNAVXQCVFGTVCXKJMSBHKTBH");
    msg.vnamespace.assign("CVEVGJGNJYPTSMNUUVJLTQOUSHHBSMWZKNWWYQSUUOPJKXTAHKRPFOFOAZEPXECFRSXQWKRLBXQGWDKOATPYTXVKDYLBEONLFDXMZIERZGRBXX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OJYXEMQEZSNZYUUXFFTWUTFPG");
    tmp_msg_0.value.assign("IRZYPHTPHGSZNUCMJVBQGCCRAOOCKNBQSDSDCYAMSTJTTDUH");
    tmp_msg_0.type = 44U;
    tmp_msg_0.access = 148U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ATKDGYUDNQQOZLDMLOZONPUFCMSYRRDXVWQMWFATBIEKXMUQKYJWJIYPHQISEUAXRQSWUSKZSVXVRRKOLHITCEKABBGLVNUJLOWYSEBIHVERTFGIOINZHTZPOQAFGKYDZPEZMCWAMPNFCPOUPYVCVIJNRXLJACBNBMXWRYWFMFNUPKCOGTCAURQXKKJDHNGHTABJORGHHSXSJFHHYBZLQDTQXLZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AIIYWXRERPMTWZQXAIJFVUDJGLIBGOGHNDBODRGNAXVYQDMUVOTZRGPWFVPOZROFFQDQTNH");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 24632U;
    tmp_tmp_msg_1_0.name.assign("LKWLEBENJGXTVJAHJEFHYRIYNYNOUNLOVSDL");
    tmp_tmp_msg_1_0.custom.assign("XUDQPLYYOHBDIGMQZPMJLIWTEKKHLWBTZBVUDJAAEXVVZOVQGGNTCPHGBAPYRCIGETYJZVNKZPLPVANUWSEXOXIRYYFDDJSEMCRFRVUINLYBDUEEIVAKFOULZMRLBORGHJTJRQWQSHCYXKGXWSUFDNUWDSDSZFMNGQABKRLYPXAOHWIWPDTMWTYVMNKCCQHQHZKEFCQLKVNFGA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Announce tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sys_name.assign("EXGNMHFHXKPRTHSQDGUPNYVGDQHCUGBEGEWHQZX");
    tmp_tmp_msg_1_1.sys_type = 114U;
    tmp_tmp_msg_1_1.owner = 40640U;
    tmp_tmp_msg_1_1.lat = 0.7735473633584832;
    tmp_tmp_msg_1_1.lon = 0.8331556361375966;
    tmp_tmp_msg_1_1.height = 0.12468248071503707;
    tmp_tmp_msg_1_1.services.assign("LGBLMJMYHGHNJCSFWKYBTODARVNCIHAISYDDWVRQSSQRXZFXKZPTYUAUAWVPBWFYWZDIUFENYVSXRXDXPKUBQPOYVLUUTOSQZQGCNKXZQKKQDLEICKHBYMTHMEOJITURYLZUPWSNCEXUNMBEZKGUAJCHDMPTOBXPIDSJWLWFLOWDQ");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FuelLevel tmp_msg_2;
    tmp_msg_2.value = 0.6193618560590086;
    tmp_msg_2.confidence = 0.6104714913182502;
    tmp_msg_2.opmodes.assign("PJWKJNGVPHCHZZMBZUMZWJUTZADEQTMWHRGORISAPKODQOYKYFOGXBLLVNEBTQFLBTVNLEOVEDRJONLPIODEQSIZKMCZTVHVNFHQFKWPMWKGJCLBYTSOBVDJNFLXSUIYRDUZGJBTMVXRIMOFQNYPBDTQUOWSQJUSECRXHSIARGWVYNHEJSRFICQXZCYP");
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
    msg.setTimeStamp(0.20694495176187344);
    msg.setSource(11882U);
    msg.setSourceEntity(190U);
    msg.setDestination(20735U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("ECCUJTDVOGTXSTZHYPERZLHEAJRGGPQTXJRBHOXWMSYFZMMWAAIOHUSGYPAMAVJRUEDCWUNZKYYMMIKDTLANNGEYFSIZWUMXOYFKIW");
    msg.description.assign("KPHMTMHJGGSKMZTKVMZENWTZXFQCABUEGWOXJOYPXLHSECMWIOLVYXQYCEHABIPADEPZIYUMQFCKOBOSVPMYNTVTDPOKIFZNGZXBJBHMTQPEKYFNRQLHDILZWCVRBTTNYLUIVQQTJWUDFJHNJWUESSDOBGVEYQPCCKWGCSDKRGBQLGZLRNACVJWRMXXDRACNAFJPDZVSZJREUXSXARMLRDIKWEOYTGQSXKBLLFPSFUOOARBUNNAWIDJUFH");
    msg.vnamespace.assign("VXYVCYTTVUICMHZHPNWFPMVYHOSAUGRKTPADODUCAJWYGPSJVNKBHFEMBQZELLQFIGFKNRLYILFZZKOFQCJDYMJECABMADRTEEQOCSJQZBSRBDGKNALKMXP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BDAOQELBCJDOXQATPZXVVNWSGXTXZNSIFKVJCEZYUBUNUWRUPFYJRRJLJHVKNJDDCKOHPKGUUELOTISAIXIKVRLWPRQOXLDAEMAW");
    tmp_msg_0.value.assign("IPOHZAODXVWQDJFQCBLLZBOQMYHLZYPWKBHQTRGHOOXPZSKBDALENTXKAZGSRDPSWWXWUGAQYJLMKOSGPTZMENSTYIJCRDNUKNAFTYZQYPVWVHGNUFCIMLCDGFICCEAEHVZJBDCATJZMFUCSIIUVOGPYNIGEOLVAMPBRFVCDUTHBSKIIDZSDHXFAXEXFKBMLJWKBOGGTYHNOQPVIFY");
    tmp_msg_0.type = 50U;
    tmp_msg_0.access = 87U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WSYZHBHXKEENQUMOXZNYMLSRKYMHAZMHZPPCPFJCGIJZUCQLXNOOIXJTCLBIPDXFWSUCANWMDQWITKNFBQRQFIFLZVQHJJLGCBEFRKDCGLKUQIDVYUUAEIWOTRGCTTLLDBTPMVIEKVDPLDQRUGUGOOBJZGFSILKPX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WMBFRLXEBQIROEZUDGXOTQQNQURKJDHLYADBUJNEALMEILMRGTYJWEYVPKJHZPGNZUMYLDAZWPWUGREOLZFSGNYTDKYVHYPUICCARZYEQVHJLUKEZSBVQIIWCSFDLZAVSGFVSJXVGSBFTGKATHMCFTFMXONQOAJHPWH");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 17122U;
    tmp_tmp_msg_1_0.custom.assign("QSGKDQERJVECDQZKUTMMPNANQBMCKXGUPRXDEXDGFCKQPOCEKBQKXCMLFTEBHHTNXGYVFPHTGCUXUJIHWDAXTJFTYDXSUOLEZZYSNBIULYZDYUNYEJOOZCXATMRGDZWIUZIRMSAILXNBGGBLJIDAJOFIWPOMVRKYHPQSYILPSVZTWEFVKPUHGWANCAFLVHOFLSMNMIJBNABNKJFQWSTQL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("PPSVBFXJHUHGRMGFQPCTNXBJRVUBZOVGINQIRSICHKKAYIOJBDJXEJQZRGAXLMALELSYGNMOIPIGTYBSJMTHZLVAFTRHFWNPHTDWJROFCUGDUWOFGBYEUWCLNXWODMEDHNBORYZCNCQGMVHXZXHKAXTYEQAXQKYEBKPJTJXC");
    tmp_msg_2.dest_man.assign("AISUVZSYUMCDSXKDMCNSHWTJLYKPIPPBCCBRSGOUWTJPHLCAXKFRTVDPGQOEDWUVYKRVONKFAREZAVKTPNCEQOXPSAZOAINMSIGZKVEBBGEVZLHMINMFFITJXQHEFLRHHYDTULWWZFXOELODXNTGFQJYDPLZXKUSHYNYWIVGFGITZQDUKFGTMLBBBCRRIQMADBJJVQSENKJULBFWTWV");
    tmp_msg_2.conditions.assign("XCOCUBYVPSQLYHHRWKIVTWRAHKDSPFNAPHPZDOOBEVZFMYSTHOUNAMVXPQIAWYXFYKGUEFNOOJRYTLMADGRMQBDVINFRTETLIJXIPJWFKRUKLB");
    msg.transitions.push_back(tmp_msg_2);
    IMC::SetEntityParameters tmp_msg_3;
    tmp_msg_3.name.assign("IGZRICHTJWJJSKCRTLAHMNSUTIXGHEAYUZHZLFYRYVIBFBXMYDKQFADPFLHYNFTXHVNRJXPTOJYJGLGCVMNEMBOUNLXOGOCZEWEQQVJODZCJEGGQNCQOVLXXMKUDDAHPIOKPBRZWSTWRLBQIBTWPUMCHAFRTUKTSSWCKOMBKNPASCNWNFQVDSZZDWBAESXEPVGZB");
    IMC::EntityParameter tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.name.assign("CFIAWUNXWRJYXLQKEZZPUIMJHYWWPYQUMTPTQTCAYTRNZGYGKDEREDSEWKFMVKSSYPXLOIOJYCLBYJFNMZSCDRMOVHNZVENNQYICEOXCLURDPUOQTVHEANGMMOKAXLBJXIRFSPB");
    tmp_tmp_msg_3_0.value.assign("MKMFRGGXIKDNOHUEWLFHZQHTZRVMAKJCHNCHMNUVURXMUVTLPCMZHDXAJZUEWCWJKRABJCTFVUYOZGBJATKOGIUBTXEWHFFQNYZAITIMWSAVDYKHQEGRUGZELVCYSRKCSQGQWUDRIXUVHOBATMYIVDAGOYFRRXICBKNBWIPLIDEWWNVYHGEXKLJQYFNOLMSDBSGOLVQXRDXCPJLSEOKPZAZFTQJPSPPSEBNIZJFFMBO");
    tmp_msg_3.params.push_back(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.5550990816876706);
    msg.setSource(30476U);
    msg.setSourceEntity(134U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("ZNFKLPAJFVKDEGEUKPHDXFZHHKBNICKBEFFRZVUIGDCOGJNOESBFOYWTAGHWBRVUYYTTLRQLHULYMAECAGBVI");
    msg.description.assign("YZYHGRUZJBPOODGXNFWGNLRHHPIBNWOISEYCJUMINEKDARTQMPNQEPVWGIEKWEBCVXBTSAYWFETRVUCZZNRDZYOLRAJOYKDMVMQNWHHPFEACBOFKQDQCGMMAIPQWNXGVFOESDXKJJFXDUIBUQLJKTOGTJPXTQXSCHVUEBZUKYYJJCIDLXIGMVVTILARHEMFSPGRTXVRHUWOSLPAUPBHDYCZRDLXVASSMKFCKKFCZSSQAAQTWWOGBNLTZLI");
    msg.vnamespace.assign("NGHMAEWGSNXEIQDJCYUYPUNHIQXOWZMYORTRKZLYGRVKPCZVICPGDWLANOJRKTSDBVVIIDPRWGXOZPRMFGMTFEBDZLFPCOIUNPWZATAYDXALKHGHXQVVWY");
    msg.start_man_id.assign("BLEIKDCBFIYORSVWLLHVOSJZVMOPOHWGZPXRWYIKBHWBXCTUUPAGSTUBGDDOZLCTRODATBVQEIKEBELNHFQETFXFUJPVDOGVCUOXQIGFIWAUNVHODVSPSKMKQXWGJUSRYJUEPNRHYTRVEQAABALWOTNQMAPARKRNECJWSQTCNYZXPGTDREZBMZMSHZJSIMDGHAHYKWBDPJRMLQXLZCLMYCQIGYKDNXJAIWUFCVPZQTFKJGZEUXMCXFH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VFBBBOWPTXKUXDPHWZFXKMFITBSPPVGGIQZAYYNUVRDBGUCSDBRLEHGYXFJWGRPLRKCULJFGYDTIPOIFAWUKTAKQZSQZTVJLJOMHRJTAYDQJLOSRXNNFRZLQIDTKXWYYWFYLZNWXCGWNK");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 50196U;
    tmp_tmp_msg_0_0.lat = 0.6093880862482822;
    tmp_tmp_msg_0_0.lon = 0.7592909568163757;
    tmp_tmp_msg_0_0.z = 0.5993875317623103;
    tmp_tmp_msg_0_0.z_units = 137U;
    tmp_tmp_msg_0_0.speed = 0.17855619049636207;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_tmp_msg_0_0.roll = 0.8814102929874803;
    tmp_tmp_msg_0_0.pitch = 0.6282196145286953;
    tmp_tmp_msg_0_0.yaw = 0.9145173466667189;
    tmp_tmp_msg_0_0.custom.assign("DUXGFNCMQKRJVWBOJHYWTDPLHVRFXMKDGQLVIFBERYMUSAGBQWMOOOACKEHJWQSXHDQPUUBZAULMSLLELNUXBYZGZTRRMPJPPOAPZXBAEJVTNGCRAJPAQWSKAILGSDWIXFKROLBXVNCETNVTBSHIDYFTWGOEWUUZFKMXZPBTYHCCIYKGQOMEUCYXMGHPUGJYQCKINEKBIWNOVHNIDDVSRCAOIDLZSZEJYR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PolygonVertex tmp_msg_1;
    tmp_msg_1.lat = 0.15226994810454786;
    tmp_msg_1.lon = 0.4039805674962116;
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
    msg.setTimeStamp(0.6059899339325923);
    msg.setSource(34277U);
    msg.setSourceEntity(111U);
    msg.setDestination(51963U);
    msg.setDestinationEntity(70U);
    msg.maneuver_id.assign("NPHWFOCUWATYNDSWALJNVBLJGDUUYHCNBRVBAJZHGSGALZUYGGCBTXLHKJVIVWEIOXFRAIEXZQEFHXZCGWSLMPACJTINLISISFXVFDTNDKXWZZBJMSVTNQ");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 61156U;
    tmp_msg_0.lat = 0.6338161741829762;
    tmp_msg_0.lon = 0.20606508588198902;
    tmp_msg_0.z = 0.8055133684453394;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.speed = 0.7925689352022512;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.duration = 59188U;
    tmp_msg_0.radius = 0.4915889718773898;
    tmp_msg_0.flags = 97U;
    tmp_msg_0.custom.assign("DAKBZBQCZNWEYJHJKHRBLGWVUCVETMYNJGFWHNFESHPUSZMFYGEYWGDPXSGSQOPMUMJYLJJCIKAKICSNMKXTGEISLRHTNDMCHHCKEXDXCTUXOTVLVUVTCEQVQYPBXHWQVEMPYZNGOMAZBCPEDNEBOJTYZHULMFSNVPPISDZOYUQVXNLFBZWRJLRLCQDYOAWFGWROFWIZIXPAWUDRRAROUTFHLJQQTRSF");
    msg.data.set(tmp_msg_0);
    IMC::AnnounceService tmp_msg_1;
    tmp_msg_1.service.assign("LUQYALIDUTAUZLUZKNLDLOBREPSFNSKMYCIBQFVXLYTUYFZMODVLAKJWEWEADYXDNEZTUIWTAUTSMZRTWD");
    tmp_msg_1.service_type = 56U;
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
    msg.setTimeStamp(0.6226627631402467);
    msg.setSource(61916U);
    msg.setSourceEntity(151U);
    msg.setDestination(34557U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("AWFDTJKQQIOMFKJYGEZENIAFXBEHGEGMWDJHGXSAKEMCNAFWLPGEGYFJOTTTBZUUGRZZGOOBZLMJPWUFDBATKQQRCKZPPLHIKPPGDAVIERQXAIMLOHULMDDNRVJSSWRAWWITZZRWNIZDMJURXSBPLOTRLQXFESZGYWVPYVHUCMEIQXKIQRJYYOCCSMRNCOFNSVYBVKPNJVFLSN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 9768U;
    tmp_msg_0.flags = 147U;
    tmp_msg_0.lat = 0.96769713430472;
    tmp_msg_0.lon = 0.7936901714538258;
    tmp_msg_0.start_z = 0.3810687108809232;
    tmp_msg_0.start_z_units = 174U;
    tmp_msg_0.end_z = 0.3964619897798106;
    tmp_msg_0.end_z_units = 211U;
    tmp_msg_0.radius = 0.33986597842562727;
    tmp_msg_0.speed = 0.20085717599961883;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.custom.assign("FSKZGOACCMMASIOGUUUFXZFWNXPMJZVQISIFPJWZAGDYEGGXOCNMLBHYGNBRJLECCRWVNFVQKIHKIKHYEFFJDXJXTWDZJKMORMUNTJDUCGIDYHZABSAXQTHDBKVHHRGIAFQPKSTKVNYWRBLEZOPU");
    msg.data.set(tmp_msg_0);
    IMC::AcousticPingReply tmp_msg_1;
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
    msg.setTimeStamp(0.09640666712986579);
    msg.setSource(37606U);
    msg.setSourceEntity(174U);
    msg.setDestination(14862U);
    msg.setDestinationEntity(151U);
    msg.maneuver_id.assign("RURGUKTSPWKYCOAQJEFYTIIDQKGEGVMDGTFFIIXZQDAYMAPJTNXVOSHXYOMFIFQXPEDJCENXKOMHZEFOGZUROGBHVSWCXAQUTLRVWWNLGIHXOVUXUJIEKSALHHTJIQJQHXLNPRDWFHYMNPVWFPJVAUMLGCBCQMQNM");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 23862U;
    tmp_msg_0.lat = 0.3411974073451255;
    tmp_msg_0.lon = 0.9029517589126971;
    tmp_msg_0.z = 0.37643669612409936;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.amplitude = 0.8018265639957612;
    tmp_msg_0.pitch = 0.7261357242272325;
    tmp_msg_0.speed = 0.246117991224039;
    tmp_msg_0.speed_units = 145U;
    tmp_msg_0.custom.assign("YIBQLECXSSYUPHDLVGUXBMADFOWUZLLDKVDFDXFGNYXAXMMBZXTVBDIKRGESTFKOEPUZEWNRLQJVAOWCRQARLYYGZQTMSEGHGVUQWOBUROJXREEZIWPNHNAPPYLTAJYBWVGIHZJRSUCNXAOSUMFFZIQQNFPKDTJ");
    msg.data.set(tmp_msg_0);
    IMC::PlanControlState tmp_msg_1;
    tmp_msg_1.state = 71U;
    tmp_msg_1.plan_id.assign("NAHKVYHCTBQPZPUTFJQOXMBKWHORJAGNF");
    tmp_msg_1.plan_eta = 527430370;
    tmp_msg_1.plan_progress = 0.6595357719506811;
    tmp_msg_1.man_id.assign("BJGWUJDFVKLNMQZLWVARQERTCIBYECOVDAYVFHQPNKUUCNXHAFRQRHKRFDRDBRZBYYTOXGCOUPNMYXHFXTMGYZVNHUECSYGCVDMPEJXKSZMWJIZCZGNYZUQFBQSEPYUMIVTLEJONIUBT");
    tmp_msg_1.man_type = 32762U;
    tmp_msg_1.man_eta = 12196778;
    tmp_msg_1.last_outcome = 28U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryEntityInfo tmp_msg_2;
    tmp_msg_2.id = 184U;
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
    msg.setTimeStamp(0.7121998474336046);
    msg.setSource(58388U);
    msg.setSourceEntity(206U);
    msg.setDestination(18202U);
    msg.setDestinationEntity(192U);
    msg.source_man.assign("RPECVBIXUYHZMXLCTTQXEGCCLPPYSXYRJPFVTTFOPOWWOIWMUGZJVCTGBYKIGRDSEAOGPODNWPQCKKSCAEIOXNLNAZKXYXIWCVMJEALLDAFIEGAFJDDDQYNQBVMLSHZBJAVRKHBJGNDBVNAMHTIHVFULQHJGFOSAENGZTBPHQ");
    msg.dest_man.assign("ZYFWBJVCYASYSDPODKQVRNBVSZJPRBMFAZPHCOHTGIOGLLAMAWHFDMUFBDPNOIBIEAKRWEJEXBMPQQFBRTTNYVCSTNJCUQLHGBNHAAFKJGYESKKCNAJLFFUDXCQMNBXRSGZZRKTIYPIDXNGRPVVIRRJEHCWMBDGUZMXVPRUMZCSWWUHIOQGQLLDHGTMJLJHOUZTCFIHVKWWQAXTOVEQKEMIXYVXOEPINDUSSYYXGNOO");
    msg.conditions.assign("OYCDFNRWSIQLBHBRATTPTDPRMDWDCDENMTIKEDRFSUJOHARWNFSPGHPUQALYGKXBBLCSAEYTHZIZBJXLDDCVMEDQUKIOBOUZQNGVEXUSPQYEG");

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
    msg.setTimeStamp(0.7440092489190786);
    msg.setSource(445U);
    msg.setSourceEntity(251U);
    msg.setDestination(11894U);
    msg.setDestinationEntity(1U);
    msg.source_man.assign("MTZVMMQKSRAPNSABIXLCCFHTLJJAFPXWNK");
    msg.dest_man.assign("IHWZQTZQRJMBUTSHDJRMLEEDWQOTHVBARGKLFWHAVLPFPAJBPYKDRGVBUBVESKNSCXJAHW");
    msg.conditions.assign("OBDOZXNUAPBZZEHBUSRXEVPZWLOAKPOVBDZTVSQGCCMTDCXAFSGSYIHKRIDNIATBMZXFRCDDFGPBKYAPMJZTOFUSFUPIMECJTVAWPDUXRPLNQHQWHJGPLHZLVCKVXBCMQZSLMAGJWTKVYWLRKYTHHWYIUNOLDMJGKWQCTOOGVYCBNFZUBDAIWXYSWLSNPFERYUFSLURONJOVENIAQIWURGXERGCTMH");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.45652683583656095);
    msg.setSource(44390U);
    msg.setSourceEntity(155U);
    msg.setDestination(10952U);
    msg.setDestinationEntity(39U);
    msg.source_man.assign("ENXTBPDNNNVNH");
    msg.dest_man.assign("IENHMYGXOCRITPSXQLJGUGATSVCQHIMXNDYKTNSDMBMOYSADARCYMUQPBILTEIGGAQDJWQZNCBXKFC");
    msg.conditions.assign("ARNPEVKJIBRPDTMTGDYAVRGLUKQRCVBNSNHLOSGFHDGPOCOIFQVLDQQZSPBMVPBXAKKERSTYTGZLYBLBGWTCHHUIXFWEYJRYNZAKPEHIWAZDMKLSUDZJOXHCIOOXYVGTCDLKNPNYJQCABVFCFBPUJUEMUUFTESGYAXAUJRVWWUOFOQFLKSZZLSEQIZMEHNIYGREWLYNMXOWKMPHUNDBJRFAKJDJMQTIZPXIR");

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
    msg.setTimeStamp(0.7839335918372976);
    msg.setSource(28067U);
    msg.setSourceEntity(246U);
    msg.setDestination(31920U);
    msg.setDestinationEntity(59U);
    msg.command = 192U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YSZNZQWWFVEWJMWSHZJKFGISJOEJXSBMUYUPLBLYUADYOXKCFINVOCMVOZGETCFMZATQTHLTYGGUKOPLJETPLFLVGPDNCCYWDXLKUEHYQIGICBMRDPBTKZSNQHTYXOMXJNRMNHGFLQPJPPDKJCMHIQDWUCVVSNAHBBXKWXWRUVBSENKJEQTQMSIKZRDYIZFAFVRSXTVRRAKTWHZREOCHRJOPWABZBNDXUAGPANCEDGMRQVUDUALYI");
    tmp_msg_0.description.assign("GRDQGMJOTQNGGDTXHHSXQHPNSHCVKQLGAEKJAMYGRVNABMDLYFWKZJNMOWGEWAPJPXGWKLFWIRVZBWRUDEWRHBCIFCNCBUEHYOSJIDQDVZOQUZAPWNFYEVYRUNMLCTZTEGCYXRSXWIKUNJTDOKRHVFFBQDTTMTLSRALZHIZEKASDAVMHSLAQLUJBLOJZTCMXCSSUIJCPPKFUBVIVFONN");
    tmp_msg_0.vnamespace.assign("RGPQDETZDTPGMOUXTQEJZCTLCXUJAXJVJYGKKWLOHRJBQGAYYCHEEXOVSIUJ");
    tmp_msg_0.start_man_id.assign("MNPTQKUWNPXKYUIJVKOYLWSSGCEKULZDEYHIFTXICQPCTSBUMFJENGWCKMLGQRDGMFAUNRMLFNKNHYVAILMEBGFHDEYHSRYBZXIBNXNJCVOJZSBULXVVXTSHRBDXGTEKMLFBFWPGAYAQWITRZFOUSPVMKOCYGMAHKCZEVAROUZETLAQRRJPQIHIXRORXLQHWWUUGWQDACVDJDHYEQSPLGFSOCDIV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("NMVWSLQFRRLLINFXXUVIKHLXYOKRDEBKPFHXJBOHCPDDHSFYYETYOIQKDCWWAROVMCZMPEAGTRZXPRNACSWIQPPYHPQSBBMNEFUKXEQPACWGAEZDZXQAIMFNBNVWAIAZYTRJMTFURGZQSGVGIHLYQBJDLUOTUOESEUFKBVSHKUBXVKADJDSZWNGERKGILQJGYOZXXJUWJCDITAOVLUMNZCBWSEHJTVHQNC");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.5879433912132137;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.5881926293728612;
    tmp_tmp_tmp_msg_0_0_0.z = 0.42243612046420553;
    tmp_tmp_tmp_msg_0_0_0.z_units = 20U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.23803666307166949;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 108U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.46551820218915063;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.9715923857004056;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.11829288026559659;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.9549633152749313;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.23071711887182034;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CBAJHHMHYSYMRUJGPXASEDONXPCCWYEUQYSQQOWWQUZLBLXFRKZNVCRRHESJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 43U;
    tmp_tmp_tmp_msg_0_0_1.htime = 0.5694681220825424;
    tmp_tmp_tmp_msg_0_0_1.context.assign("NCXWGXYZPITZCSEZIBEYCQFZPZHLCJRBQMEGNARNGCTAJKCDUJPUTIDRWFAUFUYMCHNFYTYGHUTXGCKGALYFVBWWQRSDJWRZHFODHJXXQSOOTTLNEBKEHCOKPFRMRTRNVMSHBJMIKYBXGPWIJHEO");
    tmp_tmp_tmp_msg_0_0_1.text.assign("TRXHKVYDGCBZXWFCWHQWHARFDGOGAPLETCSWZBYROLFCIMVELDBTXVAJREANNFLBJPAUKJWPPVOPMOHOFBSPIHNPHRKERBVQOEZWESMTUHOIGVWDZQIVUFLKMEWLZXMGIQNUQDKYZFLYSLNYGQDBMABTQNELYVDJDJMPMUTGDAJGYUXHRGYOXYKEJX");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MXVVFJKNYZJRAMTGJJDUYMMVXVJWSSLEWXBQHLUCIOPTAOZIHGODVJASCPKKYKKTXGNQJTMKUDNZSYTOWFUEHWEICJXXFZODKTDZUWFLAHZDZVGNRHXMNCLQEEXELLHAQQMNBYSIBMLFYE");
    tmp_tmp_msg_0_1.dest_man.assign("JIHVWGMSJGRGLAQZKHCKEHFALNHYBPRIQPAMYLESLDXDUOQNYPEQQDUGXOZCHINHXWUTEINVOYCXEDFVKAQUFTVMZVLPUWXABKYVKMRCUHPGSXAHEJSSLIOXATQMJMWNMEPQJGGVRSYKMNWWGHBBZVRMWKEQTPTROFLHNFYXSLZCRZVRFJMAKBNUCCFBOJUYDFCZ");
    tmp_tmp_msg_0_1.conditions.assign("CEPVHPFJCBADRIXLQJQETKVGNXLQGWWRAYKNJZOVIKJTKTZRKCMLDZNOQNYNUDYJWG");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.506095906907279;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5754108932572655;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.10957906703288933;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 185U;
    tmp_tmp_tmp_msg_0_1_0.duration = 44942U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 46999U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 64787U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.9785593338849824;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Map tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id.assign("EUYVVWLUPEKSDGIQGPEPGVHXDFATIPFZSZOEUSGLWSFIOWMGMIVMFCNBSYKHUOTXNLNNHFBLYXUPISDHUTYZOQAZEEAGIDZKWWHMCWTQODZBRAXYZRRJBIVHRNUUOLOWBCLKSBIRJVMNXAXRJDXMLZPOOJCALRRSBHOVNJYLXDTBRCCNPSJQVTKLAKQSPMTCKBYAIFMCQFJTEJVWQYUAAENZHCPDQGNMWVRIXJJTZM");
    IMC::MapFeature tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id.assign("VISHFVOPSZMJPHGNMLJEZGOJHOBDBQGVQGUAUZSAPKKAAEWRDQMGTBADILFWDCDFYKJQJOZQCWTXPIJGANYLFQDDRNJCWSLICRZLEASYMPTDXRTNLJEKUXVUYIFFKQHPKERBHMHLUW");
    tmp_tmp_tmp_msg_0_2_0.feature_type = 254U;
    tmp_tmp_tmp_msg_0_2_0.rgb_red = 93U;
    tmp_tmp_tmp_msg_0_2_0.rgb_green = 30U;
    tmp_tmp_tmp_msg_0_2_0.rgb_blue = 229U;
    IMC::MapPoint tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lat = 0.23445451846329013;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lon = 0.9944439868305157;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.alt = 0.5612661133897715;
    tmp_tmp_tmp_msg_0_2_0.feature.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.features.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.3507819183548647);
    msg.setSource(45010U);
    msg.setSourceEntity(149U);
    msg.setDestination(28665U);
    msg.setDestinationEntity(28U);
    msg.command = 126U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RFFPWVBQNYOECYRRRKCLRXOZZMFMGVEHXVJKPGFUKGWZAVHEPDMQYXWRSIMBZLZCTQBPEMTXKBQQYXDXVCAJBGOCUKIHESEHNXDBBKEGDQOYIXIBONVJIKSUQZ");
    tmp_msg_0.description.assign("TPQGUUWPRVXDEHCHMIYYRRDFBSFLYPKCFMBGJSBJJOMLOB");
    tmp_msg_0.vnamespace.assign("RMZNATBOPIUHTWLDVW");
    tmp_msg_0.start_man_id.assign("DOMTQNLRGAUGWTCIIUNFJCBFTBMQWVRTFIZZLBANCRRBDXDZPAVQNXGHNTADFRJRVNXCOHTKRMKNXETSHERBDOPWJQUFEKYXFZIEDOXSJFUOGRIXEEPKQGZWXHVLQTWSEHLYVKLPEELFLHJGZWJQJMSNUIABLLCHYYKMSIYM");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SDMRGMYYIIZMBPCOTEZUIWIPVHXHMQUGZSNCOASNQBKHLZOBCUSGAMNSDSNYRX");
    tmp_tmp_msg_0_0.dest_man.assign("LVEMCKDTCPTLPBUKYWKLSNQTWRUVHEFZEBOMNMNYJOWDUQLPTMUJHBRKATPRVSXFIAENIZAECICCJEWKYFCPVNLQPGGJAQPYDQJTXXVOMSRGBNBPXKMGIITDHHGQZKCWLZHFYZUOWMBRMSEFWJKJNKXMVIZUNXFFZQBIATEOWDCQJCTRWORXRLSJZYLBQYNPEYPANFOGDEYDCQYUOGXUHIIHSUALBFIWMJHOZRGAUXO");
    tmp_tmp_msg_0_0.conditions.assign("DNLUYEBMIFWWUSBANPSEUDGRYFQRRMLWCGGZGXPPPBMYTFYIFJZH");
    IMC::ControlParcel tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.p = 0.5224248757031534;
    tmp_tmp_tmp_msg_0_0_0.i = 0.8144324064587085;
    tmp_tmp_tmp_msg_0_0_0.d = 0.1344594398267237;
    tmp_tmp_tmp_msg_0_0_0.a = 0.3101738753146579;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.12202835968442771;
    tmp_tmp_msg_0_1.speed_units = 94U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.2940479272223635);
    msg.setSource(1985U);
    msg.setSourceEntity(55U);
    msg.setDestination(30907U);
    msg.setDestinationEntity(208U);
    msg.command = 33U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LFGMQBUFFNIXYIJPLYCQIWAKAP");
    tmp_msg_0.description.assign("TVIBJWPPNWYLQFZNZGIXIOCPQKHWHDBUJVDRGBACVWMKEMAKDGUNNSNKCUXJPPCWADRQJRNJHBXYFLSGIATCCWDPZWYVETKNQGKSNDDTGCMXAHIKJZRYQFXYKEOKRSSPVQENLBTVEUYJUQCEKYQGICLIFRHZXIHSSRMNDOLFELTWXLXHUBVUCTXJOTUGRIAHPFOTEMYGIUABVGBRDW");
    tmp_msg_0.vnamespace.assign("JABTSMPULFULRAPFABNLCXQMITZCVKOCMSQNQPPSHHIXRRYXVCSTVHCFRBMECWTJZBGYUGHAKOGLRDOPVPDBGOPIEJAOAVHEBXKZELWXKVENURKDQSOFIMWVXJYVKQDIRNFTKNZVTKDSNNMMWXEKRDBHTLPGXYFYRCBUGIZBOSUCPJCMDFUFAYQOUWOIBFXWWUMWWJIRIWPQJZDEEALZHQAYYHN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PKUPPSMFVBIZAIUJECGOEPBTNVNLANEZCLWROGICNJLJZDMGSZCJSQMHFBSYHMQPOPFVXFPACDTWWBXXLWVJSTNQLWONKGKQRHEMISDWGKQLFEIMBSMTRQFRBBGTJWSAFILFYCPZXVAJGYIUYHAOCXNHKGJHOZVHCTLUKVVHPHEDCXLSQURZWFTPNQJVEDBUUNYTAXT");
    tmp_tmp_msg_0_0.value.assign("ZMRUTZFPCSPXZJBGDOQLYAAAFZKAJWXPMUHBEIDAWOIRILBHDCCOXTMWCNYYESWXVCYBEEWQWNSJLIOJXBUKNQNEWLADJQFKKXYMNECBJTNXJPAVQEMFFDPTHCZLUSTRAHNTRSQGMVGFRGQUSNMLY");
    tmp_tmp_msg_0_0.type = 71U;
    tmp_tmp_msg_0_0.access = 220U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PILFXDWVRSXOUS");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UYKRAGXZJVUTRGJXZQHDSBWJWLMARZIGWPIXQUYSHUNVGEXRBSEXBSNBUGBHONAVNUAWCZZTVXARKDNXOKFLTG");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 7544U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.04957127179170562;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7110184254999745;
    tmp_tmp_tmp_msg_0_1_0.z = 0.7774510914144477;
    tmp_tmp_tmp_msg_0_1_0.z_units = 65U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6718335260665375;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 152U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.9457556669428984;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.5384475180984352;
    tmp_tmp_tmp_msg_0_1_0.width = 0.11960292054348609;
    tmp_tmp_tmp_msg_0_1_0.length = 0.45932700314219554;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.8472981079749391;
    tmp_tmp_tmp_msg_0_1_0.coff = 179U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 62U;
    tmp_tmp_tmp_msg_0_1_0.flags = 245U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LXRYNPHJTDAZTXOWGNDCEULCRDBKZQOWIYIZEISENGMWSJFGDVKTILMOSEWFAEFAWQVWFBQPJCGXIDFUBWJAMGXAFCRQYZNIUHCVJYZLMBTDVMAYVVULKPJUTEGSXYOIWQUXBFYEAHBRASVHVLTNBSMNCKB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ARSISTEEJQHAFKZUGLMXDOCOGITLRETWJTBYXWEPPCB");
    tmp_tmp_msg_0_2.dest_man.assign("UGXBKCVTIELHFVZXHTLNSVJQTZFMZOAXMFTCNKQISARDRATDPCGNIGQFBDJFUODQDBJWQGYCUELYYNRXAJOUJTPGWBABFLEYCJXJHEKZJCRTQKAMZYKGGAEBKQRVLIDGSEQDIIJZGCPHQSLL");
    tmp_tmp_msg_0_2.conditions.assign("WATRBDQYUOVWAVLKSDCFGJMKGUTCNIWXZFBFHKFTGYHAYWJZYISHJFOUYDNXLDZMIJAOEADLNNRDSMAACSVKBKPSMZBPJECLVHFXMNMWXULXWHZLCEHKQRZPVABSMBPIQHPNRQRNWIKRQIQJRUQPEYHEUGIESIZFKPRETTYDTOIQRWBJLDTEOFTHPYKWZJXXVTAUJOBSCUFOBPGQOUEPLNYDNVYCASMXMGZFKXTJDCOHRCUMESWVQZGLXOLGN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PolygonVertex tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.4597852475643235;
    tmp_tmp_msg_0_3.lon = 0.654806652461336;
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
    msg.setTimeStamp(0.285221244526049);
    msg.setSource(4428U);
    msg.setSourceEntity(198U);
    msg.setDestination(29699U);
    msg.setDestinationEntity(162U);
    msg.state = 127U;
    msg.plan_id.assign("YOLNXYOYLYQNDGHKMSCTOWFUBORAIEQBBWTSAAMYSFCCQZRDSRBFRJGUXRWVEPZQIAXPBCPXSWVSMKGZMLHKDTABYFLAJCKF");
    msg.comm_level = 133U;

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
    msg.setTimeStamp(0.5251499180850565);
    msg.setSource(37550U);
    msg.setSourceEntity(162U);
    msg.setDestination(21109U);
    msg.setDestinationEntity(120U);
    msg.state = 233U;
    msg.plan_id.assign("REHVHZCIEKNZSXHDOYSJWIIAG");
    msg.comm_level = 227U;

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
    msg.setTimeStamp(0.9773408530077005);
    msg.setSource(20108U);
    msg.setSourceEntity(37U);
    msg.setDestination(18767U);
    msg.setDestinationEntity(178U);
    msg.state = 179U;
    msg.plan_id.assign("LBJUBAADDKUXXOKWYWSOAOCUACQNZFQUML");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.7881027174245906);
    msg.setSource(60526U);
    msg.setSourceEntity(158U);
    msg.setDestination(48894U);
    msg.setDestinationEntity(253U);
    msg.type = 216U;
    msg.op = 80U;
    msg.request_id = 5663U;
    msg.plan_id.assign("UIQICFORHZDPUHCGALTFPEMZYMJYZKSJKLDBENHSPEWPHBMFMEUFQGYXBGQNLYJSUFGLMMOROBDJJDAGYHMPDXTXSCJWRFTKDQGFKBSXYDAEIJ");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 29U;
    tmp_msg_0.op = 138U;
    tmp_msg_0.plan_id.assign("AKVPNRBPMDSMAPHMLINDZLSDCJKYYQTHOZHHKHHDQPYLAIWDXAVONKBNMTEXVTFFYYYYZKTWXPGFUQMRXTBOECERIPSKWRIQWGBIFZOHGHLUFWOUGRDWUJDTLKVTYWCMBBXQCZKEKRZIUJQHNRNQAGHCTJWXJFVWEFNIVOLB");
    tmp_msg_0.params.assign("PIOSHPXNVJQVRAMSHRIVZTYDYTGROMFIEXCOTZCCMOTUBMKJKYKJUMIQRYLAAIHSEUWDGACUQKSNQKQGNBNOEUVWIXTVULNDVUHBLOFHITDAJBJSGRWEQPHMAGWUCSDZTEVSZCYRWGECZOSIRXKXYIWDBRQYQCWJHVSMNDZFNDLXZFXXYAZIGNKQFDLPZDFVAFEZPVPKXWTJJNPMUTLEAYAEFCSKQBYLOMOPELCXGJBL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OFCHYRBHHBTDRAYKBRIBWMKVOGEPBNIUXLUXOJUVHMZUCHGYBOAKYSXYRIAKILATEQZJEWAEOPCEDUPXJBOYKVEZHNWPZXOULNTPN");

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
    msg.setTimeStamp(0.5011123840593572);
    msg.setSource(40735U);
    msg.setSourceEntity(70U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(153U);
    msg.type = 178U;
    msg.op = 106U;
    msg.request_id = 38810U;
    msg.plan_id.assign("EQZZOOCEOIEOWKEVPUSTWBVGQTNDFTRQFLLYKYAKNPUDQMFAWAACLSPORJNOZRJPMGLELEBHQNZPSKBMNKSIYFBAMQRFCWPQOGEFQSTWYIVPZDWIBTZXFEPDXTBTHFHAYBIBNFLUOMIKNWXVORZMWDYXGEJATNSQVRIHSXVUVMUCVDALVRHCGMQIZDGJCEWSYRJHYUZUGXUKGLPWCCNX");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 253U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.706542419374467;
    tmp_tmp_msg_0_0.speed_units = 154U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6375207490674515;
    tmp_tmp_msg_0_1.z_units = 204U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3587023769062603;
    tmp_msg_0.lon = 0.2959007564685904;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZSWZABSTRFSZUVWMVICYOUIJLQWFBTKQPZUEMHOWTMFBDDPEYXGUYWQZFNOPXLXYCCQDKGJRNNKUSGXKMFNPXLMHYJEXDIUHVISLKPWTJTLXSECWHTVQRTEYVKVOTAICIRNADPYBYCUGQZRHENFFJIGLQEGLCNNRJZVCGLBIAOBPFWFXSUWRRLLDJOIYDCAQNVXRUMOHGAKDOGSWOHADHKBEAYVGJZQSJECPHMJFQMKT");

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
    msg.setTimeStamp(0.059435606936526275);
    msg.setSource(44756U);
    msg.setSourceEntity(186U);
    msg.setDestination(10189U);
    msg.setDestinationEntity(72U);
    msg.type = 14U;
    msg.op = 192U;
    msg.request_id = 52024U;
    msg.plan_id.assign("BXEUGOLIZEFPXDJBJXVWHXALAILXSNRNJMRJMDFRZUZAUEFGZWWYJRNWBCTZEKKGAMMMRPSN");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.9585302808588704;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CBOUPXESQQKKWCGQHLYXGWFAAKCHTJIRANHFVPPYTPSTFKQBLRYORPWFNZKGHXLRMUKPBHXZJXCFOKIQJYVCGLMSENLTZWMHRVAUBJGBISDSAICWOGJYFJFSISVMGUECMULHUEQBBVINGYMYHOTWNDWJVZXDXTHJRAK");

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
    msg.setTimeStamp(0.5656570678707225);
    msg.setSource(37101U);
    msg.setSourceEntity(83U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 44896U;
    msg.plan_size = 669189480U;
    msg.change_time = 0.9649082248366179;
    msg.change_sid = 38929U;
    msg.change_sname.assign("ZAOZEZKPTYDYRBXGBGCMEVNUUTJREGWUFTYMRRIVFQBGMYSAECHZXKBUYHTJRGBTDKZXBWXYVGGOYDKLLRPNKKWLEIRAGCCTPVJLTCSVNILFFPMTSAKMPMOWLHHQOOWOSQUPXSCURNWQNFDJSQOHXGLSWNOEID");
    const char tmp_msg_0[] = {90, -66, 49, 54, -19, -69, 45, -86, -91, 63, 65, -67, 45, 79, -17, 49, -37, -13, 81, 50, -49, 101, -86, -41, 37, 8, 116, 19, -24, -50, -38, 42, 77, -104, -82, 2, -24, -5, -63, 101, -98, -125, -15, -100, 7, -102, 13, -4, 29, 25, -92, -83, 6, -99, -59, -18, 59, -38, -95, 2, 110, 40, 2, -85, 11, 38, 89, 73, 37, 38, -48, 78, 103, 7, -29, -24, -38, -37, -103, -123, 109, -81, -74, -117, 2, -88, -103};
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
    msg.setTimeStamp(0.3980437291457085);
    msg.setSource(32018U);
    msg.setSourceEntity(227U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(164U);
    msg.plan_count = 49256U;
    msg.plan_size = 2095203066U;
    msg.change_time = 0.16575785708160506;
    msg.change_sid = 8280U;
    msg.change_sname.assign("ISGNLVLLHSUDXIJUIXNNGICIYRYJEIVQMKNHSOVEHPXABXZPYQOURWQYEFFMWSQMDDBJZFHKFTDLDWTONBIHKVKFAHUOQPDMAEECWGSBSGUKHDOJXUGSQTPPEAWJBKWHXCTJLUFPTCHNDSJBYGQDTINUQGABAICTMAQFCRRXEBMMVSJPVCNZGYARULBEZRZWYUORVZMLRVYFTCOKWOLTZVXPBPZVJNMAYLRRKOPFHXWCOLZK");
    const char tmp_msg_0[] = {-39, -50, 32, 28, 55, -120, -10, 30, -20, 48, 84, -95, -9, -42, 70, 25, 41, 96, 103, -34, 77, 69, -54, 69, 117, -54, -86, -10, -16, 5, 11, 24, 4, -31, 14, 104, 4, -27, 97, 117, -41, 114, 7, -105, -56, 77, -19, -61, 92, 6, -85, -17, 41, -114, 117, -85, -102, 31, 124, -19, 51, -84, -53, 12, -48, -18, 43, -52, 3, 29, 120, 34, -42, -58, -11, -47, 41, 123, -1, -1, 23, -12, -107, 2, -73, 84, 96, 48, 38, -85, -68, 10, 73, 17, -25, 10, 73, 3, -5, -101, -87, 1, -47, -125, 125, -12, 53, 84, 33, -64, 87, 84, 43, -30, -96, -10, 29, -2, 99, -69, 29, -112, -11, -127, 75, -122, 18, 62, 22, -43, 126, -58, -126, -12, 112, -102, 74, 30, -94, -123, -99, -114, -5, -41, -44, 55, 53, -79, 2, -73, 69, 99, -123, -34, 59, 126, -58, -77, 14, 23, 30, 93, 5, -65, -27, 3, -59, 13, -65, 85, 101, 57, 42, 27, -75, 48, -36, -50, -84, 36, -10, -106, 15, -15, -46, 85, -67, 36, 99, 121, 70, 11, 36, -58, 118, 112, 54, -29, -117, -127, 116, 84, -9, 92, 57, 115, -12, 58, -66, -25, -18, 69, 50, 101, -87, 6, 109, 12, 87, -126, 94, -55, -103, -4, 45, -127, -87, -34, -102, -74, 42, 43, 38, 36, 119, 118, -33, -34, -95, 114, -109};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AUTKDIGQKOTFCVWNZVHJJFVQBCRHLVMXWOURDMZCSMSDUTQWPLITNTGJZVCBAVGOLPONERUIWQTUZPFHSJRWFFCMGHYHWDFEPQXNOLGOALULPJIPYCMJIYVNDXKCMZJXSAZZWXYBQEOMNNGXFTHOTIGLHXGYXCBPYURANHRSTBK");
    tmp_msg_1.plan_size = 14761U;
    tmp_msg_1.change_time = 0.8973497282614674;
    tmp_msg_1.change_sid = 46929U;
    tmp_msg_1.change_sname.assign("UHRQEKNWEMEBHKVRARQLSNDONWHZSXCY");
    const char tmp_tmp_msg_1_0[] = {-73, 36, 92, -24, 67, 16, -53, -99, 3, 14, -50, 66, -18, -83, 96, -125, 27, -39, -66, 85, 71, 18, 61, 35, 31, 38, -79, 24, 112, -57, 101, 31, 21, -87, 48, 124, -93, -105, 60, 103, -127, 105, -26, -126, 49, -71, -78, 97, -10, -40, -64, -96, -21, -105, -7, 96, -26, -99, -17, -21, -101};
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
    msg.setTimeStamp(0.05249555515585003);
    msg.setSource(34166U);
    msg.setSourceEntity(151U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(125U);
    msg.plan_count = 40178U;
    msg.plan_size = 2258457843U;
    msg.change_time = 0.1365965195094192;
    msg.change_sid = 18076U;
    msg.change_sname.assign("UACODZLCHMVJSLZBWSIIYMXSIBDYELLUVIXAOSWGEMFKOBKBFBKGLRWADUNJDKVPORANMYGTWQCXJTEAOZIKNPHHXLGSDQMQDWOGAWLRXPPMVJTDIOZHFMTQWKNHGCRQNZAPQVCSQ");
    const char tmp_msg_0[] = {-102, 44, -61, -5, 101, -127, 77, -1, 78, -13, -52, -93, 85, -72, -66, -73, 66, 63, -96, 106, 67, -55, 28, 69, 13, 64, 4, 102, -116, 71, 61, 56, -47, -28, 42, 9, 54, 85, 93, 77, 78, -108, -39, -107, 65, -38, 106, 37, -46, 67, 125, -61, -59, 16, 40, 115, -36, 117, -67, 110, 15, -20, 64, 69, 63, 70, -89, -52, 28, 46, 78, 51, -26, -121, -124, -116, 90, -79, -79, -64, 105, 4, 61, 121, -24, 105, 72, -55, 43, 103, 99, 74, -11, -14, 21, 36, 75, 88, -44, 21, -47, -2, 106, 112, 11, 50, -63, -103, -17, -113, -83, 49, -88, -31, -81, -18, -24, -41, -91, 20, -47, 85, 83, -108, -42, 94, 25, 77, 94, -2, -53, -58, 126, 67, -98, 81, 3, -68, 14, -26, -67, 69, 72, -66, -78, -123, 39, 50, -95, 3, 15, 31, 93, 85, 126, 84, 105, 65, -99, 45, 58, 87, 59, -118, -118, -68, 43, 23, 29, -110, 122, 73, 20, 72, -104, 89, 63, -31, -115, -124, -101, -47, -13, -88, 26, 73, -97, 6, 67, -92, -49, 19, -38, 22, -88, -93, -28, 60, 59, -30, 96, 117, -51, -7, -35, 5, -42, 24, -36, -24, 75, -128, -109, 50, -48, 37, -11, -116, -76, 13, -12, -60, -66, -83, 110, 12, -91, 108, 125, 11, -114, 57, 5, -115, 94, -25, -25, 25, -52};
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
    msg.setTimeStamp(0.4887802745355836);
    msg.setSource(64460U);
    msg.setSourceEntity(183U);
    msg.setDestination(10814U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("DNOIYHNYHQUMCWEBDWPMEMLZHNSLXZFSXOBVMHYZDQTGFQFJCIUWJOIJLWNFGBBFMRIJSTPNRXLJXKPDKWQYCPIUFXNLPPDKSKJKCWVNEABPVOCVZLTIYTKUR");
    msg.plan_size = 12981U;
    msg.change_time = 0.3534437665908422;
    msg.change_sid = 3256U;
    msg.change_sname.assign("GDQLGHBEENVCKUWSQMWRSPPZUAXSDODKNSSWIJJPMTLYRDAZJGVNASOATWKLOWYNBHJOLDVERTWBGSLCAYRKOTPIBZIZLNQLBVYQQLQHTIXUPHTUGDDYQDYUFVCOMEFRQZZZAIIKYBLWPGVFXCMXIUCQBUCUQMFGAPDETAY");
    const char tmp_msg_0[] = {55, -100, -102, -16, 68, 16, -78, -35, 70, 20, 91, 73, -102, 34, 101, 105, 103, -64, 125, 122, 87, -25, -54, -116, 56, -77, -58, 104, -32, 92, -124, 53, 14, 42, 34, -50, -31, 68, 22, 73, -119, 105, 56, 37, -99, -64, -22, -76, -81, 5, -95, -12, 126, -27, 35, 110, -61, -2, 55, 18, 14, 8, -114, -109, -12, 42, -65, -45, 115, -81, -113, -92, 105, 49, -67, -62, -39, -128, 45, -106, 95, -77, 2, -2, -124, 71, 113, -50, 38, 22, -103, -65, 2, 101, -31, 23, 97, 53, -26, -1, -88, 20, -55, 75, -50, 31, 101, -90, 29, 7, -22, -91, -4, 18, -104, -41, -54, 50, -22, 67, 1, -16, -127, -15, 73, 59, -83, 21, 34, -16, 27, 118, -12, -44, 51, 66, 102, -75, -60, 115, 46, -127, -18, 90, 46, -8, 20, -54, 16, -55, -27, 20, 41, 82, 126, 90, 36};
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
    msg.setTimeStamp(0.7063731022968102);
    msg.setSource(57939U);
    msg.setSourceEntity(98U);
    msg.setDestination(17622U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("XEJUCGPENOFNVFAAIDAXWKUELXAAEQPRODULLHJWGEWPYVSFTTIRDNITTYNJTBALUNOJAJFDBMSQLPOUM");
    msg.plan_size = 36891U;
    msg.change_time = 0.559338218516377;
    msg.change_sid = 36499U;
    msg.change_sname.assign("VRSYZNFHOWMSOITFNWJTKAPURDRFQUULQOQKXYMWSPUUMRTKJHSRHHRBXWMJDTKGVJKEPICNYYLXDDJPBAAUICFVTDRLBRFKLLMVXCTAFCSAGAZZMXSFACFG");
    const char tmp_msg_0[] = {-49, -105, 45, -122, -79, -123, -73, 79, 43, -37, -114, -17, -105, 70, -77, 106, -5, 110, -3, 41, 17, 123, 86, -66, 70, -21, 110, -124, 2, 46, -71, 4, -67, -37, -105, -107, 97, -78, -21, -124, -109, 123, -70, -63, 100, 102, -104, -15, -88, -115, -36, -26, -57, 84, 17, 53, 51, 65, -24, -78, -83, -68, -46, 51, -51, -121, 58, -30, -32, 5, 21, -52, 46, 34, -86, -51, -127, 65, 55, -112, 79, 98, 63, -10, -41, 57, -65, 30, 5, 27, -61, -91, 33, -83, 7, 87, -71, -35, 106, 105, -36, -71, 50, -17, 112, -117, 32, 41, 26, -27, -19, -65, 31, 111, 26};
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
    msg.setTimeStamp(0.7533022766649935);
    msg.setSource(18360U);
    msg.setSourceEntity(229U);
    msg.setDestination(28430U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("SPVQDNACIYCNEOTZLUQMPWZOJXEMJWHOUFYBCNGXXGFZWBROQMAXMLEHCBGOHCNYZUBZIQNCQYMDJJIPOPIIWGRMOVLZNSCKYFUWTGLWIHVIYZLIRPUMDNPKYXWITWCCVZYASXUBTAEAUVKEAEQG");
    msg.plan_size = 23988U;
    msg.change_time = 0.6260856068558712;
    msg.change_sid = 11485U;
    msg.change_sname.assign("XGWNXYYZNDGUOVMIJSZFFWWXTIUVDRJVHIXPDFMZJRKBFKILEACJPVTTNXASYNLFVPXJMHUXHQZQIYOEEGBUHMBZQPSUENLTYKERHLLITJABXAIXFOYBQGNEGBZGKCZRKVTSJOFECLISFCXZKJBMSVGTAGDMMHHAMHOJLRQLWUCTQIJQPDOOHBCRDDFD");
    const char tmp_msg_0[] = {15, -73, 19, 44, 110, 13, -60, -75, 109, 86, -70, 96, 29, -112, 109, -53, -127, 50, 80, -90, 52, 7, -109, -121, -72, -36, -6, 4, -80, 68, 112, -25, 95, -36, 111, 126, -6, 57, 101, 108, 22, -115, 103, -29, -31, 68, -35, 111, 55, 90, -54, 45, -75, 39, 58, -80, 4, 112, 69, 116, -66, -91, 122, 107, -70, 71, -126, 72, 25, 34, -10, 123, -82, -11, 64, -33, -73, -75, -61, 26, -42, 0, 79, 120, -68, -25, 29, 102, 50, 16, 16, -92, 52, -61, -26, -122, 86, 45, 58, -18, 31, -54, -90, -122, 69, 92, -82, -3, 44, -26, -61, 45, -56, 119, -112, -2, 39, -121, -63, -69, -86, -54, 96, -68, 55, 93, -128, 62, -116, -54, -10, -114, -82, -54, 124, 65, -69, 117, -40, 69, -93, 115, 45, 84, -67, -99, 76, -108, -28, 40, 19, -112, -9, -126, -28, 76, 96, -36, 115, 118, -23, 69, -55, 91, -39, -96, -56, -31, -104, -114, -22, 119, -74, -122, -99, 118, 1, -123, 40, 55, -23, -38, 82, 61, -84, -110, -113, 120, 11, -74, 106, -125, 85, -17, -22, 106, -66, 19, -73, 3, 109, -1, 89, 83, -12, 97, 30, 56, 99, -18, 72, -29, -21, -102, 36, -92, -74, -70, -28, 24, 23, 122, 38, 36, -87, 47, -16, -33, -60, -50, -61, 31, -22, 74, 115, -112, 29, -37};
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
    msg.setTimeStamp(0.1023815111991161);
    msg.setSource(48898U);
    msg.setSourceEntity(206U);
    msg.setDestination(42019U);
    msg.setDestinationEntity(0U);
    msg.type = 184U;
    msg.op = 99U;
    msg.request_id = 51212U;
    msg.plan_id.assign("EUGEIFYDRGRVJLWQAKIUTJHL");
    msg.flags = 51749U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 209U;
    tmp_msg_0.text.assign("BHOKVXIIBXEOMZRDOLCWUQFWZSWIINTCPJKXTVKTVMZRIWUHXKSQLBNGKCYHSBDGUWQCPJNGDFOUWLUAHKRLSKXMCXIAXMWYYLQMQUGUCIDQSQIGPRPAURYVYPJTGPBQWWTDDSETMCSDXA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EGBLRUVGASXFZBXDKKQWYZLXMESAQXWNFJJIFYYRBODMWUSGOOEGAWVTRHASCDIEJQWMICWPLEOXIBFCLNDBRVRTJGOTT");

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
    msg.setTimeStamp(0.2158382067919914);
    msg.setSource(610U);
    msg.setSourceEntity(38U);
    msg.setDestination(4159U);
    msg.setDestinationEntity(3U);
    msg.type = 211U;
    msg.op = 251U;
    msg.request_id = 31020U;
    msg.plan_id.assign("PZJSUOLMQOFQJUDKZKNFFPDRTORSCSAXNLMXSWESYHIREDWIYLJPIHBGH");
    msg.flags = 57136U;
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 72U;
    tmp_msg_0.width = 25436U;
    tmp_msg_0.height = 61625U;
    tmp_msg_0.widthstep = 27184U;
    tmp_msg_0.channels = 116U;
    tmp_msg_0.depth = 141U;
    tmp_msg_0.finaldata = 243U;
    const char tmp_tmp_msg_0_0[] = {111, 38, 86, -106, 95, 106, 69, -107, -69, 87, 126, 99, 126, -30, 125, 7, 98, -66, 14, -4, 116, 89, -3, 97, 62, -82, 0, 31, 110, 34, 95, -123};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EUKWKPNZKXCAZWNSWMRPQFFTMSHUFBCLUDJLDGLTBEKZVNXHBTYOONHUWPAEOFXJ");

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
    msg.setTimeStamp(0.8979167692464525);
    msg.setSource(2408U);
    msg.setSourceEntity(165U);
    msg.setDestination(31843U);
    msg.setDestinationEntity(50U);
    msg.type = 127U;
    msg.op = 218U;
    msg.request_id = 44248U;
    msg.plan_id.assign("LMDTBVUANTBJBEMSLMWJKOKPIXQZJKFMHCTTTVWZQSXQDDHHXUIRPKBMMNCKFPDGPGFRLEXTFSPNOOQBDHXHNETQVUCWBCYODJWYWXUMTPDGZYKULENCWJGANVDFGRSAYZJIRSQRFSOIHAYYGOIVEUBNOEAWDRRYLBPCBSJWCEGIRIRTHN");
    msg.flags = 29146U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 39756U;
    tmp_msg_0.custom.assign("PCLFYRPFPKUWNHTHRDPUHEUGXXRLERXGDYSIRSBJYICCRSZXGQVKXGFWPZFAQGXNSLMVUXHWOBWPDHAKDWGAFBCKJYJIDLEVUOAAT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PHWSEKFBXCVSZONPHGOHZXGIUURPAPDNJHTADGXIYDACSVQXNBFLORIQBNZZVTODIUWDLBDMPGHJOBUAMDQJSMEYIQMOLKYFIWCFEQRVEFMBPJTZSXRUMTHKXLUNZKQVJLQHCAJPEEFGUKKJHMZKYVLNHTYCGFDGQNXFVAZEKYYMKORURQCMSVRPNLULKWNPWVIIZCSCLLBREIAEQBIOYCCGEVJATSWRWSWYTFXDBGTHPXYU");

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
    msg.setTimeStamp(0.22441094394062344);
    msg.setSource(31367U);
    msg.setSourceEntity(129U);
    msg.setDestination(60384U);
    msg.setDestinationEntity(146U);
    msg.state = 10U;
    msg.plan_id.assign("PKUYKUXSAQJUK");
    msg.plan_eta = -1918855974;
    msg.plan_progress = 0.17316416397027068;
    msg.man_id.assign("KNUEOCGJYLRNTOONIRYIPTGMPKYKZUZZPQASJNXWGRDHXJKQALXBBUDVTVHPFDFJGCAPNOUSQQRXNHPAOTRTIYCKZFZKWGCEBZADHLDTWQIIPHSHASDFDNHXRFYLFCGIUVTVOZBSBCOYXVTMWKFFNUGZRGAMAPXUWRWVQSIOVUUENDLQBIGMYKJKALYYBFMZL");
    msg.man_type = 11234U;
    msg.man_eta = -366985306;
    msg.last_outcome = 160U;

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
    msg.setTimeStamp(0.1200639437344565);
    msg.setSource(57751U);
    msg.setSourceEntity(158U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(30U);
    msg.state = 207U;
    msg.plan_id.assign("WLVUZTWRHGWGLBHJXFCBLIKFHGRTMMLBPODDUAHMPVQGXCRYKKBZDFEWCTLHNCABOTKDVSZYJNNAKFQFSAPGKWTRPHKNJFAXRDOXAFBMWMDIHUZWGLIXXLIZOWBDMBRNVNEITUEIABSECUGKTEXCAWOEQLCPYXQBSHTIEFDNQOWUKYGLJOYAYNJJCENQRCIFYKZMPJ");
    msg.plan_eta = 264413145;
    msg.plan_progress = 0.35254011194271917;
    msg.man_id.assign("PCCMOEYQRAUZMYBUYWVASLGMTRZCLIPYLGHJKFHYOQDMWNTAJIQHFQDZQNGPNXNHZBAZXFIETFVABOTUXIPYPKSCOVKQTDZJBSAHMTVWVSEENDYDRRJJDONAZMKPTQUMDKLWFSCKIGSSWRSPGRXBEDBVBWKYGLDUJBULACGOFTBOQCFJLC");
    msg.man_type = 27660U;
    msg.man_eta = -1342569638;
    msg.last_outcome = 254U;

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
    msg.setTimeStamp(0.729683953835054);
    msg.setSource(634U);
    msg.setSourceEntity(47U);
    msg.setDestination(25124U);
    msg.setDestinationEntity(168U);
    msg.state = 223U;
    msg.plan_id.assign("LMMPGWXWLTIJRZQCLSQYTPFABIRQMUOBRTOPOPGIOJOIEVCMRWTDIPXDJKSGKYPFFJKYFQKGDPUBKKMTNYSBLIFZEDLVIZYBFYZCWHSIOWEQEJXU");
    msg.plan_eta = 827502861;
    msg.plan_progress = 0.3815634386128939;
    msg.man_id.assign("QXFDOGAIZCKEBHSWAFBZSDRJLLMPCHYOQKTEDHBUDLFMHSSQFVREFYVPJNJAZJARAFEWAPNQIFHKVTMGOOTBIYJENULWPYZCFPQJQUKECMNINUCQNXGASZLIUKNDXLWB");
    msg.man_type = 3372U;
    msg.man_eta = -1953116627;
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
    msg.setTimeStamp(0.822182200626547);
    msg.setSource(37523U);
    msg.setSourceEntity(152U);
    msg.setDestination(27719U);
    msg.setDestinationEntity(117U);
    msg.name.assign("USVDTBXCKOZOEGGSLYKQSFVPZHQLCSTINDELBYJQOATSNCYQUACQWHQVVISCGMXIBLWFMISDPAHHLHARQWJXWJPCZAJFQWSZYOKNOHDUETUTQRYPNUVXINDLHREBKTZLDWFXXKGGUEIZPHFFKTBXRAZYXMPTIXWBJMFPXMPMBFODIKECNICKLUAAGKZGMWTMGOPENCJNJRIWYFVEOAUDVMEBNBDLYKSSRVQORZABUJ");
    msg.value.assign("ICDHQXAFYIEWB");
    msg.type = 76U;
    msg.access = 193U;

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
    msg.setTimeStamp(0.7485563426401413);
    msg.setSource(46225U);
    msg.setSourceEntity(122U);
    msg.setDestination(20697U);
    msg.setDestinationEntity(167U);
    msg.name.assign("KMHZITGEEYGBAGVUZNYQEWYOACUWMBEQNPWFBVAKFVOUQOMMOIVRNVBIXVSIKFWXJXBWDKDJDWYTTLHXHALGZDMNBRTMWTJUDZLHOS");
    msg.value.assign("MJCMKWRVRQMSZOLRUWZJRJQROBRQWBAGFXRGLARYOMBXCZMSQFAQKFCEJKRBUIJVDAPPBHHNYSGFYMYXGGTPNYNJJPZTEQPYPSVN");
    msg.type = 204U;
    msg.access = 154U;

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
    msg.setTimeStamp(0.5334485098909215);
    msg.setSource(39337U);
    msg.setSourceEntity(68U);
    msg.setDestination(16264U);
    msg.setDestinationEntity(128U);
    msg.name.assign("MHZNHFUAKRZKBKPGZIGGJWRLGIQECYAEZSCWPOTQPQDBHREMOGJJVKUAXNVCIWBMXLOUCCJYDEIJPQNXGVFTUMQPKXOIAUWSAKFLVURWNUUIQXMHIKPDWJGYOAMLOBYDFWLS");
    msg.value.assign("FFWDFXOIIZZAJBTSAPJKPEZMOHJVTFHCZQZPYDWURBEDECLBUQXPYOYAHJSXPAOAFNNCGPZSKBHSFHJIGTBETZMQARLMKPSJNRYRYXTUEMWEADFNGKQBGLRQLIFUWYWDKKRBEOPVMXHIVQKVQMCUYOYNSHUBXNVKNIUCLTKEDSCOFLUTZHOXPDSLLGCQORGBFUIGCLKBCVJGNQWWRACYAPXNJWVDGHMJUJVIZXVTOETIVD");
    msg.type = 119U;
    msg.access = 153U;

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
    msg.setTimeStamp(0.15281536165177656);
    msg.setSource(54880U);
    msg.setSourceEntity(126U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(99U);
    msg.cmd = 169U;
    msg.op = 156U;
    msg.plan_id.assign("LSHRXGVFDCZWLEQJYBKMEAGGDIHIBDSHJXHAGABUDQYGPOPBLAAWZQCWFICGKUREHRVALUWF");
    msg.params.assign("BOQZPYCFUSDZAKMZNMEZOWGHLBAPGUSLEHMWIJCHBPQWVQEJTCSSPNEUAUWVJR");

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
    msg.setTimeStamp(0.22890807462047025);
    msg.setSource(40553U);
    msg.setSourceEntity(4U);
    msg.setDestination(21280U);
    msg.setDestinationEntity(161U);
    msg.cmd = 174U;
    msg.op = 112U;
    msg.plan_id.assign("ZYLTQJNYSUNFLZJGADREWERTKXVPMCSHUKAGGHNWUMQHTGD");
    msg.params.assign("RYEUZDFUICMMXPSCVXSDWELRVDYUGNJSFBPQAVFAKVHQCDRWSODRBFAKYMBJDCGNLUEUEAMFGAKKSICONXYNPJWJQFBQLTSOYQVXPQRWTZIKALVJPQZQPGUDBORCNJCITHDHEHTEYSXUATHTMAWIFPRVOGTLTAYXWPGMEXXHOLXYBBQCFJKOZLZIUYMKWHVSS");

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
    msg.setTimeStamp(0.7367490375222183);
    msg.setSource(4825U);
    msg.setSourceEntity(87U);
    msg.setDestination(20249U);
    msg.setDestinationEntity(27U);
    msg.cmd = 199U;
    msg.op = 10U;
    msg.plan_id.assign("EIFQVFUYCHJDPNNXJAETNCKRKOXZQHQSNDFDGWPPDLQBYNCHAGDUOBEKYRWAIQBERAHWCBPADBFXIZWQFZPFKMROGHMPYQNZEASUEWMYTTGHIUSQMLSWNSTSNGZLJAKDOEVTHSWNNKGVJKJOOBJKTYUGGXBPWEFQMMLCLVZRKDX");
    msg.params.assign("APEGRPSAXICNOAHLJOPCGXDWOQBRIFDNZNGXSGHZALKHVWQHDVUBTZVNDRFDIGDJOUKDBYWDQJUCUYJOTYQEERTKCDNEFYEUIJTQIAHNAZBQXZSLDVKGHMKLXLGHBIOFKKTNVCYVVTXYKJMBMUBRWBIAGQUITWEZSLQYXCCZHPVXTYMJPHUMAYWMIPNWM");

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
    msg.setTimeStamp(0.21208562742440273);
    msg.setSource(32904U);
    msg.setSourceEntity(226U);
    msg.setDestination(5970U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.9009836901874512;
    msg.lon = 0.6381627979703102;
    msg.depth = 0.9590331319240334;
    msg.roll = 0.5110178603973201;
    msg.pitch = 0.741237061123879;
    msg.yaw = 0.9429885730895576;
    msg.rcp_time = 0.3428509168209277;
    msg.sid.assign("ZVOIYVSAXGPJFQHJCCPSELFLUGNRWNIUIJENXIKYXWUMSKRMNEMPAZBTIVEODRCJRRZWPSSDBLYWCYXJYZOVRFYBJHIVXLQCHPMEZIDGFDQYZPZTTLGUZBTAEYPOKTKGAPFIUQVREGYACQCCGLXKCBMTDLBXBXF");
    msg.s_type = 42U;

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
    msg.setTimeStamp(0.7232508971873463);
    msg.setSource(19022U);
    msg.setSourceEntity(95U);
    msg.setDestination(41215U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.48465996826837676;
    msg.lon = 0.7146817263916329;
    msg.depth = 0.019821040075335916;
    msg.roll = 0.17413583802738208;
    msg.pitch = 0.6870775266736756;
    msg.yaw = 0.06067874143918739;
    msg.rcp_time = 0.03257677285913929;
    msg.sid.assign("XUCRVCYANIDVEHBUNJPFJCVGFBBWNUPJDPSBEHHQRRWVPIPYVVQPGQBEKWANSEHXLWAOGYMKKGLDNQPISJCDBID");
    msg.s_type = 136U;

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
    msg.setTimeStamp(0.15702172035992323);
    msg.setSource(12615U);
    msg.setSourceEntity(241U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.7044357377493825;
    msg.lon = 0.17045197059521844;
    msg.depth = 0.8266810565104713;
    msg.roll = 0.09149435965316743;
    msg.pitch = 0.6643821252856121;
    msg.yaw = 0.4121692637391068;
    msg.rcp_time = 0.01754843876213452;
    msg.sid.assign("PENKKOTAUURKWLTRISRZCYOTGENSBYLMFGVQIQYQFPKAUZXLHSYPNBELROMUFOXHABLXWTONZBQMHJHFDLTLZYGCPGFXPFLXKRPTGIFBMEJTIDOYBNZMTSQYSOAJKIYZUFRWSJIPPXNT");
    msg.s_type = 254U;

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
    msg.setTimeStamp(0.7059056044441527);
    msg.setSource(33846U);
    msg.setSourceEntity(144U);
    msg.setDestination(11941U);
    msg.setDestinationEntity(73U);
    msg.id.assign("QEOPKBVXEIENXLXFXSIBFJCPMZPKVSVIBUKYKPGFKAAOWHXTWEUZAQSYXWTISREJMOGLRHWJPBTOWLLMDIPURWJSUICXHGYXQGRAQOUJOOFKARLWRHEBGTPPYVBGNQDAFBFJOKZASCXDTWKJGEHVHEUTCNHMUKAZSDOJMVURLNWAVISMQIL");
    msg.sensor_class.assign("JMSDXYKWHQNQSFIQSKSBCFIRKJGNDEJYSDJZGGCVTGLVHZOPHTDCVIBGBZEBXNAIAWXBVOAMRYKZEJICTFAYKWTMUTRHUHCJWVNOWGVWAWMIRXCTMLDVKRMAUYXYHCEGICPNRKIOOCEEPXFVZTLRLSVQLPNUWFFSXSYHUZNZUJHUNYQDDXEBJBAEKNMXARPLLCUQPQRIQPMFUBYYZFKGKEDIPOWTLTEXMMVZSLLDJFHB");
    msg.lat = 0.19523504241642198;
    msg.lon = 0.09113306496460905;
    msg.alt = 0.9902421494219938;
    msg.heading = 0.02006673057704267;
    msg.data.assign("PUJJNFUQWBHMKQKGHZVDTQESIOWYVCBZFMSNUYKCUVIPKLDWMTRPCZXMQHRDHEIDLEIKNUQCDIGEHYTUKXSGIZJVOPWNMEXYYTBMBCZHWFQMYCMCPLWMLDHJOAONTWPEFKYZVRASQVJSKXBJSGZRGWKFBWCAODAVQGAJURNXERNFPOJSSTGFAEECYFXUAZRLBRUYXPQHDBJWIONNHGTXAZDLEU");

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
    msg.setTimeStamp(0.22999412980211442);
    msg.setSource(11625U);
    msg.setSourceEntity(54U);
    msg.setDestination(38366U);
    msg.setDestinationEntity(135U);
    msg.id.assign("FFAXNLCBRUQGQYGLRIRKQVEJMQPYVIAYZLBOVHZZFCLMBSCKFJIOSMYXWRHSOIHFGINPPNZNEYTMYRDWLTPSCAKCXUDAXIFLDNLEXZJKBDYZBFJBWNZCEHRHWPNPELBEUNYSBMQQWITVRATRUC");
    msg.sensor_class.assign("UBHCHWMNTXZKXAFFLZTMZRJGYKIWSLMIEIQCDDQDYBYSVPJPQYTGOHQDUKCSOUBDEAYHPDXEPCQCWJGTVIAOWBPBGTFZNTURWXWRIXOJVGKDXNBYZQDUVLSVTKBPGRGVUOJHOEMN");
    msg.lat = 0.9530888846426419;
    msg.lon = 0.5797600602602789;
    msg.alt = 0.8232231087622066;
    msg.heading = 0.7384298473537874;
    msg.data.assign("QVVPQPVHEFDUCGKIGOPJESCNJYNADXHOTIDFWEXEDHWRLTWXFRDNCVAUYGCAKCRNMOGJHUKQLMDLMXGULAYGYFPBJYUWRBTPIOVAITFSURFMSCCOKEDMJXSMWXLNMLEQUWHVJYEZWBIGEDHKCOCQHUKKNAJZVLYPQNQBOHPGCFGBYKOBNZHM");

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
    msg.setTimeStamp(0.5023822479136518);
    msg.setSource(31223U);
    msg.setSourceEntity(65U);
    msg.setDestination(13024U);
    msg.setDestinationEntity(51U);
    msg.id.assign("LPTFHQPAEQOPMJGFYEAMNSXQVDHUMSUJRHZFHWDQCVEOQOSEOEIPPIERCVYRTHELCDLBEZKVLDZOBSNWXLCSTDWKKWIVNJCYXMGECXAWHILIZLIYGGVSAUPKZJUYTJYWDQKCIXK");
    msg.sensor_class.assign("BLHXSCPWOVXDJIIWSNDBJJTXCPHYHCBBKXZQVFMPFIAZLVBPAOQGAAQMYSTBCVFESWOCBZQPXSYEKYYUHXERNMSYEHTPDWTMHOAIMSQQIWCRGWLSXFUJ");
    msg.lat = 0.07555560348323842;
    msg.lon = 0.07107862868143755;
    msg.alt = 0.7027697534327917;
    msg.heading = 0.8364461160798503;
    msg.data.assign("YCXWQEWXGOQMRNEKPYRQWCKJCGQRKULXLDMCJYYLEBJPQMUZNILNBKGCXVZUHONOGIACTAHUVCAODHVLUFYPRMCKFAWIBIFHSNRMRODGEVXRTUJOMMWQRUDWKFZQDSDIAMJIHYVWKQVVDESMP");

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
    msg.setTimeStamp(0.25251466279170287);
    msg.setSource(7864U);
    msg.setSourceEntity(138U);
    msg.setDestination(55096U);
    msg.setDestinationEntity(161U);
    msg.id.assign("YTODUIUMYJSFMZNOQAKKOEYCFGGMXIQFPOIGDGRNAVPZOPYSDVBFEOKUOQIDRUKRNUAMCDBZDZXOWRLAVVJBCWQEEFFNCKWSXAGGMXYTTNOIHZQLGTHRPHWKEAQHCCMIRJJPQLYXBNTPMBSALVIRSYFYXWHSJMTZQXTCSUBCTGVESVYJLJXJKDZUGAFFWOKEAXJTLUWZPNABNUDRGKHKEIMHCPXDYN");

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
    msg.setTimeStamp(0.5686043413010998);
    msg.setSource(23529U);
    msg.setSourceEntity(4U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(171U);
    msg.id.assign("GSTZMPQWTTUSHIVMCOONWIWLQMFKECETRDRQIAYTATJLHDXNWWJKHWRUSXSUXZBHPIPCAEVLOPSMYRTSYCUYI");

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
    msg.setTimeStamp(0.6076179874077188);
    msg.setSource(9787U);
    msg.setSourceEntity(145U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(179U);
    msg.id.assign("HZYDUVNMAAGCABKFUITBZLBPDCTTJLDSQWILYVOAZFTSLTAPWGWCPFRUGYAISUNPOGINJXYQNDFBNWLXKFMPMQDGKBOVTZCUNKPWVJVWFSJTGRHEXLCNSIXYM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AEGNWQWFPMHRKJROIACLZYLGPFQAZTFOMOHWJEVLCQBQLMJQEENWXZYCSAEPJRMTMOTEMLSHQFFIDNONZWVBSPDAZWXHODVCICUIGSYTLCUVOVRKUXQMJVFHBMPVDRFFGRKYHQZVOBBPKGCVKATHSSPGZOKUVIDEZWXFZGNDXWHAOIXLXCKNUNURWJXYTNAHIJPMTQDRUUJCDWSUIYKGRYMETAKDBSD");
    tmp_msg_0.feature_type = 154U;
    tmp_msg_0.rgb_red = 120U;
    tmp_msg_0.rgb_green = 32U;
    tmp_msg_0.rgb_blue = 132U;
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
    msg.setTimeStamp(0.7012039479380516);
    msg.setSource(50602U);
    msg.setSourceEntity(60U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(148U);
    msg.id.assign("KARKYVTTMBNKTEDOMESTXZ");
    msg.feature_type = 181U;
    msg.rgb_red = 16U;
    msg.rgb_green = 116U;
    msg.rgb_blue = 94U;

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
    msg.setTimeStamp(0.4097518895920591);
    msg.setSource(45116U);
    msg.setSourceEntity(15U);
    msg.setDestination(53831U);
    msg.setDestinationEntity(12U);
    msg.id.assign("NVRSXIZQRGMCDKCWPDYXDJSLQPGHYTBHGBWDIIJBGPRFFNVEVH");
    msg.feature_type = 2U;
    msg.rgb_red = 21U;
    msg.rgb_green = 13U;
    msg.rgb_blue = 32U;

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
    msg.setTimeStamp(0.2704410838223804);
    msg.setSource(34726U);
    msg.setSourceEntity(217U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(137U);
    msg.id.assign("GSSNRQTSGBPLWPRVDTSGXQFXSDMQQZGOPKWAECKXEBWNUPFVCRTRY");
    msg.feature_type = 221U;
    msg.rgb_red = 31U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 67U;

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
    msg.setTimeStamp(0.6590245950637357);
    msg.setSource(17942U);
    msg.setSourceEntity(234U);
    msg.setDestination(2410U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.13329733199101657;
    msg.lon = 0.5356162870465292;
    msg.alt = 0.3412209266909443;

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
    msg.setTimeStamp(0.12938953818036303);
    msg.setSource(59566U);
    msg.setSourceEntity(78U);
    msg.setDestination(17027U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.7821669232963493;
    msg.lon = 0.44407756771102413;
    msg.alt = 0.04573900105908246;

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
    msg.setTimeStamp(0.7527120555902471);
    msg.setSource(12873U);
    msg.setSourceEntity(117U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.012350833797352134;
    msg.lon = 0.7333506296724817;
    msg.alt = 0.20528272881521736;

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
    msg.setTimeStamp(0.9222214354615286);
    msg.setSource(12964U);
    msg.setSourceEntity(146U);
    msg.setDestination(32847U);
    msg.setDestinationEntity(188U);
    msg.type = 138U;
    msg.id.assign("NXYDQGAMPJBCFZFQSQUZGIVDZALSJOPPZOYOYWOSIXCCZVIKBXEAZNAJUUVHNXKVKCQMDOSWONSTESMEZBEUCMWXFPSBXDBFSGVYOZNEZTJSULDYMCRXCMRIIGRNWMHYPCJPODKHTFWALRFPQZYXTPMGTITBRHURVHEFJHIUIJLWQKBLQREIVKSKJFPAVLIQXXDHBTNUJNONERRYTDBGWG");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.2609203982879119;
    tmp_msg_0.y = 0.3436759619920501;
    tmp_msg_0.z = 0.8050488767803123;
    tmp_msg_0.phi = 0.21554031730952183;
    tmp_msg_0.theta = 0.2404642147268643;
    tmp_msg_0.psi = 0.1537528795330927;
    tmp_msg_0.p = 0.5879376241362592;
    tmp_msg_0.q = 0.5087052971900278;
    tmp_msg_0.r = 0.46491802620217026;
    tmp_msg_0.u = 0.5388703595165486;
    tmp_msg_0.v = 0.0753855471419943;
    tmp_msg_0.w = 0.05505393365962663;
    tmp_msg_0.bias_psi = 0.6939303428453756;
    tmp_msg_0.bias_r = 0.9865180541349396;
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
    msg.setTimeStamp(0.9254381697050944);
    msg.setSource(9096U);
    msg.setSourceEntity(175U);
    msg.setDestination(18659U);
    msg.setDestinationEntity(69U);
    msg.type = 217U;
    msg.id.assign("YCMWOOFGGPURBAHSJQECYOLRQGIUTIFKBIRSHEEWZPNJENCOAXTLLOIUAPYXPZKXAPMJYTTEDFZFTPIQBHQRLOMCBSREVWIVCWKEKHRJBIDYACAEXROXOSCDYSWWKKNIDUPRONGCBUBBYKVCSIPMYJHJGZGWGVUVXFMHMQNTTWSLUHMZFHLTJOA");
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 61U;
    tmp_msg_0.level = 246U;
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
    msg.setTimeStamp(0.9279312729845514);
    msg.setSource(28524U);
    msg.setSourceEntity(148U);
    msg.setDestination(9179U);
    msg.setDestinationEntity(134U);
    msg.type = 149U;
    msg.id.assign("RQDDMUEBFTCAHGVJFXJIVKXICHULEBEKHGXSIVHAEUE");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("BYFNIZWFDMLUTAVLIMBVPRMVZAFLYHPFCWICOXQXYRONKAURGGHSBSZHGEWZQRMUASSLACZXQGJYHQXJJEOJNMDRYXKSVPFJUREOHDFJPNSVOJDUONBWTICDWEENILYFUADSCGWIECQNALAPCKIDJKAMTOHGYXPIZBGTLEDHKTBNYMHFPWSRS");
    tmp_msg_0.timeout = 50620U;
    tmp_msg_0.contents.assign("LALDZJWCMKNVXDYPGKSJYFQRUIBPACXZDIHNQFPJTOICLVMYFBUDAAMWJIFMYBOGVNLDYGSALOHSUOTUKVCFUFUFQYWYGFXQJVHBZJXUSICLCUSORWBDWSQZEHZMIUQAVSENKARGNVHMRRBYRQG");
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
    msg.setTimeStamp(0.9005393855276215);
    msg.setSource(36869U);
    msg.setSourceEntity(108U);
    msg.setDestination(40051U);
    msg.setDestinationEntity(145U);
    msg.localname.assign("IURJHRCLVLVWCQYAEFRHMAHVMDPMGXXMSGSXWZMYIXAQAESPKDNYALGAXYOWBQZREEPGKVUDAJTFIJTCYEHQOXSRDBGU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BXELVFBGIFWPDUMBQCHQVMCBWXNQRZBKCAFEXGQDGEOOKZSIKYUYGPJYOAHOWKIASMETSGOFFPGPXJSZDTYXSZSNITVVTUIFNFNMEZMRPDUNZDWYVHRRLUHDJCDSYKCPQPLWQXBQOJAJWBOKLWFNIPEJWMCJSPBNVITEKZJGNHTDHUZGAAHV");
    tmp_msg_0.sys_type = 8U;
    tmp_msg_0.owner = 39928U;
    tmp_msg_0.lat = 0.5206921657887713;
    tmp_msg_0.lon = 0.9335976791712982;
    tmp_msg_0.height = 0.2766551502750263;
    tmp_msg_0.services.assign("HGPEMQISBEOXVDFCNLTFQJZABRZIZPOHSNWKQVZHCLYFKQIKZRPTPHUEIJSMZKEEJIGVWMCWAJK");
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
    msg.setTimeStamp(0.22988543768303848);
    msg.setSource(63208U);
    msg.setSourceEntity(24U);
    msg.setDestination(20405U);
    msg.setDestinationEntity(106U);
    msg.localname.assign("KLRVGOJWWMIXUFXPYWRCTJAGDEINBYLHZKLJKGGLPFQSAFQFJQSPFCWRTJEPYTLOZ");

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
    msg.setTimeStamp(0.6422108554157593);
    msg.setSource(43979U);
    msg.setSourceEntity(8U);
    msg.setDestination(5565U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("SBUARPDQAPIBNWDMOFADBZJCYPHLAEJTJJBNKOKMUVIFWYBGXIHPKSQIVGFSGNOPNOYFVVRNXSOELFOLLZTEQQWBDMLOMMXAIBDRSPERTXXPWPZAZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CSBZVGYPNUKDGUQMOGVOYDATDKKABDTSZOVYWJXLHAOWVGEVDPTVNIHICURJASRTJPOIKSYKBNCACGBELETPIMLUAOHCTZEOXHABBQNOMYXRNUPFGFSMWMRGXXUYLYWJQBCXLEPYUGEF");
    tmp_msg_0.sys_type = 215U;
    tmp_msg_0.owner = 63602U;
    tmp_msg_0.lat = 0.796972082372948;
    tmp_msg_0.lon = 0.5633678079372324;
    tmp_msg_0.height = 0.5951719453769702;
    tmp_msg_0.services.assign("YHQFPKTWCOUQZJRNFIJLZSLIFXOIJABHVXIRCBIZCFGATHPPJOYKPUTKMPQVUGCEX");
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
    msg.setTimeStamp(0.7793766886696664);
    msg.setSource(28008U);
    msg.setSourceEntity(247U);
    msg.setDestination(61766U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("QRUMUVNIEFHNVTNKIRVZLBOPVLUAKOCYZMCFKJMGNWMAWZKNPKJHIDDXVSJMXYUKLOOXDJWAMADQOMFIZXBIYLGZNJJBTQGKRASTXEWAZMSDEFIQHDCTHBHCGP");
    msg.predicate.assign("SWCYAVRUSNETGZKJDBUCIDPJXIFVRDOWECWFAGWSKUYIUOYQTBMCNQPOAYDFAQSOZLGQOSEDDJJZZNYFLBRUNHUVZTGNWHPCKZGLHGXOALUZGGHMZFTEOVBAYFMDMLWJIIISMISEFPANKVXPYMIFQWYXKMLARSMUHHVUDHLBXTVQ");
    msg.attributes.assign("LOCTBDKMZRXMWJVJKCUCNYPVYMMHHIMHFGYWDQMNBNXKERJSYXRKJOBZCISCUAOWRKSEAQDEJEONZADSNPGSLTEZDZHDQLLUMYVFAUKEVLRAWOGDNHUTNJXPJVFYYPGEBLQ");

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
    msg.setTimeStamp(0.32758894574150677);
    msg.setSource(24831U);
    msg.setSourceEntity(172U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("MJPEUDQAIJNKBQDKOCAFNWGELWJPWHBOAOMWYGHSSFZLFVTNQVUNBHVQJBYARQVAVPXZOKYRKBUMEXCDTDYZZSXGJLPEUBUEROGQSXUNWECHMPMZSCLZK");
    msg.predicate.assign("GXJMPPJXXWDNHVULWZBSAJIYTBOKANMWLIZDTQUSIXVHSBJTWMNUVEHGQSRKEQGYCZCVMPOZJDDTCFMKDQNDJXKOHFYBWWEQXWAWMLBKRUZCAYPGDRBUDPUIJIKPNVETHHKZNSZMXOLQKLRAZBSJPGBBLESSPQPELIAVCCOFILKNARJNECTNAOYDORYYOYFQLRUAPFCQUKGVTFFWAOZSVXREMYGIHJUTFDXYNMHUWGHXCVG");
    msg.attributes.assign("PLDNAOLCDIVHXIBAGGPZGYVCZZCXOEPAIZBGSVGGWNRRYBWZRWSWVTSPPHYIZQKKATGQYPHOXJXNKNATIBEZEBDQRRWCDBTOMPYOTTJHLAKQEUZCDJIQKFDEYKXLRMEFJHKXLYZITGZWUBUAJFWHVXBHJFRYOSVMMUFFRDJFSOKUOQNSESMOV");

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
    msg.setTimeStamp(0.7467134644360267);
    msg.setSource(13337U);
    msg.setSourceEntity(240U);
    msg.setDestination(49172U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("YIRFOURTLRGNCFNEOLAYVDGDYXHZLPIQRRQBSYKPPOCVSJHNJYQIJRKCRKKAGIBXJMXWGZKAAMZJFOYLTNSBBMMSZBNMCAIKUEHNQDJROQNLLMLOBUWFDWHDSEDHOLWSETZNUUHUJWDPMLUMTVBPEODPUEWVJTNYVCZIODLFXVAXBKRUQAUXKRBFGPPTCSAFPAWZHWCINSZIVVYZEIFHCOXPCIMFTHTQKZQEYXVW");
    msg.predicate.assign("CKXAQTFPGFWESEGOGORSLDCVRTWATFBYFSZLLXVTMVIFARCNTKAAMSQRZNCEVBVGBAPCJQCBHPIJZZLVYNTDODZDXGUQIPDERSLQMYVDYPDRWINUHKSWTXOEOIZNQIBKWYZOUMSZYWVVPMJBZFXCGSIIHGQKDBQPGFSLUHGCQNWABUZKM");
    msg.attributes.assign("TSOTEDAWCERPWRAAKUDNPAPZTBOMNZRCHQAPYB");

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
    msg.setTimeStamp(0.2665449927721443);
    msg.setSource(54928U);
    msg.setSourceEntity(190U);
    msg.setDestination(6889U);
    msg.setDestinationEntity(247U);
    msg.command = 175U;
    msg.goal_id.assign("QJVATFWHODXZSLEVDBQLLSREJFBLOUINNRSCSJBMQROCZWZAUOQUZNYRIZKWEVKOHNXUTPEYFZVCNBPLDOVJCQPVFRGECYFIJMEVGIZWXQSLKHVDMDXAFFVUXBGVTAQPXXWXKUHPFNOLNFYWKKEDLGJTUBHOICFBRKOQXMCIKDQMBTUMRYSACGDZRSWKLYJEAYGYGSTCBIAJJTPTIZCHPHWPSRHTMYMXWLNJE");
    msg.goal_xml.assign("VFJOZQCYZWFHGBOFYNNMWSPYQQHHNIDTYHFTQASPZIBZTW");

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
    msg.setTimeStamp(0.6788990812919001);
    msg.setSource(22877U);
    msg.setSourceEntity(63U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(204U);
    msg.command = 149U;
    msg.goal_id.assign("ZSIEQDIKGAVEMMQKCCBLZHMKDQXSQNJQQRJSYFVVXYPHGSYXDLZBDJZTTLAAMQKOKVUJXGQRBSRVBUXNMINPIYIOYKCKFVCZOOIYTHMLOUBXFDDDYDPTEJRNRIGGHRAWSEPSUCLCLESNCINNAPHYAHCGESZIESAMNWBAPBGYJFURHWPMUONIVEZOJDYWLBLWMKOGBTOWGPUEVLFW");
    msg.goal_xml.assign("EAUURLYSFZBDBGEEDVYXDSLQPUBBHJMZVEERKSNAHPTGIDRYVWLIJSJLQOWDVWTTJQPFCCTHCCZYCWKYMMPOCPZBCAGRMZOLMHGBXNLDQXWMNTBNGMLFRNYOGTTYWQEXEJTJQQKGKIPNYJCSMVUSKVWSQFJD");

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
    msg.setTimeStamp(0.15451505009449262);
    msg.setSource(15633U);
    msg.setSourceEntity(153U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(75U);
    msg.command = 146U;
    msg.goal_id.assign("LIPYLFVOUDHKEBXESKLGEQMNNDIMQLZKMNYSFGVEHPZCQNFYEQVKHDHXIFXOHEWBSDJMHXTTBEYUNSTVKWLPHMUJGZCSIVHCACKJXWFAUQSPIJWRIUTRSZNBJZJIJCVWZGKNVPWRYFWQGTZMBXKEJYWCZEOK");
    msg.goal_xml.assign("IQWBOKDDXPRVPBKILOTKHTUOGPGFAIDFOKDLCGQUZSKYFCVDLNRRFNZENXDEJJIJABEKZOOFS");

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
    msg.setTimeStamp(0.10089123388706189);
    msg.setSource(13196U);
    msg.setSourceEntity(229U);
    msg.setDestination(7091U);
    msg.setDestinationEntity(213U);
    msg.id = 78U;
    msg.width = 51356U;
    msg.height = 18833U;
    msg.widthstep = 39820U;
    msg.channels = 94U;
    msg.depth = 25U;
    msg.finaldata = 58U;
    const char tmp_msg_0[] = {87, -74, 3, 33, 41, 112, 1, 102, -111, 27, 27, 46, 35, 3, 22, 99, -65, -43, 7, 44, -1, -95, 65, 88, -35, -11, -94, 112, 51, 3, 54, 28, -14, 91, -51, 75, 95, 74, 106, 74, 1, 125, -22, -88, -77, 4, -110, -123, -97, -79, -17, -62, -105, -1, 21, 63, 65, 28, 31, 99, -27, 91, -51, -116, 23, 63, -122, -8, -86, 103, 4, -35, 89, 30, 95, -86, -92, -15, 54, 30, 69, 84, 59, -23, -127, -5, 25};
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
    msg.setTimeStamp(0.7793024459531509);
    msg.setSource(58291U);
    msg.setSourceEntity(5U);
    msg.setDestination(55243U);
    msg.setDestinationEntity(249U);
    msg.id = 79U;
    msg.width = 50919U;
    msg.height = 58389U;
    msg.widthstep = 57095U;
    msg.channels = 218U;
    msg.depth = 218U;
    msg.finaldata = 117U;
    const char tmp_msg_0[] = {-9, 112, 3, 57, 57, 95, 125, -55, -18, -4, -97, -89, 60, 79, -40, 71, 47, 29, -27, -107, 27, -5, 54, -114, 15, -40, -97, 54, -89, -105, 56, -61, 11, 73, 47, -16, 100, -92, 2, -111, 90, -31, -119, 63, 47, 78, -67, -112, 100, -2, 50, -18, 72, -79, 94, 53, -66, 75, -7, -50, 49, 43, -111, -22, -28, -29, 60, 32, -4, 47, -11, -88, 101, 123, -69, 66, 70, 29, -29, 58, -119, 50, -72, -46, 10, -66, -108, -83, -38, -54, 36, -57, 2, -113, -77, -20, -77, 114, 87, 75, 58, -118, -14, 84, 50, 109, -98, 58, -24, 115, 66, -124, -80, -81, 22, -20, -63, 2, -125, 43, -95, -96, 78, 48, 25, 55, -35, -91, -29, -22, 36, 58, 43, 21, -79, 124};
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
    msg.setTimeStamp(0.4224720898838158);
    msg.setSource(34039U);
    msg.setSourceEntity(85U);
    msg.setDestination(40426U);
    msg.setDestinationEntity(47U);
    msg.id = 52U;
    msg.width = 9247U;
    msg.height = 34693U;
    msg.widthstep = 35653U;
    msg.channels = 120U;
    msg.depth = 187U;
    msg.finaldata = 137U;
    const char tmp_msg_0[] = {108, 77, -48, -31, -5, 113, 30, 50, 22, -53, -44, 78, 35, -5, 8, 98, -11, 81, 57, -29, -64, 124, -115, -89, 88, -6, 102, 71, 62, 121, 12, -20, -47, 36, -79, 37, -98, -18, 72, 68, -84, 85, -110, 98, 36, -48, 72, -17, 80, 114, 63, 112, 24, 11, -119, -82, 126, 15, -21, -25, 31, -29, 91, -46, -80, 122, -77, -76, 115, -11, 112, -77, -127, -38, -49, -59, 45, 5, 119, -28, 68, 30, -17, 57, -1, -119, 24, 62, 79, 104, 46, -108, 47, -72, -82, 120, -90, 98, -73, 62, 47, 97, 38, -65, 97, -53, 88, 96, 113, -26, 80, -55, 81, -31, 23, 101, 82, 37, 98, 8, -104, -33, 108, 123, 15, -110, -49, 57, 112, -90, -36, 28, 102, 16, 94, -104, 52, 17, -14, 33, 101, 124};
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
    msg.setTimeStamp(0.01018584171106629);
    msg.setSource(42606U);
    msg.setSourceEntity(180U);
    msg.setDestination(20961U);
    msg.setDestinationEntity(70U);
    msg.width = 24010U;
    msg.height = 1225U;
    msg.channels = 2U;
    msg.depth = 16U;
    const char tmp_msg_0[] = {77, 47, -123, -112, -55, 4, -42, -106, -55, 17, 68, -1, 31, -23, 99, -4, -65, 111, 125, -17, -110, 2, -7, -15, 43, -33, -16, -109, -93, -71, 84, 126, -39, -48, -66, 120, 45, -80, -110, -20, 117, 77, -99, 88, 101, -45, 122, -71, -9, 58, -58, -64, 15, 3, -66, -70, -16, 103, 40, -74, 102, -68, 29, -82, -111, -114, 99, 62, -46, 5, -38, -81, 46, -65, 32, 13, 119, 121, -80, -92, -73, 10, -105, 19, 61, 73, 40, -88, -56, 55, 67, -70, -126, 89, 36, -90, 81, -8, 84, -97, -44, -102, -11, 25, 107, -69, -128, 26, -116, 95, -106, -22, 73, 64, 55, 22, 60, 5, 49, -8, 86, 71, 57, -35, 109, -12, -124, -46, -49, 15, -89, 77, -62, 83, -44, -66, -98, -86, 31, 68, 19, -120, 74, -15, -68, 101, 95, -84, 109, 114, -18, 27, 3, 24, -55, -125, -102, 7, 94, 8, 46, 43, -123, 24, 82, -39, -11, -74, -19, 79, -122, 89, -43, -52, 72, 66, 123, -68, 105, 57, -126, 17, -33, -2, -63, 74, -94, -33, -65, 14, 97, 58, -59, 101, -19, 20, -112, -79, 27, -89, -24, -67, -111, 116, -29, 77, 65, 89, 11, -29, 11, -50, 57, 108, 17, -95, -95, 73, -128, -1, 102, -4, -123, 8, -41, -93, 69, -35, -124, 71, 53, 105, -98, 89, -5, 37, -103, 24, -60, 71, 24, -127, -115, -15, -34, 48};
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
    msg.setTimeStamp(0.5551475944083538);
    msg.setSource(30799U);
    msg.setSourceEntity(186U);
    msg.setDestination(9156U);
    msg.setDestinationEntity(56U);
    msg.width = 60898U;
    msg.height = 24838U;
    msg.channels = 8U;
    msg.depth = 27U;
    const char tmp_msg_0[] = {-124, -5, 33, -114, -68, -57, 90, -7, -125, 15, -69, 98, 84, 50, -82, 101, 70, 113, 104, -67, -86, -123, 82, 66, -94, -4, 68, -123, 98, -17, 47, -125, -115, -119, -86, 60, -85, -36, 79, 30, 74, -8, 119, -6, 13, -19, -23, -109, -81, -55, 31, 92, -72, -47, 63, -42, -109, 22, 47, -54, -88, -56, 89, 46, 126, -26, -114, -22, -121, -67, -13, -54, -117, -10, -56, -94, 31, 45, -68, 27, 119, -24, -52, 71, 24, 125, -128, -73, -74, -34, 109, -33, 106, -55, -9, 24, 63, -7, 27, 0, -105, 42, 126, 74, -18, 34, -89, 107, -104, 106, -11, -100, 72, -12, 79, -80, 7, -67, -49, -50, -46, -111, 109, 12, -2, 94, 76, 20, 37, 96, -48, 109, -55, 62, -92, 122, -11, -4, 56, -74, -67, 123, 122, -111, -1, 80, 67, -14, 59, -101, 67, -48, -66, -62, 94, 92, 32, -4, 24, -79, -125, -83, 32, -89, -124, 65, -37, 84, -8, -39, -94, 89, -16, 97, -26, 8, 124, 100, -89, 1, -121, -80, 34, -74, 119, 99, -94, -18, 99, -16, -18, 49, -64, -98, -32, 106, -111, -42, 22, 103, -1, 57};
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
    msg.setTimeStamp(0.20915070915998724);
    msg.setSource(29769U);
    msg.setSourceEntity(99U);
    msg.setDestination(51529U);
    msg.setDestinationEntity(116U);
    msg.width = 47635U;
    msg.height = 5357U;
    msg.channels = 200U;
    msg.depth = 137U;
    const char tmp_msg_0[] = {-16, 4, -23, -67, -21, 4, -126, 23, -11, 90, 12, 13, 38, -35, -85, 40, 8, -121, -111, -44, -99, -87, -113, 70, 13, -68, -53, 53, -44, 120, 99, -8, -2, 13, -41, -6, -73, -107, -85, -45, 88, -34, 55, -79, 95, -109, 102, -102, -34, -52, -39, 20, -57, 65, 38, -92, 109};
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
    msg.setTimeStamp(0.8581271095646947);
    msg.setSource(56303U);
    msg.setSourceEntity(235U);
    msg.setDestination(11674U);
    msg.setDestinationEntity(72U);
    msg.frameid = 43U;
    const char tmp_msg_0[] = {-22, 107, 67, 5, 22, -81, -106, 57, 32, -4, 71, -61, -3, -99, 24, 34, -113, 37, -48, 120, 43, 37, -14, -29, -17, 116, 6, -121, -45, -79, -15, 35, 66, 81, -60, 93, 4, 31, 0, -30, -40, 8, 68, -112, -5, -87, 85, -46, -117, 55, -107, 15, -94, 110, 40, -111, -61, -69, -5, 86, -88, 69, 116, 107, -1, -22, 98, -84, -30, 74, 35, 53, -51, -2, -52, -26, 60, -81, -52, 104};
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
    msg.setTimeStamp(0.5648298146083879);
    msg.setSource(11654U);
    msg.setSourceEntity(230U);
    msg.setDestination(40022U);
    msg.setDestinationEntity(142U);
    msg.frameid = 33U;
    const char tmp_msg_0[] = {66, -87, -51, -62, 79, -11, 8, -84, -127, 90, -127, -16, -38, 97, -79, 5, 18, 101, -87, -22, -10, 74, -117, -18, 76, -43, -32, -115, -53, 91, -111, 33, -48, -125, -66, -121, -62, -78, 1, 118, 94, 112, -36, -53, 16, -110, -74, 95, -114, -104, 76, 104, 70, -37, 111, 10, 96, -80, -64, 36, 61, 106, 51, -57, 124, -120, -86, -69, -73, -34, -20, 28, 92, 66, 20, -11, -19, 122, 60, 98, -47, -123, 11, 112, -122, 122, 10};
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
    msg.setTimeStamp(0.04898449602004684);
    msg.setSource(1113U);
    msg.setSourceEntity(39U);
    msg.setDestination(62231U);
    msg.setDestinationEntity(212U);
    msg.frameid = 212U;
    const char tmp_msg_0[] = {-29, -40, 112, 93, 44, 9, -94, 62, 71, 67, 92, 50, 16, 45, 83, 92, 46, 116, -116, 25, -33, 8, 2, 59, -35, -110, 23, -72, 77, -114, -121, 99, 64, -14, 56, -51, 30, 52, -15, 20, 60, -69, -106, 72, -29, 86, -34, 98, 80, -44, -49, 28, 61, -62, -108, 6, 71, -28, -28, 26, 2, -61, -110, 112, -105, 30, -13, -93, 90, -43, -113, -48, -66, 19, -15, 86, -44, 62, 40, -2, -4, 22, -48, 24, -38, -54, 99, -103, -37, -20, 15, -64, 106, 16, -128, 9, -87, 112, 125, -33, 85, -112, -11, -75, -20, -76, 13, -70, 111, 41, 78, -110, 12, 107, -103, -28, 22, 122, 100, 49, 116, 11, -120, -2, -77, 123, -60, -55, 16, 24, 10, 94, 10, -78, 48, 47, 70, -93, -21, 71, -76, -47};
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
    msg.setTimeStamp(0.9349470779122376);
    msg.setSource(39074U);
    msg.setSourceEntity(182U);
    msg.setDestination(56361U);
    msg.setDestinationEntity(201U);
    msg.fps = 16U;
    msg.quality = 124U;
    msg.reps = 133U;
    msg.tsize = 182U;

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
    msg.setTimeStamp(0.3824115610055734);
    msg.setSource(40841U);
    msg.setSourceEntity(194U);
    msg.setDestination(2429U);
    msg.setDestinationEntity(3U);
    msg.fps = 206U;
    msg.quality = 121U;
    msg.reps = 132U;
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
    msg.setTimeStamp(0.24278910175799617);
    msg.setSource(22553U);
    msg.setSourceEntity(213U);
    msg.setDestination(5017U);
    msg.setDestinationEntity(105U);
    msg.fps = 208U;
    msg.quality = 250U;
    msg.reps = 208U;
    msg.tsize = 117U;

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
    msg.setTimeStamp(0.1385623513234142);
    msg.setSource(26133U);
    msg.setSourceEntity(107U);
    msg.setDestination(34670U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.45583765651275254;
    msg.lon = 0.14277847363998475;
    msg.depth = 212U;
    msg.speed = 0.7057307749587169;
    msg.psi = 0.3317486358823091;

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
    msg.setTimeStamp(0.06651980380733147);
    msg.setSource(44722U);
    msg.setSourceEntity(204U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.07228209029736643;
    msg.lon = 0.6430636077135224;
    msg.depth = 70U;
    msg.speed = 0.2681560421069997;
    msg.psi = 0.6310761932373099;

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
    msg.setTimeStamp(0.8733128082960558);
    msg.setSource(13857U);
    msg.setSourceEntity(143U);
    msg.setDestination(1370U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.5347502937413569;
    msg.lon = 0.7489267239402359;
    msg.depth = 101U;
    msg.speed = 0.25327449610625585;
    msg.psi = 0.16465674693213705;

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
    msg.setTimeStamp(0.011894578506331577);
    msg.setSource(12709U);
    msg.setSourceEntity(252U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(208U);
    msg.label.assign("AUCNKGRQRXFJTJAWOEQSBVCCINYJGDLGWTUEEASGFDDRPQAVEMBTUTGZCTYPOEZPOKHVBANXWKMUKOVXMSNXFLHOSGRDHHRZTNWBSXYWCNKDCVCMOEPNPVLPMSYTUNOBRJZXAUAWXYJQQPBJUVKGBOVHMMHZLDTEROLHRJFMQZUILDIFSUHEFWTPZENKQRVYMPYAQIBIXQSFKF");
    msg.lat = 0.24735236780070524;
    msg.lon = 0.27665068684087946;
    msg.z = 0.34243429689058347;
    msg.z_units = 59U;
    msg.cog = 0.19385016784789277;
    msg.sog = 0.422436209881104;

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
    msg.setTimeStamp(0.48320764655666126);
    msg.setSource(52969U);
    msg.setSourceEntity(96U);
    msg.setDestination(21573U);
    msg.setDestinationEntity(44U);
    msg.label.assign("UTDMVNXLOQFBTGJFIHULCJUJBPYSYVQEHZWPDDXSLKHGFCNFWIRMNNWOHKMEXCGCASJNKWINSHCFURPOJMRHBFTICKLTLTXJSZLQJWVAWZODBZEDRMULAATQAEQGZUFKVICDPKIPMUPOTIEPHXB");
    msg.lat = 0.7770125442374693;
    msg.lon = 0.7787034862833496;
    msg.z = 0.8100122535698723;
    msg.z_units = 222U;
    msg.cog = 0.9199606696918408;
    msg.sog = 0.2219212534241649;

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
    msg.setTimeStamp(0.48435798571640065);
    msg.setSource(11729U);
    msg.setSourceEntity(137U);
    msg.setDestination(11375U);
    msg.setDestinationEntity(63U);
    msg.label.assign("HYIHVUDCNFXWGJZJJISGQBG");
    msg.lat = 0.34321377408305986;
    msg.lon = 0.45102121913221604;
    msg.z = 0.9958256795128809;
    msg.z_units = 230U;
    msg.cog = 0.18646346874259012;
    msg.sog = 0.2674519913491201;

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
    msg.setTimeStamp(0.7775973289682289);
    msg.setSource(3044U);
    msg.setSourceEntity(137U);
    msg.setDestination(41607U);
    msg.setDestinationEntity(227U);
    msg.name.assign("DUYXFSRQNBKBWOYNLAUDGSGRXLLTMVOWQBBJXDYKZIIPEAWEDCHQEFKIMCUHELZKJJBONEKZISSKGONGEBIFGMCBRDCGFTRJPAYSQGVDZZWFOVUVTQKIHVRZAAWZHDQYVOWSAVWMNLQMCBHNAEGPYIWWUTHLRAGOVOL");
    msg.value.assign("LHZUQWKTOKNPIODIVJNVTQOQLQNLODTZJUGRVBVXJGIAZRTKYOQHTBPGWLGXACOXSEFEOJDMSZBJXSFIOGJIHSCFWDVFYIXVWQKCHWGUNTCWCVRDYEHLHRZFHFZWWZSDBJYWECXUSRKNABCQRSDJBGLMPDIRYHFOXIQRE");

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
    msg.setTimeStamp(0.6342480712397369);
    msg.setSource(14421U);
    msg.setSourceEntity(125U);
    msg.setDestination(33588U);
    msg.setDestinationEntity(124U);
    msg.name.assign("SPURTNNKQQTMCSDEVFLHHAFFOTOJOYXBYJZFPVQZWGBSGMCTCNLRXTWPAIISZRYPIGDHBTGOISAXTWJDZBNWKPUCYHDUXIFAXWWCRIWNGYJJELJSFYXPVPOEDVUGUVVIMMLECZLQKLEMIFPQKUABROKKLMHZQNPZRARLFYCAHQEWCBEEJKJTOKPCVMZSHCDADWEOFYNZDVIO");
    msg.value.assign("RWZAJFBADMCJIXQVKOSWVOMEANZULCTXHUEURVIWTGDVTTHJWUWMXXGBRKQCGDQNSIYQZQKIGQVFRKNVZIROMLBLEUWZAKHGSPLGHOUYNTXLBIEKVGZJTSSIBUPKVJEBIHKCBCHAPSSCFYRYYUWFQCSGYKEYTMPDRYZCDADLRMDXFXOPIKNAJUJPOXUYZZLWMNQFPJQBMEDTG");

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
    msg.setTimeStamp(0.5241322077505943);
    msg.setSource(18404U);
    msg.setSourceEntity(147U);
    msg.setDestination(9998U);
    msg.setDestinationEntity(131U);
    msg.name.assign("HEGKCGSJYVFVRXTLEWIGQSZCDOOJJJJBHFFJMMBKQZRISTJXXBAGKXNUSI");
    msg.value.assign("WDKNLGQSOWHZBKEEVVOMCTONMXDTFJVQEMRSFDOGCDUWZVUOXUXNGWMTHBSHJULSGFZKCCWJVXGSYVNMQKPWLQATMEPIHBHMAYYZAIINNLCWZJLWCRJNAEDIYCPLFBRIEBWOLHMBZXAZMUSEIDWKSXGCHVZYGYQBAATRDAFIHQCURXBOFFUHKDJMFPYPRBFUSYXZTEKLTQDJIJLTRVNKPGXNQDPEHORSPIVITJRVSPYTXCOOQNUPGKRB");

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
    msg.setTimeStamp(0.027034565862689264);
    msg.setSource(50490U);
    msg.setSourceEntity(248U);
    msg.setDestination(30142U);
    msg.setDestinationEntity(132U);
    msg.name.assign("SCLPKDFNARSDHTHHUDCQOUMGXQSKYBIPAGSWZQJETPRCSPRXQZCUZVHENVKS");

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
    msg.setTimeStamp(0.9854434855750926);
    msg.setSource(53753U);
    msg.setSourceEntity(148U);
    msg.setDestination(1364U);
    msg.setDestinationEntity(214U);
    msg.name.assign("KIJUQSPTHZLAVZHVBDIZYZXBESMIIWVICWUUDAWDMDFHXXKTVBGOUQQODFTSGDFFGBMHWHJJJJXSHTZBOGTMSIQCVCFFKHEYUEBAFDGLLA");

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
    msg.setTimeStamp(0.26548767602579737);
    msg.setSource(28897U);
    msg.setSourceEntity(198U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(149U);
    msg.name.assign("EJEFUICYWBGHAXQHTJVDLOIOHZBBPYMEDOSKPFKQQHEUDQLGFNXIXWFOUKPTKORBKJJNVVGXQCIYAYSWFIDLTEAZVWJ");

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
    msg.setTimeStamp(0.6093201537936526);
    msg.setSource(4279U);
    msg.setSourceEntity(122U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(208U);
    msg.name.assign("QPUSRRBLOPVPJKNHCHXSZVONAZWKGKSTVUDCBCNAXRMOWOBORQK");
    msg.visibility.assign("YYLSSIIPZDHOVRSGAEGVKMSXIOAOOKBNPHHIUENQFOOXXYLZUJCVJQLLZYAVWWFFDVFWTWXJQCGDOZXASWHZQZQIRBXFNBNKUPABDERDLJXHKPABGYGSYVNJKDKUYEYQVXCRLNMEDUBKOEIBRQDMTTCJCS");
    msg.scope.assign("NRCOUKWZDVPQOAJCTTZDRYBIHCAUGAOJKTYUMDQJVMAIKRXPACRGQOAWWHXFKMPFJBLQHKTGJLRSPHQJBVTXGSXQEBJWHDWFZRSAVKUYOLIGZYGKZFQCTGILXEXDBYCODRNDWWEPJCSPMCBTKXWVDPYOUMINSVSFSULJZGUILPNIANVLRUXEKCYRHLBMZHNMGOLNBQYJEIOEDFZMPHVEHMZFNUIYXLQEAIVGWHFZCSAKBNBWRVQXEDOPF");

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
    msg.setTimeStamp(0.37699438884355163);
    msg.setSource(21068U);
    msg.setSourceEntity(47U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(83U);
    msg.name.assign("FKOHMFUJPEYRTQVCVGDPDJGJATKITYSBECHCCWKUVQZZQZKAXIXKIYIVTYBORNDURRMEFPAOCWNUCLZSIHGQGJYZPVWMMSSCTYZLVLJNCFUMZSJETKKBFBHNRSVDZEXWCDOIBONAERLZPPBXGOWIQKQUBJLFWKGJELLDQWDJAXNQVNRYTIEZIRANYMXV");
    msg.visibility.assign("CRXZRNUXHJNOBJKETQXPOPNYSKRWZKVRBCDEOFCZUMUJFNVSDYKCJCWWYMSLHASLGXIWOLPRRPNUTLVNQJEQLMOTZAYDTIBPPAKUJHVWJYYAGVCISNBFXAFDYCEOHPNTZVOMEFLJBZIMYQSTQLQJMEGGGKRLFYSRTSQIFGHAKIQIUEDOJASIBZHTPQTDMEGWBKNXPZXRSDIAIGOHZWKFUVUWUDAWEXDDCQ");
    msg.scope.assign("CPSLKCWULJGZEOHLOGUUZTKXEAIVF");

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
    msg.setTimeStamp(0.9107018738378831);
    msg.setSource(6761U);
    msg.setSourceEntity(127U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(37U);
    msg.name.assign("XWTWFAWWJDIYWCTYSRHVXZAPDVIGQJEOHOEBOPIQFLQTMXTXGDVZUYGBMTREVQQJRXTHXMBBLJSFLPRNHCSUPCGJJUBWYRHQUDRHFQVGOGJMINWMFSCTKIOEPNDX");
    msg.visibility.assign("OVSSGTKLWNYFEKKMEFIQIQUUUFNPAGEQBGMZWRQFCZXFTWSMIJSDPVSHBYPHHZRNQYHVSXIUVNCMXZDCTEWYTGFXAFBCVPIGBRHVCIXTAPMCXUCNXXJBWJKLTZGBZZMTDSRGEOVMBKNOGAFDSKJEBQDLRUHTXHDWOJWJWOVHJWVUSKDNYAORCRRELIBALKZZQOYTQJCQVEJRPAXNTNUWAMLRADEYGIYYEFKKM");
    msg.scope.assign("PMNUJSTNWCVTNPLFJRVUQRZVQPCUOKGGDFRIEIULRMVEJCTBVOTRGWJZOQGHPKBGWHDOXWLLCTBKJFOPXHEDXBQYFCAWWJBXNKQBUADNPZMCAQORCBWQSLDHYVNFJKUYTFAVEGUVTKPKANXQCUAIWIABETHOSDPMGNZVTZSPEJYUOFFXRIEDQCGIZMELINSHKKSQYJZOMFIESEYBYGCZPDXRUFWWZASLSTIDMONMYHHRXBY");

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
    msg.setTimeStamp(0.273283676139619);
    msg.setSource(59306U);
    msg.setSourceEntity(182U);
    msg.setDestination(33763U);
    msg.setDestinationEntity(23U);
    msg.name.assign("PLZVWUNJIUPXGBOGFEKRYHRFYWENRVWKPHXKBWSVJSLNHZOBCTFMUBAQSLSTNKSHRSTTXVTUZQLIDFGGCTDIONRFPGFOLOVAABIKBWHEFELYE");

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
    msg.setTimeStamp(0.3650373272450951);
    msg.setSource(15740U);
    msg.setSourceEntity(28U);
    msg.setDestination(28931U);
    msg.setDestinationEntity(156U);
    msg.name.assign("KEWMTKSPTOORXYHZMLCYUKKUPQUNVEXMGATPJHEOKQARLZJNFEZZPGGQDSMEXNPSFLJIIZNUXVMWCHVGHBNBBFGBRYFQNTJRFYBLCGDJSX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IRHAPZUKEQUDQTCDYAGAEGCFOLRBHLYULHWXZPMRDWRKWSS");
    tmp_msg_0.value.assign("WNAOOWBXNATCFODINPOEEAGHYHSFMUJYFVIXPZFBWAXDVOQCYLYXUICCUODLSXRRVCIRWZBIJJQHDEKNHFRRZNTCBPDJEKNLSXTSUVCWHGFKMVLIQMQJUZIVKMGMUJOAAGDOKISKMPXPTBJRCSCQZJZLQKFDPZQPFYEEGJRSAWDOHPLEQIEPWGXFJVDZQBBWQMPASITXUMHYTHLEMGKRUTNGFAVEHOHWNCYGUUZ");
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
    msg.setTimeStamp(0.05209206290182877);
    msg.setSource(39719U);
    msg.setSourceEntity(253U);
    msg.setDestination(5161U);
    msg.setDestinationEntity(57U);
    msg.name.assign("VWGDBKWESOFACFVPPTZFBMOAWLLSXHMGOHGTAVOFHQVMXFPQJDJYWSPNPGEQXTURKVSCCRQKEXDUEDMLMMZHUDLU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HYKWCWVIGTGWPOUUFHWMHOETLKZSGPSJLBVSWBMXPEHFWTIHXLAIVATEADWQMKLTLZHICFS");
    tmp_msg_0.value.assign("UERXBKLZJIOHILRMKATTEAOONFDLWQQZUDIKEKXVATPXQFBRTHBDQCGTAANUHMHIJSJDPMZAFZCJXIXCEBQSBJVJDEZSNABDIYHRXMDHZJUKJHLOBPNGRWDDPPWUTTECQWYCCIXNUIMVNOYLZGERNRUYKGTGMUZRPWLRFSNGVCWJXYHVVFZQGUFYXPCOCMXSVGLYZWSQHFVCBTYKMNOIQKSFQGDBAHLSWKPEAOEGMMJVRUWOBFLPT");
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
    msg.setTimeStamp(0.42198449351574163);
    msg.setSource(3275U);
    msg.setSourceEntity(251U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(28U);
    msg.name.assign("XZXSHFIQIJKBOTSQHNSNUZRBUKPCWQDSDGEBEJWOWBRALALGDBMCGRYGXYXPTRBUWJZHYLDQOGJKIGCAFUJJV");

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
    msg.setTimeStamp(0.20213931222974646);
    msg.setSource(41807U);
    msg.setSourceEntity(33U);
    msg.setDestination(25746U);
    msg.setDestinationEntity(55U);
    msg.name.assign("FQFPWPXLANZUIHBBVGMMIXABYTSEOJVCXZXHFUSNVNVGSXWHNMYGEUZWWEIZGAJSYOEIAGVVWBDWULNMREMTKCWVNNTJDAPGZLUNALZQCRBIXCRHKYATLHUZOBGTIJEGZDPYPFUBQELSRMCEXMCDLYWGHZVSRNDLPRIOISMVACMTAFFDVOBKDYOECWLQHXQEI");

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
    msg.setTimeStamp(0.8928161818039411);
    msg.setSource(62831U);
    msg.setSourceEntity(69U);
    msg.setDestination(20236U);
    msg.setDestinationEntity(136U);
    msg.name.assign("TNWXJCWUJFMCVXHNRKJXJRBPSIBKRWOTJACISNZOQVJNDNGLENOFGKGJRYVPRWFJSBQZZOFCGIQV");

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
    msg.setTimeStamp(0.4003960233958035);
    msg.setSource(11688U);
    msg.setSourceEntity(113U);
    msg.setDestination(8340U);
    msg.setDestinationEntity(162U);
    msg.timeout = 453554956U;

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
    msg.setTimeStamp(0.030337575900698743);
    msg.setSource(51743U);
    msg.setSourceEntity(116U);
    msg.setDestination(56848U);
    msg.setDestinationEntity(10U);
    msg.timeout = 3551765631U;

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
    msg.setTimeStamp(0.20605398166954525);
    msg.setSource(21307U);
    msg.setSourceEntity(113U);
    msg.setDestination(48489U);
    msg.setDestinationEntity(194U);
    msg.timeout = 2273668609U;

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
    msg.setTimeStamp(0.6561761668272416);
    msg.setSource(4486U);
    msg.setSourceEntity(120U);
    msg.setDestination(19434U);
    msg.setDestinationEntity(189U);
    msg.sessid = 878890931U;

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
    msg.setTimeStamp(0.3090356546130134);
    msg.setSource(28072U);
    msg.setSourceEntity(58U);
    msg.setDestination(51822U);
    msg.setDestinationEntity(79U);
    msg.sessid = 3773130433U;

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
    msg.setTimeStamp(0.745316299500413);
    msg.setSource(4215U);
    msg.setSourceEntity(133U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(84U);
    msg.sessid = 840198845U;

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
    msg.setTimeStamp(0.3249234233667405);
    msg.setSource(22963U);
    msg.setSourceEntity(143U);
    msg.setDestination(20019U);
    msg.setDestinationEntity(233U);
    msg.sessid = 81906962U;
    msg.messages.assign("MQDWEQXSJDXKZCCUKVPAEACPAOBUNBBDBLCNMPCTAJDITSWVYQFNNCEIEBILVRFBHRSJHPISRYSBZGAIZIGVHCTKHQZKGOSSUMZKWZVJOMCUDXWZDOPHXLLEXVKEHFRVYTKJNNYOPSIQOKGAVMDURLGJTYZRQUFODUOJG");

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
    msg.setTimeStamp(0.9075817420809694);
    msg.setSource(55377U);
    msg.setSourceEntity(190U);
    msg.setDestination(35964U);
    msg.setDestinationEntity(38U);
    msg.sessid = 1270520889U;
    msg.messages.assign("MTGNEVLOAEZVQKCLFURAESXCYEZXLUIUCDPIOVNQGDUSGBJPVUISOBZOXOGWFICKSUJCODSHTYVFFVPLJOSBBUTSONKDFQMTVZPJHERYNZAHYCWTGKNITSBEXYYTLAYFMLDRRJHAKQKMGIPITZGNJQNOKWUZXMKDLXHGSFXQEPYZHAXNS");

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
    msg.setTimeStamp(0.38937100536302593);
    msg.setSource(45399U);
    msg.setSourceEntity(229U);
    msg.setDestination(64717U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3225265650U;
    msg.messages.assign("VMQSTAECEUPECQDBJJWILTDQWMXFMVULSISDNAHWIDPAEIZGCUAWFBKPQWXVLNTGIOCDKXRCQZAYUEFTCVLWGGCFQCLESURMSJLULNOKZRYQZYBIRAQVZYFMJFFNLRTPB");

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
    msg.setTimeStamp(0.5853214245049678);
    msg.setSource(54260U);
    msg.setSourceEntity(241U);
    msg.setDestination(20300U);
    msg.setDestinationEntity(245U);
    msg.sessid = 2331901711U;

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
    msg.setTimeStamp(0.5341446202376696);
    msg.setSource(35909U);
    msg.setSourceEntity(215U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(171U);
    msg.sessid = 3721131082U;

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
    msg.setTimeStamp(0.6436921750861182);
    msg.setSource(15763U);
    msg.setSourceEntity(107U);
    msg.setDestination(59085U);
    msg.setDestinationEntity(233U);
    msg.sessid = 2452892593U;

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
    msg.setTimeStamp(0.377718251472572);
    msg.setSource(33715U);
    msg.setSourceEntity(33U);
    msg.setDestination(56067U);
    msg.setDestinationEntity(45U);
    msg.sessid = 158637997U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.5936770985643559);
    msg.setSource(24993U);
    msg.setSourceEntity(113U);
    msg.setDestination(31725U);
    msg.setDestinationEntity(12U);
    msg.sessid = 142099467U;
    msg.status = 177U;

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
    msg.setTimeStamp(0.7237730826206904);
    msg.setSource(2319U);
    msg.setSourceEntity(114U);
    msg.setDestination(39438U);
    msg.setDestinationEntity(231U);
    msg.sessid = 3069863797U;
    msg.status = 37U;

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
