//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 4ab0411c6256574a5ac1785347d0a9f2                            *
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
    msg.setTimeStamp(0.20989357171763523);
    msg.setSource(33390U);
    msg.setSourceEntity(90U);
    msg.setDestination(26616U);
    msg.setDestinationEntity(28U);
    msg.state = 200U;
    msg.flags = 235U;
    msg.description.assign("HRUAQOMIWVAEMWTLASFHZGGQFQGWHQVCDJQXKUDPILTNNRVBZSJWUNYYOBZDCVWI");

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
    msg.setTimeStamp(0.19648144133088863);
    msg.setSource(16514U);
    msg.setSourceEntity(23U);
    msg.setDestination(20802U);
    msg.setDestinationEntity(195U);
    msg.state = 99U;
    msg.flags = 64U;
    msg.description.assign("XWRFNDVREQATNNHQZSOSQNIZXACSUYWYLNMPGWGZGBVHSWITMZTVDIKFUGPABIJDOPXGTBBPLQFWGJHOACRFRMBQBMBUFTKDJGXUIAWRYMKIMHALXNCODRENULFUOPVCPJKDYKXOOPHLJVYPAZWSTRADOZYTGFFYDGQEFUAMJCKHHEVLJIHFBEXSUTDVEVXLMYEZLZUJDKBQMBQN");

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
    msg.setTimeStamp(0.30799942950663906);
    msg.setSource(13966U);
    msg.setSourceEntity(169U);
    msg.setDestination(32169U);
    msg.setDestinationEntity(234U);
    msg.state = 192U;
    msg.flags = 32U;
    msg.description.assign("PJGTKMNEEYZDHWCMEAASCTVJGEHUELFGGHHIBBBDTIXVWOHRJMIYCZEFCWQFHIXRVPZEIMSJINXCSAJRYYUQXCAXBCQQTLLGWIBQQMFEAZZTZVNPHFOWTQRYKPGSAFSQVLWDWXZOSKJSLMXBXNLAJFFNGVELGWWKAUJFOAUPUPRNYTRKIMCQQ");

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
    msg.setTimeStamp(0.25050407266467656);
    msg.setSource(27050U);
    msg.setSourceEntity(230U);
    msg.setDestination(55574U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.5201785962075621);
    msg.setSource(37623U);
    msg.setSourceEntity(252U);
    msg.setDestination(42690U);
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
    msg.setTimeStamp(0.8309143740169593);
    msg.setSource(17743U);
    msg.setSourceEntity(181U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.6959403061294966);
    msg.setSource(21183U);
    msg.setSourceEntity(191U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(53U);
    msg.id = 42U;
    msg.label.assign("NUMIPPJCITDFXOQBWEUKSTFLMBRICGRCHXLJRHFPUJNNRGBQHLHVGSSSDKBAEYXUOAYHXCOEVKONOLKCJWXFTRIWBMIYEDY");
    msg.component.assign("ZSPBKUGJEOGUPHQTTGWAVATDFLSUMYYBJVRVOYWCMWLYNMJQGIACRMDSKHLMKWVFEFQLLHQOKRDFFHOEICGDUQUNRQCIGVKHLNIFKOCXZOBKGXOFAXOAJIJCZDVKDTYEBZWEJDXVYSOGTBKWXYYSUSN");
    msg.act_time = 20851U;
    msg.deact_time = 27936U;

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
    msg.setTimeStamp(0.34764977964116794);
    msg.setSource(35882U);
    msg.setSourceEntity(80U);
    msg.setDestination(58266U);
    msg.setDestinationEntity(219U);
    msg.id = 154U;
    msg.label.assign("DLCXPRCCVWJUQZFYYCEURSNXFCXCNVLQHJKDLCUZYDTIAEFZWUWSMJLTQXGCRTSSLJHAOTNTKHUPIBPWDZBHNTGIDMSKHSTEOMJIRVPQRHIRVKLKIVBLWSYFBPZMPMQZWNJYLUCFEYAZNVHBGQIFPEAGVQJ");
    msg.component.assign("LORMCTXLDDNDJKHOEEKEQCOPPYPFLPOJGFLHJIATEVAIMBAYBWBUBOASVCVUUVQHLWLHEYVZUMYSZKVASWEWXQJYMWUROIBVNZFRNOSGYAZURMTHTPXXICQEGQOTISTHZFXRDVEZCOJFXNRYPKNPIQQCZGSHDSFKVKYCHBMDKBBRURCGRWGXMSCKPJWFAJIGQMPUGMDTJLKIKIZHXUNXLLQZTSAMEFYCAIWFDJL");
    msg.act_time = 19159U;
    msg.deact_time = 54159U;

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
    msg.setTimeStamp(0.3908317285551228);
    msg.setSource(20998U);
    msg.setSourceEntity(192U);
    msg.setDestination(60789U);
    msg.setDestinationEntity(146U);
    msg.id = 232U;
    msg.label.assign("GWNECDFABNXIPTAQTOTXZPAFJTKZHDHXWWWXJPMFMFHLFNQGQPVPCDAOIUZAQZRSCK");
    msg.component.assign("ITDFPBNGAUXRTAJSMXDZIAWNJAZFSYCVOTXANWMHMYQMQGBEPNVSRECSBPJSVEZZXEQWVGTNPKMRIAORNZRYPZLZDDFKRTQGVSDUGMPOTGHYHLOLRCERXSDHYDBOAJMXBBFKBJWVKOOEU");
    msg.act_time = 26436U;
    msg.deact_time = 26542U;

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
    msg.setTimeStamp(0.3109591356267065);
    msg.setSource(54786U);
    msg.setSourceEntity(8U);
    msg.setDestination(8811U);
    msg.setDestinationEntity(113U);
    msg.id = 125U;

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
    msg.setTimeStamp(0.6587458612333016);
    msg.setSource(58791U);
    msg.setSourceEntity(32U);
    msg.setDestination(19678U);
    msg.setDestinationEntity(80U);
    msg.id = 85U;

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
    msg.setTimeStamp(0.154455203300781);
    msg.setSource(39235U);
    msg.setSourceEntity(116U);
    msg.setDestination(45932U);
    msg.setDestinationEntity(220U);
    msg.id = 175U;

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
    msg.setTimeStamp(0.5290864791489956);
    msg.setSource(64186U);
    msg.setSourceEntity(139U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(169U);
    msg.op = 252U;
    msg.list.assign("XZGBWXMOXXTFYGPEGZUKWXYVCNWJDTZHZOBSFNPVNVSZDILJLAQQVMODXTBYUNDSQZEHKYRFODVEMITRCFKWUPOYXHLILJ");

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
    msg.setTimeStamp(0.680432102090037);
    msg.setSource(14025U);
    msg.setSourceEntity(100U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(61U);
    msg.op = 228U;
    msg.list.assign("CEMYLAPIZGWBHFDHUCGBQZXXJPRTBBVCSUVTVUUHUEMCBOUSOPOFBFLNDXXDSYOIJSZVKHEQKXFZASNWWLJUTGTFGCJGRFABGRDTLESRSUYCRQUUJAT");

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
    msg.setTimeStamp(0.1302938145741802);
    msg.setSource(28627U);
    msg.setSourceEntity(186U);
    msg.setDestination(46868U);
    msg.setDestinationEntity(127U);
    msg.op = 243U;
    msg.list.assign("DYWSWCFDBNDGNLEETGHCZOKDAUORTBZTKMDRSVGBKUUPZHUYFKLVPSAVEORUZIFVDCMFURIXETAOBAQCXLQAWOLMXRSSJNIHTHHIFMOMQFNAPYXAIGCVEUVLFVQZXOFKAGMJBZLJERIVSTKBRPDDNIPQVGLGBOOMYWJBMJLRHKYQTPWQSW");

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
    msg.setTimeStamp(0.685523436712632);
    msg.setSource(4448U);
    msg.setSourceEntity(4U);
    msg.setDestination(55309U);
    msg.setDestinationEntity(34U);
    msg.value = 50U;

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
    msg.setTimeStamp(0.9929729534578378);
    msg.setSource(58745U);
    msg.setSourceEntity(224U);
    msg.setDestination(11682U);
    msg.setDestinationEntity(69U);
    msg.value = 31U;

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
    msg.setTimeStamp(0.0039838718245226445);
    msg.setSource(30706U);
    msg.setSourceEntity(38U);
    msg.setDestination(27689U);
    msg.setDestinationEntity(92U);
    msg.value = 35U;

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
    msg.setTimeStamp(0.3481328621836143);
    msg.setSource(65246U);
    msg.setSourceEntity(123U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(186U);
    msg.consumer.assign("QZGFTMADGTXKAQSABSTKEPZINOMTTETAKOGCGFUFEVVJGSASHOENOUVBJBAIITLHQWZFQ");
    msg.message_id = 58342U;

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
    msg.setTimeStamp(0.5986959400963119);
    msg.setSource(35313U);
    msg.setSourceEntity(77U);
    msg.setDestination(2089U);
    msg.setDestinationEntity(68U);
    msg.consumer.assign("CGGBTBIVURNIENGEQDHTGLQMXWOASPKEMLMHTPXHVCOQOCOFCIGNW");
    msg.message_id = 60738U;

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
    msg.setTimeStamp(0.7156981357096446);
    msg.setSource(40331U);
    msg.setSourceEntity(186U);
    msg.setDestination(48620U);
    msg.setDestinationEntity(251U);
    msg.consumer.assign("OSWRSHBLDZ");
    msg.message_id = 65165U;

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
    msg.setTimeStamp(0.1960181055842517);
    msg.setSource(38525U);
    msg.setSourceEntity(77U);
    msg.setDestination(5082U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.2547063193116734);
    msg.setSource(42532U);
    msg.setSourceEntity(58U);
    msg.setDestination(45944U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.4485692310432061);
    msg.setSource(47170U);
    msg.setSourceEntity(211U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.9046712808903962);
    msg.setSource(39185U);
    msg.setSourceEntity(240U);
    msg.setDestination(42446U);
    msg.setDestinationEntity(5U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.6642521637108999);
    msg.setSource(11424U);
    msg.setSourceEntity(30U);
    msg.setDestination(22929U);
    msg.setDestinationEntity(179U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.3068475492468641);
    msg.setSource(4269U);
    msg.setSourceEntity(21U);
    msg.setDestination(363U);
    msg.setDestinationEntity(218U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.42662457468517045);
    msg.setSource(30182U);
    msg.setSourceEntity(134U);
    msg.setDestination(37448U);
    msg.setDestinationEntity(61U);
    msg.total_steps = 18U;
    msg.step_number = 168U;
    msg.step.assign("VPVPEMKWJBDQEMQKOXBOBYVOTZOBSMINZKDVAWSQOWJICIEHAAAGPKTEMNINSIYGPYARXJFRWYEYSWCNIACMLAOUZIAQPNF");
    msg.flags = 254U;

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
    msg.setTimeStamp(0.5964295567150127);
    msg.setSource(42381U);
    msg.setSourceEntity(231U);
    msg.setDestination(30513U);
    msg.setDestinationEntity(216U);
    msg.total_steps = 251U;
    msg.step_number = 172U;
    msg.step.assign("LMPPPRJYEGNMNQDVQJZVLIQHIFWDYQXESYXZVZQABPIQERYDIHKWRGFOMKELUDRMCYTHHDLKERZXJLACGJCCQCUJIFBCXOYHSSXFRDOCSPKURSTZGESEKPAONEM");
    msg.flags = 80U;

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
    msg.setTimeStamp(0.525557575201247);
    msg.setSource(17960U);
    msg.setSourceEntity(179U);
    msg.setDestination(59251U);
    msg.setDestinationEntity(215U);
    msg.total_steps = 203U;
    msg.step_number = 175U;
    msg.step.assign("FXDFNFOZOQFHEIVHFUOIUWTMDYKZNYGQLJVYQQWENMAGFSKEALWMRGFTCISPJVOKTZMTJBFGWKUSHMYPNYISBKHDOJPANGMUNYWMIZVTJZCBTOESXBBCSOYTRZKRRBHLNKIJZAXQ");
    msg.flags = 243U;

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
    msg.setTimeStamp(0.3894794082538021);
    msg.setSource(29160U);
    msg.setSourceEntity(230U);
    msg.setDestination(64189U);
    msg.setDestinationEntity(244U);
    msg.state = 117U;
    msg.error.assign("DGMUPILPUWVZIOGZCOFEQTRHQTTARPFBUTMQAAWEBFIZCYSTUKZZUGAUSOLYSJSALJCFNIUVPEQMJXOXAVQFSLMHYDAMZQGHBTXRVUDXQBWJEELYWLWOLFOZXFNJMCBJHKWCOGX");

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
    msg.setTimeStamp(0.8002177498918231);
    msg.setSource(27380U);
    msg.setSourceEntity(180U);
    msg.setDestination(16368U);
    msg.setDestinationEntity(69U);
    msg.state = 11U;
    msg.error.assign("BUXIBYWWVQMOINTQWCLVINBRJJXSNWVWNKLAYQGPANPBAMKYEXPZQXXOOLHSGXTSFSGRICSIHAC");

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
    msg.setTimeStamp(0.3579966440855987);
    msg.setSource(10808U);
    msg.setSourceEntity(199U);
    msg.setDestination(18665U);
    msg.setDestinationEntity(236U);
    msg.state = 129U;
    msg.error.assign("DYIPZUBEYYWVJHRABPJTJQKIUNUDOYGGEEKLMEFWJKNLYKAAOOFVNIGJZWKBOFLFVJITLLZQFPTRLHJUAUCHJHINYWSRPYQZEMCYWMKIKNGXSFAGOEQVTARQZPVTLMIXRXDDJVUZLIPEOTSAGDQWYYNRWSHRDWZBFRKPVMTMCSBNLGPQXSFUBOIPCQJXFOETUSKSQHURZCXBOND");

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
    msg.setTimeStamp(0.2527779186525433);
    msg.setSource(5597U);
    msg.setSourceEntity(155U);
    msg.setDestination(15577U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.8286341147430805);
    msg.setSource(33954U);
    msg.setSourceEntity(44U);
    msg.setDestination(10755U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.32465673752003144);
    msg.setSource(4202U);
    msg.setSourceEntity(119U);
    msg.setDestination(37099U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.7698889881732921);
    msg.setSource(10252U);
    msg.setSourceEntity(87U);
    msg.setDestination(3543U);
    msg.setDestinationEntity(16U);
    msg.op = 107U;
    msg.speed_min = 0.7096647126917015;
    msg.speed_max = 0.4236172948004562;
    msg.long_accel = 0.8040257137664008;
    msg.alt_max_msl = 0.7240465711279145;
    msg.dive_fraction_max = 0.10379551333443726;
    msg.climb_fraction_max = 0.48102016762979816;
    msg.bank_max = 0.6481737570251439;
    msg.p_max = 0.5804869353684561;
    msg.pitch_min = 0.17004323787719366;
    msg.pitch_max = 0.09868506590486148;
    msg.q_max = 0.6455653174201977;
    msg.g_min = 0.45915218643199973;
    msg.g_max = 0.4798351541593945;
    msg.g_lat_max = 0.2894385546470164;
    msg.rpm_min = 0.2355693567716406;
    msg.rpm_max = 0.879521449308968;
    msg.rpm_rate_max = 0.06907339677878943;

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
    msg.setTimeStamp(0.6664336220159319);
    msg.setSource(62580U);
    msg.setSourceEntity(167U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(228U);
    msg.op = 247U;
    msg.speed_min = 0.6428184488690794;
    msg.speed_max = 0.7214617918451667;
    msg.long_accel = 0.48349328881768516;
    msg.alt_max_msl = 0.9119967762210042;
    msg.dive_fraction_max = 0.28379769625176765;
    msg.climb_fraction_max = 0.328979410293725;
    msg.bank_max = 0.12074642920669332;
    msg.p_max = 0.2762037045096979;
    msg.pitch_min = 0.8943543946934658;
    msg.pitch_max = 0.8567783073455438;
    msg.q_max = 0.38729641577090146;
    msg.g_min = 0.23856967833254106;
    msg.g_max = 0.4525694978436804;
    msg.g_lat_max = 0.8985864534052345;
    msg.rpm_min = 0.7864999306908828;
    msg.rpm_max = 0.26540849444826664;
    msg.rpm_rate_max = 0.17175681983843794;

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
    msg.setTimeStamp(0.47558279846207907);
    msg.setSource(61744U);
    msg.setSourceEntity(170U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(160U);
    msg.op = 197U;
    msg.speed_min = 0.6910094416590422;
    msg.speed_max = 0.5416096070571036;
    msg.long_accel = 0.19996840013039285;
    msg.alt_max_msl = 0.9737050110774744;
    msg.dive_fraction_max = 0.17167584257786894;
    msg.climb_fraction_max = 0.28093375566915335;
    msg.bank_max = 0.9931408716974286;
    msg.p_max = 0.6465720470650093;
    msg.pitch_min = 0.224571132478407;
    msg.pitch_max = 0.3479883502891028;
    msg.q_max = 0.7441560915717467;
    msg.g_min = 0.20415558487870322;
    msg.g_max = 0.32043589764614155;
    msg.g_lat_max = 0.821629364652374;
    msg.rpm_min = 0.018348832378206725;
    msg.rpm_max = 0.4437866977059014;
    msg.rpm_rate_max = 0.9863610430377745;

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
    msg.setTimeStamp(0.19301708961527075);
    msg.setSource(19985U);
    msg.setSourceEntity(55U);
    msg.setDestination(5288U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.10656600289803342);
    msg.setSource(49573U);
    msg.setSourceEntity(164U);
    msg.setDestination(41572U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.10004587076208493);
    msg.setSource(55668U);
    msg.setSourceEntity(165U);
    msg.setDestination(15589U);
    msg.setDestinationEntity(224U);
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 40U;
    tmp_msg_0.x = 0.410692380408474;
    tmp_msg_0.y = 0.36977489958994947;
    tmp_msg_0.z = 0.35931581532255086;
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
    msg.setTimeStamp(0.3364705195131409);
    msg.setSource(36228U);
    msg.setSourceEntity(197U);
    msg.setDestination(23624U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.829417430980689;
    msg.lon = 0.17192721566792057;
    msg.height = 0.8368604693311148;
    msg.x = 0.3449010238054998;
    msg.y = 0.3353122817520381;
    msg.z = 0.356949303935605;
    msg.phi = 0.05313087886287382;
    msg.theta = 0.18144708062927095;
    msg.psi = 0.18180799110470391;
    msg.u = 0.2923971813858838;
    msg.v = 0.3540247486788597;
    msg.w = 0.14512091001765226;
    msg.p = 0.47234890749951164;
    msg.q = 0.9021458811454618;
    msg.r = 0.24625563126831884;
    msg.svx = 0.9354106355350356;
    msg.svy = 0.7515557324068128;
    msg.svz = 0.3883054808182733;

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
    msg.setTimeStamp(0.09827349770082017);
    msg.setSource(51282U);
    msg.setSourceEntity(39U);
    msg.setDestination(39886U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.7860226309125871;
    msg.lon = 0.7735093534706258;
    msg.height = 0.60603158889146;
    msg.x = 0.7153711448944033;
    msg.y = 0.34554620779822465;
    msg.z = 0.30976510357932563;
    msg.phi = 0.2859318814656353;
    msg.theta = 0.6678782069650184;
    msg.psi = 0.602218394376883;
    msg.u = 0.26088158557142727;
    msg.v = 0.09247620904977061;
    msg.w = 0.2715590603965682;
    msg.p = 0.9003396792965658;
    msg.q = 0.7401648771481726;
    msg.r = 0.4312411296714638;
    msg.svx = 0.9552555673422687;
    msg.svy = 0.19387121211435066;
    msg.svz = 0.13208303991315973;

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
    msg.setTimeStamp(0.06126317498559253);
    msg.setSource(42804U);
    msg.setSourceEntity(6U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.04425349052800076;
    msg.lon = 0.35429808530954543;
    msg.height = 0.6174144081579656;
    msg.x = 0.67868695175966;
    msg.y = 0.20389851076752352;
    msg.z = 0.090773255696875;
    msg.phi = 0.8829408189316104;
    msg.theta = 0.40300583296302483;
    msg.psi = 0.8137387017350047;
    msg.u = 0.45728061614757876;
    msg.v = 0.7942022430258543;
    msg.w = 0.07055265731038729;
    msg.p = 0.15712554354125974;
    msg.q = 0.12233020250637894;
    msg.r = 0.6147994135079502;
    msg.svx = 0.6351950427738328;
    msg.svy = 0.38808787321100624;
    msg.svz = 0.8980907707802757;

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
    msg.setTimeStamp(0.8015761241468445);
    msg.setSource(19831U);
    msg.setSourceEntity(83U);
    msg.setDestination(10605U);
    msg.setDestinationEntity(240U);
    msg.op = 144U;
    msg.entities.assign("RQOVPDHULPZFVGNCZESXGZQENKYHGJPQZRTUXWRPWYRPLYALVNAUAITMWMZORVC");

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
    msg.setTimeStamp(0.44442989805743904);
    msg.setSource(20613U);
    msg.setSourceEntity(67U);
    msg.setDestination(57048U);
    msg.setDestinationEntity(189U);
    msg.op = 148U;
    msg.entities.assign("APUZVMEJXQUJWYSINQATBTQXKBCABJUGMXFRZJDFTFFAKGAWWOLDWVSDFTQYHNNNKGPPLJDMAVRQOWCOUAVBAGIZRIHOSVTZQXWXLRCYZDNXWENKBGLEREUBTDRGUSXWPSWLHNKTFBOJOOMGZMIYCMYXZYOBHQLSIUMIREEVBHFXLEHCZMHPCJINFTCSE");

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
    msg.setTimeStamp(0.12323383071811989);
    msg.setSource(41905U);
    msg.setSourceEntity(25U);
    msg.setDestination(16341U);
    msg.setDestinationEntity(108U);
    msg.op = 92U;
    msg.entities.assign("EQFEOEINTNSPLWRFFCYDVJRKHFUZSLBOMNJMQIHZOCMYARVSIJPXSHWKJXONNKGBYBSZPQRYZDGLDRUFQNEFGWSMIAKWKHIIQWVUTLHHQDFPTVN");

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
    msg.setTimeStamp(0.5744457034500865);
    msg.setSource(48034U);
    msg.setSourceEntity(2U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(83U);
    msg.type = 205U;
    msg.speed = 41030U;
    const char tmp_msg_0[] = {-97, -115, -42, -100, 26, -11, 121, -71, -127, 91, -121, -26, 32, -59, 32, -102, 105, -64, 27, 56, 78, 117, -59, 9, -56, 10, 14, -51, -4, 11, -27, 112, 27, -35, -128, 81, 92, 72, -53, 22, -106, -4, 70, -94, -39, 2, -59, 116, 24, 36, 77, -23, 13, -27, -81, 40, -5, 24};
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
    msg.setTimeStamp(0.4065470080613113);
    msg.setSource(57628U);
    msg.setSourceEntity(72U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(210U);
    msg.type = 206U;
    msg.speed = 1765U;
    const char tmp_msg_0[] = {115, 71, -77, 61, -122, 125, 73, -119, 31, 104, -25, 57, 120, 4, -7, 76, 26, 30, 121, -3, 11, 87, -77, 14, -55, -38, 109, -31, -118, 52, -61, -82, -122, 8, 65, -90, 16, -103, -128, 123, 108, 40, -41, 69, 112, -69, -117, -26, 57, -71, 86, -8, 31, 17, 112, -94, -41, -7, 101, -14, 107, 90, 59, -96, 118, -109, 29, 27, 56, 97, -115, -93, 22, -81, -7, -34, 23, 42, -86, 48, -92, -103, -80, 94, -99, -123, -120, 34, -94, -90, 84, -54, -62, 92, 77, 123, 29, 7, 107, 42, -80, 18, 94, 51, -12, -88, -101, 105, 46, -108, 87, -74, 116, 104, -62, 35, -71, -17, 17, 13, 68, 47, 16, -27, 50, 55, -112, 32, 58, -93, 66, 57, -24, -40, 75, -10, 14, 34, -30, -9, -97, -77, -70, -119, 91, -29, -72, 26, 48, -80, -51, -63, -102, 55, -44, 99, 59, -89, -97, 67, -82, -85, -89, 90, -14, -85, -78, 29, -68, 39, 48, -94, 102, -90, -72, -41, -17, -34, -77, 98, -51, 45, 7, 64, -90, 16, -42, -87, 60, -58, -14, -3, -51, 22, 11, 112, 39, 122, -95, -10, 116, 47, 118, -120, -28, -105, 58, -62, 60, 54, 36, -106, -114, 40, -71, 108, -70, -77, 5, -118, -128, -17, -40, 22, 27, -91, 39, -25, 48, 13, 76, -102, -5, 0, 53, 101, -22, -91, -20, -117, -42, 57, 57, -17, 52, 16, 117, 109, 62};
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
    msg.setTimeStamp(0.8805047746591982);
    msg.setSource(14047U);
    msg.setSourceEntity(185U);
    msg.setDestination(48310U);
    msg.setDestinationEntity(32U);
    msg.type = 68U;
    msg.speed = 11717U;
    const char tmp_msg_0[] = {-103, -75, 84, -119, 116, -120, -47, -81, -102, -81, -74, 17, 100, -97, -77, 54, 32, -22, 75, -123, 0, 68, -38, -50, 93, 80, -9, 117, -125, -108, -93, -98, -93, -74, 23, -93, -13, -3, -63, -50, -99, -124, 51, -107, 76, 53, 55, 68, 88, 53, -104, -81, 65, -21, -110, -73, 93, -125, 71, 53, -31, 48, -127, -63, -55, 77, -28, 99, 5, -113, -47, 78, -14, 38, 122, 92, 102, -83, 68, 15};
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
    msg.setTimeStamp(0.7923466433314956);
    msg.setSource(48496U);
    msg.setSourceEntity(220U);
    msg.setDestination(14349U);
    msg.setDestinationEntity(32U);
    msg.op = 83U;
    msg.tas2acc_pgain = 0.41903039149949417;
    msg.bank2p_pgain = 0.21666287253835326;

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
    msg.setTimeStamp(0.8871975174835626);
    msg.setSource(58553U);
    msg.setSourceEntity(217U);
    msg.setDestination(27198U);
    msg.setDestinationEntity(169U);
    msg.op = 221U;
    msg.tas2acc_pgain = 0.8735373039739628;
    msg.bank2p_pgain = 0.4998003049990294;

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
    msg.setTimeStamp(0.9208395676189876);
    msg.setSource(42353U);
    msg.setSourceEntity(45U);
    msg.setDestination(53737U);
    msg.setDestinationEntity(49U);
    msg.op = 116U;
    msg.tas2acc_pgain = 0.49251362057005155;
    msg.bank2p_pgain = 0.08669373771063726;

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
    msg.setTimeStamp(0.9177610173201467);
    msg.setSource(33786U);
    msg.setSourceEntity(207U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(99U);
    msg.available = 2394459687U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.6078211316760886);
    msg.setSource(57799U);
    msg.setSourceEntity(80U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(114U);
    msg.available = 3546856188U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.18991364356923368);
    msg.setSource(4348U);
    msg.setSourceEntity(206U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(134U);
    msg.available = 242244013U;
    msg.value = 221U;

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
    msg.setTimeStamp(0.44767024270175915);
    msg.setSource(50700U);
    msg.setSourceEntity(205U);
    msg.setDestination(6473U);
    msg.setDestinationEntity(166U);
    msg.op = 64U;
    msg.snapshot.assign("YWBONLYPBEMOUEQESKFZHNARZZZFKAMKNIEZKFDWCFCOVVVWHOKCGAIRMEGDFKWXCJTPFYIASYUZOEVKJNQTBMWPHAMGTWXLCZQDZQSPRHVQVUMCIE");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.21047632647480485;
    tmp_msg_0.lon = 0.9310881830117029;
    tmp_msg_0.z = 0.5138147898534883;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.8231964093257575;
    tmp_msg_0.speed_units = 34U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3557807437104852;
    tmp_tmp_msg_0_0.lon = 0.33466708416609936;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("WFCMEUGSRISHLVRMEREUQYEJXBFFYJHZCWDANDKLNEVFUCMZDULFYHLEZYCBMPSELCAOGPDVVQNQZOQJDXOKGHVRPEWVIAICZAFDCXHRWTGFNHTLQVBKKXTACTYVWOBLKKMOFPBVMBLNJPHWGRDRENWZBJZKSOTVNFQGJTSNNJAUXGWCOWISMBDQYXJYAIUOPCIHPKTXJADHJSMOKUYYIRSXIGTPQSAOWLKUBTRIMFXBAZRPHZDMYQPINQUTG");
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
    msg.setTimeStamp(0.8529151061540603);
    msg.setSource(32277U);
    msg.setSourceEntity(103U);
    msg.setDestination(61176U);
    msg.setDestinationEntity(173U);
    msg.op = 33U;
    msg.snapshot.assign("BJHOKCONDUDZMDXLANKKYZJMRBOLIBVGNLRTTMMEXADFZDQWZLDZXUGRQIVNQSZYFBYKSXPKWIRWGNUCQYKRXFBPTFYDPWRFIYEXPRRSDJYPQVZCJTMIKQHNMWVLYLAOFAOAVGOHAEKIGMLCECIVEDHGBGSHNAHUDZCNREJZQXIPOSUWNLV");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3699380055U;
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
    msg.setTimeStamp(0.1666409142985109);
    msg.setSource(23946U);
    msg.setSourceEntity(12U);
    msg.setDestination(32592U);
    msg.setDestinationEntity(126U);
    msg.op = 57U;
    msg.snapshot.assign("BCHAHOPSVBAFWNILTDEFLKTMAVJHFLJWBBZNMLDLVDDXJGPUYGCRDWIIXJHOLEJRAQGSRVUROBYSOWYXUKYFSPXLICTTBUMMCETTKPJC");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 130U;
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
    msg.setTimeStamp(0.02174253480390198);
    msg.setSource(47932U);
    msg.setSourceEntity(189U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(70U);
    msg.op = 150U;
    msg.name.assign("BMDQCXJCWXEOJZVMTIFMZUHMTJKLYASYKGSLIDHVEYGCUUGNUDBAOKTKJIOFDCNKLPLWEDJCEFZGIPSAVSVNBNKGNITVRWYXCYBIUBNNXZYULBFDPPXFEXHBPORGYPZFQDJZSQORWOIACKQFGELAGVVSIWRWRZVFMXQOLLBIPRLTQAVCYCRWOQOPTEJTFYXGTHUSKAAEAADEWQRZUPHMWZXNDIBPMWQSRHHFJTOGHKTNHNQEUXMRKHZUSCL");

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
    msg.setTimeStamp(0.5789914636209037);
    msg.setSource(57247U);
    msg.setSourceEntity(101U);
    msg.setDestination(51391U);
    msg.setDestinationEntity(65U);
    msg.op = 81U;
    msg.name.assign("KGIYJOVJTMFGEFMURJDQVDJGSRIJWXCOOTMXEBBVBRVFYFQDFLKUZCKEFHOQYHAWOWQYNCAVHCANNDJRNSGTAAXJMEPEZDEJLTHSIGODGYEIT");

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
    msg.setTimeStamp(0.9882927817595213);
    msg.setSource(60273U);
    msg.setSourceEntity(230U);
    msg.setDestination(14189U);
    msg.setDestinationEntity(14U);
    msg.op = 237U;
    msg.name.assign("RPBMRNGTOBCZRODBKUUSEGWSZGEIZBSEMQJAWKELHTZTFWMWSHAXIDKRE");

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
    msg.setTimeStamp(0.2655466607870921);
    msg.setSource(21967U);
    msg.setSourceEntity(200U);
    msg.setDestination(45971U);
    msg.setDestinationEntity(13U);
    msg.type = 249U;
    msg.htime = 0.32509995461036134;
    msg.context.assign("ICAZYQMNPRMQIEYZJORHPAGRRQAXYBZLEPRDNNDJNUGMKXDQFXUOJGPMBVFIVJFSBWUQTMHSPJWTATWPSBKWFRTIKVZJWYLHZJYWKXLDVHIMZHENUHQTVTXEVSGUEKZNEBENXGLOZDNQQ");
    msg.text.assign("JJUEIJWQSVOBBLTGVNBICGDTISUDTFQDCZYAMMYLUOTRZIPFESYKUVILYWQTJDLTISIZFHRQKMKKDHNWQNRLHEFJCGIHFAKXFJSBOBZZGEAOUOARFVACVZILJYUQRSVMCXZUKAELHDTCYNJARRYPZYPTCKWICWWXCAQDFHVUOMMPSXJSBVYGNNCNUXEOGDTYHSG");

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
    msg.setTimeStamp(0.3833260395047783);
    msg.setSource(35681U);
    msg.setSourceEntity(34U);
    msg.setDestination(25166U);
    msg.setDestinationEntity(212U);
    msg.type = 188U;
    msg.htime = 0.07946608887842221;
    msg.context.assign("KMSICSDNWJFLVXGRTKBBJWWWGKEEQHMCLZYILKUCOFYDTKEODVXKZYJXFJLPMHPQENVWYHSMHTZCUCORUDVYOLBLQBQTUOCIUIEOBJNPONAQDAKUFFXNZXROQTERNZPUXUHAVFYHSHPMGLKDJKJUGIQAFGVHIMWVSOCRGQZAHZAYVC");
    msg.text.assign("HOSCVXSSEAHEMXBVAZAPEPBKCPFSIDGGGWKYIQSYOAWTJKPNCTNVBUSFFTMELGKJVLBJSBDLVCDXHJVXKZKTHZGQEMSXDBNVKOINBFNLRCETRNJOPKZRUPLIDAMTKUFXIR");

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
    msg.setTimeStamp(0.6519764567660168);
    msg.setSource(54402U);
    msg.setSourceEntity(112U);
    msg.setDestination(33676U);
    msg.setDestinationEntity(209U);
    msg.type = 37U;
    msg.htime = 0.06785245372061866;
    msg.context.assign("JJWVTDUJBIFTCBRXTTAJYHGRVKHGVFZOSZTTAPOMXUYNEGDCGDKBXDAONPTIWQNWHJUQUESIVRFFEMQCOTBTGKBAWBQSLIMFKXLZZZMEJSXQCPBNUYOWFBUZHSINHAGBIEYKSMVQPWCRZEDDQRINJZIMLZKGKOPADCKVUHGOGEJRMXCXTEVYLVCHWNNYMEDYHAVKHLFLVWASDMXSPHOUIYKGQFEPMPJCAXWSLIQ");
    msg.text.assign("JFRRVNXUJSMRRAZSECURZVQVRTFLWSBESSKSZUNUDPIBPROLOYSZOFNNMTMHNELHDMYDAVWYNCJZVXQJGSQXDBKMJKHLPWUDTBXTQGNLCGIOFYFUBSGHQFHPZIGLAAVTYEYBKQVTOTHLXOEWVTANSH");

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
    msg.setTimeStamp(0.24235827616637717);
    msg.setSource(17135U);
    msg.setSourceEntity(12U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(231U);
    msg.command = 224U;
    msg.htime = 0.44146845786367095;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 111U;
    tmp_msg_0.htime = 0.5429100311684462;
    tmp_msg_0.context.assign("ZLZGPORIGHYUXFAHSCWJJUERVUGQKZNADBKFOUGOPCXIDOUFCAZNP");
    tmp_msg_0.text.assign("QOVOCTUFMYYZMASAJSASTMJYKTFLTRZWUWEXGDONZDHXBLWZHZXQIEEOVAEKHBHKCCRVDDMSJIJWYBQEYVWNJKNTSDNMOGPGKSTPSVQSELVKVQNWXCNBFFNLGVAVIZXYMEAEUCBLFRZBGUFEMPJLXQGDGFR");
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
    msg.setTimeStamp(0.9196241796385081);
    msg.setSource(23890U);
    msg.setSourceEntity(225U);
    msg.setDestination(49565U);
    msg.setDestinationEntity(22U);
    msg.command = 18U;
    msg.htime = 0.766008690311266;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 35U;
    tmp_msg_0.htime = 0.6331755423345131;
    tmp_msg_0.context.assign("VZMINPTJDWBGXHXFSKLROMLEFYCCOYSBZEASAKQBJOWFTRBVAWAEJVSPJBTHUXRNSYXOBBQUQXHLLCILRYZDDSTZPJRMHAMZMNJCGOUZUIGX");
    tmp_msg_0.text.assign("ECORYDQQSQCNFRHVVZIUQNUAJECTCPJOSJBMPGMXZIZKPORYFSTUAMLSRJZIBDXFIVXPKLHZHYSBHRGEVGUYBEWKTWTWNNWSGBNIUGKJYFOIYCHREORLD");
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
    msg.setTimeStamp(0.004856690247704409);
    msg.setSource(29970U);
    msg.setSourceEntity(86U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(238U);
    msg.command = 213U;
    msg.htime = 0.673836036466205;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 80U;
    tmp_msg_0.htime = 0.05700231167724412;
    tmp_msg_0.context.assign("XIGFYCYBHVMAJPMPJXQLJXVMMTQBSYWXSBSZQWLTFBONVYNKUXLPYHQGNFXZKDRLGXCVGGEQFBROXTLSWACUMAUOQIZSJUDXRPRMMFUWGIEITRBODQKEGEKKARNJNPGETZQBIZRJTYIDLRSEJMVNLQCVHVWOOLEAPFHSJSUKTNSGJHEFJMCKWDQKVOLOZPOEFRKRZYDNACGDFCHAHPKWTPTIDLVABUCICAHZI");
    tmp_msg_0.text.assign("RIELBXABFTOZYAVCKKVOIDWVAQMBSSMFBFFNPYDNBBVXHFEXNJJAYSNOIXNRDZESJQBTADNGWJHELSGYOUTKTCEUVKNOHUPLHCMTAJNCRHIGLDROXAYDGTYMYLFDZVCUJWKUJQZWEJKDHLWFGIPSIYTBRGKPCWVEKSZRHLYMXRMITHOCLWQGWGDWRZCAURRUJNFFASSVPEXZ");
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
    msg.setTimeStamp(0.8820894302584373);
    msg.setSource(48199U);
    msg.setSourceEntity(49U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(224U);
    msg.op = 24U;
    msg.file.assign("IABFZXJNUOVWIFYYWNKKBIBLCHZPXTACUHUSNKVVNFWLVNHGMEQXHMFIAOGPUNLQPCZMKARYCTCG");

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
    msg.setTimeStamp(0.8806619153690404);
    msg.setSource(29909U);
    msg.setSourceEntity(18U);
    msg.setDestination(43059U);
    msg.setDestinationEntity(48U);
    msg.op = 232U;
    msg.file.assign("FLDIYRJMCTGVQUFQWZBVYHGOUDZBYNEAAMISPIOSMMWOOBDKHWNTIRFOHVQYRWUJBOXASXJPJDLELGCNGISXXKWYNPTYKQTBIQADHIODUHRCXVVZLCZVMOQBXGCTBKWLINMVPUWKUMSZLMYBJREWPJTDXTGPVSEMCESNLEXDCJZPWFRIBAYFTSWXGHLKUYFTVDQJZHAISCGFXZYNSBZO");

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
    msg.setTimeStamp(0.6111206731865536);
    msg.setSource(42610U);
    msg.setSourceEntity(225U);
    msg.setDestination(50105U);
    msg.setDestinationEntity(177U);
    msg.op = 157U;
    msg.file.assign("CJCATBBFKWXZIEGZZPARKOQFIQRHMXNWMPDWVJPNEMFVHXBQFOFFMZQSJUAIXWTJLZVYPZCENKGDYQMSJQBGKDKEYWCHBXYGJVOUILWUXF");

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
    msg.setTimeStamp(0.3960696626492869);
    msg.setSource(46937U);
    msg.setSourceEntity(22U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(56U);
    msg.op = 235U;
    msg.clock = 0.5879609070169367;
    msg.tz = -2;

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
    msg.setTimeStamp(0.025296182392213873);
    msg.setSource(20445U);
    msg.setSourceEntity(195U);
    msg.setDestination(21733U);
    msg.setDestinationEntity(167U);
    msg.op = 173U;
    msg.clock = 0.7490843868793561;
    msg.tz = 91;

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
    msg.setTimeStamp(0.7628003668184052);
    msg.setSource(37218U);
    msg.setSourceEntity(75U);
    msg.setDestination(7054U);
    msg.setDestinationEntity(227U);
    msg.op = 37U;
    msg.clock = 0.21256978023994932;
    msg.tz = -41;

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
    msg.setTimeStamp(0.8050708062130106);
    msg.setSource(51019U);
    msg.setSourceEntity(173U);
    msg.setDestination(12372U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.9734210704339746);
    msg.setSource(59448U);
    msg.setSourceEntity(144U);
    msg.setDestination(7714U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.8474313596664855);
    msg.setSource(54511U);
    msg.setSourceEntity(129U);
    msg.setDestination(26758U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.45741835673195286);
    msg.setSource(9942U);
    msg.setSourceEntity(60U);
    msg.setDestination(62025U);
    msg.setDestinationEntity(142U);
    msg.sys_name.assign("BLYZSZVXGQPEBQKTBPRBODMZFYMKIUFFODPRJN");
    msg.sys_type = 48U;
    msg.owner = 61993U;
    msg.lat = 0.3177954347592834;
    msg.lon = 0.08179142209034962;
    msg.height = 0.9564365835154522;
    msg.services.assign("JVUTUEPGOGXSJQQSJEHLJDXBUGHCBBIBZUVSGZYYSCKCFJOIRRKSTZMEKWHJCTKXACADZYLDAUEQEWIFHGOBFYXQWMHPEMPQTAIMCIQGWXTNBPYXPIFNUGNSZWLEVLINTANDNFNDJALVWLLGKCAPMMQKDVBFSZDXCLPRKTPNWOVRRUZFFMQBLHDGSHMOYCIZE");

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
    msg.setTimeStamp(0.7492008228166397);
    msg.setSource(24715U);
    msg.setSourceEntity(74U);
    msg.setDestination(61313U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("DOJLMNBYPQKTVVBQFBCYGXHQBB");
    msg.sys_type = 207U;
    msg.owner = 9510U;
    msg.lat = 0.2583057668965455;
    msg.lon = 0.98968883244358;
    msg.height = 0.7423640857026219;
    msg.services.assign("DTTLOEXMPDZMZNLRAHFUVAHCETVEJNSDRZAVTIXRNBBMJYUGSGXQOFIDZWQCGCAUZYUPYPFQ");

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
    msg.setTimeStamp(0.19390474975494432);
    msg.setSource(9943U);
    msg.setSourceEntity(253U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(4U);
    msg.sys_name.assign("UJAKVGQXLMIHNHZAWVWPCNYAZPDG");
    msg.sys_type = 105U;
    msg.owner = 48404U;
    msg.lat = 0.821151846307746;
    msg.lon = 0.22554274396544438;
    msg.height = 0.8793653994858405;
    msg.services.assign("VNCTORVBHOEIXNTZGZJNZKXNXKVPJHRGCUUSKDZFCFBPJLGAWGQEDNZSGOCXQTMFWHEMRYDYPICIVTAOZQBWJALZXUPKTCIHPMYBKDLBVYPLGJFQAHSBMSFLSHJAHREKEJLLCEIMUMADEUPYNBAIRFUDWPIFGYZYNXUDLWTBAFTOHOSFHDVQQANVBKWZTQVOYMPEUOWSXUGPMRBDRJQYCXAFEKWSUTZRM");

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
    msg.setTimeStamp(0.4551171937695555);
    msg.setSource(39910U);
    msg.setSourceEntity(208U);
    msg.setDestination(65230U);
    msg.setDestinationEntity(178U);
    msg.service.assign("DFNPKKLDOWHAOHMYORYXJHYFCNHDYCMSAIOVJDZHOJFSEDVUELXFPIKXBZFQDTSBYAQPVBCYGGWTLROIQANMJMLWOTZCKPBZZOVXROIHHSTZXRJQQZUDJITSMCPECFNFIZKIHEJSMUVAPVXVFTZLCK");
    msg.service_type = 215U;

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
    msg.setTimeStamp(0.3955413445720556);
    msg.setSource(13462U);
    msg.setSourceEntity(42U);
    msg.setDestination(19467U);
    msg.setDestinationEntity(78U);
    msg.service.assign("HXZSMNNTSYDMQTIPOVYECWCEDXKNHBRUTUXOQKTEJEBZQXAJNAADFWQFUKDQQORHEDFZWJLSJVPLXRJKVFFQGSIYRLFLZBSURPVGUVTWIFMGGLPCRJGUSJDNMDKHMOINEROTJMAYLYTBDGVWOL");
    msg.service_type = 215U;

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
    msg.setTimeStamp(0.813385391187306);
    msg.setSource(28052U);
    msg.setSourceEntity(133U);
    msg.setDestination(27959U);
    msg.setDestinationEntity(225U);
    msg.service.assign("GLYOUOPFHJXHBNJFEZWERYVYFTSUDKESVFBRQBWDWZIDXPPFHCXGCRKDEJRRYPLQHLGTRVMXGGVULGMBQPQNHOEYRIFWDPISBIIMCSGCX");
    msg.service_type = 192U;

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
    msg.setTimeStamp(0.4725175450252336);
    msg.setSource(52037U);
    msg.setSourceEntity(156U);
    msg.setDestination(5476U);
    msg.setDestinationEntity(150U);
    msg.value = 0.6796180758719013;

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
    msg.setTimeStamp(0.00960028457131712);
    msg.setSource(48275U);
    msg.setSourceEntity(248U);
    msg.setDestination(50863U);
    msg.setDestinationEntity(1U);
    msg.value = 0.9186528222673719;

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
    msg.setTimeStamp(0.49754074921478053);
    msg.setSource(54775U);
    msg.setSourceEntity(23U);
    msg.setDestination(19442U);
    msg.setDestinationEntity(4U);
    msg.value = 0.3653971267567785;

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
    msg.setTimeStamp(0.26848337108026266);
    msg.setSource(44584U);
    msg.setSourceEntity(240U);
    msg.setDestination(10517U);
    msg.setDestinationEntity(246U);
    msg.value = 0.2677082206255761;

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
    msg.setTimeStamp(0.5366918798757664);
    msg.setSource(52477U);
    msg.setSourceEntity(92U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6177848634157589;

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
    msg.setTimeStamp(0.6037827918894932);
    msg.setSource(21944U);
    msg.setSourceEntity(13U);
    msg.setDestination(42942U);
    msg.setDestinationEntity(108U);
    msg.value = 0.43110601371095236;

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
    msg.setTimeStamp(0.5316741971760781);
    msg.setSource(56950U);
    msg.setSourceEntity(73U);
    msg.setDestination(24035U);
    msg.setDestinationEntity(198U);
    msg.value = 0.25619959072526777;

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
    msg.setTimeStamp(0.22557845062047877);
    msg.setSource(42970U);
    msg.setSourceEntity(157U);
    msg.setDestination(37888U);
    msg.setDestinationEntity(151U);
    msg.value = 0.15457315969858343;

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
    msg.setTimeStamp(0.004753780697925425);
    msg.setSource(24953U);
    msg.setSourceEntity(182U);
    msg.setDestination(30055U);
    msg.setDestinationEntity(244U);
    msg.value = 0.8367523131380766;

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
    msg.setTimeStamp(0.9956961740497655);
    msg.setSource(55641U);
    msg.setSourceEntity(219U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(179U);
    msg.number.assign("OHBCSKFCUILVMTUTGSVBIJXOJEQAVJDFXDGRMTHWUXPPUVDSXEHRJITHQLZGTTCKVAHBESQGEORJYORLYJNJGNHZUYOASPIJXBQVAZZPFKFHYCIXJKKWQBTDLOPSSZOEWCOLFFESWCPQIGWRIEOSAQUNPMLKMXYCZYBWVWENQENKNRYMNPRLDTBZYXNACYCGTMVWWVUERNGFFHFLMDBNABAIATPKVJGXDQFKHUYGRBMDODXUWZCLIL");
    msg.timeout = 57057U;
    msg.contents.assign("RULEDMDTUTOAMABMAVBWFARHHGMUNSTZZCKIDDVDGRYODJQVJLEQGULNCZGQLLYUPOAGFIAQAWVPIEWWMQIXBNZHIBQNIJHSSRVCLEPMEGLFLXFKJTSCDAPOBYMXFCGSQCBHIMTQTSYSMVCJCRPTHWRKWKEEGBFUZ");

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
    msg.setTimeStamp(0.9330606422076887);
    msg.setSource(12713U);
    msg.setSourceEntity(33U);
    msg.setDestination(11061U);
    msg.setDestinationEntity(179U);
    msg.number.assign("IOYETZBHHMMKROEUHKJEQTT");
    msg.timeout = 10845U;
    msg.contents.assign("EDTODDJXSORIDOZPUSSOKTPSDSZREUNCHNRMNCGLFFRXZWUHVLYKRFMXHHCJAAPCQNWPECBEOYPVAGCEQQNDUYWVQDNAOJAVAMYXZYYJXJXBYYOQFSUKHZBMAWSGOHLQCNGGACKKWEEBNVMBHQLDRWKIWIKZLJRTOH");

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
    msg.setTimeStamp(0.16205249187372872);
    msg.setSource(38046U);
    msg.setSourceEntity(108U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(87U);
    msg.number.assign("GUTMYRIRFBUVDKKRIHNKMLGBJZWCFFPJOVQHZYNOKNWCPJIZSTDFZADVLRBNLIAZZEGCJKOENAFYDSDRZSBYMSMUHGDTABVVCZXXKOXACFGDMQTVMKLOIQZJCSHGRXLUUNQKRLWOEJBWSTQVRPPFWWESVBUNEACPSMIYUAJTHHEXKPLBOKAHBXIAHWTNYQJUPDOGQNYBEPVWJPFJFLCXRMITZYUHAEH");
    msg.timeout = 25116U;
    msg.contents.assign("JGAOQVGXJNMJONGVAHHECKTBNHOTMQSNFGMPBPYWWURLDAYDIVOPBOCDVMWEIZXERSTGUJQKPLKTYWZVAUULBPLJEALNLBNSEYTFXEACEHCEMIYAJLODJRFMRDMYFFUSPJSSIQTVGHTZVXZSQQRPIFTFHGOTQPGEPZFBUXMIDMVDKCICNVJRZHLEWIUFRDNM");

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
    msg.setTimeStamp(0.4584561181009186);
    msg.setSource(5561U);
    msg.setSourceEntity(30U);
    msg.setDestination(10529U);
    msg.setDestinationEntity(36U);
    msg.seq = 2604916917U;
    msg.destination.assign("LCVIRQLEINBOCSGCYLZWRZTZHTWTKBRIPQAFYVTFLSLSGYBJBOEMHKZCFLJUGKTJFRYVAFBMCBTPMXSEQPZVEJWDOVUPFZBYYXCRKMYUQVSDVNIUONHDTHUFWGRGJVMKQGBAYDWAPAJUKNDNDLACAKHMQFMXBCZJTVPMQGIYASTOLLXUDNPPPGSIXHYWOXZFTRREAXJQNHCOIFRDHMKDSAXROQKOGWPZIUNILGWNSXO");
    msg.timeout = 64325U;
    const char tmp_msg_0[] = {56, -76, -127, -60, 102, 99, 77, -119, -16, -15};
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
    msg.setTimeStamp(0.5059511406552325);
    msg.setSource(60608U);
    msg.setSourceEntity(211U);
    msg.setDestination(13009U);
    msg.setDestinationEntity(148U);
    msg.seq = 1205336457U;
    msg.destination.assign("RDJBGQOGONZXFKMQAOCZDQEXFUGPFALSSHFDRGJISLOWNULRWYSAWADKCLHUUPFALGTUNHGRXXVPJNFTGWHMODSSJKKTPPKYTAMXHVDKJCLMJNBTVKPBITEZ");
    msg.timeout = 38331U;
    const char tmp_msg_0[] = {-88, -94, -6, 11, 123, -62, -106, 51, -63, 95, -7, 72, 121, 34, -33, 28, 54, 67};
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
    msg.setTimeStamp(0.5227746358859651);
    msg.setSource(13489U);
    msg.setSourceEntity(222U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(147U);
    msg.seq = 3866205761U;
    msg.destination.assign("OCFVMIHADPDIMUIKUUVFTKZBRXYZSBBNKKDWQELDGLHNACPBNOSSHXSTXPFGIAFJHZSVEJFLTQRYKEVLOOHQZHTUJWHQSOEKMYOCMSXGLJCMTGFUGAURXOXZAZBDPNERKIWPVQWPVQCUTADMXIWKBOKLXFXPVNKRVQRYRIJYGGDCZXNBGWQHRPDTJCEYMTAWSZVUBNUMOLBLCJLERAVLFQJSZWEGTTRNII");
    msg.timeout = 56592U;
    const char tmp_msg_0[] = {-100, 62, -15, -9, -36, 68, -29, -72, 44, 91, -108, 73, -54, 113, -70, -95, -17, -38, -79, 66, -11, -73, 62, -128, -87, -56, 36, 124, -108, 86, -54, -75, 126, -30, -120, -62, 56, 119, -119, -53, -64, -101, 94, 63, 117, 3, -99, -59, -116, 38, -73, -54, 28, -126, -67, 68, -106, 26, 71, -1, 99, 15, -55, -128, 16, -106, 4, 56, -24, 40, 16, -70, 82, -99, 95, -125, 90, -120, 11, 52, -61, 121, 54, 96, -110, 71, -5, -46, 77, -66, -97, -84, 41, -30, -87, 48, 90, 121, -76, 98, -92, 125, -23, -87, 113, 124, 33, -103, 5, 88, 19, -2, 106, -127, -85, -15, 24, 85, -70, -7, 33, 21, 57, -116, -106, 31, -42, 64, -89, 12, -119, 61, 21, -86, -128, 10, 14, 117, -65, -50, 44, -58, 72, 109, -33, -55, 32, 52, -67, 7, 55, 53, 48, -97, 81, 2, -122, -92, -78, 65, 60, 101, -91, -54, -78, 125, -19, 71, 117, 66, 69, -92, 94, -35, 113, -38, 27, 73, -117, 120, 100, -31, -74, -106, 15};
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
    msg.setTimeStamp(0.21208837833709293);
    msg.setSource(55977U);
    msg.setSourceEntity(16U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(251U);
    msg.source.assign("MZOYAIKQCQHYFWJWNEXHFZOWHL");
    const char tmp_msg_0[] = {-57, -73, -19, -10, -112, -32, 19, 7, 27, -52, 61, -68, -28, -33, -107, -101, -91, 99, -71, -12, 55, -117, -12, -36, -57, 0, -6, 90, -17, -114, -93, -95, 7, 80, -8, -126, -101, -99, 88, 39, -67, 38};
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
    msg.setTimeStamp(0.929427173009891);
    msg.setSource(689U);
    msg.setSourceEntity(226U);
    msg.setDestination(38821U);
    msg.setDestinationEntity(56U);
    msg.source.assign("LUMQUIRZIVJJIEKOUQBLQYEHIGLGILHKKHWINOZBWRYNKXPKPMYNMESUKABIUPLSTKTHESTDU");
    const char tmp_msg_0[] = {-78, 54, 3, 53, 76, 101, 5, -111, 98, -56, -99, 7, 33, -126, 107, 40, 120, 49, -68, 28, -125, 52, -2, -115, -124, -16, 33, -14, 111, -68, -116, -40, -100, 40, 55, -17, 52, 60, -66, 124, 32, 0, -123, -119, 68, -3, 114, 76, 119, 94, -30, 31, -115, 113, -32, -5, 12, 96, -13, 107, 29, -77, 47, 46, 99, -103, -34, -64, -43, -47, -115, -17, -123, 1, -88, -67, 79, -56, 13, -24, 62, 48, 43, 99, 96, 61, -59, -77, -19, -69, -54, -43, -68, -44, -98, 22, 105, 109, -3, -65, -87, 41, -59, 65, -26, 32, -115, 104, 82, -65, -44, -68, 86, 41, 47, -38, -124, 19, 116, -91, -7, 58, -114, 25, 33, -117, -23, 107, -123, -41, 117, -99, 22, 74, -85, 66, -122, 44, 70, 16, 6, 54, 118, -39, 15, -9, 95, -105, 17, -6, 11, -60, 13, -72, -79, 119, 26, -52, 73};
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
    msg.setTimeStamp(0.9142546994845434);
    msg.setSource(39302U);
    msg.setSourceEntity(195U);
    msg.setDestination(16611U);
    msg.setDestinationEntity(251U);
    msg.source.assign("QNAITZGLVAWDHMOVWAAWQWZLYGZRCHFEONKVTVGSNYDVYYXCADGIQJHCA");
    const char tmp_msg_0[] = {-37, 12, -22, 71, 103, 17, -85, 68, 26, 89, 17, -90, -63, -69, -53, 38, -48, 46, -123, -27, 6, 42, 16, -3, -64, -21, -40, 59, 18, -96, -35, 46, 50, 93, 15, -10, -47, -120, 114, -109, 91, -74, 76, 46, 68, 71, 87, 40, 23, 112, 107, -66, -96, -98, -51, -33, 126, 81, 56, 107, -3, 73, -80, -23, 76, -55, 42, -11, -18, -109, 107, -84, 60, 51, -69, 116, -88, -43, -4, -110, -56, -3, 96, -39, 125, -47, -78, 58, 64, 94, 87, 22, 86, 89, 11, 117, -95, -51, 119, 118, 82, 41, -33, 82, -122, 44, 29, 73, 90, 63, 78, -4, -29, -80, 107, 36, 24, -14, 111, 84, 91, -58, 57, 126, -36, 37, 66, -128, 68, 97, -25, 103, 100, 62, 42, -53, 30, -122, -62, -91, 94, -17, -38, 76, 93, 125, -109, -22, -44, -97, -58, 13, 81, 81, -57, -81, -104, -30, 5, 69, 93, 24, 106, 111, 88, 11, 16, 20, 122, 42, -113, 14, 10, -4, 41, -110, 69, 18};
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
    msg.setTimeStamp(0.15348037058819453);
    msg.setSource(28480U);
    msg.setSourceEntity(92U);
    msg.setDestination(23957U);
    msg.setDestinationEntity(112U);
    msg.seq = 3261700505U;
    msg.state = 201U;
    msg.error.assign("JULYGMZRUIDHOEWICJAMCNIPSKTRNDUEZXYHAREKOSMQPRBIBYLIWPTIXLTJQRSLAVKEAEBNAVZQVDGGJLDPKWMWGKGOVFQYUBZIHYDMQOWXVUJICCNVHXOJKFHDSFQFCNEUEGZVZFCQMGKXFWSZEEKPNMSRSWUQLNUBNYXWGZGAWAZFOLAYOBHXVUHTYWCYTCBRHBLBSSOKCDP");

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
    msg.setTimeStamp(0.5094861870939354);
    msg.setSource(5926U);
    msg.setSourceEntity(210U);
    msg.setDestination(58707U);
    msg.setDestinationEntity(51U);
    msg.seq = 1518153641U;
    msg.state = 246U;
    msg.error.assign("FJZNKSVGQRWLMVCSPJMOELYRUHTVFSMHKKAFRZHNQKOTAEYHECWXXPFFPHHATTBFXFMWGGJKVYLJSDBUZIZQWNRIVLRPSQGDHRYYIOERCQCIUTRYYIRYCO");

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
    msg.setTimeStamp(0.1619222167469786);
    msg.setSource(249U);
    msg.setSourceEntity(224U);
    msg.setDestination(10240U);
    msg.setDestinationEntity(45U);
    msg.seq = 123340338U;
    msg.state = 208U;
    msg.error.assign("UEQOGFNFPWHOUHMQEZCQVGROMLINNNGNHZJBQMEXPWFLWBLWXLKVDYFSTCADJACTGGBVYIJHETCISDBOYBJMNWTPDZYBLUFHGIENHBTUMVCNCDLBKZCAJXQEZXPTTPORWQGAJFWRZRKGXXRROIPRULAOIKFKJYTJTMVEHGWCHDKHZSPVDPAMJENSAEIKSUFAEZSLRLIIUKPVBKYXAQPCUXDLUHDNGVZOVRXDCMXFTQKOQBYJVMA");

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
    msg.setTimeStamp(0.7000071408466114);
    msg.setSource(18892U);
    msg.setSourceEntity(216U);
    msg.setDestination(39636U);
    msg.setDestinationEntity(12U);
    msg.origin.assign("KSTCVVQSGCKEXVUBRDROSEWUKQCVELFIUFOHVJWFAXGBBQKOCJWVVUJWJNWCMSZVEHDSHRYSYKPKMTMZGYBOBOTUZZUTFSYLRCVAIJMJCAZROBJYKYMGDUZNWOXWGABPXTRKQMPOIINSINDTUQGDHZNAZMESQLHPHHOXGXRPBOXPDLHEXPSCQDCTPDQPLJITNGHHALEWAYRMQNAKRUIFGDNVYXPLURKLZFIQEXIAEJNLFCTMNTL");
    msg.text.assign("CQVTUWBIKSHSOQZEMJTUXMCHDUFNARYXYTRQZXELVHJJBOFVTTIFDEJFGWSEMKKYUXLYFFZLLKYRHVQRGYRGPCRATQTTKSZGMPTUXMKXI");

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
    msg.setTimeStamp(0.14621237522051822);
    msg.setSource(34288U);
    msg.setSourceEntity(97U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(30U);
    msg.origin.assign("WBLHMVUPHCMQGDZDXGSYJSIRAVBIPMXGYTWGPUFJIZRUIZAISTFBUBNMLXENGPVBQRMV");
    msg.text.assign("LWBDLZDERDFGPANWUMDJBDMCQEIGCDJWLMPWFKYOOSKKTKEGYTIUGYXICAUTMSEHNSIZLVZGARRSLNEATCRJSIONYFBKGBDLFLNOMHKWSDQOPFSRYXXLRLUHPUSDVTQOHJPMCSADPARWHNVOKEZHIQYVUYKIGBTVFFZOACIJJCRENKMQVHAVOPXGZBQCEBZETEUBRZM");

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
    msg.setTimeStamp(0.24110998133659545);
    msg.setSource(35274U);
    msg.setSourceEntity(148U);
    msg.setDestination(29973U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("OWMWAQLPWUDMPTUYBLXLMJBTNDCXWWJUIFLQSIBWPOYEQTRJFFIAWUUMKVKRLJAHWGQDPZFSFGTOIGRGOJZSMWANDEFYEZGAJIRLKCCBHURVTUJVXQKZSBXOHCESWYHSTCSHPIYUYAZBKFNCXNVEZCZSQLBYVXUXPMZKXNQAMNOVIHKBCBKQIOXEZURMNNTAEBKNRITGMCLODADAJQJVRVEYQVFPDFMGNIZGEYGDTJHTEDOHSP");
    msg.text.assign("NJRLOUGELPDDIUUIACWDDAWCEUZAPLMZOGXCQKMXWWZEIVHBBNPLRWWMIJSETBSHMCEBCJHTVFINBTHVURVNYAXIWBQUCCSNRGNUYEPPGXDZQIOHJHZIBXJHNFZFLKUYRJYMNHFKZMBSFTVEOPMVWDOZDZTXOAGMOJVGLVKAQQGSGGQFAEHRFBCTFXKALYDNVQAILYWOLBOKSKXYTCSRMDUYDEX");

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
    msg.setTimeStamp(0.8825918234753506);
    msg.setSource(64734U);
    msg.setSourceEntity(50U);
    msg.setDestination(9152U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("OGGGDEIKEQBFPTNUGDISYWSFUCXBMWSQLXTTACMPEJHRLHTAXLVHBQGMHNNAKFXZNOIIWDECDUCPJWPQYHFVQKTWMVWVDJEXJSPYVGFKZTGFNBJPRDRXIDZBSLLIQESCHZOEHHEZAUATVDEMRUOIKAMNYVORZAIYKURRCYJXKZVDTQSXCWKKEXTMGZXBAHBMJASLYOBUNJGPNLMYYLLWVJQWHZCDAPPQUU");
    msg.htime = 0.4288220203250498;
    msg.lat = 0.30332415626464737;
    msg.lon = 0.2805015051033277;
    const char tmp_msg_0[] = {75, 19, -1, 95, 51, -85, -88, -42, -11, -10, -101, 2, -102, 115, -111, -88, -79, -17, 16, -37, 55, 53, 58, 112, -98, -55, -9, -28, -103, -3, 59, -9, 103, 29, 89, -12, 100, -5, 125, -23, 91, 93, 20, -125, 25, -68, -73, 119, -9, 103, 51, 63, 107, -75, 110, -59, -112, 75, -41, 112, 124, 75, 5, 31, -46, -118, 14, -108, 90, -39, -109, 3, 71, -81, 20, -57, 53, 16, -120, 109, 83, 112, -24, 110, 65, -82, -71, -78, 18, 21, 56, 72, 39, -34, 89, -5, -13, 51, 55, 125, 10, 11, 79, -25, -105, 31, 102, -48, 119, -15, -48, -92, 61, 27, 92, 37, -79, -6, 106, 95, -18, 87, 2, 64, -12, 66, -1, -104, 73, 111, -115, -112, 26, -68, 2, -125, -73, 5, -107, 61, -37, 93, -45, -16, 25, -52, -14, -40, -30, 35, 58, -65, -65, -114, -79, 38, 51, 78, 28, -84, -11, 54, -73, 72, -96, 32, -122, -6, -27, 45, -90, 48, 125, -68, 93, -10, -56, 67, -97, 38, 59, 59, 23, 44, 98, 41, 27, -117, -97, 77, -8, -27, -50, -23, -1, -4, -60, -14, -43, -74, 93, -17, 115, 5, 72, -127, -30, -29, -26, 25, 15, -3, -20, 114, -42, -8, -24, 104, 111, 81, -12, 41, 72, -65, 67, 84, 16, -118, -127, -121, 106, -62, 123, 65, -127, -114};
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
    msg.setTimeStamp(0.08873503790616721);
    msg.setSource(22103U);
    msg.setSourceEntity(31U);
    msg.setDestination(38837U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("LNMLZEHITHIARWHKKKZJQGLUMMMCYHEMIVRPUQHQCULSMSYUWOFSODPVWZDBPINVPWIDFKMFDOLIPVDTPJYCTGNFBSPXPYFJAQVJZEWBFGVNFTIZFJXYLUXBMCDEZMUSUUERGARBVATOAWOARENGSSAXREAQXTLUOYCJXXQSBL");
    msg.htime = 0.8704261372262168;
    msg.lat = 0.41689060244477494;
    msg.lon = 0.05089579521944665;
    const char tmp_msg_0[] = {-23, 41, -55, -39, 120, 90, 85, 24, -62, 72, 41, 51, -7, -21, -19, 44, -55, 78, -128, 9, 59, -47, 16, 10, 126, -115, -86, -39, -37, -26, 124, 9, -67, 98, -40, 22, 74, 71, 113, 105, -54, -86, 104, -17, 19, -102, -87, -37, -84, -99, -83, 2, 38, 63, -88, 1, 120, -78, -68, 42, -112, 7, 30, 48, -65, -97, 125, -121, 108, -16, -103, -63, -30, -64, 57, 58, -1, -75, 83, -100, -42, -61, 35, -85, 102, 99, -21, 123, -88, 15, -57, -103, 117, -124, 58, -78, 80, 18, 52, 2, -56, 31, -68, -12, -83, -21, 87, 35, 29, -19, 54, -123, -47, 73, 47, -89, 72, 16, -90, 124, 26, -117, 109, 55, -92, 64, -44, 75, 69, -96, -108, -71, -2, -124, -86, 95, 18, -48, -106, -121, -102, 58, -20, -102, -19, -21, 66, -34, 1, 40, 45, -20, -36, 74, 58, 9, 34, -84, -45, -98, -120, 10, -40, 115, -58, -46, 39, 53, -4, -48, -26, 31, 86, -7, 14, -84, 20, 23, -32, 69, 77, 46, -99, -92, 30, -122, -33, 2, -58, 122, 71, -47, -121, -90, 35, -63, 58, 32, -61, 78, -71, 37, -38, -119, -108, -70, -101, -18, -28, 56, 21, -20, 15, -42, 55, -101, -87, 47, 101, 103, -10, -50, -119, -121, -85, -48, 103, -55, 23, -91, 36, -23, -66, -73, -14, -88, 74, 7, 15, -119, 33, -93, 106, 103, -127, 123};
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
    msg.setTimeStamp(0.2637243872423126);
    msg.setSource(15309U);
    msg.setSourceEntity(44U);
    msg.setDestination(65039U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("NVUANSYWHRDKFSOZGIUEKXWUPTDOYPRDJECOTFINTBWJ");
    msg.htime = 0.17815457474847396;
    msg.lat = 0.23069508448663067;
    msg.lon = 0.12942082052371928;
    const char tmp_msg_0[] = {-123, -41, 9, -70, 98, -79, 95, 83, -117, 122, -98, 88, 38, 1, 116, 94, -51, -26, 79, -103, 55, -72, 11, 61, 15, 98, -90, -116, 26, -61, 43, 103, -80, -25, -29, -124, -109, 57, -88, -30, -116, -47, -33, -73, -77, -51, -102, 21, 5, 5, -91, -47, 57, 86, -34, -112, 41, -59, 3, -68, 93, -113, 21, -104, 64, -3, 104, 6, 99, -67, -91, -100, -117, -39, 35, 63, 67, 104, 12, 37, 66, -43, 45, 57, -70, -113, -104, -23, 107, -14, 102, -102, 55, 95, 106, -1, 34, -55, 2, 98, -67, 87, -110, 122, 38, 101, -21, -38, -47, -91, 121, -58, -52, 115, -112, -86, -92, -125, 42, -113, 64, -61, 80, -89, 117, 92, 72, -3, -13, 3, -12, 5, 44};
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
    msg.setTimeStamp(0.15101540746446607);
    msg.setSource(55069U);
    msg.setSourceEntity(24U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(21U);
    msg.req_id = 31437U;
    msg.ttl = 56035U;
    msg.destination.assign("WKXWUGLYWSGVZJHKWTCILDQEDAJFIJGBZWNTPISUNDBNEEWLXEMNWOOWOFMUFJETFIRGLZTRZASXNZUDUZBCBGMHHMQFKTAS");
    const char tmp_msg_0[] = {-108, -58, 95, 23, 73, 57, 69, -31, 30, 60, -104, 122, 91, 95, 83, 16, -107, -28, 27, 77, -46, -38, -58, -68, 119, -15, -37, 61, 82};
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
    msg.setTimeStamp(0.5226949901224733);
    msg.setSource(17945U);
    msg.setSourceEntity(219U);
    msg.setDestination(14971U);
    msg.setDestinationEntity(142U);
    msg.req_id = 57852U;
    msg.ttl = 11808U;
    msg.destination.assign("HAQAIZYRNGTTDSOBGQNCCEPBCLOMNHPUTPEOCCZXJFMQAKPLKVNWNYJFHYPNGWFFFSWEXISMMRVZAKREBMCNEVRMZEIZVRVEVBXYVDCXKERFMDJIWIRPYNURAJTOKXAOJJGDJTFHXSITLNVOBCOVBZSKDLUIOQCWIHXHYIACUOMZALD");
    const char tmp_msg_0[] = {51, 109, -81, -82, 46, -112, -20, -4, 60, 66, -115, -78, -80, -80, 48, 67, 63, -22, -70, -77, -113, 49, 47, -121, 86, 61, -4, 15, 105, -3, -19, -110, 46, -71, 2, 72, -71, 126, 60, 74, -128, -125, 110, 35, -38, -51, -26, -32, -114, 69, 27, -38, -92, 54};
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
    msg.setTimeStamp(0.643490231396061);
    msg.setSource(54236U);
    msg.setSourceEntity(145U);
    msg.setDestination(34152U);
    msg.setDestinationEntity(246U);
    msg.req_id = 36707U;
    msg.ttl = 57221U;
    msg.destination.assign("CVDGRPVHVUFNN");
    const char tmp_msg_0[] = {88, -4, -63, -75, -53, 74, -54, 50, -94, -120, -121, -37, 26, -28, 74, -3, -113, -7, -14, 91, 30, 40, -116, 124, -24, -51, -23, 54, 71, 95, 28, 101, 125, -12, -88, 112, -12, -117, -18, 20, 36, -113, -66, -110, 37, -58, -37, -13, 66, 39, -78, 41, -31, -107, 73, 63, 94, -56, -117, -71, 103, -31, -5, -126, 3, 35, 65, 50, -31, -14, 108, -125, -82, 109, -49, -5, -84, -81, -114, 62, -48, 44, 117, -111, -114, 71, -15, -77, -113, -67, -79, -111, 91, -23, -45, -119, 110, 108, 61, 107, 62, 91, -3, 0, -79, -57, -24, 31, 20, -7, -65, 84, 115, -16, 125, 107, -112, -26, -79, -95, 87, -101, 66, 101, -47, -6, -107, -92, 6, 60, -31, -73, 81, 125, 89, 80, -62, 60, 62, -116, -6, -18, -32, -3, 39, 66, -71, 102, 40, 59, 3, 10, 43, -31, -125, -112, -82, -55, -113, 32, 99, -78, -14, 115, -114, 104, 69, 103, 71, -107, -91, 31, 35, 52, 116, 85, 46, -83, 107, 53, 38, 95, 74, 39, -89, -34, -17, 92, -120, -11, 73, -8, 85};
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
    msg.setTimeStamp(0.6786489024934527);
    msg.setSource(1118U);
    msg.setSourceEntity(228U);
    msg.setDestination(57898U);
    msg.setDestinationEntity(78U);
    msg.req_id = 45678U;
    msg.status = 28U;
    msg.text.assign("YIIUBHJCRMDLXJVONWRHVHPOWTTUMJTZXAMOWEHEOTZRJHTUZCLFAMWDJXXIFZYHSBKVKRDKFEINIEPKOYIJLEESPCKDJAOMMHTRSQLFXTVYMGGEPWNAKXSZGMJFUPUCVSEIRQBOCNPPLKUAWAAWDLXMKQWGPUVQBWIFJXRUZZSVXSRJKMWBFYZHDGAQQOLGLNFVUCYKETBGIGSTHSSGBUANADCDZQLCDYRPOPYQBINNZYVQHEYLTNB");

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
    msg.setTimeStamp(0.7571998847496364);
    msg.setSource(64311U);
    msg.setSourceEntity(69U);
    msg.setDestination(63453U);
    msg.setDestinationEntity(223U);
    msg.req_id = 53709U;
    msg.status = 202U;
    msg.text.assign("KGEUTSVCKITGBLDGLFJLIJEVH");

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
    msg.setTimeStamp(0.6494479656840263);
    msg.setSource(55325U);
    msg.setSourceEntity(232U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(175U);
    msg.req_id = 27549U;
    msg.status = 157U;
    msg.text.assign("HBXCUXMNATMGHJEYHXLNBOBPYPY");

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
    msg.setTimeStamp(0.20100662210368814);
    msg.setSource(11544U);
    msg.setSourceEntity(120U);
    msg.setDestination(21648U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("CGTRNZBTFB");
    msg.links = 1355463309U;

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
    msg.setTimeStamp(0.8758779362409237);
    msg.setSource(29886U);
    msg.setSourceEntity(10U);
    msg.setDestination(13126U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("EADSQECXMNRWAYZNFDPXGLIVONVYVTFYQEBAQUZIHKZXGPFKJNVWGERSYLLIYCZRCCAJFROJTHMCTTZQPMZKEDXFZPBTHIJPWCURXIADTZLQIASRTZVVOCXAEPQKFSXJOUMPOMDTBMOFSSMUUBKGCJIOWIBGKLBUAUHVNELKECSHVFDHQWYQDOUTQIDJFDJDHJSKANURTNMNXXOLZKLHJWNQMXGPWG");
    msg.links = 2342855680U;

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
    msg.setTimeStamp(0.4407389855511834);
    msg.setSource(228U);
    msg.setSourceEntity(141U);
    msg.setDestination(63054U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("PZZKHAVRUHFJSMLISFLCUKOGPGLFEEEBUKJEWHPXUYDOIHHQQQVCRJINENDKZVTBFNMVCWWGBMXWOYHMBSXWYRCLBBTMSTWCBFGGAQJEEIDQUMADWBDZTXTPGFUEBSHVJOGJLIJKNICYPRZSXLXSXDOTJCKTNYPUWNIAJVKTUNFJDWAORLRQXFACGAFGZSYVZACUZANYYWYRQRDRASMKGMHHEQVNQUPXBVTPLOSLMO");
    msg.links = 4137486024U;

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
    msg.setTimeStamp(0.9250737955742143);
    msg.setSource(35712U);
    msg.setSourceEntity(61U);
    msg.setDestination(15638U);
    msg.setDestinationEntity(197U);
    msg.groupname.assign("OINFHLDYSLUWEAPRQCIDFEDQSPHKMYKPKMWRLJFPHQWBFVUZALXZEFZPOAYODBPPWJSVTTANUPZBTVCOKJXKMXMMMRYIBKVKVGMYESGNUIHILBDWKOZZSPOSHJWYOFLIGBAVMAIHFUYXRALSBCHMUSVGNIQOQSJJRRTNQ");
    msg.action = 244U;
    msg.grouplist.assign("YCKQPTIBVWSDHZRQMONBFIHRBJUFKMASOYSEXSTWKMZOCQYSHHGGXIUDOLAJWAKUNPVQYVGKEPMBNQNLZWKQSTDFAHNXGWTXDIMYTJWRBHPVGLJDRTSLZEZTEIDWLQPARABVCQHPOYPYKDMOFXDVXNANRRNCDCKNVVGOUGWCEUYHXPIAFLFFULOYMVUFJQAIEUGXCLIXBRNJH");

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
    msg.setTimeStamp(0.3271333200545271);
    msg.setSource(3098U);
    msg.setSourceEntity(71U);
    msg.setDestination(45411U);
    msg.setDestinationEntity(35U);
    msg.groupname.assign("CTPYKIMXJSFGQZCPJYVQHIBTNKGILVVTSNDOQSIHQFHEBDWZRXPHOKXTAUROGRS");
    msg.action = 39U;
    msg.grouplist.assign("NHNYRXNGFZVZGQDAPJIAIGFGICBIDSHMPLVPPHRFPBFBXDJWMWROBMSADVLTMYKBAPMUNIOZMSWJHVBWKKBSZUE");

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
    msg.setTimeStamp(0.1433584261367269);
    msg.setSource(46702U);
    msg.setSourceEntity(2U);
    msg.setDestination(21239U);
    msg.setDestinationEntity(247U);
    msg.groupname.assign("JELNHMNVYONBYXUAPWIOFIWQBSNXFTOURFGEBZCVTQZNGKSJUBOJJBDGPCSDEZGSRZHZQDGBURCWXVPIDBBSIRHQEDCOPKDYKPIPROPFDNQAKKFJTLXAQLEMUXHEONSDTVTCVKYVAKCIXRWIXMYLVVUJJLLCVYQRTGFMLOQMMHGPWZUIJWR");
    msg.action = 96U;
    msg.grouplist.assign("VORPEKKWIJIBLOPNDRCMMXKSJVHUKYGYJHBQDBYETXMQNQPJNFNXMVPSSLYTSEFWLKXREGRGQCNDACSCXNTARVUJUUWMWZAPUWRCUBTMZEGWOHKQRAUZGJUPBRQKVDQVHFATDLDYOOKYKVHBGYAGEPCLOJFSGFQNBFLXTSQDXFMLLYVTYIUCPZIHEMFMG");

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
    msg.setTimeStamp(0.8636424566739901);
    msg.setSource(3996U);
    msg.setSourceEntity(160U);
    msg.setDestination(34752U);
    msg.setDestinationEntity(50U);
    msg.id = 32U;
    msg.range = 0.6938283462308308;

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
    msg.setTimeStamp(0.9453732954865199);
    msg.setSource(9258U);
    msg.setSourceEntity(137U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(160U);
    msg.id = 128U;
    msg.range = 0.25461162390878345;

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
    msg.setTimeStamp(0.48544785954564407);
    msg.setSource(26240U);
    msg.setSourceEntity(54U);
    msg.setDestination(43514U);
    msg.setDestinationEntity(225U);
    msg.id = 37U;
    msg.range = 0.7956622766230902;

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
    msg.setTimeStamp(0.9168921507341353);
    msg.setSource(21147U);
    msg.setSourceEntity(69U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(11U);
    msg.beacon.assign("ILYOBDGWNFYPWWAJZTSIWOQHIIEGRXUHBIQSDFMMLSSUDALCCNZTVGJPVKCHJFYJAQFKSIHYTWNHWDHDNFBKNANXZWQJGNYYSXTLRMEFYJTQADRMPLGXKOUEKMZNAGCKUSXLPSXLPBLQYWCMVJTQCVZJRRZQXPFPPCNUUCPZEMXAVDIESXREENGVTPGACKDCUYBVVIOODMYBVJHOORTUHQKFVBZEIILHAMUOESXJLUKMZWEARORBDBTK");
    msg.lat = 0.6805315722396585;
    msg.lon = 0.36363353124598397;
    msg.depth = 0.48355570937647674;
    msg.query_channel = 79U;
    msg.reply_channel = 175U;
    msg.transponder_delay = 252U;

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
    msg.setTimeStamp(0.5684481830510106);
    msg.setSource(18587U);
    msg.setSourceEntity(159U);
    msg.setDestination(44289U);
    msg.setDestinationEntity(179U);
    msg.beacon.assign("ZTHFPQXKLWUPGIDMZLHDCG");
    msg.lat = 0.9504917552539727;
    msg.lon = 0.9126293709439228;
    msg.depth = 0.7236095886596714;
    msg.query_channel = 214U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 241U;

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
    msg.setTimeStamp(0.7894998984830399);
    msg.setSource(21117U);
    msg.setSourceEntity(36U);
    msg.setDestination(3558U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("RJFWDETTQFRAVMPRUFXXDQVHGCOPC");
    msg.lat = 0.3067581698200079;
    msg.lon = 0.1470031968489084;
    msg.depth = 0.4290076744184086;
    msg.query_channel = 165U;
    msg.reply_channel = 91U;
    msg.transponder_delay = 170U;

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
    msg.setTimeStamp(0.680120446678979);
    msg.setSource(63078U);
    msg.setSourceEntity(105U);
    msg.setDestination(25042U);
    msg.setDestinationEntity(170U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.3072687355506102);
    msg.setSource(17288U);
    msg.setSourceEntity(135U);
    msg.setDestination(4743U);
    msg.setDestinationEntity(140U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.36011023285298416);
    msg.setSource(64680U);
    msg.setSourceEntity(217U);
    msg.setDestination(57074U);
    msg.setDestinationEntity(43U);
    msg.op = 200U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VDADNPFJULIHGHJFIQVOZNTBRNJKYXFSECSLZOXGJUAHUQYHNRBMNYLDTIJOMEAECYAVBNAPJGJMWXKPRMUBLOQRDVZRCVVCWVZEZASPMSZSJHIKQQSMLPBYQFXORZWO");
    tmp_msg_0.lat = 0.5300751494312248;
    tmp_msg_0.lon = 0.3481552939580227;
    tmp_msg_0.depth = 0.9296182028505576;
    tmp_msg_0.query_channel = 135U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 18U;
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
    msg.setTimeStamp(0.16191307193353854);
    msg.setSource(60903U);
    msg.setSourceEntity(21U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(78U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5134907480562722;
    tmp_msg_0.lon = 0.7444260966023529;
    tmp_msg_0.height = 0.16436542613593286;
    tmp_msg_0.x = 0.7290133660398053;
    tmp_msg_0.y = 0.4503309771429871;
    tmp_msg_0.z = 0.3744711592701421;
    tmp_msg_0.phi = 0.643914119765274;
    tmp_msg_0.theta = 0.1665283211277675;
    tmp_msg_0.psi = 0.9039579322365943;
    tmp_msg_0.u = 0.6599363215248618;
    tmp_msg_0.v = 0.970421126245977;
    tmp_msg_0.w = 0.1780788447015862;
    tmp_msg_0.vx = 0.5409400127587073;
    tmp_msg_0.vy = 0.38405483029223875;
    tmp_msg_0.vz = 0.6681795901174434;
    tmp_msg_0.p = 0.46914338219072016;
    tmp_msg_0.q = 0.7243489125988645;
    tmp_msg_0.r = 0.3345847820532736;
    tmp_msg_0.depth = 0.22846907305942377;
    tmp_msg_0.alt = 0.509141133679324;
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
    msg.setTimeStamp(0.34695407595803107);
    msg.setSource(51603U);
    msg.setSourceEntity(87U);
    msg.setDestination(4619U);
    msg.setDestinationEntity(74U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 161U;
    tmp_msg_0.goal_id.assign("HMXQFWNUXDWITOGQRINNMLGHCZIEJBEITOSPHSTNBEEOEWLGHKYMFMFKKNILDOAQJJTRPKFDMIVKBSYHBZHNTGXUIGSXUZMLQBTWPPBRDPGQFEWSCWEJMYJHYQOEJUKCLZDHNAVMCASHDXWIZFEJJSRQOPAFRYRSRIBCFACEYLVBUCCFJLRAZUDMKKGOQRXLOAPJXZYUBXDYGQHWXYVDKTPI");
    tmp_msg_0.goal_xml.assign("KAYJDKNFKNSXKVMNCZMHKFVLWMDMAVUGHKRGUDWINBHT");
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
    msg.setTimeStamp(0.9256569920563127);
    msg.setSource(38416U);
    msg.setSourceEntity(54U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(206U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.895031706769212;
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
    msg.setTimeStamp(0.2559460806436903);
    msg.setSource(42013U);
    msg.setSourceEntity(22U);
    msg.setDestination(40458U);
    msg.setDestinationEntity(144U);
    msg.op = 29U;
    msg.system.assign("QJMEYXFQGKYYLDWMZ");
    msg.range = 0.3259951796586471;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 223U;
    tmp_msg_0.longain = 0.6500724626349247;
    tmp_msg_0.latgain = 0.253403070285638;
    tmp_msg_0.bondthick = 621427342U;
    tmp_msg_0.leadgain = 0.9418624794885349;
    tmp_msg_0.deconflgain = 0.3598867423018862;
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
    msg.setTimeStamp(0.8606034775290994);
    msg.setSource(37806U);
    msg.setSourceEntity(131U);
    msg.setDestination(27269U);
    msg.setDestinationEntity(54U);
    msg.op = 97U;
    msg.system.assign("HJHMBFWTQVIQVLXDTTSMRRUITSHTNAEFYYHAMCRKRFRPHDFPNAIRRGZFUGTRTWJWXPKVYVKAGGMHCVUIOKJJOLSLHPZISPKWJGMOZJZMIEBKAUVFBNMPGRBQUBCVSXOZLGSHRUAQWVKLJOCGYNWZLKIAEWYDNCMXUCDAQFXMLADSNIQPXYJWBYLXLTSYSBOPECHBSWNNZZZNDQGXPEDILOEPCHKB");
    msg.range = 0.2529856122836759;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 33322U;
    tmp_msg_0.value = 191U;
    tmp_msg_0.error.assign("PVMMLPQGNPDXKRQVLBRJVATYNTSCMWJRUFOINJZDVPDEBFHANYVFGSHILWEUBTOERPOBSTUSAAPCPQNLJYFXIKLBCJETDHJZYNBGGWMLCIZAZGQAFECVFDKRLEJQBIPQSIYGD");
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
    msg.setTimeStamp(0.6233412739832853);
    msg.setSource(10175U);
    msg.setSourceEntity(202U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(111U);
    msg.op = 33U;
    msg.system.assign("YTNJKIOCZZAGXBMLPWBVGPXKZRSKMSFMZJWGVZUWSPXXZJOJDFFHBCBUDLUCCCXMQFEEVEQKHBGRBYVYT");
    msg.range = 0.7775899694822643;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("VWUKRFWPCSMUATLIHRQVVPEDEHJTBAFIMGMZBYCKJLUGFWNAWKSPLVUPAIABMDYRZBFJAAKCTNCSZNNOPKZOCDGONEXTDLWWXHVQHNXJBPPJYRMEZHXHTQFSDSQEDAOK");
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
    msg.setTimeStamp(0.9472673672608822);
    msg.setSource(33095U);
    msg.setSourceEntity(195U);
    msg.setDestination(4776U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.3707078177750328);
    msg.setSource(7505U);
    msg.setSourceEntity(182U);
    msg.setDestination(55368U);
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
    msg.setTimeStamp(0.2830772682628526);
    msg.setSource(50555U);
    msg.setSourceEntity(36U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.8901049350289952);
    msg.setSource(63359U);
    msg.setSourceEntity(165U);
    msg.setDestination(23532U);
    msg.setDestinationEntity(8U);
    msg.list.assign("RMQXONIGAJNALSDSWLSJCRZMXSKRFBONBKMPTCYRVQUHGLZHLEVOZZPCTMFJAFNQIBJGDFKCVOBFQRYWEIMMCUXOTIYIRXUJBDPMXNUNMAENYVQROWZVDCTBAHPBEFYUYNOHXDGVWKZOTYULHACRDBZTWZIZLBEKRGXWOIIQSTMPELGIHVSUVYITYODQKTADGNTUVMJCCQPAEPLWCGPLJKYPDUFKFQESXGASWFAFJJVEZNHX");

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
    msg.setTimeStamp(0.3863145132609803);
    msg.setSource(33932U);
    msg.setSourceEntity(118U);
    msg.setDestination(47582U);
    msg.setDestinationEntity(28U);
    msg.list.assign("BWQBMKMVPDHZJYUZUNOEOXYYGH");

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
    msg.setTimeStamp(0.14404383913396024);
    msg.setSource(1234U);
    msg.setSourceEntity(59U);
    msg.setDestination(27205U);
    msg.setDestinationEntity(247U);
    msg.list.assign("SKBGPYGCPYEBJIWETUOJX");

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
    msg.setTimeStamp(0.049325681502668584);
    msg.setSource(58962U);
    msg.setSourceEntity(30U);
    msg.setDestination(29857U);
    msg.setDestinationEntity(212U);
    msg.value = -7719;

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
    msg.setTimeStamp(0.2939473692979513);
    msg.setSource(58519U);
    msg.setSourceEntity(5U);
    msg.setDestination(60680U);
    msg.setDestinationEntity(31U);
    msg.value = -13840;

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
    msg.setTimeStamp(0.8378421088708502);
    msg.setSource(49856U);
    msg.setSourceEntity(86U);
    msg.setDestination(27963U);
    msg.setDestinationEntity(153U);
    msg.value = 22008;

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
    msg.setTimeStamp(0.9397975522031099);
    msg.setSource(37783U);
    msg.setSourceEntity(70U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(42U);
    msg.value = 0.8961362677187886;

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
    msg.setTimeStamp(0.13370350929842256);
    msg.setSource(13574U);
    msg.setSourceEntity(193U);
    msg.setDestination(31848U);
    msg.setDestinationEntity(2U);
    msg.value = 0.08767105452949187;

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
    msg.setTimeStamp(0.9162531399939161);
    msg.setSource(53212U);
    msg.setSourceEntity(165U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8601551916255754;

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
    msg.setTimeStamp(0.6322368299470923);
    msg.setSource(12671U);
    msg.setSourceEntity(195U);
    msg.setDestination(60690U);
    msg.setDestinationEntity(135U);
    msg.value = 0.36268151927501735;

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
    msg.setTimeStamp(0.3959615977805164);
    msg.setSource(48507U);
    msg.setSourceEntity(16U);
    msg.setDestination(4692U);
    msg.setDestinationEntity(172U);
    msg.value = 0.14811420046677126;

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
    msg.setTimeStamp(0.7901584669641056);
    msg.setSource(21095U);
    msg.setSourceEntity(80U);
    msg.setDestination(16308U);
    msg.setDestinationEntity(2U);
    msg.value = 0.9043975367525304;

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
    msg.setTimeStamp(0.8296952687199446);
    msg.setSource(63738U);
    msg.setSourceEntity(98U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(220U);
    msg.validity = 28892U;
    msg.type = 95U;
    msg.utc_year = 34225U;
    msg.utc_month = 202U;
    msg.utc_day = 81U;
    msg.utc_time = 0.8583876911126083;
    msg.lat = 0.0031924593603838147;
    msg.lon = 0.7668422813483998;
    msg.height = 0.02005582061297073;
    msg.satellites = 111U;
    msg.cog = 0.13800293479590764;
    msg.sog = 0.6061784286422369;
    msg.hdop = 0.4253308162352558;
    msg.vdop = 0.4824890410305198;
    msg.hacc = 0.7326938040338571;
    msg.vacc = 0.49157833022348807;

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
    msg.setTimeStamp(0.8167583714543111);
    msg.setSource(46719U);
    msg.setSourceEntity(29U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(186U);
    msg.validity = 26525U;
    msg.type = 142U;
    msg.utc_year = 37289U;
    msg.utc_month = 190U;
    msg.utc_day = 135U;
    msg.utc_time = 0.42200257054797474;
    msg.lat = 0.9814003301865392;
    msg.lon = 0.19148319346994835;
    msg.height = 0.6563782345511652;
    msg.satellites = 94U;
    msg.cog = 0.8646764816916928;
    msg.sog = 0.27885250991377875;
    msg.hdop = 0.38570583988249685;
    msg.vdop = 0.5737925233528148;
    msg.hacc = 0.125511962734986;
    msg.vacc = 0.48294360429624916;

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
    msg.setTimeStamp(0.4147486330896679);
    msg.setSource(16044U);
    msg.setSourceEntity(1U);
    msg.setDestination(3144U);
    msg.setDestinationEntity(99U);
    msg.validity = 26539U;
    msg.type = 117U;
    msg.utc_year = 38741U;
    msg.utc_month = 221U;
    msg.utc_day = 215U;
    msg.utc_time = 0.7090088319408768;
    msg.lat = 0.4198007085825525;
    msg.lon = 0.8054847200530136;
    msg.height = 0.033053900450478846;
    msg.satellites = 211U;
    msg.cog = 0.07471988599210944;
    msg.sog = 0.26998147832746966;
    msg.hdop = 0.0009652486946356564;
    msg.vdop = 0.7756121748083773;
    msg.hacc = 0.2958710227569321;
    msg.vacc = 0.4980256294550792;

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
    msg.setTimeStamp(0.8895537762433107);
    msg.setSource(49714U);
    msg.setSourceEntity(238U);
    msg.setDestination(14952U);
    msg.setDestinationEntity(32U);
    msg.time = 0.6948305813148072;
    msg.phi = 0.03755880988125504;
    msg.theta = 0.33268394741587737;
    msg.psi = 0.18771079790596956;
    msg.psi_magnetic = 0.11753677615052038;

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
    msg.setTimeStamp(0.6953439788360721);
    msg.setSource(45383U);
    msg.setSourceEntity(129U);
    msg.setDestination(51460U);
    msg.setDestinationEntity(13U);
    msg.time = 0.9802409026988601;
    msg.phi = 0.7334946049206162;
    msg.theta = 0.7639647440798327;
    msg.psi = 0.37677103570962833;
    msg.psi_magnetic = 0.6605049706807525;

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
    msg.setTimeStamp(0.6215968549488189);
    msg.setSource(21294U);
    msg.setSourceEntity(78U);
    msg.setDestination(63367U);
    msg.setDestinationEntity(192U);
    msg.time = 0.21747437800389602;
    msg.phi = 0.3972434636098702;
    msg.theta = 0.022744149445488304;
    msg.psi = 0.584092434177165;
    msg.psi_magnetic = 0.6501459976195042;

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
    msg.setTimeStamp(0.6189307080733092);
    msg.setSource(32007U);
    msg.setSourceEntity(20U);
    msg.setDestination(15694U);
    msg.setDestinationEntity(96U);
    msg.time = 0.6458985648847297;
    msg.x = 0.15970240370745492;
    msg.y = 0.520969651941332;
    msg.z = 0.15757876265371007;
    msg.timestep = 0.7752062759980798;

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
    msg.setTimeStamp(0.21995393212802095);
    msg.setSource(24179U);
    msg.setSourceEntity(117U);
    msg.setDestination(24598U);
    msg.setDestinationEntity(34U);
    msg.time = 0.31400332581843426;
    msg.x = 0.8540095164613007;
    msg.y = 0.24152582011928325;
    msg.z = 0.04767326763223867;
    msg.timestep = 0.6335198942942254;

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
    msg.setTimeStamp(0.05727887010375643);
    msg.setSource(14041U);
    msg.setSourceEntity(181U);
    msg.setDestination(60763U);
    msg.setDestinationEntity(235U);
    msg.time = 0.5744858149338778;
    msg.x = 0.8629025353683158;
    msg.y = 0.3865761924958506;
    msg.z = 0.9079600656954281;
    msg.timestep = 0.7517304251286334;

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
    msg.setTimeStamp(0.3138764821776652);
    msg.setSource(28872U);
    msg.setSourceEntity(208U);
    msg.setDestination(1490U);
    msg.setDestinationEntity(174U);
    msg.time = 0.1672852809100459;
    msg.x = 0.7585040719242283;
    msg.y = 0.15629330090447757;
    msg.z = 0.3620979955249871;

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
    msg.setTimeStamp(0.7745610427202256);
    msg.setSource(28522U);
    msg.setSourceEntity(123U);
    msg.setDestination(44694U);
    msg.setDestinationEntity(220U);
    msg.time = 0.31044625263383097;
    msg.x = 0.4320551176296932;
    msg.y = 0.049981501890341784;
    msg.z = 0.46938685057017915;

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
    msg.setTimeStamp(0.40133845268649704);
    msg.setSource(14130U);
    msg.setSourceEntity(33U);
    msg.setDestination(171U);
    msg.setDestinationEntity(38U);
    msg.time = 0.29764736927002466;
    msg.x = 0.34959343681815713;
    msg.y = 0.8412438934196029;
    msg.z = 0.8710809241202958;

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
    msg.setTimeStamp(0.11503598945370086);
    msg.setSource(22572U);
    msg.setSourceEntity(16U);
    msg.setDestination(31585U);
    msg.setDestinationEntity(94U);
    msg.time = 0.5046727962069771;
    msg.x = 0.4786033995108907;
    msg.y = 0.06302465674640778;
    msg.z = 0.19181976447661175;

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
    msg.setTimeStamp(0.04395975145306841);
    msg.setSource(61070U);
    msg.setSourceEntity(70U);
    msg.setDestination(34634U);
    msg.setDestinationEntity(236U);
    msg.time = 0.5963715730797821;
    msg.x = 0.9508728195815864;
    msg.y = 0.2772759932865676;
    msg.z = 0.943714168906332;

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
    msg.setTimeStamp(0.42959228449143294);
    msg.setSource(37007U);
    msg.setSourceEntity(21U);
    msg.setDestination(60312U);
    msg.setDestinationEntity(31U);
    msg.time = 0.9014544968385894;
    msg.x = 0.43390730893745677;
    msg.y = 0.42079884033443027;
    msg.z = 0.37261856470432775;

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
    msg.setTimeStamp(0.31795591080017804);
    msg.setSource(36286U);
    msg.setSourceEntity(166U);
    msg.setDestination(65183U);
    msg.setDestinationEntity(216U);
    msg.time = 0.826576915250765;
    msg.x = 0.6164676372679485;
    msg.y = 0.14329974103494014;
    msg.z = 0.4030159135552219;

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
    msg.setTimeStamp(0.6030760785393867);
    msg.setSource(27877U);
    msg.setSourceEntity(80U);
    msg.setDestination(43545U);
    msg.setDestinationEntity(222U);
    msg.time = 0.7789555792636933;
    msg.x = 0.6999713411538498;
    msg.y = 0.009992959468506868;
    msg.z = 0.3676476337415212;

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
    msg.setTimeStamp(0.7000206164817555);
    msg.setSource(33487U);
    msg.setSourceEntity(253U);
    msg.setDestination(6160U);
    msg.setDestinationEntity(130U);
    msg.time = 0.1647377607677567;
    msg.x = 0.41170137726850153;
    msg.y = 0.05368750484267082;
    msg.z = 0.4466362944258122;

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
    msg.setTimeStamp(0.5852004203480914);
    msg.setSource(26427U);
    msg.setSourceEntity(199U);
    msg.setDestination(45531U);
    msg.setDestinationEntity(104U);
    msg.validity = 40U;
    msg.x = 0.31260420495174923;
    msg.y = 0.4431694601994297;
    msg.z = 0.6918773805972045;

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
    msg.setTimeStamp(0.3832497438289475);
    msg.setSource(16660U);
    msg.setSourceEntity(67U);
    msg.setDestination(55518U);
    msg.setDestinationEntity(59U);
    msg.validity = 78U;
    msg.x = 0.04807051222046177;
    msg.y = 0.33626806101135176;
    msg.z = 0.389968653610413;

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
    msg.setTimeStamp(0.40549360523619726);
    msg.setSource(23359U);
    msg.setSourceEntity(67U);
    msg.setDestination(34307U);
    msg.setDestinationEntity(175U);
    msg.validity = 103U;
    msg.x = 0.7996490250191054;
    msg.y = 0.9927636190013607;
    msg.z = 0.4125035818902165;

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
    msg.setTimeStamp(0.44312841095758904);
    msg.setSource(6542U);
    msg.setSourceEntity(36U);
    msg.setDestination(14522U);
    msg.setDestinationEntity(54U);
    msg.validity = 2U;
    msg.x = 0.7024045838852296;
    msg.y = 0.09206301137124884;
    msg.z = 0.28253509137646327;

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
    msg.setTimeStamp(0.22138948903176303);
    msg.setSource(59200U);
    msg.setSourceEntity(110U);
    msg.setDestination(2886U);
    msg.setDestinationEntity(44U);
    msg.validity = 190U;
    msg.x = 0.9341861002224885;
    msg.y = 0.9551507618932484;
    msg.z = 0.791977138717531;

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
    msg.setTimeStamp(0.3558460049255282);
    msg.setSource(32988U);
    msg.setSourceEntity(20U);
    msg.setDestination(5031U);
    msg.setDestinationEntity(136U);
    msg.validity = 93U;
    msg.x = 0.3396377077530228;
    msg.y = 0.05071650051684995;
    msg.z = 0.10138195815340356;

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
    msg.setTimeStamp(0.1105779702095464);
    msg.setSource(56016U);
    msg.setSourceEntity(209U);
    msg.setDestination(30259U);
    msg.setDestinationEntity(148U);
    msg.time = 0.608863115909091;
    msg.x = 0.04200671333611172;
    msg.y = 0.9049045826518406;
    msg.z = 0.04485297286915857;

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
    msg.setTimeStamp(0.5222049736054583);
    msg.setSource(25789U);
    msg.setSourceEntity(167U);
    msg.setDestination(43329U);
    msg.setDestinationEntity(170U);
    msg.time = 0.9859694504429228;
    msg.x = 0.858194032374998;
    msg.y = 0.5407944259532539;
    msg.z = 0.4626912252167633;

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
    msg.setTimeStamp(0.16082495238779249);
    msg.setSource(47616U);
    msg.setSourceEntity(117U);
    msg.setDestination(13943U);
    msg.setDestinationEntity(139U);
    msg.time = 0.6108140278089079;
    msg.x = 0.8714004542455311;
    msg.y = 0.7629342153547019;
    msg.z = 0.29345256134682973;

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
    msg.setTimeStamp(0.6692532566809978);
    msg.setSource(7779U);
    msg.setSourceEntity(157U);
    msg.setDestination(27904U);
    msg.setDestinationEntity(152U);
    msg.validity = 218U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4470504275181464;
    tmp_msg_0.y = 0.15155110319487475;
    tmp_msg_0.z = 0.030781637462800937;
    tmp_msg_0.phi = 0.7229175327328736;
    tmp_msg_0.theta = 0.5382294059609218;
    tmp_msg_0.psi = 0.3435716423669629;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.25136672470470023;
    tmp_msg_1.beam_height = 0.6414568651571321;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6185667051821622;

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
    msg.setTimeStamp(0.2871653043462561);
    msg.setSource(31421U);
    msg.setSourceEntity(34U);
    msg.setDestination(52243U);
    msg.setDestinationEntity(151U);
    msg.validity = 37U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.30852413043639126;
    tmp_msg_0.y = 0.5767289978382264;
    tmp_msg_0.z = 0.4063172544139493;
    tmp_msg_0.phi = 0.1061324493458552;
    tmp_msg_0.theta = 0.44101052229762816;
    tmp_msg_0.psi = 0.5248845057165243;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.07850970340161079;

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
    msg.setTimeStamp(0.35271344356354606);
    msg.setSource(22753U);
    msg.setSourceEntity(138U);
    msg.setDestination(48747U);
    msg.setDestinationEntity(77U);
    msg.validity = 84U;
    msg.value = 0.69655088329948;

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
    msg.setTimeStamp(0.731590766324155);
    msg.setSource(44777U);
    msg.setSourceEntity(16U);
    msg.setDestination(29675U);
    msg.setDestinationEntity(6U);
    msg.value = 0.15051168660710468;

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
    msg.setTimeStamp(0.27111418925675734);
    msg.setSource(42682U);
    msg.setSourceEntity(151U);
    msg.setDestination(44606U);
    msg.setDestinationEntity(0U);
    msg.value = 0.4482066174073036;

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
    msg.setTimeStamp(0.28964529517072757);
    msg.setSource(44412U);
    msg.setSourceEntity(48U);
    msg.setDestination(23261U);
    msg.setDestinationEntity(68U);
    msg.value = 0.6649676336395154;

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
    msg.setTimeStamp(0.9914796001111416);
    msg.setSource(24731U);
    msg.setSourceEntity(99U);
    msg.setDestination(41367U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7112107204347238;

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
    msg.setTimeStamp(0.4637102867310643);
    msg.setSource(9004U);
    msg.setSourceEntity(39U);
    msg.setDestination(62960U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7665211567388411;

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
    msg.setTimeStamp(0.5531031839735282);
    msg.setSource(14171U);
    msg.setSourceEntity(79U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(74U);
    msg.value = 0.09138988102345491;

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
    msg.setTimeStamp(0.5765145868117167);
    msg.setSource(33361U);
    msg.setSourceEntity(40U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6360836361949694;

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
    msg.setTimeStamp(0.37274806408642325);
    msg.setSource(44018U);
    msg.setSourceEntity(117U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(60U);
    msg.value = 0.26827004075637373;

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
    msg.setTimeStamp(0.8790117374896046);
    msg.setSource(35369U);
    msg.setSourceEntity(19U);
    msg.setDestination(15311U);
    msg.setDestinationEntity(197U);
    msg.value = 0.415094572294716;

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
    msg.setTimeStamp(0.042864245377825294);
    msg.setSource(40480U);
    msg.setSourceEntity(101U);
    msg.setDestination(9584U);
    msg.setDestinationEntity(98U);
    msg.value = 0.421461560449619;

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
    msg.setTimeStamp(0.8147006819858019);
    msg.setSource(26715U);
    msg.setSourceEntity(244U);
    msg.setDestination(13172U);
    msg.setDestinationEntity(181U);
    msg.value = 0.7244865733497646;

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
    msg.setTimeStamp(0.8685188214137367);
    msg.setSource(58789U);
    msg.setSourceEntity(19U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(117U);
    msg.value = 0.727159166807729;

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
    msg.setTimeStamp(0.9747921895960315);
    msg.setSource(26316U);
    msg.setSourceEntity(91U);
    msg.setDestination(54280U);
    msg.setDestinationEntity(122U);
    msg.value = 0.3635704452576993;

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
    msg.setTimeStamp(0.45033460852209006);
    msg.setSource(57518U);
    msg.setSourceEntity(13U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(212U);
    msg.value = 0.3409549623563102;

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
    msg.setTimeStamp(0.7346265666070922);
    msg.setSource(36550U);
    msg.setSourceEntity(251U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6966725298049716;

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
    msg.setTimeStamp(0.21070744243741324);
    msg.setSource(32826U);
    msg.setSourceEntity(254U);
    msg.setDestination(58184U);
    msg.setDestinationEntity(206U);
    msg.value = 0.17814256977030418;

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
    msg.setTimeStamp(0.7068958552033576);
    msg.setSource(62894U);
    msg.setSourceEntity(99U);
    msg.setDestination(42455U);
    msg.setDestinationEntity(107U);
    msg.value = 0.20342901268662905;

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
    msg.setTimeStamp(0.1645022484435309);
    msg.setSource(694U);
    msg.setSourceEntity(2U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(89U);
    msg.value = 0.2798119230233147;

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
    msg.setTimeStamp(0.7156797884424538);
    msg.setSource(24201U);
    msg.setSourceEntity(152U);
    msg.setDestination(60581U);
    msg.setDestinationEntity(159U);
    msg.value = 0.7164953658911771;

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
    msg.setTimeStamp(0.44582050253294236);
    msg.setSource(4385U);
    msg.setSourceEntity(119U);
    msg.setDestination(29976U);
    msg.setDestinationEntity(70U);
    msg.value = 0.5834167426566383;

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
    msg.setTimeStamp(0.8728074145000291);
    msg.setSource(42449U);
    msg.setSourceEntity(231U);
    msg.setDestination(3387U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8625954411650961;

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
    msg.setTimeStamp(0.061479651181071904);
    msg.setSource(436U);
    msg.setSourceEntity(243U);
    msg.setDestination(3575U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9648872881795824;

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
    msg.setTimeStamp(0.4706354435343356);
    msg.setSource(21952U);
    msg.setSourceEntity(29U);
    msg.setDestination(18265U);
    msg.setDestinationEntity(148U);
    msg.value = 0.24815674301749624;

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
    msg.setTimeStamp(0.03088518511656313);
    msg.setSource(47692U);
    msg.setSourceEntity(87U);
    msg.setDestination(50044U);
    msg.setDestinationEntity(159U);
    msg.value = 0.1525450216096641;

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
    msg.setTimeStamp(0.4472291973610617);
    msg.setSource(55676U);
    msg.setSourceEntity(87U);
    msg.setDestination(39418U);
    msg.setDestinationEntity(82U);
    msg.direction = 0.8728228925102275;
    msg.speed = 0.9677258999287164;
    msg.turbulence = 0.8556465580179119;

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
    msg.setTimeStamp(0.8420169530717209);
    msg.setSource(22026U);
    msg.setSourceEntity(135U);
    msg.setDestination(33980U);
    msg.setDestinationEntity(38U);
    msg.direction = 0.6273491724529116;
    msg.speed = 0.6190554595212752;
    msg.turbulence = 0.6064919774461335;

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
    msg.setTimeStamp(0.5331237148049581);
    msg.setSource(35023U);
    msg.setSourceEntity(123U);
    msg.setDestination(21455U);
    msg.setDestinationEntity(116U);
    msg.direction = 0.12552411246258277;
    msg.speed = 0.9376733814150496;
    msg.turbulence = 0.046591809009082885;

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
    msg.setTimeStamp(0.985883013575387);
    msg.setSource(17001U);
    msg.setSourceEntity(115U);
    msg.setDestination(34978U);
    msg.setDestinationEntity(189U);
    msg.value = 0.48043825977143184;

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
    msg.setTimeStamp(0.29708510684206046);
    msg.setSource(15034U);
    msg.setSourceEntity(198U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(103U);
    msg.value = 0.089076851210386;

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
    msg.setTimeStamp(0.027105179817277558);
    msg.setSource(21431U);
    msg.setSourceEntity(212U);
    msg.setDestination(21285U);
    msg.setDestinationEntity(204U);
    msg.value = 0.694897549934814;

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
    msg.setTimeStamp(0.1304081573275364);
    msg.setSource(45769U);
    msg.setSourceEntity(206U);
    msg.setDestination(31607U);
    msg.setDestinationEntity(236U);
    msg.value.assign("REJTODMCQLWHUPBDDFDTBYHIOUCKCBTUYCRGREKKVDVLXOHYGSYIJGBBNJFARRGXDDXLKTYXXWZASNYFPXVQZNCYNHMMSSAZTEVSXNULVCSQOXPWZAJIMRXHCLZDJHJIZMAEHGOZVTEMBAYQINEHWKAHKGIPZMKU");

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
    msg.setTimeStamp(0.14711438148982636);
    msg.setSource(13665U);
    msg.setSourceEntity(33U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(94U);
    msg.value.assign("PQLIJIJNLYFFORE");

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
    msg.setTimeStamp(0.06759874323608772);
    msg.setSource(218U);
    msg.setSourceEntity(244U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(188U);
    msg.value.assign("HQECMYKDAJSYEJIDWCQLRCAXICZDWBNUHWSELYRPZTQIETOEGSKGHBPGMOHOWJXDUNNTCYXHYIAOOVIKLTSDYMPNNRMELQODAMLLNPMQEETBGDAX");

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
    msg.setTimeStamp(0.160789304207561);
    msg.setSource(39608U);
    msg.setSourceEntity(103U);
    msg.setDestination(55010U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {100, 10, -72, 16, -37, -123, -7, 81, -8, -55, 68, 95, 50, -53, 7, -115, -46, -14, 117, 72, -46, -1, 57, -25, 42, 93, -50, 87, 89, -128, -120, -122, 121, -112, -103, 41, -76, 66, -6, -80};
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
    msg.setTimeStamp(0.9424034813761498);
    msg.setSource(1431U);
    msg.setSourceEntity(40U);
    msg.setDestination(34572U);
    msg.setDestinationEntity(12U);
    const char tmp_msg_0[] = {-117, -47, 117, 78, 113, 68, 53, -116, 117, -94, -94, 23, -46, -6, -36, 1, -1, -86, -44, -31, 96, -24, 82, -78, -72, 51, -32, -76, 54, -128, -36, -78, -122, 28, -107, -31, -1, 43, -106, -81, 117, 25, -60, 53, -38, 8, -15, -42, 37, -119, 38, -120, -30, 58, -101, -112, -104, -27, -10, 88, -36, 65, -82, -81, -110, -31, -82, 56, 106, 111, -55, 39, 25, 61, -91, 99, -40, 79, -111, 105, 5, -107, -112, 106, -28, 75, -60, -3, -58, -115, 94, -86, 42, -38, -33, -35, 114, 122, 8, 78, 102, 101, 13, -4, 104, -111, 48, -103, 102, -35, 27, -67, 69, -125, 115, 119, -82, -9, 59, 66, 118, -70, 107, 86, -94, 82, -2, -31, -45, 80, 75, 99, 76, -119, -72, -61, -87, 16, 125, -110, -127, -23, 89, -66, -51, -2, -42, -9, -43, 120, 1, -14, -112, 18, -30, 74, -100, 90, -33, 101, -88, -89, -61, 15, -100, -85, -74, -49, 7, -116, 38, -19, -93, 1, -126, 26, 14, 31, -121, -57, 66, 30, 121, 56, 120, 85, 108, -54, -102, 29, -44, 110, -56, 0, -48, 107, -1, 69, -128, 12, -99, 45, -126, 26, -57, 96, -67, 14, -111, 126, -96, -3, -107, 89, 102, -30, 126, -45, -57, -63, 57, -35, -51, 52, -91, -69, 42, -16, 94, -42, 119, -33, 85, 95, -30, 82, 123, -56, 108, 114, -46, 35, -7, -78, -46, -125, -46, -36, -65};
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
    msg.setTimeStamp(0.021516222660280526);
    msg.setSource(60325U);
    msg.setSourceEntity(189U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(239U);
    const char tmp_msg_0[] = {60, -117, 125, 17, -40, -65, 115, -14, 56, 126, 87, -74, -116, -66, -119, 3, -5, 85, 61, -89, -95, 76, 42, 113, -14, -86, 65, 59, 110, 110, 6, -68, 51, 91, -50, 99, 33, -116, -106, 95, -72, 93, 93, 67, 43, 94, 4, -32, -75, 102, 98, 50, -113, 95, -19, -5, 38, 110, 71, 31, 78, 71, -19, 70, 93, 117, -68, 99, -128, 23, -52, 29, -37, -57, -17, -62, 91, 77, -76, -25, 17, 28, -56, -87, 28, -31, 55, 49, 42, 120, -103, -14, -7, 11, 30, 7, -2, -62, 35, 120, -31, 80, 107, -19, 106, -21, 74, 11, 5, 109, -5, 58, 8, -105, -73, 125, 90, 7, 106, 95, 67, 71, -60, 10, -13, 86, -52, -115, 72, -68, 62, -105, 93, 10, 85, 77, 42, -118, 33, -22, -50, -44, 45, -49, -61, -102, -75, -100, 100, 93, 84, 119, -51, -61, 15, 99, -100, 29, -1, 25, 26, -20, -76, -62, -27, -15, 16, 45, 73, -4, 28, -75, -91, 19, 70, 110, -62, -127, -84, -119, -81, 42, -19, 34, -77, -83, -47};
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
    msg.setTimeStamp(0.1422341296455213);
    msg.setSource(18489U);
    msg.setSourceEntity(157U);
    msg.setDestination(57140U);
    msg.setDestinationEntity(102U);
    msg.type = 125U;
    msg.frequency = 2419469161U;
    msg.min_range = 56516U;
    msg.max_range = 33034U;
    msg.bits_per_point = 198U;
    msg.scale_factor = 0.4664176524464222;
    const char tmp_msg_0[] = {126, 11, -36, 65, 122, 77, 94, -100, 41, -64, 117, -108, -70, -75, -25, -30, 113, -43, -53, 11, -29, 43, -105, 54, -39, 81, -19, 78, 25, 14, 65, -94, 8, 91, -54, 22, 49, -9, 74, 12, 118, -69, -106, -65, -92, 126, 6, 6, 36, -111, 50, -86, 12, -91, 50, 98, 96, 105, -79, -99, 44, -31, 46, -84, 2, 101, -66, 26, 57, 83, -72, 1, 89, -123, -84, 74, -4, 113, -106, 99, -17, -78, 62, 116, -48, -111, -80, -78, 58, -10, 0, 32, 48, 114, 10, 20, 36, 40, -122, -27, 52, -26, 95, 32, 112, 63, 63, 82, -33, 35, -71, -24, -110, -120, 84, -13, -36, 102, -47, 26, 81, -57, -45, -68, 90, 51, 91, -2, 88, -117, -46, -50, 97, 17, -70, 25, 26, 19, -1, 40, -90, 105, -77, -46, -123, -15, 76, 68, 2, 10, 50, 67, -54, -73, -18, -6, 67, -107, 4, 67, -39, 8, 22, 2, -2, 53, 56, 96, 55, 13, -111, 53, 9, 30};
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
    msg.setTimeStamp(0.9609509247015943);
    msg.setSource(15581U);
    msg.setSourceEntity(24U);
    msg.setDestination(17852U);
    msg.setDestinationEntity(164U);
    msg.type = 236U;
    msg.frequency = 2006867490U;
    msg.min_range = 23909U;
    msg.max_range = 61417U;
    msg.bits_per_point = 145U;
    msg.scale_factor = 0.38680407316994614;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.43213910579749193;
    tmp_msg_0.beam_height = 0.027526729127322236;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {69, -105, -61, -61, -127, -19, -88, -42, 21, -53, 113, 107, 65, -125, -12, 14, 43, 83, 80, -22, 49, 0, 67, -77, 0, 33, -52, -60, -125, -33, 118, -59, -1, -76, -35, 62, -75, 126, -60, 3, -12, 67, -102, -94, -42, 65, 0, 117, 99, -114, -4, -30, 92, -19, 85, -4, 83, -77, 60, 59, 17, 90, -98, 91, -28, -72, 3, 62, 105, -87, -25, 81, -94, -33, -40, -2, -70, -12, -32, 71, -21, -17, -86, 44, -101, 119, 86, 99, 103, 7, -29, 117, -95, -87, -82, -40, -105, 25, 13, 1, -42, 67, -120, 80, -73, -23, -93, 66, 52, -25, 75, -119, 89, -32, 83, 122, -11, 1, 99, -57, -121, 20, -109, 51, 119, 65, -64, -102, 16, 98, -66, -45, -57, -105, -94, -4, 97, -49, 43, 75, 43, -41, 4, 52, -49, 59, 116, -86, 71, -2, -127, -56, 17, 80, -47, -66, -122, 19, -93, -42, 0};
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
    msg.setTimeStamp(0.9273212423707822);
    msg.setSource(29463U);
    msg.setSourceEntity(40U);
    msg.setDestination(55840U);
    msg.setDestinationEntity(226U);
    msg.type = 175U;
    msg.frequency = 562297871U;
    msg.min_range = 11455U;
    msg.max_range = 47311U;
    msg.bits_per_point = 187U;
    msg.scale_factor = 0.4134511362166168;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7486419350835949;
    tmp_msg_0.beam_height = 0.2063272885456735;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {14, -43, -2, -6, 108, 121, -21, 105, -62, -72, 100, 19, 114, -86, 70, 24, -100, 22, 106, -19, -44, 5, 16, 83, 126, -110, 39, -63, -104, -3, -66, -28, 56, 77, 24, 96, -67, -32, 58, -119, -106, 3, 70, -64, 27, 56, 87, 44, -121, 14, -17, 53, 31, -53, 88, 51, 26, 90, 60, 5, -54, 86, -95, -57, 14, -93, 47, -86, -98, -28, 70, -72, -28, -113, 22, 102};
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
    msg.setTimeStamp(0.5656658813201408);
    msg.setSource(534U);
    msg.setSourceEntity(167U);
    msg.setDestination(60158U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.8069790045301496);
    msg.setSource(48778U);
    msg.setSourceEntity(83U);
    msg.setDestination(13416U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7660073302661932);
    msg.setSource(16288U);
    msg.setSourceEntity(64U);
    msg.setDestination(10067U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.8034910328447805);
    msg.setSource(37340U);
    msg.setSourceEntity(177U);
    msg.setDestination(13911U);
    msg.setDestinationEntity(236U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.6668192789532701);
    msg.setSource(63757U);
    msg.setSourceEntity(241U);
    msg.setDestination(26342U);
    msg.setDestinationEntity(12U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.555885379931499);
    msg.setSource(48885U);
    msg.setSourceEntity(138U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(114U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.8754490477271462);
    msg.setSource(65105U);
    msg.setSourceEntity(129U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6536362052170208;
    msg.confidence = 0.07459230101418912;
    msg.opmodes.assign("YKAEXUCHUDZKPUYMFQNDJPNOPOGQLIPARDLKNPTZWCZITREFZIZOEBURTMTSKSXFJMDSUWGJMGCVAQCGBMHQAIQMECJMWNIBZMARLKQZPCXGWKVCEOTSNDNPHWFWJCXHROTYJKQOUWWEIELVYTPFOGNKDMVKRBBVVFYU");

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
    msg.setTimeStamp(0.49477813554864203);
    msg.setSource(35069U);
    msg.setSourceEntity(150U);
    msg.setDestination(51497U);
    msg.setDestinationEntity(147U);
    msg.value = 0.17127587117458043;
    msg.confidence = 0.6657835824338469;
    msg.opmodes.assign("OESYAVGSVCJCOHZLHTZWVWXZYFDGIPHSCKEMXEZLANKDRICGOMPUVPIPPPYVFRLYUUVJFWRJGEASOKEXJRQBJHVQEVYFIVVUMYLJQLQEJWTDHJKFBHXCSQEMOZBHKYNNCGWUBIBZFCASIYLBGAYWMLTNPRHNBZCAUFWTMTNAQRQSQNTYHXMPFNQQIUKORKGRPUONXLTOBFZSAUMEOCXGSGIXEFDCDJDAJDHTDZKMAO");

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
    msg.setTimeStamp(0.48095492090059033);
    msg.setSource(38358U);
    msg.setSourceEntity(22U);
    msg.setDestination(54050U);
    msg.setDestinationEntity(243U);
    msg.value = 0.19445353495280082;
    msg.confidence = 0.5695576333818803;
    msg.opmodes.assign("FGDHSTVHKOIOHWULMSBVZVPAEOXQGZSWFPBCXMNDTPUIDYFXMSIQARSEZKPTQDFIHZNODEPEJVWZBYLBOCTEWCGKYCFLWNWJUHCQMGVDGYNGALQBFCLXJJHKBUJ");

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
    msg.setTimeStamp(0.3409339620654783);
    msg.setSource(65379U);
    msg.setSourceEntity(218U);
    msg.setDestination(40164U);
    msg.setDestinationEntity(127U);
    msg.itow = 1546514830U;
    msg.lat = 0.4624902291191363;
    msg.lon = 0.7768106908018293;
    msg.height_ell = 0.278470180731055;
    msg.height_sea = 0.05314943371120162;
    msg.hacc = 0.633077200346713;
    msg.vacc = 0.23299514604452298;
    msg.vel_n = 0.7389230980000113;
    msg.vel_e = 0.13631204196355018;
    msg.vel_d = 0.18993935330436396;
    msg.speed = 0.5264042260193841;
    msg.gspeed = 0.5964449004355692;
    msg.heading = 0.24672507704481028;
    msg.sacc = 0.20231822178253211;
    msg.cacc = 0.12242625759668169;

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
    msg.setTimeStamp(0.5126955614366798);
    msg.setSource(50751U);
    msg.setSourceEntity(216U);
    msg.setDestination(29469U);
    msg.setDestinationEntity(168U);
    msg.itow = 2592987221U;
    msg.lat = 0.7624577403565044;
    msg.lon = 0.0964418566372014;
    msg.height_ell = 0.06146419684168847;
    msg.height_sea = 0.7249105648417686;
    msg.hacc = 0.7911007770703282;
    msg.vacc = 0.3666876566515983;
    msg.vel_n = 0.7163332016905989;
    msg.vel_e = 0.2057393765321942;
    msg.vel_d = 0.588589639319961;
    msg.speed = 0.1543765169116359;
    msg.gspeed = 0.7337235614019757;
    msg.heading = 0.98052755990916;
    msg.sacc = 0.6452976072743383;
    msg.cacc = 0.33686674476950496;

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
    msg.setTimeStamp(0.023411782674817916);
    msg.setSource(15609U);
    msg.setSourceEntity(37U);
    msg.setDestination(30989U);
    msg.setDestinationEntity(215U);
    msg.itow = 2221777153U;
    msg.lat = 0.7727988700555678;
    msg.lon = 0.9087046365366155;
    msg.height_ell = 0.6842439485662608;
    msg.height_sea = 0.08541500003628133;
    msg.hacc = 0.5628142596007571;
    msg.vacc = 0.16067759289567363;
    msg.vel_n = 0.8100906159045403;
    msg.vel_e = 0.6808437884536626;
    msg.vel_d = 0.24342083398159065;
    msg.speed = 0.24480532387699405;
    msg.gspeed = 0.5531441784002166;
    msg.heading = 0.28138028795456904;
    msg.sacc = 0.8028650454885471;
    msg.cacc = 0.4062161840468419;

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
    msg.setTimeStamp(0.37960529054050596);
    msg.setSource(40165U);
    msg.setSourceEntity(242U);
    msg.setDestination(20875U);
    msg.setDestinationEntity(246U);
    msg.id = 4U;
    msg.value = 0.08073851756929651;

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
    msg.setTimeStamp(0.5762075622067226);
    msg.setSource(6177U);
    msg.setSourceEntity(32U);
    msg.setDestination(54369U);
    msg.setDestinationEntity(211U);
    msg.id = 12U;
    msg.value = 0.23241404740344385;

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
    msg.setTimeStamp(0.9471307776816651);
    msg.setSource(41739U);
    msg.setSourceEntity(200U);
    msg.setDestination(54543U);
    msg.setDestinationEntity(132U);
    msg.id = 79U;
    msg.value = 0.2075871453553635;

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
    msg.setTimeStamp(0.9503135462454075);
    msg.setSource(3715U);
    msg.setSourceEntity(222U);
    msg.setDestination(19867U);
    msg.setDestinationEntity(167U);
    msg.x = 0.9054975623379287;
    msg.y = 0.4988386459659745;
    msg.z = 0.5606399891657704;
    msg.phi = 0.33526055714977365;
    msg.theta = 0.8350009118583447;
    msg.psi = 0.10921382373328781;

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
    msg.setTimeStamp(0.20899563712102975);
    msg.setSource(45929U);
    msg.setSourceEntity(124U);
    msg.setDestination(28131U);
    msg.setDestinationEntity(228U);
    msg.x = 0.47581095342860813;
    msg.y = 0.3790938275356738;
    msg.z = 0.7952928593203686;
    msg.phi = 0.2451391660233826;
    msg.theta = 0.23617389845704984;
    msg.psi = 0.042771832946391086;

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
    msg.setTimeStamp(0.3229963262488953);
    msg.setSource(33807U);
    msg.setSourceEntity(197U);
    msg.setDestination(38673U);
    msg.setDestinationEntity(68U);
    msg.x = 0.6477409357587285;
    msg.y = 0.015105050735289005;
    msg.z = 0.17092053184724265;
    msg.phi = 0.5360041269548076;
    msg.theta = 0.302295885935985;
    msg.psi = 0.15342952425811696;

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
    msg.setTimeStamp(0.10921392693284226);
    msg.setSource(30587U);
    msg.setSourceEntity(13U);
    msg.setDestination(30578U);
    msg.setDestinationEntity(127U);
    msg.beam_width = 0.42750732925076396;
    msg.beam_height = 0.6225623691534323;

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
    msg.setTimeStamp(0.4743500409162863);
    msg.setSource(57217U);
    msg.setSourceEntity(68U);
    msg.setDestination(51954U);
    msg.setDestinationEntity(118U);
    msg.beam_width = 0.7070930486620872;
    msg.beam_height = 0.46807875053097714;

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
    msg.setTimeStamp(0.2736467327687456);
    msg.setSource(20573U);
    msg.setSourceEntity(210U);
    msg.setDestination(42621U);
    msg.setDestinationEntity(11U);
    msg.beam_width = 0.3621283247058962;
    msg.beam_height = 0.8297996600052912;

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
    msg.setTimeStamp(0.13816088231323365);
    msg.setSource(58787U);
    msg.setSourceEntity(20U);
    msg.setDestination(54460U);
    msg.setDestinationEntity(119U);
    msg.sane = 145U;

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
    msg.setTimeStamp(0.21091340337654751);
    msg.setSource(27323U);
    msg.setSourceEntity(208U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(227U);
    msg.sane = 159U;

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
    msg.setTimeStamp(0.18483542635122574);
    msg.setSource(52361U);
    msg.setSourceEntity(104U);
    msg.setDestination(16249U);
    msg.setDestinationEntity(47U);
    msg.sane = 172U;

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
    msg.setTimeStamp(0.0951759512462318);
    msg.setSource(50913U);
    msg.setSourceEntity(20U);
    msg.setDestination(39831U);
    msg.setDestinationEntity(11U);
    msg.value = 0.46241841261797845;

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
    msg.setTimeStamp(0.10971283870084192);
    msg.setSource(40657U);
    msg.setSourceEntity(174U);
    msg.setDestination(30286U);
    msg.setDestinationEntity(240U);
    msg.value = 0.11724384834602963;

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
    msg.setTimeStamp(0.03473678111520395);
    msg.setSource(23033U);
    msg.setSourceEntity(27U);
    msg.setDestination(15211U);
    msg.setDestinationEntity(218U);
    msg.value = 0.33300172257422755;

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
    msg.setTimeStamp(0.5898775202349159);
    msg.setSource(36814U);
    msg.setSourceEntity(38U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(158U);
    msg.value = 0.9057663499348126;

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
    msg.setTimeStamp(0.7827297147927239);
    msg.setSource(12138U);
    msg.setSourceEntity(216U);
    msg.setDestination(62760U);
    msg.setDestinationEntity(210U);
    msg.value = 0.24577051178471432;

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
    msg.setTimeStamp(0.43727523740477103);
    msg.setSource(46455U);
    msg.setSourceEntity(60U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(164U);
    msg.value = 0.6161405074962721;

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
    msg.setTimeStamp(0.7173514487733093);
    msg.setSource(64947U);
    msg.setSourceEntity(249U);
    msg.setDestination(910U);
    msg.setDestinationEntity(182U);
    msg.value = 0.9689915101578236;

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
    msg.setTimeStamp(0.565335800548694);
    msg.setSource(53277U);
    msg.setSourceEntity(88U);
    msg.setDestination(2449U);
    msg.setDestinationEntity(233U);
    msg.value = 0.6249171009099845;

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
    msg.setTimeStamp(0.029309680470084976);
    msg.setSource(54412U);
    msg.setSourceEntity(158U);
    msg.setDestination(50822U);
    msg.setDestinationEntity(117U);
    msg.value = 0.3285459978513975;

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
    msg.setTimeStamp(0.017737565743793482);
    msg.setSource(13288U);
    msg.setSourceEntity(250U);
    msg.setDestination(26725U);
    msg.setDestinationEntity(15U);
    msg.id = 80U;
    msg.zoom = 2U;
    msg.action = 209U;

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
    msg.setTimeStamp(0.33368517646259144);
    msg.setSource(11571U);
    msg.setSourceEntity(245U);
    msg.setDestination(55949U);
    msg.setDestinationEntity(105U);
    msg.id = 223U;
    msg.zoom = 60U;
    msg.action = 246U;

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
    msg.setTimeStamp(0.46537521371724155);
    msg.setSource(56890U);
    msg.setSourceEntity(196U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(189U);
    msg.id = 115U;
    msg.zoom = 68U;
    msg.action = 193U;

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
    msg.setTimeStamp(0.8231165567399764);
    msg.setSource(7622U);
    msg.setSourceEntity(196U);
    msg.setDestination(928U);
    msg.setDestinationEntity(10U);
    msg.id = 221U;
    msg.value = 0.5156568354719896;

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
    msg.setTimeStamp(0.2915780631724254);
    msg.setSource(48253U);
    msg.setSourceEntity(5U);
    msg.setDestination(38481U);
    msg.setDestinationEntity(54U);
    msg.id = 109U;
    msg.value = 0.21900899015226516;

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
    msg.setTimeStamp(0.4885900589426204);
    msg.setSource(47408U);
    msg.setSourceEntity(9U);
    msg.setDestination(9814U);
    msg.setDestinationEntity(75U);
    msg.id = 190U;
    msg.value = 0.6561625725904598;

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
    msg.setTimeStamp(0.6474323249368137);
    msg.setSource(18599U);
    msg.setSourceEntity(119U);
    msg.setDestination(40343U);
    msg.setDestinationEntity(205U);
    msg.id = 78U;
    msg.value = 0.8077720558295803;

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
    msg.setTimeStamp(0.6080858859742229);
    msg.setSource(24537U);
    msg.setSourceEntity(144U);
    msg.setDestination(41281U);
    msg.setDestinationEntity(142U);
    msg.id = 119U;
    msg.value = 0.10967562468576797;

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
    msg.setTimeStamp(0.8980392562227436);
    msg.setSource(63947U);
    msg.setSourceEntity(85U);
    msg.setDestination(63487U);
    msg.setDestinationEntity(175U);
    msg.id = 184U;
    msg.value = 0.6078500688928108;

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
    msg.setTimeStamp(0.506983006805066);
    msg.setSource(63325U);
    msg.setSourceEntity(219U);
    msg.setDestination(37970U);
    msg.setDestinationEntity(236U);
    msg.id = 119U;
    msg.angle = 0.7464873150970729;

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
    msg.setTimeStamp(0.7173852095303358);
    msg.setSource(28032U);
    msg.setSourceEntity(146U);
    msg.setDestination(53938U);
    msg.setDestinationEntity(100U);
    msg.id = 197U;
    msg.angle = 0.983453317999419;

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
    msg.setTimeStamp(0.8379938468424624);
    msg.setSource(61353U);
    msg.setSourceEntity(20U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(217U);
    msg.id = 70U;
    msg.angle = 0.6025261416253026;

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
    msg.setTimeStamp(0.8324396556432642);
    msg.setSource(44450U);
    msg.setSourceEntity(31U);
    msg.setDestination(2113U);
    msg.setDestinationEntity(33U);
    msg.op = 63U;
    msg.actions.assign("DGVSOJXASNXDFIVSYJMVZWYLGCDFJBDKHVINJOPLSEUP");

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
    msg.setTimeStamp(0.5453673355843107);
    msg.setSource(25464U);
    msg.setSourceEntity(240U);
    msg.setDestination(57669U);
    msg.setDestinationEntity(61U);
    msg.op = 153U;
    msg.actions.assign("PDVSYUMXPPKINFLLVADRIWCFSIBQFDNTMSIPRZYIQHUMANJCNGWRGXLUJJFKOCTRIQCSKHENRPTRHEKVWXZYUPANXFECVGQUO");

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
    msg.setTimeStamp(0.5705722555561356);
    msg.setSource(4986U);
    msg.setSourceEntity(184U);
    msg.setDestination(41844U);
    msg.setDestinationEntity(207U);
    msg.op = 120U;
    msg.actions.assign("WFHQAGYRUPVYSBJCQRNXSVTIIUMTFRKMCYICCADXWLBWFQPOBXNJFVXMQCHBDINEWOVGQFYDFCICPPUJENDGLVJWMITZYNDCWVLKTYRLTOPSHYMJZSRZPGVLTSKJTKGZAPTQSGMDRAURLZVPYZVGHSEGSFGEGUMUKVEWHBFSKQWDYNAHDZOWZHJBKXJKQKNUXNILAEMBU");

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
    msg.setTimeStamp(0.046755830393845677);
    msg.setSource(52144U);
    msg.setSourceEntity(226U);
    msg.setDestination(13697U);
    msg.setDestinationEntity(211U);
    msg.actions.assign("LMZTDBFBPRZYCFVAOOVUANIGEMCNMJHKHXEXAQASPREUHEUUGUTKTROFRLUFJSDCXQQOZDJLIYKJJUEIBUMKFFWOGHWZMVIRGZSNLUNBYNXARQDZYFWASBTDWVWIPMYEKYPOIOTGHWMRKBGXITIMDLKGNNKDRPCVJXZVXPQQFMHBXOKEWYNKEIPOSTZSDRLXJAJOTVBWYTYJZPAEQQFTRWSCPUWYVHHN");

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
    msg.setTimeStamp(0.08895071512464903);
    msg.setSource(8124U);
    msg.setSourceEntity(38U);
    msg.setDestination(7219U);
    msg.setDestinationEntity(226U);
    msg.actions.assign("VJJKDESBBGTNIQESNXQWHCHKPMBYWSMJVHYMFTGTVYCFYXNVGAPLSULPPDAHQIREMFMHZKOSXQQVCDPIFBIAKK");

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
    msg.setTimeStamp(0.25183488741512716);
    msg.setSource(59317U);
    msg.setSourceEntity(176U);
    msg.setDestination(54690U);
    msg.setDestinationEntity(74U);
    msg.actions.assign("KGWGADRPCCDYWTEVRDACHYIZZJITVDCWUFICBVJJMNMARSBRYRZMMCHOYATCPXTVICYBSEZXBNOFJKPYSUCPGOZVLOFDLFEVWBKJJEVZIFSDQEUZXQLFIGBKYQFPXLRKEMLHDQHGNIBULXGLMJQNJQWPENDULFVMSNNLTHMAUIKUSHEKBNSTXB");

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
    msg.setTimeStamp(0.0886492311805478);
    msg.setSource(35747U);
    msg.setSourceEntity(121U);
    msg.setDestination(23791U);
    msg.setDestinationEntity(158U);
    msg.button = 86U;
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
    msg.setTimeStamp(0.3450491809863606);
    msg.setSource(45311U);
    msg.setSourceEntity(228U);
    msg.setDestination(52069U);
    msg.setDestinationEntity(69U);
    msg.button = 101U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.030873059868570918);
    msg.setSource(54561U);
    msg.setSourceEntity(97U);
    msg.setDestination(50196U);
    msg.setDestinationEntity(43U);
    msg.button = 137U;
    msg.value = 139U;

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
    msg.setTimeStamp(0.6760828331896196);
    msg.setSource(34969U);
    msg.setSourceEntity(57U);
    msg.setDestination(29156U);
    msg.setDestinationEntity(242U);
    msg.op = 30U;
    msg.text.assign("EIXRAQFMLOETRLGRTQUTSUYWBNXFFDOKIACAIOVHACIVZDJZFFCIZZFLILHBGDITXNBEWWSILPUCJPXGECOLMYCBMKWRVWBTGNBBGLULTBSCGKDKKMRTYRAAWODPETLVUHXZVPHXSQQQCWIWSVZIAHMNFFKOUPTDJXRYSVUAQYGMWDONJUJCTMERQNJJHLPKNQPOFVEHEYCRDSFAHEXVHMHZKOMVANRSPUBKYNXGYDJWQDGSZ");

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
    msg.setTimeStamp(0.8068037681079598);
    msg.setSource(64870U);
    msg.setSourceEntity(7U);
    msg.setDestination(61947U);
    msg.setDestinationEntity(110U);
    msg.op = 27U;
    msg.text.assign("TTYZLBACWEFQZGEYRXRONAFDIQDBQFHSZNGCAFTWIXJCMFWXUZQXVOQKOOKVMSSWXPUKAJNQJBKWFZVKFLMEKRMYKQYEZGPPTLAYEXRPYMJHFAGOPZENBRDLZUXXKCLJKGTXIAJOIWFOBHECNRHNQSHUIIVUULVHBRLCFUYJMJVTMEGB");

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
    msg.setTimeStamp(0.024430708907243193);
    msg.setSource(63285U);
    msg.setSourceEntity(151U);
    msg.setDestination(24010U);
    msg.setDestinationEntity(20U);
    msg.op = 251U;
    msg.text.assign("LXGSXWMMGRPFLRSQYAGFHMOBDJQHGDVWDYFQLOCICDJFBIKJHAWUSARTLCAEJAUPCMBJZRIEPDKKVBMHLNTJHYUWKTKEECBNZZQISAOJENXOLDLZZMUQTRYPVTGUYDAQYNVMFBZOSDRNFECPVTVWXNHQFSWRPTJDWNIZXAXPMWCWGLUPQOUKOURZFOIUCWG");

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
    msg.setTimeStamp(0.7753622521354172);
    msg.setSource(6088U);
    msg.setSourceEntity(131U);
    msg.setDestination(62828U);
    msg.setDestinationEntity(47U);
    msg.op = 167U;
    msg.time_remain = 0.5716316789380511;
    msg.sched_time = 0.12241022313580685;

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
    msg.setTimeStamp(0.22287176995183755);
    msg.setSource(37680U);
    msg.setSourceEntity(219U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(239U);
    msg.op = 197U;
    msg.time_remain = 0.34515348086016373;
    msg.sched_time = 0.9229774375624562;

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
    msg.setTimeStamp(0.7877440317767984);
    msg.setSource(41456U);
    msg.setSourceEntity(7U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(82U);
    msg.op = 139U;
    msg.time_remain = 0.2525782205009418;
    msg.sched_time = 0.9760440799811887;

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
    msg.setTimeStamp(0.26435828707359454);
    msg.setSource(63319U);
    msg.setSourceEntity(233U);
    msg.setDestination(56306U);
    msg.setDestinationEntity(157U);
    msg.name.assign("QQEIUPLGLOPZZEGWKVAZBWUQPKTBRYEUXPVQMRDKZXSOXUZHQIMLEATZRBCAKLNSHHNDTXMMSCLNFPBGOMCFWYFNKYFEURQVINSKTCXHOSFFZHLOGWHHDYGJRQVZJKFTWYPHMVXEVIRHCLVCSGWBRAEIQDXVEJWJTYDMDTJDWYHMAOKLQPENIAVWJUJCT");
    msg.op = 157U;
    msg.sched_time = 0.09215309624268475;

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
    msg.setTimeStamp(0.48762365527031004);
    msg.setSource(39791U);
    msg.setSourceEntity(58U);
    msg.setDestination(49605U);
    msg.setDestinationEntity(45U);
    msg.name.assign("KIJBRLDYYTRJRYCDVCAOSBZQAVPCWJLNUGVGHZPCUSTIUIXZDWYKBMKWIJQTKVRNNTBMOIZZBTPLXGRCOOEGLNXJHFSEONHMOAFYWNXCTTUQVDKEEIZNWEMCAIRXAHKKSQUYMQDPZQBWCMUAEONGUZKJPGQASFLOKSBYQGPFTBSJMNSHHBRRJHQOMVFRTDWAPXSMEEGGIUZVCHSXBIPEATXLHUIFFHJVEJLUMPCYGYD");
    msg.op = 48U;
    msg.sched_time = 0.9708524053494807;

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
    msg.setTimeStamp(0.3862526606288177);
    msg.setSource(40608U);
    msg.setSourceEntity(38U);
    msg.setDestination(39304U);
    msg.setDestinationEntity(124U);
    msg.name.assign("JATSMPWISKHLUFFSNXBUSUJFXKBGREQXBFHAETXOBMAOGTIVCXIYMDBMNBUPIXAEHTLPTVYRKKIQHYACNAGYZQJCIIYQHYGNKVYVCQVTQSLOVBWOLANGNWDXPEGGUWMKZFMBCCPNTVHZUKPRCV");
    msg.op = 231U;
    msg.sched_time = 0.21178684512295187;

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
    msg.setTimeStamp(0.0705998114338926);
    msg.setSource(28137U);
    msg.setSourceEntity(221U);
    msg.setDestination(6432U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.0397272680650973);
    msg.setSource(34373U);
    msg.setSourceEntity(224U);
    msg.setDestination(30938U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.47060176736288617);
    msg.setSource(26681U);
    msg.setSourceEntity(118U);
    msg.setDestination(25803U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.1670722467987178);
    msg.setSource(15473U);
    msg.setSourceEntity(125U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(146U);
    msg.name.assign("AHCZDSWEHNVRYPEVSFJVPDVPLZJBHACFPQNBODAAUQQTEOPMSSGOIKZYNKCXGUHBUYSUSHJCAFQQIGYEMJNLKISAGFMKLU");
    msg.state = 92U;

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
    msg.setTimeStamp(0.45644033851191546);
    msg.setSource(18942U);
    msg.setSourceEntity(180U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(143U);
    msg.name.assign("SRYKJCSCXROETYLBCGDOFXXIYMEDMOTUVOJOHEM");
    msg.state = 130U;

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
    msg.setTimeStamp(0.48912209496798364);
    msg.setSource(37706U);
    msg.setSourceEntity(109U);
    msg.setDestination(19012U);
    msg.setDestinationEntity(132U);
    msg.name.assign("HGGZUQRJOALKJNBOXBDSCSKVCVXYZFFXXBSBAKANZMNBEDTXGILHDBFGEKVMQPFEWFXMMYLOOAVNYRZRRMYYIDEQVJDCHNNSEYGHPUTLYUJJABSWAOQRICTEMZPZSZOWCJWLAJKIUGCTTSVUVYMKUBXPFFNDPPVMTROQWFPILCGIJIJTAWLOHUYDGWCX");
    msg.state = 132U;

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
    msg.setTimeStamp(0.79987984228485);
    msg.setSource(60781U);
    msg.setSourceEntity(133U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(34U);
    msg.name.assign("XBYEJKPDJCR");
    msg.value = 199U;

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
    msg.setTimeStamp(0.1799006451186984);
    msg.setSource(38800U);
    msg.setSourceEntity(226U);
    msg.setDestination(37885U);
    msg.setDestinationEntity(7U);
    msg.name.assign("QHRSBXGLKXDWRRKDUWVXBQSDHXXLBAQOPHMCSFCUYBOGSTCRFESPYHIZENIACRGAWFVLRCFQSNOAVZHNUMTNJQZQBTYPMY");
    msg.value = 24U;

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
    msg.setTimeStamp(0.7751332041243092);
    msg.setSource(51589U);
    msg.setSourceEntity(57U);
    msg.setDestination(46098U);
    msg.setDestinationEntity(49U);
    msg.name.assign("THIENGRMCSEITQXLAVSSKXLKKOGZJNSIYCCNJZFNZXNMUPYQFMYGFEJQJSTRSAKDFKTPXGFUFZTWCBOTGNEQRJSQHFUKYYBGPDUUJYVKBGMIUCONDZKI");
    msg.value = 186U;

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
    msg.setTimeStamp(0.8986114419079523);
    msg.setSource(38339U);
    msg.setSourceEntity(245U);
    msg.setDestination(32985U);
    msg.setDestinationEntity(144U);
    msg.name.assign("CFUDBQHKFKKXBGMFQWYT");

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
    msg.setTimeStamp(0.2500063998744312);
    msg.setSource(52727U);
    msg.setSourceEntity(217U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ODVUVSLHDSULHGHVTVJTDOWLLDAIHCDPANKMSZEXTBFXYULBOEDEUMGMAVGJSWNQGCWNUWXHWFOHQHNIUYFRPJNYNAPMWEJYPRQZHILIXDLOMSRCZKOBCSRTCLNUJSTXUJMHEDBTYKBITG");

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
    msg.setTimeStamp(0.5059275873454187);
    msg.setSource(39098U);
    msg.setSourceEntity(65U);
    msg.setDestination(54811U);
    msg.setDestinationEntity(240U);
    msg.name.assign("EDIQIORNFGTPCEN");

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
    msg.setTimeStamp(0.8744730797837263);
    msg.setSource(54694U);
    msg.setSourceEntity(49U);
    msg.setDestination(26209U);
    msg.setDestinationEntity(150U);
    msg.name.assign("UYTLAGDOOXRTWUGGCFQPKHNUVSJVRHJICYBFNIECWYNKWTAKLGVBRCEBPVAMPMOGVVRSSXMASURMSDASBGLZLWHJKDSQQAJJXTQICCONYXZFRXVWJUPYHTORYMDPEMQRHK");
    msg.value = 69U;

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
    msg.setTimeStamp(0.9374872898538962);
    msg.setSource(1339U);
    msg.setSourceEntity(92U);
    msg.setDestination(37854U);
    msg.setDestinationEntity(20U);
    msg.name.assign("NFYKVTXMAJIGBFIMAERMCKXDSZEVFGUPYEJNPSTSLOWBGAADRGNJHYVRJUKVQQTPQWDNKNCPNLCBJIJYZZNUQWZHEVPZALMTPVZHEWUOZBIXBCNSJOTBXXUDOYWIMOHCBCBPNQGVLWAKFERWLQHIEFKZRCDXHBQYCLDDSRKYLFWCMSYUKLMVJRGAREUXWSONGVUJSKLIIWHHYURTATUQMHPGQOEOPXQIT");
    msg.value = 238U;

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
    msg.setTimeStamp(0.15220517943080691);
    msg.setSource(29717U);
    msg.setSourceEntity(165U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(205U);
    msg.name.assign("BVTOZMFTUMEWKHRMQXABFIIVCEYAKDOULONVVGZSHHVYVAWLSJOREXNAEBQKGTJUORZXKYZADNKDGJQNKGNZGPZLBYWRHDREWKCOBVAUQWIDXJPBPFPCNLOXRJTZDYXNJURBWJQTMFVBFIIICUSDXDRNEMYACSLESCPNLHVKBIOOCJIFGZBUKETIOALUURFSYZ");
    msg.value = 161U;

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
    msg.setTimeStamp(0.2742634150890225);
    msg.setSource(12992U);
    msg.setSourceEntity(206U);
    msg.setDestination(40733U);
    msg.setDestinationEntity(106U);
    msg.id = 236U;
    msg.period = 215723623U;
    msg.duty_cycle = 1251942555U;

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
    msg.setTimeStamp(0.4499065541604731);
    msg.setSource(34637U);
    msg.setSourceEntity(237U);
    msg.setDestination(44333U);
    msg.setDestinationEntity(25U);
    msg.id = 112U;
    msg.period = 268890997U;
    msg.duty_cycle = 1662001992U;

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
    msg.setTimeStamp(0.5957460114357281);
    msg.setSource(29474U);
    msg.setSourceEntity(66U);
    msg.setDestination(20111U);
    msg.setDestinationEntity(248U);
    msg.id = 36U;
    msg.period = 260775738U;
    msg.duty_cycle = 3504768840U;

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
    msg.setTimeStamp(0.5422474420767629);
    msg.setSource(2255U);
    msg.setSourceEntity(102U);
    msg.setDestination(50373U);
    msg.setDestinationEntity(152U);
    msg.id = 111U;
    msg.period = 721893476U;
    msg.duty_cycle = 2437761082U;

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
    msg.setTimeStamp(0.5135022611963976);
    msg.setSource(48833U);
    msg.setSourceEntity(91U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(147U);
    msg.id = 22U;
    msg.period = 1212935627U;
    msg.duty_cycle = 1266838063U;

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
    msg.setTimeStamp(0.42658604416336865);
    msg.setSource(6602U);
    msg.setSourceEntity(241U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(28U);
    msg.id = 72U;
    msg.period = 3339417191U;
    msg.duty_cycle = 642075773U;

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
    msg.setTimeStamp(0.7789526869754099);
    msg.setSource(6004U);
    msg.setSourceEntity(124U);
    msg.setDestination(46422U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.7710561258730187;
    msg.lon = 0.22474294476451995;
    msg.height = 0.5360993132858844;
    msg.x = 0.22247287785335723;
    msg.y = 0.16425818688565907;
    msg.z = 0.5002033017754938;
    msg.phi = 0.398837586620751;
    msg.theta = 0.6523296360198163;
    msg.psi = 0.06089252656552635;
    msg.u = 0.9585299857358495;
    msg.v = 0.30772971376753266;
    msg.w = 0.26353810493096985;
    msg.vx = 0.22494144335610233;
    msg.vy = 0.7162926924380826;
    msg.vz = 0.6820800747841339;
    msg.p = 0.23019957511010647;
    msg.q = 0.17551520928550401;
    msg.r = 0.2558758520584392;
    msg.depth = 0.06437356958395879;
    msg.alt = 0.34686796348184956;

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
    msg.setTimeStamp(0.1399846791149243);
    msg.setSource(64141U);
    msg.setSourceEntity(132U);
    msg.setDestination(37334U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.6260891280285931;
    msg.lon = 0.032052793931902857;
    msg.height = 0.652244756038668;
    msg.x = 0.6534062249174667;
    msg.y = 0.6413837925314819;
    msg.z = 0.005840756528172175;
    msg.phi = 0.3273126488791671;
    msg.theta = 0.002878333984046022;
    msg.psi = 0.9294205474842643;
    msg.u = 0.989689859965899;
    msg.v = 0.18112978413870173;
    msg.w = 0.3121491461865711;
    msg.vx = 0.6473326685299995;
    msg.vy = 0.3357649309227869;
    msg.vz = 0.20948585655054952;
    msg.p = 0.2922753041910928;
    msg.q = 0.7716129469661999;
    msg.r = 0.840957584332614;
    msg.depth = 0.7599342085544046;
    msg.alt = 0.8351703145697756;

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
    msg.setTimeStamp(0.4884756918517662);
    msg.setSource(57232U);
    msg.setSourceEntity(109U);
    msg.setDestination(4490U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.02885602247339658;
    msg.lon = 0.5101559446086354;
    msg.height = 0.8888952547437017;
    msg.x = 0.20690053652915452;
    msg.y = 0.5078038661265325;
    msg.z = 0.09750863047965608;
    msg.phi = 0.5285822335521162;
    msg.theta = 0.5693056450567069;
    msg.psi = 0.3303721750361318;
    msg.u = 0.8359339167251105;
    msg.v = 0.3755725075770884;
    msg.w = 0.9848812026507694;
    msg.vx = 0.9354124719164003;
    msg.vy = 0.9690745992520521;
    msg.vz = 0.5975459252072705;
    msg.p = 0.7568353981976488;
    msg.q = 0.3727935106283299;
    msg.r = 0.7517478419675087;
    msg.depth = 0.2311767908664657;
    msg.alt = 0.9126805779474891;

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
    msg.setTimeStamp(0.9461901004775647);
    msg.setSource(30586U);
    msg.setSourceEntity(121U);
    msg.setDestination(12052U);
    msg.setDestinationEntity(117U);
    msg.x = 0.27738923960982365;
    msg.y = 0.9290116645606468;
    msg.z = 0.23001365043918898;

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
    msg.setTimeStamp(0.00022336421164592668);
    msg.setSource(18983U);
    msg.setSourceEntity(166U);
    msg.setDestination(24497U);
    msg.setDestinationEntity(157U);
    msg.x = 0.8059289464897865;
    msg.y = 0.6441541330089108;
    msg.z = 0.26782755898943167;

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
    msg.setTimeStamp(0.4689361258138912);
    msg.setSource(53210U);
    msg.setSourceEntity(128U);
    msg.setDestination(57711U);
    msg.setDestinationEntity(218U);
    msg.x = 0.7666200286559386;
    msg.y = 0.8260582206605978;
    msg.z = 0.6261917192015629;

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
    msg.setTimeStamp(0.5174086292233937);
    msg.setSource(42802U);
    msg.setSourceEntity(14U);
    msg.setDestination(55694U);
    msg.setDestinationEntity(40U);
    msg.value = 0.08995168604097248;

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
    msg.setTimeStamp(0.5136659531219141);
    msg.setSource(65126U);
    msg.setSourceEntity(193U);
    msg.setDestination(55327U);
    msg.setDestinationEntity(170U);
    msg.value = 0.050638532859857754;

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
    msg.setTimeStamp(0.45389351096789443);
    msg.setSource(17379U);
    msg.setSourceEntity(183U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9228285663200254;

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
    msg.setTimeStamp(0.45816218301884126);
    msg.setSource(21994U);
    msg.setSourceEntity(28U);
    msg.setDestination(48109U);
    msg.setDestinationEntity(141U);
    msg.value = 0.3777545585908564;

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
    msg.setTimeStamp(0.3358195975186038);
    msg.setSource(23295U);
    msg.setSourceEntity(99U);
    msg.setDestination(26226U);
    msg.setDestinationEntity(225U);
    msg.value = 0.442353950209032;

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
    msg.setTimeStamp(0.4151297881401116);
    msg.setSource(16155U);
    msg.setSourceEntity(114U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(229U);
    msg.value = 0.0022906636610446895;

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
    msg.setTimeStamp(0.370970540935029);
    msg.setSource(30140U);
    msg.setSourceEntity(143U);
    msg.setDestination(40709U);
    msg.setDestinationEntity(236U);
    msg.x = 0.8870027401533759;
    msg.y = 0.11694314829056252;
    msg.z = 0.376898108502425;
    msg.phi = 0.7442379414550931;
    msg.theta = 0.20906006826123336;
    msg.psi = 0.6950205301638464;
    msg.p = 0.7893637992089608;
    msg.q = 0.4629159486812007;
    msg.r = 0.5334191720135978;
    msg.u = 0.4659168954802979;
    msg.v = 0.41051689947484515;
    msg.w = 0.8286159708864621;
    msg.bias_psi = 0.2925425723844517;
    msg.bias_r = 0.6404111077276358;

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
    msg.setTimeStamp(0.048287812815252185);
    msg.setSource(60182U);
    msg.setSourceEntity(121U);
    msg.setDestination(12317U);
    msg.setDestinationEntity(174U);
    msg.x = 0.37033195125895035;
    msg.y = 0.9802117577037991;
    msg.z = 0.7126198168876613;
    msg.phi = 0.7825866525861676;
    msg.theta = 0.7204939530529589;
    msg.psi = 0.07251664511682065;
    msg.p = 0.20594806480179773;
    msg.q = 0.628640267167528;
    msg.r = 0.9080790068142576;
    msg.u = 0.07444675178383131;
    msg.v = 0.33617463270933545;
    msg.w = 0.465713373753453;
    msg.bias_psi = 0.7984702722474992;
    msg.bias_r = 0.29541627277299476;

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
    msg.setTimeStamp(0.8179582080468604);
    msg.setSource(106U);
    msg.setSourceEntity(242U);
    msg.setDestination(7477U);
    msg.setDestinationEntity(38U);
    msg.x = 0.6465744884057635;
    msg.y = 0.002008780144261868;
    msg.z = 0.6621262952706117;
    msg.phi = 0.8906099086478636;
    msg.theta = 0.7998470272801955;
    msg.psi = 0.21079502268652672;
    msg.p = 0.7872028834557993;
    msg.q = 0.1467596702718773;
    msg.r = 0.43323159079941453;
    msg.u = 0.10060940079648184;
    msg.v = 0.8628837306809246;
    msg.w = 0.11298186623048356;
    msg.bias_psi = 0.6350903787882123;
    msg.bias_r = 0.17880159515114002;

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
    msg.setTimeStamp(0.539771561127715);
    msg.setSource(10084U);
    msg.setSourceEntity(206U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.8467660055696007;
    msg.bias_r = 0.7662095256305315;
    msg.cog = 0.7966056227428239;
    msg.cyaw = 0.09336639659764234;
    msg.lbl_rej_level = 0.8252625749180315;
    msg.gps_rej_level = 0.021123984099865822;
    msg.custom_x = 0.6680490933711449;
    msg.custom_y = 0.6574432872745727;
    msg.custom_z = 0.785047119085363;

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
    msg.setTimeStamp(0.8816857809004075);
    msg.setSource(54449U);
    msg.setSourceEntity(115U);
    msg.setDestination(3225U);
    msg.setDestinationEntity(76U);
    msg.bias_psi = 0.9409997974794236;
    msg.bias_r = 0.578406058495641;
    msg.cog = 0.3523295012324501;
    msg.cyaw = 0.8029189605863613;
    msg.lbl_rej_level = 0.4796690637045855;
    msg.gps_rej_level = 0.19415361749418658;
    msg.custom_x = 0.47235309999514696;
    msg.custom_y = 0.4398232948538492;
    msg.custom_z = 0.18279111219531707;

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
    msg.setTimeStamp(0.03059341539203242);
    msg.setSource(49876U);
    msg.setSourceEntity(177U);
    msg.setDestination(51080U);
    msg.setDestinationEntity(243U);
    msg.bias_psi = 0.2433044263681311;
    msg.bias_r = 0.01577924416180876;
    msg.cog = 0.37999087522412234;
    msg.cyaw = 0.6460672628267837;
    msg.lbl_rej_level = 0.5349349925751515;
    msg.gps_rej_level = 0.6225298334086442;
    msg.custom_x = 0.3978396382734988;
    msg.custom_y = 0.10315853885453574;
    msg.custom_z = 0.15389598829697848;

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
    msg.setTimeStamp(0.8634894321351549);
    msg.setSource(52093U);
    msg.setSourceEntity(2U);
    msg.setDestination(24438U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.03105512255424936;
    msg.reason = 172U;

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
    msg.setTimeStamp(0.7875679374115945);
    msg.setSource(23243U);
    msg.setSourceEntity(11U);
    msg.setDestination(17454U);
    msg.setDestinationEntity(175U);
    msg.utc_time = 0.5870729560305014;
    msg.reason = 182U;

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
    msg.setTimeStamp(0.156083107211741);
    msg.setSource(12488U);
    msg.setSourceEntity(32U);
    msg.setDestination(45313U);
    msg.setDestinationEntity(177U);
    msg.utc_time = 0.5730810248768089;
    msg.reason = 76U;

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
    msg.setTimeStamp(0.5024184987640268);
    msg.setSource(50504U);
    msg.setSourceEntity(222U);
    msg.setDestination(28050U);
    msg.setDestinationEntity(120U);
    msg.id = 47U;
    msg.range = 0.5200641252224287;
    msg.acceptance = 133U;

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
    msg.setTimeStamp(0.39077212230888236);
    msg.setSource(60271U);
    msg.setSourceEntity(61U);
    msg.setDestination(26108U);
    msg.setDestinationEntity(194U);
    msg.id = 95U;
    msg.range = 0.09691254846768571;
    msg.acceptance = 219U;

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
    msg.setTimeStamp(0.07800263089650072);
    msg.setSource(61294U);
    msg.setSourceEntity(21U);
    msg.setDestination(1801U);
    msg.setDestinationEntity(194U);
    msg.id = 147U;
    msg.range = 0.23784949601589678;
    msg.acceptance = 14U;

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
    msg.setTimeStamp(0.588375340414575);
    msg.setSource(25497U);
    msg.setSourceEntity(118U);
    msg.setDestination(2318U);
    msg.setDestinationEntity(202U);
    msg.type = 89U;
    msg.reason = 77U;
    msg.value = 0.10924029082650999;
    msg.timestep = 0.08010320524250669;

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
    msg.setTimeStamp(0.9927120727329374);
    msg.setSource(10170U);
    msg.setSourceEntity(29U);
    msg.setDestination(40086U);
    msg.setDestinationEntity(229U);
    msg.type = 14U;
    msg.reason = 242U;
    msg.value = 0.7436867663743664;
    msg.timestep = 0.13713848929399786;

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
    msg.setTimeStamp(0.3815019812171456);
    msg.setSource(60522U);
    msg.setSourceEntity(250U);
    msg.setDestination(48777U);
    msg.setDestinationEntity(174U);
    msg.type = 35U;
    msg.reason = 101U;
    msg.value = 0.325402367358383;
    msg.timestep = 0.9480768802643434;

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
    msg.setTimeStamp(0.17633096639296442);
    msg.setSource(42154U);
    msg.setSourceEntity(26U);
    msg.setDestination(1470U);
    msg.setDestinationEntity(53U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UZFJSFXLROZYALIZWQOBVEPWPXYSWDTQXARTJDTEPMCYDCBGMUSBCLORKDTBNNWFQXQINXEJVURQNJUCLAQVXBARGAKBYTIDSHJMPNUMKIYKQMLPIMEVDYHWJNOBQDSZGVOARTEPIKFUYGDCAUXCVIIRISLWHHOMNSWZOEOSHETCMOKVDGBFYIUGKJGLSZK");
    tmp_msg_0.lat = 0.8431235180421734;
    tmp_msg_0.lon = 0.7406236326940175;
    tmp_msg_0.depth = 0.045514683045074;
    tmp_msg_0.query_channel = 112U;
    tmp_msg_0.reply_channel = 182U;
    tmp_msg_0.transponder_delay = 161U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6040305757932365;
    msg.y = 0.01481712410325331;
    msg.var_x = 0.3533142062533263;
    msg.var_y = 0.7889354826133852;
    msg.distance = 0.27960165202096066;

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
    msg.setTimeStamp(0.3597742179578425);
    msg.setSource(18929U);
    msg.setSourceEntity(133U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(208U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NWKILHGVVYKGRDPTCUQDTLEZITBZBHPSFXRLDQLFYOVPWJYJYXTYCYSWNDMMRGBAFPVEUFSKU");
    tmp_msg_0.lat = 0.13067817176194396;
    tmp_msg_0.lon = 0.03656166162448071;
    tmp_msg_0.depth = 0.38842416939989344;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 28U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2689275460124766;
    msg.y = 0.4331503096342838;
    msg.var_x = 0.9747389611572015;
    msg.var_y = 0.4641719939702307;
    msg.distance = 0.38079922405480826;

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
    msg.setTimeStamp(0.5188060664657941);
    msg.setSource(15950U);
    msg.setSourceEntity(162U);
    msg.setDestination(51594U);
    msg.setDestinationEntity(139U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OEGOVCNAZXCCJRQYJVOHVFKORZTPYLFSBTSPUXUVIHYFRBHKZHVAVBWNQWAU");
    tmp_msg_0.lat = 0.5339719176085413;
    tmp_msg_0.lon = 0.35709638260562515;
    tmp_msg_0.depth = 0.6934164929911101;
    tmp_msg_0.query_channel = 89U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 10U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.14709792271428512;
    msg.y = 0.8044079472616303;
    msg.var_x = 0.7213585196088502;
    msg.var_y = 0.14705980210538627;
    msg.distance = 0.46340048774398135;

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
    msg.setTimeStamp(0.31904310192817165);
    msg.setSource(64781U);
    msg.setSourceEntity(102U);
    msg.setDestination(39956U);
    msg.setDestinationEntity(161U);
    msg.state = 10U;

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
    msg.setTimeStamp(0.216805124475008);
    msg.setSource(6005U);
    msg.setSourceEntity(45U);
    msg.setDestination(3024U);
    msg.setDestinationEntity(57U);
    msg.state = 97U;

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
    msg.setTimeStamp(0.5181312370133232);
    msg.setSource(15421U);
    msg.setSourceEntity(122U);
    msg.setDestination(43605U);
    msg.setDestinationEntity(104U);
    msg.state = 254U;

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
    msg.setTimeStamp(0.47683187381100944);
    msg.setSource(62596U);
    msg.setSourceEntity(42U);
    msg.setDestination(17350U);
    msg.setDestinationEntity(87U);
    msg.x = 0.48755925878300077;
    msg.y = 0.6822215982457472;
    msg.z = 0.7877414028607204;

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
    msg.setTimeStamp(0.9483882902176314);
    msg.setSource(59249U);
    msg.setSourceEntity(9U);
    msg.setDestination(8549U);
    msg.setDestinationEntity(2U);
    msg.x = 0.6409516145673279;
    msg.y = 0.10407308991119713;
    msg.z = 0.10155717292611655;

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
    msg.setTimeStamp(0.9186325432790978);
    msg.setSource(59348U);
    msg.setSourceEntity(138U);
    msg.setDestination(11500U);
    msg.setDestinationEntity(43U);
    msg.x = 0.31640925270542475;
    msg.y = 0.6893466789947718;
    msg.z = 0.6879692507982395;

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
    msg.setTimeStamp(0.5671002031887072);
    msg.setSource(41347U);
    msg.setSourceEntity(44U);
    msg.setDestination(18876U);
    msg.setDestinationEntity(150U);
    msg.value = 0.8743737989498754;

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
    msg.setTimeStamp(0.5388604759562474);
    msg.setSource(24192U);
    msg.setSourceEntity(242U);
    msg.setDestination(23980U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9636048359781085;

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
    msg.setTimeStamp(0.004156015906399468);
    msg.setSource(40247U);
    msg.setSourceEntity(211U);
    msg.setDestination(47670U);
    msg.setDestinationEntity(112U);
    msg.value = 0.2935242685916769;

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
    msg.setTimeStamp(0.8409749131867376);
    msg.setSource(44484U);
    msg.setSourceEntity(14U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(219U);
    msg.value = 0.21319659867935992;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.259537254713999);
    msg.setSource(10745U);
    msg.setSourceEntity(210U);
    msg.setDestination(3745U);
    msg.setDestinationEntity(227U);
    msg.value = 0.06784721885607503;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.020602896087609235);
    msg.setSource(43686U);
    msg.setSourceEntity(134U);
    msg.setDestination(44838U);
    msg.setDestinationEntity(188U);
    msg.value = 0.5890603826537719;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.4633832279832083);
    msg.setSource(46128U);
    msg.setSourceEntity(79U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(216U);
    msg.value = 0.407337010590061;
    msg.speed_units = 126U;

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
    msg.setTimeStamp(0.9012471839313905);
    msg.setSource(9180U);
    msg.setSourceEntity(16U);
    msg.setDestination(50989U);
    msg.setDestinationEntity(156U);
    msg.value = 0.17964867791687034;
    msg.speed_units = 133U;

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
    msg.setTimeStamp(0.8748356243113392);
    msg.setSource(47323U);
    msg.setSourceEntity(52U);
    msg.setDestination(34156U);
    msg.setDestinationEntity(40U);
    msg.value = 0.948308661932856;
    msg.speed_units = 143U;

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
    msg.setTimeStamp(0.025510425059182995);
    msg.setSource(38382U);
    msg.setSourceEntity(247U);
    msg.setDestination(11699U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7458029068516845;

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
    msg.setTimeStamp(0.9323660152739286);
    msg.setSource(52845U);
    msg.setSourceEntity(119U);
    msg.setDestination(37495U);
    msg.setDestinationEntity(190U);
    msg.value = 0.9627479365001133;

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
    msg.setTimeStamp(0.9748157027571115);
    msg.setSource(59046U);
    msg.setSourceEntity(130U);
    msg.setDestination(23882U);
    msg.setDestinationEntity(199U);
    msg.value = 0.13790240599534898;

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
    msg.setTimeStamp(0.8387404446297938);
    msg.setSource(38443U);
    msg.setSourceEntity(46U);
    msg.setDestination(737U);
    msg.setDestinationEntity(144U);
    msg.value = 0.515551370914774;

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
    msg.setTimeStamp(0.5382168383529687);
    msg.setSource(52568U);
    msg.setSourceEntity(71U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(240U);
    msg.value = 0.22053191450419485;

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
    msg.setTimeStamp(0.01003592454790081);
    msg.setSource(23997U);
    msg.setSourceEntity(184U);
    msg.setDestination(20536U);
    msg.setDestinationEntity(159U);
    msg.value = 0.21855694594240171;

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
    msg.setTimeStamp(0.1861410600465424);
    msg.setSource(14965U);
    msg.setSourceEntity(203U);
    msg.setDestination(10065U);
    msg.setDestinationEntity(224U);
    msg.value = 0.9284719811181453;

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
    msg.setTimeStamp(0.866084307677281);
    msg.setSource(46227U);
    msg.setSourceEntity(28U);
    msg.setDestination(41396U);
    msg.setDestinationEntity(58U);
    msg.value = 0.01721455702241592;

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
    msg.setTimeStamp(0.5131522192729513);
    msg.setSource(35290U);
    msg.setSourceEntity(72U);
    msg.setDestination(59271U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5402466129471863;

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
    msg.setTimeStamp(0.5042801635385422);
    msg.setSource(26529U);
    msg.setSourceEntity(185U);
    msg.setDestination(36341U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 3261737290U;
    msg.start_lat = 0.9275016562653691;
    msg.start_lon = 0.8621408397702742;
    msg.start_z = 0.7288230459414168;
    msg.start_z_units = 111U;
    msg.end_lat = 0.7066057179001826;
    msg.end_lon = 0.22884249208172036;
    msg.end_z = 0.9495541562052906;
    msg.end_z_units = 24U;
    msg.speed = 0.8661999329658344;
    msg.speed_units = 32U;
    msg.lradius = 0.8570687639481432;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.8473369917113396);
    msg.setSource(16015U);
    msg.setSourceEntity(128U);
    msg.setDestination(39801U);
    msg.setDestinationEntity(54U);
    msg.path_ref = 2255751145U;
    msg.start_lat = 0.3801674255213544;
    msg.start_lon = 0.2727265829223493;
    msg.start_z = 0.6551101949951906;
    msg.start_z_units = 103U;
    msg.end_lat = 0.3802151041305366;
    msg.end_lon = 0.7446372453924163;
    msg.end_z = 0.7000886891947103;
    msg.end_z_units = 174U;
    msg.speed = 0.7898135885312917;
    msg.speed_units = 76U;
    msg.lradius = 0.9787674549523238;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.17586580535352392);
    msg.setSource(20200U);
    msg.setSourceEntity(68U);
    msg.setDestination(49461U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 1081342800U;
    msg.start_lat = 0.705453410931487;
    msg.start_lon = 0.9959434074948178;
    msg.start_z = 0.795758578378755;
    msg.start_z_units = 64U;
    msg.end_lat = 0.31351905483040154;
    msg.end_lon = 0.48353777563982725;
    msg.end_z = 0.19664113688072404;
    msg.end_z_units = 149U;
    msg.speed = 0.9785412911907618;
    msg.speed_units = 65U;
    msg.lradius = 0.28827880302489306;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.8726649959537643);
    msg.setSource(42072U);
    msg.setSourceEntity(230U);
    msg.setDestination(40230U);
    msg.setDestinationEntity(176U);
    msg.x = 0.0578509143387943;
    msg.y = 0.8687342528694572;
    msg.z = 0.2430000548934247;
    msg.k = 0.15733553079745832;
    msg.m = 0.5633777384183261;
    msg.n = 0.5856767059630396;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.8883368439634971);
    msg.setSource(38856U);
    msg.setSourceEntity(0U);
    msg.setDestination(37098U);
    msg.setDestinationEntity(187U);
    msg.x = 0.9961196189501903;
    msg.y = 0.08566531167093061;
    msg.z = 0.16879167992658695;
    msg.k = 0.893543006572373;
    msg.m = 0.5008966385891704;
    msg.n = 0.7906460616002479;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.6863084838169825);
    msg.setSource(2690U);
    msg.setSourceEntity(62U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(113U);
    msg.x = 0.5631491777268308;
    msg.y = 0.37222520822236904;
    msg.z = 0.4847702758892076;
    msg.k = 0.06093505257178922;
    msg.m = 0.34547476088213536;
    msg.n = 0.4554973785266154;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.09883392676320235);
    msg.setSource(46451U);
    msg.setSourceEntity(2U);
    msg.setDestination(46381U);
    msg.setDestinationEntity(242U);
    msg.value = 0.30100928757752543;

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
    msg.setTimeStamp(0.21025637173148304);
    msg.setSource(58240U);
    msg.setSourceEntity(166U);
    msg.setDestination(20078U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7704532855914457;

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
    msg.setTimeStamp(0.8711621492093939);
    msg.setSource(41739U);
    msg.setSourceEntity(161U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(194U);
    msg.value = 0.5094422085931309;

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
    msg.setTimeStamp(0.0712128101665288);
    msg.setSource(32337U);
    msg.setSourceEntity(21U);
    msg.setDestination(43886U);
    msg.setDestinationEntity(195U);
    msg.u = 0.3025612069208087;
    msg.v = 0.9088880312843846;
    msg.w = 0.959487100629807;
    msg.p = 0.048697573023052554;
    msg.q = 0.4297517525633504;
    msg.r = 0.3514538665476561;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.9487553524584836);
    msg.setSource(47897U);
    msg.setSourceEntity(62U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(28U);
    msg.u = 0.7443106238339401;
    msg.v = 0.009206673068364313;
    msg.w = 0.6525180363116048;
    msg.p = 0.8736970939360876;
    msg.q = 0.5785786299065251;
    msg.r = 0.8994690667900154;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.7154211115936149);
    msg.setSource(12356U);
    msg.setSourceEntity(214U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(211U);
    msg.u = 0.594424562761278;
    msg.v = 0.08650824102499599;
    msg.w = 0.5463740660364589;
    msg.p = 0.363758352864083;
    msg.q = 0.5099065857460717;
    msg.r = 0.1514177722892316;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.48428147163912494);
    msg.setSource(53593U);
    msg.setSourceEntity(248U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(124U);
    msg.path_ref = 2102595403U;
    msg.start_lat = 0.11685707374175691;
    msg.start_lon = 0.6427356134309509;
    msg.start_z = 0.3645507451893478;
    msg.start_z_units = 155U;
    msg.end_lat = 0.23492862670353587;
    msg.end_lon = 0.8910680375791246;
    msg.end_z = 0.73105870414895;
    msg.end_z_units = 66U;
    msg.lradius = 0.04144299492513781;
    msg.flags = 66U;
    msg.x = 0.36122991873672383;
    msg.y = 0.5406183749527456;
    msg.z = 0.6372140070600063;
    msg.vx = 0.7243301338995103;
    msg.vy = 0.27278921304025383;
    msg.vz = 0.7573840628021781;
    msg.course_error = 0.36687401169125766;
    msg.eta = 9515U;

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
    msg.setTimeStamp(0.7075571267749354);
    msg.setSource(64091U);
    msg.setSourceEntity(82U);
    msg.setDestination(43122U);
    msg.setDestinationEntity(108U);
    msg.path_ref = 2627244735U;
    msg.start_lat = 0.5061455180098602;
    msg.start_lon = 0.830114629318542;
    msg.start_z = 0.6863070142284176;
    msg.start_z_units = 39U;
    msg.end_lat = 0.03432723980965824;
    msg.end_lon = 0.6282367715761237;
    msg.end_z = 0.028671732049371235;
    msg.end_z_units = 201U;
    msg.lradius = 0.6947815278562745;
    msg.flags = 90U;
    msg.x = 0.3214724491771077;
    msg.y = 0.5980903382194839;
    msg.z = 0.06370490475699364;
    msg.vx = 0.02173147593752256;
    msg.vy = 0.26552862773381525;
    msg.vz = 0.7328343910456641;
    msg.course_error = 0.777862352333681;
    msg.eta = 5505U;

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
    msg.setTimeStamp(0.5109090204795594);
    msg.setSource(58552U);
    msg.setSourceEntity(34U);
    msg.setDestination(26657U);
    msg.setDestinationEntity(15U);
    msg.path_ref = 2454004003U;
    msg.start_lat = 0.9741883321828451;
    msg.start_lon = 0.01881978873265755;
    msg.start_z = 0.4726551452418576;
    msg.start_z_units = 155U;
    msg.end_lat = 0.6913440668915178;
    msg.end_lon = 0.6814615280524583;
    msg.end_z = 0.6342461578094176;
    msg.end_z_units = 208U;
    msg.lradius = 0.521783628079281;
    msg.flags = 189U;
    msg.x = 0.23507403265828308;
    msg.y = 0.3154544863192078;
    msg.z = 0.8437968825077242;
    msg.vx = 0.9430020227957189;
    msg.vy = 0.9117616740159277;
    msg.vz = 0.5535202854115493;
    msg.course_error = 0.04233349810841225;
    msg.eta = 30340U;

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
    msg.setTimeStamp(0.2398373509208025);
    msg.setSource(16056U);
    msg.setSourceEntity(222U);
    msg.setDestination(21896U);
    msg.setDestinationEntity(250U);
    msg.k = 0.03198371277912426;
    msg.m = 0.20420394522520624;
    msg.n = 0.7633642382653433;

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
    msg.setTimeStamp(0.8717150982383387);
    msg.setSource(56869U);
    msg.setSourceEntity(237U);
    msg.setDestination(37898U);
    msg.setDestinationEntity(135U);
    msg.k = 0.41610609457328995;
    msg.m = 0.9300965253679055;
    msg.n = 0.6763243084564163;

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
    msg.setTimeStamp(0.2446900610374627);
    msg.setSource(6347U);
    msg.setSourceEntity(141U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(63U);
    msg.k = 0.9278176950884648;
    msg.m = 0.1307321446593478;
    msg.n = 0.6846656808582541;

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
    msg.setTimeStamp(0.21546273851160824);
    msg.setSource(31199U);
    msg.setSourceEntity(123U);
    msg.setDestination(12637U);
    msg.setDestinationEntity(84U);
    msg.p = 0.14553775457373752;
    msg.i = 0.6611877691240204;
    msg.d = 0.8026947038265815;
    msg.a = 0.7752951717936367;

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
    msg.setTimeStamp(0.6182637690901638);
    msg.setSource(24399U);
    msg.setSourceEntity(13U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(68U);
    msg.p = 0.25664829008053835;
    msg.i = 0.762025838261785;
    msg.d = 0.7388222572897373;
    msg.a = 0.7792375443773424;

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
    msg.setTimeStamp(0.15608678137792809);
    msg.setSource(32874U);
    msg.setSourceEntity(30U);
    msg.setDestination(4354U);
    msg.setDestinationEntity(101U);
    msg.p = 0.31179842674187486;
    msg.i = 0.43694672810226987;
    msg.d = 0.2805094837349642;
    msg.a = 0.18398710930060402;

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
    msg.setTimeStamp(0.917599115267101);
    msg.setSource(54446U);
    msg.setSourceEntity(176U);
    msg.setDestination(57970U);
    msg.setDestinationEntity(219U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.9273746820083555);
    msg.setSource(64484U);
    msg.setSourceEntity(167U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(190U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.7564694938488051);
    msg.setSource(49849U);
    msg.setSourceEntity(66U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(243U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.5777322974407382);
    msg.setSource(32323U);
    msg.setSourceEntity(181U);
    msg.setDestination(32335U);
    msg.setDestinationEntity(12U);
    msg.timeout = 25103U;
    msg.lat = 0.5070088616557106;
    msg.lon = 0.6417133232133359;
    msg.z = 0.7776630547598952;
    msg.z_units = 146U;
    msg.speed = 0.6787441548244147;
    msg.speed_units = 39U;
    msg.roll = 0.7411836684889326;
    msg.pitch = 0.3712969064257514;
    msg.yaw = 0.2565752516456228;
    msg.custom.assign("IIRJENEXENENPFLYLXTNRLFPBCMZIHSZOCDFAQLDPEMIVHUABKFUDAGMEUUCTETJGNJXPZUPJMRDAYZOGAXHQSTWGQWAABBTZMFKSURJELXWYVZVGRPDSRQJCONVXDAKHKLXSOBLFDPYVRMKHFSZGAVHINLXWTUOTRFMIYCTOYKBBNLZDEYEDIHNOCQQOJCPSKJGVCBRJGTKHDQKWLHFJPWAOWPFO");

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
    msg.setTimeStamp(0.14576939968683145);
    msg.setSource(20413U);
    msg.setSourceEntity(156U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(74U);
    msg.timeout = 50785U;
    msg.lat = 0.39208170795731856;
    msg.lon = 0.10886782228463376;
    msg.z = 0.009961738862306224;
    msg.z_units = 78U;
    msg.speed = 0.7949299360625169;
    msg.speed_units = 189U;
    msg.roll = 0.9578450094421272;
    msg.pitch = 0.685065742127347;
    msg.yaw = 0.03714216564685613;
    msg.custom.assign("CSCPQBPWHIWBFXHUGTAQLRQZQTQBGPLWKISXQKOICEHICHDHWJXLYUEADZVGXUUATWLGRRQLOGVFPKRPKTDJJUUJJORSGHFENCZDCUZMXWMDDKSKDTY");

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
    msg.setTimeStamp(0.20224582731203944);
    msg.setSource(48099U);
    msg.setSourceEntity(199U);
    msg.setDestination(8365U);
    msg.setDestinationEntity(141U);
    msg.timeout = 34320U;
    msg.lat = 0.737514643717486;
    msg.lon = 0.986301199146385;
    msg.z = 0.09943318551830815;
    msg.z_units = 198U;
    msg.speed = 0.16356304209540784;
    msg.speed_units = 27U;
    msg.roll = 0.09194276323282358;
    msg.pitch = 0.19194261260210532;
    msg.yaw = 0.2645274625640587;
    msg.custom.assign("KUPGGCJKNXXUFRXCTCVGDWXBLJBFURPPSSWRYHEXZBRVFLGZFFYLJMMHBGQPUNUBMMZTDVZMAYMZOTZZUVTAYLFAHRIDEBSCSRKIYKHDPOYSXOJPQUAUMEVJNRVQEKONTMYHKCAKAYYCEDJDWQCQRATTNKDKGQNASHLNBBG");

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
    msg.setTimeStamp(0.42497157337070435);
    msg.setSource(54128U);
    msg.setSourceEntity(57U);
    msg.setDestination(4757U);
    msg.setDestinationEntity(191U);
    msg.timeout = 35919U;
    msg.lat = 0.8154765385357018;
    msg.lon = 0.5861560076247319;
    msg.z = 0.36077202795729546;
    msg.z_units = 71U;
    msg.speed = 0.5757436284261417;
    msg.speed_units = 104U;
    msg.duration = 8696U;
    msg.radius = 0.9867294764233676;
    msg.flags = 228U;
    msg.custom.assign("EHSJHGRZAPNKEVIHIQPIECAMDDFQIRALLFQBAYXSWCPQRRIHERPNJNMOOGVTLSVEXDMCGCDZYQFUTAIKAEWEWTMWZOQLKROMLBOPBBWLQNUCZYTTYBPOLPIFSVNXKQVXFHKUBTJHWCKUJAFZKEDSPTJNIDUUNSZVYIWNTUWEKZQDDMIZHODEHPKBLFG");

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
    msg.setTimeStamp(0.5747031637106409);
    msg.setSource(28651U);
    msg.setSourceEntity(131U);
    msg.setDestination(49055U);
    msg.setDestinationEntity(114U);
    msg.timeout = 32412U;
    msg.lat = 0.40204717061674067;
    msg.lon = 0.9014878522662292;
    msg.z = 0.7370104604948229;
    msg.z_units = 116U;
    msg.speed = 0.10717529625207134;
    msg.speed_units = 158U;
    msg.duration = 25660U;
    msg.radius = 0.3822384210663724;
    msg.flags = 44U;
    msg.custom.assign("AHXEBSHNWVVZPVCTLNPALTNUSVRMGGFQSODCTRTCVRHRDYLAVEIZKYUSYGHOJBYIZJWNSSYLLMXCKQKJZLLCOFJCSRUDMBVETVWDKNOIZPTMXGYMNNGFHABAGPFJPZWJGAF");

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
    msg.setTimeStamp(0.04094853602907367);
    msg.setSource(52349U);
    msg.setSourceEntity(226U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(71U);
    msg.timeout = 22441U;
    msg.lat = 0.8445848225757154;
    msg.lon = 0.5267938422196067;
    msg.z = 0.6487284719666081;
    msg.z_units = 125U;
    msg.speed = 0.8714677134899245;
    msg.speed_units = 3U;
    msg.duration = 44289U;
    msg.radius = 0.8892170088768248;
    msg.flags = 1U;
    msg.custom.assign("MAHKXTEMFDOSCXIRIZIUSKEANXSEHUPEBLICVLMQRDJRZTVWJNUHTEQOYVBAZBQLKYZQWQBBPEGWKWPWILXEGJXWGPPIMQORFSTFJRXGRYCBTPJKNOUGFVVASXIHOHCRNOWTYIVKBPHDPWVFTNFQSYDARBMPUECHKZQPIJDOKHQVMCQRZKYDGJLOYLWBGVZJLRAJUMGTMCYUHAXFDNDNUKZVFNMD");

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
    msg.setTimeStamp(0.0028636365260952257);
    msg.setSource(57602U);
    msg.setSourceEntity(27U);
    msg.setDestination(19865U);
    msg.setDestinationEntity(173U);
    msg.custom.assign("VSZGURDNIRGTYPXSBOJSOKUUMTIOPCNKAPQJUHBSNUSQFYZXEBMTIUANMJQKWQCDEVDWPJANDFZYGOAIZLSXKGXNQSAFNQLHPVZCNNTELKFLCGDYUSOEEIAUR");

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
    msg.setTimeStamp(0.16757453404762246);
    msg.setSource(10447U);
    msg.setSourceEntity(247U);
    msg.setDestination(62445U);
    msg.setDestinationEntity(80U);
    msg.custom.assign("JNWVJXNJXEDPLUCUIBLWVFNDUBHNKYXOXWRPMZLGMNHCOWGCULIJSERKTOMBAZGEDYXDFIEVFUQVOXCYTYUTERNFTFRMYBQRPPBDSPBZWMYTIHIFSAYROOINABCZSAFDBQDAPSGNNACGOEYQZKTLVCQPGHGAYLVETDQHJLPIOFWFSSATRRVIUIOQCXHQHJGVLRUBCKGHJJXH");

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
    msg.setTimeStamp(0.06608336427449069);
    msg.setSource(25576U);
    msg.setSourceEntity(113U);
    msg.setDestination(12628U);
    msg.setDestinationEntity(211U);
    msg.custom.assign("ZIAHEVKFQXJSBOCMOXVYQFGAXSOOVCDCLNXISSPVDUUNWPSGHNRXAMDJEMBWYCMNTJWDWUGXTJQDDLVPKASABAATGYORFMXBMHKRHRTRLQMJGPFCOPWFLGPFQYLBZDMKUOEJBICUYGHQFAZPELNOQ");

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
    msg.setTimeStamp(0.09139405961100555);
    msg.setSource(38887U);
    msg.setSourceEntity(163U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(67U);
    msg.timeout = 56954U;
    msg.lat = 0.4347849057395551;
    msg.lon = 0.8337050906494685;
    msg.z = 0.32592561161933664;
    msg.z_units = 82U;
    msg.duration = 53003U;
    msg.speed = 0.7715124602581611;
    msg.speed_units = 87U;
    msg.type = 101U;
    msg.radius = 0.5579736215141031;
    msg.length = 0.11951886505688314;
    msg.bearing = 0.6237940367616776;
    msg.direction = 186U;
    msg.custom.assign("MWCNFVRZABYARHADQBKIRBXWNUJVMMAGXWYSSIEHOTMSCNIALSXTNDODA");

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
    msg.setTimeStamp(0.491799691245127);
    msg.setSource(26501U);
    msg.setSourceEntity(176U);
    msg.setDestination(46479U);
    msg.setDestinationEntity(130U);
    msg.timeout = 37048U;
    msg.lat = 0.47905451689553746;
    msg.lon = 0.006602139726815559;
    msg.z = 0.12500074809393003;
    msg.z_units = 145U;
    msg.duration = 21724U;
    msg.speed = 0.5273167191860146;
    msg.speed_units = 46U;
    msg.type = 5U;
    msg.radius = 0.21275089663819835;
    msg.length = 0.13533660358074506;
    msg.bearing = 0.7458108961187331;
    msg.direction = 86U;
    msg.custom.assign("PEXJLXDPWVFFRVSRAPDOSFSSPTZVRPHBTUHXWNTYHKBAMUKEEUTMZZQIGJIXQXHVFGERYRVGLUCZWISKZMSGTISJTYDYFNGKHMPLNDPSYWZLOUNZNAATGQCDDAVNXIFOGBPBQAJEFORUXWREFZVKK");

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
    msg.setTimeStamp(0.9726878715312918);
    msg.setSource(42958U);
    msg.setSourceEntity(113U);
    msg.setDestination(64766U);
    msg.setDestinationEntity(80U);
    msg.timeout = 38514U;
    msg.lat = 0.23147162300419166;
    msg.lon = 0.7069865503792705;
    msg.z = 0.8318416583914313;
    msg.z_units = 170U;
    msg.duration = 23702U;
    msg.speed = 0.9297884643614077;
    msg.speed_units = 247U;
    msg.type = 216U;
    msg.radius = 0.9568401694529284;
    msg.length = 0.8503304789824935;
    msg.bearing = 0.003122789735154119;
    msg.direction = 56U;
    msg.custom.assign("GMXLPCFKDASDLBLEZWMGJLZGJASNQYEJUEKVDZHTCMONXOOWUI");

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
    msg.setTimeStamp(0.9999192521195425);
    msg.setSource(26175U);
    msg.setSourceEntity(37U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(190U);
    msg.duration = 28034U;
    msg.custom.assign("TJHOMKBVBFKFKHFRRPDSZYYQETBCWHPXWEFDPORNKHAWZHQWSHPOBSFJPDYJGJRUWGVSDTKKQCNMKBIKNTYUQTJCZDYVBZGNMMVNGDRTECMDLTFOSXVLALAIUMNWBLIPUXEHHEAMOPULPVTVOXQJLGEHCSVCIFXURAZJXEJAGEVVKHYLXCNOXILIAZSBXPLYXSC");

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
    msg.setTimeStamp(0.7455127360893744);
    msg.setSource(30477U);
    msg.setSourceEntity(43U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(163U);
    msg.duration = 53348U;
    msg.custom.assign("ZRFSPTXPLNBXXTAKZEDPTVCJCHUWVDRSWEWIFDHTSMCMQKRXRAHBKLVMIASJBFOCZPNMCVZGOIZWEGCQKPURJGVLGQQUEXNDWDNHYYUMNMUAZHJBCHWVUCXZXIFQKBGWLFNKJJR");

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
    msg.setTimeStamp(0.6522370435275605);
    msg.setSource(14397U);
    msg.setSourceEntity(228U);
    msg.setDestination(19823U);
    msg.setDestinationEntity(204U);
    msg.duration = 29040U;
    msg.custom.assign("PSHIZBHCOYMBYDXHJZPJKDPGOACLHGWIETOTLJUBVROPOWLAOVNETUHJUPAEZDQQWDEWKSCJJTHLIJQFUDVQFEFFCZFDSTIKAJGLLMTQTPOAZSUUSGNZBLIFCWSCOCXNRYLHXXUMIWABXBMFVEMJRKUQMKOYVSLUMNFSTBDAAANGJYUFQWHVYVKGXNGYYSPKSQBPAXRBEINMRNTFKZGCRWPZHCXRRDNZ");

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
    msg.setTimeStamp(0.3802469037040157);
    msg.setSource(5545U);
    msg.setSourceEntity(49U);
    msg.setDestination(14862U);
    msg.setDestinationEntity(61U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 323450169U;
    tmp_msg_0.start_lat = 0.9289258477860575;
    tmp_msg_0.start_lon = 0.9675324962684523;
    tmp_msg_0.start_z = 0.0405209952693546;
    tmp_msg_0.start_z_units = 5U;
    tmp_msg_0.end_lat = 0.3170985605854868;
    tmp_msg_0.end_lon = 0.43120885831536515;
    tmp_msg_0.end_z = 0.27596761859193775;
    tmp_msg_0.end_z_units = 110U;
    tmp_msg_0.speed = 0.9994611564734472;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.lradius = 0.10730619686001353;
    tmp_msg_0.flags = 40U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45364U;
    msg.custom.assign("DSYSTRIGYFHVYIEMXSIXSPJIZKEQIBAAQHKJSMTQMKNUWFBCGWOFCASQDNXHSXYFCWMWHUAICTQNAUPOAIKVETPLODRTZZVNYREQGGSGZUQAJ");

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
    msg.setTimeStamp(0.3856809527133913);
    msg.setSource(23893U);
    msg.setSourceEntity(195U);
    msg.setDestination(9965U);
    msg.setDestinationEntity(252U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3113641450U;
    tmp_msg_0.start_lat = 0.20212322909463365;
    tmp_msg_0.start_lon = 0.22322883621607092;
    tmp_msg_0.start_z = 0.11707793166055414;
    tmp_msg_0.start_z_units = 187U;
    tmp_msg_0.end_lat = 0.5979355681581122;
    tmp_msg_0.end_lon = 0.9555458950977239;
    tmp_msg_0.end_z = 0.8202381593805574;
    tmp_msg_0.end_z_units = 160U;
    tmp_msg_0.speed = 0.6179342290893367;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.lradius = 0.752831025449604;
    tmp_msg_0.flags = 90U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42638U;
    msg.custom.assign("JUHETCERZPTGVQFSZYLAGGHDVJKEZDXOENCWJZNLLPCNRKRGOWQQGQNXBCLTHBLDZFDJEUQYRHNXVRIYTFDIPSFSWPQHKJMWOXEBMCAMTJIQL");

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
    msg.setTimeStamp(0.2902505852713829);
    msg.setSource(59272U);
    msg.setSourceEntity(162U);
    msg.setDestination(46930U);
    msg.setDestinationEntity(36U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5505669695156067;
    msg.control.set(tmp_msg_0);
    msg.duration = 25986U;
    msg.custom.assign("DVZGWNINDKWUNQZFMMAPCVGAOMXORTBHRASCPLZXVYWTMLQSFLGQWDJRUAOUIFTFBY");

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
    msg.setTimeStamp(0.26650714005816745);
    msg.setSource(37816U);
    msg.setSourceEntity(11U);
    msg.setDestination(7851U);
    msg.setDestinationEntity(37U);
    msg.timeout = 16979U;
    msg.lat = 0.9091227648247623;
    msg.lon = 0.3472892181691354;
    msg.z = 0.25599186668229346;
    msg.z_units = 38U;
    msg.speed = 0.11767026982488438;
    msg.speed_units = 89U;
    msg.bearing = 0.09407456254437985;
    msg.cross_angle = 0.7048779878590202;
    msg.width = 0.8044845163324746;
    msg.length = 0.16985095692752938;
    msg.hstep = 0.8388644895601701;
    msg.coff = 128U;
    msg.alternation = 24U;
    msg.flags = 115U;
    msg.custom.assign("TNWEOUCMQBLVXYDCFKEHZYARTUNJTPLBAQOVFTQMFNSRMPDXEDECACJGZSWWMOOVHDLJQGZQXLRHNGNSBKRKMXRWYINLSFPKRSSPGADTKIBTZMSLUGIIVRYNFTMFOHLUTYLOEVCBDKJIAEIGCWPDMAGSYUXSHFEVSJTRUBYYUOEUJZENLQDGEMBNYKPPWDAKVJWXOIDVCZHTOBPHUGRCVKZXOXA");

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
    msg.setTimeStamp(0.4386538090102835);
    msg.setSource(33328U);
    msg.setSourceEntity(158U);
    msg.setDestination(9957U);
    msg.setDestinationEntity(88U);
    msg.timeout = 29142U;
    msg.lat = 0.2871728825115035;
    msg.lon = 0.44682766870471413;
    msg.z = 0.8081221985887229;
    msg.z_units = 126U;
    msg.speed = 0.02649478224504176;
    msg.speed_units = 59U;
    msg.bearing = 0.39829085500799566;
    msg.cross_angle = 0.30592431433809975;
    msg.width = 0.40595153774766735;
    msg.length = 0.3876916524706422;
    msg.hstep = 0.6227982292077128;
    msg.coff = 18U;
    msg.alternation = 70U;
    msg.flags = 159U;
    msg.custom.assign("OAPUATVEXNIIZHICN");

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
    msg.setTimeStamp(0.2134168061839642);
    msg.setSource(25451U);
    msg.setSourceEntity(101U);
    msg.setDestination(25321U);
    msg.setDestinationEntity(30U);
    msg.timeout = 17627U;
    msg.lat = 0.09752647691652339;
    msg.lon = 0.5819900783083075;
    msg.z = 0.8401525234186376;
    msg.z_units = 175U;
    msg.speed = 0.9615929044697046;
    msg.speed_units = 213U;
    msg.bearing = 0.9336843042462425;
    msg.cross_angle = 0.09754267156870622;
    msg.width = 0.6992348296300541;
    msg.length = 0.23545443916758657;
    msg.hstep = 0.5464316192374337;
    msg.coff = 226U;
    msg.alternation = 71U;
    msg.flags = 212U;
    msg.custom.assign("JOYGLUORWHTRNTRNWJBXQRHYOSOGNULTXDFHLGNNYKZTNEVSVHRBQSEWGCLPLOZABJXHYPSXONVBTBLQUEJZPDVIPKAIHZZMAWBUOMWYAREFSKDEZEVIGXCLFCBJQSKRBZKAOUPMUMZTGDXPLCYFKSYWRSHIMPFCUWADCGIAHFDAFTGPJFSNGUMYQQMCTTEBIVSLJERKNZCCDFLHJXDIPJIWVIAVTQKOVMREYCWOZQVKXIMYDWXUKEFDXUBH");

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
    msg.setTimeStamp(0.009911340699202853);
    msg.setSource(16935U);
    msg.setSourceEntity(169U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(95U);
    msg.timeout = 5426U;
    msg.lat = 0.48893039908366676;
    msg.lon = 0.13297639756038793;
    msg.z = 0.48069242390212286;
    msg.z_units = 251U;
    msg.speed = 0.9541905138258144;
    msg.speed_units = 179U;
    msg.custom.assign("DZVEFJXGEXGPKORTHLHNQTTCUVPGFUGAUAGQQZKYSCPKZXAZYDYLRJBQUGBLMDVEQFBKGPKOGLQLWAGIBMFYIILPFKNVSTHRMEINRQWEQOKJPBJZBMYHVDXJSWWTUFHBYPHBHCDJEUFWKERSWTNLPHTMHEQQKDASIOCNUICZFSLZNAMORRVAAZDOOZWBNHJCVUNILDTXCMTYJCDVJIJMZIDWMOERX");

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
    msg.setTimeStamp(0.2637867994844286);
    msg.setSource(14594U);
    msg.setSourceEntity(130U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(208U);
    msg.timeout = 21348U;
    msg.lat = 0.8293008347684749;
    msg.lon = 0.638988911669437;
    msg.z = 0.20883546386486662;
    msg.z_units = 120U;
    msg.speed = 0.4074267103801318;
    msg.speed_units = 33U;
    msg.custom.assign("UAXHLDGAVSCPIVNZQRDUXTFSMOPYUGOWDLVIFJSOMLUTC");

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
    msg.setTimeStamp(0.0022087969091642012);
    msg.setSource(8665U);
    msg.setSourceEntity(234U);
    msg.setDestination(21757U);
    msg.setDestinationEntity(65U);
    msg.timeout = 39687U;
    msg.lat = 0.3909281540600583;
    msg.lon = 0.7794150429432886;
    msg.z = 0.09694604868516665;
    msg.z_units = 68U;
    msg.speed = 0.8257802907274704;
    msg.speed_units = 65U;
    msg.custom.assign("IUYPHGKNZYSFVHDDZYMQQBFDETDAKGEEQKNODJDEXWKUARAXORLOPXTCCMHHYELSVWYSXJZMWNUIWPEDFLDPJZGJURTAOPATQALKSTOXVFWSKCKZJGTZNJNFMOQJRGQLKARCELWFIVFKOCEXSBDECCUTYTJINPOMBZRLOSPBLFMVDUQTHQJIHWQZNMNKBWMVUBMSIVVAOWRYVSXGXZIUFBGHYBGZBBYGAGERWPIHYCHXX");

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
    msg.setTimeStamp(0.6795950589829696);
    msg.setSource(58432U);
    msg.setSourceEntity(70U);
    msg.setDestination(38217U);
    msg.setDestinationEntity(229U);
    msg.x = 0.5010368092233506;
    msg.y = 0.19522145184574036;
    msg.z = 0.7431693546582805;

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
    msg.setTimeStamp(0.415849460333801);
    msg.setSource(43330U);
    msg.setSourceEntity(245U);
    msg.setDestination(10377U);
    msg.setDestinationEntity(24U);
    msg.x = 0.020026953885165066;
    msg.y = 0.43190439658712454;
    msg.z = 0.3895199370383725;

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
    msg.setTimeStamp(0.22822268808582802);
    msg.setSource(58510U);
    msg.setSourceEntity(29U);
    msg.setDestination(62238U);
    msg.setDestinationEntity(135U);
    msg.x = 0.36952567968151917;
    msg.y = 0.591276426085059;
    msg.z = 0.38000994104986163;

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
    msg.setTimeStamp(0.06820246164027155);
    msg.setSource(28576U);
    msg.setSourceEntity(193U);
    msg.setDestination(38070U);
    msg.setDestinationEntity(143U);
    msg.timeout = 2773U;
    msg.lat = 0.2651314832557131;
    msg.lon = 0.3079001004256916;
    msg.z = 0.977874562558672;
    msg.z_units = 120U;
    msg.amplitude = 0.7841673500485685;
    msg.pitch = 0.841807218963512;
    msg.speed = 0.1304451038663056;
    msg.speed_units = 245U;
    msg.custom.assign("EUHPPQREHXNBKHYULLPUSWWQUVABTARIWFKAQSEDBOUZJZESBMFOHZCLDFKQLNBVWXWBQFVSDGAERZCILESXGJPVQYYZPMBYXGUGWGJTRMAFUKYHTDHDCJZRYNJDVTYXUOIIVLLQMTNIJGPHEMQNPKICKJOVXMPFKIFNENMWABVDPZKGFU");

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
    msg.setTimeStamp(0.4071045430238903);
    msg.setSource(25828U);
    msg.setSourceEntity(56U);
    msg.setDestination(46385U);
    msg.setDestinationEntity(130U);
    msg.timeout = 14458U;
    msg.lat = 0.5036942542161259;
    msg.lon = 0.6446051113790852;
    msg.z = 0.8817741207467312;
    msg.z_units = 170U;
    msg.amplitude = 0.05072219947243917;
    msg.pitch = 0.19141550908391158;
    msg.speed = 0.5499457194331994;
    msg.speed_units = 119U;
    msg.custom.assign("PIZWNJTFHNGUYQHRFEONGT");

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
    msg.setTimeStamp(0.7293660479753346);
    msg.setSource(12052U);
    msg.setSourceEntity(141U);
    msg.setDestination(14477U);
    msg.setDestinationEntity(80U);
    msg.timeout = 52031U;
    msg.lat = 0.28611502340126116;
    msg.lon = 0.039162134117119884;
    msg.z = 0.8574062265965607;
    msg.z_units = 245U;
    msg.amplitude = 0.06507157830262889;
    msg.pitch = 0.17289660904546644;
    msg.speed = 0.4727815353133109;
    msg.speed_units = 13U;
    msg.custom.assign("OKIQDWRFTGRPDVCYOHSZMDNRWQLHKYETXBRTYVIHTSHISUIFLJUTFJIJVNPDUWOLBJAQJYXCVRBAD");

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
    msg.setTimeStamp(0.08268703092327112);
    msg.setSource(19206U);
    msg.setSourceEntity(32U);
    msg.setDestination(7181U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.8990400755843437);
    msg.setSource(16910U);
    msg.setSourceEntity(243U);
    msg.setDestination(55205U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.4578896036126717);
    msg.setSource(4182U);
    msg.setSourceEntity(11U);
    msg.setDestination(8287U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.6083492237968717);
    msg.setSource(38666U);
    msg.setSourceEntity(237U);
    msg.setDestination(58242U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.35893145892644396;
    msg.lon = 0.22947827113383013;
    msg.z = 0.9815440293353221;
    msg.z_units = 19U;
    msg.radius = 0.3857501366254398;
    msg.duration = 49529U;
    msg.speed = 0.8755148299946732;
    msg.speed_units = 101U;
    msg.custom.assign("ZHTBZGARQIMFGZCSEWGTDVMYGRDFQEBQXTVINJERNLCLXUEBLODAVVBWCAJTVBODLZMYHTADKZMWYKTJPKSHYKUMGKMHCWUUTGSIFYFTAPOMUFNPOELLGXXD");

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
    msg.setTimeStamp(0.5719888267937306);
    msg.setSource(17344U);
    msg.setSourceEntity(28U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.001125710174646355;
    msg.lon = 0.4263172400079467;
    msg.z = 0.8318315622081306;
    msg.z_units = 151U;
    msg.radius = 0.386030526441423;
    msg.duration = 47167U;
    msg.speed = 0.31784190340672236;
    msg.speed_units = 119U;
    msg.custom.assign("XGPQJQAVHROJAZFARFIBLKDLVTEHFWHZZTSFNATKONCQCCMYDPBJMJBZUWECTICFXKLMKPWAPIABSDQDVSSKSGAMFQCKQRCNMHVNOZYGGDXEHUFTWEO");

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
    msg.setTimeStamp(0.056794333543896625);
    msg.setSource(37474U);
    msg.setSourceEntity(15U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.21350889785439564;
    msg.lon = 0.9890241625686285;
    msg.z = 0.22243977408695625;
    msg.z_units = 4U;
    msg.radius = 0.2526197958089844;
    msg.duration = 24443U;
    msg.speed = 0.6226370588042791;
    msg.speed_units = 50U;
    msg.custom.assign("VLPTMHEBHUZYCQPTDKLRZAUIMHTAVEOMLPIJCYROAWEROVXSBPMLIDRPETCLJKAHARVQLYPXBTYJXBBFUWZDUQNQLNOIQTKUVSJJXFMEGEZXNUPBUUJHSOQDRGSKIMAZTPSDADRQFMSGFYWNWZKIQHOBQUGLURGZJFDJOGFPJJCSKHEOLFEXAMIKXYVSEW");

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
    msg.setTimeStamp(0.8390853637331738);
    msg.setSource(54716U);
    msg.setSourceEntity(116U);
    msg.setDestination(52193U);
    msg.setDestinationEntity(59U);
    msg.timeout = 41065U;
    msg.flags = 150U;
    msg.lat = 0.0067289130481849035;
    msg.lon = 0.12496752819147472;
    msg.start_z = 0.8685479568513391;
    msg.start_z_units = 193U;
    msg.end_z = 0.37846714460643127;
    msg.end_z_units = 105U;
    msg.radius = 0.30412320833106277;
    msg.speed = 0.9880778885874241;
    msg.speed_units = 13U;
    msg.custom.assign("VBQJTXGYMZJRJJQIIINDVETOCSEGDAHGAIVHCOTWRYTPQMWKVHHLFYKDEASKGNSRZQYGOPTQUWDOXRTXZZHHMXLMMEUFZTNSWWEQBMXHJUBFAKXXPGGDNYFKNUQFCJBROVBUAPUMBCII");

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
    msg.setTimeStamp(0.8670964288029157);
    msg.setSource(54224U);
    msg.setSourceEntity(62U);
    msg.setDestination(9251U);
    msg.setDestinationEntity(17U);
    msg.timeout = 36829U;
    msg.flags = 199U;
    msg.lat = 0.9053443075498288;
    msg.lon = 0.7096236328598486;
    msg.start_z = 0.6590339573926832;
    msg.start_z_units = 48U;
    msg.end_z = 0.9428516561531916;
    msg.end_z_units = 213U;
    msg.radius = 0.7884919727169571;
    msg.speed = 0.30623269860305635;
    msg.speed_units = 64U;
    msg.custom.assign("IYRCQQOZOEBCPMANIZCRAODYAKYXZPXVDVTQZMSEPPPEPLGLNSBBFZXLJKSNQUIWDFGIUBRUPUAASGXDYMRYMVNKTWLMHGAXJJJIVGKMCHWLBSUFNXVSEVBCVHODNNNVBJDBPHPEOAEWKOTANWCRQRQZSFYTEWFIJCCLFKGFVUOGSQPXYUOMXBRCIHJTJWFLKQRHDFLHNUXILLGEWUHDAEMQSFZZJOHKDBMCGHTXEGKTY");

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
    msg.setTimeStamp(0.7648314454125269);
    msg.setSource(49285U);
    msg.setSourceEntity(62U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(155U);
    msg.timeout = 1854U;
    msg.flags = 214U;
    msg.lat = 0.8533143839561277;
    msg.lon = 0.9542861600118011;
    msg.start_z = 0.7624161087327028;
    msg.start_z_units = 7U;
    msg.end_z = 0.4833015862350717;
    msg.end_z_units = 68U;
    msg.radius = 0.8667658320658791;
    msg.speed = 0.45694263670470725;
    msg.speed_units = 88U;
    msg.custom.assign("TGSDXFXMMSYTJEJYVQDOWTQCBZITPRPDAHTERORRWGCNERVFPDJZKCVTUGKWCZSGJYOJVVFAVKOWNZWDCDSOHZUIUNHOASJTTZRHABNSWXDSHHXJIB");

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
    msg.setTimeStamp(0.7420705916283263);
    msg.setSource(62139U);
    msg.setSourceEntity(132U);
    msg.setDestination(39355U);
    msg.setDestinationEntity(40U);
    msg.timeout = 35405U;
    msg.lat = 0.6349727532871668;
    msg.lon = 0.7348203247297606;
    msg.z = 0.7658625694862443;
    msg.z_units = 237U;
    msg.speed = 0.504825264544376;
    msg.speed_units = 252U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.008967254175779926;
    tmp_msg_0.y = 0.9893690759252043;
    tmp_msg_0.z = 0.741603852227809;
    tmp_msg_0.t = 0.9984929073906965;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WQYYCGEJFZKBUWPDOXQGOHENIRSWSJXDRXZYYPSWMWSSIBRVKNRACJAQTKONZOPILVXYLOYEBDOCSKGKBHOFEAMHQZCVSLBMTLXTIIUVEKQUUGNFAXHLNPUCWMKSVIQPOBDNTPQBGTDYVZIPUCMGBXYMUMIFKWDDANLIXFJDRFHJUKEETASPTAMVSAGHCTHLFZMUHHBNMWGPJJUZOFJQXEWHQCNPKZAJLLCEYLWXVZYGGO");

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
    msg.setTimeStamp(0.21942713165684913);
    msg.setSource(46971U);
    msg.setSourceEntity(80U);
    msg.setDestination(15618U);
    msg.setDestinationEntity(179U);
    msg.timeout = 60566U;
    msg.lat = 0.6890706621603305;
    msg.lon = 0.444303955717005;
    msg.z = 0.712065387715248;
    msg.z_units = 143U;
    msg.speed = 0.7950505816315537;
    msg.speed_units = 98U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5720394170129112;
    tmp_msg_0.y = 0.27710209173331857;
    tmp_msg_0.z = 0.637470794793466;
    tmp_msg_0.t = 0.2512043508387882;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HCPOUAFLBPXJUZOYDKXYCSWAMLGBVAMTDCJWBBMCBZQYIPTRCVLVPDYIULXFSYBOHIUZANHRAGNJYCMHYNZQPCKKUFHQEOWRIQGVORGAEBWADOYGHRNUGIIGNXKSWJXKFMNWVBGBUGPYVKPDLJTTLVPMOLMWXSNLISFMERXUBWXQLRQFAQITESJCKHFEMVXKRZZJTKKUZQYJUVZCSED");

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
    msg.setTimeStamp(0.01946431377671498);
    msg.setSource(35865U);
    msg.setSourceEntity(193U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(91U);
    msg.timeout = 42098U;
    msg.lat = 0.36497360970836157;
    msg.lon = 0.5930894818004196;
    msg.z = 0.8930691744443421;
    msg.z_units = 160U;
    msg.speed = 0.35596451878976554;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2832970119720367;
    tmp_msg_0.y = 0.9745964563339827;
    tmp_msg_0.z = 0.4268495275460653;
    tmp_msg_0.t = 0.42658973892213903;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KEDUVIPERGOIJQFOYDQQUAPFNXGXBJDSXLJZMJCUAIJHNLKEATZGRFSOUEFHNKUYMQGDJWHYESDAJLXCWEATKEBKCSVYOWIDGBMLVXABVIXWWXMTMRITVHLYNBDRZCUXSPUBODI");

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
    msg.setTimeStamp(0.3382061347555273);
    msg.setSource(5813U);
    msg.setSourceEntity(202U);
    msg.setDestination(57945U);
    msg.setDestinationEntity(80U);
    msg.x = 0.9154287132940955;
    msg.y = 0.5749974761395275;
    msg.z = 0.13426535212950197;
    msg.t = 0.9447453615291513;

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
    msg.setTimeStamp(0.13502928284044535);
    msg.setSource(13923U);
    msg.setSourceEntity(250U);
    msg.setDestination(571U);
    msg.setDestinationEntity(7U);
    msg.x = 0.2724983995564928;
    msg.y = 0.7610111880698417;
    msg.z = 0.40653075935259464;
    msg.t = 0.2308492676943542;

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
    msg.setTimeStamp(0.41195356181013787);
    msg.setSource(24181U);
    msg.setSourceEntity(216U);
    msg.setDestination(24777U);
    msg.setDestinationEntity(49U);
    msg.x = 0.31482231579241005;
    msg.y = 0.17503420698067873;
    msg.z = 0.23725890542942263;
    msg.t = 0.7346551526080919;

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
    msg.setTimeStamp(0.4404943322697715);
    msg.setSource(42203U);
    msg.setSourceEntity(138U);
    msg.setDestination(11138U);
    msg.setDestinationEntity(166U);
    msg.timeout = 57704U;
    msg.name.assign("QAOIQYLIOTYORWZEQUFEJBAUHWAUNKVMCAYJIRPJBGOTWU");
    msg.custom.assign("KLBHJFJDDQHHDHHOTSTKKFTLQVGFYICSHYMAKXWJADVMPXPLFSZUMNIQCJISNEOTTWSPIRYCYTVPNEOJCALZBNBDMMVRGKVOWWBTMPZMVMQUGWJRDBFYLWRXDOEJHFDLUDKORNYINPVYEFUQUZLKQCKHZGSGCHASRYQANSUMAEGZTIPKABLWXZWBUX");

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
    msg.setTimeStamp(0.9543811203743875);
    msg.setSource(4116U);
    msg.setSourceEntity(113U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(105U);
    msg.timeout = 17600U;
    msg.name.assign("DCGQHGGJWBQDDHUHFSWNPFSJKCIVAKLUOOYNLDFUZEQRQTGNXVNDUMCUGILMBKBQFPVJRWKTIWMZAAJCID");
    msg.custom.assign("DIVKAKXREEMJCGKTJVFZSSYTMHZDNWCVWPQWZTSAEYZURWFTCHAKMHYLENBBGNUHRCZAGOLMTXQOCGRZFNXPQATQFHMYPUSNDJWSIYBVFOIUPFAUTBBZDBVEIXEFEYFREKGHLMPOMCMQRZEICAAPNSMHNGFDODODXVYEQWQRRWHJJLBPATROZUJLBOPOSTCQXQNJXDD");

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
    msg.setTimeStamp(0.2436390488666279);
    msg.setSource(50230U);
    msg.setSourceEntity(118U);
    msg.setDestination(18799U);
    msg.setDestinationEntity(68U);
    msg.timeout = 55524U;
    msg.name.assign("BFIFMYMIJZTLIDYJSPQOZJXSSNQJKODRNOOSAFBUIBLVHZGRKGAZXZXYERMKHIGRQTIBIBDRNZUWSQEAPBNXRXUUGKQTYCBLMUQNXAHERYISKWHDJOMEEVAXWHQWBMKPTJQMSAVFPCUCCTVOUFNCGDXYFLWEWJUYOJWFFELPJHCJTWCKGYVBVAALEOFPVWZEBQLEZTZKMCGDQRNDRNIPN");
    msg.custom.assign("FGEDVPFHDZAUJQWRWQCMDVAAWLSRZTSXSBFHSKZBSTWGRQPCGYOOONAYZZXVKLPLFXC");

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
    msg.setTimeStamp(0.6962100234759506);
    msg.setSource(6695U);
    msg.setSourceEntity(180U);
    msg.setDestination(36485U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.47081940159690217;
    msg.lon = 0.9078638070103413;
    msg.z = 0.3365934455418742;
    msg.z_units = 125U;
    msg.speed = 0.5914169993118598;
    msg.speed_units = 234U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31179U;
    tmp_msg_0.off_x = 0.29216427974434;
    tmp_msg_0.off_y = 0.8420930192225778;
    tmp_msg_0.off_z = 0.15745822540563126;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.166521902189957;
    msg.custom.assign("UESGYMFLDEVNAFKDQGYGKNJFEUXQSHSJEHKHGORYZLGXCAEXPMYALWVUXTIHZUJKZQIDOMTTDPLPQVYPAWXWQYKDRMMGNTIKXVZUAUXOFVYONHJSBEKKRMGBSRNJMRBLQFNDLNABTUMHHZJAEZVSAFWBQSSWUIGQBXBNWEMSPCWARRIBJPRF");

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
    msg.setTimeStamp(0.048755514682870205);
    msg.setSource(39234U);
    msg.setSourceEntity(162U);
    msg.setDestination(14493U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.08920729548143214;
    msg.lon = 0.5652505890547191;
    msg.z = 0.16761037942486812;
    msg.z_units = 82U;
    msg.speed = 0.6798454185677039;
    msg.speed_units = 134U;
    msg.start_time = 0.9648277385008199;
    msg.custom.assign("RRJXBGEMWTPTUBUXJVPJQDAFCXHCKZOWEKDZXRCJCNISWKBLEAUCRISTQFPZATYMMEAVQPNBFWSXINVJYLHBONEHORGIYFYSLZWGFFWTSVVKPZDBOHYSVOXQHBCZYVWJPIJUHNEQUQSCMVXOOJRBKAIKMKTE");

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
    msg.setTimeStamp(0.6934758905948277);
    msg.setSource(57664U);
    msg.setSourceEntity(60U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.053060147345818764;
    msg.lon = 0.25202543011025014;
    msg.z = 0.457334188170611;
    msg.z_units = 31U;
    msg.speed = 0.2514264027771772;
    msg.speed_units = 165U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.590666462875873;
    tmp_msg_0.y = 0.5537970204467212;
    tmp_msg_0.z = 0.9077216276462432;
    tmp_msg_0.t = 0.07733695364724058;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5394U;
    tmp_msg_1.off_x = 0.02798500933099457;
    tmp_msg_1.off_y = 0.5504645477437341;
    tmp_msg_1.off_z = 0.3913920044753004;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5703249410136155;
    msg.custom.assign("AJPDHQULPTVAESCZGHDPYAKIPKIUMNIKREDVNJTYAXBHXHNYPNXQOBGACZGVGTBPWWYLKXUZEMQVBAKKFBPGVOOCZEYDOLVXCTUISFIJVMTSRQHMERSLMKWRURHOHQCBUPFDAWLSHNFDZYWZGGNPYTOZYZAAJIGQRCFLMLLJUSDDKTQNMQWCXJCFQXGYMMPRGHFNYCLOVTLWUOFICUUSJBWSFVQZIRZWOXJJJBTXAOSNEMEKDBXIEB");

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
    msg.setTimeStamp(0.666111709864347);
    msg.setSource(52868U);
    msg.setSourceEntity(34U);
    msg.setDestination(44230U);
    msg.setDestinationEntity(138U);
    msg.vid = 48843U;
    msg.off_x = 0.9147431634815149;
    msg.off_y = 0.7080063396907045;
    msg.off_z = 0.4822023726236314;

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
    msg.setTimeStamp(0.7329367146404322);
    msg.setSource(45635U);
    msg.setSourceEntity(14U);
    msg.setDestination(25697U);
    msg.setDestinationEntity(242U);
    msg.vid = 58777U;
    msg.off_x = 0.4082842652887755;
    msg.off_y = 0.45483546562440336;
    msg.off_z = 0.06426311994511691;

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
    msg.setTimeStamp(0.05253960991011919);
    msg.setSource(34000U);
    msg.setSourceEntity(83U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(79U);
    msg.vid = 53904U;
    msg.off_x = 0.45394585388296116;
    msg.off_y = 0.49803608409626055;
    msg.off_z = 0.11082641534289073;

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
    msg.setTimeStamp(0.9551992926872619);
    msg.setSource(56384U);
    msg.setSourceEntity(50U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.6918638127134591);
    msg.setSource(32229U);
    msg.setSourceEntity(201U);
    msg.setDestination(28771U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.34012683372573604);
    msg.setSource(1346U);
    msg.setSourceEntity(203U);
    msg.setDestination(19520U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.08464785076514492);
    msg.setSource(29314U);
    msg.setSourceEntity(174U);
    msg.setDestination(50386U);
    msg.setDestinationEntity(29U);
    msg.mid = 61946U;

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
    msg.setTimeStamp(0.6813831677509818);
    msg.setSource(30093U);
    msg.setSourceEntity(121U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(30U);
    msg.mid = 14817U;

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
    msg.setTimeStamp(0.5868954373406451);
    msg.setSource(33488U);
    msg.setSourceEntity(129U);
    msg.setDestination(30942U);
    msg.setDestinationEntity(236U);
    msg.mid = 58826U;

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
    msg.setTimeStamp(0.05733342079182002);
    msg.setSource(7745U);
    msg.setSourceEntity(19U);
    msg.setDestination(5314U);
    msg.setDestinationEntity(185U);
    msg.state = 43U;
    msg.eta = 13126U;
    msg.info.assign("XQNQSEDXPYZZGIKKNWCFATGTECLDFBBWERAYEBQATAJSUGTMJIKZMQMFIVLMLCCCVXHHNGLZADBMHMJSQNONWXDGUHAUCEJHNKSRURJVIEAVSYVEURTCWKEBYZFFYBLWYUTUSQRPJSIFDFXRTPNXOKKPTOTPIOAFNBZQGHDKBMFPYRJDLCWFLQOZYUAOZJXPWHGJXOGXLLIQVRVMRAOWDMIHPRJVYXT");

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
    msg.setTimeStamp(0.12504185665712364);
    msg.setSource(6804U);
    msg.setSourceEntity(169U);
    msg.setDestination(13368U);
    msg.setDestinationEntity(39U);
    msg.state = 80U;
    msg.eta = 4759U;
    msg.info.assign("ABPCFYJEEYWXEUFGCSCJCWPVVDLAZAKNVXOTYIEQZXLLRVFDHSOWKJMBCUDJTFIGHWBGALPIKSTMUAHUYDOQUFZHFWSOKTNMOMXGPIEXOQAFMCQGDGPCGVULRMQKAUINBZYP");

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
    msg.setTimeStamp(0.36202035677105004);
    msg.setSource(44128U);
    msg.setSourceEntity(66U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(249U);
    msg.state = 150U;
    msg.eta = 26546U;
    msg.info.assign("MFODHZCMCMWUCKOMNUFOXOESYFXYEHKEDDZKCUTPBJCACGEYLLUGRCWPJSTPTGLGXBFBQIWYUTUVLITJCMVFOJLRHFKEBQNTBC");

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
    msg.setTimeStamp(0.8165391297851395);
    msg.setSource(31565U);
    msg.setSourceEntity(243U);
    msg.setDestination(58318U);
    msg.setDestinationEntity(67U);
    msg.system = 52058U;
    msg.duration = 7493U;
    msg.speed = 0.7857274025651794;
    msg.speed_units = 158U;
    msg.x = 0.7410144090737799;
    msg.y = 0.7580947249869845;
    msg.z = 0.48633788565870306;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.04113528585408943);
    msg.setSource(4554U);
    msg.setSourceEntity(216U);
    msg.setDestination(7540U);
    msg.setDestinationEntity(226U);
    msg.system = 56887U;
    msg.duration = 44222U;
    msg.speed = 0.4332372781900632;
    msg.speed_units = 75U;
    msg.x = 0.719448867716153;
    msg.y = 0.29191473182537986;
    msg.z = 0.8942844656798689;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.5255193554928415);
    msg.setSource(54365U);
    msg.setSourceEntity(222U);
    msg.setDestination(17878U);
    msg.setDestinationEntity(175U);
    msg.system = 61516U;
    msg.duration = 52554U;
    msg.speed = 0.8855220762442582;
    msg.speed_units = 86U;
    msg.x = 0.5839254888872216;
    msg.y = 0.8111644522177223;
    msg.z = 0.6387086037018543;
    msg.z_units = 117U;

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
    msg.setTimeStamp(0.06761731768008938);
    msg.setSource(39302U);
    msg.setSourceEntity(75U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.010868618848783651;
    msg.lon = 0.9249434021979751;
    msg.speed = 0.1113235520764263;
    msg.speed_units = 246U;
    msg.duration = 26790U;
    msg.sys_a = 60073U;
    msg.sys_b = 18197U;
    msg.move_threshold = 0.5352352899181677;

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
    msg.setTimeStamp(0.4303522707510824);
    msg.setSource(39255U);
    msg.setSourceEntity(33U);
    msg.setDestination(47138U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.7048721072812366;
    msg.lon = 0.7502947777374316;
    msg.speed = 0.7312836002204206;
    msg.speed_units = 157U;
    msg.duration = 56696U;
    msg.sys_a = 36116U;
    msg.sys_b = 49440U;
    msg.move_threshold = 0.4577833953843141;

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
    msg.setTimeStamp(0.49055731919980716);
    msg.setSource(53772U);
    msg.setSourceEntity(201U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.9015093719757937;
    msg.lon = 0.23594722778059762;
    msg.speed = 0.9034627495485886;
    msg.speed_units = 28U;
    msg.duration = 41287U;
    msg.sys_a = 31294U;
    msg.sys_b = 23369U;
    msg.move_threshold = 0.4359797772218267;

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
    msg.setTimeStamp(0.7174380175743299);
    msg.setSource(45481U);
    msg.setSourceEntity(171U);
    msg.setDestination(52472U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7819029004793383;
    msg.lon = 0.5894921724436873;
    msg.z = 0.11103731238903569;
    msg.z_units = 226U;
    msg.speed = 0.5271638495567291;
    msg.speed_units = 0U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.03135153029549964;
    tmp_msg_0.lon = 0.8953423154243848;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WJELTPYGLIANAWCHHRYDMZQMVZESRFQ");

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
    msg.setTimeStamp(0.5326844469675484);
    msg.setSource(16282U);
    msg.setSourceEntity(58U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.12566229216029745;
    msg.lon = 0.7416102705507056;
    msg.z = 0.02573208535648952;
    msg.z_units = 210U;
    msg.speed = 0.2707440607555335;
    msg.speed_units = 172U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6214700333645949;
    tmp_msg_0.lon = 0.4000083948279257;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DPTXLMDPQCWMHYMOYQEILVXLRZYQMZFRJRAOESEEVHHXICVWJUTLPNMQABWMGOXHFZNXEAAFVJQKLYYDINWKGCRXTAVZUEDLDFXXC");

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
    msg.setTimeStamp(0.12957187327477404);
    msg.setSource(44764U);
    msg.setSourceEntity(60U);
    msg.setDestination(36515U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.5316380703020608;
    msg.lon = 0.3008553772273026;
    msg.z = 0.22552863506086673;
    msg.z_units = 99U;
    msg.speed = 0.09239830975489705;
    msg.speed_units = 210U;
    msg.custom.assign("ROJZNCDMQVXONSWFBXBJTGXUCZLRCMRDJOAUPDWGEJHABUTISHYPPBXZAIDWPQZDSQIXETNLZCIYKPBUFJHFUVLNUSGUOWELYLAEPKIDJNMGJTZEVTWFLZWKYIHMZRRATBCKTVSJAEYSQHYRVIFGKQHMBQQGVLKWSHTHXMPLRUGFCLONPVPBAQNBIMCYEJUIGSWVPEAGCBFAQOAEEUGSLOJZMNND");

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
    msg.setTimeStamp(0.43337085302246114);
    msg.setSource(64146U);
    msg.setSourceEntity(129U);
    msg.setDestination(28091U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.6398760876495095;
    msg.lon = 0.39550134129135806;

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
    msg.setTimeStamp(0.5407813250784579);
    msg.setSource(37019U);
    msg.setSourceEntity(102U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.3274152970198242;
    msg.lon = 0.1558655582524846;

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
    msg.setTimeStamp(0.8059552532102812);
    msg.setSource(6961U);
    msg.setSourceEntity(250U);
    msg.setDestination(62026U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.47062604465645874;
    msg.lon = 0.25683533735903896;

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
    msg.setTimeStamp(0.286764146265702);
    msg.setSource(39635U);
    msg.setSourceEntity(55U);
    msg.setDestination(40111U);
    msg.setDestinationEntity(17U);
    msg.timeout = 8981U;
    msg.lat = 0.46458181905666707;
    msg.lon = 0.754197427802614;
    msg.z = 0.827322701697537;
    msg.z_units = 230U;
    msg.pitch = 0.059825434772364794;
    msg.amplitude = 0.9907824885227402;
    msg.duration = 33161U;
    msg.speed = 0.5109038533402304;
    msg.speed_units = 44U;
    msg.radius = 0.24757516875855334;
    msg.direction = 99U;
    msg.custom.assign("CBWIWYLJIVDHPMNBNMLDODISWBPVIBFGGCYXWLDTRVWWLYPYEEJHJKNJXQUNFGFCRSSIZNLSTDFUMUAUHAUIRQUYFSZQVOAAENTJPBBAPQHCDVXD");

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
    msg.setTimeStamp(0.9055615129634985);
    msg.setSource(19728U);
    msg.setSourceEntity(156U);
    msg.setDestination(12246U);
    msg.setDestinationEntity(83U);
    msg.timeout = 18327U;
    msg.lat = 0.5461899192602072;
    msg.lon = 0.08760605609135674;
    msg.z = 0.062051288089689516;
    msg.z_units = 101U;
    msg.pitch = 0.7334314201568011;
    msg.amplitude = 0.04371679604878498;
    msg.duration = 36715U;
    msg.speed = 0.15350540774797128;
    msg.speed_units = 131U;
    msg.radius = 0.7772931777203648;
    msg.direction = 208U;
    msg.custom.assign("RBWZQAEXFOLWRYDKNZLHBXUWEHJDVTNPLHVROOJHDVMNFCKSGMCNYOUWBZAQSEWBURPGLTJFFOVSTIDCYUVQHURZOWAFDLKOPFFYDHMDFZDXSRSTIE");

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
    msg.setTimeStamp(0.9386105638179351);
    msg.setSource(22106U);
    msg.setSourceEntity(170U);
    msg.setDestination(37706U);
    msg.setDestinationEntity(219U);
    msg.timeout = 25984U;
    msg.lat = 0.4346547828873316;
    msg.lon = 0.616853349049743;
    msg.z = 0.020855314176085216;
    msg.z_units = 61U;
    msg.pitch = 0.11329596046458357;
    msg.amplitude = 0.15751582648143614;
    msg.duration = 58368U;
    msg.speed = 0.3981069976298244;
    msg.speed_units = 112U;
    msg.radius = 0.20575271060050127;
    msg.direction = 231U;
    msg.custom.assign("KXYJNIEKCLPGPMAEJJIUBDPCUYDSVSHLEGAEIVRJRMDZFAHQBNKVPYKBTLOAYYIKZRBNSS");

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
    msg.setTimeStamp(0.8465520821765138);
    msg.setSource(42815U);
    msg.setSourceEntity(75U);
    msg.setDestination(6818U);
    msg.setDestinationEntity(58U);
    msg.formation_name.assign("PAZJYXLMJGQKGZXPZKQKGLPVOPPCLPZZHRVZFGBUEMEDBWIXTGPGXNKATLIOUHNEYMUJAWACWJEDCQJBUBGYLISUSBKZFFVXCOWLUYEHDWQBATTEDYIWTFAEMSXMDNNOIYCMMTNUHQUQXNRETMFCDLVHXSSSUNVMZKGFNOLNMHQLFKSVIFODCRRYOTXRKPYBNJKOIIHIRQLEOBXCPBRRIVYQDSAWRTWHJUDTJZFZOAACVJHK");
    msg.reference_frame = 242U;
    msg.custom.assign("SCUJEOEMMCUHQRIMMWBLWVZXFKGWBOFQGPGZXLLOKXFZIMPBUDIRKAFYEVPDNKWZXHPGNSWEPQIOBBYBVBSUBGSKRKJDXYVPCFXMFYHNOJVQQGNZDYGWRFRRVNDJUAHZSUURIPCZSKTHSAQTZNLPGPXICGIWWCEOTHHEDFQJKSYVJLETHCCGJSLCERJVLNCIAEOXDYYTUATDDUOLNBQHYRLDTIWRMJKTLAXWTAZABXNMOKAIMYSNFQAFQOETH");

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
    msg.setTimeStamp(0.8145933515340549);
    msg.setSource(26820U);
    msg.setSourceEntity(50U);
    msg.setDestination(41685U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("FYFLDGLLPPYQHJVERUSCGGIUQVBIUKOIJDEMSMDRJSZDJELNDTVQMAEMCQHVXATJLRZCIGIDQHYHBPFBZCQLWDWOYWCZUTENZWNSKVAGYMCFUNUGNVLOKPOQDFSKXTYVCOJWRSPZTHXBOJZAXJOUEYSTSHBYNEHFGDYXIHAAPTLMPPMSEYLBWNHKRIPFVWPQIFXRRIKZTXZKEC");
    msg.reference_frame = 143U;
    msg.custom.assign("XJRZGVBAYRKTOZJRNXYRXLMFALLUNZFVIUVCITXNQCSBKRDGPRYOZLPHVHHWJSVJSHDKAFSDVFKHHYGGAEOBZGXDEZMLGPMRSKFIXZICAGCCSQETNRJPOQUODFAVJEINBMCWQYQZAUWLBNDQNYJTZJDKSKPTEQISUTPVLVYVMNGYDCUMAY");

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
    msg.setTimeStamp(0.9223785667247353);
    msg.setSource(47973U);
    msg.setSourceEntity(109U);
    msg.setDestination(49753U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("ESTMIEPRAGJKDCCPFDCUDYVVXVFMCBAUHCNNZWSGSXVWXYEIOGFJEXCVLLNDLIEVFKEBWBRZKTJRVIMLEFHWPPDHRIZQMRTJVWZDABBMECXMUSMKLGGGKUNATIZYPBOOPAQYHSWGOEWGJDUHONYKXTQYDBUQLJTPOBFRTRQNAUMYAPQUWBSIRSQOZXEPHRAJYLZWUWOFZHPZKCHFRNXVASS");
    msg.reference_frame = 178U;
    msg.custom.assign("ZAWUUFHQVLWSORQPMBQWIYHNZJFADFKVHUTSPVTWFAQRMCLSIXVXOERNRKHYAOBWUONWDRDFACIMI");

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
    msg.setTimeStamp(0.668933870634584);
    msg.setSource(18517U);
    msg.setSourceEntity(85U);
    msg.setDestination(34U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("BOGEJXRJZJVJSJQNVKBMSOUQFCWOCZJAWUP");
    msg.formation_name.assign("ZWELFEPBCQXLRLHKYTECMXOGIRDKGGCOAVPVKNXSOIHRLSYHFSTCCCTTTZBMFGJOFVPERNSGBDWUQBYJXPMKRUH");
    msg.plan_id.assign("QCAJHIHSMHWFLZIQUCEIFDZKDRPUSJGURMRLNPOVTBSAPOSCKPWUGBIJDLFNAZCBGTPVPZDVKCXZFIUVHTAMFYSEWXZETOQWRGDEKBXTVECQJFYNSTCJNEQKAMVUDCUOGRRBDHLQHN");
    msg.description.assign("QICITWCGIFORTHMKMVGFXRVEZEAWJPOKZAMHDCUOYAJTVSFOYNBEUERGLJVDCQEBUDETEKYLOXWYNFZSBHHXGMDHOHEVZNBAIMHDPAXVBDZDIGYCEGRZOFVLASQRTPDUPTYDGKBAKCLJJRWKZPWPPFGUQUNNPXTUI");
    msg.leader_speed = 0.1411026218103183;
    msg.leader_bank_lim = 0.589983999864288;
    msg.pos_sim_err_lim = 0.5600646104125715;
    msg.pos_sim_err_wrn = 0.22249331651684623;
    msg.pos_sim_err_timeout = 8992U;
    msg.converg_max = 0.13077952196850007;
    msg.converg_timeout = 1354U;
    msg.comms_timeout = 9869U;
    msg.turb_lim = 0.8255152019379394;
    msg.custom.assign("WBDRQZCWMVKMEGRACKBLMQVFJHSYXYSIFGCADBLXGVBNOCMSBPCANYYDFZGPWSJZXLPDSEIPRNORLHGSYPAGWEHGKFMHFLLEIKCXAKBKMDQEFTUPOKGXYXDKHTWTHPNNNJUJMIOCUUVNWREWWUNVZPKBDZEFHVPLJECVZSHDAWJRMOOETDXVHGZZXTFZMSOXQEAFURBIKLJUQHUXCYMIYOAAWFQACUTIUIQJVIORROTRYTBTYZSQNNJQDJ");

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
    msg.setTimeStamp(0.972874583391525);
    msg.setSource(7144U);
    msg.setSourceEntity(10U);
    msg.setDestination(12578U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("WETWOLBKAYSIVTBHJFOLVSBTNMEJYWYWCRODHVPERFPWVSPUFQNRZZGYKTMFZOPAAISAGBCEQOLSHTIPDNKWGLA");
    msg.formation_name.assign("FWGYQAKVBPZVKJDHOIUDTFFLKVCBTXBXUDEXXHNUKGTRCFNYPZMMJDZFGBBLWJHEMZKNDUCJZWAKCPEOOAQQVEYGUPQWXUOCSJISJYQHSCPYSIPQBFLHRGHIPAAEGLNCKWMSLTQRIOWJXARBXKVYSUDTOFRXGMEF");
    msg.plan_id.assign("ZUVXZPXWVDTKPTYCUAGAKHCSZEUJVGNVEY");
    msg.description.assign("EKNHDOVUXCGUYYGHOGUABSEEFDZVRTHZRIMHCAFWVP");
    msg.leader_speed = 0.5316651464005732;
    msg.leader_bank_lim = 0.32819890020109355;
    msg.pos_sim_err_lim = 0.7209013089014;
    msg.pos_sim_err_wrn = 0.9162901786660539;
    msg.pos_sim_err_timeout = 25372U;
    msg.converg_max = 0.6857182573447667;
    msg.converg_timeout = 41191U;
    msg.comms_timeout = 45636U;
    msg.turb_lim = 0.06007474067124374;
    msg.custom.assign("OAMWDRBPFSBXIYPOIIDZYHNWRIBXTKLRQEPMRRWCWEDZLJFVQKKRSSDEPMOOJIQBDDZIIMNCVJCYXZPMHLGCABZCJRLTKHYAWIZOVKFSWTTOGAIEAKRPTUQJQKQS");

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
    msg.setTimeStamp(0.16691674152665026);
    msg.setSource(36467U);
    msg.setSourceEntity(109U);
    msg.setDestination(14126U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("EIMNBWSYABWSNGJSVWXLOLDQAADZY");
    msg.formation_name.assign("HIXRSLEYHJFJRYNUMVFWXFFWTNBYYOISCBVVAXHMUFRIUICIWMVZNUGKVVWOZARWUDBMKJQRXSAGLGLGWQZQYZQLUGAQICUWJDBRYTAFXQDNEAVZJDMRHQSXUMOYBTTKNJOPSOSFMNAJKIBNOUCWLHEEYKZGCTLAPPVSMLLCBCPEIEHDSQNGIRGPEXMPODHEWDKPNZBFTSPPBNLHKYMTWTBUHGRPZCVDFJX");
    msg.plan_id.assign("IFWAOWJWLPKRQLSOJPQIEENRYBAMFSASXSNORYAGWDGK");
    msg.description.assign("JIMCDQCIEZXQDBXOIHFUNLOJZJILCWNXOCRGXSXTOAWFYQFQJDGADVFPWHNAKB");
    msg.leader_speed = 0.31267708870743416;
    msg.leader_bank_lim = 0.8884565829859393;
    msg.pos_sim_err_lim = 0.33225483904545705;
    msg.pos_sim_err_wrn = 0.1911981486739438;
    msg.pos_sim_err_timeout = 47660U;
    msg.converg_max = 0.9916030023197461;
    msg.converg_timeout = 57357U;
    msg.comms_timeout = 12642U;
    msg.turb_lim = 0.07065643062323546;
    msg.custom.assign("HXDCJJQGUJCKPTJYSASEZRLPGKMGIZFRVNYTIZDLGFTHGBTMIEXIWUIBKSHUMCEG");

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
    msg.setTimeStamp(0.6680218746110415);
    msg.setSource(35770U);
    msg.setSourceEntity(66U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(218U);
    msg.control_src = 13785U;
    msg.control_ent = 88U;
    msg.timeout = 0.15052256085572602;
    msg.loiter_radius = 0.5328895608622611;
    msg.altitude_interval = 0.3649620538143883;

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
    msg.setTimeStamp(0.9231828403744216);
    msg.setSource(43251U);
    msg.setSourceEntity(235U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(15U);
    msg.control_src = 2761U;
    msg.control_ent = 117U;
    msg.timeout = 0.3057489279955382;
    msg.loiter_radius = 0.47871240479280097;
    msg.altitude_interval = 0.23508259972717727;

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
    msg.setTimeStamp(0.8034230097172526);
    msg.setSource(40034U);
    msg.setSourceEntity(84U);
    msg.setDestination(15080U);
    msg.setDestinationEntity(83U);
    msg.control_src = 25092U;
    msg.control_ent = 154U;
    msg.timeout = 0.5090071278187461;
    msg.loiter_radius = 0.5280026032263704;
    msg.altitude_interval = 0.32901463282876586;

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
    msg.setTimeStamp(0.14489870955499484);
    msg.setSource(3885U);
    msg.setSourceEntity(12U);
    msg.setDestination(15451U);
    msg.setDestinationEntity(106U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5817808263269417;
    tmp_msg_0.speed_units = 168U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08140937729349396;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.30701585178398594;
    msg.lon = 0.9211597768073712;
    msg.radius = 0.7016936035110697;

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
    msg.setTimeStamp(0.5955681533795997);
    msg.setSource(28575U);
    msg.setSourceEntity(85U);
    msg.setDestination(23154U);
    msg.setDestinationEntity(44U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20015077007875814;
    tmp_msg_0.speed_units = 109U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9143230641188471;
    tmp_msg_1.z_units = 46U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7066504743077036;
    msg.lon = 0.9398133541157053;
    msg.radius = 0.9173460602462422;

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
    msg.setTimeStamp(0.4779820258569729);
    msg.setSource(24807U);
    msg.setSourceEntity(94U);
    msg.setDestination(64650U);
    msg.setDestinationEntity(45U);
    msg.flags = 135U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.555349246427475;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6891370116279869;
    tmp_msg_1.z_units = 109U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7092536870171441;
    msg.lon = 0.07057635205888035;
    msg.radius = 0.09460947192155578;

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
    msg.setTimeStamp(0.10919427878196108);
    msg.setSource(33603U);
    msg.setSourceEntity(44U);
    msg.setDestination(19001U);
    msg.setDestinationEntity(191U);
    msg.control_src = 43605U;
    msg.control_ent = 79U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 238U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8538149643691205;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11853403488195657;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7211108867557042;
    tmp_msg_0.lon = 0.5775001629981414;
    tmp_msg_0.radius = 0.8372369872387113;
    msg.reference.set(tmp_msg_0);
    msg.state = 12U;
    msg.proximity = 253U;

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
    msg.setTimeStamp(0.5660088311500991);
    msg.setSource(41467U);
    msg.setSourceEntity(224U);
    msg.setDestination(21564U);
    msg.setDestinationEntity(77U);
    msg.control_src = 16812U;
    msg.control_ent = 75U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 123U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.07247392344634107;
    tmp_tmp_msg_0_0.speed_units = 164U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.29627934733799155;
    tmp_tmp_msg_0_1.z_units = 145U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8902470229850886;
    tmp_msg_0.lon = 0.6672970301406164;
    tmp_msg_0.radius = 0.7032246718027695;
    msg.reference.set(tmp_msg_0);
    msg.state = 80U;
    msg.proximity = 40U;

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
    msg.setTimeStamp(0.3379848140308751);
    msg.setSource(14098U);
    msg.setSourceEntity(80U);
    msg.setDestination(51016U);
    msg.setDestinationEntity(73U);
    msg.control_src = 49739U;
    msg.control_ent = 196U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 230U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.03493183717747694;
    tmp_tmp_msg_0_0.speed_units = 133U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.29454155317654274;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.70324356244072;
    tmp_msg_0.lon = 0.42245781183735864;
    tmp_msg_0.radius = 0.8222680616990364;
    msg.reference.set(tmp_msg_0);
    msg.state = 235U;
    msg.proximity = 38U;

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
    msg.setTimeStamp(0.11563215597551368);
    msg.setSource(9190U);
    msg.setSourceEntity(94U);
    msg.setDestination(27358U);
    msg.setDestinationEntity(93U);
    msg.ax_cmd = 0.10879235234476092;
    msg.ay_cmd = 0.7393875360192698;
    msg.az_cmd = 0.7310825887231384;
    msg.ax_des = 0.7443871719790432;
    msg.ay_des = 0.01661178311407463;
    msg.az_des = 0.12528745729066793;
    msg.virt_err_x = 0.16549361179169986;
    msg.virt_err_y = 0.776274160030577;
    msg.virt_err_z = 0.6024987698378591;
    msg.surf_fdbk_x = 0.751661439895959;
    msg.surf_fdbk_y = 0.7349652913184442;
    msg.surf_fdbk_z = 0.3078183976250062;
    msg.surf_unkn_x = 0.2394471483208367;
    msg.surf_unkn_y = 0.9077432673368137;
    msg.surf_unkn_z = 0.6608109756753183;
    msg.ss_x = 0.44768470130765536;
    msg.ss_y = 0.5735452005071362;
    msg.ss_z = 0.4807341155718451;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NHETLOGWYIHCABLDHADGARVRACPVWMWDFJTKWDNSJSXKXHMOYQXIJQVBTDNMRZMYEUQAEIUSLBDUKAWYCFXNRMKENZXXOFRXLPCCJSFBGYOYEWBVZBAPZJHVPOULHDSZEMHCYSWIZHSEPUFZEXMHTOERJTIYIAUTGSFV");
    tmp_msg_0.dist = 0.32474039019705714;
    tmp_msg_0.err = 0.6948505576571008;
    tmp_msg_0.ctrl_imp = 0.03897440452923295;
    tmp_msg_0.rel_dir_x = 0.0682222721833361;
    tmp_msg_0.rel_dir_y = 0.8782678748401462;
    tmp_msg_0.rel_dir_z = 0.21251452752585276;
    tmp_msg_0.err_x = 0.3548067730039258;
    tmp_msg_0.err_y = 0.9029915670280481;
    tmp_msg_0.err_z = 0.9498776067691053;
    tmp_msg_0.rf_err_x = 0.24162347896387015;
    tmp_msg_0.rf_err_y = 0.06576378868668808;
    tmp_msg_0.rf_err_z = 0.48418218797274437;
    tmp_msg_0.rf_err_vx = 0.18570546135445065;
    tmp_msg_0.rf_err_vy = 0.2806010052593676;
    tmp_msg_0.rf_err_vz = 0.7792276653046132;
    tmp_msg_0.ss_x = 0.18478042643727233;
    tmp_msg_0.ss_y = 0.01849583014695;
    tmp_msg_0.ss_z = 0.7183849310153451;
    tmp_msg_0.virt_err_x = 0.3263948677181536;
    tmp_msg_0.virt_err_y = 0.8968237501349596;
    tmp_msg_0.virt_err_z = 0.6410718581651719;
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
    msg.setTimeStamp(0.06058500936626898);
    msg.setSource(54614U);
    msg.setSourceEntity(92U);
    msg.setDestination(1315U);
    msg.setDestinationEntity(23U);
    msg.ax_cmd = 0.8826955727486602;
    msg.ay_cmd = 0.6891288242919823;
    msg.az_cmd = 0.05138842693363477;
    msg.ax_des = 0.7043450787054529;
    msg.ay_des = 0.7858491188818657;
    msg.az_des = 0.49876470574409304;
    msg.virt_err_x = 0.4810853923268865;
    msg.virt_err_y = 0.9381796476080441;
    msg.virt_err_z = 0.4879104281253793;
    msg.surf_fdbk_x = 0.7129063287253349;
    msg.surf_fdbk_y = 0.4934679568399377;
    msg.surf_fdbk_z = 0.27586915146197843;
    msg.surf_unkn_x = 0.013199765786778395;
    msg.surf_unkn_y = 0.8264020694931313;
    msg.surf_unkn_z = 0.46691459404259505;
    msg.ss_x = 0.7597034286203433;
    msg.ss_y = 0.5641994355169969;
    msg.ss_z = 0.1999736069653023;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CEJWGKRWRPNGCMCXGCEQZYHYOGZZMBVWFUOBYYAGYJHJCXSQUQWPALSVQVEIJEQKEFNAGNFDKALSWURCGABJICOHURFMJEVJMJBCILUVSADUNDZRHXAWBOAKPYPSLZOSIPTEMGLFIRTJKBXELOHFGDXXZUTVDKASYVTDXORPWEIPTXNMLZMIBZTFUHTHDLUDDFTHBUNTPYWSQMFZRGYKEIBHSZNKORVPNWVWQIQHXBPNYAJODKFLVMM");
    tmp_msg_0.dist = 0.9741241585269469;
    tmp_msg_0.err = 0.11658017939446685;
    tmp_msg_0.ctrl_imp = 0.6629315966408948;
    tmp_msg_0.rel_dir_x = 0.7842291303908284;
    tmp_msg_0.rel_dir_y = 0.1584577741831833;
    tmp_msg_0.rel_dir_z = 0.1343624523441045;
    tmp_msg_0.err_x = 0.7856760473755781;
    tmp_msg_0.err_y = 0.3445814310007891;
    tmp_msg_0.err_z = 0.7365255036752705;
    tmp_msg_0.rf_err_x = 0.003332231660665874;
    tmp_msg_0.rf_err_y = 0.31811393908338825;
    tmp_msg_0.rf_err_z = 0.0030872324709759758;
    tmp_msg_0.rf_err_vx = 0.9994570423359062;
    tmp_msg_0.rf_err_vy = 0.50621823725624;
    tmp_msg_0.rf_err_vz = 0.5171723497304206;
    tmp_msg_0.ss_x = 0.5437078105437929;
    tmp_msg_0.ss_y = 0.3862010900098788;
    tmp_msg_0.ss_z = 0.025109725649359427;
    tmp_msg_0.virt_err_x = 0.19097946700472557;
    tmp_msg_0.virt_err_y = 0.37186859217512913;
    tmp_msg_0.virt_err_z = 0.13816958301136106;
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
    msg.setTimeStamp(0.6991134827778233);
    msg.setSource(17653U);
    msg.setSourceEntity(64U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(108U);
    msg.ax_cmd = 0.9485077552928569;
    msg.ay_cmd = 0.3953159913424459;
    msg.az_cmd = 0.34933148377038625;
    msg.ax_des = 0.6500813878699697;
    msg.ay_des = 0.6158295984280139;
    msg.az_des = 0.15861656169752913;
    msg.virt_err_x = 0.5668559338383468;
    msg.virt_err_y = 0.5575355037158796;
    msg.virt_err_z = 0.42259841610310545;
    msg.surf_fdbk_x = 0.28442094391846084;
    msg.surf_fdbk_y = 0.3061823654912117;
    msg.surf_fdbk_z = 0.5471245547303936;
    msg.surf_unkn_x = 0.04878218465643558;
    msg.surf_unkn_y = 0.12938915904998927;
    msg.surf_unkn_z = 0.541641781176727;
    msg.ss_x = 0.27943016163912926;
    msg.ss_y = 0.290311669060768;
    msg.ss_z = 0.28608214077533656;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EMRIXPFUAMZOXAPVDUKGRNKVUBNHOPOCDTDIFCFHHJNJRBTUQVBZYJMOSCWSYT");
    tmp_msg_0.dist = 0.2131395432492933;
    tmp_msg_0.err = 0.8978188485749327;
    tmp_msg_0.ctrl_imp = 0.8308344047641565;
    tmp_msg_0.rel_dir_x = 0.18279381935737837;
    tmp_msg_0.rel_dir_y = 0.6776529249072213;
    tmp_msg_0.rel_dir_z = 0.27155020547161424;
    tmp_msg_0.err_x = 0.5368265228044875;
    tmp_msg_0.err_y = 0.15793569769274274;
    tmp_msg_0.err_z = 0.37326884469847665;
    tmp_msg_0.rf_err_x = 0.7647792877649322;
    tmp_msg_0.rf_err_y = 0.22766633133321867;
    tmp_msg_0.rf_err_z = 0.11461073113831866;
    tmp_msg_0.rf_err_vx = 0.7721193217868643;
    tmp_msg_0.rf_err_vy = 0.10975969136605968;
    tmp_msg_0.rf_err_vz = 0.34731612868711437;
    tmp_msg_0.ss_x = 0.2712384601206207;
    tmp_msg_0.ss_y = 0.2074744047933733;
    tmp_msg_0.ss_z = 0.9306126525324719;
    tmp_msg_0.virt_err_x = 0.6584730391401956;
    tmp_msg_0.virt_err_y = 0.3206389596628162;
    tmp_msg_0.virt_err_z = 0.5855891917627614;
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
    msg.setTimeStamp(0.18725426733252326);
    msg.setSource(50108U);
    msg.setSourceEntity(90U);
    msg.setDestination(16690U);
    msg.setDestinationEntity(204U);
    msg.s_id.assign("CKYMHSNDFBELRQEFGNCPHXOWSQJTKTLENFZFUAWCXCBVZZSFMIEJYXJZGAIZEYMRHGVDXRNQQUJMKRJVCHJMAABPRULZQVYDPASQPFNGFUCKTUFFDLWORBCANATBALJMPYVXVTOUXYHHHPVUOPHQKICBJZXHILBWGFQWGE");
    msg.dist = 0.7807586218421317;
    msg.err = 0.7282926540647682;
    msg.ctrl_imp = 0.7444652132456349;
    msg.rel_dir_x = 0.22606762450329454;
    msg.rel_dir_y = 0.5751514538439176;
    msg.rel_dir_z = 0.55531862535631;
    msg.err_x = 0.09668402164489909;
    msg.err_y = 0.04363004260431014;
    msg.err_z = 0.3131544701639418;
    msg.rf_err_x = 0.3319738156271389;
    msg.rf_err_y = 0.9890959058573703;
    msg.rf_err_z = 0.8699928820457152;
    msg.rf_err_vx = 0.3247057789291219;
    msg.rf_err_vy = 0.575444325065621;
    msg.rf_err_vz = 0.934518215554648;
    msg.ss_x = 0.9350901282630475;
    msg.ss_y = 0.2898800812155182;
    msg.ss_z = 0.8060197589317897;
    msg.virt_err_x = 0.41863002794503;
    msg.virt_err_y = 0.12378950611763528;
    msg.virt_err_z = 0.9708016277180671;

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
    msg.setTimeStamp(0.20469116328315085);
    msg.setSource(37105U);
    msg.setSourceEntity(203U);
    msg.setDestination(33959U);
    msg.setDestinationEntity(8U);
    msg.s_id.assign("VYGGTWGONJZEWMYHYIXNRKCGFOK");
    msg.dist = 0.6623339572394257;
    msg.err = 0.4954159330617377;
    msg.ctrl_imp = 0.3026653438141692;
    msg.rel_dir_x = 0.1627713208555126;
    msg.rel_dir_y = 0.7492434792042815;
    msg.rel_dir_z = 0.09079106617207111;
    msg.err_x = 0.283279525237921;
    msg.err_y = 0.6419461315883722;
    msg.err_z = 0.9074467785527878;
    msg.rf_err_x = 0.5617700292132821;
    msg.rf_err_y = 0.3991658293915332;
    msg.rf_err_z = 0.40725709017637246;
    msg.rf_err_vx = 0.7930154945332429;
    msg.rf_err_vy = 0.8517046162333499;
    msg.rf_err_vz = 0.9167546253807377;
    msg.ss_x = 0.5697053536872737;
    msg.ss_y = 0.13733028277704284;
    msg.ss_z = 0.1416666000200817;
    msg.virt_err_x = 0.8862023836216892;
    msg.virt_err_y = 0.6137045365443954;
    msg.virt_err_z = 0.31299779323134147;

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
    msg.setTimeStamp(0.23232468711905074);
    msg.setSource(53424U);
    msg.setSourceEntity(250U);
    msg.setDestination(36733U);
    msg.setDestinationEntity(151U);
    msg.s_id.assign("TEQPYOZQMRGHFTUYWSHHWRRMVBTIKNAOUEYNLJBKKCVWXKDWPAYGNOUWFHXRKYHMKBMNPSVGGVWIULQBCXFNXZGSSOAIYJATGQWXSYHXDGDWNJUPJTEIHQTWLKGNQIPQIYJALBGMTMOZIBEOINKEVKCPDZJELDFRSNL");
    msg.dist = 0.6650099958585226;
    msg.err = 0.9680050039451389;
    msg.ctrl_imp = 0.8016005391739627;
    msg.rel_dir_x = 0.8364545280288876;
    msg.rel_dir_y = 0.8964335021076667;
    msg.rel_dir_z = 0.8680655175209778;
    msg.err_x = 0.558253932782627;
    msg.err_y = 0.5669461941150075;
    msg.err_z = 0.001541611984590463;
    msg.rf_err_x = 0.4737749046683938;
    msg.rf_err_y = 0.018002143458825448;
    msg.rf_err_z = 0.7184017838026506;
    msg.rf_err_vx = 0.3739088613613878;
    msg.rf_err_vy = 0.2879765338652611;
    msg.rf_err_vz = 0.7517499071248668;
    msg.ss_x = 0.836040927003703;
    msg.ss_y = 0.8890339455034535;
    msg.ss_z = 0.9564892541845021;
    msg.virt_err_x = 0.19158203015098985;
    msg.virt_err_y = 0.6962014619685525;
    msg.virt_err_z = 0.5984223621706501;

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
    msg.setTimeStamp(0.43421228202159956);
    msg.setSource(2550U);
    msg.setSourceEntity(89U);
    msg.setDestination(25374U);
    msg.setDestinationEntity(41U);
    msg.timeout = 27700U;
    msg.rpm = 0.33746224362607935;
    msg.direction = 236U;
    msg.custom.assign("WPXWXVLVCAJTJOUPCQCSFWEJGSUEIBZBBISRHGCBWYUPNVOFJJNLVMAOIHUPAQKUHUJYMQDATTMAPIXDUQYGRWXAAAD");

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
    msg.setTimeStamp(0.6885262449566922);
    msg.setSource(27490U);
    msg.setSourceEntity(78U);
    msg.setDestination(50331U);
    msg.setDestinationEntity(6U);
    msg.timeout = 37305U;
    msg.rpm = 0.5105227872820518;
    msg.direction = 254U;
    msg.custom.assign("DWPBKUQOBMQUDPRWBODTPJENGUFZKRCHXQFKYJSFYORILTIGAMNSGCVEVPNVFZLPMXJVUYNVNEPPMYXJZLKFTYIWSJSKYQIAXTBCTSJDGAABKEWFZLWMAHNWIXAHMTV");

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
    msg.setTimeStamp(0.9327643783910591);
    msg.setSource(30928U);
    msg.setSourceEntity(85U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(254U);
    msg.timeout = 51688U;
    msg.rpm = 0.7782353732005624;
    msg.direction = 201U;
    msg.custom.assign("UICYJVILFIOGASLTOUKMAQCJFVWUEHZZWOTLDRBKJBRTPXMHUXBRBMRYXXFQLVJNEJKUUSCTLRSSDLFQTQTCGODDXNECGSHSWPVEHZPEAPGWYNMIKIYBUGYIEIKWPVZPNMJBDYVRQNLFNJVXYZMLAWXOYASXBMXZTWMKKVGM");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.8311017373749949);
    msg.setSource(62168U);
    msg.setSourceEntity(29U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(89U);
    msg.op_mode = 239U;
    msg.error_count = 59U;
    msg.error_ents.assign("OSIXQHHKJJNEIGBYOOOLJBLSEIUAMHTYTRZDARUTPQKXDMWFZJANQUROHQPMUKZOWSWEDCQVUUGFYAHFJMBJHVLSNCSXUBDVRGQMOBNMYCGBFWLZFCZYLAEBBGZZGSVTSDVPHJIBDTVXPMPECTTXQUKESEWFYFZTFNQGFKYRXIZMLULJKPXQWPENMARNIDA");
    msg.maneuver_type = 24858U;
    msg.maneuver_stime = 0.99786261823018;
    msg.maneuver_eta = 8577U;
    msg.control_loops = 3203378696U;
    msg.flags = 182U;
    msg.last_error.assign("WGURLNWTKHYSAJGTONQOWONEAMCSQBTGMVUFUSHXLYBJDEPBMDGFCBHDCXUTLPEZNUCEXPKHZOWZJUZPFVQI");
    msg.last_error_time = 0.3587581432317436;

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
    msg.setTimeStamp(0.872863297872214);
    msg.setSource(64403U);
    msg.setSourceEntity(33U);
    msg.setDestination(12961U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 46U;
    msg.error_count = 107U;
    msg.error_ents.assign("XXRFDIBOGKXACEADOGKOCUOYZVBNDUNPMLQSMFAWQUMDFKOHRYDQUVSQEMDZEBJKUGSJDHKACPZPALTUPINIVOFQWUERSANESBLRVXANDOJGRLJAJACHIYHKPBKDLFMPRFTCZKYPEPRUXSSHWMTPYXOTQICY");
    msg.maneuver_type = 17664U;
    msg.maneuver_stime = 0.9474429069077469;
    msg.maneuver_eta = 39948U;
    msg.control_loops = 2571083702U;
    msg.flags = 114U;
    msg.last_error.assign("FDMQWFRHFPIGNHSLMIPANCPLZSKTBWEWOYUKMBIPNMOUYLUOOKHREDHRVGQFRVYCRKOMDJBQFCKGUJWLIKVTWPGRCABZA");
    msg.last_error_time = 0.7147115151148653;

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
    msg.setTimeStamp(0.5079500809888264);
    msg.setSource(58391U);
    msg.setSourceEntity(221U);
    msg.setDestination(27080U);
    msg.setDestinationEntity(15U);
    msg.op_mode = 40U;
    msg.error_count = 219U;
    msg.error_ents.assign("DPUAOIQJLNJAHRFHWPJGSCICEKEMPQTXBHKPNBRJPGRYRZPRNAN");
    msg.maneuver_type = 48043U;
    msg.maneuver_stime = 0.8148641971041364;
    msg.maneuver_eta = 46203U;
    msg.control_loops = 1589169560U;
    msg.flags = 11U;
    msg.last_error.assign("HZGLQHQHGMJFJHXTYKVPAMNUESQISBFQMMUQKHNDMDQOVIDLGJGDWEUVXAHTTEJNBNYITLFWCRMROMJTJMKSAIFUBTOKUDRMXEFHZGQWHYCPKWVOYLZYNUPKXBZAGWZXELCUOOPYVLRXLRIKCRUBBJWDZSVDRWFLPNPVCVZAEEKAWLSKGDWKTNFQRUOBUNPGZBHTYFJCLVXAFEINVSSSXQAGOBPXASYJITIWCBMOQRYAN");
    msg.last_error_time = 0.013981128236984386;

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
    msg.setTimeStamp(0.9403545749409978);
    msg.setSource(49978U);
    msg.setSourceEntity(124U);
    msg.setDestination(37643U);
    msg.setDestinationEntity(159U);
    msg.type = 106U;
    msg.request_id = 33835U;
    msg.command = 245U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.35006027244769167;
    tmp_msg_0.lon = 0.5138311408946349;
    tmp_msg_0.speed = 0.10823469245971129;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.duration = 27492U;
    tmp_msg_0.sys_a = 45797U;
    tmp_msg_0.sys_b = 33206U;
    tmp_msg_0.move_threshold = 0.9092519925098327;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5349U;
    msg.info.assign("XXOHFKDHRFLCTMICJTWBUBNMAYNYKZPUMTDLFGQLTSAQZOJVCWBWXPXOYJAKGGPKYYYMMLWFRLXUNCEQJDLQEQOFSXUHLCOIEEUANWITEJXIRADGYJVJXTLZODRPUESOUVPYIVVZRFD");

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
    msg.setTimeStamp(0.31835267635441167);
    msg.setSource(20639U);
    msg.setSourceEntity(53U);
    msg.setDestination(2693U);
    msg.setDestinationEntity(68U);
    msg.type = 190U;
    msg.request_id = 20528U;
    msg.command = 76U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 64844U;
    tmp_msg_0.lat = 0.8526434797511235;
    tmp_msg_0.lon = 0.921864618947032;
    tmp_msg_0.z = 0.24341057622933748;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.amplitude = 0.7666903753535224;
    tmp_msg_0.pitch = 0.690623639646112;
    tmp_msg_0.speed = 0.4470761239529687;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("ZRGMZVGDFTPSLVZPZPQFSHQKXLLZIEHHLHBVSVYCIABJNTXNFXCKMOOGBSCVRMGYEFLAVNKFTUCHNOYJYKN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43033U;
    msg.info.assign("KTHGHQOMAFCQEAAICHDNNIVKCVTAFRHMDVIKEKHPYSCWTMNMBSCQLSUTOJLYFJMILQCVUKPNKULLLGBJXYWHRMPGOPECGZXAJNMDGSHPEJELSXBWU");

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
    msg.setTimeStamp(0.642503178563704);
    msg.setSource(53488U);
    msg.setSourceEntity(223U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(110U);
    msg.type = 249U;
    msg.request_id = 10294U;
    msg.command = 214U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 45232U;
    tmp_msg_0.lat = 0.5674680686410507;
    tmp_msg_0.lon = 0.6305856981171972;
    tmp_msg_0.z = 0.7803811834443519;
    tmp_msg_0.z_units = 250U;
    tmp_msg_0.speed = 0.8845247018835387;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.custom.assign("GLYIQWQKRSBTAVXMWJSQAYBXCIJKWUVRMTZVCYQJYPEVYZNLILXOQJWVEGGGDVRQZLULUEVICZIYYAQDOSMLPGKACXPOC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56698U;
    msg.info.assign("LJPPKGRQMMXOTEPEFIYORZDTOTXNAEZDDNQVNSJEMHNNMFLCAWUWMDPIBZAKAFUYKGLBZIOQRDSAWXEMHFUCBIAPYROHIQHVHSBPDGLNVLLFSAJEYEGMNLOKFIKIJRXQPTSZHWOHHJCDBTWASFIQYQUCFTUBJUANCCDZKHOHDVPTRTMYWVZBYLMVOWRPVEQZQYWCSDJSEFKZYLUGS");

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
    msg.setTimeStamp(0.5470881836710165);
    msg.setSource(49679U);
    msg.setSourceEntity(218U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(32U);
    msg.command = 39U;
    msg.entities.assign("IUKAZUWCHQJSZLKKOADKSAYBMOOPIDTNNVDNQXBVYBLXHBNMSHBFXGIVKDYFJQUWKWXFULGEIRQAGVSQABHTDHOJLXWBYRRCOCPMGPBKMOERCKAEZFPTKPJFGXNNZRNIYDHVRDVPAHLTFMMJOXZKERIJATWNDJTOEVAAYLWIHPEXJZQUPSUFXMIUGECGUOSDEJLRYWMRZYFQZYSIGEOTUZSPDLHQMPVSFBVIVYRNWSZBJEXCFH");

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
    msg.setTimeStamp(0.04429369719620546);
    msg.setSource(62061U);
    msg.setSourceEntity(87U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(4U);
    msg.command = 59U;
    msg.entities.assign("ODTZZAFUNHHKBJXWHUUNRDAWQYEMXVMBEVSYFNIDBMCRJLWZFOIZKCTYMJHRWYNYTAARTYNOJICCQWXXEHEUFVXRWXMKPMEGADLLPHUQZCHJAQJLUTSRIQVUGGSJBVSMKYJIODKBAPOBBSIXGVFEYDBVMFURZHWSXTIUFW");

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
    msg.setTimeStamp(0.5724274793983115);
    msg.setSource(43241U);
    msg.setSourceEntity(47U);
    msg.setDestination(22559U);
    msg.setDestinationEntity(21U);
    msg.command = 86U;
    msg.entities.assign("FYBQOJMLMWQZLNAITWAIJXSBVXMJNJONYHKPLZCNESXKAJNEHRVFCYYQBFDMSVZPMFDWAWIOQBGUTUWOWIDUMAT");

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
    msg.setTimeStamp(0.7344032538023482);
    msg.setSource(29355U);
    msg.setSourceEntity(118U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(54U);
    msg.mcount = 191U;
    msg.mnames.assign("AAZLYNPCLLHYYQIQMACYZUZSHJNGKWXLEVDNPNRKRTYGQUYRFMNYAXFSCDWNHFOEZICJCQXWUTKGUJPBYGDVNPIHIRGKGTJIIMUFRBSEBUXEMGQTNWYHBLDQDVDFAJEBUEKKDRXOPWWZXEKVCTLCAPGRVRIZHZAMKBJUOAJWCSJAZELJWQULHMINOTVPOEBVFHPIQZORDSVHXKOMOTSXBGXUPZAPMNYVXVGTQFSDRJKTHQCOCMFBSOD");
    msg.ecount = 109U;
    msg.enames.assign("GHDRVWGVOTWFAEORGCUBPQIBPGEWGZLUXMFSEPEERZCYOAQJWFHFBAYRYILPFAMTRZFLZIZDEYJVPCHOTHWCQDFUKTDUSEDKVIOMEJNTUXLCNUNXHGXDSIGKODRHAKKQFEFJMKZIOXVILDUUQWTYSSRAHIWJQLFSDLUZQBBMJPRAYNJHPBZEKAWYLBRCCOVXBZMTTWLYLQGYJNOTIVBSXQMSHNCGASVNPMWH");
    msg.ccount = 79U;
    msg.cnames.assign("LJUZHQUBLIKRLIRJUARRHIUUVCSAVHMMZNEWIYZIXFGCVNBFGQYWLXUEPRXDESWWNTNOPLCVHBYMGIEKPKMQOGOATQVCRKMXUZBBOVHGEOKRSXLUOBDCTTWIPXFFDEVRNEQEMQYKDZQHYTADOTYLMHCKLAMCNQFNBOAPSNZEQPSHVQAZJTSJREDJZIAKZWMFBSKXJPXVXUKU");
    msg.last_error.assign("STKMPYCZMMIFNUTCYMRDUKLHKPQWEEGWRVSOEFJHKXHHKNQDKGPOBXDACAYVRKZWOKFVIWXAVFPRIEUPAWTWOXAQLVBLJTWHSSTHQCMURVFGZHOUEFYDGSLIKSFNIAZRLBPNJHDALGZJCWQYOJDCBQVOQJXXRENJ");
    msg.last_error_time = 0.44373035629235336;

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
    msg.setTimeStamp(0.18187626436638726);
    msg.setSource(3067U);
    msg.setSourceEntity(171U);
    msg.setDestination(9134U);
    msg.setDestinationEntity(15U);
    msg.mcount = 106U;
    msg.mnames.assign("MWELPAZKGZZCTCETLKBEHITRX");
    msg.ecount = 233U;
    msg.enames.assign("FRFFUCFYUTWUVMXPSTRGRBGECNEPPSYWHMSVWNTHFLVLDOTG");
    msg.ccount = 20U;
    msg.cnames.assign("QWODWZEJWVGPLEPUWEFARRZEAFXOSXCCDRPVRHKWMJTNJGIVGJEKDLQRRTXDBHZPLKVXAROXKLIDTHCXUAAQBLYTEMGDYMVHFCWPQGBGAEBYHRITSOZLOFMAWPGWLSPMTLOSFSYJGXUKLIDHVGTVMSCNKRSEHZUYGZPSZ");
    msg.last_error.assign("RNSIFBCGCSRWNLBNWXGGBQZDFXIV");
    msg.last_error_time = 0.710113275955005;

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
    msg.setTimeStamp(0.001507102913523295);
    msg.setSource(52928U);
    msg.setSourceEntity(97U);
    msg.setDestination(45613U);
    msg.setDestinationEntity(247U);
    msg.mcount = 153U;
    msg.mnames.assign("XAUUPIYHDCEMNTIWGPLVGTNQFFJAIQEFORSQFDFKOCWLCBAUQGIYOCMSTTJMJXEGIPVPMZMVATUDHUAUEKWHRLBNAVXMYVGZKHZAYTESXWOSYPKTRLXBBKRGULFHKYHWXBNYPXEBZHDQHRTIZWJNWJDSQEBETDIZJLOSFJNXYHPMJCKPORPPHIDZVGKR");
    msg.ecount = 251U;
    msg.enames.assign("YYZIMXMRZTENBEGDHXVLFJUDHCFYGUONRKGGFCHRUQATDAHDITZTMVDXIFQGNXARBZPQWWESEMOJRVTEBKIUFSINZPIRAJGXFPRUNJJYOWJUKPMLXZXSHBQPVMQKWAOOIHQPWCDLSULTYALWSDCJNKIGSU");
    msg.ccount = 176U;
    msg.cnames.assign("ENEIAMMRYBTKLAKZWJTCFQTFLLYIDTMUXJMIFOLSEIDQEVQLJTRFDWOIYHPGGNCKNFJNOWQWUINBQZE");
    msg.last_error.assign("MGNPEXOTZYPHBYRIXJBYHUUNDTICZQQKNJPFFWUSZYMFLOVMZORJMXCMTGBVNEZDFUWPAXTGUALRQCHXNIIOQVNVVUGMLCMAAGOUVCXDQHKIYIMJJQQKHEWTNTGPSFJWCIFIEYRMKBXRNKHQWSYHCPKYGDUBVKGLGFPBEWADVYBSUXETKWHQPARBDPLXTQOOALTXDPZDRBSSEE");
    msg.last_error_time = 0.31827066579458163;

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
    msg.setTimeStamp(0.3938080930998138);
    msg.setSource(33087U);
    msg.setSourceEntity(18U);
    msg.setDestination(48843U);
    msg.setDestinationEntity(179U);
    msg.mask = 21U;
    msg.max_depth = 0.5011727642185275;
    msg.min_altitude = 0.7058986136501126;
    msg.max_altitude = 0.9461253885462672;
    msg.min_speed = 0.5157904118494683;
    msg.max_speed = 0.3553204510489473;
    msg.max_vrate = 0.6723317326608211;
    msg.lat = 0.1161067195862342;
    msg.lon = 0.7620813468627351;
    msg.orientation = 0.6543948830800957;
    msg.width = 0.6390311869194952;
    msg.length = 0.7643890701784635;

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
    msg.setTimeStamp(0.20193340303784169);
    msg.setSource(34930U);
    msg.setSourceEntity(69U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(120U);
    msg.mask = 102U;
    msg.max_depth = 0.8313645957433675;
    msg.min_altitude = 0.026020377773967596;
    msg.max_altitude = 0.8750287195812929;
    msg.min_speed = 0.9062987520372895;
    msg.max_speed = 0.3105148340229634;
    msg.max_vrate = 0.5212956949080061;
    msg.lat = 0.8422016004107659;
    msg.lon = 0.8232279458767133;
    msg.orientation = 0.7012430393489807;
    msg.width = 0.9352508592096987;
    msg.length = 0.17103241873496322;

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
    msg.setTimeStamp(0.21446546971696312);
    msg.setSource(63678U);
    msg.setSourceEntity(149U);
    msg.setDestination(44280U);
    msg.setDestinationEntity(219U);
    msg.mask = 172U;
    msg.max_depth = 0.40957216940632957;
    msg.min_altitude = 0.9503324133109704;
    msg.max_altitude = 0.021345657166205623;
    msg.min_speed = 0.31027606561533294;
    msg.max_speed = 0.13069920620555975;
    msg.max_vrate = 0.19196981811530545;
    msg.lat = 0.7580311620194359;
    msg.lon = 0.8578201570328233;
    msg.orientation = 0.3920853500085508;
    msg.width = 0.40818104590314164;
    msg.length = 0.581099299544419;

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
    msg.setTimeStamp(0.25829163085348505);
    msg.setSource(19035U);
    msg.setSourceEntity(114U);
    msg.setDestination(20846U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.3724739346747987);
    msg.setSource(37342U);
    msg.setSourceEntity(157U);
    msg.setDestination(45009U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.51767045174399);
    msg.setSource(44972U);
    msg.setSourceEntity(35U);
    msg.setDestination(51065U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8597962136844364);
    msg.setSource(49164U);
    msg.setSourceEntity(70U);
    msg.setDestination(18247U);
    msg.setDestinationEntity(123U);
    msg.duration = 31609U;

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
    msg.setTimeStamp(0.3201735580277745);
    msg.setSource(32864U);
    msg.setSourceEntity(28U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(175U);
    msg.duration = 15595U;

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
    msg.setTimeStamp(0.9329798525789935);
    msg.setSource(37096U);
    msg.setSourceEntity(90U);
    msg.setDestination(39454U);
    msg.setDestinationEntity(124U);
    msg.duration = 20466U;

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
    msg.setTimeStamp(0.0808654412013593);
    msg.setSource(28433U);
    msg.setSourceEntity(163U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(172U);
    msg.enable = 229U;
    msg.mask = 3119474036U;
    msg.scope_ref = 3707282905U;

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
    msg.setTimeStamp(0.2730645474074739);
    msg.setSource(21738U);
    msg.setSourceEntity(217U);
    msg.setDestination(2413U);
    msg.setDestinationEntity(175U);
    msg.enable = 88U;
    msg.mask = 3431654641U;
    msg.scope_ref = 3106384194U;

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
    msg.setTimeStamp(0.3109497938019826);
    msg.setSource(4030U);
    msg.setSourceEntity(58U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(217U);
    msg.enable = 33U;
    msg.mask = 591355180U;
    msg.scope_ref = 1933750341U;

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
    msg.setTimeStamp(0.005664357200150905);
    msg.setSource(54799U);
    msg.setSourceEntity(15U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(72U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.7645278569896604);
    msg.setSource(41514U);
    msg.setSourceEntity(76U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(178U);
    msg.medium = 212U;

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
    msg.setTimeStamp(0.7378722913462225);
    msg.setSource(50630U);
    msg.setSourceEntity(2U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(208U);
    msg.medium = 39U;

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
    msg.setTimeStamp(0.1813847267384786);
    msg.setSource(50459U);
    msg.setSourceEntity(188U);
    msg.setDestination(26142U);
    msg.setDestinationEntity(58U);
    msg.value = 0.14283040520003354;
    msg.type = 211U;

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
    msg.setTimeStamp(0.45624872594714994);
    msg.setSource(59450U);
    msg.setSourceEntity(164U);
    msg.setDestination(42176U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8031040876841491;
    msg.type = 240U;

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
    msg.setTimeStamp(0.2567290969212378);
    msg.setSource(65045U);
    msg.setSourceEntity(181U);
    msg.setDestination(43927U);
    msg.setDestinationEntity(86U);
    msg.value = 0.44045983215813556;
    msg.type = 35U;

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
    msg.setTimeStamp(0.05464233330135759);
    msg.setSource(64863U);
    msg.setSourceEntity(165U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(116U);
    msg.possimerr = 0.8192848346370778;
    msg.converg = 0.05149906370838564;
    msg.turbulence = 0.9156149378555221;
    msg.possimmon = 79U;
    msg.commmon = 251U;
    msg.convergmon = 86U;

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
    msg.setTimeStamp(0.7166277897374755);
    msg.setSource(56237U);
    msg.setSourceEntity(45U);
    msg.setDestination(6592U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.07200276832405939;
    msg.converg = 0.8368129893744835;
    msg.turbulence = 0.6396921849388896;
    msg.possimmon = 87U;
    msg.commmon = 242U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.8892206269378311);
    msg.setSource(18867U);
    msg.setSourceEntity(98U);
    msg.setDestination(24425U);
    msg.setDestinationEntity(20U);
    msg.possimerr = 0.9963015490642576;
    msg.converg = 0.42702394557516465;
    msg.turbulence = 0.5529166414582084;
    msg.possimmon = 252U;
    msg.commmon = 252U;
    msg.convergmon = 170U;

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
    msg.setTimeStamp(0.4096232118169437);
    msg.setSource(22397U);
    msg.setSourceEntity(67U);
    msg.setDestination(28590U);
    msg.setDestinationEntity(1U);
    msg.autonomy = 213U;
    msg.mode.assign("XAWYOQCRULPKQOHJ");

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
    msg.setTimeStamp(0.558763804684884);
    msg.setSource(46169U);
    msg.setSourceEntity(173U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 196U;
    msg.mode.assign("PRCFAFQFRRPDWHGTTWIPUEGHCDMFTWFISBAQZSQYFWFMIUJGVEUCORACAMGOCLGYBHQTXWRDGNPPLINBENXEWKIZECRDYYJEULKYIJSKPUFJOSDRBZDLXXKZCJJOXJXTPTMSAESHGUWMZVCQASVVAPADUGCHGIEENKLYSFRHKKAXXVMZKNDZHHBTLLVVOXHLDFJQHIAQWNIOWNVOYWUDEBBKLMNR");

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
    msg.setTimeStamp(0.9783958047606309);
    msg.setSource(39755U);
    msg.setSourceEntity(169U);
    msg.setDestination(14477U);
    msg.setDestinationEntity(215U);
    msg.autonomy = 4U;
    msg.mode.assign("EMFRFXQNEAPRXDJDKFAHRTPEWVTDPFODJDHSXEBNHGXOXDVGPBGLLAIZQJWWALJFXGANWTJVRKDCFICNTLLVGRNCVWYUUMRGZMMDTRKOIEBUCSQCYSIIHNHHGEUVXPDJTFLKPFJRLXLXMCSWKRQBAJZTYOQUKOZBSYHPZQUHEIZPNNZMCQGOMOINVALWGZSHBYEAYOJWQBNFBVVUM");

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
    msg.setTimeStamp(0.14732329191530058);
    msg.setSource(11878U);
    msg.setSourceEntity(139U);
    msg.setDestination(23268U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.8318438738250061);
    msg.setSource(14351U);
    msg.setSourceEntity(37U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.622674845734342);
    msg.setSource(2133U);
    msg.setSourceEntity(140U);
    msg.setDestination(19701U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.6731199552792623);
    msg.setSource(34108U);
    msg.setSourceEntity(185U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("YRLBXABMKOLVVWUQZERSPTSZNTMQQTQSUCWKEREEZJWCDRRQVSXBBGDUXLMARKMAVDLHGZTBIRUOOOCLYPDNUNWSTVZYYFVJAXHKSJYIGKLGKVFXDJFTDORKJQPSULMCKFIHJVCCOIDMHRIXBBQPTCOBNGGHGNIUNMKVZNLYAWPMHLEHYXTYNPZCEQPEAPUOQFCADATBJHSGRXOPYAWUZ");
    msg.description.assign("QDYKRZQDVCWCSRCLHCQIOYULAZLRVXRHHVMJFNXTENDSZOHPUFHETGZMYTWCRPPGYBXBSPLQSYFKEHKZVYKBXJHCMGYVXIVUBNBCTWXWUKRUGFOWRXWWPPTNJRTCHGQWVQVCZUAPPUIHAIDEIREKZOQWOPJGTLAMJZ");
    msg.vnamespace.assign("DXXMXWNWECVUSGBKPKUJHETQYTQVPFCTHQDSLNSAJAOXEJHMHLLFKQZZGSJWIDUHNJIKPLJWDKPTWRLTOYQHLXXBSRKXYOBMBRPGAFEIMRTISNHNLOEHIMVOZGNZLRAIASYEKZAXPTEMZJENGCWCAGNCYPAILZTKDCIGCXYMPNPMFVQYRQSVAOKVQUMWJFBDEVGMYXZNBOFHVDRTBBOUFVYYCRGSVUTDJICWGUKUBRDZFU");
    msg.start_man_id.assign("BBWSFAVNAXVXVMRQUBEBDOHVAIFEUZOXWPGMWTFCFPCYRUSKLQCFPPLYYPMWTGKDLGIWYRZZESHLQACIWRMSVFTIGOOINSJQJNJTYMOQJUKPDJVTMBDTBKVNIGZAHCDZCJBERHVLWZPXRFTANACRKUIOYKMWPCNNITXFYXFAQWHMKEUBHWDQPLQNUEQVRUKTJRGIEIRODSOZYXMEZYODZYLMCXUGDE");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 5952U;
    tmp_msg_0.plan_size = 1082772241U;
    tmp_msg_0.change_time = 0.4417366169478111;
    tmp_msg_0.change_sid = 9080U;
    tmp_msg_0.change_sname.assign("QBLSPVTQHCKJVCQIKXGDYIOJAISVZZQEGBGWYNUNRWSSMMNXZEKZGYZZRJARECTX");
    const char tmp_tmp_msg_0_0[] = {-36, -51, 18, -21, -41, 23, -61, -92, 56, -41, -7, -4, 112, -102, -96, -125, -22, 96, 71, -109, 44, 84, 51, -110, -81, 87, 59, -34, -36, 123, 93, -51, 26, -21, -92, 24, -55, 22, 20, 60, -73, 74, -4, 124, -72, -88, 57, 49, -90, 24, 96, -27, 73, 125, -36, 20, 34, 53, 105, -59, 76, 85, -91, 73, 53, 57, -123, 45, -79, -79, -5, -46, -11, 79, -47, 77, -43, -4, -78, -81, 29, 70, 115, 52, -120, 70, 85, 60, -73, 123, 68, -82, -89, -125, 118, -107, -41, -16, -13, 61, 81, -111, 95, -42, -61, -44, 73, 67, -126, -74, -10, -25, -28, 59, 55, 95, 106, -80, -38, 120, 104, -33, 114, -43, 99, -89, 122, -20, 113, 48, -120, 13, -27, -91, 110, -22, 65, 125, -4, 47, -6, -111, 6, 30, 25, 7, 116, 112, 56, 65, 0, -52, -18, -28, 122, -62, 115, -118, -3, 42, 123, 83, -106, -44, -4, -124, 121, 9, 95, -45, 18, 106, -103, -108, -71, -2, 66, -101, -27, 20, -17, 91, 99, 98, -109, 120, 68, -2, 94, 55, 33, 83, -56, 63, 67, 102, -103, 0, -53, -54, -93, -70, -98, 93, -10, 71, 80, 8, 33, -107, 2, 17, 49, 101, -62, 53, 7, 99, 30, -28, -66, -114, -58, -1, 34, -99, 109, 56, -117, -28, 81, -22, -71, 66, 104, -54, -122, -25, 73, 54, 90, 35, 14, -102, -71, -15, 28};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.47052280449612194);
    msg.setSource(16763U);
    msg.setSourceEntity(129U);
    msg.setDestination(49784U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("ZCEWMNROXQGHEGYURAGNMZPUHKSVNJYDQWSBFXUMWSEBJPTIJREVKURQNLNGTGKPOBXPKZKAQHJYOBLIBCMUJWDSFTCLWYZPSUDBRMXIVHRXAOURCZYFTLEWASDEUVOGVOOKHPBPZQDVFYOFICQVVDIRCAGLIMYHHKNNWJQZWBXUIHJTCXFDFUGASNCZFMQIR");
    msg.description.assign("ETLCGOZQCOYRPRPYAUWBIRSFREIDLINOQVDPSVJGIBEEGNAHRWMSWE");
    msg.vnamespace.assign("WKZQWOWHAWJNLFVIHWTXTHKNCYFPDCGBBXIISJGHPZQXSQYPMRWYXZZFFTXVEMQRMVNDFTVRUJMZGZDTIHTFOLXEASAIGJJEFYPKURUTOMKIRVJRPGINZROWMCGRSGPQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CQXHIQWJSHOJWOGKFGCCQLLLOXWNGMISUUTTFBDDBNTQWNYQGIILUHDPZBSDCYYZSOHVKXZFZFQITICNFEOGJVRASCJTMPHSNKEGAVLSZWZKAABURCKQYYDWMKVARGQBJUUWZFXGJAEMPEVNVCYMIJRORXLZXDAYSEOUOYPRFJPEOGKBGBEZWNKVDSKRMXDDBQXANMCUIEFSAWVVZHXFQNLYJRCHHIPVTJLPPTTYKUTEXHR");
    tmp_msg_0.value.assign("UVROUIJZZOBOMXLIPPRKXAJHMJBMUJBHFOOWBUHRRJZBQPTQMZEBRFWEUZADINJLEVSKVGDRILCKDNHYDTFQIVQAHQFBSKGUEGLHDXSVXNSEJNYXQWLCYYJNQVMCNMOXXAQOJTMIZAJUUDITUDCYLZGRCMROSVNILCEHYZHFWUZCAENAGBLPQGWCYOFRAPYTKAITTSKFDWSPLIPPSSRMW");
    tmp_msg_0.type = 101U;
    tmp_msg_0.access = 188U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VZGVNTFIACSREZFTUPBPQBJCBSMAYHNWRFOGYIOWZXT");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CGPADRVCAQLYJVRERXNHOBRUNPGXLRHTOJKNIYPKJCHNDPZNAWDJCRYWSBKZEUGULCQHGHHILEMKQPLILJFRHUJTBKBYVBMGZMVHWPWGAJMDAZAYUDSCFUAEAVISIMRSPIQZDGTZTGIRPJYEQTKXBSKZUFGSNCTWVONKSNWLUAHKECJHXOVXYELMFTMKYMZASRBFOWSTFDFFBDNDWCEMFQTYXTUMQLWLUGEPOQYDOBZQZOSXXQOWJVNVCVFPIX");
    tmp_msg_1.dest_man.assign("PZRBMHQLVQEFVJMTXZGDTIFRPQUIWAKPYELDWVDZOBHIXYHEOMSOLGBAXWUPALBKCDMVYOGHNGSAQXKSTQKCJGEFVIPREVYKOQBKXKIUZEYUPOIBNEBBZNNTLZRAFJFAVNLMKHDIHUGBSCYKAUCMSWCWVNOOCXTTFAJDX");
    tmp_msg_1.conditions.assign("XKNEXFVVGXQCWLYYSRCCJPJGLQYZUVCSUMQQATDGOKZJNIENJRSIPNFSOJWYIDHRMVMJAXRYKDAYMKTKIIFUBELBTHDEUWQJGYXZZWDEHNFSGFORQOBUNBYLECH");
    IMC::Aborted tmp_tmp_msg_1_0;
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
    msg.setTimeStamp(0.43816195877568354);
    msg.setSource(26171U);
    msg.setSourceEntity(181U);
    msg.setDestination(14440U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("UGOOMJVFWNSVVDCY");
    msg.description.assign("ODEGLBEYIQVPSZTU");
    msg.vnamespace.assign("VJBUUWIKUDXGXZXJEFXGTGXLSOMRZKZZQMMQRHWDIVYUINUAGEKVTDQXQPWKCHRKSPOJPDJYUCPNZEPHVNYZQACYDCLKGJAMTOPRECFELNBOYJRIVPTAIIVHALWNLOCOTFVGMSXMATONASDSPHLQUQXFRGYWHBQQVUMKMZZNRPHTQFSAVDWHISUJYJLMUETISCEBIFRKRNDFIZLBJBCAGALBJXCRDDNSYWNOGWYKPWTLFHWCYEOMTOV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VZAGOTXDFFDNQDXWXWWFLSDLSHATVNFSSAYJZJKDRIRCMUOWIEPGMBNEGKMNZHOFYEULSHXYWGTVDGLPBNEJUNZA");
    tmp_msg_0.value.assign("IJLFEKCRQVYODORURDVYAYBWDWRFKHHNTSAOUSZTIEZGGQCYWSHMBUHQVTAXCUHHGJLSOPFMESFBYIWSORQBYRSXKPMJLXGGWIECJLOZODXORTFZNIIVOEJMDHJPVAVKYZDVJKNWDQXDELCETNHAKQEZUMWNTFWJKNPBPXTXDCTUTVHNNMXXZISUACZSIRGBYTEFQGBKWA");
    tmp_msg_0.type = 216U;
    tmp_msg_0.access = 84U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HVUKZJLVMFFMXIBEGCLWWQYPAEIQKIMDTUAHSVRUQOPPEIHXIEIQZTHJRENVGKODXSNGTLGAOVYSYSFJJTCDLUSCAGENMGOGNZDKMHRHAYTBRKYHHUUAZKJBCEWFWZDAWBJXBEVUMCOMSVXVARNBOEWHDALORDZFMOYCUDOXGSNVNJJRQCBWTWQYNKSBSPFFPYLLKXNDDQCIQJRGZRSBTPUBUJPWV");
    IMC::ClockControl tmp_msg_1;
    tmp_msg_1.op = 38U;
    tmp_msg_1.clock = 0.33930691527406476;
    tmp_msg_1.tz = -108;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.value = 0.9648149961208622;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7753518874389733);
    msg.setSource(59583U);
    msg.setSourceEntity(220U);
    msg.setDestination(2100U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("THNVDNVEOQLJDFKOSEZNYJHIALJYIRRWZNYAQAHODTPRAGXSZNPSSHVAZQHGEMQIEIHFPTQSVIUS");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 37243U;
    tmp_msg_0.lat = 0.787425033532136;
    tmp_msg_0.lon = 0.14285824877386077;
    tmp_msg_0.z = 0.7047523932894822;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.speed = 0.5912933288714421;
    tmp_msg_0.speed_units = 34U;
    tmp_msg_0.roll = 0.6513696141817814;
    tmp_msg_0.pitch = 0.6826324836472751;
    tmp_msg_0.yaw = 0.7160870803055029;
    tmp_msg_0.custom.assign("WAMYBBNZINWEVVXKCZUPLCKPKAMCFRFOJSPDOUQDXLPINAPZJELUTAFVZWCFRAHSHWYXTSLGWRHLUBDHLYNIYVHSKXUXDCEJVCKMUECVJAIDHKFQSOFGDOBMEDWCZMQOEPFPBQIBSTGSYEYOJKTKRHRALVSECQNXITKRDJUPTRLFMGZQBYAUIIYWOPICVMTHHMZKSZNELNJXZMGZOAXSWUGW");
    msg.data.set(tmp_msg_0);
    IMC::Announce tmp_msg_1;
    tmp_msg_1.sys_name.assign("DVFLFFIRYUXABVGYNWZTQIHI");
    tmp_msg_1.sys_type = 249U;
    tmp_msg_1.owner = 38500U;
    tmp_msg_1.lat = 0.27497197748357616;
    tmp_msg_1.lon = 0.08131917399215083;
    tmp_msg_1.height = 0.24023185486895549;
    tmp_msg_1.services.assign("LEJQOJQVHANWZAQZQOMYRXLHVDSMVQJWIWTGJSRLNXOHTBADBTSZEUMUSCQRRIXPLSZYGOAYFIUZWOJTXNONHXGROODIQDRAFMYMXAJCUVIFECVHTXWZNUJG");
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
    msg.setTimeStamp(0.5828957398071933);
    msg.setSource(56860U);
    msg.setSourceEntity(148U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("VIXFVDEYKDRFQOEHHRLMACKBNSLQJZMMRCVYTGWMBRTLXEDNCXNBPKXNAHYTPSEYOIASCRWTHGQLKKBMJKLVJYUCPLFHUXLIUNLPZQWTAAFHEWMSDSDYGDQVOJVWQUIJTEMFIDMUTFTJGXDJWBPDSWSCZROICFUENGBREJIHYPCTMVSEQSLQRBIPNMGFSKOBZGH");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 12840U;
    tmp_msg_0.lat = 0.6715345336815678;
    tmp_msg_0.lon = 0.7006156920434252;
    tmp_msg_0.z = 0.6524768713475927;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.6802489522995008;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.roll = 0.36368609576355093;
    tmp_msg_0.pitch = 0.10877069627091962;
    tmp_msg_0.yaw = 0.9253028106956581;
    tmp_msg_0.custom.assign("HDJTMVTBBCFVUSHFQSVLYVFZETQJCLWEGTLDXBRUGFMHALMFFLABYIEEJONKIXANXZNUIKCWSMCPULMQMTCXXXJUPRYCAEOTKJTMFGPLSHVXHOKEOKWGBGZWKMWQJQDASARBGONDISXFGLZWZXOYEYM");
    msg.data.set(tmp_msg_0);
    IMC::TrexObservation tmp_msg_1;
    tmp_msg_1.timeline.assign("OAOIZBKZYIGHHZJPGSOSBSRNCYATNVMOGCUVEEFFVUJVZFULSDNHWYIAVEIBVMJVAQQPCGYGIETQJLSLLWZRFRVJDGXAMTXWKSRKOHTZXBALSXISTUIX");
    tmp_msg_1.predicate.assign("HHZCTGMBUYCRSMFKANBINIREHBEFSGULWWG");
    tmp_msg_1.attributes.assign("HHVAXOFQKIGEBAAMILNDFMHYPKWRUCVTTDPCZFMJIJJRMBWVDSNOXQIQTLPUISKQKLGEDXULSAARNSVVUCNYDRGXFNCJAHIGKC");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::WindSpeed tmp_msg_2;
    tmp_msg_2.direction = 0.5189397506797896;
    tmp_msg_2.speed = 0.7794773319769515;
    tmp_msg_2.turbulence = 0.20673114137956616;
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
    msg.setTimeStamp(0.1059686201110781);
    msg.setSource(8487U);
    msg.setSourceEntity(100U);
    msg.setDestination(62758U);
    msg.setDestinationEntity(185U);
    msg.maneuver_id.assign("HIUHXBTDVWFCTGSGYVMBEQFJYQXFRNZBPRGAGRFCXCTAJVYZWAUIVKNWSBKJKFMWSGJKPLEYNRZGQRELUAXPXZMEU");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("UVPWKXWLCTNBLRJZXKDSKCOGEKYSDPEYILLURNABLVCYWRIIUIZDP");
    tmp_msg_0.formation_name.assign("HMSXUXBHMOCMCDMNLBAJJIAEDXDEWAXDARCWDSTNXBCZWBOYQNNTHFIZQDZCHESRWQGFXCUKMGWGUROJPSQKEKXYEFPFLQAJIUZFBVXWQTIEVKXPQLCPLPYTVHJZDVDDIMLEZTCPRSBGRRFJBMYKOOOFIWNOBALWJFUJVZLPUIZKNYTYTPHWQGVAJBJUBSOKRPNEWYSHTGYTKCUZHH");
    tmp_msg_0.plan_id.assign("BWRNFGLZZBGEVTZMBPPLLDATUXXWIEMJUYJVLHKPBDAAEDRHYJSQIEGTOSCVGCTSOGPWWIHWUIVNWLBMIOUSSBKMFEQICABNXKVEOOVFLXYVQCWNZRDEPYLALHFFXDYGTQQNPOVJNSIQUMFRZHUKSKDOLSGKGYMJWTNQDOCYNTPODZSUAMJZWHPRKZHCHTUINSTKAAXMGKRJJFFQZOHXJJXIBRKCVDRXFW");
    tmp_msg_0.description.assign("XBCLGEKSXXMFRTSHNZJSDNOTVDDGMEGJEQTDVPYNPHJFCWVFABMFQTKKHFYCNEKXCRKSOZOGZEAOTBNPVZOKUWQONORWAJBHGINLQPNUWDUWYGTPKHZRYXBSSAQCFIHBOLQEAJRKVPMCWBULEMXLRCYGFKTAIMUXZYAJTMMZIWIVWUVHBSFAUKLULSLEETSVGRQUIRMWDPAJIXIZWHQNCIERVJOLQGPQPVYUSFROYYFMTXANDIDPBCDXJBLZ");
    tmp_msg_0.leader_speed = 0.4420452889092683;
    tmp_msg_0.leader_bank_lim = 0.48976567458926934;
    tmp_msg_0.pos_sim_err_lim = 0.7996031943187032;
    tmp_msg_0.pos_sim_err_wrn = 0.8072715896542664;
    tmp_msg_0.pos_sim_err_timeout = 50975U;
    tmp_msg_0.converg_max = 0.28943946642404383;
    tmp_msg_0.converg_timeout = 7331U;
    tmp_msg_0.comms_timeout = 49196U;
    tmp_msg_0.turb_lim = 0.42049406704313663;
    tmp_msg_0.custom.assign("GSTITVCVOVHTJXFFAONAOBOUZKJLAUVDMLTTNRVOQKEMEGIDZZGRQPUHSCTEOPKXENPSINJWBPJQCWGNYNYEGQBGFYZRDQBAJGGSRGAIHWK");
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
    msg.setTimeStamp(0.9602804438151504);
    msg.setSource(24434U);
    msg.setSourceEntity(32U);
    msg.setDestination(44055U);
    msg.setDestinationEntity(216U);
    msg.source_man.assign("OEOCANUFPFTAWCIKTSURTEHKHTFMVRVMNKSMLSZRJQGEPYDQBNQMFFGOXDULCOBPRCDYBXVVYZBBXLBMIKCRKVIZXUCJWYRJLCVJRUHWXAWNGCNPWOTFOSLNATAQWZIPYJVRQIGZZDYVZKJPJABUHQJRXSTLEWIQBZIDHESLDFUFQYMTIUOQAEDDANI");
    msg.dest_man.assign("ESLZMXKOTLGGONWXTKQEQLFBHIAGFDVIBUJYQUKWLBEUJPPWZZXVYJEXHWCGVIIENGGYRTDBAUTBVLKCFTPNOVHQXALWSVMHEDLBHLFAGZMZSJKNDPAALKDFIO");
    msg.conditions.assign("TEFLUDTKDVFLTGKFEDVOWZJAYCWUHGPJTUIOBXCMSETVRYXOPLMULHQFUWOYSARRGNJAGMXBVFJRAQPHVHNVZJJCRXAGPFXBAYSDWQTKPNJQGRONBFXIUMUIIKSKDQVIADTYECBBBESZIQNIAWCERAEOGXNRDIOMKZMZDLKHSZNUIPWWPLLHPEKEYUOENOFKCBHKNZYVFGYHVXHMVFBXJWLISRDHUCCWQGLTSPBTNZCDGMOQZJRMSTQYZYWX");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 28147U;
    tmp_msg_0.status = 233U;
    tmp_msg_0.text.assign("OIVSESBQQWLABKOVGZTFMCPXPTJBDZEHAZNLGNSWSQUNYQ");
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
    msg.setTimeStamp(0.2706628491594688);
    msg.setSource(30239U);
    msg.setSourceEntity(141U);
    msg.setDestination(34137U);
    msg.setDestinationEntity(217U);
    msg.source_man.assign("ECHYVQAJYJBSNWGQXQEMGDVKKPLRLPCMXIPUDTVTIGTWFLDNVTZSKQMFIWFPOJLQQFA");
    msg.dest_man.assign("HMGYIPWULZUJJYPOCCMZYBZTGTEGIREJTQCLKOJDLHGIEFQAXONFDSWZNJRTHHIVJZPRDTWRRWAVMKAHJOKSKXQCREBAIVVUGEGAPYRUELLKODXOBTGLFMXHVIEYBNTKXFDSZGFUYMWPKQLYIWLNNSVPIQBZCLSSGPKRUMTTUOWFQACCNAPSNKDUUXMPNXYZXNLHUCFKCSIRQSVZX");
    msg.conditions.assign("JFVTTWNQFYSCQYIOTTPBSUHEUOMLJLFREDFXPWQYUZZSKZJBBNGBDUKAKKUUPZZCXHZTDJAQWJEAHLXWVRZPQTBPERIBVQHXCLMSPGFGNIHTODNBGJR");

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
    msg.setTimeStamp(0.33036264689061723);
    msg.setSource(43964U);
    msg.setSourceEntity(153U);
    msg.setDestination(7535U);
    msg.setDestinationEntity(113U);
    msg.source_man.assign("FJCDZWOVBLTRQUGPYCQMLXYBCKGEWYKDIICKWQUHMHSTXQMTESIVWTQLSRXBTNBUHVSGECATODJVYRLZCNJCGJWWGTXESPNXNRABOQBFZYHLGRHIDJUNFBZUXKAOQTJXWKFKZEEIWIMMZPEMPWRJYVDRHBI");
    msg.dest_man.assign("JYDROLBWJXTDMZNSXHDVNBUCDUUEMWHSYGPVKCQGRVWLDKKSAZZMMPCIXPSJIWSZGYQWMCHZQJJYIMONRFAYXQLYATLVCAPWYNLONSQDMHNXZGGXGCHBVPIHDOEKEUDADLPRSOTKJNO");
    msg.conditions.assign("OCDICYDYNVTQLWPGWPXLPDXVQQGNSKWQNWDFYBSXJOARYFSQTLLKRLNSFCHSSPENRBYDAPMMKYMKHCYEKSZVCTLTAJOWZIBHUDPEMDDTNIPGPJIZLWITVXVZONIHTWZEMZRHFJGVAGDWURUHGDBPVBYVKETORFR");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 205U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("DEIMHPIXBWQPSVTKOIFOCVYNNJMFAROYNYMXSOXPEUFKFFMBQGFVLUKPRPRXLGEZSYCIZBPBGWKTOXTJERWVXGDKVLIAZZCXCWTPSETDLDCQYZHIHUSPOQVXJCANNHDQWSRBKRODABXHGOGTUQGSMSPEKOVHCLTWQONLHSQCHYKZDTUUAGLDTMFUHMLLJBKCDAZAGXMHAAVYCVLUGFUEPYIIJBDFUMNNWREJEQNFBJBYZRKWNIWZTREQJWJVA");
    tmp_tmp_msg_0_0.lat = 0.6424841147223115;
    tmp_tmp_msg_0_0.lon = 0.2602584661595947;
    tmp_tmp_msg_0_0.depth = 0.47911084183462826;
    tmp_tmp_msg_0_0.query_channel = 241U;
    tmp_tmp_msg_0_0.reply_channel = 153U;
    tmp_tmp_msg_0_0.transponder_delay = 121U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.15563448545248837);
    msg.setSource(4560U);
    msg.setSourceEntity(70U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(236U);
    msg.command = 151U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QNSTAANVYNLETOYEMNQWTOIVXTYDBKOLEBYXZHBCDFJVLVVBMSUEJDUZISYLANPWHTGZJRCCWEHNKNGTSLSILBCIROQPFTWRZOORHYCZDMPXKFEIDSAAGGLXUQBPXGVKSAUNVCUQJJWZRTLTKYIXKYEFAREFGGIFLJYHTESFKODRHIBQGVMRFUPSGXUCB");
    tmp_msg_0.description.assign("PQVKNNWIDRNMCBUEUZAQDUNSKPGSDHOSHPRGWLCWJHBOCLIWASACZTAIMBQDKYBPYSOMTIGKNOAMNNSERDJYLLFRVVXVVJXEFHOZQQHTFGJKWZSYXLTFSLQABAHBDRPMIGYXUEPFVSRUJM");
    tmp_msg_0.vnamespace.assign("TTQHQMRKJCFBHSTEPMRVNXMELSRFZKVOFUDDUTFCUCNDVUOPOUSPLAYZFSCTIZNNKJIIQVRSUBOWYJYMHCQFTRSWNQWUFNHPNKYGCPIGZJWRSRONVXXFDCBJZCDXZG");
    tmp_msg_0.start_man_id.assign("ODKTQYEEJVIPMBHSBVJFRCGM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HUDDREXANCICSBYJWVJZQFWCIGIMSLYXUVXGQZFMPFUWOUJJBNQVRRNJGYVRXGZPAZOBQIUXHSDYKBOWLRXCABTEUIFSHAKHKOEJEBOOHYDHPJQZBOSSCULDXNDPRMFAHYQMYZPDVWWFIMITGLFLQDSDNKWFXXJWCIPMNKGNSYKGAPOZGPKCYMUUGLHOANLEREVANLMEAIWKNTELCHIKUJBQTQCTWPMSBXKTRGPTHDQVTSAVY");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.15594011190067947;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.1440249535401663;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.9787970505513015;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 10U;
    tmp_tmp_tmp_msg_0_0_0.duration = 26050U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 63457U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 61736U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.422431286381989;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Collision tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6374795525328879;
    tmp_tmp_msg_0_1.type = 159U;
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
    msg.setTimeStamp(0.2847672012974043);
    msg.setSource(64748U);
    msg.setSourceEntity(102U);
    msg.setDestination(61323U);
    msg.setDestinationEntity(217U);
    msg.command = 62U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WOMMJYOYPPAOXEEBPDFGFCQYGEQCVJWYZPXTUFWFAZIO");
    tmp_msg_0.description.assign("YFCYZDKSMWZLFEAZMCXDATOBHRTJTXWTLOSBTHOYCPCOI");
    tmp_msg_0.vnamespace.assign("ZNXLHEGLVKHPPLMRRJFBOXLZGMIMHPDSQBQYLORJFNEUODFZUWUVCFFSOFILPJCYWHORJKRSBOTEBVUINMPJCUUEVLFGGPAQUDCCQMOJVIAHEOCDGSCQEQAXQCGGKWVEXVIHUQWHTGAKCAFRMYDWXADOEZOLDDCYIZRKNARWPTHVKINNYLFMJITTBYWBYJZZHEUFRKYPQVTYAGAUXDKGINBBNTAXSVIMXWKTPTYNBWMXJEJSHQBPSN");
    tmp_msg_0.start_man_id.assign("KVYBIUMUDENXBTQUIRPYOLAAZVODQTXSCXIVOINPAMHUYSOEXMFJJIWOKHZKKGZMDCNEMYHSXYRNMTUOWFWDKZHDWUEZLZTWQGRCGSGIJMNRCRYLXTBGRBSTGQARJDRGSGVIDCWPIAHKUPZOFFAEVNPNULOLVVYEQFNDAUQQJWVFEFSNLPATOSVWSBXFZZVRKTUTFYYXPWBKPECZGHBFQPNHQHBKJKJGSJDXTYCMEP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CHXHPZJPPKSGPQYNMXERWWKOZRHTLXTIJSVNPZRDLKYTZEUSCVBHIXLEPGSUWAZFITYVIPVETOFWRGEQRDWFDMVQUWEUUMNFUQ");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPitch tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.7651024046320042;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 55158U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GANVEVFIAYPKMSSGUAYTQCJXPCWUZZVQVBFCFSLWZJOWCRGZCJAZBQIXYDEUALBSMOPJHQKZUQUPKYOUORLNYRPGNCHEXQUXYDPLODLWXXHBSGTOOTAMPHKDWVFKQVITSXJDXXJSGWZNAVBLMELIRGRPVS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("STVFHPTKTKZCBEWUYEVQWHFFIDMUOBMCLBEXKGUNVUCGHIGJHLOYZRNNYYSVJFEPHPACDRYQYGYQNZLRFWCMIQDGVCYXBHPIZZWPQFLQVOFXMSFAWPWNLFSKWLLTDCGUJHKXAIWXMATWEHPRNJJDSIETJUJMOTEBXBRSGPVPHZOLIKKYXXTIEABNRDWODBIAKMZZXCMXROURQJJBOZETLKUHCPTQCDSQUF");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredPitch tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.5738889872888777;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 63047U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("RUYNFQYUIHQWNXBITORMBVPXKSLFNAOPVCFDRCCZZTSKXWZUJTTSDGEYFJTPYWUHPRKOCBRMXLMQDGHGYBUCGMWQSFNZVCHJYVBKXJGNAZKHEKMEGRXZPLXLFRAWEPQABOJSSEDEOEQOKUUJRPDFNYJIZVUTAGWDEDNMZVCIOFGVCXVJILEH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.9810898027889597);
    msg.setSource(16577U);
    msg.setSourceEntity(161U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(163U);
    msg.command = 164U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NTZDZFBFQLRVZXMQGRKVIEEKGIBFQFMLIWRIOHXLVLYPQJCFGYGEAXVSNISXPGYOHLZNSKKLMJTFWNCEAJWCQKNJHNNJTOXZFXYTFFMZYMSSNIUZLOOLRDXCDVMYAWLEOEGZBREJIOCREZRAUUWPPWWF");
    tmp_msg_0.description.assign("JIDTXQBDZWDCFLGFIOTOCWLTHKYCMHMKMGHUYRPEOFSBQYBDILBALVUCZMBEAIXDNSYWFT");
    tmp_msg_0.vnamespace.assign("FDFDUGHUAKTCWWHQSOKJYBIUGDALMYOBSSXDHFJEKVYFMETDCULWRQLUAZTFGJYVNIUIVQROVZGPHNKSSZNZWBOPOSYMABRFFYJZAGNPIAINTOGZVRVDMXBVPWPBJQUAOZFOEXWYOYKM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PIYZSFBQWCZJVTUORPSUETHJWIZJXQPYTHGQABKIPUTNUCJAXSJXHUKKCSQIDIDIHGTRBVLBQKKNAVHTO");
    tmp_tmp_msg_0_0.value.assign("UABVTDIEUJVLMLOTDNEQEVXRITJOKGOOXDFCMNBQRVQATVUEILIAKHTRSEOJKXFONGGYHCIYAJWDMKSCGNGSIU");
    tmp_tmp_msg_0_0.type = 46U;
    tmp_tmp_msg_0_0.access = 136U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VLFVWLMDIMTJKHCKBCENZZRVBKIQQVGTCUIZRCXN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EQIQLCXXJKHVBSQFQLCVEWTKFXJMLCAAKOBENSWBSKTETRIWAPHKBOMGWWQDRJYNGZAHMAYHIUXOHTSBJXONSQLRRAMFDXZWZQFBIHGSDALNNVWPJEDOFQPCEMRKUQVBIETPSYLCQSNYHUGNRUTUBBNWMIWEJX");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6972282987904023;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5902207074644585;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.23925750974505788;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 56U;
    tmp_tmp_tmp_msg_0_1_0.duration = 29137U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 26861U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 49715U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.24105552129781882;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VelocityDelta tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.time = 0.958184878627935;
    tmp_tmp_tmp_msg_0_1_1.x = 0.11956438734682462;
    tmp_tmp_tmp_msg_0_1_1.y = 0.15485089316189016;
    tmp_tmp_tmp_msg_0_1_1.z = 0.9949370013158069;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.48916234218138954);
    msg.setSource(918U);
    msg.setSourceEntity(150U);
    msg.setDestination(51812U);
    msg.setDestinationEntity(183U);
    msg.state = 211U;
    msg.plan_id.assign("FCGRKGMZLYIRRXNBBFOUPCNEEOEMZKMYOXKTSKCULTJWBAKNAQUJMLICTQZHZLVUMSIYOHPFSPMQXZXSVRTYASGSFGSDUDLQJGYWBXTSPZHCOKAJUPQDMELILFNEBJHFFOGEYDLPWKAWEVGXWHBYSPTHWQMIQHLNVCQNWCDRSJXHONTRQMCHDTIEGLIIQYWRXJWVOPIJAVAFTTOURDDZDNVAODZRVKEPUCIZFXZVR");
    msg.comm_level = 109U;

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
    msg.setTimeStamp(0.19638538386406457);
    msg.setSource(38526U);
    msg.setSourceEntity(213U);
    msg.setDestination(50189U);
    msg.setDestinationEntity(45U);
    msg.state = 132U;
    msg.plan_id.assign("TPYFROOHDLAKQVZPAMLAIPXPBGRDNXTNRHCZKNWEVINECWJOSTFWOVGPCBMEUYLSGIAJUJSQFDNYVQBEGNTCOIIBUUFSVBKEYZUSHY");
    msg.comm_level = 37U;

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
    msg.setTimeStamp(0.9893827919451084);
    msg.setSource(33357U);
    msg.setSourceEntity(131U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(170U);
    msg.state = 142U;
    msg.plan_id.assign("OHGLVBMATSKSGPJQZXXLEMOM");
    msg.comm_level = 50U;

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
    msg.setTimeStamp(0.8579863109468784);
    msg.setSource(25935U);
    msg.setSourceEntity(232U);
    msg.setDestination(64319U);
    msg.setDestinationEntity(165U);
    msg.type = 108U;
    msg.op = 81U;
    msg.request_id = 20829U;
    msg.plan_id.assign("KDKFELEBGIHQECECOVQFLZUZRIILATYMZRHUAXICGFNJGELUBJWBTEDMXAFDPNCRSWRQMIXGJWQJHBLPTHVNJVLKYIGKKBMCWLDX");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 57263U;
    tmp_msg_0.lat = 0.6251139564838276;
    tmp_msg_0.lon = 0.2788603746454956;
    tmp_msg_0.z = 0.16722457213482467;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.pitch = 0.8552091852554736;
    tmp_msg_0.amplitude = 0.6864622073237849;
    tmp_msg_0.duration = 3675U;
    tmp_msg_0.speed = 0.6083804318322596;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.radius = 0.07636484020383949;
    tmp_msg_0.direction = 214U;
    tmp_msg_0.custom.assign("UFVRDEBISNUGZNUDXLYLHXUPWHZARZO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QPJGLJVQVNDTRBMKTOLDYZJUYDCKBWBENAZIYESWNFAHYKYITHYAWIUEPHTVHUKMRPKDAULHCOVEIITOINZFPOGYCFWREFKQXVFWEMDWOPXRJZULJRXBZMMJAGDBMMRDFXQ");

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
    msg.setTimeStamp(0.30700248036807243);
    msg.setSource(24440U);
    msg.setSourceEntity(198U);
    msg.setDestination(10301U);
    msg.setDestinationEntity(249U);
    msg.type = 126U;
    msg.op = 54U;
    msg.request_id = 27605U;
    msg.plan_id.assign("RWFBVURBQTQVTVLEQFGKAXOLPAUOGFDXHJNEUWUQFHRKLQZWDAOOVXEEIPMRFTNOPCFSBYZCJYWZJXCUJTAPOWUCGBMAECGYJUIZMTTHLIQYJWCBSNKFLOGEUKYXLHRHLHYZOJOFAGDHUDISIJMEMMDYJBCPATKTVHGFGRNVDTXNMWQTNYNXKIZQDXLVPRAHYPCQAZBDIGPZSESKAIQGOREKBRBWPPLVDWEZBKYDNLCSSXSIIKVVMNMCUSJXFH");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 92U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WYZKBNQYTXFOJRRVYJYBKQQBLVSCPFOUQMAZTJAMEIXKJKYDOMMGJLUCPXRFXIZDTWNCGWCXDFCRUQSBAOHSUKDSLXZRAXETAHELNWFREQPVGNMECJPBIKMFJLH");

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
    msg.setTimeStamp(0.8422901096428743);
    msg.setSource(63531U);
    msg.setSourceEntity(135U);
    msg.setDestination(1919U);
    msg.setDestinationEntity(26U);
    msg.type = 205U;
    msg.op = 86U;
    msg.request_id = 48708U;
    msg.plan_id.assign("DHNSIFRLVGVRPSOCIUAXXBRMZAHACVKRFPPIDDVZABGLXKYWKWDGMEEFXSPHGSSMWBVOJANFWJQZOO");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.41928194927333173;
    tmp_msg_0.i = 0.17602215232989116;
    tmp_msg_0.d = 0.8461771373657498;
    tmp_msg_0.a = 0.004493371999023332;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WRCOCEXVNTEYWMSLDCXATAMDMQEJZMVHCFTFRZVOPQNOFABO");

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
    msg.setTimeStamp(0.3812045576266865);
    msg.setSource(33615U);
    msg.setSourceEntity(62U);
    msg.setDestination(59922U);
    msg.setDestinationEntity(39U);
    msg.plan_count = 61531U;
    msg.plan_size = 3558020016U;
    msg.change_time = 0.5133578500811014;
    msg.change_sid = 36095U;
    msg.change_sname.assign("GCVLUMJPUEFNSKFUZLOSNKDQIZWZTVRKFCYLFSRAIEDCHRHUHXWWOQZTWFEFMFALEOJXRSMNKZSENBKYWXHDVSDFBTYWTZHYYPQPTUZMIGIDBEEHBKIGMLOWPLDOHNRVJNXPROEXXQDUCMAVODJ");
    const char tmp_msg_0[] = {4, -73, 12, 16, 36, -91, -1, -49, -107, 118, 85, -68, 87, 56, -112, -22, 101, 71, 39, -65, 91, -37, -105, 111, 13, -21, -128, -48, 115, 61, 26, -93, -60, 18, 94, -35, -66, -62, -121, 87, 73, 15, 82, 41, -33, 84, 22, -62, -14, -74, -110, 17, 11, 69, 74, -63, -28, 72, -44, 68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SBIGGKFKFRTCMJFPBEMKPLLDSYKPDDKYOOMYGUVSHLEANDZVRVBHPIRSIMETLDJINFJYXQSLDGAIXYJOWLEIQUUFMORZNBHOHMHFWDSQHMWVRXGTUZCVCTMUNQIUKJTEUNFWWPZXOYXZC");
    tmp_msg_1.plan_size = 7920U;
    tmp_msg_1.change_time = 0.6238500216738643;
    tmp_msg_1.change_sid = 18522U;
    tmp_msg_1.change_sname.assign("ZGQKCMRUXKPJDQXUBSBFGVEAPENFCILVMDDHWFSVDJRBQOBGMZCTWNHEGRNWMIEPVXXUSTVATXDLZCVGOILGHFCTOEROLPFKNJDMNBKINJJLADPYBUKCFBY");
    const char tmp_tmp_msg_1_0[] = {-117, 42, 94, -52, 42, -65, -40, 90, 37, 80, -108, -11, -94, 102, 94, -108, -93, 123, 6, 61, 31, -94, 13, -34, 84, 18, -56, -66, -47, -5, -104, 95, 48, -99, -116, 87, 66, -119, -2, -1, -128, -115, -109, -95, 48, 57, -103, -20, 117, 48, 115, 67, -48, -44, 77, -74, -116, 120, 29, -15, -78, -40, -89, -42, -91, -2, -54, 21, 105, -33, -40, -113, -115, -14, -60, 98, 118, -26, 3, 96, 47, -48, 86, 111, 18, 56, 106, -75, -81, 28, -117, 94, 83, 35, -55, -15, -58, -17, -17, -57, 37, -44, -58, -27, 96, 59, -47, -101, -83, -119, -70, 93, 86, -95, -128, 38, -50, -90, -91, -22, -68, -30, -97, -72, 15, 118, 98, 34, 30, 67, -72, -91, -1, -92, -95, 4, 35, -41, 14, -2, -7, 90};
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
    msg.setTimeStamp(0.923979744227739);
    msg.setSource(50051U);
    msg.setSourceEntity(155U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(217U);
    msg.plan_count = 18808U;
    msg.plan_size = 3254967009U;
    msg.change_time = 0.5492108410432974;
    msg.change_sid = 33810U;
    msg.change_sname.assign("MEWCOQZOBJYODABNKOUFOGTXYNHLUZRQLKTFATFZVBPEXATYDXCBSLJGIJMVVRVUJHOCAIMNMJPPGHUHFDNPNNHNFBGDMFJHTAWLQYSRSPCRVXSPQIBHDNGHCLKGEEJNRCBKIYIDWTUKTLTELHAMESZWYILIQWYSDDAZLNMUJLPVEXESAXECRVSPOKFTQ");
    const char tmp_msg_0[] = {-106, -69, 81, -103, -53, 11, -86, 109, -92, -97, 117, -63, 61, -112, -125, -88, -66, 14, -3, -10, -4, -101, 32, 70, -33, -51, 79, -13, 24, -82, 89, 95, -88, 6, 112, -69, -9, 4, 74, -66, 106, 61, -121, -73, -57, 13, -22, 17, -47, 29, 79, -59, 39, 41, -34, 10, 2, 41, -25, -83, -93, 8, 116, -58, -26, 120, 79, 65, 35, 75, 32, -64, -72, -30, -2, 5, -21, -48, 13, 22, 23, -89, -47, 51, 46, -7, -12, -23, 47, 95, 98, -108, -45, -66, -79, -50, 107, 16, 91, -49, -74, -43, -69, 74, 97, 54, -70, 68, -62, -117, -24, 18, 11, 65, 13, -42, 44, 91, -13, -120, 27, -13, 56, -22, 115, 11, -68, -1, 98, -15, 109, 94, -48, -14, 91, 3, -41, -60, 0, -112, -114, -31, 37, -40, 104, -1, 104, 20, 68, -9, 83, -47, 63, 7, -103, -122, 1, 114, -97, 50, -111, 89, 0, -51, 114, 33, -68, 118};
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
    msg.setTimeStamp(0.10546294742694473);
    msg.setSource(38283U);
    msg.setSourceEntity(253U);
    msg.setDestination(52659U);
    msg.setDestinationEntity(71U);
    msg.plan_count = 18298U;
    msg.plan_size = 2408402405U;
    msg.change_time = 0.12573949269530316;
    msg.change_sid = 16419U;
    msg.change_sname.assign("UJGPRSVRIBXPDQIMJVOLBXOCGVADFEUJHKMSQFXAXKUOWTSBIWICBGDCPNGFHYOAEKNEZMGQOZHCHHOOAKKVJLLLZYKHTBWWMCIDUYTMDXKIATILLZVAWBDP");
    const char tmp_msg_0[] = {-68, 21, -3, 75, 116, 26, 39, 73, -84, 120, -125, -99, -79, 26, -22, -34, -70, 125, -94, 72, -49, -60, -60, 53, 115, -92, 101, -26, 121, 36, 75, 87, 34, -101, -29, -124, 19, 71, 30, 17, 68, 91, 74, -3, -3, -101, 102, 115, -68, 28, -20, -87, -124, -67, -126, -60, 91, 59, 7, -108, 33, -113, 30, 40, -98, -17, 88, 84, -9, 83, 82, -128, -22, 121, -47, 47, 91, -124, -62, 97};
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
    msg.setTimeStamp(0.6877293000287994);
    msg.setSource(6039U);
    msg.setSourceEntity(174U);
    msg.setDestination(26016U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("HRUANCDBKSEHOFPBFVMZOAWLQHDJELZBMBRPSCD");
    msg.plan_size = 25152U;
    msg.change_time = 0.6581165260718741;
    msg.change_sid = 56186U;
    msg.change_sname.assign("SMNJHOFJNKMVBJJWTVJEACJMLBFCCTWWL");
    const char tmp_msg_0[] = {103, -118, 16, 92, 42, 38, 8, -41, -101, 114, -70, 62, 43, 9, -4, 4, -80, 118, 48, -60, -26, -46, 114, -108, -101, 69, 106, 72, -51, 125, 41, -20, -112, -47, -30, 28, -42, 31, 115, 32, 4, -61, -54, 5, 115, -122, -38, -94, -43, 99, -65, 90, -101, -2, -81, -127, -19, -49, 100, -78, -3, -49, -111, -10, 117, 68, -33, -30, 90, 56, 85, -120, 9, 33, -26, 3, -22, 48, -47, -34, -49, 24, 83, -58, -26, 19, 47, 60, 57, -49, 115, -17, -58, 44, 49, 42, 38, 6, 101, 68, 32, -16, -54, 32, -12, 29, -74, -10, 7, 19, -51, 68, -26, -30, -103, 43, -125, -112, -118, 56, -46, -3, 24, 97, -19, 76, 98, 48, 99, -78, -125, -45, -118, -66, 122, -98, 16, -82, -122, 63, -97, 103, -4, 32, -70, 44};
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
    msg.setTimeStamp(0.1722431133726673);
    msg.setSource(42895U);
    msg.setSourceEntity(162U);
    msg.setDestination(397U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("IBYTIIDWRAIOOSUOUCSBGFFUMKLIIRRKPDVNDFYXHGPGJFUDMONXIDVVRPRKRZTIGAJYKVLYAJAXHVKAWCZWZOMKJYXTEFHJTFEHIPCOWFFGYYPLEXZT");
    msg.plan_size = 42812U;
    msg.change_time = 0.7386691731052757;
    msg.change_sid = 25428U;
    msg.change_sname.assign("AVZCORVHTGILJFLXETXCCKDIKQNJTKPDUNCTVXWQBBBEETPIEPZGHLDHESTNNMDXASEKBQDVXXLYPRAOVOJRYFXLUCQWIOMGSLVKQTKDUXPOVVJRARQOCZAPWWZONSA");
    const char tmp_msg_0[] = {85, 79, 114, 87, 44, 40, 118, 80, 52, 38, -97, -72, -82, -79, 68, -80, -98, -121, 39, -66, 88, -65, -19, -88, -104, 18, 11, 38, -115, -106, -66, -71, -106, -61, 84, -51, -105, -77, 5, -39, -122, 21, -72, -22, 86, 103, -118, 33, -16, -115, -128, -9, 121, 72, -51, -73, 117, 73, 49, 3, -36, -70, 110, 125, 123, 98, 34, -4, -47, -29, 70, 82, -73, -12, 92, 99, 113, 62, -126, -98, -97, 9, 100, -15, 73, 46, -83, 41, -28, 86, 36, -11, -82, 86, 60, -70, -23, 86, 4, -96, 97, 67, -103, 100, 105, 15, 90, 97, 43, 109, 114, -2, -127, -32, -79, 47, 112, -34, 120, 102, 59, -93, -60, 59, -36, 34, 82, 17, 12, 107, 18, -1, 42, 29, -16, 35, 106, -128, -18, -89, -83, 63, 82, 37, 56, 105, 12, 23, 57, -30, -101, 5, -72, -9, 30, 76, 100, 67, -4, -89, 46, -107, 37, 6, 56, -109, -98, 0, -12, 4, -110, 77, -34, -77, 12, 24, 124, 117, 12, -9, 115, -111, 6, -113, 125, -99, 22, -30, -85, -103, 62, 106, 24, 36, -77, -36, -124, -90, 16, 89, -124, -33, 110, -41, 102, 28, 6, -64, 92, -40, -4, 65, 92, 16, -119, -31, 27, -96, 54, 98, -82, -89, -51, 119, 125, -56, -54, -4, 84, 42, 18, 42, -83, 73, -82, 106, -4, -22, 8, 69, -101, 76, 59};
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
    msg.setTimeStamp(0.7076664157448945);
    msg.setSource(19057U);
    msg.setSourceEntity(67U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(178U);
    msg.plan_id.assign("ZVYLEJWGTKHZMVWXNQTYYQBNFVHFUNBSFJJAPKMLTVUCTLDFBLWC");
    msg.plan_size = 39219U;
    msg.change_time = 0.07618422866154062;
    msg.change_sid = 12526U;
    msg.change_sname.assign("ITTSFNELIUZGGZOUFJDGCMGMCPTSZKOKWVNMCBBUEDNRSWXFYTOWFCSBHDVCQSKETYXPNQUIBIGAFHCMKAQVMOWVVQYPDKJNLJHTAZSULPDGEQGFRXBXYJFHD");
    const char tmp_msg_0[] = {-95, 119, 114, -60, -70, 90, -13, -66, -2, -76, -95, -36, 51, 108, -35, 16, -126, -68, -90, -97, 86, -61, -112, 75, 21, 101, -123, 122, 81, -50, -95, -1, 68, 77, 31, 124, 48, 116, 37, -64, 23, 29, 47, 22, -94, 38, 55, 17, -100, -4, -7, 22, 87, -66, -87, 50, -116, -62, 14, -80, 77, 109, 11, 28, 17, 25, 33, 87, -120, 60, -64, -16, 28, -9, 66, 69, 67, -51, -61, 1, 56, -8, 123, 82, -105, -104, 120, 9, 75, 88, 27, 82, 78, -37, -103, -55, 96, -45, -95, -108, -74, 69, 123, 23, 96, 118, -109, 4, 53, 17, 115, 63, 104, 114, -118, -59, -95, -83, 28, 78, 113, -62, 83, 9, 10, 24, -50, -49, 72, -41, -22, -56, 42, 100, 83, 22, -24, -28, -17, 50, 77, 126, -6, 38, 43, -20, 84};
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
    msg.setTimeStamp(0.44676021746239425);
    msg.setSource(64053U);
    msg.setSourceEntity(81U);
    msg.setDestination(37832U);
    msg.setDestinationEntity(230U);
    msg.type = 62U;
    msg.op = 129U;
    msg.request_id = 60842U;
    msg.plan_id.assign("EBRIRTQXUPESMNZTECLDUEQAPPZZYZEHQNVMJAHMBUVMITRYLANYRFMLHDGNCQJULPQLWPVALEBXSXEJQVHFUKYDSRYCKWJMGVOOCZZWYCERCUVKYBXXLGTCHFNPZZGORVFVYNKOARTTPCLIUIZJABKAWOQKIXEPYBWSONMQYKGZRIJPWCTNDSJOVDLWOKNRHIWFUHWJTDGBVCIFLUQDHXDNFASKABSFS");
    msg.flags = 29132U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5334073075948738;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 28846U;
    tmp_msg_0.custom.assign("OLBSPMWKDXVWSNJFJKGGBEHGPZFGPUHFJWMIUAGOCIEBHMITPQIPVMUIZUSJZILUYDKYIWSFQNUVSYLIBBQOCIHRXCBYNALLVAFTMYLQPKKLMNEGFRYKNETDFQTHWWBGJZOVASZPDONXADIGDOXESRZMKYRTOPR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZNHFKLJMHQUEGGXRGMPNIWALQWWXBMFJQCLCIFYOIDBHBKZLUYPRHETDLBJSWCYQBSVBUBYKDIXCOZQDROJ");

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
    msg.setTimeStamp(0.3486902191445612);
    msg.setSource(61932U);
    msg.setSourceEntity(173U);
    msg.setDestination(17489U);
    msg.setDestinationEntity(118U);
    msg.type = 35U;
    msg.op = 28U;
    msg.request_id = 27633U;
    msg.plan_id.assign("ATLVGUKSOSHJGCANFNPJGDSYCELPRKACTNV");
    msg.flags = 24095U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 39235U;
    tmp_msg_0.plan_size = 338208224U;
    tmp_msg_0.change_time = 0.24577319617962923;
    tmp_msg_0.change_sid = 57393U;
    tmp_msg_0.change_sname.assign("VAGJSBAHILIKTWHYUUPMVXWFDGBYKBHLTWMHRPBRSDRQZODHXRYTSLZYPSZVVUQEDIBDVAVCBZOQFQQIDYUOXMGZHTOOFDKMGFULERMSULNJCPPUGNOZRAGNNQMYEKALNTFFRPQWGBLOXSMVXXMWVAPWMJKPNLCITYZXSOPHTVCTQEUKHJCFETNJJEQTZPODCJNRYZMRCGINAKCLWACKXXESBUEWOADFESKSIILHGYWXZFY");
    const char tmp_tmp_msg_0_0[] = {-7, -46, -82, -1, 72, -124, -11, 60, -85, 0, 35, -64, -56, -36, -51, 49, -42, 48, 11, 105, 76, 42, 93, 23, 4, -101, 112, 29, -56, -78, 99, -70, -91, -9, -82, -93, 42, 54, 109, 118, 54, 12, 104, -117, -67, -120, 1, -121, -56, 60, -14, -41, -31, -87, 103, -29, 80, -7, -75, 11, 34, -98, 32, 22};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NRPWQEPTNKVLCBSQFOIIBJHZMVXWBZFWIOUGFSCXHOXLXVHDMXSOHNKPQGTEMHVYKFACZNTJQIHVKUJBLBAMGPKUUIVTGQIURALAKYYADGSZRHOIEGWHUEWGJSYXEHPICPOKAZQJWLXYFQRGLJMTLJOUMUNMFDFPZSRVCRZEANSWTMJER");

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
    msg.setTimeStamp(0.6254363848258274);
    msg.setSource(55525U);
    msg.setSourceEntity(187U);
    msg.setDestination(29646U);
    msg.setDestinationEntity(56U);
    msg.type = 21U;
    msg.op = 89U;
    msg.request_id = 41723U;
    msg.plan_id.assign("VJYHPLRUDUPZRCUMFNGXAIKHSITYIZETORAIFRLLAWVTHUNIDXIQPQTSDJGECAQXNNUDEYH");
    msg.flags = 54603U;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.6370271902210728;
    tmp_msg_0.bias_r = 0.960768286913821;
    tmp_msg_0.cog = 0.22230613522760467;
    tmp_msg_0.cyaw = 0.8714979754735833;
    tmp_msg_0.lbl_rej_level = 0.07370928334803872;
    tmp_msg_0.gps_rej_level = 0.8074256816778435;
    tmp_msg_0.custom_x = 0.312769173964373;
    tmp_msg_0.custom_y = 0.5110841526176033;
    tmp_msg_0.custom_z = 0.8563797735052427;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KWOYVZFSJXPNUIIAGDSRQBCBZTUUSMEWYHWSLDXIAVGPNNWMZKARBRBMAHHLVKVQUYSLZHFWGVNJHTVDOQPMTNMKPQRGGLTKSORBOWEECQPOFJMJEGIUAZQGKDSCDXTFSPQHBILCMHMXZ");

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
    msg.setTimeStamp(0.915804531654784);
    msg.setSource(43302U);
    msg.setSourceEntity(53U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(225U);
    msg.state = 219U;
    msg.plan_id.assign("OLGLUNYPKFOAHFWSKRUXWKUNMKMZNBONITNGELREHRHFPRYQQDNRTAKKGFEBGDEWFBWNMVVROGXCISYVUKVMZBYIID");
    msg.plan_eta = 841021959;
    msg.plan_progress = 0.9092999733743774;
    msg.man_id.assign("EZSAIRVRLBHOYYIMZCXQFGHEDBMYXNXMVIATBQPSTQWGDXAVSERTCLVHHZPOSFLDAQNCOOYSVMEJXKTNDIFHQAUGPIONBDJJSWPRNDDUTZOHZCNYGJKPIHOGJXCDTCLXVDRTWIWZRXHCPAYEFMNWZKMPQXSJMQRELFUQGAQBBOWKFLRJUFUMAUNYSAZODRWYKVPIKSFPZMUUJBBUWLKLLENVBRPVACXCWWIETYQHGMUTHECOKTBVGJKLNGGSFF");
    msg.man_type = 51230U;
    msg.man_eta = -1454022669;
    msg.last_outcome = 199U;

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
    msg.setTimeStamp(0.0062729264304850485);
    msg.setSource(55305U);
    msg.setSourceEntity(137U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(120U);
    msg.state = 78U;
    msg.plan_id.assign("GVBSGLFTLKOAMJOPXCRJDAWGLLAXUQTLQGHZOVAUNEKWBVDUXKVCEUIBJTFQUJZZKLWAEWBWIKXYUFZSNJKFSOQUCMKBBFPTSZYTQJYYUHCJEXBMAGXRVCYJNMGAIPMNGNYYWRHDDDHHPTERHXARPZMHCQBLSQNIXIWF");
    msg.plan_eta = 1385036284;
    msg.plan_progress = 0.8982700207489756;
    msg.man_id.assign("MZZFXTJAPKNAOTVSVLWXXSHIHDMD");
    msg.man_type = 17482U;
    msg.man_eta = 636947649;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.4981515663266102);
    msg.setSource(19283U);
    msg.setSourceEntity(152U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(223U);
    msg.state = 215U;
    msg.plan_id.assign("OORPLAJFTPCRWFJYFKZLAYSUXBVBQJSDXNVKQFWFZRSNEWEZMUKCGOKHSOBJELMZRQHVHJYLVHWJWIUTGZEDEIN");
    msg.plan_eta = 788630024;
    msg.plan_progress = 0.595910462265041;
    msg.man_id.assign("ZEWROJDCLPKIXSSGTQEIYTACWCQGVMPCGAUTMNJXCXATHNNXZPDQJZGUTXDOZPCEEVMNLGZAOYOBXEXMFIKMHFYNBCYTFIVB");
    msg.man_type = 20974U;
    msg.man_eta = -1175244259;
    msg.last_outcome = 97U;

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
    msg.setTimeStamp(0.18363087481639073);
    msg.setSource(2915U);
    msg.setSourceEntity(131U);
    msg.setDestination(2065U);
    msg.setDestinationEntity(129U);
    msg.name.assign("HOERLVLISFRGZEVEABEFOEPYAZJEJJPQLHRGZUFYVNQEMHTJKCFLZLQ");
    msg.value.assign("XFDGKYDLSSFKKJEZQXYQMKBZDETVGUDBHSQNDCOBWGSHRQQWNLDAMKLIEWFNFAWTHIHFQYWOZXJZNYBJPIEURSEJDUQUMGMTCIZXMARKSOWCKXMWPRSPTA");
    msg.type = 5U;
    msg.access = 16U;

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
    msg.setTimeStamp(0.6006817255225723);
    msg.setSource(56396U);
    msg.setSourceEntity(35U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(166U);
    msg.name.assign("OJGIPTTIMVPGKJCMSALTHDFXHCZYZUXDOXFUBCXRBHYKULERRRBOXVBAOSVQTSKNCEXIAMIKUYLIJCLXQZRPGLYR");
    msg.value.assign("AZZLCGQYKYKDEKZJHKHLGXBVDPNUTOXVQJEDETGEFWPJIYGPDZMXXNFJKECOVKYPMPLQRPVEKWDSNUWZYGUZOHYTAWOGIPJMJFQSSORYSNLDRVLTRIQNXT");
    msg.type = 131U;
    msg.access = 192U;

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
    msg.setTimeStamp(0.36331037205653993);
    msg.setSource(55650U);
    msg.setSourceEntity(85U);
    msg.setDestination(41944U);
    msg.setDestinationEntity(184U);
    msg.name.assign("KMDPATELYCLVJXTNZEEUEPZCPQRVKWIUXPLTCKIQMYLDWDRWTFIGYAPWNSOHSACOKQAHNRFLSQJNECMJQLHIBUQVANZRCMIDBEAWGUBVFMISMKCIAFNJETHZOLXKGDPTRJRKVJOACQYQBTMGXSDZZWDOBFSFGKAJWDYNMOMPCVUAGRIHU");
    msg.value.assign("EWJNDGJNFIBWURJITTXWYIQAPGYOISVOQFCNPRABYRVUKQOCEVCHLNFBMCOHHAAORLDYSMXOWKHDHRCDRQXXTXBDSAUKSRLJSMVDTNRXYEBPTQWLDNVCFEMMKTIFHFEJQOBZQUOKPGVFJURFESIMPQWFLZWSYVACPCJDGLEHZGVSDCUNQKLMUPVLPNRHYJGCGXTXZZNWBITEEWAHYISFOHDZKKJMOGGGIMTLZBUBZILTN");
    msg.type = 231U;
    msg.access = 149U;

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
    msg.setTimeStamp(0.5301509008068871);
    msg.setSource(60065U);
    msg.setSourceEntity(10U);
    msg.setDestination(22355U);
    msg.setDestinationEntity(228U);
    msg.cmd = 46U;
    msg.op = 71U;
    msg.plan_id.assign("AWOJXIBBSEUKXEKVJXJNDNMDFBUPQMRIEMPGWYZSHNSOTCOWGXSNSGERVBPCYVAWCDKSUPMUZRORWKHMLTTFZCD");
    msg.params.assign("BBCETADRYURLASGTNZGLDFPWYZTEQBAFJDEDVKAJCOXUNZYIXNRQVOYANNINSHPSUKXHZMVHQMQJMVPHCGZBLVXFZOTFOCRCENALOHXSWEJBGOURCRSDIHIKFTUFBVPRKJPYIXVXSYPFSBQBTZMNWDDHOAHKTXGEMMUYCTGZTAKC");

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
    msg.setTimeStamp(0.38922660376552176);
    msg.setSource(58832U);
    msg.setSourceEntity(21U);
    msg.setDestination(54774U);
    msg.setDestinationEntity(35U);
    msg.cmd = 148U;
    msg.op = 164U;
    msg.plan_id.assign("UEYECPTOGFJCQNOSFUDQSEPNAIESCXHPNCXRBTBOIDBAZJXNWQRIGJILZWRZYTJGKMZFZBODPWDNKKLLCFVYDPKAHWRMXHSHITVHJVCBZYXQLNFYHZXGTTBVDSBUKMOFJIQVIYUALDIGNWLJWTYUESVUWFP");
    msg.params.assign("ILJSJAFVOZFLUDEAFYDTXAZBKPWSFLA");

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
    msg.setTimeStamp(0.2984709992271284);
    msg.setSource(61324U);
    msg.setSourceEntity(213U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(70U);
    msg.cmd = 131U;
    msg.op = 245U;
    msg.plan_id.assign("DTFZPBKJTEGVVVGXUXGHNAYNWYRNYCSGAUROILMTFSYCH");
    msg.params.assign("NEVLONQBUHXQGCFGTDWLWQPRDQORAFCZRIGLBGUNLLMEQBPNWEVNCTKUYSGMWOSAHQTFSCOXGTPBKGCUJGSXTCAVSZXCMRMFXBWMPLAFEIOIICBYMPEUFJBVKKKJYMJADFACUYKPSKHNNWFJUJHZHRDXYKERHVTJQCDALSTZIXWPPYGFYRDQUBXLQN");

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
    msg.setTimeStamp(0.6042933812046634);
    msg.setSource(51386U);
    msg.setSourceEntity(49U);
    msg.setDestination(11393U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("OSTYOYFHYYMOBLJKNBFTKIGPUIHUVDORHACJIINNBYJCZEJHHPGGOBXBDFFRBJLVWVLEGLZVNFZPSFFQAVGUYMHDNOJWSBCJUXQANDKAZDLQDIARUMCDESCOUWGRHKMWZZWTINRZLCKAPWQGZQOSTRASYPUTKMLWQSKTMGWYJCXMFDKQQTETLMEXGUPFEVXWXLAMKDRPIXWRRBADPHJUUCMCFZOLEII");
    msg.op = 10U;
    msg.lat = 0.994424159028357;
    msg.lon = 0.8501903622603821;
    msg.height = 0.44501603223728703;
    msg.x = 0.6643191014736632;
    msg.y = 0.5498799564660151;
    msg.z = 0.7406744451291453;
    msg.phi = 0.45040853285548965;
    msg.theta = 0.3563302675390676;
    msg.psi = 0.32422127443537674;
    msg.vx = 0.89855973384857;
    msg.vy = 0.13324549734190005;
    msg.vz = 0.7505228859386548;
    msg.p = 0.6528848301376223;
    msg.q = 0.10565990981048767;
    msg.r = 0.9082472845915135;
    msg.svx = 0.027964309083514993;
    msg.svy = 0.08433867337752288;
    msg.svz = 0.2640739867947769;

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
    msg.setTimeStamp(0.8981605532371942);
    msg.setSource(28907U);
    msg.setSourceEntity(24U);
    msg.setDestination(49975U);
    msg.setDestinationEntity(128U);
    msg.group_name.assign("RATHLBMPXZNZQTSMFGORYMSBCJXNUSKLGIBTZGOYOYCBYNCAYWVYYZFKHRXPDVVAWXRKDUOIJCXPHMQBYDERPRXVAATLJMISWUYEWLUXQEFTIPIDJYNTMPEHPKAREDSWIXUSGMBLZQ");
    msg.op = 136U;
    msg.lat = 0.5748775715590766;
    msg.lon = 0.484045135638029;
    msg.height = 0.4647838700474831;
    msg.x = 0.6834796856434924;
    msg.y = 0.936981588911687;
    msg.z = 0.10287810544360187;
    msg.phi = 0.28218561050069757;
    msg.theta = 0.9266764375333851;
    msg.psi = 0.34957866704615437;
    msg.vx = 0.881245098575619;
    msg.vy = 0.9258034228517005;
    msg.vz = 0.004275166684864051;
    msg.p = 0.060529614771478335;
    msg.q = 0.21762255117494989;
    msg.r = 0.10709795164263358;
    msg.svx = 0.19255089856007457;
    msg.svy = 0.4839624824735449;
    msg.svz = 0.7108173922863502;

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
    msg.setTimeStamp(0.5740602158294769);
    msg.setSource(13291U);
    msg.setSourceEntity(52U);
    msg.setDestination(36606U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("ZPHDCONEZDBEYEFYQQWTIPQIJLAWJLVSJXDMVQMVKSPAUJEGTPACQXXGHRFVUBIDDMCQG");
    msg.op = 143U;
    msg.lat = 0.4848313162427814;
    msg.lon = 0.5466062272172448;
    msg.height = 0.6530903698526633;
    msg.x = 0.9523213369126832;
    msg.y = 0.7700123074785208;
    msg.z = 0.7319627122975351;
    msg.phi = 0.6387556061770833;
    msg.theta = 0.3986921439111375;
    msg.psi = 0.7638458742279893;
    msg.vx = 0.024371665863297864;
    msg.vy = 0.36321849165627873;
    msg.vz = 0.5464224017951951;
    msg.p = 0.5620513262375761;
    msg.q = 0.8569114018505163;
    msg.r = 0.901817943883437;
    msg.svx = 0.7142471196021093;
    msg.svy = 0.9799504036903648;
    msg.svz = 0.859217671287842;

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
    msg.setTimeStamp(0.9929914315330588);
    msg.setSource(23681U);
    msg.setSourceEntity(10U);
    msg.setDestination(63665U);
    msg.setDestinationEntity(13U);
    msg.plan_id.assign("SDGWMKRFUCPXRWVVNZXWQBDHCVEZNGXJRRUXBU");
    msg.type = 23U;
    msg.properties = 42U;
    msg.durations.assign("LYFDGRQGTJGKAACMUKOGLLDWTSUMZJMYHVSRZRHNFWQAHEJVHSBDXTMQAOHVTXGIPJGVTYAKN");
    msg.distances.assign("YIINFFFBNIFKRUZHEUFKAWGMCSVRBRYIGUMYBHQAOUVCMTLUHJGSMOFLVTYEZKKDWEXMVEIWFPOGXIWKSDMYGEQULRTFDGHFOUZCZDEAPWHQPDVRATOARAIUKBGSJRYXYYVMXXVKCJNJZJCNJPBHXQPQZHQLBCJINVLAWBDMCZHQ");
    msg.actions.assign("AYAWCFWCIWKKVIGNUVFSLDZZULSHRLXEUMPHGLHGFVBJEMZIBVBABMYRWASKIWHMJGVKUMOERSEJXIIHCJPRPYWTSQEWQYAQCRCQDLSUBLDOBARJIXFPNOOBTWJFVE");
    msg.fuel.assign("FERNHXBFGMGKKFMXLCOCWVLTXWENZKCIRMAJOYNUHWJKDAEDEDIQLOQLVYJZNUEBUUAPKVNCLSERRAFQUYSFYIUCMVGAHJGBOHVZTWZVWLPOUSDVJLIIDDKZDKOVRJGRFXBGKSOAHNEQZFWSYQQGGDMLONPSTXJXHBSUNWBAIAREVZVPIIQPTHXZBOCWCMIMYZJMSGJTDAFXKQCIHXSUCTPCDGNYX");

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
    msg.setTimeStamp(0.20567687687257252);
    msg.setSource(12790U);
    msg.setSourceEntity(217U);
    msg.setDestination(11549U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("IAHCVRYZNOAZCXXBPFWTCPXDHUIPDLDAKAOPYOQJNZQKKMOZSTETSYFRPWGZEGCIIGVNEJAWMSGGCAKVUCJLWWCBRAYGPYRZELDGP");
    msg.type = 197U;
    msg.properties = 50U;
    msg.durations.assign("YWAHHZYDCBINCKYSSAZVTPUVMSAKGORFOLEDRKKMYNCCCJUFNFZBBRRWIONFVBNLRQZTF");
    msg.distances.assign("FTNKVSJECNWPFHKKZYDWZAGWZGXDGJIXIYMPDXHERPEUWKTPNQEDNZTJGYRMNZEQRYPOYHSUOPBSVIH");
    msg.actions.assign("TVJOZHBWJBEQOXBWBBUBXHJFAIW");
    msg.fuel.assign("QAVUYZCUDDDDBEMFQBGWKFMKLPGZEONWVVFOBZZCIIAJHHPFPCSDRNYGLHYVOVLXJJDNMNBHPBRMMIMUQOSVTVJULJJPZZZGODAHRSPCKATVTPKAWTONHDCEGPNTKKQWWCSLGDIRWHAWDYSQXEYGTTEWLOIOUQIESALBSXQRJRVGXB");

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
    msg.setTimeStamp(0.4024023422997536);
    msg.setSource(40166U);
    msg.setSourceEntity(35U);
    msg.setDestination(20075U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("YMAIYNEXRLDZHVNACWNVRZHQYUFFLBCYHRMBMQ");
    msg.type = 249U;
    msg.properties = 64U;
    msg.durations.assign("OZIKXPAZYKGMIUFNGLRTLNEKTQOIVMFLGKLEJNSCLOXQQIZTKTDWLKGM");
    msg.distances.assign("KJPKVKDYSZHTCSRLGSIRJUZDEORSGLZYLCNFAHXYBOERAEUUDOGEJRTWYQBVWWQMZUXSDKSFSLQBIQLTZL");
    msg.actions.assign("USDZRKGIUWMXKSUGXQBJKWNMXVELFYHNIWARDTAPWOGORDHVMSDCLOKEYDJOBJNEWIPBCRBBNQYPHRYVZUELTORGWLHXEAEAVXMUGOHYAQMYMTZHEDVFRBJJWLHRNXNARKSTCNWFFTMZSHGKYKDPCDUGOAGFMQPTLHTQEZSFYRVQDIJNPXXITQLVUMCNQKCFTEWQZB");
    msg.fuel.assign("EIXOMXKFGDGKVUDDBRSHBVPJMNMALEHOINIANPGOWSXDTFKAOPBWWBYCFORLTDUZYRSRCDJDGQLPWHYPMIDQHWEK");

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
    msg.setTimeStamp(0.7438233060558134);
    msg.setSource(50142U);
    msg.setSourceEntity(186U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.6639178290440882;
    msg.lon = 0.9006885870290451;
    msg.depth = 0.21207716695159218;
    msg.roll = 0.8849343722756469;
    msg.pitch = 0.2280752340523815;
    msg.yaw = 0.9704362268008841;
    msg.rcp_time = 0.039159905722384813;
    msg.sid.assign("THQWKGVLRYVZICLAZJWKKCAZIAQWLRRXUQIVYFAGUITZSWPVKLRFJITTDZVLUUSVWASZBJFDDGGVCRHBNEJNHRTGNNXLENZEBKZAXPYNJYFQOIHTOMOBDELCKVDAHGHUDGKXPSJUAFMSYVMXRMYCSWUAYBPOYEPNSRVUMCOZOKWEJAGDSQXWNTIFPUUDGOHXRMRXPBCLMQJSNYOBYIOF");
    msg.s_type = 93U;

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
    msg.setTimeStamp(0.8320431651700101);
    msg.setSource(43244U);
    msg.setSourceEntity(82U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.5850540898661583;
    msg.lon = 0.7944367818632272;
    msg.depth = 0.2206397317843075;
    msg.roll = 0.8087317213495944;
    msg.pitch = 0.25589982878004136;
    msg.yaw = 0.4417455296297005;
    msg.rcp_time = 0.48980015162234003;
    msg.sid.assign("BRUEISWKZLEIXPBRYGOWOPBUUTGJPSTLSARZQDVZTIYOPZDAHRJJLCCISAVSHGCWCLUCGDFDVOWJFTJFPRYRSAJFYHKMDURQDLGTZZFYKIGCENSDHNMMTQTKDVCXZXOTWLWMPFFNHUQNFIHETANWZEFBXVQCYQVLEXIBOGE");
    msg.s_type = 167U;

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
    msg.setTimeStamp(0.16428017051791344);
    msg.setSource(62339U);
    msg.setSourceEntity(24U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.7956851789635487;
    msg.lon = 0.056922468760299716;
    msg.depth = 0.8247013346037921;
    msg.roll = 0.4379436451869204;
    msg.pitch = 0.26231093222090185;
    msg.yaw = 0.4344587836872311;
    msg.rcp_time = 0.1907852105702138;
    msg.sid.assign("LWNFMBHPVTZXZGOWHMQSVILLJRHKZWPBZYVILTCKZCUSAXRGPPEZMUDMDKKMGGTBETLBIRAEBIFAXOKINOPNCQFSSOBLASEBVUXSPGCHTYJYTTFZERYPQFCRSKYPAJQLGNKPCXBEEJWVQADWVLHCFUDLBEPWUEHSDYIMDWFUKMNFIYIDJGYXT");
    msg.s_type = 95U;

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
    msg.setTimeStamp(0.31882272377192544);
    msg.setSource(57240U);
    msg.setSourceEntity(185U);
    msg.setDestination(23760U);
    msg.setDestinationEntity(123U);
    msg.id.assign("MKWMELRYKWGBDZGCCQESOFKRHCKYEQFSXSDVFCTOGTPOXYWZZQNDLYEPKTVCZPNHORNRRKMDDTEHHNPTGBPCWYOXDHVIFQRNARCIJUEZLUCSJOYCNGVJUSKGDNPUVIHXLBMTRMLUSKOAYGVFQEAF");
    msg.sensor_class.assign("LXZSDFFRNUQVKOYWJFGKHQPDQURQYRAKOTCBDCWGBNXINWKWNAFUIBATLFRRVDLMBOEJDAVXNELTEZXTIWXTGKTVRDRMSHPAFCSUDUTUOYQHIAVBJZPRUHIHLQYSSIOACJEXGZLQKMEDKMCSHEUKYPJDJRWPGWNZVMDJIZBMCFAWXMNNEYEPBSOHMCOSEYCUYLBZKPQYWCKHBJLGTHJOIAQXLGCVAXBPGFMZNITUY");
    msg.lat = 0.3830210960620317;
    msg.lon = 0.9140320871044147;
    msg.alt = 0.12244485513343384;
    msg.heading = 0.45938192808412215;
    msg.data.assign("SPYNGMNBJDZWDFWETPZPAEBHMODAIMJXEYKVTRLQZCXMPRURGPEUNYAPJQFAPBZYRGSTUASKYOWIPOIOVFREFQPMAJHKVXUQIDASEAMZOSZPVZSSR");

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
    msg.setTimeStamp(0.3488250235407544);
    msg.setSource(36954U);
    msg.setSourceEntity(230U);
    msg.setDestination(27817U);
    msg.setDestinationEntity(203U);
    msg.id.assign("EMENDFUBAIQWZKZIEEMXYZMSDSKKRRVDPAJUQPCNOHJMBYLXEXPHNSCWYUGCJOXGWWBYASJYCAHVRZFXXBUJTQLORGYABPGSGKGWVTSWZTLLJVOCCMKUDFURVABITVLFORTKZHZYHVHTNBOPWTDEFRFSKSNSPNTELIDEDVMWGLFTEIBYJCQQOMHIRVAJWZWJLPELHTZMFNQFIRNQIO");
    msg.sensor_class.assign("KUEJPZBUDZLYIRUBKATQNYIRQCBCUHZDLDVYHHFKWISOIJZJXKNSZIEDDZBMVR");
    msg.lat = 0.9961158836128177;
    msg.lon = 0.6089776060599335;
    msg.alt = 0.6790413340842725;
    msg.heading = 0.6225045627437765;
    msg.data.assign("UDWQJCVIOHJZYVOHYEJHRKTAVBNKXRGDUEGGZHOTKOVGJYCAOWLAIHKXCTBUCWLJZETSRCBKMSWZTLXXPYKYEGJSWATMIVBFLUZCPDYMSTNAB");

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
    msg.setTimeStamp(0.33160777265176045);
    msg.setSource(35699U);
    msg.setSourceEntity(153U);
    msg.setDestination(4583U);
    msg.setDestinationEntity(120U);
    msg.id.assign("RBNQXMKAMVRBULENAORGIWRSZFMCDVVCKOGAHILSEQMAZKTIMJDNGFAUBWNJORKCIFWUXTPKYFUHBVCDQJYHJERSWXMUUTXRBVXSAQBNZWFTHOJEJLZSMPQLGDQFIXYVRSAGKYGCCAEYWYQYUZDNTDQXZDONBDLPNUGGZTTWCWPLFTAZOLOACOPRMMBFHKDHSGXGZMWQEXYJEYPOP");
    msg.sensor_class.assign("IBLGEWOQXKGABWTDZXQNZNUKCPAQFTTMMXNCMRUWWRNZPGCJENEHDLYFJCCUIZRSSJ");
    msg.lat = 0.7165864108953949;
    msg.lon = 0.3269039594466151;
    msg.alt = 0.6470503656757601;
    msg.heading = 0.011770169920168105;
    msg.data.assign("YKSSWITEFHETSZRSQYIVSXZMLVPQHNUNLYYGEJOMSCLVELFACTQHBRPNEPVELRABGQYKPKIENVSUUWOHDXAUGOYOBGUWDQBCITAQXMTO");

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
    msg.setTimeStamp(0.9516631663786689);
    msg.setSource(51456U);
    msg.setSourceEntity(237U);
    msg.setDestination(57535U);
    msg.setDestinationEntity(237U);
    msg.id.assign("VQBIIFDILMPLSEZSYXCTHYEVLTTPSHYJRBJJERFVVEHM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SPXEAJSFENRWDABTNFNGVQYHBQJAUWQFAPSNHOYTUSZZINNNDZBHIATSDOGKCBRPLOFDGHSFEHTUDXRUHUWBRKAEGSWNMLUYMX");
    tmp_msg_0.feature_type = 37U;
    tmp_msg_0.rgb_red = 53U;
    tmp_msg_0.rgb_green = 28U;
    tmp_msg_0.rgb_blue = 209U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4075268084113468;
    tmp_tmp_msg_0_0.lon = 0.7539198776516134;
    tmp_tmp_msg_0_0.alt = 0.05237744133396227;
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
    msg.setTimeStamp(0.6337193638033651);
    msg.setSource(45755U);
    msg.setSourceEntity(214U);
    msg.setDestination(20638U);
    msg.setDestinationEntity(87U);
    msg.id.assign("QKETQSYCWWIOATVMMYPYNJFHIDPLYUFFERMZOISCZMWOZLYOEUXQKLUCGLBSJUWSKMSBPEGHPQKCDFTALAHVTYETGOIDOPHWOQMGTQLVWLKMOVTGNVCNXSMSVIBHKJPJBERDPNFFVWCCNBXJNQXIZMZTKDWSHUCEGZZXUOHLQAQRTKWVPVRUXRHEIZTULKNFDFNXNDGNBYJXZGJRDADXVZEYSICWHER");

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
    msg.setTimeStamp(0.05119899108738246);
    msg.setSource(28068U);
    msg.setSourceEntity(229U);
    msg.setDestination(7738U);
    msg.setDestinationEntity(188U);
    msg.id.assign("CVCZEJGPZWRWGPNCJNFFBTWSCFWOEUPWFSKXZVYKZJGMRGRKQTRTHBJGHONLMCHAFGAKISFOTYHQMKQUQZPUDMHZKIABLQNRAYKAMOYYFTWDIXVEYPVOULRTKYBJDSIKUOQFBODXUQHGPLMLEMBSGMMPTZGXSIEDPRBRLVBATODSUQZAOELVUONNKHNYHJACYBIHLMRCVJAECLENGXISSBEPTDD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DDYWIEYEVGUBXCPERLEQJ");
    tmp_msg_0.feature_type = 202U;
    tmp_msg_0.rgb_red = 38U;
    tmp_msg_0.rgb_green = 37U;
    tmp_msg_0.rgb_blue = 145U;
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
    msg.setTimeStamp(0.603130602455904);
    msg.setSource(19549U);
    msg.setSourceEntity(134U);
    msg.setDestination(12034U);
    msg.setDestinationEntity(116U);
    msg.id.assign("EHTKSDKFUKJACRFJDHLAISOLEWEWKZMYXNMBFOUKEIBMBRONNP");
    msg.feature_type = 182U;
    msg.rgb_red = 62U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 84U;

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
    msg.setTimeStamp(0.2716147112826566);
    msg.setSource(14788U);
    msg.setSourceEntity(213U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(43U);
    msg.id.assign("GQCWYCXGVKLISZRMDOVLKIGOPAVWEURMZBIJBCMDUBWXYTIOGQVSFSYXJERHNVRGGOVUPXZTAJODSNWLPICUDFBQNQKYHOXWSAIRNTSKVPSRIHLYXBIZUUAODBXOZZHLJAGFQZRFZ");
    msg.feature_type = 239U;
    msg.rgb_red = 91U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 54U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.16725494111988237;
    tmp_msg_0.lon = 0.5325786300242746;
    tmp_msg_0.alt = 0.37067448657100344;
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
    msg.setTimeStamp(0.6892871388052705);
    msg.setSource(24314U);
    msg.setSourceEntity(25U);
    msg.setDestination(36725U);
    msg.setDestinationEntity(132U);
    msg.id.assign("ZHHZLKWVQVLLWJOXJHCAPETOSBBXQDRMMVMJPUTSRYINATDBDXERKXYNPWU");
    msg.feature_type = 13U;
    msg.rgb_red = 227U;
    msg.rgb_green = 252U;
    msg.rgb_blue = 196U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.994487709334051;
    tmp_msg_0.lon = 0.055755557439323034;
    tmp_msg_0.alt = 0.9130856819905434;
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
    msg.setTimeStamp(0.13555825779234332);
    msg.setSource(6233U);
    msg.setSourceEntity(203U);
    msg.setDestination(26050U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.13918722588067034;
    msg.lon = 0.5946584105275928;
    msg.alt = 0.5577903303816049;

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
    msg.setTimeStamp(0.06557000358221499);
    msg.setSource(50197U);
    msg.setSourceEntity(158U);
    msg.setDestination(34881U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.23057119996756026;
    msg.lon = 0.9803610005749706;
    msg.alt = 0.05106822863555438;

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
    msg.setTimeStamp(0.902192985881488);
    msg.setSource(31614U);
    msg.setSourceEntity(204U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.9775486677686515;
    msg.lon = 0.6912952487527025;
    msg.alt = 0.7573683183684405;

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
    msg.setTimeStamp(0.34537970475991575);
    msg.setSource(21311U);
    msg.setSourceEntity(100U);
    msg.setDestination(31889U);
    msg.setDestinationEntity(61U);
    msg.type = 150U;
    msg.id.assign("JTIRPXTBPIQYGXHIHTFDCQOCEBIJBNWVZRLBCJGBEQOYOMXWOKQNIEALRFBMACSERMTWGRFZQZFHDXJGLKMLZLDNVUQKWAMAUTMJTWYVBETAXGCRZR");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.066615649348026;
    tmp_msg_0.type = 13U;
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
    msg.setTimeStamp(0.05955743443834982);
    msg.setSource(56222U);
    msg.setSourceEntity(52U);
    msg.setDestination(21897U);
    msg.setDestinationEntity(34U);
    msg.type = 0U;
    msg.id.assign("KMMCNZZCGBJGXKGVFHOORERUAYRUUPLGXPYZSLYBIZUAKVYTRSVRIWYBUPXBWNIQQFBSDLPZAWBLIOTDBKTLITQWWMGHJGLVUKAVXJLPNETEAJHXJAJCFXMMWFFXLS");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9561363860196648;
    tmp_msg_0.lon = 0.389682785529193;
    tmp_msg_0.z = 0.33644055377739324;
    tmp_msg_0.z_units = 16U;
    tmp_msg_0.radius = 0.29027238661729227;
    tmp_msg_0.duration = 42054U;
    tmp_msg_0.speed = 0.25579681013554545;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.custom.assign("SKDSVGZAAEMZZAOTLNUHEZRKBIWYVLVPDFQIP");
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
    msg.setTimeStamp(0.8688586177945925);
    msg.setSource(6067U);
    msg.setSourceEntity(245U);
    msg.setDestination(40014U);
    msg.setDestinationEntity(154U);
    msg.type = 219U;
    msg.id.assign("QOXWFPNPYMKLJYIIJSWKAUEWOLLKRGXEPEDHVQKDHCJPQIENUBGXQJXDYOPDYYFBRJLOXZLZPNZBHAVSGGNNCCOAWZRPEMVCURUGVMIGMWRLMCLSKZOPVQXOCKJKAEPHQAKBB");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LMLWLWIZPCYUPUUXEBCIPIGYALOWVJISHZGFSQIGJNYNDYOTYGKOFPUKJEKMIJDZAARISYDZHXBWUAZGEQKUXMSEXDEZEBELGEMCACTVCPSUXRNOBTQWADWURFHQPQAVRFVTHRBJQOOKAYMPCXGNAKOWQTZOVAIVYSGXIXFPTSLWYKFDBBNWRVUVFBTYSVXRJNPOHZLFDDTZQKMEMRHDHLINGQ");
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
    msg.setTimeStamp(0.3170425434334907);
    msg.setSource(59783U);
    msg.setSourceEntity(81U);
    msg.setDestination(56796U);
    msg.setDestinationEntity(193U);
    msg.localname.assign("WVETBZQUQNGATYVVQNDJYRRVUBJGLDZAUIFCBNPHMXKFLUHOEBQRYKYZNLFSYWDXRRHGEXJIMEWWSBDNECKARCIPOUYITSQHIGJOQPHIICDKWQAVHLVFHUEIBNGEWWSGZMTVSOTYIMYFLLFONFJXTXEBYCXFQGYGOPCBWRWKLACPPPMTGLNZWLUZVSCPTMKDJZQVICDSSGUHDUVQKUZPJXMMAKXRJL");

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
    msg.setTimeStamp(0.6124464237791599);
    msg.setSource(37514U);
    msg.setSourceEntity(205U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(133U);
    msg.localname.assign("TBEQOBJQYHBMIRLSZTGSMYPPHGJNFWUQQICGCOLVPCTNNZOAZLKJZBIXHQUSGHDIDVBOCXLCPKAHUJVMPVSEXURYGFYMKJOCMWNRFMDTZGXDLLHZODWAMSRGUWFLKDOQHNSOEJVVEZANRIWBAKNPNQRLYBCPFTFDKNJCAVIOBEHYTWGYOSEAXJUAMGPLDEZYSWSKXRZMFQRBJKCRWYTYBEUWMGWQLVXITFPV");

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
    msg.setTimeStamp(0.3797669789306135);
    msg.setSource(27617U);
    msg.setSourceEntity(114U);
    msg.setDestination(62496U);
    msg.setDestinationEntity(1U);
    msg.localname.assign("GIEKXUAMZRYLSIJMORXETZPLYPONGHYMNCAJJFMZYDFHTOBFIZPMPAIZTOWHHQIBCHLKTUFGGEDPEADGEFIOVKMSUNMFQVCLBXBHZYQYKNZYJBLLJXLNORRZLQASFTPOBKDRKNTLVOABDNWRFMIYQUIGWVYQCSKPZGDZUDAFVXWWQXO");

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
    msg.setTimeStamp(0.9710647497113644);
    msg.setSource(6142U);
    msg.setSourceEntity(8U);
    msg.setDestination(21182U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("FEAGRJVUKJTYANWNBWAXCFGYXKYSJR");
    msg.predicate.assign("VTCNLSQKTLKBPZWBEKCBXWFROGERZQILSMRQGBDCMCVNKPTUWCHMYIXRUVWOKSHZWQAWANHJUZDVMHMOHXUTUOECFOSJJEDABDAHNYKXBXIKSHYJPIJPCQSDQTKSJLDXN");
    msg.attributes.assign("TGUQRAMDDVPNVKMTOYKIPMYJPUOQBQCVXBAMWBEAWSXSJLPNTCWLVUSDEFLXYIDH");

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
    msg.setTimeStamp(0.7883996449734464);
    msg.setSource(12851U);
    msg.setSourceEntity(180U);
    msg.setDestination(41540U);
    msg.setDestinationEntity(26U);
    msg.timeline.assign("MTCNOBRJVIFRTEEBZKQHABFUUVEEASMSRSXAPFPYLJYNIJCLJELCOOQTTNBZOTFLXZAJWTUISDKCDYVOEDJQXSYQPRINHDZSSJWSHNIWEWVQYMLGRKAAMXGHPBQWKFJDFXWQMOQVMM");
    msg.predicate.assign("YRWIBLMVZLOTQMHYZBFDTALQGUFQGNWBNJJXOBYJVOMNOIFFNOAMKARDGHYZLDUEJHTIYVPLSNTSXEMVFJRCFPXHWIYUDHOXJXFSPIFIHZPTRHDBMTOVZSXZXDVPQKZTDU");
    msg.attributes.assign("QKXAQYIELDYFMXNKZPYZLEMNEPOOACAMRBBRETEORJYXBMVEAFRRQWHEFOFWCOOQTXHOQPJIL");

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
    msg.setTimeStamp(0.4190608223736484);
    msg.setSource(30991U);
    msg.setSourceEntity(76U);
    msg.setDestination(503U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("XPHGCFNZEZXVDWQOAGLOAEHVWZTLIZVJERLCJDHOBNYOYPTIVJ");
    msg.predicate.assign("TBOJTEBYMOHOXYNQANGXZCPGWUPHYDIHXPABQMUEUVSKMSQLXAYECYDIOGSOSUQXLHTUDLUGTYZPZTIERAVLGSJHXJEWMWFDFKIYAMCMRBOP");
    msg.attributes.assign("DXPIIGKTRLUNFASMSHQEXUEUMFGQXTDVQZLCDFK");

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
    msg.setTimeStamp(0.9335661115558279);
    msg.setSource(38158U);
    msg.setSourceEntity(79U);
    msg.setDestination(6884U);
    msg.setDestinationEntity(116U);
    msg.command = 22U;
    msg.goal_id.assign("RBXBKWKCCLJOCDGICTAYKIUQWAXRIZQMNXHGWSKPYXOEKTQMWLECPDSWSKZYSTXPRZXHRINULGGCFHJEGYTHLGLYOMRIVVAWTKMPSLPGDRAFBNEAHGNBO");
    msg.goal_xml.assign("BWNFEKWNYFFPQMVESQMHEVCOUDSKLZHDZHJRZAXHKRBCDNZWLJDNCNKGOEGXGKFDKPYNNNJYCBROUGSQIAVUPSZOEVAEYSRQIICMQOOXWRXNJWUECFZWPMDISFWSQL");

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
    msg.setTimeStamp(0.9917320672371984);
    msg.setSource(49095U);
    msg.setSourceEntity(41U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(6U);
    msg.command = 62U;
    msg.goal_id.assign("ZAETCAWJWQLFYPYHQZYJJGCPEGDVTIPVRSEIYULVPBMSNRDGEEIRHTIKIKWZQVCQKAUVVXPOUQBQRYBFKOORUWCMTJIRGTSHUABGQKLHNQIXONBPXLMDLXYYVLSZGSNPVNBURWBTGGFXWVZOZIFEDYFHTOMBSJ");
    msg.goal_xml.assign("IIPKBBVBYTZSTGYLODCWVPLWUHMUUDPJZJMJQBFLCQKXXGWDVEQFDWATGCANZRXX");

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
    msg.setTimeStamp(0.39019903770370623);
    msg.setSource(32345U);
    msg.setSourceEntity(227U);
    msg.setDestination(34365U);
    msg.setDestinationEntity(184U);
    msg.command = 191U;
    msg.goal_id.assign("XQTNTMBMFBGDYDMBRRSOZHGRUKQRTLGVYOTYEWQMJQWPXBJHUFBOSSMMUDHNJSVGSQKETCAOPRYVJQZIRKAOAJAZQCMKPYRNIDTCVCPVQTJXGAZPNPNNPZAFAWGLFUEXRWEUEHSLWVFFVIYINGBLHHSLWDMXXUKNTHPJZHYKFLCPXGEHKCVGXZCWYIMUFCTKWLPMBJNBQLZDUIUSXIF");
    msg.goal_xml.assign("NLKDKLYMWCNVVYYPPFNASLZDISSFHITTONDFSFHLJHGLEFMNQCXGDYIJECQELAABEMJHPNNQXGBONWHUIWUIUHZGRVMPJBQLKKMSWOPYWTMIKEICQKKTTXUBVXHZYUDAQOPZCTSUFWTQRUVRJSRWODWZJRWORIBYPFJBBXVOQBXSCTZLUMWEUYNZTSIEVOAJDBOAVCPFXDAPKGXMTIHKPQ");

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
    msg.setTimeStamp(0.6173299612949492);
    msg.setSource(40146U);
    msg.setSourceEntity(2U);
    msg.setDestination(22284U);
    msg.setDestinationEntity(115U);
    msg.op = 162U;
    msg.goal_id.assign("RPGDMKMDXFNOWXEWJPQTWXBFWVTFSYAZLJJTNJHWRBPEINBRUCPBFSOYAIGQFYZTQJYDKGCKMVLS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ABWQKBNEVNCAOVNQCDFFFNKCBXGEVSORBYKXTAFRGDDZACRDDONRPQIHAFSSCGCZYMSQUYUJKMYBITBVYLZJSZ");
    tmp_msg_0.predicate.assign("CQYWRBNWTSAGAESJWXDUONJWESHUPPJZDWPMDYFMVBKVSZXKOCYAEZJCHINCNHPYTQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HVPKJQPKQHGTCWQCRCMOFQJTOXIQSTHISLALAKYVCRCWMRXGGEOIUVHPDDFJCKBKVHJFTOIAZXUDAUPXLUBDFUYONBNCGEKRNOHJJRWLYTFGMAUZVVYRANBWDZVZWYPNEAYIHAXCRBMZUSSNJZPINUEXIEXJVUXLJFALBXYZZFBFPZXKMMQOCTRUDDSFCWDHELEAHYENYQOJTWP");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("KXWWNIKPWJSZMJORUAWMHYOJYGSZRECCTZDDENHLVSDGIVFDXXBJTEDKZQBJRKANTYEKHSMQVMEIWOQFHUGPNZDAFHPGIPEICRVYOFNTUGEHZZUXFFNZFLCBNXRHVEQJLGPWXSVIBEVGJKOWUCIOTLLARMF");
    tmp_tmp_msg_0_0.max.assign("UXIVPFPWWRUUXGNRCPMGQPWLDHQMJIDVHTJYJTPICZYIAEGEVURDVOOFMPPKUOOJCQXUJKVWBUDLLSRVHNMYZZCEKGGSBODALLXNTDBJJAOEOMEXS");
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
    msg.setTimeStamp(0.29823356906990495);
    msg.setSource(190U);
    msg.setSourceEntity(41U);
    msg.setDestination(46660U);
    msg.setDestinationEntity(97U);
    msg.op = 1U;
    msg.goal_id.assign("OUWUDKWMYBSTEIZMCFBSTCEXYCZJDILAVQSMDGDZUMHBGQFVCOBLFCGOJXDTUNXVLKQPPJNFYXFGXTBPGHMVPHEUGQHSLYLOLJVMYBRWLZKBDQTGLDLOIUXLEJMPUHFFRXRWPJRNINTKOHASKZMOEAINNRSUAHXTEYHZWPNQJJEWN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SIJNDANWDMPKTWMVPKEJDJCWNEDESIERSUGFPWXLOQTFYCQKCYQTWROSBZYUORYOXFHYKARHQKOJAUNNKQIFEZEPBMBW");
    tmp_msg_0.predicate.assign("ENRQIOPBXBZBFEFDWQOLR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XLPHADVGZSUEZMEUUGFNUXSDFUBAQPXVILBYTJTNMPGWSOKTQRFZCCZLNKZEMDVRAWD");
    tmp_tmp_msg_0_0.attr_type = 19U;
    tmp_tmp_msg_0_0.min.assign("YKWDBMJUTSPSIWGFFCUQVZMPXCSFOGRGNPZLVNIMVTDFYMSYFULQAIXOOZKDPWXJNWTACVTTUOOIRJXKSMSKUNTJCSJBIRYWVQAVLMNHWBZNQDCJDTCEUHHKXFUIRREGUZPCQLYNPZTGACPNHEFRQCYLHUIVDOGPTGBKOHBHIQDJIZLNOXGEAEGSAZHVDOXFLOQFCDBANEEYLZRJKXJKXS");
    tmp_tmp_msg_0_0.max.assign("DKUTAHCPZFFKJXKQTNKUYETHLOKPHGAJLVEGE");
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
    msg.setTimeStamp(0.32873958303776263);
    msg.setSource(19506U);
    msg.setSourceEntity(6U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(102U);
    msg.op = 134U;
    msg.goal_id.assign("JVXBCAZNEBBVNOZESGILPJAREICFPHYXZCNAXZXUVMKR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EXTIZDJAWZMBSSLZMDR");
    tmp_msg_0.predicate.assign("YUSTCINQRFKZRWBFVKTVYAHGUVE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YRFWMTTNJAMHJGHKFVMXUPCOYWSCLZAON");
    tmp_tmp_msg_0_0.attr_type = 156U;
    tmp_tmp_msg_0_0.min.assign("HBPOWYJWNSOPFTJLDRNLFUIIRHXHTSVBZOFPFPWSCINGQOSAJDDBBUSWYUSLILKPYXXRWCXYZVQAGEDYFMTRALUACTQKHBDCRPJUGBUCJTCQEVMILLHKAQPBJJVNFSZGDJOTHRMMIQLTOYZMUMDPVU");
    tmp_tmp_msg_0_0.max.assign("FUEGOQVUABSXMKCKMCJJWTBMWDDGXVFRHXVZELBMORDIIWBCDEFLBWTLQFJFBYRHRALDUDHNVPOCQELXYVGTPSINXIQGFCUHNAGCAGMFNTKNWQNJTOIWTHQXYUVAQDSAAU");
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
    msg.setTimeStamp(0.12659524609732076);
    msg.setSource(40871U);
    msg.setSourceEntity(31U);
    msg.setDestination(489U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DWQNTTRFBGXHATRBZVNVKLTHIMRLVPZCNULHWKZVPPAGMPAGIFOEODBYGVWNSKMHFSHMEAQFHBBJRZQTYUVEIZWWEEVBJZQWMFBAOHJSNMMSJKXPPJCPIOYJILYKSBSUEXDUQATOK");
    msg.attr_type = 243U;
    msg.min.assign("JLUGVAPAILFJIALZGKWPVTZXAAPNOCFTOBXRAZIILGLJXYYZCPPMHHWCZM");
    msg.max.assign("HXLCEHGTOLGYNMVSVYUFSDRVFMOHYKEOJGRXJKKZEGCXJOFGRWMTQ");

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
    msg.setTimeStamp(0.18481678710277083);
    msg.setSource(64265U);
    msg.setSourceEntity(157U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(4U);
    msg.name.assign("ZVSUUXALDUSCWKGYRXTWXHWUFXGDYIQRWYEBMRZTAYBKDCKENSSABKJBURCYBEGSJUZQOFEETMVPPLSGOOJQSZGEDNPQKPPCPTRMIMNKMHCBLZVPCP");
    msg.attr_type = 238U;
    msg.min.assign("JIMUXNWLCGKJKCKPDJUVZFFUXRQCJSGYQQUZNDFNHTHVVPBAKYFGVIZAUCSWDZPHDLQTRZRMXACGAPMHYPHDTJZYIECESULAZGKYEQIEZLRCIAIVPFNYAYHPXQTOBOKPJVFKOWQMMYOMSVMFRGQTTLREBOURXIIZCNENJFSKBACPHTLASBOMWCWDDWLVSLUVNIJXBELDJRTGTOBTFNUEZIBNMDRDRKYXGMNOW");
    msg.max.assign("ZZDJOOYTNRNMLTZOWBOFSPJFMIOWSADIJFEJJWRLODHDGPNFMOPGYABVBLPBXYPFIWDLLYGSSNTWIVRHGIVQIPYZKOXMKUEAGQCUNPWFVWOEKPWHYVTYLHAZMMCCUPBTUURMKZGCUERKCTFRCUACSAAQCZSNVLKAWXTIBGHRIXZKXQJJQQYHDGZHYEAAEDBKNIQTYUQJEGEHVGERMCFDKSJDSXMSBUM");

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
    msg.setTimeStamp(0.535704467502358);
    msg.setSource(47197U);
    msg.setSourceEntity(164U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(176U);
    msg.name.assign("ZKCPYVVLHNXYRHQSURQJCBZZAGFYEUUHYGTCSFAEFRPPXAKYBMUODJTPAZLHBDKUOIRIBJBCTIZNKDHBCLNONLMOH");
    msg.attr_type = 191U;
    msg.min.assign("FDBVYFKQYTKIYKHTOZUOSBUGQBAOM");
    msg.max.assign("LZGQREBPOVIAMCMLJCOQDRLOSSPLHEMYEEGHGDKTOXOJGMPTCCANDINASLJFNJABIAGDXKKEXBCHVFHMBKFXSGQMWFERRIEWXBRYIGIDOZEWTWSWNZFBNWLYAMUFRKXQJNZCJRZLSKBDFQSYHX");

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
    msg.setTimeStamp(0.6003091903516845);
    msg.setSource(37469U);
    msg.setSourceEntity(161U);
    msg.setDestination(59956U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("DGGCCPIOGFSSTTCAHVSVXWYXBBEUURVVXVUIEENOA");
    msg.predicate.assign("VGFFNPEHZZNQJCMFKRFDXTELODHWAZOFOBCXJHYPGYPAKINTHEHQVUBPSECTQXLIGWXBXKCBPLDHCQKRWUJRGSNQAXENCIBLWCVNRYGNZFRQOGDXPUPUSAOXKFPUKMCIKGSWRMSWDMOJYVVEMUVZVHDSYSCBMUYJQIDGTVOAMFUZGHQZRETNIGTXEKRVOFAEZRULBPNMJYZCHIRSYELPANYQIBSFLOSTWWDYWA");

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
    msg.setTimeStamp(0.4642237917919124);
    msg.setSource(43769U);
    msg.setSourceEntity(240U);
    msg.setDestination(54608U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("DMQFOTCDGWJXPOQXPVNIHJEVSXHBVPIUOEGTWNDYCBFNXLORWMAXHMQBABJSGUHZLGDQEKFFTXPADMKGZALWBIVECGTHLNHWCOCKVLEDXQKMCFTRNFRAFHYIMYRYTWMAZM");
    msg.predicate.assign("KKOFDFJFPUBWCKQWFIDGOCUZBYEHJJPAHZATGXOIJWKSA");

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
    msg.setTimeStamp(0.29502060010082665);
    msg.setSource(34555U);
    msg.setSourceEntity(245U);
    msg.setDestination(36909U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("OJEHTNJASGLTSDFUBWTJPJONCEYPZHWMGQMBDZYVEJOVHMJUCLKSYRRKBOYFRQIYOCOAWFIJUBPAZMXUO");
    msg.predicate.assign("OPJSWMIIITDQTYPPKAWGEADEUUWLHGXBARGZUKZLKKRYCQFKHMWULLLODBZRJDXJLUSWXSUJOJQNITFXPRABWJVHIESGWPZTITRDFRJWVKFVCSCECCGENIKZAHESMEWEXQNVTFVHJNGMRAKZPJXFQRPPBYESBCDYXVTHPUJZYMYVQNZQOUIYSATHGYWRMDBBXLTGBHMPHNDQT");

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
    msg.setTimeStamp(0.04963441205992858);
    msg.setSource(28834U);
    msg.setSourceEntity(102U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(100U);
    msg.reactor.assign("NFLICWBAJNLGJCZTZTXUNRVOOQHVHPYXWDKEULBXRIFDEGRBPYMKZSGCITMHQIJCCHYQKALLAJRKGEOKECSFTBWVVOOQEDJORCSAVAIRMFDSXUYSFOGJDA");

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
    msg.setTimeStamp(0.9734821340056903);
    msg.setSource(62194U);
    msg.setSourceEntity(45U);
    msg.setDestination(14707U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("JPLRTVOIGCJBCZESLATMAERGBVHZBUZCUWIYBURMABGNSXSIPRYPDIMZSRMFJROFAYMHGCMBJUIVUCKXPQXTWYEVKDMQABWNYSFTFCAEZOIYYSGNYDRFDQPBXDTFQKNLEMBPJEKXUGPDGOKDUNAIODTKESLHRVWPMEVIYCJNOLFTCHVECJWKLJJWVUWFXKZVNSQOJHHZWLNGYHTXHDAWTMZXQPZROQHUIVKFXAZSNSRBGPTGXUNELI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UNMJBOJLUIJYUZDLLNRRYTKRQMTLWFANVNTDZSXAWYGQIJFOIXVOGVWSJTBJNYRADQEGIDHJYQCAPOBCXCBSDBUTXNYYZGHFWSGMQVFLZSFHFHGUAZETBGUKIQDPPXKR");
    tmp_msg_0.predicate.assign("QEKHLDUYDUBZWPEWXTZJAIVNSJOBRHCTJCYKFZBBWDXEXKCMTOBULEZJWZSVLOREINROCSPSKYTBAWONFYQLJVUYAGSNOSRSFLXFGRGVIFXYGMMOQLGKXEVUDNKCWANQUFMIHTUGFPDNDNRMRPBZMXVVIABXHCZYRLYCRYMGPTIJDDWGNLTFBAONVUAIMEZKUUMOQTJHQAQGXHXHCAHWSLZFPDTSHQVLJKKBMETWFIKIWDO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OBUFIBOHCLUCNLBZECIEHVYMNLKXRAVOXFTKPLZONSVBSEJSHNJYSRJEGMTTQDCFZWXABPERZPVSYLGFEFOVMAQHWWSNCSWFHWWMHIEZKCPAPAHOQEMPYKVHJDOKVIGLBRPQJMZQSQWPKYIDRRBAFMWGTDFIMTVXAOQTNGIUQULDHUMXJ");
    tmp_tmp_msg_0_0.attr_type = 91U;
    tmp_tmp_msg_0_0.min.assign("SOWFUHCORZKBLMZKWTGLBAWLEMUUGYSERQCBHXDPWZBNFWPAZEVSDGYMGQGBHGMCVOQLHDEIEMRJRAQFFIRWLSKOUTEWEYJPPYCXVYNDBQVRSGBVJFSKFRJDPUAIZMCLMFXYMANOCNVOGDXIIUUDX");
    tmp_tmp_msg_0_0.max.assign("TDEIBONRYZQQKWNQSKZFOBKWHPKFLADNZWTMIPHMWFMDALSIVJYBSIDHHUXDNMTODGICQGYPYNQYXALWOHEDEIESOPRBAPVNJGECRDPEAUJFMVZSWTVTYLMJUJYLAROHSNPVYDPFJJJJHGAWOZRXCQUXKMVKTGRBHEEFFCSGWQTJHMEUCNXGGQIMS");
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
    msg.setTimeStamp(0.07454059371510346);
    msg.setSource(30762U);
    msg.setSourceEntity(136U);
    msg.setDestination(19594U);
    msg.setDestinationEntity(181U);
    msg.reactor.assign("IMWZYDUCAAKUIGOSMHSHTVWJMDKUMUQBRRJCYSUUPMXSAYXPECJDNRKEYBYSDVNIRVAGQPOPQTTYRCTHOTCJI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AUVLDWCOWUWCNVBDJVLMRBYTDXSHGCALFUEWHELVGPHPHWXLACSKGYLXREQIZSFFBGRJDMJUZKKOKIZCSGFOYTMIUOEBPKZDXXLLBSQKJTBPMTBFMZXFQQOQRPYTXATPIPIKCJCROTFAL");
    tmp_msg_0.predicate.assign("WJOTQYQKUEIWHWCFQXDYZDLYPLIWOBWMCZALTG");
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
    msg.setTimeStamp(0.689534919908472);
    msg.setSource(35632U);
    msg.setSourceEntity(73U);
    msg.setDestination(7508U);
    msg.setDestinationEntity(185U);
    msg.topic.assign("EXOEKTLBKQKAZRHGHEMHDOCIIDEWPAZWNSQSDXVUATOBRXWRTDSNOALIJTPLGJLQNKUUFZEQFGHGTRHUBLPNDZMYBUHCZBEWKXYRSMSNYZKSUBYUCEFIFIWECTMNYQRIWICFFJSSFNAGADMVZHDEVYO");
    msg.data.assign("KHNVXUXVABLLUFWQUGTROPSYIZGWLJOFBXXHZTOIZVPSTAMJHLKMUCTVXQEUMAZYQSQBVCZLJNGLLGNJXURDCHPKKNAQYCWROONHCGWFFZ");

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
    msg.setTimeStamp(0.5021869833256188);
    msg.setSource(27966U);
    msg.setSourceEntity(188U);
    msg.setDestination(7947U);
    msg.setDestinationEntity(197U);
    msg.topic.assign("OCJNUKMLOKWEPAWRTDBJWGWTFCQSZFDLBYWFOVKOXSQBJWYVNELQYIOFIQHCESSNIUHE");
    msg.data.assign("MYKPULGSCUTNAIYCWGODWVWIIEYKXKFJLFLPNWHNKDWGRKETAHHLXFBLLFEQJEWDCZJRBIYIOAETJXZBPRKKBVJIX");

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
    msg.setTimeStamp(0.19396723501086732);
    msg.setSource(61229U);
    msg.setSourceEntity(149U);
    msg.setDestination(12890U);
    msg.setDestinationEntity(150U);
    msg.topic.assign("CVGBIJWPXFMGOXZAUOPVOKIQIMYVUPZFQTHVHXTORSKGMORMS");
    msg.data.assign("PMGITERVIDLMPFOZKSEXVHIYACDHPCMDTMNXYTJOSEPOFLOEBXWLOBTTUZRWHYQBUKJZPUJQNHNXVPGREKFYUWDUFMPRSRLZJOKGYCNVQXBEAKGXMNAYGDAVIAVOGCDPVKNKEQBQACFCPFGESFPMDZUQJKNTTOLJHABRSJIMMHXLDUHQJGVNZLKSQUJUHWCICNWGVABZRTTSDOXZEWGTAFXHSIQIAKWYI");

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
    msg.setTimeStamp(0.22211706568416711);
    msg.setSource(19199U);
    msg.setSourceEntity(126U);
    msg.setDestination(55709U);
    msg.setDestinationEntity(164U);
    msg.frameid = 63U;
    const char tmp_msg_0[] = {-64, -88, 18, 4, -26, 11, -14, 112, -37, 97, -109, 122, -49, 83, 124, 82, 8, -55, -113, -68, 90, 119, -99, 106, -99, 80, 90, -121, 108, 93, -6, 106, 9, -115, -39, 68, 45, 33, 108, 21, -50, -124, 40, 84, 31, -60, 101, -85, -86, -39, 40, 7, -32, 44, -97, 69, -82, 18, -81, 80, -111, 61, -86, -64, 16, 21, -53, -126, 110, -68, -116, -30, -9, -73, 35, -40, 58, -90, -66, -91, -31, -105, 73, -9, -63, -90, -127, 67, 12, -84, -101, -19, 83, -81, 52, 68, -88, 14, -34, -11, -92, -30, 82, -30, -111, 59, 86, -88, -89, -2, 81, 59, 76, 50, -32, 43, 30, 43, 86, -127, -31, 40, 58, -86, 125, 6, 27, -26, -46, -51, -97, 27, -55, -46, -121, 12, -123, 102, 13, -91, 46, -98, -25, 98, -16, -14, 50, 92, 70, 84, 43, 61, -48, -16, 14, -84, 46, -22, 64};
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
    msg.setTimeStamp(0.15174399007915773);
    msg.setSource(35087U);
    msg.setSourceEntity(115U);
    msg.setDestination(61642U);
    msg.setDestinationEntity(109U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {31, -7, 89, -80, -88, -28, 24, -52, -117, 1, 51, 89, -51, 12, -14, 52, -50, 45, 72, 110, -128, 112, -113, -68, 110, 120, -17, -58, -12, 85, 47, 6, -87, 14, 121, -32, -5, -20, 41, -15, -44, -17, 56, -35, 104, -75, 23, 117, 116, -8, -57, -23, -83, 10, 116, 90, 113, 21, -97, 100, 29, -115, -90, 34, 124, 79, 53, 83, -45, -24, -10, -18, -103, 91, 32, -20, 112, -46, -118, 42, -126, 32, 123, -6, -49, -29, 60, -45, 25, -118, 31, -62, 89, -79, 26, 65, -20, 27, -47, 4, -109, 110, -31, 58, -57, 99, -124, -9, 12, 7, 22, 44, 88, 90, -60, -49, 39, 12, 85, -115, -42, 59, 108, 76, -84, -94, -90, 126, 96, -43, 66, -34, -105, 32, 20, -31, 50, -69, -86, -116, 112, -31, -56};
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
    msg.setTimeStamp(0.8144415060214774);
    msg.setSource(29768U);
    msg.setSourceEntity(187U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(95U);
    msg.frameid = 152U;
    const char tmp_msg_0[] = {59, 80, -54, -64, 69, -56, -28, 6, 37, 40, 87, -127, 18, 59, -108, -93, -72, 37, 9, 101, 67, 66, 62, -113, 99, 39, -91, 86, 81, 23, -64, 126, 100, 57, -64, 109, -90, -44, 110, 117, 93, 3, 31, -101, -35, -84, -112, 10, -96, 120, 105, -59, -13, 9, -113, -50, 86, -113, 83, 81, -108, 13, 1, -11, 43, 23, -57, 34, -106, -28, -52, 97, -37, 85, 101, 50, -11, 118, -75, 122, 61, 114, -69, -94, 112, -122, -50, 97, -116, 33, -22, 52, 92, 78, 13, 31, -79, -39, 95, -114, -95, 50, -70, -51, -121, 125, 59, 48, 78, 29, -88, -94, -39, 39, -93, 24, -48, 55, -124, 92, 37, -28, 13, 3, -104, 63, -38, 70, -27, 90, -84, -85, -127, -84, -37, 100, 84, 99, 0, -83, -36, 33, -36, -83, -31, 121, -29, 83, -78, -92, 39, -20, 64, -125, -11, 5, 120, -126, -51, 66, -40, 85, 12, -80, 88, 26, 80, 38, 123, -86, -24, -72, -60, 67, 19, 116, 58, 88, -122, -32, -26, 55, -28, -27, -54, 70, 9, 28, -29, -44, 121, -111, -124, -57, -57, 107, -27, 85, -35, 101, 75, -21, -63, -47, 16, -31, -127, -34, 113, -46, -24, 121, 70, -75, -2, -52, 50, -39, 120, 80, -60, 61, -115, 98, -8, -82, -125, -56, -79};
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
    msg.setTimeStamp(0.1982308231879496);
    msg.setSource(45182U);
    msg.setSourceEntity(184U);
    msg.setDestination(492U);
    msg.setDestinationEntity(235U);
    msg.fps = 56U;
    msg.quality = 192U;
    msg.reps = 212U;
    msg.tsize = 228U;

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
    msg.setTimeStamp(0.8286020964433184);
    msg.setSource(50965U);
    msg.setSourceEntity(195U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(35U);
    msg.fps = 126U;
    msg.quality = 166U;
    msg.reps = 44U;
    msg.tsize = 217U;

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
    msg.setTimeStamp(0.24557847995423687);
    msg.setSource(2647U);
    msg.setSourceEntity(72U);
    msg.setDestination(24593U);
    msg.setDestinationEntity(229U);
    msg.fps = 169U;
    msg.quality = 30U;
    msg.reps = 140U;
    msg.tsize = 93U;

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
    msg.setTimeStamp(0.14325470702117782);
    msg.setSource(49467U);
    msg.setSourceEntity(202U);
    msg.setDestination(29848U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.9982293769252211;
    msg.lon = 0.4371553127785046;
    msg.depth = 125U;
    msg.speed = 0.48716639106179394;
    msg.psi = 0.8748446645851958;

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
    msg.setTimeStamp(0.1415975855320739);
    msg.setSource(29481U);
    msg.setSourceEntity(68U);
    msg.setDestination(29083U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.6082200821722169;
    msg.lon = 0.46475091167735716;
    msg.depth = 194U;
    msg.speed = 0.6930049196386546;
    msg.psi = 0.374075156929098;

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
    msg.setTimeStamp(0.8463071490556873);
    msg.setSource(28038U);
    msg.setSourceEntity(14U);
    msg.setDestination(43641U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.6799992845947886;
    msg.lon = 0.7825735851962338;
    msg.depth = 11U;
    msg.speed = 0.1776066847522514;
    msg.psi = 0.28897346210868813;

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
    msg.setTimeStamp(0.7807588206899458);
    msg.setSource(52719U);
    msg.setSourceEntity(128U);
    msg.setDestination(35097U);
    msg.setDestinationEntity(216U);
    msg.label.assign("DWMMJSUMLTZIYVFLSUNDOGMKRBZCRIHDTTRRAWSZJFPCBFOQZXSRWEWVQDZOAXMLWJAPVIWNJRPNATYEKGNUZCANQPAUCFYCNUKQYZRIGGHFTRDFKDTHFUDGRVWYOAANQBQPLHIFLDW");
    msg.lat = 0.06070403055784668;
    msg.lon = 0.24364391862810442;
    msg.z = 0.9746488276236673;
    msg.z_units = 54U;
    msg.cog = 0.49247861368116996;
    msg.sog = 0.6216704254612051;

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
    msg.setTimeStamp(0.9146953625369291);
    msg.setSource(6438U);
    msg.setSourceEntity(164U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(168U);
    msg.label.assign("FRSRUZFQPZWIHYPMRLIFJCTQVYYKHKWNDIUULDTABHICLYHFLOWBVMVNCBXRPWECJSWBOSKFEPAXQVTXZAPCJLNHMUEWGFTWELQCRAKNJNPDZXGCEZXQEWJMOVGGSXGKITJAUJAHOTVOXZGFZVOMWY");
    msg.lat = 0.05700382238530144;
    msg.lon = 0.5138578392016016;
    msg.z = 0.7362604004451536;
    msg.z_units = 56U;
    msg.cog = 0.3243209651939152;
    msg.sog = 0.3019537966343885;

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
    msg.setTimeStamp(0.4489903760445636);
    msg.setSource(24513U);
    msg.setSourceEntity(135U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(100U);
    msg.label.assign("UJQHTYBNYAHQKBJQEIFTMNWIGEWXQTBUXVXMRCM");
    msg.lat = 0.08603792215881845;
    msg.lon = 0.6952766643151033;
    msg.z = 0.6596903273257357;
    msg.z_units = 196U;
    msg.cog = 0.14116079548517624;
    msg.sog = 0.03859160203214318;

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
    msg.setTimeStamp(0.17435720577631975);
    msg.setSource(159U);
    msg.setSourceEntity(75U);
    msg.setDestination(43906U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ZIQRDVBKJMSYDQOFQOZDKYUPKSAZMOWAIZDJGDZHWIQEVGPSESVCZJSRLFPXQCPUGQNXYGXLNXTWUROXFCBNORIUIZYIDTGJYMQLYVYFJMJJEABXLRATEVVBNAERBPWEXMPNHVEQYGRVEMCHSUZOIMSPPVJTLBFHSOELNWLLDIROOHAHHKINUK");
    msg.value.assign("BTXAMDGILCCCMTCSIQTVYZHLXLKRYEPS");

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
    msg.setTimeStamp(0.6794623267189382);
    msg.setSource(14124U);
    msg.setSourceEntity(141U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(179U);
    msg.name.assign("NRCQAFAPOMDGZRNKHKQIIFCBFMWJRWYJVXVOELGNLUPWWOCRECVELXNXMFOEMTGRDVZPKJFUUKWBTTDAQTSQOMAZRGBYPMUVGPTJTNECDMCCYHDYCDCWKIZFIAXREOUSXEXSQWKTVKRBYUBJCBBFQNLXHSHKOLOLNIFFZUHOJUNHPYWBVQJEASRIKQLSBJSJVGVXGYQWUAYNOYIHSI");
    msg.value.assign("YTQJWOCAWIVFFPBBZBVEHLNKGLOUSCAUJKOFDZGDDIULEFQFTOTRCPTHTXJXGHLBOJRSPRSWUOWRWVZAEYAMJDAQAPYGYXBZC");

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
    msg.setTimeStamp(0.1842260035582205);
    msg.setSource(36496U);
    msg.setSourceEntity(192U);
    msg.setDestination(56827U);
    msg.setDestinationEntity(154U);
    msg.name.assign("QBSLHJBKBGTXSZMBEWNCXSIGFQDXWKHARCTJGEOUPBUENSTFNYPPDWALJZUZCUBXCNWSHQWVIYGMIBYFVOLEKZSEXBMGTJDUGHDEAYCKKMNFQGDBHMGFCQRPVJIFEYPJRPWRSFZNZTAHUSMOQVLOVRJTRDDXZIOKLLDFIRNNEXLWQXUMNOYHVOMZAOCVYDMGAYLKVCMSAEYONJPQUYQPCULR");
    msg.value.assign("QBYDPHOIREUGPPGAZKYPATKHGCUHNSSDWOOPINBIJTEEVMFJECAEWYWZHZDPNUBWQVJYEKZHAEZRYWHVFXIVNQRXAUDLELU");

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
    msg.setTimeStamp(0.3137954766349842);
    msg.setSource(51186U);
    msg.setSourceEntity(123U);
    msg.setDestination(34075U);
    msg.setDestinationEntity(14U);
    msg.name.assign("XISDDOMYLXYFJBMVDKVOOQLTIDEVHNNUGBSBBIBKKMFATAWUTAQDZNJTUVHQNYKRCCWDEYLZZJCXTDFHTXINPIPWPGIHYQSXAKZSRPNGQPKLTEMIVLAMYLIHXCQOPUZLHQXPRHPANQEJOLPRGQYJFVMGZGKLDMLEJNFUWWONAWBRQTSJCOCWRWBZGVCZCFIHBWTUXYRYEKGUYXSFM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QONVQYCMFIM");
    tmp_msg_0.value.assign("BSTYVSHXSFVNSQLUXPBMIOHCQETXYZOLZCQVAQGLJXJIFLKZGEYDYQPOHSYDGFPIQHXAKKRVNEFRLHUNJTZIUGITEYFAEJIPOHVOPFEYFOVQLBECAMGDSLFCEFHGVBWXCNNGBJKXMCCGCAQPPBKUWWJJXKZIZNMDKIWGAKRUYUWRMJXBSJATRRZTMYSOMZWZRDNURWQTMUSIDDARWTRSNWJNPUHTADKPVCHELWCBHYXBFBGV");
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
    msg.setTimeStamp(0.5830735591165839);
    msg.setSource(34366U);
    msg.setSourceEntity(205U);
    msg.setDestination(18123U);
    msg.setDestinationEntity(194U);
    msg.name.assign("WNFNBGIATCWNQNWMDHFVRVFQJODMYYAWVIRJEHHYSRUSOPZEQESHWJUFYZSULALQDZODWVREXGNUKKBZUQXTETIPFMEYDLNUONQYZIVTXOOKIJMLADMCPSPJPOXKUKEVLXXXPKBJCWHBOBPVKEWGLBTRGG");

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
    msg.setTimeStamp(0.6408679706149912);
    msg.setSource(50229U);
    msg.setSourceEntity(131U);
    msg.setDestination(36117U);
    msg.setDestinationEntity(48U);
    msg.name.assign("IXYRIWMPRWQETTRXTSHPEVTWTHWSJPNLAMDARUGGDWYZFCQFNRQPVJQLFOQKGHXHBZIVFXAXOKAINGMBCBOYHBCEAHJJZZUAPHLJQDXN");

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
    msg.setTimeStamp(0.7520353045795204);
    msg.setSource(37762U);
    msg.setSourceEntity(106U);
    msg.setDestination(47973U);
    msg.setDestinationEntity(203U);
    msg.name.assign("UYEYZWLTFQXNAUCXQZEQAMOJLOLXNSFIKPBFNPWIENRPHWMLCZXSUCSQURNHCDEMGLJHLBZCNGLKVCAHQDMDDFOFSYJJSPKWDCBQVTRFNYZWHTEOSJVDQOMBYBCVBAKDRJGPHMWTGOGCQVDGTWSREKXRSWAGAFFRAXVXWKJNPOUIPIZQBPIEGMAJVTTVCUBUBIJULWNQIZDXMXIKTSPYHXOMZYEHBRKGOJTULHMEKRYFARSVNLFIGYZHA");
    msg.visibility.assign("VRWFGQJXKRVANTAISVEHIPBNXPWRRSLDBOUPYONISJDAOQUETZURGISNMQYFVJTWQWFMERCEUIWZMIXRWQKKERZYGDQYVODKBJUYTSLSKPCDLGHBLGQMZXQJKDEDALISAWZSCWAJZNCAOGDJZWCCQONYMHPCFZAC");
    msg.scope.assign("ZJWULPJLVNWOCEJJPQDCKZYYNESJLJDXAIKBANHYRFXZSZXFOVSZZIVFWRDKOGKVTUOKLBGFAHQQTEXSPOBTFWTTQBNLKCBLYEBWANADMWRYCEDFZMRCOUMCPXQMSNMEGQGLTHUXPPTRGUHWDOIMHFGHRNXVJZWVCDXYSRJQMOVHTSLHKTRFKCMZDRCAAPIAFGHBVDGPGXSEQBUSBUHOYCKR");

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
    msg.setTimeStamp(0.4924806610248339);
    msg.setSource(12388U);
    msg.setSourceEntity(82U);
    msg.setDestination(34708U);
    msg.setDestinationEntity(42U);
    msg.name.assign("HZEANSGRSEXBAQLVEMRZLLCIDIJMXPCKPEKTUTWOBSEOJSLUIZDHWWQCDYRMKURWOXFDGEHFXQVSMDASYPNYJDZDVRUNIHGLHBQNFBGVHPWFYCCOGDQBNKFSKLKZYFROAMTWMPOUIIKVXNBELSZQICOUGTCJBVJPRWYNZVKHGKMHVEENUZMFZACJXMNGPVATTRQMGAFKIYAYQPAXU");
    msg.visibility.assign("XDQVNELUVEKPKJZRGDGLKAWRHWDLYQZPXFDMNXALKBZYCFWOKCYHPXFEGTPRPEZUYRHQICNXQIPZUBBNDRDO");
    msg.scope.assign("BEOVYGSXINFTKKCAXZMBPYCJITVVIHXOPOESLIQKQRRTNUBFMNHSGL");

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
    msg.setTimeStamp(0.3322330136077706);
    msg.setSource(29162U);
    msg.setSourceEntity(148U);
    msg.setDestination(46097U);
    msg.setDestinationEntity(58U);
    msg.name.assign("XFVKLZIVBOARZKQVVGPCGNRCPKVWJGKLITLSQUYCDPLBPCMAVTXWNAZNIONWBUFCWBGZFUXBJAFAYUXLNKCTSMEMVSGFKEQTRNNRRHYTOSYKDWZBWGDDHKSBDNMXMRUDRCOUHIPRPIJDXZHHGZLQQATFEZARZUSIWQBPQHOFEJTJVDTXOMJJ");
    msg.visibility.assign("MUIZURLQZVNCKAQHCGIZYWJYLNKGOLTYVPLYIPIGARGOFTNOKWPBSXTKJYORQRVJELFCWNJDHIBTUJNJXEQFTYLGDATXMBUFDCUHSZZWDORHRNXGSWCBUMDSVFQZOGVOSHSLMTXPFBPBFDEPCBIGEEHDESJITQIZAQKDSCYWSPFUAHZLAUUWDGXQXYFMMTOPLWXEEQKRVHXECIKNKNMMZRRRZVOKAKUCYVSYOWLWNAMBH");
    msg.scope.assign("KXAMSVASYNCBENANYFWFZBMVCNFYNDXBLTPZQEZPATQXDMFLO");

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
    msg.setTimeStamp(0.6204922925923729);
    msg.setSource(49960U);
    msg.setSourceEntity(14U);
    msg.setDestination(22512U);
    msg.setDestinationEntity(68U);
    msg.name.assign("EIQURNBRTVPLCNDHCNFZOX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QIDHIALJGBWDRQTATMMDISEKNBUNEQFPHJOZQPCXAFZOCZIXBMXNWFQJDIKQUBKCZGUERUZFAWBGFSGWFBXQNXGWLVTUTVMJJMWYDZPHOCOMVLRMHKEZSZDJY");
    tmp_msg_0.value.assign("DVKATHVUPRDXNXKTRPXJFUAFIDAZEYNXPWNVLGAZKXVQBFPJEHRYQHFUHBZMQIBEWUUFVVDUCDRIQTYAEDZ");
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
    msg.setTimeStamp(0.25180606155776375);
    msg.setSource(7485U);
    msg.setSourceEntity(62U);
    msg.setDestination(19257U);
    msg.setDestinationEntity(93U);
    msg.name.assign("JFAFPLWWTKKNEHGFERXXRUDDAPOCBTFLGLWCZQG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JBCCJNEAOLGGJVXIAXIVZZDOIZAMQJROTODTRPBW");
    tmp_msg_0.value.assign("UVQRAUAKHFZRRWITZQUZDESGDQBPNYWCFCMKEMORCIMTWJIHGJBFVQUTNMIDAOUCYLXSBETZITUGEOMRNJEKHKNTKZYVHRSNOKPSPWFFTKLXHGYZJIJJNBQANZGS");
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
    msg.setTimeStamp(0.37724613128426643);
    msg.setSource(64351U);
    msg.setSourceEntity(179U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(66U);
    msg.name.assign("NOQQHCIFRLBYIQEMONKOHVDVAXGIIQTOSJPTLFWSTIFZJOACUSSQQNIMCEJWXMVDISVXPBYPTZVEYCGF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QMWMCVXHFBGCFQ");
    tmp_msg_0.value.assign("ERHOSQYPHGQRSNCNXOYQSPNAOAAVUKFBNOZVILUYAYBFXRWCSRDXJRIWCVXSJIKNVLOQFZSTYAYJQEUKOUJPXTCMQVMSWFHGBNUZCCUYJUDDPZOJPLHEBZCQBGWNSDOLXSQLMAJHLCPGRPUEPHMEWHIZTEGEEBLVVMAWIBDKFAPZBM");
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
    msg.setTimeStamp(0.008327634335788758);
    msg.setSource(16153U);
    msg.setSourceEntity(141U);
    msg.setDestination(55263U);
    msg.setDestinationEntity(248U);
    msg.name.assign("HQYNYYMLEYUDQKNQXOCEMNYUEEARLCJJBPJNFYVRBOEGDRARJJJSAITJVVSNTUEBSBZETGZVDOQFMUXMQHTGDRXCPPZKDBMWODFODIRRXDMUAZVZMQIIZNVCBTUKBZIFYOVYKPFWSGPKIXEPLREHAMCQCZD");

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
    msg.setTimeStamp(0.5022436199113914);
    msg.setSource(6361U);
    msg.setSourceEntity(79U);
    msg.setDestination(17492U);
    msg.setDestinationEntity(140U);
    msg.name.assign("WEISCEAUXPNRRNRPHKNQFLADBXEZZTMKYZQJOJJSSDICTVXLBXRBWFHADVVIHWESLUMBUOHTFZHQUYFTWROFEEGGPDTBEPMDIQLT");

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
    msg.setTimeStamp(0.5865002218280021);
    msg.setSource(21353U);
    msg.setSourceEntity(222U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(156U);
    msg.name.assign("AREHMFCTDHHASOUKDDGRVWXZLRSXHYIOCIWMQWZGKHGKPANDBVFTFWUQXFXQMNYRJJTVMCBPSKHCMCSYOSZUJMARSOVQIWJJNAWXZETAOKURCQPITBDGNQVU");

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
    msg.setTimeStamp(0.02327067036983843);
    msg.setSource(2539U);
    msg.setSourceEntity(215U);
    msg.setDestination(21175U);
    msg.setDestinationEntity(224U);
    msg.timeout = 1296688106U;

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
    msg.setTimeStamp(0.5329310088903397);
    msg.setSource(31455U);
    msg.setSourceEntity(161U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(173U);
    msg.timeout = 1680389710U;

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
    msg.setTimeStamp(0.6334926154960927);
    msg.setSource(39455U);
    msg.setSourceEntity(138U);
    msg.setDestination(25772U);
    msg.setDestinationEntity(239U);
    msg.timeout = 1336981727U;

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
    msg.setTimeStamp(0.6877753175999562);
    msg.setSource(32164U);
    msg.setSourceEntity(208U);
    msg.setDestination(2154U);
    msg.setDestinationEntity(18U);
    msg.sessid = 2772813779U;

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
    msg.setTimeStamp(0.5840291036414046);
    msg.setSource(28392U);
    msg.setSourceEntity(92U);
    msg.setDestination(25080U);
    msg.setDestinationEntity(68U);
    msg.sessid = 3489232422U;

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
    msg.setTimeStamp(0.8116213531798291);
    msg.setSource(48848U);
    msg.setSourceEntity(80U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(142U);
    msg.sessid = 1341850386U;

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
    msg.setTimeStamp(0.3185070498823196);
    msg.setSource(57575U);
    msg.setSourceEntity(82U);
    msg.setDestination(43763U);
    msg.setDestinationEntity(59U);
    msg.sessid = 2073747906U;
    msg.messages.assign("BEJYROZZBHXRSJQHHB");

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
    msg.setTimeStamp(0.30077332309679106);
    msg.setSource(22722U);
    msg.setSourceEntity(168U);
    msg.setDestination(32626U);
    msg.setDestinationEntity(136U);
    msg.sessid = 2041941109U;
    msg.messages.assign("QHCZNFYSONDPORIIKPJVUVTKEUVAMRLGRZFFGBZCWOCTCMPJUNEEDHKLTIJAEDXLWQOQGIZNXZAZDCKTMXIAOWAEGUBMOYOYWUSIWNVQFBZKADPCZITYGVTVFFMPRHNHKNAGZABYSBSEOJWXLUCVIGFRGBVKGTMWRVZRSJJBCXTRWFOVPSLEOMYFAJWQLKTHUHPEWUYJM");

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
    msg.setTimeStamp(0.5142289861557368);
    msg.setSource(57260U);
    msg.setSourceEntity(3U);
    msg.setDestination(58603U);
    msg.setDestinationEntity(99U);
    msg.sessid = 2108234766U;
    msg.messages.assign("URAEVEDDBXDSSEWDNXYKPIUGMUXTOVSJFINOEENHJMQMXIDQC");

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
    msg.setTimeStamp(0.1257880107795588);
    msg.setSource(12820U);
    msg.setSourceEntity(28U);
    msg.setDestination(49665U);
    msg.setDestinationEntity(72U);
    msg.sessid = 3398616713U;

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
    msg.setTimeStamp(0.7760138745278055);
    msg.setSource(55979U);
    msg.setSourceEntity(64U);
    msg.setDestination(61538U);
    msg.setDestinationEntity(108U);
    msg.sessid = 2176892532U;

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
    msg.setTimeStamp(0.5746940420326256);
    msg.setSource(59074U);
    msg.setSourceEntity(9U);
    msg.setDestination(48677U);
    msg.setDestinationEntity(131U);
    msg.sessid = 1094385092U;

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
    msg.setTimeStamp(0.6316517858430696);
    msg.setSource(53579U);
    msg.setSourceEntity(69U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(67U);
    msg.sessid = 4056315675U;
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
    msg.setTimeStamp(0.6879454632294192);
    msg.setSource(61477U);
    msg.setSourceEntity(46U);
    msg.setDestination(45165U);
    msg.setDestinationEntity(116U);
    msg.sessid = 2406092698U;
    msg.status = 31U;

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
    msg.setTimeStamp(0.9954483452476839);
    msg.setSource(23361U);
    msg.setSourceEntity(253U);
    msg.setDestination(57092U);
    msg.setDestinationEntity(184U);
    msg.sessid = 3268485255U;
    msg.status = 42U;

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
    msg.setTimeStamp(0.28328393735781776);
    msg.setSource(59420U);
    msg.setSourceEntity(19U);
    msg.setDestination(59012U);
    msg.setDestinationEntity(160U);
    msg.name.assign("ZKQCIFZWBDQFTLCCZTVDEVYESQBLIMSQFVHNYNRYFUASPKCEWSVBEPQUOKNOTWXVXBIUILXEWESZFLTBYGRAJHXWKLLJEMRCKQUAPZOATSIMVJOBREFPHQUYAKFKGOQHZQRBHNRBSNCAJ");

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
    msg.setTimeStamp(0.27076020622360597);
    msg.setSource(44856U);
    msg.setSourceEntity(172U);
    msg.setDestination(27969U);
    msg.setDestinationEntity(175U);
    msg.name.assign("BCIMGACOKEASYIDHSHBAZNAKAVVMOBAHQVIDAGIFWULQFTEPQJXNKRDXGSPXMHIYDDMFLVCFOJYZDDCXFMSBJQQYVUJHGJGBWRJOLNRMYDNXMGKLPUKINCVBUWTHEGLBPPKUUTFYLBPXYTEKRHQROOMNFVLSFQRZULZRWESRPJFXSPMWUIICCZTKAABSKSZYGTZHWPIHJAXXXZVWQUCEPOCEHETRYQTMSNVGEONVQBRDDJLFTLCWJGN");

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
    msg.setTimeStamp(0.2463735468739492);
    msg.setSource(39295U);
    msg.setSourceEntity(68U);
    msg.setDestination(9070U);
    msg.setDestinationEntity(126U);
    msg.name.assign("SFBTYAFNALEZEABZVNCLULIFJNQPWJFPJDGRHJDUNCPOVHEXRFUVMTKVTDYHWBZHKYOVTTKTALXSDN");

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
    msg.setTimeStamp(0.8776397652323321);
    msg.setSource(51566U);
    msg.setSourceEntity(239U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(36U);
    msg.name.assign("BHDOEVJRTATOLFLESORKONWKXTPRRWIKIBEYVKJNYAHDWTYHUCPLMKHAMPGEBGFANGIUTCHOVRSDYYMGKNMNCOKBWZUEIXHPGMZLFVSUPWXFAWGNPOLLUPNCRQLRCMABDXTMIJXUBZRKFWXRVZSAMPSYWLENAQSLYYDBIBDACJLCZDTMYQJUGSUEGKJTDRDEVYUTOFHQFSNJZAZJHXNSVQSOBJXEXQUOQQIPCVQTBW");

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
    msg.setTimeStamp(0.11390807913635403);
    msg.setSource(54364U);
    msg.setSourceEntity(123U);
    msg.setDestination(10820U);
    msg.setDestinationEntity(246U);
    msg.name.assign("IYWEYRMECMLBOQQMHZBLTLFSZNJROTPATJELHSSYAXBAKSRVCOZWGXKJEOFNMXPPGPPIUMPOTCINJQZBIGRAZDKB");

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
    msg.setTimeStamp(0.9584343302054353);
    msg.setSource(4802U);
    msg.setSourceEntity(65U);
    msg.setDestination(62532U);
    msg.setDestinationEntity(23U);
    msg.name.assign("DLHLQXRLEHWBHAQLABJACWGJCEJKOFOIPUPFXIRVAZKGVRXPDDQNMYYQSFXMFGHPITIZUZDPJKMFNUNHZGNGMQXRRYIYYUOUOCHVNDAEXSQTTOWBZJTCLJKPFYWBJAEBFHQNWZCQJXACCWYZUVAOYREJVGSONGEZSVXPMTNYJITTOMRHLSSODVDKWIDDKWKTPETENUXAUHZIBGUCRDSLC");

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
    msg.setTimeStamp(0.15658955844695854);
    msg.setSource(20300U);
    msg.setSourceEntity(149U);
    msg.setDestination(50857U);
    msg.setDestinationEntity(58U);
    msg.type = 223U;
    msg.error.assign("AJTJHWZKHYPWCJCQMSYPHIHXCFGLOUNEFDGSNQRVMXTZQEIUQVMFWUCMBDVDTZOHNXMQRBGXGRUCBAGGWTWQEVRCPQEJEDRMHNUSXSYZISDQZAVTSTRTAYMPFKFMYLHXOWXQIKBDIOZGKRXEWFCODPGXXBSKPVNRBSODFVEWJOBAYPFIONLGHGFAZNCLUKIUPJVYELZEJLLYRSPNKL");

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
    msg.setTimeStamp(0.31498303592721555);
    msg.setSource(18318U);
    msg.setSourceEntity(105U);
    msg.setDestination(5358U);
    msg.setDestinationEntity(128U);
    msg.type = 183U;
    msg.error.assign("GGMHMYHIPUVCCYVQADYMZXN");

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
    msg.setTimeStamp(0.6767520580560685);
    msg.setSource(13394U);
    msg.setSourceEntity(144U);
    msg.setDestination(33143U);
    msg.setDestinationEntity(225U);
    msg.type = 103U;
    msg.error.assign("EMRLNJAIKKUXHCXNTMKLMSQBRNTSZDAUYCJGSRLEDVZIMLHCBLRKYVXQ");

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
    msg.setTimeStamp(0.7072662243530266);
    msg.setSource(50307U);
    msg.setSourceEntity(70U);
    msg.setDestination(4338U);
    msg.setDestinationEntity(168U);
    msg.seq = 17054U;
    msg.sys_dst.assign("GZEABAUUGIYCVZFGXTFVHVCIYDAZQSQOXWULSXDMGLOBFYHZSBNTSVRYPEXTJRKMPMXNIEID");
    msg.flags = 146U;
    const char tmp_msg_0[] = {-66, 79, 70, 31, 62, -38, -30, 97, 98, -60, -79, -32, -2, -23, -19, -109, -8, -86, 48, 118, -13, -6, -40, 98, -66, -20, 67, -112, -9, -61, -4, 43, 25, 28, -47, 2, -6, -94, -72, -13, -2, 84, -100, 72, 3, 122, -96, -64, 15, -55, -11, 49, -105, -13, 30, 60, -123, 105, -49, -49, 116, -112, 103, -121, -83, -82, -23, -79, 85, 45, -27, 10, 93, 126, -17, -124, -96, -58, 98, -13, 62, -98, -27, -2, 111, 102, -32, -40, -52, 29, 33, -10, -75, 108, 66, -13, -65, -7, 97, 115, -29, -98, -82, 83, -17, 65, 21, -84, 51, -49, 24, -117, 121, 38, -20, 63, -47, -50, 88, -89, -103, -74, -1, 0, 28, -123, 91, -30, -87, 0, 42, -86, -73, 39, -73, 36, 18, 36, 13, -66, 63, 15, -75, -75, 66, 47, -81, -76, -4, 76, -112, -55, 22, -6, -23, 27, 44, 28, -4, -37, 44, 96, -123, 33, -94, 109, 37, -105, 90, -90, -108, -24, -124, -64, 5, 21, -95, -83, -24, 111, 16, 23, 25, -79, -121, 51, 2, 63, -11, -120};
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
    msg.setTimeStamp(0.20701010218708094);
    msg.setSource(8325U);
    msg.setSourceEntity(239U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(220U);
    msg.seq = 6864U;
    msg.sys_dst.assign("RUOSLIVQJEXIUTOBOCQAQBBAZTWYUTMPULOGSBRNZTCYFNVKJTGSPRYCVDXLVLDZGDXYFDMQTPOGXBGGZYBEEUONBEMYKCDARQTHAUWWDXSLFRIZMWWPHFFJBCPSNPRLPMZHXE");
    msg.flags = 148U;
    const char tmp_msg_0[] = {-5, 108, -62, -99, -91, 70, 63, -103, 126, -15, -47, 62, 78, -64, -3, -70, -45, -93, -66, -49, 10, -62, -98, -34, 60, -4, 45, -105, -84, -44, 117, 30, 69, -111, -36, -83, 23, -62, -21, -84, 45, 25, 92, -56, 72, -115, -101, 5, 9, -112, 1, -104, 32, 8, 31, 73, 98, 106, -44, -117, -13, -42, 126, 53, -113, -80, -77, -70, 14, -16, 106, -33, 2, -52, -28, -38, 114, -108, 27, -117, -40, 113, 20, 56, 22, -13, -8, -60, 108, -93, -128, -38, 12, -60, -80, 65, 100, 126, -117, -119, -125, -75, 114, -106, -82, 44, 81, -98, 20, 115, -101, 63, 81, 44, 110, 105, 66, 103, 39, 54, 109, 28, -89, 121, 29, 20, -112, -8, 72, -79, -7, -110, -45, -23, -47, -119, 87, -83, 106, -53, -88, -42, 53, -105, -43, -83, -77, -20, -114, -64, -105, 27, -70, 4, 123};
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
    msg.setTimeStamp(0.3415789423045289);
    msg.setSource(42481U);
    msg.setSourceEntity(194U);
    msg.setDestination(19502U);
    msg.setDestinationEntity(43U);
    msg.seq = 9449U;
    msg.sys_dst.assign("DVUOCGEMQFUVGWEMLVEWATTYAOQMDEXSECUDHSTRFELOBXZYKIWKVYMYGMSJPPBRRNSCINPXBJYNATXNEHXMHURHLZOXNHDOGZHIAKBHPFNQFGCQHKJLOYGYZWQJDXAKPZCBTULAIMUZRSTBLDOIIDONLRQWNMWNKGTMHEFCJVZZVAYRWSXEQVUD");
    msg.flags = 114U;
    const char tmp_msg_0[] = {107, -34, 92, -127, 99, -27, 9, 64, -30, -4, -12, -66, -27, -2, 1, -104, 2, 33, 101, -88, -106, -52, -107, -36, 116, 71, -2, 95, 87, -126, -71, -66, 22, 84, 46, -41, -125, 60, -48, 112, -108, -94, -87, -15, 63, -66, -37, -6, 49, -58, 105, 126, -75, 51, 97, 4, 26, -82, -67, -37, 126, 95, 81, -85, -79, 22, -108, 81, -62, 76, 3, -86, -27, -11, -30, -94, 114, 125, 2, 92, -6, -17, 2, 84, 49, 49, -8, 57, 62, 27, -80, 33, -12, 1, -1, 31, -81, -61, 49, -102, -24, -54, -82, -35, 58, -86, -81, -60, -10, 64, 4, -39, 19, -90, -109, -20, -10, 95, 100, -64, 43, 12, -15, 91, -63, 28, 79, 121, -29, -68, 61, -124, -9, 79, -31, -4, -108, -50, -109, -94, 24, -54, -22, -117, -111, 77, -123, 62, -45, 72, -124, -89, -63, 43, 19, 105, 113, 4, 85, 125, -119, 72, 113, -90, 100, -40, 94, 47, -30, 65, -77, -116, -111, 73, -100, -84, 10, -32, -7, 9, -75, -32, 95, -25, 14, 21, 51, -62, -28, -87, -127, 6, 98, 67};
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
    msg.setTimeStamp(0.9119680558169624);
    msg.setSource(39020U);
    msg.setSourceEntity(217U);
    msg.setDestination(49261U);
    msg.setDestinationEntity(65U);
    msg.sys_src.assign("SIHGWWKQSDMLMAUTQWYKJJUBWCKHDYNQZHUHMPPUDO");
    msg.sys_dst.assign("XTDZZLLRRLCAZVOXEFGSLYBWJSBFEBPVTHDMXLBRRDPYFQOUZFXVUFWYCTJIMGPSEXCNSRINJYFIYKTBYXVLVQZRWHGCZBGRSKAWVJBNJQUKNYINTCJWTBGSOWYKVDQZOAUIQSCETGQUDH");
    msg.flags = 16U;
    const char tmp_msg_0[] = {-10, 117, 73, -82, -99, 94, -126, -126, -31, 55, 91, -125, 5, 16, 44, 29, -33, 98, 9, -47, 90, -14, 90, 88, -116, -51, 13, 77, 107, 117, -116, -81, 11, 7, 92, 11, 35, -92, 39};
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
    msg.setTimeStamp(0.9222256047205541);
    msg.setSource(49170U);
    msg.setSourceEntity(124U);
    msg.setDestination(35874U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("MOWZZXAVWBDKNPGVPMXAFJZTQGETDYWZSNQIFWBVJPHLOFBNMFNKMYFGHMODUKBDVSXCBLXZCLQGUUKHPQHLYGBRIETRFUQAMBNSJDRWJXLOTMTJPTWAVSHNLMNPALZYXXDGWWYUKAGCONLITJCVFSSDEEKSZGRVVYUWAQDQIAIXIHZTUQOUAEGTHKHPMFHQJYLBXUSTCNBVNMOSIHSXIPGEOREE");
    msg.sys_dst.assign("OYGHJNIBJGNGIJWIUCDQFDRYZFFRGUIHLVTOTBAUSMVMWKLRXCALOBVAZRCXTEZQYJBLYNHMSCTMBZDZEOKKXXTDGAXJGSXRDVJQFQZSNLCCMHQGLJWUPDFMFEFEKWRSKPYVXXPFNFLPWWHRVCKWMIWZSSRKBKOHWTTAQHVMMSQSOWBPXFQINHZSAEJCCVLNDYNQUXVRYPEDLETMNEEUTDYBEJIBPUPOP");
    msg.flags = 3U;
    const char tmp_msg_0[] = {-26, -99, 88, -67, 74, 92, -128, -93, 83, 10, -79, 44, -53, 106, 24, -92, -110, -70, 82, 101, -80, 14, 37, -59, 105, 13, 62, 112, -78, 113, 87, 61, -128, 93, -45, 97, 6, 68, -51, -12, 30, 104, -66, -59, 65, 96, 55, -2, 39, -105, 58, 77, -99, 68, -58, 108, -62, -10, -49, 81, 67, 63, 116, 12, -13, -93, 70, -27, -37, -97, -15, -6, 102, 72, -82, -74, -124, 41, -84, -22, 24, -127, 116, -117, 94, -80, 45, 70, -30, 14, 108, 22, -115, -23, -78, 86, -127, -88, -79, -78, 99, -78, -38, -37, 50, -34, 49, 93, 27, -54, 81, 116, -13, -32, 72, -37};
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
    msg.setTimeStamp(0.2494244013674638);
    msg.setSource(50820U);
    msg.setSourceEntity(242U);
    msg.setDestination(28055U);
    msg.setDestinationEntity(194U);
    msg.sys_src.assign("PERNTFAPGDCCVRFSFJQZTKLZHOWLBYKQKDJAAPIGQGEOLCOSLDXUFGLRTAOZLRWIUBRZMCUWWYRN");
    msg.sys_dst.assign("STWPIOJIKOQDOTEEXQSYIJIBHTVDHSUAYCAVRXVLBI");
    msg.flags = 124U;
    const char tmp_msg_0[] = {86, -17, -34, -70, -75, -81, -126, 113, -101, -104, -88, 104, 97, -17, -108, 71, -70, 34, 66, 90, -5, -11, -92, 56, 108, -41, -87, -94, -71, 39, 126, 19, -31, 99, 3, 8, 84, -92, -52, 107, -2, 37, -32, -62, -110, 48, 95, 9, 91, 6, 53, 116, -123, 97, -35, -11, 44, 1, 95, -21, 93, 109, 108, 46, 5, 94, -106, 80, 27, 55, 28, -53, -117, 3, -51, -4, 7, 49, 105, -14, 22, -2, -38, -118, 124, 114, 8, -87, -78, 4, 120, -50, -49, 26, -121, 27, -72};
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
    msg.setTimeStamp(0.15343857977627462);
    msg.setSource(57756U);
    msg.setSourceEntity(208U);
    msg.setDestination(18942U);
    msg.setDestinationEntity(18U);
    msg.seq = 32429U;
    msg.value = 85U;
    msg.error.assign("DJXWQJDRMZITMGBPSBBCWEAFEQICZCGHEQWRNIEUOKLYNVLGNENOUIVDPKRLIMKOGTSJKXFCUZWSZCTPLGNZXBNXUWWICPVDACXQJDHFMBMCQYSVDLSSCIOYETKYFKHXUGEJYORAXSNAUFRFLUMFHQCXPZGAJOMQYFRTAQXQTWSBBBJZBULWWAOFBRGDIZYKVNUAYNGAMVFL");

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
    msg.setTimeStamp(0.8836344445251199);
    msg.setSource(10605U);
    msg.setSourceEntity(209U);
    msg.setDestination(11990U);
    msg.setDestinationEntity(163U);
    msg.seq = 14788U;
    msg.value = 9U;
    msg.error.assign("NOUELYXGJYBOGBHLAYZOJDSKMJBHQFZOHBZTOMETGIJOANITLYDNANPQMSVOFAZMUWXHKDTVCUAVIRELGPRZRQBANURJHQKMTVHSLZERVLCDLKIFSJR");

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
    msg.setTimeStamp(0.32660337723287036);
    msg.setSource(8532U);
    msg.setSourceEntity(240U);
    msg.setDestination(29054U);
    msg.setDestinationEntity(81U);
    msg.seq = 27126U;
    msg.value = 218U;
    msg.error.assign("TTNHSKLHTHZRQMETHHJYIJDDKRCVOZHQUUFZQRBMEWMOXNFFFOXPDKJBYJRWFWOGSVBCOIZUXSANPSHNFLZMWYPJSGLTMPYWDIDCGVUBEGZQVQWEVYADSETAZOEDEGRYFYQGBMIPJAWFLOULXUAV");

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
    msg.setTimeStamp(0.27258692555924413);
    msg.setSource(49558U);
    msg.setSourceEntity(71U);
    msg.setDestination(5011U);
    msg.setDestinationEntity(239U);
    msg.seq = 7983U;
    msg.sys.assign("FPTRUEDBILSHLURKIGYJHQFTPYARPAPCMEVDIHGBKWQAWVCROBSSRTOKAXZTFNFJQZUKLSUCOUBNRGODMOTKOKWTVSIPKLMODFNKFEBDRFZZIVSWOGBBKIEYNMUQZGYCXLZDECXCAMVUVHJKLQAYJXIXCRQNZRWCDTJAMJMHTILWZYLOLUXEMBEJAHNEBPCPGDQGNFZWNGYEQOXYSDUXJRTJXGVVSYSNXHYPNGVZAFQIMWJQPSHWEWTHVPLFMD");
    msg.value = 0.7448555681694086;

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
    msg.setTimeStamp(0.8055307953602808);
    msg.setSource(2869U);
    msg.setSourceEntity(126U);
    msg.setDestination(4265U);
    msg.setDestinationEntity(116U);
    msg.seq = 22175U;
    msg.sys.assign("ATZUHSKMDADDCBQERZOVGISWDWDUCTKXNYJUJXCWRICDMMBXHRKRTBIZQYAOMVSVUPDZNJBKJVTSTWCTFWPBTGJPYHOSCQWLPIFXYPDTTBMAQXYLFNGBXSNVAKHHIKCULHRFQNULGGPKQMJIRPBQUOOLMELLBGRTCOEHZZNSOWRDZIEZFZESKMYFVXVAHPZXBJVWANAMVE");
    msg.value = 0.059937884962613874;

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
    msg.setTimeStamp(0.5003085168035861);
    msg.setSource(29862U);
    msg.setSourceEntity(218U);
    msg.setDestination(52700U);
    msg.setDestinationEntity(63U);
    msg.seq = 51198U;
    msg.sys.assign("QNBXGJADSOSZCZVTPXLB");
    msg.value = 0.8555453035907156;

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
    msg.setTimeStamp(0.46266313139266513);
    msg.setSource(927U);
    msg.setSourceEntity(214U);
    msg.setDestination(49555U);
    msg.setDestinationEntity(229U);
    msg.action = 82U;
    msg.longain = 0.6422435335234895;
    msg.latgain = 0.8821120100772603;
    msg.bondthick = 883248623U;
    msg.leadgain = 0.03878223541104642;
    msg.deconflgain = 0.6834353995936632;

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
    msg.setTimeStamp(0.033021770423074304);
    msg.setSource(24098U);
    msg.setSourceEntity(186U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(145U);
    msg.action = 207U;
    msg.longain = 0.9083001039666426;
    msg.latgain = 0.14326478425971712;
    msg.bondthick = 1943037131U;
    msg.leadgain = 0.027027240488323723;
    msg.deconflgain = 0.3666658397542454;

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
    msg.setTimeStamp(0.47818785800209784);
    msg.setSource(17966U);
    msg.setSourceEntity(211U);
    msg.setDestination(36076U);
    msg.setDestinationEntity(9U);
    msg.action = 156U;
    msg.longain = 0.9406317022058054;
    msg.latgain = 0.7680011461925245;
    msg.bondthick = 1809926916U;
    msg.leadgain = 0.03794157421789879;
    msg.deconflgain = 0.04035342468578995;

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
    msg.setTimeStamp(0.41755284990523633);
    msg.setSource(4412U);
    msg.setSourceEntity(158U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(104U);
    msg.err_mean = 0.12300652432561943;
    msg.dist_min_abs = 0.41545080298726866;
    msg.dist_min_mean = 0.5968911923065492;

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
    msg.setTimeStamp(0.08752908414532279);
    msg.setSource(10069U);
    msg.setSourceEntity(158U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(16U);
    msg.err_mean = 0.5566656513935502;
    msg.dist_min_abs = 0.7722526985535845;
    msg.dist_min_mean = 0.03665586881376648;

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
    msg.setTimeStamp(0.9818399701218348);
    msg.setSource(54370U);
    msg.setSourceEntity(28U);
    msg.setDestination(56615U);
    msg.setDestinationEntity(28U);
    msg.err_mean = 0.2098517891718018;
    msg.dist_min_abs = 0.5014084470804413;
    msg.dist_min_mean = 0.916166627102282;

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
    msg.setTimeStamp(0.5324877892432147);
    msg.setSource(25548U);
    msg.setSourceEntity(113U);
    msg.setDestination(37874U);
    msg.setDestinationEntity(0U);
    msg.uid = 112U;
    msg.frag_number = 194U;
    msg.num_frags = 185U;
    const char tmp_msg_0[] = {-58, -123, 71, 19, 41, -86, -73, -69, 0, -38, -19, -38, -60, 24, -31, -53, 32, 47, -63, -78, -75, 29, 13, -23, -122, -59, -120, -125, 43, -50, 123, -92, -14, -114, -109, -10, -54, 32, 118, 95, -117, 113, 62, 81, 100, 102, 55, -20, -78, -44, 9, 54, 7, -33, 117, -125, -80, 85, 64, -87, -60, -64, 43, 110, 124, 69, -19, -119, -46, -72, -47, -8, -49, -117, -88, -13, -47, -2, 70, -34, -28, 10, 66, 11, 125, 48, 5, -23, -23, 37, 22, 26, -105, -8, -112, 120, -51, -83, -99, 4, 94, -15, -58, 95, -11, -5, 67, -83, 91, 96, 61, -40, -85, 14, -49, -58, -52, -32, -1, -110, -49, 75, 63, -94, 88, -4, -5, -9, 65, -75, 46, -27, 30, -71, -116, 18, -80};
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
    msg.setTimeStamp(0.9712872345114679);
    msg.setSource(53764U);
    msg.setSourceEntity(200U);
    msg.setDestination(7489U);
    msg.setDestinationEntity(239U);
    msg.uid = 234U;
    msg.frag_number = 118U;
    msg.num_frags = 60U;
    const char tmp_msg_0[] = {-79, 49, -94, 110, 86, -37, 19, -56, 58, 65, 72, -69, 61, -29, -116, -111, 88, -1, -98, 46, 113, -56, 108, 107, -15, 69, 86, 82, 121, 118};
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
    msg.setTimeStamp(0.07490551601524365);
    msg.setSource(51058U);
    msg.setSourceEntity(148U);
    msg.setDestination(13516U);
    msg.setDestinationEntity(123U);
    msg.uid = 21U;
    msg.frag_number = 14U;
    msg.num_frags = 93U;
    const char tmp_msg_0[] = {-66, -55, 13, -44, 121, -14, 16, 62, 86, -84, 41, 118, 123, -19, 119, 6, 91, 89, -48, 101, 95, -80, -119, -124, 40, 98, -109, 0, 38, -104, -79, -26, 114, -70, -83, 27, -43, -73, -83, -11, -1, 31, -38, 46, 28, -93, -120, -30, 76, -95, -24, 57, 25, -85, -29, -82, 113, 73, 25, -70, 112, 95, -69, -33, 16, -83, 3, 22, 58, -123, -93, 85, 108, 68, 118, -122, -31, 53, 51, -24, 0, 116, -16, 77, -52, -93, -105, 36, 125, 11, -52, 53, 85, 95, -16, -87, -40, 117, -93, -5, -78, -46, 71, -115, 112, -44, -14, -101, 21, -115, 15, 115, 16, 49, 101, 52, 88, 73, 110, 6, -71, -34, 82, 3, 30, 24, 29, 35, -39, 124, -23, 46, -36, 40, 27, 95, -118, 73, -45, -74, 76, -21, -62, 65, -25, 42, -48, -72, 8, 82, 126, 84, -45, 42, 47, -71, -97, -31, 102, 95, -37, 116, 33, -108, -79, -56, 38, -16, 5, -86, -115, 122, 101, 80, 16, 56, 117, -14, 30, 69, -100, -38, 82, -65, 105, 111, -103, -114, -113, 118, 106, 48, -7, -72, -20, -49, 46, 45, 109, -45, -17, -25, -20, 71, 25, -28, 2, -95, 81, -73, -62, 1, -58, -24, -53, 59, 36, 126};
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
    msg.setTimeStamp(0.22435263149726792);
    msg.setSource(51754U);
    msg.setSourceEntity(134U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(78U);
    msg.content_type.assign("LDVVKSCUTUAGEJVETRPWAYJHIZYEEUIZJPCXSHCTAYUTEORMOZYLZMUFEPLEDHBQZFGVOGJILMMBHXAUVAKQSLSNSHCOQFMXMMGPEAOQZXQKNBTCBQZSCWDOCHKNBYTJDZTKVBIRZKNGEHXRFAVJOPMRZVXKXYMUFVQNWCDRFWDJWJOYBHEDDWKRMSHNLGPICBILGTLXCIGQNGANOYKARHKPJDTRWWULBXSITUNBPFFDFAQXYSPSWRYQOULWG");
    const char tmp_msg_0[] = {12, -45, 96, 56, -8, 85, -49, -109, -105, -112, -90, 105, -63, -110, 66, 98, 102, 80, 25, 21, 33, -44, -81, 103, 9, 65, 10, 17, -84, -112, -91, 30, -116, -126, -57, 40, 22, -35, -76, 78, -23, 8, -52, 61, 77, -96, -59, 90, -61, 70, 24, 116, 124, -80, 42, 16, -10, 7, 45, 60, 49, 85, 5, 33, 60, -41, 14, -126, -29, 119, 120, -40, -84, -127, -87, 69, -15, -84, -59, -2, -106, -92, -76, -112, 11, 16, 34, 1, 73, -43, -78, 116, -59, -54, -104, -2, 19, 59, 10, -65, -75, -82, -53, 43, -99, -66, 14, -38, -126, 53, 63, 41, -67, -14, 11, 104, 60, -124, 8, 21, -75, 55, 66, 93, -111, -48, 90, -90, 89, 99, -25, 71, -31, 73, 103, -95, -120, -30, 99, 1, 10, -116, -53, 122, -76, -98, -58, 94, 125, -57, -53, 1, -82, 56, -102, -3, -65, -125, 67, 125, 105, 25, -44, 4, -35, 62, 103, 10, 108, -63, 108, -60, -103, 101, 74, -41, -43, -4, -89, -115, -122, -89, -20, -105, 20, 100, -92, 15, 3, 34, 94, -54, -9, 84, 54, -113, 3, 109, -74, -90, -94, -41, -113, 104, -34, -39, -34, 123, 53, -31, -102, 43, 107, 42, -68, 60, 43, -112, -64, -52, -37, 46, 108, 112, -29, -80, 104, 74, 3, 26, 61, -94};
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
    msg.setTimeStamp(0.5297400208177092);
    msg.setSource(1065U);
    msg.setSourceEntity(79U);
    msg.setDestination(37583U);
    msg.setDestinationEntity(4U);
    msg.content_type.assign("ROLRFXFSSWDSAMBZYHEMLXXEO");
    const char tmp_msg_0[] = {109, -123, 84, -110, -108, -122, -17, 50, -122, 108, 37, -23, -10, -94, -61, 11, -111, -98, -59, -10, 37, -42, 112, -121, -115, -66, 41, 91, 4, -16, 32, -81, 44, -78, -49, 22, 65, -14, -7, -97, 66, 44, 102, -11, 88, -20, 76, -36, -10, -15, -65, -126, -44, 87, -103, 116, 33, -81, 10, 96, -86, -38, 108, -78, -118, 48, -66, 72, -113};
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
    msg.setTimeStamp(0.1916748457349785);
    msg.setSource(64738U);
    msg.setSourceEntity(167U);
    msg.setDestination(14784U);
    msg.setDestinationEntity(145U);
    msg.content_type.assign("NYOXVHVAPDEGDTGZAQHUWHZRVNYCBTZAUSXFNSYW");
    const char tmp_msg_0[] = {-56, -106, 107, 97, -121, -40, -114, -52, 63, -113, -102, 29, 114, -34, 76, -36, -43, 54, 83, -107, 88, -54, 55, 13, 5, 49, -126, 88, -68, 120, -9, -15, -120, 30, 33, -6, -52, -103, 7, 38, 67, 9, -5, 113, 92, -27, -123, -30, 97, -92, 23, 75, -99, -109, 67, -25, 115, -39, -62, -74, 45, -33, 29, 95, 74, -36, 77, 59, 23, 121, 10, 62, 88, -44, 120, 100, 66, -92, 81, -67, -118, 20, 81, -24, -13, -3, 16, 59, -73, -68, -13, 57, 9, -30, 67, -90, -30, -28, 122, -127, -98, -122, -12, -65, -75, 80, -103, -49, 27, -81, 109, -94, 86, -35, -46, 40, 19, 18, -70, 99, 1, 79, -4, 104, 114, 84, 72, -5, 93, -13, -103, 5, -99, 35, 2, 91, 87, 105, -71, -2, 118, 2, -84, 98, -39, 84, 86, 74, -93, 63, -10, 28, 10, 13, 76, -127, 86, -79, -118, -50, 77, -24, -15, 5, 100, 37, -58, 37, 23, -71, 32, -11, 123, 69, 106, -21, 87, 112, 27, -116, 69, -14, -74, -30, 96, -73, -47, -87, -17, 50, -1, -117, 85, 16, -121, -71, -45, 11};
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
    msg.setTimeStamp(0.39998366022228393);
    msg.setSource(7216U);
    msg.setSourceEntity(107U);
    msg.setDestination(40111U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.22665201522444567);
    msg.setSource(63357U);
    msg.setSourceEntity(176U);
    msg.setDestination(2925U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.41996222737418665);
    msg.setSource(28221U);
    msg.setSourceEntity(125U);
    msg.setDestination(1306U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.3975735047870991);
    msg.setSource(64401U);
    msg.setSourceEntity(46U);
    msg.setDestination(17296U);
    msg.setDestinationEntity(20U);
    msg.target = 22504U;
    msg.bearing = 0.31871702329775287;
    msg.elevation = 0.5031069034114256;

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
    msg.setTimeStamp(0.7450556759054734);
    msg.setSource(46292U);
    msg.setSourceEntity(170U);
    msg.setDestination(30674U);
    msg.setDestinationEntity(85U);
    msg.target = 25336U;
    msg.bearing = 0.9868266863253533;
    msg.elevation = 0.3595738749268843;

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
    msg.setTimeStamp(0.005811483144039342);
    msg.setSource(35647U);
    msg.setSourceEntity(22U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(132U);
    msg.target = 60036U;
    msg.bearing = 0.15987621058904877;
    msg.elevation = 0.4990671962855602;

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
    msg.setTimeStamp(0.832236406347873);
    msg.setSource(23402U);
    msg.setSourceEntity(221U);
    msg.setDestination(31809U);
    msg.setDestinationEntity(11U);
    msg.target = 27783U;
    msg.x = 0.17500779625296226;
    msg.y = 0.12668104737463803;
    msg.z = 0.2584136884979521;

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
    msg.setTimeStamp(0.2678660172014107);
    msg.setSource(54467U);
    msg.setSourceEntity(39U);
    msg.setDestination(253U);
    msg.setDestinationEntity(214U);
    msg.target = 47825U;
    msg.x = 0.8651643884874293;
    msg.y = 0.6625389346437025;
    msg.z = 0.07812322506721059;

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
    msg.setTimeStamp(0.200027774477741);
    msg.setSource(9838U);
    msg.setSourceEntity(142U);
    msg.setDestination(34147U);
    msg.setDestinationEntity(235U);
    msg.target = 41145U;
    msg.x = 0.09291177253057104;
    msg.y = 0.17325864996932105;
    msg.z = 0.1576431451383573;

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
    msg.setTimeStamp(0.20410200702439052);
    msg.setSource(21090U);
    msg.setSourceEntity(132U);
    msg.setDestination(55857U);
    msg.setDestinationEntity(35U);
    msg.target = 18399U;
    msg.lat = 0.14286811150438294;
    msg.lon = 0.5823075067445711;
    msg.z_units = 40U;
    msg.z = 0.44923415886235096;

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
    msg.setTimeStamp(0.01592419903123843);
    msg.setSource(41433U);
    msg.setSourceEntity(114U);
    msg.setDestination(9698U);
    msg.setDestinationEntity(6U);
    msg.target = 9515U;
    msg.lat = 0.4289410639227027;
    msg.lon = 0.3767656294703917;
    msg.z_units = 164U;
    msg.z = 0.7032160939099916;

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
    msg.setTimeStamp(0.07076786143307745);
    msg.setSource(3769U);
    msg.setSourceEntity(211U);
    msg.setDestination(59075U);
    msg.setDestinationEntity(25U);
    msg.target = 30016U;
    msg.lat = 0.9391144439753905;
    msg.lon = 0.6728649827567409;
    msg.z_units = 245U;
    msg.z = 0.5027792387696052;

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
