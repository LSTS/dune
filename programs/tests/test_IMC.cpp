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
// IMC XML MD5: 1d75717ef0e92e13f5874f4f40a1ec69                            *
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
    msg.setTimeStamp(0.4379782978118447);
    msg.setSource(17784U);
    msg.setSourceEntity(132U);
    msg.setDestination(51971U);
    msg.setDestinationEntity(110U);
    msg.state = 142U;
    msg.flags = 86U;
    msg.description.assign("DVEMQCRYSJKFZIOGRLABGRJCTPKNPMWXJIADNFIDPYRUZNVVUMZNPWPFDVXRBFYOBEIMJESLNFECWNRWTGBHIZAXQBROSUNZLQHQUCQMWLUJAFQEMASKOKVTHPTAYJZWSVGMWUZIKLJPTG");

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
    msg.setTimeStamp(0.7859941008516499);
    msg.setSource(54240U);
    msg.setSourceEntity(74U);
    msg.setDestination(60060U);
    msg.setDestinationEntity(209U);
    msg.state = 203U;
    msg.flags = 194U;
    msg.description.assign("PYWVSNPLIBXWWTGXNNAXOVMDXIEFEHZYJIQZCBUHQZYDKFKDHCSMLPRRWAUQMGLUXJTDGAYQCRABOYQBFUCKOOUNJCCTF");

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
    msg.setTimeStamp(0.7263134594881513);
    msg.setSource(3476U);
    msg.setSourceEntity(240U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(39U);
    msg.state = 35U;
    msg.flags = 136U;
    msg.description.assign("XNBTGGXHNNVTCWEVNPXUVPMXIWAVEYJRDOGJQFWXIRLSHJGEHPNUTUPIAWVZKRLMCGQCNHKHMPL");

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
    msg.setTimeStamp(0.5015065011584885);
    msg.setSource(55836U);
    msg.setSourceEntity(125U);
    msg.setDestination(32911U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.9952850645454757);
    msg.setSource(6910U);
    msg.setSourceEntity(86U);
    msg.setDestination(19820U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.42689213681185234);
    msg.setSource(25000U);
    msg.setSourceEntity(157U);
    msg.setDestination(38790U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.4260864382927684);
    msg.setSource(64263U);
    msg.setSourceEntity(111U);
    msg.setDestination(9736U);
    msg.setDestinationEntity(254U);
    msg.id = 142U;
    msg.label.assign("ZLVLZXYLEZWVQOKEOUMIYQPGQOICNVEBDRQSHPHORRFHLJTMYLPDDGQNEAUAHSIYRSRJTFRGDRXKBBYICVMWNKWWUXQBUBMHNGAWQIZMFBXSEVSNLQDAGGJYCKTLKIBIWKOWHFROYMFITGPEPUVJTZDKHVNFITECJDFMFDUZNAOJAXCUFYZZYHDECQVPKAVNBXPEPTRTPCHJSBMUOASOKQFLGVTCJXBUOMICELPDXKWYSU");
    msg.component.assign("KQWIDFONHGTBXXDCSEZVGWZVEGIJMMBQVJWRIWGJJSRSRVZWIKTPUDAWSPJKDWSUIEYGMNUYKYCHPHOIKWCQQOSYQABTVNXTUZHYMQUSSBBSPQSXKOMUAEICQGRYKHLFROKNMYYRZNRIBTBEGC");
    msg.act_time = 43247U;
    msg.deact_time = 3751U;

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
    msg.setTimeStamp(0.5056121138460936);
    msg.setSource(5335U);
    msg.setSourceEntity(29U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(25U);
    msg.id = 140U;
    msg.label.assign("GKHVNZVZJZGQDXNSUVGWIYOKLAFQHBAECBWWHCWZJNQMNPRXSAXCYCNROBYHOSMDQCTWPGJZIIJPSSYERMTQGEPNIZVUWYSKBWPVEDXQABOEYJQTHYVFPJKLZSPTPUCLKAUFTIULXIRBIXQAJMATVOFHTZKR");
    msg.component.assign("QRODFVOBFTHFLZSCQGTHUEJGNZMITCUFQUKJINBVPMLXYTUSCEBMO");
    msg.act_time = 32281U;
    msg.deact_time = 17656U;

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
    msg.setTimeStamp(0.5298616120197671);
    msg.setSource(48290U);
    msg.setSourceEntity(48U);
    msg.setDestination(19122U);
    msg.setDestinationEntity(130U);
    msg.id = 123U;
    msg.label.assign("CFILMSRKJXHAEPFRKYLGREYSSTBLKVQUHWADAKOITSDWZITOFMNGMLMBNLVJPQNORERATDQGQOPSICAKWYEPUHKYOXFLAVBGIKXABVPAJCBT");
    msg.component.assign("QNMHPLLPSIIYIEHSXMFWWEQAMKVOYCNQJFOWZNMPV");
    msg.act_time = 54602U;
    msg.deact_time = 29925U;

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
    msg.setTimeStamp(0.1747602196006368);
    msg.setSource(11662U);
    msg.setSourceEntity(181U);
    msg.setDestination(7162U);
    msg.setDestinationEntity(84U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.81425595230667);
    msg.setSource(41506U);
    msg.setSourceEntity(148U);
    msg.setDestination(5193U);
    msg.setDestinationEntity(200U);
    msg.id = 167U;

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
    msg.setTimeStamp(0.6460252896212992);
    msg.setSource(12495U);
    msg.setSourceEntity(222U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(73U);
    msg.id = 75U;

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
    msg.setTimeStamp(0.46474366676876144);
    msg.setSource(18666U);
    msg.setSourceEntity(176U);
    msg.setDestination(11824U);
    msg.setDestinationEntity(37U);
    msg.op = 139U;
    msg.list.assign("DKWGKWRVQRMABKSGIIOITNAMFNJEPKZYHTWQPJPRHLJXAWEDHSKXKZMFUYSCDUHWHIL");

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
    msg.setTimeStamp(0.31374333438980884);
    msg.setSource(8314U);
    msg.setSourceEntity(56U);
    msg.setDestination(60529U);
    msg.setDestinationEntity(195U);
    msg.op = 234U;
    msg.list.assign("JECMVTZDIPSQZEFRIMUDKOLDUVQOLGURPGRDXXUWVBYNFFYHCZXCJIAJBUAICSYLEESOOYDMTNVXTCTKCHUIVGZNAFNSRVNEFOVRPSSKYJRMJXEPJSJRFITMKVWIPOAKHIGYNEPZCYWRRLHTMYLEMKQSOHBFWOBJXUVSMQNZDLQPRWHPEZKWIXMFGWAFSNQPBLDZVDKXTGMCGIBW");

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
    msg.setTimeStamp(0.969872980643332);
    msg.setSource(31216U);
    msg.setSourceEntity(111U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(90U);
    msg.op = 216U;
    msg.list.assign("IXGOQHAZJOMCKMZLYWKDFVJTJJVCBERSIPDXFBWEKFCYWRCJZBVXWKANEONANIPXGGHASMSXKTMOLSUQDILVGCFZMLZFDDPHPEVETNIFVYQOXQVASODRWCZJQAISEXUHCIPPKUTKFRSTQJMWMZDIHPBVIORHA");

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
    msg.setTimeStamp(0.8335643053032805);
    msg.setSource(37703U);
    msg.setSourceEntity(58U);
    msg.setDestination(57841U);
    msg.setDestinationEntity(183U);
    msg.value = 6U;

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
    msg.setTimeStamp(0.02028057429927399);
    msg.setSource(61749U);
    msg.setSourceEntity(20U);
    msg.setDestination(29080U);
    msg.setDestinationEntity(237U);
    msg.value = 99U;

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
    msg.setTimeStamp(0.5658061400591312);
    msg.setSource(33696U);
    msg.setSourceEntity(227U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(84U);
    msg.value = 211U;

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
    msg.setTimeStamp(0.38569951760396903);
    msg.setSource(5443U);
    msg.setSourceEntity(20U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(202U);
    msg.consumer.assign("DCETDSEIRCUCSIDVRITUGEGSSZSRQIHFMJPFSZAGOXLQUOPLSYOAKPTEEVTSQYOUBTQJEPRYSBXPGZWUBTAOJADNRNJVMHMYBMDKEWBKTKCBRABXWCXHHKVJFCWFNBQKXZNMKGQFMZPNJTZXFPZSVOWLBLWQHNLQIARZLAPUWRUGUQDCHCCGPJMZZEGUDVGOM");
    msg.message_id = 28032U;

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
    msg.setTimeStamp(0.10905467543085479);
    msg.setSource(50746U);
    msg.setSourceEntity(4U);
    msg.setDestination(45866U);
    msg.setDestinationEntity(107U);
    msg.consumer.assign("ZCOVSQHJYNANCGPXFQPRDPSBWAHOQLQXYFOHGYIZPLUSUROBTLLWQRDGTTGQOGVLDMCGQKNEUPIFZJFBVFVYXEZDRSAL");
    msg.message_id = 41298U;

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
    msg.setTimeStamp(0.7933767481667127);
    msg.setSource(41493U);
    msg.setSourceEntity(138U);
    msg.setDestination(37672U);
    msg.setDestinationEntity(96U);
    msg.consumer.assign("QPQEPTSKSWLLHJZMCEQCJPGOQTTRLTWKPPGXOPYBLAEVYGIYTLIVMFFUAWTCETJBHUFFZUMBXDBZPGKMKTGYNVZYTKNIPNDXNEORBQJEMUNYCVEDRKKKXUGCHFVUHHSADEBYIUBUUUWVYQWQJMGEAOZSCIWBLSXBSHFJCYVIAIFDOMXEOZAXRDXLFGOXHNRCSAMTAPNLRSOODILHWQDCVIFGJZLVWQCDAWOSRYZJZFHRXQJGM");
    msg.message_id = 57358U;

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
    msg.setTimeStamp(0.19868156809204918);
    msg.setSource(28997U);
    msg.setSourceEntity(1U);
    msg.setDestination(52452U);
    msg.setDestinationEntity(207U);
    msg.type = 248U;

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
    msg.setTimeStamp(0.2921752446942254);
    msg.setSource(30697U);
    msg.setSourceEntity(201U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(39U);
    msg.type = 161U;

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
    msg.setTimeStamp(0.18960044744133475);
    msg.setSource(40230U);
    msg.setSourceEntity(171U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(253U);
    msg.type = 20U;

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
    msg.setTimeStamp(0.05323987648339312);
    msg.setSource(50743U);
    msg.setSourceEntity(220U);
    msg.setDestination(9781U);
    msg.setDestinationEntity(16U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.6462357952752237);
    msg.setSource(21675U);
    msg.setSourceEntity(4U);
    msg.setDestination(29808U);
    msg.setDestinationEntity(92U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.02559415230841);
    msg.setSource(1043U);
    msg.setSourceEntity(89U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(176U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.5345156432249227);
    msg.setSource(57440U);
    msg.setSourceEntity(183U);
    msg.setDestination(55897U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 235U;
    msg.step_number = 157U;
    msg.step.assign("QPJWAKYKZNGKYJIJGROBFQDNQIMENDJVHNDOHMBOBTFULWZIVDFTSPGYMMGNKAACEVIYGFURSBPULIUZLJTOHMJUNOIUIFQLEJOMNBSBVUZQCFRKXHKAAXPXSEYERTVQPNBOYLKIPLTZMZKDVTDADEAKOUXFPRYRVHGEJFYJLHETXTGBWWHRBR");
    msg.flags = 112U;

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
    msg.setTimeStamp(0.03549422090159571);
    msg.setSource(40966U);
    msg.setSourceEntity(208U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(158U);
    msg.total_steps = 49U;
    msg.step_number = 239U;
    msg.step.assign("WDJUCDLSRCKSZEBZQVSTPUPGYODXFBWKARTXJXORCYVFDQKMQUNPTUSHWXMFUQPGWEXHUIEBKZCAHJIBCWDLTRWHGAZIZIYDYQYOXDHTBTYTMTULCEVHUMKNETZMRIHDLCXENUBRQVZBMCEASOHGJLMRNCNAOFJPLTIXELWNSSRCLJ");
    msg.flags = 160U;

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
    msg.setTimeStamp(0.17576718957083604);
    msg.setSource(18286U);
    msg.setSourceEntity(65U);
    msg.setDestination(28041U);
    msg.setDestinationEntity(41U);
    msg.total_steps = 190U;
    msg.step_number = 220U;
    msg.step.assign("VMRFCGJHZFBZLIXWZXHRWKDBZDYOVKRKMYDMXKOOHLSEPCOEYVJZZIWUAQGMJSGSFJSENTUAGQKACNWPFYBVBCLQ");
    msg.flags = 189U;

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
    msg.setTimeStamp(0.944723965709437);
    msg.setSource(12655U);
    msg.setSourceEntity(75U);
    msg.setDestination(28511U);
    msg.setDestinationEntity(170U);
    msg.state = 196U;
    msg.error.assign("ZFVVYFLLMTRVSBYTFPZXZKNHUWQYIOCBSPSRNCHDJUKRGPRMYKKBLTPEPEUMDJRYSVIIAITAKQNZYTROIQUFFBUYQWNHZNTQVYHHBOGJSLLWLOJWDGLAQJNKWSDMFGDTOMAMLEJHWKXXQEFIRWXJZUMEXCAHVPVFLHIEOOXDEBECAAFUFGJSNZ");

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
    msg.setTimeStamp(0.5968798911670269);
    msg.setSource(29365U);
    msg.setSourceEntity(142U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(51U);
    msg.state = 91U;
    msg.error.assign("LEVGFAUFMMAXVHCECFUDOTDNIAN");

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
    msg.setTimeStamp(0.3838134988871629);
    msg.setSource(18534U);
    msg.setSourceEntity(78U);
    msg.setDestination(29899U);
    msg.setDestinationEntity(102U);
    msg.state = 228U;
    msg.error.assign("CPKNPBTPLYHKGUUYHWLOEUDJZCHZEBOJOUXTXPJKETECAZUPATCNDXMKWALEVWROJXGSEDISWMWVFYWHMDBLUVBOSQBGPDMFMQZFMNOGIVZYRLIYVMTRAAFBXVMVRFGIZOYAGAIQRTRNHSJRHZSUJVCDWQBVBRERXSLMENCLONCQXKZXTCCYXGIKPDQOLT");

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
    msg.setTimeStamp(0.19544100140247245);
    msg.setSource(16591U);
    msg.setSourceEntity(94U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.2870476241958132);
    msg.setSource(22636U);
    msg.setSourceEntity(20U);
    msg.setDestination(26451U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.3272379225499512);
    msg.setSource(48085U);
    msg.setSourceEntity(130U);
    msg.setDestination(64641U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.635620473208315);
    msg.setSource(26504U);
    msg.setSourceEntity(86U);
    msg.setDestination(7843U);
    msg.setDestinationEntity(168U);
    msg.op = 209U;
    msg.speed_min = 0.8164391462868972;
    msg.speed_max = 0.5372595157955795;
    msg.long_accel = 0.8956277948666481;
    msg.alt_max_msl = 0.05011358737491356;
    msg.dive_fraction_max = 0.8333279334076094;
    msg.climb_fraction_max = 0.20579582573296118;
    msg.bank_max = 0.32313417567610647;
    msg.p_max = 0.11322667244835816;
    msg.pitch_min = 0.44855401046720633;
    msg.pitch_max = 0.8637622194029242;
    msg.q_max = 0.7510125743115754;
    msg.g_min = 0.7918119727051793;
    msg.g_max = 0.44282406685670894;
    msg.g_lat_max = 0.7437489514875608;
    msg.rpm_min = 0.49598937436409185;
    msg.rpm_max = 0.1378150576911995;
    msg.rpm_rate_max = 0.41884425207349196;

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
    msg.setTimeStamp(0.4251720529203724);
    msg.setSource(45971U);
    msg.setSourceEntity(186U);
    msg.setDestination(32361U);
    msg.setDestinationEntity(9U);
    msg.op = 199U;
    msg.speed_min = 0.2701487084876958;
    msg.speed_max = 0.0014422236315169146;
    msg.long_accel = 0.02597987018733472;
    msg.alt_max_msl = 0.07239750720613203;
    msg.dive_fraction_max = 0.3662621864520307;
    msg.climb_fraction_max = 0.30399320235942795;
    msg.bank_max = 0.30253423001630586;
    msg.p_max = 0.6954511025061016;
    msg.pitch_min = 0.6720033200383612;
    msg.pitch_max = 0.15645002926060625;
    msg.q_max = 0.7855656144109969;
    msg.g_min = 0.3064289418622006;
    msg.g_max = 0.9186293531657016;
    msg.g_lat_max = 0.09353851236787925;
    msg.rpm_min = 0.22753522266524107;
    msg.rpm_max = 0.05075503601109621;
    msg.rpm_rate_max = 0.6324453616033716;

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
    msg.setTimeStamp(0.524796789402846);
    msg.setSource(52442U);
    msg.setSourceEntity(45U);
    msg.setDestination(57628U);
    msg.setDestinationEntity(163U);
    msg.op = 30U;
    msg.speed_min = 0.42281881206025373;
    msg.speed_max = 0.736242663843463;
    msg.long_accel = 0.3346057590109798;
    msg.alt_max_msl = 0.5368748207501568;
    msg.dive_fraction_max = 0.4647527875416668;
    msg.climb_fraction_max = 0.7223845723241692;
    msg.bank_max = 0.9914394143370918;
    msg.p_max = 0.19190991676992586;
    msg.pitch_min = 0.8561581673908345;
    msg.pitch_max = 0.5256031601646414;
    msg.q_max = 0.9757641721408287;
    msg.g_min = 0.004099706912893741;
    msg.g_max = 0.03636580182799054;
    msg.g_lat_max = 0.8701199138773379;
    msg.rpm_min = 0.48522674350109785;
    msg.rpm_max = 0.5653392846444733;
    msg.rpm_rate_max = 0.6575457403451065;

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
    msg.setTimeStamp(0.713873032208429);
    msg.setSource(45629U);
    msg.setSourceEntity(108U);
    msg.setDestination(37055U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.7673582932384199);
    msg.setSource(15613U);
    msg.setSourceEntity(99U);
    msg.setDestination(27613U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.567961646943723);
    msg.setSource(45581U);
    msg.setSourceEntity(121U);
    msg.setDestination(12492U);
    msg.setDestinationEntity(73U);
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2194541949U;
    tmp_msg_0.start_lat = 0.86364446232065;
    tmp_msg_0.start_lon = 0.5089335761445778;
    tmp_msg_0.start_z = 0.32358236516232564;
    tmp_msg_0.start_z_units = 135U;
    tmp_msg_0.end_lat = 0.5990066998052921;
    tmp_msg_0.end_lon = 0.7097419117143855;
    tmp_msg_0.end_z = 0.4056332460549448;
    tmp_msg_0.end_z_units = 31U;
    tmp_msg_0.lradius = 0.4137705296052083;
    tmp_msg_0.flags = 6U;
    tmp_msg_0.x = 0.6010690303825524;
    tmp_msg_0.y = 0.438546909491207;
    tmp_msg_0.z = 0.3647876079304818;
    tmp_msg_0.vx = 0.7534613870579057;
    tmp_msg_0.vy = 0.49825229108837366;
    tmp_msg_0.vz = 0.313636599827277;
    tmp_msg_0.course_error = 0.2339097179058306;
    tmp_msg_0.eta = 34391U;
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
    msg.setTimeStamp(0.188022600267592);
    msg.setSource(3909U);
    msg.setSourceEntity(197U);
    msg.setDestination(27054U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.46665778130700075;
    msg.lon = 0.019758490626976544;
    msg.height = 0.722772239219975;
    msg.x = 0.3357977257240893;
    msg.y = 0.893697198050298;
    msg.z = 0.8846679935526904;
    msg.phi = 0.2921803305137566;
    msg.theta = 0.9569077098445751;
    msg.psi = 0.9140351661818038;
    msg.u = 0.5354141496163335;
    msg.v = 0.19826378267429257;
    msg.w = 0.35299391745805153;
    msg.p = 0.7468470435696543;
    msg.q = 0.5529343347126446;
    msg.r = 0.5775430023180304;
    msg.svx = 0.17097894174969264;
    msg.svy = 0.8389353558158144;
    msg.svz = 0.9740047978490814;

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
    msg.setTimeStamp(0.7357657050104769);
    msg.setSource(64458U);
    msg.setSourceEntity(140U);
    msg.setDestination(26702U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.7844209850191863;
    msg.lon = 0.06311059106772066;
    msg.height = 0.5160078068530799;
    msg.x = 0.9880267564607671;
    msg.y = 0.8926242058889381;
    msg.z = 0.5631728370847889;
    msg.phi = 0.19017479326343267;
    msg.theta = 0.6487341418612047;
    msg.psi = 0.3882105673760017;
    msg.u = 0.4734333567312923;
    msg.v = 0.2921722064990644;
    msg.w = 0.4448270409113646;
    msg.p = 0.0004602269796689651;
    msg.q = 0.5990711321501475;
    msg.r = 0.3785323854428786;
    msg.svx = 0.7508368720847154;
    msg.svy = 0.7191125786377299;
    msg.svz = 0.07966083284957626;

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
    msg.setTimeStamp(0.024536697517070327);
    msg.setSource(28986U);
    msg.setSourceEntity(29U);
    msg.setDestination(41119U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.31233854225588153;
    msg.lon = 0.9506608218789458;
    msg.height = 0.3386345909863938;
    msg.x = 0.6605838915714491;
    msg.y = 0.9266144137039347;
    msg.z = 0.2478787198818314;
    msg.phi = 0.8383826414120483;
    msg.theta = 0.5119287664164381;
    msg.psi = 0.43801704652496054;
    msg.u = 0.7299433674786773;
    msg.v = 0.5528281076174909;
    msg.w = 0.6269395946558348;
    msg.p = 0.9095805302766987;
    msg.q = 0.440121213085616;
    msg.r = 0.8015959655090035;
    msg.svx = 0.11099959909290291;
    msg.svy = 0.7638548678797408;
    msg.svz = 0.8281595630354759;

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
    msg.setTimeStamp(0.17179926987698813);
    msg.setSource(20093U);
    msg.setSourceEntity(42U);
    msg.setDestination(12884U);
    msg.setDestinationEntity(104U);
    msg.op = 112U;
    msg.entities.assign("THGSUYPEGXTDQQQAHOJCYTOFHGPVFODAFIBSGKQJPKUVTAYUMGSBPOPCXJIYUCRYRAHHLRWWOKLRXUY");

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
    msg.setTimeStamp(0.0032556246086483664);
    msg.setSource(3823U);
    msg.setSourceEntity(100U);
    msg.setDestination(52808U);
    msg.setDestinationEntity(187U);
    msg.op = 204U;
    msg.entities.assign("BOUIESIYGWEFDEPSBOQXKOWPITDZLXXTVJUXERCYUMALL");

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
    msg.setTimeStamp(0.6525360122363286);
    msg.setSource(59160U);
    msg.setSourceEntity(72U);
    msg.setDestination(20190U);
    msg.setDestinationEntity(242U);
    msg.op = 128U;
    msg.entities.assign("CKMBMYBNHWCPSFQFUMXXJVQVHBVZN");

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
    msg.setTimeStamp(0.35924608940294644);
    msg.setSource(16477U);
    msg.setSourceEntity(21U);
    msg.setDestination(7795U);
    msg.setDestinationEntity(223U);
    msg.type = 189U;
    msg.speed = 19632U;
    const signed char tmp_msg_0[] = {-71, 94, 4, -30, -24, -53, 99, -52, 53, 78, 54, -120, 111, 63, 46, 2, 7, -89, -80, 80, 59, -93, 53, -80, 6, -13, -99, -114, -122, -83, -10, 112, 27, 14, -74, 71, -114, 47, -115, -31, -1, 63, -114, 91, -106, -26, 53, 49, -53, -16, 48, -80, 13, 101, -62, 110, 27, -27, 44, 77};
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
    msg.setTimeStamp(0.33405749061804146);
    msg.setSource(56212U);
    msg.setSourceEntity(3U);
    msg.setDestination(27181U);
    msg.setDestinationEntity(204U);
    msg.type = 210U;
    msg.speed = 60301U;
    const signed char tmp_msg_0[] = {34, -25, -108, -12, 39, 35, -1, 77, 86, 120, 101, 97, -33, -117, 42, 9, 85, 126, -2, 86, -45, -6, 61, -71, 54, 64, -37, 121, -32, 51, 96, -51, -2, 41, -80, -19, 34, -59, -8, 76, 108, -110, 68, 99, 26, -52, -119, -8, 94, 86, 55, 1, 110, 101, 126, 51, 124, 122, 45, -41, -43, 79, 44, 89, 28, -16, 30, 116, -110, -13, -93, 47, -70, 51, 39, -49, 66, 65, -53, 35, -114, 68, -2, -58, -38, -108, -19, -118, -50, -126, 7, 34, 122, -52, -2, 111, 31, 27, -58, -118, 63, -5, -95, 72, 35, 82, 17, -7, -46, -38, 14, 124, 63, -120, -117, -86, -19, 7, -7, -3, -95, -76, 101, -22, -56, -81, -117, 95, 89, -58, -2, 74, -105, -76, -40, 28, -72, -88, -102, 34, 44, -67, 109, -1, 31, -109, -7, -67, 16, -113, -16, 6, 92, 71, 107, 121, 71, 94, 103, -91, 96, -32, 16, 5, -101, -24, 68, 97, -18, -92, -1, -72, 79, -103, 48, 105, 116, 57, 37, -54, 62, 2, -100, -3, 28, 11, 51, 94, 92, -39, 50, 14, -83, -102, -27, -9, 78, -49, 83, 64, 107, -120, -34, 73, -47, 72, 55, -116, 102, -54, 16, 62, -10, -117, 70, 32, -56, 11, -35, 14, -128, -76, -112, 116, 68, 45, 41, 109, -78, -73, -45, -38, 94, -128, -106, 68, -81, 6, -60, -50, 70, 0, -87, 59, 118, 85, -14};
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
    msg.setTimeStamp(0.532727710926963);
    msg.setSource(55781U);
    msg.setSourceEntity(14U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(77U);
    msg.type = 132U;
    msg.speed = 14845U;
    const signed char tmp_msg_0[] = {-108, -97, -36, 112, -110, 112, 11, -54, -102, 47, 13, -3, -76, 121, 89, -98, 44, -94, 8, -67, -22, 93, -80, -92, -111, -47, 5, -99, 15, 39, 1, -64, 101, 41, -111, -38, 5, 85, -24, 90, -26, 86, 114, -83, 58, -79, 77, 99, -117, -7, -118, -29, -16, 101, -114, -59, -79, -18, 57, 5, 3, 78, 53, 28, 43, 77, -19, -41, 68, -52, 4, 62, 58, -41, -88, -25, 23, -86, 53, 16, 66, -120, 66, -16, -112, -34, 99, 66, 124, -101, -125, 22, -14, 98, 83, -49, -117, 59, -97, 1, -108, 22, -37, -95, -70, -17, -10, -65, -119, 105, -51, -25, 97, -87, -91, 112, -2, -92, 14, -105, 58, -7, 43, 72, 21, 121, 120, -125, -120, -114, -118, -50, 43, -11, -21, -48, -79, -99, -109, -7, 57, 6, -40, 50, 66, -115, -23, 95, 88, 106, -109, 59, -30, 6, -101, 63, 35, -18, -90, -2, 99, -62, 69, 3, -120, -66, -102, -90, -41, -17, 0, -67, 16, -58, 42, 63, 16, 16, 84, -114, 91, -63, 46, -77, -112, -49, -72, -50, -78, 28, -102, 108, 28, 41, 60, 104, 20, -59, 56, -29, -102, -125, 104};
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
    msg.setTimeStamp(0.5217711708093691);
    msg.setSource(35777U);
    msg.setSourceEntity(237U);
    msg.setDestination(4667U);
    msg.setDestinationEntity(167U);
    msg.op = 176U;
    msg.tas2acc_pgain = 0.6598614432544347;
    msg.bank2p_pgain = 0.9150099892275666;

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
    msg.setTimeStamp(0.3898845489304774);
    msg.setSource(62594U);
    msg.setSourceEntity(109U);
    msg.setDestination(14845U);
    msg.setDestinationEntity(45U);
    msg.op = 101U;
    msg.tas2acc_pgain = 0.7493564061094271;
    msg.bank2p_pgain = 0.32501043693531706;

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
    msg.setTimeStamp(0.9765382365521351);
    msg.setSource(22679U);
    msg.setSourceEntity(249U);
    msg.setDestination(41676U);
    msg.setDestinationEntity(6U);
    msg.op = 239U;
    msg.tas2acc_pgain = 0.2218258785520314;
    msg.bank2p_pgain = 0.014444062124355228;

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
    msg.setTimeStamp(0.9936486162559273);
    msg.setSource(64313U);
    msg.setSourceEntity(236U);
    msg.setDestination(22016U);
    msg.setDestinationEntity(145U);
    msg.available = 2812851837U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.8751378846658877);
    msg.setSource(28599U);
    msg.setSourceEntity(9U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(245U);
    msg.available = 3240360321U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.7261563514175013);
    msg.setSource(45935U);
    msg.setSourceEntity(0U);
    msg.setDestination(375U);
    msg.setDestinationEntity(218U);
    msg.available = 2739637102U;
    msg.value = 81U;

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
    msg.setTimeStamp(0.9861055200409947);
    msg.setSource(44889U);
    msg.setSourceEntity(56U);
    msg.setDestination(60262U);
    msg.setDestinationEntity(87U);
    msg.op = 105U;
    msg.snapshot.assign("QHFILIHENLWEYJXYEBWANCQGXEBYPYPVKAUORSMBKKDTGJPSDJMHEJNUDFFDYQTRTRIKEODCIDHMCZOCJMVOPKVLCZRPKXAKHQNLNXYXRALPSAWZWMZUIISIQCQPCWXNAHJLDBFKXZNSZCFGGJIHQHGVETZLQU");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("SSDDLLLGQGANFVAYXCQSWJMIVRCYSPUTVYPWUIGJZNWFJPMFPZATKVIIDOIVREHRQXOMNCFDBWUZYEQUMRQQJTEQFAHSEOUDPVBHJYJXHZYOFKPFWWRJ");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("FYGYEOZATNPCYGIMSRBDESKWCNTUYOJAFQRNRPBEFUMKPGAWVAVLAGVLJFHZOCWFQNVMEYWUEQJJIMBKRZBOLSXKTOPVQFFLZXIOWPIIVSXHGIDJNTJTZSQBGDOMTBUWHIJXNRYDCCBLCRLVWKVFJQYXPSRPDMTCSEDUHWTLNQFPSGHNEMUCLSFPBHCXIMUGKCPAVKLJZBDUYHNRZ");
    tmp_tmp_msg_0_0.sys_type = 225U;
    tmp_tmp_msg_0_0.owner = 53728U;
    tmp_tmp_msg_0_0.lat = 0.20870537941221023;
    tmp_tmp_msg_0_0.lon = 0.24381260495206758;
    tmp_tmp_msg_0_0.height = 0.8589196966325736;
    tmp_tmp_msg_0_0.services.assign("IUMPOJGWNYFVWBJDBVZKKOSOQBCZAHSEXDXABN");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9915233970456656);
    msg.setSource(31391U);
    msg.setSourceEntity(1U);
    msg.setDestination(62694U);
    msg.setDestinationEntity(186U);
    msg.op = 84U;
    msg.snapshot.assign("VZPZZBOAMGGFAHKZHMLLJDQSKYMJTQBX");
    IMC::DevDataBinary tmp_msg_0;
    const signed char tmp_tmp_msg_0_0[] = {78, -68, -70, -4, -36, -68, -97, -38, -82, 89, 93, -65, -28, -40, -118, 26, -31, 95, -114, -57, -26, 25, -57, 23, -81, 77, 56, -59, -109, 28, -50, 26, -123, 54, -94, 33, 2, -81, 37, 27, -39, 124, 8, -79, -34, 2, 123, -9, 60, 63, 90, -64, 68, 112, 45, 114, 13, 111, 31, 13, 46, -33, -76, -53, -66, -105, 67, -5, -107, 105, -57, -113, -36, 69, -90, -16, 51, -23, 109, -13, -24, 69, -109, -81, -45, 97, -23, 93, 123, -117, 52, -85, -110, 59, 58, -56, -111, 99, 80, -41, -39, 109, -84, -41, 113, 81, 14, -90, -106, 47, -80, 25, 106, 44, 65, -43, 67, -126, 122, -34, -79, 102, 5, -57, 20, -80, 35, -63, 117, -119, -36, -4, -126, -105, 64, -90, -55, 14, 107, -48, 36, -11, 88, -73, 41, -41, 44, -53, -39, -101, 123, 113, -109, 28, 51, -56, -82, -77, -110, 64, -18, 34, -16, -74, -125, 126, -92, 90, 21, -15, -23, -17, -87, 23, -32, 24, -1, -26, -81, 82, -107, -125, -124, 89, -54, 111, 115, 1, -40, -38, 113, -35, -87, 115, 22, 81, -48, 52, -124, 36, 97, -2, 16, 111, 125, -123, -116, 55, 58, 99, -14, -27, 110, -27, 41, -3, -20, 92, 17, 117, -2, 45, 13, 41, -32, -81, -74, 111, 115, -33, -61, 44, 97, -126, 18, -87, 27, -45, 90, -120, 73, -34, -56, 33, -59, 16};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6730478644829132);
    msg.setSource(16588U);
    msg.setSourceEntity(91U);
    msg.setDestination(17076U);
    msg.setDestinationEntity(134U);
    msg.op = 153U;
    msg.snapshot.assign("PSTWTBNGDGDLOSEWAYSODHMZ");
    IMC::AisInfo tmp_msg_0;
    tmp_msg_0.msg_type.assign("XQOLKMNVQXGBJYHLUCBUESUZLFHRFPUPXDNVJSGYSGAYWGLKNEYCUVGDTREODXLSLCMZCMHRUAXHOSGIRHYTPCNXTZZIQORITTNKRVBZSRJAJOZKLGKBMQUQFDLOQXDNTBNSBYZMTPGAOAZJIYLSDRJUWBHGACCDPDXEGKA");
    tmp_msg_0.sensor_class.assign("NGWGJSIUIISTDDVFUTPHOHAFBYJTKWXCECIBGIKMKJWTUOCXTJQFRZEDXIZBAQJCZOMMCOPJCGKUZMBZFLBOGAFRARVWVPXQDWGMCHZRZWYYKANBSQDRUKQRBFPTEQMYNPLLKNOHQSLIEEASMYDWOEQOCNCXFHJIVPOTGANVYMEOXULCVRLVNSWHVLEPLVWVHLXZDNYPFHU");
    tmp_msg_0.mmsi.assign("EDYQCIFPMCPUQZIOVWZZFJTRSMYKTJHLPDRIEQBABVJQEAGNCGZBAFVEUJZBKTSNXI");
    tmp_msg_0.callsign.assign("VJHUFSBUHSNPSPYMMVAVAWGLVLBWGBCCPSPOXKMQFKTMRTWIOPHGULCTTSNZZ");
    tmp_msg_0.name.assign("GDWGESKDVKMHFULLFBJBQZWXVVGWEHYOTENQGPMMTIUSZOUUPZJNOXPUUQEZVATPRBZJOKARCDBFKEIHMATXWCYHLUWGVUJWTOXQSRXWHNNRMFXUSAPTHAYDTWGBCXIJNZXLKTIFMDOCQQORKBRMJKOEYENSSGPQMGGBRRLRAYFLI");
    tmp_msg_0.nav_status = 162U;
    tmp_msg_0.type_and_cargo = 176U;
    tmp_msg_0.lat = 0.7683559667594599;
    tmp_msg_0.lon = 0.4759155797874842;
    tmp_msg_0.course = 0.5637606967648607;
    tmp_msg_0.speed = 0.5432078960853184;
    tmp_msg_0.dist = 0.49782435260323854;
    tmp_msg_0.a = 0.7088277571832268;
    tmp_msg_0.b = 0.7652918093581667;
    tmp_msg_0.c = 0.452984247942525;
    tmp_msg_0.d = 0.7480553902315111;
    tmp_msg_0.draught = 0.12453850909954955;
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
    msg.setTimeStamp(0.27506475659026863);
    msg.setSource(36653U);
    msg.setSourceEntity(100U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(234U);
    msg.op = 156U;
    msg.name.assign("EYPPUFCBPYPASUCGYWAXDTIYMOZYBCWRORAQEKPGDHXVIDRGXPXLJGHCWRGZTQMVWHOSTLYIFDMXSDGBRLIMBOARZXFRUFVSMENFBHVUNGVOMJAOSEZCRCKIFKORWSGUBASCJMQEXHUJTLHCVAUMFZBSJYEWTVDDBXLDYPSOAGETKNVHZVHZKHYCFAPOJNJLNZITW");

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
    msg.setTimeStamp(0.055507045028006075);
    msg.setSource(3262U);
    msg.setSourceEntity(16U);
    msg.setDestination(14714U);
    msg.setDestinationEntity(185U);
    msg.op = 147U;
    msg.name.assign("VHLDFQRUASYRDLCPMQ");

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
    msg.setTimeStamp(0.1332681519252754);
    msg.setSource(59313U);
    msg.setSourceEntity(170U);
    msg.setDestination(34351U);
    msg.setDestinationEntity(141U);
    msg.op = 212U;
    msg.name.assign("LAYRLUHIAYRMOLQRQWJMJXHSIGIDKJXGKGCVUWTMQUYVCLHIVBJGHTEVDMNKSV");

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
    msg.setTimeStamp(0.9893949099722135);
    msg.setSource(63971U);
    msg.setSourceEntity(39U);
    msg.setDestination(51376U);
    msg.setDestinationEntity(93U);
    msg.type = 120U;
    msg.htime = 0.7499053472827587;
    msg.context.assign("WMVAEIYJAFSJBVJAYJTRBIUMYIWWNVKTMGRZQIRMGLSROQUNYYLEXGFYXYHDDXKNCQLSCEECEVSZKHJXGWKXWNVZNWZWFHBAXJDZBKFZLOHIQOBHAMPKWSZTUHTKPURDNYPUYSFJG");
    msg.text.assign("HSJGUSFETQYFPBXBWRFEQXALQWPUVSCZCTGFUSHDGCYAZAFKBAB");

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
    msg.setTimeStamp(0.4156830590971968);
    msg.setSource(41956U);
    msg.setSourceEntity(143U);
    msg.setDestination(2216U);
    msg.setDestinationEntity(93U);
    msg.type = 184U;
    msg.htime = 0.1886517603374308;
    msg.context.assign("ZMDRWOSFPLCZNLGLPQUKKBRTAVYOODWHTCMFBKMRFBRVZFEBYZWEDGADXIKWNMHBMCEJNHJQUAQHFPZTXWSITVXJNNLOGLARMQUGZWHTVJQQULCSRYODPJGKIRAGYYWFSVGHSQKOUOEFCLGYEZOBMDGZMUXZNNPCJANLXSDMIIAMFJXVCWCAOQRFHRJ");
    msg.text.assign("PHJPTENIKMLXJXDWSUIIYCIAADXWZQLQIHKLVREVYGTOQTZAVUPCPZYXWMARHKKMSSSFRDFCVUCBRZ");

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
    msg.setTimeStamp(0.44786278971627136);
    msg.setSource(48748U);
    msg.setSourceEntity(184U);
    msg.setDestination(34671U);
    msg.setDestinationEntity(89U);
    msg.type = 56U;
    msg.htime = 0.6547118789032945;
    msg.context.assign("QFALJFHKCBIDPSRJVQODKVEGOZZAFUCQCHPPQNIHYHULWIYQIIALUJWWTHHUCUPYKVYYPZARUCMXBQUYHXTWSOEZFSNFCXTTZACXSKZAIFUWEJXRJVGTCGZSOQWXKJLFXBDKRQTPQSGLKNOLRWVVYSDRDKVXGEDEPBBBEDCYSNDVFERLMAGBJB");
    msg.text.assign("XOIYDYNWSFTFIUZETSMBYIVHHJONPQATKLJFBTIPQHYJACRTDUPZBERGACPFNNMMJCZNHMNQEHOCUBKDUGXGEHVKITJKXYWTGLBOPSQAAUWLUZQSSCFHXDJMRNFXKFEUNBBZQVBQMVDZZRAIJKCOETWKMLCSRAUGUDYGOSIYHK");

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
    msg.setTimeStamp(0.2274283522281354);
    msg.setSource(13524U);
    msg.setSourceEntity(28U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(90U);
    msg.command = 153U;
    msg.htime = 0.551243822177926;

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
    msg.setTimeStamp(0.39968805044321);
    msg.setSource(895U);
    msg.setSourceEntity(90U);
    msg.setDestination(11913U);
    msg.setDestinationEntity(142U);
    msg.command = 244U;
    msg.htime = 0.7494535195834825;

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
    msg.setTimeStamp(0.9487918114969062);
    msg.setSource(23723U);
    msg.setSourceEntity(46U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(102U);
    msg.command = 242U;
    msg.htime = 0.2664698793959035;

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
    msg.setTimeStamp(0.5096744749204289);
    msg.setSource(15649U);
    msg.setSourceEntity(2U);
    msg.setDestination(9848U);
    msg.setDestinationEntity(112U);
    msg.op = 63U;
    msg.file.assign("KYHBYYSWGERARIZXWYERGXNPNHJBRZLUTSBFQFZXHJMKTSKTVCRFWHJFLQSSUQOGIEXTAZLLJCG");

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
    msg.setTimeStamp(0.6761197456826384);
    msg.setSource(59261U);
    msg.setSourceEntity(242U);
    msg.setDestination(2161U);
    msg.setDestinationEntity(89U);
    msg.op = 79U;
    msg.file.assign("QKGCWMZBCAACAKRONIGEDUORXWWTOFITWPHKWGNBRVHNJXISEDCKEBYLSBIVNEGPTSERZOYVNKJSWYQWAQSMQUUPDNJQLTGPZTFHMUDHLNCSZBACKJWRNGCDNAPYMCHZRSFLVTAGFOEUBMMWRLKWZKVPRFXHGVAQUJZFEBOJQLXDPRBVYXLXXFZUTXYCAFGONEUFIEGPZIOQJJIJJQSHRZMYBVADBPTOMIHMHLDXYFL");

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
    msg.setTimeStamp(0.38376919374151686);
    msg.setSource(34375U);
    msg.setSourceEntity(126U);
    msg.setDestination(42959U);
    msg.setDestinationEntity(98U);
    msg.op = 192U;
    msg.file.assign("NOJZYSHEURDMIRLXAQ");

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
    msg.setTimeStamp(0.8877597388695565);
    msg.setSource(29923U);
    msg.setSourceEntity(175U);
    msg.setDestination(45846U);
    msg.setDestinationEntity(71U);
    msg.op = 231U;
    msg.clock = 0.8607371754754624;
    msg.tz = 52;

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
    msg.setTimeStamp(0.8210640526877162);
    msg.setSource(21309U);
    msg.setSourceEntity(69U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(19U);
    msg.op = 105U;
    msg.clock = 0.8238131074442592;
    msg.tz = 84;

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
    msg.setTimeStamp(0.12172680103264111);
    msg.setSource(16426U);
    msg.setSourceEntity(118U);
    msg.setDestination(43267U);
    msg.setDestinationEntity(129U);
    msg.op = 75U;
    msg.clock = 0.10294280645534237;
    msg.tz = 23;

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
    msg.setTimeStamp(0.8157743230291323);
    msg.setSource(53470U);
    msg.setSourceEntity(94U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(78U);
    msg.conductivity = 0.11110972403992347;
    msg.temperature = 0.16618062747875895;
    msg.depth = 0.8082423156541505;

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
    msg.setTimeStamp(0.19179700035526603);
    msg.setSource(47588U);
    msg.setSourceEntity(160U);
    msg.setDestination(9539U);
    msg.setDestinationEntity(89U);
    msg.conductivity = 0.13896260512770764;
    msg.temperature = 0.6669962007842487;
    msg.depth = 0.8644171203733156;

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
    msg.setTimeStamp(0.5865862103656342);
    msg.setSource(22878U);
    msg.setSourceEntity(160U);
    msg.setDestination(15186U);
    msg.setDestinationEntity(117U);
    msg.conductivity = 0.19496811932298508;
    msg.temperature = 0.40880099621944344;
    msg.depth = 0.2566160153009568;

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
    msg.setTimeStamp(0.44134293803335456);
    msg.setSource(37297U);
    msg.setSourceEntity(92U);
    msg.setDestination(21369U);
    msg.setDestinationEntity(66U);
    msg.altitude = 0.8035502967010543;
    msg.roll = 61879U;
    msg.pitch = 37375U;
    msg.yaw = 29734U;
    msg.speed = 3599;

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
    msg.setTimeStamp(0.7792515445562732);
    msg.setSource(31616U);
    msg.setSourceEntity(200U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.33609715965212705;
    msg.roll = 15678U;
    msg.pitch = 1663U;
    msg.yaw = 26060U;
    msg.speed = -2627;

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
    msg.setTimeStamp(0.6374167463113529);
    msg.setSource(29823U);
    msg.setSourceEntity(103U);
    msg.setDestination(28866U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.1933621978489647;
    msg.roll = 37445U;
    msg.pitch = 56085U;
    msg.yaw = 54304U;
    msg.speed = 15947;

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
    msg.setTimeStamp(0.8401120402017902);
    msg.setSource(21128U);
    msg.setSourceEntity(149U);
    msg.setDestination(44995U);
    msg.setDestinationEntity(74U);
    msg.altitude = 0.1850243381137423;
    msg.width = 0.9941813839077429;
    msg.length = 0.8767526396950212;
    msg.bearing = 0.2625398981592577;
    msg.pxl = 3141;
    msg.encoding = 41U;
    const signed char tmp_msg_0[] = {-98, -50, 6, -80, -119, 109, -30, -100, 74, -79, 101, -56, 13, 123, 74, -54, 116, 76, -33, -77, -11, 18, -1, 92, -92, 34, 78, -112, -74, 45, 3, 3, 93};
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
    msg.setTimeStamp(0.10995112167828835);
    msg.setSource(24112U);
    msg.setSourceEntity(15U);
    msg.setDestination(34659U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.6967073716075346;
    msg.width = 0.550829077213589;
    msg.length = 0.4961733143338053;
    msg.bearing = 0.8717177873167373;
    msg.pxl = 12685;
    msg.encoding = 35U;
    const signed char tmp_msg_0[] = {70, -67, -35, -102, -118, -8, 78, 42, 121, -118, -102, -112, -30, -32, -36, 5, 28, -81, 102, -10, -29, 115, 43, 69, -92, -19, 60, -53, -2, -112, -67, -15, 28, 73, 94, 68, -127, -20, 64, -43, 122, -63, -91, 41, -10, -41, -27, -76, -92, -106, -64, -94, -106, 30, -122, -16, -77, -21, -32, 106, 73, 16, -105, 108, -12, 28, -35, -48, -68, -67, -4, 51, 100, -85, -92, 35, -96, 46, -101, -115, 55, -42, -36, -39, -14, 11, -6, -74, -104, 72, 21, 123, 66, 0, -125, 118, 56, 2, -80, 120, -122, 50, -34, 68, 3, 35, 118, -93, -83, -88, -38, -116, 107, -10, 107, 116, -81, -63, 58, -79, -9, 84, -37, -124, -95, 92, -82, 104, 118, -95, -97, -91, -14, -94, 120, -1, 5, 118, -96, 5, 83, 23, 14, 38, 6, -112, -113, 36, -7, 58, -95, -123, -76, 76, -104, -77, -65, 119, 24, 3, 46, 33, -103, -83, -104, 80, -60, 91, 47, -87, -107, -85, -68, -4, 106, -43, 119, -72, 34, 96, -75, -128, -127, 62, -78, -116, 101, -62, 74, -126, 98, 39, 62, -116, 34, 58, 39, -21, 62, -115, 47, -71, 42, 17, -4};
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
    msg.setTimeStamp(0.9935478347810393);
    msg.setSource(24029U);
    msg.setSourceEntity(110U);
    msg.setDestination(52126U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.748475032614873;
    msg.width = 0.5452290859961507;
    msg.length = 0.917147027621657;
    msg.bearing = 0.18064461077982874;
    msg.pxl = -24913;
    msg.encoding = 174U;
    const signed char tmp_msg_0[] = {-95, -3, -48, 89, 90, -107, 103, 77, 105, 88, -22, -48, -90, 59, 115, 109, -38, 52, -101, 118, 37, 114, -90, -110, 91, -124, -126, 34, 100, 111, -119, 84, -19, 33, -50, 62, -110, 109};
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
    msg.setTimeStamp(0.25872033495299906);
    msg.setSource(1537U);
    msg.setSourceEntity(82U);
    msg.setDestination(39637U);
    msg.setDestinationEntity(177U);
    msg.text.assign("GXUUHTEXHFZOWWINYFJGVYUJPKCJRFLLDXLMWAACZXFTZFHINDGKLUUBBLQZCLJHKSIJMOIYVTRDZVJZCLXTMRQVCDDIZPJGHJAZLLNGFZAMHYOOFVCXAPBDKDNYYBMNOXHBYKDRGHOYSBQKEKPJAEREEHPGNRWDTRQAEVWUIUXP");
    msg.type = 13U;

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
    msg.setTimeStamp(0.1669740613943721);
    msg.setSource(604U);
    msg.setSourceEntity(146U);
    msg.setDestination(16681U);
    msg.setDestinationEntity(163U);
    msg.text.assign("GYKWIWMMRAJYTAXIPYXBKAPHXDMEDWLWTPKGRIIKSCFRGASTLOTZTVNKAON");
    msg.type = 142U;

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
    msg.setTimeStamp(0.6482487075504125);
    msg.setSource(53749U);
    msg.setSourceEntity(53U);
    msg.setDestination(4763U);
    msg.setDestinationEntity(56U);
    msg.text.assign("DDKYPXNSGEANIVIABRNHQKONSKGUCFVDHEKJPRTTSPWJEZWKTVHCBOJURHXYMGBDMZBZEGCUTSZNFCWYHJJRGEXRDVLYIOASFADQNFHHCXRMAWTIWABQWTOXFKNXTSPDMDTGSQBGIURLKIAI");
    msg.type = 248U;

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
    msg.setTimeStamp(0.6126756527209224);
    msg.setSource(10591U);
    msg.setSourceEntity(6U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(112U);
    msg.parameter = 68U;
    msg.numsamples = 234U;
    msg.lat = 0.5555840889077285;
    msg.lon = 0.5084326792934732;

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
    msg.setTimeStamp(0.025822430310957323);
    msg.setSource(36132U);
    msg.setSourceEntity(186U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(122U);
    msg.parameter = 28U;
    msg.numsamples = 210U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 48475U;
    tmp_msg_0.avg = 0.8745802338724074;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7367586077601492;
    msg.lon = 0.7825373685640955;

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
    msg.setTimeStamp(0.6679739963435815);
    msg.setSource(38341U);
    msg.setSourceEntity(42U);
    msg.setDestination(60912U);
    msg.setDestinationEntity(101U);
    msg.parameter = 186U;
    msg.numsamples = 152U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 36669U;
    tmp_msg_0.avg = 0.4121085353492493;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.1977463355261061;
    msg.lon = 0.9557944803036594;

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
    msg.setTimeStamp(0.5422910250797632);
    msg.setSource(17527U);
    msg.setSourceEntity(83U);
    msg.setDestination(38260U);
    msg.setDestinationEntity(202U);
    msg.depth = 44584U;
    msg.avg = 0.007195193725543225;

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
    msg.setTimeStamp(0.8159893780861535);
    msg.setSource(4854U);
    msg.setSourceEntity(114U);
    msg.setDestination(30653U);
    msg.setDestinationEntity(229U);
    msg.depth = 16915U;
    msg.avg = 0.553132932382597;

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
    msg.setTimeStamp(0.12085987779894947);
    msg.setSource(18928U);
    msg.setSourceEntity(136U);
    msg.setDestination(40320U);
    msg.setDestinationEntity(118U);
    msg.depth = 14488U;
    msg.avg = 0.3051462693411765;

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
    msg.setTimeStamp(0.8972106445645844);
    msg.setSource(24504U);
    msg.setSourceEntity(0U);
    msg.setDestination(16456U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.6509676038659773);
    msg.setSource(44552U);
    msg.setSourceEntity(152U);
    msg.setDestination(2154U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.7847520743325919);
    msg.setSource(47102U);
    msg.setSourceEntity(67U);
    msg.setDestination(50109U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.9286141559933526);
    msg.setSource(40759U);
    msg.setSourceEntity(134U);
    msg.setDestination(18274U);
    msg.setDestinationEntity(123U);
    msg.sys_name.assign("BXIZRLICGDQAMQJMVKRGHCYPJUUMVVLPDIEMBUHVOESTAJKJZO");
    msg.sys_type = 22U;
    msg.owner = 2855U;
    msg.lat = 0.4943649402107637;
    msg.lon = 0.17656802077830136;
    msg.height = 0.4681118252721128;
    msg.services.assign("EMKXJGEEGILDNCGPQBFPUDCBLAFAZRTTNNCDSQMPOHFXHDLAESUYJUUZIIGVCKLNATKKTJZJYZSOXSTJGWRFGDRNBLMRMOAJMWOEXCRZPDMGBUUYIFWBRXZCWNTGPIGHEVWVZOGTUFPXKRIZJVCQDICOATARHVQXFWMQYPLXSAMQVDCIZSFNZIUXBUMHQKXKKYAENJWSYVJOPN");

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
    msg.setTimeStamp(0.9464649310297876);
    msg.setSource(21714U);
    msg.setSourceEntity(95U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(137U);
    msg.sys_name.assign("SEOVGNXULHGBNTLSOAIPOWOQAEFSNXGIIEQNKZKVDDFJKEOSYBJODMYSJXNWBUATWCXETDDJKZVZOLYTRRIJAYADHFMWPGHPCOIDCNCWVSLRLZVXCQDZBOQWTFKYGMQMPAILZBIYNTPMDVMBMUBNHCYHNHECSWFDR");
    msg.sys_type = 167U;
    msg.owner = 14156U;
    msg.lat = 0.5983212570760529;
    msg.lon = 0.5184975629669102;
    msg.height = 0.4654970050039028;
    msg.services.assign("CUCGSEPUJSNKRQKSJMMOZVBFFEFYHVWOTWEUHGPIGSXMRNLXRMZMUGO");

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
    msg.setTimeStamp(0.46047440878911117);
    msg.setSource(910U);
    msg.setSourceEntity(186U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(249U);
    msg.sys_name.assign("CEJHIMYTBZZDPHDEAMFFVLSJDQSCZSU");
    msg.sys_type = 192U;
    msg.owner = 39529U;
    msg.lat = 0.4562940613558255;
    msg.lon = 0.971795123555157;
    msg.height = 0.7705076639372301;
    msg.services.assign("QPHWXTEDHWMPQANEBODFYYFTOZUXWWIVTIANOWPBBMTAZVIIHGDBLPWAXWGSCRHFANCQTSXLIHUIQVUYNRDOEKZEBOWUJRKJIPMLKPJDMUYKSKEQMBPXOAVTRCDCCJJCUOGJTOFXOGADECRAMVZCKKGNNJBLQIFYRYIDKFSEVTCLKFULDXQXSJYZU");

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
    msg.setTimeStamp(0.31586753254521127);
    msg.setSource(40522U);
    msg.setSourceEntity(57U);
    msg.setDestination(23157U);
    msg.setDestinationEntity(8U);
    msg.service.assign("EXAZOZVVPPBCIMVANMFKUYBKBCFUVYDXFYUSIWWDFPRQCKVPUPANGXRNGTQEVELSLHBKMGHUNGE");
    msg.service_type = 83U;

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
    msg.setTimeStamp(0.994149923869511);
    msg.setSource(39992U);
    msg.setSourceEntity(0U);
    msg.setDestination(36206U);
    msg.setDestinationEntity(106U);
    msg.service.assign("TCFJKTOQCTDSPGUWWNQDLQAIDAQCBLWOIMDNDHPEMBVVGIXSTIHMJSQUGWNABXOHOOEDUNVPRWYHUEIOFRDMBWCQAZYURVVSQYPMGFUSYXQHTVPFDXZKZIWVATCYMENXGRHYVTKGWHSKFCENLRHCPEIANKTKYJXODMBYBKIZVPEMRJQBUSZJZKPONDWJZOIFVHRLIXCBNXALPLFRJGBJEUOZURKKWCSMEAQLYFLUHYAXBGSRTPFGGMZCJNEXL");
    msg.service_type = 100U;

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
    msg.setTimeStamp(0.4762272540093708);
    msg.setSource(60336U);
    msg.setSourceEntity(254U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(86U);
    msg.service.assign("IGPLXPFZRHSCIEBCMRTTDPVEBGQPJLECOSHJXIBGSFRMWONLUGQVXKHDYFINCASLGNAVSICWHYTNFRJWNKYAEEVIDAODUVSAQTZUGUNBKZWPYDFPSQPTJIOKWGFAQZYGNVMUIHKCJOHVK");
    msg.service_type = 215U;

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
    msg.setTimeStamp(0.3374039241473108);
    msg.setSource(53332U);
    msg.setSourceEntity(10U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(134U);
    msg.value = 0.1386243693176048;

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
    msg.setTimeStamp(0.13912931125981742);
    msg.setSource(11967U);
    msg.setSourceEntity(200U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5544447680997773;

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
    msg.setTimeStamp(0.43000709562163575);
    msg.setSource(20414U);
    msg.setSourceEntity(48U);
    msg.setDestination(12141U);
    msg.setDestinationEntity(203U);
    msg.value = 0.1700853184977591;

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
    msg.setTimeStamp(0.01701467703393933);
    msg.setSource(12242U);
    msg.setSourceEntity(123U);
    msg.setDestination(6929U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9582034738176812;

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
    msg.setTimeStamp(0.2033689512968745);
    msg.setSource(64200U);
    msg.setSourceEntity(30U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(114U);
    msg.value = 0.09507750341893184;

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
    msg.setTimeStamp(0.6646486214548554);
    msg.setSource(20192U);
    msg.setSourceEntity(30U);
    msg.setDestination(46428U);
    msg.setDestinationEntity(181U);
    msg.value = 0.03149042843921923;

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
    msg.setTimeStamp(0.7243639782000628);
    msg.setSource(8532U);
    msg.setSourceEntity(205U);
    msg.setDestination(58205U);
    msg.setDestinationEntity(243U);
    msg.value = 0.23551232777361053;

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
    msg.setTimeStamp(0.04756318556636141);
    msg.setSource(58745U);
    msg.setSourceEntity(39U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(68U);
    msg.value = 0.2658414251825395;

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
    msg.setTimeStamp(0.49235692479417703);
    msg.setSource(22639U);
    msg.setSourceEntity(206U);
    msg.setDestination(5836U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8623387165368525;

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
    msg.setTimeStamp(0.597764040805083);
    msg.setSource(33659U);
    msg.setSourceEntity(30U);
    msg.setDestination(3124U);
    msg.setDestinationEntity(76U);
    msg.number.assign("CMZXDMQKXPPVYBAQFMYIXWUMNDXPIZJPLUGOCZXRUJIYOAXHASMRSBXAHTHCYEIJRIFTLYLARGYDLJNFWPKUQENZNTGAHABFLWUGZDKSBCODPCEIJNTVFCFULXQINCKWBGCOHOFTESAHTUOWMWUDBKSBY");
    msg.timeout = 44351U;
    msg.contents.assign("GKCGIKCKLKDULLFZSS");

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
    msg.setTimeStamp(0.26948681206863);
    msg.setSource(24264U);
    msg.setSourceEntity(203U);
    msg.setDestination(61507U);
    msg.setDestinationEntity(90U);
    msg.number.assign("OTTUKYGGPWKRU");
    msg.timeout = 8083U;
    msg.contents.assign("ARIPGBVTOPLFEKPWAPKIVDZHUTCZYJXZRKHOQRLRJBURJDLFKWSZGIQFZIWEQKHNMCSVMOZVZMDJYJQTCWDERICWYATEUPPXCFQXXGFMKGUMSDOVZLIOMEHFHCNJMLNRWATGFSVZTXAACDUDGJDSOLESCVRQHWNIUYPIYLUVTHONBIGBSER");

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
    msg.setTimeStamp(0.7119755347497952);
    msg.setSource(62849U);
    msg.setSourceEntity(228U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(189U);
    msg.number.assign("KDQHTPKEUKNERJQETKIBXGOBLRLUVUIWYBSPVZTNBMUAQJJCLYJMUGFQTOMGZWGUCCVZXRZRYCHDLFAOLKKYZHNVSXAFLUHNAWMVYGLSRJBYDITNLPDNHJFZRIACEHWRECXSGZACVJYBTEOWHFUAFNDEHKEPYMJFUWQDWSSWEZNOTVAPWTOOVSQBZZMWALFXRUQQPSCKTXMHLCTVOIQVQRGXIIBDDPDFFJYMAMOGIG");
    msg.timeout = 43619U;
    msg.contents.assign("RRDMHFRAKIVYSEFGRIPSPLXPZCTEFMAIDUITXVWZILRBTZOOSFMVTUCLWBNUQLJHMUPFIQTJUGBVVYGYTLWBDEKGQDMSNRNDZKXCALMBRMLGHHOFCXXOKNOCHDQBYNNXTKECCEYMXWGSPCDVXEMQJAUUNQIWCBXINYZPWREBAFQBGVRSUELVOFEJNHYOOJNYVGAHAJQWVCOTWESUGJQZJSGLPFYIOKTTYZRLP");

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
    msg.setTimeStamp(0.9186764550695365);
    msg.setSource(62556U);
    msg.setSourceEntity(191U);
    msg.setDestination(9567U);
    msg.setDestinationEntity(79U);
    msg.seq = 2878540143U;
    msg.destination.assign("NBDJFUSZCABRNVJKHOJDBVKVF");
    msg.timeout = 64848U;
    const signed char tmp_msg_0[] = {37, -58, 18, 60, 39, -106, -59, -71, 28, 48, 126, 43, -2, -9, 86, 94, -49, -79, -66};
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
    msg.setTimeStamp(0.2580036755854186);
    msg.setSource(30639U);
    msg.setSourceEntity(46U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(135U);
    msg.seq = 2482276408U;
    msg.destination.assign("NOFONTBABXFOPSFSOLTVFIPUUOGEFWLDBVTEJAUNEWOXQFHSIIOWFJQMHUMNCPOSXLXTJGKESKEANBPGBHYASSICSDPKCYDYNMJORRQUMTQAZHGPXQWDLAXGVZRGPCYWRXRDXYAHGXCVZWFMIG");
    msg.timeout = 37424U;
    const signed char tmp_msg_0[] = {-126, 31, -108, 43, -21, -53, -69, 17, -27, -109, -127, 24, -117, -16, 106, -80, -37, -9, 75, -42, 37, 17, 11, 57, 95, -1, -70, 105, -128, 2, -15, 96, 115, 60, -45, -113, -94, -72, -8, -42, 97, 47, 72, -20, 61, -42, -38, 54, 67, 120, 61, 121, 116, 31, 16, -76, 125, 18, -45, 39, 3, 68, 87, 114, 35, 11, -10, -22, -98, -44, -82, -6, -37, -28, 93, 52, -31, 71, -115, -5, -66, 49, 80, -92, -8, -18, 78, -57, -82, -120, 35, 4, 102, 98, 73, -92, 35, 36, -95, 60, 23, 10, 119, 51, -8, -80, -89, -21, -93, 123, 85, 42, -35, 68, -30, -25, -98, -105, 81, 123, 67, -90, 53, -27, 25, 125, 26, 13, 53, -37, 68};
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
    msg.setTimeStamp(0.372517444311127);
    msg.setSource(40108U);
    msg.setSourceEntity(63U);
    msg.setDestination(62735U);
    msg.setDestinationEntity(3U);
    msg.seq = 3486630094U;
    msg.destination.assign("EMGEIIJGEVIGKZSFAKSGOWARLURANWJNXBNWBMNSOLCBEZBLHFTPASFRISFKVNXWYUEAKKQTDYJHPFBETMZGLBKNQPRCDHPMXQUKPOECYHQZPMYNXMLXQPXGOJWDMOHTTU");
    msg.timeout = 40663U;
    const signed char tmp_msg_0[] = {31, -14, -106, 39, 13, -61, 96, 41, 19, -48, 67, -69, -58, 64, 42, -83, 65, -62, 68, -6, 117, 85, 125, -75, 107, 62, 43, -122, -48, 25, -60, 91, -10, -94, 18, 100, -113, 87, -78, 10, -123, -90, -77, -56, 120, 107, 30, -78, -40, 19, -97, 72, -48, -89, 28, 56, 63, 103, 86, -34, 114, 96};
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
    msg.setTimeStamp(0.4388169764324451);
    msg.setSource(49316U);
    msg.setSourceEntity(198U);
    msg.setDestination(53340U);
    msg.setDestinationEntity(206U);
    msg.source.assign("RTGFQCKSMDQEWPMSZUODXFPUVTNOLOATIBJZVICHRRCIALBQMTDPSYGYOVVGNEZXWTNGZRCIUQWFGDTFFEGJTOWSZCULRJMHAAYDFPYUPXXNNPTBLVRDGRLXWXCWGEIMAONICPAHIFSGKFQDSLQVYEDKHHCUXKBUEBJZOCHSZHJJWYMVBLTURNFYQSZMLNKWIWMYBOOHZKLUSRIDEVNUQFJBQEAIXMYPRKPETWPKXCGNBJQMBSHJ");
    const signed char tmp_msg_0[] = {-41, 86, 10, -44, 29, 50, -4, 86, 92, 78, -74, 28, 59, 119, 90, -84, 25, 70, 90, -67, -42, -92, -48, 34, 30, 69, 38, 59, 6, -13, 32, -123, 41, -41, -15, -82, 99, 68, 49, 11, -68, 16, -60, 66, -23, -47, 47, 33, 114, 86, -98, -110, -89, -9, 81, 8, -79, 115, -8, 86, -36, -84, -97, -15, -93, -77, -29, -112, -42, 24, -85, 125, 40, 121, 5, 13, -59, 65, 37, 121, -81, 116, 33, -56, -2, 26, -117, 114, -114, -100, -105, 118, -53, -65, -92, 28, -67, 61, -90, 64, 124, 111, 77, 117, -114, 19, 120, -66, 34, -117, -54, 105, 15, 124, 93, 73, 120, -126, 90, 66, 17, 88, -100, 100, 44, 67, 122, -55, 56, -126, -60, -12, 34, 100, 27, -74, -5, 79, -90, -122, 85, -30, 108, -109, -49, -127, -43, -116, 118, -29, -17, 106, 86, -56, -94, 108, 82, -112, -43, -95, 55};
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
    msg.setTimeStamp(0.563683034063272);
    msg.setSource(39391U);
    msg.setSourceEntity(137U);
    msg.setDestination(27089U);
    msg.setDestinationEntity(144U);
    msg.source.assign("TFSVMGFCIRNPVRZAYPEJ");
    const signed char tmp_msg_0[] = {27, -121, -74, 57, 44, -99, 78, 17, 122, -61, -113, 64, 34, 116, 16, -13, 113, 58, -25, 61, 22, 36, 114, 24, 49, 121, -5, 34, -84, -88, -79, 13, -108, 87, 10, -45, -12, 47, -88, 38, -108, 11, 82, 118, 82, -88, -82, -23, -111, -103, -58, 67, 78, -65, -46, 26, -120, -37, 123, 29, -71, 21, 68, -111, -119, 58, 85, 112, -51, 79, 62, -12, -99, -108, 42, 54, 36, 16, 51, 115, 101, -7, 102, -93, -94, 50, 32, -34, 5, 97, -47, 73, 29, -61, 81, -80, -4, 79, -29, 21, 84, -104, 57, -88, 44, 6, -116, -124, -120, 109, 3, -13, -20, -14, -29, -8, 14, -55, -120, 97, -89, 121, -23, -128, -47, 57, 72, -101, -30, -23, -79, -111, 97, 63, 1, -113, -84, -16, -101, 55, -93, 107, -69, -17, 7, -109, -35, -91, 119, 33, -61};
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
    msg.setTimeStamp(0.6389592146270877);
    msg.setSource(56286U);
    msg.setSourceEntity(208U);
    msg.setDestination(55755U);
    msg.setDestinationEntity(19U);
    msg.source.assign("GHWWKLIWSSOBYLMJOAXVRVQMPTAFXTCSOYBKCYXCDYIQXHWGFNZBBNGJAVUZDFHCTDARJPTTNHOBDVAQQBTQWTMTXWEPIYLIOICASKIGLWVHLMWFAHSBTMNRDAMOYZVMHENINKRZEPOWCEAXKHUDVURFCTDEKYHRJZIOMDLXCVUDSSMPZARLFO");
    const signed char tmp_msg_0[] = {16, 99, 43, 33, 20, 124, -69, 92, 105, -116, 124, -100, 91, 13, -59, 43, 101, 41, -63, 95, 99, 10, -48, 67, -8, -1, 69, -28, 119, 46, -40, 43, -87, -7, -29, -44, -95, -20, 100, 119, 89, -61, -44, 20, 16, -52, 90, 26, -33, 72, 72, -25, 30, -75, -56, 83, 60, 120, -105, -13, -99, -100, -7, -80, 65, -13, -106, 33, 78, 29, -83, -47, -102, -72, -79, -127, -11, -126, 99, -31, -87, 43, -43, -17, 30, 118, -125, -82, -70, 51, 26, 86, 122, 28, -89, -24, -114, 110, 18, 21, 101, -125, -40, 114, -73, -44, -47, 51, -29, -14, 60, 69, -42, -20, -44, -1, 84, -117, 27, 76, 97, 62, -97, 34, 65, -68, -36, 73, -83, -113, -75, -36, -110, 93};
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
    msg.setTimeStamp(0.17431693120652902);
    msg.setSource(13987U);
    msg.setSourceEntity(199U);
    msg.setDestination(59569U);
    msg.setDestinationEntity(57U);
    msg.seq = 2418753643U;
    msg.state = 30U;
    msg.error.assign("MLIRPJCIOGGSXFUAAIHWVPLCPDWZBVQSXZUEDKHZLBXEEVVCJCFUBAEGXCFKLJYZUIGVDGESQKMUTJVRFOHLMZSXFQWIGEXUNQAXVTOCRTDBLOIFDYCTBQOWTLKOQUZTBIQAANWWYONCYYNGULWTCQMEHWFIJHAMUAQRRYSPQHXPHZFXNRDTZUVWEWSMNJY");

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
    msg.setTimeStamp(0.195155025922228);
    msg.setSource(50117U);
    msg.setSourceEntity(55U);
    msg.setDestination(64964U);
    msg.setDestinationEntity(75U);
    msg.seq = 3382655784U;
    msg.state = 77U;
    msg.error.assign("HUZDKYXFKGBHCSBXMSQGQTBSLXXRXNJLAAROHVOMNCEGQVHXPMDWWCRBEUOLBPJIVEFQECOSZ");

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
    msg.setTimeStamp(0.2692962912603606);
    msg.setSource(19652U);
    msg.setSourceEntity(162U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(235U);
    msg.seq = 2290321621U;
    msg.state = 195U;
    msg.error.assign("BXEMKTQUTETXHNRDAGNAOWZTIFNKSKRKWUWRYZYGFIDSYZJIQQEZAJOSNIDEXGKPHLAOWPGDFPUDHZYCPVSHRFIBRIZQRJJHFIGRQSVONVULRBDYKJLBJ");

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
    msg.setTimeStamp(0.5404833596856561);
    msg.setSource(22317U);
    msg.setSourceEntity(2U);
    msg.setDestination(48100U);
    msg.setDestinationEntity(232U);
    msg.origin.assign("OTLJKWDHNDDCOBPWTZUJUHRTTPVXJOMVENLQDRPHNWPTEBTYBKHNEYPGIYMKHMQWCGGEZGYDANOUIKXQZFNBMYLPBAZOGGTZEROZHFCMSUBJ");
    msg.text.assign("AGPDAVLWWUPOLYONYRATLIFAXYVXQSMXZCYBIDGEDKIOKAOJKECTGFWCHVIFJCDBLWGRYDGDPZDDRAGGMWOSBOHQZRPHVPANXSJTFHLNUKTHFZMFVTUCKSMZXURASQMMUZJRVVCMDHZHLXPQFCYBHZTZVXWFUHTBIN");

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
    msg.setTimeStamp(0.09794805970221698);
    msg.setSource(27893U);
    msg.setSourceEntity(136U);
    msg.setDestination(38560U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("QGZMYTMXXUPKLCNQPCOKGONHGSIVETKDKZWDZCOETMHMTLRQLIHPZWLSOQKJBXMDVESNUMODSMZYDFJENWGRKOWHZCYY");
    msg.text.assign("GTCDKISHAROLQHISZPZCHNJGCWYAUTITXJVZLZRGGYUJISBVARMXRNDMWGMFXUQZWFBADRDHYVWUBCEOYMSEUIIOFNKCDKWJSZOLPBNOXDFZBTYCOMFWCHXDVGVDPJOFAZEYKWRJVKGVMEFEKHFRUPNMCCNFATPQMVANTPILGHHBYJNPSQMTWULXQIQEKLOXSDGRHGLPYHUOCYXSEPRNSEXJTETLKAJBTMEVKBSIBANAQWYIQQVZQPXLZUKOFU");

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
    msg.setTimeStamp(0.9759026608833584);
    msg.setSource(4094U);
    msg.setSourceEntity(213U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("GEXAQDTWSDVGPNROFMEAQHBFZPOREMWETKRKPEDYBVYHLFVKASQSFXQIRJXTLQYHTNCYWXGERABRZVVANCJMQIEVJNHKOPUYOPISUTVXQUGTWDKCOBYCZIKBGIDLMNKFULZSRXSGRJGGTVYPUTWJDMGCLFYNZHXPCHKZCMMYAQCHUNCVYLWXFJDOQOULJBNXDBTEOQAKOZIDSCWDJSALPUMFFMIXTNSZHSIWIIEHBGAZBLNFPRAVPRHKJWWMU");
    msg.text.assign("KRAWVCICMWBLWDBWXQJOEGBSHYVUZTINJFOCGTFSKXKSWUVBRPZLNPUTZBYCLTBRXGNEABSYBHUKRUWUKLCNTLHOTNKBJLMXNSTGEEUTZQTJHAODD");

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
    msg.setTimeStamp(0.5916649033479197);
    msg.setSource(32098U);
    msg.setSourceEntity(122U);
    msg.setDestination(47828U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("OTUDCOHZANZPXFMHVEGOFUAIAJLLWHJGRTQZFJBVXCNGEZYWSSWFERBITTUUJELBVAIWHKVWYZSZSDYIYJRONPUBOGEEUIDNDEFGYAYUCQINBWDRTXDWCFHIKCCGZTLPJYPBSFLOGVGFCMZJTQNIBIXJYPPLKUGSAD");
    msg.htime = 0.5546217566303081;
    msg.lat = 0.09577329325555439;
    msg.lon = 0.7891572436086518;
    const signed char tmp_msg_0[] = {36, -75, 32, 124, -68, -23, -34, -46, -93, -49, 50, 54, 118, 108, 40, -14, 109, 45, 82, -70, -116, -123, 120, 96, 107, 102, -55, -3, 5, 116, -60, -63, -12, -40, -102, -77, 120, -25, 85, -35, 21, 124, -47, 106, 7, -50, 26, 35, -36, -98, 73, 102, 109, 23, 101, -62, 119, -81, -69, 72, -66, 3, -58, 47, -114, 108, -63, 98, -98, 126, 50, 28, 4, -26, 79, 19, -65, 66, -17, -79, -71, -126, -23, 87, 74, -115, -98, 90, 63, -115, -45, 121, 76, 63, -112, 0, 125, -41, 31, 82, -10, -35, 90, -69, -56, 106, -58, -62, 49, -71, 50, 38, -12, -6, 89, -81, 75, 21, 4, 58, -102, 120, -35, -28, -19, -82, -111, -127, -103, 18, 61, -86, 60, 70, -87, 71, 71, -45, 111, 84, 99, -18, -128, 44, -3, -88, -61, 52, -22, -98, -116, 27, 57, -84, 39, -83, -75, 108};
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
    msg.setTimeStamp(0.2471717580772269);
    msg.setSource(4482U);
    msg.setSourceEntity(140U);
    msg.setDestination(22355U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("MHZXAECXBEFFKDSDDAWDZKDPIUPYUVSMFSLBXKUJXXNTRQJHGVOGQ");
    msg.htime = 0.6898132595597912;
    msg.lat = 0.4108959847550775;
    msg.lon = 0.37821669365724275;
    const signed char tmp_msg_0[] = {-124, 94, 16, 70, 111, -124, -3, 98, 42, -80, -40, -40, -100, 83, -63, -7, -81, -53, -62, 118, 78, 96, 22, 68};
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
    msg.setTimeStamp(0.08543582963657115);
    msg.setSource(59494U);
    msg.setSourceEntity(181U);
    msg.setDestination(57632U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("EHNQIEDVSUANIWYRBKSFPGHBRIVZRBEPBCWHETDGANDZDZFRIJVSFNSUKKWSGCJPEYUFSYGNGPXWCGLYMPHDYLKJHUJBTQDHPUTXYCTMOMVUOLRXQHNMEVTXVAAQMFGDHCKOXRXNADIZJSRFVITZJIXUAAKCWUGQCXUARFMHTTOSHVWWBBULRZTPWQGFQLLJPQON");
    msg.htime = 0.8335157723078052;
    msg.lat = 0.46055664929595286;
    msg.lon = 0.3158626948495823;
    const signed char tmp_msg_0[] = {86, 55, -67, 31, -111, 9, 4, -55, 96, -125, -2, 105, 118, 31, -87, 15, 123, 25, -98, -7, 39, -1, -78, -69, 76, 108, -23, 58, -76, -53, 27, 84, -124, -23, -101, 18, -41, 52, 90, 54, -82, 120, 34, -91, -46, -46, -88, 97, -13, 27, 60, -127, 28, 2, -45, -23, -10, 104, -37, 11, -26, 105, -5, 34, 29, 99, -103, 83, -74, 97, 43, -17, -53, 52, -109, 69, 10, 3, -125, -45, -104, -97, -29, -36};
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
    msg.setTimeStamp(0.14460400706162102);
    msg.setSource(20851U);
    msg.setSourceEntity(32U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(225U);
    msg.req_id = 58925U;
    msg.ttl = 24059U;
    msg.destination.assign("VXZMMPTKVVTGYSDZUOULRMVRLYPGNPSZMRLNTZQSWEFDHZLUWSFWKWXGZCYJHYBQHPTIJPUIZNINBTOKABRXFUALFEQPFKJOGGEJMUODKCDOWJNMYZSZVQKHOIWIVTIQYOLHKGHGRFGBBDHNIXNKCZEJTXSPBNCVHWEAEDWWEUGKPXRQEXAFDSIUOIEA");
    const signed char tmp_msg_0[] = {96, -55, -77, -103, 55, 60, 111, -31, -15, -128, -39, -76, -78, 89, -51, -10, -12, -58, 126, 35, 99, -109, -102, -74, -77, -75, 6, 68, 88, 61, -93, -67, 105, 72, 2, -83, 4, 42, 46, -118, -122, 38, 63, 90, -83, 10, -6, 86, -60, 90, 5, -80, -64, -106, -94, 80, -98, 83, 121, 1, -53, -17, -49, -18, 94, -6, 35, -5, -42, 17, 113, 105, 17, 57, -43, -58, -127, -11, 60, 71, 7, -116, -111, -69, 67, -84, 65, 21, -46, 2, -50, 84, -115, -40, -86, 3, 92, 18, 17, -46, -90, -120, 37, -119, 12, -77, 40, 123, 57, -113, -120, -83, 41, -62, -32, -24, -10, 117, 76, -109, 52, -115, -64, -118, 109, -34, -107, -30, 53, 45, -68, 92, -97, -32, -80, 89, 11, -117, -100, 92, 87, 12, -20, -122, -36, 6, 104, 70, 117, -128, 83, 95, 65, 60, -4, 35, -80, -34, -100, -101, -54, 8, 40, -60, 66, -86, -90, -55, 111, -64, 45, 14};
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
    msg.setTimeStamp(0.24363272672077063);
    msg.setSource(41817U);
    msg.setSourceEntity(26U);
    msg.setDestination(715U);
    msg.setDestinationEntity(147U);
    msg.req_id = 33840U;
    msg.ttl = 56845U;
    msg.destination.assign("XHDXUJKCAQTKAUMIMKXFZKGTZGOENHNLPUGIBMPUICPSLAWRWJZAFYBHZTBBXVEWYOFMCMYRSOIFZYSGMQFDNKVOEJTVYOWZXBNZKRWAJEHVERYARTFWLPQRSDLDKFQPECJUWQVIWBOUNIDCC");
    const signed char tmp_msg_0[] = {-108, 53, -59, -72, -74, 4, 20, 59, 35, -102, -62, -86, 8, 2, -100, 1, 87, -25, 8, -39, 68, 107, 97, 15, 107, -25, 54, 100, 56, 46, -123, -71, 85, -56, -102, -36, 42, 81, 14, -5, -11, -49, 9, 15, -98, 122, 23, -67, -35, 39, 2, -64, -61, 89, -117, 21, -118, -100, 48, -126, 56, -127, 31, 97, 109, 88, 96, -62, 103, -71, 103, 17, 14, 63, -56, 58, 16, -102, -71, -34, -64, 8, -56, 78, -118, 121, 19, 9, 34, 26, -124, 106, 107, 33, -7, -68, 86, 6, -23, 9, -75, -31, -10, -52, 56, -69, 16, -56, 47, 4, 82, -27, -39, -35, 102, -85, 4, -51, -23, 102, -50, -6, -65, -121, 45, 68, -103, -13, 10, 45, 1, -42, -69, 20, 110, -40, 23, -30, 32, -94, 19, -101, 18, -27, -64, 125, -66, 6, -61, 86, 0, -58, 10, 92, -9, -61, 56, 118, 1, -128, 1, -121, 70, -94, -45, -84, -101, 55, 45, 13, 33};
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
    msg.setTimeStamp(0.017320381853121125);
    msg.setSource(56732U);
    msg.setSourceEntity(237U);
    msg.setDestination(16597U);
    msg.setDestinationEntity(31U);
    msg.req_id = 28399U;
    msg.ttl = 2041U;
    msg.destination.assign("VLURMUBDEUCZRWLEVIOJLFXNMCANTRRZFZBDITAGWVFTAMXPUBAKKYCWPJHONAGVLLBSSCGSIPEOEDRUQHOBYIZXOVTINAXSQPNASYYHJYDLYFDCKQKTGHGUNYOXEHQPRQYCNGYWZLFWPTUVSHINULMSSYHIDBQVEM");
    const signed char tmp_msg_0[] = {108, -54, 115, -43, -41, 15, 31, 103, -90, 69, 99, -3, -117, 111, 100, 28, -112, 92, -65, -70, 11, 22, -89, 93, -41, 89, 70, 112, -114, 111, -22, -3, -74, -66, 63, -41, -101, -98, -102, -99, 64, 42, 55, -81, 13, -56, -85, -89, -38, 38, 35, -19, -34, 126, -56, 39, 23, 17, 47, -123, 120, -90, -118, -101};
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
    msg.setTimeStamp(0.4769833956186127);
    msg.setSource(7128U);
    msg.setSourceEntity(123U);
    msg.setDestination(49074U);
    msg.setDestinationEntity(107U);
    msg.req_id = 60824U;
    msg.status = 216U;
    msg.text.assign("ZXCQZRGYAVWXCCELDLLMDNKXCGYXEPPQQQUAGEUZOLVUBGRLVZNOVUBTFKUFWAZQJNMJSYPPGEHBJABKZDEJRVRFXFJSKJHWASTWUPRPMAMGVYMBCMYDHYOOPLAFJKZQSPQTDUWSCLSLVNSBOBRIIKWHHEJIEQNKDGZSTTTOMBEDTHUKWWJTYIVBPNBGHFHLYFONMLFNQZCUAZAFUXOICESJRSDFKXRKCQNHITWNETIWCIDMYPDHI");

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
    msg.setTimeStamp(0.5388458125278387);
    msg.setSource(46233U);
    msg.setSourceEntity(249U);
    msg.setDestination(11862U);
    msg.setDestinationEntity(194U);
    msg.req_id = 28647U;
    msg.status = 166U;
    msg.text.assign("OWBQNOAVGLDLVGYJBTUGHRKFPBSCDRCQEHGVMHBLIREANHGPRTLMJLLAVOMVAHATWPEAACWQWNPEKTFQRSEHDFTKHTWMIXMTMGCROVZSBCKQZEGIXBMCLYRTEYYUJAASQVXQKUUIZDQ");

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
    msg.setTimeStamp(0.09246420559344637);
    msg.setSource(34355U);
    msg.setSourceEntity(206U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(153U);
    msg.req_id = 47175U;
    msg.status = 253U;
    msg.text.assign("JMBRHXDXKMLPGIWLBMWLBAGSCCFXOXTMGXBCQQRWVZYOPZLAQHKNDSWEGHQFISSARHFCRBQWBJPPVXUEAAOJYXTK");

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
    msg.setTimeStamp(0.9656159936425938);
    msg.setSource(7588U);
    msg.setSourceEntity(150U);
    msg.setDestination(38643U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("WSETNFBLETUQVEPYHPYXNGQDDCJCOTXLGPSOTJQAOVTWRYXNHDMGFMOWTFNVXUWHRUUJEAQZMLSJFZDOYNRABMQGXZKKINGUFHKMVQUSVZ");
    msg.links = 184612438U;

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
    msg.setTimeStamp(0.6729818196143851);
    msg.setSource(24020U);
    msg.setSourceEntity(92U);
    msg.setDestination(35869U);
    msg.setDestinationEntity(166U);
    msg.group_name.assign("VSKWUQIEZHGPQBTBANYOMLEEJIMVGGMRPRXJXDYEYBGPTPM");
    msg.links = 3682032746U;

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
    msg.setTimeStamp(0.9098804500414112);
    msg.setSource(55970U);
    msg.setSourceEntity(93U);
    msg.setDestination(25500U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("FSJRJGZOPOTPANTWUXHMJJ");
    msg.links = 2486205430U;

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
    msg.setTimeStamp(0.5094532948596034);
    msg.setSource(25063U);
    msg.setSourceEntity(82U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(21U);
    msg.groupname.assign("ZLJQCIJCTAKRLCMNXGVLVDZUROAZDXMYQWIWHLTYGVRLJSFPHIFLKIWRFEEIUBKFGTCQBEUTWPNBBNZJOAVZGQPYXHASQIYYTDNUOPVQWMHJGORAWWDPTMMGBWJCQSAYQALXROCBFDNKGILSMXKFDTEQAXXGDBTQPCMRLSNSJDTVECHVNHBERYAUXFSWPVGVIHKZYZVAFOKODEZIHUMHPFYJUSL");
    msg.action = 237U;
    msg.grouplist.assign("CAXAJQLVYVEHHLZWBDVLTDETVGNHLVTWZOSBMAMEGSPKKDZBUJYBVPXVTGJIBJQSGREQPICAJMJOWSUPIGLDSRDZPMOTEUHDTJIIFKXYNXXPBECIUDLREFRQQODANGAGCKRVRXAFNKUWKKXCBKTLZFRFTIXYQCYQMMZUUBKMNMJQVETJRVUUFPCBSFZDOUXQP");

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
    msg.setTimeStamp(0.4522503219312942);
    msg.setSource(65408U);
    msg.setSourceEntity(102U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(139U);
    msg.groupname.assign("ARAFNDAKWKZODBVLLHNDZXKWTNXSZAHXNUQJCKLPXGIP");
    msg.action = 8U;
    msg.grouplist.assign("JHOWPEXUVXYNGFLARARXDILQUQMXMJXRDBDBAJLSCMTYWQHFRWDVNCSNOGHSIKQIQYZTANHVEWNRKUEUYOMSWSITZDFVZBUSH");

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
    msg.setTimeStamp(0.4738986923377575);
    msg.setSource(27048U);
    msg.setSourceEntity(60U);
    msg.setDestination(63239U);
    msg.setDestinationEntity(232U);
    msg.groupname.assign("EIUNHKHNRPMITOWLJSDQHGHBUEPDMAQHWCWMTUMMFZRUHTNKTNARFYBBCEJVOEXJWPXCLNJLKMGCBWCBDVEZATGFFPSHP");
    msg.action = 80U;
    msg.grouplist.assign("OHRKODSKGKRIROUNYIEBWMXEDKDEZINSADARVWCPYHCQFGFWUPXGZEUMYRPJLBIZVAXZLCBVEUNNPVQRPASVAPNQCCJKVBZHMYZ");

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
    msg.setTimeStamp(0.06767053348722807);
    msg.setSource(28687U);
    msg.setSourceEntity(124U);
    msg.setDestination(64458U);
    msg.setDestinationEntity(224U);
    msg.value = 0.310586601521487;
    msg.sys_src = 2752U;

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
    msg.setTimeStamp(0.036965516733142745);
    msg.setSource(60123U);
    msg.setSourceEntity(33U);
    msg.setDestination(30515U);
    msg.setDestinationEntity(226U);
    msg.value = 0.3063947951862046;
    msg.sys_src = 21336U;

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
    msg.setTimeStamp(0.01753409156989505);
    msg.setSource(20145U);
    msg.setSourceEntity(45U);
    msg.setDestination(41989U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9286165402284168;
    msg.sys_src = 46931U;

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
    msg.setTimeStamp(0.3732385212565409);
    msg.setSource(52344U);
    msg.setSourceEntity(199U);
    msg.setDestination(30133U);
    msg.setDestinationEntity(33U);
    msg.value = 0.20273491056462023;
    msg.units = 165U;

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
    msg.setTimeStamp(0.9860515719571342);
    msg.setSource(25897U);
    msg.setSourceEntity(179U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(232U);
    msg.value = 0.4370377636115639;
    msg.units = 146U;

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
    msg.setTimeStamp(0.2721172858923119);
    msg.setSource(21921U);
    msg.setSourceEntity(153U);
    msg.setDestination(59665U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7217329979505313;
    msg.units = 159U;

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
    msg.setTimeStamp(0.5131817620634349);
    msg.setSource(21901U);
    msg.setSourceEntity(250U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(25U);
    msg.base_lat = 0.26099888811777683;
    msg.base_lon = 0.17551243499266767;
    msg.base_time = 0.01930412244089219;

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
    msg.setTimeStamp(0.03298751291005153);
    msg.setSource(53967U);
    msg.setSourceEntity(98U);
    msg.setDestination(34509U);
    msg.setDestinationEntity(213U);
    msg.base_lat = 0.7336440519474097;
    msg.base_lon = 0.8639093280635682;
    msg.base_time = 0.5540669404221734;

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
    msg.setTimeStamp(0.8079055751534134);
    msg.setSource(33383U);
    msg.setSourceEntity(49U);
    msg.setDestination(56522U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.5934316452545261;
    msg.base_lon = 0.7150497815094057;
    msg.base_time = 0.5298027981334231;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 16288U;
    tmp_msg_0.destination = 64460U;
    tmp_msg_0.timeout = 0.5041233117674679;
    IMC::EmergencyControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 33U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("NOGSDHWWNRHWREQEGDZSXUVICMXNQTDMQWLZBHWCHOTGPILFYFPLEJKZYKSNHOUOCTIXZMUCNMNVLXRQBGNEMFUDBGZVGLFXNYXAYNUOERZARCCLYZGRIATKUIAAXMURYJIBAQDGPLEKMJFNKPJQOJMTIVFIEOFEK");
    tmp_tmp_tmp_msg_0_0_0.description.assign("BKVAIPKZYJTLGQWWCPJDLEHBFRNUVYDLUOQYIKCXHBXUYQZDIFCTQEACZEJFDMTICWDGFXRHNJBZEHGOANGSUAPMTRXAVTJVTVYPSBKWYGGGUHZGHNOMXGCHS");
    tmp_tmp_tmp_msg_0_0_0.vnamespace.assign("UDESTKZNCLKVZSLPRAIFVREFNAOJCZGHHLJCKYIJSATQXNCSFUMTMTIMNMLWPFITDBRBEQUDLCOVCYSXHKHCPGMGCWJEHARRXJNJOZ");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.name.assign("TQOWONEQBGBAIDXLFMPPTTLBXCSYEROLIGOVCLUVUGWWYSZCBGVKBATLJGLLPDPZFJPISYWFJPQDNDJSFMAIAOVAPTXBODWRVNGPWTXKAMFJHMXMJPUEEQQ");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value.assign("CQGBILNQREWJRYVWBMDAVGIKRCVZEVIIDMRTVJQHCWABFZNXGVU");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.type = 143U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.access = 179U;
    tmp_tmp_tmp_msg_0_0_0.variables.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.start_man_id.assign("RUQEAQQPWNCISJNVKZQCZLAZDFLMNYFSBKHDJOETKBMUYDDLGCMPVGCITNVCYXHVZNHGFTZFQCRFBUAPTTXOHAXIRTLNQMBMWWUIKSHOSJQUEPUPFPOGITMDARRMRZGQHNBMKXWAWGZWDIYPYXJLJUXJGLDCESFEJPCOBZBKRJRSLHSSAOUMIVNXIJ");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.maneuver_id.assign("VKTVCIMXZIEVCJIUXEXDOBGQYKDFAOMBSWYLHLKJFDYBJUGYFAQSCJOGAWRUOXNREOUIPPTFRWHVUWOHQLMCTDFRHPMSYPBTARHHNSUKKD");
    IMC::StationKeepingExtended tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.lat = 0.5767158831320974;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.lon = 0.3743783325267014;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.z = 0.40958160111557185;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.z_units = 143U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.radius = 0.6466753554238336;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.duration = 30611U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.speed = 0.4410124053094824;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.speed_units = 129U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.popup_period = 7645U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.popup_duration = 8897U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.flags = 101U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.custom.assign("OMHXGSLUAZJADLYNQSBTCZYXOQDIKYTVHKIBEPGEVHPYESUOJIGCAPCTBDZUPIMMFNWAGSUVXQMDVKEIFJQMXBXFRFFGTGOODJYWUEWANASPB");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_0_0_2;
    tmp_tmp_tmp_tmp_msg_0_0_0_2.source_man.assign("UMJBDPTGREPFEMZMWQBDQGYLEFLRZVIPWRGLDRYLSUECZRFTFCUVSFECHJHCTMAIJDANVQYUJDAHRBLWIUXDJMOZNPPVXJOCYNULQTKPGHKOCLLFCLACGYIPCFJIQBHUTBZCMTDOBNBUZXKITFNEFIMVQZRDIJVXRSKKXWZMDSODWQXWRGBSHXAMSEKSKWHNBJXFIZSSWUYLNYJNYOOAMXOTAKQ");
    tmp_tmp_tmp_tmp_msg_0_0_0_2.dest_man.assign("LPDXYYKRGDBNMVEAWWINQHYFPFBMZTOEEOENONFWHWIZFDZXETRCAJMZKEUTIBLXIIFVZXRAWEHGYULMVPKLTCYOTMMEDODBYHFXNJBAVQXKIQBLJZXSUSLHOJKGBCQLNJNHTQACGTWRPSUTFMCOQGGJIGHGKEKAZUQCSRUCPRXCOFIJNPSVOGUXBAPCJU");
    tmp_tmp_tmp_tmp_msg_0_0_0_2.conditions.assign("ZDYUJTZQXDRBEFDGVOWNVOSKCQMRBUTBVVMBPHLSEKBIELSHVGYEB");
    tmp_tmp_tmp_msg_0_0_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_2);
    IMC::AcousticRelease tmp_tmp_tmp_tmp_msg_0_0_0_3;
    tmp_tmp_tmp_tmp_msg_0_0_0_3.system.assign("VGWTWFCZUPVGTHGYKRPCMNAADHFAUVTLRFDNMIYQQODJKUOQRALWVIKXATQCBTDEUMGLPJZTMUKGBIEWENRMZSILKWROJLXISZJCYUSOSQXYWHXWKNEKPOHZZYYLPIDBDDZMSFPHOJUXCQBLFUAORDEPNFXJRSAQJRBDNXMYHEGTCVUKRVWXWBWHZJN");
    tmp_tmp_tmp_tmp_msg_0_0_0_3.op = 116U;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_3);
    tmp_tmp_msg_0_0.plan.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.7630249103559416);
    msg.setSource(64656U);
    msg.setSourceEntity(33U);
    msg.setDestination(58888U);
    msg.setDestinationEntity(173U);
    msg.base_lat = 0.6104501421430345;
    msg.base_lon = 0.1934458723838799;
    msg.base_time = 0.576176033419451;
    const signed char tmp_msg_0[] = {-76, -116, 40, 52, 103, 86, 81, -61, 87, 96, 73, -84, -125, 33, -18, -76, -3, -123, -85, 72, -49, -101, -29, -63, 46, -18, -20, -33, -57, 24, -67, 119, -53, 114, 90, -53, -37, 2, -70, 104, -5, -127, 26, -29, -47, 14};
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
    msg.setTimeStamp(0.6969214930775108);
    msg.setSource(2155U);
    msg.setSourceEntity(8U);
    msg.setDestination(57862U);
    msg.setDestinationEntity(188U);
    msg.base_lat = 0.8837801192451036;
    msg.base_lon = 0.915495936891588;
    msg.base_time = 0.702400215151234;
    const signed char tmp_msg_0[] = {9, -33, 98, 103, -98, 105, -54, 11, 16, -110, -128, 29, 21, -78, -108, -85, -98, 110, 29, 16, 106, -16, -62, -99, 103, 109, -112, 30, -127, 8, 122, -124, -62, -103, -22, -69, -79, 120, 106, 9, 104, 57, 110, 3, 59, -34, 30, 82, 88, -51, -13, -8, -91, 73, 43, -80, -40, 68, 84, -39, -13, 63, -127, -119, 103, -77, -77, -57, -85, -95, -12, -56, 98, -51};
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
    msg.setTimeStamp(0.21641067238436917);
    msg.setSource(7245U);
    msg.setSourceEntity(159U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(199U);
    msg.base_lat = 0.9447073872648362;
    msg.base_lon = 0.788019116838756;
    msg.base_time = 0.9485451170581212;
    const signed char tmp_msg_0[] = {60, 59, -117, -63, 92, 17, -57, 104, -115, -78, -33, -88, 120, -113, 79, 7, 28, -31, -77, -57, -107, 51, 59, -99, -42, -25, 104, -115, 72, 31, -66, 18, 121, -44};
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
    msg.setTimeStamp(0.6652231467007033);
    msg.setSource(39708U);
    msg.setSourceEntity(200U);
    msg.setDestination(20261U);
    msg.setDestinationEntity(243U);
    msg.sys_id = 7935U;
    msg.priority = 61;
    msg.x = -26580;
    msg.y = 23542;
    msg.z = -22534;
    msg.t = -4424;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 37601U;
    tmp_msg_0.type = 122U;
    tmp_msg_0.tow = 1992068726U;
    tmp_msg_0.base_lat = 0.9301595238963405;
    tmp_msg_0.base_lon = 0.7103805604316779;
    tmp_msg_0.base_height = 0.1293033242681697;
    tmp_msg_0.n = 0.724345549401703;
    tmp_msg_0.e = 0.5128369980646648;
    tmp_msg_0.d = 0.9618605505596486;
    tmp_msg_0.v_n = 0.2477947802382683;
    tmp_msg_0.v_e = 0.9933924682355993;
    tmp_msg_0.v_d = 0.5695344731212313;
    tmp_msg_0.satellites = 105U;
    tmp_msg_0.iar_hyp = 64593U;
    tmp_msg_0.iar_ratio = 0.33781285197542565;
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
    msg.setTimeStamp(0.03211889300582316);
    msg.setSource(35477U);
    msg.setSourceEntity(146U);
    msg.setDestination(19705U);
    msg.setDestinationEntity(62U);
    msg.sys_id = 25031U;
    msg.priority = 109;
    msg.x = 5677;
    msg.y = -23883;
    msg.z = 3841;
    msg.t = 768;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 74U;
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
    msg.setTimeStamp(0.16241756520526063);
    msg.setSource(47048U);
    msg.setSourceEntity(234U);
    msg.setDestination(1669U);
    msg.setDestinationEntity(234U);
    msg.sys_id = 2694U;
    msg.priority = -58;
    msg.x = 14105;
    msg.y = 24083;
    msg.z = 3393;
    msg.t = 1502;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.7427146792575661;
    tmp_msg_0.lon = 0.02072179264530538;
    tmp_msg_0.z = 0.5789798570891157;
    tmp_msg_0.z_units = 49U;
    tmp_msg_0.speed = 0.03687840854753466;
    tmp_msg_0.speed_units = 244U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.18873762648918446;
    tmp_tmp_msg_0_0.y = 0.5665431843831745;
    tmp_tmp_msg_0_0.z = 0.7960514634343501;
    tmp_tmp_msg_0_0.t = 0.43094633987810727;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 38308U;
    tmp_tmp_msg_0_1.off_x = 0.10543273619489335;
    tmp_tmp_msg_0_1.off_y = 0.6014578909956076;
    tmp_tmp_msg_0_1.off_z = 0.12633249041156036;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.7563523891681235;
    tmp_msg_0.custom.assign("DUCBIJEZVKSGSAMZXGYHPAWVEGGXLNONQCJKUWLFKZFRALYIMBKWAHHEQGUUEDPFGIPRGOWXLFHZEZBQTSIORUMRAUKWMYIQUNNZMZKVYKFJAKFNWEKYOZYJWTJLJCLTDDMVJWXCVDTYABXBIWDINUVYFNPCRPXTFGERTRCCVREKOZSNQMSRJ");
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
    msg.setTimeStamp(0.46602500836099614);
    msg.setSource(40349U);
    msg.setSourceEntity(90U);
    msg.setDestination(54174U);
    msg.setDestinationEntity(166U);
    msg.req_id = 42761U;
    msg.type = 174U;
    msg.max_size = 15503U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9912844291538532;
    tmp_msg_0.base_lon = 0.7088975214682998;
    tmp_msg_0.base_time = 0.22213335701328063;
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
    msg.setTimeStamp(0.5063006420246292);
    msg.setSource(30199U);
    msg.setSourceEntity(103U);
    msg.setDestination(15014U);
    msg.setDestinationEntity(8U);
    msg.req_id = 61661U;
    msg.type = 232U;
    msg.max_size = 63012U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7213908022598745;
    tmp_msg_0.base_lon = 0.571299001889206;
    tmp_msg_0.base_time = 0.8469227079367507;
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
    msg.setTimeStamp(0.9302237347001576);
    msg.setSource(42686U);
    msg.setSourceEntity(186U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(83U);
    msg.req_id = 1371U;
    msg.type = 99U;
    msg.max_size = 65218U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7541179011139795;
    tmp_msg_0.base_lon = 0.05006250554314384;
    tmp_msg_0.base_time = 0.8235059633064613;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 30211U;
    tmp_tmp_msg_0_0.destination = 54675U;
    tmp_tmp_msg_0_0.timeout = 0.9596444835467579;
    IMC::GpioStateGet tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("KVXRMQLRNEWDPHPDNVHPBGJYOGWPSSNISAQFMSPNNLHJGEFECTKFVYUUXTNLGBJSAKUMLICGWHGROHNYUTDWWCPCFFXVZKIGCVKVSFZRWADWALHFHAAPZLJPZMSEYYUXMMMXZILYGOJFCIRLSNQXTCTQRODVCBUBZDIDKKTRBOAUEZPMOVLRBQKQUXJVEGGH");
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
    msg.setTimeStamp(0.02013774961080539);
    msg.setSource(21608U);
    msg.setSourceEntity(164U);
    msg.setDestination(20656U);
    msg.setDestinationEntity(54U);
    msg.original_source = 10772U;
    msg.destination = 37577U;
    msg.timeout = 0.46482616817846567;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 236U;
    tmp_msg_0.frag_number = 118U;
    tmp_msg_0.num_frags = 158U;
    const signed char tmp_tmp_msg_0_0[] = {14, -91, -115, 103, 82, 15, -53, -123, 43, -109, -10, 121, -119, 40, 122, -122, 87, 22, 23, -116, 75, 13, 88, 39};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5703864399791484);
    msg.setSource(43138U);
    msg.setSourceEntity(114U);
    msg.setDestination(29006U);
    msg.setDestinationEntity(32U);
    msg.original_source = 62043U;
    msg.destination = 51260U;
    msg.timeout = 0.7969920079495454;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("UTYWOVFTQBPBDMILTQKLQWAINVNEQZPKCXSIOMTZDGPJLREEVADUGURHWMWKONGWZROIUKAHRVGTGFRFPPEJWODDSUMLKEJLEIWSSDYPDTJRLGVSTTXFHRHFJPEGCGLAYXYNOXZNUJUCSBCZKMAIYOWSRJMQTFXQQMITIVHSXYZYF");
    tmp_msg_0.lbearing = 0.30807537956718345;
    tmp_msg_0.lelevation = 0.04310630931760162;
    tmp_msg_0.bearing = 0.5279305629898252;
    tmp_msg_0.elevation = 0.19212130574796005;
    tmp_msg_0.phi = 0.7718582014950134;
    tmp_msg_0.theta = 0.7606257782195953;
    tmp_msg_0.psi = 0.45769533908045645;
    tmp_msg_0.accuracy = 0.6298330476299943;
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
    msg.setTimeStamp(0.2166173102860367);
    msg.setSource(5391U);
    msg.setSourceEntity(235U);
    msg.setDestination(5135U);
    msg.setDestinationEntity(71U);
    msg.original_source = 8315U;
    msg.destination = 39834U;
    msg.timeout = 0.44271372180655844;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 142U;
    tmp_msg_0.entities.assign("SHLQZNUUIMNFWEKLIYAUKIPHNDFUBEVASNOXYFRXOGOBJAUVUYOVGAMZAZDMFAELVEZUGFJWTJYXDSJGH");
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
    msg.setTimeStamp(0.3232912897165562);
    msg.setSource(16548U);
    msg.setSourceEntity(185U);
    msg.setDestination(9955U);
    msg.setDestinationEntity(155U);
    msg.type = 31U;
    msg.comm_interface = 14095U;
    msg.model = 11829U;
    msg.list.assign("SRAGNZQTLXUXOKTGDLXZWJLUVNRWJWXWNIEJFYOUFBVEIBDPORQFOXSTNKCJZVKISTIKCBLQMMIGVYDMJNJXRVATHKRJVTWEKRIOUQUOHEGGKBDKMGFABCDYHENHMZGAGFHXMGYSWPSNJAYJHDPVOYSWYSRAKBSEPVUZVSDCBLTMTZZCHPIYACXPLDNCIAOKPQJFZTOBNUERWYRZELHCMQXUQLPUWNQHFQMHMWDCRVDAFBEEYOZGFXPSUAFBLI");

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
    msg.setTimeStamp(0.6224328008873854);
    msg.setSource(55363U);
    msg.setSourceEntity(157U);
    msg.setDestination(41222U);
    msg.setDestinationEntity(7U);
    msg.type = 38U;
    msg.comm_interface = 457U;
    msg.model = 21149U;
    msg.list.assign("VJSUOBIEUBSOJSTCURJUCHEZWCBFYJTAXOMTIICXYMCYCYMNULWZCHKITYDQVBFORRQGBKFWENSOHPZANZDNYBWGBRIAGYLWHPNQNDMVHQHXRVUQFLFWRVXSNLRPUZPQRTMJOPIATKYDQSEQAGUXITOKBJPYPTLYSNAOMXXJPEIGHXDGZWEKSNGRUDMLFOZNJJZEDCEPZFQWVAWK");

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
    msg.setTimeStamp(0.6594787185200426);
    msg.setSource(12955U);
    msg.setSourceEntity(73U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(147U);
    msg.type = 1U;
    msg.comm_interface = 60935U;
    msg.model = 61860U;
    msg.list.assign("RQPZMNAPYJWUSLCCUGUZLGVJTAJCLVFNWSYPJQIVBBZWATQJGQOHQOZTLIZYJCKHBHSBNVIJREZIXUXZKXQWRZDNNXHIGEIYRAIWYGNTKDCMVSWESRCRAHOEKEVEESPALFBFHXBTQGGBLAYUMYFMURCMSFFIDDPDWLPNGKEBDOXSMTDHBJQINKBFOXMKQGYVKGPSOAAPE");

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
    msg.setTimeStamp(0.9009575737913321);
    msg.setSource(10743U);
    msg.setSourceEntity(106U);
    msg.setDestination(24857U);
    msg.setDestinationEntity(126U);
    msg.type = 233U;
    msg.req_id = 2620425124U;
    msg.ttl = 27896U;
    msg.code = 176U;
    msg.destination.assign("YDQJYRBRDBMEULKKDEBEQVZDWRPQDFWDJLTNAKESCTRNVRWHFFJARPIHCRGOTNUMLTHMMHPGKPQAOLEUZVGUXBJEJDYIYSXGXCCXTFPVAJVTFOLLDDNFVNQFZZQYWDGTRCLWFVOOVOKMIUHESZMSKQPNZIZJSCWUIS");
    msg.source.assign("GSWSMHDIAUBDRNNIXCDZPNVPEZGMLGSSIUWYZLGKECFUUOHSDFDSHOQJNFCKWAGMEXJGQTHTTZXGFMRQZGSLR");
    msg.acknowledge = 185U;
    msg.status = 253U;
    const signed char tmp_msg_0[] = {-116, 124, 39, 11, 49, 102, -56, 102, 25, 83, -47, 121, 79, 19, 26, -73, 111, -49, 82, -65, 64, -9, 118, -47, 114, 124, 107, 38, 115, -13, 81, 60, 26, 26, -118, -92, 70, 47, 9, 76, -81, 91, 24, -50, 42, -94, -122, 114, -101, -25, 121, -7, 2, -57, 19, -26, 0, 56, -97, 16, -79, -61, 47, -24, -13, -78, 26, -43, -16, 121, -65, -119, 124, -88, -3, -73, 120, -94, 71, 78, 99, 45, 28, 112, 28, 7, -15, -30, 91, -68, 34, -26, 112, -65, 45, -63, -39, -82, 54, -70, -64, -113, 72, -87, -33, 41, -104, -116, 119, -70, 86, -124, 78, -47, -71, -114, 37, -89, 122, 118, -8, -4, 50, 25, 15, 97, 40, 52, 32, -14, 100, 27, 57, -57, 95, 66, -32, 14, 8, -61, -126, 110, -72, -51, 126, -87, 74, -27, 85, 21, -88, 100, -29, 22, 110, -33, -1, -88, 74, -101, -1, -122, -18, -64, 43, -75, 65, -82, 2, 39, 110, 15, -111, 25, 95, 122, 2, -86, -56, 13, 8, 2, -30, 114, -64, -71, -107, 109};
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
    msg.setTimeStamp(0.39038026014686655);
    msg.setSource(22477U);
    msg.setSourceEntity(78U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(117U);
    msg.type = 190U;
    msg.req_id = 1392526614U;
    msg.ttl = 59654U;
    msg.code = 124U;
    msg.destination.assign("THZWRJKUNQJDQZPLZUWSCEPAKFBJLCNUYFRZGVENANBBCSLQMLGYKWAJBSLROWIUJWLSHXCUFHKNYBEPIYHTGYVCLLZARHIXIOEBHVUTDNHPSDJPDY");
    msg.source.assign("DAXIWWYYCIZIXMCUKAZWNDJBUSBRHEMSONCDXHAXZCCFHKVWEPKEIAXSHOJUZJZMCWJOULNTOTKEKOQNFIPXFAU");
    msg.acknowledge = 120U;
    msg.status = 210U;
    const signed char tmp_msg_0[] = {-92, 75, 62, -12, 12, -9, -120, 71, 45, -93, -22, 115, -39, 118, -27, -91, -91, 11, -95, -110, 74, -125, 42, -17, 26, 36, 7, 112, -113, -1, -80, 16, 48, -10, 68, -9};
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
    msg.setTimeStamp(0.2048073347592777);
    msg.setSource(53928U);
    msg.setSourceEntity(1U);
    msg.setDestination(34702U);
    msg.setDestinationEntity(143U);
    msg.type = 202U;
    msg.req_id = 3062767830U;
    msg.ttl = 3596U;
    msg.code = 154U;
    msg.destination.assign("YHCXMSMUZECVFBBQHTZSBYQDDPPTPHWVNEJGTUFFRCYPRAKBTDWDBKPLJZIPODHRWNYMZPYCWGWVVHKHIKXKBXJYACEFXVQPGUNVFSGKOSNDFQTVXSNQEANCUDWLMNILMBYOPYBLMLFAUQOOTJAKZZIKWTQXATRKJ");
    msg.source.assign("EXZMAOFLFYCTXHXWNSMEVYPZHXUWGDHKLPHXNWEDOAXVBQZZMBQMISBOXYGIJFCQNLHKBKSNVYKXZTZJRKCPVGQJCZMVNIESTPGPHAAHODEDIIALICQJNRDRFVBPQRQTRFVERH");
    msg.acknowledge = 186U;
    msg.status = 9U;
    const signed char tmp_msg_0[] = {-28, -24, 52, -127, 106, 77, 90, 114, 99, 123, -38, -39, -81, 61, -55, 45, -106, 75, -109, 19, -100, -25, -42, -121, 77, 53, -60, -116, -121, -48};
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
    msg.setTimeStamp(0.708661491922816);
    msg.setSource(42173U);
    msg.setSourceEntity(147U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(235U);
    msg.id = 152U;
    msg.range = 0.31535223799352796;

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
    msg.setTimeStamp(0.7599892182856105);
    msg.setSource(54552U);
    msg.setSourceEntity(28U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(21U);
    msg.id = 233U;
    msg.range = 0.16750340177870904;

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
    msg.setTimeStamp(0.6858597617874613);
    msg.setSource(32185U);
    msg.setSourceEntity(236U);
    msg.setDestination(49897U);
    msg.setDestinationEntity(127U);
    msg.id = 196U;
    msg.range = 0.09230644587582237;

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
    msg.setTimeStamp(0.8873642678046064);
    msg.setSource(47522U);
    msg.setSourceEntity(88U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(23U);
    msg.beacon.assign("IKEAWWZDTVUFPQGFMRCRRMSCSY");
    msg.lat = 0.11407652609538754;
    msg.lon = 0.8441313035011992;
    msg.depth = 0.47124346434351005;
    msg.query_channel = 88U;
    msg.reply_channel = 233U;
    msg.transponder_delay = 225U;

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
    msg.setTimeStamp(0.22660915005861337);
    msg.setSource(32898U);
    msg.setSourceEntity(171U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(104U);
    msg.beacon.assign("BHQWRZCLIFISKMPDJOADNXOJRRGSMATIMWYZFSUPAFKWQLQUDWNMMKRJYCYGCLUQNNXYQTMXEYFJFNKDUBZKDUCNLVJ");
    msg.lat = 0.557943132664765;
    msg.lon = 0.6110900758467698;
    msg.depth = 0.7183324115938604;
    msg.query_channel = 5U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 198U;

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
    msg.setTimeStamp(0.5889818153297169);
    msg.setSource(46075U);
    msg.setSourceEntity(79U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(138U);
    msg.beacon.assign("XDHMOCDFPTYUEGOBTVJLGXREWATIKZQOHEJXFFWUVXBJIKFCQQBCGTETRMMQIYYIRJBAPZAAAPTNKCNMBLGPBMJIQMCISDLHTSVOWNOFYBRSWODPVRVYTCZCLFGSSFISNDVEHWLKYEPZNUSVXLHXEATUVRGONGBALQROVENZXZ");
    msg.lat = 0.9549233408745643;
    msg.lon = 0.7881828169447309;
    msg.depth = 0.5314933697927281;
    msg.query_channel = 21U;
    msg.reply_channel = 86U;
    msg.transponder_delay = 118U;

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
    msg.setTimeStamp(0.44040947113556717);
    msg.setSource(6437U);
    msg.setSourceEntity(17U);
    msg.setDestination(4682U);
    msg.setDestinationEntity(187U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.5196546886095175);
    msg.setSource(57283U);
    msg.setSourceEntity(130U);
    msg.setDestination(28016U);
    msg.setDestinationEntity(116U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.5857207650420299);
    msg.setSource(42610U);
    msg.setSourceEntity(90U);
    msg.setDestination(4217U);
    msg.setDestinationEntity(236U);
    msg.op = 210U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XDWHCFZCIYIGENQHZKVQTZXNFFCNPGURKDHUJKGSFLTOWKXTJNPFPOHZCOYCPPRJYITVBSQTXAZRMQVUTQGBVMCMBQTSCVPJBAVPSSNPIXL");
    tmp_msg_0.lat = 0.8336178741026862;
    tmp_msg_0.lon = 0.3449306205985664;
    tmp_msg_0.depth = 0.5972834185813508;
    tmp_msg_0.query_channel = 36U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 254U;
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
    msg.setTimeStamp(0.9801187089672281);
    msg.setSource(31794U);
    msg.setSourceEntity(74U);
    msg.setDestination(2974U);
    msg.setDestinationEntity(99U);
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 188U;
    tmp_msg_0.x = 64859U;
    tmp_msg_0.y = 51729U;
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
    msg.setTimeStamp(0.9497189998709028);
    msg.setSource(52440U);
    msg.setSourceEntity(163U);
    msg.setDestination(21086U);
    msg.setDestinationEntity(174U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 10060U;
    tmp_msg_0.type = 146U;
    tmp_msg_0.max_size = 15552U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.5207996645045421;
    tmp_tmp_msg_0_0.base_lon = 0.37463891431392393;
    tmp_tmp_msg_0_0.base_time = 0.006045540647474645;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 52643U;
    tmp_tmp_tmp_msg_0_0_0.priority = -122;
    tmp_tmp_tmp_msg_0_0_0.x = 16485;
    tmp_tmp_tmp_msg_0_0_0.y = 5417;
    tmp_tmp_tmp_msg_0_0_0.z = 198;
    tmp_tmp_tmp_msg_0_0_0.t = -28835;
    IMC::VSWR tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.6341435276722146;
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5681871694594833);
    msg.setSource(34897U);
    msg.setSourceEntity(67U);
    msg.setDestination(31134U);
    msg.setDestinationEntity(103U);
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.7024252085752192);
    msg.setSource(8378U);
    msg.setSourceEntity(129U);
    msg.setDestination(4862U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.21066213488749286;
    msg.lon = 0.04577438766934727;
    msg.depth = 0.42852150859355764;
    msg.sentence.assign("CJUJEZHVMNDPCEFYIEKKNXRJIPPELDUOBUSHWXHTXUNNEMVCSZNRUMHZIZYGOVDELIKGMFNMQSWATZCVYSXTIGFBAMPIXBNMDYJWKZRLAYAFAKUSRHWKGCGHYBGOSLQYQFVMOEOYLOJWOABGKUDHQWLQFTKCJJHCGEXIAAXTDJNRTWAZHYTXRZFFBCPDTAOVSDQDLPQXLQPSCVD");
    msg.txtime = 0.5911064699738057;
    msg.modem_type.assign("YTEAJALSJZRHSFGUESEWLBDNDSJGDBVPEXVDUWOQDMRH");
    msg.sys_src.assign("PJVNNCOLZGWHWGDFJYEIZSQDSICEIQPUVSQPGTQCJQAHCJCYOPHXZAIRRZFACITZTBHUPLKKFIHMUEZKHZGQVAPWLOHVELQNRQALCPNEDUFGSDYJKSVOGTWHSYRRORRFYPLNVSNAMOLRYTAMOMFTMIEUKG");
    msg.seq = 63854U;
    msg.sys_dst.assign("XFJKVDHAYIMXDDDAEJRAMFXNYMTDURNEBABXRPVPULSQYEYWMROHQSCTZXKSGEWHKGCPANZBHEHVTVVQTKUHZKONTWYBEJAJPFOVSSBMYINPJCBGQLPDUCZHQIKFYQVBIMRTJOEFCVOHGOLRVUZTFSQLWPQDRAWEINAOOOQZHKDGLFMTXBBPLHCURIMTGXIPWEOUSZCAZNFSMIJWGETJGYZ");
    msg.flags = 75U;
    const signed char tmp_msg_0[] = {-29, -45, -1, -9, 103, 60, -116, -1, -53, 49, 82, -101, 61, -3, -66, -11, -41, -107, -51, 115, 113, 124, -60, -33, -83, -20, -119, -8, 84, 103, 26, -99, 124, -122, -18, 73, 18, 80, -66, -98, -13, 15, -120, -21};
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
    msg.setTimeStamp(0.3191207483974331);
    msg.setSource(45149U);
    msg.setSourceEntity(133U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.5567708205402804;
    msg.lon = 0.6244158741335348;
    msg.depth = 0.2805336983718574;
    msg.sentence.assign("QFYFWBURPTAGTAUGIXMZIPQFYMBYUBGYXEPLSWSDINOQULTRHALUKN");
    msg.txtime = 0.09540605666086543;
    msg.modem_type.assign("XEFYGRRRVWQODTNAHJXEZDNVVXLIJQRFEDLZCCNJOTHWOSUHLLSJYHACKBCTDNFADEZRYSRIRAZUMCYKUQEVPGEIUGDUGOMKZWETCSZAFRYIQHMLDCULXALBMFKHZFSLIWAWBZMPVBTPVOIOVSADMUUDAFDBFWBKJGPQCRCONJGXCNFZNIXSQOABWTEXIHYEPQPKJTSKYTVPJHOMBXQOXPWKSWETZIKIYNYLWVNGBKTPLJH");
    msg.sys_src.assign("VMSSOKNABMBEWYBSDYZTPIHWACWEZTYHGXBFKWHIHORPJVGESMXJENAIBKZFOU");
    msg.seq = 64691U;
    msg.sys_dst.assign("UQJEQSBTVGEVRPFNICBLSDMNIIUBJGZRCVZTEZAAMYFROSLMNZJNHMAGVBZWYPWFXMCLOWBAEJHZPRIKGTMLYGRHSKDYMNBMLUGTCHGKULXQQDKEOEFZNFRPCOCCVXUPBDALSEUDKYKWXIKCCWHFXEENQPTBYAMXOVDAHGUBEICSJVYULJW");
    msg.flags = 173U;
    const signed char tmp_msg_0[] = {-46, 8, 78, -108, -120, -14, -88, 50, 68, -74, -62, 97, 24, 60, -62, 122, -111, 122, 16, 39, -68, -54, 45, -22, -124, -50, 82, -13, -86, 100, 0, 11, 51, -32, 81, 23, 44, 126};
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
    msg.setTimeStamp(0.2060831464752899);
    msg.setSource(27725U);
    msg.setSourceEntity(220U);
    msg.setDestination(47919U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.7673650152426938;
    msg.lon = 0.644462434282219;
    msg.depth = 0.34160349648723887;
    msg.sentence.assign("GKSNMKNBEIDWFBAVUVHCSGFKFPUIRYFLNVLUEVRRRRQDFAXKHHCQUIUGKJVJMGNLZICIVVOQUQHZBSZETKXXSJASUNVTCMICBKQBGQVWHKCUFZMZLUNJPQPEAHXWWYPOSNFSZZSSXRTXXPBWYVJZCMOEEAGMGSIBLTHJDQZKODYHCPPG");
    msg.txtime = 0.7719994715016408;
    msg.modem_type.assign("VQHMQZEYHPFQSNUXIRBPZMYEJVZLKYCKEGTFHLDDNRFOPKCEUHQNJQQVYVRMFCIHITCARNLWWKMBVNPMFVAKEZNGUKRUVXMKNSIDW");
    msg.sys_src.assign("CEDKYUEMXSIHBZFXJRHZNWFZPHXPGJSCTNQVZENKELXGRAGCLZDEBJQKFUMLYJWOQQRHGRSJAVPHUUOJSRICNSYXSDCMWWCTGHSBKJYVUEYJIQZDEWOIVYUVANYAGLRNWNLVQMIQOICVFIXFRKEFDVIMWGZPWNDHOWHJTDGVCOGMFATUOOKTXYKALGYOQTODKALHVRFZUTBMIAPQEABYCSUENLTPLKBXXRMLTSR");
    msg.seq = 12857U;
    msg.sys_dst.assign("FYCMIOETDNIYXESIZNTZWBHEOCQUQZZRYBZCJVCLVCUYJXNSRHNRFNUUOBO");
    msg.flags = 190U;
    const signed char tmp_msg_0[] = {-96, 52, 15, -101, 56, -116, -74, -43, 105, -101, -10, -114, -87, 87, -24, -113, 73, 38, -118, 51, 109, -43, 21, 8, 56, -43, 89, -124, 97, 21, 61, 86, 104, 111, -13, 23, -1, 107, -124, -98, -98, -118, -72, -71, 126, -37, 100, 58, -76, -115, -36, -75, 57, 65, -107, 29, 91, -47, -39, 47, -36, -107, 7, -2, -31, 18, -71, 100, -59, 97, -55, -97, 119, -57, 76, 69, 79, -86, 54, 41, 11, 104, -118, 86, -31, 81, 16, -61, 103, 122, -89, -53, 5, -99, -84, -4, 32, 59, -90, -13, 18, -24, 17, 82, -38, 39, 54, 104, 12, -115, 23, 123, -83, 58, -37, -34, -42, 64, -41, -68, 98, -114, 20, -60, 32, -68, -128, -126, 105, -53, -48, 64, 55, -51, 55, 31, -59, 17, -37, 54, 61, -125, -98, 115, 104, -23, -71, 54, 45, 4, 8, 117, 125, -100, -69, 96, 89, -24, 117, 44, 62, 42, -92, 23, -45, -49, -104, 75, -56, 98, -92, 27, 114, 122, -21, 75, 52, 110, 53, 17, -46, -111, -83, 108, 23, 67, -19, 92, 47, -3, -91, -19, 99, 68, -39, -1, 107, -99, -56, 14, -100, -42, 69, -63, -43, 68, 120, 2, -9, -65, 50, -118, -98, -40, -68, -25, -116, -116, -42, -26, 27, 58, 75, 48, 13, 45, 111, 32, -117, 30, -87, 100, 80, -34, 124, -108, -29, 16, 114, -12, 122, 89, -16, 103, -45, -52, 40, 109, 65, -7, 110, 4};
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
    msg.setTimeStamp(0.11236342453937276);
    msg.setSource(30115U);
    msg.setSourceEntity(22U);
    msg.setDestination(60870U);
    msg.setDestinationEntity(59U);
    msg.op = 123U;
    msg.system.assign("PYQXSOODEHIBNPCINQMWPREJAGLSACCZFFFNDLGLQEGKXHNU");
    msg.range = 0.721800955406433;
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 39115U;
    tmp_msg_0.sys.assign("CFCXBODRQWDXACYEYMUFQDSZHMRAGGEVRDNTDNNGPKSRCZQPQCJJDENIHBQEVILVGEVTEFLZINHKSGYKLJUODF");
    tmp_msg_0.value = 0.17207250566135535;
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
    msg.setTimeStamp(0.03568880923155138);
    msg.setSource(3084U);
    msg.setSourceEntity(180U);
    msg.setDestination(61421U);
    msg.setDestinationEntity(202U);
    msg.op = 80U;
    msg.system.assign("OLSKDOVFHNATUPX");
    msg.range = 0.113061902499209;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("ZHYWTXTYUPXQDZBGMCHPDQQFPDORRQQTBUXVOIFPVZKLKENSHARBFJQDRVJKLANNUIIUBGMIOT");
    tmp_msg_0.state = 111U;
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
    msg.setTimeStamp(0.30907757522028745);
    msg.setSource(38174U);
    msg.setSourceEntity(100U);
    msg.setDestination(30133U);
    msg.setDestinationEntity(146U);
    msg.op = 64U;
    msg.system.assign("ZFWVHTYODSBOIINIICVPUSYFGLCKMQRBMKQERWWBXUFLMHPKZGMTIZQUELKUZYCDQHGGQEIAZHEANPZODGIQBYOMSNRBLCTODKPBTNBMJJFNKBAOUPJSNCXJLACKYRWJWSGPSGTVZZLXLMSEVBRJGIJTQALYEPRQAYHOIUJUGFRTHAJHONKNOWQSYCVCFUXP");
    msg.range = 0.28831329463881117;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.16819075324194022;
    tmp_msg_0.dist_min_abs = 0.7523107469283977;
    tmp_msg_0.dist_min_mean = 0.5854865492647142;
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
    msg.setTimeStamp(0.22790760516016773);
    msg.setSource(64607U);
    msg.setSourceEntity(220U);
    msg.setDestination(45099U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.5599714830493978);
    msg.setSource(8484U);
    msg.setSourceEntity(98U);
    msg.setDestination(41193U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.9840426481891866);
    msg.setSource(18767U);
    msg.setSourceEntity(47U);
    msg.setDestination(33006U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.4782573574578264);
    msg.setSource(44747U);
    msg.setSourceEntity(87U);
    msg.setDestination(34404U);
    msg.setDestinationEntity(180U);
    msg.list.assign("LUXNSZZSNZQHJNCEIMLZDSYRCHBLZYYMKQGKRTCRHUBZRXNLUUZBWPTTUTYOASTJBEHPGYWWXXZQJKFGJQFFAOHVPLURDXNKVMWGPTJJVCGTVDFBBRERAPMUKQCSONLWJEDTIIVTP");

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
    msg.setTimeStamp(0.9528566364153161);
    msg.setSource(33003U);
    msg.setSourceEntity(242U);
    msg.setDestination(19372U);
    msg.setDestinationEntity(224U);
    msg.list.assign("LUUNMOBOSHDHJOPDDYVGPKUDEIUNZRAPHVRREJSQHYUYGFKCWMRKOFXEBFFFONKNNSQKWZDEHRCSTQAIMIDQXLBCOJSHPCWBOMFSZMACWTQZYLQES");

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
    msg.setTimeStamp(0.736707223883248);
    msg.setSource(16873U);
    msg.setSourceEntity(63U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(5U);
    msg.list.assign("TBIKYNXCGOKROSWRARWSOGXDEFTRAZNXTWQXMBKCYDLHZQLOGPOIKGJUHPZCFYARAADBPSOQULSYSUUQJIFMKOKPR");

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
    msg.setTimeStamp(0.6050345038770752);
    msg.setSource(30943U);
    msg.setSourceEntity(31U);
    msg.setDestination(42368U);
    msg.setDestinationEntity(200U);
    msg.peer.assign("VTLRRXEHJFFSHLUBUISMYNPVEZKXTUCBUGBAIQVZHWCKYIWISPRYUBWZGEBHJFPVKEQOUMKLSTPBTCUSXPCNEANQQLFGKNJHDQBYTKTWWOVUNZCGATWXJFTGCDHXLDYKMLSHOYAMELMQAWLHINZOHWDDGPLKESBSQYRXFJUIJFHAFVMCJROCZOVYPADBVNJPMICXKOKGWAAQOQETRTOJCRAXSSRDRGEYWMIGVMEINUBJFOZL");
    msg.rssi = 0.5236534578776534;
    msg.integrity = 11636U;

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
    msg.setTimeStamp(0.20551624209636932);
    msg.setSource(7490U);
    msg.setSourceEntity(54U);
    msg.setDestination(24391U);
    msg.setDestinationEntity(103U);
    msg.peer.assign("OGYJIZPBURFHYPVMAVNXWNYLLTBCZKSHEZSOLKGXF");
    msg.rssi = 0.0983926881138999;
    msg.integrity = 12711U;

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
    msg.setTimeStamp(0.505665553513202);
    msg.setSource(58928U);
    msg.setSourceEntity(74U);
    msg.setDestination(806U);
    msg.setDestinationEntity(158U);
    msg.peer.assign("RLYVMJNOIQACUSSKHPXHLKQSZVBGBITJOEGILWKQUTBJQLFAMEULBEVSREXDOFAWSISKDJFXDEGMRZSWEENYHSWBPCUQDORNFJYVZUHFVHRXLMAWIWNKMRODQZCSAFTIYMGMZTLVDGKJVNKOITSHCZXLPAQGCYHVNTMMTJJUPWGGVJLBMAEPPFPZNLOJXWNHVRNDFGWXCTQROXTBCOGBAYYXPUBTAWKFCZIDQDBXFPYIUCQPUKZEN");
    msg.rssi = 0.8616213254890103;
    msg.integrity = 35773U;

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
    msg.setTimeStamp(0.6566038930197625);
    msg.setSource(288U);
    msg.setSourceEntity(179U);
    msg.setDestination(65413U);
    msg.setDestinationEntity(16U);
    msg.req_id = 32759U;
    msg.destination.assign("SVBAIVKXMRBHIDLDWCBEDBNZJJSRGPPWGPRCDGXSAZSAHCNULTWXFILTHHBZNFERZPOKVWVZMJNJLMKDWZYYJHUNDSFTGXBFFVAKRHNTOROYMXIQAZQSOIGGAEWXKGXCPQHIKVNPIWCIJYMNJPAYTOUJZCFEQFMWEROUYALGEQFZONDGLMIQJXJYXRVTCERBTQULTHEPFYHBWWLAQTUKYDBPEOKIGMKBO");
    msg.timeout = 0.056906191799198536;
    msg.range = 0.7108753381891288;
    msg.type = 62U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.1797766523259593;
    tmp_tmp_msg_0_0.lon = 0.5543749826811274;
    tmp_tmp_msg_0_0.height = 0.6369167897760213;
    tmp_tmp_msg_0_0.x = 0.8556697379100502;
    tmp_tmp_msg_0_0.y = 0.6001601622049337;
    tmp_tmp_msg_0_0.z = 0.30874847495845104;
    tmp_tmp_msg_0_0.phi = 0.014733413376477822;
    tmp_tmp_msg_0_0.theta = 0.2207007124925925;
    tmp_tmp_msg_0_0.psi = 0.0565985677106462;
    tmp_tmp_msg_0_0.u = 0.23892344189581605;
    tmp_tmp_msg_0_0.v = 0.942582099858371;
    tmp_tmp_msg_0_0.w = 0.6958546419532254;
    tmp_tmp_msg_0_0.vx = 0.8179160617901186;
    tmp_tmp_msg_0_0.vy = 0.06449234660638659;
    tmp_tmp_msg_0_0.vz = 0.16817285004863858;
    tmp_tmp_msg_0_0.p = 0.38204503582000515;
    tmp_tmp_msg_0_0.q = 0.5993628720364312;
    tmp_tmp_msg_0_0.r = 0.22594540417292286;
    tmp_tmp_msg_0_0.depth = 0.10287406439887892;
    tmp_tmp_msg_0_0.alt = 0.2954540704861196;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 155U;
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
    msg.setTimeStamp(0.4199237074957166);
    msg.setSource(7740U);
    msg.setSourceEntity(216U);
    msg.setDestination(32805U);
    msg.setDestinationEntity(124U);
    msg.req_id = 16408U;
    msg.destination.assign("ONUBVYIVLIMSNXPPATDXOUJBJUNNYTAHBOJHATSXMFCHUZVUDGCGXEVYZLNAQFRKNDZDHADHFERCBPXKQXMVRQYCBHDHBUDTPYZWJGWEQDEGSDLFAEVIRPBGZPLCCQQHQIOSALTPAWPUWLJXNINEJWSFJMTYIKKGCIYKVZARWRMLTTWNXYTKDKBCVXZOYALFKMURHLZEGXNFVFWPSVBQGJIZOOFMFCISOQGB");
    msg.timeout = 0.21816297195514034;
    msg.range = 0.4368273669360563;
    msg.type = 203U;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.43399476483310184;
    tmp_msg_0.y = 0.13915002233062324;
    tmp_msg_0.z = 0.20406020810307313;
    tmp_msg_0.k = 0.6189333067757045;
    tmp_msg_0.m = 0.2322264578241272;
    tmp_msg_0.n = 0.10635405292544442;
    tmp_msg_0.flags = 198U;
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
    msg.setTimeStamp(0.5911303297772291);
    msg.setSource(51721U);
    msg.setSourceEntity(11U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(36U);
    msg.req_id = 12964U;
    msg.destination.assign("NXPCSIKWSVGECJNELAKICOYOEBSPUUZQZRDFLXTHLDRGGCQHWIYGFXBDBMGRSOHMMYVCWEUYCSHUATDZVIGWIHSCWFMSLTJFUVLWUNKXWRYPBPWDQMNJKAIONDGVUS");
    msg.timeout = 0.07521610111549137;
    msg.range = 0.03398351115361087;
    msg.type = 96U;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.05301100222137578;
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
    msg.setTimeStamp(0.7403240766354624);
    msg.setSource(7983U);
    msg.setSourceEntity(56U);
    msg.setDestination(56211U);
    msg.setDestinationEntity(110U);
    msg.req_id = 51001U;
    msg.type = 51U;
    msg.status = 67U;
    msg.info.assign("AVHKXHLKDYAQXFKHMEKNCBBKTOCEHZIUOTAOJBNTGNWGFYPKEEUEFQZDKPSJGJASHAFRXQIUQSRDHMHOBPIYPRERDLJQIVTXATWMALOONNZOMLKPIKBXJRTCXVNIRVJDZALZUMSNIPFCRVWLYDZHCTSLUFZQDMYVPBHGYGEUDJIFDNSXFQRGQMBGVIBGWIHXLACSAUPJZGNYLSVTJNZCVEUVXPEREGORWSXOQUYSBQMCYJFWTCMTZUWKWFC");
    msg.range = 0.5114763021172557;

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
    msg.setTimeStamp(0.2488683486477299);
    msg.setSource(21063U);
    msg.setSourceEntity(198U);
    msg.setDestination(18900U);
    msg.setDestinationEntity(199U);
    msg.req_id = 53082U;
    msg.type = 112U;
    msg.status = 67U;
    msg.info.assign("TJIBOWDMLYPGEUSTGSCSNQTIZGJEQKZONQCDPKQBSSTXEEVVGDBMHUWBGFDQVUAZMOODXXAWDHXVWLUFLBAJVIVKKPUMFCHGJOMINOZFRZBEFIPZFSDLNFRUIWYAVGJNRMTWXGCODJSRRHKHHCQWEGHXVPPRTGBRXZQAMTCVUUWYAHEVQBLAZHPCXXAMQMZHYJDXUOESALWJOCATSPYNFLBBZRYDINWTNJLIYQPYKLRNFRKK");
    msg.range = 0.09647115578287346;

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
    msg.setTimeStamp(0.11348275107107053);
    msg.setSource(11338U);
    msg.setSourceEntity(143U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(89U);
    msg.req_id = 56142U;
    msg.type = 38U;
    msg.status = 153U;
    msg.info.assign("VLHSJTSTXVAFTLFGXBGWDKLSOIVNJHVOZEANBATBYMROVSVHEYPZKJEKNRZTXUASAIWBPQCOSFFMLWDFCSZFEZIXFYRNCUWURGDNDCGUGGCSBJUBQGTCIFQTHNPNTYLIHGIYPMXKSYJLNEXPKMRPYWVMUWXLLJ");
    msg.range = 0.14573325037755847;

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
    msg.setTimeStamp(0.8333756125129049);
    msg.setSource(61045U);
    msg.setSourceEntity(197U);
    msg.setDestination(65313U);
    msg.setDestinationEntity(117U);
    msg.system.assign("ISPGWRAJKDWKECLILFFOJDHJFCTNFHTZHHFEGAMJPTYMSSBXPCCLMEXEEPJUQSLVOKPUFNSIQLINDDURXSZBVMNLBHYKOKGRUYORCQYGZDOEXEKWK");
    msg.op = 252U;

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
    msg.setTimeStamp(0.20772437373606834);
    msg.setSource(63100U);
    msg.setSourceEntity(198U);
    msg.setDestination(16775U);
    msg.setDestinationEntity(18U);
    msg.system.assign("ETQNXKWRWRFLIRCKZBZFWFVNIYDCYEQPYULOLROARXAWWGYTYGVRLUBJZAIKGILGSGHHHKMDXOLSEDLEEWFBJPEYNWJJQWKFCIQCQPJONZJCMVLYRQQSGZBHUVCBKHBHMTXJHZMNNBRFYFHWTIZAMAEXTDPODZOSPSKSXCPVKU");
    msg.op = 111U;

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
    msg.setTimeStamp(0.6178423418108151);
    msg.setSource(59255U);
    msg.setSourceEntity(66U);
    msg.setDestination(28673U);
    msg.setDestinationEntity(71U);
    msg.system.assign("RPCFZVOTJTNLRJWNLOGSLOUWHZSYAMEGEYXLURWDQQEMGSVXCVXBEQJYSJEPMGDWHGWJYJXSZTCHIJFWCZDLSIGMFAPVBOYECLLREW");
    msg.op = 163U;

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
    msg.setTimeStamp(0.2514367388230436);
    msg.setSource(53447U);
    msg.setSourceEntity(79U);
    msg.setDestination(58572U);
    msg.setDestinationEntity(52U);
    msg.value = -28756;

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
    msg.setTimeStamp(0.014922341516573012);
    msg.setSource(60692U);
    msg.setSourceEntity(203U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(8U);
    msg.value = -20418;

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
    msg.setTimeStamp(0.9885632876667171);
    msg.setSource(18001U);
    msg.setSourceEntity(24U);
    msg.setDestination(53230U);
    msg.setDestinationEntity(175U);
    msg.value = -30339;

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
    msg.setTimeStamp(0.9135847416878813);
    msg.setSource(26996U);
    msg.setSourceEntity(229U);
    msg.setDestination(51791U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9673538868334847;

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
    msg.setTimeStamp(0.9902912625097549);
    msg.setSource(43084U);
    msg.setSourceEntity(150U);
    msg.setDestination(29730U);
    msg.setDestinationEntity(66U);
    msg.value = 0.38107982833855303;

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
    msg.setTimeStamp(0.4903759682160276);
    msg.setSource(2630U);
    msg.setSourceEntity(194U);
    msg.setDestination(19757U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7282672361592872;

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
    msg.setTimeStamp(0.6833412295155367);
    msg.setSource(60803U);
    msg.setSourceEntity(164U);
    msg.setDestination(62361U);
    msg.setDestinationEntity(59U);
    msg.value = 0.858529227388567;

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
    msg.setTimeStamp(0.05655019139101458);
    msg.setSource(55942U);
    msg.setSourceEntity(82U);
    msg.setDestination(50483U);
    msg.setDestinationEntity(152U);
    msg.value = 0.9152050117427959;

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
    msg.setTimeStamp(0.3203967862943048);
    msg.setSource(63638U);
    msg.setSourceEntity(68U);
    msg.setDestination(49413U);
    msg.setDestinationEntity(149U);
    msg.value = 0.4667562421115846;

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
    msg.setTimeStamp(0.5148302879292082);
    msg.setSource(65337U);
    msg.setSourceEntity(213U);
    msg.setDestination(40303U);
    msg.setDestinationEntity(242U);
    msg.validity = 32422U;
    msg.type = 67U;
    msg.utc_year = 29177U;
    msg.utc_month = 22U;
    msg.utc_day = 234U;
    msg.utc_time = 0.6097092942344507;
    msg.lat = 0.84238322673078;
    msg.lon = 0.4019465418573972;
    msg.height = 0.01673574743420214;
    msg.satellites = 254U;
    msg.cog = 0.6756268694811899;
    msg.sog = 0.6006229757197591;
    msg.hdop = 0.3255206520739089;
    msg.vdop = 0.5184546472293784;
    msg.hacc = 0.5247397877787117;
    msg.vacc = 0.7062487668080499;

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
    msg.setTimeStamp(0.5181840122793573);
    msg.setSource(13341U);
    msg.setSourceEntity(108U);
    msg.setDestination(29423U);
    msg.setDestinationEntity(131U);
    msg.validity = 6383U;
    msg.type = 163U;
    msg.utc_year = 4869U;
    msg.utc_month = 82U;
    msg.utc_day = 66U;
    msg.utc_time = 0.1657092623624501;
    msg.lat = 0.1697558741269316;
    msg.lon = 0.569674929668974;
    msg.height = 0.5372255129423285;
    msg.satellites = 103U;
    msg.cog = 0.9232717518838975;
    msg.sog = 0.0522313785333367;
    msg.hdop = 0.7406709808112931;
    msg.vdop = 0.9464715967827418;
    msg.hacc = 0.45290240053215725;
    msg.vacc = 0.2970338572863044;

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
    msg.setTimeStamp(0.2910611039624864);
    msg.setSource(16879U);
    msg.setSourceEntity(62U);
    msg.setDestination(26589U);
    msg.setDestinationEntity(104U);
    msg.validity = 49966U;
    msg.type = 126U;
    msg.utc_year = 56249U;
    msg.utc_month = 162U;
    msg.utc_day = 39U;
    msg.utc_time = 0.60520484416336;
    msg.lat = 0.27148296070428635;
    msg.lon = 0.6035520020247703;
    msg.height = 0.2122131316542334;
    msg.satellites = 215U;
    msg.cog = 0.12968448433123692;
    msg.sog = 0.955847252568547;
    msg.hdop = 0.9843382990094057;
    msg.vdop = 0.9023021606906082;
    msg.hacc = 0.8581706650985779;
    msg.vacc = 0.08043757349078817;

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
    msg.setTimeStamp(0.5639922378114933);
    msg.setSource(8329U);
    msg.setSourceEntity(42U);
    msg.setDestination(48410U);
    msg.setDestinationEntity(59U);
    msg.time = 0.1048826088749627;
    msg.phi = 0.04035388719769495;
    msg.theta = 0.2180318388306376;
    msg.psi = 0.40668177710668296;
    msg.psi_magnetic = 0.06969078268879447;

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
    msg.setTimeStamp(0.15643568933274765);
    msg.setSource(32631U);
    msg.setSourceEntity(140U);
    msg.setDestination(43559U);
    msg.setDestinationEntity(21U);
    msg.time = 0.7889974901320601;
    msg.phi = 0.27062923050550447;
    msg.theta = 0.26580231409448984;
    msg.psi = 0.06788726133175438;
    msg.psi_magnetic = 0.9434175121503411;

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
    msg.setTimeStamp(0.2085955862371539);
    msg.setSource(22383U);
    msg.setSourceEntity(214U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(252U);
    msg.time = 0.31825939170784123;
    msg.phi = 0.6695445136072153;
    msg.theta = 0.7820462635834555;
    msg.psi = 0.39831909291744916;
    msg.psi_magnetic = 0.17193313114845643;

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
    msg.setTimeStamp(0.6223719851847214);
    msg.setSource(48247U);
    msg.setSourceEntity(48U);
    msg.setDestination(64478U);
    msg.setDestinationEntity(253U);
    msg.time = 0.01484547530537672;
    msg.x = 0.9861522166049422;
    msg.y = 0.19817721615973882;
    msg.z = 0.9424507474866715;
    msg.timestep = 0.5273697181982226;

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
    msg.setTimeStamp(0.14966385961406847);
    msg.setSource(15700U);
    msg.setSourceEntity(225U);
    msg.setDestination(29808U);
    msg.setDestinationEntity(2U);
    msg.time = 0.9619720114648674;
    msg.x = 0.5980388643703026;
    msg.y = 0.5950078068469582;
    msg.z = 0.8178983640014402;
    msg.timestep = 0.061878998976225286;

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
    msg.setTimeStamp(0.6295555846758848);
    msg.setSource(10302U);
    msg.setSourceEntity(39U);
    msg.setDestination(5419U);
    msg.setDestinationEntity(225U);
    msg.time = 0.9962886596353514;
    msg.x = 0.9979564734748878;
    msg.y = 0.7605922620185979;
    msg.z = 0.3098882986802677;
    msg.timestep = 0.5744594011999778;

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
    msg.setTimeStamp(0.8697842700404981);
    msg.setSource(25910U);
    msg.setSourceEntity(84U);
    msg.setDestination(39276U);
    msg.setDestinationEntity(124U);
    msg.time = 0.20924798982192028;
    msg.x = 0.2713162881545508;
    msg.y = 0.5445151996266885;
    msg.z = 0.4532653487852698;

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
    msg.setTimeStamp(0.02878758814393323);
    msg.setSource(48852U);
    msg.setSourceEntity(93U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(195U);
    msg.time = 0.7274186592074818;
    msg.x = 0.2826166896860782;
    msg.y = 0.3186344469253648;
    msg.z = 0.774737269060731;

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
    msg.setTimeStamp(0.8919534831180775);
    msg.setSource(8910U);
    msg.setSourceEntity(216U);
    msg.setDestination(15689U);
    msg.setDestinationEntity(34U);
    msg.time = 0.8045524076639218;
    msg.x = 0.5482693997730841;
    msg.y = 0.5428962722193523;
    msg.z = 0.3068590171246911;

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
    msg.setTimeStamp(0.8991779318774965);
    msg.setSource(12401U);
    msg.setSourceEntity(167U);
    msg.setDestination(42874U);
    msg.setDestinationEntity(71U);
    msg.time = 0.824653787445284;
    msg.x = 0.7915784380301025;
    msg.y = 0.9127675385706149;
    msg.z = 0.9637586467133582;

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
    msg.setTimeStamp(0.7073722900190722);
    msg.setSource(24978U);
    msg.setSourceEntity(183U);
    msg.setDestination(28015U);
    msg.setDestinationEntity(87U);
    msg.time = 0.02213409796706034;
    msg.x = 0.3784329525772626;
    msg.y = 0.022451872869895695;
    msg.z = 0.035836766757709526;

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
    msg.setTimeStamp(0.4560172485853118);
    msg.setSource(21380U);
    msg.setSourceEntity(246U);
    msg.setDestination(29056U);
    msg.setDestinationEntity(0U);
    msg.time = 0.6035530286838072;
    msg.x = 0.6426746194691106;
    msg.y = 0.8094580214234542;
    msg.z = 0.5602229008201938;

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
    msg.setTimeStamp(0.5636488963546649);
    msg.setSource(39928U);
    msg.setSourceEntity(45U);
    msg.setDestination(42496U);
    msg.setDestinationEntity(213U);
    msg.time = 0.44004487672285997;
    msg.x = 0.3089422561936286;
    msg.y = 0.17767943138890097;
    msg.z = 0.5962070353044618;

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
    msg.setTimeStamp(0.6898946600700795);
    msg.setSource(36159U);
    msg.setSourceEntity(3U);
    msg.setDestination(7353U);
    msg.setDestinationEntity(126U);
    msg.time = 0.6230559023246068;
    msg.x = 0.1685920901408452;
    msg.y = 0.6400377563137221;
    msg.z = 0.515706000865897;

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
    msg.setTimeStamp(0.43034232900417013);
    msg.setSource(4541U);
    msg.setSourceEntity(142U);
    msg.setDestination(33724U);
    msg.setDestinationEntity(134U);
    msg.time = 0.5444866937401687;
    msg.x = 0.9375330057268552;
    msg.y = 0.14857338837019918;
    msg.z = 0.06710724103247179;

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
    msg.setTimeStamp(0.5981679728079573);
    msg.setSource(53045U);
    msg.setSourceEntity(117U);
    msg.setDestination(48813U);
    msg.setDestinationEntity(41U);
    msg.validity = 241U;
    msg.x = 0.7044098562946758;
    msg.y = 0.0852126415771215;
    msg.z = 0.756446066281507;

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
    msg.setTimeStamp(0.15033064829911724);
    msg.setSource(63232U);
    msg.setSourceEntity(40U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(121U);
    msg.validity = 44U;
    msg.x = 0.8593218453560197;
    msg.y = 0.7001051383015612;
    msg.z = 0.2698576433582863;

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
    msg.setTimeStamp(0.9947292090752605);
    msg.setSource(8822U);
    msg.setSourceEntity(95U);
    msg.setDestination(6017U);
    msg.setDestinationEntity(137U);
    msg.validity = 112U;
    msg.x = 0.8919578599164949;
    msg.y = 0.4816405418438894;
    msg.z = 0.524716322573565;

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
    msg.setTimeStamp(0.7273119031753225);
    msg.setSource(44019U);
    msg.setSourceEntity(252U);
    msg.setDestination(15282U);
    msg.setDestinationEntity(221U);
    msg.validity = 48U;
    msg.x = 0.019696103312750957;
    msg.y = 0.10041221432132108;
    msg.z = 0.770259886714003;

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
    msg.setTimeStamp(0.29843207555579354);
    msg.setSource(12215U);
    msg.setSourceEntity(25U);
    msg.setDestination(8857U);
    msg.setDestinationEntity(46U);
    msg.validity = 54U;
    msg.x = 0.07406982867079559;
    msg.y = 0.3554316841481777;
    msg.z = 0.9023530140646248;

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
    msg.setTimeStamp(0.4794997942598158);
    msg.setSource(19596U);
    msg.setSourceEntity(95U);
    msg.setDestination(61957U);
    msg.setDestinationEntity(145U);
    msg.validity = 133U;
    msg.x = 0.9972638335422015;
    msg.y = 0.2937653122599998;
    msg.z = 0.5796575813083462;

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
    msg.setTimeStamp(0.1252606657677109);
    msg.setSource(42612U);
    msg.setSourceEntity(226U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(106U);
    msg.time = 0.5549979592665982;
    msg.x = 0.03292257347002092;
    msg.y = 0.12256732994612707;
    msg.z = 0.42994806059355317;

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
    msg.setTimeStamp(0.8044244127956407);
    msg.setSource(34214U);
    msg.setSourceEntity(103U);
    msg.setDestination(42522U);
    msg.setDestinationEntity(85U);
    msg.time = 0.3698573467394375;
    msg.x = 0.9769051455934803;
    msg.y = 0.7750052271548231;
    msg.z = 0.8907059400655928;

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
    msg.setTimeStamp(0.6288902489611446);
    msg.setSource(40740U);
    msg.setSourceEntity(148U);
    msg.setDestination(17753U);
    msg.setDestinationEntity(130U);
    msg.time = 0.15721676467518175;
    msg.x = 0.8600583548387547;
    msg.y = 0.4523222553866837;
    msg.z = 0.163746332371553;

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
    msg.setTimeStamp(0.4744458217712816);
    msg.setSource(61937U);
    msg.setSourceEntity(234U);
    msg.setDestination(16866U);
    msg.setDestinationEntity(4U);
    msg.validity = 25U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8014068448619887;
    tmp_msg_0.beam_height = 0.4313392394218907;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0899990447431186;

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
    msg.setTimeStamp(0.7350668065426088);
    msg.setSource(58065U);
    msg.setSourceEntity(190U);
    msg.setDestination(20535U);
    msg.setDestinationEntity(136U);
    msg.validity = 60U;
    msg.value = 0.04280030166018001;

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
    msg.setTimeStamp(0.39039819913039475);
    msg.setSource(5214U);
    msg.setSourceEntity(155U);
    msg.setDestination(42696U);
    msg.setDestinationEntity(9U);
    msg.validity = 31U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2778118506302749;
    tmp_msg_0.y = 0.1101744069226932;
    tmp_msg_0.z = 0.6259127475754541;
    tmp_msg_0.phi = 0.44691633933486197;
    tmp_msg_0.theta = 0.7297681398186223;
    tmp_msg_0.psi = 0.2018168491354123;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.11026448914187159;
    tmp_msg_1.beam_height = 0.9201693794749288;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.187300554508825;

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
    msg.setTimeStamp(0.11112477063983861);
    msg.setSource(58790U);
    msg.setSourceEntity(167U);
    msg.setDestination(41837U);
    msg.setDestinationEntity(180U);
    msg.value = 0.20489798566323503;

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
    msg.setTimeStamp(0.12116486434228668);
    msg.setSource(61769U);
    msg.setSourceEntity(147U);
    msg.setDestination(21604U);
    msg.setDestinationEntity(246U);
    msg.value = 0.08000842501835292;

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
    msg.setTimeStamp(0.30173108272562166);
    msg.setSource(65514U);
    msg.setSourceEntity(78U);
    msg.setDestination(3370U);
    msg.setDestinationEntity(11U);
    msg.value = 0.4530517435315552;

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
    msg.setTimeStamp(0.7671948483073632);
    msg.setSource(21319U);
    msg.setSourceEntity(217U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8082532487317422;

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
    msg.setTimeStamp(0.2295392270433445);
    msg.setSource(27616U);
    msg.setSourceEntity(244U);
    msg.setDestination(4727U);
    msg.setDestinationEntity(34U);
    msg.value = 0.2344100213059822;

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
    msg.setTimeStamp(0.15066194858526094);
    msg.setSource(12695U);
    msg.setSourceEntity(6U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(192U);
    msg.value = 0.11299610467655863;

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
    msg.setTimeStamp(0.8353060474748035);
    msg.setSource(20803U);
    msg.setSourceEntity(6U);
    msg.setDestination(33031U);
    msg.setDestinationEntity(92U);
    msg.value = 0.20209914931227557;

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
    msg.setTimeStamp(0.9309554962465413);
    msg.setSource(47840U);
    msg.setSourceEntity(233U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(32U);
    msg.value = 0.23265793349349584;

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
    msg.setTimeStamp(0.7560539217797259);
    msg.setSource(41081U);
    msg.setSourceEntity(226U);
    msg.setDestination(28167U);
    msg.setDestinationEntity(4U);
    msg.value = 0.6844327343464609;

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
    msg.setTimeStamp(0.6189861885910605);
    msg.setSource(15597U);
    msg.setSourceEntity(209U);
    msg.setDestination(26731U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5610428968357358;

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
    msg.setTimeStamp(0.6648610542348165);
    msg.setSource(47181U);
    msg.setSourceEntity(135U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(253U);
    msg.value = 0.7174291914711051;

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
    msg.setTimeStamp(0.5740701869289672);
    msg.setSource(33497U);
    msg.setSourceEntity(132U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(194U);
    msg.value = 0.869964223513197;

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
    msg.setTimeStamp(0.13033054434689717);
    msg.setSource(40174U);
    msg.setSourceEntity(134U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(216U);
    msg.value = 0.3453514709254899;

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
    msg.setTimeStamp(0.30067241132899103);
    msg.setSource(46768U);
    msg.setSourceEntity(47U);
    msg.setDestination(48023U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9323455757037893;

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
    msg.setTimeStamp(0.45726206570929806);
    msg.setSource(22362U);
    msg.setSourceEntity(243U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(107U);
    msg.value = 0.34680331315692214;

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
    msg.setTimeStamp(0.5300536278726046);
    msg.setSource(16926U);
    msg.setSourceEntity(18U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6479813405379962;

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
    msg.setTimeStamp(0.9309126782586946);
    msg.setSource(58883U);
    msg.setSourceEntity(242U);
    msg.setDestination(42493U);
    msg.setDestinationEntity(69U);
    msg.value = 0.8654431730026126;

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
    msg.setTimeStamp(0.04344795048339656);
    msg.setSource(59405U);
    msg.setSourceEntity(223U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5240305544550723;

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
    msg.setTimeStamp(0.100130261179886);
    msg.setSource(33167U);
    msg.setSourceEntity(160U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(72U);
    msg.value = 0.7691607579909698;

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
    msg.setTimeStamp(0.8039564619219254);
    msg.setSource(15844U);
    msg.setSourceEntity(93U);
    msg.setDestination(63103U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6633201876608035;

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
    msg.setTimeStamp(0.6691885221920129);
    msg.setSource(35912U);
    msg.setSourceEntity(209U);
    msg.setDestination(65390U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9638286468700197;

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
    msg.setTimeStamp(0.1564836274942536);
    msg.setSource(9052U);
    msg.setSourceEntity(167U);
    msg.setDestination(4101U);
    msg.setDestinationEntity(121U);
    msg.value = 0.21695571101379896;

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
    msg.setTimeStamp(0.6981959477046673);
    msg.setSource(48117U);
    msg.setSourceEntity(82U);
    msg.setDestination(7766U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8465837237669958;

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
    msg.setTimeStamp(0.20664144944159946);
    msg.setSource(14808U);
    msg.setSourceEntity(135U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(15U);
    msg.value = 0.37774272896170946;

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
    msg.setTimeStamp(0.12547397888882228);
    msg.setSource(43719U);
    msg.setSourceEntity(158U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(96U);
    msg.direction = 0.09604721752591161;
    msg.speed = 0.1779721960977707;
    msg.turbulence = 0.6586235642767592;

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
    msg.setTimeStamp(0.7152636369340551);
    msg.setSource(19510U);
    msg.setSourceEntity(126U);
    msg.setDestination(44731U);
    msg.setDestinationEntity(214U);
    msg.direction = 0.945827449751413;
    msg.speed = 0.28902800665861283;
    msg.turbulence = 0.5535532461852231;

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
    msg.setTimeStamp(0.2848016506969284);
    msg.setSource(37937U);
    msg.setSourceEntity(32U);
    msg.setDestination(11607U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.49975465040509615;
    msg.speed = 0.745797081464623;
    msg.turbulence = 0.2618525307944447;

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
    msg.setTimeStamp(0.0714157226265878);
    msg.setSource(37627U);
    msg.setSourceEntity(44U);
    msg.setDestination(41095U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7017199489617475;

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
    msg.setTimeStamp(0.1275895917859946);
    msg.setSource(62992U);
    msg.setSourceEntity(106U);
    msg.setDestination(53707U);
    msg.setDestinationEntity(73U);
    msg.value = 0.4576268562481842;

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
    msg.setTimeStamp(0.6436092831286289);
    msg.setSource(29674U);
    msg.setSourceEntity(204U);
    msg.setDestination(795U);
    msg.setDestinationEntity(145U);
    msg.value = 0.7558763441682894;

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
    msg.setTimeStamp(0.46882847879543277);
    msg.setSource(1521U);
    msg.setSourceEntity(144U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(234U);
    msg.value.assign("UUSJQNRZIQUZCMCJDFRBTORIOOSSYMYSNPGADHLOTL");

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
    msg.setTimeStamp(0.9650555630973268);
    msg.setSource(44622U);
    msg.setSourceEntity(79U);
    msg.setDestination(18379U);
    msg.setDestinationEntity(122U);
    msg.value.assign("ONMLZDQABFPENCHUQOFRZLFAWREPVTVIAIABYWCAQZDHGUOHISPJYGQKVUCCXQPWEFCYPZFERBKUNYWSRMLDFPHIFGVQYDIPJXWXEMJVVTLBKSMXIBIKJJVBCZWVAURGCXZGDTVKOILAQLNEQJGLDDFS");

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
    msg.setTimeStamp(0.03218954529146367);
    msg.setSource(24715U);
    msg.setSourceEntity(92U);
    msg.setDestination(51382U);
    msg.setDestinationEntity(143U);
    msg.value.assign("HRUQYQIMODRAFBPECJFNLIMOHSOYCWBZZJKLVFTFPQNKVQXIHJFVRROXCUYWXMXBDTABZSDTUEAHDWGQZSBENRCWPHIBEEHRJTNTORMMUGASARDPGMMAHDFSYRIUZNHYLKAFDYEWZCWEXXGYZVMKFGKTOTAXXEZCGLBSKOLEUVKVWNFVJCTQSTUKO");

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
    msg.setTimeStamp(0.9383320970170362);
    msg.setSource(32836U);
    msg.setSourceEntity(124U);
    msg.setDestination(25602U);
    msg.setDestinationEntity(128U);
    const signed char tmp_msg_0[] = {48, -6, -99, 92, -109, 26, 41, 69, 18, 117, -61, -118, -74, 79, -103, -52, -38, 69, -41, -33, 108, 21, -28, 72, 3, -50, -100, 122, 118, -76, -15, -49, 120, 24, 69, -52, 81, -119, -17, -48, -49, 115, 69, 113, 4, 110, -20, -72, 99, 47, 52, -66, 67, -61, -85, 92, 103, -122, -63, -92, -1, 105, 6, 21, 52, -51, 98, 124, -92, -4, 76, 102, 102, 120, 44, 60, -30, -36, 53, 111, -97, 103, -81, -106, -31, 98, 25, -11, -87, -90, -18, 116, -124, 117, 49, -89, -122, -53, -83, 30, -72, 24, 2, -21, -9, 72, -43, -1, 45, 22, -1, -124, -124, -79, 41, -49, 64, 52, 83, 126, -32, -10, -114, 10, 44, 92, -45, -14, 25, -73, -118, 91, 31, -14, -61, -90, 28, -112, 59, -125, -109, 121, 59, -23, -102, 8, -10, -24, -82, -87, -71, 30, -27, 88, -21, -22, -12, -125, 77, 47};
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
    msg.setTimeStamp(0.6470854874202664);
    msg.setSource(38316U);
    msg.setSourceEntity(84U);
    msg.setDestination(31811U);
    msg.setDestinationEntity(86U);
    const signed char tmp_msg_0[] = {-76, -74, -81, -66, -35, 104, -88, 29, 20, 40, -118, -84, 53, -5, 73, 46, -101, -74, -46, 51, 124, 2, 99, -27, -81, 20, -93, -40, 113, -67, -3, -73, -8, 63, -40, -8, 84, -33, 4, -18, 76, 93, 14, 108, -45, 50, -80, 75, -93, 103, 50, -114, 58, 65, 92, -128, 5, -61, -30, 77, -82, -82, -92, -44, -119, -76, -125, 25, -102, 91, -114, 102, 118, 119, -27, 24, -10, -14, -101, 94, 67, 87};
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
    msg.setTimeStamp(0.13934742826387336);
    msg.setSource(63535U);
    msg.setSourceEntity(108U);
    msg.setDestination(11036U);
    msg.setDestinationEntity(209U);
    const signed char tmp_msg_0[] = {63, -5, -49, 57, 58, 93, -5, -112, -113, -102, -62, 72, 33, -65, -79, 111, -103, -42, 112, 107, -90, 26, -121, -24, -102, 14, 71, -72, 51, 77, 18, -31, 61, -28, 120, -70, -5, -98, 46, -23, -121, -128, 7, -116, -61, 124, 69, -99, -23, -58, 111, 21, 21, -59, -29, 53, -40, -77, -24, 115, -4, 98, 26, 119, 10, 97, 61, 32, -99, 74, 101, 79, 29, -55, 100, -89, -10, -59, 42, 88, 126, -100, 38, 101, -81, -87, 12, -40, 75, -99, -71, 40, 32, 86, 44, -118, -119, 41, -29, -107, -7, 65, -19, -1, 9, 36, 97, -122, 5, -83, -28, 36, 69, 91, 81, 1, 1, -75, -5, 107, 5, -5, -20, 24, -21, -10, 124, -46, -58, 73, 67, 17, -19, -119, -77, -47, 84, 88, 91, -127, 47, -21, -61, 41, -76, -38, 76, 124, -80, -89, -24, -91, 126, 41, 83, -62, -82, 49, -64, -1, -106, 103, -26, 45, -38, 90, 91, 1, 58, 98, -123, 13, 89, 13, -113, 68, -7, 91, -106, -104, -121, -92, 45, 75, -115, 34, -14, 41, -8, 37, -89, 119, -75, 65, -99, -51, -31, 40, 13, -51, 102, 30, -122, 2, -51, -77, -27, 93, -11, -117, -44, 57, 97, 49, 0, -57, -95, 67, -82, -56, -31};
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
    msg.setTimeStamp(0.6774468418993274);
    msg.setSource(46167U);
    msg.setSourceEntity(100U);
    msg.setDestination(36843U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8348031125989829;

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
    msg.setTimeStamp(0.6077983594724292);
    msg.setSource(48207U);
    msg.setSourceEntity(205U);
    msg.setDestination(55856U);
    msg.setDestinationEntity(119U);
    msg.value = 0.3233268034200961;

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
    msg.setTimeStamp(0.3266832189312956);
    msg.setSource(64595U);
    msg.setSourceEntity(156U);
    msg.setDestination(52233U);
    msg.setDestinationEntity(110U);
    msg.value = 0.36442300639247793;

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
    msg.setTimeStamp(0.05879975861093745);
    msg.setSource(29965U);
    msg.setSourceEntity(172U);
    msg.setDestination(13470U);
    msg.setDestinationEntity(212U);
    msg.type = 54U;
    msg.frequency = 1541125607U;
    msg.min_range = 10432U;
    msg.max_range = 41560U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.8407623799088598;
    const signed char tmp_msg_0[] = {61, -66, -18, -110, 123, 112, 51, 36, 27, 98, 102, -48, 35, 87, -82, 44, -88, 117, 26, -85, 76, 60, -68, -9, -34, 66, -61, 104, -32, 75, 80, -94, -126, -3, 58, 63, -124, -74, -91, 53, -47, -77, -38, -60, -9, -108, 123, 11, 46, -89, -74, 100, -121, -102, -107, -61, 96, 18, 54, -14, -114, 125, 66, 104, -104, 78, -22, -85, -39, 46, 16, -66, 31, -97, -26, -74, 23, -110, -107, 70, 93, -5, 34, 95, 1, 102, 40, -18, -6, -31, -123, 81, -14, 63, -58, -71, 81, -118, 80, 93, 77, 41, -49, -115, -4, 125, 84, -1, 99, -62, 91, 58, -122, 29, 37, -70, -12, 8, 20, 76, -53, 49, 33, -99};
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
    msg.setTimeStamp(0.2204475325680959);
    msg.setSource(45976U);
    msg.setSourceEntity(114U);
    msg.setDestination(55126U);
    msg.setDestinationEntity(20U);
    msg.type = 181U;
    msg.frequency = 1584765112U;
    msg.min_range = 38U;
    msg.max_range = 11956U;
    msg.bits_per_point = 146U;
    msg.scale_factor = 0.1125375300958571;
    const signed char tmp_msg_0[] = {-21, -3, 124, -21, -4, 65, 85, 44, 35, 44, -21, 109, 125, -11, 46, 35, 89, -84, 87, -28, -61, -81, -37, -99, -110, -19, -114, 54, -71, 65, -10, -27, -52, 123, -41, -114, 65, -24, -98, -49, -70, -108, -53, 44, -95, -89, 67, -4, -59, -17, -79, -117, 13, -73, 54, -123, -80, 122, -17, -32, -36, 104, 76, 6, -79, 96, 23, 7, -2, -71, -4, 58, 18, -61, 110, 16, 17, -90, 67, 13, -47, 122, -126, 60, -8, 45, 16, 7, 44, 29, -87, 62, 69, -122, 36, -120, -121, 41, 109, -55, -109, 85, -127, 53, 87, 18, -71, 92, 44, 111, 69, 72, -43, -73, -30, -91, 89, -26, -115, 9, -126, -77, 0, -47, 125, -1, -10, -81, 120, 111, 123, -48, -110, 67, -19, -2, -126, -34, -65, -117, -60, -9, -7, 24, 98, 117, 15, -105, 33, -109, 5, -96, 114, 38, 104, 19, -54, -91, -7, 93, 85, -104, -46, 103, 87, -115, 34, -59, 92, -48, 65, 102, 32, -70, 96, 94, 87, -34, 119, -7, -26, -42, 104, 81, -7, -12, -125, 78, 20, -70, 8, -63};
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
    msg.setTimeStamp(0.024504664462104975);
    msg.setSource(5940U);
    msg.setSourceEntity(57U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(95U);
    msg.type = 110U;
    msg.frequency = 1411633568U;
    msg.min_range = 19876U;
    msg.max_range = 2323U;
    msg.bits_per_point = 13U;
    msg.scale_factor = 0.045493423961598056;
    const signed char tmp_msg_0[] = {-115, -12, 95, -2, -68, -37, -123, 84, -27, 114, 2, -69, 92, 119, -54, -60, 10, 25, 59, 35, -22, 74, 66, -125, -81, -120, -36, -74, -25, -5, -12, 126, -54, 38, -90, -44, -128, -65, 4, 75, 63, 32, 63, -64, 16, -88, 60, 26, -112, 57, -53, -116, -35, 84, -23, 47, -109, -99, -109, 16, 17, -32, 68, 118, 31, -51, 86, -53, 73, -74, 52, 21, -3, 82, 74, 23, -48, -4, -111, 6, -52, 80, 124, 50, 81, 108, -25, 109, -97, -7, -119, 66, -30, -103, 86, 6, 17, -74, 56, 15, 16, -21, 93, 77, -57, -93, -54, 30, -28, 100, 102, -98, -35, 40, 26, -99, -40, 94, 9, -125, 114, -97, -88, 29, -83, -29, -50, -27, -62, 10, -101, -113, -111, -103, 7, -123, -62, -51, 6, -62, -41, 94, 43, -9, -81, -88, 11, -102, -12, 35, 65, 28, -20, -51, -75, -36, -98, -90, 43, -50, -58, -5, -59, 60, 113, -9, 24, -2, -47, 84, 118, -101, 41, -45, -32, -8, -70, -105, -86, 18, -122, -92, 52, -92, -110, -61, -9, -85, -71, -92, -88, 62, 58, -7, 47, 100, 112, -30, 115, -105, 99, 57, -43, -119, 99, 104, -81, 10, -26, 4, -19, -49, -104, -88, 63, -13, 12, -64, 94, -125, -62, 57, 100, -11, 101, 74, -4, -104, 20, -111, 105, 119, -29, -92, 101, -88, -43, -66};
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
    msg.setTimeStamp(0.12496636670451344);
    msg.setSource(5182U);
    msg.setSourceEntity(131U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.1284761858176392);
    msg.setSource(37699U);
    msg.setSourceEntity(91U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.7942150413727231);
    msg.setSource(10596U);
    msg.setSourceEntity(73U);
    msg.setDestination(40552U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.003723434845786855);
    msg.setSource(58466U);
    msg.setSourceEntity(197U);
    msg.setDestination(34634U);
    msg.setDestinationEntity(89U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.4129599904756427);
    msg.setSource(55237U);
    msg.setSourceEntity(164U);
    msg.setDestination(56812U);
    msg.setDestinationEntity(111U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.8204190847361676);
    msg.setSource(3402U);
    msg.setSourceEntity(172U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(1U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.7409797934609834);
    msg.setSource(51600U);
    msg.setSourceEntity(31U);
    msg.setDestination(5912U);
    msg.setDestinationEntity(52U);
    msg.value = 0.26384429901690065;
    msg.confidence = 0.9477675029738822;
    msg.opmodes.assign("LATYAQEQDSIOJZREULQJBRXRPVWOQFHYXOPWTAONFTCJMPLFFMBDTYREBZNQFHXGEIYQWSLJJOKLJZUWYJWCJTAETTI");

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
    msg.setTimeStamp(0.850786615021784);
    msg.setSource(27824U);
    msg.setSourceEntity(251U);
    msg.setDestination(61514U);
    msg.setDestinationEntity(237U);
    msg.value = 0.5860091824725414;
    msg.confidence = 0.08939871684646605;
    msg.opmodes.assign("CAGUSAWUYNOVVDRYHXTCSPRSFFKEIMAICZQKUKPQJKPEYPJXQNEXCVAZOBECLZVMXEOWZTENQDLVHYHHXVMTMGHIPTQONQKYPWWZHBYKRWIUBJLOIVWACYJMZBGISPANRUBYWOTRGFZPIXBVTXGXDSDRKSQMADAPSITGESKKYCZLITTRLHJBTJCUHGEWMMUNZONVPRMWJUGFFBKLJVYDUNDJGOOAZLXFREFLNSHXGMJLQFNUCBIHDQFBD");

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
    msg.setTimeStamp(0.0858014023529503);
    msg.setSource(20326U);
    msg.setSourceEntity(51U);
    msg.setDestination(30520U);
    msg.setDestinationEntity(94U);
    msg.value = 0.923269126910385;
    msg.confidence = 0.7006833686024071;
    msg.opmodes.assign("DWEHKQWIXQVTFIJJUZOZSMYPENWOYCDRXPGPNCDTRAWWTYSQBEVURPBASIRCSEYLVPXNGZEKK");

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
    msg.setTimeStamp(0.20963236249599404);
    msg.setSource(60516U);
    msg.setSourceEntity(94U);
    msg.setDestination(34481U);
    msg.setDestinationEntity(227U);
    msg.itow = 3542761673U;
    msg.lat = 0.5538372599228006;
    msg.lon = 0.13728911709440594;
    msg.height_ell = 0.8436809460193746;
    msg.height_sea = 0.2975789705784423;
    msg.hacc = 0.5711686057090053;
    msg.vacc = 0.7275035165692678;
    msg.vel_n = 0.19898651640882714;
    msg.vel_e = 0.37958976732508265;
    msg.vel_d = 0.16771009885108712;
    msg.speed = 0.725841557932356;
    msg.gspeed = 0.4004230647705225;
    msg.heading = 0.8113147985939417;
    msg.sacc = 0.711113711204237;
    msg.cacc = 0.5809548625291202;

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
    msg.setTimeStamp(0.9823441927353828);
    msg.setSource(41703U);
    msg.setSourceEntity(168U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(209U);
    msg.itow = 247707588U;
    msg.lat = 0.6147998378362746;
    msg.lon = 0.19601548118900858;
    msg.height_ell = 0.1917159484927563;
    msg.height_sea = 0.8691371592546632;
    msg.hacc = 0.9386219899461494;
    msg.vacc = 0.04351549115531972;
    msg.vel_n = 0.7484248669363002;
    msg.vel_e = 0.6678377573384618;
    msg.vel_d = 0.3249518332015646;
    msg.speed = 0.9598130720206409;
    msg.gspeed = 0.6741714907986404;
    msg.heading = 0.830506538051727;
    msg.sacc = 0.27866712574497066;
    msg.cacc = 0.17620420021306937;

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
    msg.setTimeStamp(0.21295699277248736);
    msg.setSource(15756U);
    msg.setSourceEntity(163U);
    msg.setDestination(39828U);
    msg.setDestinationEntity(215U);
    msg.itow = 209503004U;
    msg.lat = 0.47729950792539844;
    msg.lon = 0.9941487251812017;
    msg.height_ell = 0.33770092870268487;
    msg.height_sea = 0.37930842764433015;
    msg.hacc = 0.37845965283113003;
    msg.vacc = 0.4908087307168264;
    msg.vel_n = 0.9935308331458612;
    msg.vel_e = 0.4128533104664468;
    msg.vel_d = 0.8149787438895124;
    msg.speed = 0.11274956342300979;
    msg.gspeed = 0.08681475595391852;
    msg.heading = 0.004233870192874023;
    msg.sacc = 0.5872878209647473;
    msg.cacc = 0.8141649347426754;

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
    msg.setTimeStamp(0.13607501912859088);
    msg.setSource(30509U);
    msg.setSourceEntity(203U);
    msg.setDestination(58518U);
    msg.setDestinationEntity(2U);
    msg.id = 117U;
    msg.value = 0.9905507664067333;

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
    msg.setTimeStamp(0.8730037417112656);
    msg.setSource(56043U);
    msg.setSourceEntity(135U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(243U);
    msg.id = 52U;
    msg.value = 0.07532807317862178;

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
    msg.setTimeStamp(0.200535095446006);
    msg.setSource(16629U);
    msg.setSourceEntity(223U);
    msg.setDestination(12219U);
    msg.setDestinationEntity(129U);
    msg.id = 79U;
    msg.value = 0.754772911426431;

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
    msg.setTimeStamp(0.08356532682972917);
    msg.setSource(27713U);
    msg.setSourceEntity(240U);
    msg.setDestination(11575U);
    msg.setDestinationEntity(121U);
    msg.x = 0.4767590861089077;
    msg.y = 0.6062562158409284;
    msg.z = 0.416280866032097;
    msg.phi = 0.15321492230756284;
    msg.theta = 0.8527485431431062;
    msg.psi = 0.4686538128818887;

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
    msg.setTimeStamp(0.06070508044491796);
    msg.setSource(4023U);
    msg.setSourceEntity(162U);
    msg.setDestination(19170U);
    msg.setDestinationEntity(188U);
    msg.x = 0.7175750004153888;
    msg.y = 0.9142883656209393;
    msg.z = 0.3826477155580026;
    msg.phi = 0.24189118841876467;
    msg.theta = 0.06794864247187415;
    msg.psi = 0.5506722070498034;

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
    msg.setTimeStamp(0.30854581528090064);
    msg.setSource(3608U);
    msg.setSourceEntity(148U);
    msg.setDestination(15482U);
    msg.setDestinationEntity(148U);
    msg.x = 0.5192771774758298;
    msg.y = 0.8084169298261655;
    msg.z = 0.6059059960524615;
    msg.phi = 0.8863862801149787;
    msg.theta = 0.7493628151198183;
    msg.psi = 0.7621615962609539;

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
    msg.setTimeStamp(0.2770614044573859);
    msg.setSource(54446U);
    msg.setSourceEntity(197U);
    msg.setDestination(11489U);
    msg.setDestinationEntity(0U);
    msg.beam_width = 0.6658473575044394;
    msg.beam_height = 0.6521003925944718;

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
    msg.setTimeStamp(0.449709322605814);
    msg.setSource(62979U);
    msg.setSourceEntity(40U);
    msg.setDestination(61840U);
    msg.setDestinationEntity(235U);
    msg.beam_width = 0.6786913188498058;
    msg.beam_height = 0.9756213487505451;

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
    msg.setTimeStamp(0.19397934935887573);
    msg.setSource(48152U);
    msg.setSourceEntity(48U);
    msg.setDestination(30626U);
    msg.setDestinationEntity(240U);
    msg.beam_width = 0.3703617635833538;
    msg.beam_height = 0.2760625856008053;

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
    msg.setTimeStamp(0.8926835343291847);
    msg.setSource(35392U);
    msg.setSourceEntity(124U);
    msg.setDestination(45440U);
    msg.setDestinationEntity(224U);
    msg.sane = 199U;

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
    msg.setTimeStamp(0.4915030172982505);
    msg.setSource(7100U);
    msg.setSourceEntity(31U);
    msg.setDestination(19820U);
    msg.setDestinationEntity(163U);
    msg.sane = 76U;

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
    msg.setTimeStamp(0.5274690075088979);
    msg.setSource(21949U);
    msg.setSourceEntity(120U);
    msg.setDestination(41698U);
    msg.setDestinationEntity(113U);
    msg.sane = 131U;

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
    msg.setTimeStamp(0.3881862951545444);
    msg.setSource(13706U);
    msg.setSourceEntity(94U);
    msg.setDestination(3632U);
    msg.setDestinationEntity(172U);
    msg.value = 0.1036093511476619;

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
    msg.setTimeStamp(0.4591651614073198);
    msg.setSource(65457U);
    msg.setSourceEntity(171U);
    msg.setDestination(54317U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8162596211025706;

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
    msg.setTimeStamp(0.9845122340990545);
    msg.setSource(20359U);
    msg.setSourceEntity(21U);
    msg.setDestination(25527U);
    msg.setDestinationEntity(141U);
    msg.value = 0.7728535535228404;

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
    msg.setTimeStamp(0.9590049400145266);
    msg.setSource(62228U);
    msg.setSourceEntity(205U);
    msg.setDestination(35340U);
    msg.setDestinationEntity(151U);
    msg.value = 0.7644339535705814;

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
    msg.setTimeStamp(0.48486193617565754);
    msg.setSource(62887U);
    msg.setSourceEntity(21U);
    msg.setDestination(1834U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6444488848472718;

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
    msg.setTimeStamp(0.8712705080116052);
    msg.setSource(50951U);
    msg.setSourceEntity(226U);
    msg.setDestination(56519U);
    msg.setDestinationEntity(196U);
    msg.value = 0.06947814967766397;

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
    msg.setTimeStamp(0.6974728707685028);
    msg.setSource(19800U);
    msg.setSourceEntity(202U);
    msg.setDestination(47251U);
    msg.setDestinationEntity(2U);
    msg.value = 0.2332745009021664;

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
    msg.setTimeStamp(0.7639625098439585);
    msg.setSource(26744U);
    msg.setSourceEntity(129U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(123U);
    msg.value = 0.7091299257896603;

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
    msg.setTimeStamp(0.48590705341744234);
    msg.setSource(51253U);
    msg.setSourceEntity(107U);
    msg.setDestination(49362U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7235703832141015;

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
    msg.setTimeStamp(0.2294135534134748);
    msg.setSource(18090U);
    msg.setSourceEntity(150U);
    msg.setDestination(261U);
    msg.setDestinationEntity(192U);
    msg.value = 0.08013326544843324;

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
    msg.setTimeStamp(0.8026637629600653);
    msg.setSource(20916U);
    msg.setSourceEntity(79U);
    msg.setDestination(60929U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6938021269979887;

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
    msg.setTimeStamp(0.2192349212716398);
    msg.setSource(55331U);
    msg.setSourceEntity(126U);
    msg.setDestination(65092U);
    msg.setDestinationEntity(218U);
    msg.value = 0.31704106523964404;

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
    msg.setTimeStamp(0.4904052594241829);
    msg.setSource(45869U);
    msg.setSourceEntity(112U);
    msg.setDestination(40994U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5658746523587891;

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
    msg.setTimeStamp(0.765824796365063);
    msg.setSource(27105U);
    msg.setSourceEntity(144U);
    msg.setDestination(60816U);
    msg.setDestinationEntity(12U);
    msg.value = 0.18352549633511728;

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
    msg.setTimeStamp(0.8890908829559119);
    msg.setSource(17804U);
    msg.setSourceEntity(203U);
    msg.setDestination(55468U);
    msg.setDestinationEntity(135U);
    msg.value = 0.6494903763203845;

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
    msg.setTimeStamp(0.0951924278328431);
    msg.setSource(2273U);
    msg.setSourceEntity(200U);
    msg.setDestination(35196U);
    msg.setDestinationEntity(176U);
    msg.value = 0.0900988758715634;

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
    msg.setTimeStamp(0.49621685356641065);
    msg.setSource(58135U);
    msg.setSourceEntity(243U);
    msg.setDestination(28414U);
    msg.setDestinationEntity(149U);
    msg.value = 0.9672128122588326;

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
    msg.setTimeStamp(0.6836419108871258);
    msg.setSource(2277U);
    msg.setSourceEntity(239U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(133U);
    msg.value = 0.1270519840715505;

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
    msg.setTimeStamp(0.11573699832969064);
    msg.setSource(2298U);
    msg.setSourceEntity(126U);
    msg.setDestination(2316U);
    msg.setDestinationEntity(147U);
    msg.value = 0.06416991406053718;

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
    msg.setTimeStamp(0.8532294094220199);
    msg.setSource(15603U);
    msg.setSourceEntity(47U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(242U);
    msg.value = 0.40722843281270027;

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
    msg.setTimeStamp(0.5865052741883712);
    msg.setSource(6904U);
    msg.setSourceEntity(229U);
    msg.setDestination(64880U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7980573706620121;

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
    msg.setTimeStamp(0.2244434582422511);
    msg.setSource(401U);
    msg.setSourceEntity(24U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(242U);
    msg.value = 0.4812611271991033;

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
    msg.setTimeStamp(0.9772684460645401);
    msg.setSource(47300U);
    msg.setSourceEntity(1U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(31U);
    msg.value = 0.14870013775143842;

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
    msg.setTimeStamp(0.09937917531268958);
    msg.setSource(31868U);
    msg.setSourceEntity(115U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(86U);
    msg.value = 0.590583902947219;

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
    msg.setTimeStamp(0.7495671378688099);
    msg.setSource(23085U);
    msg.setSourceEntity(192U);
    msg.setDestination(55909U);
    msg.setDestinationEntity(131U);
    msg.validity = 40312U;
    msg.type = 240U;
    msg.tow = 1899888551U;
    msg.base_lat = 0.7656028360246895;
    msg.base_lon = 0.8831631239359538;
    msg.base_height = 0.7968922694435004;
    msg.n = 0.8527163379718491;
    msg.e = 0.3437144355270295;
    msg.d = 0.1691686976905168;
    msg.v_n = 0.053276607599470616;
    msg.v_e = 0.06094732106090983;
    msg.v_d = 0.5616618611787619;
    msg.satellites = 61U;
    msg.iar_hyp = 23304U;
    msg.iar_ratio = 0.7418714588722366;

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
    msg.setTimeStamp(0.2672923207865897);
    msg.setSource(2459U);
    msg.setSourceEntity(27U);
    msg.setDestination(8372U);
    msg.setDestinationEntity(172U);
    msg.validity = 57594U;
    msg.type = 70U;
    msg.tow = 24151092U;
    msg.base_lat = 0.24738186838872844;
    msg.base_lon = 0.9303106600045764;
    msg.base_height = 0.3637831856163931;
    msg.n = 0.017689042287012402;
    msg.e = 0.9783201847763519;
    msg.d = 0.968508738742239;
    msg.v_n = 0.6986197278364996;
    msg.v_e = 0.9034331609649426;
    msg.v_d = 0.8667511420365778;
    msg.satellites = 39U;
    msg.iar_hyp = 42095U;
    msg.iar_ratio = 0.9607878181122155;

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
    msg.setTimeStamp(0.5374043669033524);
    msg.setSource(36419U);
    msg.setSourceEntity(210U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(187U);
    msg.validity = 36499U;
    msg.type = 129U;
    msg.tow = 317290879U;
    msg.base_lat = 0.3449943651683707;
    msg.base_lon = 0.7154332861457163;
    msg.base_height = 0.9119705052010356;
    msg.n = 0.08376599281474029;
    msg.e = 0.4580395802452749;
    msg.d = 0.9478981547745059;
    msg.v_n = 0.6667273890400951;
    msg.v_e = 0.8544019784190466;
    msg.v_d = 0.8396947655560686;
    msg.satellites = 139U;
    msg.iar_hyp = 27178U;
    msg.iar_ratio = 0.42228243168980284;

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
    msg.setTimeStamp(0.8628388475018977);
    msg.setSource(329U);
    msg.setSourceEntity(196U);
    msg.setDestination(4221U);
    msg.setDestinationEntity(228U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9586109958789357;
    tmp_msg_0.lon = 0.2377448147730684;
    tmp_msg_0.height = 0.1796835098384314;
    tmp_msg_0.x = 0.6775604015119755;
    tmp_msg_0.y = 0.6440402771536462;
    tmp_msg_0.z = 0.836076671560683;
    tmp_msg_0.phi = 0.6558728545758965;
    tmp_msg_0.theta = 0.4268131427262408;
    tmp_msg_0.psi = 0.39067476988432726;
    tmp_msg_0.u = 0.08380146614817763;
    tmp_msg_0.v = 0.2479797669015662;
    tmp_msg_0.w = 0.721010422252447;
    tmp_msg_0.vx = 0.9472706712514837;
    tmp_msg_0.vy = 0.372270896168009;
    tmp_msg_0.vz = 0.35484627082244924;
    tmp_msg_0.p = 0.6832372643243573;
    tmp_msg_0.q = 0.38197471799611726;
    tmp_msg_0.r = 0.5798648179023899;
    tmp_msg_0.depth = 0.8165131053928009;
    tmp_msg_0.alt = 0.5027192819767371;
    msg.state.set(tmp_msg_0);
    msg.type = 52U;

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
    msg.setTimeStamp(0.7371361282448643);
    msg.setSource(48161U);
    msg.setSourceEntity(59U);
    msg.setDestination(43979U);
    msg.setDestinationEntity(153U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9336137169606377;
    tmp_msg_0.lon = 0.6548119078805298;
    tmp_msg_0.height = 0.8147462432031064;
    tmp_msg_0.x = 0.48236815832962254;
    tmp_msg_0.y = 0.5629646921381591;
    tmp_msg_0.z = 0.024470817172150494;
    tmp_msg_0.phi = 0.7091569918896589;
    tmp_msg_0.theta = 0.21653293803488083;
    tmp_msg_0.psi = 0.9141902191856623;
    tmp_msg_0.u = 0.9775609798735072;
    tmp_msg_0.v = 0.718571465798506;
    tmp_msg_0.w = 0.6735016448073734;
    tmp_msg_0.vx = 0.7611097961078939;
    tmp_msg_0.vy = 0.11146228535664415;
    tmp_msg_0.vz = 0.8502595915801716;
    tmp_msg_0.p = 0.033786239128792195;
    tmp_msg_0.q = 0.628978950277825;
    tmp_msg_0.r = 0.12462687633906255;
    tmp_msg_0.depth = 0.1795096741551434;
    tmp_msg_0.alt = 0.8078584999624301;
    msg.state.set(tmp_msg_0);
    msg.type = 60U;

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
    msg.setTimeStamp(0.2235632096738176);
    msg.setSource(47575U);
    msg.setSourceEntity(238U);
    msg.setDestination(30747U);
    msg.setDestinationEntity(3U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.43293966314318055;
    tmp_msg_0.lon = 0.8574169039826697;
    tmp_msg_0.height = 0.6607843492257808;
    tmp_msg_0.x = 0.7338169123269596;
    tmp_msg_0.y = 0.23710859567512044;
    tmp_msg_0.z = 0.005028517624275808;
    tmp_msg_0.phi = 0.922001461344504;
    tmp_msg_0.theta = 0.2102892401022044;
    tmp_msg_0.psi = 0.8465374203624084;
    tmp_msg_0.u = 0.8964635923619289;
    tmp_msg_0.v = 0.8293655700465461;
    tmp_msg_0.w = 0.5898878302294097;
    tmp_msg_0.vx = 0.47240528192892894;
    tmp_msg_0.vy = 0.22302598698749387;
    tmp_msg_0.vz = 0.48382525250292874;
    tmp_msg_0.p = 0.46073837827013875;
    tmp_msg_0.q = 0.3492533263452179;
    tmp_msg_0.r = 0.4893078480754146;
    tmp_msg_0.depth = 0.12325579659411579;
    tmp_msg_0.alt = 0.897462896921122;
    msg.state.set(tmp_msg_0);
    msg.type = 250U;

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
    msg.setTimeStamp(0.03622649161597025);
    msg.setSource(62548U);
    msg.setSourceEntity(1U);
    msg.setDestination(25661U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8024221161680023;

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
    msg.setTimeStamp(0.9633034274712884);
    msg.setSource(18449U);
    msg.setSourceEntity(59U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(196U);
    msg.value = 0.020169255511139128;

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
    msg.setTimeStamp(0.8099252767361513);
    msg.setSource(25445U);
    msg.setSourceEntity(187U);
    msg.setDestination(21253U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6653472361826379;

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
    msg.setTimeStamp(0.5107399121439408);
    msg.setSource(509U);
    msg.setSourceEntity(77U);
    msg.setDestination(59627U);
    msg.setDestinationEntity(233U);
    msg.value = 0.9197783118347824;

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
    msg.setTimeStamp(0.4790237838971604);
    msg.setSource(38783U);
    msg.setSourceEntity(77U);
    msg.setDestination(46961U);
    msg.setDestinationEntity(176U);
    msg.value = 0.08659878154310863;

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
    msg.setTimeStamp(0.3339746744840111);
    msg.setSource(20657U);
    msg.setSourceEntity(68U);
    msg.setDestination(39918U);
    msg.setDestinationEntity(10U);
    msg.value = 0.247125667073113;

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
    msg.setTimeStamp(0.5454719942114047);
    msg.setSource(47452U);
    msg.setSourceEntity(194U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(215U);
    msg.value = 0.0002086751665782982;

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
    msg.setTimeStamp(0.5870129498554731);
    msg.setSource(12869U);
    msg.setSourceEntity(149U);
    msg.setDestination(50479U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9679768045734646;

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
    msg.setTimeStamp(0.03094866491318493);
    msg.setSource(64016U);
    msg.setSourceEntity(23U);
    msg.setDestination(48030U);
    msg.setDestinationEntity(91U);
    msg.value = 0.09772754716695053;

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
    msg.setTimeStamp(0.37203880843971326);
    msg.setSource(31519U);
    msg.setSourceEntity(138U);
    msg.setDestination(741U);
    msg.setDestinationEntity(117U);
    msg.value = 0.019994715019357012;

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
    msg.setTimeStamp(0.9633173431503977);
    msg.setSource(21717U);
    msg.setSourceEntity(88U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(142U);
    msg.value = 0.21161893298175882;

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
    msg.setTimeStamp(0.6596362755942765);
    msg.setSource(47570U);
    msg.setSourceEntity(160U);
    msg.setDestination(9841U);
    msg.setDestinationEntity(90U);
    msg.value = 0.17228816739792696;

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
    msg.setTimeStamp(0.26711589195469865);
    msg.setSource(31963U);
    msg.setSourceEntity(199U);
    msg.setDestination(34848U);
    msg.setDestinationEntity(218U);
    msg.value = 0.8202637337949527;

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
    msg.setTimeStamp(0.6900663081074787);
    msg.setSource(29036U);
    msg.setSourceEntity(220U);
    msg.setDestination(4543U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9672670712243373;

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
    msg.setTimeStamp(0.5745461088319715);
    msg.setSource(61710U);
    msg.setSourceEntity(208U);
    msg.setDestination(44837U);
    msg.setDestinationEntity(80U);
    msg.value = 0.10135816520058372;

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
    msg.setTimeStamp(0.21072180106851446);
    msg.setSource(37886U);
    msg.setSourceEntity(71U);
    msg.setDestination(19371U);
    msg.setDestinationEntity(157U);
    msg.id = 132U;
    msg.zoom = 227U;
    msg.action = 32U;

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
    msg.setTimeStamp(0.042598728885230974);
    msg.setSource(8209U);
    msg.setSourceEntity(56U);
    msg.setDestination(27096U);
    msg.setDestinationEntity(66U);
    msg.id = 172U;
    msg.zoom = 47U;
    msg.action = 161U;

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
    msg.setTimeStamp(0.8912228522865686);
    msg.setSource(43361U);
    msg.setSourceEntity(174U);
    msg.setDestination(51210U);
    msg.setDestinationEntity(114U);
    msg.id = 207U;
    msg.zoom = 207U;
    msg.action = 166U;

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
    msg.setTimeStamp(0.856717947507215);
    msg.setSource(4616U);
    msg.setSourceEntity(121U);
    msg.setDestination(54472U);
    msg.setDestinationEntity(183U);
    msg.id = 172U;
    msg.value = 0.21094671664123688;

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
    msg.setTimeStamp(0.69561994142626);
    msg.setSource(48534U);
    msg.setSourceEntity(173U);
    msg.setDestination(18261U);
    msg.setDestinationEntity(137U);
    msg.id = 234U;
    msg.value = 0.41830535185299145;

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
    msg.setTimeStamp(0.35944224310182327);
    msg.setSource(21561U);
    msg.setSourceEntity(157U);
    msg.setDestination(65411U);
    msg.setDestinationEntity(120U);
    msg.id = 171U;
    msg.value = 0.9355867782302729;

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
    msg.setTimeStamp(0.670653448134546);
    msg.setSource(15915U);
    msg.setSourceEntity(197U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(57U);
    msg.id = 84U;
    msg.value = 0.5517015419267463;

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
    msg.setTimeStamp(0.16013576032404986);
    msg.setSource(63501U);
    msg.setSourceEntity(67U);
    msg.setDestination(57217U);
    msg.setDestinationEntity(136U);
    msg.id = 123U;
    msg.value = 0.6073492056637024;

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
    msg.setTimeStamp(0.12434066022060042);
    msg.setSource(51229U);
    msg.setSourceEntity(231U);
    msg.setDestination(33022U);
    msg.setDestinationEntity(144U);
    msg.id = 50U;
    msg.value = 0.03016530968811637;

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
    msg.setTimeStamp(0.5685380358134623);
    msg.setSource(49783U);
    msg.setSourceEntity(237U);
    msg.setDestination(38841U);
    msg.setDestinationEntity(120U);
    msg.id = 0U;
    msg.angle = 0.840619038348969;

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
    msg.setTimeStamp(0.16298672923621882);
    msg.setSource(37687U);
    msg.setSourceEntity(207U);
    msg.setDestination(15251U);
    msg.setDestinationEntity(16U);
    msg.id = 161U;
    msg.angle = 0.0808646832041845;

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
    msg.setTimeStamp(0.8553697286427063);
    msg.setSource(21054U);
    msg.setSourceEntity(125U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(242U);
    msg.id = 235U;
    msg.angle = 0.9439266266529208;

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
    msg.setTimeStamp(0.6348002215983127);
    msg.setSource(44296U);
    msg.setSourceEntity(181U);
    msg.setDestination(21527U);
    msg.setDestinationEntity(118U);
    msg.op = 96U;
    msg.actions.assign("SGRDVEMGLUIUVLPAOTZQCOVDRDATCZRFSEFYKJUOXKAFEIXBAKJEQGZPTPHSPMSDSGEPUXATJWFGXVGUYKYIVNCWYJOXNTRWPBLMCKYWWTHAFSPHOGWRWJSDAVPXLOLYAUUZCFHOQFRMNHNKYKISRGUPPNHFQKUWVHDCZREONMMEBQMUXI");

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
    msg.setTimeStamp(0.1088460678906722);
    msg.setSource(57101U);
    msg.setSourceEntity(122U);
    msg.setDestination(59018U);
    msg.setDestinationEntity(168U);
    msg.op = 179U;
    msg.actions.assign("AVYNFDJBXQOIEKMXLMEWHSDPFBTGGHWWVSYPROD");

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
    msg.setTimeStamp(0.7043565177877545);
    msg.setSource(47813U);
    msg.setSourceEntity(170U);
    msg.setDestination(7193U);
    msg.setDestinationEntity(94U);
    msg.op = 173U;
    msg.actions.assign("TUAPRIWZAYRLDUHASXNMQKGVDPQHAJDYQRVFWSSLOLTZOTHMEXJNICZOCFPVFGH");

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
    msg.setTimeStamp(0.76165696052828);
    msg.setSource(38790U);
    msg.setSourceEntity(227U);
    msg.setDestination(61003U);
    msg.setDestinationEntity(215U);
    msg.actions.assign("WLQOGPLVLVTUKCZCKILMHSNTDSHISFXTQASTULRPANJVGOTUPLKDICNAKYKNRFBVYYAYXQPQLIYUMAP");

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
    msg.setTimeStamp(0.3658632086174125);
    msg.setSource(5625U);
    msg.setSourceEntity(209U);
    msg.setDestination(12224U);
    msg.setDestinationEntity(182U);
    msg.actions.assign("GQRFPETEAFWORJPRDHQTCWQKR");

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
    msg.setTimeStamp(0.2326576703599217);
    msg.setSource(48189U);
    msg.setSourceEntity(39U);
    msg.setDestination(18202U);
    msg.setDestinationEntity(82U);
    msg.actions.assign("ANHSFECQJMBQKIDCTVNTOTYHDUHQCSIVWYXBNZXUNUDWSFGPZNRRSERRDKZHFKJDXWRUDZLRSIQGKXGTJDLZPTOJLKSVJHOXDMBFJATHQZYBWGHKTIBMEGENL");

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
    msg.setTimeStamp(0.9324379954374534);
    msg.setSource(51535U);
    msg.setSourceEntity(10U);
    msg.setDestination(64205U);
    msg.setDestinationEntity(233U);
    msg.button = 15U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.22010454743454888);
    msg.setSource(42789U);
    msg.setSourceEntity(169U);
    msg.setDestination(2997U);
    msg.setDestinationEntity(238U);
    msg.button = 142U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.5034593838948516);
    msg.setSource(29926U);
    msg.setSourceEntity(207U);
    msg.setDestination(34043U);
    msg.setDestinationEntity(111U);
    msg.button = 231U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.5745179724079347);
    msg.setSource(3245U);
    msg.setSourceEntity(5U);
    msg.setDestination(15778U);
    msg.setDestinationEntity(193U);
    msg.op = 207U;
    msg.text.assign("SRQUBXTZYEMKDQAZTNHPMRUTOXMGBTJBEPKZQEJOWVKMRUNOOYMBWQILWIVIDXIQBSIYVZVWBMFIGFLRCFTXDXJEDQLPZGGUNNMZUMXFCBQWJKWAAKYXSOFTVIJJYJAWYAIHHKHVZQDUTFPILFQNJPBODCTDYGTAGVZTFLOZHKUSAEYSGBJGARNRYREWENHXNHPEOAGXE");

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
    msg.setTimeStamp(0.6356212861400798);
    msg.setSource(33458U);
    msg.setSourceEntity(172U);
    msg.setDestination(20570U);
    msg.setDestinationEntity(45U);
    msg.op = 77U;
    msg.text.assign("RMPHCIVDHLFEKQUQFHNRKAPLOMVOXHKJUQRZTCLJYUTNUX");

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
    msg.setTimeStamp(0.6146147904574992);
    msg.setSource(40299U);
    msg.setSourceEntity(199U);
    msg.setDestination(8585U);
    msg.setDestinationEntity(34U);
    msg.op = 185U;
    msg.text.assign("JXJPPSNDFYZFCELJMZSTUNSJTRPBAHROFCSEBAKIPOXYMKJQODMEDBSYIWMLSAMQIYXIPWZDSXDCYLQZARIPYNDFMFGSRVGBJRCWASTUGFKUCHKBZUVUVJPODVHETEHRKFEZRDTIKFLRMLVXKGIAGWVXJLLKYQAPXLUSBYZUTNIRMGRCODEQIWOTYCZHTPZWGJXEEOQDHZGHHQVNNW");

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
    msg.setTimeStamp(0.7823696943017275);
    msg.setSource(19299U);
    msg.setSourceEntity(233U);
    msg.setDestination(37322U);
    msg.setDestinationEntity(73U);
    msg.op = 80U;
    msg.time_remain = 0.7553829694538667;
    msg.sched_time = 0.6787417841399813;

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
    msg.setTimeStamp(0.4498343542464929);
    msg.setSource(49554U);
    msg.setSourceEntity(214U);
    msg.setDestination(333U);
    msg.setDestinationEntity(84U);
    msg.op = 34U;
    msg.time_remain = 0.36399905870408666;
    msg.sched_time = 0.41195429782537296;

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
    msg.setTimeStamp(0.7157089142981126);
    msg.setSource(12218U);
    msg.setSourceEntity(84U);
    msg.setDestination(58448U);
    msg.setDestinationEntity(7U);
    msg.op = 139U;
    msg.time_remain = 0.9472110979034858;
    msg.sched_time = 0.9569847890618258;

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
    msg.setTimeStamp(0.7841572853163863);
    msg.setSource(2490U);
    msg.setSourceEntity(2U);
    msg.setDestination(53821U);
    msg.setDestinationEntity(7U);
    msg.name.assign("QTGCNLRPPJATKGYSYIMJMZDFPNTPMSDOSHEUNUVFSRQRVOXCNBWAWJIGXNLYTKLKYEPOENFKTNFAFJFJGVBWUYHVEPHQZQHOMKAGWCLETBZUIYCLODHPKTNOXFMZUJSRKQOBHOCADFMPSACOYLRXBGAUKKKMXWSTXLDZWUEMLHVYDESYUWXCBPZADMDDEGAQQXRXJIICEGIOVWLBJ");
    msg.op = 80U;
    msg.sched_time = 0.5427713036682439;

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
    msg.setTimeStamp(0.06750422073502493);
    msg.setSource(60731U);
    msg.setSourceEntity(58U);
    msg.setDestination(22916U);
    msg.setDestinationEntity(54U);
    msg.name.assign("XEEGSPOVVISCMEREYYUFXZEKNJCIGHDKTDMGTOIENPCGVXVTGMPLFUFZAHOZOKEAKEUQRPVWMABIPASUZNXGFHUYLUZRYCHFOTUMWHW");
    msg.op = 14U;
    msg.sched_time = 0.39920373656185193;

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
    msg.setTimeStamp(0.0010620934008854777);
    msg.setSource(11004U);
    msg.setSourceEntity(183U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(145U);
    msg.name.assign("YWCFLPSUEFMFKICXCRDIHQIZJHNUIZQQBTCJNBTHGDZMCTLQJEIYPPXEKAOXUTZGAYEWLGQPLOZNWYHNKDXJOTGFWXRMWKBEHBNRITUNOAFRSHRLVZEIIJRVXYUOGJOYCDBNBKFBSXNMEROOAUQDYEHJUDLZKVLPMMFWUVFRZLDDKCAVQRPRGAMVCVXBPWXCGTNJILEZWSQSSZGFVDYOSOMAVWA");
    msg.op = 7U;
    msg.sched_time = 0.31443704426262264;

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
    msg.setTimeStamp(0.08276464313629195);
    msg.setSource(22276U);
    msg.setSourceEntity(194U);
    msg.setDestination(26631U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.4232101024740075);
    msg.setSource(27381U);
    msg.setSourceEntity(168U);
    msg.setDestination(27947U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.5831666959615711);
    msg.setSource(49244U);
    msg.setSourceEntity(210U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.14261297273826046);
    msg.setSource(65025U);
    msg.setSourceEntity(181U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(5U);
    msg.name.assign("TIIKTLNGRHKMTWWFDSGTOMUDUYEVDBVSWFPNZQMRHUGVVLIJKUDVAGQOYOJABFFAQEJGFZANJAKQNNBMOMIRMIXRKVZGWGNGPYEHABTKSDWXEZBIVHZRCOKSZRREYTRATTIDUJSGEUOZCBMUCRQZXCJCMPHXLFTCLTOPRHCXYISQVFEOEWPUBQDYKCWADBPBOIQSJSPDYKQUGOFZIXFLNACNWJJABSXHNVYZELDKXYW");
    msg.state = 173U;

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
    msg.setTimeStamp(0.7155047843964307);
    msg.setSource(43000U);
    msg.setSourceEntity(155U);
    msg.setDestination(58335U);
    msg.setDestinationEntity(236U);
    msg.name.assign("RJFIVIIUZBNMKF");
    msg.state = 145U;

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
    msg.setTimeStamp(0.6214284374198393);
    msg.setSource(1613U);
    msg.setSourceEntity(197U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(49U);
    msg.name.assign("WORWQGHIQHPSLDVOLPPMHTQDPKGDAFXYVIUDKTDFYMGCEXPLKRTYITQVBLCREDUJHAFMBFSUYVMZKWBKTSHTGZMZFZEODNJDFAOIGUBQUZOWNGAOFUNJZBFYYIEEMRCQPWFKGLBQCNWSOTFSAZCXIWHBNEUMRGILXZPVNAETMEOXQRKSYLXGPKRHELZVVROPHRYYUCIHYBMX");
    msg.state = 126U;

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
    msg.setTimeStamp(0.8063547725644021);
    msg.setSource(22245U);
    msg.setSourceEntity(45U);
    msg.setDestination(64490U);
    msg.setDestinationEntity(98U);
    msg.name.assign("SLNSMPLEIYKPDVFGFOVTAXZSKSDULTIXUSXIIYJBDZXMZFOWUTEYNFWEWJGXSPQTQYMTQZURBCHLOZDFKBRVJMHYLYZIKRUJVXDZSNHKEMEFQRMEMOWVWXCRCNAPYQEHPUBEOOXBIPIQTSFLXHHPOCGMOJBSJCKZGHHWNUBCVNLKAGYEUGNWAANCYZYNVABGC");
    msg.value = 193U;

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
    msg.setTimeStamp(0.7402411606595432);
    msg.setSource(62062U);
    msg.setSourceEntity(224U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(236U);
    msg.name.assign("TNHRCCUVQJOWQVGPLQNKAOHGKGZMWOJCQKGSCABUNIZERHMUMVRYWBEBFSJXKGXMHTTJOLRXIMUISDRZU");
    msg.value = 27U;

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
    msg.setTimeStamp(0.08634277489474995);
    msg.setSource(49220U);
    msg.setSourceEntity(205U);
    msg.setDestination(35095U);
    msg.setDestinationEntity(226U);
    msg.name.assign("CPPIXOFNYBHKCBJELMTUSJFWRVUSXUZVBXLBHWXFULTMFRCEVZMVPOAYAPTSDHKLWKRZYJAUTCXKSRTBNJUWPDPINOCQUROXMDWACNPIQQQSMPBGUMOATNVHKKICIJNCZXOPBGAZXWCFVEBSLFAWDFNJKLHDVWEIDNNJGLRGAZNTUZJ");
    msg.value = 109U;

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
    msg.setTimeStamp(0.03047497313732539);
    msg.setSource(59342U);
    msg.setSourceEntity(195U);
    msg.setDestination(43738U);
    msg.setDestinationEntity(36U);
    msg.name.assign("FKLLQGFAUQMVNNBERDZIVIBBQJOEIAWPGDAOIHYQNTRWWCKLMIVGGWUSHRJYXETVSXSSFGAHKDXIZPDVTYOKOOIOBZKJUGVCGHHREMWUYFYAFPFAOGRYRPZPAIPUWKQTGSJBENHEWLMHPUSSXCVDBCPDXMTWBSAE");

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
    msg.setTimeStamp(0.9295444808390348);
    msg.setSource(49723U);
    msg.setSourceEntity(163U);
    msg.setDestination(2947U);
    msg.setDestinationEntity(62U);
    msg.name.assign("WVIMUGIDUFINMLEJYQNECOKBGHEOHVTRQLLVCVWJVURVLYUYXZAZKKGEBIORHJKQGIMFLDXNJWRPFGTVFBYIJSPPGUTHDZMXCSPAYHEZQXYWHTBAJFQOLUOMRCJCKZETUOYMTFDOTHBA");

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
    msg.setTimeStamp(0.1416233913698065);
    msg.setSource(19276U);
    msg.setSourceEntity(12U);
    msg.setDestination(61451U);
    msg.setDestinationEntity(122U);
    msg.name.assign("VAAWDSJAXOSABBMKBGBFBQAKSBCYQILNPULHGTWVIPEBKOPLNMYPSJHYEHXGISJTUHLUUVCRSPXEZPNBFROULDEFHCZEDAOTXQEMNLWREMMUTQRCXKAHISWOKMOJTKKFNZLFPZVNDWTUHVWDIYDBXVYOTODZGL");

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
    msg.setTimeStamp(0.9694160295274495);
    msg.setSource(47168U);
    msg.setSourceEntity(21U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(60U);
    msg.name.assign("TKJZAZYRCXQXGLURGRZNQNPAKVPBATKMXTMYUCYKNDKHFTEZBGQENFEOLPVMTIBWYTHYOYUSWYCVYMXHOHHDVBFXBRDUOJKAGQOJJEPSEVWIEPARQFHKFJIUQBTNHHPCLQDJSCZGFLMHZLFUXWEZDVGDSPES");
    msg.value = 9U;

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
    msg.setTimeStamp(0.3081965562896869);
    msg.setSource(38665U);
    msg.setSourceEntity(141U);
    msg.setDestination(26681U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SWXFRQYTPNNVLSJYEIJUWDXLUWBAKNDUZXBRNDLBIRWGDOOMKYRMPAOIHQGCSSMZNOVMZQFDIAAZYC");
    msg.value = 229U;

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
    msg.setTimeStamp(0.7503963413790644);
    msg.setSource(48991U);
    msg.setSourceEntity(53U);
    msg.setDestination(58191U);
    msg.setDestinationEntity(232U);
    msg.name.assign("KNLTAOBVYGJFEYVNZITWUHNDVXKWXEDXCCPRKSJNVOXESSHJEKVWRHJEDZUQHLGPUYWMWIWBECQDFQTUQFZMKLHQDQBAHYYFMSMOAXBOAZRJVIIOIJQRILYLBNSFDPVGVKVKJZYWFYPPCUNJODQAXRIUZAGLSJNGDTPAGCCPICFHHOZMUGSQZBLESFNKPPTBTRTOCXQHDAGAOCCRXKMPREJEKXRWMTGSBYRUWSMHMFANUFTLLDUNGZIWXBB");
    msg.value = 236U;

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
    msg.setTimeStamp(0.3443790763401188);
    msg.setSource(41937U);
    msg.setSourceEntity(66U);
    msg.setDestination(8301U);
    msg.setDestinationEntity(59U);
    msg.id = 6U;
    msg.period = 1326435789U;
    msg.duty_cycle = 3075338461U;

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
    msg.setTimeStamp(0.3084536410981277);
    msg.setSource(26564U);
    msg.setSourceEntity(173U);
    msg.setDestination(30063U);
    msg.setDestinationEntity(119U);
    msg.id = 94U;
    msg.period = 982413939U;
    msg.duty_cycle = 3742667232U;

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
    msg.setTimeStamp(0.47257647518708956);
    msg.setSource(25836U);
    msg.setSourceEntity(119U);
    msg.setDestination(38925U);
    msg.setDestinationEntity(180U);
    msg.id = 6U;
    msg.period = 3746499834U;
    msg.duty_cycle = 455801352U;

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
    msg.setTimeStamp(0.7224656639215777);
    msg.setSource(15283U);
    msg.setSourceEntity(152U);
    msg.setDestination(20628U);
    msg.setDestinationEntity(151U);
    msg.id = 157U;
    msg.period = 507842823U;
    msg.duty_cycle = 2674794049U;

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
    msg.setTimeStamp(0.778825730458737);
    msg.setSource(24738U);
    msg.setSourceEntity(45U);
    msg.setDestination(3254U);
    msg.setDestinationEntity(178U);
    msg.id = 26U;
    msg.period = 3855319940U;
    msg.duty_cycle = 3463794482U;

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
    msg.setTimeStamp(0.3410507683437277);
    msg.setSource(63770U);
    msg.setSourceEntity(46U);
    msg.setDestination(24271U);
    msg.setDestinationEntity(101U);
    msg.id = 81U;
    msg.period = 4233066697U;
    msg.duty_cycle = 2252760995U;

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
    msg.setTimeStamp(0.020136734165254522);
    msg.setSource(49537U);
    msg.setSourceEntity(131U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.7226714852897731;
    msg.lon = 0.8427681773318175;
    msg.height = 0.27595043343808;
    msg.x = 0.42823861647115524;
    msg.y = 0.30329285757340163;
    msg.z = 0.5471762021292118;
    msg.phi = 0.557972865681888;
    msg.theta = 0.26583722794037024;
    msg.psi = 0.2810514379237068;
    msg.u = 0.6276334099365547;
    msg.v = 0.5464444977775434;
    msg.w = 0.6186039161124064;
    msg.vx = 0.29392053447034105;
    msg.vy = 0.714347948633495;
    msg.vz = 0.14533925142952842;
    msg.p = 0.30060261421321444;
    msg.q = 0.577256087614005;
    msg.r = 0.7667634882732581;
    msg.depth = 0.21710865652347278;
    msg.alt = 0.9115836613028957;

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
    msg.setTimeStamp(0.7825296965084093);
    msg.setSource(57494U);
    msg.setSourceEntity(76U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.40286082844889604;
    msg.lon = 0.9644379795131005;
    msg.height = 0.2736122277021864;
    msg.x = 0.34943450123458586;
    msg.y = 0.03356339497642513;
    msg.z = 0.7883869201895045;
    msg.phi = 0.7129298703026786;
    msg.theta = 0.9781634090516065;
    msg.psi = 0.4522247279194461;
    msg.u = 0.6771479413314083;
    msg.v = 0.39372160006515355;
    msg.w = 0.6061359093137303;
    msg.vx = 0.7954811814584902;
    msg.vy = 0.1104349534475807;
    msg.vz = 0.36976227652319626;
    msg.p = 0.038996583117667405;
    msg.q = 0.07707754286008228;
    msg.r = 0.9958302643723468;
    msg.depth = 0.38153716876072097;
    msg.alt = 0.8093230588528538;

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
    msg.setTimeStamp(0.2549605438336199);
    msg.setSource(25245U);
    msg.setSourceEntity(25U);
    msg.setDestination(55543U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.5798646546198105;
    msg.lon = 0.5620816255901752;
    msg.height = 0.048432404753621205;
    msg.x = 0.10343869944443207;
    msg.y = 0.9275901623129978;
    msg.z = 0.3724261879217544;
    msg.phi = 0.17430641883693243;
    msg.theta = 0.779900334533054;
    msg.psi = 0.4485431054106519;
    msg.u = 0.9849914956178449;
    msg.v = 0.12830708908002808;
    msg.w = 0.09107185178297272;
    msg.vx = 0.3827341026134826;
    msg.vy = 0.11365389993927055;
    msg.vz = 0.32274871269446725;
    msg.p = 0.5164676339433915;
    msg.q = 0.1377068839435669;
    msg.r = 0.7232350158164991;
    msg.depth = 0.9915398055080809;
    msg.alt = 0.029307405063760394;

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
    msg.setTimeStamp(0.5585594086192195);
    msg.setSource(50614U);
    msg.setSourceEntity(4U);
    msg.setDestination(53917U);
    msg.setDestinationEntity(100U);
    msg.x = 0.0009660520301354447;
    msg.y = 0.21425139479360167;
    msg.z = 0.9727457702475175;

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
    msg.setTimeStamp(0.198500196746642);
    msg.setSource(60591U);
    msg.setSourceEntity(89U);
    msg.setDestination(35588U);
    msg.setDestinationEntity(219U);
    msg.x = 0.06942783667197394;
    msg.y = 0.1225007806101498;
    msg.z = 0.48888263085980754;

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
    msg.setTimeStamp(0.2057054804958235);
    msg.setSource(42700U);
    msg.setSourceEntity(26U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(190U);
    msg.x = 0.29771285662038716;
    msg.y = 0.19723971081475922;
    msg.z = 0.3406684484707585;

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
    msg.setTimeStamp(0.6828060220568366);
    msg.setSource(25428U);
    msg.setSourceEntity(203U);
    msg.setDestination(4747U);
    msg.setDestinationEntity(42U);
    msg.value = 0.12952150586549893;

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
    msg.setTimeStamp(0.9107292467501208);
    msg.setSource(36996U);
    msg.setSourceEntity(192U);
    msg.setDestination(13826U);
    msg.setDestinationEntity(212U);
    msg.value = 0.5908042626881707;

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
    msg.setTimeStamp(0.49052985105261926);
    msg.setSource(41862U);
    msg.setSourceEntity(236U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(19U);
    msg.value = 0.11533957838573838;

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
    msg.setTimeStamp(0.3520782285559596);
    msg.setSource(36981U);
    msg.setSourceEntity(77U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5602448252042872;

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
    msg.setTimeStamp(0.5330111845070624);
    msg.setSource(9693U);
    msg.setSourceEntity(123U);
    msg.setDestination(54227U);
    msg.setDestinationEntity(147U);
    msg.value = 0.7624732562354254;

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
    msg.setTimeStamp(0.880770537041675);
    msg.setSource(50601U);
    msg.setSourceEntity(7U);
    msg.setDestination(15769U);
    msg.setDestinationEntity(23U);
    msg.value = 0.30439255023668177;

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
    msg.setTimeStamp(0.7804731194012211);
    msg.setSource(2534U);
    msg.setSourceEntity(168U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(51U);
    msg.x = 0.7125293229977921;
    msg.y = 0.38239264363205516;
    msg.z = 0.3776222958471388;
    msg.phi = 0.9586170829555553;
    msg.theta = 0.46569191104144203;
    msg.psi = 0.8489845501774833;
    msg.p = 0.8598506395029335;
    msg.q = 0.1324056912371554;
    msg.r = 0.3308615723902867;
    msg.u = 0.6440159893401903;
    msg.v = 0.12302802751616915;
    msg.w = 0.968868532847696;
    msg.bias_psi = 0.968630273033874;
    msg.bias_r = 0.4062679826624982;

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
    msg.setTimeStamp(0.5892649116387484);
    msg.setSource(39713U);
    msg.setSourceEntity(88U);
    msg.setDestination(29943U);
    msg.setDestinationEntity(116U);
    msg.x = 0.16988346975595126;
    msg.y = 0.9161296487365752;
    msg.z = 0.708348677455854;
    msg.phi = 0.5226973419314004;
    msg.theta = 0.23929406374791862;
    msg.psi = 0.37585768029088995;
    msg.p = 0.2846559126644137;
    msg.q = 0.05697102401398868;
    msg.r = 0.32239629834224426;
    msg.u = 0.7571535478284327;
    msg.v = 0.6164142859445646;
    msg.w = 0.5494173797383984;
    msg.bias_psi = 0.19240071412226967;
    msg.bias_r = 0.22870968270265413;

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
    msg.setTimeStamp(0.55107306067913);
    msg.setSource(26057U);
    msg.setSourceEntity(241U);
    msg.setDestination(54656U);
    msg.setDestinationEntity(30U);
    msg.x = 0.6334532392972502;
    msg.y = 0.03278500875212054;
    msg.z = 0.7674197481335355;
    msg.phi = 0.8144469724575314;
    msg.theta = 0.5985327661458907;
    msg.psi = 0.5948713836197463;
    msg.p = 0.049044398145951185;
    msg.q = 0.44637649292373727;
    msg.r = 0.6984840239025207;
    msg.u = 0.027912390807175447;
    msg.v = 0.5882037993792222;
    msg.w = 0.021548292586440976;
    msg.bias_psi = 0.6378639943012575;
    msg.bias_r = 0.38948823202097693;

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
    msg.setTimeStamp(0.626318412521923);
    msg.setSource(41896U);
    msg.setSourceEntity(3U);
    msg.setDestination(18445U);
    msg.setDestinationEntity(25U);
    msg.bias_psi = 0.4313638161124874;
    msg.bias_r = 0.0917663690904773;
    msg.cog = 0.2955424583649382;
    msg.cyaw = 0.551209702809134;
    msg.lbl_rej_level = 0.3655308543674015;
    msg.gps_rej_level = 0.44458107525780455;
    msg.custom_x = 0.18976056033651345;
    msg.custom_y = 0.10026791187823003;
    msg.custom_z = 0.33762760986491025;

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
    msg.setTimeStamp(0.42252222217827873);
    msg.setSource(42858U);
    msg.setSourceEntity(13U);
    msg.setDestination(51023U);
    msg.setDestinationEntity(161U);
    msg.bias_psi = 0.3845220891076758;
    msg.bias_r = 0.9986748116173575;
    msg.cog = 0.1904882106366097;
    msg.cyaw = 0.3187447433207403;
    msg.lbl_rej_level = 0.4314057398741483;
    msg.gps_rej_level = 0.2252311749518906;
    msg.custom_x = 0.2934117256935941;
    msg.custom_y = 0.20586163376195354;
    msg.custom_z = 0.3769275438221905;

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
    msg.setTimeStamp(0.590103533436623);
    msg.setSource(52014U);
    msg.setSourceEntity(25U);
    msg.setDestination(49271U);
    msg.setDestinationEntity(249U);
    msg.bias_psi = 0.01964554641370886;
    msg.bias_r = 0.7072351558322172;
    msg.cog = 0.49200347893968444;
    msg.cyaw = 0.5122322577723037;
    msg.lbl_rej_level = 0.3296701788576484;
    msg.gps_rej_level = 0.5051758459596696;
    msg.custom_x = 0.8994982927028778;
    msg.custom_y = 0.5994208486971371;
    msg.custom_z = 0.8735437132688199;

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
    msg.setTimeStamp(0.9175970280426853);
    msg.setSource(21002U);
    msg.setSourceEntity(252U);
    msg.setDestination(13937U);
    msg.setDestinationEntity(87U);
    msg.utc_time = 0.4413381107304353;
    msg.reason = 97U;

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
    msg.setTimeStamp(0.5486568108498668);
    msg.setSource(27101U);
    msg.setSourceEntity(118U);
    msg.setDestination(43463U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.17119355136338443;
    msg.reason = 53U;

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
    msg.setTimeStamp(0.013053353439835824);
    msg.setSource(9397U);
    msg.setSourceEntity(247U);
    msg.setDestination(64193U);
    msg.setDestinationEntity(67U);
    msg.utc_time = 0.6912861021616259;
    msg.reason = 132U;

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
    msg.setTimeStamp(0.4011224649924088);
    msg.setSource(33190U);
    msg.setSourceEntity(79U);
    msg.setDestination(18237U);
    msg.setDestinationEntity(247U);
    msg.id = 195U;
    msg.range = 0.5160869732712665;
    msg.acceptance = 123U;

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
    msg.setTimeStamp(0.5467440782399994);
    msg.setSource(2896U);
    msg.setSourceEntity(198U);
    msg.setDestination(56926U);
    msg.setDestinationEntity(246U);
    msg.id = 1U;
    msg.range = 0.4636842914362519;
    msg.acceptance = 105U;

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
    msg.setTimeStamp(0.2968817505777336);
    msg.setSource(58706U);
    msg.setSourceEntity(196U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(111U);
    msg.id = 239U;
    msg.range = 0.9343134902373929;
    msg.acceptance = 202U;

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
    msg.setTimeStamp(0.6905704740866058);
    msg.setSource(55342U);
    msg.setSourceEntity(155U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(172U);
    msg.type = 238U;
    msg.reason = 68U;
    msg.value = 0.9601140742304761;
    msg.timestep = 0.6746163691977883;

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
    msg.setTimeStamp(0.9946096537606989);
    msg.setSource(62877U);
    msg.setSourceEntity(127U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(216U);
    msg.type = 132U;
    msg.reason = 108U;
    msg.value = 0.7357773109850042;
    msg.timestep = 0.26892365314168165;

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
    msg.setTimeStamp(0.47809031620303377);
    msg.setSource(48101U);
    msg.setSourceEntity(231U);
    msg.setDestination(14234U);
    msg.setDestinationEntity(128U);
    msg.type = 93U;
    msg.reason = 3U;
    msg.value = 0.9514715760574204;
    msg.timestep = 0.5855980087226414;

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
    msg.setTimeStamp(0.0395648584502144);
    msg.setSource(19449U);
    msg.setSourceEntity(229U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(69U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GVSKSUBVGFKNOUDEYCHFIJXA");
    tmp_msg_0.lat = 0.9692827883706052;
    tmp_msg_0.lon = 0.6774077574632758;
    tmp_msg_0.depth = 0.46607310418355374;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 244U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10969474821919778;
    msg.y = 0.762914961689033;
    msg.var_x = 0.8979126027198587;
    msg.var_y = 0.9123349859573268;
    msg.distance = 0.2300725844381183;

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
    msg.setTimeStamp(0.14422314377859835);
    msg.setSource(57490U);
    msg.setSourceEntity(188U);
    msg.setDestination(48520U);
    msg.setDestinationEntity(167U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZMWFVTJXMHPGWAXTSWIZSUTCHOSPFINNIYIMKJCJQVWFOWFDOTALCFBSNKXNDDXGBYKXEGRWEPSKNRGCAAEIYUBAKUXTYYDCDMMITIEVNPQTPZAQVIUKISVRZLBPGL");
    tmp_msg_0.lat = 0.4148811260949512;
    tmp_msg_0.lon = 0.6246000211425793;
    tmp_msg_0.depth = 0.2537112474280949;
    tmp_msg_0.query_channel = 243U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 8U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6649667627581437;
    msg.y = 0.6407376611608196;
    msg.var_x = 0.6190131311070631;
    msg.var_y = 0.34828823793196073;
    msg.distance = 0.9152883772294955;

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
    msg.setTimeStamp(0.5665543046041482);
    msg.setSource(42037U);
    msg.setSourceEntity(189U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(189U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DSLHTLOKFJIWZNXNNHIBSLGPJJPBSMADQROEMPIYGRXEIBNABIDXJNDLXMDQKPPVZOTQIEVHWOSCGILCRAWCGIUMKEDPHUYLYOVRGEVCNFCUZXCFRHROMTYYBARLIUNTNWFQXGEDOZVEYWGYVOMXUZUZYXCPXZSAUQMRKTDTSELBJGJHMZBP");
    tmp_msg_0.lat = 0.1286525748326911;
    tmp_msg_0.lon = 0.009298044644038495;
    tmp_msg_0.depth = 0.5922922019872744;
    tmp_msg_0.query_channel = 19U;
    tmp_msg_0.reply_channel = 105U;
    tmp_msg_0.transponder_delay = 101U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4227466301442552;
    msg.y = 0.8720148884932838;
    msg.var_x = 0.720195019804332;
    msg.var_y = 0.27073637947551665;
    msg.distance = 0.3458943772023434;

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
    msg.setTimeStamp(0.1253271912254197);
    msg.setSource(49916U);
    msg.setSourceEntity(133U);
    msg.setDestination(4481U);
    msg.setDestinationEntity(177U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.7439783848070342);
    msg.setSource(19933U);
    msg.setSourceEntity(36U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(65U);
    msg.state = 163U;

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
    msg.setTimeStamp(0.79133634472059);
    msg.setSource(38005U);
    msg.setSourceEntity(145U);
    msg.setDestination(26632U);
    msg.setDestinationEntity(90U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.3248887459294517);
    msg.setSource(38342U);
    msg.setSourceEntity(16U);
    msg.setDestination(7745U);
    msg.setDestinationEntity(96U);
    msg.x = 0.5420683577732277;
    msg.y = 0.755761263574561;
    msg.z = 0.6555292469955538;

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
    msg.setTimeStamp(0.5325089288276816);
    msg.setSource(2474U);
    msg.setSourceEntity(226U);
    msg.setDestination(63538U);
    msg.setDestinationEntity(228U);
    msg.x = 0.41972187355619484;
    msg.y = 0.6051990991166996;
    msg.z = 0.40998885949252994;

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
    msg.setTimeStamp(0.722576506849234);
    msg.setSource(62491U);
    msg.setSourceEntity(221U);
    msg.setDestination(38891U);
    msg.setDestinationEntity(218U);
    msg.x = 0.2760942557001298;
    msg.y = 0.9944267928409162;
    msg.z = 0.5167845830282998;

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
    msg.setTimeStamp(0.8394611489397472);
    msg.setSource(41501U);
    msg.setSourceEntity(61U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(147U);
    msg.va = 0.10803645675300377;
    msg.aoa = 0.9585049407136471;
    msg.ssa = 0.5648567956038476;

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
    msg.setTimeStamp(0.7867013673941463);
    msg.setSource(57277U);
    msg.setSourceEntity(32U);
    msg.setDestination(50445U);
    msg.setDestinationEntity(14U);
    msg.va = 0.782670359288462;
    msg.aoa = 0.18016446196380098;
    msg.ssa = 0.23695061077311097;

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
    msg.setTimeStamp(0.02913604505097689);
    msg.setSource(41902U);
    msg.setSourceEntity(173U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(199U);
    msg.va = 0.9569690986476922;
    msg.aoa = 0.02168080768843872;
    msg.ssa = 0.5199408032627971;

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
    msg.setTimeStamp(0.885429098571772);
    msg.setSource(50804U);
    msg.setSourceEntity(31U);
    msg.setDestination(123U);
    msg.setDestinationEntity(249U);
    msg.value = 0.5207933774840016;

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
    msg.setTimeStamp(0.9617677989163591);
    msg.setSource(41436U);
    msg.setSourceEntity(79U);
    msg.setDestination(59497U);
    msg.setDestinationEntity(78U);
    msg.value = 0.4541534763421896;

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
    msg.setTimeStamp(0.07834790471537001);
    msg.setSource(872U);
    msg.setSourceEntity(191U);
    msg.setDestination(10369U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6933160131249835;

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
    msg.setTimeStamp(0.5102389819930762);
    msg.setSource(16774U);
    msg.setSourceEntity(11U);
    msg.setDestination(36352U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9958662802606385;
    msg.z_units = 213U;

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
    msg.setTimeStamp(0.1289379876997433);
    msg.setSource(3645U);
    msg.setSourceEntity(8U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5379113824148787;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.47725638192669184);
    msg.setSource(31990U);
    msg.setSourceEntity(43U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9850200193611225;
    msg.z_units = 212U;

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
    msg.setTimeStamp(0.9759884577307616);
    msg.setSource(16411U);
    msg.setSourceEntity(188U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(112U);
    msg.value = 0.2550007778652067;
    msg.speed_units = 102U;

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
    msg.setTimeStamp(0.6664509068818585);
    msg.setSource(42708U);
    msg.setSourceEntity(44U);
    msg.setDestination(40499U);
    msg.setDestinationEntity(211U);
    msg.value = 0.28519963032290996;
    msg.speed_units = 171U;

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
    msg.setTimeStamp(0.8650613300267342);
    msg.setSource(19724U);
    msg.setSourceEntity(211U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(90U);
    msg.value = 0.7364692430563105;
    msg.speed_units = 200U;

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
    msg.setTimeStamp(0.6880458891628093);
    msg.setSource(48034U);
    msg.setSourceEntity(196U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9855826032817339;

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
    msg.setTimeStamp(0.6504001227795534);
    msg.setSource(42100U);
    msg.setSourceEntity(91U);
    msg.setDestination(47215U);
    msg.setDestinationEntity(128U);
    msg.value = 0.28378922631965375;

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
    msg.setTimeStamp(0.30989365781607103);
    msg.setSource(20003U);
    msg.setSourceEntity(28U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(223U);
    msg.value = 0.31818465258200557;

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
    msg.setTimeStamp(0.31275219011108835);
    msg.setSource(57222U);
    msg.setSourceEntity(120U);
    msg.setDestination(51494U);
    msg.setDestinationEntity(35U);
    msg.value = 0.2918694958536102;

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
    msg.setTimeStamp(0.09518317311072133);
    msg.setSource(14905U);
    msg.setSourceEntity(119U);
    msg.setDestination(62302U);
    msg.setDestinationEntity(235U);
    msg.value = 0.42953381177875816;

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
    msg.setTimeStamp(0.5247314638440475);
    msg.setSource(51588U);
    msg.setSourceEntity(85U);
    msg.setDestination(61562U);
    msg.setDestinationEntity(227U);
    msg.value = 0.948698524742992;

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
    msg.setTimeStamp(0.40092239869367097);
    msg.setSource(61582U);
    msg.setSourceEntity(38U);
    msg.setDestination(52083U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8502558735732536;

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
    msg.setTimeStamp(0.3958844924918766);
    msg.setSource(33787U);
    msg.setSourceEntity(156U);
    msg.setDestination(45950U);
    msg.setDestinationEntity(49U);
    msg.value = 0.07655717394214234;

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
    msg.setTimeStamp(0.732299634221062);
    msg.setSource(62354U);
    msg.setSourceEntity(171U);
    msg.setDestination(8274U);
    msg.setDestinationEntity(127U);
    msg.value = 0.1571101471473384;

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
    msg.setTimeStamp(0.42731841019248473);
    msg.setSource(36920U);
    msg.setSourceEntity(114U);
    msg.setDestination(48155U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 3559376381U;
    msg.start_lat = 0.4746742865794651;
    msg.start_lon = 0.15696457255710505;
    msg.start_z = 0.7856919915525744;
    msg.start_z_units = 217U;
    msg.end_lat = 0.4883020134717083;
    msg.end_lon = 0.23173301013165382;
    msg.end_z = 0.6872404826732058;
    msg.end_z_units = 101U;
    msg.speed = 0.10444674561516654;
    msg.speed_units = 207U;
    msg.lradius = 0.706085461382381;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.8266212761877657);
    msg.setSource(46518U);
    msg.setSourceEntity(249U);
    msg.setDestination(10940U);
    msg.setDestinationEntity(202U);
    msg.path_ref = 4128891817U;
    msg.start_lat = 0.483745675086647;
    msg.start_lon = 0.41753422772509585;
    msg.start_z = 0.49644640876966417;
    msg.start_z_units = 229U;
    msg.end_lat = 0.35796226176559454;
    msg.end_lon = 0.03034057955013114;
    msg.end_z = 0.9524485378163663;
    msg.end_z_units = 56U;
    msg.speed = 0.3647023998447537;
    msg.speed_units = 195U;
    msg.lradius = 0.2725400212610425;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.13282468789254487);
    msg.setSource(48442U);
    msg.setSourceEntity(119U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 3595726664U;
    msg.start_lat = 0.08782341291673945;
    msg.start_lon = 0.8515308543396112;
    msg.start_z = 0.7068825266049243;
    msg.start_z_units = 177U;
    msg.end_lat = 0.8012955928537903;
    msg.end_lon = 0.3908098715777819;
    msg.end_z = 0.649017618084913;
    msg.end_z_units = 207U;
    msg.speed = 0.9522369497784907;
    msg.speed_units = 121U;
    msg.lradius = 0.8558027432760028;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.035587264661741336);
    msg.setSource(60379U);
    msg.setSourceEntity(211U);
    msg.setDestination(33607U);
    msg.setDestinationEntity(245U);
    msg.x = 0.20296814382844608;
    msg.y = 0.7777764619599519;
    msg.z = 0.5635788791447222;
    msg.k = 0.2282194615120744;
    msg.m = 0.7064104570183012;
    msg.n = 0.21080621458065307;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.4206308144830222);
    msg.setSource(15464U);
    msg.setSourceEntity(185U);
    msg.setDestination(64917U);
    msg.setDestinationEntity(113U);
    msg.x = 0.39522643548376835;
    msg.y = 0.5468141912200962;
    msg.z = 0.6047168717480964;
    msg.k = 0.479024551311233;
    msg.m = 0.9470908892102855;
    msg.n = 0.6592016796043676;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.8906507871733889);
    msg.setSource(20649U);
    msg.setSourceEntity(201U);
    msg.setDestination(51936U);
    msg.setDestinationEntity(203U);
    msg.x = 0.07575716897642903;
    msg.y = 0.9403487190934159;
    msg.z = 0.17556163302257533;
    msg.k = 0.08357594797474521;
    msg.m = 0.670726712065237;
    msg.n = 0.707793917403896;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.4631248386458868);
    msg.setSource(42573U);
    msg.setSourceEntity(45U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8354907187403482;

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
    msg.setTimeStamp(0.31057858539922567);
    msg.setSource(53849U);
    msg.setSourceEntity(178U);
    msg.setDestination(30419U);
    msg.setDestinationEntity(208U);
    msg.value = 0.7523573360486105;

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
    msg.setTimeStamp(0.8817994680186714);
    msg.setSource(31394U);
    msg.setSourceEntity(205U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(129U);
    msg.value = 0.8360564568508773;

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
    msg.setTimeStamp(0.36779432927347433);
    msg.setSource(21230U);
    msg.setSourceEntity(153U);
    msg.setDestination(31541U);
    msg.setDestinationEntity(199U);
    msg.u = 0.5851916716352881;
    msg.v = 0.7808285325489075;
    msg.w = 0.09269543265866276;
    msg.p = 0.6795699003422538;
    msg.q = 0.3122467687813719;
    msg.r = 0.33803635447478886;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.6294798376717834);
    msg.setSource(40635U);
    msg.setSourceEntity(99U);
    msg.setDestination(45991U);
    msg.setDestinationEntity(159U);
    msg.u = 0.7096353111247238;
    msg.v = 0.080110468659646;
    msg.w = 0.08625618959584724;
    msg.p = 0.9328348970180566;
    msg.q = 0.31174570339284224;
    msg.r = 0.8568322157900392;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.7695175419034713);
    msg.setSource(57966U);
    msg.setSourceEntity(235U);
    msg.setDestination(46523U);
    msg.setDestinationEntity(21U);
    msg.u = 0.21347953384367313;
    msg.v = 0.8709182741566663;
    msg.w = 0.7327730543574116;
    msg.p = 0.12600262487849145;
    msg.q = 0.3455955372194255;
    msg.r = 0.8923784545989891;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.4784600249628731);
    msg.setSource(9051U);
    msg.setSourceEntity(33U);
    msg.setDestination(36712U);
    msg.setDestinationEntity(158U);
    msg.path_ref = 2039975865U;
    msg.start_lat = 0.758043589735413;
    msg.start_lon = 0.22377254935099866;
    msg.start_z = 0.0735193877764917;
    msg.start_z_units = 213U;
    msg.end_lat = 0.9050930855809882;
    msg.end_lon = 0.45668678142542163;
    msg.end_z = 0.7737318339839778;
    msg.end_z_units = 56U;
    msg.lradius = 0.31621054640917123;
    msg.flags = 110U;
    msg.x = 0.5326885642268704;
    msg.y = 0.07307445835712467;
    msg.z = 0.24539105459478383;
    msg.vx = 0.20325643982895447;
    msg.vy = 0.0972687067361252;
    msg.vz = 0.2441245067518183;
    msg.course_error = 0.3291537281158189;
    msg.eta = 54770U;

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
    msg.setTimeStamp(0.35792558532197016);
    msg.setSource(7827U);
    msg.setSourceEntity(109U);
    msg.setDestination(17480U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 1380605589U;
    msg.start_lat = 0.3026809369000317;
    msg.start_lon = 0.669978008733067;
    msg.start_z = 0.3401206082128382;
    msg.start_z_units = 58U;
    msg.end_lat = 0.9013096424500007;
    msg.end_lon = 0.8221151512523855;
    msg.end_z = 0.6622769267279087;
    msg.end_z_units = 68U;
    msg.lradius = 0.14933565721661957;
    msg.flags = 153U;
    msg.x = 0.9537111457721094;
    msg.y = 0.4110711339069849;
    msg.z = 0.20655565320842817;
    msg.vx = 0.1760750564629302;
    msg.vy = 0.5582152483504549;
    msg.vz = 0.12869969910345336;
    msg.course_error = 0.5266735660107555;
    msg.eta = 29048U;

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
    msg.setTimeStamp(0.8258716293778131);
    msg.setSource(18159U);
    msg.setSourceEntity(91U);
    msg.setDestination(34985U);
    msg.setDestinationEntity(187U);
    msg.path_ref = 3673521990U;
    msg.start_lat = 0.6674876388459244;
    msg.start_lon = 0.9591158629445246;
    msg.start_z = 0.9493642171431741;
    msg.start_z_units = 210U;
    msg.end_lat = 0.15482860336998627;
    msg.end_lon = 0.42469397538231346;
    msg.end_z = 0.4327745687712208;
    msg.end_z_units = 31U;
    msg.lradius = 0.30465754483779306;
    msg.flags = 4U;
    msg.x = 0.2109599612608467;
    msg.y = 0.1987041623964262;
    msg.z = 0.15453671979750705;
    msg.vx = 0.8033911394819184;
    msg.vy = 0.9542781572181285;
    msg.vz = 0.44615159219969625;
    msg.course_error = 0.30894975502246746;
    msg.eta = 15993U;

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
    msg.setTimeStamp(0.9186732453072327);
    msg.setSource(59377U);
    msg.setSourceEntity(100U);
    msg.setDestination(4360U);
    msg.setDestinationEntity(172U);
    msg.k = 0.6235306337856088;
    msg.m = 0.45758293128651517;
    msg.n = 0.6595632106121561;

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
    msg.setTimeStamp(0.19921821631592707);
    msg.setSource(29734U);
    msg.setSourceEntity(93U);
    msg.setDestination(56785U);
    msg.setDestinationEntity(35U);
    msg.k = 0.2086482555189565;
    msg.m = 0.9058935779175433;
    msg.n = 0.928094290996476;

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
    msg.setTimeStamp(0.5861985441768995);
    msg.setSource(64573U);
    msg.setSourceEntity(1U);
    msg.setDestination(24981U);
    msg.setDestinationEntity(211U);
    msg.k = 0.918765700440739;
    msg.m = 0.836617634481482;
    msg.n = 0.1357124906569459;

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
    msg.setTimeStamp(0.5019519786342119);
    msg.setSource(63629U);
    msg.setSourceEntity(51U);
    msg.setDestination(23118U);
    msg.setDestinationEntity(31U);
    msg.p = 0.5899009011246847;
    msg.i = 0.1745147661058697;
    msg.d = 0.7135801299317245;
    msg.a = 0.5739275472531301;

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
    msg.setTimeStamp(0.15234572293626092);
    msg.setSource(16774U);
    msg.setSourceEntity(16U);
    msg.setDestination(44116U);
    msg.setDestinationEntity(70U);
    msg.p = 0.08366946225795324;
    msg.i = 0.3704348881069329;
    msg.d = 0.2959123172566539;
    msg.a = 0.4770192344273151;

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
    msg.setTimeStamp(0.5900853952488926);
    msg.setSource(8517U);
    msg.setSourceEntity(131U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(33U);
    msg.p = 0.4113551408271726;
    msg.i = 0.8460303551539722;
    msg.d = 0.3092355670679461;
    msg.a = 0.10452110762235067;

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
    msg.setTimeStamp(0.6169892156312741);
    msg.setSource(37011U);
    msg.setSourceEntity(237U);
    msg.setDestination(740U);
    msg.setDestinationEntity(71U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.3213697804992458);
    msg.setSource(59707U);
    msg.setSourceEntity(252U);
    msg.setDestination(11733U);
    msg.setDestinationEntity(11U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.5202916352862397);
    msg.setSource(36607U);
    msg.setSourceEntity(197U);
    msg.setDestination(4885U);
    msg.setDestinationEntity(248U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.6837038641670178);
    msg.setSource(16377U);
    msg.setSourceEntity(77U);
    msg.setDestination(24143U);
    msg.setDestinationEntity(59U);
    msg.x = 0.9259167413081546;
    msg.y = 0.25476213521404045;
    msg.z = 0.9663388841504432;
    msg.vx = 0.5793851689177908;
    msg.vy = 0.13328479581722286;
    msg.vz = 0.958731264185997;
    msg.ax = 0.40637512848765744;
    msg.ay = 0.5579992738208307;
    msg.az = 0.3925166035241986;
    msg.flags = 13826U;

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
    msg.setTimeStamp(0.6449595881209839);
    msg.setSource(23393U);
    msg.setSourceEntity(40U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(240U);
    msg.x = 0.922451921896922;
    msg.y = 0.6932277354717643;
    msg.z = 0.286207808392717;
    msg.vx = 0.807692067170884;
    msg.vy = 0.5775593682337814;
    msg.vz = 0.6081881208871768;
    msg.ax = 0.860120157133923;
    msg.ay = 0.8971880881091631;
    msg.az = 0.061955613894100536;
    msg.flags = 8570U;

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
    msg.setTimeStamp(0.7670336777241904);
    msg.setSource(54528U);
    msg.setSourceEntity(93U);
    msg.setDestination(42334U);
    msg.setDestinationEntity(167U);
    msg.x = 0.047890884061247974;
    msg.y = 0.3798056268269945;
    msg.z = 0.4557207866666608;
    msg.vx = 0.09286745998778756;
    msg.vy = 0.10703392021643177;
    msg.vz = 0.08533847835191133;
    msg.ax = 0.9666067158408002;
    msg.ay = 0.6806501154113693;
    msg.az = 0.12755454502231367;
    msg.flags = 4822U;

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
    msg.setTimeStamp(0.581130935595922);
    msg.setSource(30144U);
    msg.setSourceEntity(105U);
    msg.setDestination(10838U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9723290845919679;

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
    msg.setTimeStamp(0.3485664115462398);
    msg.setSource(36030U);
    msg.setSourceEntity(49U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(115U);
    msg.value = 0.2259045918455851;

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
    msg.setTimeStamp(0.1337375218433815);
    msg.setSource(5103U);
    msg.setSourceEntity(67U);
    msg.setDestination(35569U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8182149761836681;

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
    msg.setTimeStamp(0.34358414825945816);
    msg.setSource(42058U);
    msg.setSourceEntity(195U);
    msg.setDestination(7961U);
    msg.setDestinationEntity(28U);
    msg.timeout = 26509U;
    msg.lat = 0.5338457088363705;
    msg.lon = 0.8478372545942057;
    msg.z = 0.9578632368752183;
    msg.z_units = 9U;
    msg.speed = 0.7809785390094922;
    msg.speed_units = 186U;
    msg.roll = 0.4267598673371489;
    msg.pitch = 0.37947866840294464;
    msg.yaw = 0.5557079208747848;
    msg.custom.assign("HWCMLBRLIJVZQGHAOQLDSOYTUEAQPTAQJDGWESKWXNQUUJFPHTQXMFUVENZHLVGRLCZSZTGEXAILFOHEOBFKPYIBZODWDDCLSWMIXNEOUMISPEZXFVENWMCKYBRGOCUHXIVHIMLOHGTDGPXKMFIRRDSDOXEHQAYA");

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
    msg.setTimeStamp(0.8204930757738063);
    msg.setSource(33700U);
    msg.setSourceEntity(170U);
    msg.setDestination(52551U);
    msg.setDestinationEntity(84U);
    msg.timeout = 39452U;
    msg.lat = 0.8161961326946275;
    msg.lon = 0.017590175251877893;
    msg.z = 0.25446655401943574;
    msg.z_units = 146U;
    msg.speed = 0.707291963990942;
    msg.speed_units = 62U;
    msg.roll = 0.9540339460455916;
    msg.pitch = 0.3935916388438937;
    msg.yaw = 0.6330024096640217;
    msg.custom.assign("AQRPUDMJXTJCKJKTBAZQSCUZWTJGUNOZNPMHWRDSOGPDIXNXYWCQACMVXCVKZZQAQYANESXEBGUYOVCKYDGBPKBEHXQFLWWUTIQIDWIMRPBHYLIELZINTLPBSXWNADHMURZKRWYCEDRANDBQGQOFPKZCFEMRGHTOZTEFTCJSVVSVFPFGMNOLRWKZYC");

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
    msg.setTimeStamp(0.7741714363662736);
    msg.setSource(4700U);
    msg.setSourceEntity(44U);
    msg.setDestination(14196U);
    msg.setDestinationEntity(40U);
    msg.timeout = 3759U;
    msg.lat = 0.4135876428108869;
    msg.lon = 0.3747032177099864;
    msg.z = 0.8982726363615463;
    msg.z_units = 106U;
    msg.speed = 0.9494451425265785;
    msg.speed_units = 46U;
    msg.roll = 0.003789907678520943;
    msg.pitch = 0.5512540253850444;
    msg.yaw = 0.9600181782886293;
    msg.custom.assign("EKEXJKNQYZLAWJOJMIEVAEDYAKFWGGQZSFWIJBXTCBVQXTIHLGDII");

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
    msg.setTimeStamp(0.8243437982112374);
    msg.setSource(49170U);
    msg.setSourceEntity(159U);
    msg.setDestination(45338U);
    msg.setDestinationEntity(36U);
    msg.timeout = 11899U;
    msg.lat = 0.7831321395952551;
    msg.lon = 0.2837538023865849;
    msg.z = 0.966091430119167;
    msg.z_units = 117U;
    msg.speed = 0.9461854211844631;
    msg.speed_units = 47U;
    msg.duration = 57255U;
    msg.radius = 0.7933234563705128;
    msg.flags = 101U;
    msg.custom.assign("FALYWLZDMDTKBGBQJMJGHAPNRFOUYRTGVSSEYLHBMOAWTDIQPIVFSQKRPCJGWGIRKIKPZSNCXPRWIKNKBOEKQDZVZGYKXOCZRXRVUWANUPFYUJHILSIFQUVLFNJEKUZOQBKAWUDRFMEFLANDXXDTCUEAMOEHSCOCQGUJMWCC");

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
    msg.setTimeStamp(0.47468556528071704);
    msg.setSource(48279U);
    msg.setSourceEntity(171U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(35U);
    msg.timeout = 21721U;
    msg.lat = 0.6286915242476534;
    msg.lon = 0.9795412962778055;
    msg.z = 0.2191044409707057;
    msg.z_units = 62U;
    msg.speed = 0.7499563308304962;
    msg.speed_units = 1U;
    msg.duration = 44103U;
    msg.radius = 0.09685493417267022;
    msg.flags = 250U;
    msg.custom.assign("POQOLXHPBXHVGASEUPEVTGJFDNAIYOQDPEASX");

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
    msg.setTimeStamp(0.15438293874992726);
    msg.setSource(17366U);
    msg.setSourceEntity(154U);
    msg.setDestination(25511U);
    msg.setDestinationEntity(7U);
    msg.timeout = 18612U;
    msg.lat = 0.48978384952978826;
    msg.lon = 0.5136412062987545;
    msg.z = 0.4330112282068923;
    msg.z_units = 123U;
    msg.speed = 0.10046049327614859;
    msg.speed_units = 0U;
    msg.duration = 10148U;
    msg.radius = 0.5728292740101346;
    msg.flags = 233U;
    msg.custom.assign("QMDSSNJCSJKXRGORFPPCETBFAFPHKVBYOQSEVRUUXAIXUZRHLGFFYMNLUEQNSWPIWTABCWWJRGEDVHLGPMZUYCEZJKTOTKBZIWZDSHRBXJDSFNVTQPIUAICMPYBTYUTXVCWOGECKGHICDIMLERDNDFSILEOHWXYCDFVBTXRLLQEVNXVOFRGKOPGPPYHSNGDXKQOZALMNJXMHBUQWNJUMMAKJMZIYASEOATTZYQJHNJBZV");

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
    msg.setTimeStamp(0.5944242303444914);
    msg.setSource(20587U);
    msg.setSourceEntity(38U);
    msg.setDestination(62498U);
    msg.setDestinationEntity(185U);
    msg.custom.assign("VLKCJPVRTBZHZPROYSEGVYUCMXMJMPGRXZSDPSBPGEMRFIMCBSLKEKBYOEKFPPUCWILOOINDCFYIPOYRXADUUHJFJAFTNNBGYYHLDUTNQLPBXAZREZQKTWOOINJJVDEHEUQFCVDQWPNGEQAILSACXBWJUNXXFHVSHYYUHIDBMTO");

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
    msg.setTimeStamp(0.3568860771825596);
    msg.setSource(14081U);
    msg.setSourceEntity(40U);
    msg.setDestination(61764U);
    msg.setDestinationEntity(46U);
    msg.custom.assign("AQLUGCEXVEJIGBATESTQLWQYXYCMFENZXLIPKZVBIBWGHINRPBJERPTVTYKPMABRPQFNXYZJIAHPEOYLWIUSOJTCYRRVCUTDU");

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
    msg.setTimeStamp(0.45167461507219564);
    msg.setSource(21945U);
    msg.setSourceEntity(173U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(108U);
    msg.custom.assign("SVTULWESKYASZODIMGJXJYGRUKCZEUDTFDDPACETJZFYMFSYGWKFPVDBRIAREFFPZBKXBOQFCSLPCCZEOSACHYOIICOKREUWTGVKLBHTXRRIVPQLPHXAZGYVYPOMQLNUT");

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
    msg.setTimeStamp(0.16832985867982508);
    msg.setSource(24730U);
    msg.setSourceEntity(0U);
    msg.setDestination(61827U);
    msg.setDestinationEntity(75U);
    msg.timeout = 25111U;
    msg.lat = 0.873286564832613;
    msg.lon = 0.1831770191859593;
    msg.z = 0.8933665333741025;
    msg.z_units = 111U;
    msg.duration = 43615U;
    msg.speed = 0.4750864860825369;
    msg.speed_units = 112U;
    msg.type = 165U;
    msg.radius = 0.3858255676395431;
    msg.length = 0.23275041968616594;
    msg.bearing = 0.7419123158596126;
    msg.direction = 95U;
    msg.custom.assign("BNUKAJWFRMQCIVUAHMMRRQKDVYINBQOQDFEOYZPBZCLMJMRJXVTWUSEPE");

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
    msg.setTimeStamp(0.26945195665800203);
    msg.setSource(46915U);
    msg.setSourceEntity(27U);
    msg.setDestination(28178U);
    msg.setDestinationEntity(70U);
    msg.timeout = 46380U;
    msg.lat = 0.9413572847086195;
    msg.lon = 0.16198380019226244;
    msg.z = 0.9024001425758845;
    msg.z_units = 137U;
    msg.duration = 15209U;
    msg.speed = 0.007094714726384677;
    msg.speed_units = 166U;
    msg.type = 148U;
    msg.radius = 0.20057694117945324;
    msg.length = 0.8506567138720319;
    msg.bearing = 0.9753414352802687;
    msg.direction = 151U;
    msg.custom.assign("EALIKLOAQAOXKVMQHQHCSULGCOONTBEIFMZEYARVFRYJWJWDMXWUAGLHAHLGDHRDAKQF");

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
    msg.setTimeStamp(0.518858346722886);
    msg.setSource(45595U);
    msg.setSourceEntity(4U);
    msg.setDestination(10246U);
    msg.setDestinationEntity(228U);
    msg.timeout = 8125U;
    msg.lat = 0.3710853450202407;
    msg.lon = 0.7119001405602359;
    msg.z = 0.9345476233136174;
    msg.z_units = 29U;
    msg.duration = 23539U;
    msg.speed = 0.28016882072329186;
    msg.speed_units = 144U;
    msg.type = 159U;
    msg.radius = 0.9899278684198248;
    msg.length = 0.9941685439726968;
    msg.bearing = 0.8683920068683071;
    msg.direction = 186U;
    msg.custom.assign("IEKPNNJVYNPJUARAXGXEBSCGTTTNGKBXSBKSRPEIJIXWMTJWGDGFOVHSUTGNIMKEFHIPLPVJLVRMZVSRULRVLHMAELQPDDJRLZJQBEPCEXYQYKCLWHDOSHVLAGIZXIUPZPFECQBUDODBYQOZWOEZSUHFYJMCGQAONQMFCJDTVORMUFTMRZFYDOHJIB");

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
    msg.setTimeStamp(0.39079297157825554);
    msg.setSource(23643U);
    msg.setSourceEntity(95U);
    msg.setDestination(21412U);
    msg.setDestinationEntity(136U);
    msg.duration = 57410U;
    msg.custom.assign("YESPXEBOSYEJRNJLAWNFHOPHNZRLPDDTMSEZLJDGLLTKHTLVHZKNSWPFTYWOJBOYGFVHVPGXUJMZCATMA");

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
    msg.setTimeStamp(0.2491083047108541);
    msg.setSource(37872U);
    msg.setSourceEntity(74U);
    msg.setDestination(23553U);
    msg.setDestinationEntity(31U);
    msg.duration = 33692U;
    msg.custom.assign("GAKGSGAFQAGOSSMMYVIDQHYKERDCOJNYKZEVHGKFVSEUWZKLEZFMRZVSJBWOTHVTTDRXOKURVLTUCQELXIZVEFTJWIFQLVWHYCBPSOXRNBNNIBYROQQCJBWHPBAP");

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
    msg.setTimeStamp(0.7643719746005809);
    msg.setSource(21762U);
    msg.setSourceEntity(21U);
    msg.setDestination(62570U);
    msg.setDestinationEntity(6U);
    msg.duration = 55U;
    msg.custom.assign("DJUQRFMGXBXDAAACVHTCMHZCYZCYHVYSGSJLHWUOOHZPBHLDFFPJVCIRCUNIMELIDGETDXYZPDATKWPEUHGPSTRLIGADWFJTMMZIDVVQRHBUIZTFQVIWVWCYKKNUIHMEWSXEAMWGXJU");

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
    msg.setTimeStamp(0.6215567414843612);
    msg.setSource(64698U);
    msg.setSourceEntity(206U);
    msg.setDestination(22192U);
    msg.setDestinationEntity(189U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.23609646642052085;
    msg.control.set(tmp_msg_0);
    msg.duration = 18001U;
    msg.custom.assign("PQIJFUQBWMITBMJPUSDZVJTCRUBLFBBSXHUMIAIAZFIOVBAQWF");

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
    msg.setTimeStamp(0.22512740919692742);
    msg.setSource(56263U);
    msg.setSourceEntity(103U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(167U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.2572215498277356;
    msg.control.set(tmp_msg_0);
    msg.duration = 64559U;
    msg.custom.assign("OGOEZKBTJGCCUYCAAGXZKTLDI");

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
    msg.setTimeStamp(0.20746526554214617);
    msg.setSource(51730U);
    msg.setSourceEntity(35U);
    msg.setDestination(23743U);
    msg.setDestinationEntity(126U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.2738008551991369;
    msg.control.set(tmp_msg_0);
    msg.duration = 4024U;
    msg.custom.assign("BZUQGXARYERGHBBMZIKVOQQTKNAOECPKYLHRQUEFMMLNWPCPJCGWKNWAGJRKHBQXFVYPFXGDMBVNHWJOELDIFQCXYHNAGTSOVNSMMZPKABTAASJTRBLRHKQCKQAZJYEXEQJIQSPUUZSXHDDBLIVRYCAZVUVRZAPCS");

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
    msg.setTimeStamp(0.8251064517978013);
    msg.setSource(22968U);
    msg.setSourceEntity(193U);
    msg.setDestination(14512U);
    msg.setDestinationEntity(129U);
    msg.timeout = 59761U;
    msg.lat = 0.031102836088329977;
    msg.lon = 0.08560982036649933;
    msg.z = 0.7831387734632196;
    msg.z_units = 230U;
    msg.speed = 0.9333168318792205;
    msg.speed_units = 154U;
    msg.bearing = 0.2803502177444702;
    msg.cross_angle = 0.5153253365304613;
    msg.width = 0.6286769229757663;
    msg.length = 0.06600527819287949;
    msg.hstep = 0.831493086485087;
    msg.coff = 130U;
    msg.alternation = 87U;
    msg.flags = 178U;
    msg.custom.assign("VAVWGFNJSCRTDOMYPSKGSVIBDYXPHQXVRCNOLLYPMHVPCXCFVNQYYVGNINUOEEXSTQLDGHTICYFZREEUIZFJLRQRTGKFLDWPSZKPRQWOHAVSYTTZAHULMUPCMONKTTVJULNAZIIHLDIZXQOEEBMCABFUEBITAQNSMBGJUDHRJKIYJJMTXWBHFCFSBFPMAEKBKOCMNAUXAXLPBZE");

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
    msg.setTimeStamp(0.2912738490187613);
    msg.setSource(2408U);
    msg.setSourceEntity(55U);
    msg.setDestination(24023U);
    msg.setDestinationEntity(62U);
    msg.timeout = 18283U;
    msg.lat = 0.11296426802455772;
    msg.lon = 0.447315078322987;
    msg.z = 0.8892255112553581;
    msg.z_units = 98U;
    msg.speed = 0.9152336926322107;
    msg.speed_units = 186U;
    msg.bearing = 0.5192726375044705;
    msg.cross_angle = 0.8276952094099542;
    msg.width = 0.9098274646310578;
    msg.length = 0.9082462241121194;
    msg.hstep = 0.8366058700674973;
    msg.coff = 101U;
    msg.alternation = 242U;
    msg.flags = 166U;
    msg.custom.assign("SPCKISVLEPNMPKQMUDHGOIHWDZPBHWFUWNFYHBREDJAJYCJCYRLXFTKLKAIVXUYQLBXNNQFJAAVHUOLOTFWPMZQGOINEQXZEGTGEDBMJGGUOSFLBJUQGRTTYCDVPRSMWFXRGAVRZDWZRCQKXZMZOMDSAUQXKSZRYHN");

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
    msg.setTimeStamp(0.11798112622202195);
    msg.setSource(56253U);
    msg.setSourceEntity(119U);
    msg.setDestination(52225U);
    msg.setDestinationEntity(4U);
    msg.timeout = 30654U;
    msg.lat = 0.5274887711886055;
    msg.lon = 0.3815564070972268;
    msg.z = 0.40275612584301157;
    msg.z_units = 5U;
    msg.speed = 0.4852022701339872;
    msg.speed_units = 207U;
    msg.bearing = 0.11766463583813491;
    msg.cross_angle = 0.24266246167656425;
    msg.width = 0.8137847511016839;
    msg.length = 0.6997346092983755;
    msg.hstep = 0.9450379220649953;
    msg.coff = 125U;
    msg.alternation = 178U;
    msg.flags = 252U;
    msg.custom.assign("XYEOCFZDXPWAWDCGMVGDFRYBZPKWMTDZQECVFIQXOQCNLKZHRPIMJWRHRALSXMSZIJCLDRLKTMQLWTNUHKBLAPBVHSSFRNUSGNSEKVWINCKQTEJJHGYUARNAFVCPNSWHRFJJQVDOZHXKKWMBALB");

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
    msg.setTimeStamp(0.7310069840316743);
    msg.setSource(3523U);
    msg.setSourceEntity(207U);
    msg.setDestination(8415U);
    msg.setDestinationEntity(128U);
    msg.timeout = 6320U;
    msg.lat = 0.5770961860865532;
    msg.lon = 0.48047102101740125;
    msg.z = 0.37854255616648513;
    msg.z_units = 65U;
    msg.speed = 0.7597093378979969;
    msg.speed_units = 187U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.17555414420526616;
    tmp_msg_0.y = 0.20089236325676618;
    tmp_msg_0.z = 0.35353318964037606;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FGHVKEQDLMBOMRRASKOVYEIIVFSCTHDXBSUXQHYMMNMSVAYJEQPWGOQOOHQIWPRAZJBYLPSANRCKQNZ");

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
    msg.setTimeStamp(0.9731133016649454);
    msg.setSource(34113U);
    msg.setSourceEntity(60U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(70U);
    msg.timeout = 2481U;
    msg.lat = 0.12463198606550996;
    msg.lon = 0.35429854986847054;
    msg.z = 0.6055762897074494;
    msg.z_units = 93U;
    msg.speed = 0.5807647816720356;
    msg.speed_units = 87U;
    msg.custom.assign("HIUOFDVGFKTMKNSZPIAHCGEDFNZFEXYTRPBWF");

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
    msg.setTimeStamp(0.8458414013006537);
    msg.setSource(24391U);
    msg.setSourceEntity(151U);
    msg.setDestination(62652U);
    msg.setDestinationEntity(90U);
    msg.timeout = 11285U;
    msg.lat = 0.9669409472214651;
    msg.lon = 0.15862274599723802;
    msg.z = 0.16038771446073097;
    msg.z_units = 215U;
    msg.speed = 0.6472618798340541;
    msg.speed_units = 11U;
    msg.custom.assign("MGKMFUJJVVBUWFGZRWBOZEQINPISXKLCRTBZGNLQUUAGJHATVKLAWWKEERLKRFMHQYTSRAFEHTOIYXCRZIVPVYGAFUSLGLHQHGLIJQKDBWBAAEJORTWDQCUIIFCNRVCODXBHBOGBSSDOCPJZUFWXXCWDCSJYYSYCMDPVTYNPZAQQMGZBZTKPBOLHEKXNNZFKOXQNPXOPPNIMIHETHUADMELJYNYXLZ");

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
    msg.setTimeStamp(0.4685583048941927);
    msg.setSource(1506U);
    msg.setSourceEntity(72U);
    msg.setDestination(6581U);
    msg.setDestinationEntity(233U);
    msg.x = 0.6441547882324322;
    msg.y = 0.04489141269891095;
    msg.z = 0.4054201055494643;

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
    msg.setTimeStamp(0.42602540714106885);
    msg.setSource(56297U);
    msg.setSourceEntity(160U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(96U);
    msg.x = 0.18613954670725696;
    msg.y = 0.8262272451151214;
    msg.z = 0.128763624029835;

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
    msg.setTimeStamp(0.19523381468674883);
    msg.setSource(16431U);
    msg.setSourceEntity(251U);
    msg.setDestination(32033U);
    msg.setDestinationEntity(84U);
    msg.x = 0.052556595232539194;
    msg.y = 0.6649038742498076;
    msg.z = 0.7359246588691959;

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
    msg.setTimeStamp(0.7634963135565905);
    msg.setSource(50047U);
    msg.setSourceEntity(111U);
    msg.setDestination(14888U);
    msg.setDestinationEntity(68U);
    msg.timeout = 38100U;
    msg.lat = 0.7778067982147887;
    msg.lon = 0.510831832671816;
    msg.z = 0.7411806561214769;
    msg.z_units = 50U;
    msg.amplitude = 0.44823341474302114;
    msg.pitch = 0.5219125522195436;
    msg.speed = 0.5007947526185343;
    msg.speed_units = 42U;
    msg.custom.assign("OBZJDJOTWSNHKBERBJOAUAUMUTYBWUSQIEFGMPKTINLINBURFFGCKCQVWZWTNNLONCZGSUHSCIOPXPWMSIYDZKM");

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
    msg.setTimeStamp(0.14935652344582961);
    msg.setSource(46408U);
    msg.setSourceEntity(244U);
    msg.setDestination(51310U);
    msg.setDestinationEntity(210U);
    msg.timeout = 42009U;
    msg.lat = 0.8677094952047131;
    msg.lon = 0.062173052057099;
    msg.z = 0.6012537811116618;
    msg.z_units = 151U;
    msg.amplitude = 0.5891685288128526;
    msg.pitch = 0.8635121561364223;
    msg.speed = 0.6202260240247235;
    msg.speed_units = 67U;
    msg.custom.assign("ZJKMTNVVYWQLMBTETVQJXVZSFDJUXPKQQQMUTIODYHJZMGNYFQHINNPGJETACBHRJZDEIQAANVFVIRKNKSGRCHULIWLTDAGXYNOFZLBLKZWUWCFYKZRWIDSUTSZCPWOBHTTBRDAELAZCMXPDPKEVDBOWXXNOOCUSMJXHETIKOXURBAYREMWY");

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
    msg.setTimeStamp(0.1535414476312944);
    msg.setSource(44181U);
    msg.setSourceEntity(200U);
    msg.setDestination(52192U);
    msg.setDestinationEntity(174U);
    msg.timeout = 967U;
    msg.lat = 0.5173421608737043;
    msg.lon = 0.13209989368579578;
    msg.z = 0.8676998164397538;
    msg.z_units = 111U;
    msg.amplitude = 0.6864989067495204;
    msg.pitch = 0.9783833911648728;
    msg.speed = 0.9485063786169564;
    msg.speed_units = 37U;
    msg.custom.assign("KUUCDMNWVVMBPLGNKGJQODTWYHNWLIZNPSSGMDPBFIZGLNLLUAPIVAIOKITTXUMNNTOZCZYIWFWTPTYLCRQRUHYNZJQRBBEMSULAMDJTFEIIVPWCXJEWJODXMPKKPQBHAXRMQMGIOEJRBBJCOCVUCDASGKJZKSZEHSPQSBRQREKUGGYFEXBO");

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
    msg.setTimeStamp(0.3972475137496654);
    msg.setSource(1658U);
    msg.setSourceEntity(35U);
    msg.setDestination(59850U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.0739624923274741);
    msg.setSource(49946U);
    msg.setSourceEntity(198U);
    msg.setDestination(34993U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.6459502646427228);
    msg.setSource(18874U);
    msg.setSourceEntity(228U);
    msg.setDestination(26848U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.4336019445633319);
    msg.setSource(57188U);
    msg.setSourceEntity(46U);
    msg.setDestination(48570U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.8527626528611124;
    msg.lon = 0.6665960408235702;
    msg.z = 0.7764432032688137;
    msg.z_units = 208U;
    msg.radius = 0.4781050493725991;
    msg.duration = 7513U;
    msg.speed = 0.22563102958839532;
    msg.speed_units = 59U;
    msg.custom.assign("RWLBYMISVULQYGZFKZWGOARIFQRYCVFEGFPDSDLXNTQGBMTLMNLGLSUOSHVXNQAFSWCINIVMFHSPOWSZNZIKXKJEUJEOJQDDURMBEBKCTGMOOULONPKWATAYQTPBEGRPFIOVNYCQXXPKXKJQBANBDJTMVACKWPZLRYTTIQHUAYWILMEDVRUXEIMCRXTHKGHQAFECJHXISDBYSUDSBYWWGOFRCVCEH");

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
    msg.setTimeStamp(0.4078259498469218);
    msg.setSource(1218U);
    msg.setSourceEntity(142U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.7745857454415064;
    msg.lon = 0.7516165823751931;
    msg.z = 0.0956955347996854;
    msg.z_units = 223U;
    msg.radius = 0.5844856577644472;
    msg.duration = 31821U;
    msg.speed = 0.5028622650758925;
    msg.speed_units = 98U;
    msg.custom.assign("VUYHXKHGOKIRAJOLPBFCIDLASYJMHYQSNWDTGQNILCMMTDOYDSBCHITJEDPIRIRYGPQAFGYKWVXFFUZLDMJLPNKAKGXNWFTPZAVINSVLEOKMQZDHMJBSFCZWQUIUCVRLYORLQBHQTUHKRNEENBJXQBTUXATXHNGJUZDSZWEWZQENFMUJTXKGCABOXBCVJOF");

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
    msg.setTimeStamp(0.974210544667301);
    msg.setSource(50910U);
    msg.setSourceEntity(124U);
    msg.setDestination(20939U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.03388003638689996;
    msg.lon = 0.16785661207295977;
    msg.z = 0.5366065418169589;
    msg.z_units = 114U;
    msg.radius = 0.973866776533934;
    msg.duration = 81U;
    msg.speed = 0.3936514529101651;
    msg.speed_units = 99U;
    msg.custom.assign("VONBUXRFZFZCHCBLKPYXRVNRGWGFGKKQPZHATYLXZFERCJKILOI");

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
    msg.setTimeStamp(0.19008231966871636);
    msg.setSource(9299U);
    msg.setSourceEntity(146U);
    msg.setDestination(21679U);
    msg.setDestinationEntity(202U);
    msg.timeout = 35322U;
    msg.flags = 5U;
    msg.lat = 0.08942062631014003;
    msg.lon = 0.6726836562971069;
    msg.start_z = 0.5178725350123938;
    msg.start_z_units = 209U;
    msg.end_z = 0.465946291621546;
    msg.end_z_units = 143U;
    msg.radius = 0.34641465446546194;
    msg.speed = 0.18009602209526;
    msg.speed_units = 86U;
    msg.custom.assign("BCSGIEKGYDRMASMONIYRPQVOUBXMLKDUUFEMNESABHSQDKNCTXUWOFGPFVOYVHJTFNQZTSJKEBQTCYNDWKBALYFQRMJXHUCLOZLEGLGTYTJDDINNZHJBZRAR");

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
    msg.setTimeStamp(0.596943115019122);
    msg.setSource(49710U);
    msg.setSourceEntity(72U);
    msg.setDestination(18660U);
    msg.setDestinationEntity(16U);
    msg.timeout = 41090U;
    msg.flags = 222U;
    msg.lat = 0.2546607171864861;
    msg.lon = 0.2607205063644893;
    msg.start_z = 0.9240510708435066;
    msg.start_z_units = 12U;
    msg.end_z = 0.1581288463788979;
    msg.end_z_units = 243U;
    msg.radius = 0.8912011530485588;
    msg.speed = 0.09517955384940469;
    msg.speed_units = 67U;
    msg.custom.assign("OBUPSDNCQLCYTHMGRMDRGABPWAVRQLUCYTXWLTMCYYJAYXAIRFKPVJLKXZIOKJFUODQTCJNRFVWDHPJMKYTSF");

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
    msg.setTimeStamp(0.5081120490108513);
    msg.setSource(22503U);
    msg.setSourceEntity(17U);
    msg.setDestination(7880U);
    msg.setDestinationEntity(35U);
    msg.timeout = 23680U;
    msg.flags = 61U;
    msg.lat = 0.9894804816629359;
    msg.lon = 0.0891918000915094;
    msg.start_z = 0.3420399687172547;
    msg.start_z_units = 146U;
    msg.end_z = 0.19741516288653527;
    msg.end_z_units = 109U;
    msg.radius = 0.10460422379573875;
    msg.speed = 0.04963253295730219;
    msg.speed_units = 44U;
    msg.custom.assign("EMPAVUZAYHYPWQNHZASHJQKPCEBJVAIKQGQX");

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
    msg.setTimeStamp(0.8951395482522841);
    msg.setSource(20129U);
    msg.setSourceEntity(85U);
    msg.setDestination(46006U);
    msg.setDestinationEntity(99U);
    msg.timeout = 16432U;
    msg.lat = 0.13603819916116577;
    msg.lon = 0.13334143245104157;
    msg.z = 0.6173492318347492;
    msg.z_units = 234U;
    msg.speed = 0.5824872456702582;
    msg.speed_units = 228U;
    msg.custom.assign("FJWNDPIQTLDPGPUJLMJNXYUNGQEPEKCCNSRJISYJQBTWQDPNVMZLWLXXIEQHGXODEIKBLZAWQBHQXZKHVICODYAKHHLRZTQBCXWVVYEBJUBRRVLRNCOBOHGCZMSGTZMJHYRBKXNJFZPYTGDVUFFKXYKYMEGOHUUCMWDIAOZM");

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
    msg.setTimeStamp(0.4215397910009764);
    msg.setSource(31535U);
    msg.setSourceEntity(153U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(185U);
    msg.timeout = 33056U;
    msg.lat = 0.7547473381719716;
    msg.lon = 0.34798968862399793;
    msg.z = 0.32956782185671696;
    msg.z_units = 59U;
    msg.speed = 0.8225102392241662;
    msg.speed_units = 176U;
    msg.custom.assign("DWJBPDDKLYMOIHJXXZURMHNVKHSQVJYLXYLRPMOJFUNOWDHYCLVZ");

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
    msg.setTimeStamp(0.5183317470760154);
    msg.setSource(46074U);
    msg.setSourceEntity(243U);
    msg.setDestination(36556U);
    msg.setDestinationEntity(120U);
    msg.timeout = 42706U;
    msg.lat = 0.6435911748129861;
    msg.lon = 0.3685969530052601;
    msg.z = 0.06305690312360268;
    msg.z_units = 238U;
    msg.speed = 0.22327006803495353;
    msg.speed_units = 170U;
    msg.custom.assign("PLLNLEAACBPZJTIQDDYFRPXVQVDUSIVFVIWXBWSJGYOJVMYHLCHHIANCQAUCFOBHOTLMNRTPYKMIMFADPXVUJWBPGEMZOZJLEIDTSBSPVRZGQHXAKEKGDCNQGGHSOJSXENBFFWXCVYDUKLYUMRZFNTQOEWJCGFOXOLWTSBIYKQQCSNFDMADZRJTRIAIBGNZZPWBZHTKLTYVCEXQMKOKUMUVANTCUXPNW");

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
    msg.setTimeStamp(0.6747772809581875);
    msg.setSource(27981U);
    msg.setSourceEntity(173U);
    msg.setDestination(15225U);
    msg.setDestinationEntity(140U);
    msg.x = 0.7698692034168693;
    msg.y = 0.22023129703479305;
    msg.z = 0.7851650583518246;
    msg.t = 0.5841844462380625;

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
    msg.setTimeStamp(0.1396003587861916);
    msg.setSource(22960U);
    msg.setSourceEntity(217U);
    msg.setDestination(60796U);
    msg.setDestinationEntity(1U);
    msg.x = 0.9546551043475918;
    msg.y = 0.4656247849416144;
    msg.z = 0.06773387249412643;
    msg.t = 0.44853292097727504;

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
    msg.setTimeStamp(0.5608708555800856);
    msg.setSource(55452U);
    msg.setSourceEntity(200U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(80U);
    msg.x = 0.1584102451676419;
    msg.y = 0.20954517567426845;
    msg.z = 0.8668545865080052;
    msg.t = 0.18443461004311767;

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
    msg.setTimeStamp(0.15240016411002888);
    msg.setSource(9168U);
    msg.setSourceEntity(206U);
    msg.setDestination(63339U);
    msg.setDestinationEntity(218U);
    msg.timeout = 59302U;
    msg.name.assign("JSPCFKJIQVEZWZOUYTQUHVKDUPSXPPTJQHMLYOQWAMPKPHKMZUYJBLQVONRXYLHALHUUF");
    msg.custom.assign("AMRNPXXXHBPOHXJLTGZQSFNPDOWUDSMUQCEWSBXYOJYRGVCFOIYEGDFJIQMIQFFNUOLGTECQJZTNUTSHZGBBJYDEKZULORAXCXXKLFQDKJZZRYJUMQVNRNVZGHWHGKCOIWCDWDCWYJJMYVTLREWIAONVQUYAKGVDIFSUNWWTINILECPABEAPEKYVGDCBXI");

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
    msg.setTimeStamp(0.9144531434877744);
    msg.setSource(10688U);
    msg.setSourceEntity(141U);
    msg.setDestination(2621U);
    msg.setDestinationEntity(50U);
    msg.timeout = 23488U;
    msg.name.assign("DYLLFIHLPRDBPKUKURWV");
    msg.custom.assign("PTVBAIECSTLKQJBLANGUGXORJDMSOEQXTH");

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
    msg.setTimeStamp(0.5703181924145441);
    msg.setSource(42986U);
    msg.setSourceEntity(221U);
    msg.setDestination(53862U);
    msg.setDestinationEntity(53U);
    msg.timeout = 18719U;
    msg.name.assign("DABQSEAVQFDHTXQIPXOQDMWITCMRKVPXXGYPSZZEJULIEWFZJFGHSKSGJRNHCX");
    msg.custom.assign("YSYSRAJXPUHAUVPOPBKYSKAPDGIGKMXRHZWLACRDTIBBZUCXWIYLZCZEPEKHDFVQHGVDEGAXVLUBSXNCZIHZIZORTBCOSFCJREFHQXAPJYPHGLUNSHQCEMAAGJDVRWZWTMYICFPNOLYBBTEOBZKUMUHQTVYWJXYGJHDKINFIESOFSTRYFQSBVQGGMWITDAOTJNXNQLEDFELZEFRMFUNONLLJNWOWJU");

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
    msg.setTimeStamp(0.24432025147487169);
    msg.setSource(25693U);
    msg.setSourceEntity(156U);
    msg.setDestination(10168U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.6157462395905128;
    msg.lon = 0.18064470292201174;
    msg.z = 0.4063824311461548;
    msg.z_units = 191U;
    msg.speed = 0.0007846840610272743;
    msg.speed_units = 201U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9231543754642607;
    tmp_msg_0.y = 0.5269491015266262;
    tmp_msg_0.z = 0.6830171444123744;
    tmp_msg_0.t = 0.7520406158595472;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 1892U;
    tmp_msg_1.off_x = 0.011490141835114653;
    tmp_msg_1.off_y = 0.9299352399617447;
    tmp_msg_1.off_z = 0.9394764149201669;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8752357539709176;
    msg.custom.assign("HABJTPJEZUMRZRRMBVBDGHRWDQDEFKSAJCEPQFEBXQWIWUQLOVJSTRFDAEVIZYNMLLOHAQCSEOJNYGHCURBXFRPFAGNBZCJEOXB");

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
    msg.setTimeStamp(0.1845840323440492);
    msg.setSource(13765U);
    msg.setSourceEntity(221U);
    msg.setDestination(21482U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.10795195813358038;
    msg.lon = 0.5187989671547679;
    msg.z = 0.37186671299168195;
    msg.z_units = 149U;
    msg.speed = 0.017433297643206114;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6401406795215142;
    tmp_msg_0.y = 0.1482451322015389;
    tmp_msg_0.z = 0.4432310876734914;
    tmp_msg_0.t = 0.01114207831852343;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9666243194493093;
    msg.custom.assign("RSORDXXLDQXJXHRAGZNJGZBMFQLANTWPIYTHEUQWBMSCVZQYJEPDLBXJPWTECYDJFFRRXEKJMYMSIGLSKGFZWAQBDPPODANVQGIAEEGQIMFKOINYBTKASLHHMIFOFUMTZNUBAMZTLUFBDUBAHCIPRTZ");

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
    msg.setTimeStamp(0.7933956672046416);
    msg.setSource(25865U);
    msg.setSourceEntity(18U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.38825195793377787;
    msg.lon = 0.8704566743397605;
    msg.z = 0.715098019535418;
    msg.z_units = 73U;
    msg.speed = 0.5408040502289826;
    msg.speed_units = 186U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3473880305683489;
    tmp_msg_0.y = 0.4839302928417629;
    tmp_msg_0.z = 0.7921658311023225;
    tmp_msg_0.t = 0.06267306636922054;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 11290U;
    tmp_msg_1.off_x = 0.09314160039179353;
    tmp_msg_1.off_y = 0.03217532349458163;
    tmp_msg_1.off_z = 0.1674049440319727;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.20474090077895768;
    msg.custom.assign("VSXDMALOIMWSABOTRUXUAYKHREYLXEKMWMEOJBWQNRQWDCQJYFHIKIWLBJNNSMHPFXEPSDTGYSFDHVKXDAGJPLIAJD");

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
    msg.setTimeStamp(0.45999798263880753);
    msg.setSource(45269U);
    msg.setSourceEntity(162U);
    msg.setDestination(50559U);
    msg.setDestinationEntity(195U);
    msg.vid = 36445U;
    msg.off_x = 0.5524209965003619;
    msg.off_y = 0.33506560601053814;
    msg.off_z = 0.032595474783505884;

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
    msg.setTimeStamp(0.24253538944357933);
    msg.setSource(1634U);
    msg.setSourceEntity(204U);
    msg.setDestination(46355U);
    msg.setDestinationEntity(16U);
    msg.vid = 8859U;
    msg.off_x = 0.2582141131471668;
    msg.off_y = 0.5647333781190558;
    msg.off_z = 0.8958962735316065;

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
    msg.setTimeStamp(0.03234019330059512);
    msg.setSource(49085U);
    msg.setSourceEntity(102U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(197U);
    msg.vid = 34078U;
    msg.off_x = 0.2786899009352277;
    msg.off_y = 0.655862680456797;
    msg.off_z = 0.009283399743117537;

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
    msg.setTimeStamp(0.42544816121990703);
    msg.setSource(12912U);
    msg.setSourceEntity(57U);
    msg.setDestination(29609U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.3154429785722943);
    msg.setSource(18037U);
    msg.setSourceEntity(226U);
    msg.setDestination(22690U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.2061279365688078);
    msg.setSource(30996U);
    msg.setSourceEntity(133U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.6696953547117699);
    msg.setSource(26779U);
    msg.setSourceEntity(37U);
    msg.setDestination(50359U);
    msg.setDestinationEntity(45U);
    msg.mid = 63143U;

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
    msg.setTimeStamp(0.6072515899151673);
    msg.setSource(53105U);
    msg.setSourceEntity(56U);
    msg.setDestination(60640U);
    msg.setDestinationEntity(207U);
    msg.mid = 22064U;

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
    msg.setTimeStamp(0.3815967493051421);
    msg.setSource(42354U);
    msg.setSourceEntity(92U);
    msg.setDestination(48612U);
    msg.setDestinationEntity(122U);
    msg.mid = 24667U;

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
    msg.setTimeStamp(0.048308545364081135);
    msg.setSource(35368U);
    msg.setSourceEntity(100U);
    msg.setDestination(54949U);
    msg.setDestinationEntity(83U);
    msg.state = 52U;
    msg.eta = 24344U;
    msg.info.assign("QXCAEMGKHZMGVML");

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
    msg.setTimeStamp(0.5487573588444451);
    msg.setSource(65134U);
    msg.setSourceEntity(242U);
    msg.setDestination(18202U);
    msg.setDestinationEntity(45U);
    msg.state = 16U;
    msg.eta = 2627U;
    msg.info.assign("RKICGSJABGJMOCWKQBPYVYRYOVEVVASKQWPSHJTRHACUMFOYUWNMENFORWLKZNATHJMHUNQPEWJUQDMKPZGXUHPZZUZBWDPJHAXLLWFYKSOVTDTZAQFTVNTWIEAVCRFHXESPSILQKYDASKAHGGMCIGRWMDTBJILNUKEXLYLDCLF");

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
    msg.setTimeStamp(0.12691428664777638);
    msg.setSource(38487U);
    msg.setSourceEntity(218U);
    msg.setDestination(10986U);
    msg.setDestinationEntity(26U);
    msg.state = 48U;
    msg.eta = 28362U;
    msg.info.assign("XTDUPKRZNLIQDPZEEUCHWEEQSSHQDCTLRTWEMYMPOYZODVPFTHUJVNXIRNTBKFAJOAJZKDNPZBVBCTCWCUSZFRVHOAQAZQBINUHDERMYGMKYXWWEMPSNQIHMJRWVMPFJQRIXOXKUJLSYGTBQRZHCDQAJELGSKEYNLXTUWDGFOUNBWPFYVVAIKFAGWDCYLTKKGVAHUHSELFFMJSULPCFABJAOGQIMINGRCTOYYVIXJGXXXPBONRHK");

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
    msg.setTimeStamp(0.10479944507662953);
    msg.setSource(49657U);
    msg.setSourceEntity(92U);
    msg.setDestination(8953U);
    msg.setDestinationEntity(59U);
    msg.system = 59429U;
    msg.duration = 41237U;
    msg.speed = 0.6051443964271992;
    msg.speed_units = 166U;
    msg.x = 0.5410209239759303;
    msg.y = 0.20106192019133584;
    msg.z = 0.26736558217309025;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.8446335183279143);
    msg.setSource(12341U);
    msg.setSourceEntity(202U);
    msg.setDestination(61772U);
    msg.setDestinationEntity(232U);
    msg.system = 54701U;
    msg.duration = 42893U;
    msg.speed = 0.8071122976468532;
    msg.speed_units = 54U;
    msg.x = 0.29792209629533706;
    msg.y = 0.5874921880073167;
    msg.z = 0.9662709037328027;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.4277534452645576);
    msg.setSource(58570U);
    msg.setSourceEntity(78U);
    msg.setDestination(21799U);
    msg.setDestinationEntity(104U);
    msg.system = 13966U;
    msg.duration = 16394U;
    msg.speed = 0.4145282684129563;
    msg.speed_units = 9U;
    msg.x = 0.5602985055783083;
    msg.y = 0.2661244617612034;
    msg.z = 0.47690453608642114;
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
    msg.setTimeStamp(0.31766721358212624);
    msg.setSource(55462U);
    msg.setSourceEntity(198U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.4889550832937041;
    msg.lon = 0.7659601048996034;
    msg.speed = 0.03924269454706342;
    msg.speed_units = 48U;
    msg.duration = 43048U;
    msg.sys_a = 8969U;
    msg.sys_b = 21488U;
    msg.move_threshold = 0.9951607945284774;

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
    msg.setTimeStamp(0.6151284863432007);
    msg.setSource(38147U);
    msg.setSourceEntity(202U);
    msg.setDestination(39638U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.7519784604327526;
    msg.lon = 0.7490885945576513;
    msg.speed = 0.36760416745198177;
    msg.speed_units = 226U;
    msg.duration = 12480U;
    msg.sys_a = 37830U;
    msg.sys_b = 10741U;
    msg.move_threshold = 0.07481062500512481;

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
    msg.setTimeStamp(0.8260045243713495);
    msg.setSource(37747U);
    msg.setSourceEntity(12U);
    msg.setDestination(38715U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.7291588057532278;
    msg.lon = 0.5818605041710928;
    msg.speed = 0.746497972597105;
    msg.speed_units = 4U;
    msg.duration = 3119U;
    msg.sys_a = 35788U;
    msg.sys_b = 53396U;
    msg.move_threshold = 0.5181522194638818;

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
    msg.setTimeStamp(0.5132318967081994);
    msg.setSource(7047U);
    msg.setSourceEntity(160U);
    msg.setDestination(63313U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.10917236100893046;
    msg.lon = 0.5656930422231052;
    msg.z = 0.00368830383382035;
    msg.z_units = 166U;
    msg.speed = 0.6023375890340743;
    msg.speed_units = 239U;
    msg.custom.assign("YGWYESQOAKEMTVWMEKZUKLDJCFPSILYNWHIPTMVMPRQINYXRSOMPCUEGXZ");

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
    msg.setTimeStamp(0.9412485005236266);
    msg.setSource(11779U);
    msg.setSourceEntity(211U);
    msg.setDestination(2827U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.7302582856326895;
    msg.lon = 0.2600878247204801;
    msg.z = 0.9022854248085738;
    msg.z_units = 17U;
    msg.speed = 0.4908541407687871;
    msg.speed_units = 153U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4517208806044022;
    tmp_msg_0.lon = 0.0029388635947443786;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KARZLGJIKTNVSNHXVQZVISGSSETWTOXQYAWBFBDOBDDOEOBCIXLRDLNVNJRTYUMTST");

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
    msg.setTimeStamp(0.8867000364176082);
    msg.setSource(63310U);
    msg.setSourceEntity(0U);
    msg.setDestination(59829U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.2924453636943867;
    msg.lon = 0.6511715236849749;
    msg.z = 0.17485481132660552;
    msg.z_units = 124U;
    msg.speed = 0.2944833974843839;
    msg.speed_units = 26U;
    msg.custom.assign("DXXDWVQRFIBTIOCHOVKMHZFEOMTHCRFYLSTBOOXRDYDSNGMK");

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
    msg.setTimeStamp(0.14329965147323265);
    msg.setSource(27283U);
    msg.setSourceEntity(75U);
    msg.setDestination(51833U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.41924109161343603;
    msg.lon = 0.6967808007689774;

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
    msg.setTimeStamp(0.263795586880719);
    msg.setSource(24235U);
    msg.setSourceEntity(128U);
    msg.setDestination(50933U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.7157734827034202;
    msg.lon = 0.6876516874161241;

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
    msg.setTimeStamp(0.6209920519525364);
    msg.setSource(1999U);
    msg.setSourceEntity(116U);
    msg.setDestination(53287U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.7560364931049012;
    msg.lon = 0.17464034149281749;

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
    msg.setTimeStamp(0.3365910112870786);
    msg.setSource(21288U);
    msg.setSourceEntity(171U);
    msg.setDestination(31812U);
    msg.setDestinationEntity(240U);
    msg.timeout = 61785U;
    msg.lat = 0.5156812177723223;
    msg.lon = 0.48399080734129074;
    msg.z = 0.3751012117833106;
    msg.z_units = 24U;
    msg.pitch = 0.0737387971229505;
    msg.amplitude = 0.5544143657034962;
    msg.duration = 9574U;
    msg.speed = 0.7025059137027361;
    msg.speed_units = 55U;
    msg.radius = 0.5566177024958419;
    msg.direction = 244U;
    msg.custom.assign("TBSKIBLLKVCTFTEQAXKOPYRJQUANQMZKSOVNEVJCHELUPPEAXNINLPWQKZMOFVLDWFJTYXQEHHCKDXGBWAHIMSNSUAUQZPGUQKZORCFYZFRDAAKGAVXODGHGULZQWVJNKRIGDXRUTDXFRWSSEAFNWGPVSRMCCHZFOGBGXZWOXIIBIRRLIZJCUZNHTRPHYMUPDGCTHMLHOISNMJPMMBEWFIJELNBOMESLDYWCTBTEKAOYVBQVTBCJFDJWPD");

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
    msg.setTimeStamp(0.1979884139069078);
    msg.setSource(29155U);
    msg.setSourceEntity(171U);
    msg.setDestination(17384U);
    msg.setDestinationEntity(47U);
    msg.timeout = 59675U;
    msg.lat = 0.8825270779913172;
    msg.lon = 0.4205690874046518;
    msg.z = 0.7750814123150456;
    msg.z_units = 137U;
    msg.pitch = 0.126259723462521;
    msg.amplitude = 0.08839066685685948;
    msg.duration = 8382U;
    msg.speed = 0.0339143184498768;
    msg.speed_units = 235U;
    msg.radius = 0.5318993129025502;
    msg.direction = 216U;
    msg.custom.assign("VXYJJFRJPBJOWSFQISIUNZHPBZVCHTIVPTOOEDTWGYRSTJIFAWFCKZCXYLSERPEGHJIFEWKDEYNOQZRNQAACIAVOTPCBZDWOEREGXGSDOLHQOPKSDMHMZZOQVNUKCLYXGMTJXIXXYFPVLZVLJM");

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
    msg.setTimeStamp(0.1162114814070806);
    msg.setSource(19885U);
    msg.setSourceEntity(159U);
    msg.setDestination(27145U);
    msg.setDestinationEntity(52U);
    msg.timeout = 33434U;
    msg.lat = 0.4005475547942544;
    msg.lon = 0.8300877961097497;
    msg.z = 0.050092857327865725;
    msg.z_units = 196U;
    msg.pitch = 0.20543739577680797;
    msg.amplitude = 0.4988679082786305;
    msg.duration = 19461U;
    msg.speed = 0.2212254744586356;
    msg.speed_units = 67U;
    msg.radius = 0.40028445384692735;
    msg.direction = 198U;
    msg.custom.assign("NALLJAVDISXCMIHLKPEETDOSQXVJMOBWDUBFEMGWTJNCDNNWFILFTRMXHUZBSZQFUHMDLOXJVXDXQJMJGOZHEZCORDGSXDE");

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
    msg.setTimeStamp(0.4898399989858162);
    msg.setSource(10643U);
    msg.setSourceEntity(133U);
    msg.setDestination(43179U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("KFJHDRUUHQBEYIXLKVKBDZLJJSOZSSCGSEVYUTAJNBTGMQBQUEUZVDWFPRPUW");
    msg.reference_frame = 74U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14262U;
    tmp_msg_0.off_x = 0.7541776101385961;
    tmp_msg_0.off_y = 0.7113449018125144;
    tmp_msg_0.off_z = 0.735723843518291;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TAYMNGYUEZEIIRXFJESIBBUUMWMPEDONBTFCYXOHGXKZYRCODNDXLSMPFRZJOSUJWKXZ");

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
    msg.setTimeStamp(0.2221623830702062);
    msg.setSource(907U);
    msg.setSourceEntity(98U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(33U);
    msg.formation_name.assign("MDLKZXLQYZNUGUVQAFHQWCCOKURXMGGANEZDDPBSDXDCXZRTBFABDUASVQMYTEMMJB");
    msg.reference_frame = 246U;
    msg.custom.assign("RORLNMWKRCENTRDQHTHMMXPFAXHYQ");

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
    msg.setTimeStamp(0.2812219428039783);
    msg.setSource(23252U);
    msg.setSourceEntity(251U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("KCRWZITSVPCCFLKGNZTQTIUYMWSAVKDMFJKDEVMHDQWMXDOFKYCRQHJZJBQPDBQSGOENNJRRSFRWPUHDQVHGKZCYJXFGP");
    msg.reference_frame = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40484U;
    tmp_msg_0.off_x = 0.4100797701886034;
    tmp_msg_0.off_y = 0.5521169900157306;
    tmp_msg_0.off_z = 0.9877045251637304;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XJNSSYSLHABYIEWKYFFCRPLCOVKZDTGYFCHCZSEKRGFHJFBKMWLRCLFPPTSPLIAYPEKDUQRPVHELJTXHYYMWTZZIABWGUHKTJDRKQYWIODZDBEDSGLXRCPPPIDVBVJZBRQAONEUVXXHMYAQCJIZYNJKXRNXNOGUXWVABGWTXZUXUOVCRWMUITZIIOFFDSCLTVGSMMVNATAHJNGHNDVDMGQN");

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
    msg.setTimeStamp(0.6271051625204811);
    msg.setSource(27173U);
    msg.setSourceEntity(125U);
    msg.setDestination(11265U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("GLRPIVAWFMPNVEWPGRDDIKTXOFCKLELOQLPXTVUJEFDCSLBBSQVWGZZIHGJXFDJGXKDPQSCPQNNTHYXADPRORHSVCYIEETJMZXLSSYJAFBLFUYUCMOHNZNEBHMFZVOXLIWGOKFPRYKHSEHBIBBLWJBRVXIJECBHXJRQKWPUDNPQZEMMLKNFNTDZTGRDCUKNMYHMYG");
    msg.formation_name.assign("UYMDMHXNOBNQRKXNEPBYYGZFVCVCILNKKFMUFQVWUCNYXAOOOWIXRCMAGJTFPBYQVCWSPROUIDWFXTEHBOXQRCSRZKEYWJ");
    msg.plan_id.assign("TQXWQZOWHGRKK");
    msg.description.assign("KZHUOSSGTMCNUPFQCJNHSBYGICQVZMEMYLEARMS");
    msg.leader_speed = 0.14146097714358175;
    msg.leader_bank_lim = 0.45396859215560537;
    msg.pos_sim_err_lim = 0.6997776965350169;
    msg.pos_sim_err_wrn = 0.732657408012404;
    msg.pos_sim_err_timeout = 43642U;
    msg.converg_max = 0.7559840419168387;
    msg.converg_timeout = 44096U;
    msg.comms_timeout = 1438U;
    msg.turb_lim = 0.01216128823235696;
    msg.custom.assign("DXYCJEJGUKEVXDGGVPPQVOBOYNDNTXKW");

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
    msg.setTimeStamp(0.6427661245621907);
    msg.setSource(29918U);
    msg.setSourceEntity(167U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("OTGTEUDISKFGNHQVXIPNHSZ");
    msg.formation_name.assign("MIDUVRXRWUDHLXFLJOVIIUAMHJDTDFMUPLKQGBYIIMTEERJWBJMPOSJLVSGTFXQJADZKBPCNSEGTUNRMUCNCZBAPTZHSZAYCCQYCZNXZQHRMNATKQY");
    msg.plan_id.assign("BCMBKXZQCQOGJ");
    msg.description.assign("OSYIXJNVYLVQSAJYGUCISMYBQBNWDMAJQCYUSWATNAJSRVOJMEYIHFDHZBNVKAKLUBXEEEPRBQDXWRJUJDAEJPUWFTGGOYUHPZTZTMRAZNXOWCXUKPNRCUNGSXCIZAZUERFDWDISTZAIWHXEDIOXTVFLTLXFPLKCBMGCGQIOFCBGOMHQY");
    msg.leader_speed = 0.07044896088468877;
    msg.leader_bank_lim = 0.9200378557518407;
    msg.pos_sim_err_lim = 0.16218527681890704;
    msg.pos_sim_err_wrn = 0.35100381012109694;
    msg.pos_sim_err_timeout = 55161U;
    msg.converg_max = 0.2851524129060694;
    msg.converg_timeout = 64044U;
    msg.comms_timeout = 18620U;
    msg.turb_lim = 0.5758711028266124;
    msg.custom.assign("YBTMXVITXWDHUKEBHJTMVFZSFKFPIJKRQXSMRDZPTGGSXEMZAJYPTYKWDXIIEIHMMOAUNZOVYYBFPZADIPJHMSWLGZRJHHJQXUUNZGZBPXQLWIDWIJIDNOKWYRILNWNDGYSUBPVAONSFOQCMVCANUBZFOJXQCGRKADCEG");

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
    msg.setTimeStamp(0.45314167123698);
    msg.setSource(363U);
    msg.setSourceEntity(22U);
    msg.setDestination(14462U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("LXHHWXSOGLODHJKWUNPXVBARSRKBVWKWUOTDUWXRCOMUIPYSVEDXIDCRAWZJIBHIQIAPPVJLSOYYAAOOHTJNDYYGAMFWURNYSGLHXUBCCQFCFFFVZAIWLYBQMGENXEKJUMPAXZJEDIKPROZJTZLEAGPCJDGPLERZHNGCFJKUBOGF");
    msg.formation_name.assign("NEHWGIGFDAVPQTIGWLMDPIFJYHTAVRFYNXOXVHXUGGADYERZMJINZRBICJZNRXMWVHEBJSEYBOHNPIQTJWAPDCKSEAEYBWDJSCZUKGZSCHDMTNQVVFRULHCZHZUOXFXPNEWBOQOMAMIQOQWOULNFDGBEVIUMNRVDXFKJCZZJYETYOKCUSKJ");
    msg.plan_id.assign("FAGSUSEQFZOFVOUYXOINGZDBAHEYPXVUFQNWKVZLCLKRSVWGMUCCZRPOAMGGKPRWQSXPLSXIFUHSXDOTGEYNIDCJRITSWZDYPHHRDAZYVCCRNQWLQFXQKOZEIHGWCIOAPPGFYPBGKVVZJBFIGKAMKKMMEYAYBWHHMKFMLINEATRUXJLTTAYQBCWTOWRLBAJJHBNDYBTQODVULDWNMKNTPIXIJUSLCXHSERZCURHJMEENQMVZQXJTENFP");
    msg.description.assign("JTXQIAKWIWQYWAGSZIOSAMYULEHSIKYVTEEFUOPKQNRQCMMLNOFSXZPYICPGNRRXJEPUZNMXOUIQJZRHOBZKUDQQZOVFJ");
    msg.leader_speed = 0.6595251819160032;
    msg.leader_bank_lim = 0.7829134395744226;
    msg.pos_sim_err_lim = 0.8627317319130559;
    msg.pos_sim_err_wrn = 0.6115810921918617;
    msg.pos_sim_err_timeout = 36890U;
    msg.converg_max = 0.7139057020534919;
    msg.converg_timeout = 22392U;
    msg.comms_timeout = 50231U;
    msg.turb_lim = 0.37494036008642684;
    msg.custom.assign("CEIECBYKMKBFSZINXTXQJKGUOGLGFXAFBWTSVHDBNSTHRPCNDQDDAOLUAGTGYKHHCKJILNCBSKMPUUWYXXYWZYSQFAPAIDOUMEQQC");

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
    msg.setTimeStamp(0.41409375513410684);
    msg.setSource(65160U);
    msg.setSourceEntity(5U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(149U);
    msg.control_src = 19968U;
    msg.control_ent = 162U;
    msg.timeout = 0.2844731388689927;
    msg.loiter_radius = 0.1562896074171627;
    msg.altitude_interval = 0.5853663026689423;

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
    msg.setTimeStamp(0.2486201837356018);
    msg.setSource(47970U);
    msg.setSourceEntity(33U);
    msg.setDestination(23505U);
    msg.setDestinationEntity(106U);
    msg.control_src = 50082U;
    msg.control_ent = 97U;
    msg.timeout = 0.4600593881148817;
    msg.loiter_radius = 0.17859166568873264;
    msg.altitude_interval = 0.7758782545123661;

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
    msg.setTimeStamp(0.21581651390245815);
    msg.setSource(24513U);
    msg.setSourceEntity(169U);
    msg.setDestination(18313U);
    msg.setDestinationEntity(17U);
    msg.control_src = 38538U;
    msg.control_ent = 129U;
    msg.timeout = 0.7848109947250707;
    msg.loiter_radius = 0.694409997054081;
    msg.altitude_interval = 0.7095050349881852;

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
    msg.setTimeStamp(0.14417361447981514);
    msg.setSource(18387U);
    msg.setSourceEntity(72U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(235U);
    msg.flags = 22U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9621630051116014;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9872666269370237;
    tmp_msg_1.z_units = 75U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.44856065327258454;
    msg.lon = 0.32568837857207455;
    msg.radius = 0.41298406527501974;

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
    msg.setTimeStamp(0.27648619704414257);
    msg.setSource(25788U);
    msg.setSourceEntity(158U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(100U);
    msg.flags = 163U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5451174046386952;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.20901703739608324;
    tmp_msg_1.z_units = 231U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8045203240115132;
    msg.lon = 0.7694612889215868;
    msg.radius = 0.012007656477482698;

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
    msg.setTimeStamp(0.3608121373571326);
    msg.setSource(21077U);
    msg.setSourceEntity(214U);
    msg.setDestination(21472U);
    msg.setDestinationEntity(176U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9143243499135971;
    tmp_msg_0.speed_units = 87U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9606220423740783;
    tmp_msg_1.z_units = 186U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2669732882108621;
    msg.lon = 0.1589069779701492;
    msg.radius = 0.024507672350915666;

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
    msg.setTimeStamp(0.7480936043567017);
    msg.setSource(43788U);
    msg.setSourceEntity(86U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(234U);
    msg.control_src = 1897U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 245U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.36624422174133886;
    tmp_tmp_msg_0_0.speed_units = 124U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7218085843502479;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6882760111362007;
    tmp_msg_0.lon = 0.7890531629245311;
    tmp_msg_0.radius = 0.9861984294778029;
    msg.reference.set(tmp_msg_0);
    msg.state = 32U;
    msg.proximity = 235U;

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
    msg.setTimeStamp(0.40111356592420755);
    msg.setSource(18615U);
    msg.setSourceEntity(49U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(147U);
    msg.control_src = 1925U;
    msg.control_ent = 240U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 41U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7704195987732898;
    tmp_tmp_msg_0_0.speed_units = 158U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.40166803679910257;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.48578186832633596;
    tmp_msg_0.lon = 0.14890037095064035;
    tmp_msg_0.radius = 0.27603244406634964;
    msg.reference.set(tmp_msg_0);
    msg.state = 124U;
    msg.proximity = 212U;

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
    msg.setTimeStamp(0.6041358498268067);
    msg.setSource(29734U);
    msg.setSourceEntity(200U);
    msg.setDestination(20357U);
    msg.setDestinationEntity(18U);
    msg.control_src = 51650U;
    msg.control_ent = 225U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 80U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4221186260863772;
    tmp_tmp_msg_0_0.speed_units = 35U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7197064757878484;
    tmp_tmp_msg_0_1.z_units = 170U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.958473610212444;
    tmp_msg_0.lon = 0.915553086631098;
    tmp_msg_0.radius = 0.4769766963994525;
    msg.reference.set(tmp_msg_0);
    msg.state = 167U;
    msg.proximity = 237U;

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
    msg.setTimeStamp(0.3274379815122004);
    msg.setSource(61801U);
    msg.setSourceEntity(57U);
    msg.setDestination(7029U);
    msg.setDestinationEntity(169U);
    msg.ax_cmd = 0.6108130145463864;
    msg.ay_cmd = 0.9260945406051806;
    msg.az_cmd = 0.7667152411024646;
    msg.ax_des = 0.2619873489290868;
    msg.ay_des = 0.22789248685145547;
    msg.az_des = 0.7315504754215628;
    msg.virt_err_x = 0.7443064735817074;
    msg.virt_err_y = 0.3137693798970439;
    msg.virt_err_z = 0.20944896528695656;
    msg.surf_fdbk_x = 0.43613758719319073;
    msg.surf_fdbk_y = 0.21854271537618697;
    msg.surf_fdbk_z = 0.026762029159019374;
    msg.surf_unkn_x = 0.5451974066344899;
    msg.surf_unkn_y = 0.3257531813472029;
    msg.surf_unkn_z = 0.08171072880200014;
    msg.ss_x = 0.39282716261251294;
    msg.ss_y = 0.5330928317488144;
    msg.ss_z = 0.5839364928579744;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OWZJTCKAJBDRWOPOMAMPBVZHBFTMWQSEKJLQLCCNGINNZUXVXBAYRCKKUQMYLGAZSFKPBQWFURNYGRIJODUMXVMIMXICVHVEPDWLIJBCVBBOKYTGXUSNQZKZSWTANUEDFRESOKNRJRMOTTXI");
    tmp_msg_0.dist = 0.6858279402874006;
    tmp_msg_0.err = 0.6480236334801261;
    tmp_msg_0.ctrl_imp = 0.3205855374061395;
    tmp_msg_0.rel_dir_x = 0.8930076129978892;
    tmp_msg_0.rel_dir_y = 0.10679015025975203;
    tmp_msg_0.rel_dir_z = 0.5619558071180397;
    tmp_msg_0.err_x = 0.01771155941687208;
    tmp_msg_0.err_y = 0.8118818833893878;
    tmp_msg_0.err_z = 0.07892619833903303;
    tmp_msg_0.rf_err_x = 0.7673520144791792;
    tmp_msg_0.rf_err_y = 0.1513234926540965;
    tmp_msg_0.rf_err_z = 0.23465151410338447;
    tmp_msg_0.rf_err_vx = 0.4677559546067295;
    tmp_msg_0.rf_err_vy = 0.8734997749535889;
    tmp_msg_0.rf_err_vz = 0.2495656414196058;
    tmp_msg_0.ss_x = 0.8896920082615142;
    tmp_msg_0.ss_y = 0.9325823862616296;
    tmp_msg_0.ss_z = 0.31688646352886674;
    tmp_msg_0.virt_err_x = 0.6781616324371149;
    tmp_msg_0.virt_err_y = 0.5768057316666242;
    tmp_msg_0.virt_err_z = 0.6204838525157423;
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
    msg.setTimeStamp(0.993492692317158);
    msg.setSource(59466U);
    msg.setSourceEntity(199U);
    msg.setDestination(3619U);
    msg.setDestinationEntity(174U);
    msg.ax_cmd = 0.1378349208042079;
    msg.ay_cmd = 0.713976723022654;
    msg.az_cmd = 0.6222170008554686;
    msg.ax_des = 0.32093956577044336;
    msg.ay_des = 0.32674109813723984;
    msg.az_des = 0.12377635346575377;
    msg.virt_err_x = 0.1845684871835218;
    msg.virt_err_y = 0.5236548394275223;
    msg.virt_err_z = 0.891875876818614;
    msg.surf_fdbk_x = 0.2593773089255159;
    msg.surf_fdbk_y = 0.8411622070294894;
    msg.surf_fdbk_z = 0.3561140791894003;
    msg.surf_unkn_x = 0.2808792934722094;
    msg.surf_unkn_y = 0.5941631319282329;
    msg.surf_unkn_z = 0.563039304149455;
    msg.ss_x = 0.31818587038620827;
    msg.ss_y = 0.5767589771079162;
    msg.ss_z = 0.9398085090258914;

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
    msg.setTimeStamp(0.38405475875985684);
    msg.setSource(50463U);
    msg.setSourceEntity(140U);
    msg.setDestination(54400U);
    msg.setDestinationEntity(216U);
    msg.ax_cmd = 0.5639118156783992;
    msg.ay_cmd = 0.09236213573279584;
    msg.az_cmd = 0.8881705443498474;
    msg.ax_des = 0.06612645158470387;
    msg.ay_des = 0.7573232245571673;
    msg.az_des = 0.2067328696606805;
    msg.virt_err_x = 0.09926794612305034;
    msg.virt_err_y = 0.49769171622456365;
    msg.virt_err_z = 0.5562981543613662;
    msg.surf_fdbk_x = 0.273296108795972;
    msg.surf_fdbk_y = 0.0815290168630406;
    msg.surf_fdbk_z = 0.8130636321087504;
    msg.surf_unkn_x = 0.07069709582377925;
    msg.surf_unkn_y = 0.31952417756202456;
    msg.surf_unkn_z = 0.42952039217328497;
    msg.ss_x = 0.8951614471055281;
    msg.ss_y = 0.03199688752223473;
    msg.ss_z = 0.42667956185570344;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BZIGXGAGMYUHAMAGCRJFMCUJRPQXPMPWWEZCAEXIVUFKNZYVJVOIYMLPEPSOKDHJSRXZYAGHJXBWERCMMBAAQTXNLLFBQECSMYHFDNOHJUBQVODKSTWKMLOZADDKYEQGWEBPWECNIRSKXTLLNHOOXMVHFATPHUSRYVNWQZCVCKXSDDNJOJKRPWSIZLVSTZPZ");
    tmp_msg_0.dist = 0.7721424847017315;
    tmp_msg_0.err = 0.7528184642681977;
    tmp_msg_0.ctrl_imp = 0.04235628059447438;
    tmp_msg_0.rel_dir_x = 0.8581440085338401;
    tmp_msg_0.rel_dir_y = 0.6636247832767971;
    tmp_msg_0.rel_dir_z = 0.4629465627628363;
    tmp_msg_0.err_x = 0.40852320387067176;
    tmp_msg_0.err_y = 0.9068193287071313;
    tmp_msg_0.err_z = 0.5513327096707701;
    tmp_msg_0.rf_err_x = 0.7892650997200974;
    tmp_msg_0.rf_err_y = 0.14337466364662743;
    tmp_msg_0.rf_err_z = 0.31550136300610543;
    tmp_msg_0.rf_err_vx = 0.5962695178330456;
    tmp_msg_0.rf_err_vy = 0.5065036658217367;
    tmp_msg_0.rf_err_vz = 0.938401605210778;
    tmp_msg_0.ss_x = 0.23394348590123237;
    tmp_msg_0.ss_y = 0.7292976964192521;
    tmp_msg_0.ss_z = 0.486462311545659;
    tmp_msg_0.virt_err_x = 0.4163156032028045;
    tmp_msg_0.virt_err_y = 0.5693109768617878;
    tmp_msg_0.virt_err_z = 0.49855349016445494;
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
    msg.setTimeStamp(0.6537164463309001);
    msg.setSource(16207U);
    msg.setSourceEntity(11U);
    msg.setDestination(44107U);
    msg.setDestinationEntity(111U);
    msg.s_id.assign("EPRJOKRAICQHIDLHD");
    msg.dist = 0.25742905829917195;
    msg.err = 0.10446236371876605;
    msg.ctrl_imp = 0.519025300401243;
    msg.rel_dir_x = 0.7631504949014403;
    msg.rel_dir_y = 0.9217387475691521;
    msg.rel_dir_z = 0.363885982556835;
    msg.err_x = 0.9284124415911668;
    msg.err_y = 0.6838061010052321;
    msg.err_z = 0.28035283323740834;
    msg.rf_err_x = 0.48717070478107893;
    msg.rf_err_y = 0.4682106311138171;
    msg.rf_err_z = 0.07547778713008069;
    msg.rf_err_vx = 0.9596822451541777;
    msg.rf_err_vy = 0.48089181123066294;
    msg.rf_err_vz = 0.07536401657460412;
    msg.ss_x = 0.1591520728810405;
    msg.ss_y = 0.9595070174457709;
    msg.ss_z = 0.9818151212205634;
    msg.virt_err_x = 0.5354885071196619;
    msg.virt_err_y = 0.029874786715396007;
    msg.virt_err_z = 0.5256033440844092;

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
    msg.setTimeStamp(0.6908249048559475);
    msg.setSource(19262U);
    msg.setSourceEntity(26U);
    msg.setDestination(22302U);
    msg.setDestinationEntity(197U);
    msg.s_id.assign("KDJFVPACTJZNOHJLNXYLQYQIGTEKUGVXSQODEESJJYBLLRTRVZMNKWMPUNZVFREFDYQHWXHDCFGFMBBOZYWEIHJLXPHOUBYAPABUCJXFWDRSSGPQNBSKSHRDHVLCBWVCISGIGYOSGKICCPTEMBYKWFPYMHOACUQLXVZLITNOTWGAIUUVKKDSHABOMMDHOWNUE");
    msg.dist = 0.9239383437349994;
    msg.err = 0.383946473829771;
    msg.ctrl_imp = 0.5827188951547356;
    msg.rel_dir_x = 0.433782506454806;
    msg.rel_dir_y = 0.19695873063604008;
    msg.rel_dir_z = 0.37548199446158903;
    msg.err_x = 0.051488554791778385;
    msg.err_y = 0.934795656501332;
    msg.err_z = 0.1426521596114464;
    msg.rf_err_x = 0.20631096036840546;
    msg.rf_err_y = 0.3881248668214109;
    msg.rf_err_z = 0.17752815842040415;
    msg.rf_err_vx = 0.9499832529514918;
    msg.rf_err_vy = 0.9533534656613598;
    msg.rf_err_vz = 0.060664831519521734;
    msg.ss_x = 0.7281592738814625;
    msg.ss_y = 0.43532877680960436;
    msg.ss_z = 0.761861448301591;
    msg.virt_err_x = 0.6033176215177496;
    msg.virt_err_y = 0.19333471147460868;
    msg.virt_err_z = 0.3966648508764704;

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
    msg.setTimeStamp(0.23715968365026652);
    msg.setSource(33202U);
    msg.setSourceEntity(225U);
    msg.setDestination(22451U);
    msg.setDestinationEntity(226U);
    msg.s_id.assign("RGJOJCAGQZWQZFBBCUZQIBPMMXSIQYDOOYMXKNKXMGSVZFTJBBEWRREEEZSLEAE");
    msg.dist = 0.4314865961591109;
    msg.err = 0.9907238532023827;
    msg.ctrl_imp = 0.8383840971157309;
    msg.rel_dir_x = 0.8065425748690358;
    msg.rel_dir_y = 0.3819212268917068;
    msg.rel_dir_z = 0.10585818775580025;
    msg.err_x = 0.3661638610816803;
    msg.err_y = 0.47265700504951524;
    msg.err_z = 0.42804782334314495;
    msg.rf_err_x = 0.65069899901437;
    msg.rf_err_y = 0.38458940890054005;
    msg.rf_err_z = 0.22008018936579032;
    msg.rf_err_vx = 0.9138435484582011;
    msg.rf_err_vy = 0.07772611667709939;
    msg.rf_err_vz = 0.056837351790096746;
    msg.ss_x = 0.6497604633166476;
    msg.ss_y = 0.6376911060493263;
    msg.ss_z = 0.29764091633562695;
    msg.virt_err_x = 0.3931140417041622;
    msg.virt_err_y = 0.07509708127818404;
    msg.virt_err_z = 0.0787126022497685;

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
    msg.setTimeStamp(0.7029071341450928);
    msg.setSource(2612U);
    msg.setSourceEntity(64U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(213U);
    msg.timeout = 29150U;
    msg.rpm = 0.5378096544940875;
    msg.direction = 176U;
    msg.custom.assign("UOEINYPVWYVPCSXZPSMGBSTBZNINKIQVGKOHYJSXMAJLFRWTOSFUIDDGWRFYQSUCOZHMWJTORDVJEQLJKMPJZYWEGKARBUVOHPXYXHBWFNVGZLBQUBPKLFGZPKDLMXCGKWPFTYJYPIMUQAZROAJFHMKMSNFNLILJFMSZ");

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
    msg.setTimeStamp(0.21750451107019775);
    msg.setSource(53918U);
    msg.setSourceEntity(241U);
    msg.setDestination(13535U);
    msg.setDestinationEntity(198U);
    msg.timeout = 33761U;
    msg.rpm = 0.10667260263638823;
    msg.direction = 197U;
    msg.custom.assign("UVUMBMNXCLVTEWKLDLXNXQDJUVCOJQDKXCJNQKXRFIIYFKPBOFEAPZKIQJPBYFJCHDSTHSQLNERXNVGVOTWTPPRRHZRAMZNMEMBXYIBQVYEISHYUTHCOWWGIIDVYQATFTKZDOVENWMSFNCZROTMPJZMGGKWLSIEVBLB");

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
    msg.setTimeStamp(0.12244551244469459);
    msg.setSource(40092U);
    msg.setSourceEntity(139U);
    msg.setDestination(35578U);
    msg.setDestinationEntity(42U);
    msg.timeout = 22219U;
    msg.rpm = 0.35675782421222235;
    msg.direction = 41U;
    msg.custom.assign("TUDGVLXPEQSHFQIJEBILXDOKWCUQXVATOEAYYGSJHMXSQUNOBRMMCZVTZSMGIYNDIZKRRNHNPRLOQIJYHPCZNBRAYXFKNAPXDHQEMIDGBRBZCKGICGTLMZOUQASSUJZFLDBZGTVUPZADBSLS");

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
    msg.setTimeStamp(0.12317385921540636);
    msg.setSource(36073U);
    msg.setSourceEntity(5U);
    msg.setDestination(61299U);
    msg.setDestinationEntity(2U);
    msg.formation_name.assign("OBTFFDBCAIWWLTCSJHZXINPTUNYKFSEIPQFGEOSJUHTZPUMKMCISVMAWBPQNRBAGRBVVXQZJCDTLYMRHQYQRVTXSPKSCLWMDMSEFZQWATHOHXILQDVSAEKKZWZZFJWQXYTGIVBVDPGULIRKDYKHKXGSFGYYCBXVTCDZACXLENBHYZCUUIKJKELOUBWPMOXLMGIPNXORYNGGNOUMDRBNQJWAYAMUHNGAENUOZFVLDVDFJESPEF");
    msg.type = 25U;
    msg.op = 98U;
    msg.group_name.assign("JEJWXHEXRIYEYNGRDOQVJIVLJAWETQCFWLFQTWSDEYPMYZSRFZKXZUOUSGFDEUVNHZWBGJKZULMPUIYOPOINIQAQVYBTVNMXQJULJTNSWMSCRXDOHGPCJRHKOBCJHYAGVCQNACZICUZFXXTPXSBQOIARHFGYFVQKVHRBN");
    msg.plan_id.assign("LEMELWBGCMCSBVRUYDCGXAHGZWRNETHPJVSJRRVVCZQOMHIPJCFXZTVUIOHGSAMWMUFSCIFNXDFQTKZEXBOMZLQUBEPYHDLKSBBREMRYDYUNJNOFQGXUUHKWLSAICNTAPXGQGQIJUIWHTHWDQYNEXEGZUJVLLXVAWLIJNSFJGNVMYRIYGAJVDBRNTFPTSIOPQYMWPPQSFKSFODXHULRKKCHWMAYZLOCKTOCK");
    msg.description.assign("JWHLHIUZYVULDCAHWYSYJYVQPZSBGJPNAHELNVNKAAJWTDIPBTFIOVGLOENNPUZWVPYKYZHMXJCQCWSTBLOBTCFZNNKCQVEQEAXFTZVYOXGVSQIGHZRENJOYSMHCBHQKFJRRACWMAYCEMMJFEQUBKZHMZPTKJUTDFRBVEJLDBLWLZQMXAKCUSQBWXOTGMAXEUVRTPSSWYIBDTFHRDGODXSILIOFUGUOFQECIPNFRDXGMRANMLWGGPXIO");
    msg.reference_frame = 86U;
    msg.leader_bank_lim = 0.7483628646279733;
    msg.leader_speed_min = 0.6431717950084566;
    msg.leader_speed_max = 0.5512998585620499;
    msg.leader_alt_min = 0.0336921094332312;
    msg.leader_alt_max = 0.28851184438270394;
    msg.pos_sim_err_lim = 0.200501582811893;
    msg.pos_sim_err_wrn = 0.10015747339943515;
    msg.pos_sim_err_timeout = 10228U;
    msg.converg_max = 0.5152691688270176;
    msg.converg_timeout = 31014U;
    msg.comms_timeout = 46143U;
    msg.turb_lim = 0.1854176782766469;
    msg.custom.assign("LYVFXKEHCSBFYBSONWWWAGFGMHXEWEOHMPNGXLRXDUZUYENVRVCNRCXZHTUPMFRQSDXEREVPPTEKQHAQPZFHQKQMMSKCJJXKSMTRUJKDYFXCTYZVLHGJNOMCINIVOPGBFOII");

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
    msg.setTimeStamp(0.9459852563040216);
    msg.setSource(43510U);
    msg.setSourceEntity(250U);
    msg.setDestination(26082U);
    msg.setDestinationEntity(172U);
    msg.formation_name.assign("LZHVWKUOBUJSZSANFKSPRIFGYQWUAYMCBJIQDWNBSLGRBCPMGBIDUQNWIEVOTISRGRHENJDZDXEEUHRTSOTMJGQMEPAQVRZKPTCXLJATRASTHJHFLPDXZXRCVLTJBEDNWCQSOXBAOKNMYPVMOSAZLFMYFDJQWXKNWIMBAXVDHAPHYPZQKELLFYECNCCDZPVUFTEOG");
    msg.type = 64U;
    msg.op = 37U;
    msg.group_name.assign("NAMPIAHWAMKNCAJGIYTXILVALFQZKHTUPTCWFERISBVBWQBBZPNQNJIRHWSYQROTHRQLOBODZVTJSZUUGDUDYOZGPIELRWWB");
    msg.plan_id.assign("PFDJEZTGAENZTCWEWQNHVWXPMYXIDIQMUBRLUPRWZMEJTLOVORYIPASBWVVUXEFSEUTOAODMOUDMLBWCKBFMUXEYBIXWBJWNBAZLVKRXAAVSAOELGL");
    msg.description.assign("QDPMBBPYRAIIEQRILPNOLBVRLCBKZMJMDDEGGPMEHMXSNFZGJWUYJMZUKDXONHQTUXXJRFPVJJRCIKGLNVSTWXYEKLCWBIPFKSXJFUZBOHSFBFUIYFYGIVTBLZWOPRCYZWZAYTONSGSWTSDQOQYBYUADOHFISGVPRXGRTDSQTNVHGKNFIAECWWCCHMQPVWAINZTRUKHEAL");
    msg.reference_frame = 157U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52390U;
    tmp_msg_0.off_x = 0.18864583844442762;
    tmp_msg_0.off_y = 0.1446221316011882;
    tmp_msg_0.off_z = 0.9175230035359734;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.36554655044898576;
    msg.leader_speed_min = 0.08766972232636239;
    msg.leader_speed_max = 0.8259229589751865;
    msg.leader_alt_min = 0.27541398272398054;
    msg.leader_alt_max = 0.00021002745002940415;
    msg.pos_sim_err_lim = 0.11349844324867253;
    msg.pos_sim_err_wrn = 0.4556189772919056;
    msg.pos_sim_err_timeout = 3836U;
    msg.converg_max = 0.27790936330000593;
    msg.converg_timeout = 35217U;
    msg.comms_timeout = 34651U;
    msg.turb_lim = 0.8099279173414214;
    msg.custom.assign("QLQIOCJUYGIYOQHYMGYZNZNZVXBULQDNVLTPWNYFWEQGOWHLFYHEMMFRFAMHVMRHCVKNDMUXNTNGLQEJIKLZIBJTIRERXUOQZCJFADWOQIMFESIDTZYKWVXHLRZOSPAYJKCMKOJJOVHXRSDO");

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
    msg.setTimeStamp(0.2148180574199675);
    msg.setSource(52138U);
    msg.setSourceEntity(125U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(3U);
    msg.formation_name.assign("OETOWHLBTOHKCATLCIGDQGRJECSFYRCULVDSEPSWHXULRLICJBZAMUWEUHYGMUNVXBQBFRHXYXBDISXVENPMGGKJVURQCOKMFNWACWVRTMGGZBTSRWTMOYQZVMXGXMSCDYDOEKIFNIATJZHXPAPAPJOFWKZDRVIYLPRNGZDNCPHBTFQLVWWSBYEZXVXBPDJKUHKHAIWPQNATJGLK");
    msg.type = 88U;
    msg.op = 66U;
    msg.group_name.assign("ZDNKCXISWBK");
    msg.plan_id.assign("VAALTWDTGHCSDMLYNWLSIQDJFZKBAMUIFWOVKBQBXHXCOIEVRENFWRBKYYXGOQQDHFHZTYRNXQRKOAC");
    msg.description.assign("KOAZIHDCOBBQZPKEZTFBFDNLGHMMNNPZNDUX");
    msg.reference_frame = 131U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56239U;
    tmp_msg_0.off_x = 0.4552516345681763;
    tmp_msg_0.off_y = 0.14698287552314604;
    tmp_msg_0.off_z = 0.6255183277150264;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.5309164937288985;
    msg.leader_speed_min = 0.9816126853631526;
    msg.leader_speed_max = 0.7871134637238393;
    msg.leader_alt_min = 0.955105720925052;
    msg.leader_alt_max = 0.2105146194491868;
    msg.pos_sim_err_lim = 0.9473016710469276;
    msg.pos_sim_err_wrn = 0.18504333140689755;
    msg.pos_sim_err_timeout = 8738U;
    msg.converg_max = 0.43123166566767857;
    msg.converg_timeout = 24689U;
    msg.comms_timeout = 21441U;
    msg.turb_lim = 0.17150581000667597;
    msg.custom.assign("SXPXOMLEFBHCRQEHAXAYJMUCMPOHRGZVLECEBECXYXYFBXLWGPLUPFPGIJZJDGCVGNUFKDAUIPPQFQXEQHFVFYYKXHYFROEKEUYIZODNDGOJDTQRZKTJTN");

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
    msg.setTimeStamp(0.730280936404404);
    msg.setSource(50107U);
    msg.setSourceEntity(164U);
    msg.setDestination(36657U);
    msg.setDestinationEntity(226U);
    msg.timeout = 51602U;
    msg.lat = 0.6358964102227178;
    msg.lon = 0.5824339176873016;
    msg.z = 0.91892149770864;
    msg.z_units = 204U;
    msg.speed = 0.730350010207845;
    msg.speed_units = 67U;
    msg.custom.assign("QYKLKBGZCVZCBRURMZSPCGLWKXYXCDDNHWBSDNTBKXNEZCVWNXLWGYXAKLOOWWVRNGGGICAIOFNUMBXZHRYTJJIZJMWGUYROHDQQROHKYQFUNMECYESLVFXJAPSOCMJFKHYHKIAKQLLVV");

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
    msg.setTimeStamp(0.14606961385117512);
    msg.setSource(4766U);
    msg.setSourceEntity(200U);
    msg.setDestination(52892U);
    msg.setDestinationEntity(16U);
    msg.timeout = 23169U;
    msg.lat = 0.21705336211859905;
    msg.lon = 0.7442334100274425;
    msg.z = 0.07659662665151923;
    msg.z_units = 134U;
    msg.speed = 0.4566349969809873;
    msg.speed_units = 77U;
    msg.custom.assign("HCHSBJSMMQLPQERGHVGGECMPYQYZKQIJQRTYOFAVVDQNOGNFFFYRODAYZMRLMUNTITUNUCFNWLTUELAIFIHTGDEUVXQGDTKSIEXXPJCYXVDTQGLKJWNZWBKKEASHRZNIBJNEWYBTJMDLATLHCTAPECBBLXIBDWEKCDNHZVQPOFSUAJKYBJOHMGA");

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
    msg.setTimeStamp(0.23218753353145427);
    msg.setSource(59434U);
    msg.setSourceEntity(173U);
    msg.setDestination(34164U);
    msg.setDestinationEntity(68U);
    msg.timeout = 12079U;
    msg.lat = 0.45883477003868645;
    msg.lon = 0.7997317653432975;
    msg.z = 0.3010695013733464;
    msg.z_units = 19U;
    msg.speed = 0.16344310046854404;
    msg.speed_units = 35U;
    msg.custom.assign("HKAOLWFTHQHOZVQPYBLJLLTTOAXDATYPAKKSNGVLNIKEJSFUMEXPWCCQBNMCUXGXHMWEITLZQJPNZVEVCSRPBYFEDFNBQXZZRSRJAQDRKFHOKRUTSRSXVMBFOVOWPNYGDZTQEXHEYIOSWMFWNPMGLYORJAFPVEKCGCOQDQWZJZBXNIYTSDVY");

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
    msg.setTimeStamp(0.5596059601470729);
    msg.setSource(29632U);
    msg.setSourceEntity(184U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(42U);
    msg.timeout = 36857U;
    msg.lat = 0.3041733956553171;
    msg.lon = 0.1697315762510715;
    msg.z = 0.13390098170828835;
    msg.z_units = 45U;
    msg.speed = 0.8201203628156631;
    msg.speed_units = 204U;
    msg.custom.assign("ZNOJPIXWCBAHXWOGMSNQMMELQOPKOHLIJSWCJV");

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
    msg.setTimeStamp(0.39335451633423246);
    msg.setSource(47438U);
    msg.setSourceEntity(104U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(173U);
    msg.timeout = 49898U;
    msg.lat = 0.2996078463457468;
    msg.lon = 0.13491762707875998;
    msg.z = 0.13515931820028926;
    msg.z_units = 203U;
    msg.speed = 0.7864600826434209;
    msg.speed_units = 144U;
    msg.custom.assign("XWODELXZDBNSIHJJSMERWONHYUKKCZQZVSYWFQXGJDLEOLWOTOKVABRHBTJKIUJOFMWEETKCYLPKHMSDWWSZVABLVKPMCCXALTEDTNEVRXFOTJDDSVHJFBIXLHYBTIIPJF");

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
    msg.setTimeStamp(0.23161099603254798);
    msg.setSource(62545U);
    msg.setSourceEntity(226U);
    msg.setDestination(15337U);
    msg.setDestinationEntity(111U);
    msg.timeout = 63378U;
    msg.lat = 0.5302360232642988;
    msg.lon = 0.4608605361314778;
    msg.z = 0.15020559617420137;
    msg.z_units = 188U;
    msg.speed = 0.2672828087657326;
    msg.speed_units = 45U;
    msg.custom.assign("KBHWSRXIMJTQTSGLQJTDQHZJRZONPIOKWCASZCZIHULLXTKPWPIAJMDFGSUAPPAERXWZHDNPRECRVHUISQSKGBRVONJKQEWYDWSVTYQWFCIUDLAYSLCVTJPHGZMEYYFYVBYBVGGRHQJMBXRWQLTETYMQLNXANHRBTCNIPJNDZDFOXKLEDVXECVCBEKBFSMGMXIUAUUUTUBGOHXGDEFZCFYPGWOKVMOWJMFIOPBZQLYXOFK");

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
    msg.setTimeStamp(0.2979355988816349);
    msg.setSource(7150U);
    msg.setSourceEntity(59U);
    msg.setDestination(53699U);
    msg.setDestinationEntity(233U);
    msg.arrival_time = 0.4615113563429938;
    msg.lat = 0.8977745889590786;
    msg.lon = 0.3818652614634096;
    msg.z = 0.06583356487440328;
    msg.z_units = 236U;
    msg.travel_z = 0.10104474412979281;
    msg.travel_z_units = 154U;
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
    msg.setTimeStamp(0.4229635095871481);
    msg.setSource(25932U);
    msg.setSourceEntity(155U);
    msg.setDestination(64874U);
    msg.setDestinationEntity(71U);
    msg.arrival_time = 0.9176105717186965;
    msg.lat = 0.02129243062678199;
    msg.lon = 0.7173175169086635;
    msg.z = 0.7295061253382237;
    msg.z_units = 170U;
    msg.travel_z = 0.1179210764322548;
    msg.travel_z_units = 150U;
    msg.delayed = 195U;

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
    msg.setTimeStamp(0.9569821293337483);
    msg.setSource(55263U);
    msg.setSourceEntity(230U);
    msg.setDestination(58734U);
    msg.setDestinationEntity(120U);
    msg.arrival_time = 0.44720159046480956;
    msg.lat = 0.2921078055241907;
    msg.lon = 0.4200606886845367;
    msg.z = 0.1837694164925342;
    msg.z_units = 168U;
    msg.travel_z = 0.4089799992541836;
    msg.travel_z_units = 55U;
    msg.delayed = 63U;

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
    msg.setTimeStamp(0.9806616053479512);
    msg.setSource(3441U);
    msg.setSourceEntity(46U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.6290294083740461;
    msg.lon = 0.3426804427701673;
    msg.z = 0.750717968715676;
    msg.z_units = 88U;
    msg.speed = 0.6349159061725824;
    msg.speed_units = 162U;
    msg.bearing = 0.3691099382301767;
    msg.cross_angle = 0.848010708432934;
    msg.width = 0.4284596107466516;
    msg.length = 0.2781448540667736;
    msg.coff = 139U;
    msg.angaperture = 0.5279797507337498;
    msg.range = 58482U;
    msg.overlap = 89U;
    msg.flags = 228U;
    msg.custom.assign("INZOZYQTKJZYAPHZZTPEWOACRKBIQVNZXSJPIBTWZIETXRDVEJKECQSWFUJPFHMHOIAEZPHKYSAYNSCQGCIVJWYSYRPYJLOALQMWLCDSJBBRWAPHFMOOQXBNECRAFKLUCVGP");

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
    msg.setTimeStamp(0.7378426069614454);
    msg.setSource(43072U);
    msg.setSourceEntity(121U);
    msg.setDestination(48266U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.3907197311999302;
    msg.lon = 0.05046773957443851;
    msg.z = 0.8496193005335853;
    msg.z_units = 158U;
    msg.speed = 0.035545472193031835;
    msg.speed_units = 23U;
    msg.bearing = 0.20949383604722105;
    msg.cross_angle = 0.3498268717657591;
    msg.width = 0.21611307559163018;
    msg.length = 0.799295649668226;
    msg.coff = 139U;
    msg.angaperture = 0.6986983681135435;
    msg.range = 30933U;
    msg.overlap = 223U;
    msg.flags = 151U;
    msg.custom.assign("FYIONZJOYIFAAZCZKPWTOLGRRTPUOTCSHLPHUJFWLDMIBPCELOPQUXKDRBTNOIJIBHUWQCTCNQENVFUTVXGYPXKEITZXMFHYHCUBVZKHVXNFJEGARDXSYJLKWQRREUGMSABQBJDFGLMBTWUYAJXQVEKSQEEVSADUVBZUKRIMCLTQDORSXAGBNHFZDSSCPWAMNLPHKCYXDAOQVLNMH");

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
    msg.setTimeStamp(0.9645641994226988);
    msg.setSource(44832U);
    msg.setSourceEntity(27U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.35405171298251636;
    msg.lon = 0.06877237813594383;
    msg.z = 0.7840598805778475;
    msg.z_units = 81U;
    msg.speed = 0.7315562928165732;
    msg.speed_units = 136U;
    msg.bearing = 0.2798977661706159;
    msg.cross_angle = 0.6032008599073339;
    msg.width = 0.31366681700983223;
    msg.length = 0.7263184147976045;
    msg.coff = 203U;
    msg.angaperture = 0.3551586809443159;
    msg.range = 24779U;
    msg.overlap = 238U;
    msg.flags = 142U;
    msg.custom.assign("VTBALFPPMMJGLVHANYZBYILUDYNYEKRTDJRRIZSWJOJRNRKGHXXFBMXMMHFCJZFKSGTGQAVUZBEQBEBZUMSVVCOQEVXJAWSWWHBZVEEUPHKTFUKQKNVHPFFKNUWOIIEDPOOLBMRDSYCHAGZOIQWTALAWLDSHITHUGZPNYLLCRPQCJYOLYYGNX");

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
    msg.setTimeStamp(0.24721353316486216);
    msg.setSource(64529U);
    msg.setSourceEntity(128U);
    msg.setDestination(8454U);
    msg.setDestinationEntity(251U);
    msg.timeout = 56940U;
    msg.lat = 0.4694852473883858;
    msg.lon = 0.1716640014504064;
    msg.z = 0.7064316819623976;
    msg.z_units = 217U;
    msg.speed = 0.4316135630043435;
    msg.speed_units = 165U;
    msg.syringe0 = 8U;
    msg.syringe1 = 181U;
    msg.syringe2 = 118U;
    msg.custom.assign("PGRYSWJKTTSKEATCJNRRYJTJJZQBHVNDWOCFBNZWYHUOFNDXOTWMIOCHHIJFPQLCFWKD");

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
    msg.setTimeStamp(0.3681340366434863);
    msg.setSource(56770U);
    msg.setSourceEntity(164U);
    msg.setDestination(44316U);
    msg.setDestinationEntity(69U);
    msg.timeout = 15099U;
    msg.lat = 0.7302642157144851;
    msg.lon = 0.9069074384836682;
    msg.z = 0.19746467671000245;
    msg.z_units = 62U;
    msg.speed = 0.38984031130576435;
    msg.speed_units = 57U;
    msg.syringe0 = 171U;
    msg.syringe1 = 209U;
    msg.syringe2 = 99U;
    msg.custom.assign("VLECMJUGDHSVQDTZOATYGBEFUNNWHMBDQBCIAURMUDWLTNWENESDXXQAKCGLZOIPSSGJGCZDFZOQJBSGJMKFAOYKAOQSGPYRUHKQQDIZOWPCBNBFEMAESTPOVCYXVHKFWALXBXZYXNFRACLPTVRRVJRKSZTINUNYUHMYVVHWMTCONXOIMUDSIYQKILEMUAVJSTW");

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
    msg.setTimeStamp(0.36512078499577094);
    msg.setSource(65071U);
    msg.setSourceEntity(237U);
    msg.setDestination(22239U);
    msg.setDestinationEntity(205U);
    msg.timeout = 55966U;
    msg.lat = 0.09752348332249494;
    msg.lon = 0.6627606422529778;
    msg.z = 0.13498231337903688;
    msg.z_units = 127U;
    msg.speed = 0.857067886994665;
    msg.speed_units = 240U;
    msg.syringe0 = 244U;
    msg.syringe1 = 86U;
    msg.syringe2 = 177U;
    msg.custom.assign("RANAKAPXJTVOFYVERZTTDIOZJYPSGRUGFFQDCCFUFUWKVARNXYDERLKQGEDWCTZMTTQLQQKNOMWSUSZLNYBRJWUBYQKDKGHVMWYHXCNJLEBRLGATHBFVEWHK");

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
    msg.setTimeStamp(0.8319431090360959);
    msg.setSource(35370U);
    msg.setSourceEntity(213U);
    msg.setDestination(42605U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.9648445888235742);
    msg.setSource(56491U);
    msg.setSourceEntity(189U);
    msg.setDestination(23446U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.09902236806824372);
    msg.setSource(56463U);
    msg.setSourceEntity(150U);
    msg.setDestination(33452U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.9694204502765437);
    msg.setSource(29917U);
    msg.setSourceEntity(117U);
    msg.setDestination(32976U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.5216442923749542;
    msg.lon = 0.4969043377008434;
    msg.z = 0.7837037101874682;
    msg.z_units = 237U;
    msg.speed = 0.41255663218560246;
    msg.speed_units = 173U;
    msg.takeoff_pitch = 0.0029319798747186043;
    msg.custom.assign("LTLLPILVOBEWLAABBRSCDPEVHJUSMOEXGVSJPWIKRMINBYAYUOAFSZWXQFYXJAGOATZDDUOZNEZFPIGSHUNPQJYZSGNFOJCBSMZVURYQVCEXWNCTXTGPYYIHFGHVYYEKUVUQGRWUDULEMKIMZXWDXQKXNTVEOKWCJICXLRWFIPGTPHOQDJKQKLTFFCDNWKLB");

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
    msg.setTimeStamp(0.8942666568254678);
    msg.setSource(52141U);
    msg.setSourceEntity(152U);
    msg.setDestination(32551U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.633538703955144;
    msg.lon = 0.5938431529554711;
    msg.z = 0.9707956760674223;
    msg.z_units = 151U;
    msg.speed = 0.6514521834174954;
    msg.speed_units = 122U;
    msg.takeoff_pitch = 0.5544817456305695;
    msg.custom.assign("FWBZLHMCFYNTMACTUBSNPCRPGIVJOXTNODKQLWUFHATGYCLPSBIVHMGUCFXMQETUUPDQGUSHOWKJZZGZGESBVWPNZIWCIEUBLNYXYLFEOVGXARYKQDTRYZXANZTGXKRRSAAPWIABUCIRMQLHCDGXMJJLKGZYDDFLKTDKKJIRXNWJLFZBBXOVKXPHRKTFUEMOLHEQQQVAIPJSCEPMSBDSFOWDHWHWQMAMJJVVFSNYTVEINNVUCBPOQRYJDZO");

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
    msg.setTimeStamp(0.8241396430335516);
    msg.setSource(11868U);
    msg.setSourceEntity(102U);
    msg.setDestination(51203U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.3107856559553952;
    msg.lon = 0.9235089389806204;
    msg.z = 0.04502897994605326;
    msg.z_units = 88U;
    msg.speed = 0.4605086656946846;
    msg.speed_units = 171U;
    msg.takeoff_pitch = 0.8123497906113617;
    msg.custom.assign("TCVPMUCVAQYNTGYPVIZQVWTUWCNWPHMIJHOKNAZONFZSXAJFWMRYEXBPUHUSFOXKGCQVTKIEOYUDLNXRIXIILXMQTWSALFYXRGFZNHPBJDOPELKDRCQOBRLPIBGTOHLBOZOSUJGTDPBRXWYZJNRIYRUPOBKDVWZGCGJIEAMAVZFGXKSSZET");

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
    msg.setTimeStamp(0.8040172709737005);
    msg.setSource(34269U);
    msg.setSourceEntity(32U);
    msg.setDestination(62561U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.6555835510110309;
    msg.lon = 0.8056179713614823;
    msg.z = 0.5899509635051676;
    msg.z_units = 142U;
    msg.speed = 0.24358756116249825;
    msg.speed_units = 144U;
    msg.abort_z = 0.9948105106636289;
    msg.bearing = 0.5765622795638937;
    msg.glide_slope = 117U;
    msg.glide_slope_alt = 0.22485734752972075;
    msg.custom.assign("GVNHIJUJHPNTKPZVEAGKEMOGDECHRHKSPZKZAMGETYCKYZOZAMDOFYBDCLNYFBYKXXLBDGOMHLTSFOZWJSPLJRWMOXCLKLRPJAZILDUBVIUSFVGTVUIIFSNUHLXTFDDQNAQMAYRZRXCQEVRJPONKPAACFCY");

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
    msg.setTimeStamp(0.9870449858935939);
    msg.setSource(34554U);
    msg.setSourceEntity(130U);
    msg.setDestination(14447U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.4779845217072851;
    msg.lon = 0.5336151237545839;
    msg.z = 0.20899393633386976;
    msg.z_units = 27U;
    msg.speed = 0.9348386552587427;
    msg.speed_units = 55U;
    msg.abort_z = 0.5180097336272418;
    msg.bearing = 0.14763720759496846;
    msg.glide_slope = 240U;
    msg.glide_slope_alt = 0.39775551201787585;
    msg.custom.assign("DIRHHEVSSDKPZOUNHKXKIJRTBYQDDFYCVKAMDMTCAFTUTIZVCXIZUTCBPWJYFGNVHEQKBYJXPBNMEWPWHOCSWLTIGOJCHVMSQLAWWFBGUSRNPXOJDLILTTOUGAQJFZFMPIULSNMJYUIXRBRAJYQWCLEWTHABVGLXDEGEYMWXQQZSRMBDEOVYBRCJKAPZCNCLSALOKZGHPEBRAXIGSHNQLMXVXWZRYFFVOFPUOKYGEUUZOVHFIGDKNRKTZPENJ");

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
    msg.setTimeStamp(0.6002484917377257);
    msg.setSource(28365U);
    msg.setSourceEntity(125U);
    msg.setDestination(57585U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.6490430553263831;
    msg.lon = 0.3213852210233177;
    msg.z = 0.3991765934958581;
    msg.z_units = 191U;
    msg.speed = 0.875439099302187;
    msg.speed_units = 228U;
    msg.abort_z = 0.7650040124985422;
    msg.bearing = 0.9940114514078282;
    msg.glide_slope = 213U;
    msg.glide_slope_alt = 0.6878306745922738;
    msg.custom.assign("BYTZCNJDVDZSWVPMXPNQDPICMGCKKQXTEBGILIJLXWMNQVBVFRTHWTRUKQPVOCBVA");

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
    msg.setTimeStamp(0.8423015604102356);
    msg.setSource(10169U);
    msg.setSourceEntity(234U);
    msg.setDestination(42960U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.23715840841622704;
    msg.lon = 0.6343767197596872;
    msg.speed = 0.3413123107437438;
    msg.speed_units = 179U;
    msg.limits = 81U;
    msg.max_depth = 0.5452740876419453;
    msg.min_alt = 0.9207627092055392;
    msg.time_limit = 0.6018452072144486;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7205376468345767;
    tmp_msg_0.lon = 0.6427161567250048;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DLFNHVXTUWJCGWTORFGJDZTOQPQNUTWQDBRHBZXHDCKROINWCYNMABEJGMHXQRFKCSUAPXISSTRJVENHUYSNFLCIXJSMJEVEPFYWIOKSVEXZTASBVIDYYJPANDGJSEMCTBMSEVKIKYTVKGQJFSZTOWKGDELIPILWORZMMCAFAXVGZGOJLCOYHTPARBLZPNBUBLXWQVGKQQAMPABRWKUMQDYIOZFPHLYFP");
    msg.custom.assign("ZHHWNNKEPMUDJZKCCKJDZQNIWEOZVUDEHEQUFFPEOQSDVCMEKEHZTBSQTQRBVCKVZAILSCIHKTXOUSLGTKGUAPPNVNXWGQONUJSQYVBXBTMLOMABQRPLWYBMJNJTIYGVUFKDIUYVNZCOAGARILCGWTPNBG");

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
    msg.setTimeStamp(0.26681381123803416);
    msg.setSource(9020U);
    msg.setSourceEntity(106U);
    msg.setDestination(53121U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.21246469092957898;
    msg.lon = 0.6723655233462162;
    msg.speed = 0.9396388570651775;
    msg.speed_units = 137U;
    msg.limits = 28U;
    msg.max_depth = 0.3066245824673671;
    msg.min_alt = 0.8750866183386682;
    msg.time_limit = 0.836753130544608;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.05059145547094612;
    tmp_msg_0.lon = 0.4868488532166624;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PQKSLZDWBJACWBKQJRPRFEOSBGRKISVQLMFCFIIWWPKFBGUXMJKJEINHTZUPUYCWUMCNVQTDZXBTBASLHXTUIIXZOIXLRZJAXOFLWEPNTMAQVBCHXENEVWNVXHJADAYWBVTYO");
    msg.custom.assign("KQEFTFJLYZMTPKEPGNZHRTWWOLPAGBKACKRGNOEQUHBYIVQBAEDCDIHUWRYSYDHQMCMFNRTXCPLSCNMBJGHTECFFXQQSWUNYXXODELWWVQACWIOKBRLRSVOXHLVGGYVTZMOZDNJLMNMEZFQTUDOSKDHJZUGSLWBPHFIAXOYJIARZULSXLUMQAKTCEPSGRACTUJY");

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
    msg.setTimeStamp(0.9723225785628896);
    msg.setSource(29559U);
    msg.setSourceEntity(63U);
    msg.setDestination(35324U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.43467953391220815;
    msg.lon = 0.47742389841591637;
    msg.speed = 0.5410763598152509;
    msg.speed_units = 111U;
    msg.limits = 204U;
    msg.max_depth = 0.15158125548248835;
    msg.min_alt = 0.8532897492747261;
    msg.time_limit = 0.13133543377172907;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6664175217947516;
    tmp_msg_0.lon = 0.4427788040357109;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GFXBSRWNYVGRLYHJZZPSNSPOQIYOSPCBHSYOWLWNVLVTKBEEMLAUBPMIUXBOVGACFJDMCNCUHDWPZPTUCFOVFBETOIZGALUFDCKJIGRLVQAHYSNDEKBVVBXESQKIULXXKWWTEOMPEYJHQTPTUTASSQMYMZNDKRUMNZMQJQZMWGDDIFCXJAOVMZNNLRTXGDITRBSQEWXULJ");
    msg.custom.assign("ZMQBLZYTKUFKFSZBBCJLEFKMOIAJKNWUSDRTVOPRZDOBVJGGXGHZIAKGRNNIDHYJBWXAFLUUODBXMKNPTRIMBQAMOPYV");

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
    msg.setTimeStamp(0.10594693532241561);
    msg.setSource(49302U);
    msg.setSourceEntity(19U);
    msg.setDestination(1971U);
    msg.setDestinationEntity(22U);
    msg.target.assign("HAXGKHOPIJ");
    msg.max_speed = 0.6816755184954062;
    msg.speed_units = 67U;
    msg.lat = 0.49425104693246225;
    msg.lon = 0.27284884202556736;
    msg.z = 0.4717007020487153;
    msg.z_units = 24U;
    msg.custom.assign("CDUAVQYYMWEVQSYCJTWEPPESIFQNUNSJQCFGEFBVSOEVWGX");

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
    msg.setTimeStamp(0.8530219510405324);
    msg.setSource(3957U);
    msg.setSourceEntity(218U);
    msg.setDestination(38939U);
    msg.setDestinationEntity(30U);
    msg.target.assign("TOBRXATILHVFPCAZCJS");
    msg.max_speed = 0.9921896145323322;
    msg.speed_units = 212U;
    msg.lat = 0.7078506489539866;
    msg.lon = 0.2753245213230925;
    msg.z = 0.5919354125869419;
    msg.z_units = 158U;
    msg.custom.assign("UJYKWZHPZWZDXOMEKHEHTPHEIQATUPZVPCCXFADZSYNYJNPLPYXJCGOFUVVG");

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
    msg.setTimeStamp(0.09287245937989497);
    msg.setSource(31880U);
    msg.setSourceEntity(127U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(71U);
    msg.target.assign("NVXAMBKLEYXAPUMWEWZQNQYWDJMOSNROWPAQTLVXDNMGRRFEJKBSPYOEJBZQ");
    msg.max_speed = 0.270645596635371;
    msg.speed_units = 95U;
    msg.lat = 0.25910835586577596;
    msg.lon = 0.48696706458334327;
    msg.z = 0.4738323693340215;
    msg.z_units = 73U;
    msg.custom.assign("CJWTMRKPVIOABTOSUBLOEASTQFDERCHENCDFIAKSMWDGIEITBDIRXTBQAZPRHTHDOTDGRKPGFBWXNXCZYSPYKYIJZLMYNVLGKSRMYGPJXUQLJOWHQDSNEMWSMAGEBVPSLKGNZWLNXPJUUYYBVTALVJFUGZVQONDNLLBHDHAOINUFMQ");

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
    msg.setTimeStamp(0.5377862801622286);
    msg.setSource(42372U);
    msg.setSourceEntity(250U);
    msg.setDestination(38692U);
    msg.setDestinationEntity(74U);
    msg.timeout = 2651U;
    msg.lat = 0.4639311467654088;
    msg.lon = 0.7985542962630303;
    msg.speed = 0.013935115547639265;
    msg.speed_units = 124U;
    msg.custom.assign("OFOZGQYKNPLBKZTYDDEPESMNAJBICQPBDOEVFTNGITYMJBFWHSIMWNBZXDAFCCGBNRKVMLXZKAIDCNAOJVWTQUCYBTGQJAYVYXDKQHZVPCKEMGSOUGRHOHQZDCOGXEKTQHVXFUMNURLHFASCLKZBZHSIUOHPGVWXFMPKDJIRMUJWYELGYUIEEWCIAVIQFAVLUZWQJTDIZLDYMRBPTYUUNXTKRRNPXWRJLBAS");

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
    msg.setTimeStamp(0.5172586791966622);
    msg.setSource(25995U);
    msg.setSourceEntity(211U);
    msg.setDestination(47843U);
    msg.setDestinationEntity(170U);
    msg.timeout = 56276U;
    msg.lat = 0.2507146527642765;
    msg.lon = 0.08737936057649998;
    msg.speed = 0.9043122894386768;
    msg.speed_units = 225U;
    msg.custom.assign("SBULNXZVFXWUADAVTDTWOPFCSGUVXVZYUPKBJLIANJWGLHWSTTEODBRGLYBVSSVHRGMJTSAZCBWAEQJTNHOPDQOUCMQOLPIASEDDTKYEJKIOLUUGJPPSHBIWGGIRLRHXXEQDCMAAHZFNNQFQZEXMYZHMAD");

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
    msg.setTimeStamp(0.4962443388857498);
    msg.setSource(33817U);
    msg.setSourceEntity(65U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(9U);
    msg.timeout = 40376U;
    msg.lat = 0.9751110907640264;
    msg.lon = 0.9317393324299544;
    msg.speed = 0.7449357630407388;
    msg.speed_units = 172U;
    msg.custom.assign("ZBPJAPTOZIIUVNQCWXQPIINZJMEYSDOIMQLRSYJODQNDCEVCPNKRYOBQDVGSSFCIAXFRXFCGLBOBYWLCWDNUETEBHLYSUURRNPCTGDVOCONTKQFDURRGPKXDXMFIULBXPYYODEALASLAVHXOHVNOVSFMIEWYNJZBEYFCKZZBJTUFGZTMBUEBWGTHZFSHEHTISWQLJMK");

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
    msg.setTimeStamp(0.4693367305637949);
    msg.setSource(4107U);
    msg.setSourceEntity(105U);
    msg.setDestination(22435U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.1829357337778389;
    msg.lon = 0.40372560745598784;
    msg.z = 0.16825308151124485;
    msg.z_units = 146U;
    msg.radius = 0.8314613242555663;
    msg.duration = 55657U;
    msg.speed = 0.9382012946394761;
    msg.speed_units = 250U;
    msg.popup_period = 55134U;
    msg.popup_duration = 18785U;
    msg.flags = 27U;
    msg.custom.assign("HSBKWUNSMYZDTBOEUCPGNIZVMMLMBNKNGRQKKHJCXJMOLKMUVLQKZOTRFXPWDECSSBXDYGFNRAJQGDOAKJXJGIXXYDZUBFCRRBEPQIOWNTNJQEQXUEEOTKYROXFHCIEKN");

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
    msg.setTimeStamp(0.20946369455641367);
    msg.setSource(20230U);
    msg.setSourceEntity(207U);
    msg.setDestination(11006U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.8727767662277521;
    msg.lon = 0.6996687886316709;
    msg.z = 0.6032958126237055;
    msg.z_units = 123U;
    msg.radius = 0.36117067186243734;
    msg.duration = 10978U;
    msg.speed = 0.46989206627499047;
    msg.speed_units = 153U;
    msg.popup_period = 13809U;
    msg.popup_duration = 44503U;
    msg.flags = 144U;
    msg.custom.assign("RSMGTUFLFAMTOAQINAUXSVZCRAIKDATYVRBJCKGVKINFBQTKVTOKGEWNSNDEHCKPNPLIAXFVMBGTHSZWPXNXBDEFEIRKUEGDPWUPMOXHIRQVZNLDZHPWYWQRXSUYYVBSKAYCZMRIOHJGLAZSCWAENJVCHBRJOEOTWYDJUSYUXPFQUEYIOIIXMOKHBJYPQXLCHQXNRJLTDOMMZBQMGUYFFEBQWSZLKCJNGPFMHEPGWQTJAOG");

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
    msg.setTimeStamp(0.30697247177765363);
    msg.setSource(6740U);
    msg.setSourceEntity(74U);
    msg.setDestination(12207U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.7257725765463183;
    msg.lon = 0.7139316697311271;
    msg.z = 0.4540122066438157;
    msg.z_units = 154U;
    msg.radius = 0.5439716394859799;
    msg.duration = 57932U;
    msg.speed = 0.00873743994492282;
    msg.speed_units = 191U;
    msg.popup_period = 61306U;
    msg.popup_duration = 52599U;
    msg.flags = 66U;
    msg.custom.assign("ZDKAXTFCQYDFXXAFAJEPQOWFTCHBJIKJOXEYCRYHRCLYFTOZGUXBDGIMEMCVKHCNYYSRAMHUGPIWEEHLMJVPAWJVVVVJWFSZTKPWSZIGFHMAGSVFKWTNBXQQJXHNBMMZBWKCUKUEITLDGTPXPMKBHWWSJVSNELLHXOKFJFIQWUUEPVRNJOADLGORNTRAIQDZZDUENYDSYVARLEGNLSICCPOSRBCRDORLHQLNUMUZPGQMQTO");

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
    msg.setTimeStamp(0.35438031127558145);
    msg.setSource(43888U);
    msg.setSourceEntity(49U);
    msg.setDestination(64612U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.4132032025161556);
    msg.setSource(4798U);
    msg.setSourceEntity(223U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.9251317133344306);
    msg.setSource(19179U);
    msg.setSourceEntity(161U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.9977856235894819);
    msg.setSource(12271U);
    msg.setSourceEntity(142U);
    msg.setDestination(24558U);
    msg.setDestinationEntity(148U);
    msg.timeout = 39979U;
    msg.lat = 0.7235358623496354;
    msg.lon = 0.405692285764632;
    msg.z = 0.3938411181431196;
    msg.z_units = 248U;
    msg.speed = 0.7397647359842748;
    msg.speed_units = 153U;
    msg.bearing = 0.1073734492847419;
    msg.width = 0.16497528747834578;
    msg.direction = 196U;
    msg.custom.assign("TWQTWQCBUAIKYSVSJPTXHIJTCKHOCYRYYHSNMUREWQCXEVLGLMDMTVNK");

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
    msg.setTimeStamp(0.18101920572922803);
    msg.setSource(13367U);
    msg.setSourceEntity(127U);
    msg.setDestination(19139U);
    msg.setDestinationEntity(15U);
    msg.timeout = 20582U;
    msg.lat = 0.08440075215415632;
    msg.lon = 0.8593111642807387;
    msg.z = 0.8526280386717315;
    msg.z_units = 231U;
    msg.speed = 0.3827265257786927;
    msg.speed_units = 81U;
    msg.bearing = 0.44141295121806146;
    msg.width = 0.024815922684800262;
    msg.direction = 42U;
    msg.custom.assign("BDTJZDNGRXBSVZXZIHSFFTMDNUBTFGLTCVRNSPHJATZACXSBPGWTZUUDVWAVFBGHMRLEACRXOFIH");

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
    msg.setTimeStamp(0.7172276748493818);
    msg.setSource(7512U);
    msg.setSourceEntity(229U);
    msg.setDestination(10201U);
    msg.setDestinationEntity(217U);
    msg.timeout = 64673U;
    msg.lat = 0.8145857001005191;
    msg.lon = 0.030212882826783805;
    msg.z = 0.039692112568339266;
    msg.z_units = 186U;
    msg.speed = 0.3623136249035406;
    msg.speed_units = 109U;
    msg.bearing = 0.4138175577593185;
    msg.width = 0.99752618352052;
    msg.direction = 136U;
    msg.custom.assign("BHLMIZZQPPRSCJOIDYPIMPITLOSGTORORYGWUVOFNKGNJUFGT");

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
    msg.setTimeStamp(0.29525179171176297);
    msg.setSource(30386U);
    msg.setSourceEntity(52U);
    msg.setDestination(27512U);
    msg.setDestinationEntity(130U);
    msg.op_mode = 69U;
    msg.error_count = 44U;
    msg.error_ents.assign("KDIGKBDSTCSTPCLIZPOOVCRVCINQXIKZXAEBOQFDNZBTRSHWCXLYTNHYQBJQMGPKUDHNFPVQMXDGBUBWGZYFQEGUMRZWXKVLLPPHRIZZUSMUAOCSWOEHZSBCQVIRDAXMNYFARZHAJTPIQFTNYMPXAAHYMQEONFTJGKSJFBJROWLDIEDJQPTCHMAYTKXBLNJKUWNHGIKXMUISLGNYWDOJPVVFZUJOERGAV");
    msg.maneuver_type = 60858U;
    msg.maneuver_stime = 0.4805767491426217;
    msg.maneuver_eta = 8102U;
    msg.control_loops = 3219698513U;
    msg.flags = 12U;
    msg.last_error.assign("PLEIPTYTYHFJMRNDZSHLGBNKAOPMCWHZQRTTEVKMZZSFOIT");
    msg.last_error_time = 0.9811864836955622;

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
    msg.setTimeStamp(0.10666396175850856);
    msg.setSource(62649U);
    msg.setSourceEntity(12U);
    msg.setDestination(34539U);
    msg.setDestinationEntity(144U);
    msg.op_mode = 240U;
    msg.error_count = 42U;
    msg.error_ents.assign("JCOFZFPCLTQNXTJMYLJNDJSHORQOKCZ");
    msg.maneuver_type = 63223U;
    msg.maneuver_stime = 0.20290581152111165;
    msg.maneuver_eta = 60580U;
    msg.control_loops = 2682133964U;
    msg.flags = 35U;
    msg.last_error.assign("TGLQBOMFOZVPHIDPWUPMKQUJNVBREHPTIKSFWAT");
    msg.last_error_time = 0.7915922032141856;

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
    msg.setTimeStamp(0.11991801832087468);
    msg.setSource(39229U);
    msg.setSourceEntity(157U);
    msg.setDestination(2895U);
    msg.setDestinationEntity(137U);
    msg.op_mode = 96U;
    msg.error_count = 109U;
    msg.error_ents.assign("VHSWBQQGWKYCEULDGDMHMDQPNCXIEZAJRAVECTEIEFMINTQZTDJMOUUANLPTCTDYMBYNYHRDBPSXHKIGMOKQWLGSOWVJ");
    msg.maneuver_type = 18378U;
    msg.maneuver_stime = 0.9395275475901622;
    msg.maneuver_eta = 27638U;
    msg.control_loops = 2826578928U;
    msg.flags = 226U;
    msg.last_error.assign("ZKBKNYUYAWBQNPTHADMIFRGQUTGVUIRSXIPPQQAXKPGEBAGPONOLXEHNBXVCMGJXFJZOVGQCPREUHWKMMJJZBTABVZVQAWHOLFTFDXWAMSRTTRVFCYWD");
    msg.last_error_time = 0.06690789854136381;

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
    msg.setTimeStamp(0.28274344059954115);
    msg.setSource(11088U);
    msg.setSourceEntity(212U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(0U);
    msg.type = 232U;
    msg.request_id = 38582U;
    msg.command = 204U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 40245U;
    tmp_msg_0.lat = 0.5703962969753495;
    tmp_msg_0.lon = 0.2990077762147584;
    tmp_msg_0.z = 0.20528580339646996;
    tmp_msg_0.z_units = 152U;
    tmp_msg_0.speed = 0.13161029221312825;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.custom.assign("QEVYMOFFTGKXTYACYTZEQXHENSVGZJWBCSCOUEIZNHKXJBDLNSWAGMDTZRDJAOGRUWIKFUXKPNVMBJCXSYMVUKMMDPGNZWPYGFPRSRRBDEBQIWOCNRKGWMGHJCLTUHBXPMUOCEQQVJGGTODLQEKNZJNFICHHTZPWOJMVIDPHJEPHF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7179U;
    msg.info.assign("BGQSUOBKPBOHMALUEWWGPMYZVDNFAATASOEZBZJPUCWYFHSXJONYEKTWKMQXURQIFUPDJKTKLTKYSPVXSMPFKDNGVVOLGPZQOJZHELRUXOJ");

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
    msg.setTimeStamp(0.856426600418678);
    msg.setSource(9459U);
    msg.setSourceEntity(215U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(233U);
    msg.type = 227U;
    msg.request_id = 13450U;
    msg.command = 157U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 54779U;
    tmp_msg_0.lat = 0.6700815273314413;
    tmp_msg_0.lon = 0.5299010025587092;
    tmp_msg_0.z = 0.2977001773851259;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.4732273638264781;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.custom.assign("VGNSXYOCJHOFAMVHBBUSGGLDHKDHJQPRITIQWGDADPYFAVDSBPXRKONZZR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1534U;
    msg.info.assign("GOPOMOHYUDSDLPVCKZVNNAGMNBLTYAPNXFUREJSHGPMINYYLRJJVZFWMTFJYALMATXQFXPZOHHPUWTORWTVQQBOULXFZESBNCZNGZQMAHCIWMCHPHPTGNSXZLFZZXLSDCVWYXDGCDOOHCVUQKPQIUGADWCRXXDBQJJACEDIDGFKRBVRYBAKNUGOWKJRLQLJUKTMEVXWFIIEPYZRYTSLSHMEIQUSKBIBDAEVBRKISGWSOIEENK");

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
    msg.setTimeStamp(0.9265534616336184);
    msg.setSource(2954U);
    msg.setSourceEntity(136U);
    msg.setDestination(51624U);
    msg.setDestinationEntity(123U);
    msg.type = 238U;
    msg.request_id = 49140U;
    msg.command = 67U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 33524U;
    tmp_msg_0.custom.assign("ERXTMHALGHLHCDHYPOFCQCRLZLBKSDNYZJNQHBPCPIEUQRWXZXEYTNWEWRDFGLJSBBNCSRQHSETKUAIDEWOYPJRDEGMVQUOMZAIAVTLULGDOGIRIMJTALCS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6394U;
    msg.info.assign("ESOKHWISTRTZHXRVPDUIWYNHAIFPDSBXFDJBQEMBFYZJDBWPNYVEIRXBNRMRJXXOAKQCZZXFULSAHSTPQGVJCADXCMMIIECRWGBORVTCUQEGCUQFCWHPTVLGIXOVTYQGLEFYRNHNZUPHMODZJTJLOPPVLGQSBWKWONSJVFJETZNGGWPZVEHFLSRKYCAIQPMFQMHKYEOTBQAKUBJBOHLJWCVUNDSYLZCXM");

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
    msg.setTimeStamp(0.5437522416473191);
    msg.setSource(35194U);
    msg.setSourceEntity(245U);
    msg.setDestination(51100U);
    msg.setDestinationEntity(219U);
    msg.command = 245U;
    msg.entities.assign("VXXXMLFSQHDUPXWLHZERBCGACPVZYFCEUNFYYPVMEBYTFRBVODRQQGBWTGLELUWKNTVVSEWUFUJMSBIIBADAZLEJCZATSMUKHBGNHSNAOXLIYBOPMIIBDWJKKZUVPDIVTPUXWFHJZCRVCHMNZDDGKFAOJSQCGYWGGLOBEPKMNGREALJTDOXUZEAPRJDOVMWW");

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
    msg.setTimeStamp(0.16826248983821845);
    msg.setSource(58546U);
    msg.setSourceEntity(195U);
    msg.setDestination(22246U);
    msg.setDestinationEntity(218U);
    msg.command = 163U;
    msg.entities.assign("PSGBEEBIMBBRJRSAKIRFAGCPDKYNZQSGDCWOHGCBWKJYADIFXVOMZXDCSAHTYQMYZAJPWXKXNUVIBOTLTMRGZMRVRRIDVRCQKYSNCMDMEVLMLCOZQVNXBQZFAFJRFFKXTLUVQWAGETQDUJIXHOBWWCDUO");

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
    msg.setTimeStamp(0.9473635565884192);
    msg.setSource(16572U);
    msg.setSourceEntity(114U);
    msg.setDestination(59135U);
    msg.setDestinationEntity(193U);
    msg.command = 116U;
    msg.entities.assign("PXOZWBXARLJTVUPLOGBWFTHTTJEIALBEFKYAJKGUXILRRZZPFCKFHVWAUHZMDWUEDBARSELGYMHWSMWDJJN");

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
    msg.setTimeStamp(0.16464826830839796);
    msg.setSource(31153U);
    msg.setSourceEntity(220U);
    msg.setDestination(53692U);
    msg.setDestinationEntity(41U);
    msg.mcount = 16U;
    msg.mnames.assign("BFJRGRNWWJQTSXMOHCLPNHOMPWVPZTUQDGNULZBRFXCVDVLXTEPCQPEUIXHRJFYABOXGFAKSJTUSHBPITRFZQSEKIJKEYOYRWCEZLAWAZINADUPOCBDJLYPIOBZGQEMUENELNHSXCPXAQDIVZOVFFHUFUXGNOLRSIUKCWHYNCJGPDEBSOIAZBLIVHEWSYMDMKVMBRMZJYNKQTTKAWWSYYVQUWLVHCTXZNOGKDTVAHQ");
    msg.ecount = 59U;
    msg.enames.assign("AXPNNXFZNSIUTUYPBVKWDRMLJCPRVFJHOOPBGCLIHYMGDRPUGWFDZSITLPT");
    msg.ccount = 167U;
    msg.cnames.assign("LEVOMOSDJFMQBVNBGWASUTLZDHQTIYZOQNKHXEEQXFPZNJMUTLHFOJKO");
    msg.last_error.assign("BYFRLOSHILQXCGEDNPRXDVQUZCKQOINUNIKESWRGRBVYWFOSTEMWROYGPQNERSWUAQBWLIOPJWFYFUTTNBDAACKBJYCZBAFZMOGCXUIBADZPKQTGTTQPJMBYXJXJPRDWPYEWMV");
    msg.last_error_time = 0.4923227894321043;

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
    msg.setTimeStamp(0.545741819273455);
    msg.setSource(59566U);
    msg.setSourceEntity(210U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(64U);
    msg.mcount = 143U;
    msg.mnames.assign("NUDLIAAEREHIRAZKUASTSBCUDVPWCVGIKXZEYMPLHSCARDDXWKDIOOCLFZEDMMWFWCRAMQDWLNBQPBSETHGRYOQZWPIUNQJSOKUXRWJLYGFUXJHJRUZJNGANMXFHUECYSGQHBRVQMIKSQGFPNYKNWWTAOXYKLQMZVCVBZWMTAOJ");
    msg.ecount = 0U;
    msg.enames.assign("LOVPAAMSWSRUBGCQXCBZQRXEMLSKWTJNUFOXISMKQBJYGDXGH");
    msg.ccount = 82U;
    msg.cnames.assign("QGBECTZGTZGBXOVICTONYZSYYHUQFUFVOLUOIWMWOSVEPWRKCZAIEEOTNIPKCNKZPHBZUGWBSHRNRNGMPIXWGPNFMHOHTTFQJSXKRMOARFDCWUXIJMDJCAFJTKQHSXQJGGILYYYDCZWJFEWYMLRMDEDGMWAAVFAQQHAZLSUTPGDCBNLCKKRBSHB");
    msg.last_error.assign("RESKJAFEJIHYVDKQDPPVYBYQWOGNRPSXGVHKNMQRINAIJFYOVXOCRZBGAFLTIWMPHEAWGBKLDUSOKMXYCBKMCUAQQLYUKSDEUHYSBSPMSVTGNCAXXVVZMNTLIETGJJUKWXECQHZQYDBODZJHLPJAZDLTVGLFJBTCTUTIK");
    msg.last_error_time = 0.436348212385137;

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
    msg.setTimeStamp(0.29115752121094396);
    msg.setSource(13039U);
    msg.setSourceEntity(213U);
    msg.setDestination(15863U);
    msg.setDestinationEntity(77U);
    msg.mcount = 225U;
    msg.mnames.assign("CJYOCEEDBLLHLWXVAATGKKZNISLBDBOJHZGXWFZYNNNPQMNXZFFSXARTHLVJDHNGUVRMYBUAGIVMAKRFQDTPEWSBXGRKYWISESDQZPZXVWCGRPOOQAVIKIPDSWFHUQZG");
    msg.ecount = 113U;
    msg.enames.assign("KQBJPQEIUJILHMBTPXRCQRIEXTOANTBVSJOAVSUHOTHVNCGNBLASKCKVDQRWFDQXZEPLNBZGIYCGJAXXRQGYOXFZZPFYIESQIASCQWZRXKYURQTJWOINWWJKTRFKNAUJNGFAKDKYSSGVEGPMUBXTRCLLNSYCEOVEWDHSCBWMHLRSMREMNCI");
    msg.ccount = 106U;
    msg.cnames.assign("KHKLVVAISURIOXPVBJDRYYWDNCPPKSUFBNNFSOGZKSKLWEHFAUVLNXKYSUBWGLECHOIYFNODWFB");
    msg.last_error.assign("LKLDVLIFYMJZACDQFPWSSTGSCSXDLVMSJXVBOUYLZHPNOKATDIRVVOLLPNZWOQQXBOCEWEYAKZYJNHTYRCJYSHNPHERXCYEEIREBWMXXDBKWNABGGZMKATRUHFUYBUHWCIZQAVMIEOUCTWZBRIOPGPPNDFSOXGVCVTWLFNAUTGXOUYXPLFDHVEAGQJSJZNBXQCNRJKWHQARFBJGLURRSFDTUKIWNIDIJZFMEMBQGIJHGKAPVT");
    msg.last_error_time = 0.2743457033456693;

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
    msg.setTimeStamp(0.6476612725008017);
    msg.setSource(10035U);
    msg.setSourceEntity(32U);
    msg.setDestination(59445U);
    msg.setDestinationEntity(205U);
    msg.mask = 49U;
    msg.max_depth = 0.17488978634241958;
    msg.min_altitude = 0.43841061781993795;
    msg.max_altitude = 0.7317044842080517;
    msg.min_speed = 0.6774944406452754;
    msg.max_speed = 0.9235689274546448;
    msg.max_vrate = 0.1189320318499838;
    msg.lat = 0.2942371139131541;
    msg.lon = 0.5164889960350825;
    msg.orientation = 0.09128386880372918;
    msg.width = 0.7683026908303761;
    msg.length = 0.9799313291465621;

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
    msg.setTimeStamp(0.1211573381237806);
    msg.setSource(36249U);
    msg.setSourceEntity(27U);
    msg.setDestination(18074U);
    msg.setDestinationEntity(201U);
    msg.mask = 181U;
    msg.max_depth = 0.2582632967858851;
    msg.min_altitude = 0.28536056300094736;
    msg.max_altitude = 0.3875765393555035;
    msg.min_speed = 0.5274074652392259;
    msg.max_speed = 0.7393647565372123;
    msg.max_vrate = 0.4222322314810403;
    msg.lat = 0.9659377616145081;
    msg.lon = 0.18097354315511893;
    msg.orientation = 0.23355531513483785;
    msg.width = 0.04117343450308808;
    msg.length = 0.907456698281714;

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
    msg.setTimeStamp(0.022650793006134373);
    msg.setSource(34730U);
    msg.setSourceEntity(152U);
    msg.setDestination(25529U);
    msg.setDestinationEntity(105U);
    msg.mask = 99U;
    msg.max_depth = 0.10999213022285115;
    msg.min_altitude = 0.7692139378928705;
    msg.max_altitude = 0.5761625801551392;
    msg.min_speed = 0.29968124496811954;
    msg.max_speed = 0.19008259544977213;
    msg.max_vrate = 0.8788570535066053;
    msg.lat = 0.43571340046312124;
    msg.lon = 0.06365449793906486;
    msg.orientation = 0.6964320863878399;
    msg.width = 0.6414788853485881;
    msg.length = 0.47654736825390365;

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
    msg.setTimeStamp(0.012790396259359738);
    msg.setSource(47109U);
    msg.setSourceEntity(129U);
    msg.setDestination(4777U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.3495031855951667);
    msg.setSource(8811U);
    msg.setSourceEntity(202U);
    msg.setDestination(31422U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.16898107674034568);
    msg.setSource(48123U);
    msg.setSourceEntity(53U);
    msg.setDestination(38987U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.7886926788636553);
    msg.setSource(52084U);
    msg.setSourceEntity(156U);
    msg.setDestination(63936U);
    msg.setDestinationEntity(21U);
    msg.duration = 28720U;

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
    msg.setTimeStamp(0.28683736573893914);
    msg.setSource(36018U);
    msg.setSourceEntity(1U);
    msg.setDestination(11458U);
    msg.setDestinationEntity(114U);
    msg.duration = 30648U;

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
    msg.setTimeStamp(0.9531910093869893);
    msg.setSource(2899U);
    msg.setSourceEntity(247U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(174U);
    msg.duration = 13662U;

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
    msg.setTimeStamp(0.6412699207432501);
    msg.setSource(52354U);
    msg.setSourceEntity(211U);
    msg.setDestination(44278U);
    msg.setDestinationEntity(111U);
    msg.enable = 65U;
    msg.mask = 2317109389U;
    msg.scope_ref = 41927892U;

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
    msg.setTimeStamp(0.7786941872753144);
    msg.setSource(15503U);
    msg.setSourceEntity(176U);
    msg.setDestination(48946U);
    msg.setDestinationEntity(50U);
    msg.enable = 55U;
    msg.mask = 1308186589U;
    msg.scope_ref = 928022811U;

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
    msg.setTimeStamp(0.24659981450495894);
    msg.setSource(61028U);
    msg.setSourceEntity(195U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(180U);
    msg.enable = 87U;
    msg.mask = 4097627957U;
    msg.scope_ref = 3123527961U;

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
    msg.setTimeStamp(0.3856047502412904);
    msg.setSource(1667U);
    msg.setSourceEntity(252U);
    msg.setDestination(14140U);
    msg.setDestinationEntity(59U);
    msg.medium = 153U;

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
    msg.setTimeStamp(0.42825388078443416);
    msg.setSource(55692U);
    msg.setSourceEntity(54U);
    msg.setDestination(21217U);
    msg.setDestinationEntity(10U);
    msg.medium = 155U;

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
    msg.setTimeStamp(0.260502765362849);
    msg.setSource(2926U);
    msg.setSourceEntity(34U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(48U);
    msg.medium = 98U;

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
    msg.setTimeStamp(0.3025706527475226);
    msg.setSource(882U);
    msg.setSourceEntity(128U);
    msg.setDestination(43371U);
    msg.setDestinationEntity(120U);
    msg.value = 0.13147479573768361;
    msg.type = 70U;

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
    msg.setTimeStamp(0.11832245351519999);
    msg.setSource(12581U);
    msg.setSourceEntity(237U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4855191451825206;
    msg.type = 88U;

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
    msg.setTimeStamp(0.7914124592935203);
    msg.setSource(35347U);
    msg.setSourceEntity(250U);
    msg.setDestination(20655U);
    msg.setDestinationEntity(108U);
    msg.value = 0.03583492890993989;
    msg.type = 50U;

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
    msg.setTimeStamp(0.5251950836520837);
    msg.setSource(30746U);
    msg.setSourceEntity(14U);
    msg.setDestination(44222U);
    msg.setDestinationEntity(41U);
    msg.possimerr = 0.061307887313606146;
    msg.converg = 0.8119867172940096;
    msg.turbulence = 0.21026408179369915;
    msg.possimmon = 43U;
    msg.commmon = 34U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.7993547928868632);
    msg.setSource(53845U);
    msg.setSourceEntity(69U);
    msg.setDestination(17268U);
    msg.setDestinationEntity(32U);
    msg.possimerr = 0.21041742523688323;
    msg.converg = 0.5789973346533049;
    msg.turbulence = 0.8150184117673541;
    msg.possimmon = 84U;
    msg.commmon = 103U;
    msg.convergmon = 10U;

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
    msg.setTimeStamp(0.3514033785057107);
    msg.setSource(45356U);
    msg.setSourceEntity(178U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(97U);
    msg.possimerr = 0.14978988988463926;
    msg.converg = 0.28006497161061883;
    msg.turbulence = 0.7139923836403748;
    msg.possimmon = 104U;
    msg.commmon = 196U;
    msg.convergmon = 113U;

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
    msg.setTimeStamp(0.6371750616489553);
    msg.setSource(38466U);
    msg.setSourceEntity(141U);
    msg.setDestination(49344U);
    msg.setDestinationEntity(73U);
    msg.autonomy = 20U;
    msg.mode.assign("QTARLBKQAUMXHZPEKJGTOBNWZRDBQEKYAZDNWUKCLWMPCNFBCOCIJTYFTQUVFBUPMACQTVLHXSPQXVXYVWYFHEVYYDJGHJWVPGWSRNRZRMZYTLRWHSMGIYLTTHYOBUGNSIUHGXEMLCQRZAZDFNAUKGREBMNSHOEJOONPSEXPCTAFKZRLCTPKLDPRNVEDFSHUWVSKMSLIIQABBISXMQYFDUUBXHEOEODCIWF");

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
    msg.setTimeStamp(0.49896745452614766);
    msg.setSource(12760U);
    msg.setSourceEntity(162U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(201U);
    msg.autonomy = 4U;
    msg.mode.assign("DWGXZPUDCPWGYSCKLSSNBVOMSIYRQLWDVOYKOMIUXARPFWJQAFVISAERXYLZVSZNHTUBEAMXFRTWRQBXHONDPWQUEBYPANSBPCGLBVGIGHGYZVJWGMQHCFQHRKMZFWEFKXICETU");

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
    msg.setTimeStamp(0.4690772678823544);
    msg.setSource(38342U);
    msg.setSourceEntity(91U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(215U);
    msg.autonomy = 216U;
    msg.mode.assign("SXKQTYTKGNUYOKCHMAEAJLFKLEHIUNONMWRESGBKZUREDSKZHQPZUZEUPVIEADHTIGRQRWZDWPGJTCUXRNJVQOXZDCLNMTHKWWVWVGEOVLQTASEOPOYPRVHTRQEHQJBBJHOYUZAGACCBMIULXXJVZCNNRGTF");

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
    msg.setTimeStamp(0.9459506153226409);
    msg.setSource(945U);
    msg.setSourceEntity(214U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(211U);
    msg.type = 140U;
    msg.op = 115U;
    msg.possimerr = 0.6168036200509713;
    msg.converg = 0.8345926513046729;
    msg.turbulence = 0.10896206513773687;
    msg.possimmon = 136U;
    msg.commmon = 69U;
    msg.convergmon = 88U;

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
    msg.setTimeStamp(0.08861332902244512);
    msg.setSource(32828U);
    msg.setSourceEntity(5U);
    msg.setDestination(31256U);
    msg.setDestinationEntity(174U);
    msg.type = 76U;
    msg.op = 115U;
    msg.possimerr = 0.5728852079676731;
    msg.converg = 0.9788963822795961;
    msg.turbulence = 0.358935577386422;
    msg.possimmon = 113U;
    msg.commmon = 79U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.011399290924208327);
    msg.setSource(3646U);
    msg.setSourceEntity(233U);
    msg.setDestination(9229U);
    msg.setDestinationEntity(85U);
    msg.type = 7U;
    msg.op = 142U;
    msg.possimerr = 0.7568187054087967;
    msg.converg = 0.9379424565152987;
    msg.turbulence = 0.34807558548317197;
    msg.possimmon = 18U;
    msg.commmon = 202U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.7393071305390538);
    msg.setSource(54478U);
    msg.setSourceEntity(75U);
    msg.setDestination(62267U);
    msg.setDestinationEntity(136U);
    msg.op = 234U;
    msg.comm_interface = 211U;
    msg.period = 51248U;
    msg.sys_dst.assign("ZEARYLZASCWZWQQEUQKNEIBFNBAMINWQGXIXXNRUDEKKPWWAIFYAKAESWGBTSUTPZGLQVVYDUHOTAWSJOOLCOCBVOSPRTDVMJZMOMABUOQWBGDUCCHPHARJKXIDMVBRPZOGVMDJJKEYZEMSLUKRXQTHUHHVKTMNFCYIKLWGGSFNEJYUZITRFACLGLDIODQHIUXHFSXSVJLEYVFSH");

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
    msg.setTimeStamp(0.4238208730105246);
    msg.setSource(39790U);
    msg.setSourceEntity(207U);
    msg.setDestination(60487U);
    msg.setDestinationEntity(99U);
    msg.op = 124U;
    msg.comm_interface = 83U;
    msg.period = 3448U;
    msg.sys_dst.assign("CLPVVRQXBTOWYJHFVITLXAASISGGOZVVKRHEZDZMPIQONEGSKYKHKBFIZTXJRDNVMDSCIVVRFCQMCZTUFKEWWFBFZHYYJQANWQOUPVTAMBGXEARAPYUXTSLLXIHLWUNURBXMYMQNCGOTDLGAPWYIOSEJLACDOZFUNZBDPXMWDVCDGMZ");

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
    msg.setTimeStamp(0.7907017358964482);
    msg.setSource(44334U);
    msg.setSourceEntity(239U);
    msg.setDestination(44570U);
    msg.setDestinationEntity(204U);
    msg.op = 214U;
    msg.comm_interface = 130U;
    msg.period = 4218U;
    msg.sys_dst.assign("DFGTLLLKAZRYVSZMQWAYJFFJGPZAKDFKTTARGAMTBGWLZGXNUXJJBMLVJIHUILPNFGQVCGVJRTWUCXDFPEDNLYDJDYGOZJNZILINURYVSENNRQTDIVEXGEFBAEMFYSHREKUIYSCCQSOKMWZHPTHBASHRVVMODQOPWMDTZCXHCMQXQNB");

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
    msg.setTimeStamp(0.8906402286556019);
    msg.setSource(60455U);
    msg.setSourceEntity(134U);
    msg.setDestination(64628U);
    msg.setDestinationEntity(238U);
    msg.stime = 4019220111U;
    msg.latitude = 0.8177370783693857;
    msg.longitude = 0.09246738585636016;
    msg.altitude = 20213U;
    msg.depth = 6999U;
    msg.heading = 2643U;
    msg.speed = -29060;
    msg.fuel = -17;
    msg.exec_state = -5;
    msg.plan_checksum = 41563U;

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
    msg.setTimeStamp(0.1511799581004103);
    msg.setSource(15207U);
    msg.setSourceEntity(87U);
    msg.setDestination(43979U);
    msg.setDestinationEntity(226U);
    msg.stime = 2983786148U;
    msg.latitude = 0.5243448050740608;
    msg.longitude = 0.9991916350429527;
    msg.altitude = 13001U;
    msg.depth = 14682U;
    msg.heading = 6021U;
    msg.speed = -32428;
    msg.fuel = 78;
    msg.exec_state = -121;
    msg.plan_checksum = 37013U;

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
    msg.setTimeStamp(0.8058382958383351);
    msg.setSource(37916U);
    msg.setSourceEntity(176U);
    msg.setDestination(37550U);
    msg.setDestinationEntity(225U);
    msg.stime = 2779170770U;
    msg.latitude = 0.567778741648743;
    msg.longitude = 0.24512491790750623;
    msg.altitude = 4346U;
    msg.depth = 47192U;
    msg.heading = 44490U;
    msg.speed = -504;
    msg.fuel = 122;
    msg.exec_state = -111;
    msg.plan_checksum = 46341U;

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
    msg.setTimeStamp(0.7259104680130432);
    msg.setSource(64804U);
    msg.setSourceEntity(3U);
    msg.setDestination(35446U);
    msg.setDestinationEntity(67U);
    msg.req_id = 112U;
    msg.comm_mean = 169U;
    msg.destination.assign("OHFRLUUDFKRDYDIVSKAXECZKBMYYPCYFKIWREBCNKPOQGYCFPRFMXNIMXHJEVYOANKOLVXLJUSGITADVAJESOXNWWEQTCEZRCHRKANLFMAHIBF");
    msg.deadline = 0.1170115707251671;
    msg.range = 0.16704696077077497;
    msg.data_mode = 111U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 42098U;
    tmp_msg_0.destination.assign("IRIVMKIRFRJSXKDTPOCBJCGKCIVJLNOCDWGJIDYNZSTQMEVHBYNKHWXANIUPXVQOMRCGZUDSVMLLLURWTOBYEEQYZRBUPKPSQVNFBZVWXPGXJEHSFMKEHAONBJSNUOSTIMGTGCQXRFABDZLGYCFAJCXKHEHADELUAKWFCUIMFNXHRGJVQNOPYXBBFBEHUQOVYEWRCZEILADYDRAJMPWTUWTSZTOKFAWIJMSLPPHWXPZ");
    tmp_msg_0.timeout = 0.876652969094065;
    tmp_msg_0.range = 0.9883273998625042;
    tmp_msg_0.type = 5U;
    IMC::PulseDetectionControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 168U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XGFCCSQOBMMZPMSDAZMZMEWSAGVDPXLXKKNRHPHNDAYCTXCUIQQGYJDFGFTCKXEDTEECCQWWIURPJKJRERNYGJNLOWOZAUYJSRDGCJISKLDZBHKDNCYMUFQERIZZFIZPQWIXLRAKBWFVXJNQHZSYVIDYJHGJFQMENMNFWQOAABIRJUTTDSHTVAMEGLPHWHUTHGRSBAGNBVYPRYSVVHVLKMNKV");
    const signed char tmp_msg_1[] = {24, -122, 9, -81, -28, -69, 31, -16, -10, 24, -5, 103, -116, 1, 71, 5, 35, -12, 77, -23, -63, 34, -77, 38, 17, 64, -45, 96, 22, -82, -10, -89, 14, 47, -117, -38, -54, 87, 60, 26, 11, -60, -128, -71, -85, -87, -2, -93, 76, -38, 3, 94, -97, -102, 33, 5, 22, 90, -14, 17, 79, -74, 42, -90, 51, -68, 103, -128, -126, -82, 101, -8, 116, -80, 38, -29, 7, -119, 33, 88, 32, -25, -70, -111, -43, -94, -110, -10, -38, 122, 118, 117, 116, 122, 10, 64, 91, 25, 7, -22, -38, 59, 84, -120, -32, 62, -18, 32, 80, 50, 10, -13, -93, 42, 97};
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
    msg.setTimeStamp(0.3201794427809018);
    msg.setSource(33875U);
    msg.setSourceEntity(220U);
    msg.setDestination(58162U);
    msg.setDestinationEntity(205U);
    msg.req_id = 33721U;
    msg.comm_mean = 8U;
    msg.destination.assign("UEQUSGFOCMSPXAZNCFQVAYVEGNYNZTKBVCLZVOXREIXFIBMGPQAODQSXNKWBCQOUYRTZEDIMIVLHHODLSXVGLBWWTFIOEJRNLMROIMDIZEQJMRXKTBHLAKZGQKWKMYPGZZFIBYEFHKAJKVCPDXTEBPWLUXGYOCPALVBSUCASYJNDTEWINJVNHRICPJNNCPQXURHRAKMUDDLSUSF");
    msg.deadline = 0.7955691219586276;
    msg.range = 0.4911811482610249;
    msg.data_mode = 98U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 21042U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RWQJBIZVMVBBLZLTKQPIZAHJUTOSVAMDHSHTVLJYEZCRRXXLFGMHTSQXCSRQOCFCZBINNDNFODVMCYTSABMMBJWQZDXIGFJJUMHMYRXYKFLKUYGZAFQPEIQWPEFXRDNZHOZILKWTJOYAKDAYOKHQXNQTEVUKSJNNYEGOEGLJUQSWDDOPSUHATKPRJMGTNUAICLVDPLEFVIGMKUSOWPYC");
    const signed char tmp_msg_1[] = {-60, 94, 115, 13, -57, -118, -48, -60, -19, -30, -93, -28, -16, -97, -53, -100, -20, 15, -56, 19, -9, -84, -96, -43, -37, -58, -104, 3, 33, -103, 71, -64, 42, 112, -71, -52, -37, 5, -70, -109, 36, 121, 48, -52, 94, 63, -125, -67, 99, 81, -53, -94, 101, 101, -100, -34, 78, 56, 80, -117, 4, -101, -10, -49, -114, -29, 42, 25, 32, -75, -23, -72, -49, -3, 102, 118, -90, 29, -22, -54, -10, -52, -21, 40, -44, 24, 53, 23, -84, 54, 42, 107, -92, -93, 28, -41, -1, -81, -127, -50, -115, 113, 101, 118, -112, -4, 18, -75, -97, 116, 4, 23, -99, -19, -89, 118, -47, -84, 87, 12, 123, -35, 122, 124, 8, -63, -19, -114, 119, 108, -56, 38, 118, 66, 101, -3, 47, -102, 26, 92, 104, -54, 3, 73, -12, 55, -25, -117, -68, -10, 12, -31, -15, 5, 115, 56, -89};
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
    msg.setTimeStamp(0.31638147451956944);
    msg.setSource(32792U);
    msg.setSourceEntity(82U);
    msg.setDestination(49098U);
    msg.setDestinationEntity(187U);
    msg.req_id = 12782U;
    msg.comm_mean = 235U;
    msg.destination.assign("KABCEFNENNGCSZPXTJBNZPWDYGGHZVKAFXEHREPRXIJUWXMPOEDZJHALWJBBHJZVELMMMFQSHNRYFNVYKGWTAARCVGAIACSFMQKIFVJCBONQMVNVVDPDXDEXBMXGGDWHPEFQFGJTYC");
    msg.deadline = 0.8316964740646247;
    msg.range = 0.8798605171331793;
    msg.data_mode = 38U;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.23375695537373797;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QAFGGWZUMHIGMMKVTYIPLLXCYKRDQTDSEIEDXEZFYDRTQDFVASBNPXYZOCHUJHEIUBTSEKVXKOL");
    const signed char tmp_msg_1[] = {64, 112, -21, -119, -119, -43, 57, -93, 115, -82, -9, -107, 10, 91, 59, 100, -121, 104, 48, -23, -15, 31, -42, -96, 45, 111, -86, 31, 88, 92, -1, -21, -74, -96, 110, -82, 10, -51, -122, -86, 80, -22, 116, -103, -110};
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
    msg.setTimeStamp(0.4324771581619822);
    msg.setSource(23902U);
    msg.setSourceEntity(213U);
    msg.setDestination(60367U);
    msg.setDestinationEntity(233U);
    msg.req_id = 58761U;
    msg.status = 77U;
    msg.range = 0.6827137998003256;
    msg.info.assign("GZTRTLCILBQJWBWUNUBVQISGJODUVCAOUDFQODNPFQCBCDMIPXOFKUM");

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
    msg.setTimeStamp(0.8816975593939905);
    msg.setSource(60670U);
    msg.setSourceEntity(82U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(197U);
    msg.req_id = 6256U;
    msg.status = 78U;
    msg.range = 0.26906135605843773;
    msg.info.assign("YNYCAFJOPMNWRGCHBGNFIUVPREAENBTRAXKMTWIDBVKEUNTCKLUP");

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
    msg.setTimeStamp(0.765487371984192);
    msg.setSource(26337U);
    msg.setSourceEntity(72U);
    msg.setDestination(31271U);
    msg.setDestinationEntity(247U);
    msg.req_id = 55060U;
    msg.status = 242U;
    msg.range = 0.01901818395497945;
    msg.info.assign("QFAPNODPPGDADFMTXOCVDFCGQMQZQMGZETUMFFWHOYCKTPVJIHXGKJKRZXUPDUHCFXNSRMVTIGUQNDZSCXZILYERCGKBBFDVOLKYMZIRAMWNHGRVE");

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
    msg.setTimeStamp(0.6177046065156683);
    msg.setSource(57532U);
    msg.setSourceEntity(158U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(19U);
    msg.req_id = 27758U;
    msg.destination.assign("GYWDGQULXKQQIIXBVRENILHOYFUFNLOYBHBYWLNFNFHGSYDTVGFUMCVZXFAGNMBRLNDYEGEXAUHGKWDEEHEZDPSMUDVQRSPPVBARBKCUQZTYCSMSYMQTVTUBILSETBZAZNPJK");
    msg.timeout = 0.5352731134478839;
    msg.sms_text.assign("WLMITJQNNJROEKBPWZYDKJGUQTFAVTRJAEZFSMKTNRADUPUUVZOBGUNHRXQVJMVCDYLTCVPSZTTJWTQKJLZGXOYBPIRSYLMAXCZIVWOUZNGMUNIEOACBWAXHKLBDLATPHZTVQDPOXEBGYEVYGFKEICWOWMCLHMGAQWFDKIEGYZPRBQVQIHF");

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
    msg.setTimeStamp(0.7345861539415107);
    msg.setSource(27903U);
    msg.setSourceEntity(87U);
    msg.setDestination(3502U);
    msg.setDestinationEntity(23U);
    msg.req_id = 23694U;
    msg.destination.assign("IOCATIZGXQESUQRRGVLSMYXBGEAVJCKFBMKNYOHBNYXIIPAYHPNFJUDROIXELTOOHRGNZKXKPSCXLXKTODJDRMPWTKWHHXCSKLBDDTDIFAJURNFQCWZGSSPEHDQMAJPPRVZKLQOZCO");
    msg.timeout = 0.680532004103229;
    msg.sms_text.assign("UYJAILILCARHZRVWTSFYJCBFCBHYCUBPRSVNTHFAOFFYRSOFNBYVXLPVKXSMGYRGORUDOQQMJRQBKMOXJLCXLWZNEQRWNWENTRKUEZZ");

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
    msg.setTimeStamp(0.05205773472932784);
    msg.setSource(11852U);
    msg.setSourceEntity(213U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(211U);
    msg.req_id = 35060U;
    msg.destination.assign("RPWCQVBXSTGTIVLZNJDOCRHIFIATKIOSTNLINPPSGSDOUUBPCFMZIIUQEKWTIYPKNUPUKYOLHNAKEEMVKVNNQHJNOORED");
    msg.timeout = 0.5254667563259705;
    msg.sms_text.assign("BYIUUNPOXHMYGFISBEPMGNBVSASAGTEVEFUDFCFNDRPFXYPSJEHOXRHDXZGVSYUKCOAOOYENNRGWNRTEVHPTXWHQOZYUKGGZRXVMKKQJJJGCPQCFZCUQTTFMVCPXWHNVLOCUBFLIOWLDYDSNZZIRWNKKPXIZIKBGJTHLXNKCGOCQLKYQSEOXABTYEUALJPMVJJSBLAWIBTAVWSLDI");

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
    msg.setTimeStamp(0.2245788937744535);
    msg.setSource(4630U);
    msg.setSourceEntity(36U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(137U);
    msg.req_id = 46560U;
    msg.status = 18U;
    msg.info.assign("DEWFIASSLNTQBVRHDDTUNATYTHHKNBHSXILTGDJQSFEUGKYOXVPTXBSBWRHJGZZPBJKAZAUFILPDOQBRPFJVGFCUFKWOGNPFONVMVOVMDHWDEMLFZWEQNGBMRMFWIWACLKSXSXMJZECRYWICFEPGVSJKYEZUCULVM");

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
    msg.setTimeStamp(0.9249836210933703);
    msg.setSource(54542U);
    msg.setSourceEntity(175U);
    msg.setDestination(7725U);
    msg.setDestinationEntity(213U);
    msg.req_id = 12786U;
    msg.status = 192U;
    msg.info.assign("GSTUVUVELCDAEHNPMQGSSZTKUZEPSLQJIEBNATUVCCIPCLRFKVXYXVWNJZPRIQFRZAOSIBTJQPOQQYISHJKEXZGMNADOBXDNLUREZLWJRLZIIOFKTXYYPCTZMJPMNGVXGBVHMWFXWFWHPKWBJ");

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
    msg.setTimeStamp(0.5705817097051229);
    msg.setSource(16463U);
    msg.setSourceEntity(69U);
    msg.setDestination(59567U);
    msg.setDestinationEntity(109U);
    msg.req_id = 58096U;
    msg.status = 191U;
    msg.info.assign("NKNAOVWDKORDZZQRQUOBELZSWAFIFUZPXNLFYIOGEJDXGFWDUTDRBVCSJIOZAPFQDVNYAGSLHDVJBZERGCQUGXZBJKACHJGIOPQAUERKCJWFEMWZLVKBALSPVITOPLLHSEIQWJYGTQJCLBINHZAOSPRLVWIQRBDSMCYKFKMYGWGERVIDLMKPHUJXPHBTPAMKYETCYZXYXNFEBXTTHHTMUCXJTCIRFOEUMQYMNXDVHXKUOQNMMWGUN");

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
    msg.setTimeStamp(0.2174241743951334);
    msg.setSource(29353U);
    msg.setSourceEntity(237U);
    msg.setDestination(42040U);
    msg.setDestinationEntity(123U);
    msg.state = 41U;

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
    msg.setTimeStamp(0.445063151404712);
    msg.setSource(38734U);
    msg.setSourceEntity(10U);
    msg.setDestination(31113U);
    msg.setDestinationEntity(250U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.9772737908644964);
    msg.setSource(27922U);
    msg.setSourceEntity(79U);
    msg.setDestination(52782U);
    msg.setDestinationEntity(50U);
    msg.state = 246U;

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
    msg.setTimeStamp(0.5848754956342309);
    msg.setSource(23911U);
    msg.setSourceEntity(31U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(186U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.7941475048720307);
    msg.setSource(35709U);
    msg.setSourceEntity(151U);
    msg.setDestination(53492U);
    msg.setDestinationEntity(189U);
    msg.state = 97U;

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
    msg.setTimeStamp(0.9735134806693281);
    msg.setSource(1977U);
    msg.setSourceEntity(221U);
    msg.setDestination(41173U);
    msg.setDestinationEntity(118U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.4752940884678152);
    msg.setSource(64265U);
    msg.setSourceEntity(92U);
    msg.setDestination(53346U);
    msg.setDestinationEntity(65U);
    msg.req_id = 51095U;
    msg.destination.assign("ZFFHEYAVFSAHQDOMINBSLFSOEUQAHQAJRRPRSZINUYSJAMHMWEHCYXWGLCMDWCMYFSQNKRMTZNUPZGEOYJXPTXAKRUTLMNRXBGJVNJBJXKHOVGCFVVVQCGNRLGDPZEFCTKTSQKE");
    msg.timeout = 0.5482280921801368;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 29002U;
    tmp_msg_0.lat = 0.7035112964368903;
    tmp_msg_0.lon = 0.9333626267239528;
    tmp_msg_0.z = 0.9468633477638866;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.duration = 54258U;
    tmp_msg_0.speed = 0.3115038638402037;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.type = 233U;
    tmp_msg_0.radius = 0.7238724346819485;
    tmp_msg_0.length = 0.7375796610713674;
    tmp_msg_0.bearing = 0.8352410195746441;
    tmp_msg_0.direction = 141U;
    tmp_msg_0.custom.assign("DTUNSIWGCZLRQEADKHNQZTXYXFBWBCFUQXLEOEONGRNGJDRENAYVCBUDJRWPFQZXODSGB");
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
    msg.setTimeStamp(0.5390082590601853);
    msg.setSource(39289U);
    msg.setSourceEntity(14U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(11U);
    msg.req_id = 45881U;
    msg.destination.assign("FBGRNDEPTLAOVOPJRNIIXWMWTPFCROMEYQAVSOIVRKAASJKUQXRPMUXBUQDQEJWDOMUMJEDMDLOYZVGWCRFHYINZRIZHCSTLIDNKYUKZQVHCQTCROSWBGKJLHAHSNEJBNWYAPCJWJAKFHCOLYVZTBXHFZEDBBSQKPZDWUJXPRNSUVIZQAFUBFQCLNNXTPGUCGKDXYMSXGTQLOALFGZEVJAIDHUNMKEH");
    msg.timeout = 0.7519122893500173;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.4670755111971593;
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
    msg.setTimeStamp(0.4368965480459537);
    msg.setSource(50405U);
    msg.setSourceEntity(176U);
    msg.setDestination(29071U);
    msg.setDestinationEntity(55U);
    msg.req_id = 1908U;
    msg.destination.assign("BFDAUNUGKFAPKXTZGVNZIYMZLVROAKGTIWSBLIHSNHUMCONTQAJREAZRJIWLJEYTEAQQEOUVSONKVWKSHXHNRUQFYPSTDCJGSWXM");
    msg.timeout = 0.814948813836782;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.2562947208899794;
    tmp_msg_0.lon = 0.8735757639149501;
    tmp_msg_0.depth = 225U;
    tmp_msg_0.speed = 0.766479987127436;
    tmp_msg_0.psi = 0.8628865831354797;
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
    msg.setTimeStamp(0.009810796965898039);
    msg.setSource(29786U);
    msg.setSourceEntity(109U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(223U);
    msg.req_id = 14743U;
    msg.status = 170U;
    msg.info.assign("GKPMNTUOJIAAGAGGQMKDTBXBHTJTDZPORUVUFBAEEOMHTOJSPNAPZLHCFUQYYBEZCUTOIZPDNMFKWLFPWVZIDEBTFRWKYQIEFRMAAZGYGGVQLMCXNFT");

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
    msg.setTimeStamp(0.2421065881469836);
    msg.setSource(12303U);
    msg.setSourceEntity(199U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(149U);
    msg.req_id = 51209U;
    msg.status = 117U;
    msg.info.assign("AXPVDHUQMRQGDUJWCXJKEBVACHSCYCAFADWMUBJEIPRQKBHZFKQPXTYWCUDYCIQDTHEPOEXPWJQKGRUBAFBNENJHAACNSNITHCOQPJLUBEMYWUSSQUNGZZZYXPIHNLFMHWILUNZZDREBNFVWMOOGRVGRMOOZSAGVVNVEYIRLFGKLFTOVLJHOARTWFMXZDPXM");

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
    msg.setTimeStamp(0.6261162629053176);
    msg.setSource(22717U);
    msg.setSourceEntity(17U);
    msg.setDestination(60132U);
    msg.setDestinationEntity(212U);
    msg.req_id = 43439U;
    msg.status = 225U;
    msg.info.assign("NKJYHRGRCATSRJWOVLWPKOTWLIRKZLZEBCLMEEDMXYGLICHWTVASRUWVCSNHSNTZIHXOOAUQJYQOFNVUYUYAWQDXLOZNBIJOVZONLTMOFAGYPBBAHKNSQGMWFCFUDXEPPEBWJGJYRGNPFAGBQVKTSQLKSTDCQJTREHSUCQKIMXFUHYLWBZZYIGVUCDBFNDBMGTDZPOAJSXIHMVSRMVAPEIKCNFHKE");

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
    msg.setTimeStamp(0.8113791696882391);
    msg.setSource(27220U);
    msg.setSourceEntity(101U);
    msg.setDestination(57019U);
    msg.setDestinationEntity(226U);
    msg.name.assign("CBJQHPBMVMMKRBALBVAXYRQGQRHWQCNMXKEGPYZDOSYGQNZEPLCSUWPAJFHURILRIOFVHBOMNTMADLWUPHJFZGZWGEDJGNDJMNWLCIDTUUSOSKAPSUJYHRTUIHYJPPMATYCDQELXWXOUVXBROTSKXCFNWZCFNWHCEXKEVVK");
    msg.report_time = 0.7563231362231049;
    msg.medium = 202U;
    msg.lat = 0.5212009549691834;
    msg.lon = 0.6938199702552639;
    msg.depth = 0.3134540705408133;
    msg.alt = 0.5678388023969837;
    msg.sog = 0.33484385472239064;
    msg.cog = 0.0022964934287821315;

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
    msg.setTimeStamp(0.6552641720595466);
    msg.setSource(19376U);
    msg.setSourceEntity(12U);
    msg.setDestination(50536U);
    msg.setDestinationEntity(180U);
    msg.name.assign("PBXVYKLDHFLZUZDWLTGQFUAASTAXCSYMXEYNBVPCJCFICJWTZAVTEQGDIDMVMUXOGYNWKQDZITLZRIGSOBAIBMXPKZRLEOJKAMPPOFMAAHSTOEQYVSHKLEXPJIYCRJUVBYXSAFFDOBWGUCPTAFWLQMRMOHLCSMNTVQLXHQZFWCDRKJR");
    msg.report_time = 0.6508765574806333;
    msg.medium = 81U;
    msg.lat = 0.2045024901081971;
    msg.lon = 0.7804417709988679;
    msg.depth = 0.17031026864307242;
    msg.alt = 0.2720482898191984;
    msg.sog = 0.2007346712164111;
    msg.cog = 0.8126455428293988;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.2757075731585684;
    tmp_msg_0.lat = 0.8342854060059427;
    tmp_msg_0.lon = 0.70765567962591;
    tmp_msg_0.z = 0.8370193533616758;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.travel_z = 0.7013947716180515;
    tmp_msg_0.travel_z_units = 150U;
    tmp_msg_0.delayed = 235U;
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
    msg.setTimeStamp(0.7710132282028834);
    msg.setSource(54869U);
    msg.setSourceEntity(218U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(110U);
    msg.name.assign("JKNMAFOOCZUGXTKWDZXGOIZSLFPTRYNXNNUTSIWHYUGYSTQGLVLWSERXRZDTCLKUSLLEGBVS");
    msg.report_time = 0.1306292781875661;
    msg.medium = 237U;
    msg.lat = 0.32967115584771467;
    msg.lon = 0.9058488167039639;
    msg.depth = 0.7137003685640807;
    msg.alt = 0.18000580333443028;
    msg.sog = 0.6324836592387116;
    msg.cog = 0.04920601429241456;

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
    msg.setTimeStamp(0.3789969869537958);
    msg.setSource(11320U);
    msg.setSourceEntity(95U);
    msg.setDestination(27015U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.5294274200486394);
    msg.setSource(42787U);
    msg.setSourceEntity(134U);
    msg.setDestination(36962U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.3817023300922505);
    msg.setSource(58395U);
    msg.setSourceEntity(171U);
    msg.setDestination(4307U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.03310527672058361);
    msg.setSource(5983U);
    msg.setSourceEntity(43U);
    msg.setDestination(7104U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("SGATWCVDKRAJRONCUKKTP");
    msg.description.assign("ZBEKYNWXJBGSWFYKRDWAQOXSVYSYPAUUULGUTPEGRYJOEBKOBRSEGCPHQAEERBJHWDHNTLCDFOTBATUVLKTJDPMMLFKFBYMRUGAVHEANSBOJQJNGVHMQMHZCSX");
    msg.vnamespace.assign("XQQTXALIAKEJWONUOGBREDFMGLBEWFQYKOZIBHGJRFAYVEIJIDUELUXZVZMCVAMMPBBVDYOTVHWGKWHXXGICLVPFNQ");
    msg.start_man_id.assign("QZQDOCHIIMUEWSZKGAHRFTMJLPYAOGGRYPXNCNFWHOYPRAHXABYYULSKNOUCSDSUWKZEBJMBXFFLHXSVNCQQFMTYKTJCUMEYXSIZCQFMQFLERLITANBJDVJXOXTJU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BQVVVVHWOPGMLIQXXSRKAUDPUFOZKCWUTNEGJWJMODXRQSJSPHH");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2664240851930514;
    tmp_tmp_msg_0_0.lon = 0.9316366996162404;
    tmp_tmp_msg_0_0.z = 0.26071871349191655;
    tmp_tmp_msg_0_0.z_units = 208U;
    tmp_tmp_msg_0_0.speed = 0.9248613500594358;
    tmp_tmp_msg_0_0.speed_units = 44U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.6477603366260087;
    tmp_tmp_tmp_msg_0_0_0.y = 0.11795985778305496;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9426029728702635;
    tmp_tmp_tmp_msg_0_0_0.t = 0.13621944227854066;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.2838834108190683;
    tmp_tmp_msg_0_0.custom.assign("KWZNBUMEULEDZDACLOARBNTBYSZCFSDOFJHQVUIZVOURPWLSSNRWOVXQTJRJXAGNTEFEPWPMLPLPGIJVAIGHIPBNVIEDKJKQHJWOIXYXRPYOHIPAYRQSYCCTMHKYKKNHOHDLBYASXVGHQTNIBKSOGKFUQCEUVLDEXZWXCIAOXGICMDVCSQMGJWTBHGTHJWBPFLWFVZTPSFMONANTXEBRQXCDZWUJUJDGQZRMBGUZLCSFAFYLYKDMMMEYRFVUE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ANVQMNMLXOAZXXHBXUYFPPLFJCFJPGRTZFHWIYOUQUVJNUQADLUHIZDXTYVMKGIABKBFIHCUZBLGHPORVRQYPNEIMHBLHXTBNWEGKWMRSEINDVTYKESDCCZDXKSBUYYSBXTQCODWROFATOBNPECQVSQSKMNOXRRCUPAEAJMPHWWZQJSSOHKVHAPFJLSLDCYFIKGAZYOWLYGJNWIPZGMVCMMCUUGKZKETDZF");
    tmp_msg_1.dest_man.assign("YAYWNUVKIIHDKARFBUAMVYXVBYLFOZDGMBBKJUKJKFYSPXBWNTBOMZVOFQQTGRMDMUONYSPPFMXGCUPGRTPTXAMCUVXIEMEAOEKNYARIIPWPODAJAJOETINBVUHFFSTZLSFHCEJBZKRHLTVDGHHUXCVAJCWBOJEXJEPZGHGBSENHISTWLDXNQWDAVZLWNFCGLMECTOVERSZWJQGKXRKHQICSGLXRUPYYPZHDQUN");
    tmp_msg_1.conditions.assign("PYLKXQFZAMDNYYYDDAIVJCKEEKBBDQDMJAJBGVLKSSZPMSYHDFAJIWGQNPLDRGDYDMOWUYQNXXWLEFOJRPJIRRORTLBKUYBLAMGRETJTVZWGFWPUZ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::MagneticField tmp_msg_2;
    tmp_msg_2.time = 0.5806217738651857;
    tmp_msg_2.x = 0.7857751752508582;
    tmp_msg_2.y = 0.9324881836016248;
    tmp_msg_2.z = 0.7359107025178654;
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
    msg.setTimeStamp(0.9066307295350443);
    msg.setSource(22864U);
    msg.setSourceEntity(63U);
    msg.setDestination(16742U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("TSYTMEZTZEQHQTPOWNHCGXVQVXJKMLLBYFVMKRKTWBHGSOLWNERWCC");
    msg.description.assign("CKZBPHQZQXPNDFEVDBKQIQVPYARHILJTGUKHJMAKETTILARBOVWGDBWUZPLCKADSFXDILTXZOOKMFWVTCVZROHFURUUFJSMGYEKCNLFJGWHVSOAOKXCEYFBTLMOYWCMSPFJGWNUZABWHMRVXMTBZBDQOTUPWWHIGVVNRTZAUYFMYQUPDAANH");
    msg.vnamespace.assign("EYQAVLNVFQPSJFGLEVHTHQYGDUPCLPFHWSUMGHBNQQSJXBTOFSLHPJXOKDGXJUSWLBJRMPUHMSCZJOPGWAERKXBDWNJWVYQTUIDHBAVFKWACRJCXIIQCAUKCBTLYMUCHEDMISSNPZZXFDLMZDRBZMBEGLAKZRGRTFGQBUYIFEIYFYXCOHKOWNHTIROEAONWANZEZDQXTRMTAYOPEANKCDRKVPWIOUOIYXVZSTWLIFVPCTYN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NLFHVXZDLUFOWZKUPAWWVYTQYLWTSAISVLZOGMLHEVPEQRISHVXZDQUBXSAAJARONMEIYJPUVXTYQBMFWCYWDPTBLNPABTZJWCIROYXMJBIZKQRWYTHIIGKCEBSSDNSYYHCXUTHODEHFKNLIGEWUJQFKAQVQULDUPMMXKMKGGGRHCRGHLZOIBEYVCKJSRPWFEPOTBMNM");
    tmp_msg_0.value.assign("VHUOIFGEHWWKMPLMUZXQNYGVGGHHSCWDLIAZRBVVDMVODYOTXZURFDJOTNXKIVBSEHSFCEVMSUUBMLYYGDBWKIXNDVJPXJJRZEKDQBJDWZJTOOCAHWPCSOTICJERU");
    tmp_msg_0.type = 107U;
    tmp_msg_0.access = 235U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MAERYDEPLESTCITQBURGGXKVYMBHMOJOJTLOFQQCBQVDMTFYRFDZDSGEFPBUUPXZCVLZMIKJURKLIOWXALLMNMRXKGDQEHPQHWKKFBASIZMPQOUQYGHWPNNBXLHWCJBCVTUSADVFIVSXTAFPPALTTJFHUWEDGHNNSEALZSWXBHWBGIUOYSAGZZAEOEODKNWQHRYOVQFDJYFWJNXET");
    IMC::SetThrusterActuation tmp_msg_1;
    tmp_msg_1.id = 43U;
    tmp_msg_1.value = 0.20945384641505538;
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
    msg.setTimeStamp(0.9305452770951085);
    msg.setSource(49946U);
    msg.setSourceEntity(167U);
    msg.setDestination(61346U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("EODJASNIIFCXFWHNFWQTWKTPKITJUSASDN");
    msg.description.assign("WANIKPMZKCADAZKWFRROIFXRJAIHJCBSXMEHVGGZTHBKGLJRDJPEUDEAWGLKWQXGJVCABCQSVKEUFFWNMVRSPSOTCFAAXPHOVLTORTXHHZTXOZRZAQUGXSNJJNPOW");
    msg.vnamespace.assign("LTRSIWSQSCVSWOOLMCGRZRGZEFPQXCJHGCRBJREMVTODNPGNUUDXTLFACJQPSMGYKASHFITUDHDBBJJARMXYIMLCSZVCEEWIPXJNLVTUDWOIOQQQXLDFLABEATHUOWFWHEVXSGGHJMRMUZHRYZONMFUWPVRMBJKJZKYCYIYAUSGNYOKPPTIFHJNDGBDZKSCENOHBQYKTAP");
    msg.start_man_id.assign("YEUVXYIFZFDIENOARMVUGYNGWCSBEINQYQILSSDPZAKOICTEBLDPOVVHNJJXDQLWSINTCLZARVURHPVWEBZVMHBSZEVNOYCACEQAAMTKRHUQIAPQWEUYRXMFEUZZKODNCFHGDHOKPPAWWGJCYDUYCFJFKQXLRMXPFGJCFMXSZJRLPUGJNLBRWQSBXVSHGKRUETCFBDOJIOHAMJYGNXTTVXKHIKJGWDQGKQPUTZBPSTTOXD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QEXTKUJHOURWIADCQUHLJZSYTYMLQIMZBUZXMYLIPZARBCPGWSQGIYRUDQCETHKQGZFHIOIKYMFNYCDBYCCSJBDTHQDJEXBMKIOXVKZBWUHRKAMTUTHRRCWTAPOMPEXQONMGDBEFDIYRGZYAROJQVK");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.014143448169543937;
    tmp_tmp_msg_0_0.lon = 0.36729419793660123;
    tmp_tmp_msg_0_0.speed = 0.5037517350950218;
    tmp_tmp_msg_0_0.speed_units = 78U;
    tmp_tmp_msg_0_0.duration = 36951U;
    tmp_tmp_msg_0_0.sys_a = 56587U;
    tmp_tmp_msg_0_0.sys_b = 20524U;
    tmp_tmp_msg_0_0.move_threshold = 0.5942843655859573;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 149U;
    IMC::LblBeacon tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.beacon.assign("GDVHPWXCUJKIRMFAEXSCQJPRYIYHMHMDZCLTLVFGPAEOLNOKSXEETDJBGHFQUMPFEUZVRXVWZCKRWHZYLCSGSDAEYCISCWWTTQVXQJQTNGWBCK");
    tmp_tmp_tmp_msg_0_1_0.lat = 0.045582210679741886;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.297458406454008;
    tmp_tmp_tmp_msg_0_1_0.depth = 0.5890790301999153;
    tmp_tmp_tmp_msg_0_1_0.query_channel = 138U;
    tmp_tmp_tmp_msg_0_1_0.reply_channel = 217U;
    tmp_tmp_tmp_msg_0_1_0.transponder_delay = 238U;
    tmp_tmp_msg_0_1.beacons.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("KDMNQTLHZJPAMKONNQKWPHZBIIHIWSYHXGVWBINSZFYBULRFFZWOWCLNZPUGTGUWBIDROHYRSECKSNZZDDJUPAGERSMOOYVDIVCCG");
    tmp_msg_1.dest_man.assign("ATSPGNUOATNSRJTFTCUMPXKWGMGTHYKQAEXNBEVIFMOUFPUPAJWUMMCDDZJQBRRDXGLSQETNZBAOYYQLKZVFEBYDXQLCKGZCAMRYZMPJLQXCLHOIPZWRPYIKSCDYADVFCKFAFDSGBEQNUHJQVWGLIMNVWZKUBEGRTTNAIPBQEHSNTEKHSIVNFTIZYRUDDVXCEJRS");
    tmp_msg_1.conditions.assign("PNWXBQBCHVOYBTJYPBJAWQYFXVATCMIRHZYWMEONGRHMNPCXMEXIDDRLQUYLMNPUIHBJEJOSKULSGHGGFXAUMKVWZTAEAENAUZQUAGVJVSBNLWEUGMPLNODFRSBVJEKWKZQZIYKFOQAPYMRURWEBRSVHZJFDIIYMQKDBLCCTDTVLOXJOLMDFSGYPEPHZFISNFGKYUTLJZFCOKWSQWGVCKIXZCOIC");
    IMC::GetImageCoords tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.camid = 106U;
    tmp_tmp_msg_1_0.x = 52964U;
    tmp_tmp_msg_1_0.y = 60218U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::HomePosition tmp_msg_2;
    tmp_msg_2.op = 34U;
    tmp_msg_2.lat = 0.2958435072201566;
    tmp_msg_2.lon = 0.9201458617191152;
    tmp_msg_2.height = 0.74384940348719;
    tmp_msg_2.depth = 0.9880142766607705;
    tmp_msg_2.alt = 0.8736009228076642;
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
    msg.setTimeStamp(0.7968022909156388);
    msg.setSource(44347U);
    msg.setSourceEntity(11U);
    msg.setDestination(21054U);
    msg.setDestinationEntity(82U);
    msg.maneuver_id.assign("EVJYRZBAEIRSKRHHSEPNRIXIKJMCDUNTJTTWKXHJOJLBCUGEHVLGBOAZI");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 2208U;
    tmp_msg_0.lat = 0.3054988544801992;
    tmp_msg_0.lon = 0.46444700240615955;
    tmp_msg_0.z = 0.24322270529907564;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.speed = 0.06710814845153246;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.syringe0 = 42U;
    tmp_msg_0.syringe1 = 152U;
    tmp_msg_0.syringe2 = 158U;
    tmp_msg_0.custom.assign("GUHMBYSJUNCFGJLNKLUTIBADZFSWWFPYOHSXBDKLQOYUXCMIXONATGLZIHQPSHXZMALHCZVEDYVRVJWPUQLLVORHBQKWCHKTVJCETCOYUTKY");
    msg.data.set(tmp_msg_0);
    IMC::CameraZoom tmp_msg_1;
    tmp_msg_1.id = 48U;
    tmp_msg_1.zoom = 112U;
    tmp_msg_1.action = 133U;
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
    msg.setTimeStamp(0.7992212835811316);
    msg.setSource(29109U);
    msg.setSourceEntity(113U);
    msg.setDestination(5337U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("KXNPHVYHMVNYTXMJLSVBDUXTLRLWAZFDUHCUAVFGPFUMQVENUSNIREBYJH");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 44191U;
    tmp_msg_0.lat = 0.6767290512290727;
    tmp_msg_0.lon = 0.7132953210572562;
    tmp_msg_0.z = 0.9642100327076005;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.8406099647228689;
    tmp_msg_0.speed_units = 53U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.822812268214915;
    tmp_tmp_msg_0_0.y = 0.30388363189442913;
    tmp_tmp_msg_0_0.z = 0.7837039536047287;
    tmp_tmp_msg_0_0.t = 0.8870342643724358;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BNNTOHLJSCQDFMMDKDSEYSOGJACGJEUENIILGTOKCHIVYXQOZZJFTQOWBJVUPTIMOHGQLEXEEBYIEXRNKKIXZNUFWPURACYWKQFPUNFAIVWYHHFNRPMWQURAEGLCBORHNVQTSMVYDXJKCCXQCPBZFWRDVKWRAKHCWQUHBJGXYWZXMJZGAQAHZBDSGGCTTYPKRZSOBSLYPISAREXVFDIJLDALOGJT");
    msg.data.set(tmp_msg_0);
    IMC::FormationState tmp_msg_1;
    tmp_msg_1.type = 236U;
    tmp_msg_1.op = 215U;
    tmp_msg_1.possimerr = 0.8151341351332503;
    tmp_msg_1.converg = 0.9425207287350149;
    tmp_msg_1.turbulence = 0.1961178162838545;
    tmp_msg_1.possimmon = 74U;
    tmp_msg_1.commmon = 13U;
    tmp_msg_1.convergmon = 120U;
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
    msg.setTimeStamp(0.6937344880581667);
    msg.setSource(4761U);
    msg.setSourceEntity(183U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(103U);
    msg.maneuver_id.assign("BQEQULJDXLVHPJH");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 5596U;
    tmp_msg_0.lat = 0.7296508285013759;
    tmp_msg_0.lon = 0.5674414070853341;
    tmp_msg_0.z = 0.9427787570359834;
    tmp_msg_0.z_units = 60U;
    tmp_msg_0.duration = 26506U;
    tmp_msg_0.speed = 0.1299230318197916;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.type = 237U;
    tmp_msg_0.radius = 0.40503741263137316;
    tmp_msg_0.length = 0.6002358104992384;
    tmp_msg_0.bearing = 0.3393026532238578;
    tmp_msg_0.direction = 180U;
    tmp_msg_0.custom.assign("MPNYSBOAVSVTZINCVCDVUBENQOTDYQKJTASDUKVOQCHPCOUMIPILE");
    msg.data.set(tmp_msg_0);
    IMC::GroupStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.6299178799589951;
    tmp_msg_1.y = 0.20963553754929065;
    tmp_msg_1.z = 0.4765908818476752;
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
    msg.setTimeStamp(0.3164307982532355);
    msg.setSource(35872U);
    msg.setSourceEntity(155U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(223U);
    msg.source_man.assign("ZNTNPFBIMKHIOOCUMHXLWYGZNKIZGEQWIHUCORHHUTXRETQBKJRCDWCJBGPHMHSGREPNRKDBMZGEQMYG");
    msg.dest_man.assign("NWPEKXNQSKZZONQTGGOLZYDNEBXRKSLZENTTRVPEABJTMWPGJGCRSXYAFFF");
    msg.conditions.assign("WVWXBVQQMOXWZSHUDUE");

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
    msg.setTimeStamp(0.2269385388918993);
    msg.setSource(32165U);
    msg.setSourceEntity(25U);
    msg.setDestination(53360U);
    msg.setDestinationEntity(153U);
    msg.source_man.assign("YFMGPOMDLCOGVGGMZMWFVQBMTTTNRBPNIOKBPCDRLRAXYIRNGHDRWNJKZQQOJKXONLNGLATJXHXECEFRARYSROEZXOGZKNICIFLSAAMYSV");
    msg.dest_man.assign("KAMYKWZFPEWLZXXOLATNUFQGSKDBRUVRLHOMEKMYSULPXPCQFTHMQXYZFJNGRLNJSPCHBLROLYJXACXHROEISARFCIHCVBZYYDPFQJWETEKHZFNRCIWYCJGLUZRXMVGMFGPXMIYCSWITZFNSMCZNVIEDBCAHJFBDZPVYUKMVAIMBGEDEOTPLKQGQQTJGOSDTWRXOAYJWBEPDABWXQDVPDJSBUQVHVUNSIWKUENIBHGLKQVUDONTZNTJ");
    msg.conditions.assign("IETVOPUXPLDCIPKHSAGZRSXYAHMLTVUSURPJYQJCKNPROYHIF");

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
    msg.setTimeStamp(0.2441009237720121);
    msg.setSource(29403U);
    msg.setSourceEntity(66U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(157U);
    msg.source_man.assign("SJNJZFAQSAXZITIAUYDBEXCTVTKKQTFEVGMQHXLWLGBTYEYTOZLUONMLGDLWWUZMRPGEXQVDPSOWINSVCBNSYJRRZZPJDUQIXPEAUGOYZRWBFCMDCQFPOJDKYTEOISHVHSCYXRNHJBIRAIXMYDOCAWVXCLWQZHSSZKTLRBMKAFJZFREXXETWKBBULVWCASCYUVIUPQEEGMYOK");
    msg.dest_man.assign("RMYLAUSWFECEWLVTASXCDXHGBKCMKSBZXXAPNPTRIRDIRELOYLVNOEAXNSAVKDUXMPIGPOISYUBUFJYGERQGFDIRODJJISDBNPQZUMFMAAVJNJSJSCVMKMGBNUTKTCEPTKGHDRLVCY");
    msg.conditions.assign("HNCPMMHEUPJOKHEWDVNIERRMQZTLBPTQUDKNCFUKNMUJCITBXNFWKTAMJUBHKBDQYVFHDRCGJYSNEZKCAWVPBREIFMLAPPLOGDGRAMDADOWGQFUZYFCTTIPYYSAZGWVURSBLDXHJHLMFOWFOXTLOSGWHRXKTVPWSNGXBJXDTJZOQAJNXZNVZOVOEYQFIKCIYAOSZRSCLVLYBLQRQPUJEKWLYNZEAZIPFGXCMWHI");

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
    msg.setTimeStamp(0.1570703681849025);
    msg.setSource(44618U);
    msg.setSourceEntity(13U);
    msg.setDestination(7777U);
    msg.setDestinationEntity(140U);
    msg.command = 122U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OGAUNASTREGXMMDILBKKYDYIUWKJEEYOCDXOPWKQTRJRCRGIVYJZRAUYITVCNMGDLCVSHPJNNIPTOWBFMZZQZLVWAYBISCLPWTEMETFDOIUSECNMVTTX");
    tmp_msg_0.description.assign("OGLOQZPGABGFNYHEOLJDNJVCDLQHXHZNJDFUHWTXUWZVUITTXDUQCRMYOSZYAPYPURWVLEGSLZIQWJEYEIYFKLAKVRFSCZNQOXBXSHKJKPFINTHBMWTKWMSMFXKVXJBEUHRNSAWTKTZOFLUAGGIVRKBBAFZYVHVTUUMCVDCQCJQIRRMSM");
    tmp_msg_0.vnamespace.assign("NLJYYCCBDRETCACTXURQWDHBPWKJVIAGVQRTZBPWGNIKHAIOKWYIMWOHUOCKHZTVZUFBSDKUOCKVDZQJEBQPSSXXKYKLRWENRAMSDWTLOFQUQG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WEZLNVVEHXQICDRNJMXCOEKBLMGNJIWNNDKBFYLILXSRJGSEGMJOKMMJWVITTOOCNBSZHSBAYEQPWRTCMVUSQPESJWHGSDGYFFFAFRBPPIUPFPRIDVMHMRQPRZCTYZDAXHWHCLUBVACJJIFKWGSLKFOUKZCNZXUVYUWKNLUTA");
    tmp_tmp_msg_0_0.value.assign("HXIOWCPOKWPTZYZUDKKJZCIPFYLNJCMCJBNFPWHXNQJGRZMLGRWNTCNNXJDYANHWVYSVDJXAKBMGZXGKIIS");
    tmp_tmp_msg_0_0.type = 67U;
    tmp_tmp_msg_0_0.access = 28U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TKRVDVIMDIZXAFHPGCLLBWHGVIHXEMSBDFGHFTRFQHOBUJJWHIATESDEQEXLVTXLCNLLAXKYYSEXTVDJRIYJQBHDMSPLPUXTJBASYUMMFKQGBRGTILGDXZJBZFOUODNSUNOTCEOEUDWHAMMSNNYPYFNRYPCQLTQUFJPZENHGCWVPORKPKKPCAIOGLIWTWPWZCZQJYMVYJKKWZQRHZNSJAEOIRCOQXUOFBAVKRBXSVWZYEZCIFKUQSGGMNANU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MAUCGGJYZPYPXZOYKNULQMWGZULHDLNSPYFUAMOCVXOSUEVMAPCKJFKNKSIKICINTQJRXOIJBGVWRAWRWWBFDOFOPBNHLGILDTNKOOVJTIXHSXDUHNFZCARXIAQCSNGUIBZYVSQVSVQFPIENRHBJBZFQXHJAJLEEECRUCADWNRXFYYYKWLVVQBPWEQEGTPWMTXBAZSWLXMKHZTPODCOHUDDEQ");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0568453007848555;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9609393273726122;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.30298976132243893;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 120U;
    tmp_tmp_tmp_msg_0_1_0.duration = 23022U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 6616U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 48267U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.7022175603778827;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 96U;
    tmp_tmp_tmp_msg_0_1_1.flags = 54U;
    tmp_tmp_tmp_msg_0_1_1.description.assign("WWPZCKWCFWSDGEXYKPNSPEHGDRSVWUMNFRSTALPYHFKANDWTAKSGELJVUCBLXHLIMOPNNWDXRPCXDGTYVRIUBFFCGRYZTGYSOELQQNYBCPZILXOJWKJTUXEKJNXJNIFBHSMNJBFVOMZQUBDMAOOTIAVGIHUAXOKRCEZCLZUIZRMLPMXBQDJVMYHVA");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Rows tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.timeout = 22102U;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.9261589073772164;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.31437204685376363;
    tmp_tmp_tmp_msg_0_1_2.z = 0.08515059781433754;
    tmp_tmp_tmp_msg_0_1_2.z_units = 163U;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.7423098785226573;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 109U;
    tmp_tmp_tmp_msg_0_1_2.bearing = 0.023950402121131864;
    tmp_tmp_tmp_msg_0_1_2.cross_angle = 0.3999090668797026;
    tmp_tmp_tmp_msg_0_1_2.width = 0.34547805586584235;
    tmp_tmp_tmp_msg_0_1_2.length = 0.126019939921711;
    tmp_tmp_tmp_msg_0_1_2.hstep = 0.1430354689929475;
    tmp_tmp_tmp_msg_0_1_2.coff = 176U;
    tmp_tmp_tmp_msg_0_1_2.alternation = 72U;
    tmp_tmp_tmp_msg_0_1_2.flags = 4U;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("TXAMGXBIVAKWBUDTRMGCWPUPYGTZYBHXFRMUAEPIHOWJGPNGLNCRPUNKLMSAIVBAJYSQJBMNWLCCFQWONCQPFDHVGUYPUZTOFGCNJRKTRSJFDKXERRDLKXV");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("UVCORSLWOJKZCCUJBDLOLKOTKXUXOBWMFVAVVDHIIPOQNEBNOKTVGAKEUHZDJLXTIBZXNGLKUGYBZEUFMHMAGWWUFPVQMNEPCFMWKQTSREGLTMQYTRFNCHPDSJRAGPQZEYIMZDEARKVSDYZMPABARFHGITDCXFDSHYPYBYHJPLAMELNIONRMZLJXSIWQSSCBGHSRXPIFKRDKIXJDWWUNIJJCOTUXHYPEQUNJZRGV");
    tmp_tmp_msg_0_2.dest_man.assign("ILFDPLNPBOQUZRDMYKGBIXPJVKMCYFQXSSQFUWRHNZZAWZONLLSKVOQMVRDAQGNLXFIABOYBVESEERHSIUANRXBEBXCOCGVMIULFGFAKZI");
    tmp_tmp_msg_0_2.conditions.assign("GKTWXCHHAOLDQGDNOCVWAYHCSMYROGKVVHNEYDMWZFULKLPCVJWXTSGBLRMJTFCMTBMVPWRITBBPAVAIWDSEKEECLUJCFMYJAJXDGEJIGQLDOSN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::StationKeepingExtended tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.6491484120421219;
    tmp_tmp_msg_0_3.lon = 0.15054861274909292;
    tmp_tmp_msg_0_3.z = 0.488711993350916;
    tmp_tmp_msg_0_3.z_units = 237U;
    tmp_tmp_msg_0_3.radius = 0.46431103352468517;
    tmp_tmp_msg_0_3.duration = 21927U;
    tmp_tmp_msg_0_3.speed = 0.30700971046897574;
    tmp_tmp_msg_0_3.speed_units = 98U;
    tmp_tmp_msg_0_3.popup_period = 48737U;
    tmp_tmp_msg_0_3.popup_duration = 31856U;
    tmp_tmp_msg_0_3.flags = 123U;
    tmp_tmp_msg_0_3.custom.assign("JEPMRPRTLDLMEPRQWIGKYYVQHCUEXBKZUZYGRURNANMESBVCBEZADXEGIHGLGZRIAUWMKDIWCYHGCRGYBDUOKHMYJPSUZPKTZJALPSJCQHXTMNOBWAVWD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.3117995246939095);
    msg.setSource(33728U);
    msg.setSourceEntity(171U);
    msg.setDestination(21215U);
    msg.setDestinationEntity(141U);
    msg.command = 185U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LKQDKJOTPYHSJBOOCJPSJSZEKHJXFJDWMLKMRRYG");
    tmp_msg_0.description.assign("CCTMIWOKNVLWPJFDANXAQRXMCSAEGYDIAEHBZQIPTXHEJDYDSINMWFKHBTYZUBTLCVTXDCGAIFUSMQEJLRRRHNZTOHEKIFXNPSOXWIRVZQRBRJKMQXLBFVPKOSOHAKJTZAWXOZPDVAWVYBZBPSSLHRYVNPJUJNLMYR");
    tmp_msg_0.vnamespace.assign("BPLMAJZFBYYRNQIEFUHDEQYHQYLPNKREWUOGTOOJTIFNXEZPGHBYNYEUJKCAGWBWSCOJMLXHCGMVUXQHLFWDUQONKSGPJTSXTPMRSQ");
    tmp_msg_0.start_man_id.assign("DODRNHNQDIJQSOLABJDYVAYUHBEBTGASCNZRHQZHLYKGPFJESMEBVRQIFHFNSCYIVTXYFPXPMUYMEURKKWWBNDCJWXMGPCLYAOKCHUUWQVTTNSQIXRGFVZWOGEKWWMLDPBZENZXULVYBBKADRULPOXOPYZLRADNDECSUCGEFNGLODFHWTACXCALJGQIHAESZMMZ");
    IMC::LedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FEENUEXOIVQKCWUFMDSVWUMRBBHYUFR");
    tmp_tmp_msg_0_0.value = 198U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9032351406790183);
    msg.setSource(49848U);
    msg.setSourceEntity(123U);
    msg.setDestination(35180U);
    msg.setDestinationEntity(227U);
    msg.command = 125U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VJPHMQCKOBFFFTUOJQNEUBXWRXZASRJOGAYPWEPCUTVGKFSEJXITGDUXYVKELJZTMNVCXNWFPZBOWWMOYBRSOKDZWQIVQDRVZMEXKZANGYTASHLMTDLSNGXLHIIZCWIDSDQCRIHH");
    tmp_msg_0.description.assign("WYFZUDTCJKWOASPISAVAVQIZLXZYVVWBEJCZLSGSTXREEYBFNCONDULOVNKJTYYXPIQUVRHWCQZOQJHSCXBMXFEXCBTGYHEZYTFNSWPBTIDVMNGXCJNSBXIJARUFUVKRCUNCBQHCKPAZZRNLHLLLSDGSGTOFVRDIKRHGXWVATEAHZKIOAMDPKQKBJPODWQEHEDOBYHUIODYGWTGKELNFMRKFARQPMMZIAXUFJQP");
    tmp_msg_0.vnamespace.assign("YSCJZESTUFOKFALRFRTZCZIWMKAYJBCNMFFSMCZWHPEBRWYVYMQMJQZIMXJHEBYGGXHUVLSSELQKWBZYDVYPRZUMLRUVQJHSWLNPSIKKENKXPLTDVGVBKZQEJSIEAXRIIUOUUVWTDGOGCIGVXQDPAATGOFPDKNBWVFK");
    tmp_msg_0.start_man_id.assign("UKDTHGXYECLULRMVWMDLHHBEBZRHYBOYJWCKWJUEHENAUMNHZOLVDFGPOBAZWFXQBUZJMSOQRICQHFQZPDIICKRYUDRXKHFAGCZNZJEGNUSAJVZABWSXRGUYKBSZLDVANSFISIJOZYESNVPAQTSQOPCWMJPATVXORXUYQTOMEPRQLHMSGGPGXVSKIGDFIEBLYIBFDWPECFDXVCWVKLNPJALVYBTT");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SADKTMVZQDVYMWUQZQKJFLRCENWJMGAUNPWOKXQHHAQWBMGUPHXNRCLEEDXKTBZSHOUPRHDWTXEYGBKRPDVGTICJLJSBQLNVJIYEZTYRBVGKRZADFJWIC");
    tmp_tmp_msg_0_0.dest_man.assign("KBOAJQDBSCMZFQNXDGJSUTRLWVYZFUHIUMDQCNOVGFQCMONYSRYTKUFXSISWIHCPEEPPMKNCBBSRFXPSLBIYIQFARJFOAURVRJFBBVWMP");
    tmp_tmp_msg_0_0.conditions.assign("DHQROQVIPDGNJDWSKTZXQLHFVEUAXFNICLUYOTWJFVVYDZXNQODHKCCBXCLVJIAPSMBNBAJGELDKMSJYLBQNMYPNWAEKUEHMHIUFXRHRTFHMPGNGUJRDTDBRXFCMNRYYATPOZOBLOTALFQCHZJMEHTYSLWBNZZVPOGUEFRKYDAGRPIVMTEIQEXIASZGUHWCWQCKO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TCPStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 47308U;
    tmp_tmp_msg_0_1.status = 169U;
    tmp_tmp_msg_0_1.info.assign("VOCMNTVDBWFDPZMOQEXVLZDS");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TrexObservation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeline.assign("UJOGXLTGSYPCREJGXUPNEAMPMHWUOISHLJFDQ");
    tmp_tmp_msg_0_2.predicate.assign("PUEBXTBFYZFJTLHANMHNQXRGHPELSZRKNZDMBSTONDVSDRKYAHHKPVFCLDRTTWICRJEWFFJMCKLTZSBCXAQBCEPJVWNASNNDOXXXIIMRHBSAFVUUZ");
    tmp_tmp_msg_0_2.attributes.assign("ARDSPRZVYCRGQRIYYBYJJGXARVAHKLNYJVDSBOQFSXCYUXMIBSAKKNMWPZVWNTXHITMCZSHTOQPNODBOBJMSQIXFGUZIQTVMJAGPEKBOVZWUCUDTNEBCMVWEBVGTIUKGNLWIXHCPHDFPZHFY");
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
    msg.setTimeStamp(0.9275140375145741);
    msg.setSource(63181U);
    msg.setSourceEntity(31U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(221U);
    msg.state = 176U;
    msg.plan_id.assign("GWWBTJRDEZYFZXWTEKKWSGKOEEJQMUMMUCDIZJIJIVLGUEJMFBJHYSOJTVU");
    msg.comm_level = 42U;

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
    msg.setTimeStamp(0.29633833637953544);
    msg.setSource(15820U);
    msg.setSourceEntity(153U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(49U);
    msg.state = 148U;
    msg.plan_id.assign("QHDGCFTSKGZWTATTARBOMESVXRRAVZEHUOCRVCNTYNGLAUAQIOZNUMCJJAUTXCDXLYZDQEZSSVPEKANFJUDPZPHEWKWNLMIWZINOIXFDXUFQYFJSSLQVWZGMAEHBFBDYNEGQOFJKBRJSXRFQJWGEQXMQVXNIIDCLPDSKDXGEWIJVKYBGYWHD");
    msg.comm_level = 28U;

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
    msg.setTimeStamp(0.7078374322489845);
    msg.setSource(47897U);
    msg.setSourceEntity(181U);
    msg.setDestination(28626U);
    msg.setDestinationEntity(62U);
    msg.state = 45U;
    msg.plan_id.assign("MYSRZPJMESA");
    msg.comm_level = 217U;

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
    msg.setTimeStamp(0.04455523618689994);
    msg.setSource(64884U);
    msg.setSourceEntity(119U);
    msg.setDestination(33568U);
    msg.setDestinationEntity(62U);
    msg.type = 65U;
    msg.op = 115U;
    msg.request_id = 64525U;
    msg.plan_id.assign("TZOMYKOKNGCEDUIUYQYMZULCXNISBKRWPSRGHITNLVLXYW");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 3955U;
    tmp_msg_0.priority = -13;
    tmp_msg_0.x = -17118;
    tmp_msg_0.y = -30138;
    tmp_msg_0.z = -28597;
    tmp_msg_0.t = 32492;
    IMC::AisInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.msg_type.assign("PPSDZMVOHWMUKWEEPFIVQCZZGUIAGGLMRQHIKLICUEVIKFMQWBDOQTKQXUTWKON");
    tmp_tmp_msg_0_0.sensor_class.assign("GTCXWSEHHEQOABMZNZFWMUFDGKNCPYAFZOXFMCCPLKFZXLERSBPCYISTRETVILQGLUVHRGAZJZWZRUOBQOQJYOUIRADWEKDCJENPOZMASIZJFSAKVPUKHUFCRBYXURVQOHGNFQS");
    tmp_tmp_msg_0_0.mmsi.assign("ONBIHBNOHJZJBDDBVWXBHZZGGNHLVCULJMHJLIGKDFPEUEUZLIQWVMUSTSLFFYYLQQZSGSWCQWCZJMEGWKXUKZDAUWOLIRBEIQSWPCFQMMKKTITILWFBRCOJXKXAKUAABHENARTPQVICHDQQNXFHJSGYOVHAYRXYTEMYPADDGDYFOVFEXVYMVUJCTAKGLNVMC");
    tmp_tmp_msg_0_0.callsign.assign("ZCAVSJWHENTTZZWMLLYHMVLUZBBBCTVYHVBGWYVLYOAQKWRORUAQRZVWJUTPWLHJOFWYYSEGDREFXGLUMOIAQVGXREENSMSVPMPXCQNPASTAJCIJDHTENUGIPVGQITBIEFLCPRCRFOBFYZJSOEKMIVHLZMWDDNAFLBBKIACKXLKCWDTKUPDQYKJCIUFMHKC");
    tmp_tmp_msg_0_0.name.assign("ECPLZTIZKXBWNZYVWACEVUSFQKNTGUSRKOAGWHNNMIAWTZDHTYIQYGCCYVMOJYKKOTUVWLKBPHRWUEGVTFOHPRIDJIIEYMPFCJDNCVIWAQFPXXISMNJFSEMZFSPGGAHBAHWSIOXRUYVGZTOBELAKKRORYQJLXCQMBNEYSBTUJCCUIBRESMRZLZCGDFANQHWNBUWLLQBOQJJDZNRXLQXBPMEP");
    tmp_tmp_msg_0_0.nav_status = 248U;
    tmp_tmp_msg_0_0.type_and_cargo = 128U;
    tmp_tmp_msg_0_0.lat = 0.02539715645266938;
    tmp_tmp_msg_0_0.lon = 0.9579327034600562;
    tmp_tmp_msg_0_0.course = 0.5920749337833998;
    tmp_tmp_msg_0_0.speed = 0.9714806009376861;
    tmp_tmp_msg_0_0.dist = 0.06013127574539745;
    tmp_tmp_msg_0_0.a = 0.046506960795329344;
    tmp_tmp_msg_0_0.b = 0.4505025659810996;
    tmp_tmp_msg_0_0.c = 0.1736046300958981;
    tmp_tmp_msg_0_0.d = 0.21297430251065952;
    tmp_tmp_msg_0_0.draught = 0.8753328356033282;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MIQOMGVZPOHGSSFVLWMTPSSJIVEDGXBAKSFTWSCYYMYPLXWEKROGEEQBALQARGAIENJYOACCUJJDOQQGAYICONKAHHGHZUZXPUGFEKMMTTVTNZFXLURHJCRKZHWMKUVRLJRLYIHDGDFYVFWIXDBVKOVNAWBZCLWNKTJCJV");

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
    msg.setTimeStamp(0.5791592537446187);
    msg.setSource(32429U);
    msg.setSourceEntity(196U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(234U);
    msg.type = 172U;
    msg.op = 252U;
    msg.request_id = 2636U;
    msg.plan_id.assign("QTYUAAJJAUYXLTNEJAWICZAONEQJICWYXQMFGLNVLC");
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8057125552074543;
    tmp_msg_0.lon = 0.34879477697926387;
    tmp_msg_0.alt = 0.8622124263606493;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZAPOZBKAQMBCJWCHMECLHWCMQOOGAGZYUWTYH");

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
    msg.setTimeStamp(0.6354479332657034);
    msg.setSource(35456U);
    msg.setSourceEntity(16U);
    msg.setDestination(23680U);
    msg.setDestinationEntity(64U);
    msg.type = 208U;
    msg.op = 173U;
    msg.request_id = 11192U;
    msg.plan_id.assign("RQHGYXNBIKQCPWLACJGUVBIOTOPKUITRVYJJBFJWMYEQKFNPAFSXBUYWZZXPJYAFLTQPXUUKQBCNYJOCSFERBDHVJPDVYD");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 35U;
    tmp_msg_0.x = 0.6645856018542953;
    tmp_msg_0.y = 0.9993464026085783;
    tmp_msg_0.z = 0.47866912122216565;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SZUAUGGNMJTKKLLJJJHPKZWFEUVPEYNURCZCKYRO");

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
    msg.setTimeStamp(0.8730331623843904);
    msg.setSource(27925U);
    msg.setSourceEntity(45U);
    msg.setDestination(33182U);
    msg.setDestinationEntity(241U);
    msg.plan_count = 60999U;
    msg.plan_size = 3769018518U;
    msg.change_time = 0.043734309555765405;
    msg.change_sid = 11336U;
    msg.change_sname.assign("YNFXXHEVTGGFOJFYWZGXAHEVDJQZBJVNFOFGVIMLRXNSYIOOKSSAUQELVRDHVZYKBMZJHMPEWCENRDKDMMWCVAMBZYICHWIOCRIIYLCAVJZFCBDNUTTLXLGIHUMWUGLJQWCULPJWSVIPFQBOQPRXJX");
    const signed char tmp_msg_0[] = {6, 7, -127, 70, -116, 55, 22, 39, -32, 53, 33, -40, -55, -35, 8, -6, 88, 61, -49, -125, -43, 78, 74, 11, -90, -12, -50, 53, -91, -33, -85, -18, -91, -71, 62, 19, 100, -11, 64, -3, -103, 118, -124, 24, 112, 64, 63, 68, -21, 71, -60, -101, -56, -98, 0, 84, 104, -16, 2, 19, -1, -110, 24, 94, -88, 101, 57, 67, 102, -22, 93, -46, 75, -27, -2, -106, -51, -7, -101, 86, 47, 28, -51, 49, 67, -81, 73, 76, -48, 10, -118, 101, -12, -65, -15, -113, -49, 17, -71, -90, 66, 51, -108, -57, -17, -57, -126, -9, -18, -121, -3};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KMEJKLZLYCXRZLFIAZWKMDHCLQRMUECSWOQSOKEUBCMVZJJJGLUTBZQUODVNTWBWVDUCKZAFMRQRWXOSVXRYHRFSHVIKHBCXSYIYHEPBWCS");
    tmp_msg_1.plan_size = 42441U;
    tmp_msg_1.change_time = 0.5511609570320434;
    tmp_msg_1.change_sid = 20035U;
    tmp_msg_1.change_sname.assign("SKKKEDGECZFYQZNJFWBLVBYHFTBSBPUEONJTYLGRATAEEOUWRCRCLDMKGARJRMPFHTOYPKRTXLCYHLMPTBSAVCSDMJWXZSZMYGREQVABIKMLQQRYSZNZOPQFSMJXXTGJVAMCHKJWMFCXGDMWNRQGHHUCFVQZHNFVEVLXZNIOKPQIEPGZUPBIEBDQOZJIWWURAWOWVWJNAIYDFGNIOHXIFU");
    const signed char tmp_tmp_msg_1_0[] = {37, -83, -28, 31, -108, 40, -78, 53, -76, 61, 126, 4, -52, 14, -9, 4, -3, 75, 46, 75, -128, -96, -26, -80, -116, -47, -32, 21, 107, -91, 49, 111, 46, 100, -85, 44, -18, 70, 44, -98, -98, 54, 31, 120, -98, -22, 65, -21, -29, -8, -60, 117, -40, 62, 2, 109, -24, 110, 26, -55, 23, -127, 3, -28, 100, -8, -62, -52, -49, -41, 38, -60, 69, 97, 90, -37, 109, 22, 106, 60, -72, -55, 65, -53, 104, 94, 107, 18, 100, -21, -50, -79, -39, -123, -28, 113, -115, -48, -80, -116, 104, -119, 34, 91, -87, 4, -26};
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
    msg.setTimeStamp(0.6445614404395751);
    msg.setSource(37542U);
    msg.setSourceEntity(17U);
    msg.setDestination(42420U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 29196U;
    msg.plan_size = 2351703065U;
    msg.change_time = 0.13390018955153427;
    msg.change_sid = 45460U;
    msg.change_sname.assign("UQNFZWDUPYSHADSEMWWTBKZLSBUCQHEPPEZYRAOMIJCDKFONNYUEDIIERXQVOVOXAHJDZWGPGSKTPTEAYMVOBWIGMSTGPGGFHKXWCKQCEHTKSOFEIFINRPCBIYSFMLXIKBZJXVQRFORAL");
    const signed char tmp_msg_0[] = {70, 108, 95, -95, -120, 82, -30, -102, -106, -92, -17, 66, -104, 90, -18, -105, -47, -103, -94, -81, 5, -97, 104, -104, 24, 49, -82, -6, 42, -3, 60, 86, 29, 41, -24, 37, 101, 120, -121, 85, 34, -106, 95, -80, 64, 50, 20, 53, -114, 88, 10, 124, 24, 55, -21, 92, -20, 90, -87, -3, 115, -115, 47, -56, -41, 120, 24, -63, 27, -80, 10, 22, -115, 58, -39, 34, 126, -64, 14, 103, 107, 1, -97, -124, -60, 8, 41, 36, -112, 110, -72, 9, -19, -95, -69, -79, -58, -1, -23, -6, -112, -18, 105, -126, 30, -101, 110, -32, 9, 48, -3, 74, 113, -33, -29, 120, -83, -44, 17, -67, -86, -2, -44, 49, -117, -22, 118, -42, 23, 109, -116, 9, 81, -50, 79, -8, -3, -66, 51, -103, -88, -68, 100, 19, 11, -68, 24, 98, -72, -53, 70, -3, 32, -89, -90, 58, -102, -84, 125, 71, 95, 60, 10, 126, 110, -54, -98, -81, -37, 104, -72, -37, -88, 92, 33, 18, -99, 108, 106, -106, -36, 76, -79, 33, -81, -107, 92, -97, 43, 89, 77, 65, -113, -101};
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
    msg.setTimeStamp(0.36511512064212515);
    msg.setSource(49396U);
    msg.setSourceEntity(25U);
    msg.setDestination(7192U);
    msg.setDestinationEntity(28U);
    msg.plan_count = 61038U;
    msg.plan_size = 809210773U;
    msg.change_time = 0.6427461577846537;
    msg.change_sid = 55954U;
    msg.change_sname.assign("XEQEXASKQMYCYXLNUPZDPVTVGFNRKZTAYJSBEPGJJKZBAJYONSFUVKMTJACHPIYWOFHKKGYUDWOQXERUNQXGNGEVJBLUONJYURUQRVWDKITIQATQYKZMMPRXBWPCONOHRWFCBBLXHOKZQRIDSCFDAPPSFDEODZUISVNHTYUEXJBSZTHILRGZAIHEXCDHAGXOALZLIFMYBCUMVGWFMLWGLLGWVSFRTINSJMHOWQCVKTBV");
    const signed char tmp_msg_0[] = {-55, -107, -65, -25, 113, 119, -85, 68, 88, 30, 74, -86, -121, -42, 4, 57, 85, -14, -33, -89, 124, -35, -8, 20, 50, -65, -71, 60, -118, 116, 28, -3, 73, 81, -20, -77, 121, 74, -37, -99, 13, 42, 107, 52, -79, -81, -108, 29, 79, 77, 100, -17, -68, 68, 21, -35, -14, 24, 109, 97, -74, -98, 9, 123, -23, -88, 52, -60, -21, -111, -78, -19, -32, 32, 67, 22, 112, -65};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EKENQRJPZIRAKJWJFTNOUVRYYXBHZSNFOMWWHRMCNNDLJTGXOHCCEGXQVOYOPAXCEMAFIGFLNOTTLVSOXIWCJWJMZRMHUEDKAIRZMSVPBCVBBU");
    tmp_msg_1.plan_size = 46350U;
    tmp_msg_1.change_time = 0.5321892454110705;
    tmp_msg_1.change_sid = 5286U;
    tmp_msg_1.change_sname.assign("NCDLAXTAKBIGGGHCFMI");
    const signed char tmp_tmp_msg_1_0[] = {32, -45, -107, -97, -61, -101, -6, 41, -10, -55, 68, 86, 0, 47, 105, -112, -76, 65, 111, 107, -76, 33, 3, 18, -110, -82, 48, -94, -59, 121, 52, 69};
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
    msg.setTimeStamp(0.5936261584856091);
    msg.setSource(13936U);
    msg.setSourceEntity(93U);
    msg.setDestination(51879U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("EDQBMGJSIRFIYQRMVFCVGMCZLHZENMASFKGITYXBVQWAHHOUKROQEZXTCOAESTYZLDYSZSPGRPVBTLDKKHWCSZUPCVJLXUFWT");
    msg.plan_size = 48475U;
    msg.change_time = 0.7370932993213284;
    msg.change_sid = 8790U;
    msg.change_sname.assign("OVRRNFAZKLOVQFDYOZNEFAT");
    const signed char tmp_msg_0[] = {-31, -75, 30, -60, 115, -105, 123, 48, -39, -95, -95, -107, 15, 62, 100, 10, -117, 108, -54, -108, 81, 18, -33, 61, 112, 53, 26, 71, -58, 67, 85, -71, -33, -33, -17, 29, -13, 112, -126, -33, -124, -98, 26, 63, 101, 105, 94, -59, 21, 64, 55, -89, -102, -69, -14, -61, -116, 22, 113, -124, -122, -116, -72, -2, -4, 116, -105, 98, 121, -66, -94, -12, 95, -75, -106, 70, 79, -28, -127, 87, -6, 52, 39, 104, -65, -83, 62, 125, 33, 79, -66, 52, 45, -124, 1, -67, 80, 100, 100, -43, -120, -81, 16, -128, 114, -91, 84, 80, -36, 67};
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
    msg.setTimeStamp(0.29134895156430973);
    msg.setSource(8670U);
    msg.setSourceEntity(239U);
    msg.setDestination(615U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("HLQAOJIULVPDFIBOXMGCQSLDZSFQPXOCWOHEZKBOXXWTZNMFYRNVJYTSQPEBJURHIRCAFPXGNIGAHRAPRIQMKEZCQFKITQDLDZGJB");
    msg.plan_size = 25783U;
    msg.change_time = 0.009257597995068756;
    msg.change_sid = 33056U;
    msg.change_sname.assign("IFUDKSCHNAFRNLNXMJRSIERBPGUYYYOOCEFHTSOSUMQBQITKUXEBYVGIUESMLGJHUOPWQFZGIVLRMCTEROXAWRSQKKNBYTBELETVMCFHVDQOZVOLCDQIFGPNGVXQHCGDXPIZQCZKMLLKBYVAPOPCYFGWUTAPNKRENZJBPZDIXFUQZNFVATEMAMGSHNTGVWXRZAPJYRJXHSOWDDSCUDWAJJKYHJJ");
    const signed char tmp_msg_0[] = {75, 124, -4, 108, -24, 89, -5, 3, 57, 51, -57, 13, 121, 7, 36, 74, -108, -96, 85, 24, 126, -23, 120, -67, -37, 112, 83, 104, -81, -2, -103, -97, 45, -2, -101, -85, 62, 55, 102, -120, 38, 120, -70, -63, 88, -44, -36, 10, 51, -25, -115, 101, 105, 84, 20, -3, 2, -76, 104, -69, 112, 101, -27, 113, 111, 52, 63, -74, -14, -81, 77, 38, 20, 32, 43, -8, 126, 71, -85, -85, 100, -77, 77, 124, 86, 15, -112, -120, -10, 5, -45, -23, 77, 116, 89, -4, -31, -34, 26, 63, -5, 74, 72, 37, -94, -75, 74, -115, 72, 59, 48, -40, 107, -3, -101, 66, 114, -30, -5, -121, -35, -18, 40, -107, -14, 98, -81, 71, -1, 114, 71, 86, 74, -124, -62, 72, 6, -81, 30, -20, 33, -1, 75, 49, -89, 105, 44, -77, 78, -82, 26, 90, 52, -4, 45, 11, 53, 47, 85, -13, -83, 97, -10, -73, 23, 42, 0, 45, -3, 121, 45, 13, 79, -4, 37, 104, 49, 75, 98, -35, -87, 79, 110, 69, -54, -88, -16, -51, 36, 10, 120, -117, -100, 80, -72, 50, -64, 13, -18, -45, 4, -77, -8, -9, 94, -124, -125, -40, -51, -74, 104, 41, -38, -3, 97, -14, -75, -47, -68, 53, 19};
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
    msg.setTimeStamp(0.8356515831417789);
    msg.setSource(25090U);
    msg.setSourceEntity(103U);
    msg.setDestination(19488U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("COXVKDXIQKTRFOUVAQRRVMDRSEHBBHOSWSBGLMCZCRIMIPFXLMCPHZIWNXWJXONDOQWTEKOQNGTNZVNEDQJAWEVLCF");
    msg.plan_size = 19417U;
    msg.change_time = 0.2780446193244993;
    msg.change_sid = 15216U;
    msg.change_sname.assign("NZYFOKLHKSUXEWQTEENQGZQODCRNVYJJUADDPCSAHIMWTJMWZANSZHPMYRQEWCBHQABAVMSTFIAHKSEFXWGGBEMZTSRATJLCWLJRBRUDOQIKCKB");
    const signed char tmp_msg_0[] = {-32, -74, 46, -21, -95, 59, -127, 36, -70, 125, -95, 31, -89, 124, -95, 55, -70, -22, -65, -69, 80, 63, -50, -29, 45, 12, -41, 23, -68, 14, -69, -76, -114, -43, 95, 21, 102, 95, -104, -35, 17, 79, 51, 72, -14, -96, 21, 37, -126, 105, 85, 100, -2, 115, -12, 77, 121, -59, -126, -9, 37, 96, -126, 85, 125, 31, -128, 37, 108, -76, 73, -17, 14, -37, 122, -23, -31, -106, 7, 31, -17, 78, 30, 66, -34, -62, -49, 119, -29, -86, 119, 12, -90, -57, -65, -23, 12, -88, -15, -46, -38, 43, 87, -60, -83, -88, 47, 2, -15, -81, 47, 27, -27, -40, 73, -53, 48, -54, 10, 46, -76, 31, 117, -2, -126, -19, 64, 120, -43, 57, 37, 11, 50, -68, 101, -61, 22, -128, -50, 1, -95, 78, -122, 125, -70, -73, 50, -14, 83, -35, 123, 30, 82, 31, 68, -66, 39, -82, 0, 82};
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
    msg.setTimeStamp(0.25390441990299173);
    msg.setSource(62762U);
    msg.setSourceEntity(227U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(28U);
    msg.type = 113U;
    msg.op = 144U;
    msg.request_id = 26087U;
    msg.plan_id.assign("NPMSKXTBCNNHEZBFTJSYHHGLTJEZAHPQOIBXLLCLDNPREVJLRGAVTBCFHHDDFJBMPCYOHDDGBUIUXTWGXZDQCBOYWYMNQQJLSXPOISRQRSFMTCKIWFZOMPGQUILNKLZANZSAUVKRGKETZJRPNKYIOFMZIHHSYNWOXFKYGEITHVVMCWPWXXYQDQEBXMVWVDUEJDQUKAECRVIPUOXPJZASGVQKFRVYKGZ");
    msg.flags = 8348U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1134145974U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WDFXSTIUPTAROUBBVHSQSGXFITLLLDEAGIKFUNKTUIDBFPAWDYVKRMOLEORZLZZZOJXLNWMBUTBYSKEIEQRDAOCMBNFCWMXXUQXJPZVGDZTXWQIVIWMPYKHLWENBMEBVUKHQDNGRYUFTHJCCGJHJQBNRNCVCZJLEDVMNJORGZOADRJWQPAQSCSIUX");

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
    msg.setTimeStamp(0.9038569032479281);
    msg.setSource(51333U);
    msg.setSourceEntity(209U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(188U);
    msg.type = 42U;
    msg.op = 67U;
    msg.request_id = 58088U;
    msg.plan_id.assign("IDSAJWEAZHPINCRESUVSOEBACANXQWHCKXAVCCUGKSFGGXKXXTMTDRQSGFTQVJIGBGGREUZVGAUNZIWPEAOWPZYWWEMHYIVYKNFZPHRNWJJGCQQMDLBSCKBOUNSLRCNVYDKMVIYHFFMOZNSRGJ");
    msg.flags = 48212U;
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.5712404381638118;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JHINQONRMQHZPBRLTEOYRYKJWKAKXKKKQGROBODHWAFIZTDABZFWMUZSLRIINLNBSGCOQMEMOOBUNJGXFBQWUDPVNZHNMZADFYHLSSJEQXSDTLLNUZEUTLAVIHQWCCXXWIBCYRAVOWCBGKQDINVCWTPHMKBVRDSXKAE");

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
    msg.setTimeStamp(0.08445244605195723);
    msg.setSource(1359U);
    msg.setSourceEntity(126U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(243U);
    msg.type = 169U;
    msg.op = 156U;
    msg.request_id = 37375U;
    msg.plan_id.assign("JKPZVXLADWXRTGPUVCOQIOAYKSNZTKTTTPKFOIDPCOVBHFTPEPUJHYHRICZVLEHRQADNWIYNBLAXYWYGAAEWDMSCVIRUEAFYNXGCOFJGMMIQTVCWBGMFNJLSYBYMSVKCWZZMSZRNJBNKMAEYCKJCSEVDNEKFCIXPQEQQLBBOXJGLBT");
    msg.flags = 11674U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 111U;
    tmp_msg_0.period = 2800496981U;
    tmp_msg_0.duty_cycle = 3700368090U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MESZYSEJSRGCIJPBFMSKEYCHKLIYYJWYXLTWSLFMUMKAMAHXULCNNCIDBAJTFFQXVXBRZYSNHNPDWXLJVGGUHFVFUZCGGLBHVEVJPQONKTJVOXIITDWPRTMZKEZTJUOWAPUKRKEIGUPZBXQMUXBWIYPDUHSYX");

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
    msg.setTimeStamp(0.19683834709382086);
    msg.setSource(28323U);
    msg.setSourceEntity(141U);
    msg.setDestination(51262U);
    msg.setDestinationEntity(170U);
    msg.state = 179U;
    msg.plan_id.assign("GULJEPZFKWRVVOIGUSSDBJMHURNUAQDFHFVBOBGJNZKBWKYEYQZRIPMZZXGMUANCHUZNTFLLRMNTCHKOGASVOLVIYSRALJRRVUWZWEJYKHCGLYOYQDPKSSDDXODRVPBCITMQJOJPYLLAERQHTOINAXNPHGZQLUONKICMXFXKHMYATWMABUHTECGCCVXQETNSJFVBXCSFEOTQEBFSTKXPVEQQRXPISFDYPUN");
    msg.plan_eta = -1008192378;
    msg.plan_progress = 0.5331843383764534;
    msg.man_id.assign("GKWGRXVFMZGJIAYMCIDASRYGJK");
    msg.man_type = 65357U;
    msg.man_eta = 682651096;
    msg.last_outcome = 102U;

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
    msg.setTimeStamp(0.035815282758510425);
    msg.setSource(10955U);
    msg.setSourceEntity(132U);
    msg.setDestination(52706U);
    msg.setDestinationEntity(132U);
    msg.state = 21U;
    msg.plan_id.assign("ZFIEUNXTZTFWRMOJDRGJSMOXHWFILDNVMYNQNOCYYQWZRMZPLGSPPCBSKSVQOWBYJPLZKMHXWGPBSETCNK");
    msg.plan_eta = 161158602;
    msg.plan_progress = 0.048985783828555673;
    msg.man_id.assign("SKKJQDQEERGOAYCPRCCAOMDVKFURLORYHARWXMGIOFTJHLJVCBEIQWOUBNOAIKMVZLQRRTIHINYIVSFQYXGSYQZPDVUBZTOSFJOCMBWKDTDGSHKEJEBDTZVHNBMMKGFACUTZXYXWEZSPELXVCPCPVTLUIAKNECMTEFHGMNYBONNDMXJULRPHNVGFPYUODDWHSWPBAJZAV");
    msg.man_type = 8410U;
    msg.man_eta = 1108261664;
    msg.last_outcome = 231U;

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
    msg.setTimeStamp(0.8009566058176462);
    msg.setSource(1879U);
    msg.setSourceEntity(7U);
    msg.setDestination(5524U);
    msg.setDestinationEntity(44U);
    msg.state = 69U;
    msg.plan_id.assign("SPQCRRQCNLOWNFOXSHTJBHPIJXVJLKLWWGDMAZRYYSAUGUDHMOEUKSBUMQAEJNXVCNZGWHGVYMYBRCAKZAUGYAYBZNUSQUNSBUUHRCVIDVKFPMDEBFPZSFDCBPEBFQOAOOJTTJIXNP");
    msg.plan_eta = -1339469941;
    msg.plan_progress = 0.12265774299657806;
    msg.man_id.assign("PQIKAHRSTUXGYWVADDZGOAIXUOIEFUTGXVBXLJBLOUHFQHGFFQLXNFZISRTUSJMCBYZZXOBILWKEKTFCYIRAHVCDTBDDACOVUNERNOPAGLHSVLJYX");
    msg.man_type = 21993U;
    msg.man_eta = -2078322156;
    msg.last_outcome = 246U;

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
    msg.setTimeStamp(0.3298505131147277);
    msg.setSource(415U);
    msg.setSourceEntity(225U);
    msg.setDestination(47132U);
    msg.setDestinationEntity(7U);
    msg.name.assign("MMEIIYWGVTQIEYPINDMSNDUUSECZVIWFNAMPQLLPZWTQFYQZKOIMBSAXBAJVWCCSZRNKDWQVQEVPJUPIHKQXGFMXHFZLPMCWKYYGGWJMXOBLPXZGREQUFFGGSKZKNHUYYOTI");
    msg.value.assign("PQBFGKAIJHRYAVVVBWBFSVMGVGWTRLOWAQWEWPBFCMIGPQCTQRDMFZZPEYIKXAZZMDHXSRXETOM");
    msg.type = 197U;
    msg.access = 46U;

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
    msg.setTimeStamp(0.8179114987321641);
    msg.setSource(45704U);
    msg.setSourceEntity(71U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(20U);
    msg.name.assign("GLPTJGGDBKCBPCTEVSKSYLJMOPUNOBZSUAHKTFWNEAXLBWAZGLBORGCWFXESVPPXFLXYULAUAJQPXONJDIHLEVWIMQOTTZXWMDVNZMKJVFZQXHFZTUFKICXJFFIRDOQAHYUCUQQXZYPRMVBSIGCOSEVTRKSBVRDGCDLBDWOHQYELXIMYNOMVVETJECSIGAQJNQAZSUCBAEKARDYUJGZHK");
    msg.value.assign("VLBWBNYOHILZCNQNPKBKXHWFZKXTIQVUDYKJTWRBQVGBEAQIACEREWQAZHPSZDVYWUCSYEMGOZQEFZMDHCXUUTLYTKTSLCJYJIUVWRISFHFLGWEUOMMCTDBPLHVHFOKFIPXJDDRNYQGBGMDPSPGIZKSSHCYNITJVXDNOHUOXPGNMWENB");
    msg.type = 252U;
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
    msg.setTimeStamp(0.18785212079846603);
    msg.setSource(6656U);
    msg.setSourceEntity(89U);
    msg.setDestination(14927U);
    msg.setDestinationEntity(213U);
    msg.name.assign("OXOXJVJMRYEGKASTMPNYUKUPDVROYTOCZIOWBQIALIUJOLNNUTICVBBWNEFDHNDISCLDKVXYJVQYZARHJUQNWTFBXKRSVZCSXRFYMJOVBGRQIESFSMFKITWLXAQIFPGZTKCAUWJTPADCHFFZXPXHCXPUONFJKBGAANRTRDHEFPVDBQPLZVEMIZYRCLEXLEHGNHWKKYSBUGBZDKBCOHHSIYMQUUMWVWWJSGGEMZRLTPLDYNEQGQMG");
    msg.value.assign("DVKWXKDBUULZQGYFJAVEOSYXRIVWPOUJXRQPJNBRSNPFCJYDONPZKVGSBUXMQTVNVEKDLKSTYZHJMORWTZCZAIWKSEWVCXHHIFCIUFIMAGHEEAFLODBYPNZECUKGAIHLQULRSPOBCQFKURBUNFIAIDQLTSJPVKGYXGDYTGQHOVZHQ");
    msg.type = 38U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.2944478599691832);
    msg.setSource(51870U);
    msg.setSourceEntity(211U);
    msg.setDestination(33347U);
    msg.setDestinationEntity(161U);
    msg.cmd = 165U;
    msg.op = 234U;
    msg.plan_id.assign("BABDXZZTKWWPJLFELRRGESRPQABHGDMBYODRUXGMGRYUCZYNTLIEUSNQKXHWCZUZQDSSTNCDGJBGFDLBQRJYXIVKMOIIKSGPKFXNUEAATCNQLHIXLYKKORZAWBFVHPEIKPSWVVFRAMCXHMOOBZIQRWXJZVTKZBGWFFCEHVNHOAUVITCSNVPXCZGHDJLJ");
    msg.params.assign("DQJMRMVSIVHPMROTPNOMQLNKYXOOCVSTAPSUWJLFUDEHNTFHHTSZXXCCKAMGGLICAGGJBUHFYVEVBFSQBHKRBFJRSORQJIUDNJROTCLXQPDQEMKNDYAKHRVXJUUZNYGQJEHTXAWJCLWUVOMGTBZKQELRIDPIZMF");

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
    msg.setTimeStamp(0.5832949853351018);
    msg.setSource(26750U);
    msg.setSourceEntity(117U);
    msg.setDestination(8734U);
    msg.setDestinationEntity(117U);
    msg.cmd = 244U;
    msg.op = 36U;
    msg.plan_id.assign("ECLJAXPQNXXEBDKJITPWXROLMCMTDGIWHFIYZAPRQYYCZPNALVVHYJFHUJSMOTZVIJKJFDIBOXGPMVTOLPSCTZKYMHIBONH");
    msg.params.assign("XQEXQPSOEDIUYJCRRWEWFWMWBDHKCZUMPIMNZAQYIWAFWOJVPGDPLAELTJPVBYKSGZVWXSTYRAMGUNBRJZFVYAXXCNQTAJQNOUKOYUMBSLHMRTZMGJBMBISQXHASNAJXKHN");

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
    msg.setTimeStamp(0.16712937144543738);
    msg.setSource(19289U);
    msg.setSourceEntity(196U);
    msg.setDestination(37558U);
    msg.setDestinationEntity(32U);
    msg.cmd = 140U;
    msg.op = 9U;
    msg.plan_id.assign("MCZWUYOMGTYGRSIPQHFWZDGYVKVGYEIUKMGSNXRRHLUFLVZFQNKXWOABMTSHGOOPDAQIPRGKYKQXIONMNJTXWEVXPIUDCBJBPARJKBMHCLHOJFSNVXTC");
    msg.params.assign("STWSUUSSYDRBEKZCMXPOIMMCZZMDUAHHNCJLFIGFLRLIYVNKXVOUHHPVLFJIJBSFTBHZTGMFGCVFQMNGCEXCFSVIHPQETDKXKBBLYCODCUHWRNMKRLTHCEWNDZYGAHZJEXPSQYKPVTWKIEGQVATYWKLVWIAETOPPYQDOWLOZXDZGSGQGZBPINX");

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
    msg.setTimeStamp(0.4264482897958395);
    msg.setSource(60764U);
    msg.setSourceEntity(16U);
    msg.setDestination(51282U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("NVSUIFCXFBCDKDRLQZBQAIRPNDOSJVBKPJNTWXGKIMVAMLGNESHYEVCQEWBEHYDRWPBGREONZDXXCLQQDAQJODEUSGYTUMNYXONLUMEAQEGZESGIPUGRGODWOZFXLTZHHLKQPMRJLTSFHHKBDWWMZFKVOCXCVJFVVOPMRXCNSGRADWWHWYTPIAXBRUVKNKPYTCUZPFLMOKBZFTZALWPNTHUJSCIOIXSJQIJYIVUE");
    msg.op = 211U;
    msg.lat = 0.2630527060826462;
    msg.lon = 0.29381328288896813;
    msg.height = 0.14270140349881566;
    msg.x = 0.34438197310418284;
    msg.y = 0.39150540225032626;
    msg.z = 0.858597684075831;
    msg.phi = 0.9738769571612284;
    msg.theta = 0.5322133076451963;
    msg.psi = 0.6544094619148707;
    msg.vx = 0.760315648131482;
    msg.vy = 0.14448478564624712;
    msg.vz = 0.36476086786179207;
    msg.p = 0.653072098310582;
    msg.q = 0.2461674192621489;
    msg.r = 0.0781506030768333;
    msg.svx = 0.6055962307617935;
    msg.svy = 0.4348072632491231;
    msg.svz = 0.5977270697264727;

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
    msg.setTimeStamp(0.07707635657065393);
    msg.setSource(37928U);
    msg.setSourceEntity(98U);
    msg.setDestination(58338U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("HEGDCJRGQCLOCRGYJVCZVPLAKENNIEBGOBRCOVSIWHIBYXTRSRLGBFKUPALYZOMVKPOMMYDGRQOTSDSHXOIBXKSHEHPZJEFKVNGAFTUCUPWQNAUWUGBLFRZPKFDFJJWQDIQEDLVWLBYTQLDKXRMZNJSFPEISCVTSQCNAPSZVFZUQNAQMXMMZLDRWGAEXUCIITCWXQOBKKTGFWENBHJY");
    msg.op = 233U;
    msg.lat = 0.782672627897068;
    msg.lon = 0.4523087134702495;
    msg.height = 0.2011273807962377;
    msg.x = 0.9398468680101479;
    msg.y = 0.790536339159729;
    msg.z = 0.1632833122906664;
    msg.phi = 0.11711591897937357;
    msg.theta = 0.6095939870082856;
    msg.psi = 0.25861694522908907;
    msg.vx = 0.746797500454866;
    msg.vy = 0.6834502913239962;
    msg.vz = 0.9468585377903981;
    msg.p = 0.16728527499015056;
    msg.q = 0.3837894519831325;
    msg.r = 0.8154065805628641;
    msg.svx = 0.45019286337302433;
    msg.svy = 0.9825749579655736;
    msg.svz = 0.7801666820805919;

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
    msg.setTimeStamp(0.7826410457585856);
    msg.setSource(45797U);
    msg.setSourceEntity(94U);
    msg.setDestination(18973U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("JCTWMPXZDWOSXHFVNQROCYIMNDDBZWAGPZZJFWHXKEDZUPAGGHVPHMQZOZIHRY");
    msg.op = 11U;
    msg.lat = 0.35155671253366305;
    msg.lon = 0.23344886037743884;
    msg.height = 0.5717343633084228;
    msg.x = 0.5499354011486999;
    msg.y = 0.4056992462355711;
    msg.z = 0.9162784492416689;
    msg.phi = 0.024884139379206416;
    msg.theta = 0.47442429116580764;
    msg.psi = 0.5829453498084809;
    msg.vx = 0.8063885364315381;
    msg.vy = 0.824146452091446;
    msg.vz = 0.24448426015531788;
    msg.p = 0.2708068759399972;
    msg.q = 0.9573911049642293;
    msg.r = 0.17467857699923373;
    msg.svx = 0.6006576257299622;
    msg.svy = 0.5425225526966879;
    msg.svz = 0.37882600058667115;

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
    msg.setTimeStamp(0.2892115572473004);
    msg.setSource(15320U);
    msg.setSourceEntity(231U);
    msg.setDestination(35132U);
    msg.setDestinationEntity(51U);
    msg.plan_id.assign("UWHTPSHDVNJDLQTROYZMINXBPWCCYTPIQHMMBOQPDTFZQJGURGLDPCHYMANUMBCGZVPKZNTYEYVGFJBEALUDLQPWIQRWVEXBEQHJXUXJGLMKZDBIEQROCHCZHMMKNAERUDSIFTIBSY");
    msg.type = 109U;
    msg.properties = 232U;
    msg.durations.assign("ITBTDJPTSGEOVXYCRILDJRTPACZMLJKMYKPKWRAPQEELGKJWFMMJGXYZRIWBJHNUSVAIWTYONYZVHFIRXMVDCXILSVTLPDIHPWTLQUCZPWANMZNFNQWNWUGVGQDUKQYOSJBRPQPCTDKEIYSOGUCKVRDIXCB");
    msg.distances.assign("LCZBXIRMTLPZVPEYUWCGVHNPNWYVFJOAFCANNKSBKSMTEAXADSITHUXFLEYQGAOEDEXOZEIFBUIRKEODJKNLCXPKSQPCXSLGCLRIIKAEYWLPHYDHDV");
    msg.actions.assign("UQHTFQBLMKJYTMADILHHGBJTTXVVEICZXMMTZXRTRWDCAOLZIVCLORBUEEMRKJXFDYCWXIXIRNLEFMZQKGMYVQSTEZJDOU");
    msg.fuel.assign("TVHAVUGNZACXJAVWERADXPNSHBEYORRWSFZULOGFHNRFRTYPYJYEMOVDOCTAH");

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
    msg.setTimeStamp(0.08845692218841228);
    msg.setSource(57733U);
    msg.setSourceEntity(182U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("VCIMJXOZOMQYQAEHVNOWEBVXLSCJXQNZTPUSBUGBWAFHIGWROP");
    msg.type = 124U;
    msg.properties = 186U;
    msg.durations.assign("KXOAJBXFIAXVFFLKFEZSHWVMRTNGTMKRCKGWULZPYNOFVCKQKVZOYNUJLRVTRYADNQECMOYHUENMNIMFUCBBVDUNJZVISYGCHQHWQKWLEFETXQDMOQLATQTZMBYORGYIBSTPERGJELSZWGBRTEMUHLLPMDPZLRRCCOUDSMBSJKKUZLDADXZEDWAOIIPHQFAOWXVVAPUJXTOIDCDNUJYBGSXQBXQJFKSWPNXHPGAPIZNHGBRVJJWFGPICTSWY");
    msg.distances.assign("DPUSSANNMTUXIGPRXDLZIVFPOBCVQDLSUWXXOVEHFTPCTYHQZCWVSPOIYIBDSTFZOQQD");
    msg.actions.assign("UWMOQLJJCOEXDE");
    msg.fuel.assign("DZHYXHIQNCNEOIQHLWKEYBGMJBLRSZSYLAQAMKZWCKRYUUKZTGJFSLPMTTMRRBUTFSLPMCVJTTSZDBKJQW");

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
    msg.setTimeStamp(0.13262343960813328);
    msg.setSource(57670U);
    msg.setSourceEntity(92U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("YAXIGCPSFBARXRKP");
    msg.type = 123U;
    msg.properties = 191U;
    msg.durations.assign("ROGIFWAJOYKVYXHGYCKPKZLTWZDLLDPODNYUVTGMGCXMYCDOYFSWBUTRPFLZGYCOBSUJUQSJDTITBBQZQPEDWOUFRXBNXKWLRSAVEDTCRVZCBZQQSEJACAHEJLGZOXRNNCWMKVCQQNIHRMKWHMDUYARVAWYM");
    msg.distances.assign("DFWWYMZENXBIOIQZPMFDUSPJWIMRHSPYEAYVJQPBRZXFRWKALUTSQDLBHSGCUZWRARGGKPCKJECUHTKFVINBXZFNGZDQNHYBEUEOBYTNDNLSUUMOPXELMEKXQAUHIKRCSSETMGATJLITJIYHXVJEQVJPVOXHDB");
    msg.actions.assign("GKSGIOIKZDYNEJFONJFSJMWHLNBWYETCEEDZRXSKSTBHZP");
    msg.fuel.assign("NSYQFOXMIDSLHSYFGYQRSURCKKGTBHZCMSBUKONRNUWTWFIRPXUPZDAPEZWYEVNLWIMOCBXAGQGAGXUEUTWUGINCJVGBOWFHUHOEXBDYEPZJEQSOHQMMKQVYPTEQTXFAWHLNKYLFGWQSRVJIMGVZBHUAMFXVEJHITUKZFALJPHNOFLBYODKMZ");

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
    msg.setTimeStamp(0.07741193507517452);
    msg.setSource(22405U);
    msg.setSourceEntity(192U);
    msg.setDestination(14406U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.6011012150630889;
    msg.lon = 0.06438723611208219;
    msg.depth = 0.3712666401363669;
    msg.roll = 0.19567291889723426;
    msg.pitch = 0.24741583475228113;
    msg.yaw = 0.5428386875466776;
    msg.rcp_time = 0.74076063220153;
    msg.sid.assign("AZUWVBSNHVXRBJQPKELMDMTVVWFDFNUPO");
    msg.s_type = 153U;

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
    msg.setTimeStamp(0.6036420066583087);
    msg.setSource(1952U);
    msg.setSourceEntity(184U);
    msg.setDestination(61054U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.14261111420473893;
    msg.lon = 0.5746426832396392;
    msg.depth = 0.4892414855627938;
    msg.roll = 0.5537291991197963;
    msg.pitch = 0.9872381783389335;
    msg.yaw = 0.7042928905692457;
    msg.rcp_time = 0.100346107533138;
    msg.sid.assign("PRSRLZEAJMWTOZUQKTZDEUGSPTDADXCUZFQTLSINHCFMWHMAOBH");
    msg.s_type = 102U;

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
    msg.setTimeStamp(0.8005337241973762);
    msg.setSource(25020U);
    msg.setSourceEntity(111U);
    msg.setDestination(23132U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.015340783692761484;
    msg.lon = 0.9669895863543034;
    msg.depth = 0.3090165634678037;
    msg.roll = 0.45150573976100583;
    msg.pitch = 0.03012323463718991;
    msg.yaw = 0.45827777855434737;
    msg.rcp_time = 0.43464788916379604;
    msg.sid.assign("OYIXQILMTERFOVPBZSOXSZQYCPJXEDMNHZOAYMMLGNRDLZDBXAZMOJDVJPLCIZUHUCHAKEWLTEHDXCVJUCLKQFSJQULKYMUSIMFCTHFYNSMZWGWQWNJOUXUBWNPX");
    msg.s_type = 57U;

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
    msg.setTimeStamp(0.0658276534428609);
    msg.setSource(40434U);
    msg.setSourceEntity(112U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(122U);
    msg.id.assign("OUIKVJQQPBLZTOKGSEGIELJURSYJQDGIJDQDUWHBJTIXRNKSBYHCUHRLFVYGSBOTDJIVDEZPCUOCUWZPYWTRJEKMVCBMSZLPWHTAWDNEFYMUUSMSXYSCDRYTGBWQHXXGAIQAXLMVDWLFHQPLQZZAXFPUCWTTNBPM");
    msg.sensor_class.assign("HRWKEIBPSHNGGDQWFFUEGHZJMGYBPXLEBTOEBXPBLZNOLZPLIINNMQODSCDTKPGSNHZHHFICGGYGAAWZUKJKYKHFEVUMHQAVYTZJSWSVJLRRVAEI");
    msg.lat = 0.3436925482342075;
    msg.lon = 0.6084293173557488;
    msg.alt = 0.32269622539094356;
    msg.heading = 0.29470177209148507;
    msg.data.assign("KBKZNAROHOCOECHWVZANPRPOBWFECMAPHBYSQPWEVHASZCNBZIQRKQFAYTEINGLHTDAKMOIFEVQLHBATJGNUXXOFMWNWFURWEZJTQOSMDFCKZJQREDIKTTDXNJLMIQQFZJWPYXVJHFEHGYSGQJYDUUXSPPGKBGSUMYXSEPKZMXVOLSCPYTBBHLRKJVLXVDJXRZTAGDAADIIMQLBVBRELWUGCGCIRLUNMDMRIFWFJZNCLSDUKTOUHYN");

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
    msg.setTimeStamp(0.8143570408414875);
    msg.setSource(44909U);
    msg.setSourceEntity(96U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(38U);
    msg.id.assign("MRXJLFKLXWRMDCCROTLJJ");
    msg.sensor_class.assign("FIJTMGVUMMPRTUHUGHKDOCOIVKNOZFJDJIAAPEZRTNWDVUJLCJECKLDVDFGZFEDIBFXREYNY");
    msg.lat = 0.2129910477392818;
    msg.lon = 0.7328023309883458;
    msg.alt = 0.3520735506620477;
    msg.heading = 0.6849623182882718;
    msg.data.assign("BBANTPESSCWHTSTBQBAWIXVEDWKRZJMPUNGMXQAKMDSXATFHEXLYFBGJCFWEVIJQMOHNDCKRNJKEWWIFRZRRICUAHAMXLGZYMV");

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
    msg.setTimeStamp(0.5476254044352281);
    msg.setSource(48688U);
    msg.setSourceEntity(91U);
    msg.setDestination(50504U);
    msg.setDestinationEntity(65U);
    msg.id.assign("IFLIDCYCHVBTXWWVYMBNRYKJHXUBYQKXLQIIFXKIGIC");
    msg.sensor_class.assign("SQIPJORNVOAFMVGUXTCDATVRSVWUDPLXREHKWZWQRYZSMLUGQUCTUNFPEYGWSAOMKCVHJUIQJGLYLYZHMZNQYBNGIRYOOHJLUJBMHRIOJ");
    msg.lat = 0.7399820175512428;
    msg.lon = 0.3720743574509916;
    msg.alt = 0.17188271798631927;
    msg.heading = 0.1796776033086689;
    msg.data.assign("GLPQAORBEIOLFHTLMJZNDPLRPBKTCCHWJUHSMIYXFYEGBBUFRQUXOQQKFLTGOONUTTVNU");

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
    msg.setTimeStamp(0.41917212300178064);
    msg.setSource(12161U);
    msg.setSourceEntity(61U);
    msg.setDestination(1028U);
    msg.setDestinationEntity(248U);
    msg.id.assign("HGVVBLWUMKWMGGVECLOQTMYSQ");

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
    msg.setTimeStamp(0.5234457779222418);
    msg.setSource(24831U);
    msg.setSourceEntity(122U);
    msg.setDestination(1377U);
    msg.setDestinationEntity(143U);
    msg.id.assign("VSCJGMHXICRHUNSPUPDEXICKZMAAGKEWBQFDKPVKJSSCNHYOBSRUMFRCOZEUIQFUPCINXTLDQXMZNWVJDTLKOXRDYASPNZZYTOWTMQGWQFUYCAVWUZTMXROBSULRWMYXGRGRPKQWEHDEZATFGWKVPTNOTZWFBXEVOJAGQGDNBXVBNKYIFJSBJYLGBINAXJSLAJQYCDVQKVILEHPCTHOHZDIIBAECOKZLGF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NWXMMIJNXVHHBNPMXXEJRZATIVVGRUSSIBLEQNVEMTPQWMWZFQVQVMZETQLFHWHLQWKCZTHNRXVPFOAWAKMAQRMTBFYFNAVUISETJDFWPARJGOOLPCRUBBKYBJDNEFVJYDYEICUAJPJGPBLPHBUOSQIALDCTSUZDLCHZJRYXGNOHQQNGCOKOSFYKAEULIIOMUSOLCCXWLYKXKXZNSUFOYDYYMCDEGSTA");
    tmp_msg_0.feature_type = 220U;
    tmp_msg_0.rgb_red = 108U;
    tmp_msg_0.rgb_green = 80U;
    tmp_msg_0.rgb_blue = 205U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.061934496860558075;
    tmp_tmp_msg_0_0.lon = 0.19480770485749854;
    tmp_tmp_msg_0_0.alt = 0.8373762112999786;
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
    msg.setTimeStamp(0.5773900946394862);
    msg.setSource(30401U);
    msg.setSourceEntity(129U);
    msg.setDestination(35579U);
    msg.setDestinationEntity(96U);
    msg.id.assign("BYWKGNCNRUPQTUZYHHMFCXYPQPMVZHATGQTSGGMUWCPNNJEVLUUCTBHUXGWFOAAJSWBLYJNLKZQTBZPYSDDJECLXWGFV");

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
    msg.setTimeStamp(0.007640317786134387);
    msg.setSource(31760U);
    msg.setSourceEntity(43U);
    msg.setDestination(32250U);
    msg.setDestinationEntity(145U);
    msg.id.assign("QKUPRJGHKRPNHXTHCYOVPZFXDRCSHBIREJBHRCKBZNILTYUMAWJMNXUUXEVJCIVHDXVZNVLOXORVSJYQUWD");
    msg.feature_type = 183U;
    msg.rgb_red = 251U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 218U;

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
    msg.setTimeStamp(0.15286233730282517);
    msg.setSource(63224U);
    msg.setSourceEntity(252U);
    msg.setDestination(18223U);
    msg.setDestinationEntity(124U);
    msg.id.assign("UQVZBCCWHFQEAEOBOGOVHYZPMNKVLXTPDVPZMAFGKPKYAGWJVVCEIBIHZTIONIZFNRJQIBYHFSAXRXLCBLYZEOSQLXJKLDQNXYBDLUYQUVNFHHTTTRVURPMFORXRGJVSDASITKEXARIJGPTWMCHOURCKCZM");
    msg.feature_type = 107U;
    msg.rgb_red = 172U;
    msg.rgb_green = 2U;
    msg.rgb_blue = 96U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8784325155947963;
    tmp_msg_0.lon = 0.9117943242430594;
    tmp_msg_0.alt = 0.38309362892481835;
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
    msg.setTimeStamp(0.3728278840013012);
    msg.setSource(56256U);
    msg.setSourceEntity(208U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(205U);
    msg.id.assign("KKQTRTUDXUNPOJOMLXVAZIRYPZKQGGOENZSWVQDUYXFLQPDPOSVAMYNSUCDRDMQBBFIBGNGYJCITSFCRLFKHSLKTTLUSRLQIJBYCACAWPJLRGOAUWUZSNVMAITIZQOBEXVBESZCLHPWJDBZVCMSPMZEUIRBBRYEQVWKWEMBIINTNPXHNCJZFJGAWDLFXHPRIUYXVEQFCGXONGVFKOEXYKWFYWJHMTOAHVGDLJRAHXHHUEEGT");
    msg.feature_type = 211U;
    msg.rgb_red = 119U;
    msg.rgb_green = 204U;
    msg.rgb_blue = 127U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.22883966463239935;
    tmp_msg_0.lon = 0.7175546027914415;
    tmp_msg_0.alt = 0.3672423584262733;
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
    msg.setTimeStamp(0.08224342198400447);
    msg.setSource(60105U);
    msg.setSourceEntity(169U);
    msg.setDestination(50774U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9783129833271074;
    msg.lon = 0.32253980215998534;
    msg.alt = 0.13992462555126095;

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
    msg.setTimeStamp(0.30432210298524587);
    msg.setSource(30396U);
    msg.setSourceEntity(153U);
    msg.setDestination(36218U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.5385731046152598;
    msg.lon = 0.6422982654509337;
    msg.alt = 0.5778778848567271;

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
    msg.setTimeStamp(0.27398765299298);
    msg.setSource(28831U);
    msg.setSourceEntity(117U);
    msg.setDestination(43523U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.05159637680083351;
    msg.lon = 0.7988378962071834;
    msg.alt = 0.34908057330128617;

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
    msg.setTimeStamp(0.5164866121305933);
    msg.setSource(15470U);
    msg.setSourceEntity(181U);
    msg.setDestination(57032U);
    msg.setDestinationEntity(119U);
    msg.type = 2U;
    msg.id.assign("ZLTCOACVUTTJFPUQRVEFQSONVAIJQDQXAJRZHXRUTEG");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.4946420012433772;
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
    msg.setTimeStamp(0.4666025124136519);
    msg.setSource(33736U);
    msg.setSourceEntity(170U);
    msg.setDestination(11209U);
    msg.setDestinationEntity(84U);
    msg.type = 31U;
    msg.id.assign("FJSIJBAKFUSOTXZEEYMLBWEQHHXASFOUYCBOATSNOXZ");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.45432692723428925;
    tmp_msg_0.x = 0.7748380685635392;
    tmp_msg_0.y = 0.8236750131133469;
    tmp_msg_0.z = 0.8344135046023947;
    tmp_msg_0.timestep = 0.6548184643500771;
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
    msg.setTimeStamp(0.5100436850690081);
    msg.setSource(21326U);
    msg.setSourceEntity(172U);
    msg.setDestination(32664U);
    msg.setDestinationEntity(116U);
    msg.type = 21U;
    msg.id.assign("ACZGCSMHYGSQNBHYCZWYDXHXITFYEZBQJBXMSOSQJXXIWEYACQTAQKIEBNOBXKUTVLXIVKHSIGWTSKDOUBDOHDDRPTEJUJEFPKHUNWIEQKGQNZUAEPRPYVRRADMIMLVZWSMQVURPVFWUNCPKBORZAIMOHPHKPBOJJDCXVOYZFAYGFDVLJELQGCTEBHJMMNFOYZMWURZJLRNLDPISUWCFORWGLSACKLZTFTQFECVNYGLFRKXGTNJBWHDA");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("VUZIGGXSHWSERYFVWOF");
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
    msg.setTimeStamp(0.7136172228579701);
    msg.setSource(25990U);
    msg.setSourceEntity(34U);
    msg.setDestination(38564U);
    msg.setDestinationEntity(13U);
    msg.localname.assign("RDZBPXSHIMEWLVNKAZQPUUDTUYQISKSUQQTXJHHQBTNLLYOEOOSPKDMVRUCKBLZRBGZDDFBNEXUHWAGFHWYNTFGTAVEMOWDNISHLOYIOAJKPOAWVYHODXHXJGWLXMJCUEFRVFWECURYDAILFHFQNBGNZGWTAZKKRQJBVZVGMPZNIEHEXPFJJRP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ECFCZAVKLIUSETWREYUFWHZJZJSHPBKUKRKXVOOJRCUVDMFSCZIAKSDKSSSNCNGUWASKHQHQAONGJJRABKEONRVBAEHMTABGKNIXWFVIKJJZFVXYJMTIZUMXZGQQOVARRPPIHFBYZBYWILGGMNDTDTGBPUHACSTULLJWHMEPETPNZVXCLFOQVRWCDW");
    tmp_msg_0.sys_type = 69U;
    tmp_msg_0.owner = 27406U;
    tmp_msg_0.lat = 0.18931013206452252;
    tmp_msg_0.lon = 0.8350003519908799;
    tmp_msg_0.height = 0.1744345403316444;
    tmp_msg_0.services.assign("GGSUAEGLXFZAXHBFEZYZARROTZGVVTWTUFRQMIRSXPJNONLCQEHULLLCUJJJYQGUDMKHKFXODSRK");
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
    msg.setTimeStamp(0.06624523582607433);
    msg.setSource(15848U);
    msg.setSourceEntity(44U);
    msg.setDestination(48359U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("QRDPMWCHHXYNDECMBNQBNCZLKWSMEZLEHVTJKMSDXKIWFJSLWPIMSYKXNZZLVYPJXTGQPACGUOSBGRCITIVCRFLZQFXJAWHSAVOFJJRGBRDTAAEDTHEUBKWPNDWBDLKLNBQDNJACUFOUTZQSPBR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UQTKJANJAKWSPUSCWOVQRICDMWYLUNBVXESOMQFHFNKAHKSLTZACRMADGSUKOTPCCIIINOGZEBHDRMHPYSDLFOJQORBVJFVGZFVHHULDDLAUUSHXDJRPJIZZTBJZIOIEGTGYNUSKMBOGAKFEHCMPIPJWYODSBTVEYLWCSMXJLXLWTYEDQCBZVMZWWRNZBPAQRUFXYMFBGAXYCNYKWIRTLPREAOXZBXTKNVVGMNQGNREWQLPFVF");
    tmp_msg_0.sys_type = 5U;
    tmp_msg_0.owner = 28068U;
    tmp_msg_0.lat = 0.14829327381912094;
    tmp_msg_0.lon = 0.6305849670833563;
    tmp_msg_0.height = 0.4408955879221427;
    tmp_msg_0.services.assign("FKUEGZLHGTFWOMMVKXXUFBRZOBKHGYRKGAESRGOSWOHL");
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
    msg.setTimeStamp(0.43733656328408144);
    msg.setSource(64474U);
    msg.setSourceEntity(161U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(147U);
    msg.localname.assign("TMVCAUBSURZYYLCFNSQVSJBMJOSXKUTROCHIMJMPCBVKYJWBQ");

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
    msg.setTimeStamp(0.5572074117251167);
    msg.setSource(50382U);
    msg.setSourceEntity(92U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("MENOEXDMHGBCQXJWVEVWWPRDNJYJLFLYYKZRFPIEYZOFVBLAKDJNDMXGTMQHUQIIPHRNRRTVXPXUBLGTSVHQXUROBENVVOHZZLJBCZEA");
    msg.predicate.assign("HGZVRMSHGHRODPNDNLFTWBRNINMWNPYXFQVEDGYKVQZGYCCXHEBQJVIBPJYJENXSSKKCUTAAVSCPKVBSWWEUPRNTNZMVIIKRCTGLBLDPWYDZWWYUEKHJJHONFOYXPMEJUEJUXHMILFZJQBNYADRSUSWZOFLRMUQKTAFQOILFLHTVSAXXVVELHGURCQDAYBGFECPGF");
    msg.attributes.assign("ELCNLIDWQNXFSDYZRNGXTIYGXEMZMPBKVMUBRQAZZRJOIDBKMTPQNFUEJPFJIWWBUOKXTPIGALJMWUDCEKGRGQKZCKVUONURJDFGJBHLQSXFZLSMAUHHJPFOMVOVCFKMRJYNPSKTTWPZNCHOGSLVBYCWCWBWBMACKAFLZODAGFOHEISXEILZADEYYTIHQRXVSINBGIYNBRDMALXYVJXPVWKQUQQRWCASUVNLHRC");

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
    msg.setTimeStamp(0.7080041344142495);
    msg.setSource(21166U);
    msg.setSourceEntity(58U);
    msg.setDestination(435U);
    msg.setDestinationEntity(184U);
    msg.timeline.assign("SKPUMZWJCVRPWXJCLUSMWOKWYANILAZGTFZQFPRSCIFRGRIJ");
    msg.predicate.assign("JVDVGXJLGJDWOVYOYZZPOOSFHQENIYPPRKUTNXFKFZOCJXSIJLDZTUISYDBGTQGOZZINVRLHVLEIQCKPBGWDVTFFZEAFWQCHVMSBALXXPYUBTLTZRSSZHUEJKWHMGNNUF");
    msg.attributes.assign("FNKBEISDLPUCDCDQMQHAKSASEWAEFNEKTSILTQLQUPLRLZJGGVVIOGLRSRZFNAHOAZIDMTNGZMMPOMJNXTN");

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
    msg.setTimeStamp(0.08969292985001809);
    msg.setSource(43597U);
    msg.setSourceEntity(3U);
    msg.setDestination(58152U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("FSPGTVSAZAEEKWJLSWPZMJUDRQQWNHDTRUDJOQFMLXVBFOILJYEIRPOPFTYHUSOSYXCNBVGBZXCXVZLKBKKNCUIKDANCUYYBMUFC");
    msg.predicate.assign("JGLOBTYEXBTXHGZZVVVPNSAIDWPNGJYBEDWFOPXKSCDGBPQMEZHWCTIMNAKYYQEFRJSZBCAISFUIBCYAEPAGDUDUMNXWHIOUSUBHBYHTMKNQVUPODZQORKPVVJKVFYCFXRSILUMKWROMCZRJEVKPLLZIMZAJTDLDBLSRFHAFXGGFEELFUJYYSWSNOWQXHVQZZTKMWRXEJVLGOCGCWHIMHIGRWAQEXPUTRDLLJCUOHKTFNON");
    msg.attributes.assign("BQEPELLDEZVGOHYOKKTRAXQZBLIISZFBSRDSJDWOQWICEQJCWMRRWETVKBVEJIYQDDSPGHPOKYUZTOXMIHQHNGXARVZTOOB");

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
    msg.setTimeStamp(0.5962158853674377);
    msg.setSource(9873U);
    msg.setSourceEntity(126U);
    msg.setDestination(48307U);
    msg.setDestinationEntity(148U);
    msg.command = 6U;
    msg.goal_id.assign("IZGQWDERSKXHLNGGYWAJHSTZPKDASUYQKGXBJBZBOEQVRFOEPR");
    msg.goal_xml.assign("ETUZYQTROJSPORADLFMTBRTA");

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
    msg.setTimeStamp(0.38280013634652643);
    msg.setSource(64515U);
    msg.setSourceEntity(66U);
    msg.setDestination(4217U);
    msg.setDestinationEntity(185U);
    msg.command = 15U;
    msg.goal_id.assign("ZUXNQNGHQXTNOTRFUGSZWURCPAPRXQFXYJMQSAJGYTDNEBISERMFUXKSHDAPLMFLUBFNIKGOYEXWCBIVLBCQVLPVTUSRRIKBJSACPGDQTFKFWMJEEMGJCJOLNRWUADFZWMTLILKKDFRPIQMLVBZYUTHZNKVDUVOVHZOGZWDOYQOOEBTRXWRCPPQXAEHA");
    msg.goal_xml.assign("SDKZMBNDJNYJJCSLDNGDOUSNRCYPCXLJAAVRCSEUATKQRGIYBJYDRVYTZWHZSVRCQEVKDORUJYP");

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
    msg.setTimeStamp(0.041855829815041434);
    msg.setSource(44971U);
    msg.setSourceEntity(207U);
    msg.setDestination(26275U);
    msg.setDestinationEntity(115U);
    msg.command = 167U;
    msg.goal_id.assign("CUSZMSMUAGZKVSBSBHEHEWAWMESFLHNRXENVFXDRGKIYMZDVZWTQRBXPTSYDDJDOIOISLAQFQHUNVVIJUNWYHPCZVWQCSICVSQXHHAZQDZGJCRKRYEPSPJCLALWKQXBAJVNTAWMGFYLLGXXGFOKDPTYZIEUGIXCBZQMKLQODEATKLKKWEMMPWICROFVM");
    msg.goal_xml.assign("UPQRHZXIWRUNOEKXOTUGUVLEALDFVHYIARWUNWWZVHQVBHGNBYBRSSMGIDOLYJEPVKIVJCDGXGDWLVXVUMFBSSOIRAZAXQTSZHRTBYLZPQXKUYEIPQWDMMNLMGJDIODQCPQYRCSPOMNEKTOLHFCQRFVSGENXUNOGZSRGHSAWFJBRMQKTECMJFYLJXCFNPONGW");

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
    msg.setTimeStamp(0.01895350774902116);
    msg.setSource(22121U);
    msg.setSourceEntity(199U);
    msg.setDestination(32032U);
    msg.setDestinationEntity(57U);
    msg.op = 67U;
    msg.goal_id.assign("DYXKMGAMBTZKOCSLHYAGBLASFMLHBFUDHADKBBULENGBCSRVSDPEHXFQPJYJIHYVCUTSJGCFJCFAWUJKYLIOCGCQYZERLQPPAVUNELIPSIXCBXNBFUNFYTOGEVIIHOMQARKMRDQSQQTGXVIVIEEZVFNUXPNTWVWQHHNAMJCXBJSOTYSDZJYHRNWSYOFEJRKLVVXTWRGAXLWJQZFOD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TFBKIBRPXTNFOQXOYRQVSQQNSHCRAMIUBVCHVHJCEFIEIIKXFVTYTMYEXELHFDNUXYQDPBMUTOENCPUIJSLDRFPDAMGCKXPUANWFTGUAZMSEDVEXGDBCDMEJPQBOKLBNBKTLWOKAJAZNYCRMZOAHSKTSIPUOSPNZWJWDHSJDZQHUYGHV");
    tmp_msg_0.predicate.assign("ZDCCPZTERKFUUZTJMKXKEOBMOSWGZMEVWGWMXQWRJLRFJJBIKDGWLPENZIFSXTFEOLVAYQTFIDMVLXIHTPQOXHOBNDDQKBXXRBFUZVICAAVCCSCUGLJUWHTYXDDBZCCJYLNOAKVVKHOIMYNYPBDATUYSYKJAYZIRMMSWNPPBGSPAGIPLBRKORJKEOJFVIFQQWFNMGZPUCULESXQFNZASLDVTSQHL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WZMDORMURXCEIKFWNMFHBXQIHTOKLTKAEUPWNACDDXPUVKUSACDIFICCRBUZZPYQMGQBTZHEQKDMSPOVMD");
    tmp_tmp_msg_0_0.attr_type = 55U;
    tmp_tmp_msg_0_0.min.assign("TLFNUESBDQOSFJAPTGIELCSRVBZVKYXHUQGGLFAGZRYWQXEPYJWTCINENQPSZZDASRUQWXTLIELGIKINUOIUPKTJUFYKJPYIWMXOAVHEPTCECASHWZBNDOODUSKBLDXHFGWRMLECRBTXQHJGYJPPYXEILNDVQYHOQQTCYWMDRNXBFXOMHMLBUAVPWXRISZTSM");
    tmp_tmp_msg_0_0.max.assign("DQEZNVRJYAYL");
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
    msg.setTimeStamp(0.2749631284444326);
    msg.setSource(57635U);
    msg.setSourceEntity(161U);
    msg.setDestination(65426U);
    msg.setDestinationEntity(69U);
    msg.op = 42U;
    msg.goal_id.assign("DBLFBUPIYTUBHSZATKNMXPZPROYKHSUSETVECIUHRLRAGWNPURFGBAAYTLIAGHIMGDCGXEOUOEQXDTLSUBOMYBUFRKMSXFKYOWWWGOSRVZOFXXQZFQVEWMGNIDEVXBNARNTVQISFWJBCAHYQVARNSDUYNJKXTYVVFPCJOSCMCNOQGIPQBKOMJBLQKEHMTDVYNMLZKEZFZDCRPHDZLJGETGCDEYZWCPPPWWMIHATLJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CNWFPEHYINYCFWEFKPJDUILYUVDTLLFFOWSHTAETDRZQMVXKKMBRIQXNVKTPRIWJOYAZNJIFEXKCGDPPSYVTDBRFVEXOORQROUTWJGEKVCWNMLRGAAJZDMKOJCRAXRYAQXOGCPSMSIQXIMQLUEELYSZUSCYKTEGLBZJHNTZWMBQXWBWUTSHNLMVSIBZNLOPWLPOFQGZQVODJGRVPYTBCAVUCUFBIPEXKQADKMSUAHMHFAHGSZZICUBNHYJ");
    tmp_msg_0.predicate.assign("DXZPQLICPJXYFMYDOOXSVYLAUTTYBIKAWGGNDCDWFBZPNAQPSZUTXCUTVLVLTSOLMLBPJPRCUXGPHJUVSBPAKVORXAXUVOQQFNOODAQYVQUAIBYRKTHIYZRTKFHEIYWCHMDKMQTHKCOVRMHVAENXZHJWWJRQHGFNEEBGEZJ");
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
    msg.setTimeStamp(0.18117720453274644);
    msg.setSource(19716U);
    msg.setSourceEntity(161U);
    msg.setDestination(20157U);
    msg.setDestinationEntity(35U);
    msg.op = 226U;
    msg.goal_id.assign("XVWTINUHTBUSZCDSKLIULYMSNTYGNWLJRLEUDYZGLMLDDQPOKXJMZOQAREFCQXBFIKOGACWJQFQHWTZMCPWJJGHYPGEMNMVENTZIKHBKOLPQBVWAERPPRZBFMZOPMXAUDKAVPOCGWPFYCFYBAES");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UXEYJWHYSSUOSLPMDKNMLDLNXPDRJOAQKBJZIOFVYVZGKHDRJCPJEPCDWASKQGGEIZUMDELTYOAQRZXTCGGGXKPAJXWZLQRPYKFIVRIIRPQ");
    tmp_msg_0.predicate.assign("MQNAIEOYZUGZKARCBYBMUTEJMHVDIYRWVFUNDYAZMBFPRCTSET");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XJNKUQAEHNPKZTECHYANOSMRGFFQZTNJHWFWSPAZCHMWIXANCJYQEHYWZOKLXDYZRJVVWSIBJAITZQQXFTJSKBXYLVHTNYEERSULPPGJPBDDOKIKTPUPRZYHMMTDIOBMMXAUSZRGQBTOBDZGGCYESVXLJMFWPNPOUWNZVKMVBUKEGUAHQVUOFEDAPCDIKQEGXLTFHJMWVRGLDNXNQWRLKISB");
    tmp_tmp_msg_0_0.attr_type = 113U;
    tmp_tmp_msg_0_0.min.assign("REUZNFPYTALLYKRNKQK");
    tmp_tmp_msg_0_0.max.assign("GJQXHDGGFFSZQVKKECDGLMMINYYRUADPSUICVVWPDREKALXGAXBHJBKIUQOOTHYUQLMKFBMZYFKTUMYTOAHLVEDARCAQJPMMOSNPYJHUBAGQWVZERIYEITONHOZWNJWXZFLOFFSUUSHTEDRPTDHXFHQLNAOTCR");
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
    msg.setTimeStamp(0.923711233614098);
    msg.setSource(21122U);
    msg.setSourceEntity(200U);
    msg.setDestination(52946U);
    msg.setDestinationEntity(204U);
    msg.name.assign("VYGLWPIITNKGHIQPKWNBMACNHFLHWPVWNRCFVEZAJFESJJASGYGMLRKYB");
    msg.attr_type = 124U;
    msg.min.assign("RHWUBTARHBTXZQVOCGQSCLRDJKVQDAPNWYYJIKLSHRDFAZARUZARBGGPPMBTQODIUTDNFGOIGTYEMTDJVVAXALYJJYODKVHQIBKDSSVVLNIBMWXTRJRWKWMZNCAGAFQLQIELBEUCPZMXHZUSGFCEYWPSSCUULXOEKPKEJWQZNWCIZBUNEPGFDOFCOHBQUHXWNRBEYNGJZDPYYPXCKPQ");
    msg.max.assign("YGYNSTLCJVKOHWOLTTSCQACPBIVPPFHSVMCSKXGQOZHUKKUXMLZAQYCZBAMIBUTEJVNEFBXKTSRYINHJJHHYYOSCGSOWZJNVFTZLJJHVRMFZGNGHZIAPRLOICDRKPXAJXVREFROPULIOIQEQNAURLUCWXVBGDTZDIGWIMFDUDLJQKEM");

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
    msg.setTimeStamp(0.8961895267783283);
    msg.setSource(63041U);
    msg.setSourceEntity(156U);
    msg.setDestination(20940U);
    msg.setDestinationEntity(36U);
    msg.name.assign("HXOGFMMQAIHHAQQAQDDOMCEDVWDFPPRAMSRBQMOMTFUJWVCRSPGRKISYYRPIFWVZJLUUTYYGBFJTTJSEOUHSOAVZXNBPGTACWHGSBLKCEXYJW");
    msg.attr_type = 28U;
    msg.min.assign("BADFYMQXWGKIWJQECTYARBJEVXZPPBLDLAEHHLFKPFQGUEVMVVFLGIYBCWQ");
    msg.max.assign("HTOGFZFNJYICVYJNWTVBITHFSGILBLEHETQSQKKROTRRMJMNIPPKWJGKNYMQWKZDHCMKRUNAWTXFTNGDSUPNUEPIBKDQYGUDANXCOQXFZGHAUNPAAESYIBSHUVSJFISCTYOVEMWYRPBAM");

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
    msg.setTimeStamp(0.7876672731328936);
    msg.setSource(38597U);
    msg.setSourceEntity(174U);
    msg.setDestination(63221U);
    msg.setDestinationEntity(89U);
    msg.name.assign("PEUOVPVFGJDCULATXDOJHKTJGIXERKPNWGROJNWBNXUSVWSXTQJIOMLZAXITPLCKYGYCFDPQVTRGTQUCYSHENXUVHVWARBGKEBMBXMPJXOKSAOYVFKMDFFQOASWZAKIYJIFGCSIEDQYYBHSIUTQECRDMHCKBFTMBLMALPGELYWUBBLUHWMPHZWNLOJ");
    msg.attr_type = 71U;
    msg.min.assign("AGSVOIUHBSXVCBMANTXJALIMNPSHTWCOQNFVFBDTQLKTTAHJUUMUHGFONIYZSNHDFYCGOTKROJYYDUJJAMCGMDEBQTIWGUXNZPPYXTFEBXQZWRIHWVGWOCCDEDWTLHKEKWXJIAVROKEIESRKSLDZVXAMAUHLYRKGSUFCGTQYECBKCWFQMWYPLBEHZXNPASPZZQRKLUQV");
    msg.max.assign("DVXFHUAGZZEOGSAYQMSZZXOCAITCPTEFKJNIEWISNKYNBHTJEAMXGGHSJKWSOEUSQTMBZZXJDXFHPFHOVLSDHBMAQDXMDUPVIDPIENNIUNHXHUBSNFRLKOCLRKRLEROYVTGUIEKCMAYYPQXCRWAYROPDBRROROKWKCQIFAGVILTXGSJCHJQMLTPYKYBEOEUUBCLBQFUCIPQZXTWWFVMFUNMYZVGNDBPWYQGD");

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
    msg.setTimeStamp(0.4478545624329213);
    msg.setSource(47770U);
    msg.setSourceEntity(22U);
    msg.setDestination(27953U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("SPCNIHATGSZDINTFFCSBOPSEXHSCCFIWTXCWQGLDAJBPVZYPAMWHPNGOZUCMWSQBVKLYZZJUHQBNURZYAMQVOGPENHLWHIBRGVUYYYRGEDKACFXYFLKNISSDHJBZDVTVRQTMIREEXFPLFEJDSKOXMRWPGYDNENINBXZQYKJVOMXAXWOOIRTWA");
    msg.predicate.assign("SHZTQNMCTZSJIJHHETRMVFFEUETDDUCKBCCNCFVUMQMOMGZJFZVYQJFVQLMVBSBNGPZNURDIWWKLBVNGCJNQIWRADUOORDAYRNXJREGPELDYSPHCKXITSKWXONYRDOLWJTULISQQMLXTVVMCLNUJFXQYTDYGGBODBRPAOGUZHKYLCDHPZKH");

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
    msg.setTimeStamp(0.17725597980118357);
    msg.setSource(39503U);
    msg.setSourceEntity(42U);
    msg.setDestination(44548U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("ZRZQRSKFXBVLMTPQCSAAERWSVKBXWQJTAOBAHOTQ");
    msg.predicate.assign("ESTLJALEXRFWERZTJIUHKTTZGDJGXBBVYJXNTYCNGZDJPTFAHMWUDIVOEOBJRDHVPCDHCLLBWQYOVSDVLMTCDQOZFGVKRRZHHWVAPYEYQYPXFKGOPNGJAWSBIOYVWCOBDMELMXSJUURHHKWFFWHVWRLAQZQAQZFIPYW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WHQVHVVUSFWOGWHDYQIUUJUIXFDTTJDLKSXOARYHXYFKBMPZXLQXWZEJPCWSLJOOEDROCEIJKTLZZNNFCWVQEEALBKHEGRBDKPDQXVPJSVPQMMPGFCDITUYNORNYGBCFZZHREHCMQYGZJTDVLTKUVWLRSGVBGCCHKAHXYW");
    tmp_msg_0.attr_type = 31U;
    tmp_msg_0.min.assign("XZYUTMADFVYAFQLNQBUCRFCHEPLXHTAIZPVVNOYQDXMLKIYMUGLWLGIDFKUIKFOXYMJCRLYCBXYICOBKEISJHAJTBTSHLSBXSUOSNJMGSJUEMKDDIKXVWGSFHY");
    tmp_msg_0.max.assign("BXQWQDBQMFSAFNIKPHMIHKVVUBAIWTPFUAWFYVSCUXHZNZPXDMNWSTYWZLUPILECBEPZEORKVOLSLCWQSJZAESISNYAFCQ");
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
    msg.setTimeStamp(0.2025184079782686);
    msg.setSource(51049U);
    msg.setSourceEntity(217U);
    msg.setDestination(31984U);
    msg.setDestinationEntity(50U);
    msg.timeline.assign("IMMTTBLUIXEQLUWIOXYCIJAATIFBHLGYOZEVJRKKREZEOMREBVXCNZVAUTSMWHWHXSZLWLYOFFSRPKWPCZVJCRXILFOLXINNJQWWGVKATEXEMKGGHDSAZDQ");
    msg.predicate.assign("RVSNIKZHVHMWGE");

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
    msg.setTimeStamp(0.635713356231557);
    msg.setSource(20810U);
    msg.setSourceEntity(27U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(83U);
    msg.reactor.assign("ITBSCWBDORNGQCLELBOKPRDPRHNWIETOEYAKSFXESJZYQBVLEQGMRCJGPAHREBNULNUXGFUWAKTMZYZKUBCDMGHQPXWUJUYHOFIVVZLZTMNNAWHXEJMPUTFTLVEKSJHRPOXTZXAYMVGYW");

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
    msg.setTimeStamp(0.24359398487853545);
    msg.setSource(8267U);
    msg.setSourceEntity(44U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(245U);
    msg.reactor.assign("DWRCIISJDUHODTIFSLUHDFRWMXQVJHWQCGEHEUSGSLKUAGJNAGJYRDCEUCLUYLQBKONHR");

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
    msg.setTimeStamp(0.40946399978886616);
    msg.setSource(2938U);
    msg.setSourceEntity(201U);
    msg.setDestination(7507U);
    msg.setDestinationEntity(119U);
    msg.reactor.assign("AJYDIIMFJVSHJZYOJHLVHPQEHFQXANHLNETWWGMXMLSQXWJOFKUWBXMFVFOUYBQNGJEWKDQSDLGNDRZUCZKGRTIUEPTVICRARHQWFPMRUNHIFZC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SIFYEZAQXJQBKILYBUIPIKOQZHNYGKFPEKHASLNGBVTRKQAURBYQUAAWUGUXZAHGPMI");
    tmp_msg_0.predicate.assign("QTIRRTTGATENVSOKGKAMWVKBHBZJQUABVGZOYMOTHAPVWRFTNLPEZNTCWCVMESOXSSYFYHHXMLUXIHCGXAUHWMMTLYZJHJOKDBQZDKUPXFPDFSDGVDZZAK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PRQIZMLNFUBGGAAYKPXKVFDUPWNPSUDOLIJBCCTNRKHELXTELGFEXNVXMWKKOBOVWOLTUFXGSPHDQRVIXLHYUOOQZTUFJQPRJQZKGVNAYLMZDHKXBABNHZIOXREBMZSHONZINTAILDMVSKVGEFGDCMEUYBY");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("YQZZRSGXTKRSHDSDRRNFOPPXXUUZXCGJAVROEOMLLUBGASUUGQYLYUHWEUVITMOCJFRHOFZIFPXOZWSGUILDQNFJMVOWTFKAOHDCQMJQU");
    tmp_tmp_msg_0_0.max.assign("SHMCYCHANPKYNEWDLYQQPCBICDUDVBLCJTHRZSBNAUABLSALWQFPJTAIXGSXDCRFMHZKMRXHESAZRVWVTHMPYMMCGZOETHMXSNGGBXDUWJHYQIFWKFRGPLUVIUDRPKZBNNOGFXQYIENHPSGQEOHAEKXAGLMNUITKEZOPEDLCDJQBRTEDZ");
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
    msg.setTimeStamp(0.6340545172914578);
    msg.setSource(3690U);
    msg.setSourceEntity(196U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(139U);
    msg.topic.assign("YUWCADPHAFCDZREGWKBESMTUDGVNKCVTXAKUIDUKPMTUQYOPWNBLCHSMYLRBEIHZDMXHZCPFVQBMN");
    msg.data.assign("DZUINKWEQCBBLRLBIJWOWYIWDTVXEZOYAVWRNYAPEXDOPXPDDHUZKEYBQUIRYZAAXFVNGYNOTQPQSFNDCAUZCWHPTGKYDMMSVKFXMXJOJIMCUGMXNMXZLIMGECQZJFOJKUFPEFGUBLVSVIGDWFNGKJLTHLBCZHJKGTJHCRDGLOLKFDRB");

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
    msg.setTimeStamp(0.5538360057706427);
    msg.setSource(52501U);
    msg.setSourceEntity(244U);
    msg.setDestination(2826U);
    msg.setDestinationEntity(231U);
    msg.topic.assign("DGTFUOJFBAPCFCJZI");
    msg.data.assign("NUPQQHORMKOWPKEJDEEEGPDEYCXQAWUHYSQZAELDZWOXRHOHEIDQWWCWLGYMCATMKFJRXWZKIJSAAVSKOCVUTKUNGEQJBWQXNXNUGZYTUNBCCIYMTVXVUDKQVMSVLXRZVCTT");

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
    msg.setTimeStamp(0.3920978199197066);
    msg.setSource(60854U);
    msg.setSourceEntity(0U);
    msg.setDestination(64732U);
    msg.setDestinationEntity(213U);
    msg.topic.assign("QBREYNFGSFLVZXMIOFZIDKHPUJBEZYHVDSTJGNJQPZOKIBGRAGQKMUFNESXOHACLKMLHSIPKVPQAMCECJYLMWUQZEJDDAJGUXRBXBNYEWAMIATVFOMLHNGQHNRXDPCVSHMKESHDIGBRTBDXIZVEYUWJWDLSVMRFLUYBWLCKKRZOEUMQXOXPXNOARYSSYRKVKILAPDYVGLFWHOAJTCBTCGPQWOTTZXCOINPTWWT");
    msg.data.assign("PUNRCXCGNHXVVIROEERIMPDRMKEQWNISGRFJMUJGFSABXBBGLHQWJMOCYPMJMXCADYYHKDTNSLQDLOFACZRITFWTBWAZITDCXWRJVGISLUIBAACBVYRPDOZZVMLFYSNNBUOXQEBHPAPKMJGHUFGKGWUKTKQSMLQCQX");

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
    msg.setTimeStamp(0.5264832724112645);
    msg.setSource(50855U);
    msg.setSourceEntity(12U);
    msg.setDestination(42720U);
    msg.setDestinationEntity(158U);
    msg.frameid = 14U;
    const signed char tmp_msg_0[] = {76, 105, -85, 68, 72, -42, 26, -65, -120, 6, 28, 110, 106, 33, -64, -95, -126, 15, 61, 13, 102, -72, 26, 32, -112, 58, 51, 27, 21, 106, -26, 62, 24, -32, -7, -94, -46, -95, 37, 44, 58, -41, 76, 87, -13, -80, -116, 22, -128, 28, -48, 118, 18, 55, -16, -44, 21, -60};
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
    msg.setTimeStamp(0.13422476448611698);
    msg.setSource(55749U);
    msg.setSourceEntity(109U);
    msg.setDestination(5618U);
    msg.setDestinationEntity(223U);
    msg.frameid = 107U;
    const signed char tmp_msg_0[] = {-10, -55, -121, 37, 78, 17, -103, 114, -45, 119, 75, -73, 54, -91, -50, 102, -64, 111, 14, -25, 8, 61, 67, -43, -32, 71, 93, -40, 26, 59, -65, -83, 64, -120, -109, -64, -96, 111, 34, -89, 78, 66, 63, 55, -7, 12, -84, 14, 86, -38, 26, 18, 118, -94, 91, -84, -56, -124, 122, 26, -94, 42, -38, -61, 84, -11, -85, 118, 32, -54, -120, 3, 95, 122, -82, 41, 50, -45, -128, -44, -73, -94, 70, 117, -117, 13, -39, 12, -57, -54, -78, -111, 28, -43, -39, 91, -120, -66, -3, -55, 8, 82, -85, -11, 98, 88, 64, -59, -51, 80, 95, 44, 83, 75, -117, -98, -126, 98, 48, 4, -55, 112, 110, -76, 13, -1, 61, -69, 1, -12, 112, 86, -25, 75, 41, -21, -59, -14, 59, -43, 46, -100, 22, 110};
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
    msg.setTimeStamp(0.6032316338509565);
    msg.setSource(2662U);
    msg.setSourceEntity(192U);
    msg.setDestination(28132U);
    msg.setDestinationEntity(252U);
    msg.frameid = 99U;
    const signed char tmp_msg_0[] = {90, 115, 98, 1, 94, 45, -38, -114, 54, 68, 17, 114, 84, 95, -108, -118, -49, -53, 26, -41};
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
    msg.setTimeStamp(0.08397097415489863);
    msg.setSource(8943U);
    msg.setSourceEntity(187U);
    msg.setDestination(14986U);
    msg.setDestinationEntity(208U);
    msg.fps = 108U;
    msg.quality = 123U;
    msg.reps = 224U;
    msg.tsize = 247U;

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
    msg.setTimeStamp(0.29827701654267236);
    msg.setSource(65245U);
    msg.setSourceEntity(15U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(236U);
    msg.fps = 110U;
    msg.quality = 96U;
    msg.reps = 123U;
    msg.tsize = 51U;

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
    msg.setTimeStamp(0.6933076934264824);
    msg.setSource(55462U);
    msg.setSourceEntity(250U);
    msg.setDestination(14545U);
    msg.setDestinationEntity(59U);
    msg.fps = 145U;
    msg.quality = 85U;
    msg.reps = 36U;
    msg.tsize = 140U;

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
    msg.setTimeStamp(0.8583427886837152);
    msg.setSource(913U);
    msg.setSourceEntity(143U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.30041512554930017;
    msg.lon = 0.781738912150894;
    msg.depth = 89U;
    msg.speed = 0.4007635031599399;
    msg.psi = 0.9575398774035754;

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
    msg.setTimeStamp(0.3583740326238709);
    msg.setSource(19573U);
    msg.setSourceEntity(157U);
    msg.setDestination(60389U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.5429503121428501;
    msg.lon = 0.616834965816636;
    msg.depth = 213U;
    msg.speed = 0.705670150357236;
    msg.psi = 0.49207027294656236;

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
    msg.setTimeStamp(0.242007504892075);
    msg.setSource(53537U);
    msg.setSourceEntity(142U);
    msg.setDestination(10633U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.6807520211976047;
    msg.lon = 0.4846927797392412;
    msg.depth = 42U;
    msg.speed = 0.15309899781449066;
    msg.psi = 0.4460074489609286;

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
    msg.setTimeStamp(0.2224551874000118);
    msg.setSource(4289U);
    msg.setSourceEntity(252U);
    msg.setDestination(14868U);
    msg.setDestinationEntity(11U);
    msg.label.assign("DFTXSHWVBMGWTPHSGHFAZJNFSTAEJUVSGEERCSOQVDHJXFYTNRBPDXLLPTWPWIIOLPYRABDWIVSKBMGASUONAJQRYVDBVZZOQZLKXMKHVUIXNXQMATMQTLVRNNWZVCCPGXPWELTYIPVMYBLJUHTPYZYXCHOAHQGKROJCFSKOOUCCNNWKJASBCGUMJDFABXYFEOBNMQNURDWWUZYTSECQKIC");
    msg.lat = 0.8202417783987654;
    msg.lon = 0.23170240502891726;
    msg.z = 0.3445299952652583;
    msg.z_units = 65U;
    msg.cog = 0.9248089055759445;
    msg.sog = 0.6110918566527334;

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
    msg.setTimeStamp(0.4364017054943444);
    msg.setSource(26080U);
    msg.setSourceEntity(115U);
    msg.setDestination(20207U);
    msg.setDestinationEntity(20U);
    msg.label.assign("UMJUPWHECNQFEJPZDHHLLNZBFQYALGJLVNLXSVCQRNOFFGYBLBSWMEBSZLGJQIOYWKCLIIITDOQGHYEYINXMRDPCQXSNOGFMRFDOWMSMQSVDOKEIBITIOYWCKTVTOFGHXJ");
    msg.lat = 0.0613773513811634;
    msg.lon = 0.24767140927343567;
    msg.z = 0.7410364743691187;
    msg.z_units = 84U;
    msg.cog = 0.45377013769769403;
    msg.sog = 0.7172791884219307;

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
    msg.setTimeStamp(0.21604459551297817);
    msg.setSource(50364U);
    msg.setSourceEntity(151U);
    msg.setDestination(34934U);
    msg.setDestinationEntity(226U);
    msg.label.assign("KJDVHPMLKKUYGLOWJGBWARUUTVYBDZLCHIABCSIEGMCBNPRDELWVNUOZOYVOBCJNJZKBTWXBXPYREQSHCQZAFVEPOXFVQNYRMIPIDITMLDEXWRVNLNAKKNOTHCDFAQISPYTOBKZUKAMKEOTMYRHHWYPGQITSMHVGOGJHIWUQSYE");
    msg.lat = 0.6385242382900495;
    msg.lon = 0.36388771674264;
    msg.z = 0.12947551718202033;
    msg.z_units = 79U;
    msg.cog = 0.9137753640288533;
    msg.sog = 0.09594574920229004;

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
    msg.setTimeStamp(0.8634488548355076);
    msg.setSource(33881U);
    msg.setSourceEntity(223U);
    msg.setDestination(39908U);
    msg.setDestinationEntity(56U);
    msg.name.assign("CFCPYMPBAKJJEQAVPJIVRGHMMZZPWUGPLJEMBZQVRHS");
    msg.value.assign("YJSPTCAYYVEIBJCKNGZAJRUGOBHKOLENPOQRYRRTQBKXBYGYQOMKWUZRMNNYOVFLIRTCPQZMGXLSUZUFISGCHJSHEKZHZDCMQLWXESRHZFPJXGGILNHTUSZHWIKFKWCWONEWMPYEFMDIEXQZFQQSFFXSIVIFVYDPQKCTVQTGWATMUTLTIXHXLDGDKDNALUBTARBFDJPLUOVPPJZWEYRCOBASWOSMBGVAUEHCPKJJWAAL");

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
    msg.setTimeStamp(0.27287236463840847);
    msg.setSource(32148U);
    msg.setSourceEntity(133U);
    msg.setDestination(39810U);
    msg.setDestinationEntity(237U);
    msg.name.assign("IUHQBBXVIASJVVCZJNECRBKGZLXRAADC");
    msg.value.assign("ZGKADTMNJIZCELJWXEKEVXYDYNVBAGPRQPVGEOIPSGANRMCTVBLLELDUKTPOLUVSUFLXACKDDIIQECBCWBOUMWTOFFHAYTHSWPBRFJGGIS");

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
    msg.setTimeStamp(0.4328522323144758);
    msg.setSource(32736U);
    msg.setSourceEntity(233U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(35U);
    msg.name.assign("YAQONKAOYUTAUWGZSZXVFTRUBFOEXSTDFXWMXYGZYHWLTSPCOQEQZWLCYPOKUGBCVXSJUCOKCOPDFEGZVDRVWIQQUDRKRHLNMAJCQATDNDNTGTFLKEMXSLIXXTPNDTHGHWXMKHEIRBIDZKQMVVAAVBVNBSIMMHBLQEUJJPFZZNZGDPYJSYFPNILVAJKOCDNPEJHLBLYQJUFICFPEWMKIGHCEUWCRBWUOAJ");
    msg.value.assign("WLYGWZAPAARIBAUCDVNNZYOSVGXUQCZMJXOTODDZHVCNPQYJHZWBRRNQPDAKLZZRKBUGXOFZXSBUM");

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
    msg.setTimeStamp(0.9939034375820892);
    msg.setSource(8076U);
    msg.setSourceEntity(95U);
    msg.setDestination(1612U);
    msg.setDestinationEntity(168U);
    msg.name.assign("PQBIUIBDEXNHARXHJT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MZYDNPQSZQECUGRTCGJIFEJYKINVCAXHWQTUOZODKUXIPBJCAPJNSGVHQVOWWKTMSDS");
    tmp_msg_0.value.assign("IKIBPAEKJLCHXWHOMJQVFRNJBWZPSUDFNXALZIIH");
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
    msg.setTimeStamp(0.29158650353435056);
    msg.setSource(63940U);
    msg.setSourceEntity(93U);
    msg.setDestination(55258U);
    msg.setDestinationEntity(122U);
    msg.name.assign("APPTIRFZGQHRWEZMDVMSPRBQLUGOAFISWICNKEAWTVSTBGOXXFCSPOENUBMLJJBUXDJLXKYHECRBQXUWKXWSCQCMDHDNGOVKYBRGMOWMNXEAIVMNZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YKUJERCZFOX");
    tmp_msg_0.value.assign("QDSIWGHXNKYLYOGALVKRHZGOGNCKCQWAQVCSIJYFOHRVQKZISASMOIVACFVDLCKXUUVTCPCNBYSR");
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
    msg.setTimeStamp(0.37270290898874037);
    msg.setSource(11594U);
    msg.setSourceEntity(69U);
    msg.setDestination(41825U);
    msg.setDestinationEntity(180U);
    msg.name.assign("BQCDHOUSHJWESLCPTMXYDALCQJLKAVFYNEHLOOAWNPUALUBRZYMCLVODXHEAUZKFSTBQFGEVZUQVOJGZGXYSFKQBIMJHDNIWKVJPORVEGOSCFPKESTBUNSXLYTCLNYEWBHJYOONEEXRHITDNMZXMZIJMDRFPMBNZGCGKTZCMGADPIIIVWAIAXRKVWYPGTHSRHQPKHZJJNUOCLPWMQKCUWUJAUIVGYXDBTLRYNSBBPARXQFGVWKDTQR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ULVUWPQDLCOILPATEJBFONRETPBGJRXCYNBHAM");
    tmp_msg_0.value.assign("OCXXLECRAAWQUHRUCHMQKBWGMVSMWCTFMAGYWYEOFCXWNTRPIVJQQAGMFFKGBOUFHUWDPZTAYJLLOSXNIHZHKYCLEQKSYIVDTDSUILNZSKSCTARDLREEUZDDGHWUIAZNFMIJXPSBYCVVWPYZKIPRDSFQBNBOKGGYHOQAXPZPBDUQKOGGCXBZEPEVJEMPSXKHTXHWJENNRLRBTVQFBAXCOUFETJN");
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
    msg.setTimeStamp(0.7183822743965289);
    msg.setSource(44866U);
    msg.setSourceEntity(229U);
    msg.setDestination(37967U);
    msg.setDestinationEntity(173U);
    msg.name.assign("IJLNPWDIOEZUZVXLWHWIZXWFBXSOQAALUTGDRPWQFHOMPBTOBJVBVKAIIMKHSDCXDCDKMZJQJULABZGHCLFJGDPGUIEWFEGCHRRLAALAAYQSBSDBEUWETROF");
    msg.visibility.assign("GHWREGAOQERHXGNIYXEYHKZVJISJFMIPVIAMVLEAJXCLHJPCGTWPCNHLTLFVMWZRIZCHCUVCKXYVD");
    msg.scope.assign("QQDNNTVJIWEKODVBHWYFAEQINPHZKXBRNSXAZLAPFAQPOXWJMARCMPVZUTMWTKNRYLGEINWVBNOOJSCJLRJTAEYHUZDYMXDSTLSOIZXWSMFAXCB");

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
    msg.setTimeStamp(0.1986398909427075);
    msg.setSource(49453U);
    msg.setSourceEntity(130U);
    msg.setDestination(24056U);
    msg.setDestinationEntity(127U);
    msg.name.assign("NXAMFRKQZXQBMUEMZLCRZJYJGNRIHYOBWHIKDTEZJPIESNYKXRGZWBBLWOGOTKLNQTAYBYUKSIUBZTUKXBCVFUDEMY");
    msg.visibility.assign("UCSOQLIGRWXBZYIYHNDNRZMLRMQARBDVIXUDTYTSLBFLOXWBPUOTJHVTFGJZVUVTMNPTEXJDWHFMKSIXNNXCHGNPSTNDASFEAKACLOKMMBLKISRKJYBUVZOFHSYRAITFBJGUWZBGCBPDTWQENHQHGUWPRXYEZKUZYDJQVGFOKLLBQXZIARCIMORKWCNPGECJFEHKFVEVAQDCCQSWTLLEPGAZPZGAHECQMOMDD");
    msg.scope.assign("UVTCYDYEMCQBTRMQVINQLPKKEHTXNSYHUWJFSOYGGSAGMCOTDWXBFVQMIAQKKSJVIGNLJHFLRGENQQFGLVBSPDYMJLRIXPRDKNSXWJCQFHBKKGRYHTAXJKRQOVEFKIIZFBBOUUTMDYRNCUTYLSZUYXXCLVRWBOZDZDPOEIJVACWLHZHGUABWROWMBTGNRPSZFWSIAYAFPZNBUOAAF");

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
    msg.setTimeStamp(0.7334754800838222);
    msg.setSource(49521U);
    msg.setSourceEntity(91U);
    msg.setDestination(55432U);
    msg.setDestinationEntity(174U);
    msg.name.assign("UFWEQXWSFLTRACDXMIQOWNOZLYOSIGETRQSAGBCQ");
    msg.visibility.assign("AENLSFANAORZRFBHRRAMYOTHKCOOFYILUYKSQAHZNLBEIFDPKNLSNXQYRKOABUYXRRTARJWIGBSTGNGIJUUVWVTVBZCODLTQHUQZXKOLSTQMJCKNCPEKMVAGBITHWESNGGYJWRFUMCUTNIVYXXDZLJYGZIFKZWSQMKCNTOYPLXHXGOMTWFPBMHVDALPWCDGSPCWJMSVPSAEZYVCUFHUPIQZWJXXFXODDEQBMEDWQPGEQCBJIVPUIRBEDL");
    msg.scope.assign("RQYXLQGTZQPTRJDSFOWVKLWAHNRKEWXHCFQQWXQOCIZAFUZTOEJDCLKDPGDJHNYNLHPYMEPTDKWHMVUQZGXZMJUFLUPRCPBONSYAUKXAWUYFLIMBZEAJMTZOKNBOJJONSFSKLZIMTIGEVGLNRXXQROAVPAYRZABUWRBMXE");

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
    msg.setTimeStamp(0.2743451640907244);
    msg.setSource(44352U);
    msg.setSourceEntity(178U);
    msg.setDestination(136U);
    msg.setDestinationEntity(86U);
    msg.name.assign("WXUGQQDCMLEQTWSKSFGMZPSJOXDRGDAIUBARBQZNGFONZKDLYCNHKHYRXMYJDCVOP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LCMINAFGXCCWAXZQYHELPZQWQFYCAINPBWKLWVRPJIPQTWHVQKVIOYWLTBSLYKUIGSBNILMKHRFTUAPHRXXDFZNMBBUEDKFEKTRRDTEYIREXHPMNRERZSJVXHDLQUUZJDAYEAJZFMVCVWJWHDUTBKQSGVJUCCICPXMBGUPZDIJTQRUAKFFUWLGXNKGTLNGOAGOOXYOOGVQYHPJKSZBBLSMPTZTOIOSDSFRXJDAVDBS");
    tmp_msg_0.value.assign("YZQKHDAZPLRYCKETFVAZPHDYKGSIVMCBYQFAWXCNUMCKUMOAVACAFLIZMYXIHZUOUEAVVKSZRKWXXUXIBCJSJNXVMSAQTNPTNJQDANBDDKJTQVSOSVEJMMKBJGXDOFDYGYPYMHOWLWGMPPLTHLNISZLZBMNHYFFXQUFPOBSERFIWTDEGNBNQUGLICWUNHRWOPRBAOEC");
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
    msg.setTimeStamp(0.5323226152780339);
    msg.setSource(14725U);
    msg.setSourceEntity(171U);
    msg.setDestination(13464U);
    msg.setDestinationEntity(77U);
    msg.name.assign("GXBPRQQFLFGHEOWXMNDONNOERPUEYGCQNPFTRWIKZBJVANGMNKRDXLURKZVIVCQTAOIMZKJTQWDIAODAQFLVGXPZIHKPSYIMIEBLEVSXNLRYUTGCOEMACQRTHOVTMRUUHYAESGSAXRKBEUALSJOZUGMWETUTQNXCWBCPBFWHYVMCHGLDFBCZAIKYQPLJKXYDZNMCOXSKPISWHSDZZVBFJHTUHPJSE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JYNFOEKXHDMQJLNXGUVVNPVUONQPKUKNADCUXBQIYVFYMTYBDJGMFRLYGSMJJZRCZJDKLU");
    tmp_msg_0.value.assign("ODRGLDSCOUO");
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
    msg.setTimeStamp(0.81451078098524);
    msg.setSource(36765U);
    msg.setSourceEntity(145U);
    msg.setDestination(44460U);
    msg.setDestinationEntity(118U);
    msg.name.assign("PLAWRDSZQFEXFGDBXOTJUPWLCLDYXEMVLCWUQZVDBEQNZKEDUUHBKQBOFIVWKOHQGUEPZCHXTLTELPLZGQWJFIGYTCER");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XFWRNKOELWNQTPXQWJIHEXVQJNBDYPSIBPLMZKMKUEYUFTIIBDVOCBANEIAPWFGNSHBYEYUYMQCCAJGILAXJUKKHLAT");
    tmp_msg_0.value.assign("DCLVWPENNLWHPELZYNHEDCQKYSFEQXPGHOTNOJKCZWRKKOGYETFSCCBPEXMBTWISBNUZRDDDDACUSX");
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
    msg.setTimeStamp(0.8777378572108997);
    msg.setSource(60832U);
    msg.setSourceEntity(152U);
    msg.setDestination(3322U);
    msg.setDestinationEntity(117U);
    msg.name.assign("DVLGSMDTXQCQSTHCUEZKQBMHRWEBGNVOGB");

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
    msg.setTimeStamp(0.029321770706653982);
    msg.setSource(60983U);
    msg.setSourceEntity(4U);
    msg.setDestination(50611U);
    msg.setDestinationEntity(219U);
    msg.name.assign("EQBVKOACDTOALYKPDYGGXQPHGIUOBSILKWCKOTXSCKTOHRPTWMEVMDGVHQGLDALWHMILDNEZBEXESXJKUGPIXXRNWMXGSJQYJCPMBMCCYIFJZCMDQERJOLAZJVAFQNNFBORSVLFUNAUWHNPFC");

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
    msg.setTimeStamp(0.3926182282054268);
    msg.setSource(59288U);
    msg.setSourceEntity(13U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(246U);
    msg.name.assign("YFWJPNIBSYINIMNZGOJKMRHVATBYDRTBDFUBMXRJGUREKLDEKVDONTAUXXEVJOYTEBVSWDZOLIZPJFEOYEKZCCAHQCHSDOLAHWMWWTAALCXCICBYFGEUHYHQRSHTDEQONPLXMJVPQHRVGUUTTNULZVSYIJMPALSIGFNJWFMXGFBPSUKPIE");

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
    msg.setTimeStamp(0.6754681870965316);
    msg.setSource(61163U);
    msg.setSourceEntity(103U);
    msg.setDestination(27696U);
    msg.setDestinationEntity(196U);
    msg.timeout = 2479013162U;

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
    msg.setTimeStamp(0.981613530560423);
    msg.setSource(61142U);
    msg.setSourceEntity(112U);
    msg.setDestination(33709U);
    msg.setDestinationEntity(69U);
    msg.timeout = 2722781928U;

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
    msg.setTimeStamp(0.39778062402367764);
    msg.setSource(61602U);
    msg.setSourceEntity(31U);
    msg.setDestination(37599U);
    msg.setDestinationEntity(225U);
    msg.timeout = 1919674409U;

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
    msg.setTimeStamp(0.5939266020978158);
    msg.setSource(58657U);
    msg.setSourceEntity(240U);
    msg.setDestination(36993U);
    msg.setDestinationEntity(226U);
    msg.sessid = 675541804U;

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
    msg.setTimeStamp(0.01629937249929081);
    msg.setSource(17521U);
    msg.setSourceEntity(222U);
    msg.setDestination(56013U);
    msg.setDestinationEntity(143U);
    msg.sessid = 2776014240U;

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
    msg.setTimeStamp(0.38267942181474046);
    msg.setSource(52721U);
    msg.setSourceEntity(48U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(143U);
    msg.sessid = 2886522634U;

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
    msg.setTimeStamp(0.36759977756059226);
    msg.setSource(42070U);
    msg.setSourceEntity(81U);
    msg.setDestination(8781U);
    msg.setDestinationEntity(13U);
    msg.sessid = 2308838966U;
    msg.messages.assign("NJYSLBCWFUVSNOYCKCFHYKKFRIWDJKNSJQTVPAMYGPDAMCTMUGGEHTRXUOPRB");

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
    msg.setTimeStamp(0.6469724216510631);
    msg.setSource(64789U);
    msg.setSourceEntity(176U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(79U);
    msg.sessid = 3679272461U;
    msg.messages.assign("SMWTCXXYHSY");

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
    msg.setTimeStamp(0.16167813364585037);
    msg.setSource(10206U);
    msg.setSourceEntity(48U);
    msg.setDestination(35458U);
    msg.setDestinationEntity(203U);
    msg.sessid = 2783744338U;
    msg.messages.assign("UQLPMIROANCBJCAYSYUGOBKJQCHGIPVTGXAXPLNFIEOEOQZIMARRWYUTYDTNEYFSRKQKUTROPFRIQMSAJWVSNXUHCKXELCWISQFLKVSMGFAESGWDYHLVJBKUFGFTYGXIPBJQ");

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
    msg.setTimeStamp(0.13652379134333403);
    msg.setSource(61596U);
    msg.setSourceEntity(251U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(165U);
    msg.sessid = 689011998U;

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
    msg.setTimeStamp(0.9903606248559585);
    msg.setSource(37160U);
    msg.setSourceEntity(208U);
    msg.setDestination(41383U);
    msg.setDestinationEntity(106U);
    msg.sessid = 1549647425U;

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
    msg.setTimeStamp(0.1725488226203431);
    msg.setSource(16367U);
    msg.setSourceEntity(201U);
    msg.setDestination(8287U);
    msg.setDestinationEntity(220U);
    msg.sessid = 1232143183U;

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
    msg.setTimeStamp(0.9724174227604534);
    msg.setSource(36897U);
    msg.setSourceEntity(73U);
    msg.setDestination(34970U);
    msg.setDestinationEntity(227U);
    msg.sessid = 2462943220U;
    msg.status = 0U;

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
    msg.setTimeStamp(0.8514890593840456);
    msg.setSource(14383U);
    msg.setSourceEntity(91U);
    msg.setDestination(42970U);
    msg.setDestinationEntity(29U);
    msg.sessid = 3966632976U;
    msg.status = 19U;

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
    msg.setTimeStamp(0.0009439642710676877);
    msg.setSource(38120U);
    msg.setSourceEntity(143U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(139U);
    msg.sessid = 3845506836U;
    msg.status = 209U;

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
    msg.setTimeStamp(0.34118827179558175);
    msg.setSource(4622U);
    msg.setSourceEntity(209U);
    msg.setDestination(41860U);
    msg.setDestinationEntity(245U);
    msg.name.assign("LOMLRVERBAFRQHKJBGVGPCEWTVJUELYLOZYRDPTLKBHTUIWFRXGVYVSEWOIGSSFJQSOFTFGTXNYRHMDIPXCDWJXMOPIYQKUOMPWAREGNHHHAXYELZZXMGZHQXDYEJZKYJNRXBMTSTHZXIUSIHWYCNANTKBLWLAZVIXMEYVQBKMDNJKBUFLZZCNQQVCDJAQVTAFQPVSKAJRKODSPCUFSNGSENBQOUMFJWRTUI");

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
    msg.setTimeStamp(0.47409217105338763);
    msg.setSource(32519U);
    msg.setSourceEntity(69U);
    msg.setDestination(57541U);
    msg.setDestinationEntity(19U);
    msg.name.assign("QZPCHRGBQBYLGHSDSYWGHJZMFZNEMDJPVDVEOOTNCFBZWHJIEIXKRWGGAIBKUHJEONXNIQOBLTRPRFQIHMEVYLPZWYXYUTVBVWTSZOJHPJKNSBFKJGXURUJDMVQBCTLFJXIROOFNIPKTILNPWECMTDSIWQXXYUAHWAXSTCFTMADJEKOLZVQFSMRACHDCULZYQNSCVWAXSKIUDQMORPREBPALYVGPCXZATEEKRFQAYADLNUFHZWDGKNOMULUY");

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
    msg.setTimeStamp(0.6660284845482748);
    msg.setSource(54828U);
    msg.setSourceEntity(242U);
    msg.setDestination(22603U);
    msg.setDestinationEntity(151U);
    msg.name.assign("LJMMXALAUDZZQCXKWHRFHKWYSREPVISYTDQUOFRIDTFMHHEYCDATPGDSAM");

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
    msg.setTimeStamp(0.9457390234164876);
    msg.setSource(55613U);
    msg.setSourceEntity(236U);
    msg.setDestination(30318U);
    msg.setDestinationEntity(235U);
    msg.name.assign("HIIBGBNLQOAUSFPTPSBRXVXDLFPAVDSIXSTHUVIJUKZF");

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
    msg.setTimeStamp(0.32443381706522045);
    msg.setSource(4533U);
    msg.setSourceEntity(137U);
    msg.setDestination(38416U);
    msg.setDestinationEntity(224U);
    msg.name.assign("KYNOKHVUHAEKBSURJJPGIPNXXEWOULDBYMJHNAWCYKEDEFQGGHWTRKQNBDXZXFXPOSXFUZELDMISSICOLEFZRYVXPMLVKDIJWFJJDHSSTBJGIRMNZXMVTSPWUGYZWQYEZNYAMVCAFLTWKLQHYCYCUJKOPNQAFFNAHHCMBBYDGPGFTWRBZPIHVEKQCQR");

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
    msg.setTimeStamp(0.7587558732754791);
    msg.setSource(55687U);
    msg.setSourceEntity(110U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(28U);
    msg.name.assign("KAQWHCFWZYVMGJLPPIWSSUPXOLYNOATZIBXKYUGWGDTEPZNKRIVBLLQDETKCAYUJIHV");

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
    msg.setTimeStamp(0.5343305208835922);
    msg.setSource(39242U);
    msg.setSourceEntity(96U);
    msg.setDestination(1002U);
    msg.setDestinationEntity(82U);
    msg.type = 71U;
    msg.error.assign("SGISAJAHMNYISIPVEMKTTOBCCIASNJUFWIVPIWSKUKQBJQOWXFXYWUTIWGPGOMXSXLLBKFLJOBPDVDYOHFCOSCPWVOHOXZCVEFPQWKFXAUBZCZMJWJRYKIADHEZBCMAFWLQNZTIUYAUBHZBGEZCDJHTRKXZDOXEJYCSGPTCUHRREQJVTGLGZWIYFKLTMNRDRVDAESGNLYVEGGVLBEAQFZDRRBTUNQTXMQHQKEHVKQML");

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
    msg.setTimeStamp(0.6743487155048893);
    msg.setSource(20761U);
    msg.setSourceEntity(217U);
    msg.setDestination(47646U);
    msg.setDestinationEntity(242U);
    msg.type = 149U;
    msg.error.assign("ZBUFCXILKNDRYNYOVJAUUZZCSKAMBQQIAXGJPSJPWMJTONTMUBXFOAWUNIDLUFVTREEPHEAVLDFSMLDYEKQMDYGSURXJAUJZMBNFVCBHXNQLGBFHTWLSYZYZSQZGCQIWQSROXZAPKQKPEIMPCANXQOYKCHOTTBTVBIGSEPPZSCFTDYNLCCSBKWRAGLOKOG");

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
    msg.setTimeStamp(0.43349835005912896);
    msg.setSource(35788U);
    msg.setSourceEntity(243U);
    msg.setDestination(46611U);
    msg.setDestinationEntity(30U);
    msg.type = 241U;
    msg.error.assign("WIHECSPYXFAEAHLGOFQVAAKSSZTIOJPMP");

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
    msg.setTimeStamp(0.2986697195234521);
    msg.setSource(54829U);
    msg.setSourceEntity(172U);
    msg.setDestination(61587U);
    msg.setDestinationEntity(77U);
    msg.seq = 62477U;
    msg.sys_dst.assign("KSNETVFCLBEERDISSWBBXPOBHXXAASUSZTGTFRGTRCUMQQYFMWEGLNVJPFHVPPKYMATDRBOFERJTWAWJVBJPTKLZENAULGKZUWPZ");
    msg.flags = 127U;
    const signed char tmp_msg_0[] = {40, 26, 76, -77, 61, -86, -28, -7, 109, -93, 76, -57, 7, -99, 50, 80, 15, 82, 101, 80, -107, -35, -62, 94, -119, 105, 103, 124, 109, 63, 31, 23, 71, -37, -57, 89, 100, -25, 118, 98, 45, -1, 41, -49, 122, 15, -86, 2, 119, 102, 26, 23, -18, 122, -15, -68, -92, 93, -64, 81, -82, -79, 30, 91, -3, -75, -25, -62, 48, 92, -45, -27, 126, 59, 108, -59, -2, 54, 85, 73, -70, 106, -83, -45, 21, -12, -16, 115, 105, -63, 81, -53, 81, -76, -127, -49, -24, -102, 42, 59, -25, 84, 112, 96, -103, 32, 63, -120, -110, 68, -21, 22, 81, 123, -8, -32, -32, -97, -127, -68, 80, -28, -13, 71, 102, -6, -122, 3, 32, -102, -55, 56, 74, -3, -25, 39, 93, -112, -70, 53, 29, -83, 104, 18, -55, -37, 123, -101, 117, -41, -76, 113, -123, -31, -105, -83, -69, -13, 28, 51, -85, -67, 85, -51, 71, -18, -2, 7, 95, -95, -51, 0, 49, 100, 7, -91, -121, 97, 56, 118, -69, 122, -37, 5, -42, -55, 56, -57, -1, 78, -23, -126, -103, 93, -56, 30, 69, 117, 53, 37, 88, -7, -57, -81, 66, -116, -26, 82, -67, -11, 16, -102, -107, -46, -58, -116, -90, -121, 122, -70, 99, -26, -31, -80, -31, -31, -3, 37, -117, 46, -89, 15, -122, 61, 70, -71, -75, -115, 97, -11, 77, 99, 115, -114, 55, -47, 108, -107, 79, 47, -2, 113, -43, 108};
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
    msg.setTimeStamp(0.2539476735195676);
    msg.setSource(45064U);
    msg.setSourceEntity(202U);
    msg.setDestination(37471U);
    msg.setDestinationEntity(251U);
    msg.seq = 46477U;
    msg.sys_dst.assign("YHHOUPPXMYMJMSNYLVGDSUDHWDPALOBXGNSKZXARWZLUCHXQGBSQFBRKECRMMTZMIYSLZAUMGQRSWWTXTBDCIBESWEMHICNHXFVYNWFLCFBPRCAGZIJDUHDZDDPIYZIXDVVSKYUWYIFWAACKFVFDELSLTTROVEOLQQKNYPUTJZWOLVQFRQXAJXKJCNSRXGHVECOKBIT");
    msg.flags = 202U;
    const signed char tmp_msg_0[] = {17, 78, 116, 37, 63, 123, -112, 67, 12, -81, -23, 24, -36, 73, 41, -80, 113, 67, 67, -32, 73, 94, 13, -77, -106, -16, 43, 68, 109, 73, 78, 34, 74, 121, -68, 31, -12, -56, -79, 20, 79, -54, -103, 119, -24, -48, 83, 116, -50, -74, -89, 66, 57, 2, 40, 24, -112, -79, -78, 106, 118, -69, -57, -113, -47, 111, 6, 38, 66, 77};
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
    msg.setTimeStamp(0.258742185034447);
    msg.setSource(7562U);
    msg.setSourceEntity(63U);
    msg.setDestination(4629U);
    msg.setDestinationEntity(54U);
    msg.seq = 47164U;
    msg.sys_dst.assign("XEUJIOLFNYCDIJQDHPVHOSGZDPMGHRRXRREKMIFYFJCUQDAKFHMTNLOPXYRTIZYWDAULQXCWZQSIZUWJFJPVJMASTYEKRJDPQCXBWSVOENCFOMOTULNZVJXWKNNOSKWTHUASPXELYXGBIQYAHZCWVUFUKHZLOV");
    msg.flags = 120U;
    const signed char tmp_msg_0[] = {95, 11, -20, 42, 61, 112, 58, 42, -47, 101, -97, 38, -60, 22, 23, -78, 18, 2, 39, -123, 71, 97, -1, -30, -78, 43, 42, 28, -111, -82, -42, -90, 64, 14, 43, 114, -116, 116, 57, 108, 109, 68, -30, -47, -94, -41, 32, 1, -102, -11, -104, 86, 66, -4, 3, 15, -41, 32, -45, -118, 100, -44, -97, -125, -13, -75, -90, 2, 17, 0, 99, 89, -105, -60, -5, -35, -36, -122, 21, 24, -45, -81, 81, -122, -103, -100, -39, -100, 95, 122, -97, 21, -76, -76};
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
    msg.setTimeStamp(0.6077793772229481);
    msg.setSource(7827U);
    msg.setSourceEntity(211U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(100U);
    msg.sys_src.assign("GKLBAPAXPXFMNPEWLNDSPOZBTCVKTTGIDQFSYWJGGEIDR");
    msg.sys_dst.assign("JHRIFZQHOUMKMPHALDWSKTZYQDLFZCSFBOWVPVQYLNBBHAOURFGXPVBILPFJNXBXEFWIPNMQSKMWSCTDRJTLWZCCZUAERGMXXLSKJBHRTAEIIMMHIZJNRZDPFEOTVBAFJOEVBCTFZHNMXOAROHCYORAJEYTWIGGQTDEXWSDMWLUNDATYCJGUAXPGPQTMBRNBLQVLSS");
    msg.flags = 228U;
    const signed char tmp_msg_0[] = {-66, 84, -59, -33, -116, -52, -108, 29, 73, 98, -128, 83, 4, -118, 62, 117, -20, 25, -55, -88, 77, 124, -101, 11, -54, -111, 47, 93, -57, 79, -90, -103, 115, -95, -65, -20, 94, 103, 117, -4, 104, 40, 55, -111, 65, 122, -64, 69, 42, 11, 123, 50, 88, 117, 47, 55, 67, 119, 79, -56, 93, 81, 46, 115, -98, 113, 63, -112, -59, -6, -83, -4, -38, 76, 112, -82, 24, 115, 75, -93, 107, 30, -13, 101, -66, 2, -10, 52, 69, -107, 28, 72, 95, -19, 44, -74, -46, -109, 2, -33, 69, -49, -71, -42, -89, 121, -10, 87, 11, 106, -104, -12, -39, 63, 79, 39, 45, -87, 54, 77, 20, -114, 82, -116, 13, 109, -125, 99, 90, 96, 22, 31, 122, 48, -126, 105, 120, -89, 4, 77, -84, -38, -85, 11, 95, -94, 76, 34, 103, 50, -103, -34, -43, -17, -81, -44, -5, 103, 121, 39, -101, -30, -25, -70, 73, 109, -112, -22, 69};
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
    msg.setTimeStamp(0.7466615957620205);
    msg.setSource(40201U);
    msg.setSourceEntity(36U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(9U);
    msg.sys_src.assign("MWZJQAJPWZMJWUKTEMRKPTXUCASOIRHTRVHMWCGSLKXDGNEDISQWEADFELEVVJNBKFQWVCOUUORTHDPAKCVURTDNSDIXVHFHJMIYBKQTZUVTONXFFLRLCBXPOPMQDEXPCWQLNKWHPJSYFRIYIGBBMFIELQHSDRZVHGQVJXVCBALIZUKEENXSIYWASL");
    msg.sys_dst.assign("CRXDLGOTRQBVRQBPJOPRACTYVEPIZIQLPWJMRDNAEVMRUAFHOBCVNNSWJEVQGXUTIAPUTPYCJLFNXTANDKJHJSQDMRDYRFSNPAEOADBOKLKQMEQSXSUHOWIYQZLGYKGVMEGCKWSZHCCTZTUMCJOVXSKZOVZGVYNKWYUKWTQCXIMFIHCUMUMXAJOFGE");
    msg.flags = 139U;
    const signed char tmp_msg_0[] = {-71, -32, -82, 109, -4, -8, -8, -38, -25, -22, -105, -24, -29, -14, 11, 19, 54, -120, 85, 78, 118, 70, 101, -33, -100, -94, -80, 66, 48, -99, 36, 86, -117, 60, 95, -105, 67, 98, 86, 67, -105, -61, 29, -42, 53, 20, -77, 39, 10, -36};
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
    msg.setTimeStamp(0.28179029203703876);
    msg.setSource(64010U);
    msg.setSourceEntity(185U);
    msg.setDestination(62404U);
    msg.setDestinationEntity(154U);
    msg.sys_src.assign("WKBEDWQDVOVCPUCZLEDCWSUVIFDNQXGWPZYJKGCBCQNZOHRFPDRRUIBJXIKGGHNYURAJTSQYLAJINCDLSGMYAMKXFDGBQZMALZBK");
    msg.sys_dst.assign("VQRQVYWTBISWFPFHMPFNCJCARVTAFUJIUUFBINGTHXCOX");
    msg.flags = 248U;
    const signed char tmp_msg_0[] = {86, -2, -97, -37, -2, -44, -42, -121, -66, 122, -29, 114, -25, -56, 34, 39, 90, -7, 42, 110, 15, 40, 23, 36, 53, -26, 29, 66, -14, 81, 62, 0, -54, -96, 115, 11, -103, -46, 119, -5, 66, -105, -109, 111, 69, -93};
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
    msg.setTimeStamp(0.6635306139153356);
    msg.setSource(39208U);
    msg.setSourceEntity(192U);
    msg.setDestination(50792U);
    msg.setDestinationEntity(14U);
    msg.seq = 52002U;
    msg.value = 156U;
    msg.error.assign("JJRTCGTIRIYBSMHUZUOKUPIAVBBELLCDQPNPHQFMHBIULEQVPCNDRSMYOONMYPACJQWNWKTYLGLGKRVFJDFTVBHQXGLQRIKGFIGVDNSAOFWJUEJWSCXGMAXIHUBPXFJXLIKZTKEGQVWZWTREPOBOHHLPBFDYTOAAWVXXYNZNPWFKZDBJROASCKUJNZNXMR");

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
    msg.setTimeStamp(0.1871666528849728);
    msg.setSource(8337U);
    msg.setSourceEntity(248U);
    msg.setDestination(37648U);
    msg.setDestinationEntity(6U);
    msg.seq = 5674U;
    msg.value = 242U;
    msg.error.assign("EDMBRFTMDPGYKBPCIUMARRBAIPZKHFTVYSUWCYBTJRHOQWJYUXVPZHXZRAMXVEFUOPLYGQNGXNNNSNHYYAWYRBXURKBDLFEIVRLEXPCFTSQPKTKLZGQJWVHVBAHKRJONFOZOVJPIZVMJUTLGLAJUJGDQNDXZHEEDKXEMUSSHFJZIZGDNFTAWQLDSBWIGJQDGKEIHWSWCKRQSLAGLITAIE");

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
    msg.setTimeStamp(0.40113625469320513);
    msg.setSource(13876U);
    msg.setSourceEntity(215U);
    msg.setDestination(20509U);
    msg.setDestinationEntity(202U);
    msg.seq = 28670U;
    msg.value = 123U;
    msg.error.assign("HOIHUYLLXPOQINCAFFZBHLZXEBEZXDPDVXECTTOVUQSJINKORBIKTFZUEGRYUWNRNPTQNBZECFKSBMVBHJEFHZHUUFRZJTXPUCEIWWORIJCVASGWDNJIMSSRTESJLOAWGVFRJQWOMGWRKKTQVKYGOVKOPAVPLSLNXXPFYKHAYUBCYWDGMXCKUWXN");

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
    msg.setTimeStamp(0.70089973639221);
    msg.setSource(34760U);
    msg.setSourceEntity(211U);
    msg.setDestination(55458U);
    msg.setDestinationEntity(29U);
    msg.seq = 65370U;
    msg.sys.assign("LCLYEPGSHSHBCIWQVARWWAMUXTXVIBMICIWCMGBRCDLCXURAXIYZHFDGOMPFGYABWWIRQDTAULDYUSYKFVODASZHABLTSPVMXNWCJHRZEYZEQESK");
    msg.value = 0.24555068318038642;

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
    msg.setTimeStamp(0.6587018167899661);
    msg.setSource(23271U);
    msg.setSourceEntity(5U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(119U);
    msg.seq = 26996U;
    msg.sys.assign("TTYVXFUDIDENPNICYJWRHGULGQGDURBJPRUEIBVNVDTMVJJBAVNHCFPJURMQBMEEETNTWXKHRWBQAEOYQFKMVZDGYQUQNHIEONLITGZODMBHFAKXX");
    msg.value = 0.36232927208270205;

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
    msg.setTimeStamp(0.40705323269456384);
    msg.setSource(16606U);
    msg.setSourceEntity(200U);
    msg.setDestination(47783U);
    msg.setDestinationEntity(192U);
    msg.seq = 10431U;
    msg.sys.assign("MYUCODUUFXBNZJLBLSFMFREFGFPYCYTCVKCXHIGINDJUXIMYSVRRNRFMWTBSCE");
    msg.value = 0.8757491674370526;

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
    msg.setTimeStamp(0.940813865705018);
    msg.setSource(40114U);
    msg.setSourceEntity(200U);
    msg.setDestination(54651U);
    msg.setDestinationEntity(29U);
    msg.seq = 28186U;
    msg.sys_dst.assign("BPVQDXWNTNLQMCYJLKUQRLKNLTPXLRNGHBJIUY");
    msg.timeout = 0.46044602734657014;

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
    msg.setTimeStamp(0.19661340537510463);
    msg.setSource(11694U);
    msg.setSourceEntity(32U);
    msg.setDestination(33181U);
    msg.setDestinationEntity(122U);
    msg.seq = 14691U;
    msg.sys_dst.assign("PEKEFICIVIDMVQPECVDTIBCXDMEGXOAKNGOGZXESKYKNIOXDHUZOUGBXWACSLQQRPSHKZFSGXDAFDSJBOOQWRQBVYJDCHXJYYLHURBRYESFWMOSMWTWJGSEHVTZEWGNULLHJZKWYOFTHCIIFKBNPZHTTDMCDJMJABIRUAUSLJRBPTAQQFAAPLPMCQTLNNHVZVQBHRPIPJNYLVEMDNARGMOO");
    msg.timeout = 0.8757634886499643;

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
    msg.setTimeStamp(0.3132907488112372);
    msg.setSource(35923U);
    msg.setSourceEntity(58U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(104U);
    msg.seq = 44021U;
    msg.sys_dst.assign("KAUNFBFBCXIDFFJXUS");
    msg.timeout = 0.668867948188369;

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
    msg.setTimeStamp(0.5968529467806866);
    msg.setSource(30401U);
    msg.setSourceEntity(152U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(191U);
    msg.action = 185U;
    msg.longain = 0.30263899719430254;
    msg.latgain = 0.9990023690015921;
    msg.bondthick = 3451724824U;
    msg.leadgain = 0.6510396840549284;
    msg.deconflgain = 0.09545918630352002;

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
    msg.setTimeStamp(0.3061058191896576);
    msg.setSource(65207U);
    msg.setSourceEntity(15U);
    msg.setDestination(4999U);
    msg.setDestinationEntity(228U);
    msg.action = 51U;
    msg.longain = 0.22224952960614286;
    msg.latgain = 0.9018669596689797;
    msg.bondthick = 4013844086U;
    msg.leadgain = 0.6033326157801094;
    msg.deconflgain = 0.09037702450007501;

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
    msg.setTimeStamp(0.1109025384418606);
    msg.setSource(8458U);
    msg.setSourceEntity(12U);
    msg.setDestination(57023U);
    msg.setDestinationEntity(225U);
    msg.action = 8U;
    msg.longain = 0.01251252229434574;
    msg.latgain = 0.5008018244771473;
    msg.bondthick = 820515680U;
    msg.leadgain = 0.2870884777771262;
    msg.deconflgain = 0.5681516006869795;

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
    msg.setTimeStamp(0.05443520334716423);
    msg.setSource(60980U);
    msg.setSourceEntity(174U);
    msg.setDestination(3170U);
    msg.setDestinationEntity(26U);
    msg.err_mean = 0.7192007094532574;
    msg.dist_min_abs = 0.9686195958378288;
    msg.dist_min_mean = 0.7382576232495517;

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
    msg.setTimeStamp(0.6982693125178054);
    msg.setSource(1128U);
    msg.setSourceEntity(46U);
    msg.setDestination(29074U);
    msg.setDestinationEntity(123U);
    msg.err_mean = 0.10950054159048939;
    msg.dist_min_abs = 0.2991892952044727;
    msg.dist_min_mean = 0.11290260738108504;

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
    msg.setTimeStamp(0.9914843069266361);
    msg.setSource(10754U);
    msg.setSourceEntity(75U);
    msg.setDestination(49388U);
    msg.setDestinationEntity(64U);
    msg.err_mean = 0.8833076593568284;
    msg.dist_min_abs = 0.33710120756325845;
    msg.dist_min_mean = 0.5683056630555975;

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
    msg.setTimeStamp(0.6292224474786713);
    msg.setSource(50249U);
    msg.setSourceEntity(65U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(178U);
    msg.action = 173U;
    msg.lon_gain = 0.6738468863985085;
    msg.lat_gain = 0.83636167130762;
    msg.bond_thick = 0.6823367809776907;
    msg.lead_gain = 0.1535835207370171;
    msg.deconfl_gain = 0.031585053237792926;
    msg.accel_switch_gain = 0.945295115757964;
    msg.safe_dist = 0.4490325502965752;
    msg.deconflict_offset = 0.3261631219617588;
    msg.accel_safe_margin = 0.7890811565168898;
    msg.accel_lim_x = 0.13990618286337075;

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
    msg.setTimeStamp(0.6459444623682628);
    msg.setSource(51319U);
    msg.setSourceEntity(142U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(14U);
    msg.action = 206U;
    msg.lon_gain = 0.4136694697201919;
    msg.lat_gain = 0.2968451852341355;
    msg.bond_thick = 0.571441599012009;
    msg.lead_gain = 0.3191118920582161;
    msg.deconfl_gain = 0.09412277717178319;
    msg.accel_switch_gain = 0.5945506430105789;
    msg.safe_dist = 0.2877055173841875;
    msg.deconflict_offset = 0.4803548893241465;
    msg.accel_safe_margin = 0.2946199635659331;
    msg.accel_lim_x = 0.7344909140353657;

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
    msg.setTimeStamp(0.8694722429673679);
    msg.setSource(46892U);
    msg.setSourceEntity(126U);
    msg.setDestination(10328U);
    msg.setDestinationEntity(21U);
    msg.action = 18U;
    msg.lon_gain = 0.7923273151864924;
    msg.lat_gain = 0.13217068820285727;
    msg.bond_thick = 0.9862516583453657;
    msg.lead_gain = 0.03695516538787991;
    msg.deconfl_gain = 0.4263442684300205;
    msg.accel_switch_gain = 0.19340770540331143;
    msg.safe_dist = 0.7949433518657255;
    msg.deconflict_offset = 0.8999627618160089;
    msg.accel_safe_margin = 0.8965323490906059;
    msg.accel_lim_x = 0.7947104622559178;

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
    msg.setTimeStamp(0.14303993755183286);
    msg.setSource(15894U);
    msg.setSourceEntity(193U);
    msg.setDestination(46978U);
    msg.setDestinationEntity(158U);
    msg.type = 224U;
    msg.op = 12U;
    msg.err_mean = 0.6603230930975399;
    msg.dist_min_abs = 0.963566866348702;
    msg.dist_min_mean = 0.16917287867293218;
    msg.roll_rate_mean = 0.4813631439955265;
    msg.time = 0.7716806554962911;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 240U;
    tmp_msg_0.lon_gain = 0.9914311868519855;
    tmp_msg_0.lat_gain = 0.39126953126524977;
    tmp_msg_0.bond_thick = 0.9702292165363394;
    tmp_msg_0.lead_gain = 0.6233958303169032;
    tmp_msg_0.deconfl_gain = 0.4608818625206619;
    tmp_msg_0.accel_switch_gain = 0.6071592764355523;
    tmp_msg_0.safe_dist = 0.677232828517754;
    tmp_msg_0.deconflict_offset = 0.5866425288227127;
    tmp_msg_0.accel_safe_margin = 0.9935472817192811;
    tmp_msg_0.accel_lim_x = 0.4360977024923336;
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
    msg.setTimeStamp(0.2643414462168243);
    msg.setSource(54481U);
    msg.setSourceEntity(230U);
    msg.setDestination(49546U);
    msg.setDestinationEntity(230U);
    msg.type = 48U;
    msg.op = 67U;
    msg.err_mean = 0.8505544716962661;
    msg.dist_min_abs = 0.6403557242061857;
    msg.dist_min_mean = 0.24332609530371163;
    msg.roll_rate_mean = 0.4906537525972624;
    msg.time = 0.7140325410216398;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 74U;
    tmp_msg_0.lon_gain = 0.9351372763417751;
    tmp_msg_0.lat_gain = 0.46898092441935735;
    tmp_msg_0.bond_thick = 0.7608451930154602;
    tmp_msg_0.lead_gain = 0.1349892908803736;
    tmp_msg_0.deconfl_gain = 0.48092458782289904;
    tmp_msg_0.accel_switch_gain = 0.7951627089913802;
    tmp_msg_0.safe_dist = 0.5044044970942926;
    tmp_msg_0.deconflict_offset = 0.6864834055991994;
    tmp_msg_0.accel_safe_margin = 0.17697064707814691;
    tmp_msg_0.accel_lim_x = 0.8525072295677666;
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
    msg.setTimeStamp(0.7058471666304963);
    msg.setSource(10353U);
    msg.setSourceEntity(247U);
    msg.setDestination(61729U);
    msg.setDestinationEntity(144U);
    msg.type = 188U;
    msg.op = 70U;
    msg.err_mean = 0.8413793024922458;
    msg.dist_min_abs = 0.942060552394975;
    msg.dist_min_mean = 0.05435057247508446;
    msg.roll_rate_mean = 0.47194036154687535;
    msg.time = 0.8785034311970078;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 221U;
    tmp_msg_0.lon_gain = 0.13265308461243186;
    tmp_msg_0.lat_gain = 0.09826587076737126;
    tmp_msg_0.bond_thick = 0.5650380107991851;
    tmp_msg_0.lead_gain = 0.26723067094083164;
    tmp_msg_0.deconfl_gain = 0.955455985734449;
    tmp_msg_0.accel_switch_gain = 0.0229267806926835;
    tmp_msg_0.safe_dist = 0.6328628574489522;
    tmp_msg_0.deconflict_offset = 0.904334751953863;
    tmp_msg_0.accel_safe_margin = 0.11027864598556347;
    tmp_msg_0.accel_lim_x = 0.40312903631055175;
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
    msg.setTimeStamp(0.628641239298159);
    msg.setSource(1832U);
    msg.setSourceEntity(195U);
    msg.setDestination(54703U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.1363756905618504;
    msg.lon = 0.9496467971087728;
    msg.eta = 192294817U;
    msg.duration = 43145U;

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
    msg.setTimeStamp(0.22950782837374506);
    msg.setSource(58994U);
    msg.setSourceEntity(47U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.6667270639150525;
    msg.lon = 0.8846874349913579;
    msg.eta = 1785650159U;
    msg.duration = 32694U;

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
    msg.setTimeStamp(0.8895334984904577);
    msg.setSource(8077U);
    msg.setSourceEntity(112U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.35773578874776935;
    msg.lon = 0.2661943135624959;
    msg.eta = 4170255982U;
    msg.duration = 10000U;

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
    msg.setTimeStamp(0.5179907117450524);
    msg.setSource(5382U);
    msg.setSourceEntity(45U);
    msg.setDestination(9591U);
    msg.setDestinationEntity(80U);
    msg.plan_id = 54459U;

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
    msg.setTimeStamp(0.2672001498275547);
    msg.setSource(58477U);
    msg.setSourceEntity(206U);
    msg.setDestination(37460U);
    msg.setDestinationEntity(87U);
    msg.plan_id = 55805U;

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
    msg.setTimeStamp(0.8401112506103925);
    msg.setSource(50422U);
    msg.setSourceEntity(85U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(18U);
    msg.plan_id = 27646U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9016299000724285;
    tmp_msg_0.lon = 0.4466039861112654;
    tmp_msg_0.eta = 2218060261U;
    tmp_msg_0.duration = 50606U;
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
    msg.setTimeStamp(0.1402628963089112);
    msg.setSource(498U);
    msg.setSourceEntity(245U);
    msg.setDestination(25936U);
    msg.setDestinationEntity(84U);
    msg.type = 79U;
    msg.command = 89U;
    msg.settings.assign("NWAKSQYCSOLTGTWKIJSEXCCAJCRJAAXXEMPWGRWBVRLPBKNZZDPYBFWBJAGSVNHQTDMSBUONLGMDNYDZGHVEGZXRBSQAEQZAUHMQWJTLIESNHOYT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43130U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RODOLAISGFQRXPTRPQRMKXAIIFPKEVBENHTVMIEOQPCILJKOTYNOHKYKLRCSHTYJWWCWZUSDPVZRTXAULQBVSGPYEANEGHJUQJVKFUFSDBWCJMWXRGBHJBOSEUAKBUFICINJLLEZQDFFETCDHAQLEKNWIKGSXFPHNGQNMYBYFIACRMJORSTHCHYYVVXMGGGCVAJCZRBBNMESXAMXWXZXUIMYVAZKDWFWDZGOQMNSDJNTUUUPZVTBYLZD");

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
    msg.setTimeStamp(0.06981447389978668);
    msg.setSource(33011U);
    msg.setSourceEntity(147U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(48U);
    msg.type = 234U;
    msg.command = 45U;
    msg.settings.assign("CSGWRUJLXXMHQDQAQGHOSSZFKWVTEELOUZPJVVBYUQLVEGXRMIDTOSMDRJLEFZAGJUBWFFFCCYQNKABUIDCROBNAXLFAKHMJOJSWNBNLKWOEBWMWLJKUXEZWPHXHKTMYAPJYORXCAEDFCGAKXPWTVTMQYIYZNPSPTIHYNFZLRDBIHLCTPSUQPEHGNRQNAOTVBLCAKWNJOISIGMEOSKNXGVDSFRTGHJIQUQCHDVBZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54624U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9278698020438482;
    tmp_tmp_msg_0_0.lon = 0.4654093549569198;
    tmp_tmp_msg_0_0.eta = 712565419U;
    tmp_tmp_msg_0_0.duration = 46698U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EAOWLJTIFLFPAYBAEZDVQLZDETPKSRYVCRYNWFWZMHIXUOGIOXTIMMEFZOJDTEJCJSUPLBHKSXH");

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
    msg.setTimeStamp(0.11561764398555952);
    msg.setSource(31097U);
    msg.setSourceEntity(31U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(192U);
    msg.type = 16U;
    msg.command = 78U;
    msg.settings.assign("UMKMSFCELKSCZCUKEKBBTNDIZNFTLRTVCWILPXFUISPZIFYADRQIBDFCOOHOQONODWATUKNBPLQJBHGJBARULOPWGEADOVQZULZEZEYTWRCBLNQFUTVSHKQKQJLGGYJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 29004U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2067678621308836;
    tmp_tmp_msg_0_0.lon = 0.09687817849615477;
    tmp_tmp_msg_0_0.eta = 1289973736U;
    tmp_tmp_msg_0_0.duration = 54084U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SXWJWTXUFMIWYTJUXZLJKSUGAKNFAHZAIUCIYYMBCTKFSFTPJBLNNQDCWPBJELNCLAWLQPGGMBTFJVUAGNCDNRPYZNXEOGGAXPLYVKRHKHJRUQWMFHDIYILAZKCZFBPORNZUXRQPJSECAUTCOEVMBGFIWOVSBH");

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
    msg.setTimeStamp(0.5372244442669524);
    msg.setSource(49920U);
    msg.setSourceEntity(128U);
    msg.setDestination(60614U);
    msg.setDestinationEntity(244U);
    msg.state = 52U;
    msg.plan_id = 10294U;
    msg.wpt_id = 194U;
    msg.settings_chk = 50785U;

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
    msg.setTimeStamp(0.4677739436072663);
    msg.setSource(43952U);
    msg.setSourceEntity(168U);
    msg.setDestination(62596U);
    msg.setDestinationEntity(43U);
    msg.state = 190U;
    msg.plan_id = 5620U;
    msg.wpt_id = 19U;
    msg.settings_chk = 52771U;

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
    msg.setTimeStamp(0.5173367902598527);
    msg.setSource(25879U);
    msg.setSourceEntity(136U);
    msg.setDestination(58900U);
    msg.setDestinationEntity(176U);
    msg.state = 80U;
    msg.plan_id = 36800U;
    msg.wpt_id = 91U;
    msg.settings_chk = 31065U;

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
    msg.setTimeStamp(0.3764002239690195);
    msg.setSource(14073U);
    msg.setSourceEntity(28U);
    msg.setDestination(54895U);
    msg.setDestinationEntity(2U);
    msg.uid = 238U;
    msg.frag_number = 61U;
    msg.num_frags = 239U;
    const signed char tmp_msg_0[] = {77, -44, 24, 95, 99, -74, 94, -89, -73, -121, -55, -53, 109, 122, -128, -23, -18, 115, 101, 16, -24, 8, 20, -29, 36, 20, -3, 2, -29, 16, 69, -110, -34, 12, -106, 111, -100, 30, 119, 15, 9, 47, -97, -71, 68, 71, 16, -54, 75, 59, -21, 35, 97, -28, -6, -69, -126, 68, -65, 78, -15, -86, 52, -29, -3, -93, -7, -42, 8, -56, 39, 25, 23, 121, 41, 30, -18, 19, -83, 1, -111, 30, -76, -5, -56, -16, -92, 124, -7, 6, -78, 62, 4, 66, 13, -111, 13, -127, 44, 123, -28, 6, 31, 111, -82, 43, -123, -111, 106, 124, -77, -48, 101, 23, -90, 84, 62, -57, 74, -32, -103, -86, -43, -88, 100, 55, -99, -31, -20, 31, 22, 70, 109, 32, -63, -50, -100, 63, -31, 56, -32, 60, -34, 107, -95, -73, 47, 9, -73, 109, -94, -92, 115, -9, 95, -73, -54, 99, -33, 7, -73, 55, -119, 85, 117, -95, -118, -33, -79, -127, 5, -45, -57, -46, 42, 26, 111, -45, -33, 85, -108, -37, 113, -111, -50, 97, -89, -123, 124, -4, 26, 55, -123, 14, -55, 4, -96, -2, 18, -33, 71, 105, -72, -125, 30, -96, -32, -45, 41, 58};
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
    msg.setTimeStamp(0.5514100585817399);
    msg.setSource(4029U);
    msg.setSourceEntity(248U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(61U);
    msg.uid = 217U;
    msg.frag_number = 148U;
    msg.num_frags = 196U;
    const signed char tmp_msg_0[] = {-106, 29, -38, 105, -12, 106, 118, -38, -31, 97, 19, 116, -7, 20, 85, -52, 43, -1, -17, -66, -44, -92, -8, -124, -21, 119, -48, -13, 68, 123, -41, 126, -78, -123, 5, 32, 97, -82, -98, -21, 119, 69, -51, -80, 56, -122, -28, -18, 36, -121, 30, 48, -109, 111, -17, 52, 40, -6, -8, -88, -8, -84, 27, -126, 8, -48, 93, 3, -103, 45, -38, -111, 73, 49, -17, -97, 107, -125, 79, 1, -35, 105, -119, 113, -119, -103, 44, -11, 101, 94, 94, -119, 51, 3, 32, 124, 51, 50, 103, 5, 16, 26, -113, 109, -95, 29, 23, -11, -50, 126};
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
    msg.setTimeStamp(0.5233975269787059);
    msg.setSource(40986U);
    msg.setSourceEntity(56U);
    msg.setDestination(21130U);
    msg.setDestinationEntity(111U);
    msg.uid = 144U;
    msg.frag_number = 144U;
    msg.num_frags = 192U;
    const signed char tmp_msg_0[] = {62, -102, -65, -8, 55, -36, 111, 116, -61, -10, 58, 109, 37, -101, 26, 81, -128, 3, -49, 89, -2, 82, -110, 15, 30, -44, 0, 9, 110, 2, 94, -98, -23, -50, 115, -86, -24, 79, -34, 11, -49, -82, -30, 86, 8, 28, 81, 111, -56, 62, 61, 37, 115, -37, -3, 73, 46, 67, -8, 77, 120, -102, 9, 120, 76, -108, 72, -73, -28, -47, -121, -32, 33, 91, 50, 110, -122, -104, 73, -42, -112, 28, -37, -92, 12, 124, -9, 67, 81, 96, -67, 120, 55, 27, -48};
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
    msg.setTimeStamp(0.8741601010162654);
    msg.setSource(1863U);
    msg.setSourceEntity(50U);
    msg.setDestination(43436U);
    msg.setDestinationEntity(193U);
    msg.content_type.assign("GBZOMFXTFEGOVMHODQWJKVPMEXKJNDBLBHIONBTIBJETLQBHSPIMQRYLJODUGZMEADWJFQAFZCSAKSQRGTWJOKTDXERGSKSFMHTAARLYCQHCOINFTZBMSCPUGKNHLZKOZYTJASVQDNACXDNRREUQBFFUGRYKZAYXGPACYWAXCKQCIOSHBXULWVTPEPBYSICGVPPNNIHWUFERVREEJILZUXUYVCNMIHLZKLPVOIJWVLWYYMXHQTMWGXFZ");
    const signed char tmp_msg_0[] = {80, -115, -121, -23, 12, -33, -54, -63, -84, 99, 0, -117, 56, -103, 74, -66, 66, 59, 66, -70, 52, -97, 75, 33, 52, 45, 121, 32, 27, -53, -78, -118, 77, 90, 122, -34, -115, 48, 12, 39, 14, 106, 16, 109, 8, 115, -111, 94, -26, -128, 16, -84, 125, -92, -74, 115, 104, 94, 30, -127, -28, -89, -128, 3, -102, 84, 86, 101, -78, 7, 116, -113, -21, -68, -34, 84, -3, 15, -62, -37, -14, -92, 121, 55, -28, 116, -87, 95, -11, 104, 37, 48, 4, -35, 97, 105, 120, 92, 80, -128, 111, -86, 15, 18, -8, -106, -81, -44, 12, 10, 11, -60, 21, 73, 13, -111, 29, 106, -64, -83, -66, -50, -118, 111, 67, -74, -73, -121, -35, -21, 36, -6, 69, 14, -64, -23, -74, -7, 49, 94};
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
    msg.setTimeStamp(0.4571905624198176);
    msg.setSource(58138U);
    msg.setSourceEntity(107U);
    msg.setDestination(62172U);
    msg.setDestinationEntity(41U);
    msg.content_type.assign("SRRRLMCASNTDDJWZNKDHJHPDPDXCDJKOODYNYMQPWKIVOFLCZHQEGDNIBFGHQSQHLHPYCTWCHCQCAIZPJUFKUGBOJYHMEINKSBBVEGPEWXUVRHYOZX");
    const signed char tmp_msg_0[] = {-26, 71, -26, 122, 27, 24, 18, -23, 103, 40, -10, -15, -8, -103, -53, -112, -126, -18, -27, -16, 74, 77, -97, 117, 91, -11, 88, -111, 84, -69, 71, -80, -119, 107, 10, -117, -121, -67, 122, -63, -123, 47, -11, 43, 68, -8, -117, -52, -14, 124, -114, 10, 67, -18, -105, -18, 85, -57, -26, -12, 48, -27, -74, 103, -35};
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
    msg.setTimeStamp(0.6180193369222052);
    msg.setSource(20172U);
    msg.setSourceEntity(36U);
    msg.setDestination(55225U);
    msg.setDestinationEntity(99U);
    msg.content_type.assign("RXPJOADVIAUPVRKFGVEPNULUVJMUQHYZWTYZWFHOZKNMAPWJREIOSLGBYXFDEFIZAEFB");
    const signed char tmp_msg_0[] = {35, 70, 83, 63, -30, -68, -56, 83, -116, 93, 59, 59, 116, -103, -30, -40, 58, 11, 6, -109, 126, -73, 123, 29, 9, -62, 79, 80, 124, 84, 71, 24, -94, -95, 16, 13, -49, -100, 99, 27, 24, 36, -39, 42, -10, 49, -50, 60, 96, 77, 105, 84, 83, -87, 24, -120, 44, -93, -60, -100, -81, 5, -24, -97, -43, 90, 18, -89, -50, 14, -73, 74, 84, 51, -38, 123, 113, 106, 116, 1, -83, 76, 123, 72, -8, -36, -106, 65, -12, 46, -65, 2, 110, -65, 45, 119, -69, 83, 78, -21, -35, -58, -41, -42, -54, 87, -106, -100, -75, 80, 93, 85, -57, 104, -13, 59, 22, -118, 84, -21, 20, -34, -126, 28};
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
    msg.setTimeStamp(0.09615268017181666);
    msg.setSource(20045U);
    msg.setSourceEntity(46U);
    msg.setDestination(47265U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.928063466811585);
    msg.setSource(62222U);
    msg.setSourceEntity(149U);
    msg.setDestination(27503U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.28487799671070835);
    msg.setSource(14614U);
    msg.setSourceEntity(184U);
    msg.setDestination(45405U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.4795772130475462);
    msg.setSource(17610U);
    msg.setSourceEntity(65U);
    msg.setDestination(20886U);
    msg.setDestinationEntity(162U);
    msg.target = 47882U;
    msg.bearing = 0.9295088187420956;
    msg.elevation = 0.13238985233225753;

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
    msg.setTimeStamp(0.02324432824608058);
    msg.setSource(34393U);
    msg.setSourceEntity(209U);
    msg.setDestination(56841U);
    msg.setDestinationEntity(83U);
    msg.target = 3900U;
    msg.bearing = 0.5321995263316286;
    msg.elevation = 0.20133518756453317;

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
    msg.setTimeStamp(0.2948482779989072);
    msg.setSource(11903U);
    msg.setSourceEntity(50U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(142U);
    msg.target = 64832U;
    msg.bearing = 0.3808451005960851;
    msg.elevation = 0.876350180543488;

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
    msg.setTimeStamp(0.9146736265439009);
    msg.setSource(58035U);
    msg.setSourceEntity(91U);
    msg.setDestination(34870U);
    msg.setDestinationEntity(231U);
    msg.target = 12974U;
    msg.x = 0.37004959411071014;
    msg.y = 0.9244965555387606;
    msg.z = 0.4370723664226762;

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
    msg.setTimeStamp(0.10320836310802617);
    msg.setSource(33673U);
    msg.setSourceEntity(148U);
    msg.setDestination(1923U);
    msg.setDestinationEntity(170U);
    msg.target = 18422U;
    msg.x = 0.15589049666754617;
    msg.y = 0.32998519314646557;
    msg.z = 0.9285475365083122;

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
    msg.setTimeStamp(0.889707096534679);
    msg.setSource(40168U);
    msg.setSourceEntity(152U);
    msg.setDestination(4061U);
    msg.setDestinationEntity(143U);
    msg.target = 64926U;
    msg.x = 0.8860849938105648;
    msg.y = 0.27863020551460693;
    msg.z = 0.44037695091509854;

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
    msg.setTimeStamp(0.7190950299800426);
    msg.setSource(28856U);
    msg.setSourceEntity(87U);
    msg.setDestination(40812U);
    msg.setDestinationEntity(186U);
    msg.target = 18059U;
    msg.lat = 0.6839386985167981;
    msg.lon = 0.5509325566974917;
    msg.z_units = 91U;
    msg.z = 0.7942571944854387;

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
    msg.setTimeStamp(0.465580618432201);
    msg.setSource(27123U);
    msg.setSourceEntity(54U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(195U);
    msg.target = 24861U;
    msg.lat = 0.6872181837348956;
    msg.lon = 0.8642065078583311;
    msg.z_units = 17U;
    msg.z = 0.7901210006646519;

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
    msg.setTimeStamp(0.16760258854673038);
    msg.setSource(29116U);
    msg.setSourceEntity(63U);
    msg.setDestination(11528U);
    msg.setDestinationEntity(88U);
    msg.target = 34695U;
    msg.lat = 0.827433669055899;
    msg.lon = 0.10275038473515974;
    msg.z_units = 43U;
    msg.z = 0.668820032243643;

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
    msg.setTimeStamp(0.8551822406824511);
    msg.setSource(34108U);
    msg.setSourceEntity(58U);
    msg.setDestination(52148U);
    msg.setDestinationEntity(10U);
    msg.locale.assign("YOGAKCLYWVBALJXECLDHYGBNZSAHKTZPVVEUXJSCERHEFSFTTRUULCYVMZMUKVMQVRPXPKKQVQWJGMIWHJKJCZZNGBBRHTAFVSXBWERCDGITBPFSNKGNBORSOSXQSNTHULDOFOKLHULLNXUGZNFRIRNNSVIOVAXWRPGDXLESNATZLXPZCWPBQDIGZIKMIIEDXQOPAQMWYPMFQMJJYZJYWACCUAFYTFBTDEDUJAKPOWEO");
    const signed char tmp_msg_0[] = {-127, -21, 69, -1, 92, -127, -98, 4, -87, -1, 66, 64, -78, 63, -50, 31, -4, -26, 94, -122, -10, -64, -25, 108, 90, -107, 28, -36, -69, -29, -79, -47, -82};
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
    msg.setTimeStamp(0.9315550891026605);
    msg.setSource(17540U);
    msg.setSourceEntity(73U);
    msg.setDestination(15217U);
    msg.setDestinationEntity(208U);
    msg.locale.assign("RKZAFXEYDGLIYYIBADOTOJGTKHRNEMSVTTALJFUDFCZCGICXOFILUEYWFURGXMDYKKSXAGCPIESVJZPNYYVBSEOTBBVXKKNAIALHOYQTPOVOETMMGINNOELWNVVJQRPYIHXWGGOTNQ");
    const signed char tmp_msg_0[] = {22, -87, -118, 87, -57, -119, 24, -46, -22, -109, -103, 25, -2, 75, 112, 93, -43, -86, -111, 101, 10, 59, 93, -51, -67, -92, -113, -105, 120, -14, 97, 105, -81, -98, 121, 25, 23, 60, 73, -62, -20, -128, 111, 70, 43, -103, -1, -63, -118, -75, -94, -80, 126, 107, 0, 34, -4, 70, 85, -118, 126, -115, -4, 82, -32, 17, 24, -86, 62, 70, 1, 28, 86, 121, -115, -120, -94, -85, 80, -67, -28, 73, -100, 109, -5, -16, 117, 115, 86, 123, 27, -43, -21, 2, 106, -101, 33, 123, -99, -82, 103, 9, -69, 126, 109, -48, 100, 19, -33, 75, -105, 56, -73, 35, -57, 81, 74, 121, 33, 38, -34, -57, 3, 63, 5, 72, 10, -39, 29, 122, -57, 105, -84, 106, 93, 62, 71, -32, 120, 12, 106, -49, -75, -56, 53, 39, 115, 37, -22, -8, 92, 20, 48, 44, -126, -30, -12, -50, -95, 31, 67, -39, 86, -41, 112, -43, -103, -27, -108, 84, -32, 87, 71, -38, 46, 93, -115, 23};
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
    msg.setTimeStamp(0.8622389251939221);
    msg.setSource(40437U);
    msg.setSourceEntity(93U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(68U);
    msg.locale.assign("OWCQLBNLFSIYRCVPNOGHGMHMBUUIROGHCSDVEKAZHQHPNTUFJGJAIBPUAAXVQZEKZMZAQNNUNWRYLSAZKAXCHYRSPYRDGGPBKVCBFIIIRBAMXZUVREXCWDALZXFWYLEYPAHSKXYGEQHVBSMKJOTZUMQVMUNFTZEKQVBPLEPOJTODXTLXMOTQCGDCRNSDFJWCQM");
    const signed char tmp_msg_0[] = {-23, 18, 98, 100, 44, 46, -74, 90, -89, 109, 28, 35, 113, -90, 19, -103, 108, -68, 122, -95, 9, -82, 43, -32, 85, -40, -125, -15, 121, -18, -97, 21, -91, 27, 82, -113, 60, 121, 113, 32, -28, 115, -112, -57, 43, 83, 15, -69, -85, -2, -97, -6, -118, -111, 83, -12, -59, -52, -104, 17, 125, -108, 125, -45, -16, -41, -118, -10, 0, -75, -52, 11, 98, 68, 7, -4, -27, 101, 109, 50, 45, -124, 52, 58, 28, 98, -60, -3, 12, 35, 84, -58, -51, 112, 67, 29, 111, -120, -74, -125, 96, -42, 0, -98, -27, -103, 87, 114, -45, -36, 85, 53, -19, 99, 105, -38, 88, 20, 114, -18, -104, -37, -84, -31, -26, -9, 110, -55, 2, -112, 17, -30, 121, 31, -87, -59, -64, 113, -105, 46, 14, 32, -21, 76, -124, 121, 46, 64, -17, 103, -113, 61, 2, 104, 119, -27, 105, -57, 107, 33, -97, 5, 102, -51, 47, 70, -75, -17, -115, 67, -22, -12, 116, -85, -28, 13, 79, 51, 49, -69, 1, 116, 84, -34, 69, 25, 47, 102, -71, 32, 6, 90, -59, 63, 9, 45, 95, 3, 122, 11, 24, 77, -92, 38, 76, -123, -93, 0, 90, -65, 105, 122, 71, 74, -91, 18, -74, -89, 117};
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
    msg.setTimeStamp(0.5307734611013204);
    msg.setSource(8384U);
    msg.setSourceEntity(13U);
    msg.setDestination(30608U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.8888369144055083);
    msg.setSource(45890U);
    msg.setSourceEntity(233U);
    msg.setDestination(61799U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.11126659654342574);
    msg.setSource(9841U);
    msg.setSourceEntity(149U);
    msg.setDestination(59492U);
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
    msg.setTimeStamp(0.6874689497229833);
    msg.setSource(37221U);
    msg.setSourceEntity(249U);
    msg.setDestination(3558U);
    msg.setDestinationEntity(107U);
    msg.camid = 109U;
    msg.x = 43640U;
    msg.y = 30015U;

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
    msg.setTimeStamp(0.0010022303906126462);
    msg.setSource(35398U);
    msg.setSourceEntity(57U);
    msg.setDestination(45233U);
    msg.setDestinationEntity(130U);
    msg.camid = 79U;
    msg.x = 22208U;
    msg.y = 11141U;

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
    msg.setTimeStamp(0.41077716085744);
    msg.setSource(29572U);
    msg.setSourceEntity(241U);
    msg.setDestination(51768U);
    msg.setDestinationEntity(40U);
    msg.camid = 103U;
    msg.x = 51753U;
    msg.y = 58002U;

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
    msg.setTimeStamp(0.005313739008725893);
    msg.setSource(30260U);
    msg.setSourceEntity(233U);
    msg.setDestination(26022U);
    msg.setDestinationEntity(126U);
    msg.camid = 65U;
    msg.x = 48467U;
    msg.y = 62886U;

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
    msg.setTimeStamp(0.8216803037474036);
    msg.setSource(20941U);
    msg.setSourceEntity(9U);
    msg.setDestination(19876U);
    msg.setDestinationEntity(43U);
    msg.camid = 77U;
    msg.x = 26848U;
    msg.y = 31493U;

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
    msg.setTimeStamp(0.9729838960611992);
    msg.setSource(37168U);
    msg.setSourceEntity(190U);
    msg.setDestination(39187U);
    msg.setDestinationEntity(181U);
    msg.camid = 28U;
    msg.x = 4752U;
    msg.y = 55117U;

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
    msg.setTimeStamp(0.9340195820907982);
    msg.setSource(64443U);
    msg.setSourceEntity(166U);
    msg.setDestination(27271U);
    msg.setDestinationEntity(147U);
    msg.tracking = 201U;
    msg.lat = 0.8833478922017023;
    msg.lon = 0.8679895835644849;
    msg.x = 0.017407501130396685;
    msg.y = 0.47854700513112214;
    msg.z = 0.814645057103212;

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
    msg.setTimeStamp(0.4896088131599885);
    msg.setSource(26124U);
    msg.setSourceEntity(46U);
    msg.setDestination(7032U);
    msg.setDestinationEntity(65U);
    msg.tracking = 95U;
    msg.lat = 0.2924311932722843;
    msg.lon = 0.9839761852976073;
    msg.x = 0.625357114691106;
    msg.y = 0.26757961925342577;
    msg.z = 0.474790088416273;

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
    msg.setTimeStamp(0.595500641378524);
    msg.setSource(255U);
    msg.setSourceEntity(121U);
    msg.setDestination(44965U);
    msg.setDestinationEntity(186U);
    msg.tracking = 5U;
    msg.lat = 0.2011273278600555;
    msg.lon = 0.23241737376454452;
    msg.x = 0.3977088469788388;
    msg.y = 0.6477948913082939;
    msg.z = 0.4649809239331726;

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
    msg.setTimeStamp(0.4851113496958078);
    msg.setSource(15614U);
    msg.setSourceEntity(108U);
    msg.setDestination(43400U);
    msg.setDestinationEntity(188U);
    msg.target.assign("TZNYSMTSLZSAZWBKFZVJHMDXGOIHUWTXTDQXEPRLMUZIJUGIKEGWWWBXHKCQVVWYWONOBASUJPPODJMUVSMQSONTXJPFPETQLFDRBJTALXNLSYNXYBDMLPFVDCANUFYKKANBVCEGACDRVHIGQRSYMZRZEPVHUGPPYFIZSLUSVEEXQJTNEBRNMIIOUORHF");
    msg.lbearing = 0.29525051193728935;
    msg.lelevation = 0.06608988736896171;
    msg.bearing = 0.5199274116882578;
    msg.elevation = 0.9434497648195663;
    msg.phi = 0.04647530872992067;
    msg.theta = 0.8633187380374779;
    msg.psi = 0.18772012469191335;
    msg.accuracy = 0.48004562214144275;

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
    msg.setTimeStamp(0.03469526415949076);
    msg.setSource(6599U);
    msg.setSourceEntity(87U);
    msg.setDestination(42182U);
    msg.setDestinationEntity(208U);
    msg.target.assign("VGHKAUHEPKADAQEWCOIDMRIXXGGRXTWHMDQDNKJYVBJHIZFIWDGQFWHZTBSTBDMCMRJKFAGGFBNVSQJZSPCQLLPKQRVUBPVEROYNTURXOILZNUEDAXWR");
    msg.lbearing = 0.36423355544640645;
    msg.lelevation = 0.3513569920053823;
    msg.bearing = 0.38940311005562145;
    msg.elevation = 0.217412446937285;
    msg.phi = 0.6658705425303469;
    msg.theta = 0.8460043623418427;
    msg.psi = 0.2210286663892177;
    msg.accuracy = 0.7105538117436582;

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
    msg.setTimeStamp(0.9661705925991172);
    msg.setSource(3929U);
    msg.setSourceEntity(94U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(203U);
    msg.target.assign("AWXOUQTDUGLGUZTVENZRGOBCDHYZZEIMRPOZAFDUJIJIDEKOQFHRAMLPGSJQCUICJMXQBHPTRQBKLKVLGRWONPNOFCZYTHRIIHABIPQSOUNOQYEFURBPDYSYXHATKLFNRSJWCHAVESWAKNMWIWXXQGREWTBMUTEXVILDTJJXNOCMKQZKMJMLDACEDFVUYENTPHBKSAHFBPVJGNIFWS");
    msg.lbearing = 0.6239366239337077;
    msg.lelevation = 0.5264094989463233;
    msg.bearing = 0.11645087859589598;
    msg.elevation = 0.4115068170612217;
    msg.phi = 0.8281980938565282;
    msg.theta = 0.08211560987063471;
    msg.psi = 0.8026515638269545;
    msg.accuracy = 0.9900306437983224;

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
    msg.setTimeStamp(0.37940933493602014);
    msg.setSource(65144U);
    msg.setSourceEntity(21U);
    msg.setDestination(35620U);
    msg.setDestinationEntity(51U);
    msg.target.assign("AQGJYLBAOYBKIGULQQKSQTCFJQGYGNBPSKBPFHUBAELIZYNZTGFHOSJXPQNCAVJEUZFRABLEOSIPVGFWRTHFOTPDDTNVOSMIYLUBJONMCWXDJEJZDRPKZOFECNGMMMKBPKVMHURWGXSHLOWAJRDZWKPORPAFSHRKEZIHKTXXSHRYCUJAHBBIDTDESCWUEDQMZJVVXAPCLIUSNCXYMNDLFVUGZCNTFEGLWVZOURICV");
    msg.x = 0.9481776423857968;
    msg.y = 0.368873710237705;
    msg.z = 0.3165983055168723;
    msg.n = 0.5329935251889385;
    msg.e = 0.14739165027922463;
    msg.d = 0.35650252819525374;
    msg.phi = 0.47845847955969345;
    msg.theta = 0.09241375608930757;
    msg.psi = 0.7174725997423768;
    msg.accuracy = 0.34570298679173284;

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
    msg.setTimeStamp(0.22086242226311947);
    msg.setSource(58458U);
    msg.setSourceEntity(78U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(132U);
    msg.target.assign("TBQSKFKASTNMJKWELKGYNLRAUWEGDZVBHIZR");
    msg.x = 0.6664459323926373;
    msg.y = 0.828545993191013;
    msg.z = 0.31332506190112885;
    msg.n = 0.6764373787858894;
    msg.e = 0.5719848613491588;
    msg.d = 0.4638910725051081;
    msg.phi = 0.05103337761340654;
    msg.theta = 0.42378376653695105;
    msg.psi = 0.8046485930772762;
    msg.accuracy = 0.016524617487531756;

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
    msg.setTimeStamp(0.710923746665346);
    msg.setSource(51596U);
    msg.setSourceEntity(69U);
    msg.setDestination(54004U);
    msg.setDestinationEntity(70U);
    msg.target.assign("XNRDPFIXGSQIZLRXTM");
    msg.x = 0.7203631946321412;
    msg.y = 0.9146276820807395;
    msg.z = 0.15414203910172497;
    msg.n = 0.5252486924461626;
    msg.e = 0.6955205080693474;
    msg.d = 0.48590285616385676;
    msg.phi = 0.835581927528942;
    msg.theta = 0.9741575597646452;
    msg.psi = 0.2526865861788983;
    msg.accuracy = 0.3329593369692049;

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
    msg.setTimeStamp(0.20561075668606787);
    msg.setSource(8262U);
    msg.setSourceEntity(62U);
    msg.setDestination(15351U);
    msg.setDestinationEntity(136U);
    msg.target.assign("LVNJCWANLZPIHDAORAHJWUQGKRZVBCIUUYXCJFOIMFKLILVNQGDGFFDNOXHGTNUQLEQHWAESWTMNEBCZYUJRJALSSKHDSZDFUQLOACJVXOUZECZKSRYBIJKHYGXSCEIQG");
    msg.lat = 0.9076960736012996;
    msg.lon = 0.0824003355300148;
    msg.z_units = 206U;
    msg.z = 0.5741061172750384;
    msg.accuracy = 0.6512164518560507;

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
    msg.setTimeStamp(0.6812639460441787);
    msg.setSource(16171U);
    msg.setSourceEntity(81U);
    msg.setDestination(7813U);
    msg.setDestinationEntity(219U);
    msg.target.assign("LZVWXWDCHFEAJBHOVDDJBGJQSHXBFJHHDGXZCJGSPZKAPRRUKOUVSBGMBEEYQOBTHKBFNQYMJYIGRLSUHOYJBJHDXORVSRQAENCRMFLTWEMLZPK");
    msg.lat = 0.8176565162774302;
    msg.lon = 0.131420417688483;
    msg.z_units = 59U;
    msg.z = 0.8471562991998758;
    msg.accuracy = 0.23117835623596705;

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
    msg.setTimeStamp(0.008276019467967188);
    msg.setSource(33023U);
    msg.setSourceEntity(206U);
    msg.setDestination(34668U);
    msg.setDestinationEntity(143U);
    msg.target.assign("YDXIXWYUGGWRUYVOXQESCLQEAUJKHYNTNYGPJKAVBVVQUAFWKPFEUYJZEBMLPRNNVLTJJQOFCUTXPQCDSYGSCMMPBALMRKWMKIBKPWMZNHEHSQZOITNZTLYOOHUKRMRSNXJFGGGJFVXETCIPZWIGBLQCOLUAIAPHFRLJNWADTCBTZEDMHRGDMWUFHURAFESPIKVIZDCIHBREZEYWTQJGVKMNXISJAXQHFCVVWZSTSCBBSQNLODDOLBODKHRYZO");
    msg.lat = 0.19064707842496575;
    msg.lon = 0.11874934771192192;
    msg.z_units = 4U;
    msg.z = 0.8813924084108581;
    msg.accuracy = 0.6621164354478384;

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
    msg.setTimeStamp(0.8316675849370148);
    msg.setSource(16216U);
    msg.setSourceEntity(161U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(135U);
    msg.name.assign("WJOLWCYPKYUTFXZHWXLTCTGWUNMVZTLZHOBYIIRLNDRIPQZVHSQURZC");
    msg.lat = 0.8970439645347519;
    msg.lon = 0.9812140138764416;
    msg.z = 0.6430991248791978;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.0650046839214945);
    msg.setSource(13846U);
    msg.setSourceEntity(90U);
    msg.setDestination(53518U);
    msg.setDestinationEntity(240U);
    msg.name.assign("XBGFXWHFASSQJLQWHHIXHLMSUSGOMTYNFXVZYRRSGDUMBCKQKCADUYPLKEKILYFNRGUVLVMVJREJVUFHKONANKLDYYBMPTZGOOIGQXCAEZQLGCYPWDZTEHVIBQKQGPIWAAZ");
    msg.lat = 0.460849224055934;
    msg.lon = 0.16980819566221483;
    msg.z = 0.9451542635677584;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.8781856567363274);
    msg.setSource(46024U);
    msg.setSourceEntity(26U);
    msg.setDestination(18229U);
    msg.setDestinationEntity(135U);
    msg.name.assign("OBEZRUDMVCIUAFOWHLAQWDPXLYUCVDPBWJCVTPMEUVRRPRFTNXQFODAAHKNQTGDPIULBEDBNZKZNNPLVNAFEGCGSIWVWEESIWXQBFIQOESKOPIVIEKXXPTFNAYBUMWOFACRHIVGNBZOJLYHDYYGRBGQYRALSCLQZQCXEHMRSDJMBHQRZZJTFHJOYZJGHIUVJJMMLMOKWJFNUSMCPCMTXTSOGLXNQTHKGXKUBTUSGYJHRXYL");
    msg.lat = 0.5957505676226761;
    msg.lon = 0.5866975370432245;
    msg.z = 0.7593588859009783;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.28598067003144034);
    msg.setSource(15160U);
    msg.setSourceEntity(32U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(127U);
    msg.op = 19U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RJZSHZIXYADUXVHOYVFTM");
    tmp_msg_0.lat = 0.6604511908866554;
    tmp_msg_0.lon = 0.17428300899925342;
    tmp_msg_0.z = 0.7143368124134738;
    tmp_msg_0.z_units = 154U;
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
    msg.setTimeStamp(0.7620016809485454);
    msg.setSource(1137U);
    msg.setSourceEntity(12U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(117U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.1017577909794688);
    msg.setSource(44031U);
    msg.setSourceEntity(87U);
    msg.setDestination(28110U);
    msg.setDestinationEntity(82U);
    msg.op = 69U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GKHFPMWMFRHMHNVFXWPKRRBMTCDPMIONLNUENRIOFSYWCRVZLDDLUWPYIKEFCZOIKWEGQECDRTVNCXTFDXURGOOSAHASZZCBIYBCLMBXMHMBYICPYDNVVHZYWZYOXEQJXTRXPPTJKARFGPNIINOUKPFMWNUZLTBQGWIZEYBEDXYFHECS");
    tmp_msg_0.lat = 0.2910334801161102;
    tmp_msg_0.lon = 0.6544228341351205;
    tmp_msg_0.z = 0.5214340914188749;
    tmp_msg_0.z_units = 245U;
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
    msg.setTimeStamp(0.523232503720809);
    msg.setSource(18499U);
    msg.setSourceEntity(182U);
    msg.setDestination(30855U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6746036736596609;
    msg.type = 112U;

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
    msg.setTimeStamp(0.4217550976457112);
    msg.setSource(56622U);
    msg.setSourceEntity(127U);
    msg.setDestination(35212U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6055280149504275;
    msg.type = 2U;

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
    msg.setTimeStamp(0.1291770708915606);
    msg.setSource(39102U);
    msg.setSourceEntity(149U);
    msg.setDestination(50333U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8576150890338883;
    msg.type = 254U;

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
    msg.setTimeStamp(0.9649471272941267);
    msg.setSource(58738U);
    msg.setSourceEntity(98U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(99U);
    msg.value = 0.05967812700163866;

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
    msg.setTimeStamp(0.07762626077331025);
    msg.setSource(21737U);
    msg.setSourceEntity(89U);
    msg.setDestination(27956U);
    msg.setDestinationEntity(76U);
    msg.value = 0.01612862807100157;

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
    msg.setTimeStamp(0.7225787107568777);
    msg.setSource(9505U);
    msg.setSourceEntity(46U);
    msg.setDestination(22247U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7738487947214513;

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
    msg.setTimeStamp(0.6826551775692975);
    msg.setSource(22965U);
    msg.setSourceEntity(30U);
    msg.setDestination(47067U);
    msg.setDestinationEntity(167U);
    msg.timestamp_last_service = 0.36593896721096;
    msg.time_next_service = 0.7521467753100733;
    msg.time_motor_next_service = 0.695893033901988;
    msg.time_idle_ground = 0.06807447987985704;
    msg.time_idle_air = 0.8809179397205128;
    msg.time_idle_water = 0.8409293367182613;
    msg.time_idle_underwater = 0.11052261234272753;
    msg.time_idle_unknown = 0.6735279533115355;
    msg.time_motor_ground = 0.04590398268455942;
    msg.time_motor_air = 0.5355144234567165;
    msg.time_motor_water = 0.15877700326231337;
    msg.time_motor_underwater = 0.9666970146998879;
    msg.time_motor_unknown = 0.24626945755385332;
    msg.rpm_min = 15591;
    msg.rpm_max = -28987;
    msg.depth_max = 0.46175686055881404;

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
    msg.setTimeStamp(0.6964628921350401);
    msg.setSource(48749U);
    msg.setSourceEntity(230U);
    msg.setDestination(52978U);
    msg.setDestinationEntity(204U);
    msg.timestamp_last_service = 0.7046371282373071;
    msg.time_next_service = 0.6721021583552437;
    msg.time_motor_next_service = 0.7519745794507385;
    msg.time_idle_ground = 0.9184517666502774;
    msg.time_idle_air = 0.8923848840366073;
    msg.time_idle_water = 0.6365592879000374;
    msg.time_idle_underwater = 0.1623697991345756;
    msg.time_idle_unknown = 0.01108513723323612;
    msg.time_motor_ground = 0.7217053927407058;
    msg.time_motor_air = 0.623165990918233;
    msg.time_motor_water = 0.20775780217926254;
    msg.time_motor_underwater = 0.7103822791428975;
    msg.time_motor_unknown = 0.07472006405942;
    msg.rpm_min = 1541;
    msg.rpm_max = 8353;
    msg.depth_max = 0.053296098870798336;

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
    msg.setTimeStamp(0.5904693706208187);
    msg.setSource(62140U);
    msg.setSourceEntity(121U);
    msg.setDestination(14530U);
    msg.setDestinationEntity(190U);
    msg.timestamp_last_service = 0.5658698123706162;
    msg.time_next_service = 0.7483546231441428;
    msg.time_motor_next_service = 0.4714848343850744;
    msg.time_idle_ground = 0.002375690520634688;
    msg.time_idle_air = 0.2332056283371251;
    msg.time_idle_water = 0.03160384416865758;
    msg.time_idle_underwater = 0.1429609956483786;
    msg.time_idle_unknown = 0.10903462441449208;
    msg.time_motor_ground = 0.8782060967624626;
    msg.time_motor_air = 0.09200786598727118;
    msg.time_motor_water = 0.6185765539478623;
    msg.time_motor_underwater = 0.18795738427158903;
    msg.time_motor_unknown = 0.6741420852694946;
    msg.rpm_min = -16268;
    msg.rpm_max = -21835;
    msg.depth_max = 0.23880839436782797;

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
    msg.setTimeStamp(0.3836164860366007);
    msg.setSource(48717U);
    msg.setSourceEntity(133U);
    msg.setDestination(45662U);
    msg.setDestinationEntity(58U);
    msg.severity = 221U;
    msg.text.assign("WPFLBEXYBSZIUXGLYADQVCRASXRHKJWBHKRNIFPHTMAUHHQCYOLQNAPJEKTHSRWSHOGUMIUFDTYWQM");

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
    msg.setTimeStamp(0.7064825161206724);
    msg.setSource(59624U);
    msg.setSourceEntity(233U);
    msg.setDestination(55163U);
    msg.setDestinationEntity(97U);
    msg.severity = 18U;
    msg.text.assign("GRXDMYBBDGRMIZWALOKANQDVUJEXLICCIZMIDVWIVPJCFOTZLLYHPSOGFSKHMXRQNTTAWYPHLENDUITIWABOJSGPOENZTRHPXIYOJUAXFEWXREPYINUC");

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
    msg.setTimeStamp(0.9625863501807939);
    msg.setSource(64665U);
    msg.setSourceEntity(185U);
    msg.setDestination(16097U);
    msg.setDestinationEntity(28U);
    msg.severity = 62U;
    msg.text.assign("SOIVOWUNBRSWKBLUEAHIEZYBFXBHARHJCCLPWDTYJKGZJNDDDYPNAUJVTBEBFYNPFHKZVXNQSYIZHYTRMHMZTZLKQIVGNCGSEQOMGDYFRKFRWZXWLENKTUMZAIAJPQCGEAFDTJHUKZXRAPMXVLHIYFCCQSIWXBGITGUZPOWMLWK");

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
    msg.setTimeStamp(0.5517281821579929);
    msg.setSource(50544U);
    msg.setSourceEntity(174U);
    msg.setDestination(13242U);
    msg.setDestinationEntity(134U);
    msg.channel = -127;
    msg.value = 650088890;
    msg.gain = 225U;

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
    msg.setTimeStamp(0.9975620929343347);
    msg.setSource(17411U);
    msg.setSourceEntity(233U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(173U);
    msg.channel = -97;
    msg.value = -880163815;
    msg.gain = 198U;

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
    msg.setTimeStamp(0.14745849473338735);
    msg.setSource(39577U);
    msg.setSourceEntity(89U);
    msg.setDestination(13027U);
    msg.setDestinationEntity(245U);
    msg.channel = 84;
    msg.value = -1905321827;
    msg.gain = 74U;

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
    msg.setTimeStamp(0.13779349054089884);
    msg.setSource(44261U);
    msg.setSourceEntity(40U);
    msg.setDestination(14284U);
    msg.setDestinationEntity(59U);
    msg.ch01 = 0.0647377335902225;
    msg.ch02 = 0.8454830380062959;
    msg.ch03 = 0.8542206764038248;
    msg.ch04 = 0.7874416569373647;
    msg.ch05 = 0.23022697008600213;
    msg.ch06 = 0.5647262866494489;
    msg.ch07 = 0.1035793587009799;
    msg.ch08 = 0.5469221008305575;
    msg.ch09 = 0.23040512494268306;
    msg.ch10 = 0.29477253942761983;
    msg.ch11 = 0.8060881925434473;
    msg.ch12 = 0.21684718986273732;
    msg.ch13 = 0.9492507941247624;
    msg.ch14 = 0.8893138346017401;
    msg.ch15 = 0.1595293165772821;
    msg.ch16 = 0.8707238240374366;

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
    msg.setTimeStamp(0.5263783982100688);
    msg.setSource(42745U);
    msg.setSourceEntity(123U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(187U);
    msg.ch01 = 0.7540570245320855;
    msg.ch02 = 0.5416586361841975;
    msg.ch03 = 0.8620202699641016;
    msg.ch04 = 0.9704273447053253;
    msg.ch05 = 0.47435681594833523;
    msg.ch06 = 0.6800496554249723;
    msg.ch07 = 0.6936494740318626;
    msg.ch08 = 0.29290652969664044;
    msg.ch09 = 0.08437977671348396;
    msg.ch10 = 0.7149943045933257;
    msg.ch11 = 0.3005110696904052;
    msg.ch12 = 0.9395783302713572;
    msg.ch13 = 0.035013993580539915;
    msg.ch14 = 0.538393377854817;
    msg.ch15 = 0.12718244934220746;
    msg.ch16 = 0.5747776953208281;

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
    msg.setTimeStamp(0.5820499564867275);
    msg.setSource(53953U);
    msg.setSourceEntity(122U);
    msg.setDestination(40828U);
    msg.setDestinationEntity(220U);
    msg.ch01 = 0.5251565380581339;
    msg.ch02 = 0.6519787126921694;
    msg.ch03 = 0.9516402566140661;
    msg.ch04 = 0.6021183704541861;
    msg.ch05 = 0.7906642382356841;
    msg.ch06 = 0.87991148183824;
    msg.ch07 = 0.24713123803368198;
    msg.ch08 = 0.7591930238234382;
    msg.ch09 = 0.13964978058157973;
    msg.ch10 = 0.5336691227597399;
    msg.ch11 = 0.234414183858486;
    msg.ch12 = 0.11006787085404468;
    msg.ch13 = 0.35455530476084585;
    msg.ch14 = 0.6554687864384038;
    msg.ch15 = 0.7889956272210198;
    msg.ch16 = 0.8248122419787229;

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
    msg.setTimeStamp(0.2036044558288883);
    msg.setSource(57058U);
    msg.setSourceEntity(190U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(170U);
    msg.op = 35U;
    msg.lat = 0.7293378904496117;
    msg.lon = 0.7781556241310142;
    msg.height = 0.11736845023838205;
    msg.depth = 0.8960488214722397;
    msg.alt = 0.7520047526752723;

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
    msg.setTimeStamp(0.2629915457766132);
    msg.setSource(18190U);
    msg.setSourceEntity(222U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(21U);
    msg.op = 174U;
    msg.lat = 0.9560319043530433;
    msg.lon = 0.2790596249569638;
    msg.height = 0.006063590285083853;
    msg.depth = 0.7642557511625107;
    msg.alt = 0.23036746871005187;

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
    msg.setTimeStamp(0.5115452380889002);
    msg.setSource(61351U);
    msg.setSourceEntity(188U);
    msg.setDestination(38560U);
    msg.setDestinationEntity(66U);
    msg.op = 25U;
    msg.lat = 0.46543567408800257;
    msg.lon = 0.5723654973035996;
    msg.height = 0.034369417092508736;
    msg.depth = 0.18174960732988954;
    msg.alt = 0.9063503424395516;

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
    msg.setTimeStamp(0.46489366813621236);
    msg.setSource(37012U);
    msg.setSourceEntity(84U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.5793762173940863;
    msg.speed = 0.1088445260517733;
    msg.turbulence = 0.29594994514982464;

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
    msg.setTimeStamp(0.30314140364482745);
    msg.setSource(11014U);
    msg.setSourceEntity(10U);
    msg.setDestination(10085U);
    msg.setDestinationEntity(209U);
    msg.direction = 0.6831601438995505;
    msg.speed = 0.9659689125601681;
    msg.turbulence = 0.8067722878859207;

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
    msg.setTimeStamp(0.700493603620023);
    msg.setSource(2659U);
    msg.setSourceEntity(180U);
    msg.setDestination(35887U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.845615089426815;
    msg.speed = 0.33533869364074154;
    msg.turbulence = 0.9597242827573358;

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
    msg.setTimeStamp(0.6314001527486867);
    msg.setSource(49496U);
    msg.setSourceEntity(236U);
    msg.setDestination(56694U);
    msg.setDestinationEntity(243U);
    msg.msg_type.assign("FZUXXPSZRYB");
    msg.sensor_class.assign("YOLIBWXBPQSHHPAGICZLIQNQNROAYKZAIYPXBRTIOIWFZNGWWKUUDOVVFYSWKJAMNPOTQOZZYWOGYQCTSLZHEWDVTNKLCSAKFXPLRHJFCVMSGVLKYLGNUUFGCDDFMDXHMIDZYGENXTOTFLBAQCLFUPIGTREWHOKJHCPAEQSSUJAZBIWFXTQBVNDCXTGMVMUUKRXUKBJEVLHESXVZOHYWCJUCENEXNGRPAJVTFMARZYMSSDRPD");
    msg.mmsi.assign("ACULRAFYBZVMWUWTTCHSDFDPTRKGGKVSNVMNLUTYXHAPYVDMHRBIDKONXZPGJYNGAIPELQEQCYCPWCWSJQZOSKNVBXEQKCXNKGEFPHTYGWIDADLXWLZZGEEJQPOHJAWNZBJOULZAXFVUSNLOVVYIJEAQRQMBWQZJAUFFBSCGIRFSAXJBQKKDNZKFRCMPCZXJLFBXOIIPLV");
    msg.callsign.assign("GNYCYYRSHTFIHKXPQHIPJDEWSAGLCDXAFUEGGWFRDCADBBGRLHDPKCFIVUNREQVWIZCYXCOFMQMXHJSGLGVMEZIQSHMPXMFVWRVHSMIEBDEAAWCWLYRBMOTXJZFQKRKWXZVNSDTNPQCB");
    msg.name.assign("ASXNICAWOXMLOJUFNEPPQNSMLFGTEKPHSCPZETXEZYYHTYLBRWKIHOCMYQGCXEDPACLAIBWUIBWZLCFNWWROGACYMZIHHDTJZAEJCUKYKWDLXYJFJLFBGQHQTVMRNXUEZKBCVAABQUUHGHQQWHOLGMDKNRMKVQODMSFOMPRTUYVSGJJUVGNRQOBGWBSDQIVADSYBYPONGIWU");
    msg.nav_status = 137U;
    msg.type_and_cargo = 119U;
    msg.lat = 0.04987802162308852;
    msg.lon = 0.7850393629943831;
    msg.course = 0.8964555208449277;
    msg.speed = 0.6372006858973572;
    msg.dist = 0.10060151772927406;
    msg.a = 0.6313381216972301;
    msg.b = 0.7388877654374645;
    msg.c = 0.7980583073082612;
    msg.d = 0.30671497580819995;
    msg.draught = 0.7810165886190461;

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
    msg.setTimeStamp(0.07056406125612436);
    msg.setSource(22180U);
    msg.setSourceEntity(172U);
    msg.setDestination(58056U);
    msg.setDestinationEntity(184U);
    msg.msg_type.assign("YDIQRNYPKWKMTXIBLBOXHWCTHR");
    msg.sensor_class.assign("FTMXBPCQCGCGTFLCVRCNPPIAQRJJJYJRHNVJNSXOYEVHJADEPZBBNXVHT");
    msg.mmsi.assign("OGCXNFCQQSINHCECGOTSWLMLIATKUSXDZDVWNJGDUFBAZVLQEMVQDSESMFQOYEUCKEXOGMLANMXWQXZJAWVZBCNFHIYPGWOPOLLGHGLIPKOVTBGQCGABTHUDBTPSISYPNVNTYBYVZLFJMHMEEABKHRKMNRDUWAVLJAQFHVUGPSRVZBOJMTUDFAPXEOR");
    msg.callsign.assign("JACSLZKUEOAYKMJYTODHVVBNNBRCXZHOSIYGASC");
    msg.name.assign("LDORAVDSUUHJMCFGWFVSMLJDGGQBBBEXUIPZS");
    msg.nav_status = 66U;
    msg.type_and_cargo = 245U;
    msg.lat = 0.9544138210854135;
    msg.lon = 0.3937274114089281;
    msg.course = 0.5837963171403092;
    msg.speed = 0.8418137021824685;
    msg.dist = 0.8738988400480969;
    msg.a = 0.24539334110220368;
    msg.b = 0.11465158016583155;
    msg.c = 0.1199453178813209;
    msg.d = 0.8831954459052261;
    msg.draught = 0.3294751403450401;

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
    msg.setTimeStamp(0.18230065194033163);
    msg.setSource(1570U);
    msg.setSourceEntity(252U);
    msg.setDestination(42124U);
    msg.setDestinationEntity(157U);
    msg.msg_type.assign("KBMHDEBZYRWRWYOPRCYLHGKHQFNDOUQGGGCAFOYPXYVMSUCRMAGBHCMYTNSJMSOUSZPATTVTQJBKJGGWZ");
    msg.sensor_class.assign("TYPYBLBUDEZUAAWJOEHLRJNHAQHKNLCSVXPMITVDYUTWRGOLXLSICIOZJLDWIYFAZDPLKOZZYJECWUWJHSVSSAWRJLHWUDHBYCKHXYKBMXIIQGCQLQIYTLUBSVQMVRCQBOXDKJGTTEURFCGOMJEAMFADGXOZCFZSEKSNCCVREKDRFZDFVZEFWAUPXNEQVKTRGNHRADOG");
    msg.mmsi.assign("BTJYIULCUXRVJNTLNKX");
    msg.callsign.assign("BZKIPDSSDARHDCEEXNZFHQOJNIBMZCDOGGUYDAUNEOZRJKDYMOSICYRVJSGYHWXDZHFVQHWUPEXYTJGFUFTBLISQAAPEDLHTLGOMURCIQKXIZVJJQHPURUZAT");
    msg.name.assign("AAVEHPMXJZUOBNNBLRDBZDEVVWHANMHSEYYJJRQYPERO");
    msg.nav_status = 84U;
    msg.type_and_cargo = 79U;
    msg.lat = 0.5875864080391323;
    msg.lon = 0.13187754843758015;
    msg.course = 0.006815917824659512;
    msg.speed = 0.8413466004720055;
    msg.dist = 0.8160519565139532;
    msg.a = 0.4024504983960926;
    msg.b = 0.17717400978788966;
    msg.c = 0.4044832876557981;
    msg.d = 0.7246264713018308;
    msg.draught = 0.6324723465655427;

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
    msg.setTimeStamp(0.607179623221659);
    msg.setSource(9838U);
    msg.setSourceEntity(239U);
    msg.setDestination(22508U);
    msg.setDestinationEntity(177U);
    msg.depth_at_loc.assign("LVIABYXZARQZVUUUOKZQSCZAGM");
    msg.danger.assign("CHVOYUMIJGXZFUZXZWCKTPUIJJCGNMWALFZFMPYKYOSLOLYFAZELGFTNPWLIZKTMNFGLIJKKOJMDCEARJEQPDUQRASRUOMDGXHLCGSYCQCQYKVDNAVQSBWHBLBHBXXPQUNLEWHRZPVTOYIBJBDPBQVCZBUHVOWRTUFPLATDNEOMX");

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
    msg.setTimeStamp(0.595560043451752);
    msg.setSource(50957U);
    msg.setSourceEntity(184U);
    msg.setDestination(43678U);
    msg.setDestinationEntity(177U);
    msg.depth_at_loc.assign("NKBLPIBBVFZQKINKXIHZTQQUVBIAHLTTTCBVHYWLGPNCVOSXSOILCJMTRZDQFUKCJDJERJWVXDMMJDPXBUXYBAAKD");
    msg.danger.assign("XCYWPROPUYTCQSZLZQNVUMUTOCWBIEOFCIJRGOYKWPJXIXNKBI");

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
    msg.setTimeStamp(0.7670963303234406);
    msg.setSource(30585U);
    msg.setSourceEntity(16U);
    msg.setDestination(2891U);
    msg.setDestinationEntity(203U);
    msg.depth_at_loc.assign("RXOBWFNZLCPGVTOLXRSOCKFKKPRZKPYIDGCAAGAYLZCPVGJFTWEAVSHGBEUBBRXCQRFQVFTQXQZOQYVGTOMMMZIHMWPNDWGZPCIDKBQKWTTILYDEGLHBVFWTHPHSE");
    msg.danger.assign("OETMYRCFGUZHKELFDMRULKYKUVKLYGCLHUQZJWBTWIOQGXULOTFIEDSIWFHSQEBNHQNGUTAVZOZKMYFOQVCTRXRRGVBJJJCLQJDZWVNWVHABUSUQYIBTHBAAZTOJZWBMOQLFMXGVIIMODYITORSXKPTKDBDCIFJLLVFDZSTMYPWEJPKCHXW");

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
    msg.setTimeStamp(0.4887178627790364);
    msg.setSource(10703U);
    msg.setSourceEntity(20U);
    msg.setDestination(11083U);
    msg.setDestinationEntity(153U);
    msg.time = 0.5615888602978366;
    msg.x = 0.016309713256981495;
    msg.y = 0.1423398214797852;
    msg.z = 0.8626109193900863;

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
    msg.setTimeStamp(0.22723785748722714);
    msg.setSource(42699U);
    msg.setSourceEntity(250U);
    msg.setDestination(64804U);
    msg.setDestinationEntity(25U);
    msg.time = 0.8285327583559634;
    msg.x = 0.46726870184809355;
    msg.y = 0.15594855474045122;
    msg.z = 0.032554164245318096;

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
    msg.setTimeStamp(0.6753822278100701);
    msg.setSource(34911U);
    msg.setSourceEntity(192U);
    msg.setDestination(53755U);
    msg.setDestinationEntity(25U);
    msg.time = 0.7890407476780843;
    msg.x = 0.17354070504716623;
    msg.y = 0.2568025227755508;
    msg.z = 0.3371606928883477;

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
    msg.setTimeStamp(0.8504463834592466);
    msg.setSource(3566U);
    msg.setSourceEntity(201U);
    msg.setDestination(61751U);
    msg.setDestinationEntity(41U);
    msg.nbeams = 34U;
    msg.ncells = 112U;
    msg.coord_sys = 55U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.31326847597672447;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.9578447934935395;
    tmp_tmp_msg_0_0.amp = 0.40374379772446456;
    tmp_tmp_msg_0_0.cor = -30;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5858953405887043);
    msg.setSource(15499U);
    msg.setSourceEntity(242U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(204U);
    msg.nbeams = 154U;
    msg.ncells = 16U;
    msg.coord_sys = 127U;

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
    msg.setTimeStamp(0.2033356719721836);
    msg.setSource(14133U);
    msg.setSourceEntity(107U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(151U);
    msg.nbeams = 233U;
    msg.ncells = 206U;
    msg.coord_sys = 142U;

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
    msg.setTimeStamp(0.4176252052791294);
    msg.setSource(48738U);
    msg.setSourceEntity(23U);
    msg.setDestination(14855U);
    msg.setDestinationEntity(79U);
    msg.cell_position = 0.35392351055679594;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5070608766832595;
    tmp_msg_0.amp = 0.7203142673672515;
    tmp_msg_0.cor = -68;
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
    msg.setTimeStamp(0.2652000021522438);
    msg.setSource(17377U);
    msg.setSourceEntity(31U);
    msg.setDestination(22005U);
    msg.setDestinationEntity(223U);
    msg.cell_position = 0.706493205868333;

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
    msg.setTimeStamp(0.9592865466794094);
    msg.setSource(63752U);
    msg.setSourceEntity(208U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(114U);
    msg.cell_position = 0.3877177472645783;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8674540182050301;
    tmp_msg_0.amp = 0.47276773777651404;
    tmp_msg_0.cor = 49;
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
    msg.setTimeStamp(0.09475152027361311);
    msg.setSource(34187U);
    msg.setSourceEntity(190U);
    msg.setDestination(46831U);
    msg.setDestinationEntity(249U);
    msg.vel = 0.37176738733260617;
    msg.amp = 0.10107291432603038;
    msg.cor = 3;

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
    msg.setTimeStamp(0.14252315984545727);
    msg.setSource(41971U);
    msg.setSourceEntity(201U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(215U);
    msg.vel = 0.4101098000516856;
    msg.amp = 0.6688422525462707;
    msg.cor = -5;

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
    msg.setTimeStamp(0.42735730564692087);
    msg.setSource(28948U);
    msg.setSourceEntity(53U);
    msg.setDestination(46616U);
    msg.setDestinationEntity(209U);
    msg.vel = 0.14875421976071657;
    msg.amp = 0.39950336052459046;
    msg.cor = -125;

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
    msg.setTimeStamp(0.3114438939798112);
    msg.setSource(44573U);
    msg.setSourceEntity(250U);
    msg.setDestination(33409U);
    msg.setDestinationEntity(9U);
    msg.value = 0.16541667300994412;

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
    msg.setTimeStamp(0.3247232819998507);
    msg.setSource(5784U);
    msg.setSourceEntity(196U);
    msg.setDestination(65334U);
    msg.setDestinationEntity(104U);
    msg.value = 0.9793121386276054;

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
    msg.setTimeStamp(0.15670786090115174);
    msg.setSource(34513U);
    msg.setSourceEntity(69U);
    msg.setDestination(462U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8484660521200473;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.31770357424734297);
    msg.setSource(15988U);
    msg.setSourceEntity(55U);
    msg.setDestination(61478U);
    msg.setDestinationEntity(183U);
    msg.name.assign("IUAAUVVUOUPPJJWNQRHUJWGPDRGRTBSQEJRQICHYROEMDAFCEBTZVZHGQCLTSNOCTEXRTKNRLMMCUBNQKZJEOPKCMDLYXXOIDNVQPZYCFWKJFXBKLMXYLCHGWEGVOKKIYAOYTSXRCSVTAPFNKDOFYLLATHMMBGBVSGMKIMXIZWZ");
    msg.value = 95U;

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
    msg.setTimeStamp(0.6211511919647776);
    msg.setSource(58614U);
    msg.setSourceEntity(178U);
    msg.setDestination(58280U);
    msg.setDestinationEntity(170U);
    msg.name.assign("BSZXMPDMQCXOWKIGNOIYRVRFXNAILSYBVTDNIPHNVLAYWM");
    msg.value = 59U;

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
    msg.setTimeStamp(0.06526131140714964);
    msg.setSource(9560U);
    msg.setSourceEntity(125U);
    msg.setDestination(49852U);
    msg.setDestinationEntity(25U);
    msg.name.assign("CFQMHLDUYURWCSLKLRRWAMMUFAYMVQAPAZRPHGQFWGXPWQXEZKENDEUNWTVYIECKCVQMHIRSHWVHDZPUOBOFSJKMACTIXQWICAOXLOYVEFCLFIFPNOFJAEADRZNSSSLLCVP");
    msg.value = 196U;

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
    msg.setTimeStamp(0.7858841411479874);
    msg.setSource(7024U);
    msg.setSourceEntity(221U);
    msg.setDestination(6349U);
    msg.setDestinationEntity(227U);
    msg.name.assign("MLREZKYFRLTCCHAWMYIQINOUWEBIFGUGPTVQRVVOIDPLNEHFSKKNHXTYTIYTBROBQDHCMPZEBAQAMDJKUMURNKUDDNQRWLIFTPZDAE");

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
    msg.setTimeStamp(0.2725395611614426);
    msg.setSource(51811U);
    msg.setSourceEntity(111U);
    msg.setDestination(45528U);
    msg.setDestinationEntity(247U);
    msg.name.assign("WZBITWSEVBFEBJGSFYPVOWCPHDTHSWKEUOKMTVWTKLGPGCIAYIQAEXOEMTFIWZHRUXULXNBKJCFJOBDUYBQUDYFOBXIPIYXLZUQQZGNJDMDPKAQRRRFLQMWMEUNQPZEXDQWTJCVPDENKIUUAERVSHQRNLMRGVIKMFPNCLZLVOYCM");

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
    msg.setTimeStamp(0.926642614979652);
    msg.setSource(38303U);
    msg.setSourceEntity(254U);
    msg.setDestination(5435U);
    msg.setDestinationEntity(23U);
    msg.name.assign("FXPUVSHEVFYJNIGILBYGGSGBRROAUKXKDCMZGSTCHMAPOEPENOXKKBSYCSQEONAWBQVCOJYPTXHHRAEPKJBAAYRGLJFHNTSACNGLCWOPWKFFMXBDMHPSKSYJYZTODJSKIWWRIUXTCTHRINTTZQEPUQJZFXJNZRALMOVCHAPMWRVWLINFGVWDZZYVIEDHNXULHLDQV");

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
    msg.setTimeStamp(0.9875957205920246);
    msg.setSource(12566U);
    msg.setSourceEntity(211U);
    msg.setDestination(6013U);
    msg.setDestinationEntity(196U);
    msg.name.assign("UXFKRXVKLNNWVUHSYVJTUQXNRBGSLMYYBIWIMMHBTERCZJXIHKYGZLOBPFRJRAGVPYCEZIPPAECEUFGMQUQVPSRCABQWLQFZAKDTMCGWTKEZPPIBYAKP");
    msg.value = 195U;

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
    msg.setTimeStamp(0.7619019799012026);
    msg.setSource(37284U);
    msg.setSourceEntity(43U);
    msg.setDestination(54941U);
    msg.setDestinationEntity(205U);
    msg.name.assign("HGRUTJHPALNEWBOJUJYCWXQCFGYZJKFMKNOPPPXRRYEZCJRCRQQRHPOSZDYFCDETEVXKHSHFMQJSBACFFSBZYTVHGDKSWSFBDKAHGEWLYHAMWNKOPUUVXDLOTEOTNIFALUXIBGNYMQJNDRCIMLZXXTKLWIVSTTFS");
    msg.value = 139U;

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
    msg.setTimeStamp(0.13440041419374438);
    msg.setSource(61253U);
    msg.setSourceEntity(16U);
    msg.setDestination(57387U);
    msg.setDestinationEntity(91U);
    msg.name.assign("KWDAFMFZLRWOGZFQPZNXYBZUYJKNOOBAXEJECEFISLENJPCPABZBLKHSVU");
    msg.value = 56U;

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
    msg.setTimeStamp(0.002585941670740999);
    msg.setSource(55515U);
    msg.setSourceEntity(249U);
    msg.setDestination(39814U);
    msg.setDestinationEntity(52U);
    msg.value = 0.22146130357332805;

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
    msg.setTimeStamp(0.15299939196632506);
    msg.setSource(4434U);
    msg.setSourceEntity(41U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(225U);
    msg.value = 0.09859831529796947;

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
    msg.setTimeStamp(0.21868120766283028);
    msg.setSource(4069U);
    msg.setSourceEntity(71U);
    msg.setDestination(59228U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9303042271191382;

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
    msg.setTimeStamp(0.34208654807377414);
    msg.setSource(31222U);
    msg.setSourceEntity(50U);
    msg.setDestination(64402U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6030615832604579;

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
    msg.setTimeStamp(0.1656224285480984);
    msg.setSource(51009U);
    msg.setSourceEntity(65U);
    msg.setDestination(3361U);
    msg.setDestinationEntity(103U);
    msg.value = 0.3809126410752308;

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
    msg.setTimeStamp(0.5990151767999023);
    msg.setSource(35750U);
    msg.setSourceEntity(224U);
    msg.setDestination(64224U);
    msg.setDestinationEntity(90U);
    msg.value = 0.5972842794312163;

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
    msg.setTimeStamp(0.24378266583203845);
    msg.setSource(47295U);
    msg.setSourceEntity(48U);
    msg.setDestination(20781U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5742054200218722;

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
    msg.setTimeStamp(0.6433754953388979);
    msg.setSource(54674U);
    msg.setSourceEntity(81U);
    msg.setDestination(65207U);
    msg.setDestinationEntity(226U);
    msg.value = 0.27471299743028443;

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
    msg.setTimeStamp(0.7393705134944262);
    msg.setSource(33481U);
    msg.setSourceEntity(20U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(251U);
    msg.value = 0.014976772209883582;

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
    msg.setTimeStamp(0.806946314052245);
    msg.setSource(31084U);
    msg.setSourceEntity(85U);
    msg.setDestination(24701U);
    msg.setDestinationEntity(119U);
    msg.restriction = 179U;
    msg.reason.assign("NUDNWRXREVBPJEWTJMUGOZRVJZHZZFLNFKZCKYDXAZMQUGFLGVKKKMXLXKJEGRM");

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
    msg.setTimeStamp(0.09715801828210746);
    msg.setSource(14043U);
    msg.setSourceEntity(237U);
    msg.setDestination(34811U);
    msg.setDestinationEntity(135U);
    msg.restriction = 122U;
    msg.reason.assign("KJDCXUSMUUGCCBOMVCWNOAHUMNECPRSGDXZBRHSFJCEHKMSJQXHJWPINGZUDDQTIDBSQVWNQVIKCVZCNYRBYTTYOGOIRPGTEWZRMJJLOVEAVJLEXJTSUYDZZRRLGIRPZNZKOPPYLWEVFFZVXQDXSIBA");

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
    msg.setTimeStamp(0.5307002157862276);
    msg.setSource(1337U);
    msg.setSourceEntity(157U);
    msg.setDestination(7869U);
    msg.setDestinationEntity(122U);
    msg.restriction = 140U;
    msg.reason.assign("MKYYNOBRHWVZKFAZDALYRRINOHQCYGJPLPSGMIZKPSNZOWFWGHSRXOKIRFIALBTDPLDSOHRAHMGPBWCEVUAKQHVJIKEECDYMDTTXSEJIU");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.3801994776680958);
    msg.setSource(58700U);
    msg.setSourceEntity(215U);
    msg.setDestination(22350U);
    msg.setDestinationEntity(29U);
    msg.op = 223U;
    msg.version.assign("ASUUWFQOIOYYNQLGLJHCOBOXUENFXUQXUJYPJEMDTBECHZFMNVUSMZWWKEVHSPSYRXRNXLAUWX");
    msg.description.assign("KSZXAPNSNZHYQACUOLKHPNCYGSGBXJLZRAADTCIWRNBMQMJFIEWWWMJSMIFRUGWXAFWPPOLFZJVMPLOQNBXEROSSRLGEXBNUVZDHCFHFVJJQEVMKKKQDJTEWCRCMQDJIWTQCITDCBHZEGLP");

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
    msg.setTimeStamp(0.4467346507135582);
    msg.setSource(11491U);
    msg.setSourceEntity(174U);
    msg.setDestination(13679U);
    msg.setDestinationEntity(90U);
    msg.op = 180U;
    msg.version.assign("AOBPNUYBIHODFXZWRYYJUBKJSEXIOEPOPGLSKOHEZZBN");
    msg.description.assign("MBRIXZGTVBWABUUSXNGIHRXWJOWPUB");

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
    msg.setTimeStamp(0.9027068632068578);
    msg.setSource(23682U);
    msg.setSourceEntity(195U);
    msg.setDestination(23597U);
    msg.setDestinationEntity(104U);
    msg.op = 187U;
    msg.version.assign("IIASYZJHCTFIUYBTPRVRUEWRKGZMZBYKVTSHBFGEUUEDNXTUYBGNJVCUXLWFFVZMXUVSBBDCOAXNETHCWXZDGLKRAOJDYIBVMHSLISWDPHOWZOIQIWPWOTYOFLMRIHTCKSLCJPFGVAYLAQCNFAREQKGETYOKIVYGCCALFDMSQNSNZAVP");
    msg.description.assign("ARLXHAHPBHJDSROXKZLBQFIETCJHAYMSPGXBRMGEWNFBYXVXQGJHPTNIAOZWNIWUPWNXR");

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
    msg.setTimeStamp(0.7580990704466589);
    msg.setSource(17865U);
    msg.setSourceEntity(206U);
    msg.setDestination(7266U);
    msg.setDestinationEntity(45U);
    msg.value = 0.07853083988159937;

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
    msg.setTimeStamp(0.8996840307771187);
    msg.setSource(22147U);
    msg.setSourceEntity(165U);
    msg.setDestination(63617U);
    msg.setDestinationEntity(85U);
    msg.value = 0.12105962496008382;

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
    msg.setTimeStamp(0.4877865275388473);
    msg.setSource(59830U);
    msg.setSourceEntity(205U);
    msg.setDestination(27830U);
    msg.setDestinationEntity(236U);
    msg.value = 0.6417285487488059;

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
