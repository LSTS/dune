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
// IMC XML MD5: 09f2a9261b1c07a6455248712034dad9                            *
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
    msg.setTimeStamp(0.5400640738608307);
    msg.setSource(60370U);
    msg.setSourceEntity(226U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(57U);
    msg.state = 157U;
    msg.flags = 12U;
    msg.description.assign("XPGHMZPLSUYZBVMRLIRUGKCWLIVKHQLZZLCQBKGPXYERBOTICFELLTJQYIFZWZFYBDUMWFPEQMHZUGWKINSMDDCS");

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
    msg.setTimeStamp(0.547575953414131);
    msg.setSource(2550U);
    msg.setSourceEntity(172U);
    msg.setDestination(63105U);
    msg.setDestinationEntity(63U);
    msg.state = 153U;
    msg.flags = 24U;
    msg.description.assign("VPBREONTYXVLZGTLJGLESKEHJNDBQLWLUHFWON");

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
    msg.setTimeStamp(0.5866974843539998);
    msg.setSource(19574U);
    msg.setSourceEntity(22U);
    msg.setDestination(25089U);
    msg.setDestinationEntity(152U);
    msg.state = 199U;
    msg.flags = 72U;
    msg.description.assign("DITHSBNHOQRFPKTPGHANTUEBUFQPWJWMOMADIQFYDSJICEAOMBOIYWLENCZRTGORKZDJXBQBGNFOJSPVIGOWBKJNKTYNXZPPEHXVCTXVSCQEAIQJWCMBETLEIFRJPIYYFUUANYJLXXVWQDYXRZEKIUSMDOKMUHUBZNCVEMCXGWHMLCHULZJSHHBDRWTLGAZPZKL");

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
    msg.setTimeStamp(0.904681202380514);
    msg.setSource(40408U);
    msg.setSourceEntity(119U);
    msg.setDestination(13889U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.7175205009275245);
    msg.setSource(62028U);
    msg.setSourceEntity(232U);
    msg.setDestination(62663U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.2986712872304459);
    msg.setSource(51780U);
    msg.setSourceEntity(135U);
    msg.setDestination(52054U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.5352956550086381);
    msg.setSource(45405U);
    msg.setSourceEntity(59U);
    msg.setDestination(18245U);
    msg.setDestinationEntity(35U);
    msg.id = 114U;
    msg.label.assign("WSANQDSDGZZNMKLBOPDNCPJVGJKUYQVMYOKGLHOFHUFRTUJIHGUFETXTJGRCEPAYFCUYOTAVCPNQWNFWIPXBWDTLDLXNDTSJIMJPAWCOXHQKRYBMKXBSYHBRVXFIAKCWFXUQLEKRRDMVIQLIQGBZELJBABHEQOPG");
    msg.component.assign("EBQZTOSIPSEFAJKOWUYSQOOYXAUTAZSBFCOQTNIMAGRPUCYCZEQMDLQNWWHJDHRJCJMOZDHLNYDEPBMBVIRFPLWGSZAPKTZGVBNTLIFCVRHZXNABRVYWLFJVUKPERHRYXITHDSSUPRDZECVDTLYKCWOKQMCPGKMIGMVJNYHXOJKVAZPUFNOGMLEIOL");
    msg.act_time = 37176U;
    msg.deact_time = 50346U;

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
    msg.setTimeStamp(0.41946211324785454);
    msg.setSource(29686U);
    msg.setSourceEntity(221U);
    msg.setDestination(27575U);
    msg.setDestinationEntity(216U);
    msg.id = 250U;
    msg.label.assign("XJOEGQKBJSFGHJCIPPQPBXMYNJYRIABWAUGMWOCQDLDDHVYJTYHRICQYOSULLQSJAJNXUEGSMXBBQIKXEURKIAZIMDZHRINUJDTGHZTFFFTPVLLNJY");
    msg.component.assign("UCIHEEDFCOOEOFTVKIKACFKUIUUMDHDXVNXGTKMNIIHTOQTZVGXZBMSRPDFYHSXQTGFOSBKHNEOIEEODPAANMCCXYGLAZOTMWRYVREBVNTLIZPGTWAIEZHWFBCHBJJSNYQWGLLOUIJJUJWVUYWDQCPSQZMVGULLNWJSFDXFEURWPKYDPBVLTNOMZMARQYBSDRRGTQHKWJQAJVNZCZJLVGACNUKSCERBHPKRHMAQYRBYSGFZKPQXLMYBIPXL");
    msg.act_time = 42377U;
    msg.deact_time = 14413U;

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
    msg.setTimeStamp(0.06557440709629292);
    msg.setSource(62250U);
    msg.setSourceEntity(122U);
    msg.setDestination(15299U);
    msg.setDestinationEntity(11U);
    msg.id = 110U;
    msg.label.assign("TEHSMKREJRDAAVGOQLPKYVBZOMCDXWIEUAMXHTHNVBVWZYMGXONTWKFQIVCFRYFYZHDQIHEVPEQO");
    msg.component.assign("HBTFYRCIAPYMFLXATTFJYOYRCPRTQOPUUDXHVXVNWTNOOGSEQANVABXUEQLIMZEZNEXMODTREIBAZWAHHGLVNJYGKIMJBQXDVYFZHUQILNCFIRDDPMKYOVGOSZSTGLHIDGWEKUGMDBIREIUKEZDANMQPKZSBWOBHYUVLVXCSQTWTC");
    msg.act_time = 64247U;
    msg.deact_time = 48980U;

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
    msg.setTimeStamp(0.5001918359783787);
    msg.setSource(24137U);
    msg.setSourceEntity(215U);
    msg.setDestination(34633U);
    msg.setDestinationEntity(42U);
    msg.id = 73U;

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
    msg.setTimeStamp(0.19412679406885613);
    msg.setSource(58292U);
    msg.setSourceEntity(116U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(125U);
    msg.id = 166U;

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
    msg.setTimeStamp(0.2298845779822699);
    msg.setSource(20184U);
    msg.setSourceEntity(86U);
    msg.setDestination(23101U);
    msg.setDestinationEntity(229U);
    msg.id = 224U;

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
    msg.setTimeStamp(0.10791925944093872);
    msg.setSource(19206U);
    msg.setSourceEntity(247U);
    msg.setDestination(59074U);
    msg.setDestinationEntity(108U);
    msg.op = 15U;
    msg.list.assign("YUPCDSHQVUKPTYNRSAQAMGGZWSIPXYSLMYNVFDWRZOJHQZPDFOCXEBGYUBLROKRFDXVDHMRTLWBXHCYRBEUOCXNHAECXWNBVQNBXYUZMSTZUMIEKKRJBB");

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
    msg.setTimeStamp(0.10737943406700845);
    msg.setSource(33512U);
    msg.setSourceEntity(191U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(223U);
    msg.op = 91U;
    msg.list.assign("LDTRJBDXQMAWOHHHNNSKBGKNFGFMRMGQJGDXZICAQHDGYQIVJZVUNFAGLPWUCODPGNTWEKPQMDTFMCTKWZSLAICGACBYQILPFZRCUUABIXOLFNZETVXGOHADCNYKZECHPKDKHIMXVFBQUHJWCYSRTJORSDFDYRLLJPZUSKWSHEOTUICBPOVJXLPVPMEVSWYAEH");

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
    msg.setTimeStamp(0.41193171733494716);
    msg.setSource(10871U);
    msg.setSourceEntity(131U);
    msg.setDestination(61503U);
    msg.setDestinationEntity(17U);
    msg.op = 250U;
    msg.list.assign("OCYGOCWTIACVSTDDXEBWMSRELSAAIEJBJOHBBFVBKTPEVYNZRVIGOXKORWARTILDJILSGJMIYURWRUNYAVFGTSZHUUXOQYIUNLVHBLDWNZMCKNMZRTBGNGWEVXSJDFNKFHCVQZPXZBFYPNFTX");

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
    msg.setTimeStamp(0.11001447721431667);
    msg.setSource(3679U);
    msg.setSourceEntity(111U);
    msg.setDestination(25852U);
    msg.setDestinationEntity(254U);
    msg.value = 100U;

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
    msg.setTimeStamp(0.10117534569581776);
    msg.setSource(59830U);
    msg.setSourceEntity(227U);
    msg.setDestination(10255U);
    msg.setDestinationEntity(129U);
    msg.value = 149U;

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
    msg.setTimeStamp(0.14443864920648009);
    msg.setSource(3981U);
    msg.setSourceEntity(164U);
    msg.setDestination(35132U);
    msg.setDestinationEntity(84U);
    msg.value = 83U;

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
    msg.setTimeStamp(0.6759004156676668);
    msg.setSource(40712U);
    msg.setSourceEntity(201U);
    msg.setDestination(31639U);
    msg.setDestinationEntity(196U);
    msg.consumer.assign("ZYWLWJJQDZYXDIGTAJCFQSTNMXLITNRLPHQHGJTPJWQVFKHUNUOY");
    msg.message_id = 11023U;

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
    msg.setTimeStamp(0.06806113051849427);
    msg.setSource(54986U);
    msg.setSourceEntity(200U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(17U);
    msg.consumer.assign("RWPRSBUVRGLAGNUODZBJTZALMNMKLZCHZAMSIRLBQNYVWVJUWCHJBQNJICKOZXWCFEQQYVEFWZPBCKBTMGOTDXDCFYMIVRYKFXDWALWTNTYOIVWHNVISBOKWGGIIUG");
    msg.message_id = 29349U;

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
    msg.setTimeStamp(0.6081503448367173);
    msg.setSource(30692U);
    msg.setSourceEntity(56U);
    msg.setDestination(2977U);
    msg.setDestinationEntity(28U);
    msg.consumer.assign("VEFHXMOECDROASTSKJUWNCBEVMFDGXJGIBEXZPTVKXGNOIOCOJKVNZPWSFNQMKEOCIZNHNYMFESWYYAEVPSLJZPAUPIAZGJGRDBABTRLDQLV");
    msg.message_id = 2036U;

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
    msg.setTimeStamp(0.6436079008063191);
    msg.setSource(33979U);
    msg.setSourceEntity(214U);
    msg.setDestination(46888U);
    msg.setDestinationEntity(221U);
    msg.type = 94U;

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
    msg.setTimeStamp(0.36981100943982503);
    msg.setSource(47848U);
    msg.setSourceEntity(80U);
    msg.setDestination(15433U);
    msg.setDestinationEntity(231U);
    msg.type = 84U;

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
    msg.setTimeStamp(0.8120705439827097);
    msg.setSource(65132U);
    msg.setSourceEntity(88U);
    msg.setDestination(9659U);
    msg.setDestinationEntity(81U);
    msg.type = 248U;

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
    msg.setTimeStamp(0.6279251917442118);
    msg.setSource(51372U);
    msg.setSourceEntity(93U);
    msg.setDestination(5080U);
    msg.setDestinationEntity(123U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.7046473120563866);
    msg.setSource(16138U);
    msg.setSourceEntity(116U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(140U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.5857341661849257);
    msg.setSource(30132U);
    msg.setSourceEntity(169U);
    msg.setDestination(64392U);
    msg.setDestinationEntity(212U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.7968416665345599);
    msg.setSource(47440U);
    msg.setSourceEntity(235U);
    msg.setDestination(43173U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 242U;
    msg.step_number = 4U;
    msg.step.assign("QSNWIEBRUKIMTIVLBPYOJYEHXUHTWSPWHWCSKQZDFGZZNQVRYAFJWEMXVACGEQRJWQSSANOLCLOOXPNVIEGVREJDIKCTAHHTXLZMAHALVIRTJULSZFKNUCLCXBCGYDGUAPYKJFFUGXFBOFCUY");
    msg.flags = 83U;

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
    msg.setTimeStamp(0.7669449756494632);
    msg.setSource(48764U);
    msg.setSourceEntity(3U);
    msg.setDestination(4615U);
    msg.setDestinationEntity(0U);
    msg.total_steps = 109U;
    msg.step_number = 196U;
    msg.step.assign("NLAESEUSFKSDYQLOSJROEOPDWPTBGAHZKZAMUUDSCCPOGAIKAKLXZXUWLRKEJJRXEEIQBWPMRAGWAMPTRGIIIZEEWVJHHQFNBYZKCLBLFMWKHXFLBJKDRPAWWLMOYVQCOWBIUNQE");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.6390799434243559);
    msg.setSource(40780U);
    msg.setSourceEntity(99U);
    msg.setDestination(54975U);
    msg.setDestinationEntity(82U);
    msg.total_steps = 203U;
    msg.step_number = 104U;
    msg.step.assign("XJKMIFKUBXYWFEGLUAOLWSBPISVFZLHWQBBQHMQHERQEJTFYHCZDVTIZLNHNWADUTNZZEIYPUPDVBKXVRXDGAIGWPEJBYYVAOUYIBKQSLBXFIZEKORDJWSLYKSZCHVMGUKQSMOADTYKQMDFBPTDYXPA");
    msg.flags = 108U;

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
    msg.setTimeStamp(0.8665678414675361);
    msg.setSource(28366U);
    msg.setSourceEntity(205U);
    msg.setDestination(58415U);
    msg.setDestinationEntity(216U);
    msg.state = 225U;
    msg.error.assign("LCNMRFNGBYFKWWXBXXFAEXWEYDNHYPCLBDDMWZFHPSSJMHOJIMOUINVUJGAELXHRVKMGXGRGZOIQJQGNDHCKYQVQUTSBHIRREKBQSKDKYEOBMYDEULMVEDUXCKDTSHFREOEZTSAWGBYTBJZTQAKZOAUMQZCASPJLYROISCOPAZKMEJUNSUFTULMNKTFLBPCVVZJNCRNTPGICNCSYVOZAPQAFIWWXGBILDPWFGDFLXIUWJ");

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
    msg.setTimeStamp(0.7574248074098208);
    msg.setSource(56397U);
    msg.setSourceEntity(217U);
    msg.setDestination(64227U);
    msg.setDestinationEntity(112U);
    msg.state = 175U;
    msg.error.assign("WGQZVTUGTPLHPXOFGYEBDLYSJDGUCPZKVZXYTAMRCMBNHWBPFTZAICEWEKYWDFHKWJRXXHFFMEWOVOQIHUKFKPLTDMBVVDGDFASRESSXKYBGEPBCJUSSZXYOVAHNAKIFJSCWZKLXDQZBQBCZQTYFLUMHLNAMRIVDJBYFWXNCGWIANX");

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
    msg.setTimeStamp(0.17980051491248394);
    msg.setSource(20535U);
    msg.setSourceEntity(17U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(7U);
    msg.state = 15U;
    msg.error.assign("EMEXGVLAZQOOPYOAIHFWYTTJJJBHONIKSHFFVIVFWOWXTBLASYRMZDADXWZZPUWQVAIOPLMKBQVNMJOLIRISDNDGSKONEBMCIKHMHCBFKPUOBTUKDQYJWTYZCBMUUXFPDPNPXARAOSVNTDVCLGKXCAJLPGEUNCLRTXYJRCKYFCSGCIHWEEZWJNQZJPGSEQAIJHDGMSRRKTT");

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
    msg.setTimeStamp(0.4809656238959289);
    msg.setSource(58912U);
    msg.setSourceEntity(191U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.3060307608847177);
    msg.setSource(28759U);
    msg.setSourceEntity(61U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.41600117640278766);
    msg.setSource(34047U);
    msg.setSourceEntity(253U);
    msg.setDestination(53005U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.4025279789587213);
    msg.setSource(27252U);
    msg.setSourceEntity(151U);
    msg.setDestination(630U);
    msg.setDestinationEntity(162U);
    msg.op = 45U;
    msg.speed_min = 0.19533042122332434;
    msg.speed_max = 0.3185752024225008;
    msg.long_accel = 0.47795679486302034;
    msg.alt_max_msl = 0.2983248192225053;
    msg.dive_fraction_max = 0.06565794906868916;
    msg.climb_fraction_max = 0.5104882828969244;
    msg.bank_max = 0.7486947805612453;
    msg.p_max = 0.1603114261587142;
    msg.pitch_min = 0.04694388007413908;
    msg.pitch_max = 0.27818629773408343;
    msg.q_max = 0.19377402790195797;
    msg.g_min = 0.3276040038758048;
    msg.g_max = 0.635282999962866;
    msg.g_lat_max = 0.48222108289100674;
    msg.rpm_min = 0.15009810116246203;
    msg.rpm_max = 0.3345121220814946;
    msg.rpm_rate_max = 0.1626736140344206;

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
    msg.setTimeStamp(0.7049726748171496);
    msg.setSource(1861U);
    msg.setSourceEntity(116U);
    msg.setDestination(12996U);
    msg.setDestinationEntity(59U);
    msg.op = 51U;
    msg.speed_min = 0.1702638565955913;
    msg.speed_max = 0.11681651853505026;
    msg.long_accel = 0.0821003446701204;
    msg.alt_max_msl = 0.554327104124131;
    msg.dive_fraction_max = 0.3240548699609547;
    msg.climb_fraction_max = 0.6039663481432219;
    msg.bank_max = 0.8940019286950253;
    msg.p_max = 0.06251158588311934;
    msg.pitch_min = 0.22121921085392915;
    msg.pitch_max = 0.5215667748119829;
    msg.q_max = 0.45662017993351656;
    msg.g_min = 0.2064737633081687;
    msg.g_max = 0.3631154368295664;
    msg.g_lat_max = 0.8774674588551761;
    msg.rpm_min = 0.0358526394177866;
    msg.rpm_max = 0.06620661913253545;
    msg.rpm_rate_max = 0.7526472155930675;

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
    msg.setTimeStamp(0.950876473902336);
    msg.setSource(32425U);
    msg.setSourceEntity(172U);
    msg.setDestination(6890U);
    msg.setDestinationEntity(225U);
    msg.op = 34U;
    msg.speed_min = 0.925188863740478;
    msg.speed_max = 0.3336384940742666;
    msg.long_accel = 0.7611647538114703;
    msg.alt_max_msl = 0.8201020562449179;
    msg.dive_fraction_max = 0.13919260212416618;
    msg.climb_fraction_max = 0.3141292824082528;
    msg.bank_max = 0.4338130835891645;
    msg.p_max = 0.7930468809768337;
    msg.pitch_min = 0.09204983873748818;
    msg.pitch_max = 0.3506768796889087;
    msg.q_max = 0.28479222397954007;
    msg.g_min = 0.4241498953368692;
    msg.g_max = 0.6621844250801;
    msg.g_lat_max = 0.8230659983027692;
    msg.rpm_min = 0.8363967891024757;
    msg.rpm_max = 0.4960613983935481;
    msg.rpm_rate_max = 0.4558703524829957;

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
    msg.setTimeStamp(0.4358001219609403);
    msg.setSource(36862U);
    msg.setSourceEntity(48U);
    msg.setDestination(8456U);
    msg.setDestinationEntity(2U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("CFQGIGRNBTUDIKGMBRRZJSOIQWINYFQAKTZKDGDIAEDHPRYTODRFLPPPRIETCAXOWKEMWVPVEGMIDUXHHWHZLRTFSVBONLWUBVPWOERLKXEFAJERUYBOIJWZDQOVTWJXJFYMYMBSXSGVNLLGJSWSHZNKCQXUVDZYBFHFODCSHANUYLKMZNYAVQPACZCCBQQLGUPMDAYGEPJOXTJTVQBPFYHJENQLMUCGCAZOJSH");
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
    msg.setTimeStamp(0.5894489959313811);
    msg.setSource(62284U);
    msg.setSourceEntity(136U);
    msg.setDestination(6355U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.11504831734185172);
    msg.setSource(9468U);
    msg.setSourceEntity(98U);
    msg.setDestination(5980U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.1456167354886969);
    msg.setSource(20620U);
    msg.setSourceEntity(102U);
    msg.setDestination(37996U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6143060325051638;

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
    msg.setTimeStamp(0.15831960661732303);
    msg.setSource(50820U);
    msg.setSourceEntity(100U);
    msg.setDestination(54204U);
    msg.setDestinationEntity(81U);
    msg.value = 0.12702330131418382;

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
    msg.setTimeStamp(0.8332808787704424);
    msg.setSource(48710U);
    msg.setSourceEntity(203U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(106U);
    msg.value = 0.42829201752040247;

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
    msg.setTimeStamp(0.2782574464120676);
    msg.setSource(11236U);
    msg.setSourceEntity(178U);
    msg.setDestination(49026U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.7346275541511634;
    msg.lon = 0.4074845492056923;
    msg.height = 0.8957638509990908;
    msg.x = 0.3570285954731701;
    msg.y = 0.9723007927770352;
    msg.z = 0.08590316315005753;
    msg.phi = 0.7597773957533105;
    msg.theta = 0.3183163056970386;
    msg.psi = 0.825130644981254;
    msg.u = 0.5068624297503496;
    msg.v = 0.731019465245443;
    msg.w = 0.24596466772590575;
    msg.p = 0.9357747080848989;
    msg.q = 0.5623452855345843;
    msg.r = 0.38955678041123676;
    msg.svx = 0.32927689515145087;
    msg.svy = 0.6001646699238088;
    msg.svz = 0.2868161380818085;

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
    msg.setTimeStamp(0.7771568280013699);
    msg.setSource(48714U);
    msg.setSourceEntity(217U);
    msg.setDestination(43529U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.11900338023711088;
    msg.lon = 0.2155338880141694;
    msg.height = 0.22874706177535298;
    msg.x = 0.6963525483936491;
    msg.y = 0.24782436440022082;
    msg.z = 0.8692689403062299;
    msg.phi = 0.3558766507755612;
    msg.theta = 0.8597168761193301;
    msg.psi = 0.7910021052677568;
    msg.u = 0.6681392903568482;
    msg.v = 0.0027041070508336817;
    msg.w = 0.449173143397425;
    msg.p = 0.8063726448098198;
    msg.q = 0.33240852832871914;
    msg.r = 0.034816265509110766;
    msg.svx = 0.6176962413161766;
    msg.svy = 0.2540584658527414;
    msg.svz = 0.15032752231990976;

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
    msg.setTimeStamp(0.06219698316929245);
    msg.setSource(14016U);
    msg.setSourceEntity(20U);
    msg.setDestination(5999U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.5348031469528273;
    msg.lon = 0.36261494239484227;
    msg.height = 0.8177925521785347;
    msg.x = 0.6874907176892241;
    msg.y = 0.5858380491075026;
    msg.z = 0.25286919028770993;
    msg.phi = 0.22932191327494333;
    msg.theta = 0.378220513109061;
    msg.psi = 0.13225836001843438;
    msg.u = 0.8341104828578805;
    msg.v = 0.3027830617414363;
    msg.w = 0.5113702754221686;
    msg.p = 0.29515732639897585;
    msg.q = 0.33123229337442506;
    msg.r = 0.39780443615058314;
    msg.svx = 0.01149836919278402;
    msg.svy = 0.3379851560416238;
    msg.svz = 0.22919416033669726;

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
    msg.setTimeStamp(0.04284441522417082);
    msg.setSource(3365U);
    msg.setSourceEntity(106U);
    msg.setDestination(48308U);
    msg.setDestinationEntity(18U);
    msg.op = 177U;
    msg.entities.assign("JQYKNNVMVPLWFSUXGUJMDZGFKXBRSZTEGTDOEYWAACRIAGQJDZVUQLFDIUJQMJWVXKZOWWIYOMLKCEUZBPSAGFFMAHQZDCEDNYLBAVMKKSCYPZRBPNHFFG");

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
    msg.setTimeStamp(0.4496087282896186);
    msg.setSource(53647U);
    msg.setSourceEntity(245U);
    msg.setDestination(58812U);
    msg.setDestinationEntity(178U);
    msg.op = 120U;
    msg.entities.assign("BNCYQSEUOHUGSAOCRGSSAAVNYUGQNTHIFFJMUPYLYXEUVWXWOCLXCDLHQATIWJXZGVEMMXCCDZIRKKKPWJVTZIQOADRULSFEEPBQIBKOTXKFWUKHUBPJDSHDAMGVKJLHFKBNSZHEUVYVFYQHJNDDMIXOTNINGOKBVYASQZJIVNRFCJCKRXIQTAXCHJUG");

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
    msg.setTimeStamp(0.6649038770078681);
    msg.setSource(19293U);
    msg.setSourceEntity(21U);
    msg.setDestination(49103U);
    msg.setDestinationEntity(67U);
    msg.op = 87U;
    msg.entities.assign("IEQPJNGWMQNRAXVORONCAJKZKALDOIQVWWPGFHROJWYCZLXBJWENPGCJDOCXLPLLFKXUZNLXUBJ");

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
    msg.setTimeStamp(0.00954723119875478);
    msg.setSource(60175U);
    msg.setSourceEntity(151U);
    msg.setDestination(18456U);
    msg.setDestinationEntity(207U);
    msg.type = 37U;
    msg.speed = 7394U;
    const signed char tmp_msg_0[] = {95, 83, -120, 26, 43, 85, 95, 70, -11, 61, -122, 83, 44, 98, -45, 29, -39, 48, 4, 69, -33, -58, 4, 56, 122, 110, 38, 86, -30, -98, -14, -20, -44, 42, 97, -50, 13, 1, 118, 60, 99, -126, 113, 12, 19, 51, 51, -122, 40, -118, -103, 78, 82, 48, 2, -124, 2, 34, -16, 7, -94, -120, 11, 26, 109, -119, -111, -127, 57, 100, -92, 73, -10, 44, 27, 83, 109, -2, -6, 60, -22, -91, 74, 39, -127, 52, 78, 61, 21, -27, -11, 69, -79, -11, 119, 15, 21, 100, -33, 102, 3, -2, 14, 44, -56, 5, -13, -34, -29, -123, 114, 82, 10, -125, -45, -123, -28, 25, 40, 27, -23, -122, -34, -75, 1, 68, 23, -107, -75, -27, -13, 124, -54, -62, -63, -59, 34, -71, -100, -108, 32, -123, 56, 2, 102, -42, 97, -10, -74, 76, -44, -78, -126, -85, 35, -67, 1, 41, 73, -87, -38, 66, 65, -26, 122, -39, -72, 38, 1, -65, -58, 94, 19, 103, -14, 49, 40, 13, -34, -103, -18, 53, -119, -74, -60, 115, -25, 16, -71, 35, -15, -15, -112, -75, 105, 75, -62, -79, -94, 86, 41, 101, -42, -58, 19, 21, 52, -36, 57, 2, -6, -59, 122, 80, 58, 49, 4, 35, 43, 4, -61, 21, -13, -51, -118, 67, -26, 77, 19, 26};
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
    msg.setTimeStamp(0.016787181769018944);
    msg.setSource(16017U);
    msg.setSourceEntity(148U);
    msg.setDestination(6627U);
    msg.setDestinationEntity(60U);
    msg.type = 177U;
    msg.speed = 11402U;
    const signed char tmp_msg_0[] = {-14, -117, 94, 48, 4, 3, -7, 15, 76, 68, -100, -65, -98, 73, 8, -55, -56, -42, -34, 87, -96, 101, -124, 103, -41, 100, 10, 107, -68, -106, 77, -16, -62, -73, -121, 47, -25, 86, 106, -128, -115, -77, -101, 22, 65, 28, 118, -66, -11, -126, 93, 98, -20, 6, 27, 89};
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
    msg.setTimeStamp(0.9504097760116198);
    msg.setSource(38655U);
    msg.setSourceEntity(60U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(162U);
    msg.type = 67U;
    msg.speed = 52306U;
    const signed char tmp_msg_0[] = {-34, -99, -90, 61, 37, -44, 46, 113, -3, 114, 113, 125, -67, 86, 114, -56, 23, -83, -25, 113, 106, -101, -116, 4, -86, 78, -14, 112, -54, 100, 15, 18, -127, 61, -112, 68, -91, -94, 74, 44, -115, 71, -54, 107, -33, -30, 57, 98, 97, 80, -15, -39, 107, 65, -21, 66, 32, 34, 89, -54, 71, 31, -57, 120, -18, -49, 90, -105, -26, 109, 60, -77, -12, 65, 74, 62, 0, -48, -62, 100, 3, 3, -53, -66, 124, -24, -104, -44, -57, -55, 96, -91, -118, 104, -15, 52, 37, 7, -67, 116, 55, 111, -94, -94, -115, -96, -21, 72, -83, -124, -18, 78, 37, -39, 48, 84, -88, 115, -22, -96, 118, -27, -119, 77, -85, -97, 57, 77, 22, 46, -12, 14, 69, -93, -84, -21, -73, 119, -5, -28, -118, -9, 75, 15, -27, -90, 92, -56, -97, 55, -26, -119, -63, -79, 28, -46, 118, -37, 120, -114, 104, -33, -77, 38, -10, -44, -91, -95, -50, 107, -7, -81, 90, 40, -51, -91, 62, -24, -50, 66, 104, 32, 2, 61, -6, 119, -100, 66, -83, -26, -72, 48, 19, 7, 44, 81, -53, -40, 72, -40, 12, -92, -54, 20, 122, -66, 69, -23, -27, 14, 78, 117, 59, -102, 35, 100, -122, 93, 107, -4, 113, -128, -39, -86, -36, 60, 32, -128, -15, -45, 50, 63, -45, 118, -29, -124, 90, 18, -33, -34, -108, 45};
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
    msg.setTimeStamp(0.7040042986902929);
    msg.setSource(65431U);
    msg.setSourceEntity(73U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(15U);
    msg.op = 218U;
    msg.tas2acc_pgain = 0.8143615919133939;
    msg.bank2p_pgain = 0.6164145728618246;

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
    msg.setTimeStamp(0.6117495997603538);
    msg.setSource(43464U);
    msg.setSourceEntity(78U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(139U);
    msg.op = 174U;
    msg.tas2acc_pgain = 0.9355253921775806;
    msg.bank2p_pgain = 0.7379660806530711;

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
    msg.setTimeStamp(0.16937198123192776);
    msg.setSource(64009U);
    msg.setSourceEntity(95U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(119U);
    msg.op = 86U;
    msg.tas2acc_pgain = 0.5069854079625892;
    msg.bank2p_pgain = 0.524518034824175;

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
    msg.setTimeStamp(0.6072180552593813);
    msg.setSource(53583U);
    msg.setSourceEntity(187U);
    msg.setDestination(36052U);
    msg.setDestinationEntity(44U);
    msg.available = 1309245905U;
    msg.value = 194U;

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
    msg.setTimeStamp(0.16908579478433095);
    msg.setSource(11392U);
    msg.setSourceEntity(138U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(21U);
    msg.available = 3121035082U;
    msg.value = 112U;

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
    msg.setTimeStamp(0.6294289215346195);
    msg.setSource(48508U);
    msg.setSourceEntity(196U);
    msg.setDestination(45874U);
    msg.setDestinationEntity(60U);
    msg.available = 3474819438U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.5936513690182437);
    msg.setSource(32762U);
    msg.setSourceEntity(4U);
    msg.setDestination(30363U);
    msg.setDestinationEntity(225U);
    msg.op = 13U;
    msg.snapshot.assign("ELOHOINGWBCOHRVKASVBYOKIDFCXWJHIBQIXLVRIBGZWUJDDTLXQNIUTDBCYEQMTFCGCFZGJDLQDWKXPZKLPVDPMGOLVWXGLVAANWENAROSXJRXTZTAKNMZGQJWSGUHCYEHFBBPMEYKNQPCJSLPASQAUTQPJUFSPKDVRYNZSOZVBKGYJIZVEXQYTSVWFCHYAPZBJWLDUNMKWGHHRTIRMHXLRFMFOFERBCDESOHAUXIZSEUMKNCAMUPITM");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("QCTGYGZUAKMWHQCOPXDWWMYBRBDCULIRAECVYZNLHREHDDBIXFDHSKSYIPWTVTCLYZPCIENQFG");
    tmp_msg_0.type = 37U;
    tmp_msg_0.op = 197U;
    tmp_msg_0.group_name.assign("LLSAZDVKTVXNZRHSUITOSCQEQLJJLWDSTRGVPBRXBHUFXLZKWZKQVJETHPWJCVNNRIETQEMRPNQAJCIJWTHEOIRSWKBLPQXJALYKSXHR");
    tmp_msg_0.plan_id.assign("SNYFLJZGOUAPNOPHEUVCMZFPCKNFNFQIAOPXUMMGCYELCUZAJAUXKQKZTIGVRDJRXVDFJZUPJWGZIMGYQLHFKCFQGSYHQBDGDJHQWNWXXPVVLJYKHRKBQFIEBBZSWNDYGTAAUBSQMXCOTRJKTQDCUGPIJWLKLI");
    tmp_msg_0.description.assign("DTASGNFJUSCYGVIXNMYJLZDKFSJRQMYLUULUVYPKAETCGTQWDPGRTBZGIYKNRDQOTFRFCBJSBRCGCPUUIPMMQSYBIWPKEJXGZRMNBIMKZXFXENQWVQVHEBCZVVIJTWRAMWZOFGNOKXHGWXHELWKJYSTMKTAJGOADUNVEZVBPICPFEXDHSUXEIHNQDJQQOALHLLBSWFYEFHLORZ");
    tmp_msg_0.reference_frame = 143U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 50216U;
    tmp_tmp_msg_0_0.off_x = 0.0755886038125444;
    tmp_tmp_msg_0_0.off_y = 0.8852941147661944;
    tmp_tmp_msg_0_0.off_z = 0.34994941108408717;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.7879218378876163;
    tmp_msg_0.leader_speed_min = 0.1249309282265445;
    tmp_msg_0.leader_speed_max = 0.335769226068552;
    tmp_msg_0.leader_alt_min = 0.9813657111799342;
    tmp_msg_0.leader_alt_max = 0.8328159462633044;
    tmp_msg_0.pos_sim_err_lim = 0.0017392426774852643;
    tmp_msg_0.pos_sim_err_wrn = 0.9762790296974424;
    tmp_msg_0.pos_sim_err_timeout = 38492U;
    tmp_msg_0.converg_max = 0.7436560469038004;
    tmp_msg_0.converg_timeout = 61684U;
    tmp_msg_0.comms_timeout = 37455U;
    tmp_msg_0.turb_lim = 0.6476419192383651;
    tmp_msg_0.custom.assign("TYZSKGKXXHRQENPGADFWGPUWROTCBRLKLOPCBGXHFEVMRVNQKJVCVSLSFQYAZVJTZUJICSXNUWNSTQMONBBODWYMTIBQDMAUOVFDCIUGMOXNHYRBWOXUQAYFJQVSVZSWGIDMYCWLWHIKLCCTPZJDGYEEHMQMKRAUBGZRQPDSEZATWNSFNXLKKTCKDXLFENVJZHJMAOBFHPRZHHIAOPIWIUHECIEYFAUJMTLPPBYEAYRFZJXOQGGTDXLVBNJR");
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
    msg.setTimeStamp(0.2481061984808517);
    msg.setSource(37891U);
    msg.setSourceEntity(83U);
    msg.setDestination(58466U);
    msg.setDestinationEntity(125U);
    msg.op = 65U;
    msg.snapshot.assign("AYRAZOUBETOFZWBHKPVSKPUDSFMVYGACDQOIEUUGWRANGHJLSZZTMFKZCDH");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 18458U;
    tmp_msg_0.lat = 0.4387252159355083;
    tmp_msg_0.lon = 0.7039676064832688;
    tmp_msg_0.z = 0.5607792857764494;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.speed = 0.7541405315317363;
    tmp_msg_0.speed_units = 43U;
    tmp_msg_0.custom.assign("FLMGUHEWGKUMCBUSERMBEJEZYPAVYFTSXRWFWTSNLHPXPIXSTXOPCWINZOIAUZJPWUICQQIQZTEBFQVWBHMJZPDSRMRSKOXCIMBPKQSRHVRKDNAUWNLESDZXGIYQHXNKUBZCLJMYCZHLJFQCNODVVZBDLDUGODGAOFJQEFGVQGFOWYGUBRXBKGOI");
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
    msg.setTimeStamp(0.43703172542828417);
    msg.setSource(3757U);
    msg.setSourceEntity(208U);
    msg.setDestination(56494U);
    msg.setDestinationEntity(196U);
    msg.op = 175U;
    msg.snapshot.assign("HSYEWCZUTNDBGPAWUDLVBSGYERLGQAKLPIHWTH");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 196U;
    tmp_msg_0.htime = 0.7559953559469852;
    tmp_msg_0.context.assign("ZOQCTDBDJYMORIFIUSUGZOEDQFWJ");
    tmp_msg_0.text.assign("GYKNZMRFPWTEBFSHZVMKBONUUG");
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
    msg.setTimeStamp(0.5521375858925723);
    msg.setSource(41795U);
    msg.setSourceEntity(229U);
    msg.setDestination(25109U);
    msg.setDestinationEntity(188U);
    msg.op = 248U;
    msg.name.assign("VXIEJXOTBFMVBHMGRBXJALRDNSNWZJOZEPZUWXYOQRSFCLAOKTKQSXZNFLRSQKFULODWSDZWPVDDHVOOWIQKIXTCYAPVBJHZANQZCDQZSEGCHGJGCTHYABQLRTNBGFAHEGPYKWIRMYMLKGXWKKCRCMLTMKPIQUDNETOIAGCCGWUIVNYJTBMEAJHPIESDYAFBDYRPJARJTLPHUENVGFVIESIXLFQXKFUOCSLHUQPBWWMRUSD");

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
    msg.setTimeStamp(0.3067368825565314);
    msg.setSource(48813U);
    msg.setSourceEntity(70U);
    msg.setDestination(40211U);
    msg.setDestinationEntity(238U);
    msg.op = 187U;
    msg.name.assign("QVKDAGNEBEZHBOPAGDMOGGQAGBAZMPMUBFRSPGPIYONWFCVXBK");

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
    msg.setTimeStamp(0.6567547871874553);
    msg.setSource(52730U);
    msg.setSourceEntity(228U);
    msg.setDestination(15803U);
    msg.setDestinationEntity(86U);
    msg.op = 156U;
    msg.name.assign("YNSYJLDOSWTVDJWEUQUWDVDXRGTTKAVTOZEPPQUWHFHADJPEBMJNQXRPHHXNFNKQFSMSBLPMEGUKDLKXMOLIRVAIWWAFCTGXFAGNZCYOZJDBGI");

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
    msg.setTimeStamp(0.1780555323067351);
    msg.setSource(4596U);
    msg.setSourceEntity(171U);
    msg.setDestination(45645U);
    msg.setDestinationEntity(85U);
    msg.type = 10U;
    msg.htime = 0.7992648022214729;
    msg.context.assign("FBPXLQIZRVDUBXJAJWECCYEICDPTSVAHEDOGPQAFBIKDMJKHGSIUMJFEWZSWGJUCASEOXSLBYFQZVNMMUXKSFCEGUOHYQHXVGTWKRHCZINGBZKQHUVUHIWRAXQQADRTOVJCRYRKPBWGFBLAFPLJLMJHLEL");
    msg.text.assign("JKQNVWPAVRRREKXEVWGHUZUPNRGMKEVDZGCUSOIORTCCXNGTXFMONAJFYBRPEHWNSMJEWZVZZHOQRELOIOKKOAMMQATDUBGTFUKGYIVPWXFGWWCPHNJDHBCJIESBUNUFDTQWZZOSGSLQTBYYTPBVYNLLAPJLQMHOMGGQBDAQDIXCBEIMDFVDSYKATVSDFEZIYFLUMPYXHIAAKCCMCL");

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
    msg.setTimeStamp(0.2698224406681857);
    msg.setSource(28026U);
    msg.setSourceEntity(86U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(122U);
    msg.type = 1U;
    msg.htime = 0.9304375664930868;
    msg.context.assign("UUIGRGHMMNGHQXQLPXJPPGOOOYUXFGJWAECAXNYBWHIMTTMADIFFRYEJEHLDOLQDPTDYZAHIBSKIKDFLKLGBRUBLUHHUOKFIPLXNXZMDMCVBOTWQUEBJWNXVOZFNSANFDHJACPSPRSPKYETUZVKNZCFQYKEDCOHWZCDTLWRRTEOSQTEFZWCATQJGYWIRNNXHWMMBVZRMUWAROCXJJUIBQGYVQSISZNQGVG");
    msg.text.assign("ZEHQHGNLEVLSCPMDGHFRCIVMYBJELWVQBAGVZYERFNJJIYTJDIYQRNWWKEUWXAUBDRXBSLBZKPMOSZRFXVKGUJBRYDDBDDETPPVAVCZSUAKNYXJOEVTHGFRQOIUQTZZAPQWVJXZSHTPGEKLVICMMOUYBRFRLEXAFCNWSIUOKBNUSCWAKZAFFXCLIZUOMFPQPMWSNLKTLTXBCYIDHQUJOG");

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
    msg.setTimeStamp(0.40466081681657373);
    msg.setSource(9590U);
    msg.setSourceEntity(76U);
    msg.setDestination(39739U);
    msg.setDestinationEntity(33U);
    msg.type = 144U;
    msg.htime = 0.44419060068562854;
    msg.context.assign("VRNUPHVXJXHIXXWMMVBYKCFQQGSSTZYKPZFZZIPF");
    msg.text.assign("VSXDFWTRONEJCTTAFUUUZYACTMDHCYHXISLEJYGFARBGPMLR");

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
    msg.setTimeStamp(0.14188407612972165);
    msg.setSource(2425U);
    msg.setSourceEntity(240U);
    msg.setDestination(14226U);
    msg.setDestinationEntity(51U);
    msg.command = 109U;
    msg.htime = 0.6993749735419663;

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
    msg.setTimeStamp(0.09655007193994825);
    msg.setSource(21118U);
    msg.setSourceEntity(8U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(8U);
    msg.command = 147U;
    msg.htime = 0.001057696163979771;

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
    msg.setTimeStamp(0.10048674755643006);
    msg.setSource(3054U);
    msg.setSourceEntity(107U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(179U);
    msg.command = 94U;
    msg.htime = 0.4142842641539124;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 33U;
    tmp_msg_0.htime = 0.6806846719485883;
    tmp_msg_0.context.assign("XVQLXPBSNZNHUAEVSCHUYRYXTGEFTQFBTKDFRMQMLYXKAATXTKZLCZBODMPZOQDTRPXYGMIOELSVGKHKMNVFWQQPRFJRTPVGJUIJDTWVUCZBHWFKSMFKAFJRESONSOPGFPGGHWKHPGMYCWCJNWYQNVAEULEARVHTYJZEXCMWEDELAVIJCOO");
    tmp_msg_0.text.assign("SVUGKGRZFESTPSLNXCJMJVTUUFPQUFCDRARNQXOOXUOKMNQMCFODZQRZVJHOXBAYBTAAVLLSASWOWGIIIPSXEYRWCIJHKZLYWGEEYTJWLIOPENHGGCCKQBMQBIJWFPAFIYOMJEQPCORNTLDKEJYSHTAXPKQXWNWRNVDDZCHUAXPGULCGIENYVTYTTKNJ");
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
    msg.setTimeStamp(0.15365807903123385);
    msg.setSource(1029U);
    msg.setSourceEntity(55U);
    msg.setDestination(21328U);
    msg.setDestinationEntity(128U);
    msg.op = 123U;
    msg.file.assign("GRHZIBIUECHBEYHSEVKTHAPWVBVTBWDEWFGZBFEVAYZRTOUOFZJMUQDAOGRXOERVRKZSDWQUNSOBLZCLLWUXSTYDAXJAUSKCPEKURSMAUJLYGCNCXNMDHHISPMLVXMQBNIQLCBSNRLDJLSGFHWPFCITJRVAKCETKKUPGUMBQKITRPWVTMPYCLJCMZYDZDAX");

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
    msg.setTimeStamp(0.3338379667178273);
    msg.setSource(33132U);
    msg.setSourceEntity(166U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(103U);
    msg.op = 200U;
    msg.file.assign("SNBWGXUSWJQICTCYVZKMHGWJCUGTDRWUQHSCJNLNMLFYBGQNPFUJSJEXDVDVLQYVLDTHROSRPCPEOWANPPVAQCRNOXAAMZTEIETXWHCRYGBRMUDZKHDKURZMTBXHMSTDKDJUFBFJBGSCSGKQHYWEIVOXXPMOEJILBEYHXGKEFORQUJZZBYVZSFHZQMHFS");

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
    msg.setTimeStamp(0.9920585373041928);
    msg.setSource(9305U);
    msg.setSourceEntity(110U);
    msg.setDestination(1945U);
    msg.setDestinationEntity(3U);
    msg.op = 179U;
    msg.file.assign("ZCJMKBRATRUAFKGNDTQIWIJWKBMKMDVJTVKFFWSLGCIQAAEKXDJJDVNVAPCPRGMSOKELEMLHBCWTZXEEFOOWLXRNKFZUFCQXSQYUEVGCYHFSXHRWPIWSVSFH");

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
    msg.setTimeStamp(0.45958240945843676);
    msg.setSource(56993U);
    msg.setSourceEntity(183U);
    msg.setDestination(17486U);
    msg.setDestinationEntity(188U);
    msg.op = 95U;
    msg.clock = 0.6345772806141248;
    msg.tz = 23;

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
    msg.setTimeStamp(0.043799735164824605);
    msg.setSource(59187U);
    msg.setSourceEntity(180U);
    msg.setDestination(13243U);
    msg.setDestinationEntity(149U);
    msg.op = 6U;
    msg.clock = 0.1962391331807284;
    msg.tz = 24;

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
    msg.setTimeStamp(0.988098772172194);
    msg.setSource(19248U);
    msg.setSourceEntity(152U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(86U);
    msg.op = 229U;
    msg.clock = 0.3145638507165436;
    msg.tz = 45;

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
    msg.setTimeStamp(0.02684689597131651);
    msg.setSource(46658U);
    msg.setSourceEntity(59U);
    msg.setDestination(11865U);
    msg.setDestinationEntity(143U);
    msg.conductivity = 0.7515704560528247;
    msg.temperature = 0.1567513261520147;
    msg.depth = 0.706876310183696;

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
    msg.setTimeStamp(0.8434574729050219);
    msg.setSource(40292U);
    msg.setSourceEntity(220U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(84U);
    msg.conductivity = 0.3971083420540922;
    msg.temperature = 0.20280856466126573;
    msg.depth = 0.967167277491193;

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
    msg.setTimeStamp(0.7456742863675667);
    msg.setSource(12283U);
    msg.setSourceEntity(138U);
    msg.setDestination(36460U);
    msg.setDestinationEntity(76U);
    msg.conductivity = 0.4614619338171082;
    msg.temperature = 0.9070751354579857;
    msg.depth = 0.0931277689342459;

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
    msg.setTimeStamp(0.9890701058699269);
    msg.setSource(31290U);
    msg.setSourceEntity(36U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(79U);
    msg.altitude = 0.9584758219969576;
    msg.roll = 65175U;
    msg.pitch = 49551U;
    msg.yaw = 43826U;
    msg.speed = -9096;

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
    msg.setTimeStamp(0.5620734045121427);
    msg.setSource(13875U);
    msg.setSourceEntity(139U);
    msg.setDestination(59121U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.35777982218660853;
    msg.roll = 40713U;
    msg.pitch = 56663U;
    msg.yaw = 36301U;
    msg.speed = 4941;

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
    msg.setTimeStamp(0.7525807960492974);
    msg.setSource(13372U);
    msg.setSourceEntity(217U);
    msg.setDestination(8315U);
    msg.setDestinationEntity(25U);
    msg.altitude = 0.9577232731425032;
    msg.roll = 2114U;
    msg.pitch = 49055U;
    msg.yaw = 28923U;
    msg.speed = 17994;

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
    msg.setTimeStamp(0.44875167831528484);
    msg.setSource(2512U);
    msg.setSourceEntity(87U);
    msg.setDestination(35165U);
    msg.setDestinationEntity(154U);
    msg.altitude = 0.576496493949281;
    msg.width = 0.5566493649957791;
    msg.length = 0.1919107122443805;
    msg.bearing = 0.09196094852341152;
    msg.pxl = 8962;
    msg.encoding = 203U;
    const signed char tmp_msg_0[] = {-67, 76, -45, 31, -12, -48, 36, -88, 17, -96, -21, -39, -124, -29, -96, -40, -121, -68, 29, 19, -5, 16, 54, -104, -122, -53, 63, 66, -2, 42, -99, -106, -3, 21, 58, -34, 37, 26, -115, -94, 36, 125, 111, 81, -62, -126, 86, 85, 64, 9, 123, 115, 6, -12, -44, 108, -54, 24, -11, 3, 75, 42, -86, 55, 85, -39, -15, -102, 54, -50, -7, -18, 2, -85, 82, -118, -75, -81, 101, -9, -42, -119, 51, -53, 59, 2, 44, 87, -6, 21, -62, -58, 74, -16, -48, 45, 57, -65, -25, -97, 53, -78, 69, 46, 13, 22, -44, -104, -62};
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
    msg.setTimeStamp(0.6603274694243465);
    msg.setSource(4724U);
    msg.setSourceEntity(243U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.2633433473482074;
    msg.width = 0.8055376575045781;
    msg.length = 0.9902312889325758;
    msg.bearing = 0.8701905472384563;
    msg.pxl = -26474;
    msg.encoding = 222U;
    const signed char tmp_msg_0[] = {-88, -5, -5, -29, -127, 115, -34, -116, -25, 54, 113, -16, 27, -105, -76, 85, -100, 19, -8, 62, 6, 52, -90, 91, -13, -67, -52, -100, 17, 44, 11, 56, 64, 37, 100, -64, -46, -116, -111, -114, 80, 98, -78, -53, 38, -34, 94, -42, 14, -57, 64, 4, -120, 98, 24, -107, -122, -71, 70, -98, 32, -120, 124, -74, 15, -44, -5, -16, -47, -109, -50, 30, -34, 82, 3, -74, -120, 29, -39, -15, -14, -106, 28, -75, 64, -12, 25, -76, 65, 94, 80, -73, 111, 69, -34, -55, -74, 59, -29, 36, 74, -32, 122, -85, -78, -62, -42, 117, -105, -126, -127, 27, 69, -103, 99, 107, 35, 31, -126, 68, -15, 113, 91, -76, -39, 41, 45, -27, -26, 75, -87, 58, 79, 15, -44, 108, -81, -85, -41, -44, 116, -93, 14, -41, 100, -57, -52, -21, -87, -77, -96, -75, -72, 32, 18, 31, 23, 61, -63, 109, -90, 31, 74, -62, 51, 64, -59, 83, 70, -115, -50, -74, 33, -42, -98, 102, -62, -82, -7, -102, 52, 16, -88, -19, -60, -58, 100, -124, 120, -59, 90, -113, 34, -88, -18, 3, 59, 13, -64, 116, -53, 77, -50, 1, 18, 79, -62, -26, -23, 53, 33, 97, -14};
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
    msg.setTimeStamp(0.36057332112147567);
    msg.setSource(21226U);
    msg.setSourceEntity(55U);
    msg.setDestination(52620U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.45214262445163533;
    msg.width = 0.4582336852974048;
    msg.length = 0.41226629103688284;
    msg.bearing = 0.2361445891385615;
    msg.pxl = -15502;
    msg.encoding = 233U;
    const signed char tmp_msg_0[] = {76, 65, -104, 103, 67, -26, -44, 63, -123, 83, 5, -38, 103, -51, 99, -1, 49, -48, -29, 74, 118, 109, 106, -7, -105, 124, -64, 5, 94, -24, -128, 5, 89, -93, -63, -96, -103, 63, 68, 106, 8, 63, 122, -3, -56, -50, -53, -61, -22, -73, -100, 111, 42, 25, 94, 98, 82, -70, 5, 45, 8, -86, 22, 40, -69, 20, -128, -111, -14, 78, -44, -43, 109, 51, 11, -39, 122, -35, 36, 106, -75, -13, 63, -12, -11, 70, 28, 112, 85, -77, -42, 62, 59, -87};
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
    msg.setTimeStamp(0.87621471615212);
    msg.setSource(3503U);
    msg.setSourceEntity(246U);
    msg.setDestination(63718U);
    msg.setDestinationEntity(96U);
    msg.text.assign("DSGGZGHHXLCYPXQRXDHGKDDWHQCUSCCBQHWYZEJBFIRXNJFZYKVDKTLTEAJTFBOGOVYKABLCYLSWIMCOPJZRYFLHIUWMXVETQZVRAFKWMMOMSTKGXBBUHYMNDEJEQBJXILRBUDVZCSPIAWWRWPGEONJNIAAPFKMXMIOCIWVEORAQDKETTUKNCOVZEALINHJSFUIVWPPCPRDDLQEHAQNTXGZOMRSKYYPQTOANFUBTSUUJSQHMFU");
    msg.type = 62U;

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
    msg.setTimeStamp(0.47520748885542397);
    msg.setSource(58617U);
    msg.setSourceEntity(190U);
    msg.setDestination(26509U);
    msg.setDestinationEntity(29U);
    msg.text.assign("YOPHTDDYMCRGFAHXEKKNFSNRUUFLKFIEFMNZDAYYJKSZCPIMUQNJQXBHQNYXRRBJNVTQHQXQGTGVCZOSKBUJUYPLALWMBJMVWXEDDQIDOOREZBLMDHDNUJSGRAECXOYXKIIBUZQNCLXPOJTSWAYRXRECZPLWHEASIWALGJMPMSOSXCGGFMHEVMHCIKDGKABGZPKKO");
    msg.type = 39U;

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
    msg.setTimeStamp(0.3292562901560907);
    msg.setSource(29163U);
    msg.setSourceEntity(23U);
    msg.setDestination(38422U);
    msg.setDestinationEntity(166U);
    msg.text.assign("QRKPOUKFLRQVVVPCEQAZBNJKZFSRWJYPF");
    msg.type = 194U;

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
    msg.setTimeStamp(0.14709678511922664);
    msg.setSource(25011U);
    msg.setSourceEntity(187U);
    msg.setDestination(48337U);
    msg.setDestinationEntity(235U);
    msg.parameter = 250U;
    msg.numsamples = 60U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 49441U;
    tmp_msg_0.avg = 0.5015970478445541;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6563435106892358;
    msg.lon = 0.060442306756422814;

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
    msg.setTimeStamp(0.953608071096608);
    msg.setSource(52991U);
    msg.setSourceEntity(70U);
    msg.setDestination(15321U);
    msg.setDestinationEntity(119U);
    msg.parameter = 109U;
    msg.numsamples = 50U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 27964U;
    tmp_msg_0.avg = 0.2610066502803874;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.41377193199033646;
    msg.lon = 0.8015943254589527;

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
    msg.setTimeStamp(0.6701603564866266);
    msg.setSource(25538U);
    msg.setSourceEntity(21U);
    msg.setDestination(8712U);
    msg.setDestinationEntity(184U);
    msg.parameter = 203U;
    msg.numsamples = 53U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 48073U;
    tmp_msg_0.avg = 0.5624450536361186;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.13820249369005555;
    msg.lon = 0.9047635989086608;

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
    msg.setTimeStamp(0.43631147531399905);
    msg.setSource(41717U);
    msg.setSourceEntity(160U);
    msg.setDestination(25910U);
    msg.setDestinationEntity(29U);
    msg.depth = 59479U;
    msg.avg = 0.47183056815739133;

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
    msg.setTimeStamp(0.028920063613280478);
    msg.setSource(16456U);
    msg.setSourceEntity(1U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(184U);
    msg.depth = 45496U;
    msg.avg = 0.43033601464408067;

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
    msg.setTimeStamp(0.024581071330497917);
    msg.setSource(31687U);
    msg.setSourceEntity(107U);
    msg.setDestination(19849U);
    msg.setDestinationEntity(6U);
    msg.depth = 19227U;
    msg.avg = 0.8827455841538169;

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
    msg.setTimeStamp(0.63401148882765);
    msg.setSource(8767U);
    msg.setSourceEntity(138U);
    msg.setDestination(21716U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.5674535286303726);
    msg.setSource(13371U);
    msg.setSourceEntity(204U);
    msg.setDestination(23822U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.2776734982564607);
    msg.setSource(6605U);
    msg.setSourceEntity(208U);
    msg.setDestination(56163U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.8632574961068006);
    msg.setSource(11751U);
    msg.setSourceEntity(46U);
    msg.setDestination(27227U);
    msg.setDestinationEntity(27U);
    msg.sys_name.assign("WYDANWCNTNJJUMPTRBLIKHBDFRVIVOERRNSREMXYUOPXKMODAYTGJJFEPYRZKWBHWYCQEQLDCLMTTHKSOJDEMUSSXYVATBJLSPIEFAGPUBGZWKTESARFXZGFHIZKGUZUNQXYLWCUZZUOPQOFTYCHCEEASTXUJAVSCYUNNDWAIAJZXFHDFNFXZBPPRHAN");
    msg.sys_type = 216U;
    msg.owner = 39460U;
    msg.lat = 0.7024893271777938;
    msg.lon = 0.2417326949053038;
    msg.height = 0.5901863957753505;
    msg.services.assign("UXSVHRNMQZFJIEHQZBBUKKFMITCGALEHOGJVBGMBKCWZPAAOJLJOVCJHRNQSPJUAVULBKXUTDWREZNALUZMLKASWMOUEHFDMSKVGDKVYQNTEIYAGFSPWOVG");

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
    msg.setTimeStamp(0.9693225720872224);
    msg.setSource(54748U);
    msg.setSourceEntity(218U);
    msg.setDestination(33972U);
    msg.setDestinationEntity(67U);
    msg.sys_name.assign("STGRRHCIMYFWZSOBNWZHHZLXLRPNOSRHIRGCEFBHGTCNDEABDQNPDHJEKVAKVLAGFPVGSTXFXKOYAZPKTDNAKRSQMPUEQCDDQLGFOTNLZYGQWIQKVJVWJZJHFWFXBGUKHTYVVUYDWZPSZZYFVCMNHCDWATMXMMYWHKBQLEMUOUDNIALUUJOXFSMMUJGIXPBEBZVCBQDIIOPSLEJARRYGEJSOVRBLRACQN");
    msg.sys_type = 10U;
    msg.owner = 39638U;
    msg.lat = 0.14010076644103553;
    msg.lon = 0.677601800180761;
    msg.height = 0.5242259213916914;
    msg.services.assign("IQUMPEVPEZRSOAWHNTRDHTKLVBLAKXULFDDWQRBRTPKXARICSYUGMUKVXBWLQXSBMPNWELKCWIOMBPBYVKOPJVJTVZCETREQQHWOFSXFHH");

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
    msg.setTimeStamp(0.01923122412685563);
    msg.setSource(51172U);
    msg.setSourceEntity(15U);
    msg.setDestination(10413U);
    msg.setDestinationEntity(144U);
    msg.sys_name.assign("KOYXRQQEMIYAWJVUIFYPDOGDFNCSCRSGQVBPPJETORKAMBXBAQXMLVHSZG");
    msg.sys_type = 0U;
    msg.owner = 31774U;
    msg.lat = 0.27834146826570916;
    msg.lon = 0.9297680765536799;
    msg.height = 0.50979852216504;
    msg.services.assign("DYYDHZHLMHRKMGFILGIRXUEUSBDPYFMJQLWUDRVJUHXAFPVFPPTNMLJQTCEXRQANYIOTNDMZSJIZNNOPGQOJNSSOJRSBFMOCCGUSSETRSGWFXTYUHQQPBPZAEAVABVKDXLLHBHUKITXRVFCYRFKLAOZDNEUCLOAEGMVUWWVHREBQOCJOZTOKSEKFJJBNIMELNLKCXZDZBYCXQVWMIKCQQAVPRWEAXAUGIGPKWYGZYPBKTNJIDTYBIWHW");

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
    msg.setTimeStamp(0.5779416246011132);
    msg.setSource(11810U);
    msg.setSourceEntity(82U);
    msg.setDestination(42514U);
    msg.setDestinationEntity(211U);
    msg.service.assign("UUYLZYHWDGDTXMEVHUSRQLJNTQGWOHBDBZCACWRMQURJIYKBALZMXHMDCVCAMZWFRC");
    msg.service_type = 35U;

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
    msg.setTimeStamp(0.5445014556744459);
    msg.setSource(43707U);
    msg.setSourceEntity(194U);
    msg.setDestination(2057U);
    msg.setDestinationEntity(93U);
    msg.service.assign("GUCBDLRPNHYYWBFLMOSIBROAFDSTPIROYJFLBARTAUKZBFGTPIEPOYSKPEFENZKSGKMJSPIWCJVBDWXKUJNCCXCIUVNFZTLUGDCQNOUKFZHDQMAWQYEXTSZFRBQGHETRBFBQPCGMOXUPAEDVJEZXNYGJNKH");
    msg.service_type = 40U;

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
    msg.setTimeStamp(0.6097938289156086);
    msg.setSource(42931U);
    msg.setSourceEntity(157U);
    msg.setDestination(6105U);
    msg.setDestinationEntity(24U);
    msg.service.assign("SEZILSSAEPLXMAEOKRWQTXAVLBMCWOWLJGXRVNENMTXFXDAYUGYFHVIPUSUSBBDPFQKJRZFEACJRNOOFZUGXRIFXSNWLBVIZODRMUHKUATSJWWGQVMQKKHKWVTYZLKEBRJCOIYTYUJPNBHEYM");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.040764426035416634);
    msg.setSource(17224U);
    msg.setSourceEntity(42U);
    msg.setDestination(25396U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9460006338381947;

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
    msg.setTimeStamp(0.7829584123773409);
    msg.setSource(4062U);
    msg.setSourceEntity(180U);
    msg.setDestination(32924U);
    msg.setDestinationEntity(172U);
    msg.value = 0.905573706835224;

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
    msg.setTimeStamp(0.5558009660768422);
    msg.setSource(60967U);
    msg.setSourceEntity(140U);
    msg.setDestination(40994U);
    msg.setDestinationEntity(239U);
    msg.value = 0.11521749766112033;

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
    msg.setTimeStamp(0.6306897606137744);
    msg.setSource(54575U);
    msg.setSourceEntity(15U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(51U);
    msg.value = 0.04835567223347115;

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
    msg.setTimeStamp(0.51781504064981);
    msg.setSource(39894U);
    msg.setSourceEntity(193U);
    msg.setDestination(30680U);
    msg.setDestinationEntity(132U);
    msg.value = 0.748697268576649;

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
    msg.setTimeStamp(0.19018058702007667);
    msg.setSource(16231U);
    msg.setSourceEntity(138U);
    msg.setDestination(3708U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8745082720272626;

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
    msg.setTimeStamp(0.29974618015796173);
    msg.setSource(36253U);
    msg.setSourceEntity(139U);
    msg.setDestination(46019U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8041164788048977;

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
    msg.setTimeStamp(0.3695854315413579);
    msg.setSource(59945U);
    msg.setSourceEntity(63U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(70U);
    msg.value = 0.8036201633585145;

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
    msg.setTimeStamp(0.9721149338875008);
    msg.setSource(50712U);
    msg.setSourceEntity(248U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(86U);
    msg.value = 0.47336614306546987;

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
    msg.setTimeStamp(0.5704297816148879);
    msg.setSource(55792U);
    msg.setSourceEntity(96U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(100U);
    msg.number.assign("BJLDVHHIFMOJSZVULPDTQXHUYUXKZCGI");
    msg.timeout = 65304U;
    msg.contents.assign("BRZMPFAVCJFNBHHLYFDSTKLLDXDMYAROKQSYPXVZWEZPVEJMZZXEITLJWIVWLSZILSPUEBNYVGCEQMCATUXNFBJIBSUFEQROIRDUGLOOCTDPQQUTSKTTORAATUYSRDPUEOJQOGYSMJWKGBAYG");

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
    msg.setTimeStamp(0.9148128219554417);
    msg.setSource(9601U);
    msg.setSourceEntity(184U);
    msg.setDestination(4696U);
    msg.setDestinationEntity(130U);
    msg.number.assign("ROMFXFGEVTDYAJQOQEHQUFCUNJIZJXNNABAQLHYQNGRAWBSBWUDU");
    msg.timeout = 45445U;
    msg.contents.assign("QZCBBHRQWDTIMUCLUIEINSKHRXIXEYBUDUGFCOSXDQXATLTAMPDFYKCOAGHUQRNXENEBTQJKXWMCOBWMPYQJVKJTYYH");

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
    msg.setTimeStamp(0.482747349412079);
    msg.setSource(12643U);
    msg.setSourceEntity(142U);
    msg.setDestination(19093U);
    msg.setDestinationEntity(79U);
    msg.number.assign("OYJRWUGBCUFFUFZCHSJKMCUTTXMMYYIZZZKRUPPLPCWPXKRDQGFINMAHEYOXONCOXFMTHCPSRZEVODIKIBFTGUDGRWNWUMKNBOKBRNQHOIXHUBYMJQPNJWVZLQSTBULLQEWRCYAELGBESENS");
    msg.timeout = 11432U;
    msg.contents.assign("UTADOXXIRBPGCKJRFOTYUXRMRZGLDZLTJGGLVDIEVYPCCAKGCUNNWBZJRGFAASCRDOY");

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
    msg.setTimeStamp(0.7403520638860279);
    msg.setSource(54678U);
    msg.setSourceEntity(168U);
    msg.setDestination(12692U);
    msg.setDestinationEntity(150U);
    msg.seq = 3188299428U;
    msg.destination.assign("VPANJQFPUWJQACKHVDCZAGGTOUOGYLWAXDXNJBTDZRWKFROXFXTBRAWTSGYCBOYQDONLHHVXSKTALYQSPBWNJZLFERNBEFZJHJDPFVWIHQDLRREEBLOJZSMAVWZEGZUTDLNCDYHTJLWMGZCHEYGBBOQDPNWISXEMUKVEAUSILMOMTKXPRSERVMUTGQCCIVQNAKUPUKMCJRKQLPYZHMGAXHKK");
    msg.timeout = 35319U;
    const signed char tmp_msg_0[] = {-79, 90, -89, 24, 24, -91, -30, -63, 18, 105, -103, 72, 19, -56, 85, -13, -78, 116, 21, -7, 96, -90, -74, -101, -98, 76, 118, 2, 92, -96, -115, 111, -44, 66, -95, 15, -107, 59, 15, 38, 108, -33, -94, 9, -77, -22, 100, -101, 113, 68, 20, 13, 6, 81, -97, -79, -101, -28, 79, 106, 77, 79, -64, -84, -119, 28, 73, 126, 88, -3, 101, -12, 44, 92, 114, 56, -100, -55, -22, 64, -70, -94, 94, 69, -14, 94, 114, 46, -16, -115, -96, 49, -29, -31, -63, 47, 113, 28, -18, 77, 7, 102, 26, 109, -1, -73, 106, 40, -22, 66, 49, -122, -58, 53, 46, -46, 17, 4, -39, 80, 82, 96, -123, -70, 70, 8, -34, 72, -93, 48, 106, 90, 103, 105, -66, 48, -63, 61, -11, 125, 94, -78, -60, 82, -65, -94, 51, 114, 53, -62, -101, 102, -100, 4, 69, -4, -52, 117, -58, -42, -17, -114, 17, -93, -21, -14, 16, 67, -62, 38, 116, 36, -113, -43, 87, 37, -18, 25, -85, -27, 67, -109, -101, 51, -39, 23, 31, -126, 98, -47, -92, -107, -113, -1, -118, -100, -125, 26, 98, 77, -8, 63, -75, -103, 118, -115, 48, -100, -31, -23, -19, 50, -32, -116, -17, -68, -64, -62, -50, -36, -103, 16, 31, -102, -86, -13, -27, 11, 8, -46, -49, 102, -82, 64, -84, 44, 125, -57, 125, 21, 95, -110, 85, 101, -113, 33, 11, 65};
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
    msg.setTimeStamp(0.5872962149526662);
    msg.setSource(1411U);
    msg.setSourceEntity(158U);
    msg.setDestination(37069U);
    msg.setDestinationEntity(184U);
    msg.seq = 3710875376U;
    msg.destination.assign("WJRQFTEZPKPLFMTLTKHJSWAOMGMYOEEGZDXSDBBGOWNCQPGFUYAOYNPNYHLERHADQSZULXQAQXBPVJFGVMXUNOSLFQWPIMFJAK");
    msg.timeout = 37835U;
    const signed char tmp_msg_0[] = {18, -76, 32, 116, -51, 31, 32, 1, -84, 102, -14, -3, 31, -106, -95, -122, 9, -54, -110, -64, 47, 48, 85};
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
    msg.setTimeStamp(0.5239968274190498);
    msg.setSource(35570U);
    msg.setSourceEntity(140U);
    msg.setDestination(10929U);
    msg.setDestinationEntity(165U);
    msg.seq = 2874588070U;
    msg.destination.assign("DTISYPCVZXINUSVFKUZGKOHJKQTGPJUFVEKVGCNINBZYKWETBFFWNKDEUPLCOZXXRDTLJCCVPMMJRMFWGHUOCTNWEYLJAYFPACCADEMNLOSDLNPIIISOFGPULCAHGNRWFOYWWVRPIGVXTNSVDFKSQLZPDJMUQEWOJWROMLDHYJYUEZUTZEBGAAHMZYHSCKRQZBXMBLROHJAEDUEQVAQPXSXNMBSTZQ");
    msg.timeout = 43736U;
    const signed char tmp_msg_0[] = {-98, 47, 73, 73, -42, 43, 72, -114, 118, -119, -107, -118, 114, -36, -88, -100, 86, -13, -27, -101, -72, -94, -106, 13, 26, 58, 8, 94, -114, 81, 51, 69, 21, 82, 14, -120, -86, 42, 84, 81, 96, -69, 36, -11, -125, 25, -91, -51, 2, -93, 41, 8, -71, 16, 51, 27, 106, 10, 40, -23, -55, 38, -9, -119, 98, 77, -104, 25, 85, -127, -3, -68, -117, 61, -117, -89, -77, -97, 124, -55, -78, -95, 117, 97, -9, -115, 18, -123, 0, 22, -13, -102, 0, 47, -93, 18, -108, 102, -87, 91, 113, -78, -58, 91, -56};
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
    msg.setTimeStamp(0.014586308823228311);
    msg.setSource(21278U);
    msg.setSourceEntity(231U);
    msg.setDestination(56638U);
    msg.setDestinationEntity(136U);
    msg.source.assign("TIPAEIMKVMTVWGGLANHHEVBOUFJQIPEXRIGSHYWHDTUZFSTEJXXPYXACKUEOMZFWUYIMNJTVUKFQZTKMOSKYERNWUFVWXAFSDPKZZQUB");
    const signed char tmp_msg_0[] = {97, 97, 3, 44, -109, -77, 75, -53, 59, 81, -60, 21, -64, 3, -1, 22, -7, -98, 22, -108, 60, 126, -93, 39, -68, -21, 108, 91, -78, -106, -37, -104, -99, 75, -43, 13, -22, 53, -48, -90, -25, 41, -106, -70, -14, -53, -124, 46, -27, -47, -9, 72, -65, 59, 55, 96, 67, 116, -127, 27, 115, 77, 120, -19, 38, -128, 31, 28, -114, -88, 110, -63, 64, 104, -112, -88, -80, -30, 73, -18, 68, 67, -54, -110, -115, 37, -114, -59, 126, -8, -21, -8, -60, -108, 10, -55, 66, -116, -73, 12, -96, 25, -53, -45, -24, -1, -17, -87};
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
    msg.setTimeStamp(0.3718250307794265);
    msg.setSource(44683U);
    msg.setSourceEntity(131U);
    msg.setDestination(31746U);
    msg.setDestinationEntity(34U);
    msg.source.assign("NYGMIFCPKAQLJDLRYYLGBAZCWXJGYXJOXPG");
    const signed char tmp_msg_0[] = {58, 68, -66, -64, -57, 44, 103, 62, -32, 94, -2, 90, -32, -30, 98, 90, -5, -85, 103, -20, -60, 125, 112, 56, 101, 81, -110, 72, -106, 94, -67, -100, -9, 20, -46, -40, 105, -29, 106, 99, 23, -101, 50, 84, -111, 76, -110, 53, 104, -45};
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
    msg.setTimeStamp(0.2170048410526746);
    msg.setSource(8828U);
    msg.setSourceEntity(234U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(130U);
    msg.source.assign("JKTBHEWZYLPFASBUZACVMDJJIHEEUQPMKDBNPXBVFEWPMIEXIJFQRVFAGYVHHSODKZXXYZVGJASYLZUHKNSCNDNTQIW");
    const signed char tmp_msg_0[] = {-100, 54, 53, -4, -33, -57, -52, -95, -19, -93};
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
    msg.setTimeStamp(0.4750780455643395);
    msg.setSource(8220U);
    msg.setSourceEntity(227U);
    msg.setDestination(59093U);
    msg.setDestinationEntity(118U);
    msg.seq = 3757466053U;
    msg.state = 135U;
    msg.error.assign("UAWEUWTSQUFIKWQSAWRCZEHLNJR");

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
    msg.setTimeStamp(0.382231927684879);
    msg.setSource(22726U);
    msg.setSourceEntity(109U);
    msg.setDestination(41339U);
    msg.setDestinationEntity(162U);
    msg.seq = 1774912738U;
    msg.state = 131U;
    msg.error.assign("KXIMXQRILYHLDABUYKILKYJRIFXWCLTGEGYXHANAQEWFDGIEENFUBRDNWFUIMVZUTKJMABQJWBECLOEFYCOSMQBBLVJURAMHVWTDHIASOMHRUSYLZSDCSZWIYTEPGKROWCPBVCTVNONUDXGNLFKF");

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
    msg.setTimeStamp(0.08641866051240132);
    msg.setSource(16691U);
    msg.setSourceEntity(26U);
    msg.setDestination(23183U);
    msg.setDestinationEntity(82U);
    msg.seq = 2623622708U;
    msg.state = 126U;
    msg.error.assign("DMKKZOQRPENNBUORSFHDQSPAUBYCRVGLLEAJAALFPCTYIMUFIVFFXRKVCARZUMNLXTOMOVIRKCRWALSTZQZLBEXDUDOSXFQYZWHOJXGDSDQCPPXKDQBVFGINBTLWZHNGQNNCSSGUHEWAMFXLIXSJUZTYCITYHOZWCUWGQMVPNMZJBJVAWDCSTPGWNUEDAGIVEOUBITVYVAPEOMEELJK");

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
    msg.setTimeStamp(0.9965229266897012);
    msg.setSource(56486U);
    msg.setSourceEntity(81U);
    msg.setDestination(8110U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("XHYMJVMRJNLBZDDRGAICUIFXGSOUIXDNHXPGNRDWIUSKQMTQZGSMVNMZGNRENIQHLCEGZVSWJVOYULTEKDTZJRAPDYBBCFSJNIDZSOXIHOQVGYBLHORJUZLGUJCCBQQCEHXOHXFRVJSZPVQKEVKGDWXLWXAVAYBGMIFWPSAFJKDWBFASLMEPTKEWCTEAPLCFBPYQVYUTYIHLKQ");
    msg.text.assign("GSUFIJCPCCYBZVYXLRIWVOGBNWXRKPMXIBOMWOOIJMRGXUDH");

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
    msg.setTimeStamp(0.29526294732947667);
    msg.setSource(12836U);
    msg.setSourceEntity(208U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(163U);
    msg.origin.assign("BSYXSLMQLCKNEOMQMMQIMBJCHBSUUNOEOETPQUWKDTTQKYQWCWXCLRZXEGTEYZUOWB");
    msg.text.assign("EXVUJDZSWSYCKCIYORHTGHBELFJICXEVGUPAL");

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
    msg.setTimeStamp(0.3690570372575236);
    msg.setSource(5736U);
    msg.setSourceEntity(98U);
    msg.setDestination(64922U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("AEWXBOHFBZXIKRWQLWSYSEELYYYGUYKQAOHQTMVZVTTCIHHQYQMIUUJQVTGBRAG");
    msg.text.assign("RVDXSFREWTPZKOILUYUOZMOZSGLHEXNTZVFIVNOQPBQBOOJTPUALOCDJJJZSPRWMMGKLWEVAKXQHBWNWCBHSTDMGAJNKVHPWKLQPYCJLGIEDHFSFMYMRHNOOAQFILUCYJFAGAZHLXYQGSMJWBTAVRDEVNFTCCTVENTVBBXUUEFHPAUCSZVIPMDQHXZCAKYQRJRXEBAQEPUYYIEYJIUQBSGGNKCNXWMDUNLKXHDFR");

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
    msg.setTimeStamp(0.8023952603783048);
    msg.setSource(31672U);
    msg.setSourceEntity(139U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(95U);
    msg.origin.assign("UMWNGRKTEKNVRQFMTALYEZICWDIACJDGSVTHFZXMJUPKWJMQWIMALKBQUQPRLKOCFTAJLHOPXPMTNVXAKGFCNJSPHIDGBQAFZRDATYOZQLUKUWBKNOCCYW");
    msg.htime = 0.011394676025182293;
    msg.lat = 0.9465987675510897;
    msg.lon = 0.36641176516811536;
    const signed char tmp_msg_0[] = {109, -84, -33, 17, -111, 34, -36, -104, -27, 119, -75, -29, 93, 73, -56, -10, -85, 115, -117, 54, 11, -67, 64, 117, -117, -51, 69, 35, 24, 99, -36, -84, 90, 77, -17, 119, -59, -64, -19, 69, -34, -98, -56, 52, 29, 86, 66, 105, -122, -9, 51, -106, 2, -25, -48, -124, -116, -23, -62, -10, 34, -21, -46, -56, -63, 3, -117, -95, -117, 5, 104, -38, 66, 44, 9, 16, 68, 80, -70, 85, 79, -102, -21, -37, 112, 56, -98, -54, -47, -62, 66, -85, 55, 114, -121, 87, 15, -116, -128, 93, -92, -52, 75, 29, 11, 30, 79, -12, -80, -118, -37, -47, 68, 62, -96, 116, 48, 97, -19, -35, -61, 32, 120, 69, 110, -102, 120, 83, -41, 95, -65, -19, -107, 70, -16, 66, -3, -99, 31, -1, -90, 104, -58, 75};
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
    msg.setTimeStamp(0.4957167817098689);
    msg.setSource(62902U);
    msg.setSourceEntity(11U);
    msg.setDestination(47776U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("QHULTJZLYGXOYLNSQZWUPIX");
    msg.htime = 0.7211492438629005;
    msg.lat = 0.60591029852538;
    msg.lon = 0.28243306099751364;
    const signed char tmp_msg_0[] = {-66, 108, -39, 103, -55, -44, 48, 57, 97, 77, -7, 126, 10, 107, 119, 9, 110, 29, -119, 26, 34, -100, 72, 36, 27, 55, 111, -23, 100, 90, -103, -26, 52, 41, 1, -82, -17, -58, -20, 24, 114, 5, 4, -36, -25, -128, 126, 67, 87, 8, 14, 40, 107, 99, 31, 94, -31, 12, 99, -83, -11, -9, 42, -91, -27, -68, 80, -14, 95, 25, 113, -75, 9, 12, 11, -105, 36, 70, -88, 62, -103, -80, -11, 104, 27, -101, 77, 3, 52, -88, -116, 47, 105, -15, -49, -24, 0, -69, 62, 52, -116, -32, -127, -59, 68, -34, -55, 44, 50, 63, -77, -13, 72, -23, 47, -115, 102, 4, 116, 107, -4, -70, -19, -55, -97, -68, -109, -122, 20, -42, 17, -10, 103, 63, 125, -106, -127, -95, -61, 5, 87, -73, -33, 65, -59, -102, -37, 39, 14, 10, 35, -88, 96, -48, -26, 89, 41, -65, -69, -108, 12, 49, -31, 87, 20, -45, -46, 96, -12, 117, 105, -64, 15, 17, 50, 37, -110, 31, 70, 109, 31, -66, 43, 78, -23, 114, -120, 120, -72, 13, 62, -104, -65, -76, 96, -7, 10, 95, 31, -92, 31, 56, 114, 105, 42, -127, -39, -68, -101, -7, -74, 20, -37, 68, 116, -76, 20, -4, 27, -112, -1, -82, 7, 98, -56, -64, 115, 62, -66, 57, 26, 49, -83, -110, -13, 42, 118, 54, -57};
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
    msg.setTimeStamp(0.6272112078985468);
    msg.setSource(32516U);
    msg.setSourceEntity(32U);
    msg.setDestination(37239U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("EZVDSGYSHJNGUEJFMESAUVJGIZKCHFNSRLQTQYMBLFDVEDRSVISHZIUDOVYNNUKTIZLPJCYYBWZCXPBFQQHUKMWHRVHBLRPKFGYFIXANPWRUFSZMCJGQEORNWOWRHTYXMRXCITUTXVIOHNXWYVMWRAKJAZYATTZCZGLBDCTMJQFKOAGBKJIDBLM");
    msg.htime = 0.8299075060152818;
    msg.lat = 0.08762032981778511;
    msg.lon = 0.10649224205988339;
    const signed char tmp_msg_0[] = {-109, 108, 95, -27, 14, -28, 61, 82, 122, -39, 3, -22, 6, -116, -94, 63, 103, 64, -117, 53, 28, -35, -35, 12, 118, 85, 49, -93, -76, -44, -66, 107, 12, 49, 40, 116, 23, 96, -89, -87, -96, 23, 91, -117, -52, -117, -54, -8, -122, 33, -123, 66, -26, 58, 45, -38, 119, 78, 109, 16, -3, 78, 29, 95, -87, 58, -22, -62, -56, 93, 70, 107, -20, 75, 90, -39, 42, -51, -107, -81, -124, 38, -101, -99, 17, 84, 110};
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
    msg.setTimeStamp(0.20862595182413002);
    msg.setSource(40974U);
    msg.setSourceEntity(122U);
    msg.setDestination(4341U);
    msg.setDestinationEntity(154U);
    msg.req_id = 49402U;
    msg.ttl = 62507U;
    msg.destination.assign("NJTSELAAYEUYIBNGLOVSERHAIRPKTUQGZASZOHGYOSZMMOZJRMPNIYJLHPJUGROVDJMMICHVRSPQDZYWXJWXFXUKKPYMTFBFLTEDSFENYXOHNDRZEKKVLXUFNQLLKXFTNAYTKIIGOZVU");
    const signed char tmp_msg_0[] = {22, -83, 106, 65, -97, 12, 60, -89, 54, -2, 46, 86, 11, 41, -32, 41, 62, 18, -15, 49, 103, -78, -29, -73, -37, 39, 119, 60, 70, 52, -100, -2, -68, -51, 38, 50, -67, 122, 77, -7, -10, 6, -14, 84, -23, 95, -69, 36, 126, -35, 53, 119, 43, 105, -61, -66, -116, -120, 7, 110, -87, -35, -72, 4, -43, -80, -113, -52, 57, 105, 116, 45, 43, -43, -83, -22, -83, 84, -104, -70, -100, 62, 28, -98, 125, -23, -13, -16, -114, 56, 105, 7, 34, 98, -28, 57, -49, 125, -63, 116, -44, -85, -30, -67, 51, 98, -85, 9, 112, 84, 123, -83, -114, 17, 25, 35, -73, 43, -82, -34, 5, -107, 8, -2, 56, -58, -50, 69, 54, -47, 110, 124, 25, -119, 76, 57, 87, 22, -116, 98, -106, 36, 62, 15, 51, -56, 122, 5, 12, -88, 11, 43, -32, 47, 89, 106, 94, -97, -33, -55, 74, 87, -5, 82, -92, -67, -21, 35, -98, -121, -15, -25, 125, 58, -115, -48, 51, -32, -82, 23, 71, -82, 52, 114, -118, -71, 15, -2, -64, 67, 63, 28, -80, -59, -3, -128, 67, 110, 41, 96, -16, -48, 90, -85, 33, 103, -97, -37, -98, 43, 57, 26, 66, -45, -39, 88, -5, 33, 126, -110, 99, 41, 113, -51, -19, -115, 104, 5, 35, 29, -123, -119, 64, -122, -41, -110, -65, 109};
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
    msg.setTimeStamp(0.3142290596463353);
    msg.setSource(55593U);
    msg.setSourceEntity(132U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(239U);
    msg.req_id = 23639U;
    msg.ttl = 1946U;
    msg.destination.assign("QTRUNMGUQAADXTOHRSAKRDSMXFICMYAZIKQZKEIUCWLWXVTKEPITWSTEGPVMDXORIEBHWOZLVZYJFXNYKRT");
    const signed char tmp_msg_0[] = {-30, -95, 96, 21, -110, -58, -44, -69, -90, 18, 7, 107, -70, 8, 68, -97, 51, 91, 84, 5, 105, -8, -84, 34, 109, -4, -36, 24, -104, 22, 51, -101, -23, -6, 55, 118, 65, -83, 98, -72, 103, -61, 115, -43, -16, 75, 24, 97, 7, -99, 60, 96, -128, 73, -100, 1, -128, 25, 99, -67, 5, -120, -5, -117, 10, -76, -55, -54, -94, -67, -98, -88, 31, -101, 68, 80, -90, 99, 22, -31, -88, 89, -45, 35, 126, -46, -44, -87, -71, 68, 49, 98, -71, -98, 114, 76, -56, -120, 42, 79, 1, 44, -65, -96, -104, 3, 89, -52, 58, -65, 125, 98, -78, 74, 90, -103, 121, -28, -89, 54, -37, 85, -35, -68, -94, 110, -100, 2, 99, -128, 96, -87, 31, 47, -123, -19, -83, 73, -11, -86, 38, -94, 56, -110, 59, 47, -99, 115, -25, 91, 53, -112, -53, -13, 58, -20, 121, -44, 82, 99, -40, -9, 21, 72, 76, -2, 5, -91, -41, -89, -73, 69, -30, -80, -95, -41, -10, 60, -122, -79, 68, 105, 32, 61, 81, 61, -121, 23, -39, -50, -13, -34, -97, -41, 106, 96};
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
    msg.setTimeStamp(0.8542197427365764);
    msg.setSource(58966U);
    msg.setSourceEntity(64U);
    msg.setDestination(17656U);
    msg.setDestinationEntity(189U);
    msg.req_id = 28636U;
    msg.ttl = 4680U;
    msg.destination.assign("YYRIQVTBPZXVGSWQQHBODXEHILTAAUNEQYCFVFKGZJEBMPWEOMDBMVASUMSIAPTTTOAVDEYPNKBK");
    const signed char tmp_msg_0[] = {-81, -88, 67, 31, 6, 68, 27, 81, -7, -67, -120, -118, -80, -26, 52, 24, -70, 109, 107, 56, 5, -13, 40, -63, 58, 26, -122, 104, -69, -123, -95, -128};
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
    msg.setTimeStamp(0.5259305000220259);
    msg.setSource(64941U);
    msg.setSourceEntity(6U);
    msg.setDestination(25508U);
    msg.setDestinationEntity(113U);
    msg.req_id = 47536U;
    msg.status = 148U;
    msg.text.assign("HFCPFJVMLZROMMIKSSREAHKZSQYTGELKEXITNEDGWJQCXLBDGKDGLJORYIZWFQBUYSLUHWUVJHAXWHWXWZHAJBFMRE");

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
    msg.setTimeStamp(0.8223559328368913);
    msg.setSource(26801U);
    msg.setSourceEntity(5U);
    msg.setDestination(47352U);
    msg.setDestinationEntity(157U);
    msg.req_id = 11421U;
    msg.status = 244U;
    msg.text.assign("IYSPOPNSIXAHDMAHIGBGGSKQMZEIFUFQFMQPLNAKPNFRUYFQOCWAJHOVHKAOGJBSNTIQYYXKLDZNRULWVGDQFQRMTARP");

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
    msg.setTimeStamp(0.012413207739819798);
    msg.setSource(28261U);
    msg.setSourceEntity(231U);
    msg.setDestination(45027U);
    msg.setDestinationEntity(0U);
    msg.req_id = 30554U;
    msg.status = 227U;
    msg.text.assign("XAMQDAWSDFARSUWZSWGWCMKYBSQTYVDOGHTLRYKMVOFYZHYCMGHBUZLPRPJISYIJXFPRHVWIJQAPXWLLBANAKNUIJGHYHNKKRDQMIBPCCEBBVSTOEWQEFOTHINHNUPRXUOCZICNVDUEOYAZOQYUFLSMVDZEIUJMIA");

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
    msg.setTimeStamp(0.9991965956150973);
    msg.setSource(31125U);
    msg.setSourceEntity(213U);
    msg.setDestination(12741U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("JVCELRJHKDZZKXBLLWYIEZPLSHPFSMUIHMGPLVXZOEVBUIXQJSQCQPHWXRTQWNZXDVFGVTCISWAKNKFCXAXVUTIBRICYGBOTNCAFQPGEDEHBGYITDVEUFTVDVIZZULBDG");
    msg.links = 2515994147U;

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
    msg.setTimeStamp(0.4958224116153135);
    msg.setSource(51789U);
    msg.setSourceEntity(63U);
    msg.setDestination(30753U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("BZBVQYABLRFBPXZWMWIRQRDAAMPUMXCIHOZZBJTXNWMPDUSBYHCRHJAHYWFSMQECKNTJHRULDOYPFVOQDOGSVXWKTOVKTERNYMXTIWLVDANBFIZBIQQBGHYLCPCDQVLAAEVGKFOMFCICDKIWHYSOXJGXFQNVTEYDYRZTICUNXXJRCPPZEWBNFCSALIMLUEZGDGUSRUWPU");
    msg.links = 1129294059U;

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
    msg.setTimeStamp(0.8897440900901661);
    msg.setSource(36742U);
    msg.setSourceEntity(75U);
    msg.setDestination(34034U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("BUTOVYJGQIVVIJHTZDRYEQGBDCVALCVOYSWFSOZWLULZEGHBQTALAMQCONNMHMUNCXVDMKXFDPTWUPRRVHQXAUIBCHRRSEOGFLIWOJX");
    msg.links = 504767723U;

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
    msg.setTimeStamp(0.9334112764451219);
    msg.setSource(40982U);
    msg.setSourceEntity(217U);
    msg.setDestination(47576U);
    msg.setDestinationEntity(89U);
    msg.groupname.assign("LBNWUOYUHLDTMZWKKPNGNGGKROVFYBRAUXSKMRHNHFATUGSFWDLOTIBQEATVRADUNSEYIEAWQOJDQQOVPCPHKANHXYVLMJIEXYTRHZINYGTXVPPHCQNJJMBFRXMLUVSFELUEIZGAUXGNYOCRPTCBBUSXBMVRISCJWLSCYKDEHOSOIQDTPDEYWBSUTPMKZEKFAFJIFPZYWEJLLTGDGCBZVPJWXAFSXQBCIMJCGZDQDXKMFQNLVHRHZZOIQO");
    msg.action = 21U;
    msg.grouplist.assign("PQOFSOKDIFNBVHSRTSJVTRHIKMGPQVUIQXRGVJODKBVAIJMHZXNOFKXNQASALPZLXZCEEKOEHXFOUGXQFDUDCNEWOHIXPGGNPSWKTJYPHWSBFQUTQQMIUA");

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
    msg.setTimeStamp(0.32176357749094076);
    msg.setSource(41836U);
    msg.setSourceEntity(239U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(75U);
    msg.groupname.assign("KDUTJROCYAUSQH");
    msg.action = 59U;
    msg.grouplist.assign("JIOJANWAHRTHCNPGGMZQQUXNTHKRHNYIKJTPBOYWZUBERFIAJTCODLOZRXVJBZXFDECUYBLKTJSTBIUVDTWCQLWCKVNOPOMAALGMSDQRPYEFDVTIHVLWKFMBZZGWZSYSQIVJYPNWAQCZUXHXTFGSZYKJCQBYRQKJYAFDUXGLAGVXDXADMWNJFRZIOCBQODHNENMLQLWPIFNFHAHLUMSKRKMUESBMYEGSKOXEGRVSPCCDELIPEXWTFUVMGV");

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
    msg.setTimeStamp(0.24024035833173296);
    msg.setSource(25931U);
    msg.setSourceEntity(159U);
    msg.setDestination(45055U);
    msg.setDestinationEntity(243U);
    msg.groupname.assign("WWLXLCTDKWSXBTIKDTIAMASLWVTEIYLKGEVRBBEHFMXYHPNZBGTFM");
    msg.action = 52U;
    msg.grouplist.assign("NIOHQIMWERNTEGRPECQVZISLXFKURTBDAOPKJBPJF");

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
    msg.setTimeStamp(0.9361711011809556);
    msg.setSource(42934U);
    msg.setSourceEntity(119U);
    msg.setDestination(15223U);
    msg.setDestinationEntity(213U);
    msg.value = 0.4615772387148279;
    msg.sys_src = 61164U;

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
    msg.setTimeStamp(0.25023504667851926);
    msg.setSource(52394U);
    msg.setSourceEntity(172U);
    msg.setDestination(44595U);
    msg.setDestinationEntity(141U);
    msg.value = 0.708847596053025;
    msg.sys_src = 45056U;

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
    msg.setTimeStamp(0.2723998454501486);
    msg.setSource(9610U);
    msg.setSourceEntity(110U);
    msg.setDestination(31110U);
    msg.setDestinationEntity(103U);
    msg.value = 0.8451936527381543;
    msg.sys_src = 10897U;

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
    msg.setTimeStamp(0.23195036547053793);
    msg.setSource(31273U);
    msg.setSourceEntity(142U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(71U);
    msg.value = 0.4714447890153829;
    msg.units = 167U;

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
    msg.setTimeStamp(0.5726206682914367);
    msg.setSource(19909U);
    msg.setSourceEntity(42U);
    msg.setDestination(58610U);
    msg.setDestinationEntity(86U);
    msg.value = 0.03363091152733888;
    msg.units = 116U;

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
    msg.setTimeStamp(0.6822291193781974);
    msg.setSource(1227U);
    msg.setSourceEntity(98U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4518944884247731;
    msg.units = 54U;

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
    msg.setTimeStamp(0.42816684756971024);
    msg.setSource(46202U);
    msg.setSourceEntity(58U);
    msg.setDestination(46633U);
    msg.setDestinationEntity(49U);
    msg.base_lat = 0.39140517430220556;
    msg.base_lon = 0.6144680417274795;
    msg.base_time = 0.22281142226614015;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 55808U;
    tmp_msg_0.destination = 28294U;
    tmp_msg_0.timeout = 0.07300370698310321;
    IMC::TransmissionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 48360U;
    tmp_tmp_msg_0_0.status = 192U;
    tmp_tmp_msg_0_0.range = 0.6921297807453434;
    tmp_tmp_msg_0_0.info.assign("CRCIKHEFBKVOEKGRBJWFNJHQHHFOWZMSNRKSEOKJNZZDZNRVFEPDXEJBALXIZJQDAWLEFPTZDBIVSIMAXCXPCVMYYREAXRWFVMUDPAXFFNHHGCREIUCLMHYTUQVMPYSYIUPCWAAASQUHOJLTGQWYGBGBBUBKGVWLTTTOQNLMDOQQPWUSZYZEJEPXRSOTM");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.18306647876615856);
    msg.setSource(181U);
    msg.setSourceEntity(248U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(129U);
    msg.base_lat = 0.55289260224141;
    msg.base_lon = 0.9668565207730535;
    msg.base_time = 0.5101048778214734;

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
    msg.setTimeStamp(0.03380794131996323);
    msg.setSource(8077U);
    msg.setSourceEntity(34U);
    msg.setDestination(11393U);
    msg.setDestinationEntity(114U);
    msg.base_lat = 0.4285658228875836;
    msg.base_lon = 0.46647226629538285;
    msg.base_time = 0.43116324279796436;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 61797U;
    tmp_msg_0.priority = 31;
    tmp_msg_0.x = 17841;
    tmp_msg_0.y = -31272;
    tmp_msg_0.z = 8165;
    tmp_msg_0.t = 4402;
    IMC::DepthOffset tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.08874640639674214;
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
    msg.setTimeStamp(0.044881239758685854);
    msg.setSource(1246U);
    msg.setSourceEntity(200U);
    msg.setDestination(32174U);
    msg.setDestinationEntity(140U);
    msg.base_lat = 0.5731817116979038;
    msg.base_lon = 0.1154189401951824;
    msg.base_time = 0.9494621381345727;
    const signed char tmp_msg_0[] = {10, -24, 117, 85, 6, -83, 22, 14, 126, -2, 125, 1, 59, -91, 87, 0, -98, 102, 60, -125, -73, 72, -67, 118, 33, -124, 6, -51, 103, -103, -43, 98, 105, 107, 67, 97, -114, -125, -119, 64, 104, 41, 43, 35, -6, -16, 84, 88, -89, -28, 93, 108, -128, -93, -27, 25, -65, 57, 51, -127, -33, -114, -8, -58, 5, 79, 70, -79, 106, -35, 122, -122, 67, 67, 109, -56, -42, -75, 117, -116, 29, -11, 4, 60, -56, 3, -34, 76, -114, -73, -89, 85, 64, 96, 90};
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
    msg.setTimeStamp(0.16652949677196982);
    msg.setSource(2915U);
    msg.setSourceEntity(186U);
    msg.setDestination(56928U);
    msg.setDestinationEntity(96U);
    msg.base_lat = 0.6763528707966452;
    msg.base_lon = 0.28907614858957564;
    msg.base_time = 0.8627595150027947;
    const signed char tmp_msg_0[] = {54, -64, 71, 72, 28, -101, -116, 79, -59, 52, -103, 3, -3, 113, 43, -78, 8, -93, 3, 30, 72, -61, -22, -62, 100, -58, -30, 87, 63, -116, 31, -39, 96, 70, 4, 61, -118, 77, -5, 10, 0, 96, 54, 87, -37, -36, -36, -29, -116, -29, -64, -47, -91, -96, -27, 14, 50, 53, -38, -107, 43, -85, 78, -29, 41, -71, -94, -28, -60, -120, -93, -120, -23, 31, -89, 28, 82, 126, -22, 73, 70, 112, -34, -96, 125, 112, 31, -28, 73, 89, 108, 81, 25, -6, 50, 45, -24, 93, 99, 72, 7, 89, 39, 60, 9, -10, 86, 31, -92, 44, 111, -69, 44, -114, 37, 21, -80, 17, -33, -107, -85, -94, 10, 74, -71, -34, 50, 50, -65, -74, -16, 33, -40, 33, 4, -38, 93, 107, 12, 55, 18, -108, -95, 92, 17, 94, -24, 25, -75, 3, 41, -123, -40, 55, 70, -41, -98, -77, 105, -110, -95, 13, 9, -33, -75, 71, 91, 46, 121, -113, -110, -43, -93, 77, -42, 22, -73};
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
    msg.setTimeStamp(0.8463388121494158);
    msg.setSource(53764U);
    msg.setSourceEntity(109U);
    msg.setDestination(27805U);
    msg.setDestinationEntity(249U);
    msg.base_lat = 0.41835333647638706;
    msg.base_lon = 0.47278243913096685;
    msg.base_time = 0.4269854667244958;
    const signed char tmp_msg_0[] = {71, -64, -86, 59, 85, 68, 104, 45, -8, 18, -57, -36, 99, -66, 89, -106, -76, 124, -12, 52, 117, -122, 87, 6, -37, -110, 101, -85, -80, 21, -73, 34, 118, -101, -54, 4, 55, -64, -121, 106, -113, -110, 87, 107, -35, -7, 120, 19, -86, -36, -66, 8, 25, -113, -113, 46, 90, 117, 48, 98, 105, 2, -32, -101, -22, -61, -32, 67, 46, -75, 69, -82, -107, -35, 115, 28, 17, 29, -46, 71, 114, 105, 97, 46, 9, 98, -87, -78, -61, -88, 17, -61, 121, -86, 120, -96, -73, 87, -47, -7, -119, 29, 108, -2, 100, 50, 16, -5, -101, -3, 62, -77, -25, 78, 14, -54, 47, -90, -112, 107, 32, 104, -8, 32, 76, -57, 68, -76, -24, -67, -31, -125, 1, 17, 14, 20, -80, -123, -85, -80, 77, -72, -115, 104, 20, 37, 52, -118, -11, 58, -12, 40, 80, 28, 30, -29, -103, -119, 49, -3, -80, -64, -76, 108, 32, -65, -92, -104, -106, -99, 32, -56, -40, -55, 117, 16, -128};
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
    msg.setTimeStamp(0.11222877811070187);
    msg.setSource(977U);
    msg.setSourceEntity(7U);
    msg.setDestination(62303U);
    msg.setDestinationEntity(181U);
    msg.sys_id = 52401U;
    msg.priority = 61;
    msg.x = -28147;
    msg.y = -11529;
    msg.z = 21230;
    msg.t = -24630;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("IVDMWPAAYVJBPNEICXLHMUATXJSWZYRFUMSYAFCKGRRPOJZRBOPXEQKRQTBYDHHYFQKLZLGPIEXYUANTNEZGTVSHVKRUAPHOSUEUYTDNDHGNZHSXRIFCEMSAWUWGXDMLVBLIFCOOYMZEYXDGFVWVTJHNZLQQFWCNDXJBQTKWIJK");
    const signed char tmp_tmp_msg_0_0[] = {44, -101, 30, 40, 120, -63, 45, 87, -112, 60, 70, -84, -87, -67, 47, -31, 123, 78, 18, -19, 91, 36, 89, 101, -28, -96, 49, -111, -78, -49, 23};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8294365240498388);
    msg.setSource(15568U);
    msg.setSourceEntity(33U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(54U);
    msg.sys_id = 36996U;
    msg.priority = -25;
    msg.x = 3389;
    msg.y = -26286;
    msg.z = -10711;
    msg.t = 9648;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 78U;
    tmp_msg_0.ncells = 183U;
    tmp_msg_0.coord_sys = 95U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.5222606943258383;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.18732785824785303;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.6079813615037433;
    tmp_tmp_tmp_msg_0_0_0.cor = 9U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7629991619508053);
    msg.setSource(40417U);
    msg.setSourceEntity(254U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(5U);
    msg.sys_id = 10668U;
    msg.priority = 123;
    msg.x = -2705;
    msg.y = 10291;
    msg.z = 21506;
    msg.t = -26995;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 63927U;
    tmp_msg_0.lat = 0.11132661179994385;
    tmp_msg_0.lon = 0.15514139852572684;
    tmp_msg_0.speed = 0.009076666402580313;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.custom.assign("PSUDDHSZOFLRPVHHGOBWMVEPEGITZTKXEWAEYSEINYQNJTTMNRZKMPAEHXNMZNXAZQRGTMKOVCYALQJOLZFWIBDFJQBSFCPXNSRLDINPOUFHGZRIBBJGWPRKSGRAHXKJVSHLVKVBJRFEQIQPAQCZJCDUATYTUCDCWUKAQYKLSUFSCCLYEKUUNTMAYIRGFDWGOLIGXF");
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
    msg.setTimeStamp(0.12744601371595954);
    msg.setSource(55044U);
    msg.setSourceEntity(151U);
    msg.setDestination(54072U);
    msg.setDestinationEntity(189U);
    msg.req_id = 31053U;
    msg.type = 179U;
    msg.max_size = 19287U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.04113472298156706;
    tmp_msg_0.base_lon = 0.240833558043289;
    tmp_msg_0.base_time = 0.4636291075704655;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 51652U;
    tmp_tmp_msg_0_0.destination = 10396U;
    tmp_tmp_msg_0_0.timeout = 0.2619402175559541;
    IMC::SimulatedState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.14112552751892238;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8307214594524294;
    tmp_tmp_tmp_msg_0_0_0.height = 0.15226325775315752;
    tmp_tmp_tmp_msg_0_0_0.x = 0.6427323102852461;
    tmp_tmp_tmp_msg_0_0_0.y = 0.1437788234726045;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8443693690292026;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.8421932653527393;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.7799024975790967;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.7700395298804674;
    tmp_tmp_tmp_msg_0_0_0.u = 0.20213599065487697;
    tmp_tmp_tmp_msg_0_0_0.v = 0.5385498905821035;
    tmp_tmp_tmp_msg_0_0_0.w = 0.8316953709604407;
    tmp_tmp_tmp_msg_0_0_0.p = 0.9650243435297272;
    tmp_tmp_tmp_msg_0_0_0.q = 0.3081946677078037;
    tmp_tmp_tmp_msg_0_0_0.r = 0.5556289257476885;
    tmp_tmp_tmp_msg_0_0_0.svx = 0.5626668713790853;
    tmp_tmp_tmp_msg_0_0_0.svy = 0.03658394209962812;
    tmp_tmp_tmp_msg_0_0_0.svz = 0.7885934614629945;
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
    msg.setTimeStamp(0.39894195177656233);
    msg.setSource(19480U);
    msg.setSourceEntity(178U);
    msg.setDestination(63077U);
    msg.setDestinationEntity(136U);
    msg.req_id = 40767U;
    msg.type = 85U;
    msg.max_size = 1797U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.794686772221054;
    tmp_msg_0.base_lon = 0.2640037840170594;
    tmp_msg_0.base_time = 0.768175969172727;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 39461U;
    tmp_tmp_msg_0_0.priority = 62;
    tmp_tmp_msg_0_0.x = 7653;
    tmp_tmp_msg_0_0.y = -14986;
    tmp_tmp_msg_0_0.z = 32603;
    tmp_tmp_msg_0_0.t = 1504;
    IMC::CpuUsage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 8U;
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
    msg.setTimeStamp(0.8488360327670622);
    msg.setSource(30782U);
    msg.setSourceEntity(252U);
    msg.setDestination(60259U);
    msg.setDestinationEntity(88U);
    msg.req_id = 23219U;
    msg.type = 140U;
    msg.max_size = 33266U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8106847645780646;
    tmp_msg_0.base_lon = 0.3756737124906695;
    tmp_msg_0.base_time = 0.36378866508996155;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 27434U;
    tmp_tmp_msg_0_0.destination = 38516U;
    tmp_tmp_msg_0_0.timeout = 0.8984679984487588;
    IMC::AcousticMessage tmp_tmp_tmp_msg_0_0_0;
    IMC::HistoricCTD tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.conductivity = 0.4788369765047701;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.temperature = 0.18913700722087257;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.depth = 0.3131910554456524;
    tmp_tmp_tmp_msg_0_0_0.message.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.1425546946034134);
    msg.setSource(46394U);
    msg.setSourceEntity(84U);
    msg.setDestination(52862U);
    msg.setDestinationEntity(187U);
    msg.original_source = 21529U;
    msg.destination = 47187U;
    msg.timeout = 0.296249540931695;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 197U;
    tmp_msg_0.error.assign("HVEGZKNCOHEFACCGJKYDWGBBULXMKXVKNKGIAHZGUHVIOGSSHH");
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
    msg.setTimeStamp(0.2658111312007576);
    msg.setSource(62391U);
    msg.setSourceEntity(101U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(169U);
    msg.original_source = 5317U;
    msg.destination = 52577U;
    msg.timeout = 0.17990031846496646;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 7U;
    tmp_msg_0.name.assign("VTFLENCIRSYIPYNKAKBDJOQOYZMQXIHZFXYUMCWQUOOHLKKZIKCTIGWIBCNJJWSXGJXUXLLRGPEVFQQQBCDCXXEQKZLGYIARMAXSYSDNCFHQMZMFVEKUOELPUYVEUFJEDICPBBWRBZGTYDIPOVPZHPZMNLRJAFHATCSMKWUDOVWLKTHUPVHMVSCJRYAVRRAJHMUS");
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
    msg.setTimeStamp(0.8987330821024475);
    msg.setSource(7646U);
    msg.setSourceEntity(231U);
    msg.setDestination(53947U);
    msg.setDestinationEntity(66U);
    msg.original_source = 23334U;
    msg.destination = 39858U;
    msg.timeout = 0.19307454628006648;
    IMC::Displacement tmp_msg_0;
    tmp_msg_0.time = 0.8238464148771549;
    tmp_msg_0.x = 0.691215725407492;
    tmp_msg_0.y = 0.3106094414186803;
    tmp_msg_0.z = 0.9714465830855367;
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
    msg.setTimeStamp(0.5331236403720079);
    msg.setSource(48882U);
    msg.setSourceEntity(193U);
    msg.setDestination(60942U);
    msg.setDestinationEntity(212U);
    msg.type = 131U;
    msg.comm_interface = 51704U;
    msg.model = 40853U;
    msg.list.assign("HGSXUHLBJHMFVIAJCJDVNNBWDKBIYVTFPOQTYYYJIPVDQOXWWXBNUAMSPERZVTWZDZTFCIWZMWUZFWSYQCTJXZSFXRFARYYBGJTLMSCANUDYMBSVBXHERBSXGEOTGGLQPGYEUOMHBVAIUAF");

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
    msg.setTimeStamp(0.5105391354780705);
    msg.setSource(15337U);
    msg.setSourceEntity(173U);
    msg.setDestination(59228U);
    msg.setDestinationEntity(242U);
    msg.type = 126U;
    msg.comm_interface = 268U;
    msg.model = 55497U;
    msg.list.assign("XZAGNCETDOZIUVUAHCDGJQVTNPUEEGHWUBBAWJCWMFROXQFHVTVNJPEQOBALSASFFUOGCYPBTLVVVSMKAFLXCWHNLINNGSWIBCWLPUOMYEDJZRTBYWWDZHMHFFAHCBSGNOGYDKBDJUXFKXTIGCXZJQUNMQYBYCWEVUWPILZHRITRNQKPEKOVRSCDAZMEXLKDKRTXODPIFIRPQHELJOZJSM");

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
    msg.setTimeStamp(0.9786251444240304);
    msg.setSource(20872U);
    msg.setSourceEntity(188U);
    msg.setDestination(50277U);
    msg.setDestinationEntity(224U);
    msg.type = 91U;
    msg.comm_interface = 5417U;
    msg.model = 59958U;
    msg.list.assign("DRUWERKRFTYZMGMHCJYSVSVRAUCEMPAFAUGQCYVIHAFRDTIQAIITMGSBHIQDAIXZFVTOAYOBCPXIDWWEEKGGWNLZBNGDCWRLKXJLDNHNJRPKUEJLOEBVSIAOP");

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
    msg.setTimeStamp(0.26262267022537533);
    msg.setSource(16729U);
    msg.setSourceEntity(89U);
    msg.setDestination(55964U);
    msg.setDestinationEntity(206U);
    msg.type = 245U;
    msg.req_id = 978598513U;
    msg.ttl = 44549U;
    msg.code = 209U;
    msg.destination.assign("LVEHNUNBMGFSPPLTUNSZYEOKKUZRJESBAHZCYNQXAWFVKULDOOHRVPQDHLZFWBMEYUWWNMXQWKGLREDFKZKPITGZHDOELSIW");
    msg.source.assign("LARXTUAZPFEKXKDBUXCREZRMGORAYLYRGUNNDQMUWMCBJTWHTDPCZRFCSCWYQGEWYYWTEVDRKLJIINNOEVSSUWJHMZTLSAHKJUBCILSOZNJQMLBUELUBMNKIIVCQWFQRDOMGEGHQ");
    msg.acknowledge = 77U;
    msg.status = 207U;
    const signed char tmp_msg_0[] = {103, 7, -18, 81, -63, 31, -10, 32, 50, 87, 15, -53, 66, -75, -46, -58, 2, 26, 50, -36, 73, 53, -113, 31, 20, -37, 111, -64, -60, 20, -29, -18, 95, 42, -49, -78, 38, 14, 35, 12, -60, 124, 64, -94, 49, -40, 9, 63, 111, -81, 115, -4, -43, 4, 33, 34, 83, 10, -127, 74, 91, -97, 76, -90, -111, -115, 57, -16, -26, 17, -78, -59, -19, -118, -51, 106, -101, -85, 113, -25, 36, -43, 65, 3, -81, 126, -58, -84, 79, -33, 121, 121, -14, -78, 59, -98, 3, 95, 105, -66, 39, -14, 80, -92};
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
    msg.setTimeStamp(0.8378612009101792);
    msg.setSource(40233U);
    msg.setSourceEntity(196U);
    msg.setDestination(62963U);
    msg.setDestinationEntity(147U);
    msg.type = 220U;
    msg.req_id = 3093736627U;
    msg.ttl = 60969U;
    msg.code = 243U;
    msg.destination.assign("YJDUBFQVXGGYGSGUURQQGEAIIKBTSFVAPOANIHEEJMBPSQRORMYWFGNPYZBGZFVLANHEMWFPICFKGYWKAJXJOKSHSBSTPKPPOLYQX");
    msg.source.assign("DHYBGZJKXJAMSTWGPHKGOUUERBBNBFXWGWKVNUCSZYLIZXLRCBZOABACFUONVQYFPSYZMKLQNLAKLJEMRWHCXXEGPQISVPZPIGDHCUZGQGLJPJAMIQIIEBSTEAYTVKLAWJYXQBVROEYMUZJIJXHLRHFIOQHUTWHADUOXTPVGOWIDTFCCXFKYRECTNUPTSMVBFMPNWXDHDDJICMLSSCWENLNDV");
    msg.acknowledge = 116U;
    msg.status = 126U;
    const signed char tmp_msg_0[] = {-4, 46, -72, 26, -100, -8, -104, 29, 83, -84, 17, 86, -124, -94, 73, 41, 36, 110, -50, -120, -35, -8, 42, -12, -24, -128, 28, 24, -57, 60, -22, 54, -30, -26, -47, -5, 80, 120, 70, 23, 69, 38, -39, -114, 62, 117, 17, -18, 101, 48, -80, 46, 37, -46, 58, 16, 7, -65, -4, 102, -8, -127, 17, -10, 102, -4, 34, 27, -25, -34, 95, -16, -16, -73, -98, 108, -17, -111, -55, -122, -27, 100, 59, -11, -121, 97, 47, 71, -118, -115, -42, -20, 118, -10, 48, 92, -10, 27, -81, 22, -104, -62, -95, -21, -43, 103, 59, 60, -110, -17, -65, -10, 120, -82, 5, 110, -29, 19, 68, 82, 84, 116, 94, -94, 78, -36, 36, -101, -41, -54, -87, -90, -126, 114, 6, 86, 35, 122, 73, 80, -10, -84, 27, 7, 116, 71, -17, 126, -72, -111, 18, -9, 72, -51, 112, -99, -28, 93, 15, -28, -45, -61, 71, -104, 51, 102, -128, 50, 38, 44, -98, 66, -55, 77, -80, -35, -94, -42, -26, 11, -57, 43, -127, -88, -92, 124, 121, -91, 65, -104, -79, 69, -23, -21, 100, -79, 83, 54, 99, -89, 46, 14, -60, -9, -5, -10, 25, 50, 6, -62, 9, -24, 48, 125, -57, 30};
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
    msg.setTimeStamp(0.9992306594164712);
    msg.setSource(62094U);
    msg.setSourceEntity(145U);
    msg.setDestination(9512U);
    msg.setDestinationEntity(22U);
    msg.type = 76U;
    msg.req_id = 2964451954U;
    msg.ttl = 57982U;
    msg.code = 214U;
    msg.destination.assign("DMWKAWTETVGMHRZWUHCMKTXAYYBMQGPUNDKLFJHCKCBJCTRNIZ");
    msg.source.assign("LBSVQVERQYALBIHBUWYGRMVMDPOKNPUHLJFIQDTWHJOMFYMBNSZPKBJGFACKGOLJVBITPMEPJHDWYQWK");
    msg.acknowledge = 177U;
    msg.status = 226U;
    const signed char tmp_msg_0[] = {-63, -33, -2, -117, 73, -52, -97, -49, -29, 117, 86, 55, -69, 21, -26, -120, -71, -115, 1, -59, 13, -34, 85, -33, -31, 38, 18, 59, -81, 11, -84, -24, -14, 86, -39, 108, 14, 20, 108, 2, -80, -12, 98, 126, -67, 53, -98, 32, -104, -113, 69, -45, -4, 120, 18, -67, 95, 75};
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
    msg.setTimeStamp(0.821745399072413);
    msg.setSource(9984U);
    msg.setSourceEntity(17U);
    msg.setDestination(16446U);
    msg.setDestinationEntity(139U);
    msg.id = 72U;
    msg.range = 0.30607274858200384;

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
    msg.setTimeStamp(0.42463976355040045);
    msg.setSource(5077U);
    msg.setSourceEntity(98U);
    msg.setDestination(57025U);
    msg.setDestinationEntity(129U);
    msg.id = 167U;
    msg.range = 0.5044793897745816;

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
    msg.setTimeStamp(0.13352538533187341);
    msg.setSource(18111U);
    msg.setSourceEntity(250U);
    msg.setDestination(13118U);
    msg.setDestinationEntity(34U);
    msg.id = 247U;
    msg.range = 0.49036563911919306;

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
    msg.setTimeStamp(0.7614136856167754);
    msg.setSource(41897U);
    msg.setSourceEntity(91U);
    msg.setDestination(21922U);
    msg.setDestinationEntity(151U);
    msg.beacon.assign("OQPONNMUZBRANGMWHKTKNPSFMABKPBLSLNQUFYWNCIILQRZIVBGNLPICTOFELETVSCXXBOPQCBJYEDOTLUYAQORFRWFHFMRXUTUX");
    msg.lat = 0.10728223159302297;
    msg.lon = 0.053732878043474486;
    msg.depth = 0.45297174933429485;
    msg.query_channel = 73U;
    msg.reply_channel = 136U;
    msg.transponder_delay = 101U;

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
    msg.setTimeStamp(0.08919267628918082);
    msg.setSource(54008U);
    msg.setSourceEntity(228U);
    msg.setDestination(36356U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("KPTFQCRIBQNGGSKLSMVYZMOXRRAJSEPAITTAUHBKFLKRTZHQENHYMMOSCSNPGFUIPEYWQIFWNNNCRZIHFNDLZGRFWSMUOWOXTETXQYTZCXMDCHVLVAJGYIFRXIXPVDHLUOZECHWHHEQEBZJKJGPJLNJDDWBLFDGPYUENDWOOALUAOWVPVPPQHVZTMXJ");
    msg.lat = 0.16837492693607425;
    msg.lon = 0.5011291496959493;
    msg.depth = 0.2620887652976671;
    msg.query_channel = 68U;
    msg.reply_channel = 241U;
    msg.transponder_delay = 182U;

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
    msg.setTimeStamp(0.1401281607985584);
    msg.setSource(17094U);
    msg.setSourceEntity(44U);
    msg.setDestination(50988U);
    msg.setDestinationEntity(124U);
    msg.beacon.assign("RNPMUFINMZUKMNRWQUQOBBBHQPJPAWCVTXEINQNYOUJTUYNCZLKGQHQXRFZERSRLSMDSOAVGOBDIEVTLGXPBYDWUEFRKZHTWAVBZFNWUSMJAKWEJNHRDGO");
    msg.lat = 0.021190171696877647;
    msg.lon = 0.7498634368738458;
    msg.depth = 0.24860123790439403;
    msg.query_channel = 78U;
    msg.reply_channel = 191U;
    msg.transponder_delay = 137U;

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
    msg.setTimeStamp(0.040765499924336424);
    msg.setSource(59595U);
    msg.setSourceEntity(205U);
    msg.setDestination(51815U);
    msg.setDestinationEntity(199U);
    msg.op = 56U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZNKAOTZDYBJVHSZRXOASWJSCNBHKFNXLMXEMGMMAQCFWVMEYBMBJJGVIQSYORRUEKSDPWVIVWIWOLPFMUJGZEQXFBNTWTSMHIRTJCUYOGLWKPEHWXOYZANAWUDDTVGGEKDNOPUCLFPVLCEUYVHGDNPILCUEOJVBHSBOKY");
    tmp_msg_0.lat = 0.6709277473068327;
    tmp_msg_0.lon = 0.2539370504018845;
    tmp_msg_0.depth = 0.5717823829699743;
    tmp_msg_0.query_channel = 247U;
    tmp_msg_0.reply_channel = 22U;
    tmp_msg_0.transponder_delay = 48U;
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
    msg.setTimeStamp(0.5269848502832729);
    msg.setSource(51639U);
    msg.setSourceEntity(4U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(212U);
    msg.op = 159U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NSIEKLNKVZIHKBRDGLATLRAXFCROUTXEOZDQWIPGJARSLXFQSZKINLYCZJRZJODIPISBBIORNEFTFMWQNPPHPVKLQTBQLSATLEGPFVNACDORUXKWDVMYOYVUWGGCGIHMMHXDEJPEULVPMJHCIUKZUGIOGXDCTSJHSLYPVKQBWEDZWVRWQXTSUQUXZJAQWWFCBFDEPGTECNMYZSH");
    tmp_msg_0.lat = 0.7317456937178648;
    tmp_msg_0.lon = 0.5186889221331531;
    tmp_msg_0.depth = 0.3358306439588252;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 29U;
    tmp_msg_0.transponder_delay = 139U;
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
    msg.setTimeStamp(0.2395485555078264);
    msg.setSource(32517U);
    msg.setSourceEntity(18U);
    msg.setDestination(19653U);
    msg.setDestinationEntity(52U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.3653415531941724);
    msg.setSource(36181U);
    msg.setSourceEntity(31U);
    msg.setDestination(56502U);
    msg.setDestinationEntity(42U);
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.6024819062529486;
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
    msg.setTimeStamp(0.4590219924003651);
    msg.setSource(12053U);
    msg.setSourceEntity(218U);
    msg.setDestination(11301U);
    msg.setDestinationEntity(38U);
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.0009911761919187967;
    tmp_msg_0.sys_src = 28759U;
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
    msg.setTimeStamp(0.10210742723821964);
    msg.setSource(8431U);
    msg.setSourceEntity(167U);
    msg.setDestination(46412U);
    msg.setDestinationEntity(208U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 124U;
    tmp_msg_0.file.assign("CLJCUXEUBZONFFOQDFFGYQDYKZOWINIYYHNGGBMEYJOEGUKHRKLAAOIDWVNMDASVRDVHVTHUNWRNFILPIBTWAUZRWMCPSXESJOYWKCSTFMPNXBPQIJZRBSKYRSRXFMUCBSFENNWKLTWHVTZQUKQDVXTRKCSIZGC");
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
    msg.setTimeStamp(0.24585341593302823);
    msg.setSource(17619U);
    msg.setSourceEntity(172U);
    msg.setDestination(1119U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.9683396951294077;
    msg.lon = 0.8001615528149297;
    msg.depth = 0.29424696208614376;
    msg.sentence.assign("UGWUNVQNFRULYGOAVZOLPNYCKTOJXCNSZTEDOQMZSIHGELQFOXRHKWZCRKWTDXTSZKREAMCKZWYYMGPJHDKQEASYUMCTMQKQTAXBYWJMIDFUIUCENVIPUPJZADXEBADTKHGAWMNZIABXQPGAREIWHROSHCYHMOOGWHYBPCJ");
    msg.txtime = 0.33710045152825374;
    msg.modem_type.assign("WFLUKLZNJYCYWVPJAPRDIWEVWUAXAZDQLEUYSLNBTUKQFKZKGFCNFJDRUVGAHT");
    msg.sys_src.assign("UHWJGXUPVUPFBLFUISQHHCWLHEQWGMFIYKTJMRMTCCEOKXJZRSUMHULLALYXSKJEIDXKVNDGCCJWGATQNEYPAFZNDDYNACKNMAQJWTDQONQOYBTRLZTD");
    msg.seq = 23011U;
    msg.sys_dst.assign("OGWDEUSZVZQVAYRMPUGOPWELHYUNVPMFYFZARCNNSMYIBC");
    msg.flags = 189U;
    const signed char tmp_msg_0[] = {85, -97, -59, -38, 111, -33, 17, 60, -7, -121, -88, -115, 83, 116, -38, -16, 98, -82, 38, 25, 23, 0, -101, 101, -2, -40, -104, -2, -58, -99, 105, -78, 123, 92, -30, 18, 85, 32, -50, -25, -64, 84, -15, 106, -29, -4, -96, -101, -60, -87, 35, 106, 45, -96, 58, 116, 13, -70, -65};
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
    msg.setTimeStamp(0.18689287715742775);
    msg.setSource(1260U);
    msg.setSourceEntity(244U);
    msg.setDestination(33867U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.6219489394397284;
    msg.lon = 0.2865708074094494;
    msg.depth = 0.9603685757603297;
    msg.sentence.assign("UASAHUHOKQYZUYEEPCVAFTKWVMXYWZCIRPUBVDQEMGEQSYZMGRLLQFFYKJURQJMCVBOMUWIGIKVVMVVSNDDTRPJWHXOLXDAKSDAWQJFWQONCGGXTRLHZFTR");
    msg.txtime = 0.4054668683275956;
    msg.modem_type.assign("WLDDSLYWWUHJRDIAPCQNIIKGEKNQPDJOMKQTJVORIZOILMPPBRNLSHBXTGDFJBDJVCIUVNTBFN");
    msg.sys_src.assign("SSEQVRADFYVDQLXPEEEYHCIHWVTVZYQGWITKIPXUPXXKSRWEFTMGLOUHZYTYADZOASJFKLKGCGTOBWBFVGHQZXODUCDVTFFUBZPMFBANRAWWCTWGMPKJBDJAGL");
    msg.seq = 37007U;
    msg.sys_dst.assign("SXJOXXOIFJCDXRVKURRCFOZKINQGWIHXDNEQSVJTBZSPSLKGTBCAQJJAFIHDNZCGVTQZDKMZAVFYHDEAQFKKUNOFRHGBPDMRSMXYATPTMVJLUSLPUFZOGGXRDMQWPLDYEFWDONPCBS");
    msg.flags = 192U;
    const signed char tmp_msg_0[] = {-23, 35, -45, -37, -50, -53, -53, -122, -29, -37, 103, -34, -5, -9, 66, -122, -85, -81, -125, -29, -33, 121, 43, -18, -113, 71, -83, -36, -101, 100, 71, 90, 107, -62, 113, 89, -26, -55, -46, -18, 26, -118, -120, -19, 89, -5, 36, -46, 21, 28, 116, 34, -34, -103, -97, 105, 50, 2, -124, -76, -79, -103, -50, 120, 105, -49, -71, -2, 3, 1, -86, -107, 27, -66, 37, 29, 31, 68, 65, -51, 24, -101, 79, 13, 8, -49, 43, 71, 81, 41, 123, 47, 115, -52, 66, 28, 65, 91, 57, -109, -106, 71, -22, 49, -13, 121, 100, 92, 68, 47, 49, -119, -80, -54, 51, 112, 58, -77, 73, 42, -92, 9, -1, 7, -53, 95, -12, -31, 56, 9, -99, 79, 8, -84, -84, -83, 113, 93, -54, -112, -17, -89, -54, 79, -90, -3, -113, 25, 62, 30, 25, -11, 103, 41, 7};
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
    msg.setTimeStamp(0.9279508824861837);
    msg.setSource(46782U);
    msg.setSourceEntity(162U);
    msg.setDestination(48955U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.8069261353579886;
    msg.lon = 0.9986723123428619;
    msg.depth = 0.869623181124878;
    msg.sentence.assign("COEKCEAIWXTASOXDQPWWVPXLQVFHCEFHBHGVGEYGRDINUWJBUXIQQJEUKUHZXNRFXMZBPTFXLNLLELHCTMHZCWDRUVSYISBBVAUTQUKMJPZSTWVJRNZBBSXFOINGQQUOKMJPMNVYWIEYAWZTPOCOVOJIITFZNFAHALMRJTHYLGYYOADJIELSDKFMCKYDLRQKVIKDDCPULBBPRGHROOWMESTSWAGJNDQAZYCFPGNPMQXSRXKVFN");
    msg.txtime = 0.4729331817867477;
    msg.modem_type.assign("LICJXZYXMGGXMUYCDTSPJWCPNAUT");
    msg.sys_src.assign("FBHPXZQSMUIANOGNACCIBZKJAZNS");
    msg.seq = 45773U;
    msg.sys_dst.assign("XOMKOOWBNENYYEAXPSQSYEIVAVURJDHJMBTZXGWMGJRLNLCPHPNFZHQBOPJPUZZGMDQDVINEECDAUFZRTEDWICMYNNTHRUGJG");
    msg.flags = 164U;
    const signed char tmp_msg_0[] = {-4, -76, 96, 92, -29, 48, -44, -70, -109, 45, -69, -84, -35, 12, -29, 80, 40, 65, 111, 48, -59, 110, 20, 109, 91, 18, -50, -106, -33, 36, -72, 59, -88, 62, -123, 69, 113, -82, -124, 6, 63, -127, -128, 53, 111, 69, 65, 57, -102, 122, 39, -47, -70, 74, 108, 22, -113, -122, 84, 75, -108, 52, -17, -61, 4, 60, -37, -121, 51, -38, 56, -90, 37, 112, -22, 21, -42, -15, 84, 76, -60, 84, 61, 93, -89, -51, -5, 81, 116, 116, -62, 45, -79, 51, 45, 83, 48, -48, 15, -79, -73, 84, 96, -128, 5, -86, 114, 51, 28, 40, 29, 57, -107, 28, -121, 67, 115, -78, 117, -66, 124, 21, -37, -109, 109, 2, 42, -106, -33, 44, 15, -69, 23, 21, -57, -38, -111, 72, 69, 102, -86, -109, -88, -128, -25, -40, 114, -73, -64, 86, 15, -78, 90, 87, -3, -27, 83, -51, 64, 92, 126, 106, -7, 80, -108, -117, 93, 13, -100, 43, 58, 21, 59, 83, 50, 15, -127, -29, -48, 79, -22, -25, -69, -74, -69, 2};
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
    msg.setTimeStamp(0.267788644802189);
    msg.setSource(36165U);
    msg.setSourceEntity(167U);
    msg.setDestination(10757U);
    msg.setDestinationEntity(193U);
    msg.op = 226U;
    msg.system.assign("BLGHZWBUDWKZDPGCQAVTEPBXMNCXNCVFGPHCQYREPIEBPWWRNINWJTKTOOOXXXSGPIDKTJREIRACDAVORNTWOKZHOJCNZBOCYBNQYYOTWGLIOABUATFLDVPJVAMFQGEBBTZPRMUGUMKSZYVXSLDSNBAWJODHEFULXJJLQQZYSLHSQAAFTJUGIFEJHMQYMLWRNYXIYXCKHSUQVRFDIMVJMGRCKDZMZEIELQTE");
    msg.range = 0.4507702350777373;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 35U;
    tmp_msg_0.htime = 0.5960453335033079;
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
    msg.setTimeStamp(0.07340683574262052);
    msg.setSource(63608U);
    msg.setSourceEntity(40U);
    msg.setDestination(25007U);
    msg.setDestinationEntity(62U);
    msg.op = 209U;
    msg.system.assign("CXJYTJMVEOARJIIUOCDNHEHIQQYNVGEXPHEBANEPGZRXIUGMXNZNDEBQATCPTQVTNRRBYBFOUQVKNXZJPSZUALSWZPXFQUHMYPOGSMLNYCZCAWOSTIFWPIDIWEAAKMDKJNUCDDTVCRBAWQFSUBSREKVDKXVLKWJGVMEKYWMKRGNWUHDSCFLFUFRCQQELXPGTOYLQIIBSWRJDFBOUJSTJH");
    msg.range = 0.9454858049585481;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YPONIINXRQTREXZFMWC");
    tmp_msg_0.attr_type = 44U;
    tmp_msg_0.min.assign("APHBYWUPJAZUTTLDYRKCXMCEMWJIRBAPOKXETVQOKHIIWXJJMJWDEGRUODPEROGVLXVEHYOBHHZSURNWBKDNNAZDVBYTNYYFXAUVYQFHYGCKIBGAHQTOMZFMJMQLRXFLKUELCGVC");
    tmp_msg_0.max.assign("HVKGTTCXWSQVAQJOUPNPMZYZOFMKGUDWGY");
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
    msg.setTimeStamp(0.30463901583008834);
    msg.setSource(18511U);
    msg.setSourceEntity(251U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(147U);
    msg.op = 16U;
    msg.system.assign("ZHLAVAKFRTDXTQHKMYEXFHTDMKIFUENTHJSGZLKDHXPFGJIYFEKXFSWBJVBQIBHEBLRCCDQIEZZJTYJZWCAIDVCUHMOCNNOBMRQTUUWVALQNAESQQZPPBTZYGPOUMBRTAKURPYTGOXYKVQDWGMFIBWLPXROOCJOKRHNMUXASGNVXUYTGNJMJXJSDER");
    msg.range = 0.12424345292236283;
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 251U;
    tmp_msg_0.req_id = 3725247750U;
    tmp_msg_0.ttl = 44487U;
    tmp_msg_0.code = 122U;
    tmp_msg_0.destination.assign("SQQVORVNUAGYZXGPEDEFQMCNKWSUKSUNSFIKWMGBFPJ");
    tmp_msg_0.source.assign("UVRYORTGPPUBMNRIVPLRCNKVSLAWCXGCAJAKGIWWNDJOKJFLEOQNDWSEMSSQUQBNJOEMGCAFUARDHFLQHJKQYWJZAUMMXYEZKGYQVYWTXFGRVZIGIDIXLYDSVGRJHCVNKWVZZD");
    tmp_msg_0.acknowledge = 84U;
    tmp_msg_0.status = 125U;
    const signed char tmp_tmp_msg_0_0[] = {-60, -87, -104, 84, 32, 0, 46, 44, 114, 33, 106, 66, -115, 95, -15, -108, -63, -68, -45, -19, -38, 124, -42, 2, 98, 101, 112, 2, 77, -107, 117, 30, -31, 52, 38, 99, -37, 64, -116, 71, 37, 122, -127, -40, 7, 111, 111, 124, -99, 3, 55, 91, 118, -94, -37, 9, 125, -56, -113, -66, -83, 104, -28, 117, 35, -38, 82, -50, 9, -54, 8, 117, -31, -66, 124, -105, 98, 74, -127, 54, -14, -80, -52, 107, -18, -103, 45, 85, 49, -116, -80, 3, -62, -93, -11, -80, 94, -109, 76, -128, -83, 104, -120, -105, -61, 76, 108, 46, -13, 104, -2, 8, -105, 42, 32, 5, 13, -7, -99, -23, -21, 88, -50, -43, 35, 96, -81, 9, -82, 56, -35, 101, 102, -124, -36, 13, -109, 68, -14, 16, -8, 53, 26, 96, -46, -22, 31, 87, -65, 117, 82, -126, -99, -40, -62, -34, 97, -117, -78, 105, 79, -9, -7, -69, 40, -65, 97, 121, 104, -34, 83, 81, -86, 91, -88, 47, -20, -77, -75, -41, 33, -87, 98, 76, -11, -88, -64, -51, -44, -85, 58, 12, 112, -118, 105, -73};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.2778405599085785);
    msg.setSource(54794U);
    msg.setSourceEntity(166U);
    msg.setDestination(40625U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.46905211427979365);
    msg.setSource(7778U);
    msg.setSourceEntity(75U);
    msg.setDestination(5717U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.06801233580596544);
    msg.setSource(63195U);
    msg.setSourceEntity(94U);
    msg.setDestination(62322U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8156139529674202);
    msg.setSource(18415U);
    msg.setSourceEntity(144U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(28U);
    msg.list.assign("EMITBDOBTAXNBQVDNSSLAJCGFUGIYPUKXKOBZOKBYXGBKWNZXAFNPDHKJOMWKMJMUYBQFMSSFCVDNMNRPOSYJSITJYWEFAULSXC");

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
    msg.setTimeStamp(0.4773537470132535);
    msg.setSource(41687U);
    msg.setSourceEntity(50U);
    msg.setDestination(37458U);
    msg.setDestinationEntity(162U);
    msg.list.assign("GWWKNBTVQIEBKSFIUQXHBQJCDMOYAJHYKUWFEGEAPQMELXLEEOSSIFDEFOKNVICJTNPQVSZVDCGAPPRHKVXMYRYIDLRZNTTVFFBZOSUWKLVNMTBLHXZGYTMPM");

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
    msg.setTimeStamp(0.7678609012425357);
    msg.setSource(33830U);
    msg.setSourceEntity(6U);
    msg.setDestination(45117U);
    msg.setDestinationEntity(23U);
    msg.list.assign("BWVNYTCJKSPUMLAYEYCNXSHXEGZZWEMWASRXTHIGRTCZGRBDXCVQKTTJUTQVR");

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
    msg.setTimeStamp(0.21964010691694236);
    msg.setSource(6897U);
    msg.setSourceEntity(100U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(142U);
    msg.peer.assign("AHQFUBDGWPPJHPYBLJ");
    msg.rssi = 0.15134151240257276;
    msg.integrity = 36776U;

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
    msg.setTimeStamp(0.9096846950866874);
    msg.setSource(26151U);
    msg.setSourceEntity(196U);
    msg.setDestination(20450U);
    msg.setDestinationEntity(66U);
    msg.peer.assign("MXLFPFZTSWIQFLLEBVPMQXTCWEXRNQRVGPAEMMNUSRKOMXUORFJHVAGBNNREDEKKFOELVLETBHVSSAGRBPTLRAVXYDZNUHCAZLYEICVXJVLHXBHQCOIDMJPKDLHIJZSYOQSUWQCYHOUZYGGSOCNCTUJYBZGNTZXHKAVWUYOAIYANGDNEJQHS");
    msg.rssi = 0.8430028679256998;
    msg.integrity = 24263U;

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
    msg.setTimeStamp(0.20263033096830274);
    msg.setSource(7197U);
    msg.setSourceEntity(72U);
    msg.setDestination(40403U);
    msg.setDestinationEntity(126U);
    msg.peer.assign("YIBUMJONBMZCNJCRPBKNTULEWDDKHSJNXVSWXGVTYZFNIFUMGGXZUSFQRGXBWTKJCYRHUUKRHDXMHAGRNSTWEOZFFNISFVHTQCLEOSBFYKIPMOSLLARSPNRVMAVJKVMENCEHVFPJQDBANGJEVUAWWOAQZHXQGLYZODUPRFIQISIJAHDOBITAQ");
    msg.rssi = 0.8458483915497095;
    msg.integrity = 2729U;

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
    msg.setTimeStamp(0.18807686435700255);
    msg.setSource(45844U);
    msg.setSourceEntity(214U);
    msg.setDestination(36187U);
    msg.setDestinationEntity(79U);
    msg.req_id = 22826U;
    msg.destination.assign("SKYIRBKBKFOJNPEYACEYUEKVCMJRMZRCYWPWTXDCEEOHRUZLZKAXDADOLSQASCUCVWKCXSZQFPGTFQJWKNKZQSQWHKWMOWOQNDNMEBRAMSRZHJGBNLXVDNLBOSDUBEVW");
    msg.timeout = 0.894563206399907;
    msg.range = 0.6048302642873512;
    msg.type = 129U;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 9403U;
    tmp_msg_0.destination.assign("PAWGFELOWJYXPAIFZGSTKWEBMCRDAWQPJTAHPWCAQYUHXHXDCVEVWYLNTLAYPQZQLTKHTTUGGBYOSZFSEVTHNSCDCLEBWKNRKNUFRQLNXSFUJPCUCHDDKYBJFMAJEXFLGRXJEUVBMMJVKIYEQUNIVVUCEXUBOHWIIZORKMNDDQZQNVZCZRUDGLLOIMJFTTINOHXJRGKCKZPIWFLWVISOG");
    tmp_msg_0.timeout = 0.14029942588664512;
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 57202U;
    tmp_tmp_msg_0_0.lat = 0.546171306052317;
    tmp_tmp_msg_0_0.lon = 0.653502142485132;
    tmp_tmp_msg_0_0.z = 0.9944045380931827;
    tmp_tmp_msg_0_0.z_units = 242U;
    tmp_tmp_msg_0_0.speed = 0.9691748662140035;
    tmp_tmp_msg_0_0.speed_units = 192U;
    tmp_tmp_msg_0_0.custom.assign("KXHTNHOHSMOBKIGXNJJJLXECBISWDDWMNUAAGOQJKWYPHQQWLRGUUYGPDAQKYAWBVQYZQBEACDEATFPZGXQBCLXNFOUTWDXDSKTCJCYRHNGBHUOVMZTMHRGLUKYYDIJKJXCEBYZPWMYAZKPLEAMZUVRIRZJFVEVUHIVNRCABLLSDDIZMZWQC");
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8184254135958271);
    msg.setSource(64255U);
    msg.setSourceEntity(52U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(127U);
    msg.req_id = 2042U;
    msg.destination.assign("GEXNMYZKKDOUQISWFBPFAUTEDTT");
    msg.timeout = 0.7830846691226863;
    msg.range = 0.7764986287427716;
    msg.type = 11U;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.9580013636685116);
    msg.setSource(51844U);
    msg.setSourceEntity(42U);
    msg.setDestination(20650U);
    msg.setDestinationEntity(103U);
    msg.req_id = 42391U;
    msg.destination.assign("ZSBTUOTBIPRUKMQLCWMCUFLLNNBPQTJZEGASVYWCMFFHJWZGMGOGDHTLWRMTPTVOZCNSETINASRQRPFHUGPBSIKAURVI");
    msg.timeout = 0.23885563931368625;
    msg.range = 0.7960413328919334;
    msg.type = 15U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.8543867312385014;
    tmp_msg_0.lon = 0.8874335747162477;
    tmp_msg_0.z = 0.27363033599447717;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.speed = 0.42165915777291973;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.bearing = 0.9141867513202423;
    tmp_msg_0.cross_angle = 0.33592488712563684;
    tmp_msg_0.width = 0.710143124550019;
    tmp_msg_0.length = 0.09692182347014155;
    tmp_msg_0.coff = 83U;
    tmp_msg_0.angaperture = 0.9567564966298711;
    tmp_msg_0.range = 22383U;
    tmp_msg_0.overlap = 132U;
    tmp_msg_0.flags = 171U;
    tmp_msg_0.custom.assign("VUPCZQVTRUILRFDHCPVOABQEWCABRRFNGZWAHXNPQZCKIXKHXTILNWTOOHFNGBLWEOCJVXXFTHZJQLLGBTRUVSJUHOVJWYR");
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
    msg.setTimeStamp(0.13470344228591236);
    msg.setSource(62194U);
    msg.setSourceEntity(67U);
    msg.setDestination(45966U);
    msg.setDestinationEntity(172U);
    msg.req_id = 7565U;
    msg.type = 75U;
    msg.status = 144U;
    msg.info.assign("ZMCLCRUDXUMQVTMSQWKIKZFILGDQBYEOBSISOFUFCAZNKTUSHIYCTWOMMSHGRFOJAKPUMNVHWAKGZHBNHDBGPFVNTGQOXJLYKXLEPLXRPDKZYLTFGCBMOOVCXCRIITRHNKYEPZJPBHELBXSCJNVARSVWRQHHEKSJIYOJHKCPBNQNXLYBMDRDZUSBALZOUAZODQCQYSVQNYTVVJEGETFQVWIMTAATWWRURZEXIMYDDPAWFIWFNUXAWUFXJEGJD");
    msg.range = 0.9977173796399832;

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
    msg.setTimeStamp(0.3696990468857859);
    msg.setSource(58660U);
    msg.setSourceEntity(247U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(242U);
    msg.req_id = 51796U;
    msg.type = 15U;
    msg.status = 155U;
    msg.info.assign("NVKPJDLMNORXMUJFQUPZWWGTTQQOJVKSKEUYEQOMYVWCDJZPYRBEBDKWIRBUXHSYCZGIJSVKICJQWGFQPLDXTGZIBFROJFMADYEUXWJVAAVQRTRWFMWQPDAGLCAZOTTPTNEZSKAAUBUYSCNLOKLNMBBTXEYHHEWBGDXVCVBFALZOHIIXFXZUVXPDJGUZUGPKPDMBICCRAHYNNSRCGRKNSYXSMKHAYOHNPJFRIQNE");
    msg.range = 0.31677814638636803;

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
    msg.setTimeStamp(0.40432629120205965);
    msg.setSource(7157U);
    msg.setSourceEntity(91U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(192U);
    msg.req_id = 59218U;
    msg.type = 159U;
    msg.status = 30U;
    msg.info.assign("YDVGQWXIYXYEAZMPKSDAQQNUZOSZTDGBKISFGMKEUTKXWARUUXK");
    msg.range = 0.13340795842335906;

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
    msg.setTimeStamp(0.6417450121851745);
    msg.setSource(33721U);
    msg.setSourceEntity(183U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(201U);
    msg.system.assign("WNFSFPMCZVRYWSYLWYVEVHWCEENDTPFZYNWFKAVO");
    msg.op = 45U;

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
    msg.setTimeStamp(0.43968791705172816);
    msg.setSource(10426U);
    msg.setSourceEntity(230U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(47U);
    msg.system.assign("PXOCJFIOGHQZSBEWWUKCHBGQWBYSJVMWGIRJEHVXMDXMNQWLYZLKTTNKDHNXQIFEVRLDHVVECMQRWQGHGNASMSNJUSDRICPOUKKYAKRIRBTUJLLPXFSYDMHNBXWRIDSGIZBBYUBPVAUIQOOMCGOAATUIVTAQPIOJTDYVJNRTQUKZTVOEPAAUGEFPRZKFKEHFYJWPLJSZADFYPMPEYGXMCTANBL");
    msg.op = 126U;

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
    msg.setTimeStamp(0.3452083382408594);
    msg.setSource(24131U);
    msg.setSourceEntity(46U);
    msg.setDestination(46736U);
    msg.setDestinationEntity(154U);
    msg.system.assign("PZNSBLOCUROTJICDYQWFQPRSGLYKOAEXSXEAEUWLHTBNLEVCHAHDSOQIDTETIBRLLJCYMRFUAXSKGBOMVJCHFNUQRSGJNDYXDIAZWUWTMOOGGUSPDNCUTAKLFUXHXRMWTXCUSQKQTMVKVD");
    msg.op = 64U;

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
    msg.setTimeStamp(0.9600024562180263);
    msg.setSource(11353U);
    msg.setSourceEntity(132U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(25U);
    msg.value = 11744;

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
    msg.setTimeStamp(0.9054132658843245);
    msg.setSource(39344U);
    msg.setSourceEntity(84U);
    msg.setDestination(31317U);
    msg.setDestinationEntity(65U);
    msg.value = -23514;

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
    msg.setTimeStamp(0.5414220193272101);
    msg.setSource(13821U);
    msg.setSourceEntity(248U);
    msg.setDestination(2192U);
    msg.setDestinationEntity(27U);
    msg.value = 8957;

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
    msg.setTimeStamp(0.4522544401089058);
    msg.setSource(44392U);
    msg.setSourceEntity(12U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(254U);
    msg.value = 0.7545166754006806;

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
    msg.setTimeStamp(0.23536288696903596);
    msg.setSource(60008U);
    msg.setSourceEntity(38U);
    msg.setDestination(53315U);
    msg.setDestinationEntity(39U);
    msg.value = 0.08838866029702086;

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
    msg.setTimeStamp(0.6480396083144148);
    msg.setSource(18249U);
    msg.setSourceEntity(110U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(249U);
    msg.value = 0.24172711963487026;

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
    msg.setTimeStamp(0.547788549943296);
    msg.setSource(1165U);
    msg.setSourceEntity(14U);
    msg.setDestination(57264U);
    msg.setDestinationEntity(105U);
    msg.value = 0.7586649479258422;

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
    msg.setTimeStamp(0.06084627090315364);
    msg.setSource(12228U);
    msg.setSourceEntity(81U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(71U);
    msg.value = 0.7642637776962177;

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
    msg.setTimeStamp(0.1945628855988938);
    msg.setSource(20435U);
    msg.setSourceEntity(83U);
    msg.setDestination(63963U);
    msg.setDestinationEntity(102U);
    msg.value = 0.08558695163732621;

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
    msg.setTimeStamp(0.1290220576033564);
    msg.setSource(2714U);
    msg.setSourceEntity(233U);
    msg.setDestination(55991U);
    msg.setDestinationEntity(60U);
    msg.validity = 6838U;
    msg.type = 209U;
    msg.utc_year = 2417U;
    msg.utc_month = 51U;
    msg.utc_day = 243U;
    msg.utc_time = 0.9468323941138554;
    msg.lat = 0.8971654778910653;
    msg.lon = 0.22057935353153446;
    msg.height = 0.026568878384151673;
    msg.satellites = 246U;
    msg.cog = 0.6325425184453838;
    msg.sog = 0.5240493508126697;
    msg.hdop = 0.8259685676208568;
    msg.vdop = 0.1796405022291212;
    msg.hacc = 0.9241767738807803;
    msg.vacc = 0.9799778769022394;

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
    msg.setTimeStamp(0.8603440874334775);
    msg.setSource(53238U);
    msg.setSourceEntity(204U);
    msg.setDestination(21262U);
    msg.setDestinationEntity(213U);
    msg.validity = 65114U;
    msg.type = 189U;
    msg.utc_year = 35915U;
    msg.utc_month = 217U;
    msg.utc_day = 80U;
    msg.utc_time = 0.8291983820306116;
    msg.lat = 0.2539023380533041;
    msg.lon = 0.7461752137809465;
    msg.height = 0.1799888961648124;
    msg.satellites = 92U;
    msg.cog = 0.5394333109147862;
    msg.sog = 0.6708548373143025;
    msg.hdop = 0.910120080371748;
    msg.vdop = 0.13035296887072279;
    msg.hacc = 0.7584920006472087;
    msg.vacc = 0.1740720065423177;

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
    msg.setTimeStamp(0.020738857561684143);
    msg.setSource(64135U);
    msg.setSourceEntity(200U);
    msg.setDestination(25584U);
    msg.setDestinationEntity(75U);
    msg.validity = 52389U;
    msg.type = 128U;
    msg.utc_year = 4535U;
    msg.utc_month = 103U;
    msg.utc_day = 122U;
    msg.utc_time = 0.7339643210640123;
    msg.lat = 0.7304064079166389;
    msg.lon = 0.7562608483789793;
    msg.height = 0.8738357428550476;
    msg.satellites = 84U;
    msg.cog = 0.7795351562833084;
    msg.sog = 0.22574790350254004;
    msg.hdop = 0.5529132842717516;
    msg.vdop = 0.3396059806973193;
    msg.hacc = 0.7426962951108894;
    msg.vacc = 0.7349982496629152;

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
    msg.setTimeStamp(0.9801548399047536);
    msg.setSource(49156U);
    msg.setSourceEntity(108U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(248U);
    msg.time = 0.8286213983578484;
    msg.phi = 0.24420348358999344;
    msg.theta = 0.33335502643198756;
    msg.psi = 0.42519122980847135;
    msg.psi_magnetic = 0.19459841023525093;

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
    msg.setTimeStamp(0.1672385187571892);
    msg.setSource(34852U);
    msg.setSourceEntity(174U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(204U);
    msg.time = 0.8894887502337865;
    msg.phi = 0.24686133416470812;
    msg.theta = 0.563053439937388;
    msg.psi = 0.8601954997518536;
    msg.psi_magnetic = 0.581120222639801;

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
    msg.setTimeStamp(0.9950851807749754);
    msg.setSource(63560U);
    msg.setSourceEntity(105U);
    msg.setDestination(46517U);
    msg.setDestinationEntity(247U);
    msg.time = 0.5540543145053263;
    msg.phi = 0.8509323776853059;
    msg.theta = 0.2959219642562364;
    msg.psi = 0.8654270490216935;
    msg.psi_magnetic = 0.6598360291618769;

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
    msg.setTimeStamp(0.6795378542301618);
    msg.setSource(65148U);
    msg.setSourceEntity(206U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(171U);
    msg.time = 0.2624292221425307;
    msg.x = 0.426209737351663;
    msg.y = 0.917875411332829;
    msg.z = 0.3390186959594331;
    msg.timestep = 0.5476969748874646;

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
    msg.setTimeStamp(0.5415185591541776);
    msg.setSource(57088U);
    msg.setSourceEntity(28U);
    msg.setDestination(24103U);
    msg.setDestinationEntity(41U);
    msg.time = 0.23045726025510338;
    msg.x = 0.5873870105168387;
    msg.y = 0.5937191744041401;
    msg.z = 0.28134916809458055;
    msg.timestep = 0.041132617279979855;

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
    msg.setTimeStamp(0.9127405953179925);
    msg.setSource(26153U);
    msg.setSourceEntity(241U);
    msg.setDestination(62600U);
    msg.setDestinationEntity(125U);
    msg.time = 0.9745188631282375;
    msg.x = 0.002412804569280169;
    msg.y = 0.45696601953907157;
    msg.z = 0.5139573503675757;
    msg.timestep = 0.6457016770312769;

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
    msg.setTimeStamp(0.750737684527925);
    msg.setSource(63584U);
    msg.setSourceEntity(64U);
    msg.setDestination(37126U);
    msg.setDestinationEntity(67U);
    msg.time = 0.01524187135697097;
    msg.x = 0.8255716043379077;
    msg.y = 0.6059749097079243;
    msg.z = 0.8326903085302108;

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
    msg.setTimeStamp(0.3478487156013692);
    msg.setSource(34818U);
    msg.setSourceEntity(131U);
    msg.setDestination(56079U);
    msg.setDestinationEntity(146U);
    msg.time = 0.45664143766047294;
    msg.x = 0.18721779307550912;
    msg.y = 0.42592494308728346;
    msg.z = 0.288259088070004;

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
    msg.setTimeStamp(0.5562972048425668);
    msg.setSource(52096U);
    msg.setSourceEntity(246U);
    msg.setDestination(3292U);
    msg.setDestinationEntity(194U);
    msg.time = 0.04426123737315257;
    msg.x = 0.9786923590374421;
    msg.y = 0.586237904155835;
    msg.z = 0.12763769997836838;

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
    msg.setTimeStamp(0.781847297064459);
    msg.setSource(1444U);
    msg.setSourceEntity(49U);
    msg.setDestination(12334U);
    msg.setDestinationEntity(49U);
    msg.time = 0.4034903931837275;
    msg.x = 0.9979363104972107;
    msg.y = 0.6044501519923935;
    msg.z = 0.02355702029316098;

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
    msg.setTimeStamp(0.8567222106259889);
    msg.setSource(2229U);
    msg.setSourceEntity(41U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(250U);
    msg.time = 0.5732021707983831;
    msg.x = 0.34759739825161384;
    msg.y = 0.3822282077656439;
    msg.z = 0.046180783742289955;

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
    msg.setTimeStamp(0.13993494015646746);
    msg.setSource(53192U);
    msg.setSourceEntity(201U);
    msg.setDestination(34843U);
    msg.setDestinationEntity(23U);
    msg.time = 0.6676132012420655;
    msg.x = 0.22247658171738727;
    msg.y = 0.03820950128974754;
    msg.z = 0.9006799047130547;

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
    msg.setTimeStamp(0.2621964865628974);
    msg.setSource(37806U);
    msg.setSourceEntity(162U);
    msg.setDestination(14266U);
    msg.setDestinationEntity(147U);
    msg.time = 0.26948959829210706;
    msg.x = 0.43053420432067124;
    msg.y = 0.0639141038024782;
    msg.z = 0.6372467068513371;

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
    msg.setTimeStamp(0.2318755481652568);
    msg.setSource(5180U);
    msg.setSourceEntity(75U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(180U);
    msg.time = 0.6639680324182099;
    msg.x = 0.9195252901638545;
    msg.y = 0.9451780496694062;
    msg.z = 0.8271385021787148;

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
    msg.setTimeStamp(0.4549854985862444);
    msg.setSource(51735U);
    msg.setSourceEntity(248U);
    msg.setDestination(32675U);
    msg.setDestinationEntity(233U);
    msg.time = 0.7450191295244931;
    msg.x = 0.2568477786532736;
    msg.y = 0.4756994799308186;
    msg.z = 0.5580082850315118;

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
    msg.setTimeStamp(0.38401514328878794);
    msg.setSource(2507U);
    msg.setSourceEntity(148U);
    msg.setDestination(42633U);
    msg.setDestinationEntity(242U);
    msg.validity = 213U;
    msg.x = 0.8569237562405781;
    msg.y = 0.6756354501171454;
    msg.z = 0.9820944992897533;

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
    msg.setTimeStamp(0.9690767315075554);
    msg.setSource(61867U);
    msg.setSourceEntity(88U);
    msg.setDestination(13484U);
    msg.setDestinationEntity(206U);
    msg.validity = 67U;
    msg.x = 0.4779723301983071;
    msg.y = 0.37511740188628506;
    msg.z = 0.7612846969773128;

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
    msg.setTimeStamp(0.7411008383079422);
    msg.setSource(19201U);
    msg.setSourceEntity(241U);
    msg.setDestination(6691U);
    msg.setDestinationEntity(71U);
    msg.validity = 84U;
    msg.x = 0.4809687755173947;
    msg.y = 0.4734128896935267;
    msg.z = 0.2533247012919996;

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
    msg.setTimeStamp(0.7719393529363764);
    msg.setSource(40870U);
    msg.setSourceEntity(249U);
    msg.setDestination(56900U);
    msg.setDestinationEntity(124U);
    msg.validity = 162U;
    msg.x = 0.4394277791243527;
    msg.y = 0.16400958498595486;
    msg.z = 0.9506900646536237;

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
    msg.setTimeStamp(0.8275832568408588);
    msg.setSource(57385U);
    msg.setSourceEntity(38U);
    msg.setDestination(21533U);
    msg.setDestinationEntity(253U);
    msg.validity = 184U;
    msg.x = 0.9422177467916591;
    msg.y = 0.7761871081781971;
    msg.z = 0.5461714366365564;

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
    msg.setTimeStamp(0.7628481413810616);
    msg.setSource(823U);
    msg.setSourceEntity(185U);
    msg.setDestination(13961U);
    msg.setDestinationEntity(173U);
    msg.validity = 152U;
    msg.x = 0.9865567011432994;
    msg.y = 0.2521707067683189;
    msg.z = 0.769070391210272;

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
    msg.setTimeStamp(0.44450213766215774);
    msg.setSource(59881U);
    msg.setSourceEntity(182U);
    msg.setDestination(26518U);
    msg.setDestinationEntity(206U);
    msg.time = 0.1994834936992287;
    msg.x = 0.7338342377983064;
    msg.y = 0.48235690869233483;
    msg.z = 0.5409082652556538;

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
    msg.setTimeStamp(0.9558850497589914);
    msg.setSource(12073U);
    msg.setSourceEntity(144U);
    msg.setDestination(26872U);
    msg.setDestinationEntity(191U);
    msg.time = 0.6679370948026517;
    msg.x = 0.708065388823398;
    msg.y = 0.31478193637541807;
    msg.z = 0.35351458378209066;

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
    msg.setTimeStamp(0.32220184533429697);
    msg.setSource(25145U);
    msg.setSourceEntity(109U);
    msg.setDestination(5812U);
    msg.setDestinationEntity(161U);
    msg.time = 0.5954478148722775;
    msg.x = 0.9619954497585621;
    msg.y = 0.1727839139015065;
    msg.z = 0.9374402308434913;

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
    msg.setTimeStamp(0.6181025932562693);
    msg.setSource(37745U);
    msg.setSourceEntity(167U);
    msg.setDestination(52657U);
    msg.setDestinationEntity(223U);
    msg.validity = 49U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7980861154552671;
    tmp_msg_0.y = 0.10893830482328837;
    tmp_msg_0.z = 0.9278570257207782;
    tmp_msg_0.phi = 0.7058443519639238;
    tmp_msg_0.theta = 0.879073452070811;
    tmp_msg_0.psi = 0.5594018791367484;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.30811218140771146;
    tmp_msg_1.beam_height = 0.583953550709852;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5134104533200664;

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
    msg.setTimeStamp(0.09298268018540545);
    msg.setSource(29216U);
    msg.setSourceEntity(207U);
    msg.setDestination(48080U);
    msg.setDestinationEntity(101U);
    msg.validity = 1U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8656645210583197;
    tmp_msg_0.beam_height = 0.41057434381481617;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.04867036743243125;

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
    msg.setTimeStamp(0.5581522430565767);
    msg.setSource(43197U);
    msg.setSourceEntity(198U);
    msg.setDestination(51613U);
    msg.setDestinationEntity(239U);
    msg.validity = 35U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4167400675396953;
    tmp_msg_0.y = 0.9001860560656234;
    tmp_msg_0.z = 0.29003313937741104;
    tmp_msg_0.phi = 0.7055912500966375;
    tmp_msg_0.theta = 0.5744390972910355;
    tmp_msg_0.psi = 0.726279520944593;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7359213801863673;

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
    msg.setTimeStamp(0.22890650001563917);
    msg.setSource(36006U);
    msg.setSourceEntity(25U);
    msg.setDestination(9079U);
    msg.setDestinationEntity(239U);
    msg.value = 0.5117869716850141;

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
    msg.setTimeStamp(0.3201775813504797);
    msg.setSource(33393U);
    msg.setSourceEntity(199U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(140U);
    msg.value = 0.7101569955796971;

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
    msg.setTimeStamp(0.342418133074058);
    msg.setSource(30463U);
    msg.setSourceEntity(132U);
    msg.setDestination(3358U);
    msg.setDestinationEntity(1U);
    msg.value = 0.6090560236327118;

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
    msg.setTimeStamp(0.6563686783007031);
    msg.setSource(4080U);
    msg.setSourceEntity(240U);
    msg.setDestination(28988U);
    msg.setDestinationEntity(57U);
    msg.value = 0.21381136290837033;

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
    msg.setTimeStamp(0.6903263521287335);
    msg.setSource(4778U);
    msg.setSourceEntity(218U);
    msg.setDestination(48544U);
    msg.setDestinationEntity(51U);
    msg.value = 0.5775287798202158;

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
    msg.setTimeStamp(0.2575806338053753);
    msg.setSource(13728U);
    msg.setSourceEntity(102U);
    msg.setDestination(49987U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8086116275698664;

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
    msg.setTimeStamp(0.8426054738603285);
    msg.setSource(22577U);
    msg.setSourceEntity(137U);
    msg.setDestination(46019U);
    msg.setDestinationEntity(148U);
    msg.value = 0.10899628122980032;

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
    msg.setTimeStamp(0.6704907051924808);
    msg.setSource(44056U);
    msg.setSourceEntity(131U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(94U);
    msg.value = 0.36971317838292017;

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
    msg.setTimeStamp(0.9674782691878404);
    msg.setSource(33189U);
    msg.setSourceEntity(93U);
    msg.setDestination(5961U);
    msg.setDestinationEntity(236U);
    msg.value = 0.939010165607011;

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
    msg.setTimeStamp(0.8700612366762268);
    msg.setSource(36079U);
    msg.setSourceEntity(112U);
    msg.setDestination(32238U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6175675167025287;

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
    msg.setTimeStamp(0.02085817411951707);
    msg.setSource(41555U);
    msg.setSourceEntity(82U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(99U);
    msg.value = 0.812296691557837;

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
    msg.setTimeStamp(0.24271736775312247);
    msg.setSource(18279U);
    msg.setSourceEntity(23U);
    msg.setDestination(30757U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5303275019372465;

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
    msg.setTimeStamp(0.6679759919643977);
    msg.setSource(36388U);
    msg.setSourceEntity(3U);
    msg.setDestination(48758U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6142430393399951;

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
    msg.setTimeStamp(0.05591814079658608);
    msg.setSource(28387U);
    msg.setSourceEntity(240U);
    msg.setDestination(838U);
    msg.setDestinationEntity(5U);
    msg.value = 0.44914555173478454;

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
    msg.setTimeStamp(0.9882531309379099);
    msg.setSource(13529U);
    msg.setSourceEntity(32U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(7U);
    msg.value = 0.9975424020633741;

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
    msg.setTimeStamp(0.10764108696203223);
    msg.setSource(24497U);
    msg.setSourceEntity(109U);
    msg.setDestination(46387U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7908151163683601;

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
    msg.setTimeStamp(0.7815187435981115);
    msg.setSource(31855U);
    msg.setSourceEntity(104U);
    msg.setDestination(29906U);
    msg.setDestinationEntity(60U);
    msg.value = 0.6189962078191636;

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
    msg.setTimeStamp(0.24945506029778475);
    msg.setSource(58466U);
    msg.setSourceEntity(68U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(104U);
    msg.value = 0.1785373231101396;

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
    msg.setTimeStamp(0.4151205190713201);
    msg.setSource(42464U);
    msg.setSourceEntity(125U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(77U);
    msg.value = 0.09308836895015649;

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
    msg.setTimeStamp(0.32455747717776195);
    msg.setSource(51309U);
    msg.setSourceEntity(141U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(129U);
    msg.value = 0.7784214000281356;

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
    msg.setTimeStamp(0.7386808934840347);
    msg.setSource(42701U);
    msg.setSourceEntity(226U);
    msg.setDestination(28778U);
    msg.setDestinationEntity(135U);
    msg.value = 0.7919349876773616;

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
    msg.setTimeStamp(0.5925937793126079);
    msg.setSource(11907U);
    msg.setSourceEntity(197U);
    msg.setDestination(22404U);
    msg.setDestinationEntity(204U);
    msg.value = 0.06819518071122099;

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
    msg.setTimeStamp(0.05882685100254259);
    msg.setSource(42706U);
    msg.setSourceEntity(142U);
    msg.setDestination(36020U);
    msg.setDestinationEntity(122U);
    msg.value = 0.6621873281813523;

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
    msg.setTimeStamp(0.5057057721919065);
    msg.setSource(43597U);
    msg.setSourceEntity(215U);
    msg.setDestination(17807U);
    msg.setDestinationEntity(231U);
    msg.value = 0.061760556327916105;

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
    msg.setTimeStamp(0.09135876467021464);
    msg.setSource(52476U);
    msg.setSourceEntity(137U);
    msg.setDestination(13136U);
    msg.setDestinationEntity(15U);
    msg.direction = 0.021518400068925247;
    msg.speed = 0.8604837184079557;
    msg.turbulence = 0.8295041961144772;

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
    msg.setTimeStamp(0.9793773355169225);
    msg.setSource(38012U);
    msg.setSourceEntity(240U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.22193301496409745;
    msg.speed = 0.7640180500284738;
    msg.turbulence = 0.34677514861819914;

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
    msg.setTimeStamp(0.4575510317816136);
    msg.setSource(4963U);
    msg.setSourceEntity(22U);
    msg.setDestination(63911U);
    msg.setDestinationEntity(235U);
    msg.direction = 0.3981373043936284;
    msg.speed = 0.40643126985757305;
    msg.turbulence = 0.5470216568984981;

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
    msg.setTimeStamp(0.45611492503520334);
    msg.setSource(23947U);
    msg.setSourceEntity(235U);
    msg.setDestination(16532U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8739972785119757;

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
    msg.setTimeStamp(0.09319136461804545);
    msg.setSource(47367U);
    msg.setSourceEntity(163U);
    msg.setDestination(42362U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7105832814701972;

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
    msg.setTimeStamp(0.4159919933448676);
    msg.setSource(42998U);
    msg.setSourceEntity(16U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(33U);
    msg.value = 0.9046029383660923;

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
    msg.setTimeStamp(0.9667956471611862);
    msg.setSource(50407U);
    msg.setSourceEntity(146U);
    msg.setDestination(4657U);
    msg.setDestinationEntity(231U);
    msg.value.assign("NKMIRSUMVYSZMKAAHAEMKUNWICRFNHHOLDWJUBKLVEBEOFDJLVHFPRKVUXZNODTHARIGFFBSYVBQEUYUCAZCCRBCML");

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
    msg.setTimeStamp(0.008449921706694452);
    msg.setSource(38828U);
    msg.setSourceEntity(44U);
    msg.setDestination(56157U);
    msg.setDestinationEntity(250U);
    msg.value.assign("XAZATNHBYWPJMMGNDTVTVMZOURFKWBELLKQJFZONFXCJYIPALDKYHOZKAFAEUQEKNVBQNHSXRXQPVGTAPHKVNBKGJZKGMUWVIBYOUOHW");

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
    msg.setTimeStamp(0.9242446995219271);
    msg.setSource(57613U);
    msg.setSourceEntity(203U);
    msg.setDestination(57035U);
    msg.setDestinationEntity(223U);
    msg.value.assign("WLRACSNJMLTUEBRVGKJEGBNHRLQMDXAIRDUQXUIIENEYHAZJKGKMKFPZBZVUNLPTLJHUOPJMFEYDDSVCYFOGKAXQHHZPGVBXRSZESIXHCLXUIOOJQBQCGYXWODHJNSGDTLFXOUBHCMAITIKXP");

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
    msg.setTimeStamp(0.9980777224521756);
    msg.setSource(2071U);
    msg.setSourceEntity(172U);
    msg.setDestination(49640U);
    msg.setDestinationEntity(219U);
    const signed char tmp_msg_0[] = {76, 69, 22, -123, -70, -105, -34, -118, -5, 120, 44, 29, 119, -47, -119, 1, -110, 59, -125, 94, -55, 67, 85, -84, -23, -43, -51, 14, 84, 92, -79, 93, -127, 88, 46, -109, 85, -117, -40, 36, -114, -71, -70, 108, 85, -5, 71, -80, -71, -87, 50, -40, -41, 74, 60, 106, -116, 125, -68, -39, -127, 30, -71, -12, 106, 111, -10, 97, -65, -90, -58, -37, 117, -31, -48, -19, -100, 119, -109, -31, -47, -25, 102, -100, -90, 1, 39, -26, -91, -2, -42, -12, 121, 23, -4, 9, -24, 54, 117, 124, -5, -89, -45, -7, 80, 14, -99, -41, -51, 6, -7, -95, 33, 111, 122, 77, 85, -89, -93, -6, -50, 66, 102, 31, -65, 37, 83, -109, 60, -24, 33, -75, -106, 91, -112, -61, -41, 51, -89, -122, -5, 52, -116, 79, -26, -94, -7, -68, -53, 34, 57, -59, 73, -58, -43, -8, -16, -27, 68, 65, -43, 69, -117, -65, 112, -98, 45, 93, 59, -124, -56, 65, 10, 120, -72, -48, -42, 8, -111, -60, -9, 71, 65, -88, 43, -91, 81, -83, -62, 110, -94, -52, -52, 87};
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
    msg.setTimeStamp(0.9770732255240709);
    msg.setSource(50751U);
    msg.setSourceEntity(79U);
    msg.setDestination(63813U);
    msg.setDestinationEntity(102U);
    const signed char tmp_msg_0[] = {43, -88, -93, 64, 68, 97, -124, 97, -37, 44, 104, 82, 40, -63, -48, 37, 40, -25, -114, -20, -116, 14, 34, 34, 42, 3, 103, -89, -16, -49, 60, -48, -11, -85, 63, -17, -105, 88, -43, -43, -87, -122, 123, 54, -85, -9, 103, 56, -106, -42, 53, 105, 123, -69, 74, 59, 60, -16, -8, -5, -75, -87, -24, -77, -94, 2, -48, -6, -105, 74, -108, 19, 9, -33, 98, -119, -77, 50, -50, -110, -5, 109, 13, 74, 2, 59, 108, -2, 60, -50, -103, -114, 56, -124, 40, -74, 54, 29, -54, 10, -34, -56, 116, -57, 102, 31, -74, 29, 91, 78, -79, -40, 106, 90, 23, -74, 99, -22, -82, 0, 9, -63, 0, -44, -17, 3, -5, -25, 18, -87, -2, -123, -115, 104, 37, 113, -79, 73, 79, 40, -73, 96, -70, -88, -71, 112, -20, -117, -45, -26, -63};
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
    msg.setTimeStamp(0.39250320840536446);
    msg.setSource(8765U);
    msg.setSourceEntity(112U);
    msg.setDestination(31716U);
    msg.setDestinationEntity(37U);
    const signed char tmp_msg_0[] = {113, 3, 11, 41, 119, -23, -103, -35, 96, -59, -21, 123, -58, 32, -63, 69, 105, -34, 90, 33, -25, 113, -49, -75, -121, 87, -84, 56, -32, 82, -75, -73, -30, 3, 49, -27, -4, -52, -31, 50, -100, -23, 94, 100, -73, 91, 102, -32, -108, 109};
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
    msg.setTimeStamp(0.765753558348793);
    msg.setSource(40503U);
    msg.setSourceEntity(103U);
    msg.setDestination(58285U);
    msg.setDestinationEntity(137U);
    msg.value = 0.478173993762517;

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
    msg.setTimeStamp(0.3795662929431445);
    msg.setSource(9333U);
    msg.setSourceEntity(68U);
    msg.setDestination(65013U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9969169562037945;

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
    msg.setTimeStamp(0.16539291974704262);
    msg.setSource(58860U);
    msg.setSourceEntity(181U);
    msg.setDestination(46424U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6538683214586594;

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
    msg.setTimeStamp(0.8751311056385167);
    msg.setSource(35641U);
    msg.setSourceEntity(101U);
    msg.setDestination(6411U);
    msg.setDestinationEntity(69U);
    msg.type = 181U;
    msg.frequency = 3175749109U;
    msg.min_range = 44878U;
    msg.max_range = 65220U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.28179330117630197;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9599546927651427;
    tmp_msg_0.beam_height = 0.8978899982698104;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-116, -12, 124, -15, -46, -14, 102, 65, 38, -91, 79, 74, -101, -72, 69, 117, 51, 106, 82, 15, 93, -41, 98, 115, 55, 72, 38, 36, 66, 115, -39, -122, 10, 41, -22, 94, 110, -123, 40, -4, 28, 68, -43, -63, -51, 94, 102, -47, -31, -95, 91, -40, 41, -87, 92, 46, 70, -26, 21, -21, -92, -128, 30, -2, 66, 100, 37, 116, -19, -111, 108, -70, 86, 108, 39, 42, 8, -76, -116, -99, 110, 67, 42, 82, 104, 89, -38, -115, -59, 53, 112, -64, -125, 70, -128, 80, -60, -34, 41, -31, 53, -111, 66, -13, -105, -74, 32, -11, 108, -84, -64, -88, -84, 18, 66, 52, 58, -87, 122, 64, -64, -38, 108, 23, -44, 47, 76, -27, -74, 61, 73, -73, 25, -115};
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
    msg.setTimeStamp(0.7629558149524452);
    msg.setSource(23651U);
    msg.setSourceEntity(203U);
    msg.setDestination(61912U);
    msg.setDestinationEntity(235U);
    msg.type = 157U;
    msg.frequency = 3113694695U;
    msg.min_range = 59246U;
    msg.max_range = 52448U;
    msg.bits_per_point = 131U;
    msg.scale_factor = 0.0153383286108284;
    const signed char tmp_msg_0[] = {96, 103, -29, 7, -112, 46, 126, 108, 111, -10, -95, 66, -27, -77, -65, -98, -11, 7, -112, -76, -35, 123, -46, -38, -43, 6, 25, -121, -40, 14, -59, -54, 59, 90, 7, -59, -19, -93, 98, -87, -89, -34, -111, -103, -128, 4, 22, 99, 1, -17, 6, 13, 47, 79, -105, 114, 27, -3, 95, 82, 24, -66, 69, -97, 114, 79, -72, -101, 107, 25, 88, -1, -12, 47, -64, 97, 20, 88, 10, 80, -43, -108, -56, 14, 116, -4, -58, 116, -59, -50, -83, -90, -102, 102, -92, -94, -21, 3, -117, -65, 64, -40, 0, -84, 85, 85, -99, -29, 71, -60, -44, 78, 114, 103, -89, 79, 42, 18, 92, -31, 117, -98, -85, 123, 73, 107, -123, -35, -119, 123, 21, 24, -59, -99, 81, -79, -8, 92, -20, 99, -39, 19, 72, 77, 8, -44, -115, 36, -66, 21, 94, -20, -26, -40, 97, 29, -75, -26, 121, -43, 32, 22, 30, -5, 101, 92, -1, -51, -103, 59, 123, -117, 14, 91, -46, -80, 49, -119, -51, 19, 33, 3, -4, 28, -27, -1, -17, 18, -94, 71, -32, -74, 16, -115, -3, 16, -50, 41, -61, -118, -126, -10, 105, 117, 40, 43, -84, -45, 21, -120, 99, 78, -13, -30, -23, -63, -10, 99, -35, 122, 38, 71, 81, 95, 125};
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
    msg.setTimeStamp(0.804247990820572);
    msg.setSource(33508U);
    msg.setSourceEntity(131U);
    msg.setDestination(10468U);
    msg.setDestinationEntity(12U);
    msg.type = 215U;
    msg.frequency = 1593149596U;
    msg.min_range = 64328U;
    msg.max_range = 6537U;
    msg.bits_per_point = 79U;
    msg.scale_factor = 0.38270377987888615;
    const signed char tmp_msg_0[] = {98, 37, -120, -3, -113, 100, 73, -45, 14, -45, -123, -93, 38, 40, 58, -62, 91, -75, -22, 70, 82, -116, 75, 81, -23, 35, 62, 41, 125, 41, -118, -87, 46, 69, 59, 15, -27, 22, 12, -98, -12, 29, -124, -106, -5, 101, -3, -92, 50, 118, 96, 26, 67, 32, -15, 17, 56, -26, -111, -42, 58, -114, 24, -64, -121, 91, 82, -109, 30, 78, -21, -111, 116, -76, -7, -49, -62, 39, -42, 15, -47, -87, 49, -29, 82, 48, 107, 99, 30, -13, 72, -1, 56, -83, -63, -45, -91, -95, 41, -12, -105, 124, 103, -1, -46, -66, -14, -51, -82, 24, -27, -23, 8, 75, -18, 79, -123, -114, 46, -68, 28, -93, -56, 34, 13, -1, -116, 104, -68, -24, -6, 45, -37, -31, -82, 30, 25, 79, 16, 108, 11, 4, -69, -102, 54, -24, -14, -56, 65, -6, -7, -55, -107, -9, 58, -91, 71, -93, 40, 64, 85, -115, 122, 9, 94, 84, 116, 87, -121, 114, 8, -97, -7, 76, -126, -25, -34, 56, -15, 84, -72, -24, 39, -126, 58, -79, 125, 13, -108, -98, -101, -79, -23, -5, -90, -67, 47, -84, -112, 78, -53, -17, 83, 45, -25, 40, -38, -21, -120, 16, 108, 62, 9};
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
    msg.setTimeStamp(0.4218982634321692);
    msg.setSource(50952U);
    msg.setSourceEntity(120U);
    msg.setDestination(40063U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.10279979778407466);
    msg.setSource(7022U);
    msg.setSourceEntity(138U);
    msg.setDestination(47535U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.7590565976900127);
    msg.setSource(1641U);
    msg.setSourceEntity(162U);
    msg.setDestination(32930U);
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
    msg.setTimeStamp(0.8849379658618747);
    msg.setSource(43215U);
    msg.setSourceEntity(158U);
    msg.setDestination(54302U);
    msg.setDestinationEntity(68U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.8374184184770717);
    msg.setSource(26969U);
    msg.setSourceEntity(56U);
    msg.setDestination(22790U);
    msg.setDestinationEntity(154U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.9058024955735713);
    msg.setSource(40863U);
    msg.setSourceEntity(62U);
    msg.setDestination(50878U);
    msg.setDestinationEntity(25U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.7068020403136688);
    msg.setSource(33833U);
    msg.setSourceEntity(34U);
    msg.setDestination(22780U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5537975101030861;
    msg.confidence = 0.9916399635801127;
    msg.opmodes.assign("NYUBRRGWKGOFSBVZIARUHYQVVLKTTHSUIHLAWXMJTOUZIWCLFHHPMUPJKTAFYXCNBCSDNYUGPZOXRJQMJSBMLPBKFZBQQEQIWHYERZPVDTLDGCELOSEXQGOJHYECNNEUPWZVHSLRXJKEGVIXAWUWNVZPNKZGGUKQTQRFNSYDAGDAJIZWXQMTRYWIBADUGCOOCCIFXFPLVPABFKVTCY");

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
    msg.setTimeStamp(0.28649950868610774);
    msg.setSource(17397U);
    msg.setSourceEntity(147U);
    msg.setDestination(53359U);
    msg.setDestinationEntity(99U);
    msg.value = 0.32287314349289076;
    msg.confidence = 0.8976238366794109;
    msg.opmodes.assign("OMVRDAGBXSPSJOLJKOWZCEYPIOCJWHBNCXSENPJL");

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
    msg.setTimeStamp(0.2897241842029087);
    msg.setSource(56773U);
    msg.setSourceEntity(144U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(193U);
    msg.value = 0.17891325279857828;
    msg.confidence = 0.5483304319865832;
    msg.opmodes.assign("XYYRVTQOYRPCWJRTHLHAYIEIUSVOJTNFWBUAQAJPURXGQQWHIKWCBKTGBVDULIZPWJCVTJDCQICHYLGUEVRJFHZIUIQDPSPOFZEJTJXELCBNSACWKHZWNMEEBJNORJIHLFXFQWSFPGKWYFHNGUBEDQLS");

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
    msg.setTimeStamp(0.3121393624535689);
    msg.setSource(63078U);
    msg.setSourceEntity(4U);
    msg.setDestination(1723U);
    msg.setDestinationEntity(233U);
    msg.itow = 3342827529U;
    msg.lat = 0.5526717452496008;
    msg.lon = 0.19452793934123602;
    msg.height_ell = 0.040274807520742306;
    msg.height_sea = 0.22592693187931034;
    msg.hacc = 0.8845645052687312;
    msg.vacc = 0.6057434206839925;
    msg.vel_n = 0.033634496969159766;
    msg.vel_e = 0.6405234222209181;
    msg.vel_d = 0.8547819800918579;
    msg.speed = 0.7873682518119169;
    msg.gspeed = 0.4630998477215261;
    msg.heading = 0.697260267302797;
    msg.sacc = 0.8713196137716677;
    msg.cacc = 0.8084700777363706;

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
    msg.setTimeStamp(0.11379889399194587);
    msg.setSource(36900U);
    msg.setSourceEntity(52U);
    msg.setDestination(36200U);
    msg.setDestinationEntity(114U);
    msg.itow = 520142121U;
    msg.lat = 0.7205789861397444;
    msg.lon = 0.6628386836645739;
    msg.height_ell = 0.7179593912616794;
    msg.height_sea = 0.57065803664129;
    msg.hacc = 0.9400422458767702;
    msg.vacc = 0.06658279458780614;
    msg.vel_n = 0.6147735544965541;
    msg.vel_e = 0.8308215672456303;
    msg.vel_d = 0.8677005997200173;
    msg.speed = 0.16217537380651714;
    msg.gspeed = 0.5636625293332322;
    msg.heading = 0.29150907538688675;
    msg.sacc = 0.17273941699575357;
    msg.cacc = 0.18305984967115674;

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
    msg.setTimeStamp(0.8387715102124981);
    msg.setSource(25112U);
    msg.setSourceEntity(46U);
    msg.setDestination(31389U);
    msg.setDestinationEntity(72U);
    msg.itow = 3762886356U;
    msg.lat = 0.6467335397022234;
    msg.lon = 0.9591028188048435;
    msg.height_ell = 0.8322255868534646;
    msg.height_sea = 0.6932590471596253;
    msg.hacc = 0.043607980271885394;
    msg.vacc = 0.21320101888288367;
    msg.vel_n = 0.639126040150446;
    msg.vel_e = 0.978028869684339;
    msg.vel_d = 0.9571952396841257;
    msg.speed = 0.9626005224319019;
    msg.gspeed = 0.6614477430601828;
    msg.heading = 0.7473112587677238;
    msg.sacc = 0.40772329080958747;
    msg.cacc = 0.29702240316479844;

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
    msg.setTimeStamp(0.4775867657455043);
    msg.setSource(58281U);
    msg.setSourceEntity(87U);
    msg.setDestination(51405U);
    msg.setDestinationEntity(202U);
    msg.id = 9U;
    msg.value = 0.06303284057338299;

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
    msg.setTimeStamp(0.07238657950122274);
    msg.setSource(51093U);
    msg.setSourceEntity(119U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(254U);
    msg.id = 113U;
    msg.value = 0.15861459375931053;

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
    msg.setTimeStamp(0.3353487029740002);
    msg.setSource(22233U);
    msg.setSourceEntity(236U);
    msg.setDestination(62614U);
    msg.setDestinationEntity(4U);
    msg.id = 246U;
    msg.value = 0.9512359680216734;

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
    msg.setTimeStamp(0.6075717283157075);
    msg.setSource(59061U);
    msg.setSourceEntity(220U);
    msg.setDestination(34368U);
    msg.setDestinationEntity(172U);
    msg.x = 0.6860521503258552;
    msg.y = 0.9318336829497478;
    msg.z = 0.9391927043147481;
    msg.phi = 0.1715492501460676;
    msg.theta = 0.7932302910840072;
    msg.psi = 0.1504938896158351;

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
    msg.setTimeStamp(0.8776028326273756);
    msg.setSource(28925U);
    msg.setSourceEntity(56U);
    msg.setDestination(41533U);
    msg.setDestinationEntity(84U);
    msg.x = 0.2411943587434595;
    msg.y = 0.0012376619875198447;
    msg.z = 0.8786896383031526;
    msg.phi = 0.2463640581495431;
    msg.theta = 0.10025894978324335;
    msg.psi = 0.4276415244937475;

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
    msg.setTimeStamp(0.15329723616533353);
    msg.setSource(4718U);
    msg.setSourceEntity(124U);
    msg.setDestination(1900U);
    msg.setDestinationEntity(224U);
    msg.x = 0.12332341340563446;
    msg.y = 0.18793200098600893;
    msg.z = 0.9526351733404017;
    msg.phi = 0.21000710414129775;
    msg.theta = 0.09858909846368424;
    msg.psi = 0.3602084653065045;

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
    msg.setTimeStamp(0.3409586048241984);
    msg.setSource(50573U);
    msg.setSourceEntity(29U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(227U);
    msg.beam_width = 0.9219836945769088;
    msg.beam_height = 0.8773419040495649;

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
    msg.setTimeStamp(0.4988982795570609);
    msg.setSource(52971U);
    msg.setSourceEntity(130U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(20U);
    msg.beam_width = 0.4965268405346698;
    msg.beam_height = 0.9904619239872319;

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
    msg.setTimeStamp(0.6034464059155817);
    msg.setSource(13201U);
    msg.setSourceEntity(206U);
    msg.setDestination(34120U);
    msg.setDestinationEntity(116U);
    msg.beam_width = 0.5968613405013643;
    msg.beam_height = 0.540852898464216;

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
    msg.setTimeStamp(0.9227985612432421);
    msg.setSource(25803U);
    msg.setSourceEntity(17U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(117U);
    msg.sane = 0U;

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
    msg.setTimeStamp(0.693825574770841);
    msg.setSource(18534U);
    msg.setSourceEntity(168U);
    msg.setDestination(33684U);
    msg.setDestinationEntity(250U);
    msg.sane = 36U;

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
    msg.setTimeStamp(0.20565815932011933);
    msg.setSource(45940U);
    msg.setSourceEntity(132U);
    msg.setDestination(21956U);
    msg.setDestinationEntity(209U);
    msg.sane = 87U;

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
    msg.setTimeStamp(0.13600609053690693);
    msg.setSource(65018U);
    msg.setSourceEntity(61U);
    msg.setDestination(45716U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6319779770772034;

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
    msg.setTimeStamp(0.4973680084214722);
    msg.setSource(20863U);
    msg.setSourceEntity(176U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7091477269956081;

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
    msg.setTimeStamp(0.10640709326206366);
    msg.setSource(16266U);
    msg.setSourceEntity(208U);
    msg.setDestination(1828U);
    msg.setDestinationEntity(43U);
    msg.value = 0.32322237626877015;

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
    msg.setTimeStamp(0.3369369639972958);
    msg.setSource(41912U);
    msg.setSourceEntity(129U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9303635661374641;

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
    msg.setTimeStamp(0.6289834020803763);
    msg.setSource(63216U);
    msg.setSourceEntity(213U);
    msg.setDestination(32906U);
    msg.setDestinationEntity(180U);
    msg.value = 0.41388915571379925;

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
    msg.setTimeStamp(0.30556251086992225);
    msg.setSource(49159U);
    msg.setSourceEntity(195U);
    msg.setDestination(23079U);
    msg.setDestinationEntity(150U);
    msg.value = 0.09478247160965336;

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
    msg.setTimeStamp(0.8024495283036889);
    msg.setSource(23784U);
    msg.setSourceEntity(29U);
    msg.setDestination(17061U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7572894155556409;

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
    msg.setTimeStamp(0.38345298957495855);
    msg.setSource(34181U);
    msg.setSourceEntity(159U);
    msg.setDestination(34121U);
    msg.setDestinationEntity(146U);
    msg.value = 0.06524753393761784;

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
    msg.setTimeStamp(0.5544975346254462);
    msg.setSource(5517U);
    msg.setSourceEntity(182U);
    msg.setDestination(30474U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6945491075103121;

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
    msg.setTimeStamp(0.9824920337021597);
    msg.setSource(4668U);
    msg.setSourceEntity(95U);
    msg.setDestination(61348U);
    msg.setDestinationEntity(150U);
    msg.value = 0.3082279109327295;

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
    msg.setTimeStamp(0.3619820424664172);
    msg.setSource(51353U);
    msg.setSourceEntity(55U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(29U);
    msg.value = 0.2638990427790312;

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
    msg.setTimeStamp(0.6872214902553628);
    msg.setSource(794U);
    msg.setSourceEntity(18U);
    msg.setDestination(31466U);
    msg.setDestinationEntity(44U);
    msg.value = 0.21452655086908834;

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
    msg.setTimeStamp(0.26763151873504953);
    msg.setSource(48090U);
    msg.setSourceEntity(42U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6332846728630102;

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
    msg.setTimeStamp(0.5728481705094464);
    msg.setSource(60661U);
    msg.setSourceEntity(56U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(193U);
    msg.value = 0.841565041599371;

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
    msg.setTimeStamp(0.03169832585389443);
    msg.setSource(17704U);
    msg.setSourceEntity(194U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(43U);
    msg.value = 0.21358141284446286;

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
    msg.setTimeStamp(0.6341776841493065);
    msg.setSource(15066U);
    msg.setSourceEntity(231U);
    msg.setDestination(35314U);
    msg.setDestinationEntity(165U);
    msg.value = 0.9756139892715783;

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
    msg.setTimeStamp(0.8811170565070087);
    msg.setSource(62919U);
    msg.setSourceEntity(66U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(15U);
    msg.value = 0.30173018504159044;

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
    msg.setTimeStamp(0.7030480936316925);
    msg.setSource(46224U);
    msg.setSourceEntity(23U);
    msg.setDestination(29328U);
    msg.setDestinationEntity(55U);
    msg.value = 0.44309230131364474;

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
    msg.setTimeStamp(0.23962424043629837);
    msg.setSource(20356U);
    msg.setSourceEntity(217U);
    msg.setDestination(34494U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5252392843725735;

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
    msg.setTimeStamp(0.9906260736836842);
    msg.setSource(3049U);
    msg.setSourceEntity(9U);
    msg.setDestination(58142U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5246032745986453;

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
    msg.setTimeStamp(0.5220813134774235);
    msg.setSource(8185U);
    msg.setSourceEntity(142U);
    msg.setDestination(60667U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9570978600652799;

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
    msg.setTimeStamp(0.4847676210492452);
    msg.setSource(10616U);
    msg.setSourceEntity(224U);
    msg.setDestination(9020U);
    msg.setDestinationEntity(116U);
    msg.value = 0.07477626154540029;

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
    msg.setTimeStamp(0.6120114516731253);
    msg.setSource(3889U);
    msg.setSourceEntity(233U);
    msg.setDestination(13247U);
    msg.setDestinationEntity(149U);
    msg.value = 0.018772560909901426;

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
    msg.setTimeStamp(0.8783828699166513);
    msg.setSource(28215U);
    msg.setSourceEntity(50U);
    msg.setDestination(46114U);
    msg.setDestinationEntity(46U);
    msg.value = 0.42127759490619343;

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
    msg.setTimeStamp(0.32148562192546415);
    msg.setSource(47059U);
    msg.setSourceEntity(208U);
    msg.setDestination(13868U);
    msg.setDestinationEntity(6U);
    msg.validity = 40042U;
    msg.type = 145U;
    msg.tow = 1258843530U;
    msg.base_lat = 0.8292549606321291;
    msg.base_lon = 0.2625285998401705;
    msg.base_height = 0.9465476101189272;
    msg.n = 0.1487981625687962;
    msg.e = 0.005667069673135239;
    msg.d = 0.14878642138627063;
    msg.v_n = 0.8149454997347149;
    msg.v_e = 0.9931782338824712;
    msg.v_d = 0.06877244115072689;
    msg.satellites = 159U;
    msg.iar_hyp = 4656U;
    msg.iar_ratio = 0.8975355498278315;

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
    msg.setTimeStamp(0.4382284050164069);
    msg.setSource(8507U);
    msg.setSourceEntity(20U);
    msg.setDestination(46275U);
    msg.setDestinationEntity(221U);
    msg.validity = 37583U;
    msg.type = 82U;
    msg.tow = 458888561U;
    msg.base_lat = 0.4589011726812431;
    msg.base_lon = 0.5227208747833957;
    msg.base_height = 0.9924781216721916;
    msg.n = 0.5944420864346369;
    msg.e = 0.3114672430006956;
    msg.d = 0.06195710753952277;
    msg.v_n = 0.799999069054666;
    msg.v_e = 0.4674000841201469;
    msg.v_d = 0.1284925391044912;
    msg.satellites = 235U;
    msg.iar_hyp = 42793U;
    msg.iar_ratio = 0.2508218294769218;

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
    msg.setTimeStamp(0.5350980990159578);
    msg.setSource(13222U);
    msg.setSourceEntity(2U);
    msg.setDestination(63631U);
    msg.setDestinationEntity(12U);
    msg.validity = 22922U;
    msg.type = 79U;
    msg.tow = 55433429U;
    msg.base_lat = 0.04314789150160414;
    msg.base_lon = 0.8114376901053284;
    msg.base_height = 0.7079842449622228;
    msg.n = 0.7410825563944794;
    msg.e = 0.998787855855529;
    msg.d = 0.5732936753495462;
    msg.v_n = 0.9261183846420605;
    msg.v_e = 0.5050578884565118;
    msg.v_d = 0.39836250505390824;
    msg.satellites = 134U;
    msg.iar_hyp = 35177U;
    msg.iar_ratio = 0.708235634326485;

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
    msg.setTimeStamp(0.8736120326441602);
    msg.setSource(2211U);
    msg.setSourceEntity(131U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(50U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.032148121740996904;
    tmp_msg_0.lon = 0.8885579023335537;
    tmp_msg_0.height = 0.6540127433732061;
    tmp_msg_0.x = 0.3771763991636098;
    tmp_msg_0.y = 0.9526233815058395;
    tmp_msg_0.z = 0.40707981523769843;
    tmp_msg_0.phi = 0.36756608015295245;
    tmp_msg_0.theta = 0.6074817304424664;
    tmp_msg_0.psi = 0.43497851290510037;
    tmp_msg_0.u = 0.7769293863383115;
    tmp_msg_0.v = 0.2932709561700809;
    tmp_msg_0.w = 0.26198551798972736;
    tmp_msg_0.vx = 0.33443962674531447;
    tmp_msg_0.vy = 0.8131510753860863;
    tmp_msg_0.vz = 0.3238871732948254;
    tmp_msg_0.p = 0.21952863005037637;
    tmp_msg_0.q = 0.229297161847421;
    tmp_msg_0.r = 0.19056071841514854;
    tmp_msg_0.depth = 0.17876458548184038;
    tmp_msg_0.alt = 0.9838227964837021;
    msg.state.set(tmp_msg_0);
    msg.type = 106U;

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
    msg.setTimeStamp(0.005502263511614758);
    msg.setSource(63746U);
    msg.setSourceEntity(146U);
    msg.setDestination(47563U);
    msg.setDestinationEntity(189U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4421586889085287;
    tmp_msg_0.lon = 0.9093377000524792;
    tmp_msg_0.height = 0.9302544604635751;
    tmp_msg_0.x = 0.29528149718779717;
    tmp_msg_0.y = 0.5321755907335496;
    tmp_msg_0.z = 0.5824445768980686;
    tmp_msg_0.phi = 0.38594007031719335;
    tmp_msg_0.theta = 0.6247783284029518;
    tmp_msg_0.psi = 0.10337056891224694;
    tmp_msg_0.u = 0.7758010583210259;
    tmp_msg_0.v = 0.2710810893045562;
    tmp_msg_0.w = 0.23193956123562076;
    tmp_msg_0.vx = 0.9896102527625468;
    tmp_msg_0.vy = 0.5151761134435914;
    tmp_msg_0.vz = 0.6742724056905468;
    tmp_msg_0.p = 0.2951924193931008;
    tmp_msg_0.q = 0.31568029538473086;
    tmp_msg_0.r = 0.48793211518860724;
    tmp_msg_0.depth = 0.7801005332178501;
    tmp_msg_0.alt = 0.3921545032533781;
    msg.state.set(tmp_msg_0);
    msg.type = 243U;

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
    msg.setTimeStamp(0.24455111233607751);
    msg.setSource(62514U);
    msg.setSourceEntity(247U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(178U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.33067242336560176;
    tmp_msg_0.lon = 0.532217683386165;
    tmp_msg_0.height = 0.4816992851396569;
    tmp_msg_0.x = 0.6614150884005051;
    tmp_msg_0.y = 0.16597734024616562;
    tmp_msg_0.z = 0.6736856131373095;
    tmp_msg_0.phi = 0.2761187948278855;
    tmp_msg_0.theta = 0.23069921647959069;
    tmp_msg_0.psi = 0.484965557579796;
    tmp_msg_0.u = 0.21324750194304032;
    tmp_msg_0.v = 0.22216113735431775;
    tmp_msg_0.w = 0.7349333574835175;
    tmp_msg_0.vx = 0.8384033090383308;
    tmp_msg_0.vy = 0.3372221692588835;
    tmp_msg_0.vz = 0.7846172831289279;
    tmp_msg_0.p = 0.372815378430956;
    tmp_msg_0.q = 0.8515823816357979;
    tmp_msg_0.r = 0.341247773158289;
    tmp_msg_0.depth = 0.4846677593592711;
    tmp_msg_0.alt = 0.4145196515340168;
    msg.state.set(tmp_msg_0);
    msg.type = 174U;

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
    msg.setTimeStamp(0.760505400891699);
    msg.setSource(65443U);
    msg.setSourceEntity(26U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9586128330981014;

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
    msg.setTimeStamp(0.14284800009113174);
    msg.setSource(27407U);
    msg.setSourceEntity(248U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5264075984445554;

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
    msg.setTimeStamp(0.9986128668421709);
    msg.setSource(884U);
    msg.setSourceEntity(93U);
    msg.setDestination(31401U);
    msg.setDestinationEntity(42U);
    msg.value = 0.4520713810266016;

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
    msg.setTimeStamp(0.4194498430390352);
    msg.setSource(11562U);
    msg.setSourceEntity(40U);
    msg.setDestination(32921U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4465552723618109;

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
    msg.setTimeStamp(0.9718772011647546);
    msg.setSource(54437U);
    msg.setSourceEntity(176U);
    msg.setDestination(33097U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6892064028158761;

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
    msg.setTimeStamp(0.41594186715286885);
    msg.setSource(37836U);
    msg.setSourceEntity(187U);
    msg.setDestination(10664U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9998278593222649;

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
    msg.setTimeStamp(0.3378921188229459);
    msg.setSource(27525U);
    msg.setSourceEntity(157U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(79U);
    msg.value = 0.9339960692575495;

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
    msg.setTimeStamp(0.025400312243344048);
    msg.setSource(18952U);
    msg.setSourceEntity(111U);
    msg.setDestination(56905U);
    msg.setDestinationEntity(241U);
    msg.value = 0.20747853032063313;

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
    msg.setTimeStamp(0.9725685650270506);
    msg.setSource(19554U);
    msg.setSourceEntity(7U);
    msg.setDestination(42149U);
    msg.setDestinationEntity(178U);
    msg.value = 0.26759479636372885;

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
    msg.setTimeStamp(0.3569197125371806);
    msg.setSource(53898U);
    msg.setSourceEntity(137U);
    msg.setDestination(60111U);
    msg.setDestinationEntity(127U);
    msg.value = 0.275030862990708;

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
    msg.setTimeStamp(0.3849086543196464);
    msg.setSource(34766U);
    msg.setSourceEntity(21U);
    msg.setDestination(20738U);
    msg.setDestinationEntity(251U);
    msg.value = 0.7498727466988747;

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
    msg.setTimeStamp(0.49025545460134146);
    msg.setSource(14131U);
    msg.setSourceEntity(80U);
    msg.setDestination(52283U);
    msg.setDestinationEntity(106U);
    msg.value = 0.24256493371464005;

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
    msg.setTimeStamp(0.48880497070262185);
    msg.setSource(33657U);
    msg.setSourceEntity(80U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8175002212471147;

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
    msg.setTimeStamp(0.1575937384289099);
    msg.setSource(51709U);
    msg.setSourceEntity(38U);
    msg.setDestination(49891U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7306306445705721;

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
    msg.setTimeStamp(0.0892988435322627);
    msg.setSource(57243U);
    msg.setSourceEntity(15U);
    msg.setDestination(39377U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8122972496109335;

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
    msg.setTimeStamp(0.44104825481245136);
    msg.setSource(46541U);
    msg.setSourceEntity(211U);
    msg.setDestination(757U);
    msg.setDestinationEntity(250U);
    msg.id = 45U;
    msg.zoom = 224U;
    msg.action = 150U;

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
    msg.setTimeStamp(0.3514487594720389);
    msg.setSource(2715U);
    msg.setSourceEntity(182U);
    msg.setDestination(633U);
    msg.setDestinationEntity(39U);
    msg.id = 145U;
    msg.zoom = 104U;
    msg.action = 32U;

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
    msg.setTimeStamp(0.833146124619661);
    msg.setSource(30889U);
    msg.setSourceEntity(68U);
    msg.setDestination(60601U);
    msg.setDestinationEntity(89U);
    msg.id = 112U;
    msg.zoom = 81U;
    msg.action = 23U;

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
    msg.setTimeStamp(0.9088564923642645);
    msg.setSource(59773U);
    msg.setSourceEntity(144U);
    msg.setDestination(32321U);
    msg.setDestinationEntity(78U);
    msg.id = 116U;
    msg.value = 0.6072706883083887;

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
    msg.setTimeStamp(0.09344760828851484);
    msg.setSource(7041U);
    msg.setSourceEntity(112U);
    msg.setDestination(61940U);
    msg.setDestinationEntity(209U);
    msg.id = 246U;
    msg.value = 0.31132511293511933;

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
    msg.setTimeStamp(0.5318510411760765);
    msg.setSource(15942U);
    msg.setSourceEntity(112U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(247U);
    msg.id = 59U;
    msg.value = 0.9995889813346384;

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
    msg.setTimeStamp(0.855371195324288);
    msg.setSource(4507U);
    msg.setSourceEntity(143U);
    msg.setDestination(39362U);
    msg.setDestinationEntity(107U);
    msg.id = 119U;
    msg.value = 0.366230730429676;

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
    msg.setTimeStamp(0.5663458584553488);
    msg.setSource(62624U);
    msg.setSourceEntity(197U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(167U);
    msg.id = 147U;
    msg.value = 0.14525565378156757;

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
    msg.setTimeStamp(0.8659391485915726);
    msg.setSource(24189U);
    msg.setSourceEntity(202U);
    msg.setDestination(60500U);
    msg.setDestinationEntity(3U);
    msg.id = 160U;
    msg.value = 0.2427955700161607;

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
    msg.setTimeStamp(0.6746578714214968);
    msg.setSource(64172U);
    msg.setSourceEntity(4U);
    msg.setDestination(5507U);
    msg.setDestinationEntity(185U);
    msg.id = 2U;
    msg.angle = 0.14144055667033373;

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
    msg.setTimeStamp(0.07235239949642969);
    msg.setSource(58612U);
    msg.setSourceEntity(167U);
    msg.setDestination(61686U);
    msg.setDestinationEntity(234U);
    msg.id = 82U;
    msg.angle = 0.7588164148468869;

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
    msg.setTimeStamp(0.2279038573621095);
    msg.setSource(12060U);
    msg.setSourceEntity(204U);
    msg.setDestination(35388U);
    msg.setDestinationEntity(107U);
    msg.id = 54U;
    msg.angle = 0.45094081502603856;

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
    msg.setTimeStamp(0.576049239101999);
    msg.setSource(20894U);
    msg.setSourceEntity(251U);
    msg.setDestination(56615U);
    msg.setDestinationEntity(141U);
    msg.op = 41U;
    msg.actions.assign("BPRYRKSANWVOJDODAIZCVSQGGHDENWDJNKWZOVGKWWCPSEMLVKEFTTCHIFIOLKPNAPVXGUVJRTDHFUBVFBLMSZBCJYAUFEJUFKDVTRHAIQONIXVQPNDIXEADWWOGXJZXEGSTGPPXMBQCZEGAYMRQRXRGEPSBYMMZKAAFUYWNZRLTFMCGFOQCYSYLEYVLQPTAQOKUJBYSHUWECL");

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
    msg.setTimeStamp(0.768290181296699);
    msg.setSource(9258U);
    msg.setSourceEntity(33U);
    msg.setDestination(62191U);
    msg.setDestinationEntity(241U);
    msg.op = 173U;
    msg.actions.assign("WIOHXQNBEALQPBPGIVNARTRUASKADCDPBZRNBCECFODKNSVLAIKTOXEJORJFAMWGRGEDEJGFGFZSBYQOMKIMNVMSSGPDDXXQGSVUDJLTWQZJAKNALQRUSBIPCOITZSAUPVPHLCCTABXMKWUZWJUOZIOWNVZYYHHFCJGELUMYQITTUWYYRRFMDGNXLWEEERM");

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
    msg.setTimeStamp(0.8985379896457515);
    msg.setSource(26874U);
    msg.setSourceEntity(150U);
    msg.setDestination(44860U);
    msg.setDestinationEntity(132U);
    msg.op = 243U;
    msg.actions.assign("GXOCBOUBAWJOMYVMCWXHWIRVAHSYHDHSFDFNZQGCZSHCYBGSUHFPWEJMHSUNPZLOKLGVQOKNNUEBGGPVWEDFTGGXPKSLBDSVSITJREMMK");

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
    msg.setTimeStamp(0.04348183112962367);
    msg.setSource(10571U);
    msg.setSourceEntity(94U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(215U);
    msg.actions.assign("EQTTHNLPMKCDVWLNPCUHXYZKKHDOGLCBRTYYWMHPRUBXVAMJNCGXNPYIBTHVXDJZAWZZVVJXCQCHTESFHWSGJPIFPZBKSYPQNAXFDSJTRHUYFUQSNDUMWDWFQUCLEEKGZRJOSLYI");

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
    msg.setTimeStamp(0.873611781682798);
    msg.setSource(54287U);
    msg.setSourceEntity(42U);
    msg.setDestination(18498U);
    msg.setDestinationEntity(206U);
    msg.actions.assign("AMOIROFUYWERWMRVGUAJQOGHIYNKSLKFCWJGXFUNFOQSFRVREYF");

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
    msg.setTimeStamp(0.1149191568046033);
    msg.setSource(29484U);
    msg.setSourceEntity(43U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("YKXADOHIMFBYRCOCTLVXHBAIHXLHWTPCNIXTENIJSYJOOMYERZPDUNIDPIEYRSUDSYCLPKXDWEMZKEMLOAGUBEMSFNASFRZZQEBOZU");

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
    msg.setTimeStamp(0.807602696956417);
    msg.setSource(29196U);
    msg.setSourceEntity(42U);
    msg.setDestination(51886U);
    msg.setDestinationEntity(251U);
    msg.button = 176U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.06360599102070286);
    msg.setSource(3387U);
    msg.setSourceEntity(124U);
    msg.setDestination(52780U);
    msg.setDestinationEntity(127U);
    msg.button = 174U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.4121429037357466);
    msg.setSource(6287U);
    msg.setSourceEntity(190U);
    msg.setDestination(32309U);
    msg.setDestinationEntity(33U);
    msg.button = 254U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.057472269665426845);
    msg.setSource(34927U);
    msg.setSourceEntity(216U);
    msg.setDestination(28795U);
    msg.setDestinationEntity(184U);
    msg.op = 203U;
    msg.text.assign("LTGHZTKWGZBMZNQRYXCHCSJHDXOAMJZCIKOFSWFMYPRIHOUYVEKZLFBCCBVBRVZTXU");

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
    msg.setTimeStamp(0.04904176408024019);
    msg.setSource(21618U);
    msg.setSourceEntity(220U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(189U);
    msg.op = 164U;
    msg.text.assign("ACPDBQPGHAPUZUZPLAXRTDMLIXUSJFPEOKBGBKPBRCHIMDKKKOQXGNAEDHKSHLSZOMIJIKYWUNBDESKVGWUFTMUGHRHZGZVSWLXVQSKZXWDLFOYIFMAIJOYINOTOBXIGERVYENFCU");

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
    msg.setTimeStamp(0.6327377427159245);
    msg.setSource(22115U);
    msg.setSourceEntity(217U);
    msg.setDestination(5180U);
    msg.setDestinationEntity(121U);
    msg.op = 87U;
    msg.text.assign("IFGOVIXINUGAWBRKBYNDGENVKRWCUPRDJISQMPJFJRLIIBFYKJLOMMXYFPXVXGOAQZWTN");

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
    msg.setTimeStamp(0.5676533947878827);
    msg.setSource(48531U);
    msg.setSourceEntity(18U);
    msg.setDestination(60207U);
    msg.setDestinationEntity(79U);
    msg.op = 45U;
    msg.time_remain = 0.7242842378569894;
    msg.sched_time = 0.04001261545621482;

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
    msg.setTimeStamp(0.2990187775134202);
    msg.setSource(1878U);
    msg.setSourceEntity(87U);
    msg.setDestination(42807U);
    msg.setDestinationEntity(216U);
    msg.op = 70U;
    msg.time_remain = 0.8350643306731377;
    msg.sched_time = 0.009140684459783666;

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
    msg.setTimeStamp(0.5129916415874683);
    msg.setSource(42437U);
    msg.setSourceEntity(144U);
    msg.setDestination(57594U);
    msg.setDestinationEntity(196U);
    msg.op = 64U;
    msg.time_remain = 0.43952286949822617;
    msg.sched_time = 0.1854991125521378;

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
    msg.setTimeStamp(0.6850864636223455);
    msg.setSource(31372U);
    msg.setSourceEntity(106U);
    msg.setDestination(9354U);
    msg.setDestinationEntity(229U);
    msg.name.assign("LHDDTJLQJQYBHOEIZLRONHYKLEFDDBCCIHXPMPBAYOMEXVUDKKVMXNVQWPGOUFQOOCQLKXCRINBYEVGSSYXLMMTBJETIIGKUGYEHGMWYWRTWEEVCSZNKTEZCANWXGRZIYPSTAFJOJAHZZWXLWWASKGTBBLIK");
    msg.op = 59U;
    msg.sched_time = 0.7384474896737192;

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
    msg.setTimeStamp(0.48817491853356554);
    msg.setSource(64854U);
    msg.setSourceEntity(228U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(182U);
    msg.name.assign("COEOHDGMTPWSRYOWHPAVPXPQMCVVWJSPJFLJFUCFPBXBUBKWGZPXYFUCXEGYHBAPYNVOAIONWOHGDADIBIKSRTCAEVNYEZRWSKVKKHITTLXMZGZEQTDTFB");
    msg.op = 126U;
    msg.sched_time = 0.3701058545818626;

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
    msg.setTimeStamp(0.7594456812218385);
    msg.setSource(39380U);
    msg.setSourceEntity(223U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(166U);
    msg.name.assign("EJFRCCTUECKWQCOREQVQDPDZXKFDAOLJXVMKTUGTUNTJYFJXCIDVMLVEXXTFETYDWZWHANKSJRZOCHG");
    msg.op = 122U;
    msg.sched_time = 0.13324357104971707;

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
    msg.setTimeStamp(0.6674256375915677);
    msg.setSource(61553U);
    msg.setSourceEntity(183U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.6559338016465716);
    msg.setSource(27378U);
    msg.setSourceEntity(87U);
    msg.setDestination(1322U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7495246516380005);
    msg.setSource(42735U);
    msg.setSourceEntity(61U);
    msg.setDestination(28465U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.19483645533995508);
    msg.setSource(7339U);
    msg.setSourceEntity(26U);
    msg.setDestination(65337U);
    msg.setDestinationEntity(129U);
    msg.name.assign("NPURUHLUQNIGZXGFAWMLBEKAGFC");
    msg.state = 156U;

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
    msg.setTimeStamp(0.1638457816785852);
    msg.setSource(28288U);
    msg.setSourceEntity(30U);
    msg.setDestination(24590U);
    msg.setDestinationEntity(17U);
    msg.name.assign("SFMKXNCFANEPCCYTXTZWEDODSFMVLKDSQPHJSGUHWNUPGPCCQLSNAFSGELEOXRMNWKFIKLPYZUCPWZOOEZBKOYRMDUHFRABQTYQPJHTUKVFIA");
    msg.state = 111U;

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
    msg.setTimeStamp(0.029576975337937017);
    msg.setSource(37457U);
    msg.setSourceEntity(152U);
    msg.setDestination(45335U);
    msg.setDestinationEntity(57U);
    msg.name.assign("ZTDINGEIDUYRHKTMUWEUCTFGSTGVNGAGOMXZICRYJIQEPCJWTREBGYQNVYUPIMPOMTOCXZDSPFUGSHNZHRZGKLYYEHBWCMWQSJBOZPXLHLLNHEWUKULLABEBFNAKRXMDPSSWBWVZFUTHYJVWJLFVFBPMOOFSJJGDKVSTTJNKRVBGLHHBAICJLQPOAAN");
    msg.state = 199U;

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
    msg.setTimeStamp(0.9870328569509761);
    msg.setSource(11028U);
    msg.setSourceEntity(223U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(68U);
    msg.name.assign("RBYUSULQXLPMNRHUNIBZBTFUTQZFGZWYEEVDYJAWCLHKUBLMTUMXXGGOUBPRKGJECNFNFJAGSWAMHZOODDKVOVFOBGIIKWADPEWXRVYRFAVDMMFJYGRLVZKRLPSXQEMEWISHPBCRTCOWBQSCRDVSMNWNXIAFNQJKSHJQKFQVEQTCYYI");
    msg.value = 150U;

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
    msg.setTimeStamp(0.3931067322061407);
    msg.setSource(34970U);
    msg.setSourceEntity(34U);
    msg.setDestination(8359U);
    msg.setDestinationEntity(187U);
    msg.name.assign("VIZJTZTSJWCSSCKFKVTEJNWARPZVHEKLIJPNCQRKSGLIILMHDNXEPJBJXXHFPLGISVUDQGSALJLYUZHXNOLHEMRAACQTPQKOFGCODKXTLUQUAOKJOOHHUMAVULMWUSNMFFHWKFBVGYFMVQLJEMHBIOBGBTOZCGSDOVXXUVATYZFDYZMINBESQBTTDYBMUWRMACZWBRFVEHBICPDSXRAWNINYXPRZKDPW");
    msg.value = 131U;

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
    msg.setTimeStamp(0.6638916240090263);
    msg.setSource(19841U);
    msg.setSourceEntity(27U);
    msg.setDestination(22283U);
    msg.setDestinationEntity(254U);
    msg.name.assign("MFOUPSZQPFFBBJDPYJIIHPYWXFENLVQWJKCFQLQVSSGLXZOIHERMBKLNEWUMPBGZNFTIGJEEHZMEAHRFSTYOCUCXSNOTRJUIETRRGOIDJPVBUT");
    msg.value = 163U;

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
    msg.setTimeStamp(0.78103349894928);
    msg.setSource(58418U);
    msg.setSourceEntity(181U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(58U);
    msg.name.assign("KPMMOLJZREENKPGHNRPYPLDGUJFWGKZEEXFXUBECBNQOTFTHMLHGDWOVQKLNZTNFRQSYFPYHNIFQUSCIDDIDUJZAOXWBYANAYBXCULSYZMHZMBSWBVZNCAMTQCRFICZETJSRB");

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
    msg.setTimeStamp(0.31510551043405677);
    msg.setSource(489U);
    msg.setSourceEntity(28U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(22U);
    msg.name.assign("LWRAMEUMROVFVREQPTSDLAMWRWKMUISMGUPPQJVKGXPQVYLJNAHTLRDCMFLYJWDVNRAOCQBNXONZSYOWJSFRGLXFTUFIYZWJHNJXUSBTGKSVQMDNBPKBCVEEIIEKIDZXNYATXTIQLDNKKKZZRZHKFDBIORJPCLJYMXTHVUQAZJKDN");

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
    msg.setTimeStamp(0.15079463767601664);
    msg.setSource(62279U);
    msg.setSourceEntity(122U);
    msg.setDestination(1036U);
    msg.setDestinationEntity(4U);
    msg.name.assign("BOMUHPUSULZHLXHCNZQEGKPNBQECZFMFIIGTPKWU");

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
    msg.setTimeStamp(0.06665628064050466);
    msg.setSource(8369U);
    msg.setSourceEntity(76U);
    msg.setDestination(59301U);
    msg.setDestinationEntity(71U);
    msg.name.assign("SFCICQLMDDCFQUTHKSXHLYBWEZJOMKWGRIJFVSRDTWUJGNQUFEBJESXBWMGOBZKDXCPTSINMYLVVVNOGLNPPZRSSMPQLCOUNBUCJXOAXSQHMHGEHXVFUDAUZAOTRHIBCGLRWKVZMYBOSBDUNPKKWDOQYFLJNFQLXYEJFJRPNVVIGRYSDOWEHJXPCGAZVAJGLVWYLITTXOANKMTNPRAUPBK");
    msg.value = 99U;

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
    msg.setTimeStamp(0.9014916677583203);
    msg.setSource(64701U);
    msg.setSourceEntity(248U);
    msg.setDestination(56760U);
    msg.setDestinationEntity(25U);
    msg.name.assign("CYECIYHSQRUWLTYNPWWOSRXAPEYVBMUKXCCOLXJPEPPXDRLSKPFKIMGEOWXYGMDJMVGPSQDZHVMUXKHO");
    msg.value = 59U;

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
    msg.setTimeStamp(0.8303661163452066);
    msg.setSource(51294U);
    msg.setSourceEntity(235U);
    msg.setDestination(56742U);
    msg.setDestinationEntity(36U);
    msg.name.assign("OVBRRFOQEZVILDGYPDNHJXTKWPDXLDPVQOQEHVKZCMM");
    msg.value = 19U;

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
    msg.setTimeStamp(0.21253206265047564);
    msg.setSource(1144U);
    msg.setSourceEntity(108U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(118U);
    msg.id = 74U;
    msg.period = 703087844U;
    msg.duty_cycle = 4282848399U;

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
    msg.setTimeStamp(0.5852054540843861);
    msg.setSource(22673U);
    msg.setSourceEntity(250U);
    msg.setDestination(14895U);
    msg.setDestinationEntity(173U);
    msg.id = 73U;
    msg.period = 3581202513U;
    msg.duty_cycle = 790921653U;

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
    msg.setTimeStamp(0.07654996235043943);
    msg.setSource(13534U);
    msg.setSourceEntity(91U);
    msg.setDestination(46966U);
    msg.setDestinationEntity(45U);
    msg.id = 143U;
    msg.period = 2224083664U;
    msg.duty_cycle = 806424501U;

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
    msg.setTimeStamp(0.45892072462307676);
    msg.setSource(1791U);
    msg.setSourceEntity(50U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(122U);
    msg.id = 169U;
    msg.period = 489397444U;
    msg.duty_cycle = 821548696U;

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
    msg.setTimeStamp(0.41309684442783556);
    msg.setSource(7004U);
    msg.setSourceEntity(159U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(12U);
    msg.id = 18U;
    msg.period = 283461832U;
    msg.duty_cycle = 1992040301U;

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
    msg.setTimeStamp(0.3450289930883166);
    msg.setSource(61079U);
    msg.setSourceEntity(112U);
    msg.setDestination(34972U);
    msg.setDestinationEntity(171U);
    msg.id = 254U;
    msg.period = 2110681270U;
    msg.duty_cycle = 3920845582U;

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
    msg.setTimeStamp(0.8926523370972301);
    msg.setSource(51475U);
    msg.setSourceEntity(146U);
    msg.setDestination(55628U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.8419529442908811;
    msg.lon = 0.41020117074737406;
    msg.height = 0.46338003571034925;
    msg.x = 0.4034621680672731;
    msg.y = 0.5389173126166922;
    msg.z = 0.44141658253557614;
    msg.phi = 0.7383058929408084;
    msg.theta = 0.9338236338775079;
    msg.psi = 0.16153911967636492;
    msg.u = 0.9796492947259657;
    msg.v = 0.4021014812115472;
    msg.w = 0.6532740114350584;
    msg.vx = 0.40863014232654127;
    msg.vy = 0.7464599869592985;
    msg.vz = 0.9143164900849983;
    msg.p = 0.4907927226426233;
    msg.q = 0.7220478117514648;
    msg.r = 0.14751540644348027;
    msg.depth = 0.857508997377404;
    msg.alt = 0.9004047578901098;

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
    msg.setTimeStamp(0.37230745536697407);
    msg.setSource(749U);
    msg.setSourceEntity(22U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.8879694109596965;
    msg.lon = 0.3918640308702458;
    msg.height = 0.20546793964591936;
    msg.x = 0.32653963125031416;
    msg.y = 0.5609212142528024;
    msg.z = 0.7253466335625507;
    msg.phi = 0.2300786676486547;
    msg.theta = 0.289985290070339;
    msg.psi = 0.025356725201677977;
    msg.u = 0.2935742449127019;
    msg.v = 0.6183408504832273;
    msg.w = 0.02236383599841152;
    msg.vx = 0.040619780059260924;
    msg.vy = 0.8231934139067336;
    msg.vz = 0.06066203015069349;
    msg.p = 0.3833293385089127;
    msg.q = 0.6063115429043687;
    msg.r = 0.6293351609049925;
    msg.depth = 0.08799365759591793;
    msg.alt = 0.6623267112135393;

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
    msg.setTimeStamp(0.7526018653045473);
    msg.setSource(59989U);
    msg.setSourceEntity(166U);
    msg.setDestination(64574U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.22549769853993762;
    msg.lon = 0.0825598166822713;
    msg.height = 0.9887657962630595;
    msg.x = 0.9063411498880837;
    msg.y = 0.5431382909831102;
    msg.z = 0.6500987365508044;
    msg.phi = 0.5573029776092533;
    msg.theta = 0.4300928288971152;
    msg.psi = 0.20484827000071626;
    msg.u = 0.2476350545730429;
    msg.v = 0.7049834774196803;
    msg.w = 0.7899507228759138;
    msg.vx = 0.8238904742947392;
    msg.vy = 0.15282086526736383;
    msg.vz = 0.10821648530208006;
    msg.p = 0.30770417719096776;
    msg.q = 0.4768716572799522;
    msg.r = 0.8115257663756253;
    msg.depth = 0.8467435579741208;
    msg.alt = 0.23286006526864012;

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
    msg.setTimeStamp(0.8088836563954317);
    msg.setSource(35281U);
    msg.setSourceEntity(105U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(112U);
    msg.x = 0.28545372539292146;
    msg.y = 0.015637172011212286;
    msg.z = 0.9637313415448764;

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
    msg.setTimeStamp(0.7688042995984975);
    msg.setSource(36211U);
    msg.setSourceEntity(115U);
    msg.setDestination(13486U);
    msg.setDestinationEntity(181U);
    msg.x = 0.3501481335890181;
    msg.y = 0.016758360862081267;
    msg.z = 0.2864750599445831;

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
    msg.setTimeStamp(0.34487585313323355);
    msg.setSource(7834U);
    msg.setSourceEntity(205U);
    msg.setDestination(13496U);
    msg.setDestinationEntity(223U);
    msg.x = 0.5182118587926798;
    msg.y = 0.7270550952181428;
    msg.z = 0.6752533322175938;

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
    msg.setTimeStamp(0.14297719966893618);
    msg.setSource(64307U);
    msg.setSourceEntity(79U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(23U);
    msg.value = 0.4695634227101466;

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
    msg.setTimeStamp(0.4935440705412212);
    msg.setSource(61856U);
    msg.setSourceEntity(20U);
    msg.setDestination(58928U);
    msg.setDestinationEntity(47U);
    msg.value = 0.32057023975773025;

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
    msg.setTimeStamp(0.13975467208831027);
    msg.setSource(50887U);
    msg.setSourceEntity(244U);
    msg.setDestination(21757U);
    msg.setDestinationEntity(194U);
    msg.value = 0.042016556441732966;

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
    msg.setTimeStamp(0.2169256051645262);
    msg.setSource(16604U);
    msg.setSourceEntity(179U);
    msg.setDestination(54245U);
    msg.setDestinationEntity(112U);
    msg.value = 0.40962516083206935;

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
    msg.setTimeStamp(0.6370615222748817);
    msg.setSource(34544U);
    msg.setSourceEntity(222U);
    msg.setDestination(41066U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8627849507131451;

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
    msg.setTimeStamp(0.026984265413441455);
    msg.setSource(4231U);
    msg.setSourceEntity(20U);
    msg.setDestination(59884U);
    msg.setDestinationEntity(142U);
    msg.value = 0.6038721375212992;

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
    msg.setTimeStamp(0.5596931621656541);
    msg.setSource(43001U);
    msg.setSourceEntity(12U);
    msg.setDestination(19421U);
    msg.setDestinationEntity(119U);
    msg.x = 0.2272742186041421;
    msg.y = 0.6781059513529146;
    msg.z = 0.3955430564466307;
    msg.phi = 0.4825919563780443;
    msg.theta = 0.32558093276784195;
    msg.psi = 0.7750586394125222;
    msg.p = 0.2630696432994373;
    msg.q = 0.4399400127431018;
    msg.r = 0.7538093931913122;
    msg.u = 0.8486650843976808;
    msg.v = 0.007582498369719803;
    msg.w = 0.41694673444565944;
    msg.bias_psi = 0.9380870368366135;
    msg.bias_r = 0.2586398564089617;

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
    msg.setTimeStamp(0.25897044859958995);
    msg.setSource(9563U);
    msg.setSourceEntity(97U);
    msg.setDestination(21910U);
    msg.setDestinationEntity(68U);
    msg.x = 0.45437285712249265;
    msg.y = 0.3216751319315636;
    msg.z = 0.6988957990828203;
    msg.phi = 0.5774182241421749;
    msg.theta = 0.8797552211640887;
    msg.psi = 0.8042570435291386;
    msg.p = 0.7427647617284575;
    msg.q = 0.38474622486996446;
    msg.r = 0.02459704776416305;
    msg.u = 0.689465796456905;
    msg.v = 0.39440540817296676;
    msg.w = 0.6106116885221063;
    msg.bias_psi = 0.04949713337539563;
    msg.bias_r = 0.7143655980830819;

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
    msg.setTimeStamp(0.9758901613199648);
    msg.setSource(15401U);
    msg.setSourceEntity(17U);
    msg.setDestination(18677U);
    msg.setDestinationEntity(32U);
    msg.x = 0.16897304864590257;
    msg.y = 0.7398187990870448;
    msg.z = 0.8032141999508841;
    msg.phi = 0.7584975960362451;
    msg.theta = 0.8465255130644114;
    msg.psi = 0.676668152713701;
    msg.p = 0.6791288524377405;
    msg.q = 0.6840337100989214;
    msg.r = 0.9562821430714961;
    msg.u = 0.127674554992817;
    msg.v = 0.44032414990954305;
    msg.w = 0.25186668091257747;
    msg.bias_psi = 0.3567924682215966;
    msg.bias_r = 0.39058551234147143;

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
    msg.setTimeStamp(0.7319908519724986);
    msg.setSource(2782U);
    msg.setSourceEntity(119U);
    msg.setDestination(60189U);
    msg.setDestinationEntity(170U);
    msg.bias_psi = 0.3553873782130077;
    msg.bias_r = 0.05848114830060025;
    msg.cog = 0.26127823888957924;
    msg.cyaw = 0.3703431318174123;
    msg.lbl_rej_level = 0.09106095567088379;
    msg.gps_rej_level = 0.6921397454811347;
    msg.custom_x = 0.25864669378006555;
    msg.custom_y = 0.9126949180109187;
    msg.custom_z = 0.789997735068886;

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
    msg.setTimeStamp(0.3826124102496419);
    msg.setSource(3616U);
    msg.setSourceEntity(169U);
    msg.setDestination(25853U);
    msg.setDestinationEntity(77U);
    msg.bias_psi = 0.03305303650580693;
    msg.bias_r = 0.7485767110891363;
    msg.cog = 0.8459953205929587;
    msg.cyaw = 0.8889306073646838;
    msg.lbl_rej_level = 0.2783748559181539;
    msg.gps_rej_level = 0.8975046566477396;
    msg.custom_x = 0.18801941483437246;
    msg.custom_y = 0.9538565195706527;
    msg.custom_z = 0.14037401035704045;

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
    msg.setTimeStamp(0.5027127570336327);
    msg.setSource(32008U);
    msg.setSourceEntity(236U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(224U);
    msg.bias_psi = 0.35576218741321;
    msg.bias_r = 0.046756135303471114;
    msg.cog = 0.7579016727232878;
    msg.cyaw = 0.41087768115461165;
    msg.lbl_rej_level = 0.23323736370288084;
    msg.gps_rej_level = 0.5776058679576502;
    msg.custom_x = 0.0806965263685736;
    msg.custom_y = 0.8927545132874318;
    msg.custom_z = 0.36978332434608485;

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
    msg.setTimeStamp(0.35730399279848557);
    msg.setSource(44722U);
    msg.setSourceEntity(218U);
    msg.setDestination(8800U);
    msg.setDestinationEntity(8U);
    msg.utc_time = 0.26377089454430047;
    msg.reason = 169U;

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
    msg.setTimeStamp(0.8349495001999507);
    msg.setSource(30469U);
    msg.setSourceEntity(23U);
    msg.setDestination(1691U);
    msg.setDestinationEntity(66U);
    msg.utc_time = 0.09267353283316893;
    msg.reason = 80U;

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
    msg.setTimeStamp(0.7310912628677838);
    msg.setSource(29149U);
    msg.setSourceEntity(103U);
    msg.setDestination(22104U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.37355248318161316;
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
    msg.setTimeStamp(0.25513000258113583);
    msg.setSource(29961U);
    msg.setSourceEntity(138U);
    msg.setDestination(53874U);
    msg.setDestinationEntity(129U);
    msg.id = 55U;
    msg.range = 0.10801026213774578;
    msg.acceptance = 187U;

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
    msg.setTimeStamp(0.6311361782420354);
    msg.setSource(63474U);
    msg.setSourceEntity(207U);
    msg.setDestination(6715U);
    msg.setDestinationEntity(189U);
    msg.id = 203U;
    msg.range = 0.372602629700839;
    msg.acceptance = 16U;

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
    msg.setTimeStamp(0.9716076631823087);
    msg.setSource(43243U);
    msg.setSourceEntity(167U);
    msg.setDestination(17212U);
    msg.setDestinationEntity(163U);
    msg.id = 189U;
    msg.range = 0.3922998988977976;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.6227655120118023);
    msg.setSource(47623U);
    msg.setSourceEntity(34U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(31U);
    msg.type = 139U;
    msg.reason = 147U;
    msg.value = 0.895297836842795;
    msg.timestep = 0.08991511068876068;

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
    msg.setTimeStamp(0.06641465404838287);
    msg.setSource(52214U);
    msg.setSourceEntity(160U);
    msg.setDestination(14501U);
    msg.setDestinationEntity(109U);
    msg.type = 147U;
    msg.reason = 56U;
    msg.value = 0.054882927410110915;
    msg.timestep = 0.7905913336403625;

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
    msg.setTimeStamp(0.20127248512526663);
    msg.setSource(1533U);
    msg.setSourceEntity(127U);
    msg.setDestination(58990U);
    msg.setDestinationEntity(233U);
    msg.type = 61U;
    msg.reason = 196U;
    msg.value = 0.4958733545380032;
    msg.timestep = 0.8339099184716096;

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
    msg.setTimeStamp(0.14325779095335078);
    msg.setSource(22593U);
    msg.setSourceEntity(114U);
    msg.setDestination(59292U);
    msg.setDestinationEntity(118U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FQLLPCTSPULWLKEIJVZCCIJEYNOABOADZHMVEFHBQOBWBUWZYKXHSNBPJWUAUEUJXIISLWXNGIXDLQBQMNZLTPJXZHEODDYDECTFFVMIYHUTAZMVSRYR");
    tmp_msg_0.lat = 0.904886136837507;
    tmp_msg_0.lon = 0.443118226219155;
    tmp_msg_0.depth = 0.8478858340442869;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 252U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.1762338536584901;
    msg.y = 0.5274521382314206;
    msg.var_x = 0.9755985647674563;
    msg.var_y = 0.8770548954731977;
    msg.distance = 0.3715885029900605;

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
    msg.setTimeStamp(0.3197795877463592);
    msg.setSource(53147U);
    msg.setSourceEntity(159U);
    msg.setDestination(19878U);
    msg.setDestinationEntity(61U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IYPVFDZGNRUWVBKHMFNXCPGIGIMSWPEQJSW");
    tmp_msg_0.lat = 0.025971943399929587;
    tmp_msg_0.lon = 0.4775533234538224;
    tmp_msg_0.depth = 0.7243107325888923;
    tmp_msg_0.query_channel = 189U;
    tmp_msg_0.reply_channel = 36U;
    tmp_msg_0.transponder_delay = 77U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.020950668051045174;
    msg.y = 0.700176330420444;
    msg.var_x = 0.9886819388148211;
    msg.var_y = 0.2896002566816186;
    msg.distance = 0.629776900680499;

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
    msg.setTimeStamp(0.9673214516799147);
    msg.setSource(39226U);
    msg.setSourceEntity(148U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(129U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SVGQUYOCLUBP");
    tmp_msg_0.lat = 0.5672290131229183;
    tmp_msg_0.lon = 0.03478975557430808;
    tmp_msg_0.depth = 0.10703443673282187;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 77U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7409652134520144;
    msg.y = 0.25379123786485314;
    msg.var_x = 0.2639792883176413;
    msg.var_y = 0.7263798273555111;
    msg.distance = 0.914154999664339;

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
    msg.setTimeStamp(0.012152366314102103);
    msg.setSource(26127U);
    msg.setSourceEntity(50U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(230U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.34317525781742997);
    msg.setSource(23074U);
    msg.setSourceEntity(9U);
    msg.setDestination(33401U);
    msg.setDestinationEntity(32U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.8602327064761215);
    msg.setSource(32659U);
    msg.setSourceEntity(135U);
    msg.setDestination(11590U);
    msg.setDestinationEntity(10U);
    msg.state = 246U;

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
    msg.setTimeStamp(0.2980051165367279);
    msg.setSource(34680U);
    msg.setSourceEntity(120U);
    msg.setDestination(54516U);
    msg.setDestinationEntity(167U);
    msg.x = 0.06360446678369436;
    msg.y = 0.6754189891544875;
    msg.z = 0.14873627718049698;

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
    msg.setTimeStamp(0.18198207068436956);
    msg.setSource(12149U);
    msg.setSourceEntity(209U);
    msg.setDestination(29023U);
    msg.setDestinationEntity(193U);
    msg.x = 0.6183667110916513;
    msg.y = 0.6497687306202705;
    msg.z = 0.05072274781851582;

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
    msg.setTimeStamp(0.44078521615024036);
    msg.setSource(50169U);
    msg.setSourceEntity(64U);
    msg.setDestination(52912U);
    msg.setDestinationEntity(225U);
    msg.x = 0.3817353406193187;
    msg.y = 0.9635628773927931;
    msg.z = 0.6589065076261925;

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
    msg.setTimeStamp(0.645163576320962);
    msg.setSource(57902U);
    msg.setSourceEntity(93U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(222U);
    msg.va = 0.2437368983891014;
    msg.aoa = 0.7780728628037248;
    msg.ssa = 0.7056137482729473;

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
    msg.setTimeStamp(0.31048246509859867);
    msg.setSource(45929U);
    msg.setSourceEntity(107U);
    msg.setDestination(32778U);
    msg.setDestinationEntity(101U);
    msg.va = 0.805774237000558;
    msg.aoa = 0.6601211394394578;
    msg.ssa = 0.056338857623625005;

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
    msg.setTimeStamp(0.9045029641188674);
    msg.setSource(38724U);
    msg.setSourceEntity(160U);
    msg.setDestination(47927U);
    msg.setDestinationEntity(225U);
    msg.va = 0.5516734399054228;
    msg.aoa = 0.04892114195562358;
    msg.ssa = 0.6473073859255803;

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
    msg.setTimeStamp(0.960853576433449);
    msg.setSource(35195U);
    msg.setSourceEntity(116U);
    msg.setDestination(55432U);
    msg.setDestinationEntity(149U);
    msg.value = 0.578324417009264;

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
    msg.setTimeStamp(0.6453956120440927);
    msg.setSource(18087U);
    msg.setSourceEntity(56U);
    msg.setDestination(10409U);
    msg.setDestinationEntity(91U);
    msg.value = 0.530922652513223;

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
    msg.setTimeStamp(0.8708404859911283);
    msg.setSource(38115U);
    msg.setSourceEntity(35U);
    msg.setDestination(64120U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8453731223690159;

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
    msg.setTimeStamp(0.0810505237638609);
    msg.setSource(51407U);
    msg.setSourceEntity(6U);
    msg.setDestination(18460U);
    msg.setDestinationEntity(131U);
    msg.value = 0.41526776750354333;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.14479933524269906);
    msg.setSource(2186U);
    msg.setSourceEntity(209U);
    msg.setDestination(38041U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5428850542216606;
    msg.z_units = 57U;

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
    msg.setTimeStamp(0.48122912710994004);
    msg.setSource(42690U);
    msg.setSourceEntity(129U);
    msg.setDestination(1108U);
    msg.setDestinationEntity(40U);
    msg.value = 0.6902540726392971;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.6816124073549269);
    msg.setSource(44441U);
    msg.setSourceEntity(216U);
    msg.setDestination(50538U);
    msg.setDestinationEntity(135U);
    msg.value = 0.5816820720991259;
    msg.speed_units = 254U;

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
    msg.setTimeStamp(0.11417355048681244);
    msg.setSource(3422U);
    msg.setSourceEntity(29U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(78U);
    msg.value = 0.31416494977351683;
    msg.speed_units = 166U;

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
    msg.setTimeStamp(0.10777007042076381);
    msg.setSource(58093U);
    msg.setSourceEntity(152U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8165066088072697;
    msg.speed_units = 233U;

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
    msg.setTimeStamp(0.8176159584807149);
    msg.setSource(899U);
    msg.setSourceEntity(72U);
    msg.setDestination(55508U);
    msg.setDestinationEntity(222U);
    msg.value = 0.493596112740991;

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
    msg.setTimeStamp(0.9437704021418161);
    msg.setSource(11507U);
    msg.setSourceEntity(91U);
    msg.setDestination(63226U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6694573809608899;

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
    msg.setTimeStamp(0.11161704219135771);
    msg.setSource(41200U);
    msg.setSourceEntity(47U);
    msg.setDestination(18451U);
    msg.setDestinationEntity(84U);
    msg.value = 0.01224125938804499;

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
    msg.setTimeStamp(0.5888496688780013);
    msg.setSource(32319U);
    msg.setSourceEntity(28U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5698768972286163;

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
    msg.setTimeStamp(0.8283841900335377);
    msg.setSource(11708U);
    msg.setSourceEntity(59U);
    msg.setDestination(22906U);
    msg.setDestinationEntity(159U);
    msg.value = 0.3933331914821836;

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
    msg.setTimeStamp(0.6138964180307049);
    msg.setSource(50375U);
    msg.setSourceEntity(95U);
    msg.setDestination(39547U);
    msg.setDestinationEntity(233U);
    msg.value = 0.11740890458011155;

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
    msg.setTimeStamp(0.17508076833675856);
    msg.setSource(44817U);
    msg.setSourceEntity(166U);
    msg.setDestination(4114U);
    msg.setDestinationEntity(229U);
    msg.value = 0.525276755302204;

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
    msg.setTimeStamp(0.5869616875320184);
    msg.setSource(53623U);
    msg.setSourceEntity(167U);
    msg.setDestination(19624U);
    msg.setDestinationEntity(96U);
    msg.value = 0.2474476630545137;

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
    msg.setTimeStamp(0.7841967645930857);
    msg.setSource(22728U);
    msg.setSourceEntity(126U);
    msg.setDestination(49244U);
    msg.setDestinationEntity(228U);
    msg.value = 0.11707141499338602;

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
    msg.setTimeStamp(0.6938789987502774);
    msg.setSource(49467U);
    msg.setSourceEntity(19U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(145U);
    msg.path_ref = 2507270254U;
    msg.start_lat = 0.9226198571232511;
    msg.start_lon = 0.5105809373461235;
    msg.start_z = 0.8510815939784323;
    msg.start_z_units = 199U;
    msg.end_lat = 0.42415194691417235;
    msg.end_lon = 0.1330394513812776;
    msg.end_z = 0.05195047031881661;
    msg.end_z_units = 43U;
    msg.speed = 0.20600525391750668;
    msg.speed_units = 43U;
    msg.lradius = 0.3320390615940979;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.6613600719398308);
    msg.setSource(53566U);
    msg.setSourceEntity(213U);
    msg.setDestination(42918U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 941896064U;
    msg.start_lat = 0.18943463942255878;
    msg.start_lon = 0.1250447053616378;
    msg.start_z = 0.8312196891656869;
    msg.start_z_units = 250U;
    msg.end_lat = 0.7851269362119793;
    msg.end_lon = 0.4519889730622998;
    msg.end_z = 0.22367316558268435;
    msg.end_z_units = 57U;
    msg.speed = 0.9251412212762102;
    msg.speed_units = 201U;
    msg.lradius = 0.10061387282727696;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.39934328089558724);
    msg.setSource(5922U);
    msg.setSourceEntity(251U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 256476708U;
    msg.start_lat = 0.03332417291238976;
    msg.start_lon = 0.36088534387304283;
    msg.start_z = 0.6091005074706234;
    msg.start_z_units = 209U;
    msg.end_lat = 0.513989665072579;
    msg.end_lon = 0.797722454682955;
    msg.end_z = 0.62704055137433;
    msg.end_z_units = 226U;
    msg.speed = 0.905686565973732;
    msg.speed_units = 53U;
    msg.lradius = 0.14336838857531142;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.8418190178209051);
    msg.setSource(1617U);
    msg.setSourceEntity(202U);
    msg.setDestination(48025U);
    msg.setDestinationEntity(89U);
    msg.x = 0.41669047778652935;
    msg.y = 0.1071973205769059;
    msg.z = 0.7654837180954654;
    msg.k = 0.909431494957174;
    msg.m = 0.255174385427137;
    msg.n = 0.700332102853481;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.20072993496833114);
    msg.setSource(37791U);
    msg.setSourceEntity(39U);
    msg.setDestination(34372U);
    msg.setDestinationEntity(249U);
    msg.x = 0.22159038034754552;
    msg.y = 0.8464283883943707;
    msg.z = 0.9853572385734052;
    msg.k = 0.8561618926127785;
    msg.m = 0.37305087988139707;
    msg.n = 0.14558406936263424;
    msg.flags = 239U;

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
    msg.setTimeStamp(0.41914079450707675);
    msg.setSource(12541U);
    msg.setSourceEntity(163U);
    msg.setDestination(83U);
    msg.setDestinationEntity(109U);
    msg.x = 0.9053108512856307;
    msg.y = 0.35963254084447194;
    msg.z = 0.22220209726149331;
    msg.k = 0.840975305473025;
    msg.m = 0.5747539291596846;
    msg.n = 0.3475577513485848;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.5269552958529096);
    msg.setSource(7658U);
    msg.setSourceEntity(226U);
    msg.setDestination(16599U);
    msg.setDestinationEntity(211U);
    msg.value = 0.04109198823707283;

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
    msg.setTimeStamp(0.869319333694843);
    msg.setSource(59228U);
    msg.setSourceEntity(202U);
    msg.setDestination(30055U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7635635525949319;

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
    msg.setTimeStamp(0.5562430466945173);
    msg.setSource(14064U);
    msg.setSourceEntity(149U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(180U);
    msg.value = 0.25326489170539335;

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
    msg.setTimeStamp(0.6495370464563568);
    msg.setSource(64496U);
    msg.setSourceEntity(87U);
    msg.setDestination(54479U);
    msg.setDestinationEntity(181U);
    msg.u = 0.8664145194506818;
    msg.v = 0.7402458466396762;
    msg.w = 0.878095589387396;
    msg.p = 0.4183131396163986;
    msg.q = 0.9876237110766753;
    msg.r = 0.7227793517231241;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.18771950429243167);
    msg.setSource(27050U);
    msg.setSourceEntity(137U);
    msg.setDestination(55178U);
    msg.setDestinationEntity(106U);
    msg.u = 0.5787674957332284;
    msg.v = 0.7898067579653382;
    msg.w = 0.7621025958898356;
    msg.p = 0.012793930347435256;
    msg.q = 0.5705031065615148;
    msg.r = 0.0978713735176655;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.2834453588146937);
    msg.setSource(30019U);
    msg.setSourceEntity(192U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(113U);
    msg.u = 0.27907781912413643;
    msg.v = 0.38527910755268524;
    msg.w = 0.7066974470510525;
    msg.p = 0.9707854394537218;
    msg.q = 0.2799419699514749;
    msg.r = 0.5926574725554572;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.3094153840142271);
    msg.setSource(13416U);
    msg.setSourceEntity(108U);
    msg.setDestination(9417U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 1598035877U;
    msg.start_lat = 0.4688483325511573;
    msg.start_lon = 0.6662264248833348;
    msg.start_z = 0.8905319144998401;
    msg.start_z_units = 195U;
    msg.end_lat = 0.5178187064876918;
    msg.end_lon = 0.6125959693086142;
    msg.end_z = 0.7083533646737922;
    msg.end_z_units = 154U;
    msg.lradius = 0.32685487246748013;
    msg.flags = 161U;
    msg.x = 0.11088176194383026;
    msg.y = 0.6734817658432253;
    msg.z = 0.05727224767169803;
    msg.vx = 0.7863041942976947;
    msg.vy = 0.3679043185387647;
    msg.vz = 0.183095238830828;
    msg.course_error = 0.33434873072981663;
    msg.eta = 29273U;

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
    msg.setTimeStamp(0.27886733170744893);
    msg.setSource(33292U);
    msg.setSourceEntity(226U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(7U);
    msg.path_ref = 3238585091U;
    msg.start_lat = 0.9007759492618176;
    msg.start_lon = 0.5901327705756868;
    msg.start_z = 0.5355588860935877;
    msg.start_z_units = 62U;
    msg.end_lat = 0.4422345649840419;
    msg.end_lon = 0.9255786660351222;
    msg.end_z = 0.20912825577510696;
    msg.end_z_units = 42U;
    msg.lradius = 0.43218245614587947;
    msg.flags = 16U;
    msg.x = 0.018325512940696065;
    msg.y = 0.06075924791044529;
    msg.z = 0.3583745883678192;
    msg.vx = 0.6536413240062717;
    msg.vy = 0.19224541048762034;
    msg.vz = 0.4640178179277691;
    msg.course_error = 0.23645140784855445;
    msg.eta = 20345U;

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
    msg.setTimeStamp(0.9829237797026181);
    msg.setSource(11220U);
    msg.setSourceEntity(55U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 2414264288U;
    msg.start_lat = 0.17417559530596471;
    msg.start_lon = 0.32934785032870806;
    msg.start_z = 0.847052719550464;
    msg.start_z_units = 196U;
    msg.end_lat = 0.5136751307471504;
    msg.end_lon = 0.9769275729795653;
    msg.end_z = 0.6472437674913418;
    msg.end_z_units = 69U;
    msg.lradius = 0.5019389120293942;
    msg.flags = 116U;
    msg.x = 0.7051177312463167;
    msg.y = 0.8157861286236947;
    msg.z = 0.7307059077901946;
    msg.vx = 0.5551930324463606;
    msg.vy = 0.6770151564816717;
    msg.vz = 0.682986237628624;
    msg.course_error = 0.9878823629049847;
    msg.eta = 61250U;

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
    msg.setTimeStamp(0.1284588733190758);
    msg.setSource(20834U);
    msg.setSourceEntity(133U);
    msg.setDestination(7780U);
    msg.setDestinationEntity(153U);
    msg.k = 0.034789609980992786;
    msg.m = 0.1948254775468815;
    msg.n = 0.13639514863427882;

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
    msg.setTimeStamp(0.8624939772635885);
    msg.setSource(62239U);
    msg.setSourceEntity(151U);
    msg.setDestination(3378U);
    msg.setDestinationEntity(49U);
    msg.k = 0.8999634444361808;
    msg.m = 0.904238960211569;
    msg.n = 0.6205485101158823;

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
    msg.setTimeStamp(0.6238907851472029);
    msg.setSource(5598U);
    msg.setSourceEntity(245U);
    msg.setDestination(33656U);
    msg.setDestinationEntity(57U);
    msg.k = 0.8589866569749022;
    msg.m = 0.624976798111232;
    msg.n = 0.9334420519569232;

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
    msg.setTimeStamp(0.7336476138065174);
    msg.setSource(38036U);
    msg.setSourceEntity(23U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(180U);
    msg.p = 0.9519969832924399;
    msg.i = 0.822170557363049;
    msg.d = 0.42578501168152194;
    msg.a = 0.4479359666083452;

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
    msg.setTimeStamp(0.005158867178191806);
    msg.setSource(1126U);
    msg.setSourceEntity(174U);
    msg.setDestination(63774U);
    msg.setDestinationEntity(3U);
    msg.p = 0.2398585995463699;
    msg.i = 0.6770480525452607;
    msg.d = 0.025504416290668575;
    msg.a = 0.8336306128394472;

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
    msg.setTimeStamp(0.5085023922383339);
    msg.setSource(56490U);
    msg.setSourceEntity(132U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(21U);
    msg.p = 0.15511551054447603;
    msg.i = 0.6617479652887293;
    msg.d = 0.2621902747100042;
    msg.a = 0.016279668400253633;

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
    msg.setTimeStamp(0.7136559245614366);
    msg.setSource(65337U);
    msg.setSourceEntity(22U);
    msg.setDestination(56244U);
    msg.setDestinationEntity(31U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.10408909468685934);
    msg.setSource(62136U);
    msg.setSourceEntity(123U);
    msg.setDestination(36756U);
    msg.setDestinationEntity(251U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.674980373496194);
    msg.setSource(16715U);
    msg.setSourceEntity(190U);
    msg.setDestination(22374U);
    msg.setDestinationEntity(225U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.8152173827645771);
    msg.setSource(30875U);
    msg.setSourceEntity(82U);
    msg.setDestination(57738U);
    msg.setDestinationEntity(54U);
    msg.x = 0.6933492550373114;
    msg.y = 0.33327944420346756;
    msg.z = 0.5566954776559215;
    msg.vx = 0.42816903646789384;
    msg.vy = 0.3473669928061288;
    msg.vz = 0.1406067046238333;
    msg.ax = 0.7536565217875493;
    msg.ay = 0.3349783416822387;
    msg.az = 0.3340077050830268;
    msg.flags = 21053U;

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
    msg.setTimeStamp(0.5429205091387678);
    msg.setSource(19767U);
    msg.setSourceEntity(144U);
    msg.setDestination(33432U);
    msg.setDestinationEntity(223U);
    msg.x = 0.575601713895658;
    msg.y = 0.3406897706882174;
    msg.z = 0.558173444949878;
    msg.vx = 0.017401144278560765;
    msg.vy = 0.35309217963493633;
    msg.vz = 0.23937022504718064;
    msg.ax = 0.4678280247867086;
    msg.ay = 0.888077815518898;
    msg.az = 0.766378504966928;
    msg.flags = 3926U;

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
    msg.setTimeStamp(0.07902849316948346);
    msg.setSource(5253U);
    msg.setSourceEntity(156U);
    msg.setDestination(36484U);
    msg.setDestinationEntity(42U);
    msg.x = 0.8683277966566078;
    msg.y = 0.23027314143752653;
    msg.z = 0.31474477744492957;
    msg.vx = 0.042927551322912816;
    msg.vy = 0.8810752447410357;
    msg.vz = 0.5753966583382724;
    msg.ax = 0.8731315143018104;
    msg.ay = 0.8641472979479247;
    msg.az = 0.05150988893228381;
    msg.flags = 50936U;

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
    msg.setTimeStamp(0.4605552832147096);
    msg.setSource(22014U);
    msg.setSourceEntity(179U);
    msg.setDestination(5273U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9379045246866731;

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
    msg.setTimeStamp(0.1131873481812059);
    msg.setSource(33975U);
    msg.setSourceEntity(86U);
    msg.setDestination(4933U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8646711397048241;

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
    msg.setTimeStamp(0.38534342271848776);
    msg.setSource(12393U);
    msg.setSourceEntity(137U);
    msg.setDestination(36880U);
    msg.setDestinationEntity(149U);
    msg.value = 0.3549172247676766;

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
    msg.setTimeStamp(0.23907228729460195);
    msg.setSource(47318U);
    msg.setSourceEntity(50U);
    msg.setDestination(41590U);
    msg.setDestinationEntity(195U);
    msg.timeout = 20431U;
    msg.lat = 0.562162378511512;
    msg.lon = 0.566014838445466;
    msg.z = 0.6132440667899092;
    msg.z_units = 46U;
    msg.speed = 0.04570798542087784;
    msg.speed_units = 118U;
    msg.roll = 0.21625600087236496;
    msg.pitch = 0.010458493604416197;
    msg.yaw = 0.4673162255766541;
    msg.custom.assign("OECTPUUQTVDLJERRIQUJYDLNLZLXEBTMYVBJVAAUBCZGDPHQCBQMNWFXEIYGKHYRWXOGUBZGVDUHLANATKAPQBJHHVMEFEDP");

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
    msg.setTimeStamp(0.8940247263884906);
    msg.setSource(25290U);
    msg.setSourceEntity(176U);
    msg.setDestination(47160U);
    msg.setDestinationEntity(247U);
    msg.timeout = 65294U;
    msg.lat = 0.866275201649648;
    msg.lon = 0.873458426801917;
    msg.z = 0.5731036822608853;
    msg.z_units = 180U;
    msg.speed = 0.8264593473626489;
    msg.speed_units = 183U;
    msg.roll = 0.9604121005272079;
    msg.pitch = 0.23405251244747804;
    msg.yaw = 0.8513290723806911;
    msg.custom.assign("PMVLYDPAUKLAZVHRZYITOCJMMOOXWWFGQLNXFTFJJUIKHLMABPCFHBCSOGPKNRXPBPNSNBMWJBTGWNRNFVAOUHDZA");

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
    msg.setTimeStamp(0.833466752696015);
    msg.setSource(5048U);
    msg.setSourceEntity(63U);
    msg.setDestination(31289U);
    msg.setDestinationEntity(158U);
    msg.timeout = 64475U;
    msg.lat = 0.3040462689612946;
    msg.lon = 0.30904848379365524;
    msg.z = 0.4324907589019421;
    msg.z_units = 197U;
    msg.speed = 0.6377501794672079;
    msg.speed_units = 85U;
    msg.roll = 0.6924098052860219;
    msg.pitch = 0.2172998686644999;
    msg.yaw = 0.33238355404286934;
    msg.custom.assign("OYRZJFMRXDTNLZQCKYOISEQVERGDHNMSALWVUMCLNQPSWTEOZKZLJKEYPQJDOEUBZDSMIFZNBNXIIJGMQQCCANXYCIFAOBSMEPUTRHVNAOWSKESHLHYXPPOXHXBFVOIKQRFPIWAUGHRTKHZGFVUPTQFKJ");

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
    msg.setTimeStamp(0.5828715698715209);
    msg.setSource(15360U);
    msg.setSourceEntity(16U);
    msg.setDestination(11380U);
    msg.setDestinationEntity(45U);
    msg.timeout = 5259U;
    msg.lat = 0.3360157723639594;
    msg.lon = 0.07803099683664105;
    msg.z = 0.12994596695722738;
    msg.z_units = 72U;
    msg.speed = 0.8483635043082245;
    msg.speed_units = 150U;
    msg.duration = 14537U;
    msg.radius = 0.7016983355548799;
    msg.flags = 119U;
    msg.custom.assign("OSMUSDTVOXJOWEONCV");

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
    msg.setTimeStamp(0.24763445546493257);
    msg.setSource(4094U);
    msg.setSourceEntity(146U);
    msg.setDestination(9245U);
    msg.setDestinationEntity(92U);
    msg.timeout = 46608U;
    msg.lat = 0.2787977128791207;
    msg.lon = 0.7092970500130404;
    msg.z = 0.28254245883241613;
    msg.z_units = 236U;
    msg.speed = 0.4958559355952675;
    msg.speed_units = 206U;
    msg.duration = 21579U;
    msg.radius = 0.7306435950674645;
    msg.flags = 5U;
    msg.custom.assign("KYSXXXEQGGAOJLQFNZALLLSUPRUJLRTHYUJOCVDEMDLOPDMHHXFCZUWJXDUVYQBSPHYGWSNHTBAMMOHRU");

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
    msg.setTimeStamp(0.6848184199411042);
    msg.setSource(56604U);
    msg.setSourceEntity(173U);
    msg.setDestination(34709U);
    msg.setDestinationEntity(168U);
    msg.timeout = 20952U;
    msg.lat = 0.18906291690954458;
    msg.lon = 0.8437018272486616;
    msg.z = 0.40749396334813515;
    msg.z_units = 241U;
    msg.speed = 0.6560999135357174;
    msg.speed_units = 153U;
    msg.duration = 50720U;
    msg.radius = 0.334459428170614;
    msg.flags = 155U;
    msg.custom.assign("EGVFXGOWAHRLASSPXFTXYQLGDVCIZARTPTSWEKBSNUXRZIDXMKGKMYANDQISRTKOLOCAIPJVSYNNNJDEQQJFQOWGCCPPKUHQUITASXFNWXVECJPWR");

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
    msg.setTimeStamp(0.3618758140538363);
    msg.setSource(16785U);
    msg.setSourceEntity(104U);
    msg.setDestination(62393U);
    msg.setDestinationEntity(222U);
    msg.custom.assign("THNOZTHVSTFRGHFSGFICQEFADJADZQWYELAPLVLKRCPBTTZQEEMJJRDUZSLPKYPAJGHVOIKREGJSBKLGAYDRPOWTNJXYFGHWXUDCXAOKQXZXXRICIKKBRWQAUFGMJAZMUEDYCCWVPIOXIHCIYCWUQMHSUWORGOAUYKETHUNZLKBDAVTPBKVWBWDQHBNQETDYNPFEBNYFEONSNSSPZMLNVXJXFZZVSUPGCUHRN");

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
    msg.setTimeStamp(0.10862555722717104);
    msg.setSource(63598U);
    msg.setSourceEntity(190U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(1U);
    msg.custom.assign("IGVAXQNUPUBFRJJTMJLOAPOPZWLPVQLBFINDYRYKECNAKSPCELKZCFZITSVFVSCIPTIWFDXUOSQHNUZDJOTZEADYSFILDKFQLEJVKIYIJEKPWFEKHWMWAXJRHRGVOOOQWEEGKZHHFUTTJVACABHHODDPGBHTMVMZXHWYBWZCMJTPIYSRBYBXGTOZGRVYQPQEXQUGRGBNQMWSGOMJ");

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
    msg.setTimeStamp(0.5817281681979984);
    msg.setSource(28544U);
    msg.setSourceEntity(209U);
    msg.setDestination(50400U);
    msg.setDestinationEntity(133U);
    msg.custom.assign("QPCFAYBTLRVI");

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
    msg.setTimeStamp(0.10522310466427609);
    msg.setSource(40479U);
    msg.setSourceEntity(232U);
    msg.setDestination(45753U);
    msg.setDestinationEntity(3U);
    msg.timeout = 52735U;
    msg.lat = 0.9767638550993546;
    msg.lon = 0.579088555110644;
    msg.z = 0.6348083742740731;
    msg.z_units = 101U;
    msg.duration = 5813U;
    msg.speed = 0.874514681915016;
    msg.speed_units = 173U;
    msg.type = 163U;
    msg.radius = 0.27265569254977273;
    msg.length = 0.11085091963073435;
    msg.bearing = 0.7999833053712612;
    msg.direction = 227U;
    msg.custom.assign("JMNSKMRHLIQCTILL");

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
    msg.setTimeStamp(0.19027007612161617);
    msg.setSource(42902U);
    msg.setSourceEntity(220U);
    msg.setDestination(38407U);
    msg.setDestinationEntity(141U);
    msg.timeout = 53750U;
    msg.lat = 0.41355181053019574;
    msg.lon = 0.1196461180039946;
    msg.z = 0.07071239908290683;
    msg.z_units = 17U;
    msg.duration = 41734U;
    msg.speed = 0.9307921538249864;
    msg.speed_units = 217U;
    msg.type = 140U;
    msg.radius = 0.917299684635394;
    msg.length = 0.028068700771869404;
    msg.bearing = 0.7578280605404419;
    msg.direction = 203U;
    msg.custom.assign("CBMPJFHDZFTGWNIK");

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
    msg.setTimeStamp(0.48905292440532333);
    msg.setSource(11001U);
    msg.setSourceEntity(56U);
    msg.setDestination(14108U);
    msg.setDestinationEntity(77U);
    msg.timeout = 39803U;
    msg.lat = 0.9161988167026464;
    msg.lon = 0.24896858773943364;
    msg.z = 0.2510535685286923;
    msg.z_units = 44U;
    msg.duration = 25506U;
    msg.speed = 0.052931264698954816;
    msg.speed_units = 183U;
    msg.type = 173U;
    msg.radius = 0.7148233211700012;
    msg.length = 0.46006079801969146;
    msg.bearing = 0.8134143557519877;
    msg.direction = 77U;
    msg.custom.assign("SNGEZXYHRNBQFPSWBKJLMJFAQONZUKOUHNEJMNARQRIPUPMNZSQUYBQQOTZHLLTSSVAHHGDCBOJZNKIGRFGWXEGDCUMTEJWPOMHAWTDBMNIWIRYVQXRAXQBYTYZRVMXNVIVWRLXQXEFZSWDTBGFPOTWHWLOIYFPKQPYEHPPRVWBVJSMGDCOLKLLZATOJTKVVDJZESUYVFIP");

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
    msg.setTimeStamp(0.17620703935891968);
    msg.setSource(45310U);
    msg.setSourceEntity(233U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(177U);
    msg.duration = 32848U;
    msg.custom.assign("HEJZDUCYCSFWFHPLEJMTIXKOWSIHJTVJCYIKFUOWMAQOQBLKHSJINYOYQEXSDIUVUE");

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
    msg.setTimeStamp(0.3701179880048655);
    msg.setSource(32682U);
    msg.setSourceEntity(73U);
    msg.setDestination(18414U);
    msg.setDestinationEntity(96U);
    msg.duration = 28852U;
    msg.custom.assign("SYGFEPORLARYREVXOLQBPWCCUMXLSUGNMWQLZZIKDDGECZTTCIMKFFOJZWBHGJNFBQFITFIRCSLEZELRJNCDKMAHNAAAIHJUEHTZNTXEOZUULPIDQXTHSNDMRKDYHHBYYOFIBIVLMYHNCYCFYPIDSQJBDAHUQNVWEAYVXYSKMODLUNQOVEXWJPXWGWMAQFTRPCKBJOZAZHKNWGGRDSPSVBQXIUKUPOXWQOKVVJPWVJGSPBJMRSBKAVUTC");

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
    msg.setTimeStamp(0.14413797726725053);
    msg.setSource(1091U);
    msg.setSourceEntity(56U);
    msg.setDestination(8753U);
    msg.setDestinationEntity(179U);
    msg.duration = 49917U;
    msg.custom.assign("LVTQMCAAIVIDNNGRKJOWLUQAXQQBABTACJIXAZGDLYJVBMCSRTLXQIMHEPCYMRFWYUWGMIKUEXRKFWXIVHJNZMUQBHRQMBRADOXFFUCPACPPEFJEFWTVYPYNNGOVDYITRTYDCKGMAEMUHZVNOSTOHHGQXREZTHDRXKONWHDEIUBSE");

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
    msg.setTimeStamp(0.04363784207435173);
    msg.setSource(61276U);
    msg.setSourceEntity(173U);
    msg.setDestination(63388U);
    msg.setDestinationEntity(176U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.4763066036147523;
    msg.control.set(tmp_msg_0);
    msg.duration = 7334U;
    msg.custom.assign("GNTAWLDEEUOUCBSBSLGMACULUVLSGBRPXRQCDVHHUGWSAWDMTROBJMOKJVKKBMCUSEPSCJODPYZVEF");

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
    msg.setTimeStamp(0.998866178997127);
    msg.setSource(57310U);
    msg.setSourceEntity(133U);
    msg.setDestination(17714U);
    msg.setDestinationEntity(87U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.3418173184558976;
    msg.control.set(tmp_msg_0);
    msg.duration = 21558U;
    msg.custom.assign("LRNMGWTWDQTRHGJPKJASRCGFIANEHHILMSVHCXYXJNFNYHXNQVXPMDEEGDHGXXEHDNZUQVEIVXTLPPYYQYUBKARNTEKHGUVQKLOCJEDUWIMGFUUVBBSWBZIWVOVDQOCPDPCOTUZJPNRUWJCOEZOKLSBRYZVANCABOAKOMCJZAFBKSLWJRFPIICXGSEXGZMFZEHHQFIUIKAKFYSJQOAMZRSSLYITFDDQPTLVDBWFWJQWSCPZBAGLXTYRMTRNOM");

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
    msg.setTimeStamp(0.19189038294677707);
    msg.setSource(18859U);
    msg.setSourceEntity(135U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(18U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.7005490983289552;
    msg.control.set(tmp_msg_0);
    msg.duration = 50612U;
    msg.custom.assign("NEVYMPWFREIZGVAMGLJUGNJHBSSZZHSEDOXOPNLQWVXXFTNBCMTXERKVHEUUCRQSXTTQRPJINFUOJBPMFNFHIWIWFZVQGMGPULFQIPLYDXHAJJZDTMAIDCRISGNGEAW");

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
    msg.setTimeStamp(0.6834234013121052);
    msg.setSource(63295U);
    msg.setSourceEntity(214U);
    msg.setDestination(28129U);
    msg.setDestinationEntity(62U);
    msg.timeout = 40556U;
    msg.lat = 0.9794677991625674;
    msg.lon = 0.3939508880958329;
    msg.z = 0.867735415636181;
    msg.z_units = 40U;
    msg.speed = 0.18342306502459105;
    msg.speed_units = 138U;
    msg.bearing = 0.7693978085470279;
    msg.cross_angle = 0.04658043701633385;
    msg.width = 0.12023708407440348;
    msg.length = 0.8023665509284437;
    msg.hstep = 0.9474343769342883;
    msg.coff = 31U;
    msg.alternation = 157U;
    msg.flags = 3U;
    msg.custom.assign("QWOWEMBIBIPJNXVGSNGDLDFLBXJVXMZTGLCMDKDNYIZAOOIVMYRPSKLLIOZTAIDSFTXRPKCTOJMLGRYSHHSBCVTFXELIATAQEKHORYCFHFQQKTERNEJXIWVSPNVTXOAVFCOTQ");

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
    msg.setTimeStamp(0.8456196396588218);
    msg.setSource(51728U);
    msg.setSourceEntity(99U);
    msg.setDestination(55322U);
    msg.setDestinationEntity(139U);
    msg.timeout = 37486U;
    msg.lat = 0.6824392211842744;
    msg.lon = 0.5639254095208996;
    msg.z = 0.19600900331180204;
    msg.z_units = 86U;
    msg.speed = 0.1509313852085692;
    msg.speed_units = 39U;
    msg.bearing = 0.1460270253663103;
    msg.cross_angle = 0.5850186512187119;
    msg.width = 0.6632212006817593;
    msg.length = 0.2776046677516151;
    msg.hstep = 0.052448950852189924;
    msg.coff = 227U;
    msg.alternation = 153U;
    msg.flags = 6U;
    msg.custom.assign("QMLZFDWHQSXQXNOWUHGINOJPUEBBOSXSMTUDYEGLAXNIDZPIDDTCRPPIXKNQZTCFRMNFAFSRCEONDWOGWBRXZPTIVGQDMKOREBMULTZSFWEKQBZTEHPJWUFBUKDJOEEHYMQJLHCENUCVKJSFBMRAY");

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
    msg.setTimeStamp(0.8185656708505146);
    msg.setSource(3573U);
    msg.setSourceEntity(246U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(2U);
    msg.timeout = 61452U;
    msg.lat = 0.5621413226802637;
    msg.lon = 0.03553017903656286;
    msg.z = 0.8134962242299045;
    msg.z_units = 228U;
    msg.speed = 0.28390128923208446;
    msg.speed_units = 12U;
    msg.bearing = 0.22310710440904313;
    msg.cross_angle = 0.925924375960741;
    msg.width = 0.24678471450940465;
    msg.length = 0.3910451968843893;
    msg.hstep = 0.5136233293468137;
    msg.coff = 8U;
    msg.alternation = 138U;
    msg.flags = 252U;
    msg.custom.assign("WMVSMMRKODLDYENKEXFUSCHXIPEAWQUPJNSHTXTYZVLALRIJCKSTNKUVLBBQUIZZONSBEUKJWGEDTQLUUGPDGMLBPVEIKKPXVYYSJSFOQWXHWPHZAYGTRPMXIAZFFGFROYKXQGWLCTXOKOMPHNMEWFJBNFVTQYCMKJSNGICARHTGBFZICMLDUDERZOSHLBDADYNDCVOBAQWWQPLOCJYGXYIHERFEQUTJZQXUZNVRWVABJAZTHGRORFIDNABCC");

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
    msg.setTimeStamp(0.4215704136129971);
    msg.setSource(43629U);
    msg.setSourceEntity(207U);
    msg.setDestination(23059U);
    msg.setDestinationEntity(217U);
    msg.timeout = 58194U;
    msg.lat = 0.8134088804798546;
    msg.lon = 0.4646092382353254;
    msg.z = 0.737079421657801;
    msg.z_units = 13U;
    msg.speed = 0.7903734485024267;
    msg.speed_units = 68U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9862960976208869;
    tmp_msg_0.y = 0.48538454988839974;
    tmp_msg_0.z = 0.18462675049101085;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ATTDXFUZWUHQKUDZHMAMKOFSZEWERNWN");

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
    msg.setTimeStamp(0.5482816376306434);
    msg.setSource(34133U);
    msg.setSourceEntity(126U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(186U);
    msg.timeout = 15064U;
    msg.lat = 0.2776220946668272;
    msg.lon = 0.03150240283051631;
    msg.z = 0.5524940559029812;
    msg.z_units = 203U;
    msg.speed = 0.5533405274155718;
    msg.speed_units = 0U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.23969824154656694;
    tmp_msg_0.y = 0.39250298024596575;
    tmp_msg_0.z = 0.8859286230576824;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UUSHOIZTWVWFFEVMLNFHOYMH");

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
    msg.setTimeStamp(0.44633517949191936);
    msg.setSource(49608U);
    msg.setSourceEntity(90U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(13U);
    msg.timeout = 44835U;
    msg.lat = 0.7929672166844839;
    msg.lon = 0.5999091374407759;
    msg.z = 0.8767078162680482;
    msg.z_units = 142U;
    msg.speed = 0.9143598773149373;
    msg.speed_units = 192U;
    msg.custom.assign("AFNLVQTZQLXZSOVLDZCJRPQQKLKXZAVNFQSVRDTIGCBBKHXPMBC");

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
    msg.setTimeStamp(0.6959753704347309);
    msg.setSource(52347U);
    msg.setSourceEntity(246U);
    msg.setDestination(44064U);
    msg.setDestinationEntity(148U);
    msg.x = 0.04079766066139867;
    msg.y = 0.866908786908372;
    msg.z = 0.9491076867421694;

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
    msg.setTimeStamp(0.25725125337591537);
    msg.setSource(3911U);
    msg.setSourceEntity(247U);
    msg.setDestination(29348U);
    msg.setDestinationEntity(227U);
    msg.x = 0.5064494595014923;
    msg.y = 0.7448189042360875;
    msg.z = 0.5682723096629239;

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
    msg.setTimeStamp(0.16558336929539563);
    msg.setSource(23568U);
    msg.setSourceEntity(1U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(2U);
    msg.x = 0.39921163405275784;
    msg.y = 0.5331571686918309;
    msg.z = 0.4791723890168177;

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
    msg.setTimeStamp(0.1291834052831986);
    msg.setSource(8469U);
    msg.setSourceEntity(142U);
    msg.setDestination(44265U);
    msg.setDestinationEntity(92U);
    msg.timeout = 57440U;
    msg.lat = 0.5500531120516571;
    msg.lon = 0.7245936411689133;
    msg.z = 0.07552025176419064;
    msg.z_units = 115U;
    msg.amplitude = 0.6982717550968676;
    msg.pitch = 0.6260824843401803;
    msg.speed = 0.9874869109743439;
    msg.speed_units = 46U;
    msg.custom.assign("HPIAFTTBZJBXHBDADVCUAWMFKVINOWZELLQRNVUJAQFBZHXQCWQNKEDFFGMLWPDLRXICJVURBWPFEPBYQSC");

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
    msg.setTimeStamp(0.7246713153049276);
    msg.setSource(3385U);
    msg.setSourceEntity(102U);
    msg.setDestination(33435U);
    msg.setDestinationEntity(0U);
    msg.timeout = 24727U;
    msg.lat = 0.21322529029143822;
    msg.lon = 0.9886628359298733;
    msg.z = 0.9901183319704204;
    msg.z_units = 223U;
    msg.amplitude = 0.6294875911348705;
    msg.pitch = 0.10079935499601311;
    msg.speed = 0.9784703439636994;
    msg.speed_units = 66U;
    msg.custom.assign("RGVCQTOAPLJGSQIXTXJYSLLXTCDAOFQXZCMIPWEBDLIYREORRAAOREEWVNZLNZRYPSMKNURCHHEJPJXWXFXBSTLPCWQQKJNZGVIOCVNPSHZICKCRJSHYQXIPXZLEUHSGAVUDIRQMVTEHWHBQSMUMYNTFBGYBWWMSNVYAKIFZNHUYTLHAOFZFFGROUAGWUVEAFZEDKCUGIIDDPJVKDKJUSLDZPBYKTKM");

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
    msg.setTimeStamp(0.41955640067984457);
    msg.setSource(59494U);
    msg.setSourceEntity(174U);
    msg.setDestination(44102U);
    msg.setDestinationEntity(109U);
    msg.timeout = 9021U;
    msg.lat = 0.5832924816023478;
    msg.lon = 0.6790476136827135;
    msg.z = 0.743124094159073;
    msg.z_units = 236U;
    msg.amplitude = 0.6228033712621965;
    msg.pitch = 0.14183129901346914;
    msg.speed = 0.8679697035816235;
    msg.speed_units = 10U;
    msg.custom.assign("NTWWNPCTWZEPQJERSQLHVOKYBVTZGVAHRXFTUSDEVGFEYFQNSODIXSLMRILOOHDQXEGCUCCDDQTXOQZAQIPUYGZMAJPXYIWPSHAIZFIMHGHYPTMXVZPBEKJOGYUMKEUZUSDXPBTQBNVMAMKBFZOYRWZDBHJYLDKFLDJPSONOBGBHOGC");

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
    msg.setTimeStamp(0.19747791232108292);
    msg.setSource(30532U);
    msg.setSourceEntity(253U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.5445227706474369);
    msg.setSource(36798U);
    msg.setSourceEntity(239U);
    msg.setDestination(11193U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.4316971606809966);
    msg.setSource(12401U);
    msg.setSourceEntity(26U);
    msg.setDestination(6942U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.27306926925532793);
    msg.setSource(23387U);
    msg.setSourceEntity(143U);
    msg.setDestination(6914U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.5422586224300022;
    msg.lon = 0.071494271772363;
    msg.z = 0.41443492980599095;
    msg.z_units = 188U;
    msg.radius = 0.5119841337418822;
    msg.duration = 35315U;
    msg.speed = 0.9533792082494863;
    msg.speed_units = 158U;
    msg.custom.assign("ETPACEZANIRBNXZLHTRZFHJWEXWEGMMLMUPFJJLHLBCESJQIBRVFADGAVGKQCIPHWTGYSBXCUMTDJRCOKBGDKKZQMIXZJYLMNJKWQDYAKPURJORNJVHEAKLPVSVMPTUAQJMASQWRBIYTOEYAYYXVINBWGSKZDQXCDQHTKXPDOXUZSWUNDXNUCFYMGELFUWROGDVFHTIHOHOSNBECVPROBPFVWERYXFCLNTKVZFILZOMSHIAYGUIPNWSQTDQ");

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
    msg.setTimeStamp(0.6111481983194006);
    msg.setSource(3382U);
    msg.setSourceEntity(246U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.8543525588590708;
    msg.lon = 0.13348955807594154;
    msg.z = 0.7328280078240782;
    msg.z_units = 241U;
    msg.radius = 0.16772449406658096;
    msg.duration = 31710U;
    msg.speed = 0.532754287715067;
    msg.speed_units = 212U;
    msg.custom.assign("MBCONXMPZAPBZPIZOHHQRNJHKWOVTSPBJLKTNBQFSDUPATCMZRVPDTRSLKKXPJRNYUEERELVVTGQRZGILBAWMFUHWDMQWDOYGJVANCHQNGDNXZKMKWQTKOBXOSCOUK");

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
    msg.setTimeStamp(0.2604033916746411);
    msg.setSource(47271U);
    msg.setSourceEntity(85U);
    msg.setDestination(2193U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.8334622840577609;
    msg.lon = 0.9332723531253231;
    msg.z = 0.197531830637788;
    msg.z_units = 119U;
    msg.radius = 0.6975631269915267;
    msg.duration = 61664U;
    msg.speed = 0.8456769464437593;
    msg.speed_units = 41U;
    msg.custom.assign("UHDBWRTTEFSNSYXWHLBWHBKEBUZSRIXGNKPTTKQXNQSCWLQCOWKVXCWXEAHGUABSDLAQOFLVDTNJPPCMQFIDSXHNLHQOOGFYEDIPJYJXQDOHROQGVRDPZYFKKNCZGAWDPHIMUROHABIZZFOFVCARGTYYEUYMEIGMFN");

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
    msg.setTimeStamp(0.47310574252011706);
    msg.setSource(16652U);
    msg.setSourceEntity(23U);
    msg.setDestination(27019U);
    msg.setDestinationEntity(41U);
    msg.timeout = 48476U;
    msg.flags = 85U;
    msg.lat = 0.5105827869843893;
    msg.lon = 0.3052282281332549;
    msg.start_z = 0.1423908603535643;
    msg.start_z_units = 26U;
    msg.end_z = 0.24528911963323263;
    msg.end_z_units = 20U;
    msg.radius = 0.40187935413948783;
    msg.speed = 0.5628825662032106;
    msg.speed_units = 43U;
    msg.custom.assign("ITAWABERTQCXLBSLJTAZHDCDDGPPRXKZIZWWBQSJGCPDWOCNUUGGROBGYATXTFXNSHEXVYYCEJDZPAGFAUCQQWHKIHEZOOKRMYNIMTLPKBRUKOKOMEVWWPSYUNWVTUIYGDYGETFDDFFSVYJYIVJQHNVXMPURREQIB");

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
    msg.setTimeStamp(0.09114820882122487);
    msg.setSource(53452U);
    msg.setSourceEntity(38U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(211U);
    msg.timeout = 13680U;
    msg.flags = 145U;
    msg.lat = 0.6361693703873085;
    msg.lon = 0.9903324116867696;
    msg.start_z = 0.1811138027571665;
    msg.start_z_units = 80U;
    msg.end_z = 0.18311461616874491;
    msg.end_z_units = 115U;
    msg.radius = 0.6218673237399538;
    msg.speed = 0.6864939700475937;
    msg.speed_units = 194U;
    msg.custom.assign("LRLNJFSMYOLISRJEUAUKWCXBSGBPFMUIIZLCPZFHAMLHPRAREVUMFBLECWCIJSRUQJRWCHTLOYVXMOXGYZFWVEOXBBHNEPKUFKYWIKXBHBCVAJVFXYDTJJAGBQVEATMFRYZCNWDYCAQDGDYJNXVPSECYMOMSWXNWLPSQGYPPHNNUEGKKAITKNADZHSXFNSLIIJUURDXATWLDZMQGTQQVIHPBKZDGFKDGBDHTWQKPTEOEVZQCQTNOIZVMUGSJ");

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
    msg.setTimeStamp(0.9521593723841851);
    msg.setSource(43162U);
    msg.setSourceEntity(77U);
    msg.setDestination(62516U);
    msg.setDestinationEntity(14U);
    msg.timeout = 12120U;
    msg.flags = 194U;
    msg.lat = 0.8483811357291839;
    msg.lon = 0.5264877244894466;
    msg.start_z = 0.8961195425324364;
    msg.start_z_units = 251U;
    msg.end_z = 0.8321011946260517;
    msg.end_z_units = 24U;
    msg.radius = 0.2149768465712807;
    msg.speed = 0.09863201751200756;
    msg.speed_units = 62U;
    msg.custom.assign("RNDAVWRUOGQCZDFWCJRHXCYZTYBVSIMVUHQRWGYOJXKBBVVEAPXNXMFLZO");

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
    msg.setTimeStamp(0.9794139133067093);
    msg.setSource(20469U);
    msg.setSourceEntity(82U);
    msg.setDestination(52472U);
    msg.setDestinationEntity(247U);
    msg.timeout = 13865U;
    msg.lat = 0.29272036220597797;
    msg.lon = 0.2645062429476792;
    msg.z = 0.7731364613290879;
    msg.z_units = 205U;
    msg.speed = 0.7377310676441605;
    msg.speed_units = 129U;
    msg.custom.assign("WEGIZGXHCNDKETPPNPDRPXIIOEMSBFWZPGGAHXLUQGQDOEXVCMSBCNRIXBLYOFLPKYSTVJXQFIMARWRKSWZQRHUBWCNVULYKHRWLTDUSUZAAOJVNEZLNAIBHNJMJDBRDDVASMOMO");

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
    msg.setTimeStamp(0.5822448864293104);
    msg.setSource(44560U);
    msg.setSourceEntity(147U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(63U);
    msg.timeout = 10249U;
    msg.lat = 0.20094676111054388;
    msg.lon = 0.8964702850179584;
    msg.z = 0.32630827502069126;
    msg.z_units = 219U;
    msg.speed = 0.972235779420315;
    msg.speed_units = 98U;
    msg.custom.assign("SQZZHBQTKEOPETEKXNMFJLWISINUVSBVDHFRJHERSZPEHYNFLRIRTVFYFOAPJCASEZODVNQHWAANWGOQDRLIPWMDAMIRRPGZPVXLXEDQLAKGBJEOOHKJAPMOTMKBGGIODGKKLCIHKMIGXSSMUUWVFYKZYZGISYBUCEVRDXZGMXIQPFTYGUWVFNNJXCLPVRRTOAYXTUYJTBHLFXTBLBQADKHCFAQTEPDYXUZMQQSNVZUWNLCYMCCUJNOW");

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
    msg.setTimeStamp(0.6868396350061047);
    msg.setSource(45594U);
    msg.setSourceEntity(49U);
    msg.setDestination(48230U);
    msg.setDestinationEntity(68U);
    msg.timeout = 9117U;
    msg.lat = 0.2131606030175548;
    msg.lon = 0.6381356918503848;
    msg.z = 0.2995557298053152;
    msg.z_units = 61U;
    msg.speed = 0.5514222596413113;
    msg.speed_units = 100U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.08430351325052088;
    tmp_msg_0.y = 0.4177132468694241;
    tmp_msg_0.z = 0.13760346050811423;
    tmp_msg_0.t = 0.09156922781744226;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KCDPUPQUGZBPSTYGWYWMEVRTAPSEWJNDHLSISZCXCVAKWNJWEMDIYBWGTMF");

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
    msg.setTimeStamp(0.8520843385313743);
    msg.setSource(44814U);
    msg.setSourceEntity(33U);
    msg.setDestination(17730U);
    msg.setDestinationEntity(248U);
    msg.x = 0.7639308480785698;
    msg.y = 0.7644454052892266;
    msg.z = 0.7502998323537364;
    msg.t = 0.38682141504744383;

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
    msg.setTimeStamp(0.7163372910010222);
    msg.setSource(39783U);
    msg.setSourceEntity(103U);
    msg.setDestination(49305U);
    msg.setDestinationEntity(199U);
    msg.x = 0.6405819581359443;
    msg.y = 0.007647197302427466;
    msg.z = 0.6705221062735088;
    msg.t = 0.26264973960996096;

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
    msg.setTimeStamp(0.08728673534617837);
    msg.setSource(57284U);
    msg.setSourceEntity(24U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(64U);
    msg.x = 0.15692739221855256;
    msg.y = 0.26864345464758277;
    msg.z = 0.7668568803054108;
    msg.t = 0.34097555480797914;

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
    msg.setTimeStamp(0.527579309495981);
    msg.setSource(1835U);
    msg.setSourceEntity(231U);
    msg.setDestination(28673U);
    msg.setDestinationEntity(106U);
    msg.timeout = 42934U;
    msg.name.assign("CVNHHZTUUTGKSIZBJDEWOSDUWGCMNUOAPKRYAYSTRPDDVGFJCTWGHOBQJNGEROXKBNMFCHRYDJLLVECGOZIKMMABDRNPVVTLITNKANEPYBYEZXWQPQWJZZSUBPMDACFZBMTIYQLHTXPOGSGAYWWRGWBJURXZCFQHXSFSVHMXJCVKTXFVLQNDLYISAYAMEDWJKIPULIUFCCHITVRGZUYAJLPEFXFMQOVXXFDQAJLWENOISEKHOPQMBHRO");
    msg.custom.assign("CEJPGEEIQHKSLETUXGIGSAREOQMHRFHAVWBEGINSCKOZMPCLNSENUUWGLVXKNTOXBPCYIWGZSDGOBPFBHAWYAMEBQEICRITUQLJHILSVYBARYCNSKHIZCDBXSMSRFBFUPVOPRGTOVOJLBRPWTHKWDXJDRKVMHZZNXIMRMVKAWMRJQZNCFAALUUZPUMKWQKYYFQQDJYTZ");

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
    msg.setTimeStamp(0.7613256147952137);
    msg.setSource(39140U);
    msg.setSourceEntity(96U);
    msg.setDestination(26071U);
    msg.setDestinationEntity(33U);
    msg.timeout = 5874U;
    msg.name.assign("GQJAFURNCUKHGZMXTHZNBVFYBRIXVKKGTVZJORDTFYEBKGUWTQYHNLDOV");
    msg.custom.assign("WLHUXVJOHEEVYVTTGKFDCAJDGUEAYCOLUMQPYCNNJKSDSJALBINWERZVYALPJXPKWIQYGFCKNNAKLERLXQHOENW");

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
    msg.setTimeStamp(0.31723186554686134);
    msg.setSource(6285U);
    msg.setSourceEntity(149U);
    msg.setDestination(25375U);
    msg.setDestinationEntity(159U);
    msg.timeout = 873U;
    msg.name.assign("PMTSXZOBVUSBNPZNVVBGTIIDETICMAQYMUOHDFEYMLHKJAVAEHQBZGFYFPCQSHARCKEULIVGYNEGFCWRQRRJTHAMRDDKCNPNXWWKGBYJEEVOTMXQAQQVYNZSALQOSNVBZAHWWTLFCPWEIDFZZMBKJOLLQVXFRJFTUJSJXLHUUIPBURNTO");
    msg.custom.assign("BFZOAKKLZPSYFMLRPTUQZRVVIICHFBBVQSMJHFWYDPZCODAHVNSNKKGGTFPMCMOEZNAGHUJQAVEDGVNQZWAMQTDXPCXXBRWIALJZNFAVOIUBCHKMONIHLDUBWNZHVYQRYWXRCAXUUMCDPBFZQKQDSGF");

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
    msg.setTimeStamp(0.5568337334162526);
    msg.setSource(8414U);
    msg.setSourceEntity(169U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.7700235381129655;
    msg.lon = 0.21556623625306826;
    msg.z = 0.7737654056123143;
    msg.z_units = 7U;
    msg.speed = 0.6045094590204647;
    msg.speed_units = 220U;
    msg.start_time = 0.4790748548634235;
    msg.custom.assign("PNPEXMYVQZOBOUUUFLRTKCTMAQLISLQVIZRJZNPJSTHRMVDEAQHKRPLADHEMTFDFVFBWCLIFAMEUOVJJCINTGBHAFXPYSY");

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
    msg.setTimeStamp(0.9494495145792367);
    msg.setSource(19839U);
    msg.setSourceEntity(34U);
    msg.setDestination(49435U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.0619181556057149;
    msg.lon = 0.888228625173437;
    msg.z = 0.8761891145745254;
    msg.z_units = 246U;
    msg.speed = 0.539393070857073;
    msg.speed_units = 185U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63676U;
    tmp_msg_0.off_x = 0.1148941740427073;
    tmp_msg_0.off_y = 0.06315321686292319;
    tmp_msg_0.off_z = 0.7564387785532645;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5703418248047628;
    msg.custom.assign("TDDRTDOPIDFYBKOFKDBNMESFZYRXBPZFPXQCPSABFBZTCISGIWWPMGEMWGCDGYLJNBKXZBSPASMXRTZOLXEVHMHVLJNQYYLFVFEYAIKZCQOITMNRGRDWWTFNUVGOEKUZNAUPXINPXAIAODYAYGCIOAJGLFYTWVBLCLDCJSVXERHMIQGYQRUBNLQWEJHFWMARHQUQUTZTIHUODJURKS");

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
    msg.setTimeStamp(0.16496312811730673);
    msg.setSource(11181U);
    msg.setSourceEntity(111U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.9618588018382829;
    msg.lon = 0.9786382095238432;
    msg.z = 0.15824031600354838;
    msg.z_units = 172U;
    msg.speed = 0.666037456313288;
    msg.speed_units = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35453U;
    tmp_msg_0.off_x = 0.0962418772233421;
    tmp_msg_0.off_y = 0.012672569930706867;
    tmp_msg_0.off_z = 0.34853322239579654;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.32664940453191416;
    msg.custom.assign("JHLYYERWTTAZOQPCQUXOYKLDGVSGQECBASSCJMCIUQPPZKUXAPAWGFZNNGHTPVIXWSCMXPZYNOWLDAKYSJIDHAEUKPHDMKMREJIWCTFYDRSZVEVIZDRRTKNEVWVABIBDWKHVJJZSOQFOTYGVMUFMLOTAAIYJBSLKEGFBPOLRUBWTCSMGRVHOLFCVLLJUQYMFXXUNZKMJXIFMDRNTOWBRQQDPLGEXXYGBENZHUPTWHNCZIDFJUBEOQFSQH");

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
    msg.setTimeStamp(0.05418861934676644);
    msg.setSource(55362U);
    msg.setSourceEntity(179U);
    msg.setDestination(46788U);
    msg.setDestinationEntity(98U);
    msg.vid = 61142U;
    msg.off_x = 0.4379316045246736;
    msg.off_y = 0.9837660602305449;
    msg.off_z = 0.49920144186757787;

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
    msg.setTimeStamp(0.974951725892038);
    msg.setSource(3433U);
    msg.setSourceEntity(243U);
    msg.setDestination(28971U);
    msg.setDestinationEntity(125U);
    msg.vid = 24825U;
    msg.off_x = 0.3455231682542361;
    msg.off_y = 0.9837401636992593;
    msg.off_z = 0.2815635430476984;

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
    msg.setTimeStamp(0.4721027864159476);
    msg.setSource(42289U);
    msg.setSourceEntity(247U);
    msg.setDestination(8657U);
    msg.setDestinationEntity(121U);
    msg.vid = 46729U;
    msg.off_x = 0.48528290861119505;
    msg.off_y = 0.8727256168562422;
    msg.off_z = 0.2321766187198524;

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
    msg.setTimeStamp(0.2773310751728182);
    msg.setSource(57340U);
    msg.setSourceEntity(100U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.020859090752513132);
    msg.setSource(28539U);
    msg.setSourceEntity(36U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.5780784024035902);
    msg.setSource(60667U);
    msg.setSourceEntity(158U);
    msg.setDestination(32681U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.791720188204617);
    msg.setSource(12959U);
    msg.setSourceEntity(84U);
    msg.setDestination(64381U);
    msg.setDestinationEntity(197U);
    msg.mid = 3734U;

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
    msg.setTimeStamp(0.8608976676642495);
    msg.setSource(57611U);
    msg.setSourceEntity(248U);
    msg.setDestination(7767U);
    msg.setDestinationEntity(0U);
    msg.mid = 4503U;

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
    msg.setTimeStamp(0.9663331492114413);
    msg.setSource(36190U);
    msg.setSourceEntity(51U);
    msg.setDestination(45589U);
    msg.setDestinationEntity(245U);
    msg.mid = 9813U;

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
    msg.setTimeStamp(0.4009186814317922);
    msg.setSource(35889U);
    msg.setSourceEntity(213U);
    msg.setDestination(54U);
    msg.setDestinationEntity(111U);
    msg.state = 183U;
    msg.eta = 29319U;
    msg.info.assign("YXXBMQYSNKQLPVVBLJRUCZPFDFBKXGUQXCDNJGBFLWEZBVSOBKJKAFGQVNQGJMBPMRXKMTNLPOEVVFQRIOLJNQGHUEMVNCYZUFULEPNCRWIZPAHRZEMCYTSDROJAXQXPTRDBODIHCDIUGLLVPPGMJBKUQOORVWOYZHQWKLUAXMSDOKTSW");

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
    msg.setTimeStamp(0.3555561995533991);
    msg.setSource(18942U);
    msg.setSourceEntity(13U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(61U);
    msg.state = 126U;
    msg.eta = 402U;
    msg.info.assign("AGUVBSLRWSTFOHRXBVBLGXJAMRIOPIABSLQPHBMQOYIDLTNWWGBEKYVWUFJRVKINGDUAGCMHZSTRFMMBZSTYOJZDRX");

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
    msg.setTimeStamp(0.5864810069437678);
    msg.setSource(36752U);
    msg.setSourceEntity(93U);
    msg.setDestination(61222U);
    msg.setDestinationEntity(52U);
    msg.state = 226U;
    msg.eta = 62971U;
    msg.info.assign("VXHZCHRMMWWTLEUHRBUYJROGRBNQFUGMPRJJEPWAWWNRSBSPDCZILQDJFPTVTCPFOLQXTXUXBXZFYICLXYKMKOMDDSVFZFOTYVXMNTQJQPOFKHJMKTNPYJNSUHVJSVYDQMITEKNAGSUVQZBVCQAWPZJOIKUDOJRQEAOABKNHZPYESBWDXSUSAAIYEOCLLFACFNGQLAUXLHYIMKBTTIGGDHWAYZEGVIPKHEKIEMGEC");

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
    msg.setTimeStamp(0.17139001009582777);
    msg.setSource(42150U);
    msg.setSourceEntity(173U);
    msg.setDestination(38250U);
    msg.setDestinationEntity(74U);
    msg.system = 45687U;
    msg.duration = 17351U;
    msg.speed = 0.49228006518248535;
    msg.speed_units = 239U;
    msg.x = 0.6791999101432739;
    msg.y = 0.0009146868152041243;
    msg.z = 0.2984161732492777;
    msg.z_units = 7U;

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
    msg.setTimeStamp(0.8331841995338848);
    msg.setSource(55683U);
    msg.setSourceEntity(119U);
    msg.setDestination(21296U);
    msg.setDestinationEntity(207U);
    msg.system = 41749U;
    msg.duration = 64176U;
    msg.speed = 0.2904709201007101;
    msg.speed_units = 223U;
    msg.x = 0.5270452464227089;
    msg.y = 0.9944983654796417;
    msg.z = 0.7238085424964512;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.9275097884704468);
    msg.setSource(32116U);
    msg.setSourceEntity(246U);
    msg.setDestination(15836U);
    msg.setDestinationEntity(47U);
    msg.system = 37053U;
    msg.duration = 51780U;
    msg.speed = 0.7470391222571519;
    msg.speed_units = 253U;
    msg.x = 0.24053126873518382;
    msg.y = 0.5375118065661543;
    msg.z = 0.8864209089935795;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.3734992885974503);
    msg.setSource(64008U);
    msg.setSourceEntity(94U);
    msg.setDestination(60140U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.5293952064620387;
    msg.lon = 0.5423299056706467;
    msg.speed = 0.05528862877998264;
    msg.speed_units = 246U;
    msg.duration = 29713U;
    msg.sys_a = 37263U;
    msg.sys_b = 27006U;
    msg.move_threshold = 0.6062764344357024;

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
    msg.setTimeStamp(0.11764703823329192);
    msg.setSource(50686U);
    msg.setSourceEntity(116U);
    msg.setDestination(49026U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.38330620840197915;
    msg.lon = 0.13025556689999418;
    msg.speed = 0.3943185628224768;
    msg.speed_units = 121U;
    msg.duration = 18446U;
    msg.sys_a = 52981U;
    msg.sys_b = 9583U;
    msg.move_threshold = 0.3915699658699805;

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
    msg.setTimeStamp(0.06209525906352842);
    msg.setSource(19274U);
    msg.setSourceEntity(192U);
    msg.setDestination(5322U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.2610586999796395;
    msg.lon = 0.23540928574803022;
    msg.speed = 0.7207793211764165;
    msg.speed_units = 136U;
    msg.duration = 11518U;
    msg.sys_a = 31214U;
    msg.sys_b = 17716U;
    msg.move_threshold = 0.27094653309439487;

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
    msg.setTimeStamp(0.8718400730340917);
    msg.setSource(58599U);
    msg.setSourceEntity(184U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.10047466244565084;
    msg.lon = 0.4712199089472362;
    msg.z = 0.3161974191624608;
    msg.z_units = 61U;
    msg.speed = 0.9959664189600272;
    msg.speed_units = 54U;
    msg.custom.assign("YJHAOQXNRCEMUDBQTYNMNBVYUQOHTGWAEBAFNEZDJOBSMHHCKMJSLFZNIJDDRKXKRRFVZHCKTXUUUGAIUNPVXVKSBHPBXAWLCAZPDPGEEOCVZJIYZUFBMGZHLZLLITXEMHYSP");

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
    msg.setTimeStamp(0.461616389073928);
    msg.setSource(24189U);
    msg.setSourceEntity(125U);
    msg.setDestination(2581U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.8506668775357835;
    msg.lon = 0.08080294441863611;
    msg.z = 0.3623295573854709;
    msg.z_units = 73U;
    msg.speed = 0.002204747159488374;
    msg.speed_units = 147U;
    msg.custom.assign("HZHKNMHUTWQDSTLLDIOBAJQAXOETDCVVWHFYRYEQBAQNPTSOBKMJRSJHYXWKBHGUJCTIPCQUXEPAWJOLNEVZHJYWSARHONKMDPOTBNRPMRPVDMXAZDRRCKIKLYUSVZDPACEJUCPOYFOCLNGIFCGSGTYKUFUDKSXXFKQFGERYQJBEYETBOLFURXNMOLAVTRBXSLMIQMVIUSZFVSWZAGMXKWUYGNQZWDCDJTWGFZCEHI");

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
    msg.setTimeStamp(0.6032088467356642);
    msg.setSource(3009U);
    msg.setSourceEntity(144U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.27878621474919385;
    msg.lon = 0.6578653476628922;
    msg.z = 0.6469842514485169;
    msg.z_units = 201U;
    msg.speed = 0.6945090421806192;
    msg.speed_units = 77U;
    msg.custom.assign("TXCTJQQKCQUADFPRWPGENFDDMGYPDJTAXYVFFEVCBSAZPWUKWRSUUJQUFGZZSJVKHLJXTFWYREARTWZSZBBOVVMROGNHAKSGDCXLBZWBNKCASBKVJHTEGUEMLIPVIOSLWYLYNCBFGM");

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
    msg.setTimeStamp(0.9580316354870843);
    msg.setSource(6469U);
    msg.setSourceEntity(194U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.6259555483574298;
    msg.lon = 0.9441095285854192;

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
    msg.setTimeStamp(0.7608442678855927);
    msg.setSource(60221U);
    msg.setSourceEntity(42U);
    msg.setDestination(61810U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.8709067091965789;
    msg.lon = 0.8256883623058074;

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
    msg.setTimeStamp(0.37596395115806147);
    msg.setSource(6535U);
    msg.setSourceEntity(181U);
    msg.setDestination(42185U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.6309263024668215;
    msg.lon = 0.0882048432710748;

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
    msg.setTimeStamp(0.9347121216996775);
    msg.setSource(35313U);
    msg.setSourceEntity(179U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(235U);
    msg.timeout = 12304U;
    msg.lat = 0.8788626553399477;
    msg.lon = 0.9260034030997004;
    msg.z = 0.3302840953596402;
    msg.z_units = 30U;
    msg.pitch = 0.43034648800973707;
    msg.amplitude = 0.7036373762232362;
    msg.duration = 53757U;
    msg.speed = 0.3756755056445815;
    msg.speed_units = 190U;
    msg.radius = 0.46490617393479816;
    msg.direction = 254U;
    msg.custom.assign("MTKOIJFGFLBBTGCMIEQXQJPDDCQCRNXEMFHRVJYBPMMJ");

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
    msg.setTimeStamp(0.41457994442748436);
    msg.setSource(38898U);
    msg.setSourceEntity(187U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(214U);
    msg.timeout = 29465U;
    msg.lat = 0.9763044951927481;
    msg.lon = 0.12152299090035346;
    msg.z = 0.5362702478437897;
    msg.z_units = 46U;
    msg.pitch = 0.1945781738033292;
    msg.amplitude = 0.7182101828066431;
    msg.duration = 57985U;
    msg.speed = 0.30099147010793603;
    msg.speed_units = 82U;
    msg.radius = 0.2029709747913968;
    msg.direction = 154U;
    msg.custom.assign("IGMCRGGVBDXPYXEJZWKDKVNSRETEINUGSBLMXSODJLWNYUBDOQBPMKHYCCHZXAIRTLTUFHIXWCSKDDZWQTIQEPJPTRMNITGPGOJZIKOEGWOQWEJ");

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
    msg.setTimeStamp(0.30940092558791044);
    msg.setSource(33336U);
    msg.setSourceEntity(36U);
    msg.setDestination(63927U);
    msg.setDestinationEntity(103U);
    msg.timeout = 5050U;
    msg.lat = 0.4881894411560467;
    msg.lon = 0.8513690884796603;
    msg.z = 0.6930357697803922;
    msg.z_units = 191U;
    msg.pitch = 0.936905648531618;
    msg.amplitude = 0.520235972016179;
    msg.duration = 39163U;
    msg.speed = 0.9017829165987734;
    msg.speed_units = 142U;
    msg.radius = 0.618076521361994;
    msg.direction = 188U;
    msg.custom.assign("VLUAWYJIVZZFRIULHNOSBXKBKHFKUSTVIJNZFRANIHDIQNYZNQNFVHEVGWUEHEHYTGPDJFBLOOMDCQZEFYPUMOATUTNMAYCFUTNUWHQFVSENBVJAWJUMYYCAAJAXMERCTBTXYOTXHWOZSGCOBPSKRSJQLWLCFXZEQTPGPHXJMCKTUDDL");

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
    msg.setTimeStamp(0.10272858472662183);
    msg.setSource(64156U);
    msg.setSourceEntity(65U);
    msg.setDestination(54480U);
    msg.setDestinationEntity(47U);
    msg.formation_name.assign("SXNZXNAOQSEGMYHHVKQKMUJUWVMHKRWGUFSJFDVPELZDBHXULCGKDRJFETYXDMIJGUDHMHTDWBHCYQLHSZPOSIJLRSNUWVIEALTQYKRPIINHDECMNRUDAOJXCCKVWLNCJERLAGPYRQSUSETCAOCJTOQHAPGLFBTZDKAIBPXTAWUYQYVZPPZCOISZTQLKFZVMOEWWIGNYJBFGZQZIGVUYBPXVQKBMFCBEMYGBTVXWDNISMFNFRAFROWBENPTO");
    msg.reference_frame = 226U;
    msg.custom.assign("KQBOCYAMGVFGUPMITUYICAVEVLVOLIWRUOXYEBPOHHUFCFTLZUDZWOJCPNWCYRGEDSUJSYXXUQPGNMKEKPFHHRYZJGMHEEQDUOBSKBTXPFRWCWNHEHBZFDGFKJEAHLKXEDXZMYZODRSSRANUIZVDBRJTJTQSKLFWVGEJJOXZHLNWJVBPCNBIYTLGDGSMWAKRMSIUVHLQDTNQPMM");

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
    msg.setTimeStamp(0.46871831461282387);
    msg.setSource(64542U);
    msg.setSourceEntity(167U);
    msg.setDestination(23798U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("YMDSDLSAPTRTSXMSYQCWWKIFCCPQMBRGTRUSLAHJNBMICZBUFMVCEYBGLPKUHMCGBNUDSEOOABOFAYTTHPAY");
    msg.reference_frame = 237U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64481U;
    tmp_msg_0.off_x = 0.10530357179732741;
    tmp_msg_0.off_y = 0.5684758410136885;
    tmp_msg_0.off_z = 0.883935518690765;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NYNKWRRMVVZQEBUEFXNWVLXTBVSNFLUHUBISWWITOCJPGIRCMCMNAGPYZTLWAIGZEQGEARQJTVQBFSMBZLCLVORSHTMVYWCURDYGXHDGYJWHEBIPRWJNKDOGDGHDKAQZETIZTNXQJYHLPCGCRIVPOZFNFVOOKEQTKFOMSDUNJJJPSVZCKOKPPFQUWSXXUERICQAJBKXYBGHYUKEHIDLMLEXFDSHOAPQNUUATAAOFMKFBJDYRZPYXTMALXWZMLC");

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
    msg.setTimeStamp(0.19175195449393279);
    msg.setSource(14070U);
    msg.setSourceEntity(240U);
    msg.setDestination(36952U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("BHNRKJQDECDQGLSOUTSLDGYXIPPBMQNEQORPULEYRKAZFDPOOOUUKSETCFPNHJPCFJDCXFRMEGEIEWKBETKZWSQATRXIROUSWTJFKWCUXBMSOTHRNGWDWZZOIKAKVBAIJKPZNMLFXWYGVPRITJLMWDSXYVZLXCWVJMGAUGHQMWHKNVYGBHBNMPTLCHXQIYUDVRZQOCSLTIPGBZSHVAYUIFMYZXDNEQALLAESQBHMIFNVF");
    msg.reference_frame = 151U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55318U;
    tmp_msg_0.off_x = 0.4060851264292509;
    tmp_msg_0.off_y = 0.23538579723545738;
    tmp_msg_0.off_z = 0.778190252751365;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FOYDCWXJQLBFAOVZRNFYTLIKLNMXUMFINTVNAFNGXGVQKMVOTHWJNDYZQXUGYYACJPLOUMWLLIZBYDWHIVCOGDYQRPNCTOWAPJZXWLBTGKHSOIERFLJMSKCNHANHSEKKRZVADCCOMUPWRMRWYKPGUPJHSDITYBFQKNOYPZEEODRESJUSQJJVKXAVJSGZRXWPAKSBVCLIHIBSPGCATWMQABRFBXEILZFSZFBRQEETIHQZMQUGPEDD");

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
    msg.setTimeStamp(0.31369266252754957);
    msg.setSource(24663U);
    msg.setSourceEntity(37U);
    msg.setDestination(6139U);
    msg.setDestinationEntity(82U);
    msg.group_name.assign("QMBYXJJRVOBQWKBDEHWYBU");
    msg.formation_name.assign("JKWOKHNVMQMYFUQJNRZFKUJOBOWODSTJMJMXMLQLJBVILNWSZEBF");
    msg.plan_id.assign("NJFUJMVOZXKNWKDRFNM");
    msg.description.assign("IMQJYOXIVJOOUCEBFXZIEADFJLUTRFRL");
    msg.leader_speed = 0.9144261421413316;
    msg.leader_bank_lim = 0.45898762728937614;
    msg.pos_sim_err_lim = 0.8277020323282128;
    msg.pos_sim_err_wrn = 0.3476290553792315;
    msg.pos_sim_err_timeout = 9161U;
    msg.converg_max = 0.24893435463991265;
    msg.converg_timeout = 65293U;
    msg.comms_timeout = 28808U;
    msg.turb_lim = 0.4944465874585816;
    msg.custom.assign("SPXPDRKUJEKBFHBJAMHGMINJOSRTICAQWNOIULCXQTHMDSHSDDPBXRGLURNVIJNVOFTVTMJDEEIJKITOSJATVGAYUXWCJPZKYIWKFNURPQSZEPMEWQQAWKXPVUTJWEFWUCZFXECYRNBFYKTHGCBLGNNLWYYIWHDXIYALQDOCGODPYHYUEEMYCGGKQPUAKVRWRXOGHUFVJRTABZOQCZDLSFZZTBMBAMMVQZNGQC");

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
    msg.setTimeStamp(0.09004040635649879);
    msg.setSource(64237U);
    msg.setSourceEntity(71U);
    msg.setDestination(2237U);
    msg.setDestinationEntity(78U);
    msg.group_name.assign("TRZQWNNLZRYSBZXCIZKNFDHSTDWKBNMURMASZNWTKCVUIOAJSDETFRIZJUUGXYJABDZFFTLFXNMMCHMSQWLTTWKEGLEKIAJSTOVIT");
    msg.formation_name.assign("EYMJIXBHABFWAVLTORCCLTKOUADUJPAUTLXZMRXSODFLUJJWHTHFQKZQIIOMCUZQKNKUINDEPTEQRVBSAEORKNBMDIWZMJQFIUSAOCGEHBBVHJQPXNDDEXIVTVBCFPY");
    msg.plan_id.assign("WWFPJJYUTZYJOXULTOPAWEFMYADEQUXKXIJBSUDXMXLRWIPBGLHQYIDMOFKKPQKXQYUCDVHGFNNDCUOBRQUUHAQJVEYGHCFRAMLOTQMLRJV");
    msg.description.assign("FTEKYHIEYNUDAWHDGJJHZOMWBQZJRLBJCXYNRLPFIWFVIFDZFZALHWZBBITGSCHQHYPCCHWMISVOJTWASKVNMSVUUOEUGLDFOWAZXJQCFESAKZAXLGEINWMILNQNTOGYTEMRMXRBLDMKKCBYUDRTFEMK");
    msg.leader_speed = 0.6147694560857988;
    msg.leader_bank_lim = 0.33944323314069613;
    msg.pos_sim_err_lim = 0.35706785642825667;
    msg.pos_sim_err_wrn = 0.45583624077076157;
    msg.pos_sim_err_timeout = 54970U;
    msg.converg_max = 0.4766953931318686;
    msg.converg_timeout = 12448U;
    msg.comms_timeout = 15370U;
    msg.turb_lim = 0.3163936644540061;
    msg.custom.assign("ZAOQGYIRYMFQJCWQRAHWSPJLORQIFATNGGJJFCPGUFVJSIWINKRZGGWSVUMYNAJHDRDIYHOJGOKUVBNAEJIKH");

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
    msg.setTimeStamp(0.39249226417086847);
    msg.setSource(15186U);
    msg.setSourceEntity(105U);
    msg.setDestination(52238U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("XUOBOJHGQQKAPWVYNONUXKKRJMFSOUJXTUKAOKGPYWMSXIZGMSHGQROMQISBSCMLEWPCDSGRGLARZJDTVFAQJQEUFRBWFETWVITUXINEHYJZLYLWZZAHBGBLVVTCGTIGTYMERVDOFZMPWHMPCPITLPJSNHEXSWAKNEJPNKKJAHEDLFB");
    msg.formation_name.assign("PWNTITODMLSTHZZNDFHJPGOQZOJVSAFLAJCDLO");
    msg.plan_id.assign("JLGTRZIMOJOFAPIHVSLSQXBFZOWBVACNMCASFNXCFG");
    msg.description.assign("YWQASEAYTLGQUEUOSOBRLERZKQJMYFCKUNYWKQTBJPUPKQTTAR");
    msg.leader_speed = 0.6434647178268414;
    msg.leader_bank_lim = 0.7745801710374135;
    msg.pos_sim_err_lim = 0.42852069006941484;
    msg.pos_sim_err_wrn = 0.5949375309234775;
    msg.pos_sim_err_timeout = 44000U;
    msg.converg_max = 0.24981426614501567;
    msg.converg_timeout = 6194U;
    msg.comms_timeout = 12828U;
    msg.turb_lim = 0.4894123662269798;
    msg.custom.assign("HIVPSSIFDPVMNNTIPQVBGFZZILDXKQXVPFTIATBUNMOKKXOYVEKMUHZXEJLSRZFZRCBTHCYGESAEMHBBYAXMHOCHJQKVCWBMRGHRNQZLVXGEUOYTSCXOESXUERXYWLJDGDNUULWLBXCQZJ");

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
    msg.setTimeStamp(0.6350846842556994);
    msg.setSource(58227U);
    msg.setSourceEntity(92U);
    msg.setDestination(24944U);
    msg.setDestinationEntity(132U);
    msg.control_src = 41139U;
    msg.control_ent = 143U;
    msg.timeout = 0.5246814996189779;
    msg.loiter_radius = 0.8944484635390263;
    msg.altitude_interval = 0.07401695094894023;

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
    msg.setTimeStamp(0.9054498378767897);
    msg.setSource(30909U);
    msg.setSourceEntity(131U);
    msg.setDestination(29953U);
    msg.setDestinationEntity(182U);
    msg.control_src = 4446U;
    msg.control_ent = 153U;
    msg.timeout = 0.07790631614704435;
    msg.loiter_radius = 0.5452130067734997;
    msg.altitude_interval = 0.37769613395693036;

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
    msg.setTimeStamp(0.23273721599540276);
    msg.setSource(7458U);
    msg.setSourceEntity(157U);
    msg.setDestination(44254U);
    msg.setDestinationEntity(98U);
    msg.control_src = 913U;
    msg.control_ent = 92U;
    msg.timeout = 0.2206280333477274;
    msg.loiter_radius = 0.937192271042614;
    msg.altitude_interval = 0.8300722968798965;

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
    msg.setTimeStamp(0.9346032199930734);
    msg.setSource(53147U);
    msg.setSourceEntity(133U);
    msg.setDestination(32779U);
    msg.setDestinationEntity(136U);
    msg.flags = 57U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6361802031616438;
    tmp_msg_0.speed_units = 63U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6308732655076985;
    tmp_msg_1.z_units = 105U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.32596252413155524;
    msg.lon = 0.8091121946727599;
    msg.radius = 0.16596292186897788;

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
    msg.setTimeStamp(0.3279672159399484);
    msg.setSource(44506U);
    msg.setSourceEntity(179U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(231U);
    msg.flags = 6U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9157238111083963;
    tmp_msg_0.speed_units = 209U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7248394773409474;
    tmp_msg_1.z_units = 103U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2795353631585401;
    msg.lon = 0.630736300201866;
    msg.radius = 0.952745467704983;

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
    msg.setTimeStamp(0.6415046281970732);
    msg.setSource(8331U);
    msg.setSourceEntity(208U);
    msg.setDestination(57906U);
    msg.setDestinationEntity(25U);
    msg.flags = 9U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.11135300627893352;
    tmp_msg_0.speed_units = 132U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4992804998895627;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.979718403286395;
    msg.lon = 0.6383471662645871;
    msg.radius = 0.4155851342918685;

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
    msg.setTimeStamp(0.34164879745500354);
    msg.setSource(22737U);
    msg.setSourceEntity(12U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(198U);
    msg.control_src = 31668U;
    msg.control_ent = 234U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 28U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3832360838623531;
    tmp_tmp_msg_0_0.speed_units = 201U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5087139279041791;
    tmp_tmp_msg_0_1.z_units = 217U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1889973781447729;
    tmp_msg_0.lon = 0.9189146355568837;
    tmp_msg_0.radius = 0.6674107384913178;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 23U;

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
    msg.setTimeStamp(0.5841738494249753);
    msg.setSource(56850U);
    msg.setSourceEntity(87U);
    msg.setDestination(45597U);
    msg.setDestinationEntity(65U);
    msg.control_src = 39912U;
    msg.control_ent = 27U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 227U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43789659349875376;
    tmp_tmp_msg_0_0.speed_units = 22U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09791305452006105;
    tmp_tmp_msg_0_1.z_units = 185U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6460795657112839;
    tmp_msg_0.lon = 0.6316314435442303;
    tmp_msg_0.radius = 0.4954432003796271;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 199U;

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
    msg.setTimeStamp(0.480873469850402);
    msg.setSource(63746U);
    msg.setSourceEntity(146U);
    msg.setDestination(56768U);
    msg.setDestinationEntity(216U);
    msg.control_src = 16038U;
    msg.control_ent = 130U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 135U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1340332878392212;
    tmp_tmp_msg_0_0.speed_units = 197U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.26833591766137777;
    tmp_tmp_msg_0_1.z_units = 208U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4385581351209765;
    tmp_msg_0.lon = 0.9454461180664615;
    tmp_msg_0.radius = 0.8809899978929753;
    msg.reference.set(tmp_msg_0);
    msg.state = 80U;
    msg.proximity = 137U;

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
    msg.setTimeStamp(0.6746444664918334);
    msg.setSource(52694U);
    msg.setSourceEntity(16U);
    msg.setDestination(15023U);
    msg.setDestinationEntity(49U);
    msg.ax_cmd = 0.5299675352858686;
    msg.ay_cmd = 0.634681049680561;
    msg.az_cmd = 0.6855481224736337;
    msg.ax_des = 0.5961847295001295;
    msg.ay_des = 0.04673452362803343;
    msg.az_des = 0.996274466730808;
    msg.virt_err_x = 0.7946763118979268;
    msg.virt_err_y = 0.19515926877837997;
    msg.virt_err_z = 0.19973560244285127;
    msg.surf_fdbk_x = 0.9091151001739404;
    msg.surf_fdbk_y = 0.213222332252201;
    msg.surf_fdbk_z = 0.7670975117166456;
    msg.surf_unkn_x = 0.3617223316944763;
    msg.surf_unkn_y = 0.5242643357802319;
    msg.surf_unkn_z = 0.8274257829774596;
    msg.ss_x = 0.2817493356834866;
    msg.ss_y = 0.7371601744548266;
    msg.ss_z = 0.3395504565776778;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LVKTGGFNXYZDMLCREMBZNLBJBNM");
    tmp_msg_0.dist = 0.747429189604447;
    tmp_msg_0.err = 0.28653018251970974;
    tmp_msg_0.ctrl_imp = 0.9613879711720625;
    tmp_msg_0.rel_dir_x = 0.45473343584178405;
    tmp_msg_0.rel_dir_y = 0.25556145093476923;
    tmp_msg_0.rel_dir_z = 0.6909324465552711;
    tmp_msg_0.err_x = 0.8446569288611231;
    tmp_msg_0.err_y = 0.22805018033783164;
    tmp_msg_0.err_z = 0.32785287556831566;
    tmp_msg_0.rf_err_x = 0.5362579837674555;
    tmp_msg_0.rf_err_y = 0.840225130407455;
    tmp_msg_0.rf_err_z = 0.044239382802162996;
    tmp_msg_0.rf_err_vx = 0.7468974247738176;
    tmp_msg_0.rf_err_vy = 0.833761651349392;
    tmp_msg_0.rf_err_vz = 0.21603214996814502;
    tmp_msg_0.ss_x = 0.3521793327033308;
    tmp_msg_0.ss_y = 0.9739971371068483;
    tmp_msg_0.ss_z = 0.6433077349199203;
    tmp_msg_0.virt_err_x = 0.9016294240190413;
    tmp_msg_0.virt_err_y = 0.4582917783900623;
    tmp_msg_0.virt_err_z = 0.20737787867677393;
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
    msg.setTimeStamp(0.8869962921399923);
    msg.setSource(41071U);
    msg.setSourceEntity(42U);
    msg.setDestination(57093U);
    msg.setDestinationEntity(167U);
    msg.ax_cmd = 0.3828023871186189;
    msg.ay_cmd = 0.429733897145377;
    msg.az_cmd = 0.8830126642487772;
    msg.ax_des = 0.8186818858412311;
    msg.ay_des = 0.5451697370835523;
    msg.az_des = 0.9098327805805625;
    msg.virt_err_x = 0.5712661353297971;
    msg.virt_err_y = 0.6214231237780341;
    msg.virt_err_z = 0.7584048381406407;
    msg.surf_fdbk_x = 0.018390227187432107;
    msg.surf_fdbk_y = 0.33826779929801376;
    msg.surf_fdbk_z = 0.602287519259891;
    msg.surf_unkn_x = 0.9276782607844987;
    msg.surf_unkn_y = 0.6356739404140356;
    msg.surf_unkn_z = 0.990587513338568;
    msg.ss_x = 0.2720704909603464;
    msg.ss_y = 0.5805060841882567;
    msg.ss_z = 0.6850246775162093;

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
    msg.setTimeStamp(0.8954888586923795);
    msg.setSource(34549U);
    msg.setSourceEntity(211U);
    msg.setDestination(57748U);
    msg.setDestinationEntity(47U);
    msg.ax_cmd = 0.37450773708747487;
    msg.ay_cmd = 0.035474906733962364;
    msg.az_cmd = 0.2356496363820283;
    msg.ax_des = 0.19311408491177728;
    msg.ay_des = 0.3087578272848165;
    msg.az_des = 0.46239976247207604;
    msg.virt_err_x = 0.1569687565089829;
    msg.virt_err_y = 0.09733099344556684;
    msg.virt_err_z = 0.9543621756444842;
    msg.surf_fdbk_x = 0.2306455709663684;
    msg.surf_fdbk_y = 0.10359682704473094;
    msg.surf_fdbk_z = 0.6920287236864964;
    msg.surf_unkn_x = 0.20086130093268317;
    msg.surf_unkn_y = 0.6597241504334644;
    msg.surf_unkn_z = 0.2389900440747621;
    msg.ss_x = 0.3409427061624921;
    msg.ss_y = 0.2199657081824682;
    msg.ss_z = 0.8077975263167316;

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
    msg.setTimeStamp(0.9335347342066249);
    msg.setSource(54254U);
    msg.setSourceEntity(124U);
    msg.setDestination(52866U);
    msg.setDestinationEntity(39U);
    msg.s_id.assign("SIJVWYGOJHHALCMBLHMOSQIQQWJRJBFSBLWEGAUDYKRSBVCEREJLXRPZRSXAFAMUWVYKHIVYGKQEIKDKTSSPSHBMMCZLMYFNTKONDJNCCPFZGJYLNVBIWEIKDBUYCCZFNWPFRXFDDTALUMDIYSBTIODRTVFVQPZLGOTWTXZQRDEKMHWNWHHNRZEPEIIGUAJLGUXXTPZPSXUT");
    msg.dist = 0.8597648913741449;
    msg.err = 0.7756740855852607;
    msg.ctrl_imp = 0.21533313530724774;
    msg.rel_dir_x = 0.17685699789380993;
    msg.rel_dir_y = 0.09347300664711633;
    msg.rel_dir_z = 0.5789358854175819;
    msg.err_x = 0.934787897034115;
    msg.err_y = 0.12117389282799218;
    msg.err_z = 0.893880293805934;
    msg.rf_err_x = 0.27198672033915594;
    msg.rf_err_y = 0.314920491510421;
    msg.rf_err_z = 0.664935257253039;
    msg.rf_err_vx = 0.008814438671441271;
    msg.rf_err_vy = 0.6328108569644864;
    msg.rf_err_vz = 0.6153215875948228;
    msg.ss_x = 0.8433419741521071;
    msg.ss_y = 0.059467746957575174;
    msg.ss_z = 0.0005055843331198684;
    msg.virt_err_x = 0.09097974594717806;
    msg.virt_err_y = 0.9825109366473802;
    msg.virt_err_z = 0.7078630736934807;

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
    msg.setTimeStamp(0.12191635968591896);
    msg.setSource(62016U);
    msg.setSourceEntity(157U);
    msg.setDestination(34430U);
    msg.setDestinationEntity(142U);
    msg.s_id.assign("EPNVTIEMCZFHHPRBAJPMYOKXWRJIVIDLDTJSRMUSFJARKQNDNLAOZGDZGRWUNAGWQYNVLZMVOXXFSCLZGLIJOAJWKTBBUUNLIPERFONUOHVKTCVRHZTMATBORYOVZYNBPGBQPCBXWXWKISEUBIHLXLCYJAVPTYFAPGMZSXESWCDGMQRZ");
    msg.dist = 0.13787248675103103;
    msg.err = 0.4138645513744945;
    msg.ctrl_imp = 0.21984963328327622;
    msg.rel_dir_x = 0.9614644217265161;
    msg.rel_dir_y = 0.3634577110935332;
    msg.rel_dir_z = 0.061674359442686066;
    msg.err_x = 0.7499779396533048;
    msg.err_y = 0.1372247095390723;
    msg.err_z = 0.4156922449963051;
    msg.rf_err_x = 0.6379657587115501;
    msg.rf_err_y = 0.887903588106765;
    msg.rf_err_z = 0.4352003827788149;
    msg.rf_err_vx = 0.2159155519076693;
    msg.rf_err_vy = 0.02291866677904164;
    msg.rf_err_vz = 0.03182323836767764;
    msg.ss_x = 0.19573894904628286;
    msg.ss_y = 0.6934580824204406;
    msg.ss_z = 0.11349494183247455;
    msg.virt_err_x = 0.858157524204618;
    msg.virt_err_y = 0.45651657910057786;
    msg.virt_err_z = 0.4693037555520083;

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
    msg.setTimeStamp(0.43341002709157994);
    msg.setSource(49615U);
    msg.setSourceEntity(93U);
    msg.setDestination(10686U);
    msg.setDestinationEntity(212U);
    msg.s_id.assign("OUROEGFTWYKNSHDUVGYKYEGBRJSZCVXLFXTRMDLDXXIMQEHNFSPEQAOUIGDSBNNFSCIGYRKQWVYRLQPPPYACIFEZYZWOCIMGSHSQVNUICWDOSWTJAZDEMXZUOUWTOSKYAFPPCWVCKJMHEAWYXRNWVMLFQODZDKLJBNRJVKDHTQ");
    msg.dist = 0.971118744206266;
    msg.err = 0.24786241368340878;
    msg.ctrl_imp = 0.8922443405063143;
    msg.rel_dir_x = 0.27997037372200473;
    msg.rel_dir_y = 0.1287803435505881;
    msg.rel_dir_z = 0.4411593563851971;
    msg.err_x = 0.8901550155256279;
    msg.err_y = 0.8091399083648058;
    msg.err_z = 0.21782596653866582;
    msg.rf_err_x = 0.2953118337463798;
    msg.rf_err_y = 0.11655578025962143;
    msg.rf_err_z = 0.27393459890626126;
    msg.rf_err_vx = 0.10133301164528186;
    msg.rf_err_vy = 0.08466459587216568;
    msg.rf_err_vz = 0.06177921943084075;
    msg.ss_x = 0.8238925073325021;
    msg.ss_y = 0.18545492464040647;
    msg.ss_z = 0.13221442224250846;
    msg.virt_err_x = 0.8153808858539683;
    msg.virt_err_y = 0.9212511386687103;
    msg.virt_err_z = 0.6089490588864277;

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
    msg.setTimeStamp(0.7605235616410083);
    msg.setSource(30485U);
    msg.setSourceEntity(66U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(132U);
    msg.timeout = 7397U;
    msg.rpm = 0.5331769385305153;
    msg.direction = 232U;
    msg.custom.assign("WEMDPWIQVLZFBDXOQOYNB");

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
    msg.setTimeStamp(0.20407623768306782);
    msg.setSource(30539U);
    msg.setSourceEntity(77U);
    msg.setDestination(20063U);
    msg.setDestinationEntity(191U);
    msg.timeout = 45868U;
    msg.rpm = 0.05617326531333833;
    msg.direction = 99U;
    msg.custom.assign("KLMETQINISRQMCHNXOZVUBQFDEHQPFKIFWTZSEJQXNOARQSZRZEZNBKJLLVWEYLERGVPJLHWTAGHLKKXYGLLCABJPDIBDMOTGBOPNUXDDKKUEULVGHOSFNDXJVYWHJXVWOKYIMFSFTVDFEWHITARCWXBARMJYNZUROTNMPPCAMEXZGUVCWOGYSEDBMNATGAFJUDUCROZSHLJWDCQAOZNXBIFIHTVMFPAIQBXRUWCQBUYVJZPGIPSSSYYHCCQMK");

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
    msg.setTimeStamp(0.28469524675440394);
    msg.setSource(17144U);
    msg.setSourceEntity(201U);
    msg.setDestination(57094U);
    msg.setDestinationEntity(198U);
    msg.timeout = 45668U;
    msg.rpm = 0.633245928202722;
    msg.direction = 85U;
    msg.custom.assign("FFVIVBXFDQAQCA");

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
    msg.setTimeStamp(0.7828399885128285);
    msg.setSource(43402U);
    msg.setSourceEntity(46U);
    msg.setDestination(23612U);
    msg.setDestinationEntity(160U);
    msg.formation_name.assign("YAODSVSLTSXPOWILWHWLPUNDALJXBCHKYNYBFBRLHISQAXMPYXFAWOOWJAQLETNFUHYERCQVBQYIJBPQRDFJECEMSTFXFJXJWZFGTJVWKPPEY");
    msg.type = 123U;
    msg.op = 113U;
    msg.group_name.assign("DXAUIROQMOWVKVKDPMKLRWAVEPAMSFQZLNDCFYUCRWCUASKQEWBLEFTWPTXEOMHAPSYGHTMVLNSUVZAJNRKCJZPUSQXQZYWNMLDXBGZCJLIRJJQLOLPWGJNITWJOSBBIKEQBDHGIHYJFBGYCMHBCZZLMXRKJUYRYOUYOIAVYDIBUFZNHSB");
    msg.plan_id.assign("RFKMWZRXXTGHQRRIOXDVVUBGOTNYHDDULUFFVVENPKLWIHRKDZPCN");
    msg.description.assign("COHBRXSBLGSJLHNDDCJEZPNTKWSPGZHTDQWBLLDMDQTKTNFOFWKERZXHEANBELMLZEYDAABZJOXXGPIVPCOUAYRCTMCUMGEKSZZELVSOFEBKXFHOBPTSM");
    msg.reference_frame = 196U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 844U;
    tmp_msg_0.off_x = 0.5933218563364664;
    tmp_msg_0.off_y = 0.9785490265800763;
    tmp_msg_0.off_z = 0.36643545347065376;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7182669366866293;
    msg.leader_speed_min = 0.7764188359480859;
    msg.leader_speed_max = 0.146020456547434;
    msg.leader_alt_min = 0.720494827755525;
    msg.leader_alt_max = 0.9944763223374541;
    msg.pos_sim_err_lim = 0.48365665202323915;
    msg.pos_sim_err_wrn = 0.34546159483967853;
    msg.pos_sim_err_timeout = 7119U;
    msg.converg_max = 0.4531835246615199;
    msg.converg_timeout = 42206U;
    msg.comms_timeout = 56600U;
    msg.turb_lim = 0.9010095742951076;
    msg.custom.assign("MENEYZLJVCCUKSAYCBPFLIMHZAMWUYKRGNRUHRUUEDELLDDDQJNXQRXREIKBCRTXHRPDZVKWSPPMJFGLMJVBBIKUTQKNONDZOPXGFSSVETLUMOMVDWRKJQFPYLCKCOIAHFIGHVTSOADTIYUHFDXXKGHWTJVKDISQAUAIXPSFGMEQYVZBCWYTNVEPXTWNZOBQHOQBNLCBYWZYOY");

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
    msg.setTimeStamp(0.09916053143936909);
    msg.setSource(54161U);
    msg.setSourceEntity(122U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("YADVXEDOBKEKSNZPFBABTRANZEWIBWJLLNKAYCGZNJRHIDVUTEEIEVSOWGSHFZJUVVQMMJMWNJQENBSQUXMQXTPPBGOFGEHKOMNXHTPBVKWFXSGGBMZTDLYAXVQYGFYIFJQUTZCILITWBQSHOQPPJYWHKGLUNCVLPIOARZHLRACKGROUZPICHUZZXRDURKXCIRRJELXFDLDQVFMMHCSAENTRDMPKGVMJACHODSBAYCQYSCPJFIFKOTYDOSW");
    msg.type = 193U;
    msg.op = 207U;
    msg.group_name.assign("TYXZSEWKGIYMRCWKLHJUUVYACZKRZPQSZXABNERHNPFBBUCDMVTSNTBDGBGOYUWTTYKANLWHOOHOZQONRGH");
    msg.plan_id.assign("IWUSHQOPTBYJJXDDLUANCWNMKOQGMVRLEMRPAIHJGNJGDZVBOTUQMIYUVXTJWCFZEKFARNCDAVLIXERTBSIRMXKTCKHMYUSPKFBXBNJWLLPGYSJIAZGYGUSIPXHQTEVQNRSDZHU");
    msg.description.assign("DCHWHFXKIWYRXVGEAXCOJMEJYTQWYNGMIVLMRECASJSDYVABUIFGQNXPKNYFIXJCGGNQNPUKUZLWKIVURAZLYWTIZXREQOQBEPBO");
    msg.reference_frame = 214U;
    msg.leader_bank_lim = 0.19072855618912699;
    msg.leader_speed_min = 0.42190288470443627;
    msg.leader_speed_max = 0.2411378245535476;
    msg.leader_alt_min = 0.20396464819292215;
    msg.leader_alt_max = 0.8452243839346611;
    msg.pos_sim_err_lim = 0.4187814474762568;
    msg.pos_sim_err_wrn = 0.8410868460508872;
    msg.pos_sim_err_timeout = 41836U;
    msg.converg_max = 0.015319426277475734;
    msg.converg_timeout = 50635U;
    msg.comms_timeout = 62466U;
    msg.turb_lim = 0.12494714051784384;
    msg.custom.assign("GZMEYEXLADDKJWXSVRJDIVHEVEGEFXDIPZHTTLBRZOQUOUXAQQJGPWPWHKWVTMOGGKCUSRFSCEXYQKITFICNDLNNVOXKRQRDFRKBYSHBTAAQPPJSXFYYWZHLTEJXBO");

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
    msg.setTimeStamp(0.6986940951732601);
    msg.setSource(60546U);
    msg.setSourceEntity(134U);
    msg.setDestination(32939U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("MSMAFYTXWRLIYICKFRBMWNQTLMNIAFRKEFKYGZSNQAUWAXVVJEAQWTIGOQSKMNKTTHOPLJCYHVBVWVOHZLUGIPHDDUCXMZGCJOSGPDRFFDBLURJUVRVXBYSVNWIJQGFGNTPAGSPLBKLIUFOZKZMFOHEHORDUJXLTMCBERUVSPBNDNZPCSDXHDOZCYJDQIZFIZKEYAQEYJWHQOAYCGN");
    msg.type = 67U;
    msg.op = 25U;
    msg.group_name.assign("HDNOBNBKBPPJJZRZXIMGMESUAHIAYKONBXIVPSCRCDJUBUIPLAAOARYHXZVSCLTTFMOSDVWIA");
    msg.plan_id.assign("ONZCXYJXWCJBKIHGBCQJKFHNPEKURTYOPNOJILPBEWQTYSJXWHEELYNHIOQOPVUOTLAFAGMVDOEHEDSIVFUXMARGAFSUGWPBSJMXZSQEKSKMCMRYYUCDWXMDZBETLTVHDJICTZAQLVNZZDRBKARMAUYUAETVWKFWCPFLZLWLBLEMPBOZGFGJGVSJCHJHRXUQRXTGWIPOKYNAPNNGFLMHIGZQVKNSHDA");
    msg.description.assign("VHWIXEORFUZTCDWPJWFSLLMNPBFVYAQOCOEZTRZIPUYBKLJTJAUHYOSRDKDYGZDITNCBQXFXBCNHPJBGBNYLWUQMCSVNKPPDMJTOAYMBYVJLFQGNHTQHDSNWEUUKHWGGMGCD");
    msg.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62230U;
    tmp_msg_0.off_x = 0.903008485145953;
    tmp_msg_0.off_y = 0.7824441377721798;
    tmp_msg_0.off_z = 0.2594675423879119;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9039422516830976;
    msg.leader_speed_min = 0.6327791840793509;
    msg.leader_speed_max = 0.31825272205317134;
    msg.leader_alt_min = 0.951278219591722;
    msg.leader_alt_max = 0.5371523433546109;
    msg.pos_sim_err_lim = 0.04012126969696406;
    msg.pos_sim_err_wrn = 0.5458510796975358;
    msg.pos_sim_err_timeout = 39050U;
    msg.converg_max = 0.5269349173964261;
    msg.converg_timeout = 12325U;
    msg.comms_timeout = 32321U;
    msg.turb_lim = 0.3874720378381943;
    msg.custom.assign("XBMNAWIJLTJIRUVPERVADPPDGWOYY");

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
    msg.setTimeStamp(0.7286495216027349);
    msg.setSource(8740U);
    msg.setSourceEntity(121U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(133U);
    msg.timeout = 17451U;
    msg.lat = 0.9231159133569912;
    msg.lon = 0.5002568158445254;
    msg.z = 0.22275684654096017;
    msg.z_units = 94U;
    msg.speed = 0.87651742036241;
    msg.speed_units = 102U;
    msg.custom.assign("HZBDTHMPCKBNRGLTGTXKMQCLMADKAIIQMICSEZMFERCAIQISPRJIRWYENNXHUOZNBDPAIVQSTUFDGMMWGFZOYKMJWFDVJWWONHNTCAQYUNJVXRLVOKXDLRPQDHPLJAVOCQHTJESCKLUVAEXHVKYZFVLBYXJQATEGUZCMTUGLKEBWZYNPHEWGGDBZUXBKTSJONKURNYQWRPUCPTAWDEQFGHJVOBCSAIOMVZIWJFYFRF");

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
    msg.setTimeStamp(0.3724357552328701);
    msg.setSource(13283U);
    msg.setSourceEntity(135U);
    msg.setDestination(42514U);
    msg.setDestinationEntity(35U);
    msg.timeout = 45870U;
    msg.lat = 0.5374512529994837;
    msg.lon = 0.8947551924682741;
    msg.z = 0.24436340716644123;
    msg.z_units = 162U;
    msg.speed = 0.5834376807089731;
    msg.speed_units = 101U;
    msg.custom.assign("VBDHEEBICDLCJZFAEHYQKBALLUHCPPATHLDNDKVOZAISWMRUBNSXBXPQZOYNNWGJJPCCWZVYHSNWIXRACRY");

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
    msg.setTimeStamp(0.29865164339199324);
    msg.setSource(29727U);
    msg.setSourceEntity(166U);
    msg.setDestination(159U);
    msg.setDestinationEntity(50U);
    msg.timeout = 37436U;
    msg.lat = 0.08543962594893184;
    msg.lon = 0.666590221761176;
    msg.z = 0.340901056363515;
    msg.z_units = 62U;
    msg.speed = 0.24444976796009033;
    msg.speed_units = 145U;
    msg.custom.assign("SDRTECHRJKNMGJFSFPKYSPMLIMSHOWSVLWYFNHEYGYECBUVSCAEUOSGDOQYQFIJQAUVGIOJWFPHEAXZZSNVIKYSQHOGJMEBPZVXIYPRICKUWJZDFXKZNRSXPKYQQYTVCXABAZBTMMRIFWHTLTREOCNLYDKHQBIGWCQJPAKCDTVQUOAJHDLXDZAR");

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
    msg.setTimeStamp(0.18089272361792752);
    msg.setSource(47553U);
    msg.setSourceEntity(203U);
    msg.setDestination(11291U);
    msg.setDestinationEntity(161U);
    msg.timeout = 52720U;
    msg.lat = 0.4159844346688022;
    msg.lon = 0.2761225890736281;
    msg.z = 0.18175934225869428;
    msg.z_units = 43U;
    msg.speed = 0.3648666018531266;
    msg.speed_units = 185U;
    msg.custom.assign("PEGXEOGJGDRKCLXBYTGRLZYIOVTQNRUKIZMZLGZZKKHQSUELHWVBIDBZFADHWRVMODXJVGCBHRAYITSFQWENMJRMJWFARRCBJIOKJKFPNEUSCUJRAMTDZQRNVOFHCPELYYIKYOQZKEFSDXLFWNEZAYCAITDWLQHXEJBNHQDIFOVMKANSLMJAFOGXDUBTZIPNWSTFOVOVKXPULQUWCPCCBWQIPMCSHUHSTUGSPAXL");

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
    msg.setTimeStamp(0.23381368122719082);
    msg.setSource(17613U);
    msg.setSourceEntity(254U);
    msg.setDestination(17252U);
    msg.setDestinationEntity(58U);
    msg.timeout = 65045U;
    msg.lat = 0.7117238498572642;
    msg.lon = 0.06768027862284132;
    msg.z = 0.6885120586003122;
    msg.z_units = 32U;
    msg.speed = 0.9312498598510257;
    msg.speed_units = 39U;
    msg.custom.assign("NXKFSXAORXNICPPFJZDKMZPNVRIUAHFDXYVWBOKFFAUMHBEMERRBCFUBAZFNTXXKHMRVBHTISEUJSHGJSZTEQDIAJVNNQCNLGXWXLDOTBRPNIUGPTQIDNKZASCYISZTULZOCHZEJWWEWOBFUIOWGZJYKSLLGTACHKYSVKHRWKDLMQVAFJGSUT");

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
    msg.setTimeStamp(0.7544506585717837);
    msg.setSource(60764U);
    msg.setSourceEntity(147U);
    msg.setDestination(50764U);
    msg.setDestinationEntity(23U);
    msg.timeout = 42555U;
    msg.lat = 0.07232936492791386;
    msg.lon = 0.95187525943624;
    msg.z = 0.5616723556772678;
    msg.z_units = 109U;
    msg.speed = 0.3754431214388243;
    msg.speed_units = 200U;
    msg.custom.assign("SGBSHWHPYPLMBQOZJZAENEZLNHRBZICZVKTZTGMUWAGUKJMHDAPXHRCRORJXUTJXWLOZXHIVVZDKVICVMPTDATNSQYEWNSUYSRLYSFCAPQQQKTGCWHFLAFGSLVEBQNAEDLGVAOXEUCWBPMYFUNYTJDKFDUENLANFJHCLJSFQBKXOORPIOCIGHWLGPTRISUUOQBYMMBOR");

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
    msg.setTimeStamp(0.5035572240689393);
    msg.setSource(8161U);
    msg.setSourceEntity(72U);
    msg.setDestination(59519U);
    msg.setDestinationEntity(64U);
    msg.arrival_time = 0.767677177605252;
    msg.lat = 0.607323986063274;
    msg.lon = 0.8641712627059959;
    msg.z = 0.9325102929502411;
    msg.z_units = 13U;
    msg.travel_z = 0.2881327640760021;
    msg.travel_z_units = 227U;
    msg.delayed = 22U;

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
    msg.setTimeStamp(0.5917525442533768);
    msg.setSource(22736U);
    msg.setSourceEntity(14U);
    msg.setDestination(19569U);
    msg.setDestinationEntity(208U);
    msg.arrival_time = 0.524051722799448;
    msg.lat = 0.07439295793450873;
    msg.lon = 0.5888764430000947;
    msg.z = 0.09824929042367592;
    msg.z_units = 22U;
    msg.travel_z = 0.3789764093610649;
    msg.travel_z_units = 57U;
    msg.delayed = 251U;

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
    msg.setTimeStamp(0.933608152535753);
    msg.setSource(42538U);
    msg.setSourceEntity(139U);
    msg.setDestination(61674U);
    msg.setDestinationEntity(33U);
    msg.arrival_time = 0.8336337521071645;
    msg.lat = 0.9876694464680761;
    msg.lon = 0.2486170558593902;
    msg.z = 0.8527541643413148;
    msg.z_units = 251U;
    msg.travel_z = 0.489360487370453;
    msg.travel_z_units = 159U;
    msg.delayed = 202U;

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
    msg.setTimeStamp(0.35387159952466174);
    msg.setSource(37140U);
    msg.setSourceEntity(5U);
    msg.setDestination(19551U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.5074227171463193;
    msg.lon = 0.1765404868147018;
    msg.z = 0.5043424879256381;
    msg.z_units = 186U;
    msg.speed = 0.06763049917721276;
    msg.speed_units = 153U;
    msg.bearing = 0.30507236135674765;
    msg.cross_angle = 0.9178084582683544;
    msg.width = 0.7802751912948253;
    msg.length = 0.32151246339391726;
    msg.coff = 154U;
    msg.angaperture = 0.8314340197728505;
    msg.range = 64664U;
    msg.overlap = 14U;
    msg.flags = 17U;
    msg.custom.assign("NWHVPUFCPLJLDYOGRCKZBISIPMIKWZPFUBYFEUGTDAKUNOJLDBNJTDQOEGBCKHZAYKQKNZDESHTTFRLNRJQELNIZZEGTWAJZCGWINRCLYXASXITXYRCKMDCHDSRWUFAPQNWLGFXHFYV");

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
    msg.setTimeStamp(0.6451260115313978);
    msg.setSource(43182U);
    msg.setSourceEntity(157U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.8165472297834254;
    msg.lon = 0.2963830797473296;
    msg.z = 0.976607569989998;
    msg.z_units = 42U;
    msg.speed = 0.2829602004990366;
    msg.speed_units = 194U;
    msg.bearing = 0.5255700186869857;
    msg.cross_angle = 0.06606513474978348;
    msg.width = 0.5011485815029224;
    msg.length = 0.8983418284767416;
    msg.coff = 187U;
    msg.angaperture = 0.7758771124834499;
    msg.range = 42507U;
    msg.overlap = 54U;
    msg.flags = 68U;
    msg.custom.assign("AUFIEGETVJFNEWKQFPDSRSXCUAYKIKPARRQKCZXYXYRQKHLGCQTFROZKXROGADJWMHSAUVVGIVYMQOJLFXLBIJREYRAZGPKMISOORTCVOUSFWMJGHZSLJYXPAQWGONFBSZJPDVIKUJETMVYFALYOZNDSP");

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
    msg.setTimeStamp(0.7605677383986988);
    msg.setSource(32057U);
    msg.setSourceEntity(199U);
    msg.setDestination(48696U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.17516933820125136;
    msg.lon = 0.44141499752784374;
    msg.z = 0.08207277751444286;
    msg.z_units = 166U;
    msg.speed = 0.5222411760303172;
    msg.speed_units = 95U;
    msg.bearing = 0.4072371470177176;
    msg.cross_angle = 0.4044687805875272;
    msg.width = 0.04123111842876881;
    msg.length = 0.8028595998097939;
    msg.coff = 51U;
    msg.angaperture = 0.008801586831455155;
    msg.range = 52925U;
    msg.overlap = 59U;
    msg.flags = 63U;
    msg.custom.assign("FAWYOEYRAJIAQIGDLTOIQRLNGSIVYHMIYNQTTJGMLGLWMFVYTBTAJIEPUEWXBWXKJIAXCCBMSBHUVIDSZDWYRYVWCKDNTPPOTCNKDDGFHCJEZJRCFZJXNHSEFHUAKOUATNNYICRPBNKHVKCHDSVLQDGOPBPPQMLJZZPVEQZXPXVSNOTTLLH");

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
    msg.setTimeStamp(0.1374678435566813);
    msg.setSource(51731U);
    msg.setSourceEntity(56U);
    msg.setDestination(19593U);
    msg.setDestinationEntity(0U);
    msg.timeout = 35747U;
    msg.lat = 0.8148097736356501;
    msg.lon = 0.7392251127633588;
    msg.z = 0.9306833350158087;
    msg.z_units = 222U;
    msg.speed = 0.01328509909785025;
    msg.speed_units = 205U;
    msg.syringe0 = 137U;
    msg.syringe1 = 239U;
    msg.syringe2 = 83U;
    msg.custom.assign("TMYXDXPPEES");

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
    msg.setTimeStamp(0.7825479359992349);
    msg.setSource(10696U);
    msg.setSourceEntity(214U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(32U);
    msg.timeout = 61643U;
    msg.lat = 0.7508222880037169;
    msg.lon = 0.459960707307861;
    msg.z = 0.06297954641828585;
    msg.z_units = 178U;
    msg.speed = 0.9978522353971595;
    msg.speed_units = 49U;
    msg.syringe0 = 5U;
    msg.syringe1 = 227U;
    msg.syringe2 = 211U;
    msg.custom.assign("JQHCFSBUBCZESCZHISBIAYQYVFFHBQWNOWVQACDGDLWDOXVEKPGUOUQGMZGEZLXXTPKBFHCXKTHLXNMPULEXZRWUYJYUEDKBSGZRFQQCAVYJWOBTRNXVCINKDXVRJTRMLLMIOIZATJJZRDGPPCFPIKIHIQENATQMCIKVHUDWOJWVSMOMZWAYXJH");

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
    msg.setTimeStamp(0.3854006890589289);
    msg.setSource(19621U);
    msg.setSourceEntity(40U);
    msg.setDestination(39734U);
    msg.setDestinationEntity(161U);
    msg.timeout = 18876U;
    msg.lat = 0.6505757024313608;
    msg.lon = 0.1222483713454201;
    msg.z = 0.4296570414818007;
    msg.z_units = 111U;
    msg.speed = 0.23574994829835005;
    msg.speed_units = 209U;
    msg.syringe0 = 33U;
    msg.syringe1 = 31U;
    msg.syringe2 = 86U;
    msg.custom.assign("IUSFANIUAECBHNCDTENAYCAUVWPTUWENLNBSISPLMRBLPOWSCGQZJTOOMFHIUEAFWAXPVVYRLCXBDDCAEBERXXGKKAHCZSJGJPCKZUMHKVQGXUDJCFNZEQRADPZPWLKRSSGVFTYIUYUHZPHIBKMIBZFHLKPIYKQQSOVGWNWVGLZTNVJGMTJOZTYMLBQBUWY");

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
    msg.setTimeStamp(0.20534186533285226);
    msg.setSource(23872U);
    msg.setSourceEntity(179U);
    msg.setDestination(27707U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.8837973482602325);
    msg.setSource(49946U);
    msg.setSourceEntity(62U);
    msg.setDestination(23684U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.4299030888691796);
    msg.setSource(8475U);
    msg.setSourceEntity(215U);
    msg.setDestination(35035U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.49345499413864746);
    msg.setSource(21883U);
    msg.setSourceEntity(40U);
    msg.setDestination(42180U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.8745472622056782;
    msg.lon = 0.5336697986447813;
    msg.z = 0.3505615794397652;
    msg.z_units = 218U;
    msg.speed = 0.8682608944949217;
    msg.speed_units = 143U;
    msg.takeoff_pitch = 0.5454024907318652;
    msg.custom.assign("QOGUFOBIKKZOPHDQEEQUFAIOVIBQCNWIMTHJRMDPBUYJJKEXRDHWMYGKZODPTQJKDVNBKPFUCOXFLCKEDYZCPZRHZTFYMWWELSNOAQBPGUNWVLQAFRQUJTGDNXVRAYOTRZCNNZUUHEWVBMFMWJSNRXLJRKZXOEKNTSCFTBVHAGSIKAESHC");

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
    msg.setTimeStamp(0.015273586951781715);
    msg.setSource(25032U);
    msg.setSourceEntity(121U);
    msg.setDestination(21361U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.7086403122546925;
    msg.lon = 0.9716797089483967;
    msg.z = 0.13723844337025548;
    msg.z_units = 47U;
    msg.speed = 0.5577760354096531;
    msg.speed_units = 217U;
    msg.takeoff_pitch = 0.7521901198838085;
    msg.custom.assign("JQTAKOWOCDYINXFUNIYLOJSJAAFPIWXFEAGRKMUFSFUGLLXEIOGNEVQXHWPNWEBRPCNYCAURUVGILNQQA");

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
    msg.setTimeStamp(0.8205797313352933);
    msg.setSource(60133U);
    msg.setSourceEntity(32U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.7964097298367728;
    msg.lon = 0.7102832350495057;
    msg.z = 0.9471535935813411;
    msg.z_units = 140U;
    msg.speed = 0.4189228820700569;
    msg.speed_units = 65U;
    msg.takeoff_pitch = 0.8507554420212179;
    msg.custom.assign("DVUXVKVJKCWPLEJSZBIKFBJPGIMYROCYEPZWLKECSRFOPASWHAQUMNNBJTCJEYSQISIXLRUGXOTNTLTRRPZEMONDVQXUTDSOFXYGAGDJYACCGYYICUXQTBQLZWLPUVUVMRIPSKQJFOZDDCWPQFHWZFHGPXNNMVOUFFEGYLLHHCPRIDIBXOQCJVVHTRBEWQGKTEGWAMEA");

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
    msg.setTimeStamp(0.14420478235440748);
    msg.setSource(22952U);
    msg.setSourceEntity(80U);
    msg.setDestination(4824U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.09947755031381844;
    msg.lon = 0.5389596053799689;
    msg.z = 0.6760361811243776;
    msg.z_units = 167U;
    msg.speed = 0.9864946611276194;
    msg.speed_units = 194U;
    msg.abort_z = 0.20394456343102507;
    msg.bearing = 0.1577495640151515;
    msg.glide_slope = 12U;
    msg.glide_slope_alt = 0.6197892983904125;
    msg.custom.assign("HPRMKYMVBCNSLYMHNEZYKLQDHONWPHYDCFXGATFVUKNWVBJGDWQJUAYOJJVPQHTOCFAUEGIISCLXSRFFSGKKDOUMASVIXWWCCMJDIWSVBPDFZFCHHLCHEGYXOYXITRZAZNTBLUADGVRWSUEXT");

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
    msg.setTimeStamp(0.4864266983639335);
    msg.setSource(7828U);
    msg.setSourceEntity(126U);
    msg.setDestination(15470U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.6243539149664038;
    msg.lon = 0.19628429089143196;
    msg.z = 0.6877159083482874;
    msg.z_units = 251U;
    msg.speed = 0.6949934322473893;
    msg.speed_units = 49U;
    msg.abort_z = 0.6322237215156423;
    msg.bearing = 0.5842165701069919;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.23333296717396512;
    msg.custom.assign("IFSFJCDVYQMEUAPOWHIGEWPDDGPALYTWRXJHSRHRAJEUQUYEUNLYIBXLTNMJCTBQPMQEUZSZHCZIIYPSLSRYQPMXJEHMNKFHFYDKTJLUWSWKOFEXGALELBKUQDNBVFYAOCZOWJOPSEMBIRFLMIVXHZKZKVRCZRXCWTRAOPBZRELKHXGPHOBWMWDUOKINLWOMV");

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
    msg.setTimeStamp(0.13726464777037095);
    msg.setSource(32346U);
    msg.setSourceEntity(146U);
    msg.setDestination(48165U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.2762955896799085;
    msg.lon = 0.2048371296724214;
    msg.z = 0.2805969390259988;
    msg.z_units = 68U;
    msg.speed = 0.3440096608185397;
    msg.speed_units = 128U;
    msg.abort_z = 0.5160688547687349;
    msg.bearing = 0.6072660522036882;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.5431007710694544;
    msg.custom.assign("NPLBCPNDNOCYGNEHZLQELLIV");

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
    msg.setTimeStamp(0.1566692198841213);
    msg.setSource(18345U);
    msg.setSourceEntity(79U);
    msg.setDestination(9347U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.13772794147434075;
    msg.lon = 0.02879189144872507;
    msg.speed = 0.7554376992812452;
    msg.speed_units = 189U;
    msg.limits = 239U;
    msg.max_depth = 0.35904414976828847;
    msg.min_alt = 0.9765270741517722;
    msg.time_limit = 0.49699040484508683;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.804384845744336;
    tmp_msg_0.lon = 0.02984022976824019;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NHJLJTZBVZFAURIMWECXMVXIAQFXFOYRSLZWMUNGOJCOHDGKRS");
    msg.custom.assign("NYIDNTHBUSSSMWTWVGJXVCRMADWQFXRORKGPZMBQZWWHDKWSIVLOZVYJLXYYOABUNQUSUBTPPGWHXUAFGQVETBBTRFKXSURJGVJAQAUSHZONPEJROSVETICLLKCPWDQDQICVZSHRWNIMNXZHDACK");

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
    msg.setTimeStamp(0.38182287615088173);
    msg.setSource(3149U);
    msg.setSourceEntity(228U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.5931907154333547;
    msg.lon = 0.08631194336280845;
    msg.speed = 0.04184062871799954;
    msg.speed_units = 90U;
    msg.limits = 42U;
    msg.max_depth = 0.23628061473202366;
    msg.min_alt = 0.39727379946588626;
    msg.time_limit = 0.81892010245249;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.04545998929560868;
    tmp_msg_0.lon = 0.817532000081735;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DKMLMGFLLRWVEDXNLYPDRICBWMLLFHTCZRSUOYTDIBJYENFJVEJJBTCLFVHQZTVWGIFHOPXI");
    msg.custom.assign("MESCNLBBGWLQWWMRSIANHCAWHFTCGMGRYBQYOPDQDJQPZUGGKIOLPKXHNFMJO");

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
    msg.setTimeStamp(0.12126804782831324);
    msg.setSource(10250U);
    msg.setSourceEntity(247U);
    msg.setDestination(33282U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.05614056796314015;
    msg.lon = 0.05652513456786201;
    msg.speed = 0.2094033176822252;
    msg.speed_units = 98U;
    msg.limits = 224U;
    msg.max_depth = 0.6092152628076158;
    msg.min_alt = 0.5165690922356478;
    msg.time_limit = 0.7296624509263537;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6704506048920753;
    tmp_msg_0.lon = 0.5223933891628386;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HBQBORKMIFFNFKIWYUBBXCIAV");
    msg.custom.assign("FXWNMBFYQZQKWVRBNEOFRHVGLXDLUNRZGRPBNYZIR");

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
    msg.setTimeStamp(0.34387220271333263);
    msg.setSource(58530U);
    msg.setSourceEntity(128U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(252U);
    msg.target.assign("VRVQNTBQIPCBVERAZKXIZMFFXBJHJWTTZVRUXPQWWHCMMBPFQSHJBYYGZKHLDQVNNYDKSGNKXMETEVIYSIFNCIGDPSVCNEASOHURRMJDQCZAXVITKMLOFALTOGBTFOQADSXOKX");
    msg.max_speed = 0.674733775653535;
    msg.speed_units = 83U;
    msg.lat = 0.8277958645483348;
    msg.lon = 0.820644934812916;
    msg.z = 0.26519515275428296;
    msg.z_units = 137U;
    msg.custom.assign("HZPKPKJJOLUHCAONYDKLXWOICEVQZMDFYYURLSIHGVEHNHPTWRRZYOYBVEGAMRKGNEKMFONATITUPNJRXUKWMZGCUNSNJAGVWXAWSKNDJBZHFRDMAEPEGRZXM");

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
    msg.setTimeStamp(0.29231959471093727);
    msg.setSource(34960U);
    msg.setSourceEntity(88U);
    msg.setDestination(9395U);
    msg.setDestinationEntity(30U);
    msg.target.assign("WJLDQBRHFTMYFCSPUGKHCAHEUJMGL");
    msg.max_speed = 0.7356249816997802;
    msg.speed_units = 241U;
    msg.lat = 0.6629894022304085;
    msg.lon = 0.5782196007571444;
    msg.z = 0.8061300825660512;
    msg.z_units = 97U;
    msg.custom.assign("HSYVXQKUUVTIDDHQHRDXHAUNOJVGDMXANMJOWWCWIKQONJCB");

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
    msg.setTimeStamp(0.6690583596648044);
    msg.setSource(49092U);
    msg.setSourceEntity(191U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(249U);
    msg.target.assign("TEBUXUFQQVFKPPTRSIGBGUCNGFRALXVJYIPNTFRCLXCVCHZISAUBSWCLAVGJUFVBJNSCYOJKMVMOWEVD");
    msg.max_speed = 0.8083798340343599;
    msg.speed_units = 49U;
    msg.lat = 0.9803953194511252;
    msg.lon = 0.5218622515204745;
    msg.z = 0.5101336713262237;
    msg.z_units = 28U;
    msg.custom.assign("SBPJDNIWWWSVVCCRFEKXMOCMRFVLFOHAYETGZGUDBWFJPPKEUSBTOKJRKTANNWKQCMUYVNIVRALYRLPIBDROWYZMPHDYZWETHVNMAGMJBHFJPAHWGLCHAXUOQEYISVQNXHDQOMJSOONLDTLOZYRDRIDLCIBSNWXWPCXFPYCUAHJGSYGJMKQTIEHTKUFDXKQEZQKGXBRUZNSXQZRCZGBGUCHITFVNGTBAUVKXIMYXPSPLAEQVZL");

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
    msg.setTimeStamp(0.8211437525767611);
    msg.setSource(15894U);
    msg.setSourceEntity(24U);
    msg.setDestination(35353U);
    msg.setDestinationEntity(173U);
    msg.timeout = 7355U;
    msg.lat = 0.020867968622919397;
    msg.lon = 0.12319762538352985;
    msg.speed = 0.9302529925524725;
    msg.speed_units = 145U;
    msg.custom.assign("IQDYEJSXWEFSNPVFVRVAGUKQUJMLYPMDWASUGIKAHMYAGMYUQLOVCTBMEXYUWUQAJPRPQJGCTRYYPHSNXIROWPNNVXWSHLNANLFCQBSXCQBYLOMVQQWXCGAIKMDBJYIKTCFBBCHPOHHCTFZCDZBRVQYZKOJJXMMFOGEKHHLPOVSMSOZOCNFDZKAVRPLTFGJIDGEGTLURZBESKWDGXJXLEKITSANAFDWPDKEIIVUIORDLNRZTWEZZNXWT");

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
    msg.setTimeStamp(0.12318881920836333);
    msg.setSource(47324U);
    msg.setSourceEntity(90U);
    msg.setDestination(20005U);
    msg.setDestinationEntity(14U);
    msg.timeout = 54982U;
    msg.lat = 0.9425280017702312;
    msg.lon = 0.5935256772437146;
    msg.speed = 0.6723694457755925;
    msg.speed_units = 191U;
    msg.custom.assign("CZTMNOOXTLVCHSQBZPQTKTXMBUFIMRHQNSFIULPBIEIJCJAKULKMUUULS");

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
    msg.setTimeStamp(0.2795634988953518);
    msg.setSource(24892U);
    msg.setSourceEntity(4U);
    msg.setDestination(29695U);
    msg.setDestinationEntity(160U);
    msg.timeout = 21195U;
    msg.lat = 0.9767569841247226;
    msg.lon = 0.30732624450216683;
    msg.speed = 0.07598694413637985;
    msg.speed_units = 76U;
    msg.custom.assign("NVFNQSYZDHOXYMVFKYVSEDYQPDWLABMPEBSOINVPUVUWBTDRHDAWDCAFGRDXXHTDWFJFMGMTGNVJJXQSVBGCUZRIPKQZTIKFKETGVWZKMBJOSKQLQFWDAFEMAOKTOJOHPQIENYBHCMXZNBEWSRJNYARZPNFSBLRQCWLVEBETJYZALGJAISLRUXXIUKBCATYHPGHJKEGELCWSYHFSOHUXWUZRGITCLMTCCANKJDINLCORZUHMUOMVXPORQQPXZ");

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
    msg.setTimeStamp(0.3815506226269414);
    msg.setSource(29369U);
    msg.setSourceEntity(173U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.17333754681587055;
    msg.lon = 0.9743753097390491;
    msg.z = 0.42913072169158617;
    msg.z_units = 242U;
    msg.radius = 0.6249881296480614;
    msg.duration = 6030U;
    msg.speed = 0.34835472336461726;
    msg.speed_units = 88U;
    msg.popup_period = 12019U;
    msg.popup_duration = 15140U;
    msg.flags = 85U;
    msg.custom.assign("MGHDTZYRVHNYWCQSDNXTVPGSLYQWQEIMUDREQUPBHFJUOIZUCCRYJAZZGYBTPDZRTYBZXVPVGFXNRVPQLAVNQIFKEFMILSUAWYDZXMOIKOJMUCBRWYIEFMPIZALJTVRFPEVHSAJKOPWNZJAODZSTHCOAFVSKHUXBKGHXDTNCOHRRKBKIYLFTTJGLXUBWGQNKEWFIONONECEMQMHJCSESNBDGWCDKLJPOWPQFAWEIJSGLLATCUAGUVY");

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
    msg.setTimeStamp(0.39732225451472314);
    msg.setSource(38986U);
    msg.setSourceEntity(36U);
    msg.setDestination(56097U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.6013098935078388;
    msg.lon = 0.5031928514141579;
    msg.z = 0.6654774059952635;
    msg.z_units = 198U;
    msg.radius = 0.9541320809437979;
    msg.duration = 10872U;
    msg.speed = 0.25529603155416214;
    msg.speed_units = 229U;
    msg.popup_period = 64243U;
    msg.popup_duration = 25635U;
    msg.flags = 168U;
    msg.custom.assign("GSYLSMRNHGKFTGIAZEESJODRBDBYLXQJDDSZVQAKTOPNJWDSXPOYEFGRUCIYYBTIVRXWCBYLZAIMPEKVGWEYUOQBMTACXRQKHNQZXUTRVUPPQLWAYOCMQOIVMRKMSMVVQBLHMVODUWMPXKTYKJGQRHGAEFHWLCDPIFAVJZAPWLJODIGLNKSCJXNTOXWMWXTJDLJFZBIXRFQARSNZCUZYHCBHBUZ");

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
    msg.setTimeStamp(0.7283641096953967);
    msg.setSource(61426U);
    msg.setSourceEntity(235U);
    msg.setDestination(38017U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.520619386276355;
    msg.lon = 0.25625784210911484;
    msg.z = 0.5977059623291364;
    msg.z_units = 162U;
    msg.radius = 0.24836570945957626;
    msg.duration = 16359U;
    msg.speed = 0.44653392076732656;
    msg.speed_units = 45U;
    msg.popup_period = 5271U;
    msg.popup_duration = 6062U;
    msg.flags = 6U;
    msg.custom.assign("ERSRZXUYZLZBVADTSEXLEWKLLTGMHMGZZRFCHLGVPAWFKCJGZCAYHQQDNYPURKVDIBTBPLQYHURXWCYMFUBEOJPLQFIHUXUKIFGWKFRSFRZNTJBIFWPHLDIDDNHCXAEQIOZXGETPLMKNT");

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
    msg.setTimeStamp(0.39543934170347894);
    msg.setSource(44848U);
    msg.setSourceEntity(251U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.3118799859443864);
    msg.setSource(62627U);
    msg.setSourceEntity(220U);
    msg.setDestination(30385U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.6297956068247854);
    msg.setSource(24511U);
    msg.setSourceEntity(2U);
    msg.setDestination(10048U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.10488604519108635);
    msg.setSource(19420U);
    msg.setSourceEntity(179U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(107U);
    msg.timeout = 14287U;
    msg.lat = 0.7304745981457637;
    msg.lon = 0.5621356128668797;
    msg.z = 0.8971740527620335;
    msg.z_units = 12U;
    msg.speed = 0.6326690604621997;
    msg.speed_units = 42U;
    msg.bearing = 0.01308933455334682;
    msg.width = 0.08551911170463267;
    msg.direction = 238U;
    msg.custom.assign("GLAWDMNVSNOZCIHYXJYZFPKUWEIFVQETDXTHULWGEBTBNPJJWUKLUQWCGGNMJOHPPSHBEEXWIFHCOVSFNPALCQPKMYDBDAEAK");

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
    msg.setTimeStamp(0.38537852839341);
    msg.setSource(40568U);
    msg.setSourceEntity(247U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(163U);
    msg.timeout = 58773U;
    msg.lat = 0.467640230516414;
    msg.lon = 0.8650384172223566;
    msg.z = 0.03741451160534359;
    msg.z_units = 239U;
    msg.speed = 0.019833680346579285;
    msg.speed_units = 109U;
    msg.bearing = 0.19088337322548043;
    msg.width = 0.5022250425836238;
    msg.direction = 125U;
    msg.custom.assign("UTXAPMPFGYYBEGCPBRELBXSEFXGHFYVKUIDBNDMQCVSUGXQHMIFQMKHCTROZITDBUWRPOWCUOZHMEXXYHGGWLFSJVZEKNUMJJDUOCZFJKDQKLQARPOBJRBATCYJWITHZHBROVWKNEVRNRJEKKZIROVNQLPADASMHGMTSFLXWLSAFWGYHCGWDILQKJDZIAPLUQQWXANIOUOJBVVOYGKNCV");

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
    msg.setTimeStamp(0.11937063538846726);
    msg.setSource(63315U);
    msg.setSourceEntity(146U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(54U);
    msg.timeout = 33595U;
    msg.lat = 0.10635058772543715;
    msg.lon = 0.2546320110575343;
    msg.z = 0.010022730521912604;
    msg.z_units = 93U;
    msg.speed = 0.921315941940631;
    msg.speed_units = 72U;
    msg.bearing = 0.7190315149836154;
    msg.width = 0.8625203696698261;
    msg.direction = 199U;
    msg.custom.assign("FEPJXOADEJWOAMEXOCDUBYTMQKWNAHULJBZVCBIMNVULYWXZXYTTORQDCRMSNQAFOZOTVEMDLCDIBLNYZBDOYXPCZYGXVZJEGWXHQBADRXNIDMREHFQEFBFPAPHGRGFJVRADSESVPFHQKLWIQWQOHYUSIKDMCS");

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
    msg.setTimeStamp(0.44556135271618846);
    msg.setSource(63744U);
    msg.setSourceEntity(124U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(94U);
    msg.op_mode = 247U;
    msg.error_count = 166U;
    msg.error_ents.assign("LNUTVYTDIIWLQATTPNQZDMVGRMJVPSOOVSXNCVKWSRQAPYKNWJHRCBJUZDMLAOPFKXSQKNHIPWDMMWBOBQJHJCEMGCKGLDIFZHBNGSWOYKWHUMRUQYQOBSJKHIPFUIEFDGAPZVUIZCZXYLCFWEAXEVYLESYICDQXEYRSICGXAHNKJBLXDYDBFNSMVOBGAZRTUULNUPEVFTQGOZRFXLWXK");
    msg.maneuver_type = 14999U;
    msg.maneuver_stime = 0.08483311922749182;
    msg.maneuver_eta = 50824U;
    msg.control_loops = 2581914651U;
    msg.flags = 199U;
    msg.last_error.assign("VWUMXZQNVDFICWJJFIBQKJCGDLMXQFIYEPJCMFLDRAKNFWWLBWUSJOYXVXVRUCOVCKXSNLSASLRUSHBMCSYHIVPIQNEWPPLQKLVYYKNIVQYTDMBAOHXENPMCCXMDLPZZROGQWWBKUASRXZWRGGIERHFBZMAUDPUOEZYJOUVGY");
    msg.last_error_time = 0.04715304777152074;

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
    msg.setTimeStamp(0.9362137530245227);
    msg.setSource(9585U);
    msg.setSourceEntity(163U);
    msg.setDestination(1339U);
    msg.setDestinationEntity(51U);
    msg.op_mode = 78U;
    msg.error_count = 147U;
    msg.error_ents.assign("AFCDOQXEEYBLBKASJYNELKLOEOFWTQSGCIXSULJSBXQDRCPRWWARGYXFDMZMHCNPLTTCQSPZIDETTJUDVSDKHVJXGHZGWPIHWYOZPJZUUIMLCFRLUIUVHVFLHSVPTMMIGBNJNCOVNNGBBSNRDEAVJGEFKFPXZBHLMKMDPYRYOAUQPMIJLRGRYPGUFZXTHXQWAQAZSWCBXNKMCBVEYQAKKEDAUNCOROUFWIJHTEKYSZAGIWTFQXNTR");
    msg.maneuver_type = 20421U;
    msg.maneuver_stime = 0.4546532368403047;
    msg.maneuver_eta = 26088U;
    msg.control_loops = 2783597798U;
    msg.flags = 58U;
    msg.last_error.assign("GZNUVAMFNJBUKWOYMJTNAEJLNPGMKAUUEJCOZBFWZEKKIYBZRXKYGNIBCXYIIVGBTMDLQWPXORMVGPFSDIJUCMLJVISWNTYKRPPMYFSOHVMVKEESBQZKFMYVOCQTDTXHAMGOSBWTOTRSASYVTWCAQOBXFJJQDLPJVRHHXQQAKCADZPDGFHZBSUIRCCTRYODDGEULPTSUWAJHWXQLZCVGEXLDRHOLENUIPLFWWRLEXSHHZDRBNUQIKHIF");
    msg.last_error_time = 0.6457995392803949;

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
    msg.setTimeStamp(0.19276828621499875);
    msg.setSource(52078U);
    msg.setSourceEntity(42U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(198U);
    msg.op_mode = 14U;
    msg.error_count = 91U;
    msg.error_ents.assign("TQZUQHMZJUPXUZRCYEFAZXVHETVJBONTLISTUUT");
    msg.maneuver_type = 42044U;
    msg.maneuver_stime = 0.3689240441223407;
    msg.maneuver_eta = 53088U;
    msg.control_loops = 257838540U;
    msg.flags = 251U;
    msg.last_error.assign("HZANYTWRCBDWQEJBPWMPKNFSULI");
    msg.last_error_time = 0.41252656835955914;

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
    msg.setTimeStamp(0.046634657013985725);
    msg.setSource(55787U);
    msg.setSourceEntity(210U);
    msg.setDestination(8946U);
    msg.setDestinationEntity(66U);
    msg.type = 0U;
    msg.request_id = 26525U;
    msg.command = 224U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("YKHJZEGYGGIZHQYJRRBYKJUENDVHNTMBRUSBVSXIHVXLMWRWNIUZFSEVKCSDELZVBCMUOUGGGOVSZODIPMFQQXSAIMMQENQPNGLNKKBPOYACPDGTAFMQTGJAXQGWOTQFEJFLPOTBNACSDLHHDJZVWFWDTOCSSCWMYTEHKZPKYKZCAWJOITKWVTHPDNVDIWUXQAEBRRXBRLFDUERWLVCXYYUIYEMRHPORIA");
    tmp_msg_0.formation_name.assign("JDQLNMFROZBBGRPFEDOPLPXKFPLTCD");
    tmp_msg_0.plan_id.assign("APSKVSKZAAFMLZWGCYTMBRNISUUCFBZWDYMQDCJMEJIKFJTLLITPQPQZPDOEKPVHTIJQPGAFBSUVAXJXEHBQGSDVRIUPNBHQKUMEQNLHFNCLXLUTVKWKZ");
    tmp_msg_0.description.assign("FLSGORHPBXMIHNHOWZGXFCZQEHIDVQTXHXWIIDSLNZLURRGCMOJUSJRZJU");
    tmp_msg_0.leader_speed = 0.022444322983689258;
    tmp_msg_0.leader_bank_lim = 0.48171434734929386;
    tmp_msg_0.pos_sim_err_lim = 0.2478884436892157;
    tmp_msg_0.pos_sim_err_wrn = 0.22548681807628146;
    tmp_msg_0.pos_sim_err_timeout = 5544U;
    tmp_msg_0.converg_max = 0.0922713286966872;
    tmp_msg_0.converg_timeout = 38731U;
    tmp_msg_0.comms_timeout = 39432U;
    tmp_msg_0.turb_lim = 0.5825161990686498;
    tmp_msg_0.custom.assign("VXLMNZULTSCZOTGEROVUXZCRADMAOFVWZUIKNXBIKYCPLTDJYQXQOSCMDFFMAQLKOYWRPJQBGQJBMQRAGSTVPSJIBLZCIKRTYNURHIFGEZVYLILMJASBZQWYTFAEQRHOHFDDWWUDIQXDIXJICWXSNONHLSWOVMXYPPGMPFANWNHLTXATBEREXJAUHGSEDLOWVZDKMNFECHGFUETVBZRIATYNKBGFPHKCKBD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1235U;
    msg.info.assign("HSYEDXWRRZUYXLBHYSPYRNJXNGOFENJGKLMBWVIMRLCZMMXUHWCBKKRIK");

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
    msg.setTimeStamp(0.03996361397937742);
    msg.setSource(32365U);
    msg.setSourceEntity(227U);
    msg.setDestination(49223U);
    msg.setDestinationEntity(227U);
    msg.type = 40U;
    msg.request_id = 26447U;
    msg.command = 28U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VCJAJYYSGYTGIRCOKKOJVZNUHQEALINARKSWWFEESLTEIUVZCFMMKMYPCLEXITZDLORWCBAQXPMGXGOETHYNHDDFFSVNDHHPKYUWZURVBPD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49439U;
    msg.info.assign("LUNIWCFBLGEJAICRSDVIKFAMYXOPOTMBFFDTRCDGPBYPQNOYLMIBEXVSZDYXWAOCEQIPOWUQBXLVPUCUAMUUXNNFSJACNZBVPVVYPSKLHHAOBFTSBTMEADZAGZJEEQTLVKLJAWXZXNQFGYDDMWDKK");

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
    msg.setTimeStamp(0.07220484798150972);
    msg.setSource(48361U);
    msg.setSourceEntity(118U);
    msg.setDestination(21611U);
    msg.setDestinationEntity(84U);
    msg.type = 140U;
    msg.request_id = 4876U;
    msg.command = 73U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 19750U;
    tmp_msg_0.flags = 117U;
    tmp_msg_0.lat = 0.05123382091664952;
    tmp_msg_0.lon = 0.004251722298560967;
    tmp_msg_0.start_z = 0.5188975048252453;
    tmp_msg_0.start_z_units = 252U;
    tmp_msg_0.end_z = 0.4706156910871795;
    tmp_msg_0.end_z_units = 37U;
    tmp_msg_0.radius = 0.5787167835596221;
    tmp_msg_0.speed = 0.857693079920339;
    tmp_msg_0.speed_units = 186U;
    tmp_msg_0.custom.assign("GLPWHHXQBHTBLVEVKOEREVBSVUABOTZOMKJICSUMICDFSFZXQEMJPDOKWDKSBSARWKNAXTNHGNOWMUEVJYQMZLNNT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45820U;
    msg.info.assign("HVGGIJKUVIEAKIIHWFNQUSTVHPSDDPYGWSGKXOTKUTBWSBALGFULIQCYKTBINOZZFGOZBOFCQCJWWYGNATYRPVWBZHPEFHVVQDRLVCCPJFCNJIEKMSJFBAADRBTCPBKUZMBMQMODHEFVXMSSFXYTGLAXAZTSEUDPLEDIKRPLXQYBJOPVCZRKRALIXYZXRDUNCQRQGZEGWNHOYARLQ");

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
    msg.setTimeStamp(0.833204417970843);
    msg.setSource(10919U);
    msg.setSourceEntity(250U);
    msg.setDestination(37445U);
    msg.setDestinationEntity(224U);
    msg.command = 22U;
    msg.entities.assign("OVLMNLTMTJLFSWRPCIKBOL");

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
    msg.setTimeStamp(0.5296390175732776);
    msg.setSource(56540U);
    msg.setSourceEntity(221U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(44U);
    msg.command = 178U;
    msg.entities.assign("SQCYPOLHXUKMDPILOFKJDOWEAVRAPYUBIDPQBGIOKCNKSCVBXQVCCFLPCWVMGBYLIZLGDNTSUKPWRXUWRNWWWHDGSKALQSUBGHJOIGFSHUIJMLUAIXEOMDCNLHVOLDTGDJJ");

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
    msg.setTimeStamp(0.6983814061554723);
    msg.setSource(30951U);
    msg.setSourceEntity(168U);
    msg.setDestination(24345U);
    msg.setDestinationEntity(228U);
    msg.command = 82U;
    msg.entities.assign("ULFEYJLMXBTGIBEXYXFOGJHSGREQWQXITKMXQIYWMIGTMNGNUSPAIWGGVSTJDWNPSUXGVKBYLPVFAYTKUQVZAFDADSKRHWONGPMCBBFUKDIJCTHOZQPWDODAABJXFBJUZNSZRLNAIX");

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
    msg.setTimeStamp(0.47359641512865136);
    msg.setSource(7975U);
    msg.setSourceEntity(19U);
    msg.setDestination(23212U);
    msg.setDestinationEntity(200U);
    msg.mcount = 88U;
    msg.mnames.assign("SNPWPMAEDXBEPHEFRSDSUHWVQSKZCGDTUKMUTYNSIJGIXAXEOAMCREMDZITURBDEYXCZNRIVQALIHOWYMNPUVIZNQZOEPHQJKLJUHJBLBEWDVQFFDFCIITYGWJQGHRPJNOPLJNXOTAWYOSQTBULZKYTSVCUGBCGFYTLAQA");
    msg.ecount = 111U;
    msg.enames.assign("UFYTMULQKCRPINQSETEXCYGJLZOWGUFLXNNZQXRWFRNXMIJQIOPTGSPQUERHKAPXSJULFBUYEQDKEKOUZRKRBJZDOEWBXZNXOJKTANDHMFBWXECOCJLDVVJSWEFIMGYNCCBHLOVTBPASAWQQHPASDASVVYMAHDDRHJFIWJHWMMBYVHGTUMGZEOTHMPBWNLOKEDFOPXNYVCRZ");
    msg.ccount = 36U;
    msg.cnames.assign("YIHTVTBKWIXSLEGGHTXSEPVQACLXVWTGBXWUOQPRNAKUBFLLVPKMBNRZUMPIWLVYVUNLHKEUFWXHKJSONNXHCGBCPVDSGQFCKRCYWUHDPMDFFWHPXXQLBXICUDACUYFKANGSCQDNMJZMKHZOIJGNVZIFNGQAWDEYLAPQKQWOCERRIHLETDRRZBLGAZOOMMEEJQIIYCNZOSOZTAHMGJFUTR");
    msg.last_error.assign("UVOTSWSBMICWWKVRAJAKLLFYNDZBNDHCGYFBEKTAKDLYMFULEHSFBYOIXJDHWOJRLQBEDGNAIPUZPQGFZCHZKCWMASRCYOFAIVQSOTSUCGNQPDBOGXFQPSGGSEVDKKRTLXHBDHFTVZXYMZIKJXWYPXERSAAHZTLOJONPFWPXY");
    msg.last_error_time = 0.895790477764769;

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
    msg.setTimeStamp(0.5774247982449069);
    msg.setSource(38896U);
    msg.setSourceEntity(126U);
    msg.setDestination(26976U);
    msg.setDestinationEntity(53U);
    msg.mcount = 104U;
    msg.mnames.assign("TQYOUUXRKBLDHNLTNBEXAGKFELYPQPBZXCPSVFGZECMFTPOGYLJDECXSRPVLVNCGORLSHAOZSNGDPHOCCBXOFKAKH");
    msg.ecount = 53U;
    msg.enames.assign("YTVRTNPQVRDZUKZREEGCTBXUDEKSJRPAKXQELMPNRLKPGVQKZYPTCNOBOMISAHYHQFMQYMJIJWKXGDMYALSFYEJCIGGUUUOIGWTTAWNPPSYBNPZHRZHDKJVFWAZVBFXBLPLOEZFSJZIYEVIOUWDLRHLJBIJVQRTHQBES");
    msg.ccount = 171U;
    msg.cnames.assign("XGFEHHXLJNCIARMJPFDFOEAPTWZALFELMGHHTBZRGIICWMLOKCQPQECNBJMZYQBDPJWFRQDYTHGZVOSGNKOBIBKRRNUXSQWHDJCJDVXOVVLYSQXXSRV");
    msg.last_error.assign("DZTJDJQCYFELIUVWHIHJOWSLKFYACQEOZXBSXRCJEAGZANQPCXYBWCYKAWQDUTIINRBDTFUPNVNLGMOYCKHNTRZUVNIDJDREKSZPZWYVTGKWRNHSHGLTAKFEYRKHB");
    msg.last_error_time = 0.2718445460105763;

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
    msg.setTimeStamp(0.07593201316515097);
    msg.setSource(7830U);
    msg.setSourceEntity(176U);
    msg.setDestination(39646U);
    msg.setDestinationEntity(189U);
    msg.mcount = 253U;
    msg.mnames.assign("EGPVJFGPYRBCZLWSSVGVAXCQHIQUHZKRNDQJSWRAYRDSEJMYKMDAAFNWDKCTWLWHOINMHOLYUBNCBUQ");
    msg.ecount = 136U;
    msg.enames.assign("UCTYSBALHPSGFNPPBFMFFOHRFLJUWMENOWRKNAOUIVOZRBKXJTDJMSRBEFUQWCNDOYVWSKSHDEMXNFJKVKA");
    msg.ccount = 184U;
    msg.cnames.assign("DRZMVYZHEWTLQWIYQPCFFBFXMPKAPHAMQKZMWYFYPOLPLMEWJDHTQVVEDTUDUXQYSOBNOKIA");
    msg.last_error.assign("CGJZVCPDSFTFCLXZRLQXMOZMBFNZLXBEHFNJMRBENSUVLHFQOCMKDEMBMZVDPVAMBXANRCLYHAWMRYKRHRANJIPVZHNEDPGCSSTOXIULITCEIJWDVULRZTTDXRJQAPJKKPUOSRVXFCQEXWNHWYNSKIBBVHHPQOFWJSYQCFVGKYUBFYPOTGUYKUITHOIKEMWLTGOQETALNYGSWQHGFEOWARZSAQAZIDABNLGWZKYSUGXUGICQJJVDDY");
    msg.last_error_time = 0.45797046603421965;

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
    msg.setTimeStamp(0.48523298888680433);
    msg.setSource(26642U);
    msg.setSourceEntity(42U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(224U);
    msg.mask = 252U;
    msg.max_depth = 0.08509283997703132;
    msg.min_altitude = 0.9202959868642197;
    msg.max_altitude = 0.32404314097357534;
    msg.min_speed = 0.2563162781968129;
    msg.max_speed = 0.37443181219278776;
    msg.max_vrate = 0.00890767711376017;
    msg.lat = 0.17043064115226614;
    msg.lon = 0.5603677369937007;
    msg.orientation = 0.410199056022591;
    msg.width = 0.724083419024815;
    msg.length = 0.29338957372750607;

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
    msg.setTimeStamp(0.3115925658646733);
    msg.setSource(61654U);
    msg.setSourceEntity(111U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(98U);
    msg.mask = 120U;
    msg.max_depth = 0.2629724721515865;
    msg.min_altitude = 0.5099930885770706;
    msg.max_altitude = 0.9836975042878573;
    msg.min_speed = 0.01004469295798649;
    msg.max_speed = 0.255956961490036;
    msg.max_vrate = 0.33167299748825607;
    msg.lat = 0.4549327201724064;
    msg.lon = 0.12764057164334064;
    msg.orientation = 0.20688576458324803;
    msg.width = 0.6795693902705165;
    msg.length = 0.23788261509598585;

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
    msg.setTimeStamp(0.03756307512673851);
    msg.setSource(7434U);
    msg.setSourceEntity(18U);
    msg.setDestination(2737U);
    msg.setDestinationEntity(192U);
    msg.mask = 101U;
    msg.max_depth = 0.16491549037506747;
    msg.min_altitude = 0.28379492402039574;
    msg.max_altitude = 0.5020454411257472;
    msg.min_speed = 0.47917468175001565;
    msg.max_speed = 0.698319433706861;
    msg.max_vrate = 0.29852866072870954;
    msg.lat = 0.865850261375794;
    msg.lon = 0.5956891816859288;
    msg.orientation = 0.020804521845085633;
    msg.width = 0.6709265538367957;
    msg.length = 0.10192135724754792;

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
    msg.setTimeStamp(0.642353140295754);
    msg.setSource(58383U);
    msg.setSourceEntity(248U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.19154653248137155);
    msg.setSource(52023U);
    msg.setSourceEntity(76U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.13724759709361167);
    msg.setSource(1106U);
    msg.setSourceEntity(233U);
    msg.setDestination(57650U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.2919187788838209);
    msg.setSource(57316U);
    msg.setSourceEntity(186U);
    msg.setDestination(24368U);
    msg.setDestinationEntity(205U);
    msg.duration = 47260U;

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
    msg.setTimeStamp(0.6255318043008744);
    msg.setSource(53571U);
    msg.setSourceEntity(115U);
    msg.setDestination(61548U);
    msg.setDestinationEntity(200U);
    msg.duration = 37168U;

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
    msg.setTimeStamp(0.32356136291692783);
    msg.setSource(58600U);
    msg.setSourceEntity(163U);
    msg.setDestination(59602U);
    msg.setDestinationEntity(104U);
    msg.duration = 42271U;

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
    msg.setTimeStamp(0.7499560492821999);
    msg.setSource(42433U);
    msg.setSourceEntity(41U);
    msg.setDestination(11113U);
    msg.setDestinationEntity(104U);
    msg.enable = 43U;
    msg.mask = 3423381002U;
    msg.scope_ref = 3556770480U;

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
    msg.setTimeStamp(0.4524792769935846);
    msg.setSource(1436U);
    msg.setSourceEntity(58U);
    msg.setDestination(33511U);
    msg.setDestinationEntity(126U);
    msg.enable = 192U;
    msg.mask = 1725295972U;
    msg.scope_ref = 2034745106U;

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
    msg.setTimeStamp(0.516699415713626);
    msg.setSource(1666U);
    msg.setSourceEntity(165U);
    msg.setDestination(50656U);
    msg.setDestinationEntity(6U);
    msg.enable = 44U;
    msg.mask = 1580595897U;
    msg.scope_ref = 1026154825U;

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
    msg.setTimeStamp(0.042615839003226075);
    msg.setSource(23829U);
    msg.setSourceEntity(176U);
    msg.setDestination(44435U);
    msg.setDestinationEntity(115U);
    msg.medium = 8U;

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
    msg.setTimeStamp(0.12014933586262366);
    msg.setSource(59096U);
    msg.setSourceEntity(149U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(30U);
    msg.medium = 228U;

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
    msg.setTimeStamp(0.22586623093537672);
    msg.setSource(2661U);
    msg.setSourceEntity(121U);
    msg.setDestination(22546U);
    msg.setDestinationEntity(29U);
    msg.medium = 40U;

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
    msg.setTimeStamp(0.8008708989309018);
    msg.setSource(21072U);
    msg.setSourceEntity(229U);
    msg.setDestination(27190U);
    msg.setDestinationEntity(212U);
    msg.value = 0.51337103954413;
    msg.type = 59U;

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
    msg.setTimeStamp(0.034411906112404966);
    msg.setSource(57433U);
    msg.setSourceEntity(174U);
    msg.setDestination(12559U);
    msg.setDestinationEntity(28U);
    msg.value = 0.1525914631603258;
    msg.type = 146U;

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
    msg.setTimeStamp(0.5197973660928736);
    msg.setSource(60524U);
    msg.setSourceEntity(231U);
    msg.setDestination(35963U);
    msg.setDestinationEntity(232U);
    msg.value = 0.4880033923867808;
    msg.type = 215U;

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
    msg.setTimeStamp(0.8881833039021435);
    msg.setSource(9393U);
    msg.setSourceEntity(96U);
    msg.setDestination(10150U);
    msg.setDestinationEntity(159U);
    msg.possimerr = 0.11214640288830602;
    msg.converg = 0.03359728708496046;
    msg.turbulence = 0.7624913659084276;
    msg.possimmon = 145U;
    msg.commmon = 220U;
    msg.convergmon = 113U;

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
    msg.setTimeStamp(0.058501549088141425);
    msg.setSource(19060U);
    msg.setSourceEntity(59U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(166U);
    msg.possimerr = 0.13339425589896758;
    msg.converg = 0.8851841463484175;
    msg.turbulence = 0.5940041422395833;
    msg.possimmon = 92U;
    msg.commmon = 139U;
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
    msg.setTimeStamp(0.05329710355089101);
    msg.setSource(1684U);
    msg.setSourceEntity(42U);
    msg.setDestination(54606U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.28624006863415663;
    msg.converg = 0.4983729368680583;
    msg.turbulence = 0.036941035902511965;
    msg.possimmon = 98U;
    msg.commmon = 130U;
    msg.convergmon = 45U;

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
    msg.setTimeStamp(0.5471474381572794);
    msg.setSource(1915U);
    msg.setSourceEntity(1U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(37U);
    msg.autonomy = 118U;
    msg.mode.assign("JCXKODKIDLXBEMALOYGVMLZIMNTFHVQNYQJOUPC");

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
    msg.setTimeStamp(0.41964331762108886);
    msg.setSource(40319U);
    msg.setSourceEntity(197U);
    msg.setDestination(33338U);
    msg.setDestinationEntity(236U);
    msg.autonomy = 234U;
    msg.mode.assign("FTPCJXJFNWJBYTVMEJYSRPXZEJQILVVSAOKOLOUSURUWSVCDKBZKT");

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
    msg.setTimeStamp(0.4021770718329216);
    msg.setSource(65363U);
    msg.setSourceEntity(174U);
    msg.setDestination(45045U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 201U;
    msg.mode.assign("OIYABUYHBMAQBTQXVNZSCLZVUOODNOEUYPZOXTDLRIFRELQRZJPLTCPNKYPDMAIKUSNXWLCPPMJTKFVYMIPHURLPYWGRUDKWEDIENLOI");

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
    msg.setTimeStamp(0.2488324668195867);
    msg.setSource(58340U);
    msg.setSourceEntity(182U);
    msg.setDestination(25242U);
    msg.setDestinationEntity(202U);
    msg.type = 254U;
    msg.op = 221U;
    msg.possimerr = 0.5834999114729182;
    msg.converg = 0.1518525110032256;
    msg.turbulence = 0.5246202154083469;
    msg.possimmon = 237U;
    msg.commmon = 202U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.1308534248281643);
    msg.setSource(24273U);
    msg.setSourceEntity(3U);
    msg.setDestination(50592U);
    msg.setDestinationEntity(184U);
    msg.type = 41U;
    msg.op = 106U;
    msg.possimerr = 0.8279956583008576;
    msg.converg = 0.2537461635653637;
    msg.turbulence = 0.966670605880268;
    msg.possimmon = 76U;
    msg.commmon = 190U;
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
    msg.setTimeStamp(0.27623185337637823);
    msg.setSource(50488U);
    msg.setSourceEntity(202U);
    msg.setDestination(12557U);
    msg.setDestinationEntity(15U);
    msg.type = 63U;
    msg.op = 205U;
    msg.possimerr = 0.927314717899571;
    msg.converg = 0.09772623912759004;
    msg.turbulence = 0.6919158024645642;
    msg.possimmon = 153U;
    msg.commmon = 79U;
    msg.convergmon = 45U;

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
    msg.setTimeStamp(0.31075566076769756);
    msg.setSource(34755U);
    msg.setSourceEntity(145U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(58U);
    msg.op = 103U;
    msg.comm_interface = 183U;
    msg.period = 54772U;
    msg.sys_dst.assign("WRFXFTKKCDAALQBDUUTYBAINTJQKSHZGIMARCXZVFGVEDBPGMZPHCOOTGXOSSJZSGQUMKTNNYMOHCNHFPFHVPQREQJOMCKZUWXJBWDNEGKOKAJFEAWRVFQROZDUDYOCIY");

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
    msg.setTimeStamp(0.23416191884029025);
    msg.setSource(2569U);
    msg.setSourceEntity(172U);
    msg.setDestination(18023U);
    msg.setDestinationEntity(55U);
    msg.op = 194U;
    msg.comm_interface = 183U;
    msg.period = 40514U;
    msg.sys_dst.assign("ODKHRACHXUGAKJTZGYONNVPRMWTVG");

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
    msg.setTimeStamp(0.17375465549367675);
    msg.setSource(30080U);
    msg.setSourceEntity(126U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(133U);
    msg.op = 29U;
    msg.comm_interface = 104U;
    msg.period = 60984U;
    msg.sys_dst.assign("DYKMJSFHIBNUZYLRKBWCUASTGBKISOHVUPGWYWYQODGEKMAALOEXBTUFZQEZQITFOPSQDFMNREKWHOCNXVPCWAXBKHYVSUJMNSYENTICBXJMGQLISZYLADXXXQSJAKRCGHPGTJTCHDVT");

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
    msg.setTimeStamp(0.06435257418254647);
    msg.setSource(22386U);
    msg.setSourceEntity(109U);
    msg.setDestination(6224U);
    msg.setDestinationEntity(163U);
    msg.stime = 3450076079U;
    msg.latitude = 0.20972384115317066;
    msg.longitude = 0.5786292100076318;
    msg.altitude = 15833U;
    msg.depth = 29849U;
    msg.heading = 18296U;
    msg.speed = -22747;
    msg.fuel = -13;
    msg.exec_state = 27;
    msg.plan_checksum = 18864U;

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
    msg.setTimeStamp(0.08236637299270122);
    msg.setSource(46545U);
    msg.setSourceEntity(207U);
    msg.setDestination(53111U);
    msg.setDestinationEntity(29U);
    msg.stime = 2553314032U;
    msg.latitude = 0.4525805205534129;
    msg.longitude = 0.9520835913151829;
    msg.altitude = 46598U;
    msg.depth = 14899U;
    msg.heading = 7135U;
    msg.speed = 6976;
    msg.fuel = -10;
    msg.exec_state = 43;
    msg.plan_checksum = 5390U;

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
    msg.setTimeStamp(0.10153858149900097);
    msg.setSource(40722U);
    msg.setSourceEntity(23U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(89U);
    msg.stime = 1965106399U;
    msg.latitude = 0.7603262273552981;
    msg.longitude = 0.028566791988512086;
    msg.altitude = 54934U;
    msg.depth = 23631U;
    msg.heading = 47324U;
    msg.speed = 6560;
    msg.fuel = 8;
    msg.exec_state = 113;
    msg.plan_checksum = 49521U;

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
    msg.setTimeStamp(0.44409837866450497);
    msg.setSource(867U);
    msg.setSourceEntity(120U);
    msg.setDestination(1351U);
    msg.setDestinationEntity(226U);
    msg.req_id = 21990U;
    msg.comm_mean = 136U;
    msg.destination.assign("ZNFIWNKSAZLEYKIYWRVFCMOAPJWKJXFCLQMLZEKATXBNXCPBLZMJHDOPNYHTREXQR");
    msg.deadline = 0.34177977789183045;
    msg.range = 0.6308551422641515;
    msg.data_mode = 151U;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.8991578961078442;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RRGNUDIUOKBLEXDUMTSVVLDGRDPDHNDAEXWJDXTFTPZMBFALGETQJQHMMYRFUXPILQYCIWFRYBVFECZOOWQBAXNNWTCGQZPTHOWAWAJYWNXMBVHFPIVOUGCJRCEFVSJQQNIDOIMSX");
    const signed char tmp_msg_1[] = {4, 88, 36, 60, -114, 62, 126, -118, -9, 37, -79, 54, 101, -61, -34, 3, 25, -65, -35, -57, 1, -55, 69, 62, -85, -55, 111, 42, 32, -72, 69, 83, 34, -12, -61, -48, 4, 117, 54, 90, -123, 104, -86, 48, 82, 102, -78, 88, -22, -74, -120, -68, -115, -18, 76, 14, 30, -87, 91, 40, 37, 117, 12, 99, 44, -78, -60, -1, -92, 96, 59, 119, -92, 87, 52, 14, 43, -127, 71, 71, -22, -119, -8, -11, 82, 106, 103, 44, -63, 41, -31, -115, 41, -34, 94, 123, 60, 113, -17, 59, 102, -80, -54, 29, -118, -4, 81, -96, 107, 72, 118, -117, -37, -78, -102, 31, 26, -24, 95, -118, -81, 92, 53, -90, 103, -118, 108, 13, -18, -9, 116, -16, 110, 119, 40, 52, -43, -12, -116, -65, 60, 95, 74, -55, 18, 65, -111, -94, -75, -72, 19, 16, 99, -19, -51, 38, -36, 40, 58, -22, 112, -48, 72, -123, 48, 4, 26, 106, 38, 72, -92, -30, 18, -63, 84, 50, -103, 63, -112, -11, -105, -121, -63, -95, -87, 118, 33, -34, 105, -35, 18, 11, 52, -9, -20, 113, 15, -89, -103, 20, -122, -92, -68, 20, 88, 17, 119, -71, -34, 26, 65, 18, 104, -110, -67, 90, -113, -97, 66, -98, -74, 31, -37, -78, -74, 43, 118, -106, -128, 61, 115, -103, -57, 72, -80, -76, 86};
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
    msg.setTimeStamp(0.7098905354097996);
    msg.setSource(56367U);
    msg.setSourceEntity(61U);
    msg.setDestination(41139U);
    msg.setDestinationEntity(234U);
    msg.req_id = 36339U;
    msg.comm_mean = 253U;
    msg.destination.assign("UOILTAZVXDDXSNUDPBLTCUABEFOZMXQRWDGYHEBZWZRLFFXRPWTNVSBLLAJGDPRRZGYZZRVZVKIVAMENOJVQSKWSLPUJYVEXFBCRZCAMTIAMCHCDADECJHMFIGMTFIYFJPLMNNQUKKOUOBUFCIKYEDSGNXJJLWYSBBJQMHHRHPQKKEOCQXTRSYVTOEHNTRGLNOGAQSLQVQWSDOPEMVMTPACFUIEZAHGNYWJBNFWISWKHXXPKGUGKOWYQDB");
    msg.deadline = 0.02341475575188401;
    msg.range = 0.389660136834588;
    msg.data_mode = 53U;
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DTCLAVPJEKFNXPFXCSMISCOKSZLUPEJFEIZUJODIWFYOXOYDHTGEKALZNHUAJECAVKCFQISMBORUDEYBWHYHPAOKWYBTLFOOQXVWRWISTZPPYHMNGJNQUBMILPCXE");
    tmp_msg_0.type = 68U;
    tmp_msg_0.default_value.assign("KOAUYDRGMTRGINECJCFCFGPEEPBYOELNLHMVXCSMJJUQQXWAHNNPOYIRHZGBOFFKQQSEBTIXWVQPTCESZDXGVUAXAZWARQNCUJKRTRVEPDTIRWENLKJMKDKZMIUNJSDJSUQNLWS");
    tmp_msg_0.units.assign("IDWFWXTHJDFPICAQNGXFOBKUZMLZQYYYFLRQICHAXQNTXWEBEWMNVABFXIPGVQKSDKOIAEAISLNQJNJWMCOVLPWIHOKJMSNVBOPXDSSTRZMZVMGWUWYEZRUVEGULCIARZSEJBVCTPGNLFPSLDSHYMKUDCXIONGGFOVHIZKJPEFCWJQAAUJYZDTAFEHWUEYKTRDYHBCMRNDJPMBLCNZBGKTQBUVJUQMOYHRHVAERTOCPKHOXXKSGRSYTUTXZFDG");
    tmp_msg_0.description.assign("WHBRLQFOVBJARNMOYBICSQKNQXVKNCDWVAYKXNGKDJKZOEAMSYHAIGWEOGXHFOVRQDBNXYYDSOPODAOBDNKSMRUXUMCOENPWUXPBJBTREFZGULXHRADFWEGJGUTXLKLDQGPMIATTFFSSCYBJCJUVLFHYJZEIITLLSUTCPBEJPAQXM");
    tmp_msg_0.values_list.assign("HLYPJKIEBTZGSRLRCQCMRTSRINMETIWZAYSIOWVKMMDFDVFVQRJWZGIUDLLNO");
    tmp_msg_0.min_value = 0.423493426106604;
    tmp_msg_0.max_value = 0.06261708611157568;
    tmp_msg_0.list_min_size = 180U;
    tmp_msg_0.list_max_size = 192U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("SXMRPJOZITISZNXKRUVIGAJETXGQSURNQJDMIWNYGWNDRGFOOCZSLUBAMEBFDMXMOXMWIEBPBUFXHPNQSLVYAHUYWSKLGRAGSPCHHEFCHZLPBGREJNVLLTVJRYEVKUCMAUTTCJPBZDWHSRIJOPBHMCYQNIJAVQZAHIUIYUCMBJKXLEUKHPMOQYCQQZDNZQKVABYNVRGWSFRFBLCKTZKHNXLYF");
    tmp_tmp_msg_0_0.value.assign("WXSENJZGYJBGAPZLVXXMQJKTKBARGDMBUTHSFDACQVNLSUQCZBSORSYCKWNKARFQLIITRAVVJDHMDVQPWSTIQEDIJGHBWNRCMYLXSOPUVDQOFNUTWOAPXOZZDHITZCHLMAJIWATKIBEFCYEURJKFGICFZSBJHIVYKZGBRUBSODMXNULMNHVENHR");
    tmp_tmp_msg_0_0.values_list.assign("PNBGLSORDAOYNFIGSKQXMIIXJENMPMQASXIBYC");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 114U;
    tmp_msg_0.scope = 152U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FMDKKOQAIKTZJKZAFYDWYBVTBLABNDDBCXFGBHJUAZECNLPFPWBSOAIVXKCUYGWWZUSYCNNBSRQHQSIIPXJFARAMMFDEQIACHVHERCKJCQXDNPNLJUIOVYDRLOERXOWLSTKEBVLMQZITDSNJCJEPRQUUPZGFNULREPGWHYXWWMYMGXSDTFUNQNIVRFDHUOIZZZHHRCOYUMMTGJMMFBGXZSGCPVPSKKTBARS");
    const signed char tmp_msg_1[] = {13, -112, -104, 18, 105, 115, -76, 99, 97, -23, 122, 20, 100, 7, 124, -80, 51, 88, -93, 18, 98, 83, 126, -31, 107, 21, -52, -123, -113, 23, -93, -26, 9, -98, -77, -102, -80, -127, 47, 78, -21, 18, 18, 100, 66, 112, 11, 25, -47, -48, -18, 37, 33, 41, -59, -1, 121, -47, 32, 107, -39, 46, -45, -21, -81, -126, -121, 124, 1, 37, -78, 53, 110, -4, -51, -68, -17, 106, 3, -104, 54, 52, -128, -108, -78, 88, 96, 118};
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
    msg.setTimeStamp(0.5720790174422093);
    msg.setSource(60798U);
    msg.setSourceEntity(164U);
    msg.setDestination(14058U);
    msg.setDestinationEntity(60U);
    msg.req_id = 18184U;
    msg.comm_mean = 252U;
    msg.destination.assign("WOQBFUSBIWSLJLIYEXERXEHZURTWDRAFNMJYBZYRJXLDCYNYTSCEWZTGKGGFAWDIVAAJY");
    msg.deadline = 0.6383759044476164;
    msg.range = 0.6129559898547352;
    msg.data_mode = 195U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3776299318U;
    tmp_msg_0.state = 195U;
    tmp_msg_0.error.assign("RWTTUPCUQIMDHSDFAMVPLZSMUXENDTOPCPKUKUELXLUDGEPWAFIDOXLMGCNDRN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SMDGIIXNVOCMJTOJNKSQCBETWOLJRWEEOPRRVAHCASPBWEWMDILSRLJSBVLHMHEUFBPQDRJUXKVFNVPRTUWKKXFYMGMQZDRQACKYHQHGFZAIHXWNZGKPZCLWAPBZJEAQKBDCKZHXXRMIYMAFDQUUVLGQNPANFGDYYJOITCYGYZHXUOFXYJXVNZCBDVSUXVTOBDQAWEQDMPETLKJAIBUVMCBYFOIE");
    const signed char tmp_msg_1[] = {124, 5, 15, 82, -67, -86, -26, 44, -87, -126, -36, 109, -86, -30, -10, 29, 43, -49, -42, -116, -80, 102, -105, -97, 22, -42, 39, -31, 56, 44, 106, -41, 0, 1, -51, 97, 11, 0, -128, 76, 46, -72, 72, -100, 82, 32, -15, -42, -75, -70, 28, -55, 57, -44, -96, -25, -17, -9, 28, 83, 118, -56, 75, -8, 40, 110, -45, -73, -111, -16, -57, -55, 51, -87, 63, -103, 75, -39, 121, -42, 77, -128, -30, 29, 80, -75, -18, 114, 58, 64, 17, -32, 111, -61, 33, 125, 125, -125, 75, -40, 47, 11, -10, 93, -52, -20, 17, -20, 50, -120, -38, -7, -18, 72, 39, 114, -8, -7, -112, 96, 15, -76, 117, 67, 54, 94, 12, 98, -80, 77, -14, -59, -54, 125, 111, 99, 61, 117, -19, 107, 11, 3, 4, 14, -120, 39, 124, 97, -83, 3, -61, 61, -27, -40, 15, -122, -36, 109, 77, -7, 62, 24, 35, 28, 76, 7, 41, -100, 5, -127, -57, -59, 117, 95, 51, 95, 115, 112, -80, -29, 18, -121, -91, -37, -28, -65, 50, 52, -121, 13, 27, 38, -13, 86, 92, -25, -16, -78, 33, -126, -87, 52, -20, -89, 2, 10};
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
    msg.setTimeStamp(0.06877100248638834);
    msg.setSource(36510U);
    msg.setSourceEntity(235U);
    msg.setDestination(12945U);
    msg.setDestinationEntity(214U);
    msg.req_id = 9282U;
    msg.status = 239U;
    msg.range = 0.13117447046611042;
    msg.info.assign("ZQPWITCBPAVATDQACIWXYEMEGVCSLDRSRUBGPJRGJUOQSSMHSNOZRHNIEWJYHSFXYJFGVIUVLDOPNKRZKQBJWPZYQCLEDZTJRIUOKHEIFRWVPTUYEWZSOHDVOWWMI");

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
    msg.setTimeStamp(0.4205411662990919);
    msg.setSource(36087U);
    msg.setSourceEntity(224U);
    msg.setDestination(26915U);
    msg.setDestinationEntity(211U);
    msg.req_id = 32225U;
    msg.status = 83U;
    msg.range = 0.7111086013734579;
    msg.info.assign("WWDJJPKHKMBTIWZRBENBEOZCUAKFIVMGETFUJGEVMFHACBYGGCTUUXPHPGMHUCPJPIIHEWOXGRAVRHPWXCHZOSSFMPDQJRWCMZNKXYDLIKFVS");

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
    msg.setTimeStamp(0.21383273599679986);
    msg.setSource(10667U);
    msg.setSourceEntity(254U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(223U);
    msg.req_id = 5925U;
    msg.status = 115U;
    msg.range = 0.3984336569175734;
    msg.info.assign("CLVGBRYAHJXBMSLESFPLTCLQROIRVVODANPZOADMRJYSOULMHUZBZPHAGFRNMOLUGFEOYZLVNDPQGJCAHWXMBUZLQNPLEPDKYGMSRJKFTURKDEYFTFHYSGXADKWUKUQVKQHPXTWXEINWKSVSZCAMWTSXTULIYGDN");

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
    msg.setTimeStamp(0.7439847391226891);
    msg.setSource(17692U);
    msg.setSourceEntity(184U);
    msg.setDestination(9669U);
    msg.setDestinationEntity(79U);
    msg.req_id = 43875U;
    msg.destination.assign("RLTWJLOKLOSQOMLAWWDTMDWDZHAIJWNECAJHHZJZLEVFSDVYBJQNTAFGTNYRPPMQFBJQBWUCNVOIDIVNSFJETAOXQESBNOZGMMRIQKMILDHHSQPPZHLREHPYSRUOKZFYGIPYVFTIBYYLLHDXWXCBLYRESAAXNDPVFGFKZRYRXVJNBBZEQUWSTXBCUKCWWZUHRGIESHXUOADREIMOUCVPNKMBFUXUSKOCEXCDGCAMXCGIJKPZJPYQNVFTKAT");
    msg.timeout = 0.21669884796164363;
    msg.sms_text.assign("LUBBBHERMTLYYXHTMAJAZJXTKCSLBFOLGKHPESVOZPAXVYIRXDHQIQZSMZHOEAMOSNCECEQHGQNBLPDDVAOPFDOENGPUXSZNJCUEOIISSWMNRTGBUTRTMIEPFMFLTHZQGRJEDGJUWXHKKVYFNVUNVMAUDGLYKIANTWDFVWXYVDPTQRINBWFRCZWQQF");

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
    msg.setTimeStamp(0.3764300296270232);
    msg.setSource(25431U);
    msg.setSourceEntity(191U);
    msg.setDestination(25577U);
    msg.setDestinationEntity(157U);
    msg.req_id = 27242U;
    msg.destination.assign("UQPSIFSYORKXCDCFVHERXKVJQGCHHNZTXRXBGSSOLNZEACZAV");
    msg.timeout = 0.1203617956987919;
    msg.sms_text.assign("CQTBAUDXUOVKROSYPIPZYWKQJZBGBVSZCYUKZQRIBVBFPASRNWONMYSZDIHVOVVUKOCIDLTRWSEDIMCRSIUYGAZJFRWYYEGNHMPLAMJDAQVHFXUBNLVZQKWJYBKADLKCEAMLIXVGKPTEESGEFKCGHRHGQITZBWXZJDNXZXJLTLNWOINHRODL");

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
    msg.setTimeStamp(0.835016772247219);
    msg.setSource(16154U);
    msg.setSourceEntity(165U);
    msg.setDestination(27979U);
    msg.setDestinationEntity(10U);
    msg.req_id = 13228U;
    msg.destination.assign("ATNONCNPONSDMQTIVZC");
    msg.timeout = 0.6515051839299837;
    msg.sms_text.assign("CFLKKPCDNAIHSXHZNVDBCJATEWVOINXIJXNYHYJTZPUUGDFEWNWKYJCMOZQTRGBYEHHMBNAUZLLRAMQFYKLOXNRQRKZQYAGRUZQETJFJOCFCSBGOXMPQIYWGVFHQONZCFKYGSJZTSJRRDRNEGWBCTKWYEBOXWCLMNVEJIPFXIBPMHILAKUMSFVKDKTQOWDPVLACGHASXVBLPISTBOQMXYQVPVJTUZHEGLSHUZARVEIMTD");

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
    msg.setTimeStamp(0.18485671127144043);
    msg.setSource(40734U);
    msg.setSourceEntity(133U);
    msg.setDestination(35714U);
    msg.setDestinationEntity(193U);
    msg.req_id = 64197U;
    msg.status = 9U;
    msg.info.assign("CKQQLCEISRARVKCHZYIJCDQFMVLMYPEFP");

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
    msg.setTimeStamp(0.532581982401688);
    msg.setSource(64879U);
    msg.setSourceEntity(18U);
    msg.setDestination(51476U);
    msg.setDestinationEntity(90U);
    msg.req_id = 25911U;
    msg.status = 86U;
    msg.info.assign("URMDFXMNDDGCEITHVSBCKTUUHRZYOSLPPTLNQGNYNAZUVRJIVBMYPYJXQBHESDWMZZPKLTQNFNASGXRVFRVETOSTURKJCCVAIBHVGZWWFMROQHUXSGDOCHXELBQUOMYUESPFOLZQIYGSNOCJFDTOZJZVTIMDUJKKXYFAIEQWVCFHIBPAPGQGSBFBUPOQWXLM");

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
    msg.setTimeStamp(0.37964828010761986);
    msg.setSource(59063U);
    msg.setSourceEntity(87U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(201U);
    msg.req_id = 7941U;
    msg.status = 38U;
    msg.info.assign("EUUKGATWTDFWLVGAJOKTBPSVYPSVPIUBCDDHKCHIHJDUWIZMEIAOWVNCTPZYDOEBKAYTLFKXEKYBAJVIFRNSXKSSMKVBSTEYTGZQCWQQNRTHZADWXCONLRMGKJUYHFVOJSRZGPRTIVCEKCDRMXWRRYUAIZXTLHBZLPEIOFBFIQPCAUJHCVDQLDCMXMQZOPNQMLFHHQ");

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
    msg.setTimeStamp(0.7165237267958754);
    msg.setSource(21864U);
    msg.setSourceEntity(72U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(36U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.8486242154545373);
    msg.setSource(64867U);
    msg.setSourceEntity(3U);
    msg.setDestination(37557U);
    msg.setDestinationEntity(190U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.09227033062951306);
    msg.setSource(39831U);
    msg.setSourceEntity(116U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(146U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.05340901718372071);
    msg.setSource(64600U);
    msg.setSourceEntity(253U);
    msg.setDestination(34343U);
    msg.setDestinationEntity(92U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.10750009440552866);
    msg.setSource(3675U);
    msg.setSourceEntity(222U);
    msg.setDestination(27260U);
    msg.setDestinationEntity(107U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.18542454637029637);
    msg.setSource(22226U);
    msg.setSourceEntity(42U);
    msg.setDestination(25218U);
    msg.setDestinationEntity(88U);
    msg.state = 248U;

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
    msg.setTimeStamp(0.9263027555075278);
    msg.setSource(57011U);
    msg.setSourceEntity(240U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(124U);
    msg.req_id = 24534U;
    msg.destination.assign("WVDDBSDEFNDGFYJZKYVLFCNOESJHBTZVTILFUHIVBOZLTPRETPNUDSPSQPKXOLUAIPBSFLOJVDAURXAIIPXJXJMQWMFAHNXTAKPEJRKBUBPTWDXVANKKZFTVZ");
    msg.timeout = 0.8752288943931357;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.6847699540162772;
    tmp_msg_0.lon = 0.332280788945169;
    tmp_msg_0.z = 0.2891850398512228;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.radius = 0.7891546405715353;
    tmp_msg_0.duration = 52410U;
    tmp_msg_0.speed = 0.732833480824989;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.popup_period = 17861U;
    tmp_msg_0.popup_duration = 54309U;
    tmp_msg_0.flags = 211U;
    tmp_msg_0.custom.assign("QPOSAQEZFNTDNSZPIGYWBONVOHKLBXFCJREYNFPSDNYUSJBVMKNSUQDAKUEJUDEFAFVTZIMASLUDXGIVROGMDCKXHZDBWWJJORIWTLZWBMLGXMWFZBIZJCGGTHFQIUPMWGXTKIBERGUNNSVAKRROLSZCDPN");
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
    msg.setTimeStamp(0.5004606863373605);
    msg.setSource(64133U);
    msg.setSourceEntity(210U);
    msg.setDestination(58794U);
    msg.setDestinationEntity(10U);
    msg.req_id = 39681U;
    msg.destination.assign("GXNKJVXMFACNJJSQZDBBJVVPCGQDBMVAFNODRKMSHVWNUITPHEGRWMHFKDUUHRVNPVEIADRBZBYAFQITTTXAFTGLIZOPGQZYXGIYZHSTWLICFHZYSTHCVCDPLGXXXEUWOLXYJBNHQROAKIIFYXNZDETJWSLSQDKRLOQWWAKIFSCYXUSKLBRBJOVBSMPCJEMSAMEGOTEJCAUEOHOWMBLUGGLQWFEKPRIZFNEWLVCYMYQUNN");
    msg.timeout = 0.5796863554768146;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("WOPCNGHJAEXKMBUOWAMNMTOKDECEGQFLUDSBQZQXPUYWGTGOPEARCOPVMWIHULTLECHXTQOALSFKAFPUGBRUDFUNJYHDZJDXXCMBJKDLVPZOVIPMURTVSIWRTDLRYIDRAFKNXNCXRNJQYDSGEINLTNOVWBFPALYCYJGWIGSTMZAC");
    tmp_msg_0.state = 121U;
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
    msg.setTimeStamp(0.6518115720427416);
    msg.setSource(11587U);
    msg.setSourceEntity(228U);
    msg.setDestination(59536U);
    msg.setDestinationEntity(80U);
    msg.req_id = 13740U;
    msg.destination.assign("KBFQYIOKWCRCKEFHAQTQVYVHIRGPXDYTATYVUZTPACWISFGAUMXUYSGNRZTCOGEMESQQGLGPUHDSZZDQJMODMIRLIMECIMWKTZCEVBGZDMWISKTFULMLJGNOLTGJJZAITWFQHFWHDOJUIROQNKKYAXUBKRVUFDJPL");
    msg.timeout = 0.40883962622864456;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.6141804866960914;
    tmp_msg_0.speed = 0.19522918295941427;
    tmp_msg_0.turbulence = 0.06564311503647613;
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
    msg.setTimeStamp(0.3298795122415409);
    msg.setSource(31817U);
    msg.setSourceEntity(13U);
    msg.setDestination(40304U);
    msg.setDestinationEntity(242U);
    msg.req_id = 10391U;
    msg.status = 29U;
    msg.info.assign("SVJHUXAZTQYDLFNQEQKLVOFXUDPOBKPCJVCHSHRVISHZPULTNAMAFIRQJMWURPJIXHYKEUTDYKKWWUNTJGEONGACWVHZYDIZSLPTNXYLGEYMLMSXGIJICYGQENYFBHHXSLSSBLNPMVBBLAHVZNAAZDDOFKCTGVAFXRGREMQRRSDEJVBGNUFKBXWOMIPYRWJJBMWTCUTWQL");

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
    msg.setTimeStamp(0.7528498506270218);
    msg.setSource(8078U);
    msg.setSourceEntity(136U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(230U);
    msg.req_id = 57424U;
    msg.status = 88U;
    msg.info.assign("DRWSGTMEVSDWFJRRAQWNZCICVHNGRDMESKJNFVILRGZDXFYRHXCNPDZJBETLJJJKQTNENALYMHBLDVVOYGOKYGCFINYFLIMIWEBATVQQNMATPXMYPUW");

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
    msg.setTimeStamp(0.42292136440310923);
    msg.setSource(42206U);
    msg.setSourceEntity(87U);
    msg.setDestination(62814U);
    msg.setDestinationEntity(47U);
    msg.req_id = 61036U;
    msg.status = 107U;
    msg.info.assign("VISIMTSWKXNYYIEXQUIOGVWWMHGAEOMDNQZSDFRQNPDZHCGGCMKQJHTOLCXRONFPJWLISZPLXJPNRWONZQWUZULQCSNHIDRVFBAKMLRBMQCYNHPBMYPEBDKZFKVAXBYUDYVEUBRVCHANAGBYCFXEPNJXJTKRX");

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
    msg.setTimeStamp(0.8114066371223304);
    msg.setSource(41626U);
    msg.setSourceEntity(185U);
    msg.setDestination(57559U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KKBWVPQIQREZUBVNXQVCYMRWWTBQUONNSUOAPAWZPLSEXTJZAMPULLDRLXMOGFQXGINQOOVYAFXMDJIAWCUFHFIAGYRCSHRJYIJ");
    msg.report_time = 0.10591887313276283;
    msg.medium = 99U;
    msg.lat = 0.19113443803564267;
    msg.lon = 0.411075851658135;
    msg.depth = 0.7574523520580543;
    msg.alt = 0.8538660694598625;
    msg.sog = 0.36195186130077417;
    msg.cog = 0.875346522377959;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 49898U;
    tmp_msg_0.custom.assign("KKXSKRENBRRCOUFJHUKNKUIBGPMEJTONYMQCBSDNPJPJXLYZOYWJXWCLQYMYGFYMHDBAIIHWWRGQSVZGVEOLAQIXPPVVMJDTQGTODWYLGNWPUXPXNDECWEYVGFAIDIQXZXISQDAHFEZJTOGDJVBTQGKMFKXATWEXILRUQGWFWBZRKIPCVUENVJELRLCJSCBZPTLCTHHRPFFUHKAIBAVOZAKHO");
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
    msg.setTimeStamp(0.7947021013116596);
    msg.setSource(8265U);
    msg.setSourceEntity(86U);
    msg.setDestination(22478U);
    msg.setDestinationEntity(225U);
    msg.name.assign("LDCCBCHBJZORGCKRTTPHQJKQGVVNDJYPODGKUDEQUMED");
    msg.report_time = 0.16020807891180755;
    msg.medium = 47U;
    msg.lat = 0.8126255396491562;
    msg.lon = 0.07197609013873651;
    msg.depth = 0.589075335297714;
    msg.alt = 0.9117507385024541;
    msg.sog = 0.128783962729207;
    msg.cog = 0.8773550952864834;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XREBIFVVINDTJEBHYVKRNAESZQIKLARRAUWCWPYPJYGDWGYVNJHTJAGHATKLLZNGVHPFXAKTVMWMQKYWRSKGSIDZCQHXCNPOPUNDCOSHBJOTJCIGLDIGRDWDUHFCSOUEPCKBUETZXMVUBWBZMEZOJSFFHUFLZKUTSKOFNNLKBRSAQYAMMHTWEQPAFJ");
    tmp_msg_0.value.assign("URKSRTSMMSAFHKQUPWPHRYBTVPSGMZDEHZAIAPYUOGGKQGUJXJPAFWQESSDDFFGJQPFDGZFZGOXNPTCRULJOOCBREDBCLPHOXHEYKVSKBIYSUBHHGLNTUYHJTVREKJWZEGUNOWNTLRKCXVSCLZIMIJWXJIQXACYWXBJVDIRKKMLYLBYOAFDVCIMAZDPBNWWMNXPFVZEIXMCALWHMQRAVDIBNTNLKOCYQGMZXTSQVBRCOHAYDOJQEEUVUNQZE");
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
    msg.setTimeStamp(0.9669824102642662);
    msg.setSource(50856U);
    msg.setSourceEntity(0U);
    msg.setDestination(31949U);
    msg.setDestinationEntity(97U);
    msg.name.assign("HWNFONFMCGVCYDUYUJYFRBCQKMITFBBRAPYYTANRHWIQCOXWXAUHMYLLPRZCLQDXEDEADTJOCBNYKOQODYXVHRGWMAPLIDWYRFSOEZMWPSFGEXZSZZUPCXAGVPFGQCLKMIKNIUSWHSCRGSIYEWKOZJDFOKJOLJTRBHCBAXTMPRDJVTIAEMZHJQKVVMTVSQVFIVGARWBZPBOAGTBQKWUNJJXEPMSUNLUBLTQULGIUKNEIEJ");
    msg.report_time = 0.7828442205434204;
    msg.medium = 226U;
    msg.lat = 0.8162613717381556;
    msg.lon = 0.5182941975252966;
    msg.depth = 0.7102233060438041;
    msg.alt = 0.24467409999377554;
    msg.sog = 0.2744894360379929;
    msg.cog = 0.5000125228553384;

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
    msg.setTimeStamp(0.8139711844441976);
    msg.setSource(33161U);
    msg.setSourceEntity(173U);
    msg.setDestination(26412U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.5809313632612555);
    msg.setSource(42105U);
    msg.setSourceEntity(247U);
    msg.setDestination(57386U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9168111522490718);
    msg.setSource(52951U);
    msg.setSourceEntity(12U);
    msg.setDestination(10727U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.12689894035999816);
    msg.setSource(52945U);
    msg.setSourceEntity(79U);
    msg.setDestination(17198U);
    msg.setDestinationEntity(17U);
    msg.plan_id.assign("PUPYIYBZGFTUXAURGDYQTRFTTUOMZSTYNKAIAGGWPAYJDTLRSSKZVOQMZCJXBOQZQQGLQWOJVDETEMFTRORUPNHVBHQJGCIEINDUCYQCUDDSKRRMWQKCVRSCOHFUENLDTPNULXLQXWFXSMIBBADWXHCNIEMSWLNEEJ");
    msg.description.assign("MGHEEOUCCAGANZMKNZNLFMPJAOSXRXJKYPMKIRPFUUZSWIV");
    msg.vnamespace.assign("XNZQBUSXHOJOGVDBNSLZPETJKAQGQJSZNJSGHFBFXIIQEYMHXFQTKWETRSRPANBAHNIMOLOCOUEUYZCIYGWQCOOUFVYKDZTNHYIOWJJBNILDRLKKGLEPIAVPKYPEECNMKEBXFUZWFWVNRXVUTUDUAYMRVDBRIBQHXLFOCFNPREXJJADCTBKWHVLCVMZWGTJOPPM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RIMZYCSLIBZKPXPBTYZOMHRYRFMQDQOYRAQNOZRJFWFPNHMNHVSMTPLCEEABIDOMWKPTXGNLRKTJTCUSXAUUHCKGHOZNOPDNDVXFAGITKNYXJXPLJUEAFVWHDIBGWNYGLEDORKAYSQBOEDJUUXYSFVJMSNUZLVEEAUNHQHKCWIIIKWX");
    tmp_msg_0.value.assign("EGBZUTIURNXXWTXPQLQIRIKFSNQLQFBPFQGRORPWQZFDZDCYLIEWPELSRVJNRYROSDAIUKDITHNVGDBHLBQCVYNPEUZC");
    tmp_msg_0.type = 134U;
    tmp_msg_0.access = 127U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UKTOVLZVZQKUTMBXOTAZDQPQDYXVJBSMJVIYEYPSEHIAONZGIJVGMCZEFNSAXOPRKFHDDBSCPWNAJCEUPVAKMNOPGEODNHRBNTURFPTXROQJWKVZRCCWAAKBFAQKLXWGFGVMIMHBJMJFXLZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VDVTMPNSNZWUGDJASMECGOKOILOENWCIVURHSCDNMWATYQORDTRZCWQARIXPOSRHVUVFQPFRVHOMCJBPKZKBBOSIYLJVNGEJETPBAKLTUKTJDPMADCUPLXWALHAIONWBYGHUQPQLQQXCZSKKLKBNEWUAZSHRZXSXEFLWJCPIXXVCEVZYDGGZWQKFGRTGJENNGBMHQYYTFRMDLZOFTFOXIXDHSMVIPMHXANEJRZUAFQBIUUHEBIYYDYS");
    IMC::Land tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.8649435013662248;
    tmp_tmp_msg_1_0.lon = 0.9879725640418607;
    tmp_tmp_msg_1_0.z = 0.8387327174554122;
    tmp_tmp_msg_1_0.z_units = 250U;
    tmp_tmp_msg_1_0.speed = 0.3245697992626948;
    tmp_tmp_msg_1_0.speed_units = 50U;
    tmp_tmp_msg_1_0.abort_z = 0.5321748700243294;
    tmp_tmp_msg_1_0.bearing = 0.04216081554351836;
    tmp_tmp_msg_1_0.glide_slope = 238U;
    tmp_tmp_msg_1_0.glide_slope_alt = 0.7277966173795557;
    tmp_tmp_msg_1_0.custom.assign("HSOPILFZCPOGHITKWBXZTENUEGFHIUSIVYUYLXNMJVREFBROSFUTRGWOWRHZMTAVAJMTXQLRKQBHJXNSKRGLJYSOGBO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("GMLKADSWTMVFD");
    tmp_msg_2.dest_man.assign("OMITCIMMMRNAFSVUIDUFXFHRQPEGYOJEHTGFHBD");
    tmp_msg_2.conditions.assign("FYROJUVOLCYHPQVTVAAQHMLVFWXECALPANAJLUUICQKXSZPSQRAHBXOMPMFCDKGSDYHONFYOJZMKDBUXTLWMUFSOAZUZDDLKJFGFWVJQHOPYTRYKZUWZBFBKWPNHMYDEAPTHSDDKOVRZTGEJENOUVQRNCEXW");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Displacement tmp_msg_3;
    tmp_msg_3.time = 0.15615674408975433;
    tmp_msg_3.x = 0.9563030814598641;
    tmp_msg_3.y = 0.9540140677211921;
    tmp_msg_3.z = 0.6514857863615622;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.8239555017022534);
    msg.setSource(8354U);
    msg.setSourceEntity(99U);
    msg.setDestination(24974U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("KKSUUADLOZPRAVLKNUAKDCEWXJEHVZMNVMNQBOMKLRLFIGTDCGQJSYVNJQSBDFNOAMHVRPUTUQCTHMQYTRYQQLABIGOJPAYODIPGBUGPJKUHFHVZLVOEXVGCAPWQRJFAHLTUCWPTMZVUSBWCBENEDGTHCMIMJSFXYIXNWIBOYVTLOZDAKYWQSZFBKDUA");
    msg.description.assign("USMKPFQWTZIQQITJNKGPOXPXKNQWSVWSTTUHUBLGAXYZRHNVUTAFLGQLIWELWEIVGXEJKCMPHGDEMYDNJAGZQQJXWUNYRVLWFYLGQKKV");
    msg.vnamespace.assign("MDRCQYEXECHXXFETHNNKHTTDBJIGFSWLAVIQGAZZDANWDOFEYTKMZKMWTNGVHYRSHZAVTIRRWAVJEYWMWSZRQFIPXKNBYBJBJCPQQIEPOFDGKAIQZS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XVPWRLSQJDHJGWLQDIJIG");
    tmp_msg_0.value.assign("REPADEABWBPRSQXWEWNGQFHFKDZMHKABKZYWYHPZARHISYCIEGJOIXPSZUKKTEFMSZXDNFDPQGHGEUXCFUTRTYTRKIDLIANEDLXAYOFYBDRWDBOOYTCVNMPIUOGICLNGRFRMWEQDMTXNWKCSTFBJWEJQQJKCUZNAVBILGSLGXOPTQKCUMWANRTLVQCIZNILMVCSFZLXOBVVFJHU");
    tmp_msg_0.type = 249U;
    tmp_msg_0.access = 93U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MTUNPBPICGXAHQKBFSCWVHUWCVKWFLMHRAWOLTFDAVOLASQQAHGEQMSLZTLYSZVYEKPGVZJKIIAQGWXYAELYGPIIBOOJZRHLAXTMMPNXUNNBDEJPHWDKDYSJRICUXGARRJLTOHVJMYWMRBETNDDPRCRQISHZPVXEEGDYUKCTBSGBTOIXFORKENWDGSULMDGFFKXXOVUPSJCVKVMNLZWJFU");

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
    msg.setTimeStamp(0.35738126480384624);
    msg.setSource(10112U);
    msg.setSourceEntity(215U);
    msg.setDestination(29262U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("DQUTGXSFVMGQBRLDHBUJXACZVGITAUPRJKPBEYQVRRAMLDCHFUWDOIZYIGHPLOIKZLNFQKBVDMLFBFSASPWYZTYGAHORDBQFXENNMFPIJHASDSOZHMXLAWGOCVREKFTUEFTTVSAYSYPWJRWMZHKERWOTDNCYRXENNHOCUNVIIQSWJCXBKJQNCQEZUZCPMOIGTWLAXJ");
    msg.description.assign("BINGJESTHDJVRTDCLMPRPKYAPJE");
    msg.vnamespace.assign("GLCVEUZYFQXMWDMLWLFBTXYRBPAAGCDRCEEPXVVPTRGAICISYHTGNDFNYEPJAZHNKYMOORWQZUOBEWLABSCUDWIPQUMKXIBUXZRMDJCLUFFDRUASJUXHMTVYQQZILNLAUHJKEQGQVAYGNMOKXLFANXKBOQJPDWJKJBULSQITVJFWNOTOBCSEZVWEZGWARDKOKJSTFTMHQSXOCEFLIWYDNCSVMXVPPHRYKGHZSJRTSF");
    msg.start_man_id.assign("IJAUFVJUNWDYTQMXXMRHCNKPZBICTHFUCZAOVKQLHGPKCNTSQCHNXINPPJPKELINYHUAEDFWMRBBENKYVRDGSMRSCPMLSVRIOOGWS");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DMOCAWFMSSTKEX");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 4221U;
    tmp_tmp_msg_0_0.custom.assign("HJVSQFCPMAGSFMOPAOYPYVVWDBBPEGEWRDUEHLRFKRGCAXACIWLREVTRDEORMEFPHCUUAGITLJJKWKCSBXDTVGIYCTQJVOOKZRDDSQBYXFIUKNIZIPTQFMXPJNMEOPEDACUFTKHUNZLCMPWZLSXVLYIJXSOQKWGQBSZNLHFBTNQGSUZVUJXNNVUMNRTBYGQRKTCHBFOAKGDWEZX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DvlRejection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 102U;
    tmp_tmp_msg_0_1.reason = 203U;
    tmp_tmp_msg_0_1.value = 0.8102724725416597;
    tmp_tmp_msg_0_1.timestep = 0.1340114945303309;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RUIIDOVMWDNSGUSWFPKWNPAJEYJCZEEZDKLCGDJLTVYLJVIFITXPHFYLVDWENHMBPOTBIY");
    tmp_msg_1.dest_man.assign("DWEGSMYSMOSUXTYXZFPLODQKBWLQBZVBKYVGOAKTURCKWQXZTKXOOHMUXVJIZXQZNDLMQDHWRPDAKQBGWROJZBXCEDFJMMUPHRUWSYEITMANBRRFONSDM");
    tmp_msg_1.conditions.assign("KCQYEJAARGWBTRNSCKELJRZDNDSJAGMYQKXLUGHRXCKDELCMAPZNGYFISCRPWDGPBMDQWULMLWLCZONBCSXDNRUBPUWPWCUQIFFNKYXJUEVYMKOFPMKMZTWRQSIXEAZGZAYVJADFO");
    msg.transitions.push_back(tmp_msg_1);
    IMC::RhodamineDye tmp_msg_2;
    tmp_msg_2.value = 0.05613660842365442;
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
    msg.setTimeStamp(0.6825994188409691);
    msg.setSource(22327U);
    msg.setSourceEntity(234U);
    msg.setDestination(44353U);
    msg.setDestinationEntity(113U);
    msg.maneuver_id.assign("TFRDWLWQWPYKBGPEIVOZJYRAJAGMXEMQBTSHOEHZIZOLYCSFVHUGNLFZVNBNIMGYOPUYNIATQRQIKMCWYCYDLGPPJVFZMJAFAPJIFUVREPQRYHAEHFRSMAQVTDHJXUBHKWZDNSABLILZTDSKDQNVKAYUUSSMKRCBJQIXFMGSQEWADGMTNXWSHILNGNVLOCFBOLXKWTCJKBXDYDTMKHUIRTVFPCPDUOCOER");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 54994U;
    tmp_msg_0.rpm = 0.4553833223374192;
    tmp_msg_0.direction = 241U;
    tmp_msg_0.custom.assign("EZXDEUVYQMJKSBTLJWFBZNMVWEYSNEXPDWHGHQLSLRJONEKATLXMTSJGYZGGICJAVRBIUINHBDHWZQXHZFCSPZIPVOFCNYVHFMOHEYOCJCURLCARKNGRUBSYFFKTMCJAUZSWWVIPNXUXNQGQQYGQMBDYDIWKUPHZSYIRRBPJMCDWLEBPVMTQGNXLMDZTTFMAXPFIHIAXYUBKAEEKUWDZKXVCOSOPKTUQLNGGSOCQRA");
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
    msg.setTimeStamp(0.14944267740405093);
    msg.setSource(26439U);
    msg.setSourceEntity(49U);
    msg.setDestination(24590U);
    msg.setDestinationEntity(189U);
    msg.maneuver_id.assign("GNPNLYXKOIEFHHNOWEDFJVJUYIYIOCSTZMAVUPLLSTSLDUXVHADJPKQXXLJIKYRDIPEMFDZJATGYVVBMUMWNUIKWHSADYQEMMBNTONIITKVECPRBNPZSWNSEMKMZELUXDCACGBUVNPACGZHYUFPHAZXHRLXXGWILBABXDRVFSMY");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 50155U;
    tmp_msg_0.flags = 55U;
    tmp_msg_0.lat = 0.8731195418355215;
    tmp_msg_0.lon = 0.84898928248665;
    tmp_msg_0.start_z = 0.8659440275334275;
    tmp_msg_0.start_z_units = 97U;
    tmp_msg_0.end_z = 0.6779786334085881;
    tmp_msg_0.end_z_units = 133U;
    tmp_msg_0.radius = 0.13854449233345023;
    tmp_msg_0.speed = 0.8455963201748355;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.custom.assign("PSIUOEAMEPAZVBQFZWODFKRPSNEDCDZEXDBCYTINGFHOQKKDPPUEXSFHCLGONVSQHSZZQNNVVNVPCRNMVTERYKTYEHUWOROCBJKWFFDALRRYDGUXGRCMFWYGATGKROBHSGBLNATWXMPIVCKJZZDBGFCTWUPXMQJBOJUPFKHZITZIOMMHNLVYIIABQKLASITXWZWHL");
    msg.data.set(tmp_msg_0);
    IMC::RelativeState tmp_msg_1;
    tmp_msg_1.s_id.assign("BEKDKJOQSFIJOPMSPMADBFOAXSAJDSCOOWSWNWBUVQEJVSWLKNYAXHJGTHZQIULXNMDGZKNKXBZZOWUU");
    tmp_msg_1.dist = 0.5069502045386602;
    tmp_msg_1.err = 0.08755697160601372;
    tmp_msg_1.ctrl_imp = 0.13833770203100948;
    tmp_msg_1.rel_dir_x = 0.9578330532995025;
    tmp_msg_1.rel_dir_y = 0.7304538560251302;
    tmp_msg_1.rel_dir_z = 0.5356292078371452;
    tmp_msg_1.err_x = 0.15026130308893648;
    tmp_msg_1.err_y = 0.3856470115041929;
    tmp_msg_1.err_z = 0.772338060712643;
    tmp_msg_1.rf_err_x = 0.8911026137724075;
    tmp_msg_1.rf_err_y = 0.9882437953299973;
    tmp_msg_1.rf_err_z = 0.23402577957779735;
    tmp_msg_1.rf_err_vx = 0.6735981112464903;
    tmp_msg_1.rf_err_vy = 0.202654243749951;
    tmp_msg_1.rf_err_vz = 0.036323832311426996;
    tmp_msg_1.ss_x = 0.5042385326268135;
    tmp_msg_1.ss_y = 0.2270547908225684;
    tmp_msg_1.ss_z = 0.6364211274897943;
    tmp_msg_1.virt_err_x = 0.1740963975030908;
    tmp_msg_1.virt_err_y = 0.9517869172113809;
    tmp_msg_1.virt_err_z = 0.8109001666435868;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.value = 0.845703333163652;
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
    msg.setTimeStamp(0.09430229116074818);
    msg.setSource(31718U);
    msg.setSourceEntity(89U);
    msg.setDestination(57757U);
    msg.setDestinationEntity(162U);
    msg.maneuver_id.assign("ATQDLTMDSMFZCAMCFRCOJJPRYQTVSWVPKXMUCGIPZUOVKNGXHYGGUHPELZRZRVLUSQPPKRENWEVAWIBGLDHVSEZTVQYIWZGXWJGYXHYZOSUHTQHBBSAHORDJNFXWBFFIGOBLBCXUHUKJOULBRNSMBQCFTAGOJSQCCNKXFDLJVYIPMTPIOXAWWURDMT");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 32895U;
    tmp_msg_0.lat = 0.4565724885617307;
    tmp_msg_0.lon = 0.8731614902500648;
    tmp_msg_0.z = 0.43520177640666646;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.44905813860102195;
    tmp_msg_0.speed_units = 55U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8080156498561213;
    tmp_tmp_msg_0_0.y = 0.8280997365567968;
    tmp_tmp_msg_0_0.z = 0.908127342809667;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PTXMBVYSFOUENZKMYVOZJPIWYDZRHQZWBZKUDRKWNYZIRBMZBPYKWZYRPWNSNRDWHFEBHF");
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
    msg.setTimeStamp(0.5376150333272587);
    msg.setSource(30119U);
    msg.setSourceEntity(56U);
    msg.setDestination(41902U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("UHGQVIYJFVJNCXEUVQSPYKFZMUCOQDOOVHTIPGINAPBELQLMVHNKOVYZSCISMWBQZFCMBFTYAVRBEI");
    msg.dest_man.assign("KSZWBCTDLHDJHUIIFEJASXPWHTZBTKZXFAHDUXGZULQXKDFBUWNMLSFIJLEETZFVPHIUOQGOHOQLENJJPGCSFJANNSYOCGGCTODKYENSWYROQPVUKMBLOSUTEQJNXGMWSNWQMRIXUCMDFBM");
    msg.conditions.assign("SQOJEIHYBZXCZRWKYNKNDOWIYMFBKTVCLDXLOAJKGRJDCVVUFBCENAJETSMTNQFKTGBVRI");

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
    msg.setTimeStamp(0.38179939070298785);
    msg.setSource(30973U);
    msg.setSourceEntity(161U);
    msg.setDestination(24132U);
    msg.setDestinationEntity(128U);
    msg.source_man.assign("BRKVFQOPKNYHLNBZWEJGKFYDMRRWIWNBODMTASKOSYAALGJTZDCVPCGAIIHJFURZRXFEJWPNVQCWZKBUDCOTAMDLRQKZKTTCQIUVZLPNOBVUSFQUKHSWJMZIGIJIBPUHIHBAXQUDSZXSYRXXKEJHQAMPMFYOXRYJNWWCTYVVBNLTSECGPDITONTOREZGFSVLVDAFWLHZDWYLSIMKNMUFSJAGXPDBEEOTGVBQMXNPEYHXOMLUHHURXFLECCJYQC");
    msg.dest_man.assign("KDSAVPCWWCILRZFZSXAGYLKBZOAKJGEXYBRIMTIALMYVFJPRDNJWJOTEIDDEMGRDHFRIJNIMBRUGCZWSVTOOBUDFNLOAKCGMGNEXNPQBVRGKUEOTHIMSRYMVMBUUXYWPSNQNWRDSEXRVHFTIPKQNVUYKTNXIPHKEGPSSKAQLHPJCMJYOGFACZLBCIUTTYXTKXYAUJHHBDFTWBDXWMLVZWZHQEOAPLYUOWFCHOQZZQSJCGVQLBSFJEV");
    msg.conditions.assign("WOINUNBDCGYSHBERUMZWFXUTSKTXGACJRMCHPYHNCMOCIVPLZOZUZPB");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.6679724021030842;
    tmp_msg_0.y = 0.7144916229826622;
    tmp_msg_0.z = 0.6954892751536765;
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
    msg.setTimeStamp(0.1786408990405941);
    msg.setSource(63422U);
    msg.setSourceEntity(229U);
    msg.setDestination(35670U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("LKZVFLZHQEQGGBGKXDBMWWARHTJMKJGIMCOVGQIXENZLPPJKKJDZDMMFRAVATVWBCRAGKJCYTPWVEREVEUNAWXIDMOSAAQBHGNCYNXFHHZKITPVPZZHBBJOQHFFLYWMEIDSCUZXJOAQOUYKAFEWIWPCTYNOOESARBMXCOSBZKNRKJRUNITJRQGUSCEYTDPFLLRSHZMQNYSLVYWFRPYNWXDQUUMGOPLTHFF");
    msg.dest_man.assign("XYWCSZGLGODNPPEXXUIUVBGNKCBPINKKSWEHDJCKROGNZZROSFVHIPDJAQJLPIHHBXTTJYSTHBYOFCLNOGSUCVTIWMJHOASTXIZLFTMVERLHMNPCKNGFVUQCADZFWWNKSZXEDQIRAEAMVEANEEWASLMMBYWQRYRGJEKOIXAQVBPLFQXQDCDMSLRFFDTGJGFXJBAUSZJBKUPLKFTYCDBVV");
    msg.conditions.assign("YBYVOKKMTXUSWAUXIFCCVRBJYONWLZBTWNZMNYHDEOTYTVIXHSRGJBKVOUSYWOZWIRXFHTCVHFMORFZKAIENVVAQXNYLVUCNSRIDABKAFCSNYNQPEBXWZNYDQHMRTXS");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.29377840008069156;
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
    msg.setTimeStamp(0.25816083505039356);
    msg.setSource(62676U);
    msg.setSourceEntity(5U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(104U);
    msg.command = 145U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MGOUUBCJWWYMXKGUTMRWYLBWITNAEQHOMLNPFBXQKRWZDXEXYFKZDPUTICMYJSWNZGKJQNSHXUPAAHCDJNBFAFLOSVUQTIODSDNTNRVUUFRJOQRFLYXTMKDAYRUPTQETFEBQLNWNEGAKIVWEBZJGCOALBXSPHJMGVYBSLX");
    tmp_msg_0.description.assign("ICTLKPJFXLQDIBUIAJTBAXGGFLQFYTKJRHYDABQPBZQHWOEPATXBCYOYUBFYLQUXEVZROSJPOZZBPQJAILRXMBGVIJNDHKKSEMRZNQBJHDOHNNRRSVVSSCKTRXQKFZRLMOBYGNMIPJCLDOFHUUDDTEGFXEUCHWRSWVXP");
    tmp_msg_0.vnamespace.assign("MOJFRKVORJULAIWMCVGOLLOYDVFDZFEBCJTPCBBFIMNSYKPXEEZEBNRLJEHKAUVHCQZOGZUQKWSOPQBTSIJYYIIQANSNNDVDELRGZFTBDMOYWLCZRVL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QRCISFYITOCUZMSOBEFZFCPGGJBAZXMMBTYLYEAHRRIEYHYXQXPWMOHFSDPMFLOJBILHDVLVSJUZYGIA");
    tmp_tmp_msg_0_0.value.assign("QVFUDMYGXXYXTUKRKQOJTSBNRSLORSOIJVSSJQYCKTBIVAGPYRXLCRYBTWHCCRZIXNBEKAXHEUGLIBOYKJMFVAKVHZNE");
    tmp_tmp_msg_0_0.type = 20U;
    tmp_tmp_msg_0_0.access = 132U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SWDASLRUSOMDAGMDQPQKZFYUNHDLVIQFOTHMPTXIJBVINYLBDKCOALMEESBEDSBYMPKJYGPVGMXSOQMDZPRBUFCJINRIZSLLGTFWVTOHXHOXVKUNEERASJIQNUFACGPJZNCVRUSBLENCFXXFUGPMAAEJECQKTQOTTCMZRNJYHGYKBDNCRIYGVWBOHB");
    IMC::AbsoluteWind tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.direction = 0.40295204987168687;
    tmp_tmp_msg_0_1.speed = 0.6149391025731118;
    tmp_tmp_msg_0_1.turbulence = 0.3325383200996326;
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
    msg.setTimeStamp(0.19403216648482324);
    msg.setSource(6701U);
    msg.setSourceEntity(34U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(60U);
    msg.command = 135U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QPMGHXNOJYYSEZUCJZXBCJVUKHLVBXOHETBRGEDLGZNRAWJFRLAHYQNRSBOJALCYKGYGDWUMYXPFZCVMTMDIAZEBHVTOYRTQTMHDAHQRJPIUPSXFBNNBWLAEKXTTCWJGTIOEKAPWPTHELKBRCFIVMDFZDPWRGDUZVPFIXVXHPDSXOUCJNXSQEFSWDUDPNMYCSWWSQOFN");
    tmp_msg_0.description.assign("WLZZUIDJEJXJUQTKKNYUVVBLOCDMZTTGLRKBXKFFHWGCSHGJTODTKQGJITZVXZSAFMXTYUSKRRWPYQIBUOVYCYFDEIAXWSYLQRDXYQPPUMECDWMVJXGDHRKRODSKWMNGBPBRWYVSBOGCUHSUAYDZEBISKINECF");
    tmp_msg_0.vnamespace.assign("YHULZQGQGPHDCENBLLBEFZYOFOEBHRVTGARNDJXAEUDDDAFEMYHVQBAKZVNIQVCXSXZBCQMDHLSRMMPKFSOEMSHNGQJJBHXIBRURUWIXTTGNZSORPYWQNCWE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SGAIGMGSZKRWGBLWPXAPFUUMCPXQKMGCDYVDSKKOGKJJLHLZEWSYWWQAHBFRMSHCVXSXPVEAEOOUHBRJMYMJUGHANNIQSEWZBCNOLFVDNFCPFQRBSCQFTVIJETMSKUXHUISQWFKJLAZVBFQPCHDXFOONDBNQYJZAGNRHYUIKUXGAEKJXTZUYXAWPPWNHWYTENTDMELJMROIOTDNMGVYYIR");
    tmp_tmp_msg_0_0.value.assign("BKIEQXVBPKRDZPDNGTEUTSNZZUFKJBOULAHNCKZSNUAQOWRYFRCBWJNIZKPVPINIHAQTVFVFGBTRSBJAIQLJOZJPQURHAYKERIUIWKMSPSDFLYFICYTHJPLMKPOYXQVYARYDGFRSDVSBJWODJALUZCIOTGOQBQXVTELGOCMZCNHMUHXLHAGEWE");
    tmp_tmp_msg_0_0.type = 201U;
    tmp_tmp_msg_0_0.access = 144U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ITTFTEUXNVFBJHEVEOWYCBSHKHDMLCTPXRUPUAORSLBSKRNIZEHUFUFGTJNKMEIIXOGETQUWAQOZOWWAZNYUBVYKAW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("GJBAKKUZFIXSWMGDBKQMVMHGHNHXSVHYWJKCDCWCLGRRHHCUXATQOJJWNZOSZFMCXSOIETHBXPTOQGCEDAGAVRXNAXOIJNSVYBWYCPYGATLRVTAKLRKEZIGQTZOHNBHRFHNBFCCNULAJDWITPRGBEJSDILQROEKPVDVZPMJLUUBLDWOTVJQKZMPSBFZYOWDTUSIWLPRBLTIQFKZPKAFDYMEYQQCMIXESYFUUXQZEUPEGSXNMEPOUARNFYINVY");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 62493U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.47142750268129097;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.222043784985269;
    tmp_tmp_tmp_msg_0_1_0.z = 0.13193587919044303;
    tmp_tmp_tmp_msg_0_1_0.z_units = 79U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.3816356040524713;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 241U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YBCOJXCSHRHMGJVQRZJCGKSQLAPPCNYPFCDAWYKWFEIHOLNQZSRTAJSVOTDDOGCAEFFWYNIEJUAUGIMLAZMMTKKLKXRPYVRIDDYIPFOXSHVLWKAQUQDSWZEVDPBBKQKZETNSBYTNFXZQIXLHWLULSIHXVYGWMTQFMZHTSFJSXTNHUAXCTBOOUGEECBBITURIBDMKFYPHPGEIOQDNVRPZVGBUGPLJWRCMXDVKNWXMZREUFCJQAVUYBOW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ELFPYUXYNSAPQRNCHCJHUYJBJXLZDOOXCZESYLACLTXWETOWKTFSLHZPZINQEICGIUWDQJZURCOGFKSWMDVDNLIFQKECVMYBWEHSQDJ");
    tmp_tmp_msg_0_2.dest_man.assign("ONGAJIJUHRQNJFMGOGAEQSAWFPTEVCYSBTVNYOKMISCLYSWHNKCZRMVMPXHGSREFENLKTUWNOSRUFHJQVHJZDYCCDAXAXICLJXZWDNTHTDRSLEXBFBFVVTBVTQQGPCZGPRUNKYKGYFAUWRFOVMNIWKPPEUFMGQCZUUIQBAQIABCCFIZMBZMDUKWOJWUYIXTLLX");
    tmp_tmp_msg_0_2.conditions.assign("BLRBJOGKKOYBARFMLGOLFREHGUUFIVBCZINDYEANMGNUOIRXWEBXPGDWWCXPHJSTJVJHOXWZGKQXKUIYUEFSENVBGQQZFSXWVSBLUDVKKYKVJULAZFRQGGYDBHHYLHITFACNOPLJNKOOCURWAVZQGRJTTZWTPNPLTCTYPXOYPSHSMTSDOWSQHHXJPIDADNMBKXLPRUBLJUYVXITQDMPEMMFNCQWEHMREDMKCSJAZFZQAI");
    IMC::SessionKeepAlive tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sessid = 1000046816U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::FormationState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.type = 137U;
    tmp_tmp_msg_0_3.op = 53U;
    tmp_tmp_msg_0_3.possimerr = 0.6447352805816874;
    tmp_tmp_msg_0_3.converg = 0.633653711952033;
    tmp_tmp_msg_0_3.turbulence = 0.7614914971083885;
    tmp_tmp_msg_0_3.possimmon = 78U;
    tmp_tmp_msg_0_3.commmon = 119U;
    tmp_tmp_msg_0_3.convergmon = 31U;
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
    msg.setTimeStamp(0.19869147441318158);
    msg.setSource(55919U);
    msg.setSourceEntity(139U);
    msg.setDestination(50080U);
    msg.setDestinationEntity(243U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TVEJJUELFWQYBNOHGAZHPTUYMMBGLZGYSECYVHRBJNBM");
    tmp_msg_0.description.assign("SIQHTTJBGSNTQKCDZAYIUHLIMPWBZBNOBXSFTRVNEFTYKUCMVYGPFICGUUNAGMNNREXSLJXVUGQXSHIAHTQWFRZPWLQUFMIKLFXUATHBEOQCROKUGVHDZSNEWAQYSKTOWAXKJWRHJXQPMEEVZOBYCBXAGDGJLVVHFPGBCCJERZUJTKVIDSHOKYDVZAIYDRWCZMYDGKWFEOLPRQYLWMTPDAY");
    tmp_msg_0.vnamespace.assign("IZOHWZXAFOUCLTAXHNKLVGHAEVRBGJTBJZAXRFGYKMZUPIIDZYKBVVXDUSCDOKAYDCPODORRMMHBRCWHZYFLQJEHOVQMWTOYPGSESVWCHYSUEJUCQCVVJTSANAXWLWLSKLTPNVRJHAIPRMTQGYGIDDXCAEUBYIQEPG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UCQSHYVRURROASHJJZLOEYERESFQSOENNIATOVNFUHBXSNLUECGTBCRLTPXVNRCVWDXOPDXKTNKXBCYLUZMXGZPTTHJJHXAJWYWTASDDAIWLBQHYFHIC");
    tmp_tmp_msg_0_0.value.assign("VMKMUABSRVGYGL");
    tmp_tmp_msg_0_0.type = 152U;
    tmp_tmp_msg_0_0.access = 10U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FSGIIJPRUWNFQNRUCXDWWJFALKGJCPDKFREXHKCMLPFHSJKMWGTYHNDIOQOLJMHLSLL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MUEKOOUVSWUJBZHBYIWWTNFSHIACZEYGTTVBXSUCLVLLMQGRNMSBFPODCMBZEHAAJVKKCHKGDGPAHWDGNSJQNJZTBEIYYZWUQMQUGXTOETPVBLYJLKOPEXZMSAYFXYAZACGKXVCHPIUILFRGDLIJQDDFDGQBJEBLWOIBMPEPMEXLOVDCWLQUPOJFZAPJIRVFUSQSNW");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 64246U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("OOHPZQVPEWIIYHVWUUJLVGVENITVXWCPOORLRTGQOTTGZCBZVDBAHJOPUELAIQKLKNTKHBFWWTBBHIR");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IEHNTTZHOOFVBHHOCWLOCOJWDNDCLIKBVAEQNLBCDFOTWHZZKTAAHKADUJMBAPZCCSLBXODYUUSSFPDCNHHQBUUCGYTRWPCG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DynamicsSimParam tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 194U;
    tmp_tmp_tmp_msg_0_1_1.tas2acc_pgain = 0.1966811506385472;
    tmp_tmp_tmp_msg_0_1_1.bank2p_pgain = 0.4561907671589358;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Tachograph tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.timestamp_last_service = 0.8842419347793076;
    tmp_tmp_tmp_msg_0_1_2.time_next_service = 0.8372789532238605;
    tmp_tmp_tmp_msg_0_1_2.time_motor_next_service = 0.01897455826345995;
    tmp_tmp_tmp_msg_0_1_2.time_idle_ground = 0.7206581673384583;
    tmp_tmp_tmp_msg_0_1_2.time_idle_air = 0.42432139178101835;
    tmp_tmp_tmp_msg_0_1_2.time_idle_water = 0.3546544150469968;
    tmp_tmp_tmp_msg_0_1_2.time_idle_underwater = 0.5538901937652406;
    tmp_tmp_tmp_msg_0_1_2.time_idle_unknown = 0.02953660622674381;
    tmp_tmp_tmp_msg_0_1_2.time_motor_ground = 0.32861172867486643;
    tmp_tmp_tmp_msg_0_1_2.time_motor_air = 0.18101468953802036;
    tmp_tmp_tmp_msg_0_1_2.time_motor_water = 0.13449885748596024;
    tmp_tmp_tmp_msg_0_1_2.time_motor_underwater = 0.7486772994697334;
    tmp_tmp_tmp_msg_0_1_2.time_motor_unknown = 0.763082436507711;
    tmp_tmp_tmp_msg_0_1_2.rpm_min = -14391;
    tmp_tmp_tmp_msg_0_1_2.rpm_max = 10083;
    tmp_tmp_tmp_msg_0_1_2.depth_max = 0.9423180404519246;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::EntityInfo tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 85U;
    tmp_tmp_msg_0_2.label.assign("VQQMOQRPTGTVENTMSQLRYANMCMDLZEXOEZPKLSJODJAQLXJXRDFMPRSSQMPFODZXECLXGC");
    tmp_tmp_msg_0_2.component.assign("ISFGHGXZSPNEKNWXLKEUXCBGOLUKFAGPIITYTUDDNATPEQIWFNZBLNSOXMHQHAKRYYWXYZGLQWVTYTPSLLNYSBOIMTGPZLFARAXWDETVWBAKMOKSTJXFEDIKHXVLRYQJSCV");
    tmp_tmp_msg_0_2.act_time = 6467U;
    tmp_tmp_msg_0_2.deact_time = 13339U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Airflow tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.va = 0.6521574490396961;
    tmp_tmp_msg_0_3.aoa = 0.27199076486705276;
    tmp_tmp_msg_0_3.ssa = 0.13762762662755157;
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
    msg.setTimeStamp(0.4687967189685691);
    msg.setSource(17397U);
    msg.setSourceEntity(218U);
    msg.setDestination(53914U);
    msg.setDestinationEntity(108U);
    msg.state = 63U;
    msg.plan_id.assign("FIVXFVMYLGUPAZQAFTRJWXUNUGGWIBVTLAZKAOTCLQZCMNCYPNRWVLBVRRIEVKTMR");
    msg.comm_level = 179U;

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
    msg.setTimeStamp(0.529835380941144);
    msg.setSource(54110U);
    msg.setSourceEntity(83U);
    msg.setDestination(32123U);
    msg.setDestinationEntity(146U);
    msg.state = 241U;
    msg.plan_id.assign("BXRVXOONVHEHWGCTUXNKHRGISDFYJZZIQIZCWKFXKLXEDJVICZKPEMAGRYRZOKLABMUAUFQJMCNGEIHSTTIGPGMDRCVFBQXZWOAJVLZBMQUEULONCJEWVDSQCZFAHRTJHLRDKYDBHPNWMONENUSGCBKPWLTUOYOCLQZZ");
    msg.comm_level = 99U;

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
    msg.setTimeStamp(0.15602932061267583);
    msg.setSource(64832U);
    msg.setSourceEntity(22U);
    msg.setDestination(38157U);
    msg.setDestinationEntity(94U);
    msg.state = 130U;
    msg.plan_id.assign("CUGTNNPTCJZQAXEHUCQQRMQJQDMONNZFZCSUBIXSBQUXVMVXVRBEMHJRLCODRCEZEAMZHUQO");
    msg.comm_level = 203U;

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
    msg.setTimeStamp(0.3076848896932619);
    msg.setSource(45211U);
    msg.setSourceEntity(238U);
    msg.setDestination(3053U);
    msg.setDestinationEntity(22U);
    msg.type = 178U;
    msg.op = 178U;
    msg.request_id = 35983U;
    msg.plan_id.assign("MIXQISHDCRGAGCFYZGOCYPDKDGWTIKCURALDNXEDDMOFJVNBPLLUMUUNHUGOYJEFUBUCRIFZWNJIHZHPETYPDVWSRXSZSKMMVXBMVSWPOFBPVXCJWRQGQQNRVBXZAQAQZZIEIOMLSFEXSZWNAILKOGKPZXMNKAFETYERLLTYZCQOWULVAONSXCTNYAJHRPRHMHJWB");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 28U;
    tmp_msg_0.text.assign("ZNDLNNVMVCMHGTYSHHBIBXFPAYZXTQHRXKNXBCBURKQQGPTOAFAEVFSFQXYQHCUUDTYMHABVMCEBOOUFTNRAOSDLPNQIZZBFEDEVKTXOITLRSHKVGZKEBMIPCVVHGGYEVLWFTZWIOQIZRZTXIPPJUWLJEDZCNJRHRXSWUEHODJMGJAPJLAPARYPWBQJAWFCKDOZEXSLYFMNJSDOKPJXBSQCNLQNKGUGKGWMRSLOSMIJWCIFURGUACI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UUXAITWTXZGSLGFIQXFSYMRCFKTYJCGCNDLHVSDDTZXQMAABBH");

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
    msg.setTimeStamp(0.9997846244712527);
    msg.setSource(62060U);
    msg.setSourceEntity(253U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(94U);
    msg.type = 168U;
    msg.op = 201U;
    msg.request_id = 17775U;
    msg.plan_id.assign("XTDELTOCPSZGANIJKNJTSGPLUSAMMMPWETOHFJXHSWCDHLMNLBIAAQJIXWCHSTZGQJILCBXUX");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 19958U;
    tmp_msg_0.lat = 0.8086541408079885;
    tmp_msg_0.lon = 0.47736160074658496;
    tmp_msg_0.z = 0.7041273226880069;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.speed = 0.3752946487027883;
    tmp_msg_0.speed_units = 94U;
    tmp_msg_0.bearing = 0.6443531591257473;
    tmp_msg_0.cross_angle = 0.8436969643277858;
    tmp_msg_0.width = 0.12958097464097718;
    tmp_msg_0.length = 0.4517655853451753;
    tmp_msg_0.hstep = 0.32553224599465624;
    tmp_msg_0.coff = 100U;
    tmp_msg_0.alternation = 163U;
    tmp_msg_0.flags = 81U;
    tmp_msg_0.custom.assign("KHKSTAQZHLSPWURIGELZWDOQUNWUTQNCTYGXKFBYNGBAWEVVLZBLUIMAJPFCVRSHQRZEKATAYZKBVAXWXVYGJQXDZCGIRYQD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSSKXRVSCFVANIWDWOGJEKCDQAOMCNIJJSYROHJZETUJVACXPBNAXJKCZJEMBTDIFLDGEICRPXBMLFMOHZMQRUJOFIGQENVGNZDYDDFBWIPHBTUTPBOFSGTLXNXQLAZOXXCNWSKUIPHKVILDRRZYCWHYPFFMYCGWGDSMLEUQXGRSHSOMWHLKZYRVVBMZSWTUVLAQZRIJNADIQBKLZNVTFRKHYYHJGFYAWPXUPEEKGOTULEQPCETOAYWHVBM");

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
    msg.setTimeStamp(0.6457992560838925);
    msg.setSource(2304U);
    msg.setSourceEntity(212U);
    msg.setDestination(25559U);
    msg.setDestinationEntity(170U);
    msg.type = 0U;
    msg.op = 195U;
    msg.request_id = 47842U;
    msg.plan_id.assign("NAJMJGQALURZAEKLHPFWDLIZTAFEIAONCTJFCGZUQHSSDBVLOYXR");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 158U;
    tmp_msg_0.text.assign("HKXUXQVKRYEJDGOOSWWQHFSEQZRBTJEFVMWOLQLTGSCGNTESHAOSTKHHYVIUZXFRRVNEUUKBQBXVTFRKIZFUILECHJCGKDBEIUASCKAILYJCLNJAZJIXDUZPMUDUZWDMADJKBZIFEYTXDMESIVSGXOGGOBPTAMSWNLLZEVRAVYRDMWRMLWPGCONDAIPYMDYWPNUVXGYQBPLYTJNPZCRPWOCPFWQJGFXJTBVTOCNQBSHQNNMMPKHCRBZIAKQY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JDIRXYKAQDSYSFFIUUWUZAKIZSUMCCVPGAZKDRBHNNGPVTAVNXQBZWQFDWHBWRHBWYHVCQWKLGNVHEYMYUPWRSMZSGVRXMIYLDQEAICTJBJENNKMXAORDMTHBOEPDBZLMRFXTQJEOJTHEWOEHVGIGGELSLFLAVJPQOTSUUCHPXCEIALJCPMXWGTLSQKQPTTRVPKXDSIWUDIKNZJFOVGNCEKBLFYUZYIJTYJPNOGORKBYALUFDXZMFZCXAF");

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
    msg.setTimeStamp(0.9118373504430082);
    msg.setSource(38730U);
    msg.setSourceEntity(78U);
    msg.setDestination(50185U);
    msg.setDestinationEntity(60U);
    msg.plan_count = 61406U;
    msg.plan_size = 3466774218U;
    msg.change_time = 0.9087321870311611;
    msg.change_sid = 63228U;
    msg.change_sname.assign("XMJBHQOBKSWIBRAHIBXPYRMNHJALZMFJEFEJKMEDCLYGFJDUBCNIYDIXNFALNQJYCWUQCWQMSTSIBLVMSEMAOBVDDKUUGYIOFVEUDZKTOVVTDXJWZUEBCOQSEFRPAONCORWESWXHTPGYMTIPILOYGOYLLRGLZQIFNAVPGXA");
    const signed char tmp_msg_0[] = {-92, 89, -104, -111, -40, -96, -27, 73, -90, 86, -74, -61, 40, 63, -17, 95, -102, -90, -115, -49, -60, 93, -48, -115, 37, 0, -60, -71, -72, -54, 121, 98, -85, 99, -18, -36, 6, 98, 84, 100, -41, -100, 70, -74, -50, -103, -63, 48, 97, -85, -90, 99, -109, 25, 43, -74, 76, -60, -24, 92, -82, -7, -49, 87, 9, 23, -103, -109, 38, -57, -2};
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
    msg.setTimeStamp(0.38522174877100557);
    msg.setSource(56399U);
    msg.setSourceEntity(70U);
    msg.setDestination(23281U);
    msg.setDestinationEntity(18U);
    msg.plan_count = 41665U;
    msg.plan_size = 1536724679U;
    msg.change_time = 0.7984483967071947;
    msg.change_sid = 50688U;
    msg.change_sname.assign("YXFSDIGJMFWEXAVMHGMSITQCIRFIKLBURDBJKBMZVFXWNDHNIKVTWXWSMOC");
    const signed char tmp_msg_0[] = {-31, 107, -11, -126, -59, -88, -23, -41, 21, -66, 98, 109, 95, 74, -64, -32, 3, -15, 103, -18, 29, 124, 99, -50, -102, -100, -105, 31, 93, -23, 8, 70, 67, 31, 46, -24, -11, 65, 71, 73, -64, -97, 119, -119, 111, -50, -7, 11, 14, -66, 45, -10, 38, -12, -111, -120, 105, 122, -34, 107, 93, 13, 106, -93, -42, -35, 17, 9, 21, -88, -11, -62, 7, -99, 40, -86, -75, 101, -79, 67, 84, -25, -10, 126, -11, -9, 121, 72, 85, 35, 99, -59, -42, 44, -106, -85, 2, -62, 10, -41, -75, -15, 43, 37, 20, -19, -38, 13, -14, 38, 32, -84, -82, -118, 103, 75, 100, 54, -90, 68, 73, 113, -18, -39, -71, -81, -126, 97, 38, 95, 96, 119, 123, -45, -52, -37, -104, -35, 20, -64, 37, -37, -115, -33, 91, 114, 56, -42, 110, 44, 122, 57, 118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QSYPBVUIFNRWQFPOXTKV");
    tmp_msg_1.plan_size = 23211U;
    tmp_msg_1.change_time = 0.6408194172983245;
    tmp_msg_1.change_sid = 13270U;
    tmp_msg_1.change_sname.assign("MOXKYYBBNAISPYAYVFVFWWTODIVHYSBXLWJMOLZICTZGFRNFCGUVRHSKJEBFGMTWAEJYTCQCXMVONOCWNDDJXNFEVZQDSXT");
    const signed char tmp_tmp_msg_1_0[] = {-121, -122, -58, -46, -18, 97, -9, -115, -33, 40, 37, 49, 4, 0, 9, 58, -54, 100, -54, 120, 68, 34, -45, -41, -99, 14, 97, -77, -71, -60, -62, 6, -75, -111, 68, -4, 1, 4, 95, -52, -2, 62, 24, 45, 19, -66, -35, -109, -12, -69, 13, 69, -6, -105, -19, 75, -63, 23, 83, 61, 69, 87};
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
    msg.setTimeStamp(0.7603090846666407);
    msg.setSource(4335U);
    msg.setSourceEntity(87U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(25U);
    msg.plan_count = 37126U;
    msg.plan_size = 3151550813U;
    msg.change_time = 0.4359842355335346;
    msg.change_sid = 48427U;
    msg.change_sname.assign("YGYHRAAVJNIUSHWZVIKDKBLOYLWZMGCUSMXJPLFBINWGAFSKDHELATLJOUBVBPWWPOFZIFJP");
    const signed char tmp_msg_0[] = {-44, 12, 0, 86, 64, -45, -92, 55, -104, 59, 100, 64, -34, 0, 90, 96, 56, -18, -118, 95, -15, 94, 109, 70, -39, -23, 21, 38, 24, -57, 48, -106, -128, 18, 88, -124, -114, 41, -26, 86, -68, -51, 26, -101, 35, -76, 45, -30, 29, 64, -58, -98, -9, -29, 73, 98, 109, -43, -43, 122, 94, -47, 27, 52, 48, 80, 61, 11, -32, 44, -107, -119, 100, -52, -96, -48, -70, -31, -107, -89, 121, 7, -72, 110, 99, -71, -108, 49, -53, -70, 123, -64, 88, -62, -115, -84, -33, -7, 83, -52, -118, 112, -108, 123, 39, -73, -43, 36, -20, 9, -84, 102, 13, 81, -86, 50, 36, -29, 78, 109, -56, -116, 79, 70, -45, -89, -60, -89, 0, 29, 12, -114, -80, 75, -35, -16, 57, -98, -77, -13, 103, 85, 30, 21, 65, 38, 40, 94, 4, 104, 72, 10, -111, -34, -48, 11, -51, 89, -25, 95, -44, -116, -105, -72, 42, -66, -10, -20, -77, -22, 39, -127, -63, 37, -25, 120, -15, 52, -16, -119, -54, -126, 101, 47, -33, 44, 81, 20, 11, 37, 54, -11, 25, -101, -107, 22, -5, -69, -120, -112, -116, -1, -61, 77, -69, -21, 45};
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
    msg.setTimeStamp(0.8034244892286075);
    msg.setSource(49328U);
    msg.setSourceEntity(198U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(63U);
    msg.plan_id.assign("AHUADPHFNKQVXRFNBTJMLLCJHZYMSGBPNPTPWOVNJPPCTOQTEKUAUKIBDNCEUCLRBOQDCBYDSEVSXHGYOZIGIQFIGIFXMOSWGWOWUNBVKHYALFUZMCSWGDZLKSDRVJAPYRWYHNXZXAVEGMAZHNSPMZGTEXJKYIOPNTRIURBMMRRFIOTTBDOFXLDSZVRWCJDMGCWQFJEHAJYHXNCTHJKCIYLSTEKMVBAWRUQ");
    msg.plan_size = 6068U;
    msg.change_time = 0.15042145647034233;
    msg.change_sid = 41813U;
    msg.change_sname.assign("HVANRFSVGTZTKLYEVGZYIEVEFUXRWFBQLOKXEMPZQNMNQKPLALLIAUFNAFHXRYOWMTJVHLMQJDIPBXHJBCQCGDGJBAYOJBYESVSDKJOPPMOIPBFMI");
    const signed char tmp_msg_0[] = {25, 36, -7, -121, 79, 41, -60, -13, -17, 111, -32, -73, -73, 121, 113, -66, 103, -77, -87, -68, -43, -11, 2, 23, 83, 12, 38, 18, -27, 12, -7, 97, 64, -128, 29, -11, -88, -57, 103, -107, 121, 55, 113, -6, -30, -66, 47, 16, 75, -12, 43, 28, 58, 44, -85, 66, -4, 7, 11, -88, 42, -95, -79, 50, 34, -124, 96, -8, -74, 27, -52, -81, 113, 112, -76, 20, 62, -82, 22, 70, 58, -76, -97, 74, 56, 43, -62, -41, 12, 62, 43, -67, -23, -79, -10, -42, 86, 77, -114, -6, 32, -42, -108, -11, 110, 39, -81, -86, -23, -37, -19, -35, 114, -22, 114, -20, -29, 115, -116, 63, -94, -94, 50, 28, 18, 68, 1, 117, 88, -34, 64, 110, -52, 9, -38, 51, -87, 120, -28, -72, 53, 20, -106, -53, 14, 33, -108, 16, -82, 117, -70, 97, -59, 37, 119, 44, 7, -41, 13, 28, -95, -88, 111, 114, 96, -98, 14, -118, 117, 45, 109, -115, -31, 63, -71, 8, -104, 90, -5, -44, -16, -104, 112, 0, -48, 3, 87, -44, -20, -29, -118, -108, -102, 71, -32, 105, 62, 68, -41, -45, -19, -64, -128, -73, 25, 89, -66, -6, -36, 104, -14, -110, -15, 42, -120, 46, -45, -80, -62, 125, 119, 37, -86, -94, -58, 81, -28, 103, 118, 56, 13, -71, 5, -110, -53, 49, -63, 70, 121, 61, -15, -59, 50, 96, -28, 98, -15, 89, 77, 98};
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
    msg.setTimeStamp(0.14647010693131224);
    msg.setSource(50275U);
    msg.setSourceEntity(28U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("ZLEXFANMWGWGEMIVUGIPIOUQQBXWIHWDKJBUSZUSIDLRXAUNYKUSEFFLPSPLOMOATEMBJJRLNOCWXPVMWPEHADKMCKAHLEPJZFOHWDBRRSUARIZJYYNNTBKFCYSSGZVITXHVDMKNFZFMYBTVVXVOLQSRGCQWQJZTOZYVYXXEKDUNKXIFTLMHWTGTCQRDNGLGNMCZBAQFDPZEQOCGCUBDLJBISJQYYSHRHKYNBTXAH");
    msg.plan_size = 5596U;
    msg.change_time = 0.4419766438607936;
    msg.change_sid = 34701U;
    msg.change_sname.assign("UXCXPGJMAWXCOCYPURMJNGXQVHDLJXCBEQPNKUABJLYJULDIFQRDMZMXGSEKHTZFEKBWWVBWNHCFBHMMLATHEDVLODQCYAEKWQLRWPSVFVZEXPSQIURQWXNARMUJVUINHYFOLZKAGCFUJTVTKFCWLFOKGYIYOPNYCXSVHNTAGTZIYOJSBPGKTDEESJQWDVPZHTNEIZIIXQYCBRVMOZHKQASFKZORNST");
    const signed char tmp_msg_0[] = {-106, 22, 65, -12, -64, -17, 111, -3, -85, 101, -17, 12, -61, 0, 110, -7, 77, 109, -35, -8, 38, -101, 8, 71, 46, 22, 88, 75, 62, 41, 37};
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
    msg.setTimeStamp(0.04611328934851733);
    msg.setSource(24984U);
    msg.setSourceEntity(239U);
    msg.setDestination(12727U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("GGWKFXRTSYRWWYZAUJCWKFNJBFHMETLHOPHRGCTFNSYNBUVOFXOBLUXPITHRTJEDGUWINYK");
    msg.plan_size = 57436U;
    msg.change_time = 0.6220490886575264;
    msg.change_sid = 26835U;
    msg.change_sname.assign("MJGIRZZEVYPSASJXHXJXGIGIOSSLRRVOKLBIZVIWOWJSBTZYZQHERTQRUKIRNDCFGFEJFSVNOWGHHQUDZACHBBNNCSJRAZMFEBIJDYBQCALOHUWFWRYRQXNWQGZLUFJVKVCWPFWCKNPKAJLFXUQLWEAQVBTNPIOYGACBLTGMFTYEXAKEEIDKGKQDMJXZHZYAMFCSYCLDGWVPIMSYVNHUKXTMMTUDBOEQDDU");
    const signed char tmp_msg_0[] = {-65, 96, -66, -126, -6, -97, 6, 53, 20, -81, 39, -8, -83, -59, -24, -15, -45, -38, -115, -116, 114, 33, -118, 64, -12, 103, 39, 35, -127, -64, 3, 101, 82, 101, -5, -34, -8, -111, 67, -51, 90, -85, 88, -83, -49, 123, 10, -91, -46, -15, 103, -82, -106, 23, -128, -6, -51, -103, -85, 4, 44, 101, -45, 9, 6, 121, 86, -51, 126, -87, 70, 2, 47, -97, 41, 124, -75, 72, -101, 122, 16, -92, -40, 117, -58, -54, 72, 67, -2, 43, -58, 104, -36, 102, 60, 118};
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
    msg.setTimeStamp(0.5188219428710037);
    msg.setSource(63717U);
    msg.setSourceEntity(248U);
    msg.setDestination(63543U);
    msg.setDestinationEntity(71U);
    msg.type = 88U;
    msg.op = 33U;
    msg.request_id = 32610U;
    msg.plan_id.assign("WWGRCADKGXYQDUVQZASXGYZBDRZEJYLBWTIMHCUPOCFNKHIDDXLIVHBQWRLNNOGLPQLPUCMZLMJYDPMQSPOYQHAFTQISHCORDLAAOHQFZCHUICTJFFOWYOPXJKGZCUTDSBDRSJVVCHNRBJBBPEEYFNQETBXKTKJMYAXWRGZVPOXNABIENJDVMYH");
    msg.flags = 22795U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 29021U;
    tmp_msg_0.lat = 0.2499941540547428;
    tmp_msg_0.lon = 0.7002624966666912;
    tmp_msg_0.z = 0.4386741301171446;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.speed = 0.8654135913049558;
    tmp_msg_0.speed_units = 88U;
    tmp_msg_0.syringe0 = 186U;
    tmp_msg_0.syringe1 = 59U;
    tmp_msg_0.syringe2 = 49U;
    tmp_msg_0.custom.assign("HFYGMRBFFHBBPLUOTBGDLGUDUGARKXXCCVVYFCUGWYIXXAFO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JXGGAVCUIPRVUMKRZMITGDDYGQOHNKVWYLVVBNBPLEHIYARNCXLFPCWQTFIZSFKYWRBXGEONTRHQHDAUITUCTDEKZLBQJZSNMDGZVXPDMYQJGXSLUORWLQVATEEBLLCBUORM");

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
    msg.setTimeStamp(0.30755349783482444);
    msg.setSource(43766U);
    msg.setSourceEntity(5U);
    msg.setDestination(10328U);
    msg.setDestinationEntity(172U);
    msg.type = 73U;
    msg.op = 250U;
    msg.request_id = 57201U;
    msg.plan_id.assign("SWPOZFLQTCMFKCSGUHXEZVBCTWQKBHJGILXPGPQKGCDHILHTZCKJEHSRYYKWDWXJTLMTZIORFQLIAPICFDDBRGPROAVUGASSJJMQPSWACCEOBQQPEQYADDFAJOFBSKPSIOZNZVDWVWOAFYUHCXVPVUIBFHMLQYLGXE");
    msg.flags = 25075U;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 36579U;
    tmp_msg_0.type = 129U;
    tmp_msg_0.max_size = 1045U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.6942356663622232;
    tmp_tmp_msg_0_0.base_lon = 0.8187395630013281;
    tmp_tmp_msg_0_0.base_time = 0.8935462890430083;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PMGGTWFDVOJFSRNANDGMXVCURLLVQAEJIWAUBMLDWTTLKMGWLOUYCDKSCJUPDIFJOQNHTHZATWTXYBPXIPBZXUKTJZNXZQILBPTRZHANSPMWXYVOPISRAKGUDFVKSEWXGNOLZSORGUBBYYHVOFQYCPEXPVKJEFJYKGQZVXFDKRCIVMLCNCHRE");

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
    msg.setTimeStamp(0.7430326441891878);
    msg.setSource(26947U);
    msg.setSourceEntity(70U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(117U);
    msg.type = 150U;
    msg.op = 105U;
    msg.request_id = 15823U;
    msg.plan_id.assign("NLRTAZZEPZDJXEWZRWYYDKPWFLCIWKIZGQWNIEBSROCZRJJXMWRDHSDHQAPLQUAVLXVFTFVPBYKGJRSJVKASYMOBIWYQJXCSMXTOWRUBOHDXNGANXWVVQABBDKESQEXUHMBJOLIBQNUQMLVPGHTSEIH");
    msg.flags = 36714U;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -30298;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UUIYTRJKDAOJHCPWMCCHEWAUJOEHRVJABPTPUEEZLZMKBADQXKXYCQOLOQWQBHPUMMCKOKYZPSLDGONXLGHTBDSYQUFTHDNQJECXQCLDZJRPGNGMEWFXVCJARISJTHVSFGWVONANMGIYIFWSWYWZZUGUNZOORQEMRXBDKVISNFVVKZXGPRQUMNTMMESLFNFVPBZTRTRLYHBZHJCSCS");

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
    msg.setTimeStamp(0.47295532987636835);
    msg.setSource(23669U);
    msg.setSourceEntity(227U);
    msg.setDestination(33615U);
    msg.setDestinationEntity(95U);
    msg.state = 197U;
    msg.plan_id.assign("TWUDNBLBGSAYCTRXJVMIEQFTPKFOBHHSOJEWZCOHQDVQXKDWAEPS");
    msg.plan_eta = 315983682;
    msg.plan_progress = 0.2906080433164734;
    msg.man_id.assign("SSVLLIHIZGZGAHTMKAHJAHTRKGVGEFYLAJDTEGAUXCQUFYNPUKLXPOOUBIGEWCOBYSPBIJPQVNJXNQDEUNJYJTZMUTIMVFONFRAQTKZUCSWQTPWQMZSYVQGJEGVDENBTORIMCWXXIDXGKZCFRNUKIRDIWWUMMSSJVFHBVFHDDAUYJFWJRECHXEPPXOYNPKSVWCFKOZZDZCHDWNXTBELHAKMSBCNVWAL");
    msg.man_type = 51836U;
    msg.man_eta = -1906214707;
    msg.last_outcome = 88U;

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
    msg.setTimeStamp(0.8689790587996492);
    msg.setSource(26275U);
    msg.setSourceEntity(143U);
    msg.setDestination(60997U);
    msg.setDestinationEntity(96U);
    msg.state = 17U;
    msg.plan_id.assign("TGBGRILEOOKZOULZJXKJQYXVWIBTETABOFLEVFANHLHKLFFNXCYXHGAWRNFCXCNDLDQTRWOSOQFRWMSAJWQAKMSONQAUDGTMHFIZDPRWPXCBIGKYNOLFMKLMMWRIRCBRAVZSBYUTVUEDZXPGAASUHJSYPJXCRWKPEHVTIPOGEENVIYHCQYSUDBJCPHYMJNNLZTFKBZGPDJSUMCNPIUSSH");
    msg.plan_eta = 2132086309;
    msg.plan_progress = 0.8868405403668903;
    msg.man_id.assign("VBEUSQDBETYJZNKECCWGZNQXHLNVJBZGHJFIOZZWGCFERQRILQANPMVORSRYERWUDODRXNKXXIAHCDFBLYJMZQACUBHMORDQGUXYKRLULZWPCSWHYIDDIAKZMSBMQZWDSAQUOTPRKVVGUPKMHEHJI");
    msg.man_type = 56235U;
    msg.man_eta = -1979508002;
    msg.last_outcome = 32U;

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
    msg.setTimeStamp(0.16352013048358205);
    msg.setSource(46942U);
    msg.setSourceEntity(230U);
    msg.setDestination(56441U);
    msg.setDestinationEntity(48U);
    msg.state = 132U;
    msg.plan_id.assign("NWHZMYFJSMBRODTYGUGRWXCKOMFQFNJEGBZDOGPRKXDUEGJZXANEPNUUZQRZPEEWKGZQBEVGETGFBXXOCBWVNHUADYJAMAVKKPXLLBEAVPPYCRYRQSATMPQSRCIYCIMISJAAUIMUHDYUOOEQR");
    msg.plan_eta = 861476528;
    msg.plan_progress = 0.6323912284736989;
    msg.man_id.assign("ZXUFSVQDIFDQWARLJTDUOAKMAPVQRWWHGLSLPDFHWEERQKGFLTVDLUXLHNFIXLNMPNBAMNOCVIUREXLUUAKWHXJRYEIQRXZCQGCUPTKYBVOCTZTWM");
    msg.man_type = 56419U;
    msg.man_eta = 552408935;
    msg.last_outcome = 10U;

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
    msg.setTimeStamp(0.8302321041322729);
    msg.setSource(459U);
    msg.setSourceEntity(222U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(200U);
    msg.name.assign("OEUFMQJNSRYNPGCBVJTBNNKFLRDAMSEGFOXDDEGPAGOJJOTURUASDKZBBCLRVSXWMOVWWWZCDYRZUA");
    msg.value.assign("HGQXPYVNCRWNHPODUYDWTEUERESXIVKXGJZKWVBGQXQFAAOALXXFSRQDKELHLQBHLKBCSJBKNWAMNITNQMRFDDHLATGCRBUVEMTMPIDPUZWANLPNMJNWEWIYGSFFHHMWNJUZSTETOOIOQRTDZTJ");
    msg.type = 83U;
    msg.access = 169U;

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
    msg.setTimeStamp(0.8479279030924339);
    msg.setSource(58444U);
    msg.setSourceEntity(90U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(117U);
    msg.name.assign("GPJOYLWBPKMDBSIFPLLRYZOFYIEDTXIFMKGQIPXPOPBKJKHWUBLZYPBMUZGICAQWNYEIKWWMJNVTSTDIRUSTHBMDHZW");
    msg.value.assign("JLHCJKYODP");
    msg.type = 223U;
    msg.access = 8U;

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
    msg.setTimeStamp(0.52039999838689);
    msg.setSource(23601U);
    msg.setSourceEntity(175U);
    msg.setDestination(5774U);
    msg.setDestinationEntity(189U);
    msg.name.assign("YUWDOQKITZSRZJVMFMTBJCBIRSJGMKXQNPNZGKCZHMXTVLVYEGQENWTQTXYMAADWZNDEUOASDGAZNZYVKEXMZFQILPESWCLONOYWBGJKQWRBXIPOZHIJDGFJBXKLTAHGCNJNAOAVVECBKXYHUKQGWFMHNFSAXROROGOSPYHIRCTSCJXTUDDLEHDJUVPCIPWKC");
    msg.value.assign("LYUGEEVBAOUNDBWCJAIFPCRISYWRYDXZPUSHOUDRSZOIQBMOATMTXZPVGZYLEZVFDYCGDFQBCSMYQYXHEFAWQIGGQIUNCZNNTSFYJNAWKFKDLEBEYCEOBBTCUPIVZKQHHLZFJJSHWRDKUWFPDDBJOXMGUGAGXZRUMGHVNKVTARYPEXVIJBTWOSLHXCJAXJNRJWVQZRULPPMELSSQRPOITMCGIPJX");
    msg.type = 73U;
    msg.access = 254U;

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
    msg.setTimeStamp(0.1102909140007533);
    msg.setSource(56922U);
    msg.setSourceEntity(186U);
    msg.setDestination(23273U);
    msg.setDestinationEntity(119U);
    msg.cmd = 74U;
    msg.op = 61U;
    msg.plan_id.assign("UXJXOTOHAPSXVFKTNQCZRSHOVRSVCWOIMOFGSWDCRUQWDQVEMANDBQLGVSYQNGYMKMPDNBXKYKFAQMDZZLORHPEDXXHFLTGUZQAYADAYCCBCGPFFYBBKJYXIARHVRJBFKIEXOHTLKWGISQZLEUVSHVGLXZOIZFRCIJEDWTBAMSHNUJRYWPAWWPIQTCZIENLMLVHQSMPMZRSPZGF");
    msg.params.assign("VKIZSKZBKXLWECJYGJUZMTOQRQLOERPYMSCYJFYHXSGVZWEIVOTCHFFGAZPTAAJMZQNREIDDIGKQPVDXLKSAOIVWNVWTTXMRWRHRUXCQULUPVSNSWTGFAGPXNUBHBCIKGJBBCLIYQTHLQKAABNQDAPQNVSZTDSGONEECFJYIMXBBFWRZELKPNYFGORUAJZOLWHKCFUIMNCSYUTJOUBTLJD");

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
    msg.setTimeStamp(0.12131256195429418);
    msg.setSource(59586U);
    msg.setSourceEntity(193U);
    msg.setDestination(38862U);
    msg.setDestinationEntity(245U);
    msg.cmd = 124U;
    msg.op = 11U;
    msg.plan_id.assign("NADBFKZIESTQMMNUKZKHSHNJXTIJGREQFNGJSZXGQXFGHBHNFAWGELOSVCWWPTHVHXBOMEDSOFYCWYPMACHGBZLCOMVJGJRZTAILRXOMVBUPUHUMQLCQYDOJSRPZYRDOVCPYAUM");
    msg.params.assign("XBGQVVXUPUNYGJFVNDTFESXILJNQJSEETSBGQKDENFZFSUIQWSLECXAPLUWAMUYTAOWGLROFQHJHRFAMMYBKWXOGNPRXLKAIIDUMTRCLCKHZMYMRNJSRWKKZIMLZVGECKILSAUIJNXORCFAKH");

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
    msg.setTimeStamp(0.13403107384404433);
    msg.setSource(20393U);
    msg.setSourceEntity(54U);
    msg.setDestination(30522U);
    msg.setDestinationEntity(30U);
    msg.cmd = 180U;
    msg.op = 84U;
    msg.plan_id.assign("ZGIEMEGUCWKKBMENVUBDUBCJDQJVZRFHQDDTYXAJFNTFNBWDCLRWPLAFPVBANMVXXIUPQXIZVAKNYLYJEXPTYCKSLGEIFNTKZAKQPEVQDYJOCJWRZRGJHAGDCOWMIMHHUOPHSMISOUNQCUQGWCVXOUERRHXGXLQAJOSSFOABZBIDBLQJYXYFSMELHTLSAYVPOLRMVBTQWTWDBTFSFO");
    msg.params.assign("FGMEMNQIOYRZUIVWPJHDODDWNNOLNFUIANDYXGCQKBQJKBCZFBFUUTJBJPTMDSWGYREUELCRAJOVAOIXYQPLWSDGHLZFWCNSSJSAZAYZEZBZXIXUJBFDMHQLLZDKEXHUFWUVFRY");

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
    msg.setTimeStamp(0.8319240169664508);
    msg.setSource(23086U);
    msg.setSourceEntity(125U);
    msg.setDestination(64047U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("IMJVFVLCCEMBRONPTHZDGEOBWXMVZBXBNRWBBDJLMDRTINLOYEXSWZSBNGRJKCXPKOIPEOEAGZELTBUSPIFNAZTXMLHPTEUPSYEUDRJJDLMDAZVUGPDVSEJIMWGUFQNKVCWTWAGYEFGSRZFUIWJLXTUSYOSBUQTHOVKTVXAHQNSADHQMXQFFHLIORFIZRMTGGLNJSCWGFNMNXUVYC");
    msg.op = 230U;
    msg.lat = 0.13309866003551807;
    msg.lon = 0.02656649787116594;
    msg.height = 0.25768643078656384;
    msg.x = 0.5534794132173044;
    msg.y = 0.8599921944473673;
    msg.z = 0.4147804754013812;
    msg.phi = 0.987007200254765;
    msg.theta = 0.6679572978923062;
    msg.psi = 0.8488560303319024;
    msg.vx = 0.7842482090135765;
    msg.vy = 0.17255038923153043;
    msg.vz = 0.5095047974173971;
    msg.p = 0.2902692481969137;
    msg.q = 0.6234370756139557;
    msg.r = 0.1937163206608361;
    msg.svx = 0.012023010450478933;
    msg.svy = 0.2263573193825329;
    msg.svz = 0.2043730982381885;

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
    msg.setTimeStamp(0.027116865313068672);
    msg.setSource(35823U);
    msg.setSourceEntity(26U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("JOCWHRQYVHTYEHOMYIMFULTDWXHLHKHLFRSGXOQMGGVMPTKDXEICIAUZRNAFMDBRWBPAVKGMDRQDNQHLTGOCVFRCOCKUAHFLHNTCYFIRQXFDWKNZTVFZZXLWNSP");
    msg.op = 82U;
    msg.lat = 0.2515293554931125;
    msg.lon = 0.3561804681352906;
    msg.height = 0.7377293085155665;
    msg.x = 0.18574594772252562;
    msg.y = 0.738297947809269;
    msg.z = 0.2847833567351352;
    msg.phi = 0.5041375221161472;
    msg.theta = 0.3077859046952516;
    msg.psi = 0.23970214984155602;
    msg.vx = 0.07850140178080378;
    msg.vy = 0.29218015582222034;
    msg.vz = 0.49096253164602655;
    msg.p = 0.16635511231011246;
    msg.q = 0.7357254808187129;
    msg.r = 0.5520690944563115;
    msg.svx = 0.4059194181985425;
    msg.svy = 0.5193989162494541;
    msg.svz = 0.5592606093149338;

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
    msg.setTimeStamp(0.08312759093926303);
    msg.setSource(63656U);
    msg.setSourceEntity(106U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("QUVGXYHVCZSJWYGJSIRSJCIGQPDHVADSZFKOYRIIPVYYDQDHKJXDHWSMVEYHAEQENUTXBZNBIGNBNMEPJACKLJOXGOYWTPYUQPHZKOFOTZXELJOIMCQ");
    msg.op = 65U;
    msg.lat = 0.5508377827507354;
    msg.lon = 0.6729464715236613;
    msg.height = 0.6668458412996275;
    msg.x = 0.2370465085084057;
    msg.y = 0.6525554193393653;
    msg.z = 0.5564208565691581;
    msg.phi = 0.5075078584723605;
    msg.theta = 0.5034638943871423;
    msg.psi = 0.25352432360125143;
    msg.vx = 0.7377114218091303;
    msg.vy = 0.38767231370573974;
    msg.vz = 0.08031739765958001;
    msg.p = 0.538631981362651;
    msg.q = 0.8744530584356671;
    msg.r = 0.042735738284900404;
    msg.svx = 0.08524149097323008;
    msg.svy = 0.6111514686110139;
    msg.svz = 0.11510835995717139;

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
    msg.setTimeStamp(0.28762367441775405);
    msg.setSource(20968U);
    msg.setSourceEntity(72U);
    msg.setDestination(45979U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("DFNELSYYPHZLJMPTGPFQMYTAOJJQDDWWKHWLCSQNBNUKVZZEOEYUDILXKNMABXPSCXWCSBKLZVZUWSHFLVESXJARXIYTWXPQZVQGVYVOKONPCOLCIWPOCTFQVYKAZZUFBDRHQRTDZOIBTETINAXTCAERWGFPCWGUSQHRUBOKUJDQXSRCXRBRV");
    msg.type = 163U;
    msg.properties = 18U;
    msg.durations.assign("WSTCJWOCNRBHJSFDJZDAQODNQ");
    msg.distances.assign("AVMKDESJUVVNTBQYXPZUYRYRWXZUNKDNLDPDPTYHPMMEXYKZUZHOIMJODESHYWKHEQLNNBJOJBKGHACSZUCJBFSBJETUKIQWHYAUZFJYZQSULSDRCACMONOADGLBLGVZRABK");
    msg.actions.assign("VBVPQUAQVVTAIXTCGJELYEOPCMHUVGMUENNGXISSJFAERAHALPKCNDSCJOAJSJJYTFQWPQOPMGAFZAEFUHHTDRGYRKVNCHMPLMLUKTUOBKRRDVXRTIBHYNIXYBCXJUWPIZDTTMBYFZDIZNXCKBSPBGYWOWZBBZJOSEXWRDJMFWNEYRSLISVONGWCKDWWDDRHYGNLFMKGSUFEZZDXHKK");
    msg.fuel.assign("ODLAIYKEWNJEBHRCNYZQHRTUDTPMVNNUGMJEXKBESLP");

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
    msg.setTimeStamp(0.8033824473838634);
    msg.setSource(59130U);
    msg.setSourceEntity(174U);
    msg.setDestination(32765U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("QHMQSCGTLUJLSCXGUSRZTVJAYWQSZHHKNBOODOSKXKIWDQUFUMPEPZHHMNPXTCWJFSLCRYFUFAOAXPVBEMRKGQSQVTTHTYVUXCFERJBYRJTZGEIXYGFNACYWQEOMKKESZKYZBEEDQWLLDJUIUPIPBONNVAGKTDAEJVBZWKIMFVV");
    msg.type = 58U;
    msg.properties = 179U;
    msg.durations.assign("OTGYVZSGKWDLOGISCLCJWZONRJOVVZBMUJEIOVTEIMDDGAWPVPAWETKGZBYMNEGNZASNFCNYEUEKMHZYURLRHVDLIXIRMYFSQUGNQZHRHZCSVEPBVWDFOMTYFJMDW");
    msg.distances.assign("HDXEWYIMZZNOLZYMDDYUAKJOIPUXFJJSNKEHWLJTBOWXQVIICTBOWKLNEWWOOTWYKRALCFYJMPMIDFUKBDFRABCWV");
    msg.actions.assign("FLTAPDEWTMGPJIRAQRKQOCHIOZSJEVHGQJSXZYBCLUOZIKFRPNWGXRVDITWAMWEJTJJMUUEVNTKAJNJWPEWRFIETCZCVQHDAMXRGSPXQDKUJHCUFEOHUFHBCMIKYYWTDOANFHDBDULZFSCKDLVMYFXXBATTDXPAPGGIRORCYBLQASVASOMMYPCQQJVBRNGSYZNVKXCOSWILGKNLBGQLNEXMUWYHY");
    msg.fuel.assign("IWAUJNOIQDEVERUFNRUJCBDZUPLRTZNNAGRTQSBPVTKNPPCGWFLKYLWAWTAVPYNHWZFQBLIMZQOKJFMKZJUEIBAMLMLOAXSDQYXTUYERAEMTPIPCQMSEGHSLKH");

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
    msg.setTimeStamp(0.40765107852859095);
    msg.setSource(37187U);
    msg.setSourceEntity(210U);
    msg.setDestination(21178U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("EICRJLFRIOIJWZSIPCKUOPBWVVTEKZKDAKXUGNMNDLCGEYGTUJRTGRHWYNBMZEFFBHTFYGAVSVQPZHNQXSRDKCBJTLCLOJPIIJVLYIMSZMDXGMXHXZMYUWUUESXYBRPTAFEBMUGAEHONNGDFBMDNQSRFOKUVZBWPSQICWDAFIVNDTVBCXPHKTCPYNKYCCHLJZDKAZQPHH");
    msg.type = 250U;
    msg.properties = 151U;
    msg.durations.assign("RABWHHKMCGPIYXLUKBPAYXFSRKSDZGFZXGSBGDQKUPJNSRCSLNDTNXGGNIOT");
    msg.distances.assign("PTMUMKDQZWIOAYPTYCNOECHZOKTQVGOZNEURNTGZCWBGSRKMXFDEHBOTSBTVYDNTEFABHPSDFJYAGWPVRQQUDLARJRPPGHKVEZGSMWOGFHNLXICDFMJINABEIYOYXGANH");
    msg.actions.assign("EHSTROGIPU");
    msg.fuel.assign("QCZNOCAQQPSTJMDOPIIZYLQAXUWJNVJJYUBVKYGSMRWDRPBPRWEHOWVGUFTZBKTZGOVUANLFIXOOVRGKAQATOXFTJHAQRCLZTXQDBVSTPFXHWBAKAJXBXYWNPZLGHCTVSKBMEDLIWOMYXRPZNXFRUNAVEWQHRXLVIUMBDSFIKIEU");

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
    msg.setTimeStamp(0.07469158941229948);
    msg.setSource(52198U);
    msg.setSourceEntity(105U);
    msg.setDestination(52045U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.04502385835875422;
    msg.lon = 0.10885118626463364;
    msg.depth = 0.6474138745272049;
    msg.roll = 0.8945822502014673;
    msg.pitch = 0.26666077301947877;
    msg.yaw = 0.3164034085914369;
    msg.rcp_time = 0.8144095754763788;
    msg.sid.assign("EYIHMEESEKIUINRWXDMECLFMMXFHQGPJEQGLZZTEFFCOOLSAXKYMYOBJBMDRMKTXVKYVTSNJTQCRPUXYNJADCCASBHWRLXQVDAGZVSQQWFEIIERZAWCRRYGCPUCUKZQODBJ");
    msg.s_type = 84U;

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
    msg.setTimeStamp(0.880000245455921);
    msg.setSource(35514U);
    msg.setSourceEntity(222U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.5318001937979933;
    msg.lon = 0.740733723823057;
    msg.depth = 0.1590171463681722;
    msg.roll = 0.6095011827219391;
    msg.pitch = 0.5584986059018515;
    msg.yaw = 0.24562563957791106;
    msg.rcp_time = 0.9800722750041617;
    msg.sid.assign("AZBJUPECPYPPATQYHXHHQHUMHAHOIKUKUWUJDUPSTVFFNDDWMGXIYJTMDISEVGTPLONXCZOKNEGLQDCKGBDYNRNO");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.4015150311159643);
    msg.setSource(35385U);
    msg.setSourceEntity(169U);
    msg.setDestination(59992U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.6398124137549053;
    msg.lon = 0.13233968813923602;
    msg.depth = 0.24669767108495932;
    msg.roll = 0.003586856542029393;
    msg.pitch = 0.6989586515357642;
    msg.yaw = 0.12413525542179282;
    msg.rcp_time = 0.43242605677476265;
    msg.sid.assign("BUPPBDZPXWMQYMAOFLEKDLKHSRNIOCAYZXDFXUWECFZMSPLDRVCXLHYYWUFXRHROLDTHNBRGYJYZRRGUWGTXVHMNKAKTFGJSHGGZFMOBVUQSGFWJZOGVJRUCBDSEYMZBPDIJGGMJYQJNZISCZDKEXCPTTJYWJKNACVAEXILOBUTXCAZMOINNKPWEETKHLSAWHC");
    msg.s_type = 166U;

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
    msg.setTimeStamp(0.6303921126833791);
    msg.setSource(32396U);
    msg.setSourceEntity(139U);
    msg.setDestination(61555U);
    msg.setDestinationEntity(173U);
    msg.id.assign("DDIJZZVUCETLNNQMQGCTGAFBYGUZGVJUIPGIEOLMQOJFHYMSNYLLKAAMEZE");
    msg.sensor_class.assign("PQRHKSCBYUXXBSBSEVTUXGZDPAQHOSHIOFOHMGJLDUAVJNSTJMZGE");
    msg.lat = 0.33819476397389514;
    msg.lon = 0.6968693808327474;
    msg.alt = 0.8183558012406599;
    msg.heading = 0.05033882483042318;
    msg.data.assign("XFFONYIKIERDSCENNXHNDOBZHCPBQZZNOBSPCXXPYJGMQFOYKARKVVUXZMTSFWMBOLSTGNQRVDMAJCWKBAUVIZEJKKGKBYUKAMEUMFHWWVSDQTMCZHDWHRUHNJDOJ");

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
    msg.setTimeStamp(0.3062748069509612);
    msg.setSource(56282U);
    msg.setSourceEntity(111U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(108U);
    msg.id.assign("CHIQEJMTKENHUODUAVLCDIJHDRMWHERFKHZZVADQBJZHIFYVVWWSGWTWBSCJMAQ");
    msg.sensor_class.assign("QYDDZORAUVTKNUBMEJDGQDEBYNGZQLGLTJXUBHYEYLZXSSRAOBXWZEFXYOHYRGAHNOAJCKIJFWAATCFCPSUICTMWCENSMHXJMHMOYOEYPBDYMIPBPXUDQNRNGEAFXSSQATRRGFTWBZUHOUKBMCHASOCIKOGDWJUSLDWLPMFEDWSHGUMSJVPNCTQHLIFIATXVVRQJBWZTEMIQKKKIVOWBHCNXLFL");
    msg.lat = 0.01189782994705224;
    msg.lon = 0.3159586251852661;
    msg.alt = 0.6892862925460492;
    msg.heading = 0.448048588296708;
    msg.data.assign("JVWFFYKARCUVBLADSRUIKPKNRXZXVIMTYPDWKP");

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
    msg.setTimeStamp(0.3326074102943122);
    msg.setSource(1618U);
    msg.setSourceEntity(131U);
    msg.setDestination(11065U);
    msg.setDestinationEntity(226U);
    msg.id.assign("GGPMUGXAZWLCPEDURTTNNXFWDAPYPZKTHHXIVCYSBPULROQBOOZBMDJHVVIEIOMEDXZVYJOFYRTKFOHOMVAFSXMCGQDLXYSEISRSFCZAUPRBQCTVIFAQMQTORYNZIULYKAZHBGHWSBWDAKHNTDYLMEJCHDGGVIYQFMFEFRZZAWJWLAOPNJSNBQNUWMDVGJTKAQKEZRLSCTVCGNKJXEXEYECXRSJPIGPHJFKHWCMDBKUQUUXQJLWBP");
    msg.sensor_class.assign("KOSEHNTFRWTYFMOEBUMYPTTDWBXGARZNNPFXZNXMVRUFCMGCHEAWKXOJGRALKRAYRJKXNSWPUBUBIHSFAAVIHWGVLEFZAYGDPMIIZGNTKFRIUJADUBYGPYDIKDYZBEYEWGYEQFMOJBUJDICVHFPBXPMCPCZAQLSEQVXLLQZPBNXKMALDLIQXQUTHTKCOKTSJGSKWQOMWRRCTFLZUVESVJJZDOHQLRJHVPQNNQ");
    msg.lat = 0.34826737199613655;
    msg.lon = 0.8129869311602282;
    msg.alt = 0.8450857725287294;
    msg.heading = 0.7806098133320162;
    msg.data.assign("YQWZUVEDGDVBSOJDJBJOBTUYVJZJAGQLSQESCEBUBCILCNTMCBIHOWLVPAAGTBDYRYVRJCCGXYBVDHZNMZUWKQWFTOQKKDMQATTXLDDRWXQCUFKVUNMFMRVXYYNNALAHGWLGSBIQOWYVCPVTPOFTEMGSRAFZLFQJELRCHNEKWXFAINPMOJAINPNDCBXXHZPGOFU");

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
    msg.setTimeStamp(0.9730417471153551);
    msg.setSource(31458U);
    msg.setSourceEntity(103U);
    msg.setDestination(10204U);
    msg.setDestinationEntity(176U);
    msg.id.assign("XHYIDASXBLZVHIKTQUDVJCQILKWQRXYNMPVOROZAUBCVUSUVUQBFQZEWTYCPNPJBANZSIJMHCDQDERRZVKN");

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
    msg.setTimeStamp(0.6460008392514087);
    msg.setSource(2724U);
    msg.setSourceEntity(82U);
    msg.setDestination(54591U);
    msg.setDestinationEntity(92U);
    msg.id.assign("TFYVHHTLUOEQDCINUKRZHNXTAQIXSPOLYNKIBGVCNEWOAXQLFWSNVJUJWCSMTPMJCEAQJPIEGGPKRFDZVOQFHBPGLCCTPVNVSTRYEUMBFMOLENNSZRKWCJOI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HNSBCJUXFHFDKVHAEJZZUINHPJLVRQBVGETLPYUQHWHDZYPTIIJVEQNPYPKSOTGHYJXRXPBHBMBMOQGJMVEWTGYMDVSIADJYKJFWVCCZWIQFNUAAPVCGOIUZKOXYBAGQAXOMLEMZCRZSEWFGTXUQWNSCJLGZIKXLDUOQKKOATFCMFBWRIQEJKNDFEVTWOONXTXRYAECTSBHUDPRUCKSPZCQLOKRBWFRGNRWNUYVMNTGXABDYZASP");
    tmp_msg_0.feature_type = 253U;
    tmp_msg_0.rgb_red = 245U;
    tmp_msg_0.rgb_green = 116U;
    tmp_msg_0.rgb_blue = 194U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6674443603045104;
    tmp_tmp_msg_0_0.lon = 0.7271595451484072;
    tmp_tmp_msg_0_0.alt = 0.3896974272260394;
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
    msg.setTimeStamp(0.8066570043291893);
    msg.setSource(55335U);
    msg.setSourceEntity(117U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(148U);
    msg.id.assign("OEGZTJACVXNTHZFJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BDLVDIYMPTNNXIKQOZTWAGNVHYJFGXOWSFJJRTKDNODYEDIYEOZIIOVKQZRGUMBTQAXJQYUVHFALEOTHCTKSRWMVZQJAPLCSBDYXIJHIHRFIKWZFANYHPFAPUZMFXWMWLBSXGOUNLQMULDBCVEVZIRFFEYKPPKPE");
    tmp_msg_0.feature_type = 232U;
    tmp_msg_0.rgb_red = 16U;
    tmp_msg_0.rgb_green = 238U;
    tmp_msg_0.rgb_blue = 209U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.20164342231844912;
    tmp_tmp_msg_0_0.lon = 0.34543646480898804;
    tmp_tmp_msg_0_0.alt = 0.5318782428724759;
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
    msg.setTimeStamp(0.6298449836890947);
    msg.setSource(39436U);
    msg.setSourceEntity(6U);
    msg.setDestination(57229U);
    msg.setDestinationEntity(221U);
    msg.id.assign("NCTZSRMOQHTUQPSICKJKEUQZVJVNDBDFEFFTBWKBCVODZRRMCGNLIHAQCICJFGQVXYWGBDOKVLPUHNMGBTDYELVOSXDMMJBDNAXIOOZWFTIUOPAQDPWRUYZXJXZSCHIALETZWCYZRSQUBEYGAEYHVXRWFEIGLABHBHJNYHRRCNLITLFZ");
    msg.feature_type = 223U;
    msg.rgb_red = 82U;
    msg.rgb_green = 226U;
    msg.rgb_blue = 62U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.46646256893320726;
    tmp_msg_0.lon = 0.2432156803942681;
    tmp_msg_0.alt = 0.37594020694110997;
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
    msg.setTimeStamp(0.8729680041517837);
    msg.setSource(22495U);
    msg.setSourceEntity(239U);
    msg.setDestination(35761U);
    msg.setDestinationEntity(197U);
    msg.id.assign("KRBIZCSSDOGTMIYDLCDGLIFAFTTYATREZYNTRZAWSXTNWVMHWKCRYNMEWNZEFKRUYHFXPMQOQKPUICLDMFXEWCGBIGKTVHERFPYGV");
    msg.feature_type = 196U;
    msg.rgb_red = 71U;
    msg.rgb_green = 110U;
    msg.rgb_blue = 146U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.18379469951966598;
    tmp_msg_0.lon = 0.9466230107673169;
    tmp_msg_0.alt = 0.2979297641702986;
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
    msg.setTimeStamp(0.2004033284546457);
    msg.setSource(62146U);
    msg.setSourceEntity(15U);
    msg.setDestination(24053U);
    msg.setDestinationEntity(188U);
    msg.id.assign("ZCCBDGIIZTDXWKIOJDDNVVOPWSCPRDPZ");
    msg.feature_type = 203U;
    msg.rgb_red = 222U;
    msg.rgb_green = 162U;
    msg.rgb_blue = 226U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7188754502691144;
    tmp_msg_0.lon = 0.9612564211448337;
    tmp_msg_0.alt = 0.25428735875531316;
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
    msg.setTimeStamp(0.004669138427696118);
    msg.setSource(60802U);
    msg.setSourceEntity(203U);
    msg.setDestination(29030U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.6651773319394061;
    msg.lon = 0.4059568426070218;
    msg.alt = 0.5727545354820739;

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
    msg.setTimeStamp(0.17923873451618177);
    msg.setSource(10790U);
    msg.setSourceEntity(43U);
    msg.setDestination(60875U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.2308719984183445;
    msg.lon = 0.8250186558492201;
    msg.alt = 0.8146674136173299;

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
    msg.setTimeStamp(0.08675376113557598);
    msg.setSource(6027U);
    msg.setSourceEntity(253U);
    msg.setDestination(43221U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.35710909334533714;
    msg.lon = 0.7198919503868152;
    msg.alt = 0.037774499479697576;

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
    msg.setTimeStamp(0.9187626734449222);
    msg.setSource(20671U);
    msg.setSourceEntity(216U);
    msg.setDestination(57473U);
    msg.setDestinationEntity(117U);
    msg.type = 47U;
    msg.id.assign("ZPBDKPZHKLSJRNAWZRYRVDYQXFPBNJGJYNCEDNBOOUZGDWJBSAMBZVSMUXZIVVKKHLLMSMVFRCNNYABUOFAMBWKRXUEEUOSEJWRXALODXCCYDGGKTMQKGHSWLVUGUEVGOEZFKWMXIAJDXGJCNTRYHEQMZFOQYCIFMTDYWJHDVZUCTJA");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5298457947808813;
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
    msg.setTimeStamp(0.04911759473156363);
    msg.setSource(19035U);
    msg.setSourceEntity(3U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(67U);
    msg.type = 144U;
    msg.id.assign("QOLOPYJRYXDJIVXBTPTSZETRQRISCPSNEOFJSVLIBMIZH");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 61012U;
    tmp_msg_0.type = 237U;
    tmp_msg_0.utc_year = 42871U;
    tmp_msg_0.utc_month = 238U;
    tmp_msg_0.utc_day = 177U;
    tmp_msg_0.utc_time = 0.5816692686234786;
    tmp_msg_0.lat = 0.26830035043344025;
    tmp_msg_0.lon = 0.7087595695932654;
    tmp_msg_0.height = 0.8931985008047185;
    tmp_msg_0.satellites = 5U;
    tmp_msg_0.cog = 0.27677745285738853;
    tmp_msg_0.sog = 0.9891115952285169;
    tmp_msg_0.hdop = 0.1943183964084425;
    tmp_msg_0.vdop = 0.5145444187599948;
    tmp_msg_0.hacc = 0.48942300950756756;
    tmp_msg_0.vacc = 0.5275037122546052;
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
    msg.setTimeStamp(0.2516088253966716);
    msg.setSource(42248U);
    msg.setSourceEntity(2U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(123U);
    msg.type = 86U;
    msg.id.assign("RVDBVGPZXGNXWNQBEKYHASMZVIJFEZPQYUNHTWRQCOSWVCKAARHNWHXUPTI");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 630946495U;
    tmp_msg_0.lat = 0.7997777475252068;
    tmp_msg_0.lon = 0.3913976313089833;
    tmp_msg_0.height_ell = 0.31667340687972945;
    tmp_msg_0.height_sea = 0.5296074792814246;
    tmp_msg_0.hacc = 0.5240801829153855;
    tmp_msg_0.vacc = 0.4701986984495943;
    tmp_msg_0.vel_n = 0.9757314483717562;
    tmp_msg_0.vel_e = 0.5907649730776329;
    tmp_msg_0.vel_d = 0.26703953059666186;
    tmp_msg_0.speed = 0.041084379812310834;
    tmp_msg_0.gspeed = 0.9038005144957518;
    tmp_msg_0.heading = 0.7423731555237427;
    tmp_msg_0.sacc = 0.9465458549307253;
    tmp_msg_0.cacc = 0.7209834549865171;
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
    msg.setTimeStamp(0.8184706181852983);
    msg.setSource(53391U);
    msg.setSourceEntity(183U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(208U);
    msg.localname.assign("GBVPBXOYIDEKFHWMAUHMEVBUYTWGVMGFSRBCRILIZQXBMZXGQMPUHZOYXPOWHKZDEHRZGDNKBPCTBYKQTWHOSZEDPGLCLKXFJPKVMNGVYLAKCJDTFYMWTVCXPXQOAJYQUCEVWENUKJXJAIISQCFPOWPSQTQICDZLUTAKSSOJVRZDDAKNERSDNRAQSCOBYMIAUFBRFFLQCVWLNVXIENTLZHRSRFBLUNRWOHIJPUMGFUNIDOJSEETGYZAWYHH");

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
    msg.setTimeStamp(0.18694610508010434);
    msg.setSource(969U);
    msg.setSourceEntity(107U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("HORNZOVTGYRGOKTYPGOOAAPAJIEXUWJJFUDFRWWUNZTKEPMHNDTMSECKMJEQYAQHEQCMBTLCBBTDKXNPDWQXQCIXIFTSBAVQSDSCLLRYZLIBXOXAW");

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
    msg.setTimeStamp(0.17950749662222443);
    msg.setSource(14148U);
    msg.setSourceEntity(95U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("OYCQJKXEPJEVFNXLPDGFDBMAYSSEXZRQSNCHTMUNKGZWI");

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
    msg.setTimeStamp(0.3531770165908129);
    msg.setSource(57012U);
    msg.setSourceEntity(50U);
    msg.setDestination(55774U);
    msg.setDestinationEntity(53U);
    msg.timeline.assign("IMHIKBZDCFSYTXZJCFEITNZYPGTWYLXJB");
    msg.predicate.assign("HZXGVJYCKQILAEURKIIARMGDODGGDISVEHUORIFYQGZTYBCKLCUBWPJQKEQFNYAPMFMXLVAHLZKLVGJJAXPRPWEAYKMQFVZDFQSSXZTBNNNZUTIKSCFXMBWEQQLTUSPDLJEEYWMNBMPKPSKGCTPEXRDVWDCQWLOFIFXECJGWSQUCDUCUDABTVATWHOVOTJCXTORMWVNJABSZEOKMMXUUHYOYOALYZPTFNXRHHONHIZWJRPRZYSIDVFI");
    msg.attributes.assign("KLONOEFGKHSBZXIGHTYLLNCGYQBIVFSRFCWOGZNHBVAFMIUXVJTFXIPWOHZIEWGOUYXCOYQQVRPGNHJUNKOQNVJQHXKWTWUGLNWAMTLBIVRXBOCXPQRZSRACBXHVEJMJOTDGZSZSDTUDZACSIXVRBA");

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
    msg.setTimeStamp(0.8634210963425868);
    msg.setSource(47138U);
    msg.setSourceEntity(94U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("HBJEXCVQYOHUHKNAPETMVQBZFQDLPADBCQBCXUNGNKIISASLXPYSDSGICFJSGEMVQZPAKFHJUEPDMEMRTMROHKZOTVSYVFOWAXZYCWWTHVIOUUECJYCZDRJPJJFPJKWGUXKNYMKZNLXDHERLZVRYMTQCUYRAARMTZGLSHDYONXLAWHTGEFVKRBAVJOINNEHGMARTNWTQICPWTILIQXOIMPWBLYGFDWKOFRQFJXGZSUSUDVECGX");
    msg.predicate.assign("PVIUMOSPEKOSMJIASHLAVVCDMMFVRBVXIRZZOYGXMRECTQTBTIGELSBWGUAMCWIKHNGPKKQCYASSFPKAYEUHXEBDYZDGWOWIHQ");
    msg.attributes.assign("BKWOGYWJZOIHCDFYHGLYTZBERWFCSVCKLKXZWLMSICITVQLMMNQSFIGCGSRDFKUZOBQVQJPOLFDXVGLRSANNPEHORJDYVXACHWTFEYBAIEJULPMNIMRIRDMTZKDZRHSMAWXEKNGYGQOBXDIFEWBIQCRJPHZWS");

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
    msg.setTimeStamp(0.7300414048782505);
    msg.setSource(23103U);
    msg.setSourceEntity(197U);
    msg.setDestination(22180U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("HAQJYMWYWRLMNELRVQWGEMGWJUCXKFRTAINWOHADNDFFXQQJZNKSWLYUHPFAIFSDYPPERQDSTSCAG");
    msg.predicate.assign("WGGJLTBDKYWZCGJQULJHXORRGSCZPUNDRBRJPHMZYQNVTRLWDTDOSKVJBYAPKIYPJGXCEWMAIZLQBTSKWEXFNHNVXDAEQMQTBIXHFNESMAVMLKMZPUUSKCVTRFCELDYPOSFUDWIZBPJCGFLIDJVMTUHIZTNEMEVPINFYMLKAYIPSYQFQGRAYENURR");
    msg.attributes.assign("MQMJVNRYPOAHWQMAYNVHFFLFMJCNKNJZEYR");

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
    msg.setTimeStamp(0.5404278626815521);
    msg.setSource(22075U);
    msg.setSourceEntity(56U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(185U);
    msg.command = 251U;
    msg.goal_id.assign("OPISUDXZKHHSAFRNYGCIBTPRKQVVFFWBTKLOGBPYBAZDLVDUPGNMEEJXEJP");
    msg.goal_xml.assign("EURWURQIFUXMKUMQYLXHYQULHQVQYCRNQDIOMKVJEIHAUEBMSPTYRLGNQEFKILSVKTRKDHPVXGAZDXVCOCNVWWFBSGGWOWTECKYLRDKCVCOTNPBSSXONJXZLNSUQJPLFBFBJJYCUWXRAZFWFHRZGSHADMTDPMMBTDEPMGPPTCPISEJNGOOEKJRDGXWHNWAYWTIAKNVZIMFLBYLP");

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
    msg.setTimeStamp(0.4097548947220385);
    msg.setSource(27289U);
    msg.setSourceEntity(186U);
    msg.setDestination(24118U);
    msg.setDestinationEntity(211U);
    msg.command = 48U;
    msg.goal_id.assign("JWWXZAJOJKWXKHNYVVDYVSJCBMJOIUWXSMZIYUMNSNJMYWHTKWELGAKFOVXOSPZNVFQWHOANBDNIDAQUISDTYIYCPTQIFVBLAUXPGDZMURWJFFQRNFPBTQKSLOZGYPTYJJMPDZOGB");
    msg.goal_xml.assign("MMEBQAEHGOORZUUXDHSYXGLAFWOLNLRZIQUCPWTCXUXHHKPGUFBPVCFGRYCIPZYVIIROENDSVWFUZRHD");

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
    msg.setTimeStamp(0.9268117538877465);
    msg.setSource(2719U);
    msg.setSourceEntity(94U);
    msg.setDestination(19427U);
    msg.setDestinationEntity(171U);
    msg.command = 190U;
    msg.goal_id.assign("YYMHFYBPSRNKXVNFWLHQFIFEGMQAPYUMFGSGDKQSJNLZNXJJSCNFJOCUUMRQANPNFBGHCYWTBJCIPTAVLWRUXLXCDMIZVUTKQXATEBSLSJESPPDRCIXATKYMIHCXOBBPOKVQGMFXRHWNZ");
    msg.goal_xml.assign("SMNIPBNUWPVHEQKQZWUVXGUDBXNYLNQSGCIPYIZWEWVJSERTOGHTRYETQMXBKUGUMMUFLANKGDVSCAFFFSZR");

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
    msg.setTimeStamp(0.4011251027872922);
    msg.setSource(62008U);
    msg.setSourceEntity(19U);
    msg.setDestination(18869U);
    msg.setDestinationEntity(249U);
    msg.op = 40U;
    msg.goal_id.assign("HQDRYZOBXHTVNMWHDKSUSCPAUMSOMZEFOYHODQSWMUSNTPJAFIJDJCWCLCWDEWBRPKNNNJPVYADJZLAGKOHMVRKGJUWFQEKPRGISYSBOEVUXBYVCERQTUCFITZRTGWLXXKKFVOPGQSWPIFGWRGOTCLJIZRBLEAHZFRYTKTJBLNDBOBXEPFITMGGZLUNJCUIMAULYKFVQD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TOGJKVKUPSKSCNSXZERRMJJIRUKDBWWQAAYCVNIXLEDBPYSMPPKYGXATJWEXEXIOZIMPRURADRHKGOBNILCEVIYZGGJYSNYNLRLLGBDDVCDHXTVQZYFLOIZDTAQKOQDYIMLOPQPTGVNJAULVZLWJBGYBCNWRFHUMMFBAOOJPUWQHKQNSHACDNMERBUFDMCWFTHGCKFZZIZFTPFTWBJXKOE");
    tmp_msg_0.predicate.assign("OTAJMKPMPRXQOLCUJCNKCJQRIGAQSZNPJIALCJENSYCFWOSEXSZKHETYDLYOVVVFFABSURINMCZBUENLOMEGHDKEJFEABBFSRTHMAQVYVZARIJPXUOIQWWJVCXVBWLXWFTCAMYQCJNTKOWHNZBQTRGXNBTKNLBGPBSFUN");
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
    msg.setTimeStamp(0.7185603939548455);
    msg.setSource(63600U);
    msg.setSourceEntity(123U);
    msg.setDestination(14205U);
    msg.setDestinationEntity(69U);
    msg.op = 106U;
    msg.goal_id.assign("NBWPNUYFMQYPVIBYNGGWYKFLIJYEYFPJQPPTWJLJDXIVURFMEDRXMRYULEGDQOUGCKEOVVCVHOXJBVFXWUJJKGHBKQCSVZIAALMTPXWQABFLTHRVKZDODDKNJRQOTFALFXCSISOACNROTPKTIHNRPSBLYWMLSPHSGAQYHAHVCRSNIKXCKAMFBZTQTEZVL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HSQTVNPWIMSKVKYFZFSTDVLQALRVOLYDHFRSZBZHWJLCRAUCYMZYXQJQTGEBUGOODFAFIGIUXFJVUMHYUDXCRMNGTEEUZPIWLKDWSZAXNIJHHKRRQWQPNZVNYMVPVCBLEGEKBP");
    tmp_msg_0.predicate.assign("PRLKNDWFYRUMNUEBSJXZVEATLGHEWUQKLKOXPVTQNHYWWQGSMSRMDZSDNQGZGLRUXARIOMTFSBKYSEKKBXLTBZBPPZQVEEJEHFIVXMOLNXZQHYNDOTKFCKIDVRZGQNUYOXCIJMPHDGQVYONMAZUDHPPQJHDGYARJVJAWRBRVUCAISHKTOFWANIBXAETHCUZVUGPGJH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LWOSJOUAVMIRZOFALYPVQLIDHZWELTWHQKVGUNMQAUGYWZCRVRJRSHENRPLNWEBBPIFGCZPTFUNTGQOYFRYGVRMCVSAXVBQIJFILXBKFEMICZOHSGJAIYHCCXDZJHTLWTKSTPURKNKENBQKDHEIPAEMHMTZVX");
    tmp_tmp_msg_0_0.attr_type = 15U;
    tmp_tmp_msg_0_0.min.assign("ZXVFVJRQMPMDNMGFZLIRBJARHUWCJBGMUZQDFUYIRKIFQIFGBXLLB");
    tmp_tmp_msg_0_0.max.assign("XRWQBLABAELHNPRNNIVIHDUSMZHFYQGGUYVXSCKSJCIVWOZDQMBNNPZFKUTVUUAZKRTOGWHYSLNNBMPHTLESQGEPCVOOOJWRJDGZLVFMTZARXOJAXCFRIRCDYDINXFSMEPTHCQMBCBUKUNSEWXOBQXBTTKOJEGIIHLFFBASDMWOJTOLLMTKHLPZFQSZTKJYHYCDMFCEMUYAQKUXPGRJC");
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
    msg.setTimeStamp(0.8965542524748559);
    msg.setSource(34823U);
    msg.setSourceEntity(123U);
    msg.setDestination(26038U);
    msg.setDestinationEntity(239U);
    msg.op = 162U;
    msg.goal_id.assign("ZSLZFKNLCSVQKIUGGZRNEGNHLVW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FDOWLDESJUUCQMICI");
    tmp_msg_0.predicate.assign("KDNYVJHSKPVQJMNCHLNOQFLRFYWAICAHZFGZZCLFGCHJSTWEHECVKSKDBORIYUKNCYIGUISDQTDPJDQZGEUWCSNPOQYAOIEYVSMREQXFMAAMRDZYEFWDPLFNSTMBZPIGBMZVBXTPQWEKFYWSKXIRAGXNGAWEWRUODZHDOOLUASXZKIIRUGTNXHTIVHOPJMYHKLUOYULNJJQWVHTXNZBVPJDBXVRTTKXSCAL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KIMDRUYFRVIYWILAMQHDZBUCETSZOMOCKFDBLLVQHLSQTGRANSNTSJRFE");
    tmp_tmp_msg_0_0.attr_type = 51U;
    tmp_tmp_msg_0_0.min.assign("BUHQVSSBZBDBUEDJBJAWNNYQMEGJAIMLGTDCNQFJUSQTAGCPDDODCZWLRYBLCYUOXLYVPNTYBGICMAWVXHXYIALZUFVUOJKOFJSFSNCFEVKWAEMJODRKWQIYPBVIHTZZXPAJQNPCXKCZQKHSVWOTVYXKQXDMAOJHYKPRSEMPBWYIXTWKEPTNGMULRGWGUREZFLQDLWZHVZ");
    tmp_tmp_msg_0_0.max.assign("BFMXYWVIRFQANPTZYPUXJDRTTYSRZWGMLXNLYIRZDEBSJXAGDDIKGMVIFOMTLDAPAOWEDPFDGZWSNDTLKMBGMNYVJGEVHZNWLEVVINHHUSQZIHYJTZCVORFFKSEKEFNPWGWCGUSJSMXLMWXIIBXVLUBQBJLCJOYFUZKEXPURSUAUQVNFMTBBOZCONHCYHYQOAVXEXRAICSBEJAZPCELOHDNBKMLQK");
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
    msg.setTimeStamp(0.4668051706885519);
    msg.setSource(2997U);
    msg.setSourceEntity(3U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(98U);
    msg.name.assign("FIYVHPUDSJJACENSQ");
    msg.attr_type = 249U;
    msg.min.assign("VZTQNSUNRVMFPLSKBPKFAWDBFEFBKRQGBRVIKGJMHNXYFRFLELYESAKLRZVTFKFIOXSPEDCKQKWN");
    msg.max.assign("BFFWSJMCEIPGWAYARP");

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
    msg.setTimeStamp(0.7855912941022529);
    msg.setSource(58827U);
    msg.setSourceEntity(99U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(129U);
    msg.name.assign("GNBFZACGRJZKPKLLKPDQEJ");
    msg.attr_type = 81U;
    msg.min.assign("AIJIIYVDJLVEDOFKROVXKBFTZOOEGMUWZKDWDKCAHGODJRNXYRPCEYMMIQQKNYNWAWYLZPKEHTMOCOWYNKALGZYBURTBSBLHFUTJMVAIKTQBPSIBVHQHXPGNZEPQXZSVAMBPYPNCNOZXFJUFBAOLTFTZWEJ");
    msg.max.assign("BSWHIDGQQTQRQGQZBPRXYKKQDHAVUJPLNEZSLGERXINLTGCNPBMOBHORYDTWHOYZCAKSDCQSWJVVCWCJCBHUGREPJZIULUSXZIFIURWTGNKZOELSZKNFFHVQAEWUPMSAPBCFFUTRUXAJMJPMIZYIBDETKRLSMHBEGGFPXVDRMFTUVATQNIGLLJMVNROYCKOTDHDWXWPMIOAZEJGWKOFF");

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
    msg.setTimeStamp(0.6946212404446191);
    msg.setSource(44914U);
    msg.setSourceEntity(244U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(253U);
    msg.name.assign("QYAARYDGYNMWAGRZRLGLZDIWMCNPZNMGKHEVIKGTDQOTXSARQVSBMLBNDFJKYEVPUVFAQWJOZUNSTPOYMIYLZGBSLJTBLTYANFXPRQHUDBNOAUWAZVHUYNAEIDFUKWIMSXSOKWM");
    msg.attr_type = 47U;
    msg.min.assign("PCPWPKONXYWRPQWILJGXERSQOMGUCAFHTXDAVWIMPVBPCMATYEBGZFLUJKGTIESMRRHVCBURDHGHSRYCTUHBYZTNLVEQBGWWXGAKOQNXUPUAKQFNFEVOQTMNSJMWKXNCDTEWRRKRUNPLZGZCHFCWOJNDODLJHAXPDLDIXHQBZTBTYDOQZVUKBMSALNIKILIZSSYJZEISGEFPQADUEWOJVKFVYMIICMJ");
    msg.max.assign("IKKZFIQSEGZQTFXSILYUITOMRJOYAMLCCOGRGOAUVRRU");

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
    msg.setTimeStamp(0.7553613339309675);
    msg.setSource(44501U);
    msg.setSourceEntity(222U);
    msg.setDestination(18902U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("XWODEFHBCGLNYTRPBFSNKUDGCBHZTRSUGCRNGFPFOYPSOAZXUDYIPXVNOFGXSMFPTZDNRJGRAUADJX");
    msg.predicate.assign("EZLOPLQFYTAPMXNNBAXKHLA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SYIAHZJSBOSKOCOYYZYIWTZSLMMZADJKSIMFSTCYYFMHUJNHPBBQFBNLYTNVTNDKMNCQGBPHINRTOQOXJWHVRUZMWCXCBOIZEULPWNULNZKJXBDYWRKHJQGAQJUXMSCETCPQHMPGFXZUDIWVKPDVAWQJYBRLLVKEOIUFLPMDIGTFMHGUQEDCNTQGLBGXOIEVGFXKAVYATPWURXUHTQCREEFKZFCVI");
    tmp_msg_0.attr_type = 250U;
    tmp_msg_0.min.assign("ERKZVPRLMDX");
    tmp_msg_0.max.assign("SZXANLQVVJZJRAPZFMNLSSPUYBKNXPBKALHMMDUOINZSJOJTHDUFQGABCCOBNJGLRIKMUEHOJVHRVMGZQUWZFSVDTFZYFFKBDDJRIRCVHPOVBQTKNPFYOSGXUPEOETGYMXGFMGIAQDSQBLDEMNPODQIPCIITSICWXYAWGRXUHOHJWCIXGKYNRKVBPLXUXAYSWUQTBHDJCIUEBATPM");
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
    msg.setTimeStamp(0.35565544801220705);
    msg.setSource(59125U);
    msg.setSourceEntity(148U);
    msg.setDestination(42202U);
    msg.setDestinationEntity(31U);
    msg.timeline.assign("KWFCSEAKHTDOMUYVTTMXDCIWLVZPRGJBPQEXLALSVZUHNEXAIPFURSDDXSMAAPPNAYHLBUDKSENCVEYLKJVTOTZXHFZQRIXIQJWTGQRVZMBWJGKIVCNIZRAOVXUNIIDLPQNZEWMYQHOTHDPYHAXHBYOWFHRFQFVGSQGOBTGSLKBWCCCAZONOIJMRLMYHKPBGDEROEJJZMB");
    msg.predicate.assign("UQIMCKRMRVQZMABKKKFAMQPLJMUSBTQHDNXARDGHYVNDJKWIQNUJQJLIHQHTRGDGFKZXDHCCPWXHESCRWOBFGVSEJOWFYSFPDUVLUMHUKTGGHGMTS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ECTNZPBDNJNBOHRQJIRHCTZDZGMLMNFVKFPOWXAYTKAGVOQYXYNKPXYNRXDIDMSVLHVWUZJUZSBTYEWHVFHAFJQQRNXIBPADEVENCGTYLJWWODWMGKAFXISXPFDEFCSMGHHULPCZIVGCCAWTQRMDZWOKH");
    tmp_msg_0.attr_type = 145U;
    tmp_msg_0.min.assign("ZLNRFQHJDVGTYCGJCNEOSOVYNXKWPZEWMTXIZQQAJMRKTURBVJETGXHPIZNIMKPNOJJHOAQEOFGWYRZKLXCTDLYBSRFSZMAMDXMAGQXQOWEDUBESHFUCEIHLQEVZWPHAVVYXDGGMBRCJXIULDYMFKDTMOLLNZYEPBTIPSNMRPIWUHVSUZVQQJIAHHACKQCBHURSFYLPNPSFTPNOTKKOBYTIZUWAODSVFKGFWWIDRSBXVLRLJFUC");
    tmp_msg_0.max.assign("WGYKQBDEYNPWADVLQBMBQTJRUAMMZXLJOWJHVYLOPOGEEUCJBBLARSSNFSXXHKRFEJITIEWSSDZGIWURCSMHAGHGNYYUEYMHMTDXCAHCFXMHPOKJCBKTJRZPPUWCVQPYVZFFBGVFOKOEJKZMGHLRODIVIVFYPIUBUDNEBRXHAOWXFVSKDIGZUMDAIOTG");
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
    msg.setTimeStamp(0.5003201394595195);
    msg.setSource(61132U);
    msg.setSourceEntity(113U);
    msg.setDestination(36570U);
    msg.setDestinationEntity(73U);
    msg.timeline.assign("NSYRUEVUXEPMYMXMBLBDTNZQIDVSVSJXYOXZQPPGKUBEKYPHQMIFPXJJJUPKJCPRJZWOINLEDHWBYCUWPTJMKHNLMHCOCVUQDILNWXEIEYJLPYIUFTDKXVIBFCBVLZSATILMDAXDDASIFGUHDTARSQFTOWTNLYSECNCRSZKGTRALUAWOHDGGIQOYMRGQZOBEFWJKRWMFZOUEGQWHVHMHQVKOAXJKYK");
    msg.predicate.assign("VYZZPGJPYSZRDSWBRTDSCXYRCPMZGVJETINWFELECEDWFVXBHJXSNLDTKWSYJPPVMUQNLLALUTGPVBKQNAIAYFFOMZDJHJXSU");

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
    msg.setTimeStamp(0.2978187299310907);
    msg.setSource(21175U);
    msg.setSourceEntity(74U);
    msg.setDestination(65057U);
    msg.setDestinationEntity(187U);
    msg.reactor.assign("LLRKANBFKEFREIDJZRIZKRWSJCYXLHHVEVPAUWWPQSMOXZYCCQOSJAXKCTOUYMTZQQVLNXFVPFWKICUSZEGKVXNHEMSHSONHYOSDZLZZJAITFFGMUCTTYUSWEUITHBUWRDGZALPGJXCKEDZUBOAGWYEYEDONXNFRJOVPDNJCNLTQV");

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
    msg.setTimeStamp(0.2637072321127658);
    msg.setSource(18431U);
    msg.setSourceEntity(176U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(86U);
    msg.reactor.assign("GCMNIFRCYSIZYUDQRUFIWQFXWHJTEMLTDQRCXEMYDPLUVNKMHROMZORKQWZAHFXDRBAIBVMREBHPXEWTGKLTCDEXVVLNPANBBJIHIZOGUDAJHUGACNFCSTWSYISPICPKPHOSLAGUXFEWIISSTCHVZAWUZEYMYYMRFJOBMTBZUZTZFGCEJDEAZWFBVNFABDDJKSLSMHJONTYLXANTQPQLQB");

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
    msg.setTimeStamp(0.2203975312745592);
    msg.setSource(57740U);
    msg.setSourceEntity(219U);
    msg.setDestination(36066U);
    msg.setDestinationEntity(77U);
    msg.reactor.assign("JSNRKIXJVLZPTBEBKQSDMRAGYJMIRWEEWBGRDYEZTDRIHUXOBDNQUDTAQZALLYJHGOYFKFTJQBOCLCSKIZKVHGDOOHGKHHMZLKQGZSLBRAEVXJNGUNOWIE");

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
    msg.setTimeStamp(0.8375923749809179);
    msg.setSource(43470U);
    msg.setSourceEntity(128U);
    msg.setDestination(25865U);
    msg.setDestinationEntity(219U);
    msg.topic.assign("RXGCMVJEIGAGOVGQNMINNYNKFBTZQUFUDLTFVSFIGPQLJXEZAAZDOXDEFRXWMCAXSMWUHYKFDISWMRSRZQNEG");
    msg.data.assign("VGTGBNYZTBLCGRAKWMNCKHRYDZIUPXNLRMKDPOVQEACSSMF");

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
    msg.setTimeStamp(0.6432643394997037);
    msg.setSource(51781U);
    msg.setSourceEntity(153U);
    msg.setDestination(1520U);
    msg.setDestinationEntity(238U);
    msg.topic.assign("MWZSVHDBWCDDXFDQEFGZEQWILWKGCKGGMPXYUXRVEVEGJTXBQYDLIDWJDPGLFTTULEYOOGNTKMJDOVUPUYJZNSWVLXBWHSLSTFIYSOHEUZNEURFHXFFTM");
    msg.data.assign("UITQXETCWMEXJAMVFCIZZHVKQBYNWVNPNFDHMDMHUHSXQGZDECSFXGKPCDGFOIGOOJFRATRYAWSYLULPYZJCJESKGNBDSNKNL");

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
    msg.setTimeStamp(0.024704467326099877);
    msg.setSource(55082U);
    msg.setSourceEntity(49U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(34U);
    msg.topic.assign("PZNPMOIVTPCKAJSFXSIRXDALLKYYTAIAUOWGEBOUVDZZSKPDNKDXZQUJXLOFMIQGCATHPURGNETRQRFTFUWUEMNSCY");
    msg.data.assign("LBKHEVJITMPXDTTWDUGHSKUDBDCFVSXNAQBLSOXXRTFPJSQRBIRLIBZGIMQNIWDGHNSOLCVKXGOCMGRVAGRNHGEGJBJCAMKQAVTAUFICAFLMIPYCGZXYCQATMZYNYPEDWBGEFYDRQQYQWDPITXMVZRNLLKZRYJXXEUDTEFZHOHSHFNOJEOKRPKZPAPIO");

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
    msg.setTimeStamp(0.33966667921281346);
    msg.setSource(62831U);
    msg.setSourceEntity(121U);
    msg.setDestination(13341U);
    msg.setDestinationEntity(136U);
    msg.frameid = 15U;
    const signed char tmp_msg_0[] = {1, 109, 32, 75, -26, 55, -61, -33, 2, 28, -32, 11, -90, 70, 15, 31, -39, 64, -119, 58, 19, -120, -35, 19, -29, -59, -27, 7, -19, 6, -104, 27, -59, -77, 51, -54, -121, 114, -15, 42, 90, -53, -56, -12, -62, -36, 6, -60, 50, -55, -99, 76, 97, 102, 52, -113, -51, 49, -104, -37, 73, -19, 96, -88, 79, -90, 1, 38, 22, 84, 47, -69, -27, -106, 81, 54, -27, -98, -2, 34, -114, 69, -47, -86, 33, 90, -103, -63, 115, -110, 0, -96, 30, -102, -13, -89, 81, -28, -32, -112, 51, 104, 71, 25, 95, -8, 78, 85, 99, 16, -83, 28, 23, -101, 60, 118, -88, -101, -15, -32, 63, -108, -118, 86, 47, -96, -50, 44, 74, -120, -71, -94, -33, -27, -53, -116, 49, -84, 8, -40, -58, 99, 14, -24, -18, 57, -80, 37, -32, 104, 10, -6, 25, -42, -91, -24, -74, -26, 54, -16, 57, 9, -1, 53, 48, 49, -38, -125, -120, -38, -119, -77, 101, -3, -111, 126, 61, 72, -76, 107, -49, 20, -63, -107, -60, -32, -106, 43, 14, 38, -15, -20, -128, -95, -45, -44, -110, -91};
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
    msg.setTimeStamp(0.5055387548477104);
    msg.setSource(48264U);
    msg.setSourceEntity(103U);
    msg.setDestination(10791U);
    msg.setDestinationEntity(156U);
    msg.frameid = 185U;
    const signed char tmp_msg_0[] = {-20, 115, -94, -127, 92, -89, 106, -13, -76, 37, -48, -40, -23, 102, 26, 51, 11, 115, 77, 71, -62, -31, -111, 111, 22, 33, 83, 35, -78, 68, 69, 64, 117, 8, -120, 24, -4, 33, -79, -66, 30, -31, -46, 49, -124, -72, 89, 60, -103, -87, 47, -48, 17, 66, -89, 28, -105, -85, -75, -56, -117, 68, 14, -50, -59, -89, -60, 37, -42, 113, 75, -50, -52, -22, -71, -122, 124, 84, 116, -49, 103, -85, -17, 81, 69, -37, -103, 85, 27, -1, 22, 42, -42, 4, 33, -4, -63, -45, -71, 16, 12, 46, 88, -41, 10, -41, 21, -33, 36, 74, 126, 58, 11, 3, -87, -22, 24, -29, 105, 3, -12, -119, 15, -49, -25, 82, -119, -3, -9, 65, 58, 49, 42, -27, -29, 28, -57, 55, -71, 84, 10, 119, -70, 82, -1, -19, 96, -39, -27, 51, -93, 121, 111, 79, -58, -15, -69, 37, -92};
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
    msg.setTimeStamp(0.7907052239560205);
    msg.setSource(64566U);
    msg.setSourceEntity(201U);
    msg.setDestination(218U);
    msg.setDestinationEntity(133U);
    msg.frameid = 80U;
    const signed char tmp_msg_0[] = {-64, 8, -102, 19, -98, -39, 35, -106, 116, -104, -70, 13, -124, -80, 33, -8, -66, -65, 87, 61, 57, -74, -27, 77, -53, -108, -117, 47, -71, -48, -127, 24, 62, 2, -119, -7, 97, -108, -91, 121, -55, -87, -39, 41, -25, -77, 117, 90, -13, 43, 92, -2, -108, -111, 13, -68, -28, 67, 82, -74, -79, -76, -128, 11, -59, 124, 62, 37, -46, 0, -77, 84, 57, 76, -78, -2, -26, 67, -19, -47, -22, -31, -124, -52, -19, 115, 114, 69, 79, 18, -15, 28, -36, -73, 70, 50, -35, -33, 49, -128, 77, -28, -25, 99, 89, 27, -24, -33, 13, -96, -83, 22, -77, 28, 121, 91, 2, -109, 114, 80, -67, -82, -102, -68, 95, -41};
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
    msg.setTimeStamp(0.11972460125545614);
    msg.setSource(46701U);
    msg.setSourceEntity(116U);
    msg.setDestination(64476U);
    msg.setDestinationEntity(214U);
    msg.fps = 131U;
    msg.quality = 153U;
    msg.reps = 93U;
    msg.tsize = 63U;

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
    msg.setTimeStamp(0.40478375343635187);
    msg.setSource(51941U);
    msg.setSourceEntity(198U);
    msg.setDestination(18464U);
    msg.setDestinationEntity(119U);
    msg.fps = 17U;
    msg.quality = 212U;
    msg.reps = 103U;
    msg.tsize = 161U;

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
    msg.setTimeStamp(0.44964596694167647);
    msg.setSource(45006U);
    msg.setSourceEntity(43U);
    msg.setDestination(12850U);
    msg.setDestinationEntity(81U);
    msg.fps = 208U;
    msg.quality = 140U;
    msg.reps = 133U;
    msg.tsize = 42U;

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
    msg.setTimeStamp(0.9537553277217131);
    msg.setSource(17948U);
    msg.setSourceEntity(100U);
    msg.setDestination(20148U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.39526365602516644;
    msg.lon = 0.6246900658618658;
    msg.depth = 172U;
    msg.speed = 0.11433164405902674;
    msg.psi = 0.18278390212340911;

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
    msg.setTimeStamp(0.14978160082414305);
    msg.setSource(5119U);
    msg.setSourceEntity(2U);
    msg.setDestination(7685U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.8683538956742596;
    msg.lon = 0.11134646633823742;
    msg.depth = 229U;
    msg.speed = 0.5260512166178115;
    msg.psi = 0.9735857187628295;

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
    msg.setTimeStamp(0.3920792138316308);
    msg.setSource(14360U);
    msg.setSourceEntity(230U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.7197409033830948;
    msg.lon = 0.4157379937801654;
    msg.depth = 56U;
    msg.speed = 0.15452171493625133;
    msg.psi = 0.3632075019565316;

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
    msg.setTimeStamp(0.8259504981074415);
    msg.setSource(16432U);
    msg.setSourceEntity(185U);
    msg.setDestination(22670U);
    msg.setDestinationEntity(115U);
    msg.label.assign("GCNRQNNTWHVQHVHGMWMCVAUBWGEIMZPUOKFNQSWTP");
    msg.lat = 0.8647425560681855;
    msg.lon = 0.30594827727497387;
    msg.z = 0.8927600574810631;
    msg.z_units = 57U;
    msg.cog = 0.23007651599625278;
    msg.sog = 0.7760553280899987;

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
    msg.setTimeStamp(0.9891754335197374);
    msg.setSource(34632U);
    msg.setSourceEntity(87U);
    msg.setDestination(29248U);
    msg.setDestinationEntity(42U);
    msg.label.assign("XACKKXMBJGTEUMWICPKYJTHGEYTZMNDGSYQFGBWKDEKSUNZIWVKVBCNVRCS");
    msg.lat = 0.8570736035022645;
    msg.lon = 0.5377483279681158;
    msg.z = 0.04340723048106576;
    msg.z_units = 236U;
    msg.cog = 0.5412133140701566;
    msg.sog = 0.3090187979557817;

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
    msg.setTimeStamp(0.17321984220610342);
    msg.setSource(14812U);
    msg.setSourceEntity(88U);
    msg.setDestination(36481U);
    msg.setDestinationEntity(217U);
    msg.label.assign("MEMMKUYKWGLKUHQRMOQVLDWIEOBXTVXFAFKASUUWXGYTTJXYYQHGRFCVQSOXMGQGBTLYFZKJHVLAGHJYDFDWTJSTXGEAPINPWCBQHRFUPDRBXEGQUHIPFWZPYZALITCBENUODJSZISAAESCEWJDVTZNBPNPRIZWLUMIAKHDNTCRJLZNJXDQOLKHPZZGEYDHERVCBBPFOSIJDSCKFSNMBWKVNLVVXYOLKMOQBNI");
    msg.lat = 0.976692769744209;
    msg.lon = 0.471366110462068;
    msg.z = 0.1102806238581111;
    msg.z_units = 123U;
    msg.cog = 0.9448092051784044;
    msg.sog = 0.8835837175523915;

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
    msg.setTimeStamp(0.04567855011044808);
    msg.setSource(62348U);
    msg.setSourceEntity(166U);
    msg.setDestination(40662U);
    msg.setDestinationEntity(18U);
    msg.name.assign("VGCWTGFDTUIBIHLSXWXSENIAGNBEJJROMHZDQQOMQENNXQZWMYSNYRYTXFQUCWSYPYSQSTJBPOQHBEVIUWLDHOPVAKZHLQKICVKWAFTELRNOCTOAZYJRAZB");
    msg.value.assign("OMKITLTGAFPOCABBNVRTQDLTJVVLWNYYUHDJDHNLPVVCRRSDFXSNBOYNWKHCSOZNFWNZRWQTHQAWXANTAPZUBJGQOYMCODEPERIWXAPCYGYFITVSESMPBHTGLZWFZIKRDBSLHDKPQJUOGXIOSMNWMOQZUKKXSPLFGJQXYIQXHBVEZXYICREJUJJZRGNPLAKPWQVGUXAM");

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
    msg.setTimeStamp(0.35085828336875957);
    msg.setSource(54256U);
    msg.setSourceEntity(199U);
    msg.setDestination(36938U);
    msg.setDestinationEntity(254U);
    msg.name.assign("TODOCXAFLNUNGJLZDQHCIMBUHFCAFNFUMRCHKPEACOZKNHMTPWDSVMSQALIEDWSVSGSBGKRLYGERTNQPMNRTJSFBRXRXLYMMTOIYHWYTADICGDD");
    msg.value.assign("LJRBNZWCRDWJMFMAHCILOMBHJQDDQMHPMZMLTCPGLQSVEZGUPFGHWQGCXYFOEIKINPARTQKKPQIVWIIXXISTZRIYAHZTZVWKEX");

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
    msg.setTimeStamp(0.6888602844735676);
    msg.setSource(2551U);
    msg.setSourceEntity(171U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(68U);
    msg.name.assign("GJARFWNZJVIFVKGNLUUHUIKYYCCOTBYQOXGWSBDISRBLNPMECMQHVTXHOKSKVRBDNVWKHFUCUDXORCHFEPHXXGRDLGTYSJFWEKAEEWLFIPSKJSFGNQNCPMZQXLXLYGMQUBSETKVXIQTNBLVGSJDUMAGADJWAFHMMDIBCRHCRFZIZDQTUWOWJAZZPPENTQTZYCVSPBNEXIYZJEWZZYAJVMPYLNRRUSBLKWQALAOGOTMFCIEDOU");
    msg.value.assign("RKGHCOOLKWRFFJBGLVWNTZUSAMVRQSTIMQXJQUZLNCZHRIAFDBDCZEJWQVCHUFNIFVBEDVVSKSLGXRXRTMCNRSKKMMJSRLLBGZHGUTPNQXSIZBEYQDOEOJMYAKRQXIQYJAEXYRYVUWECGJAXETOBUJWNQYGLTJDCEPXMTTSAGVMYXWKUMHYPDNZDLDWIOBPHUKALWGVFATGFWKETDQFPZWYPFPO");

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
    msg.setTimeStamp(0.8971097452219893);
    msg.setSource(4350U);
    msg.setSourceEntity(151U);
    msg.setDestination(34228U);
    msg.setDestinationEntity(29U);
    msg.name.assign("GIUIPCDIBBKHYWWGTGMWUXAUJJNPZCTDKABVDJBBKRBNXDWAQMDGDYLELVFIUOVWDXCMNUBGXROIPDZNYOVIMRRLRESZFCPIPGAGWNVTMRFESEMQHMEHSJWIQJHSQGYZEFJSCQUSLRPNCDSWTZLSSJBDNLAOMLTWKZHUVJCYPOAGJGAKNLZEPZHYVORPTUEYLNLKRFQXXHVCXPJHFXEEFBCYWCQAYBQKOVSUHY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IDQONGMHAMEIPYDBODTCFHBWBZKEJMLWVOTWENSIXSPZQQWJLTQYDCAGMZEFSFMCKXGJZDJBZXKXELUIWCRJXJVVLOXWUPBBZSGAMGXILRRBCNXYPEYFTMGLFJITFGSYRHQCLQTNUAPPYNYKYWCOAMHAVHUKLOUUOLKDAPHPQZJKEZGERTPSXNOYBTHWMBYFKARTNUHDOLPDCVZUSCWHNFNQKRVUBRSWVI");
    tmp_msg_0.value.assign("GFIRZHNMRIWTHGGQBXLLNPBLWCBOXUYIMPIMBSOEXCWVNZRVZUFHDMPKDBEHEOPCNYSRQSATIPKFOQETBRWLJFLZADVJSNYYTXDRQNKKSCAOCGYCJYWLPLIMVDIVRMZGZDJTYZKSEVUTTQPCJ");
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
    msg.setTimeStamp(0.8220730038398371);
    msg.setSource(26905U);
    msg.setSourceEntity(132U);
    msg.setDestination(1267U);
    msg.setDestinationEntity(225U);
    msg.name.assign("MIUACWFOQXPMSNEBFPJPEUPDQXGATFWNKWETSOAOINEKLSZYXOTRRBNZRCJSCLFSNSTRAKWZURIVYXQMOGVIUQPRZUCXJIGLDPBVJJDGQHBIJKEDNFWZMERHSHGTP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MCJXNLDTEAGQXMOGIAYABUBQJCUMLJUZBLZBJKYMURXEPKCFUXCWEEGIQTBFISJFHZBAQZBMIJXEWFYHSLKRUILQMROTOVJDLKPHOBFEZNBVKRPSODREEQLRUKQONFACSSOPJHQGZVOYVWNFDETYYCSVSDYHZRNXPDKZGKFRSXHVYMTSHYXZGDXPJPVTPURIGMDHXNVFIAZYVKWOADE");
    tmp_msg_0.value.assign("KASDLCNCLVYBOTYCHSETOHQIDFWBOIKUIEZYSJFEICDJLSZKBCXHPADGUXLVLYQJAIVSGGXZQWAAERVKENFWUYONBNUPQBMSFVNUOTMPRBKVCDHOWKMOKEYRRUVHCNCLHDGTWQDRXPNTCRZBGPUXZMTGAQMIKETJGXWYCPQJWWUHNFWSTQFYNVMBTZODYLGZQKOPJGXOJEUZRQGXXLBPARLAYJVWZPEIVSSMPNJLMDIHSFJTFH");
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
    msg.setTimeStamp(0.8721062400141333);
    msg.setSource(51631U);
    msg.setSourceEntity(179U);
    msg.setDestination(49890U);
    msg.setDestinationEntity(43U);
    msg.name.assign("QMWJIMPMCYFKZLTAZAKIBEOPNMKMWTF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AEUCDCLLWUGOLJRVTEWQEGCSFELSQNLZEAQZVQERSUHFMYVPFGOXWDXYXMKJEIWVOBZOTQXVAXPSYHTZMADLFIQVDDTFNIMIHGOYZYTJDEBRUVFPFUZUXLZGMTAVPOIENBCGXEWLJBXBCNZMNFYHYAQTTOKJTRPRMDGSBAPNBVDRIZIUHBGJPWJKSULYNVMSUXKBMNFAKCYRUKWKRCWJQWTLOCNKQDMJIP");
    tmp_msg_0.value.assign("MAMHWDYGMGCCYCCCGRUZWXCLWGBYJXQQTDKMSYPEOXLSPKQEAZNSKEWLHJCYXVCXUUBTJPGARQNFKAHIZBNGSEYOEIGFP");
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
    msg.setTimeStamp(0.021731995150042094);
    msg.setSource(51360U);
    msg.setSourceEntity(20U);
    msg.setDestination(7058U);
    msg.setDestinationEntity(205U);
    msg.name.assign("UGUPMPKCFWAHDUKEOUTVDXHFAXRDYRBEOVZXAESHNSAOKTHBRUTJPNKBQIRNUKQJ");
    msg.visibility.assign("UVTGBQDUHNPBODXMNCHRJSLUVOCRJTBTCHQOTJGPFZRJYEMTFDRKXSEZGQSLREWHPBNAEXQCOYMCVVPFXIIUCKAPDOIKMVVAKPXDRLDNTBKGZKMIQSUXFIMTEDEVOOYLUGIVZFZXGZVYPHELLMUSYJKOJTNIJKZBFIUPOFUGRYWOWWWWAKNULAQGZFQTY");
    msg.scope.assign("WSMXMSKYHIACGKUBAZGVDDFKLMIUNCOZSVWPDHWHNNKNCGFVBWQGCEAQGKJXJJEUDDOTJXYVCYWBLFDBULYJOGUAUSNHSDJDVDKGTTBXLLTOQJMSXZPPGSLKYUI");

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
    msg.setTimeStamp(0.3736620712338249);
    msg.setSource(36513U);
    msg.setSourceEntity(235U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(25U);
    msg.name.assign("LRAFTESJVSRXEVUJENYDLSVHNMBXQNBQDQOHGNCLWKRKLXSFAGYBYCZZIWYOXJUQOPQWTYFNTHBGVAINLFUBIPFCHPESABWKDFQECJJGMCKOPLRWKHYPWCJNUGFOTRLTZOTLQMFSXIUMEIMCAVSOCXAIXDFAKBTMYJACUEAVNHJPJRSPQTRZQWBVOBHWLOPDUTPZFYNEMKAHOSXIHT");
    msg.visibility.assign("TKATENHIDFMBMWFCQMEVQOUNEGFUYUJKDHNNIZEHCVYKCJOEAFGCDPHULHLRPGYTMJEZGICOSEALANXRYSUNGVCBDAKDGXJAXTQQLTWHNFLHKTVLWZRL");
    msg.scope.assign("WRUIYTFNFJPBAGGYIRCBTMEDTLFJDTVEMXKYGBMKCPKLXOWENOQBKMEVURNVMSLAXNWKUDONUSDHXNYHCYMJIZQGPLEAODCAZMLZFSWPSZIEWEJJTLCWKTHXIQDPGDJOEJQZOYALHKVIRVTQFSLVZKAXNEPICIGFOUCXFYOGBUKKABMNOHUUDHNESVCJROQFAVPQMGBHIQFCDQC");

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
    msg.setTimeStamp(0.40558720817571325);
    msg.setSource(35039U);
    msg.setSourceEntity(146U);
    msg.setDestination(4431U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ZMEOWZCPODTNKCIIAFNULSIGBZJDKEJ");
    msg.visibility.assign("CVTFSQFEHLCQDPIXBWIAYUAZSYAMFFPHVQBBCZCNLTGOBTNXHVTKJKRQRWEUWADHREJKDWMLILGFTOYOGOWTNUZDMBCQNKKSMMZVDNPHFHAITHJRJGXWBCYREPINEYOFPLEUXGDOUKNEZIAZUDZXJDSPLTSDAWYGZCMNMRPZS");
    msg.scope.assign("KBKURWSQUETGGMBINMAPNOOQJVNDFYLGWTVHWAKAZBYFMMZVTDZDEELDCXMCFMESSMISNOMULTSBISWHGLNEPSWGGXBIZRRHAIERCZEYFKXYYONZIRXXUYOXUFCUVOIHQXLMPTNXUCNDSKVHIFSOGNOAHOYRDPQLVJWWGIDBNCFATLTWVRSPBJUPPTRGVB");

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
    msg.setTimeStamp(0.24995437720517);
    msg.setSource(15215U);
    msg.setSourceEntity(47U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(180U);
    msg.name.assign("HRPXIWVRAELOMFLJIQZEKXFIJELPQUQOWDRVQHEVPGMGVINJLHTRQWVTVYDNTYWKJGGQPCKSHNDAYR");

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
    msg.setTimeStamp(0.3744606137267985);
    msg.setSource(23712U);
    msg.setSourceEntity(53U);
    msg.setDestination(14391U);
    msg.setDestinationEntity(147U);
    msg.name.assign("MDETXKERHWAUCBHPQNKWKTBDVRXOLWPNUKXUILGXIJQVPOUWGYZTTFSEKIDGATO");

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
    msg.setTimeStamp(0.03908262725314704);
    msg.setSource(28349U);
    msg.setSourceEntity(140U);
    msg.setDestination(31197U);
    msg.setDestinationEntity(40U);
    msg.name.assign("TYFFZAYUAFRRJPLYVJWBHLHYNDMDFSLSCCMCKWYFUETUMDPYAKNANNGWMZMLAQFLLABKUFUBNXXIEKOSCKQIWRGGLUHQNRUODVQCSWGCOMOCEZNPIXUNQASMQSYHGMIELIHKZHBZVJZQOHIICBWXRIMBDWQUCERGKQXVEYXFTRPQMNIOH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DPJWXHBAJNTLJRGPFCHOIRF");
    tmp_msg_0.value.assign("QIBMDJWVLXA");
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
    msg.setTimeStamp(0.7368885537242882);
    msg.setSource(36248U);
    msg.setSourceEntity(62U);
    msg.setDestination(11927U);
    msg.setDestinationEntity(181U);
    msg.name.assign("WWWLNPVFFCIOZXTNMQILMPRFEYATUBMYAHPCEFUCJSYHOSGSCKKWLEDXCVWJEAAKMVY");

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
    msg.setTimeStamp(0.6902283613049117);
    msg.setSource(21880U);
    msg.setSourceEntity(93U);
    msg.setDestination(57831U);
    msg.setDestinationEntity(197U);
    msg.name.assign("GBSOJLCNJOHXPTCYVTUFIAUEHHZMZDJRQSHXOGYHABKIQFBLZDWURVKGXFEMWARNOTQOSPJRBUW");

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
    msg.setTimeStamp(0.7332956797665731);
    msg.setSource(10082U);
    msg.setSourceEntity(241U);
    msg.setDestination(5788U);
    msg.setDestinationEntity(29U);
    msg.name.assign("LLFJQRSIWIBRDAGYRCIXVTYBJMTPCIHKBOZWJUNIMRJLVLROJNGDJXMCOEXQKFVPYHWFSSINOVBUFTODDAZXDLEHHSSBQVEKEUENUTUJSCMVXARROXLWDCORPEXTQPKIIHCZGUORLJSZPYGKNMFBMQFYAFXAOUVBMGHZYNVYCDKXKUZKQBQZWMDPUYKSMQONFTTSA");

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
    msg.setTimeStamp(0.3037087865723065);
    msg.setSource(11026U);
    msg.setSourceEntity(1U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(123U);
    msg.timeout = 2162542134U;

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
    msg.setTimeStamp(0.16028416838687365);
    msg.setSource(2736U);
    msg.setSourceEntity(46U);
    msg.setDestination(37422U);
    msg.setDestinationEntity(253U);
    msg.timeout = 394593681U;

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
    msg.setTimeStamp(0.08135934380051024);
    msg.setSource(14943U);
    msg.setSourceEntity(127U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(223U);
    msg.timeout = 37676061U;

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
    msg.setTimeStamp(0.4300056159699055);
    msg.setSource(57897U);
    msg.setSourceEntity(79U);
    msg.setDestination(24729U);
    msg.setDestinationEntity(47U);
    msg.sessid = 2862870101U;

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
    msg.setTimeStamp(0.2649129512948465);
    msg.setSource(51134U);
    msg.setSourceEntity(221U);
    msg.setDestination(61915U);
    msg.setDestinationEntity(149U);
    msg.sessid = 2709442057U;

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
    msg.setTimeStamp(0.5289432223234249);
    msg.setSource(43858U);
    msg.setSourceEntity(167U);
    msg.setDestination(36607U);
    msg.setDestinationEntity(232U);
    msg.sessid = 4186820424U;

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
    msg.setTimeStamp(0.8867665400890735);
    msg.setSource(42576U);
    msg.setSourceEntity(102U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(105U);
    msg.sessid = 110112168U;
    msg.messages.assign("MXLFMFNHHWRGKDAHBYJQSQTXQXABGRCYBUNIWKZAKWLKDRTEOGYSTVXLCEOCSOKXMREJCIQZUKSQDAIIDDUTFYSVJKWCGEVOKXJBJTPMQCXYOHOWZVGKVEZAIATBXAJJGTFAEPMNUJFLVNJYFEUUTVHBDWBSPLQIISGFCHDNTPYSMHFLNRQUGCOPISMVLUBZRXNUMJVFFCBWY");

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
    msg.setTimeStamp(0.02950024670397866);
    msg.setSource(20458U);
    msg.setSourceEntity(73U);
    msg.setDestination(34255U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2866356466U;
    msg.messages.assign("LXLEBJPDDJWZZJGFCUWENUAFZTSVDBNTDLBCVOIOYVYPKKOSECROXTMCRNAPAIWXLIYFKXJCIHOMMXHD");

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
    msg.setTimeStamp(0.41251725894600155);
    msg.setSource(41978U);
    msg.setSourceEntity(2U);
    msg.setDestination(32745U);
    msg.setDestinationEntity(247U);
    msg.sessid = 1889261997U;
    msg.messages.assign("TIKACAXIFRVASAJXCOBBOLQUBWCFPDSMPOOAXSMFUNRLGHLUZKMCYASVYVGUYLSJFHDPQRKTXIGJURHXOZUVPRLWAOZBORNJSGMGKXXWCZQNCESJPRMIHROELYGVIJMWLD");

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
    msg.setTimeStamp(0.8376281475765801);
    msg.setSource(34254U);
    msg.setSourceEntity(150U);
    msg.setDestination(62253U);
    msg.setDestinationEntity(148U);
    msg.sessid = 365191018U;

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
    msg.setTimeStamp(0.2268079878298176);
    msg.setSource(36728U);
    msg.setSourceEntity(178U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(121U);
    msg.sessid = 4178397136U;

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
    msg.setTimeStamp(0.24767007588317647);
    msg.setSource(40713U);
    msg.setSourceEntity(172U);
    msg.setDestination(56138U);
    msg.setDestinationEntity(117U);
    msg.sessid = 2384142232U;

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
    msg.setTimeStamp(0.2922154243391939);
    msg.setSource(47569U);
    msg.setSourceEntity(55U);
    msg.setDestination(33723U);
    msg.setDestinationEntity(252U);
    msg.sessid = 2718977793U;
    msg.status = 172U;

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
    msg.setTimeStamp(0.9329253762382016);
    msg.setSource(24795U);
    msg.setSourceEntity(3U);
    msg.setDestination(57410U);
    msg.setDestinationEntity(129U);
    msg.sessid = 3724935133U;
    msg.status = 32U;

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
    msg.setTimeStamp(0.5948187028389996);
    msg.setSource(33460U);
    msg.setSourceEntity(208U);
    msg.setDestination(49156U);
    msg.setDestinationEntity(182U);
    msg.sessid = 2633247931U;
    msg.status = 229U;

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
    msg.setTimeStamp(0.1260650133866651);
    msg.setSource(35547U);
    msg.setSourceEntity(20U);
    msg.setDestination(29820U);
    msg.setDestinationEntity(185U);
    msg.name.assign("MFHDMGWXVJFCEPZKTXHYQOPZCISTGJQAQDXYBPSAEFATEDUWGWFKEYXYXZNHIDOYKGAJQFVXLBGEBWPOPK");

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
    msg.setTimeStamp(0.851352275944471);
    msg.setSource(62602U);
    msg.setSourceEntity(200U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(248U);
    msg.name.assign("ZTBMDCRJFFHYYHXXVEJYHXLOOZVMIVPUTUREPWMVTYZJLEFZLVFDZGJDBFYCGVKOUWYEZKEOKICCNPHPUGMQ");

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
    msg.setTimeStamp(0.6841761790241186);
    msg.setSource(3105U);
    msg.setSourceEntity(199U);
    msg.setDestination(50039U);
    msg.setDestinationEntity(86U);
    msg.name.assign("AFDFKZMQXPTYSYKBTJSTKYJFNOWLINCVIZETOLXJWRLZQAYIDQVLHUUVMOPAYOPRGUXCXXOBRBIDHVMALHEQBORMFWPIBCQTQPATHGLXFBHVMUSFNKJUWNJONKCFLFYQGLIBOAOMVGEQNAYRSESDPVYHJPTJEKIUURAH");

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
    msg.setTimeStamp(0.2685830980920032);
    msg.setSource(54247U);
    msg.setSourceEntity(68U);
    msg.setDestination(41701U);
    msg.setDestinationEntity(48U);
    msg.name.assign("PUXHJTZAESDDUBNSTUIFSTLUSMJZGTEZAHOUVKYRPWFKOYOCAZKOIEVYVMOJHADOTOGENAMKDCPMFQANQVUJFPUCVKVCYFEHLWTYQTPJIXFLDOJCHBKQXJSVNKLIDMUDOYNJPBTPBXYSWXRFEMENBMFXGARHSWBIRGROKUICSWARKRVYQHBTYFMZWIISQGQLCHZLXWEGLGIN");

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
    msg.setTimeStamp(0.238562924088758);
    msg.setSource(31366U);
    msg.setSourceEntity(25U);
    msg.setDestination(23565U);
    msg.setDestinationEntity(58U);
    msg.name.assign("LRJDHFHPLOSMECHATQMXZSESGFAXSRZKEFILOOMMGRRUWYZMCABIPNPERDFUQHGVPTQTGWAVTJGRPBHXJUWBOAYCRAUIDQBY");

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
    msg.setTimeStamp(0.30549679592329904);
    msg.setSource(25260U);
    msg.setSourceEntity(199U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(190U);
    msg.name.assign("FXVUWLKVFAMOYYQFDFNALKVOJTXACZMWEXILSDABKFACVVOOLKXJSBCKIHYMUNHJDAQBVZPGNRYUZWEYYNDRFGZTVMPZJISIQZUIEQEYTGEGUZXIFSKQQZASTZIFLBJAJXMTSBNMWDBJHBKAGHOTWGJPHHSRURPSGRDOPSAHGTMUGNNCTFMZHNEQMEOBLWEDWXYYXOHYDBCULRCPBPJRTVGCIKPXOJUPRHNSQ");

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
    msg.setTimeStamp(0.6131267620630528);
    msg.setSource(34954U);
    msg.setSourceEntity(23U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(116U);
    msg.type = 71U;
    msg.error.assign("QJQTJMCYBRGRWSMFHVAHUKGPCAICHRZFOJMGHVGFLXSACGDGILYCQWPRWHWFQXSSESDVRNVADXLJRNYWPVKZSBEKUBYIDJWNZLTNTNTLTVTCDOBYBBXDOIGUXELZXRAPSEAGDLSFKPETKDIWMMRYEJGNIJIUJDHFKCXRLFUYZCWKQJWOAONYMNPOTPEHHSPOPTBQQZZQXQOMNFCFHQBSYUXYMTUABXZRMLGKEIPLIMIVDEZVANVECFHKZK");

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
    msg.setTimeStamp(0.6900333531034044);
    msg.setSource(7982U);
    msg.setSourceEntity(62U);
    msg.setDestination(28150U);
    msg.setDestinationEntity(114U);
    msg.type = 85U;
    msg.error.assign("RFFXIJGBSKAVWVVAECNOGUYROOZKPKPIONTCFLMAQNXFUTRPXWWQOPZATLNEHWVNTDCVUJZUBJKPCYNRXVLJJTBSROGSQFDFLMQBIB");

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
    msg.setTimeStamp(0.09792363904716939);
    msg.setSource(43690U);
    msg.setSourceEntity(134U);
    msg.setDestination(62023U);
    msg.setDestinationEntity(203U);
    msg.type = 5U;
    msg.error.assign("GMTRSEXUQRXGLGDHNZTQROICVBWCVXGAWQKF");

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
    msg.setTimeStamp(0.8795912804056851);
    msg.setSource(33745U);
    msg.setSourceEntity(136U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(34U);
    msg.seq = 3511U;
    msg.sys_dst.assign("EALLTEGDOIQQYVCMWNYQUJSPRNPVZILVVRYSASMZKXQZ");
    msg.flags = 92U;
    const signed char tmp_msg_0[] = {68, 88, -46, 112, -106, 7, 99, 84, 100, 118, -128, 114, -19, -37, 90, 113, 115, -83, -22, 33, 103, -3, 40, -39, 39, -54, 95, 56, 105, -112, -89, 65, -78, -63, 20, 124, -47, -3, 16, 90, -114, 53, -119, -89, -58, -44, -86, 90, 72, -85, 115, -60, -19, 112, -60, -11, 30, -43, -110, -123, -122, 21, -65, 61, -78, 64, 118, 78, 44, 43, 3, -45, -111, 90, -43, 116, 119, 2, 39, -88, -59, -43, 36, 25, 90};
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
    msg.setTimeStamp(0.9281104979082637);
    msg.setSource(35764U);
    msg.setSourceEntity(185U);
    msg.setDestination(8845U);
    msg.setDestinationEntity(202U);
    msg.seq = 38272U;
    msg.sys_dst.assign("ERGQGDOPAGSEIFVMVEEOCIHQXYXBVMDPIWSKGELKMZUYIPMNHWTEJNBGLKHHFRWLCUEKZYDAVCJMDHEITRYSUJRFQYRRTAHCWNYSOIUZGCKOVXULIIDARCPOXTKQIJBVSWYCQNFENOAPWLBMFBQHTFOAXWVUXKJNTTAK");
    msg.flags = 37U;
    const signed char tmp_msg_0[] = {-97, -67, 28, 98, -28, 38, -121, -118, -25, 41, -46, 44, -93, -104, -124, -18, -109, -60, -124, 6, 34, 92, -49, 3, -72, 95, 92, -27, 79, 47, -81, 23, 45, 80, 2, 112, -18, 110, 6, -88, -18, -120, 72, -22, -55, 94, 58, 102, -41, 82, -51, -3, 89, -1, -37, 38, -38, -46, 119, 0, 52, -88, -34, 72, 85, -32, -40, -13, 95, -40, -70, 108, -48, -78, 99, -52, 55, -79, -3, 0, 3, -96, 70, -40, 49, 34, -11, -122, 18, -46, -45, 76, 67, 69, -66, 67, -107, 38, -70, -117, -109, -74, -76, 112, 73, -24, 81, 11, 91, -71, 45, 43, -87, -104, 88, 109, 15, 43, -27, 16, -10, -119, 111, -17, 41, 81, 111, 64, 43, 109, 109, 85, -37, -110, 98, -102, -8, -124, -68, -77, 17, 111, -97, -45, 86, -89, -62, -73, 70, -111, -10, 20, 126, -65, 92, 99, -27, 24, -21, 41, 31, 19, 46, -54, 118, 76, 70, -77, -8, 80, 71, -99, 36, 117, -89, 47, -123, -127, -99, 77, 56, 84, 8, -24, -2, -24, -26, 41, -81, 26, 102, 89, 23, 94, 99, 123, -114, 24, 23, -61, -95, 60, -100, -23, 22, -29, -118, -101, 15, -118, -88, 51, -49, -26, -18, -109, 89, -95, -28, -5, -39, -107, -31, 67, 27, 13, -126, -42, -1};
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
    msg.setTimeStamp(0.1720839660964888);
    msg.setSource(37176U);
    msg.setSourceEntity(124U);
    msg.setDestination(40750U);
    msg.setDestinationEntity(165U);
    msg.seq = 47003U;
    msg.sys_dst.assign("JRTTJRGOYKDTGLBZSIFSEZOHYAKKMIZHXDVGSEPWXNARMKDOZKUMCBLPCNNIHDIOEDGJQEXUAEDYRANPHMCLNFTGEPYQMCUNTZXAAHSQZJEMQCZMFPRKVVKOOZGFRXUXFHWCLKSVWAWFWDSQIQIYJVAHBEGHUWPTUQBQOFLRLQISTBRWGBDOUHQFCHKYPUVEIMFMPVCGFTSBGLZCJWVPRWITMLXSONEBVBWSVYXBRPLNJYADJZNDY");
    msg.flags = 184U;
    const signed char tmp_msg_0[] = {63, -100, -4, 18, -44, -49, -52, -59, -14, -10, -81, 71, 39, -57, -35, 50, -58, 103, 44, -108, -123, -5, 120, -14, -69, 116, 115, 97, 121, -116, 18, 76, 79, -67, 77, -93, 52, 7, -64, -101, -91, 2, -115, -100, -125, 108, 49, -39, -1, -117, 77, -36, -12, -93, -92, 98, 109, 44, -52, -78, -48, -43, -43, 76, 106, 32, 28, -107, 4, -30, -76, -50, 67, -35, 47, -52, -70, 18, 31, 28, -20, -27, 78, 10, -64, 66, 36, -14, -101, -12, 92, -98, -15, -89, -11, 98, -20, 0, 51, 115, -14, 110, 85, 119, -41, 49, -12, -112, 9, 5, -91, -128, -32, -31, 48, -4, 23, 23, -22, 16, 115, 57, -119, -121, 78, -122, -113, 27, -52, -114, -78, 73, 7, -44, -31, 19, -14, -7, 109, -121, 28, 12, 15, 56, -54, 80, 105, 31, 32, -85, 125, -128, -71, 0, -1, -52, 41, 113, 74, 126, -58, -114, -69, 88, 60, -51, -46, 70, -48, -89, 101, 87, -32, -104, 65, -125, 83, -65, -54, 37, -115, -90, 22, -16, -78, 112, 119, -51, 36, -49, 43, 67, -97, 23, -11, 46, 46, 33, 41, 82, 68, 126, 37, 46, -44};
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
    msg.setTimeStamp(0.03368506124753501);
    msg.setSource(47400U);
    msg.setSourceEntity(3U);
    msg.setDestination(52183U);
    msg.setDestinationEntity(135U);
    msg.sys_src.assign("XTICJNRYOBZBZVRMGQTWBFJDGNEVTH");
    msg.sys_dst.assign("UWIQCDNNCZFIFIKSDHBSWPMLLZDEBMWUFRCYGPOVCUVPXWJYLQRIIYRSJGJGJYNPILPTZJAAMVKOTQLVUYTHSESOXAOFRKQBIGABGUFHUWWYNZPZZZMEYQFWHKECVQOXKKXIMETEEXYIAXOLETBBGALKYQHATAOUHGVBQGEXTXOFNDHIJJLQSQUAZHBABSDHVMTMKUV");
    msg.flags = 73U;
    const signed char tmp_msg_0[] = {8, 60, -74, -119, -48, -43, -4, 91, 5, 105, -13, -3, -81, -66, 45, -94, -93, 18, 94, 54, 38, -27, -22, 14, 105, -48, 38, 49, 51, 7, -87, 18, 104, -28, -35, -107, -34, -8, 11, -65, 100, -103, -71, -19, 102, 95, 10, -28, 20, 106, -40, 70, -59, -71, -10, -31, 101, -109, 119, 107, 57, -93, 90, 12, -4, 36, -107, 54, -94, -41, -87, -108, 3, 19, 84, -88, 105, -35, 66, 80, -19, 48, 105, 49, -127, -55, 85, 99, -125, 46, 2, 83, 107, 91, 62, 83, -49, 67, -19, 112, -116, 112, -70, 51, -32, -79, 49, 4, 44, 119, -74, 44, -86, -68, 124, 28, -87, 1, -21, -85, 15, 48};
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
    msg.setTimeStamp(0.5334760623958854);
    msg.setSource(11461U);
    msg.setSourceEntity(227U);
    msg.setDestination(33806U);
    msg.setDestinationEntity(254U);
    msg.sys_src.assign("FIVUKMCDFWYAZPUMGZUESGBNVEVGBAPTCXLKOKWAAPVOPFLQTHUAHPQDTDAZEIIJWGLNBXWEZYNGPNHNUTESXITLZUJYZ");
    msg.sys_dst.assign("JKJPLHLWPVHSAQSPENABIXJSGFUTVDCOUFCWHXBLWSSKZYOTGIUFEZHQOMOPRFZMMVIDQDWSNYUWPKKIFTWGEEROIPTQLGJBNY");
    msg.flags = 184U;
    const signed char tmp_msg_0[] = {-42, -96, -3, -85, -35, -19, 1, 113, -38, 66, -100, 105, -14, -96, 15, 33, 107, 48, 9, 125, -101, 113, -17, -36, 39, -42, -118, 1, 27, -65, -57, 1, -91, 34, -6, -111, -114, -98, -60, 51, 5, 123, 26, -66, 109, -14, 8, 20, 98, 8, 21, 123, 34, -1, 125, -17, 57, 40, 104, -17, -54, -79, -37, -128, -73, 39, -8, -85, 126, -68, -60, -92, 74, -14, 117, 117, 17, 77, 126, 124, -28, 74, 37, -113, 73, -97, 8, 38, 28, 76, 8, 97, -1, 0, -104, 16, 89, 50, -114, -20, 1, -87, 47, 85, 61, -39, 54, -88, -108, -91, -63, 119, -116, -24, 114, 87, -66, 37, 115, -81, -13, 73, 118, 54, -118, 99, -22, 121, 8, 57, -7, 89, 78, 51, -37, -107, -41, 95, -124, 99, -125, -106, 125, 31, -115, -30, -45, -48, -76, 94, 88, 27, -89, 73, 2, -83, -59, 15, 47, -55, 69, -120, 38, 54, -40, -54, -117, -37, -128, 113, 1, 119, -66, -87, -88, -123, 52, -33, -94, -52, 105, -48, -52, -29, 108, 19};
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
    msg.setTimeStamp(0.26736653043599734);
    msg.setSource(29541U);
    msg.setSourceEntity(211U);
    msg.setDestination(1830U);
    msg.setDestinationEntity(62U);
    msg.sys_src.assign("EICAXDPGGONBXWWNEMSOVXAMEZBHGVYXEKDULQUHLSPZERGUGIRHCSDMPZJQXQUKRVJPTVRQSYNTFDMDQRGRIYBTMAFPMIWBZNFZLGTOHANSATYSKEIALUKPZGKEZ");
    msg.sys_dst.assign("HOTTNYJSDKCKPPEXWLPKPKDRHJBDUXEEUQMFNTXSOCKLNYLIVNBDAQILSYBMVMYIQHGUWRNZXUBCXYVRJCQPAHADGRIHFDUIMALJLRSJUCKKGWCFGBHZFWUMEW");
    msg.flags = 163U;
    const signed char tmp_msg_0[] = {58, -79, 4, -89, -11, 80, 77, 12, -52, 48, -30, -1, -51, -19, 105, 94, -59, 71, -41, 36, 12, 74, 66, 125, -25, 50, 84, 121, 47, -111, 14, 116, -84, 55};
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
    msg.setTimeStamp(0.09361779300309403);
    msg.setSource(17269U);
    msg.setSourceEntity(54U);
    msg.setDestination(45188U);
    msg.setDestinationEntity(76U);
    msg.seq = 39696U;
    msg.value = 34U;
    msg.error.assign("KOODAXUBHBKNRALSTVGITLMRTHOEZYNFPZLUILCLNUFKNAPDXMXJDXPBHAYGWGKWMUJYQECRLPCYMYSEOJBYVOSCFHHPGRJEPVLKDPHRGMWRVBQRQNIGF");

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
    msg.setTimeStamp(0.31199375492958703);
    msg.setSource(44731U);
    msg.setSourceEntity(217U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(90U);
    msg.seq = 60095U;
    msg.value = 209U;
    msg.error.assign("PFPHDFJCKEEQTBHKLCXYQHXOMAACCLCIWHQOSULHRVRUKHDJJJNNPOCMAGIUPKCSUFNTAZYJQABTZIWFMDOEMSOUWXPWSBKESRKDUHBTPUIGWRPNVWDLOBSYIRCITYEBCDLYNVZYUZQGFFLMJAFSFIVGQV");

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
    msg.setTimeStamp(0.054146633147898915);
    msg.setSource(18980U);
    msg.setSourceEntity(126U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(5U);
    msg.seq = 47034U;
    msg.value = 197U;
    msg.error.assign("MTHLWUEGKUFQEZTSGRPIRASNKCFXVL");

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
    msg.setTimeStamp(0.6792805641297366);
    msg.setSource(42212U);
    msg.setSourceEntity(49U);
    msg.setDestination(20833U);
    msg.setDestinationEntity(51U);
    msg.seq = 3527U;
    msg.sys.assign("VXTNZXUTICQDVRPSUPZUBSLJVUSTL");
    msg.value = 0.6145391603511735;

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
    msg.setTimeStamp(0.07114350325318886);
    msg.setSource(24363U);
    msg.setSourceEntity(200U);
    msg.setDestination(52779U);
    msg.setDestinationEntity(35U);
    msg.seq = 45987U;
    msg.sys.assign("JXEXUELECNIZJHQFZKYFUSVUSFZOLSZOHWRPPNZVBQKLJDMCO");
    msg.value = 0.29895675726085424;

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
    msg.setTimeStamp(0.9838676599577649);
    msg.setSource(20735U);
    msg.setSourceEntity(69U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(251U);
    msg.seq = 36031U;
    msg.sys.assign("EUZRLFRCQJVYXUMMVLHNLORYKLSPTCDQUZYHAGZWRKVPXHHJMOINFQDUHETAZFOAYFIKWCXSRCLWKGIPJYGWIUATUWPAVEHZDBNCZKMUKAJYO");
    msg.value = 0.17457913797217173;

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
    msg.setTimeStamp(0.24575556645885943);
    msg.setSource(40212U);
    msg.setSourceEntity(156U);
    msg.setDestination(41196U);
    msg.setDestinationEntity(22U);
    msg.seq = 4671U;
    msg.sys_dst.assign("FKZBPUDVKOLYAMSDCYAMUAXWLBDYSVTBAEDYJVCILYUJPIZVEZRIKFPVHIGJOQGTRLEWVXNRWSCJBYUTWNGNYNMHDEQGGNABIDJSJBCKZAWBUXWUGFIJCQFKKCWMHOZMQJVRNONTERUTAUELWCYHRVXILRFZNKADPCTNTMXFYVZHEQXRESCHIQBZPHFPTSXKVOTJXQQRFLFEMQASLPOSPGTFWDUPZKGHQKDGP");
    msg.timeout = 0.40631054679640644;

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
    msg.setTimeStamp(0.9053603422899084);
    msg.setSource(6169U);
    msg.setSourceEntity(175U);
    msg.setDestination(56443U);
    msg.setDestinationEntity(218U);
    msg.seq = 21396U;
    msg.sys_dst.assign("JBHOYZACOADUKQPSHGXZKIFXQCVRJIASTQIFGLEGDKQONXCRVQSXUEBGEW");
    msg.timeout = 0.8316826353920335;

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
    msg.setTimeStamp(0.24655133616283686);
    msg.setSource(64646U);
    msg.setSourceEntity(14U);
    msg.setDestination(1818U);
    msg.setDestinationEntity(169U);
    msg.seq = 18297U;
    msg.sys_dst.assign("HVWGIMZINZUQAILZBVVCSLKKNTUTQNVJCWSBFVFAOMPEMEEJXTJVTJXFXSKLPEGKRBRRKPVBCDWNYTYDWQZRUPAOUHRHIMLMYDZR");
    msg.timeout = 0.28861655488417315;

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
    msg.setTimeStamp(0.20737876464433036);
    msg.setSource(57332U);
    msg.setSourceEntity(68U);
    msg.setDestination(561U);
    msg.setDestinationEntity(18U);
    msg.action = 29U;
    msg.longain = 0.72571321376369;
    msg.latgain = 0.39398973227782474;
    msg.bondthick = 3081062174U;
    msg.leadgain = 0.39665826754996025;
    msg.deconflgain = 0.013202537207898879;

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
    msg.setTimeStamp(0.6353218642289361);
    msg.setSource(64207U);
    msg.setSourceEntity(202U);
    msg.setDestination(56417U);
    msg.setDestinationEntity(16U);
    msg.action = 158U;
    msg.longain = 0.7228224256055163;
    msg.latgain = 0.9133384775554344;
    msg.bondthick = 1341629296U;
    msg.leadgain = 0.2744631294424038;
    msg.deconflgain = 0.0743329116918442;

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
    msg.setTimeStamp(0.06707392679386448);
    msg.setSource(64215U);
    msg.setSourceEntity(92U);
    msg.setDestination(62710U);
    msg.setDestinationEntity(94U);
    msg.action = 123U;
    msg.longain = 0.13095817150095934;
    msg.latgain = 0.9398101259287158;
    msg.bondthick = 4006346417U;
    msg.leadgain = 0.4479532959810051;
    msg.deconflgain = 0.2647286036870188;

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
    msg.setTimeStamp(0.2098006566751759);
    msg.setSource(17728U);
    msg.setSourceEntity(21U);
    msg.setDestination(24866U);
    msg.setDestinationEntity(195U);
    msg.err_mean = 0.07389294077301267;
    msg.dist_min_abs = 0.4166465281949;
    msg.dist_min_mean = 0.37975855387062873;

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
    msg.setTimeStamp(0.6094075601488105);
    msg.setSource(35238U);
    msg.setSourceEntity(63U);
    msg.setDestination(48740U);
    msg.setDestinationEntity(8U);
    msg.err_mean = 0.11686415787582072;
    msg.dist_min_abs = 0.676902178817905;
    msg.dist_min_mean = 0.2346978099137359;

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
    msg.setTimeStamp(0.4312687647701624);
    msg.setSource(52043U);
    msg.setSourceEntity(60U);
    msg.setDestination(32485U);
    msg.setDestinationEntity(124U);
    msg.err_mean = 0.501300002614108;
    msg.dist_min_abs = 0.47508155030124366;
    msg.dist_min_mean = 0.7069211474253427;

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
    msg.setTimeStamp(0.7926535000573735);
    msg.setSource(20512U);
    msg.setSourceEntity(156U);
    msg.setDestination(21167U);
    msg.setDestinationEntity(247U);
    msg.action = 24U;
    msg.lon_gain = 0.07553097207013271;
    msg.lat_gain = 0.8188595864371478;
    msg.bond_thick = 0.7011348945766586;
    msg.lead_gain = 0.2990004306787887;
    msg.deconfl_gain = 0.9942538446555577;
    msg.accel_switch_gain = 0.5323090736253724;
    msg.safe_dist = 0.16079415843402056;
    msg.deconflict_offset = 0.04299518987471718;
    msg.accel_safe_margin = 0.9915925834153055;
    msg.accel_lim_x = 0.01015372276091775;

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
    msg.setTimeStamp(0.2945178722339894);
    msg.setSource(64392U);
    msg.setSourceEntity(217U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(128U);
    msg.action = 154U;
    msg.lon_gain = 0.5205482673793014;
    msg.lat_gain = 0.9978245807833815;
    msg.bond_thick = 0.023762832062754202;
    msg.lead_gain = 0.2408049939634488;
    msg.deconfl_gain = 0.4470968066506382;
    msg.accel_switch_gain = 0.035967759830788704;
    msg.safe_dist = 0.14969993156669148;
    msg.deconflict_offset = 0.3739061860884829;
    msg.accel_safe_margin = 0.6036813512399721;
    msg.accel_lim_x = 0.45645591312866274;

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
    msg.setTimeStamp(0.6431978464800601);
    msg.setSource(48073U);
    msg.setSourceEntity(203U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(23U);
    msg.action = 18U;
    msg.lon_gain = 0.5736860402501319;
    msg.lat_gain = 0.3317852583475649;
    msg.bond_thick = 0.6457770566433987;
    msg.lead_gain = 0.2334346368716964;
    msg.deconfl_gain = 0.9087581057747758;
    msg.accel_switch_gain = 0.2576499167184503;
    msg.safe_dist = 0.9374364506567264;
    msg.deconflict_offset = 0.4674273585603048;
    msg.accel_safe_margin = 0.9528273791520527;
    msg.accel_lim_x = 0.5052872981590333;

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
    msg.setTimeStamp(0.13708516116241032);
    msg.setSource(32968U);
    msg.setSourceEntity(171U);
    msg.setDestination(3199U);
    msg.setDestinationEntity(44U);
    msg.type = 191U;
    msg.op = 199U;
    msg.err_mean = 0.30675302480508093;
    msg.dist_min_abs = 0.081419096547104;
    msg.dist_min_mean = 0.389728578183279;
    msg.roll_rate_mean = 0.99527348837892;
    msg.time = 0.8864433421046423;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 59U;
    tmp_msg_0.lon_gain = 0.985261388608129;
    tmp_msg_0.lat_gain = 0.2696684961182281;
    tmp_msg_0.bond_thick = 0.5425011164231965;
    tmp_msg_0.lead_gain = 0.9633694470599975;
    tmp_msg_0.deconfl_gain = 0.1218199769980789;
    tmp_msg_0.accel_switch_gain = 0.7454769280698279;
    tmp_msg_0.safe_dist = 0.9299197512903177;
    tmp_msg_0.deconflict_offset = 0.2589483558396112;
    tmp_msg_0.accel_safe_margin = 0.9807065521232118;
    tmp_msg_0.accel_lim_x = 0.9307786607777213;
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
    msg.setTimeStamp(0.41962655373580116);
    msg.setSource(8805U);
    msg.setSourceEntity(28U);
    msg.setDestination(60766U);
    msg.setDestinationEntity(0U);
    msg.type = 159U;
    msg.op = 131U;
    msg.err_mean = 0.4897109306031031;
    msg.dist_min_abs = 0.048781736543386356;
    msg.dist_min_mean = 0.9187888382170347;
    msg.roll_rate_mean = 0.5223108081522704;
    msg.time = 0.5553163153910017;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 215U;
    tmp_msg_0.lon_gain = 0.8514460363009385;
    tmp_msg_0.lat_gain = 0.8834690386640631;
    tmp_msg_0.bond_thick = 0.5206859163363327;
    tmp_msg_0.lead_gain = 0.6532628663547458;
    tmp_msg_0.deconfl_gain = 0.9544525253676749;
    tmp_msg_0.accel_switch_gain = 0.8574089572299428;
    tmp_msg_0.safe_dist = 0.6319343806156624;
    tmp_msg_0.deconflict_offset = 0.6802114111216344;
    tmp_msg_0.accel_safe_margin = 0.38309660033160875;
    tmp_msg_0.accel_lim_x = 0.8994335934479675;
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
    msg.setTimeStamp(0.9259024546843614);
    msg.setSource(21382U);
    msg.setSourceEntity(239U);
    msg.setDestination(54581U);
    msg.setDestinationEntity(16U);
    msg.type = 26U;
    msg.op = 247U;
    msg.err_mean = 0.4864535140740005;
    msg.dist_min_abs = 0.7243419149201584;
    msg.dist_min_mean = 0.10887088235274534;
    msg.roll_rate_mean = 0.396074327883548;
    msg.time = 0.39906681181841597;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 148U;
    tmp_msg_0.lon_gain = 0.44188347492021396;
    tmp_msg_0.lat_gain = 0.3433256506299439;
    tmp_msg_0.bond_thick = 0.3902533391024081;
    tmp_msg_0.lead_gain = 0.288820481971201;
    tmp_msg_0.deconfl_gain = 0.1215549934698067;
    tmp_msg_0.accel_switch_gain = 0.17875859458301502;
    tmp_msg_0.safe_dist = 0.5447559513738983;
    tmp_msg_0.deconflict_offset = 0.7969799203261719;
    tmp_msg_0.accel_safe_margin = 0.27502184978459787;
    tmp_msg_0.accel_lim_x = 0.6603152482281169;
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
    msg.setTimeStamp(0.5061258829028641);
    msg.setSource(47719U);
    msg.setSourceEntity(125U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.00910035948206922;
    msg.lon = 0.7837170047167255;
    msg.eta = 548080961U;
    msg.duration = 35377U;

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
    msg.setTimeStamp(0.8827051544145371);
    msg.setSource(63101U);
    msg.setSourceEntity(238U);
    msg.setDestination(45649U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.8711347209507578;
    msg.lon = 0.2456085890145261;
    msg.eta = 2153268283U;
    msg.duration = 62310U;

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
    msg.setTimeStamp(0.9379236304772246);
    msg.setSource(60995U);
    msg.setSourceEntity(206U);
    msg.setDestination(3848U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.12996328870809526;
    msg.lon = 0.2127229709594286;
    msg.eta = 853625804U;
    msg.duration = 38665U;

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
    msg.setTimeStamp(0.7826650874926453);
    msg.setSource(62082U);
    msg.setSourceEntity(195U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(13U);
    msg.plan_id = 29088U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.35259691028254325;
    tmp_msg_0.lon = 0.7663857353558882;
    tmp_msg_0.eta = 309993908U;
    tmp_msg_0.duration = 47632U;
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
    msg.setTimeStamp(0.025525258341172585);
    msg.setSource(334U);
    msg.setSourceEntity(187U);
    msg.setDestination(32432U);
    msg.setDestinationEntity(217U);
    msg.plan_id = 52423U;

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
    msg.setTimeStamp(0.9667097618357142);
    msg.setSource(25303U);
    msg.setSourceEntity(95U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(236U);
    msg.plan_id = 26110U;

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
    msg.setTimeStamp(0.35715007148392053);
    msg.setSource(50782U);
    msg.setSourceEntity(160U);
    msg.setDestination(30523U);
    msg.setDestinationEntity(96U);
    msg.type = 61U;
    msg.command = 219U;
    msg.settings.assign("EIVQUFMXRNVGVFIZWAWCUTMKJMTMQTWXFBMLQPHGLSPZRJSOSYENOZVTLYMYSOSRDQDEIFWWPXWCMXJXBNHJLIMWIGBCMDQZQEKGORVCHSSKDEBLFDZJHTJLXCPOKNIUCZGTVVTXJIEGDRAGUVPXRQSJIRHYREMPRVXHANKBPNSZAWBYEUPLONBOIPNTUYUHFQYQABCGZQUKVOWC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62084U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5208144728472426;
    tmp_tmp_msg_0_0.lon = 0.6068490254651434;
    tmp_tmp_msg_0_0.eta = 1609838852U;
    tmp_tmp_msg_0_0.duration = 440U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CLPPQOUGDESHISSQKIAXOFAVM");

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
    msg.setTimeStamp(0.651364302879649);
    msg.setSource(54620U);
    msg.setSourceEntity(204U);
    msg.setDestination(48199U);
    msg.setDestinationEntity(50U);
    msg.type = 156U;
    msg.command = 70U;
    msg.settings.assign("VFQJHDEQALKTHYVKPGUKEXOHSILSDNRQNZRUWLWMCGMKCDMXXUQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22670U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.468705480423244;
    tmp_tmp_msg_0_0.lon = 0.5825222771439197;
    tmp_tmp_msg_0_0.eta = 1346996674U;
    tmp_tmp_msg_0_0.duration = 33705U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NCTYKJVKLWECZIHYPQYIGRXZNHRVJEUNSMWMHRVBFCVCHJBEVWLIYFRRPFWBSDTUY");

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
    msg.setTimeStamp(0.09041899729536618);
    msg.setSource(36400U);
    msg.setSourceEntity(167U);
    msg.setDestination(62079U);
    msg.setDestinationEntity(254U);
    msg.type = 25U;
    msg.command = 242U;
    msg.settings.assign("XYTRCGCJACQCVMPFGJVJHMISMMPLXBFIZOQIVNMWDTJIHKYWNIXNESBMFEU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30691U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2707818885944334;
    tmp_tmp_msg_0_0.lon = 0.5909725846108723;
    tmp_tmp_msg_0_0.eta = 2178180847U;
    tmp_tmp_msg_0_0.duration = 4673U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WGYSASFRLABYUVVZOVCCXIAUVWXQSCAE");

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
    msg.setTimeStamp(0.06563345449893487);
    msg.setSource(23694U);
    msg.setSourceEntity(58U);
    msg.setDestination(5312U);
    msg.setDestinationEntity(109U);
    msg.state = 94U;
    msg.plan_id = 13490U;
    msg.wpt_id = 253U;
    msg.settings_chk = 28678U;

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
    msg.setTimeStamp(0.45836219198829065);
    msg.setSource(8281U);
    msg.setSourceEntity(51U);
    msg.setDestination(31967U);
    msg.setDestinationEntity(236U);
    msg.state = 9U;
    msg.plan_id = 39756U;
    msg.wpt_id = 77U;
    msg.settings_chk = 29536U;

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
    msg.setTimeStamp(0.43697172610046287);
    msg.setSource(40163U);
    msg.setSourceEntity(128U);
    msg.setDestination(27647U);
    msg.setDestinationEntity(75U);
    msg.state = 119U;
    msg.plan_id = 38087U;
    msg.wpt_id = 145U;
    msg.settings_chk = 38263U;

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
    msg.setTimeStamp(0.6772754336943781);
    msg.setSource(5629U);
    msg.setSourceEntity(178U);
    msg.setDestination(37416U);
    msg.setDestinationEntity(23U);
    msg.uid = 141U;
    msg.frag_number = 252U;
    msg.num_frags = 252U;
    const signed char tmp_msg_0[] = {-78, -49, -19, -34, -47, -75, -120, -48, -61, -23, 112, -107, 101, -126, -35, 18, 9, -111, 82, 105, 96, -115, 105, -22, 8, 53, -104, 4, -42, -117, -68, 2, -73, -81, 71, -52, -62, -96, 114, 82, 75, 57, -53, -43, 49, -10, -35, 91, -12, -125, -108, -110, -118, 96, 100, 27, -2, 110, 79, 51, 110, -45, -12, -36, 22, 64, 112, -97, 20, 67, -57, 94, 121, -61, 125, -100, 102, 60, -8, -60, -81, -94, -56, -6, -61, 26, -109, -63, -94, 45, 111, 89, -128, -11, -73, -86, -14, -1, -16, 77, -20, 17, -77, 7, 103, -90, 11, 104, 24, 99, 48, 123, 96, 15, 57, 40, 58, 126, 8, -54, -87, 85, 121, 69, 62, -32, -84, 72, -108, -101, -17, -99, -27, 19, -70, -21, 13, -19, -44, 49, -122, -32, 66, 83, -125, -2, 52, 70, 110, -64, 57, 60, -13, -95, 93, 115, 94, -51, 77, 52, 41, 121, 86, 34, 72, -93, -42, 117, -2, -16, -34, -50, -9, 12, -4, 85, 86, -71, -5, 90, 15, 55, -93, -7, 47, -6, 101, -107, 121, 25, -12, -49, -82, -70, 62, -24, 112, -103, 58, 98, -91, 77, 45, 103, -82, 54, -34, -76, 117, -108, -113, -125, -41, 0, -94, -23, -30, 62, 91, -122, 52, 114, 126, 14, -53, 97, 65, -49, 59, 38, -92, -126, -66, -120, -105, 66, 115, 36, -95, 87, 92, 8, 117, -62, -100, 61};
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
    msg.setTimeStamp(0.6789167296442631);
    msg.setSource(57202U);
    msg.setSourceEntity(172U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(158U);
    msg.uid = 37U;
    msg.frag_number = 251U;
    msg.num_frags = 185U;
    const signed char tmp_msg_0[] = {-56, -18, 5, -33, 9, 94, 80, 31, 68, -100, 74, 71, 101, 55, 114, 30, 120, 3, 50, 124, 16, -77, 70, 25, -110, 73, 116, 13, 35, 31, -8, -88, -68, 43, -74, -54, -83, 93, 82, 124, -33, -98, -94, -74, -26, 107, -13, -122, 11, -8, 52, -128, -74, -51, -123, -70, 40, -4, 19, -63, -19, -40, 30, -96, 59, 26, -42, -5, -65, -65, -34, -5, -16, 21, -63, -54, 62, -44, -12, -87, 79, 107, 40, 86, -127, -64, 58, 84, 57, -8, -8, -42, -53, 61, 80, -64, -47, -98, 125, 99, 126, -50, -92, -7, -120, -103, -21, -81, 102, 88, 11, -5, 91, -36, 58, -122, 93, 52, 70, -115, -11, 59, -99, 76, 100, 79, 43, 57, -14, 82, -4, -11, 79, -43, 126, 50, -120, -98, 7, -110, -49, -58, 46, -35, 101};
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
    msg.setTimeStamp(0.07845689567904257);
    msg.setSource(46532U);
    msg.setSourceEntity(138U);
    msg.setDestination(55398U);
    msg.setDestinationEntity(189U);
    msg.uid = 198U;
    msg.frag_number = 213U;
    msg.num_frags = 144U;
    const signed char tmp_msg_0[] = {-45, -101, -88, 97, -53, 34, -117, -83, 31, -107, -31, 117, -29, -69, 82, 114, 109, -52, -90, 110, -35, -11, -35, -54, 23, -79, -21, 2, -20, 69, 39, -57, 114, -33, -7, -116, 3, 19, -64, 78, -10, -64, 110, 80, 13, 96, 73, 108, 93, -70};
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
    msg.setTimeStamp(0.8331510657703848);
    msg.setSource(42832U);
    msg.setSourceEntity(199U);
    msg.setDestination(64784U);
    msg.setDestinationEntity(99U);
    msg.uid = 29U;
    msg.op = 239U;
    msg.frag_ids.assign("YPJTAWKKOFNAGZVFKVEGUGQOQRTCXMLDIBIDDIYKMDEZUCHYVXVAZEDAINQHNRAGDCLHYXTQVTEPDNUWJGBOPMVYXEVROGOJMBPBUYYRCXGSKUJIOXYHDGTSFSHLLJJOASZUWRZQWVBLICROPWEGYGLRTZQETIRFIQUHMAHZQPWMNTCHUJ");

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
    msg.setTimeStamp(0.9701233559957949);
    msg.setSource(33629U);
    msg.setSourceEntity(70U);
    msg.setDestination(11978U);
    msg.setDestinationEntity(81U);
    msg.uid = 3U;
    msg.op = 133U;
    msg.frag_ids.assign("JFSTIJNOOHZLFMKFVFGVJBURXQNHVGJNATNIALCZPKNRWOBUXRIAYFKJIVHZQWNPIDKAUBSJIULLCGDKWXCLMOSULZFNYAPQGOW");

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
    msg.setTimeStamp(0.47361954842781007);
    msg.setSource(42695U);
    msg.setSourceEntity(213U);
    msg.setDestination(64867U);
    msg.setDestinationEntity(117U);
    msg.uid = 91U;
    msg.op = 11U;
    msg.frag_ids.assign("TNOAOFYMOPWUGDGFZIRROEWYJVEFAYFBATJZOUUSMFJIGSDIQKPIZNFZQWDRXWBBOILEYHXPTVXYDSULZQYLOAAUBUTNEGBZCTFDRGNTYKXCTJJZURCPDQSZJQDHKXQTKGRPGBPKACLGHLOPMLSMHWNSIVLDTFGNIPCUSQZWQILSEMXEVCEAWRKDBPJDKEIRXQBVRMNOTBCWXVHJVPKLRHFJNHMSVYJUSVMMZHWKCWYQEMIKULNHYA");

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
    msg.setTimeStamp(0.5189540710398223);
    msg.setSource(58662U);
    msg.setSourceEntity(40U);
    msg.setDestination(25943U);
    msg.setDestinationEntity(29U);
    msg.content_type.assign("TJCYULGHPHTXVIBLFHZAIKGHYJFGNSDCLCGSFVXEKPLVXXDJPEUNFAGATWWDQTWJQWQPAR");
    const signed char tmp_msg_0[] = {8, 47, 57, -53, -77, 113, -115, -34, 75, 67, -121, 84, -16, -66, 51, -64, 3, 57, -53, 45, -56, 69, 109, 103, 111, -11, 54, -27, 54, 9, 82, 55, -11, 64, 27, -19, -85, -7, -85, -90, 61, -69, -72, -114, 66, -34, -95, 17, 65, 47, -111, 38, -96, -75, 97, -78, 59, 89, 10, -66, -45, -78, -93, 61, 100, -40, 2, 72, -9, 39, 124, -101, -11, -18, -70, -76, 53, -36, 32, 2, 59, 16, 3, -16, -98, -16, 50, 91, 122, -115, 10, -36, 3, -46, 37, 67, 15, 82, 107, -8, 17, -110, -93, 60, -85, -68, 14, -38, -73, -58, 6, -123, 42, -108, 30, -45, 78, 73, 87, 84, 49, -78, -107, -77, 100, 36, -31, -97, 17, 91, -30, -11, 80, 73, -1, -72, 40, -42, 85, -122, 22, 109, -3, -82, -104, 22, 19};
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
    msg.setTimeStamp(0.756441765281986);
    msg.setSource(22760U);
    msg.setSourceEntity(99U);
    msg.setDestination(47932U);
    msg.setDestinationEntity(77U);
    msg.content_type.assign("TBQFAMKXUNOOVZFRGKZFTRONZWZCIGXHOUYAVGKUKTMSWASBMJNCTPTPNMMYUEAXDXHQWMGVKYIEJKBTEVGYTPDEUFHYJDEGLYNMLVPPEJV");
    const signed char tmp_msg_0[] = {53, -124, -114, 40, 78, 76, -69, 84, 107, -81, 39, -51, -44, -2, -51, -75, 102, -78, -89, 12, 24, -65, -66, -32, 109, 16, 110, -70, 17, -76, 35, 64, 115, 58, 99, 12, 65, 114, -105, -12, 64, -35, 18, -99, -29, 121, 124, 71, 41, 2, -38, -32, -35, 97, 10, -122, -49, -38, 16, 7, 89, 115, -32, -105, 5, 119, -15, 105, 92, -97, -44, -38, -36, -2, 61, 52, -52, -89, -67, 112, -92, 74, -100, -75, 126, 102, -53, -93, 119, 0, -77, 94, -25, 93, -93, -104, -27, 48, 2, -123, 24, -83, -34, -119, 119, 93, 105, -79, -36, 125, 118, 10, 16, -43, 42, -100, 112, 108, 2, -13, 78, 21, -5, 62, 56, 42, 35, 81, 9, -109, -39, -118, 21, 26, 105, -14, -35, 122, -16, -22, -36, -66, -82, 47, -16, -48, -3, -99, -79, 119, 48, -22, 66, -127, 113, 126, -69, 33, -69, 24};
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
    msg.setTimeStamp(0.42421888332438196);
    msg.setSource(43562U);
    msg.setSourceEntity(248U);
    msg.setDestination(11939U);
    msg.setDestinationEntity(155U);
    msg.content_type.assign("YQLUXOZSZTSUOGHIQUPPOFSNOAHPLKSHKVSQRQBUWIRKCHHFPCEJLYVPZRCSXQCBMAEQENSGANUHAJQZZCWGOWBMXLLJFYHKEBPHWRXDZDUBFRUREAWLXJ");
    const signed char tmp_msg_0[] = {77, 26, 68, 9, 2, 36, 16, -86, -106, 10, 75, 0, -5, 54, -64, 56, -9, 64, 11, 18, 78, -41, 78, 35, -72, 89, 93, 90, -80, 47, 62, 113, -11, 32, 122, -7, 115, -37, 98, 89, 3, 74, 72, 30, -111, -114, 123, 42, 23, 44, -34, 49, 46, -121, -38, -48, -105, 48, 51, -112, -75, 58, -71, -8, -102, -49, -112, 124, -100, 15, -68, -97, 118, 43, 109, 88, 93, -105, 109, 81, -54, 126, 25, 87, -66, 126, -94, 46, -56, 69, -122, -78, 83, 3, 8, 25, -112, 11, 97, 67, -120, -125, 55, -116, 5, 10, 63, -60, 14, -62, -48, -65, -66, -93, 41, -21, 44, -90, 52, 3, 22, 7, -70, 10, 12, 12};
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
    msg.setTimeStamp(0.21448671842089073);
    msg.setSource(30296U);
    msg.setSourceEntity(62U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.6118892014866362);
    msg.setSource(10201U);
    msg.setSourceEntity(58U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.3427897038847305);
    msg.setSource(19278U);
    msg.setSourceEntity(46U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.7921649374267882);
    msg.setSource(25949U);
    msg.setSourceEntity(36U);
    msg.setDestination(50087U);
    msg.setDestinationEntity(71U);
    msg.target = 28691U;
    msg.bearing = 0.9464823677016675;
    msg.elevation = 0.042389716233395935;

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
    msg.setTimeStamp(0.4051994960583104);
    msg.setSource(13495U);
    msg.setSourceEntity(132U);
    msg.setDestination(45716U);
    msg.setDestinationEntity(79U);
    msg.target = 39903U;
    msg.bearing = 0.3366058534344194;
    msg.elevation = 0.9441964001311202;

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
    msg.setTimeStamp(0.20256725776762174);
    msg.setSource(2894U);
    msg.setSourceEntity(151U);
    msg.setDestination(625U);
    msg.setDestinationEntity(105U);
    msg.target = 53116U;
    msg.bearing = 0.4287768163525896;
    msg.elevation = 0.39840493195420645;

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
    msg.setTimeStamp(0.08814559938445632);
    msg.setSource(28704U);
    msg.setSourceEntity(209U);
    msg.setDestination(58137U);
    msg.setDestinationEntity(2U);
    msg.target = 2628U;
    msg.x = 0.9069105372975264;
    msg.y = 0.8368059405712959;
    msg.z = 0.04615445484337244;

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
    msg.setTimeStamp(0.9179130833565149);
    msg.setSource(28022U);
    msg.setSourceEntity(148U);
    msg.setDestination(10594U);
    msg.setDestinationEntity(130U);
    msg.target = 42882U;
    msg.x = 0.047384238037030624;
    msg.y = 0.8113337540816763;
    msg.z = 0.18019095254593487;

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
    msg.setTimeStamp(0.02602145872958106);
    msg.setSource(56195U);
    msg.setSourceEntity(239U);
    msg.setDestination(21598U);
    msg.setDestinationEntity(212U);
    msg.target = 32051U;
    msg.x = 0.2121926486458029;
    msg.y = 0.34057296156240946;
    msg.z = 0.4607060422761231;

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
    msg.setTimeStamp(0.7360469660063631);
    msg.setSource(35166U);
    msg.setSourceEntity(24U);
    msg.setDestination(955U);
    msg.setDestinationEntity(101U);
    msg.target = 39291U;
    msg.lat = 0.8380965504769898;
    msg.lon = 0.38760676507705105;
    msg.z_units = 207U;
    msg.z = 0.7428219796648998;

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
    msg.setTimeStamp(0.3462729296879121);
    msg.setSource(24377U);
    msg.setSourceEntity(81U);
    msg.setDestination(46636U);
    msg.setDestinationEntity(34U);
    msg.target = 35378U;
    msg.lat = 0.08912517062061709;
    msg.lon = 0.17730751393112099;
    msg.z_units = 9U;
    msg.z = 0.48705126555299794;

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
    msg.setTimeStamp(0.39280801215709016);
    msg.setSource(58713U);
    msg.setSourceEntity(224U);
    msg.setDestination(41258U);
    msg.setDestinationEntity(207U);
    msg.target = 49800U;
    msg.lat = 0.9679491463835719;
    msg.lon = 0.7513360914961628;
    msg.z_units = 109U;
    msg.z = 0.4163658193684482;

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
    msg.setTimeStamp(0.7008361275669956);
    msg.setSource(59147U);
    msg.setSourceEntity(2U);
    msg.setDestination(20683U);
    msg.setDestinationEntity(177U);
    msg.locale.assign("FBLBRAJCUQVSTKVGFWGHBVGNLZYMXHLPAKBPPWDHPROWRXFRIMWDMI");
    const signed char tmp_msg_0[] = {-101, 90, -99, -4, 60, -60, -106, 30, 81, -10, -61, -82, -60, 99, 86, 99, -57, 87, -117, 17, -8, -10, 112, 103, -27, -34, -27, -77, -105, 56, 18, 83, -37, -100, -69, 53, 2, -72, -58, -116, -116, -16, 23, -117, -58, 22, -5, 6, -59, -35, -68, -102, 69, 75, -113, -86, -51, -62, 118, 49, -44, 123, -65, -36, 36, 109, -12, -125, -11, 16, 39, -39, -58, 118, 82, -85, 99, -75, 57, 96, 63, -74, 9, 86, 88, 35, 90, 57, -118, 82, -91, -44, -34, 51, -23, -113, 24, 74, 79, 69, 45, -24, -1, 33, -119, 45, -9, -125, -51, -69};
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
    msg.setTimeStamp(0.3197781634989789);
    msg.setSource(61479U);
    msg.setSourceEntity(65U);
    msg.setDestination(16604U);
    msg.setDestinationEntity(198U);
    msg.locale.assign("GLLOYPHTCCDJRDLRSAVOUDAWMAHDJUUYQDVHEAUYYAEQDRVUFKCAAZDFEUGBXYNFRYPOQVWFOXTZYBMQIINCZJHDPEMWXLMSLVGRELLI");
    const signed char tmp_msg_0[] = {-67, 73, -75, -85, -62, 71, 108, -77, 115, 84, -77, -121, -105, 81, -53, -125, -44, 62, 19, 105, -22, 92, -103, -125, -35, 46, 56, -2, -19, 61, -2, 93, 98, 118, 42, -70, -102, 56, 44, 47, 114, 116, -119, -106, -58, 47, -93, 78, -43, 20, -86, 85, 86, 19, -104, 112, -77, 114, -66, 121, -44, -98, -37, 124, 79, 44, 52, 54, 25, 109, -3, -118, 116, 0, -38, 66, -93, 31, 98, -90, -32, -62, -67, -127, 116, 63, 110, 79, -95, -60, 19, 36, 7, -35, -91, -58, -77, 64, -6, -91, 29, -126, 120, -65, -119, 8, 28, -95, -1, 26, 98, 31, 116, -86, 112, 110, 102, 16, -13, -67, 14, 93, 55, -11, -30, 90, 108, -43, -118, -19, 18, 91, 24, -66, 98, 41, 4, 114, -76, 106, 94, -126, 37, -44, 53, -107, 90, -3, -46, -14, 92, -3, -127, 59, -92, 78, -102, 72, 120, -24, 65, -82, 86, -103, -44, 85, -34, 65, -43, 65, -127, 40, 12, 4, -67, -73, 84, -18, 123, -96, 89, -26, 59, -53, -91, -120, -128, -78, -30};
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
    msg.setTimeStamp(0.8644546912660267);
    msg.setSource(39514U);
    msg.setSourceEntity(202U);
    msg.setDestination(55420U);
    msg.setDestinationEntity(56U);
    msg.locale.assign("PLKDDDAMCKTDGZTRZONFEGMJNWZUOMGPNCXSBNMSPUFRVUMOVBJDQCKLHXWETOFKMRCAXIVBKSJUNUYCFJRZYZNNWIUOEJRZFMPBYUTXMLMGCVVUKFAPRQWBDMUXQTIAWVUQVJRSGGPHCSBAEAYEZHNQHBNDVF");
    const signed char tmp_msg_0[] = {-103, 77, 99, -120, -25, 22, 4, 59, 105, -44, 73, 81, -9, 116, -49, 22, -88};
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
    msg.setTimeStamp(0.1616300044165464);
    msg.setSource(65036U);
    msg.setSourceEntity(220U);
    msg.setDestination(2615U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.9776090474477563);
    msg.setSource(36118U);
    msg.setSourceEntity(63U);
    msg.setDestination(39618U);
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
    msg.setTimeStamp(0.03446021084348905);
    msg.setSource(19969U);
    msg.setSourceEntity(105U);
    msg.setDestination(47751U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.9519837710257855);
    msg.setSource(10272U);
    msg.setSourceEntity(39U);
    msg.setDestination(60638U);
    msg.setDestinationEntity(203U);
    msg.camid = 56U;
    msg.x = 49724U;
    msg.y = 22570U;

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
    msg.setTimeStamp(0.793232063017277);
    msg.setSource(30767U);
    msg.setSourceEntity(75U);
    msg.setDestination(52622U);
    msg.setDestinationEntity(234U);
    msg.camid = 140U;
    msg.x = 50194U;
    msg.y = 8365U;

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
    msg.setTimeStamp(0.46892337863771916);
    msg.setSource(45267U);
    msg.setSourceEntity(23U);
    msg.setDestination(1003U);
    msg.setDestinationEntity(193U);
    msg.camid = 142U;
    msg.x = 58202U;
    msg.y = 5345U;

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
    msg.setTimeStamp(0.8301267327226234);
    msg.setSource(9289U);
    msg.setSourceEntity(188U);
    msg.setDestination(50861U);
    msg.setDestinationEntity(31U);
    msg.camid = 107U;
    msg.x = 31765U;
    msg.y = 28108U;

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
    msg.setTimeStamp(0.5080616676063485);
    msg.setSource(57663U);
    msg.setSourceEntity(220U);
    msg.setDestination(61639U);
    msg.setDestinationEntity(76U);
    msg.camid = 146U;
    msg.x = 39699U;
    msg.y = 50201U;

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
    msg.setTimeStamp(0.8903439778793529);
    msg.setSource(56303U);
    msg.setSourceEntity(133U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(39U);
    msg.camid = 37U;
    msg.x = 12255U;
    msg.y = 28824U;

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
    msg.setTimeStamp(0.0884506937106656);
    msg.setSource(31011U);
    msg.setSourceEntity(81U);
    msg.setDestination(21958U);
    msg.setDestinationEntity(11U);
    msg.tracking = 116U;
    msg.lat = 0.6037345266366477;
    msg.lon = 0.49907408554617827;
    msg.x = 0.11754718284455457;
    msg.y = 0.5121382736537934;
    msg.z = 0.8134720103680341;

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
    msg.setTimeStamp(0.9758883466447134);
    msg.setSource(63426U);
    msg.setSourceEntity(25U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(75U);
    msg.tracking = 63U;
    msg.lat = 0.8151424745669029;
    msg.lon = 0.615567355411248;
    msg.x = 0.2745910284633445;
    msg.y = 0.7658888993582468;
    msg.z = 0.698215152323391;

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
    msg.setTimeStamp(0.9665490728022619);
    msg.setSource(38186U);
    msg.setSourceEntity(93U);
    msg.setDestination(57298U);
    msg.setDestinationEntity(188U);
    msg.tracking = 252U;
    msg.lat = 0.7317957812173874;
    msg.lon = 0.891060781209009;
    msg.x = 0.3548691084993595;
    msg.y = 0.6486923200921556;
    msg.z = 0.4513742868476356;

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
    msg.setTimeStamp(0.25590642837715527);
    msg.setSource(32721U);
    msg.setSourceEntity(11U);
    msg.setDestination(32380U);
    msg.setDestinationEntity(132U);
    msg.target.assign("SKCURFHFPLLSCPHRYWVMWYGANCBUMWHOPSQMWDKAXVYWIZMIHVUHCKMTPLGFYRIODHYJGKAOQGUOZTELBZRNNFNHUJULTUJJVDQIYGRBADHRQR");
    msg.lbearing = 0.3676508042584231;
    msg.lelevation = 0.026249928854501614;
    msg.bearing = 0.2707736339869824;
    msg.elevation = 0.050249461429349385;
    msg.phi = 0.05501674871643303;
    msg.theta = 0.7337030785231513;
    msg.psi = 0.7089819125179297;
    msg.accuracy = 0.4737570671271867;

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
    msg.setTimeStamp(0.6931842877982456);
    msg.setSource(59847U);
    msg.setSourceEntity(33U);
    msg.setDestination(30836U);
    msg.setDestinationEntity(3U);
    msg.target.assign("UPCGKUGJITEHXMDXPVCAPJWFFMNOMFBWR");
    msg.lbearing = 0.44562929807126983;
    msg.lelevation = 0.4959015546210218;
    msg.bearing = 0.8255720285011267;
    msg.elevation = 0.7365558992166238;
    msg.phi = 0.7175442472448493;
    msg.theta = 0.5547002810117432;
    msg.psi = 0.9455705037301607;
    msg.accuracy = 0.22609839641037432;

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
    msg.setTimeStamp(0.32548634425950007);
    msg.setSource(62094U);
    msg.setSourceEntity(94U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(174U);
    msg.target.assign("RMURZASAYHLANGVQRTXOEIUAGXFRSABSMJYKUDKMKDGEVHPCFRUODWYOFFQZAUQYRILQYJXTIKFTBPZOLNNHQHBALVEPSRCLHWYOJJXGCOXLEPJJYHDATINZKMTHUMQFONXJPWSBZEIWRTIKWSXYWNNYDTVNFSDCHEPHVEGSQYUKGIBIIBMTBFCVGMZPLOKBCCGDDMAPILJLWKMCLPQWSOADWUJVZZS");
    msg.lbearing = 0.1596759289144155;
    msg.lelevation = 0.6925030926856405;
    msg.bearing = 0.3670120238627764;
    msg.elevation = 0.9051354532980832;
    msg.phi = 0.8549656967791993;
    msg.theta = 0.8244686624806618;
    msg.psi = 0.9542829730584853;
    msg.accuracy = 0.39623754056440463;

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
    msg.setTimeStamp(0.833554265369391);
    msg.setSource(3609U);
    msg.setSourceEntity(220U);
    msg.setDestination(424U);
    msg.setDestinationEntity(193U);
    msg.target.assign("VLBPWSSYAETCGGWWENHJBXLCVEGKGIGJRNWAVJEYVBXXWOMFAAJBDKMHISPNLQGFRPJHTIYICRKAVPJUNFYCQFATTLSLUZWSTMYZFDKHMUVIEUOSUNDYMZJYIDTDXMYDOEVPXETRGDCSPMNOFQZ");
    msg.x = 0.059729899463834;
    msg.y = 0.36150521347887554;
    msg.z = 0.45510060309879063;
    msg.n = 0.13003549802435133;
    msg.e = 0.1316425588372674;
    msg.d = 0.34405219097468176;
    msg.phi = 0.4656339143047503;
    msg.theta = 0.5499246796755216;
    msg.psi = 0.1681575940047514;
    msg.accuracy = 0.9005762638221343;

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
    msg.setTimeStamp(0.6446357460523767);
    msg.setSource(42886U);
    msg.setSourceEntity(153U);
    msg.setDestination(6269U);
    msg.setDestinationEntity(225U);
    msg.target.assign("JOXYLTQVSCCYIOBUBQOYHSQPLEKGSWFVRVTGZLIJJLWNPEGZEUJBKYLSJFKMMUANVUVEWMEMIOKZPURFZPHXNKFNPRROFWCNL");
    msg.x = 0.9290368226298783;
    msg.y = 0.0859718637660194;
    msg.z = 0.8272998939807986;
    msg.n = 0.0632729408600401;
    msg.e = 0.714278095907648;
    msg.d = 0.4084468624115132;
    msg.phi = 0.9202030702499491;
    msg.theta = 0.1023220279217546;
    msg.psi = 0.08513590974481411;
    msg.accuracy = 0.16057974438088451;

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
    msg.setTimeStamp(0.6761112758913878);
    msg.setSource(60261U);
    msg.setSourceEntity(237U);
    msg.setDestination(50923U);
    msg.setDestinationEntity(224U);
    msg.target.assign("HFXZOFBHRS");
    msg.x = 0.10422630079792272;
    msg.y = 0.22665283566730643;
    msg.z = 0.4147827166057856;
    msg.n = 0.8042369015209034;
    msg.e = 0.11608959096686766;
    msg.d = 0.7904455920380825;
    msg.phi = 0.9469419242363537;
    msg.theta = 0.29497716003814933;
    msg.psi = 0.16487148830998033;
    msg.accuracy = 0.4511674740107835;

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
    msg.setTimeStamp(0.5137368764791485);
    msg.setSource(23330U);
    msg.setSourceEntity(36U);
    msg.setDestination(14634U);
    msg.setDestinationEntity(217U);
    msg.target.assign("RADJYAVMICPHTKDPVNVNJWUBEMSTFTOHIIXCTPAUNGQKHTCQKHDGYTQSMOEBTDESMGSWXZAYDQFJMKOMLACIHPWAMZOJEFLYRUXSAUSHXCYKRJQEAWPZCLQPFVYSGOJWBRBOOCBEFRXFNISNVBOPWLPHZRUWGYWLGFJMNCHGFXIYYDZLUIMZGRWWBBEIOIKNVIHXPJGUSQDFU");
    msg.lat = 0.10787777460659531;
    msg.lon = 0.33682501264407416;
    msg.z_units = 235U;
    msg.z = 0.6134021186519356;
    msg.accuracy = 0.027749454831644593;

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
    msg.setTimeStamp(0.5087461222866728);
    msg.setSource(29716U);
    msg.setSourceEntity(139U);
    msg.setDestination(28738U);
    msg.setDestinationEntity(167U);
    msg.target.assign("NCLORDFHSWSIPIEMLOWUIVWGBBAVTZMVNNWIYCACQPTEEKELMPWBPHQTMDUTHKYOIKKZQUPFNXYJSDDVADZAUYGFRYLCJVIERJUQJTAXCXBIGAAHYUVERGLLUEQPUCFFDFTPLKASSNMSVPBPJYTCFWPVGQOMRQDGGMSQBTUHZOQKKZKZFWYVRRXZWJJJCXLAJLSTGHDRNMNXCZHARNSXTXOIDIBFHBEGZNQGNZIXMLVMDHEWBYXBRE");
    msg.lat = 0.3434544941889647;
    msg.lon = 0.5683659972792237;
    msg.z_units = 19U;
    msg.z = 0.25370159951219595;
    msg.accuracy = 0.4047059091913322;

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
    msg.setTimeStamp(0.8273887554717999);
    msg.setSource(22080U);
    msg.setSourceEntity(112U);
    msg.setDestination(42438U);
    msg.setDestinationEntity(74U);
    msg.target.assign("ORETPHNTYZUSMVWIDLDYIRFISRIUQRWJBUGUSAUSFLWIRAYKINVPWXHFJTKECDAVALALMGZZEIDDOVAXXJMPNHKAHCHBASEOQJOICKLVMR");
    msg.lat = 0.6268694446872648;
    msg.lon = 0.11241822586571482;
    msg.z_units = 212U;
    msg.z = 0.9274649725560883;
    msg.accuracy = 0.7760618614574621;

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
    msg.setTimeStamp(0.18223018627306997);
    msg.setSource(10338U);
    msg.setSourceEntity(93U);
    msg.setDestination(13797U);
    msg.setDestinationEntity(210U);
    msg.name.assign("FJNPHDOBAPDYFGPTAEZQCHSWQTPOTHSKJAKEVOZSRXBFNICJMCBULEWRACXGXIDXLRUSDVSOVGGIWJWSKDINDANBTYJ");
    msg.lat = 0.2523844629569453;
    msg.lon = 0.03999020289349087;
    msg.z = 0.789256959464426;
    msg.z_units = 36U;

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
    msg.setTimeStamp(0.009988873323750203);
    msg.setSource(52400U);
    msg.setSourceEntity(115U);
    msg.setDestination(4842U);
    msg.setDestinationEntity(87U);
    msg.name.assign("CJZAQDKPHXGLIRKLIIUWOEUSZDJPGWDZKUTSFTBSYIOQOQVXFNJKYOROTVLSYYVNLMC");
    msg.lat = 0.403314436431625;
    msg.lon = 0.10945374591933366;
    msg.z = 0.915716941512465;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.6977624106247128);
    msg.setSource(5100U);
    msg.setSourceEntity(188U);
    msg.setDestination(40698U);
    msg.setDestinationEntity(23U);
    msg.name.assign("VLKVVQQNBLXWBYFMCZMJOXVRFRMOKGJSOZXZXYZMLYHIZBPYXDNSUAPKYVNSIFRRHQMOJOTTAKRECTWKCMIBIQTESRPGGVCEBWGBGLBTSPGFICKEIKOSYABOARZPMFGIAYHQJUYQAAMRCDKEXWOIWDLUSLPIEH");
    msg.lat = 0.895345770904665;
    msg.lon = 0.2868713709422621;
    msg.z = 0.7674580220948604;
    msg.z_units = 238U;

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
    msg.setTimeStamp(0.4638253596117563);
    msg.setSource(5149U);
    msg.setSourceEntity(17U);
    msg.setDestination(46750U);
    msg.setDestinationEntity(61U);
    msg.op = 67U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("DFJFGGDEOGYERXUSRUKNDCGSMZAWPMAGYJBEMBVOAR");
    tmp_msg_0.lat = 0.9614755865314805;
    tmp_msg_0.lon = 0.8898682528945131;
    tmp_msg_0.z = 0.7908019234222554;
    tmp_msg_0.z_units = 229U;
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
    msg.setTimeStamp(0.8969374359013714);
    msg.setSource(45980U);
    msg.setSourceEntity(199U);
    msg.setDestination(46386U);
    msg.setDestinationEntity(71U);
    msg.op = 173U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ETAKJSNAJEAAYSMVXMGGHDVJOCRCWEIRXXRYZOJIKIKNGZQLXGPNZPENFOLWSLKUHSR");
    tmp_msg_0.lat = 0.1883966898418894;
    tmp_msg_0.lon = 0.6449635814098336;
    tmp_msg_0.z = 0.3492558038414061;
    tmp_msg_0.z_units = 66U;
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
    msg.setTimeStamp(0.5214113365605283);
    msg.setSource(64506U);
    msg.setSourceEntity(253U);
    msg.setDestination(333U);
    msg.setDestinationEntity(46U);
    msg.op = 208U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GEDRKSSZYLRLXKMNIQJXUDYJELXDHXVVGKFNWNFXDPBYUWWLWAFCGFSPPCREYVBJAQCTGGDJFOMDRNFPJUWLPSRDCPMCAHITPQLLSOHNZDVJXCRQQKCYABIGPWGQGKQUNEWO");
    tmp_msg_0.lat = 0.6032701664447122;
    tmp_msg_0.lon = 0.9990610695667789;
    tmp_msg_0.z = 0.6165360393378863;
    tmp_msg_0.z_units = 118U;
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
    msg.setTimeStamp(0.7414270279218537);
    msg.setSource(15214U);
    msg.setSourceEntity(51U);
    msg.setDestination(31759U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7080365272346701;
    msg.type = 172U;

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
    msg.setTimeStamp(0.45439488574783315);
    msg.setSource(46677U);
    msg.setSourceEntity(156U);
    msg.setDestination(36681U);
    msg.setDestinationEntity(147U);
    msg.value = 0.7676541790806882;
    msg.type = 159U;

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
    msg.setTimeStamp(0.16742497979193793);
    msg.setSource(55788U);
    msg.setSourceEntity(254U);
    msg.setDestination(31706U);
    msg.setDestinationEntity(239U);
    msg.value = 0.5672663224693363;
    msg.type = 50U;

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
    msg.setTimeStamp(0.765429344790179);
    msg.setSource(38982U);
    msg.setSourceEntity(113U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(246U);
    msg.value = 0.3352848481121201;

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
    msg.setTimeStamp(0.5605524436226655);
    msg.setSource(59669U);
    msg.setSourceEntity(248U);
    msg.setDestination(47759U);
    msg.setDestinationEntity(224U);
    msg.value = 0.8163388317760701;

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
    msg.setTimeStamp(0.16035215313360807);
    msg.setSource(55173U);
    msg.setSourceEntity(125U);
    msg.setDestination(22964U);
    msg.setDestinationEntity(232U);
    msg.value = 0.25153163969095704;

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
    msg.setTimeStamp(0.53581468235605);
    msg.setSource(51787U);
    msg.setSourceEntity(202U);
    msg.setDestination(30545U);
    msg.setDestinationEntity(102U);
    msg.timestamp_last_service = 0.6867194126855463;
    msg.time_next_service = 0.27238927807150926;
    msg.time_motor_next_service = 0.090243672773202;
    msg.time_idle_ground = 0.858495179021013;
    msg.time_idle_air = 0.5812332677939966;
    msg.time_idle_water = 0.851158193591855;
    msg.time_idle_underwater = 0.6037272341561964;
    msg.time_idle_unknown = 0.21772620086340044;
    msg.time_motor_ground = 0.5107598931411845;
    msg.time_motor_air = 0.8720071047663498;
    msg.time_motor_water = 0.02876981659345268;
    msg.time_motor_underwater = 0.02666623745150587;
    msg.time_motor_unknown = 0.4787096792074439;
    msg.rpm_min = -10671;
    msg.rpm_max = -16570;
    msg.depth_max = 0.2746327385484092;

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
    msg.setTimeStamp(0.9066353688463594);
    msg.setSource(18794U);
    msg.setSourceEntity(239U);
    msg.setDestination(13154U);
    msg.setDestinationEntity(72U);
    msg.timestamp_last_service = 0.01393771796263299;
    msg.time_next_service = 0.22826197506349732;
    msg.time_motor_next_service = 0.17114461427648575;
    msg.time_idle_ground = 0.5122131091017162;
    msg.time_idle_air = 0.5464851195996574;
    msg.time_idle_water = 0.9895663989826815;
    msg.time_idle_underwater = 0.579370951588225;
    msg.time_idle_unknown = 0.4973472585579638;
    msg.time_motor_ground = 0.832822708590538;
    msg.time_motor_air = 0.23366360521692953;
    msg.time_motor_water = 0.6958142056367644;
    msg.time_motor_underwater = 0.4648845980213152;
    msg.time_motor_unknown = 0.26262347057719604;
    msg.rpm_min = 22376;
    msg.rpm_max = 1753;
    msg.depth_max = 0.955157586562497;

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
    msg.setTimeStamp(0.19211129803898608);
    msg.setSource(24201U);
    msg.setSourceEntity(125U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(217U);
    msg.timestamp_last_service = 0.46277231873921987;
    msg.time_next_service = 0.48644633564194406;
    msg.time_motor_next_service = 0.1092090919822446;
    msg.time_idle_ground = 0.09159162797580245;
    msg.time_idle_air = 0.4062251565279176;
    msg.time_idle_water = 0.812903942615316;
    msg.time_idle_underwater = 0.5309388325644968;
    msg.time_idle_unknown = 0.012496114795301771;
    msg.time_motor_ground = 0.085202546057356;
    msg.time_motor_air = 0.10715938658712232;
    msg.time_motor_water = 0.5357285617758526;
    msg.time_motor_underwater = 0.22523794266482944;
    msg.time_motor_unknown = 0.8429320067734093;
    msg.rpm_min = -15200;
    msg.rpm_max = -13676;
    msg.depth_max = 0.26152082764186413;

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
    msg.setTimeStamp(0.8441689869611795);
    msg.setSource(3273U);
    msg.setSourceEntity(155U);
    msg.setDestination(7104U);
    msg.setDestinationEntity(115U);
    msg.severity = 76U;
    msg.text.assign("QBOLRZXPVFJLFXVCQYJDTPSNKUAHORJAZIPOGHVIOAOFRRVRFQKJQPVJC");

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
    msg.setTimeStamp(0.2430661320673284);
    msg.setSource(65013U);
    msg.setSourceEntity(189U);
    msg.setDestination(11130U);
    msg.setDestinationEntity(186U);
    msg.severity = 168U;
    msg.text.assign("KMHSNAZQZCDCREEG");

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
    msg.setTimeStamp(0.9824523489352277);
    msg.setSource(14375U);
    msg.setSourceEntity(101U);
    msg.setDestination(12966U);
    msg.setDestinationEntity(51U);
    msg.severity = 104U;
    msg.text.assign("AVXYOEFOHRZZAWGELPKEFYJIIJBOAFZKCLFXRYPXVMKQSRK");

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
    msg.setTimeStamp(0.8950132794162069);
    msg.setSource(7567U);
    msg.setSourceEntity(11U);
    msg.setDestination(52505U);
    msg.setDestinationEntity(150U);
    msg.channel = -54;
    msg.value = -1322001693;
    msg.gain = 150U;

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
    msg.setTimeStamp(0.15818202434242323);
    msg.setSource(2978U);
    msg.setSourceEntity(206U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(201U);
    msg.channel = -46;
    msg.value = -524200265;
    msg.gain = 119U;

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
    msg.setTimeStamp(0.43986342369600295);
    msg.setSource(63900U);
    msg.setSourceEntity(68U);
    msg.setDestination(21307U);
    msg.setDestinationEntity(116U);
    msg.channel = -94;
    msg.value = 1593310119;
    msg.gain = 240U;

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
    msg.setTimeStamp(0.8134015244451892);
    msg.setSource(30075U);
    msg.setSourceEntity(114U);
    msg.setDestination(8853U);
    msg.setDestinationEntity(220U);
    msg.ch01 = 0.36446703502530176;
    msg.ch02 = 0.5310839845183521;
    msg.ch03 = 0.32636146349244055;
    msg.ch04 = 0.7233279665729399;
    msg.ch05 = 0.7389357258327983;
    msg.ch06 = 0.48134775922373296;
    msg.ch07 = 0.7408914466555093;
    msg.ch08 = 0.41888206344694334;
    msg.ch09 = 0.8300528553985467;
    msg.ch10 = 0.5569813235627737;
    msg.ch11 = 0.9742370384691829;
    msg.ch12 = 0.2060956434494675;
    msg.ch13 = 0.8283030127702634;
    msg.ch14 = 0.6811283931737648;
    msg.ch15 = 0.1991414039165339;
    msg.ch16 = 0.9108730394990194;

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
    msg.setTimeStamp(0.12574251590520757);
    msg.setSource(65107U);
    msg.setSourceEntity(36U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(14U);
    msg.ch01 = 0.5969676296933834;
    msg.ch02 = 0.7126186617220431;
    msg.ch03 = 0.8078557160027376;
    msg.ch04 = 0.01691670447615612;
    msg.ch05 = 0.011235936147545256;
    msg.ch06 = 0.37011402239761004;
    msg.ch07 = 0.8228210330897499;
    msg.ch08 = 0.28379957028569813;
    msg.ch09 = 0.5764222813743678;
    msg.ch10 = 0.8296809139429961;
    msg.ch11 = 0.8540794290566651;
    msg.ch12 = 0.48263878664364046;
    msg.ch13 = 0.3626622433983189;
    msg.ch14 = 0.6507692607263356;
    msg.ch15 = 0.9037950471334023;
    msg.ch16 = 0.3425097178217761;

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
    msg.setTimeStamp(0.785732683638159);
    msg.setSource(60697U);
    msg.setSourceEntity(168U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(141U);
    msg.ch01 = 0.3955343952757995;
    msg.ch02 = 0.9779043659265656;
    msg.ch03 = 0.08260068004566445;
    msg.ch04 = 0.2731040295247915;
    msg.ch05 = 0.2078659481856825;
    msg.ch06 = 0.754264718409106;
    msg.ch07 = 0.5649950750638939;
    msg.ch08 = 0.31491963992380956;
    msg.ch09 = 0.092765908981715;
    msg.ch10 = 0.3931670429971349;
    msg.ch11 = 0.12833044349543576;
    msg.ch12 = 0.6767900336805068;
    msg.ch13 = 0.7721197324192006;
    msg.ch14 = 0.7354339631414759;
    msg.ch15 = 0.3117376108634118;
    msg.ch16 = 0.8585604623613127;

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
    msg.setTimeStamp(0.47403264741152507);
    msg.setSource(5134U);
    msg.setSourceEntity(4U);
    msg.setDestination(13306U);
    msg.setDestinationEntity(225U);
    msg.op = 78U;
    msg.lat = 0.17618538250608762;
    msg.lon = 0.9436412165295955;
    msg.height = 0.5284003540623179;
    msg.depth = 0.8412003365870345;
    msg.alt = 0.07020312955842312;

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
    msg.setTimeStamp(0.452795101431142);
    msg.setSource(21624U);
    msg.setSourceEntity(25U);
    msg.setDestination(16745U);
    msg.setDestinationEntity(123U);
    msg.op = 155U;
    msg.lat = 0.3878387120104043;
    msg.lon = 0.22439724873765066;
    msg.height = 0.025795470245187135;
    msg.depth = 0.437681915045551;
    msg.alt = 0.6502887205403141;

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
    msg.setTimeStamp(0.44256475948197926);
    msg.setSource(26892U);
    msg.setSourceEntity(251U);
    msg.setDestination(29942U);
    msg.setDestinationEntity(10U);
    msg.op = 223U;
    msg.lat = 0.2836230538638401;
    msg.lon = 0.6860377176658232;
    msg.height = 0.32559610896097535;
    msg.depth = 0.6192706921649289;
    msg.alt = 0.05753894529465464;

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
    msg.setTimeStamp(0.6985620348912561);
    msg.setSource(65074U);
    msg.setSourceEntity(164U);
    msg.setDestination(34532U);
    msg.setDestinationEntity(211U);
    msg.direction = 0.20129854366600153;
    msg.speed = 0.38169433728777247;
    msg.turbulence = 0.4787307712402469;

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
    msg.setTimeStamp(0.8816269821520957);
    msg.setSource(55279U);
    msg.setSourceEntity(26U);
    msg.setDestination(19018U);
    msg.setDestinationEntity(94U);
    msg.direction = 0.5619540640097246;
    msg.speed = 0.29645092988149646;
    msg.turbulence = 0.5505919973259729;

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
    msg.setTimeStamp(0.7769750366691917);
    msg.setSource(18610U);
    msg.setSourceEntity(22U);
    msg.setDestination(20240U);
    msg.setDestinationEntity(84U);
    msg.direction = 0.3253255208539657;
    msg.speed = 0.9976713800643715;
    msg.turbulence = 0.6713980470444249;

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
    msg.setTimeStamp(0.8286764295104929);
    msg.setSource(18493U);
    msg.setSourceEntity(129U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(237U);
    msg.msg_type.assign("GBSZKOLAWOJRDLOINHNAWFWIXDZSZHEVVIWYSMGUYGPHMHLVZOZXAFGOEENYOLBKJSO");
    msg.sensor_class.assign("TCFVYNLDRBTZJLMNOMWBHWKRSIRERICIAAIBPUXWBKXKOEZFKOWHNBMRQAJNWPCZFWUDYTNUMIOBNXFMUFVJMHXOXKSQEGJSSYDLTTAXZKLDAIPWREWMVTVZFVSNAHHACBCWXSGTJVPUOXPQDQECPDCAVFZVVRQOTDRNPZOGJHXCTLYPXUPBYGBIDCLJGDEQUJTEYEYGGHAFRSQHGHKEYLMDCFHNKJZYUYZNLKSLOIG");
    msg.mmsi.assign("MYOXYNZBHPBCSQTNTXXDJFFIFSZVJEDFAYUPULESXJYXVJYMUKNROVHTNLSKVKBZMQDVADGJMDOTYXVDIELLRKUXQLFAHCLAXKOIBECKTYFJWKRCMIAAPRSSGIAPOFHNMYKRZHSDMHCICPICRTOBYGQJZEOHHAVNMFLDLUUUNFPJGLZNKAWIRZVGZWBZPEJXQDEPBWXJ");
    msg.callsign.assign("INUKRNKBTXWLSRDEZFLZOXOQTJGTVROUIMQZKEJEBLHUIHVYGIFBFKQEXAGMNZFRYGUKH");
    msg.name.assign("MQBYZVZQBJITUZBXPUVQMSECEQMQSTKWYUXRBDGFLHCDVAEDMDHCYSRVIBAULLRGXJNYAMNGEWGBSWQOFZXSJPXXIBFVWMMHKIZAPOJPKNJRMVTWATNATYPZLFJDARUDQRIGUOHNHCDTPI");
    msg.nav_status = 161U;
    msg.type_and_cargo = 229U;
    msg.lat = 0.27293921053672365;
    msg.lon = 0.6492632570055682;
    msg.course = 0.5058273465029284;
    msg.speed = 0.4955325220651887;
    msg.dist = 0.7894473673313592;
    msg.a = 0.6345892847267288;
    msg.b = 0.3124517999327794;
    msg.c = 0.7405601470130467;
    msg.d = 0.8645420589945454;
    msg.draught = 0.2609212471028397;

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
    msg.setTimeStamp(0.15403655694347507);
    msg.setSource(1425U);
    msg.setSourceEntity(224U);
    msg.setDestination(53270U);
    msg.setDestinationEntity(201U);
    msg.msg_type.assign("IXHJQFDGKVOJNSFHSGUECZJVCAZNUMYMMLWDWEDOIXTKQJXJPOQITWHOLHXKLRJBGVVKGZKVGHPOQHFYXZBTUYYQUNVBYGICEBEASFJKARWVWNTQHQBUDEMAMLTRDAXHTZLPCYFAODCPZHEMRSXWJTGLSWCRGEUASAYRFFODFRKPTYXBZYUILKOWWUCVQSRPMMLC");
    msg.sensor_class.assign("HXBHVJHBQQC");
    msg.mmsi.assign("NPJQBVWOJYEXAZSZOWUOFRMFJVEVONSNABOGPZSLMDPWTIJFUBMETVDEEHUANTCGMOQMNHYXGMUXLKNAWIGNAIJGUVJFPPXGKUOHCOGLDAHHDLNBDKDHFYSCIPHRQWEL");
    msg.callsign.assign("QTDREYEIKVCXDOYIMTSWLOHQRCFNFVUAQQEDTIZYZLKMVQTDOTKMIUWPYWCKF");
    msg.name.assign("LRKIGTTQDJUOXPNSUIKDNKZTTREVWOXYPLCVDVFUKKNQEFLTWTQUUIJHPALNFMWCJHUXEVIMHYKVRQRPNQEPOSEMALLSUKDOEWWILJVTNRBYMIYGOLJFNFHYXQBZWEJASFZPGDGNOTWVPKJCDUELMYGXOMNXTZOZHGZFHRAFSXIWSJGWQKQGDGCKXMYHWRHSBAHHVFADZJUAAPOYBRBLMMCBDMQCEBIBBVZFIIUNDPJGAYEAYC");
    msg.nav_status = 37U;
    msg.type_and_cargo = 72U;
    msg.lat = 0.06319683676444487;
    msg.lon = 0.919356558052076;
    msg.course = 0.8816511920423894;
    msg.speed = 0.6911181223959368;
    msg.dist = 0.4003414271053578;
    msg.a = 0.9082097665284032;
    msg.b = 0.436450979588196;
    msg.c = 0.958701974278205;
    msg.d = 0.7590542703389852;
    msg.draught = 0.7175753765651108;

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
    msg.setTimeStamp(0.6021236529026874);
    msg.setSource(59173U);
    msg.setSourceEntity(85U);
    msg.setDestination(40072U);
    msg.setDestinationEntity(123U);
    msg.msg_type.assign("GFLSHXTFSJGIHXRGIRAOYBIYGUMYNOPOKZLNSLZYNPCGCDMRMLCZGBDUSWYZIIBUPFWCQOBWTNXUDTLXEERXFTKWKKRFNJBDHFQAPDVVWGKLPIRTQSVCHPHGEUDVTWXFOISANMSKKHQLDDWQYEDLUOBZCTQXUCSKRHSAJZYJMMHPJAVONTJBIUBJQJOAXHKAKLEUDWNPARVIMWAIRQOBHOYVJEXCGZ");
    msg.sensor_class.assign("JQWZDNLPUYSWLWUDFMPEIRITXWLFICNUFPDBGQGXJIZXVDJLCMNHKJSYBNHNOGFEXVFAICVSVVWITIGSJQHZUMAZRRHOCZTOFJJ");
    msg.mmsi.assign("QBRGLPHDQUSRJSFEBXCNIILYZMNWAAYBLDLFRONP");
    msg.callsign.assign("TWGCDAHYFDJJK");
    msg.name.assign("MCFQTKZIDWRNJXAIFWOQERNFUPIWEOPEYKVYITWLGUFBHCHBHYAVNVLZQSCGJGBGIVMOIVOVAUMQXYPDZEYDSGABKLNFAYSXMRTLRDVCTPQZFGCCHAQNDDWECPYPWVUHNGRLXYIZSBSHBFRMGWBOLKMBSRSROVNJMFPNCSYRXTZKNJMLAUTLGZXKPSFHJXIIEOWLHZHPTBNOBXXEUJZAAJDUCKOEADJVYTQE");
    msg.nav_status = 133U;
    msg.type_and_cargo = 132U;
    msg.lat = 0.2651574739352358;
    msg.lon = 0.403021098504747;
    msg.course = 0.9307535361855457;
    msg.speed = 0.2295775223546762;
    msg.dist = 0.1674144603467571;
    msg.a = 0.21184719283870213;
    msg.b = 0.26267845527433964;
    msg.c = 0.6816935469516527;
    msg.d = 0.5520949053112216;
    msg.draught = 0.6325245768402418;

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
    msg.setTimeStamp(0.5900887889320342);
    msg.setSource(7036U);
    msg.setSourceEntity(138U);
    msg.setDestination(60442U);
    msg.setDestinationEntity(141U);
    msg.depth_at_loc.assign("RQXDKFXIPHLGUHOEMFBTDQBIMLWJOEDGEWVKPCGRRNXQNRFPPWVUDBVAICSBMEIEWOIZOGPEFDRQAVTLDRTRQXLFYWTNNMPOVZYXHSWAZFAVYBSZQLNBKNTJEKYWAUWS");
    msg.danger.assign("DOTGJOTBICSOFNGERJACJVQHHJTWFJWHIWPUMOTVFDAZSHJPGZWRSOAYYLLFUZQYNVD");

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
    msg.setTimeStamp(0.7000601337703025);
    msg.setSource(23764U);
    msg.setSourceEntity(137U);
    msg.setDestination(48663U);
    msg.setDestinationEntity(151U);
    msg.depth_at_loc.assign("XHEMDISYYOMFDNFSBBGRYBNMEDGTHGNIAQRJHFIQNOKMCZHSUFTVXECUDKBOLYBGLHLZUQTJUEQKYJZFPEMDLPHRQNBPHKDYYRIWYPOQCHVVCZNMGLWLEUVNSMMLYIAPQXNMSWOSXGWZTCRXFKWZJGHCAXWQNKIDHPREQZKSAPFJUOV");
    msg.danger.assign("TDQLJADHRXQPANGSWSVHDZHMYOGNBYXGEFHQTVOEKMLCEIZYOLHYKSJUPLSCRKXQPTVKNCMABOTRIQWLRICGBWD");

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
    msg.setTimeStamp(0.17310372391846351);
    msg.setSource(47317U);
    msg.setSourceEntity(56U);
    msg.setDestination(29246U);
    msg.setDestinationEntity(141U);
    msg.depth_at_loc.assign("TAYGLEXJQHVENCOUALYZDIMAHVOTEIWQIEMUWJVONDNNLCPTFOVHDQTKWWARVTMTLKTNAILYDFCNENAIUWRVMVTEOOKJXKXMYKBSCXMDGVPDLAWRXBFQUVXQJGBSP");
    msg.danger.assign("NIGXSRFRCJBJTBQYAOOVAVXYXLVMSRTBNMDWXEHMUHTEBSNPZUBYMJVKYWIQRNSYVHTDAASHZDFIVPFNSOSGXFVZPIDDEVJBUBFQPJZISUMRPKWJIHARPMZUCTEMOGUBCHX");

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
    msg.setTimeStamp(0.7206692616642135);
    msg.setSource(1721U);
    msg.setSourceEntity(0U);
    msg.setDestination(24694U);
    msg.setDestinationEntity(156U);
    msg.time = 0.9207071862635999;
    msg.x = 0.9503324695683221;
    msg.y = 0.8935891545309517;
    msg.z = 0.2951780071636684;

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
    msg.setTimeStamp(0.5982535658596062);
    msg.setSource(39610U);
    msg.setSourceEntity(80U);
    msg.setDestination(55133U);
    msg.setDestinationEntity(85U);
    msg.time = 0.2659005834048058;
    msg.x = 0.15489688045154015;
    msg.y = 0.22112506107110885;
    msg.z = 0.9863285841755642;

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
    msg.setTimeStamp(0.9322958596937531);
    msg.setSource(35578U);
    msg.setSourceEntity(61U);
    msg.setDestination(47787U);
    msg.setDestinationEntity(6U);
    msg.time = 0.630833324128491;
    msg.x = 0.36668310707237217;
    msg.y = 0.24471567020014318;
    msg.z = 0.5076436074276557;

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
    msg.setTimeStamp(0.13059194008682762);
    msg.setSource(28381U);
    msg.setSourceEntity(192U);
    msg.setDestination(6498U);
    msg.setDestinationEntity(142U);
    msg.nbeams = 12U;
    msg.ncells = 195U;
    msg.coord_sys = 196U;

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
    msg.setTimeStamp(0.11139074253590953);
    msg.setSource(13396U);
    msg.setSourceEntity(144U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(143U);
    msg.nbeams = 169U;
    msg.ncells = 46U;
    msg.coord_sys = 104U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.20766599678362796;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.24144408369342252;
    tmp_tmp_msg_0_0.amp = 0.8525171849003369;
    tmp_tmp_msg_0_0.cor = 95U;
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
    msg.setTimeStamp(0.3728961655959192);
    msg.setSource(34160U);
    msg.setSourceEntity(129U);
    msg.setDestination(8636U);
    msg.setDestinationEntity(193U);
    msg.nbeams = 102U;
    msg.ncells = 49U;
    msg.coord_sys = 185U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.3644010726667243;
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
    msg.setTimeStamp(0.3907577069436481);
    msg.setSource(54504U);
    msg.setSourceEntity(62U);
    msg.setDestination(14648U);
    msg.setDestinationEntity(141U);
    msg.cell_position = 0.8615269263728877;

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
    msg.setTimeStamp(0.03935109418782623);
    msg.setSource(9096U);
    msg.setSourceEntity(183U);
    msg.setDestination(64135U);
    msg.setDestinationEntity(158U);
    msg.cell_position = 0.6583439341353846;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.019585237328645033;
    tmp_msg_0.amp = 0.9815858356124291;
    tmp_msg_0.cor = 152U;
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
    msg.setTimeStamp(0.3776798534325033);
    msg.setSource(14783U);
    msg.setSourceEntity(224U);
    msg.setDestination(18240U);
    msg.setDestinationEntity(91U);
    msg.cell_position = 0.9070065182865431;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5998075854383949;
    tmp_msg_0.amp = 0.06126439008059392;
    tmp_msg_0.cor = 138U;
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
    msg.setTimeStamp(0.7594083997912988);
    msg.setSource(1746U);
    msg.setSourceEntity(149U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(126U);
    msg.vel = 0.5365575221740858;
    msg.amp = 0.7376983494409862;
    msg.cor = 4U;

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
    msg.setTimeStamp(0.26218932116125404);
    msg.setSource(39240U);
    msg.setSourceEntity(92U);
    msg.setDestination(50538U);
    msg.setDestinationEntity(172U);
    msg.vel = 0.8783843273316727;
    msg.amp = 0.5135179748234489;
    msg.cor = 28U;

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
    msg.setTimeStamp(0.0526958419219703);
    msg.setSource(62048U);
    msg.setSourceEntity(167U);
    msg.setDestination(14234U);
    msg.setDestinationEntity(170U);
    msg.vel = 0.08074588904963664;
    msg.amp = 0.299666836347089;
    msg.cor = 23U;

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
    msg.setTimeStamp(0.9742240814255418);
    msg.setSource(52345U);
    msg.setSourceEntity(64U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8454679474925619;

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
    msg.setTimeStamp(0.05961739602660732);
    msg.setSource(10371U);
    msg.setSourceEntity(190U);
    msg.setDestination(13543U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6949843393819867;

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
    msg.setTimeStamp(0.6912569788704424);
    msg.setSource(44765U);
    msg.setSourceEntity(114U);
    msg.setDestination(48975U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6501572749741187;

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
    msg.setTimeStamp(0.790985207690478);
    msg.setSource(54411U);
    msg.setSourceEntity(143U);
    msg.setDestination(6451U);
    msg.setDestinationEntity(227U);
    msg.sig_wave_height_hm0 = 0.21162290749547608;
    msg.wave_peak_direction = 0.37571108705805645;
    msg.wave_peak_period = 0.04447565274540011;
    msg.wave_height_wind_hm0 = 0.5166950675615165;
    msg.wave_height_swell_hm0 = 0.4519927436298674;
    msg.wave_peak_period_wind = 0.6007443223753539;
    msg.wave_peak_period_swell = 0.6792407290690374;
    msg.wave_peak_direction_wind = 0.015963467365362027;
    msg.wave_peak_direction_swell = 0.31226907755830835;
    msg.wave_mean_direction = 0.5877834877033115;
    msg.wave_mean_period_tm02 = 0.99878772327015;
    msg.wave_height_hmax = 0.6640426361058444;
    msg.wave_height_crest = 0.7325815233108178;
    msg.wave_height_trough = 0.12305828741811575;
    msg.wave_period_tmax = 0.5320606526673612;
    msg.wave_period_tz = 0.3554773272739401;
    msg.significant_wave_height_h1_3 = 0.5342421992006368;
    msg.mean_spreading_angle = 0.8867926629689036;
    msg.first_order_spread = 0.47332586686492284;
    msg.long_crestedness_parameters = 0.923869781700224;
    msg.heading = 0.20659567236286736;
    msg.pitch = 0.11032302910538072;
    msg.roll = 0.5933547252368895;
    msg.external_heading = 0.9909843498278681;
    msg.stdev_heading = 0.9273742619019517;
    msg.stdev_pitch = 0.6039252146537075;
    msg.stdev_roll = 0.24146012090461355;

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
    msg.setTimeStamp(0.9367558431687483);
    msg.setSource(33712U);
    msg.setSourceEntity(38U);
    msg.setDestination(44220U);
    msg.setDestinationEntity(0U);
    msg.sig_wave_height_hm0 = 0.27890180191032965;
    msg.wave_peak_direction = 0.24717472755601744;
    msg.wave_peak_period = 0.17473080000284869;
    msg.wave_height_wind_hm0 = 0.560271626509462;
    msg.wave_height_swell_hm0 = 0.4620521960805163;
    msg.wave_peak_period_wind = 0.04935760089316377;
    msg.wave_peak_period_swell = 0.8295656802390003;
    msg.wave_peak_direction_wind = 0.21421853884919617;
    msg.wave_peak_direction_swell = 0.6828408649464203;
    msg.wave_mean_direction = 0.23431599096787492;
    msg.wave_mean_period_tm02 = 0.8529724471767033;
    msg.wave_height_hmax = 0.0352209743176104;
    msg.wave_height_crest = 0.9203792621277047;
    msg.wave_height_trough = 0.10327373789866956;
    msg.wave_period_tmax = 0.5205129250160418;
    msg.wave_period_tz = 0.7449708723744488;
    msg.significant_wave_height_h1_3 = 0.5698119547949252;
    msg.mean_spreading_angle = 0.5764981045266596;
    msg.first_order_spread = 0.7409179820826595;
    msg.long_crestedness_parameters = 0.20273421456984442;
    msg.heading = 0.20999877881410356;
    msg.pitch = 0.01792253467353422;
    msg.roll = 0.3692876477768714;
    msg.external_heading = 0.133659455079421;
    msg.stdev_heading = 0.5827386844897988;
    msg.stdev_pitch = 0.06536883033741181;
    msg.stdev_roll = 0.6685647484572448;

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
    msg.setTimeStamp(0.03797439278841397);
    msg.setSource(24264U);
    msg.setSourceEntity(84U);
    msg.setDestination(18939U);
    msg.setDestinationEntity(34U);
    msg.sig_wave_height_hm0 = 0.5609576617651361;
    msg.wave_peak_direction = 0.5716872757225229;
    msg.wave_peak_period = 0.7577073310802872;
    msg.wave_height_wind_hm0 = 0.6825968728531996;
    msg.wave_height_swell_hm0 = 0.0008657926875444977;
    msg.wave_peak_period_wind = 0.6807799838597981;
    msg.wave_peak_period_swell = 0.5155888483630268;
    msg.wave_peak_direction_wind = 0.7956164729301944;
    msg.wave_peak_direction_swell = 0.6119224111435154;
    msg.wave_mean_direction = 0.33226050100414617;
    msg.wave_mean_period_tm02 = 0.34924698789240893;
    msg.wave_height_hmax = 0.8017721999867754;
    msg.wave_height_crest = 0.4892580548332326;
    msg.wave_height_trough = 0.7416607235778492;
    msg.wave_period_tmax = 0.7163560399895351;
    msg.wave_period_tz = 0.6028367871710413;
    msg.significant_wave_height_h1_3 = 0.49231050624661044;
    msg.mean_spreading_angle = 0.06093012348231297;
    msg.first_order_spread = 0.999394269656569;
    msg.long_crestedness_parameters = 0.07301146186354546;
    msg.heading = 0.0059906486319940555;
    msg.pitch = 0.7483354264512406;
    msg.roll = 0.2262637329283067;
    msg.external_heading = 0.6236899013309471;
    msg.stdev_heading = 0.36875884093191047;
    msg.stdev_pitch = 0.6772954351277007;
    msg.stdev_roll = 0.8090423338958436;

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
    msg.setTimeStamp(0.15780036355788585);
    msg.setSource(40912U);
    msg.setSourceEntity(234U);
    msg.setDestination(49552U);
    msg.setDestinationEntity(114U);
    msg.name.assign("WSDJLXSYZCRVSNJTBBIKSAFUYDCCGEXKEBWQFEPPHOHVKEPBJKFXYWAKUDWTAQPRWOVJRUQSTCAELTUQFMUZKDLMVJPNCHYXBGKDYSQITPIFZQZFIXUNXDAJLGNLYOQVANGNMIEPEGQRNRGKLMMIHCGVVVXCRRIVOJOZFBOAYDVEYDAXNLCBMPJZFSYCWGDB");
    msg.value = 82U;

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
    msg.setTimeStamp(0.5388051941505857);
    msg.setSource(50435U);
    msg.setSourceEntity(223U);
    msg.setDestination(32392U);
    msg.setDestinationEntity(167U);
    msg.name.assign("XXIHLXSPEJPLIQLJOIJKEJJUZBPMDQVTKZNDWPWA");
    msg.value = 58U;

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
    msg.setTimeStamp(0.22479320584320228);
    msg.setSource(31596U);
    msg.setSourceEntity(105U);
    msg.setDestination(37644U);
    msg.setDestinationEntity(8U);
    msg.name.assign("MPYINBXNYTEDEAAACFZIOMFCCDTRIASWHJYLFGSSDZGWYVRJXBBMKWWNPIIGCSCIUUSODWEJOLZDMFFJZKSARBOJZXRJMMWDTYLULMGVHNLJKIPNKPJDLAKLVVVBOZGNGKYQNXCJPXXTKEZFZVEXSQHZRAR");
    msg.value = 78U;

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
    msg.setTimeStamp(0.34824739395604276);
    msg.setSource(51904U);
    msg.setSourceEntity(48U);
    msg.setDestination(13060U);
    msg.setDestinationEntity(47U);
    msg.name.assign("SGTZLDWLSLHABQDXYOOSPNZIMJTNCQYKLICRRZYGOSVHKXYVPUBKPNGVWSJEVJBKEXAXDPWMNQQCUMITDMPRYRCSPAEIZODDWLWVROCYVGGANBULNHFKUITCQTWUKDSEJEUBRWPWWZOGHJHPGECAFLFQPIXBLZUUIVQMVHXUMEXNZJGRAFATIGXSCOLWJ");

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
    msg.setTimeStamp(0.29587552465426215);
    msg.setSource(28431U);
    msg.setSourceEntity(74U);
    msg.setDestination(14376U);
    msg.setDestinationEntity(153U);
    msg.name.assign("PLTXILDUBZVLGSZWBWHJMCSTTVLUADJNIVWWXVVCDEROQWMNAKGZSMXKGEUPROPPBMNASBUHCUAYPRNVQPYCSYGFJDJOXLRKOAKQBIYFITRIFCRHDDQUVSYNZHFNAQBIQAQSIIEHEKYGTGOXMZILKJJCYWUUEGFFXRSREAYFOFECWOHTM");

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
    msg.setTimeStamp(0.8154880915428416);
    msg.setSource(14110U);
    msg.setSourceEntity(136U);
    msg.setDestination(41780U);
    msg.setDestinationEntity(170U);
    msg.name.assign("QSEJBDSCKFHCWEBXZHVZVNJJLFGLKELPAMCNSXAMDIBJVKYQVCAFYNPHCAHNHGSTQMXGWUGRKPKIIGNWDOKFBRZYPHNRRHCIWUVYTOKOPLMGIUMQCCTIXUESMBGSQNMLYXDTEVOTOWUQTSILNNZFGUCRPURSALFIMGBPJAAXWQMCSJRRTBJASPQU");

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
    msg.setTimeStamp(0.4533998239738877);
    msg.setSource(47616U);
    msg.setSourceEntity(244U);
    msg.setDestination(30264U);
    msg.setDestinationEntity(66U);
    msg.name.assign("GCKLJONAXYUFVMCZWJPCXHFFCVSXMLHAGDKVEQUWPOHLWIMXTIREZNLHSZWTMXEORHXWEMIHUMPMXNQDEJGCUXUBPNFUOQEP");
    msg.value = 24U;

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
    msg.setTimeStamp(0.4539184178736836);
    msg.setSource(31031U);
    msg.setSourceEntity(147U);
    msg.setDestination(48750U);
    msg.setDestinationEntity(171U);
    msg.name.assign("VSJBSPZONEBSEJGXGRXTJDMWTCUPYWPTUALGNDMSNLAZPDOMHGPHRHDFHIQNIAZPVZCJBVRXILSEKZVUFNZCKOTBDRQXQNRKLUECFVEWMWWXOAZATOQFOLDCDFCFNZZYWSEHBILHEFCUDAYBYCEYRAEJUIHRNVLKDQGHCUTFMDYXWMCIIWQTHBJPVRAEKMJTMXQAYOYBRGPWSLYXUKMWGBJONBNIPHSFTQ");
    msg.value = 85U;

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
    msg.setTimeStamp(0.18971604372109907);
    msg.setSource(28348U);
    msg.setSourceEntity(96U);
    msg.setDestination(16646U);
    msg.setDestinationEntity(105U);
    msg.name.assign("PFFZBSIVOPDLNBTFOZFVJGZFTUGTXSHOBRGVVQEYOUVMCCXSMSUIRTVRVAYTJDXHTGGFUWHZQGHJHASEZMKJEWUIDUWEBIKOAJDSNWUEWHMNWROUMCDBXQKARCSHEYQLGNPYEYYP");
    msg.value = 232U;

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
    msg.setTimeStamp(0.6293561788486649);
    msg.setSource(27187U);
    msg.setSourceEntity(92U);
    msg.setDestination(6761U);
    msg.setDestinationEntity(145U);
    msg.value = 0.8532727212905172;

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
    msg.setTimeStamp(0.8425744405933525);
    msg.setSource(5747U);
    msg.setSourceEntity(35U);
    msg.setDestination(8661U);
    msg.setDestinationEntity(199U);
    msg.value = 0.30382254513722184;

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
    msg.setTimeStamp(0.46880690118851054);
    msg.setSource(11564U);
    msg.setSourceEntity(89U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(82U);
    msg.value = 0.2285757730243584;

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
    msg.setTimeStamp(0.5051029684015189);
    msg.setSource(22603U);
    msg.setSourceEntity(139U);
    msg.setDestination(19354U);
    msg.setDestinationEntity(171U);
    msg.value = 0.8475638166120405;

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
    msg.setTimeStamp(0.8566151666791109);
    msg.setSource(12833U);
    msg.setSourceEntity(222U);
    msg.setDestination(57098U);
    msg.setDestinationEntity(247U);
    msg.value = 0.11804289404278812;

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
    msg.setTimeStamp(0.2155443004607921);
    msg.setSource(738U);
    msg.setSourceEntity(203U);
    msg.setDestination(58679U);
    msg.setDestinationEntity(101U);
    msg.value = 0.2321258421025807;

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
    msg.setTimeStamp(0.38022797494013816);
    msg.setSource(50430U);
    msg.setSourceEntity(67U);
    msg.setDestination(26695U);
    msg.setDestinationEntity(64U);
    msg.value = 0.7870095308737118;

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
    msg.setTimeStamp(0.8895931850830716);
    msg.setSource(16481U);
    msg.setSourceEntity(62U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(98U);
    msg.value = 0.8307067276208334;

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
    msg.setTimeStamp(0.45630730549681864);
    msg.setSource(37420U);
    msg.setSourceEntity(30U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(0U);
    msg.value = 0.10621811562955263;

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
    msg.setTimeStamp(0.08295115252616725);
    msg.setSource(43161U);
    msg.setSourceEntity(80U);
    msg.setDestination(8913U);
    msg.setDestinationEntity(231U);
    msg.restriction = 169U;
    msg.reason.assign("AIKNJMOPDSJJRIVRSAXZMSNBEESLCVICDBZSZBAAGCTJGQXQALJOBQGAXUTRLXGYVYYDRRVWNYJSYCXJFSOCGQKCZOYVCPMGTEGQKWHFFADHGXTTADPEQWHZTINFOEPTUJXENVNRHUQLSGYXMMFCMHOPHRAHWUSCDEIRLNEMKNXQKLWIIHCHKBOKEBUETPROKXWWUFUJLHDTISFRWMBZZDONQKBVMPGDNWZL");

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
    msg.setTimeStamp(0.5079175243781039);
    msg.setSource(15189U);
    msg.setSourceEntity(173U);
    msg.setDestination(29719U);
    msg.setDestinationEntity(65U);
    msg.restriction = 38U;
    msg.reason.assign("LQRSSWZPCVRMCARCNNIBEPLJNAWWHBRIOEIJQSNJRNLWOVLOJNEYTHQTYKPPYUBKMUOLDLMZZXHJWEWZRYGGGBBURKHQQDURXFTTETUNSWIALCSXEQVILHSSMJCGDVVVVYYTQEEFXJBPYPJUWTSFLGMDVWYCKBXDAAKAEAKFNFPZZKMOJBIXFOHPKWDGJLZGZRODYAMCYGKTHUIOIQFQDEAMHHUSU");

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
    msg.setTimeStamp(0.8019691908717134);
    msg.setSource(10802U);
    msg.setSourceEntity(67U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(218U);
    msg.restriction = 188U;
    msg.reason.assign("NGBJCHRIPPKRLBKXPUKXQXEOFGAALDESZMQBMRSRREGZP");

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
    msg.setTimeStamp(0.1762061241749734);
    msg.setSource(42930U);
    msg.setSourceEntity(253U);
    msg.setDestination(21888U);
    msg.setDestinationEntity(191U);
    msg.op = 97U;
    msg.request_id = 2188071502U;
    msg.entity_name.assign("WBYXKXIFBDLWSYIAFRLUYEKLTGHQPAGFJNMDORZIYWZSOOTCEHVTROTPGBCSZKLKFDXUEKPFLBRKASXJVVPGUBHXQTJNVVMWKXGSAUJJOICTWKDJOXUNFHAZYRJBNWPM");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LGXKCJHKJTJKFNXLQWMUTFUPEIBDEACALJMLYNSIXHHZMZZCNPTEQVHVRWMHQXUDSJVFVWPLGFTSCJZBPDFQVRDAVDCQBGKDUABJLIQZDGSQUYIEPTRDUSFLGQOSYNMZKEBBJILMAYKPXGPTTIQYYOEAOHLKICNXZFOYFWBAYVOQRKJVPHMUINNNNBOS");
    tmp_msg_0.type = 245U;
    tmp_msg_0.default_value.assign("ZAKIIJPBXSMHOMZZRXULGKLOKZUNENCNLBYTCPRCKPKVHANEZHYDLYDWUYIBBDVNWCDMTLRQQ");
    tmp_msg_0.units.assign("TDQIWVKFKHYKSAEAMAIHANJQOPFWSKMOCVZGWYSDOSWRWTBDXNSTYGPDNECHFVHQXEKNZPNLUIQNAXBQXKZZFPAXCGSUMWNNCSHZOZUCUJJXHIRJOJPXHEGEWKBEATQITMCMVECSKYEIJFGUBAOVQLQYFDTJRREIXKRLUMNBZVHFFBRKSPYTYUILINFEPLYOABYJWURRVODCQMLLHVRGRMXZWOSDLGODVLTGZCWDPBPXIAUJBZ");
    tmp_msg_0.description.assign("XDGBJORADPADYOMCSKLZEYBCOCIFYQIKOYGXRMFEDGPOKFQZPNTMCYIUEQVMHNTRXAITKJIPZMJVLWRYLRDRSEHGSCZIABINEGJUHNAXWHYARWLKBNGVQOBRFNPMTAKO");
    tmp_msg_0.values_list.assign("KOFRJOJLHSXEDNIJVPHAAADRBXGILCRKMSTLOGLJCKTSKFMHVWUGQPVFEDOMRTJRNUNV");
    tmp_msg_0.min_value = 0.4363696860891796;
    tmp_msg_0.max_value = 0.208437129728114;
    tmp_msg_0.list_min_size = 82U;
    tmp_msg_0.list_max_size = 19U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("TFJKPTLHZDBQJGCOIIMMDCNWFLNEQGJVAJJYSJWPXCAEFYTGWDOVWKAVIAGHRSDKKYJUA");
    tmp_tmp_msg_0_0.value.assign("KYQMXUBLDGJQOJUEFOXQVVBHUXDMGRIPLSOFGWPNQXXBVVCXHZWAQEQAYZPMSSJTLACKQGWJMOBMPFRWEOYMCAGLJSTHPRRYPBPSIUZRIPVXSYQLVJUCWLSDFNBFRSTYDCBVOYQZNIKKDOCJIXTIANLCIHNTXKFRBKRHJCBYGNVESMT");
    tmp_tmp_msg_0_0.values_list.assign("BMOITQVUZVWMDLXKMWRCFHOHQAWBOQDVAUDKJGIZCEPHSNTIVENOXAXICDGXUCFLMDXGJICHQASBMAQKMBNNGSLGYNCVOEPHTEEUCRUFUTPJMDBEAJWWCKUCRVXQIGSYZZMITUARHWXDPQPVYNJKWNIGASKYJKEUXSKQTFZZHLOJRCUGVGYQJLKPTAFFLNLETRDHEYNBZSDPWJBPQIRRZZSGXWRFYA");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 236U;
    tmp_msg_0.scope = 19U;
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
    msg.setTimeStamp(0.6637213288529239);
    msg.setSource(55930U);
    msg.setSourceEntity(64U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(121U);
    msg.op = 222U;
    msg.request_id = 3732238214U;
    msg.entity_name.assign("CXAEYUVYSPTLSODLTKHVQOELFIPHSNNOKQMPPWLHQUKBPBRKSFHIOSKLUCULGAXSZBXVTLUTSWQZJCUYQCJ");

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
    msg.setTimeStamp(0.30750925891820424);
    msg.setSource(26865U);
    msg.setSourceEntity(209U);
    msg.setDestination(44352U);
    msg.setDestinationEntity(43U);
    msg.op = 72U;
    msg.request_id = 3064959193U;
    msg.entity_name.assign("QQHGVKRLSNKMHPDXOWWHOILBCQVQXRDLSFDEROQOIAFMMTNYJBFZZLJDSWVEUZBGUOJTZJXZHPXFMIUDPFDCBYIGDLTTJZOYSNAPNHGGTIEVEYHSWUPMQKKGFUZAXOWQTEDVPNFLEYTBICIWNHZSUBAMKMWJRS");

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
    msg.setTimeStamp(0.024661687707408952);
    msg.setSource(56080U);
    msg.setSourceEntity(169U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(230U);
    msg.name.assign("FUDMGSOGKXMNMJCHMPHRGIWNAXNDVTLFFHYDFCJAFQVBIGZRSEKODIYTFZDIOZLTHWTWKUDGPSPISFWGUADZMVQYKV");
    msg.type = 143U;
    msg.default_value.assign("MKJEZHRUYEYYLFGMLRBEZCHBEJJNVDEXMKPCTHAZQVZWROGINJVIIAUJALKRGDZHCKZFMOSIJLXUKTFTXQBNAOROXCAXJFWQNMSGDSIOJDXXBNRMTUVHNHBADKSUGOGWRHYUCTUWNPJSYBHGNGPLVLPPURHVPBNWYOALWSC");
    msg.units.assign("WTNSWCRGXNBNZDLFXBTOHJZSRAYPUNESVTGWFTLWGDHOYCXHSLDBQNMMIQPLIVDEOFFKSIWSABBK");
    msg.description.assign("MXEDDNEAZNLMGKCXTQUD");
    msg.values_list.assign("GBNQXDDPUKXYLRFXPMOQCHZSGBCRMTOWVTLNOTDISOCNKHZGIWTXJYOHFTGIOUULQCEB");
    msg.min_value = 0.8649686351725523;
    msg.max_value = 0.3301833610863675;
    msg.list_min_size = 33U;
    msg.list_max_size = 209U;
    msg.visibility = 77U;
    msg.scope = 50U;

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
    msg.setTimeStamp(0.9122016746648309);
    msg.setSource(26304U);
    msg.setSourceEntity(214U);
    msg.setDestination(57305U);
    msg.setDestinationEntity(38U);
    msg.name.assign("OMHQEZXSKTYDUJBTWQJYBFHFNEMIBQEDHPRLUOASILPKKITBXETGZBFGANULALQZCOHWBJDWALYRPSXFIQPIJNNXWWKXHAOMQLQXVYJUKILTDQDWOXDFCHGOCYGYCNPTK");
    msg.type = 114U;
    msg.default_value.assign("KYSTKJDTHAHZJZVJPMTLIDGDNKPJGKEIXXQGLUEZPZWYOFGXCTWMAPUNYZBYMHETAOPYDUZVGIKRGOIFFSRVVJWJXDTBEJHBUXQNLPPGCIMHXNXZQQIOWZRJVQBHFDBSKVLLARLYONHRARBGUQJCULFRHUYODZODQUSMITIFGBDKFNRAMBUMWELWMAICNAEOASSVSWSCTVQNTMQFLIWN");
    msg.units.assign("XQTBSXPLUKFQNNDGTIAXOJZCWPAHUTWMIWMGDTXUMRPEKZRROHOHVSIBTNEYAFPLUAGSUISQOVINRBDJXJUFUQMLCGSRRBWVJHKMKBSFCCJUZTQVXZWDEJAYIDEMQSMODXQRBGF");
    msg.description.assign("SPRKUWRMZCMKQMFEVETJREVWUQZBVWBJSIPPNZJANKJFVXEMWIMGXOVFXSVUDAYRSSBDLXHGGUYRJPBXYIDLNBICFIJYZRCREZVYMIWJFQNHQBAJWFOMBDGKUSMFZTUVWPWSEXMLQENPAHCLKOHDGAPDAUXHFVQUCJHSCKCIZHLRPLPOFYAAZFUKBMXGXTZTTTDTLWLYQT");
    msg.values_list.assign("TEVWWYIWSXCKKIOZMVUSEXNMZLJLIXWKSUMSTVEHQLMDLMGXENGIMDPPSXBZADCJROLSJFIZGNYRNXEPLSGCNWLBJQRUYFCTGUUNBRWDYRAVHYQBNNGQVP");
    msg.min_value = 0.4032847152617519;
    msg.max_value = 0.29639538663520926;
    msg.list_min_size = 152U;
    msg.list_max_size = 198U;
    msg.visibility = 92U;
    msg.scope = 230U;

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
    msg.setTimeStamp(0.714967884720989);
    msg.setSource(14954U);
    msg.setSourceEntity(101U);
    msg.setDestination(21520U);
    msg.setDestinationEntity(151U);
    msg.name.assign("ZBYRJOVSDLEMFLAZGPCDLGQGGCHBJRIXAHYGFQMFTWKSWBZQPYVPYJUGDNESVXHUNVPMMYBCLIVNOVNWQTDDXIMUCEOSBRTXQYEEIWUSKQRWEKBYHGVWJORXKJMIUGKWNTRZJIKAFTTSAMFNURKPVDDOFEAKNEZPDDJTXFSMOTUZXSDHBRZUXYCHIPJOAHMAVWPUHLMLVJIHTIKTEWNXQIQBKLJQ");
    msg.type = 38U;
    msg.default_value.assign("VQMHXOWESQCUOTRROCKFAEIHTHWZYRKBXKWFHJWBPYNALXRPBOTLKGFYCSNOKMQPBZNRIUNQSRVZVIXYGAQQWIGXTMANDDLWNUWIRJBAOXRUVIMHICJQMMUTDSGEGZSUEJCKEEBDAHWLWIFMYPXPTLZMBNUSVZZFKEGXNDJCLU");
    msg.units.assign("SNLCXFHFBKKGSXBXFXWHCDDMYBPQCKEPUUSIKMVXQMRCLQOVYBASEQIJZJXPBPZHPWGGWDGPQYFVTDGRYAFEDRIYQNRCHLDBVXLVHTGUOISLMJNCSWNGQHAVGNQXCKWSTVKOZGQZUL");
    msg.description.assign("CWCKGBUYXYDYVXZMZDIEHLWW");
    msg.values_list.assign("YUIEOGTPBFJRQDPQWBWBSEILSYMTMSYNKICBHDJAOPEJQBMUGLVCGCMWHYDHWMUBFNXPWZQSREWNLUPTKSLJKAFZHDARCREEYTAUFLYIOPCXAAOZKKFSRTJHGFYHYQWVPMSNCCUBWAUGZQDGVDRDQHFLMRYIBBTIVJZE");
    msg.min_value = 0.9316645805891003;
    msg.max_value = 0.7240274489218603;
    msg.list_min_size = 123U;
    msg.list_max_size = 185U;
    msg.visibility = 229U;
    msg.scope = 29U;

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
    msg.setTimeStamp(0.6485087440281654);
    msg.setSource(24170U);
    msg.setSourceEntity(226U);
    msg.setDestination(53069U);
    msg.setDestinationEntity(244U);
    msg.param.assign("AIRBSQULVXERWHCOYYRNOSIHHUVVMWUBTFOMGOEAFDOHEZLIPZSWJBDEAKEDAEQBCVTPQRNQCIDFHOTJYPQZZYNANRVVCHSDZIGUIASJTRMSPLADPDCESQMPSBXWYGKWHP");
    msg.value.assign("UIWSTDDHZPCZFMLITHEKJCXCWIIYEFBOCVGMWAWTKXHVGPJNSBKSPCHWANGLCAIAOQGGSQRPPFTQXAJDDQABEUORFDXYJVXSMTYHFQTLVILNYCKULLEUKQZSUAKJOZGRMJFWWRHCBWBZNNLXQJEBXZHBPVNCKGSFROGCEP");
    msg.values_list.assign("WIXSMOATFOWNHJNIVUFZHKSYHFQSZEKOPQGSDMWOUBTCOQKLHHFGAXZCSWHQLQXTEMFBUJKIWEXQSMQRSPMPVAPUDUCWIDTJCJQEOTXG");

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
    msg.setTimeStamp(0.6720158693960246);
    msg.setSource(10904U);
    msg.setSourceEntity(31U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(106U);
    msg.param.assign("WJLGACGHVVOCLYEERGHCJLZPLZAQFRIDJSCNBTXFDGDKNBHLAYSBMVGCNUFYFYYQPRVCUZNHFXIWPDFPINEJMIYDJWPCZTWOPQSNRIOXWJGLPMJPNZKXZSPMTYQDHRUQRKDKMVTQMCXWWOXVROXLO");
    msg.value.assign("MDKPXYWOAVXCIKIECSBRYWDWYXBLZNRNWVMYRUEECIJRGMNVAUGSWRUOLWAAHYLITLZDEBGBGQSMLNCAFJMCDPXCVSOFTHYMUJLCOOLUQFYADGKWHIIVUQWGDNTRKEJXZFBJPZUGWETOVCEMHG");
    msg.values_list.assign("UFHKGTHFLRXVKCPDYSBDNIALGSWUZTNUNLVEBEVXNQUWMXKWGZXMDXFHBMSNAHPELBWSOXKFPEGLVUFOWYPKMINYAXARSCJTGUWPOZFLEAUQYXIXYRKJQZWEGABEHLCDVHBPDVCDAMOJGYDFI");

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
    msg.setTimeStamp(0.6297736437381837);
    msg.setSource(639U);
    msg.setSourceEntity(177U);
    msg.setDestination(23603U);
    msg.setDestinationEntity(159U);
    msg.param.assign("RPHDWUFJAYXPKHTDPWHBUCQVENWAKGLHMSVAGRILZBM");
    msg.value.assign("UZYQGPCKZRSFWQCKYULVPJOYLDWRPWIRHKTAZSZHZIQAVFXSKNFORIIEHPNFXTSRHNIDETCYKFXEJEHLDGSEBHXCFXCQQMFDEGCLOLSZBLK");
    msg.values_list.assign("VFIHTJLLAZHLHSFPWUFEVHFAMQOWCTADFGPKEIDZKAETBWVYDZCGRLQCBXQWSPTKRTEBOGHLYIXMLDNSHSEMVYNHGRAUMPESXGIWUDUUKYOOJVPPVWHCZGRPXJZVUEFKFDVPAMDDIDVARCRLQNNXCASHKYLYGGNYEMGZKFQINQXBYMZJEGQMBZJNISRTNKC");

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
    msg.setTimeStamp(0.47805735706281793);
    msg.setSource(9898U);
    msg.setSourceEntity(246U);
    msg.setDestination(2385U);
    msg.setDestinationEntity(179U);
    msg.op = 127U;
    msg.version.assign("UTSSUFSROMZJVYJALBEDBIVEXHHYYDZJXRAQEPAUGECQLNDUNZUYCNZWGELQMHHVSPSGIWHMKRGXXVACMWCPNUFEJIYCJMTFOJKAGZRDQWIGQJGXABZUEIKZLMUOIVSNWMPZKODXLMQFFOATRRQYUBLPWFPRBZCYYRNGTHXULVLLB");
    msg.description.assign("QGDEPBJCFRDGXNVNGRZWACHZKWJWMADYTQWAWCWHKURTEBKOEVNDVDUQQFMFCIVMSHNZZZFORLYHXGFZXURDOAFPGHEYCMVJXTWZLYOUPVMLMJZQAEJCXBKDVBNAIOSYTDMACULIPGGMUILNSQLZKHOEWBULABQXTSHIUFRNAXYIKOQEJENEJPXZPUTSTBSQVBGRSKDGIBNGUOCPMYITBKDEYPWIXKPNRC");

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
    msg.setTimeStamp(0.47295934848008914);
    msg.setSource(58916U);
    msg.setSourceEntity(253U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(169U);
    msg.op = 78U;
    msg.version.assign("NOVAJLQLZFRMGCOIUZWOCQURSFIJUIV");
    msg.description.assign("CVKMLIYJQHCPUCIORYYCXGORFPQLXEL");

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
    msg.setTimeStamp(0.44283185058582997);
    msg.setSource(26420U);
    msg.setSourceEntity(34U);
    msg.setDestination(10333U);
    msg.setDestinationEntity(24U);
    msg.op = 82U;
    msg.version.assign("FKQAIKFFPDWKUANGOW");
    msg.description.assign("SKTSPBKQYOLMADLAOUVXQLWHBCNPVXRNVZKCGDBZIZQMSSWMKLKULWOMGRAKGCSGOP");

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
    msg.setTimeStamp(0.9541793170501554);
    msg.setSource(22816U);
    msg.setSourceEntity(223U);
    msg.setDestination(61570U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5383981541353412;

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
    msg.setTimeStamp(0.6657477496724031);
    msg.setSource(41037U);
    msg.setSourceEntity(122U);
    msg.setDestination(38935U);
    msg.setDestinationEntity(42U);
    msg.value = 0.33828693229617335;

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
    msg.setTimeStamp(0.8744776004997876);
    msg.setSource(62558U);
    msg.setSourceEntity(23U);
    msg.setDestination(7906U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5515210195179843;

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
    IMC::FTPTransmissionRequest msg;
    msg.setTimeStamp(0.0010186877675277817);
    msg.setSource(45785U);
    msg.setSourceEntity(145U);
    msg.setDestination(37069U);
    msg.setDestinationEntity(91U);
    msg.id = 1259648184U;
    msg.type = 105U;
    msg.op = 40U;
    msg.url.assign("YTVYKMABSW");
    msg.username.assign("VLJCJWVEXMDUWOAZCVVBEDBAZIIUFEUTRYJCYXGCSJNCYWSHVUEGXLBGXFCYDBKAHQZE");
    msg.password.assign("FTNFIXKTPUNZUKRLSMKTPQTYLWVFCKVCISVDBYBZYZZNDYCGGIPBKSSMXUBOUSPWQFITJEFXLGIFGBJOIUOGQXMMWIPNDZPT");
    msg.data.assign("LZDCJWXJDLWPQYTKXIMHAHGJFJNUQVGNMBZTUALTFMHLVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionRequest msg;
    msg.setTimeStamp(0.739099023942292);
    msg.setSource(61818U);
    msg.setSourceEntity(17U);
    msg.setDestination(5304U);
    msg.setDestinationEntity(163U);
    msg.id = 1376551363U;
    msg.type = 164U;
    msg.op = 251U;
    msg.url.assign("IDXRIGMKZXQBUDTOUPKFRRYNDAUSKHNMPTUHHRSKFIMJWFOOOXCYGWVSPLZCIELVOXVXMMVGCUJQGDACZVEOHAHGZZMK");
    msg.username.assign("WRRUQODQKVXBZBEYPGUXMQRTTZBIVVRTUFMJECGSUMKYZCXIVQWYRHKHVAQPNTFKGONOHXSMGZEWAPNSBDADJKHTNSNLFMRVDZVLJBEWKOOOIZYHMWDAYCYATYIEXKNRUJCJFCNODGLLSUAQGKGGYHRCOZXBIHNCIVSTIDFEPAQEWKBBCSBIPSQDBPTJQDSLEKEXOFFUIYADVA");
    msg.password.assign("OCTWTIODJQNMGRSFDVUXYIZZDAPKQFVNLOHMZOUEMUSKPBCXQPDXPJCVYHSACBWDTUZEFNQRMODQDQUUQZCMFLLVUSKSRATNLHFGOHWVNEWLRZVLKIIATNCFZILVTGRJHQIXXOPBSYBKDPECWQUZKPNXAVRHBYMTTRPLMAENTIUOGJKHPHVZKSJWOEIOXBFGGGAGENBRGGVYJRZQJHJJDSBFMBFEYIIYBEYAXCKWWAPWCYJSDRMALXTN");
    msg.data.assign("OBVKXIUJEITSNHMDYPLQLPSDQTEIJOUQWYCBIYSALENQVZRVTQLMYSUXXKIJXVTDNACNPBRZISAHKRKOXRQTFZBSFCDUZJFQCYFVVLBCRCZMMBARZMXADPNQTYWCIPVQZTHEKCIGXPIOBOKRUDIUJGGVHAOGGVHHVHAAZJGMBUEXLEDPLZEKRFUGJSWZFBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionRequest msg;
    msg.setTimeStamp(0.8923846218267032);
    msg.setSource(17755U);
    msg.setSourceEntity(52U);
    msg.setDestination(62545U);
    msg.setDestinationEntity(203U);
    msg.id = 1390397443U;
    msg.type = 160U;
    msg.op = 143U;
    msg.url.assign("DBBNOZVLSTMSCKAKRJEGXCNKAVSVPSUWKFQZJHQTVLAXKPGDXOGPVPSQUXPEXQFDGOKXJVFDLXIGCYCSENUZFUWCSIZNH");
    msg.username.assign("PHDHIBJOAVACNVFWPFFHVJUMB");
    msg.password.assign("JLHPWVLDNTCGKJBRZUTAYQQPZIPPSKBMJQDDJNKEXFNDQAPQYBNPGNWWMERWRYYBFXWMNABMMPEJBCOLYTFQVKRPBUBVJTYZCSTVOEVXIGFVJBGCSISNFZSHWCKRMYKFCKCLXSTUNAOOUIIO");
    msg.data.assign("AHKGFVBCUIRIEWQSJHMLNZKDQMSRESNIPUCOOYSFDVGMPEJXNZZXRXJZDBOUTBANNTWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionStatus msg;
    msg.setTimeStamp(0.40998754725638376);
    msg.setSource(22761U);
    msg.setSourceEntity(249U);
    msg.setDestination(47721U);
    msg.setDestinationEntity(97U);
    msg.id = 2115095621U;
    msg.status = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionStatus msg;
    msg.setTimeStamp(0.7949970612314876);
    msg.setSource(665U);
    msg.setSourceEntity(100U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(101U);
    msg.id = 1056234927U;
    msg.status = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FTPTransmissionStatus msg;
    msg.setTimeStamp(0.30369002334408346);
    msg.setSource(12411U);
    msg.setSourceEntity(177U);
    msg.setDestination(26017U);
    msg.setDestinationEntity(140U);
    msg.id = 338489584U;
    msg.status = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FTPTransmissionStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5255833116395671);
    msg.setSource(48176U);
    msg.setSourceEntity(149U);
    msg.setDestination(7091U);
    msg.setDestinationEntity(57U);
    msg.value.assign("DSFOFKKKZGVBJETZDPRWGRQJDECEIAVUSUUWQHCLCGOLIGMLHSUFNNSVSXEYNGMPRZHJZDJHBRYWJVIJNTTCHQTBKWLBRTBTCFZOLNEELZBVUX");

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
    msg.setTimeStamp(0.34392206150619364);
    msg.setSource(15395U);
    msg.setSourceEntity(61U);
    msg.setDestination(20151U);
    msg.setDestinationEntity(50U);
    msg.value.assign("TFZLBRWMCBUAKVBSRMIOSDGHPWTPUCFQXFIMGRHFQYQURVKEFCIUSLEYWALBVODVNZVRHJINIUAXYXJFAPPARFJMCYOBVCPKKZSOEKBCTWAXUBCTARSKLTHSLCXAFPLWVNNZVBHGPOLWQGJCOEUIYPWKGTIIQPKHOHEWJYNQGXADSERZRY");

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
    msg.setTimeStamp(0.7410064581024166);
    msg.setSource(37265U);
    msg.setSourceEntity(33U);
    msg.setDestination(18509U);
    msg.setDestinationEntity(213U);
    msg.value.assign("FKWNSDKCTVRPEXYTBDPDWKTSCVMXULWSOEA");

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
