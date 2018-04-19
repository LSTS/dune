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
// IMC XML MD5: 6ed42ce10f9e69cbd84b1fe2272a8a38                            *
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
    msg.setTimeStamp(0.975708860956);
    msg.setSource(27789U);
    msg.setSourceEntity(168U);
    msg.setDestination(58937U);
    msg.setDestinationEntity(112U);
    msg.state = 202U;
    msg.flags = 34U;
    msg.description.assign("ROHYZSOIATKKNDDDOFVPKOIOCLSLFTUWKYKUNXZHVZBERQJWTJYNYSGUHCMJZVSLZBEROIPUYAHWYUJUDFT");

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
    msg.setTimeStamp(0.602430332717);
    msg.setSource(18476U);
    msg.setSourceEntity(167U);
    msg.setDestination(53466U);
    msg.setDestinationEntity(194U);
    msg.state = 252U;
    msg.flags = 25U;
    msg.description.assign("KQVGZYIVJAKMBFFOPWOEWKANHQIEJYITTLEMKFDTZOIYBSYSRUDAGDMHYUDRPOPAXSEKGZCKOREIVNYUVPEXQRXBMDHWXSLZJDAJFRMIIBSRCLSPJCJNFTHBUCCUVSWTDOBVJAZULBMOQOMN");

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
    msg.setTimeStamp(0.570888160298);
    msg.setSource(59321U);
    msg.setSourceEntity(36U);
    msg.setDestination(2740U);
    msg.setDestinationEntity(25U);
    msg.state = 97U;
    msg.flags = 253U;
    msg.description.assign("GNUHYYQBXRVTZRLDHULQTKMUMIEPLOCQBUANJAFVXGKEVBTVYPPFKEXQNKTBLLSWEIWKBRCASHKIAOVMJMYZVRUVARWZCPAWFYOPPEFWMWFCRZPTNKTHIBQKGEOHAIYHWOCSDXERXMGCUCDDHBDTNZLQAXUEXLFSLWANNSPJCGPCWDVIRVI");

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
    msg.setTimeStamp(0.188274955194);
    msg.setSource(65185U);
    msg.setSourceEntity(218U);
    msg.setDestination(40375U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.763485188824);
    msg.setSource(17692U);
    msg.setSourceEntity(104U);
    msg.setDestination(29736U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.53160701896);
    msg.setSource(59270U);
    msg.setSourceEntity(97U);
    msg.setDestination(38451U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.0422454347984);
    msg.setSource(4238U);
    msg.setSourceEntity(13U);
    msg.setDestination(31550U);
    msg.setDestinationEntity(246U);
    msg.id = 246U;
    msg.label.assign("XMRBCNLIAWAKQPGPWRUIFEVSROQRBLSVAFQSCMGCTRQCPLGAKTNHUCYBAEJUKDOVFWDKIEEHJESZHEXTYKDBLJUSYFCALZGPJBNOEKNRXWKTCNIOTGKS");
    msg.component.assign("NOFLJFOWEXBUEEJGMDJGEZNHRZCPFVZOBKKXTTREHIAJQXDTPDNUBYHMAZIJIRKZBPHKGESRIUQMFCQKXVJONVUGAKHMS");
    msg.act_time = 40950U;
    msg.deact_time = 49352U;

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
    msg.setTimeStamp(0.491575651318);
    msg.setSource(52455U);
    msg.setSourceEntity(63U);
    msg.setDestination(47299U);
    msg.setDestinationEntity(65U);
    msg.id = 204U;
    msg.label.assign("ATSMHOUPOMIOYKDMINZCXHFZXRTFVJWZXRRELJZVNHSMWXMPPGTPEKGELYPLNFQHSXJCFXPGGLPKVUUTUAYKBONBODIBULFSCQXCARNIXHSVIMURHUDHDLUWJOCDQOGWGFQVCDAQACZDKXAYLMADLEFKDPYHEWEROSBZQAAKCBWOIKRYMFGGRSHZTJBZSAJWTBVQGNTE");
    msg.component.assign("YRYYVWWHSYAEQROBQTUIZNUMEKPNWZTTGGZPABFWJCZXWBSDVMAWXBJMWVPKDNHDQBLIORZDKFABJLJANNFUVMT");
    msg.act_time = 14852U;
    msg.deact_time = 15915U;

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
    msg.setTimeStamp(0.905848750134);
    msg.setSource(9028U);
    msg.setSourceEntity(57U);
    msg.setDestination(55946U);
    msg.setDestinationEntity(65U);
    msg.id = 223U;
    msg.label.assign("RVPRUSRGGWUJEZKEDIHBQTLVXKPGMYFMDJXFNMMUCEOOIHUJQOYAANTINQBSGVEUHLXFRPWPUMMSTVPNGZPARIVKOCLIYSZKVJHTFXWBLEWQVZ");
    msg.component.assign("WIHGJKNHISMJFGULXSQCKBFNAGYTZCDXAEAZTJLVFORIVMHDZVJYSLXZMRAJYNYTOSZHXNIQGRTSBGMREWQELWLMZAUOWUWMHQKHQPCEYWLOSSRMVLTOORYWKNIXZMBZDFUQGTMJOFPFCECIBIPRBIGMNZOV");
    msg.act_time = 62171U;
    msg.deact_time = 36325U;

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
    msg.setTimeStamp(0.919965388797);
    msg.setSource(3666U);
    msg.setSourceEntity(176U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(204U);
    msg.id = 247U;

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
    msg.setTimeStamp(0.071310683677);
    msg.setSource(45871U);
    msg.setSourceEntity(246U);
    msg.setDestination(61850U);
    msg.setDestinationEntity(195U);
    msg.id = 136U;

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
    msg.setTimeStamp(0.788190724699);
    msg.setSource(50530U);
    msg.setSourceEntity(89U);
    msg.setDestination(53859U);
    msg.setDestinationEntity(213U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.0388783633109);
    msg.setSource(18575U);
    msg.setSourceEntity(183U);
    msg.setDestination(21400U);
    msg.setDestinationEntity(57U);
    msg.op = 160U;
    msg.list.assign("EPZUKRJJEGRMUNLMHIRIQYBJGKOSMSYDTHARVXTXFLIOPYREDNTOWMOKSTOWGZJQVTZUZEHQDUHWCOWZFNIZVREYJJRNMGZDEECXDSVKNHAJGNRRALJLGUCQGSXUFOPVUXCCIFQVPNGQVFHIGTBBWQBKHILAVNIGFPLBQWMTSYTMCHYPUFKXUCKHAFTYDPHCFBLBXXDBWKKWVBN");

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
    msg.setTimeStamp(0.644832781461);
    msg.setSource(28575U);
    msg.setSourceEntity(77U);
    msg.setDestination(23909U);
    msg.setDestinationEntity(54U);
    msg.op = 43U;
    msg.list.assign("QXQFMOSIMAGEDEZBCRDKSXXHJBKYRICUTGXPWIE");

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
    msg.setTimeStamp(0.190491186567);
    msg.setSource(57089U);
    msg.setSourceEntity(33U);
    msg.setDestination(234U);
    msg.setDestinationEntity(159U);
    msg.op = 246U;
    msg.list.assign("HDSBTGGVCOEOPIEQZFURIDGSRQJYSVNBJVVIKSMUBNFCEPJDYOGSCRNTTYFMBWYLHEHCUYSXAMTXZ");

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
    msg.setTimeStamp(0.755401603639);
    msg.setSource(10219U);
    msg.setSourceEntity(76U);
    msg.setDestination(40859U);
    msg.setDestinationEntity(160U);
    msg.value = 98U;

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
    msg.setTimeStamp(0.659493259079);
    msg.setSource(792U);
    msg.setSourceEntity(252U);
    msg.setDestination(43673U);
    msg.setDestinationEntity(82U);
    msg.value = 131U;

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
    msg.setTimeStamp(0.280779603531);
    msg.setSource(13608U);
    msg.setSourceEntity(56U);
    msg.setDestination(42193U);
    msg.setDestinationEntity(53U);
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
    msg.setTimeStamp(0.971331278556);
    msg.setSource(47689U);
    msg.setSourceEntity(12U);
    msg.setDestination(59504U);
    msg.setDestinationEntity(98U);
    msg.consumer.assign("JCAETPSUAURQUUGVWMZHOLDNHYNZHIOQJEKNWZZESQSGYSLOCLFCGPBAPVOBPSLCQYREV");
    msg.message_id = 11465U;

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
    msg.setTimeStamp(0.171364451382);
    msg.setSource(32204U);
    msg.setSourceEntity(198U);
    msg.setDestination(57195U);
    msg.setDestinationEntity(23U);
    msg.consumer.assign("BXKOHSIXZUGPVPYPFJVDQEUVPHDHLFWGBIR");
    msg.message_id = 63784U;

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
    msg.setTimeStamp(0.738081609835);
    msg.setSource(43671U);
    msg.setSourceEntity(139U);
    msg.setDestination(27036U);
    msg.setDestinationEntity(215U);
    msg.consumer.assign("CHJXOYCPEQDYRADDFLAULYMDMQBWHFKAOXUHNKPQYKWEUAIAXFXHSBPGDGQPWQRFDLURPOCCLWRKVKWWXRWZQHROVBZNETDTJINTTYIJWKYJFKXLNGSAXZIBESTKEONAZGBFVVCOSYJGUIPIUMKPCIZLTZNVVNRMKUCBJAOVQMDGNVVSHTCGZZYYPERBOLROTJHHFEGMJPEAHPXBJUCMVFYMUWHSZIQGTLFECUISOZNGBLAQJXBSDXD");
    msg.message_id = 56410U;

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
    msg.setTimeStamp(0.675669237362);
    msg.setSource(16060U);
    msg.setSourceEntity(204U);
    msg.setDestination(48007U);
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
    msg.setTimeStamp(0.803156109881);
    msg.setSource(28674U);
    msg.setSourceEntity(31U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.20274249321);
    msg.setSource(52982U);
    msg.setSourceEntity(222U);
    msg.setDestination(12184U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.718179841479);
    msg.setSource(31242U);
    msg.setSourceEntity(81U);
    msg.setDestination(53417U);
    msg.setDestinationEntity(55U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.105237560604);
    msg.setSource(28119U);
    msg.setSourceEntity(73U);
    msg.setDestination(17232U);
    msg.setDestinationEntity(212U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.141861723716);
    msg.setSource(58665U);
    msg.setSourceEntity(240U);
    msg.setDestination(11230U);
    msg.setDestinationEntity(65U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.680473762592);
    msg.setSource(32268U);
    msg.setSourceEntity(180U);
    msg.setDestination(44268U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 182U;
    msg.step_number = 159U;
    msg.step.assign("YRPQVJJSPYGUAVLHOSIFXKXRCZESFASKLMYNIWJOZDFOJSVIDYMFXUTZTOZRLFDYZZLOFEMHLKRZREGWQLVHEYXZPBBGECJHWEBBQMMLHZMMVOAQCNMHQIFIQNGHEVTSUFJWNMSRNWANKNNDITOYFPWUGTXNVUYFXLJAPTSKGOC");
    msg.flags = 5U;

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
    msg.setTimeStamp(0.16400241342);
    msg.setSource(5247U);
    msg.setSourceEntity(12U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(16U);
    msg.total_steps = 117U;
    msg.step_number = 246U;
    msg.step.assign("RMBUKXKUKZJBIHNCXQPSLYATOFMIOUDJFYGUHWRDBGVQJTYQZHVNMVLNOAMIBGEMLKEZOEYRBIWVEQRHZWWWGKQOMHTCHUXEHAQQGZVYPALCYXSUDAPSEYRGJLJMLKVXTCKTAUZVBHXHFSRKUMOTWBISFDPIDAACGRKMNZCBQTILTAFM");
    msg.flags = 49U;

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
    msg.setTimeStamp(0.00705818860133);
    msg.setSource(31373U);
    msg.setSourceEntity(170U);
    msg.setDestination(15104U);
    msg.setDestinationEntity(232U);
    msg.total_steps = 253U;
    msg.step_number = 130U;
    msg.step.assign("GTWQSNONLMBZIMMHYZTMMYXVQBZFSWSWSGLUSJCJRSFJEOHPGPFPRBXUYVCMAYHENOUVYYKAIOEASGNIJHERBTDGPIJNXUUCNGNTRWIGLAHPDUUREKNWDPVEEBKWEQCATUMFCCDXTJRMJALDQOOXWLOIDBHBCBUHLNKVOVYXZTCTAIIEBQFXLMVJIDFHCKFHATVIXQKQSPQNPXYOZZKJWDXSYVK");
    msg.flags = 135U;

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
    msg.setTimeStamp(0.456741832517);
    msg.setSource(21465U);
    msg.setSourceEntity(92U);
    msg.setDestination(19716U);
    msg.setDestinationEntity(4U);
    msg.state = 227U;
    msg.error.assign("TSOIPFJDAXQLVDKEDNLENKIUBYMMDGETFXXSAZGQGTYRAXFREGUCQWHZJVBOXSLQMRGZTZNSCNROVAHNFFYNTLMPAFIDDLRIIMRRTNCRJKAMTPTCNXTHWUVFVEIJSVBMXLQPAOLEJVLULHJIZNZHPZYQBDGKEFWQQDUGXHAMBBWHYNHAGIGOOWUOBPCDQCEKIMOSZVXBDJKHZBKPKWOWCAYVUESJUYXZWPJY");

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
    msg.setTimeStamp(0.511307344936);
    msg.setSource(29310U);
    msg.setSourceEntity(107U);
    msg.setDestination(17983U);
    msg.setDestinationEntity(25U);
    msg.state = 170U;
    msg.error.assign("YIDLGNWWASOGWEDWERFTNTFSDUOSXFKGRZMIDWCQLPDOIMZHKBLBHEZDGBEFRPXEKRIQMDXQBZCTCKVFHJJRJQJBRFSULZRMSXYWTQYTBNMKQTTIYGUEXIBNCPYOFAMUNUZXSISJBNVQQRMMOVSLPNCXEVIBUHVLASVMWROYGOYNVDPAXACPXHUTKVERFLGCUGCGFKYOHAWYZTUJHLBGDLUJCIDZ");

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
    msg.setTimeStamp(0.0882308659071);
    msg.setSource(17984U);
    msg.setSourceEntity(248U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(196U);
    msg.state = 53U;
    msg.error.assign("ETIJZUANGYEKYLGHOJVEMMMCKKWRLQJRFXULBUOLLECHOPIZIWXILYNCGUXLFBREMVMZWMFMXFSCVCAELDZGGFTDAIETBTHY");

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
    msg.setTimeStamp(0.953172739764);
    msg.setSource(21962U);
    msg.setSourceEntity(162U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.692668177537);
    msg.setSource(61262U);
    msg.setSourceEntity(1U);
    msg.setDestination(39763U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.44829686139);
    msg.setSource(7321U);
    msg.setSourceEntity(104U);
    msg.setDestination(29989U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.731866264123);
    msg.setSource(743U);
    msg.setSourceEntity(104U);
    msg.setDestination(14669U);
    msg.setDestinationEntity(72U);
    msg.op = 91U;
    msg.speed_min = 0.547997228308;
    msg.speed_max = 0.747893373425;
    msg.long_accel = 0.292520878515;
    msg.alt_max_msl = 0.819107099001;
    msg.dive_fraction_max = 0.699753367177;
    msg.climb_fraction_max = 0.659229835371;
    msg.bank_max = 0.436341434905;
    msg.p_max = 0.206531184923;
    msg.pitch_min = 0.645281565144;
    msg.pitch_max = 0.190202098794;
    msg.q_max = 0.0205216445658;
    msg.g_min = 0.0655167486837;
    msg.g_max = 0.458662150612;
    msg.g_lat_max = 0.530600368211;
    msg.rpm_min = 0.241241752587;
    msg.rpm_max = 0.514412103014;
    msg.rpm_rate_max = 0.942363118082;

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
    msg.setTimeStamp(0.407387820272);
    msg.setSource(60490U);
    msg.setSourceEntity(34U);
    msg.setDestination(7921U);
    msg.setDestinationEntity(240U);
    msg.op = 119U;
    msg.speed_min = 0.657665084817;
    msg.speed_max = 0.345424302189;
    msg.long_accel = 0.092616201157;
    msg.alt_max_msl = 0.648316030063;
    msg.dive_fraction_max = 0.74395560268;
    msg.climb_fraction_max = 0.534376419197;
    msg.bank_max = 0.0180094960976;
    msg.p_max = 0.941938505202;
    msg.pitch_min = 0.517909202436;
    msg.pitch_max = 0.156736144299;
    msg.q_max = 0.659575161593;
    msg.g_min = 0.529560798635;
    msg.g_max = 0.0418129665105;
    msg.g_lat_max = 0.551564363757;
    msg.rpm_min = 0.143831521525;
    msg.rpm_max = 0.747920490872;
    msg.rpm_rate_max = 0.165238468333;

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
    msg.setTimeStamp(0.295389442096);
    msg.setSource(1234U);
    msg.setSourceEntity(49U);
    msg.setDestination(9805U);
    msg.setDestinationEntity(231U);
    msg.op = 106U;
    msg.speed_min = 0.993411118591;
    msg.speed_max = 0.193766120727;
    msg.long_accel = 0.77181901865;
    msg.alt_max_msl = 0.74747451244;
    msg.dive_fraction_max = 0.574238462705;
    msg.climb_fraction_max = 0.695425695534;
    msg.bank_max = 0.163591141735;
    msg.p_max = 0.477248282358;
    msg.pitch_min = 0.7319017982;
    msg.pitch_max = 0.188081752378;
    msg.q_max = 0.359710786094;
    msg.g_min = 0.683965713558;
    msg.g_max = 0.848019641253;
    msg.g_lat_max = 0.850511453034;
    msg.rpm_min = 0.691215922451;
    msg.rpm_max = 0.293448733246;
    msg.rpm_rate_max = 0.271242421449;

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
    msg.setTimeStamp(0.750436226332);
    msg.setSource(11358U);
    msg.setSourceEntity(24U);
    msg.setDestination(38604U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.160905596227);
    msg.setSource(30986U);
    msg.setSourceEntity(61U);
    msg.setDestination(5824U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.822962254209);
    msg.setSource(38300U);
    msg.setSourceEntity(1U);
    msg.setDestination(24971U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.640816906392);
    msg.setSource(35688U);
    msg.setSourceEntity(198U);
    msg.setDestination(36923U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.467188343444;
    msg.lon = 0.137183763775;
    msg.height = 0.400622725057;
    msg.x = 0.201668008772;
    msg.y = 0.851002081189;
    msg.z = 0.251706276182;
    msg.phi = 0.5450918502;
    msg.theta = 0.21143576433;
    msg.psi = 0.53219945613;
    msg.u = 0.10930064032;
    msg.v = 0.771065152833;
    msg.w = 0.424756892624;
    msg.p = 0.795525651175;
    msg.q = 0.562236330052;
    msg.r = 0.698895897579;
    msg.svx = 0.178846132115;
    msg.svy = 0.39717448578;
    msg.svz = 0.818128906777;

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
    msg.setTimeStamp(0.726307752738);
    msg.setSource(45379U);
    msg.setSourceEntity(225U);
    msg.setDestination(9842U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.818143901239;
    msg.lon = 0.992931920159;
    msg.height = 0.677645040817;
    msg.x = 0.382245649855;
    msg.y = 0.158232952838;
    msg.z = 0.436459341674;
    msg.phi = 0.500133700516;
    msg.theta = 0.489319681182;
    msg.psi = 0.268086387229;
    msg.u = 0.862668257569;
    msg.v = 0.771900315535;
    msg.w = 0.809287985613;
    msg.p = 0.449093066955;
    msg.q = 0.843170566177;
    msg.r = 0.399501686723;
    msg.svx = 0.945675417074;
    msg.svy = 0.443460018383;
    msg.svz = 0.300799282244;

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
    msg.setTimeStamp(0.195594768161);
    msg.setSource(40195U);
    msg.setSourceEntity(28U);
    msg.setDestination(38926U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.904238999766;
    msg.lon = 0.700445885174;
    msg.height = 0.602803320071;
    msg.x = 0.774750590505;
    msg.y = 0.299676494491;
    msg.z = 0.142703632738;
    msg.phi = 0.495621640854;
    msg.theta = 0.503485418306;
    msg.psi = 0.0137382058601;
    msg.u = 0.399806244167;
    msg.v = 0.311363069262;
    msg.w = 0.279394913381;
    msg.p = 0.113095219863;
    msg.q = 0.366023537573;
    msg.r = 0.149824487922;
    msg.svx = 0.870793814517;
    msg.svy = 0.213904382787;
    msg.svz = 0.479131370518;

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
    msg.setTimeStamp(0.332702070378);
    msg.setSource(25420U);
    msg.setSourceEntity(220U);
    msg.setDestination(12533U);
    msg.setDestinationEntity(214U);
    msg.op = 68U;
    msg.entities.assign("UYZIXONRKMMPSBSCDDYZVPJBKBXOHOWBAAGYZC");

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
    msg.setTimeStamp(0.452944180425);
    msg.setSource(229U);
    msg.setSourceEntity(65U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(244U);
    msg.op = 9U;
    msg.entities.assign("BYDAKDGVIIZEKDCDVEPNWZSFFVUPMFHSRYXHWYWOODQYRLATNPCXOBXUKPNQTMGZGNWMCEPPVMKHAKTXRBQHJTTRERCQELVLYDNAORZWGAUGJFVAGLNINDSLNFFIBJSZKZME");

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
    msg.setTimeStamp(0.608431280295);
    msg.setSource(44524U);
    msg.setSourceEntity(64U);
    msg.setDestination(6098U);
    msg.setDestinationEntity(16U);
    msg.op = 251U;
    msg.entities.assign("HQEMOWSGRGHDYIQPIMYKERIZDRYUMDQDABBHCYTBJQRQKKZETJZJXBTVPZYFPNKYRGMFHHRXLFFFRIZXT");

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
    msg.setTimeStamp(0.538385023681);
    msg.setSource(62859U);
    msg.setSourceEntity(52U);
    msg.setDestination(58563U);
    msg.setDestinationEntity(40U);
    msg.type = 161U;
    msg.speed = 28770U;
    const char tmp_msg_0[] = {77, -31, 67, 9, 30, 25, 108, -125, -39, -97, 80, -78, 8, -19, -56, -57, -110, 106, 119, 46, 1, -45, 104, 100, 92, 80, -29, -72, 121, -36, 94, 105, -88, 14, 65, 34, -51, 125, 8, 17, 15, 2, 112, 103, 115, 123, 12, 63, -72, -3, -77, 50, 73, 126, 81, 46, -109, 56, -98, 56, 35, 2, 79};
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
    msg.setTimeStamp(0.00885554799314);
    msg.setSource(5265U);
    msg.setSourceEntity(115U);
    msg.setDestination(9633U);
    msg.setDestinationEntity(88U);
    msg.type = 46U;
    msg.speed = 60677U;
    const char tmp_msg_0[] = {-24, -92, -17, -76, -98, -28, 0, 83, -62, -3, 55, 28, -84, 56, 80, 109, 117, 105, -108, -10, 38, -3, -66, -77, -78, 57, -79, 117, -14, -72, 77, 23, 44, 49, -12, -114, -97, -115};
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
    msg.setTimeStamp(0.685146685875);
    msg.setSource(27995U);
    msg.setSourceEntity(116U);
    msg.setDestination(54913U);
    msg.setDestinationEntity(240U);
    msg.type = 182U;
    msg.speed = 25972U;
    const char tmp_msg_0[] = {-37, -94, 104, 94, -85, 98, -12, -34, 42, -114, 48, -28, -115, 58, 31, 17, -34, 22, -13, -105, 38, 38, -44, 28, 98, 41, -102, 67, 47, 119, -80, 78, -31, 40, 65, -87, 93, 30, 48, 109, 24, 59, 28, -91, 121, 19, -13, -57, -30, -75, 93, 54, 29, 42, -64, 96, 123, 78, 57, 68, 16};
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
    msg.setTimeStamp(0.0588690068068);
    msg.setSource(63798U);
    msg.setSourceEntity(98U);
    msg.setDestination(9427U);
    msg.setDestinationEntity(26U);
    msg.op = 138U;
    msg.tas2acc_pgain = 0.0508940646511;
    msg.bank2p_pgain = 0.770427235496;

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
    msg.setTimeStamp(0.408316649099);
    msg.setSource(11565U);
    msg.setSourceEntity(193U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(114U);
    msg.op = 229U;
    msg.tas2acc_pgain = 0.77661309912;
    msg.bank2p_pgain = 0.785907030642;

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
    msg.setTimeStamp(0.300166005341);
    msg.setSource(20859U);
    msg.setSourceEntity(81U);
    msg.setDestination(50439U);
    msg.setDestinationEntity(91U);
    msg.op = 100U;
    msg.tas2acc_pgain = 0.281803248208;
    msg.bank2p_pgain = 0.218402665784;

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
    msg.setTimeStamp(0.806806216858);
    msg.setSource(31388U);
    msg.setSourceEntity(26U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(152U);
    msg.available = 3910632631U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.49765217628);
    msg.setSource(8158U);
    msg.setSourceEntity(100U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(237U);
    msg.available = 1051277316U;
    msg.value = 196U;

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
    msg.setTimeStamp(0.474636404579);
    msg.setSource(4150U);
    msg.setSourceEntity(89U);
    msg.setDestination(60191U);
    msg.setDestinationEntity(1U);
    msg.available = 762972158U;
    msg.value = 177U;

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
    msg.setTimeStamp(0.614062034102);
    msg.setSource(10163U);
    msg.setSourceEntity(151U);
    msg.setDestination(32586U);
    msg.setDestinationEntity(130U);
    msg.op = 73U;
    msg.snapshot.assign("HDYHDBRBSOFJSWEONVZVREPRORSICQMODLFOFJCJNKFTOIYXETADLUTWPHCWICXUIDJGIGHMSMGRGESBGCXUYIVQVEQNXZBKBGFZXQPGPZPXNNAMYAZSNACAHVTJILFFBTOOUFQVOJENJFHJQL");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.0698678986552);
    msg.setSource(56062U);
    msg.setSourceEntity(106U);
    msg.setDestination(42385U);
    msg.setDestinationEntity(7U);
    msg.op = 195U;
    msg.snapshot.assign("SXBSAIFZNYRWZWVQRUKULBIRZLLKIGKVMPTUYGPOWQOVAPCVAGKEJUKFGSVEXNOUOYNRHHXNCBINHHGETZCJMJVFUEFCAQYUCAOHAJJFSKWHJSSLISFSESDWGHXZMBECTEXRGFCTXLRNTW");
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.0323745918105;
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
    msg.setTimeStamp(0.27300658501);
    msg.setSource(38116U);
    msg.setSourceEntity(212U);
    msg.setDestination(24481U);
    msg.setDestinationEntity(8U);
    msg.op = 88U;
    msg.snapshot.assign("AWFSPOBSSMXRVJZIHUTGAUKQKTTIERZWQBMTYZYOHWIPZDGDYEWIRIYDKUUICEAUSERNLRLB");
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("TRPVWSSUAFRCWJGAPTMMHEMLTTDWNXYRQVEMQYXDGYWGORZLBZYALGTRFOPVLENWANUVBNKPVEJFTNMBOEQRZQKLMCYUUDPIGSHXICYMGEPZOHBFCJXMIVTUJIUOCIQINEPSOJOIOHYEYRPRMLEKPXKLDQAJQDACMNZHBIXJHBSBWFQJGXIFLHDGDKOUBSOSZSNZNVDZJWGSGKFQFDBQRXEKKKUWCWVZVUAAICC");
    tmp_msg_0.data.assign("UXUCYHGEQYOFDYRPGYFZHYFJMHNDJCNXTPVRAEMBAKATDDRFMNLNQBDVVOJBKCKQLCPVFUHXWYMQVXKSLOLWKTZGRAFLSMZFBJOXKWHXUTOQPZVGWUBRRLGHJAXCESLIEBDZWIQXMAKVAIFLPIWQKVGTCYCJEUZNGIQKUWRBTHBYSGZFU");
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
    msg.setTimeStamp(0.770370416619);
    msg.setSource(32291U);
    msg.setSourceEntity(201U);
    msg.setDestination(14083U);
    msg.setDestinationEntity(146U);
    msg.op = 20U;
    msg.name.assign("RMKSMQBWYVNVLLGRLZLAERKTOFYSREVTMKVLJPXDYTOBRQILZFJZDITEVDZQIUYNYGHJYRAHGTBFXTES");

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
    msg.setTimeStamp(0.40423625928);
    msg.setSource(2060U);
    msg.setSourceEntity(172U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(114U);
    msg.op = 27U;
    msg.name.assign("CKRDSXSZFGMMVZYQJGIKJMFTKGIDWEAOKYYLXVSBVUWERAMBJBOAZYBONYOHMZEAXDDXGRDLNNQLLAAVFCWIRTPHTROZVFFDZXCLYCGDCHCQEJAKUNHEIZNQHFNOZFQHYPROCDMASVKQURNTVZHIGGBVIWEJGFXCORCDBMPBQPQZHJOIPDXEUIATJRJMUUNUXPSTYWSHCXFETGGVQLPXBOIILUHTSEWKJFNWBPSMTLKJU");

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
    msg.setTimeStamp(0.687671829882);
    msg.setSource(16331U);
    msg.setSourceEntity(81U);
    msg.setDestination(12550U);
    msg.setDestinationEntity(239U);
    msg.op = 1U;
    msg.name.assign("ARLIPVCMHGQDCZNWWPSMIDEUQXILSAAOTZFYLXLNUFDNKBKEQGQHWJPPBJILSBVJNKOPFWAXYTWEENQMTZMJXBEORRLHXHIBCSHZGMRSNULLHCYLODBQSJVFFB");

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
    msg.setTimeStamp(0.342659939219);
    msg.setSource(36466U);
    msg.setSourceEntity(181U);
    msg.setDestination(37790U);
    msg.setDestinationEntity(171U);
    msg.type = 180U;
    msg.htime = 0.694650552999;
    msg.context.assign("YTFOGQJMJKEWOEKMWCFGLWPNNEAHVMEDG");
    msg.text.assign("NGJZQMJQAPHWQIDKSDVDVFZTCQPXXKIRQHINNXFMEHEBSWYZDKINYAEPXOMYJVLHDOXVWANLLOAGTIJLRUPOOVCASOWHGSEWNYFGTWQMDRZSLCGBOVLBCHRVJSYKBBZQRAUTLGMVSEMFBKCPCSKEAOIXUDUFDFFDREXXZRAGLHWCNTDJWRNBZPIRVEXBSJKYYYHQPGJNQHUAIATGEKZTJSOLIMKBNPCFPCECYHMJUOTBWRZMKFZUTIUGLQMFWT");

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
    msg.setTimeStamp(0.533102513363);
    msg.setSource(57104U);
    msg.setSourceEntity(237U);
    msg.setDestination(26851U);
    msg.setDestinationEntity(40U);
    msg.type = 116U;
    msg.htime = 0.494151703784;
    msg.context.assign("TEHUVNHDTSFNCPKMLJZNFPVLFKAFCYFAWHHXBWDUGPAYRVBUEKUECDYIINMDDEFDFKHQCNPKBJZUOJUXLTGGBMQXMOSMLROOTRZVXIAZLSTJCXFURONGNDCICTKNPMYIFMBDABEOJQBGVIOEADYVXIZEGTIKGYWWLRVZVLLMKRTXCXMHRRUCQXLQAZSLNOAUJXYJPQEUTYWRO");
    msg.text.assign("NHVACBOWUVLMGIDPDHOGBQFLYRRCSGJLQTQIFCECDNKXOPVBEZMKMYLGGSZNIIUKKXDRBAQMSCFBSLIMCCFAWMCWOHPXZYFLLPDARQDHZVCYLWYNJTAPWUFTJWXGOVTENOTSSGJWQHFRUYYBQNNRZVJJMJHKUKRKNEOTPPJTPIEMIUIGPOVVSPZKUNCXIELXTUDAFZWKDYQVGSOBXAARWHESDMSABQJXAFRWKZUBF");

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
    msg.setTimeStamp(0.937519116808);
    msg.setSource(40624U);
    msg.setSourceEntity(177U);
    msg.setDestination(37956U);
    msg.setDestinationEntity(130U);
    msg.type = 116U;
    msg.htime = 0.125193174891;
    msg.context.assign("OSQWBZCXOJUXENKRNOWUZMSDMZLTSLQBSIBCPJHNGWJFZMIRIDVZGYDGHOFKMCULBVOVORXLTQQFDCWFQBHPJKLLDUIOTWAIRYYHPLAFAOVLUYLUXQEAFP");
    msg.text.assign("HWMHYNMUVECEASPNHGMZKQZMAELTADROYJROWIHNRCXEVBZXJCRMPDPCZWJQTVNXJXLIWIXDBTJLHEBELJJCCKYSKDIQYRGSYAVMOQWSQIZSKHVOILBCKHLBEYZ");

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
    msg.setTimeStamp(0.423994233412);
    msg.setSource(57232U);
    msg.setSourceEntity(5U);
    msg.setDestination(19396U);
    msg.setDestinationEntity(153U);
    msg.command = 146U;
    msg.htime = 0.248709833355;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 86U;
    tmp_msg_0.htime = 0.610168031031;
    tmp_msg_0.context.assign("BVKOHXBTSXO");
    tmp_msg_0.text.assign("OMJTGICIPFSKSXTVGKMTHEXZMZNLNKIWQUYMUSGLICDNLTYVUBGKYBUQRBFZDVIEVWOQHYAPLFIYARYSDZIEOPUTYTAXXKFSOGSAIQPYSSCKHFRLBXAELCWQVADRHPJVXFKZPEKLCZWFCHEFNWJNEBPDDRZPMCRGJVVNFWUGIPTWOAVMJFJORJUOJELVQBYMMMXSXXTUHRAQDKCWGEMLRNGSOYCZQD");
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
    msg.setTimeStamp(0.163861963545);
    msg.setSource(49771U);
    msg.setSourceEntity(91U);
    msg.setDestination(37673U);
    msg.setDestinationEntity(227U);
    msg.command = 102U;
    msg.htime = 0.319492898261;

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
    msg.setTimeStamp(0.551528138823);
    msg.setSource(4975U);
    msg.setSourceEntity(33U);
    msg.setDestination(43237U);
    msg.setDestinationEntity(92U);
    msg.command = 78U;
    msg.htime = 0.673422291874;

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
    msg.setTimeStamp(0.212633066468);
    msg.setSource(28309U);
    msg.setSourceEntity(119U);
    msg.setDestination(55799U);
    msg.setDestinationEntity(146U);
    msg.op = 225U;
    msg.file.assign("XXORGYCOYSFFSGEMVVLJQTYOPFGYJZHCFCEEOPQEKNWJFRMQDHOXGLUYAXCGLGOQZSBZTVAPWVWPTHWOKIYRZZNLCVGORQZNKDZDEFIUUKMSEHTAUVNPWLJEHFCMTXAUBYIVRUFZTCLXINHU");

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
    msg.setTimeStamp(0.926319851883);
    msg.setSource(13168U);
    msg.setSourceEntity(24U);
    msg.setDestination(13047U);
    msg.setDestinationEntity(114U);
    msg.op = 229U;
    msg.file.assign("VIAMQMDWCXWIVITCHNDGTZQJZHFOLLNXTLWEIUIIAFTVCFBKEGAZWBDSBXCVUIHWRKIOSSYYUFKHOBFCMQJKVJCNTJVCWO");

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
    msg.setTimeStamp(0.821435602783);
    msg.setSource(59446U);
    msg.setSourceEntity(139U);
    msg.setDestination(20260U);
    msg.setDestinationEntity(47U);
    msg.op = 133U;
    msg.file.assign("NTMWYZLWWCYXEITTMZAGULZCLPTNRIDJMMRYHNNNRYZEQSPSCQYYBIZUYXFGSIMXPVJSTXVFKZUPSTRBCVFXXDZNUKHZIDRGAIHRIUVFWVEBOOFTJVJHVKAKDGVIAVOZHBEGHWGIRLRQMMCPOJDTMGCBLLMAREFOLPKFHCKQUDXTDACAKSJDUDKWUQZBUONGOOPVLRXYHQNBFSMQXQBPWJCEOKLPJQXCEHWYGWFJSBULEWSBNATHA");

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
    msg.setTimeStamp(0.925450108526);
    msg.setSource(55918U);
    msg.setSourceEntity(8U);
    msg.setDestination(24089U);
    msg.setDestinationEntity(90U);
    msg.op = 68U;
    msg.clock = 0.394761805272;
    msg.tz = 120;

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
    msg.setTimeStamp(0.27120146508);
    msg.setSource(57044U);
    msg.setSourceEntity(60U);
    msg.setDestination(58239U);
    msg.setDestinationEntity(125U);
    msg.op = 93U;
    msg.clock = 0.489552925219;
    msg.tz = -31;

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
    msg.setTimeStamp(0.132847604443);
    msg.setSource(45532U);
    msg.setSourceEntity(56U);
    msg.setDestination(36117U);
    msg.setDestinationEntity(107U);
    msg.op = 188U;
    msg.clock = 0.881343373885;
    msg.tz = -28;

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
    msg.setTimeStamp(0.563782883168);
    msg.setSource(51039U);
    msg.setSourceEntity(151U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(162U);
    msg.conductivity = 0.768732385632;
    msg.temperature = 0.817768294254;
    msg.depth = 0.740870127707;

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
    msg.setTimeStamp(0.575473251753);
    msg.setSource(59136U);
    msg.setSourceEntity(2U);
    msg.setDestination(34924U);
    msg.setDestinationEntity(206U);
    msg.conductivity = 0.35179866536;
    msg.temperature = 0.491788406176;
    msg.depth = 0.972491129169;

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
    msg.setTimeStamp(0.200047858499);
    msg.setSource(22726U);
    msg.setSourceEntity(83U);
    msg.setDestination(59614U);
    msg.setDestinationEntity(230U);
    msg.conductivity = 0.209048664598;
    msg.temperature = 0.74978457042;
    msg.depth = 0.111259338366;

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
    msg.setTimeStamp(0.01910214491);
    msg.setSource(30243U);
    msg.setSourceEntity(237U);
    msg.setDestination(9800U);
    msg.setDestinationEntity(87U);
    msg.altitude = 0.57210173258;
    msg.roll = 62557U;
    msg.pitch = 52100U;
    msg.yaw = 22237U;
    msg.speed = -20962;

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
    msg.setTimeStamp(0.0165178849604);
    msg.setSource(49226U);
    msg.setSourceEntity(177U);
    msg.setDestination(11050U);
    msg.setDestinationEntity(111U);
    msg.altitude = 0.48351990616;
    msg.roll = 51517U;
    msg.pitch = 65464U;
    msg.yaw = 52930U;
    msg.speed = 20892;

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
    msg.setTimeStamp(0.551714456957);
    msg.setSource(20330U);
    msg.setSourceEntity(249U);
    msg.setDestination(31015U);
    msg.setDestinationEntity(13U);
    msg.altitude = 0.112848610246;
    msg.roll = 38277U;
    msg.pitch = 22768U;
    msg.yaw = 33228U;
    msg.speed = 4532;

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
    msg.setTimeStamp(0.0513907386635);
    msg.setSource(1851U);
    msg.setSourceEntity(220U);
    msg.setDestination(2262U);
    msg.setDestinationEntity(241U);
    msg.altitude = 0.969872921411;
    msg.width = 0.422768909184;
    msg.length = 0.620282948065;
    msg.bearing = 0.70139964576;
    msg.pxl = -18418;
    msg.encoding = 134U;
    const char tmp_msg_0[] = {75, 95, 104, -13, -5, -34, 4, -91, 76, -92, 64, -82, 125, -74, 42, -50, -45, -126, -54, -54, -21, 56, 32, 94, -18, 12, -57, -21, 71, -17, -50, -6, 49, -62, -31, -90, 32, 41, 12, -50, -108, 92, -1, -30, -100, 110, 97, 105, 113, 104, 31, -62, -9, -102, -11, -27, -103, 36, 75, -68, 83, -30, 74, 47, 72, -46, -42, 35, 39, 30, -125, 64, 43, -54, 51, 79, -33, 124, 74, -45, -52, -27, 87, -81, 38, -35, -114, -66, -97, 74, 79, -80, 117, 103, 70, 116, -85, -23, 66, -28, 29, 29, -52, 1, 57, -102, -21, 75, -28, -12, -6, 119, -51, -97, 122};
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
    msg.setTimeStamp(0.126073564906);
    msg.setSource(52479U);
    msg.setSourceEntity(12U);
    msg.setDestination(18426U);
    msg.setDestinationEntity(18U);
    msg.altitude = 0.190271820452;
    msg.width = 0.400164975839;
    msg.length = 0.530560055305;
    msg.bearing = 0.109257819843;
    msg.pxl = -25131;
    msg.encoding = 1U;
    const char tmp_msg_0[] = {124, -11, 82, 80, -45, -52, 81, 67, -36, 65, 109, -58, 99, -37, 75, -91, -72, 117, 34, -53, -41, -39, -31, 120, 11, 11, 52, 124, -38, -75, -80, -105, 19, 88, 71, 38, -8, 61, -114, 111, -38, 104, 119, -35, 97, -60, 56, -42, 0, 93, -1, 111, 69, -26, 5, -84, -1, 3, 33, -108, 120, -87, 69, -24, -84, -122, 82, -46, 99, 4, -112, 69, 18, 105, 48, 92, -25, -112, -63, 68, -20, -15, -42, -61, -71, 31, -105, 20, -12, -3, -100, -81, 111, -111, 43, -120, 94, 61, -71, 9, 49, -36, -21, 104, -30, 103, -122, 78, 108, 73, 61, 115, 106, -102, 108, -27, 73, -52, 35, 58, 90, 68, -3, -85, -27, 92, -56, -75, 74, 52, -104, -109, -86, -100, 115, 100, 98, 98, -55, 7, 65, 109, -65, -91, 22, -8, -82, -62, -67, 6, 109, -63, 106, 16, 100, -107, -128, 99, -6};
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
    msg.setTimeStamp(0.281686484534);
    msg.setSource(23506U);
    msg.setSourceEntity(153U);
    msg.setDestination(38392U);
    msg.setDestinationEntity(7U);
    msg.altitude = 0.100883017871;
    msg.width = 0.856310610441;
    msg.length = 0.189784854023;
    msg.bearing = 0.888288039791;
    msg.pxl = 176;
    msg.encoding = 158U;
    const char tmp_msg_0[] = {14, -48, 62, -54, -77, 119, 62, 76, -117, -111, 80, -115, -26, 93, 83, 16, -77, 94, 11, -78, -11, -67, 80, -5, 47, 10, -98, -1, 101, 15, -109, -61, 59, 57, 89, 62, 113, -5, -78, 109, 32, -29, -90, 10, -47, -127, 11, -49, -112, -93, 91, 40, 38, -10, 101, -77, -83, 14, -53, -61, -62, 22, 15, 97, -19, -93, 45, -4, 82, 99, 32, -96, 33, -60, -21, -51, 6, -42, 5, 45, -32, 116, 55, 7, 83, 28, 108, 24, -10, -37, 51, -41, 102, -117, 85, -13, 52, -66, -33, 66, 4, -95, -31, 120, 109, -113, 99, -42, -76, 23, 42, -85, -25, 45, -50, 75, 107, 101, -82, 50, -85, 67, 91, 98, 19, 64, -127, -49, -37, 80, 116, -11, 26, -106, -91, -67, -85, -126, -32, -101, -12, 97, -105, 65, 22, -95, -74, 5, 91, 55, -67, 23, -47, 107, 71, 79, 19, 55, -41, -36, 109, -64, 0, -77, -13, 125, -69, -14, 114, 52, 125, 7, 96, 98, 34, 108, 50, 55, 19, 89, 39, -121, 20, 38, -2, 0, 75, 72, 7, 96, 3, -2, 6, -50, 69, 88};
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
    msg.setTimeStamp(0.534920742655);
    msg.setSource(32858U);
    msg.setSourceEntity(11U);
    msg.setDestination(51073U);
    msg.setDestinationEntity(193U);
    msg.text.assign("YAELANCQXXWPEVZTKDCGHCVUXXPWOVMTIRAIOOSDXHHWVJMDZENMXDRONRKMUBRSRWGUTTXBCVMFOSVKLWYZYKNDRJTAQPHIDYUVZQEEYNFPLJWQSKHDJPNHOIFEUEDIFMPGMAJXKUZZIMXCBBKSCIQFCFHQTLMUHEVJSNXLJABBLSPFWZAIGNCOULIHOQVERSLPAGKKFWGZSPTGULQDQAOFCCWTRDBJBTAGYYPSVNZRLGJJ");
    msg.type = 231U;

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
    msg.setTimeStamp(0.0113838716441);
    msg.setSource(40072U);
    msg.setSourceEntity(46U);
    msg.setDestination(46385U);
    msg.setDestinationEntity(160U);
    msg.text.assign("OAQTVXQIOOPBRIDLLHZDNFBNPFIQLODIGYWCLORGUCSARJMFGCIYQLZHAARCSJHWMVPETHJUHJENEKKEUHPQSWGBGNJYSRNKHQKUYMNPRPBSYRUBOXACMDTZLQFTHASTXZDHDQHPUQIUVFWVBSJVCNVKVLNCYNPFDGZKAOLZWUKWFPICBBZDWZIFPGJWVGMMJDZXLTAEUSXJMSXLMQAYMXGEKYFEKXUTYTOKMGTVROXBNDBCOEYWEFWIR");
    msg.type = 66U;

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
    msg.setTimeStamp(0.0536075952506);
    msg.setSource(2121U);
    msg.setSourceEntity(71U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(249U);
    msg.text.assign("DGBYQHZVKIPNNNZTKWD");
    msg.type = 157U;

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
    msg.setTimeStamp(0.301192326065);
    msg.setSource(54366U);
    msg.setSourceEntity(217U);
    msg.setDestination(9222U);
    msg.setDestinationEntity(58U);
    msg.parameter = 120U;
    msg.numsamples = 107U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34322U;
    tmp_msg_0.avg = 0.165733375456;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.941391293561;
    msg.lon = 0.212825825105;

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
    msg.setTimeStamp(0.329341082471);
    msg.setSource(33445U);
    msg.setSourceEntity(76U);
    msg.setDestination(31450U);
    msg.setDestinationEntity(124U);
    msg.parameter = 17U;
    msg.numsamples = 240U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 47218U;
    tmp_msg_0.avg = 0.185318935378;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.496196762324;
    msg.lon = 0.642701476408;

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
    msg.setTimeStamp(0.289363789203);
    msg.setSource(10637U);
    msg.setSourceEntity(80U);
    msg.setDestination(9896U);
    msg.setDestinationEntity(196U);
    msg.parameter = 183U;
    msg.numsamples = 114U;
    msg.lat = 0.482805735169;
    msg.lon = 0.195847574337;

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
    msg.setTimeStamp(0.65875599446);
    msg.setSource(34830U);
    msg.setSourceEntity(31U);
    msg.setDestination(11346U);
    msg.setDestinationEntity(185U);
    msg.depth = 13843U;
    msg.avg = 0.358393663936;

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
    msg.setTimeStamp(0.451564501574);
    msg.setSource(143U);
    msg.setSourceEntity(7U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(139U);
    msg.depth = 60357U;
    msg.avg = 0.851143796704;

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
    msg.setTimeStamp(0.596441435);
    msg.setSource(8575U);
    msg.setSourceEntity(205U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(158U);
    msg.depth = 37375U;
    msg.avg = 0.72736520181;

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
    msg.setTimeStamp(0.709195930089);
    msg.setSource(37238U);
    msg.setSourceEntity(71U);
    msg.setDestination(56938U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.233741311433);
    msg.setSource(54864U);
    msg.setSourceEntity(155U);
    msg.setDestination(47420U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.660122310088);
    msg.setSource(9965U);
    msg.setSourceEntity(142U);
    msg.setDestination(1413U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.957364900334);
    msg.setSource(34523U);
    msg.setSourceEntity(195U);
    msg.setDestination(50569U);
    msg.setDestinationEntity(211U);
    msg.sys_name.assign("URIRFXBWJZAJVVGKIQFAWWLFRMYOZYJRIAEHKICEAHDJJWUVQOYNGKJWFIQABXZHNYTTPMXYMXSZQBCQWZWLSDAPSNRBGMUDCIAFZYSLQXAKMENBGLOMDUHJNORJSNLSPDFVIVMMRPVTODUBLKXTEVYEZECCZOCKQFHTWXDTXGEFZNTIUGAVG");
    msg.sys_type = 29U;
    msg.owner = 59863U;
    msg.lat = 0.667255025135;
    msg.lon = 0.582904987462;
    msg.height = 0.870336843725;
    msg.services.assign("SCAHZLIZVYVPDQQNJGTKHQQDUUKNPUPPWCMHMMVNOJKIMKQSRIITRJNLZFKLOGZAQXEXMCIJOWSHBOJLZIACLWYFARMGEDFYQFCTVSZSVVSAIEQXOVCHHPYHFTVTUPQBTUNPFGBFDUAWZXWOGEBRDLOD");

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
    msg.setTimeStamp(0.948768877192);
    msg.setSource(26418U);
    msg.setSourceEntity(92U);
    msg.setDestination(47260U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("DGCATIZCNCDQLKRQUXXFJISPKQHRVHOWYPPAPJALOZIJTUDZSVUYZKMIYPHADTUHANEHWXZJMBBQSYJAWZZPHMBTVPOJUNOOIENTOXBELVZRYSIMAQGYSDIGMKMVBMAVSHXJQKZBEBRMGYKQFCNYREKTFOCKSFRGWJYQRVWEWNXHFQOARWJCDDL");
    msg.sys_type = 10U;
    msg.owner = 38633U;
    msg.lat = 0.297960096156;
    msg.lon = 0.523364757888;
    msg.height = 0.868537619058;
    msg.services.assign("MKOWTBCVJYHDOKIDIESYMNYGMPNDNKREYFZNTXFWWMRCWUILGDT");

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
    msg.setTimeStamp(0.0379723753914);
    msg.setSource(25438U);
    msg.setSourceEntity(80U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(63U);
    msg.sys_name.assign("TTCPJBHRTZLKRBSSJMIGIIJQQJGMPJYODOODHAYZXNNRUJTVOHEUFNWVFARPTPNUEIXGABTV");
    msg.sys_type = 180U;
    msg.owner = 30910U;
    msg.lat = 0.97582602977;
    msg.lon = 0.124913686147;
    msg.height = 0.699018522213;
    msg.services.assign("RZFUZEEYIYRMECCXLHZQGIJDVMPQPJNVABUNVGPFAIYZPESVGANMUYKVPUFJAXLNJLBOLMPZTISUWDVIKQHFQOBUBWGJECUQTEORQNMWXTATENOIKTDTJTGRVNKXAZWDCNWMKJLVKZSBLWDOKNMIBVGZHMGBYRLAHCDXSJAPOQYIXUWRSHFFT");

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
    msg.setTimeStamp(0.608563007057);
    msg.setSource(4743U);
    msg.setSourceEntity(232U);
    msg.setDestination(21010U);
    msg.setDestinationEntity(222U);
    msg.service.assign("TBWTXIGKWPQLNTUBWLTNMMPOSDLDINQZYQRXHIINJPZOGJNNMDXFCACEOBBDDMLSHFHKTEOSGHYPNWVRXNOXZZQPVAJJYHMNABVLGEZSIKGKESUKREFBUOTOYBWHOMOPJYARANAKJTTIFDAYCEDSSVKCUDZRJMESRUGGUFQRHRKQORHPEEKD");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.837288140141);
    msg.setSource(41503U);
    msg.setSourceEntity(3U);
    msg.setDestination(3830U);
    msg.setDestinationEntity(21U);
    msg.service.assign("ONJLNXTDWKXXGYFEXDLDTOLIQBQOXZRRMZRSEOPMRMMYCDNTABGNQEHNEHIFAZGNUAGWXIAVBZYOFJJJPHXNKGSJAVHUSEXRKUOZBAAJPEKPJCTPKTTDQBFPVQMVGWDDXFAYCVOASULQIILWIVLRDBISHJWYUPLUESETSYHPINCWUY");
    msg.service_type = 140U;

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
    msg.setTimeStamp(0.584408830439);
    msg.setSource(61637U);
    msg.setSourceEntity(160U);
    msg.setDestination(50512U);
    msg.setDestinationEntity(39U);
    msg.service.assign("XIKLVRTZXWYEIRTYBUMQGSHINHRULSNOEODBWVICLKNNHTBQOXPMDYNKXIPJUMIDZDMMQEEJMYPAFMKIPWTQOAGYZXAPVWJGFNSRJNBQPZJYZFZCJVOLFSSBCLFXAGVOGUNR");
    msg.service_type = 199U;

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
    msg.setTimeStamp(0.509832824106);
    msg.setSource(46254U);
    msg.setSourceEntity(235U);
    msg.setDestination(43790U);
    msg.setDestinationEntity(246U);
    msg.value = 0.242047648383;

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
    msg.setTimeStamp(0.303690239444);
    msg.setSource(54628U);
    msg.setSourceEntity(221U);
    msg.setDestination(53263U);
    msg.setDestinationEntity(233U);
    msg.value = 0.482843632403;

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
    msg.setTimeStamp(0.713794616093);
    msg.setSource(24758U);
    msg.setSourceEntity(178U);
    msg.setDestination(61792U);
    msg.setDestinationEntity(45U);
    msg.value = 0.693458052201;

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
    msg.setTimeStamp(0.79148822873);
    msg.setSource(53988U);
    msg.setSourceEntity(173U);
    msg.setDestination(42540U);
    msg.setDestinationEntity(122U);
    msg.value = 0.156037524451;

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
    msg.setTimeStamp(0.819263859422);
    msg.setSource(23750U);
    msg.setSourceEntity(251U);
    msg.setDestination(47243U);
    msg.setDestinationEntity(105U);
    msg.value = 0.252212894022;

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
    msg.setTimeStamp(0.5773170604);
    msg.setSource(3809U);
    msg.setSourceEntity(217U);
    msg.setDestination(2111U);
    msg.setDestinationEntity(17U);
    msg.value = 0.82964122343;

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
    msg.setTimeStamp(0.376335282993);
    msg.setSource(54209U);
    msg.setSourceEntity(127U);
    msg.setDestination(59313U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0430308989188;

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
    msg.setTimeStamp(0.373517639499);
    msg.setSource(19012U);
    msg.setSourceEntity(81U);
    msg.setDestination(65212U);
    msg.setDestinationEntity(231U);
    msg.value = 0.56835828798;

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
    msg.setTimeStamp(0.170980374318);
    msg.setSource(33884U);
    msg.setSourceEntity(8U);
    msg.setDestination(55495U);
    msg.setDestinationEntity(36U);
    msg.value = 0.402667422288;

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
    msg.setTimeStamp(0.538552450045);
    msg.setSource(52811U);
    msg.setSourceEntity(22U);
    msg.setDestination(59746U);
    msg.setDestinationEntity(99U);
    msg.number.assign("PICKVUIBLBKDQQEYAKIQTCJVGKRYEAKPTZFXGPQOSHJGBFQSPBYYUMGMYDSFTFOISWENIRETMYUXAYHLZFXOBSEIWSJHITAWDQIVLDHNURREWMNPINSRCXCAXLOIDPHTMVOLJBOKOBXBENWQFHNZUAZFPJFSTLWTZCDCPDEMSQYCWJLXGEHVUOFCNSJDUGVRZEZRLKDVXUZJRONWGDAYFWHALAMNCL");
    msg.timeout = 4794U;
    msg.contents.assign("JKDLVLDAUISGWIBAPGYMMPOZGDKQSQQTYMNGEBBUWWJCDIWZPXXJBCJQCYPFVKUFHMFYUHNXOFXHYDEJSHYRYXJHYHJEKYATETTZFPILEALHZQJTGWWNKTCSENOLCLFU");

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
    msg.setTimeStamp(0.333511707014);
    msg.setSource(14709U);
    msg.setSourceEntity(4U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(215U);
    msg.number.assign("MXOKSONGLUHEAHAUEBRWQRCYIMIXAELNKZSD");
    msg.timeout = 34708U;
    msg.contents.assign("IJHEDPQDWHTNSWRRYXGCICOMWGFWKEBDVNTOBYTHKHDYRTWJVFCOFPXEKHVANWPLQREELUWRSZMUFBMIEAOGJZJVBRNVZGUAHBACMCDTIJZMSUXJLRAKDQBIFMSKIDGBEOZLXCWIJLTBSBDQETQNGRJCEVOJKLAEJVLHNMKLTSBQTGIOPP");

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
    msg.setTimeStamp(0.624287414716);
    msg.setSource(39368U);
    msg.setSourceEntity(152U);
    msg.setDestination(51543U);
    msg.setDestinationEntity(70U);
    msg.number.assign("CILXMRVHUBFVUZZTHJXIFPDXWVKFEJKMNGPAKPTSARTLXLOOIXMNXX");
    msg.timeout = 14494U;
    msg.contents.assign("VCXRZYBTSXUCKUPVYPLDFLJAVJWROYJSXCDNEFMRLGAFXICCQFKBAPTUWORBWVE");

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
    msg.setTimeStamp(0.446849887617);
    msg.setSource(60942U);
    msg.setSourceEntity(190U);
    msg.setDestination(1563U);
    msg.setDestinationEntity(222U);
    msg.seq = 2131396577U;
    msg.destination.assign("BJLDVUVSNYRNZODDXNWZPXODDDXJYOTBRCSWSKUOIOVVTUIIFIMIEWGPYEMJLBUFZHKCJSFRHQWYLKMTICTMCHPKUCAMYUNGEDQTTGFRNEVVLAXLDWFACXBGAJWJEOIKLBIRADXAWPQLBFAPZEIZKFZOMFOSGJAQWBMAZLRGHGESVTTMPBEECQYTDLZHNHCCFUBAVILJYHSGQKWTEYUPJUGUQQJPHXGPRMZNHNXK");
    msg.timeout = 40932U;
    const char tmp_msg_0[] = {-88, 83, 118, 37, 92, -54, -107, 6, -84, -88, -75, -88, 70, 124, -118, -120, -72, -4, -39, -14, 31, -69, 98, 64, -100, 78, 23, -41, 17, 64, -20, 94, 78, 15, -5, -70, -56, 1, -105, 97, -50, -38, 44, 121, 121, 55, 36, -114, -97, 104, 48, -104, -41, -116, -52, 80, 71, 19, -33, -55, 115, 108, 107, -127, -86, -127, -80, 21, 107, 112, 33, 122, -33, -57, 17, 124, -1, 110, -19, -71, 117, 119, 17, 120, -66, -11, -24, 89, 40, -75, -98, 2, -64, -15, 115, 118, -20, 110, 9, 17, 47, 22, 14, -42, -126, 77, 108, 68, 90, 5, 106, -124, -87, -80, -32, -125, -51, 91, 81, -36, 54, -3, 58, -123, 118, -23, 46, 60, -89, 114, -58, -100, -114, 23, -56, -10, 83, 71, -16, 104, 57, -112, -43, 7, 29, -77, 29, 110, 105, -22, -17, 52, 27, -112, 77, 109, -91, 42, -7, 104, 23, -36, 57, 46, -107, 123, -119, -46, 35, -78, 93, -101, -11, -99, 112, -66, -107, 83, 75, -103, -118, 56, -83, 16, -53, 71, 5, 113, -43, -20, -26, 52, 60, 10, -80, 32, 13, 58, 29, 65, 46, -87, -106, -42, 19, -23, -94, -9, 56, 33, -79, -79, -33, 41, -76, 76, 77, 2};
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
    msg.setTimeStamp(0.859221693671);
    msg.setSource(37091U);
    msg.setSourceEntity(238U);
    msg.setDestination(23411U);
    msg.setDestinationEntity(157U);
    msg.seq = 2752631689U;
    msg.destination.assign("DOWQFCHFFYXNIGJUKFYXAOQUJOEHEPTSVWHVOVNIZYVSBTZVKGEOHBANCZUQIPYOHNUVGKRYBBESRDJYQJFCYTWKWPHHRMAZUHWMI");
    msg.timeout = 3199U;
    const char tmp_msg_0[] = {49, -113, 95, 18, 108, -113, -64, 54, 35, -35, 19, -35, -31, 126, -46, -88, 100, 123, -80, -121, -27, 52, 17, 111, 71, 13, 13, -5, -30, 34, -43, 30, 66, -89, 33, -28, 14, 112, 2, 81, -99, 32, -42, 5, 42, 11, -10, -104, 19, -8, -49, -68, 33, 59, -111, 99, 41, -24, -87, 113, -60, 23, 0, 44, 47, -51, -96, 106, -37, -95, -31, -21, -106, -92, -25, 72};
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
    msg.setTimeStamp(0.232567156033);
    msg.setSource(1322U);
    msg.setSourceEntity(205U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(41U);
    msg.seq = 1295168755U;
    msg.destination.assign("OPGIYMLGNBHWCBKJCCYEHJOLIIAWUCGNKZYRZPCSXLFLDVVBRAVWORKUTXNIWNDDQTTAQOWWCBFXPCJTPENSBQSVQVEDHFKSZGNJHCQKMCGXYRFEGVHFODAINFUZXIEUCTSZNGJUSEAQIZIPBOYRUODLXMDGMOLKBSQXDLGPYRBTAMEKPVHUAPSZNFBYJRHEIJ");
    msg.timeout = 32527U;
    const char tmp_msg_0[] = {11, -41, -17, 30, -41, -117, -103, -41, -19, -2, 82, -82, -71, 39, 8, -50, 98, -42, 91, 58, 88, -40, -40, 102, -76, -39, -83, -108, 59, 86, -79, -62, -48, 122, 107, -7, 99, -110, -115, 39, 107, 7};
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
    msg.setTimeStamp(0.327973742289);
    msg.setSource(63757U);
    msg.setSourceEntity(27U);
    msg.setDestination(7936U);
    msg.setDestinationEntity(146U);
    msg.source.assign("MXJDIKKTOQEZCEAURKQAEFXZKOHTABNSOIWUX");
    const char tmp_msg_0[] = {-108, -87, 41, 63, 3, 85, -27, 30, -48, -85, 10, -111, 14, 121, -12, -35, -117, -124, -112, -44, -21, -7, -33, 56, 116, 78, 10, -71, 57, 23, 17, 38, 117, 52, -107, -18, 52, -124, 98, -82, 23, 7, 106, 98, 71, -57, -62, -120, 25, 57, -57, 15, -4, -61, 1, -98, -29, 3, 105, -106, 45, -7, -70, -94, -18, 87, -55, -23, 62, 113, 110, -9, 32, -64, -29, 12, -85, -122, -28, 55, 39, 111, -77, 112, -51, 36, -98, 119, -70, -128, -35, 117, 29, -27, -91, -91, 103};
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
    msg.setTimeStamp(0.789934005828);
    msg.setSource(36673U);
    msg.setSourceEntity(195U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(85U);
    msg.source.assign("LYDXFIXVCJLCHTJJTWADSRQKOEHGRSCMURIYN");
    const char tmp_msg_0[] = {-125, -42, 12, -99, -124, 37, 110, 96, 88, 102, 34, 96, -11, -2, -60, 86, -106, 40, 22, -91, -58, -110, -108, -16, 43, 98, -68, 90, -1, 3, 120, -42, 55, 65, 41, 121, -58, -103, 44, -31, -85, -8, -110, 118, -68, 82, 32, 55, -54, -81, 27, -42, -38, 61, -78, -88, 126, 19, -6, 102, -32, 15, 43, 111, 46, -71, -50, 119, 80, 43, 52, 43, -123, -56, -88, 107, -91, -39, 110, 43, 20, -105, 54, 3, 38, -55, -31, 20, -32, 99, 116, -46, 40, 39, -64, 59, -95, -97, 123, 20, 78, 23, 63, 6, -69, 84, 119, 123, -85, -40, -71, 117, 45, 78, -46, 30, 61, -47, 11, 63, 21, -33, 12, -12, -45, -13, -95, 85, -112, 65, -109, -96, 110, -41, -50, 3, 20, 65, -17, -26, 107, -47, -7, -56, 93, 33, 118, 65, 125, 124, -83, 23, -5, -3, -115, -93, 62, -28, 83, -1, -70, 79, -41, 38, -102, -80, 98, 25, -61, -86, 90, 76, -78, 111, 78, -73, -127, -74, 42, 50, -73, 119, -40, -70, -32};
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
    msg.setTimeStamp(0.139881933302);
    msg.setSource(30056U);
    msg.setSourceEntity(42U);
    msg.setDestination(9180U);
    msg.setDestinationEntity(74U);
    msg.source.assign("KAKTTEVHBDNLMOVEYIYHUCRPAPGNZMWGCYUUMSWLLRBTJOIEZMGXYEJLKVENWTPYALZKS");
    const char tmp_msg_0[] = {86, -68, -81, -13, -61, 96, 60, -93, -60, 84, 86, -61, 61, -3, 95, -115, 54, 20, -21, -51, 94, 28, 66, -104, 114, -60, 114, 79, -78, 88, -72, 96, 36, 6, -111, -67, -82, 49, 24, -19, 61, -123, -14, -47, 59, -54, 19, 83, -97, -21, -50, -63, -1, -18, 76, 38, -45, 109, -16, -7, -40, 57, -61, -23, 70, -67, 73, -96, 37, -46, 91, 60, -95, -1, 115, -123, 92, -74, 119, 97, 50, -48, 46, -127, 88, 113, 15, 113, -103, -112, -123, -24, -102, 23, 52, 36, 76, 96, -37, 3, 78, 47, 28, 121, 27, 51, -87, 24, 108, 88, 49, 35, 61, -64, -67, -74, 65, -100};
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
    msg.setTimeStamp(0.899197037963);
    msg.setSource(26057U);
    msg.setSourceEntity(165U);
    msg.setDestination(6106U);
    msg.setDestinationEntity(218U);
    msg.seq = 1750089595U;
    msg.state = 8U;
    msg.error.assign("COENXJOEZZYYQWNIWYGXCCOFGYSSPMGWGBEUJXCUYTCRJOYQDHFHUOFEUHQJWILVPSRSHFKTLKLJFDMKOHPFDAZKVXIAUTPNPURJCMWVAWTTTQVYMISWLZBPGVIINDLPMRHZRIFZRDNOWDFLGVQPAIUNHDMZQDKVMKGKEIZEERQFCHMSLHBRYQNUSGLDVMHPAOSRBBRJTXJFOACATMXQTWYKTCUALCYNGEOQNZBJUEBAAKVBJXDLXNSBGBV");

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
    msg.setTimeStamp(0.478382177045);
    msg.setSource(61462U);
    msg.setSourceEntity(68U);
    msg.setDestination(22037U);
    msg.setDestinationEntity(62U);
    msg.seq = 3183630462U;
    msg.state = 172U;
    msg.error.assign("DOGQOOXVENLZLNQIRNCKXIPHMIYWPVLDMXEFYSJWJICPPCJENFL");

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
    msg.setTimeStamp(0.210038103507);
    msg.setSource(41652U);
    msg.setSourceEntity(189U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(243U);
    msg.seq = 3103161339U;
    msg.state = 236U;
    msg.error.assign("ZVCFAMTHAIDWBRNKUKJPQZYXGMCOQHFASLOKEHOPSNSSRZSSEWVYIPEZBHWYJCDBDEPZLXOJQFVRLZHGRYLEZJGIIAFXTMUMGHVQGNPOODJXJBKFKQKYWHEXVMQZJULANZUKVCTVYLFGSMSBDXXTFHINNOBRKBPSQALVFKUBEWNWIWTDUWRMMZRCGGMAIUQDDLRUTUXRTOPPNXEHFDIYCXSHAIWYWNQNQTABCEBYPLJLDUYATMVICJVG");

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
    msg.setTimeStamp(0.0350281588226);
    msg.setSource(1860U);
    msg.setSourceEntity(83U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("FZVPSOGCRXGLCCGRIBVMNFMSIABPNMTLOFZWOEHVLXWLREMWOBJGHEMWMXBTJCRBGCYJCFLBHUNYHSHAUJYZTWKCWKGBXTLAFVWSPRJQYXCTTJJGVZQXQLNUKOTTDPZIWOFDJHYSPDNQAMKEQDBAVPAEYOGUPKMHOTYKNJEFUHDKZAQZVDVYOXCQINOISDUMRRSJQILZSGSURD");
    msg.text.assign("OKCLGJTPPWTCLUCXPRCHIOOU");

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
    msg.setTimeStamp(0.182087350124);
    msg.setSource(12047U);
    msg.setSourceEntity(41U);
    msg.setDestination(8116U);
    msg.setDestinationEntity(90U);
    msg.origin.assign("OHQIECDNRTVDWKRFRFHIVRPJOVWQOQAOTHVDJLOYQHUZBMSEUVFANJSJZXJMANQTSFRREBCJLBUIKWWQNZHLXUTMGPCYLUTLYEDDWXUJBQSCEKUNPZMTFRQGHESICIPFJBFOIWGCUBXFSWMMMLAHAIKSQXVMUW");
    msg.text.assign("XTFDZMZLLSYRPKRTSJTMGBSZOYCVENWEQUJMTJYUIIKPRRIMFWETNFMUPOCOGRVAINWKBHUABDBPOVUPAYUWCASXJJZRYWJDTYLIIDKMFZAJBTOUXJMPSHLROWEDIXHAQLYDWHNBMEFERLXSGVGSAUGUPZGQVXCNGGEKZJCEZWKLQFYAGEXPKITXLY");

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
    msg.setTimeStamp(0.614206420605);
    msg.setSource(51099U);
    msg.setSourceEntity(20U);
    msg.setDestination(30176U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("LRQHDBJCGYNYEWBAYBVDNAHZJCRTYLKXMLPMDRPURHXCNMBDWMQBCOQKBTIILVPTIRGBKSWIITNVQSXAUPDXZQKDNCQATURHGBOXFWOLFVOGWWUZFRYPZHGCNREEUZEULGAFDFZBUSCJZEINJYGJAJCYMTERWQHDSVAFUIVOJFXNKVBQSNUSHSPTLMP");
    msg.text.assign("WXITTSFZXAYIEUBYCZQPMIOAKWWCFICOMNPHDHXXVMWFHKNSRDTF");

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
    msg.setTimeStamp(0.62865978664);
    msg.setSource(39742U);
    msg.setSourceEntity(43U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("VBWNBTUVFHLGGLKUSZRRZSYFTGBALZPMXZEDBSXUGUPPMFWLTCUSIXDFFKOTEUWKPFSOIOGOCYKYMPTSTIIQJBVLBARSHEMXPUVMQPEIVHZJWAQJODZAITIALJOUDNHEQDIMNOVJXMEHSVPERQJWFKZYNEKCGQWZMWXJHTRHJDVCBPXDYZBCVODNYXGAKBYICMKLFWCDEKATPUWTDLNBVFNRZROLJYMCCAXSJGN");
    msg.htime = 0.96850454492;
    msg.lat = 0.111089550271;
    msg.lon = 0.40621388886;
    const char tmp_msg_0[] = {-26, -53, -6, 124, -24, -90, 102, -20, 84, -16, -76, 49, -4, 18, -85, 14, 67, -50, -120, 123, 88, 60, -32, -67, 110, -69, 78, 83, 75, -68, 99, -124};
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
    msg.setTimeStamp(0.437992877681);
    msg.setSource(39205U);
    msg.setSourceEntity(131U);
    msg.setDestination(54961U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("XAUZLWGQHAGYBLUQVRETUKKTQVAVJBHMHQOMESRGBJHPYOAWLYCHFIDKNAIKOPEDGWUFOAIBDHFCXMSWCSQOLKMEIRPCYBRWMIVOYSKSCLIKROEHHWWNEFAMWOHFDXVQGUIZGBVXUGQIPLNJFAZANGXPNEDYMVWJVPZIFDNMFYCLNJCOQEDGYTYUNPQZRADZXSJ");
    msg.htime = 0.650196339141;
    msg.lat = 0.0390405403324;
    msg.lon = 0.300938225153;
    const char tmp_msg_0[] = {-54, -90, -63, -87, -106, 79, -46, 56, -55, -67, 98, -116, 8, -87, 0, -50, 9, -11, -59, -39, 7, -113, -26, 101, 43, -63, 70};
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
    msg.setTimeStamp(0.928868518534);
    msg.setSource(52485U);
    msg.setSourceEntity(57U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("LDSNUDMTVRWKITIYZAKEIAWTRNPLDORLCFPYJASJITPGSGVHESEGAFZCEQWMXCBLNVZFLXKGGLQDYLQMZB");
    msg.htime = 0.373514974961;
    msg.lat = 0.220752598129;
    msg.lon = 0.820737413993;
    const char tmp_msg_0[] = {109, -89, 3, 53, -37, 20, -36, 38, -11, 119, 53, -110, -1, 80, 65, -87, 32, -86, -71, 63, -78, 34, 97, -94, 19, 70, 33, 22, -68, -73, -48, -110, 12, -72, 47, -121, 121, 120, -107, 102, 44, -92, 101, 33, -86, -84};
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
    msg.setTimeStamp(0.518886444299);
    msg.setSource(34510U);
    msg.setSourceEntity(4U);
    msg.setDestination(37213U);
    msg.setDestinationEntity(108U);
    msg.req_id = 18610U;
    msg.ttl = 13701U;
    msg.destination.assign("ERQZTGDOFVCYTRDXDHUGPOQWBGOIBPWNORFAIHVBLGYFDOGQZKVRMKQDYNMTZCHEJVOCRQMXDFKX");
    const char tmp_msg_0[] = {126, -102, -124, 55, -40, 20, -105, 101, -20, -79, 105, 24, -11, 39, -120, -66, -46, -87, 30, -98, 1, 109, 122, 97, 27, -17, 72, 81, -37, -90, 78, -98, -108, -46, 96, 5, -30, -83, -74, -49, -59, 85, -96, 50, 122, -58, -17, -93, 104, -44, 118, 69, -87, 79, -12, 96, 18, 125, -74, 112, -35, -25, 58, -48, 108, -104, -33, -77, 65, -22, 54, -84, 50, -12, 67, 39, -18, 5, -83, -75, 70, 48, -91, 83, -124, -86, -121, -30, -1, 63, -4, -3, -22, 8, 57, -3, 119, 68, 115, 54, 58, -40, -39, 96, -85, -73, 47, -20, 98, 54, -15, -42, 25, 73, 79, 34, 69, 115, 106, 99, -103, -124, -104, 66, 46, 116, -107, 112, -98, -6, 106, -38, -111, -75, -67, 122, 110, -15, -110, 70, -78, -62, -33, -63, 75, 30, -73, 37, -4, -14, 16, 38, -62, -48, -5, 45, -52, 42, 54, 78, 92, 70, 73, -73, 115, 44, 66, -120, -61, -37, -42, 92, 79, -123, 40, -63, 58, -95, -27, 37, 112, 99, -47, 16, 30, 91, 58, 11, -44, 36, -90, 108, 39, 18, 54, -96, -104, 55, -85, 28, 60, -46, 90, -31, -128, 14, 35, -119, 102, 47, 1, 64, 66, -30, -35, 119, -128};
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
    msg.setTimeStamp(0.546655340061);
    msg.setSource(45376U);
    msg.setSourceEntity(88U);
    msg.setDestination(47449U);
    msg.setDestinationEntity(217U);
    msg.req_id = 559U;
    msg.ttl = 16417U;
    msg.destination.assign("GBCAHHMKMLOFIOGTYRKYTMFQMMVCSVCCRKCUQUFNEPYQSCITXWGDAHWLKYJYINVHBBSHXLKOGCIETASXQAZATBBHTULQKBSHXUXWLGTXRZVXQIOVUBYUCJWVVFJAGLPKEYZXZNISXE");
    const char tmp_msg_0[] = {126, 89, 100, -51, -19, 5, 48, 12, 39, -2, 48, -2, -104, -114, 102, 38, 87, 37, 120, 19, 17, -96, -66, -102, -70, -76, -41, 41, 71, -97, -115, -108, 36, 121, 93, 66, -82, 123, -66, 19, 113, -108, -24, -92, -31, -120, 69, -28, 43, 87, -11, 84, -43, 111, -115, -91, 126, 81, 11, -79, -113, 71, -20, -55, -99, -110, 111, 20, -87, -94, -22, -114, -63, 81, -52, 31, -33, 75, 105, -23, -35, 51, 14, -22, 8, -16, -65, -98, 14, -55, 0, 51, -115, -15, -18, -51, 52, 97, -87, 119, -38, 0, -37, 63, -92, -122, 103, 9, -26, 82, 27, -12, -68, -34, 101, 105, 64, 98, -91, -90, -113, -11, 41, -79, -23, -79, -66, 113, 116, 122, -11, -39, 120, 75, -17, 112, 98, 39, -78, -110, 126, -41, 75, 20, -93, 61, 107, -47, -11, -46, -27, 7, -77, -51, 58, -46, -107, 108, -126, 49, -43, -107, -120, -30, -123, 50, 77, 22, 112, -101, 43, 85, -58, -83, 12, 114, -15, -15, -100, -86, -103, -121, 1, 42, -24, 95, 73, -13, 67, -101, -70, 115, -91, 30, 119, -36, -10, 110, 124, -115, 9, -23, 7};
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
    msg.setTimeStamp(0.607573188506);
    msg.setSource(46862U);
    msg.setSourceEntity(71U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(192U);
    msg.req_id = 63527U;
    msg.ttl = 57236U;
    msg.destination.assign("ZNMGBRXQHVDHEMPFKRWRMMUOWE");
    const char tmp_msg_0[] = {11, -40, 81, 28, 94, 104, 108, 39, -89, 76, 69, -84, -38, -9, -97, -116, 108, 95, -19, 122, 68, -95, 72, 98, -101, 83, 39, 79, -84, 115, 71, -93, 5, -13, 45, 92, 118, 110, -77, 92, -49, -82, 46, 99, 5, -25, -76, 96, 12, -101, 83, 37, -64, -48, 75, -69, -42, -99, -17, 4, 74, -36, 104, -86, 11, -20, 103, 18, -72, 121, -71, -126, 117, 21, -2, 12, 120, -117, 96, -117, -2, -61, -1, 126, -106, 74, 78, -115, 23, 5, -99, -20, 115, -117, -13, -40, 30, 10, 59, 97, -91, -104, -20, -29, 40, -13, 55, -46, 102, -87, 48, -87, -56, 10, -83, -75, 1, -105, 39, 56, 70, -23, -56, 2, -67, 110, -47, 73, 3, 26, 77, -67, 18, -118, 108, -30, 116, 39, -80, 30, 97, -14, 44, -27, 73, -89, 50, -120, 9, -35, 122, -68, 56, -72, 79, -51, -108, 22, 54, 18, -11, 97, 115, -29, 36, 88, 19, 114, -126, 20, -50, -70, -7, 112, 120, 94, 22, 42, 122, -51, 76, 65, 34, -109, 91, -40, -123, 103, -54, 47, 43, -80, -44, 65, 70, -37, -19, -106, 17, 19, -26, 79, 97, 50, 102, -122, 89, 88, -126, 74, 97, -86, -9, 24, -126, 51, 105, -17, -15, 106, 112, -76, -104, 74, 69, 2, -70, -74, 101, 98, 64, -122, -65, -108, -81, 101, -11, 30, 95, 117, -113, -96, -23, -3, -45, 1, 21, -14};
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
    msg.setTimeStamp(0.144844795037);
    msg.setSource(34987U);
    msg.setSourceEntity(125U);
    msg.setDestination(52163U);
    msg.setDestinationEntity(161U);
    msg.req_id = 45743U;
    msg.status = 123U;
    msg.text.assign("OSYUDUNLTUZNTNBQESXNMQASXGIZKGHYMTQLHWRBDSLROPXVHGPSTEJARSBXXLAJIFIBHMUOXLRPGIVZHQXKPOGIUKUOZYZFWQYKFYQKOJSWGWUEBESEMRGNTTRMRKTANVWEMIYGDPYJUVOSKUHCVDCWWZVTLRPCACPDZFBKQZADAFZMMNQJGJPIFWHOOEHCBQCHP");

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
    msg.setTimeStamp(0.717756786349);
    msg.setSource(45857U);
    msg.setSourceEntity(175U);
    msg.setDestination(38043U);
    msg.setDestinationEntity(70U);
    msg.req_id = 15325U;
    msg.status = 131U;
    msg.text.assign("WJWFUXYYSGIAZRTJTJIYXCWCPQQLYFWGKSGDEKBNCHNVAMABOXCDPUANQGOXDWQPZTFCZKABAYGRGDAIXEGPLREPYOHKRUGCHBTXRFMMFNBDQFADXSQSCAFTUOHCLFPJWIKPPMKTBQFYPHMVHIUJLRVMJXJZEIOOXJNVSATTQXWN");

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
    msg.setTimeStamp(0.599275837984);
    msg.setSource(44749U);
    msg.setSourceEntity(14U);
    msg.setDestination(31839U);
    msg.setDestinationEntity(143U);
    msg.req_id = 12221U;
    msg.status = 62U;
    msg.text.assign("VHVLZKQIMBSUMAJLRQEMNHZYTBDGQYDNEWREDRGCMFJOTBKWIMPXFEVGSCVLPHCEVOWDHPMLJNQBQJPUKTIKWZGVZBRADNGCXPSWLZRHPDVEQYFSUMEKFNOZRPJUBGYYNMI");

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
    msg.setTimeStamp(0.699901060323);
    msg.setSource(15345U);
    msg.setSourceEntity(11U);
    msg.setDestination(29034U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("CSAKRCOELINCWBNRWLGBPLHZRQMEHMOVZSAZTIFCHAWKWSIPISRPINSEWUXXHODQFSRMGGKQFGTHFGNANOYZRSCMBUBPGATNRTKMPBFJNITLPZIYSAKYDCZHDYVNJMWNMJQPJCOWMQIUWPUYEEMDZV");
    msg.links = 2084755965U;

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
    msg.setTimeStamp(0.792820694131);
    msg.setSource(36985U);
    msg.setSourceEntity(19U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("PYPHVUXLQUVBSEJQRYEHKQFUWVWTDZABKMFRBJHFYFAWLXZBVXMFZXJIHJSVFZTKZANJEBODZCQEDHPNOINRIBITSHQDKEONOTSCPYHLOVXPKLCIUOIMSTSCCNCDPRYCGKEKTNXQMRRFARNYISKOWWDECMNPJVSVGUGJOUDWTLUQXHLWEDNMIIZGBYVZTJRAFJTRRIQFZOGYQGKAMNXFQCEBKGBLEMAGTS");
    msg.links = 2137624819U;

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
    msg.setTimeStamp(0.412094530721);
    msg.setSource(37930U);
    msg.setSourceEntity(93U);
    msg.setDestination(62838U);
    msg.setDestinationEntity(206U);
    msg.group_name.assign("RQIVTWMMNHRPJTPLUVJLGBDCYAMATOXHYEVSVKPYSIMBBEBADYUXOJQTNQUHPBHFGOXIMSHCVZLFTLFDLNKYXNEPBKGTWJAUJVKFREWRTOVFFCSEXLEOMDRDEHEWDY");
    msg.links = 2284709694U;

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
    msg.setTimeStamp(0.0426543571226);
    msg.setSource(46048U);
    msg.setSourceEntity(144U);
    msg.setDestination(31679U);
    msg.setDestinationEntity(102U);
    msg.groupname.assign("DLJBDUMJPKRXKWRYDBJXXSHFWGMLUAOHOPYNLHOGZXPDBMSHEVRNYQUTNDAIAHXNKVIRZZMSTMSROWHFGYJTORMXCVZLEMVDZJBGGBSFOAWQFDNTGWCMQTLEIYCUWGYFUJSNSRWQCIBSYHQJWZHGSGHTCKUUEJKVAECLOWBLEXKINTIDXRQUKZVFOKNJTCNGPIEFLSPALEMXTKYPVYBYZXAZ");
    msg.action = 73U;
    msg.grouplist.assign("HBDOQYAQRFLKTCYNUCZHAOX");

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
    msg.setTimeStamp(0.781699256179);
    msg.setSource(48636U);
    msg.setSourceEntity(238U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(156U);
    msg.groupname.assign("VULJFKUNSXXCOEIHZWNJMHEDCMFIVWLTJEDWCYVPSTUBYJETCKDCPVASUOCPACIHVIBUP");
    msg.action = 32U;
    msg.grouplist.assign("LVKJBCRNZSKDDEBBWPAUOJQMZLPCFWLYRRDRBCJIVXSAQHKZBZNGXQICMQULNOJGXFFHWRUDEMAUFOXLLWMXSHPLEFAYNUCTGHMBDOOWIYKJWSXCGFWIWTKQASKIGGUOGPCZOIQKVDCLVOKNVSVPVZQRTADHQBNETXSXYIAISOVJUYJMPPXLKEWRNPWZYROETMAEZYQFDGMNJV");

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
    msg.setTimeStamp(0.275882737643);
    msg.setSource(60558U);
    msg.setSourceEntity(121U);
    msg.setDestination(39526U);
    msg.setDestinationEntity(53U);
    msg.groupname.assign("TMNNZIPERDAJOGTQXCYOYXITFQYWVRVUJYPWXXMUIIBZKCNRDOHAGYQHNABJBKH");
    msg.action = 27U;
    msg.grouplist.assign("MITAOCEFXRKQEOCUSNSMTKIOWGFPPISUXYBJAIUXZOUXORNPGCLCCJLDPWDEBLZRLUEGMANAFYWNTGHJZAQZCYLNLVSVGFZRSVDJTPYDHKQUPKAEMYHOPBJKXWQFKOFTMSSWGKQTJTGZEJBALYKYYZJDCERQHHXWDKHBYWQWBMARIJPTNFVHFVCGMAZNUOVINQIABLKXTZWPNXDRLVXFFLGCIGOQHMJDZUEBQUBCSDRTEMYVBIPSHIVU");

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
    msg.setTimeStamp(0.761929641074);
    msg.setSource(11845U);
    msg.setSourceEntity(14U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(66U);
    msg.value = 0.760504941861;
    msg.sys_src = 51006U;

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
    msg.setTimeStamp(0.678777019255);
    msg.setSource(24801U);
    msg.setSourceEntity(217U);
    msg.setDestination(1378U);
    msg.setDestinationEntity(23U);
    msg.value = 0.103193213265;
    msg.sys_src = 40691U;

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
    msg.setTimeStamp(0.407892803625);
    msg.setSource(44051U);
    msg.setSourceEntity(68U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(250U);
    msg.value = 0.764593245681;
    msg.sys_src = 15132U;

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
    msg.setTimeStamp(0.308142481481);
    msg.setSource(28259U);
    msg.setSourceEntity(106U);
    msg.setDestination(44947U);
    msg.setDestinationEntity(189U);
    msg.value = 0.0262728061014;
    msg.units = 224U;

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
    msg.setTimeStamp(0.846113383787);
    msg.setSource(45857U);
    msg.setSourceEntity(0U);
    msg.setDestination(33321U);
    msg.setDestinationEntity(126U);
    msg.value = 0.241278737262;
    msg.units = 18U;

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
    msg.setTimeStamp(0.481842676181);
    msg.setSource(45086U);
    msg.setSourceEntity(27U);
    msg.setDestination(60595U);
    msg.setDestinationEntity(54U);
    msg.value = 0.734168661759;
    msg.units = 81U;

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
    msg.setTimeStamp(0.746309340752);
    msg.setSource(21004U);
    msg.setSourceEntity(124U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(192U);
    msg.base_lat = 0.3644877227;
    msg.base_lon = 0.633238240256;
    msg.base_time = 0.907323119252;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 61094U;
    tmp_msg_0.destination = 3901U;
    tmp_msg_0.timeout = 0.700770067547;
    IMC::Rpm tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 12924;
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
    msg.setTimeStamp(0.478923799028);
    msg.setSource(37905U);
    msg.setSourceEntity(37U);
    msg.setDestination(1517U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.490408213623;
    msg.base_lon = 0.0599900981676;
    msg.base_time = 0.218108690125;

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
    msg.setTimeStamp(0.821490918179);
    msg.setSource(63185U);
    msg.setSourceEntity(163U);
    msg.setDestination(10885U);
    msg.setDestinationEntity(101U);
    msg.base_lat = 0.397287504793;
    msg.base_lon = 0.419470525663;
    msg.base_time = 0.0104385857753;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 13337U;
    tmp_msg_0.priority = 16;
    tmp_msg_0.x = 21829;
    tmp_msg_0.y = -25605;
    tmp_msg_0.z = 168;
    tmp_msg_0.t = 6135;
    IMC::Heartbeat tmp_tmp_msg_0_0;
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
    msg.setTimeStamp(0.609917244887);
    msg.setSource(20933U);
    msg.setSourceEntity(75U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(110U);
    msg.base_lat = 0.697333167023;
    msg.base_lon = 0.152541337768;
    msg.base_time = 0.702011829467;
    const char tmp_msg_0[] = {18, 25, 1, 65, -89, -23, -69, 32, -107, -33, -31, 1, 107, 28, 8, -102, -4, 48, -55, -45, -31, -97, -85, 79, 56, 92, 109, -127, 60, 106, 30, -98, 57, 73, -51, -38, 117, 56, -26, 57, 76, 65, 48, 42, -15, 34, -86, 41, 123, 98, -67, -36, -102, 66, 51, -5, -44, -79, 101, 61, -93, -113, -122, 3, 88, -24, 61, -28, -121, 7, -71, 103, 117, -44, 62, 63, -21, -34, 59, 31, 37, -27, 91, -34, -40, -97, -63, 10, 38, 39, 35, -38, -20, 116, 44, 112, -103, 102, 5, 64, -112, -87, 6, -90, -58, -78, 9, -102, 19, -1, -96, 120, 51, 61, -15, 69, 90, -38, -45, -17, 58, 113, 113, 87, 22, -121, -16, 72, -57, 44, -71, 100, -113, -43, -22, -38, 116, 112, -44, -58, 81, 70, 62, -104, -77, 103, 95, 23, -51, 118, 103, -20, -75, -70, 37, -63, -17, 82, -8, 31, -9, -88, -84, 47, -78, -19, -70, 18, -68, 42, -14, 58, -23, -92, 113, -48, 53, -120, -50, 88, 71, -94, 50, -103, 41, 67, 45, 85, -37, -24, -126, -19, 107, -72, -38, -43, 18, -124, -106, 2, -91, 109, 91, 109, 80, 70};
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
    msg.setTimeStamp(0.520346048862);
    msg.setSource(6702U);
    msg.setSourceEntity(185U);
    msg.setDestination(13981U);
    msg.setDestinationEntity(154U);
    msg.base_lat = 0.347296606477;
    msg.base_lon = 0.570814924806;
    msg.base_time = 0.241757499486;
    const char tmp_msg_0[] = {-125, -5, 54, 124, 44, 105, -37, 24, -70, 53, 55, -36, 90, -126, -102, 38, -57, -13, 86, 73, 32, -35, 100, 94, 1, 67, 94, 31, 118, -114, -117, -45, -40, 25, -88, -92, 36, 33, -62, 68, -67, 66, 13, 58, -20, 114, -98, -93, 123, -68, -50, 30, -24, 115, 66, -89, -126, -40, 75, -18, 95, -77, 76, 37, 104, 86, 7, -88, 76, -40, 79, -113, 118, -107, 46, -61, 51, 102, 48, -7, -111, -104, 13, 30, 27, 41};
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
    msg.setTimeStamp(0.323000659263);
    msg.setSource(26086U);
    msg.setSourceEntity(91U);
    msg.setDestination(12324U);
    msg.setDestinationEntity(171U);
    msg.base_lat = 0.850759843268;
    msg.base_lon = 0.292281417889;
    msg.base_time = 0.697151202715;
    const char tmp_msg_0[] = {41, 82, -127, -30, 9, 41, 84, 44, 15, -107, 110, 53, 0, 109, 87, 119, -79, -56, -64, -98, -128, 74, -109, 50, -70, 8, -42, -31, -60, -75, -11, -50, -51, -31, -53, -119, 120, 104, -35, -9, -16, 36, 77, -71, -103, 40, 101, 18, 43, 17, -70, 123, 77, 58, 42, -7, 22, 20, 75, 13, -116, 54, -56, 42, 52, 21, -10, -29, 114, -12, 38, 108, -41, 60, 39, 43, -10, 54, 50, -68, -44, -119, -103, -52, 35, -67, -101, -87, -84, -20, -117, -31, -60, 26, -92, 51, 43, 117, -79, 89, -38, -60, -110, -121, 0, -23, -15, 7, 105, 12, 109, 79, 61, 69, 14, -22, 105, -33, 124, 81, 101, 80, -33, 41, -16, 124, -69, 3, 99, 43, -121, 10, -25, -51, 81, -117, 54, 25, -59, 73, -101, -103, -90, -75, -84, 30, -64, -12, 76, -65, -97, 94, -41, 107, -24, -64, 27, 24, -128, 39, -97, 51, 104, 4, -109, 26, -10, -44, -72, 124, -119, 69, 122, 75, 52, 7, -3, -74, 78, 84, -52};
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
    msg.setTimeStamp(0.536470217525);
    msg.setSource(13585U);
    msg.setSourceEntity(96U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(193U);
    msg.sys_id = 26965U;
    msg.priority = 123;
    msg.x = -8221;
    msg.y = 12626;
    msg.z = 27283;
    msg.t = -7887;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.149376370662;
    tmp_msg_0.lon = 0.290438464516;
    tmp_msg_0.speed = 0.149991169302;
    tmp_msg_0.speed_units = 37U;
    tmp_msg_0.duration = 47454U;
    tmp_msg_0.sys_a = 37979U;
    tmp_msg_0.sys_b = 62225U;
    tmp_msg_0.move_threshold = 0.810692799842;
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
    msg.setTimeStamp(0.751071520902);
    msg.setSource(7237U);
    msg.setSourceEntity(4U);
    msg.setDestination(52274U);
    msg.setDestinationEntity(7U);
    msg.sys_id = 31746U;
    msg.priority = -48;
    msg.x = 22721;
    msg.y = 8420;
    msg.z = 14063;
    msg.t = 19327;
    IMC::AcousticMessage tmp_msg_0;
    IMC::Phycoerythrin tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.992929592265;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.328741295232);
    msg.setSource(28195U);
    msg.setSourceEntity(141U);
    msg.setDestination(54620U);
    msg.setDestinationEntity(90U);
    msg.sys_id = 7405U;
    msg.priority = 38;
    msg.x = -25665;
    msg.y = -16014;
    msg.z = 29526;
    msg.t = -12888;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 180U;
    tmp_msg_0.value = 188U;
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
    msg.setTimeStamp(0.411951784719);
    msg.setSource(11242U);
    msg.setSourceEntity(91U);
    msg.setDestination(60461U);
    msg.setDestinationEntity(110U);
    msg.req_id = 6628U;
    msg.type = 207U;
    msg.max_size = 1226U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.39905649238;
    tmp_msg_0.base_lon = 0.872618958681;
    tmp_msg_0.base_time = 0.499346801088;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 62700U;
    tmp_tmp_msg_0_0.priority = 123;
    tmp_tmp_msg_0_0.x = -9881;
    tmp_tmp_msg_0_0.y = -23448;
    tmp_tmp_msg_0_0.z = -12840;
    tmp_tmp_msg_0_0.t = 8003;
    IMC::FormState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.possimerr = 0.51900392409;
    tmp_tmp_tmp_msg_0_0_0.converg = 0.885837693496;
    tmp_tmp_tmp_msg_0_0_0.turbulence = 0.0560088972404;
    tmp_tmp_tmp_msg_0_0_0.possimmon = 167U;
    tmp_tmp_tmp_msg_0_0_0.commmon = 231U;
    tmp_tmp_tmp_msg_0_0_0.convergmon = 95U;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.48332259788);
    msg.setSource(11448U);
    msg.setSourceEntity(121U);
    msg.setDestination(64961U);
    msg.setDestinationEntity(232U);
    msg.req_id = 3956U;
    msg.type = 181U;
    msg.max_size = 33191U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.694496643042;
    tmp_msg_0.base_lon = 0.424895112209;
    tmp_msg_0.base_time = 0.595092104587;
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
    msg.setTimeStamp(0.926766407798);
    msg.setSource(38764U);
    msg.setSourceEntity(154U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(82U);
    msg.req_id = 41894U;
    msg.type = 230U;
    msg.max_size = 62891U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.782081261438;
    tmp_msg_0.base_lon = 0.293453238586;
    tmp_msg_0.base_time = 0.0582034604627;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 49653U;
    tmp_tmp_msg_0_0.priority = 87;
    tmp_tmp_msg_0_0.x = -24694;
    tmp_tmp_msg_0_0.y = 32454;
    tmp_tmp_msg_0_0.z = 29129;
    tmp_tmp_msg_0_0.t = -23215;
    IMC::NeptusBlob tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.content_type.assign("UTAVWHKKRMIKUFVDNTBCQIISWURGNLZAWJPKMDTSYHOJJBEXRTVJOGIPOWKSQFBCIIDFMEXUQMRSFSKLCFXOOMUFHAODYEUVYDPATANAUWSHOXWRYALTZBRVYNSHBQICQNTQEID");
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-112, 1, 110, -111, -28, -56, 10, -33, 15, 81, 2, 72, 90, -68, 79, -119, 104, 100, -127, -65, -86, 87, -40, 110, -5, -11};
    tmp_tmp_tmp_msg_0_0_0.content.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.391016014228);
    msg.setSource(28661U);
    msg.setSourceEntity(21U);
    msg.setDestination(27634U);
    msg.setDestinationEntity(142U);
    msg.original_source = 34716U;
    msg.destination = 26442U;
    msg.timeout = 0.259350202918;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.517350804193;
    tmp_msg_0.sys_src = 4374U;
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
    msg.setTimeStamp(0.0278731286981);
    msg.setSource(38074U);
    msg.setSourceEntity(209U);
    msg.setDestination(10786U);
    msg.setDestinationEntity(202U);
    msg.original_source = 31585U;
    msg.destination = 25059U;
    msg.timeout = 0.184252409175;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.frequency = 952853678U;
    tmp_msg_0.min_range = 51761U;
    tmp_msg_0.max_range = 33730U;
    tmp_msg_0.bits_per_point = 217U;
    tmp_msg_0.scale_factor = 0.118269985586;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.00203401710537;
    tmp_tmp_msg_0_0.beam_height = 0.707630747543;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-23, 107, 31, 104, -114, 109, -121, 10, -92, -99, -122, -109, -42, -9, 17, 61, 106, -62, 1, -96, -106, 12, -18, 124, -82, -89, -56, -15, 102, -87, 89, -11, -75, -11, -97, -22, -47, -56, 54, -7, -83, 75, -43, 71, 69, -110, -17, -31, 77, -48, 126};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.708836291095);
    msg.setSource(58083U);
    msg.setSourceEntity(23U);
    msg.setDestination(24510U);
    msg.setDestinationEntity(26U);
    msg.original_source = 60086U;
    msg.destination = 33538U;
    msg.timeout = 0.360792884501;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = -106;
    tmp_msg_0.value = 1098596496;
    tmp_msg_0.gain = 84U;
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
    msg.setTimeStamp(0.485633641442);
    msg.setSource(18851U);
    msg.setSourceEntity(239U);
    msg.setDestination(21180U);
    msg.setDestinationEntity(210U);
    msg.id = 196U;
    msg.range = 0.887037795404;

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
    msg.setTimeStamp(0.417042510599);
    msg.setSource(51688U);
    msg.setSourceEntity(238U);
    msg.setDestination(5834U);
    msg.setDestinationEntity(163U);
    msg.id = 191U;
    msg.range = 0.981081139703;

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
    msg.setTimeStamp(0.112432426564);
    msg.setSource(37054U);
    msg.setSourceEntity(151U);
    msg.setDestination(6399U);
    msg.setDestinationEntity(185U);
    msg.id = 137U;
    msg.range = 0.84270382118;

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
    msg.setTimeStamp(0.594216001826);
    msg.setSource(53911U);
    msg.setSourceEntity(184U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(113U);
    msg.beacon.assign("BDZYECKGSJFQLSHQGBILKTYEPOVLOUUHZJDLPVWFIZWDTMOGADEJMCHMGUITVERMBYNAEXQFOWDWJZUNFXUYSOSWI");
    msg.lat = 0.762955597644;
    msg.lon = 0.310501481761;
    msg.depth = 0.314601164511;
    msg.query_channel = 199U;
    msg.reply_channel = 165U;
    msg.transponder_delay = 14U;

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
    msg.setTimeStamp(0.964957824955);
    msg.setSource(65530U);
    msg.setSourceEntity(202U);
    msg.setDestination(34653U);
    msg.setDestinationEntity(43U);
    msg.beacon.assign("SKLCDTNNRVUIIJZCATNPQMMEBBBDVHSEEENGMXYIWBZNTHWUEVQXPULAFRGCPSARKVJUDWFPRLSDGLWKTRYHHVAMSRZTLRGECEGCBILQORUCIPMFFYQNMCOYLOJWZOYJRUTDNKLQGBUMHTEGWHKZAKOAQCPYXVUQUMOSANFIRCZYSQHPXJWKPBTZQJB");
    msg.lat = 0.909769367829;
    msg.lon = 0.900851375034;
    msg.depth = 0.349778173061;
    msg.query_channel = 226U;
    msg.reply_channel = 152U;
    msg.transponder_delay = 235U;

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
    msg.setTimeStamp(0.212171294409);
    msg.setSource(3962U);
    msg.setSourceEntity(103U);
    msg.setDestination(63962U);
    msg.setDestinationEntity(201U);
    msg.beacon.assign("GUAGVVIOARESPAHDMKLLKFSJPUDHJHGDY");
    msg.lat = 0.0367462486746;
    msg.lon = 0.296705985487;
    msg.depth = 0.647969382337;
    msg.query_channel = 62U;
    msg.reply_channel = 252U;
    msg.transponder_delay = 69U;

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
    msg.setTimeStamp(0.947155297896);
    msg.setSource(38884U);
    msg.setSourceEntity(247U);
    msg.setDestination(33024U);
    msg.setDestinationEntity(10U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.61347477111);
    msg.setSource(15116U);
    msg.setSourceEntity(93U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(193U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.406960102574);
    msg.setSource(20629U);
    msg.setSourceEntity(101U);
    msg.setDestination(24333U);
    msg.setDestinationEntity(163U);
    msg.op = 10U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MZGTESPRCDBDGAPWXARBZMFEOMCGHSCEMGCSXCYGWCNSVLZFSHAOKQXORMKCQZTAAIEBFFLJVFLRIVPKSXXCPKFYUZADWPNMJRSHPJUWTTSRRDYWLILWHHHWICQUEQBPLRLUJAWKDKZGNOTIQDOKIRNHFAMJIQKIUDBLZCENRMQJYYBUOONIGAHUTSGWVUVQNEOHTBFYQTTNJBJFMQXJUI");
    tmp_msg_0.lat = 0.838335721687;
    tmp_msg_0.lon = 0.186755389762;
    tmp_msg_0.depth = 0.617697527773;
    tmp_msg_0.query_channel = 25U;
    tmp_msg_0.reply_channel = 220U;
    tmp_msg_0.transponder_delay = 6U;
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
    msg.setTimeStamp(0.241701292396);
    msg.setSource(48792U);
    msg.setSourceEntity(144U);
    msg.setDestination(22714U);
    msg.setDestinationEntity(251U);
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 29U;
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
    msg.setTimeStamp(0.897627995068);
    msg.setSource(33301U);
    msg.setSourceEntity(60U);
    msg.setDestination(41092U);
    msg.setDestinationEntity(122U);
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("AJPFQZRWPMKHQHOZAJQFNPEIHUZTKYVWPPOBDIQBVKVBTRANPHLDGXRHWWUGYOAUBMMGMITKVRWYCMNQTCOCISBDGNPUQAITNEYDBDTNGRXVFZGYHGJBOXKXTEYDYFGFEXSNVKXSOLXSDSVELWZZAJPLUAJXEQYSBQZSARVNCRYNCIFSREZCLPRTOTHDQJUVFEMZPMDXBMSAHLHECCILLFGOBVCJCWWHLKMOMWJUIJUFE");
    tmp_msg_0.op = 50U;
    tmp_msg_0.sched_time = 0.98504317613;
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
    msg.setTimeStamp(0.183686704822);
    msg.setSource(15076U);
    msg.setSourceEntity(241U);
    msg.setDestination(55279U);
    msg.setDestinationEntity(189U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.825133322707;
    tmp_msg_0.type = 225U;
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
    msg.setTimeStamp(0.94766820063);
    msg.setSource(49669U);
    msg.setSourceEntity(173U);
    msg.setDestination(27306U);
    msg.setDestinationEntity(199U);
    msg.op = 227U;
    msg.system.assign("EXPNZYNAQPMDNZGTNRTXWQESCVGIDTCWKWHUDGFDYWTFCTXIIJHRVIMCXPRUZQBKJBDIWXNZGIPQJVFYMJNOMDYLOKLOCUYZMAPEUCIEOXZIKQYNAQPHRDMJIRHLRSOLZGLTPFKBUKEGOXFVMUDVSVHHIHBHCGWKSYSOADWUQBJCYZROEBHJSBUULYSVPQKQMJVPZFXRSKCWEEMTTXJFAFNDFTJSAXNZSENOAUL");
    msg.range = 0.471096183693;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 71U;
    tmp_msg_0.error.assign("RBTCRAXYHVDMUIAFBIWTAWAGQLRYZAAKDFHFYLPDPCSHYCNPZHMJXYEVPFWXIZDNSMZXLNSEKOLBTLVJXHXEDTVDMQJEUBFUGUQLJEEMAUWRCBOXWKNHZLNWEMGMXWQT");
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
    msg.setTimeStamp(0.0984483020699);
    msg.setSource(64147U);
    msg.setSourceEntity(48U);
    msg.setDestination(41365U);
    msg.setDestinationEntity(224U);
    msg.op = 141U;
    msg.system.assign("DPSLOOTRBNCYIVZFHOJKYQPYXHHBBOMZAWWCXVWQ");
    msg.range = 0.0182248462007;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.657033680533);
    msg.setSource(39186U);
    msg.setSourceEntity(37U);
    msg.setDestination(8462U);
    msg.setDestinationEntity(204U);
    msg.op = 249U;
    msg.system.assign("QKPPFYBLMDYYHCITIIOWKPXMRXHRE");
    msg.range = 0.0253161570724;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.648739841783;
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
    msg.setTimeStamp(0.429154963153);
    msg.setSource(43542U);
    msg.setSourceEntity(47U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.837711121013);
    msg.setSource(29734U);
    msg.setSourceEntity(205U);
    msg.setDestination(28274U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.289158750217);
    msg.setSource(64232U);
    msg.setSourceEntity(141U);
    msg.setDestination(14861U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.57288333876);
    msg.setSource(31790U);
    msg.setSourceEntity(134U);
    msg.setDestination(19881U);
    msg.setDestinationEntity(178U);
    msg.list.assign("JFSKRQFJIEZRPFTFIEKACQYABJTVURLRLIMKSYFMQLPCWKGXITZHUVWBHGDEBKXGCBNFXRSXQETOBZRYYMQWIDIENHNZDSCSJNUXZPSMGLNDEDATMUPZMJWDCPEQGVCJUCZAHNJYSKBMURGSFWYOIXDKHJKYOUTFGKLAX");

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
    msg.setTimeStamp(0.184713660964);
    msg.setSource(31642U);
    msg.setSourceEntity(47U);
    msg.setDestination(23802U);
    msg.setDestinationEntity(129U);
    msg.list.assign("PUMRQUDRWZNZDEMUNSKHASGVSRBSFVQYHXRLTGBBBEHYSAZDARVBCCWKNUMYCQSIRXVJZOTIUZOAIAYYXLRCIDTBKWVTGDLMZXNYFQYJAQVUGZIPKIEGJMFFJGFLBLGUNCHEKOTWHCDOQTDJWVSHJNFVHAHDQCOMEHROYEEFPNXARPDBLQWPTGZXFKKGKOLPYMEKBWEXBOCPXOSRZTQPSHFNWACEJLUCAUTXSMVIVZFONIWIGYUWJXQ");

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
    msg.setTimeStamp(0.297450579889);
    msg.setSource(56784U);
    msg.setSourceEntity(76U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(216U);
    msg.list.assign("GDIQWYECYYNGSAPTNIPAEMKTAGBAHIWTWWJQJTKERBQAOLHLRSXYRVZMLQPETEJULDYAIEKHFOIVVJOKRCFCYLHHBKGXJITNKRVQEWFFXOCKUGFLSPNHGYNZOQPBBZUDDLYIZBVOVMQJRRRDKDRWHFOCIMECLXZFTSCVZOVIARAKVQBB");

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
    msg.setTimeStamp(0.747177187886);
    msg.setSource(13537U);
    msg.setSourceEntity(50U);
    msg.setDestination(4140U);
    msg.setDestinationEntity(230U);
    msg.peer.assign("GXEULSUNVDVBTTNCJHKFOXRGFSROVELWDENMNZRKYBYQQMYIAVCIZFQWAARCHXVHNEXBDMVASBHAPBFPYGVTUNRZPDYATUUPFEJLQLWEBTEMIRLSSDSJCQHXIHFVKZGCPBOIGWFZWMMGZ");
    msg.rssi = 0.225979585362;
    msg.integrity = 51405U;

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
    msg.setTimeStamp(0.947362171893);
    msg.setSource(55140U);
    msg.setSourceEntity(230U);
    msg.setDestination(28996U);
    msg.setDestinationEntity(218U);
    msg.peer.assign("ULXAIGZRUAVUTBMXHQWYFOVNZAVODNDRWDAQBFDMUTEKHPXOMKXWDZCHGLKJVOEXBQCYIAAVLEDCSDISREUEDKNZOPIIQLKXJHMYWFANULMYIRHIVPASLUFUEZLBOYNSXLABCPYQHTJVTTERUGXKVRZSGXZSYODDWPCBRWOSBBTIRBKMPFQIPVFQCMWKLGINGOWPHRQFGAEJHULJTKMYEZHJOQVGWYEZFSSCJTC");
    msg.rssi = 0.390004607217;
    msg.integrity = 43016U;

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
    msg.setTimeStamp(0.0201192084856);
    msg.setSource(24554U);
    msg.setSourceEntity(237U);
    msg.setDestination(20657U);
    msg.setDestinationEntity(72U);
    msg.peer.assign("SWVXYDCUJQQSQGVHXSCKYCLKHBEUQOUIFJAIKGJAVFTECXTKKYGJBDYRPBMHKNSHJZYGEQVWRZJWLUOMFMQPGDRTCEZPPOFNDNBTJHSYOAPTIQSTNFWBBACDZMZLVMDZQZPVBDOIUMTTLGGHAZUASODJXPNRCBUHNFHRRMXVIU");
    msg.rssi = 0.244139492212;
    msg.integrity = 46845U;

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
    msg.setTimeStamp(0.123839744744);
    msg.setSource(3025U);
    msg.setSourceEntity(27U);
    msg.setDestination(22647U);
    msg.setDestinationEntity(42U);
    msg.value = -13663;

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
    msg.setTimeStamp(0.485751879228);
    msg.setSource(39569U);
    msg.setSourceEntity(246U);
    msg.setDestination(39350U);
    msg.setDestinationEntity(98U);
    msg.value = -30888;

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
    msg.setTimeStamp(0.313890075368);
    msg.setSource(44110U);
    msg.setSourceEntity(45U);
    msg.setDestination(17233U);
    msg.setDestinationEntity(10U);
    msg.value = -8010;

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
    msg.setTimeStamp(0.831570401401);
    msg.setSource(34988U);
    msg.setSourceEntity(102U);
    msg.setDestination(34428U);
    msg.setDestinationEntity(10U);
    msg.value = 0.9584069057;

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
    msg.setTimeStamp(0.177120207262);
    msg.setSource(63932U);
    msg.setSourceEntity(164U);
    msg.setDestination(47531U);
    msg.setDestinationEntity(245U);
    msg.value = 0.67774931706;

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
    msg.setTimeStamp(0.298786527925);
    msg.setSource(8609U);
    msg.setSourceEntity(25U);
    msg.setDestination(2985U);
    msg.setDestinationEntity(130U);
    msg.value = 0.344409832312;

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
    msg.setTimeStamp(0.22234089104);
    msg.setSource(19287U);
    msg.setSourceEntity(209U);
    msg.setDestination(51374U);
    msg.setDestinationEntity(135U);
    msg.value = 0.508408107168;

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
    msg.setTimeStamp(0.937817020445);
    msg.setSource(23446U);
    msg.setSourceEntity(35U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(47U);
    msg.value = 0.875102947827;

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
    msg.setTimeStamp(0.774178391598);
    msg.setSource(28497U);
    msg.setSourceEntity(127U);
    msg.setDestination(24414U);
    msg.setDestinationEntity(133U);
    msg.value = 0.335849499213;

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
    msg.setTimeStamp(0.777856721742);
    msg.setSource(43240U);
    msg.setSourceEntity(170U);
    msg.setDestination(33264U);
    msg.setDestinationEntity(224U);
    msg.validity = 63812U;
    msg.type = 48U;
    msg.utc_year = 49318U;
    msg.utc_month = 178U;
    msg.utc_day = 65U;
    msg.utc_time = 0.657601346817;
    msg.lat = 0.783147608292;
    msg.lon = 0.0991343740261;
    msg.height = 0.399824382079;
    msg.satellites = 74U;
    msg.cog = 0.872729104525;
    msg.sog = 0.821681875734;
    msg.hdop = 0.455829069347;
    msg.vdop = 0.739200298573;
    msg.hacc = 0.534246875027;
    msg.vacc = 0.274692337293;

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
    msg.setTimeStamp(0.768110507576);
    msg.setSource(15694U);
    msg.setSourceEntity(94U);
    msg.setDestination(3607U);
    msg.setDestinationEntity(130U);
    msg.validity = 36781U;
    msg.type = 169U;
    msg.utc_year = 29111U;
    msg.utc_month = 21U;
    msg.utc_day = 5U;
    msg.utc_time = 0.524933085536;
    msg.lat = 0.979887673733;
    msg.lon = 0.870550960707;
    msg.height = 0.702546108279;
    msg.satellites = 60U;
    msg.cog = 0.296434502254;
    msg.sog = 0.867966449032;
    msg.hdop = 0.409420543856;
    msg.vdop = 0.880169128005;
    msg.hacc = 0.993697136149;
    msg.vacc = 0.226932010489;

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
    msg.setTimeStamp(0.737941280295);
    msg.setSource(49377U);
    msg.setSourceEntity(180U);
    msg.setDestination(38380U);
    msg.setDestinationEntity(167U);
    msg.validity = 64481U;
    msg.type = 157U;
    msg.utc_year = 21323U;
    msg.utc_month = 91U;
    msg.utc_day = 65U;
    msg.utc_time = 0.416331982672;
    msg.lat = 0.442932466655;
    msg.lon = 0.359468275372;
    msg.height = 0.564922171071;
    msg.satellites = 77U;
    msg.cog = 0.656087590323;
    msg.sog = 0.740019559511;
    msg.hdop = 0.759775173941;
    msg.vdop = 0.666858183693;
    msg.hacc = 0.934399395448;
    msg.vacc = 0.426911034989;

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
    msg.setTimeStamp(0.667048714858);
    msg.setSource(34751U);
    msg.setSourceEntity(250U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(11U);
    msg.time = 0.213045171565;
    msg.phi = 0.296900238424;
    msg.theta = 0.608867367613;
    msg.psi = 0.64739690807;
    msg.psi_magnetic = 0.13900614542;

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
    msg.setTimeStamp(0.200915882936);
    msg.setSource(59360U);
    msg.setSourceEntity(78U);
    msg.setDestination(11824U);
    msg.setDestinationEntity(18U);
    msg.time = 0.0819963503035;
    msg.phi = 0.909535761849;
    msg.theta = 0.300624218005;
    msg.psi = 0.188372100712;
    msg.psi_magnetic = 0.322416998823;

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
    msg.setTimeStamp(0.946833763593);
    msg.setSource(4642U);
    msg.setSourceEntity(28U);
    msg.setDestination(57062U);
    msg.setDestinationEntity(86U);
    msg.time = 0.291112475547;
    msg.phi = 0.938868475212;
    msg.theta = 0.673331483981;
    msg.psi = 0.856812090039;
    msg.psi_magnetic = 0.895441409359;

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
    msg.setTimeStamp(0.909780207268);
    msg.setSource(348U);
    msg.setSourceEntity(12U);
    msg.setDestination(64526U);
    msg.setDestinationEntity(31U);
    msg.time = 0.0184735803443;
    msg.x = 0.176816889038;
    msg.y = 0.238412011678;
    msg.z = 0.4605837714;
    msg.timestep = 0.752387092706;

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
    msg.setTimeStamp(0.858651681098);
    msg.setSource(43985U);
    msg.setSourceEntity(177U);
    msg.setDestination(34545U);
    msg.setDestinationEntity(48U);
    msg.time = 0.670791588954;
    msg.x = 0.175433160704;
    msg.y = 0.273743152064;
    msg.z = 0.973357851492;
    msg.timestep = 0.26192539117;

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
    msg.setTimeStamp(0.08362478923);
    msg.setSource(14292U);
    msg.setSourceEntity(214U);
    msg.setDestination(20235U);
    msg.setDestinationEntity(129U);
    msg.time = 0.212233332208;
    msg.x = 0.941445074731;
    msg.y = 0.00409304662725;
    msg.z = 0.777181194297;
    msg.timestep = 0.309116685778;

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
    msg.setTimeStamp(0.778628698775);
    msg.setSource(32382U);
    msg.setSourceEntity(168U);
    msg.setDestination(20492U);
    msg.setDestinationEntity(146U);
    msg.time = 0.896413658104;
    msg.x = 0.979561682838;
    msg.y = 0.938752206488;
    msg.z = 0.0263952180909;

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
    msg.setTimeStamp(0.370110906754);
    msg.setSource(25587U);
    msg.setSourceEntity(34U);
    msg.setDestination(64922U);
    msg.setDestinationEntity(25U);
    msg.time = 0.893237014678;
    msg.x = 0.956370567725;
    msg.y = 0.991616949834;
    msg.z = 0.19925609253;

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
    msg.setTimeStamp(0.173341056035);
    msg.setSource(18148U);
    msg.setSourceEntity(226U);
    msg.setDestination(50488U);
    msg.setDestinationEntity(13U);
    msg.time = 0.938271387515;
    msg.x = 0.598092403707;
    msg.y = 0.709967788068;
    msg.z = 0.718197037268;

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
    msg.setTimeStamp(0.811146776402);
    msg.setSource(32807U);
    msg.setSourceEntity(43U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(147U);
    msg.time = 0.935281876999;
    msg.x = 0.525543777753;
    msg.y = 0.684004937806;
    msg.z = 0.718155560484;

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
    msg.setTimeStamp(0.675466846435);
    msg.setSource(9849U);
    msg.setSourceEntity(202U);
    msg.setDestination(7834U);
    msg.setDestinationEntity(152U);
    msg.time = 0.456077045034;
    msg.x = 0.566736339645;
    msg.y = 0.809786497699;
    msg.z = 0.6260224643;

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
    msg.setTimeStamp(0.116575725504);
    msg.setSource(28322U);
    msg.setSourceEntity(59U);
    msg.setDestination(39737U);
    msg.setDestinationEntity(123U);
    msg.time = 0.432877648899;
    msg.x = 0.34511290931;
    msg.y = 0.941370578025;
    msg.z = 0.300825244889;

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
    msg.setTimeStamp(0.861169986144);
    msg.setSource(63235U);
    msg.setSourceEntity(7U);
    msg.setDestination(314U);
    msg.setDestinationEntity(127U);
    msg.time = 0.758147674316;
    msg.x = 0.448394633707;
    msg.y = 0.797512370167;
    msg.z = 0.688470618487;

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
    msg.setTimeStamp(0.791107705338);
    msg.setSource(54995U);
    msg.setSourceEntity(181U);
    msg.setDestination(37399U);
    msg.setDestinationEntity(45U);
    msg.time = 0.0344152961402;
    msg.x = 0.790231422805;
    msg.y = 0.253458580647;
    msg.z = 0.817146808034;

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
    msg.setTimeStamp(0.854361105396);
    msg.setSource(24521U);
    msg.setSourceEntity(36U);
    msg.setDestination(36769U);
    msg.setDestinationEntity(41U);
    msg.time = 0.145115159328;
    msg.x = 0.360237630302;
    msg.y = 0.0234412341899;
    msg.z = 0.865664973751;

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
    msg.setTimeStamp(0.204901524099);
    msg.setSource(25718U);
    msg.setSourceEntity(171U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(28U);
    msg.validity = 17U;
    msg.x = 0.834746493646;
    msg.y = 0.833265441157;
    msg.z = 0.772661402455;

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
    msg.setTimeStamp(0.925765471492);
    msg.setSource(24533U);
    msg.setSourceEntity(24U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(138U);
    msg.validity = 29U;
    msg.x = 0.0305449550915;
    msg.y = 0.395698687763;
    msg.z = 0.471913653474;

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
    msg.setTimeStamp(0.569881209448);
    msg.setSource(56892U);
    msg.setSourceEntity(49U);
    msg.setDestination(61687U);
    msg.setDestinationEntity(158U);
    msg.validity = 79U;
    msg.x = 0.797766738249;
    msg.y = 0.0823345426118;
    msg.z = 0.157519368409;

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
    msg.setTimeStamp(0.640359853694);
    msg.setSource(59738U);
    msg.setSourceEntity(236U);
    msg.setDestination(8709U);
    msg.setDestinationEntity(131U);
    msg.validity = 160U;
    msg.x = 0.4428512645;
    msg.y = 0.0875140101628;
    msg.z = 0.517773120198;

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
    msg.setTimeStamp(0.587462730282);
    msg.setSource(45001U);
    msg.setSourceEntity(175U);
    msg.setDestination(11566U);
    msg.setDestinationEntity(17U);
    msg.validity = 32U;
    msg.x = 0.0631803344128;
    msg.y = 0.277384233959;
    msg.z = 0.830771302803;

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
    msg.setTimeStamp(0.351688805211);
    msg.setSource(43206U);
    msg.setSourceEntity(13U);
    msg.setDestination(41043U);
    msg.setDestinationEntity(169U);
    msg.validity = 187U;
    msg.x = 0.391510333922;
    msg.y = 0.30357031231;
    msg.z = 0.493337807637;

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
    msg.setTimeStamp(0.698523713924);
    msg.setSource(48074U);
    msg.setSourceEntity(2U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(61U);
    msg.time = 0.347802819447;
    msg.x = 0.574269528693;
    msg.y = 0.762669970142;
    msg.z = 0.769637145294;

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
    msg.setTimeStamp(0.111354773865);
    msg.setSource(35552U);
    msg.setSourceEntity(8U);
    msg.setDestination(51978U);
    msg.setDestinationEntity(29U);
    msg.time = 0.557793012178;
    msg.x = 0.603119296485;
    msg.y = 0.220802404375;
    msg.z = 0.529095147695;

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
    msg.setTimeStamp(0.693945601944);
    msg.setSource(19728U);
    msg.setSourceEntity(250U);
    msg.setDestination(62291U);
    msg.setDestinationEntity(243U);
    msg.time = 0.884400585445;
    msg.x = 0.200243518904;
    msg.y = 0.367162742694;
    msg.z = 0.838820949443;

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
    msg.setTimeStamp(0.312314667046);
    msg.setSource(16160U);
    msg.setSourceEntity(54U);
    msg.setDestination(9147U);
    msg.setDestinationEntity(204U);
    msg.validity = 28U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.196308063412;
    tmp_msg_0.y = 0.152239661673;
    tmp_msg_0.z = 0.690675678651;
    tmp_msg_0.phi = 0.614057316428;
    tmp_msg_0.theta = 0.734285273777;
    tmp_msg_0.psi = 0.226372821189;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.133293417238;
    tmp_msg_1.beam_height = 0.512722355266;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.753518951674;

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
    msg.setTimeStamp(0.285255200401);
    msg.setSource(41532U);
    msg.setSourceEntity(128U);
    msg.setDestination(43661U);
    msg.setDestinationEntity(30U);
    msg.validity = 126U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0243614129397;
    tmp_msg_0.y = 0.937015710277;
    tmp_msg_0.z = 0.0113677045919;
    tmp_msg_0.phi = 0.312569553353;
    tmp_msg_0.theta = 0.671280338389;
    tmp_msg_0.psi = 0.468312499685;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.930206943852;

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
    msg.setTimeStamp(0.11417608012);
    msg.setSource(18951U);
    msg.setSourceEntity(224U);
    msg.setDestination(705U);
    msg.setDestinationEntity(230U);
    msg.validity = 6U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.767157753314;
    tmp_msg_0.y = 0.542451214042;
    tmp_msg_0.z = 0.138427405355;
    tmp_msg_0.phi = 0.155292593013;
    tmp_msg_0.theta = 0.831669467199;
    tmp_msg_0.psi = 0.855702326594;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.966302568601;

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
    msg.setTimeStamp(0.918603844698);
    msg.setSource(6872U);
    msg.setSourceEntity(20U);
    msg.setDestination(4661U);
    msg.setDestinationEntity(138U);
    msg.value = 0.441775132498;

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
    msg.setTimeStamp(0.892702046978);
    msg.setSource(61142U);
    msg.setSourceEntity(173U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(109U);
    msg.value = 0.139800669251;

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
    msg.setTimeStamp(0.666956121131);
    msg.setSource(23087U);
    msg.setSourceEntity(16U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0589970670673;

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
    msg.setTimeStamp(0.990447971316);
    msg.setSource(4124U);
    msg.setSourceEntity(231U);
    msg.setDestination(17977U);
    msg.setDestinationEntity(56U);
    msg.value = 0.481178502157;

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
    msg.setTimeStamp(0.568141653815);
    msg.setSource(20732U);
    msg.setSourceEntity(252U);
    msg.setDestination(17926U);
    msg.setDestinationEntity(237U);
    msg.value = 0.665365025813;

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
    msg.setTimeStamp(0.708732074542);
    msg.setSource(37197U);
    msg.setSourceEntity(60U);
    msg.setDestination(58897U);
    msg.setDestinationEntity(109U);
    msg.value = 0.568429433053;

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
    msg.setTimeStamp(0.634681829246);
    msg.setSource(39515U);
    msg.setSourceEntity(95U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(97U);
    msg.value = 0.189264453751;

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
    msg.setTimeStamp(0.0338671550132);
    msg.setSource(27238U);
    msg.setSourceEntity(133U);
    msg.setDestination(64325U);
    msg.setDestinationEntity(43U);
    msg.value = 0.881982301349;

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
    msg.setTimeStamp(0.0832864500622);
    msg.setSource(61443U);
    msg.setSourceEntity(20U);
    msg.setDestination(36902U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0351907701446;

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
    msg.setTimeStamp(0.25423758245);
    msg.setSource(21900U);
    msg.setSourceEntity(90U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(217U);
    msg.value = 0.621967626663;

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
    msg.setTimeStamp(0.803032108188);
    msg.setSource(3501U);
    msg.setSourceEntity(242U);
    msg.setDestination(47916U);
    msg.setDestinationEntity(209U);
    msg.value = 0.359023344634;

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
    msg.setTimeStamp(0.830893862414);
    msg.setSource(7701U);
    msg.setSourceEntity(246U);
    msg.setDestination(44581U);
    msg.setDestinationEntity(52U);
    msg.value = 0.873864556792;

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
    msg.setTimeStamp(0.591130641351);
    msg.setSource(19987U);
    msg.setSourceEntity(94U);
    msg.setDestination(26006U);
    msg.setDestinationEntity(68U);
    msg.value = 0.31025211486;

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
    msg.setTimeStamp(0.344571980585);
    msg.setSource(57859U);
    msg.setSourceEntity(123U);
    msg.setDestination(65443U);
    msg.setDestinationEntity(62U);
    msg.value = 0.557368970952;

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
    msg.setTimeStamp(0.609103055903);
    msg.setSource(37820U);
    msg.setSourceEntity(202U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(18U);
    msg.value = 0.234809029925;

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
    msg.setTimeStamp(0.28864629543);
    msg.setSource(29739U);
    msg.setSourceEntity(155U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0704846484584;

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
    msg.setTimeStamp(0.82924075488);
    msg.setSource(60006U);
    msg.setSourceEntity(99U);
    msg.setDestination(55719U);
    msg.setDestinationEntity(2U);
    msg.value = 0.199060597825;

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
    msg.setTimeStamp(0.174963078294);
    msg.setSource(19409U);
    msg.setSourceEntity(1U);
    msg.setDestination(17160U);
    msg.setDestinationEntity(179U);
    msg.value = 0.239598346367;

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
    msg.setTimeStamp(0.428730972358);
    msg.setSource(21417U);
    msg.setSourceEntity(243U);
    msg.setDestination(16810U);
    msg.setDestinationEntity(218U);
    msg.value = 0.635509014655;

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
    msg.setTimeStamp(0.457697112758);
    msg.setSource(53846U);
    msg.setSourceEntity(72U);
    msg.setDestination(30408U);
    msg.setDestinationEntity(72U);
    msg.value = 0.54396228872;

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
    msg.setTimeStamp(0.172049287308);
    msg.setSource(56301U);
    msg.setSourceEntity(89U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(235U);
    msg.value = 0.924822235363;

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
    msg.setTimeStamp(0.452096669067);
    msg.setSource(40508U);
    msg.setSourceEntity(9U);
    msg.setDestination(39452U);
    msg.setDestinationEntity(229U);
    msg.value = 0.783807548366;

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
    msg.setTimeStamp(0.914263503741);
    msg.setSource(1409U);
    msg.setSourceEntity(247U);
    msg.setDestination(11124U);
    msg.setDestinationEntity(46U);
    msg.value = 0.969478287189;

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
    msg.setTimeStamp(0.844770843598);
    msg.setSource(30171U);
    msg.setSourceEntity(210U);
    msg.setDestination(13071U);
    msg.setDestinationEntity(116U);
    msg.value = 0.683168775539;

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
    msg.setTimeStamp(0.316307662887);
    msg.setSource(12781U);
    msg.setSourceEntity(46U);
    msg.setDestination(30286U);
    msg.setDestinationEntity(98U);
    msg.direction = 0.871802457084;
    msg.speed = 0.680737037029;
    msg.turbulence = 0.0355916845875;

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
    msg.setTimeStamp(0.22154514598);
    msg.setSource(25797U);
    msg.setSourceEntity(109U);
    msg.setDestination(54942U);
    msg.setDestinationEntity(86U);
    msg.direction = 0.0635334778219;
    msg.speed = 0.88733561273;
    msg.turbulence = 0.838869192426;

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
    msg.setTimeStamp(0.956885669576);
    msg.setSource(36002U);
    msg.setSourceEntity(192U);
    msg.setDestination(56112U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.0165358023276;
    msg.speed = 0.699662550419;
    msg.turbulence = 0.348003867867;

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
    msg.setTimeStamp(0.4879676812);
    msg.setSource(11448U);
    msg.setSourceEntity(247U);
    msg.setDestination(11792U);
    msg.setDestinationEntity(133U);
    msg.value = 0.485020756405;

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
    msg.setTimeStamp(0.945868786849);
    msg.setSource(47361U);
    msg.setSourceEntity(249U);
    msg.setDestination(51530U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0611910148661;

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
    msg.setTimeStamp(0.814142047583);
    msg.setSource(33025U);
    msg.setSourceEntity(243U);
    msg.setDestination(35955U);
    msg.setDestinationEntity(55U);
    msg.value = 0.563285209136;

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
    msg.setTimeStamp(0.631331760294);
    msg.setSource(30894U);
    msg.setSourceEntity(187U);
    msg.setDestination(15229U);
    msg.setDestinationEntity(248U);
    msg.value.assign("ZXAMKGHLRHBLQSJESTTDPXMCUZQQKRLKWLINQDTWVMIVGWZNHYFCVZBPTUEVKYAGEFDMUQYQUPCSJZWDZVSSYNAJXPIIVHJKXFGSHUGLENISPP");

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
    msg.setTimeStamp(0.208452453547);
    msg.setSource(41502U);
    msg.setSourceEntity(226U);
    msg.setDestination(20290U);
    msg.setDestinationEntity(236U);
    msg.value.assign("GEOMGWZWUODRFPGDLAKQADFZFWNTPIGXPHICUWJJNVILCLIGWQOSHYUBYVRLTLGHYMVVSREKWQXDNHERUDBDOVJOYBSRBFVKLMAWFTHAJQQNRSZAWBHPJAKRJCVRGKCXULPTIOHCCPKPUKFJSFZTC");

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
    msg.setTimeStamp(0.886483420796);
    msg.setSource(6621U);
    msg.setSourceEntity(182U);
    msg.setDestination(26456U);
    msg.setDestinationEntity(193U);
    msg.value.assign("QVQYJEPJILUCXWBXBWFRWSAKJNZXGKSGUWBFDJBVCJURMQWSUJYRXQHTDNGYSCIAQOCTORFLMCQPDFMB");

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
    msg.setTimeStamp(0.941040399093);
    msg.setSource(21998U);
    msg.setSourceEntity(8U);
    msg.setDestination(29153U);
    msg.setDestinationEntity(241U);
    const char tmp_msg_0[] = {-62, 56, -91, 51, 94, -76, 72, -30, -72, 105, 79, 62, -115, 95, 8, 87, 5, 61, 53, 0, 5, -34, -27, -68, 95, -122, 113, 87, 32, 76, 42, -17, 11, -67, 87, 64, 82, 90, -20, 72, -43, -96, 113, 46, 57, -114, 51, -4, 17, 105, 52, 38, 31, 118, 36, 6, 20, 80, 31, 25, -61, -107, 23, -96, 35, -102, 33, 16, -91, 71, 40, 43, 2, -5, -89, -69, -31, -33, -80, 58, 87, 88, 79, -126, -17, -60, -74, -88, -54, -105, -61, 18, 53, 16, 42, -34, 103, -102, 103, -59, 80, 107, -18, -74, -25, -117, 55, -84, -40, 33, 63, 100, -2, 17, -70, -72, -43, 89, -59, 48, -32, -10, 81, -71, 102, 122, 21, -71, -58, 2, -1, 41, 62, 25, 81, 14, 58, -18, -93, 106, -103, -27, 49, 67, 71, -81, 53, 80, 104, -89, 111, -59, 89, 67, 123, -41, 30, -96, 92, -45, 43, 37, 32, -58, -79, 31, -117, 75, -78, -115, 66, 12, -107, 14, -120, -5, -1, 60, 108, 120, 22, -31, 83, -76, -109};
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
    msg.setTimeStamp(0.492903831323);
    msg.setSource(53314U);
    msg.setSourceEntity(143U);
    msg.setDestination(39433U);
    msg.setDestinationEntity(15U);
    const char tmp_msg_0[] = {-45, 117, -116, -70, -113, 40, -17, -54, -99, 90, 0, 122, 78, -61, 122, 45, -1, 75, 49, -24, 61, 68, 2, 1, -22, -53, 82, -22, -36, 53, -104, -43, -104, -66, 107, 27, 19, 49, 1, -79, -80, -17, -66, 76, -85, -78, 80, 56, 69, 26, 54, -34, 84, 124, 33, 107, 18, -36, 118, -33, 93, -37, -45, 65, -4, -81, -34, -94, 18, 37, -51, 89, -8, -43, 2, 102, 28, -93, -122, 53, 105, 101, 90, -115, -125, 55, 104, -118, -15, -109, -104, 125, -51, -23, -127, 106, 118, 66, -10, 64, 77, 20, 74, 91, -43, 101, -60, 21, 16, 102, 94, 118, 27, -99, 82, 70, -3, -128, 36};
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
    msg.setTimeStamp(0.370403309138);
    msg.setSource(19158U);
    msg.setSourceEntity(37U);
    msg.setDestination(40725U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {23, -57, 49, -46, -39, -92, 7, -107, 3, 104, 96, -5, 11, -15, -48, 15, -87, 96, 71, 1, 120, -95, 21, 75, 75, -25, 122, 68, 118, -37, 62, 82, -55, 90, 9, 53, -61, -124, -43, -31, 73, 57, -64, 32, -31, -3, -127, -46, 60, -98, 101, 73, -22, -80, 65, -83, 74, 18, 85, -107, 103, -7, -53, 57, 71, -13, -15, 60, -108, 27, -81, -23, 0, -19, 32, -54, -112, -73, -64, -36, -31, 26, 46, 105, 126, 22, -46, 68, 122, 29, 121, -79, -128, 104, 111, -120, 85, 46, 110, -14, 7, 74, 125, -26, 20, -20, -43, -32, -54, -52, 120, -7, 13, 17, -95, 48, -122, -73, -126, -121, -4, -61, 107, 113, -24, 19, 67, -102, 49, 115, -22, 46, 12, 46, 12, 80, -60, 104, 32, -93, -79, -55, -105, -82, 96, 52, 41, 84, 59, -43, -96, -103, -3, 15, 76, 71, 63, -45, -2, -72, -108, 94, -80, 30, -92, -45, 17, 120, -115, 21, -33, 76, -40, 82, 2, -122, 80, -18, -53, -78, 10, 110, -101, -26, -57, -34, 71, 119, 125, 5, -54, 21, -89, -29, 122, 42, 58, -3, -83, -85, 16, 23, 78, 63, 64, 60, -117, -12, 100, 90, -42, 61, -5, -9, -98, -8, 96, 30, -72, 16, 63, -67, 29, -45};
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
    msg.setTimeStamp(0.270010834625);
    msg.setSource(60346U);
    msg.setSourceEntity(175U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(41U);
    msg.value = 0.328349382884;

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
    msg.setTimeStamp(0.24178908367);
    msg.setSource(49468U);
    msg.setSourceEntity(172U);
    msg.setDestination(29363U);
    msg.setDestinationEntity(159U);
    msg.value = 0.565942605997;

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
    msg.setTimeStamp(0.815864593839);
    msg.setSource(39166U);
    msg.setSourceEntity(189U);
    msg.setDestination(9147U);
    msg.setDestinationEntity(121U);
    msg.value = 0.296930718551;

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
    msg.setTimeStamp(0.570943310681);
    msg.setSource(26719U);
    msg.setSourceEntity(202U);
    msg.setDestination(51385U);
    msg.setDestinationEntity(79U);
    msg.type = 216U;
    msg.frequency = 2309905054U;
    msg.min_range = 26356U;
    msg.max_range = 7436U;
    msg.bits_per_point = 106U;
    msg.scale_factor = 0.506364688504;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.258958797283;
    tmp_msg_0.beam_height = 0.386190292261;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {3, -13, 29, -53, -102, -78, -119, 77, -111, -46, 2, -67, -99, -39, 79, -17, 70, 60, 64, 47, 115, 86, 48, 48, 31, -28, -59, -5, -6, -46, -74, -89, -110, 32, -62, 53, 4, 94, 76, 4, 25, 125, 4, -71, -60, 47, 95, -76, -124, -73, -84, -98, -45, -118, -72, -70, -44, 75, -31, 90, 24, -24, -23, 47, -49, -80, -53, 36, -102, 102, -117, -63, -53, 114, -14, -3, 84, 21, -58, -4, 78, -34, 46, -1, -21, -42, -106};
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
    msg.setTimeStamp(0.827435609292);
    msg.setSource(42307U);
    msg.setSourceEntity(234U);
    msg.setDestination(53478U);
    msg.setDestinationEntity(106U);
    msg.type = 128U;
    msg.frequency = 198230386U;
    msg.min_range = 64636U;
    msg.max_range = 21144U;
    msg.bits_per_point = 4U;
    msg.scale_factor = 0.0774320226689;
    const char tmp_msg_0[] = {60, 58, -12, -103, 54, 99, 105, -18, 97, -47, -41, 1, -119, -90, -108, -68, -92, -31, -118, 27, 86};
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
    msg.setTimeStamp(0.172427596345);
    msg.setSource(39064U);
    msg.setSourceEntity(205U);
    msg.setDestination(30314U);
    msg.setDestinationEntity(128U);
    msg.type = 86U;
    msg.frequency = 1429157387U;
    msg.min_range = 17316U;
    msg.max_range = 64111U;
    msg.bits_per_point = 117U;
    msg.scale_factor = 0.425027424022;
    const char tmp_msg_0[] = {-89, 29, -48, -31, -38, -114, 70, -68, -84, 85, -125, 52, -77, 13, 116, 106, -51, -20, 84, -87, -90, -123, -39, 31, 7};
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
    msg.setTimeStamp(0.779084524689);
    msg.setSource(60254U);
    msg.setSourceEntity(93U);
    msg.setDestination(44937U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.116827247006);
    msg.setSource(62756U);
    msg.setSourceEntity(209U);
    msg.setDestination(54545U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.383286558609);
    msg.setSource(16723U);
    msg.setSourceEntity(17U);
    msg.setDestination(16221U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.976100270519);
    msg.setSource(8836U);
    msg.setSourceEntity(8U);
    msg.setDestination(34360U);
    msg.setDestinationEntity(47U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.714487846001);
    msg.setSource(1486U);
    msg.setSourceEntity(120U);
    msg.setDestination(28992U);
    msg.setDestinationEntity(146U);
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
    msg.setTimeStamp(0.854025913528);
    msg.setSource(17470U);
    msg.setSourceEntity(172U);
    msg.setDestination(48816U);
    msg.setDestinationEntity(155U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.168556148304);
    msg.setSource(16797U);
    msg.setSourceEntity(167U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(231U);
    msg.value = 0.360647741597;
    msg.confidence = 0.967122813829;
    msg.opmodes.assign("GPHFIXMEKWBPZXBCWBZVKZPSU");

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
    msg.setTimeStamp(0.873467407039);
    msg.setSource(44111U);
    msg.setSourceEntity(91U);
    msg.setDestination(16687U);
    msg.setDestinationEntity(78U);
    msg.value = 0.100755014987;
    msg.confidence = 0.169055764303;
    msg.opmodes.assign("XKIFVVSSHSYHTDKVZHMETMNNWMSAKAIHNMPZHACNSUYXEQEVQDKFCUYYJWXTFWSIJFYRUFVBLFMUNVBLOAGZOYNKPGMRPLSETKWPNZBITCAGHCJMIIGUCRAQWWKKVLRBXOQIOZYFKBZWXLACLGGCRTYHI");

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
    msg.setTimeStamp(0.527009419698);
    msg.setSource(54722U);
    msg.setSourceEntity(123U);
    msg.setDestination(61033U);
    msg.setDestinationEntity(231U);
    msg.value = 0.105314338069;
    msg.confidence = 0.824754516648;
    msg.opmodes.assign("OJZAPYWZVUQIXEFTMZYRSBOPYEVTHMPQKBWQYUEXCYPWSDKOHNEEVDCUMCFXIIATFMYXNDNRWVCCQDBKUNCJXEWGDOZBSNKFTXLMRNCLKFGAQIETGBRZDJVOUQBLGVFUVTHJGDTWLSKBVZAAWFHFMXMYKJ");

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
    msg.setTimeStamp(0.936516146745);
    msg.setSource(24945U);
    msg.setSourceEntity(50U);
    msg.setDestination(37407U);
    msg.setDestinationEntity(58U);
    msg.itow = 700268534U;
    msg.lat = 0.588143394535;
    msg.lon = 0.380994387875;
    msg.height_ell = 0.914849244884;
    msg.height_sea = 0.239649746358;
    msg.hacc = 0.923966340185;
    msg.vacc = 0.967293266789;
    msg.vel_n = 0.77279005454;
    msg.vel_e = 0.692598180996;
    msg.vel_d = 0.167130203021;
    msg.speed = 0.296556607317;
    msg.gspeed = 0.904988513973;
    msg.heading = 0.692155465502;
    msg.sacc = 0.23816551558;
    msg.cacc = 0.668882774498;

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
    msg.setTimeStamp(0.169376913387);
    msg.setSource(46594U);
    msg.setSourceEntity(195U);
    msg.setDestination(15187U);
    msg.setDestinationEntity(68U);
    msg.itow = 2632477570U;
    msg.lat = 0.392917158562;
    msg.lon = 0.612920836975;
    msg.height_ell = 0.00699520489754;
    msg.height_sea = 0.422846494137;
    msg.hacc = 0.16056657632;
    msg.vacc = 0.579249057285;
    msg.vel_n = 0.316394647614;
    msg.vel_e = 0.145468260757;
    msg.vel_d = 0.163879202674;
    msg.speed = 0.947842008759;
    msg.gspeed = 0.0206276635761;
    msg.heading = 0.383928674506;
    msg.sacc = 0.302358582529;
    msg.cacc = 0.512248188848;

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
    msg.setTimeStamp(0.584967549904);
    msg.setSource(38606U);
    msg.setSourceEntity(221U);
    msg.setDestination(30148U);
    msg.setDestinationEntity(76U);
    msg.itow = 3966994652U;
    msg.lat = 0.261975030295;
    msg.lon = 0.0988245528793;
    msg.height_ell = 0.200095788115;
    msg.height_sea = 0.614135149118;
    msg.hacc = 0.943442449867;
    msg.vacc = 0.329928878254;
    msg.vel_n = 0.028557144036;
    msg.vel_e = 0.665471446462;
    msg.vel_d = 0.498268562537;
    msg.speed = 0.643946881782;
    msg.gspeed = 0.258756362274;
    msg.heading = 0.510490794654;
    msg.sacc = 0.177523372812;
    msg.cacc = 0.241695220173;

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
    msg.setTimeStamp(0.094846751282);
    msg.setSource(54906U);
    msg.setSourceEntity(35U);
    msg.setDestination(58312U);
    msg.setDestinationEntity(43U);
    msg.id = 24U;
    msg.value = 0.907797393831;

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
    msg.setTimeStamp(0.491774036473);
    msg.setSource(44210U);
    msg.setSourceEntity(94U);
    msg.setDestination(57828U);
    msg.setDestinationEntity(95U);
    msg.id = 121U;
    msg.value = 0.715064063231;

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
    msg.setTimeStamp(0.811763339809);
    msg.setSource(36138U);
    msg.setSourceEntity(158U);
    msg.setDestination(7379U);
    msg.setDestinationEntity(206U);
    msg.id = 140U;
    msg.value = 0.602351973185;

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
    msg.setTimeStamp(0.474951280353);
    msg.setSource(8049U);
    msg.setSourceEntity(217U);
    msg.setDestination(20545U);
    msg.setDestinationEntity(152U);
    msg.x = 0.0687459876449;
    msg.y = 0.741244713002;
    msg.z = 0.400806456898;
    msg.phi = 0.316712221825;
    msg.theta = 0.807255786188;
    msg.psi = 0.00637965897977;

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
    msg.setTimeStamp(0.913593286153);
    msg.setSource(15503U);
    msg.setSourceEntity(203U);
    msg.setDestination(5883U);
    msg.setDestinationEntity(194U);
    msg.x = 0.123626144264;
    msg.y = 0.731771686338;
    msg.z = 0.573536026625;
    msg.phi = 0.299736777412;
    msg.theta = 0.131432236113;
    msg.psi = 0.0505662549458;

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
    msg.setTimeStamp(0.189414983936);
    msg.setSource(36345U);
    msg.setSourceEntity(84U);
    msg.setDestination(21695U);
    msg.setDestinationEntity(172U);
    msg.x = 0.641776388889;
    msg.y = 0.718686759186;
    msg.z = 0.324813110191;
    msg.phi = 0.0275300225818;
    msg.theta = 0.866924089029;
    msg.psi = 0.31542200871;

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
    msg.setTimeStamp(0.278860434996);
    msg.setSource(32822U);
    msg.setSourceEntity(132U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(201U);
    msg.beam_width = 0.45795932802;
    msg.beam_height = 0.758692576635;

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
    msg.setTimeStamp(0.638876958919);
    msg.setSource(450U);
    msg.setSourceEntity(123U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(155U);
    msg.beam_width = 0.361301663188;
    msg.beam_height = 0.769976177855;

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
    msg.setTimeStamp(0.315709250081);
    msg.setSource(45344U);
    msg.setSourceEntity(244U);
    msg.setDestination(12420U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.271667990903;
    msg.beam_height = 0.257341931054;

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
    msg.setTimeStamp(0.0620214819297);
    msg.setSource(6116U);
    msg.setSourceEntity(126U);
    msg.setDestination(25274U);
    msg.setDestinationEntity(138U);
    msg.sane = 210U;

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
    msg.setTimeStamp(0.0985740484343);
    msg.setSource(61724U);
    msg.setSourceEntity(214U);
    msg.setDestination(60234U);
    msg.setDestinationEntity(107U);
    msg.sane = 179U;

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
    msg.setTimeStamp(0.425788644268);
    msg.setSource(39891U);
    msg.setSourceEntity(51U);
    msg.setDestination(53526U);
    msg.setDestinationEntity(35U);
    msg.sane = 52U;

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
    msg.setTimeStamp(0.650811241776);
    msg.setSource(47576U);
    msg.setSourceEntity(101U);
    msg.setDestination(34074U);
    msg.setDestinationEntity(142U);
    msg.value = 0.779251872341;

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
    msg.setTimeStamp(0.397729121847);
    msg.setSource(45469U);
    msg.setSourceEntity(239U);
    msg.setDestination(45680U);
    msg.setDestinationEntity(177U);
    msg.value = 0.653452538342;

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
    msg.setTimeStamp(0.469881958567);
    msg.setSource(14568U);
    msg.setSourceEntity(1U);
    msg.setDestination(1010U);
    msg.setDestinationEntity(43U);
    msg.value = 0.295486936469;

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
    msg.setTimeStamp(0.122377468632);
    msg.setSource(7288U);
    msg.setSourceEntity(90U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(220U);
    msg.value = 0.556493865829;

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
    msg.setTimeStamp(0.0714954393787);
    msg.setSource(49403U);
    msg.setSourceEntity(59U);
    msg.setDestination(48726U);
    msg.setDestinationEntity(91U);
    msg.value = 0.377511322345;

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
    msg.setTimeStamp(0.263217484571);
    msg.setSource(60946U);
    msg.setSourceEntity(14U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(228U);
    msg.value = 0.92368735374;

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
    msg.setTimeStamp(0.563127502294);
    msg.setSource(63119U);
    msg.setSourceEntity(213U);
    msg.setDestination(30109U);
    msg.setDestinationEntity(63U);
    msg.value = 0.12541411803;

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
    msg.setTimeStamp(0.601087217481);
    msg.setSource(31079U);
    msg.setSourceEntity(202U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(203U);
    msg.value = 0.782968301692;

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
    msg.setTimeStamp(0.830211242191);
    msg.setSource(43586U);
    msg.setSourceEntity(138U);
    msg.setDestination(52592U);
    msg.setDestinationEntity(94U);
    msg.value = 0.744456824264;

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
    msg.setTimeStamp(0.0220394487578);
    msg.setSource(46500U);
    msg.setSourceEntity(20U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(253U);
    msg.value = 0.82147396516;

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
    msg.setTimeStamp(0.775525266926);
    msg.setSource(64639U);
    msg.setSourceEntity(253U);
    msg.setDestination(11668U);
    msg.setDestinationEntity(146U);
    msg.value = 0.0894778710181;

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
    msg.setTimeStamp(0.721364451814);
    msg.setSource(22649U);
    msg.setSourceEntity(11U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(120U);
    msg.value = 0.675935655988;

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
    msg.setTimeStamp(0.62485489247);
    msg.setSource(15166U);
    msg.setSourceEntity(116U);
    msg.setDestination(27070U);
    msg.setDestinationEntity(92U);
    msg.value = 0.598368270291;

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
    msg.setTimeStamp(0.208510628967);
    msg.setSource(6105U);
    msg.setSourceEntity(177U);
    msg.setDestination(37738U);
    msg.setDestinationEntity(110U);
    msg.value = 0.152086109202;

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
    msg.setTimeStamp(0.947370695101);
    msg.setSource(40404U);
    msg.setSourceEntity(150U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(242U);
    msg.value = 0.0532752186149;

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
    msg.setTimeStamp(0.188647799404);
    msg.setSource(3571U);
    msg.setSourceEntity(39U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(150U);
    msg.value = 0.296782852989;

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
    msg.setTimeStamp(0.725223322803);
    msg.setSource(44896U);
    msg.setSourceEntity(122U);
    msg.setDestination(6797U);
    msg.setDestinationEntity(178U);
    msg.value = 0.817562886975;

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
    msg.setTimeStamp(0.0833487113712);
    msg.setSource(4999U);
    msg.setSourceEntity(160U);
    msg.setDestination(6336U);
    msg.setDestinationEntity(117U);
    msg.value = 0.530623896431;

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
    msg.setTimeStamp(0.679508242823);
    msg.setSource(29215U);
    msg.setSourceEntity(143U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(116U);
    msg.value = 0.393612447781;

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
    msg.setTimeStamp(0.356594107585);
    msg.setSource(21316U);
    msg.setSourceEntity(69U);
    msg.setDestination(12012U);
    msg.setDestinationEntity(127U);
    msg.value = 0.416349512392;

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
    msg.setTimeStamp(0.168863216459);
    msg.setSource(36610U);
    msg.setSourceEntity(3U);
    msg.setDestination(34088U);
    msg.setDestinationEntity(182U);
    msg.value = 0.448512339825;

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
    msg.setTimeStamp(0.776203423439);
    msg.setSource(27658U);
    msg.setSourceEntity(72U);
    msg.setDestination(52273U);
    msg.setDestinationEntity(155U);
    msg.value = 0.876609207744;

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
    msg.setTimeStamp(0.908343563735);
    msg.setSource(15204U);
    msg.setSourceEntity(47U);
    msg.setDestination(63534U);
    msg.setDestinationEntity(15U);
    msg.value = 0.671857288063;

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
    msg.setTimeStamp(0.67237109432);
    msg.setSource(7888U);
    msg.setSourceEntity(210U);
    msg.setDestination(64221U);
    msg.setDestinationEntity(26U);
    msg.value = 0.208515930001;

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
    msg.setTimeStamp(0.938717679606);
    msg.setSource(48876U);
    msg.setSourceEntity(112U);
    msg.setDestination(19282U);
    msg.setDestinationEntity(103U);
    msg.validity = 35681U;
    msg.type = 6U;
    msg.tow = 1849136583U;
    msg.base_lat = 0.2410397034;
    msg.base_lon = 0.071345614718;
    msg.base_height = 0.883326832746;
    msg.n = 0.134542975256;
    msg.e = 0.42005416165;
    msg.d = 0.111016438934;
    msg.v_n = 0.779349611969;
    msg.v_e = 0.2941420476;
    msg.v_d = 0.132857478953;
    msg.satellites = 174U;
    msg.iar_hyp = 63986U;
    msg.iar_ratio = 0.311464120833;

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
    msg.setTimeStamp(0.245019038203);
    msg.setSource(64091U);
    msg.setSourceEntity(54U);
    msg.setDestination(29316U);
    msg.setDestinationEntity(87U);
    msg.validity = 30435U;
    msg.type = 24U;
    msg.tow = 2716336482U;
    msg.base_lat = 0.445913292721;
    msg.base_lon = 0.802886810803;
    msg.base_height = 0.607353785442;
    msg.n = 0.504033698898;
    msg.e = 0.939588795122;
    msg.d = 0.498594362902;
    msg.v_n = 0.719330981263;
    msg.v_e = 0.498985312354;
    msg.v_d = 0.237608095547;
    msg.satellites = 55U;
    msg.iar_hyp = 43701U;
    msg.iar_ratio = 0.206352372666;

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
    msg.setTimeStamp(0.0308549501369);
    msg.setSource(60456U);
    msg.setSourceEntity(249U);
    msg.setDestination(46873U);
    msg.setDestinationEntity(156U);
    msg.validity = 13967U;
    msg.type = 7U;
    msg.tow = 3701765930U;
    msg.base_lat = 0.941113590477;
    msg.base_lon = 0.791735837335;
    msg.base_height = 0.386786066718;
    msg.n = 0.831846116963;
    msg.e = 0.732937929861;
    msg.d = 0.14364086079;
    msg.v_n = 0.244085348394;
    msg.v_e = 0.119028558331;
    msg.v_d = 0.967904664305;
    msg.satellites = 206U;
    msg.iar_hyp = 58710U;
    msg.iar_ratio = 0.944811306186;

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
    msg.setTimeStamp(0.971509789542);
    msg.setSource(49023U);
    msg.setSourceEntity(141U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(79U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.720129442732;
    tmp_msg_0.lon = 0.89118775022;
    tmp_msg_0.height = 0.458782890364;
    tmp_msg_0.x = 0.693685245355;
    tmp_msg_0.y = 0.0855423127457;
    tmp_msg_0.z = 0.320716922907;
    tmp_msg_0.phi = 0.984287073545;
    tmp_msg_0.theta = 0.426175442786;
    tmp_msg_0.psi = 0.44902439847;
    tmp_msg_0.u = 0.905316219252;
    tmp_msg_0.v = 0.123258346067;
    tmp_msg_0.w = 0.576118607945;
    tmp_msg_0.vx = 0.244104960783;
    tmp_msg_0.vy = 0.584515716077;
    tmp_msg_0.vz = 0.851420550601;
    tmp_msg_0.p = 0.148385297917;
    tmp_msg_0.q = 0.204878083739;
    tmp_msg_0.r = 0.752046509311;
    tmp_msg_0.depth = 0.54681481311;
    tmp_msg_0.alt = 0.0987376531541;
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
    msg.setTimeStamp(0.632606560701);
    msg.setSource(34857U);
    msg.setSourceEntity(83U);
    msg.setDestination(27915U);
    msg.setDestinationEntity(95U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.942746206968;
    tmp_msg_0.lon = 0.000163353677382;
    tmp_msg_0.height = 0.989648529734;
    tmp_msg_0.x = 0.125914873589;
    tmp_msg_0.y = 0.140206005865;
    tmp_msg_0.z = 0.497511899119;
    tmp_msg_0.phi = 0.102188542469;
    tmp_msg_0.theta = 0.430078310768;
    tmp_msg_0.psi = 0.0163424957211;
    tmp_msg_0.u = 0.649716025339;
    tmp_msg_0.v = 0.327782970664;
    tmp_msg_0.w = 0.0343429102835;
    tmp_msg_0.vx = 0.85137472758;
    tmp_msg_0.vy = 0.728189555978;
    tmp_msg_0.vz = 0.199255271449;
    tmp_msg_0.p = 0.612163505824;
    tmp_msg_0.q = 0.691873373661;
    tmp_msg_0.r = 0.486463048529;
    tmp_msg_0.depth = 0.0200364895984;
    tmp_msg_0.alt = 0.143298998303;
    msg.state.set(tmp_msg_0);
    msg.type = 189U;

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
    msg.setTimeStamp(0.627658804279);
    msg.setSource(52362U);
    msg.setSourceEntity(111U);
    msg.setDestination(12105U);
    msg.setDestinationEntity(125U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.602174177523;
    tmp_msg_0.lon = 0.711956191529;
    tmp_msg_0.height = 0.376928771147;
    tmp_msg_0.x = 0.604714365057;
    tmp_msg_0.y = 0.83922729819;
    tmp_msg_0.z = 0.819894256242;
    tmp_msg_0.phi = 0.109101136051;
    tmp_msg_0.theta = 0.507531852828;
    tmp_msg_0.psi = 0.941271579896;
    tmp_msg_0.u = 0.352898570196;
    tmp_msg_0.v = 0.742580825554;
    tmp_msg_0.w = 0.739198102998;
    tmp_msg_0.vx = 0.629677907775;
    tmp_msg_0.vy = 0.0184426146419;
    tmp_msg_0.vz = 0.749842969179;
    tmp_msg_0.p = 0.114039944538;
    tmp_msg_0.q = 0.942048312073;
    tmp_msg_0.r = 0.113768194939;
    tmp_msg_0.depth = 0.308187833647;
    tmp_msg_0.alt = 0.709684780751;
    msg.state.set(tmp_msg_0);
    msg.type = 28U;

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
    msg.setTimeStamp(0.662081242789);
    msg.setSource(2775U);
    msg.setSourceEntity(59U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(115U);
    msg.value = 0.547065483921;

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
    msg.setTimeStamp(0.632915650519);
    msg.setSource(10874U);
    msg.setSourceEntity(51U);
    msg.setDestination(26563U);
    msg.setDestinationEntity(80U);
    msg.value = 0.447098909829;

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
    msg.setTimeStamp(0.677951273895);
    msg.setSource(654U);
    msg.setSourceEntity(4U);
    msg.setDestination(59038U);
    msg.setDestinationEntity(96U);
    msg.value = 0.122076484725;

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
    msg.setTimeStamp(0.669384610275);
    msg.setSource(63788U);
    msg.setSourceEntity(153U);
    msg.setDestination(19082U);
    msg.setDestinationEntity(49U);
    msg.value = 0.376572791182;

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
    msg.setTimeStamp(0.497240527495);
    msg.setSource(52898U);
    msg.setSourceEntity(44U);
    msg.setDestination(7106U);
    msg.setDestinationEntity(70U);
    msg.value = 0.262561589411;

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
    msg.setTimeStamp(0.328023972544);
    msg.setSource(61854U);
    msg.setSourceEntity(49U);
    msg.setDestination(5644U);
    msg.setDestinationEntity(189U);
    msg.value = 0.389927388352;

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
    msg.setTimeStamp(0.518952647735);
    msg.setSource(2483U);
    msg.setSourceEntity(42U);
    msg.setDestination(38604U);
    msg.setDestinationEntity(240U);
    msg.value = 0.12106206267;

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
    msg.setTimeStamp(0.958179751639);
    msg.setSource(59837U);
    msg.setSourceEntity(184U);
    msg.setDestination(58220U);
    msg.setDestinationEntity(192U);
    msg.value = 0.536641389656;

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
    msg.setTimeStamp(0.752551334307);
    msg.setSource(51318U);
    msg.setSourceEntity(16U);
    msg.setDestination(3532U);
    msg.setDestinationEntity(213U);
    msg.value = 0.29035199552;

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
    msg.setTimeStamp(0.661182373616);
    msg.setSource(9948U);
    msg.setSourceEntity(181U);
    msg.setDestination(57038U);
    msg.setDestinationEntity(40U);
    msg.value = 0.2008984644;

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
    msg.setTimeStamp(0.829891614794);
    msg.setSource(24194U);
    msg.setSourceEntity(11U);
    msg.setDestination(9968U);
    msg.setDestinationEntity(210U);
    msg.value = 0.254818203887;

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
    msg.setTimeStamp(0.671288007573);
    msg.setSource(2627U);
    msg.setSourceEntity(167U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(38U);
    msg.value = 0.155040143214;

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
    msg.setTimeStamp(0.731142142905);
    msg.setSource(50539U);
    msg.setSourceEntity(207U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(199U);
    msg.value = 0.547589306113;

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
    msg.setTimeStamp(0.866972760602);
    msg.setSource(40804U);
    msg.setSourceEntity(61U);
    msg.setDestination(33326U);
    msg.setDestinationEntity(80U);
    msg.value = 0.423665770304;

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
    msg.setTimeStamp(0.382597849703);
    msg.setSource(16899U);
    msg.setSourceEntity(131U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(27U);
    msg.value = 0.731044399973;

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
    msg.setTimeStamp(0.432488862988);
    msg.setSource(16U);
    msg.setSourceEntity(67U);
    msg.setDestination(13413U);
    msg.setDestinationEntity(146U);
    msg.id = 203U;
    msg.zoom = 225U;
    msg.action = 245U;

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
    msg.setTimeStamp(0.0646402539245);
    msg.setSource(17739U);
    msg.setSourceEntity(99U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(72U);
    msg.id = 195U;
    msg.zoom = 18U;
    msg.action = 215U;

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
    msg.setTimeStamp(0.819488945775);
    msg.setSource(5540U);
    msg.setSourceEntity(202U);
    msg.setDestination(36575U);
    msg.setDestinationEntity(78U);
    msg.id = 20U;
    msg.zoom = 222U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.0492192465832);
    msg.setSource(20512U);
    msg.setSourceEntity(138U);
    msg.setDestination(40188U);
    msg.setDestinationEntity(143U);
    msg.id = 187U;
    msg.value = 0.454993805477;

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
    msg.setTimeStamp(0.0138665029899);
    msg.setSource(50114U);
    msg.setSourceEntity(22U);
    msg.setDestination(28311U);
    msg.setDestinationEntity(212U);
    msg.id = 242U;
    msg.value = 0.332956882593;

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
    msg.setTimeStamp(0.418615783288);
    msg.setSource(2668U);
    msg.setSourceEntity(205U);
    msg.setDestination(23502U);
    msg.setDestinationEntity(150U);
    msg.id = 75U;
    msg.value = 0.10780313184;

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
    msg.setTimeStamp(0.669984438794);
    msg.setSource(11608U);
    msg.setSourceEntity(175U);
    msg.setDestination(37982U);
    msg.setDestinationEntity(170U);
    msg.id = 114U;
    msg.value = 0.418096195131;

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
    msg.setTimeStamp(0.213373085596);
    msg.setSource(41705U);
    msg.setSourceEntity(127U);
    msg.setDestination(27348U);
    msg.setDestinationEntity(133U);
    msg.id = 8U;
    msg.value = 0.987630938846;

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
    msg.setTimeStamp(0.836459571962);
    msg.setSource(9278U);
    msg.setSourceEntity(41U);
    msg.setDestination(12759U);
    msg.setDestinationEntity(94U);
    msg.id = 90U;
    msg.value = 0.337926900173;

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
    msg.setTimeStamp(0.0992178118045);
    msg.setSource(17119U);
    msg.setSourceEntity(7U);
    msg.setDestination(55685U);
    msg.setDestinationEntity(102U);
    msg.id = 248U;
    msg.angle = 0.5754998647;

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
    msg.setTimeStamp(0.700862139727);
    msg.setSource(10783U);
    msg.setSourceEntity(85U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(198U);
    msg.id = 23U;
    msg.angle = 0.848436067942;

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
    msg.setTimeStamp(0.831148324594);
    msg.setSource(58707U);
    msg.setSourceEntity(35U);
    msg.setDestination(54214U);
    msg.setDestinationEntity(49U);
    msg.id = 102U;
    msg.angle = 0.650809303057;

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
    msg.setTimeStamp(0.269691365358);
    msg.setSource(47828U);
    msg.setSourceEntity(154U);
    msg.setDestination(13879U);
    msg.setDestinationEntity(46U);
    msg.op = 188U;
    msg.actions.assign("RZJYYOBTUELQBBWBCVBCAJAWBSHTTWTWNSPYPKVEFUNNKAMCZUNQGDZXGVFEVDKISFMEUSTJTMIIHCQHZWACPJXOUELFKVJMOXHXWPVAGEXZQCFLMSPFKQLNJIQRSOLHLQA");

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
    msg.setTimeStamp(0.484754435465);
    msg.setSource(54851U);
    msg.setSourceEntity(19U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(154U);
    msg.op = 217U;
    msg.actions.assign("SOBKRJDCMXTDUNPRSLPXSNODZHRPUEICZOOGXWGMWTXWRZNISQHZQCLMUFQWYOYD");

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
    msg.setTimeStamp(0.782450232821);
    msg.setSource(3589U);
    msg.setSourceEntity(155U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(6U);
    msg.op = 40U;
    msg.actions.assign("DQCGBYXGQDVFDUUOGHXLVPMANKLOYNKZIFELGQJMSJXUBSJWNKYWMZRIHBNPAXCPTQHIGASPCUHBTMAWEFRRHPAVBTRWPJODEKVVUVWDIEASGMHWLDILEFWXXOTCNTOGKVRPOZFCALQHEWYXNCTNLUEGNQCQZLUWGCBRIRNDZRASMSQIUOLPIHIFIJKYEETUQBFOK");

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
    msg.setTimeStamp(0.795848712964);
    msg.setSource(39319U);
    msg.setSourceEntity(93U);
    msg.setDestination(30273U);
    msg.setDestinationEntity(240U);
    msg.actions.assign("VXZPCNBMEFVROCRJJQYWDEGGMBPPPTFHWAGDATHFDQVZKZVUUILERZSQBNELXSEGXHBKBNKIJPJSYYHDJH");

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
    msg.setTimeStamp(0.0329242763986);
    msg.setSource(10784U);
    msg.setSourceEntity(109U);
    msg.setDestination(12658U);
    msg.setDestinationEntity(205U);
    msg.actions.assign("INJCMRGBZQURHSEWJDHJTMUPFLJBTOXKPYMCXQDQTSPUZLXKLVWQBUTOVVGEBODIXQFDOQEITFWYIADFMKXGECGJNZHAQQQLLJUFKRKWYJZZIUEYAHZHPVKPDEBNZEUCXIAHVHOHMWLGYVIUGFLVNHIRWAJOKHNKNYXCPBABNRPLFRRRDVMCWSUYLOTGMSZJFXZWLDDWEOWXPIXISCSAN");

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
    msg.setTimeStamp(0.00539198283297);
    msg.setSource(18133U);
    msg.setSourceEntity(243U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(172U);
    msg.actions.assign("ORQGSJGZWYENIFGWHPGNJNRVJXEWTFVUJNGMPNIQBXZQTABKUFPUDQRUQXMEDQVDXCYOKUIYLFVLLBXMSBKYDVZCSPDZHQOOEPPSWTFHAAAMSYUQBAGERIHLJUVVA");

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
    msg.setTimeStamp(0.677482817149);
    msg.setSource(31821U);
    msg.setSourceEntity(128U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(149U);
    msg.button = 34U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.615991222003);
    msg.setSource(50923U);
    msg.setSourceEntity(74U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(145U);
    msg.button = 199U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.253610625385);
    msg.setSource(56113U);
    msg.setSourceEntity(64U);
    msg.setDestination(47350U);
    msg.setDestinationEntity(4U);
    msg.button = 136U;
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
    msg.setTimeStamp(0.840544897583);
    msg.setSource(10977U);
    msg.setSourceEntity(69U);
    msg.setDestination(32197U);
    msg.setDestinationEntity(187U);
    msg.op = 164U;
    msg.text.assign("MEOHVEZSQEWNDANQSRDQLCNWAGUHDOZJQVPVMTRUUAORTXTDKXODGCHUAKRCOIBWCCRBMJASOTZNFDSHKPQWHFTXVGWLJULBIFWJKGUFNSJYHVACGBYNHQIVPVNCUMWYOQNUZGZUTDEEWVNVOPBHQPFQSZ");

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
    msg.setTimeStamp(0.0862845912284);
    msg.setSource(48170U);
    msg.setSourceEntity(32U);
    msg.setDestination(48349U);
    msg.setDestinationEntity(56U);
    msg.op = 135U;
    msg.text.assign("PZRDFLEOXIGJRGUOWOKTKUBXAKYSDKJCNBHTHQXLCDWMBOCDWWFUUEZTZAFTOMMXPVOQYQIUKFZJSHJPLQRTTLOGPBAYYJHFFHJAINXOFZPEPQXHCIPVYYIQMLJXVDAJSWRWSGAVDRMLDLIRPSZQNR");

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
    msg.setTimeStamp(0.80044247419);
    msg.setSource(19470U);
    msg.setSourceEntity(191U);
    msg.setDestination(42368U);
    msg.setDestinationEntity(47U);
    msg.op = 134U;
    msg.text.assign("YUYXFPCKXGHCIEAWNTQDIWDYEYQVVTLEKFD");

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
    msg.setTimeStamp(0.0868111014466);
    msg.setSource(17260U);
    msg.setSourceEntity(128U);
    msg.setDestination(31365U);
    msg.setDestinationEntity(31U);
    msg.op = 127U;
    msg.time_remain = 0.712868468707;
    msg.sched_time = 0.945996576983;

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
    msg.setTimeStamp(0.565641693132);
    msg.setSource(55014U);
    msg.setSourceEntity(101U);
    msg.setDestination(36244U);
    msg.setDestinationEntity(5U);
    msg.op = 151U;
    msg.time_remain = 0.832737380184;
    msg.sched_time = 0.456122710697;

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
    msg.setTimeStamp(0.420609068355);
    msg.setSource(12272U);
    msg.setSourceEntity(101U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(151U);
    msg.op = 128U;
    msg.time_remain = 0.709273779114;
    msg.sched_time = 0.373607678284;

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
    msg.setTimeStamp(0.0597938161969);
    msg.setSource(3312U);
    msg.setSourceEntity(77U);
    msg.setDestination(23841U);
    msg.setDestinationEntity(183U);
    msg.name.assign("GYZREPHYVGUSVGRWOYYNBJNFRGHPXOSKFVZEYOJKJNBLNOLIJTVQBHUKIMZQPCEQTAAHKIZMYTEBQTVQXAXSUZOEARMDKFSLNSKGLAYCLWCZXWWBFECDAYQMTMTUXPLQWAQXMSDPDCIDBHQODZVPDJSSPWDSMIROUNVXDEFENLM");
    msg.op = 197U;
    msg.sched_time = 0.255995798775;

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
    msg.setTimeStamp(0.153900866857);
    msg.setSource(11436U);
    msg.setSourceEntity(65U);
    msg.setDestination(56615U);
    msg.setDestinationEntity(35U);
    msg.name.assign("DMCJHBFYPJZSOXEWNZPIWIIZODITBJGPQHXPWOTNMXWBJRENDFRSTFYIDAZHRFFSBKYIQZUFDVUMPJH");
    msg.op = 159U;
    msg.sched_time = 0.803146103572;

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
    msg.setTimeStamp(0.364530416745);
    msg.setSource(31965U);
    msg.setSourceEntity(245U);
    msg.setDestination(8084U);
    msg.setDestinationEntity(143U);
    msg.name.assign("BGZRXRFFCGKNSSGBZZNKNTWOQCHMUABQGEAV");
    msg.op = 186U;
    msg.sched_time = 0.620014784654;

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
    msg.setTimeStamp(0.281853948514);
    msg.setSource(26299U);
    msg.setSourceEntity(17U);
    msg.setDestination(24041U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.699939763143);
    msg.setSource(28715U);
    msg.setSourceEntity(120U);
    msg.setDestination(60542U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.277488895275);
    msg.setSource(56918U);
    msg.setSourceEntity(82U);
    msg.setDestination(52966U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.040308990287);
    msg.setSource(22820U);
    msg.setSourceEntity(219U);
    msg.setDestination(850U);
    msg.setDestinationEntity(180U);
    msg.name.assign("GWGLAIRCBANOEPVMVYYMNSBUFOCYMEQHKPJBLIAJKOCDIHPZYXKRDZNFZSPDXQKJWLTRGROEPDRMOCURGWTUJZHSFGDHZXTPHHPMQPCATDUTZQECBAWHSKCHAUHLYCZTDSKYLPXDXNXGNOXMOBWYM");
    msg.state = 237U;

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
    msg.setTimeStamp(0.543836724741);
    msg.setSource(65341U);
    msg.setSourceEntity(63U);
    msg.setDestination(32033U);
    msg.setDestinationEntity(37U);
    msg.name.assign("SZQAEBBGBSBSJENVYMOFBLOLPVJXUIRYGWUIXKYHIIXKXGKSWIFJYWOTEMHWLXMHFHLFCKTDQCCNOPGMAFGWQPCPVISLTAQHTKNFVUOWYMQHAWHKXEASDJKYCYLEBCTBYQNHOGGOCMIZAQCNRVJGVRKRPABFLLMTSKEDJACOJUUROODTLTZZYRWBQFBAMNNSPPMWIAWQRF");
    msg.state = 57U;

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
    msg.setTimeStamp(0.09173709639);
    msg.setSource(47806U);
    msg.setSourceEntity(129U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(8U);
    msg.name.assign("WCYIARMYPBVFDUCSLRZEYXDNDSFDHDVPQJQJFJQMPEFSNDLLVWYDXMBTKIJQWGBNOHAXSDPGELREKKSWZNNWBRAJTKWNDOGAEBCQJG");
    msg.state = 90U;

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
    msg.setTimeStamp(0.416052220258);
    msg.setSource(41817U);
    msg.setSourceEntity(237U);
    msg.setDestination(1615U);
    msg.setDestinationEntity(156U);
    msg.name.assign("IQZXJKJCNQBDCCDPBARGFPWCQPDLJDITCBNPVBOWVPAGBIOAXQNMELIFHXVFTTHTYGHRVFLGROEHZYZCVUKMOPPMSLTYILHRWNEFBJQUGAPQJPEWCLZCUXMZAZTSWUIYLX");
    msg.value = 182U;

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
    msg.setTimeStamp(0.986506017862);
    msg.setSource(12666U);
    msg.setSourceEntity(129U);
    msg.setDestination(8306U);
    msg.setDestinationEntity(75U);
    msg.name.assign("MZKIZCMIPJJXXYHXRDFDNWKITK");
    msg.value = 42U;

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
    msg.setTimeStamp(0.31716363504);
    msg.setSource(16651U);
    msg.setSourceEntity(123U);
    msg.setDestination(56438U);
    msg.setDestinationEntity(180U);
    msg.name.assign("KAGDHLRSYZRGGIIEKGPVEVLQONMEPSLJVVXQJVZACKGPVFBCGBIUFIRHYRSOWWAXWRSCTFYZZGONBXJMPJGEQHMYHMNQSDWDDQAPQNPVBBJTIKXRUUTMCJKPSQFTREFDNTCXVWTWRIJNZDLOEOHUZANUMMKUMYESJFRIKRNLAVBAUXIMHCOLTXZLZHCKOHAHPXYAUJBYJLKKDNDTIDACQSOPIEVFNPSYWYXFGMUBLCOSYCDOLBQUWWEZQE");
    msg.value = 249U;

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
    msg.setTimeStamp(0.359782909698);
    msg.setSource(58851U);
    msg.setSourceEntity(37U);
    msg.setDestination(49845U);
    msg.setDestinationEntity(89U);
    msg.name.assign("MNVQRXHYLXWNIYNHDOQLPRZHEXJNUIVXFCBLVKRPCRRJTSMCTKTJJBWTEOGJBQDFXMFWPFHZIYXDPLYBZKMDJEYBQCSZVZZWPOKIQPQNDGXAUISVFKNLTKSECBNKAMQORDSMXGJVUKOEZTAHMOGHCGDCITXZRYAKLFVCDBZYBPFOUSOPUYEGRETSSHYALAQIFJGJYMIVDEWIWMHOZGGUAAWHVATBLMBNGKIHJUAOFESRLXEQTLWUVQS");

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
    msg.setTimeStamp(0.668882971665);
    msg.setSource(43381U);
    msg.setSourceEntity(102U);
    msg.setDestination(16867U);
    msg.setDestinationEntity(199U);
    msg.name.assign("OLAWOVKYGGMVPEXXVEFHBRDJTCYMNAPSLKMKLTTBEHCXLZTHBJWWIQRMXBWOJDTANJROSOWJCIZDUFRJNMABHFXSDUYKGA");

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
    msg.setTimeStamp(0.630171846071);
    msg.setSource(18570U);
    msg.setSourceEntity(228U);
    msg.setDestination(38412U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XKLWZSYYAUVQBVIHMZVRPTCYEXDOXSMXPZSSFGIVTJUCAWLJWILDCWGABXRBVCMIJWQSHNRZJMGDNNRNINQLQFHPGLYCKCURERTUYTBRUJMSJPLXUWPGNKUYSAKUFDSIOIOFQAHNPEZCDQTOY");

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
    msg.setTimeStamp(0.0612441152237);
    msg.setSource(9876U);
    msg.setSourceEntity(81U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(107U);
    msg.name.assign("OMPTTNAYPDBCVXIFVKRKVAMRDREBYSCQXFFVWMDLRXJKJJLIEHFNCSFIPTDU");
    msg.value = 0U;

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
    msg.setTimeStamp(0.21176468428);
    msg.setSource(34494U);
    msg.setSourceEntity(21U);
    msg.setDestination(42608U);
    msg.setDestinationEntity(226U);
    msg.name.assign("BUFEWDYYWJJOGFSNZWOFXNRQHGEIETEFQSQMDKDFQPIOQCNEWBAGZMSQKUBKXIXDJWEVJPZNKISNCMQVVTGZLNAZEVYVROWGVMLIHRLMZUXIWYXARCIGUSMOGFAHYHKLAVNCLQKNYACXJOCDHRZLBSLBLPFDEGBXPDPEFXJTJHYMGYCTKADCNTPVXIKTCWSLHORVQWWKATZUAOUFBURSVFGOQMJDRPMRD");
    msg.value = 23U;

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
    msg.setTimeStamp(0.872728450805);
    msg.setSource(61334U);
    msg.setSourceEntity(14U);
    msg.setDestination(24446U);
    msg.setDestinationEntity(34U);
    msg.name.assign("CQGRIABGHPFXAROKUKVHVVCALHOFOJZTADMGUTNHKEZ");
    msg.value = 30U;

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
    msg.setTimeStamp(0.684434696156);
    msg.setSource(33049U);
    msg.setSourceEntity(148U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(126U);
    msg.id = 53U;
    msg.period = 1311366215U;
    msg.duty_cycle = 146184046U;

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
    msg.setTimeStamp(0.311249471651);
    msg.setSource(50645U);
    msg.setSourceEntity(253U);
    msg.setDestination(46307U);
    msg.setDestinationEntity(11U);
    msg.id = 155U;
    msg.period = 1818056512U;
    msg.duty_cycle = 1581426496U;

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
    msg.setTimeStamp(0.738735355481);
    msg.setSource(58972U);
    msg.setSourceEntity(213U);
    msg.setDestination(54628U);
    msg.setDestinationEntity(166U);
    msg.id = 46U;
    msg.period = 1517378642U;
    msg.duty_cycle = 2606093598U;

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
    msg.setTimeStamp(0.680544734784);
    msg.setSource(39140U);
    msg.setSourceEntity(129U);
    msg.setDestination(11080U);
    msg.setDestinationEntity(78U);
    msg.id = 134U;
    msg.period = 2657144749U;
    msg.duty_cycle = 1877647812U;

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
    msg.setTimeStamp(0.463800450738);
    msg.setSource(57120U);
    msg.setSourceEntity(57U);
    msg.setDestination(6892U);
    msg.setDestinationEntity(195U);
    msg.id = 218U;
    msg.period = 999229874U;
    msg.duty_cycle = 2573018996U;

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
    msg.setTimeStamp(0.567943531115);
    msg.setSource(3142U);
    msg.setSourceEntity(12U);
    msg.setDestination(23332U);
    msg.setDestinationEntity(207U);
    msg.id = 81U;
    msg.period = 3523022634U;
    msg.duty_cycle = 1609231140U;

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
    msg.setTimeStamp(0.0339779183868);
    msg.setSource(38148U);
    msg.setSourceEntity(112U);
    msg.setDestination(15925U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.139534757979;
    msg.lon = 0.0468374502897;
    msg.height = 0.0308738431118;
    msg.x = 0.301531808908;
    msg.y = 0.390556935901;
    msg.z = 0.34797846057;
    msg.phi = 0.600255131117;
    msg.theta = 0.454609098436;
    msg.psi = 0.824200809605;
    msg.u = 0.512749090537;
    msg.v = 0.553437852507;
    msg.w = 0.287140960347;
    msg.vx = 0.700555569762;
    msg.vy = 0.129534170839;
    msg.vz = 0.907950036872;
    msg.p = 0.320645293425;
    msg.q = 0.927317608825;
    msg.r = 0.400134933552;
    msg.depth = 0.0461928173612;
    msg.alt = 0.945102580801;

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
    msg.setTimeStamp(0.52428167123);
    msg.setSource(32182U);
    msg.setSourceEntity(98U);
    msg.setDestination(21828U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.740511413337;
    msg.lon = 0.0427123328988;
    msg.height = 0.31553460796;
    msg.x = 0.0498216113755;
    msg.y = 0.844227667996;
    msg.z = 0.235900862504;
    msg.phi = 0.426596931258;
    msg.theta = 0.614442841007;
    msg.psi = 0.864391143735;
    msg.u = 0.561037238337;
    msg.v = 0.318754533123;
    msg.w = 0.916090469537;
    msg.vx = 0.096264409799;
    msg.vy = 0.777098699864;
    msg.vz = 0.193993312383;
    msg.p = 0.29178301781;
    msg.q = 0.397052969762;
    msg.r = 0.96780194988;
    msg.depth = 0.27061420785;
    msg.alt = 0.849303912536;

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
    msg.setTimeStamp(0.755218657338);
    msg.setSource(22242U);
    msg.setSourceEntity(67U);
    msg.setDestination(45250U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.829481825142;
    msg.lon = 0.0681789259031;
    msg.height = 0.671351544317;
    msg.x = 0.666252550812;
    msg.y = 0.966775071904;
    msg.z = 0.268107898632;
    msg.phi = 0.380166541726;
    msg.theta = 0.301633632528;
    msg.psi = 0.190278392288;
    msg.u = 0.530995024279;
    msg.v = 0.0768583475168;
    msg.w = 0.559666502494;
    msg.vx = 0.804292156166;
    msg.vy = 0.60907637811;
    msg.vz = 0.979697447529;
    msg.p = 0.934240950804;
    msg.q = 0.508179670177;
    msg.r = 0.996285631333;
    msg.depth = 0.0296752496085;
    msg.alt = 0.722538692645;

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
    msg.setTimeStamp(0.737011100892);
    msg.setSource(60259U);
    msg.setSourceEntity(163U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(63U);
    msg.x = 0.216966785983;
    msg.y = 0.404294270681;
    msg.z = 0.698552942628;

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
    msg.setTimeStamp(0.262694182154);
    msg.setSource(3265U);
    msg.setSourceEntity(40U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(94U);
    msg.x = 0.363485090795;
    msg.y = 0.805612471329;
    msg.z = 0.235455851519;

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
    msg.setTimeStamp(0.519435754522);
    msg.setSource(17749U);
    msg.setSourceEntity(39U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(228U);
    msg.x = 0.555363735315;
    msg.y = 0.450478179228;
    msg.z = 0.588222506953;

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
    msg.setTimeStamp(0.476455880382);
    msg.setSource(55637U);
    msg.setSourceEntity(191U);
    msg.setDestination(12496U);
    msg.setDestinationEntity(14U);
    msg.value = 0.477834561049;

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
    msg.setTimeStamp(0.168858036944);
    msg.setSource(20692U);
    msg.setSourceEntity(248U);
    msg.setDestination(41417U);
    msg.setDestinationEntity(192U);
    msg.value = 0.130105732013;

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
    msg.setTimeStamp(0.096647643969);
    msg.setSource(35078U);
    msg.setSourceEntity(71U);
    msg.setDestination(19623U);
    msg.setDestinationEntity(88U);
    msg.value = 0.166300098211;

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
    msg.setTimeStamp(0.154437645171);
    msg.setSource(19786U);
    msg.setSourceEntity(121U);
    msg.setDestination(7047U);
    msg.setDestinationEntity(37U);
    msg.value = 0.325159551945;

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
    msg.setTimeStamp(0.104399572144);
    msg.setSource(35878U);
    msg.setSourceEntity(40U);
    msg.setDestination(32974U);
    msg.setDestinationEntity(69U);
    msg.value = 0.109093461628;

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
    msg.setTimeStamp(0.767334891183);
    msg.setSource(4788U);
    msg.setSourceEntity(119U);
    msg.setDestination(35303U);
    msg.setDestinationEntity(183U);
    msg.value = 0.876750365484;

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
    msg.setTimeStamp(0.204670784716);
    msg.setSource(62205U);
    msg.setSourceEntity(104U);
    msg.setDestination(11228U);
    msg.setDestinationEntity(221U);
    msg.x = 0.764081190387;
    msg.y = 0.0733070823814;
    msg.z = 0.607770318282;
    msg.phi = 0.92523495977;
    msg.theta = 0.310534890537;
    msg.psi = 0.355283404846;
    msg.p = 0.329444747776;
    msg.q = 0.933534730576;
    msg.r = 0.0145926292341;
    msg.u = 0.996162063639;
    msg.v = 0.793973678913;
    msg.w = 0.623284786574;
    msg.bias_psi = 0.377814311212;
    msg.bias_r = 0.51835588929;

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
    msg.setTimeStamp(0.799210689225);
    msg.setSource(37988U);
    msg.setSourceEntity(32U);
    msg.setDestination(6067U);
    msg.setDestinationEntity(65U);
    msg.x = 0.820248829977;
    msg.y = 0.0816381741847;
    msg.z = 0.903069660074;
    msg.phi = 0.923375089221;
    msg.theta = 0.133117083718;
    msg.psi = 0.766922825244;
    msg.p = 0.913808811153;
    msg.q = 0.0821378957068;
    msg.r = 0.391647525123;
    msg.u = 0.119330707568;
    msg.v = 0.763048744338;
    msg.w = 0.422406435927;
    msg.bias_psi = 0.218085361689;
    msg.bias_r = 0.151923991096;

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
    msg.setTimeStamp(0.275782377476);
    msg.setSource(1540U);
    msg.setSourceEntity(62U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(221U);
    msg.x = 0.941325259995;
    msg.y = 0.549586831038;
    msg.z = 0.0726837196719;
    msg.phi = 0.219991019221;
    msg.theta = 0.0376950192954;
    msg.psi = 0.334687212981;
    msg.p = 0.827177917949;
    msg.q = 0.729125481439;
    msg.r = 0.585275871986;
    msg.u = 0.638037878423;
    msg.v = 0.195345510915;
    msg.w = 0.785711518428;
    msg.bias_psi = 0.021892775074;
    msg.bias_r = 0.318978929688;

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
    msg.setTimeStamp(0.876746474198);
    msg.setSource(20877U);
    msg.setSourceEntity(159U);
    msg.setDestination(65177U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.252574804203;
    msg.bias_r = 0.36600733879;
    msg.cog = 0.982113953854;
    msg.cyaw = 0.0362932189587;
    msg.lbl_rej_level = 0.0277439434717;
    msg.gps_rej_level = 0.254683761949;
    msg.custom_x = 0.0348899771514;
    msg.custom_y = 0.107196490689;
    msg.custom_z = 0.304796029739;

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
    msg.setTimeStamp(0.846322547408);
    msg.setSource(40486U);
    msg.setSourceEntity(148U);
    msg.setDestination(51846U);
    msg.setDestinationEntity(164U);
    msg.bias_psi = 0.38043415837;
    msg.bias_r = 0.100961882237;
    msg.cog = 0.204517443932;
    msg.cyaw = 0.977292292576;
    msg.lbl_rej_level = 0.192834985442;
    msg.gps_rej_level = 0.860799584958;
    msg.custom_x = 0.11713234095;
    msg.custom_y = 0.745367402507;
    msg.custom_z = 0.35355648909;

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
    msg.setTimeStamp(0.52591171544);
    msg.setSource(22876U);
    msg.setSourceEntity(133U);
    msg.setDestination(40184U);
    msg.setDestinationEntity(244U);
    msg.bias_psi = 0.529924979388;
    msg.bias_r = 0.486069634959;
    msg.cog = 0.581401343697;
    msg.cyaw = 0.407538328595;
    msg.lbl_rej_level = 0.159242971691;
    msg.gps_rej_level = 0.995819426372;
    msg.custom_x = 0.310009403512;
    msg.custom_y = 0.862834610989;
    msg.custom_z = 0.213894461896;

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
    msg.setTimeStamp(0.742813351914);
    msg.setSource(42105U);
    msg.setSourceEntity(213U);
    msg.setDestination(57643U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.896502258229;
    msg.reason = 144U;

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
    msg.setTimeStamp(0.300690307479);
    msg.setSource(24662U);
    msg.setSourceEntity(209U);
    msg.setDestination(32994U);
    msg.setDestinationEntity(5U);
    msg.utc_time = 0.826542682897;
    msg.reason = 17U;

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
    msg.setTimeStamp(0.483256953986);
    msg.setSource(19182U);
    msg.setSourceEntity(128U);
    msg.setDestination(10530U);
    msg.setDestinationEntity(34U);
    msg.utc_time = 0.987449508339;
    msg.reason = 126U;

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
    msg.setTimeStamp(0.610722504201);
    msg.setSource(114U);
    msg.setSourceEntity(38U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(51U);
    msg.id = 93U;
    msg.range = 0.403082924254;
    msg.acceptance = 92U;

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
    msg.setTimeStamp(0.512815192287);
    msg.setSource(18571U);
    msg.setSourceEntity(119U);
    msg.setDestination(43149U);
    msg.setDestinationEntity(189U);
    msg.id = 193U;
    msg.range = 0.783360458272;
    msg.acceptance = 128U;

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
    msg.setTimeStamp(0.185007523075);
    msg.setSource(54781U);
    msg.setSourceEntity(183U);
    msg.setDestination(13436U);
    msg.setDestinationEntity(70U);
    msg.id = 90U;
    msg.range = 0.584627961578;
    msg.acceptance = 201U;

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
    msg.setTimeStamp(0.551781379364);
    msg.setSource(44161U);
    msg.setSourceEntity(55U);
    msg.setDestination(33066U);
    msg.setDestinationEntity(60U);
    msg.type = 6U;
    msg.reason = 65U;
    msg.value = 0.764315797095;
    msg.timestep = 0.108287245819;

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
    msg.setTimeStamp(0.951027585057);
    msg.setSource(33493U);
    msg.setSourceEntity(59U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(220U);
    msg.type = 0U;
    msg.reason = 75U;
    msg.value = 0.429353717785;
    msg.timestep = 0.756004478601;

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
    msg.setTimeStamp(0.638253328955);
    msg.setSource(24654U);
    msg.setSourceEntity(230U);
    msg.setDestination(50131U);
    msg.setDestinationEntity(120U);
    msg.type = 210U;
    msg.reason = 165U;
    msg.value = 0.276852913941;
    msg.timestep = 0.386828929502;

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
    msg.setTimeStamp(0.610194498637);
    msg.setSource(60448U);
    msg.setSourceEntity(78U);
    msg.setDestination(18471U);
    msg.setDestinationEntity(253U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SRARHKNJQSJAMPKDYLDQWYAQAFTISDQVZIURTFYFOGJZWUNFVNIHVXBODTBMXKJVPMVZQRHZMUXKKNKCGVGYMLNHCHDBJGCCLYMZZPNLWLBYEVAEWZCFYDSNIKWJMKBXWIUDOXXDTLQGOORCQHMCSSTPJECKVESFRQBIFCIPWDH");
    tmp_msg_0.lat = 0.582010264578;
    tmp_msg_0.lon = 0.852698047876;
    tmp_msg_0.depth = 0.62896075515;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 220U;
    tmp_msg_0.transponder_delay = 130U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.141558815697;
    msg.y = 0.632223784756;
    msg.var_x = 0.887432301148;
    msg.var_y = 0.782498608188;
    msg.distance = 0.961472983117;

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
    msg.setTimeStamp(0.249448694325);
    msg.setSource(21523U);
    msg.setSourceEntity(44U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(40U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JSTGBHKEKOJUOOSYOIKPMNPQJYSVHQBGFKUXLSAFDAFAHSOILGNEFVJHSQXRZECRWGQYQKGLOXRKNCYCPJYYLYWHBWZMDFTQNGICSNLBZXMRPTPMWBNAUID");
    tmp_msg_0.lat = 0.94740048951;
    tmp_msg_0.lon = 0.129810442387;
    tmp_msg_0.depth = 0.395314338385;
    tmp_msg_0.query_channel = 110U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 195U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0762063412061;
    msg.y = 0.73819859151;
    msg.var_x = 0.762563769282;
    msg.var_y = 0.266419054235;
    msg.distance = 0.497933634527;

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
    msg.setTimeStamp(0.283270010159);
    msg.setSource(23899U);
    msg.setSourceEntity(140U);
    msg.setDestination(99U);
    msg.setDestinationEntity(235U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EDYRCIXNOGNUQCOJNAZVHHWVQBHVNHCHWHMONUWFLTWDXYTSJSUUREGHIBVDHLEVGLMOKEXCGZQMCYAJGVPITXDARBFHWLBBZXTIFPIOKJAIQMADKSRJIYZKEZPPFSEWJBAYTGVKFTACECLSFGXXNQTOULMGDRSMRSTYPZJUNGPPZACISMFZFRQPSLNXRCOQEQAPJGFWFUYBND");
    tmp_msg_0.lat = 0.0329388539265;
    tmp_msg_0.lon = 0.629081505022;
    tmp_msg_0.depth = 0.497243074704;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 141U;
    tmp_msg_0.transponder_delay = 156U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.712718768723;
    msg.y = 0.318105589246;
    msg.var_x = 0.0151511475666;
    msg.var_y = 0.308538496571;
    msg.distance = 0.617620710421;

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
    msg.setTimeStamp(0.363658497184);
    msg.setSource(51325U);
    msg.setSourceEntity(126U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(192U);
    msg.state = 151U;

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
    msg.setTimeStamp(0.27960606283);
    msg.setSource(27880U);
    msg.setSourceEntity(214U);
    msg.setDestination(54906U);
    msg.setDestinationEntity(79U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.893742526195);
    msg.setSource(10591U);
    msg.setSourceEntity(176U);
    msg.setDestination(32716U);
    msg.setDestinationEntity(254U);
    msg.state = 242U;

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
    msg.setTimeStamp(0.241597931928);
    msg.setSource(6824U);
    msg.setSourceEntity(66U);
    msg.setDestination(6109U);
    msg.setDestinationEntity(158U);
    msg.x = 0.00980902598865;
    msg.y = 0.635107846047;
    msg.z = 0.613341466693;

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
    msg.setTimeStamp(0.0931178639222);
    msg.setSource(13039U);
    msg.setSourceEntity(65U);
    msg.setDestination(42014U);
    msg.setDestinationEntity(238U);
    msg.x = 0.0673667959331;
    msg.y = 0.685001933353;
    msg.z = 0.886014955628;

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
    msg.setTimeStamp(0.996189960862);
    msg.setSource(43705U);
    msg.setSourceEntity(64U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(96U);
    msg.x = 0.0329154450478;
    msg.y = 0.197098269842;
    msg.z = 0.277438121059;

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
    msg.setTimeStamp(0.525660685217);
    msg.setSource(14991U);
    msg.setSourceEntity(110U);
    msg.setDestination(52488U);
    msg.setDestinationEntity(230U);
    msg.va = 0.116892298597;
    msg.aoa = 0.278832720898;
    msg.ssa = 0.118741327104;

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
    msg.setTimeStamp(0.22279693083);
    msg.setSource(26954U);
    msg.setSourceEntity(150U);
    msg.setDestination(14560U);
    msg.setDestinationEntity(245U);
    msg.va = 0.985271217039;
    msg.aoa = 0.0839442213586;
    msg.ssa = 0.299715685814;

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
    msg.setTimeStamp(0.15981624165);
    msg.setSource(52861U);
    msg.setSourceEntity(140U);
    msg.setDestination(21562U);
    msg.setDestinationEntity(131U);
    msg.va = 0.675067877668;
    msg.aoa = 0.461753025002;
    msg.ssa = 0.878877670207;

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
    msg.setTimeStamp(0.930406010857);
    msg.setSource(6135U);
    msg.setSourceEntity(153U);
    msg.setDestination(33406U);
    msg.setDestinationEntity(39U);
    msg.value = 0.606926737846;

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
    msg.setTimeStamp(0.922166981811);
    msg.setSource(20987U);
    msg.setSourceEntity(236U);
    msg.setDestination(40079U);
    msg.setDestinationEntity(106U);
    msg.value = 0.898930880778;

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
    msg.setTimeStamp(0.270997784882);
    msg.setSource(41021U);
    msg.setSourceEntity(116U);
    msg.setDestination(16885U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0800066078904;

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
    msg.setTimeStamp(0.0607384391018);
    msg.setSource(47841U);
    msg.setSourceEntity(18U);
    msg.setDestination(55250U);
    msg.setDestinationEntity(237U);
    msg.value = 0.0293756759572;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.408563296871);
    msg.setSource(31248U);
    msg.setSourceEntity(207U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(190U);
    msg.value = 0.318711079464;
    msg.z_units = 187U;

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
    msg.setTimeStamp(0.576823072273);
    msg.setSource(15014U);
    msg.setSourceEntity(166U);
    msg.setDestination(7990U);
    msg.setDestinationEntity(215U);
    msg.value = 0.248019505573;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.136590171359);
    msg.setSource(15073U);
    msg.setSourceEntity(150U);
    msg.setDestination(20708U);
    msg.setDestinationEntity(141U);
    msg.value = 0.577956800557;
    msg.speed_units = 57U;

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
    msg.setTimeStamp(0.915819350812);
    msg.setSource(61080U);
    msg.setSourceEntity(244U);
    msg.setDestination(55304U);
    msg.setDestinationEntity(112U);
    msg.value = 0.918498960725;
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
    msg.setTimeStamp(0.385715182309);
    msg.setSource(37484U);
    msg.setSourceEntity(191U);
    msg.setDestination(26111U);
    msg.setDestinationEntity(16U);
    msg.value = 0.304223529963;
    msg.speed_units = 20U;

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
    msg.setTimeStamp(0.82513064999);
    msg.setSource(45822U);
    msg.setSourceEntity(245U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(84U);
    msg.value = 0.716409822916;

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
    msg.setTimeStamp(0.552238804819);
    msg.setSource(31749U);
    msg.setSourceEntity(153U);
    msg.setDestination(28158U);
    msg.setDestinationEntity(121U);
    msg.value = 0.341490885244;

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
    msg.setTimeStamp(0.593963810743);
    msg.setSource(64628U);
    msg.setSourceEntity(206U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(140U);
    msg.value = 0.306576717648;

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
    msg.setTimeStamp(0.229344902205);
    msg.setSource(16726U);
    msg.setSourceEntity(202U);
    msg.setDestination(12754U);
    msg.setDestinationEntity(215U);
    msg.value = 0.955961555815;

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
    msg.setTimeStamp(0.104757002851);
    msg.setSource(25377U);
    msg.setSourceEntity(49U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(94U);
    msg.value = 0.885664701625;

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
    msg.setTimeStamp(0.214997215018);
    msg.setSource(60779U);
    msg.setSourceEntity(70U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(42U);
    msg.value = 0.331060777682;

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
    msg.setTimeStamp(0.884260654154);
    msg.setSource(12959U);
    msg.setSourceEntity(238U);
    msg.setDestination(38470U);
    msg.setDestinationEntity(103U);
    msg.value = 0.301621075434;

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
    msg.setTimeStamp(0.955827245712);
    msg.setSource(3143U);
    msg.setSourceEntity(105U);
    msg.setDestination(52221U);
    msg.setDestinationEntity(126U);
    msg.value = 0.237767298463;

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
    msg.setTimeStamp(0.828982521876);
    msg.setSource(13494U);
    msg.setSourceEntity(229U);
    msg.setDestination(60359U);
    msg.setDestinationEntity(52U);
    msg.value = 0.559926632532;

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
    msg.setTimeStamp(0.905574847392);
    msg.setSource(28600U);
    msg.setSourceEntity(196U);
    msg.setDestination(10888U);
    msg.setDestinationEntity(136U);
    msg.path_ref = 2642457398U;
    msg.start_lat = 0.960629698563;
    msg.start_lon = 0.365772108073;
    msg.start_z = 0.810757230739;
    msg.start_z_units = 7U;
    msg.end_lat = 0.994469185971;
    msg.end_lon = 0.00470356419341;
    msg.end_z = 0.328182465536;
    msg.end_z_units = 175U;
    msg.speed = 0.699603676824;
    msg.speed_units = 182U;
    msg.lradius = 0.344750842277;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.216824561794);
    msg.setSource(23436U);
    msg.setSourceEntity(190U);
    msg.setDestination(58389U);
    msg.setDestinationEntity(239U);
    msg.path_ref = 830739208U;
    msg.start_lat = 0.497689947941;
    msg.start_lon = 0.557069044829;
    msg.start_z = 0.93343354124;
    msg.start_z_units = 253U;
    msg.end_lat = 0.378687801235;
    msg.end_lon = 0.910870167265;
    msg.end_z = 0.268029439681;
    msg.end_z_units = 219U;
    msg.speed = 0.245338623045;
    msg.speed_units = 89U;
    msg.lradius = 0.664817909996;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.227724174211);
    msg.setSource(51973U);
    msg.setSourceEntity(163U);
    msg.setDestination(19418U);
    msg.setDestinationEntity(53U);
    msg.path_ref = 766824785U;
    msg.start_lat = 0.214776787948;
    msg.start_lon = 0.735525620884;
    msg.start_z = 0.268624717976;
    msg.start_z_units = 53U;
    msg.end_lat = 0.658843984238;
    msg.end_lon = 0.528294801795;
    msg.end_z = 0.996685084439;
    msg.end_z_units = 127U;
    msg.speed = 0.23160635059;
    msg.speed_units = 158U;
    msg.lradius = 0.854448883766;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.00454614034831);
    msg.setSource(54781U);
    msg.setSourceEntity(120U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(251U);
    msg.x = 0.734691678878;
    msg.y = 0.28840664518;
    msg.z = 0.279871540397;
    msg.k = 0.0712034584937;
    msg.m = 0.554388175226;
    msg.n = 0.159212222464;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.441883853442);
    msg.setSource(56261U);
    msg.setSourceEntity(56U);
    msg.setDestination(61705U);
    msg.setDestinationEntity(225U);
    msg.x = 0.395377390339;
    msg.y = 0.142450095388;
    msg.z = 0.681580619113;
    msg.k = 0.941549071495;
    msg.m = 0.830188952761;
    msg.n = 0.098663103395;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.171351763062);
    msg.setSource(57229U);
    msg.setSourceEntity(110U);
    msg.setDestination(30845U);
    msg.setDestinationEntity(31U);
    msg.x = 0.251755968507;
    msg.y = 0.168219892155;
    msg.z = 0.829111337559;
    msg.k = 0.635473346199;
    msg.m = 0.413935396044;
    msg.n = 0.793673743974;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.462840703264);
    msg.setSource(43962U);
    msg.setSourceEntity(19U);
    msg.setDestination(52747U);
    msg.setDestinationEntity(165U);
    msg.value = 0.645397967693;

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
    msg.setTimeStamp(0.512321548446);
    msg.setSource(15068U);
    msg.setSourceEntity(72U);
    msg.setDestination(7390U);
    msg.setDestinationEntity(151U);
    msg.value = 0.836570315649;

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
    msg.setTimeStamp(0.621018928406);
    msg.setSource(58783U);
    msg.setSourceEntity(92U);
    msg.setDestination(35754U);
    msg.setDestinationEntity(155U);
    msg.value = 0.88861561415;

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
    msg.setTimeStamp(0.37811044041);
    msg.setSource(17514U);
    msg.setSourceEntity(235U);
    msg.setDestination(44014U);
    msg.setDestinationEntity(161U);
    msg.u = 0.961692505106;
    msg.v = 0.012992812439;
    msg.w = 0.247813130064;
    msg.p = 0.856033120364;
    msg.q = 0.662564253168;
    msg.r = 0.8887611221;
    msg.flags = 108U;

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
    msg.setTimeStamp(0.909790822974);
    msg.setSource(31920U);
    msg.setSourceEntity(225U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(194U);
    msg.u = 0.0278504133859;
    msg.v = 0.94856533489;
    msg.w = 0.291808830012;
    msg.p = 0.463751026423;
    msg.q = 0.201942579038;
    msg.r = 0.406918012176;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.180559940491);
    msg.setSource(59222U);
    msg.setSourceEntity(228U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(159U);
    msg.u = 0.113457153642;
    msg.v = 0.0874320479821;
    msg.w = 0.827187735584;
    msg.p = 0.169739072975;
    msg.q = 0.554734662996;
    msg.r = 0.77356106389;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.56189499492);
    msg.setSource(41755U);
    msg.setSourceEntity(31U);
    msg.setDestination(46277U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 1079363963U;
    msg.start_lat = 0.845275456191;
    msg.start_lon = 0.170806732918;
    msg.start_z = 0.827253020281;
    msg.start_z_units = 92U;
    msg.end_lat = 0.0785388028074;
    msg.end_lon = 0.510303824468;
    msg.end_z = 0.557767227328;
    msg.end_z_units = 114U;
    msg.lradius = 0.69827343049;
    msg.flags = 142U;
    msg.x = 0.66087868815;
    msg.y = 0.0498127603307;
    msg.z = 0.651165409442;
    msg.vx = 0.886754926614;
    msg.vy = 0.122021522799;
    msg.vz = 0.0392860454902;
    msg.course_error = 0.211277104661;
    msg.eta = 3602U;

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
    msg.setTimeStamp(0.353009583356);
    msg.setSource(23536U);
    msg.setSourceEntity(153U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(39U);
    msg.path_ref = 3327579083U;
    msg.start_lat = 0.454802533213;
    msg.start_lon = 0.905425044419;
    msg.start_z = 0.365870689152;
    msg.start_z_units = 207U;
    msg.end_lat = 0.0980060349234;
    msg.end_lon = 0.601774546146;
    msg.end_z = 0.426957707943;
    msg.end_z_units = 205U;
    msg.lradius = 0.720283288306;
    msg.flags = 110U;
    msg.x = 0.956897497833;
    msg.y = 0.901023745092;
    msg.z = 0.31553939321;
    msg.vx = 0.705786132068;
    msg.vy = 0.366825297683;
    msg.vz = 0.15440584439;
    msg.course_error = 0.848274758135;
    msg.eta = 26618U;

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
    msg.setTimeStamp(0.0196289267256);
    msg.setSource(56074U);
    msg.setSourceEntity(207U);
    msg.setDestination(58479U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 2508637061U;
    msg.start_lat = 0.978528251291;
    msg.start_lon = 0.260212361851;
    msg.start_z = 0.777136004627;
    msg.start_z_units = 96U;
    msg.end_lat = 0.280496386919;
    msg.end_lon = 0.328507478925;
    msg.end_z = 0.426477779411;
    msg.end_z_units = 207U;
    msg.lradius = 0.239184625133;
    msg.flags = 95U;
    msg.x = 0.322514625534;
    msg.y = 0.33323826575;
    msg.z = 0.901898679492;
    msg.vx = 0.907133235684;
    msg.vy = 0.622037173273;
    msg.vz = 0.592525470846;
    msg.course_error = 0.436300121185;
    msg.eta = 5580U;

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
    msg.setTimeStamp(0.111962642357);
    msg.setSource(45500U);
    msg.setSourceEntity(179U);
    msg.setDestination(33532U);
    msg.setDestinationEntity(238U);
    msg.k = 0.86536295102;
    msg.m = 0.25075375746;
    msg.n = 0.926707704873;

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
    msg.setTimeStamp(0.685409308796);
    msg.setSource(9725U);
    msg.setSourceEntity(49U);
    msg.setDestination(31624U);
    msg.setDestinationEntity(54U);
    msg.k = 0.643346016453;
    msg.m = 0.0115529456034;
    msg.n = 0.0972485813014;

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
    msg.setTimeStamp(0.95730697262);
    msg.setSource(39044U);
    msg.setSourceEntity(190U);
    msg.setDestination(19761U);
    msg.setDestinationEntity(157U);
    msg.k = 0.674147311477;
    msg.m = 0.524733829587;
    msg.n = 0.634851177071;

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
    msg.setTimeStamp(0.349442981226);
    msg.setSource(57154U);
    msg.setSourceEntity(88U);
    msg.setDestination(16632U);
    msg.setDestinationEntity(5U);
    msg.p = 0.188760605958;
    msg.i = 0.428974115388;
    msg.d = 0.170110290261;
    msg.a = 0.530919305582;

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
    msg.setTimeStamp(0.877647503065);
    msg.setSource(3792U);
    msg.setSourceEntity(111U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(149U);
    msg.p = 0.420307586162;
    msg.i = 0.271683140881;
    msg.d = 0.677966139399;
    msg.a = 0.448920149133;

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
    msg.setTimeStamp(0.671324816653);
    msg.setSource(29009U);
    msg.setSourceEntity(55U);
    msg.setDestination(48424U);
    msg.setDestinationEntity(181U);
    msg.p = 0.260252640752;
    msg.i = 0.358316554765;
    msg.d = 0.195394147299;
    msg.a = 0.104640230189;

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
    msg.setTimeStamp(0.565447360146);
    msg.setSource(24875U);
    msg.setSourceEntity(174U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(136U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.79122444843);
    msg.setSource(7004U);
    msg.setSourceEntity(226U);
    msg.setDestination(57016U);
    msg.setDestinationEntity(109U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.562661586453);
    msg.setSource(38075U);
    msg.setSourceEntity(27U);
    msg.setDestination(27926U);
    msg.setDestinationEntity(216U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.850336797016);
    msg.setSource(48364U);
    msg.setSourceEntity(209U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(231U);
    msg.x = 0.989218015323;
    msg.y = 0.378722117865;
    msg.z = 0.0658597153716;
    msg.vx = 0.0382672123769;
    msg.vy = 0.29831388894;
    msg.vz = 0.938014116303;
    msg.ax = 0.414723870842;
    msg.ay = 0.888180333304;
    msg.az = 0.309793075032;
    msg.flags = 1550U;

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
    msg.setTimeStamp(0.758896743243);
    msg.setSource(2948U);
    msg.setSourceEntity(164U);
    msg.setDestination(19351U);
    msg.setDestinationEntity(76U);
    msg.x = 0.61784968389;
    msg.y = 0.0799507566184;
    msg.z = 0.223147397743;
    msg.vx = 0.294086938419;
    msg.vy = 0.391644765983;
    msg.vz = 0.610623287775;
    msg.ax = 0.0439227140118;
    msg.ay = 0.934095575629;
    msg.az = 0.627475650173;
    msg.flags = 52890U;

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
    msg.setTimeStamp(0.926306907748);
    msg.setSource(29812U);
    msg.setSourceEntity(21U);
    msg.setDestination(27581U);
    msg.setDestinationEntity(224U);
    msg.x = 0.693155301929;
    msg.y = 0.697307423757;
    msg.z = 0.301541349702;
    msg.vx = 0.759189676693;
    msg.vy = 0.644205153245;
    msg.vz = 0.433294047758;
    msg.ax = 0.57193639686;
    msg.ay = 0.43777408268;
    msg.az = 0.0421569767845;
    msg.flags = 35993U;

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
    msg.setTimeStamp(0.199308294391);
    msg.setSource(4159U);
    msg.setSourceEntity(161U);
    msg.setDestination(6037U);
    msg.setDestinationEntity(159U);
    msg.value = 0.706870093438;

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
    msg.setTimeStamp(0.380227671004);
    msg.setSource(1813U);
    msg.setSourceEntity(33U);
    msg.setDestination(64164U);
    msg.setDestinationEntity(93U);
    msg.value = 0.381061893251;

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
    msg.setTimeStamp(0.437599083707);
    msg.setSource(2689U);
    msg.setSourceEntity(254U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(243U);
    msg.value = 0.100394195896;

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
    msg.setTimeStamp(0.462145669079);
    msg.setSource(19451U);
    msg.setSourceEntity(202U);
    msg.setDestination(27118U);
    msg.setDestinationEntity(203U);
    msg.timeout = 17318U;
    msg.lat = 0.0439172080563;
    msg.lon = 0.643083391151;
    msg.z = 0.674210861774;
    msg.z_units = 136U;
    msg.speed = 0.913724213306;
    msg.speed_units = 29U;
    msg.roll = 0.446503600458;
    msg.pitch = 0.914978263338;
    msg.yaw = 0.357295074277;
    msg.custom.assign("BZKQQPQSHMDZCVLOCJTYORYDOJQQCIBSCNIGRRAUGHTKZXQXIONNDFBKNJVPACLBLINBTXLVBDFSUWEITEXHLKMWKKLOAGEPRCAEHSUFONVYZEXUYMPQXLYRSZNAPAJI");

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
    msg.setTimeStamp(0.401858777637);
    msg.setSource(53708U);
    msg.setSourceEntity(190U);
    msg.setDestination(57304U);
    msg.setDestinationEntity(226U);
    msg.timeout = 40140U;
    msg.lat = 0.332640508247;
    msg.lon = 0.238979286571;
    msg.z = 0.0480923596399;
    msg.z_units = 63U;
    msg.speed = 0.311312931568;
    msg.speed_units = 241U;
    msg.roll = 0.353733060475;
    msg.pitch = 0.627804016194;
    msg.yaw = 0.282412042074;
    msg.custom.assign("XSPZVEZRXFYGKPYJJISBWSRFSCMBIAPQAQVCMRATUEXEBLGBCWDZIZYLUCFNTHKDOWHXQWTLHCTWNHOODHEOJKGKJCFVTXOFXQAOHXCKNVGYVM");

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
    msg.setTimeStamp(0.194716958445);
    msg.setSource(58902U);
    msg.setSourceEntity(230U);
    msg.setDestination(8414U);
    msg.setDestinationEntity(44U);
    msg.timeout = 17503U;
    msg.lat = 0.783254567117;
    msg.lon = 0.667136357476;
    msg.z = 0.620899294875;
    msg.z_units = 68U;
    msg.speed = 0.277950982144;
    msg.speed_units = 17U;
    msg.roll = 0.371691138622;
    msg.pitch = 0.0896798788001;
    msg.yaw = 0.101771263523;
    msg.custom.assign("JIETBZCHHGMKMREXFAHQRPCOKBGFLRNLARIHKGBYDPTQCUGAKJUJYBUUZDXSDGZLHPQKVSTOYXZEQVBVVCYIMPRIYKLPZKLZTJFPVKXNWXGZXM");

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
    msg.setTimeStamp(0.896111042534);
    msg.setSource(59367U);
    msg.setSourceEntity(26U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(229U);
    msg.timeout = 44757U;
    msg.lat = 0.879947230235;
    msg.lon = 0.453206643262;
    msg.z = 0.860554406833;
    msg.z_units = 6U;
    msg.speed = 0.690815079544;
    msg.speed_units = 71U;
    msg.duration = 53771U;
    msg.radius = 0.198581585006;
    msg.flags = 201U;
    msg.custom.assign("PSJLCQWDCMABFMESUJMGJQCEOGXVIZCYYALUKJEZPVHWIERYNMPCLDETUCSMEWORGRBKIKUTNOADGHNJPUUFGFTLQEFSWJQHEZBOKRBBRXHCOWUYPWNFLVOGIJDSSQKKJLRZVWAKEVGURZBAXJFVUHIXQWCDNYHEVXFFNMAVXIXFLPQSQBTKYIHTRND");

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
    msg.setTimeStamp(0.433515212549);
    msg.setSource(40602U);
    msg.setSourceEntity(183U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(204U);
    msg.timeout = 26499U;
    msg.lat = 0.960285769094;
    msg.lon = 0.0754422299;
    msg.z = 0.707155516877;
    msg.z_units = 12U;
    msg.speed = 0.925726826076;
    msg.speed_units = 32U;
    msg.duration = 65110U;
    msg.radius = 0.116600587788;
    msg.flags = 34U;
    msg.custom.assign("HVGWUDZFLLPABYYQENLRVCEUSTMTWVWNLKAEJWTCXUYNKFPOHBEDNFKQOBDFULMUMACHJTPXUQJTOMRJZFHRQWGOBSBUXVIGYJFJCFEENALCDWSILZGKCQIGZBESUHYSJXYNIVWUHDSDUMDQXTGSKBPPWHPMJCRQFTMIZHBKSVPQQKRWILWAKBEANTYEJ");

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
    msg.setTimeStamp(0.779240489529);
    msg.setSource(17699U);
    msg.setSourceEntity(160U);
    msg.setDestination(22413U);
    msg.setDestinationEntity(122U);
    msg.timeout = 12594U;
    msg.lat = 0.277844796672;
    msg.lon = 0.88890871227;
    msg.z = 0.137174845458;
    msg.z_units = 223U;
    msg.speed = 0.910151696348;
    msg.speed_units = 110U;
    msg.duration = 8210U;
    msg.radius = 0.117755812558;
    msg.flags = 88U;
    msg.custom.assign("FWKQVXNHKEBYBNZCTZMKOLZYYRLTRUQMDFPVNGWPALMKHWCKCQUJIQAO");

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
    msg.setTimeStamp(0.925389096064);
    msg.setSource(14846U);
    msg.setSourceEntity(28U);
    msg.setDestination(55814U);
    msg.setDestinationEntity(46U);
    msg.custom.assign("JYTZRHMKDUAHIMFAEJVDWSSBLOSDLHTPXWJLRUZGMEPCLNGEBYFRTGCOXQOJJWLKGBBBDZTQVXGNHKLOTFKAWZPTNQJXCXHAJSEFHYJSUQIVPFAGRRGQNEDNAMBUARCNMDQFQXBWGCQPCMHPVTVZIFKPPMKZXYLUEEOLQDRTPWGYUESKLWXXOIYMWSJKNVOBAFRYIIBXUFJVTICFCUVULYSRCWKGOTDZCASI");

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
    msg.setTimeStamp(0.112566749747);
    msg.setSource(30779U);
    msg.setSourceEntity(41U);
    msg.setDestination(64290U);
    msg.setDestinationEntity(172U);
    msg.custom.assign("NARFEGYWWPAEEOFHHAIJGEBBXHDBKWWTMWVRZFBCYHUEXHPQOAPSQMUVBXRKBBNGTEXKOGEHZGIQQQKMEQLWIYVSGOZZ");

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
    msg.setTimeStamp(0.999539446466);
    msg.setSource(59693U);
    msg.setSourceEntity(14U);
    msg.setDestination(33880U);
    msg.setDestinationEntity(218U);
    msg.custom.assign("BOKRUCPFUFRDQTXSUMKIEXHLRAKUMBYGPOCN");

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
    msg.setTimeStamp(0.765944148104);
    msg.setSource(16037U);
    msg.setSourceEntity(46U);
    msg.setDestination(51927U);
    msg.setDestinationEntity(210U);
    msg.timeout = 12288U;
    msg.lat = 0.665651191233;
    msg.lon = 0.690795833854;
    msg.z = 0.943915290937;
    msg.z_units = 188U;
    msg.duration = 15624U;
    msg.speed = 0.832281999096;
    msg.speed_units = 130U;
    msg.type = 55U;
    msg.radius = 0.971488519511;
    msg.length = 0.342786448363;
    msg.bearing = 0.347258158015;
    msg.direction = 239U;
    msg.custom.assign("SLTDJBRVLNPXHCRMEWUGNUIKXSCGLIQKCKKCALZBHCEGTGFIFVUUKRJOXIIPMASEBBBQGDSBSYXSZKYLMFPCCJNJWTPTJDZCPIULLNWOLQYREIUXKBOZYOFUUQVQYZQSFDRVDQANYHVDUWBOAHHXNGQYHKJPPCHSNAWTVRCTNMXTBFSOJZWOVXMZZOKEGDNENJ");

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
    msg.setTimeStamp(0.589617383725);
    msg.setSource(49540U);
    msg.setSourceEntity(28U);
    msg.setDestination(24448U);
    msg.setDestinationEntity(123U);
    msg.timeout = 16421U;
    msg.lat = 0.977018205873;
    msg.lon = 0.547650998162;
    msg.z = 0.173445971382;
    msg.z_units = 75U;
    msg.duration = 4387U;
    msg.speed = 0.330152242458;
    msg.speed_units = 132U;
    msg.type = 250U;
    msg.radius = 0.692182369594;
    msg.length = 0.562074272732;
    msg.bearing = 0.495077446277;
    msg.direction = 190U;
    msg.custom.assign("TCESKYUCRFZYPQHDAGOSTAECIWDYDANWMDFRMZTKWRWAPRKZWFHNEGLMXXTQFKZVJQNAQHEBDZQKSYHBTOBQPTYPUIUYIVQVEAOXWJNYFHXIOUEPZMGSKWPYNVLBSTJRQJWTVSIVJQM");

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
    msg.setTimeStamp(0.0829734598663);
    msg.setSource(31005U);
    msg.setSourceEntity(54U);
    msg.setDestination(9480U);
    msg.setDestinationEntity(116U);
    msg.timeout = 10792U;
    msg.lat = 0.227518304484;
    msg.lon = 0.96663955529;
    msg.z = 0.750820251909;
    msg.z_units = 25U;
    msg.duration = 10839U;
    msg.speed = 0.932262595087;
    msg.speed_units = 253U;
    msg.type = 167U;
    msg.radius = 0.6666697237;
    msg.length = 0.44077429464;
    msg.bearing = 0.434041185789;
    msg.direction = 96U;
    msg.custom.assign("AQINELBWLPTTNBGHLQSMZADDRPEIKGRFDMDJJYDUESSBOIAKYWTZWBGOSHIOHBGVMQPFCNDAQWUBSFFSKVCXWCRFJQFANJZRQGXEWYBSCVLKIAQTWEONUEDHIINQFTWVRRBVBYSEXTMOMVNNXKPHLEPTUYCGLFUMVTYONRWMUCUVPTXDSMKVDXKFPUZCZLGAGPRZXCJUSCLZZKHXIVQHLTQKF");

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
    msg.setTimeStamp(0.637971770381);
    msg.setSource(51692U);
    msg.setSourceEntity(75U);
    msg.setDestination(17235U);
    msg.setDestinationEntity(8U);
    msg.duration = 29443U;
    msg.custom.assign("JJFALDIPMNLJLXQCWPJEYGHTBIXWNGZQFAVDNPLFMVOXVOWNRZCUBEMQXIVURSMQCMJAMPXOWXLEZLUADTWPMTVSBIZDYUBTTCDCBNIZBHSBOXSGRCZHHIKRKFAKOQOUEDFCUPAYYJFJZHQGEARSQHOGNRTWONKASLGGNMEBDSSVPTDERORFHYWXJVG");

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
    msg.setTimeStamp(0.0917082779991);
    msg.setSource(28312U);
    msg.setSourceEntity(57U);
    msg.setDestination(39656U);
    msg.setDestinationEntity(151U);
    msg.duration = 61194U;
    msg.custom.assign("FZLGOBEXHHLOLQRAKPCCOEFXSRCNSGOFQKMUKWTRVQUMZHBVOYFREYVYJHFTTJGFNPXYRAZBKWUSJCYDGHAFOKDDBCGNBQTCVUKUPDJJQURVUPQVBPHMFHEJCIIIDALKQPNKSAGHEOGZRNWDWVXMLXMZWINMPTZQSIKDEBYGRJIXBD");

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
    msg.setTimeStamp(0.957484486205);
    msg.setSource(2978U);
    msg.setSourceEntity(13U);
    msg.setDestination(49U);
    msg.setDestinationEntity(2U);
    msg.duration = 44608U;
    msg.custom.assign("RQCPUCVIRVMDEIDDSRTFQCGEWXIJSZVMZSVZ");

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
    msg.setTimeStamp(0.832767537188);
    msg.setSource(49731U);
    msg.setSourceEntity(77U);
    msg.setDestination(42498U);
    msg.setDestinationEntity(243U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.022763067445;
    msg.control.set(tmp_msg_0);
    msg.duration = 32129U;
    msg.custom.assign("RRSINYAATYVCFZIJNAPKHZMPHBAQLXUBSAOCRLIJHSKDUIEFQZWDTHGROYBNUCQZXMAFPVZZUOSRFDEQHLFCGWDGGXGOYIIYVVLWEKYLOTKKNZOJUHLPDVIOPRMAMTGCIRHSPFESVUTZQETJUHXQFAEYKOPEBQXXBMIMVGHOAZWXXWBXNZYNJJCSGBGPNVBDJWLKDQBVCSTMHIRRC");

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
    msg.setTimeStamp(0.354691031033);
    msg.setSource(15035U);
    msg.setSourceEntity(18U);
    msg.setDestination(42667U);
    msg.setDestinationEntity(26U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.674619675182;
    msg.control.set(tmp_msg_0);
    msg.duration = 26261U;
    msg.custom.assign("YGEJQAJCPCPSMWUDYSULTBRSZIVUKMBSTKMBQIYUGBENQKANARYIGGAMFTMNEYVHMGHUKGZFONCBICONJHALWOIPPQVJTBPFPVWWQOZZELXRFZIQOHIERVNPKHEHRZLKXESLDBIGDCUEYTCNQAD");

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
    msg.setTimeStamp(0.784544194164);
    msg.setSource(6345U);
    msg.setSourceEntity(184U);
    msg.setDestination(13639U);
    msg.setDestinationEntity(90U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.765684454355;
    tmp_msg_0.z_units = 149U;
    msg.control.set(tmp_msg_0);
    msg.duration = 19441U;
    msg.custom.assign("WKJJBFUSEGJMXVGYDKJCCPEFUTWAOUGLDIUXMVQNJKZBAEEHYFENQILLETOIKZRTUESJFGXVSFHDRSYMZWNKLAXTGBQZBXAGVNDMPTPRHRTCALKZYCBSQVUYXZHOCUGGJXCMTSMDMPNRRQDQIFNOFSEYACFWLCHFBMAJIKDXTGOLIQXAOVSOWJRBDKWFIBUPNLWP");

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
    msg.setTimeStamp(0.649560883001);
    msg.setSource(49785U);
    msg.setSourceEntity(27U);
    msg.setDestination(9229U);
    msg.setDestinationEntity(114U);
    msg.timeout = 24621U;
    msg.lat = 0.0907180750174;
    msg.lon = 0.0100682629598;
    msg.z = 0.714451443946;
    msg.z_units = 248U;
    msg.speed = 0.411412468612;
    msg.speed_units = 73U;
    msg.bearing = 0.0318402326185;
    msg.cross_angle = 0.546916571386;
    msg.width = 0.113035739431;
    msg.length = 0.468362536969;
    msg.hstep = 0.133151881597;
    msg.coff = 23U;
    msg.alternation = 88U;
    msg.flags = 151U;
    msg.custom.assign("ZITZUCUTIBUQNMWVYHQXXGQFJBRIOVRBRQELLLSRPBZLGZYPFPKOFCSTMHJDRFSUUNYJEINWEBEJIXMNOFKTXLOHJEAHAJFAMBKYXZIXAGDRSSQATMDRIJAYCGPLCSPQEYAERWESTNFKVNPOFJKLOHWWCGDUDZWBOHJBULA");

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
    msg.setTimeStamp(0.205880702885);
    msg.setSource(61409U);
    msg.setSourceEntity(82U);
    msg.setDestination(53995U);
    msg.setDestinationEntity(33U);
    msg.timeout = 10635U;
    msg.lat = 0.936081170765;
    msg.lon = 0.313022325333;
    msg.z = 0.93759242231;
    msg.z_units = 237U;
    msg.speed = 0.0998658872658;
    msg.speed_units = 13U;
    msg.bearing = 0.387796345538;
    msg.cross_angle = 0.650049865079;
    msg.width = 0.263122931314;
    msg.length = 0.834793016879;
    msg.hstep = 0.994219912257;
    msg.coff = 151U;
    msg.alternation = 18U;
    msg.flags = 5U;
    msg.custom.assign("FQZNVDCIKESHAGKPQZNLPDBAYEWWCMYDWAJVZUGNDZCHKBJSCXXGVHMYZHYXLRKUWLGIVXLRGWCFSFQXZTWBKEEZPIWTRLKNUF");

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
    msg.setTimeStamp(0.784058544994);
    msg.setSource(55518U);
    msg.setSourceEntity(184U);
    msg.setDestination(53255U);
    msg.setDestinationEntity(39U);
    msg.timeout = 23391U;
    msg.lat = 0.427511376563;
    msg.lon = 0.825432419876;
    msg.z = 0.681907025868;
    msg.z_units = 184U;
    msg.speed = 0.359353836272;
    msg.speed_units = 115U;
    msg.bearing = 0.353010855255;
    msg.cross_angle = 0.135094152337;
    msg.width = 0.434609151649;
    msg.length = 0.610162948523;
    msg.hstep = 0.474478499562;
    msg.coff = 153U;
    msg.alternation = 79U;
    msg.flags = 189U;
    msg.custom.assign("VPZHJAJKIYFDBWLOCDDYBXMYUPQIUROWDNLGVQHLNVSGTWQQASZEESPFQNZELBLRXVKTWOOTDTUWLOVWQYJZCRLUXIVWMFBJUMSOPKFEXMRRVU");

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
    msg.setTimeStamp(0.685468814534);
    msg.setSource(5492U);
    msg.setSourceEntity(228U);
    msg.setDestination(23728U);
    msg.setDestinationEntity(253U);
    msg.timeout = 31732U;
    msg.lat = 0.0220053251368;
    msg.lon = 0.160008637852;
    msg.z = 0.755598405352;
    msg.z_units = 215U;
    msg.speed = 0.52533845999;
    msg.speed_units = 54U;
    msg.custom.assign("CPZCPSKFOFECEOHAWSWJEEOJPVUKIYKMBNJUSYMNGNYALKWKYOYPLAOSDIGBYBUXTHZDQSWVWRQMSWFHGKIGSHTJFYHGMFCQFGHEQDZJAYUFAJNXJMUAINQMEWLHUNAVXDDCLUDXTVTLI");

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
    msg.setTimeStamp(0.0195033827144);
    msg.setSource(56131U);
    msg.setSourceEntity(2U);
    msg.setDestination(7094U);
    msg.setDestinationEntity(21U);
    msg.timeout = 7484U;
    msg.lat = 0.715974711856;
    msg.lon = 0.744221191196;
    msg.z = 0.813563712711;
    msg.z_units = 181U;
    msg.speed = 0.421228062637;
    msg.speed_units = 153U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.818708603429;
    tmp_msg_0.y = 0.432228937225;
    tmp_msg_0.z = 0.392562770245;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LPPSTPDZIWNIYNOESFQLSDBATEQDEKCAQYQQDRLTVSTVEVLACDPMWMGELTIMZDVHWZDDSYGUKCGVNNQOHOJAKIYCIIDCHTUZZYKOPQCONYBHRIAYAGNPKOHVPVIFPWGZLTHMTZAZULLUIYOMSNZDFXUORGMKKSSMXJRKRBOSAXBFYGKWLQTCSBUUJKWBJNWHJRJFHBRFRBVXXOJAVEWJCCJXJGGYNNRRCHVHEAXFFFUQGULQXU");

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
    msg.setTimeStamp(0.723608442255);
    msg.setSource(24570U);
    msg.setSourceEntity(186U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(235U);
    msg.timeout = 11494U;
    msg.lat = 0.508847349784;
    msg.lon = 0.180522523008;
    msg.z = 0.547796217797;
    msg.z_units = 165U;
    msg.speed = 0.306750070309;
    msg.speed_units = 146U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.217755833473;
    tmp_msg_0.y = 0.0802390439802;
    tmp_msg_0.z = 0.823847827844;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RQUOSZCMRHTIIZNUPQKWPTIWZIXVYLLKIUTZDJJRQMFKPHUNBOFNPVOVZOHCUCVQOVYFCXZSITSBFSLGGAPMHDECKVTBGZKQHFXJRJPKN");

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
    msg.setTimeStamp(0.423662441062);
    msg.setSource(21413U);
    msg.setSourceEntity(85U);
    msg.setDestination(37590U);
    msg.setDestinationEntity(246U);
    msg.x = 0.38150584452;
    msg.y = 0.071706244687;
    msg.z = 0.777345484357;

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
    msg.setTimeStamp(0.601722718945);
    msg.setSource(33775U);
    msg.setSourceEntity(245U);
    msg.setDestination(9794U);
    msg.setDestinationEntity(14U);
    msg.x = 0.841949120994;
    msg.y = 0.257913494218;
    msg.z = 0.16773635313;

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
    msg.setTimeStamp(0.221899150434);
    msg.setSource(58780U);
    msg.setSourceEntity(231U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(15U);
    msg.x = 0.148005624892;
    msg.y = 0.387512828528;
    msg.z = 0.385911102622;

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
    msg.setTimeStamp(0.508561837933);
    msg.setSource(14932U);
    msg.setSourceEntity(133U);
    msg.setDestination(62532U);
    msg.setDestinationEntity(219U);
    msg.timeout = 53622U;
    msg.lat = 0.353659890278;
    msg.lon = 0.340937780066;
    msg.z = 0.464628867379;
    msg.z_units = 148U;
    msg.amplitude = 0.542828825152;
    msg.pitch = 0.656573555243;
    msg.speed = 0.0512360785529;
    msg.speed_units = 234U;
    msg.custom.assign("JXAXRZPTFYCDISSTCHCNRVWPXCNWFMQZWWWHBIKVEFNXSJBBZVOTMHMUSUPRMITDWYOIGEKGEODLAUEQEKIUABDHFRCDYBGEMGLANUSVXQRSYJPOYZDJYKZWDBXTNJTXSQP");

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
    msg.setTimeStamp(0.108778044816);
    msg.setSource(10745U);
    msg.setSourceEntity(164U);
    msg.setDestination(10727U);
    msg.setDestinationEntity(89U);
    msg.timeout = 29693U;
    msg.lat = 0.152534493166;
    msg.lon = 0.275469233142;
    msg.z = 0.547493973715;
    msg.z_units = 209U;
    msg.amplitude = 0.507725060543;
    msg.pitch = 0.0632688316527;
    msg.speed = 0.521600946762;
    msg.speed_units = 127U;
    msg.custom.assign("KYGWKZAMGSFPHNJBPFDIULZMILCPDLNYKREFZCJQVGOYKTEQGRRCHVPFHNCGMYZIKTMOATFALVXPBZUQBLRKDAOUFLWGTTMYZZZTKACFVVWJPIDOGEECXROLRSVJKLVXYAOLBSWZWWCJPJEUD");

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
    msg.setTimeStamp(0.864242143908);
    msg.setSource(14106U);
    msg.setSourceEntity(241U);
    msg.setDestination(6943U);
    msg.setDestinationEntity(97U);
    msg.timeout = 44401U;
    msg.lat = 0.23545722947;
    msg.lon = 0.923184012181;
    msg.z = 0.915750213585;
    msg.z_units = 149U;
    msg.amplitude = 0.955110384305;
    msg.pitch = 0.10346365705;
    msg.speed = 0.414527858984;
    msg.speed_units = 6U;
    msg.custom.assign("LVYNCATRAQAXDTQVDWBCZEFMGVWXOZFLSJXAPXHRHSCRRPVMNYOYJSUBGKXBOHNBAQLJOGEKAHJMSDWCDCQBQPEPDOZ");

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
    msg.setTimeStamp(0.818389091489);
    msg.setSource(29177U);
    msg.setSourceEntity(173U);
    msg.setDestination(10320U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.0654850005886);
    msg.setSource(62289U);
    msg.setSourceEntity(188U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.848385719566);
    msg.setSource(48285U);
    msg.setSourceEntity(220U);
    msg.setDestination(48423U);
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
    msg.setTimeStamp(0.622848134825);
    msg.setSource(50098U);
    msg.setSourceEntity(134U);
    msg.setDestination(26323U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.147684223345;
    msg.lon = 0.206073498696;
    msg.z = 0.423446809075;
    msg.z_units = 36U;
    msg.radius = 0.507159230927;
    msg.duration = 57335U;
    msg.speed = 0.365643011058;
    msg.speed_units = 92U;
    msg.custom.assign("MPEELMFSALRVDEGWXQFTQELCOTU");

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
    msg.setTimeStamp(0.266118672467);
    msg.setSource(14276U);
    msg.setSourceEntity(61U);
    msg.setDestination(58623U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.165394316102;
    msg.lon = 0.962064559554;
    msg.z = 0.182944264766;
    msg.z_units = 85U;
    msg.radius = 0.826116827961;
    msg.duration = 39297U;
    msg.speed = 0.641342813745;
    msg.speed_units = 245U;
    msg.custom.assign("ZZCDHYWDAWZNUCVFDBACRUQBCXUGSMINYMIMUYKUJGXKIINROCTMHYNJBGPVIVZGXBWEKBXWTOYZPZFXOMR");

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
    msg.setTimeStamp(0.0924465875486);
    msg.setSource(33631U);
    msg.setSourceEntity(81U);
    msg.setDestination(64051U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.598793522379;
    msg.lon = 0.507664949279;
    msg.z = 0.483518900235;
    msg.z_units = 92U;
    msg.radius = 0.23962258797;
    msg.duration = 43231U;
    msg.speed = 0.795100181463;
    msg.speed_units = 194U;
    msg.custom.assign("SOCAESPOIBSBNJQVFDYNCVLGGEPMZEKVIYWEMRDZKJOHDNWQBPKVALXNZMPWWDEXJJYPKKHPQCXDCYLKZJUTKDHGFXXMFLWJJBCHSWPXOZ");

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
    msg.setTimeStamp(0.887227482238);
    msg.setSource(17621U);
    msg.setSourceEntity(17U);
    msg.setDestination(57596U);
    msg.setDestinationEntity(85U);
    msg.timeout = 23460U;
    msg.flags = 226U;
    msg.lat = 0.842945290135;
    msg.lon = 0.348666899574;
    msg.start_z = 0.156482898908;
    msg.start_z_units = 48U;
    msg.end_z = 0.0813883940003;
    msg.end_z_units = 98U;
    msg.radius = 0.587790020555;
    msg.speed = 0.0671269276874;
    msg.speed_units = 134U;
    msg.custom.assign("IKIWJSKEKKSEVGFOOMMDD");

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
    msg.setTimeStamp(0.970562388692);
    msg.setSource(48991U);
    msg.setSourceEntity(84U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(142U);
    msg.timeout = 41319U;
    msg.flags = 144U;
    msg.lat = 0.961344781677;
    msg.lon = 0.46088884429;
    msg.start_z = 0.833361323544;
    msg.start_z_units = 19U;
    msg.end_z = 0.35319839601;
    msg.end_z_units = 78U;
    msg.radius = 0.0515602032381;
    msg.speed = 0.860446243137;
    msg.speed_units = 167U;
    msg.custom.assign("YOWCEMTFMEGNYBQGSJDXLQXPHIUAHYDOXGKXJVJVFYRZXBSKKBNAXAHLDDEZBNOUMBVVOGGFPIWCPRTUVWDEQDDYOOZILEKIYQEJSSLFTGSNSKABUSVJTMMULUDMUWVAYRWQBOPWJAJBJZYHGEBSRZNRCFNKHWQAKIRIZPCMUTHFGCISPQFERAKLIGHW");

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
    msg.setTimeStamp(0.96478472751);
    msg.setSource(26600U);
    msg.setSourceEntity(188U);
    msg.setDestination(39223U);
    msg.setDestinationEntity(112U);
    msg.timeout = 14917U;
    msg.flags = 154U;
    msg.lat = 0.880467057373;
    msg.lon = 0.103639950481;
    msg.start_z = 0.217767197478;
    msg.start_z_units = 253U;
    msg.end_z = 0.920861133813;
    msg.end_z_units = 88U;
    msg.radius = 0.183557405001;
    msg.speed = 0.03432552462;
    msg.speed_units = 235U;
    msg.custom.assign("YFBAVHIZHFSZWFDUSWJAOMPYHCIKOYHNVGCRLKVMK");

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
    msg.setTimeStamp(0.399689819199);
    msg.setSource(38265U);
    msg.setSourceEntity(221U);
    msg.setDestination(63128U);
    msg.setDestinationEntity(148U);
    msg.timeout = 58237U;
    msg.lat = 0.41123945721;
    msg.lon = 0.471975740934;
    msg.z = 0.640882141684;
    msg.z_units = 243U;
    msg.speed = 0.260090029913;
    msg.speed_units = 186U;
    msg.custom.assign("YECYKTABPWUKFHXVRZFATVNNGHGXPSITMTDCKXZSRKJGOTYLFBFPIVKJJRMQNLZEUGWVPNOODUCADTORLBHTQIDGSV");

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
    msg.setTimeStamp(0.134186722714);
    msg.setSource(42701U);
    msg.setSourceEntity(112U);
    msg.setDestination(55271U);
    msg.setDestinationEntity(175U);
    msg.timeout = 21898U;
    msg.lat = 0.0687623720358;
    msg.lon = 0.341114877992;
    msg.z = 0.811195151542;
    msg.z_units = 157U;
    msg.speed = 0.5589448561;
    msg.speed_units = 86U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0163770689034;
    tmp_msg_0.y = 0.473028075187;
    tmp_msg_0.z = 0.503038094535;
    tmp_msg_0.t = 0.626960212234;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XTICBMTDWYBAXICVFYKGDZZXSWBNAWOCHWHBLSOJNEZWLHHVIRLJKCXWAXHTQIPRATUTNNRAMVMKHWEDYVDBEYFPKYJGFNXBZEJKLVRLITGBAQOFPHXKRHGZJYRRJLCSPYUMFVQLKGCEIJIBMOUDYUQSVXZAXNEQCUWGUDNQOTPLQBPVKFBAUXHSLJQJURPCEDPZHJPFTMLZRNSEKGFSQUFMDVDOFEMEWTDKS");

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
    msg.setTimeStamp(0.162564115275);
    msg.setSource(14519U);
    msg.setSourceEntity(57U);
    msg.setDestination(32295U);
    msg.setDestinationEntity(79U);
    msg.timeout = 64031U;
    msg.lat = 0.0525617733426;
    msg.lon = 0.0552119181492;
    msg.z = 0.494025258484;
    msg.z_units = 202U;
    msg.speed = 0.49345740074;
    msg.speed_units = 143U;
    msg.custom.assign("BGHLLSILAESXVRTVWMTMMYQQHSYXGQDKINYXQYTHYOMTYQWNQAULFXKDBBOCPACKKHWZOEKJO");

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
    msg.setTimeStamp(0.737451643084);
    msg.setSource(5985U);
    msg.setSourceEntity(41U);
    msg.setDestination(40350U);
    msg.setDestinationEntity(169U);
    msg.x = 0.869986862623;
    msg.y = 0.0116747169435;
    msg.z = 0.398145744072;
    msg.t = 0.68480367762;

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
    msg.setTimeStamp(0.997581964209);
    msg.setSource(3075U);
    msg.setSourceEntity(2U);
    msg.setDestination(16033U);
    msg.setDestinationEntity(135U);
    msg.x = 0.627454868733;
    msg.y = 0.761556229338;
    msg.z = 0.0776454270921;
    msg.t = 0.596920910073;

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
    msg.setTimeStamp(0.0414087565587);
    msg.setSource(26773U);
    msg.setSourceEntity(206U);
    msg.setDestination(19644U);
    msg.setDestinationEntity(131U);
    msg.x = 0.432608275245;
    msg.y = 0.334433044094;
    msg.z = 0.993131741164;
    msg.t = 0.128450558966;

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
    msg.setTimeStamp(0.504564971165);
    msg.setSource(48444U);
    msg.setSourceEntity(222U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(134U);
    msg.timeout = 52479U;
    msg.name.assign("OFDVFPKLSFGMLHUQNHDKWGAAWDOQROIPFAARZTOPHFZIEJMJVIASZASXQJOTMBCUOGZTDXPOWQHPJBNL");
    msg.custom.assign("ONZEDPAKUYFUMLPAZSPKGXUDIFVRXHQJHWDMFWWYQTHLBYDPTEIJKGUKVB");

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
    msg.setTimeStamp(0.73412434219);
    msg.setSource(15318U);
    msg.setSourceEntity(234U);
    msg.setDestination(6109U);
    msg.setDestinationEntity(15U);
    msg.timeout = 12458U;
    msg.name.assign("MPHBIJOOVWSXQOKM");
    msg.custom.assign("GNVCPTZNJQOEJMQFBUPRPCWLAUYXOLHKXMUMCUMQKLDXKABEVTFIYGKKTTSSPSSCFEWGV");

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
    msg.setTimeStamp(0.652301151785);
    msg.setSource(63827U);
    msg.setSourceEntity(167U);
    msg.setDestination(57219U);
    msg.setDestinationEntity(158U);
    msg.timeout = 11443U;
    msg.name.assign("IPMAMEQLWTNKRMDKNERPYBTICOCYCCEHVKWVJGFYRQKWFSHTUVUEJMNQHFFWRWOZQYVEWAGBHPEHPJKXUOFFMGBVJBXDNSDAWGZXJSNXDXTQLCWVUNENIXIPFTTPWTREJZMYWBCVLLZMEFRUZLAHOAIHZZFCLUJSKICJYGXOKDI");
    msg.custom.assign("KHEIHGLPGYCBEWLKZTASO");

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
    msg.setTimeStamp(0.951600555555);
    msg.setSource(33107U);
    msg.setSourceEntity(65U);
    msg.setDestination(36417U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.526609678927;
    msg.lon = 0.756034717383;
    msg.z = 0.539408725179;
    msg.z_units = 224U;
    msg.speed = 0.854801967362;
    msg.speed_units = 26U;
    msg.start_time = 0.697193882537;
    msg.custom.assign("HZZBVVSRAEKVQCWYBHPXSAISUJCWDBQEKRWWRSXMODWSJAULSCIJELIDLIZHPGXIXTQYORDVEIXFTOMDZRBRSWSEMFQPVGKPGTXZIXUHHYNPYGBRYJYEDWOTFGJNFFGIOZDNTCUCBBNGTAAYHDMUUOJJLMPHKFLXLKCTLPWZEFMEZAMAGQVUPCBFJVAQAVYOBWKRRSDFIUUONXNGTNTUZHPKWZCVDQ");

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
    msg.setTimeStamp(0.894110901008);
    msg.setSource(52691U);
    msg.setSourceEntity(251U);
    msg.setDestination(33722U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.561195273875;
    msg.lon = 0.917625248475;
    msg.z = 0.0256093395534;
    msg.z_units = 178U;
    msg.speed = 0.538179960175;
    msg.speed_units = 30U;
    msg.start_time = 0.727157340972;
    msg.custom.assign("EVGQKDTFFFOAJSICKFWEMAUGNRJXAXMPRMTTDR");

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
    msg.setTimeStamp(0.374766334828);
    msg.setSource(17611U);
    msg.setSourceEntity(67U);
    msg.setDestination(59976U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.031913327489;
    msg.lon = 0.13870251579;
    msg.z = 0.661866562909;
    msg.z_units = 188U;
    msg.speed = 0.323964682237;
    msg.speed_units = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22864U;
    tmp_msg_0.off_x = 0.571788262438;
    tmp_msg_0.off_y = 0.942058658455;
    tmp_msg_0.off_z = 0.272459392148;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.365652555329;
    msg.custom.assign("DXJWUCZUFLPOVIFLPQJVSWKQYGAOKHSKCKUUQTZWHGFVPXTQGLNOCFOKWCYNSFGMVYSQJEEOEEMAMPUANGCLMCLZDMBRTXWIAUZJTVARAUB");

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
    msg.setTimeStamp(0.0644502584358);
    msg.setSource(42522U);
    msg.setSourceEntity(161U);
    msg.setDestination(65526U);
    msg.setDestinationEntity(168U);
    msg.vid = 56382U;
    msg.off_x = 0.0827822765476;
    msg.off_y = 0.960620420927;
    msg.off_z = 0.529487963104;

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
    msg.setTimeStamp(0.947266613495);
    msg.setSource(41254U);
    msg.setSourceEntity(175U);
    msg.setDestination(63839U);
    msg.setDestinationEntity(88U);
    msg.vid = 58055U;
    msg.off_x = 0.0319797708494;
    msg.off_y = 0.477213607413;
    msg.off_z = 0.447869084035;

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
    msg.setTimeStamp(0.540978572349);
    msg.setSource(9566U);
    msg.setSourceEntity(140U);
    msg.setDestination(265U);
    msg.setDestinationEntity(208U);
    msg.vid = 57263U;
    msg.off_x = 0.82171755811;
    msg.off_y = 0.842417123195;
    msg.off_z = 0.726996662563;

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
    msg.setTimeStamp(0.398840317835);
    msg.setSource(11749U);
    msg.setSourceEntity(244U);
    msg.setDestination(10369U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0100395824684);
    msg.setSource(39128U);
    msg.setSourceEntity(63U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.79757202446);
    msg.setSource(43448U);
    msg.setSourceEntity(213U);
    msg.setDestination(56614U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.0802527364424);
    msg.setSource(39122U);
    msg.setSourceEntity(85U);
    msg.setDestination(13297U);
    msg.setDestinationEntity(26U);
    msg.mid = 36077U;

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
    msg.setTimeStamp(0.126593020516);
    msg.setSource(10124U);
    msg.setSourceEntity(234U);
    msg.setDestination(65206U);
    msg.setDestinationEntity(153U);
    msg.mid = 43380U;

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
    msg.setTimeStamp(0.0727892523413);
    msg.setSource(60337U);
    msg.setSourceEntity(6U);
    msg.setDestination(60921U);
    msg.setDestinationEntity(67U);
    msg.mid = 60578U;

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
    msg.setTimeStamp(0.976330548817);
    msg.setSource(45040U);
    msg.setSourceEntity(208U);
    msg.setDestination(7196U);
    msg.setDestinationEntity(222U);
    msg.state = 128U;
    msg.eta = 14508U;
    msg.info.assign("PFSUZHANVLHNBWHLPIVSASNKNVDVBEYXFGFZBSKUFJQUQAYGPCWOYFYYOTHJGLHCQDMKYJCUYLTCXSZQRBQXJZVRCQVCVSQJMTM");

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
    msg.setTimeStamp(0.536295358622);
    msg.setSource(64219U);
    msg.setSourceEntity(149U);
    msg.setDestination(47418U);
    msg.setDestinationEntity(111U);
    msg.state = 116U;
    msg.eta = 609U;
    msg.info.assign("VRTXUIJZCYKGLVLMJBHH");

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
    msg.setTimeStamp(0.881839382299);
    msg.setSource(39073U);
    msg.setSourceEntity(123U);
    msg.setDestination(41244U);
    msg.setDestinationEntity(169U);
    msg.state = 236U;
    msg.eta = 3867U;
    msg.info.assign("OTBLPMUZSIEFSAQWHOSSLBJMQIEJQABGQTAPATKVZKHVJUVHHBYDDWXECRNKVZIUFYQHPFRARMTXTVEXJSCUBIUWZYTVTGAYLIIMRNDIFBHYSDWAYKTPNWUOFGYDZOZULPDNDPBCWMPNXXLIYXWHMKHRNAGVQWOSORSBZWZGRDQKLAPXNSZOXFBSFTINMKEXJAGVDCFDVGJPLCQMMRLQEJBJUGFKOERYTUFXQGZKGEYNUIRVNLMEJCCLOH");

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
    msg.setTimeStamp(0.148183992205);
    msg.setSource(11067U);
    msg.setSourceEntity(57U);
    msg.setDestination(36659U);
    msg.setDestinationEntity(253U);
    msg.system = 9822U;
    msg.duration = 33941U;
    msg.speed = 0.0391080359993;
    msg.speed_units = 68U;
    msg.x = 0.520405097979;
    msg.y = 0.349806677753;
    msg.z = 0.684867262732;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.189542763922);
    msg.setSource(36499U);
    msg.setSourceEntity(25U);
    msg.setDestination(968U);
    msg.setDestinationEntity(158U);
    msg.system = 32954U;
    msg.duration = 19994U;
    msg.speed = 0.632456015351;
    msg.speed_units = 93U;
    msg.x = 0.415653684454;
    msg.y = 0.382132639528;
    msg.z = 0.0873416962511;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.276309732688);
    msg.setSource(18773U);
    msg.setSourceEntity(34U);
    msg.setDestination(14120U);
    msg.setDestinationEntity(188U);
    msg.system = 37130U;
    msg.duration = 44619U;
    msg.speed = 0.651260761311;
    msg.speed_units = 165U;
    msg.x = 0.0906465767133;
    msg.y = 0.338216894991;
    msg.z = 0.125286989131;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.803983214675);
    msg.setSource(43128U);
    msg.setSourceEntity(117U);
    msg.setDestination(14219U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.434817135903;
    msg.lon = 0.432309952803;
    msg.speed = 0.84966761981;
    msg.speed_units = 95U;
    msg.duration = 44086U;
    msg.sys_a = 33259U;
    msg.sys_b = 24165U;
    msg.move_threshold = 0.599090464392;

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
    msg.setTimeStamp(0.281593532056);
    msg.setSource(8399U);
    msg.setSourceEntity(160U);
    msg.setDestination(8602U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.826882679602;
    msg.lon = 0.74955848248;
    msg.speed = 0.159331529176;
    msg.speed_units = 130U;
    msg.duration = 29229U;
    msg.sys_a = 45463U;
    msg.sys_b = 11348U;
    msg.move_threshold = 0.00423270745331;

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
    msg.setTimeStamp(0.0897020396233);
    msg.setSource(42395U);
    msg.setSourceEntity(145U);
    msg.setDestination(50951U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.660343841333;
    msg.lon = 0.441781601131;
    msg.speed = 0.84095963204;
    msg.speed_units = 243U;
    msg.duration = 12137U;
    msg.sys_a = 61415U;
    msg.sys_b = 4886U;
    msg.move_threshold = 0.906611614492;

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
    msg.setTimeStamp(0.598312993689);
    msg.setSource(14608U);
    msg.setSourceEntity(160U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.698224071129;
    msg.lon = 0.92528489598;
    msg.z = 0.0495842222558;
    msg.z_units = 96U;
    msg.speed = 0.2976268783;
    msg.speed_units = 240U;
    msg.custom.assign("WUOWLMFRKMTOQUSYSJGITREPQAQKPSHSPPBUASGZZTERUAFZGXGTZWOSQJJGIEPASPLKDFDVXFEOTGMBGYERABRZNZEWDGHLACMBLSNIKCFGCYQMVWUTYXOVQCXCHKAFEHUOZAEHHINAIEIPVBGXSCQTQLRJUNHXPQQDYTBACRJNICMOTIJLNKNCRPTMNXURIKVFUUKPZVFWWLBDBZXKZDDKFJDNYBYXEMFNVYVOYM");

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
    msg.setTimeStamp(0.261541607303);
    msg.setSource(34148U);
    msg.setSourceEntity(116U);
    msg.setDestination(47589U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.412242899546;
    msg.lon = 0.901786357022;
    msg.z = 0.56064382486;
    msg.z_units = 53U;
    msg.speed = 0.725911717148;
    msg.speed_units = 121U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.322301668505;
    tmp_msg_0.lon = 0.860330551219;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QBPTHOLRYCEEWLFDNRPECOIKXVLXSKYLGDEEZOQSWVDTUAHQYSNMNBAZLGEXWXGDBTDTSSXXDWTRKOCFBMQIGSL");

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
    msg.setTimeStamp(0.85647119197);
    msg.setSource(23512U);
    msg.setSourceEntity(70U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.197704705244;
    msg.lon = 0.205964570747;
    msg.z = 0.708952408543;
    msg.z_units = 40U;
    msg.speed = 0.28248064649;
    msg.speed_units = 233U;
    msg.custom.assign("KCMBRYMYSVWNGAHEZNETERDHSAJAQRMIQEUSSGCQGAJMIWMJGCXVBOXWOTZNYJXDYPWCBHVYCOWDOCECIVXUTAP");

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
    msg.setTimeStamp(0.609194076883);
    msg.setSource(1117U);
    msg.setSourceEntity(181U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.873193879468;
    msg.lon = 0.793887845767;

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
    msg.setTimeStamp(0.157154421687);
    msg.setSource(24716U);
    msg.setSourceEntity(131U);
    msg.setDestination(3458U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.0843368819854;
    msg.lon = 0.824771010492;

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
    msg.setTimeStamp(0.258972966403);
    msg.setSource(65162U);
    msg.setSourceEntity(228U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.276019588588;
    msg.lon = 0.726234717508;

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
    msg.setTimeStamp(0.336686874777);
    msg.setSource(2520U);
    msg.setSourceEntity(212U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(246U);
    msg.timeout = 52583U;
    msg.lat = 0.919510636648;
    msg.lon = 0.309818057387;
    msg.z = 0.568536722432;
    msg.z_units = 156U;
    msg.pitch = 0.0478855426145;
    msg.amplitude = 0.847023751955;
    msg.duration = 17400U;
    msg.speed = 0.271424717965;
    msg.speed_units = 113U;
    msg.radius = 0.620201932365;
    msg.direction = 19U;
    msg.custom.assign("YMFKETYPAOEGMZAWYHEIJLMWLVWJCZFWPSZCZOBRYZXTHNWSPTUBSAGSFOZVOSEINWFFMUTLYHXOKTZGZIWNBYGKBCQXPACPIKTSKVXUUDKVEVKNMQHQUXGBVLCGDHXUJMPRDHDVRUTCFOXALPJDDCIGVLNOGIEJQTRJMRKYFYPROJBIENYQNJDFRILKID");

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
    msg.setTimeStamp(0.7063996347);
    msg.setSource(23060U);
    msg.setSourceEntity(89U);
    msg.setDestination(18286U);
    msg.setDestinationEntity(124U);
    msg.timeout = 17125U;
    msg.lat = 0.105542402744;
    msg.lon = 0.281483339806;
    msg.z = 0.545663411946;
    msg.z_units = 112U;
    msg.pitch = 0.359518073246;
    msg.amplitude = 0.141929871911;
    msg.duration = 5368U;
    msg.speed = 0.641417521369;
    msg.speed_units = 32U;
    msg.radius = 0.348410117426;
    msg.direction = 204U;
    msg.custom.assign("MTZCHEIWNWQBMEIDEBJMIUQGUTCNDWPLMZHHCKLWQLTFPWSWJIEIFJKTGTGEBYVNXNPTAZCFSPMMCGHFJYFKUDDAZOSRWGXHIOPWZSKOKVARLRAGEIJYTUPQXOAIVBNRJQDLFEVCADDMFJYOYD");

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
    msg.setTimeStamp(0.508001437337);
    msg.setSource(7542U);
    msg.setSourceEntity(207U);
    msg.setDestination(4574U);
    msg.setDestinationEntity(66U);
    msg.timeout = 8178U;
    msg.lat = 0.474499985476;
    msg.lon = 0.378560056206;
    msg.z = 0.94854968438;
    msg.z_units = 138U;
    msg.pitch = 0.352741812462;
    msg.amplitude = 0.0270573072346;
    msg.duration = 50766U;
    msg.speed = 0.459378355359;
    msg.speed_units = 143U;
    msg.radius = 0.475318559756;
    msg.direction = 119U;
    msg.custom.assign("YDYCYZITUJDMBNYLMOPIBBVZQOBIWZR");

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
    msg.setTimeStamp(0.331277446313);
    msg.setSource(2577U);
    msg.setSourceEntity(195U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(160U);
    msg.formation_name.assign("IGBQBTNTKPDWRRLUCZENBBZOSOXLODZDKVVYIRCGZHRHAWBAVCFHYPNMHGZCWVPBXXEZEFEFEMKUUWKAJTJTUCQFLGVFACWMYJJEFKLWHJXHCAPXXYLYHKEWHDLDNYGSQRPARNERSMJXTDCKIDJOAVNOTONQBGMCUKUGTUYMSFAPUHUYGDSVSJTKENGMYA");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29468U;
    tmp_msg_0.off_x = 0.6725446448;
    tmp_msg_0.off_y = 0.344068235088;
    tmp_msg_0.off_z = 0.23601087065;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XIVRFRENZGWLTBKOHPTNOVQCBLYPYFQRAYZCAKGJXDHDXZPBKKMCBTOZAWCAMITHZCUNRXSENMJYSJTCJEKDRPQBXQMHOHUPAGUUXSYRXVOUPOEWGBHWBFFTSRFLQUGCAIXDEZWUTVZOYPUFOVWJJWUDIVMPK");

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
    msg.setTimeStamp(0.469647835685);
    msg.setSource(10916U);
    msg.setSourceEntity(10U);
    msg.setDestination(29281U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("HQGNSKAOWJAPISEKLBZHGUJUFFUIALDOMVURXLNBZTRSUIDJHIWLPCHTRMTFCBSIQBGJRVISJRGJXYUFASJGFYYEPMDKRSVBYFCAQPUXZOLQYNVWOMOFUHITTOZDCEUGYBKVCQPMIQZHRHXZEVDGZQLFIARXVOTEAXXKCGHRN");
    msg.reference_frame = 11U;
    msg.custom.assign("YYUWAFJHBXRBABCZGVXIAZFVYLKRAEDUUAVMHQNXVOVDDPDOKBMICWQQLSPJFKSQDNRMIMDBSMUFSGKKQGHFIWBNWTAQCPTWYYLUZCPSIFURIPOLPBCSMCJZDWLVIWTYFRJVBEGJFINQGEZWQEUXOLRJHCXRWXTPIGUOELPHCSTJEXNEZAVYMZJEDVTSTRKNJXMHIAHUMKFGXVHOYRPNMQTXGZKBNJGNWTBFS");

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
    msg.setTimeStamp(0.173588846715);
    msg.setSource(60830U);
    msg.setSourceEntity(224U);
    msg.setDestination(64127U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("CEGCEOTGBRARDLMAMFQVWDFCRPUMKWHABIWRW");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23905U;
    tmp_msg_0.off_x = 0.233975737863;
    tmp_msg_0.off_y = 0.426514819074;
    tmp_msg_0.off_z = 0.77131660686;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GZPEOIRNVBVLKXGLVKFRQXPXAWIPCIEMYRVBQQJQNJVCDIEDMNZTTHCSAKHPMPT");

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
    msg.setTimeStamp(0.414381926524);
    msg.setSource(4463U);
    msg.setSourceEntity(189U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(239U);
    msg.group_name.assign("NWFHQTAHEOICJEZEPIMOZ");
    msg.formation_name.assign("CTZFINHZNMUVGXGUOHZVZFLAJAPQFIOIBJTKSKTBEKBZDCPINFABSVPRXWGOELKPQQESXHNFRXHUAWDLFLGECMOORHQQUBIWPDRHVGPHBBFUVTXNAQRYEIIYFFJSYW");
    msg.plan_id.assign("FRWHULIXAHGDHPJBLLEQGSLEADHIWFFGVAYIVKHKESBNTCMZIWZHZVPXXKWMSMRYIFMJVYNBRQYCVATMFCBRRYNUVRQMNQNLBCAPUFCTJZTJJZSUNZHGKPQDYEXLD");
    msg.description.assign("RFGJYJSMWNDNHZYJTDPTMWQNKIRFMJBQOECEJBZWOGXGFIRBXLRIHTITACNEWDIVFQASSQFNHBULFAVQKOXHNDVGVGEXHKPEGZTPTZEUMPWULKVOWRWTNIKKNCKYLZOPJXLBCPSNRIHHJCSYBMUOCUSECDILYSSQEKLPXIZVFXSQRUUAKAYBBOFWAXZDDOJSOW");
    msg.leader_speed = 0.220058239315;
    msg.leader_bank_lim = 0.0307719460314;
    msg.pos_sim_err_lim = 0.315744296058;
    msg.pos_sim_err_wrn = 0.683965357061;
    msg.pos_sim_err_timeout = 23462U;
    msg.converg_max = 0.274607306883;
    msg.converg_timeout = 48734U;
    msg.comms_timeout = 64841U;
    msg.turb_lim = 0.512554837336;
    msg.custom.assign("HICDQSEUESHDKTQYBIVWSUMOMYFDEPJSCUMWMZWKBYRDGEIKTFCJWXDQNKCJXCEDCLFJVVOLNYJRRBYIITNACRSADLFVRPKRZZCAUOLKHJVAMWNEOLLHPIHLGTMZMVARHYJPXEFLSZQGQHHHSGPWOGEFOCATROBNZMBSQKZAGDBPDIUBXOLQYSKFWRCJTRXBMVUATQ");

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
    msg.setTimeStamp(0.507326148307);
    msg.setSource(59112U);
    msg.setSourceEntity(238U);
    msg.setDestination(26263U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("LSPCOWIWCHKCFKEROTKAAKITICGQEGPGMIOIENMKBGXWRMAUJKBXQDTFRJHXYFJZXHQYIHZPAUONNFCAMYWSSUQQPBPULBAYQMNXVOLCLGTIZOKBWZRMPMLYPWERFSNUNHULOZVDXJAEDTFCJVMHDMSUJBEACTQHLFVXNEDFCLVJYLDPGRSTRXNUSCWQVSRRTEGDJBAZVWBBMKWSGHKDRAOLEQZPKPJDBVFNEHIQNIXJYUGYYSTVZWDGY");
    msg.formation_name.assign("MPPVYTDJTPSUNOZVCDZGWVDMTUBASXPZRKLWHYLOZRNONILKUZFPSWXVUBFMQJRNGLLXKHSPLRVYJQWZRBIGKESBNLSEFCCGXHRDWVMSCUFZTGDLAKNLGDAOZBOXGKCKLEY");
    msg.plan_id.assign("PVIOAJTMDVEYLVVHKDUAW");
    msg.description.assign("OKIAVPCGWYLUVEJJOXTNWNQLVKGTSGRHAARKPDDBORAIHCTWZGLBUQWHUJOQTBRMZMHELFCCPPMETORBPQLBKZQIFXSDAIEZDYQGXHWYJFSINWHFVGPDXREPSTOTUUXWJIUNKAMGYNTBSLOGUFDXMVRFQSYYTCCJBIQJSZXJPXUVIKQNEMDPCPFVEHOUZZZDDGJHOANYVZXFLYMNVQSGUAXYRSLTMBHRYHIIOCNDCMZKFJAVB");
    msg.leader_speed = 0.937856870408;
    msg.leader_bank_lim = 0.472975297747;
    msg.pos_sim_err_lim = 0.0265603563653;
    msg.pos_sim_err_wrn = 0.75902429216;
    msg.pos_sim_err_timeout = 41319U;
    msg.converg_max = 0.747487380701;
    msg.converg_timeout = 32562U;
    msg.comms_timeout = 57371U;
    msg.turb_lim = 0.969819193323;
    msg.custom.assign("CZBRMJWZOVMEBXYLZBYFTLMCWTXFAMODFYWGZQCQTDBORNAZFUJAGYSKMTJUOVNEIKCZKRYLAWFKEASDJPVVJPCUVSBOIBRCHTQZFAFQDLPUQGIGVUYHIPZNXLHDIUNVWXHHSGSSIQAHIKQMXFEUTPYBDALWDJWVWFNVTMDLWGXLCBPHBLRKEGIMAVWRMHPDLTSBEKNTRIIOYCPHC");

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
    msg.setTimeStamp(0.0616113468434);
    msg.setSource(10840U);
    msg.setSourceEntity(44U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(131U);
    msg.group_name.assign("GJXZWOQTIXTD");
    msg.formation_name.assign("CMETJJDCEVQFPYXC");
    msg.plan_id.assign("RMMXHKLDJAIWDKCPGYKTDSFLBZVGYMERSQMJNQFBJYZZLFGVOJKIHNCSSECXRPDUUDBWEJKBXNGZANSYEDWADOAIHXETZHQWOUOJJPCTKRORZBNIRGXIQXVISJCAXQLHLOROZNLBPIQMEVZWENPUTQSFSMBZCURLWEITMHT");
    msg.description.assign("ETWTTRWKRNFYIESDDQRERSUXPOMCVDKVZJGDXAFZNYWUSOYCGCVSTFXPQLZDBWSERMDGCOMIXICVR");
    msg.leader_speed = 0.937742058111;
    msg.leader_bank_lim = 0.641336778031;
    msg.pos_sim_err_lim = 0.0839546700648;
    msg.pos_sim_err_wrn = 0.950588216136;
    msg.pos_sim_err_timeout = 29657U;
    msg.converg_max = 0.84576392992;
    msg.converg_timeout = 28267U;
    msg.comms_timeout = 42027U;
    msg.turb_lim = 0.258716230627;
    msg.custom.assign("YAKYMOEEPRORDBDHSYJVBRLADRALTOIUDUNELHWTHW");

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
    msg.setTimeStamp(0.812678719272);
    msg.setSource(49080U);
    msg.setSourceEntity(142U);
    msg.setDestination(10785U);
    msg.setDestinationEntity(106U);
    msg.control_src = 20720U;
    msg.control_ent = 73U;
    msg.timeout = 0.533550710595;
    msg.loiter_radius = 0.448859707585;
    msg.altitude_interval = 0.786084459561;

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
    msg.setTimeStamp(0.507683151144);
    msg.setSource(27689U);
    msg.setSourceEntity(124U);
    msg.setDestination(53843U);
    msg.setDestinationEntity(25U);
    msg.control_src = 706U;
    msg.control_ent = 50U;
    msg.timeout = 0.879738552583;
    msg.loiter_radius = 0.551153014458;
    msg.altitude_interval = 0.865673720005;

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
    msg.setTimeStamp(0.656611418485);
    msg.setSource(46079U);
    msg.setSourceEntity(15U);
    msg.setDestination(6191U);
    msg.setDestinationEntity(108U);
    msg.control_src = 35785U;
    msg.control_ent = 186U;
    msg.timeout = 0.825181214506;
    msg.loiter_radius = 0.91273943895;
    msg.altitude_interval = 0.463490620776;

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
    msg.setTimeStamp(0.916792265222);
    msg.setSource(9422U);
    msg.setSourceEntity(72U);
    msg.setDestination(16145U);
    msg.setDestinationEntity(84U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.544283071554;
    tmp_msg_0.speed_units = 241U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.283360861735;
    tmp_msg_1.z_units = 51U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.410519893293;
    msg.lon = 0.746669074303;
    msg.radius = 0.547102455715;

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
    msg.setTimeStamp(0.886529832163);
    msg.setSource(6601U);
    msg.setSourceEntity(227U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(251U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.138885481431;
    tmp_msg_0.speed_units = 13U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.849347315684;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.536188549636;
    msg.lon = 0.24165637094;
    msg.radius = 0.525680910931;

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
    msg.setTimeStamp(0.451394458288);
    msg.setSource(718U);
    msg.setSourceEntity(209U);
    msg.setDestination(64888U);
    msg.setDestinationEntity(55U);
    msg.flags = 11U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.933455482226;
    tmp_msg_0.speed_units = 22U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.124056561044;
    tmp_msg_1.z_units = 128U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.834514201797;
    msg.lon = 0.189179231885;
    msg.radius = 0.528631373236;

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
    msg.setTimeStamp(0.347056492094);
    msg.setSource(61234U);
    msg.setSourceEntity(212U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(128U);
    msg.control_src = 40273U;
    msg.control_ent = 155U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 146U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.95584068056;
    tmp_tmp_msg_0_0.speed_units = 144U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.127972966366;
    tmp_tmp_msg_0_1.z_units = 37U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.409965072557;
    tmp_msg_0.lon = 0.586851764061;
    tmp_msg_0.radius = 0.0131615697117;
    msg.reference.set(tmp_msg_0);
    msg.state = 0U;
    msg.proximity = 129U;

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
    msg.setTimeStamp(0.934015978311);
    msg.setSource(21592U);
    msg.setSourceEntity(19U);
    msg.setDestination(26902U);
    msg.setDestinationEntity(230U);
    msg.control_src = 35544U;
    msg.control_ent = 20U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 153U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.428971326758;
    tmp_tmp_msg_0_0.speed_units = 7U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.142562168276;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.670970523954;
    tmp_msg_0.lon = 0.443507875047;
    tmp_msg_0.radius = 0.204735951514;
    msg.reference.set(tmp_msg_0);
    msg.state = 182U;
    msg.proximity = 130U;

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
    msg.setTimeStamp(0.738436965605);
    msg.setSource(51029U);
    msg.setSourceEntity(134U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(84U);
    msg.control_src = 12531U;
    msg.control_ent = 177U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 16U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.966231786031;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.397766930735;
    tmp_tmp_msg_0_1.z_units = 245U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.587202519574;
    tmp_msg_0.lon = 0.116018091537;
    tmp_msg_0.radius = 0.00449298600394;
    msg.reference.set(tmp_msg_0);
    msg.state = 148U;
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
    msg.setTimeStamp(0.85597124753);
    msg.setSource(12246U);
    msg.setSourceEntity(112U);
    msg.setDestination(38433U);
    msg.setDestinationEntity(118U);
    msg.ax_cmd = 0.795512298356;
    msg.ay_cmd = 0.49856071298;
    msg.az_cmd = 0.886820894035;
    msg.ax_des = 0.369549677372;
    msg.ay_des = 0.162684981382;
    msg.az_des = 0.687020002879;
    msg.virt_err_x = 0.671776038423;
    msg.virt_err_y = 0.517685799987;
    msg.virt_err_z = 0.300129941275;
    msg.surf_fdbk_x = 0.455023174474;
    msg.surf_fdbk_y = 0.812602308938;
    msg.surf_fdbk_z = 0.629406879226;
    msg.surf_unkn_x = 0.840113867709;
    msg.surf_unkn_y = 0.413732791201;
    msg.surf_unkn_z = 0.48626366644;
    msg.ss_x = 0.728166606647;
    msg.ss_y = 0.858157097013;
    msg.ss_z = 0.370582187874;

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
    msg.setTimeStamp(0.880115890547);
    msg.setSource(11163U);
    msg.setSourceEntity(182U);
    msg.setDestination(49912U);
    msg.setDestinationEntity(66U);
    msg.ax_cmd = 0.43289346539;
    msg.ay_cmd = 0.99090662879;
    msg.az_cmd = 0.0223609337704;
    msg.ax_des = 0.583931668622;
    msg.ay_des = 0.276140051037;
    msg.az_des = 0.331907182088;
    msg.virt_err_x = 0.765688583785;
    msg.virt_err_y = 0.934264650997;
    msg.virt_err_z = 0.349635812884;
    msg.surf_fdbk_x = 0.854702745326;
    msg.surf_fdbk_y = 0.92256659816;
    msg.surf_fdbk_z = 0.42132618647;
    msg.surf_unkn_x = 0.53587732661;
    msg.surf_unkn_y = 0.16375063955;
    msg.surf_unkn_z = 0.935997026131;
    msg.ss_x = 0.104013368422;
    msg.ss_y = 0.554050962746;
    msg.ss_z = 0.0167594770143;

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
    msg.setTimeStamp(0.0149454248205);
    msg.setSource(38398U);
    msg.setSourceEntity(182U);
    msg.setDestination(54702U);
    msg.setDestinationEntity(13U);
    msg.ax_cmd = 0.766678931812;
    msg.ay_cmd = 0.834324645149;
    msg.az_cmd = 0.762203649104;
    msg.ax_des = 0.250656512457;
    msg.ay_des = 0.679026457005;
    msg.az_des = 0.382513232102;
    msg.virt_err_x = 0.558977608717;
    msg.virt_err_y = 0.157723975032;
    msg.virt_err_z = 0.304381400732;
    msg.surf_fdbk_x = 0.456504490512;
    msg.surf_fdbk_y = 0.580286844413;
    msg.surf_fdbk_z = 0.0495203683412;
    msg.surf_unkn_x = 0.0643415817557;
    msg.surf_unkn_y = 0.146894900817;
    msg.surf_unkn_z = 0.291361507522;
    msg.ss_x = 0.143736067;
    msg.ss_y = 0.77150518416;
    msg.ss_z = 0.549134823389;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KJQPEMYFKBMTFBDRGJFXKWCVRCCIJXEDKWKSVHWIKKTHVDSWYKDEDZCANAFOZPWLTGGZZUINLBJOXJJVEGQCVOWPWQY");
    tmp_msg_0.dist = 0.423110505177;
    tmp_msg_0.err = 0.263719308144;
    tmp_msg_0.ctrl_imp = 0.803074656645;
    tmp_msg_0.rel_dir_x = 0.218593051755;
    tmp_msg_0.rel_dir_y = 0.128705105382;
    tmp_msg_0.rel_dir_z = 0.246813855885;
    tmp_msg_0.err_x = 0.4753977793;
    tmp_msg_0.err_y = 0.596621174048;
    tmp_msg_0.err_z = 0.386814543689;
    tmp_msg_0.rf_err_x = 0.265418393346;
    tmp_msg_0.rf_err_y = 0.821550648959;
    tmp_msg_0.rf_err_z = 0.594411234878;
    tmp_msg_0.rf_err_vx = 0.122478467782;
    tmp_msg_0.rf_err_vy = 0.41969908605;
    tmp_msg_0.rf_err_vz = 0.887528464484;
    tmp_msg_0.ss_x = 0.821355591855;
    tmp_msg_0.ss_y = 0.669693339536;
    tmp_msg_0.ss_z = 0.397938090579;
    tmp_msg_0.virt_err_x = 0.332887622703;
    tmp_msg_0.virt_err_y = 0.466643490721;
    tmp_msg_0.virt_err_z = 0.161099351656;
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
    msg.setTimeStamp(0.00347367134362);
    msg.setSource(29278U);
    msg.setSourceEntity(64U);
    msg.setDestination(7660U);
    msg.setDestinationEntity(44U);
    msg.s_id.assign("NKSJBUHJXCDPUFXMYCAXKGJFFXPHZLGHGDTOZAQQTZTSPTRMIDNWRCFYKDTWMXMXUFRBSLIFFWLGBLXECKIDRWVHMOVNIPBHFLLEKHWPIJHQNWEJYGRAYTPLNJERIJYUVOMKNSKDDCAVOQPBOAHIUVYVBSICTEGGMEAVUOUTUHDNMSVCCKNSYKPZAMWCWGZGBOKBMPH");
    msg.dist = 0.539924097654;
    msg.err = 0.710856106136;
    msg.ctrl_imp = 0.283898910195;
    msg.rel_dir_x = 0.510573042904;
    msg.rel_dir_y = 0.418489208;
    msg.rel_dir_z = 0.2941578001;
    msg.err_x = 0.447056240995;
    msg.err_y = 0.36445959421;
    msg.err_z = 0.19281430849;
    msg.rf_err_x = 0.95602405089;
    msg.rf_err_y = 0.0974468510179;
    msg.rf_err_z = 0.129179556427;
    msg.rf_err_vx = 0.539723853347;
    msg.rf_err_vy = 0.213324509319;
    msg.rf_err_vz = 0.651530868045;
    msg.ss_x = 0.936966186312;
    msg.ss_y = 0.348834013633;
    msg.ss_z = 0.153544389229;
    msg.virt_err_x = 0.491457658186;
    msg.virt_err_y = 0.523839007067;
    msg.virt_err_z = 0.470007384375;

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
    msg.setTimeStamp(0.295928801003);
    msg.setSource(42212U);
    msg.setSourceEntity(45U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(67U);
    msg.s_id.assign("PXWIZORCXEVYXARLQMAFCAIOATKEMKNUYNFXLZXYENXNJGRCDTDZTJSSPGLSNUSEQRBVIITATMZLGUHCEQOMYKQDSDPYCHBKFSOCFGWDJIWJEULYMMMDYEIGVNJDFIOKXEYLWGHTVFFQDLBAUPUCPKINADWPVZGVHMPRYBBRBUSZQHVBVXHAOJOIAIKJDQNECXCHMUVEHTPSJZCRXKKWWLLBMGWOBHZVBQZ");
    msg.dist = 0.586690703325;
    msg.err = 0.737978495189;
    msg.ctrl_imp = 0.716300444852;
    msg.rel_dir_x = 0.92576530878;
    msg.rel_dir_y = 0.466901719083;
    msg.rel_dir_z = 0.7475544281;
    msg.err_x = 0.213533972377;
    msg.err_y = 0.100579140152;
    msg.err_z = 0.857397652536;
    msg.rf_err_x = 0.458612522352;
    msg.rf_err_y = 0.84800718426;
    msg.rf_err_z = 0.974607151772;
    msg.rf_err_vx = 0.424171853254;
    msg.rf_err_vy = 0.375890704425;
    msg.rf_err_vz = 0.637418657334;
    msg.ss_x = 0.696239887588;
    msg.ss_y = 0.598813462074;
    msg.ss_z = 0.449907476969;
    msg.virt_err_x = 0.843073627791;
    msg.virt_err_y = 0.864404814961;
    msg.virt_err_z = 0.175896661161;

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
    msg.setTimeStamp(0.779758176853);
    msg.setSource(47489U);
    msg.setSourceEntity(238U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(171U);
    msg.s_id.assign("PZVXQQONLLQCDIJ");
    msg.dist = 0.241348938952;
    msg.err = 0.0345455399519;
    msg.ctrl_imp = 0.168863576754;
    msg.rel_dir_x = 0.936085327984;
    msg.rel_dir_y = 0.758929971008;
    msg.rel_dir_z = 0.919028786376;
    msg.err_x = 0.784809865968;
    msg.err_y = 0.747575796529;
    msg.err_z = 0.0592342223641;
    msg.rf_err_x = 0.838446924037;
    msg.rf_err_y = 0.591142657277;
    msg.rf_err_z = 0.347015155043;
    msg.rf_err_vx = 0.632238314422;
    msg.rf_err_vy = 0.666131732524;
    msg.rf_err_vz = 0.204248475072;
    msg.ss_x = 0.91244324461;
    msg.ss_y = 0.929048012388;
    msg.ss_z = 0.331291137684;
    msg.virt_err_x = 0.415992553335;
    msg.virt_err_y = 0.680624232351;
    msg.virt_err_z = 0.124044403128;

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
    msg.setTimeStamp(0.53781935913);
    msg.setSource(40520U);
    msg.setSourceEntity(42U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(76U);
    msg.timeout = 60714U;
    msg.rpm = 0.0180660221872;
    msg.direction = 188U;
    msg.custom.assign("JVJYAWTAPEYHTZWINGVQHVUHBLOPXHPESSXHQJMEULGKKKMRPABFTAZPOYEVXHMWCJDYUISYDCVFSSZASNUXDLDZTFNMKEXCRHUZZOEEPDBXZHVPMWFYNFMTBXGNBQRUWOQKWIRJYQLSITQRCLIAMYNICBGDOZITGBUFDGHJICYMTDKJKIQUNNORGLIMBX");

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
    msg.setTimeStamp(0.358070119586);
    msg.setSource(34584U);
    msg.setSourceEntity(172U);
    msg.setDestination(62035U);
    msg.setDestinationEntity(106U);
    msg.timeout = 11209U;
    msg.rpm = 0.643075300016;
    msg.direction = 54U;
    msg.custom.assign("STNCZARDUOARLNMGUKOVEAWWDYRZJXWWJWQWKMTJGGSZCSBGQOIHRNSLAKYDPMNRMBASIBTVLCUYKHNBTLQULNXOCTZJDIVZSWGMEKRYQVHXEXBUCAPDOHJYDSIIYFLHDXRBINPWFBCPPZHMKHUPKBMEXYFGVADTSIEZHFECYUEMVUTNIURLFDFRPONQYVRWCXKOQGHTPVLTGZJNEBOJQYQPEAKOV");

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
    msg.setTimeStamp(0.918123773785);
    msg.setSource(8329U);
    msg.setSourceEntity(99U);
    msg.setDestination(42796U);
    msg.setDestinationEntity(110U);
    msg.timeout = 48545U;
    msg.rpm = 0.220207733187;
    msg.direction = 143U;
    msg.custom.assign("FPYIXMVOGBYAAOKMFEDZVQUQXFWYKGHJKTVZFJDDAPOMSBMCCZZLQZJNMIAHZKDVLRORXDPUXZNMTQPZGAUYVLXZSPDDYGUVPWONWDESBNEFIMUJACFVIBPNCFETOAQRCWRSQPIIBCLJMWNUXPLG");

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
    msg.setTimeStamp(0.868176850942);
    msg.setSource(885U);
    msg.setSourceEntity(131U);
    msg.setDestination(28277U);
    msg.setDestinationEntity(182U);
    msg.formation_name.assign("HVMBPDAJDPLMCAOSJTQTPAROANFRZXKSEGMVLDKIANYILXOVXUWDUMGLZFCHJSIWUROQP");
    msg.type = 63U;
    msg.op = 65U;
    msg.group_name.assign("WCXGFKNFNJSDRVUDPITBELMKHTOITIKDHPVJRZKCYZJELVHPYCMQZTGYPJQKQYGGEPAMTDQSEZORMWKLNSNZUWVYONDGHDQRBZHPJOAKOEAEOLHADEXTMICZUPNFXMLURCOYJCWFHBGPL");
    msg.plan_id.assign("ZIWXBLZZZSIMWPYNLDTDREPYHFUXYINHDGXJCEGJWDGKWBUZVRAEMPVCUOORLGIODZDVTKXEACTAPWPOASTOCOOXTWRRLRFFMIOVCZQXUTFCELFESSHEHLYVBNJMJXCMNBQEPTKGBXWPWEUJCRRICQGFAMANHKYHTBQZSNBNMLWIEHPIATNL");
    msg.description.assign("NPOJBYMWWQONZFZKTXZLAIEEDMRTIQSVUDFWTKVCZGWTVFFZVRANEQLKLINLMSEXZTRKGHHAVIEVJYKMCFUOOGSEPIANCYOIXHDQWRAYODHMMQBQPYYOCJHJPQXWSAZUYMFAJWDDMDRFZYWIGTSAHNPQDZLGIKRJVBUFNEOBQGJUMHPXE");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45201U;
    tmp_msg_0.off_x = 0.778423990924;
    tmp_msg_0.off_y = 0.487974103555;
    tmp_msg_0.off_z = 0.28410873145;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.862720947619;
    msg.leader_speed_min = 0.396814227007;
    msg.leader_speed_max = 0.502544471157;
    msg.leader_alt_min = 0.169469616628;
    msg.leader_alt_max = 0.952235701803;
    msg.pos_sim_err_lim = 0.0159984725689;
    msg.pos_sim_err_wrn = 0.822505399398;
    msg.pos_sim_err_timeout = 6440U;
    msg.converg_max = 0.898145194354;
    msg.converg_timeout = 61135U;
    msg.comms_timeout = 61125U;
    msg.turb_lim = 0.945725639442;
    msg.custom.assign("IEUBVQUROLUJNGKWXLWNSCSUBHLODKDZWZQMHKOCDPUONYRWSYTMWWGPYUCKLMFGAWIRPPVBQGYJYDAVEABZMSCIVPSJRWYSUMVERM");

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
    msg.setTimeStamp(0.695085750227);
    msg.setSource(3964U);
    msg.setSourceEntity(203U);
    msg.setDestination(50297U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("LWHIBXZBEWSLQPQQVUNEYNRRVCKLPQMFRKLGVZGPODTATSSUFYELMZFZWEITQDYBZRGEAGVHGTHTAMYROLOKSIHEAHSSQD");
    msg.type = 12U;
    msg.op = 105U;
    msg.group_name.assign("ZNHZYIONIFJCOXHBEJZTSTLRUZPBICDJDXPAKDQDXQRVTGDUJCUEKWFFSMHBGXLSNTUSVMWHNCMJFUGGQUVUTBTXTIQEFPWJCWEGVJEMYKKISQGFAOLHLRYQRARHMLPODLFSIOWVEVBKCBBYQOT");
    msg.plan_id.assign("EQBNJKLGGSHHMNFKUMWUBWQKVXEDCWYEVJTJUGSXMCYYUKLLNVIJNSIPJTYSWMECGTOMLLQKOZORZABTWVFEBRUXJXFNYACWZOAGASJXZHRXODTXAEKVZDZDSBCUFIRPPIZDQYRTUHIMIPQLLCHCQDDIVICIAPEGYOVOANANQXRKZSXK");
    msg.description.assign("ZWHHOVUVZYYZRUZDKCADPRCGUDUBCKVLFNEDYLYLXMMWFGUETYXRYJFMWJTGYPGEQLSJBVBPCVTFXDZAMVDHEAJUCCHDEVZOKNBMLSITAHRKYKJCNZSSKTLKHLAQGKQOXPXVCOIFGAPBJSJGIULRPJSRSFTLEBWZVGAIQNDMHOANYBBNWTSIWNEPWWHOQVUHKNRGZXIFTRQIFWXJFHCXBBGZTCYQPQUUOEXEKALQMQFMXMPOJTI");
    msg.reference_frame = 177U;
    msg.leader_bank_lim = 0.647642654694;
    msg.leader_speed_min = 0.214570302018;
    msg.leader_speed_max = 0.678627066051;
    msg.leader_alt_min = 0.368398048073;
    msg.leader_alt_max = 0.269828442817;
    msg.pos_sim_err_lim = 0.795365050039;
    msg.pos_sim_err_wrn = 0.00644543419618;
    msg.pos_sim_err_timeout = 63740U;
    msg.converg_max = 0.528409763436;
    msg.converg_timeout = 2642U;
    msg.comms_timeout = 5516U;
    msg.turb_lim = 0.498961670268;
    msg.custom.assign("BMMXEKUAPZVEHEWKWWVXNGAHUTUCYFFSDTKWGBARCZLZXDO");

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
    msg.setTimeStamp(0.450472196068);
    msg.setSource(22631U);
    msg.setSourceEntity(59U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("DPMQDLKACOKRWRJELOJVRNYFZAEFHIFGRJGSYVPCMERYNFPUUOASMAKGNLEIMBBBNKQLGIOQVLUKQYKZDYZLGVBABKQHWBMPICNQETSXMJWTTFPIXFNUIABFVXPJOUMSDBJZGVJJLFEWQQPEKSYZHPDGKFUI");
    msg.type = 33U;
    msg.op = 237U;
    msg.group_name.assign("KMDUJRUBGYYXWNLGSYBWADAJCWKIZYMVEHEGQRHQHATEXFVZFDMUSDEFPJXDIJKPIVLWNRLZZPBVLIHQHAAYMUOLOORKZMQRCTTWFTTZXREYPJGHSZSGQGIXTPAVWSQUVBSDFBKWNORMUVSCXSRHXCYCJELDIUCQJIBGBKKANYCOQXFVPWJKVMDMDNTTDFNHNPXOLGYWE");
    msg.plan_id.assign("VVAPGEQVXEAJOEDENDTFVIYCDECZOVOLABCZDWSQSHFIPJYMQWTNBBFHZENULRGLALXKHRMSXDKWHQMIEAHGPRXKOJDFYCFINYBKKAYZXPJTSGODWIJBTGLXVJKIZWMCJSOTUNUGBNIYMPMPNBCHMNAFYVNIGUPUEWQZYFKRWDSYAHNFSIJUZHVUDMSLZCBSCBPSJOORJWHZEALYUKWU");
    msg.description.assign("NVNYFUBTHUJUKEEZMWTOTREXCGIJRKPUVCDRXEMWXZJGFNTYNTPODHKTGSVIQSACVBLDPQPNWWALTLHLGUUWHKGOIBYCJFIEPIZGGRXHEZQYYPAOVJUQLUKSXFPAREVQSVKKIALASRSAZDGPRSHBLQNKZDWFHQGVGTBJQZZQIYJXSRCECOTCKMCPDRIPCKIEBJONDAUELOFJCMMTBBSOFSW");
    msg.reference_frame = 121U;
    msg.leader_bank_lim = 0.20306408074;
    msg.leader_speed_min = 0.802184201863;
    msg.leader_speed_max = 0.027407274607;
    msg.leader_alt_min = 0.904947811871;
    msg.leader_alt_max = 0.395682503792;
    msg.pos_sim_err_lim = 0.810197097366;
    msg.pos_sim_err_wrn = 0.693901104252;
    msg.pos_sim_err_timeout = 15850U;
    msg.converg_max = 0.297487990831;
    msg.converg_timeout = 46390U;
    msg.comms_timeout = 18826U;
    msg.turb_lim = 0.982268758934;
    msg.custom.assign("HQEXIOLOBTFATCZVKTLD");

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
    msg.setTimeStamp(0.698007169393);
    msg.setSource(16066U);
    msg.setSourceEntity(168U);
    msg.setDestination(23160U);
    msg.setDestinationEntity(19U);
    msg.timeout = 38918U;
    msg.lat = 0.861532063445;
    msg.lon = 0.601718998974;
    msg.z = 0.761934440767;
    msg.z_units = 108U;
    msg.speed = 0.429148702767;
    msg.speed_units = 221U;
    msg.custom.assign("EPFOUEFXTUJGTDVGVOVTCOKSDJXVSRQKEASMWIVMUCEQYBDTPKRMUDJCPRSPRPRINTWPZHJZUZUZLYYBADFBBICPGIHJTXDWEPQGFN");

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
    msg.setTimeStamp(0.727838270498);
    msg.setSource(1243U);
    msg.setSourceEntity(43U);
    msg.setDestination(13698U);
    msg.setDestinationEntity(4U);
    msg.timeout = 51441U;
    msg.lat = 0.620938274956;
    msg.lon = 0.0853383973013;
    msg.z = 0.899570981044;
    msg.z_units = 12U;
    msg.speed = 0.458241852237;
    msg.speed_units = 73U;
    msg.custom.assign("TJFJCVIZANACWLNOPXTUFWFFBHWGMVWBNRLJPAFYUEUVJYSSXTQPRTAPDMZYCCVVINCOQBGJIQLPYTDZDOIKDORQELIYXBRISDWSXDXMVCGHKEPNLPEUNM");

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
    msg.setTimeStamp(0.436233414498);
    msg.setSource(10130U);
    msg.setSourceEntity(100U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(14U);
    msg.timeout = 53053U;
    msg.lat = 0.895922549528;
    msg.lon = 0.088556674322;
    msg.z = 0.144022414044;
    msg.z_units = 119U;
    msg.speed = 0.0408448552404;
    msg.speed_units = 149U;
    msg.custom.assign("WQHOYVOYBEMPPEDYNQBMJBUNKXCZSIAZLHFGMVGIALQUFFSAVUQEYRSXDNTCKCIJCHYRCFZJBOHTPUAUWPGLVXMLMOJPOAXPDYOLMFTBOPKGFXEJFZKNGWKYVBKRVNTQEZOFCAGRKZEGWIZHTHEUQRRHTBWGJTUHICQDLY");

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
    msg.setTimeStamp(0.285868329178);
    msg.setSource(14282U);
    msg.setSourceEntity(156U);
    msg.setDestination(9265U);
    msg.setDestinationEntity(98U);
    msg.timeout = 10285U;
    msg.lat = 0.410675231086;
    msg.lon = 0.785393443299;
    msg.z = 0.000274136649559;
    msg.z_units = 20U;
    msg.speed = 0.291738948037;
    msg.speed_units = 96U;
    msg.custom.assign("WPSWQEPQACIYOTRTZRDFYBUFHPRMURAQREZGKWFLEVWHJQFSADSDDMAZYQHN");

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
    msg.setTimeStamp(0.797310424176);
    msg.setSource(46380U);
    msg.setSourceEntity(225U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(189U);
    msg.timeout = 47191U;
    msg.lat = 0.355364447374;
    msg.lon = 0.266073858127;
    msg.z = 0.023645728355;
    msg.z_units = 240U;
    msg.speed = 0.470485939568;
    msg.speed_units = 245U;
    msg.custom.assign("MXORTQOQLCLAVNAHSIYVPKEKWUWCIUHGVDTIWWZHTMUPOWWYFVHTGYRGYFSXTVLDBSFAWMBJV");

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
    msg.setTimeStamp(0.525933631652);
    msg.setSource(25902U);
    msg.setSourceEntity(208U);
    msg.setDestination(40959U);
    msg.setDestinationEntity(60U);
    msg.timeout = 27147U;
    msg.lat = 0.585680583892;
    msg.lon = 0.505998552098;
    msg.z = 0.587810338905;
    msg.z_units = 212U;
    msg.speed = 0.677788836701;
    msg.speed_units = 182U;
    msg.custom.assign("RVBEOISNCGLCHZZUTICUFLIFBVZQQOGCPPXXPGBXKWVOGZPUIYDCPRSNTLYRNNJEDYLVYFOYKJPOGVRAQMEBGEAAWLWDOHMISKSXCVQJIKTHOHAXINKFAJYFUYKC");

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
    msg.setTimeStamp(0.223478812728);
    msg.setSource(33784U);
    msg.setSourceEntity(170U);
    msg.setDestination(17131U);
    msg.setDestinationEntity(181U);
    msg.arrival_time = 0.990766764614;
    msg.lat = 0.0366679857144;
    msg.lon = 0.967484634134;
    msg.z = 0.913331727953;
    msg.z_units = 76U;
    msg.travel_z = 0.750940294817;
    msg.travel_z_units = 182U;
    msg.delayed = 3U;

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
    msg.setTimeStamp(0.551682640623);
    msg.setSource(50177U);
    msg.setSourceEntity(79U);
    msg.setDestination(22779U);
    msg.setDestinationEntity(12U);
    msg.arrival_time = 0.943000518063;
    msg.lat = 0.0658660619971;
    msg.lon = 0.900231981589;
    msg.z = 0.553192293331;
    msg.z_units = 200U;
    msg.travel_z = 0.993178742039;
    msg.travel_z_units = 151U;
    msg.delayed = 121U;

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
    msg.setTimeStamp(0.92981640552);
    msg.setSource(12852U);
    msg.setSourceEntity(8U);
    msg.setDestination(58782U);
    msg.setDestinationEntity(15U);
    msg.arrival_time = 0.0811841805323;
    msg.lat = 0.197163206183;
    msg.lon = 0.319290248842;
    msg.z = 0.329288681348;
    msg.z_units = 196U;
    msg.travel_z = 0.332960890821;
    msg.travel_z_units = 138U;
    msg.delayed = 64U;

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
    msg.setTimeStamp(0.659030016525);
    msg.setSource(20455U);
    msg.setSourceEntity(148U);
    msg.setDestination(52925U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.657588113876;
    msg.lon = 0.462060799217;
    msg.z = 0.779008362139;
    msg.z_units = 153U;
    msg.speed = 0.521961010624;
    msg.speed_units = 171U;
    msg.bearing = 0.297306483718;
    msg.cross_angle = 0.297404217862;
    msg.width = 0.157020981825;
    msg.length = 0.198188271531;
    msg.coff = 88U;
    msg.angaperture = 0.856014728665;
    msg.range = 38503U;
    msg.overlap = 60U;
    msg.flags = 98U;
    msg.custom.assign("EUWKGACGJRPIINSMFBLMIGOVKSBVVOQJXLZHRNQCYECGEXATDOCBUNCKRCGZWVTDSOHGJJQDLATQJROSCQNKJEXZMMKUYWYNSPWDJBNANTIYDIWWAKBGEPXYCMOVKAHBDQDHXASSRNWTDHUBLNUFFXHKMVVMBMILFQZPJLEFIIQLFRTFVSIGJGHUWEBNZVYYEPRBHHPLTXOOJKPLWXZVQSCFWODRUZQERFXUZPOXURYK");

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
    msg.setTimeStamp(0.330440366784);
    msg.setSource(31960U);
    msg.setSourceEntity(26U);
    msg.setDestination(41895U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.656572478718;
    msg.lon = 0.460265484459;
    msg.z = 0.232889771551;
    msg.z_units = 40U;
    msg.speed = 0.711089671217;
    msg.speed_units = 242U;
    msg.bearing = 0.826393306054;
    msg.cross_angle = 0.88698046705;
    msg.width = 0.594672946271;
    msg.length = 0.722980601947;
    msg.coff = 39U;
    msg.angaperture = 0.0234947660958;
    msg.range = 58715U;
    msg.overlap = 210U;
    msg.flags = 168U;
    msg.custom.assign("VKXGJIYXAUCNZBRGHRLTG");

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
    msg.setTimeStamp(0.351913545501);
    msg.setSource(41111U);
    msg.setSourceEntity(59U);
    msg.setDestination(9652U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.914277220253;
    msg.lon = 0.674895674932;
    msg.z = 0.758697471259;
    msg.z_units = 6U;
    msg.speed = 0.299768875371;
    msg.speed_units = 110U;
    msg.bearing = 0.631466768945;
    msg.cross_angle = 0.251848971682;
    msg.width = 0.605344432028;
    msg.length = 0.571330601968;
    msg.coff = 248U;
    msg.angaperture = 0.0555479792996;
    msg.range = 37439U;
    msg.overlap = 240U;
    msg.flags = 178U;
    msg.custom.assign("EZHWSOYQDONVJHHNFCYALVXNDVFTBTXVUWIMWPJPYXHBISNEGJKETNMETHSUIODRLCKURMXLULGXRAHMGGMGRPSFIQZAQ");

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
    msg.setTimeStamp(0.654031961326);
    msg.setSource(24899U);
    msg.setSourceEntity(167U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(55U);
    msg.timeout = 22612U;
    msg.lat = 0.670323985031;
    msg.lon = 0.651418812527;
    msg.z = 0.241331884188;
    msg.z_units = 37U;
    msg.speed = 0.323363480025;
    msg.speed_units = 1U;
    msg.syringe0 = 138U;
    msg.syringe1 = 220U;
    msg.syringe2 = 171U;
    msg.custom.assign("KSERBIEVUCJGUMVELNVYCLQQPPRQFOOVORAYTGDTYFYECIULMBFWHJJOYIAMQDNWCESAODGNLNMYQPIJ");

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
    msg.setTimeStamp(0.278138460428);
    msg.setSource(13958U);
    msg.setSourceEntity(37U);
    msg.setDestination(43430U);
    msg.setDestinationEntity(224U);
    msg.timeout = 2967U;
    msg.lat = 0.417826131654;
    msg.lon = 0.351722390971;
    msg.z = 0.589215913981;
    msg.z_units = 38U;
    msg.speed = 0.276941155292;
    msg.speed_units = 197U;
    msg.syringe0 = 84U;
    msg.syringe1 = 78U;
    msg.syringe2 = 219U;
    msg.custom.assign("VZWRUHSNOJUEFMNJUHAMCBEZPVGRZQVAPBIMIQLZSQEFNHKFCIUPINVWQYDLASAEZAQXJTUTLWUCDJQKWTDVBMOWKJZ");

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
    msg.setTimeStamp(0.192450552035);
    msg.setSource(30593U);
    msg.setSourceEntity(70U);
    msg.setDestination(54831U);
    msg.setDestinationEntity(196U);
    msg.timeout = 59577U;
    msg.lat = 0.789601668167;
    msg.lon = 0.133027716305;
    msg.z = 0.0591152382504;
    msg.z_units = 1U;
    msg.speed = 0.388881662644;
    msg.speed_units = 72U;
    msg.syringe0 = 212U;
    msg.syringe1 = 119U;
    msg.syringe2 = 159U;
    msg.custom.assign("CRTPGSYMDYKKMGTJJIGJXJCUFOWKTNOSGLHVBXLPELCNWZTFMVMDNAQRLNWHMRCNKHXWVZKZFYQYWTRBAPETXPJ");

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
    msg.setTimeStamp(0.996842660596);
    msg.setSource(14642U);
    msg.setSourceEntity(43U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.263337692314);
    msg.setSource(47361U);
    msg.setSourceEntity(178U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.561222612319);
    msg.setSource(39483U);
    msg.setSourceEntity(58U);
    msg.setDestination(51611U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.596237685566);
    msg.setSource(49925U);
    msg.setSourceEntity(38U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.161340680501;
    msg.lon = 0.071830853393;
    msg.z = 0.110546038773;
    msg.z_units = 162U;
    msg.speed = 0.58585571382;
    msg.speed_units = 134U;
    msg.takeoff_pitch = 0.0327280021692;
    msg.custom.assign("IVOMJZFPHEKKSCZXRNTPPVLYHWVEHLMDKRLZQLETNRBDDNUHWCXZNZMKSXGRSAUQBRCFKGAOARDPINRBQLPFXCIFGKDMHWQXCWBPIYVAVVQLJXJEOBIRGJFYTACAIEHIQHUEJMWWMQPNYOVSEGWDTYYSMAYGS");

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
    msg.setTimeStamp(0.447736727624);
    msg.setSource(47272U);
    msg.setSourceEntity(165U);
    msg.setDestination(49949U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.486894570709;
    msg.lon = 0.840164800359;
    msg.z = 0.546471238691;
    msg.z_units = 148U;
    msg.speed = 0.589321745529;
    msg.speed_units = 231U;
    msg.takeoff_pitch = 0.780974964353;
    msg.custom.assign("UNJQGPZJIXQRTWVTASQMFNROHYRSEOXULPEWTDM");

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
    msg.setTimeStamp(0.712377162743);
    msg.setSource(38356U);
    msg.setSourceEntity(178U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.764948562421;
    msg.lon = 0.19823617505;
    msg.z = 0.210532766066;
    msg.z_units = 11U;
    msg.speed = 0.60913626283;
    msg.speed_units = 180U;
    msg.takeoff_pitch = 0.219629195618;
    msg.custom.assign("EPIXHZTWHJMWYBBBDXKEUCSVJLJHEZURCINROIKVQTQEPGPSTHSDINXQTGVPGXPDUHFBUOZONBRGKSABDNFDQMAUTNUZREXSHWLJJEAYQNKVAXTMLIUSYCLGKOUVMHNOUZTQJLGRKSJWLLBXBYDMWLFONDRGCDWFXVGIQBQHMEAVMZNTEWOGMYTWRZFLKFJVOOPDAPOEH");

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
    msg.setTimeStamp(0.624969659789);
    msg.setSource(32127U);
    msg.setSourceEntity(50U);
    msg.setDestination(46599U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.23172156415;
    msg.lon = 0.860886773457;
    msg.z = 0.912456820717;
    msg.z_units = 232U;
    msg.speed = 0.556217439267;
    msg.speed_units = 59U;
    msg.abort_z = 0.447103983609;
    msg.bearing = 0.193340828635;
    msg.glide_slope = 126U;
    msg.glide_slope_alt = 0.274424041871;
    msg.custom.assign("RVAAUMYUZYQLWNVHJBMQMHWZRFHOXILTMDSGNBSRKGZMCNKRYHBDACXDYOUZYKUSJTKTWPDVWTZNJKDTOON");

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
    msg.setTimeStamp(0.23852402144);
    msg.setSource(16646U);
    msg.setSourceEntity(148U);
    msg.setDestination(15186U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.364461572046;
    msg.lon = 0.284809929809;
    msg.z = 0.0774186123289;
    msg.z_units = 41U;
    msg.speed = 0.308183106846;
    msg.speed_units = 94U;
    msg.abort_z = 0.836863043744;
    msg.bearing = 0.723788894924;
    msg.glide_slope = 20U;
    msg.glide_slope_alt = 0.0118475807222;
    msg.custom.assign("GMHTBIYFYZLQJLOVXSJNTCVFFDDUMGUUSPBIAUSVHQWVNZJTBOLARICHROXLHGBHZJRMPXXXNOJUOZZKSDPRBXKUDARZHQUEAUMOFKDFNRMGGTNMNPGUCQEKCHIJEVYGQSREEMYLZAWEOTIXGPXWMTQAZPYKOSADNLARTLTWBIFBWQIKBVFPQHXVNCMUBRIQNLITCRHFFZWQPCCWJEPHSCEOSKDKITJXSYYNMDDVLVBG");

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
    msg.setTimeStamp(0.940502221355);
    msg.setSource(52776U);
    msg.setSourceEntity(54U);
    msg.setDestination(7861U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.961943780504;
    msg.lon = 0.736831288441;
    msg.z = 0.500093896226;
    msg.z_units = 232U;
    msg.speed = 0.807227319491;
    msg.speed_units = 195U;
    msg.abort_z = 0.441830499727;
    msg.bearing = 0.182976779378;
    msg.glide_slope = 174U;
    msg.glide_slope_alt = 0.0650740082635;
    msg.custom.assign("FPFTSMTLJNSJOXIRLPYESLHDYFZQKFWNTTOKVUFNIWWPZKNLRQXZAWGTHWTCDORHHZEVGIMNPRZQYJFGQJJFHJJMHIKXSIPUQCXKVKXKBLHZDUALTSLBQNMBMBGHYGPBMSMWCVOZPAYRPDI");

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
    msg.setTimeStamp(0.286761032867);
    msg.setSource(8316U);
    msg.setSourceEntity(78U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.0486348410446;
    msg.lon = 0.52696547863;
    msg.speed = 0.55837796136;
    msg.speed_units = 67U;
    msg.limits = 240U;
    msg.max_depth = 0.448279911744;
    msg.min_alt = 0.850501199477;
    msg.time_limit = 0.129508867869;
    msg.controller.assign("QXWMFXIGTDHRYMZBNGPUXXEINKTLARKZDOJCISKHJGJKWIQZQZYGQEDTEPNIQCQJKFIYGFWKASKZIOOJEGAUBDHGCPSOECAYHDFJUIOSHOCWTSHLSXMYWOOXGRNMMMDKWAFW");
    msg.custom.assign("GIGRRVKXHIZDUFTDACDXUSHARYPTSKFCPMIJTQVYPZXQKEWOIXIRSXVMNMXYUDELCOWGNIVNCZXBCHAISARXBXZFOGONFKCYAQCKTRADOYDWKLHCBNFZJJQDJHQSLUDKKVNYEVTVBPWUWJLFYZOELVVMTFEUTGRAFAERHWSOGZFPEWPVBGRYOQPDMHPQHWQPEWTLATBBSMNNGEBLZORNZKUJGTMNLUHIOCIEQCSJDYSLGMI");

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
    msg.setTimeStamp(0.182404399077);
    msg.setSource(46404U);
    msg.setSourceEntity(166U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.123388544955;
    msg.lon = 0.535851759524;
    msg.speed = 0.957215686591;
    msg.speed_units = 17U;
    msg.limits = 36U;
    msg.max_depth = 0.727455501197;
    msg.min_alt = 0.946796789164;
    msg.time_limit = 0.341640061932;
    msg.controller.assign("FKFBZWEEJLKNJMKUVMJLFLGWMQBPBYJTOWVXPGKUCKZNBAGIPBROOOEXWTCDNSVAEHPVFFSQGFCBHIDQUPMSQEIRHVIKDCCYAGCUZSOHAXLXNDHNYHZLOEMVELRTNDXIUWKEWTJTKIGPUQWXHUJRTNGLILBSUQJSBEYYNRHYDTPSDTYEWPRUTBROOGHOMDMSZCIHVFNIVAFCLJAIZQRXQGVRODJGYYJMFNZZYMZVMPZFQQASXDRSBWWCXKAAP");
    msg.custom.assign("QGTFTEDIQYAKOOXUMLSRUOVRHEFFSYZAUXAWGYBZSJPHVMCPQKXWVVMKNFUZIWJCTQSFOLEZTYSBHJJIAJMBEWLCWDBKGRWCMYNCQVKXTVBBUFGONSKWNYJXQJDMODJDRRDPHJKIOKFGXNLXWIPNKQPFLBYZZVTXRBNUJSDFZGHNLTAMIVOWLOXPGIYTZENUQCYUVTAEHRLIQLEBOAWKDHHNGZGIHQCXUGSASZCYTMCIPPRCBPREUMVFMDALDS");

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
    msg.setTimeStamp(0.105065239426);
    msg.setSource(20788U);
    msg.setSourceEntity(106U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.328307108887;
    msg.lon = 0.843321945777;
    msg.speed = 0.732304585916;
    msg.speed_units = 218U;
    msg.limits = 219U;
    msg.max_depth = 0.0602988154804;
    msg.min_alt = 0.841231452259;
    msg.time_limit = 0.212148159767;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.735656967824;
    tmp_msg_0.lon = 0.26206382643;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ONNEQEQRLYPJADBRMMVTITMOAHJYFECJHBFUGOGCDFMCXRQQYKGTJNFDLKHHTXRDOTLAPXPRZXXBVFJYHQWCJSOLGUJLBHOOVQGLZMGXVRARVTFDOZZQNSRFKPGPUKOWCNUEPJCN");
    msg.custom.assign("WQSTWHFVTIIFWALGFKUXKBXGRVRBZJUHEBAMGKCTTJBPOKGEZVHNLVI");

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
    msg.setTimeStamp(0.990702139468);
    msg.setSource(40069U);
    msg.setSourceEntity(29U);
    msg.setDestination(7764U);
    msg.setDestinationEntity(248U);
    msg.target.assign("MSAQRUGPZMNTVSBKSBNEWRKMNHKSZALUVBLFPABKCTDIKYFRVCLRYSNURVJTKWFPXACDZQNJIGAXWHEEGQYWUSPIXHLTDVUFJZWZWXGCBVTKKVUDJXLPPYPTHIYOSNDCUFBZLHGAUBMODIUKAEJFMPEHQQDORRASJIQNTMLYEBREVVOLCXXBIXEHANWRLNDZSRJUCYADGHTLOZXYOOQFCIPOQICQTPFCOJHGDTJFZFSHYMG");
    msg.max_speed = 0.126050610311;
    msg.speed_units = 223U;
    msg.lat = 0.407927709744;
    msg.lon = 0.754235829812;
    msg.z = 0.981468733662;
    msg.z_units = 15U;
    msg.custom.assign("ZJGMJLLDZGWVTMWUVTMDNNFTGKNTPIKHNRIYLVTIMIOWODGAISKKEFDUJSPOVHXVCRTFZEOEXQUOAOUYHUKRYUFZMKRUDAQY");

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
    msg.setTimeStamp(0.216817939993);
    msg.setSource(27036U);
    msg.setSourceEntity(189U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(110U);
    msg.target.assign("CDQOXUPSBDWNJNHINYTEASHWUKVUDHYGXMCYTVBAZYBRAIUTOZYRIDLMDKMGUQIDNUTLAROCAVKFQENVZJJWFTRLNVKXTZCFPATOOSBOLASUCFRMYGPXOJIURXTAVXUFSPCGYPGQPPQWFMDPQTLJOXRXVKHJKFUOQLZSJSMEQSHCBZMTCZJKFHKCXQLEHPVLFEKEGWVSYEIPWIIDDHOGARWBLNAKBCLMMJIGHENEZERWFMYWNHBQV");
    msg.max_speed = 0.82993131048;
    msg.speed_units = 213U;
    msg.lat = 0.119862168312;
    msg.lon = 0.890862890162;
    msg.z = 0.921699109809;
    msg.z_units = 182U;
    msg.custom.assign("YKBZTXDFOWCDXTKZHNMGERJNSIZTOCMFXYQLHGOUTVCFVUAPQZNJSANXUHASZFKEHBFBPPLNUPGWLUSWAPMJZHROQRZQCVGIVSMGAVMOEFKRKBIJPQLJSLJLGKRSDTCAYDXODMRZBNPNQG");

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
    msg.setTimeStamp(0.437832484969);
    msg.setSource(63500U);
    msg.setSourceEntity(59U);
    msg.setDestination(26767U);
    msg.setDestinationEntity(147U);
    msg.target.assign("BGPNQUFLGUMXTWPJPBUSAJTXCSHGFOZOXAKRIXHBAISEFBKOOFSSQQIIBXSWIYGYZFROJNOCUXEHZPWBVNCMEWVNDJZXUHRFWRYTBBVILGVOEGFDJDCUQNTWJAKCDWOTUDUMHVCRPIKISCZQZSDYRHDLXKKWVYKREO");
    msg.max_speed = 0.256976462391;
    msg.speed_units = 121U;
    msg.lat = 0.165080016086;
    msg.lon = 0.668927520285;
    msg.z = 0.356080454176;
    msg.z_units = 213U;
    msg.custom.assign("EAQTVZEFFZHNCMSCTRXRSRFETCVGXZXDOKAMHDXYMZNVDJAPULWQSDCBSWPKGNONYJVINZEUVGGZUXTGPBAXWIKTJQDJLABXJOOLLXWRMDMJITRQOPROBNOZBQJERQLLYKMUOPAWSOFZWVHPDR");

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
    msg.setTimeStamp(0.584777390528);
    msg.setSource(36850U);
    msg.setSourceEntity(185U);
    msg.setDestination(61761U);
    msg.setDestinationEntity(102U);
    msg.timeout = 21766U;
    msg.lat = 0.485856155437;
    msg.lon = 0.75833487769;
    msg.speed = 0.0495248125576;
    msg.speed_units = 104U;
    msg.custom.assign("NDUQOWXEPMJARPXDQQDZETXYGCTIZPGRXUNOMFEXAFLVEAZBRCSMGLAMLMHENGNGNHYWVYWVZCKQUOVZIBNFYBHTKCWTPQMSOKRTBWPOHSNJZPKJSPHDBBUUUKFAWAZBIKEQSJFNEDGHVLJGQPCVVJKMDYZXSLFMTDVMISBIVRATETSREQMNHSYTDPPLWFJFICUXKOKRCQI");

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
    msg.setTimeStamp(0.0386956962185);
    msg.setSource(14526U);
    msg.setSourceEntity(92U);
    msg.setDestination(4696U);
    msg.setDestinationEntity(115U);
    msg.timeout = 43904U;
    msg.lat = 0.634643820703;
    msg.lon = 0.174568076617;
    msg.speed = 0.0362153942733;
    msg.speed_units = 160U;
    msg.custom.assign("ADCWKVZKDRKCHOOBLNHVKWNADCFZEHDVGKRNUGPPBRTMXUQRJFXJTEJXFIZRPMYXIHVLNAITQQUYSTZUBSCSFFXTGKUXVTHBINWZSAOQISKFJGGGCTZABLYLEMHWLKYCYZDCJPFXSYJOESDDBULHXMYBTYLJBGLUMSHVGRPRWROOQJMYWNUGVFNKSAEIDAAWBEHZPEAP");

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
    msg.setTimeStamp(0.791958002861);
    msg.setSource(7057U);
    msg.setSourceEntity(55U);
    msg.setDestination(1641U);
    msg.setDestinationEntity(222U);
    msg.timeout = 46358U;
    msg.lat = 0.669615634591;
    msg.lon = 0.815037284806;
    msg.speed = 0.65755496538;
    msg.speed_units = 113U;
    msg.custom.assign("EHIUUGQOXPYZVHRPAMELIFNFEEDAOZOQSOTNZYCQKOIPTEJLYCXMDBRQIHHGZJMGVSBFTZOIUDWPDJFERHCUALAAIKBFAZLPUUSBQXJTBKCMPAVWEGGUYIWAOLRGRQWJHCSTYMBKQMVSFXCRLZQYVXABCMNQQVCNYWPEKVDNDIXXXCNTJSZTESRYVOHTYKDLZKSMWRROPDSBGMDGU");

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
    msg.setTimeStamp(0.322450027189);
    msg.setSource(24074U);
    msg.setSourceEntity(44U);
    msg.setDestination(43568U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.866772939809;
    msg.lon = 0.328392700332;
    msg.z = 0.0966644542577;
    msg.z_units = 139U;
    msg.radius = 0.209575227128;
    msg.duration = 18442U;
    msg.speed = 0.26254411934;
    msg.speed_units = 165U;
    msg.popup_period = 51781U;
    msg.popup_duration = 64601U;
    msg.flags = 19U;
    msg.custom.assign("EHGLAOHQQUWIERICHZP");

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
    msg.setTimeStamp(0.0464172676195);
    msg.setSource(27933U);
    msg.setSourceEntity(94U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.995834352848;
    msg.lon = 0.389907720565;
    msg.z = 0.399351886423;
    msg.z_units = 209U;
    msg.radius = 0.482028161513;
    msg.duration = 60006U;
    msg.speed = 0.424303229285;
    msg.speed_units = 144U;
    msg.popup_period = 19285U;
    msg.popup_duration = 663U;
    msg.flags = 172U;
    msg.custom.assign("SFSZUXIFJUQQSYMNJFGBRQQKSFMGLCGQKUP");

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
    msg.setTimeStamp(0.121589656367);
    msg.setSource(16280U);
    msg.setSourceEntity(127U);
    msg.setDestination(39596U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.931786642634;
    msg.lon = 0.669199936855;
    msg.z = 0.712916306599;
    msg.z_units = 47U;
    msg.radius = 0.715655520472;
    msg.duration = 12426U;
    msg.speed = 0.9000209742;
    msg.speed_units = 220U;
    msg.popup_period = 54258U;
    msg.popup_duration = 10531U;
    msg.flags = 191U;
    msg.custom.assign("HJQMZOWZAUIYVLOQHGLFIEYJSFWFJKCMGNEDSCLRUXDGQUOWTHYYBAHXGPFPRYUPSWQCXUALENDTSLIUTZRFUXG");

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
    msg.setTimeStamp(0.874704353131);
    msg.setSource(44729U);
    msg.setSourceEntity(196U);
    msg.setDestination(8754U);
    msg.setDestinationEntity(100U);
    msg.op_mode = 211U;
    msg.error_count = 211U;
    msg.error_ents.assign("NUOTIIIWMNMUJBYGMXNHGOZNTEGBEIAQPLRYWQVRPMPVDTDLZXILCKZDYHPHFIUBZALZWBQLTASHTEUHOMVURWYTZDUCVFXEGKCYDNMAJ");
    msg.maneuver_type = 15084U;
    msg.maneuver_stime = 0.875562727555;
    msg.maneuver_eta = 42988U;
    msg.control_loops = 1208806231U;
    msg.flags = 103U;
    msg.last_error.assign("KMNXMLIYBODUIBXLZJHFHJCAZWRBFQGKUVJFPGVQSXKYYDTQSBKNGTCJMMLDHIRNVQZOPMSVMROEWZZRANQFHZEDYJIESLQGAFQGIOPBUYMTJGTVNBUBMWYIPCCCGASGBPYUXETPOICXLEVQYYAPUVTORZFNNSZIDBHJ");
    msg.last_error_time = 0.329309251848;

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
    msg.setTimeStamp(0.309371045786);
    msg.setSource(62802U);
    msg.setSourceEntity(227U);
    msg.setDestination(22970U);
    msg.setDestinationEntity(6U);
    msg.op_mode = 24U;
    msg.error_count = 84U;
    msg.error_ents.assign("IFFTUJRRVTFFXDONEXCUJLTPYPOBSBCKJXZZMZMAGNXWGKVIDADDNEXQOJNMQHVSDNPRZZQHSSKYCCYAWVAOFLTERGVDGBUMHWKQFOVADMMTZQNRAHOWLGALIJVJDPQIDUSLEIKWISOZLCYHZXPOFSVICGYGJEHTGJBRDCBGCROFWJVNCNFRXZISWXEYHWHKBIKQWUBUCBQKEFSYUHWBNOT");
    msg.maneuver_type = 29392U;
    msg.maneuver_stime = 0.699097335233;
    msg.maneuver_eta = 43561U;
    msg.control_loops = 3717644392U;
    msg.flags = 145U;
    msg.last_error.assign("HBPJAFGDKGXFRRRYVZKXVJGBXSLJAOFCXVRTOANEVKYPTXYFNCXHDYDUHWXOWAUJDZSFLQPTJFYJSNLHMASLIEEKMDBOIRSUGHPUKSOLKMKFIMTPNCFTZIUSUGPYBEUWQOWAIQPINHYZWWMUGHFPZLLSBQJQDXZEJACBOEXPXJNHBBMWWOIJNVOMEESHKAAM");
    msg.last_error_time = 0.494379072303;

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
    msg.setTimeStamp(0.332403273183);
    msg.setSource(3431U);
    msg.setSourceEntity(190U);
    msg.setDestination(60801U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 36U;
    msg.error_count = 11U;
    msg.error_ents.assign("EWBLJHUGYWKYAAJZZPHUYAIHCXQZWVVUBOCNTRMTFUFOYZNNAGAPLVENKRZWSKMPEIIDTLKDNXRUXWDBHIVLJOCXEXHTZXKYRNPYEBIRSTPFQOOGOVGOVWKRFZSEEGJDSNFAQZUWZZJMTSAFBVENYLUSCCDVHMLPSQFGRXSOMIKUTRFBYJBBYPHXOCMQSTSNKWMAIQJFWLWDIMYQIPJDAGVHGRELGLHMPDJ");
    msg.maneuver_type = 9266U;
    msg.maneuver_stime = 0.299033528016;
    msg.maneuver_eta = 3443U;
    msg.control_loops = 256212669U;
    msg.flags = 34U;
    msg.last_error.assign("RWPMJAXHMSHQDCXSFZKCFGMOXMKOAETDCLBBASJQIGDBWEFCQSIKUCBEBSSTUQVHPOMEXLCPYTKIQINVTYNZGYNXCEPWTGIGVESXNFYOBARZHNSNPWROARJLFXVCWNJDWNFQFBDYVYODJRDCZRIUPOUAGHXLXKZMBAJHLUFTJRBZWHUZTRZOLVVATMGELAQZLDVPFWWMLGHKIJEIUE");
    msg.last_error_time = 0.946403000719;

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
    msg.setTimeStamp(0.291608730607);
    msg.setSource(50900U);
    msg.setSourceEntity(150U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(15U);
    msg.type = 66U;
    msg.request_id = 9326U;
    msg.command = 92U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 12966U;
    tmp_msg_0.lat = 0.0284757088127;
    tmp_msg_0.lon = 0.311771546499;
    tmp_msg_0.z = 0.97778266415;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.speed = 0.649845256433;
    tmp_msg_0.speed_units = 246U;
    tmp_msg_0.custom.assign("JYWXOTOFEJYCGMQVEJESXQXKRKMRSGHPNQHVIKRTECIPVAITLBGBSWPGURCOITHGLHYARWYDFFNICIGPZTVFMIOBIBEMKLKUOUAHLBFRODMTSVAEFZBMFUXYPTHKJVRHRNFKXLPLKJADMDKQTQXZJDYASONZECBQHWWVANXBSCJGZMUQEBTCOLUGFEXUYOZCVUBPRPNGWWSCZDUDHMDSJLJPGZWWSVXOAYAITZDWK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24515U;
    msg.info.assign("ZGGJVCCTGAETWIVQIXKXWRHTJFAQZDXHNVPHNONIVUXCHBHGOEUYDTQDUMEXECXRMUYVDQKLMAQFTWKYBGPTBZSKDSPBERYJTJQDJPUOESAZJROBVVZMETNQUFMBPLUNBCYS");

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
    msg.setTimeStamp(0.866335258486);
    msg.setSource(9260U);
    msg.setSourceEntity(49U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(53U);
    msg.type = 20U;
    msg.request_id = 35667U;
    msg.command = 92U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 23519U;
    tmp_msg_0.lat = 0.374578512712;
    tmp_msg_0.lon = 0.0514223173865;
    tmp_msg_0.z = 0.361539456307;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.speed = 0.654752034026;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.roll = 0.215533262106;
    tmp_msg_0.pitch = 0.484877607857;
    tmp_msg_0.yaw = 0.596308746617;
    tmp_msg_0.custom.assign("AOXGNJVGBYLOQHDTNWZWBLEVQQSEFUQOIFZWCRPQGWGBIKFRMSPBAKXVNDTKZUOCNPMXMEKHNHVYSATGBYBVTLMLNQEJGPCXIDUMCKUIDBFILPMCFAKZVIRWREOWYBWGMDWLIJRFSAEJFJHYBVUMDPGVYOMXQNDQHRPAYEF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45341U;
    msg.info.assign("FQYBWERRMSCDWBUVWMAUYLWSXRFPKOANYLQDGYDFROGUJDZBPPRNCAHVOTDSRDQXLNHULBTQNTQMLLVHIPHFACLYFXUKOGVRKMOFCZIZVYSFAOZNECJXIADKZCDYVIZS");

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
    msg.setTimeStamp(0.267559702262);
    msg.setSource(41871U);
    msg.setSourceEntity(74U);
    msg.setDestination(51395U);
    msg.setDestinationEntity(221U);
    msg.type = 182U;
    msg.request_id = 15060U;
    msg.command = 210U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 5302U;
    tmp_msg_0.name.assign("KZHMGOLXZKQFFRIGPRDZCULWVJERRGXNVAIJSWKURDTTSLSRYMBPGNVDLSWRUBDKIKSELVGPNABYYUMNJHPHMJ");
    tmp_msg_0.custom.assign("MGRSWMEJZLAJNTGMG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16179U;
    msg.info.assign("XGAVIHSSUUUVALINSYOSQTRUDYEADGUYEFGAMMLXMWSFHSCGXQQBCMZVBLNCXCIFBPTVYTSQGIDNOCXEMPJMEOTNWCFEAYRGKQPLKZGQZLNBVUDEXZLAHRSWZTMFAWTIAIOONWRVJTKMKBUDJODOAXPFCQHHQSXONVNMBAMHPPKQPEYWDXIWSHKGTRVEWFRXYRJRKFHJKTUBKDLHOFUL");

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
    msg.setTimeStamp(0.0876845440454);
    msg.setSource(60053U);
    msg.setSourceEntity(7U);
    msg.setDestination(10205U);
    msg.setDestinationEntity(213U);
    msg.command = 95U;
    msg.entities.assign("PQSHKQOOFDNYZJXWAXBADVRMZWFZQJMARGESYIMDSPMHUBSODUPSILRALMSOLFXQLMLBAQEKKTBUBZPHLGDAVYV");

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
    msg.setTimeStamp(0.661478372191);
    msg.setSource(35028U);
    msg.setSourceEntity(5U);
    msg.setDestination(28643U);
    msg.setDestinationEntity(183U);
    msg.command = 150U;
    msg.entities.assign("SYWSEZGWYKAZMDXCUAFNKUPVJWBHJNUIAZMCWMNSKBPZQSSJHLVIECNDFGMRGLUIFOHEEAIYVQWRBIRAELOWZHTQYVRTKJHXPJVWGPUOYLSLXBMXZTDUFRMKXSUBZGEVDQHMNOCDHSDTMBMDSBQXJVUQTORRLQQPCSIDJWZDPFBAPNP");

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
    msg.setTimeStamp(0.171248934362);
    msg.setSource(58141U);
    msg.setSourceEntity(105U);
    msg.setDestination(43102U);
    msg.setDestinationEntity(162U);
    msg.command = 2U;
    msg.entities.assign("ZQKKAHTWLBJIGIALPLEAPEPMGWUZQUTJNSNJZPKIUCFSQKYGEKGVYCMJLUQKYXMRSBUZTKWNCPZLNSNOZWBIDMJQIMLIRBXDHQFFSSTWDKQBFFJOAFREISLVUTHVPQVRHDBHDJCMADOXBFOKBXGQIXTAZYGOXNIIGVWZJEKHRMVVTOWVWPCXEROBMTYYJOUAECSZCHASCXUVOBYMEHVCFRTNYDGAANYUJUFMEGWYNCD");

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
    msg.setTimeStamp(0.766353517199);
    msg.setSource(19951U);
    msg.setSourceEntity(247U);
    msg.setDestination(57430U);
    msg.setDestinationEntity(208U);
    msg.mcount = 132U;
    msg.mnames.assign("ORXCXMZRMDELMT");
    msg.ecount = 13U;
    msg.enames.assign("YSQKLYLUEGZQCTULKKYTWATDQAEOOZIXESTSWHPNGUMXONIQEJCRZDUYWXYAWCQUMCJNSLYNBGJGDQYJSWITZFDLAWAHTDSFCBQSWKPOLIIEQKADHTMZWHVUYCRHGLZRTGBCXZPBNFPDNABAKTPGOPRFOLIXRKBFVXMJDM");
    msg.ccount = 69U;
    msg.cnames.assign("IHJTGAVSTDLNNVUTODVMQMCRWRKGIJMUTTLQZJWDTQYFBLTTVCXEDZEJKEYOUQYBOIULPSXDZHHBUFKLVSUHPZOCPPZEZNOUFIYORFJAIPKMLNQPFKANSHSVCRUKUVVPMXLJPWHNIXQXJFMZWROGRXMCKJENYBGXFAKSQFMSPOBMI");
    msg.last_error.assign("TDTBGVCDIUUWKMHRABHNBJSNPTFKQLNUYBATVZCRBQRHTODICZKEHESLVZAFGRUSHZSYHOWGAVJJATZGLRGPINMINTEFTCVMWQFHWZLJOAQZYOACEWYPHIFPWEKMXYZEOSVNPXQALICQMKZJHYSMURYDIWBHLUVUJQBNXLIJ");
    msg.last_error_time = 0.644042065134;

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
    msg.setTimeStamp(0.226866284927);
    msg.setSource(18509U);
    msg.setSourceEntity(31U);
    msg.setDestination(25469U);
    msg.setDestinationEntity(64U);
    msg.mcount = 118U;
    msg.mnames.assign("VBGZQAYWKXIUEMQBYCK");
    msg.ecount = 202U;
    msg.enames.assign("GJTIALFZTKJEMIEQPDUANGUMODCDZQLSIHEMKLBZVUCUPIHVBBNLOBZWQDIRAXTJJQYHYAIJGZSUYEEQMYSTWMNOIKAUOATLYXITURTEZFCATOLJWKNDKWPVSCWQPYHOZDRCZNFQXVBSGPIPFRLKPJDBCDTKRSSJDNMVADEMFSCIOSRYGBROECRGXGHOYR");
    msg.ccount = 8U;
    msg.cnames.assign("MEBEIUZSVKQHMLGGMPNHQQGAYQNKJAMKCBUYQFCLAWCWBJEHHKVPAXZYWMVGLOSRPUCOZZQRCDXZRUTRAXWLXFFNNVRIPUHNOILMUYXVKHYYKLDGNLZVSZIPLLJABHTGEYTWOZHACSXUTTWKQSCMVHXBFQBEFDXTEENWYJFRJTDOSODELEIDGNJPCFZKYCBPJIJTKXRNUPGIXMFSDIQUDVTJEGCSWIKMDOMNODTBBFZQWABARJIHRPSOVU");
    msg.last_error.assign("YNPAFXGGTBYSILRPTWPUOCEJFKCXPAAGCICJNBMJIAHNONEFPPLVHOAKPKSZRJQISAQDCYTZETLOM");
    msg.last_error_time = 0.650692550936;

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
    msg.setTimeStamp(0.955397894393);
    msg.setSource(15247U);
    msg.setSourceEntity(161U);
    msg.setDestination(5571U);
    msg.setDestinationEntity(191U);
    msg.mcount = 135U;
    msg.mnames.assign("QSJVNFIXAPXKGVOMWKYPAGZFSBXRSRFYZUFGEDTPAWMKAWHJODNELZMOWTZPTSJTRAHITAAUICILGLCXXECXFHRZPMEFUWNIYDGUKCJVNSGRHJDDQPDQNEFMASTFBMUGZKWKYUYQBQQCOYHRLLLUIOFOVMJTWDDEERPTPULOVMCNNSWHUPXBEOIAOWIGKHILTBETNRCZLKBDSGXHUCBYXQEVJXZPVCFIQJOSMVYCNL");
    msg.ecount = 178U;
    msg.enames.assign("PLBUJGISXBZGWTWXGZDAPGRBBGHXABZCNKFTOEFRMURIOHWJZCNDSDNVFYHLYMXJUAETZDLWWQUGOSJTARCNVVSNFRHZMLOUVLEWPKQLSYQTXGVGXKNMNAXMTKTPIXUOOQJOMWIYQRZRXCJRLPVPDKCNRBFHYSJMDBIHT");
    msg.ccount = 252U;
    msg.cnames.assign("YDZRFAHJPYDEAKWUYPMVYDQBVKCBJBLXEGWIOZBPEXTIBRJZJFSHGQOJNBEMXGWHGGMZPBYQRROMLTUMFNSFSLDEQZFXAENNLTMSXSZPJTKVFWHKEACXOOVIMIIRCABCARJHWFLZKNEQQQGHUORNPDZMZSICYHWUIDGIDUGKTVCVKROVLIWJKSMFGESHQAVRPUFSAXKPPWZRTLCJTXYVSXDBULTNLDJYANDBHTQYKAOWIC");
    msg.last_error.assign("LOXFNMUXRUCNFLYPLQDHYZYASISHPWDAHEHWJBCXJERFHUAJPDZMRZYSKIRKUSYSTBEJRAVTXMUFFBVMPWLWIFATUXXPGNQJFUDEBRKKSTRNWIOZGWCVNRTMOADCSWZEICITEDTOCBZFJHKJJSPLGEZIKPVPEOBKAZTZGYHCTSYOLEWVGJILFYNMLVATAGOVOQYQLIBGBRQQJFKCPHDUUUMPZQXWXWDCCGGMANMVQHGENDQBYDSQIHBLXV");
    msg.last_error_time = 0.216833039982;

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
    msg.setTimeStamp(0.291601511088);
    msg.setSource(52064U);
    msg.setSourceEntity(70U);
    msg.setDestination(26958U);
    msg.setDestinationEntity(234U);
    msg.mask = 95U;
    msg.max_depth = 0.820043737953;
    msg.min_altitude = 0.187563914669;
    msg.max_altitude = 0.842399685963;
    msg.min_speed = 0.815155124011;
    msg.max_speed = 0.559584736188;
    msg.max_vrate = 0.123610601112;
    msg.lat = 0.431705959185;
    msg.lon = 0.449359014244;
    msg.orientation = 0.734022406139;
    msg.width = 0.290832987829;
    msg.length = 0.808771696263;

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
    msg.setTimeStamp(0.410376885211);
    msg.setSource(18282U);
    msg.setSourceEntity(80U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(12U);
    msg.mask = 251U;
    msg.max_depth = 0.80652170048;
    msg.min_altitude = 0.833799238433;
    msg.max_altitude = 0.94674628915;
    msg.min_speed = 0.996349115533;
    msg.max_speed = 0.949707252825;
    msg.max_vrate = 0.91692573685;
    msg.lat = 0.339357178313;
    msg.lon = 0.98938930082;
    msg.orientation = 0.200241091245;
    msg.width = 0.970325349501;
    msg.length = 0.937993174694;

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
    msg.setTimeStamp(0.182997340417);
    msg.setSource(35199U);
    msg.setSourceEntity(199U);
    msg.setDestination(63457U);
    msg.setDestinationEntity(57U);
    msg.mask = 15U;
    msg.max_depth = 0.18725668147;
    msg.min_altitude = 0.956385352918;
    msg.max_altitude = 0.490237001851;
    msg.min_speed = 0.70621644076;
    msg.max_speed = 0.664124952756;
    msg.max_vrate = 0.70369124336;
    msg.lat = 0.805892836329;
    msg.lon = 0.798221323741;
    msg.orientation = 0.131349693082;
    msg.width = 0.47812202205;
    msg.length = 0.414962061905;

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
    msg.setTimeStamp(0.404685629992);
    msg.setSource(41592U);
    msg.setSourceEntity(18U);
    msg.setDestination(56746U);
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
    msg.setTimeStamp(0.147160126465);
    msg.setSource(7599U);
    msg.setSourceEntity(140U);
    msg.setDestination(22091U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.141548108841);
    msg.setSource(33414U);
    msg.setSourceEntity(87U);
    msg.setDestination(64259U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.0629080449164);
    msg.setSource(22220U);
    msg.setSourceEntity(139U);
    msg.setDestination(61819U);
    msg.setDestinationEntity(181U);
    msg.duration = 4036U;

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
    msg.setTimeStamp(0.97058722777);
    msg.setSource(54389U);
    msg.setSourceEntity(182U);
    msg.setDestination(65442U);
    msg.setDestinationEntity(125U);
    msg.duration = 38687U;

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
    msg.setTimeStamp(0.275984504639);
    msg.setSource(13237U);
    msg.setSourceEntity(6U);
    msg.setDestination(22815U);
    msg.setDestinationEntity(53U);
    msg.duration = 27750U;

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
    msg.setTimeStamp(0.903959685718);
    msg.setSource(40477U);
    msg.setSourceEntity(203U);
    msg.setDestination(103U);
    msg.setDestinationEntity(216U);
    msg.enable = 26U;
    msg.mask = 2550310225U;
    msg.scope_ref = 3415977236U;

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
    msg.setTimeStamp(0.445922232142);
    msg.setSource(42553U);
    msg.setSourceEntity(248U);
    msg.setDestination(49488U);
    msg.setDestinationEntity(164U);
    msg.enable = 24U;
    msg.mask = 4045053744U;
    msg.scope_ref = 4276000886U;

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
    msg.setTimeStamp(0.775781351448);
    msg.setSource(14721U);
    msg.setSourceEntity(26U);
    msg.setDestination(41558U);
    msg.setDestinationEntity(215U);
    msg.enable = 91U;
    msg.mask = 2545704817U;
    msg.scope_ref = 1490751874U;

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
    msg.setTimeStamp(0.941551882686);
    msg.setSource(11573U);
    msg.setSourceEntity(48U);
    msg.setDestination(21698U);
    msg.setDestinationEntity(115U);
    msg.medium = 143U;

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
    msg.setTimeStamp(0.198857413289);
    msg.setSource(54904U);
    msg.setSourceEntity(81U);
    msg.setDestination(64437U);
    msg.setDestinationEntity(209U);
    msg.medium = 21U;

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
    msg.setTimeStamp(0.167250142327);
    msg.setSource(38085U);
    msg.setSourceEntity(249U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(27U);
    msg.medium = 241U;

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
    msg.setTimeStamp(0.455325751711);
    msg.setSource(46303U);
    msg.setSourceEntity(89U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(108U);
    msg.value = 0.200808934903;
    msg.type = 173U;

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
    msg.setTimeStamp(0.228988399587);
    msg.setSource(44184U);
    msg.setSourceEntity(241U);
    msg.setDestination(24283U);
    msg.setDestinationEntity(4U);
    msg.value = 0.933922719691;
    msg.type = 134U;

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
    msg.setTimeStamp(0.502230388379);
    msg.setSource(15081U);
    msg.setSourceEntity(238U);
    msg.setDestination(35409U);
    msg.setDestinationEntity(195U);
    msg.value = 0.740035399029;
    msg.type = 249U;

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
    msg.setTimeStamp(0.197654668897);
    msg.setSource(15532U);
    msg.setSourceEntity(160U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(197U);
    msg.possimerr = 0.943778528636;
    msg.converg = 0.169765515207;
    msg.turbulence = 0.683682192607;
    msg.possimmon = 206U;
    msg.commmon = 241U;
    msg.convergmon = 77U;

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
    msg.setTimeStamp(0.756043580167);
    msg.setSource(8817U);
    msg.setSourceEntity(171U);
    msg.setDestination(25697U);
    msg.setDestinationEntity(54U);
    msg.possimerr = 0.96624254515;
    msg.converg = 0.705328371646;
    msg.turbulence = 0.47492526367;
    msg.possimmon = 227U;
    msg.commmon = 254U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.923670234219);
    msg.setSource(43448U);
    msg.setSourceEntity(136U);
    msg.setDestination(32939U);
    msg.setDestinationEntity(72U);
    msg.possimerr = 0.152337306257;
    msg.converg = 0.498232025175;
    msg.turbulence = 0.511436775963;
    msg.possimmon = 213U;
    msg.commmon = 156U;
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
    msg.setTimeStamp(0.471031442362);
    msg.setSource(38925U);
    msg.setSourceEntity(68U);
    msg.setDestination(58268U);
    msg.setDestinationEntity(182U);
    msg.autonomy = 8U;
    msg.mode.assign("HSHMNEPMKNYZEFBRTJKJFYSVBVQFVRQYNVLZQQCWGUPCOPJTEOOHTSDEUYZNDGLAARXJKCXZPUIZLLKXTIVHBMYJQXZMHRHYVJTCJBKGVLZXACAZIETQXXELURFTKLXMOMQCLDOVCRYIHEDKAWOAUFMPGSBWQYHJTBNOCTSSVASLQMGDFBKWUSCFWDEWHOJPTOLYRFZCSMWJNNODNEQBIIPI");

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
    msg.setTimeStamp(0.408467334025);
    msg.setSource(45898U);
    msg.setSourceEntity(182U);
    msg.setDestination(14179U);
    msg.setDestinationEntity(129U);
    msg.autonomy = 136U;
    msg.mode.assign("ZJRBQWEWXFTVPORHGJMLFOTYBKDUPDMWKVKPOLYKVXIUOPOEGMITLTZMUNRZTOTXSFNRHPXCQLDLKMZGVWLGVOAOZHB");

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
    msg.setTimeStamp(0.277241728715);
    msg.setSource(29734U);
    msg.setSourceEntity(161U);
    msg.setDestination(64373U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 30U;
    msg.mode.assign("AQWQHTQHGWFBKNFOAHJIKOTOKTRLSEPBRHDHEZQGOGKSYUZSDVQJORFLMBTUNLUPVX");

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
    msg.setTimeStamp(0.484710135172);
    msg.setSource(59532U);
    msg.setSourceEntity(230U);
    msg.setDestination(26459U);
    msg.setDestinationEntity(230U);
    msg.type = 89U;
    msg.op = 170U;
    msg.possimerr = 0.0672245560838;
    msg.converg = 0.146032205985;
    msg.turbulence = 0.771139443794;
    msg.possimmon = 57U;
    msg.commmon = 9U;
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
    msg.setTimeStamp(0.345438819088);
    msg.setSource(59262U);
    msg.setSourceEntity(4U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(180U);
    msg.type = 178U;
    msg.op = 160U;
    msg.possimerr = 0.693657963503;
    msg.converg = 0.488605330506;
    msg.turbulence = 0.509959990796;
    msg.possimmon = 148U;
    msg.commmon = 160U;
    msg.convergmon = 162U;

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
    msg.setTimeStamp(0.454049917852);
    msg.setSource(5684U);
    msg.setSourceEntity(122U);
    msg.setDestination(30512U);
    msg.setDestinationEntity(69U);
    msg.type = 172U;
    msg.op = 227U;
    msg.possimerr = 0.601097600092;
    msg.converg = 0.198384830034;
    msg.turbulence = 0.484690802642;
    msg.possimmon = 2U;
    msg.commmon = 180U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.819875982208);
    msg.setSource(57746U);
    msg.setSourceEntity(47U);
    msg.setDestination(35860U);
    msg.setDestinationEntity(99U);
    msg.op = 28U;
    msg.comm_interface = 13U;
    msg.period = 9780U;
    msg.sys_dst.assign("RUAHKKYESQZSWZAIEPGLVXILRIVIQAMRPTIJBSNBCRYWTUSPKRWXPAKZYQJVAXKCFUHHBRVXOSMWKLIHPQZLOQBMFMNWUACHPPDDFIDFZETTJICUEJEEVRONGPEUJHNXMJVNTKYOV");

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
    msg.setTimeStamp(0.712898395697);
    msg.setSource(58567U);
    msg.setSourceEntity(68U);
    msg.setDestination(23236U);
    msg.setDestinationEntity(182U);
    msg.op = 126U;
    msg.comm_interface = 136U;
    msg.period = 15111U;
    msg.sys_dst.assign("LDPPWDUJIMSXPTLHDIFWEMTGTTAODEVXASKSGYBQTIXSKWMVBNRBKRUWDNHAZTBUACQLEYOVRJJWYUZOKZJZDAEHFCICJOYETVSKNNEQBXOODTAXTTBROWZNJEXNVQPFMSKRXNZFBQYZUZNWSGOAKLXKGFVXIZSEJRKBLMPMEPEFMVODHQCFVIIDQCLMCDHGHMVLKIGROFYYUJSYHIIWYPCWNHCQZBAGNWLUSUGFRLVFQRJLAU");

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
    msg.setTimeStamp(0.743592154518);
    msg.setSource(1729U);
    msg.setSourceEntity(196U);
    msg.setDestination(30080U);
    msg.setDestinationEntity(185U);
    msg.op = 89U;
    msg.comm_interface = 206U;
    msg.period = 64236U;
    msg.sys_dst.assign("AQVOLPTAFFCMGLNFYSKWJBXGAMYDPMTRYCEBWUHYBNGWVZUTFSLJKWN");

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
    msg.setTimeStamp(0.456279602794);
    msg.setSource(4907U);
    msg.setSourceEntity(175U);
    msg.setDestination(27449U);
    msg.setDestinationEntity(166U);
    msg.stime = 2437095992U;
    msg.latitude = 0.33792722994;
    msg.longitude = 0.773937578726;
    msg.altitude = 21962U;
    msg.depth = 33146U;
    msg.heading = 62200U;
    msg.speed = 3102;
    msg.fuel = 39;
    msg.exec_state = -98;
    msg.plan_checksum = 17467U;

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
    msg.setTimeStamp(0.451662584036);
    msg.setSource(23236U);
    msg.setSourceEntity(169U);
    msg.setDestination(62800U);
    msg.setDestinationEntity(227U);
    msg.stime = 2195810563U;
    msg.latitude = 0.0433724382855;
    msg.longitude = 0.469561959897;
    msg.altitude = 59381U;
    msg.depth = 53391U;
    msg.heading = 65439U;
    msg.speed = -28425;
    msg.fuel = 125;
    msg.exec_state = 60;
    msg.plan_checksum = 26325U;

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
    msg.setTimeStamp(0.470961412429);
    msg.setSource(15436U);
    msg.setSourceEntity(3U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(154U);
    msg.stime = 715588452U;
    msg.latitude = 0.384796831001;
    msg.longitude = 0.033969089363;
    msg.altitude = 49663U;
    msg.depth = 62932U;
    msg.heading = 51400U;
    msg.speed = 2723;
    msg.fuel = -88;
    msg.exec_state = 60;
    msg.plan_checksum = 17378U;

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
    msg.setTimeStamp(0.511835394689);
    msg.setSource(44846U);
    msg.setSourceEntity(22U);
    msg.setDestination(36561U);
    msg.setDestinationEntity(136U);
    msg.req_id = 65189U;
    msg.comm_mean = 226U;
    msg.destination.assign("DWETAVDVYKGCWCZAHXQBXTZTOHYDPCTMJSSBAYPQVUXOUFYTYGGPMHDWMVNZSREJWKNWOXNWHGGBVCKHIFFDIESTHUAIELVINPGDSGBZNFCSKQJKX");
    msg.deadline = 0.697259285484;
    msg.data_mode = 124U;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("LUDPIJAIFMKFDNGIPJALQMOGLCRTSYVNQBFUUOLHZNURKTNECUKIBRBFTKQFPYFCHVOVIUZHSGOWMGPWTPPARKBXEIBGUACYTQUMTHLMSWOQVJZZRKHXOATSNJNDMXJGQODEYMOBNZDSSOI");
    tmp_msg_0.state = 170U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZEBGWAVVFQIPIDSPCNEOHVGZXGPBJZWQYIHXIAFZUTIKELJQPSUWOVRDABJMPLMTUJNBEIOJEHIMAOTGNOBHAFYN");
    const char tmp_msg_1[] = {106, -115, -11, 119, 96, 89, 39, -53, -37, -20, 55, 122, 4, 25, 50, 32, 42, -66, -57, -120, 43, -28, 69, -68, 122, -9, 120, 38, -96, -48, 99, 117, -45, 24, -105, 88, 40, -63, -23, 63, -59, 27, -13, -33, 90, -23, -41, -16, 94, 46, -71, 70, -73, -70, 92, 34, 66, 24, 62, -125, -100, -97};
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
    msg.setTimeStamp(0.73551397368);
    msg.setSource(16474U);
    msg.setSourceEntity(166U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(116U);
    msg.req_id = 48647U;
    msg.comm_mean = 225U;
    msg.destination.assign("MCZEYRZOUQMLFGUCXLSIVQPCKHHSKSGRPJAAOAHEDKJCPRHLISBJUQTXEJDIXGNRUKJEMYHMRVMGQIVKXOUMFTUQKEOEHWBTAALFPDTBUETGYKCORZINFWNUDHTLNCDNVPIGALMGOLFYQOVM");
    msg.deadline = 0.688036313289;
    msg.data_mode = 95U;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 165U;
    tmp_msg_0.x = 0.79807039976;
    tmp_msg_0.y = 0.875301310461;
    tmp_msg_0.z = 0.522516434802;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BMPVKCZZLPHKCNOPKGQOWDQBSHXZGCNYKFZNDLDSALDEHITOWNJWDYTWNNGGRPIIBSIMNDROZUQMFVAOAYOPEPESVOQOMEGBAOVQTLMDFSRLAXKXUJADKAGTOLQBWZJSMPZRTEEYIXXNUAAUXSSTRCXTJLFRKCI");
    const char tmp_msg_1[] = {111, 1, 41, 68, 24, -97, 74, 52, 26, 42, 104, -36, 80, -19, -20, 56, -40, -39, -128, -8, -53, 36, -18, -59, -3, -7, -42, -54, -8, -100, 34, 44, -44, 100, 94, -21, -107, 95, -60, 21, -114, -69, 24, 1, -98, -122, 55, 16, 58, 65, 68, 125, 118, 88, -82, -58, -26, 27, 60, 63, -106, -59, 34, 26, 13, 112, -46, 23, 21, 35, 87, 105, -82, -94, 48, -57, -5, -22, 9, -39, 7, -3, 106, -91, 32, -102, -70, -67, 66, 79, 29, 71, -126, 36, -101, 31, -59, 70, 125, -23, -59, 18, -123, -91, 58, -14, 9, 1, -63, 24, 62, 16, 11, -104, -45, -103, -16, 37, -109, -94, -81, -116, -40, 86, -83, 96, -25, 93, -16, 46, 3, 78, -38, 93, 41, 118, 90, 29, -33, -10, 59, 10, 71, -116, 83, -124, 62, -81, -100, -5, 82, 75, 83, -88, -68, 88, 7, 100, 27, 101, -93, 15, -64, -82, 38, 14, -11, 106, -54, 0, 113, 2, -119, 41, 54, 84, -55, -24, 92, -19, -54, -34, -98, -28, -71, -59, 87, 39, -67, -43, -19, -41, -123, 20, -63, 97, 44, -124, -90, -40, 114, 91, 51, -60, -58, -17, -39, 90, -7, 114, -3, 7, 113};
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
    msg.setTimeStamp(0.420446345953);
    msg.setSource(30034U);
    msg.setSourceEntity(141U);
    msg.setDestination(21596U);
    msg.setDestinationEntity(236U);
    msg.req_id = 1291U;
    msg.comm_mean = 85U;
    msg.destination.assign("LJSNZBBPHRBEDEFGXLFCZVAWTJXPZXTYJRMDJLWVKDGFOSNBDQTGHXIEYFNGAOKKZRGKMSPMUPRODXLOEHYUOACBXMCPZDWTYCAYFODMRWFARAVIKFMYVKJOBJPAMIXRFTOPUVXCHDUTCJIPIWEQHRWQIPNSGXMHHPQSNNZVLZVRGEEASODEHKKYYNQVVZLBLFHLQENNWQHLWWMUQTASZUDKGGCEIBINWQTBKUJVJMOSQU");
    msg.deadline = 0.18391566959;
    msg.data_mode = 81U;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 196U;
    tmp_msg_0.mode.assign("XLXOOHQUATYCZRBVGKGCCCWFJSXBWFWQBSDPRIUUJKBOYVNMZVYSTYEMEULYPAMAZTPTJAPPXKN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MYHWHDOTAYNPWVNIANOWIOOONFKUASVKGXUBXFFDLOUBJLEIBQWMUFCRYZPLCMAADQHQFCOCTYPIYCPLDQTJFKVSPDNYUZPYHQZRQCLIVLKWKOIXLTTBNSBDRJUGGHUUWXDTGQL");
    const char tmp_msg_1[] = {-119, -7, -22, 0, 90, -50, 28, -126, -47, -104, 37, 66, -108, 99, -80, -11, 110, 4, -26, -40, 45, 13, -15, 46, 68, -124, 116, 38, -54, -110, -78, -35, -88, 99, 48, -30, -58, 34, 32, -50, 32, 71, 69, 103, -20, 14, 119, 24, 16, -39, -107, -93, 34, -84, 93, -98, -119, -99, 58, 37, -10, -15, -51, -121, -31, -110, 82, 90, -70, 9, -115, -94, -71, 112, 37, -6, 96, 116, 61, -27, -79, 75, 61, 49, 57, -51, 20, 119, -83, -39};
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
    msg.setTimeStamp(0.526304386049);
    msg.setSource(8239U);
    msg.setSourceEntity(79U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(164U);
    msg.req_id = 42513U;
    msg.status = 16U;
    msg.info.assign("IXRNZWPTQAVEBWYRYCPBSLARZWYONORY");

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
    msg.setTimeStamp(0.332357315728);
    msg.setSource(31273U);
    msg.setSourceEntity(128U);
    msg.setDestination(33918U);
    msg.setDestinationEntity(192U);
    msg.req_id = 18882U;
    msg.status = 124U;
    msg.info.assign("CEMZXWGMMRWCPEGNMHWSFGULANFIROLVYNYZQIDBFJBVCJNGXVEBKCPSVTWLVFETWQVZVUGZDSAOBXTRVUKTYANQKOWHAFJWZPNLHESEFCAXTDZXURVPHQDJFIOHCKLAKLLRGRYAOJTMTUFSUYZANNLBSECIMJUIMCQKIOGXBOPMJQDWXHYPBD");

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
    msg.setTimeStamp(0.00426879985227);
    msg.setSource(32311U);
    msg.setSourceEntity(24U);
    msg.setDestination(36930U);
    msg.setDestinationEntity(43U);
    msg.req_id = 58295U;
    msg.status = 174U;
    msg.info.assign("WHWZOCHFRWGMFYNRLTIKVOOEKDSTKQTOWDOZINJUNITQQLDTCQBMPIAGHISGYHNNFSLJHCVRYVWHAQFJKCZTAGQVEZOTCTQAJPBXOFUYXUACDBJSNJOLCVFDVXZYUPPJOUNIYMXSBLBGWKWJGDIRKXUCZXCZZBKSLQEREZZSLEMBAENRAUKVIR");

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
    msg.setTimeStamp(0.402725322653);
    msg.setSource(16463U);
    msg.setSourceEntity(44U);
    msg.setDestination(36632U);
    msg.setDestinationEntity(27U);
    msg.req_id = 41637U;
    msg.destination.assign("BKDCAVNFOJRUQBJFKTA");
    msg.timeout = 0.847371017218;
    msg.sms_text.assign("LPUYDQUTICEDCMCLVAWAKIOJK");

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
    msg.setTimeStamp(0.391503721642);
    msg.setSource(18088U);
    msg.setSourceEntity(66U);
    msg.setDestination(43720U);
    msg.setDestinationEntity(106U);
    msg.req_id = 16835U;
    msg.destination.assign("FZBKLAGZCCNWIABFYHJGILHZPHKBKISNDWJE");
    msg.timeout = 0.641368180005;
    msg.sms_text.assign("NMBOAOBRSVGIJHVYGRSZSNPKTQVRSVWTWSWHAAXUQDFLAMXTYHCGHGFAKVRCDOEBJEYOJEPBSWVDPVSXKMYATIQRORWUIAUNLCLFURNNLPZMLWWSFGMEKQIZWXIIDOUXNNFDTDEUOSXJCHFJCECAMTUOPZHJFYKHPLRRQZUBQBAOUVYEVDLWDNPBYKFTBFJKCHILQMLWYQEJGHJK");

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
    msg.setTimeStamp(0.3988296829);
    msg.setSource(33869U);
    msg.setSourceEntity(89U);
    msg.setDestination(51058U);
    msg.setDestinationEntity(70U);
    msg.req_id = 51137U;
    msg.destination.assign("WCTZWXPEZINEYZSGRCVDVGEKKQRXZLFICNUVLMJOQWJSDAEBBVP");
    msg.timeout = 0.467503596284;
    msg.sms_text.assign("FCPUWVXRGSOASGBRGQXZJSTRXIZEEFIFIUHEBIHANZTDHONJSNKOZBYWJNLUMNAANSUTXLUGFCYRQYUSARMSLUNHDLFYPPVQLWOAPCWETPTIHWXTDCFQCYOHVMFEBISDEQIMVMGPQHZAPKTQWWFPLSMVHRLGAJRRZEWPOZUDNHZQCJVYBKKLTJKFGBXXRXSAUMTJDMCKNINLKQGIXMWABWYDEBDGOOVYJCBZPDUMJZJKODECGHVTIFK");

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
    msg.setTimeStamp(0.307912781611);
    msg.setSource(59314U);
    msg.setSourceEntity(54U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(52U);
    msg.req_id = 32349U;
    msg.status = 228U;
    msg.info.assign("CARZPTTIYMCUTJYLMXNPBOFPXWWLXZXTOHSOVDBARKABGIBFKYBIDUFAGVWOJWAADNSRXTOU");

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
    msg.setTimeStamp(0.491631890127);
    msg.setSource(58951U);
    msg.setSourceEntity(175U);
    msg.setDestination(52846U);
    msg.setDestinationEntity(64U);
    msg.req_id = 16323U;
    msg.status = 110U;
    msg.info.assign("KYOXGDAILHRRHIZLQMGRHIZKKIPBUNJNAWNEMNRILUEFQKQWMJVJOQTG");

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
    msg.setTimeStamp(0.654709281021);
    msg.setSource(34865U);
    msg.setSourceEntity(55U);
    msg.setDestination(16193U);
    msg.setDestinationEntity(75U);
    msg.req_id = 30366U;
    msg.status = 53U;
    msg.info.assign("DXJNVAZGWIWUDIKCLNAUHHTUOMJHZAROGYJEZEUXORUIPLTKETBNJFUKIUCWCJOPMOAJEZRTZBXBTHCESQSKYEBFTMMMLVFVLRMTUCYWIHYRMJQQDVVJKDIWFEYBDOHRGKRPTWQPXESPIYVZFFEXQNHPBYNAKCALVXQGGLKGBAJNFFQSWJKIPSORGLDHISRXPSDKNBGXBNGLZMYBCVFAODQRXSVSQOLHAP");

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
    msg.setTimeStamp(0.223880012281);
    msg.setSource(30024U);
    msg.setSourceEntity(25U);
    msg.setDestination(56016U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.805556552391);
    msg.setSource(10718U);
    msg.setSourceEntity(228U);
    msg.setDestination(63987U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.799196521016);
    msg.setSource(3623U);
    msg.setSourceEntity(79U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.917974633408);
    msg.setSource(34984U);
    msg.setSourceEntity(56U);
    msg.setDestination(10158U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("SZTMKNQTGUPBCIIGTRLYKAHMWIZKXBWYEIXNJDBUHTHSNYSWRRKFSQCAJGNIOLPPHMPWRZYEAMNXAQQOJYCYWFBRSHVUYRJTWODODJMMZTDAVYASGLKDDWEBLFUZFIOBPMAUEVQTGFVUPXQVRTCPEHAOVNTZLLUOOJCGWLDQCXLCCHOWFGXDKIPSVIZYCMVDGKFEQVJSGRZZBIUPEQXNECDULHZB");
    msg.description.assign("PAAIHSTRGBPMSIREOOKQNTZMZRCVHIJUDTHLUTGPLXBJHKDXQPOMLCXRGIBDNAVXAPDNGOKRZLVNSOTLBJMQDPJITEVVFLZNLHLMJWJKYCHSIUXORZOCORBMYOUNGBWAGGKTWEVKQHENRXQKBXDYYACVBEKQAVPIBHAFHZTGSHFUMNCEJYWECSZCRWXZMNFJUFNUOWUUIEQYAFQMWW");
    msg.vnamespace.assign("GURECHWDXXDJKHYHBXDCTXUDGCHXJBJSETJUCROTWJBGFITULHUYSVMREOIDOGRBQUVNWLPTMJPPOKCDZFFKESYSAQUCRDFBPPNNZMZZTSQNYQIBMZNAOAFBSWHFLYQOSTIRLAP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SVVSSHEOGMKNNWSIEJVKLUNK");
    tmp_msg_0.value.assign("RNPHNDCSWPYRFOCYNWGWKLIEBCMITQZZPWPYBGQDXRTKZVHHARXEAPNPOFWFXAAUSJEJXNCHJJWBIITOYCVXLDMVKWNMJMSZSWTGJEWZUFPHOTYIPGQEIVGUVEQJKZYTSBVDBOXOLLILBO");
    tmp_msg_0.type = 84U;
    tmp_msg_0.access = 236U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JVAIRKANPERQBGGREHJNNAMLXIZSXLLIZFWTBLVQMFOCNENGHUFEDTWWAYBLUPUVIGIFPAGGKHSZDKRBMJCZVJPAZEVXITVWBLJHULQWFFZOVXDCLBCCXQFSVPPOBDDNMXZTZXJWKYKSHTUJSHDUUYXUQKJRMSOYGHUKQOKLNAFSYOTORACRPAEKPBDTYSDGCEXIRHTAWQQVTSNNJREXWZBMUZDYCBPYQMCIHNVFMLEIYFEPWJWGSKOC");

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
    msg.setTimeStamp(0.734663661543);
    msg.setSource(46464U);
    msg.setSourceEntity(75U);
    msg.setDestination(44422U);
    msg.setDestinationEntity(241U);
    msg.plan_id.assign("WXBCIUWXCATLUKHJYOUKMBSWGNGZRVIQBZVCFJZLBKMWWSFTPEDWGYUQTEQDIXPCLNPQTSAPALYMDGDOMEQIHYHIKEUDIBYZOOJNMLKSJVWFMPQARJOJYGEVGNEKHICFBERCNDBRSUJZJMAXPECSGTR");
    msg.description.assign("UWEWPCUMEHEZIZSDRSRTVQZJVBKWDLXCFASCADTOPRVANLKOIRFJQAMUFMYULDNBCZOSTXRT");
    msg.vnamespace.assign("NRYWFMKTKROKOTHGNLRUJXBMMQYDDWAYIXJPKTDORXRHGSUYUCIAGEDZCB");
    msg.start_man_id.assign("UUGEFPLUTYKSVHUYMXIZFQNLTFZGAESBMDVOGHOKUCPNBVXFFWVUYLLDDZBYCHRIHNHMYLEXFWVIXAJPRXCRTMEGSZYNBLAABA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BXPZCCRKHTEGWLNUQMJHJGTYQWKSYMGLGFSFXBXMJEKFQTFMYZZWOHARXKTLVSDHWZJLEOYUBMCFVFX");
    tmp_msg_0.dest_man.assign("NPOSWBECPNOBTRYAURKAFRJCXPTPQIXBFRUJTEJIUDSSUSZBMFDVARTNAKKWRQHCOENEDIOVSVEDJIXUCLBQGGQZYAKAXVMADHXKUYDKTZCTFSZYTPZFBNRUXUYDQEFOLXHQPOSGDVWGJIWVKLQMWIZZHCBGPLMFCOTGJWNLYEXMKMSTPEIQHLOLGXHCNAHBGRSYZPLVAWFJMJIVZHBWBYPHOMJWGLCUUSA");
    tmp_msg_0.conditions.assign("IBEMCCVKFPWKAMEVMUNTPZYLOFLHPJWGLJTDAXNPSKVUXCCDVJEFRZDJKMSTPBQOQCNDXTUOPDIGOVZZNGYVTHRBXLWUGRXVIAHYSZJNHWWOHYLMLZTVBLFEMJBQYIZCGDAJXQYOSXRTBGQAPUZRCNPWEJCKT");
    IMC::QueryEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HAEZWUKRYPTRVDSZQ");
    tmp_tmp_msg_0_0.visibility.assign("TUUYCAQLVJJOGPBPABTUTVUFPFRUGOBDHVNOAVQMZVVDLMEORAQKNEJTBEDZXSQXZXBHYBYYRSRIXDQDUWLCIFVSNC");
    tmp_tmp_msg_0_0.scope.assign("WJFCHPTYATQQYFJRXURCFRGOCEZNBOKZMLQPBKYUXIOHVNMTEKTRTTVJUQOZKPCJMYJFSWDPGRMXUDXQAGJZNEHOZNDUNAACFQQXOYNGOOULAEIVHGZLDIRWLRSFVTRBVYXGLRCZYYMRSGVJLMDZIGEVBBBBNIWESDIESDYZHWHZJIGJNSLIPWLAHKYWKWUNKKKXMTKQ");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::TransportBindings tmp_msg_1;
    tmp_msg_1.consumer.assign("KYXBLJEHLCAVNOCGZ");
    tmp_msg_1.message_id = 59753U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CpuUsage tmp_msg_2;
    tmp_msg_2.value = 131U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.441702571971);
    msg.setSource(58137U);
    msg.setSourceEntity(140U);
    msg.setDestination(8876U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("SINBYLBCLMSIVNUBAOKKLQMUQJISZQFKKCCARRAVOTZCDMOEBTTVGNEHGDJLPIRFAWMUNWBVVEHDKWFJZGLREWXXLBCPTUTFDQZRMWIHSMXGOAGAXGYHXASWAODMFDUYEBRFJKBWTJFYJIKCFUOYVTMJLUPORYXPSNZRWCEBVYTQQQZMGPJIPQVPOVU");
    msg.description.assign("AJHYEZDFKKLOZPGPTTCOUWBQHRTHRPCBTDOWWUGBVUZJPANIHVPMIBHCSLOKXTYMQE");
    msg.vnamespace.assign("WYPYAXWNIRJZDCKIAMEYMTJDDGMKSRNWJEQEMHMLQAACGFQJRBXXIABVC");
    msg.start_man_id.assign("CZIFLBOPLNEPGWYHBSXGDFJTAS");

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
    msg.setTimeStamp(0.842239077595);
    msg.setSource(26401U);
    msg.setSourceEntity(22U);
    msg.setDestination(22843U);
    msg.setDestinationEntity(48U);
    msg.maneuver_id.assign("BYUORBVTSQPKKMEMSCVDRETZSCLOTIENZLIEGMZHBZNOJYWAXZUQBXSIJGVJXNXHMKOKNFDREUBDNMCRYGFMPGTYLFEQHKGUKIOPGSIABSGLFECTWVRLYKDZFTFCKLIDNMTEAWRAPIAHPZCQJQDVEQJVMCBUYOWQABFPYXGWIQQVNWURVIGNHWCYHJYXCJPNSOPACMYHGRBJNWZLTPVDTDWFZKWDEXUKLLQAXAOXUMHRSOFUIHJHXJSBT");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.414511685026;
    tmp_msg_0.lon = 0.649078322109;
    tmp_msg_0.z = 0.619800137492;
    tmp_msg_0.z_units = 70U;
    tmp_msg_0.speed = 0.995277480037;
    tmp_msg_0.speed_units = 145U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.967818892094;
    tmp_tmp_msg_0_0.lon = 0.941345165154;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("HEXYAVWUASBM");
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
    msg.setTimeStamp(0.51724556767);
    msg.setSource(56530U);
    msg.setSourceEntity(192U);
    msg.setDestination(36907U);
    msg.setDestinationEntity(83U);
    msg.maneuver_id.assign("OXHLRFPWEGDBHYSWCHBVJDEGZVHKMIMHWFREDKOPTEUSMCAPHWSYABGQJQALLOVBQCNUIGGTWUEVTITOCIZYKFCFLXHLDXRHDDYRSPCFANTNYDWRXEJJG");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("WHCHHFQIWZQIAFCLIOVQTPBRUGRERSELSQEXABGV");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("CEXEDXDVAJVATOLXEFAIICCSNYLXAPQREWQNLDWONTHSFYVLRJJIAMJGYZBUUSTWPSUJXBGREUWTPJRESVRLRFWJQBGMDNWMGDFYRZCSPNLMFKVERPRNLQBAQMWZDXHNISKKIDZXJKOWFCFAJHHZGUPXHWFCDOPMBWNPIHXOYKZTGPAEBSYH");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("OJWHEHZJFTMKMQIBEYSTKRCMAJLRALNAPHPSBGZVUFCSADCOFHYHLTGSZTRQPBXENGFPRXGZFOYJXLDWJRNQQGSTGZWKLBKDHWEIVNNYEQWHSPAOGWCVVDSZPWQRUTFZOYRDCEMEGUADQSYKEVBFVLCGDSIZLM");
    tmp_tmp_msg_1_0.predicate.assign("RSUKXDYTCHXJAEKTNXVNFHSMZAHDSMIZLPIFYTRTFOWQXODMOCOXVJNLNVQKGTVWVRSWAUIDIGAUJETYTQXWVSPIGUVNKZAFCLPDNPXJEQROBBOQGEZPIPZZBWAGTILHNMZHUJHQSAMBWKUDYXJVGHJFOUCPQRLKSFXVGETHRCPPQEYSWOBUGYECAJYSAEIXCMFUEKIBMHWBGJETMWFQJFPBRNA");
    tmp_msg_1.tokens.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.391252342032);
    msg.setSource(11146U);
    msg.setSourceEntity(31U);
    msg.setDestination(28390U);
    msg.setDestinationEntity(54U);
    msg.maneuver_id.assign("LUYZLBMNCNIRBJZIEPJIAMTNFJEHGPMLHXWXXSRKBKMKAZZNMCYMOGGWNNHNNQBUGJIOWPS");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::Rows tmp_msg_1;
    tmp_msg_1.timeout = 32987U;
    tmp_msg_1.lat = 0.37702966932;
    tmp_msg_1.lon = 0.425567068901;
    tmp_msg_1.z = 0.608620766222;
    tmp_msg_1.z_units = 71U;
    tmp_msg_1.speed = 0.46663188616;
    tmp_msg_1.speed_units = 210U;
    tmp_msg_1.bearing = 0.34574814861;
    tmp_msg_1.cross_angle = 0.246437189296;
    tmp_msg_1.width = 0.0846218281266;
    tmp_msg_1.length = 0.28723553676;
    tmp_msg_1.hstep = 0.657366211665;
    tmp_msg_1.coff = 211U;
    tmp_msg_1.alternation = 61U;
    tmp_msg_1.flags = 120U;
    tmp_msg_1.custom.assign("YTCHZHLQONFEWWIWMBWUWFTOKYGYSHQFZVGMWTLMRYNAEIKPSLFYSRHDUYFCVNQGIYZBJUVIABSXOECPRIGSJTPXKDNUGZPC");
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
    msg.setTimeStamp(0.629927861579);
    msg.setSource(1491U);
    msg.setSourceEntity(76U);
    msg.setDestination(61967U);
    msg.setDestinationEntity(175U);
    msg.source_man.assign("JUKJDXZIHLVOOTFEQWNWUACRIQGGBHEDFYNURZMFXBIGADXQTJLHAONDPKPYCRMQCNDEMLKUJQGSUGZTLYCAPIDSQTAASVIGAVDGFKCZFLSCROOUJZTYZNWJLRAQCTMKNBSZPHFUERAZAIXMPYWYHMSMWHOFGYXUVKMBHBYKWWVEFXNVTBBUKNEIHTVTMPJWRBLRGXHODSXDQYLZJLDCPICSBFQKBYPKHOPE");
    msg.dest_man.assign("SFYINQBAILUUWZYJHDMSHEGGBGCWRYPQHRFJEKECPKAWXLOHSMNBNWPCTQGYXPFFMBMKOTXIMRULUKSTLLFPPQWZRNKMSDELQVSWJZUSJCMRITEEALAZJKZZJLOMFBZODNVEFGDQXC");
    msg.conditions.assign("NZXWTGTZCXPUPOBTUKWWOVLYYJYUFTMKTBCTJKXYLQQYFIRIONXRQSHADBEIGREGUWCRHAGWBNLQSBNZNKEYOXMSEKMCGJCUNWCOCDJIAZYEHP");
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.888742911539;
    tmp_msg_0.ay_cmd = 0.596285478954;
    tmp_msg_0.az_cmd = 0.9070049772;
    tmp_msg_0.ax_des = 0.232480629107;
    tmp_msg_0.ay_des = 0.10031097106;
    tmp_msg_0.az_des = 0.227682712768;
    tmp_msg_0.virt_err_x = 0.545343220559;
    tmp_msg_0.virt_err_y = 0.566811998896;
    tmp_msg_0.virt_err_z = 0.0148268609174;
    tmp_msg_0.surf_fdbk_x = 0.189831806954;
    tmp_msg_0.surf_fdbk_y = 0.893517326164;
    tmp_msg_0.surf_fdbk_z = 0.376879232524;
    tmp_msg_0.surf_unkn_x = 0.0161947461378;
    tmp_msg_0.surf_unkn_y = 0.594079148457;
    tmp_msg_0.surf_unkn_z = 0.143625731682;
    tmp_msg_0.ss_x = 0.923978625157;
    tmp_msg_0.ss_y = 0.985625414122;
    tmp_msg_0.ss_z = 0.685796546792;
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
    msg.setTimeStamp(0.759202810109);
    msg.setSource(54207U);
    msg.setSourceEntity(250U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(100U);
    msg.source_man.assign("NQZWMWYHOPTRULMKMNAFQXFZDBRKMSTCYSQKLDZEDDSCQVHTDZCVUSXSTZIVVROIIPEVSLJFKCXUMGFYPVSIQCXRBJOYCRCWGJEIESRUMNWPKLKBBPHEVGWLUOZETEMHOJFUUSQBDBRYJILCOLAWBTCJWONGYHUFYAUIEPHAWFCOVAXNHKPBNJKTTIOQYERIABXWXTMJGPYMZGHJD");
    msg.dest_man.assign("XGFLHFHWSPUOPMJKYCCPBUWWASTQPEPZZLKIGJYCRVJZBZXUVSNEKMLVNFYRANAOOUSSLCEBOTYMXUVNUIXBLCPNJRNDHFWGGREJEICEKYSEQJG");
    msg.conditions.assign("BEMVVLIGXFURSRKRONAOGDLKGVPDKCWJTYHWYYLBQVTZQTHRHOBDDZGNGIQBWNIRUTINPFUNFNFYFBYEXZNQUMZPXSYZXTEGDPFBHCONXBEZEA");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 233U;
    tmp_msg_0.value = 235U;
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
    msg.setTimeStamp(0.163097012255);
    msg.setSource(20933U);
    msg.setSourceEntity(63U);
    msg.setDestination(19843U);
    msg.setDestinationEntity(78U);
    msg.source_man.assign("XZNGSBGRTILWSIQSEYXAOVRTGNDCXGRZQVHJPIQKSEAWQUJDCZFDWRCYCVVRQPAGLLAHWDXOIIYUPZDXIHVPYPATIXPTRHSZQYYLRHRMKNOTMAUSPESKOEHQBNUVICVHQXJFOXLALVELQDOAMJJUKOYCYXASYGZTKBDFEMBBELKFBYMDJCCLEIMSNRWD");
    msg.dest_man.assign("ETCPPANQOKILCXFRYISNBITSWLCBHZSEWVXLYUGSGTXWWCIMEEMORDKBGCCZQFGQKFMKXTUTQRSMFRAHFDNXZSRCMHWFNV");
    msg.conditions.assign("ODYGFOAFOMIQMUDMZGILYDANECWRYQBEEAQZXHZFSVBDCYIGDJJRVIJPVWNZSHUAHHVFTZYBMMAZHCHPROK");

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
    msg.setTimeStamp(0.233312566552);
    msg.setSource(48032U);
    msg.setSourceEntity(192U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(51U);
    msg.command = 156U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BVUMJEVIGLWDPZSYWCNRFUITZQDTJ");
    tmp_msg_0.description.assign("QXCANIHLYLNFSSWYPVRCZCCGZNOJXLKMJMPHDWRKRCBQURIPMYTGSNRGOMVBBJUUZBQNXDOCQAEKXPDZNOXATJLJGZPKGAIPTGFIIZSUEDCVSDAUTJHFAULAHBDHLBEYRKFJQQVKTOMCFGYZWIUYEOVROZKLFHXLMWVKBQIPTZLYTBIBNUUGFHVJVENJROEXTHZMEQRSOXWCFEBADGODKFETSRVQMICYDVSLPQYNXKMADXT");
    tmp_msg_0.vnamespace.assign("BFKIHCGCAJKZHAOGOGBDUWANKDJUQXPYFYUAYZZIVGDNFIPJDEVINFEFXXWPSQGYJAPLNQLAUJVMEDFDPHCXHWUPRJBJQKLRLNCMQFIBXWPKKTJTBHMERLSLYKCGUMXMYQONKSOWSUNTUODIEMOVLTVABOYWOHNBZRSCZZPITSTPYMQNEQYGHFOTQEDCZGTSXMCWMEWVG");
    tmp_msg_0.start_man_id.assign("LDRTNRSQIYZRTJKZLRSHBIPZWCWHSJXFBSOZIDAEPOUDVKNJQPMDPMSKGIZXZYNQTLPMMWYQADABVBEKHLFVJJVEGHXXAHXFR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VTHJOOBNUZOPTUCDTVBMJDICDLAHNRZWLWWRWDQGBUVLQXXGBQTYEIXAZFJYKWYFQKPTKDSUVCNEMRUPESAUXENCCWRHOCJEWFWSQITRKJBGCGPMH");
    IMC::Sample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 24024U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.415771535414;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.77657750419;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0914573812021;
    tmp_tmp_tmp_msg_0_0_0.z_units = 66U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.25351334239;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 90U;
    tmp_tmp_tmp_msg_0_0_0.syringe0 = 202U;
    tmp_tmp_tmp_msg_0_0_0.syringe1 = 108U;
    tmp_tmp_tmp_msg_0_0_0.syringe2 = 146U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DOIOXJGNZNPGSRPWYFXCQEKGLRAQTCNDMDVJUDFPSRDCOBOWCKXIZYMGRZRSLFYUGVUZKAHQIDXGLMLRCOSLRKMLREHXIWFMXJALTGVBYEFARHHQHWPJYSCYPBFPXNOIAZBFSPLVTBTKTIWSZPQANBKQXVYHACDPTMSZKTKAIPEMOUGRITCBLQFUZMJUOUANEWXXWJBUEJZHQTNCEFBKDBEZHVMFVDNCWTJLHU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PWM tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 208U;
    tmp_tmp_tmp_msg_0_0_1.period = 2279474516U;
    tmp_tmp_tmp_msg_0_0_1.duty_cycle = 3932256722U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::CacheControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 7U;
    tmp_tmp_tmp_msg_0_0_2.snapshot.assign("VFIHLVSHWHVTHQOUVHQVSIWPAYRJBVUCMAJEIEVCIUSRMUXDBTOEXLIOOZSALZFKTGKLGKENDQVYCBJWFYMEDRTJPQPMAUEFQMNKZS");
    IMC::FollowPoint tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.target.assign("XEQKJUFJMCZAYFKRWTHQUQLPTUYRJFDTZMLYBIDIFDVKNBZSOZWEUACQVLNIZLYUHPFBWQNEIFXGOANWEYEJJHZHWEOHCBKKXVTSPTXRDSHNEUBPHMJCPJUBMLINOGUDASXOCXFFZGRIQADWEBLFSPGICSCGWDTYWLIKYTUMXMD");
    tmp_tmp_tmp_tmp_msg_0_0_2_0.max_speed = 0.962103678622;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.speed_units = 152U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lat = 0.886213290996;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lon = 0.648475753427;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z = 0.914306125462;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z_units = 199U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.custom.assign("VUDXYFNDEPWRRPVJHNOQPVZASMXTDMLZMVYBSMHASGTWKCRWJOIYVUQGTWWJRNJFJBFABENEUUOEQPAMGOUXHZBZNMCQNEVPMRQJDLFNMSLSOJSOMKPKPNTFQTWZIXL");
    tmp_tmp_tmp_msg_0_0_2.message.set(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QKLJZHSBAOBKOSPBSEBAYUPDSPEAVUVGRANKWIGNOCHQTGQGRRDGMFNCUWCTILCBIEWWWTJBLLJEKFGMXKUWXPUYGRYYOWRFLKVMXGKVVSFFJCLZIIYOBZPULVINPZMZDEHEZJMPDQFZTTT");
    tmp_tmp_msg_0_1.dest_man.assign("SYJDDGVCEQGQVFWDOWIFUAZKVKAUXCMGQJDSHULFLQIE");
    tmp_tmp_msg_0_1.conditions.assign("AQHUZXKICYONFEXUPVRFOWAVLLXYIPQXWNIMUGMVHNUMISFAKOLBKZKMNDBZMBTVQAJOOBYNYNCQWCGRYKVRAJWYTKLWUMYCDWEWPPIBAZNCHQSZWBSKMFXZDUGRQGKQDSHJEEPZPTJKF");
    IMC::UsblConfig tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 29U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.431429644549);
    msg.setSource(47634U);
    msg.setSourceEntity(132U);
    msg.setDestination(35253U);
    msg.setDestinationEntity(234U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IMRDWJBOEWTIBRZPBFXWOMPZDIHNHVYFALKNSZOQMVRNVMPFDAGYPIBKGFLBGXLKETCIBNUNRPYPWWVSFSSJNOWHDEEZTTDUBLCIBAEZOYCDMRJRWVXHJXHJARGCFSXOTZLCJGAESXNGTCUZC");
    tmp_msg_0.description.assign("ZRGKUVCXZGESOOYULOVAORHCLKTRDGKGNDLQACBDWYBXKIVJSMPLCOVZCBVOBRQPNPWMIJSZSFTHLWLFJDEAJZQWIUFKAEVGHJCNFSANAMOJUCLWONRPZYSHQNFPKNMUCUEDIMYHQXGMIPGYOXSDQ");
    tmp_msg_0.vnamespace.assign("WXEWOKMSNPICZFRBIAADVZDQXVKIZEUNREURZBEHCKJSQAYAEVGOUNKVXXOYDMKXDLPZWMPHWEQRLVPKWDFYPPTRGFOPGAYDVOTYSYQLMXKCFSLFPTLCVFCNPBUJRCFHHIBOVTWYIWTGLHTKKJTHQJJJZHQBMOTMSQLEOIJUHDRMCUDCNQJBHZBKFMDSRMBUFHBWNGVTNXYRGOSAXSELWNJIQ");
    tmp_msg_0.start_man_id.assign("RPLMLMOPWDONNWCXOMZOVEMJHKVWBPZTWBESGFWSMFJJQOORRTLENBCDQQEGGPTABNULRIGXJVIBXTHNFZHEUUZRZVNBOXGUQALBEOVCHYQU");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WQVRJZTEBMIOBKCAAWZHIWMOXXQJMSNOMWEEZGYBQHLSRBXCTVULIIVJMKFPSNUCFCCPTJKRNGPENDOIZVKDTGMBCZDSNZQOVAIZNFKYYTTWQDSLAYFPPEUKRNJAWW");
    tmp_tmp_msg_0_0.dest_man.assign("FFVSWSAQOEHDGAAMWSPGAPTSQNFRP");
    tmp_tmp_msg_0_0.conditions.assign("EWPQMRMSCZPOEDLZRA");
    IMC::UsblFixExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("JRIIVOOUFSDJXUSLICKOXOIIONCMAEXRWDXBPMRGPPBFHLHBTDEZYGIELZIFWVSGILPCAVCTLLSLCMEGCNVTGUNJXOMKKTHWAPHBFQSNKWSYQUHWBYQXMDUCNLZLPZEQMXMEKRMQZBZYKGCRUFUAHKSVPNVAXNFARSJKYTWCITT");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0275831783827;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.584248957414;
    tmp_tmp_tmp_msg_0_0_0.z_units = 53U;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0180966747689;
    tmp_tmp_tmp_msg_0_0_0.accuracy = 0.827228848861;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.153289874877);
    msg.setSource(8491U);
    msg.setSourceEntity(171U);
    msg.setDestination(21215U);
    msg.setDestinationEntity(222U);
    msg.command = 85U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LPHMMWREMCAHTSHTVZROKCGRTHBEXJBTSXIGBWICNFKOZYFSYOYXILYJGVQNEQQHIXLYYDUMQDFZVUJNZDAUELXYANUMJOVSSJNCXPPCWJAWAZBVRNDNWXHKIOCKPPTTREEALLGMURNSTQTFMPFOBSBJWOQEQQAJIGMVOCBVTGBVKKGIZWQFHCXK");
    tmp_msg_0.description.assign("SZQHSUDEUVFYNOLRMDJG");
    tmp_msg_0.vnamespace.assign("RBGJMWMTTGBYYKTWTIEPSQBXEYFSFQIKGKVXDRHJLXCEMVFUHHOWILBOVRJZOLKWFZEDCGEBDSWNXSMEWWQBRKTNLVJWAAYTQJQDXCVPAKRAKHNIFLJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MIGWQDIOSJLEKIFCQVCZFWAOQBVSGHGKQLZJLNFRPSLVOTUCKLWPXSEEHTHPDEAQBI");
    tmp_tmp_msg_0_0.value.assign("ZPMZFIQSJPMRJTGDVRGIXOVZWKYLSDLBAKWKSYHBDIQWXLEDFMPDUWJVPIQLAWOIKBTQESLOZKAFMTOEUYDWACIPOFCLMFFFVOHHWTNUGOPRELTPTVEINYGUBXVAQBYXXRWRVBEVUIDHEOCKRQSNGCUXKROVSXJBSPYQXMWTYHNUCJ");
    tmp_tmp_msg_0_0.type = 38U;
    tmp_tmp_msg_0_0.access = 239U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PHBDNSHWVRWYYKATXCOGCVBBERVHAIGVMLNUMKSTDXMVFRFPHOYBBZJDKXWPVZYTKOEEZMZILKVNBGLWSTMPUEMQSNALXZVPJNYFQQOIINBZUASJGHOWDALRBEHWCWJIJZPWRYSMCJQWMDXRCDAAXRCXSTIEUTLJHYBDSSNLQOJMGAK");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BSKRFGUCSPGCGOTGSMOAYHUHHYPDIIWMAVLQWRORBHXXTPDQEDKWHWG");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.99379602571;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z_units = 88U;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 49301U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VGZCLXMYGHGZQUSMPTCHLOFJESAGGXTWLENFMMMCCQPKUFHIBPDSXF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Aborted tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.autonomy = 163U;
    tmp_tmp_tmp_msg_0_1_2.mode.assign("LZRVYAXUXLSQLIBETSHXGKNWAGQFOPPZKIJEYJWSMFQQYCTEIARK");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("BVSDUDYOZYGZNIIRLNPLNIKTDFFVSGKEVDQMSULETJPJRQTJHYXVRWIKYANSHGEOXOVYWCMHTBKOFXRTKKTYQJZJQOAUELCDOQLQXZQPWLPMYGMIVSNFAEIVGFWWPCRJKFXDGBCABMZFRPTJCGTUBEJUVVBXNUAMHYSOXVMPUHHFWIZXC");
    tmp_tmp_msg_0_2.dest_man.assign("QGXNLJBRMQFNCCEGKVAOABIWGDHXFPPUIOUUMFPNCGLHDVFKINLPVGKRRKFXHLGESENASPWZDMWYGTGQJOZCRIPRCJBOTICWCDXZQNSOUZAQSZMSYZNTQJIZKBDHDALOFJXZVOLTDWUXWWZHGLVUXHUBWRSFQEEEQRZCIHBRDUKNTYHYTSPVHJXVLVTJVALNEILFUVRMCTOEKDOMIEMWXSNYYFSOMA");
    tmp_tmp_msg_0_2.conditions.assign("QXOCKOMFVNLHCHOJBSUBIQVESVSYTPIDFQUYBWGNCJYEKSRZGBTDQCVGESWZXJPJLDFXKRWMNMRWMPLADRDIXIAMZGZVRIYYGLVGOPVCSGEODWHTLXFXTOJKULRIWEPLFWTLKBAOMXJDIZSKLQIPHPVSYQNZNRMHDYFFKHTUJRBB");
    IMC::CacheControl tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.op = 186U;
    tmp_tmp_tmp_msg_0_2_0.snapshot.assign("BTSDVKOIRELEIMWBXNVIEIBCIAAHGVOIPMGQLJMWKHLZEMDLRBSWRXYEVCRHQSDLAJOVHZMURTFNKPGHCLDXRMLNXSQUPJ");
    IMC::RemoteSensorInfo tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.id.assign("SBSCVGLYVUIVLBFWXKTETCKUWMNOCOXQEJHFAXBJMLGBCCBBZEMPOUNHRURPHYFDCTIEQYZYWOUDWUAMPMWQWSGSKGWJAXDBZAOJGJSPMFZYUPZNCUQYLBQSMXPLHZRAOTGETTDZQFQDPIVQGVNEHHPVXZMROGJVVLEKJJSRIAKYMLKROJCZGCUL");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.sensor_class.assign("RBEHKUEKNQMQMZRA");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lat = 0.738554485377;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.lon = 0.0381068891007;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.alt = 0.521978107602;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.heading = 0.103777441803;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.data.assign("KFFAHPJONHXPRUJHKDDCMUXLGERCNUWPDCQTKBWUQBGQXFNYYBSHGWIGZTZBEGSZRWCGOABDZONYMYAOTBINIWMCPMNIEMTTCLAGQFKUKTJWUHDPRYBJAULMVKONFGDFWTAIPSJM");
    tmp_tmp_tmp_msg_0_2_0.message.set(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredPath tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.path_ref = 1634196905U;
    tmp_tmp_msg_0_3.start_lat = 0.162860543721;
    tmp_tmp_msg_0_3.start_lon = 0.0140742748503;
    tmp_tmp_msg_0_3.start_z = 0.317310920973;
    tmp_tmp_msg_0_3.start_z_units = 88U;
    tmp_tmp_msg_0_3.end_lat = 0.0906300748128;
    tmp_tmp_msg_0_3.end_lon = 0.516313288882;
    tmp_tmp_msg_0_3.end_z = 0.654477384252;
    tmp_tmp_msg_0_3.end_z_units = 198U;
    tmp_tmp_msg_0_3.speed = 0.41833839449;
    tmp_tmp_msg_0_3.speed_units = 98U;
    tmp_tmp_msg_0_3.lradius = 0.337791247988;
    tmp_tmp_msg_0_3.flags = 53U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.938549741626);
    msg.setSource(54954U);
    msg.setSourceEntity(15U);
    msg.setDestination(27388U);
    msg.setDestinationEntity(244U);
    msg.state = 24U;
    msg.plan_id.assign("IFVFIRWENKQPWZPLKAAIUYYXSZBGETLATVJTKGNSAHCQULFVEFFGQGXQRHBLRDBESGRZMNLHDCJVEKTFHNBCIW");
    msg.comm_level = 192U;

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
    msg.setTimeStamp(0.198107364272);
    msg.setSource(48749U);
    msg.setSourceEntity(185U);
    msg.setDestination(17370U);
    msg.setDestinationEntity(212U);
    msg.state = 218U;
    msg.plan_id.assign("QRXZFLRFATKXNENUNERZTHQTIMWGRILVQOPCCJVLQQHEQULGYOMPTORBCOPHBHZXUPZPKJWKUVHMEEDSWBFIHINENGMOZZXTNJOWVRBVFUPHHAMIDGALDBHCCKPOTDVWFMGBJAJLYCAZNMMBAQTMYYZGGFVO");
    msg.comm_level = 190U;

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
    msg.setTimeStamp(0.295863894835);
    msg.setSource(10648U);
    msg.setSourceEntity(42U);
    msg.setDestination(8122U);
    msg.setDestinationEntity(6U);
    msg.state = 20U;
    msg.plan_id.assign("GMSVYPZPGOLQLPKUGLODTXYFVZCOAZGHGPAQTWIWKKCHJDAHWEEFRIIOIIZNNIECURMCWBXTZQJXZBJXUIOPFBIKJSDFGWDMRTYQAPFFWUKRMUHZXLGFYJSEFNLWMFXTRHYAUZAYBQFVDMEJXVJABHG");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.36865333173);
    msg.setSource(3854U);
    msg.setSourceEntity(104U);
    msg.setDestination(8366U);
    msg.setDestinationEntity(245U);
    msg.type = 4U;
    msg.op = 194U;
    msg.request_id = 33306U;
    msg.plan_id.assign("WHDPKKSTUIQXYVKTSUHKRECZVQHESKBNXLWKPABGNWZPLXUSDONMKIKERHCZCRWFYEOABPETGGMZOVZTHDJWXKAEGESMPBJGMRLSYQCHVZTUIFUPUN");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.526646872184;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FCHZZKWGTDHUODVEVDUIDLSBIQIIPJARWCWCYMBZYQHLUTEFPXTAQYUUOXVBKNCQUKMWRHYLATCEFLSZIGIGRZRITTLKMFNNBZG");

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
    msg.setTimeStamp(0.780071069212);
    msg.setSource(51277U);
    msg.setSourceEntity(162U);
    msg.setDestination(62171U);
    msg.setDestinationEntity(103U);
    msg.type = 184U;
    msg.op = 0U;
    msg.request_id = 33750U;
    msg.plan_id.assign("YBHLGTOEMKEHYMNFGDVBWTEEJPUXPRPPOTNSJYYRNRXLAZTAICISQAOAKLFGPQMPCVYDMQBSQJXRDAKLJOSUDWVEJCNORZYKUTUPZVIPPZFCGKTKWRHTLZNKHIUUQTGITVBHSXRTEKHY");
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 18U;
    tmp_msg_0.range = 0.578951973894;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OSALIXWULRYPJMQYMXZRACPSWRWVJAVGBBYLFNJOPXDHDZGWOX");

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
    msg.setTimeStamp(0.411046437294);
    msg.setSource(16648U);
    msg.setSourceEntity(246U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(175U);
    msg.type = 195U;
    msg.op = 103U;
    msg.request_id = 8157U;
    msg.plan_id.assign("JXANTKLJMYYHOLRXQCYNUTPKUZGINQAOFFOBATVLLOFZPQTEAJGODYAWSMIANDBLXOHLWDVUKVEHIMEGJQVZZMPRGBPXJLEPHOENNBFXQQTWKXSUWWIIWZUMIVJCCFBCLSYHAZPTBMZASSFAPBHMTEDCFTTSNJIMGQYDXDZJYMCSGHXEKBGVCHSRPYUZWYLFRVTQNNRDCBKVO");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("BWTMALIMXOTZKRQKNBGJZYBGECQXBEYERPPLQQPVJRGHKWUEYCNKKLVOVRCILCORZGCCXDPSTMDVTVNMUTAHYVZIXUZDFRAESPFSQVSMEZ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("YLXZFEXHMJNIXUJXGZTEAMBSDGNTLQECUMEGVFNZIVJPOADBCTPLETIDAKQLBGCMQUJMWSOSYWOSCADJPDWSOBRACPGYWXEACNBRQKXUABMMJFSYDDKCTJYNROHPI");
    tmp_tmp_msg_0_0.predicate.assign("CARGAUAULLYUKWTHEXVEHMCHQTXFHZLNHGZOWIHJPYXIPFBMPTBWZPUXVDWLXVQEHSLDDNIDAVKYKUMLHGIZPPYJKJSTMJZSFCJWMFNGGPGZCXTFDNOUTREPYOJSZRBJDLWCERUICZTUQMMFQWBSYOVDCQIIRFDPOXLSQMNLMOQRERTVWYBTXFWNOBNSRVXQAGKODSEVKBUYBINSSFULJTW");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QVNLXMTSXPRZSYGHOKVLXHRUOGGUSANJRJTTKYXACHYDMZSYYCUEHCWONJORYCOQOLWUVDBHDZYVAJQNDGXTMODPIKZLLOERFQKIMHTSJQMVBAWKSIFKBPPIFANDTKYSESTDXHFZNRLPFBEUGCWEQJBFXJIGGBEYWFUMDAUQAWFZPMJNGUFNGKSNJBLPIPDQIOWTCIZECHTLOFVCEWIRBAIVMXBATUENCAHSZXRXYKLW");

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
    msg.setTimeStamp(0.439664610843);
    msg.setSource(54612U);
    msg.setSourceEntity(105U);
    msg.setDestination(14669U);
    msg.setDestinationEntity(96U);
    msg.plan_count = 33965U;
    msg.plan_size = 364068918U;
    msg.change_time = 0.112752521494;
    msg.change_sid = 52278U;
    msg.change_sname.assign("XBFJGUFLDWXSXXIYBZGNIGGZKOYVMAEHMNCNDKYVVDZCTGATJNKFRDJIXEWOLYAEFYNRDKLEKIKKMTCZGGPLHLUNNCXYFRHQCJDJMONZWXALOBQAJSUPKJZOHLJJTPWOMWHIPDIUBAHVSWHUAE");
    const char tmp_msg_0[] = {77, 63, 4, -87, 57, 77, -20, -39, -100, -54, 47, -32, 4, -60, -119, 60, 11, 56, 95, 2, -66, -46, 55, 13, -97, 77, 47, -105, 91, 107, 4, 37, -39, 91, -31, 46, -111, -89, -103, -49, -42, 63, -26, 20, 73, -16, 14, 126, -7, -112, -10, 15, -28, -87, 17, 69, 40, 98, -92, 3, -27, -64, -77, -7, -51, 81, 19, 116, 20, 62, -126, 18, 31, -114, -58, 83, 77, -80, -37, 46, -54, 81, 66, 11, -85, -63, -91, 57, -90, -81, 82, -70, 98, -61, 49, -80, -22, -39, 19, -79, -34, 48, 0, 23, -74, 17, -15, -105, 89, -5, 96, -30, -94, -128, 91, -29, -86, 20, 6, -18, -126, 106, 120, -95, -78, 23, -97, -2, -106, 41, 61, 115, 100, 55, -67, -38, 115, -17, 93, 30, 81, 42, 101, -113, -34, 77, 52, -6, 56, 64, -20, 0, 78, 48, 109, -111, 69, -74, 49};
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
    msg.setTimeStamp(0.958237239638);
    msg.setSource(1360U);
    msg.setSourceEntity(32U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(1U);
    msg.plan_count = 60618U;
    msg.plan_size = 4135045558U;
    msg.change_time = 0.354363461112;
    msg.change_sid = 27624U;
    msg.change_sname.assign("YCEQYHSNAUFCCWXTRVMGBVNJAUAEUTCDLLDKRNLQPBRTKYLAMTVHGGEWUWSMBYRDRXWBOSPDNLDXBCIPSUYCAKBEQAXSGSECFAXDODPXYTLFFWG");
    const char tmp_msg_0[] = {-72, 35, 108, 99, 0, 21, -59, -114, -127, -44, 113, -87, 97, -70, -64, -99, -8, -35, 19, -12, -124, -109, 11, 3, 75, 16, -75, -125, 117, -75, 8, 28, 10, 90, -11, -92, -47, -89, 54, -8, -93, 44, -66, -123, 6, 115, 113, 14, 89, -71, 7, 38, -88, -1, 35, 94, 27, 12, -44, 83, 83, -94, -50, 97, -118, -35, 73, 69, -49, 62, -105, 62, 88, 86, 105, 94, 106, 82, 55, 45, -69, 49, -45, 18, 96, -120, -51, 48, 29, -46, -47, 82, -127, -58, 61, -19, -69, -44, 100, 50, 53, -18, 126, 14, -56, 80, 14, -49, -116, 111, -128, 58, -49, 105, 65, 21, 58, -120, -23, -17, 11, -33, 87, 123, 17, 65, -41, -68, -32, 95, 15, 118, -107, -45, 89, 33, 91, -57, -75, 13, -73, -5, 70, -24, 80, -124, -43, 123, 84, -18, -38, 65, 114, 5, 52, -52};
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
    msg.setTimeStamp(0.360412567471);
    msg.setSource(11712U);
    msg.setSourceEntity(46U);
    msg.setDestination(11540U);
    msg.setDestinationEntity(48U);
    msg.plan_count = 51000U;
    msg.plan_size = 2018578710U;
    msg.change_time = 0.141060951554;
    msg.change_sid = 2253U;
    msg.change_sname.assign("CGDJYGWPMKGLPCLFRFZNHBVBLNEBWWKHVCBYQANLJUVAEEXNLDYAOEDGWJXPJMJRUXZWBHJUYAVBNTKJHZPTENSPRMIOHISKQLIQAIXBHJSNGHJDCCCTMOFIFQJOHCFGAPKXPEDQTRIUOYNDBGUVUZEQMXNVZRVTFKZDFYSOYKRUXKFPGT");
    const char tmp_msg_0[] = {3, -27, 65, 82, 12, -73, -106, -21, -26, 59, 85, -111, -80, 119, -74, -22, -83, -102, -63, -111, 124, -114, 85, 23, 78, 25, 80, 78, -15, 56, -93, 2, 21, 63, 31, -58, -128, -65, 94, -12, -48, -97, 92, 50, -123, -93, 57, -61, -95, -43, -101, 8, 111, 74, -38, -23, -88, 49, 110, 101, 95, -107, 124, 55, 87, -55, 82, -80, -72, -105, 13, -2, 71, 125, -34, 91, -91, 23, -42, 43, 124, 88, 79, 111, 113, -84, -53, -18, -78, -42, 68, -18, 56, -120, -9, 50, -70, 62, 105, 123, 18, 102, 69, 105, -38, 4, -53, -99, -100, 62, 10, 124, -33, -115, -88, 86, 80, -76, -47, -71, 33, 92, -123, 114, -6, 106, 39, -58, 52, 69, 56, -26, 29, 108, 33, -79, -35, -125, -19, 36, -45, 75, 29, -92, 11, -108, -109, 10, 75, -25, -70, -107, -102, 96, 87, 12, 62, -17, -61, -103, -58, -111, 73, -104, 42, -117, -23, -52, -49, 94, 80, 25, -43, -83, -128, -80, -109, 100, -2, 24, 3, 78, 78, 65, -115, 8, 20, 110, 12, -7, 22, 75, 42, -29, 124, 98, -38, -30, 76, 25, -84, 65, 78, -96, 34, -102, -98, -3, -66, -69, 109, 80, 55, -125, -125, -52, 92, 16, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TDJGFCQXOOYEJOSWXXUKDXQKNHQMOQJWHYPNPBEYLSMITILGLRFCXPBEARQUBTIRIPKIASIQVMZOUNHEKFRJOGWQCEUSMCZCSLSMUGKVTYGXDVKSRFBOUVTVJYEMIAAHAURLKWLZEAXDRWOQUFVCZXBCQJKPYYGMBMFHLZEGJPVFCGNXUJZSTJYHVZDHRGBADHPSZNFGBJFWVWAOZVTKTEPIWLSANBPWYIBHWYCNDNOD");
    tmp_msg_1.plan_size = 29380U;
    tmp_msg_1.change_time = 0.589039156101;
    tmp_msg_1.change_sid = 1361U;
    tmp_msg_1.change_sname.assign("QTMVYBLYJZEOYFGBBUFYLTOCJUAIIKX");
    const char tmp_tmp_msg_1_0[] = {-89, -24, -121, 114, 34, 104, 18, -9, -94, 26, -103, -100, -2, -11, 126, -82, 115, 19, 108, 34, -107, -2, -103, -78, 114, -32, -14, 13, -16, -73, 85, 89, -111, 45, -19, -10, -27, -81, 61, -97, 7, -18, 125, -65, -55, -49, 61, -46, -106, -60, 116, 34, 23, 24, 58, 97, -5, 12, -97, -117, 126, 111, -27, -92, 5, -8, -72, 80, 35, 101, 39, 58, 115, -38, 68, 31, -71, 79, -105, 14, -5, 11, -116, -11, 38, 116, 76, 38, -44, -68, 100, 72, 12, 24, -50, -32, 93, 58, 80, -16, 68, -1, 92, 123, 45, 115, -27, -52, 1, 7, 105, 68, 97, -13, 19, 122, -54, 33, 40, -24, -33, -35, -82, -50, -124, 65, -108, 39};
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
    msg.setTimeStamp(0.965018019355);
    msg.setSource(7896U);
    msg.setSourceEntity(102U);
    msg.setDestination(45328U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("GMSYCVONATFJLPQKTFTNDEOFHCHMFGTH");
    msg.plan_size = 38879U;
    msg.change_time = 0.124099285;
    msg.change_sid = 10391U;
    msg.change_sname.assign("XFDUTFHZQWDYMGOJREWEHYIBAPRXHIOLUMXHPLMDKBKZRZGGGHENHIUUJLISWYLJLJSZQJRBKQMNIXMVXPAZVPEGIETYINCXVBWNZYOKSIUSCXKSLFCVUHDNRHAEHCMYTANINYIBWQDYBEPOSFKOWXKTRRPKWBAQOAAFDUDKDWDUFLFPSOTZSGEJV");
    const char tmp_msg_0[] = {-5, 37, -76, -45, 50, 5, -73, -102, 71, 23, 78, 37, -99, 40, -74, 31, 28, -116, 78, -72, 100, 15, 42, 108, 51, -108, -88, -101, 2, 52, 13, -58, 65, 41, 19, -126, 45, -127, -87, -25, -110, -70, -38, -123, -77, -42, -103, -60, 90, -74, -20, 23, 14, -58, 108, 58, -94, -96, 78, -51, -5, -78, -69, 105, 8, 5, 11, -96, -21, 77, -23, 34, 48, 49, 94, 23, -41, 126, -92, 72, 12, 122, 100, 66, 31, 10, -82, 5, 51, 92, 52, -89, -15, -42, -5, -101, -6, 98, 59, -20, 80, 104, -108, 122, -14, 109, 90, -18, 94, -107, 59, -68, -5, 116, -89, -38, -100, -43, 114, 28, 68, -2, 6, 122, -86, -56, -68, 19, 6, 91, -50, 109, 107, -35, 100, -121, 10, 108, 39, -74, -10, 107, 121, -56, -106, -70, -79, 37, -125, -47, -116, -81, 26, 7, -102, -24, -44, -100, -39, -98, 71, -96, 22, 123, 3, -26, 107, -54, -100, 34, -99, -99, -114, 111, -13, 50, -43, -72, 3, -26, 13, 49, -86, -10, -117, 89};
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
    msg.setTimeStamp(0.61466182174);
    msg.setSource(52373U);
    msg.setSourceEntity(3U);
    msg.setDestination(57694U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("CEMJNDHTYWPIHKNNEWXJRHWNDJLVPORRYVJRIAQHRBKPZLPOZFUKQUVVZL");
    msg.plan_size = 47626U;
    msg.change_time = 0.254694616459;
    msg.change_sid = 54661U;
    msg.change_sname.assign("OCYEQLVIZVQWBINLWGNAOOUJRCLMSDUAPSUWSAPMKFMGLHQXYMGPYTN");
    const char tmp_msg_0[] = {52, 70, -2, -44, -61, 54, 61, -81, 4, 82, 51, -84, 125, 102, 126, 11, 29, 59, -1, -47, -124, 18, -2, 51, -35, 104, -10, -52, 72, -80, -49, 54, -25, -100, -32, -101, 119, 77, -36, 105, 89, 88, 88, 81, -57, -21, 57, -96, 124, 36, -4, 21, -33, 100, -45, -61, 121, 47, 27, 97, 45, -95, -42, -55, -109, -33, 11, -95, -127, -99, 46, 98, -66, -55, -102, 36, -127, -46, -95, 46, -126, 46, -75, -85, 54, 69, -95, -70, 37, -80, -68, -31, -71, -127, -33, -68, -122, 73, 120, 104, 91, -125, 16, -43, 1, -105, 44, 87, 0, 44, 66, 51, -59, 53, -48, 80};
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
    msg.setTimeStamp(0.453630829305);
    msg.setSource(12966U);
    msg.setSourceEntity(247U);
    msg.setDestination(20184U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("ZQNZDMYYAOTIFYFLPBOUFSIYRDWYCSXSIUKLDCJUHXYQPAJRVMCGRLVWQIEXABKXSDCWCDPMOTWBFDZLJBBAONHEUPQGNSDFQILVHTSUSMSWHKWGNVFJVRMBNEXENTPZQCGUXKJHJUKNTUPJJBWILFLXJE");
    msg.plan_size = 57970U;
    msg.change_time = 0.806883523335;
    msg.change_sid = 60625U;
    msg.change_sname.assign("AUBNHBWPKLYWZGSRGRUBODHCSTAVUOPNBRBTL");
    const char tmp_msg_0[] = {-120, -112, 53, 88, -19, -105, -73, 2, -67, -117, -45, -98, -39, -40, -107, -32, -101, 91};
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
    msg.setTimeStamp(0.0552448720244);
    msg.setSource(48031U);
    msg.setSourceEntity(203U);
    msg.setDestination(27382U);
    msg.setDestinationEntity(78U);
    msg.type = 192U;
    msg.op = 121U;
    msg.request_id = 56469U;
    msg.plan_id.assign("YZSSDBCYIDKUVGMUIIBUXRISBNQOYMRSOKWDLLEOXZXTMGCCGNRBNDAGRHVCKLATKCBGEYLMGTIHOEDAQETFJGPYXVLVBYFBXWAZVMUNNCHNHTDMWUFEIJVTPEWSOXRUUDDZYRQPKYJCKWLPHEWRLVXSQHSMVBOQNJGYUJQLINDWPAROTAJJLFZFBSZHXFDCETFAIZHRIOCMBPVGJQYPWAIAPJPHMJQFWZZKFZMFQUPTTVSHGNA");
    msg.flags = 37139U;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.0822809053117;
    tmp_msg_0.base_lon = 0.677421362703;
    tmp_msg_0.base_time = 0.684149396371;
    const char tmp_tmp_msg_0_0[] = {-64, -105, 16, -114, 70, -98, 118, -43, 73, 64, 65, 24, -47, 23, -16, 121, 54, 30, 41, -86, -34, 101, 32, -75, -109, -94, -15, -5, 12, 41, -101, 109, 2, -58, -34, -79, 24, -12, 50, -55, -121, -54, -13, 65, -114, -53, -47, 86, -103, -80, -18, -124, -100, -82, 110, 7, 10, 34, -48, 24, -123, -31, -64, -87, 88, -67, 87, 43, -45, -121, 48, 78, -125, 70, 90, -128, -59, 38, 27, -40, 33, -2, -48, 51, 69, -73, -85, -34, -92, 25, 106, -62, -50, -89, -44, 116, -8, -117, -88, 33, 95, 64, -70, 28, 123, -11, 60, 80, 74, -29, -15, 62, -50, -25, 123, 32, 64, -64, -43, 94, -119, -26, 23, -52, -37, 12, -105, -99, 44, 3, -38, 99, 3, 40, 120, -110, 76, -42, -22, -108, -50, 103, 71, -110, 48, -63, 63, -81, 60, -8, 122, -92, 72, 81, -116, -93, 32, -79, -88, -127, 46, -43, -93, 41, -46, -24, -43, 43, -30, -9, 0, -114, -112, -118, 95, -112, 103, -1, -71, -80, -85, 65, -6, 65, 49, 35, 87, 65, -72, 68, 15, 7, 67, 31, 126, 63, 79, -120, 46, -82, 1, 59, -16, 15, -106, 94, -10, -80, 73, 47, 96, -37, -92, 114, 7, 113, 14, -99, 2, 88, -118, 82, -22, -66, 95, -8, 32, 75, -62, 88, -10, -45, 24, -20, -14, -96, -70, 102, -60, -21};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RCOOOSPQHBPVPBQJFPDZAFMGSLJZVPLXRDHDFKSLCCWFSQQN");

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
    msg.setTimeStamp(0.510111206635);
    msg.setSource(13493U);
    msg.setSourceEntity(210U);
    msg.setDestination(18729U);
    msg.setDestinationEntity(212U);
    msg.type = 23U;
    msg.op = 102U;
    msg.request_id = 33919U;
    msg.plan_id.assign("NVETHFLPJZVJANDCWIVENYHLVHUYXZPUYGFOWKYZBCSLMAJGQOWXCRPPZCQPATBREIDEGWOCRRPCYFQGEZMQYZKIPGB");
    msg.flags = 45110U;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 163U;
    tmp_msg_0.system.assign("QPKTDWEPVTOEWPWDQYKOKFXVWAORBMINIKVBSZHAKPDESWUGZMUIDTBIQVFOVDKYOJYBCDVVMSNXXMCTXOUXQQFEAWLLNZJARJPEMIQMOCLYMKBGZXQTSPNKHYOSDFIRAJUHCPRGXGKUXGZHNLCABZAUHNROHSDMZXRIYVMRLETCWIRCAGQ");
    tmp_msg_0.range = 0.557882773572;
    IMC::StateReport tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.stime = 2593381878U;
    tmp_tmp_msg_0_0.latitude = 0.0844573400884;
    tmp_tmp_msg_0_0.longitude = 0.580684381888;
    tmp_tmp_msg_0_0.altitude = 42899U;
    tmp_tmp_msg_0_0.depth = 53007U;
    tmp_tmp_msg_0_0.heading = 46166U;
    tmp_tmp_msg_0_0.speed = -1941;
    tmp_tmp_msg_0_0.fuel = -118;
    tmp_tmp_msg_0_0.exec_state = 68;
    tmp_tmp_msg_0_0.plan_checksum = 13203U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WGNRBFFFVIILMORXIDIKVWNSPIXBKUPPJGQVALJTVMWEKGLCYZLZPFGXJYAZHTPCHJFCTJXOUSGIXQMOUGYKPUQOHWUSXISHEWQTNVDRBSOHKUBJNWBMYARHAKHBCAHCOFECYZMXGSOMERLKFQGSDTEMEAQQDZTOKTAOFMADYLFYRVIIQTAPCRJODMPXLJCILRKV");

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
    msg.setTimeStamp(0.848043948368);
    msg.setSource(19659U);
    msg.setSourceEntity(200U);
    msg.setDestination(23506U);
    msg.setDestinationEntity(212U);
    msg.type = 34U;
    msg.op = 69U;
    msg.request_id = 51881U;
    msg.plan_id.assign("ZPZRVHUMIXKFALKTSNARUHQRBSAMJBQBOHSPGQFSNHBCDYIYAOGMYXVPDGCEZCBVZQBLKSXMTXLCEGBINXBPPVJLNOATOOTOJMXRHWEYDZBRQEPWVCSNNJPXWMGVPCI");
    msg.flags = 4695U;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("OKORWJCOCJIFRGJXVGEMDVSNKHOJEZXODKGPTBUSUOBHXJNWCTKGJNUFJQYWCTGTFAAMTZHW");
    tmp_msg_0.value = 177U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZAPOVJOZODZIKFDHKGRWNXZTMUNUVUITEREWDNSQ");

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
    msg.setTimeStamp(0.13335435253);
    msg.setSource(44268U);
    msg.setSourceEntity(79U);
    msg.setDestination(698U);
    msg.setDestinationEntity(39U);
    msg.state = 169U;
    msg.plan_id.assign("ZVNAMKUGZWPXWBDTCGGZWBXAVOSIVMVBKOHFPSUCVZVMVAYNWZPTADYHXJQWMBCSNDMQVBGYRRZJMLLUGEFFMFYEUXJQLRLFTHKADJXRSOLBHRCTPCSYIHPEUCYOPNITWEGIEKDORUUYDRFVDFTLBPPHJOKALWJ");
    msg.plan_eta = -712859803;
    msg.plan_progress = 0.353288401206;
    msg.man_id.assign("LQGBIDSTGMIHAZZTMXMUCZAFZIPEAMNXHOBVRMJUTYRNHSNWYZAJNGJYNTNWFAAKPDPFHXEVCILNQJNYOKETCCXFHQQGYQYXGJUONVKSMUBSRUTXQIGLQNMOAPHFQXLWTZJVEWQOFVIHKCLREYVX");
    msg.man_type = 42649U;
    msg.man_eta = -2092002257;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.112014921298);
    msg.setSource(28913U);
    msg.setSourceEntity(54U);
    msg.setDestination(27869U);
    msg.setDestinationEntity(1U);
    msg.state = 88U;
    msg.plan_id.assign("UGQUXSRYIVHAEXINLFNZLBONBKKXDMEVUAKJNSKTJLIFXSDWGVDFVPRTVIMLSCYDYCCROPZSJKMNPGUKJYRJXFGOHTUMQCHCAZPEYQJYNDADVMOGXYMZZENDGBRMBIVRDWTMBKVPLXBASEKZOTQOKCDBXPHSAGEVYHZGWQQWHYEJWEBKPHFPPZJFSAOWCLULBLOCAOTUFWHFIITVIWCUAJYLPREW");
    msg.plan_eta = -2064063042;
    msg.plan_progress = 0.555597553623;
    msg.man_id.assign("DRDGJKQOGKCLORUCQBHPEBSGMWLOTYGBNXKUEDHTONNEPGAEDHANFDCYVBAUMNCYXSSTQRSMVDVAAILTMWFXZCKHVMTYJKJTYXCMIOMYFKTGCBLBFRHYQUQBIHZDKQTV");
    msg.man_type = 30610U;
    msg.man_eta = -560395265;
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
    msg.setTimeStamp(0.929613461024);
    msg.setSource(43691U);
    msg.setSourceEntity(231U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(137U);
    msg.state = 122U;
    msg.plan_id.assign("EWEONAJGRXJLNZQGUWAZEMDGEFLKHOIERWZCTVVQXWSQCFOMUNQYELSFHURFYXBOPPDHGUYHFTYLRYWYZWSCBZDBDXMQJAVCCHUMYKIMNQCHFDJDFARCVTPTOSXQPADBKNZEURLAGZCCSIKGEKPXIBDPLANWHOKVQKHVCISYBKGXIURMMOONJRIPXXTDOAFJRHGU");
    msg.plan_eta = -2076277176;
    msg.plan_progress = 0.114843733778;
    msg.man_id.assign("QRXVTOQURTLWSFQBLUZYOIHMUONSBMFCQYHSMCVVUFDJOIFUOEHXFAJDWTRSJLUKDZZNIJCHQPHLYQOICCYAVSIPYTVKRHGYTOEUNXGIJBWDJSCQXXKAVWRJFTENKBMOXPSPCZNJKGAWHGMBZPYGDAPMZGQYOSXTEKZZDVKJEBSIXIONETRDNNQTNHLIMULAUJHWZ");
    msg.man_type = 57901U;
    msg.man_eta = 656904707;
    msg.last_outcome = 60U;

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
    msg.setTimeStamp(0.396255884618);
    msg.setSource(17816U);
    msg.setSourceEntity(126U);
    msg.setDestination(25063U);
    msg.setDestinationEntity(141U);
    msg.name.assign("RUFYOVNUOIYDCFGLENSVRXBIRIRZYGLUMPFMWMIEAXQLTAVWTSOBQMPPRQMNNBGLLDHYCXQELQIBAZXZVBPVKDQELNHHMKPYALQTNGMTEZSYZOTDWKUCVMRDWZGHFASTIHXJUZACWEFOQRIKKPYRSAQYOZKPWFDECHWTVJACXFUFGVPJUEGIUDPJOPGBUKJCNYFRRETOBALCTJVHFEOCLGZBWNXQKBTKNDXDASDVWSJNHKOGMIWXYSHBZJXSHC");
    msg.value.assign("QFHMIJTWWGPAUKSCCBAAOZWALFZYGLKNRMOQRPBNSCL");
    msg.type = 241U;
    msg.access = 203U;

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
    msg.setTimeStamp(0.152035598555);
    msg.setSource(64522U);
    msg.setSourceEntity(18U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(157U);
    msg.name.assign("ZWJCKBPMZFBAETXGFCBLOUEIMBFBPWMNQZIZTSKEHPBVRLDWVXLVCFJACACMRHHREFJEQPSAVPIVRTEDMLHLKROMVXZNBUBRBIGQJLGUZZCKJOLNJSHVLKQWHQNZMMGBYEALCUYXMIDCKGOGFQGDPADNHOWYDPRYYN");
    msg.value.assign("TNALMRSBONEQJZZSAQSTAQNLEADTEYMBUBEZSRMTDUFHFKFJESRYXTBVTYLGHQNEYCRAJCXBIFFWBPQWZUJOQAFRUBRL");
    msg.type = 156U;
    msg.access = 49U;

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
    msg.setTimeStamp(0.144624235334);
    msg.setSource(3999U);
    msg.setSourceEntity(117U);
    msg.setDestination(30299U);
    msg.setDestinationEntity(156U);
    msg.name.assign("SRKLBPGVHQKHHIRBRLZBPINDPTESJRJXVXGCHYOUFTNHOYSHJMFXUTVVFOHBRNTJFJUKZHFKAYFQCJWOZPTCRBDUVIJWGWQEAESMRIGPQKULLMCDGCDBXDWESDLTANYNVVZAKVLLLLCEXYEPARQKSLZKVWNTQSOJWXUIYNQXUIZWQUZYBEVBYIWTDKAIUTC");
    msg.value.assign("WDKEEJTSCDSXPGWRSVWIKABHLKIIIRLERNLHJXDZBSZVITEBNYYZPEUMZRYYKV");
    msg.type = 37U;
    msg.access = 46U;

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
    msg.setTimeStamp(0.981147826092);
    msg.setSource(46342U);
    msg.setSourceEntity(137U);
    msg.setDestination(20193U);
    msg.setDestinationEntity(139U);
    msg.cmd = 216U;
    msg.op = 71U;
    msg.plan_id.assign("ZAOJKSUPQHUUCDCQBTRXCYWNFKJZFFZWOKUGBZPEHYDNKGUPGZIPGOXGRTHJYDMYYTVIDEKLGJGOAEHEQVIMJCKSWDSAJVRDPWBLZBITKWVCBNESFYMNASXPINQUNLARMBXMVSQHNFUOLHXEIQIPIOYXFVLRTOELUZZWUHFAWNAHSSKWDARFSZTIQQXTBJMBURKYTCNLHOJLGVERMTOMGCHVVCCRXG");
    msg.params.assign("VSNJQRBIDEKBALOLGRZFLVKUOJJXYWXGSSWSPHPNKFUNHHRGPDXHTEUFLMFWITQCDGOGULYBBDEPNGXGNADULLCSHYTTZIARXVVQHYPETBUFZNMUKQAQBBWZXZYUSSNKIQZPYOKDIDSPOIFPMVONWCOPAJSCVWEMDVDROWLUGPVJQEWHLKITAFATQKLTEJAIGFJJKSZQEAMNYCCJBZORIICMMUXYYYRTRZMXZDEKOFQAN");

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
    msg.setTimeStamp(0.238942852526);
    msg.setSource(18657U);
    msg.setSourceEntity(15U);
    msg.setDestination(38099U);
    msg.setDestinationEntity(148U);
    msg.cmd = 32U;
    msg.op = 88U;
    msg.plan_id.assign("GRKYEPCEJIRZKWRPHFVTDMAXKMBLMCIJAURQXOLJUHJZTVTFSGATKHVLHRPDEKWMIFEUVWAWPTGAIABWAXJYIEYGHWLVCLGX");
    msg.params.assign("YTHGBMJLLGISVXFCLDBQYXYJINKNOAZTORNSKWGGMPGSFVZIAMFFPYUGRDCOTHKTZWDQZYYSSRNBEHHECJQTFIKGVKASNSAPNQRAEKXDL");

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
    msg.setTimeStamp(0.32612993611);
    msg.setSource(46301U);
    msg.setSourceEntity(246U);
    msg.setDestination(6108U);
    msg.setDestinationEntity(131U);
    msg.cmd = 79U;
    msg.op = 120U;
    msg.plan_id.assign("ANGPLTHCSOMAOGIWGEMQZXWYKBGUTCEFYMFJNEZXIIQNBIAWKXVLGDFWMJBRKFTFXDCQDPOTXUUCJCPYSBDSCMMWWLAYOBIRHYPLLAHBLSGJZIOEHUIFRHZPXUQPOMHCZQHZEZGCWPJVXAYWMJFHKX");
    msg.params.assign("XFKQXGNPWIVTBEHWKZDAYTJLAHIHFFWBNVNJCRIMOOJUKOZSPHECBHCCQSCPLYQVXLCYLBOGIZDZUZPYZCATBOPEPDIWTDEQFAJYSEJOVFNIEORKWKMVFAXLLKRFQGZYU");

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
    msg.setTimeStamp(0.344884631761);
    msg.setSource(56590U);
    msg.setSourceEntity(89U);
    msg.setDestination(57273U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("JTAFZGNQCMVTVYWXHUBCBDZNTDQJKRMAIEUEUTVNFXOUPESUIATSHGQKSFHFGTFLLDYXCJYYMIRAXBEHJTJYLZVQBNQPVZDKYXRFIFPLKRVRXUGECJPSBNEJOLJGJWQPYKAMZHHSAWHRT");
    msg.op = 188U;
    msg.lat = 0.105511484195;
    msg.lon = 0.208342524022;
    msg.height = 0.644913198821;
    msg.x = 0.422452048313;
    msg.y = 0.439495098406;
    msg.z = 0.653131113241;
    msg.phi = 0.105285093862;
    msg.theta = 0.211482351069;
    msg.psi = 0.648078348525;
    msg.vx = 0.748688070616;
    msg.vy = 0.90181143074;
    msg.vz = 0.577596856927;
    msg.p = 0.552070415724;
    msg.q = 0.978292976009;
    msg.r = 0.0487600068055;
    msg.svx = 0.0418813798403;
    msg.svy = 0.0909988168612;
    msg.svz = 0.46905815023;

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
    msg.setTimeStamp(0.212619793301);
    msg.setSource(19643U);
    msg.setSourceEntity(85U);
    msg.setDestination(3017U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("DPMTHTHWGGEGBHUOQRDRCWYESZMSIFYHGLXJYLKZARUBZMJFSRGXGVFKPOGENHIYECXJYLNUMQHYBPZSQRTDQUCZLVTFNBFKHCXDRQEZBBPUOFBYETOINVCBIOUYBWWXZDNZRCFM");
    msg.op = 121U;
    msg.lat = 0.580866434303;
    msg.lon = 0.392405723346;
    msg.height = 0.695872491664;
    msg.x = 0.501643269379;
    msg.y = 0.912362319787;
    msg.z = 0.206924447276;
    msg.phi = 0.231616984886;
    msg.theta = 0.722312414272;
    msg.psi = 0.703544176758;
    msg.vx = 0.655168351413;
    msg.vy = 0.861117640844;
    msg.vz = 0.720745781974;
    msg.p = 0.255840455846;
    msg.q = 0.539434084046;
    msg.r = 0.963992296268;
    msg.svx = 0.546116684767;
    msg.svy = 0.474589304983;
    msg.svz = 0.164670552098;

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
    msg.setTimeStamp(0.184455257978);
    msg.setSource(19807U);
    msg.setSourceEntity(113U);
    msg.setDestination(63383U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("MIVISOXKVOXXQRSMODAIGNEWGSHRNHBCABLGGZXFVQTUWWZMXUCFTRJFWNSQYVRNMUVBRPWAZHPQJXKEONTBSWXPTHZJQJYVFZJO");
    msg.op = 5U;
    msg.lat = 0.96726721618;
    msg.lon = 0.0516310350154;
    msg.height = 0.466740248304;
    msg.x = 0.871581745238;
    msg.y = 0.0168585116881;
    msg.z = 0.977747175453;
    msg.phi = 0.688942482346;
    msg.theta = 0.167624318612;
    msg.psi = 0.276937758021;
    msg.vx = 0.261203810681;
    msg.vy = 0.275936545635;
    msg.vz = 0.978344275214;
    msg.p = 0.765620560086;
    msg.q = 0.461386430533;
    msg.r = 0.51564550916;
    msg.svx = 0.464536820424;
    msg.svy = 0.488957452315;
    msg.svz = 0.465421171461;

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
    msg.setTimeStamp(0.849902748538);
    msg.setSource(44021U);
    msg.setSourceEntity(138U);
    msg.setDestination(62499U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("CWZYUHPMSUIKZSGFFDQJNNEIHFQXBEFWSJQLYLNZUHUPKOINGYRXODRZBRXALMAYDSLYCUCFACCRSEKPGRTVEXZCKRPBKTAPLIGCLWYKUMRMHODZREJCSUNMNMIXWQPODESVBWBAHDSQQPG");
    msg.type = 135U;
    msg.properties = 59U;
    msg.durations.assign("YZNSLXSKBXATQGFCVDYIAMKMUJPMVROAVXBXJMBITSAFEBDMPBOIHMTQVIPSRTZYNQOFDNGDEWSWCTTERANMSQRBYBJLJQHGPUVVKLDKHCHHOGYUXJMNOEYEFDHCQRFZQYZAQPZPLXYXKSTKUCAIFBOELUCWLUGVHVXLUMHUEOYVEJIIBFSIGAAKDULUGWDYGQZRCITSWFOPTPGJJNRSOERZLAPONWNRPGCVNQIKZFJJDNCFWHHWLWCMXXRTZK");
    msg.distances.assign("UFACYGNUYIECGSXUQJWOPZQUBVWSSNSCRQWBHFLZITGMPFDYRAMHBEAQRVVWHBTOYDYKJIKOYYLLRNRMMAXOASNBMLRSGEGOZELIFMIVPJOYXDGJJTDAHGRETQMKLKIIWYZHHFJEZAFUWDRCWVAQMAPPLUKMIENCZUQVSSCHZBMAZVTRDSVIEFWBXNHPTPHKSQCZXEDXJTNJFKHVJCXLOUGXJWTGXPUDYLEPQDTKNLIDNXOKF");
    msg.actions.assign("UQYWMSKSFYVITAFGEPZZJWRPAPZNFSOCQ");
    msg.fuel.assign("IFUXSBVYOVPNSYUTQUXODABRSRKQKMJINGESCKQPEFOOKQIDDEHCLAMYQRUGPTZEOZXGWXNVTLLBPBDIMOMYKLNFCTSMHQLJJJTTYJTZZLQEFWZGZUKCGSWPEIDUGWMKFGUSDISKQUC");

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
    msg.setTimeStamp(0.638508265349);
    msg.setSource(13956U);
    msg.setSourceEntity(41U);
    msg.setDestination(24925U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("WVDGQONXWZFUEETJOIDQIFYNYLIAASFKKMNJTHBMRSOLRYSZPHGHYPVSWDSYZDHBEAAGSYDMELWNEGBFXKUAZDLRBBMZBXRBUUJWGQADEYQURJNWSDWCXZAIKUAJUIGGCTFYOLQXDVPCUREHVYHXLLCGLWEQTVVFG");
    msg.type = 47U;
    msg.properties = 107U;
    msg.durations.assign("NQYVJVGRXWUGVKKKLZXLXSDNWMLUNLUZTMWPZVNHMHEUWIQCLSCFPRFESBEDMTXKQOKFUBNGKWJTNCIUAYCBYSSMWQCDZOTRBPQXOFXSVVZBNFYMEYWWDYZTQTCDOGGZRNMZGIZCUPXRCGDFHIMUADAUAFIOHOCZBPMJTYRSOWIQDACRLQYWQEHROGBLSVIETSXEXUENGNYSIHAJVFVKJLPFLJDPALEKTPIVPAOBPOEHYRBGHKBHHJFQKJX");
    msg.distances.assign("PMJLIKCNMXNFFJRFYROMKGDFPGOYCTIKUACZWTAVHHZGGQRUQXIIUSOWEHYOARLWTNVIQWECQVCBVBJDNUD");
    msg.actions.assign("HLXJHPEKDATHQOCUKXMLYMXDMPZGFYOJQLFVYYOHLNTNPBXFPASDSGWVCOXJWHBPTZPDQTNQLHARIBDVNNSJBGEGXQVIMLXMZZEIIWBVJZPBVMIDDMAUCIBYJCEAAJVSQFUCGJRBFUUMFDYEWHSUNUWZZWKEXFOYMTCCNOKLKBKRSPNSRVEUPSVDFKRYYZMTEPTG");
    msg.fuel.assign("GBQGENQPQBBZHHUWQRGIVLVSFFYPITJAZBFEEDWSZOUTYDHTXMQUCUNVUKSDMXDALRKWIOODCGXFSTJHSORAKTGNDMLHASJKYQHCZAVJCETGX");

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
    msg.setTimeStamp(0.311865374257);
    msg.setSource(53137U);
    msg.setSourceEntity(30U);
    msg.setDestination(47112U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("KGWCFHMQFQOYFBTJQSAPKUSJJYERDTBCVIYOQVBNEBOQBFNAHTQZNWMMEUPIQTZYOGAZWOBPLDYJHVCSPOCNXSYQUIFIKZXPEXRFXDZRAPGFMEPBWURWTHCBDRNSRRDCOEKHCZDWOKGQGWRGGAZDVCLVAJILNPADSIXCIJLOTVGHMHWEUIJELTEDRPTUVZMLTNUHNMVLUDHSMXWSYKGXMUKYSKJLGPOLEXYTLQSAXAKIYZVVNRFFUJMXB");
    msg.type = 157U;
    msg.properties = 241U;
    msg.durations.assign("XCOCZJOLJFCUKOJFLJMMZPMBHBWLSYZRPNAIHNOAYAZATCQMXKGZLQFYCMOTAWGTUPHUMLMGBARESZG");
    msg.distances.assign("UKTFUWLOCYKMPPGTQODPMCSHGLQJQCMAUHLTQXSLNNWDESXPHRVZQYEFDKNFRPRGQAHPOHJDYKGFQCZWZLOUMEDLBNKLFBVP");
    msg.actions.assign("KQQLXNBYHMHZJBWKJJOQVDMQNNFSORQLEZPPSQOFJRMHTLBHXJPWRBVIXVRLZNFPYCMGYKHTNDXVSKZAOXBDOEBPULPLUTSNBIBFJIXYQAVAYEPXZZEXFLWEWZUGLWFTAFLSKKAOUJPHTWTYGLCCOVENBIUMCDIESFMDDARPZCOQMWCEGJETMTXCCFOIQJDAAAHTMUIKGYVCVGISVNHVQWWTJZNFUUSG");
    msg.fuel.assign("IDLQTSJQWWXZFJVMOUHGYLHCKNPTROXSFEXAKRCQWERSUMLJSABNRPLLRZOOCBHYOGZAJJFUXAQPIIBNTZBIPQCQVXHCOZATKSHWMTNFAWGVDHCPRRDSZUUEMXUFIVDDZYETCSWSEHMQQUEAMFKBJOKRXNTBMGLTEDQEZPVGYRDJKJZRUHVWBDFEVCGXIOISBPPWFYFNGZ");

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
    msg.setTimeStamp(0.174612709894);
    msg.setSource(11824U);
    msg.setSourceEntity(193U);
    msg.setDestination(55600U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.356165119667;
    msg.lon = 0.453873080513;
    msg.depth = 0.282582616524;
    msg.roll = 0.807155268833;
    msg.pitch = 0.740489115032;
    msg.yaw = 0.356125720132;
    msg.rcp_time = 0.38486811977;
    msg.sid.assign("GZHOPVBVVUKJQDBYBCEMKKRHHRKYCQXAOCGXEJROWVCFDSBKZKAZAJRPOGBMFOXQHPJOFEIWUKUYLDOIFYPCRYMAPNCRDKQWWYZQNSPRWSUCP");
    msg.s_type = 81U;

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
    msg.setTimeStamp(0.745356118764);
    msg.setSource(29443U);
    msg.setSourceEntity(9U);
    msg.setDestination(53175U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.483964941457;
    msg.lon = 0.859641460672;
    msg.depth = 0.581273479221;
    msg.roll = 0.432471403631;
    msg.pitch = 0.147866446097;
    msg.yaw = 0.396822554275;
    msg.rcp_time = 0.395773543296;
    msg.sid.assign("DAGDNMTFEUXJZVCGUSERXBNUWCWUMCGBKZFXVFAZMAFGTSXGNRDHDDCPHREDTOFQAQMKVRJHXYHKAILTAXJAWSNXROZIQKWCPNJYPRWOQERTROALMKFSCZUVJOOVTRNQWZQQUMLIDHPBERLYUPMJHXJGDLFVIIGAYCDXZIPTIBHBITLFSUWMYJFVKPYYISLKAQEYHCVS");
    msg.s_type = 40U;

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
    msg.setTimeStamp(0.573192680534);
    msg.setSource(58557U);
    msg.setSourceEntity(84U);
    msg.setDestination(38234U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.895446101377;
    msg.lon = 0.690005706527;
    msg.depth = 0.719922136434;
    msg.roll = 0.474634635644;
    msg.pitch = 0.754115847187;
    msg.yaw = 0.0443885641863;
    msg.rcp_time = 0.311437250832;
    msg.sid.assign("SZEVMPFSLBPGFIWUXYINUJZNRWEJODVBBMYJUWYMAATRLKMHTAOLBVNJYAGUSXWVAEIFKATCACDBGSK");
    msg.s_type = 121U;

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
    msg.setTimeStamp(0.655109677889);
    msg.setSource(17791U);
    msg.setSourceEntity(137U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(10U);
    msg.id.assign("MGJGHDLUELIVEPXN");
    msg.sensor_class.assign("QKJKHWKFRSDAAHBOWAKTSNGBXYBZIDEVOLBXUFDJZJLGKFSPJMRMREPNOBWRCTWCLLRCVQAOQMOPEGUKPBHVVXQIWEKYOHXTMJJIAGQBWNNPSMCSETDHLIFGDYIYBXTZANSBYEFVUMPWLHSSTPTAUFHTDQRQOUEKOUXWHZCACYXRUGTCFZTNZLGWKIQGRXMIJIUNJGIHQZZYFIWJLBAXSEVSYONO");
    msg.lat = 0.428338430325;
    msg.lon = 0.718102931905;
    msg.alt = 0.823510912559;
    msg.heading = 0.769108030633;
    msg.data.assign("EIBLWTBMGLKCXNQTRMSTMSOZXDCXFBHEOUCGYZPGNJCDYUIFYTNJDHNNUCVPDKEEXWKQMEMQUGYQKHFOLUAXXTBLPEYFGCKYNMAEIYQCGA");

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
    msg.setTimeStamp(0.000112454458836);
    msg.setSource(5238U);
    msg.setSourceEntity(71U);
    msg.setDestination(43954U);
    msg.setDestinationEntity(123U);
    msg.id.assign("GJOHJSSBPERCBMWBKUYENLBQBXKDHSPKMDYTWPDISIBOGLMXQZNJULOHIRRPYKMQEKGMIUWMCBLDDWZUNWDAENBGOVGLMHOWKPYREPGFPKNQBXTGTCCYSWRZCUDJVWENBSPUTFTAIJESOAA");
    msg.sensor_class.assign("OVSARDYAKWHHSPQPKNMIGJPRXDYUEXMXQUXKEVNNJPDFRKFFVJVZZTZZVLXTEOIEDGTPHGGTJOFMAKCZSJFISIZAMCUVNZTYBGQNNTY");
    msg.lat = 0.580759619324;
    msg.lon = 0.713672993401;
    msg.alt = 0.387610796331;
    msg.heading = 0.76251529388;
    msg.data.assign("JKVYJOBGLZKKJFCVGGBTTXYVIMEERULNNQLUVWYSCSJOMXDBSENVHTMGWRILBAGRKUHAYYGKRAADZWDXUMPUZQSJWCVPBENCMNDMCQYKOGITZLUQHCDPOTGEHQJWNFFQOVHERZLHMYWCRLRILOGUYSVOCCXZLPSIXHXDPZWMVNPSBETHUQTAFIZFKBSJAIHRAKFNQDYBJIATQEFAUJOPMQSHDYRBLOVDGXEICZFEXN");

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
    msg.setTimeStamp(0.694643100045);
    msg.setSource(47375U);
    msg.setSourceEntity(175U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(77U);
    msg.id.assign("IOIXKYXTQOLGKXVSCCQXROLMOEETVPFLUDYRGWJCODOZZREFOVGASJLTPRLFAISULFYYABMHKOKECZDPVBRECWHAMDTMWRWNA");
    msg.sensor_class.assign("NJKPWHBDWYAKCSDDYBETMFSBWZSSLKPQKPFQKIJWZNGACYEITTUIDLHUACXUXQBHJTPUVZFOOPQITDQYHGSONYAXDUCKGRXPTFNOPEFEGJFPEGWVIELRQGLLTCRAJVLLHSMZH");
    msg.lat = 0.70531603095;
    msg.lon = 0.802983559473;
    msg.alt = 0.303787931976;
    msg.heading = 0.937953867386;
    msg.data.assign("PSECRKDRRTPYCAKYQLXSZCXZEQRNTFHXHSASFDNOIKUDJIWZLACVKHZMXAMTGFQLORYCQXPXMDDJPUAZUBJZRFZSMLKDHSMRYNUUPCMQVZOJWJGWMXIOPFWRSBOYKOIETPOLQGJXZSCGISWEZTYKQRIFXFHINLULIYLJVWLJYGABUWKNGEDUHTPEWMELOAVUMTSFHQUCWXIBMQJNBCFPKCVTGYEAEHEVV");

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
    msg.setTimeStamp(0.692556758473);
    msg.setSource(1602U);
    msg.setSourceEntity(124U);
    msg.setDestination(46136U);
    msg.setDestinationEntity(96U);
    msg.id.assign("SMSQFDUAOGSYQCNSBQNHIGAZFRNOMAKLJBVNXXEUMLVGLZJAURTNVYYMWVICSFYZHBXLWTRCDUIHILZEAVJKRDXPJDTCWKEBWMLEOVKOCROPXQLLKBEXYOOYSPIPUMDGHNUFTHNDWJPFZAAUPDFNKXDXUFFVHJECITVBOQPWMDMZGNJQGETCBKKGTCQUCFGSJSYZMWQGUKWAWLJRBA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SVYEOVNJNCXCEZWKUOASSDFRCWOPLCJLFJQJGHQUYQUKDVTRYZHCCHCHTPWFSGOXBMJKBNIMVQDXTQFYDZDUKKIWELBOHGEYASJWRFUYDMGVZGLPKQLVQYYRLNBUXMZFVTKDAZMLQGATGIIVWBJRLNUCXKNCFNNSMDIOYXSHCHTHIP");
    tmp_msg_0.feature_type = 202U;
    tmp_msg_0.rgb_red = 101U;
    tmp_msg_0.rgb_green = 177U;
    tmp_msg_0.rgb_blue = 45U;
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
    msg.setTimeStamp(0.0724191104201);
    msg.setSource(23181U);
    msg.setSourceEntity(106U);
    msg.setDestination(11267U);
    msg.setDestinationEntity(105U);
    msg.id.assign("XHVFNMAIUKACABGAOYUNSRSIGKVSCYIDLSLBPHHNAAOMNELQXETRFULLOVHMTASKGYZYXKLHDRWFMKZQEGKDWXPEUYQWMFTDRHIRXIJUCJCEPBPDOQVBODJBWUEZVVYFCTWXKQOLVCHTPWNLDITIOFXZBUTCQVEDVJKLSAFJXMFQCWKERCAUHNSQPMPYKTEAYDOXGBOVWURGSUGMWGFHYPSO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PWBZZKNUOONSDMYRRBSTSFMLBGXCJWNTCYDHOBUEWPIAPJBFXFHMHRSVZFUQOUCQIQJJCHLWNKQIRLSNLGMPYCUFQVTLXKLNKLHOFIMJVKEVNQKUYZCEFJYDSENSJRCOSGPBZMGIXQEKTQFPXDBAVGZNGWIEAPBMHDTDMAVDVOEOYGLOXRWCIHHXZRVZTUJNQDUTPHGGHUPLIXWAMAIZBYTTUCDRBXYQXVTAVOSAYJWKGRACKRPEFWIKFM");
    tmp_msg_0.feature_type = 88U;
    tmp_msg_0.rgb_red = 209U;
    tmp_msg_0.rgb_green = 233U;
    tmp_msg_0.rgb_blue = 56U;
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
    msg.setTimeStamp(0.836188152115);
    msg.setSource(37308U);
    msg.setSourceEntity(36U);
    msg.setDestination(49554U);
    msg.setDestinationEntity(94U);
    msg.id.assign("PMMKFZJUVULBTLBESOVOXKYKYUXAZJJAHHEDRENTNQFVPLLGLPBJVIBYDWUNTNRTEARIIBNWVWFWBOXDWMAMOSILRPQSAKMCJNJRBZSPMFVUYSCOACGLDBYUINKEHPADZLVUZQWGWZAWSODMSQEJLGGCDQZXEIMBUCXAOXOKKGRGERFQJMYQITFRYLWGVHDHSO");

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
    msg.setTimeStamp(0.493040868891);
    msg.setSource(44332U);
    msg.setSourceEntity(24U);
    msg.setDestination(18427U);
    msg.setDestinationEntity(217U);
    msg.id.assign("RHUMXKDBIUMJ");
    msg.feature_type = 46U;
    msg.rgb_red = 111U;
    msg.rgb_green = 25U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.764321408629);
    msg.setSource(47510U);
    msg.setSourceEntity(85U);
    msg.setDestination(63971U);
    msg.setDestinationEntity(162U);
    msg.id.assign("UYNQHGRCPAVHWBZBHWOBYGZASQQEEBNHPAKNIDTYWUQGFRSLEEOUNCVQVFKHHPONROWXUGCNDAPTBEKWYQTALUFFZJDSUNTDNXIVDTKSMGVEJILPLXTULKJSMERGJFYGOMHKQTEXDIOOJJCJFCYCGSQCXBXNSVIWRBQZJFTLSHPAKSIKIZZOM");
    msg.feature_type = 179U;
    msg.rgb_red = 164U;
    msg.rgb_green = 0U;
    msg.rgb_blue = 173U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.256392721598;
    tmp_msg_0.lon = 0.687258887687;
    tmp_msg_0.alt = 0.812756211967;
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
    msg.setTimeStamp(0.644858585129);
    msg.setSource(13106U);
    msg.setSourceEntity(146U);
    msg.setDestination(43633U);
    msg.setDestinationEntity(99U);
    msg.id.assign("KWPEPSUKGHOULADILOWQMLWTSPKJDYAGFWVJVGZDZYTJEDNVYBJEBNXCMQUIXLIYOTAKWKTKXGJVBOCBGBEIXHMTEVHKLRZUWEQFODSHDXYWESEQURAVPXCQSNDVEPLLMBYOIRJATNDUZYCAYFFPNMQMLLATFJHCRIFKICFKPXHOBZWMQOHTGGOCUCQQBYFSJDGBRFHVVVELAGMJPSTUYXNSXCTHZMPZZAIFNSNOJBRAINGMH");
    msg.feature_type = 209U;
    msg.rgb_red = 45U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 179U;

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
    msg.setTimeStamp(0.443504551798);
    msg.setSource(2618U);
    msg.setSourceEntity(181U);
    msg.setDestination(9612U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.472835442328;
    msg.lon = 0.373853449118;
    msg.alt = 0.0342550795398;

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
    msg.setTimeStamp(0.0908049714341);
    msg.setSource(57382U);
    msg.setSourceEntity(185U);
    msg.setDestination(58715U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.784628668179;
    msg.lon = 0.260509641524;
    msg.alt = 0.898644523776;

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
    msg.setTimeStamp(0.22442164228);
    msg.setSource(64665U);
    msg.setSourceEntity(227U);
    msg.setDestination(23570U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.21717562848;
    msg.lon = 0.485175813828;
    msg.alt = 0.440878551041;

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
    msg.setTimeStamp(0.844532885916);
    msg.setSource(53373U);
    msg.setSourceEntity(21U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(78U);
    msg.type = 204U;
    msg.id.assign("GEPEWQIQFVKMKQTAXUTLAWNAXLKTQSZLXFBMONQENZGIAYNMNALAPDNTCHGCBEESQJIYPTJKNHMG");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.0662512708138;
    tmp_msg_0.lon = 0.665865954481;
    tmp_msg_0.z = 0.454102280165;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.radius = 0.752436663607;
    tmp_msg_0.duration = 34125U;
    tmp_msg_0.speed = 0.976141424438;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.popup_period = 12140U;
    tmp_msg_0.popup_duration = 58405U;
    tmp_msg_0.flags = 105U;
    tmp_msg_0.custom.assign("KOLARWXYXARNFEQDRZYLGGVQZKMEQWFUBLXPZJVFSAAXMQUVSPPQAMUOPKCPVWIKUYALMHWYRTOQQIOOYKTRYXRKVUBEBMJQTG");
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
    msg.setTimeStamp(0.0927363206623);
    msg.setSource(43607U);
    msg.setSourceEntity(138U);
    msg.setDestination(594U);
    msg.setDestinationEntity(123U);
    msg.type = 165U;
    msg.id.assign("CFRKJLVTJNHKIXZXAAFARLMSYYEDW");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("OQCVVQBFRAASOZSUNAGJAJWYLUEBLQQESJPTCQDPHXFHFJWVOIREKATRLDWJNCBZBLLGJDSYNCHGUKWFFLMDZYDXTBAUVZJYJWSEXYAOGPTEVXREMCOXWCLHFTKNLESXYLVFGFFUHKXKVMPUANSTQQYILZNTOJDZFCDQBGYCIZHDGWORPHGMUTSPEQIRCMKGPXUONQNRHXSIDYIERNP");
    tmp_msg_0.max_speed = 0.219329390334;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.lat = 0.900344681991;
    tmp_msg_0.lon = 0.498681317015;
    tmp_msg_0.z = 0.276444305976;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.custom.assign("XHBQAYAYQISJYTEMYNJNIANWIVWGTYEVTXBMJRMZ");
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
    msg.setTimeStamp(0.189583893467);
    msg.setSource(41483U);
    msg.setSourceEntity(71U);
    msg.setDestination(41149U);
    msg.setDestinationEntity(176U);
    msg.type = 229U;
    msg.id.assign("MHLTAVHAQYKXQEMVYCERAQDXBWFLK");
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 60U;
    tmp_msg_0.x = 17028U;
    tmp_msg_0.y = 18604U;
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
    msg.setTimeStamp(0.12933864732);
    msg.setSource(42372U);
    msg.setSourceEntity(127U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("ROSMKLQPOITAXNHLDUUYOUUYCNTKMPFBUITGKQSPNKXHVIWYCF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ECDABROXBLTVCIWMQOOMCJENSGHSMKAHKBYNIDFGIFDQELYZXAGWXRTRFDXLXZWVNDRVLDFOBJVDCOXNNWVPHFKMEMQGOUMGGTDIQKKZBYHSNMXOLUWPYTULZYRQSHSLHPFUPJJKDWYTUJWYBZYKIITCBWPRGPUZSGFNVPHIPQVCAVCMSQFCJRHRAXZINLODUASNZYFSTOMOEKZZGKJEVTARQIAMEBGXJAWPPLEJJUHC");
    tmp_msg_0.sys_type = 243U;
    tmp_msg_0.owner = 36974U;
    tmp_msg_0.lat = 0.461865241272;
    tmp_msg_0.lon = 0.66009317106;
    tmp_msg_0.height = 0.678110538635;
    tmp_msg_0.services.assign("LURMEEBHPOGDUFHSWNFRWEGMGAVIIKDALKZYLRNKTNMCETTGHZGVUAASSBYSETWYYLHZAZYPXMAIPYYQTZCBBLSKNSBKCIXPNDWLNMRTQVEGHJFZAKJUSSHYIIUPFGFLBJZXRXCMTNEZHLQFUV");
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
    msg.setTimeStamp(0.122445653389);
    msg.setSource(32697U);
    msg.setSourceEntity(111U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("JNKYQUYAOZIANBQSHLDJYDLUBYSPPGNEJECRVEZMLUMNZFBIFKRFYCMNTXWLJSHSZJSQDIIZOPCGCMMIZDHHWXRGVWRFMFSQBBNNKFLTTBQLEVGDYFNMODSVRUWRTFCRVIVYDTHGUMAGUSNTVHMKBKIQXCOUSPFKIXCPXYKPGULKCJQDT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IJKJBYVDUJLPSRZZFKDSXYAUXDQXIXMVPQWOZBDKSKCN");
    tmp_msg_0.sys_type = 250U;
    tmp_msg_0.owner = 10994U;
    tmp_msg_0.lat = 0.0810686949392;
    tmp_msg_0.lon = 0.331066780678;
    tmp_msg_0.height = 0.0320801616939;
    tmp_msg_0.services.assign("NKUSKDGQHIQDDLFEHISVVMGETUAPHVGOMIPOBANAHTUEKOMEGKLWYTZPFVZ");
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
    msg.setTimeStamp(0.2224804986);
    msg.setSource(13711U);
    msg.setSourceEntity(104U);
    msg.setDestination(9323U);
    msg.setDestinationEntity(80U);
    msg.localname.assign("RNHQRQSDXZKDIJFWHZIFMDBTYZNPWNDHKQNWAFEOWNAVCMHHBRQGEOJKYFOPNDVWRRAJLZMSWNHZXEYXVKCVBLMXZCTJICSQCJFGUVTVULTMKPOSBNILEAEGITOFYXWYHOMSKIGYTEFQBKQRBNHNPT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YHANRYATZNFZRQTEYFEDQXAPIGFWEKTIKVICKSGFXMVVKVXKIXUKBQSBROTFLXBKOBXACQQACICTJPKWGOMIQRNUJMYBRTFSOCQGLIVLXTJDHLAJBZNPXJWLEPMZZAUSWLUDCZPPKXFMVLVYELYDHLJNDHPHGUCRSDWCMUSEJFWEUFD");
    tmp_msg_0.sys_type = 238U;
    tmp_msg_0.owner = 797U;
    tmp_msg_0.lat = 0.763237770543;
    tmp_msg_0.lon = 0.810750790546;
    tmp_msg_0.height = 0.38719245482;
    tmp_msg_0.services.assign("JAGYJASNRQSLHOYMYFRXRBTPNILDTQFYQBQOGJVJDMZOTWIYJAFZAQTMTBLTXCOTKPMKEOYVENLWWWZDECFEHHIRCEXBASFBLFZZRYAVLHUMXGQXEIS");
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
    msg.setTimeStamp(0.270727668537);
    msg.setSource(45336U);
    msg.setSourceEntity(83U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("CLAZVSXXFQBIOSCNUSSWRQYWFQHJGZTR");
    msg.predicate.assign("HDXJFPACESVJVOIDDNKRCWSKGJIAQXKFIWFALSDN");
    msg.attributes.assign("XOLXOLZTFZFDHQHCFOBOGUIJRYIDSCXSPMKJTCSKZFACHROBWVPEDFQNQUQAMVGXCZBGGBPWJTIAXAMHDNLXAYTJCLGCBUWEWWUBS");

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
    msg.setTimeStamp(0.19592644429);
    msg.setSource(11534U);
    msg.setSourceEntity(212U);
    msg.setDestination(16922U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("LLPTXBUYDEUCTCGXBAHAHSWFLVYMANPWGKNXXLDQWSBOXYYVVZSAZJFKJTKKLOKWNUNJAHRYFOCGEUONZOEUMQRIQGTUXQLDCLROJOHEHN");
    msg.predicate.assign("QLINSOXYXLNSKPYWORMJHVXWVEQHXHYHVQAUPCTLDTQZQMWLFCGWKIYTLRCCPDPJUMEHGKMGADKBQFFNZQNYVITUCBTUHXRBLUDITHKPMEROJDKFDTQYBOTXIZVXAPETJCTKMQLFRFIPFFNAGWHXYAFWUJBAGGBJCWORBNLYXSEBFISNYMZPVOIJRVGAAK");
    msg.attributes.assign("BKEMOTWGCKI");

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
    msg.setTimeStamp(0.294525593088);
    msg.setSource(53976U);
    msg.setSourceEntity(146U);
    msg.setDestination(47937U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("LXLQTEJBXAXHODJQKXOYNKNCDSAHFFIMHSKNGYOALMVZNERTOTILMJIDMGCYQRIIUBVMZM");
    msg.predicate.assign("EZVONZUJAABDFNTOPPVKSMEQSDJRQXDIIPPMQARBGXNEEAKOGRDTDPCYFBERFAYZHVSXHEHNKHONMGNJFUVIXZKFDQVTNNKJDALCTYLVCYAUGUYPQBXEFRCWKCYBAUVZWTDXUYGOUQHOBPQZFTZYWETDSHILMWWHFLCJJQESHLW");
    msg.attributes.assign("DKXRAUEKAROJSJSNAYSDBTNHIUORZXTXTPSBKMGLBMKMQLVHMKPLXMZQFAPBIEVRDAPTOMRVWGPELHZHFFWKLJXGMENUGCTYNVAMHXYOVRKNFLUZHGGOPIJMO");

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
    msg.setTimeStamp(0.267178417961);
    msg.setSource(51788U);
    msg.setSourceEntity(91U);
    msg.setDestination(13062U);
    msg.setDestinationEntity(74U);
    msg.command = 210U;
    msg.goal_id.assign("VFYXHXLUYYRROYHHTNUZZUAWKAZPNIGDBVQHDGQFAVDOMCSRCQVWVWHUSTGCSTBTTJEEPVKNAVOSYKLEQUNIURFEMWRCDFOFGAGAEIKISZQXJOQCDPNVEAMVRSJWFGMNHLLLTQEROPMTPHCFCZLIZHNKVBIUBBDEXBZDCPWZUFTPLTCGMABZJGGDXBUOORXIJDGEQROXXMSNKNPNBYQPEYSTALJOIMYWMAZSBYXCJQWLUKWHJJSFKYW");
    msg.goal_xml.assign("TCZMZBNUOMAQHGHKPZOLFRGFYQEMKZWTXCKFWZXNQWTLFYQIDYYOAVBDIUPWJLDRICUMPEWDHPXMVDJAOFQSLGACHDCCSIBZOYCGTQSESWSXNNHBYEEBNXQUYTULXNA");

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
    msg.setTimeStamp(0.793616959417);
    msg.setSource(4897U);
    msg.setSourceEntity(19U);
    msg.setDestination(16956U);
    msg.setDestinationEntity(12U);
    msg.command = 230U;
    msg.goal_id.assign("QVXNWDYLVOZZDVTAADWZLTCVINJAGNHTHZFTNYOMPFSWHRIBASMODWICXACUJEQXXCRFUQVGLXXFVXEEMPUKOPPVUNMIWNWWGRBIDUSBAJPYUFCLKAAELBBKQSIYZKQJOSGQGAADMCHGRPKJYGBMXHZDEIYJGPOODRHQRLXLCBFFUOHFVQSMXSGKYLSPJTNJCHWZ");
    msg.goal_xml.assign("HPFZAMUSOVILDUCBEZWQSQACHLHCUOKQNFYYJZSIDROOEDNNKKPGRUKSDRWUKXDRZM");

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
    msg.setTimeStamp(0.295742374038);
    msg.setSource(32199U);
    msg.setSourceEntity(190U);
    msg.setDestination(305U);
    msg.setDestinationEntity(216U);
    msg.command = 33U;
    msg.goal_id.assign("EFRKSNYBXKADFVPGWEZEYOLOCYMQPNBFFUPBAWTRYDVVEAESSYJOCYXYRGINNEPAGAYIPMOYUTWSGTDLWZWDNQDVIXBTQFXSLUXDHRRPIQEUOGZQQKLBCPLMWMNZNXWVKZHRGGWYJQMOMTKHASNDLHHIHAASRFCCKVQZIEAADJIB");
    msg.goal_xml.assign("KZYQYNPLNLPEMIERHOLAOYFXYWEJTTFHVZNGZOJNYSCSEMUBKKHJGWNXKBNMXRFNESRIZIMCQXYGATZXSOCERSOZHCIVPWQYJZXJADFQBZPPCDVTBZHKDJUMAIUNTFWPVABXQSDDGOICFHOMVUQMOVMINPMGFAJGBTXQXRWVRRYDGKKRPUKCACXILIWABSWQQBLVDLLDUVJBHPUSELGMGTOWGUCCK");

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
    msg.setTimeStamp(0.689697744511);
    msg.setSource(51659U);
    msg.setSourceEntity(86U);
    msg.setDestination(45006U);
    msg.setDestinationEntity(5U);
    msg.op = 83U;
    msg.goal_id.assign("GUSSEICKEFHFAIQLLTUGRBDXJVZOMFMFSHIYRNATAYVMJSQB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NVWCOTIUHSDODNBOWIYOCZPZLACHEGYYOLQMPVFXSBAPYXMHBGIHUSJXNMWHJRXBKGOWQRPAJEMAFPPEQMGLZNUFPOEAZHMRUIYWSLJORMTDWLKTQISSKZYHGICUYKJONTFMDRYAAWFBRCPSYVVGWGZRRGUQZWAZFVFCRDSLPCQILKXENSXLVUENBUGVUPQMATJJFZTFXCEBEHUMDTJTKCEFXROTTVIJGK");
    tmp_msg_0.predicate.assign("MKSILEKJWWJAIXAJGZEMTYTASFRRLGOQCJEEFAZTFYZPORDQPMODKITQYYZXCCKMUUZGMIXEHTZMDBRVLPQRLELDDZNCUIHZCLYGJLUCGQPFPMNJNMAUHHBBKOSFCWAWYXYBVHKIOQNVWIZBSAHBJSKPVOTQGTXCISFBUTRMSGWDUGKFLPJHHXAQRSBYDGDXNBSIOVNEDROE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AUVGKAPMENGLAXBITCCCBAJIEDFUVYMDWHMWBKDLHVNIRWDWSPHLBHWYCVTDGJTVZPRAZRVDVKLTNOBIRAZZQYFSXUCZQQXPWEOVRLNNBSQSYNKQVTPJQZRSCQDBBDCSHTXIYXUAZXGOUJPUFFNALIQXBEFUOTYOKCYIIWUFK");
    tmp_tmp_msg_0_0.attr_type = 4U;
    tmp_tmp_msg_0_0.min.assign("DFILWYYQIDQQEJXNZDYLLMCRNEFVRDPJOBRHCAZUEKIDFTRSCZVCAOOGHFBVRVFBBIXYPWCYRRINLBWQHTTTMBSQINXFKXZMKCNMXZAOUPSRIKZUWGGESHOZKAJLLYSXFIHLYHWBTMRDXFEFTSSGUQV");
    tmp_tmp_msg_0_0.max.assign("DSNVXVONFISJOQQDZBNOHDXLAAXRZRDMMHXVWAUZMHZKHJZFN");
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
    msg.setTimeStamp(0.467770211617);
    msg.setSource(6923U);
    msg.setSourceEntity(34U);
    msg.setDestination(23670U);
    msg.setDestinationEntity(193U);
    msg.op = 135U;
    msg.goal_id.assign("PQWJETBKJHZOSERMZBTEVBOYZLAAOCPYALPKUWERMDSVCQJXPRRSWSWGHUEXAVITUHUPUUEKWRQKRMPGFBEJQRJIKDNKTNUFOZJIYCFBBXVAMQNIBMVXKOPCQIXHRQSTYFNIVZGSXODMFIXGG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GUQMYXXBTZXLZVIUPLBUOYWCBUBWGOTQETQPNBVSXJUFGTVMYQEXYJTVZQDRZHKNTUIDEATOHFJQFAQMWFJLNUSFCYARNTZRJGHCAFYVEJCGNRWBHBWTSHMUVOYOCNCHJYVGCQGQFXXGNELGDELKWJOWZPAJBYCKGIPMWENDSXNSBBZIPKPDEEHCRKSKURMODWKMHIADSHCQSLFONAOPKDWVYIFPHALKISAUXLDTPFIIAZRRZO");
    tmp_msg_0.predicate.assign("BUWDBUVTNIQZCDYOGFLPZQTKXWPCLPJLROROMASXDVXMEOZGOHDUJJGGIAJGSLIRRDID");
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
    msg.setTimeStamp(0.904150707395);
    msg.setSource(14416U);
    msg.setSourceEntity(224U);
    msg.setDestination(3595U);
    msg.setDestinationEntity(154U);
    msg.op = 118U;
    msg.goal_id.assign("AQPXIAMVSYYPFLNMVRYWRJRUFTDBXWEWOUFCODIRNCBPJAMPXFCGJOHUPPNFLCAFIYAVZNLLGFIVGACOTQVHQCOLMSJZDUWDKUHHRKMWGTEWIETVCPHITHRSOBNJFQDRPGKSSISMBEYNXBCZDZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CVJFOWHJROHHHOFBVSBUYYSJZJMCYEDVEVQPLCZZONZGUYBGQKICBSWJIWJFVSIHRUHWXNQYLCKWQEEDSFCZARAVEXAHWRTMTDYLCUBZIMANQRMLUNUAPGEGBVXHCJUSCNTEZMCXDABFFTSADFOFMVLAKZKMBRGEL");
    tmp_msg_0.predicate.assign("KAQKSPOJTMOFTIIMRHTUPVQKDBGJSLMDKOBAQEZDNCWBWWNNDLBPJUHCDPAHKONYZCMURWGQEZRXSVFXLZHDHTFVFZUJJQKSXSPLOMTSINBJSZBBELPQUNALUZCACLVGIKIRDNGTYAKECGTERV");
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
    msg.setTimeStamp(0.511495153308);
    msg.setSource(11232U);
    msg.setSourceEntity(144U);
    msg.setDestination(18689U);
    msg.setDestinationEntity(162U);
    msg.name.assign("GVUPKOEVUHABAWPQBDKNAGRFRACENOKZZNLEKPTKFUPFVOSYDLFUOFXD");
    msg.attr_type = 244U;
    msg.min.assign("YVTVRQJKHAKAKXWLMZVQVBGONBMZEYUJCJSZLTTGCLEXHXPLESSFUGPITGBKFLIUXNKXPJEYKDRTYNGLFUMNGADYYIAXRJHZMDPBPFLDVQCFKQCOFOTEHWEYFPYISCQCADWAWGCWCHOINTQZWLENIJTRXVDUVPBRXUDSHKXZFJOEQZDHWIKMSUBPJNAFAWIZRBMWMNQUGHHTMUIHWZMQ");
    msg.max.assign("SLZLPRGPXHSCWEJVWGHWZQDKRZMAXCTATOSUPYNCXLNIYRNYJJEIGDE");

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
    msg.setTimeStamp(0.302035542647);
    msg.setSource(2493U);
    msg.setSourceEntity(135U);
    msg.setDestination(52908U);
    msg.setDestinationEntity(178U);
    msg.name.assign("GGYKRYUGNHICBANUDXCFJSOQTUKVLAYQYIRPQTPOCRBFOZEVMZBAMKHRELBIFJOSJENCYVTWGODJHVUXAFNFDTSGQHHSAXFUPBMOHOIFQCQZYHOTISK");
    msg.attr_type = 18U;
    msg.min.assign("ANUJQGVMRGCQUOMBACYCZQKOTGBWLLWMMUZIDRFCZDIFIYSVRVYUBFTTGNDJWQNBEYAHUPOKIKGPAHTVIODMCEZEZHERBPOHLHWOEYXMYXVSLDWXBEVOEBKDAPHLJOMNMNCTHXNNRQJSGSCHEAFXAQPXJRQWUHSKPPXOZNTQFFPVYFMCYSP");
    msg.max.assign("YEGZREKXWZMDGXVTNQQRPDMLILMUNYCKPTPWBFMNQANHCBHZSBOLLWHUVJAZQKPUDERGYOBSEEMNSOOMBCFPDYSJQDFKOPAGLTBRXIKNMTRUUDUJIRSIXHLTHCAGMEFGJUZTTZGHWJUZYEEPM");

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
    msg.setTimeStamp(0.129975584433);
    msg.setSource(41926U);
    msg.setSourceEntity(70U);
    msg.setDestination(57641U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ODECFAGACWBPYSZUBHUYDZHLFKXIPOVRNCROTPFMMTGYJDBHVMLMWRROCBBYRZYZUVDXANPRQYKLAPLTUXSUNFJVGUNWGVAXDDFQXBTIKHGMPHJZEMSPYXYBWFWZBGRSTCUXXWCCLAEMRTOOCDHTQUEWOXENWMGEHGAZSXDNAL");
    msg.attr_type = 131U;
    msg.min.assign("MWXHDOZDRILCFAWMNGSQWPDLMAGPHBXXQQINVUHNARJJXYSFEQV");
    msg.max.assign("GKBKTBNWFGHCURLMMWMUADIDTRFCGCQZLWBRAOVNDWAIFJKFTXTXJSYPEZVKZUEZEGQP");

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
    msg.setTimeStamp(0.585417381621);
    msg.setSource(29707U);
    msg.setSourceEntity(188U);
    msg.setDestination(5068U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("CHWTMSLODMHYQBJFROYHLUBBODWJRHCTTVDIOJEEXQFSLISMXAWJKUAKDAVNLGSWWRQVRXMTKTNXBOFXEHPBZVSCGEVAYSCEEXUCVXHZWEPBHRPPDZ");
    msg.predicate.assign("AUMBLSJXOJPHWDPVTIRMMHNIBBYSAKDILRQRGOJHWRKVNQONHFFYMPBOGRFVQJEKICKRXXGEKSDPHDSONZCHOFFIBEDUDEBTGNZZWVRMMVUNUCIVJZAANDXNJBQCAZAMXJGZUUYCXJAPUQKWVAJBTLVUWSEQULGKLWQHCHCPLOEDCLMXTTOYPXUEZN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AWDOTKFZSNIEHJKMBHRAEQVMGDMYQCHZDIELAUYODGCSTCQKUPZXMYGWWIVQHXGJFWVEOXUAQGNTASYYPBHDXOPUCUKZDNHMRFFMECFJIPJFJLQSLJPALSLJWHOXGFTBSLRACONTDQPVKMMRFNRRGODDWRLSFVZKINPBUAOAMRHETNDCFIXGNLCKHW");
    tmp_msg_0.attr_type = 128U;
    tmp_msg_0.min.assign("OKWLLXJYPQQHGSSYEWIXGFMTGNNEXJCLFNYUPRSQIAGBXMAEYWZPVCCMDBRBUSEGWXVXQRGLLTWPNEFBEKWA");
    tmp_msg_0.max.assign("TDUTAMHRZIKJOFLOMEDURVWVHYUTDEXWYMKCCXIIFEHXVMXWQBGPLGONBSHTWMIKRIATNZNLOSBNFSNJQMNADDDYBAZGVNKQJDQEIFVABPBKJGUXTZULLYCZATERPJHPTKPWOBZWJKYGFVGQLZIVCHKQS");
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
    msg.setTimeStamp(0.840342072304);
    msg.setSource(41244U);
    msg.setSourceEntity(15U);
    msg.setDestination(39511U);
    msg.setDestinationEntity(222U);
    msg.timeline.assign("CFLAJWGTRDPSXOGTFTJIRTAPVNKDSCMXIDHOBIOBCMHPXNBXDAWVLXBOFFLVQPWSPIIHLIFWNSUYIALHFSEJPUEGERHIKCKJGAKUPYCJYQKODWSUSSEBZURMZOZMFATN");
    msg.predicate.assign("DZYMLGYQLLXBAJZEL");

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
    msg.setTimeStamp(0.628721838428);
    msg.setSource(18299U);
    msg.setSourceEntity(26U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(46U);
    msg.timeline.assign("BKNKUGTREORIIBIFKPANBMUJTDGMGDZRJJJPCVCAKYVTWCJFQWOZIQDWSXXMFGEGLEYCHSISTBFNNWASXXOYBHQNBOKMLBSYGPFEFMPHGUUIGVPLWXTJAEVZMSHHJQOVZDIDFQUGOFEXDFMWDXYTXLMOZYKOCTOACVRHVPMQNKLNLBPCZUKHBVNAUPZIFVGCWRUPEHRWLXZSQHDRSDAMTDEJCZWKRYQJEYXLKAWETLSYLNCPUAAU");
    msg.predicate.assign("GAHRNAOQEVKRNORVTCNHXKXWLJKILLUCRCLSHVSKEXGONOOCEDHFLQDXFQUWYZKSVAKWASGQRSBFZCWYQUSATBTBQPNBQYIXKCMUDPDDFJJZOINGTRIATIMLTWCLVYPVJXWSMXZCQIBGGMVUTSGBSDMZOUINHRNZMIEHWXP");

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
    msg.setTimeStamp(0.809694303579);
    msg.setSource(43842U);
    msg.setSourceEntity(136U);
    msg.setDestination(11191U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("XYUUPGRUZDUWLCXGIWPGHVQFZACTHPFRJOVLVUQQJIKIHVYKRJSWDQMMKHBRWPYCSQMJPMXNCLZLWVCDCPLNZNTOWCBTKNHWEFPRKPGPDOVMUNEAOEIIMOONJHEDFIEMMYIXAKXXLEKHAFABNDDMNVSIYKQGUSFQAXZRLUYW");

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
    msg.setTimeStamp(0.147343999331);
    msg.setSource(48076U);
    msg.setSourceEntity(147U);
    msg.setDestination(53112U);
    msg.setDestinationEntity(89U);
    msg.reactor.assign("PIBREELMUKKRFLPKBGWKMTOXGUYDAKCQRZQPIXXDJRHIZVTKVXNYSQNSMKWVQMSVWOUTAMZNNRTNFTRKYIDSXZGPMQHOVAHWYUWCSNZASFTCXCNEJBRLTSDLJLEDBMXWTFRNDEVXWMYLNJJQCSZTDMBUPJVFUPLGJOPOYTDHPJRGUUMEDALHZIYQHGPJJHWOFBFWICHVCVCLDCQEEEBSIRVXYNIFOYALAGPOIWG");

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
    msg.setTimeStamp(0.979023605159);
    msg.setSource(13219U);
    msg.setSourceEntity(60U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(104U);
    msg.reactor.assign("QUPKHTLEKDFMVBAUHRPDIGAQVATBMBPUQCGTIUMJTMFSLPGYKAFBNRNRCUXBQGLQCLSCFSZHBZLKFOYWAYTJMMDSJXNOIUXPDAAIMPINDXRSZEHCSHIJJYJT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JDYZIZXAGWFYRVPGNAFLRBGJQEEQSDHKEOXKAEYCUPTYOUFLMAPXXMKFVSULLSVKPREBATIINBDHGOSCZGCVWRTNSEYWTPQLQKFNMKABPOLTJXWY");
    tmp_msg_0.predicate.assign("WZNZGUBPVQNCADBANOXLWLOEUHVHTZWYSGIJPEUXPDKPUMBCIWPFXLYYCZFRBCHHIOEOAUBQDUDOWHGYJETUKWAIXLBVGXHGBXDIKRMYFRMLBENMLZYAQVJZJRMVKEXJVURUJASCTREKQTWYVMSFGMINTNMSXPKPJSBCGSXVTYORORYQCHPCZGOEWE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WWXVYILNDKMIRKADOFXKRHCIQGVGOCSOBTYEDMZCZLMKOHATIULURHUBPZIDKUPAOCWVFQCTUQPEVZPWAYKBSNBNCZNDMJBJGMFYXIBGAONHIKJGNLZPJTEMZYYPMAOIPZSGTYPRHWFF");
    tmp_tmp_msg_0_0.attr_type = 152U;
    tmp_tmp_msg_0_0.min.assign("HSAPVOPABXMYWMPGYITMCNJFYSRHIRNFVTRGEVIAUOEHCUHLJWFZZLUUVUOFEXHGWDTPJCLCZDYAFRVSIMQBGRTXFKKPSTUSQULZIZWKLZEQRUMHQGV");
    tmp_tmp_msg_0_0.max.assign("XBINIEFETLQGDRIWQWQPMYHNGFUZCMZUCHPENKOSEYM");
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
    msg.setTimeStamp(0.630428546811);
    msg.setSource(11997U);
    msg.setSourceEntity(38U);
    msg.setDestination(50505U);
    msg.setDestinationEntity(37U);
    msg.topic.assign("FUTQICEFSLWBNYAUCDZKVCPSDYEIBTJJISFEFGLHIWZZCZDEXDWHNTNLQZIAGLBKIRAYAKSJULNAEKUADCPQOMTWETYIMJUXRXSKHPONLWNSOTAGXMMSLTCZVKOKZBFTSEQJFYQ");
    msg.data.assign("AUYTCRXYGJAHGNJRIXFVEQGGWUHSLQFKGNWNCLDHUYTYKNCLABTNGODPMKSDVIZVTBSOJVNPBXEBERAPVKBWJEMMHDXIEEQXPTGHTMQTYWKKNJGLPGXZMJSRIHOBIYPUAVFOSBZHBWINWLKLFJMPQECQZCKVMPWNVFLWXUSURMJRIUSJWOAZUYROITUKXGDZIOQKQFFZLFZDAFDZCOOEEWDPTS");

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
    msg.setTimeStamp(0.480320068739);
    msg.setSource(62069U);
    msg.setSourceEntity(15U);
    msg.setDestination(60008U);
    msg.setDestinationEntity(88U);
    msg.topic.assign("LEIDBTOBGACUTTSULISRZLYZILJODHHSRKUFHMRFJEWEJUXBUMQOGNZNI");
    msg.data.assign("ELKSNNVQAEXWURHVBGGPIPQMWSEXDTCTOXCBLYJEBOJVGCPPCLUDZMBOLNIYRQFDXNIOWTIHGWHRVIRNLOOCGGPOHJPWOHQBFFNVCUTNPLTRCYEVFJDXNFUZT");

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
    msg.setTimeStamp(0.117701748778);
    msg.setSource(479U);
    msg.setSourceEntity(16U);
    msg.setDestination(52640U);
    msg.setDestinationEntity(215U);
    msg.topic.assign("AGYEFZPTPBTVVFDCOIQRKXUDHNWLHKALWEPMZACGXDAOZIEWTJLSVLFEJRSONROIFMUCEEOHQAQNOWDDVIGZAPNYVUQQTMXOUQQMTZZYKOKPYMCQPYBAHGMWMZHLQGZVHGUNTXBUNBJJTIBFRBDMKTS");
    msg.data.assign("VMZNYTXKOEOFWVHIELRMKFEJHFHJJEAIYQRFTRDUVUUTQGUXUWGGQBPZPQITADNMGLCQWZZNKNXAUBHDABRGBVLNOZFICHUSCLXODAMRLEMSTLNXYKTGWFTUCIOSZGEJETMNOMODQBMJACBEXFIPWQJMDPESGOCDXBSJVBNBXVZRRAOSDWGVSPPNHUFQRWYWYIRQYMINLCJYGXPTTQVS");

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
    msg.setTimeStamp(0.692211580299);
    msg.setSource(49086U);
    msg.setSourceEntity(112U);
    msg.setDestination(2913U);
    msg.setDestinationEntity(103U);
    msg.frameid = 203U;
    const char tmp_msg_0[] = {-12, 74, -120, 62, 19, 84, 69, -13, 36, 98, 75, -85, 66, -20, 67, 10, 81, -18, -60, -3, 103, -29, -102, 62, 49, -82, -128, -9, -52, -67, 102, -85, -5, -59, -14, -46, -91, 29, -28, -4, -125, 42, 112, -35, 122, 60, 24, -54, -100, 28, 84, -120, -24, -76, -62, -124, -27, -97, 98, 87, 94, 73, 110, -3, 76, -29, 109, -105, 106, -40, -11, -48, 10, -85, 118, -74, 65, -1, 88, -80, 122, 71, -30, -127, 89, -62, -127, 40, -63, 18, 94, 88, -41, 75, 35, 58, 75, -15, -2, 38, 43, -48, 15, 95, -72, -123, 27, 82, -52, -31, -68, 10, -123, 124, 29, 69, 111, -34, 55, 123, 96, 36, 21, -39, 2, -105, -54, 114, 34, -106, 34, -103, 57, -82, 50, -76, 82, -126, 63, -65, -27, -56, -8, -64, 55, -62, 98, 68, -100, 49, -94, -105, -126, 55, 13, -40};
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
    msg.setTimeStamp(0.0342723648084);
    msg.setSource(28460U);
    msg.setSourceEntity(131U);
    msg.setDestination(58882U);
    msg.setDestinationEntity(108U);
    msg.frameid = 94U;
    const char tmp_msg_0[] = {118, -30, -47, 76, -111, 8, 1, 88, -127, 78, 44, 29, -119, 125, -34, 82, -21, 107, 62, -88, 23, 90, -107, -109, -79, 89, -54, -111, 22, -51, 104, 121, 35, -112, 100, 106, -52, 104, 71, 24, 40, 30, 65, -84, 68, -39, -64, 35, -68, -128, -123, -60, -100, -108, -49, -112, -120, -35, -67, 60, 52, 100, 0, 58, 106, -77, 126, -54, -69, -80, -119, 22, 47, 95, 97, -57, -113, -112, -65, 26, 49, 71, 104, -11, 99, 100, 55, 125, -119, 53, 116, 31, -46, -62, 103, -115, -63, -92, -81, -18, -115, 124, 20, 59, 18, 71, 39, 1, -11, 81, 33, 79, -18, 114, 27, 16, 30, 8, 30, -34, -65, 115};
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
    msg.setTimeStamp(0.52637218905);
    msg.setSource(14782U);
    msg.setSourceEntity(31U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(237U);
    msg.frameid = 87U;
    const char tmp_msg_0[] = {-121, 91, 22, 47, -104, 74, 124, 79, 35, 92, -17, -22, -85, 112, -62, -125, -6, 106, 7, 17, -96, 25, 68, -47, 20, 109, -57, -88, 46, 96, -31, 47, 32, 112, -64, -33, 87, 90, 27, -25, -87, 96, -41, 68, 30, 58, 70, -42, -8, 15, -98, 48, 66, -85, -113, 26, 3, -53, 124, 62, -38, 123, 91, 18, -42, -19, -47, 42, -7, -33, -25, 39, -1, -102, -1, -64, 20, 119, 102, -96, 88, 39, -74, -45, -4, -108, -90, -92, -64, -90, 51, -32, -43, -110, -74, 27, -79, -70, -22, 4, -30, 104, -96, -116, -19, -62, -63, 70, -85, 121, -1, -6, -50, -106, 16, 103, -88, 91, -109, 47, 44, 122, -118, 33, -126, -23, -83, 34, -127, -93, -38, 1, 16, -74, 93, 80, -63, -107, -108, 27, -101, 68, 49, -91, -115, 33, -117, -76, 12, -84, 108, 31, 92, -15, -81, -48, 70, 103, -51, -51, 58, -38, -10, 8, 54, 15, -78, 65, 78, 120, 9, 28};
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
    msg.setTimeStamp(0.42785503193);
    msg.setSource(1538U);
    msg.setSourceEntity(230U);
    msg.setDestination(61661U);
    msg.setDestinationEntity(128U);
    msg.fps = 127U;
    msg.quality = 183U;
    msg.reps = 18U;
    msg.tsize = 239U;

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
    msg.setTimeStamp(0.711188964363);
    msg.setSource(29535U);
    msg.setSourceEntity(151U);
    msg.setDestination(31754U);
    msg.setDestinationEntity(11U);
    msg.fps = 239U;
    msg.quality = 213U;
    msg.reps = 74U;
    msg.tsize = 198U;

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
    msg.setTimeStamp(0.394692687174);
    msg.setSource(31193U);
    msg.setSourceEntity(238U);
    msg.setDestination(41995U);
    msg.setDestinationEntity(230U);
    msg.fps = 197U;
    msg.quality = 38U;
    msg.reps = 35U;
    msg.tsize = 161U;

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
    msg.setTimeStamp(0.551075928866);
    msg.setSource(39251U);
    msg.setSourceEntity(200U);
    msg.setDestination(35317U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.787802231468;
    msg.lon = 0.518689770972;
    msg.depth = 4U;
    msg.speed = 0.639502671684;
    msg.psi = 0.561347481483;

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
    msg.setTimeStamp(0.430051313468);
    msg.setSource(2496U);
    msg.setSourceEntity(4U);
    msg.setDestination(49268U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.98278735725;
    msg.lon = 0.295154397672;
    msg.depth = 96U;
    msg.speed = 0.635320820313;
    msg.psi = 0.606062594527;

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
    msg.setTimeStamp(0.705561931949);
    msg.setSource(50644U);
    msg.setSourceEntity(13U);
    msg.setDestination(61954U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.407501170547;
    msg.lon = 0.71154087815;
    msg.depth = 10U;
    msg.speed = 0.361624164528;
    msg.psi = 0.39567293491;

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
    msg.setTimeStamp(0.392478570364);
    msg.setSource(6482U);
    msg.setSourceEntity(51U);
    msg.setDestination(21381U);
    msg.setDestinationEntity(208U);
    msg.label.assign("XHAYAAJSDTGYUSIVDQRDHQSUBOOKFWNUTNPLCFPVYXOVZKVRVIGWRIJXQHOZTYUJIC");
    msg.lat = 0.909462204664;
    msg.lon = 0.0449106346569;
    msg.z = 0.437488980209;
    msg.z_units = 104U;
    msg.cog = 0.267726467555;
    msg.sog = 0.14740113441;

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
    msg.setTimeStamp(0.482076127938);
    msg.setSource(46692U);
    msg.setSourceEntity(74U);
    msg.setDestination(20843U);
    msg.setDestinationEntity(91U);
    msg.label.assign("WBODIUPMXEKZZJYUYVMZXONMNZHMSNSGKHBQYQPDUWJLOAVDDHHICQVWLXPESTKOQRZVLGRPQFDIBGDCYWMLRF");
    msg.lat = 0.545402249296;
    msg.lon = 0.0422823160196;
    msg.z = 0.841125242101;
    msg.z_units = 42U;
    msg.cog = 0.278718698624;
    msg.sog = 0.806158407307;

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
    msg.setTimeStamp(0.53476154719);
    msg.setSource(11322U);
    msg.setSourceEntity(224U);
    msg.setDestination(4481U);
    msg.setDestinationEntity(6U);
    msg.label.assign("QBBUTMGZAIVZPIQPWRCSSQFICCQASJUOOHQKFILECTWMJMRNKOWXZJZVGDVKMLQQSLLXJVXVXOWFENAUOMKPEBUADXCAEXNSKYVPYCKPMYYTTSCKNUBUDLBFEFARRRLOLSHDAGHOOGWDQHBEDIZCZGSGWTTAFINFPBXRTZKAETZPBPJWJGRYPEALQJ");
    msg.lat = 0.371232377374;
    msg.lon = 0.105150983658;
    msg.z = 0.808284088827;
    msg.z_units = 2U;
    msg.cog = 0.515695331237;
    msg.sog = 0.65621767137;

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
    msg.setTimeStamp(0.148726794342);
    msg.setSource(416U);
    msg.setSourceEntity(169U);
    msg.setDestination(19363U);
    msg.setDestinationEntity(53U);
    msg.name.assign("TDUBWHPLKPVLLUCGWUDYOMAOOINNIHJURJZIBUYYAQFEWLBJHIMGRQMCOJDCBLTMQSUGIJFRHVQPZPBVFRXMNAOTWGICUSCFBWFMVPHNZDKJMQIRAAEVEPYBGYUOMZJXXSGQHXPAOCNWUXFPGEOKLLYGYTMWEMRAZBOEYTSRDGIVWGCCNFSKHEZQVHKKWVLTVYJEJRQLFAFLSRXNNYTZDTAXTKKNCHIXDCZJVEZKBZUXOATHS");
    msg.value.assign("VUDVTEDJVRHAGMAWMNVOCLOXJGNAPEKSKEVVIZTRLMG");

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
    msg.setTimeStamp(0.729251191771);
    msg.setSource(55780U);
    msg.setSourceEntity(202U);
    msg.setDestination(57893U);
    msg.setDestinationEntity(227U);
    msg.name.assign("XLANRIBZEFNNVKZGKHKNSUUCZJKDGOJGFTKJNQNXWKRMPHKRDXFQTBBHMJGMVMTCXQZBVHTYOVIDBASGFKQRGRLYLZFPOIWJHPSBYDWLYCIDAGVDDEZWURXOELAVONUI");
    msg.value.assign("OPOCVXUAPGRWWKYQKRUGFQCTANSLIDDQRRYTJZNCQCOOEMSKKEIUOMJAFZCS");

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
    msg.setTimeStamp(0.389200776033);
    msg.setSource(37336U);
    msg.setSourceEntity(228U);
    msg.setDestination(29327U);
    msg.setDestinationEntity(227U);
    msg.name.assign("RWEBNOBFULGJLVPRNJRZRXWGOMXDECMFIZZUUYKWHPQZYRIIRAHANUFWWHEYMZPUIKCFVPFNBEEWIQMUTVQUXAKJDDHDGYIPGYZWFCAKFZIDYFVXBJAGCTQROBHO");
    msg.value.assign("MYNGKQSMYNHQRXZCKZISCVTTEZMRUTISVFDHGVUANDBAUPWANPVIJORVJQIDYAWJEDPCSIZXRWBTBSBUOXHPDYUZSOWQCXDTMPXOXLBZHBEXOEIZOHCKFFZIJNTGWMQNLARSERVCKQLJLNHBNRVWOJGMLFIQGYFXJGLMEIMUOFGMLKGFCAKUBTHKCFUYYENERYVPKUJPTQWRVPB");

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
    msg.setTimeStamp(0.831698302407);
    msg.setSource(32347U);
    msg.setSourceEntity(204U);
    msg.setDestination(42009U);
    msg.setDestinationEntity(101U);
    msg.name.assign("LGDOHTHJTQYBLOXRFQETXZZMJKWDEWEQAQRVAHFPYDOBURBSLVYCYKBXOFFLDWTGAIIALYOOQIELBZNNEJHULMNVPQCMFWTVPKJGNRKGMNPXJRNDOBBWKAPUXAXZCTGUNZRFCBUGXHFYYPVMIAJIZPSWGRCORVHMUVDDMNCSSTZPRKTPLHKDXRBAMHZFOXYVDIGZEMVBFWCUIHSMQQL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TOUDRTVBAQBKYCKJJCSFGIXCAIREIQUIDXHFGBEDCE");
    tmp_msg_0.value.assign("EYHHPLCMIQMGSINQVJHOTSEHNSGLO");
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
    msg.setTimeStamp(0.166642283681);
    msg.setSource(22611U);
    msg.setSourceEntity(236U);
    msg.setDestination(65047U);
    msg.setDestinationEntity(145U);
    msg.name.assign("XLWKCGQQMNSBNPUTCQRGJAMNYHKVPSVQDTPOJIJPDIJOHRUOMCMVBORGUYYOCESZAXEFRZRFA");

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
    msg.setTimeStamp(0.167715858751);
    msg.setSource(54432U);
    msg.setSourceEntity(151U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(187U);
    msg.name.assign("XNPCVIAJFPXGMQFEYOSIKFDLAHTXIRCPPKWABXLIZCAUKGBHIIZGGUMRCRTSURERUENFJAOIKOUDNXNVZQWHDUUGHVVJYVXZGYDETLYHVETLQNFWCACISH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FZRZMABJEDNKLQBNSMNTWORIYBPQXPGJHUDHWKPMPNXIVPDWUFPIODBTCIZQCQLAZTCVQXUXMOMCHVTCMOXLIDNUEAJGNYLFRKPQTIVJZYCMYYSSJGBHSVLMORJAXRSJWUUTSVSHOFACTRKYQLQKJEZKZA");
    tmp_msg_0.value.assign("KLAVSIIKMFQATEYLZAOBORVMJEZRQVDICHDCJMBEOQQNUFYXEGNTNSFTBLCNFZQWEOTVYVWNATOFIIOBGDGLWJIHGYUBQXMJTWYLAMKFCUSVZMXHRTXGUSFTFRLNUSERQBFOZVDXXJIJCNPARWMYUDCHIEAKJRKVEZDXURWXOZKTXHPSVOPNUDXBKJDUE");
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
    msg.setTimeStamp(0.477358931998);
    msg.setSource(59425U);
    msg.setSourceEntity(115U);
    msg.setDestination(16758U);
    msg.setDestinationEntity(88U);
    msg.name.assign("LDTAPPMMIFHZDRPHSYDFRHIBPMKVESPQCYXJBGBGUVQULGDYHWJJCNTFDMSKFEWUAQTUIQLKFHFFYGNABONYSWS");
    msg.visibility.assign("MBPILONTKWYZDBBRAGCJSMLCVNCXDUCJXPOFCBCIJEWVGDHFGGTLQEHMHYYECVKITDVPSWQPOYASSHEQXPTMNJZMLPPNWLIRHJAVXYMUTZWVMBNMLUVEQUARRRZBJFQIHUOXGQORLQBHRYOFBDVJRSKMJWNWQTTCTOKAFZFILIOWWOXNUPSFGDQFZUUVJPNSGK");
    msg.scope.assign("LWHOAJENLOXQJBHMHMGGVEXBGHTKRRJRDYEPFOPPKTWVYVHQIUFQVCSCVOTBJOEYDTAGZIJMNPTWEE");

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
    msg.setTimeStamp(0.426641343484);
    msg.setSource(48802U);
    msg.setSourceEntity(173U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(214U);
    msg.name.assign("CCFMBYWUUJSHPJCKKKQEVVGEPXTEPVUWHYAWZPAIOUFAMVWNPQHVKXRIBUUJPEQZEQILOBHYMXLFJAXKQSIERGNXHSHYKCJMFWKMRRCEUJXZZTLJIRLTYXNYZBEAXF");
    msg.visibility.assign("PRLNMAJNYRRCWPYOHHZCXLWUAHQTMVVXVUQQRUJVNTCFLGPWNQZM");
    msg.scope.assign("ZYVQFMXACAHXLPTCESPZIVQVXEIHXNEJMLUF");

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
    msg.setTimeStamp(0.360242523841);
    msg.setSource(54139U);
    msg.setSourceEntity(207U);
    msg.setDestination(52150U);
    msg.setDestinationEntity(73U);
    msg.name.assign("OAVCAAJKGVDVKGMZXOGJDIPTNTIBCLJSRWQQNOSLEGEELHCVJYAGZBCKYTKUIBZKMSAAYWPEMZUHXHWWDIXJUS");
    msg.visibility.assign("CCOFMSBDPRTJQUOMHWXVFKUHYGRDTGQASISBPHYGCMTWFGBEEQLWTUVWCMSXIXYEKMQICZQQNINBGKVTONHIZMZPIXCXREFGJABMATEZWUXKOUVUGBLAKPQWEHCNPSALASGMDIHFAYPXEYIKKNWTFOONHRZBZNXUHRHKCTYFXLWIZDBSMUPW");
    msg.scope.assign("FHZHCNLCFZBIYKZROAPKDILRAEDDYJKKYBCXQSGJGCGTEUMTULSPSMOODEMBWIPCDGTBXYJVYTSGPQPZKUEAOIOXPWTHXUDGERCARWVRCQHBEMLBTHZLFLMIBZNNUIVWLSOSKVWBWNMJQFUFYQGEVJRWJNXUGNRHEIUAWJSZPXVXDVVAGINJTVDRFFNURYKOHUJBPECOEQIBYFQMMWQRYVPNISDHHFTKTYLQGWLXHQCXCMPAZSAKTJON");

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
    msg.setTimeStamp(0.141884013087);
    msg.setSource(14800U);
    msg.setSourceEntity(13U);
    msg.setDestination(57166U);
    msg.setDestinationEntity(165U);
    msg.name.assign("OSJWXNHFNEFROMVDOAOADHDVPMLSLPQMSGZIBLZYWINRMEQTDEUEJKYVJWZBDCKRTBSVFQSIBUFRNGUXWLOASNUJCTYEIEIZTQMQFXPNEWKMYXGJAOZMHMPPFGUMLWQBQNIVBUSCDZKBTRTJTVAEHFNCWPYODROUJWBLQJPXFXZCWXRLRGFQRUAYDKKTEYUSJNGKXNCBAKZPHGIKYMAHUZGFHOTLHHZCPVVDREASPLGKGCYOIIBHXV");

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
    msg.setTimeStamp(0.096966978639);
    msg.setSource(46853U);
    msg.setSourceEntity(103U);
    msg.setDestination(44156U);
    msg.setDestinationEntity(165U);
    msg.name.assign("UAPLWOPAKTSJQMFSJUQKIUYIDCWOHCGNQYSYMVBKEFMKCLBXSNCGWQZPZGPS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SOUYEPINCJPOFRCMOANETOWASBVTSVCUMLHSVTIRTRCJWKGVVQAAEPJGRMXLEBLIFKNZSQJJGLYBXTMSWIZTXTOKROORFBIBALDYYPTJKUKNNQOGJDJEXGUHDFHKSMNYDYTCUXBL");
    tmp_msg_0.value.assign("AQNQVTXQQPYVYRZQLFJCBLJVRLHJMALKZAWSWPPHFRNGSRE");
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
    msg.setTimeStamp(0.86296217725);
    msg.setSource(45547U);
    msg.setSourceEntity(218U);
    msg.setDestination(25539U);
    msg.setDestinationEntity(15U);
    msg.name.assign("RCKMWYQEKWEKXPOSITYYFDFKSCRLNRGXVNDUYETJOAINFABWTIZLCHZCAFFQLTFLBLTECMATSYNLPMUGBDFHWQVWJNGOAJGBIEWIBCARVOPRVJOUXXDTEUNTAZBHKETHNHJBIQMLYQVUPHIDHQAELNKYSVDXCKREIPCOGZZXGZEZUFRPMABSJTKIQJWBXMQSYGUPIWLDSHGJNJOULVPONRGGFW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SDFGOJKLPZHSITINTBSGKDEYDCOBTPLRVUZBDUKQSUXQSEWTENIWLSIVXXZQRKDOWBVAMXAMOBZVLYENBSFOHGQJTGPAFLAOLAXEJBJYIRXZTQBNGCUHQHNONCWGSFQKMIHVQHATJRDAVNKIU");
    tmp_msg_0.value.assign("QSJHAVCNALMUZZDIVHTXKUCNGSQSIHOPHUNPBUWKCLBIZSTSJQOMNERYFOBTMJFCRZLJUPKHZAAGERELUQBYOFLGQXGXGDLXCKDWWITXTAFSYSXDOVARMCSJAPRIEEKHAZYWNIKQWAZHXLTPSAHKWPUHDNLEFCKJMTHBVBCMTQVQVWFQIDPDTWFNNKGVNXMBIZRDV");
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
    msg.setTimeStamp(0.118248542223);
    msg.setSource(44082U);
    msg.setSourceEntity(183U);
    msg.setDestination(57067U);
    msg.setDestinationEntity(131U);
    msg.name.assign("SKYWTWOLIOEMMYFWBYZQKEMUODDVYOAPXTIGDEZTUJCCWNCNFIBPLKUKHWGHQJYDPKLBHQLAMUZTHWQGRNTNJXYNKVGODYOGDSLVPRVRCHPLXXAKJJDKGCZSUIFGWQGNCVIRSRFEZRVNXLXHULATJCHHOFPUJUWEBPQSMFLQBRBACIRVAZESWJXIQYIRYMHTSMYABXX");

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
    msg.setTimeStamp(0.818497721507);
    msg.setSource(50703U);
    msg.setSourceEntity(5U);
    msg.setDestination(44052U);
    msg.setDestinationEntity(42U);
    msg.name.assign("KHSMGIFAVHSPDUFWIUJEWGWCQMADQDFVGOFBEFPRSWHSUPSBLEYELRTYTOLUGXOEUNEHTORGMRNUOZURVKPAUJLBRRNJTWJJMVERACTQZONZDFPSXXDCYLXIQNIAKFELBIXDHGCZQWTNPMLEXOZMTYQWWHHNV");

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
    msg.setTimeStamp(0.549580259157);
    msg.setSource(56807U);
    msg.setSourceEntity(186U);
    msg.setDestination(38886U);
    msg.setDestinationEntity(23U);
    msg.name.assign("VTWDSHZSWRGATVSVDFRVCIJXENMORISZWZWYBPDJYPFZZELULNZNCCBTOWKATFXIAGUHMMQFNCKFIVNMKBIYFOTHRNJUMPTEDJQQYAUDPXJEGKOXRJHYIRUEWIOMDHLKYSIZOVGHCKLOPPKPYGTFCRCBPAHGXWIJVSDNJXEOEUQLJALVHKXFB");

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
    msg.setTimeStamp(0.634602955861);
    msg.setSource(61887U);
    msg.setSourceEntity(92U);
    msg.setDestination(42529U);
    msg.setDestinationEntity(237U);
    msg.timeout = 2514457931U;

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
    msg.setTimeStamp(0.224545225324);
    msg.setSource(457U);
    msg.setSourceEntity(164U);
    msg.setDestination(37719U);
    msg.setDestinationEntity(136U);
    msg.timeout = 4108120600U;

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
    msg.setTimeStamp(0.60069423696);
    msg.setSource(22839U);
    msg.setSourceEntity(195U);
    msg.setDestination(36537U);
    msg.setDestinationEntity(105U);
    msg.timeout = 2202466749U;

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
    msg.setTimeStamp(0.491170917417);
    msg.setSource(15382U);
    msg.setSourceEntity(127U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(129U);
    msg.sessid = 1339186793U;

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
    msg.setTimeStamp(0.911124841158);
    msg.setSource(54664U);
    msg.setSourceEntity(97U);
    msg.setDestination(22889U);
    msg.setDestinationEntity(141U);
    msg.sessid = 3513697098U;

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
    msg.setTimeStamp(0.718941592361);
    msg.setSource(21717U);
    msg.setSourceEntity(34U);
    msg.setDestination(7010U);
    msg.setDestinationEntity(24U);
    msg.sessid = 1390803481U;

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
    msg.setTimeStamp(0.00180088743601);
    msg.setSource(27745U);
    msg.setSourceEntity(67U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(187U);
    msg.sessid = 1541167483U;
    msg.messages.assign("SQKTILFWZOQAGIHYZYPDBQLLEWKCBWXMSLCOAKBUSRIKJHIVMZJEWXVZDMCOPJOLBTRQZOFIMWIEFUKTSVXOEJBGQDDUYAMJRZKXEPRUUSIU");

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
    msg.setTimeStamp(0.608161499931);
    msg.setSource(32377U);
    msg.setSourceEntity(105U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(173U);
    msg.sessid = 2869937091U;
    msg.messages.assign("ODIVTUEBDBYSNPCFYPSIJLIPZRQAVPDJHUJCTEEGVECIJGOHUXZZKSLJKDWTRBZEWHHDIYZCK");

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
    msg.setTimeStamp(0.523548774146);
    msg.setSource(39122U);
    msg.setSourceEntity(11U);
    msg.setDestination(7613U);
    msg.setDestinationEntity(61U);
    msg.sessid = 415418463U;
    msg.messages.assign("NWTCPACKMPVKZIHSEJXNZFIFKMGKLRDIYQBUNSHHQAMZGRABAJPDFCFSJYBPRMHAMDTMNJCWEORTYVLNANCGCJERFYRZXYHSPTZSKWYGZUYQQVLLRKPBOCXGKTQBYZTOWOKTUGSTBCJRFAILEZXMFNAXSLWWKNFMXFVEFETIKSRDJHJYNIBOPUWHDWOSGVGBXN");

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
    msg.setTimeStamp(0.155311972602);
    msg.setSource(36551U);
    msg.setSourceEntity(201U);
    msg.setDestination(53484U);
    msg.setDestinationEntity(232U);
    msg.sessid = 1111573789U;

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
    msg.setTimeStamp(0.408083491788);
    msg.setSource(38036U);
    msg.setSourceEntity(138U);
    msg.setDestination(64883U);
    msg.setDestinationEntity(241U);
    msg.sessid = 2212670323U;

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
    msg.setTimeStamp(0.0695403944078);
    msg.setSource(21426U);
    msg.setSourceEntity(207U);
    msg.setDestination(40456U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3223452298U;

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
    msg.setTimeStamp(0.408305398223);
    msg.setSource(6094U);
    msg.setSourceEntity(221U);
    msg.setDestination(20641U);
    msg.setDestinationEntity(88U);
    msg.sessid = 3937134404U;
    msg.status = 75U;

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
    msg.setTimeStamp(0.110391794951);
    msg.setSource(36507U);
    msg.setSourceEntity(201U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(106U);
    msg.sessid = 4176932947U;
    msg.status = 250U;

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
    msg.setTimeStamp(0.944107980229);
    msg.setSource(54765U);
    msg.setSourceEntity(143U);
    msg.setDestination(32783U);
    msg.setDestinationEntity(48U);
    msg.sessid = 3045676481U;
    msg.status = 237U;

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
    msg.setTimeStamp(0.942364221897);
    msg.setSource(33833U);
    msg.setSourceEntity(197U);
    msg.setDestination(62135U);
    msg.setDestinationEntity(38U);
    msg.name.assign("SFRZHEMNHXMUPLMOFNMHBYDZIAUDNPBBIJBSKHFHNGITCRAPTVBOIDSQMRANORWQZYUVFKJEEWWPKZEVYCELOVMUXGRGIBOHQOMFYAJRGDYSTPLCLAGNCZWYQUSPADZUXYVZKVEMPTLGOIVKXHBLXYRFKECMNJNFWEHINARATSOTVJJAUDIZSKQKWUXCSJGDJVQGJH");

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
    msg.setTimeStamp(0.24596462508);
    msg.setSource(61364U);
    msg.setSourceEntity(2U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(176U);
    msg.name.assign("IPECWNNTLXNQRTBUFYPXPWUFIZKAXZROIXOQXASWRKFXABCYGSHTTPEODNECLRMMBQEBIWZIQNPAZGENOZJMHDVFRUKQVBSTDLLPIWJOYCVADLSFBMJRGKMEZRKDTLHOTPCBHWFYOUVAFKCQCPEJQZFVG");

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
    msg.setTimeStamp(0.218871967569);
    msg.setSource(17716U);
    msg.setSourceEntity(81U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(196U);
    msg.name.assign("PRBOUAEJAIYVPPVPMDPAFQNILJERUHNVTVSMGLOAAFLNWXXFIATROIZCUGJZEZZEECUONRBCDSUGSSJWTBTEJJFGKZULZSFHRMYFQWGQVZDJSTDGFQVATNCRMPSDHXBNVXXMQXHLGNZVJGONIXRDWMPPNAXAVMRMKQKYJHGHBUJTCCKOIPCSLWFBKFUYIWWGKQUKHNDVDYKLCEXQYWZRLIWHYBZWSTMRLQKT");

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
    msg.setTimeStamp(0.333989280532);
    msg.setSource(16846U);
    msg.setSourceEntity(199U);
    msg.setDestination(16254U);
    msg.setDestinationEntity(3U);
    msg.name.assign("BSYNRKCNLFOSZWXPMBMELEOCLHRDQIOBZZQHUSYDZXEFWSRUTZZTLXIZCDVXFJELDGPJPKQXUBMDBHYVXLJUOPNPBRCYJQKGSZDLWMUJIYQSSUGXARUHEWMFVAFBNULLVOGJXQTKPIRICREMCKAWWRVHTPAG");

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
    msg.setTimeStamp(0.597659621778);
    msg.setSource(17508U);
    msg.setSourceEntity(159U);
    msg.setDestination(19175U);
    msg.setDestinationEntity(7U);
    msg.name.assign("BDIKRYYLPGGEPITKYMHYTSBGKJKVUBGLIHKDIQJWSOGOQBZRNPIDXUSJMDAYAKAPZZEHYBJFXKKRDERIQJIUKBZDXIRGTFAQUOHCACAQ");

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
    msg.setTimeStamp(0.351482146561);
    msg.setSource(12094U);
    msg.setSourceEntity(101U);
    msg.setDestination(53284U);
    msg.setDestinationEntity(59U);
    msg.name.assign("PFHIZTTQFNWAIAUVCKZDEPQSZTDNNLCMEAIGZPWQYWHKXXSPNVFYLNOQGBVALPMILTBBCEDZQBDLTMMTHYJOUURHZMUAGWASLYFKXHPVKGTKFZXOTOSEDFWWCGVWVNDGTFRIEAHRWNGX");

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
    msg.setTimeStamp(0.480075743327);
    msg.setSource(6461U);
    msg.setSourceEntity(229U);
    msg.setDestination(39974U);
    msg.setDestinationEntity(179U);
    msg.type = 245U;
    msg.error.assign("GKAHYPQZLROXFZAAPEKOOTNLSIGVBAGCMEYPFXCPYWGWRKSMBZDBCAUFSTLQSGCNDMUMBEJQTMDLJOKEQZNGERPFNXOOZFHQRRDWKJXVKSIOMVLLINWBORWMPSHHTELZCFQWVIAHWMYYFOSVSPUGACXZGRXKTJJUEROSYYJJHBCZHBFTQENVNVHXBDXTC");

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
    msg.setTimeStamp(0.483392076974);
    msg.setSource(38496U);
    msg.setSourceEntity(201U);
    msg.setDestination(22836U);
    msg.setDestinationEntity(104U);
    msg.type = 12U;
    msg.error.assign("DIZJIAJWQWZEIANZBEUGPYBXFSIOWSHEQBXJNFXHISWCOYFNICMYMKJTPRHGPCAUEDGQXGVGVPTVOTVJBEFHJLRSLRNQLRBAVXKSHULOTVSTAGETIJUDKMOHKJDWVBGKLLCMMWCSOLMNMQZGKUFVLJEZMRSU");

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
    msg.setTimeStamp(0.476862182529);
    msg.setSource(28760U);
    msg.setSourceEntity(51U);
    msg.setDestination(10118U);
    msg.setDestinationEntity(82U);
    msg.type = 231U;
    msg.error.assign("CUZWDYPZMESNIJAJNJIXSZLVYTYCCUQJOLHWACDUYTKSUYDFECXTNNGGDIQTJGEESGXDQNFXIAJLRVHTWHEDGNRZDCNPBJSXQZYPRZMSCRFUQOVSLKWBHEQEHMTETELRCDVAKYKIFPBAXCAFNGIEXPRLBAJRHHJLVFFQBOVIYBUHPLKRSGDTOHQVKGRIPZAVUIMIDR");

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
    msg.setTimeStamp(0.464535286027);
    msg.setSource(21815U);
    msg.setSourceEntity(198U);
    msg.setDestination(61362U);
    msg.setDestinationEntity(169U);
    msg.seq = 15989U;
    msg.sys_dst.assign("MVCNFETJKNREUWQDXBPXXOLLTBZLBVUWYTCKCTRZNRNPDYXFOLPAERMRHYMJPVHHDTEOSPYGGXINVJXQGFUQDYVUMFTVIVCSBEGHG");
    msg.flags = 75U;
    const char tmp_msg_0[] = {88, 12, -2, 110, -122, -46, -77, -122, 39, 108, 61, 69, 61, 32, 0, 104, -121, -121, 44, 84, -48, 41, -79, 68, 68, 76, 9, 61, 28, -108, -68, -45, -70, -45, -2, -25, -107, -10, 74, -12, 44, -15, 94, -31, -1, -25, 16, -81, 121, -94, -108, 71, -1, 44, -105, 56, -116, 6, -122, -89, 34, -88, -10, 80, -100, -57, -75, -31, -21, 88, -24, -57, -93, 23, -70, -66, 73, -72, -5, -42, 44, -40, -48, -109, -71, -83, -78, -101, 35, 8, 98, -67, 54, 121, 16, 6, 19, -26, 16, 74, 92, -110, -128, 11, 60, -72, -74, -126, 124, 118, 57, 26, 70, 7, 39, 111, -127, -45, -33, 125, 85, -70, -30, 106, -49, -117, 40, 108, -19, 96, -33};
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
    msg.setTimeStamp(0.441413072135);
    msg.setSource(28871U);
    msg.setSourceEntity(125U);
    msg.setDestination(3219U);
    msg.setDestinationEntity(109U);
    msg.seq = 20820U;
    msg.sys_dst.assign("QTRKJIRUQDEMFMKXTNCFHVIZXTFOWCQLUWSTYAGSQZITBIEPHFOBGVTONEKNPDEACHPJVKBZZAAAVJNBDHGVLPBGBKJBRAZUZMNYDBAQRFUGPCWVOYGDLIFJULLXOXVSJCUHMDVYQRKEUCXXANCIQKUSFKTHWALDUX");
    msg.flags = 249U;
    const char tmp_msg_0[] = {104, -82, -74, -2, 120, -35, 125, -123, -71, 28, 22, 92, -42, -25, 110, -77, -51, 48, 29, -64, -29, 73, 65, 71, -71, 70, -31, -8, -81, -62, -72, 126, 124, 76, -54, 85, 51, -7, 49, -127, -36, -115, 112, -14, 72, 38, -66, -57, -52, 36, -55, -31, -43, 18, -30, -94, -101, 45, 112, -82, -64, 51, -109, -73, 75, 61, -70, -61, -96, 68, 111, 46, 108, -18, 111, -124, -89, -28, -42, -81, -98, 96, 83, -1, -13, -78, -20, -101, -39, 124, -121, -62, 12, -117, 73, 75, 19, 64, -51, 79, -2, -73, -127, 123, -124, 72, -86, -12, -1, 118, 70, 31, 58, 79, 53, -78, -26, -27, 83, 64, -36, 8, -62, -92, 9, -9, -60, 41, 39, 86, 35, 52, -26, 22, 101, 89, 83, -18, 23, 94, -48, 37, 57, 111, 98, 93, -38, -127, 107, -111, 83, -47, 103, -99, -25, 45, 87, 75, 78, 36, -58, 72};
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
    msg.setTimeStamp(0.492122134459);
    msg.setSource(57002U);
    msg.setSourceEntity(214U);
    msg.setDestination(20469U);
    msg.setDestinationEntity(51U);
    msg.seq = 42677U;
    msg.sys_dst.assign("PAUYCOWFFHUZSQDGNLNFTDRIZDOTLRNWAAOBSEIKPGPJTNSIXQLVVLQOUTLWZGLPEADACHRMDKVFUVWBSUEOIXWELQ");
    msg.flags = 192U;
    const char tmp_msg_0[] = {92, 31, 15, 121, -118, 27, 99, -71, -126, 35, -18, 110, 62, 25, -110, -3, -89, 107, -96, 94, 15, -45, -1, 93, -19, -50, 95, -116, -28, -15, 41, -20, 23, -120, 111, 74, 74, -65, -60, -123, 31, -109, -61, -94, 92, 1, -45, -82, 68, 111, 41, -68, -46, -53, -88, -13, -28, -97, -103, 108, 78, 91, 56, 75, 122, 48, -111, 8, -87, 89, -3, -101, 70, -124, 20, -98, 5, -53, -16, -31, -125, -110, 78, -18, 80, 28, -121, 114, 110, 80, 72, -39, -37, -28, 65, -16, -82, 42, 71, -110, 87, -62, -85, 5, -78, 117, -14, 11, 13, 90, -105, 103, -6, 105, -15, 72, -33, 89, 41, 108, -11, 76, -84, -119, -11, 2, 28, 64, 0, -115, 66, 92, -84, 21, -70, -40, 74, 39};
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
    msg.setTimeStamp(0.901226263597);
    msg.setSource(31725U);
    msg.setSourceEntity(84U);
    msg.setDestination(37828U);
    msg.setDestinationEntity(10U);
    msg.sys_src.assign("SWCJZETJBNINQNYFVAEAHHSGGEJNHMQUWQIDMCMCHRILPHZGUPCXSJBLEPDAPDMVOHAIGUAVWLSFAZNEYVYOPLXVKLLWDMBKSQLPEQDDNWJHOQLXARYALTDRCTKUCCKOIHYRLUMUTKBGPNXUMIHIIOUZVSBPPGRTFVDHZOBWGFMOFEFYERXFWSSBXTNMZKUWXQWOZYUDKTJRMIFRCTEWCDJQZKBSNCJXQBEAGVTVIRSTGZXKYONPRYAQG");
    msg.sys_dst.assign("IUXOMRAKYERQJNKDDBDWIBQMMBAEMUKPCJGGIRKFQPVPEPAQCTMFZFHEYXZMQQKUFUZMNYVBZDCBEXTNWMCJNLPOFAYJKYFQPGINATESAPHZOGHXEAVWLAKIIHTSJAGUSIOTOCIBBTWNPRXLUXQSEVHRCLIHPILCU");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-80, -121, 66, 4, 106, -115, -106, -44, 91, 13, -85, 34, 118, 104, 17, 109, -127, 38, 90, -85, 20, 22, -68, -35, -56, -120, -64, -46, 88, -23, 33, 99, 66, 104, -71, -87, -48, -32, 85, 32, -58, -112, 123, -69, 75, -83, 6, 87, -63, -3, 7, 93, 73, 38, 65, 116, 94, 52, -25, -24, 67, 28, 33, -20, 18, -106, -68, 28, -105, 54, -15, 120, -120, -30, -50, -4, 34, 6, -28, -123, -75, -44, -85, 94, 42, -44, -44, -84, 64, 82, 50, -5, -78, 24, 83, 109, 95, 52, 6, 47, 14, 83, 24, 29, 120, 21, -128, -84, 114, 46, 80, 29, 70, -22, -106, -44, -29, 88, -55, -115, -25, -9, -111, 7, 106, 70, 122, 3, 85, 10, -51, -103, -59, 123, 77, 14, 80, 125, 90, -103, -71, 47, -109, -66, 46, 16, -29, -13, -106, -36, 79, -106, -19, -86, 36, 16, 69, -30, -60, 83, 70, -21, 37, 84, -90, 14, 85, -109, -95, 25, -47, -61, -124, 21, -96, -21, 50, 50, 13, -107, -24, -15, -14, -24, 60, 31, -97, -75, -43, -9, 114};
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
    msg.setTimeStamp(0.532119815061);
    msg.setSource(18356U);
    msg.setSourceEntity(18U);
    msg.setDestination(10448U);
    msg.setDestinationEntity(239U);
    msg.sys_src.assign("PSSQZCRRLTUXYAKWJVXYDXHWNGHTDTNBRALDZYCJQWDTWOXIEV");
    msg.sys_dst.assign("HWWZCFZRUCEIEVXYFPBQIROLRRKXCGHUXJALMWSMDNENPLRGCGDFDNURQFAVVOXLOZAVFIDFA");
    msg.flags = 112U;
    const char tmp_msg_0[] = {-57, 13, -92, 79, 57, -4, -55, 40, 22, -125, -123, 42, 72, 26, -103, 23, 35, -80, 47, 122, -4, -82, 9, 111, -62, -51, 12, -69, 88, 86, 92, -27, 73, -18, 80, 22, -56, 103, -121, -109, 67, -23, -111, -53, 94, 40, -51, 38, -107, 74, -115, -13, 78, -17, 41, 86, -60, -47, -12, 54, 100, 39, 98};
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
    msg.setTimeStamp(0.64740370885);
    msg.setSource(15155U);
    msg.setSourceEntity(106U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(91U);
    msg.sys_src.assign("PNHXWVAEYXTSSLQUXWWXEMLFZQZBWPCXBOPYFVOMCKLEKKFGSQZGSHCLICXYKMPHYDRPLRUHZZRIYAMEEXJFLNBWTYBNXACDDXDIQPUIRVTBFEJNOWGIQFRBNUSATOPJDVKKOHQTNKSERMRLUZUXGEASJZ");
    msg.sys_dst.assign("SMLWLQRVHPPFIDLODNUSDWEVEKVMZMZGVNRYXJZPJKLNPAFBKITEFIBZRBDEJOZUWWRXUSHXHNXTCHPAQDRSBROVSTKCLCSDIGHYXUHAYBSOMTBLUIWQMPPRRNZCQUHUTGXO");
    msg.flags = 165U;
    const char tmp_msg_0[] = {62, 62, 58, -122, 12, -67, 51, -10, 98, -84, 97};
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
    msg.setTimeStamp(0.51905278104);
    msg.setSource(15501U);
    msg.setSourceEntity(243U);
    msg.setDestination(29222U);
    msg.setDestinationEntity(215U);
    msg.seq = 62784U;
    msg.value = 181U;
    msg.error.assign("DIPPNYTGYQASDZKKOIGKBOGLVKVJNQSZMYCAADCROQ");

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
    msg.setTimeStamp(0.274612434781);
    msg.setSource(64252U);
    msg.setSourceEntity(184U);
    msg.setDestination(38984U);
    msg.setDestinationEntity(164U);
    msg.seq = 42883U;
    msg.value = 97U;
    msg.error.assign("PBHYSVKZLMYUAWMKAWAXEQGSKFIKVYDXRUXLSYJOBYQNCYGIOFSDBTLZCDPOHSCOULZBMKWMEQXTQGGADNCLWYWPQSBHONCFCEKAMFRVIRQAVIIEXDGDOEPLBSEZFBRVIXHRIXJCHJQPNJFJHJPPNZFQTFCUUVIKGWJGZVUFMGXNVJNKCQTHMORKGZWEZABVHPJEONSUQLPKEYTTOTSHM");

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
    msg.setTimeStamp(0.978516566249);
    msg.setSource(37698U);
    msg.setSourceEntity(183U);
    msg.setDestination(61835U);
    msg.setDestinationEntity(76U);
    msg.seq = 55830U;
    msg.value = 57U;
    msg.error.assign("NLWPURPGINAXCTIPYLYUTTFNWVLOLSDCVLMZZDUXGKGSUASGECJNJRDZDTEUDAVJYDTNVYKIBGEMOQGKADASRMQHBEPQJBZZMCAYBFELWRFEOXJVNBVHTIXCKKYSXJRVCROBPEFAHUEMLIAIWUSEGQHRSKF");

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
    msg.setTimeStamp(0.740944813689);
    msg.setSource(7418U);
    msg.setSourceEntity(186U);
    msg.setDestination(52788U);
    msg.setDestinationEntity(182U);
    msg.seq = 44655U;
    msg.sys.assign("NHVKBUSKTPDAPMJTWFWEOYYPGEVXDOSTKJRYZAIILOGAZQQNHHXRFLPI");
    msg.value = 0.551070848021;

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
    msg.setTimeStamp(0.780810291043);
    msg.setSource(15156U);
    msg.setSourceEntity(213U);
    msg.setDestination(29288U);
    msg.setDestinationEntity(235U);
    msg.seq = 37869U;
    msg.sys.assign("UMONKPJZQSHWVVVOSOZAPVEEAXOFGJTSNHGWIEPJDUACQZZNBZIEFKLPNBYROIAU");
    msg.value = 0.171715623246;

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
    msg.setTimeStamp(0.311282746259);
    msg.setSource(14907U);
    msg.setSourceEntity(248U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(31U);
    msg.seq = 15650U;
    msg.sys.assign("SEOVFAQMERCHLNCTADCTFSYFXOZUDBKCHZJIMA");
    msg.value = 0.180417631727;

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
    msg.setTimeStamp(0.0326598534057);
    msg.setSource(57380U);
    msg.setSourceEntity(219U);
    msg.setDestination(21557U);
    msg.setDestinationEntity(96U);
    msg.action = 196U;
    msg.longain = 0.197397346923;
    msg.latgain = 0.458710519102;
    msg.bondthick = 1638822997U;
    msg.leadgain = 0.49962217693;
    msg.deconflgain = 0.943375083419;

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
    msg.setTimeStamp(0.143265806414);
    msg.setSource(36492U);
    msg.setSourceEntity(202U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(171U);
    msg.action = 172U;
    msg.longain = 0.057279704999;
    msg.latgain = 0.659776136096;
    msg.bondthick = 2395094084U;
    msg.leadgain = 0.409325642274;
    msg.deconflgain = 0.606616109914;

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
    msg.setTimeStamp(0.113441338829);
    msg.setSource(13643U);
    msg.setSourceEntity(195U);
    msg.setDestination(7964U);
    msg.setDestinationEntity(107U);
    msg.action = 242U;
    msg.longain = 0.372720914176;
    msg.latgain = 0.581286365019;
    msg.bondthick = 3440257832U;
    msg.leadgain = 0.574022076009;
    msg.deconflgain = 0.847880747063;

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
    msg.setTimeStamp(0.440409369576);
    msg.setSource(49477U);
    msg.setSourceEntity(64U);
    msg.setDestination(34704U);
    msg.setDestinationEntity(129U);
    msg.err_mean = 0.479206153628;
    msg.dist_min_abs = 0.657284253993;
    msg.dist_min_mean = 0.863889443938;

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
    msg.setTimeStamp(0.204884497814);
    msg.setSource(15067U);
    msg.setSourceEntity(104U);
    msg.setDestination(7276U);
    msg.setDestinationEntity(197U);
    msg.err_mean = 0.792382399606;
    msg.dist_min_abs = 0.0511782217723;
    msg.dist_min_mean = 0.374052638883;

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
    msg.setTimeStamp(0.631930698363);
    msg.setSource(36940U);
    msg.setSourceEntity(123U);
    msg.setDestination(26932U);
    msg.setDestinationEntity(108U);
    msg.err_mean = 0.832019248421;
    msg.dist_min_abs = 0.805710903545;
    msg.dist_min_mean = 0.460592408822;

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
    msg.setTimeStamp(0.278033624954);
    msg.setSource(35073U);
    msg.setSourceEntity(192U);
    msg.setDestination(8036U);
    msg.setDestinationEntity(153U);
    msg.action = 1U;
    msg.lon_gain = 0.382496369976;
    msg.lat_gain = 0.822432318031;
    msg.bond_thick = 0.998534125205;
    msg.lead_gain = 0.91629948687;
    msg.deconfl_gain = 0.891336363925;
    msg.accel_switch_gain = 0.443275506104;
    msg.safe_dist = 0.767719522093;
    msg.deconflict_offset = 0.804927100933;
    msg.accel_safe_margin = 0.470144001836;
    msg.accel_lim_x = 0.248053959917;

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
    msg.setTimeStamp(0.0450541192591);
    msg.setSource(55353U);
    msg.setSourceEntity(106U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(230U);
    msg.action = 209U;
    msg.lon_gain = 0.303947635393;
    msg.lat_gain = 0.627869774768;
    msg.bond_thick = 0.0195683131537;
    msg.lead_gain = 0.977906960305;
    msg.deconfl_gain = 0.192600332941;
    msg.accel_switch_gain = 0.289119428598;
    msg.safe_dist = 0.965450794406;
    msg.deconflict_offset = 0.38031612723;
    msg.accel_safe_margin = 0.220584497689;
    msg.accel_lim_x = 0.965807218167;

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
    msg.setTimeStamp(0.542314973893);
    msg.setSource(61477U);
    msg.setSourceEntity(181U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(36U);
    msg.action = 164U;
    msg.lon_gain = 0.790041143121;
    msg.lat_gain = 0.573845769665;
    msg.bond_thick = 0.273215071837;
    msg.lead_gain = 0.78206755214;
    msg.deconfl_gain = 0.459316632507;
    msg.accel_switch_gain = 0.0101189525057;
    msg.safe_dist = 0.46872055052;
    msg.deconflict_offset = 0.0819749892043;
    msg.accel_safe_margin = 0.40135918774;
    msg.accel_lim_x = 0.685847461383;

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
    msg.setTimeStamp(0.44953739357);
    msg.setSource(46199U);
    msg.setSourceEntity(74U);
    msg.setDestination(1366U);
    msg.setDestinationEntity(98U);
    msg.type = 211U;
    msg.op = 95U;
    msg.err_mean = 0.340917349816;
    msg.dist_min_abs = 0.271436831976;
    msg.dist_min_mean = 0.557084224015;
    msg.roll_rate_mean = 0.906876467343;
    msg.time = 0.576758965238;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 134U;
    tmp_msg_0.lon_gain = 0.890101717285;
    tmp_msg_0.lat_gain = 0.587076440122;
    tmp_msg_0.bond_thick = 0.659117587958;
    tmp_msg_0.lead_gain = 0.767521989666;
    tmp_msg_0.deconfl_gain = 0.0313223414661;
    tmp_msg_0.accel_switch_gain = 0.216887046534;
    tmp_msg_0.safe_dist = 0.716310837715;
    tmp_msg_0.deconflict_offset = 0.880353668082;
    tmp_msg_0.accel_safe_margin = 0.148158138721;
    tmp_msg_0.accel_lim_x = 0.778248562926;
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
    msg.setTimeStamp(0.210184897813);
    msg.setSource(37162U);
    msg.setSourceEntity(133U);
    msg.setDestination(22945U);
    msg.setDestinationEntity(240U);
    msg.type = 253U;
    msg.op = 128U;
    msg.err_mean = 0.172050772985;
    msg.dist_min_abs = 0.883993496058;
    msg.dist_min_mean = 0.179103097381;
    msg.roll_rate_mean = 0.328030455451;
    msg.time = 0.640956786098;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 98U;
    tmp_msg_0.lon_gain = 0.853687107894;
    tmp_msg_0.lat_gain = 0.328928995491;
    tmp_msg_0.bond_thick = 0.448994769791;
    tmp_msg_0.lead_gain = 0.526075209162;
    tmp_msg_0.deconfl_gain = 0.576762987131;
    tmp_msg_0.accel_switch_gain = 0.354319102122;
    tmp_msg_0.safe_dist = 0.604934124138;
    tmp_msg_0.deconflict_offset = 0.660869542621;
    tmp_msg_0.accel_safe_margin = 0.73941519951;
    tmp_msg_0.accel_lim_x = 0.368121755939;
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
    msg.setTimeStamp(0.077986345791);
    msg.setSource(18552U);
    msg.setSourceEntity(91U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(113U);
    msg.type = 235U;
    msg.op = 162U;
    msg.err_mean = 0.528547628798;
    msg.dist_min_abs = 0.246262262846;
    msg.dist_min_mean = 0.554141213809;
    msg.roll_rate_mean = 0.439512682836;
    msg.time = 0.26715135435;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 163U;
    tmp_msg_0.lon_gain = 0.48515631532;
    tmp_msg_0.lat_gain = 0.616075862419;
    tmp_msg_0.bond_thick = 0.299458907658;
    tmp_msg_0.lead_gain = 0.988724514243;
    tmp_msg_0.deconfl_gain = 0.768212855765;
    tmp_msg_0.accel_switch_gain = 0.0979471423439;
    tmp_msg_0.safe_dist = 0.428888272275;
    tmp_msg_0.deconflict_offset = 0.46317981038;
    tmp_msg_0.accel_safe_margin = 0.61322108676;
    tmp_msg_0.accel_lim_x = 0.776567733618;
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
    msg.setTimeStamp(0.915172690706);
    msg.setSource(49441U);
    msg.setSourceEntity(251U);
    msg.setDestination(34589U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.838163402603;
    msg.lon = 0.426965758366;
    msg.eta = 1421398252U;
    msg.duration = 61789U;

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
    msg.setTimeStamp(0.665992987892);
    msg.setSource(45242U);
    msg.setSourceEntity(139U);
    msg.setDestination(62131U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.858062488815;
    msg.lon = 0.903453699387;
    msg.eta = 761461638U;
    msg.duration = 2825U;

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
    msg.setTimeStamp(0.749183420796);
    msg.setSource(19605U);
    msg.setSourceEntity(246U);
    msg.setDestination(26588U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.246088256151;
    msg.lon = 0.152953583298;
    msg.eta = 297970004U;
    msg.duration = 10378U;

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
    msg.setTimeStamp(0.115064214917);
    msg.setSource(2867U);
    msg.setSourceEntity(88U);
    msg.setDestination(24968U);
    msg.setDestinationEntity(130U);
    msg.plan_id = 48876U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0859942817794;
    tmp_msg_0.lon = 0.771098106512;
    tmp_msg_0.eta = 1511029939U;
    tmp_msg_0.duration = 10003U;
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
    msg.setTimeStamp(0.438985778801);
    msg.setSource(29178U);
    msg.setSourceEntity(69U);
    msg.setDestination(31527U);
    msg.setDestinationEntity(41U);
    msg.plan_id = 46213U;

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
    msg.setTimeStamp(0.272271656885);
    msg.setSource(19789U);
    msg.setSourceEntity(195U);
    msg.setDestination(44928U);
    msg.setDestinationEntity(234U);
    msg.plan_id = 33090U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.673329621209;
    tmp_msg_0.lon = 0.58027136168;
    tmp_msg_0.eta = 3575577568U;
    tmp_msg_0.duration = 16433U;
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
    msg.setTimeStamp(0.644648301886);
    msg.setSource(13924U);
    msg.setSourceEntity(86U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(36U);
    msg.type = 163U;
    msg.command = 79U;
    msg.settings.assign("YUNBREWSUWWBUYYEIALMZWDYYFUVWMGQFPIOOWVQJOGPAQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 33120U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.00813685133136;
    tmp_tmp_msg_0_0.lon = 0.148613043684;
    tmp_tmp_msg_0_0.eta = 1742711374U;
    tmp_tmp_msg_0_0.duration = 46348U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("RJZAOCSPXQBQIHJLRXMLTTYZBKQDZPVSIRQAGNDFWGKSJTOWPVHULXADOBBFOIUXZJHSYNUWKYYVUTWBOYGLWFLZTAQOLAHELXCZJVKOVOWNPFSPKQGRYUCJYPJBYKYXPAWSKHIXHDAIRMAFEIWPCFPZHJDMXCRMDSTMLZAIEFTDQWCSHNRMHJDZIEERFKTWUNCSEXMZBCCTMVVGRFGBHMLVGEDRLKINOPQUQFNBCEMGJUBVI");

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
    msg.setTimeStamp(0.446462123403);
    msg.setSource(1150U);
    msg.setSourceEntity(27U);
    msg.setDestination(41394U);
    msg.setDestinationEntity(91U);
    msg.type = 200U;
    msg.command = 48U;
    msg.settings.assign("TBZARKMLMNIEVCDPKSYUPQOVKRBWNGASPSOABBZZDORZENWCZDEHQXIYRPPYVTUQCIXGUGERQFDWUTRAJXPOFIBJKWLPKNCIVOFVYVJCXNTLNBAIDUGHZWLWVHOHICRMUMGORJFLDEOZWXTXOHBKDQNQEPVHQRFJKGAQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64854U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.328939400841;
    tmp_tmp_msg_0_0.lon = 0.317145110977;
    tmp_tmp_msg_0_0.eta = 299928000U;
    tmp_tmp_msg_0_0.duration = 52532U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("REHXFLHVAKTKDUNEGOFQQEWIPDVLDKRPNTKWMYWYYZXZYQLIRSDKRRQRHD");

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
    msg.setTimeStamp(0.262830467756);
    msg.setSource(7062U);
    msg.setSourceEntity(186U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(241U);
    msg.type = 209U;
    msg.command = 60U;
    msg.settings.assign("PZDQVMVUNRSPZCXBUAGWACJEEAKZMUMNJHJZVOUQYOVURRHLRTJVQIWASVVMSQPUWMASDLNCYFSUJQHDGWFAGSFHZKUEOQFIYGKOXFQZYSCGLORYUWNAMSTTIVTFFLIDTNBJZCMPUXGECRRWIRKCNEEJMQOKBPIKQH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53798U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.278660410485;
    tmp_tmp_msg_0_0.lon = 0.499860467024;
    tmp_tmp_msg_0_0.eta = 218028882U;
    tmp_tmp_msg_0_0.duration = 40769U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LFBAPGKSWQPNCJXRWIVDTAXRMCAXGJUHXHWYDHVJOBCDPMAQLWXMNPYVYWROJIUFQQBNCBQRJGEVOYGIVAUUCJLTJTMNGTAKQWTCMQDFOZJIZWWSFIOOPBPUZKMAKPLBZKZRRIBOUIGBFEUYYGXRFLTRSFLMKGCCYNSESVWHDSHMDE");

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
    msg.setTimeStamp(0.581401002271);
    msg.setSource(40780U);
    msg.setSourceEntity(137U);
    msg.setDestination(19034U);
    msg.setDestinationEntity(107U);
    msg.state = 201U;
    msg.plan_id = 15978U;
    msg.wpt_id = 90U;
    msg.settings_chk = 34279U;

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
    msg.setTimeStamp(0.849106454326);
    msg.setSource(25302U);
    msg.setSourceEntity(166U);
    msg.setDestination(6230U);
    msg.setDestinationEntity(10U);
    msg.state = 124U;
    msg.plan_id = 40629U;
    msg.wpt_id = 116U;
    msg.settings_chk = 36946U;

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
    msg.setTimeStamp(0.6964683325);
    msg.setSource(24226U);
    msg.setSourceEntity(247U);
    msg.setDestination(60559U);
    msg.setDestinationEntity(67U);
    msg.state = 122U;
    msg.plan_id = 23342U;
    msg.wpt_id = 32U;
    msg.settings_chk = 12328U;

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
    msg.setTimeStamp(0.263372413503);
    msg.setSource(43020U);
    msg.setSourceEntity(119U);
    msg.setDestination(12825U);
    msg.setDestinationEntity(238U);
    msg.uid = 96U;
    msg.frag_number = 207U;
    msg.num_frags = 92U;
    const char tmp_msg_0[] = {14, 47, -44, 40, 86, 81, -72, 61, -47, 115, -4, 8, -125, -118, -11, 69, -2, 96, 24, -73, -97, 78, 88, 80, -77, -119, -26, -14, -88, 112, -45, 121, 97, 52, 44, -29, -44, -119, 15, -92, -122, 30, 106, -102, 55, 82, -107, 71, -62, 106, -48, 22, 84, 47, 49, -62, -10, 91, -13, -65, 42, 99, 95, -62, -59, 109, -21, 84, -64, 63, 25, -98, 36, 60, 106, -58};
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
    msg.setTimeStamp(0.608015734648);
    msg.setSource(38794U);
    msg.setSourceEntity(182U);
    msg.setDestination(58300U);
    msg.setDestinationEntity(209U);
    msg.uid = 119U;
    msg.frag_number = 69U;
    msg.num_frags = 244U;
    const char tmp_msg_0[] = {-48, 39, -85, -115, -12, -18, 107, 109, 12, -90, 2, 125, 61, 113, -81, 74, 24, 46, -9, -65, -80, -55, 40, 125, 109, -40, 15, 69, -103, 70, -59, -59, -67, -119, 32, 103, 101, 85, -42, 102, -102, -3, -11, -76, 6, -11, -79, 83, -90, -99, -57, -116, -85, -8, -65, -26, -122, -45, 69, -12, 48, 6, 109, -73, 4, 110, -65, -20, -90, -122, -27, 2, 71, 114, 77, -43, -35, 74, -74, -117, -109, -1, 0, -76, 97, 104, 41, -63, 108, 37, -103, -54, 24, -78, 18, -94};
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
    msg.setTimeStamp(0.664737507312);
    msg.setSource(49953U);
    msg.setSourceEntity(171U);
    msg.setDestination(57467U);
    msg.setDestinationEntity(203U);
    msg.uid = 29U;
    msg.frag_number = 124U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {3, -75, 27, 108, 116, 52, 26, -92, 67, 112, 2, 5, -60, 1, -27, 84, 101, -106, -73, 91, 95, 4, -98, 69, 105, 48, -10, 78, 34, -86, -1, -78, 110, 90, -54, 80, 32, 40, -127, -39, 90, -6, 122};
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
    msg.setTimeStamp(0.199525277774);
    msg.setSource(64640U);
    msg.setSourceEntity(214U);
    msg.setDestination(23671U);
    msg.setDestinationEntity(125U);
    msg.content_type.assign("XJARDSQSZLBMBYGQKKLWGKHJXOEOUOMHTXUQSSOTIFKIJRJYFSZAGTDYRAXCEFVAHPPEZWZXWTCBNSQNESQIVDVICQPNFIKINPYFVTKBULRKXQODYHLQMFHZHUATGUHWLMWKZIGMNMGWXRWAZECXNKQV");
    const char tmp_msg_0[] = {83, 101, 23, 50, 67, -28, -74, -89, -125, 38, 69, 67, -98, 50, 18, 34, 109, 125, -126, 27, -50, -45, -6, 58, -95, 100, -110, 31, -50, -122, 103, -10, -58, 100, -91, -103, 48, -26, 103, -6};
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
    msg.setTimeStamp(0.642328009469);
    msg.setSource(786U);
    msg.setSourceEntity(82U);
    msg.setDestination(9094U);
    msg.setDestinationEntity(86U);
    msg.content_type.assign("VPQLVOCPJKMNSPAIBGQFNRZWYXENDERWSVILXXBYBNWKTFBKEDTDZDZUWBMBCRJBYYTYIVVHQJYZMQYXJHWHFQFK");
    const char tmp_msg_0[] = {6, -65, 63, 31, 104, -31, -105, -47, -104, 63, -75, -126, 76, 97, -7, -20, -62, 20, -36, 52, -16, 7, -56, 36, 79, 122, -28, 55};
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
    msg.setTimeStamp(0.672075725025);
    msg.setSource(49142U);
    msg.setSourceEntity(180U);
    msg.setDestination(63347U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("DKVNWUCAQZLHAOEWLUCIOMPOXQAHWHBTNYSCFMBAROKVZUYXKRDSEIRUUOCPZBFHXSGCKDASHALIEEGZMMRVYCWDJKJBXNGNXTQTFISBFAIBSGZNSPRNUQIVHNLMYNZGTWJUXSHDJEFXPEDSMHORMGQXJWYWFWVKQFMFRGLQOEJCFBARVIIPQOTNZITZYGLDJOTSCEXVHRTYTTWKBZPKGDD");
    const char tmp_msg_0[] = {-75, -65, 21, 121, 1, 90, -43, -73, -121, 6, -121, -60, -119, -53, -112, 51, -100, 85, -77, 100, 61, 47, 81, -123, -52, 31, -125, 109, -21, 122, -73, -21, 121, 42, -123, 106, -66, -51, -40, -15, 79, -7, 88, 15, -2, 117, 69, -109, 97, -80, 59, -110, 38, -99, 33, 103, 15, -40, -2, -34, 20, 30};
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
    msg.setTimeStamp(0.763338299624);
    msg.setSource(20660U);
    msg.setSourceEntity(33U);
    msg.setDestination(22999U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.30127450463);
    msg.setSource(9875U);
    msg.setSourceEntity(214U);
    msg.setDestination(14338U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.684804624102);
    msg.setSource(39201U);
    msg.setSourceEntity(133U);
    msg.setDestination(23883U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.77593569205);
    msg.setSource(24897U);
    msg.setSourceEntity(9U);
    msg.setDestination(61836U);
    msg.setDestinationEntity(177U);
    msg.target = 42798U;
    msg.bearing = 0.851239370681;
    msg.elevation = 0.212781280825;

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
    msg.setTimeStamp(0.124233179554);
    msg.setSource(4575U);
    msg.setSourceEntity(42U);
    msg.setDestination(37751U);
    msg.setDestinationEntity(75U);
    msg.target = 32173U;
    msg.bearing = 0.973723911089;
    msg.elevation = 0.503802184406;

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
    msg.setTimeStamp(0.791811876771);
    msg.setSource(3403U);
    msg.setSourceEntity(211U);
    msg.setDestination(1067U);
    msg.setDestinationEntity(143U);
    msg.target = 46465U;
    msg.bearing = 0.746223914471;
    msg.elevation = 0.13593254111;

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
    msg.setTimeStamp(0.323406357005);
    msg.setSource(49446U);
    msg.setSourceEntity(68U);
    msg.setDestination(41944U);
    msg.setDestinationEntity(189U);
    msg.target = 29638U;
    msg.x = 0.836554764975;
    msg.y = 0.610492896129;
    msg.z = 0.586752499026;

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
    msg.setTimeStamp(0.171732192972);
    msg.setSource(232U);
    msg.setSourceEntity(128U);
    msg.setDestination(23145U);
    msg.setDestinationEntity(2U);
    msg.target = 10325U;
    msg.x = 0.413406269751;
    msg.y = 0.87311316705;
    msg.z = 0.463829320123;

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
    msg.setTimeStamp(0.399676015195);
    msg.setSource(30972U);
    msg.setSourceEntity(247U);
    msg.setDestination(32048U);
    msg.setDestinationEntity(140U);
    msg.target = 20949U;
    msg.x = 0.199041783099;
    msg.y = 0.405415868172;
    msg.z = 0.000954446096286;

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
    msg.setTimeStamp(0.877960468473);
    msg.setSource(57362U);
    msg.setSourceEntity(156U);
    msg.setDestination(29910U);
    msg.setDestinationEntity(114U);
    msg.target = 39427U;
    msg.lat = 0.168668736973;
    msg.lon = 0.44289725215;
    msg.z_units = 5U;
    msg.z = 0.672908479045;

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
    msg.setTimeStamp(0.673342140221);
    msg.setSource(64308U);
    msg.setSourceEntity(69U);
    msg.setDestination(19491U);
    msg.setDestinationEntity(138U);
    msg.target = 51633U;
    msg.lat = 0.995286001163;
    msg.lon = 0.921018787528;
    msg.z_units = 10U;
    msg.z = 0.461424361358;

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
    msg.setTimeStamp(0.914902561891);
    msg.setSource(7405U);
    msg.setSourceEntity(130U);
    msg.setDestination(18139U);
    msg.setDestinationEntity(23U);
    msg.target = 35465U;
    msg.lat = 0.947016593207;
    msg.lon = 0.166354330503;
    msg.z_units = 215U;
    msg.z = 0.522443467559;

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
    msg.setTimeStamp(0.732847597365);
    msg.setSource(6013U);
    msg.setSourceEntity(237U);
    msg.setDestination(18594U);
    msg.setDestinationEntity(243U);
    msg.locale.assign("LTILSZMENBITLSZUQVGTACFTQAFRGTLPLLOHCSIQHXQUCPUGRCBEFNRVYXOKIGZGCNQSRHBAXSWZFUZHZGJVNYKYFRFDBMPEKOVFEWLPITKNEUWPRCEZDVBOMGIMBBDLJGVOPAPCRWICHJAWTYCGEPMWKWADKSKOUYQMZKMVTZNHAXOYONNUWPMZDHVUASXYYIIRXKSTENUQDDTQRDHYHEEQGX");
    const char tmp_msg_0[] = {-78, 109, 33, -7, 120, 49, -127, 76, 67, 76, -34, -90, -17, 7, -6, 18, 97, 52, 122, 57, 103, -48, 45, 96, 89, 9, 104, -106, -56, -57, -110, 89, 101, -25, -78, 81, 89, -106, 76, 62, 92, 114, 49, 14, 91, -5, -97, -14, 7, 91, 124, -8, 82, -22, -62, -100, -21, 5};
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
    msg.setTimeStamp(0.351896562789);
    msg.setSource(65301U);
    msg.setSourceEntity(161U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(188U);
    msg.locale.assign("NRENNUAYKIPYNQILKHCFXNNVAQGPPDKAQKFCHBGFZSXGPWTOCEPZZEXQKTTBJISOOUXMENCBQLPFMJUSDPTVAOGQLVDDHMCTFJZFUBXDSRDDUHRHJFKDHVGCEKWEWZTCAJGZMBMOVSRVKYWGZSHUQOXQBGGWGJOCAOVUWYICALFKEDQNYZNNEZBLRMSTVIAIYMPIXOKQFXJLEFRAUYXLTBMIJUSPMVYELRRYLBWHJISUHDROBIPHWRJWYL");
    const char tmp_msg_0[] = {-73, -80, 119, 33, -96, -85, 37, 80, -97, 29, 64, -15, -100, 125, -84, 81, 14, 45, -44, -9, -78, 83, -48, -81, 44, 119, -71, 120, 119, 75, 106, 9, 64, -23, 41, -34, -52, 59, -113, 7, -98, -45, 102, 65, 87, -36, -62, -96, -85, 94, -114, 6, -29, -74, 22, 48, -83, -84, 97, 39, -62, 10, 33, -110, -45, -54, -104, 118, 87, 65, 108, -6, -121, 118, 72, 5, -58, 125, -110, -77, -44, 53, 7, -89, 92, -44, 68, 14, -119, -117, 120, 71, 63, -22, 57, 50, 63, -94, 7, -107, 70, -76, 93, 30, -14, 35, -59, -19, 116, -117, -85, 48, 116, 69, 82, 16, 62, -128, -4, -76, 112};
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
    msg.setTimeStamp(0.887888845404);
    msg.setSource(59684U);
    msg.setSourceEntity(74U);
    msg.setDestination(23108U);
    msg.setDestinationEntity(245U);
    msg.locale.assign("HVYWOHFPPAQIKQFZRELB");
    const char tmp_msg_0[] = {-24, -126, 62, 2, 88, -28, 15, 28, -95, 84, 46, 120, 54, 44, -36, 120, -20, 91, -106, 98, 81, -28, -20, -125, -58, -74, -62, -100, 79, 31, 115, 120, 97, 88, -85, 49, -49, -50, -14, -50, -42, -29, -96, -37, 86, 93, -83, -115, 95, 82, -76, 90, -75, 116, -14, 97, -40, 115, -23, -64, 29, -2, 80, 4, -48, 126, -106, -31, -38, -59, 100, 78, 30, -62, -31, -114, -128, 27, 76, 120, 102, -88, -84, 86, 97, -103, -96, -108, 106, 97, 76, -100, -23, 21, 21, 33, -110, 0, 101, 75, 114, 52, -116, 96, -64, -77, 72, -122, 74, -2, 49, 55, 92, -107, -108, -9, 37, 59, 104, 92, -26, 16, 19, -32, 63, -93, 4, 116, 109, 79, 14, 81, 76, 27, 12, -101, -107, -45, -16, -105, 4, 9, -69, 109, -47, 92, 29, -93, -33, -20, -60, 98, 21, -59, -40, 115, 77, 1, -62, -116, 93, -96, 3, 13, -76, 55, -25, 1, -98, -70, 13, 82, 74, 80, -127, 24, 82, -74, -79, -96, 88, -61, 61, 18, -18, 13, 87, 61, 15, -14, -34, -87, -39, 70, 124, 88, -32, 21, -49};
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
    msg.setTimeStamp(0.84341013046);
    msg.setSource(24932U);
    msg.setSourceEntity(171U);
    msg.setDestination(29846U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.990809415928);
    msg.setSource(20417U);
    msg.setSourceEntity(152U);
    msg.setDestination(56924U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.944953889649);
    msg.setSource(27001U);
    msg.setSourceEntity(140U);
    msg.setDestination(38626U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.91121887307);
    msg.setSource(36502U);
    msg.setSourceEntity(58U);
    msg.setDestination(31092U);
    msg.setDestinationEntity(21U);
    msg.camid = 128U;
    msg.x = 53478U;
    msg.y = 61200U;

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
    msg.setTimeStamp(0.945299686478);
    msg.setSource(8419U);
    msg.setSourceEntity(92U);
    msg.setDestination(14889U);
    msg.setDestinationEntity(106U);
    msg.camid = 106U;
    msg.x = 34919U;
    msg.y = 35068U;

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
    msg.setTimeStamp(0.893970785397);
    msg.setSource(47331U);
    msg.setSourceEntity(249U);
    msg.setDestination(2772U);
    msg.setDestinationEntity(75U);
    msg.camid = 9U;
    msg.x = 23847U;
    msg.y = 45798U;

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
    msg.setTimeStamp(0.493522117311);
    msg.setSource(29109U);
    msg.setSourceEntity(123U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(60U);
    msg.camid = 185U;
    msg.x = 49841U;
    msg.y = 50913U;

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
    msg.setTimeStamp(0.621818725697);
    msg.setSource(42874U);
    msg.setSourceEntity(253U);
    msg.setDestination(11243U);
    msg.setDestinationEntity(100U);
    msg.camid = 82U;
    msg.x = 42019U;
    msg.y = 45297U;

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
    msg.setTimeStamp(0.37923195484);
    msg.setSource(49715U);
    msg.setSourceEntity(116U);
    msg.setDestination(58763U);
    msg.setDestinationEntity(51U);
    msg.camid = 167U;
    msg.x = 5896U;
    msg.y = 58807U;

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
    msg.setTimeStamp(0.0840375545407);
    msg.setSource(29857U);
    msg.setSourceEntity(18U);
    msg.setDestination(38560U);
    msg.setDestinationEntity(90U);
    msg.tracking = 103U;
    msg.lat = 0.624965625985;
    msg.lon = 0.775937139593;
    msg.x = 0.348331594341;
    msg.y = 0.131018599826;
    msg.z = 0.965846568787;

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
    msg.setTimeStamp(0.484038215984);
    msg.setSource(2182U);
    msg.setSourceEntity(11U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(172U);
    msg.tracking = 5U;
    msg.lat = 0.037346559361;
    msg.lon = 0.429691366186;
    msg.x = 0.796673682673;
    msg.y = 0.78571537334;
    msg.z = 0.524325336746;

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
    msg.setTimeStamp(0.554743756604);
    msg.setSource(40641U);
    msg.setSourceEntity(193U);
    msg.setDestination(44459U);
    msg.setDestinationEntity(142U);
    msg.tracking = 245U;
    msg.lat = 0.661673443435;
    msg.lon = 0.0260815087923;
    msg.x = 0.156916479685;
    msg.y = 0.896793993687;
    msg.z = 0.78617429569;

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
    msg.setTimeStamp(0.0850340395358);
    msg.setSource(29489U);
    msg.setSourceEntity(112U);
    msg.setDestination(7822U);
    msg.setDestinationEntity(12U);
    msg.target.assign("PWIKCETSMHREBNQTEKFMXVMCBZGQWENPJMMBGNHSIRVZSLAPKRJBYUDZLGPJGVULMOJKSFKEIFWUKKLPHBQQIFGZPNTRAWTEYNVQVWUAVBNGDGKZUVOGZCHHYIRQDHFMKXGMFYPHQAOJEXZTSAVSDLODIEHRJVEEXODJJILIUASWONYGYVYLDXCXWWTRWXBLWCHLFMBFUCIZPFCDTLTPNZSOBAJXXORIUUQZBKJANNOHAU");
    msg.lbearing = 0.491822032123;
    msg.lelevation = 0.507529112021;
    msg.bearing = 0.765255271565;
    msg.elevation = 0.570709013115;
    msg.phi = 0.968407477953;
    msg.theta = 0.909483134913;
    msg.psi = 0.552123821601;
    msg.accuracy = 0.0179323227083;

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
    msg.setTimeStamp(0.193932149477);
    msg.setSource(25759U);
    msg.setSourceEntity(180U);
    msg.setDestination(20083U);
    msg.setDestinationEntity(77U);
    msg.target.assign("PHBORRONBAKBXGWNSBQXRTKMMOUZO");
    msg.lbearing = 0.341796215879;
    msg.lelevation = 0.326280156379;
    msg.bearing = 0.0750644793177;
    msg.elevation = 0.00441562420581;
    msg.phi = 0.0392007561827;
    msg.theta = 0.418335062156;
    msg.psi = 0.957935665424;
    msg.accuracy = 0.868473057382;

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
    msg.setTimeStamp(0.318734899328);
    msg.setSource(15598U);
    msg.setSourceEntity(128U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(22U);
    msg.target.assign("HFABSXRQKRLBIYQUUHGWNDHYPTVADOMXYKFLTKHPOLPMLAXTARWSBLDUZNSCQVJNFIYBWSEOQEIVBVVZPRUCTNTXOQUNKPKYTWCHBPFLFZEESKGMEEQWNKRBLOBF");
    msg.lbearing = 0.881392994813;
    msg.lelevation = 0.577767104013;
    msg.bearing = 0.521516635158;
    msg.elevation = 0.211693237468;
    msg.phi = 0.631705040543;
    msg.theta = 0.661200678319;
    msg.psi = 0.790331719612;
    msg.accuracy = 0.215471916647;

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
    msg.setTimeStamp(0.0508414200565);
    msg.setSource(62979U);
    msg.setSourceEntity(227U);
    msg.setDestination(45717U);
    msg.setDestinationEntity(175U);
    msg.target.assign("CUVRPUVHAIUOWJJYJZICASJUSRXEEMQTVXEJAROQLTQQDAKKPFREFLDCVVFPLYEMHVGBYTJZWQZWYQGKXCUPAIKBHEPBFSFTXQTJPQKQOYGFNJGWPVYGIIUDLIBIKIASURDSVAMIWLKBTHZNFSQCHPFPMGVSBLETOFHWMTTOBCORRNKOYASWWZONCKNRNXMTDESNWKGHJOZABMGDNRCDXXXMGBO");
    msg.x = 0.677740201844;
    msg.y = 0.192290062263;
    msg.z = 0.134118947694;
    msg.n = 0.949093685327;
    msg.e = 0.202775215448;
    msg.d = 0.128051911401;
    msg.phi = 0.0810068961436;
    msg.theta = 0.0319358446876;
    msg.psi = 0.365098036354;
    msg.accuracy = 0.701238342753;

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
    msg.setTimeStamp(0.993955907116);
    msg.setSource(31869U);
    msg.setSourceEntity(196U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(9U);
    msg.target.assign("FVAZERZQWHICKUETTABXMUXYIZKDGLDGQBRGEKADYWPWXSVKEROHSZFITBVEIDSIQKJZLYBGWUROEPRMFMVVVMOYWMMAQSTBAPGNUCUDUFNPBROOZBEIJAGWCNHCJQGXHWUTSRHNUSRTTNGQVAZTMIQFVPYXCDYSTGYMLPJSJKNPKHGYLUCXIPFCKDNCBIIERDAHLAPNVOLJLOSBOJHZEZLMXPQJQXVWJEXNWXSKNTDYFDHBFRHUM");
    msg.x = 0.595383727941;
    msg.y = 0.834376967084;
    msg.z = 0.574443555184;
    msg.n = 0.187809508976;
    msg.e = 0.651122477162;
    msg.d = 0.964863821396;
    msg.phi = 0.0765669604778;
    msg.theta = 0.250829239992;
    msg.psi = 0.506691336259;
    msg.accuracy = 0.289827608921;

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
    msg.setTimeStamp(0.567146046994);
    msg.setSource(57710U);
    msg.setSourceEntity(244U);
    msg.setDestination(753U);
    msg.setDestinationEntity(188U);
    msg.target.assign("GMNRLDPTWFKKEVEEWUBYFCWKBKEWHJULCAQRSGAFVCGYVTRUBUBRMVWILPTBTBQFOOODLSVYAKDHEGOWZUPVBDOVNBPJCWPEKBHUOAYEVIIKATAYZTNGYAXSFBHTEJJJYRSGDZYLVZCMJXDNAZIQQQOJIPATRNZXIADXMPQOLMDQYYMSCGNNXHRQMJIFRXGIFLFSNTJCSFZVSEJDQNKWPOZUGSNHHZMRLUCLPRKUMXZWSIXXUPH");
    msg.x = 0.502787670185;
    msg.y = 0.995267414997;
    msg.z = 0.300019128312;
    msg.n = 0.669840926562;
    msg.e = 0.622071866876;
    msg.d = 0.73335822574;
    msg.phi = 0.442200709815;
    msg.theta = 0.743823244191;
    msg.psi = 0.0928910972295;
    msg.accuracy = 0.425450674681;

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
    msg.setTimeStamp(0.356080106409);
    msg.setSource(25525U);
    msg.setSourceEntity(82U);
    msg.setDestination(21968U);
    msg.setDestinationEntity(17U);
    msg.target.assign("FMCFVGRXHQEPKEAKJZLTQXOMSFQNZGABQWSMSUNPSLIWIBTLOAPSHX");
    msg.lat = 0.140915444904;
    msg.lon = 0.094600756901;
    msg.z_units = 144U;
    msg.z = 0.172501422835;
    msg.accuracy = 0.0811751877721;

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
    msg.setTimeStamp(0.697930847684);
    msg.setSource(50079U);
    msg.setSourceEntity(46U);
    msg.setDestination(43627U);
    msg.setDestinationEntity(112U);
    msg.target.assign("USDPHXGHWGLVTKBAPEXRIVMRCRHTBOEAQZGRDPITJSOGLZUTMXFBNBTZTONIFRCYGIRYIQEUYVSSOSUSAGIWEPANRFFAAVWSQDLDCLWYCUYMESDBUWELQYMIJWMJMKDHNKI");
    msg.lat = 0.632748287735;
    msg.lon = 0.610866663734;
    msg.z_units = 227U;
    msg.z = 0.874386409569;
    msg.accuracy = 0.462643890312;

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
    msg.setTimeStamp(0.905575816141);
    msg.setSource(6764U);
    msg.setSourceEntity(73U);
    msg.setDestination(6369U);
    msg.setDestinationEntity(5U);
    msg.target.assign("DSFMPPYIFWBEDCWZXAODRKHDFJAPSTNKQHCHHWJHZTCFUIOMJAZMPLIFZHIBLTEOQHSBGMUNOZGVOUGWJIIQMTWVJDJRETXINTGVSCKPNYPNZUWFXCLRCSLPTVJBMPGTCPWCORABRMVDVNRLO");
    msg.lat = 0.982653062473;
    msg.lon = 0.408753626058;
    msg.z_units = 8U;
    msg.z = 0.674752685777;
    msg.accuracy = 0.955598659203;

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
    msg.setTimeStamp(0.189885676936);
    msg.setSource(45486U);
    msg.setSourceEntity(100U);
    msg.setDestination(37850U);
    msg.setDestinationEntity(227U);
    msg.name.assign("MALZJZRVVFCGLWLMULAWCQRTMQTOQJGPEXGBPBCBASXMCKSMKWOKMLQRUQKPYXGATVELAUHZEIDTETEUWITRSYXJDWGSOUBPSRKVTNNNDHLUBHCCAD");
    msg.lat = 0.783566570246;
    msg.lon = 0.0857701457821;
    msg.z = 0.982013683519;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.515751878052);
    msg.setSource(8804U);
    msg.setSourceEntity(121U);
    msg.setDestination(14496U);
    msg.setDestinationEntity(193U);
    msg.name.assign("QYRHZABCAWRYRQCAOYIYNWOPJDFORQPSUZOQJJTIAXRAPTXALWSDFMWZJQOGSPNSRHFKXAPSQKOBUPELEEIBYULKXVRJAKMZPVFCVTJIBBVWGFCTLCISGBNUXCJTEXZMIBWEPXULHMRPQMJGMVYUHELMQXLTHUHBCSFATYBRQIEVEKFFSZFYHCWAWXZMNDZLHGTTCKOHEQNDNVDJUYCIJGSEKBDKGONWKSGIUORK");
    msg.lat = 0.331353705649;
    msg.lon = 0.805082556211;
    msg.z = 0.571411037503;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.413352597794);
    msg.setSource(51983U);
    msg.setSourceEntity(132U);
    msg.setDestination(34601U);
    msg.setDestinationEntity(73U);
    msg.name.assign("KBZNOVIFDSIEYZNGYTQPKMBIUEXTDLTFDOYRUEUHFRHJGLSUEGJVGXZNSSWTLOSAQLXOXGAOHMOIISLZFAKYIONQQGWTEURIYXMWLDBVVVPIECRPWGBSHQRUXSCTMFKAXEUEUVBQKBZJXTRFYTOCWKPHQPKZZONHRPAHHGJJNKILIOMQJYWDDPMRUB");
    msg.lat = 0.419917453512;
    msg.lon = 0.946178417022;
    msg.z = 0.527361199418;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.491752417347);
    msg.setSource(62489U);
    msg.setSourceEntity(18U);
    msg.setDestination(50636U);
    msg.setDestinationEntity(44U);
    msg.op = 232U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("WQNMEGXUFBVSZJEWXZXRQJJZXBNCCWLLYKJJKQCHAPUVVDTRXETUREFDTBPRACUIKNEZPWJLIVZOTHGOQOOWGVICQGMVA");
    tmp_msg_0.lat = 0.377400380554;
    tmp_msg_0.lon = 0.516378359378;
    tmp_msg_0.z = 0.96548802245;
    tmp_msg_0.z_units = 37U;
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
    msg.setTimeStamp(0.980966375229);
    msg.setSource(31811U);
    msg.setSourceEntity(195U);
    msg.setDestination(56107U);
    msg.setDestinationEntity(127U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.822872237603);
    msg.setSource(23239U);
    msg.setSourceEntity(140U);
    msg.setDestination(11915U);
    msg.setDestinationEntity(158U);
    msg.op = 23U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TEGZCUAYNQVXIOQFEEQGNNXFWYEQQWWDWTNTLLDDMCBGMFWLUIQYAAENONBFFJKKKXVZRSJUSPWIKCMHTFERLKYCGWOVJJTECNJRIMXGFZASSAMMMTAXAXIICSVWDORYVDSTFPHQRVGQYGEGRCQUOOPYUIDPBFPWKZSHBLZZHHOCKIOWTLRMKCZPLEHBIRMDBNDUUAURLLVXGBUHFYVXPVHBZBJSYKTOZOXQNGAD");
    tmp_msg_0.lat = 0.386864719408;
    tmp_msg_0.lon = 0.777126857359;
    tmp_msg_0.z = 0.9647234754;
    tmp_msg_0.z_units = 181U;
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
    msg.setTimeStamp(0.511060070223);
    msg.setSource(26179U);
    msg.setSourceEntity(49U);
    msg.setDestination(17204U);
    msg.setDestinationEntity(141U);
    msg.value = 0.874957564364;
    msg.type = 108U;

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
    msg.setTimeStamp(0.178605022042);
    msg.setSource(59381U);
    msg.setSourceEntity(41U);
    msg.setDestination(37335U);
    msg.setDestinationEntity(232U);
    msg.value = 0.636774692346;
    msg.type = 48U;

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
    msg.setTimeStamp(0.180666960779);
    msg.setSource(3902U);
    msg.setSourceEntity(246U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(39U);
    msg.value = 0.201851757845;
    msg.type = 36U;

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
    msg.setTimeStamp(0.0760034226352);
    msg.setSource(38336U);
    msg.setSourceEntity(25U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(208U);
    msg.value = 0.880633598438;

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
    msg.setTimeStamp(0.892775001261);
    msg.setSource(53028U);
    msg.setSourceEntity(22U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(159U);
    msg.value = 0.800533772075;

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
    msg.setTimeStamp(0.407549553543);
    msg.setSource(43109U);
    msg.setSourceEntity(35U);
    msg.setDestination(13819U);
    msg.setDestinationEntity(131U);
    msg.value = 0.117151008228;

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
    msg.setTimeStamp(0.970753233845);
    msg.setSource(18058U);
    msg.setSourceEntity(194U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(19U);
    msg.timestamp_last_service = 0.223378284241;
    msg.time_next_service = 0.834110649965;
    msg.time_motor_next_service = 0.781396129082;
    msg.time_idle_ground = 0.41624330025;
    msg.time_idle_air = 0.135310199095;
    msg.time_idle_water = 0.90438218044;
    msg.time_idle_underwater = 0.47736236448;
    msg.time_idle_unknown = 0.754075355307;
    msg.time_motor_ground = 0.492162204545;
    msg.time_motor_air = 0.928989539322;
    msg.time_motor_water = 0.306361203027;
    msg.time_motor_underwater = 0.431696335468;
    msg.time_motor_unknown = 0.731366598559;
    msg.rpm_min = 19887;
    msg.rpm_max = -4554;
    msg.depth_max = 0.567831749536;

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
    msg.setTimeStamp(0.891029872201);
    msg.setSource(64624U);
    msg.setSourceEntity(213U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(168U);
    msg.timestamp_last_service = 0.477873578888;
    msg.time_next_service = 0.128465455989;
    msg.time_motor_next_service = 0.978609311632;
    msg.time_idle_ground = 0.606262737258;
    msg.time_idle_air = 0.494456421861;
    msg.time_idle_water = 0.295875609632;
    msg.time_idle_underwater = 0.707805537039;
    msg.time_idle_unknown = 0.431466333676;
    msg.time_motor_ground = 0.699184156569;
    msg.time_motor_air = 0.56871124554;
    msg.time_motor_water = 0.109040015217;
    msg.time_motor_underwater = 0.592641777192;
    msg.time_motor_unknown = 0.725783021325;
    msg.rpm_min = -4653;
    msg.rpm_max = 17573;
    msg.depth_max = 0.404628722576;

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
    msg.setTimeStamp(0.819520022971);
    msg.setSource(4204U);
    msg.setSourceEntity(200U);
    msg.setDestination(40820U);
    msg.setDestinationEntity(73U);
    msg.timestamp_last_service = 0.814512510803;
    msg.time_next_service = 0.623120395827;
    msg.time_motor_next_service = 0.5352880407;
    msg.time_idle_ground = 0.414542708596;
    msg.time_idle_air = 0.315701760319;
    msg.time_idle_water = 0.606804672915;
    msg.time_idle_underwater = 0.498250526068;
    msg.time_idle_unknown = 0.213849347862;
    msg.time_motor_ground = 0.0746548858626;
    msg.time_motor_air = 0.989352506926;
    msg.time_motor_water = 0.893571431285;
    msg.time_motor_underwater = 0.141120576003;
    msg.time_motor_unknown = 0.694507542384;
    msg.rpm_min = -8055;
    msg.rpm_max = -12343;
    msg.depth_max = 0.889841328412;

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
    msg.setTimeStamp(0.961274519445);
    msg.setSource(50457U);
    msg.setSourceEntity(75U);
    msg.setDestination(28857U);
    msg.setDestinationEntity(62U);
    msg.severity = 230U;
    msg.text.assign("PWBAYCOVOABL");

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
    msg.setTimeStamp(0.516028800943);
    msg.setSource(835U);
    msg.setSourceEntity(9U);
    msg.setDestination(40016U);
    msg.setDestinationEntity(208U);
    msg.severity = 180U;
    msg.text.assign("UTCZFBBVVHWXRESAXYHAZRQPTGYUJMHUHQLRKVNDLFFSAJDBYEPBCAFWGIHJSNQOLAFJMCNCJGNLYFHWLZXUENZKATIOCBJEXOYPVQKLGSWSPBITIYBKNVOBEVRZDKWPYKMZDOXCYRCEVDLRCKTDWSIWIUUTXXHQMTKVIEFFTGOZMJZOHOMVZRWLGDUG");

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
    msg.setTimeStamp(0.95274404831);
    msg.setSource(19027U);
    msg.setSourceEntity(140U);
    msg.setDestination(54561U);
    msg.setDestinationEntity(180U);
    msg.severity = 81U;
    msg.text.assign("JLLYKKWWYUEMWEOFCIXTUKFASVVJLKUYEANSZRCXPETUBGREFWGTHJBCXLMGPTZTMJXYFWVOGFWBNEWJHVICZYXZDUITWPHSUXUKBINQJVONARINDAPSLSEKPIAPNNOGQQPHNZZJBLAMDXHYSQRIBSHBQIDEMQORGVPDEZMYZOJFAOLUYPLEFDHLOICSKTBCAYCDATHTCWDNAZXMSUIHQXOFXFUVNPSYVGVRQJZKMCQGJM");

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
    msg.setTimeStamp(0.757605395928);
    msg.setSource(5099U);
    msg.setSourceEntity(91U);
    msg.setDestination(1883U);
    msg.setDestinationEntity(29U);
    msg.channel = 73;
    msg.value = -808691680;
    msg.gain = 203U;

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
    msg.setTimeStamp(0.60691381058);
    msg.setSource(27647U);
    msg.setSourceEntity(240U);
    msg.setDestination(16764U);
    msg.setDestinationEntity(174U);
    msg.channel = -77;
    msg.value = 2130782390;
    msg.gain = 137U;

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
    msg.setTimeStamp(0.810228498408);
    msg.setSource(20650U);
    msg.setSourceEntity(48U);
    msg.setDestination(7180U);
    msg.setDestinationEntity(161U);
    msg.channel = -17;
    msg.value = 12151499;
    msg.gain = 26U;

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

  return test.getReturnValue();
}
