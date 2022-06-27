//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 27ab9b0df28ae9ab959cdcdd74c17c62                            *
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
    msg.setTimeStamp(0.3111528344926655);
    msg.setSource(28109U);
    msg.setSourceEntity(138U);
    msg.setDestination(41674U);
    msg.setDestinationEntity(246U);
    msg.state = 164U;
    msg.flags = 54U;
    msg.description.assign("EHOCRCLEWRJTPBNWYDNRRCZIMQARFIZWBCBVNDYXUUVEVPCRGIJTOLEHRZEIPIILGYHOXPKOWOMWLYNSBHDVUSZPQQOGDEADGJVPPYIAGWMLSKFFJGVTTKUSBEASWZSWQCKDZFFOWQYJIZGAHCSXMFQXCXEATDLYUADNJFMVPMGLBPVNFPOTAUZLRGLYKHLXKNXU");

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
    msg.setTimeStamp(0.04756466408769677);
    msg.setSource(49228U);
    msg.setSourceEntity(153U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(219U);
    msg.state = 149U;
    msg.flags = 191U;
    msg.description.assign("MIDZAQCFMBGRIHWJEJXNYVWPLQVTVUCVSAHUUVBHNGQSRBRMAAHBPPUNZHVDVEOSYWOUFNYOQWDCTPGTWRZGCALAYTJDHLHEKCUFKM");

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
    msg.setTimeStamp(0.8812476683919266);
    msg.setSource(17499U);
    msg.setSourceEntity(191U);
    msg.setDestination(22114U);
    msg.setDestinationEntity(76U);
    msg.state = 164U;
    msg.flags = 240U;
    msg.description.assign("MPLBMLVEKXRWJTTPQLUDNLUFEUAJHBFYOMYVTQBBCFOLZVKDZDSEQDPCCMLTKQPIZVCVRPYZDSAQCND");

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
    msg.setTimeStamp(0.8944005957801685);
    msg.setSource(54648U);
    msg.setSourceEntity(210U);
    msg.setDestination(35527U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.9707031816196555);
    msg.setSource(11142U);
    msg.setSourceEntity(116U);
    msg.setDestination(62509U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.27944534331253834);
    msg.setSource(43894U);
    msg.setSourceEntity(145U);
    msg.setDestination(60458U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.20754233875310157);
    msg.setSource(15023U);
    msg.setSourceEntity(57U);
    msg.setDestination(38454U);
    msg.setDestinationEntity(207U);
    msg.id = 85U;
    msg.label.assign("EGBHMZAVCIPWQZVCYEUBYVYIAKAYYFBZBOLNORABINWPEJRDKDRUPYVCVITTRUPMRALSKGYBLQGTWTCSXMQQZYRWAJHHSKSOMZSAUGXSJPNJHUOHEILRINQGFXPGNKTJVWUOUBQDXWFUBKPJXFNXZWOXTVEAPAVGWMIRLFQCEJMOZEHTEJKOICOYNLCVJDHDCJLBOLGSRMPB");
    msg.component.assign("RRYKGLHJVPTPSZCVAOGSYRFKLGFTR");
    msg.act_time = 36034U;
    msg.deact_time = 14607U;

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
    msg.setTimeStamp(0.3616882974569674);
    msg.setSource(59406U);
    msg.setSourceEntity(122U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(5U);
    msg.id = 160U;
    msg.label.assign("BQHZSXTEIIDXBQHTVNFGPGBVLVCRJEGDWLDTZLWFKMFZYHVPIPUNMVNKUAHKALYGEQUNLQFWRVKFRQJWIBARUHUUEDMFWSKCYZMHDWBYYKWPADOZCCGPVSJDTDSYRBSJYOEPMELZKGXNOJDOMHCYSOTBSWPZFQIAJGLUOVALSTMREKHCAXXEQWBTONFBZCVVPXMNIKZTHRJYJNRTXFPTSIROZIMUGSXECCAJQQ");
    msg.component.assign("YEUMWJQBFQSDXTVZSMVIYBWFVGBXKD");
    msg.act_time = 45630U;
    msg.deact_time = 2144U;

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
    msg.setTimeStamp(0.863675994788456);
    msg.setSource(5755U);
    msg.setSourceEntity(199U);
    msg.setDestination(2844U);
    msg.setDestinationEntity(254U);
    msg.id = 192U;
    msg.label.assign("MIXYHFNTUJKKPXTWAGBYEHUFCBVDOGNPVFUNVALNJBTGZVUHZFEWIFYWCRNSSWWKXOGSFRQRLDEEAMHAOERKCMNUMOSXJVDWRJKCVUGMSHPTMYIEERLMZZXCPLFJQOBBRTK");
    msg.component.assign("OAOEANCPPJCFKDZKXWOMJEWIQAIQLZHYSRJGBPZTOVBRWVYGUBGYHURTVCREZSVDQFZHDDTDYNPNFLLOBUJJHVDNAUHKGAGGDRDPFNEKWGCBVQNXSPWNFSNMCUYQHPXTTEEZARMKHBCWISGCJXTBKKWJDLJZNBFAOZBYQVZLSVCRRKFVXXYTLFUYMYFNKWVWEDXMSCHCBUTIEZSUHLSHILILFMAGQRQIOAUUJOXIEOOMJXERIYP");
    msg.act_time = 17412U;
    msg.deact_time = 1056U;

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
    msg.setTimeStamp(0.16289169850347307);
    msg.setSource(63781U);
    msg.setSourceEntity(159U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(239U);
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
    msg.setTimeStamp(0.31276178709621005);
    msg.setSource(7215U);
    msg.setSourceEntity(98U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(86U);
    msg.id = 149U;

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
    msg.setTimeStamp(0.034883455511425576);
    msg.setSource(55276U);
    msg.setSourceEntity(224U);
    msg.setDestination(53933U);
    msg.setDestinationEntity(68U);
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
    msg.setTimeStamp(0.9484426520669581);
    msg.setSource(29682U);
    msg.setSourceEntity(133U);
    msg.setDestination(28763U);
    msg.setDestinationEntity(42U);
    msg.op = 118U;
    msg.list.assign("PEXBMAESBZQFWMYPONRNLREJHDTJZZKGCWKNKBPMEATYHJXAQKTPVUXLZXRRXSOIPXRLMACCZTLYFJBYCYHKGOOFAGLKQFJLOWPYMXWDTCONOCFNPHXHSABPRVQHMITIISDZNCLGIUSAQZUKQVGJSNBGVNFGYVPGDLJKWQRBVLMWWHPUYTETMDWXHVQREJWBUAIVUKADVULZUCUSDEDAZRHHCGYEEOEBDCN");

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
    msg.setTimeStamp(0.8209296919850106);
    msg.setSource(57118U);
    msg.setSourceEntity(235U);
    msg.setDestination(1428U);
    msg.setDestinationEntity(54U);
    msg.op = 60U;
    msg.list.assign("MDLYJEICFHMVDXAUJHXQJBLLXVHGFTGJOCDPZEXOHHFSLSNM");

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
    msg.setTimeStamp(0.13112007396129854);
    msg.setSource(43002U);
    msg.setSourceEntity(65U);
    msg.setDestination(36839U);
    msg.setDestinationEntity(203U);
    msg.op = 131U;
    msg.list.assign("IJCVBWMNHOBCWOEOEXFZXWWDHIZIUPWECPBYRQERUDCVLHGKWMSSQPXTHRFIZRHDOKATANRDAENBOAFSEVZAKVIKPSYPGIAQBJUUNHZXNIUXYGOTOCLCWHXVMBNJIRYKWGZLWUCCIMNAFJRLGVLCVDXPAVSFFSMRHSHEGEBKMXQVWBRJYYMSZDPQSDTDOTKUFXBP");

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
    msg.setTimeStamp(0.9626901595813055);
    msg.setSource(39567U);
    msg.setSourceEntity(210U);
    msg.setDestination(57058U);
    msg.setDestinationEntity(167U);
    msg.value = 119U;

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
    msg.setTimeStamp(0.7186340318349266);
    msg.setSource(37840U);
    msg.setSourceEntity(58U);
    msg.setDestination(59483U);
    msg.setDestinationEntity(83U);
    msg.value = 67U;

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
    msg.setTimeStamp(0.7335202741172244);
    msg.setSource(28155U);
    msg.setSourceEntity(155U);
    msg.setDestination(36485U);
    msg.setDestinationEntity(156U);
    msg.value = 168U;

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
    msg.setTimeStamp(0.2934042024621111);
    msg.setSource(49197U);
    msg.setSourceEntity(199U);
    msg.setDestination(23194U);
    msg.setDestinationEntity(104U);
    msg.consumer.assign("LLSXNBDPUBRPMLXQGEEEGFWFNPXTPAOFIAUYZLWYEHSJOVILVAEHCNGQLBXEYOOVSGQOMAUJWJCVOCUMLPJEYSAJUNXGAFWVTVHDHMFLFRQYNKSBYNKOMTIPGIKWCXKJPUCFNRJZSUTMKTMZBSCWZUZIBZVTDDFCJROSZNDTLEGFRRHMAXYVAJIKFKDUDVRIODYKBSQTNQZSMXHOPBLRPGDH");
    msg.message_id = 36280U;

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
    msg.setTimeStamp(0.6074366635632819);
    msg.setSource(54813U);
    msg.setSourceEntity(203U);
    msg.setDestination(32938U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("YUMRKCYMZBBPOWCFENKKDOORJESEZBQXIAGIUBPRGUQPTGBVZTTRKANPQPHASJFZWBCGFTQHZKWQSVDFRDO");
    msg.message_id = 27671U;

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
    msg.setTimeStamp(0.5987117078884476);
    msg.setSource(39691U);
    msg.setSourceEntity(221U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(47U);
    msg.consumer.assign("KWRJPDOMLXIOBZHGWWKAQENUTXVZQLNYFBSZKMFGRVVRCAREMCYOYMSUYXLRM");
    msg.message_id = 38330U;

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
    msg.setTimeStamp(0.5963253244623574);
    msg.setSource(52496U);
    msg.setSourceEntity(63U);
    msg.setDestination(9373U);
    msg.setDestinationEntity(96U);
    msg.type = 138U;

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
    msg.setTimeStamp(0.864497863507019);
    msg.setSource(43022U);
    msg.setSourceEntity(84U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(6U);
    msg.type = 12U;

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
    msg.setTimeStamp(0.41742434184992105);
    msg.setSource(20404U);
    msg.setSourceEntity(168U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(166U);
    msg.type = 100U;

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
    msg.setTimeStamp(0.7924200844555699);
    msg.setSource(25312U);
    msg.setSourceEntity(134U);
    msg.setDestination(54847U);
    msg.setDestinationEntity(183U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.285971821125272);
    msg.setSource(14042U);
    msg.setSourceEntity(72U);
    msg.setDestination(21367U);
    msg.setDestinationEntity(111U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.5101080824371881);
    msg.setSource(15281U);
    msg.setSourceEntity(77U);
    msg.setDestination(30890U);
    msg.setDestinationEntity(47U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.12409052474575777);
    msg.setSource(17355U);
    msg.setSourceEntity(25U);
    msg.setDestination(60249U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 191U;
    msg.step_number = 7U;
    msg.step.assign("LDKSTOTPZEAWIJNOMZTJAFGBMBJMNPSGSPIVGLFFAXHWKDTRJFZBCMUYYPUHMGRMVWPMOCYAEGCZICCRNPIMZFRIVQDRBLUIXWJLLOHWQLXCDKEOROTDYCBEBYYHNZMVEENJNHUAUFQKCRQIXKJWNAVYJCVZWOZFSDPVXUWKMKXPJEGKTLSHLFQFHIAGQHEPVZAVRXBQYXUDHWPTSCZDILJXSRSHQKQQNNUEVFSDIRDYGOLTAXKWYT");
    msg.flags = 30U;

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
    msg.setTimeStamp(0.2964305250838112);
    msg.setSource(35318U);
    msg.setSourceEntity(191U);
    msg.setDestination(43374U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 134U;
    msg.step_number = 132U;
    msg.step.assign("IVEZSVJHNQFYXBZRSCLCVQMGKNUIMWXOTVONRZNKMFLEDCXCGQRGZAIEHMTDOUJKXZTRLIPCUUXYGRVDLKPFYLPREUPFCMHBNQFKTGAUCBLLEPWYNMWXSENOSMWKCXEMZTOHBDRUBDZLJMIUHUHQJAGVEWKTTLOTFJIOYFOYDWWPKUGHRYXHSIJA");
    msg.flags = 82U;

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
    msg.setTimeStamp(0.5895193659998752);
    msg.setSource(46535U);
    msg.setSourceEntity(177U);
    msg.setDestination(7619U);
    msg.setDestinationEntity(0U);
    msg.total_steps = 140U;
    msg.step_number = 94U;
    msg.step.assign("WSLCOCAPZFYFGKJETMQJDMYIVRRPJWITJUYULZWLYNQANVCCOJQHYGPSXDIKMZDBNTWQSQCLZJOWTOFMLZTYNJPUEHCLBBELKHBSBRAQINUVYKFBGCVLSFESZGXLWPKHRZPXGYWMZISTQRNVCMINHZVGUAOOPDDQR");
    msg.flags = 177U;

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
    msg.setTimeStamp(0.8384848391749178);
    msg.setSource(5334U);
    msg.setSourceEntity(174U);
    msg.setDestination(11766U);
    msg.setDestinationEntity(109U);
    msg.state = 176U;
    msg.error.assign("GOWYHRJPLQDXTLODCSNBEXGLWUAKESJKBGVDHMSIVFNWHQJOKXFWF");

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
    msg.setTimeStamp(0.15675218572202176);
    msg.setSource(62313U);
    msg.setSourceEntity(8U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(181U);
    msg.state = 64U;
    msg.error.assign("IYMVWQVQUYETLKINOJQUZKRCPFJZHQSXZAKWVAEPRXLGJVZRIBBXUFUMWYXOARUEDURFHINDAAEVDOBGNTMNSBCRWYKNDMHCSDUUAMTRQBVZKTOTZOYSIJHWLWDLGCTHBKWSLEIGTYFMFUGS");

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
    msg.setTimeStamp(0.24768729020827673);
    msg.setSource(12885U);
    msg.setSourceEntity(227U);
    msg.setDestination(45125U);
    msg.setDestinationEntity(245U);
    msg.state = 92U;
    msg.error.assign("UDMGSGWAPKNDXARXNYSBIUUWGXOZOEFJNUPCXPBBFLLRVEFIVACWDCIIDCWYYWLGMYROKQYJBILDVBKOJTOFGMPCGHPSKBKXHDAUVXLJIEMAFPQKRNTMIETNSICALJSKDWZHSE");

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
    msg.setTimeStamp(0.7162068161225997);
    msg.setSource(2567U);
    msg.setSourceEntity(113U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.8622612752465022);
    msg.setSource(47658U);
    msg.setSourceEntity(129U);
    msg.setDestination(41920U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.605589521035518);
    msg.setSource(63341U);
    msg.setSourceEntity(194U);
    msg.setDestination(33730U);
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
    msg.setTimeStamp(0.2858858718030972);
    msg.setSource(60781U);
    msg.setSourceEntity(222U);
    msg.setDestination(41386U);
    msg.setDestinationEntity(156U);
    msg.op = 132U;
    msg.speed_min = 0.9658528138953055;
    msg.speed_max = 0.5554659872725773;
    msg.long_accel = 0.6029420429174972;
    msg.alt_max_msl = 0.05817941420383543;
    msg.dive_fraction_max = 0.16904557572369905;
    msg.climb_fraction_max = 0.6378009453524328;
    msg.bank_max = 0.4378371917815683;
    msg.p_max = 0.32656481962059924;
    msg.pitch_min = 0.7106528896952603;
    msg.pitch_max = 0.5747581672587108;
    msg.q_max = 0.13732445266438642;
    msg.g_min = 0.9183723569203426;
    msg.g_max = 0.31117930448603814;
    msg.g_lat_max = 0.7366947490294845;
    msg.rpm_min = 0.06366053227468815;
    msg.rpm_max = 0.17574547203592406;
    msg.rpm_rate_max = 0.948149127959754;

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
    msg.setTimeStamp(0.6785613242883465);
    msg.setSource(51005U);
    msg.setSourceEntity(42U);
    msg.setDestination(61246U);
    msg.setDestinationEntity(185U);
    msg.op = 194U;
    msg.speed_min = 0.2561713427968447;
    msg.speed_max = 0.5755195070697334;
    msg.long_accel = 0.5364350501350231;
    msg.alt_max_msl = 0.2758106315936809;
    msg.dive_fraction_max = 0.6789220513675965;
    msg.climb_fraction_max = 0.7976748447323855;
    msg.bank_max = 0.7355006085750733;
    msg.p_max = 0.4462467136853435;
    msg.pitch_min = 0.7271765491268866;
    msg.pitch_max = 0.8861861506249177;
    msg.q_max = 0.892863442073547;
    msg.g_min = 0.32029764467987243;
    msg.g_max = 0.07748313686469066;
    msg.g_lat_max = 0.7593819537686014;
    msg.rpm_min = 0.8705253774229645;
    msg.rpm_max = 0.6217478768306292;
    msg.rpm_rate_max = 0.29939838593548496;

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
    msg.setTimeStamp(0.31968557608290693);
    msg.setSource(46163U);
    msg.setSourceEntity(41U);
    msg.setDestination(31238U);
    msg.setDestinationEntity(179U);
    msg.op = 48U;
    msg.speed_min = 0.7208615133409392;
    msg.speed_max = 0.4960336815970159;
    msg.long_accel = 0.8926445818983392;
    msg.alt_max_msl = 0.9512861576191758;
    msg.dive_fraction_max = 0.4970630854827788;
    msg.climb_fraction_max = 0.6105414026781544;
    msg.bank_max = 0.30343275350405063;
    msg.p_max = 0.3746766853978165;
    msg.pitch_min = 0.4978012276413356;
    msg.pitch_max = 0.5940469096605965;
    msg.q_max = 0.9233052320482437;
    msg.g_min = 0.9855787177974451;
    msg.g_max = 0.9804185798403704;
    msg.g_lat_max = 0.31789396962192373;
    msg.rpm_min = 0.03349489824744767;
    msg.rpm_max = 0.4627306482792165;
    msg.rpm_rate_max = 0.853407737102802;

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
    msg.setTimeStamp(0.2180438993804693);
    msg.setSource(15737U);
    msg.setSourceEntity(59U);
    msg.setDestination(7718U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.5526980074400653);
    msg.setSource(34988U);
    msg.setSourceEntity(15U);
    msg.setDestination(60120U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.675735409149785);
    msg.setSource(12996U);
    msg.setSourceEntity(132U);
    msg.setDestination(26519U);
    msg.setDestinationEntity(248U);
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 242U;
    tmp_msg_0.x = 0.7396899430782099;
    tmp_msg_0.y = 0.6772178362964408;
    tmp_msg_0.z = 0.7600224283908071;
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
    msg.setTimeStamp(0.874221362789392);
    msg.setSource(58973U);
    msg.setSourceEntity(171U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.004920613150591668;
    msg.lon = 0.3627576903491413;
    msg.height = 0.9780172639144259;
    msg.x = 0.1515299455194814;
    msg.y = 0.5304395107603593;
    msg.z = 0.492675202503863;
    msg.phi = 0.5801794443883742;
    msg.theta = 0.603614591130964;
    msg.psi = 0.8417360053120019;
    msg.u = 0.5174541110079255;
    msg.v = 0.12226994990375029;
    msg.w = 0.37098218288467977;
    msg.p = 0.2341569893336699;
    msg.q = 0.6724594990066474;
    msg.r = 0.7922185563915807;
    msg.svx = 0.9553159244462259;
    msg.svy = 0.5604588920416811;
    msg.svz = 0.6834437176212428;

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
    msg.setTimeStamp(0.9533468892471202);
    msg.setSource(60464U);
    msg.setSourceEntity(215U);
    msg.setDestination(2140U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.46724301159517967;
    msg.lon = 0.39847681110242994;
    msg.height = 0.8841978514001707;
    msg.x = 0.13821235681756472;
    msg.y = 0.06693473954265283;
    msg.z = 0.9896114248954023;
    msg.phi = 0.737381175045458;
    msg.theta = 0.581161828157309;
    msg.psi = 0.6627125992352392;
    msg.u = 0.30588661452248966;
    msg.v = 0.670215322372076;
    msg.w = 0.2374042115777606;
    msg.p = 0.7966361750177183;
    msg.q = 0.6193109470487482;
    msg.r = 0.6953650849322133;
    msg.svx = 0.5222178710649954;
    msg.svy = 0.6259831198216135;
    msg.svz = 0.146517774293897;

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
    msg.setTimeStamp(0.5452134274787827);
    msg.setSource(58941U);
    msg.setSourceEntity(100U);
    msg.setDestination(34003U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.639888115574455;
    msg.lon = 0.0574844323585505;
    msg.height = 0.12305527797972526;
    msg.x = 0.47689515052221765;
    msg.y = 0.7721885192920014;
    msg.z = 0.5081960043827676;
    msg.phi = 0.9015009652658866;
    msg.theta = 0.19721191333699084;
    msg.psi = 0.2882415599626297;
    msg.u = 0.5131807749807807;
    msg.v = 0.2477621345879324;
    msg.w = 0.6479141872886227;
    msg.p = 0.255451837636378;
    msg.q = 0.2914661781108937;
    msg.r = 0.19861196784332835;
    msg.svx = 0.14904872160363347;
    msg.svy = 0.1955780036473419;
    msg.svz = 0.5126014998912151;

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
    msg.setTimeStamp(0.07630770321833347);
    msg.setSource(39175U);
    msg.setSourceEntity(117U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(26U);
    msg.op = 182U;
    msg.entities.assign("MRQSEMNKAXBNNERXZEDTJLOVTZFTIKIYZYCUQJGTEGCVGAJGRNHIOMIDDQTCBOFGSPPVJCYZNELQZRRLFTUGURBAPGMUKCWWBARLLNQMWKMIELYTXWFPFWZYQYRBZXDMHASPQZMFHQBVSLYXHXJDZWLXHHIIIHARAYXINBUBDJJLKLBOQOKQPECEVKBWJPGCTUPDUNOI");

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
    msg.setTimeStamp(0.8409494162863831);
    msg.setSource(39555U);
    msg.setSourceEntity(99U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(174U);
    msg.op = 222U;
    msg.entities.assign("MHWZLPIKCJFYFQOFDEYGRZQHZZRXSTYKPNIBEPKCAHMNLIUNGUTJRUUXWGYZCBDTLUCSGVADMHKCFJSCXGXQPEMJRRFSKBIXKHJLVSYVSJULABREYRGTTUIOWDVMVANEHOAJDFNGFKVVSVIQWPOWNMJQERUPCTQCYPMQLFQENDWHIIARCANOKZKMTBBAZMVWOOTHLODPXHASUXEXPLZCLFZNHVDRDGJQBSULKBOIJXE");

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
    msg.setTimeStamp(0.38635585826163366);
    msg.setSource(48923U);
    msg.setSourceEntity(124U);
    msg.setDestination(55128U);
    msg.setDestinationEntity(4U);
    msg.op = 80U;
    msg.entities.assign("SUMAQVWSRBEOID");

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
    msg.setTimeStamp(0.8177280205557457);
    msg.setSource(57877U);
    msg.setSourceEntity(161U);
    msg.setDestination(56689U);
    msg.setDestinationEntity(219U);
    msg.type = 186U;
    msg.speed = 59539U;
    const char tmp_msg_0[] = {-105, -67, -29, 111, 56, -63, 59, 16, 37, 8, 32, 78, 89, 60, 101, 13, -21, 37, 104, -103, 121, 104, 108, -117, 38, -105, 47, -14, 14, 75, 108, -58, 77, -80, -11, -119, 115, -65, 85, 120, -100, 82, -79, -35, -106, -51, -16, -125, -30, 94, 20, -118, -104, 65, -91, 101, -99, 64, 118, 49, -19, 4, -117, 43, -20, 119, 38, -19, -17, 31, -65, 37, -31, 78, 14, 30, -61, -123, -69, 108, 105, 34, -4, -121, 107, -18, -114, -38, -42, 71, 27, -97, 23, -27, -100, -71, 66, 77, -29, -39, 21, 113, -57, 84, 26, -47, -128, -93, 37, 46, 24, 92, 20, -54, -50, -110, -65, -3, -70, -64, 43, 59, -111, -64, 69, -63, 57, 69, 28, -79, 103, -3, -39, -127, -111, 92, -13, -94, -75, -39, -121, 5, -74, 109, 26, -22, 83, -84, 35, 52, 59, 117, -12, -81, -37, -23, 15, -36, -45, 69, -37, 77, -68, 102, 85, 67, 59, 57, 52, -120, -124, -118, 67, -39, -124, -35, -18, -84, -47, 87, -31, -17, -111, 123, 10, -100, -90, 117, -11, 60, 64, -88, -120, 125, -6, 2, -50, -70, 48, -127, 10, -82, 59, -52, -98, 37, 20, -67, -120, 63, 72, 48, -82, 99, -75, 5, 111, -42, -127, -44, -94, -52, 117, 95, 32, 11, -34, -55, -128, 34, 26, 125, -63, 101};
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
    msg.setTimeStamp(0.8165013746084155);
    msg.setSource(21875U);
    msg.setSourceEntity(127U);
    msg.setDestination(43244U);
    msg.setDestinationEntity(5U);
    msg.type = 103U;
    msg.speed = 12292U;
    const char tmp_msg_0[] = {-122, -112, 105, 24, 107, -57, 10, -22, -70, 97, -42, 81, 64, -67, 113, 101, -63, -66, -97, -40, 77, -38, -113, -23, 120, 55, -99, 21, -108, -115, 47, 1, -53, 70, 58, 58, -73, -87, -95, 89, -73, -24, -52, 71, 10, -13, 37, 62, 70, -10, 92, -95, -50, 111, 40, 97, -110, 53, -46, 109, 81, -46, -21, -6, -20, -37, -37, 27, 64, 66, 43, 44, 67, -35, 103, 14, 69, -36, 119, 13, 42, 112, -13, -39, 69, 116, -82, 38, -97, 3, -103, 57, -69, 96, 108, 31, -122, -30, 61, 78, 62, 3, 80, 55, 80, -49, -115, 125, 123, 65, -115, 122, 70, -64, 102, 59, -102, -77, -12, 119, -101, -61, 35, -120, 56, -76, 112, 83, -41, -40, -111, 0, 126, -27, 97, -124, 34, -93, 19, 71, 66, 51, -120, 51, 126, -60, 33, 114, -6, 91, -6, 91, -78, 50, 62, 40, 91, -24, -11, 93, -7, 60, 113, -63};
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
    msg.setTimeStamp(0.05484763338327325);
    msg.setSource(50108U);
    msg.setSourceEntity(212U);
    msg.setDestination(54035U);
    msg.setDestinationEntity(183U);
    msg.type = 68U;
    msg.speed = 8295U;
    const char tmp_msg_0[] = {99, 83, 89, 46, -61, -125, -80, 27, -106, -66, 126, -116, 68, 80, 91, -44, 103, 65, 8, -56, 85, -93, 96, 79, 100, -104, -55, -113, 25, -127, 110, -23, 68, 119, 113, -87, 109, 21, -62, 56, -92, 12, 126, -15, 3, 62, 75, -45, -122, 31, -98, -87, 80, -103, 8, 31, -111, -8, 29, 85, -69, -109, 3, 103, -98, 32, -19, -84, 14, 39, -15, -111, 35, 80, -114, 50, -87, -31, -115, 23, 114, 113, 87, -87, -117, -4, 108, -83, 57, -103, -56, 124, -109, 4, -19, -1, -5, 89, -19, -3, -33, 75, 109, 104, 14, -36, -123, 90, 9, 102, 80, 113, -42, 79, -8, -66, 100, 123, 15, 108, -33, 8, -102, -52, 43, 33, 29, 59, -21, 108, -119, -38, 99, 42, 112, -46, 108, -76, 120, 56, 76, 39, -28, 70, 104, -7, -18, 89, 88, 104, -26, -36, 94, -109, -70, -31, 76, 111, 40, -127, -43, -44, -38, 16, 10, -25, 117, 83, 109, 56, 47, 45, -31, -20, 52, -32, 62, 119, -121, 26, 41, 20, 18, -84, 27, 26, 60, 40, 12, -51, 26, -81, -71, -112, -8, -128, -36, -73, 47, 7, 96, -53, -18};
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
    msg.setTimeStamp(0.44475955984256055);
    msg.setSource(36379U);
    msg.setSourceEntity(228U);
    msg.setDestination(24057U);
    msg.setDestinationEntity(46U);
    msg.op = 219U;
    msg.tas2acc_pgain = 0.6857386515941755;
    msg.bank2p_pgain = 0.8788931845973293;

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
    msg.setTimeStamp(0.8259622748038783);
    msg.setSource(33352U);
    msg.setSourceEntity(110U);
    msg.setDestination(14928U);
    msg.setDestinationEntity(0U);
    msg.op = 81U;
    msg.tas2acc_pgain = 0.4515219592627572;
    msg.bank2p_pgain = 0.9437714118478348;

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
    msg.setTimeStamp(0.8102998208195129);
    msg.setSource(4541U);
    msg.setSourceEntity(163U);
    msg.setDestination(41144U);
    msg.setDestinationEntity(56U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.0550045101377058;
    msg.bank2p_pgain = 0.5413674696518355;

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
    msg.setTimeStamp(0.7421211201443386);
    msg.setSource(37702U);
    msg.setSourceEntity(96U);
    msg.setDestination(63167U);
    msg.setDestinationEntity(216U);
    msg.available = 2569726711U;
    msg.value = 78U;

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
    msg.setTimeStamp(0.6442531632221898);
    msg.setSource(26160U);
    msg.setSourceEntity(105U);
    msg.setDestination(20562U);
    msg.setDestinationEntity(52U);
    msg.available = 351469316U;
    msg.value = 250U;

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
    msg.setTimeStamp(0.34233010073456593);
    msg.setSource(48312U);
    msg.setSourceEntity(147U);
    msg.setDestination(55918U);
    msg.setDestinationEntity(233U);
    msg.available = 1143777405U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.987699984787201);
    msg.setSource(33682U);
    msg.setSourceEntity(21U);
    msg.setDestination(46325U);
    msg.setDestinationEntity(9U);
    msg.op = 96U;
    msg.snapshot.assign("EEKYAKZLPYWITYZZGQSTUGLQGKSWBZBGQEGHIDNHPDNCNRFXVCJWGXKRYSERAIMWTRPFUALYPABLROHDSZADKXORBXNACUJMUZJRFEHJFSPBTQPVB");
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.5451197962720052;
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
    msg.setTimeStamp(0.3214352173152447);
    msg.setSource(41503U);
    msg.setSourceEntity(21U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(148U);
    msg.op = 36U;
    msg.snapshot.assign("JCQTYAGNORRNPTBUWSVAHEWVLQRPMOFDPTSPGBFRAZCFJRLKMODMXXWFYEOUHXWIYSVQTHWLLCOFHKMDWZATNODBCZRXUVDNREDNKEK");
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("BNAPPCLRKJWMDPKUZNGAKDZDXSSAZLUWETVTTKQODKCQPPJQHPDBBQYRTTXFWPNWTEBIOBOSERAXSFHCLRKTJRAQONJQXNFWFHDOSFAUSPVKQIAZGICIMNCUFOWJMVEBLMCHCXZVGI");
    tmp_msg_0.type = 51U;
    tmp_msg_0.properties = 59U;
    tmp_msg_0.durations.assign("XAWJZKBYUTDJHMMSJURPEDNLWBYMDOHAEAQGVVYTBEHZTCVYDOOPIQFCLZKFHSXVQAJHUFTZYENQLBDSEOUPDBZEKZKWQHCDXMGXKPFADPEXNRMQKHRJFRGFATZCSRMWCOYMEICFLAAXKURVGSSNGZQYBGRUIYVQFRLPFYLPTU");
    tmp_msg_0.distances.assign("EBNAARZFDFVLTXYRJYAESYYDFNFBBEJIWODXQEFUJTVOSPODKPHCTXGQISIMWIKUUJHCDNBSRWWPCOHBNSHIGAOQRN");
    tmp_msg_0.actions.assign("RAZWRPEKFONWBWYBROYVMPZSDYASPPNWPBGVEJVJDNULAFFTDXYYVLWDUGSCQMYGIQDOOLMDCWUUVTGQNXVRIKWNBCQFHU");
    tmp_msg_0.fuel.assign("DEFPUZGHODBTOLNSUYSGBVORNMQMQLRGRXEADEYWBZVLNUSVSSEBBJARQPWOGTEZWOTPHPSBNZYHLFHDKXAEPLXDQHXWWJIKHWERZVANDEPOYRJYTEVQRXRTIWBATMNITVGONSQFNPHYJVXKDJVPZAQIZNIKBAIZQQLMBDDUBZFCHKWCDCLCMUJQVYLXYRFSMHJYWHKUGOFAIJMKSKMUUTFCTLSGCGEXKFVGOJCNPLFXTIJYICFZMMCOKGIXUA");
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
    msg.setTimeStamp(0.05866200494603091);
    msg.setSource(64894U);
    msg.setSourceEntity(60U);
    msg.setDestination(27216U);
    msg.setDestinationEntity(206U);
    msg.op = 55U;
    msg.snapshot.assign("ZXLYMVHFFBPRRIHPKPGVJBPSLUMENGWDNIJYBYXGEMONNEWSJXZUSBRBTDOBOFXACODVVOJNQRLDOXSBLJSMERLLKDZZIXIJMZKUFBUEHETQICEJAKQZSYPFAQAYR");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.049161779824287044;
    tmp_msg_0.beam_height = 0.9626589792827316;
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
    msg.setTimeStamp(0.9767023802224221);
    msg.setSource(43914U);
    msg.setSourceEntity(149U);
    msg.setDestination(38043U);
    msg.setDestinationEntity(161U);
    msg.op = 155U;
    msg.name.assign("RTQZAIWUZMJRVNPWCCHNRYUOOCEPOWMYLUAUIGFVAEY");

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
    msg.setTimeStamp(0.4380833581283977);
    msg.setSource(26046U);
    msg.setSourceEntity(230U);
    msg.setDestination(36655U);
    msg.setDestinationEntity(193U);
    msg.op = 236U;
    msg.name.assign("HMEUCWUOZWEIMKNVPGAVTSCIOTLRPAWPEIKNLDHOWCSOKMNLFRWQKMBIAMHSOPRJETIKUYYHGUXLXCBHHQPBKYANGAAEABXJHUERBQPVOVPXDQESKZGHOBMUWYUSZOJDSXAMIFPBLRJXYJCZEXVMEBSSJDWFMNLFLOZLQFUILVWYGRDYGQCJMDCJKFFBZFNXCYUVGKBRPHCZRZYFDFWWZSJQOUHEQ");

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
    msg.setTimeStamp(0.813403416086174);
    msg.setSource(24508U);
    msg.setSourceEntity(196U);
    msg.setDestination(12522U);
    msg.setDestinationEntity(168U);
    msg.op = 95U;
    msg.name.assign("BYDSZRLCYSYNQADKBJRTXCUWUZXQHUWTKSSISFPVJZWMNIOGRPTLGPKERRVMJKLOFILSNVMWFWIAEULLUNYTTQXWADFEYOBPEQCXBHKNPGHPCMHWYAJMAWPVCHNADIHQQFEZJIFKCGSRGKFGVBJDOCLGVINMBUPOWXSNMQBZYYHXZABYZTDBAMMWYLHRTJHPCJQDMTDXXRRGEZ");

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
    msg.setTimeStamp(0.8864927154898893);
    msg.setSource(43859U);
    msg.setSourceEntity(36U);
    msg.setDestination(24237U);
    msg.setDestinationEntity(74U);
    msg.type = 140U;
    msg.htime = 0.09883133508415742;
    msg.context.assign("KCDSWQCLSUFNGYNMZMBJZAOKHRHNLKFITOFQTFPQJUWHTRASIAQSNEPOYMEJGFVVZIVBJBILTWNDKDGVXGNUBTXWDAZVNPDWXUGTMDBBCZQZEHYPCIRYMTPOCSSCZCREQJJYOULQMOGIQXIOTKWMGXUJBNHLXGEOFYFWXCVARUEGDAUIL");
    msg.text.assign("OPXCSXBJIZPZBDWDMSRJXEZORRVJPRWQHOAYDENXLJYRMLSYPBVXSHUQLATVIYGDSCYEBXDEBCQXOKQIAZVUHVKOFXYQRCVGJVFQMFJWJUDYCWUQWKSCTARJIEIBHMVNEEQIKZGZZFCJYWJWIGAWTTPKNGCE");

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
    msg.setTimeStamp(0.5561639055359042);
    msg.setSource(18683U);
    msg.setSourceEntity(178U);
    msg.setDestination(40424U);
    msg.setDestinationEntity(251U);
    msg.type = 172U;
    msg.htime = 0.9933807632991849;
    msg.context.assign("ERDAQMOFBHUTHWMYGIMGLOXDAMDLCVFHTGULNINKYMGVKRFVKTPOAIPFYXUZWDAWNNJASFAWRHTLVSVRBB");
    msg.text.assign("SPGLKUVUVQEDHQAAYZIOCYBRXAGDQROWSTIWSNJDHWQZBTMNGRFGRZQVWWFLFGZFNEDOMADNTEYO");

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
    msg.setTimeStamp(0.39680822613190025);
    msg.setSource(52213U);
    msg.setSourceEntity(173U);
    msg.setDestination(21804U);
    msg.setDestinationEntity(94U);
    msg.type = 236U;
    msg.htime = 0.34724622873489985;
    msg.context.assign("KMBXJPDJMRJTDFSCZYVSZHEAEEQANTCSJMXEPTGENBJRIWWPPWALXJZKNYJCDGYWIWQVVZVDBACVDQRGWRMWLKOTPGQREUNHHKLZTFGFKPTBYYLFSOGTSNPXLCCD");
    msg.text.assign("QABJWYCEBEGOZCDYVOIOEGGSAHQCHOPP");

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
    msg.setTimeStamp(0.741952719041141);
    msg.setSource(26119U);
    msg.setSourceEntity(68U);
    msg.setDestination(4107U);
    msg.setDestinationEntity(33U);
    msg.command = 176U;
    msg.htime = 0.6814123403010014;

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
    msg.setTimeStamp(0.1088234668488175);
    msg.setSource(62475U);
    msg.setSourceEntity(136U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(238U);
    msg.command = 126U;
    msg.htime = 0.6588122793353816;

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
    msg.setTimeStamp(0.5288717513317922);
    msg.setSource(18222U);
    msg.setSourceEntity(119U);
    msg.setDestination(56310U);
    msg.setDestinationEntity(180U);
    msg.command = 97U;
    msg.htime = 0.8633881721439272;

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
    msg.setTimeStamp(0.7118073042631533);
    msg.setSource(36451U);
    msg.setSourceEntity(171U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(29U);
    msg.op = 210U;
    msg.file.assign("BPCGLBLKHMVSCGIJVSMVBXSETVQRSWJKGZVDISJSITHIYZZBQP");

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
    msg.setTimeStamp(0.08484220812478405);
    msg.setSource(62568U);
    msg.setSourceEntity(156U);
    msg.setDestination(49694U);
    msg.setDestinationEntity(108U);
    msg.op = 16U;
    msg.file.assign("HNAOPQGXXWGWXTVEYTUHFUQIPAEGCEGLSPCRRYFECDQJOLCKMKSQHBBQNCSNLYFEVPVZQIIPJJIYUZOWG");

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
    msg.setTimeStamp(0.16146441573940207);
    msg.setSource(27122U);
    msg.setSourceEntity(22U);
    msg.setDestination(44325U);
    msg.setDestinationEntity(247U);
    msg.op = 125U;
    msg.file.assign("WIKIRQEPNCDKNZJIVXMCHEONRXUZGOWSDXTQHROVLBWHWMMBBKFGUBJZIEQHMRFEAERGPNRLDDAYUCECOTWECMOGXQUVWBOFDJVUYSITKIGSLLSFWABFYSVPIGRQNICOVZLYJRQBYPQXSPNZDZFSCGWHWJXRFJVGBJXPYBHKSBTPOAOTHZZLUNGWSXTDEATFKAUZDMJUXNKVQFGYCPLCPPVSHUJCDNYMMAFKTDTZILLXQR");

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
    msg.setTimeStamp(0.901564199024935);
    msg.setSource(26282U);
    msg.setSourceEntity(102U);
    msg.setDestination(189U);
    msg.setDestinationEntity(68U);
    msg.op = 75U;
    msg.clock = 0.19394514493962478;
    msg.tz = -95;

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
    msg.setTimeStamp(0.7431715812210221);
    msg.setSource(7088U);
    msg.setSourceEntity(64U);
    msg.setDestination(31709U);
    msg.setDestinationEntity(214U);
    msg.op = 59U;
    msg.clock = 0.6883182510503049;
    msg.tz = -73;

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
    msg.setTimeStamp(0.5509873690978369);
    msg.setSource(35342U);
    msg.setSourceEntity(39U);
    msg.setDestination(54124U);
    msg.setDestinationEntity(28U);
    msg.op = 1U;
    msg.clock = 0.5565456797946795;
    msg.tz = 115;

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
    msg.setTimeStamp(0.5808705494155388);
    msg.setSource(19948U);
    msg.setSourceEntity(248U);
    msg.setDestination(46618U);
    msg.setDestinationEntity(223U);
    msg.conductivity = 0.6017494049127523;
    msg.temperature = 0.5668947274145283;
    msg.depth = 0.48640688374956365;

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
    msg.setTimeStamp(0.9677008007670281);
    msg.setSource(50567U);
    msg.setSourceEntity(57U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(77U);
    msg.conductivity = 0.31465379903890467;
    msg.temperature = 0.9487363421093924;
    msg.depth = 0.6409590460652589;

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
    msg.setTimeStamp(0.5183107436084875);
    msg.setSource(41561U);
    msg.setSourceEntity(180U);
    msg.setDestination(5340U);
    msg.setDestinationEntity(168U);
    msg.conductivity = 0.8213692879803645;
    msg.temperature = 0.0499909350981429;
    msg.depth = 0.3730105577419335;

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
    msg.setTimeStamp(0.3489392706377845);
    msg.setSource(2087U);
    msg.setSourceEntity(112U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(207U);
    msg.altitude = 0.9166561129192939;
    msg.roll = 17395U;
    msg.pitch = 13101U;
    msg.yaw = 55202U;
    msg.speed = -29597;

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
    msg.setTimeStamp(0.43760452932256466);
    msg.setSource(19164U);
    msg.setSourceEntity(17U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.4496723175534475;
    msg.roll = 54943U;
    msg.pitch = 30443U;
    msg.yaw = 49957U;
    msg.speed = 21760;

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
    msg.setTimeStamp(0.09809368980304245);
    msg.setSource(24508U);
    msg.setSourceEntity(181U);
    msg.setDestination(40328U);
    msg.setDestinationEntity(51U);
    msg.altitude = 0.6879838425639692;
    msg.roll = 38663U;
    msg.pitch = 36042U;
    msg.yaw = 19097U;
    msg.speed = 4269;

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
    msg.setTimeStamp(0.5131646683945574);
    msg.setSource(42427U);
    msg.setSourceEntity(160U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.31475167871016774;
    msg.width = 0.012149298035477374;
    msg.length = 0.4326214355626312;
    msg.bearing = 0.7709979820819526;
    msg.pxl = 29322;
    msg.encoding = 6U;
    const char tmp_msg_0[] = {-68, -44, 58, -101, 57, 111, 122, -91, 24, -28, 65, 50, 93, -62, 104, 36, 113, -87, -68, 105, 12, -16, -109};
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
    msg.setTimeStamp(0.969516027541779);
    msg.setSource(29007U);
    msg.setSourceEntity(107U);
    msg.setDestination(12759U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.5582563952794244;
    msg.width = 0.3709690237532315;
    msg.length = 0.15061686529442364;
    msg.bearing = 0.266380997491511;
    msg.pxl = -10356;
    msg.encoding = 194U;
    const char tmp_msg_0[] = {-60, 91, -1, -112, 5, 27, -6, -61, -76, 43, 90, -71, 61, -97, -66, 54, 82, 12, 83, -102, -100, 109, 95, 2, -108, 111, -33, 67, 108, 69, -5, -43, 14, 75, 54, -52, -27, 110, -91, -108, 48, -51, -78, -71, 87, -55, 125, -104, 58, 103, -73, -117, 55, -61, -28, 33, -117, 25, 71, 91, -22, 90, -106, -63, -99, -65, 71, -81, 7, -107, -48, 48, 42, 98, -56, -95, 51, -20, 76, -8, -106, 2, -80, -69, -90, -16, -91, 86, 65, 70, 126, -79, -87, -30, -54, -128, 36, -106, -100, -63, -65, 38, -86, -114, -39, 75, -89, -35, 76, -63, -95, 26, 18, 22, -53, 33, 3, -17, 93, 60, 23, 47, -6, -41, 54, 87, -106, -98, -10, 72, 0, 60, -55, 120, 85, -64, 35, 102, -115, -79, 125, -18, 113, -8, 76, -79, -85, 106, 19, -49, -49, 5, 47, 116, -71, -37, 37, -75, 9, -123, 80, 73, -25, 67, -125, 45, -27, 31, -93, 85, 39, 58, 47, 22, 66, 16, 17, 31, -25, 122, -74, 91, 103, -74, 27, -65, 106, -100, -27, 42, 7, -125, 16, 8, 28, 79, 57, -45, 103, 27, -79, 21, -1, 118, 108, -87, 106, 96, -88, 53, -89};
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
    msg.setTimeStamp(0.5705206861060642);
    msg.setSource(55158U);
    msg.setSourceEntity(229U);
    msg.setDestination(31810U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.38436525499784324;
    msg.width = 0.23159441797020963;
    msg.length = 0.11794032832811918;
    msg.bearing = 0.9610091421509557;
    msg.pxl = 1596;
    msg.encoding = 72U;
    const char tmp_msg_0[] = {96, 3, -99, -75, -23, 68, -115, 44, 106, 71, 124, -122, -126, 96, -53, -56, 43};
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
    msg.setTimeStamp(0.5131640074619362);
    msg.setSource(56203U);
    msg.setSourceEntity(98U);
    msg.setDestination(34841U);
    msg.setDestinationEntity(130U);
    msg.text.assign("BRHOAOBYOGZXATHNFCWWXGMCXQCOILFGSNAMEERQEAKOYQLJJJOTYFQHCHWUFZNXTIIBPETVUDKSOPHEUZAMNEBIBPHDIOVKQULMRSPJCKRIOXIVXLXFLYBIVVUXCZGVFKJMPTWKXGAPQBVRZYWWJQZGPFNHPMJSUWEFCMADNMFJIPGSORNYCHWD");
    msg.type = 142U;

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
    msg.setTimeStamp(0.5404022495981751);
    msg.setSource(57672U);
    msg.setSourceEntity(235U);
    msg.setDestination(59219U);
    msg.setDestinationEntity(224U);
    msg.text.assign("JJDZMJKNMUSGMRKDCPIQNGXOTOBKAJWFMWCRWPAIZQDRKBGT");
    msg.type = 18U;

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
    msg.setTimeStamp(0.858435558161795);
    msg.setSource(61919U);
    msg.setSourceEntity(144U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(137U);
    msg.text.assign("FOEVQPDNQUQOUJVXNVKZWABTDLYTSNIZWNTCREQMBDPIXQRWAYWLOGDNKPJBCZVMXSLZCPZKGUTEYLIPSKFHVHHBZHOHFBRUVLXADEXMPOFLTMJNEJIMASSPJNOCOSQKIGNWYATBMSDVGIJPAZMFGQRAL");
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
    msg.setTimeStamp(0.8418455568826335);
    msg.setSource(24361U);
    msg.setSourceEntity(14U);
    msg.setDestination(44106U);
    msg.setDestinationEntity(124U);
    msg.parameter = 233U;
    msg.numsamples = 208U;
    msg.lat = 0.5342808934586294;
    msg.lon = 0.6682568526991851;

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
    msg.setTimeStamp(0.2764017188457437);
    msg.setSource(47353U);
    msg.setSourceEntity(165U);
    msg.setDestination(2913U);
    msg.setDestinationEntity(235U);
    msg.parameter = 45U;
    msg.numsamples = 83U;
    msg.lat = 0.07475646826138882;
    msg.lon = 0.14736055615166155;

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
    msg.setTimeStamp(0.39008286029151207);
    msg.setSource(46850U);
    msg.setSourceEntity(106U);
    msg.setDestination(27959U);
    msg.setDestinationEntity(115U);
    msg.parameter = 243U;
    msg.numsamples = 12U;
    msg.lat = 0.24864080123048582;
    msg.lon = 0.19322888378431258;

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
    msg.setTimeStamp(0.18139975127355878);
    msg.setSource(33275U);
    msg.setSourceEntity(45U);
    msg.setDestination(19724U);
    msg.setDestinationEntity(60U);
    msg.depth = 44232U;
    msg.avg = 0.5736359842335476;

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
    msg.setTimeStamp(0.7316358931893878);
    msg.setSource(20496U);
    msg.setSourceEntity(182U);
    msg.setDestination(602U);
    msg.setDestinationEntity(0U);
    msg.depth = 585U;
    msg.avg = 0.2712248663039848;

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
    msg.setTimeStamp(0.020482247984770274);
    msg.setSource(42466U);
    msg.setSourceEntity(137U);
    msg.setDestination(56048U);
    msg.setDestinationEntity(34U);
    msg.depth = 55925U;
    msg.avg = 0.6624551169989275;

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
    msg.setTimeStamp(0.21808032314805592);
    msg.setSource(8152U);
    msg.setSourceEntity(190U);
    msg.setDestination(48196U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.4410890172009956);
    msg.setSource(1841U);
    msg.setSourceEntity(133U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.7233807381410376);
    msg.setSource(25482U);
    msg.setSourceEntity(74U);
    msg.setDestination(43789U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.2736693968316589);
    msg.setSource(57279U);
    msg.setSourceEntity(66U);
    msg.setDestination(62582U);
    msg.setDestinationEntity(53U);
    msg.sys_name.assign("OCXWENKMYFXTUSMUJALKNOPJNVRPERIDLLQAXYRNPCTJVERVZNWHEZGHCNALDCRQQZKDLUYGOBVBYOTJCCWBMUKGVFWGLQFUPEFGQRUMBJUSITPZPEWNXKICZWJVXKXCAOLHXYIDTVUEOMSWNIMSNIWMAYZCPQSTJTOFSPYPEDKFTBJLQXFHDBOIRHEMBNGSYAUZLWKAZKHGXHBAZKQJORDAVFEYDPCFHSLHJVVQSWGRTBQB");
    msg.sys_type = 121U;
    msg.owner = 38027U;
    msg.lat = 0.4443211291944247;
    msg.lon = 0.6147792490469717;
    msg.height = 0.943194093741086;
    msg.services.assign("IEJVEWLCKHEGGETCPIITDMYXXFMEFTOGAKWNKSTRXH");

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
    msg.setTimeStamp(0.026842449925074452);
    msg.setSource(51531U);
    msg.setSourceEntity(182U);
    msg.setDestination(55278U);
    msg.setDestinationEntity(33U);
    msg.sys_name.assign("ORHNLVARQTQIKKQBVFYIBBGWOWTRJZJZDAZKASARIUCNTOTPXPHPWQWUQQMVMZBRHRNBPGFNACLOPYIFRQMCISLAYDFTCOTMGKEHMAXGWAURULECUMXSOJVKWDGBPXSLWHFSJOLCBHXSSIDIPGTPFZNZXSBKHJFHWZMCYPVSZUDLKVNBNJYCYRUCVXIELEYDDOQCWTXHVQULPGSMKLXXATGMGETEJEMJKEWEZYFKNYNVO");
    msg.sys_type = 213U;
    msg.owner = 45788U;
    msg.lat = 0.905215610578816;
    msg.lon = 0.23223547264644984;
    msg.height = 0.6059540697203364;
    msg.services.assign("SIZGAOGTUXITFUJSDXQQQBZHJVFVCPDBFEXEVSKKUVMNZNPDHPWHWHZGSAKOHZVYNRRYALWNTLEFHVIMZUOHUMBQAINTDNXSAFCNRSEMPKNEKYZTGCOFJLORDASDRKMWYKEQRHWHQIRVOJOXWMYKDGGSMTLVJJWCGVFARYUGQGIOUBQXBPZPCPJYTXPELFMIUXIETYFLMCCBCNTWIRHDACULBYKXLZCBADOFPQJIEJESLQLWX");

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
    msg.setTimeStamp(0.971344797066906);
    msg.setSource(39206U);
    msg.setSourceEntity(193U);
    msg.setDestination(6207U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("ITLALMUEBQSNJYINPBYUYUMWIDHXCIBSOMQQKSTUPOKDTODBJWAQAUGPKRNSRRCZZBLEGLZMXEOJSWTASYNUSDZVKOJNIJDZMTEJKHWFJHUZERTLMVCNPIVOJIEZGIHXLFXHYHBFCMFJV");
    msg.sys_type = 197U;
    msg.owner = 47848U;
    msg.lat = 0.78231329559541;
    msg.lon = 0.33083872870734177;
    msg.height = 0.054343600454921814;
    msg.services.assign("CQYRFGWPNCPVBFLOUMMXJCDBAVTMCEGAXTBSXHXYIYZZWYJNIFBILOZHILHSSKJSOKHZPAIYYJSPJJJJGNYMATQGCRAEKLZNBWWFTEZQKWMUVVLTHPVXEZWHEXDSPUUORGRWOPLDGJTMUBTLERIAFUDDQRQUTIPNEFKPBXNMEHVKMIWHFMOYSUQUZFCJKXDTECQ");

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
    msg.setTimeStamp(0.8834305634280736);
    msg.setSource(56157U);
    msg.setSourceEntity(62U);
    msg.setDestination(7469U);
    msg.setDestinationEntity(91U);
    msg.service.assign("TPJZLVTWQFOJCSZLNTSPGPNBXYEWRIDBMXUKHGCXRVAYOZERIAMQPLAEJHVETUYPIJSFLDGDOTVCKLXUMCUUWHNGKEHSZAAAPGDREAYVEWDKFLSKWMUMCPVMBVQIUNQKHXOYGRBHNLLMFZAVYQQRTDTDNCOQJFADVZIWMSCIJBKOJYCIKKXOWBUXRXYSGAJLKMYCQGUWOORPIWGHIESNQULZVZRSNFZFBMD");
    msg.service_type = 203U;

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
    msg.setTimeStamp(0.3108122855420695);
    msg.setSource(43514U);
    msg.setSourceEntity(77U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(103U);
    msg.service.assign("XRTTEKWHVFBMOWMQYAKYIWJAXLJOPAFGYTJOORCZCPRSKSRQTUUSEYNCQRZHQLZAZTEJVEMNODRIDCZLUKWNWIJXFKAUDUDMKLLIXYMUDPQSUNMPHJVTOVTHJGGFLNDXZQKBUVUIXOZCRPXFAQWWISTJSYJUQCCVRFKHBLPMGYYVDHLRZRASXNGBELAGNMXHSFSPPNNGZVZWIBBIE");
    msg.service_type = 66U;

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
    msg.setTimeStamp(0.029341463553159253);
    msg.setSource(58557U);
    msg.setSourceEntity(86U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(208U);
    msg.service.assign("OFPMPPXVGJUBLHMXGXIDAXNKKGDVLFTNUBAIOSKNRBDUSBTVJWCHKOOOTFXBDEENOSQJWKJSMOLPKTRVRCBTNYNCUYTHYWJNBSURBRKSDGFFJWDEQTYVIZBVSQQGWX");
    msg.service_type = 65U;

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
    msg.setTimeStamp(0.6304719501523309);
    msg.setSource(53801U);
    msg.setSourceEntity(84U);
    msg.setDestination(56397U);
    msg.setDestinationEntity(71U);
    msg.value = 0.6801085766362622;

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
    msg.setTimeStamp(0.3534761697836889);
    msg.setSource(11729U);
    msg.setSourceEntity(53U);
    msg.setDestination(26469U);
    msg.setDestinationEntity(58U);
    msg.value = 0.19676255941097576;

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
    msg.setTimeStamp(0.25003946661829224);
    msg.setSource(24244U);
    msg.setSourceEntity(109U);
    msg.setDestination(17480U);
    msg.setDestinationEntity(129U);
    msg.value = 0.04644889179426526;

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
    msg.setTimeStamp(0.5895980238129302);
    msg.setSource(1194U);
    msg.setSourceEntity(69U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(238U);
    msg.value = 0.690777234995378;

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
    msg.setTimeStamp(0.21288673973903227);
    msg.setSource(34307U);
    msg.setSourceEntity(248U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(19U);
    msg.value = 0.23331006539596488;

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
    msg.setTimeStamp(0.05928139170404678);
    msg.setSource(178U);
    msg.setSourceEntity(155U);
    msg.setDestination(35224U);
    msg.setDestinationEntity(202U);
    msg.value = 0.8832242517877213;

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
    msg.setTimeStamp(0.6527930334440243);
    msg.setSource(13898U);
    msg.setSourceEntity(105U);
    msg.setDestination(46265U);
    msg.setDestinationEntity(140U);
    msg.value = 0.325707835003202;

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
    msg.setTimeStamp(0.516794922150488);
    msg.setSource(50063U);
    msg.setSourceEntity(31U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(248U);
    msg.value = 0.7383935593188536;

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
    msg.setTimeStamp(0.48185103253668815);
    msg.setSource(32219U);
    msg.setSourceEntity(217U);
    msg.setDestination(44317U);
    msg.setDestinationEntity(98U);
    msg.value = 0.20425290745626434;

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
    msg.setTimeStamp(0.2759724190900583);
    msg.setSource(65325U);
    msg.setSourceEntity(69U);
    msg.setDestination(43351U);
    msg.setDestinationEntity(92U);
    msg.number.assign("HAFLSVNTZLTKGDWEORHHKWDGPJWOTXRQFPPNIT");
    msg.timeout = 36443U;
    msg.contents.assign("FOZAQHWKTKBDIUSLTQMZSXAUDBRCOLLNAASNEKYVUQXREEQWCAYGOTMIVCTSNGDPMRAZRNHGPBSJIECJ");

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
    msg.setTimeStamp(0.306970309128065);
    msg.setSource(31031U);
    msg.setSourceEntity(3U);
    msg.setDestination(28376U);
    msg.setDestinationEntity(44U);
    msg.number.assign("OQLINNUPIXNFPPZRBNRMNYDFXZSRMLPZZPEOXBZCDWUYYVZNYDOHVTTLOOKTQFCTPJEGFLVWYRSHZUQTKXCJTEBRX");
    msg.timeout = 4474U;
    msg.contents.assign("RRNKIBLUIQYSQPNMGCMSZZIYUHCKPENRXKUYBCFIEKWBTUGNFDTNERLJCJMWVNQZPXQOVAEDAFZIHJJGBWRLSWOPKQAPRRTYOGOTGPMPOAMXLCXVQAADSXEZDAVQTSHXSOISWLUCFLFQICYOYWYNJMKQTFHFSDEOFHEMRBWBKWGBUOVZLDXNVBXKCZHTUZJYXDBDLVHPSEAFUGTTJAZHRUKFRHCCPVAITIEXLLWJKGEVMGJM");

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
    msg.setTimeStamp(0.2957903791728784);
    msg.setSource(15434U);
    msg.setSourceEntity(40U);
    msg.setDestination(12239U);
    msg.setDestinationEntity(81U);
    msg.number.assign("XBLQZCLGBXIMFQDOSNGHFWFGGLIBKYYKDYXAOSPWZETAEITOJDMKOJTFFIIGDWRNXVZTANMEZRAWZCEEVXYDPBIUDRZ");
    msg.timeout = 34056U;
    msg.contents.assign("MHITLPGDCNOHSYBIABLTRSJYSFYPGAUJDNHZHUQOI");

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
    msg.setTimeStamp(0.7199829281666877);
    msg.setSource(64521U);
    msg.setSourceEntity(205U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(57U);
    msg.seq = 2482350953U;
    msg.destination.assign("SNOWSOKDWWQJLEAYOVJARLHV");
    msg.timeout = 21133U;
    const char tmp_msg_0[] = {64, 25, -73, -18, -118, -103, -62, 82, -112, -49, -105, 123, 93, 44, -108, 20, -36, -65, -61, 18, 56, -108, -10, 53, -101, 103, -125, -53, -31, 85, -21, -83, -113, -16, 97, -108, 80, 101, 77, 93, 93, 82, -49, -66, -20, 75, -6, -65, 56, -37, 90, -83, -41, 117, 31, 114, 53, -96, -3, 91, 44, 28, 119, 114, 85, 63, 13, 21, -9, -12, -120, -35, 89, -29, 7, 114, -61};
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
    msg.setTimeStamp(0.8287948633849427);
    msg.setSource(33388U);
    msg.setSourceEntity(40U);
    msg.setDestination(18257U);
    msg.setDestinationEntity(97U);
    msg.seq = 3750173145U;
    msg.destination.assign("QZLBSOAVKHQVKGMMVHNMSTLKGPYAUXJKERUEEFELBZIAYHPZDMIOPCQROMOQOUEHJUVIWRBMWQJZYFBNXWIJBKNEOTXILGINDJ");
    msg.timeout = 11377U;
    const char tmp_msg_0[] = {-27, 48, -17, -96, -124, -126, -11, 101, 111, 113, -28, 53, 76, -40, -126, 72, -56, -84, -72, -107, -22, 58, 25, 5, -5, -61, 48, 23, -42, 28, 104, -26, -38, -108, -96, -80, -10, 124, 58, 92, 28, -78, -106, 100, -124, 46, -77, 6, -16, -60, 21, 100, 53, -111, 6, 124, 61, -42, 77, -125, 59, 82, -100, 72, -104, 12, -9, 47, -112, 24, 34, -75, 102, 58, -85, 37, 45, -76, 46, -126, 67, 105, 110, 34, 112, -69, 79, -24, 19, -119, -29, 85, 48, 35, 38, 99, 115, -105, 89, 45, -106, 47, -99, 23, 64, -60, -109, 98, -60, -48, 75, -93, 63, 13, -8, 106, -5, -30, 27, 90, -57, 123, 39, 100, 30, 55, 38, 28, -20, -70, -30, 102, 112, 40, -52, 65, -65, -41, 39, -86, 64, 3, 83, 83, -66, -62, -115, -126, 91, -67, -56, -13, 53, -36, -121, -127, -123, 5, -21, 114, 70, 59, 79, 54, -113, 55, -63, 52, -122, -61, 21, -64, 36, 57, -31, 107, -86, 61, -110, -118, 112, 103, 15, 42, 122, 86, -75, 68, -12, -46, 80, -76, 10, 27, -40, 92, -29, -70, -30, -53, -102, -103, -57, -19, 40, -26, 87, -92, -121, -66, 84, 68, -29, -1, -101, -71, -42, 108, -23, 121, 21, -50, -46, 109, 106, 0, -73, 12, 68, 27, 52, 109, -24, -73, 57, -18, -30, -26, 5};
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
    msg.setTimeStamp(0.5352932097821844);
    msg.setSource(62700U);
    msg.setSourceEntity(240U);
    msg.setDestination(6895U);
    msg.setDestinationEntity(6U);
    msg.seq = 2345538454U;
    msg.destination.assign("EFMZYJYZJOGNABQTAEQMZCZANWXGRNOPHQRTZKWBGWDYKEUJOGSOMAKUAXREVWADDYQTFIVCWNWSVMI");
    msg.timeout = 9198U;
    const char tmp_msg_0[] = {119, 7, 60, 16, 91, 66, 20, 26, -31, 60, 110, 116, 16, 1, -98, 38, -32, -67, -49, 16, -120, -41, -45, -52, -70, -67, -45, -125, -109, 58, 76, -65, -21, 123, -123, 72, -121, 59, -13, -19, 37, -104, 37, 47, 10, 13, 11, -41, 13, 42, 41, 38, 16, 90, 113, -85, 114, 60, 12, 91, -79, -127, -12, 63, 15, -55, 95, -11, 84, 57, 49, 69, -48, 46, 21, 83, 13, 73, -83, -67, -92, -6, 35, -80, 73, 39, -123, -65, 95, 126, -100, -92, 53, -127, 66, -123, 18, 2, 42, 70, 44, 62, -87, 100, -48, -126, 66, -128, 25, 102, 93, -93, -103, 38, 50, -89, 13, -78, 1};
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
    msg.setTimeStamp(0.8507749353065166);
    msg.setSource(21839U);
    msg.setSourceEntity(14U);
    msg.setDestination(58245U);
    msg.setDestinationEntity(51U);
    msg.source.assign("KIXVTFYYVMNCQKUUKZWLKMZTHSFLUGAEDUJMJCAVTLKMNFRKFNZRUDTQHIIHBFNBOJYYCXRRBHNSUNJFIDHQWAXTPJYGETAYBLLRGIFQZWCJVTSLICVLZP");
    const char tmp_msg_0[] = {2, 37, 11, -112, -12, -32, 28, 76, -49, 88, 52, -14, 82, -8, 72, -125, -123, 113, -21, -95, 78, 124, -113, -23};
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
    msg.setTimeStamp(0.562097199274703);
    msg.setSource(18214U);
    msg.setSourceEntity(227U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(175U);
    msg.source.assign("YIETSCTVSMIECPGZPGHMYFEBGZZPXBQBJBDZTGRRJMNNAEUQXQGAGUFPPHQDCYQKZSFGLFEURZBADKJCPXKUWNGVXFKOAIJCQWWYCPJHLIOIZOVPHDRMDIIHWLXSIBLTTLKBTAQNATPRZRZAWXCUWLCEJVLHMSODQZYXBFRGBYJUONELNVVRVEKNXTEJQOYVHDLGYHXPKETMIADYMVUSFANHOBRTC");
    const char tmp_msg_0[] = {-29, 75, -12, -37, 61, 30, -96, 35, 114, -9, 75, 31, 1, -27, 41, 26, -44, 87, -124, 122, -68, -120, 21, -70, -78, -27, 76, -36, 53, -25, -120, -118, -22, 104, -103, -112, -57, -122, -17, 90, 19, -126, -76, -73, -79, -40, -121, -102, -57, -10, -52, 123, 55, 45};
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
    msg.setTimeStamp(0.8786674039076261);
    msg.setSource(33513U);
    msg.setSourceEntity(46U);
    msg.setDestination(13694U);
    msg.setDestinationEntity(78U);
    msg.source.assign("YSGFBCKHXWQOIBNYLUXXYAXFRGHYMFZLBPUGCZAGYERTITFARENUJDQBZPSZWUHPUWYLUMTLNWVCTBTSNVPSEHLCJTDLFSAZKXTVJYCLHJXYHJRBENOVTMRQVOWABHIGQOQBRPPDEFZXQOKXUREIMBJGQGYLJIVWIMSOZKPSCVDQCEKQMIAWRXDNWLKIVIMKTJENKUPDAUWGOVFWJMLUCKNGFDCEFE");
    const char tmp_msg_0[] = {-72, -42, 72, 41, 98, -1, -93, 79, 54, 66, 10, 112, 54, -79, 124, 96, 75, 6, -104, 9, 124, 36, -89, -29, -6, 74, -4, 92, 27, 9, 92, 121, -53, -38, -72, -82, 80, 6, -71, -36, 42, -110, -104, -121, 92, -17, 121, -22, -83};
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
    msg.setTimeStamp(0.069523834792795);
    msg.setSource(17921U);
    msg.setSourceEntity(217U);
    msg.setDestination(20844U);
    msg.setDestinationEntity(56U);
    msg.seq = 3865076880U;
    msg.state = 195U;
    msg.error.assign("UEIHADDTVANEJGRDTLVGXPVEZAGQCGLOVKVTRBTTVFASERDTHCGDWRBSGYGNZBBKNFJDWOFWKMFQUSOLYEGQMWHOHLXUBTHYUSMYCNHXCJQBJTAYOOJ");

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
    msg.setTimeStamp(0.2937807761388429);
    msg.setSource(9830U);
    msg.setSourceEntity(101U);
    msg.setDestination(23148U);
    msg.setDestinationEntity(209U);
    msg.seq = 940956706U;
    msg.state = 5U;
    msg.error.assign("FSDBRNHZRTGBPUZBAZXDYMDTLKEYJQJUNKMMHEFPXCIQKGRNNRYAOOIYOZVCEHALFKGLEVOFRQPB");

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
    msg.setTimeStamp(0.36973338151906543);
    msg.setSource(23227U);
    msg.setSourceEntity(64U);
    msg.setDestination(53044U);
    msg.setDestinationEntity(50U);
    msg.seq = 3356610795U;
    msg.state = 43U;
    msg.error.assign("PYCGDPCAFJHGWGCXLIFIMTQZTPXYDYQPJBFYHQWHDMDUVREUNNAQBCQWZDLSAUIXLZIPVMJMERXEHMTCONKAZCVQTEHVHCUNHSIGKDDZVRZENPSUVBRWVYQWOSEAUXGQHZSASXFQQXHAKFSLOWOIOZOZUFEYDGTLJCPJSKTLMSTELNYAIXIGLNRYXNWTBTURPKDVKY");

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
    msg.setTimeStamp(0.9611480929803159);
    msg.setSource(9510U);
    msg.setSourceEntity(156U);
    msg.setDestination(25392U);
    msg.setDestinationEntity(39U);
    msg.origin.assign("HCPCVDROTBNVDVRCRVRYQD");
    msg.text.assign("WJCTJSXHULVZWHMSLGAUFKTNBDRGZPPKAYFIJKUVEYQYKZHLQQQELQJKOCGUQOILBAGWOSHTGBFKOHRXDNZPAPBPERUKLVCJDWNTUTSJRAXWAYEZHKSFIZZZXZEPBILVLMUNNDNWXEYWETYMDNDXIABUHRXUFYJGPOSVEACHRFAYKGIQEJLIICWMRSCBFTGKVOZMIICBDGOCCQWFMTRX");

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
    msg.setTimeStamp(0.5218305781372292);
    msg.setSource(35999U);
    msg.setSourceEntity(168U);
    msg.setDestination(5847U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("QBYZQRJNYPTZBXOMEWOVJTEUESTICXWHHGKGNQXFGUKDGDCKGHNYFZAUSORGVQZTFLHQERPOSCBAEHLFKMBBAOCIWNSZPVOAVLGCLUDXWHIMTWRNJIPPSTCUIUEKTXUDZOFMQVDTLXKGCRJRIRQHBSJMBU");
    msg.text.assign("KFHYIBALDFZVXGXSVEKDBWAJOVFUJXBJBAEGZCCNTOJQKWARIVELMUKUWWUFMQINJONEBSQHTWZKQIDFHQJGSKXSVSYIXYNGFBNEJKFNTYAPACRECHOVORHMCTPTZUPKXICBEREAKSINGPOEILQTUQMRDPDCLCDRWVXAMWFFCZMGHMSGYJDTBMZVMAZHINUOZMCPLYNOQSYKRHRLDLGLXPVUTWEGQSLANISRHJBPZ");

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
    msg.setTimeStamp(0.9761301762093164);
    msg.setSource(21576U);
    msg.setSourceEntity(201U);
    msg.setDestination(23686U);
    msg.setDestinationEntity(103U);
    msg.origin.assign("VKSSRUEPZRYEZPGAUHCHNVDLFIDWMXAEMYCKQDVPVSXJIWKOCEJSHMPXWOYZITVQVBTISWKTENTYTRXYUN");
    msg.text.assign("PEPVDHLKKZXYVRQQCWYNAPZNFFUYKHPGIFNKBBXIUQGMTQOAHUSKHBMKPYJKFYADEATJMWMBEHMYCEIUDWNCGBERJRCHWOZCLTGTJJLUORULQMXFTPVOESWTNOIBFUGRIUDQWGISGHEYLXPZAWGDNZDAORIILBSLDFZSICCCKONLGJOKAVXVRFDVSYOSOKUMWFQVYAMHTQNSSYAJZJU");

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
    msg.setTimeStamp(0.9887401405967499);
    msg.setSource(63692U);
    msg.setSourceEntity(81U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("BNYQOBRLORCRFFVIJLEPZAAWDJBTYYOHISCWYXGXYOFSEHVJHIUSRLMECVXWABTXYVJMFNWXNKDTUQYSCFHDRUNKBDHPKLJKOALGRZPIGOVWPLEEZVDGWIQQDLSDAQGSVTHEDGTNNUTRTEZWWSEHYQGZXJKXMPGXWABKQAMJRECHHUIZUZDEBFLZCTBMPIMPFNQJJZNKSFYPDRTUUFSVOAFPMNWCOQBKNJIBKIQAXMV");
    msg.htime = 0.21491231194197424;
    msg.lat = 0.7838569574904001;
    msg.lon = 0.5332619854596125;
    const char tmp_msg_0[] = {118, 94, -6, 123, 45, 80, -121, 110, -37, -38, 73, 8, -45, -60, 89, 12, 34, 16, -98, 62, -30, 80, 103, -19, -54, -13, -11, -79};
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
    msg.setTimeStamp(0.6786816404140158);
    msg.setSource(25570U);
    msg.setSourceEntity(145U);
    msg.setDestination(45844U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("LFVLZPHGBFMFRYHBCWVSVIYKDZKJUJSVTGICKAAVCCILBNKDFUXYUQAQXTQPFATWRWFZRRCZKKWYUJORXUSBGTXJEGVMSRKBJBQKXZDZWOIWEPYAGYTDCAXYGJNYQRGMTLEMGNSTFUKEPWMYZHRENHSBBALINCTXNSZQSZAPEWDULDIEDJDPNQPMJHONGOZLTHVTMAJISBIOUFBRVQUE");
    msg.htime = 0.8769130273339775;
    msg.lat = 0.2462883487353088;
    msg.lon = 0.2251149347478264;
    const char tmp_msg_0[] = {-30, 6, -62, 43, -79, 67, -32, -34, 32, -49, -125, -57, -29, -101, 2, 14, -36, -62, 23, 16, 107, -32, -117, 118, -47, 22, 1, 93, -35, 55, 23, -57, -22, -27, -31, -14, -1, -12, 2, -102, -35, -10, 30, 8, -44, -32, 81, 96, -82, -45, -49, 86, 90, -60, -74, -22, 40, -108, 65, -62, 44, -108, -78, 13, 76, 2, 115, 23, 22, 24, 48, 66, -126, 8, 35, -107, 49, 31, 121, -56, -48, 94, -79, 15, -26, -72, 73, 19, -109, 107, -78, -66, -63, 3, 9, -98, -23, -36, 29, -53, -76, -108, -15, 115, -75, -92, 96, 98, 109, 67, -63};
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
    msg.setTimeStamp(0.09626127204741086);
    msg.setSource(20829U);
    msg.setSourceEntity(159U);
    msg.setDestination(15736U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("ZUSXMRPVEJZLJDESGQDDRBFLVUUPKTTLBIC");
    msg.htime = 0.9829246243904921;
    msg.lat = 0.08155755461145131;
    msg.lon = 0.8025941542571807;
    const char tmp_msg_0[] = {-37, -78, 59, 13, -109, 109, -48, -120, -119, -124, 98, -56, 120, -63, 99, 70, 92, 4, 124, 71, 93, 2, -110, 25, 125, 70, -96, 102, -108, -117, -127, 126, -8, 72, -75, -87, -95, 105, 22, 97, 11, -51, 38, 39, -23, 25, 53, -36, -21, 36, 17, 86, 122, -119, 91, 24, 120, -111, -3, -116, -36, 15, -26, -124, -89, -9, 104, 112, 1, 96, -117, 17, 9, -24, 41, -12, 123, 87, -55, 109, -42, 35, -57, 89, 31, 56, 57, -76, -44, 70, -33, -14, -24, -15, 73, -37, 18, 45, 52, -1, 35, -28, -83, -3, -25, -82, 120, -121, -56, 125, 55, -34, 5, -9, 32, -4, 75, 12, 73, 98, -49, 103, -95, 5, 46, 73, -47, 19, -42, 49, 92, -67, -42, 21, -65, 64, 40, 109, -64};
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
    msg.setTimeStamp(0.08724819014466068);
    msg.setSource(30662U);
    msg.setSourceEntity(5U);
    msg.setDestination(27064U);
    msg.setDestinationEntity(82U);
    msg.req_id = 30979U;
    msg.ttl = 64953U;
    msg.destination.assign("XVTQSKWMUFNDAJZYUQGQMULKJJAAZXAKHCVUXPORPYGFSIWXVNHKMQTWPVGVGGKKITEBQSYZTDLGRTOSNPWCAZCYYKLJWOQCIAZIMFZLMOPWEQXANQOVBDJJNOCKAZWKHIAENDQJWZDHLKXNCRNSTFTYOBBUBRYWMRUJSFXDNGMHDDHP");
    const char tmp_msg_0[] = {-41, 64, 126, 87, -3, -51, -7, 76, 85, 3, 113, 34, 30, -104, -29, 102, -51, 1, 82, -14, -81, -108, -111, 91, -125, -82, 118, 104, -111, -113, -28, 37, 41, -11, 42, -54, 63, 0, 52, -107, 53, -39, 122, 110, 75, 22, -68, 70, -63, -78, -57, -23, -102, 53, 89, -122, -22, -78, 112, 22, -42, -91, 51, -66, -119, -30, 62, -10, -39, -105, 5, -69, -22, -118, 35, 14, 101, -7};
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
    msg.setTimeStamp(0.24306790694301583);
    msg.setSource(49923U);
    msg.setSourceEntity(64U);
    msg.setDestination(4431U);
    msg.setDestinationEntity(250U);
    msg.req_id = 18025U;
    msg.ttl = 51370U;
    msg.destination.assign("CCBWVZKGVUPVXYBKUYATOHVSNINRBPFUKZOSMWKSVYJIUHCFAQSILZRROAXOKMNDCSWPKZRKLWRXTTMWMOCNVAZYOMYYSOLRRJOZNETLMAXWHOJWHAIDVKPXCZLNDCMENVETGKDFDZXYWDVQERPQQTBBUDBNRFTBFBWFHJQGGNLEYBJUIPUOITESLIGJAFTJMAQPLZWE");
    const char tmp_msg_0[] = {-115, -83, -110, -63, 25, -58, -107, -113, 78, 60, -20, 84, -53, 5, 77, -77, -17, 60, -25, 57, 64, 29, 101, -65, -74, -27, 90, 7, 113, -85, -65, -114, 1, -80, -62, -114, 18, 117, 80, -55, -11, 10, 22, 16, -82, -128, -71, 91, 115, -107, 115, -107, -64, 78, 116, -124, 75, -75, -104, 80, -88, 122, -67, 117, 21, 65, 6, -93, -6, -35, 56, 97, -67, 101, -83, 41, -82, 29, 105, -128, 84, -20, -100, -21, -54, 21, -15, 85, 36, -109, 108, 116, -114, 62, 115, -70, 126, -20, -23, -109, -63, -2, -82, 71, 73, -119, 120, -13, 58, 4, 92, 97, 14, 74, -38, 14, -39, 111, 122, -55, 70, -48, -22, -58, -117, 54, 97, -9, 92, -30, -67, 79, -98, -91, -64, -107, -86, -58, 36, -85, 69, 48, -7, -113, -128, -13, -45, -60, -108, -100, 44, -119, 31, -83, 18, -20, 112, -3, 103, -34, -20, -9, 114, -81, -89, 117, -58, -23, 92, 22, 21, 37, -53, 72, -93, 72, 100, -41, 84, 46, -62, -30, -80, -43, -45, -62, 30, -97, -103, 77, -3, 61, -125, 32, 103, 123, -53, 34, 16, 17, -42, 90, -54, -110, -120, -43, 94, 13, 15, -34, 94};
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
    msg.setTimeStamp(0.48505406653833893);
    msg.setSource(44539U);
    msg.setSourceEntity(178U);
    msg.setDestination(55789U);
    msg.setDestinationEntity(109U);
    msg.req_id = 23751U;
    msg.ttl = 35827U;
    msg.destination.assign("AHYTSGMYXPGZRVMECHZSEOXLW");
    const char tmp_msg_0[] = {34, -5, 51, 40, 22, 37, 112, -53, -7, -111, -3, -44, 103, 55, -60, 2, -127, -11, -110, 74, 8, -78, 121, -65, -41, -45, 32, 121, 119, -68, -104, 117, -81, -85, 68, -23, 119, 84, 52, -34, 73, 39, -111, 63, 122, 67, -83, -42, 94, 5, 46, -25, 109, 31, 117, -49, 112, 93, 5, 10, -33, -74, 16, -101, 4, 84, 49, -36, -70, -102, -37, 74, -56, 84, -5, 108, 29, -92, -18, 78, -97, -60, -58, -4, 40, 33, 79, 103, -59, -76, 75, -3, -25, -48, 24, -119, -18, 55, -18, 0, -41, -16, -82, 64, -126, 14, -73, 13, 13, 12, -36, -122, 61, 45, -114, 57, 6, 17, -63, -67, 38, -110, 73, 56, -14, 123, -5, -17, -25, 72, -58, -2, -95, -47, -98, -5, -27, 76, -88, -77, -56, 51, -67, 23, -44, -15, -43, 78, -50, -86, 29, -30, -52, -61, 62, -112, 120, -23, 77, -26, 56, -118, 106, 118, 10, 53, 28, -128, -90, 20, 38, 31, 17, 2, -10, -82, 71, 50, -124, -100, 39, -54, 124, 102, 26, 52, -61, -4, -16, -14, -85, 93, -39, -49, -37};
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
    msg.setTimeStamp(0.7839473653824411);
    msg.setSource(24312U);
    msg.setSourceEntity(67U);
    msg.setDestination(25935U);
    msg.setDestinationEntity(113U);
    msg.req_id = 2815U;
    msg.status = 232U;
    msg.text.assign("YNLDWXUAMBQTKQCYPDUSVAEHUMKMSXFEVNKCLGJGSPYPKQZDWRDZWOUZQVOILQOBRYVYUBYQFPFOBKKDDXDSSGNVTKLAYFEUAMKOVINXSWXJSQGTOKZRCKHJAIZITOHNVJBEWXJOTHEPXPYBTRRHFIGILCYNYMXASLFJXRC");

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
    msg.setTimeStamp(0.20840018962971696);
    msg.setSource(20474U);
    msg.setSourceEntity(148U);
    msg.setDestination(20746U);
    msg.setDestinationEntity(208U);
    msg.req_id = 15061U;
    msg.status = 20U;
    msg.text.assign("YXGFUOPSIXIOWREEKELSAEHHCEYUVJKBWSSIPLEJRPGKKZFVSGUUNLLXJCJTWTOCIAIXBQTNECQJHZQMTGJQRONUBAZCAAKSFBPOWXYQXOAFWJLDEGFUMTUCZHCNIAFVMDLVMMYWJMXISFVCQJMREKTZGKDIRRZQFOLHKWAIBVURYRNVBNXMGHDYYDHXVTGOPTDHBTTCBPBMYWDQVAEHGPGAWWKFMSNOZZ");

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
    msg.setTimeStamp(0.8107642420868982);
    msg.setSource(32062U);
    msg.setSourceEntity(231U);
    msg.setDestination(15695U);
    msg.setDestinationEntity(98U);
    msg.req_id = 50943U;
    msg.status = 167U;
    msg.text.assign("SPEEYIRVIFOHFGBNBTZPKQLSENZREKWOHKGRCTUAOCCXYXCPDYLNDJEWOIVKPMJNJVWBBDWQPMJDTULLEZSNFWHPAXDMSLHQJJDLXNCRNFTUP");

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
    msg.setTimeStamp(0.7985588190679551);
    msg.setSource(58738U);
    msg.setSourceEntity(249U);
    msg.setDestination(26630U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("YHULKWMRRVOWNQFQEDZSIWHBGZFWHLTNMDKORANPYKZXERQBQRJTDMIYQLPZVPISPVHZAKXLXFBLHGUOETZKLXUZVFJMCXJHNVOUHWITDFAJULVLMBOTWWARQSAGRXQZPNKWECGVGJHLZSVGENTLTNIGCQXSOAJCOCMYVDSUYHUUYPBNTOWKJUNOIDJYGPCCUWFMBVQRBFAFXTS");
    msg.links = 1703103786U;

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
    msg.setTimeStamp(0.08976539486209834);
    msg.setSource(28226U);
    msg.setSourceEntity(151U);
    msg.setDestination(57433U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("OPYIWWGTVLVPWHDBYTXSXBJOPDBKZSCGFLAZRPQZJMWH");
    msg.links = 3659581139U;

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
    msg.setTimeStamp(0.7061467742855799);
    msg.setSource(24256U);
    msg.setSourceEntity(232U);
    msg.setDestination(54836U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("YBCSFFYYVBQMBUODUJ");
    msg.links = 1299909926U;

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
    msg.setTimeStamp(0.3175030875902489);
    msg.setSource(541U);
    msg.setSourceEntity(9U);
    msg.setDestination(13506U);
    msg.setDestinationEntity(13U);
    msg.groupname.assign("MIERSBYLANCBXHZKUPIMEQBYAHNZUGVACNEZDHHWUFDRPRWPLTWNIZJWQYVT");
    msg.action = 253U;
    msg.grouplist.assign("ZHHPBFVMNAOPDYTUVNTKYDMIYLOXZLDPKTCWVFBBXSNSOIFWAMTIJFUPOFCJCCAQVKZUPWPPORQHZJFRQSPHWOGPMYFGZSLWVGZFFZRVBZCTMUSDBFLLJNIPXEWWDJBXBEOBIEVJXEHULQMMEVGQDXNTVORICQCYZGHXNAENTLUEYSCEKQMQKSAKNKG");

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
    msg.setTimeStamp(0.22631179959385261);
    msg.setSource(15340U);
    msg.setSourceEntity(150U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(25U);
    msg.groupname.assign("ZDLYZTZOTNEWPMIAVNQUOJFFWTEMEIIGWSNHJBJYDXGQRGGGNDZKRKOPPSZPRFFRDVBHDRJYOUSKSFADIYLRLQQUOBXWRWBCWXOCBYKSOZRDEYFTGUAOEZVDHNUTVIHTKADXFVCUBMRYBGJYK");
    msg.action = 0U;
    msg.grouplist.assign("UQTLESAPZYRKOXMLEZTHKNLUITZBPLSYXWOOREHTCFSBQZIXDNCVXHKBNWPFOSXMJFGKJLJAEIENZREVYMPYDWHAIGTUNRGOCCILNEAXXWIEANRGBXKLDAMAEVLDXQ");

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
    msg.setTimeStamp(0.5793746670867919);
    msg.setSource(45244U);
    msg.setSourceEntity(96U);
    msg.setDestination(18710U);
    msg.setDestinationEntity(24U);
    msg.groupname.assign("QUDCUVEAPTJLNFWYUPXSOFIQUGOZBRKVAGEICGXCZYMHWDMLZZHHBXDXEJZQQLJQTKHQASSLSSGOBBVHUIYOLGVLGNFYFBEUXMRFTXUCIKAFFVSVBUIVNLJPTYATDDNKOLSAHIMRITPERJNPNDMUMHEVNTSYXJWMTPPGGOMPBMKWWRWKBHCNJAFDSKAJZYBCNRRWOTEYELJADKIEKXYHOKUWCFDLYTQ");
    msg.action = 199U;
    msg.grouplist.assign("FNTRECDMUOUCJFERJXHIAYWRFOPZYXPXAEIOLQTDQIFWVYPTQLAZFHVBVEZSDTKBAHFZEAIUCBUWCMHGYGEWXELISMJNUZPOXNMNJWGFBHWQWCQTAYKSKKVABDRXGRLJBQCCMVBYUJYVAMOOGNJLWXLOSQROUQHH");

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
    msg.setTimeStamp(0.016284785111062683);
    msg.setSource(24553U);
    msg.setSourceEntity(13U);
    msg.setDestination(31618U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6661646275765272;
    msg.sys_src = 59910U;

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
    msg.setTimeStamp(0.5857651339738751);
    msg.setSource(25666U);
    msg.setSourceEntity(57U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(31U);
    msg.value = 0.48330892416419013;
    msg.sys_src = 62457U;

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
    msg.setTimeStamp(0.8536725357588777);
    msg.setSource(31450U);
    msg.setSourceEntity(85U);
    msg.setDestination(20693U);
    msg.setDestinationEntity(59U);
    msg.value = 0.4430454593416414;
    msg.sys_src = 34422U;

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
    msg.setTimeStamp(0.027186260521096073);
    msg.setSource(57720U);
    msg.setSourceEntity(117U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4812125383193132;
    msg.units = 50U;

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
    msg.setTimeStamp(0.614055848649722);
    msg.setSource(56530U);
    msg.setSourceEntity(199U);
    msg.setDestination(4237U);
    msg.setDestinationEntity(138U);
    msg.value = 0.4947553892964519;
    msg.units = 37U;

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
    msg.setTimeStamp(0.8877515711003502);
    msg.setSource(55369U);
    msg.setSourceEntity(108U);
    msg.setDestination(58149U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8060317462062356;
    msg.units = 59U;

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
    msg.setTimeStamp(0.4562645717259778);
    msg.setSource(58333U);
    msg.setSourceEntity(28U);
    msg.setDestination(51477U);
    msg.setDestinationEntity(5U);
    msg.base_lat = 0.6793534068484728;
    msg.base_lon = 0.15485001951813182;
    msg.base_time = 0.2839513363128279;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 16871U;
    tmp_msg_0.priority = -107;
    tmp_msg_0.x = -242;
    tmp_msg_0.y = -7806;
    tmp_msg_0.z = -9826;
    tmp_msg_0.t = -5641;
    IMC::UamTxRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 11410U;
    tmp_tmp_msg_0_0.sys_dst.assign("MAEGDXZQFQYNDYQPOMNIGRPSPDKLURCNGJKUIOUSOAUVEHOTUJGFRMSSWABYGOCRCZTUOKIBWONBZXJEPFJXJDATKYWTAARIIVYZNIPVYNGLJLCSHNIPQKKTVQPLADXZRILEEBREAFKTNMBQAHYXEHYIFWCVQDMNBFFBEXWCYFSZFWGHU");
    tmp_tmp_msg_0_0.timeout = 0.7178961377948303;
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
    msg.setTimeStamp(0.8304739355292262);
    msg.setSource(9249U);
    msg.setSourceEntity(212U);
    msg.setDestination(60489U);
    msg.setDestinationEntity(82U);
    msg.base_lat = 0.5048112594039209;
    msg.base_lon = 0.9906875859511036;
    msg.base_time = 0.7844552662270369;

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
    msg.setTimeStamp(0.31259151911316185);
    msg.setSource(32588U);
    msg.setSourceEntity(38U);
    msg.setDestination(59233U);
    msg.setDestinationEntity(33U);
    msg.base_lat = 0.5248539707322307;
    msg.base_lon = 0.8905863437012473;
    msg.base_time = 0.059726562752877244;

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
    msg.setTimeStamp(0.4398470633914747);
    msg.setSource(34857U);
    msg.setSourceEntity(197U);
    msg.setDestination(3076U);
    msg.setDestinationEntity(169U);
    msg.base_lat = 0.4186170537930325;
    msg.base_lon = 0.6333802823644071;
    msg.base_time = 0.03378712493090452;
    const char tmp_msg_0[] = {-63, 87, -2, 88, -76, -19, 79, -3, 38, -107, 86, 73, -16, -117, -73, 42, 75, 23, 68, -9, 81, 56, -4, 24, -70, 112, -18, -120, 77, -64, -32, 42, -44, -45, -125, -77, 32, 26, 3, 7, -24, 111, -74, -79, 50, -17, 71, -43, 106, -12, 126, 117, -93, -17, -66, 57, 114, -93, -78, -90, 56, 99, -4, -122, -124, -34, 119, 68, 79, 119, -122, -38, -100, 87, -67, 108, 78, -44, -97, -21, 75, 62, -82, -127, -22, 26, -59, 90, 62, 118, 73, 40, 84, -47, -114, -36, 30, 78, -66, 7, 63, 83, 38, -23, 70, 86, 38, -82, -21, 104, 82, -92, -30, -78, 67, 80, 98, 24, -3, -17, -65};
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
    msg.setTimeStamp(0.9395684015041318);
    msg.setSource(14914U);
    msg.setSourceEntity(187U);
    msg.setDestination(467U);
    msg.setDestinationEntity(60U);
    msg.base_lat = 0.14378234486695485;
    msg.base_lon = 0.4523854600450896;
    msg.base_time = 0.08615363862041792;
    const char tmp_msg_0[] = {-42, -64, -58, 46, 76, -117, 0, -21, -83, -74, -71, 67, -31, 14, 59, 123, 73, 101, -57, -46, -26, 9, 70, 56, -24, -5, -47, 121, -22, -46, -1, 70, -7, 29, 112, -23, -75, 65, -17, 104, 31, -126, 62, -75, -110, -121, 22, 32, 104, -37, -100, 89, -79, 88, 63, 18, -58, -94, -120, 42, -63, 49, -14, 32, 117, 94, -124, -103, 84, 105, 58, -107, -24, 95, -124, -40, -79, 35, -34, 84, 65, -126, 68, -66, -26, -15, 88, -125, 27, -99, 88, 12, -123, 43, 112, -84, 30, 22, -59, 54, 113, 43, -39, -81, -93, -95, 18, -105, -13, -51, 67, -55, -32, 51, 76, 55, 95, 71, 79, 104, -60, 24, -79, 80, 41, 107, -63, -2, 77, 119, 121, 48, 87};
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
    msg.setTimeStamp(0.29482709740005564);
    msg.setSource(6185U);
    msg.setSourceEntity(70U);
    msg.setDestination(12172U);
    msg.setDestinationEntity(130U);
    msg.base_lat = 0.21476962407874245;
    msg.base_lon = 0.5746735380121363;
    msg.base_time = 0.3772967136236596;
    const char tmp_msg_0[] = {-4, 17, 126, 37, -74, 89, -62, 30, -76, 99, -61, 57, -51, -124, 67, -120, -108, -12, -106, 53, -48, -36, 85, -45, 115, 21, 19, -110, -65, -6, 3, -13, -6, -111, -67, 72, -111, -52, -43, 99, -124, 72, -52, 24, -20, 69, -76, 18, -25, 81, -23, 104, 111, 81, -90, 55, -126, -102, -103, -41, -67, 63, 77, -74, -111, -104, -72, -109, 47, 36, 21, 79, -122, -22, -70, 19, -70, 106, -16, 10, -124, 1, 10, -19, 96, -55, 38, 17, -85, -17, -69, -80, 9, 91, 24, -97, -115, 54, 94, -115, -94, -48, -27, 124, 41, 26, 5, -102, 66, 24, 15, -100, 80, 18, 123, -90, 120, -54, -92, 19, 76, 83, -47, -10, -99, -82, 60, -75, 120, -28, 34, 90, 74, -100, 66, 13, 17, 68, 116, 5, 115, -96, 63, 123, 25, -63, 52, 102, -34, -84, 11, 44, 54, 70, -95, -103, -90, -32, -26, 101, 126, -71, -94, 107, -59, -67, -47, 40, -76, -40, -58, 106, 78, -127, 49, 13, -47, -19, 126, 112, 110, 1, -25, 67, 58, 113, -16, -50, 76, 25, -64, -102, 2, -13, 0, 12, -72, -45, 109, 45, -81, 19, -78, -114, -16, 37, -13, -35, 116, 88, -14, 122, 41, -3, -86, -64, 43, 27, -73, -64, -116, -57, -1, -123, 104, 64, 87, -112, 28, 71, -84, -94, -91, -38, 30, 32, -114, -45, 9, -112, 104, -45, 23, 68, 82, -27, -42, 35};
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
    msg.setTimeStamp(0.24177584753740167);
    msg.setSource(46790U);
    msg.setSourceEntity(62U);
    msg.setDestination(21479U);
    msg.setDestinationEntity(3U);
    msg.sys_id = 13601U;
    msg.priority = -10;
    msg.x = 29946;
    msg.y = -23654;
    msg.z = -29108;
    msg.t = -1178;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.8284463166372971;
    tmp_msg_0.width = 0.7563633643930979;
    tmp_msg_0.length = 0.46321609340040537;
    tmp_msg_0.bearing = 0.5270864844104156;
    tmp_msg_0.pxl = -20184;
    tmp_msg_0.encoding = 101U;
    const char tmp_tmp_msg_0_0[] = {-113, -21, -69, -21, 110, -50, 40, -91, -106, -11, 22, 119, 4, -112, 96, 28, 71, -114, -57, -69, -53, 110, -97, -29, 2, -83, -22, -88, 92, 80, -103, -118, 80, 43, -10, -31, -11, 82, -21, 63, 29, -49, -89, 12, 19, -100, -31, 23, 93, -3, -125, 29, 28, -66, 18, -16, 53, -79, -87, -37, -62, -27, -47, -68, 58, -40, -30, -64, -77, -9, -68, 66, -59, -76, -3, -9, -36, -66, -53, -76, -9, -48, 50, 56, 37, -1, 38, 104, -61, -36, -62, 12, 31, 35, -67, -30, 94, -38, 30, 55, -41, -92, -28, 33, -60, 108, -65, -88, 13, -85, -94, -54, -105, 36, -94, 110, -15, -24, 8, -94, -106, 12, -106, -53, -52, -6, -43, 19, 5, -4, -107, -17, 64, -77, 121, 61, 50, 100, 93, -30, -9, 52, -25, -43, -89, 72, 82, -67, 58, 2, 2, 102, -80, 32, 96, -77, -78, 89, -120, -107, 62, 28, -83, 84, -38, -104, 123, -35, 122, 66, -37, 5, -99, 91, 41, 36, 110, -32, 2, 112, 71, 11, -22, 49, 113, 5, 123, -24, 1, 123, -30, 39, 96, 52, 27, -41, -101, -24, -15, -128, -46, 45, 104, 69, 106, 54, -70, -67, 110, 25, -64, 75, -103, 60, -31, -11, 15, -81, -101, -114, -94, -70, -59, 76, 64, 86, 34, 122, -50, -32, -34, -25, 71, -123, 51};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6033889358423076);
    msg.setSource(2394U);
    msg.setSourceEntity(241U);
    msg.setDestination(16194U);
    msg.setDestinationEntity(24U);
    msg.sys_id = 59989U;
    msg.priority = 80;
    msg.x = -24224;
    msg.y = 21669;
    msg.z = 25089;
    msg.t = 20898;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("QPQDCHZWAYFXFNGIIMCEDFHVWVSNVRWFSUGVCEJHRTJVZQTQS");
    tmp_msg_0.lat = 0.48459025331498096;
    tmp_msg_0.lon = 0.4697393003132081;
    tmp_msg_0.z_units = 145U;
    tmp_msg_0.z = 0.9260982948663182;
    tmp_msg_0.accuracy = 0.8873873548769792;
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
    msg.setTimeStamp(0.7412445634916066);
    msg.setSource(31138U);
    msg.setSourceEntity(66U);
    msg.setDestination(18161U);
    msg.setDestinationEntity(148U);
    msg.sys_id = 34165U;
    msg.priority = 12;
    msg.x = 14132;
    msg.y = -16066;
    msg.z = 28479;
    msg.t = -2697;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 9877U;
    tmp_msg_0.avg = 0.8555136231316778;
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
    msg.setTimeStamp(0.8480318112657406);
    msg.setSource(65300U);
    msg.setSourceEntity(91U);
    msg.setDestination(32797U);
    msg.setDestinationEntity(48U);
    msg.req_id = 35606U;
    msg.type = 78U;
    msg.max_size = 1655U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.2003166231213246;
    tmp_msg_0.base_lon = 0.5730654291644297;
    tmp_msg_0.base_time = 0.8052592117910596;
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
    msg.setTimeStamp(0.5799390340547205);
    msg.setSource(3586U);
    msg.setSourceEntity(163U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(183U);
    msg.req_id = 42718U;
    msg.type = 21U;
    msg.max_size = 32222U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5382476302487026;
    tmp_msg_0.base_lon = 0.9652738244167083;
    tmp_msg_0.base_time = 0.49286536137826165;
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
    msg.setTimeStamp(0.7234459347499823);
    msg.setSource(37581U);
    msg.setSourceEntity(124U);
    msg.setDestination(59270U);
    msg.setDestinationEntity(2U);
    msg.req_id = 9886U;
    msg.type = 49U;
    msg.max_size = 46508U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6246978254871585;
    tmp_msg_0.base_lon = 0.20529578890267597;
    tmp_msg_0.base_time = 0.9781391155368584;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 47607U;
    tmp_tmp_msg_0_0.priority = 12;
    tmp_tmp_msg_0_0.x = -24026;
    tmp_tmp_msg_0_0.y = 1743;
    tmp_tmp_msg_0_0.z = -28389;
    tmp_tmp_msg_0_0.t = -28046;
    IMC::DevDataBinary tmp_tmp_tmp_msg_0_0_0;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {24, 63, -55, 85, 74, -2, 87, -20, 27, -27, -52, 23, 13, -99, 105, -59, 0, 111, 71, -4, 87, 97, -21, 38, -108, -82, -128, 62, 10, 79, -121, 19, -29, 4, 106, -104, -56, -110, -71, -50, 10, 58, 58, -14, -18, 23, -94, -6, 48, -72, 34, 92, -26, 40, 101, -113, 68, -19, 53, -101, 46, 8, -64, 38, -65, -6, 72, 6, 106, 116, -23, 62, -118, 0, 55, 47, 57, -34, 79, 26, 31, 48, -86, -51, -97, 13, 124, 101, -64, -14, -125, -110, -66, 104, -84, -58};
    tmp_tmp_tmp_msg_0_0_0.value.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.2963338085636108);
    msg.setSource(12556U);
    msg.setSourceEntity(204U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(121U);
    msg.original_source = 58328U;
    msg.destination = 9561U;
    msg.timeout = 0.7455178460052921;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 205U;
    tmp_msg_0.text.assign("NZESWQZFQCBDT");
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
    msg.setTimeStamp(0.9148108127652076);
    msg.setSource(35414U);
    msg.setSourceEntity(32U);
    msg.setDestination(42161U);
    msg.setDestinationEntity(122U);
    msg.original_source = 58786U;
    msg.destination = 43879U;
    msg.timeout = 0.24701328514998977;
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("GDJMJHYWDPHRLNTGKQOBYYSYUVPSDPOWWZHDCOBTYVGAIZAFDTQNUYDJNSLRZLESBETNBMWGWKIVUWGCMIKQYGIPAICTKFKZMAQKBOFVXHBFDHFUAYHVCOVOQAMVNECBXCPGEQJU");
    tmp_msg_0.sensor_class.assign("SHUUVQFEIRIPAVGODFMVTDHEXKICFLWOLUDZOIGSLETTFWLCKUDJTXAKNUDAKMEWBRUHBYWJUXLNCMQIVACQEAORJMKVTFKOHXDZZIYNYPGRXDCXJZPLMMGSBMBRFGRTIVDAVAGRWWZXCLKERSPOTBYPNQALX");
    tmp_msg_0.lat = 0.1652701091383666;
    tmp_msg_0.lon = 0.7928367902262409;
    tmp_msg_0.alt = 0.2378407073776544;
    tmp_msg_0.heading = 0.06881546076102973;
    tmp_msg_0.data.assign("OZTWSQKPZSZTYFJFJVHPSGDPKOEDCVSHTCHSIEUITXRZLNDKAQQXFRCCFBUPOIQGKAQPQHUNEYGREDLCUGDX");
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
    msg.setTimeStamp(0.13085276895239517);
    msg.setSource(65304U);
    msg.setSourceEntity(68U);
    msg.setDestination(43119U);
    msg.setDestinationEntity(225U);
    msg.original_source = 29512U;
    msg.destination = 27384U;
    msg.timeout = 0.14990316458976738;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 192U;
    tmp_msg_0.eta = 12142U;
    tmp_msg_0.info.assign("NMTYXJTLNDNYKCQSVUJNKREAEXAPTBJLABWMWCFJQVMYPBWQEHLFVBOEMLAYQRKMLLEPSQWUXMAKRRZHTBNWMBVHOBDDJFRYIPBGYKKCOWIYUEGJRNUEZAUXFRPIZHFJKZCLPKGODSITXFEGINDROFJGLGZBZXATHWIXOUOGDYJ");
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
    msg.setTimeStamp(0.7685278221910387);
    msg.setSource(38419U);
    msg.setSourceEntity(241U);
    msg.setDestination(15902U);
    msg.setDestinationEntity(18U);
    msg.type = 16U;
    msg.comm_interface = 36944U;
    msg.model = 10732U;
    msg.list.assign("CHGPJYCSEYHUNDVVOUSAHZGBWRKHCPIHVHIYEYWRQSNFL");

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
    msg.setTimeStamp(0.8528882337776931);
    msg.setSource(20416U);
    msg.setSourceEntity(168U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(122U);
    msg.type = 67U;
    msg.comm_interface = 60187U;
    msg.model = 45506U;
    msg.list.assign("KIKUPOOOEDABGTTTFJOTEDUCDOQHIBRXKVWFYLLNMTDNUIGTBBIPGOFPJHOMHEENYLQSLZGESNYIBHGMWHVUMRRUSHICMJANZXZKXQNRQPPHDJVWRRXMS");

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
    msg.setTimeStamp(0.9762244887145674);
    msg.setSource(40279U);
    msg.setSourceEntity(237U);
    msg.setDestination(63047U);
    msg.setDestinationEntity(198U);
    msg.type = 45U;
    msg.comm_interface = 35091U;
    msg.model = 30663U;
    msg.list.assign("MPKNOVOESKACOAEQEZPCMUGRTSJUIZBSQERJQFRNFQTMVTPKOZXSJUWJIDCRTBCXIBIUYBUSHGBGAKUSFNENRUQLXEIQPIMXYFHHWWROUDWEGGQIZIXMJLRYGWWFPTCBVBSVBCCNMPMHNTAZDLHGTVFLOJWNSCHHKFLXYPGVCRKMOYWXJVKEDNFULAWVMCXSDEUKLGQZRVTATXYDLHZWJXYYGBPMDAJYNLDVASDNRQDBZOKPFKFAIZIQOPYEOT");

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
    msg.setTimeStamp(0.26448476402400833);
    msg.setSource(37492U);
    msg.setSourceEntity(26U);
    msg.setDestination(36139U);
    msg.setDestinationEntity(103U);
    msg.type = 253U;
    msg.req_id = 2390151845U;
    msg.ttl = 5567U;
    msg.code = 229U;
    msg.destination.assign("UWDAOCJRJCBEJFISASHSRTRVLUNNWTMJRFJT");
    msg.source.assign("LZFTSIFLIECQJHRMKMZFGEGOGTCOKKFSULBWXUMTZJIXQXLGPHWBHWKBNJH");
    msg.acknowledge = 63U;
    msg.status = 205U;
    const char tmp_msg_0[] = {-88, -29, -13, -47, 86, 111, 90, -115, 96, -84, 61, -62, -104, -123, -44, 27, -15, 44, 81, 106, 92, 57, 115, -14, 35, -30, -103, -9, -44, 86, 105, -128, 116, 42, 49, 108, -95, -47, 31, 82, -84, -30, -33, -94, 24, -58, 100, 20, -73, -76, 77, 96, -65, -80, -65, 108, -102, -2, -82, 126, -103, 14, -13, -17, 22, 29, -62, -127, 68, 41, -72, 71, 115, 84, 54, 70, -11, 18, -83, 117, -66, 85, 89, 78, -44, -118, 3, 27, 71, 69, 66, 84, 11, 36, -35, -127};
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
    msg.setTimeStamp(0.014166818366218803);
    msg.setSource(29542U);
    msg.setSourceEntity(35U);
    msg.setDestination(8738U);
    msg.setDestinationEntity(105U);
    msg.type = 36U;
    msg.req_id = 549184247U;
    msg.ttl = 4742U;
    msg.code = 119U;
    msg.destination.assign("UTHRIQGGVJUVBEOCBTLXJCMXHBUWRHLXYHFNUDFZBEYASDWBJCPGAFEKZSCBJLCFKZQW");
    msg.source.assign("FUAMEEHVMMWYPOJLZNDOUUCJXDECPQSPQEHQQNORBHVDIKFOIXFXSUPPQZKBHNETZPTVLLWJZPGVCOXEAFHWYCCSZGTSTPALTFNEVKJNHGMIFAVYHRJARCRCYGSNWNCTJSIOPABVNACXKUIDYLIGKRWUTMRMBYQABPATWWYQDBMZODHFLMVJOXXSXKZ");
    msg.acknowledge = 4U;
    msg.status = 141U;
    const char tmp_msg_0[] = {114, -43, -85, -17, 5, -6, -16, 36, 114, -15, -28, 82, -34, 122, -31, -107, 66, -24, -22, -8, -57, -62, -15, -23, 56, 126, 81, 54, 84, -109, -122, -47, -84, -119, -81, -15, 24, -39, 101, 13, -25, -104, -111, -79, -35, 4, -5, -30, -7, 81, -71, -26, -21, 124, -77, -14, 37, 68, -53, 104, -98, -4, -87, 75, 112, -89, -47, 38, -108, -54, -110, -49, 91, 69, -25, -2, 7, -127, -115, 123, -75, -83, 98, -28, 34, 73, 29, -39, -35, 111, -101, 116, 109, 124, 55, 109, 103, -110, -115, -109, -47, 116, 110, -114, -33, -61, 60, -32, -123, -124, -75, 30, 110, -68, -21, -17, 88, 109, 70, -48, -11, -90, 78};
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
    msg.setTimeStamp(0.8977287264218059);
    msg.setSource(18240U);
    msg.setSourceEntity(143U);
    msg.setDestination(1793U);
    msg.setDestinationEntity(81U);
    msg.type = 19U;
    msg.req_id = 1403048743U;
    msg.ttl = 3124U;
    msg.code = 196U;
    msg.destination.assign("OHFIBSXFLPTQAVYIAVFRILUKOUIGZJUZOPCYMSKCMJTRMJBJKGZDDSLPKQPVEKUTHQJLONWPRVCOHEQWBPDJFXUKVANROHBYZTMLZHAITYWIFPGWKVRHJSHXFOCZSWKSMHQRDOSKLEITOZSUXPUINYBTXPCYLMAGZDXDLXEBQVEMQGGCXBCEGYUXWDDGTHCJPGVNCEWRLAFFZFMEINAQBRSUKFUWMWEJTMNNWNXNBYALVEDOIBRQ");
    msg.source.assign("HHPXWIWVMXAICGRPPIYMHTBTVZXFADKXRHIDBREZVDIIEEXTYQFWMHXAYZQGRYCSLYZZTBC");
    msg.acknowledge = 195U;
    msg.status = 212U;
    const char tmp_msg_0[] = {-123, -58, 95, 53, 2, 118, -115, -13, -70, 102, -41, -37, -54, -58, 55, 35, -77, 12, -12, 47, -16, -33, -26, 24, 94, -116, 44, 72, -98, 25, 70, -41, 86, -5, 125, -54, -27, 57, 78, -75, 99, -17, 20, -30, 61, 41, -58, -109, 115, -117, 94, 61, -55, -53, 7, 10, 56, -38, 41, -121, 9, 13, 32, -90, 111, 56, -95, 48, -52, 30, 24, -120, 10, 64, 13, -73, 2, -42, -88, -66, -7, 50, -60, 95, -98, 113, -77, 81, 20, -114, 115, 52, 98, 105, 73, 80, 92, 104, 96, -103, 42, 126, 80, 80, -56, 24, 30, -25, -85, -121, 107, 52};
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
    msg.setTimeStamp(0.7580530621744672);
    msg.setSource(20061U);
    msg.setSourceEntity(113U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(51U);
    msg.id = 138U;
    msg.range = 0.5988740854393513;

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
    msg.setTimeStamp(0.4417321098168956);
    msg.setSource(58446U);
    msg.setSourceEntity(172U);
    msg.setDestination(47332U);
    msg.setDestinationEntity(51U);
    msg.id = 201U;
    msg.range = 0.7740310661439669;

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
    msg.setTimeStamp(0.5957720041919363);
    msg.setSource(58436U);
    msg.setSourceEntity(167U);
    msg.setDestination(64080U);
    msg.setDestinationEntity(228U);
    msg.id = 216U;
    msg.range = 0.9888432826389839;

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
    msg.setTimeStamp(0.6724112615161122);
    msg.setSource(61120U);
    msg.setSourceEntity(105U);
    msg.setDestination(12438U);
    msg.setDestinationEntity(119U);
    msg.beacon.assign("UMQRUFPAFGVTCGNRIXXDQNNKFYKDBYSBCMQZEGMCPNIOPQKFWJCTZEQBURWFWUEKXYLKDELESHCQCZMVPNFVJLZBRFHTUXEJCBWUZOQHGHZGIAWTNYIRPVYWDRAAXALPHYEKSPQDLVBPXHYEJNNXEJWSTSGJTIFNTWHVSMJHLPMXIAVKUWLURUZZXXKUGRDDZAGIKMEQAOCHCRVASMLBOOJOTOOMGKYNLPBSBDVAJHWDQOIGOJFMYTCFISVBY");
    msg.lat = 0.34543340395702893;
    msg.lon = 0.8026731367276212;
    msg.depth = 0.8639263765891693;
    msg.query_channel = 47U;
    msg.reply_channel = 218U;
    msg.transponder_delay = 161U;

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
    msg.setTimeStamp(0.18421878614876996);
    msg.setSource(28844U);
    msg.setSourceEntity(210U);
    msg.setDestination(18088U);
    msg.setDestinationEntity(253U);
    msg.beacon.assign("EVMGVIZEHZCERZKPXXJATLBFUWCEBYNYMQSCBDPYAIITGKFQHODXOWQIJOMGVUXMABNSLHEYMNGWDZJLUNJICSTCWORKAQYUGXXKMP");
    msg.lat = 0.8563310444389536;
    msg.lon = 0.6712462397288946;
    msg.depth = 0.9795774271140085;
    msg.query_channel = 174U;
    msg.reply_channel = 64U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.06746325610100212);
    msg.setSource(28747U);
    msg.setSourceEntity(216U);
    msg.setDestination(33932U);
    msg.setDestinationEntity(131U);
    msg.beacon.assign("KSYLUCYSLGWLKTPSDPRHRPERHREMNVFGCIBEUVUUBTWDAAFZZJJWIMFKOKNYWNKJIZRRLYYWDEHMTGXFFKPECJNEXYBAYFQPQDQHOBDNBTVIAFTTALIAWPCVXBHQIDMUOLBLUYOAWQSZCUJGHMKVZGHVBEVT");
    msg.lat = 0.20774279711406685;
    msg.lon = 0.15406149441296302;
    msg.depth = 0.8357275378132196;
    msg.query_channel = 173U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 150U;

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
    msg.setTimeStamp(0.9142357382264361);
    msg.setSource(12268U);
    msg.setSourceEntity(93U);
    msg.setDestination(44647U);
    msg.setDestinationEntity(78U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.9293371404219062);
    msg.setSource(58145U);
    msg.setSourceEntity(96U);
    msg.setDestination(22727U);
    msg.setDestinationEntity(92U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.6124056452799506);
    msg.setSource(61621U);
    msg.setSourceEntity(254U);
    msg.setDestination(45973U);
    msg.setDestinationEntity(217U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.5185604079636501);
    msg.setSource(26405U);
    msg.setSourceEntity(74U);
    msg.setDestination(59939U);
    msg.setDestinationEntity(69U);
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("IMAQKQBCVGIKEZRRVMQFRLXHISIWUARWJSFAHLLKOVK");
    tmp_msg_0.op = 174U;
    tmp_msg_0.lat = 0.34423824905062106;
    tmp_msg_0.lon = 0.11363444126171984;
    tmp_msg_0.height = 0.5537902476750426;
    tmp_msg_0.x = 0.3237638236349708;
    tmp_msg_0.y = 0.5014943470685896;
    tmp_msg_0.z = 0.7587919745782953;
    tmp_msg_0.phi = 0.9938608218367734;
    tmp_msg_0.theta = 0.14761568916163137;
    tmp_msg_0.psi = 0.1073456946933905;
    tmp_msg_0.vx = 0.68951995709516;
    tmp_msg_0.vy = 0.25843521489708976;
    tmp_msg_0.vz = 0.3231186374859494;
    tmp_msg_0.p = 0.6080994766085778;
    tmp_msg_0.q = 0.0444531317515825;
    tmp_msg_0.r = 0.057639315253603884;
    tmp_msg_0.svx = 0.8948094043244763;
    tmp_msg_0.svy = 0.34998713512636426;
    tmp_msg_0.svz = 0.3053968387853594;
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
    msg.setTimeStamp(0.500966826105465);
    msg.setSource(26697U);
    msg.setSourceEntity(154U);
    msg.setDestination(35592U);
    msg.setDestinationEntity(157U);
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 170U;
    tmp_msg_0.x = 37065U;
    tmp_msg_0.y = 8513U;
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
    msg.setTimeStamp(0.34997344488758997);
    msg.setSource(35588U);
    msg.setSourceEntity(221U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(49U);
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 18860U;
    tmp_msg_0.sys_dst.assign("VSITKFJLTMPMHEZEWVTYAGDHQCDKLICGBYADCVSCDCIHFEKIBUZRKBWTRJWRILOHDU");
    tmp_msg_0.timeout = 0.410699496331981;
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
    msg.setTimeStamp(0.6904671863677218);
    msg.setSource(60057U);
    msg.setSourceEntity(54U);
    msg.setDestination(17233U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.45293854358914254;
    msg.lon = 0.19294494983306398;
    msg.depth = 0.3274908238323563;
    msg.sentence.assign("AUKAGFUCBXDVKBYAZLFIUXCWEXLNZFCJQLJHZGWQUQPQAPEIOFHZVSKWGQZEBXDGAJZSETNSANNWCWFHLWKHMZBBSUOQZVMBOSNPNIKS");
    msg.txtime = 0.25621855296386353;
    msg.modem_type.assign("VIWUHWMYLVQZDNVHVBWRXOAWTSK");
    msg.sys_src.assign("JSRMKLGWHBSBULJFKQPMZSHTJFYIWBOXUERRDKB");
    msg.seq = 4124U;
    msg.sys_dst.assign("JSUBVMBKEGUUOTCKIBEHQGARCFKODXTICSNJNDLPSWIEXNQZPWAMVZLYJAGRSERLRQCKUOJXOJRMGJZDJZFIWUWAHZHDMNQYUDDFPJNPTATBVXAXNFMTKQVSDGHWPOKNWWBCXHTORCNVYVEEQARZKPLUTDLZYGFQSGIWBMEIOIVPLOUGLFMP");
    msg.flags = 201U;
    const char tmp_msg_0[] = {-63, 57, -12, -38, -43, 5, 97, 57, -108, 53, 55, 88, 86, -54, 43, -102, 90, -22, -30, -60, -97, -103, -22, -15, 106, 74, -50, -79, 109, 93, -59, -68, -27, -67, -87, -70, 101, -22, 107, -73, 1, -12, 106, 48, -42, -63, -108, -66, -11, 46, 99, -79, 55, 123, -18, 35, -62, 125, -20, -123, 42, -12, 14, -80, 45, 57, -4, -20, 82, 108, 35, -11, 97, -13, 118, -18, 16, -119, 38, -54, 73, -116, 75, -121, -47, 70, 83, 3, 38, 16, 11, -99, 46, 103, -29, 83, 24, 37, 62, 73, -38, 59, -58, 28, -128, 119, -120, -73, -90, -37, 83, -49, -52, -100, 86, 9, -53, 52, 20, 101, 12, -117};
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
    msg.setTimeStamp(0.2035617626749393);
    msg.setSource(60768U);
    msg.setSourceEntity(189U);
    msg.setDestination(49853U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.7188248149330326;
    msg.lon = 0.07281058351536296;
    msg.depth = 0.013991490325797162;
    msg.sentence.assign("IJKFFQHWAAGOXCJXCVOBXWXIEXZVTCNCYLBUJITULHVFMVXOTHECRXQUGOHJPCZFWWMBFHLLXULKWSSGJYWEZSVZZXDLYEELCTMTDDCBAKHQUGBAMQPVMSHOPWRJRMGQSWRRNJFPSFKI");
    msg.txtime = 0.32061450297540595;
    msg.modem_type.assign("YWXDAMFOZSMPZZCBPQWDNGCBEYXUEBJPCIWKRSJJCXSTPXWXFZHMQJHKZJUCMVBMBEBQLYJRVPNMAWOTVXRJKFRBVCKDCVHYPASUENIGYBKASQMTQJGLUMPXH");
    msg.sys_src.assign("PWTPTUXQEDEIJLHDGUKKMSOOFNCRYVSBOGSHVGIQUEFBJFJJCFONOFNHAEQRLLKYNIXEPDSSUVWYDPCENHJSMRVUKLIFKQXEVWKHHXFRBXGJTXUWHKLUVQRODYAEZRHMGOPH");
    msg.seq = 42216U;
    msg.sys_dst.assign("KBWGGDRBWURHTNFVMIGCARXUWXFUOSSJAZXUFMJGSWUYGDITUGILIQEAFNDNEEHHKYVPHSVCZGWS");
    msg.flags = 113U;
    const char tmp_msg_0[] = {-91, 94, 107, 11, 6, 53, -23, -34, 43, 73, 123, 29, 105, 8, -65, -10, -108, 68, -6, 53, -109, 66, 72, -3, -28, 57, 22, -36, -117, -22, -91, 109, -20, -115, -64, -98, -29, 125, 54, 120, -5, -71, -16, 2, 28, 125, -71, 54, 20, 90, 110, 110, -72, -98, -112, -95, -40, 55, -4, -34, -46, -54, 47, -123, 63, 58, 57, -26, -124, 0, -96, 105, -114, -13, -28, 83, 64, -117, -3, -6, 26, 5};
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
    msg.setTimeStamp(0.9635394515642118);
    msg.setSource(46946U);
    msg.setSourceEntity(100U);
    msg.setDestination(18928U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.20597480646609656;
    msg.lon = 0.658707989295904;
    msg.depth = 0.9017803994755464;
    msg.sentence.assign("ZTCICYVBDALXMERUMGHMPRXGACFJFUHXKMBZBFDGOBSHRQVLIFIUFJBNSXWIVTVEPLBNOSYNONAPCAPTYAPJJLCQWWGZKPMQYDYCKQDTZFWDSPEVWAXVNBVEQYRJDIODOKJTUSEGTSZIWHILYXOVWLCDUGQOGHXYEIRAEYO");
    msg.txtime = 0.27527372446036735;
    msg.modem_type.assign("ZTUQAQUGDWCPAPOLESGJSRJREJFAPAZWMDIUHMKOUJYNIPDBFSMBUFCILKALAZFCSTMHDQTXUBQNENVZHTOZGXPVDCAKGAJ");
    msg.sys_src.assign("QNURJIEEMKIVUDHZKSVISSCREXYZUXNVFUODXRCMHOHRBQPCPCHBYOEQBDVSZONAPWTCOWLITPIWQXQRDGUMLMJPZFRJVQEJROLGAFVFYMONDZTLBAOQOQKPJTGATKUDLCMYTCZLHHRFKMEYYWYKGWFVPSZW");
    msg.seq = 26180U;
    msg.sys_dst.assign("TAAILGPYEKSMVHARIESBQUWGEJNBOAGEMTQCMTNVLJHAHSQHHXQSHRPWABXCWPELFWCNBPYPGRPZODIYKXURMZLDXLYTASESZWYITYDOAGDOFEKDXNJU");
    msg.flags = 117U;
    const char tmp_msg_0[] = {95, 117, -8, 115, -107, -93, -124, 68, -4, -44, 51, -103, -49, 29, 57, 104, -56, 114, -118, -53, 121, 101, -83, 52, 19, 7, 8, 77, -40, -17, 105, 102, 5, -11, -96, 89, 101, 84, 23, 67, -119, -2, 66, -53, 71, 92, 106, -108, -89, 6, 44, 79, 124, 101, -17, -18, 65, 58, -79, 68, -106, -75, 63, -73, -28, 122, -18, -41, 14, 107, 113, 65, -77, 43, 38, -93, -102, -79, 124, -28, -115, 61, -50, -31, 37, -3, -47, -98, -69, -93, 65, 96, -32, 17, -91, -43, -69, 79, -96, -126, -22, 79, 18, -61, -14, 120, 15, -104, -5, 91, -17};
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
    msg.setTimeStamp(0.9216116971652147);
    msg.setSource(34654U);
    msg.setSourceEntity(159U);
    msg.setDestination(49449U);
    msg.setDestinationEntity(173U);
    msg.op = 54U;
    msg.system.assign("KMKNPGCNIFJKVGPVLGOQUKXOJEFEJVHHWICXCGFUYZMBOYQBDYMQSFFIHGHHPFRLJPCY");
    msg.range = 0.5746093964739214;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41093U;
    tmp_msg_0.off_x = 0.6500528969319851;
    tmp_msg_0.off_y = 0.6349525213938592;
    tmp_msg_0.off_z = 0.16540203261492048;
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
    msg.setTimeStamp(0.962744256328968);
    msg.setSource(26053U);
    msg.setSourceEntity(36U);
    msg.setDestination(57450U);
    msg.setDestinationEntity(60U);
    msg.op = 45U;
    msg.system.assign("RCQCNVSVCEBJRCEXKBWOKWKMOIQSQMBDJRQHZADELHAOGFYVSDWYHMWSUZASMLBRXPOMTJVSFYTYODHHGCERWYBPLZQFRIGUJFQHZWROOZXKMUVHULMAIGLFLOEVNDUPXEIQBDYFGLHHNGPDYTNBNAZTXSKEDWNLN");
    msg.range = 0.6397293440151277;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 110U;
    tmp_msg_0.clock = 0.6578210149747014;
    tmp_msg_0.tz = 23;
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
    msg.setTimeStamp(0.21932461767635414);
    msg.setSource(25256U);
    msg.setSourceEntity(84U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(101U);
    msg.op = 23U;
    msg.system.assign("BKYTYIYFCSZNDWDLEWXWQUGXPOFJXJJGTNTFWIAGFARBHGNHWIDCLGZBQVSNKYUIPXMWCESMNVJQZPRI");
    msg.range = 0.05375318587712663;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("PBLUSEQLANIQVUZPKNWWPAGNAJTVCIRGPXMMYWGVVUYXAABBFCDRCRKLVOETFXPRDDXHRMOUOVHNDHXYKQNFFONWAUNXSNLJOJFHLSIYZBJBRMYTDTTCVZQMKEWSGLTDEEOMIMYZZBPB");
    tmp_msg_0.timeout = 6706U;
    tmp_msg_0.contents.assign("ULJJNDWDZZJBUHQXYHIIRLWGAIFVPZTBPFZOBVHHKRPTCANHJSFPQV");
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
    msg.setTimeStamp(0.004568826898034062);
    msg.setSource(59244U);
    msg.setSourceEntity(145U);
    msg.setDestination(52108U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.7373645208111578);
    msg.setSource(6019U);
    msg.setSourceEntity(43U);
    msg.setDestination(23337U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.9684443238398147);
    msg.setSource(60726U);
    msg.setSourceEntity(47U);
    msg.setDestination(59399U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.389426836974871);
    msg.setSource(55499U);
    msg.setSourceEntity(85U);
    msg.setDestination(34260U);
    msg.setDestinationEntity(237U);
    msg.list.assign("NJUOXSDRLNVFTFBQRPJSOOIAHCJZLYLJXFPGIWM");

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
    msg.setTimeStamp(0.4411399089160267);
    msg.setSource(82U);
    msg.setSourceEntity(198U);
    msg.setDestination(28852U);
    msg.setDestinationEntity(71U);
    msg.list.assign("DJEOBDEOERXVOEYPVWDSALVPZHZBQHFBQVIHSFKPHUBMIXLDSEPXUTYSMYWJDLAEOAGZDFRZJEK");

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
    msg.setTimeStamp(0.40883316060254515);
    msg.setSource(28087U);
    msg.setSourceEntity(20U);
    msg.setDestination(12948U);
    msg.setDestinationEntity(201U);
    msg.list.assign("MJSPUHSWTJGLKROTPHWKXOCQXTMPTWROBSONYPJWURJIKBAZHLIERFPDMUYEXYUYXA");

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
    msg.setTimeStamp(0.9645688901237797);
    msg.setSource(4965U);
    msg.setSourceEntity(137U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("FZHQWPVJJDCYAKQVBEJSBZCVJLAPOBVWRVTMDHJEHVCWMELTZHBAUUICPYRBPDGQYIOFIQXYKDOXETDSEJSZNHBNMZGOVWAWNEIVQCRXXRLJJSYFGNULDHBPGAQDFYAUZXIGBYUFGSOLAMKNTQEXCSTXZAGQPWNEBMUHT");
    msg.rssi = 0.16664571711427678;
    msg.integrity = 30679U;

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
    msg.setTimeStamp(0.385294733088947);
    msg.setSource(94U);
    msg.setSourceEntity(125U);
    msg.setDestination(12610U);
    msg.setDestinationEntity(22U);
    msg.peer.assign("TUMYDMKUYZQNXDWLFTINJDRCDMACPVIUGPJZRBKPEYJMOU");
    msg.rssi = 0.8621966431919983;
    msg.integrity = 44802U;

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
    msg.setTimeStamp(0.9139356546723313);
    msg.setSource(43579U);
    msg.setSourceEntity(78U);
    msg.setDestination(22918U);
    msg.setDestinationEntity(7U);
    msg.peer.assign("JVHFSXNSZTJOXNVDTSHEUMBILSYQWGJYZBCIUPFHTLIZFWUCMGFKDBNANBTWTVLKJBQUMVRD");
    msg.rssi = 0.03348532403179172;
    msg.integrity = 45954U;

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
    msg.setTimeStamp(0.9688881454983975);
    msg.setSource(17882U);
    msg.setSourceEntity(207U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(155U);
    msg.req_id = 29308U;
    msg.destination.assign("YAGVQODMERMNPPRJCJOZXXIOQKPBXMVUAPEZYFXFOBFAPESUGUTPTQYMBZSCHJTKWQGDALVQGNYDNJZBMGKUESEUATOIEEDZYLRCFVAYTSZMKEHNTCIGCGSWEQAPFUVFMSVWCIWXLJHKDWRBBBASYRPDXOWDLJDTKKCSMXAULRBMCNLFHUWNWQLID");
    msg.timeout = 0.35471384825762386;
    msg.range = 0.6114373878614733;
    msg.type = 1U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.5466292989339918;
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
    msg.setTimeStamp(0.9963707006436285);
    msg.setSource(39135U);
    msg.setSourceEntity(52U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(223U);
    msg.req_id = 20368U;
    msg.destination.assign("APBRPENKDCZDFZDMOVTLIMHITSUPJTRXNYWVQGTACBZRWXCBYWZAVQKEFXDQKCCRJOYZWROYERYKGWHOCNIPKKLEBTKMQFUYNHKANIFDUFSIALBMIBQYJSJOBUGNGSIVZLHBWQQNINAWWYSPJWGPEJZIUSUZBPXGRDHHLMF");
    msg.timeout = 0.9264320476769962;
    msg.range = 0.13967640598488285;
    msg.type = 69U;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 7995U;
    tmp_msg_0.type = 65U;
    tmp_msg_0.max_size = 35071U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.03424486584037034;
    tmp_tmp_msg_0_0.base_lon = 0.1508953146387848;
    tmp_tmp_msg_0_0.base_time = 0.3387783281117539;
    IMC::HistoricSample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_id = 63525U;
    tmp_tmp_tmp_msg_0_0_0.priority = -42;
    tmp_tmp_tmp_msg_0_0_0.x = -22095;
    tmp_tmp_tmp_msg_0_0_0.y = 30002;
    tmp_tmp_tmp_msg_0_0_0.z = 16677;
    tmp_tmp_tmp_msg_0_0_0.t = 21348;
    IMC::FormationMonitor tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ax_cmd = 0.825688238604908;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ay_cmd = 0.8359418813909838;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.az_cmd = 0.13532005794041424;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ax_des = 0.9605129142600196;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ay_des = 0.3570573594773363;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.az_des = 0.7014729120592825;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.virt_err_x = 0.3870538473142576;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.virt_err_y = 0.8280967325075327;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.virt_err_z = 0.29658821334417396;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.surf_fdbk_x = 0.05727968216055679;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.surf_fdbk_y = 0.1536581300557025;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.surf_fdbk_z = 0.8219416141266718;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.surf_unkn_x = 0.05773962049093184;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.surf_unkn_y = 0.5436758887424966;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.surf_unkn_z = 0.48530612136596707;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ss_x = 0.7254715665232837;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ss_y = 0.6913775576645788;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.ss_z = 0.10501140126913644;
    tmp_tmp_tmp_msg_0_0_0.sample.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8467139754806841);
    msg.setSource(3097U);
    msg.setSourceEntity(32U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(24U);
    msg.req_id = 59722U;
    msg.destination.assign("BZVPFCGEIPREVDUSSVOMNDAKMEJKNIAVGELAODPCZHRZXTKRQFJSNXUXPQFFKVTJODKPRVXBRSQQGMGDEXCWNCZWONMEXJMZLDFBWPUKCSGXQVNLRTCJJCYYGZIAAWHRTAPFBUMICEOAUHZKYWULEFGIMSYLB");
    msg.timeout = 0.9480101416218788;
    msg.range = 0.12022739846478903;
    msg.type = 15U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.03790515376138481;
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
    msg.setTimeStamp(0.4781083891399939);
    msg.setSource(10716U);
    msg.setSourceEntity(73U);
    msg.setDestination(41488U);
    msg.setDestinationEntity(61U);
    msg.req_id = 28478U;
    msg.type = 103U;
    msg.status = 207U;
    msg.info.assign("NBURAEHTBYOUNILFCKOACMUQETYXQGGWOVFCYURHMJLJXOHFPVSKCPFZWWWMEIXMIWKHZJJLOE");
    msg.range = 0.872806411896589;

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
    msg.setTimeStamp(0.7090904267666798);
    msg.setSource(36647U);
    msg.setSourceEntity(30U);
    msg.setDestination(47996U);
    msg.setDestinationEntity(246U);
    msg.req_id = 7047U;
    msg.type = 94U;
    msg.status = 244U;
    msg.info.assign("OZDTRQMQPBRMWVIFGCBIZXNSODZUGKQKNVYJYNHJMDIQWWBTNUCCTZRMSKFLTXSBPGYYDSAWLEIVLOEHCGJCBRAOUGGHQDXUHORBDENVAOFCXYLGSVTFEOICLCHTIAMFBEKFMTQUDAOJEAI");
    msg.range = 0.8124739277427235;

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
    msg.setTimeStamp(0.4368794317508655);
    msg.setSource(19084U);
    msg.setSourceEntity(145U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(46U);
    msg.req_id = 4398U;
    msg.type = 159U;
    msg.status = 124U;
    msg.info.assign("UIHMHULDQMTCIMWKQFEFDOYQJXEREHGHRLNWJDJLUGOPFAIHKMOEDHGDVLYD");
    msg.range = 0.27658624334003157;

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
    msg.setTimeStamp(0.5440161685863163);
    msg.setSource(46537U);
    msg.setSourceEntity(188U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(9U);
    msg.system.assign("RVYVHAWIWHLSZBMKWIWODGYDMSPGZORNKJXXEYBLPEICIYJFCUYDPUUXUVLVQRAUFBNLFKEWBOHUUBTLBAAWPBGGSHQKOHKQZBMPWADHUCWRYUCWQQSKNLJXJJGVXNXMFCFTLPOIVLGSCBSTFXEECYPGMVZLQKZIAVGVFDPLJFVZROROQFQGDGSAMXATFCJEQDCTEEPIJJPONINTMYQJTZYMHSORASMDKHWY");

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
    msg.setTimeStamp(0.40051255020780785);
    msg.setSource(23238U);
    msg.setSourceEntity(200U);
    msg.setDestination(50665U);
    msg.setDestinationEntity(240U);
    msg.system.assign("CTTLFAIICGXYAJSQFCRYKOTKTXQVMZKPBGIAINFHNVMGZMPXWYVBDCJEUHQUBLDPPQSPEVZYRDBVKEMLHGWX");

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
    msg.setTimeStamp(0.5112130255926685);
    msg.setSource(53351U);
    msg.setSourceEntity(198U);
    msg.setDestination(29669U);
    msg.setDestinationEntity(42U);
    msg.system.assign("TWFYRSIMOYCDMMONXXZLCDEVDXRRWCYLNXLKHHCPHNLJREBFDFYGWQAKXFOTHTPQQATQXUIHVWPJDFUKBJTBINKZFUGHWGSUUSQGEKMMTGJPRECHMIOSSAFXPBINLEKVNPOQJDIIQSJYHCVPUUMZVH");

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
    msg.setTimeStamp(0.054365073118248564);
    msg.setSource(41454U);
    msg.setSourceEntity(77U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(83U);
    msg.value = -29619;
    msg.op = 227U;

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
    msg.setTimeStamp(0.5662579537126605);
    msg.setSource(18153U);
    msg.setSourceEntity(229U);
    msg.setDestination(55257U);
    msg.setDestinationEntity(127U);
    msg.value = -4552;
    msg.op = 122U;

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
    msg.setTimeStamp(0.8875419251876173);
    msg.setSource(35017U);
    msg.setSourceEntity(177U);
    msg.setDestination(20123U);
    msg.setDestinationEntity(239U);
    msg.value = -26115;
    msg.op = 99U;

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
    msg.setTimeStamp(0.7348044610292659);
    msg.setSource(43286U);
    msg.setSourceEntity(75U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(9U);
    msg.value = 0.37955944066056346;

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
    msg.setTimeStamp(0.25508604049305417);
    msg.setSource(52220U);
    msg.setSourceEntity(154U);
    msg.setDestination(930U);
    msg.setDestinationEntity(168U);
    msg.value = 0.4294757001573791;

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
    msg.setTimeStamp(0.5064263844669987);
    msg.setSource(41834U);
    msg.setSourceEntity(192U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7032267206242179;

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
    msg.setTimeStamp(0.8714812006993115);
    msg.setSource(33971U);
    msg.setSourceEntity(4U);
    msg.setDestination(40814U);
    msg.setDestinationEntity(70U);
    msg.value = 0.1805349222404048;

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
    msg.setTimeStamp(0.25044476310250363);
    msg.setSource(49270U);
    msg.setSourceEntity(148U);
    msg.setDestination(21423U);
    msg.setDestinationEntity(49U);
    msg.value = 0.8158725802705705;

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
    msg.setTimeStamp(0.13708893484005225);
    msg.setSource(21339U);
    msg.setSourceEntity(232U);
    msg.setDestination(18851U);
    msg.setDestinationEntity(223U);
    msg.value = 0.3367443906811467;

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
    msg.setTimeStamp(0.09243802072891638);
    msg.setSource(51409U);
    msg.setSourceEntity(252U);
    msg.setDestination(14164U);
    msg.setDestinationEntity(34U);
    msg.validity = 33468U;
    msg.type = 109U;
    msg.utc_year = 19279U;
    msg.utc_month = 0U;
    msg.utc_day = 74U;
    msg.utc_time = 0.2935898228983893;
    msg.lat = 0.9173804549030572;
    msg.lon = 0.41050233587377716;
    msg.height = 0.4628816492262656;
    msg.satellites = 96U;
    msg.cog = 0.6769394460551023;
    msg.sog = 0.9949913474971053;
    msg.hdop = 0.4968201567731704;
    msg.vdop = 0.4436345719403785;
    msg.hacc = 0.6231608214551003;
    msg.vacc = 0.30945540886828904;

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
    msg.setTimeStamp(0.9892989303243445);
    msg.setSource(59785U);
    msg.setSourceEntity(195U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(33U);
    msg.validity = 65357U;
    msg.type = 209U;
    msg.utc_year = 52823U;
    msg.utc_month = 215U;
    msg.utc_day = 221U;
    msg.utc_time = 0.6157105937076381;
    msg.lat = 0.30548967677011507;
    msg.lon = 0.8830913657443172;
    msg.height = 0.8215026770051813;
    msg.satellites = 109U;
    msg.cog = 0.04864941863821659;
    msg.sog = 0.6497188501913187;
    msg.hdop = 0.8860724218914194;
    msg.vdop = 0.027850611602649566;
    msg.hacc = 0.5012838298144581;
    msg.vacc = 0.6139885948007512;

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
    msg.setTimeStamp(0.5255670833450635);
    msg.setSource(12226U);
    msg.setSourceEntity(34U);
    msg.setDestination(49790U);
    msg.setDestinationEntity(110U);
    msg.validity = 40406U;
    msg.type = 122U;
    msg.utc_year = 16734U;
    msg.utc_month = 202U;
    msg.utc_day = 209U;
    msg.utc_time = 0.9133122419355798;
    msg.lat = 0.9422905198132063;
    msg.lon = 0.04003516500805537;
    msg.height = 0.7904735228077235;
    msg.satellites = 225U;
    msg.cog = 0.0625622958778852;
    msg.sog = 0.8657278464759115;
    msg.hdop = 0.07724794290538195;
    msg.vdop = 0.6081265498161569;
    msg.hacc = 0.3633230071700727;
    msg.vacc = 0.5974544207964547;

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
    msg.setTimeStamp(0.47973712874178376);
    msg.setSource(22650U);
    msg.setSourceEntity(191U);
    msg.setDestination(15229U);
    msg.setDestinationEntity(131U);
    msg.time = 0.46999898710334376;
    msg.phi = 0.9418105987497443;
    msg.theta = 0.0503538453583281;
    msg.psi = 0.24319809770513046;
    msg.psi_magnetic = 0.1688093823783714;

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
    msg.setTimeStamp(0.9097246808602522);
    msg.setSource(1347U);
    msg.setSourceEntity(175U);
    msg.setDestination(50603U);
    msg.setDestinationEntity(27U);
    msg.time = 0.6735347132547831;
    msg.phi = 0.256731926625942;
    msg.theta = 0.7104143283747943;
    msg.psi = 0.22450281411049455;
    msg.psi_magnetic = 0.49859381671108716;

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
    msg.setTimeStamp(0.5226564499565253);
    msg.setSource(37594U);
    msg.setSourceEntity(107U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(224U);
    msg.time = 0.1646239689070894;
    msg.phi = 0.8684135031631688;
    msg.theta = 0.9267718028470593;
    msg.psi = 0.5543834802561018;
    msg.psi_magnetic = 0.4608564411154362;

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
    msg.setTimeStamp(0.5641256652349333);
    msg.setSource(26050U);
    msg.setSourceEntity(170U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(45U);
    msg.time = 0.30473482908866334;
    msg.x = 0.6735945357506218;
    msg.y = 0.05053382175832877;
    msg.z = 0.46846713862140477;
    msg.timestep = 0.6487142835811319;

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
    msg.setTimeStamp(0.7214508092313432);
    msg.setSource(33256U);
    msg.setSourceEntity(129U);
    msg.setDestination(43010U);
    msg.setDestinationEntity(195U);
    msg.time = 0.7119301501829488;
    msg.x = 0.16786170060887162;
    msg.y = 0.9021952648695085;
    msg.z = 0.5950118871098279;
    msg.timestep = 0.22603125023266524;

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
    msg.setTimeStamp(0.21216452388477025);
    msg.setSource(21129U);
    msg.setSourceEntity(112U);
    msg.setDestination(15296U);
    msg.setDestinationEntity(116U);
    msg.time = 0.043645713224104266;
    msg.x = 0.25266401089955604;
    msg.y = 0.04690297611358585;
    msg.z = 0.7129277140276825;
    msg.timestep = 0.49443733132659307;

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
    msg.setTimeStamp(0.9010006081804606);
    msg.setSource(50305U);
    msg.setSourceEntity(167U);
    msg.setDestination(59634U);
    msg.setDestinationEntity(137U);
    msg.time = 0.6660152887834867;
    msg.x = 0.6434909322892278;
    msg.y = 0.5651633912560209;
    msg.z = 0.5003980227601368;

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
    msg.setTimeStamp(0.1841840115593979);
    msg.setSource(18127U);
    msg.setSourceEntity(26U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(133U);
    msg.time = 0.009831375241265206;
    msg.x = 0.13270689247998269;
    msg.y = 0.7056079320542363;
    msg.z = 0.2363079238801019;

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
    msg.setTimeStamp(0.962894050839956);
    msg.setSource(31950U);
    msg.setSourceEntity(41U);
    msg.setDestination(10067U);
    msg.setDestinationEntity(97U);
    msg.time = 0.9591914212055255;
    msg.x = 0.5511271876670361;
    msg.y = 0.6255396646892653;
    msg.z = 0.07442088309067052;

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
    msg.setTimeStamp(0.49881324966830864);
    msg.setSource(12897U);
    msg.setSourceEntity(186U);
    msg.setDestination(47733U);
    msg.setDestinationEntity(47U);
    msg.time = 0.6087265339596202;
    msg.x = 0.957179488769117;
    msg.y = 0.9414533311219822;
    msg.z = 0.7279814603927545;

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
    msg.setTimeStamp(0.1265335106981642);
    msg.setSource(27110U);
    msg.setSourceEntity(201U);
    msg.setDestination(27388U);
    msg.setDestinationEntity(42U);
    msg.time = 0.7746967032967997;
    msg.x = 0.3129735207298928;
    msg.y = 0.4313834087537276;
    msg.z = 0.36045402484260425;

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
    msg.setTimeStamp(0.462568549085528);
    msg.setSource(10523U);
    msg.setSourceEntity(4U);
    msg.setDestination(19978U);
    msg.setDestinationEntity(79U);
    msg.time = 0.7548942034045248;
    msg.x = 0.20582169951419704;
    msg.y = 0.9631739217425364;
    msg.z = 0.739658613838635;

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
    msg.setTimeStamp(0.787004984707391);
    msg.setSource(28506U);
    msg.setSourceEntity(194U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(214U);
    msg.time = 0.7193854565232458;
    msg.x = 0.4842870664585144;
    msg.y = 0.34123295939795273;
    msg.z = 0.3758306497412206;

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
    msg.setTimeStamp(0.7780198395820136);
    msg.setSource(33630U);
    msg.setSourceEntity(148U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(192U);
    msg.time = 0.5981701781643884;
    msg.x = 0.8871320954840338;
    msg.y = 0.07357485633692729;
    msg.z = 0.833263415042334;

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
    msg.setTimeStamp(0.4966827161138161);
    msg.setSource(64906U);
    msg.setSourceEntity(70U);
    msg.setDestination(28145U);
    msg.setDestinationEntity(235U);
    msg.time = 0.4689529368287898;
    msg.x = 0.25011978722887984;
    msg.y = 0.7149069873860138;
    msg.z = 0.705322055403304;

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
    msg.setTimeStamp(0.9955094381823109);
    msg.setSource(24031U);
    msg.setSourceEntity(140U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(63U);
    msg.validity = 166U;
    msg.x = 0.21072553140336225;
    msg.y = 0.4440989863580781;
    msg.z = 0.7881133437086957;

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
    msg.setTimeStamp(0.21487221414167101);
    msg.setSource(49067U);
    msg.setSourceEntity(91U);
    msg.setDestination(63837U);
    msg.setDestinationEntity(0U);
    msg.validity = 245U;
    msg.x = 0.03262791507773444;
    msg.y = 0.3020216361064578;
    msg.z = 0.044490953569131464;

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
    msg.setTimeStamp(0.602609856150893);
    msg.setSource(13387U);
    msg.setSourceEntity(13U);
    msg.setDestination(41283U);
    msg.setDestinationEntity(102U);
    msg.validity = 235U;
    msg.x = 0.763298377142217;
    msg.y = 0.5302556199665764;
    msg.z = 0.1140013529688163;

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
    msg.setTimeStamp(0.7456889023995039);
    msg.setSource(11090U);
    msg.setSourceEntity(80U);
    msg.setDestination(30312U);
    msg.setDestinationEntity(227U);
    msg.validity = 60U;
    msg.x = 0.3465194668194497;
    msg.y = 0.9256225730480306;
    msg.z = 0.3275597122323285;

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
    msg.setTimeStamp(0.8310433653562079);
    msg.setSource(45543U);
    msg.setSourceEntity(47U);
    msg.setDestination(57078U);
    msg.setDestinationEntity(107U);
    msg.validity = 176U;
    msg.x = 0.22665578862212987;
    msg.y = 0.7179917966768478;
    msg.z = 0.667188959091994;

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
    msg.setTimeStamp(0.18673785428405398);
    msg.setSource(14061U);
    msg.setSourceEntity(192U);
    msg.setDestination(52027U);
    msg.setDestinationEntity(31U);
    msg.validity = 3U;
    msg.x = 0.13944832595625967;
    msg.y = 0.1739260710757673;
    msg.z = 0.1497623896059287;

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
    msg.setTimeStamp(0.7122740074478814);
    msg.setSource(29651U);
    msg.setSourceEntity(137U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(203U);
    msg.time = 0.7088201222599616;
    msg.x = 0.9376942976461887;
    msg.y = 0.31483955100288963;
    msg.z = 0.07428873291496996;

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
    msg.setTimeStamp(0.03894957165000412);
    msg.setSource(11069U);
    msg.setSourceEntity(179U);
    msg.setDestination(1409U);
    msg.setDestinationEntity(159U);
    msg.time = 0.11244549133947912;
    msg.x = 0.3430355961990095;
    msg.y = 0.3657216699333412;
    msg.z = 0.7317706388274156;

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
    msg.setTimeStamp(0.3703317763105892);
    msg.setSource(25296U);
    msg.setSourceEntity(13U);
    msg.setDestination(29953U);
    msg.setDestinationEntity(220U);
    msg.time = 0.06387085969828332;
    msg.x = 0.19501665427584725;
    msg.y = 0.7427017048336676;
    msg.z = 0.7634851321988123;

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
    msg.setTimeStamp(0.40362946695994306);
    msg.setSource(42002U);
    msg.setSourceEntity(74U);
    msg.setDestination(60654U);
    msg.setDestinationEntity(25U);
    msg.validity = 196U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6844381478430589;
    tmp_msg_0.y = 0.6825311367730671;
    tmp_msg_0.z = 0.23234481360771708;
    tmp_msg_0.phi = 0.1106518657359653;
    tmp_msg_0.theta = 0.9014907617611465;
    tmp_msg_0.psi = 0.25889894067897834;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5757291452169473;

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
    msg.setTimeStamp(0.04335684599543954);
    msg.setSource(52901U);
    msg.setSourceEntity(215U);
    msg.setDestination(24924U);
    msg.setDestinationEntity(85U);
    msg.validity = 111U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.47728981815322113;
    tmp_msg_0.beam_height = 0.20791469998502776;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9697361979799921;

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
    msg.setTimeStamp(0.7897918254999408);
    msg.setSource(50053U);
    msg.setSourceEntity(70U);
    msg.setDestination(42126U);
    msg.setDestinationEntity(154U);
    msg.validity = 88U;
    msg.value = 0.6891119965447505;

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
    msg.setTimeStamp(0.41339659415391117);
    msg.setSource(51916U);
    msg.setSourceEntity(149U);
    msg.setDestination(57568U);
    msg.setDestinationEntity(210U);
    msg.value = 0.39114566027204223;

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
    msg.setTimeStamp(0.8545564986094406);
    msg.setSource(27404U);
    msg.setSourceEntity(242U);
    msg.setDestination(29736U);
    msg.setDestinationEntity(107U);
    msg.value = 0.16529923768142707;

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
    msg.setTimeStamp(0.798917326953748);
    msg.setSource(63709U);
    msg.setSourceEntity(92U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5376527050779193;

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
    msg.setTimeStamp(0.5371712920087657);
    msg.setSource(1242U);
    msg.setSourceEntity(152U);
    msg.setDestination(65076U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8690407878211456;

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
    msg.setTimeStamp(0.7243199277509385);
    msg.setSource(34568U);
    msg.setSourceEntity(41U);
    msg.setDestination(47301U);
    msg.setDestinationEntity(11U);
    msg.value = 0.8911319827196279;

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
    msg.setTimeStamp(0.17076430716748536);
    msg.setSource(41871U);
    msg.setSourceEntity(229U);
    msg.setDestination(34804U);
    msg.setDestinationEntity(71U);
    msg.value = 0.278696461291723;

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
    msg.setTimeStamp(0.42002775053668784);
    msg.setSource(31985U);
    msg.setSourceEntity(160U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5832915318502714;

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
    msg.setTimeStamp(0.815472300115992);
    msg.setSource(11256U);
    msg.setSourceEntity(21U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(95U);
    msg.value = 0.24533587597599604;

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
    msg.setTimeStamp(0.934322514677263);
    msg.setSource(19683U);
    msg.setSourceEntity(91U);
    msg.setDestination(51143U);
    msg.setDestinationEntity(110U);
    msg.value = 0.3740366428635229;

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
    msg.setTimeStamp(0.0028191748523265225);
    msg.setSource(4310U);
    msg.setSourceEntity(122U);
    msg.setDestination(31238U);
    msg.setDestinationEntity(229U);
    msg.value = 0.735403620199601;

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
    msg.setTimeStamp(0.18324037235497104);
    msg.setSource(55106U);
    msg.setSourceEntity(163U);
    msg.setDestination(14523U);
    msg.setDestinationEntity(25U);
    msg.value = 0.30790206618495464;

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
    msg.setTimeStamp(0.4082432802843968);
    msg.setSource(20097U);
    msg.setSourceEntity(204U);
    msg.setDestination(9012U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7380352114559611;

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
    msg.setTimeStamp(0.3905689771452999);
    msg.setSource(2314U);
    msg.setSourceEntity(190U);
    msg.setDestination(61600U);
    msg.setDestinationEntity(116U);
    msg.value = 0.16728010613577005;

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
    msg.setTimeStamp(0.1470216272731366);
    msg.setSource(37413U);
    msg.setSourceEntity(169U);
    msg.setDestination(42610U);
    msg.setDestinationEntity(219U);
    msg.value = 0.5673177735957561;

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
    msg.setTimeStamp(0.454744656216315);
    msg.setSource(59833U);
    msg.setSourceEntity(110U);
    msg.setDestination(29359U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3508240175244304;

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
    msg.setTimeStamp(0.5159947281658708);
    msg.setSource(17922U);
    msg.setSourceEntity(82U);
    msg.setDestination(57268U);
    msg.setDestinationEntity(113U);
    msg.value = 0.75037698450418;

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
    msg.setTimeStamp(0.6167321788036526);
    msg.setSource(8163U);
    msg.setSourceEntity(134U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8231458190672861;

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
    msg.setTimeStamp(0.5307022175933667);
    msg.setSource(9999U);
    msg.setSourceEntity(100U);
    msg.setDestination(50942U);
    msg.setDestinationEntity(136U);
    msg.value = 0.28030924962929715;

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
    msg.setTimeStamp(0.07742248848114475);
    msg.setSource(58008U);
    msg.setSourceEntity(235U);
    msg.setDestination(46282U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8888451819553082;

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
    msg.setTimeStamp(0.09535822611769806);
    msg.setSource(62605U);
    msg.setSourceEntity(51U);
    msg.setDestination(46697U);
    msg.setDestinationEntity(28U);
    msg.value = 0.35807148328731064;

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
    msg.setTimeStamp(0.2084793623429093);
    msg.setSource(64072U);
    msg.setSourceEntity(183U);
    msg.setDestination(5241U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5626583014838237;

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
    msg.setTimeStamp(0.5407172484623627);
    msg.setSource(63657U);
    msg.setSourceEntity(98U);
    msg.setDestination(51368U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8206754372460257;

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
    msg.setTimeStamp(0.011513006252770519);
    msg.setSource(27996U);
    msg.setSourceEntity(4U);
    msg.setDestination(63671U);
    msg.setDestinationEntity(55U);
    msg.value = 0.5602363325260485;

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
    msg.setTimeStamp(0.9217447028850114);
    msg.setSource(56280U);
    msg.setSourceEntity(227U);
    msg.setDestination(21822U);
    msg.setDestinationEntity(224U);
    msg.value = 0.5866947620157927;

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
    msg.setTimeStamp(0.8806743437621377);
    msg.setSource(36906U);
    msg.setSourceEntity(71U);
    msg.setDestination(28168U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.9062038933857414;
    msg.speed = 0.9388049323238317;
    msg.turbulence = 0.7666898168634001;

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
    msg.setTimeStamp(0.8382178007855436);
    msg.setSource(34272U);
    msg.setSourceEntity(124U);
    msg.setDestination(43939U);
    msg.setDestinationEntity(166U);
    msg.direction = 0.07093126618208945;
    msg.speed = 0.17460312936518618;
    msg.turbulence = 0.8049944041541781;

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
    msg.setTimeStamp(0.7405866779172369);
    msg.setSource(45164U);
    msg.setSourceEntity(136U);
    msg.setDestination(6695U);
    msg.setDestinationEntity(250U);
    msg.direction = 0.9469705889069246;
    msg.speed = 0.1849682337072064;
    msg.turbulence = 0.6403770284251101;

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
    msg.setTimeStamp(0.9444657926524163);
    msg.setSource(56611U);
    msg.setSourceEntity(249U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(211U);
    msg.value = 0.9003803697678393;

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
    msg.setTimeStamp(0.3815280001240018);
    msg.setSource(63933U);
    msg.setSourceEntity(165U);
    msg.setDestination(13458U);
    msg.setDestinationEntity(235U);
    msg.value = 0.21736144856228268;

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
    msg.setTimeStamp(0.9586244018908614);
    msg.setSource(46000U);
    msg.setSourceEntity(157U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(168U);
    msg.value = 0.793471856544792;

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
    msg.setTimeStamp(0.10556531349894516);
    msg.setSource(45166U);
    msg.setSourceEntity(17U);
    msg.setDestination(28746U);
    msg.setDestinationEntity(235U);
    msg.value.assign("XOYZZPQIWTMOEJFZNNUJBYWCIUHRLALSHQYSSEKLWDJUBMAQBSLJKSJYMISVTACLGPTPXAWBIJPVVXWEMRFPCMLEUOXHDFLCQPGNHNESZLDRMPHRKGNVOBCYXJIMYZOBVRWYVGRCOUUMKDDOQFWANBHNOQMSQVGFAHOWKEAFTMWPJLKPWTVZHELXTQGNZQNCRKZVAZGBGPIDUH");

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
    msg.setTimeStamp(0.14482780238356274);
    msg.setSource(2800U);
    msg.setSourceEntity(19U);
    msg.setDestination(12940U);
    msg.setDestinationEntity(96U);
    msg.value.assign("IVTLYHMAHAUGSEOIBTDKNJZPDMCMAIVUKIFPBYROFTDJKLEHXPLMCHESSVYAUGNGJGELHPEIWNCQAEMVXERVJNAJJAZDIKXSMZBJVTAPZ");

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
    msg.setTimeStamp(0.0640238962185753);
    msg.setSource(32356U);
    msg.setSourceEntity(135U);
    msg.setDestination(39771U);
    msg.setDestinationEntity(129U);
    msg.value.assign("ZPTSFIJMUEUGEPHENCXXRRQSMNYVFMMGUBJASOEJLTUWGONBUOIDDOIBHVTHOHCFXIQPIHRCOXHYRJBNPZDDQEVNLGSPFGCD");

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
    msg.setTimeStamp(0.36714252437774086);
    msg.setSource(62519U);
    msg.setSourceEntity(34U);
    msg.setDestination(57054U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {61, 109, -3, 108, 8, 40, -29, 114, 18, 15, -86, 66, 116, 84, -85, -103, 12, 66, -24, 21, -4, -54, -25, 55, -8, -49, -62, 57, -87, -107, -29, 62, -71, 51, -21, 78, -100, 6, -17, -97, -18, -24, 116, 37, 66, -30, -55, 82, -44, -74, 108, 42, 26, -110, -122, -18, 18, 45, -84, 117, 111, 84, 84, -22, -113, 22, -18, 14, 78, -70, -12, 63, 111, -60, 23, -27, 93, -36, -15, -120, -71, -45, -11, -24, -10, 70, -85, 26, 69, -35, -16, -37, 62, -94, 40, 74, -125, 113, -96, -67, -82, 93, 6, -10, 57, 45, 50, 102, 125, -56, -115, -94, -30, -61, 79, 71, 60, -20, 28, -128, -107, 41, 50, 52, -107, 64, -90, -15, -93, 94, 117, 14, -103, 113, 85, 105, 74, 5, 10, -42, 8, -127, 0, 67, -67, 19, -115, 17, -106, -122, 59, -79, 87, 99, -28, 31, -103, -35, 81, 88, -102, -113, 53, 22, 9, -76, -125, -10, 102, 55, -41, -97, -25, 106, 83, -120, -36, 87, 49, 66, -92, 100, -21, 120, -10, 94, 120, -99, 56, 124, -114, -39, -2, -8, 100, 109, 35, -50, 88, 63, -110, 101, 121, 40, -79, -41, 1, 53, 94, -54, -25, 49, 52, -57, -75, -75};
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
    msg.setTimeStamp(0.9010384289541459);
    msg.setSource(55873U);
    msg.setSourceEntity(150U);
    msg.setDestination(22452U);
    msg.setDestinationEntity(104U);
    const char tmp_msg_0[] = {40, -32, -1, 17, -27, 91, 65, 15, 85, 86, 91, 17, 83, 10, 75, -75, 94, -40, 126, -74, 37, 64, -8, 1, -11, 63, 62, -70, -87, 107, -118, -77, 4, -6, -13, -44, -41, -22, -27, -74, -36, 6, 26, 21, -112, 62, 36, -26, -127, 36, 48, 68, -96, 72, 39, -58, -61, 105, -78, 107, -35, 120, -45, 41, 68, -118, -118, -126, -98, 118, -98, 55, -51, 126, -45, -100, -115, 14, -15, 79, 102, -62, -4, -47, -32, 45, 121, 67, -76, 72, 67, 102, -10, -112, 126, -104, -59, 110, -47, 67, -48, 16, -75, 43, 74, 66, 8, 91, -54, 73, 14, -26, -107, -106, -21, -77, -54, -45, 121, -8, 42, 83, 119, -17, -104, -45, -117, -107, 72, 0, 53, 71, -69, 100, -56, -110, -30, 25, -21, -15, -116, -68, -98, 7, -33, -104, 73, 120, 46, -61, 69, -54, 34, 123, 62, 60, -16, -127, -38, -122, 57, 10, -43, 36, 97, -75, -66, 73, 110, -57, -95, 108, -7, -109, 81, -38, 121, 10, -57, -84, 117, 90, 49, -16, 30, 94, 35, -25, 23, -89, -109, -3, 30, -39, 60, -123, 14, 5, 121, 90, 57, 6, -82, 12, 71, -23, -23, -21, -7, -112, -124, -15, 13, 25, 66, 8, -123, -120};
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
    msg.setTimeStamp(0.9155502135428769);
    msg.setSource(63316U);
    msg.setSourceEntity(146U);
    msg.setDestination(57306U);
    msg.setDestinationEntity(103U);
    const char tmp_msg_0[] = {34, 34, -101, -22, 25, -125, -75, -56, 80, -28, 24, -17, -61};
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
    msg.setTimeStamp(0.5585907393586046);
    msg.setSource(57062U);
    msg.setSourceEntity(59U);
    msg.setDestination(46277U);
    msg.setDestinationEntity(50U);
    msg.value = 0.3796012310491307;

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
    msg.setTimeStamp(0.7191089436967012);
    msg.setSource(21514U);
    msg.setSourceEntity(96U);
    msg.setDestination(8886U);
    msg.setDestinationEntity(111U);
    msg.value = 0.40627427051593634;

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
    msg.setTimeStamp(0.6314583970996099);
    msg.setSource(32204U);
    msg.setSourceEntity(111U);
    msg.setDestination(39230U);
    msg.setDestinationEntity(19U);
    msg.value = 0.2034537862406881;

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
    msg.setTimeStamp(0.03354288425621221);
    msg.setSource(40477U);
    msg.setSourceEntity(27U);
    msg.setDestination(1207U);
    msg.setDestinationEntity(40U);
    msg.type = 0U;
    msg.frequency = 3167863909U;
    msg.min_range = 15924U;
    msg.max_range = 57106U;
    msg.bits_per_point = 187U;
    msg.scale_factor = 0.8161048785109756;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7914309025337841;
    tmp_msg_0.beam_height = 0.5957859173800008;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {111, -128, -98, -41, -7, 40, -98, 54, 27, 6, -67, -106, -16, -1, -36, -33, -119, -107, -53, -118, -44, 43, 62, -122, -42, -18, -91, -28, 74, 4, -64, 77, 58, -97, -111, -106, -86, -39, -84, 124, -34, 37, -63, 35, -117, -61, 51, 121, -18, 12, 65, -22, -4, 80, -90, -107, -123, 7, -95, 108, -1, -36, -92, -104, 16, -84, -96, -125, 39, 120, 110, 120, -61, 30, -38, -47, 69, 2, 87, -7};
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
    msg.setTimeStamp(0.6934208872323296);
    msg.setSource(6716U);
    msg.setSourceEntity(17U);
    msg.setDestination(26672U);
    msg.setDestinationEntity(187U);
    msg.type = 122U;
    msg.frequency = 3861617069U;
    msg.min_range = 22683U;
    msg.max_range = 52518U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.6206596978730814;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.282929609712927;
    tmp_msg_0.beam_height = 0.776516874230206;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-50, 82, -31, -119, -85, -58, 5, 77, 117, 48, 6, -15, 45, 79, -121, 83, -109, 18, 108, 36, -111, 4, 32, 58, 103, -122, -3, -87, 96, 85, -42, 104, 123, -56, 32, 76, 59, 20, 120, 17, -85, -51, -103, -101, 15, -109, 9, 59, -114, -36, 12, 90, -107, -97, 105, 76, -89, -108, -70, 113, -33, 17, -28, 2, 29, 99, 115, -66, 5, -13, 104, -45, -80, 98, 89, -97, 93, -116, -1, -41, 79, 71, 95, -115, 112, -50, 111, 42, 10, -63, 91, 99, 51, -22, -28, 23, -26, 62, -106, 46, 34, -43, 46, -111, 97, -29, -35, 11, 74, 45, 22, -94, 48, 31, 86, 80, -112, 96, 22, -119, 36, 114, 19, 68, -123};
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
    msg.setTimeStamp(0.6337402265460044);
    msg.setSource(35402U);
    msg.setSourceEntity(207U);
    msg.setDestination(33781U);
    msg.setDestinationEntity(16U);
    msg.type = 151U;
    msg.frequency = 2969029619U;
    msg.min_range = 19033U;
    msg.max_range = 9983U;
    msg.bits_per_point = 148U;
    msg.scale_factor = 0.5671487368534873;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7672045105026538;
    tmp_msg_0.beam_height = 0.6562569386746889;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {44, -46, -26, -69, -89, 28, 31, 51, -42, 18, -5, 54, 32, -100, 5, 44, 101, -49, 13, -102, 60, -98, -24, -55, -117, -24, 19, 126, 28, -102, -18, -113, -63, -67, 18, -117, 6, 46, -86, -64, -19, 95, -45, -50, -11, 126, -72, 19, 21, 122, 78, -7, -103, -82, -96, -9, -25, 101, 17, 14, 56, -63, 105, 17, -101, -122, 1, -21, -39, 26, 35, 73, -66, -60, -123, 93, -56, -55, -14, 55, -29, 40, 30, 123, 114, -76, -91, -34, 30, -86, 102, -101, -49, 89, 123, -30, 115, 58, 89, -108, 21, -46, -11, 126, 4, 52, -115, -28, -23, 88, 77, 54, 101, 72, 95, -95, 73, -32, 74, 115, -58, 9, -16, 20, -33, -57, -105, -74, 72, 122, -63, -3, -105, -78, -40, -74, -93, 114, -84, -2, 92, -106, -87, -125, 118, -55, 83, 56, -39, -76, 34, 108, -1, -25, 28, 124, 99, 57, 83, -1, -19, -80, 32, 26, 0, -42, 30, 0, -60, 90, -49, -32, 110, -19, 8, -97, -124, 8, -68, 13, 88, 85, 118, 75, 33, 68, -8, 75, -74, 8, 61, -49, 37, 106, 54, 81, -113, 4, -122, -22, 16, -80, -9, -62, 82, 11, -7, 118, -110, -55, 9, 72, -71, 83, 17, -86, -101, 98, 108, -119, 69, -26, -106, -13, -128, -11, -122, 51, 113, -67, 32, -103, -127, -92, -117, 100, -38, -53, 73, 76, 48, -67};
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
    msg.setTimeStamp(0.14581289019484667);
    msg.setSource(31300U);
    msg.setSourceEntity(23U);
    msg.setDestination(14350U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.046248669656582475);
    msg.setSource(42319U);
    msg.setSourceEntity(53U);
    msg.setDestination(12687U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.11220694677953391);
    msg.setSource(22790U);
    msg.setSourceEntity(229U);
    msg.setDestination(29528U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.44953720316938184);
    msg.setSource(10685U);
    msg.setSourceEntity(233U);
    msg.setDestination(58719U);
    msg.setDestinationEntity(78U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.7868853500914826);
    msg.setSource(55700U);
    msg.setSourceEntity(195U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(17U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.534957066174945);
    msg.setSource(43175U);
    msg.setSourceEntity(32U);
    msg.setDestination(6177U);
    msg.setDestinationEntity(143U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.3911071310855474);
    msg.setSource(62428U);
    msg.setSourceEntity(124U);
    msg.setDestination(38280U);
    msg.setDestinationEntity(134U);
    msg.value = 0.7238014756119499;
    msg.confidence = 0.23955006322197836;
    msg.opmodes.assign("PFNDIZNNKGMLFSCCQLAUKQRPTYERDAGJRZDCUMIUKXLVVMXCAJPYAFGJIRKWTRNJBUOQMAZABV");

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
    msg.setTimeStamp(0.8536352537616663);
    msg.setSource(826U);
    msg.setSourceEntity(168U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(146U);
    msg.value = 0.2958658831631875;
    msg.confidence = 0.8103885546415147;
    msg.opmodes.assign("UVXWMZFFCYMVMLQG");

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
    msg.setTimeStamp(0.5376659075237449);
    msg.setSource(5320U);
    msg.setSourceEntity(197U);
    msg.setDestination(38511U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8157733664056461;
    msg.confidence = 0.2146578825856933;
    msg.opmodes.assign("RTUQIPHCIKFOQVKBSRWHGIVYUMQXSTOSGIKSLHHTHSRUQIYPFLAABNMCXOOLYDTJWUBWQRXFM");

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
    msg.setTimeStamp(0.03907799906637832);
    msg.setSource(11496U);
    msg.setSourceEntity(143U);
    msg.setDestination(21403U);
    msg.setDestinationEntity(146U);
    msg.itow = 3645474777U;
    msg.lat = 0.0047916382091970355;
    msg.lon = 0.9068565983822776;
    msg.height_ell = 0.6108258046583613;
    msg.height_sea = 0.17903302698593093;
    msg.hacc = 0.8016156674101313;
    msg.vacc = 0.37113986520976283;
    msg.vel_n = 0.000980635345179004;
    msg.vel_e = 0.5540733619181292;
    msg.vel_d = 0.13356757309166756;
    msg.speed = 0.30967878313631203;
    msg.gspeed = 0.5304287362300554;
    msg.heading = 0.43481854386603613;
    msg.sacc = 0.47574743739704917;
    msg.cacc = 0.5754418956907886;

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
    msg.setTimeStamp(0.09079591967966394);
    msg.setSource(33413U);
    msg.setSourceEntity(244U);
    msg.setDestination(6605U);
    msg.setDestinationEntity(2U);
    msg.itow = 3772427170U;
    msg.lat = 0.45608486346538346;
    msg.lon = 0.4350437248896145;
    msg.height_ell = 0.7094310713577039;
    msg.height_sea = 0.8504997947005163;
    msg.hacc = 0.012852948997812308;
    msg.vacc = 0.6793009909039216;
    msg.vel_n = 0.3327787845096436;
    msg.vel_e = 0.41790143270949276;
    msg.vel_d = 0.8177066432074601;
    msg.speed = 0.33355164692576555;
    msg.gspeed = 0.10887758192626185;
    msg.heading = 0.4189425703994185;
    msg.sacc = 0.6112813197556862;
    msg.cacc = 0.3025348275487004;

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
    msg.setTimeStamp(0.23280002937489352);
    msg.setSource(27639U);
    msg.setSourceEntity(74U);
    msg.setDestination(3077U);
    msg.setDestinationEntity(188U);
    msg.itow = 2423385833U;
    msg.lat = 0.6501860770150357;
    msg.lon = 0.4825037082378859;
    msg.height_ell = 0.46688020420187204;
    msg.height_sea = 0.4084832546380738;
    msg.hacc = 0.044135032219948855;
    msg.vacc = 0.14091458614099994;
    msg.vel_n = 0.984887481276739;
    msg.vel_e = 0.8859477849365195;
    msg.vel_d = 0.15988250697516215;
    msg.speed = 0.5095062870533134;
    msg.gspeed = 0.37373070206068204;
    msg.heading = 0.13407034659299444;
    msg.sacc = 0.8579455278285028;
    msg.cacc = 0.7402846236230654;

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
    msg.setTimeStamp(0.4767737138780087);
    msg.setSource(19144U);
    msg.setSourceEntity(202U);
    msg.setDestination(10180U);
    msg.setDestinationEntity(150U);
    msg.id = 121U;
    msg.value = 0.9062489141760707;

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
    msg.setTimeStamp(0.8616916475065884);
    msg.setSource(25478U);
    msg.setSourceEntity(52U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(132U);
    msg.id = 220U;
    msg.value = 0.25389216918896884;

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
    msg.setTimeStamp(0.8065983366313698);
    msg.setSource(29266U);
    msg.setSourceEntity(38U);
    msg.setDestination(17573U);
    msg.setDestinationEntity(130U);
    msg.id = 6U;
    msg.value = 0.026874765346379004;

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
    msg.setTimeStamp(0.989245269584078);
    msg.setSource(13197U);
    msg.setSourceEntity(104U);
    msg.setDestination(49297U);
    msg.setDestinationEntity(164U);
    msg.x = 0.29677155175118375;
    msg.y = 0.3829700630272511;
    msg.z = 0.27269317089807965;
    msg.phi = 0.2644187407830617;
    msg.theta = 0.626963600294606;
    msg.psi = 0.23916591384577324;

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
    msg.setTimeStamp(0.17270434156080972);
    msg.setSource(53121U);
    msg.setSourceEntity(250U);
    msg.setDestination(31422U);
    msg.setDestinationEntity(172U);
    msg.x = 0.5899911216645921;
    msg.y = 0.578099682670159;
    msg.z = 0.24316870743175467;
    msg.phi = 0.6227386765331958;
    msg.theta = 0.6282739820434856;
    msg.psi = 0.11165873439925966;

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
    msg.setTimeStamp(0.5111487502403155);
    msg.setSource(46294U);
    msg.setSourceEntity(156U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(81U);
    msg.x = 0.8922431292693277;
    msg.y = 0.27794013724675726;
    msg.z = 0.7725963248650599;
    msg.phi = 0.053958480508325524;
    msg.theta = 0.5473453382753504;
    msg.psi = 0.1495951556649482;

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
    msg.setTimeStamp(0.02705766053680836);
    msg.setSource(11251U);
    msg.setSourceEntity(185U);
    msg.setDestination(12848U);
    msg.setDestinationEntity(96U);
    msg.beam_width = 0.7758705880895952;
    msg.beam_height = 0.5983911852221961;

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
    msg.setTimeStamp(0.9479301143874652);
    msg.setSource(10770U);
    msg.setSourceEntity(249U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(75U);
    msg.beam_width = 0.33370162947793813;
    msg.beam_height = 0.6057539195103918;

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
    msg.setTimeStamp(0.3089951323037595);
    msg.setSource(8352U);
    msg.setSourceEntity(99U);
    msg.setDestination(26767U);
    msg.setDestinationEntity(204U);
    msg.beam_width = 0.08441054132138393;
    msg.beam_height = 0.10271295130143243;

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
    msg.setTimeStamp(0.6703698146031121);
    msg.setSource(65376U);
    msg.setSourceEntity(45U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(112U);
    msg.sane = 93U;

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
    msg.setTimeStamp(0.7429959181570367);
    msg.setSource(29266U);
    msg.setSourceEntity(211U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(55U);
    msg.sane = 100U;

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
    msg.setTimeStamp(0.6883101743627287);
    msg.setSource(35342U);
    msg.setSourceEntity(81U);
    msg.setDestination(45463U);
    msg.setDestinationEntity(232U);
    msg.sane = 38U;

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
    msg.setTimeStamp(0.2158572848593212);
    msg.setSource(26251U);
    msg.setSourceEntity(173U);
    msg.setDestination(35632U);
    msg.setDestinationEntity(23U);
    msg.value = 0.1415999987912694;

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
    msg.setTimeStamp(0.624777902062391);
    msg.setSource(18541U);
    msg.setSourceEntity(252U);
    msg.setDestination(46794U);
    msg.setDestinationEntity(213U);
    msg.value = 0.02958389486331936;

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
    msg.setTimeStamp(0.4951158305520814);
    msg.setSource(19434U);
    msg.setSourceEntity(56U);
    msg.setDestination(24595U);
    msg.setDestinationEntity(238U);
    msg.value = 0.9478227127086654;

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
    msg.setTimeStamp(0.031559558096159734);
    msg.setSource(8427U);
    msg.setSourceEntity(62U);
    msg.setDestination(40377U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6121332185321321;

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
    msg.setTimeStamp(0.51909691012864);
    msg.setSource(28252U);
    msg.setSourceEntity(161U);
    msg.setDestination(35009U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6707467003517371;

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
    msg.setTimeStamp(0.8875427515712511);
    msg.setSource(61177U);
    msg.setSourceEntity(185U);
    msg.setDestination(9772U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8851211579583401;

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
    msg.setTimeStamp(0.8881914166992972);
    msg.setSource(44261U);
    msg.setSourceEntity(206U);
    msg.setDestination(25537U);
    msg.setDestinationEntity(169U);
    msg.value = 0.4221384886070224;

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
    msg.setTimeStamp(0.35291477470200794);
    msg.setSource(32671U);
    msg.setSourceEntity(154U);
    msg.setDestination(59316U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8374896730260211;

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
    msg.setTimeStamp(0.09900774460462103);
    msg.setSource(39590U);
    msg.setSourceEntity(72U);
    msg.setDestination(427U);
    msg.setDestinationEntity(60U);
    msg.value = 0.23525032331447848;

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
    msg.setTimeStamp(0.6356745030908895);
    msg.setSource(20325U);
    msg.setSourceEntity(76U);
    msg.setDestination(59028U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0054845723079417485;

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
    msg.setTimeStamp(0.4229701673080588);
    msg.setSource(8938U);
    msg.setSourceEntity(237U);
    msg.setDestination(26621U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8387947474125537;

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
    msg.setTimeStamp(0.8751682984627609);
    msg.setSource(16094U);
    msg.setSourceEntity(213U);
    msg.setDestination(30435U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5166238715037003;

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
    msg.setTimeStamp(0.19225666439053402);
    msg.setSource(62376U);
    msg.setSourceEntity(169U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(153U);
    msg.value = 0.472676061524512;

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
    msg.setTimeStamp(0.7534579457547853);
    msg.setSource(16353U);
    msg.setSourceEntity(231U);
    msg.setDestination(9411U);
    msg.setDestinationEntity(108U);
    msg.value = 0.23927454735639986;

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
    msg.setTimeStamp(0.32776788545540503);
    msg.setSource(44458U);
    msg.setSourceEntity(234U);
    msg.setDestination(51324U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5471301892024703;

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
    msg.setTimeStamp(0.4981566908239984);
    msg.setSource(26757U);
    msg.setSourceEntity(210U);
    msg.setDestination(22971U);
    msg.setDestinationEntity(89U);
    msg.value = 0.5191235437895853;

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
    msg.setTimeStamp(0.9017709327977003);
    msg.setSource(46632U);
    msg.setSourceEntity(58U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(87U);
    msg.value = 0.29325823058787426;

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
    msg.setTimeStamp(0.16634979475602263);
    msg.setSource(22062U);
    msg.setSourceEntity(26U);
    msg.setDestination(16168U);
    msg.setDestinationEntity(125U);
    msg.value = 0.14282544801227903;

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
    msg.setTimeStamp(0.09281082777835081);
    msg.setSource(45540U);
    msg.setSourceEntity(171U);
    msg.setDestination(8642U);
    msg.setDestinationEntity(119U);
    msg.value = 0.8218601377500886;

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
    msg.setTimeStamp(0.274425770134199);
    msg.setSource(13402U);
    msg.setSourceEntity(209U);
    msg.setDestination(48506U);
    msg.setDestinationEntity(188U);
    msg.value = 0.496068978226359;

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
    msg.setTimeStamp(0.15509690702961842);
    msg.setSource(54991U);
    msg.setSourceEntity(101U);
    msg.setDestination(59810U);
    msg.setDestinationEntity(221U);
    msg.value = 0.06677333635181038;

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
    msg.setTimeStamp(0.9874214518618957);
    msg.setSource(35928U);
    msg.setSourceEntity(127U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(185U);
    msg.value = 0.635411363081226;

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
    msg.setTimeStamp(0.5252634268383437);
    msg.setSource(58955U);
    msg.setSourceEntity(197U);
    msg.setDestination(45785U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8195352716434213;

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
    msg.setTimeStamp(0.08267422793356694);
    msg.setSource(17515U);
    msg.setSourceEntity(5U);
    msg.setDestination(30886U);
    msg.setDestinationEntity(149U);
    msg.value = 0.9686583801114461;

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
    msg.setTimeStamp(0.43488319273486853);
    msg.setSource(26993U);
    msg.setSourceEntity(197U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(242U);
    msg.validity = 64311U;
    msg.type = 113U;
    msg.tow = 3532229412U;
    msg.base_lat = 0.8552102924299381;
    msg.base_lon = 0.921136944553021;
    msg.base_height = 0.3190397382007989;
    msg.n = 0.8301961337307504;
    msg.e = 0.3346628167358152;
    msg.d = 0.35893268681695467;
    msg.v_n = 0.36657248406996334;
    msg.v_e = 0.396724574296755;
    msg.v_d = 0.5773221353012877;
    msg.satellites = 125U;
    msg.iar_hyp = 21508U;
    msg.iar_ratio = 0.4169753703120257;

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
    msg.setTimeStamp(0.1325966003249509);
    msg.setSource(25139U);
    msg.setSourceEntity(156U);
    msg.setDestination(387U);
    msg.setDestinationEntity(38U);
    msg.validity = 172U;
    msg.type = 70U;
    msg.tow = 2330647152U;
    msg.base_lat = 0.12588195467909502;
    msg.base_lon = 0.22166169622713672;
    msg.base_height = 0.3462620960089976;
    msg.n = 0.4888547309553687;
    msg.e = 0.14249970610566232;
    msg.d = 0.8665000054399422;
    msg.v_n = 0.4623461044168483;
    msg.v_e = 0.11780433577629412;
    msg.v_d = 0.38840099363186364;
    msg.satellites = 141U;
    msg.iar_hyp = 28154U;
    msg.iar_ratio = 0.190550468114299;

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
    msg.setTimeStamp(0.04639762248707291);
    msg.setSource(56289U);
    msg.setSourceEntity(153U);
    msg.setDestination(38973U);
    msg.setDestinationEntity(29U);
    msg.validity = 6703U;
    msg.type = 18U;
    msg.tow = 1290976619U;
    msg.base_lat = 0.89717896337567;
    msg.base_lon = 0.9740969059001836;
    msg.base_height = 0.7186623207730181;
    msg.n = 0.9231869235181939;
    msg.e = 0.9746275241075398;
    msg.d = 0.3037895928043276;
    msg.v_n = 0.3576192257098906;
    msg.v_e = 0.8493176057700312;
    msg.v_d = 0.6190317442686204;
    msg.satellites = 221U;
    msg.iar_hyp = 16480U;
    msg.iar_ratio = 0.7867352030025897;

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
    msg.setTimeStamp(0.5730203748685858);
    msg.setSource(40343U);
    msg.setSourceEntity(23U);
    msg.setDestination(65301U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7125521606176931;
    tmp_msg_0.lon = 0.9982949333821186;
    tmp_msg_0.height = 0.4247747994026442;
    tmp_msg_0.x = 0.37613209769203104;
    tmp_msg_0.y = 0.8613992448539972;
    tmp_msg_0.z = 0.8709319289552275;
    tmp_msg_0.phi = 0.13708937666576138;
    tmp_msg_0.theta = 0.3749280956302732;
    tmp_msg_0.psi = 0.6609286428221085;
    tmp_msg_0.u = 0.0652963027219029;
    tmp_msg_0.v = 0.9467644925434807;
    tmp_msg_0.w = 0.07799555617624887;
    tmp_msg_0.vx = 0.44111977720195794;
    tmp_msg_0.vy = 0.033721429922170754;
    tmp_msg_0.vz = 0.19729055803605933;
    tmp_msg_0.p = 0.4302587182808444;
    tmp_msg_0.q = 0.6373008854578136;
    tmp_msg_0.r = 0.015846021618585837;
    tmp_msg_0.depth = 0.04085029632553272;
    tmp_msg_0.alt = 0.02018904082974149;
    msg.state.set(tmp_msg_0);
    msg.type = 222U;

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
    msg.setTimeStamp(0.9962245177305243);
    msg.setSource(51268U);
    msg.setSourceEntity(38U);
    msg.setDestination(20335U);
    msg.setDestinationEntity(92U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.44133435699770895;
    tmp_msg_0.lon = 0.2299809732326229;
    tmp_msg_0.height = 0.2267903036372826;
    tmp_msg_0.x = 0.8286527203913554;
    tmp_msg_0.y = 0.8820723730497948;
    tmp_msg_0.z = 0.9809404491585068;
    tmp_msg_0.phi = 0.8704871967071856;
    tmp_msg_0.theta = 0.04417728501392815;
    tmp_msg_0.psi = 0.15460513024250444;
    tmp_msg_0.u = 0.23558198778782713;
    tmp_msg_0.v = 0.6117769693003681;
    tmp_msg_0.w = 0.22079678380238277;
    tmp_msg_0.vx = 0.8850066140093547;
    tmp_msg_0.vy = 0.9455936611182134;
    tmp_msg_0.vz = 0.8482169777834577;
    tmp_msg_0.p = 0.4408669749109111;
    tmp_msg_0.q = 0.6668179968612549;
    tmp_msg_0.r = 0.07741140026303817;
    tmp_msg_0.depth = 0.020866916436411587;
    tmp_msg_0.alt = 0.6120787049161719;
    msg.state.set(tmp_msg_0);
    msg.type = 100U;

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
    msg.setTimeStamp(0.3063985728679235);
    msg.setSource(11017U);
    msg.setSourceEntity(153U);
    msg.setDestination(41151U);
    msg.setDestinationEntity(16U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6203700215611784;
    tmp_msg_0.lon = 0.8569776499608187;
    tmp_msg_0.height = 0.30400756175987576;
    tmp_msg_0.x = 0.8566923969346211;
    tmp_msg_0.y = 0.05468224069043459;
    tmp_msg_0.z = 0.6583390796117541;
    tmp_msg_0.phi = 0.26965679077178195;
    tmp_msg_0.theta = 0.19179764245265563;
    tmp_msg_0.psi = 0.2752662270649139;
    tmp_msg_0.u = 0.2041095747156011;
    tmp_msg_0.v = 0.05890508318075316;
    tmp_msg_0.w = 0.9659843284926336;
    tmp_msg_0.vx = 0.3509730784217938;
    tmp_msg_0.vy = 0.26694164851836755;
    tmp_msg_0.vz = 0.734904727842475;
    tmp_msg_0.p = 0.4231923257211444;
    tmp_msg_0.q = 0.9832131292095583;
    tmp_msg_0.r = 0.7421324991682805;
    tmp_msg_0.depth = 0.6812371989572562;
    tmp_msg_0.alt = 0.4180303544954157;
    msg.state.set(tmp_msg_0);
    msg.type = 202U;

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
    msg.setTimeStamp(0.1948568154213529);
    msg.setSource(17581U);
    msg.setSourceEntity(33U);
    msg.setDestination(35288U);
    msg.setDestinationEntity(174U);
    msg.value = 0.7036979462644156;

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
    msg.setTimeStamp(0.6993893793634768);
    msg.setSource(1216U);
    msg.setSourceEntity(112U);
    msg.setDestination(929U);
    msg.setDestinationEntity(9U);
    msg.value = 0.17523114544112006;

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
    msg.setTimeStamp(0.8491706507574494);
    msg.setSource(60311U);
    msg.setSourceEntity(31U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(154U);
    msg.value = 0.15768765003664498;

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
    msg.setTimeStamp(0.23253129652717064);
    msg.setSource(47595U);
    msg.setSourceEntity(12U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(101U);
    msg.value = 0.036620505888963595;

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
    msg.setTimeStamp(0.7010840187881171);
    msg.setSource(7182U);
    msg.setSourceEntity(232U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(43U);
    msg.value = 0.9360384795621778;

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
    msg.setTimeStamp(0.06513082482084098);
    msg.setSource(3146U);
    msg.setSourceEntity(69U);
    msg.setDestination(54758U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8509050398463089;

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
    msg.setTimeStamp(0.14280575585476718);
    msg.setSource(26316U);
    msg.setSourceEntity(6U);
    msg.setDestination(3758U);
    msg.setDestinationEntity(44U);
    msg.value = 0.11359195002456035;

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
    msg.setTimeStamp(0.09079109780422956);
    msg.setSource(15893U);
    msg.setSourceEntity(80U);
    msg.setDestination(58329U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5991714702033979;

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
    msg.setTimeStamp(0.3170626937504649);
    msg.setSource(19690U);
    msg.setSourceEntity(246U);
    msg.setDestination(39046U);
    msg.setDestinationEntity(202U);
    msg.value = 0.801681123438416;

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
    msg.setTimeStamp(0.2565567015782032);
    msg.setSource(59479U);
    msg.setSourceEntity(20U);
    msg.setDestination(37874U);
    msg.setDestinationEntity(153U);
    msg.value = 0.2064223001855644;

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
    msg.setTimeStamp(0.2944313625093701);
    msg.setSource(50826U);
    msg.setSourceEntity(39U);
    msg.setDestination(16766U);
    msg.setDestinationEntity(153U);
    msg.value = 0.012734661374215306;

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
    msg.setTimeStamp(0.6387536816381055);
    msg.setSource(16792U);
    msg.setSourceEntity(135U);
    msg.setDestination(51166U);
    msg.setDestinationEntity(94U);
    msg.value = 0.3749663961913846;

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
    msg.setTimeStamp(0.3939305571727537);
    msg.setSource(31912U);
    msg.setSourceEntity(155U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(56U);
    msg.value = 0.029300635357977445;

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
    msg.setTimeStamp(0.8728364140849828);
    msg.setSource(2778U);
    msg.setSourceEntity(33U);
    msg.setDestination(15837U);
    msg.setDestinationEntity(167U);
    msg.value = 0.2425759799383822;

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
    msg.setTimeStamp(0.16473672481411405);
    msg.setSource(7370U);
    msg.setSourceEntity(162U);
    msg.setDestination(26713U);
    msg.setDestinationEntity(13U);
    msg.value = 0.47705716572089407;

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
    msg.setTimeStamp(0.12317053960828372);
    msg.setSource(12623U);
    msg.setSourceEntity(201U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(82U);
    msg.id = 121U;
    msg.zoom = 204U;
    msg.action = 121U;

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
    msg.setTimeStamp(0.09111317200818625);
    msg.setSource(8862U);
    msg.setSourceEntity(195U);
    msg.setDestination(55936U);
    msg.setDestinationEntity(149U);
    msg.id = 172U;
    msg.zoom = 95U;
    msg.action = 92U;

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
    msg.setTimeStamp(0.09074568846155473);
    msg.setSource(15990U);
    msg.setSourceEntity(39U);
    msg.setDestination(19068U);
    msg.setDestinationEntity(232U);
    msg.id = 243U;
    msg.zoom = 161U;
    msg.action = 196U;

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
    msg.setTimeStamp(0.18220833777828305);
    msg.setSource(29367U);
    msg.setSourceEntity(107U);
    msg.setDestination(11339U);
    msg.setDestinationEntity(250U);
    msg.id = 90U;
    msg.value = 0.5092096602335935;

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
    msg.setTimeStamp(0.8878968354505442);
    msg.setSource(10502U);
    msg.setSourceEntity(214U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(63U);
    msg.id = 43U;
    msg.value = 0.735880755563342;

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
    msg.setTimeStamp(0.959932745238572);
    msg.setSource(8235U);
    msg.setSourceEntity(63U);
    msg.setDestination(62326U);
    msg.setDestinationEntity(206U);
    msg.id = 126U;
    msg.value = 0.4854939343392315;

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
    msg.setTimeStamp(0.6136156004223801);
    msg.setSource(50111U);
    msg.setSourceEntity(0U);
    msg.setDestination(43854U);
    msg.setDestinationEntity(53U);
    msg.id = 98U;
    msg.value = 0.5942628918592222;

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
    msg.setTimeStamp(0.9829135438467809);
    msg.setSource(41813U);
    msg.setSourceEntity(208U);
    msg.setDestination(32756U);
    msg.setDestinationEntity(165U);
    msg.id = 33U;
    msg.value = 0.9172826176377274;

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
    msg.setTimeStamp(0.6456025723443498);
    msg.setSource(15359U);
    msg.setSourceEntity(85U);
    msg.setDestination(32272U);
    msg.setDestinationEntity(90U);
    msg.id = 14U;
    msg.value = 0.0724698500197859;

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
    msg.setTimeStamp(0.19924755019741158);
    msg.setSource(44626U);
    msg.setSourceEntity(140U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(193U);
    msg.id = 239U;
    msg.angle = 0.3573997198525899;

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
    msg.setTimeStamp(0.1342104405672574);
    msg.setSource(20696U);
    msg.setSourceEntity(31U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(29U);
    msg.id = 218U;
    msg.angle = 0.9580753844471019;

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
    msg.setTimeStamp(0.07151726680794857);
    msg.setSource(55102U);
    msg.setSourceEntity(72U);
    msg.setDestination(20783U);
    msg.setDestinationEntity(191U);
    msg.id = 133U;
    msg.angle = 0.554865672686203;

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
    msg.setTimeStamp(0.766330940364061);
    msg.setSource(13511U);
    msg.setSourceEntity(170U);
    msg.setDestination(24314U);
    msg.setDestinationEntity(60U);
    msg.op = 214U;
    msg.actions.assign("BTKDWMMVBZJFR");

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
    msg.setTimeStamp(0.7278614532417813);
    msg.setSource(41154U);
    msg.setSourceEntity(181U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(111U);
    msg.op = 211U;
    msg.actions.assign("FTIPMZDXQPKCUKSGBUJTFWKVQESYNBTDBWTELLTDMWWPGA");

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
    msg.setTimeStamp(0.5298749876705422);
    msg.setSource(63974U);
    msg.setSourceEntity(189U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(82U);
    msg.op = 6U;
    msg.actions.assign("TGZIBZNRWJXHUSVTEPIDNXJAFMAMPJACSMFPDWGLAHIPUBAEMGFXOGDLSSQNUHKDJAQZUPLBWECOKTINYTIBFLYQSXAQRWXVBHFJTYRHKLMWUEVEGK");

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
    msg.setTimeStamp(0.9925290194686585);
    msg.setSource(24397U);
    msg.setSourceEntity(20U);
    msg.setDestination(31265U);
    msg.setDestinationEntity(63U);
    msg.actions.assign("YZOZRTQXPQBQVOLYKRVYJAOANSEOGTMMXXHQBDJBAKWJNRFSYRZGZSWLRIAJICDHIMPFVGEOCCJJDNTNKOMIYIERCAWNIOFQYCDKMZLAHUUTCVKWZLYLNDICGSVDEHZPUPLDHU");

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
    msg.setTimeStamp(0.1282471483208527);
    msg.setSource(18103U);
    msg.setSourceEntity(209U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(136U);
    msg.actions.assign("ZVEGWRSMSTASUUPITSQDZKYE");

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
    msg.setTimeStamp(0.7684973377988545);
    msg.setSource(13453U);
    msg.setSourceEntity(33U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(90U);
    msg.actions.assign("AXSWFMNHFSDHNBKXFEJGGDRSUGQRFGIHMXMGECLJPOKVYJTMRUQYSNMNLXWSYEFCUPGADIITAKJEPGJCWVVDNUSQETEDQQIOCSBYIIWRLRKWPFYEZWDVXUXRLZUNKFOZHIOPNRPFQVVPYZDOTKUBZHIWDAGOMHBUAANRDCSLBTLCCXKKQGTZBVYMNOGQBFAOAPOMJEKFLJVCBSMIIYJTBDYHQHHYEUQETLCXPXVVW");

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
    msg.setTimeStamp(0.3900999254344827);
    msg.setSource(30936U);
    msg.setSourceEntity(201U);
    msg.setDestination(2887U);
    msg.setDestinationEntity(104U);
    msg.button = 127U;
    msg.value = 66U;

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
    msg.setTimeStamp(0.16920272328582064);
    msg.setSource(55329U);
    msg.setSourceEntity(173U);
    msg.setDestination(38158U);
    msg.setDestinationEntity(250U);
    msg.button = 75U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.19443641974505044);
    msg.setSource(47067U);
    msg.setSourceEntity(64U);
    msg.setDestination(42436U);
    msg.setDestinationEntity(128U);
    msg.button = 154U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.8572613585519511);
    msg.setSource(35403U);
    msg.setSourceEntity(111U);
    msg.setDestination(61540U);
    msg.setDestinationEntity(86U);
    msg.op = 235U;
    msg.text.assign("LVWEFYBDVOKOJICQDEJAUMQBBMRISLDMFFWIDNTAFYGRFQVDGZBPTVJEYCHWZNIYYNZWHAEJDVHHJVSBRWXLUPHRCIQOBUUGXSJEFDTWMSQGSWKMPCJJSOZMKGQAGAYYCZVUNOUKXQGUPLCDVEQHCKSZHIFRULSBXZAYSBFUETPIBX");

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
    msg.setTimeStamp(0.938266979748324);
    msg.setSource(58566U);
    msg.setSourceEntity(227U);
    msg.setDestination(43937U);
    msg.setDestinationEntity(33U);
    msg.op = 106U;
    msg.text.assign("XQDYOHOTGGSWLCSZLWJFWSIVJAPCVSSRMBFXAYSHAGKRILLJLLBEDAOWMWUVWBCUNZHPNEGHXJBUKXPKQTNYOVUUQJJSRWHTFNBORNDOZXSILAXILIFXZMNBRMRIMFGKBHIPBGAHRCYCJRUQDABQKCPJELVUDPNVIGNIRUMTP");

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
    msg.setTimeStamp(0.2911087884422048);
    msg.setSource(6058U);
    msg.setSourceEntity(155U);
    msg.setDestination(47414U);
    msg.setDestinationEntity(180U);
    msg.op = 137U;
    msg.text.assign("YUFHAZBIDKOLALAYUGMPPOLYGEUQZJUIVRCCKGJFIHZPFCYCBRNOCKMKIFSIDQXYZQWTDKKMMOBYEMYAPEBNGDSJLAJQQJIDXRTKAZBOXCJSOPRGYGBSNTHPNFNDBC");

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
    msg.setTimeStamp(0.15620189284141783);
    msg.setSource(30919U);
    msg.setSourceEntity(253U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(17U);
    msg.op = 116U;
    msg.time_remain = 0.9362165223722905;
    msg.sched_time = 0.0036932358933682297;

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
    msg.setTimeStamp(0.6494633372754631);
    msg.setSource(4104U);
    msg.setSourceEntity(188U);
    msg.setDestination(14061U);
    msg.setDestinationEntity(122U);
    msg.op = 137U;
    msg.time_remain = 0.16195811770475788;
    msg.sched_time = 0.5006982076154477;

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
    msg.setTimeStamp(0.4371185319363844);
    msg.setSource(34278U);
    msg.setSourceEntity(231U);
    msg.setDestination(50418U);
    msg.setDestinationEntity(66U);
    msg.op = 248U;
    msg.time_remain = 0.7064719451363752;
    msg.sched_time = 0.3593046962982098;

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
    msg.setTimeStamp(0.17275568640160344);
    msg.setSource(21159U);
    msg.setSourceEntity(32U);
    msg.setDestination(39769U);
    msg.setDestinationEntity(244U);
    msg.name.assign("MUMDVBSVDEXFLOBRBZOWSQPZLZPTHOTTOKBMFMLIEKUGUJSKTRXEXFKJGLAZGJVYXLIQWIBJUAYKZBTUJNPCHQFRARUDAMYSFLHQQTTFXHCEIFRAONSDOHMDNGOYBXJBYECXFVMJCGZAZUPENYPSKCRDWQNQTVABQLQHIOWOVXNLAHVWWJMBRWCRPIZUPKKNCWIRZJSPWXRUPESNACHCANKDNMLIYEHWIUGYDGVTEIDOKG");
    msg.op = 190U;
    msg.sched_time = 0.9944444460097073;

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
    msg.setTimeStamp(0.9839606957759507);
    msg.setSource(20177U);
    msg.setSourceEntity(111U);
    msg.setDestination(64568U);
    msg.setDestinationEntity(178U);
    msg.name.assign("JYJDNNTQIYIDNXCQRCILJGGXDZDZDDWZPUHYIOOMFWAVVSULDBHGWMSIKQECJRAQCVGWASZKBANJNHASUFNKFRUPWXLSOEPFSYLFHKJZQBQPXCLBEEILVDYWFITIRGPKTMMXOEVRKSMJLZXUB");
    msg.op = 53U;
    msg.sched_time = 0.09610959133863883;

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
    msg.setTimeStamp(0.2840106521436857);
    msg.setSource(45906U);
    msg.setSourceEntity(31U);
    msg.setDestination(42032U);
    msg.setDestinationEntity(93U);
    msg.name.assign("YHUKTIQRVWMCIQXOVUTMLEEFDKZZ");
    msg.op = 192U;
    msg.sched_time = 0.2106961467050481;

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
    msg.setTimeStamp(0.8025216579150272);
    msg.setSource(63084U);
    msg.setSourceEntity(96U);
    msg.setDestination(19303U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.9439977236722022);
    msg.setSource(8814U);
    msg.setSourceEntity(254U);
    msg.setDestination(50296U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.9131095385636686);
    msg.setSource(23852U);
    msg.setSourceEntity(39U);
    msg.setDestination(21738U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.47109745259688796);
    msg.setSource(3648U);
    msg.setSourceEntity(216U);
    msg.setDestination(32746U);
    msg.setDestinationEntity(178U);
    msg.name.assign("RDILBUOBNDZCLRIYEKOUERTDNZVNHGZNOKAVMMAYZLEOTQJBQGUSZLFUHWMXFXSMPYYZOVNBWOHFGTWWWJBXTHKGEUOBBQKLTKPBHFUENGNHSAXSX");
    msg.state = 160U;

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
    msg.setTimeStamp(0.28349376873189536);
    msg.setSource(8581U);
    msg.setSourceEntity(110U);
    msg.setDestination(47725U);
    msg.setDestinationEntity(122U);
    msg.name.assign("BOHTISWPPELFNLEJSHPBIETSTJFEFIROLMNFXWNHVRGLUOILXMCAQASNDJVUJEFXCCWFPGYIMZYLDZRZGTVPOHRSJEQWZDBGQUNRYGPTLHDYCFJGCHDKVQUNYWMZBZZFIVHVLKRIHXBKZUNAKOWOUCSDQBCJAADDPYKXGCBWAHRKSWJURIQGREKAQXSZTTJCKUUVTLNE");
    msg.state = 75U;

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
    msg.setTimeStamp(0.3460513648708555);
    msg.setSource(13804U);
    msg.setSourceEntity(111U);
    msg.setDestination(15662U);
    msg.setDestinationEntity(32U);
    msg.name.assign("MXRTICRXTHOPUAKBVJQFOKCHQLSWUIYGMQAMQOYCIYCDNRHIGZORZLEVDZUPSTHTJLUOVSOAQMUEFRGLNBELIXECUSMZQYDKJIVWUFKOBHICEGLHSWNUBCNTBALVFBMAHMFPXCHTFYWBECWEVAWZBXTMVFXFZ");
    msg.state = 204U;

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
    msg.setTimeStamp(0.9960954057285691);
    msg.setSource(42311U);
    msg.setSourceEntity(80U);
    msg.setDestination(63345U);
    msg.setDestinationEntity(67U);
    msg.name.assign("MYKFWJVQDQKXNVCNAATVYERSPESCBLLYZHHUMDWOMVAKNNCPOCYIAZNTKCJEGQJWFGGHUYLIGAQFUFZPYLXNBEYICZURZLTTEYSRYDQEGPYRUCKPARVJVJZRSBDXMGXIUVAIZXUEZDPLHWVGDKILBCROFQNBGWZPSBCLNHSRVIMFFTJFSOHTCBDMJASQRHUJDILHNQGUM");
    msg.value = 52U;

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
    msg.setTimeStamp(0.7200905800351132);
    msg.setSource(54742U);
    msg.setSourceEntity(165U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(97U);
    msg.name.assign("UZSUPRZQWIUOGVKXEOMAHSFRDFNYPHJUMDKPBSSWMHSVVWCBBDN");
    msg.value = 107U;

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
    msg.setTimeStamp(0.533804043346552);
    msg.setSource(13316U);
    msg.setSourceEntity(234U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(95U);
    msg.name.assign("NDEOIXSPSWJHGZAYJBYDFRNQPVHFHGAEUDGLGYLDORINCQJRQKSCLBGIEFTBRMNVITQVBXWLJTICWPHZLQHKXIZEDBPBKEOEYGFJQLIMWZHYCJFTIUKZDVYVXMSXKEHACKDUSMOAMIVAAVHBPEPMANRKJDYCRZJHHIOQRNTNUDTZTCRQUUBXZOXSUQRY");
    msg.value = 48U;

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
    msg.setTimeStamp(0.7041525935269902);
    msg.setSource(48660U);
    msg.setSourceEntity(21U);
    msg.setDestination(6654U);
    msg.setDestinationEntity(174U);
    msg.name.assign("ISESMTCZBYZZZBTNQKKSAUIVFHIFFVIDYKGBJCMLHBWJCBYVWRGIYLDRGOUVZCZRSJXFUUTBIIPDUUJTGTSGCGJTRGAJMVCWMFBOJWHETAAXIKWPSYRDWPXMOYWEHKSQGEYMVQQPOKZAFNCVMZCRUVDDUOPHLLHLXADQRKPPJLJONXRKMLWQNASJOOSDMMTEYTCARENUEBFNQUA");

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
    msg.setTimeStamp(0.66216592520839);
    msg.setSource(47973U);
    msg.setSourceEntity(26U);
    msg.setDestination(47016U);
    msg.setDestinationEntity(241U);
    msg.name.assign("MARXUUGRWEBYQKEILBUKSHCLNDFHXJYMHCAPPDBTJGUHFYBTJHE");

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
    msg.setTimeStamp(0.03260169052865525);
    msg.setSource(27395U);
    msg.setSourceEntity(43U);
    msg.setDestination(39071U);
    msg.setDestinationEntity(99U);
    msg.name.assign("FPJQKKIUTABFTZYMSHZGUQQKBQAGSBULKDWIRNGLXORIUCMUMNVASVNNILDTVHLGZTDNRFXEXBRBMXIQOAKTJCXUQVCIZLLFOHJSOKEHCBCIWWAOPIEETXDRUYNYVQMOYPPJWEITRZGNTGFFHLYNDWOUFKXJZMSRTMRJCMCOGHAKHYAWJSKSWUSDPWSVYZORKEDZDGUBFSPPHAYEBXXCAPEPPVCHAWJRTFNDYMIFBBLGOLZZGVDQJL");

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
    msg.setTimeStamp(0.5245369639907485);
    msg.setSource(59081U);
    msg.setSourceEntity(120U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(221U);
    msg.name.assign("XWVDORCAVUJBPCZRKFPOFZGIBTUCOWDFJNXGVTESCQQHBSGQATEFBRCUJBVFURZPIZRYYWRGDHKNWPTOKJUEXGHYVSZLJFCPPZGWBMWTOAMITUBEMKSATTVQZJQNVHLOUHDKXGPSAXOIYEEGWMYQZXNDQY");
    msg.value = 116U;

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
    msg.setTimeStamp(0.4489311429360422);
    msg.setSource(18745U);
    msg.setSourceEntity(29U);
    msg.setDestination(32456U);
    msg.setDestinationEntity(153U);
    msg.name.assign("OAXHAMPRPYKIZTPSSDBZSLAMRCVTTJBLFZYOQIQMOZLATRSXPWCCFNCNDOGEPETARKBCQNHBPEMJYIMNWGYUQBMHGWHVMCGWFHXIJID");
    msg.value = 149U;

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
    msg.setTimeStamp(0.7964484813443385);
    msg.setSource(733U);
    msg.setSourceEntity(68U);
    msg.setDestination(44266U);
    msg.setDestinationEntity(105U);
    msg.name.assign("PXNZZMBLXBNOIQUFUWRHKBAGYOWUYUZFZVEJWQDXGEIT");
    msg.value = 105U;

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
    msg.setTimeStamp(0.0636117880201128);
    msg.setSource(29745U);
    msg.setSourceEntity(38U);
    msg.setDestination(43905U);
    msg.setDestinationEntity(234U);
    msg.id = 90U;
    msg.period = 3431185640U;
    msg.duty_cycle = 4132453616U;

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
    msg.setTimeStamp(0.725238533003751);
    msg.setSource(4062U);
    msg.setSourceEntity(131U);
    msg.setDestination(17089U);
    msg.setDestinationEntity(198U);
    msg.id = 208U;
    msg.period = 1286412214U;
    msg.duty_cycle = 3118843684U;

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
    msg.setTimeStamp(0.885342093417986);
    msg.setSource(51196U);
    msg.setSourceEntity(97U);
    msg.setDestination(13022U);
    msg.setDestinationEntity(140U);
    msg.id = 88U;
    msg.period = 2287324888U;
    msg.duty_cycle = 1709513599U;

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
    msg.setTimeStamp(0.4633535780538701);
    msg.setSource(33807U);
    msg.setSourceEntity(123U);
    msg.setDestination(17981U);
    msg.setDestinationEntity(249U);
    msg.id = 68U;
    msg.period = 3496224477U;
    msg.duty_cycle = 2310715928U;

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
    msg.setTimeStamp(0.7452879433764985);
    msg.setSource(14U);
    msg.setSourceEntity(248U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(58U);
    msg.id = 247U;
    msg.period = 1672283991U;
    msg.duty_cycle = 535987209U;

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
    msg.setTimeStamp(0.7634451198792143);
    msg.setSource(49616U);
    msg.setSourceEntity(203U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(173U);
    msg.id = 168U;
    msg.period = 1383398202U;
    msg.duty_cycle = 3385209681U;

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
    msg.setTimeStamp(0.14824681221093017);
    msg.setSource(52660U);
    msg.setSourceEntity(199U);
    msg.setDestination(60142U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.6772000491739016;
    msg.lon = 0.783933933146177;
    msg.height = 0.9294260228927913;
    msg.x = 0.6642903665280121;
    msg.y = 0.02214483757806429;
    msg.z = 0.7844868592800632;
    msg.phi = 0.9568451986082825;
    msg.theta = 0.4880150084853224;
    msg.psi = 0.6723446492251898;
    msg.u = 0.13363108919014988;
    msg.v = 0.1660377740777642;
    msg.w = 0.7228588155355504;
    msg.vx = 0.35523373665718727;
    msg.vy = 0.6600760231933368;
    msg.vz = 0.45715362458041553;
    msg.p = 0.8172610041277775;
    msg.q = 0.31500918328999394;
    msg.r = 0.5426380099088625;
    msg.depth = 0.5517465366261768;
    msg.alt = 0.6525260264892883;

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
    msg.setTimeStamp(0.6453059803574486);
    msg.setSource(17858U);
    msg.setSourceEntity(84U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.9618134866409737;
    msg.lon = 0.09772918637739292;
    msg.height = 0.07030595158279629;
    msg.x = 0.1339735931059346;
    msg.y = 0.7411753475247111;
    msg.z = 0.45871354706219514;
    msg.phi = 0.5962170477542514;
    msg.theta = 0.7366072191387267;
    msg.psi = 0.03730747266714651;
    msg.u = 0.3281059483892289;
    msg.v = 0.21154506159413633;
    msg.w = 0.10143782203630736;
    msg.vx = 0.6919374788238555;
    msg.vy = 0.49437326123229175;
    msg.vz = 0.16551860094822346;
    msg.p = 0.24011467797935737;
    msg.q = 0.46193134142604164;
    msg.r = 0.21556499743023294;
    msg.depth = 0.6666943702210464;
    msg.alt = 0.1690427843978327;

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
    msg.setTimeStamp(0.524921401128504);
    msg.setSource(53033U);
    msg.setSourceEntity(147U);
    msg.setDestination(47522U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.775030705880083;
    msg.lon = 0.5320273861940557;
    msg.height = 0.5485556425785574;
    msg.x = 0.9187086050682166;
    msg.y = 0.8191848501726431;
    msg.z = 0.48283964259342393;
    msg.phi = 0.09946902112716471;
    msg.theta = 0.4061363057991918;
    msg.psi = 0.8614589048519327;
    msg.u = 0.6602403032102943;
    msg.v = 0.3921260291857641;
    msg.w = 0.7716810690639944;
    msg.vx = 0.5442540589831273;
    msg.vy = 0.31582298838646217;
    msg.vz = 0.0018649966667384499;
    msg.p = 0.39880428182314376;
    msg.q = 0.6628013248471257;
    msg.r = 0.7613206801952012;
    msg.depth = 0.3107212004935461;
    msg.alt = 0.4210976444448863;

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
    msg.setTimeStamp(0.9244699226694043);
    msg.setSource(46253U);
    msg.setSourceEntity(6U);
    msg.setDestination(14268U);
    msg.setDestinationEntity(116U);
    msg.x = 0.7792867145839566;
    msg.y = 0.09523346113469966;
    msg.z = 0.9366682545707298;

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
    msg.setTimeStamp(0.682567365781061);
    msg.setSource(27109U);
    msg.setSourceEntity(186U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(65U);
    msg.x = 0.9581299600773717;
    msg.y = 0.7302872452981745;
    msg.z = 0.3641735199240763;

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
    msg.setTimeStamp(0.23772816116313567);
    msg.setSource(11955U);
    msg.setSourceEntity(227U);
    msg.setDestination(33567U);
    msg.setDestinationEntity(174U);
    msg.x = 0.7885292414386149;
    msg.y = 0.1909568901230434;
    msg.z = 0.2294497576791904;

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
    msg.setTimeStamp(0.8005084335372568);
    msg.setSource(547U);
    msg.setSourceEntity(98U);
    msg.setDestination(49649U);
    msg.setDestinationEntity(80U);
    msg.value = 0.10454971127724;

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
    msg.setTimeStamp(0.7183550489547216);
    msg.setSource(25928U);
    msg.setSourceEntity(127U);
    msg.setDestination(38129U);
    msg.setDestinationEntity(111U);
    msg.value = 0.40572261822525546;

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
    msg.setTimeStamp(0.7317083955446592);
    msg.setSource(14711U);
    msg.setSourceEntity(10U);
    msg.setDestination(12245U);
    msg.setDestinationEntity(158U);
    msg.value = 0.8457475366868129;

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
    msg.setTimeStamp(0.08402904670185352);
    msg.setSource(64994U);
    msg.setSourceEntity(229U);
    msg.setDestination(23301U);
    msg.setDestinationEntity(7U);
    msg.value = 0.6368784077789794;

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
    msg.setTimeStamp(0.2517609348070904);
    msg.setSource(53064U);
    msg.setSourceEntity(139U);
    msg.setDestination(15222U);
    msg.setDestinationEntity(57U);
    msg.value = 0.004638792854745555;

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
    msg.setTimeStamp(0.31476975457019807);
    msg.setSource(11198U);
    msg.setSourceEntity(205U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5284649461193864;

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
    msg.setTimeStamp(0.01540294673325504);
    msg.setSource(5888U);
    msg.setSourceEntity(122U);
    msg.setDestination(37775U);
    msg.setDestinationEntity(53U);
    msg.x = 0.6961585761778348;
    msg.y = 0.27087268733737324;
    msg.z = 0.19507704380422364;
    msg.phi = 0.5065969539936463;
    msg.theta = 0.7944572192313731;
    msg.psi = 0.9089245301242362;
    msg.p = 0.4478026144031668;
    msg.q = 0.5347969554224193;
    msg.r = 0.615014409876914;
    msg.u = 0.700466352298959;
    msg.v = 0.09892815256548604;
    msg.w = 0.28440718798552833;
    msg.bias_psi = 0.519348965657365;
    msg.bias_r = 0.02586601963865265;

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
    msg.setTimeStamp(0.15981883946219522);
    msg.setSource(15456U);
    msg.setSourceEntity(171U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(231U);
    msg.x = 0.2276663278546892;
    msg.y = 0.3636560508766764;
    msg.z = 0.8747640660689778;
    msg.phi = 0.48468352209249643;
    msg.theta = 0.29029061427670844;
    msg.psi = 0.7995417682054275;
    msg.p = 0.6598301279389721;
    msg.q = 0.904810374902279;
    msg.r = 0.6993436831699332;
    msg.u = 0.8786913770727315;
    msg.v = 0.03977654841698086;
    msg.w = 0.5893446977661511;
    msg.bias_psi = 0.35084738586973097;
    msg.bias_r = 0.3435080694129613;

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
    msg.setTimeStamp(0.846463503358067);
    msg.setSource(38180U);
    msg.setSourceEntity(48U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(172U);
    msg.x = 0.12244753841010336;
    msg.y = 0.7967417194874508;
    msg.z = 0.37750755974389805;
    msg.phi = 0.07572139287088386;
    msg.theta = 0.236506302565199;
    msg.psi = 0.7702926042068693;
    msg.p = 0.16988811434694417;
    msg.q = 0.619178191938287;
    msg.r = 0.7165496729786508;
    msg.u = 0.6738031676013149;
    msg.v = 0.37393430173556896;
    msg.w = 0.6144525669382191;
    msg.bias_psi = 0.9216913991059873;
    msg.bias_r = 0.3379770195062908;

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
    msg.setTimeStamp(0.11655490398733126);
    msg.setSource(11685U);
    msg.setSourceEntity(104U);
    msg.setDestination(61049U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.6371961863448612;
    msg.bias_r = 0.11133404293069793;
    msg.cog = 0.8907672446785991;
    msg.cyaw = 0.3055649146480681;
    msg.lbl_rej_level = 0.0798433586776286;
    msg.gps_rej_level = 0.6262216962564982;
    msg.custom_x = 0.33451231653171365;
    msg.custom_y = 0.10428974668077717;
    msg.custom_z = 0.8528953806446871;

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
    msg.setTimeStamp(0.5685183123097516);
    msg.setSource(2322U);
    msg.setSourceEntity(127U);
    msg.setDestination(36140U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.17951867732284132;
    msg.bias_r = 0.9478293363345778;
    msg.cog = 0.7075747725801277;
    msg.cyaw = 0.011695065316877362;
    msg.lbl_rej_level = 0.983258858036133;
    msg.gps_rej_level = 0.3791477913508017;
    msg.custom_x = 0.22105287240794302;
    msg.custom_y = 0.654984881355984;
    msg.custom_z = 0.29134390611219985;

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
    msg.setTimeStamp(0.6323604407265233);
    msg.setSource(16196U);
    msg.setSourceEntity(187U);
    msg.setDestination(21068U);
    msg.setDestinationEntity(244U);
    msg.bias_psi = 0.49942167620670774;
    msg.bias_r = 0.9701235584730791;
    msg.cog = 0.13620286185269803;
    msg.cyaw = 0.1956598720977173;
    msg.lbl_rej_level = 0.7168394065418532;
    msg.gps_rej_level = 0.6570993237420575;
    msg.custom_x = 0.3429045354954172;
    msg.custom_y = 0.2008520533004543;
    msg.custom_z = 0.6618438045764725;

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
    msg.setTimeStamp(0.06149258140819169);
    msg.setSource(20140U);
    msg.setSourceEntity(113U);
    msg.setDestination(44273U);
    msg.setDestinationEntity(223U);
    msg.utc_time = 0.08201488365231069;
    msg.reason = 59U;

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
    msg.setTimeStamp(0.14121132977271245);
    msg.setSource(49773U);
    msg.setSourceEntity(217U);
    msg.setDestination(5594U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.25082819836154646;
    msg.reason = 192U;

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
    msg.setTimeStamp(0.9048497225377233);
    msg.setSource(11973U);
    msg.setSourceEntity(234U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(183U);
    msg.utc_time = 0.8659642381823197;
    msg.reason = 169U;

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
    msg.setTimeStamp(0.5829296166631436);
    msg.setSource(58614U);
    msg.setSourceEntity(39U);
    msg.setDestination(24793U);
    msg.setDestinationEntity(196U);
    msg.id = 243U;
    msg.range = 0.31993848155579163;
    msg.acceptance = 254U;

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
    msg.setTimeStamp(0.2739694461370138);
    msg.setSource(22359U);
    msg.setSourceEntity(183U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(87U);
    msg.id = 111U;
    msg.range = 0.700916369860428;
    msg.acceptance = 252U;

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
    msg.setTimeStamp(0.20300511811557798);
    msg.setSource(33876U);
    msg.setSourceEntity(55U);
    msg.setDestination(51168U);
    msg.setDestinationEntity(11U);
    msg.id = 254U;
    msg.range = 0.9557324173284707;
    msg.acceptance = 119U;

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
    msg.setTimeStamp(0.8297400902955819);
    msg.setSource(37080U);
    msg.setSourceEntity(206U);
    msg.setDestination(12917U);
    msg.setDestinationEntity(12U);
    msg.type = 115U;
    msg.reason = 66U;
    msg.value = 0.9570281303049938;
    msg.timestep = 0.008408067789116291;

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
    msg.setTimeStamp(0.8998465046648803);
    msg.setSource(60133U);
    msg.setSourceEntity(129U);
    msg.setDestination(31309U);
    msg.setDestinationEntity(130U);
    msg.type = 98U;
    msg.reason = 108U;
    msg.value = 0.8234962667842501;
    msg.timestep = 0.5694572264698596;

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
    msg.setTimeStamp(0.1318490328152001);
    msg.setSource(50406U);
    msg.setSourceEntity(17U);
    msg.setDestination(23011U);
    msg.setDestinationEntity(168U);
    msg.type = 94U;
    msg.reason = 29U;
    msg.value = 0.05723920730066967;
    msg.timestep = 0.9707777833418195;

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
    msg.setTimeStamp(0.2591309178633181);
    msg.setSource(61066U);
    msg.setSourceEntity(71U);
    msg.setDestination(63232U);
    msg.setDestinationEntity(190U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ULAXBHOUJQCZGTVCIFETOWHORZTDXRCGYBKBQNFDSWDVHYIJTWYHWKLWQWAZNXSMUYOCCOKDCAIAKTLZJYYJUXTDSMAZMYNZBK");
    tmp_msg_0.lat = 0.8291961679281453;
    tmp_msg_0.lon = 0.7188805308496713;
    tmp_msg_0.depth = 0.5692657965333214;
    tmp_msg_0.query_channel = 250U;
    tmp_msg_0.reply_channel = 92U;
    tmp_msg_0.transponder_delay = 126U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6694639437252354;
    msg.y = 0.0715177390959072;
    msg.var_x = 0.08234267951490049;
    msg.var_y = 0.6150698273352456;
    msg.distance = 0.5066766885030891;

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
    msg.setTimeStamp(0.8616689268972312);
    msg.setSource(33090U);
    msg.setSourceEntity(83U);
    msg.setDestination(10266U);
    msg.setDestinationEntity(16U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KJCCVHWOUHYJTMBNNLKUXVMXDJGGXAKREHCNUYBMBBMYLQUZSUVUXGDWGGFXZYFKSMFDXTTTSAKXKYYHQPDNVRIANRAIWXCFEOFDAEQORZAZKWBZSAKHDYNQMUWVRZYOPCOABTIISHPXDPLTXJCCTTPMNGWJALLDEYGVCLJZPGOEQNBLIJENJLWPGOTDEFAKFPWF");
    tmp_msg_0.lat = 0.41906534407763996;
    tmp_msg_0.lon = 0.13022151784867042;
    tmp_msg_0.depth = 0.013053034705588606;
    tmp_msg_0.query_channel = 23U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 78U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.11014233325182088;
    msg.y = 0.4203898125423361;
    msg.var_x = 0.9975751585596551;
    msg.var_y = 0.5518544910858504;
    msg.distance = 0.8959772946719494;

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
    msg.setTimeStamp(0.6908715967974832);
    msg.setSource(18678U);
    msg.setSourceEntity(41U);
    msg.setDestination(2671U);
    msg.setDestinationEntity(83U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RUQQGIXHFHJPRLPIPXZGPKRPYDZLJCGGUYUKBXTBUBCXTGIXCP");
    tmp_msg_0.lat = 0.6827547338926769;
    tmp_msg_0.lon = 0.8769736429059372;
    tmp_msg_0.depth = 0.35959552184922616;
    tmp_msg_0.query_channel = 178U;
    tmp_msg_0.reply_channel = 173U;
    tmp_msg_0.transponder_delay = 220U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7748888669003593;
    msg.y = 0.23725323937086606;
    msg.var_x = 0.6401664721471383;
    msg.var_y = 0.8728137577198739;
    msg.distance = 0.6535921050593864;

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
    msg.setTimeStamp(0.08078882420514222);
    msg.setSource(20070U);
    msg.setSourceEntity(53U);
    msg.setDestination(17947U);
    msg.setDestinationEntity(155U);
    msg.state = 100U;

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
    msg.setTimeStamp(0.41444270701300123);
    msg.setSource(35877U);
    msg.setSourceEntity(8U);
    msg.setDestination(43296U);
    msg.setDestinationEntity(179U);
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
    msg.setTimeStamp(0.25366723611719844);
    msg.setSource(30291U);
    msg.setSourceEntity(49U);
    msg.setDestination(9918U);
    msg.setDestinationEntity(117U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.8331184870652538);
    msg.setSource(19984U);
    msg.setSourceEntity(196U);
    msg.setDestination(62752U);
    msg.setDestinationEntity(254U);
    msg.x = 0.252335968064742;
    msg.y = 0.956554603007286;
    msg.z = 0.5131755840916074;

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
    msg.setTimeStamp(0.7282419395704065);
    msg.setSource(42490U);
    msg.setSourceEntity(207U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(115U);
    msg.x = 0.7538107589383363;
    msg.y = 0.20153988893648367;
    msg.z = 0.41194655681054115;

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
    msg.setTimeStamp(0.8242448542856968);
    msg.setSource(10297U);
    msg.setSourceEntity(44U);
    msg.setDestination(40633U);
    msg.setDestinationEntity(164U);
    msg.x = 0.08582266470410804;
    msg.y = 0.5749533227791194;
    msg.z = 0.8478523793255668;

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
    msg.setTimeStamp(0.7737038644904796);
    msg.setSource(4548U);
    msg.setSourceEntity(216U);
    msg.setDestination(33895U);
    msg.setDestinationEntity(123U);
    msg.va = 0.5039943092477644;
    msg.aoa = 0.012055424572378182;
    msg.ssa = 0.959502987569738;

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
    msg.setTimeStamp(0.3223388152156611);
    msg.setSource(53241U);
    msg.setSourceEntity(52U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(120U);
    msg.va = 0.6867320075897847;
    msg.aoa = 0.6289899387689137;
    msg.ssa = 0.4604876507274721;

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
    msg.setTimeStamp(0.333058601514998);
    msg.setSource(9075U);
    msg.setSourceEntity(237U);
    msg.setDestination(34848U);
    msg.setDestinationEntity(1U);
    msg.va = 0.5232252358238834;
    msg.aoa = 0.8063484080805031;
    msg.ssa = 0.05187532645834381;

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
    msg.setTimeStamp(0.8762265659912941);
    msg.setSource(34805U);
    msg.setSourceEntity(120U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(40U);
    msg.value = 0.431216661687426;

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
    msg.setTimeStamp(0.47771161473915247);
    msg.setSource(41122U);
    msg.setSourceEntity(130U);
    msg.setDestination(55348U);
    msg.setDestinationEntity(173U);
    msg.value = 0.8173843933401269;

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
    msg.setTimeStamp(0.29763969552909353);
    msg.setSource(32324U);
    msg.setSourceEntity(163U);
    msg.setDestination(8264U);
    msg.setDestinationEntity(107U);
    msg.value = 0.45328555948241356;

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
    msg.setTimeStamp(0.8316119127498689);
    msg.setSource(61018U);
    msg.setSourceEntity(228U);
    msg.setDestination(55992U);
    msg.setDestinationEntity(196U);
    msg.value = 0.013790037860151538;
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
    msg.setTimeStamp(0.13650940522657495);
    msg.setSource(35636U);
    msg.setSourceEntity(187U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(166U);
    msg.value = 0.9660286273585416;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.46725460289937015);
    msg.setSource(54168U);
    msg.setSourceEntity(169U);
    msg.setDestination(59049U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8488796507209533;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.7875234667078871);
    msg.setSource(46863U);
    msg.setSourceEntity(51U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(240U);
    msg.value = 0.3620444181937049;
    msg.speed_units = 190U;

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
    msg.setTimeStamp(0.057286971347775384);
    msg.setSource(52382U);
    msg.setSourceEntity(180U);
    msg.setDestination(21973U);
    msg.setDestinationEntity(227U);
    msg.value = 0.8064223266779308;
    msg.speed_units = 159U;

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
    msg.setTimeStamp(0.08301501051120974);
    msg.setSource(2872U);
    msg.setSourceEntity(48U);
    msg.setDestination(2356U);
    msg.setDestinationEntity(37U);
    msg.value = 0.05672116089599455;
    msg.speed_units = 248U;

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
    msg.setTimeStamp(0.3435069083733404);
    msg.setSource(51992U);
    msg.setSourceEntity(213U);
    msg.setDestination(13947U);
    msg.setDestinationEntity(174U);
    msg.value = 0.447700049273135;

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
    msg.setTimeStamp(0.21215544115147233);
    msg.setSource(15563U);
    msg.setSourceEntity(67U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(89U);
    msg.value = 0.1971323105967825;

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
    msg.setTimeStamp(0.27525703530684453);
    msg.setSource(13450U);
    msg.setSourceEntity(54U);
    msg.setDestination(63545U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6640968011313417;

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
    msg.setTimeStamp(0.38432510063808123);
    msg.setSource(47250U);
    msg.setSourceEntity(122U);
    msg.setDestination(31248U);
    msg.setDestinationEntity(230U);
    msg.value = 0.882439547309;

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
    msg.setTimeStamp(0.8039835314395969);
    msg.setSource(4820U);
    msg.setSourceEntity(53U);
    msg.setDestination(57431U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5492749522995207;

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
    msg.setTimeStamp(0.7435146898628954);
    msg.setSource(30176U);
    msg.setSourceEntity(119U);
    msg.setDestination(46487U);
    msg.setDestinationEntity(37U);
    msg.value = 0.5575817841879699;

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
    msg.setTimeStamp(0.9273657832665532);
    msg.setSource(39864U);
    msg.setSourceEntity(234U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(146U);
    msg.value = 0.20072221894414521;

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
    msg.setTimeStamp(0.5867735280796107);
    msg.setSource(53320U);
    msg.setSourceEntity(122U);
    msg.setDestination(7421U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3989695989174469;

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
    msg.setTimeStamp(0.3644407836945103);
    msg.setSource(52835U);
    msg.setSourceEntity(223U);
    msg.setDestination(34987U);
    msg.setDestinationEntity(221U);
    msg.value = 0.31076066755840126;

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
    msg.setTimeStamp(0.93651502599264);
    msg.setSource(1578U);
    msg.setSourceEntity(143U);
    msg.setDestination(41091U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 3020679386U;
    msg.start_lat = 0.6187381635555925;
    msg.start_lon = 0.27661806680792445;
    msg.start_z = 0.3844634985058617;
    msg.start_z_units = 149U;
    msg.end_lat = 0.5020212475114801;
    msg.end_lon = 0.7879815022009684;
    msg.end_z = 0.19512869649833042;
    msg.end_z_units = 172U;
    msg.speed = 0.4762355170680822;
    msg.speed_units = 183U;
    msg.lradius = 0.44902343887008134;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.8588970486821775);
    msg.setSource(17735U);
    msg.setSourceEntity(20U);
    msg.setDestination(60672U);
    msg.setDestinationEntity(39U);
    msg.path_ref = 2848239145U;
    msg.start_lat = 0.6752723266865513;
    msg.start_lon = 0.4238179869272809;
    msg.start_z = 0.09872253005927845;
    msg.start_z_units = 78U;
    msg.end_lat = 0.6309497149738482;
    msg.end_lon = 0.09751927742768185;
    msg.end_z = 0.24640018654081175;
    msg.end_z_units = 248U;
    msg.speed = 0.8093500933560545;
    msg.speed_units = 65U;
    msg.lradius = 0.953492321496628;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.49135488574250885);
    msg.setSource(61940U);
    msg.setSourceEntity(142U);
    msg.setDestination(52298U);
    msg.setDestinationEntity(120U);
    msg.path_ref = 3581276601U;
    msg.start_lat = 0.42987967366159086;
    msg.start_lon = 0.9493552069273439;
    msg.start_z = 0.20464356340031864;
    msg.start_z_units = 89U;
    msg.end_lat = 0.969993045131158;
    msg.end_lon = 0.748353030165729;
    msg.end_z = 0.12903119209105918;
    msg.end_z_units = 146U;
    msg.speed = 0.11656963171129764;
    msg.speed_units = 224U;
    msg.lradius = 0.7911530354944367;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.6279174305424459);
    msg.setSource(58282U);
    msg.setSourceEntity(1U);
    msg.setDestination(46031U);
    msg.setDestinationEntity(189U);
    msg.x = 0.3242838030770605;
    msg.y = 0.7152560914944667;
    msg.z = 0.9797245560593765;
    msg.k = 0.2712087738297304;
    msg.m = 0.8506222716868782;
    msg.n = 0.9872781397238972;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.013367230019642795);
    msg.setSource(58484U);
    msg.setSourceEntity(28U);
    msg.setDestination(28757U);
    msg.setDestinationEntity(242U);
    msg.x = 0.18850497001739408;
    msg.y = 0.42127315515896924;
    msg.z = 0.9282784932222042;
    msg.k = 0.5835377010357112;
    msg.m = 0.42163847063796744;
    msg.n = 0.824007446315923;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.19543574780739825);
    msg.setSource(10032U);
    msg.setSourceEntity(80U);
    msg.setDestination(22601U);
    msg.setDestinationEntity(17U);
    msg.x = 0.814809477832765;
    msg.y = 0.1597502705233559;
    msg.z = 0.7724030593852216;
    msg.k = 0.5732252605502957;
    msg.m = 0.9499449362083607;
    msg.n = 0.004183934281764556;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.24240772919238684);
    msg.setSource(37554U);
    msg.setSourceEntity(100U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(4U);
    msg.value = 0.47036628992734497;

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
    msg.setTimeStamp(0.9283637287877117);
    msg.setSource(27496U);
    msg.setSourceEntity(63U);
    msg.setDestination(14901U);
    msg.setDestinationEntity(160U);
    msg.value = 0.40797639169993805;

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
    msg.setTimeStamp(0.8272097008721689);
    msg.setSource(32518U);
    msg.setSourceEntity(167U);
    msg.setDestination(26334U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8408599931762049;

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
    msg.setTimeStamp(0.6154138512833665);
    msg.setSource(63735U);
    msg.setSourceEntity(160U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(21U);
    msg.u = 0.2407831323793661;
    msg.v = 0.7103480731699796;
    msg.w = 0.956570020239974;
    msg.p = 0.5405822766587381;
    msg.q = 0.4996209084412545;
    msg.r = 0.8330897888397603;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.5921556153362014);
    msg.setSource(8599U);
    msg.setSourceEntity(146U);
    msg.setDestination(52658U);
    msg.setDestinationEntity(203U);
    msg.u = 0.6968533393722913;
    msg.v = 0.6688708952960275;
    msg.w = 0.8794564776697054;
    msg.p = 0.4996660158251569;
    msg.q = 0.04187189985036832;
    msg.r = 0.30658204492210395;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.9702796000864982);
    msg.setSource(42231U);
    msg.setSourceEntity(17U);
    msg.setDestination(25508U);
    msg.setDestinationEntity(215U);
    msg.u = 0.9371932632928761;
    msg.v = 0.2601866000383316;
    msg.w = 0.5966928537957185;
    msg.p = 0.6860903013582906;
    msg.q = 0.5042263673519801;
    msg.r = 0.36951346446692;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.7811303685983968);
    msg.setSource(42950U);
    msg.setSourceEntity(141U);
    msg.setDestination(56285U);
    msg.setDestinationEntity(2U);
    msg.path_ref = 2085099077U;
    msg.start_lat = 0.5573640789479234;
    msg.start_lon = 0.860893084722291;
    msg.start_z = 0.8878923643630907;
    msg.start_z_units = 183U;
    msg.end_lat = 0.1332510546922221;
    msg.end_lon = 0.27119458713645794;
    msg.end_z = 0.18847461560904677;
    msg.end_z_units = 213U;
    msg.lradius = 0.40991315042310006;
    msg.flags = 79U;
    msg.x = 0.7061870529943289;
    msg.y = 0.5011871414734071;
    msg.z = 0.11569718792180805;
    msg.vx = 0.22185666248153446;
    msg.vy = 0.04136376386958329;
    msg.vz = 0.6420686053502298;
    msg.course_error = 0.04125741446815179;
    msg.eta = 23222U;

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
    msg.setTimeStamp(0.5039466700995231);
    msg.setSource(37382U);
    msg.setSourceEntity(78U);
    msg.setDestination(13021U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 2829556903U;
    msg.start_lat = 0.9909749007393488;
    msg.start_lon = 0.4234749632927213;
    msg.start_z = 0.4246336661171566;
    msg.start_z_units = 37U;
    msg.end_lat = 0.2736114920663829;
    msg.end_lon = 0.29203723126362213;
    msg.end_z = 0.5237568450049049;
    msg.end_z_units = 229U;
    msg.lradius = 0.2753227412126865;
    msg.flags = 150U;
    msg.x = 0.4599153758726052;
    msg.y = 0.33537298066928745;
    msg.z = 0.08467407616507128;
    msg.vx = 0.981154959446059;
    msg.vy = 0.3674781502946022;
    msg.vz = 0.9557768021149626;
    msg.course_error = 0.40088580086014525;
    msg.eta = 45073U;

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
    msg.setTimeStamp(0.05755168233109198);
    msg.setSource(65307U);
    msg.setSourceEntity(32U);
    msg.setDestination(57597U);
    msg.setDestinationEntity(53U);
    msg.path_ref = 3907546047U;
    msg.start_lat = 0.513816473344963;
    msg.start_lon = 0.6937455378972933;
    msg.start_z = 0.830016481494961;
    msg.start_z_units = 65U;
    msg.end_lat = 0.09979206247829697;
    msg.end_lon = 0.25222174586492263;
    msg.end_z = 0.8856316100790305;
    msg.end_z_units = 165U;
    msg.lradius = 0.8965716811817266;
    msg.flags = 152U;
    msg.x = 0.9166528571377538;
    msg.y = 0.675018402867963;
    msg.z = 0.08707835542452858;
    msg.vx = 0.6306563626926687;
    msg.vy = 0.23283147987639985;
    msg.vz = 0.06251552047017728;
    msg.course_error = 0.13952157002676024;
    msg.eta = 27315U;

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
    msg.setTimeStamp(0.19434312766287265);
    msg.setSource(62487U);
    msg.setSourceEntity(194U);
    msg.setDestination(43630U);
    msg.setDestinationEntity(165U);
    msg.k = 0.81749246544602;
    msg.m = 0.08626447132158777;
    msg.n = 0.14169509203282526;

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
    msg.setTimeStamp(0.8548069050903985);
    msg.setSource(48596U);
    msg.setSourceEntity(51U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(242U);
    msg.k = 0.24122592922841346;
    msg.m = 0.3765353958714539;
    msg.n = 0.9025134177720524;

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
    msg.setTimeStamp(0.25811497775572034);
    msg.setSource(35976U);
    msg.setSourceEntity(115U);
    msg.setDestination(40615U);
    msg.setDestinationEntity(230U);
    msg.k = 0.22721141742802164;
    msg.m = 0.5955186417400484;
    msg.n = 0.7004099912616715;

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
    msg.setTimeStamp(0.9111774309271585);
    msg.setSource(65104U);
    msg.setSourceEntity(51U);
    msg.setDestination(25607U);
    msg.setDestinationEntity(132U);
    msg.p = 0.9901057761419716;
    msg.i = 0.48902627138492794;
    msg.d = 0.8206426155821668;
    msg.a = 0.5554849743448089;

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
    msg.setTimeStamp(0.8907910750202502);
    msg.setSource(60822U);
    msg.setSourceEntity(39U);
    msg.setDestination(63682U);
    msg.setDestinationEntity(56U);
    msg.p = 0.2481689814836513;
    msg.i = 0.19867938574999933;
    msg.d = 0.5253984392297911;
    msg.a = 0.34003674846520604;

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
    msg.setTimeStamp(0.9215322893555364);
    msg.setSource(44370U);
    msg.setSourceEntity(215U);
    msg.setDestination(43074U);
    msg.setDestinationEntity(76U);
    msg.p = 0.9254265670791769;
    msg.i = 0.8771312807037135;
    msg.d = 0.41668010522598165;
    msg.a = 0.2435526710714827;

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
    msg.setTimeStamp(0.9432268729849604);
    msg.setSource(21900U);
    msg.setSourceEntity(153U);
    msg.setDestination(50178U);
    msg.setDestinationEntity(123U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.09780607882093995);
    msg.setSource(28785U);
    msg.setSourceEntity(215U);
    msg.setDestination(13247U);
    msg.setDestinationEntity(245U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.5277888026324602);
    msg.setSource(28167U);
    msg.setSourceEntity(99U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(129U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.07251272390473307);
    msg.setSource(16155U);
    msg.setSourceEntity(59U);
    msg.setDestination(52199U);
    msg.setDestinationEntity(170U);
    msg.x = 0.9333108854714948;
    msg.y = 0.8873137755205307;
    msg.z = 0.6784102351408735;
    msg.vx = 0.9809020955515144;
    msg.vy = 0.3522412046890443;
    msg.vz = 0.7669956985096975;
    msg.ax = 0.47413769726289157;
    msg.ay = 0.2269783470413057;
    msg.az = 0.18289785024810734;
    msg.flags = 54699U;

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
    msg.setTimeStamp(0.7651432895093213);
    msg.setSource(6132U);
    msg.setSourceEntity(5U);
    msg.setDestination(1034U);
    msg.setDestinationEntity(162U);
    msg.x = 0.37597287240244437;
    msg.y = 0.8444528653774473;
    msg.z = 0.34839119610704694;
    msg.vx = 0.20666287972906683;
    msg.vy = 0.10078019403810934;
    msg.vz = 0.27681745387591883;
    msg.ax = 0.7474209605620064;
    msg.ay = 0.9087049896480214;
    msg.az = 0.33458731983949586;
    msg.flags = 19296U;

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
    msg.setTimeStamp(0.38949824417975587);
    msg.setSource(49735U);
    msg.setSourceEntity(225U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(27U);
    msg.x = 0.03665558088234511;
    msg.y = 0.3662500508816261;
    msg.z = 0.8543958572610221;
    msg.vx = 0.13038189292750413;
    msg.vy = 0.7677809136783819;
    msg.vz = 0.7513308510757722;
    msg.ax = 0.9004363606401949;
    msg.ay = 0.2782698271786176;
    msg.az = 0.2569461164004928;
    msg.flags = 55506U;

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
    msg.setTimeStamp(0.8073739116967119);
    msg.setSource(14323U);
    msg.setSourceEntity(143U);
    msg.setDestination(33347U);
    msg.setDestinationEntity(138U);
    msg.value = 0.3671314556453745;

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
    msg.setTimeStamp(0.6503944567480431);
    msg.setSource(1740U);
    msg.setSourceEntity(128U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5341542127871626;

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
    msg.setTimeStamp(0.3808530724722966);
    msg.setSource(35248U);
    msg.setSourceEntity(28U);
    msg.setDestination(37451U);
    msg.setDestinationEntity(244U);
    msg.value = 0.733508116203294;

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
    msg.setTimeStamp(0.15662455871956082);
    msg.setSource(20507U);
    msg.setSourceEntity(87U);
    msg.setDestination(17045U);
    msg.setDestinationEntity(42U);
    msg.timeout = 42297U;
    msg.lat = 0.2194138063695903;
    msg.lon = 0.3030929198348742;
    msg.z = 0.07013805717994925;
    msg.z_units = 131U;
    msg.speed = 0.4173320475161474;
    msg.speed_units = 91U;
    msg.roll = 0.172030932344594;
    msg.pitch = 0.7930508610106263;
    msg.yaw = 0.15382736368931005;
    msg.custom.assign("AWOLELANUCDKJEYBJWZALUSHDTYWOBQQYPXLYBSLWOBZGDRDIVVTZJJFMZVKADPGMNKKRCFVNDEMCJXTFGKIKGBLEVTMNSYQWHMXIHODIRGLCESOTTALKRISRBUZIAAJKOBSPRJHV");

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
    msg.setTimeStamp(0.7781255182847059);
    msg.setSource(10017U);
    msg.setSourceEntity(154U);
    msg.setDestination(4107U);
    msg.setDestinationEntity(24U);
    msg.timeout = 314U;
    msg.lat = 0.7782580640561743;
    msg.lon = 0.14512848395183187;
    msg.z = 0.8590017029827718;
    msg.z_units = 80U;
    msg.speed = 0.8652831240988432;
    msg.speed_units = 175U;
    msg.roll = 0.4009232948492494;
    msg.pitch = 0.5890202794521904;
    msg.yaw = 0.789089919964298;
    msg.custom.assign("SZFNKYZOPNJQRTKQCDTCQBMFKKZATMYQXBHPQZILWHWWWAKKWNMJDJXEHZGYRKOGENCIGHUAJXOPHSSIPDXFMVJSZGVNIJQCRIXSBYUVHXWRDLHPRLKPIPRBUSEUGBLALNLAVEOROCTHYTQRVJBVQSAIXPWBFNDQMWIDDLVVISEGKOJCDACMAPNBUBMBFASEOZNJTYYZETLWOELTXYOFNXGGUHDUVEWSZFIRCTUULEMYMHXGVGQT");

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
    msg.setTimeStamp(0.7254059560112106);
    msg.setSource(53102U);
    msg.setSourceEntity(120U);
    msg.setDestination(38607U);
    msg.setDestinationEntity(140U);
    msg.timeout = 16431U;
    msg.lat = 0.5399072995823665;
    msg.lon = 0.7976913118472828;
    msg.z = 0.6893714766276443;
    msg.z_units = 213U;
    msg.speed = 0.10597067798806414;
    msg.speed_units = 93U;
    msg.roll = 0.2148838339542597;
    msg.pitch = 0.9797842100685416;
    msg.yaw = 0.15711187626043766;
    msg.custom.assign("OWAFEMZUZWRAUIVASLFJEJTSDBFPRRCRGPXDMMVKHTJ");

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
    msg.setTimeStamp(0.6438644028583179);
    msg.setSource(56265U);
    msg.setSourceEntity(187U);
    msg.setDestination(59309U);
    msg.setDestinationEntity(139U);
    msg.timeout = 26251U;
    msg.lat = 0.4631237934372532;
    msg.lon = 0.559039051115958;
    msg.z = 0.2627794190866435;
    msg.z_units = 99U;
    msg.speed = 0.0025617883739633696;
    msg.speed_units = 57U;
    msg.duration = 12946U;
    msg.radius = 0.2123765343675884;
    msg.flags = 153U;
    msg.custom.assign("OKEKUIXAYFNHIGFCLGXKHJUPDEWPYRFWRHUSRMCQARNIEXIWTHHMUOALFPQKDSIMXLQISVXGYZARTOGVSBEPDQHQRETPVNKNXTSOQLCPEB");

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
    msg.setTimeStamp(0.3723970745442272);
    msg.setSource(53500U);
    msg.setSourceEntity(252U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(64U);
    msg.timeout = 52820U;
    msg.lat = 0.7944574583318451;
    msg.lon = 0.8744891837824729;
    msg.z = 0.565863897633272;
    msg.z_units = 70U;
    msg.speed = 0.22513717951938828;
    msg.speed_units = 79U;
    msg.duration = 63698U;
    msg.radius = 0.46287246270378224;
    msg.flags = 209U;
    msg.custom.assign("RQADIALDZCIYTJXRTUUOASTCSVFFYIDSKFYMOXHWOGVRTHDYJOIFXSPKYJKFOYOTKAUTNUGENVXHN");

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
    msg.setTimeStamp(0.8130531991123177);
    msg.setSource(24102U);
    msg.setSourceEntity(181U);
    msg.setDestination(49936U);
    msg.setDestinationEntity(236U);
    msg.timeout = 50144U;
    msg.lat = 0.09060691985940306;
    msg.lon = 0.4515892833331736;
    msg.z = 0.5618857384764558;
    msg.z_units = 19U;
    msg.speed = 0.031807133141930954;
    msg.speed_units = 176U;
    msg.duration = 2314U;
    msg.radius = 0.707862162180313;
    msg.flags = 63U;
    msg.custom.assign("PDPBWSCQIHJGCDLLGFHKYJZYRWVPQHAWSWZJRSQLAGCDTVDQXUETUANYLQYZRWRRVYJNOAIDGNFZYUFKCDDREMECEYANFPPMOFMUTJBTEBNJFFNDALMVBVAMIMIXTXJZPTSEXRCUKOEOSSFKDGEMVAGSLSWZLNPUUQHGPTWKYHRNWLVGYIEJTGUMSOFOIICJCMBWUBLHPPXDNCOBONBIVAX");

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
    msg.setTimeStamp(0.5887246329830691);
    msg.setSource(30697U);
    msg.setSourceEntity(156U);
    msg.setDestination(34982U);
    msg.setDestinationEntity(177U);
    msg.custom.assign("RKHPOJEGEOMASPDNNJQDAVZPMKFFOLYZRQWFWOI");

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
    msg.setTimeStamp(0.9795550381533988);
    msg.setSource(50088U);
    msg.setSourceEntity(64U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(45U);
    msg.custom.assign("STGRASWDWKTOMZLZCKFFOFZITVMCTIYVOVBMKFMBJVQPBRQYYAQMYWIRHUFZWD");

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
    msg.setTimeStamp(0.6154850102098776);
    msg.setSource(42473U);
    msg.setSourceEntity(26U);
    msg.setDestination(8014U);
    msg.setDestinationEntity(207U);
    msg.custom.assign("JUPLEUBFENWMMVMZOQECJTLYVNXVUIPDKAYIZGMQHQGKRSXQJQKGGFDUHJWVKHPALOMVHUAPZJWVIACBYREUSCCWI");

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
    msg.setTimeStamp(0.7256426470638467);
    msg.setSource(20090U);
    msg.setSourceEntity(120U);
    msg.setDestination(54571U);
    msg.setDestinationEntity(18U);
    msg.timeout = 46135U;
    msg.lat = 0.24216495661334236;
    msg.lon = 0.1672643200045878;
    msg.z = 0.39029891373222547;
    msg.z_units = 20U;
    msg.duration = 2367U;
    msg.speed = 0.3562652148695171;
    msg.speed_units = 53U;
    msg.type = 191U;
    msg.radius = 0.7691452613334788;
    msg.length = 0.020906321328572175;
    msg.bearing = 0.9334045303425678;
    msg.direction = 68U;
    msg.custom.assign("RDODKFJCWSXQRGGNWDRFDMRSBUIEBUKKNPFDBMXNIYCPTNTTBCRZVFWLNXVZFYWZWJYSBSQEAQSXIEUCISGZIOOLBHPXZEUFCCODTPPOGIVAHPRUDRUMVTPKVVASKZOTMLLHYILSJHDDYVBZMMJ");

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
    msg.setTimeStamp(0.09120274632826675);
    msg.setSource(36478U);
    msg.setSourceEntity(54U);
    msg.setDestination(30388U);
    msg.setDestinationEntity(38U);
    msg.timeout = 39010U;
    msg.lat = 0.7501275209012574;
    msg.lon = 0.4534104613467129;
    msg.z = 0.29170237560485857;
    msg.z_units = 189U;
    msg.duration = 63800U;
    msg.speed = 0.8416156686875901;
    msg.speed_units = 146U;
    msg.type = 0U;
    msg.radius = 0.3066789289120291;
    msg.length = 0.2848612073072543;
    msg.bearing = 0.8231136511644643;
    msg.direction = 101U;
    msg.custom.assign("NXSKEFHFOPSIQAUBW");

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
    msg.setTimeStamp(0.15857739252983827);
    msg.setSource(715U);
    msg.setSourceEntity(65U);
    msg.setDestination(18541U);
    msg.setDestinationEntity(110U);
    msg.timeout = 46455U;
    msg.lat = 0.032112302773746215;
    msg.lon = 0.1787124799362766;
    msg.z = 0.968099275969968;
    msg.z_units = 8U;
    msg.duration = 32376U;
    msg.speed = 0.8512945006700164;
    msg.speed_units = 44U;
    msg.type = 129U;
    msg.radius = 0.9044250576348777;
    msg.length = 0.5775770932109497;
    msg.bearing = 0.46350617477642575;
    msg.direction = 159U;
    msg.custom.assign("LWDRNYIBKLUNPHJGYBGXNFDSOMWSCHFAFOIKUMHTZGWOVAAHAJBZPMVQNTKGUJXLHDFWIMOIOPJWLXWKLHGJLYJVVSCPLEXNZOBHDUCIKBUMEUUFUMOXRDOGGEFADJSTNVAYOJFSYLMNSSRMYVGMPVCFWZKREIUMHREBATCABQXR");

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
    msg.setTimeStamp(0.814582000737188);
    msg.setSource(36227U);
    msg.setSourceEntity(8U);
    msg.setDestination(14717U);
    msg.setDestinationEntity(246U);
    msg.duration = 51926U;
    msg.custom.assign("ZGBQCETXWAGQAJP");

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
    msg.setTimeStamp(0.4505615992764306);
    msg.setSource(30340U);
    msg.setSourceEntity(170U);
    msg.setDestination(8696U);
    msg.setDestinationEntity(4U);
    msg.duration = 27544U;
    msg.custom.assign("YUCWSVPHTULMJDKVPYKHTEMSUJRIMCYXNIIVORVJNEDXLMZGQGODRIHQRLGLIBEXMQDPWXIHZBHALJBMFFSPCXRQUSLSZPQFBOYOAHTRBDNHEKKJYZVXTOZDXASMCALBVPCTEDAJWVUDPJJUVEWBQNWKZDCVQFEQYEGTKPJONTYPGXNOTCN");

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
    msg.setTimeStamp(0.05230950920064692);
    msg.setSource(11642U);
    msg.setSourceEntity(177U);
    msg.setDestination(35433U);
    msg.setDestinationEntity(253U);
    msg.duration = 51883U;
    msg.custom.assign("WSTKPYSBCVHMLVMNQQYWESKYWVKWEOBGSWQDDWWDLLBNQAGMGDZHZFJFOBILTCDJMIIOBYRUAUARAVQNPDEYQHUXLATHADHIMGSZFRWJXUGGABIEHZTDVICBSOTZUCWUBKTZSPPOSPLKRGIRMKPCHWTTOPFXKXKOFCLSSJHXYFJEXDQE");

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
    msg.setTimeStamp(0.6359678680913589);
    msg.setSource(7236U);
    msg.setSourceEntity(177U);
    msg.setDestination(21660U);
    msg.setDestinationEntity(15U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8218608304175342;
    msg.control.set(tmp_msg_0);
    msg.duration = 1927U;
    msg.custom.assign("DGRIWFHVZAVLABDNRZW");

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
    msg.setTimeStamp(0.8872284761020647);
    msg.setSource(39915U);
    msg.setSourceEntity(157U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(15U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.06411367806318247;
    msg.control.set(tmp_msg_0);
    msg.duration = 35336U;
    msg.custom.assign("GNUJPWQGISEXAYTLJOSAVXRBSXGRHIAINZEVXPI");

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
    msg.setTimeStamp(0.14113870355134195);
    msg.setSource(23454U);
    msg.setSourceEntity(88U);
    msg.setDestination(35878U);
    msg.setDestinationEntity(202U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.16390216827633686;
    msg.control.set(tmp_msg_0);
    msg.duration = 42197U;
    msg.custom.assign("ZCVBFWTXQHFUJYFONUOEEAXCAUTAUXLIDBQRZBTNTWDHJGEMOQBZQDQGHEEYZUIHPTCGJWFAQYCMGULJTJRAARKBAGZSZRDOLVYKCSMNBPPYRJOIHGPTGIZJKSXFGQQNDTHMVCWPKJRPSTOKVAIUPOLVSFHRTNCFLNEWPFNUBLXLKDBEIEOFJLIXGDOWNSPKPMSZMC");

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
    msg.setTimeStamp(0.28255562776060894);
    msg.setSource(8622U);
    msg.setSourceEntity(138U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(168U);
    msg.timeout = 37877U;
    msg.lat = 0.617888520707015;
    msg.lon = 0.676141576140266;
    msg.z = 0.5558305249665536;
    msg.z_units = 220U;
    msg.speed = 0.0814152928434333;
    msg.speed_units = 101U;
    msg.bearing = 0.30794761383332325;
    msg.cross_angle = 0.7402867298543345;
    msg.width = 0.00559480185372796;
    msg.length = 0.2864084341740827;
    msg.hstep = 0.9575204160753553;
    msg.coff = 28U;
    msg.alternation = 26U;
    msg.flags = 242U;
    msg.custom.assign("CGEIUHHPISVRDFBHQSWQNOEOFTSIOPPVHMCNUBFLJYTDTFJPZFVWEXASYASBKDPVEJNQVIXLDQNYDTVKRXTZCSAAZKTLXLCJCTQGGYYWFFOOMXZEWKUJNIARIPKQDOWQNESOABGYGXRVRUJUEJFBLNZIHNOYRUMYLRRPPBILCKHRREUDMUZMCPWGHXBLNSTKOAZGZLCPEFXWHVWUMQZSFYWKBXDG");

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
    msg.setTimeStamp(0.1393393335707691);
    msg.setSource(43804U);
    msg.setSourceEntity(114U);
    msg.setDestination(57025U);
    msg.setDestinationEntity(135U);
    msg.timeout = 6911U;
    msg.lat = 0.8292880886361038;
    msg.lon = 0.9094115543799041;
    msg.z = 0.5981223623838773;
    msg.z_units = 246U;
    msg.speed = 0.53493710082689;
    msg.speed_units = 212U;
    msg.bearing = 0.8524599152580445;
    msg.cross_angle = 0.0723676268558785;
    msg.width = 0.46652308285203226;
    msg.length = 0.4953729593347972;
    msg.hstep = 0.025817913134210668;
    msg.coff = 2U;
    msg.alternation = 134U;
    msg.flags = 107U;
    msg.custom.assign("KDLEDFUWVSNARYFZZDOFLGEBBLOCFTTTHTBIRAAAMGEEGVEZRHQXSUQJSDLWIYFELENAKXMCVCSMAIVVTJXBUSYQFCPZKPKZMCXOANRBZJSCNTILJCVWQAXVSPXZITXROFNGCLTRQROHMNDHBZDAGWBJOMKJVNWOUVRGWGYCZHELIKHUPIRWWNETQQPUGNOHKMHPVPXYJOSQXFGUNRYMFKDTGABDWSPDEWMZIMPYBCUIXYPYHJS");

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
    msg.setTimeStamp(0.03866635091594128);
    msg.setSource(10346U);
    msg.setSourceEntity(37U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(190U);
    msg.timeout = 12134U;
    msg.lat = 0.6150546213980034;
    msg.lon = 0.7872701297541339;
    msg.z = 0.5571440566874393;
    msg.z_units = 94U;
    msg.speed = 0.7203488746681347;
    msg.speed_units = 134U;
    msg.bearing = 0.35762971685127853;
    msg.cross_angle = 0.9809662658854136;
    msg.width = 0.2260329860475272;
    msg.length = 0.2349844084887185;
    msg.hstep = 0.7516171106807369;
    msg.coff = 180U;
    msg.alternation = 103U;
    msg.flags = 159U;
    msg.custom.assign("TFWOHOBNRNIKBMLISSXJJBUYUTWYTFSAJEIMLNOKDLYJRHBJAUZPVDDPDZGCLZRGLNXSFCDNKPEWDRIGCSMYQLKAIWBUKXKAFAAUYJQKVORQOXFEOZVDCUTBGMWZXUCWVBEUHASHWDYHEDETPETFZFXRNQXERXJLGYYSOVPAXFGNFICQHNIVBRVLNCWIVVAMQTCTUO");

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
    msg.setTimeStamp(0.5492501680428618);
    msg.setSource(18541U);
    msg.setSourceEntity(40U);
    msg.setDestination(58104U);
    msg.setDestinationEntity(59U);
    msg.timeout = 35804U;
    msg.lat = 0.15422652935927839;
    msg.lon = 0.8603214387997609;
    msg.z = 0.03489789788809816;
    msg.z_units = 0U;
    msg.speed = 0.17312474246308063;
    msg.speed_units = 163U;
    msg.custom.assign("LAMMVKARSRSJFUIIBDPGJOEBOBYDVQNHZFNGYHYHOJGNPDORCRFEMKBNUNDXZJPQGLDLEPWHZXJGOXIMRUCCERQQUQIFAHGRTXCTLVYODGFJDQNYVLCXSVTCXOLWKCTJRKAMZEXSUBPYWECSGCOZVZJNWIEUNLUIIFRYTAFHGVAKPNMTRWJITHULPPFTSZXBOIKPKAAWEHMKJHCYLOKMXHUQBNBYAVM");

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
    msg.setTimeStamp(0.12045377334279284);
    msg.setSource(62569U);
    msg.setSourceEntity(123U);
    msg.setDestination(54515U);
    msg.setDestinationEntity(39U);
    msg.timeout = 47386U;
    msg.lat = 0.5076728652659477;
    msg.lon = 0.874014079338002;
    msg.z = 0.626280838278744;
    msg.z_units = 151U;
    msg.speed = 0.2516594649323439;
    msg.speed_units = 64U;
    msg.custom.assign("UKTJEJEOMBFYGDDTDDJVMLAAYUIYFSYWDMPPGBAHHCRRHNXLQQOKBFNSADSZUYPEUXTFNAOZGXLMEMNCBZFRSMEGVTBAOMYYKCKBFACRPONUNFCWYWEWNZXSQVMIGLNCLIXKWVRTOC");

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
    msg.setTimeStamp(0.307508494478936);
    msg.setSource(10674U);
    msg.setSourceEntity(27U);
    msg.setDestination(34255U);
    msg.setDestinationEntity(5U);
    msg.timeout = 1553U;
    msg.lat = 0.48780039041212786;
    msg.lon = 0.808587637783954;
    msg.z = 0.9801689459114546;
    msg.z_units = 39U;
    msg.speed = 0.26800376068858833;
    msg.speed_units = 175U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8102154368175069;
    tmp_msg_0.y = 0.42688308414242626;
    tmp_msg_0.z = 0.41539969934350884;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AVHYBMUQBBFCGEDOCCJNCHQKFYMONMKTTLJVJWZHUATBLWMFRSWXAUECNZOABEXOCDLDUEAYQVGRDMIZOMPFRENKGZFQFXSWZDEPMPKXQXPBOMCDKUGGLTWQWPNYQWBABUHXALSZHFLISXJKUDIRKISVMLHPNOYQLWYBZPCKZSADBQWWNXSDTPFCVRQPJUPVNGEIJSONVKYIDAHSTIGYKNOCIIXTYUGLZRTEFRVSJ");

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
    msg.setTimeStamp(0.3935225167595836);
    msg.setSource(33644U);
    msg.setSourceEntity(173U);
    msg.setDestination(16888U);
    msg.setDestinationEntity(128U);
    msg.x = 0.34070393044815006;
    msg.y = 0.7735990237017926;
    msg.z = 0.5224630200717362;

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
    msg.setTimeStamp(0.9214456643299277);
    msg.setSource(45040U);
    msg.setSourceEntity(111U);
    msg.setDestination(39794U);
    msg.setDestinationEntity(38U);
    msg.x = 0.8738190350416224;
    msg.y = 0.09699148622333997;
    msg.z = 0.5867666405543848;

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
    msg.setTimeStamp(0.2615910254178363);
    msg.setSource(39088U);
    msg.setSourceEntity(179U);
    msg.setDestination(30266U);
    msg.setDestinationEntity(148U);
    msg.x = 0.42111256648341655;
    msg.y = 0.15388922434861063;
    msg.z = 0.5632480126671714;

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
    msg.setTimeStamp(0.5715908903727173);
    msg.setSource(8272U);
    msg.setSourceEntity(162U);
    msg.setDestination(5627U);
    msg.setDestinationEntity(96U);
    msg.timeout = 41431U;
    msg.lat = 0.007407556310702557;
    msg.lon = 0.17536557528102148;
    msg.z = 0.8745231624943492;
    msg.z_units = 209U;
    msg.amplitude = 0.032397111315506155;
    msg.pitch = 0.6396739235832896;
    msg.speed = 0.262203789105229;
    msg.speed_units = 235U;
    msg.custom.assign("VQIYBRVFKPZZIZSIULUERVQEJXYZLOQLUZKLXYKYTKGPZPCDNVZGJSKFPTPPDLQMCCCTWUFARIQNOLKULGODVAEMBHPMGTCTETVYNLQYRQJXDULEBMYTMWFSFGNNSIDCATCXKOAOQ");

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
    msg.setTimeStamp(0.45778037914852);
    msg.setSource(57937U);
    msg.setSourceEntity(202U);
    msg.setDestination(4660U);
    msg.setDestinationEntity(188U);
    msg.timeout = 32855U;
    msg.lat = 0.05110911411377539;
    msg.lon = 0.4649788005110228;
    msg.z = 0.770855797578958;
    msg.z_units = 239U;
    msg.amplitude = 0.029882464510369466;
    msg.pitch = 0.6015784504932031;
    msg.speed = 0.97940407686502;
    msg.speed_units = 183U;
    msg.custom.assign("EFAPRPRNCJNEAAVLSTUBIVAXRDPUFEEIOHQGLERELTOZXHXCCYCGEFTNNWAUUJVYRHKDCCHXUFWUPYNAJOVIKRFJSHNZVNTQDJLXVKNPQWHDPUJVPTWBHMQSKDSGYKOWMWHSDADBBRCAHTOYLNIVBXUCZIBMYYBLTYYYOXIDLJGWTZQTLAQGXPAGGSFRLXPXCFKNMEIZGEFIKFOQRB");

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
    msg.setTimeStamp(0.9675157120619625);
    msg.setSource(4684U);
    msg.setSourceEntity(120U);
    msg.setDestination(4261U);
    msg.setDestinationEntity(134U);
    msg.timeout = 21277U;
    msg.lat = 0.24785502278698213;
    msg.lon = 0.7258005496005682;
    msg.z = 0.22645992098865875;
    msg.z_units = 91U;
    msg.amplitude = 0.3726690508273418;
    msg.pitch = 0.6227672189038999;
    msg.speed = 0.026470720532278835;
    msg.speed_units = 85U;
    msg.custom.assign("DSBZNOKZYVFSAOBYOCXIHSDVFBNQNYIUMOLPHGLUCAKZZIYWOUREMQKMWKMATDGVESLPOLFJDOTRQPLPXZDTHSSWNRKGSVVEAGLCBHFQMJNIEBLMNCEZISVIWRPFSAQNYMXURRKRTVGXFT");

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
    msg.setTimeStamp(0.6360601206828684);
    msg.setSource(59439U);
    msg.setSourceEntity(116U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.4734934987681211);
    msg.setSource(35832U);
    msg.setSourceEntity(148U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.80277407459985);
    msg.setSource(26992U);
    msg.setSourceEntity(229U);
    msg.setDestination(62071U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.303811255607352);
    msg.setSource(65052U);
    msg.setSourceEntity(32U);
    msg.setDestination(14436U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.05368473913391092;
    msg.lon = 0.7047132487629073;
    msg.z = 0.03377878610636964;
    msg.z_units = 237U;
    msg.radius = 0.2720446899273432;
    msg.duration = 7107U;
    msg.speed = 0.3557321189555087;
    msg.speed_units = 122U;
    msg.custom.assign("BGDWUTKEAOLUBMJJNEOIGVCSQCJZDOIUZMTJQXFOFZDUCHXHNGTNHSKUNLFTMYSWPECSXOELELPCMHXISOGRSJVXXRQHDFAVMNEV");

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
    msg.setTimeStamp(0.9266877617079674);
    msg.setSource(64612U);
    msg.setSourceEntity(177U);
    msg.setDestination(12653U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.17318695388895;
    msg.lon = 0.7775597824825039;
    msg.z = 0.9044230276231937;
    msg.z_units = 201U;
    msg.radius = 0.5384894998361623;
    msg.duration = 42015U;
    msg.speed = 0.803397625764407;
    msg.speed_units = 252U;
    msg.custom.assign("FJPUOUXRVJXFZIACELLQO");

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
    msg.setTimeStamp(0.2815104189192724);
    msg.setSource(47903U);
    msg.setSourceEntity(11U);
    msg.setDestination(47652U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.22860324968119827;
    msg.lon = 0.3343543526757503;
    msg.z = 0.6339346108693164;
    msg.z_units = 37U;
    msg.radius = 0.9356482809686244;
    msg.duration = 11000U;
    msg.speed = 0.10551541135628639;
    msg.speed_units = 250U;
    msg.custom.assign("WHIOBHGGQWYXFODOHZWJRXHPALJGBYCVOETQBMTOOCPJSFMBCDWAFNZZZSROSIYRZZVWGPHSPEWJWGOLIQVUGIYHIVVJCKECXISANKSPTRGCIPNNFNYUKNJEMCRLTQDYKFLSDTJALLREVCAIMBCQEKXDR");

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
    msg.setTimeStamp(0.4598324133660394);
    msg.setSource(6837U);
    msg.setSourceEntity(166U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(164U);
    msg.timeout = 51045U;
    msg.flags = 128U;
    msg.lat = 0.053483565356659546;
    msg.lon = 0.5896218985061463;
    msg.start_z = 0.2317310366810631;
    msg.start_z_units = 200U;
    msg.end_z = 0.8381591514887383;
    msg.end_z_units = 35U;
    msg.radius = 0.9119272955310646;
    msg.speed = 0.3344918934316887;
    msg.speed_units = 233U;
    msg.custom.assign("PFIWHTHHIUJMIZWXKLWNZUTPLBZCZENRCJMTCOFMIBJGLASGSMVDFQPFGQWGPCAHNBLYLSLUREBUOJZZSFFFPTZWXXLRIMVONNYXZDQOKTMAPTXYCOKURKQIHDZRMCXWTYJ");

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
    msg.setTimeStamp(0.9810287076092463);
    msg.setSource(7954U);
    msg.setSourceEntity(199U);
    msg.setDestination(47387U);
    msg.setDestinationEntity(78U);
    msg.timeout = 63977U;
    msg.flags = 221U;
    msg.lat = 0.2174344682989492;
    msg.lon = 0.39279191483150244;
    msg.start_z = 0.9920248206339203;
    msg.start_z_units = 58U;
    msg.end_z = 0.5321022411833639;
    msg.end_z_units = 149U;
    msg.radius = 0.6066678288573528;
    msg.speed = 0.7403068040744948;
    msg.speed_units = 73U;
    msg.custom.assign("QTXZIRHECBXJTXCDREGZSXHEZGWKVXYOHEBVGJVLSXAKFEQUZYJJCWOZESDNWJNIEZKOBQRADKHACIADQAEXTYITHGWSONJHFUJKVKBPVDWIZNYXPTSGRQZABQUINPALVFEPRCLTPWGLVICSORBUYWAGISHTOBHLFVWCYPPPZPMBJYXUHUBGOYDFOYTSQMKSDUNAIEIJLTKSMJOMNRLROFLLLVT");

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
    msg.setTimeStamp(0.29090920085002403);
    msg.setSource(12573U);
    msg.setSourceEntity(133U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(225U);
    msg.timeout = 14357U;
    msg.flags = 178U;
    msg.lat = 0.10936512350754113;
    msg.lon = 0.8563351709392051;
    msg.start_z = 0.847809937035983;
    msg.start_z_units = 73U;
    msg.end_z = 0.12350116473947148;
    msg.end_z_units = 237U;
    msg.radius = 0.04989106687437295;
    msg.speed = 0.052430502008826374;
    msg.speed_units = 94U;
    msg.custom.assign("BCFGTRHLNRZIPQZTYFJNAAJRE");

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
    msg.setTimeStamp(0.7479354622234249);
    msg.setSource(33167U);
    msg.setSourceEntity(53U);
    msg.setDestination(14218U);
    msg.setDestinationEntity(194U);
    msg.timeout = 23814U;
    msg.lat = 0.8643869691022468;
    msg.lon = 0.8909556802934548;
    msg.z = 0.42798213899042414;
    msg.z_units = 89U;
    msg.speed = 0.2623127880000208;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.29274688292011375;
    tmp_msg_0.y = 0.42011700857816925;
    tmp_msg_0.z = 0.02734087966751364;
    tmp_msg_0.t = 0.03422165348132711;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JYFQZBURVGOYQYXJEOMKSZHALETNHGBPGFRMZMLBRCMREURXSVBMUENAVLFXGUGHHSZUNXNDLAVWZDOBYCVCHIWJBFOIEKKWDIIMZVTJTKWKFHCUPYVDZSEGJCD");

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
    msg.setTimeStamp(0.4699761093506447);
    msg.setSource(46670U);
    msg.setSourceEntity(192U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(217U);
    msg.timeout = 46119U;
    msg.lat = 0.5156739842793305;
    msg.lon = 0.7553239303713841;
    msg.z = 0.5562779729188454;
    msg.z_units = 214U;
    msg.speed = 0.5501141636879954;
    msg.speed_units = 44U;
    msg.custom.assign("ATQSSXLXLXDWEWZYTEGGTRBIGYHMREXQVJZXUOFEKBODAENJJRCOBRUQYWMULJJLWYZIUBFCDHXGKDIAJKQFIUAJZMCDNUGHBCTRZNSKOTSNQBVWAWJVNNV");

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
    msg.setTimeStamp(0.7809415108956592);
    msg.setSource(37425U);
    msg.setSourceEntity(167U);
    msg.setDestination(18491U);
    msg.setDestinationEntity(48U);
    msg.timeout = 49895U;
    msg.lat = 0.6798994984303245;
    msg.lon = 0.1347660535692553;
    msg.z = 0.1460018892378071;
    msg.z_units = 121U;
    msg.speed = 0.6642930165097942;
    msg.speed_units = 125U;
    msg.custom.assign("QYPSRDXZZGZHUYLHIGFEWAKGDXYRTOHONEEPDHJMHFBLITXBJLCSNTOIEMWDVOGPWAYAQMQSRCXTBJVYFUTQBPPYMQRVVFUZMAHLWQVJHDCGBVAPWOJWQJVLUNCOKIDZNPINMTOAPOPUCXVXREZFCUEKDKSUFLNKJQZNAUTVXNBTYZLYTIOGWZUKYFHGFXHDGBBUCSISWLBXMAVQKCRARBWSEDXHMZ");

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
    msg.setTimeStamp(0.6430897802713181);
    msg.setSource(20952U);
    msg.setSourceEntity(155U);
    msg.setDestination(43465U);
    msg.setDestinationEntity(47U);
    msg.x = 0.27333976973468144;
    msg.y = 0.8740164543402614;
    msg.z = 0.5498597141039938;
    msg.t = 0.007972616266968324;

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
    msg.setTimeStamp(0.6575703649851251);
    msg.setSource(3167U);
    msg.setSourceEntity(237U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(98U);
    msg.x = 0.9020057186535545;
    msg.y = 0.6374078204484438;
    msg.z = 0.6045602764127456;
    msg.t = 0.7552830912635623;

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
    msg.setTimeStamp(0.1983939382864397);
    msg.setSource(6382U);
    msg.setSourceEntity(148U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(77U);
    msg.x = 0.6137222221516003;
    msg.y = 0.8407361593017261;
    msg.z = 0.9982376658516807;
    msg.t = 0.9552581618430408;

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
    msg.setTimeStamp(0.013506656040100151);
    msg.setSource(31224U);
    msg.setSourceEntity(142U);
    msg.setDestination(16594U);
    msg.setDestinationEntity(151U);
    msg.timeout = 2849U;
    msg.name.assign("SWWJKBTPDITJQWQRGWLTIOGXCPQNOZPXPTPLIYVJVHSNQFOYNMSDUJHDCSZDKBMKGQVIESREMKUUZBDKNLFXNROMWBMLLRHGBZBOYHVEKEDQXAXYRMWFNHKATKZHUFAUHLHEHUFAWPAUW");
    msg.custom.assign("DVGTFYQBNZWFCQRMNH");

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
    msg.setTimeStamp(0.8271455304344181);
    msg.setSource(54067U);
    msg.setSourceEntity(140U);
    msg.setDestination(10786U);
    msg.setDestinationEntity(244U);
    msg.timeout = 24586U;
    msg.name.assign("CSKKVULEPSEMAFRZCXRSVQVFRTOZBHIFOIWLFUIASLQWJXTNQOZKWKVQMPFLTHVZEUBDTXPXWYAIJCGNZXOBETDMGZFVNFVMNBARUQFPPTJ");
    msg.custom.assign("ATPYVBSUIFJMXTNBAJVYJMJQIEVJYGOMBNMWZBYRUNTXTELDZEDHCXCPJLNQJXUIBUCRAUAKFRGBQKIQG");

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
    msg.setTimeStamp(0.08956334370298547);
    msg.setSource(25084U);
    msg.setSourceEntity(144U);
    msg.setDestination(22173U);
    msg.setDestinationEntity(37U);
    msg.timeout = 52143U;
    msg.name.assign("ADQCXZDQZAWATYZFKXWOBJWZTQFRNDGNOLQMIRVURNLUKJNUQATOGTYECRCFFVQNPSPIWITIPHEAHKKODBAZJMXMGYMWTYHKJIDMYANSXHDSSEEMVBGBFCXGJFUJUERLUPNT");
    msg.custom.assign("DZXMNTJYIYUKBGMGKOGRJNYMBUCTZOQMHPCTVGTFRDLALOBARNVJWK");

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
    msg.setTimeStamp(0.6190831028185886);
    msg.setSource(19576U);
    msg.setSourceEntity(92U);
    msg.setDestination(48543U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.8740545187309716;
    msg.lon = 0.6212939779389998;
    msg.z = 0.9660738572495169;
    msg.z_units = 152U;
    msg.speed = 0.12659058738478446;
    msg.speed_units = 145U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8900047198396666;
    tmp_msg_0.y = 0.53781861997859;
    tmp_msg_0.z = 0.5503382694509948;
    tmp_msg_0.t = 0.806169929276957;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 4758U;
    tmp_msg_1.off_x = 0.7778479657654316;
    tmp_msg_1.off_y = 0.31556456391022025;
    tmp_msg_1.off_z = 0.6505141814488027;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.19931611765182955;
    msg.custom.assign("HBOKICEUYRFJGCOBRWGXNIJXXZROVNXPUFGLHCZWJNBTWBZYUHPTQADFQJALRBTGFAEOEXAPWQQSDDXZTKEVRMOXWGCPAXQMCR");

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
    msg.setTimeStamp(0.7872913919243008);
    msg.setSource(46772U);
    msg.setSourceEntity(221U);
    msg.setDestination(52231U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.852404112225507;
    msg.lon = 0.9227874092915223;
    msg.z = 0.7074424214358209;
    msg.z_units = 162U;
    msg.speed = 0.15177585993381582;
    msg.speed_units = 161U;
    msg.start_time = 0.08875492376256189;
    msg.custom.assign("TPYAXLPAZBTQDWCNUIJUFQIKQLEWPVJNYMFZEAHDMXLZKYSOLIGLHOBCXPAKXWFWJTNYEHQSZAAEJEVBISDGJIUAQGKJDVPLHXVQUJMCOKGBVTGASNZZ");

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
    msg.setTimeStamp(0.6459786469125446);
    msg.setSource(37503U);
    msg.setSourceEntity(40U);
    msg.setDestination(32645U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.03615780798349233;
    msg.lon = 0.44227895163314523;
    msg.z = 0.6932734470412489;
    msg.z_units = 132U;
    msg.speed = 0.9695685640964012;
    msg.speed_units = 249U;
    msg.start_time = 0.9539127504049786;
    msg.custom.assign("CSSRGEOHVWTJKTTJJDMCIRFVFEQQZWPVBONGUZXIZUSVFBSXPTURXWIJAIEVZMLCPXELFUZCQUIKENOIOYHYRWGLHIJFPDBVCSJTFNPBYCDKGS");

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
    msg.setTimeStamp(0.9742815080064845);
    msg.setSource(55437U);
    msg.setSourceEntity(4U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(20U);
    msg.vid = 25768U;
    msg.off_x = 0.010483851654407572;
    msg.off_y = 0.0834472286985829;
    msg.off_z = 0.17494526827126444;

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
    msg.setTimeStamp(0.11657708457738347);
    msg.setSource(6823U);
    msg.setSourceEntity(204U);
    msg.setDestination(60237U);
    msg.setDestinationEntity(121U);
    msg.vid = 20263U;
    msg.off_x = 0.09567456117377937;
    msg.off_y = 0.009998042477302516;
    msg.off_z = 0.5901406948650516;

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
    msg.setTimeStamp(0.4104507882764129);
    msg.setSource(38928U);
    msg.setSourceEntity(232U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(2U);
    msg.vid = 21676U;
    msg.off_x = 0.5551394110197302;
    msg.off_y = 0.654507527654303;
    msg.off_z = 0.8864935421247464;

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
    msg.setTimeStamp(0.8454252519152773);
    msg.setSource(44492U);
    msg.setSourceEntity(141U);
    msg.setDestination(45548U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.3969297804406703);
    msg.setSource(26448U);
    msg.setSourceEntity(5U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.20961582058260309);
    msg.setSource(19733U);
    msg.setSourceEntity(249U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.8154455967579739);
    msg.setSource(12177U);
    msg.setSourceEntity(33U);
    msg.setDestination(45824U);
    msg.setDestinationEntity(156U);
    msg.mid = 18356U;

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
    msg.setTimeStamp(0.6214645913500186);
    msg.setSource(17653U);
    msg.setSourceEntity(231U);
    msg.setDestination(50747U);
    msg.setDestinationEntity(240U);
    msg.mid = 52268U;

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
    msg.setTimeStamp(0.7025431728528001);
    msg.setSource(9226U);
    msg.setSourceEntity(147U);
    msg.setDestination(38912U);
    msg.setDestinationEntity(231U);
    msg.mid = 31302U;

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
    msg.setTimeStamp(0.5820523956360558);
    msg.setSource(3441U);
    msg.setSourceEntity(7U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(200U);
    msg.state = 243U;
    msg.eta = 61434U;
    msg.info.assign("OVQVYTUYONFVISKLUNFSBZQGOROJCGCHAMGMRESIRPRYRPMWLOKQDJPQATUEHCLKPBDDMTIDSUZPHDEIGZINYUBGUACZSHQMVSXEIZLC");

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
    msg.setTimeStamp(0.42981633562015653);
    msg.setSource(12970U);
    msg.setSourceEntity(34U);
    msg.setDestination(29573U);
    msg.setDestinationEntity(24U);
    msg.state = 64U;
    msg.eta = 17910U;
    msg.info.assign("FCAHEWQTAOBTQVWQHXVSUAEGCODCQFEHNBXFGYHHKVFUYSKQICATMEYRPYPUESKNCRIGFJJFERUAHNRIYOBGSKELZIZYLMXWEDJNKDDDIRT");

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
    msg.setTimeStamp(0.802050655988785);
    msg.setSource(40583U);
    msg.setSourceEntity(7U);
    msg.setDestination(9494U);
    msg.setDestinationEntity(13U);
    msg.state = 176U;
    msg.eta = 26317U;
    msg.info.assign("MVGSLKPCTUWEVDOGOCWVNEDZVQWMAYSXEXABSIGRADMPTOHTQHHMMBSJUBRMBZFJILFYJGUFWZRALRGIDNWBMFKDBXKYNEPCTCOHQDQAZTKTRNZAJFJEXRQMJXLCDQJPVUCFTCZGRSNEGASFTKVRZQNENJHIYKLYDWOUUNQMVH");

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
    msg.setTimeStamp(0.07629794464643724);
    msg.setSource(17665U);
    msg.setSourceEntity(205U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(220U);
    msg.system = 28185U;
    msg.duration = 54319U;
    msg.speed = 0.9722727382162561;
    msg.speed_units = 213U;
    msg.x = 0.9193661535654988;
    msg.y = 0.9583567585050601;
    msg.z = 0.4423839192486191;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.7231623243045924);
    msg.setSource(55781U);
    msg.setSourceEntity(94U);
    msg.setDestination(10742U);
    msg.setDestinationEntity(241U);
    msg.system = 29977U;
    msg.duration = 57748U;
    msg.speed = 0.6988259023084396;
    msg.speed_units = 108U;
    msg.x = 0.6089605670712813;
    msg.y = 0.9663299568104157;
    msg.z = 0.4628177415672531;
    msg.z_units = 84U;

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
    msg.setTimeStamp(0.10904772374548866);
    msg.setSource(34805U);
    msg.setSourceEntity(57U);
    msg.setDestination(47909U);
    msg.setDestinationEntity(151U);
    msg.system = 65203U;
    msg.duration = 64001U;
    msg.speed = 0.2494984735608401;
    msg.speed_units = 140U;
    msg.x = 0.3839540727217573;
    msg.y = 0.38162594645375203;
    msg.z = 0.9165620424414643;
    msg.z_units = 135U;

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
    msg.setTimeStamp(0.9064330022032971);
    msg.setSource(38814U);
    msg.setSourceEntity(237U);
    msg.setDestination(1438U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.5762841614830704;
    msg.lon = 0.4338694880213698;
    msg.speed = 0.7746080373108241;
    msg.speed_units = 50U;
    msg.duration = 46682U;
    msg.sys_a = 35811U;
    msg.sys_b = 50968U;
    msg.move_threshold = 0.511832367814516;

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
    msg.setTimeStamp(0.5113925884511578);
    msg.setSource(47413U);
    msg.setSourceEntity(124U);
    msg.setDestination(10619U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.8165470437962133;
    msg.lon = 0.8955812428381779;
    msg.speed = 0.11131649040092773;
    msg.speed_units = 185U;
    msg.duration = 2125U;
    msg.sys_a = 30576U;
    msg.sys_b = 61841U;
    msg.move_threshold = 0.5621868898939223;

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
    msg.setTimeStamp(0.1254140747970257);
    msg.setSource(33902U);
    msg.setSourceEntity(205U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.49499280922819366;
    msg.lon = 0.2231451327035927;
    msg.speed = 0.8973521500544501;
    msg.speed_units = 61U;
    msg.duration = 55396U;
    msg.sys_a = 47291U;
    msg.sys_b = 20149U;
    msg.move_threshold = 0.06549433860149312;

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
    msg.setTimeStamp(0.2556874568394142);
    msg.setSource(40234U);
    msg.setSourceEntity(43U);
    msg.setDestination(36726U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.11310293811922323;
    msg.lon = 0.20121670677039372;
    msg.z = 0.24892403294713816;
    msg.z_units = 102U;
    msg.speed = 0.6293396466558597;
    msg.speed_units = 149U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7213536426934174;
    tmp_msg_0.lon = 0.3664815591903846;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YZGZNMOQGMTFQRLZMLNLRFQOBBULYRNZZNINRMWBWKMKGUUQLEJWUTGCEFLBVTXHCWISEDWFZISCMGSJRUHJHSSXXIBJJFPXHJJHTSGVFWKLEYVCSETWDVAMSAZMEDNPIOEHAZBTWWLVOVKITXFOOJQBCGKQIABAKFYGCQPRHUIPXP");

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
    msg.setTimeStamp(0.8666178970761175);
    msg.setSource(29117U);
    msg.setSourceEntity(233U);
    msg.setDestination(43508U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.5017094989663082;
    msg.lon = 0.7835173433482284;
    msg.z = 0.4701607047863;
    msg.z_units = 144U;
    msg.speed = 0.4970516987925583;
    msg.speed_units = 19U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9007497290416715;
    tmp_msg_0.lon = 0.5561750194983134;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XDMUBADGRKURPDMJREBEHYCICXIDELJYPJWIWKQJKWGOTDGMNZFXOUMSKBPJCWYECVPVXZFHWFBGUQANYNWMTYIMTKRWQBDOHWNXSQPZBBDUAEZCYIOUSLRZONPVBKKUFKAVUOPHDACXFVCSLILRXAZHNIGIFRTQCHJMSLTLTYEENHNGPOZTWLJETJUTDDROWRFSKMGZNV");

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
    msg.setTimeStamp(0.9483537274808187);
    msg.setSource(13653U);
    msg.setSourceEntity(220U);
    msg.setDestination(61706U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.8826043877549128;
    msg.lon = 0.053331022400231354;
    msg.z = 0.5912143677281085;
    msg.z_units = 170U;
    msg.speed = 0.6210496598658083;
    msg.speed_units = 220U;
    msg.custom.assign("FYPZSUPNAVFNFTN");

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
    msg.setTimeStamp(0.41951546422654273);
    msg.setSource(59980U);
    msg.setSourceEntity(45U);
    msg.setDestination(20740U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.687646090939752;
    msg.lon = 0.7076493237563406;

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
    msg.setTimeStamp(0.9773673805845825);
    msg.setSource(10902U);
    msg.setSourceEntity(184U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.15637840114821944;
    msg.lon = 0.011924927720637912;

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
    msg.setTimeStamp(0.20375728515400937);
    msg.setSource(32317U);
    msg.setSourceEntity(185U);
    msg.setDestination(57750U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.040369332744494724;
    msg.lon = 0.7255984714148346;

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
    msg.setTimeStamp(0.3376496033807449);
    msg.setSource(30665U);
    msg.setSourceEntity(43U);
    msg.setDestination(41926U);
    msg.setDestinationEntity(67U);
    msg.timeout = 57798U;
    msg.lat = 0.8308965660903395;
    msg.lon = 0.49163478103502223;
    msg.z = 0.2390131554261451;
    msg.z_units = 5U;
    msg.pitch = 0.971449817317141;
    msg.amplitude = 0.40004000049454436;
    msg.duration = 8547U;
    msg.speed = 0.353300780293766;
    msg.speed_units = 71U;
    msg.radius = 0.8489154105560557;
    msg.direction = 91U;
    msg.custom.assign("XRZVXOFGNFFHSBUTZSUTAGVJDATVBYLYJMRXVDSTTSSOEIQNQFELKUPCHZNIWUSNKOIKJKCBVQUUDATOGJRRBLBMJCNWPNSSAGDCDKCIDVYKOLCTNHGWFPBAGYK");

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
    msg.setTimeStamp(0.7494635757050044);
    msg.setSource(21668U);
    msg.setSourceEntity(39U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(30U);
    msg.timeout = 54320U;
    msg.lat = 0.9461355635083537;
    msg.lon = 0.8849251884219599;
    msg.z = 0.36038031184607033;
    msg.z_units = 76U;
    msg.pitch = 0.9538692224351706;
    msg.amplitude = 0.8282115056507471;
    msg.duration = 52811U;
    msg.speed = 0.32670619098078735;
    msg.speed_units = 104U;
    msg.radius = 0.5335782444266434;
    msg.direction = 209U;
    msg.custom.assign("KWFNJLEASJMYMWMPQCRXVBZJJPIIYWEHTGZZUVXOXDKLWQMMQFLKOVCNQHAAZDDZWKPLQEXLABUADJCCHSDIPKXIVXLEDSQNOMDNWHTMPVVSEPGJQJQBYRHMUKTZBCICBNEOYHQDWXBTSIURFYNJGKNCRO");

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
    msg.setTimeStamp(0.5768661627702617);
    msg.setSource(55760U);
    msg.setSourceEntity(194U);
    msg.setDestination(2701U);
    msg.setDestinationEntity(158U);
    msg.timeout = 32723U;
    msg.lat = 0.13362243378704908;
    msg.lon = 0.20125169752560745;
    msg.z = 0.07525711916937661;
    msg.z_units = 22U;
    msg.pitch = 0.3903695673671035;
    msg.amplitude = 0.31307775792451953;
    msg.duration = 51005U;
    msg.speed = 0.10588627432134057;
    msg.speed_units = 191U;
    msg.radius = 0.1312792737411157;
    msg.direction = 234U;
    msg.custom.assign("FCQTQMXVOHBTFIRNOIPKEZATIGFKKSXRNSMW");

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
    msg.setTimeStamp(0.10537499321639243);
    msg.setSource(20641U);
    msg.setSourceEntity(160U);
    msg.setDestination(17971U);
    msg.setDestinationEntity(216U);
    msg.formation_name.assign("MJURFCZFOCGGSNRHLZJRNKPGKTYTQELSAUGXWEXRVXBAMGXQXTWIEZEDTPRJDKLGAQPDUWACUJWGHMSLQJGLXVZBBEPOIKJNQCYUVCZADBMVOMELEIIBKTTNTRESHOLFPFMWAJBGWSSZFND");
    msg.reference_frame = 168U;
    msg.custom.assign("IFTGBXXRGIOHYMSBPEMWZKENPDWCSOURTOXHRMMSMFZLCSGMFUSB");

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
    msg.setTimeStamp(0.15084133436482583);
    msg.setSource(12963U);
    msg.setSourceEntity(77U);
    msg.setDestination(41764U);
    msg.setDestinationEntity(173U);
    msg.formation_name.assign("GOYEMZHDAPIBDGWUGGVAXFLOSBRIIRELTLYBIRFYNISWNOMMKCUCGYVDWQBNMNEERLZAKQZSPKKRFZTYUJWDPIITQDONSCABVNFMXFXHPOCVGPXOVERUHWZMTNXDVORTMZDJXBOUXTCIHIHBYSAKIPQPGEMSJRUUQSEYYWJGXYNDHLATVRHZABULQLPQEPMJFJKNJXGFKACJUZF");
    msg.reference_frame = 57U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40967U;
    tmp_msg_0.off_x = 0.7129150231119777;
    tmp_msg_0.off_y = 0.38783427370571855;
    tmp_msg_0.off_z = 0.13273014564245844;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WHGOWSFFCGCQTUUFZFGOMNKNJNGRDZUOLYKLLVRKETTWIMENLDHAYEDZGZIIKXQOFSBAPLBFIHCHJVQYIZUEXJYJGSISWQIARSGMJBYHRDQAFXMPQCPWNOEPXBEPURGMYQRHLCXYNBVVRUCW");

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
    msg.setTimeStamp(0.05001905985112476);
    msg.setSource(41869U);
    msg.setSourceEntity(103U);
    msg.setDestination(52775U);
    msg.setDestinationEntity(203U);
    msg.formation_name.assign("GJACWCWBUPYFDFDATDXMSCUHASWDAFERVJTMSGKXSQHOLZBIGTIPKAYPKQNAXHRJRGOTUUGLLSBIPXEUJVLQFTOYALCJJLRKWCNIOJGERXRTSTUDQOMQCZIECDRPBUVPINIFHMZDWVXABMOPTNJYWGWEZFEJNPEKNOWGZXFUZLVPGZDOYVOLBSFNHXSCSHWUYEF");
    msg.reference_frame = 194U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17059U;
    tmp_msg_0.off_x = 0.4311667980229068;
    tmp_msg_0.off_y = 0.7243681090781539;
    tmp_msg_0.off_z = 0.49028338489998113;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TYHKZMWHRJYOKIZBSGMFNSNFCLATZMNEPOFSECDQRMULCTTFBRREYAUJDZCOGPWQVVJNHIXKQECBDYRGWTGHNIWKUXRHZAIDXBSFULIXQSFQJNYKDGUVWCGOCHLMFICZFUKFTVUHJXBPJRDOBYALGFLMPKLOECPORIQVVJWIEMJPMB");

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
    msg.setTimeStamp(0.26178759543811025);
    msg.setSource(46985U);
    msg.setSourceEntity(15U);
    msg.setDestination(54754U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("NRWIQOQPOYHVFRHONMRJTDGZLMWSJIPXLRCPTVMBUDTOMICSLJMNDYXDKFEBYDWGOBFOKBPLZAYZGCJXBBWWCILNNLWUNFKKHEJJVOGELMEBSVTPKRKZEAHHNHTUGXQCRDCBAKHX");
    msg.formation_name.assign("WWXIADVVANHTSLGTDIBPRFGNRAOVDIUFIXOFWLAEGFYMNPTJMZOTWATVARCMDSYSOHQYBIUPSCKVYSDNHGFUHLKZKNIXKKOGNQSTCJPPEZMMVEKYTWJNCKUREHHUGLHQZXUCZKDYCQZGMIBROCWJDRVPICBZFWQN");
    msg.plan_id.assign("RXTMZTUGULMCNQYOBFPPOEBQRXNFQLXEOCKAXCIVHWDBVX");
    msg.description.assign("FIGUMNFROWCNADNPXSVDCHLVBJJHGPSYWHAFMWPASQMLKMTKHUBLT");
    msg.leader_speed = 0.31816748700882236;
    msg.leader_bank_lim = 0.3840041576930462;
    msg.pos_sim_err_lim = 0.5199989013989127;
    msg.pos_sim_err_wrn = 0.5464694956944823;
    msg.pos_sim_err_timeout = 16333U;
    msg.converg_max = 0.2553828121281496;
    msg.converg_timeout = 6856U;
    msg.comms_timeout = 33861U;
    msg.turb_lim = 0.4900320919454777;
    msg.custom.assign("QMAILOZCEYDRIDEXZNYBPBHGMCTUUTHJSNTYAKQUDMKLRUWVBYGFQHKIHKWPHEQYKLAPXPSFLQOCNKJNQJSOURFZIUGWBUJDPSFZWFXSODSEMHVEDFX");

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
    msg.setTimeStamp(0.49251994951015166);
    msg.setSource(8768U);
    msg.setSourceEntity(93U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("JQARVOWWTNELSMBHNVPUNZQUFBMTZLRRPDNXYPERXYOYYHGJORIEOAHDRCFWECQWOGJNHUNTYUZBDFSMWCZCBGWWOUAMKFWXDHPGDSL");
    msg.formation_name.assign("LHEEBNTQYIWDGMXRTYKAVOADEQUVRIIJZSFBGMMKFDFCPFHQQXOQRKPFVJXGTXUJZQKTKBRARJNMKMTRFQGTSCJEBIAKUHPXWAEM");
    msg.plan_id.assign("OVCMVGVZAOIYJQATPVUFJNAUVGIMHCUYZLAXHYBEMCZBTOMFOCSPQOVWJZMTDPUKHKALRBXEWDJHCJUQCPZVRYNSXAROMDHWSLQTRBRLSNUKZWGIPJBIHIEBXKSLNNOMNPLXSJDWDOXGTENXMATISHG");
    msg.description.assign("XHCXHAQDSWUZZUWYARRLBTAKUHZODDOEMMVGPJKWYRGHMYRGRHMBKSSOUYOYTVHVARIPZSNDWZDTZDKNNLPXUBTSBTIG");
    msg.leader_speed = 0.9156987203448769;
    msg.leader_bank_lim = 0.8893038962306796;
    msg.pos_sim_err_lim = 0.2597467135581333;
    msg.pos_sim_err_wrn = 0.09995487720699292;
    msg.pos_sim_err_timeout = 9184U;
    msg.converg_max = 0.3988490263816046;
    msg.converg_timeout = 11222U;
    msg.comms_timeout = 5282U;
    msg.turb_lim = 0.41754028061287773;
    msg.custom.assign("XAWDEXNMAQWROZLVIIKQXIIACJVSQMEFKERLOGACJIUFVMRJVH");

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
    msg.setTimeStamp(0.621737461664625);
    msg.setSource(43236U);
    msg.setSourceEntity(65U);
    msg.setDestination(58737U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("HEWDUOZVKDOVIDITJJUIMPYOFXSLLYEMEMJEGTLYUZSHTKSSALNSXCIXOQGNCDHLAQUSBBCMRDNCGPCJWAKZUWPOBNRUAVUPLXCPWPCENOUGSTSHNYXAHV");
    msg.formation_name.assign("YGYQGVEKVFCMSFJBZMPQNRJUXRWDUBNYOPIGDKERGLJEWAHFKFNXSXTBLRXFOJCTINV");
    msg.plan_id.assign("USFSEBBUOPHZHJNQDHNDZWNQFSBZFQREEOKRFHOAPLVVOJXVNNBTDF");
    msg.description.assign("SSTRINACJWVSHBZIWHBGTGDAMYVEUVFQGCOTJJSRPXQZCFOYDBIXXSWIUXWMVWYXBIUFJRXWAMAZNVBGKQHNYFRHUQLHCAGRLZMJWBDQNQXXSKFGVFPIEIKZDPDKOOCOQDRCZCUPOMIUUMBEETFWKGQLY");
    msg.leader_speed = 0.011545762547445992;
    msg.leader_bank_lim = 0.9014024221892889;
    msg.pos_sim_err_lim = 0.07929602816692183;
    msg.pos_sim_err_wrn = 0.5881816747425708;
    msg.pos_sim_err_timeout = 54282U;
    msg.converg_max = 0.9752026413025437;
    msg.converg_timeout = 49851U;
    msg.comms_timeout = 31621U;
    msg.turb_lim = 0.20306462068294195;
    msg.custom.assign("BQSOOLEFJLXGXUZSEVDWTPUTMDKGRNMEJRETXHURKEVDJQLARMWYCPRTOHWHACBKTYLSBRWMZZYVHJZXZOMCJZFFXWCUYIDQQYJYBDCBGPKDBBGSPJCYJPHKGYQTTUYFSRVALASINHNLEPVORTWKIGFAKHESUWLEBOKVNQWFDDQICHMZQC");

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
    msg.setTimeStamp(0.21632675206443708);
    msg.setSource(40017U);
    msg.setSourceEntity(236U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(171U);
    msg.control_src = 53295U;
    msg.control_ent = 198U;
    msg.timeout = 0.9697088102603739;
    msg.loiter_radius = 0.5527097693823991;
    msg.altitude_interval = 0.8014893903841681;

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
    msg.setTimeStamp(0.5010302758404096);
    msg.setSource(39543U);
    msg.setSourceEntity(82U);
    msg.setDestination(39696U);
    msg.setDestinationEntity(179U);
    msg.control_src = 44128U;
    msg.control_ent = 218U;
    msg.timeout = 0.796733974073018;
    msg.loiter_radius = 0.007862465028255494;
    msg.altitude_interval = 0.6531394461102114;

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
    msg.setTimeStamp(0.026355820367087834);
    msg.setSource(61560U);
    msg.setSourceEntity(85U);
    msg.setDestination(65525U);
    msg.setDestinationEntity(34U);
    msg.control_src = 38765U;
    msg.control_ent = 221U;
    msg.timeout = 0.9925915143626765;
    msg.loiter_radius = 0.28531382594809296;
    msg.altitude_interval = 0.9074721315021803;

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
    msg.setTimeStamp(0.4144869780213494);
    msg.setSource(35089U);
    msg.setSourceEntity(79U);
    msg.setDestination(720U);
    msg.setDestinationEntity(30U);
    msg.flags = 90U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3697079328609315;
    tmp_msg_0.speed_units = 74U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6416204737164232;
    tmp_msg_1.z_units = 27U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.33965521671522914;
    msg.lon = 0.6861844509177868;
    msg.radius = 0.1917155578326114;

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
    msg.setTimeStamp(0.12226830177232306);
    msg.setSource(57582U);
    msg.setSourceEntity(17U);
    msg.setDestination(26874U);
    msg.setDestinationEntity(68U);
    msg.flags = 196U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20091457080523845;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7112236824769607;
    tmp_msg_1.z_units = 190U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.39712353942372325;
    msg.lon = 0.888333794567343;
    msg.radius = 0.9544991195185972;

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
    msg.setTimeStamp(0.2836798105145021);
    msg.setSource(22095U);
    msg.setSourceEntity(220U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(79U);
    msg.flags = 151U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7889857707774852;
    tmp_msg_0.speed_units = 246U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17418370872570554;
    tmp_msg_1.z_units = 52U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1885506327396287;
    msg.lon = 0.587556657839828;
    msg.radius = 0.867773303440066;

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
    msg.setTimeStamp(0.026760306663024647);
    msg.setSource(59377U);
    msg.setSourceEntity(16U);
    msg.setDestination(29819U);
    msg.setDestinationEntity(18U);
    msg.control_src = 38806U;
    msg.control_ent = 93U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4462885177816547;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9881570277797359;
    tmp_tmp_msg_0_1.z_units = 144U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.01760838355206873;
    tmp_msg_0.lon = 0.5685353467208152;
    tmp_msg_0.radius = 0.5168631118733177;
    msg.reference.set(tmp_msg_0);
    msg.state = 144U;
    msg.proximity = 9U;

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
    msg.setTimeStamp(0.9358463260548714);
    msg.setSource(12833U);
    msg.setSourceEntity(63U);
    msg.setDestination(58854U);
    msg.setDestinationEntity(168U);
    msg.control_src = 21023U;
    msg.control_ent = 223U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 227U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9830318572231087;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9610465079681203;
    tmp_tmp_msg_0_1.z_units = 99U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.11141319981878695;
    tmp_msg_0.lon = 0.736172823689132;
    tmp_msg_0.radius = 0.025453703690482388;
    msg.reference.set(tmp_msg_0);
    msg.state = 1U;
    msg.proximity = 244U;

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
    msg.setTimeStamp(0.43433068880442105);
    msg.setSource(50262U);
    msg.setSourceEntity(196U);
    msg.setDestination(54311U);
    msg.setDestinationEntity(6U);
    msg.control_src = 65212U;
    msg.control_ent = 94U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 239U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.17117424867421938;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6377831667146765;
    tmp_tmp_msg_0_1.z_units = 10U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.266319341009282;
    tmp_msg_0.lon = 0.12724057504916952;
    tmp_msg_0.radius = 0.707668352305552;
    msg.reference.set(tmp_msg_0);
    msg.state = 64U;
    msg.proximity = 178U;

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
    msg.setTimeStamp(0.37681247902628634);
    msg.setSource(65274U);
    msg.setSourceEntity(156U);
    msg.setDestination(61694U);
    msg.setDestinationEntity(76U);
    msg.ax_cmd = 0.7530083613474245;
    msg.ay_cmd = 0.1355860709856037;
    msg.az_cmd = 0.03755214142241847;
    msg.ax_des = 0.900756571885781;
    msg.ay_des = 0.22281922420592326;
    msg.az_des = 0.6461930990657051;
    msg.virt_err_x = 0.5348323271852039;
    msg.virt_err_y = 0.9332658264354948;
    msg.virt_err_z = 0.45352749931190217;
    msg.surf_fdbk_x = 0.6435420854444235;
    msg.surf_fdbk_y = 0.8621863056904036;
    msg.surf_fdbk_z = 0.7088385538406464;
    msg.surf_unkn_x = 0.3102401552060846;
    msg.surf_unkn_y = 0.23658883882652004;
    msg.surf_unkn_z = 0.49286514007450355;
    msg.ss_x = 0.6983478494618561;
    msg.ss_y = 0.9038914941782431;
    msg.ss_z = 0.8609944044777715;

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
    msg.setTimeStamp(0.8958825357579872);
    msg.setSource(33287U);
    msg.setSourceEntity(79U);
    msg.setDestination(7605U);
    msg.setDestinationEntity(217U);
    msg.ax_cmd = 0.753857082380548;
    msg.ay_cmd = 0.05144764701115856;
    msg.az_cmd = 0.7648138509873397;
    msg.ax_des = 0.41683231756029626;
    msg.ay_des = 0.6338543493438006;
    msg.az_des = 0.969898730082334;
    msg.virt_err_x = 0.09788436546907386;
    msg.virt_err_y = 0.7819268461983535;
    msg.virt_err_z = 0.06544310653043739;
    msg.surf_fdbk_x = 0.5789277526801959;
    msg.surf_fdbk_y = 0.2666527382729008;
    msg.surf_fdbk_z = 0.028399535820275212;
    msg.surf_unkn_x = 0.5973288683562097;
    msg.surf_unkn_y = 0.6854111607726078;
    msg.surf_unkn_z = 0.8456244270209183;
    msg.ss_x = 0.5345325820866372;
    msg.ss_y = 0.45304256827710687;
    msg.ss_z = 0.02904203124144611;

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
    msg.setTimeStamp(0.0596034350692668);
    msg.setSource(27560U);
    msg.setSourceEntity(139U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(38U);
    msg.ax_cmd = 0.9939492799528253;
    msg.ay_cmd = 0.4148575665368077;
    msg.az_cmd = 0.45201759651780193;
    msg.ax_des = 0.12399195349285175;
    msg.ay_des = 0.34466237481721995;
    msg.az_des = 0.2861502426195629;
    msg.virt_err_x = 0.027095007687989003;
    msg.virt_err_y = 0.8859038454515765;
    msg.virt_err_z = 0.7969561986295132;
    msg.surf_fdbk_x = 0.058496722330897866;
    msg.surf_fdbk_y = 0.7144276390138774;
    msg.surf_fdbk_z = 0.9792023416600442;
    msg.surf_unkn_x = 0.7292352539592099;
    msg.surf_unkn_y = 0.6972112806986512;
    msg.surf_unkn_z = 0.2958497203655309;
    msg.ss_x = 0.061677677906352146;
    msg.ss_y = 0.26833840931228636;
    msg.ss_z = 0.019041857289000208;

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
    msg.setTimeStamp(0.8827082645370651);
    msg.setSource(34147U);
    msg.setSourceEntity(126U);
    msg.setDestination(50438U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("JBMAKUDDIIZFBYJNFGSBIDDKH");
    msg.dist = 0.9230156621847866;
    msg.err = 0.7653634032330067;
    msg.ctrl_imp = 0.46480677819507676;
    msg.rel_dir_x = 0.7696645552080971;
    msg.rel_dir_y = 0.9714983406121854;
    msg.rel_dir_z = 0.30166935055241384;
    msg.err_x = 0.6218108430451325;
    msg.err_y = 0.04985253167929038;
    msg.err_z = 0.4352780355127136;
    msg.rf_err_x = 0.6952156775400783;
    msg.rf_err_y = 0.5129452052177202;
    msg.rf_err_z = 0.2628065451903179;
    msg.rf_err_vx = 0.11478460853702765;
    msg.rf_err_vy = 0.710233867585963;
    msg.rf_err_vz = 0.5766370846026754;
    msg.ss_x = 0.268356557974303;
    msg.ss_y = 0.8312014314928367;
    msg.ss_z = 0.7064211386376209;
    msg.virt_err_x = 0.25684688822503066;
    msg.virt_err_y = 0.5836226913388752;
    msg.virt_err_z = 0.39366345587436213;

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
    msg.setTimeStamp(0.7290602414576028);
    msg.setSource(42979U);
    msg.setSourceEntity(120U);
    msg.setDestination(56597U);
    msg.setDestinationEntity(242U);
    msg.s_id.assign("UIPATEZKIZPHTZCTOMMH");
    msg.dist = 0.8264613295830321;
    msg.err = 0.4635290730905377;
    msg.ctrl_imp = 0.5990309601286578;
    msg.rel_dir_x = 0.6144071628809152;
    msg.rel_dir_y = 0.8810484209857073;
    msg.rel_dir_z = 0.9946969367079369;
    msg.err_x = 0.780430033203614;
    msg.err_y = 0.7661422545674424;
    msg.err_z = 0.49415453042992463;
    msg.rf_err_x = 0.8697665746195208;
    msg.rf_err_y = 0.2565578163916994;
    msg.rf_err_z = 0.6529788589996716;
    msg.rf_err_vx = 0.29668851727324974;
    msg.rf_err_vy = 0.9570723524318414;
    msg.rf_err_vz = 0.37994506005203776;
    msg.ss_x = 0.25126008531181987;
    msg.ss_y = 0.9496048963170348;
    msg.ss_z = 0.8230240134210575;
    msg.virt_err_x = 0.18877518605810661;
    msg.virt_err_y = 0.08359358889960267;
    msg.virt_err_z = 0.5974985122149453;

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
    msg.setTimeStamp(0.6791717133150662);
    msg.setSource(30302U);
    msg.setSourceEntity(82U);
    msg.setDestination(22515U);
    msg.setDestinationEntity(162U);
    msg.s_id.assign("FDSNNDBWJHYLVUZCSEKRWNQCHMYAMQSJSRZVPWZCPXQWDYLUVACSYXRZCKRMYGGHROSINTWIIKXZATABQBGLAZOFWTUNRKICTXOATVKQOGHTCLOGUVOFPLQSWEYKMAXVFDXNBIMFRFJCSVBPPSZTJEBOBJUWMPEBOUOLILDNMUZMYQZIFGIGTCUEBLRANKWTKKPDNVLQVHIYWBYJEJQ");
    msg.dist = 0.3189531031416962;
    msg.err = 0.9340489436340442;
    msg.ctrl_imp = 0.07984180827086906;
    msg.rel_dir_x = 0.14001792513522981;
    msg.rel_dir_y = 0.23519169962304465;
    msg.rel_dir_z = 0.16823086083041028;
    msg.err_x = 0.0576464511109811;
    msg.err_y = 0.7120044175347461;
    msg.err_z = 0.21846152984020883;
    msg.rf_err_x = 0.06702946461901127;
    msg.rf_err_y = 0.2329286716769161;
    msg.rf_err_z = 0.277644991107316;
    msg.rf_err_vx = 0.2202003473339953;
    msg.rf_err_vy = 0.4176561901495206;
    msg.rf_err_vz = 0.4155918894788253;
    msg.ss_x = 0.266250303586846;
    msg.ss_y = 0.13201853511649886;
    msg.ss_z = 0.9748990065851089;
    msg.virt_err_x = 0.34017196081533385;
    msg.virt_err_y = 0.9531424250295477;
    msg.virt_err_z = 0.17457950867147665;

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
    msg.setTimeStamp(0.9286555289103601);
    msg.setSource(40823U);
    msg.setSourceEntity(131U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(204U);
    msg.timeout = 28511U;
    msg.rpm = 0.5831178334347809;
    msg.direction = 157U;
    msg.custom.assign("WCKQBQVPVZIYFZIIFGUNVYTYOLFZXESJLWXERNJXRRTKBILLZKJMMXQAYDCSKABMWWOMTWZGYJQHHXDCWDVKXNKABYPEXTBAKQMXCPLRTOGWBGJDINENHOXOHLBHIJFUMUAIWSODDGGARCWYPSNLCAANKDHZXTUKVOBSHJHFERRUIZMFEIDFODCSCHBQMKGQTSQBJHPFPNOVTWVZ");

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
    msg.setTimeStamp(0.49806221718680277);
    msg.setSource(32665U);
    msg.setSourceEntity(219U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(121U);
    msg.timeout = 10618U;
    msg.rpm = 0.026846694159986195;
    msg.direction = 220U;
    msg.custom.assign("JACAIPCJQPCEGCDWOZEJXPUTKBTSHLEAIHIMEIWPXJRKCAMZLHQFGQNSXVWCGOWUATNNAKIBZDHIHTOMRLQXEWNNYBJXQ");

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
    msg.setTimeStamp(0.2741394379862697);
    msg.setSource(39971U);
    msg.setSourceEntity(51U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(137U);
    msg.timeout = 8752U;
    msg.rpm = 0.9655471547511972;
    msg.direction = 59U;
    msg.custom.assign("PNZZKSOOSTEWWAIZH");

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
    msg.setTimeStamp(0.5420691357241366);
    msg.setSource(50374U);
    msg.setSourceEntity(115U);
    msg.setDestination(24856U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("YHEYAWNKNNGKXVIAMPHKNBIJXLHJBRLPQRIAUOVFRWRFEEQTSHYCXGFMXGDQEBYROKLPQPYXUACWSZTIQATHWIPUQAGFLBQYULJIGCIWKNMPUVPS");
    msg.type = 251U;
    msg.op = 170U;
    msg.group_name.assign("VXIRZOUGFUCZPAIXLVWDGRPXQSWAJYJKTHJHSJIXQTJHMAWQFBOGFMAFWAOVVEWAAPMMAQVZWDOZHGZZMSTGPXFTHSBSKHLVEXBKILDTDPBYNOUJALEDTSJQNTOBYXFHUWDRHMIMUKJULGOHXWIPISFEBZFKGNNUC");
    msg.plan_id.assign("CGRVQCPGPSHOASATRNJACUIIFZSNYTYRRLGELBRALDDOUAWKFQDXJUZKPKVUVWTHIBBIHMQOGIVVGOCJJYTAHVVLKRJQVKUEOLIKHMPBFIOQFHRLZTSFOGMFMMZODYZZMMYJGRUBDYZHEJCXASDCMPZUWJTRXIXYEQWIBEPCXHCSIMKGXATGPNNANBWNHTRSLSFOUWHQCJDLXDZQBMSZNFXX");
    msg.description.assign("VCUCOQABPWVQNKNWPEAODHHINBCTZRFTXQUXNVPBMELBRWGGYIDJXQZJSAVSTLJKLUHXIYZPJFBYYPKWUHTJDUOOVXSEFFLRC");
    msg.reference_frame = 84U;
    msg.leader_bank_lim = 0.4951034321576897;
    msg.leader_speed_min = 0.6160622091845093;
    msg.leader_speed_max = 0.6509784223780075;
    msg.leader_alt_min = 0.39082972138982364;
    msg.leader_alt_max = 0.010435586767282956;
    msg.pos_sim_err_lim = 0.020181642155771118;
    msg.pos_sim_err_wrn = 0.8460894703817515;
    msg.pos_sim_err_timeout = 45861U;
    msg.converg_max = 0.2694192283492458;
    msg.converg_timeout = 40883U;
    msg.comms_timeout = 39839U;
    msg.turb_lim = 0.9467565519422609;
    msg.custom.assign("QWQCOQHTZKZMNQBMOVWJLWMGYSRBEOPXUVCOIXHEUDVDWYDUKSQUGVFBWATNBNVBTAQROFSTINNDOREMXXHNSZJTMXUYYKBWREPPKCKOYGDKURZOSQBBZLRUAVSLCPWHAVZCAFKLTNGJJDVZIKAALYWT");

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
    msg.setTimeStamp(0.27947613105571545);
    msg.setSource(5927U);
    msg.setSourceEntity(41U);
    msg.setDestination(51811U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("SQCGBAUAZJNFALOZIPECHPJSFADQUVFTCMNQXW");
    msg.type = 188U;
    msg.op = 99U;
    msg.group_name.assign("QCVSAPEVSPYJCZMRIPCBLUWDXOZJCOUAUWWAMTU");
    msg.plan_id.assign("GIQUFFXBSNEOYTHUDCGKRAWGRAPFXOVUCQLMZOMLFCYGYWDJHYPRBBBAPRNHNZTKTDDTKMPBEUTYLBANQIMDWS");
    msg.description.assign("ZBQGCCZFMYLFANIFJCHDROMNBHCPUJWJSTIHRBGNZLWNFOMPSAXQTWJEKTAVIOTZBTWWGMVNCGSZOOFECBBUEGDSICQNMUZOLQFVQDMKQBFYSEPDSUYZQKXYUBUGWAPGXKOLPHHIALJREKAZDBWTPXUJRUIXKGLY");
    msg.reference_frame = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55055U;
    tmp_msg_0.off_x = 0.2769540268502271;
    tmp_msg_0.off_y = 0.8324982937798281;
    tmp_msg_0.off_z = 0.5294724786567306;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.249227420149855;
    msg.leader_speed_min = 0.4709452839128786;
    msg.leader_speed_max = 0.796914705698978;
    msg.leader_alt_min = 0.518305348208144;
    msg.leader_alt_max = 0.6272598518200049;
    msg.pos_sim_err_lim = 0.8824989490607004;
    msg.pos_sim_err_wrn = 0.6396751405176407;
    msg.pos_sim_err_timeout = 16955U;
    msg.converg_max = 0.09545696460335285;
    msg.converg_timeout = 38696U;
    msg.comms_timeout = 43020U;
    msg.turb_lim = 0.18872717332289035;
    msg.custom.assign("LSAIKMCXGKCRTGXXTVJSCQXZCDVIKVYYKSRREANYKAOYYTFXUZSXFIMOVQWRANWXXPFNUDHHWDTQLEMQZBFHSWHRIGHDHCFVIJZEUJPROEPMFBSRAUHSGPFWJCPQZMMGJKCMUCNQKGZAWLKVYLRTMWOFOJPBRUHG");

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
    msg.setTimeStamp(0.04567056849531681);
    msg.setSource(18670U);
    msg.setSourceEntity(132U);
    msg.setDestination(14384U);
    msg.setDestinationEntity(110U);
    msg.formation_name.assign("HAGOAFLMTEQXPCXQRMLBAZCIBZACWPGVWMBGROQBNHKKUWAKDHTCEIZSYAUJKDQMGLPATVDPSENXBDXINJRKWFZOZMTQF");
    msg.type = 210U;
    msg.op = 231U;
    msg.group_name.assign("IQOAGXLUFUQHQKOQMHTPRXJBUNVYJVQQSPFARYFSXRAXTTGKDOILLSXCWESIKHWHOESIXVJSBEKLKOVGJZWZCHPXSQTJUNNNIFUCCPVEACBRBSCMJJCOABGMHMIMIBBWWNJICYONPYWWXWDXDLGVZPDEYPOGUKHZYIRYMKEDYPMUEKRPNDBFYFRLCVREDFUVMBLZUGTQXHAKDAPTWHCFTZALEAJIZGMZHGWZLNQNTNRQA");
    msg.plan_id.assign("UEJIXUAWJWFFSBLBJFBGCUSYHJIFNYSHBXUBCIJGHRCCJAXMKLNEJZFHHQQPCLEIZYXQEMAVMOPQQRAGWMFOUUZPWLYHPEKQTFQSGTQVBCSOVZVTVPCKDORKGUAJOYMOBANZQKXWBEYLEZXLXSCGBPXYRDHTTAMUFNTSDDWBCVATVZKPUSNSRISIWFAREHRTLEPYZJOHLIDNKXKIKGZMGNDDW");
    msg.description.assign("BUPGYSJRQTEMURLXDTLKNJDSZSGKXISKAAGNAGMVZHWSPZUNYMFFCJYVXIQCFKLNRFHFWPYFSVAZBSCXEQJVUDNJDKCVGJPHUMUTWEQDOEQNXRWNZ");
    msg.reference_frame = 155U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11605U;
    tmp_msg_0.off_x = 0.9710319887782062;
    tmp_msg_0.off_y = 0.3555580818549101;
    tmp_msg_0.off_z = 0.742545853313451;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.414174970800833;
    msg.leader_speed_min = 0.6262885842861181;
    msg.leader_speed_max = 0.24626567026914026;
    msg.leader_alt_min = 0.2283625099554274;
    msg.leader_alt_max = 0.1486319472662928;
    msg.pos_sim_err_lim = 0.9563710244577287;
    msg.pos_sim_err_wrn = 0.6743346680510474;
    msg.pos_sim_err_timeout = 19283U;
    msg.converg_max = 0.5271787435898785;
    msg.converg_timeout = 51524U;
    msg.comms_timeout = 45919U;
    msg.turb_lim = 0.47229363200608176;
    msg.custom.assign("FKOGXYLAZLPZDCHPLIJKVUXPMMSWTISDTJFRKLQUGWAHEOFOWKDBZCJIRSJFABOYQCJQWORZEEUORURRVTDNENAYXYVNXZWJUCLDTVSZAGBDXAWACIEIPYCBGESFUIMJIGHGSCYEHCOLHIXUQFTFVHPEVADMJTNWSVZKBUHNBLCZSKRBQKXKWDHDAGPYXPRHYGMQOJKHZOONQTNIPNBIMJVMBMTEXVMLTSEWWYLMZGKQGRFCBFNFDUN");

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
    msg.setTimeStamp(0.15332901513527475);
    msg.setSource(8438U);
    msg.setSourceEntity(121U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(35U);
    msg.timeout = 49592U;
    msg.lat = 0.29982196179001397;
    msg.lon = 0.9500087611827243;
    msg.z = 0.15893844927041223;
    msg.z_units = 138U;
    msg.speed = 0.01085795980540949;
    msg.speed_units = 81U;
    msg.custom.assign("OAMKHJATALTSPDUPCBTKWXMVOWCOZTMJQSDAEAGHNDMWODQKKUSFZCNW");

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
    msg.setTimeStamp(0.7396955330829081);
    msg.setSource(3057U);
    msg.setSourceEntity(180U);
    msg.setDestination(53663U);
    msg.setDestinationEntity(196U);
    msg.timeout = 3310U;
    msg.lat = 0.7330417259364372;
    msg.lon = 0.08930400744337019;
    msg.z = 0.032370576301325005;
    msg.z_units = 1U;
    msg.speed = 0.5441240149585784;
    msg.speed_units = 31U;
    msg.custom.assign("CBTRNNZFJSYAGQXAKWLBVDIDJCVSHRIJUGTHORWVHNIMCMJZXKZKMGTBSZXKVDWFEULESKBVTNBHMLAOWUWPJWUZPLCFCPYXDSYMWVLEEZMPOYKVQYCNUGNFHVXDHAHPALOEIHOFYXPGFXQTIIFNBXUBPRDODYTRCJSITPENRFASRSCFAKDYGIEHDKAPCHQIOFYSWB");

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
    msg.setTimeStamp(0.4431031804604403);
    msg.setSource(15376U);
    msg.setSourceEntity(240U);
    msg.setDestination(32521U);
    msg.setDestinationEntity(232U);
    msg.timeout = 35336U;
    msg.lat = 0.8283483296319245;
    msg.lon = 0.08185057013639185;
    msg.z = 0.8510670759219329;
    msg.z_units = 30U;
    msg.speed = 0.6622205142472769;
    msg.speed_units = 138U;
    msg.custom.assign("LHITVKOSTSNVQFCALTXJKFCYNWUVQLZWZNADBVWJIUKTZERPGSWJBLOOJONYYDFAUXSZJRYLHGQGEIKHFDAARJNJMWZYPORBGDIDSLWQYKSWXPPZQXAOKQVEMLPWTHOMOJQCRLMTFEGCMCRJCCZIKFSANRDJSUBHWNQBDXEGBAOXKMEUBRIPCTMCYVITBCUADIEZHPGYHVEZMMBKHDGSPTUVWFQNRDNIVFRPVYX");

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
    msg.setTimeStamp(0.24332179588919034);
    msg.setSource(36895U);
    msg.setSourceEntity(147U);
    msg.setDestination(33033U);
    msg.setDestinationEntity(200U);
    msg.timeout = 33135U;
    msg.lat = 0.16204843054721974;
    msg.lon = 0.8066513535435563;
    msg.z = 0.033673509769700516;
    msg.z_units = 66U;
    msg.speed = 0.2993209264313641;
    msg.speed_units = 128U;
    msg.custom.assign("WMNJKQVWOZVQLGFQOHHYFYJAPFLDGNHSJLPGPFOVVLGBUNDYCYLTWOCMBEIAPJRXYFUJAXXYYESXULAKCFOPWDCDKQUTDSGBZOXMTCKDAVRERZHATIOR");

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
    msg.setTimeStamp(0.6145152751589775);
    msg.setSource(41380U);
    msg.setSourceEntity(64U);
    msg.setDestination(34070U);
    msg.setDestinationEntity(70U);
    msg.timeout = 60837U;
    msg.lat = 0.7559152290285932;
    msg.lon = 0.3616335452045213;
    msg.z = 0.6053117060284432;
    msg.z_units = 61U;
    msg.speed = 0.546872673011857;
    msg.speed_units = 211U;
    msg.custom.assign("AMLWXEFYFIVTGLUEVJXUGLEFTCIKXGKSLIBCSYSSZNTUQPOCXGQILHMQCAKOPDRPERACNVUDAPZQSAIIQBBYKTORYWNVHMWD");

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
    msg.setTimeStamp(0.24521632581897046);
    msg.setSource(11540U);
    msg.setSourceEntity(42U);
    msg.setDestination(17257U);
    msg.setDestinationEntity(74U);
    msg.timeout = 50753U;
    msg.lat = 0.31479356520811086;
    msg.lon = 0.67703266107078;
    msg.z = 0.8148301795502472;
    msg.z_units = 247U;
    msg.speed = 0.7663852353727924;
    msg.speed_units = 3U;
    msg.custom.assign("RSOTOHHRJNFUDUFKIL");

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
    msg.setTimeStamp(0.24000067843314254);
    msg.setSource(22386U);
    msg.setSourceEntity(230U);
    msg.setDestination(14811U);
    msg.setDestinationEntity(34U);
    msg.arrival_time = 0.32082511524268864;
    msg.lat = 0.03868027429608578;
    msg.lon = 0.6525989921500981;
    msg.z = 0.5470969634469969;
    msg.z_units = 95U;
    msg.travel_z = 0.8480482114746055;
    msg.travel_z_units = 9U;
    msg.delayed = 84U;

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
    msg.setTimeStamp(0.9955574872812184);
    msg.setSource(9842U);
    msg.setSourceEntity(135U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(33U);
    msg.arrival_time = 0.685458194740053;
    msg.lat = 0.6026079475250135;
    msg.lon = 0.2551485332055785;
    msg.z = 0.980838170971593;
    msg.z_units = 44U;
    msg.travel_z = 0.5580059861033451;
    msg.travel_z_units = 12U;
    msg.delayed = 15U;

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
    msg.setTimeStamp(0.09071064821183483);
    msg.setSource(17586U);
    msg.setSourceEntity(247U);
    msg.setDestination(36287U);
    msg.setDestinationEntity(138U);
    msg.arrival_time = 0.12075029294791995;
    msg.lat = 0.15677547567364036;
    msg.lon = 0.4357340648998983;
    msg.z = 0.041614792006306356;
    msg.z_units = 239U;
    msg.travel_z = 0.28485436983131307;
    msg.travel_z_units = 58U;
    msg.delayed = 59U;

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
    msg.setTimeStamp(0.4743999547435718);
    msg.setSource(6275U);
    msg.setSourceEntity(72U);
    msg.setDestination(19079U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.8825801287277425;
    msg.lon = 0.881639115680727;
    msg.z = 0.312678389305043;
    msg.z_units = 176U;
    msg.speed = 0.5001747546870924;
    msg.speed_units = 80U;
    msg.bearing = 0.27820264545149676;
    msg.cross_angle = 0.054614390747561914;
    msg.width = 0.5724245436342662;
    msg.length = 0.6855464839826961;
    msg.coff = 171U;
    msg.angaperture = 0.3848889067246737;
    msg.range = 55233U;
    msg.overlap = 24U;
    msg.flags = 249U;
    msg.custom.assign("TXIDKJNOCFOEZUOJWZEARJUUVNPAPHUREMRGVRPHGNYGXSEEKXRLHQCTQSTZFKKEMGQIVFRCDMRTFMNCPBYLFGSUDMMEUGEXSPEAP");

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
    msg.setTimeStamp(0.8235244923373073);
    msg.setSource(61609U);
    msg.setSourceEntity(116U);
    msg.setDestination(32470U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.9681761556503421;
    msg.lon = 0.5871854264692669;
    msg.z = 0.7533364398957133;
    msg.z_units = 86U;
    msg.speed = 0.9989395575263399;
    msg.speed_units = 120U;
    msg.bearing = 0.7496498354777825;
    msg.cross_angle = 0.1400967287497742;
    msg.width = 0.6612514902580643;
    msg.length = 0.7679925163488555;
    msg.coff = 172U;
    msg.angaperture = 0.0037512515956362735;
    msg.range = 19080U;
    msg.overlap = 34U;
    msg.flags = 212U;
    msg.custom.assign("CZSAUWXIRGKYMEDWAJWEUUHOOJPFQUWKIZTTFPVNECLOGLAPAUTMXPTPFGVZNCMKXFTLFCJLYGIDURKQCYYSKJBHHZFWYCQGNJPLYODIVUBAGMMDYKESDYDZMBCSFXACNBGZQRLIFONXVNOAUIKZHEERLSIZMOQKCUEQWXIVORMSPFWDCBBQINLJGXHBIHMGRDWOWATRTLVVYXBKZJBQRLKJGSWTHPN");

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
    msg.setTimeStamp(0.5651946860013908);
    msg.setSource(45537U);
    msg.setSourceEntity(222U);
    msg.setDestination(51317U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.08577747759387266;
    msg.lon = 0.7496965861493012;
    msg.z = 0.45887195610494813;
    msg.z_units = 128U;
    msg.speed = 0.5950181046397893;
    msg.speed_units = 156U;
    msg.bearing = 0.6197082210075441;
    msg.cross_angle = 0.21325943225197463;
    msg.width = 0.4441539215733974;
    msg.length = 0.48600010585830755;
    msg.coff = 111U;
    msg.angaperture = 0.43604600463561416;
    msg.range = 23289U;
    msg.overlap = 177U;
    msg.flags = 137U;
    msg.custom.assign("UGFVNRSMFCLUZNXGTJFLSSXGDZYXMBDDOLVFFIDQOZSIAJIVLCKSYENRBFCXEHDATVSQOJIMRQTUICSVOACFNXJJWUOWUMIETDYWCUKGPORJYKTXDEPROUWATCHEIVEYPZHCBMYAALVBNZHRMQEXZRLGWFXHVJQTCQYCHRKLJFLNMGLAAHUTBNDWKBQASQBPSRKUJKVPDZROOZAPGHBENMWFPGZEKWDZIMNSXT");

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
    msg.setTimeStamp(0.8845787083786234);
    msg.setSource(63757U);
    msg.setSourceEntity(39U);
    msg.setDestination(38294U);
    msg.setDestinationEntity(57U);
    msg.timeout = 28349U;
    msg.lat = 0.9285480652696486;
    msg.lon = 0.19046133267603815;
    msg.z = 0.609745160191576;
    msg.z_units = 15U;
    msg.speed = 0.0759713145173696;
    msg.speed_units = 21U;
    msg.syringe0 = 134U;
    msg.syringe1 = 186U;
    msg.syringe2 = 161U;
    msg.custom.assign("UAEETKZBLHYLZCJKFXCXSCRUDGDDAMJOAENGSMKEKWOJZPU");

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
    msg.setTimeStamp(0.37251059797628006);
    msg.setSource(31586U);
    msg.setSourceEntity(45U);
    msg.setDestination(29673U);
    msg.setDestinationEntity(94U);
    msg.timeout = 36289U;
    msg.lat = 0.7201995178825764;
    msg.lon = 0.7571952186438586;
    msg.z = 0.8524449743686997;
    msg.z_units = 71U;
    msg.speed = 0.7013002756344208;
    msg.speed_units = 26U;
    msg.syringe0 = 116U;
    msg.syringe1 = 24U;
    msg.syringe2 = 237U;
    msg.custom.assign("NBJRKONFPBSVUZZQJDBFULDXSZZIPQTDLWICEYODIGHGPKZUWSEBZOOBQVIXPNAYXNRDCIVMNDHMFHKARSDXLJTSTMAMKEOYHRCAOZPQJLUXGYRRDADKVBNAEAPEMKFBUFFVAGCYMZWBNTEOLSHJSPIFKOUJLKGKCIXJWPRKMNZRACQHCZRXMSLXVOGBVTGETJFIOFYTPCTLHHUUWWVQEEXUWHVCLQXSBSTTYVWWQR");

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
    msg.setTimeStamp(0.9598053823989778);
    msg.setSource(4417U);
    msg.setSourceEntity(190U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(240U);
    msg.timeout = 62396U;
    msg.lat = 0.05624239657307917;
    msg.lon = 0.8710578646793237;
    msg.z = 0.22396228924952533;
    msg.z_units = 8U;
    msg.speed = 0.9284095813007431;
    msg.speed_units = 184U;
    msg.syringe0 = 132U;
    msg.syringe1 = 212U;
    msg.syringe2 = 125U;
    msg.custom.assign("DGDKBDUTOLVZTULQFFNYBLTAOHHSRBDFWZMWOMJXLOFWAYGJJDUXUTNPHITVJXKTWJNRVAFYAOPGTQHBYRUPG");

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
    msg.setTimeStamp(0.7317606445767386);
    msg.setSource(18932U);
    msg.setSourceEntity(197U);
    msg.setDestination(11102U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.03151300353600861);
    msg.setSource(32855U);
    msg.setSourceEntity(177U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.945345438167689);
    msg.setSource(54431U);
    msg.setSourceEntity(74U);
    msg.setDestination(8297U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.8086871540358336);
    msg.setSource(1632U);
    msg.setSourceEntity(139U);
    msg.setDestination(5087U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.3983524149419637;
    msg.lon = 0.2987870443118441;
    msg.z = 0.4894091719764261;
    msg.z_units = 98U;
    msg.speed = 0.7849395113136726;
    msg.speed_units = 62U;
    msg.takeoff_pitch = 0.7232190767888809;
    msg.custom.assign("PNTWJGPSYOVSUGYTEQNXXBNPCSHMGISSXMLEYAMJFUAMBYDKZCKCHDWVJYWAGJBALAARFRHCRGPXUUGAYEBHYLLZAFLMWFVGNNMHPFWCDBRMFOXDTEXTWOKEDRMVEVNOBJRILZROIZWZCUJCSUOFRASDQJQNUOTKQGXHSUFVNLYSWIPLRIQVQHJVPUA");

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
    msg.setTimeStamp(0.6431368877384412);
    msg.setSource(20532U);
    msg.setSourceEntity(159U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.12050286834983248;
    msg.lon = 0.23093956093576495;
    msg.z = 0.31528633116016136;
    msg.z_units = 97U;
    msg.speed = 0.46723910027126225;
    msg.speed_units = 15U;
    msg.takeoff_pitch = 0.2853620410124659;
    msg.custom.assign("XPSPVUTWUTIBVKQKNVVWVKEFYYDLVEHJNOOTACYHFTMYKKULIOUSUV");

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
    msg.setTimeStamp(0.22908438183841084);
    msg.setSource(56576U);
    msg.setSourceEntity(33U);
    msg.setDestination(19391U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.04123566955546354;
    msg.lon = 0.46265763954874894;
    msg.z = 0.6342088694746825;
    msg.z_units = 79U;
    msg.speed = 0.6508304905800689;
    msg.speed_units = 193U;
    msg.takeoff_pitch = 0.4961947532618667;
    msg.custom.assign("KBFWZDTPNYLRRAZINGEWCDAYQWDMONJYHJCWBUVEGQBCFVORUTZEAOIMQCUVBIZMFEWFEDIRRVSKODYHONWSCEPMBXILCMNYEIQVWOHNDJLGREQWFVSESLPOTFYUNPLQMABATGUDJLOLKJTPGCHBFDHOHTXARTHQACAWBMLUVCXXPQVYSSXK");

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
    msg.setTimeStamp(0.021580526149022616);
    msg.setSource(10594U);
    msg.setSourceEntity(81U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.09350158504571959;
    msg.lon = 0.5637336745799812;
    msg.z = 0.2276179371324658;
    msg.z_units = 182U;
    msg.speed = 0.11195986417806791;
    msg.speed_units = 212U;
    msg.abort_z = 0.7122852219388676;
    msg.bearing = 0.5442234532880387;
    msg.glide_slope = 14U;
    msg.glide_slope_alt = 0.43442909785763884;
    msg.custom.assign("QJUPUCXZFTOYWILDWTTXXJSYLTKGCDGRFHMQRBZVCVJDCWMSRUZASROKYXUAMMJJAKRUPEOHGVAGABRRFZKINNMO");

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
    msg.setTimeStamp(0.5661393490021286);
    msg.setSource(44897U);
    msg.setSourceEntity(97U);
    msg.setDestination(21326U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.04673261808282125;
    msg.lon = 0.8212244460657211;
    msg.z = 0.6652042750493772;
    msg.z_units = 69U;
    msg.speed = 0.03865210776250749;
    msg.speed_units = 220U;
    msg.abort_z = 0.7611025166344688;
    msg.bearing = 0.29622821617018125;
    msg.glide_slope = 8U;
    msg.glide_slope_alt = 0.2067785180600571;
    msg.custom.assign("KTJHSMMTSFMVNOMYWLDGFOYWGTIRWJSRMMMJXZWFHDLLVJDPCKAUEUPWLHYXBCBNPXGDEIQEUBATOTOPIQRUCXNKVZCKAYHYPQCHEQGHBNKJSAXPRBKFNQYPCELZFLIXULHYHRREGUBS");

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
    msg.setTimeStamp(0.5654028671822248);
    msg.setSource(40749U);
    msg.setSourceEntity(167U);
    msg.setDestination(29488U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.18310467212450154;
    msg.lon = 0.6133545415235249;
    msg.z = 0.19580034447136452;
    msg.z_units = 90U;
    msg.speed = 0.13338975885371818;
    msg.speed_units = 214U;
    msg.abort_z = 0.330748083600398;
    msg.bearing = 0.4919608971239522;
    msg.glide_slope = 123U;
    msg.glide_slope_alt = 0.5792014121537296;
    msg.custom.assign("ECGDNXKWZXIZIBFGFFDAYVG");

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
    msg.setTimeStamp(0.5717867271455795);
    msg.setSource(30308U);
    msg.setSourceEntity(253U);
    msg.setDestination(60404U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.16484767091006558;
    msg.lon = 0.0030420134730420045;
    msg.speed = 0.5269022262058779;
    msg.speed_units = 248U;
    msg.limits = 52U;
    msg.max_depth = 0.7239238812016655;
    msg.min_alt = 0.6910866079599407;
    msg.time_limit = 0.4084516805508981;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.541104212657438;
    tmp_msg_0.lon = 0.23902533248157343;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JYVVSYWSNPWREIUHGMWILPMOJCQCKRDRFOWRCUCWTLOAKJHVKMCZTLXUEKUHRGITUANEMXMLQBMEFMFDZQVVSONCSJBFAXJJHGZAMUXVIQPAVHNQITZBTEYLWHLKXRUYRKWXHEQEFCIYTJDRSLGIOFDIGSKZFSBDLBONKYFYVFAQREYXJPEMZHTNBSZNZCZACGGJPUSPBOGGOOD");
    msg.custom.assign("XYRNQWPSECRNVOFNUVKOMYGBLDSPMMIAMZEYODSVOLKWBLWPXQSIQNWVYJOEDEJFRBBTFUSJEXFHRWPUTHNGQHNCKEAUUVPKQVYZTKDOQBZWJIZWEKARJCERCOKGXTAVAXHGYTWAVBTUWMIJTFDFRLZKQHQXWYJIUIZPXSORAIGTGGXYFSVCKRSMFLCPXIMGNDQNIHOHADC");

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
    msg.setTimeStamp(0.16110209837113698);
    msg.setSource(45113U);
    msg.setSourceEntity(204U);
    msg.setDestination(53950U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.5187419905266885;
    msg.lon = 0.02055632683290487;
    msg.speed = 0.5181537209551816;
    msg.speed_units = 226U;
    msg.limits = 181U;
    msg.max_depth = 0.37242831501154916;
    msg.min_alt = 0.8227952695819177;
    msg.time_limit = 0.39499640469076924;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6759827011913937;
    tmp_msg_0.lon = 0.7355113702772751;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DZDTMWVDGYSTITORILLAQMNYSYDHTDSKXFYGNJBBPM");
    msg.custom.assign("MBVCTJQHUKVXOAGBAJLDPGJOYWHRLZLKAL");

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
    msg.setTimeStamp(0.7916749492337108);
    msg.setSource(63181U);
    msg.setSourceEntity(105U);
    msg.setDestination(36191U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.3908019168491027;
    msg.lon = 0.12428104144070728;
    msg.speed = 0.47023892700175784;
    msg.speed_units = 10U;
    msg.limits = 254U;
    msg.max_depth = 0.7656720601341114;
    msg.min_alt = 0.40563999727050715;
    msg.time_limit = 0.9840337579837352;
    msg.controller.assign("WLATULZVYORCZSJGZOVABCDRNRFMENEUGTEBIBUHCPIBWKOGQHWTYRXVRDMGQINBSILONUOZOPSPXGSLAFTTGJJYNCZMCBHZELSHFHVXMLTVQXVJIEEKPMYHKGMWVNWJCHMSSQBJCOLQTOLDMDDUHUAUUWFOEVIJKDFHFYNEEKGVQDXFWPAUGKSAJYADQKMCRICFAZVPPCTASWZTFNBJDAQSRYDXNBPYJGLQPRFZXYLEXWOXBTQPIKZ");
    msg.custom.assign("FDRMXGCQAWLRBTWVYPLECBFGRBEVASJTFPBUOGEDSTSCYICBGNYZVNQXWIKTLGCUBFWORFZYKVGHRQQDEVAROMKEGQPATUUSZGBIIWKQZLDKMHUDZUCUZXAEANHJCXQWATWHHPSLNPILMLUNBVFSFHMNZBXPURDHZOJLTVWQRLOCEDXYEYXVSMKGHJHRSXFVYWKRXCOKGACYOIETZYJP");

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
    msg.setTimeStamp(0.8739464323145294);
    msg.setSource(52293U);
    msg.setSourceEntity(195U);
    msg.setDestination(19835U);
    msg.setDestinationEntity(250U);
    msg.target.assign("XHTHJHUAPQBRWKDOPWLMIFAQZJMKBOGHLGTTSQWILTLMQGRPDBDYQVOWYKDHFWYOJCRDTCPXTEVVPSDSDOSNR");
    msg.max_speed = 0.7072937394804185;
    msg.speed_units = 16U;
    msg.lat = 0.5168047489979994;
    msg.lon = 0.9926779769054433;
    msg.z = 0.14518498184830642;
    msg.z_units = 253U;
    msg.custom.assign("JZBFRBMHEPXCBXXPFKVZUVCIFIXOGWUFVWYBMPRNQSFLEZIALSBKRUVSGRESRFOXOWOHMCVMOSYFPURKGIDHSYEGNLQLLMYHJWZVBMALTTIUTMPKLVKYEMXJTITBGQOIPAAYAJHEEJHZKGZCNSRWGZTWJHVMQQYDIZQNYWUDUWXGGXABNZYQUDKLBLTKRNAODQRTCUYPOFFDEQJNV");

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
    msg.setTimeStamp(0.19850618645550866);
    msg.setSource(56442U);
    msg.setSourceEntity(219U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(149U);
    msg.target.assign("KPUUWVUMJMPYAFOESZRWOUIPRWVVZPRKKGQIQJPCCJETNVFMIFDDPCNLANMSTTHZBXVIRQZQNFZGQRYEMCQVWKULEREZSUUKTAQBSTNFZVBJKZFNLGTAYJOBHLAXTBSCFPFLRURJWKMBQHLYAXVLNEFCJLECDXSDCYCXYHOYOO");
    msg.max_speed = 0.2453520606037526;
    msg.speed_units = 28U;
    msg.lat = 0.6360255318191651;
    msg.lon = 0.7202867359750913;
    msg.z = 0.24604655880490134;
    msg.z_units = 186U;
    msg.custom.assign("PNLWIEMGEOYTJSALDRXRCNEFESBDLMFCRVQKFGGOZIFIGJMVNMYKDUJZKBRURIWPRFMXRXEDFECLVPRWPHNCAGJUHPBVAXTVACFDTPNTJTMO");

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
    msg.setTimeStamp(0.533824131003993);
    msg.setSource(42070U);
    msg.setSourceEntity(250U);
    msg.setDestination(54583U);
    msg.setDestinationEntity(176U);
    msg.target.assign("VOLTSQFLZJNHDW");
    msg.max_speed = 0.8495143486313366;
    msg.speed_units = 243U;
    msg.lat = 0.5596097090150175;
    msg.lon = 0.7248849080474089;
    msg.z = 0.38777027842760503;
    msg.z_units = 166U;
    msg.custom.assign("GKSXJIMNKDMGVLYRRWHDAIJBUMWBCTSUSQBXWCYAXRRGPLQTUOZNFXDOOIECLPFPQHNPEYCBFOLFNEASLRDKZBCPXMHRUVGMDXTFSUSXVFZXJGZTZSKAOHUHULQWDXRMZEYQQVFWJTWPNRCCEHNQEOUDLLTTETVJ");

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
    msg.setTimeStamp(0.3801908874980853);
    msg.setSource(29858U);
    msg.setSourceEntity(240U);
    msg.setDestination(53566U);
    msg.setDestinationEntity(87U);
    msg.timeout = 13947U;
    msg.lat = 0.2456970438098548;
    msg.lon = 0.3108314329627546;
    msg.speed = 0.8982523228542825;
    msg.speed_units = 43U;
    msg.custom.assign("GYGPZZSTZXLLDHCOWFQOVKUDSMAIIIMJKVJHHXITUNPHRPOJLGOZWDTBESBXDSQZEBKVYSEGYTETSJNPKRERFQBBFB");

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
    msg.setTimeStamp(0.8518858089406786);
    msg.setSource(636U);
    msg.setSourceEntity(153U);
    msg.setDestination(59146U);
    msg.setDestinationEntity(57U);
    msg.timeout = 51106U;
    msg.lat = 0.20955005878539568;
    msg.lon = 0.6032309098108463;
    msg.speed = 0.4463333491279796;
    msg.speed_units = 129U;
    msg.custom.assign("FBPKVHBQXGXCEDLVZKZRXUWVRCKUMSSLLUTCNEBMKBEQZFJJOHJANJGRBIBEYQYAHYQPCLWIFLCUOINYLZKUJEPGCATOZIUFGGMWOOSN");

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
    msg.setTimeStamp(0.20991539976377582);
    msg.setSource(9200U);
    msg.setSourceEntity(92U);
    msg.setDestination(33232U);
    msg.setDestinationEntity(159U);
    msg.timeout = 28081U;
    msg.lat = 0.045881287644433555;
    msg.lon = 0.08976497651121651;
    msg.speed = 0.7230511991433242;
    msg.speed_units = 125U;
    msg.custom.assign("SKRMYBTARIXCD");

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
    msg.setTimeStamp(0.22386175300541133);
    msg.setSource(64916U);
    msg.setSourceEntity(147U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.458756931438668;
    msg.lon = 0.646872443866027;
    msg.z = 0.059442463216271446;
    msg.z_units = 125U;
    msg.radius = 0.261866540601018;
    msg.duration = 5946U;
    msg.speed = 0.03126261917023143;
    msg.speed_units = 237U;
    msg.popup_period = 36545U;
    msg.popup_duration = 49437U;
    msg.flags = 61U;
    msg.custom.assign("CZOFMBQSTIDQBJUGVIWZTNBSYJSBPCRDQLTPUPJMLJGWPI");

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
    msg.setTimeStamp(0.5356133743477701);
    msg.setSource(64060U);
    msg.setSourceEntity(254U);
    msg.setDestination(56717U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.16458335296564197;
    msg.lon = 0.5410889470182368;
    msg.z = 0.8642905607581204;
    msg.z_units = 84U;
    msg.radius = 0.08500434376334609;
    msg.duration = 52450U;
    msg.speed = 0.04397309088891199;
    msg.speed_units = 61U;
    msg.popup_period = 60314U;
    msg.popup_duration = 37165U;
    msg.flags = 171U;
    msg.custom.assign("BVXQIHRYMMFWOYJWVAZAEEGLCXJZWNZNZLXZGHULVGKKVVIDDREGCVRRQBJSMDHKOH");

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
    msg.setTimeStamp(0.5631517949613752);
    msg.setSource(5768U);
    msg.setSourceEntity(192U);
    msg.setDestination(48919U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.5603575386211216;
    msg.lon = 0.308290179702975;
    msg.z = 0.0030768665543076112;
    msg.z_units = 95U;
    msg.radius = 0.8076179919905744;
    msg.duration = 49673U;
    msg.speed = 0.9460454319638321;
    msg.speed_units = 246U;
    msg.popup_period = 8384U;
    msg.popup_duration = 25880U;
    msg.flags = 222U;
    msg.custom.assign("CWUJMUUNYVOAIFDLFAAZWGALZRMUXTTYCHGQHWRLDFIUGVHJIVOCVTKHFGBDMSLFTREHHCCOXJKOBPYLNSXBBFJRJOGLQBICWVXZEDUYLVVXWNNQCPJYYZPYEUBFEGSNDGZAGHPAPNSJLJKPCIKOOESZRTYRSOUITKE");

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
    msg.setTimeStamp(0.3927308709656404);
    msg.setSource(2492U);
    msg.setSourceEntity(156U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.22199455954194114);
    msg.setSource(27391U);
    msg.setSourceEntity(71U);
    msg.setDestination(51633U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.5528046365513829);
    msg.setSource(19606U);
    msg.setSourceEntity(69U);
    msg.setDestination(9774U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.22803915242924067);
    msg.setSource(5693U);
    msg.setSourceEntity(99U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(184U);
    msg.timeout = 48181U;
    msg.lat = 0.27094191369067444;
    msg.lon = 0.003247767211308039;
    msg.z = 0.007047509779521732;
    msg.z_units = 177U;
    msg.speed = 0.8798939445444043;
    msg.speed_units = 232U;
    msg.bearing = 0.73080403867919;
    msg.width = 0.5146313105721746;
    msg.direction = 198U;
    msg.custom.assign("PZNOUDKETSXIFTIYNPLPGEFCQAMURHVBJFTGPDCOZRXNKK");

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
    msg.setTimeStamp(0.695017431844093);
    msg.setSource(13065U);
    msg.setSourceEntity(106U);
    msg.setDestination(41967U);
    msg.setDestinationEntity(235U);
    msg.timeout = 37838U;
    msg.lat = 0.3993137075901275;
    msg.lon = 0.023555645349986776;
    msg.z = 0.3533091320934163;
    msg.z_units = 27U;
    msg.speed = 0.2520309684808725;
    msg.speed_units = 209U;
    msg.bearing = 0.4184099672581638;
    msg.width = 0.45169454768718476;
    msg.direction = 204U;
    msg.custom.assign("HBQCYDLXAXFBAYLAMODUQUKUPTTAQBSHEPDMEXJWFIKWFNITVRAQNHQRIXEIXYJWKZGVYYSVOJULCONLQQVVAMECJBOJZXHPSLZVRUGCEGQPXBFJPNIHWKWLHXJCBORSOTEZKJLZJEIXDAHVYHBMRCSLVUMKACDFOLYSUPDFGQUQMEVCWSPNMREYHSRFYWSWZ");

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
    msg.setTimeStamp(0.706087465031779);
    msg.setSource(23570U);
    msg.setSourceEntity(80U);
    msg.setDestination(62774U);
    msg.setDestinationEntity(61U);
    msg.timeout = 39245U;
    msg.lat = 0.4936229800393168;
    msg.lon = 0.4874498895975278;
    msg.z = 0.3988271766489663;
    msg.z_units = 146U;
    msg.speed = 0.51349910041205;
    msg.speed_units = 0U;
    msg.bearing = 0.7353977364573138;
    msg.width = 0.5382528869278497;
    msg.direction = 66U;
    msg.custom.assign("WMMDCMBVRJDPPDLQYOFPSCJFZKMUWXDDFQTRFHPQLWOYSBSIKUJVSXPKTVOBDMEMNJUWHQUUGCLRNVMCYHWCQHYPQXLHRTLQLCIJCEWSZDFHACBHMEXTTVGGFRWWVDTEOZGPLLGYGEOUNZGAENTAWINOFBNT");

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
    msg.setTimeStamp(0.38543453621941703);
    msg.setSource(7564U);
    msg.setSourceEntity(188U);
    msg.setDestination(39652U);
    msg.setDestinationEntity(212U);
    msg.op_mode = 203U;
    msg.error_count = 222U;
    msg.error_ents.assign("SUKXAPCRVRDPKBSNXCQIHADOTBNZJAGDZHTKLVQCGNWJEUXDUJRYBLOPXSJNRLBWTECCDOWXNFJBOHVILQBCIFRPFPUABYYKUUTCXTVEITGVRXAMQLWFELKWMTZNWKPYSFIKFEAZDYMJHNKFVQESZLGIWUENIADDZYISWMWPBETRKWFGYGTBHIUQEOYRRCHQCMPAOQZLHSUJSHHIBMFOMXQVSJZOP");
    msg.maneuver_type = 36197U;
    msg.maneuver_stime = 0.38556083335292657;
    msg.maneuver_eta = 50252U;
    msg.control_loops = 3297425691U;
    msg.flags = 119U;
    msg.last_error.assign("MGKYLYQJDGSTXMLAJRCGGZWXPVNMVONDLTBUTGHOKJFCBCNIEGFEKISTTBJXVGTWZFVPWOWQGAYPEOZSCOURTOWCEPTEHBASURSYBCDPJIDCXWSUMZWHNWYKEZBMJZDAMAJIECDNAAPVXUPRMPNOJTVQ");
    msg.last_error_time = 0.3288752159584205;

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
    msg.setTimeStamp(0.8400534535159859);
    msg.setSource(1796U);
    msg.setSourceEntity(85U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(82U);
    msg.op_mode = 85U;
    msg.error_count = 90U;
    msg.error_ents.assign("SDBVQRTCDEDZGMYKADCBHWSGWVTNNTDTPZAUNXAUTOFFNMHUXPVVKRBARHDIBMJYEINZPLKBHCSOHOGICGXIGEKCAYPKAFCKIWMKLEYHBLMSUKPPBDYEPAVQIZJXWHUBGOFUOYOOZNGZFSFSCJRQNSRMMLVSNDBXTATOEXNRXIXLJZFWJYVETJXIQVHYGDXPWYTMPJGVQHQAQFYPKCWVRWZUIOSWLMEGLQRCLJTJADRUEZIMFZOL");
    msg.maneuver_type = 7920U;
    msg.maneuver_stime = 0.7317424033960859;
    msg.maneuver_eta = 24511U;
    msg.control_loops = 2884047728U;
    msg.flags = 6U;
    msg.last_error.assign("QFQOMWZYYJLDJZALABEJJCNANAWLJSHDOBEDARTGZDCLPUJOEVTYTBPPUQQWKXBTGBFKUOFKYRROGOVEZBFHJVPJYVVSGCXBLXOCFSNESKCHOYNMIDLMARLUGLCEYRGXLPUMPUP");
    msg.last_error_time = 0.7981447099693966;

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
    msg.setTimeStamp(0.4115915969998054);
    msg.setSource(4595U);
    msg.setSourceEntity(98U);
    msg.setDestination(49420U);
    msg.setDestinationEntity(107U);
    msg.op_mode = 43U;
    msg.error_count = 220U;
    msg.error_ents.assign("YAWQBQONUVVRHSIZLQCJDGWXQBCERAVDFKGAISQKLOHSYHCOCILEFVICTPXWKRPHCIFMTYTDVMYITUUGAWKINGNPEGGTWWYFZASAOBMJZCERJXDNJEKSKPESRHEV");
    msg.maneuver_type = 10152U;
    msg.maneuver_stime = 0.39475158757866735;
    msg.maneuver_eta = 45134U;
    msg.control_loops = 4251240170U;
    msg.flags = 236U;
    msg.last_error.assign("HRSOSHKRYCTFNQVPEMMNKDUAZWQOGDOLNWFACEEIQTETZYXYOSBUYLIGPGVJOUHBUQZMOPRPPGCRTWGQNCWFPAYZODUFFMJFMKJTFMGLBLGRXYELBK");
    msg.last_error_time = 0.9620493347309241;

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
    msg.setTimeStamp(0.07328126818953096);
    msg.setSource(18740U);
    msg.setSourceEntity(70U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(177U);
    msg.type = 144U;
    msg.request_id = 59120U;
    msg.command = 207U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.1829417583942401;
    tmp_msg_0.lon = 0.548012310488079;
    tmp_msg_0.z = 0.5127072994499887;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.radius = 0.4405202647205416;
    tmp_msg_0.duration = 39534U;
    tmp_msg_0.speed = 0.6209091374852578;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.popup_period = 31093U;
    tmp_msg_0.popup_duration = 46696U;
    tmp_msg_0.flags = 119U;
    tmp_msg_0.custom.assign("REEUMZZQJDPIDALTUHSGFPISFTMPBTMTQSHVIWIIKJGFBQITSHXUNYSZEDHMVUKDXYMEJGJVKQZHCPFXWCSDAAQAFYKRYCLZENZCLUXVBQTLGHAQVLNBNWXRPGORXYMKRZHHEYJWUONCKOUTGTYWEA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20313U;
    msg.info.assign("LCJUOBCGNJUDKXVINSTWSIOMHJHQIFPPSZUIKENPPMCXUNTHZKOBAVRIFMTPNJSTAXSAHFDZNBERYNMEGZHOQDTIBUXPO");

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
    msg.setTimeStamp(0.41374299619492827);
    msg.setSource(10780U);
    msg.setSourceEntity(230U);
    msg.setDestination(33435U);
    msg.setDestinationEntity(215U);
    msg.type = 132U;
    msg.request_id = 6636U;
    msg.command = 66U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.44239154751452614;
    tmp_msg_0.lon = 0.2739599013214645;
    tmp_msg_0.z = 0.4147254452171991;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.speed = 0.8723488772149903;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.bearing = 0.8847667882859961;
    tmp_msg_0.cross_angle = 0.3750420935561889;
    tmp_msg_0.width = 0.10157911077090831;
    tmp_msg_0.length = 0.108972889292135;
    tmp_msg_0.coff = 18U;
    tmp_msg_0.angaperture = 0.16727967816086708;
    tmp_msg_0.range = 30163U;
    tmp_msg_0.overlap = 37U;
    tmp_msg_0.flags = 158U;
    tmp_msg_0.custom.assign("NTWSOITKTOUQRSVYHEBTYDQAHQQLNFTPLKLAVYIOXZUPYROVJMSXCKVWKJZBGHZNRVOSOXEJNTUDYMAGWQQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2332U;
    msg.info.assign("LDJSXKPUTIFEBUJRGIWHYRHJMNKBMJLCHHTUXYQAIMEKLUKIGCRDZZHDHIBAFFZVFAOQPFXYSWPLM");

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
    msg.setTimeStamp(0.282639243882178);
    msg.setSource(58822U);
    msg.setSourceEntity(150U);
    msg.setDestination(35300U);
    msg.setDestinationEntity(236U);
    msg.type = 239U;
    msg.request_id = 2290U;
    msg.command = 84U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.3946951978294404;
    tmp_msg_0.lon = 0.8409508593401915;
    tmp_msg_0.speed = 0.7233501722846798;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.limits = 80U;
    tmp_msg_0.max_depth = 0.722898816378367;
    tmp_msg_0.min_alt = 0.6091426749685145;
    tmp_msg_0.time_limit = 0.08725167806405398;
    tmp_msg_0.controller.assign("ZLGMOLBHKLAPRSHDYMUZFCBXNRLYHDOCXUNWLQWVHUWTZLMJQYRYRNITBDKVJASVEUQRMNNFMRCDGKRFIVAIZCTLDNYUYAWHGCWNJIZXFGUTKGEVIRQSASATFBJKBEQIYVEASCJPZZGLPKOMNJGTFNADCQXOTPLBPWGLIRKTGKEMDHXUCOQOVPMAJDMUSWEFE");
    tmp_msg_0.custom.assign("ZHFMKDFAQBOUTEFZXLYMPHILMMUADOJPABHSRIXUSXSZZKJZPIOAETKDOGZILIAUWVHVRLTVYGPWYAIWNRCYSMNBSQIRDRMXXCDXHUQHSDVGCSJFCUOCDTJUOXVWBTHQFCBVQSEWGNNEPNZDEEPZJWWLLKQJJEANACQPCMTVIDFNRUBGTPK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19709U;
    msg.info.assign("DJETEOUCTXQMARKEQYIIRCDAJVHGWDZLLEKIYITGWWPJBVHTNBSFPJKJLGAANWRXKTOGIHKYYOXUFPFJFDDOYOEAMGRWBBFOVXXSNIXNVLMNWWQGZVVDNEGFTXUJLJNOKJBBPVONDHPQUPCBRYFAVQRCJUKEHNIIZSRILDMYVZNASCHOYQZLUBCGZWYKUCQMMAVHPUFPKHSMFETUPWZLLZLSGQBRIMYDTEAESOKSCQCZTSTRBAHWZPCXMXQSMG");

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
    msg.setTimeStamp(0.7281832280939545);
    msg.setSource(5608U);
    msg.setSourceEntity(62U);
    msg.setDestination(32926U);
    msg.setDestinationEntity(28U);
    msg.command = 22U;
    msg.entities.assign("EYJIRSHVPLNHWIUFMIUNCQGRSBMBQFGKFDQSPSVBQECHBDHYTMXMZLUBSXIQVXNCOWZLMRIGRLVAUTENDTLWRDHHLEIXOKFAESC");

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
    msg.setTimeStamp(0.4237758146137919);
    msg.setSource(54779U);
    msg.setSourceEntity(86U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(27U);
    msg.command = 103U;
    msg.entities.assign("JCKIHFXICYFHGMSCQATDVXOJZIDWWRWOOFIDHKORMUTBJXVDPNKKARMYLVKBDBXAOPTSNPPUDKAOVSYJUXFHHIRAFBNUXGSULSUIOJDGXJEETOOVZEQYRKNYZHNLCFFPM");

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
    msg.setTimeStamp(0.9469916581748871);
    msg.setSource(60030U);
    msg.setSourceEntity(241U);
    msg.setDestination(9435U);
    msg.setDestinationEntity(150U);
    msg.command = 242U;
    msg.entities.assign("MAYPBLRBGNJTUNTVROIENVCGUBXECLPKGRJCFWLTOZVYQKHGKGXQPWPFYXQDPNEGHHBKIJDCEJRZFISLVKLXAASUPFDDHIWOSUVMNQZHTFTCAHHNGBWLAAONCLAJYTCHEWVZJPWAIQRTQ");

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
    msg.setTimeStamp(0.6742756040330254);
    msg.setSource(63837U);
    msg.setSourceEntity(130U);
    msg.setDestination(1766U);
    msg.setDestinationEntity(161U);
    msg.mcount = 104U;
    msg.mnames.assign("HAXLINBYCFRJJVVIPMZLVEPSUCLFHETYNJJQGOQEWORTMZDRHWQAHNIYEABCIQTXNDKYTJDPEZDRROKJSFWWXYVHMSWUHOXYGBXRLIQSFMIIPRLESTQZGYTXJSUV");
    msg.ecount = 128U;
    msg.enames.assign("VZIKQPROOZYIUGHMUPSURVNUUIAJWNSHAJFYLBELDXAXYYZNFOAHLSGSGSEQAPTJWVGGTYBGDHBPMTYDVWPQJCALMNHSYOUCEVYZNRJKWCJJSEBAOZRFUGSVVRGKKYONFCMQEIXWEEXANZCFPNKXAMMFXQKDMTOMZUQIFJRWQNDUXUNLBDCVEQXMSMZCHXFHLPRRGPADCIKVWQKBCYILDFHBOPTWXOSGPJTTVIHRDWKWFTBQLLTBRIHZJEDKI");
    msg.ccount = 93U;
    msg.cnames.assign("BRCNFBYYZOMJULQSAGRIRFETZFDIDKOOLYUQTSXSRVMMDPUXDSUFAXPHBFDRLUVLQQEWHEGPLUVCIWMVHAFLUWAHGKWRAYBDWYIDTKSUHYWQZNJYTZSCPOTCGQVHWONQGTTIJOOCHIEGCABKBZNVJAUFCASXFQKMZRPKKGNSDRBEAPJMROYLTFJVZNJENGTQUDLYFZPNGVYXEOWVCISAPOPKL");
    msg.last_error.assign("GKPLYSDRNCUPHXWMHTSJBJAJJBHFHNB");
    msg.last_error_time = 0.7192053823756954;

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
    msg.setTimeStamp(0.22088876495891596);
    msg.setSource(35177U);
    msg.setSourceEntity(243U);
    msg.setDestination(40068U);
    msg.setDestinationEntity(206U);
    msg.mcount = 180U;
    msg.mnames.assign("TGQADFYSHSOMPCBNYIIOAZMFAZPRRAMCKVJTLJQWXJRNQAULBVJSKCBBOWFVAGVOIJLCMPJNFKQQVWUGBPKFAYXOOETDZDSURWLWHHUPMDIHVKQXNBZHUYMWDDEXSAHRPFMRFMUEJUIFWKVZOS");
    msg.ecount = 145U;
    msg.enames.assign("CUMAWPBJIYVZVHAZCAXLTVFOFUEAGLOIQCDOATMPYLWVCUXB");
    msg.ccount = 167U;
    msg.cnames.assign("ADZNJGQLDTOLMTOPJKYKKUYENBECSHPHUGDPIVSLPZAHCOLKKJURGATJFQZYLRJMOCEKJFVQUTIJTEQMXUCRVVYRGBIFYTYWIMNFEEUXVLXMCZXTOUSGZHFWVWCHEDLAOOTGTGAWLSW");
    msg.last_error.assign("MXPEZSJHEOARCQLMLQNGHDPVQJANIKVBRIILALZEEVCFBWWSYSWJLBNQKIUUBVLWGCTPKHLRFQXBZCUSYAAXFICDFNDDMXUFBGIYXRRUTAKDDOHITCSYJYGWRBGZPITRKUXVSUYZMQOHQFNWCZRGZKMXRUFYWXLQK");
    msg.last_error_time = 0.33170240200050294;

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
    msg.setTimeStamp(0.7281350397369508);
    msg.setSource(10001U);
    msg.setSourceEntity(81U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(195U);
    msg.mcount = 73U;
    msg.mnames.assign("HZYRXTYLNJBXKZUMIYFECTMWJDXDXSQ");
    msg.ecount = 234U;
    msg.enames.assign("MLFXVMYCJHWFPTXHGWRELTKYORIQLOCJFBLRTFMFGHITDEQZAUBAQFALXUSHPCTMCONVCRRNWVKCMPGFBQ");
    msg.ccount = 218U;
    msg.cnames.assign("HVKFOJUTYHRKQNXLDMILMOOZCRIROKJETWVTZGSNXJMNOYCBJHWOMPUFACWMREYMQMRDTSVJPZLVSOPTISIXUTILDKHUXQQBKTSSRHZFGUNEDGTAFGJCHCYHIBQCBKNUAGDZRXQZPZPGGXEOPWNVCBLYVYGMMNKRIAXNYAQXPHFEADC");
    msg.last_error.assign("UNRYKAMAKEGZTXMESILPBCGHFVJXEDQWNWPLOLECTRRWTAMHDGVPISLYFCNSZVFOIUOHDTLNOIAICDZKERZRDOFKJEOJFAUDUWZBLAGBGSQLBSXFUXVPSPHNIQQLJNTQ");
    msg.last_error_time = 0.4910340247881696;

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
    msg.setTimeStamp(0.23191777242739398);
    msg.setSource(2876U);
    msg.setSourceEntity(133U);
    msg.setDestination(20760U);
    msg.setDestinationEntity(172U);
    msg.mask = 182U;
    msg.max_depth = 0.6468193833910955;
    msg.min_altitude = 0.038907149805921803;
    msg.max_altitude = 0.05399202363921718;
    msg.min_speed = 0.7265289228437863;
    msg.max_speed = 0.2841597249079286;
    msg.max_vrate = 5.33186787776696e-06;
    msg.lat = 0.08973400852009739;
    msg.lon = 0.8390167880968135;
    msg.orientation = 0.6906717136323015;
    msg.width = 0.26277058047379576;
    msg.length = 0.28310119789331833;

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
    msg.setTimeStamp(0.4704548712574871);
    msg.setSource(40678U);
    msg.setSourceEntity(180U);
    msg.setDestination(8044U);
    msg.setDestinationEntity(111U);
    msg.mask = 4U;
    msg.max_depth = 0.8700264600650648;
    msg.min_altitude = 0.4780833908937855;
    msg.max_altitude = 0.963302192673103;
    msg.min_speed = 0.11394675723760661;
    msg.max_speed = 0.7677457930575293;
    msg.max_vrate = 0.1265680516769997;
    msg.lat = 0.09313700416234649;
    msg.lon = 0.37614278614769747;
    msg.orientation = 0.19372961589764037;
    msg.width = 0.4376038704528563;
    msg.length = 0.44955739241854265;

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
    msg.setTimeStamp(0.4222499970655057);
    msg.setSource(45910U);
    msg.setSourceEntity(27U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(194U);
    msg.mask = 98U;
    msg.max_depth = 0.6180750686229347;
    msg.min_altitude = 0.38556111212096145;
    msg.max_altitude = 0.39972391988320133;
    msg.min_speed = 0.1805014655381998;
    msg.max_speed = 0.36286679961722124;
    msg.max_vrate = 0.058818057534005264;
    msg.lat = 0.33119502375992893;
    msg.lon = 0.7691021594631007;
    msg.orientation = 0.17616320187950885;
    msg.width = 0.2274683354641972;
    msg.length = 0.9172614428172922;

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
    msg.setTimeStamp(0.6249566137297208);
    msg.setSource(44082U);
    msg.setSourceEntity(166U);
    msg.setDestination(18586U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.4559418046033229);
    msg.setSource(9388U);
    msg.setSourceEntity(52U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.29008549702185393);
    msg.setSource(53137U);
    msg.setSourceEntity(241U);
    msg.setDestination(35169U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.7984436627707481);
    msg.setSource(46969U);
    msg.setSourceEntity(45U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(246U);
    msg.duration = 14159U;

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
    msg.setTimeStamp(0.49339323419353864);
    msg.setSource(47792U);
    msg.setSourceEntity(168U);
    msg.setDestination(58497U);
    msg.setDestinationEntity(105U);
    msg.duration = 42510U;

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
    msg.setTimeStamp(0.2604076010376186);
    msg.setSource(9927U);
    msg.setSourceEntity(128U);
    msg.setDestination(50952U);
    msg.setDestinationEntity(18U);
    msg.duration = 5531U;

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
    msg.setTimeStamp(0.7235355173747972);
    msg.setSource(58385U);
    msg.setSourceEntity(65U);
    msg.setDestination(38076U);
    msg.setDestinationEntity(183U);
    msg.enable = 123U;
    msg.mask = 2051821945U;
    msg.scope_ref = 3001862277U;

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
    msg.setTimeStamp(0.16998338933932056);
    msg.setSource(56907U);
    msg.setSourceEntity(47U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(69U);
    msg.enable = 105U;
    msg.mask = 771924668U;
    msg.scope_ref = 4258690713U;

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
    msg.setTimeStamp(0.5952873685301096);
    msg.setSource(53999U);
    msg.setSourceEntity(15U);
    msg.setDestination(51378U);
    msg.setDestinationEntity(219U);
    msg.enable = 166U;
    msg.mask = 2450638236U;
    msg.scope_ref = 1012270700U;

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
    msg.setTimeStamp(0.2261697039388879);
    msg.setSource(20584U);
    msg.setSourceEntity(226U);
    msg.setDestination(25954U);
    msg.setDestinationEntity(145U);
    msg.medium = 106U;

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
    msg.setTimeStamp(0.301939859556131);
    msg.setSource(62417U);
    msg.setSourceEntity(241U);
    msg.setDestination(49465U);
    msg.setDestinationEntity(6U);
    msg.medium = 1U;

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
    msg.setTimeStamp(0.6643491475408316);
    msg.setSource(4414U);
    msg.setSourceEntity(194U);
    msg.setDestination(41626U);
    msg.setDestinationEntity(243U);
    msg.medium = 24U;

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
    msg.setTimeStamp(0.6116939873233073);
    msg.setSource(53105U);
    msg.setSourceEntity(20U);
    msg.setDestination(6036U);
    msg.setDestinationEntity(226U);
    msg.value = 0.04759516317735346;
    msg.type = 254U;

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
    msg.setTimeStamp(0.2651567977212076);
    msg.setSource(33170U);
    msg.setSourceEntity(125U);
    msg.setDestination(25735U);
    msg.setDestinationEntity(34U);
    msg.value = 0.9907838140943965;
    msg.type = 150U;

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
    msg.setTimeStamp(0.04093791929037083);
    msg.setSource(3911U);
    msg.setSourceEntity(137U);
    msg.setDestination(1019U);
    msg.setDestinationEntity(103U);
    msg.value = 0.07216200014584528;
    msg.type = 156U;

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
    msg.setTimeStamp(0.37400654332780603);
    msg.setSource(60124U);
    msg.setSourceEntity(232U);
    msg.setDestination(11355U);
    msg.setDestinationEntity(239U);
    msg.possimerr = 0.10552668301562285;
    msg.converg = 0.2886116817816121;
    msg.turbulence = 0.3607554457465222;
    msg.possimmon = 158U;
    msg.commmon = 209U;
    msg.convergmon = 149U;

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
    msg.setTimeStamp(0.7564200639374478);
    msg.setSource(60429U);
    msg.setSourceEntity(92U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(40U);
    msg.possimerr = 0.7293638156785766;
    msg.converg = 0.5645625602102451;
    msg.turbulence = 0.7663792946454281;
    msg.possimmon = 126U;
    msg.commmon = 207U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.07135954498244756);
    msg.setSource(54921U);
    msg.setSourceEntity(11U);
    msg.setDestination(30557U);
    msg.setDestinationEntity(251U);
    msg.possimerr = 0.8855364524785808;
    msg.converg = 0.5741303290985368;
    msg.turbulence = 0.0967858359816276;
    msg.possimmon = 76U;
    msg.commmon = 138U;
    msg.convergmon = 232U;

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
    msg.setTimeStamp(0.318887939885275);
    msg.setSource(36262U);
    msg.setSourceEntity(127U);
    msg.setDestination(46585U);
    msg.setDestinationEntity(47U);
    msg.autonomy = 140U;
    msg.mode.assign("NBSFHLCHLTLDHNEJJEGIUUPBMEBIBMDNRVOQLSGXRRDSSZPPCEGDXFJIELYVOFZEDHJAJXWXWTNQUYPJIAORAMZBEQFOPHSIO");

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
    msg.setTimeStamp(0.017708557298213634);
    msg.setSource(38485U);
    msg.setSourceEntity(197U);
    msg.setDestination(20526U);
    msg.setDestinationEntity(249U);
    msg.autonomy = 200U;
    msg.mode.assign("LSHXMBCGMCGAAOFBSJFAZKZFRBIJYHPNNLYXSFTJUPGRFZ");

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
    msg.setTimeStamp(0.478710953203218);
    msg.setSource(18371U);
    msg.setSourceEntity(150U);
    msg.setDestination(9590U);
    msg.setDestinationEntity(155U);
    msg.autonomy = 243U;
    msg.mode.assign("LIYEKIJITOXSNLHOIPNTJXZAZHMWXPLLGASKSEWBXZNRGOQFGYNARVJGXRGVTXAIYWMVSBQEVXVSIYRJLQOL");

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
    msg.setTimeStamp(0.5402814057853772);
    msg.setSource(8623U);
    msg.setSourceEntity(17U);
    msg.setDestination(51537U);
    msg.setDestinationEntity(140U);
    msg.type = 143U;
    msg.op = 44U;
    msg.possimerr = 0.4557836533906977;
    msg.converg = 0.3999960754512307;
    msg.turbulence = 0.07527432215197682;
    msg.possimmon = 232U;
    msg.commmon = 169U;
    msg.convergmon = 177U;

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
    msg.setTimeStamp(0.294053816613169);
    msg.setSource(33520U);
    msg.setSourceEntity(222U);
    msg.setDestination(25707U);
    msg.setDestinationEntity(254U);
    msg.type = 62U;
    msg.op = 88U;
    msg.possimerr = 0.6801502978840401;
    msg.converg = 0.4421767630910718;
    msg.turbulence = 0.7873224957145422;
    msg.possimmon = 66U;
    msg.commmon = 164U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.6867129025126923);
    msg.setSource(54447U);
    msg.setSourceEntity(23U);
    msg.setDestination(65252U);
    msg.setDestinationEntity(233U);
    msg.type = 125U;
    msg.op = 45U;
    msg.possimerr = 0.23284359205716154;
    msg.converg = 0.49362098545438415;
    msg.turbulence = 0.9913879027924961;
    msg.possimmon = 224U;
    msg.commmon = 180U;
    msg.convergmon = 249U;

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
    msg.setTimeStamp(0.8815776429347671);
    msg.setSource(60597U);
    msg.setSourceEntity(74U);
    msg.setDestination(48844U);
    msg.setDestinationEntity(56U);
    msg.op = 218U;
    msg.comm_interface = 58U;
    msg.period = 10555U;
    msg.sys_dst.assign("EMADIVKDIKJZMAVJFLQTBRPDBMWAQOSXQCKMXRGHKWXSORPPNMIXNWYGPLOODXFYHOBNKNHAKYPTCSLUWPDMYRLUGVJYEUTHAEGJEUCAJKNZRVBYFEXXPEMESCWMRHIUFYAUOBIFHNTITAGZZZJKQSZ");

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
    msg.setTimeStamp(0.05914544312063463);
    msg.setSource(39602U);
    msg.setSourceEntity(243U);
    msg.setDestination(4426U);
    msg.setDestinationEntity(253U);
    msg.op = 59U;
    msg.comm_interface = 29U;
    msg.period = 35909U;
    msg.sys_dst.assign("XAZWKPEWVCQUBHNUQAMRCARUDYTOKBSDVGLJIXQYEHQJRCYJFZOGZLLOUQEXZGXCBRYDFSTRZJKBUPFKNQAWKNYQTNFITPKMIHGJSBYYNOJGEIGGMWRGHQSHHEAMNLNDOFMWVIJETWVIGSNLLIPVTMHTXTO");

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
    msg.setTimeStamp(0.16091363795296387);
    msg.setSource(25515U);
    msg.setSourceEntity(245U);
    msg.setDestination(34782U);
    msg.setDestinationEntity(231U);
    msg.op = 162U;
    msg.comm_interface = 246U;
    msg.period = 19431U;
    msg.sys_dst.assign("UQMJIRAJMIQVRYHKIJPZVXTHNKZZBUTOHTAWOAMKSTPLXOGZPQIRFFKCOCNPKYJFMQLLDSAYOYTPADGNZGBLXVDSWGKNWUWIVNVHZSXXPWIXDHFRYTU");

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
    msg.setTimeStamp(0.6167263215296725);
    msg.setSource(47516U);
    msg.setSourceEntity(198U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(250U);
    msg.stime = 1071406711U;
    msg.latitude = 0.8297543690557988;
    msg.longitude = 0.5277991544073181;
    msg.altitude = 16231U;
    msg.depth = 3801U;
    msg.heading = 24502U;
    msg.speed = -18485;
    msg.fuel = 106;
    msg.exec_state = -81;
    msg.plan_checksum = 26213U;

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
    msg.setTimeStamp(0.5761932172159943);
    msg.setSource(43861U);
    msg.setSourceEntity(24U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(136U);
    msg.stime = 2243828744U;
    msg.latitude = 0.457453268470576;
    msg.longitude = 0.7889162406975986;
    msg.altitude = 14680U;
    msg.depth = 11705U;
    msg.heading = 54213U;
    msg.speed = 9882;
    msg.fuel = -100;
    msg.exec_state = 126;
    msg.plan_checksum = 53504U;

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
    msg.setTimeStamp(0.3433536941694847);
    msg.setSource(26580U);
    msg.setSourceEntity(90U);
    msg.setDestination(45411U);
    msg.setDestinationEntity(56U);
    msg.stime = 2653759161U;
    msg.latitude = 0.7311398271981997;
    msg.longitude = 0.5985974002695924;
    msg.altitude = 30873U;
    msg.depth = 6579U;
    msg.heading = 61314U;
    msg.speed = 6560;
    msg.fuel = -59;
    msg.exec_state = -57;
    msg.plan_checksum = 51727U;

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
    msg.setTimeStamp(0.8513971587807684);
    msg.setSource(11543U);
    msg.setSourceEntity(165U);
    msg.setDestination(13401U);
    msg.setDestinationEntity(151U);
    msg.req_id = 12643U;
    msg.comm_mean = 33U;
    msg.destination.assign("JIROYCCHXFBWBCNCYJNQVQCTAGQCRODSKPBEQOVSMACMUOYCTRUHXQOYTKEDNROLHWWHIUSLNMMUHIVAPMLVBEOMPTZIDPNZENJAHUMJDVBWIRFTMVKLBYTNBIFJUZWNIRGLQPKVGZVTSPEXRVWWAPJJQEBRXIJJBPGGSOEUZKXWUDXD");
    msg.deadline = 0.536193603071431;
    msg.range = 0.5315166311606542;
    msg.data_mode = 19U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.08865955914651402;
    tmp_msg_0.lon = 0.8155074145625365;
    tmp_msg_0.z = 0.9196968118624858;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.radius = 0.4191380268260132;
    tmp_msg_0.duration = 15182U;
    tmp_msg_0.speed = 0.4465667817162531;
    tmp_msg_0.speed_units = 97U;
    tmp_msg_0.popup_period = 11908U;
    tmp_msg_0.popup_duration = 44769U;
    tmp_msg_0.flags = 44U;
    tmp_msg_0.custom.assign("PFCOAQHVOAUJWZCRIWPAFLXZBFYNEYUEEPQAYMHWLKIKPRHGZUVMVGJHJESXRXZFYMJAGBVBEJTQWFBMGXVFDUXWQOQOXEHXLEOUBGFBBLVIRHHBFSITSRSNYZBIRTGWCTXBNMPYUTODPUIVKWDVNKNRCKQTJLTTIDGVPPQMH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UGKOTEYSSJDMVKFQACWFXE");
    const char tmp_msg_1[] = {28, -110, 89, 2, -89, -121, -62, 126, 119, -59, 23, 48, -26, -120, -87, -57, 37, -86, 53, -30, -54, 14, -73, -107, 102, 69, 101, 105, 13, 55, -103, -78, 113, 21, -81, 95, -95, -27, 51, 49, -46, -118, -95, 82, 43, -90, 95, 88, 76, -87, -64, -92, 116, 92, -126, 97, 53, -88, -102, 38, 32, -58, -46, -40, 32, -83, 4, 43, 26, 38, -82, -128, -121, 109, -47, 98, 45, -4, 85, 76, 122, -45, 72, -24, 85, 17, -46, 90, -87, -6, 50, 79, -113, -25, -63, 26, -75, -52, 40, -105, 41, -114, 71, -102, 41, -51, -95, 86, 75, 122, -111, 125, -42, 15, 58, -84, -67, -61, -89, 56, -2, 34, -49, -84, 1, 126, 91, -59, 5, -54, -94, 112, -41, -23, 47, -75, -77, 28, -128, -68, -99, 111, 89, -5, -123, 7, 81, -22, -95, -82, 50, -116, -7, 39, -6, 72, -90, 108, 88, -112, 117, 35, -15, 121, -89, -10, -47, 84, 23, -74, -66, -26, 90, -16, 120, -40, 49, -38, -19, 104, 124, -73, -119, -10, 2, -4, -19, 57, -40, -56, 125, -10, -14, 20, 122, 35, -6, 63, 125, -72, -113, -7, -77, -70, 93, -40, 64, -53, -8, 62, -81, -89, -69, 60, -54, -4, 72, 16, 120, 88, -111, -47, -30, 74, -26, -12, -38, -98, -73, -88, -8, 107, -42, -28, 13, 45, -120, -101, 0, 66, -87};
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
    msg.setTimeStamp(0.8500182926790733);
    msg.setSource(60566U);
    msg.setSourceEntity(77U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(195U);
    msg.req_id = 53130U;
    msg.comm_mean = 116U;
    msg.destination.assign("MRUHXBYLZDHMLSVZEGISFQHEAYFPDIGIFCTWAZOFDDTKHDLFWKJHXILQJZADLDVGFOOCXRUZQGPGBOVNXWHMYZHSCNKIFNMEAEUUFPKCVKOTNALOXEVTGQWOXEERYRVITUQRCLNUMLXALKWMRMGVYFTJUXSCPIPZODGROPCYQWIXJNEAKUCTSBAPYDBJHSMPBNYWJSASTXFEQJNIMBG");
    msg.deadline = 0.8062576981590549;
    msg.range = 0.59536247179771;
    msg.data_mode = 71U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("ZZWQNDBOVAFGLAUCGKUIGVVKTBPTTKILTYTCUBKUDYNEYQCIBFIMWTOSNOGAGZGUEABAILZJWHIVISPSMXQYDJXFOWQEAQEOLSPVHPMEJWBFHYTHROSZMNRJPLVTUHJFBNJPUVUEG");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FDSLFOBWKMXQWYNBWARYSNVNPWXITLUTAQCTQRXOSCOQWRGKXKDFEIZIGHGEZPXVATURUMMCUNBDQADZEMKCTBVUQOZGVOFNLAKLLBGICPGQLZHWSGJJZPCBNHSGSNUKAQVFZJTBKMYMYDFHONCOPDTSCTYRIJWWMMGBSJTDXHCYEHU");
    const char tmp_msg_1[] = {-65, 77, 72, -59, 12, 5, 121, -13, 25, -46, -91, -15, -96, -93, 67, 58, 51, -17, 84, 59, 37, 110, -107, -72, 5, 68, -56, 25, 14, 91, -18, 86, 85, 57, 72, -63, 88, 33, -109, 28, 19, -28, -111, 1, 65, 120, 49, -78, -127, -85, -26, 118, -121, 9, -29, -116, -34};
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
    msg.setTimeStamp(0.7156790217865663);
    msg.setSource(18916U);
    msg.setSourceEntity(91U);
    msg.setDestination(28883U);
    msg.setDestinationEntity(118U);
    msg.req_id = 33840U;
    msg.comm_mean = 187U;
    msg.destination.assign("JKVXAGEWPAUPMAMVDGMKSLPORCNNEPGPBZASLCRNSMNZJPUEHTXZNGQPBVDRJBIADQJWRCQUEOLIAXSWZIUFLLNXJOFYYETSKPMIVPBFOOERFUSOVOKFXHLOEQGHAXBWDGHJCYIQTGMZQBGQKMQSRZTPBTNKLNHFTXTNEOVJVHDWBTTVWMIJUIUHFQLBVDKKMXOUGHASYFHSKCY");
    msg.deadline = 0.738519855044109;
    msg.range = 0.5156617208819069;
    msg.data_mode = 164U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.8406500960506711;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WXMMBFKZHAPPXICARNDPRCJMBNSVOGRBBOSZLTDWLPMUGDYEOIBJIYGMEZOZHLUSCMZEISFLBNPHGUSZJERQTVFYZVSEHLE");
    const char tmp_msg_1[] = {21, 12, -83, 83, 43, -112, -124, 116, 83, -88, -90, 58, 25, -106, -122, 79, 89, 105, -54, -57, 86, 16, 31, -71, 125, -74, -91, 58, -27, -32, 69, 60, -52, -18, -69, 57, 0, -93, -111, -50, 117, -112, 65, 34, -26, 17, 9, 61, -101, 62, 93, 26, -111, -49, 98, 26, 89, -71, -20, 9, 52, 27, 96, 101, 78, -87, 101, -116, -63, 2, 21, 99, 35, 28, 89, 28, 35, -6, 111, -104, 80, 122, 96, 9, -83, -124, 34, 94, -115, -79, 122, 27, -86, 32, 83, 115, -11, 59, 57, 67, -117, -43, 11, -95, -49, -115, -67, -9, -92, 7, -126, -95, -36, 46, 68, -45, -125, 3, -37, 93, -123, -99, -89, -81, 102, 97, -100, 104, -59, -95, 0, 26, 59, 20, 119, -80, -79, 102, 105, 32, -70, 5, -92, 28, 48, 61, 39, -36, 98, 1, -34, -112, -99, -3, 68, 91, -109, -128, -77, 107, -80, 69, -102, -110, 87, -35, -1, -69, -16, -62, -38, 28, -119, -115, -20, 85, 4, -9, 51, -86, 27, -67, -115, 23, 120, 24, 47, -90, 117, -72, 76, 12, -91, -104, 13, -117, -48, 97, 10, -62, -40, -31, -36, 49, 70, 3, -22, 2, 126, 10, 63, -81, 36, 65, 116, -41, 113, 117};
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
    msg.setTimeStamp(0.20522725409514764);
    msg.setSource(46882U);
    msg.setSourceEntity(212U);
    msg.setDestination(51551U);
    msg.setDestinationEntity(201U);
    msg.req_id = 59468U;
    msg.status = 129U;
    msg.range = 0.2884657837653044;
    msg.info.assign("OEXGDMTLLJDOVRPCEHWWRIZISHTM");

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
    msg.setTimeStamp(0.03602380092369506);
    msg.setSource(38713U);
    msg.setSourceEntity(215U);
    msg.setDestination(5820U);
    msg.setDestinationEntity(60U);
    msg.req_id = 62382U;
    msg.status = 125U;
    msg.range = 0.920817223145687;
    msg.info.assign("WJEJGBSUDKZJPAQSEGRZVEAZHUEQXKXCDENPPDGBGIGDBGPIVYQIJOTPRNXTVOCBFTUGRPDINZZIHNXARKCHOKBDUOCCFXUINQQFRFLTOLSOKXQYWL");

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
    msg.setTimeStamp(0.009033415101999509);
    msg.setSource(27256U);
    msg.setSourceEntity(18U);
    msg.setDestination(45667U);
    msg.setDestinationEntity(240U);
    msg.req_id = 47594U;
    msg.status = 125U;
    msg.range = 0.452817925142177;
    msg.info.assign("BTWILHULDTPENMQZCXYHILPOIAULVJHSPVKTOMQUTKGGZIAUHMYPBCQCGAIKRRMHMYEFZEKPINSUMLOGZXITRXMKFEVGPXGZPMSCKNYJJACYBVOAJWVDNSXUAWJCXGXHCR");

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
    msg.setTimeStamp(0.719803309440672);
    msg.setSource(8990U);
    msg.setSourceEntity(251U);
    msg.setDestination(65333U);
    msg.setDestinationEntity(36U);
    msg.req_id = 63109U;
    msg.destination.assign("YQAFISJNBMPBGAVOSDXBXGOTMHKOPRDRDFRWCCEPEUMTPAGAVTVUDCRIILJTBAYIZJKKPQYTEYNMOZRH");
    msg.timeout = 0.26701941616578395;
    msg.sms_text.assign("TDEIORNADGYWKFGSOQBEJAMRGWSAYMWPCMUQXLTYVANRJJLLJMPOV");

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
    msg.setTimeStamp(0.5681547104185486);
    msg.setSource(43309U);
    msg.setSourceEntity(95U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(177U);
    msg.req_id = 4011U;
    msg.destination.assign("NRIQYHTENCDGWVKRCZUXVYZHQOKPXWSPIDNPYSPZRRKITNSSDWGAJJS");
    msg.timeout = 0.9337599760681776;
    msg.sms_text.assign("ECCBGBFNVMNSKAGBWLPHTOAGTHAIZXMYAWIPOMDVALHBTXUJUZNVQYGETCRWSUVTXWOQJBRPNSOXAKJXHULARAIZYJSYWUYXUGFLHCKTRQOAXGBOPZRNSZJWMDMBPGKDHRYLIUSHZTMHHMKBRDYEFEVNLKNOESEQQTBB");

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
    msg.setTimeStamp(0.5020916827304325);
    msg.setSource(3958U);
    msg.setSourceEntity(240U);
    msg.setDestination(52577U);
    msg.setDestinationEntity(159U);
    msg.req_id = 24879U;
    msg.destination.assign("JRRHIGKIKFEZNUIYNRJRYARALEZH");
    msg.timeout = 0.4004952172794506;
    msg.sms_text.assign("XKGBIIYBHRWUVFINKKUWXSDOBZDAGEDQOTGJJQBSCWXBRJOLKRIQUOFODPSVDXTTCXSEIHVPPXDROKGKSRCEBXWWIGNQFZTTXPAFMYFBJAMZZGBWEBPYIMWGMQIWPZYSHLYLNCEUADGFMTQILTNVHZPUTFVUMVEYAFKCKJIATFNNRUEVHVXC");

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
    msg.setTimeStamp(0.2191016380348828);
    msg.setSource(48615U);
    msg.setSourceEntity(248U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(202U);
    msg.req_id = 19118U;
    msg.status = 6U;
    msg.info.assign("JXBWLAFQMHMGTLVWTLDDTHUPGXDJXFUDIIGHXSRTATZDBBSBJERZMFVJQHCJBFEOXGCCYRLYFIAMQOSBNEEXYSEDMEMGESXPOTIYNRAKVWCARDBSPOLGQMJVFLKEHNNSVRQKWNYWQOWONKKDDVU");

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
    msg.setTimeStamp(0.4654483429031996);
    msg.setSource(14174U);
    msg.setSourceEntity(186U);
    msg.setDestination(35242U);
    msg.setDestinationEntity(1U);
    msg.req_id = 28040U;
    msg.status = 239U;
    msg.info.assign("HLXDUUGUQGUBTQJPNMDMMXEZYGVSYLGHPGYAYDLT");

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
    msg.setTimeStamp(0.5154597943786897);
    msg.setSource(20112U);
    msg.setSourceEntity(129U);
    msg.setDestination(54649U);
    msg.setDestinationEntity(171U);
    msg.req_id = 21498U;
    msg.status = 199U;
    msg.info.assign("FRKXVNASADUEQXESYHMOVWBBNLBUATMIIPJZBZNOBVYHQAGEWDVZZHUSDTUWSTMQJCVMCHQQCSGTJMGFVCYZNZGNHOSLPFFHZYQIIHXBJWWTTRVSKPHUOFUQBJAMHBPRXEGTNNKXIVTPDAPEPYDOQTWZERLYDEUMFFGWLLRDEJXLRSUWRWKJYPNWNLMJPSXFYREKDCVSMPICACFAKXULOEGLRKIXGOIAJOCJQUKXNGK");

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
    msg.setTimeStamp(0.5306291494634923);
    msg.setSource(7405U);
    msg.setSourceEntity(37U);
    msg.setDestination(64073U);
    msg.setDestinationEntity(65U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.45029125144127047);
    msg.setSource(12983U);
    msg.setSourceEntity(32U);
    msg.setDestination(3290U);
    msg.setDestinationEntity(245U);
    msg.state = 142U;

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
    msg.setTimeStamp(0.9592361468387702);
    msg.setSource(38236U);
    msg.setSourceEntity(186U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(193U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.7359485732060729);
    msg.setSource(49940U);
    msg.setSourceEntity(47U);
    msg.setDestination(48304U);
    msg.setDestinationEntity(146U);
    msg.state = 253U;

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
    msg.setTimeStamp(0.8342692425012348);
    msg.setSource(46709U);
    msg.setSourceEntity(192U);
    msg.setDestination(5641U);
    msg.setDestinationEntity(180U);
    msg.state = 68U;

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
    msg.setTimeStamp(0.9728014250273957);
    msg.setSource(12773U);
    msg.setSourceEntity(227U);
    msg.setDestination(24454U);
    msg.setDestinationEntity(59U);
    msg.state = 94U;

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
    msg.setTimeStamp(0.8850082293636963);
    msg.setSource(20129U);
    msg.setSourceEntity(157U);
    msg.setDestination(12270U);
    msg.setDestinationEntity(53U);
    msg.req_id = 48458U;
    msg.destination.assign("COTPBZAOLIXWRHRPGHZMBMCYNCPAIQBMFZVNGKRNJRONAMDDTZBOWUXVVGEVDQVZXQPRUEKSYRTJMSQYXEOHWXUFOOCFJKQKABKXGYWAJDHRIMUCUZFTUWPASFJGHFLQABQPDZQJK");
    msg.timeout = 0.76338993932056;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.3342866240368466;
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
    msg.setTimeStamp(0.6483053441713005);
    msg.setSource(46107U);
    msg.setSourceEntity(6U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(68U);
    msg.req_id = 49012U;
    msg.destination.assign("SWQCERKBGVMHKOXNUFISDLGUWPUYXDHRSABTJAJPHNWYRTUHGUGCODLZFILCNEY");
    msg.timeout = 0.6966484597982906;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.7541184693916186;
    tmp_msg_0.speed = 0.024553518893053128;
    tmp_msg_0.turbulence = 0.7084157098239511;
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
    msg.setTimeStamp(0.12737858032563676);
    msg.setSource(6475U);
    msg.setSourceEntity(16U);
    msg.setDestination(14057U);
    msg.setDestinationEntity(196U);
    msg.req_id = 36081U;
    msg.destination.assign("KSDTVAGRHRYVOFBLZFDPIMKDBHGZRJWDBXKLMGAUEWSZSNDWXPCJDYGITCQIMHBHASQFNVQTZMRPEUVHUGJKMQEUWALBFPKOARCOBPSOAZNICIAPYMLDSJFNPJCCNPWZXILULSVYQNFJDOIYQQWJZSEDLKMOCOFSTKRFNXMTHTVGCZRDTYVFNZXYWBFE");
    msg.timeout = 0.4290022708097414;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 63U;
    tmp_msg_0.quality = 194U;
    tmp_msg_0.reps = 158U;
    tmp_msg_0.tsize = 193U;
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
    msg.setTimeStamp(0.4905234970965606);
    msg.setSource(10732U);
    msg.setSourceEntity(84U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(88U);
    msg.req_id = 31382U;
    msg.status = 57U;
    msg.info.assign("YOFCRYANISMYABOVCXSXXDYDEWTFVOONSYNLLLZCLHHKVLDGBXJJMGSYBBXEDZSPMJFWUKGJSGCLPMGVCLJQSZPDPFYTROWWCKOPIZINHDGFMUBBNCGXHEZUDYWJVUTERQA");

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
    msg.setTimeStamp(0.07999561067429262);
    msg.setSource(54016U);
    msg.setSourceEntity(205U);
    msg.setDestination(63971U);
    msg.setDestinationEntity(15U);
    msg.req_id = 42017U;
    msg.status = 101U;
    msg.info.assign("EVHPKNDOLGUIZIQWCCOAENASAIZBQNAEIVDWCPMRYOEQRAZXPTUGBBXWJXERMFVSZPEBVGPKYCBNTQDZMFSYYGGOADSHHWLQBVYNUVSWXHRAWHXMUXQQPQWSARTILMUIMJHDURTZKZWIENMFKDJOUDINOKJSAYAZPJBGJTLIUHGLKXJVZNCCBCCYRSIQSCTVXPGDXLTLKHFFFRLTUXGJMFFWORZYWYBMDRHH");

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
    msg.setTimeStamp(0.14679559234362693);
    msg.setSource(4340U);
    msg.setSourceEntity(142U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(113U);
    msg.req_id = 29696U;
    msg.status = 195U;
    msg.info.assign("EYUJUSJCYAFFLBHXWSOYM");

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
    msg.setTimeStamp(0.6735030937386851);
    msg.setSource(26508U);
    msg.setSourceEntity(51U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(42U);
    msg.name.assign("RXVIOVSVQOFORHUUDYJJMGNYOPKQUTJLTHJECVFEVGUGPETTRTZZAZINMQGCXPDEDXBIHFPIIELZMDOKERNIMPILB");
    msg.report_time = 0.387531532466328;
    msg.medium = 169U;
    msg.lat = 0.7324997559291783;
    msg.lon = 0.894727845431793;
    msg.depth = 0.6867970675104418;
    msg.alt = 0.9930006785102402;
    msg.sog = 0.028933701125111844;
    msg.cog = 0.5443357975308075;

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
    msg.setTimeStamp(0.14626950095166502);
    msg.setSource(3337U);
    msg.setSourceEntity(133U);
    msg.setDestination(15449U);
    msg.setDestinationEntity(117U);
    msg.name.assign("KTMFFQPWBWWJBORPYWMASRTDZSKFXBMYRISPALLXSDDBPOIQMCJWULEZNNUGATMYCGXROOXEMJWUYSUKCTRQPEACNVOVFKFXANHOQCZDEKPZKKCEHIGJSZEYLBGJIIHKNNCATFAYPDILYVRFSJNLQXCRQLCWHHKCIJDMPLDHXAGHRXJKYGVOJOBYZIGWNFTZVTPZFOSVTDHTXURL");
    msg.report_time = 0.5432139923405375;
    msg.medium = 127U;
    msg.lat = 0.6901688320469032;
    msg.lon = 0.33691003983887047;
    msg.depth = 0.31342874421475964;
    msg.alt = 0.6130823100625378;
    msg.sog = 0.012821906735083322;
    msg.cog = 0.28700748235127194;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("CCULLSOMRILELIGXGDGNEDJUDTSRPTYVPRJXFIJSOMWRVQIFKVRBZAIUQFXNFQKTXGEWMAASWWLCJAPNZFIPVCGUFNCRRTYKUSQBRYAQIUUJDHGBXGNIVPYEHSPBMVQXDNMDYTK");
    tmp_msg_0.state = 103U;
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
    msg.setTimeStamp(0.8099308880815699);
    msg.setSource(12588U);
    msg.setSourceEntity(115U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(54U);
    msg.name.assign("KPSDMUGEREAPEGGUFVXTRVPFOWDHXZEHZYNFPXJAAXWPFDVMRDQKLUNWXHEBWOVIRKBYHRFVAJHJKMOGSW");
    msg.report_time = 0.13008172381408423;
    msg.medium = 97U;
    msg.lat = 0.40767402296764255;
    msg.lon = 0.5953597168706738;
    msg.depth = 0.6855104053850549;
    msg.alt = 0.3213441633568329;
    msg.sog = 0.6755626284160969;
    msg.cog = 0.6604802348739471;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("XMXUQBTQPKMGFTSEPJHRRECOYCKNHZUYXDCVJYRABIENGSZSBIMZDIFCZGBIYHEKRVSJQGUGKNVRYGNRMDWOOYBLLAGNUWDVDZNNSYWJKYPPPXJCUIKHEFIHJFHAHLJBTAXQLMJJAPMDVBQQFOGDXEIXTTCADSCUFFOZDUMLXRSLTORVUSUZWYTYVGRTZOKER");
    tmp_msg_0.links = 2710590912U;
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
    msg.setTimeStamp(0.2420979434840812);
    msg.setSource(5678U);
    msg.setSourceEntity(217U);
    msg.setDestination(45052U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.020879572339636998);
    msg.setSource(5230U);
    msg.setSourceEntity(120U);
    msg.setDestination(60579U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.7914985390253505);
    msg.setSource(43355U);
    msg.setSourceEntity(139U);
    msg.setDestination(11439U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.13155532506052914);
    msg.setSource(12831U);
    msg.setSourceEntity(208U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("QBUNPBNMZIOCFGRBGMUKXTXYNHYHCXAADPAWCLZQAGDIVXFYJJVJOJISPYLTZFEEUWSKUTSSYZVRWQZMGBRZNPEKTLGFMKECGEKZLAKXBYVLFWNITMQHIJTKXAUESMTDPEIUVHNAEQPDFRWNMJY");
    msg.description.assign("GJKXDMGVSTXVLUCQYGTLAWDWQLLEHGNJCJCZAIRHYDHAUUNQQOROHGZQXZTRWLKGOJHHNKILXKWBJEKFWCIYATCSTOHUCPBQRVFDJNEAXKLRASZIIPVNXQJEBMJTZZPMCFHIFSCQXVOUUDPQGBMMBOWBVTOQLDYAPFNKGBDIERPRYMGDFZYSTNVZWVXAYIKIBLVWWJNSKSMUXCERFAPFRNJTPZYSESOHBEOUDHSMKMWMDXEVE");
    msg.vnamespace.assign("TPBJQWKOBOQEHBJVLHFVXPOSIWQPZNZKSW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VRUUNSRHWCDBXCAMJJLHDDVLNGIFDIPAGSITUKTRKQMIGXYAQOC");
    tmp_msg_0.value.assign("NVYKDAIODZOJCEVFXGUFGVPWWTTPRUVGMBSDPNQUYVCWOHLNLCWIYVZZGHKDNABLHPQKANYDDBCKWUOTCXYMXODAUFFXLOBKZZRQLGPBMTDMFFMJIEZXSHSQRCYLRKTWUPTAJBPBCEXQJYESOSNJCRLYNWHXHTMIOVIPMZLUIVNKRHBRGOEBALADJSTJYPUUNWSXFSAXZZEZMGAMRELQBXGSJIMSQFFGQQPHAJK");
    tmp_msg_0.type = 74U;
    tmp_msg_0.access = 46U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SACDMRSZCGLASKARSPCAVNMJOCMVBKYMIIDHHPLJYWOOLNTIZRCJRDYUQMKTUHMOKVNMNSRTXDWBXZAIVXMQWEPVWRFLJFXHRJFPZXUMWWZXEDVTBGGNTBC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XTWDRZCFOTMIJCGWUYPKBLXCDVTTCJQEAAEHXKZGMGSYPDUQDKFVGEJJHSQBXMYAIOEWNCLFFDRKWFUQWSRTYOBAXSOUENJQMNIVCBWLPNLBVDCYBOIOMSZAPSPLUGAHRNFQOWJKEICKWGAAGLIXUGRQGLDRTHCUSULHBRXVIFRCUVLAZKWVXBGJQUHSNOTHBTBZTYZTYSVYFNSZFIMQKDYWQYOHZINDREVHHPJPLANVREOIZX");
    IMC::ScheduledGoto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.arrival_time = 0.7463897410272454;
    tmp_tmp_msg_1_0.lat = 0.48999154675977075;
    tmp_tmp_msg_1_0.lon = 0.6277847946919455;
    tmp_tmp_msg_1_0.z = 0.3711172711726135;
    tmp_tmp_msg_1_0.z_units = 125U;
    tmp_tmp_msg_1_0.travel_z = 0.28777460590900417;
    tmp_tmp_msg_1_0.travel_z_units = 173U;
    tmp_tmp_msg_1_0.delayed = 190U;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LowLevelControl tmp_tmp_msg_1_1;
    IMC::DesiredZ tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.value = 0.8677760183272012;
    tmp_tmp_tmp_msg_1_1_0.z_units = 179U;
    tmp_tmp_msg_1_1.control.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.duration = 19886U;
    tmp_tmp_msg_1_1.custom.assign("WJEFODJKDQLYUEXAHAGPFGKOSGFTINBNQRGLOLMIHUNKEQQNIYRDZYRSOVGMCPWZZRPSQQGUHUZMDZRCYTCPYCRTAHJAYMXQXIIPVOKIKFRTGJHEZSVSYOEAFVACANWQSFNFMCSFEWCAPOBSGMLJDEVWBXTEHFNKUYTCZWOJJXIDAFKDXUDUCHLZJDHTUBXGVYNYPXZKXXORBWKBZWAUEQBJLGICRHKEPLNLMIMWVLBRMWVP");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8874909759574209);
    msg.setSource(63703U);
    msg.setSourceEntity(138U);
    msg.setDestination(29398U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("QNSXBSPIULYFHMZYFTZIMHSNEHLQWMBOSBGEGPOQNZUMTNPBQGRANVKZLBEXSHCVRJFUSEADYIFJBVFSGCFEEDCDDVGNXYUWYYWCHIOHVXOJCRBTIJKWYLRAUUSUMDYJPGQCQPCITBKOFWAQGQPXMWYCJWWZOGMMK");
    msg.description.assign("CGDSOWOMJKHJZXDVQXXAQQFGXSIZRDABDUVXUDTBETTTZUHIPYIPJLTLZFYYXDOUYNEORFFKWLFESAVWIRCHCBBTTTNC");
    msg.vnamespace.assign("PXCPWIUOFOYXJWDJYKMXRSOMZLODLMYTHRAUDWHMDPACRSJFAMQIXVGFQXELMUEKCUYGQVKUUTEWTPZPGEYIZIRBKUVPWJLBSYQVVCFLNZAICHFBVSHIKNIEONLAALSXGCPRHTBYWQRACJYOFMZTZEDSIRUQFNCEENHOKBMDEFGBJWSKZTTBKAOHGNRXDTZQJXJTVXGEDSSAQLLOXHMNGQBZNCIJSCFKZWO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GUXWMPZMAXVCUFBVQQRBTWPMLSLWTEONPIERZTVVXBHEGIL");
    tmp_msg_0.value.assign("HZSDXBKFPRUMHDOTNPFSAEZIAKZZRAQQORNLOSLUSCIVRVIHYEGQTJBRFUYJEGJFFAHLVWYCNBZVXJMXETQAXSBOWWYKIYFBJMDNGIWXKWGXXLUYCTPQKPGGUVPNYLDEGIIPUDGEJYQEZNYZVAHFLMEWECHVXACWHDIPRWKMDWTOODKQZPJVSHKTRLUJBHHQMCJMD");
    tmp_msg_0.type = 203U;
    tmp_msg_0.access = 200U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LKCMXZFJVYAETCBQKZKRXQERWCCGEFVTUEFKSAZORJTIMLKUUXAAGBPHTJRXRBWLTGVCRQSYFIXHIABXVDMWOXNPFYDZGYYDELCMZOSZVPEHRVJEYDWSHIIPTZUSDUOGAFCUAWBAWWOHUQBNSOPTIJBMVZIJAJXBXGNRQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KFCMMVZGRIYFMGAPOFCGXDCB");
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredHeading tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.4122944229440405;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 61106U;
    tmp_tmp_msg_1_0.custom.assign("ONVNFYKQJDIDGOAJBKRLFLWQWUGZHSPLDZMAFLMYITMPMPRJOLNSWEEVUJYQIKZWDUXCBAIJYGAGXWZUHYCFRHQTFGFPEFCAYLVDREOSVEPHCPSARTRAQBTDMXOMTQKVZDCNKVDPXPBCLJTGBNYSPZBZRTKSJFLJMCSFPUZNIBAJNWXEREZQZVCOCWEQLBXBVUUJSR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticSystemsQuery tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PowerChannelControl tmp_msg_2;
    tmp_msg_2.name.assign("CKYVISJUFWSPLXHHWQPLKVDTZBRCGFAXFJBEXGJRFUAHDSCKBPVESWIDTHDGMWENJOEEQXTRUY");
    tmp_msg_2.op = 209U;
    tmp_msg_2.sched_time = 0.9794874601402769;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LoggingControl tmp_msg_3;
    tmp_msg_3.op = 139U;
    tmp_msg_3.name.assign("JSYQXDTOUIPCYHXSOVPJQAZOXIJJZEOOYUTKYYRPFWCWLZRBZNWASCBXVMRRJISGWSYWTZXRTLRGZFBXULQBJVZEDVGWHFCNNFDNTETWXDOPILXFBILAQAEVGQVIWLONGQKHAPJLHDGOPRBHCCQPXPIFRNQJBCUNLHBXGQKMCGDYKKRYKHHUUVSKMSIMWZNDAYESZKBDFAPFMUVRQLTYLSJAZDETHOMCBU");
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
    msg.setTimeStamp(0.830342880909589);
    msg.setSource(41200U);
    msg.setSourceEntity(41U);
    msg.setDestination(52423U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("IKRBFMJHTDYCXUOXFBPGUEEDCLTOAWQQVNIVIXWPMFEGILBCJXSLGIKODJJCFCWSNDSBVRNSACRUXGEJYLRUTOORKSQOJSZFMTWIFTAOBRZHIPGMSYVUQJPWLGNNSNAXHNQPMOGDIBAQGKTZADYAFYIMOLHAVXURHKCNUGTZEUAWSCEWXLAYVQDSGLXRHKVPEWQZWYMDBFFFYZHKPZTBRDXUMETQQCCEKWHPJNLZMBOVJZYUZYJPE");
    msg.description.assign("PDSTBRZVCLNPKICXKRTMZBOTFBYLLWMGKHGLEQWGVJUCBCTOVLCISXZTSGOBBOWPRYAFTZPVMWFMQHDVKJIAFCNVXBKOEPAAGNNCUWKIDXPOD");
    msg.vnamespace.assign("URRJSNHJVYOYGGSMLRYYZAHACNWUJXZBWRQDQJGFDIKLQEFYFSCFKAEUSUIXZD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HRGCVAGRZZHYWTFTAQBFUVLDRCQUZISCAFEGZLQNLZZCKSHNOKPYSQIYISXEKJPJBCIWZYJZABNQCQGOEEVZJPCVNEBAPDUUREDHKWOLVGLIWBSFUIIHDPHXFFRIUJBDUNPBNFOVIVQAFOEFDGNSTRKTMQWOXEU");
    tmp_msg_0.value.assign("CHXOVCFYMMWFKCWYEPEZJZRGFINXOMLDQOVLIBDNATVPOYAILIYGRQWTKUINXXIUHXKPVKKHMGCZDFJIOSIDWCMKWCGHBCSWDNHLKQULFJBCHQTFJPBJERSRELKIAQETEYONPOZNXTYDFOSEMUUAAASYRGKXVBPSJQZJKGTWMJJTDHBDOSATNPRPHVGZUMAORVYVDPNTUECLZ");
    tmp_msg_0.type = 138U;
    tmp_msg_0.access = 83U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YHHIRQTKRWEEVHOROETITOSIRWYNKKFEMDARZVBQGHIHPXXMZPMSJIQBBUTPNC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PSKXMLQBWKNZPNUGIWVHLAKOEBIKNTZYCBOWDCOPRSUKZADLFAEPGRDAHLXRPBCMVQAJIQUTFUCJDDQRWHAJZSGZJIANUQETETABBNJYSQWRJKZFMHEITJTHDBHSDIECOS");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 11521U;
    tmp_tmp_msg_1_0.flags = 239U;
    tmp_tmp_msg_1_0.lat = 0.2659449864545803;
    tmp_tmp_msg_1_0.lon = 0.6619897991790408;
    tmp_tmp_msg_1_0.start_z = 0.937402989760342;
    tmp_tmp_msg_1_0.start_z_units = 118U;
    tmp_tmp_msg_1_0.end_z = 0.5877889012299294;
    tmp_tmp_msg_1_0.end_z_units = 39U;
    tmp_tmp_msg_1_0.radius = 0.12978509439387897;
    tmp_tmp_msg_1_0.speed = 0.5819077121551721;
    tmp_tmp_msg_1_0.speed_units = 243U;
    tmp_tmp_msg_1_0.custom.assign("RENNUCPURFCMOJEHUCFBNOHXIMPMQTEHELJVGWXFGLEQYMTQAMEYHOXGHWUSWNSDCFTS");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ClockControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 44U;
    tmp_tmp_msg_1_1.clock = 0.13629322352645767;
    tmp_tmp_msg_1_1.tz = -61;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::VehicleCommand tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.type = 22U;
    tmp_tmp_msg_1_2.request_id = 23854U;
    tmp_tmp_msg_1_2.command = 44U;
    IMC::Magnetometer tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.timeout = 64926U;
    tmp_tmp_tmp_msg_1_2_0.lat = 0.23632375952386397;
    tmp_tmp_tmp_msg_1_2_0.lon = 0.7964255174078178;
    tmp_tmp_tmp_msg_1_2_0.z = 0.2770226652896117;
    tmp_tmp_tmp_msg_1_2_0.z_units = 178U;
    tmp_tmp_tmp_msg_1_2_0.speed = 0.9491062986061432;
    tmp_tmp_tmp_msg_1_2_0.speed_units = 126U;
    tmp_tmp_tmp_msg_1_2_0.bearing = 0.10352473295029763;
    tmp_tmp_tmp_msg_1_2_0.width = 0.5536002220847986;
    tmp_tmp_tmp_msg_1_2_0.direction = 88U;
    tmp_tmp_tmp_msg_1_2_0.custom.assign("OPHPGYNXKYCVFOAHTGIBRDLLOHEMGTJKWXSIUPOEPECIXGBFWULNQVFKFVZCXYBCYPQCFSYDEJAAHDOMSGGAZOCKZPWYHTOKBZWIMNFLNWICBCXMIBJDRNMEKYUQLJWTUPJMGOYECZRVDVGTDPAUHPMRFQLSHDXIZROEJUKWAMYVSQRLNXOQSNKGDTLRVFZEUNUITTWZLKZXVJ");
    tmp_tmp_msg_1_2.maneuver.set(tmp_tmp_tmp_msg_1_2_0);
    tmp_tmp_msg_1_2.calib_time = 60802U;
    tmp_tmp_msg_1_2.info.assign("ATQHDNMJLPYBITXQNSHLBUPRNZTFIOWZQVIIMGGUFTBRZVWXRPPKATKNLXEUYDPQHKSOYYLWDRZGIBFDRHXVQEVADOQRSAQJKXHCUXWQZIPZOWNDABWTMJKCMJVVZSQJGPGYVLXZZJAMCCTLWWYREVXXSUBCOESDBNEIK");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Distance tmp_msg_2;
    tmp_msg_2.validity = 20U;
    IMC::BeamConfig tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.beam_width = 0.7046637407039005;
    tmp_tmp_msg_2_0.beam_height = 0.579314729970641;
    tmp_msg_2.beam_config.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.value = 0.2636613577970012;
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
    msg.setTimeStamp(0.27981395237007944);
    msg.setSource(23390U);
    msg.setSourceEntity(145U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(55U);
    msg.maneuver_id.assign("AQJBPSAQMHIKKQNQTPDKERPKKCAULKTYNIQIREWAUUSFXYSEBNWGFXJUMZTOZRMTRTSTRUJYHQJOASMJWBLCGLGGWPZHBLMLSRTHZMHIUSGHVOIVTICDUGSIZVOHLNZVGJIVJUFCVPCRGFNKYBLSUXPKZGLBMXANNWNNFYXXDTAVXXVDOYXEDJVCQQWFJDRRYYZDZFAKRHTWMBQGBPFDAHOEEQBCCOYIYXZNFEIADPSOWOFU");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ETRSRGWECQZPQMENZJCQSTTXQWFBIVAOSCVOPLPHASKPYBLGWDDCHOTSGGSHBCDHIGFOVUG");
    tmp_msg_0.max_speed = 0.8487479229516303;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.lat = 0.7685744983451569;
    tmp_msg_0.lon = 0.13051936552725663;
    tmp_msg_0.z = 0.3307807117486088;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.custom.assign("QYHLAOBFMZZMKBBXTVNJEKTYXOSFXJQUCXYHOGEQUZAACOZRVVYWIMWLVRJXGDGYSZKIOFUHNMPLEODHHMDBCRAEBKMMVNKGCBZCWGPVZYTROEDFSVIUUTGFDJPWIR");
    msg.data.set(tmp_msg_0);
    IMC::FormationControlParams tmp_msg_1;
    tmp_msg_1.action = 247U;
    tmp_msg_1.lon_gain = 0.858736304071809;
    tmp_msg_1.lat_gain = 0.43572156894403224;
    tmp_msg_1.bond_thick = 0.41739997185121436;
    tmp_msg_1.lead_gain = 0.6228946854549676;
    tmp_msg_1.deconfl_gain = 0.9239561979945895;
    tmp_msg_1.accel_switch_gain = 0.3025165228108937;
    tmp_msg_1.safe_dist = 0.9203716391519909;
    tmp_msg_1.deconflict_offset = 0.858874908145049;
    tmp_msg_1.accel_safe_margin = 0.9358768578753387;
    tmp_msg_1.accel_lim_x = 0.4266953905345121;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Chlorophyll tmp_msg_2;
    tmp_msg_2.value = 0.1227192766145373;
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
    msg.setTimeStamp(0.9684362728434854);
    msg.setSource(45759U);
    msg.setSourceEntity(120U);
    msg.setDestination(22284U);
    msg.setDestinationEntity(132U);
    msg.maneuver_id.assign("LFUZALWTGSDBJAZYOXCSQVKGWPINUTZLNFEDWIKFVRAITECEYEPJXLUMHMNFFZQSJBORNGSGARUSOJSTKOWCCQFCVLEWCJCAIOVQACSJRKZRUNTHVJBRDRDFDQNMXLEHTDKBQTKXHGELUNRGXTWPZXYKBSVAPZTMCU");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 34422U;
    tmp_msg_0.lat = 0.23568103921422667;
    tmp_msg_0.lon = 0.20258017876947487;
    tmp_msg_0.z = 0.22445717537318977;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.speed = 0.5559329271138379;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("WXLGTNEQHDL");
    msg.data.set(tmp_msg_0);
    IMC::SessionStatus tmp_msg_1;
    tmp_msg_1.sessid = 3720145697U;
    tmp_msg_1.status = 49U;
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
    msg.setTimeStamp(0.7065322522730477);
    msg.setSource(44506U);
    msg.setSourceEntity(229U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(128U);
    msg.maneuver_id.assign("LKHWANQFASIBMSADRYDYEFYZGBPXVTCGEPSZLCFJNHNLIMKWTZHQKGLPJQHZCYQWLBHSHPFRNWZCUTBJPOVOKITSZEBGZIMYFWSOGPKRGJLDFYQFWVSIHUJWNOUUMPBDSBHCZAQMQGEGDGFPLVJXRIVELNTJWYUMYXDMXEITUIAFRUCISXVINEQOVXUTMOOMXKABYXLWBKZVDRQKNNXHCVLYHVPAEOJRQACZNDUSU");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("MJIPPLZJPDPYJTCIMLWDBOSEBTAMHEAUWVAIKEFHLNZNOGGBGEOJFYMTSXXYWMLLYGNXJUOFVLKUBUDZFQEKCGRJJINFCCBIUQTHFTAIQZRJTR");
    tmp_msg_0.formation_name.assign("VCZLQTFZXMABYQGXRVIZPHLWHKEUXLFPKNPWTQQDQLXCRJRTNVSIXHYNYQZXDDAHJAEFJPSLFHVJDIMMECSBRJPCOWWEFDBISJNKMSQLLIOHJN");
    tmp_msg_0.plan_id.assign("TTWVFJMZAUIBHYERFXVJQLGGQBALXNCEDFIDYZUQLOKOOMFZTMVDNKJHKQHAMCGVQDLNEDXZORTUWESKBZPHTQSODUNSIKBYAGXXBEHYCSQRKHJYZU");
    tmp_msg_0.description.assign("VDYLLLXCVPOCRTEUPAGLANYLIWIDGEHHAWDSJXMBPTXRYVKPPUBJUZPKICQKSDBYJNPGDJEBJEMVXSYRVYSKCRTTPNBERGLYGXATROONUBYUJUBIFQMDBQHOAUVHGMPHXMHCWIUTKKVDSFJACVAFNFEN");
    tmp_msg_0.leader_speed = 0.9428035009875834;
    tmp_msg_0.leader_bank_lim = 0.2466021439733722;
    tmp_msg_0.pos_sim_err_lim = 0.6467455650401829;
    tmp_msg_0.pos_sim_err_wrn = 0.11952206963917666;
    tmp_msg_0.pos_sim_err_timeout = 9301U;
    tmp_msg_0.converg_max = 0.7898515327434787;
    tmp_msg_0.converg_timeout = 3451U;
    tmp_msg_0.comms_timeout = 38608U;
    tmp_msg_0.turb_lim = 0.39269410351728706;
    tmp_msg_0.custom.assign("ZLMVGNWBGMXRRZZBHJDALNELFGCXCTWIGBBQFWQLURBIW");
    msg.data.set(tmp_msg_0);
    IMC::TeleoperationDone tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IdleManeuver tmp_msg_2;
    tmp_msg_2.duration = 19955U;
    tmp_msg_2.custom.assign("MGBQELIJKKRURXLSIDTMOMDMMTJGYDODUFVEJSWENZOWQEKMQVSJPRIINAPXETRCLBRSEJBNACHHIGNIGSZFGPVJZXTBTACIRVZLGVFPUYNBWWWHTYLBYQMSZD");
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
    msg.setTimeStamp(0.004574754165944328);
    msg.setSource(7132U);
    msg.setSourceEntity(68U);
    msg.setDestination(18719U);
    msg.setDestinationEntity(54U);
    msg.source_man.assign("QYBSGEVYQBWALXODSZEBXNPKKNNESPAWWDPSIOCSWIHDWGCCRURKIALYGFPCZHMBGEZMHLMMXUGJNTUVUXNUKTNISUZMIAAXOZKDSIRGWSMZQKMDLGILHCWOQTDHOJYJTTLPQSCAVRTVLXCEICYKMFJJABYBJR");
    msg.dest_man.assign("ZQHYKJLYCQMJUDGXPDVJJTXHPPEMJWWNCSUVBVXRUGWJCSTWLHMBMRFCMPWDCFSZQTEGQFIRKSJPDAQZDBANSZCFRZEEQBGJAMGKPZKOIRAZCUKMKLFXAKOZDVAMPNWLISPGBLYHGBXOEWJTWXPVIIWVQEQBBTRIITNCFCPVRLAOVDQHHAKYTZAURFVSSNHIONYGUGEI");
    msg.conditions.assign("CIOUXPAQFRYPVYGVQNJQDZBSZ");

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
    msg.setTimeStamp(0.22345598940450695);
    msg.setSource(58252U);
    msg.setSourceEntity(230U);
    msg.setDestination(63688U);
    msg.setDestinationEntity(250U);
    msg.source_man.assign("YHVKLCAYSCMWUNZOSNTTPIPNAIEIVQUZKLFBWLNSHKMPJZJGBBUDUPWMGYRCDDEGUQUPBRIWDTOKRXLXEXUZYEQIBO");
    msg.dest_man.assign("WETPYCSZVCOKDSZOQTMNUVKJVOQILLUJAWWNSZHLKWJNXRVCNWMIXFGQGMREMZKPKHQIRDTEHPGMSEHLAFENCYIBVGTAEFXXRQOUAOAUXDNRHUFEOJRXKQDUNTPYPMPIPDXJGTQDKACCCBYKJOBJAVZZWSGGYLJFPDJPFBAFOMSVUIVWRAMIGYUQRLL");
    msg.conditions.assign("KNLAVDHTJHCSBTXXDEJYALBAZBALGRRJZSTEPOEAENMQRHZVKBEAKPNJKIGVYUNOCSLUGMRQESHWHLDZJQVWPSSKIZXMCGLXWOFMSEJDUDFIYZHNQLJCUHUMPRTODOKIJITIAPNTZXKVNQIDVUBMBWZWXXPFTYRUFE");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 168U;
    tmp_msg_0.value = 0.8314388378582388;
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
    msg.setTimeStamp(0.5227294117136262);
    msg.setSource(9511U);
    msg.setSourceEntity(141U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(190U);
    msg.source_man.assign("NNEDJPCLVNPGGFWLRCIXRWADSTYPYGMSBZEDPSVJOHLSBQUMQUOKXPIBBVATJRZZJEJQWRPYEMMDZHKCVNNMHAUGRJPXVWQ");
    msg.dest_man.assign("SSIYLKBRFKEWOZHZDZGUMGNFPADRXPHIHNJHXKBHGXZEYCOTIJIYDZTACNJUTLDLOEYOZDEF");
    msg.conditions.assign("RFHLAFKDIXUSKNXIUQAOKJHFKZRGFHWRZRKSVRTHOELUSTPVWUVUAAIMNBXEBPKJBCHKEYUTWBNZAJAQORVPCTSDEGMZJAQDXOIQMRZMELWWCBCPRPXNXYPMCQXLPDDGJXUCWDYIPJYKKNHYDMCUQTBVTFVZKHEYBSIGBIYCLHVPTISZWSGAGAXYEFVSJGMJQLQL");

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
    msg.setTimeStamp(0.8842629379389547);
    msg.setSource(56508U);
    msg.setSourceEntity(89U);
    msg.setDestination(29008U);
    msg.setDestinationEntity(197U);
    msg.command = 193U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XECWIGHODTSGZKPFZEBFGCHEGIULUIEOIHNXKTQHPEKKVOMJYGITNRZSCVIJJNNFZXQJMITNOPJEQLFUYYATBVWDFWUBRNVFDTQVPDCXJJSKUYWUVBGHTHIWCKRZJPORVAAORPDDHLHOOCNRGNRAGWEILLSGMXMNYYSKLBHTYKEZRYZUDQALJLPCGWSFASCLZVQMKSQEFPUCVAMUPBRQJSHPOABOWMCXFBDQMAKMBBYWAVURSL");
    tmp_msg_0.description.assign("ZAYUEDSGVPYEWVOSTYTCJHFCGGBAMHPXVXYCKHOHMXQLRSPYIBBVOGGLAGUEHHBJBPMATZCUSZAUWJZ");
    tmp_msg_0.vnamespace.assign("AJLIIFPJKBIMRYHWR");
    tmp_msg_0.start_man_id.assign("NZNVNGHSFYZDFVPODZCMGZCQHETJIVVGRIOKIRYETHEKGBUHNNZRWRXBIUCWSDVYYPZBURQPUDHRBJYJSCAUHLLCPMEWQGDNAWWLFVJSTWKYVNQGLPRNFOPCHY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("UQCHPVTXBJUSCZNGYRVJYLILLEUAVBKGOACNUKXBIYVJKTIUZKDYHOIAORITRMFMHULDLFXZGPPTOZFHFNSMJSFYZ");
    tmp_tmp_msg_0_0.dest_man.assign("QWSZKLVEPMRNHIXJBTUBKGBOUYJEAAQQMMCNTKFDO");
    tmp_tmp_msg_0_0.conditions.assign("OXILXOFRMXKGSSUNHWQCKJXJHGTODHVPDCEAWLSMVPLYMKTVFQMYBGUKCBEZRGQSGDKTBEHLKELRUUZOPDFNUUGIWZZMNI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::PopEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("RABCDXGSZHJRUMMYOOTAMTMLAMGUQPVXLCLHDNZFTDCKBTNSFTDVV");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Airflow tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.va = 0.17796158954722308;
    tmp_tmp_msg_0_2.aoa = 0.2971141254161166;
    tmp_tmp_msg_0_2.ssa = 0.47094533271356587;
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
    msg.setTimeStamp(0.45659193996634306);
    msg.setSource(25096U);
    msg.setSourceEntity(139U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(48U);
    msg.command = 182U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YNYFHSWZVCCGHASFSLZHZGYNFYQMZIKRFGJCGHSOKIFKUQHVVHARJRTIEKOAALMAXBIJNZJAIWRFCMCUSDDXFQBNNXAFKHZGLRHAPNEPYUGDPPBIQBQBRVSOVACWMFUDSYEYGNOOKDXLTBXZYXXPREEMJDNCTSLBLWVILTBQMOUMUIKEZNRILJJE");
    tmp_msg_0.description.assign("EGWWMBBVFLKYTFMRXQNYHSBWXAPRUZMNRWUDCAGEGYHSLYCACIOZAQXVEHRAHVBVLXOTGOMYALOODJQNIJZXDNVIBWLUBKBDJCIAGMCXJFHM");
    tmp_msg_0.vnamespace.assign("CMIYBCNOVXGUZWJOBDQRF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SGTOBYLUFHYUPFGTIFZWVNJQMIWUWLFZBFTXDYQRCETDETQPNZEMATM");
    tmp_tmp_msg_0_0.value.assign("YQJZZVXJFBSTDRSLDMMZSGAIEJDUQOALKQJEMPYCEYMMFHCZGWISBEPPNOHNWOQYIWWVOBUTHCXHTKCGYSFGGZDFRZUAMOSQZILAPHIIXLVAZENXWRCCQSGGKVFDSXBGAKKTYLDWETQXRVWMFMBHAKSMDKQRZOWV");
    tmp_tmp_msg_0_0.type = 137U;
    tmp_tmp_msg_0_0.access = 197U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PSNWZWDWRERWWXGGAILEKCJJIKUVXMVVPZESASAKUICFHCOEMBFSSQAQOIVHAUHLWECJRYCTPSQNHJGDVTYICDLMGUKMCCGBJBBIRMJHLNXKMMYNSRPANQYLKPT");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EDCSKVZGODHFEVUGRNTWVZQFRIPFYBOLFKKTIIVWBJICZQNUD");
    tmp_tmp_msg_0_1.dest_man.assign("ULHXZMEAUSYOLURMKKHXNVZVXSUNGPDBZQMCFAYABICBQLIQRWMNCHPQYVVSAEFWYQHMERURWBJZEXJSSDTOOCBTVLCFSXTNWZBZXQSNGXURPSEOHFMPHMNXHGFZITOZPOOJKSDXFKVIECKARGGLUDPGIXQQMDCSTLNGOUEOEDAAVYYPUTYFWAWPILNVRFABDIGFJGFQBYKJDKHTEPZLJVNMTYGJJWITBORLERCKAKWJLD");
    tmp_tmp_msg_0_1.conditions.assign("NJKZAIVXQWSFFYHENZGWMWVWXGAXQTISQJL");
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.6514079007525907;
    tmp_tmp_tmp_msg_0_1_0.y = 0.40996148451298;
    tmp_tmp_tmp_msg_0_1_0.z = 0.27415192742028505;
    tmp_tmp_tmp_msg_0_1_0.t = 0.5877946915891761;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MapFeature tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id.assign("REPQIPPGQIYJKHEUXKCWHCCDBDLVOAUAURBZPTLATYYCEGSFQHRRSGZECBEECMTUTDZZVWWVEYJLWDIDGTWFTJJMNDYHEGULTQIYQSFMNTRHNIHTJXQCVMCSNUWMZNUXYZSKARZDXEVPSORBXSHLSLKJKURILPOBLCXHKVSFGNAMHFPD");
    tmp_tmp_msg_0_2.feature_type = 47U;
    tmp_tmp_msg_0_2.rgb_red = 192U;
    tmp_tmp_msg_0_2.rgb_green = 108U;
    tmp_tmp_msg_0_2.rgb_blue = 7U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.760713870704962;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.8499667144039987;
    tmp_tmp_tmp_msg_0_2_0.alt = 0.5752912796902557;
    tmp_tmp_msg_0_2.feature.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::PowerChannelControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("YTBDLGYXOZOOQ");
    tmp_tmp_msg_0_3.op = 243U;
    tmp_tmp_msg_0_3.sched_time = 0.6244184842385826;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.7502441887074054);
    msg.setSource(44440U);
    msg.setSourceEntity(103U);
    msg.setDestination(14806U);
    msg.setDestinationEntity(27U);
    msg.command = 129U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CMTJVHPRAOZUTLRGBRZXXMGUEAQQIMSFBEOJJKQAIDABVGXFSOLRLBYPORKJQCVEXORSMHFTFIKNMOZLXJLCHSQPWNISZKWZ");
    tmp_msg_0.description.assign("EANQARSBAKZCWCUDHIIEBSRMTMFPNDHXVVGGYORROSIOKKORBNQZDXVRTNPCWJQBLHHGCYIMPPEDBPOPBZEJXSGDKYRJYHQAFRCXLVGKUZXTXFTMJNYOFUWIQPVHFMUYBXEWZGZFZTDKVSSYLHMMDKGLCCSTXIFJCTSKEDSDHIVTENXJOWOQIQFGMBULSZLARFNBAJJMWWYQTUUQP");
    tmp_msg_0.vnamespace.assign("MTDAPCVPHYHWRCCBTXJEMXSJRPKQPJYAGRQPWPNQDBNFSQUZAPWVEWTYGFWNFBZIKJZYQAJCINHJXWVUVYUASROQZVTMKYLMGZVKKEAGLPIMCOFVJBOBULXCDJBWFWEXOUOWXLARUSAIZZSDLHODOLIXQHNVBXMKOPTBOIFTPHCIMKSNKNZRBGFSGQAFJRQDTHL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UATGZVMSTZACGHDM");
    tmp_tmp_msg_0_0.value.assign("YFZMPAOPYCTQNPMASTJEFDJGCZMFGKVHNFXJCRLDVWDIAGIXBKXJAHNCCHFQEOKZIWKHWZATWOBWFDDEXULJPEVNSCUUHFOLLKHSDPXJQMHTQDMPRCWHQDBLZRUGSXMNRUATDOVKJUSOENHYVCONHIYEGASXPQRSIJWJOSXLFLABIRQQLBSFLGXITBKMVTBRWJQEZBLKNNMUOAYYTBYVTDPRKZUNGEERVPZZYIVWKXCPBZWUGOMIER");
    tmp_tmp_msg_0_0.type = 95U;
    tmp_tmp_msg_0_0.access = 209U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SJSCEJJBDAXAKLPSTCDNVMPGKPOZRTIVMDKHTUIZNVKJZTCUNLUJZYWKBTEUFXQBQWONBROPBWOVHZGF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HKLZMOBXLPVPUFIGIBMUZTCLVOPAGWZSZWMERLUDGUNKQNJTRNIWIOZZYABWCTYJFYSHOIQRYPCXWOVEKKVLYJXDFHYYNJRAPGBYRMXZMCONQHUQARYZUBCAITBLKHSMIPTHVIFJWXCBAEJUNMHMFXQUCPRLDZJHKXSVBGPTQRKOPHDMCGWSAEUTSNVSKGIDQTEFYFDHBVDDPLTDWLQZASNJFEMAOEGQFOV");
    tmp_tmp_msg_0_1.dest_man.assign("WHXKILRUWHCDLPJKQDULURIMBBJTRV");
    tmp_tmp_msg_0_1.conditions.assign("BTOXYCPBYQSRDNCTVUBUOLHFCUTJBNRAOGKIJDHKRSFFLWUPXLIVYBPACBDPGZKGGIMHHUIIPFHVMXQPAKALAIXWNVVLUURBMCXCTXOHYCAFGYDNMFNVYJHXYVEDONYNNJDWDRZSGLEREWVWAHETBZEUSEQSFPXGLAWPUQBDKZKAJTTDJZTYHQKIN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.05985442420790321);
    msg.setSource(47116U);
    msg.setSourceEntity(185U);
    msg.setDestination(10085U);
    msg.setDestinationEntity(199U);
    msg.state = 251U;
    msg.plan_id.assign("OACKYUTWRLHNTHIKFXVMFZCFUOVOFFVAURRWLXCYXALIMYL");
    msg.comm_level = 241U;

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
    msg.setTimeStamp(0.7072362940833217);
    msg.setSource(28219U);
    msg.setSourceEntity(121U);
    msg.setDestination(54454U);
    msg.setDestinationEntity(23U);
    msg.state = 150U;
    msg.plan_id.assign("QQWVFMRIBFACTYLBLGTNDRKOGHODXAHPPFRULRBIEBRQLIWEAWCIAFMFQFHXFXWJ");
    msg.comm_level = 194U;

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
    msg.setTimeStamp(0.41722293910817876);
    msg.setSource(18258U);
    msg.setSourceEntity(94U);
    msg.setDestination(48820U);
    msg.setDestinationEntity(28U);
    msg.state = 214U;
    msg.plan_id.assign("TCZUWTHJORVMVCGJHHGAKXJNMDNJUFYIWKQPZLUASGKRZFEBRECIQNOJSCAJMAIXLLJFBXHCLMAIDMQEQBHSWOYLWYQQXJZPGXKDOEOFHGSQZFXESCEHAYNVSLPVQEKAAPZBJTMVROYHRPVOIIDJUPVFFSMPKWQNUFFGCTXUYMTRZWUZBDWMOTKQLSSYTBDGLTPRDRHIKNZBICNGKEUVKDTNWHICVIUBLXPLDYPN");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.34673848974952515);
    msg.setSource(52515U);
    msg.setSourceEntity(126U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(53U);
    msg.type = 251U;
    msg.op = 206U;
    msg.request_id = 54857U;
    msg.plan_id.assign("FGIFQCMOSFQWVITDQOINPNQYHPHUQUAFLLTACOFTZMRHKSZLKCVVEWYATEPVUKSJCXRXBNGGTLWHJLMQMHBDXBWGYTQHOXXTNQGFZTJDEACGBGGCTUVUXZZJKWIWOERLAUYJULSLGBCYIJBWDCWKMB");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 199U;
    tmp_msg_0.mode.assign("AIUIGHXBCRERKTCZPORSFMRJXIEGPNAPDHHZNCGJAAOPSAGQPEFDVMRZFBGYCVJPVOCKSZEKLFTVXVGPNVQYNSCFMBALDIEHZGYWJYTWQKDXTQSNZGMLRJCBTMYOUKSMRKWZNAUFUZGLQWJAUYOHBJZMHWISQYUPKJHMBXUI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWHDXOYGLQBRCYHD");

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
    msg.setTimeStamp(0.6792551347300754);
    msg.setSource(32559U);
    msg.setSourceEntity(192U);
    msg.setDestination(35837U);
    msg.setDestinationEntity(55U);
    msg.type = 9U;
    msg.op = 162U;
    msg.request_id = 50971U;
    msg.plan_id.assign("GQHJOUSUCDNYRTJUNXWCCEEYPWKPWVDGSQCMOXOLHGKESQMSUQQVONNRBILCBDHRXSZOGGMFQTRGMFRZTIIPLXJZLFAZXFSI");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 247U;
    tmp_msg_0.entities.assign("JAEUXBTPWFNSRZLHWBOZYTBMOTZXGSGVRRHJCFKVAFEJRSKFPRJPGXDYDIKWHPYCQNBMEIUILSWMZGWSJDDOZFJOETQYSDNQYPSQDHLOIDEQGXENOYQLRVPSMJBXAAWICFNXVOUBZHIGBHRRHOZWJVXEVHMMQAGPZDBTMMNU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NJYQHZJOGPWKDAPCEKYACJVJBZFJONHINLFFOMRSPOHUVRTMSGTQYQIVELMNWBXLALCZMHVPDYCWKXFJFJXEZDCPGMXEPREAVCDMBCRQMDWIBBQEPURYSDNBPSGBJHOSAVTTVJOIRLCLAZXSLRXAIHNZTOKTFHQGOSRFDAWYBKWUEQINYOZFMH");

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
    msg.setTimeStamp(0.42755282473011647);
    msg.setSource(42057U);
    msg.setSourceEntity(87U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(95U);
    msg.type = 212U;
    msg.op = 222U;
    msg.request_id = 19806U;
    msg.plan_id.assign("DIRIYPHCOSFZJTTDMYMIEELAISKGXMKHVZTMLWWQQHNENJMBGXQPNGASPFWXNWUTUALYDPRQVLBPLNPMFJOGGXASOHISUSUCURZRCCCRSKCALJVBQYPZVQEIWECJGBZZLVPYNOHOUWJIIDMGZCBHEX");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 37034U;
    tmp_msg_0.lat = 0.38989731438920594;
    tmp_msg_0.lon = 0.031652876261222374;
    tmp_msg_0.z = 0.9565598008012952;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.8271336587347508;
    tmp_msg_0.speed_units = 45U;
    tmp_msg_0.bearing = 0.10419379616892521;
    tmp_msg_0.cross_angle = 0.7322194398384206;
    tmp_msg_0.width = 0.6171292255726515;
    tmp_msg_0.length = 0.297035255660305;
    tmp_msg_0.hstep = 0.3268635459086131;
    tmp_msg_0.coff = 230U;
    tmp_msg_0.alternation = 55U;
    tmp_msg_0.flags = 85U;
    tmp_msg_0.custom.assign("DXYOFIYHMQNBHPECRRNXEGOAZUCIDLOAICMVGGBLPCWRIJSUOFJFUODXKQIBYFAZZUXGQSKNVWEWGDRENRVBILBSYMTCQQCFXVHLXSJHXVYHPOURPWZMQIBQNCUEINJTZSOZYDZFWPWHLVWKKXVNMBUPRULMVEBPNVGRKTURMOHXJMDJKWYEKSOZHWBGDLJWFALPEDEZKUXTTZLAAFTPJCRBTDAA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AWNMLRWXKFSLDXOGWABHGPUBBERQPKTBXUWJOQBKENXFQVTXVSKEPIGTTRGMVVEKLVLGIBYJHKDFOUPNPHOJYZYAAIIAYNIZIHYIFJZXMKGZFMRNFDJZRPUNNVXQEUDMSBW");

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
    msg.setTimeStamp(0.3960517126148362);
    msg.setSource(42108U);
    msg.setSourceEntity(98U);
    msg.setDestination(32303U);
    msg.setDestinationEntity(95U);
    msg.plan_count = 50720U;
    msg.plan_size = 2572464202U;
    msg.change_time = 0.7159513210304165;
    msg.change_sid = 41262U;
    msg.change_sname.assign("GLAVOVLMUYSHXYRGJCROCUCNEFLAGYJVMZZKKUPTOYYGQAKHVJEFSYNXYRFWSIJSBHOMSUCZOFIHIFMWDXFOZCIEUDOCRHXODIBRDKMEQDPUJQMJSYSXGCQDLAJBWZWIVOYHSPF");
    const char tmp_msg_0[] = {69, 70, -61, -117, 70, -110, 87, -50, -64, 55, -124, -120, -9, -77, -13, -19, 94, 75, 72, 41, 80, 74, 101, -15, -116, -27, -126, -82, 0, 5, 40, -55, -110, -9, -57, -72, -81, 54, 121, -61, -117, 3, -90, 82, 96, -106, 109, -92, 72, 85, -93, 81, 27, -95, -120, 100, 94, 99, -81, -127, -8, 34, 20, -114, 0, -1, -31, 51, 12, -24, -60, -116, 72, -101, 64, 39, -13, 23, -7, -66, -86, -4, 42, 61, 52, -60, 67, -106, -66, -45, 119, 103, 84, -113, 51, -76, -126, -69, 45, -117, -117, -16, 75, -73, -23, -90, -5, -30, -117, -99, 97, -22, -123, 61, 30, 91, -42, 24, 37, -71, -53, 49, -3, -94, -5, 80, 67, -86, 0, 8, 76, 108, -70, -23, -94, -39, 114, -109, -79, 71, -85, -25, 6, 2, 24, 49, -85, 16, -74, 105, -43, 39, 11, 52, -124, -6, -115, 40, 43, 36, 25, -88, -95, -76, 26, -94, -112, 116, -109, -2, 38, 87, -49, -99, -25, 13, 26, 118, 67, -74, -101, -22, -93, -57, 58, -50, 58, -51, -77, 55, -55, -70, -41, -23, -49, 50, 34, -112, -47, 42, 116, 67, 76, -3, -58, 110, -22, 16, -21, 27, -63, 23, 88, -11, -73, -118, -68, 95, 114, 37, -30, -11, -110, -79, 6, -99, 64, -54, -117, -116};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YYNMBKCCEHSHBMIWAGROCFMJOWADXBOMVXVINUKAFNRHLSTNQJIIMZPEUPBZVHHBDROUBKZCPBQLJMDKEVVVUWEOGAPCDBSTQRTLTOLXZCSWJPBPIKHYUQSOFMHHWTBWCGEQXXWWAIUUWXSNDFJXTSQNPAKGFUAKVV");
    tmp_msg_1.plan_size = 17826U;
    tmp_msg_1.change_time = 0.3561307281581566;
    tmp_msg_1.change_sid = 11581U;
    tmp_msg_1.change_sname.assign("AVXPTWSKUCORGVUFGPXHRJIFRSXILLPWVYWRCDHGNHMIZWKTUAUGANBFTJXOIBBTNCOGBANITREDPSAYJSVZPXERUTIOQYCXKWAOQLRHHBBZOCKSZDSNNNCEHWQMKWLKDLXQZLMFYLJLUKGAVDFDYCYGOZPQJIBPHZZIPNKGJFOUVTKQAEWMBFNQYVEQ");
    const char tmp_tmp_msg_1_0[] = {31, -78, -79, -108, 9, 81, -116, 117, 119, -83, -127, 55, 97, 75, 34, -60, -100, 87, -89, -99, -85, 66, 18, -12, 17, 42, 61, -52, -79, -105, 27, 11, 114, 39, 37, -63, 43, 64, 108, -40, -102, 43, 106, -12, -109, -121, -80, 69, -88, -127, -26, -55, 51, -32, 99, 93, -109, 84, -16, -52, -100, 119, -105, -37, 85, -68, -76, -30, 61, -41, -45, -66, -19, -98, -100, 35, 126, -58, -52, -52, 35, 105, -43, 6, 116, -53, 110, -9, 55, 23, -71, 60, -91, -42, -79, 105, -37, 102, -107, 34, 89, -118, 13, 63, -70, -35, -60, -100, 109, -30, 1, -85, -89, 121, 101, 105, -6, -117, 78, -88, -65, 74, 5, 27, 19, -17, 16, -82, 107, 19, 19, -65, -81, 73, 110, 8, 83, 84, 71, 125, -41, -32, 92, -124, -49, -56, 57, -101, 32, 103, -112, 62, 70, -24, -47, 67, 96, 64, -9, 68, 27, -56, 124, 84, -56};
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
    msg.setTimeStamp(0.9531309509150104);
    msg.setSource(56524U);
    msg.setSourceEntity(115U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(113U);
    msg.plan_count = 50746U;
    msg.plan_size = 2656560623U;
    msg.change_time = 0.8617232325255966;
    msg.change_sid = 61612U;
    msg.change_sname.assign("VNXBTXQEZHLAMJSOVEIRDKSFNVTYUPQFKSBWPDTTLBDFUGEOWJFQROJAWZOBJYRMVUZTPHSGRKTAQPIHJMAZGQINEKYQAPORFUYCIMLXDWNZEPZSFORVEXIJJCGGPVBEWPWIEKLYZGPUXHNJNHQDBSQZHXIWCTGONOFRCPUGWXKSBMMNODCAXGALMQLTOACIMMCAHCWDFYHFHLYBHKXUWVDEDKCURG");
    const char tmp_msg_0[] = {68, -108, 74, 33, 95, -90, 117, -57, 48, 20, 123, 46, 80, -84, -29, 26, 81, -55, -61, -40, 66, 62, 80, -14, 117, 51, 5, -22, 74, -107, -81, -49, -104, -52, 20, 74, 83, 18, -85, -116, -35, 14, -52, -17, 52, -109, 19, 65, 100, 6, -7, -50, 27, -85, 87, -5, -56, 67, 98, 44, 68, -115, 68, -72, -28, -4, 82, -88, -117, 21, 100, -14, 40, -55, 120, -104};
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
    msg.setTimeStamp(0.203811857998083);
    msg.setSource(61215U);
    msg.setSourceEntity(34U);
    msg.setDestination(16518U);
    msg.setDestinationEntity(178U);
    msg.plan_count = 46588U;
    msg.plan_size = 501230134U;
    msg.change_time = 0.4382203214304452;
    msg.change_sid = 20441U;
    msg.change_sname.assign("ZTYEERPWNYEQKBCBZNAPQHJIKXEIVSRVIUBRBNWAPLFZBSVVMXPQHTOAWELVNSWEZIFRUORBNHDTTVIVUACTYKGNDEJMZRVJGNWMJLGDDGPZFJKTZBHODBWGMJYFXPIGMSQXCGQJUUTAGFMAQWQPBHCPMDRXXSIYCQTAEDZIQSKYGRURAEHXSVUSCYFUXWDKWFLJLEMOAOIZOOTNKZCPFKUHNCHHOOYYFKPLTCBSAONLCJDRGHDM");
    const char tmp_msg_0[] = {-22, -75, 110, 99, -12, -81, -59, -7, 21, -39, -119, 53, -115, -126, 41, -27, 85, 62, -83, 89, 124, 74, 62, 54, -97, -18, 120, 79, 119, -86, 64, -36, 9, -26, -64, 69, 87, 23, 55, 39, -84, 46, -46, 74, 57, -19, -18, -75, 19, -88, 112, -126, 0, 50, -128, -116, 68, -12, 36, 45, -9, 90, 14, 22, 19, -89, -32, 32, -23, 109, -98, -22, -106, 75, 84, -128, -5, 28, -88, 113, 126, 44, -48, 106, -69, 3, 121, -111, -115, 68, 4, 75, 92, -4, -62, -99, 61, -71, 12};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QFUTSESQOVDGFVZCPRNPCIOCDEVVQWXFJLSHNUKSAMWYLWEVVMOORNVSKTHCJRFXCJNUZGTIDAAVRWHJQUYWOKDYIRZBSYPPOHXQMFEXUEIZBMEXPDWARUNXTUQIDWHLTQIPYNYNKXHNMHMUKZJXIXXTKWPCYBICLDGSTPFMOLOQRRFNVAGINABAZKFKBUWBQDYSIOGJYJMLLMRMDWTLBCHZJARPSFGASZHZBZPTHBKJ");
    tmp_msg_1.plan_size = 12898U;
    tmp_msg_1.change_time = 0.6734126624958503;
    tmp_msg_1.change_sid = 6428U;
    tmp_msg_1.change_sname.assign("XTDQVVGDFMTRCYLKWGQWJWEKQNEHGYCYSZBYNARUIJZNRDTXKAZDSSECIPFBUQVXCOODTRCDGDQBFLSXJFTBLWWVG");
    const char tmp_tmp_msg_1_0[] = {-46, 74, 97, -50, -116, 7, -82, 79, 60, -115, 65, 45, -93, -33, 44, 56, -3, -63, -82, 98, -14, -2, -89, 93, -16, -72, -26, 22, -18, -106, 104, -109, 30, -125, -101, 88, -5, 81, 36, -106, 88, -86, 3, -65, 110, -64, -45, 91, 0, 120, -78, -27, -67, 7, 104, 113, -84, 124, 29, -6, 37, -127, -70, -5, 113, 68, -113, 117, 26, -100, 113, 100, 35, 107, -91, -119, 98, 40, -75, -85, -79, 45, 91, -121, -56, 4, 56, -8, -125, 49, 103, -92, 24, -105, -27, 58, -35, -32, -24, 10, 82, 71, -54, 94, -107, 114, 31, 96, 94, -114, 126, 6, -39, -121, -52, -44, 0, -4, -12, 88, 87, -122, -44, 14, -125, -41, -56, -73, 75, -36, 85, -103, -71, -6, 118, 111, -33, -75, 76, -45, 45, -45, 97, -41, -4, -74, 118, 47, 77, -1, -100, 105, 73, 82, -83, 69, -65, -60, 42, 59, 124, 70, -83, -90, 14, -10, -57, 22, 66, 66, 114, 91, 6, 29, -109, 107, -69, -42, -59, -30, 45, 72, -83, 91, -68, 11, 67, -55, 6, 104, -116, 43, -89, 20, -125, 70, 72, 19, -120, 76, 97, -52, 37, 121, -111, -33, 70, 17, -51, -50, -31, -5, 29, 105, -12, 53};
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
    msg.setTimeStamp(0.19097570587603263);
    msg.setSource(39000U);
    msg.setSourceEntity(148U);
    msg.setDestination(51564U);
    msg.setDestinationEntity(26U);
    msg.plan_id.assign("YSAKOYPLEQVMJXCIYNQSUFEKNMUSJDCXPWYTRBHHJDNLKOMAQALKJTZRWNORCFESZAVYTVLDJOUPBXLDTMNOHHEVNXNGPJVBGFFWEZLHMATHYGGPGMBIUMDUQFQSKRGULGPBWBOPBIN");
    msg.plan_size = 11945U;
    msg.change_time = 0.6964054581983377;
    msg.change_sid = 80U;
    msg.change_sname.assign("VCEIKERVHQASNQDFFNIJLCVDY");
    const char tmp_msg_0[] = {-49, -118, 50, -122, -124, 85, -79, 82, 27, -23, -106, -63, 31, 16, -7, -53, -6, 104, -94, 57, -47, 106, -5, 3, 43, 80, 124, -125, -128, 84, 6, -36, -3, 21, -104, -46, 58, 35, 59, 55, 93, -21, 57, -88, 15, -101, 50, -35, 46, -24, 111, 71, 126, 2, 33, 59, 79, 9, -6, -38, 92, 48, 59, -30, -60, 101, 83, -50, 88, 76, 8, 112, -15, -126, 124, -40, 58, -64, 76, -77, -112, -25, 102, -41, 0, 0, -25, 99, 13, 97, -92, -37, -103, -40, 75, -112, -14, -23, 72, -67, -52, -64, -96, 9, 101, 59, 18, -79, 34, 91, 10, 20, 119, -91, -20, 17, -106, 50, -30, 18, -9, 76, 77, 66, -69, 26, -78, -37, -23, 31, 92, -123, -17, 77, -41, -50, 120, 17, -35, -9, -116, -73, 99, -93, 20, -102, 81, -27, -6, -107, -70, 30, 75, 37, 38, 41, 11, -18, -37, -60, 46, 64, 124, -91, -16, -9, -43, 84, 54, 45, 113, -61, -81, 83, 120, -115, 37, 40, -60, 95, 102, -37, -25, 87, 91, -45, -96, -66, -73, 112, 101, -22, 55, 83, 13, -104};
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
    msg.setTimeStamp(0.8629457290183888);
    msg.setSource(52763U);
    msg.setSourceEntity(90U);
    msg.setDestination(51114U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("NVWVVNPBKNUJXSDUSVXIJEFKLOUNLWJTWHAMDOQCEUTDLHPAVIZQBIGEXFQEDGLABEUPESKBDHQCLRJMGCGQZRZPOQMSCTZTGENHICWWTINGJZFYCSDYRLFKRTHBYOMOUYIZRGSYTGXCOWQTVNMHEHRQNSG");
    msg.plan_size = 6636U;
    msg.change_time = 0.7325919902336361;
    msg.change_sid = 49919U;
    msg.change_sname.assign("IRYMNZQBPCOBIACZFOVYRSCEJGIVQOXFVJTIYFXFQARLDOCVBJMCHWFXTRUDWPYHMZDVVUCOTYHTKMNXXMBEULRZLLYATHNGAXRIFJPLKZTNAEGNSCTXPACZKZWQBAGSEKZFQHQFHSPMWBIBWEWKBTQELOWRAMGWQSSUDIYQGJISNRXEDCBKKGQDPDFW");
    const char tmp_msg_0[] = {-47, -121, -53, 63, 95, -42, 37, -73, 123, -108, -6, -85, 124, 36, -80, -14, 53, -20, 6, 6, 58, -89, -84, -96, 112, -94, -30, 48, -102, 79, -78, 2, 85, -61, -68, -118, -25, -126, -57, 34, -111, -109, 113, 27, 7, -48, 112, 105, -32, 54, 62, -38, -75, 47, -94, 41, -103, -87, -114, -43, -92, 22, 80, 48, -64, -31, -21};
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
    msg.setTimeStamp(0.9173206257989951);
    msg.setSource(52908U);
    msg.setSourceEntity(246U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(194U);
    msg.plan_id.assign("GJKBQCFKUGQOILWWDOCOHSWMGIGJENKVICYMWMYVHCRUBXZCDCQJIWV");
    msg.plan_size = 47940U;
    msg.change_time = 0.29241106683600526;
    msg.change_sid = 63348U;
    msg.change_sname.assign("CFXZWXCVFAPW");
    const char tmp_msg_0[] = {104, 110, 0, -84, -68, -40, 72, -97, 15, 82, -111, 100, -106, -31, -39, 70, 56, 84, 31, -58, 116, -39, -61, 85, -30, 84, 72, 83, -27, -106, 73, -46, -58, -82, 53, -21, 60, 103, -107, -84, 98, -75, -75, 24, -71, -55, 42, -68, -109, -97, 56, -96, -47, -4, -25, -97, 50, 71, 19, 68, 49, 118, 9, 71, -29, 46, 118, 91, -97, 114, 114, 110, 72, -22, -81, 113, -15, 17, -93, -14, 77, 59, 70, -94, -32, 33, -35, 18, -43, 50, 30, 38, 102, 53, 39, -26, -46, -12, -40, 21, 73, -71, 46, 93, 5, 76, -51, 56, -113, 96, 25, 27, 59, 49, 126, 114, 115, 85, -9, 78, -4, -93, -27, -104, 117, 70, -34, 1, 83, 96, 2, 36, -20, 86, -115, 96, 99, -86, 45, 33, 75, 18, -66, -28, 2, 92, -83, -109, -79, 92, 19, -70, 23, 24, -108, -108, 116, 19, -43, -73, 80, -102, -88, 87, -32, -4, -15, 107, -126, -64, -73, -65, -58, -25, 67, 75, -42, 14, 56, -87, 114, 71, 16, -123, -43, -41, 123, -120, -12, 104, -123, 31, -31, -23, -19, -86, -96, -104, -106, 41, 90, -27, -118, -57, 75, 55, 7, -36, 73, 30, -47, -72, 96, -28, -116, 62, 124, -128, -53, -46, -37, 56, -1, -43, -120, 47, 69, 29, -60, -56, 95, 70, -99, 122, 38, -69, 24, -7, 16, -107, -108, -103, -63, -88, 94, 9, 61, -39, -28, -111, 60, -79, 67, 103};
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
    msg.setTimeStamp(0.4434107756284206);
    msg.setSource(47278U);
    msg.setSourceEntity(84U);
    msg.setDestination(54186U);
    msg.setDestinationEntity(135U);
    msg.type = 49U;
    msg.op = 242U;
    msg.request_id = 10877U;
    msg.plan_id.assign("OBTUNQAIZXAIBXGADOWXNSWEYQOANTTPCBJPRDJYKXTNJPLLSMPHJPZSDMPIGPGTLODWBCH");
    msg.flags = 38545U;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("PMSWWBLVVAZKSOZYQINLLWCZYDJNIRSIVRUTQQDZUMIPEUSDMHJQQOGFBURPLHEHCNGPRGTGXCKOAVFNMDHPBIIFAUMUVAUHXXBIMNLFHVOETDREYAZGHDRTGALBQOFLMTWXAJSAVKZXJCXCDFLOEBBFDFXPBNINZVENUCKELCAYQPIRUECJYSTCLMODYEKKTQKPTJXYVGBJSAWGRSTKVOYRYUJFJSWZOQNOMMWTHDZFJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TTPHASCYQDZKLAMSRZZTGFYPNTHCQHBMJFIORDICANANGKRVVMYARMFUPAMOLMNYVBSJLNBVGIWBQAODOPYASEWSTLEDGVFQWKGJFHZXZLESXUOLFNFIUIHKVCNGJXCBHIJEBPQYRWTPCZKLUHQJGEAPBZUJCX");

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
    msg.setTimeStamp(0.3144614699096967);
    msg.setSource(61441U);
    msg.setSourceEntity(243U);
    msg.setDestination(17054U);
    msg.setDestinationEntity(14U);
    msg.type = 118U;
    msg.op = 43U;
    msg.request_id = 52413U;
    msg.plan_id.assign("KIEPGYEVYXKGSDSBVZBHMUEQPIXFWCSSZMETNCQZNEEINAUTYSXVZHFPJZGUOXMBVOMHBRQQMJFAMOOYTJCIZDBCIVDWQHEFGWZJNEKQWCTRJFICINFMQVOCKIEYPARUDXKJMLUNGDHOSLDHJTFUMRAUPIKHXYLRQBSSXSUKVLRRAOABJOQLBWJAKTKXTNJALDMONHLLGDZIFKLRBTWWHVYQRAYNTDCA");
    msg.flags = 50686U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.43766388661515043;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CUFTIIOTTPVRRWXXUYYSJOKXZUCGAYIWXUSSPFPXOUEHWQUBZGWQBXCAH");

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
    msg.setTimeStamp(0.8490420939230483);
    msg.setSource(19939U);
    msg.setSourceEntity(172U);
    msg.setDestination(21927U);
    msg.setDestinationEntity(163U);
    msg.type = 84U;
    msg.op = 70U;
    msg.request_id = 52284U;
    msg.plan_id.assign("ATYQIFJIFGHGNPFQGISHVDLOOGKJXVOZKSMBDCKCZCFGWMPRZQVPYXXPLMFZJZNHYRCAXRDAXAUTNEDOSLKBSNGTNWIYHTMERSSMLIXEWZHUSOCJGENHNPYDSBHLGXHYBJRBWOIWNUAEHODAQVMAVCFUYIQQSEPDTILOLMBXKNMKGUWJACZJWWSEMEKLWLYZXRYVDPPCQN");
    msg.flags = 4445U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 235U;
    tmp_msg_0.op = 171U;
    tmp_msg_0.request_id = 39649U;
    tmp_msg_0.plan_id.assign("CGAESHQUKMTUIRBYAZTXDEKGXCLXVRHIJUMLSVYIRVAYPRTQZVXGYDMMUFF");
    IMC::LogBookControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 14U;
    tmp_tmp_msg_0_0.htime = 0.9457159175560935;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VTIOCMECSMCVBETRHVPPPRJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HTVDAREKTJWICXNCTOUCBMSFAAKVKXDQHQSXELYLDLWKHNERUAALEZXFURBNMPZGLJGDMQARZZPCHOOCCNAMSELLSSAVJQRXNNLQOFLTJLIVVTGCIUIIKJMZERRBJWWSHNWIBDGGWTDBECYBYOI");

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
    msg.setTimeStamp(0.7542960621160693);
    msg.setSource(460U);
    msg.setSourceEntity(111U);
    msg.setDestination(51855U);
    msg.setDestinationEntity(40U);
    msg.state = 164U;
    msg.plan_id.assign("NYEATFILLBMOGWLDKZONTVPDBOFMYLTKECSEPRJGWMOTAWUVQAVTEOFPHJSURAOAEZARDZTXKGVJZVZXRQCWGWPQIRDHBGQIMYGCIAUYLCHMHRPJBXYICUWUGNLZRDFJMCHUYBPBVWTQNPNHLNXXCTFFXWDECCPWQFFUITADRISMSQXBNUEKGPSYGKTQXNVKBKZELPIKSUXWOJZOLVQJSHKEZGYQAVFMNYZFIDB");
    msg.plan_eta = 1442560816;
    msg.plan_progress = 0.5139624265385928;
    msg.man_id.assign("RSDMSISDPQQVTIDEDNJSHUNPRATJWVXKELQZXCTTBACRUKHMMZQUTGWBXFANPSHPPESWGZHFTLFULYFODYEOIFYBBGZWGMXYPXMBKBIYXC");
    msg.man_type = 62665U;
    msg.man_eta = -1609170488;
    msg.last_outcome = 30U;

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
    msg.setTimeStamp(0.4083115733213002);
    msg.setSource(54987U);
    msg.setSourceEntity(154U);
    msg.setDestination(54416U);
    msg.setDestinationEntity(218U);
    msg.state = 97U;
    msg.plan_id.assign("DOXPBCMDGQNEZJSMBEHQVWNRLVOMQIUPSFFZEDNUMUDSKMMSFAWVZEXAWLJOEPELUEWFJXJMAPOTIHBFFHCBYHCGCVHUZLZBTLPRRKKEEXZYQDHSSWCSTLCSJVUCNLQIHQLFYVBPWJKVPTJHGRYYTINIPJKTMODKYYNBCGAZRYAFWINQWRITCBDLMDGOPMUSCNUJLKH");
    msg.plan_eta = 1852993753;
    msg.plan_progress = 0.7208842280723364;
    msg.man_id.assign("TGDUEEBTTLSICQDZOIWTVTDRRPUXKTBYHRBMUBMCXUPLLQHIKXZWCGJERQSFMDRMRADRVGWSAYQSFNYLQNPVVJHHAHOOUZJUZSYBNVOPATMTAFDCQDZZKOBINEHEYJJIHOJRCPLFKQJMKPFVYYSBNLPAEWCFVNWAJUQZJMSFVLNGTKASPNGYHUGXBAXOOITBKIBWQMZWWDXQJMGXRIOXSEKVUGCECWDLLANSFXVI");
    msg.man_type = 38726U;
    msg.man_eta = -1934643164;
    msg.last_outcome = 204U;

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
    msg.setTimeStamp(0.9782904851919907);
    msg.setSource(11581U);
    msg.setSourceEntity(184U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(167U);
    msg.state = 186U;
    msg.plan_id.assign("TCASEJSHFMQWDFBYUFAPS");
    msg.plan_eta = -1450146595;
    msg.plan_progress = 0.2850179420124579;
    msg.man_id.assign("HKKAQKBGIIUMXESFYMYFTLDHXHFNDYEEQBAZLXTWABUHAWJTPNPZEDJMSSQOIJQWAYNUMJPFUIOZFMVNNRBSMHJMUSFVGNICBGJZOWRVYJNQQIOBXRIIVUXZVAUMFCJOVNUZSLAGQESCXNQLTAO");
    msg.man_type = 12712U;
    msg.man_eta = 661951898;
    msg.last_outcome = 161U;

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
    msg.setTimeStamp(0.4277038821283039);
    msg.setSource(65120U);
    msg.setSourceEntity(124U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(168U);
    msg.name.assign("MQAAVTNVIUWYKPAIEOQGDRXWALZECDXZTVMDNEGUXCWLFJXMXNMAGHSUJFQGGYFPOUJVXRJHDANDBKLXKMEWUZIFZWHKFXBFCYCMROHGPY");
    msg.value.assign("ZNZGSMZVTWTNLZTHHY");
    msg.type = 33U;
    msg.access = 143U;

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
    msg.setTimeStamp(0.10639007763136832);
    msg.setSource(8608U);
    msg.setSourceEntity(253U);
    msg.setDestination(35108U);
    msg.setDestinationEntity(28U);
    msg.name.assign("FHFRWBJXHLEBLFSZBMOXNZIJVOEDIELNSHVEWCAVUODZWFVDTEHAAITTYPMCJFGDPANPJRERBHGKBPGKJGMWIOYMLOITVRXVGKOANCWLTWGYKDYPHBMYBBJEDCOEHCXFSFCUIS");
    msg.value.assign("JSSJOKQJPQUHCVELOHZGQZRPBTRBRUBZLVVYTPFWMQGYXJMMNIVXVEGXXYEBKHRXYAQLCXYNUCKCBFUAUUTF");
    msg.type = 39U;
    msg.access = 45U;

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
    msg.setTimeStamp(0.3563974500329551);
    msg.setSource(2053U);
    msg.setSourceEntity(151U);
    msg.setDestination(36187U);
    msg.setDestinationEntity(89U);
    msg.name.assign("SYSRXBTUDXTLHVTOTGYWWTDKNLUWFZXWNKJBFAGBDJQXOEGVVOVRAZPLKPZNJUCAWIVPUDUVKHMQJNBHEPCHNRFLHRDATUWPYICYORUJIGSBEFGTBFHRMAMTIMMQGJBPFBONMZSLHNXXWZGCVYFSFZZTSK");
    msg.value.assign("MHEZZEBGPOQATDANINMXTYTWENDXHNAYROCZZRTMZUBFKYEGQSYTJJFKVTCFBQJELYJTUVHJDOOLKOIIUFHTHRBYFNMCXRFPBQIVMVWBBJUHOMPD");
    msg.type = 215U;
    msg.access = 55U;

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
    msg.setTimeStamp(0.2821126875753809);
    msg.setSource(29930U);
    msg.setSourceEntity(150U);
    msg.setDestination(64174U);
    msg.setDestinationEntity(95U);
    msg.cmd = 143U;
    msg.op = 23U;
    msg.plan_id.assign("BZAXLZBAFRLRPBLIDJSXPIMXWNOQLUYIEYTKUHQIVIARXZIWHYXSBNKIUDWYQOBWWITPCOKVWXZVJEETVRRYPCGERAAPJBMBQAADSHUJANGCUQPLJRDYDRVXVGOJEK");
    msg.params.assign("ZWPIVRWUZQ");

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
    msg.setTimeStamp(0.7633000058897828);
    msg.setSource(51120U);
    msg.setSourceEntity(60U);
    msg.setDestination(8392U);
    msg.setDestinationEntity(183U);
    msg.cmd = 74U;
    msg.op = 152U;
    msg.plan_id.assign("RRRSJPWXSAFEMVEKOABZCJSLGLIUDCYHDCHQTVEYFSTQICGKPESTVHPQYKXFBPNKZXM");
    msg.params.assign("GWOXGSFTGAIUDKBVSOZZAXHXPNLNRZHIPUTEKYSGYUOOIEDJITHOYLITHNFRHFLMGMPERSQBQWDDWNFKXGCQTDZPYJBDJMKFSCAKCNNXVAMNOKWSXMYWLOFGZRMASJZJEOLURIYQVBEVEURDJKYFQYTIKVCIUNLJUTFIDBBRCRMJCYWZSLCAWXPRYQWQQZVGPUMTEBBCNPFLOQSVAQEHFAXNWHADV");

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
    msg.setTimeStamp(0.8878943260811083);
    msg.setSource(51083U);
    msg.setSourceEntity(4U);
    msg.setDestination(49213U);
    msg.setDestinationEntity(189U);
    msg.cmd = 17U;
    msg.op = 234U;
    msg.plan_id.assign("VFSTWFUBKVUVEQAOMNPCPKZASOUNYYWAGHEWJPACMMIYSAZROBDGMJWXDTYZVCIGOPPBWFFDRPFPGKUVENVOSTYTURSNHCLTAEPQRWXLVSLNKCDZBQGBVYLVRDQXXSWAEH");
    msg.params.assign("SCNNPXDTKNMIZBLCXEHDARQJLKJLMDYIVJKGTAIXWFEYTYTUBCFNABPOOSNQXGHKPVBMVQALSSXCZDIGBTRHTGWMJWJCRJTITPBWYFWUHGRVIQRDNZJOJTPPVEZMWXVODPDXHNAHFGVANIZEKFPSGJLVCDSLRUUWROFGXMEHIKSOWVKCSFHKEKQLR");

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
    msg.setTimeStamp(0.21178962613029118);
    msg.setSource(7224U);
    msg.setSourceEntity(36U);
    msg.setDestination(41556U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("BFDRDWLMNOPUZUSUSWAVBWRKDBIVOJRPHYOFMLCKWITGUAIBNMIMMYPSWQWAZDTXHYVYWOJCQAUVVGVIRLTJYPHLKXCTGSEFJELMYAPOZDQXA");
    msg.op = 161U;
    msg.lat = 0.5036986143192311;
    msg.lon = 0.24170974747255947;
    msg.height = 0.8583124324850405;
    msg.x = 0.8645981953569276;
    msg.y = 0.9008999718156839;
    msg.z = 0.6926796066186771;
    msg.phi = 0.618456650137123;
    msg.theta = 0.6990436089489498;
    msg.psi = 0.9653724770424134;
    msg.vx = 0.2622813631181238;
    msg.vy = 0.7772615847413005;
    msg.vz = 0.6805717648861036;
    msg.p = 0.34483853849055834;
    msg.q = 0.27956272211234245;
    msg.r = 0.45730040637331615;
    msg.svx = 0.9473915142533285;
    msg.svy = 0.16924929014440715;
    msg.svz = 0.9322551226816727;

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
    msg.setTimeStamp(0.9511088272675284);
    msg.setSource(11019U);
    msg.setSourceEntity(59U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("OOLMFHSZUOJCBZOWYPSMYAHQVRXBFEGPBSJESGXNNYVVLPQORUHJAOCDKFWBEAQOGWIXJODIAWRPFUAZNVLWTYFITHTFTYIWCUUMENZOPKKCWDRPDGRVIGRSVLBMSRDAGZBNQRNYWDJUZLZVELTHVDHXQOECCYEVJUXQBTNNUKQHRSVXMBTDKZHGAXMGKXNAXEDTMIEGMMWZQAFEIWJFQTLQYMIKCIPCSBLCLPJ");
    msg.op = 32U;
    msg.lat = 0.19678098037239722;
    msg.lon = 0.23269553454592917;
    msg.height = 0.2008023516371077;
    msg.x = 0.6792628983837287;
    msg.y = 0.11987464084975552;
    msg.z = 0.920914120202088;
    msg.phi = 0.01845216446518705;
    msg.theta = 0.916549839515971;
    msg.psi = 0.009478772472290786;
    msg.vx = 0.49824839270595545;
    msg.vy = 0.8524765400465735;
    msg.vz = 0.00531373082701736;
    msg.p = 0.6655901778400494;
    msg.q = 0.42970955867615834;
    msg.r = 0.27575002770169144;
    msg.svx = 0.08440441403625976;
    msg.svy = 0.15405090568420954;
    msg.svz = 0.9212515815162691;

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
    msg.setTimeStamp(0.39612427630025004);
    msg.setSource(54318U);
    msg.setSourceEntity(146U);
    msg.setDestination(43324U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("TBADIKTCSPPSMESUEXSOPWIXBIXGXKSBTAMIRKVRJUDTLWEQDHISJPQLPIRFVMWDANOCNJLTQFWNCJSQYYENZDQYHZVAEVGMDKVVUFGPDFVOZBZNBOQZTQH");
    msg.op = 166U;
    msg.lat = 0.8768679137644433;
    msg.lon = 0.6514013253210046;
    msg.height = 0.1200821893377293;
    msg.x = 0.46637064946413764;
    msg.y = 0.2819793929210661;
    msg.z = 0.47214671382342377;
    msg.phi = 0.3435864730071626;
    msg.theta = 0.039618964470235496;
    msg.psi = 0.1775251675487194;
    msg.vx = 0.21309239360220866;
    msg.vy = 0.6864952304653064;
    msg.vz = 0.26743284022264735;
    msg.p = 0.7515250175174542;
    msg.q = 0.21287934103684913;
    msg.r = 0.6763903781512992;
    msg.svx = 0.5314164998704553;
    msg.svy = 0.41065438569975177;
    msg.svz = 0.2707753227949181;

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
    msg.setTimeStamp(0.816858952938037);
    msg.setSource(29283U);
    msg.setSourceEntity(214U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("QMZBWTXWUDXKDXPHYZUOHQQAKRGSEHMGNOC");
    msg.type = 104U;
    msg.properties = 98U;
    msg.durations.assign("RNLQIQDCIGBTIFINAXRBIPSMUSDDFTNQZVBCHBMGXCRWZGHCXKTQFCHGETKZYPENXLPFKHQTFAWOMKMWQBUZOKENJIXNUZKRFYAZYKCCGCMUVTMERPKWLDZJHFVYEABAOIVUWTCNDJWHGASSEEPC");
    msg.distances.assign("WNLVHWMFVXAOAQCVVVXFLCEWYXZMUZPMEHXEHLJKUVKQSXHOXIRAYIPDMKASJVNOCNEHXJRYHHPSTCSQVEZOMLQCPXWKBJFQBOEYGZCDQMJBHLWMYDBCVAYLQAJOTDKFPRTNRAZCEITQNEKGMYEPUTATMFUZIWRJSBQVISIDWLGFDYSBJOFKQBSJKXAU");
    msg.actions.assign("MKRSWHHERKHAQGIMOXGVMDZOXRIEMBBQTXHYZXJKAFIKHZZTJJPXZSWKELQPWMTUBDPTGWCAGSBTE");
    msg.fuel.assign("EGWPGYLQPXAEYZZFZAXWHWXURWSWVNODTOKCRIFKWWFQKKJALITXXOPYHYYPMUTZCLITJNDEMCKJSZKYWMAVKISAFBFBYCVOBUJRTXHSOPSVAHCM");

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
    msg.setTimeStamp(0.3219382038211397);
    msg.setSource(40438U);
    msg.setSourceEntity(42U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("QZVLEGYFEXZPPYGODRIVEUSUVMNXHTJNAUWVWDVHAOUNXMUAMSW");
    msg.type = 120U;
    msg.properties = 147U;
    msg.durations.assign("EKTYZUFDFGMABAGHXPABXPHMEDDDCXSNJGPVWCSXHFMVFNCPZGZFEMTTCWZXSYQSLJKWWHTBOJIPKVPBPDEONKPHXRJESUWVOKXLBMUYEMOKZDQNHJCHIEQTUYLLNFJUOAMLCIAJDLHALBKLAVUXNCRGVBDBISNYEGKYGZAGWMLTRQCGY");
    msg.distances.assign("HORXUGDBUSSQXZAJVVVILXODCFETRAHUPCHCDAXEIRUDURHYUTZFUPBSIGMZYCSVWWSYHNFKGZDFBSDAQVEOPRZTBYESCJTDXEAOLOMFITGJJMPNHIROWPRRGSABPYPLAKTXIXNRLLCIACQMQDYWEOPKMVRFEZXKMKGMIDKIQVJKVLNSGTACQULMAHQZJBNCWQNKJGMBJWHFTFLIYLKYEFOBPXWJZSNTXJCFTUQNVHWNEYOGPDWHWBEQ");
    msg.actions.assign("OKKPRDUORPLBMCBYRGSFWXAZRSKRXHAVOEKBNYDHWXZDJFONPJCMJTROBZBAHLLFTAREUKJEQEDUCXFCUFUJDFEEHYDSDPSTJXWFIJUNRWSMVZIUZJYCEAGDMAVZPGMMLPBLATQQKOHEEGTNCMTZLHVDIVBFHCIQAXLYPISWLOOXTINWNZXMGJYILRWIQNQUTWPXSCQGUSVGYXZNYBUFQOIMSSQYKBJNTHBLKAVPWAKHRMCFNPKDIEZV");
    msg.fuel.assign("ZOMCYUIAUMOSYQOCAAHEBYITEZILGAUKJELKUROQJEJNOWABPRVOLDDLIKIHDGQUQHSNKGEPHANWKPGITBBNOTPHVFFQEVQDRSIUMRCGTLWSXRZUFSVNGJNFCXCLU");

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
    msg.setTimeStamp(0.7699444669379676);
    msg.setSource(32439U);
    msg.setSourceEntity(69U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(72U);
    msg.plan_id.assign("NWNNUVKYHDMQOBIUQVXQYVIOMNKJQEXZYBSABEPGYRFECYNBHPFRKFZUQALDRDLVKVDSVETGSTGPETCKMBOKOAPSAAYCXWOCXXZRAWTGWFLYCFRCPLKWULJWMAJMWVJRIZHJHHSHLGTJDBUQ");
    msg.type = 56U;
    msg.properties = 211U;
    msg.durations.assign("FBHPHPIVYELRUJAALKDFDQLMUFRGRWGQBSFRBMJSZJSHRVREYOPWBMDWVENYYTURUOPNRAEZLBDYXAOLRVQSQLVHHTKNFNDZFAUSOAJWOMILCA");
    msg.distances.assign("JLEKVIEXTZGQEQPYYWWIQHPKPTPNISNFOGDMDCZMOUVTNJOXIRMMFVDDFTSRLHUAHCMUPLJBXHRDKLBGPNQLGRVDWPSBLOUUXJMEUKEYFWRI");
    msg.actions.assign("KXHUPIFKINJOSRBOYHMDQPRIGQJEZGGACCEGTMOLTTCURJDZSQFTOSCIABRK");
    msg.fuel.assign("TZPBXUFMSZJWQBQOEWICWHVBWFFLIOMCSAHPAQQCLZMQBGTTDX");

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
    msg.setTimeStamp(0.07500088332515831);
    msg.setSource(62430U);
    msg.setSourceEntity(180U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.11220497475054758;
    msg.lon = 0.5348571807244618;
    msg.depth = 0.6095206273905156;
    msg.roll = 0.2989195949417175;
    msg.pitch = 0.4315713651617268;
    msg.yaw = 0.624408501346253;
    msg.rcp_time = 0.8066299090183998;
    msg.sid.assign("KGQWTLBAQNPRYUCDDRQUBLLEZFIJSXQVFQZXDHTPNIAHMFCRYPOHIXGMP");
    msg.s_type = 253U;

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
    msg.setTimeStamp(0.23646421033539677);
    msg.setSource(64905U);
    msg.setSourceEntity(216U);
    msg.setDestination(2744U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.7888609576838423;
    msg.lon = 0.8482395985206893;
    msg.depth = 0.9107872904702026;
    msg.roll = 0.343900262816377;
    msg.pitch = 0.2659903193140104;
    msg.yaw = 0.5935312712685736;
    msg.rcp_time = 0.6966123260887589;
    msg.sid.assign("QNHDIHCSANLAWKCLIFZBXICXPBMLUADUSLXKZVGOROJU");
    msg.s_type = 203U;

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
    msg.setTimeStamp(0.9407341925887954);
    msg.setSource(49819U);
    msg.setSourceEntity(40U);
    msg.setDestination(41603U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.7516661901029197;
    msg.lon = 0.8697559601424963;
    msg.depth = 0.17005639074866186;
    msg.roll = 0.4975090592167749;
    msg.pitch = 0.7482086014853977;
    msg.yaw = 0.9744787148600543;
    msg.rcp_time = 0.4138187402724758;
    msg.sid.assign("YWPCANEHMJZZZWFTBIPQMLZRUBCNRHVLSHGDXUYXVPBNSQKGTOIYZCGULMDAAMRVNRKRNJDTJVOFI");
    msg.s_type = 27U;

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
    msg.setTimeStamp(0.7257625053629921);
    msg.setSource(47503U);
    msg.setSourceEntity(107U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(159U);
    msg.id.assign("HMNFJEJXBEGIPMBPVQLZVDPYKGEICFJAQZGMTYDELFXGASBQAKAFJJSJRCOLEAKWJLPMHLNZMKQRZBSRAYTYSYNPBWSOSBYTTUONKTH");
    msg.sensor_class.assign("LGBFFPSFKQOMWVGLNRGAQOTAEEZMIFVBXYURUCVJBMOEBMKGFDTQWTXVXDRUAIPJAWKYXJBEHUQCCIMMOYTNZLSTHZZSIYIPBGXKTRMUQVRECKENQTJTFKSHKWQGMDNABUWPXNNGVAZZYLFZJSDKLEZSHJHDDNSWRCBEKPONISQAACIJOUJPWYVHHIXCRYDMZCUPCUJAOHQNYRGPNWEPOBFDGWOWFDXTLLCSVYFA");
    msg.lat = 0.08973736776873698;
    msg.lon = 0.5171232128413271;
    msg.alt = 0.5847259427727306;
    msg.heading = 0.6645546054554429;
    msg.data.assign("KQCWQBTLBCQEDBIQDUGDJNKUQTJGKVWLTFSSCMMOMBPMHDQOTYFWBVPOVBINHQOGDIOCEHCWAQPJRJHEKFCRWGHZNRLSNIMXGBVOGWSRELWSNNGTVFAAAUYKFZLYHZAHMXPAYGKISNCLSLZUUKXOXJFZDOMTVFSAERXMTHDIAILNPUFEXVPYPRELEUL");

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
    msg.setTimeStamp(0.04952793993634297);
    msg.setSource(7291U);
    msg.setSourceEntity(90U);
    msg.setDestination(26033U);
    msg.setDestinationEntity(144U);
    msg.id.assign("TTSQURKYRBGEKYXVUXFVHWECQXSUFOYXCDOPCZKARLYZPKFBJACCLHBKVFSIVZWWRSIHQLXHNTPCDRPOQEXUEGPSJNMBIOXGQXMFBIVCIPFZMJCSDHEGROLKPNVFPMJURDLRZKHTYNDMYKDRXJBJZECTUMPJAHYWSVPSWLTANEUYLW");
    msg.sensor_class.assign("FJLYTYMMMUKZMIINAQZDIMRRHOVQQPGBWLGPZYEAFWCICXVETCVVCSKSFAIKSJWLGCYHWRKTEVYZYEKZSDSCMPTKKXVPXSTHPNTMOBHJFSWDPZGWTGBOZYNHBFASUWBZTMXMDODOSGIZWCIUFDUHNGKCJGYYL");
    msg.lat = 0.9792884414918339;
    msg.lon = 0.1900727213675899;
    msg.alt = 0.6909895450720749;
    msg.heading = 0.617479547252739;
    msg.data.assign("EVPMIZBEKWQUYCPBHHSFGCGLJZHLXZAEFIBNKZUJVNNRCEYQNLPPDJUFTAMYQTFPN");

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
    msg.setTimeStamp(0.7693644583753422);
    msg.setSource(22754U);
    msg.setSourceEntity(187U);
    msg.setDestination(64231U);
    msg.setDestinationEntity(221U);
    msg.id.assign("TRRZEPFEMBYRZGMARV");
    msg.sensor_class.assign("ZPYOYJOKDLSTFDQTLQARRUURKSWCQMIPVVGHLJIPZPPPIWJDHMSQAIXGNGRISRWCGDMQQWBINCHKIJXEUYQWTFPMUREMZJHGEYVNWKRJXDQNNSNVCEDUANWOAP");
    msg.lat = 0.9107262462527799;
    msg.lon = 0.6928834529122843;
    msg.alt = 0.39179697047876905;
    msg.heading = 0.5707777203463594;
    msg.data.assign("PLGBRHUZWPEIWJJFWTXUKTOKQFFHTEYKYMODPHWEGORXNFMIWRHLBDIVZNREZLGCZ");

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
    msg.setTimeStamp(0.013892916491264451);
    msg.setSource(56090U);
    msg.setSourceEntity(245U);
    msg.setDestination(37439U);
    msg.setDestinationEntity(15U);
    msg.id.assign("EMUCXOVKEVXGQRNEZAATTIFJMHPWXDPIHDMVULKPHGGJHWQZWJSDIOIEYKOPRNKNSZYTKQBRLAFGIUGIRBDXKCBQDZOECMKNQANTXIXPZFTHZBRSBMYWOJMRQBBUATMWYHVFRKNEBFTPUMADVFQGPFAJSCCOKLCHZVLWNIDE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YVAZUDFGZESXXEWNAILROZOSHVLXSFZBNOXDXCOMQAGFASUKMHMBNLHJAWJTSXJPFAICYZOEZLDVMZYTPEYISENQAJMXWXREBBULKRLATVNIQTFGURHHEZDKCLWFVSQCPONGEUBPHCPJPBISMQHHRUTIGUVVGQERWYJRCFLIWHGKFJWUOCTAKIBSVZVSXPJXKGMUHDODLCNDNAMNNTRBWDPZUYDFRC");
    tmp_msg_0.feature_type = 241U;
    tmp_msg_0.rgb_red = 14U;
    tmp_msg_0.rgb_green = 159U;
    tmp_msg_0.rgb_blue = 15U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6508041569878817;
    tmp_tmp_msg_0_0.lon = 0.36469800191245616;
    tmp_tmp_msg_0_0.alt = 0.9842698562654225;
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
    msg.setTimeStamp(0.68404507633795);
    msg.setSource(30505U);
    msg.setSourceEntity(39U);
    msg.setDestination(14016U);
    msg.setDestinationEntity(222U);
    msg.id.assign("LXJHYNYQOKNHL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RJFOSQNIDLOTOTUWALAVEHPTNZDMBASGBUEZKOLWSMBQBNPWFBSYCQIRXZJRPWNWQGSSTHRWFZVNZNSAAWZCFQOGZLXDKBTCXQSL");
    tmp_msg_0.feature_type = 188U;
    tmp_msg_0.rgb_red = 67U;
    tmp_msg_0.rgb_green = 192U;
    tmp_msg_0.rgb_blue = 28U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.1410892068023223;
    tmp_tmp_msg_0_0.lon = 0.39432760181784754;
    tmp_tmp_msg_0_0.alt = 0.8241679828564494;
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
    msg.setTimeStamp(0.008584840977476804);
    msg.setSource(11731U);
    msg.setSourceEntity(200U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(101U);
    msg.id.assign("LJWZYKZUIWSRLUKZEHRXSCB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RJQYECGJLFAKVNOUISEBQJWGAGRYWBBGVEIYLQLFFKOJCWFVCCLZEVJOHWQYARQIYYTMZBNWVXNSVBPBRMHBDUZMDYZMTWCTIRDTODVZGCDGUDCGPEPXHLGYMIPTREJKST");
    tmp_msg_0.feature_type = 236U;
    tmp_msg_0.rgb_red = 242U;
    tmp_msg_0.rgb_green = 129U;
    tmp_msg_0.rgb_blue = 183U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.794388566723927;
    tmp_tmp_msg_0_0.lon = 0.3381291545259597;
    tmp_tmp_msg_0_0.alt = 0.6249987608033993;
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
    msg.setTimeStamp(0.0915296938585688);
    msg.setSource(11656U);
    msg.setSourceEntity(93U);
    msg.setDestination(46139U);
    msg.setDestinationEntity(113U);
    msg.id.assign("FYIGNWWJZGPMMMYRQBAMHTYTXUXBPRXPOHFHJXJFDEBNSHJILNOVSCKBBLVBBWNODROSYPHIJVTOULCAIRZKBVKVGANUTJSGFTAMPCAKUHLVGDTXJD");
    msg.feature_type = 97U;
    msg.rgb_red = 143U;
    msg.rgb_green = 97U;
    msg.rgb_blue = 14U;

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
    msg.setTimeStamp(0.5601788132622483);
    msg.setSource(13708U);
    msg.setSourceEntity(127U);
    msg.setDestination(61962U);
    msg.setDestinationEntity(175U);
    msg.id.assign("JAGUWBOIXQHFKLOFESIIJSQEYGJTROHJKLQGATPIRPYWWCVZXIWVSEJCCIAEVSOJFUDSFYTKGRRPRQPTPFYCKWVKOTUWKVGDUMBOZSBUASQDRQSAVDKVHSRYNIRZMPLNAFYKFCHBZJHWDZOVWXT");
    msg.feature_type = 172U;
    msg.rgb_red = 144U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 158U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3184341643712236;
    tmp_msg_0.lon = 0.48591681502604966;
    tmp_msg_0.alt = 0.655474550443075;
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
    msg.setTimeStamp(0.5195408636021047);
    msg.setSource(29785U);
    msg.setSourceEntity(110U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(141U);
    msg.id.assign("QYZLXFQVIKOCZTHDMTIBECVPDTEKPRNHTJOIVHAIFSLZDNMLNQMOOQGJIMTONSX");
    msg.feature_type = 192U;
    msg.rgb_red = 77U;
    msg.rgb_green = 120U;
    msg.rgb_blue = 161U;

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
    msg.setTimeStamp(0.8743244572646598);
    msg.setSource(33651U);
    msg.setSourceEntity(200U);
    msg.setDestination(53177U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.40313303186275773;
    msg.lon = 0.7331909036558373;
    msg.alt = 0.30316248800834267;

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
    msg.setTimeStamp(0.14425494400280892);
    msg.setSource(39771U);
    msg.setSourceEntity(169U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.37596207593958375;
    msg.lon = 0.5988439473916104;
    msg.alt = 0.5800118166010729;

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
    msg.setTimeStamp(0.7989598172830402);
    msg.setSource(64692U);
    msg.setSourceEntity(222U);
    msg.setDestination(14718U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.1299456997585131;
    msg.lon = 0.08266257420666412;
    msg.alt = 0.6887816931653498;

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
    msg.setTimeStamp(0.7317103588955992);
    msg.setSource(54260U);
    msg.setSourceEntity(119U);
    msg.setDestination(24126U);
    msg.setDestinationEntity(171U);
    msg.type = 246U;
    msg.id.assign("LSXIGVQGRCBBRJKFNAMTLEHNVHKAVRRY");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 20230U;
    tmp_msg_0.lat = 0.7737134628633602;
    tmp_msg_0.lon = 0.5127159243575623;
    tmp_msg_0.z = 0.8638854958294451;
    tmp_msg_0.z_units = 213U;
    tmp_msg_0.speed = 0.7540165214492244;
    tmp_msg_0.speed_units = 84U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.04856239907138826;
    tmp_tmp_msg_0_0.y = 0.6139355825235411;
    tmp_tmp_msg_0_0.z = 0.375356825478696;
    tmp_tmp_msg_0_0.t = 0.4180548521465095;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UNXYVXAKBWFCBFWDVGBEBLY");
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
    msg.setTimeStamp(0.4755631726034826);
    msg.setSource(54703U);
    msg.setSourceEntity(223U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(152U);
    msg.type = 148U;
    msg.id.assign("YGELTYBPPQSWOWXBBIDZLKCGQUSJGLVWCJBAMYIEZJVOBGSLVINHEGQAVISGXLNWVQPIX");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.5382840534279086;
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
    msg.setTimeStamp(0.24784446139994176);
    msg.setSource(14861U);
    msg.setSourceEntity(223U);
    msg.setDestination(64725U);
    msg.setDestinationEntity(226U);
    msg.type = 5U;
    msg.id.assign("SWCOLVCRCOESZVFDBLHWWTEUIBEIHYTGTSSEQPKMTHALRFRDKBXXNIBAKZKRDTNMNSVMMWADZXQHXWGXZIKNRRHAAHUQJPCPHZXJFSKOFAOIYDUVEYOSDZUGXTYWLWMQJMYIKSEAQFZQBXEFKCNYPGLNZIPGYVKGUDYDEZEVVDNUJNOVTVLMJUJRGIPJZNKQ");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 157U;
    tmp_msg_0.plan_id.assign("VZYWBXEKANQLXEYBFWOPJBMDSUTSOQILACUPCGJTYBKVVNSGZXPTWLFRYITBLSXGXFRZLTZAQBDCHMNPJSSSTWBPEYJVDXGSVJPMDJXSLFCVKKUSZYODXOTFQNQWZZRDWFMOHMKKYCKRDLEIUCMNVHWGCUDRQIJGVAIHCRBUZFEMIILADQ");
    tmp_msg_0.comm_level = 194U;
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
    msg.setTimeStamp(0.8084085915803947);
    msg.setSource(18491U);
    msg.setSourceEntity(62U);
    msg.setDestination(43747U);
    msg.setDestinationEntity(207U);
    msg.localname.assign("JXYJGDULARFEJCDVAXJCISEZOXDEZSPKESMNWVZAPUDRXBSULQGTMLYRPMQFVOBOTFUFSRIDAYCSQZMPBTGKK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OPXLCNHJUCPIVMBYIQLJFYOSQTYEXWZGUGUUNQIJZRSFPCAATBLDCGRKLLEDOQFYWRSGNKKWIHZRKNMKREUVRXMYRQJBDOCVNVDBWLKVNBDAOKCEPENAHFMHYEIAPASMIXOVDQFTMAAIABKYJGGSWGGOXWSCGTLJXSULSONKCZFZ");
    tmp_msg_0.sys_type = 230U;
    tmp_msg_0.owner = 30158U;
    tmp_msg_0.lat = 0.5119028788888599;
    tmp_msg_0.lon = 0.9964185950813464;
    tmp_msg_0.height = 0.4412929474315025;
    tmp_msg_0.services.assign("WYXMEAVBBRWMMQEYCLCUBOZVBTLEXYIVQNTTJQZZMKFTMJZHLDGWFBINHWXBFUUVLEGFYWGIKMQJEOZAPNTIWISJR");
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
    msg.setTimeStamp(0.801321150961704);
    msg.setSource(57263U);
    msg.setSourceEntity(99U);
    msg.setDestination(37749U);
    msg.setDestinationEntity(194U);
    msg.localname.assign("RAXQDETSMBN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KUIBTADWXFSZQHEWFMURYBJUIGVQKDSQHDAJVWMHXB");
    tmp_msg_0.sys_type = 137U;
    tmp_msg_0.owner = 20139U;
    tmp_msg_0.lat = 0.48159895887145343;
    tmp_msg_0.lon = 0.873066151051268;
    tmp_msg_0.height = 0.07711042574510896;
    tmp_msg_0.services.assign("WGBMYFPPIQGFSWRZGZBDQBRPEHKMVIMSAVSLQNWAIZVYWNHLDTZXFZJLTREGZEFDAZYTVCFFNJAIANJAGLJXMOXCHCBQGHJTUDTUYLIAGXBJRWOCYUBPSAYKODCHBNSQOVMDEDJNHVJSOFEDXCVXUKLRHEWWBCQ");
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
    msg.setTimeStamp(0.0411830400254124);
    msg.setSource(56165U);
    msg.setSourceEntity(108U);
    msg.setDestination(54987U);
    msg.setDestinationEntity(157U);
    msg.localname.assign("CFYHKNRLOVZYHRFLOBBCQRIBECPUIQPDQUEBCTASLDLWNPNBYWDJIFMQYGFVJWHALOAVFPKFJOPAXZMARPSKDORGANQJVUBWCCKMZAZTIDYNTOCDCJILHDYRFGZKHNETQLRNWDXGICFTSYZVHSGGKEFRGGMDYXJXVJPWREUEBOSDSMOVUMNJQUFKMQIYJS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EBPGYOYJBXFOCHUJFGAXHYUVNWEV");
    tmp_msg_0.sys_type = 78U;
    tmp_msg_0.owner = 29915U;
    tmp_msg_0.lat = 0.8421880453889807;
    tmp_msg_0.lon = 0.2444458824487754;
    tmp_msg_0.height = 0.46762265057647534;
    tmp_msg_0.services.assign("FCLFAPAJTOPDQIATYXCNVHNSARBGZNURUWYVIAWEWBTLINHBFDGFUIOKXYXARXODGPCROQIGMXYKMJKRKVSKLWSHBGPNBOYOSGHWVEAJWPTECSXGTBTHUMPNDVPLXQYPZMDXFJKMWTHAYIKADCSDGTHCINSXVUMSNLELQQUKZLCSIJYZLLBETBUY");
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
    msg.setTimeStamp(0.22195746203995925);
    msg.setSource(12469U);
    msg.setSourceEntity(241U);
    msg.setDestination(29538U);
    msg.setDestinationEntity(215U);
    msg.timeline.assign("HKAJLXKYNHWGJNFCGWIQDQFCEODSXUSOPVVJADZZXGXWMJFLKRKVYHRLIQESPLNTJIQOOEKMRPBVCYAFFWTBZMOCWJDCXLDKZIAYCNITZFMIFFUCZANGZQZQGQWBFVQWMGICWHOKRGUTHPOBSQPEUTEDURTYXLNNNAUIYRHIHZJDPHWRKVTKUM");
    msg.predicate.assign("GJSAFJIHSZREQLKVLSUEQHBBXTBUVJPFDRSYZTTGJOJDLGQWTGVEPLSSDCRHEYWCYERBRMUASJKCTPVPZNMTXCKLTXNCVMWGKHOJNOBDGFTXFNRAPFXIAKLHYXFUGXOOHHFSONMZPQVWOEWYIAGKHDDEQVUUIDEEBHKRPBPSCAOKLIZ");
    msg.attributes.assign("KPRGMJXSTLAGVNYGMZAOLNEPXJMSTPOHQFIWQXTFRZFKJKDRRKKINZHGWALVCKUJSJVJREQUANLNSDHWAUHDIYQVHUNKLAWMIFVPFBPIBAEIOOEMJSSCMWSLFINNEWHZCRTAECWXPPJOTVDVFFTYECNYXUZWZZKKBPADMRGBMNSFVYLCGBEXQXYIXDQYJOGQMDBSBPXVYOYCOUUDUDT");

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
    msg.setTimeStamp(0.19061117973508934);
    msg.setSource(25123U);
    msg.setSourceEntity(216U);
    msg.setDestination(19342U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("ZYZJAWVIGPYHYOYADWDPUNKVJRVRTMBSONPESLGMUNRFMOPBWITAWGWEKWHFSMFUYAGXABORBBDDDBVDPZFIQIXVLNJEZJQLRJXYHSDNLUPKAEBZMYLGTCIEVUASFHMQBWMERQHGSMTHEJBZWPDJUSOZRLLUUVQANJXIPTHVNWYYRVQPTILQIIEGKAHUFKGXSQTZZX");
    msg.predicate.assign("UBOMYVJACFJVMPTFMWMTOKQFUXUIEGHPLSAOCCNGSHBNZETTDCWCHXEABMHTDJPJIMDYAWGLGMPZTHNHKXSRLOBVKYDZJYPORYXXELSWAAXZWBZWSFLILJACPBRKBEIUJUFQQQFXKJRGIARGRVRYWKYKOODOQFFOPGNDWTPIDJAZUZURHDNNGGLWVMSKTON");
    msg.attributes.assign("NPTWLYPGYYDCDPEOXGBBMSRUPFYVFRBWJAHDKDMFJFCVFVWCEPUALCKYJVXMHJTQNYYIISUBIS");

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
    msg.setTimeStamp(0.15512831173463182);
    msg.setSource(43112U);
    msg.setSourceEntity(154U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("IMVMGMGZFHDCXAJZGZBYUSWKTXUPOSRDTBQGCVHBGMTIBCMBLHLCWKMKIMRCIENJPWSJTJBWVRAHPVNAJTEEUEXELRNJXSFYVQQJHKRLAWVCYUXHRHDNHDKIRNGDDFOWRUONJOGCSN");
    msg.predicate.assign("SVOITEUTZTXANVEUIMWQSWEPNPCDDOFITWMQSYNTMDGIUKAWGCDNOBLSLYCXRNLSXGWOGAWFFSFKPJMLYTWVHNOBDHCBZGTKVVQIIGPFMINAZPVNXUMGXZAWPLMNRCRRDKXYJEZSPVXHCUFCBYJHEEOVQ");
    msg.attributes.assign("OFYBEGUASUTGSKEUCSATKETJMMBJNZLLKDNTYMYADYGUBVMYLJJDAKSFWLNBRZLXCCKOPTEUAVBJQGKVXVGDMZKHLYIQRJXVXRZWPTMDXHAFCDOWWWWWEVJYQXCDUCPHPNOFJMCQDVPCEEFPNYZKLGTSOSHXJOIRVDNRZSSDT");

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
    msg.setTimeStamp(0.9147447861660792);
    msg.setSource(55330U);
    msg.setSourceEntity(167U);
    msg.setDestination(19888U);
    msg.setDestinationEntity(73U);
    msg.command = 123U;
    msg.goal_id.assign("OAGYUPBKRSYSGHMZKEAJYAJFXNGWXIRLZCQWFGXCZDIDYIHLNPPNFMDHJUHGLTDTSQURINZRQXXOHYMVDADGNFHDCOBIFEH");
    msg.goal_xml.assign("RSFVWQHPZWPCNFOQEBBUNXLAIMBAIPDDKNLUZECOWHIJUAJGIOPBLXAHYKJVANQTHYOHTBLMVRVDCNFIAENIJVPCGXSSTQRSWMTVWTZOMXYBVJUWXGJEGCFBIEQIXFGACLBGCKPOVDZXJZQFRDUFMWJGRDPEHLUGFDZBPYCZAPTASLQYHKKZFUEGVQEXYFWOUYVMEUUNTWKNMDAJBMLQSZDHSRYKDRRYXST");

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
    msg.setTimeStamp(0.23647644625660402);
    msg.setSource(29712U);
    msg.setSourceEntity(52U);
    msg.setDestination(36672U);
    msg.setDestinationEntity(172U);
    msg.command = 73U;
    msg.goal_id.assign("CWGNEAOOLSNAKNRZLWJRQTOCWFTGRJHLBMKRJHGTMHIGBGDORDQDAEXXAZUTSAQOOSOPQXYVOSXTPDFJUBVCWCEFZWFAZPSTCEFJIMGWFUYNBLFQVAMNSSMZDPDJRRUMQUEQRJNHDUILNDYVOUHHPEBUFDACMIRKAJWZQWTGKVESLIIIVKLBXNIKXVTNHMDOAHYP");
    msg.goal_xml.assign("IMWYVHHQVMDMABRVGUKMAXAYEGGTBCWQJBNFLJVEOIQ");

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
    msg.setTimeStamp(0.9883496716749403);
    msg.setSource(7455U);
    msg.setSourceEntity(36U);
    msg.setDestination(52980U);
    msg.setDestinationEntity(194U);
    msg.command = 250U;
    msg.goal_id.assign("VEEEUUWQXODZSXRECPISCIHKMCHGAECTKAMTQYQFOHTPDGFNOBBRNPPMDGZKYRYKZBFIWNIFNKMZOJWOEHJJZPVXXVWZRNRQFTWAAJDLHRZZGLJIUDVPGABLSGWCQRBELNMCAOWSG");
    msg.goal_xml.assign("SZMCSPFTXOAEEQTRPMYQWHEWHPDCQNJHXBZZJUUESMCTTKCIWLDRXKJSWZBLHOOZPELWINQOZJWGVVGFFLHPIPATPUJYUALZXHBYLVGDXHCQBZWNILSBIOURRLEXRQFPMGHSATRCERDJYC");

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
    msg.setTimeStamp(0.43424474116317147);
    msg.setSource(57406U);
    msg.setSourceEntity(248U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(80U);
    msg.op = 249U;
    msg.goal_id.assign("SAAOKNVBXTWMQYDPRGUILYTWALVKAQECBZWIQFCGXDAOUULGWBQECEWNVJRXXKRIIYZMTLAANFFZRBXVZFBPJUOACKMHFDI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PXAYBPANYTFWYILKYUIPCICQGBOOPGWWHEGMGGWKESTIPUMWMCWDEEZFAZRVAUIYSUPLZLIETXJGQXHQPXHNPQVNGJQYIIKDKHMVSVLCZQDLMDLDUDTSRBXFOLGGAHJMKJDSYFN");
    tmp_msg_0.predicate.assign("BAOWJWOTKQLPAIKRJLKCSJLJGSLFTFBKYJZSSLOYSNEBGJPZRWWEWRRDNDZQAMAYUKHHOALIONUCNSHPTFFUPXUZGLEZGEUDGYXHKUSXMJKGQPDQILFICHOCXXSBATGBYDCYOHFVOXGIVGFCODWPBHTTMBJYZGVLQEPTXWAR");
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
    msg.setTimeStamp(0.4925262071975003);
    msg.setSource(18182U);
    msg.setSourceEntity(136U);
    msg.setDestination(32969U);
    msg.setDestinationEntity(84U);
    msg.op = 32U;
    msg.goal_id.assign("LICFUBPHNAQVYZKZOBOTNBLIHSASLQLURPCBBKJZGYIJQKNBUVEMXXCODKFOJSIEDHYPWDYNZOTWQPDWMQJTXFHGSVUYFLISRGMGXUKDZQDNSFCGVLFXQWZQXSOKFHEDHGEUXRBKIEINPCMYVNTMWKREEDJJACCRVPUMTVYEWTBAOARTLNAMVOOEAAAENWRYGIFUZMVJOWIZZWRRRBPHGJTGCAUSKIUMPXJWXHKZDJGLBYLPDHFF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MAXRQLZNJXXZUZLEMKOPAPSBJYVQYVONGBCLQCLJTIPFWOYAHLYUJIJFDJHRWBFMFJCFMVBGBILXGQCWQQWFUURTMDSAEFNTYSHQLOCGPGLTNXVEYSGAGNGVKSGKAOHIISYPCTXTIQJLTTDXKWWUTRNHFPUADPDVEVBUZZVZAHITPWUQKZPNHWCNOWZA");
    tmp_msg_0.predicate.assign("DQFKRSIBYDZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QZHNQTFXJFOSBGTRLOPHWKYDDBQABPVCXUUECNOQAYCDKLNBJEZSBKAMMPTINUQVYBSFLTFHNQGJSORBNKZGOEZWZKCRQAWRPJZKUAGPPULUEYIHIJCDSVSPRUYVUMZVRMJGSYCOOMOIFZGTUVTDABGJIEVZKXBXLRHHYJMQMWLKETRSGOWHVJWTIZWFM");
    tmp_tmp_msg_0_0.attr_type = 195U;
    tmp_tmp_msg_0_0.min.assign("NAQELHMIFJCVACNKBUWGOFPYZNLLVXJZHJTZQSOXFRYJXRSZBDZMQDPESPLVFHRXAXJBFBUMVASRDNDPBVFQHMQCRGKDQCGIDITHOZKMCYCBDVUTNELGZIGFTTQPBCBKNWTWCKSNRPGWRKAFOYTESYMJOIWKCGGTPWJEUPYKFUWIBOLRXUIHDHIMEJXGDNWVQUILXZUQAMUVHLNMMYYYTXIYZWRWOBHASJLOREDA");
    tmp_tmp_msg_0_0.max.assign("RCJCSIFPUIDFTHWEPBIQNQYEMGOAWSQYBIYTCPQFPYETNNGDOZAPKZZGQXPBNLFDIAWDGCBVMMOLGFNXGRHXTRJSYUGKUARFFYHHMUSLOMIR");
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
    msg.setTimeStamp(0.6580140668484892);
    msg.setSource(30491U);
    msg.setSourceEntity(120U);
    msg.setDestination(60402U);
    msg.setDestinationEntity(132U);
    msg.op = 28U;
    msg.goal_id.assign("STBPDXLDAOMFVPDCNBDRTIEPQWKJXLXZEFCJRGKFMAVZQCCHPGLNOSHSTYNOIHZZCROUSUZIEMHPEWEVPNURGKMIQKKOIRTWZMZVCOV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NFTUPCEKOZOSJEVEYWYAOJRMVLLFCDKMGSFPLZRGEBMQDCBBDSLVMRNQNBHXQXXYJWV");
    tmp_msg_0.predicate.assign("DUQVEYAIVNOVRNJWBKBRIWWNETLATVMMKHKBFQWEEJXZIURTUMASSAPTYLZQRCCJJQMIOLAXZGHDOUAUGWBWHIOYYZWSCRGEBUFZTVTCHQIRHYVFDWFZKMDKXWLVYPDMCAKDQBPFVLPFIGGFMPMEREPKMDLNBKFFORJXWLVSOXLDVQCRELOCTXGCHYZPOYSPIQEZGKBBSHFJHDXCHMNDPHSGTQXTNNJSZXXAKURTEJOLNIJZQJGPBNIAUOASUU");
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
    msg.setTimeStamp(0.989096144568013);
    msg.setSource(57834U);
    msg.setSourceEntity(69U);
    msg.setDestination(36679U);
    msg.setDestinationEntity(11U);
    msg.name.assign("JNZIWPTEEUSVFWDFFENOUNJIEQVJRWCKDKIFNHCGMNYFWAHAPWTTRVFUDTLPAXPFHUGALHLYKQBTLECZB");
    msg.attr_type = 21U;
    msg.min.assign("HIKRBWTFDMRCZESIASCSBYMEWXXJZSVTIRURFYVCOMENQTOFHHGLJPWOXYOXALJXXMMQAUYXYHYQKVGGZDQPVACXGRCZZPIGEBPWSGWLWQHSCRNYKVZTLLKBHQCUAHIDNMSVIGRPAFUDQXLVQACOEPCQJNYGONTIFMJIFDZFDTKFLSBKKOBEW");
    msg.max.assign("MFJFASCDELKKCJGUHIRTATFRJMLXUAYLNQCYFZPBRIONZWDZSJWBTURMZCPDFGNWLZTWJGGYPAABVQJGKRWTDGQVGXJBWOCAYLMBQMJIEDQNKMEZIVBNOKFBBYKRSOLWSHCHNOVSDLVLNZIZQEEJSSFUZJWPMDXGENPHUHXXTIHDBOAHPMP");

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
    msg.setTimeStamp(0.3259356601685791);
    msg.setSource(3475U);
    msg.setSourceEntity(168U);
    msg.setDestination(60911U);
    msg.setDestinationEntity(5U);
    msg.name.assign("XIRDODOCGBTOAFTOBMEIITNZQEVXRAMPBUZGAPASCXHRQKXFBHITGOUVKEJLBIZHYJJZMXRVFVFLPBITGLCPNLFWWRMYXELNOXOBNYNAGLTZCSYVMKUHUCNOVJMUCUCFYRZVEDFPWDEHPHMSJWWMJGKZSWAQDNFJMMRUFHPYRIKSACAJTWUKVRTZRBZOESVEDSSFBLSONKGLUTGLPKHQIDKDQA");
    msg.attr_type = 253U;
    msg.min.assign("TYCYKROPFHYBCROHWDGICMHCBFAPGWCSEJOUREBJKASNVANRFRKJJJUQTPQWOEOCIQIIVOUENEZKNJELKPTSSQTMZKTVGHVLTFEHLDSTGMXPSCAZXQABXJGPJPYLXUAIMFDDKPAOIANWWDVZNUJZAGDYEMWHHLQEFVGNDTXGUWWTQGMDLX");
    msg.max.assign("HYAXNMNELHYSQVFFBUZGIGWBLKMQQTOELCDXVAQOXLIHJSBUBVRKNJSBMEIYZEUXCNWOBCPCMHYGCLMEBNVKKQKDNJMWIIAICPYOIJJDRAZEASELQVPKORKFFQALFSACCRFUAUZGNXRNCOLVDFESOPWRWONTXPPTVPQMPJRIQDNFDZBLHKZF");

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
    msg.setTimeStamp(0.824909699010468);
    msg.setSource(52733U);
    msg.setSourceEntity(66U);
    msg.setDestination(28140U);
    msg.setDestinationEntity(119U);
    msg.name.assign("UWERWMJQZBWQROTXFHIFBQOQKFNHHLINBLCGOLRJPNCGZYUURVSBRNQOSZLODSXEMCIDWAXZCIMTKEFDPPSRRKMXXYYAVWQOZZVHNJPVGZIEADLWXEMTQBTYABZGJTFXUGHLBABVJOJDVEALMPRAGOXYTJZWUFSHFDAQREBQWVDNSGISNCUDPLYJKPFET");
    msg.attr_type = 253U;
    msg.min.assign("CJOJISSBPHHXJSLUZEIZFTRCZWVFVQNYJJWFARSXUEGANQLCFHRUBDQYLWKCYDHXLNMXXWTKQXDQRBVUATISLJAEUBEKJOPWVNZKIGPYAMTBDIYLYROPUWGDPPLGABBJPZPCKUSKUWVDG");
    msg.max.assign("OQYFPVPNDXMKBTEUTAJPJRAEAJNYDZPOMTIDLQHCWSXCVCSSMFTXJRJRUTXJZZDELFMCOBWCOJNDFEYPRHRYQRCNVOYOZTWSTWANIFPEYVIIQJLRXQMXUKMQNVXBLTHISKBFAWLISNXHKAUKLCGWOVQBRKOKPHZOUBHGEBGASIVAUIDVYMLTQLGM");

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
    msg.setTimeStamp(0.743509738583746);
    msg.setSource(49596U);
    msg.setSourceEntity(85U);
    msg.setDestination(17037U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("IWJSWQPHWSIDWIWUJJJGIYKOLVXFRRNVOKHOGGZMIEQXWFAOVXZUASGZDRPUXDMCEOBBCAJUBGZESYRQINAPLCERMCXPKYKNNBLEYTFROCQTXXUGCMVBGSVUCYTGRLYKPPIZSTHDTNECIDMSIHEAVZUFFHINLTNTMGHWQPAGZKJSLKWUWQHODTXYD");
    msg.predicate.assign("VXCHNXNZGMRGAAUUDUOUFXZPDLLXSRQHIAIRZBAAJVTVOIEPTTEJKIEEFKTCKYCDFMXLDOZUNQFNRYOJXIHN");

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
    msg.setTimeStamp(0.7549433245878953);
    msg.setSource(49943U);
    msg.setSourceEntity(162U);
    msg.setDestination(38675U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("KXWATXWITVJNYGODEKHASGPEVUTGSRGFLDNUETAKIJVMLXYWYCFKCUMWCKJQNIIAWRNMZXFRNFKHOVAPKNPUUABVWIMOSBTTJAXRIZPJNRDRDZWZNMSSD");
    msg.predicate.assign("UNDUUZABJTVZQQHDEDGKVTRHVSFJALBOHZJKXWSOXZAHLBAHERMAPWCXKZONUUGONBIPMXIXJPWSEXLCRWQMSARFTEDQNHGBIDVLLUXYPMBBJCNNEFFDTGVBNISLNQZVWOHTTRIOCFE");

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
    msg.setTimeStamp(0.5579902253462882);
    msg.setSource(34359U);
    msg.setSourceEntity(189U);
    msg.setDestination(12059U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("ZEVDDAVZVDXXEFLPQXTSOCJALHXNIIBXTQDSNRHVCUGWIZCDYXHTJBCGNFOPFQCJVTZOXLDWPLMKQKSSGPPSEQYXGGLUWHUZNQPMWFQITBGZFJTEUGRMYSKMMVZKBBQCYSAMWOJIANMBQROEDEWCEK");
    msg.predicate.assign("HJJHZWWGWCEIYZCQHXKIXWIZDSYEXTMEVMUTZEPZXUVSVTSQFMSYIJNNIVJNEHKUMQKKCHQBEZINPLYRLCXEZDQPUXTROFVWQORFFUVRFQGPFGRRNXSXJZMKVAUEVCRIYOGSOHSUOIQNPNLPLEBXDLABGCHBLMQODDKSGHTWBPOBBDTIURSBMTDWYTAMFZJMEMAWKRKRDGOOATCYKWSPBHVOYAZLJNQYF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GLXZWSDTFLRMQULFKRHQGMFGJXSVRCWYMQDOYPAHKWQIIFQBVTTAIZJWWDMUZSFCJGXENRWZWEYPXGIUCESUNONBLVCVAMXMWTLMFIHHNSONTSJPKMVOZBVXYKLDDRZTSPQDVUUFQIIRLYPFETEBCOGXDQQLJGHIOLBAJGYQOEKHUOUEEBKX");
    tmp_msg_0.attr_type = 24U;
    tmp_msg_0.min.assign("RQJWMMWNHEFSCUBMHEXSKZKATBSBORLJBVLXNLDQADDYFLNSDRMAQEINBBTZXJONLJGKXDHUSVPIKCGLENVYIKNHYRIZIVMQZLFFJIXXAXYUYIHUDXGSATKOTPRQWPUVIYZNOOZCUUGHTAWSQBWBXHQRJYCOTAHPVTVYEEFRGFAKYFWQZGFCWPZPDNLTJMHVSYX");
    tmp_msg_0.max.assign("LRSAMHYXAXYEDJTHAEFLGCCEWEYWZDKIMUJOLOPUZAZQUUNZ");
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
    msg.setTimeStamp(0.11145081787038269);
    msg.setSource(48681U);
    msg.setSourceEntity(99U);
    msg.setDestination(59173U);
    msg.setDestinationEntity(151U);
    msg.reactor.assign("PSFQOXNSNYOUS");

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
    msg.setTimeStamp(0.41581247106765495);
    msg.setSource(16311U);
    msg.setSourceEntity(119U);
    msg.setDestination(8058U);
    msg.setDestinationEntity(154U);
    msg.reactor.assign("FGYNGSNNUJKGFVLJWXKVZGTPJOQUIISYHPCRCMFLUMPH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VWHOUQDCGOQVWAOGNTZAUKQSINTDA");
    tmp_msg_0.predicate.assign("MDQXIUSTUYDEGWUXECVRLNONKLFFQBABVEXZMIYYFCGCXHNJALJCNGOFAOACEVLETBBBWGRLLUGZZFAAHXURSNBDWJNHTOZJGVSGQRHQRHUEZMYOSJGWFPTUCAPFYDPWBIBVMKSSJCPHXWFTRZQCONILKHSNSIIDEMVAKDGDDYMYDRPXDEQTUKLLJRIVRTIOKXBLYFFHTZENK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("POBDRXILENYTARABIEBHCWPXWKUZPUEUPNQMNBLHGIIRXFJVXPXHTHDRTQYNZCYVRFSVFHLDSQMXJUFFQOGGAMDKZSTFVJFUTXCEQWSMLUSDPEMESHMSQDZOKIEROGSWQNWUCDPNARCOYJWOADCLRIIKPQJGYAZONQAMWYRAJXDRLLTYXTQZIDSWWKKBLJCLNVK");
    tmp_tmp_msg_0_0.attr_type = 241U;
    tmp_tmp_msg_0_0.min.assign("AAWPSITWRQARVZOO");
    tmp_tmp_msg_0_0.max.assign("FUYUXLMGSNWUNWGMDOYYEEVCHBQWEOLSSGCKXAOKWHVVBH");
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
    msg.setTimeStamp(0.06404070633218817);
    msg.setSource(65198U);
    msg.setSourceEntity(42U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(175U);
    msg.reactor.assign("HTSYCSTQQEBVDHUHYSESGKMNLZLGMSKQCLLOQNDKRIVBUEKWIVHCKHHPMUTJMSEZGYCBXDGYTTKGLWULNLTDBNQUZXVCSATRAOCKEXVRHQDZJWOSECZFUJUXCPGJIUIZMBVAOJRKNJKNTJOMZFSZFCSCYJBBOYFFHIZDIBLRIAZNDGAMWWFVDMTERWUKQXJXEE");

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
    msg.setTimeStamp(0.589031380577245);
    msg.setSource(54163U);
    msg.setSourceEntity(77U);
    msg.setDestination(15086U);
    msg.setDestinationEntity(18U);
    msg.topic.assign("NYYKGMCCFEBFVNRSWZWUOZVSNPFRZZUHQPQAZOGGPAIVHBCYSTXADWGDKXGRXZRMJMQAVLGJLUIAYSNJKFVHKEJTVRYLWGHMQTWAXDUWIKBBVHPRFCIJOWPB");
    msg.data.assign("ZPBFMHCCBTCQLJJBFNOLOZNHTDMBKDNIYQUUUQQEQFGEIEXLZKNRFRRMKCDLGYTHJLHHKVPSRTDYGLRXPTSANGIYDSCPBIWXVZJOOIFEUXSDZLKAAJVMAMSYWVRWZX");

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
    msg.setTimeStamp(0.6306965317704818);
    msg.setSource(5041U);
    msg.setSourceEntity(42U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(95U);
    msg.topic.assign("TCSJXOCZQWUIFOJBAORLSKGQHWASKALSJDHKKGUYFXDXSP");
    msg.data.assign("JDXGAFQENRGSGNZIIGKPVAARLWHPZPNKUNPCUGHSPUYXYTYCPEZEXIUCETMXCLFDWJPDCABULCJNXTNICQPRZEWKCXDHREJFHGMLOFUSORJJWGGDZIMSFQBGBAVPUVUEHBL");

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
    msg.setTimeStamp(0.47161133053041493);
    msg.setSource(18502U);
    msg.setSourceEntity(121U);
    msg.setDestination(7579U);
    msg.setDestinationEntity(126U);
    msg.topic.assign("WAQZGWABJLIKJEOGBLFBBUERBGKGMOMRKHOTCBQBSDOEAYOMVKYUPFYNAXIXFAPFNDFDNPDKZRGVTPFMTGLR");
    msg.data.assign("AGFYRTUXWFGHAURVGSBNLELKPOGLLBCKBSKYLPJFNJIGMROHWUHFQQVMAUPCJBXYNFJDMADTWUJANOIMXSCIDBMCGVTQMQGKLULHZYIWQIZEWMQJBOWRRFNTCMWECBWIMQIWPPNLTFCNZXCFKOVJCPELDXUZAINERRMYTBGARHUNXDYXIPLSEVEDTGEBQFTKAOHEHSVVDPZHYYXZOJIHJEJPZZARSZDTGRYWYFHXVOBSSKOAV");

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
    msg.setTimeStamp(0.1328936446616028);
    msg.setSource(23091U);
    msg.setSourceEntity(81U);
    msg.setDestination(16872U);
    msg.setDestinationEntity(230U);
    msg.frameid = 2U;
    const char tmp_msg_0[] = {64, -123, 104, 79, 47, -105, 48, 8, -45, 82, -46, -14, -93, 23, 15, 62, -103, -83, 122, -104, 51, -9, 101, -90, 74, -116, 102, -112, 99, 121, 95, 54, 48, -35, 63, 111, 97, 84, 59, -96, 90, 4, 79, -15, 50, 92, 90, 108, 2, -35, 14, -12, 29, 45, 44, 99, -74, -91, -12, 31, -73, 44, 0, 63, -49, -71, -21, -9, 19, 57, 83, -114, 59, -48, -32, -88, 92, -63, -43, 2, -96, 2, -46, -93, -33, -4, 7, 67, -45, -32, -39, 125, -93, -34, 6, 97, -120, 65, -96};
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
    msg.setTimeStamp(0.16232127482952752);
    msg.setSource(48690U);
    msg.setSourceEntity(0U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(105U);
    msg.frameid = 226U;
    const char tmp_msg_0[] = {118, 39, 27, 108, 69, 116, -54, -56, 114, -115, -125, -121, -45, 124, -93, -2, -6, -114, -97, 88, -19, -99, -82, -19, 117, 28, 45, -65, -119, 110, 2, 101, -91, -97, -89, -55, -89, -16, -72, 41, -85, 62, -63, 79, -97, -120, 90, -117, -96};
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
    msg.setTimeStamp(0.25904460028088916);
    msg.setSource(10683U);
    msg.setSourceEntity(133U);
    msg.setDestination(57375U);
    msg.setDestinationEntity(46U);
    msg.frameid = 92U;
    const char tmp_msg_0[] = {-124, -31, -19, 83, -43, -35, -47, -63, 90, -8, -103, -38, -42, 40, -27, -15, 5, 116, 22, 53, 17, 70, 13, -75, -114, -83, 43, 2, 67, 31, 115, -79, -91, -51, -97, 95, -74, -65, 62, 120, -116, 28, -91, -29, 10, 102, -94, -48, -47, 3, 117, 91, 89, -125, 80, 48, -71, -92, 81, 126, -6, -73, -97, 22, 91, 27, -107, 92, 65, 93, 15, -44, -78, 111, -12, -49, -108, -20, -21, -68, 27, -87, 97, -33, -123, 101, 119, 46, -48, -92, 78, -49, -115, 81, 113, -72, 115, 0, 39, 77, -126, 123, 111, 98, 115, -7, -52, 84, 87, -84, 3, 67, 60, 95, -109, -70, 53, 81, -66, 88, -33, 56, 60, 89, 47, 25, -76, 3, 44, 58, -46, -63, 112, 52, 48, 83, 124, 41, -65, 33, 45, -123, -39, 42, -65, -101, -122, -34, -117};
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
    msg.setTimeStamp(0.8479175751229524);
    msg.setSource(18653U);
    msg.setSourceEntity(229U);
    msg.setDestination(16568U);
    msg.setDestinationEntity(168U);
    msg.fps = 176U;
    msg.quality = 198U;
    msg.reps = 128U;
    msg.tsize = 217U;

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
    msg.setTimeStamp(0.5864417379460882);
    msg.setSource(20950U);
    msg.setSourceEntity(45U);
    msg.setDestination(16837U);
    msg.setDestinationEntity(52U);
    msg.fps = 168U;
    msg.quality = 244U;
    msg.reps = 213U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.597607152246029);
    msg.setSource(29445U);
    msg.setSourceEntity(180U);
    msg.setDestination(6514U);
    msg.setDestinationEntity(150U);
    msg.fps = 221U;
    msg.quality = 21U;
    msg.reps = 202U;
    msg.tsize = 30U;

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
    msg.setTimeStamp(0.8711443282223349);
    msg.setSource(14044U);
    msg.setSourceEntity(3U);
    msg.setDestination(23291U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.338485405343679;
    msg.lon = 0.7884521762094481;
    msg.depth = 12U;
    msg.speed = 0.621697883011007;
    msg.psi = 0.5481438072938708;

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
    msg.setTimeStamp(0.948775516038777);
    msg.setSource(34468U);
    msg.setSourceEntity(119U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.128316412566032;
    msg.lon = 0.2670303710552626;
    msg.depth = 229U;
    msg.speed = 0.5130004135112906;
    msg.psi = 0.7345408278583175;

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
    msg.setTimeStamp(0.8292457941730766);
    msg.setSource(44788U);
    msg.setSourceEntity(146U);
    msg.setDestination(86U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.37369229669288584;
    msg.lon = 0.1298354812795075;
    msg.depth = 25U;
    msg.speed = 0.4749835437428209;
    msg.psi = 0.4318428466278601;

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
    msg.setTimeStamp(0.7368758129590925);
    msg.setSource(60665U);
    msg.setSourceEntity(11U);
    msg.setDestination(19991U);
    msg.setDestinationEntity(97U);
    msg.label.assign("DBIAIXKDQAQSORNDHENPFWDDWAJSBGZOSCCJPMPLGAFFHZZUSSUZZKCEX");
    msg.lat = 0.058737869447469726;
    msg.lon = 0.11032748172285889;
    msg.z = 0.18408192945477908;
    msg.z_units = 30U;
    msg.cog = 0.7433957766701074;
    msg.sog = 0.3805048396347871;

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
    msg.setTimeStamp(0.16786073297997428);
    msg.setSource(15851U);
    msg.setSourceEntity(165U);
    msg.setDestination(34670U);
    msg.setDestinationEntity(240U);
    msg.label.assign("NIHKHAOZPVGUULQLUOKHAKSNQVDHSBFWHEYRRINNRVFAKCTLTUDCZGXDUMZXAJ");
    msg.lat = 0.9306588160469543;
    msg.lon = 0.7688506146741326;
    msg.z = 0.03962542007208392;
    msg.z_units = 145U;
    msg.cog = 0.2305453570084014;
    msg.sog = 0.805403063751802;

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
    msg.setTimeStamp(0.5128350267663907);
    msg.setSource(11636U);
    msg.setSourceEntity(240U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(84U);
    msg.label.assign("URXOABPWVNQSJTUCILSLNQAUVNLHSDSBDNAWSCOVULQTJVVDIAXLIFPCTZVYXC");
    msg.lat = 0.7364944968816317;
    msg.lon = 0.7373111825739355;
    msg.z = 0.018254354716288668;
    msg.z_units = 95U;
    msg.cog = 0.23555199779417202;
    msg.sog = 0.38745036715987813;

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
    msg.setTimeStamp(0.7229913070868745);
    msg.setSource(2413U);
    msg.setSourceEntity(19U);
    msg.setDestination(4812U);
    msg.setDestinationEntity(130U);
    msg.name.assign("YNMBCMDATOV");
    msg.value.assign("LZZVLPDTJAGMZASJVZAMBBAVQNPAGZKOUJWFYAGHWCNQRCTLAOWROGQBRMQELFNSJVPGCIWTDSPYRXCYTHXEVEPIBSMONUEACTSGHOVPPEBOKRCUADKXNIJQTDXZAWIXWHBLUZSDQJDEGDFVYYFHWRLZXBBRKLSSYNCXMGCUIMHKIFDKFGVEEVKYFYOVQKDEOMYDL");

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
    msg.setTimeStamp(0.052490519757596554);
    msg.setSource(47433U);
    msg.setSourceEntity(89U);
    msg.setDestination(15184U);
    msg.setDestinationEntity(79U);
    msg.name.assign("PKIBORNINTLTCANNYJVZDVEGBWTMCBTBCVPEAMHDPUKSHVZOYBRYUHEJXKMYOLBEZRCFHDLOJKKGLSZQDLMRCWKW");
    msg.value.assign("MQLHBGPTPGPDBPHWYMCCPXEOCZWSLYZGBZXXUMHPLNIGVTDKVQSAEBYIRXMTRIAKYMNMRKJNOVOAPUIOQTOCZYLGEHLRLACENXNWWBZUSQWIJDUWBZXBFHAMTETZUPAPZNVSOFZXSUFXHLBVVDECKCYXIEGDQTWFEVFFWRKVMJEIFLMJFLGTHNBQSCVTQXHRURHKIVFGSIJDU");

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
    msg.setTimeStamp(0.8310434469449323);
    msg.setSource(17819U);
    msg.setSourceEntity(150U);
    msg.setDestination(13041U);
    msg.setDestinationEntity(2U);
    msg.name.assign("NCKJQLAZBQHHVHCJOYGLNPMCGDVMDPHFQUMQHFDHWBJO");
    msg.value.assign("WQKTGCBFZZIOZYNSHLMCPOERIMCHJQVQDNQSTWMTAEALQXVCDCMXPPGVLUZKJTNMTXEZCKZCVKTUNBIANFUEMPFFHOHGGIRHRPYEJNPDKQFYBASSAHEWDXUJBLDKGQQFSLWKUEHINPFWMSLIPVIUYZBUGRDBWJADGRUGMVKLXXYCSQKRRXJOYULJWDCTJIFELPSEJJQEAFBAX");

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
    msg.setTimeStamp(0.3827241512442223);
    msg.setSource(10849U);
    msg.setSourceEntity(103U);
    msg.setDestination(37357U);
    msg.setDestinationEntity(178U);
    msg.name.assign("SBWDFSCYVLUXMJGPTITWYFXCIIYDEQXDDOVLPYFNRHETCCPEPRORPEGUEXAAAJBTHHPOSSDYNZRLBVEFQVMWXYRFHBODZUCHWUHPQKASZIHBFPLNSNEHWPBKMAGMJMVNQCWOZCVQBJWLSQZOK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CVENLOLWTSDUGZVWAZPNRZUIMNAIVKYCXRHIBE");
    tmp_msg_0.value.assign("ISMZBOQPUSAMPNOXQPOUDKQSUBREMSBZWZAENOIZFRWGIKXUEMVDCEOTPUVRRLDSRSYGOJGYTGURLJWLTJJAGMMLICVWZQYIUFZEHWLRMTWEFDBVMFQKQYRFNNFARTGYGHCJTUYZKNWKCBHSYDFSZPJJKVGLGCPHACJXCUCNBNIQNVQKPLHDLKBIBFODZHHYROEAIKV");
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
    msg.setTimeStamp(0.5490647555119232);
    msg.setSource(6554U);
    msg.setSourceEntity(212U);
    msg.setDestination(20577U);
    msg.setDestinationEntity(138U);
    msg.name.assign("VJBSCAGLQAUKYYFFTHRIGGZDVWVWQXRXOZVOBABYXAQQOWKHHQJIBRHSBKBMFSEYFZJYXCKMWTWYJFVANSBVPSNTGWKFRDUTNEAIQEPPHCLNBXLIMGPZROQBH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EATSTGDJCMMJVPXKCJJAIVVKEWKIHALJRNDCPBSBWCNDZAXDBIERZYXFKKZAGZRDBP");
    tmp_msg_0.value.assign("CHXUENECZHSDYVNRLMUWGVYMMWHVCZQWFUAOEZVTQHABHPYYUSJIZXJQZASNYIPWONIX");
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
    msg.setTimeStamp(0.14839662301963086);
    msg.setSource(62623U);
    msg.setSourceEntity(180U);
    msg.setDestination(45652U);
    msg.setDestinationEntity(89U);
    msg.name.assign("ZQTLISPPSZIYUJLYEAUTWNZTQKLMWVUZVEZXPWIVXWKCLADHFXJFBDGGUNPKEOILKAXOCMLTIEVMZCMEAPPHQOEDHBLVARNRVHUHJNNHEBHDDNOUOWSZBFFGRUDSEJKEAVJCFMGEKAOPTSMSJRXIUKZWMRJBXWTVWYWXBAUVGDDYVYSAFQNYR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UWFGHENAHFDQAXPHZUCYCTOKJPBXARMNUJJOCSPRVLKOMFYBMKKSU");
    tmp_msg_0.value.assign("IFUXWZQGCCBCWXHFNNLNVCDDCODUVJENFFKQCBKJAZGSKIEHFTPPLTBOXJYXFVGGLZPAMPTOCTCGEDWMLWOTQKRHUTDDPZZZPGPVBRSBRSSUBDLKYPNQGHAVXUCIIRYHOHBLDAYNNJDTFRGQRYIWYUXUQBISLTZLFXHMRNZRRXWJEGBYSWVEMAFKHHSMYAAHLOWOJIQOKMPEJVREZKIPJZEMJXUMYXBIWGEDSTQVVQNLKNVJMAAWFSYUOQKSAM");
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
    msg.setTimeStamp(0.2908892850826641);
    msg.setSource(49880U);
    msg.setSourceEntity(60U);
    msg.setDestination(57407U);
    msg.setDestinationEntity(227U);
    msg.name.assign("YUYKBLXEMUTFRLUHRIHLHKKMZQLGZNSPWCRECXHDT");
    msg.visibility.assign("NOJCEVOAOCUHQBNFYUOOPIQVNQWWFLFWLXWIRVLPQKQMHCTABSTLPVDRCDTTUGKXBYOKZHXYTBJOCSJDTTWLXKPQPZEUHKDZAQZBYPMEPZKHYUERKBCHNVEIGSLACHLJNEIFWGRNLSSDFRFERULONFOBJGKMSFVJNYIWIMACXNUI");
    msg.scope.assign("YVSOQBBKPKHEKGXMFHJKEFPPQSCEJUQAL");

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
    msg.setTimeStamp(0.9034449497058636);
    msg.setSource(4710U);
    msg.setSourceEntity(251U);
    msg.setDestination(59671U);
    msg.setDestinationEntity(94U);
    msg.name.assign("NPSWGYQLXIAKHAQZJTCAUHZGBNXKCXMTPSZZWZMGJPOVRJZWUXAEIHYNDVSUPFKDEFZIUXHBLLJMPNDKSPFVIXHBUMOJLORTLKBMQWTAMOUEQSWXLHWCIKEPMLDRCVAEIIQYOCFWJPKOSYONQJNYFFMUJACEOBHMUXVZDEPZCYIHFKYXY");
    msg.visibility.assign("IQZUZBCDUXVMPHYKBBTPFMPAZQYDQWGHYHLEXQCGJINZEKIXFXMISYEVXDKSAOWLSSQGFOQWOLXDJCMGVWOOOMYYAYBPFOAUJEUJZWTZIEKUFVCFLKLBFMYPZDIVOJSTJCTQPTPDRJRFLXNZMVSDTETPKGACGUQERNNRYXWRGOKBSMJHTNXNJZRDRVUKIVLXVHSSUZMVHLBSCRAITFAQM");
    msg.scope.assign("EHXSYLSGYYLZIRIWQYZEVTONZLWOBVUOGJOGYTHVVAJCEMFEEBCDUQQMKTBTZZUDFEKN");

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
    msg.setTimeStamp(0.3298620078876594);
    msg.setSource(49256U);
    msg.setSourceEntity(9U);
    msg.setDestination(28344U);
    msg.setDestinationEntity(139U);
    msg.name.assign("IDQZJFURQXBSVPRGDHQLIPBEGHDQTMXELDOOCPLNKGCD");
    msg.visibility.assign("GHLPZVWEGZYQXHUDPVL");
    msg.scope.assign("SNSWHBLLBZNJMXVUPPWWCKERIVORMDGOJHTYFZDUKGSLSRXSPTEOOYOPDGHJBFLUFPAAQYUVPHVDLIZAMWVTQOGBRKLQXDBQUTLYDNFINTFOVCRLEMQCAHITJNKZZVMQJFKGQCEQIAYDPVSDAYKTFCJOOXGWKSYLCHUWGRFFASMWDESXPCMJGFUUIZGXJRHLMWNXYBPBZIRUBKNIAUHWDAOSNTREQKZIYWYVMNCXCHCRNXETIEZAVGMBJP");

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
    msg.setTimeStamp(0.9117664686149636);
    msg.setSource(15348U);
    msg.setSourceEntity(150U);
    msg.setDestination(49858U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HURYYGWHDFYZKLQTXWPIQATBZYCFHJHJCDWOCULMOOMODIJQSFSMPBRTUSKHEEVPLZIMFCXJGUKEZFAJBLTRXXNMNLINQHKFNNNYBGZIPABIXEAUSKCSHWVNOPDMGEXJGPYVJOPXYBQKUWWEORCSKCQAWYOERNSARDTOHHCMYTTFTVJXIRUVZEQUQWSQGMBSTVDFRBIDFWJBLUVXZZAEHAUGCKPGROZIYVLQLMWADKSNKEAZGVFBPTLRVNCD");

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
    msg.setTimeStamp(0.884448651379556);
    msg.setSource(10103U);
    msg.setSourceEntity(59U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(132U);
    msg.name.assign("YUHZYSSDEBRJKZMOSGAQWHSNZPLMBGXCKDHCZKETRXTBABODUQXX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZAHOFUTHPYAHFKVUBKIFDKDSGHMLPKTJLSWCBBUDCSNQSGGIMOXZUOXUVEYCIOXYZDQLSAIQWGBKPWFTYNRTMRRYAMCCR");
    tmp_msg_0.value.assign("ROJRUEGDSTVLQPDCKUAUPPIWGXRDVIBRRJEDNKWGBLLYDHRITVYTZOBUALRQGSCTGDSOTBKZUMGGPENYSBMXFETWUDCQIWMBYVMVYFFBJIEAFOINI");
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
    msg.setTimeStamp(0.9080645578655651);
    msg.setSource(11762U);
    msg.setSourceEntity(208U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(107U);
    msg.name.assign("PBJYNXVOZJOEEVHMQRQADUZTTUAXOTDDMCHSGZREIHLTJGUGWHVVXFWMEAPHBGEJKWITAZUFDFVKBRUFOFWFOGJUIVACCUNKRAPCZZOVRQMPIEHSBWLIYVYLSQKZOJMGZKFJCLA");

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
    msg.setTimeStamp(0.527012255084137);
    msg.setSource(29047U);
    msg.setSourceEntity(130U);
    msg.setDestination(38584U);
    msg.setDestinationEntity(60U);
    msg.name.assign("KWKGJRPEMNCNQRFUCCWRDALWXFXMYVAGACOJEDXIREBDBBCQIHFBNJOSCKJAEI");

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
    msg.setTimeStamp(0.6423055438085903);
    msg.setSource(24949U);
    msg.setSourceEntity(223U);
    msg.setDestination(9410U);
    msg.setDestinationEntity(77U);
    msg.name.assign("MSNVZBGTRUJFBRYFOSWKILRCPYAYISWMLNHAZVVGHJFHVUNQPBKGIUSQEYTLNETIIFUCRDABIUZAXXAMWWTULIDPMZRLEDFSOPTOJAOVVSPYRGXRLHGVKPWTQQSEQ");

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
    msg.setTimeStamp(0.836150805652114);
    msg.setSource(52586U);
    msg.setSourceEntity(58U);
    msg.setDestination(38745U);
    msg.setDestinationEntity(87U);
    msg.name.assign("NXBZOVZFGWWQYACBZSBTPESCXRJFDRFZIRDXKNVLYUGNLRRZDTUQZJTNOWQTLWGLGCQKANWDWRKUCVNMENQPEMSNOXNWWXIKFYWBSSCEJOJXPRHKKDD");

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
    msg.setTimeStamp(0.8511193932752762);
    msg.setSource(1667U);
    msg.setSourceEntity(17U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(167U);
    msg.timeout = 873155896U;

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
    msg.setTimeStamp(0.039430708053395325);
    msg.setSource(53822U);
    msg.setSourceEntity(46U);
    msg.setDestination(57337U);
    msg.setDestinationEntity(204U);
    msg.timeout = 4258465565U;

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
    msg.setTimeStamp(0.4341640395814518);
    msg.setSource(61617U);
    msg.setSourceEntity(55U);
    msg.setDestination(47907U);
    msg.setDestinationEntity(19U);
    msg.timeout = 4291094536U;

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
    msg.setTimeStamp(0.26057504007906485);
    msg.setSource(53608U);
    msg.setSourceEntity(133U);
    msg.setDestination(52807U);
    msg.setDestinationEntity(116U);
    msg.sessid = 2094333461U;

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
    msg.setTimeStamp(0.23524155095529597);
    msg.setSource(42303U);
    msg.setSourceEntity(163U);
    msg.setDestination(43049U);
    msg.setDestinationEntity(229U);
    msg.sessid = 2926736994U;

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
    msg.setTimeStamp(0.11446432041087595);
    msg.setSource(57564U);
    msg.setSourceEntity(135U);
    msg.setDestination(60873U);
    msg.setDestinationEntity(163U);
    msg.sessid = 2927697171U;

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
    msg.setTimeStamp(0.05083290015659281);
    msg.setSource(3240U);
    msg.setSourceEntity(195U);
    msg.setDestination(31274U);
    msg.setDestinationEntity(97U);
    msg.sessid = 4291056147U;
    msg.messages.assign("EUKVNTNJAHOLXUHGAKRGGTXUFRHPJSESCOCSTFEJXFBXTGNFFVOVBVDQVLRXGNMCKAAIFZPBHZSBMGTQDASGLWJQQGOPSZRWEIMAFLBFODECBWMUNUWXZEPXDUQANYUIPYNWXZYJWTSYECBTIZROQXC");

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
    msg.setTimeStamp(0.6828839954198284);
    msg.setSource(5136U);
    msg.setSourceEntity(176U);
    msg.setDestination(7711U);
    msg.setDestinationEntity(78U);
    msg.sessid = 1654647997U;
    msg.messages.assign("TGRMCVPDORKNIPORCUMUBNXXXTUMORPHWHRHGCDPKAMOUVLNVOOVERTCOQZNBVE");

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
    msg.setTimeStamp(0.21575817065773273);
    msg.setSource(42720U);
    msg.setSourceEntity(161U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(248U);
    msg.sessid = 1519501939U;
    msg.messages.assign("UNKTKNNCIFFOZETYSSPAABCTVI");

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
    msg.setTimeStamp(0.3744630413051303);
    msg.setSource(35212U);
    msg.setSourceEntity(114U);
    msg.setDestination(55023U);
    msg.setDestinationEntity(250U);
    msg.sessid = 1909633161U;

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
    msg.setTimeStamp(0.3599191836833766);
    msg.setSource(6821U);
    msg.setSourceEntity(4U);
    msg.setDestination(18152U);
    msg.setDestinationEntity(34U);
    msg.sessid = 2464659537U;

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
    msg.setTimeStamp(0.5142559047461926);
    msg.setSource(17706U);
    msg.setSourceEntity(141U);
    msg.setDestination(21025U);
    msg.setDestinationEntity(140U);
    msg.sessid = 2251991825U;

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
    msg.setTimeStamp(0.4837447196286122);
    msg.setSource(28059U);
    msg.setSourceEntity(238U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(219U);
    msg.sessid = 980527904U;
    msg.status = 216U;

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
    msg.setTimeStamp(0.03494393749229796);
    msg.setSource(17380U);
    msg.setSourceEntity(23U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(77U);
    msg.sessid = 953169263U;
    msg.status = 50U;

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
    msg.setTimeStamp(0.7487669091532204);
    msg.setSource(37946U);
    msg.setSourceEntity(127U);
    msg.setDestination(22843U);
    msg.setDestinationEntity(93U);
    msg.sessid = 3848345748U;
    msg.status = 123U;

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
    msg.setTimeStamp(0.9929448394813282);
    msg.setSource(1926U);
    msg.setSourceEntity(221U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MDOFEBZSHKQPCZQZDAHRKNXKSKTKODHQFOSMUAQZCWXJLCEJAFQVZYXSZMGWRBTPXRBONOMKRQTTBRTZGYCMMNMIHFPUPTTGUV");

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
    msg.setTimeStamp(0.831146266880244);
    msg.setSource(5540U);
    msg.setSourceEntity(176U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(71U);
    msg.name.assign("HSFQKVAJYSFLUPWRJMDWZSMUQHXRDLEKHBMFXNPOKSRRMPZLXAZIVOAMLFGEJWZROORBVZOWMQUVNPZPJZXDPHAJRYTGSWYNUTEMBOBWKDAKRCIUHHIQISIOVGMUCAGCSIEUSGCHRYJDLOYYXGXTXRTVTNNNLNLWAEWQBXYJCTQCESMUQAKXDGIFPKQZGVP");

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
    msg.setTimeStamp(0.6007584842760983);
    msg.setSource(12082U);
    msg.setSourceEntity(227U);
    msg.setDestination(53262U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YECFBBTYMQNHOXSKQXXYFRHRLUQPCWGQZUSNIXESLDEEICWHEWOSKRVLHOBLAAUJUDVUQYCITVXGOMXRXCHZQGYDNGBUNG");

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
    msg.setTimeStamp(0.42540152464217007);
    msg.setSource(8782U);
    msg.setSourceEntity(52U);
    msg.setDestination(33572U);
    msg.setDestinationEntity(147U);
    msg.name.assign("MQMKMLUAAPTXBOGFGJJPZSYTKFWMJKQWJIARWZSYRDSELGOEMELHJNFSSDMCEOGNQVCNZZUUOPYIRKIQMKGMFHGTRKVRYOSUKTVGVDTLLXEFTNCPCIZDIUANBVDWPCHSAPVPOBKZFEADPNCYHXOSYAHXYZLCYLEJUCAXIQBGHCGTLSXJTBFIBHIWGRHMWAQREUUP");

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
    msg.setTimeStamp(0.9964558179605905);
    msg.setSource(59170U);
    msg.setSourceEntity(168U);
    msg.setDestination(42408U);
    msg.setDestinationEntity(209U);
    msg.name.assign("JTJJFSTJFIVNLIQLMIRSAIIDIYKPDLPADPNZERZPYZEGDGKUQDHJJQAYHBYCAQXUTZYTRSFARHYOKTMWAXGGEMRWYOFYLBFUSELBUXGNTWLNTSBBHKZGFGUEPUSVVOLRZMBNQQJQCIIMZCCJSBVFWDKFWFHSXOUGAKUFXWEAHOWMGEEAVKGVTOIMYAPEZCHKWCXO");

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
    msg.setTimeStamp(0.7537931975862314);
    msg.setSource(58928U);
    msg.setSourceEntity(156U);
    msg.setDestination(36020U);
    msg.setDestinationEntity(26U);
    msg.name.assign("NUTTGQVFCIJFAUNDXCGKAAMDCSKZZIGZOOZTSHBWNLOBQPYUUKJIVZJRPXHDTVOTHMCXKAYHPRYKIYABQSJDOPLAEJTMKHGIBVUOBRWZUZBCLOVPIRZVIXFGXTCELFLEVMJNFQNLWEGUEQCNVAJANEHXMWJMWSPYLRWKHSSKLBURVSEWCQUNEDRTFSELWHVRNBCTZYEOOXPZGNFPGMMXQQKWDBYMQHAHSAPYJJKRBRFQ");

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
    msg.setTimeStamp(0.5625719600599665);
    msg.setSource(27603U);
    msg.setSourceEntity(107U);
    msg.setDestination(35025U);
    msg.setDestinationEntity(65U);
    msg.type = 224U;
    msg.error.assign("WQUXVAVMNRIJHNLHYUIVALAHIYWIFBTKZCECHXKLEWIWVNPYRGFDTEHXCYUGMRNTQOGJSXJLOYZCEXWTOFMDFFYQPOQGJHCLXCIPFURBUAAUCTOIARZQXBNQBNSTZRIFFGVPGYLZJWLIBJGPBVUMRBOERQHVDZSNMWBYCMBZAZENKHXVRVEQQNUWKKDXSOGMLHQURG");

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
    msg.setTimeStamp(0.7711242086418154);
    msg.setSource(19779U);
    msg.setSourceEntity(49U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(205U);
    msg.type = 85U;
    msg.error.assign("ODBPCMWRKNUPHSFIAWGDLEOEHVCVZSVAXWDGLKITLBOJYLZFJIQCWSVTTKPXYTVKYRPGAWRANCPRFRJMTDUSNIWHKVWPXSEBQEDRGHDCEJZDLKXGFYBP");

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
    msg.setTimeStamp(0.5022304421364213);
    msg.setSource(16198U);
    msg.setSourceEntity(128U);
    msg.setDestination(772U);
    msg.setDestinationEntity(41U);
    msg.type = 116U;
    msg.error.assign("VOHIKERPRIHKQVPQZIOADMASMEXBCJDTRHZYVWOJSJTSKXEBYAGUMWKEHOVHZUSIEXVDZNYDYRIP");

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
    msg.setTimeStamp(0.8398086589991102);
    msg.setSource(45652U);
    msg.setSourceEntity(196U);
    msg.setDestination(30488U);
    msg.setDestinationEntity(106U);
    msg.seq = 39500U;
    msg.sys_dst.assign("PNFSALKOCRKXEULBMTDXJUAALVJTLTZDGNELYVAGUOZKYBVWXTJMXMGBBRQBEUCRYXGXUFUPOEFWBGOPHVFCRIYBHILSQBGOFQIYJJQQFN");
    msg.flags = 140U;
    const char tmp_msg_0[] = {63, -23, -90, -70, -67, -48, -51, 113, -109, 60, -107, 24, 96, -73, 61, -89, -121, -66, -45, -117, 50, -124, -68, 80, -75, 115, -28, -16, 71, -38, -40, -96, 12, -48, 86, 79, 29, -100, 4, -7, 18, 52, -124, 114, -44, 83, -7, -72, 26, -30, 118, -110, 44, 86, 109, -39, -6, 31, 47, -90, -31, -5, 53, -127, 31, 26, -84, -2, 8, 64, 68, -88, -5, 21, 108, -90, -82, 27, 49, 104, -10, 67, -60, 13, 12, 2, 88, -34, -41, 112, 38, -110, -19, 117, -64, 78, -61, -110, -40, -110, -119, -69, 73, 64, 86, -49, -62, 104, -67, -27, 31, 25, -50, -34, -18, -82, 44, -66, 30, -121, 6, -83, -11, -18, -116, 35, 44, -87, -128, 109, -12, 75, 88, -72, -51, 47, -2, -37, 82, 50, 45, -103, -90, 78, -114, 13, 117, 52, 114, -87, -49, 55, -125, -75, 4, 92, 67, 102, -11, -94, 69, 48, -54, 110, -15, -12, 107, 125, -6, 42, 78, -91, 91, 45, -125, 61, 110, 73, 113, -16, -120, -98, -36, -50, -39, 105, 58, -75, -7, -87, 42};
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
    msg.setTimeStamp(0.7010536239513584);
    msg.setSource(12345U);
    msg.setSourceEntity(215U);
    msg.setDestination(47079U);
    msg.setDestinationEntity(184U);
    msg.seq = 58844U;
    msg.sys_dst.assign("BUCTPXLYFCDTIAZSEIFJSXFJWFSRMAHHGNLAEUNDAKULNAZMYYCCSBRFBICLUWJBEZRVAIPGMFTNRKQOGIZJQLHNBXOFDYUYZEBVQRPWTOPAJFKVOWERQCOJAQUSPTDDLJUHWKETEOPZMNOPNFOGFEPAGKCZJXVVKRXYBUXOHHDDQQNTP");
    msg.flags = 119U;
    const char tmp_msg_0[] = {-121, -9, 103, 5, -89, 63, 61, -17, 100, 71, -76, -116, -41, -112, -109, 85, 124, -97, 45, 58, 29, -15, -74, 19, -79, -45, 83, -50, -86, 16, -79, 15, 113, -30, -77, -5, 60, -76, 47, 51, 4, -42, -76, -1, -66, 61, -116, 109, 9, -112, 90, -35, -106, 7, -94, -126, 59, -91, -127, -109, 77, -37, 118, 110, 64, 107, -80, -76, 46, -106, 20, -66, 21, -75, 111, -96, -3, 56, 126, 7, 101, 108, -64, 50, 9, 102, 69, -112, -41, -76, 103, 21, 4, -44, 10, -90, -101, 16, -58, 94, -58, 114, 16, 99, 17, -69, -67, 30, 124, 1, -104, -20, -90, 120, 94, 20, 58, -55, 61, 107, -82, -85, -85, -77, -19, 47, 36, 111, -104, 82, 73, 41, -107, 3, -39, -22, 117, -45, -127, 61, 35, 116, -104, -46, -31, 4, 78, 103, 79, -73, -71, -119, -45, -91, 75, -90, -121, 57, 65, -1, 41, -85, -59, -117, 34, -17, -56, 9, -123, -111, 2, 0, 100, 65, 101, -57, -24, 70, -52, -84, 35, 60, 113, 60, -68, 119, -40, 53, 16, -17, -67, 22, 19, 27, 55, -26, -56, -92, 64, -122, -73, 7, -88, -110, 1, -54, 44, 112, -92, -51, -19, 115, 76, 80, 75, 3, -7, -66, 61, 79, 69, 34, 15, -69, -104, 39, 70, 38, 54, 33, 60, 45};
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
    msg.setTimeStamp(0.11362942644014173);
    msg.setSource(61310U);
    msg.setSourceEntity(203U);
    msg.setDestination(61562U);
    msg.setDestinationEntity(49U);
    msg.seq = 21625U;
    msg.sys_dst.assign("OEFNBHTVCGDVGKJHPBAFIGQUYOHFFRWFLLXPEBXFRUJJPKGSNLHDFMMPMSPVEHMQGKZSGZYWEVYIEYUXXYKFLUINOCVQGCEZWIXZDALMBMPOXIXZYUUYCJDEHTUCDIEJQSAWBQMDIVZRACPBWJWFVNOZJSQTIRGWTVHIRREDDQLQRSSYZCHBRGLANDALYNOTCNCZPQXUTATNXHWMQYABCKOVDPKBOJTSTMROAWWSSUMLK");
    msg.flags = 108U;
    const char tmp_msg_0[] = {43, 51, -99, -43, 90, 79, -103, 112, -82, 113, 52, -73, -54, -26, -32, 63, 29, 26, -119, -98, 62, -11, -95, -42, 13, 61, -109, 4, -110, -10, -26, 35, -90, 86, 14, 59, 56, 123, 119, -28, 107, 62, -36, -44, -82, -59, 45, 30, -35, -116, -5, -105, 114, -35, -119, -96, -118, 49, 116, 36, -29, 22, -120, -91, -89, -17, 106, -82, -65, 48, 94, -93, -70, 117, 76, 4, -65, -20, 97, -59, -22, 26, -106, -55, 52, 23, -79, -60, 80, 65, -67, -83, 92, -96, -122, -19, -6, 3, -1, 124, -8, -119, -57, 79, 23, -48, -68, 64, 64, 51, 77, 75, 108, 82, -125, 2, 31, 62, 89, -120, 117, 17, -19, 92, -56, -125, 65, -86, 6, 92, 63, 8, 29, -20, -78, -94, 34, -13, -72, -102, 107, 105, -117, -47, -46, 103, -19, -50, -43, -46, 25, -79, -122, 61, 113, -10, -34, 114, -123, 102, -74, 5, 16, 7, -124, 62, 126, 31, -100, 88, 82, -123, 41, -4, 70, -107, 18};
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
    msg.setTimeStamp(0.39086768692281537);
    msg.setSource(64184U);
    msg.setSourceEntity(173U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(106U);
    msg.sys_src.assign("LOBLMCFNJTHYKOBFVLKLYDBWDGDJOJSFABURQRUJOVIXKWUCHBIXEXNRTXNJLDFIVKOAPHUWLCJPEZWWI");
    msg.sys_dst.assign("KRSYIYFBCJHTYTRHZOWDVYBPFXWEOMYETXSLMVVXTBGNRJOOQZEWIRRPBXXENQJUAKIMUBWPSLXALJKGRNKWIDQPVEYFMQCV");
    msg.flags = 29U;
    const char tmp_msg_0[] = {-14, -66, -63, -61, 11, -36, -95, -18, 12, 81, 44, -1, -19, -81, 53, 60, -33, -69, -101, 84, -28, -59, -72, -122, 85, 76, 59, 22, -80, 87, 16, -60, -124, -8, -119, -5, -79, -113, -111, 115};
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
    msg.setTimeStamp(0.567932487677119);
    msg.setSource(50267U);
    msg.setSourceEntity(12U);
    msg.setDestination(38405U);
    msg.setDestinationEntity(225U);
    msg.sys_src.assign("VCFREMEGQLEAAWHRYVDHZDEBEPJTE");
    msg.sys_dst.assign("TTELMDYXZMJUCOJIEHDXJMIIBSYMLCATEGWKLRKYMUGFHGOSKNDUBBLLOCZYQQUGAWPRWNRNHHKHAENIJBEYXVCUVOOULDOJXAGMTRAJDZQPVDWKVKEWJIFXXNQFCFYXZDWFBQFKEDXHVGHNTJPVXQMAZSVJPYLRIBVHCUIDARBGHRJIXTZBALPNFSEPUETLQZFYBWPSTSOATVUYBGEKMISCWNQSLCDIGPRQ");
    msg.flags = 41U;
    const char tmp_msg_0[] = {-116, 52, 2, 104, 81, -77, 110, -38, 38, -33, -82, 121, -105, -33, 113, 124, -117, -110, 13, -7, 93, 5, 90, -77, -64, 77, 27, -14, -80, 107, 60, 54, -59, 115, 51, 0, 50, -8};
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
    msg.setTimeStamp(0.33268857515056127);
    msg.setSource(35226U);
    msg.setSourceEntity(252U);
    msg.setDestination(52521U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("WNSVJOJANICEMRITWRBDZWBZTBCNGWJQXLOZQSGSQCNATKLAISPDVNBFUUBEGGYEFZCBOTEKPWLPSISHEUNUFTXOIGFOFXDYQSYZYMVLIOOTMFFVDHCCAWKBKKMIHWLJOQOUQPMRBYXPNTZXZXWQQSRKPX");
    msg.sys_dst.assign("OGADMAKKFUYHZMKLSEBDFIEHEZDBKJRSCBXSGAGDVXIUDUOZKZJRVQMERURBJWPBPYFFJDDBKPYPOTGNWTYXONUQLHIFALJYGZPUOQIWEDHTWLYAJTCTCFDYNKQH");
    msg.flags = 200U;
    const char tmp_msg_0[] = {-39, -29, -22, 19, 67, -16, 90, -8, 25, 117, 115, -85, -48, 110, 88, 6, -80, -124, -1, 2, -69, -3, 69, -105, -11, 24, 70, -102, 58, 59, 80, 58, 53, -54, 121, 46, 117, 15, -57, 49, 4, 120, -19, -125, -67, -97, -128, -29, -98, 35, -22, 119, -13, 59, 59, 121, -106, -58, -108, -121, 54, -113, 13, -96, -96, 86, -29, -68, -48, 29, 114, 122, 42, -53, -77, -49, -109, 116, -113, 83, -58, 104, -21, 94, 113, 107, 75, 46, -96, -106, 80, 106, -51, -37, -66, -48, -10, -49, -67, 33, 104, -58, -124, -10, -89, 13, -61, 38, 79, -81, -38, 29, -33, 62, 43, -116, -80, -100, 102, -77, -25, -8, 125, 92, 113, -18, 37, -22, 77, -65, -77, -113, 112, 58, 12, -30, -41, -87, 62, -84, 121, 20, 85, 4, 55, 21, 27, 60, 105, -40, 37, -81, -108, -20, 123, 88, -95, 74, 8, -108, 74, 90, 7, -33, -25, -49, 95, -75, -22, -90, 100, -104, -54, -67, -17, -10, -119, -46, -89, -116, 91, -6, -43, -63, -69, 20, -15, 85, 95, -56, 8, 33, -105, 34, -108, -76, -70, 89, -75, 68, -99, 126, -64, 103, -21, -104, 17, 106, 120, 84, 9};
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
    msg.setTimeStamp(0.26135223349551995);
    msg.setSource(57042U);
    msg.setSourceEntity(87U);
    msg.setDestination(23339U);
    msg.setDestinationEntity(174U);
    msg.seq = 10299U;
    msg.value = 48U;
    msg.error.assign("BUNSBTFJTEDFUJRCBGFGKFYEBVPASTWMNQPDKBDKRMTWVVJZKIWQYNCBCTYBNWLOUTGMPXJNUZHTPABNDUWEIQCOU");

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
    msg.setTimeStamp(0.19599387723313877);
    msg.setSource(35242U);
    msg.setSourceEntity(224U);
    msg.setDestination(16237U);
    msg.setDestinationEntity(136U);
    msg.seq = 60855U;
    msg.value = 215U;
    msg.error.assign("HESMLWUWRYLPPNMOCTVWZZDDLAOGUBFDYFBVRJTHSXWXFYDFWK");

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
    msg.setTimeStamp(0.7141497942680958);
    msg.setSource(29064U);
    msg.setSourceEntity(139U);
    msg.setDestination(39988U);
    msg.setDestinationEntity(56U);
    msg.seq = 22618U;
    msg.value = 149U;
    msg.error.assign("ZGGFDGCXCCXEBRRMHJPMAICWRZSHBOLUFYJZCKTXAEFIJHHEUPTZZBSAEVMQKRRXMUNWKPJIDVSVMQNCSADKLBNBOSNLQ");

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
    msg.setTimeStamp(0.8096670647203968);
    msg.setSource(37683U);
    msg.setSourceEntity(39U);
    msg.setDestination(25420U);
    msg.setDestinationEntity(44U);
    msg.seq = 50599U;
    msg.sys.assign("VBZSNTYJCVBIERRM");
    msg.value = 0.7138209223706851;

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
    msg.setTimeStamp(0.48326966160592);
    msg.setSource(19783U);
    msg.setSourceEntity(14U);
    msg.setDestination(53865U);
    msg.setDestinationEntity(103U);
    msg.seq = 18969U;
    msg.sys.assign("RRSAWXEFHXZHOJVLQUHTLYILNPPBBWQAQFDVMOLDNQLAWPIVCWMAZLFNMUDPGVEYUIWWVRSDOUSPNOAZWDTOKHKEJVMIVHBZJOOSW");
    msg.value = 0.7672903730809129;

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
    msg.setTimeStamp(0.2556444818610658);
    msg.setSource(20015U);
    msg.setSourceEntity(147U);
    msg.setDestination(620U);
    msg.setDestinationEntity(13U);
    msg.seq = 52564U;
    msg.sys.assign("UWYOWJXDAEUGFOPLRROHISDKNNKJBSBTSXLAOYPFNNIXYHUIHVQAGLHFFHRMSALMLPVBEYHXSBJLMWJPGMXXQUWCQOWIQUPXWYETAGKIJFISTEIORNGCWAFBCLCHARJPKZHKOMCVZNDTPXKDMNMKNFRQFZYJEZOIBVZEUPKEU");
    msg.value = 0.942468939616687;

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
    msg.setTimeStamp(0.8137445597086076);
    msg.setSource(1497U);
    msg.setSourceEntity(4U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(93U);
    msg.seq = 35271U;
    msg.sys_dst.assign("MZHHPQWFOPNOEQRIUZNDRYZVEVLBMCUDYLXVBIMPTTFJBLRPKDFWMJRTURBEEXYXIASALUUYJSGZXMSORTJOTTKJUYCWIALDQJGEZRFBSPBEJDRYEIUFOSDAEUSAWGHTJRHTPXCHGLBISZLDWWKZMYKVFDZVWCBBOYQVCMCCWL");
    msg.timeout = 0.18355460679137836;

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
    msg.setTimeStamp(0.6501416131694965);
    msg.setSource(18779U);
    msg.setSourceEntity(173U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(80U);
    msg.seq = 63219U;
    msg.sys_dst.assign("BYESAKNXEHMFWCQKCJYRMDICNOFPRNILJHMKOBMYTGVNSAORZXQAQIQBNXLTYYOXGELUPWXKAGUHYJZSUGMNUJDDXRGUQPDCQNXELBMZIRODZTLQJYCSLPAEQOIFZZBWRHWTVTU");
    msg.timeout = 0.8212389780813467;

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
    msg.setTimeStamp(0.012614122236067726);
    msg.setSource(20808U);
    msg.setSourceEntity(128U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(141U);
    msg.seq = 53031U;
    msg.sys_dst.assign("MYUKUAEEJWHSTVSSSLHTKCLAOFTKTDQKDJBNKXYANDSDIICIXCZXPXCCAYWFONZUNWMUHQVQMLUPTDGUYHXRESVSXCMLCXZZMDVOARWTRARVJFGMRSKLIANQBPPSJEFKJWQEAJGIVCFCJGSWWBZOPYI");
    msg.timeout = 0.6764954751209158;

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
    msg.setTimeStamp(0.0435061267994763);
    msg.setSource(35184U);
    msg.setSourceEntity(191U);
    msg.setDestination(41717U);
    msg.setDestinationEntity(188U);
    msg.action = 6U;
    msg.longain = 0.2539395850337959;
    msg.latgain = 0.05365260086502177;
    msg.bondthick = 2456415110U;
    msg.leadgain = 0.5871382030222813;
    msg.deconflgain = 0.9569991886987219;

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
    msg.setTimeStamp(0.9891178409402178);
    msg.setSource(63598U);
    msg.setSourceEntity(178U);
    msg.setDestination(2792U);
    msg.setDestinationEntity(30U);
    msg.action = 54U;
    msg.longain = 0.12361195896862032;
    msg.latgain = 0.4879011899867409;
    msg.bondthick = 575138585U;
    msg.leadgain = 0.5508354568730522;
    msg.deconflgain = 0.97744480475858;

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
    msg.setTimeStamp(0.4843366926405055);
    msg.setSource(26140U);
    msg.setSourceEntity(145U);
    msg.setDestination(26954U);
    msg.setDestinationEntity(228U);
    msg.action = 150U;
    msg.longain = 0.8001948172482235;
    msg.latgain = 0.9443856031580247;
    msg.bondthick = 3567501472U;
    msg.leadgain = 0.5972603713008554;
    msg.deconflgain = 0.7846583503324817;

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
    msg.setTimeStamp(0.5993098009092195);
    msg.setSource(32838U);
    msg.setSourceEntity(222U);
    msg.setDestination(55326U);
    msg.setDestinationEntity(83U);
    msg.err_mean = 0.627005429646686;
    msg.dist_min_abs = 0.28231208131661834;
    msg.dist_min_mean = 0.5835729200313879;

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
    msg.setTimeStamp(0.5447318949563649);
    msg.setSource(25920U);
    msg.setSourceEntity(56U);
    msg.setDestination(33849U);
    msg.setDestinationEntity(164U);
    msg.err_mean = 0.7907164992951753;
    msg.dist_min_abs = 0.1571466586972906;
    msg.dist_min_mean = 0.9995803405282377;

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
    msg.setTimeStamp(0.3859188754224764);
    msg.setSource(62385U);
    msg.setSourceEntity(119U);
    msg.setDestination(48435U);
    msg.setDestinationEntity(182U);
    msg.err_mean = 0.8949835444842347;
    msg.dist_min_abs = 0.16557001666232618;
    msg.dist_min_mean = 0.1283156330782501;

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
    msg.setTimeStamp(0.3052888757060641);
    msg.setSource(47754U);
    msg.setSourceEntity(7U);
    msg.setDestination(29605U);
    msg.setDestinationEntity(123U);
    msg.action = 169U;
    msg.lon_gain = 0.9741373526448007;
    msg.lat_gain = 0.8178376979767006;
    msg.bond_thick = 0.7456369820963363;
    msg.lead_gain = 0.8678149453484032;
    msg.deconfl_gain = 0.9221349931326732;
    msg.accel_switch_gain = 0.327527112058967;
    msg.safe_dist = 0.19668580356909193;
    msg.deconflict_offset = 0.4730682070768195;
    msg.accel_safe_margin = 0.23820075013213515;
    msg.accel_lim_x = 0.32243864857871973;

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
    msg.setTimeStamp(0.143447772463139);
    msg.setSource(15257U);
    msg.setSourceEntity(38U);
    msg.setDestination(9668U);
    msg.setDestinationEntity(118U);
    msg.action = 15U;
    msg.lon_gain = 0.04431796882288275;
    msg.lat_gain = 0.47540263770685953;
    msg.bond_thick = 0.17655913315822658;
    msg.lead_gain = 0.5810916393939862;
    msg.deconfl_gain = 0.2969503171550604;
    msg.accel_switch_gain = 0.544074009536553;
    msg.safe_dist = 0.8441458729152123;
    msg.deconflict_offset = 0.8429917203191144;
    msg.accel_safe_margin = 0.36173882656471723;
    msg.accel_lim_x = 0.5734743995450422;

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
    msg.setTimeStamp(0.10709131871989519);
    msg.setSource(32595U);
    msg.setSourceEntity(151U);
    msg.setDestination(7868U);
    msg.setDestinationEntity(60U);
    msg.action = 82U;
    msg.lon_gain = 0.3223814054715942;
    msg.lat_gain = 0.3379892874863697;
    msg.bond_thick = 0.1278291080776306;
    msg.lead_gain = 0.7819392536838466;
    msg.deconfl_gain = 0.32853080445221106;
    msg.accel_switch_gain = 0.988666868301939;
    msg.safe_dist = 0.5706147206531264;
    msg.deconflict_offset = 0.6922146004880418;
    msg.accel_safe_margin = 0.9552916860497435;
    msg.accel_lim_x = 0.4229342639395499;

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
    msg.setTimeStamp(0.03187418396068742);
    msg.setSource(22681U);
    msg.setSourceEntity(198U);
    msg.setDestination(13230U);
    msg.setDestinationEntity(161U);
    msg.type = 161U;
    msg.op = 94U;
    msg.err_mean = 0.08493392951495904;
    msg.dist_min_abs = 0.18315057160370496;
    msg.dist_min_mean = 0.25780908396280244;
    msg.roll_rate_mean = 0.6452477593618748;
    msg.time = 0.7341226199683917;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 122U;
    tmp_msg_0.lon_gain = 0.7295093055044103;
    tmp_msg_0.lat_gain = 0.5733171012706468;
    tmp_msg_0.bond_thick = 0.9812698746782751;
    tmp_msg_0.lead_gain = 0.24106503998873852;
    tmp_msg_0.deconfl_gain = 0.11413529250394816;
    tmp_msg_0.accel_switch_gain = 0.20391100151539865;
    tmp_msg_0.safe_dist = 0.709201879920266;
    tmp_msg_0.deconflict_offset = 0.725212053704113;
    tmp_msg_0.accel_safe_margin = 0.5060408438501138;
    tmp_msg_0.accel_lim_x = 0.7451869938544341;
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
    msg.setTimeStamp(0.6630420163413157);
    msg.setSource(35017U);
    msg.setSourceEntity(87U);
    msg.setDestination(48287U);
    msg.setDestinationEntity(34U);
    msg.type = 161U;
    msg.op = 153U;
    msg.err_mean = 0.9217564779703037;
    msg.dist_min_abs = 0.49566589362551094;
    msg.dist_min_mean = 0.036167033467542575;
    msg.roll_rate_mean = 0.3594291032619257;
    msg.time = 0.45079738610178854;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 252U;
    tmp_msg_0.lon_gain = 0.4243183834579449;
    tmp_msg_0.lat_gain = 0.8523572307924842;
    tmp_msg_0.bond_thick = 0.8019438387138752;
    tmp_msg_0.lead_gain = 0.6134015083367517;
    tmp_msg_0.deconfl_gain = 0.7877174663614801;
    tmp_msg_0.accel_switch_gain = 0.1118673113012777;
    tmp_msg_0.safe_dist = 0.2800298152360523;
    tmp_msg_0.deconflict_offset = 0.0666694661078;
    tmp_msg_0.accel_safe_margin = 0.8718590657399417;
    tmp_msg_0.accel_lim_x = 0.39372764710176855;
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
    msg.setTimeStamp(0.37324731586101456);
    msg.setSource(27190U);
    msg.setSourceEntity(51U);
    msg.setDestination(63390U);
    msg.setDestinationEntity(172U);
    msg.type = 159U;
    msg.op = 223U;
    msg.err_mean = 0.8450076176225185;
    msg.dist_min_abs = 0.8867644018352937;
    msg.dist_min_mean = 0.31881012071056103;
    msg.roll_rate_mean = 0.6426550792302242;
    msg.time = 0.37189851053848344;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 209U;
    tmp_msg_0.lon_gain = 0.5257786189134658;
    tmp_msg_0.lat_gain = 0.12055366552506663;
    tmp_msg_0.bond_thick = 0.4301520162441268;
    tmp_msg_0.lead_gain = 0.3090577879908666;
    tmp_msg_0.deconfl_gain = 0.3009810609441378;
    tmp_msg_0.accel_switch_gain = 0.5769102729126835;
    tmp_msg_0.safe_dist = 0.6283982293410533;
    tmp_msg_0.deconflict_offset = 0.33862291003500367;
    tmp_msg_0.accel_safe_margin = 0.43682590938996424;
    tmp_msg_0.accel_lim_x = 0.7861754318085084;
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
    msg.setTimeStamp(0.43584824264198463);
    msg.setSource(17441U);
    msg.setSourceEntity(237U);
    msg.setDestination(8398U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.02064433471099736;
    msg.lon = 0.9023828787406067;
    msg.eta = 3810310181U;
    msg.duration = 33021U;

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
    msg.setTimeStamp(0.47741046463964687);
    msg.setSource(55786U);
    msg.setSourceEntity(68U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.05846840733460823;
    msg.lon = 0.7054843736266418;
    msg.eta = 3149513786U;
    msg.duration = 55852U;

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
    msg.setTimeStamp(0.5982579336562215);
    msg.setSource(56715U);
    msg.setSourceEntity(82U);
    msg.setDestination(54011U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.35001613870838166;
    msg.lon = 0.1899236842033799;
    msg.eta = 1823067914U;
    msg.duration = 16317U;

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
    msg.setTimeStamp(0.9053009731522227);
    msg.setSource(35858U);
    msg.setSourceEntity(86U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(164U);
    msg.plan_id = 54082U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8508540207105564;
    tmp_msg_0.lon = 0.7074662486339605;
    tmp_msg_0.eta = 3930661086U;
    tmp_msg_0.duration = 1399U;
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
    msg.setTimeStamp(0.5921454996264832);
    msg.setSource(26069U);
    msg.setSourceEntity(23U);
    msg.setDestination(2288U);
    msg.setDestinationEntity(189U);
    msg.plan_id = 36563U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8637622012763275;
    tmp_msg_0.lon = 0.5613317704227844;
    tmp_msg_0.eta = 613826863U;
    tmp_msg_0.duration = 42701U;
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
    msg.setTimeStamp(0.964199102544647);
    msg.setSource(52248U);
    msg.setSourceEntity(170U);
    msg.setDestination(2381U);
    msg.setDestinationEntity(154U);
    msg.plan_id = 62441U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8250803720186783;
    tmp_msg_0.lon = 0.4457302260880259;
    tmp_msg_0.eta = 1228286236U;
    tmp_msg_0.duration = 30255U;
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
    msg.setTimeStamp(0.24065411642934853);
    msg.setSource(11086U);
    msg.setSourceEntity(150U);
    msg.setDestination(17309U);
    msg.setDestinationEntity(252U);
    msg.type = 99U;
    msg.command = 51U;
    msg.settings.assign("VEFZJETYXZXDALMGMUQSZHTXDRJDPEOLVJIHIOWBTMAHBNNAJIGAWUXOHWYFVEJZEOBHJFMCJGFPRM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 18217U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7138555432459145;
    tmp_tmp_msg_0_0.lon = 0.12573974905426366;
    tmp_tmp_msg_0_0.eta = 3932371510U;
    tmp_tmp_msg_0_0.duration = 2280U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WAEQEHWZRPOAXIUPNUSILILEGOJUQBNLHEKCGBVO");

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
    msg.setTimeStamp(0.971733022675981);
    msg.setSource(20097U);
    msg.setSourceEntity(0U);
    msg.setDestination(55221U);
    msg.setDestinationEntity(254U);
    msg.type = 148U;
    msg.command = 138U;
    msg.settings.assign("CKMVMSBQAILTDUMTMZHSKAPWCLGBGEBOHKFFCTEYBMZGDFGYFDNHNQTQIIULRSCEPAROXPWUYVXHXKFWHONSVAHHUECMUSPNRJCGGXTMRSTZVBFQHJSYFSQOXPYVYDXLJUZJQCAWJXWDHBWBTRBUVZLFRXYKQEIWKKLNPRDUAXJLKFSJOYPKDWHLDNGWEVNOJABITDJQXFSRTRWOYEBZILL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40940U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5542114310324159;
    tmp_tmp_msg_0_0.lon = 0.4655638943121203;
    tmp_tmp_msg_0_0.eta = 2515074685U;
    tmp_tmp_msg_0_0.duration = 46285U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OUCKHWLRNSEOKXURINQQPMGQDQSSAKPPWKLMWBGIZISTMPLVRVGJFHZNQIHBSOVAEBGDBZLXVGGEATIFTRFNOGJVAMACZYKEAWFAFCKIHQIWBNLZAMWQZOPBTCDHWLAFBXTFTUORQMVHYVNEMYUCRJPELYDCOHPCLNKGXOJRUSIJKZDAQXWSLSHGXEYBJPSJQXDVXYMVSTNRTDEXFEIREW");

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
    msg.setTimeStamp(0.11414347328523633);
    msg.setSource(7772U);
    msg.setSourceEntity(128U);
    msg.setDestination(375U);
    msg.setDestinationEntity(169U);
    msg.type = 195U;
    msg.command = 51U;
    msg.settings.assign("GHFARBXRTLWSKMVLEZJVAMFJHZNASNDBTZCJEMETSPCOEGPHUUEFCEUPOMSGSVZUBHJJIZKIJCRZKLKGRTAQOYGDFCOUHITSAWTBPFSXHIVXEZKDOCFNGUWOAQVWUCQNZFDEXJWLTZGQRPFVNNIUGPSCRWAXOAPXONYBLMKIWFQVEJRMBBRDXSIPOPMMY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19734U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4700252776484696;
    tmp_tmp_msg_0_0.lon = 0.7804958781376335;
    tmp_tmp_msg_0_0.eta = 1787974238U;
    tmp_tmp_msg_0_0.duration = 27762U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IEXNHTJLISPTATSDMYKWTNRJRJMNAAMZZSNFDRTUWWEYPXDXFRRTMVSPYKZRHNWGZNRFRSUBVJVPQUNCHQYGQOKLGJCMZVMDEBKIJXUHKWAGKBGSMXZPTTAKIWYAWOGOWWYKPOFZHEVDSIQTLPFQBQILCEOOVYOPFHCRZKBIJBLFFLJYJECIGDMCCCGUHNSHQAHB");

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
    msg.setTimeStamp(0.18091710408419015);
    msg.setSource(42117U);
    msg.setSourceEntity(218U);
    msg.setDestination(33910U);
    msg.setDestinationEntity(232U);
    msg.state = 41U;
    msg.plan_id = 47461U;
    msg.wpt_id = 157U;
    msg.settings_chk = 46888U;

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
    msg.setTimeStamp(0.4958711481471496);
    msg.setSource(38726U);
    msg.setSourceEntity(40U);
    msg.setDestination(11317U);
    msg.setDestinationEntity(144U);
    msg.state = 201U;
    msg.plan_id = 22808U;
    msg.wpt_id = 237U;
    msg.settings_chk = 44464U;

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
    msg.setTimeStamp(0.7331058221935544);
    msg.setSource(63722U);
    msg.setSourceEntity(242U);
    msg.setDestination(1936U);
    msg.setDestinationEntity(200U);
    msg.state = 246U;
    msg.plan_id = 45654U;
    msg.wpt_id = 128U;
    msg.settings_chk = 29634U;

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
    msg.setTimeStamp(0.88578036250687);
    msg.setSource(51512U);
    msg.setSourceEntity(208U);
    msg.setDestination(17322U);
    msg.setDestinationEntity(78U);
    msg.uid = 204U;
    msg.frag_number = 45U;
    msg.num_frags = 194U;
    const char tmp_msg_0[] = {-102, -54, 33, -45, -111, -16, -121, 41, 32, 91, 114, 63, 69, -75, 13, 55, 43, -17, -32, 87, 61, -30, 9, -121, 28, 48, -126, -46, -27, 120, 93, 118, 49, -95, -25, 21, 68, -70, 118, -60, 48, -17, -102, 82, -78, -54, -103, 95, 98, -42, 24, 82, 46, 35, 69, 84, -120, 126, 109, -86, 58, -110, -20, 31, -58, 106, 123, -1, 7, -86, 103, -106, 65, -7, -40, -126, -39, 92, 31, 30, 62, 97, -15, 112, 55, 58, -80, -13, -53, -55, 120, -112, -51, 0, 112, -96, -77, 54, 0, 36, 79, -32, -15, -96, -51, 116, 29, -1, -118, -95, -121, 117, -76, 50, -114, -84};
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
    msg.setTimeStamp(0.0994381767631708);
    msg.setSource(61176U);
    msg.setSourceEntity(11U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(151U);
    msg.uid = 55U;
    msg.frag_number = 243U;
    msg.num_frags = 126U;
    const char tmp_msg_0[] = {12, 17, 19, -66, -14, 45, 45, -36, 65, -38, -37, -13, 10, -61, 116, 44, 7, 49, 46, -87, 48, -89, 78, 73, -114, -4, -81, 48, -86, 119, 108, 93, 33, 103, 125, 110, -41, -81, 113, 0, 49, -116, -27, 62, 20, -72, -110, -6, -100, -84, 42, -117, -36, 51, 44, 60, -69, 123, -115, 70, -13, 24, 56, -28, -7, 83, 116, 42, 106, -41, -53, 20, -33, -116, 124, 30, 87, 85, -37, -67, -93, -20, 108, -27, 91, 104, 105, 50, -38, 60, -107, 65, -113, -78, 26, -8, 21, 93, 73, 77, -99, -24, -12, -19, 103, -99, 76, -73, 88, -38, 50, 81, -82, -90, -8, 106, -52, -112, -45, 16, 53, 21, 105, 15, 122, -119, 106, -66, -59, -68, -38, -110, 117, 30, -101, 92, 61, 79, 123, -109, 72, 51, 45, 92, 26, -91, 108, 123, 32, 125, 8, 17, -95, 41, 119, -105, 59, -98, -11, 97, 114};
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
    msg.setTimeStamp(0.1600725803373667);
    msg.setSource(682U);
    msg.setSourceEntity(196U);
    msg.setDestination(60352U);
    msg.setDestinationEntity(198U);
    msg.uid = 16U;
    msg.frag_number = 157U;
    msg.num_frags = 235U;
    const char tmp_msg_0[] = {116, 2, 62, 120, -96, 119, 20, -28, 62, -101, 47, 96, -74, 117, -37, -56, 100, 74, -45, -51, 10, -49, -33, -111, -79, -16, -70, -100, 86, 3, 102, -7, 53, 57, -9, -50, -11, 42, -21, -62, -60, 66, 97, -59, 34, 85, 24, -13, 80, 6, -77, -15, 15, -85, 16, -10, 114, 40, -36, 93, -86, -101, 48, 115, -67, 88, -88, 67, -62, -51, 58, -30, -13, 125, -62, -124, 83, -86, 82, 84, 1, 6, -109, -81, -83, 33, 12, -85, 86, -28, 24, -15, 62, -120, 22, 98, -96, -17, -34, 23, -58, -112, 26, 111, 44, -36, 74, -15, 87, 32, 57, -45, -3, 35, -115, -23, -19, 13, -36, -24, 66, 68, 51, 23, 13, 13, -120, 77, -44, 65, -14, -9, 73, 15, -8, -125, -93, 43, -107, -93, -76, -104, -110, -107, -6, 101, 34, 32, 111, -120, -60, 102, 126, -109, -70, 30, -11, -34, 110, 15, 83, 28, 117, 83, 40, 119, 40, -69, -92, 11, 7, 87, 8, -39, -34, 81, 10, 69, -125, -19, 17, 79, 93, 107};
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
    msg.setTimeStamp(0.35042330852343884);
    msg.setSource(63708U);
    msg.setSourceEntity(225U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(9U);
    msg.content_type.assign("IMUSSZWVHRIPIMUOSRPDLLTHCXPKZXMCWZSXOZDHFPNRNXYIYUKEFSGWMVCSODNGDFDVXGYJDOAUZQCVYJKXUNJZRKSPWKBPJVPAPTKBTNSDZJZSMWBACAIHKAUFVIYM");
    const char tmp_msg_0[] = {-14, 34, 78, -12, 15, 92, -95, 68, -119, 21, -28, 37, 41, 6, 85, -25, -124, -101, -101, 97, 57, -64, 103, -27, -128, -83, -63, 51, 21, 101, -75, 115, 120, -2, -2, -87, 79, -15, 50, -16, -4, -74, -40, -113, -94, -103, -122, 109, -10, -37, 56, 56, -71, -66, 33, -72, -112, 40, 85, 90, 4, -79, -60, 82, -110, 126, -109, -89, -63, -64, -68, -44, 93, 61, -28, -29, -18, -120, 47, 98, 58, 126, -19, 41, -97, -33, -119, 118, -45, 18, -58, -20, -20, -128, 38, 89, -108, -69, -115, -4, -51, -70, 35, -107, -52, -71, 38, 66, -99, 94, -29, 105, 37, 99, -1, 44, 45, 97, 85, -35, 59, 124, -82, 39, 38, -54, -87, 55, -118, 80, 122, -13, -2, 84, -53, -78, 41, -72, 114, 101, -117, -105, 125, -45, -86, -119, 12, 14, -45, -91, -87, -19, -99, -53, 66, -39, -21, 61, 7, -106, -80, 116, 120, -103, -92, -97, 40, 20, -28, -94, -42, -33, -119, -111, -12, -51, 103, -99, -69, -99, 71, -68, 88, -1, -113, -104, -9, 102, -3, -57, -78, 103, 26, -98, 56, 86, 30, -86, 90, 82, 80, 18, -127, 15, 21, 53, -23, 8, -97, -94, 4, 107, 54, -13, 123, -10, 123, 44, -71, 6, -26, -17, -94, -77, 18, 11, -17, 90, -82};
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
    msg.setTimeStamp(0.9087856811534597);
    msg.setSource(20916U);
    msg.setSourceEntity(64U);
    msg.setDestination(38881U);
    msg.setDestinationEntity(59U);
    msg.content_type.assign("VUGHNXREIBHXCOHKOESPUGKGVBTAUPFRSIWIOSNZBUZDWGMQKEYFTZYJCTOUBRVECTGRTJRNVZKYYLUAHDYGD");
    const char tmp_msg_0[] = {-73, 1, -53, 75, -27, 124, -10, -46, 100, 33, 63, 65, -111, -42, -3, 67, -77, 84, 43, 81, 82, -16, -27, -112, -26, -37, 110, 23, 23, -17, 0, 6, -67, -83, 117, -124, 98, -13, -127, 113, -59, -13, -103, -52, 79, 122, 71, -46, -16, 111, -77, 18, -91, 36, 91, 72, 51, -95, -31, -21, 26, -104, -109, 40, -90, -13, -90, 83, 30};
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
    msg.setTimeStamp(0.8769784517917373);
    msg.setSource(54098U);
    msg.setSourceEntity(80U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(182U);
    msg.content_type.assign("PXJNIVTJZJDRJAQZBCARNTCKLFMQQMOBCLSSPEHKROWRLYXDXSSGVMWETMKUDMIGOHEVBJGYABOOVAZSVRQSTIPHPLWZMMHIJFGADBAXMMEPQGWPFGNBYYPDZYUYUOQXJKXZSEFWVUNEUCQRICVJYHGFOWENEHCTGRQAFZDRNTXKRPDILEXDXTYXUFWUNKBBHKIUCPVVZNLOAIQSHTKAVLWOISJT");
    const char tmp_msg_0[] = {20, -82, -27, 33, -127, 41, 80, -80, 9, 93, 122, 97, -38, -91, 116, -106, -82, 61, -86, 52, -28, 110, 122, -108, 117, -11, -16, -46, -86, 39, 10, -95, 40, 12, 113, -86, -2, 55, -74, 42, -38, 9, 120, -99, 98, 74, 96, 59, -3, -18, -86, 0, 37, -19, -101, -107, 8, 69, -18, -62, 10, 72, -39, 120, 120, -67, -80, 43, 60, -107, -65, 12, 46, 20, -21, 46, 29, -25, -73};
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
    msg.setTimeStamp(0.85715541928671);
    msg.setSource(34044U);
    msg.setSourceEntity(9U);
    msg.setDestination(41134U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.4358501759564086);
    msg.setSource(44252U);
    msg.setSourceEntity(37U);
    msg.setDestination(47523U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.9205271170019622);
    msg.setSource(12503U);
    msg.setSourceEntity(115U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.07017020489657999);
    msg.setSource(6621U);
    msg.setSourceEntity(45U);
    msg.setDestination(25286U);
    msg.setDestinationEntity(125U);
    msg.target = 17088U;
    msg.bearing = 0.2797959451836308;
    msg.elevation = 0.5601266179473898;

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
    msg.setTimeStamp(0.13066962264419668);
    msg.setSource(43136U);
    msg.setSourceEntity(110U);
    msg.setDestination(14520U);
    msg.setDestinationEntity(215U);
    msg.target = 4907U;
    msg.bearing = 0.39453655484955164;
    msg.elevation = 0.6774395211408557;

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
    msg.setTimeStamp(0.24832733312200128);
    msg.setSource(4704U);
    msg.setSourceEntity(125U);
    msg.setDestination(20673U);
    msg.setDestinationEntity(99U);
    msg.target = 40041U;
    msg.bearing = 0.7237290568970184;
    msg.elevation = 0.22462048434958237;

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
    msg.setTimeStamp(0.8687867236580074);
    msg.setSource(56310U);
    msg.setSourceEntity(22U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(141U);
    msg.target = 36724U;
    msg.x = 0.9428890621392851;
    msg.y = 0.48304851613342326;
    msg.z = 0.32540006547711076;

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
    msg.setTimeStamp(0.06693613682730093);
    msg.setSource(44261U);
    msg.setSourceEntity(182U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(40U);
    msg.target = 51621U;
    msg.x = 0.6477233968839706;
    msg.y = 0.6732889718422876;
    msg.z = 0.881971972251813;

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
    msg.setTimeStamp(0.8042745857272637);
    msg.setSource(8946U);
    msg.setSourceEntity(242U);
    msg.setDestination(5706U);
    msg.setDestinationEntity(90U);
    msg.target = 63002U;
    msg.x = 0.9401399721319887;
    msg.y = 0.3801565037066015;
    msg.z = 0.8071615498814567;

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
    msg.setTimeStamp(0.1293305415863727);
    msg.setSource(22202U);
    msg.setSourceEntity(79U);
    msg.setDestination(47682U);
    msg.setDestinationEntity(80U);
    msg.target = 704U;
    msg.lat = 0.29532509075334124;
    msg.lon = 0.83736845615221;
    msg.z_units = 179U;
    msg.z = 0.3153020783351438;

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
    msg.setTimeStamp(0.33034939534432073);
    msg.setSource(55734U);
    msg.setSourceEntity(46U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(164U);
    msg.target = 232U;
    msg.lat = 0.5880313113513372;
    msg.lon = 0.6776174579159129;
    msg.z_units = 14U;
    msg.z = 0.10902296250983179;

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
    msg.setTimeStamp(0.09082461551332799);
    msg.setSource(50467U);
    msg.setSourceEntity(182U);
    msg.setDestination(16989U);
    msg.setDestinationEntity(16U);
    msg.target = 35941U;
    msg.lat = 0.9307238660412218;
    msg.lon = 0.7104267474922649;
    msg.z_units = 112U;
    msg.z = 0.8870215371739264;

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
    msg.setTimeStamp(0.3947717357162356);
    msg.setSource(35884U);
    msg.setSourceEntity(228U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(97U);
    msg.locale.assign("WABATBBODNIECHVZJXJHGUOBCUFYJHBERNIFWEJVGGGSVRAZIWQECTYVZOBXFKSNXCVELOFPMFDLKHGLKGXWAOXWKIEKPPLHAQKVNDDTNIYHJXWAKQNYWDCQHIRBFPPRLNZTUFOSJCVSZVYGZFYEYGMRMZBODSEWCMCBKJLVYSLKOCQRQWRUVTSIJMMFQPSUQDJLPMOT");
    const char tmp_msg_0[] = {12, 46, 97, 14, -92, -2, 54, -18, 2, 27, 84, -48, -86, -43, -113, 47, 77, 63, -104, -19, 4, -112, -51, -87, -102, -128, -7, -91, -71, 42, 4, 32, 94, 97, -92, -70, -86, 58, 75, 105, 103, 49, -13, 98, -104, 16, 98, 3, -101, -32, -46, -30, 93, 21, 104, 82, 46, -109, -45, 101, -114, -117, 26, 51, 124, -96, 67, 114, 22, 31, -23, 74, -125, 72, 118, -40, 73, -22, -2, 6, -126, -84, 39, -18, 104, 36, -124, -11, 84, 95, 14, 56, -84, 119, 111, -70, 91, -29, -92, 94, 38, 114, -94, 113, -1, -14, 67, 103, 38, 52, 88, 59, -116, -70, 61, -116, 93, -53, -116, -32, 14, -23, -77, 43, -54, 96, -58, -82, -16, -10, -116, 79, -36, 45, -24, -97, 11, -59, -93, -116, 74, 53, 19, 104, 26, 86, 122, -43, 40, -87, 40, 120, 125, 75, 64, 13, 101, 95, -106, 123, 33, 126, 117, 125, 54, 69, -50, 35, 69, -75, 16, -77, 4, 102, 87, 13, -23, -90, -85, -14, 72, -50, 92, 56, -111, -20, -125, 48, -93, 40, -47, -68, -28, -3, 91, -63, -84, 67, -25, -28, -62, -44};
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
    msg.setTimeStamp(0.07607413183864042);
    msg.setSource(56918U);
    msg.setSourceEntity(49U);
    msg.setDestination(54914U);
    msg.setDestinationEntity(238U);
    msg.locale.assign("VZPPYFJBSZJWSDPI");
    const char tmp_msg_0[] = {92, 95, -58, 32, -74, 75, 126, -26, -74, -38, -95, 95, -93, -84, -59, 112, -48, -123, 16, -36, -91, -67, 113, -63, -123, -13, -41, 30, 122, -102, -16, 22, -9, 86, -66, 84, 77, -24, 91, 73, 117, 45, -113, -87, -105, -88, 83, -73, 15, -21, 33, 108, -29, -55, -15, 106, -88, -2, 18, 106, 54, -109, -120, 13, -126, -128, -115, 53, -112, -35, -121, -99, 60, 74, 9, 19, 123, 62, -9, 95, -82, -74, 115, 13, 51, -48, -6, -72, -46, 110, 35, 99, 3, 79, 57, 119, 20, -79, -98, 111, -63, 65, 125, 4, -87, -40, 59, -1, -114, -17, -119, -18, -27, 111, 120, 41, 1, -97, -99, 38, -54, 1, 75, -26, 106, 46, 43, 48, 61, 10, 18, -22, 86, -82, 66, 104, -25, -6, -72, -3, -60, 77, -14, -120, 46, -88, -56, 27, -112, -121, 30, 109, 17, -119, -68, 18, 18, 55, 14, -43, 99};
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
    msg.setTimeStamp(0.6482190797899863);
    msg.setSource(63729U);
    msg.setSourceEntity(175U);
    msg.setDestination(53774U);
    msg.setDestinationEntity(171U);
    msg.locale.assign("DXIVJVBDCNOAQMYXRGTAGTKJEROAXEIULKHGFXYHBMJVGZSMDCDTXWHHTLKOJDJJPQZMTURWYBGGPWKCLWLPNSZSECFAGZDOUOBEXKRSVBNONNMZRSJJYFPFNAAULPQORPETOVQCTKWVYCDEGQKWBSVMCLLYQCQHFLXJIDAHRYKIIDQYNIMXFTEUVXPEDBSUGZWNIUBEBTYMZFOYSSZOQAIUAUFRVZVPWLHLNCAZHSKCWRKMNHRIGBFPQMJE");
    const char tmp_msg_0[] = {-87, -119, 41, -86, 30, 126, -41, 68, 83, -53, -82, 49, -39, 106, -30, 6, -75, -57, -116, -68, -63, -120, -35, 27, 50, -51, 27, -84, -6, -118, -93, 62, -27, -101, -107, -84, -120, 118, 69, 33, -36, 57, 98, 91, 26, -65, 11, 17, -18, -111, -127, 36, 31, -111, 0, 39, 58, -59, 0, -117, 110, -72, -128, -4, 41, -45, -65, 93, -115, -89, -88, -59, -24, 122, 9, -69, -50, -50, 118, -72, -102, 42, -79, -89, -55, 111, -109, 19, -99, -54, -9, 40, 98, 52, 14, 74, -38, -41, 108, 90, 92, -65, 76, -7, -124, 7, -63, 44, -96, -20, 0, -84, -33, 126, 50, 26, -57, -89, 8, 16, 100, 17, -40, 124, 1, 69, 113, -84, -29, -47, 118, -111, 8, 40, 16, 12, -6, 10, 90, 100, 117, 30, -106, 65, -115, 99, -99, 62, -51, -100, -102, 36, 111, -113, 86, -100, 36, -76, 108, -52, 54, 46, 50, 77, -64, -39, 100, 88, 73, 28, -125, -82, -118, -72, 36, 120, -13, 2, -116, -25, -8, -2, 17, -120, 99, -22, 81, -110, 85, 117, 63, 25, -44, 25, -44, -70, 102, 47, -50, -77, -72, -85, 36, -93, 83, 96, -63, 79, 60, 64, -127, -66, 27, 104, -104, 8, -123, -76, 94, 13, -127, 7, 78, 3, 125, -123, -121, -111, -99, -80, 117, -116, -34, -50, 126, 2, -128, -44, -112, 118, 12, -56, 101, 121, -19, -76, 69, 112, 86, -57, 63, 44, -110, 15};
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
    msg.setTimeStamp(0.6684727077378114);
    msg.setSource(7801U);
    msg.setSourceEntity(128U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.2767073280074577);
    msg.setSource(37386U);
    msg.setSourceEntity(141U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.41005485190989255);
    msg.setSource(45474U);
    msg.setSourceEntity(223U);
    msg.setDestination(11297U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.3863044039028001);
    msg.setSource(24070U);
    msg.setSourceEntity(84U);
    msg.setDestination(8146U);
    msg.setDestinationEntity(184U);
    msg.camid = 227U;
    msg.x = 17998U;
    msg.y = 52539U;

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
    msg.setTimeStamp(0.5704958673199304);
    msg.setSource(12095U);
    msg.setSourceEntity(12U);
    msg.setDestination(34117U);
    msg.setDestinationEntity(25U);
    msg.camid = 181U;
    msg.x = 513U;
    msg.y = 18304U;

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
    msg.setTimeStamp(0.37627439071255797);
    msg.setSource(43469U);
    msg.setSourceEntity(99U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(8U);
    msg.camid = 251U;
    msg.x = 52452U;
    msg.y = 34344U;

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
    msg.setTimeStamp(0.2987666118446214);
    msg.setSource(38195U);
    msg.setSourceEntity(35U);
    msg.setDestination(17704U);
    msg.setDestinationEntity(223U);
    msg.camid = 64U;
    msg.x = 34141U;
    msg.y = 46407U;

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
    msg.setTimeStamp(0.7350884807961724);
    msg.setSource(65160U);
    msg.setSourceEntity(20U);
    msg.setDestination(52885U);
    msg.setDestinationEntity(187U);
    msg.camid = 86U;
    msg.x = 40121U;
    msg.y = 63831U;

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
    msg.setTimeStamp(0.6220075603432216);
    msg.setSource(26056U);
    msg.setSourceEntity(66U);
    msg.setDestination(17556U);
    msg.setDestinationEntity(217U);
    msg.camid = 130U;
    msg.x = 43595U;
    msg.y = 52972U;

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
    msg.setTimeStamp(0.08474039965233149);
    msg.setSource(43612U);
    msg.setSourceEntity(167U);
    msg.setDestination(60572U);
    msg.setDestinationEntity(152U);
    msg.tracking = 1U;
    msg.lat = 0.36937907369284906;
    msg.lon = 0.12395550701421909;
    msg.x = 0.11753845219272696;
    msg.y = 0.8532156682300162;
    msg.z = 0.38006056312262115;

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
    msg.setTimeStamp(0.840087152353142);
    msg.setSource(59657U);
    msg.setSourceEntity(17U);
    msg.setDestination(8396U);
    msg.setDestinationEntity(249U);
    msg.tracking = 122U;
    msg.lat = 0.5705013871513732;
    msg.lon = 0.3536115517435229;
    msg.x = 0.4629485290258496;
    msg.y = 0.9571783182545496;
    msg.z = 0.806098244832934;

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
    msg.setTimeStamp(0.6669220118214356);
    msg.setSource(21935U);
    msg.setSourceEntity(121U);
    msg.setDestination(37406U);
    msg.setDestinationEntity(72U);
    msg.tracking = 226U;
    msg.lat = 0.600199883577402;
    msg.lon = 0.5700862199739307;
    msg.x = 0.9731419433780639;
    msg.y = 0.8728159796377597;
    msg.z = 0.39988982604544676;

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
    msg.setTimeStamp(0.8436390774124704);
    msg.setSource(357U);
    msg.setSourceEntity(160U);
    msg.setDestination(13107U);
    msg.setDestinationEntity(240U);
    msg.target.assign("GJNJLDFICNAHIQSFVCHYZXFTGTVXHZZDFCWWYGPDKEIZTUFLEJUYXBTUDJQZPASGCBLGTSOIWHKOVSRMCTMOVJECGPRPLIOJVGWDWBDVWJOLJFXNWFHTPOREYMRLJLZECQKOMOXDAQKCUJKPAMWAIEHXEKDQHRDBSLNKRQQVPIZPQMXSUAFHYYYTUVALULFXRWODNBQPIEBAWMPTSNABYHYFKCBTKRSHUVRMOCNBRGBUZUAZMNSIEGEQYZ");
    msg.lbearing = 0.5708981386628806;
    msg.lelevation = 0.1978600370487087;
    msg.bearing = 0.6763802960661206;
    msg.elevation = 0.5364782469918297;
    msg.phi = 0.9332604669794666;
    msg.theta = 0.9905893157908826;
    msg.psi = 0.7577556634734975;
    msg.accuracy = 0.24047044137467122;

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
    msg.setTimeStamp(0.07642648249839579);
    msg.setSource(42584U);
    msg.setSourceEntity(10U);
    msg.setDestination(53053U);
    msg.setDestinationEntity(28U);
    msg.target.assign("XCCABSWRJTVGTWHBSFVWTQAAHKWBDWDLOOQGCJBYSZPHKSQBOVENANRFUFBRDSQLEFGHMFJXVLYYYJZNECJLMCTNNMAXITZJCGNWIDYNAKNPKPBOTUERZMXKVTARGGXLSQKRJYPXQEVZIQSAZIDGIMYXFUOZKWBEQPPVHWAXGVSCLOKKMDUFYPXCMMWYNWHJOGRMLUQVHFRUTPJHDUTYKJZL");
    msg.lbearing = 0.41610094206908577;
    msg.lelevation = 0.13924887953284892;
    msg.bearing = 0.6580484628005199;
    msg.elevation = 0.9972458488561743;
    msg.phi = 0.642772872646347;
    msg.theta = 0.7715399737009261;
    msg.psi = 0.5607343213998586;
    msg.accuracy = 0.695641227214093;

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
    msg.setTimeStamp(0.5514674271431033);
    msg.setSource(21126U);
    msg.setSourceEntity(138U);
    msg.setDestination(3306U);
    msg.setDestinationEntity(109U);
    msg.target.assign("JZZLHEPFNIZZDNDVBHWWUCHXGPWPGMCNKGDRLUKNPOEYQVJATW");
    msg.lbearing = 0.018842725423188433;
    msg.lelevation = 0.8121289384547314;
    msg.bearing = 0.0405857962094176;
    msg.elevation = 0.17211639932617628;
    msg.phi = 0.9580550396174284;
    msg.theta = 0.45641926496720486;
    msg.psi = 0.6606715424706303;
    msg.accuracy = 0.3279727678064671;

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
    msg.setTimeStamp(0.7515689806726261);
    msg.setSource(14325U);
    msg.setSourceEntity(51U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(95U);
    msg.target.assign("ZPNSHIZEGDQJXKSKZBGGWTLGVUOJVOERFCMGPRTSDPQCFSFTAGNEDRWLYJKQKSUFJGRWBSJCCNNYAIFDVZIIVIOPOIEHAMGFAYAPVXVIUTWHMLXFRDFCXEZQAEQJPNAWLJIMHRZVYHTLYICZOXJYSLYTKTMBOPOSLLBUUSEGPVDHQEBFHNNJD");
    msg.x = 0.039917471479917976;
    msg.y = 0.3661060020155308;
    msg.z = 0.8281495673886883;
    msg.n = 0.3590255331787705;
    msg.e = 0.7861900150177246;
    msg.d = 0.141967132654075;
    msg.phi = 0.598954653429767;
    msg.theta = 0.6850390149320205;
    msg.psi = 0.23033284778014762;
    msg.accuracy = 0.8666815266568176;

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
    msg.setTimeStamp(0.7659277958228758);
    msg.setSource(1469U);
    msg.setSourceEntity(30U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(78U);
    msg.target.assign("SCOEAFRJLNTROMJOAJVFENWLBNKTKTQBXFBZEGIOJKHBQJTGYQCAUDPYSLZQHWCOGUHXQMLRWBVEPKUOVZCYMTSYJLITNQOOYPVHWCTLTOZCJICMSEQFARPUJVUIFKSUKSBJZXQSJIEMNRANDMDQLCLSWXSPEAWVHDOKRFTHLNZBEXURGMZADHECDNNGTHUAULSRYPPDHVMXRADXVIQVIPZBIWFH");
    msg.x = 0.8986466845165292;
    msg.y = 0.8440386618174832;
    msg.z = 0.20475975407129876;
    msg.n = 0.42796643748930907;
    msg.e = 0.2838535973633315;
    msg.d = 0.2923431845538267;
    msg.phi = 0.4840547338440295;
    msg.theta = 0.9213176797760428;
    msg.psi = 0.9937753959159416;
    msg.accuracy = 0.5818313972974506;

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
    msg.setTimeStamp(0.7413660951059866);
    msg.setSource(41549U);
    msg.setSourceEntity(77U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(174U);
    msg.target.assign("QKWAWDDWEDNSNKLCPEIJSFNKADLGMJKWPXKVJNKAMMRHVKX");
    msg.x = 0.6077567836846455;
    msg.y = 0.835937830477884;
    msg.z = 0.1827798162414067;
    msg.n = 0.17338285072429516;
    msg.e = 0.08154784498479684;
    msg.d = 0.5306696476055279;
    msg.phi = 0.6867518259681196;
    msg.theta = 0.2613853467670496;
    msg.psi = 0.023100849830850367;
    msg.accuracy = 0.7328728285066807;

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
    msg.setTimeStamp(0.2503591991644455);
    msg.setSource(18908U);
    msg.setSourceEntity(138U);
    msg.setDestination(30097U);
    msg.setDestinationEntity(36U);
    msg.target.assign("VGVIRMRHTLSOIQQUMVUHPDHUTAZLHJTDXAWUNDHLZBFEOJGXPTWZRPWGELJFSXZXCQIMWVINOXNPKHCCRTRUQQUOONEYSFQUGRCPLGLALLQPBSRFKUACMZANISOLXXGNASKKNZFIDDCZAPXNIAYTYGBFNSJJPBJYZBZTDQMXEFEIGZYOHUEKBAWKFNRKVTVXTELECRDYPOCDFQWMVSMDPHCOWAYHJVYYDIOKMUMBQBIJKBEFGWYK");
    msg.lat = 0.587646909178016;
    msg.lon = 0.8919497742016818;
    msg.z_units = 185U;
    msg.z = 0.5238796389079936;
    msg.accuracy = 0.055059094810088194;

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
    msg.setTimeStamp(0.06198773196015628);
    msg.setSource(49047U);
    msg.setSourceEntity(45U);
    msg.setDestination(44080U);
    msg.setDestinationEntity(223U);
    msg.target.assign("BLNQSJLRHXMLUSQBBMYNQMKXWIRLCEZRJNCGMHMWOGVNEFQSRTMPFRBPJJLKCFOQHIIJYLKHDVWBEDNPYNKBDZOKVULGZREAHDPZCNILAWDBXAITNXHSQJCEYGALWNVSCVSXTAPJAPXUUYDUOZZUOFZIEYXTUCRHOVQIEDDEYFTJVYOYMUQHUFJFSDNZVKVOIUQBMGMTKOZFCRGXXPWXESIGAPVBPRBDCRWSTTFMLJTCSKWGGOIFAWGH");
    msg.lat = 0.47465836074486534;
    msg.lon = 0.24557101023510974;
    msg.z_units = 98U;
    msg.z = 0.22566322369618053;
    msg.accuracy = 0.43763207305513274;

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
    msg.setTimeStamp(0.31842161261818747);
    msg.setSource(8672U);
    msg.setSourceEntity(22U);
    msg.setDestination(55089U);
    msg.setDestinationEntity(119U);
    msg.target.assign("RHMKDXIGWBUWJYASUFSUPKKEURMRQHJAZLKAPQXUTYCICTZEINYAFJEBETXAEDVPDUIQVVCIOZGGGNAZZZAXNYKQWSIXLXYSBLGAHRJWGEXZLDAWOERTHVOVBWKUITJCODXOMWMFHPGCTNERBJTZNFATDSQMXBJJURZPCRYYTMSEVMIM");
    msg.lat = 0.6256099242131686;
    msg.lon = 0.6234460847860862;
    msg.z_units = 140U;
    msg.z = 0.24507447740797927;
    msg.accuracy = 0.39480316856417064;

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
    msg.setTimeStamp(0.1002452445221258);
    msg.setSource(60209U);
    msg.setSourceEntity(138U);
    msg.setDestination(65486U);
    msg.setDestinationEntity(115U);
    msg.name.assign("NJOJLQJAKXWEOMICUEWNQQTUGODDLHCVLMNVIJFVKBKMCAMUKNETAEERJRSIVNFYWTAVJGLHGOZGRIXWFYYPYQLTPKDBIQNDQXWPZSJVIGCVMTVWZDFTZQSIUWXTCTXWHXQDHKNOFECGSMBHFHEAZNOLCLBQASJASNC");
    msg.lat = 0.5215927517460687;
    msg.lon = 0.011296932900725754;
    msg.z = 0.3688860520634385;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.043593907995262415);
    msg.setSource(35963U);
    msg.setSourceEntity(39U);
    msg.setDestination(11738U);
    msg.setDestinationEntity(185U);
    msg.name.assign("GNSNDVCSHQVFZBXOJDGMYQDLWFKFCHOSHCIRVORWKZLRPOPEGUXMDKTFXJJQIQEXVVMRQUUMXBBKZLLCZHIVRJFZRAOWTIIYPUWZUGEVPBWDHACIFKCGBRXDYHJOUOLNETYSYNTTWZUZJONRPJAQMIGSMAWAMWTMEULCRTE");
    msg.lat = 0.6352235419407811;
    msg.lon = 0.05637372786136097;
    msg.z = 0.5539360787225472;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.5418478477261022);
    msg.setSource(59491U);
    msg.setSourceEntity(196U);
    msg.setDestination(42800U);
    msg.setDestinationEntity(224U);
    msg.name.assign("RXCMOWNBRENLAKMNWYXTYNXXXTYOOJPYZMIMJTHZFHJROZYIZPRLDSYIEVWFUQBUTVFLULTDZBKDPPOBZSWQJNISHCMDNPGOEQCENKHUZVLLTGASOAEAEGICKMXPRNSDXNAEYOMKBBPLMUBHPFBJLOCAJCIVUKGXTDSISWMVJ");
    msg.lat = 0.1636582411244203;
    msg.lon = 0.6272164685159224;
    msg.z = 0.55042115994071;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.14621549138837964);
    msg.setSource(22564U);
    msg.setSourceEntity(225U);
    msg.setDestination(64551U);
    msg.setDestinationEntity(180U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.1634839166262123);
    msg.setSource(52659U);
    msg.setSourceEntity(57U);
    msg.setDestination(49346U);
    msg.setDestinationEntity(40U);
    msg.op = 29U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OXUYCBQADYGWAPBAGLECHHUZZEOUZUFPIUDWLFTJLKMXLSPCMNBERJAACXRXELDUBFEPJNRPRFHSVXQNCJWHMIJTIYCQDLKOVMRDZVEDDEWQXJBHTWJ");
    tmp_msg_0.lat = 0.49727727685719547;
    tmp_msg_0.lon = 0.15786441636819049;
    tmp_msg_0.z = 0.2714487509704584;
    tmp_msg_0.z_units = 153U;
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
    msg.setTimeStamp(0.7935501486430211);
    msg.setSource(21830U);
    msg.setSourceEntity(244U);
    msg.setDestination(47063U);
    msg.setDestinationEntity(205U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.7016700869198058);
    msg.setSource(8422U);
    msg.setSourceEntity(60U);
    msg.setDestination(12003U);
    msg.setDestinationEntity(194U);
    msg.value = 0.22857101446430417;
    msg.type = 0U;

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
    msg.setTimeStamp(0.48263105319457134);
    msg.setSource(35295U);
    msg.setSourceEntity(70U);
    msg.setDestination(51271U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2633877519025214;
    msg.type = 229U;

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
    msg.setTimeStamp(0.7954539714203758);
    msg.setSource(9032U);
    msg.setSourceEntity(206U);
    msg.setDestination(52194U);
    msg.setDestinationEntity(212U);
    msg.value = 0.8673547961089915;
    msg.type = 59U;

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
    msg.setTimeStamp(0.2156138801569697);
    msg.setSource(3243U);
    msg.setSourceEntity(85U);
    msg.setDestination(47467U);
    msg.setDestinationEntity(178U);
    msg.value = 0.2077811230891896;

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
    msg.setTimeStamp(0.4150725725896073);
    msg.setSource(29875U);
    msg.setSourceEntity(124U);
    msg.setDestination(50039U);
    msg.setDestinationEntity(132U);
    msg.value = 0.001070264869937998;

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
    msg.setTimeStamp(0.7325537626751939);
    msg.setSource(30104U);
    msg.setSourceEntity(254U);
    msg.setDestination(29958U);
    msg.setDestinationEntity(101U);
    msg.value = 0.5339784731798871;

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
    msg.setTimeStamp(0.9645555242754623);
    msg.setSource(56387U);
    msg.setSourceEntity(187U);
    msg.setDestination(58243U);
    msg.setDestinationEntity(93U);
    msg.timestamp_last_service = 0.22141034904068202;
    msg.time_next_service = 0.8512189890345274;
    msg.time_motor_next_service = 0.4766782462772693;
    msg.time_idle_ground = 0.31947126068095455;
    msg.time_idle_air = 0.489222757787488;
    msg.time_idle_water = 0.8122557069557537;
    msg.time_idle_underwater = 0.712187867562972;
    msg.time_idle_unknown = 0.3575379081644592;
    msg.time_motor_ground = 0.12339618922739792;
    msg.time_motor_air = 0.6253263684304647;
    msg.time_motor_water = 0.41030273297235453;
    msg.time_motor_underwater = 0.4982694083010709;
    msg.time_motor_unknown = 0.9130342610282497;
    msg.rpm_min = -21699;
    msg.rpm_max = -1924;
    msg.depth_max = 0.19583952946011662;

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
    msg.setTimeStamp(0.10089851653960591);
    msg.setSource(28989U);
    msg.setSourceEntity(222U);
    msg.setDestination(35915U);
    msg.setDestinationEntity(45U);
    msg.timestamp_last_service = 0.03673099615574893;
    msg.time_next_service = 0.5076397310003674;
    msg.time_motor_next_service = 0.024537632282894406;
    msg.time_idle_ground = 0.7343125118857109;
    msg.time_idle_air = 0.8027861164872018;
    msg.time_idle_water = 0.5155039241888447;
    msg.time_idle_underwater = 0.8541425044346905;
    msg.time_idle_unknown = 0.39029454290612986;
    msg.time_motor_ground = 0.7801887922720958;
    msg.time_motor_air = 0.739275635537979;
    msg.time_motor_water = 0.805172363316429;
    msg.time_motor_underwater = 0.8635156692845687;
    msg.time_motor_unknown = 0.13197647418155112;
    msg.rpm_min = -27995;
    msg.rpm_max = 32350;
    msg.depth_max = 0.6299906330815345;

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
    msg.setTimeStamp(0.47261217968228664);
    msg.setSource(22786U);
    msg.setSourceEntity(104U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(84U);
    msg.timestamp_last_service = 0.16417959559615092;
    msg.time_next_service = 0.7348498485069673;
    msg.time_motor_next_service = 0.13105537470891226;
    msg.time_idle_ground = 0.9309919908464684;
    msg.time_idle_air = 0.13809836956894073;
    msg.time_idle_water = 0.5124944780964277;
    msg.time_idle_underwater = 0.5385270886691065;
    msg.time_idle_unknown = 0.38995786771249463;
    msg.time_motor_ground = 0.29831803351126895;
    msg.time_motor_air = 0.5007275480041441;
    msg.time_motor_water = 0.5736180112105771;
    msg.time_motor_underwater = 0.9970635449863459;
    msg.time_motor_unknown = 0.35155870253473986;
    msg.rpm_min = -23638;
    msg.rpm_max = -16372;
    msg.depth_max = 0.9548364777652716;

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
    msg.setTimeStamp(0.2820531593787857);
    msg.setSource(4143U);
    msg.setSourceEntity(127U);
    msg.setDestination(51995U);
    msg.setDestinationEntity(149U);
    msg.severity = 81U;
    msg.text.assign("OBVIGPUHKDEGRQWWYRQIIHQNSCLBFLLEBCDTYQFROATTQXKIOPYAOWKEMITHDDTPZNFLDXIVBBQODAYOJDGAMOUMMCFZZTYSDVNFVTHJNVTGOWPEVGZMHSHDXSCPKELUWIPEXWLRDUKXAVCJZLJPXPMKYKAACKEXVCASJNJTZNURLGXYRQAYSUIKANTZSGGNBSOREIWRLFRUMGZHNUIBBWPFJLMFJHSXZRMBQXQHVCNZM");

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
    msg.setTimeStamp(0.021839544867090943);
    msg.setSource(64108U);
    msg.setSourceEntity(223U);
    msg.setDestination(38984U);
    msg.setDestinationEntity(111U);
    msg.severity = 49U;
    msg.text.assign("LBKMIWNCPURVHRJIYCWODXKFOOSHWANCPI");

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
    msg.setTimeStamp(0.2295661437687989);
    msg.setSource(63156U);
    msg.setSourceEntity(232U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(102U);
    msg.severity = 118U;
    msg.text.assign("FLEMZMAHBXMYSGEXTFYWKLENXMRPYQIRHNMPKGQUOYZTMRYHDQAUDCPSOMSLOZSWKUQOVVCGISUDZHNWZFEEXRBQWFYQUASQIKJABXQWVWDMNOJTJVBIRHLKVNKPRAEBBXFXAZFNRDUBIDOQPATGBCMVIRUGMTTHSGPTIJDUZ");

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
    msg.setTimeStamp(0.9578385555524365);
    msg.setSource(7201U);
    msg.setSourceEntity(65U);
    msg.setDestination(449U);
    msg.setDestinationEntity(7U);
    msg.channel = 43;
    msg.value = 1046453202;
    msg.gain = 240U;

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
    msg.setTimeStamp(0.5670033100028491);
    msg.setSource(38717U);
    msg.setSourceEntity(129U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(32U);
    msg.channel = 26;
    msg.value = -27779180;
    msg.gain = 161U;

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
    msg.setTimeStamp(0.1470409056057823);
    msg.setSource(64087U);
    msg.setSourceEntity(153U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(15U);
    msg.channel = -118;
    msg.value = 1047212665;
    msg.gain = 118U;

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
    msg.setTimeStamp(0.5896801292389563);
    msg.setSource(34258U);
    msg.setSourceEntity(206U);
    msg.setDestination(50079U);
    msg.setDestinationEntity(130U);
    msg.ch01 = 0.2856996820097697;
    msg.ch02 = 0.5146536822677669;
    msg.ch03 = 0.5116296819543376;
    msg.ch04 = 0.9589898924883188;
    msg.ch05 = 0.7806033048971582;
    msg.ch06 = 0.9883311144488086;
    msg.ch07 = 0.08251249960143414;
    msg.ch08 = 0.40988568016296845;
    msg.ch09 = 0.23407301140278736;
    msg.ch10 = 0.3937714512442779;
    msg.ch11 = 0.6160420302338219;
    msg.ch12 = 0.38659026098072624;
    msg.ch13 = 0.22241826983378155;
    msg.ch14 = 0.9264009158267509;
    msg.ch15 = 0.37520295142362003;
    msg.ch16 = 0.8795527817250751;

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
    msg.setTimeStamp(0.3905703665543533);
    msg.setSource(2190U);
    msg.setSourceEntity(217U);
    msg.setDestination(18166U);
    msg.setDestinationEntity(220U);
    msg.ch01 = 0.33930013947283166;
    msg.ch02 = 0.9512813677218064;
    msg.ch03 = 0.09640640093917363;
    msg.ch04 = 0.31622698799086657;
    msg.ch05 = 0.840708415792203;
    msg.ch06 = 0.9499676137062395;
    msg.ch07 = 0.8463589442709968;
    msg.ch08 = 0.011610691511859672;
    msg.ch09 = 0.7455982733777474;
    msg.ch10 = 0.7304202534524372;
    msg.ch11 = 0.19604511585762396;
    msg.ch12 = 0.7504942468965836;
    msg.ch13 = 0.7578895159424371;
    msg.ch14 = 0.12275197764106538;
    msg.ch15 = 0.548346451171555;
    msg.ch16 = 0.40059365365081334;

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
    msg.setTimeStamp(0.9202634454347051);
    msg.setSource(40160U);
    msg.setSourceEntity(1U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(66U);
    msg.ch01 = 0.41031707893428104;
    msg.ch02 = 0.1909440568105979;
    msg.ch03 = 0.9235797800863565;
    msg.ch04 = 0.651336814320428;
    msg.ch05 = 0.12242060098073426;
    msg.ch06 = 0.01136029922446602;
    msg.ch07 = 0.6175963610488185;
    msg.ch08 = 0.15392178240623655;
    msg.ch09 = 0.22398514267255798;
    msg.ch10 = 0.13618310604288208;
    msg.ch11 = 0.13872022028041808;
    msg.ch12 = 0.04714929351161645;
    msg.ch13 = 0.3259556168762918;
    msg.ch14 = 0.6805537342786209;
    msg.ch15 = 0.4956635173639866;
    msg.ch16 = 0.01687833100966063;

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
    msg.setTimeStamp(0.3922199530872549);
    msg.setSource(48517U);
    msg.setSourceEntity(138U);
    msg.setDestination(64051U);
    msg.setDestinationEntity(187U);
    msg.op = 64U;
    msg.lat = 0.3350338228789276;
    msg.lon = 0.300139231969206;
    msg.height = 0.7620896664533944;
    msg.depth = 0.2300725479949165;
    msg.alt = 0.8485289522014932;

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
    msg.setTimeStamp(0.8128008265291735);
    msg.setSource(44233U);
    msg.setSourceEntity(193U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(112U);
    msg.op = 47U;
    msg.lat = 0.2906578052271498;
    msg.lon = 0.9298194747774228;
    msg.height = 0.03966710023431819;
    msg.depth = 0.2318538806106183;
    msg.alt = 0.7483763614245995;

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
    msg.setTimeStamp(0.9256479397252886);
    msg.setSource(44975U);
    msg.setSourceEntity(49U);
    msg.setDestination(13553U);
    msg.setDestinationEntity(247U);
    msg.op = 203U;
    msg.lat = 0.5457965626139812;
    msg.lon = 0.2539535465784296;
    msg.height = 0.7125226705287809;
    msg.depth = 0.7717361035444628;
    msg.alt = 0.7763863069074695;

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
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.08624877174184942);
    msg.setSource(23962U);
    msg.setSourceEntity(201U);
    msg.setDestination(42399U);
    msg.setDestinationEntity(85U);
    msg.req_id = 16843U;
    msg.type = 72U;
    msg.init = 2907192307U;
    msg.end = 914328048U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.06191176650369212);
    msg.setSource(5087U);
    msg.setSourceEntity(148U);
    msg.setDestination(14620U);
    msg.setDestinationEntity(177U);
    msg.req_id = 49423U;
    msg.type = 244U;
    msg.init = 1661876037U;
    msg.end = 2382159907U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.06547902093960356);
    msg.setSource(1107U);
    msg.setSourceEntity(70U);
    msg.setDestination(45210U);
    msg.setDestinationEntity(4U);
    msg.req_id = 51216U;
    msg.type = 0U;
    msg.init = 2131523831U;
    msg.end = 392901425U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.7878809073025071);
    msg.setSource(19246U);
    msg.setSourceEntity(213U);
    msg.setDestination(64586U);
    msg.setDestinationEntity(102U);
    msg.req_id = 34866U;
    msg.type = 216U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("BURXITCUFXTWODZAEIKKHDCVELROGGGKFASGVQATANOSCYECBMYDAYDMSGYSNWPNCXSYYMF");
    tmp_msg_0.frag_number = 20703U;
    tmp_msg_0.num_frags = 45737U;
    const char tmp_tmp_msg_0_0[] = {53, 27, 11, 98, 18, -95, -1, -65, -49, -22, -108, -53, -33, 105, 110, 50, -100, -106, -90, 61, 43, -99, 36, 12, 67, 29, 66, -34, -19, -100, 114, 67, 7, -44, -71, 24, 48, 87, 41, -7, 109, -33, -52, 8, 38, -125, 88, -3, 42, 100, -54, -41, -28, 90, -47, 126, -5, -93, 53, 9, -61, 25, 96, -74, 49, -20, 121, 37, 21, -76, 29, 19, -106, 98, -66, 99, -128, 6, -128, -12, 77, 26, 40, 31, 106, -82, 94, -55, -29, -21, 27, 35, -74, -13, 78, 11, 48, -64, 59, 84, -73, 75, -56, -98, -66, -123, 41, -32, 93, 121, -6, 31, 35, 64, 10, -18, -75, 110, 51, -73, 114, -113, 94, 44, -118, -109, -126, 25, 34, 11, 5, 118, 64, -36, 34, -67, 12, 33, -26, -45, 117, 47, -128, -67, -2, -110, 31, -61, -39, -7, 119, -11, -29, -43, -44, 36, -7, 102, -2, -102, -19, 73, 101, -123, 12, 112, 28, 93, 108, 51, -114, -71, -70, 80, 0, 15, 57, -63, -102, -44, 35, 12, -5, 111, 83, 77, -31, 87, -59, -26, 74, -25};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.7162122614870644);
    msg.setSource(37418U);
    msg.setSourceEntity(145U);
    msg.setDestination(47767U);
    msg.setDestinationEntity(3U);
    msg.req_id = 42752U;
    msg.type = 120U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("YODRUFYOEMXMHTKKPYTGXBGADQWSUNVCVZPJUZLCIOVNFFEHAPRLLIHHHPUGJJDCPKUMFE");
    tmp_msg_0.frag_number = 18561U;
    tmp_msg_0.num_frags = 49170U;
    const char tmp_tmp_msg_0_0[] = {113, -56, 6, 102, -38, -105, 100, 31, -114, -25, -34, 2, -80, -9, -8, 36, -3, -69, -97, 12, -113, -74, -60, -99, -96, -40, -77, -114};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.1502876863409781);
    msg.setSource(25225U);
    msg.setSourceEntity(152U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(248U);
    msg.req_id = 46728U;
    msg.type = 171U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("UMWLNTRQQDGRHUZPHLNQDKAFNTIZUIABJURVRJIWGTEACJILSSGHOPUZSPYZNKRTUCBLGIUQYYXYRVKMHJSDBRGANBKMABHDPVAQOOBCOKTSLIZZXQOKJXLWHRKWROKJFYOVPCBNAWGDAPYFJVNDIXIXYRZWZFHEFUQVOMYMTMSSNELFQVHE");
    tmp_msg_0.frag_number = 33915U;
    tmp_msg_0.num_frags = 3447U;
    const char tmp_tmp_msg_0_0[] = {-77, -105, 8, -79, -30, -108, -54, 17, -123, -35, 97, 118, 119, -118, 34, 103, 28, -43, -14, -116, 45, -104, -32, -116, 84, -36, 116, 18, 30, -81, 3, -19, -12, -85, 90, 24, -120, -60, 42, -126, 43, 68, 36, -61, 54, 41, -108, -107, 46, 73, 64, -72, -82, -16, 11, 21, 111, -47, 74, 55, 18, 62, 99, -97, 101, -111, 22, -46, 97, 36, -3, -91, 58, 123, -61, 102, -13, 61, -93, 11, -126, -120, 63, -21, 36, 114, 104, -43, -95, -22, 81, 63, 41, 67, 81, 111, 68, -102, 17, -93, 31, -38, -57, 98, 34, -16, 11, 111, -25, -18, -12, -101, 77, 77, -41, 33, -77, -75, -1, -50, 88, -109, -59, 106, 94, 51, 23, 32, 111, 3, -2, 67, 10, 1, 56, -27, 42, -53, -113, 36, 104, 118, 95, -102, -85, 115, -113, -20, -122, -93, 89, 92, -19, -31, -61, -19, 114, -52, 29, -46, 95, 70, -46, -49, -36, -103, -15, 49, 126, 97, -116, -118, -8, 82, 49, 115, 106, 109, -21, 77, 95, -93, -30, 18, 66, 12, 3, 105, -89, 33, 121, -78, -91, 11, 104, 126, -9, -105, 93, 43, -39, -124, -58};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.6875002604981013);
    msg.setSource(43006U);
    msg.setSourceEntity(234U);
    msg.setDestination(34997U);
    msg.setDestinationEntity(73U);
    msg.id.assign("PGXURBKQZTLXTXPKOAMPSBYJVNOAHIFOFWRMXXRUDHZKSFDTEYPTTSOFVMNICVSJYKLERJDOUZVDICFYBMNJSLGWQQZLCTPIBFJXWENXQUB");
    msg.frag_number = 35124U;
    msg.num_frags = 18363U;
    const char tmp_msg_0[] = {-64, 6, -30, -42, -123, -100, 43, 42, 64, -108, -117, -113, -3, 31, -122, 103, 26, 11, -63, 35, -54, -93, -6, 17, -101, 25, 65, 22, -104, -95, -123, 87, 90, -58, 36, -1, 106, 19, -11, -52, -25, -122, -21, 8, 94, 7, -80, -98, -54, 94, 114, 23, 4, -113, 15, -10, 92, -47, -23, 39, 121, 23, 83, 122, 53, -14, -88, -107, -68, 40, -99, -54, 125, -48, 40, -110, 0, 15, -93, 86, 98, 85, -30, 23, 44, 80, -96, -88, -117, -38, -50, -81, 21, 48, 32, -15, -98, 97, 83, -54, 112, 74, 38, 112, 37, -94, -9, 13, 19, 110, 90, -127, -101, 21, 52, 75, 41, -114, 32, 125, -40, -116, 88, -10, 13, -28, 122, -47, 115, 9, -36, 46, 59, -101, 100, -32, 26, -40, -52, -25, 2, 38, 18, 58, -25, -84, -123, 98, 114, -125, -110, 82, 54, -62, 118, 45, -114, -43, -100, -35, 125, 39, -87, -82, 124, -8, -28, -102, -33, -73, -32, 51, 58, 44, 51, -110, -42, -4, -83, -18, -36, -62, -74, 102, 6, -7, -117, 72, 49, 47, -96, -12, -121, -98, -82, 69, -68, -16, -36, -73, 27, 17, 69, -20, 123, 38, -105, 112, -114, 78, -1, -49, 112, -70, 95, -39, 1, -61, -104, -121, 61, -25, 77, -61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.7992527228062192);
    msg.setSource(51256U);
    msg.setSourceEntity(37U);
    msg.setDestination(56007U);
    msg.setDestinationEntity(155U);
    msg.id.assign("UNYCVNKCZCIBJZLFOCHZQTIDQQVRDYAPHRGPJHJQHUKEXMHJJXXFJZLZZZJ");
    msg.frag_number = 40239U;
    msg.num_frags = 2635U;
    const char tmp_msg_0[] = {-86, 71, 38, -29, -31, -125, 14, -112, 13, -15, 77, 81, -12, -11, -62, -51, -64, -98, 1, 59, 116, -1, 76, -101, 45, -45, 72, 121, -110, 119, -72, -105, -12, 71, 48, -80, -25, 34, -50, -90, -96, 64, -41, 118, 116, -112, -98, -42, 43, -117, 121, 55, 105, -87, 119, -89, 1, -52, 74, -22, -44, -101, -87, -41, -61, 67, -69, -42, 80, -14, -76, -1, -123, -43, -62, -41, -21, 122, -29, 47, -55, 123, 59, -76, 69, 7, 106, -43, -31, 55, -45, -35, 70, -34, -53, -51, 121, 65, 100, 33, -93, 21, 16, 77, -113, 74, 124, -20, 31, -73, 57, 77, 17, -77, 80, 118, -41, -52, -13, 124, -47, -24, 54, 42, -5, -60, -45, 106, 15, -74, 81, -72, 19, -65, 37, 51, -112, -20, 6, -81, 77, 111, 29, 65, -32, 64, -41, -59, -102, -73, -123, 44, 114, 29, -83, -31, 67, -27, -91, 85, -23, -3, 82, -51, 4, -69, -40, -50, -27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.7381032319332553);
    msg.setSource(50708U);
    msg.setSourceEntity(197U);
    msg.setDestination(38143U);
    msg.setDestinationEntity(40U);
    msg.id.assign("ZHAUHURWCTKKCEGZAEDFYPUDHUSQICDXOFQOGLDCDYXLSATIZJPDMLVEWYSFBQOKKGRJDLKYNIHPFDVXCSTJNPVQRTSKQRSHOLWXINVKJEQMPHVZQZBZYWSOLJGXXJNPRIEGUDKJEGUAPMBCSOHEFGEBRXZCRICBMQUVNNGMLYYVTNFWHWMZQMNVFOAZKXAILAPQAYVJTASMHIO");
    msg.frag_number = 2671U;
    msg.num_frags = 45865U;
    const char tmp_msg_0[] = {35, -118, 116, -122, 44, -4, -27, 96, 121, 107, -69, 81, 123, 93, -98, 25, 76, -43, 88, -55, -125, -121, -74, -107, -2, -107, 99, -73, -36, -80, -110, -111, -86, 122, -47, 7, -101, 80, -22, -61, -116, 57, -72, 13, -33, -75, -56, -80, 103, 68, -124, 100, 87, -116, 38, -56, -10, 68, 115, 14, -105, -2, 28, 61, -116, 33, 61, 33, 30, -78, -105, 100, -58, -22, -40, -72, -117, 20, -16, -12, 1, 13, -33, -123, -74, -64, 51, 89, -69, -126, 123, -34, 5, 30, 37, 83, -114, 44, -80, -69, -105, -13, -23, 37, 55, 121, -14, -4, -45, 116, -116, -15, -58, 84, 102, 27, 23, 5, -14, -37, 98, 104, -91, 33, 107, -42, -8, -2, -128, 108, 31, -118, 112, -25, -55, -77, -121, -73, -62, 40, -97, 39, -76, -70, 40, 43, -77, -58, 121, 31, -33, -21, -116, -68, 45, -68, -114, 76, -99, 120, 91, -58, 80, 75, 71, 79, 107, -60, 94, -5, 80, -83, 66, -19, 122, -74, 16, 0, -8, 97, 25, 5, 6, -30, -61, -120, -86, -53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9674406435831697);
    msg.setSource(42007U);
    msg.setSourceEntity(55U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(104U);
    msg.nbeams = 144U;
    msg.ncells = 47U;
    msg.coord_sys = 122U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.12470070091152408;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.2151900012151171;
    tmp_tmp_msg_0_0.amp = 0.7050615629747716;
    tmp_tmp_msg_0_0.cor = 54U;
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
    msg.setTimeStamp(0.8442731417659045);
    msg.setSource(38990U);
    msg.setSourceEntity(243U);
    msg.setDestination(8517U);
    msg.setDestinationEntity(144U);
    msg.nbeams = 214U;
    msg.ncells = 200U;
    msg.coord_sys = 142U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9137536332487904;
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
    msg.setTimeStamp(0.9765179024685551);
    msg.setSource(3833U);
    msg.setSourceEntity(220U);
    msg.setDestination(7454U);
    msg.setDestinationEntity(61U);
    msg.nbeams = 151U;
    msg.ncells = 11U;
    msg.coord_sys = 158U;

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
    msg.setTimeStamp(0.27905739579072764);
    msg.setSource(43513U);
    msg.setSourceEntity(162U);
    msg.setDestination(24535U);
    msg.setDestinationEntity(72U);
    msg.cell_position = 0.926681320507887;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6444189689694564;
    tmp_msg_0.amp = 0.9353729922290291;
    tmp_msg_0.cor = 207U;
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
    msg.setTimeStamp(0.7164869472605324);
    msg.setSource(54796U);
    msg.setSourceEntity(20U);
    msg.setDestination(10949U);
    msg.setDestinationEntity(242U);
    msg.cell_position = 0.8712409895453129;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.622096308471114;
    tmp_msg_0.amp = 0.30921370876837795;
    tmp_msg_0.cor = 100U;
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
    msg.setTimeStamp(0.4773683212533173);
    msg.setSource(11535U);
    msg.setSourceEntity(91U);
    msg.setDestination(1331U);
    msg.setDestinationEntity(75U);
    msg.cell_position = 0.0004995377414149793;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5141116895155324;
    tmp_msg_0.amp = 0.5352032680879749;
    tmp_msg_0.cor = 77U;
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
    msg.setTimeStamp(0.4859295408904728);
    msg.setSource(13995U);
    msg.setSourceEntity(177U);
    msg.setDestination(12761U);
    msg.setDestinationEntity(56U);
    msg.vel = 0.48519071539451264;
    msg.amp = 0.2641027312418851;
    msg.cor = 16U;

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
    msg.setTimeStamp(0.8615372306764638);
    msg.setSource(51154U);
    msg.setSourceEntity(43U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(103U);
    msg.vel = 0.6893643733757238;
    msg.amp = 0.3486266544892279;
    msg.cor = 77U;

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
    msg.setTimeStamp(0.027081457914558626);
    msg.setSource(16179U);
    msg.setSourceEntity(80U);
    msg.setDestination(10723U);
    msg.setDestinationEntity(159U);
    msg.vel = 0.7647873120920761;
    msg.amp = 0.1258149124017044;
    msg.cor = 28U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.428578340437166);
    msg.setSource(35595U);
    msg.setSourceEntity(154U);
    msg.setDestination(21982U);
    msg.setDestinationEntity(46U);
    msg.name.assign("TGDIFKVVPOIOJLZLXMEOBCYGWUBWPVMROYDFWJZLMSKGLGUNZXBXXMLJKGSJYSLOZSRJEYUBSBIINXPRMTXAVNAUZMPBUOEBPGKILSQXAIPOTHDQDWMAHMHBRRFCM");
    msg.value = 24U;

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
    msg.setTimeStamp(0.03726509623879415);
    msg.setSource(20678U);
    msg.setSourceEntity(59U);
    msg.setDestination(4924U);
    msg.setDestinationEntity(78U);
    msg.name.assign("JYSPVAODCYDGFBPFLFAVDAWYTQZBHOTBZWSNJBMFZNCUGCHJLCOPGRPNYYCLGKBACMVIEPRGJTIBGPNJBHEUYXUMQAYMMOZNIVQKXEWNFSYPFBKKZQHKOOQPHUUDCPOEXVXJKR");
    msg.value = 141U;

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
    msg.setTimeStamp(0.08945897064581865);
    msg.setSource(62626U);
    msg.setSourceEntity(247U);
    msg.setDestination(61295U);
    msg.setDestinationEntity(125U);
    msg.name.assign("LFKNKDNUMEKWSTEXKYYRLJTJFUMYMCVATEICRSFPNENGASBGKWSIDHOSTVOHDDVPYDDEORWNZCNITLPKDGJHAWNYJURZSZXORMZFOATRBIMQBUMJVVGTBTBXAKYXDUGZBQOSCJRXFPMPWQQRQEZCTCQHSBBCKYMOFKQAFAIZHVRFIPJXHPJDCGHNXYNALZJXGEQKOGYWW");
    msg.value = 68U;

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
    msg.setTimeStamp(0.5598684374422557);
    msg.setSource(51664U);
    msg.setSourceEntity(238U);
    msg.setDestination(18056U);
    msg.setDestinationEntity(229U);
    msg.name.assign("OTLHKIUDWBFYKAWUTECPSQJMPSDZYKQSHTJS");

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
    msg.setTimeStamp(0.6623750600875025);
    msg.setSource(33157U);
    msg.setSourceEntity(168U);
    msg.setDestination(16606U);
    msg.setDestinationEntity(206U);
    msg.name.assign("MMRXRJKFAPWQGMLBJQYNGECOXSDZUFQIHCZIIAMSRODKXLPHDRBWAJKROIFACDSYONQMTCCJVSLYHENOZDHNQTVPGHCRUJEMXSKUAXBVIBQPPHRBYFWDYEOWZIWTGTNYHOIXADSIYXNAUZXJZVKKJFNEGNCBFMTORWBJSUBPMRPHPWGLTQLSSWAEVTHQKMWNBQWZEOVYBIZPCVDGGJTCKP");

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
    msg.setTimeStamp(0.9896162228341372);
    msg.setSource(30757U);
    msg.setSourceEntity(0U);
    msg.setDestination(34366U);
    msg.setDestinationEntity(227U);
    msg.name.assign("JJVSKCZZXBOFNIMOSEBNFQMAXZKXFSNEAWUTKWWTFBSLTRLCODDQMFFMMTHZHPKNGOCJZUXDQVC");

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
    msg.setTimeStamp(0.39163963359832654);
    msg.setSource(63804U);
    msg.setSourceEntity(16U);
    msg.setDestination(9439U);
    msg.setDestinationEntity(108U);
    msg.name.assign("QCNWLHKJAHRHUGKTGVPEZCCWRQPTEMUIIFMTSOY");
    msg.value = 29U;

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
    msg.setTimeStamp(0.779226161186186);
    msg.setSource(62779U);
    msg.setSourceEntity(66U);
    msg.setDestination(22071U);
    msg.setDestinationEntity(211U);
    msg.name.assign("QFPATPKXLGFFINGPUEBBSHXPOMBDOMPFFXRQBYSGTRVRFTAGCQGJXUCQJDWSWWCZBLNARDTYNMYKSQITDYDFOZSVYWOEUYLOJZVCRWUKJYSIIOEHTNNWOJOYNXOGZLDAXEBLWKCRBTZBPIZRIJDLLPASEGJHIDTUZEWSVAVVDEHPMZCQFGEHE");
    msg.value = 18U;

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
    msg.setTimeStamp(0.6128675810829095);
    msg.setSource(55236U);
    msg.setSourceEntity(157U);
    msg.setDestination(61557U);
    msg.setDestinationEntity(140U);
    msg.name.assign("NKHYUGDNWVASJPXAZPPPVHUSUXGMVWZYNKRYJVWWXSQOTFTQIUGEALFOTNAEZRYROQQIFGLIRHMDALEDWLCBQEMLJGVNFTKBPNLFVRGZDMBBFZEWBXNIMCNFPNKPZTRJMIOMGXCUXQADFBKKBFCZWCDJZJEQGPEVYUARIOWVYCFVELKYJXTGHABKZCJYTSLOWTOXZLJHUIHQKASSMYHUDKNYURXLSWDOHCERDHEPXSTBVIUICIOJOQMBSD");
    msg.value = 218U;

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
    msg.setTimeStamp(0.18078796947897535);
    msg.setSource(805U);
    msg.setSourceEntity(126U);
    msg.setDestination(57093U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8690797490874277;

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
    msg.setTimeStamp(0.2574446294886451);
    msg.setSource(27177U);
    msg.setSourceEntity(80U);
    msg.setDestination(61667U);
    msg.setDestinationEntity(200U);
    msg.value = 0.3015805691755421;

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
    msg.setTimeStamp(0.411154207289812);
    msg.setSource(17861U);
    msg.setSourceEntity(47U);
    msg.setDestination(55941U);
    msg.setDestinationEntity(28U);
    msg.value = 0.2201094345007335;

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
    msg.setTimeStamp(0.16425257521375114);
    msg.setSource(30721U);
    msg.setSourceEntity(8U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(84U);
    msg.value = 0.028008835514071184;

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
    msg.setTimeStamp(0.4351042511117369);
    msg.setSource(17646U);
    msg.setSourceEntity(23U);
    msg.setDestination(9853U);
    msg.setDestinationEntity(234U);
    msg.value = 0.43987206410107305;

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
    msg.setTimeStamp(0.19053429244334907);
    msg.setSource(7203U);
    msg.setSourceEntity(168U);
    msg.setDestination(62976U);
    msg.setDestinationEntity(22U);
    msg.value = 0.11752103552512716;

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
    msg.setTimeStamp(0.9510715042720038);
    msg.setSource(3731U);
    msg.setSourceEntity(219U);
    msg.setDestination(18614U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6839265537215294;

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
    msg.setTimeStamp(0.34954735711715723);
    msg.setSource(5086U);
    msg.setSourceEntity(230U);
    msg.setDestination(53257U);
    msg.setDestinationEntity(78U);
    msg.value = 0.14897896578321912;

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
    msg.setTimeStamp(0.4012780957710922);
    msg.setSource(64708U);
    msg.setSourceEntity(131U);
    msg.setDestination(56500U);
    msg.setDestinationEntity(84U);
    msg.value = 0.36065110226774566;

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

  return test.getReturnValue();
}
