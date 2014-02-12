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
    msg.setTimeStamp(0.44663966479644424);
    msg.setSource(14900U);
    msg.setSourceEntity(5U);
    msg.setDestination(17772U);
    msg.setDestinationEntity(195U);
    msg.state = 119U;
    msg.flags = 206U;
    msg.description.assign("MCCHFUGLIQJCIRSBCVTLWWUUBGORVEFLSLPXQVEALYHPEKKKBKTQDEIKWLGDXRTVWDVNYKIHZHESWWHMATXQUYGJUSNZICPOGSPWGBVDTMYNZQULMGZJZSEXARQBCRENBMVJBNRYZFPMQZOYYFQOMWUCSAXDFTPYAXVZPBSDHTDCPEIXJBDFLNAARIMEGWFZKWLMGIUJYGRHXQOOLRKCPNDVKXUSTJJOZBROJUQSJNCAF");

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
    msg.setTimeStamp(0.7141798359682314);
    msg.setSource(41882U);
    msg.setSourceEntity(59U);
    msg.setDestination(42278U);
    msg.setDestinationEntity(103U);
    msg.state = 137U;
    msg.flags = 88U;
    msg.description.assign("RLQZNBZROMOBYOQDJMEHNWNWYBMVGQATQZNZMKLHNAFCPMNVZXUVST");

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
    msg.setTimeStamp(0.1334387363042192);
    msg.setSource(4821U);
    msg.setSourceEntity(154U);
    msg.setDestination(34603U);
    msg.setDestinationEntity(17U);
    msg.state = 191U;
    msg.flags = 116U;
    msg.description.assign("EQCOZMRDYTBHKMHDQIDGHOAALMVZGNEFEUTVXGPAFYYQPMZPSHBKKISIHSALBQGIZENOQWPVOAFCXSEITBYLIFGYJZQLCPKFZFLADFLUTOORKWWTWBUVWIMJTCGOGQHJVPNEYXXLKDKVSX");

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
    msg.setTimeStamp(0.35612750569572926);
    msg.setSource(58203U);
    msg.setSourceEntity(133U);
    msg.setDestination(35463U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.7865798082214833);
    msg.setSource(29640U);
    msg.setSourceEntity(33U);
    msg.setDestination(20082U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.26776684045449084);
    msg.setSource(14797U);
    msg.setSourceEntity(18U);
    msg.setDestination(63172U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.16792493690731491);
    msg.setSource(37661U);
    msg.setSourceEntity(8U);
    msg.setDestination(11651U);
    msg.setDestinationEntity(192U);
    msg.id = 185U;
    msg.label.assign("IMSKJGSZETCBQNYFMXKTPJACXWRGUZYPNZOOBVOAHOWNJJKLBEUQTXVHKKUFZOLGNDJCGVWNMXTLMJCFINPAKLBEECLRDCJZQWRTDYHLRJFLWWLSAAX");
    msg.component.assign("MKNXGIUQUHHWXMARXNSTBPPZYVDYTUXVXAEEMFSMJGHLDGWLFDCBFUILENEJTVFWFXIHLVBOKLRXJOYTKZTMOKPQDOSLJPGCUSABCYUITAKMHZVHROMBQCDFSWIYFJPHWYOQNGIRVJYFZJGBZQPSRJRFDTDZUAPZTYWRIJEOPGWZJTNXGUQNOAHXPSBZNDICFWQWNKVRPKMSBLVYRRHKQKAVCXOMIMGLEEGHISQVNWKDYNCALTOD");
    msg.act_time = 42683U;
    msg.deact_time = 41636U;

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
    msg.setTimeStamp(0.09066746068502607);
    msg.setSource(9976U);
    msg.setSourceEntity(165U);
    msg.setDestination(26228U);
    msg.setDestinationEntity(25U);
    msg.id = 65U;
    msg.label.assign("OPSNNPCVAJBINJEYMGOGAYIPNKKSXLGVUAJYHDHWFMBUTNWQBLHLKGIYWVLNTTODCKXHMJUEVADOXGICPBBXWJ");
    msg.component.assign("ONFOQANJRPCPSETZRJMOASILGKMFQ");
    msg.act_time = 10421U;
    msg.deact_time = 50416U;

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
    msg.setTimeStamp(0.3491973414242663);
    msg.setSource(43924U);
    msg.setSourceEntity(25U);
    msg.setDestination(20135U);
    msg.setDestinationEntity(76U);
    msg.id = 156U;
    msg.label.assign("VSJBGHAVFHTAQGAGPDQPKILNBMEDNTFQTWSIBOVDVUESLBNHOUQHSZCZEYTXPOXEEYBTKWHYTLSYXEGQECJLIATRUOYMZKNGCJNWPSRFPWFYKWDWRTKCSGVVKHPNNKMXUVXYWFQLJQMDWZMQIDSZHJXGRO");
    msg.component.assign("LORJUIPQSQKFTDSWDONYUWBHBJVLYHVCMDSBUEJGGLLNMZFFAEKFJFONANXABXFTQNYYILTHLZAWRJCUZQYWRDMSKEFZPYNVAXKPEIHMOTXSVQQQFVOVCXBQUMVGXXFRWLNLDZQUJLIVTPRMPEG");
    msg.act_time = 53634U;
    msg.deact_time = 8926U;

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
    msg.setTimeStamp(0.5924016169151128);
    msg.setSource(42765U);
    msg.setSourceEntity(241U);
    msg.setDestination(39676U);
    msg.setDestinationEntity(80U);
    msg.id = 214U;

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
    msg.setTimeStamp(0.12911274241222448);
    msg.setSource(31375U);
    msg.setSourceEntity(177U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(236U);
    msg.id = 129U;

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
    msg.setTimeStamp(0.3655665196863265);
    msg.setSource(36433U);
    msg.setSourceEntity(187U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(5U);
    msg.id = 2U;

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
    msg.setTimeStamp(0.5011258967165292);
    msg.setSource(30377U);
    msg.setSourceEntity(34U);
    msg.setDestination(17100U);
    msg.setDestinationEntity(101U);
    msg.op = 16U;
    msg.list.assign("VPTEMFHUKJQUSPRBQSLIPRHZWPMLJ");

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
    msg.setTimeStamp(0.8535918610873633);
    msg.setSource(50220U);
    msg.setSourceEntity(139U);
    msg.setDestination(38231U);
    msg.setDestinationEntity(93U);
    msg.op = 63U;
    msg.list.assign("ELIXADBHANFAGMSPCVZYHGMQERTLCWQPVKNGHYOXSZGEUFDYYHPYUZUOPPXHXBLMCXTOMSTJZGITYAZWTDBNWNDPJJYGXBILNFFKRZZCBIJTBQHFMRPJXVCROJGKGZWAASJFASKSUZGDRQPOQYNFQOIFUTTUULEIQNPQDRMKOEJAWBWGNVSHSEXICMILEVCDRSBWIUVA");

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
    msg.setTimeStamp(0.16899925526206583);
    msg.setSource(55650U);
    msg.setSourceEntity(17U);
    msg.setDestination(30201U);
    msg.setDestinationEntity(180U);
    msg.op = 245U;
    msg.list.assign("LNQZMKPAYURNDKJLLWPTXJVPFEBUGPSQJMDRMHWURSJCHZGYOWOLWDODMJHSDUGBPXIAFWCTCFEJZOUHTZBHRQITJBKGQKQZILGFCUVKNHBPIMTKIKYPFJJUTCXHGSOQZIMGZGXNYVYXZKICFQOHXALDYZVFCCNA");

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
    msg.setTimeStamp(0.5849355465704276);
    msg.setSource(59410U);
    msg.setSourceEntity(189U);
    msg.setDestination(34113U);
    msg.setDestinationEntity(220U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.16663938229726916);
    msg.setSource(1682U);
    msg.setSourceEntity(236U);
    msg.setDestination(54941U);
    msg.setDestinationEntity(143U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.9553431881006135);
    msg.setSource(27535U);
    msg.setSourceEntity(22U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(57U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.4557384537631133);
    msg.setSource(47326U);
    msg.setSourceEntity(131U);
    msg.setDestination(59233U);
    msg.setDestinationEntity(29U);
    msg.value = 44U;

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
    msg.setTimeStamp(0.5378204160146646);
    msg.setSource(16097U);
    msg.setSourceEntity(189U);
    msg.setDestination(15234U);
    msg.setDestinationEntity(70U);
    msg.value = 83U;

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
    msg.setTimeStamp(0.6065708281505443);
    msg.setSource(9373U);
    msg.setSourceEntity(49U);
    msg.setDestination(28666U);
    msg.setDestinationEntity(22U);
    msg.value = 130U;

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
    msg.setTimeStamp(0.11146587273225106);
    msg.setSource(57719U);
    msg.setSourceEntity(38U);
    msg.setDestination(37341U);
    msg.setDestinationEntity(209U);
    msg.consumer.assign("YQDQSNXDOIAKSDZPTVTMDADRXXJPWGRRZFWLINCUMAEKGWVYCYVITOHPOMYXIARCJNTYBHOXYSTQWVOJSKXNKKABFAOACJSBEIJSHOPGFKEVHUUIFFYUBIZKXKZNERUBUJBXIGCEJDVBSPZHQXVKTTBIFWDUBVMWPHYFLRUXQQLCGWLLAMNTJGPJIWPACAHREUFBLGZZKRSHZLUEZZJNGCGTQM");
    msg.message_id = 25068U;

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
    msg.setTimeStamp(0.4234875613074628);
    msg.setSource(29021U);
    msg.setSourceEntity(32U);
    msg.setDestination(25191U);
    msg.setDestinationEntity(90U);
    msg.consumer.assign("EGCCMPYDTLJHOTNBEWPITVUABKYKCJYZTWPLAYQZCAWLBNZBEIUERTHCCNQSFIMOVXQKXAULQRNEOUQQVUPFXMDGSPHMUCKBIGZAMOY");
    msg.message_id = 63478U;

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
    msg.setTimeStamp(0.44491365425495255);
    msg.setSource(56960U);
    msg.setSourceEntity(101U);
    msg.setDestination(54113U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("CPEIBTZBIMTTPHJSAMPSRKXIKWWGSVQDELRLDBDSCFEMYGLNNCNYQAZJKVPEDFXNZXXJGAFGWLJRBWDHFIQLHWYSAASGZQIJUOPBMSKAROYHDBYIGHPENHFTHOCKITXPISHSEBOJFMZXLJVERZKECWGUQLAKJCOMDPCUQAUVVZTKFMBONTXHALIFRVCZUILDFGFWQVPYUMOUCGOUGDVWVLWJDORXQWZJTQK");
    msg.message_id = 16491U;

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
    msg.setTimeStamp(0.46136608436852933);
    msg.setSource(62013U);
    msg.setSourceEntity(104U);
    msg.setDestination(21924U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.8931854204782045);
    msg.setSource(49693U);
    msg.setSourceEntity(37U);
    msg.setDestination(4384U);
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
    msg.setTimeStamp(0.4096364129675857);
    msg.setSource(5919U);
    msg.setSourceEntity(31U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.016289728475904264);
    msg.setSource(17769U);
    msg.setSourceEntity(192U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(67U);
    msg.section.assign("PXSPOGDADSAUSCQYROTSWEBEITUOZJYANDREMQTAHOETLSKHYWRNZVGWCRFOYCKWFFGKJPLAHWIDYQLJKNMHQVEAFGTCFLKQFSMWQJTZCGRXMNWKHPDBPGVBZWNHIJGJIJZYMDUANWXMOTURKBIRPNV");
    msg.param.assign("NMMPKTOKGEPTIEWQTEZEVUIOPALELBLQBORMGBYUVJGGYWWKWHNXHTDTHJNGYBFSTBMLSQMINTSDXHHUFFXABXEYVUVNKGIYDPWQNMRIVFD");
    msg.value.assign("IMWFCNENPEXLMOZSRURDBIRMUJIXAKYNJOQXWIYPTRBBFDLCVEPRQCOMQGCDZSNXEPMQYVBOYAAMGTZVZJWSIWAVPDWIHTEGLOPINTRYYSMHHNYKPVYJVRFWKEVORAZNFFUJTRKZQQBQLEDHBOAFAXBRBWKGCSFXDFQFKWUUTPCITCDLXHLAHWLKKUSLUSBCPUEMGHITXDNXJNGSKHWOVHUVILXJSEQHAQYTJGEOS");

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
    msg.setTimeStamp(0.03032029431357608);
    msg.setSource(30344U);
    msg.setSourceEntity(12U);
    msg.setDestination(19126U);
    msg.setDestinationEntity(161U);
    msg.section.assign("LQIRSQAUAYPTCWTBYYUCOUYPZDEBIMPEDBPTAOCTADHDIOQEOLWVYMLDNYESTZFGZUWYNXQAXHRKKKEVINUPDVLHVWCIAKZARQWGGDEZFIJTNLKSXJOGXRRWSDKAHLJNCMKCTEZQLECBXGMTNRBFMXVQFHGSLNJJFZVSBXBGZSRTJFBBVMWFCAHAVCSWRHKFDXINBOWZMTIEGNYRCHPMQOIGUUYOPDONGWMVUHQJVRMQPSPKFIHZXPSJO");
    msg.param.assign("PLPSAZSWUBLQSWMQRJAKTFEXGYJXXNAJIILOTOSWIWMDNTAHKXMRFTCICQAMOLEOAHKZTUCNWOEYL");
    msg.value.assign("HIMMPOJVLLWIEQTQSWTJPJSCVIGNEUZRQUDJALQQBPPQAIUVNTXUSHQLRXKGYZOOJIHDRLSBELAIOWRVFGAXKEAUMFYFLQLGWLFHVYN");

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
    msg.setTimeStamp(0.15523547469003074);
    msg.setSource(11755U);
    msg.setSourceEntity(109U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(154U);
    msg.section.assign("UTPENYXXJPVKVHJUPVHPLXBDJYVVQBABRMWEKMUIIYWIYNNEFAWQIUSALOCGLYUHHJIQFEFCQFYTMKQRTYRLDBPSQVAXVMETRAAIMMAREWZXKZNTTHSTJMCFALDRXOJGROJPHFFZEQYBXZYZZBASKALWZCTXCWVGTV");
    msg.param.assign("FHYSTBXNBIG");
    msg.value.assign("DJTKIHSSJBMYAWFQQZAHDCZYLHQTKAGJKYDTPCTLBKKRLMWRKNUVRVKRCWPPQOEORPOHJFEZQQRZYXVDTYQBDTXPUIAUOWGWIVEZJNTYUNOREWDBYNSLDYUUCNKXNGHNTXSEXCMHAPBNIZCAYFEPFOKHWFXMYFUKLNWCQPMJWAULEVERGGVFSPBSETZMDPNOVFODJCZBCGIRMLXLAHI");

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
    msg.setTimeStamp(0.2627341054861081);
    msg.setSource(46350U);
    msg.setSourceEntity(225U);
    msg.setDestination(58922U);
    msg.setDestinationEntity(144U);
    msg.op = 59U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("MOVCVYQAGKEQQAOPHLUTLPFOH");
    tmp_msg_0.param.assign("QOBCZRBKULMQYHFCVDQLJQLAFPIMNYJJTNJURKWRSIUOHGKNBWPGZICMOMDXTDAZNVMCKUJPSAACFWUMAEZPKHVJHAHWJNKYFXXZSX");
    tmp_msg_0.value.assign("YYSRSEJYZBLXKOOACIDWOFBANRJHDAOELTFWSBDFHYZTQOZRGJOKMMFFUSBDQLCPBGVPZXJSGJWRASGMFCJLEPHTKTDZWIHGQNVXRUATVOSIIUEKIAMKQYGOU");
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
    msg.setTimeStamp(0.9836559382463734);
    msg.setSource(38318U);
    msg.setSourceEntity(35U);
    msg.setDestination(57223U);
    msg.setDestinationEntity(73U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.9746400455218442);
    msg.setSource(53426U);
    msg.setSourceEntity(218U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(112U);
    msg.op = 201U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("MSHHRORQIGJACKQCKPXNMIPJFHQLTCLTEPHKOQFIYMXEZDJLLACZVXRKIHTTINUYELEFABXOLYQFYAEJWFJRODDIUA");
    tmp_msg_0.param.assign("HTKWDAOXZVRBMMEFSJIFINAXNJHJIMGGDXMZLWOHCHZMWAKBRFNUFSGLSUSXVKEXTCKDNKKJOUNVKCCZIKDPZCSFTNSHWWQOIQRYGYLPLAENBDXPAMYXOHMG");
    tmp_msg_0.value.assign("ZUPSTMMJWZSNNHOUYUBOFIZBAT");
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
    msg.setTimeStamp(0.5665516335092964);
    msg.setSource(35182U);
    msg.setSourceEntity(202U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(177U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.22963398697697246);
    msg.setSource(41656U);
    msg.setSourceEntity(242U);
    msg.setDestination(13374U);
    msg.setDestinationEntity(158U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.8758553874107466);
    msg.setSource(42347U);
    msg.setSourceEntity(96U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(14U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.23948328391170826);
    msg.setSource(24291U);
    msg.setSourceEntity(80U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 146U;
    msg.step_number = 254U;
    msg.step.assign("PILZJQEIWCNCQUUKXSAUZADYXHZIFVYNWYCIWBMTPFVDBJLKRPXOHSVKSQNIQLMXUAOHSBBEFKJMRFKFLHOGPTL");
    msg.flags = 36U;

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
    msg.setTimeStamp(0.26841536093069884);
    msg.setSource(17239U);
    msg.setSourceEntity(192U);
    msg.setDestination(21980U);
    msg.setDestinationEntity(225U);
    msg.total_steps = 132U;
    msg.step_number = 84U;
    msg.step.assign("TPYOKVSNEIHHUEGKJQNAXVJGFIXIOTPVRMLDCRYSEPPFEWVQVIANWRPVTRWKZNBJCH");
    msg.flags = 17U;

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
    msg.setTimeStamp(0.14991379355171142);
    msg.setSource(4868U);
    msg.setSourceEntity(110U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(177U);
    msg.total_steps = 60U;
    msg.step_number = 96U;
    msg.step.assign("RQWAZKDMZJYTKHWQHDCSJAQIMWOXZEUXLLTGIWPYYEUCYOEDAAADWVEFFOJEHYVNHEUWHRDDAQBXUGOSTROFJBKSVPPXNJHHBNCKVBACQILZJNCVEFHKGOZBXOYSVBIDMK");
    msg.flags = 146U;

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
    msg.setTimeStamp(0.5973311656200401);
    msg.setSource(46100U);
    msg.setSourceEntity(171U);
    msg.setDestination(20135U);
    msg.setDestinationEntity(136U);
    msg.state = 122U;
    msg.error.assign("MYWHVUYBTJAZYFGDYSGYPTROCIFEGRXHWWWUKKUXCTIQZAQZKILGZRZFJTAMMDSRNLTXSDREHJOJJOARMGSKPGYZQLVHABEVILNZMLUXOCTDOFVEVXWC");

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
    msg.setTimeStamp(0.03401782911144291);
    msg.setSource(44399U);
    msg.setSourceEntity(196U);
    msg.setDestination(47938U);
    msg.setDestinationEntity(191U);
    msg.state = 21U;
    msg.error.assign("PTCJBACHOWNCYGUVEMDYYHNFOZJJACPORZQPRFURGTLDLNVELGBBJIKMJZDDUPGQJBZMZLQMRPYZOVNXQBLKQRTEXYAWVLJTUNRWMZEQLUCQNSKQBDXZXTHBKGTYIIHQGGQ");

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
    msg.setTimeStamp(0.6668979987139567);
    msg.setSource(65411U);
    msg.setSourceEntity(38U);
    msg.setDestination(41775U);
    msg.setDestinationEntity(181U);
    msg.state = 71U;
    msg.error.assign("MVWKYZWPFELBDJQAHLHBOOVSNAVFZAUQGJDWSYHLDHFRLMTTAPAWTXWAKUNGEUICRFTEAMLZGGVIMLFLDYVUKLWXSETCBKIRPTCRDNVEMOGQJURHEUBIUICJNYCXWEIDYKFQQINWKNGGZJJHTXNMPRJRESPCOOEQQVB");

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
    msg.setTimeStamp(0.49235277680945055);
    msg.setSource(21975U);
    msg.setSourceEntity(126U);
    msg.setDestination(49519U);
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
    msg.setTimeStamp(0.5008913180220971);
    msg.setSource(9355U);
    msg.setSourceEntity(84U);
    msg.setDestination(34589U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.6877884733395196);
    msg.setSource(46442U);
    msg.setSourceEntity(58U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.5547370155513356);
    msg.setSource(10614U);
    msg.setSourceEntity(227U);
    msg.setDestination(49545U);
    msg.setDestinationEntity(168U);
    msg.op = 26U;
    msg.speed_min = 0.699442254513045;
    msg.speed_max = 0.5398364948667745;
    msg.long_accel = 0.9323112176304985;
    msg.alt_max_msl = 0.8361753797759883;
    msg.dive_fraction_max = 0.7628811609900676;
    msg.climb_fraction_max = 0.06198662716655878;
    msg.bank_max = 0.18424437834038443;
    msg.p_max = 0.20258466749205573;
    msg.pitch_min = 0.2689785272011277;
    msg.pitch_max = 0.9228274900841912;
    msg.q_max = 0.02550684266797032;
    msg.g_min = 0.25053571284723697;
    msg.g_max = 0.09639242559571948;
    msg.g_lat_max = 0.7840354519040357;
    msg.rpm_min = 0.18135984513348047;
    msg.rpm_max = 0.33775274817639467;
    msg.rpm_rate_max = 0.27872473561273314;

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
    msg.setTimeStamp(0.7091285476338559);
    msg.setSource(31671U);
    msg.setSourceEntity(73U);
    msg.setDestination(12154U);
    msg.setDestinationEntity(198U);
    msg.op = 150U;
    msg.speed_min = 0.30546236602523136;
    msg.speed_max = 0.7648166076517723;
    msg.long_accel = 0.16702116894593277;
    msg.alt_max_msl = 0.12967706066981288;
    msg.dive_fraction_max = 0.47670682542862663;
    msg.climb_fraction_max = 0.906839134379204;
    msg.bank_max = 0.10002077673683996;
    msg.p_max = 0.8448012284236257;
    msg.pitch_min = 0.43504083572225416;
    msg.pitch_max = 0.9980989439391252;
    msg.q_max = 0.8870989096429684;
    msg.g_min = 0.7425145989192842;
    msg.g_max = 0.933112270312591;
    msg.g_lat_max = 0.6115695837147276;
    msg.rpm_min = 0.08473505666356185;
    msg.rpm_max = 0.37768902277532146;
    msg.rpm_rate_max = 0.5669930044938433;

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
    msg.setTimeStamp(0.8171508697890425);
    msg.setSource(12051U);
    msg.setSourceEntity(232U);
    msg.setDestination(16477U);
    msg.setDestinationEntity(241U);
    msg.op = 31U;
    msg.speed_min = 0.8122046142267423;
    msg.speed_max = 0.6532099946161124;
    msg.long_accel = 0.36366652434358626;
    msg.alt_max_msl = 0.5418707850973088;
    msg.dive_fraction_max = 0.2940424615804268;
    msg.climb_fraction_max = 0.6377545412899281;
    msg.bank_max = 0.6772980575912763;
    msg.p_max = 0.6560605158101618;
    msg.pitch_min = 0.047987330146289864;
    msg.pitch_max = 0.24777378283033447;
    msg.q_max = 0.20713202573082834;
    msg.g_min = 0.10356254136832477;
    msg.g_max = 0.042714014585528925;
    msg.g_lat_max = 0.34331274774767107;
    msg.rpm_min = 0.32841972445254486;
    msg.rpm_max = 0.9615362025588434;
    msg.rpm_rate_max = 0.22901409664356032;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.4439130497828152);
    msg.setSource(47367U);
    msg.setSourceEntity(215U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.5012197402026898;
    msg.lon = 0.36881589032824424;
    msg.height = 0.3935071174609338;
    msg.x = 0.004218337001512418;
    msg.y = 0.6292610121008473;
    msg.z = 0.5274301723773643;
    msg.phi = 0.8043873528447042;
    msg.theta = 0.24475130051378147;
    msg.psi = 0.9436935234173699;
    msg.u = 0.2688139278490732;
    msg.v = 0.0097430473178588;
    msg.w = 0.8522873837780552;
    msg.p = 0.05159626136382711;
    msg.q = 0.02693549978462695;
    msg.r = 0.12508296370235195;
    msg.svx = 0.35860341577526456;
    msg.svy = 0.1510356180388448;
    msg.svz = 0.7258024466134728;

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
    msg.setTimeStamp(0.2883728928648486);
    msg.setSource(4070U);
    msg.setSourceEntity(134U);
    msg.setDestination(21928U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.8491357746208276;
    msg.lon = 0.0017689155642832688;
    msg.height = 0.40408692707244387;
    msg.x = 0.5912189103858974;
    msg.y = 0.7747898787957667;
    msg.z = 0.7939213016709017;
    msg.phi = 0.21884043185542312;
    msg.theta = 0.5322874543120155;
    msg.psi = 0.46945687272112246;
    msg.u = 0.9990332935405726;
    msg.v = 0.16027949211922699;
    msg.w = 0.12671836587636465;
    msg.p = 0.5818572435923628;
    msg.q = 0.46861484886316895;
    msg.r = 0.5438428608553751;
    msg.svx = 0.050233081467971896;
    msg.svy = 0.6267245873200734;
    msg.svz = 0.30373932282454164;

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
    msg.setTimeStamp(0.8458140644187255);
    msg.setSource(21323U);
    msg.setSourceEntity(4U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.13971956561818666;
    msg.lon = 0.5139609479306093;
    msg.height = 0.6461419371043332;
    msg.x = 0.27949954555829504;
    msg.y = 0.5020995716641419;
    msg.z = 0.8111732318079287;
    msg.phi = 0.3768807559490064;
    msg.theta = 0.8893932199054073;
    msg.psi = 0.5857585985246739;
    msg.u = 0.1957464392938194;
    msg.v = 0.934486474571664;
    msg.w = 0.2694320583359142;
    msg.p = 0.17037834508299188;
    msg.q = 0.44282490047890355;
    msg.r = 0.05682730990308249;
    msg.svx = 0.9558359914761421;
    msg.svy = 0.1282648379393524;
    msg.svz = 0.6679312796945528;

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
    msg.setTimeStamp(0.3394204360212617);
    msg.setSource(60075U);
    msg.setSourceEntity(58U);
    msg.setDestination(4393U);
    msg.setDestinationEntity(109U);
    msg.op = 5U;
    msg.entities.assign("EOHXVRTSLMWIDQWHYYWHLLDNEWTFYIERFXQGDVUQGUATBCCMFGANSLUKJVAUGXHQODKOBXPDCMANPYJWWVXTVPNQRDBCRIEFTPSEB");

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
    msg.setTimeStamp(0.1986769369375443);
    msg.setSource(11858U);
    msg.setSourceEntity(212U);
    msg.setDestination(27399U);
    msg.setDestinationEntity(226U);
    msg.op = 161U;
    msg.entities.assign("QCLNMUZKUXPNTJYZRNSEPFMAAOGWZVOWVFGOPKEJBUUWISTYMSDPUSQPJSIEMRAXNDVBHIVUELSZLEZMFWQZIDCBKTXXRJJXYOHQBQBCDYRRCWUABGSHLTTYGRPVIKLYFXDHEMCCJAL");

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
    msg.setTimeStamp(0.01069872750201628);
    msg.setSource(27847U);
    msg.setSourceEntity(239U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(229U);
    msg.op = 211U;
    msg.entities.assign("PFLYHARFJALDHEVJRJOOBSDKZBFTIBSIWVLRQVZLFJZUETFCTUABUHXQYFTDBVRICZITWJDNGAGSCYFUMMLDQVWZJESDLONQUIXYGGSVYKDYKAQZKOUZSV");

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
    msg.setTimeStamp(0.7533765994436861);
    msg.setSource(33477U);
    msg.setSourceEntity(229U);
    msg.setDestination(51576U);
    msg.setDestinationEntity(207U);
    msg.type = 144U;
    msg.speed = 64485U;
    const char tmp_msg_0[] = {119, 40, 8, 114, 0, -41, -96, 54, 86, -63, -103, -59, -108, 40, -68, -101, 87, -35, 112, 107, 41, 8, -59, 114, -29, -59, 9, -83, 101, -64, -112, -26, 31, 48, -48, -18, 68, -91, -41, -114, 9, 115, 84, -1, -108, -45, -10, -94, 123, 20, 42, -120, 58, 23, 2, -119, -58, -39, -26, -65, -60, -6, 91, 110, -92, -94, 70, -64, 0, -69, 117, 97, 7, 7, 19, 13, 28, 48, 13, -31, -33, -122, -92, -99, 54, -45, -85, 105, -124, -69, 42, -111, 72, -14, 57, -81, 107, -55, 125, -62, -107, 94, -39, -36, 97, 55, 119, 18, 92, -85, -29, 52, 21, -26, 51, 29, -36, 55, -30, 124, -125, 3, 55, 7, 110, -18, -40, -73, 111, 59, -109, 123, 67, -81, 107, 5, 37, 61, 55, 46, -126, -18, -85, -119, 65, -97, -85, -37, 73, -53, 6, 72, -126, -57, 30, 66, -95, -126, -41, -14, -18, 68, -58, 26, -113, -50, -78, -125, 45, 55, 103, -15, 64, 75, -50, 43, -59, 38, -110, -80, 109, -45, 18, 42, -76, -25, -6, -107, -67, -42, 93, 9, 49, -29, -20, -39, -122, 112, 12, 12, 47, -37, -67, 6, 11, 60, -105, -95, 112, 18, 99, -5};
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
    msg.setTimeStamp(0.91756079128313);
    msg.setSource(21255U);
    msg.setSourceEntity(159U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(196U);
    msg.type = 243U;
    msg.speed = 64741U;
    const char tmp_msg_0[] = {-48, -34, -79, 5, -6, -81, -124, -83, -114, -46, 66, -107, -95, -53, -27, 1, 87, -126, 96, -109, 95, -57, 47, -53, 124, 114, -31, 19, 89, 44, -117, -43, 100, -118, 48, 90, 112, 66, -67, -113};
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
    msg.setTimeStamp(0.2482064084060951);
    msg.setSource(46365U);
    msg.setSourceEntity(210U);
    msg.setDestination(4720U);
    msg.setDestinationEntity(33U);
    msg.type = 213U;
    msg.speed = 6689U;
    const char tmp_msg_0[] = {11, 103, -117, 9, -85, 52, 10, -125, 124, 107, -67, 83, -104, -85, -7, 5, 55, 61, 108, 79, -66, 38, -20, 105, 107, 106, 53, 84, 35, -105, -100, -114, -36, -75, 95, 62, -12, -97, -84, 102, 105, -103, -40, 0, -104, -86, -1, 22, 118, 38, 70, -55, 42, 19, -44, -76, -89, 81, 76, 19, -100, -42, -110, 27, 29, 103, -34, -64, 65, 31, 97, 60, -65, 89, -18, -31, -116, 24, 12, -120, -14, 39, -14};
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
    msg.setTimeStamp(0.8513424065445471);
    msg.setSource(27986U);
    msg.setSourceEntity(222U);
    msg.setDestination(51283U);
    msg.setDestinationEntity(39U);
    msg.op = 104U;
    msg.tas2acc_pgain = 0.47172558481503934;
    msg.bank2p_pgain = 0.8731397624383043;

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
    msg.setTimeStamp(0.11324428685443033);
    msg.setSource(26814U);
    msg.setSourceEntity(163U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(73U);
    msg.op = 172U;
    msg.tas2acc_pgain = 0.3039374397086667;
    msg.bank2p_pgain = 0.7352835199103956;

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
    msg.setTimeStamp(0.6766485116075733);
    msg.setSource(58107U);
    msg.setSourceEntity(95U);
    msg.setDestination(54768U);
    msg.setDestinationEntity(162U);
    msg.op = 239U;
    msg.tas2acc_pgain = 0.6692404858567028;
    msg.bank2p_pgain = 0.42672440081150964;

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
    msg.setTimeStamp(0.02738078692383006);
    msg.setSource(14494U);
    msg.setSourceEntity(109U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(48U);
    msg.available = 3595613679U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.0040998125820465026);
    msg.setSource(58432U);
    msg.setSourceEntity(156U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(177U);
    msg.available = 252655899U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.9001050046019365);
    msg.setSource(52543U);
    msg.setSourceEntity(239U);
    msg.setDestination(19470U);
    msg.setDestinationEntity(95U);
    msg.available = 3015566288U;
    msg.value = 238U;

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
    msg.setTimeStamp(0.8868501910932348);
    msg.setSource(25688U);
    msg.setSourceEntity(113U);
    msg.setDestination(29826U);
    msg.setDestinationEntity(130U);
    msg.op = 132U;
    msg.snapshot.assign("XCUVCDIXUMCRIELFMZYTYWJVQJWYHCRTXONAEJOKJNJFLOUNDLWWDZNMSJICLVNUPQYYIGKRWYKKQRYARSHHTHPDDGAVXQVRIBZNTEBFUFPIDEHHIOLOVMZZVECUMFTKGGBSMETPIPQWMUMBEFARVYWSCJAAASWHOWAPKUXNYBIQGOJBZVOFJVUNXZFRLECOBGBSDQSPZKWLMKG");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47942U;
    tmp_msg_0.lat = 0.6833607871405537;
    tmp_msg_0.lon = 0.6774401701269874;
    tmp_msg_0.z = 0.612135585688894;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.5535713898183146;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.roll = 0.6520277500693845;
    tmp_msg_0.pitch = 0.8790625774519113;
    tmp_msg_0.yaw = 0.156184628267644;
    tmp_msg_0.custom.assign("HVYOVBIRHOFCBJILUGNGWUMPYYRESYHJGWAQCDMEBSGMFIZIJDAVBENMRVTHQFRHSDWJIHEXQWMYAZFLESBOGCDLPOTQKWJFUFNUBAKXXWUPLNIXKVIMBOIRLKZQGORJCBYC");
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
    msg.setTimeStamp(0.13609830239386644);
    msg.setSource(24670U);
    msg.setSourceEntity(95U);
    msg.setDestination(51173U);
    msg.setDestinationEntity(161U);
    msg.op = 202U;
    msg.snapshot.assign("IXHDGGFUZXHWIFAXSCKGCMOENQTDSDVGWCVPRNPRETWZLGDNSTWQNOQEJLNBHIYBUAJCMESYPLOXPHRIATLXORGHUHTQXAYUTMLTVKGBRMEPVYKVKLHFPFXIZSJYPDUAPOUZBARSMKTCGKHIWZCJDJNRJMVGOVJUVQY");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 248U;
    tmp_msg_0.longain = 4015724374U;
    tmp_msg_0.latgain = 77357024U;
    tmp_msg_0.bondthick = 3211731825U;
    tmp_msg_0.leadgain = 4220318316U;
    tmp_msg_0.deconflgain = 2660820623U;
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
    msg.setTimeStamp(0.27628193889987274);
    msg.setSource(16459U);
    msg.setSourceEntity(219U);
    msg.setDestination(65362U);
    msg.setDestinationEntity(88U);
    msg.op = 112U;
    msg.snapshot.assign("GXZCGXWQWGBWHNQFIREVAHEQUBCG");
    IMC::AbortAcked tmp_msg_0;
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
    msg.setTimeStamp(0.553674645456454);
    msg.setSource(43238U);
    msg.setSourceEntity(252U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(201U);
    msg.op = 70U;
    msg.name.assign("TWMDLDVZSWMVGEYLJSMDANIHCYIXMJNMZKKTCISHNAFVBNZAPBOLDUNUEWXJVNMCBEYNSRYGKQIDJFJBSORTJXJZZFWBAUKOHHCEIW");

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
    msg.setTimeStamp(0.7099469018806313);
    msg.setSource(44710U);
    msg.setSourceEntity(67U);
    msg.setDestination(55465U);
    msg.setDestinationEntity(203U);
    msg.op = 71U;
    msg.name.assign("YDBULUELOUKUFTZQNWEDJMSXVYZJJKIZXWEZBOCKIPUQWWIJWAFOLMGKLVNPUUTXHBRRRVUTTBGRHYVWLMIGTLANDFRJHZVBAXYQEFIRMFGDEL");

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
    msg.setTimeStamp(0.8075795218597766);
    msg.setSource(7320U);
    msg.setSourceEntity(56U);
    msg.setDestination(55672U);
    msg.setDestinationEntity(35U);
    msg.op = 64U;
    msg.name.assign("SATCYWIGNJLIFCRXILYPQSWJETCZKAHRAMLNVGECPYAKXMGFKSNQOHMKUHKBOWYIUXGENHVLA");

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
    msg.setTimeStamp(0.9167850962348144);
    msg.setSource(27706U);
    msg.setSourceEntity(92U);
    msg.setDestination(24413U);
    msg.setDestinationEntity(97U);
    msg.type = 43U;
    msg.htime = 0.08393303748736791;
    msg.context.assign("MVDCVWQWIPDFVMXYAWJHCJAGITWQDGPSHTQFDOXJKXVSZXUGRPSTRYJEUENRLRMKDRYSOEZCSIZBIJCHMNVEYGLPJFQLDUVVNKXELRPCQRBAQOIOQEGKTHZXSXSYREYWOOXRSBAANUCLCBVNDMJTJNLFYSQNFMUPKYZYITNPDCOBZZZVNGTOKJEUBWFGKFBAMTGMPBMHUCFOHUHDBSWHVYUXZBQLIWHKWHKLADQAXILWGPMT");
    msg.text.assign("OGWARIYAQNKXDSWUEBRRNFVBWDVDGCZIQIPUOVUTSQKYHHMKYYSUQPQUSAODGFNWMKPSEOKUGYAJXCQHJLNDAGPSHAXMXNLZDDZCWXXTLTRRPMCBMMIOJBYBTFIECFYSYGAPRLTIECGXQPHLYZITENLXZWGLTMZCULPLRANFEJWDCZVENVSFPGRECXIZKSLAMOSOIJZWDBJOBKHURJQMHXVBUTNAKJIHQGETTEJWB");

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
    msg.setTimeStamp(0.8310243340760032);
    msg.setSource(59991U);
    msg.setSourceEntity(102U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(34U);
    msg.type = 244U;
    msg.htime = 0.29339763583275713;
    msg.context.assign("YXRCTQWQVGPSIDGGZWQBWMPTTEUFVAZAXEFRMSBTKMPSPDVCIPNT");
    msg.text.assign("WFKDCDNTKKXLQUHTNRFCHPEYBMUBHTLNTYPGAIQPFZSBJOMGXGOPLHQKWZGGZLHEBMDAINJEB");

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
    msg.setTimeStamp(0.06577082810638712);
    msg.setSource(44483U);
    msg.setSourceEntity(2U);
    msg.setDestination(57136U);
    msg.setDestinationEntity(48U);
    msg.type = 157U;
    msg.htime = 0.5589695083658971;
    msg.context.assign("BKFNWOPIWBLVPTHHXXVIRFRQCVDDOECTFIXHMOSEDQMYZNACBHXAFTHEOTRJCRCGSCVRRDLFZLTAJCFYRLXPQSDGVXVAGQQUWETZWNZMXWZNMVXQTLZCWAZPTUMISLFOLCYHPISZFONWBMUPRCQKKGBDKGTRAEVNXMTHQEFQLOJNMEJYAZDGPYIUGJDJDSBWAIQPRWZPNIKGUYKIWJSBHVUAPGBUSHYHXKNBOFIEMANOBUJLYYEJK");
    msg.text.assign("AHUUJRGUNLWQFCNIOOTBEAYRINORKZCSOLXTTIEFAKEGHGTBXKNLMUDOJBTCFVEVLYMPDJBPMKAYHUAQQBGJGSEVBONCQZUFQTUKBKFNZIGJSPZTYPJICLUOHPGEZYSDDDBAUYEXZXVRQAHLFLWDBKDLKRXMWVIGXEYVGSWLASQLCQF");

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
    msg.setTimeStamp(0.04379434946998795);
    msg.setSource(24126U);
    msg.setSourceEntity(59U);
    msg.setDestination(23209U);
    msg.setDestinationEntity(20U);
    msg.command = 6U;
    msg.htime = 0.07795486687587527;

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
    msg.setTimeStamp(0.3282314102891888);
    msg.setSource(19734U);
    msg.setSourceEntity(107U);
    msg.setDestination(14030U);
    msg.setDestinationEntity(120U);
    msg.command = 190U;
    msg.htime = 0.3673574385832633;

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
    msg.setTimeStamp(0.7819239004240479);
    msg.setSource(23403U);
    msg.setSourceEntity(136U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(205U);
    msg.command = 30U;
    msg.htime = 0.49675960678997255;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 106U;
    tmp_msg_0.htime = 0.11480239992882202;
    tmp_msg_0.context.assign("HCQVZVUDNXPOVIDSPJCPIDFNAOFVRCWZCFVTTEVIFRPCQIULRMVHHMZJTHKMYBCGGXVELGNKTOUNAPTZHMHZWWSSOUTFYKLUWAGMZREQUWMHXQEIJKTB");
    tmp_msg_0.text.assign("WKXBKMUQJNWBTPREFWVGDXCXLEWVYSLWERGULKRPIIGSUQILVPIEHVTHSOXAZNJRAOQQMNMCRWUXVJVKINNKLGPUFLKWBPHYSJVTZLCKPFHNYGVTXMCHLJSHMFMGLOCATSPNZOCVREMOFDDDDYEJMZAOMRWZSPPEYGBHNAFXDKBNQAJHCCFPBDXQTCZQAAAEOIRIQUYXQTGYYNFGUUY");
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
    msg.setTimeStamp(0.22399676466830865);
    msg.setSource(45321U);
    msg.setSourceEntity(18U);
    msg.setDestination(60047U);
    msg.setDestinationEntity(206U);
    msg.op = 45U;
    msg.file.assign("NHUEQMZKBYNWPQTUJOXCHSMNQGJMSSAM");

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
    msg.setTimeStamp(0.7854526583127648);
    msg.setSource(23446U);
    msg.setSourceEntity(92U);
    msg.setDestination(57195U);
    msg.setDestinationEntity(132U);
    msg.op = 220U;
    msg.file.assign("DLAKKEBNZKABORXKEUMXPUNAGWXPQYJYIVYFWVPMKYHS");

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
    msg.setTimeStamp(0.9115024428843533);
    msg.setSource(943U);
    msg.setSourceEntity(213U);
    msg.setDestination(19223U);
    msg.setDestinationEntity(108U);
    msg.op = 93U;
    msg.file.assign("CJRFSSZKGZOYWKXSDMELFIRQSUSAVGPOYHBFOPZCKEZZEBRIIVYMTCBBCNLTDTAVQFHHXACVXWGSNPCNATUYZEMDWKIBELUKJYCWVIHYTFGXYUZNOGJJGFAQHXJHIOKVJWMLWKPSKEKIPFMXUEDQTAWLYUJRFZSKXDELF");

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
    msg.setTimeStamp(0.7746252853729538);
    msg.setSource(19679U);
    msg.setSourceEntity(212U);
    msg.setDestination(9385U);
    msg.setDestinationEntity(88U);
    msg.op = 128U;
    msg.clock = 0.9175536590627813;
    msg.tz = -70;

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
    msg.setTimeStamp(0.2352786363627517);
    msg.setSource(14272U);
    msg.setSourceEntity(94U);
    msg.setDestination(38850U);
    msg.setDestinationEntity(191U);
    msg.op = 246U;
    msg.clock = 0.6306830341290366;
    msg.tz = -33;

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
    msg.setTimeStamp(0.4119326093442244);
    msg.setSource(19346U);
    msg.setSourceEntity(132U);
    msg.setDestination(62107U);
    msg.setDestinationEntity(111U);
    msg.op = 106U;
    msg.clock = 0.4506148641876949;
    msg.tz = 0;

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
    msg.setTimeStamp(0.7335774470881326);
    msg.setSource(13759U);
    msg.setSourceEntity(178U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.9570101182461324);
    msg.setSource(7487U);
    msg.setSourceEntity(103U);
    msg.setDestination(20199U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.917932702486551);
    msg.setSource(40943U);
    msg.setSourceEntity(172U);
    msg.setDestination(31445U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.4915403336760781);
    msg.setSource(5344U);
    msg.setSourceEntity(122U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(79U);
    msg.sys_name.assign("VDZKZJXYLYKXZIDBUSUZJZJWTSEWJZYUGSVOULEOMUUELVOXHGRRMFFBMIDHNF");
    msg.sys_type = 227U;
    msg.owner = 44948U;
    msg.lat = 0.8652162577639871;
    msg.lon = 0.18565735069417555;
    msg.height = 0.8943128795476997;
    msg.services.assign("UTOWDPIIGVLGKAVBZIMXYWGXIQXMDETRSIBSLJCYBQPHRQUXQPHYCYSICQFGOYZDRIMJTSUWXSBLNPXXCRDFKCAPCHNJOOEROVJNHMMTKPWNEVFLXOAVNNQUYBBDPFDLJAZLDKZESRJGGRPFVUGRHMUVINTAVCWBMAJGFQVQWFHHRJUMYZTLIZXHIXHTDJELRNAWMGACGVJTYOUKWLONUFCAUDPFSEAQTEKZQCEOYKKZMOSEWSHLTBPEBZKBS");

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
    msg.setTimeStamp(0.714242695206229);
    msg.setSource(57634U);
    msg.setSourceEntity(23U);
    msg.setDestination(54059U);
    msg.setDestinationEntity(127U);
    msg.sys_name.assign("MZMOUDAGZOF");
    msg.sys_type = 21U;
    msg.owner = 62134U;
    msg.lat = 0.4089557861841323;
    msg.lon = 0.29449638626121066;
    msg.height = 0.5594131971665259;
    msg.services.assign("ZKWMOBVTMCFBCLQDDKTDOCNGVAGUPDYHVFJNGCFOURFDQOUFJTMTGRBUROFVMNMZIYTGBZSVPCKXVEYUPLIRZBTQJQPXVWTGPXCWLCZHVELXAPAKWOIASHZQEXEWBUCJSABPYISFVDQCPWYXDBNYSJLJWPOEOKLENIJFAKLQHUMHYVWK");

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
    msg.setTimeStamp(0.19747234361296884);
    msg.setSource(4222U);
    msg.setSourceEntity(39U);
    msg.setDestination(31107U);
    msg.setDestinationEntity(216U);
    msg.sys_name.assign("OMEKFMCFLIKNRAEQGUTAWESDFCDJDEQUOXDBAJYLHDGVJOTEIJMWHOTRYMINSESRSBGHYLEISPCBNBXWPYUWFMDXBCQCIVGNOMHDPNQYJJOCFYJMNKTETZWZQNUTQRCAVAADVXAMTISZKHHKZDASRBRFBFKNXPQHXQRUUWWRUYKGYBIJPLEBJAOKZGCQHVURLSZGLZUXMIVF");
    msg.sys_type = 159U;
    msg.owner = 23297U;
    msg.lat = 0.07627817291927108;
    msg.lon = 0.8101280198062232;
    msg.height = 0.31929739771086485;
    msg.services.assign("GAKKLCCFLKDGQXAYOXMJSBNBSEYNKZCJLWDWKDGIWDSOEZFGKMZXBTXOOUCNAPQAZMTSIXTBTZWMYRBIGFXUVHQLQMHNJVRSCXARHBAESW");

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
    msg.setTimeStamp(0.47980858289220385);
    msg.setSource(37148U);
    msg.setSourceEntity(34U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(19U);
    msg.service.assign("XLNMCDFIVAQDGWVJPHEUTBHTGUDDKYRGCUCFIDPXYHAVTTMFPNWHEZOWHSULCAITQKYTARGMRWVOJEDCSNKTFCWLKLUQZTFSSXHXMPKQMHHMEPEYRLVIEAOXJRKJGRKCEYBCUJZJOQXZPFMUJNFXWDCOZBYBYMFQNTZXNYIEQZAXSVGIBUIAMIGSSOETEWNMBLSKNDLYRWGLUJJPOIAAQKPIYOBSZWSHBDGCVPFQVVBLZKXOR");
    msg.service_type = 43U;

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
    msg.setTimeStamp(0.8909288272194579);
    msg.setSource(12951U);
    msg.setSourceEntity(178U);
    msg.setDestination(27081U);
    msg.setDestinationEntity(76U);
    msg.service.assign("VIYECVXBRBHSLIYMHXNAIQVDZCZOYGKIVTGREUUKHB");
    msg.service_type = 63U;

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
    msg.setTimeStamp(0.4080305724686697);
    msg.setSource(21497U);
    msg.setSourceEntity(252U);
    msg.setDestination(7078U);
    msg.setDestinationEntity(80U);
    msg.service.assign("IJAIETDTXIFHAODCBZMWRLHWJFYHSZEKUHVJSMXFGLUEPOPCUXZZNCPVQLJOXBLYKBJGWGJFANCQCMIHARWOQTPOYNYDMYYGJKFKCTO");
    msg.service_type = 81U;

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
    msg.setTimeStamp(0.384202448982798);
    msg.setSource(21150U);
    msg.setSourceEntity(39U);
    msg.setDestination(24429U);
    msg.setDestinationEntity(155U);
    msg.value = 0.6477313104600966;

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
    msg.setTimeStamp(0.14114628203123192);
    msg.setSource(13465U);
    msg.setSourceEntity(220U);
    msg.setDestination(38520U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8295572574902677;

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
    msg.setTimeStamp(0.17246736763430426);
    msg.setSource(46401U);
    msg.setSourceEntity(216U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(157U);
    msg.value = 0.2518797881601852;

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
    msg.setTimeStamp(0.25531769922249303);
    msg.setSource(53491U);
    msg.setSourceEntity(209U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5715261803176889;

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
    msg.setTimeStamp(0.09556605997188572);
    msg.setSource(26040U);
    msg.setSourceEntity(78U);
    msg.setDestination(46764U);
    msg.setDestinationEntity(86U);
    msg.value = 0.7211850386493621;

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
    msg.setTimeStamp(0.8662175992598753);
    msg.setSource(9559U);
    msg.setSourceEntity(234U);
    msg.setDestination(57533U);
    msg.setDestinationEntity(106U);
    msg.value = 0.6214409051293907;

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
    msg.setTimeStamp(0.41679899849719093);
    msg.setSource(25901U);
    msg.setSourceEntity(21U);
    msg.setDestination(7975U);
    msg.setDestinationEntity(80U);
    msg.value = 0.17705524593264577;

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
    msg.setTimeStamp(0.45098389457959975);
    msg.setSource(47313U);
    msg.setSourceEntity(254U);
    msg.setDestination(21047U);
    msg.setDestinationEntity(237U);
    msg.value = 0.1480976420314738;

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
    msg.setTimeStamp(0.6753040744913633);
    msg.setSource(5794U);
    msg.setSourceEntity(16U);
    msg.setDestination(51834U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6397116946379487;

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
    msg.setTimeStamp(0.4150122925470625);
    msg.setSource(43641U);
    msg.setSourceEntity(220U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(159U);
    msg.number.assign("HSDAODUNNEHMYAJCODXBKCZSLDVZ");
    msg.timeout = 42816U;
    msg.contents.assign("ZYXZJQRHNOFXMURPQHOAYWQCTDTHVKYPWMSKYHBAELEUZADLWCILMCUJHCMCBOVJVAFLWEMLBGTNVELSDLXESJGWKIYJNNKADTXXCVPRCQMZUSVLYOOVBPYBDFSKHOFUXMYPAPEJDKANGBDPKVNNORDIRRHME");

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
    msg.setTimeStamp(0.3905148019026988);
    msg.setSource(31523U);
    msg.setSourceEntity(61U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(176U);
    msg.number.assign("LYKCBQUYZNMDINAAVEUGPAXKKSQSFKVVDPSPJJHJBOLVZHRNJDWVECNIMXRIWFKYZDLOTCMFTRQKITASZSEXJKWYHSLJNXAQHTXKYXZXWVMIFQEKEAEZYQRROBFBPWWONGYLDEOCJFWZBRXGMIJKL");
    msg.timeout = 34422U;
    msg.contents.assign("UJGITKPMEZLEKJVKOAHRYGIHMVSXRWSFRAFJJWUEPEMZXMSIQOHZLAEOPRNZUYQRBDKKZZT");

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
    msg.setTimeStamp(0.5598447547426596);
    msg.setSource(48928U);
    msg.setSourceEntity(146U);
    msg.setDestination(57444U);
    msg.setDestinationEntity(40U);
    msg.number.assign("VIRGLDILNPDMR");
    msg.timeout = 46665U;
    msg.contents.assign("JMIOPJIJVTQLGYCUOIGKAJRPYVNECTWFTCCYAAKKJDDESXOGYXKWTASXLEPFAHTHDREDVRBGDFSZCKFVDKLTPBMJQJGJORKDQQDNFBIWRWZTBOWNZXFOXWLNXVVHQQYUMHAECMGHYSGZRDPIWTYAJLYUXNPTFXZBWKQVNUFXLDQCEZMF");

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
    msg.setTimeStamp(0.12927552854092228);
    msg.setSource(65264U);
    msg.setSourceEntity(208U);
    msg.setDestination(18790U);
    msg.setDestinationEntity(20U);
    msg.seq = 1867301403U;
    msg.destination.assign("JILRNNZGSSXGVXHFBDONEBFSYZPPLDFKSZIZHOTNROCGCWGWQXDOFUZRAWIVUOSIUMVZIQMPABMJUNMQDJFIHUODEBJAZHWLQKVRIFYEGUTJZLWLDONREQVUTSCYVEDXTVNWYKVUJEEPXTYKOBPFMYKQJGBKZAARYPPHXTSFPK");
    msg.timeout = 38448U;
    const char tmp_msg_0[] = {51, -71, 48, -9, -64, -6, 116, -5, -87, 56, 120, 87, 30, -6, 83, -44, -36, 117, 39, 62, 59, -109, 72, -83, 123, -110, 57, -126, -104, -82, 88, -22, -125, 34, 27, -86, 42, -67, 41, -99, -37, -65, -41, 45, -68, -21, 116, -86, 31, -81, 95, 79, 123, 72, 107, 69, -79, 62, -41, -87, 9, 47, 82, -38, 1, 118, 27, -110, 49, 55, -4, 46, 18, -2, -52, 12, 70, 22, 109, -117, 118, 117, -85, -37, -32, 6, -112, -90, 35, 77, -47, -28, -24, -10, 3, 84, -104, 34, 7, 58, 21, -22, -105, -34, 109, 73, 125, 84, -93, -76, 53, 55, -107, 67, -15, -6, 104, 0, -84, 78, 53, -71, 37, -20, 72, 58, -20, -22, -70, -59, 49, 62, -125, 94, -94, -3, -103, -37, -89, -6, 94, -61, 73, 108, -93, -5, 96, -30, -48, -60, -77, -15, 29, 0, -2, 72, -98, 102, -24, -126, 104, -95, 11, -100, 29, -44, -55, -62, -90, -77, -103, -81, 95, -106, -118, 106, -45, -114, 116, 110, -40, 101, 30, 45, 52, 32, -28, 50, -84, -29, -43, 38, 122, -100, 71, 125, -69, -118, -47, -83, 52, -58, -43, 67, 79, 43, -32, 32, 16, 32, -53};
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
    msg.setTimeStamp(0.9134550780105297);
    msg.setSource(29230U);
    msg.setSourceEntity(171U);
    msg.setDestination(27862U);
    msg.setDestinationEntity(191U);
    msg.seq = 1982012928U;
    msg.destination.assign("BDSXCDKWGDCOBWMFWLEHZOSEKTTRIB");
    msg.timeout = 27243U;
    const char tmp_msg_0[] = {105, -48, -81, 73, -83, 18, -6, 24, 76, -75, -88, 97, -111, -9, 36, -74, -125, 11, -1, -107, 7, 70, 17, 70, 29, -24, -54, 30, -51, 89, -57, -45, 20, -32, -106, -59, 6, -99, -7, 77, -72, 47, 27, -53, 2, -2, -79, 103, -54, 105, 103, -40, 83, 105, -96, 20, 42, 15, -66, 122, 80, -4, -93, 59, 9, -84, -65, 71, 48, -41, 61, 67, 118, -6, 23, -28, -15, -67, -35, -32, 122, 75, 38, -104, 86, 51, 13, -75, -89, -17, -34, 88, 119, 18, -5, 12, 53, -76, -119, 32, 76, 88, 28, 15, 52, -24, -78, 24, -56, 17, 50, 9, -38, 34, -34, -26, 55, -105, 21, 94, 50, 79, 17, -113, -114, -62, 9, -111, -62, -97, -24, 57, -99, -72, 39, -124, -9, 58, -4, 79, -125, 114, 77, -77, -88, -12, -13, -55, -107, -108, 121, -123, -126, -9, 86, 35, 21, 120, 82, 31, -44, 74, -79, -16, -13, 102, -80, -18, 122, 77, 38, -81, 72, 71, -107, 44, 57, 62, -31, -32, -112, -32, 18, 90, -96, -110, 119, -127, 103, -114, -28, 51, 113, -27, -56, 2, 108, 100, -50, 22, 122, -103, -68, -123, -97, 21, 66, -43, -19, 85, 55, 116, 77, 40, 81, 8, -67, -70, 46, -101, 10};
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
    msg.setTimeStamp(0.673340632550218);
    msg.setSource(47136U);
    msg.setSourceEntity(241U);
    msg.setDestination(11902U);
    msg.setDestinationEntity(173U);
    msg.seq = 3185501404U;
    msg.destination.assign("VGJPQOECXPVWITNKPIZXXNOYHQXIWRNVXZGRRERZUQKOCUUMPKHAZIMIZYAYQ");
    msg.timeout = 55786U;
    const char tmp_msg_0[] = {76, 27, 8, -47, 92, 103, 33, -2, 99, 67, 99, 17, 75, -29, 29, 42, 37, 57, 101, -55, 118, 90, 41, -103, 48, 50, -120, -107, -119, -58, 106, 52, 102, -51, 74, -121, 62, 119, 125, -37, -36, -2, 74, -111, 31, -19, 77, 39, 81, -19, -32, -43, -19, -88, -110, 83, -95, 60, -113, -7, -35, -68, 83, 54, 93, -100, 87, -47, 95, 7, -28, -102, 63, 94, -88, 71, -88, 55, -79, 124, -34, -108, 58, -59, -88, -128, 61, -12, -82, 121, -108, -70, -14, 43, -84, -16, -114, 0, -7, 0, 85, -92, -104, -11, 18, -23, 95, -50, 126, 85, -51, 6, -94, 101, 16, 7, -19, -92, 96, -9, 73, 60, -56, -47, 59, -90, -49, 111, -39, 118, -125, 72, 74, -110, 114, -21, 28, 83, -50, -12, -75, 103, -47, -35, 126, 37, -40, -12, 0, 65, -40, 77, -54, 58, 87, -100, -102, -88, -49, 117, 35, -30, 19, -17, -8, -87, -10, 70, -11, 33, 98, -65, -1, -31, 92, -83, 21, -44, 41};
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
    msg.setTimeStamp(0.9047743461825758);
    msg.setSource(53530U);
    msg.setSourceEntity(61U);
    msg.setDestination(48310U);
    msg.setDestinationEntity(62U);
    msg.source.assign("UEVZJETJJCKAXHHDELXNXTJEOGLBOLVYMYLQSEURICRAKXLZVAWOJKNZAIZCMFTCCLUEQDQFQMXPVDVPKCVNUZHMFHHVJHTCSNSPEGHYBURQXSAEBIMFAULWSGGGKXFEMMRTZWDUBKPRMSPHAODJIYOAFATYYBXIFIGTHQLHCGWTEPYNOLPUQIZONNBLRUSQPXNYCKANWYYITIDSFTSBOWCION");
    const char tmp_msg_0[] = {-115, 121, 12, -127, -16, 20, 2, -117, -98, 86, 104, -33, -118, 9, 82, -43, 5, -125, 99, -28, -88, 104, 0, 56, 122, 109, 29, -46, -16, -128, -100, 115, 6, 111, 94, -27, 69, -31, 33, -84, -44, 18, -22, 80, 32, -100, -69, -113, 122, 11, -108, -29, -16, -30, 9, 26, 25, 50, -17, -81, -2, -113, -67, 103, 53, 84, -99, -23, 12, 60, -102, 102, -73, 82, -121, -58, -128, -76, 100, -102, 79, -7, -30, 71, -40, 115, -88, -79, 10, 37, 92, 99, 105, -37, -75, 15, -42, 52, 25, -114, 52, 32, -43, 86, -85, -84, 54, 89, 60, -110, -24, 100, -58, -108, -23, 26, 15, 22, -112, -16, 84, -102, 35, 36, 98, -19, -90, 52, -31, 123, -75, 121, -42, 113, -63, 73, 4, 121, -26, 106, -39, -46, 62, -92, 91, 22, -102, 54, 25, 65, -112, 115, -56, 97, -115, 84, 113, 126, 81, 83, -59, -38, -90, 69, 12, 58, -34, -75, -42, 58, 112, 20, 53, 31, -123, 59, -121, 19, 34, 77, -44, -99, 81, -23, -89, 80, -81, 62, -35, 79, -11, -49, -118, 69, -87, -85, 33, 114, 38, -81, 93, -54, 95, -102, -23, 60, -48, -20, 31, 32, 64, -64, -51, 5, -1, -36, 44};
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
    msg.setTimeStamp(0.5891289983904808);
    msg.setSource(15856U);
    msg.setSourceEntity(142U);
    msg.setDestination(40782U);
    msg.setDestinationEntity(146U);
    msg.source.assign("SBBUMWSZNGHPVIXHYAFLZNWEYPFRLLMVGCUMBBBBYNDNOGKEHLBKRJQQXNLAIRYSFMOZRFIQOLYGJTYXQZJIGLWTIYPNFTVPPVSHCSIVWAHQHKEWYQYEUNZOUZEMKDOKAOGEXQDKDIMCAHWHCEA");
    const char tmp_msg_0[] = {-11, -88, 30, 6, -91, -90, 44, -113, -67, -91, -10, 126, -121, 23, 35, 32, -50, -121, 69, -67, -86, -118, -78, -57, 6, 87, 15, -107, -5, 113, 37, 98, -125, -2, 45, -89, -21, 81, -121, 75, 87, 18, 86, 83, -99, -32, 111, 2, 30, -35, 67, -99, -72, -74, -34, 111, 102, -97, -22, 47, 54, -13, 6, 23, -47, 29, -91, 77, -19, 105, 56, 4, -73, -89, -2, 48, -88, 12, -85, 27, -121, 17, -73, -69, -115, 97, -36, 114, 69, -44, -74, 0, -97, -88, 82, -96, -123, -110, -33, -26, -95, 97, 99, 125, -71, 85, -56, -41, 25, -85, 74, -47, 19, 106, -53, -39, -64, 125, -72, -67, -11, 104, -6, 122, -4, 3, -84, 55, -81, -11, -25, 107, -69, -72, 77, -44, 48, 6, 35, 13, 12, -48, -8, 113, 26, -75, 45, -72, 16, 2, -67, 56, 30, 92, 57, -69, -55, 36, 90, -45, -78, 27, -36, -107, 49, 39, -83, -42, -30, -7, 14, -73, -18, 11, -21, -98, -18, -64, -97, 16, -124, 61, -85, 123, 57, -105, 70, -47, -44, 107, 85, -89, 83, 97, 78, -21, -34, -97, 81, 41, -51, -1, 55, 109, 28, 84, 26, 42, -40, -27, -10, 117};
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
    msg.setTimeStamp(0.0006549638197864693);
    msg.setSource(54133U);
    msg.setSourceEntity(164U);
    msg.setDestination(57063U);
    msg.setDestinationEntity(54U);
    msg.source.assign("SSBMJYTLZIDCEUWCBPVLOVEUAZIRJUNPZPKFHJMKNTYNITLORSYWLFTZEKEFBWZXONHVFRXFPPWIW");
    const char tmp_msg_0[] = {-19, -124, 98, -11, 45, -34, 114, -54, -110, 100, -46, 70, 82, -94, 17, 42, -99, 13, -10, -27, 117, -12, -37, -16, -124, -88, 40, 56, -9, 119, 5, 77, 120, 79, -98, 71, -51, -10, 120, -93, 60, 126, -7, 29, 84, -55, -97, 109, -22, -62, -88, -97, 46, 19, 108, -126, 96, 105, -13, 126, -65, 26, 72, -110, 72, 112, -48, -78, -92, -117, 18, -34, 103, -101, 20, 9, 69, -77, 115, -38, 50, -68, 82, -72, 67, 75, 61, 125, 105, 83, -59, 94, -127, 62, 70, 1, 40, 109, 93, -25, -51, -128, 126, 20, -4};
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
    msg.setTimeStamp(0.44761286199448236);
    msg.setSource(40967U);
    msg.setSourceEntity(42U);
    msg.setDestination(11351U);
    msg.setDestinationEntity(249U);
    msg.seq = 854876236U;
    msg.state = 218U;
    msg.error.assign("PJKUOOXMSMTJZEQQWCOHOBFCPUY");

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
    msg.setTimeStamp(0.3506900566854262);
    msg.setSource(32805U);
    msg.setSourceEntity(190U);
    msg.setDestination(586U);
    msg.setDestinationEntity(34U);
    msg.seq = 3391253592U;
    msg.state = 196U;
    msg.error.assign("CADHUSPQDQSZKLDAOQGAMOAWJJHEJKKJPTHWNBFEQCIDTLFINVNXTHWNENNNCYVVATQCASUYBXFRXDZIBHGDUROPEWYOAMIPAXCMRFMCMLYNJXGSUHVBFUOQHPMYXDWGJSQKJCFGZPRGTGPSYRXORYGFLYONGCTQTKSVCEBIJ");

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
    msg.setTimeStamp(0.14299587198739483);
    msg.setSource(14725U);
    msg.setSourceEntity(206U);
    msg.setDestination(34887U);
    msg.setDestinationEntity(202U);
    msg.seq = 2812376829U;
    msg.state = 106U;
    msg.error.assign("WZDQLLRBOVOVTZAUWNBNEPFHHNCUIRPSOZNGKBELZBQZHDXPOYAPJDOMASCYXMZPLGYNFJGTEFDERNMHAJVOXMQQTGQFEBOWHHRMEGGGSSSKVNUMFDLXCLUPCZOKKORWFIAXIIYQCMTITORZFZQEUKJABPTSFKANXWQAEVGKXGDSLBJRMNMUWRTWYCDCJSAWDJSDYEKYSIXIPPVTUCBFLFJYLJBMIUUQVYVUTHPCAITE");

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
    msg.setTimeStamp(0.5244672983477339);
    msg.setSource(13559U);
    msg.setSourceEntity(146U);
    msg.setDestination(43448U);
    msg.setDestinationEntity(207U);
    msg.origin.assign("JOVBFBABMOTZZYJVTWPNAWTLHZPPZFPSYQKWJFSKNBYXOMFWUYDEEOUHBIQKRPOXAULEEZQQCVDGHRDCIKFHCBWIPDZXMNFDDQMRHNOEOWQCVIYNTZKSGYZAPGGRMMSRIYWDEJBUUIRVYSVRMFFSATSAHHHMBRXZLKLYGRXLGDSELELTVJPIIQJRLCIUUBAUTDNTZCOFTMHSWNPCAEALEXJGGPQOXH");
    msg.text.assign("ABOTULATIUXZTSDIRWKMRLCAXPDITNFEVFWYGCDWOLVQKIAMOXNBOCYIFGUHYZHZRYCQHITJGFEPEIJGDRESAJJBEQUPOLDSNPUWMNWVQQ");

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
    msg.setTimeStamp(0.358833072568678);
    msg.setSource(3943U);
    msg.setSourceEntity(108U);
    msg.setDestination(14150U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("PZZQOJWSRGZKSCJCDLINSLLROTWIOWKVDGOTHBQHCKXYUWVHDJGHRTYOYXHXKRQVTXRCEFHCELFGMJOLTTBKMGAHUEVA");
    msg.text.assign("PVBOHFXRGQJQPJYZVCOKMUFWWGDLSQMCETZVXKLZDRAC");

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
    msg.setTimeStamp(0.6761377847815574);
    msg.setSource(63310U);
    msg.setSourceEntity(252U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("ENALXMTQFECJZSQQKQGMNXGPSPXBFPGLABFNKGAXHAWLQIJQUJPRDRNSVWOMCJYRVKGCYVJJSTWIHNJPVUHLLELXKDKNDKXAEFPDYGYGNHFUWOJSCKVLIBOLSTNBRAFLCHTOHEIRDISGUUDMWPKOIAYMTIZUYMJYQRLTQBPZCHHGOHVMWAKXFPVWIZYQSRNZZKHZMZVFSCREBICXAEQRWTTFUTBMTGX");
    msg.text.assign("IKAECHBUHGIQKWFYSUJKOBNNIEDULHOXTCZVBQPKFDQGGICZKZBMXFJWVXGTMTGLRPRNDMPOISFBNVACPDYOCQHWMFUUARIIBFFVVVAJPAAJIOCTWBIBEQDPTHETSLSCMWNELCUJKFGLXPXJGZMWQSTMGYDXYECDNOICUKGSLQZGYTTNBOXEPHLZQAZDHRLDPQFXAYKHUSQHLKORVMTWZYRDSRBMUUJNXJ");

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
    msg.setTimeStamp(0.5866722715412577);
    msg.setSource(63283U);
    msg.setSourceEntity(166U);
    msg.setDestination(1884U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("JLNXNJMCAXEYJWQOKDOXRTOZILDYKHPSAGTTSZMFCLPBDVUYVDIXAAHMKRANLWEVBEEOIXWXLZFFQHGQYHZKCRYKDNGNRUGORMZVZUSTAGMICGYJDUPSCZUFZAWGGPDEBBGVIRSKVBKRYTTMBIJMSSJVHWUEPIHZXAFJQNQEBSNWAKLHXWMPLQEBIJOLYLROWCIYQPTUESTDJJEOPQG");
    msg.htime = 0.07934492172091268;
    msg.lat = 0.5879889948040256;
    msg.lon = 0.13105480697352234;
    const char tmp_msg_0[] = {122, 114, -72, -45, 62, 19, -61, 2, 29, -61, -16, 33, -11, 45, 70, 66, -75, -20, 41, 107, -78, -101, 92, -36, 47, 6, 113, -88, -125, 123};
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
    msg.setTimeStamp(0.01235214459805789);
    msg.setSource(4932U);
    msg.setSourceEntity(213U);
    msg.setDestination(51412U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("DOBEZPFYSUKELKJCKIFCPCPHEQBBSGWZMYGZBDJYVSLISVTARMTBLJYOWDGUTQJNLNFUOAAJOWXBNSRHOHZFKKHOXMZFTVOPCVJVNZKGVOUYVXGEOIBOZWBALWRARCHYEANGCPMEJM");
    msg.htime = 0.7592644048684808;
    msg.lat = 0.7084851117933706;
    msg.lon = 0.48545416540238684;
    const char tmp_msg_0[] = {75, -118, 27, 122, 94, 58, 46, 65, 102, 2, -39, 55, 32, 105, -72, -24, -42, 99, -97, 48, 18, 18, 3, -127, -97, 88, -19, 81, 54, 92, 116, 52, -68, -93, -23, -32, -99, -76, 81, 38, 68, -93, -24, 0, -109, 25, 87, -55, 42, 67, -2, 78, 96, -42, 76, -11, 77, -41, -76, -43, 22, 56, -7, -120, 15, -39, 43, 69, 87, -105, 79, 3, 52, 96, -27, 71, -116, 69, -115, 111, 18, -110, 27, 49, 61, 38, 55, 1, 57, -74, 91, -100, 47, 53, 52, 24, -94, -120, -47, -38, 86, 126, -17, 14, 64, 31, -77, -12, -49, -43};
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
    msg.setTimeStamp(0.6840568841609938);
    msg.setSource(21816U);
    msg.setSourceEntity(47U);
    msg.setDestination(8244U);
    msg.setDestinationEntity(66U);
    msg.origin.assign("GHUYPNLTSDYYQZQDCZNADKUKJNCNUZVMOEKCBFGMIIIMSZFKTFBUSPQNCHWQLBRXCHVTXVOROVJMEFZHYHFRBKBPAFPOPCLAWJRBSKMWEAEQXVVYXRCBIMWKJLGKUPJRJRJNFHEESW");
    msg.htime = 0.29504362884978397;
    msg.lat = 0.06953429729191396;
    msg.lon = 0.6862557454614152;
    const char tmp_msg_0[] = {-120, 88, 102, 71, -5, -10, -97, 97, -88, -26, 47, -119, -65, -48, -104, -75, 58, 68, 7, -19, -103, 13, 98, -1, 125, -89, -32, -98, -68, -40, 8, 28, -59, 7, 95, -117, 62, 26, -128, -127, 112, 121, 113, 113, -43, -73, -59, -54, -9, 72, -104, 98, 23, -63, 91, 90, -122, -87, 72, -122, -124, 17, -10, -46, 27, 9, 124, 99, -64, 82, 37, -5, -55, 18, 121, -5, -15, -72, 82, -30, -100, -107, 51, -119, -113, -104, 37, 66, 57, -43, 98, 30, -55, -65, 104, 121, 20, -60, 61, -73, 119, 124, -105, -114, 61, -15, 64, 115, 95, -123, 66, -84, -70, -122, 44, -26, -122, -14, -120, -52, 44, -6, 57, 90, 95, -98, 120, -119, 0, -45, 108, 72, 112, -51, -58, 63, 101, -12, -18, -34, -126, -72, 14, -3, -122, -113, 94, 13, -8, 120, 63, -60, -108, 1, 120, 21, 107, -42, -121, -59, 98, -109, 117, -13, 86, 25, -102, 53, 92, 26, -97, 39, 48, 53, 31, 35, 13, 88, -24, 48, 73, 35, -22, -51, -77, 79, -105, 84, -98, 106, 47, 40, -93, 24, -117, 4, -92, 100, -109, 93, -36, -66, -1, 116, 122, 67, 16, -65, -68, -77, -65, -85, -84, 78, 27, 80, -65, 73, 98, 97, 113, 4, 92};
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
    msg.setTimeStamp(0.7616137903934901);
    msg.setSource(40839U);
    msg.setSourceEntity(60U);
    msg.setDestination(59656U);
    msg.setDestinationEntity(102U);
    msg.req_id = 51724U;
    msg.ttl = 43742U;
    msg.destination.assign("DLOFSCIOBIZOXLHUUYWJRVFTOCGXNLQPFYVDAWPBPRKUJLRJTGBOLNWSDTBZKCOTVVYQBVIFARNCKDAGEWSZKHHZQUDBZMAFLPYINHYVZEILQJGUXSMUVXANGAZHNCMCDRPXFFSJKMIOFJUWBISLXCJQMHPAQUCJTDYROQEEOCIZDEUVSKXRFXIWGLQRPHALDYRWHAKYAPXVVTJSCMPWGKWBEGOKNDEEHZPMYQTENIXMUFYRS");
    const char tmp_msg_0[] = {-64, 46, 53, -95, 112, 91, 38, -27, 8, 32, 86, -62, 126, 104, 13, 43, 109, 37, -54, -86, 104, 105, 126, 18, -117, -93, -43, -57, 79, 50, 13, -62, 92, 108, -123, 111, 100, 126, -22, -20, -127, 46, 45, 90, -17, 12, -78, -126, -93, 61, -103, -41, 124, 66, -122, 30, -93, -112, 86, 70, 17, -127, 117, 120, 2, 124, -12, 47, 105, 105, -14, 16, 65, 59, 58, -23, 19, 46, -18, 104, 47, -1, 90, 40, -41, -61, 65, 70, -23, -98, 99, -36, -40, -38, 92, -91, -126, 95, 122, -62, 125, -108, 17, 116, -47, -123, 86, 65, 6, -93, 53, 122, 69, -61, -118, 33, -121, 37, -102, -2, 114, 58, -117, -48, -52, 87, 36, -26, -125, 15, -59, 12, -97, -22, -84, 46, 14, -88, -120, 37, 92, -79, -115, -35, -90, -103, -123, 62, -126, 37, 114, -95, 95, -21, -18, 26, -108, -2, -13, 53, 122, -67, -111, 4, -10, 72, 81, 57, 118, -32, -65, -67, -84, -105, 9, -109, -83, -35, 5, -49, 126, 37, 44, -3, -12, 48, -51, -65, -74, -95, 15, 8, -30, -74, -29, -95, -85, -26, -87, -117, 28, -106, 34, -119, -68, 41, 47, 4, -113, -98, 122, -50, -82, -26, -2, 59, -77, 54, 61, 27, 124, 10, 94, -127, -40};
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
    msg.setTimeStamp(0.009663700090018601);
    msg.setSource(14480U);
    msg.setSourceEntity(60U);
    msg.setDestination(56394U);
    msg.setDestinationEntity(42U);
    msg.req_id = 58512U;
    msg.ttl = 1252U;
    msg.destination.assign("HXFCZXIZFPIYHYPERUUHOUNKRGXYXQDVLRJIJCHGSOJDXKSNTNWMOTRUIJLZSKFIQZFCNHJBDXCDVZJLERMWYGQWXLIFTBQMOEJBAUGVKHKP");
    const char tmp_msg_0[] = {-33, 75, -88, 50, -89, 123, 27, 97, -117, 37, -25, -56, -127, -106, 88, -69, 61, 22, -83, -65, 15, 125, 49, 48, -109, 87, -40, -32, 83, 57, -51, 13, 52, -115, 124, 82, -101, 75, 19, -67, 125, 33, -53, 118, 73, -66, -62, -25, 101, -105, 35, 55, 10, -100, 59, -91, 66, -89, 22, 85, 42, 125, 69, 96, -8, 43, 12, -19, 54, -24, 0, 107, -96, 116, -84, -88, -19, 102, 23, -113, -86, -57, 11, -42, -116, -7, 122, 115, 98, 101, 40, 51, -65, 70, -60, -52, -38, -8, -54, 96, -84, 122, 0, -11, 31, 30, -21, -56, -127, -8, -92, 55, -69, 103, -84, 3, -25, 112, -35, -108, 10, -56, -62, 95, 110, -58, 53, 79, -104, -3, -57, 76, -126, -123, 27, -36, -21, 66, 124, -65, 110, 23, 118, -21, 118, -17, 65, -67, -44, -20, -29, -29, -26, 74, -125, 112, 62, -9, 93, 41, 40, 123, -110, -117, -86, 118, 119, -11, 39, 26, 73, -123, -15, -119, 111, 45, 6, 64, -14, 93, 69, -64, 53, -64, -90, -93, -73, 35, -72, 22, 56, 78, -76, -118, -84, -117, -85, -71, 58, -56, -29, 106, 73, 4, -90, -42};
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
    msg.setTimeStamp(0.902907206982071);
    msg.setSource(27412U);
    msg.setSourceEntity(96U);
    msg.setDestination(24517U);
    msg.setDestinationEntity(91U);
    msg.req_id = 44277U;
    msg.ttl = 40635U;
    msg.destination.assign("JZABKSCWYCEENOSUEAGXCFIZOPNXMJHZTWOVGOFSYVXOKZYSVOCRUZFJVIIBGDXCHDDVNBXAQCGEJYPEBVAPMLPLMIUWWVRCIKLMLWOOQONTXJRIGURLCOQYDUUSXWCZJNSGQHHFTGPYHFX");
    const char tmp_msg_0[] = {-50, -41, -33, -101, -55, -18, -94, -58, 75, 34, 69, 123, -98, 54, -71, -51, -94, -6, -71, -106, -100, -3, 100, 37, -58};
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
    msg.setTimeStamp(0.45062625754361507);
    msg.setSource(15326U);
    msg.setSourceEntity(28U);
    msg.setDestination(52826U);
    msg.setDestinationEntity(145U);
    msg.req_id = 30481U;
    msg.status = 58U;
    msg.text.assign("DRBAXIUUKPMJANNXJKNRYFDCSMYOJMPEDWDUTMRYSLRACNJLCEQHSSNNXRQHZBMZTVCYXSTDQFPZWHFLVVWLGHFYEPOAUHDXGKISITALXPMGWTBIQCUGCHCEVTFKGUFONXVCWFHZAGNUPYOEEVZZVXQVSYIWUJRBQKHTJZVBRBLDYIMJDGTGBWQPXUJJVSPDROFEOEHYHOGYCXMABMLIRFLSEDQOOZAWTRLWOTKB");

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
    msg.setTimeStamp(0.22502983404140597);
    msg.setSource(63269U);
    msg.setSourceEntity(242U);
    msg.setDestination(11750U);
    msg.setDestinationEntity(191U);
    msg.req_id = 55408U;
    msg.status = 46U;
    msg.text.assign("UBNIUNCLXSCXAECOWSMDDJVQJXIHYVKJTVDGWLKHHYOPPWRTDCZJWRNFPWADAKYYXYYLJWGVHEIZXHCDBVRITUMNBPNPPUXBRXLTAURTWSEFHGJOONRKDZHAUZQZEYHPRBGBVDUVGJSVLTKNEVFSFFFTMIYXQUCDJSABZRNLATIPQOFEBACWQFKGMGAGOKGKTMSEM");

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
    msg.setTimeStamp(0.45283530395487626);
    msg.setSource(17206U);
    msg.setSourceEntity(195U);
    msg.setDestination(44162U);
    msg.setDestinationEntity(163U);
    msg.req_id = 35077U;
    msg.status = 101U;
    msg.text.assign("BPKGPDGSRESYELBVWERBTPCSQSAZOIUECVKOMVBFIQDJDONOCUGFCXKBEQVRDHBNLMLHJCWCIDMBDWMGYOUTIMNBO");

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
    msg.setTimeStamp(0.4334099433787202);
    msg.setSource(60299U);
    msg.setSourceEntity(8U);
    msg.setDestination(58241U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("HYSFKBHGESDSUOMJGOTENAFCCEARVDRLVINDWCKMQLIBUUYFIXRUAUEZDGXPPBWZJZJZLHIVTMXIAICGYJYTKDLRDSYEVVPSQFYHFCDGABBPDBPAXZKGCNHUSTITSDHPZMVGOFNPQVOZKGBRXMOYWTOJAIENGEXLKEMJTMXCHLTQRFNRNRLZODOKJUWUBHXUPWSAXBYLVSXOOHLQARJYWMJCEVWCFQKNWBQRGMQMNWVPAUQKYZLFCTKT");
    msg.links = 2827109486U;

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
    msg.setTimeStamp(0.4378549209563235);
    msg.setSource(52805U);
    msg.setSourceEntity(18U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("ZTDXYJDWXCHKLARXBGVOEGMTGQGVLWLSHEXUVHPXKYEFRBFBBQUOWWRPNPVYNMTLVORINXOZQSMLTXIGQHLRSAIEFCROZDBHDCMBJBZTSZCSYGGDWDGTJQULNPQMCKHYMNNKAPDWKFSHYJUHPPEIHPZCTUGUXJTOQNCDUQ");
    msg.links = 2798742032U;

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
    msg.setTimeStamp(0.686609771067343);
    msg.setSource(39509U);
    msg.setSourceEntity(73U);
    msg.setDestination(30681U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("MSUUNNEYBFIFWBNBYWXIHWNMVSFAKIDVBIBNONEVUOEOVGWFHWIQADXUWSSGPAJGNOELMNGKRFHPJCIVDMLDEHKRSCRCDEJXTGXCOFOVPVQJVTAACGPWERXASTICLFKIYTQCBHURQHJGZTRZMKMCVOEMYGPPQUQVJFXGQYXRLZSHTTDDHZSPHFMACTPUOLBRASJKLLKPXLJKSXKQJMPEUTUZWYFDOEQYYCDHMBOBIZLT");
    msg.links = 2775862736U;

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
    msg.setTimeStamp(0.9577050774541144);
    msg.setSource(57563U);
    msg.setSourceEntity(142U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("MPEUGOZKSABRXVXHNKJZJEWNNFBHOWXWILTJMVFEDDZACOMGGTIAOQYFRMSOTYICUZSYRCEFYUYXIKFNOVYUOZGEPKNHAPUBMNLOQCQVGEHXKKMITSEVHJAGACHCDIVNQZEGJXQZMXTCWGMNGIRBHSDUUQLPXXRQLWZDSDRYMBSTJCFGWPEDZKTLJFWUVVLFWA");
    msg.action = 197U;
    msg.grouplist.assign("GDALXJRPZZKHVMLPDBLLNLFRATPIUASJXJSIFVGPGUZDEMZQVPAAXGEXFOUKWZOFXGSJLNQVUXTJJDOPRSHUYHUVLEYGNIYLEKWQHJZUCHFNOKVMBPVKVVWWAHRLRYQQISZEPPMNBETMCGECBYQTZPQUTDGA");

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
    msg.setTimeStamp(0.6415262142990071);
    msg.setSource(6546U);
    msg.setSourceEntity(141U);
    msg.setDestination(6807U);
    msg.setDestinationEntity(133U);
    msg.groupname.assign("YKCZJHSSWURLMSWVXWMBDREKHNCOZUEHKRDLOOXHVWLOLAZMKNGABXZGYFLUMPYRXBEUMWM");
    msg.action = 97U;
    msg.grouplist.assign("FXHOAACRYWPTWWAJVZOTYOIADXXMPMEGBRJYRTNPKBSAYOZEVH");

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
    msg.setTimeStamp(0.25139964580028484);
    msg.setSource(3409U);
    msg.setSourceEntity(201U);
    msg.setDestination(3695U);
    msg.setDestinationEntity(88U);
    msg.groupname.assign("LWBBRMIFNAXUUSNFYZWAJMNDATEKQMJEBSAZUYPKHLJZCUKIHFPROOGAABIACKECDBDSWXCDYDYKJHOUIURGNZLYIXIBYCIHXCMOQHXZNUNPRDFTAHB");
    msg.action = 32U;
    msg.grouplist.assign("UNAGPEXGWRIZOZVCPJSSHLHCPTATKTEKUBITEGYYWIBQAUFANSJITJOHRYWGFAMHXPLMSSXGECBROLZEVJVEDGNIZTXOLKOCSNSTNLJAFUILAPTRPKRPOQKDHHYPYBQKICJVFKYKVIKZMBALAFZGZWHPUVHZMBTYQUJGJ");

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
    msg.setTimeStamp(0.7993873592190058);
    msg.setSource(9169U);
    msg.setSourceEntity(106U);
    msg.setDestination(51006U);
    msg.setDestinationEntity(71U);
    msg.id = 176U;
    msg.range = 0.5283146811129764;

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
    msg.setTimeStamp(0.46729433278028665);
    msg.setSource(20387U);
    msg.setSourceEntity(132U);
    msg.setDestination(29093U);
    msg.setDestinationEntity(84U);
    msg.id = 86U;
    msg.range = 0.2001732351108012;

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
    msg.setTimeStamp(0.43927597448549305);
    msg.setSource(43996U);
    msg.setSourceEntity(8U);
    msg.setDestination(1940U);
    msg.setDestinationEntity(209U);
    msg.id = 114U;
    msg.range = 0.6563987619371916;

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
    msg.setTimeStamp(0.6172816040742918);
    msg.setSource(58936U);
    msg.setSourceEntity(119U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(213U);
    msg.tx = 170U;
    msg.channel = 8U;
    msg.timer = 31292U;

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
    msg.setTimeStamp(0.09079707382850999);
    msg.setSource(27462U);
    msg.setSourceEntity(156U);
    msg.setDestination(21405U);
    msg.setDestinationEntity(253U);
    msg.tx = 101U;
    msg.channel = 38U;
    msg.timer = 61408U;

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
    msg.setTimeStamp(0.7226665153497638);
    msg.setSource(523U);
    msg.setSourceEntity(182U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(68U);
    msg.tx = 252U;
    msg.channel = 222U;
    msg.timer = 6378U;

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
    msg.setTimeStamp(0.7707340941399585);
    msg.setSource(57113U);
    msg.setSourceEntity(149U);
    msg.setDestination(8468U);
    msg.setDestinationEntity(133U);
    msg.beacon.assign("UUJAQHETMTZFVLAOOPQVORZRKONUEFDBLYJAGKBMSSDJYFBLUGFGNEJVRJLWPERNZYIKEXPXHUOBVUYLMWXFXPRSYJRKMTRCFGJYHWAIRFWDQVETYSCCZSIDSF");
    msg.lat = 0.871148566389061;
    msg.lon = 0.8636359578830528;
    msg.depth = 0.49096437138407456;
    msg.query_channel = 181U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 182U;

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
    msg.setTimeStamp(0.9112145129551841);
    msg.setSource(18243U);
    msg.setSourceEntity(181U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(129U);
    msg.beacon.assign("BNUHVNLPXSLDBIMWBBCJQYLENXIRRKTYBSEMZHAQAIRLIDQODKEPZDHUFVDQVUZBDBYYZZAAWGRCRHMYOFJSQMQNPCYSLDOTUKVLMCHTGASBHKRCESXVAIZPLHVXRZAYUQJVBEDIASEBXFSDJFLGKCJNNZIGPDWPXWEFWTIRKGJQMIJEKGLFCOFT");
    msg.lat = 0.31473425562663815;
    msg.lon = 0.9368656219977767;
    msg.depth = 0.7378916608558054;
    msg.query_channel = 53U;
    msg.reply_channel = 191U;
    msg.transponder_delay = 85U;

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
    msg.setTimeStamp(0.9869557144769787);
    msg.setSource(18739U);
    msg.setSourceEntity(251U);
    msg.setDestination(48331U);
    msg.setDestinationEntity(113U);
    msg.beacon.assign("LIFLORZMHBLLCUCKKPGVDZKNNXUFBDRVQGZGYHDZODGCQSUGYTCZWYJFXMTBAMDPBIJTBBPPJYNDYIDVKRIQNPTQQEVKXWURHZLOOQAXTWIPSAARGHRAXEZIXBEGSWFMTFDSCJVSAUKJENHYOJWFCYNXNLVJXGUILBPFUUAFEJZGVSXEGDMKOPQXELYMWOZOSTUDISKZEPEIAQVCWCJURSMBHVBCHONLAVWPNFIRYTNFRJRMMWKKLOHMWHATQ");
    msg.lat = 0.3547028540606433;
    msg.lon = 0.6055013925523937;
    msg.depth = 0.47429704450890353;
    msg.query_channel = 211U;
    msg.reply_channel = 0U;
    msg.transponder_delay = 128U;

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
    msg.setTimeStamp(0.36873119351245476);
    msg.setSource(45252U);
    msg.setSourceEntity(78U);
    msg.setDestination(22722U);
    msg.setDestinationEntity(186U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.1753730092720137);
    msg.setSource(9071U);
    msg.setSourceEntity(206U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(149U);
    msg.op = 248U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FANQPSEQJXUGEFNUVMTZCTQCCEKWWQIHKD");
    tmp_msg_0.lat = 0.1925492956749888;
    tmp_msg_0.lon = 0.2280159063935031;
    tmp_msg_0.depth = 0.6427904626759986;
    tmp_msg_0.query_channel = 44U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 126U;
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
    msg.setTimeStamp(0.8018853017320113);
    msg.setSource(57903U);
    msg.setSourceEntity(31U);
    msg.setDestination(19843U);
    msg.setDestinationEntity(11U);
    msg.op = 175U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KKNNYYMEPJFQAULIFMEGMOTONDHJVHXQAQOQQVMPMBFXIGAEHHCPKZPNAYIAWJORDOEITZOBIJNTTTTDCFSXUNURHZEUXDEZSOXYHIVPOJRXGWGUDCLJDOHDZAWSPPMSIZYZGFYRDPWISNVTYTYLMSLVJVFXZIBIQHPCQLGYNVAGGVRMUFKEGSBRLWMKXLZUDASEBAJHAOWNYSSUEVWRJQVCLXTFBUWWLGCHRUKQPF");
    tmp_msg_0.lat = 0.4960103486283689;
    tmp_msg_0.lon = 0.7048225211750974;
    tmp_msg_0.depth = 0.30229109597320447;
    tmp_msg_0.query_channel = 217U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 212U;
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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.28967552196038426);
    msg.setSource(40136U);
    msg.setSourceEntity(12U);
    msg.setDestination(63173U);
    msg.setDestinationEntity(160U);
    msg.address = 40U;

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
    msg.setTimeStamp(0.1850911369239101);
    msg.setSource(61692U);
    msg.setSourceEntity(229U);
    msg.setDestination(11038U);
    msg.setDestinationEntity(111U);
    msg.address = 153U;

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
    msg.setTimeStamp(0.6384895153552321);
    msg.setSource(26764U);
    msg.setSourceEntity(177U);
    msg.setDestination(55378U);
    msg.setDestinationEntity(40U);
    msg.address = 162U;

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
    msg.setTimeStamp(0.9461705259293304);
    msg.setSource(60565U);
    msg.setSourceEntity(170U);
    msg.setDestination(30416U);
    msg.setDestinationEntity(38U);
    msg.address = 32U;
    msg.status = 83U;
    msg.range = 0.8404279757010168;

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
    msg.setTimeStamp(0.21497572202042758);
    msg.setSource(21149U);
    msg.setSourceEntity(51U);
    msg.setDestination(10099U);
    msg.setDestinationEntity(61U);
    msg.address = 120U;
    msg.status = 149U;
    msg.range = 0.3599440176429325;

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
    msg.setTimeStamp(0.4669074129825428);
    msg.setSource(43474U);
    msg.setSourceEntity(15U);
    msg.setDestination(61371U);
    msg.setDestinationEntity(192U);
    msg.address = 128U;
    msg.status = 141U;
    msg.range = 0.4251967207993016;

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
    msg.setTimeStamp(0.5009202225557834);
    msg.setSource(29611U);
    msg.setSourceEntity(95U);
    msg.setDestination(49143U);
    msg.setDestinationEntity(175U);
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.29688036861214917;
    tmp_msg_0.phi = 0.8922610188086896;
    tmp_msg_0.theta = 0.38195997647546065;
    tmp_msg_0.psi = 0.5347015263096527;
    tmp_msg_0.psi_magnetic = 0.7149131135669698;
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
    msg.setTimeStamp(0.7007084944294124);
    msg.setSource(37323U);
    msg.setSourceEntity(82U);
    msg.setDestination(34909U);
    msg.setDestinationEntity(206U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 185U;
    tmp_msg_0.htime = 0.3795096695929491;
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
    msg.setTimeStamp(0.5943001248182941);
    msg.setSource(43100U);
    msg.setSourceEntity(225U);
    msg.setDestination(4301U);
    msg.setDestinationEntity(136U);
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 233U;
    tmp_msg_0.zoom = 146U;
    tmp_msg_0.action = 114U;
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
    msg.setTimeStamp(0.41606372813154124);
    msg.setSource(29497U);
    msg.setSourceEntity(76U);
    msg.setDestination(60871U);
    msg.setDestinationEntity(86U);
    msg.enable = 242U;

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
    msg.setTimeStamp(0.09084750815859632);
    msg.setSource(44427U);
    msg.setSourceEntity(163U);
    msg.setDestination(56839U);
    msg.setDestinationEntity(42U);
    msg.enable = 142U;

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
    msg.setTimeStamp(0.10215631052494889);
    msg.setSource(53463U);
    msg.setSourceEntity(104U);
    msg.setDestination(53424U);
    msg.setDestinationEntity(208U);
    msg.enable = 215U;

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
    msg.setTimeStamp(0.21151209584232855);
    msg.setSource(25353U);
    msg.setSourceEntity(207U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(67U);
    msg.summary = 117U;
    msg.level = 59U;

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
    msg.setTimeStamp(0.5612285846776671);
    msg.setSource(5316U);
    msg.setSourceEntity(31U);
    msg.setDestination(54743U);
    msg.setDestinationEntity(226U);
    msg.summary = 154U;
    msg.level = 11U;

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
    msg.setTimeStamp(0.008250056546897366);
    msg.setSource(48727U);
    msg.setSourceEntity(209U);
    msg.setDestination(23920U);
    msg.setDestinationEntity(45U);
    msg.summary = 156U;
    msg.level = 213U;

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
    msg.setTimeStamp(0.49401307176186837);
    msg.setSource(39077U);
    msg.setSourceEntity(30U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.9490858592628447);
    msg.setSource(27068U);
    msg.setSourceEntity(59U);
    msg.setDestination(19138U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.5576087876239538);
    msg.setSource(22965U);
    msg.setSourceEntity(103U);
    msg.setDestination(29641U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.0791474954296506);
    msg.setSource(8980U);
    msg.setSourceEntity(90U);
    msg.setDestination(37350U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.8957387484902344);
    msg.setSource(12118U);
    msg.setSourceEntity(150U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.1870726767456211);
    msg.setSource(41279U);
    msg.setSourceEntity(216U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.15742055446827086);
    msg.setSource(686U);
    msg.setSourceEntity(69U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(201U);
    msg.op = 1U;
    msg.system.assign("ECJMUXPHNFRJEDWYFMSNQZWMJCRKQSKXJGWWVG");
    msg.range = 0.6983216200427325;
    IMC::SonarConfig tmp_msg_0;
    tmp_msg_0.frequency = 1599792455U;
    tmp_msg_0.min_range = 33792U;
    tmp_msg_0.max_range = 45270U;
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
    msg.setTimeStamp(0.07986831060754984);
    msg.setSource(287U);
    msg.setSourceEntity(128U);
    msg.setDestination(44652U);
    msg.setDestinationEntity(12U);
    msg.op = 232U;
    msg.system.assign("IMMOLRJKFSRNTDCGOAMFXHTUTWFLYPYQYAIOHLIJQAQIXBKVQPMXZMVHQYRVVWFDPSIPCZHFESWLTLUVTFDAKGMFCNQGDQDHQKXTFAYTMNJCTLAURDCBAPUJZQDWWWCBIOESEOGXWJDKNGIPSHUHWXKOEAGUSSMJXWYROYNGRBHYAAZIUJBKNEZXLPPFYNGLIUDXPYZGZEUHNVCTVCRZSOETQVVKGOEBNIJCMZSLUJFXNSRRCKV");
    msg.range = 0.08883063093651267;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("ORMJHXGXCBVSVCXFNQDOGDEEYJCSCMKGYLYUUMRZGJQSYZKHVZSBGJMIFYCHMSXABZIZHRCPNXYHBKFLVAGFDQPPOLYDRNONAFDCRBJBYJSMNQLMIYLNZNOTGTYTHVIPIWXEJRIATFBHAGVWWVUIADWVMACPZPGEMINUQAHDGRFUQKQKLHJTEP");
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
    msg.setTimeStamp(0.2373326725975563);
    msg.setSource(62311U);
    msg.setSourceEntity(6U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(245U);
    msg.op = 186U;
    msg.system.assign("VNOJSAMRTSLKIOGVGUBWZNZSIGJDTRNEVJDIKHIDZFGDPXOBCOSZMXNOVPAETZBVURWKEMGHQAQPFQTOEQKSBPMDOMSUYBJHWLKTYYFLXFIQFJDQRJLQYUJAYCZNYFARQSLSRWEEHNPKIKUHWAZCVFWNHWQZMOMRLKWGCDTXXEAIGNXNYBYPHSXTUPHCTVJDCNCGCKFFXVAJBIWFULBRHSABLPKPDUVHGRECVTEMWADLGIXZRYB");
    msg.range = 0.5743003023316824;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.4963536510904941;
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
    msg.setTimeStamp(0.1349018585211793);
    msg.setSource(50518U);
    msg.setSourceEntity(207U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.3241743802758893);
    msg.setSource(58956U);
    msg.setSourceEntity(90U);
    msg.setDestination(31245U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.296811108154992);
    msg.setSource(958U);
    msg.setSourceEntity(131U);
    msg.setDestination(5067U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.04141377040034888);
    msg.setSource(52770U);
    msg.setSourceEntity(229U);
    msg.setDestination(4256U);
    msg.setDestinationEntity(199U);
    msg.list.assign("NPVHZEVAMUGASDFUQKUOSVWLWSGXVEKRJYGZQAMLJXFGMJHQMBNIPIYDCUHCXAXGBSFDY");

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
    msg.setTimeStamp(0.4785667290602065);
    msg.setSource(35080U);
    msg.setSourceEntity(85U);
    msg.setDestination(34315U);
    msg.setDestinationEntity(26U);
    msg.list.assign("PBGOPKVZUKJFWAMQJNAIBCYTCOHBZDELMZFSQLOKDIRRJZNXDKDPHVPPBCYUMUJGSIJWOVCXECFOGBLIFXBISHZUALPYZHWLEKTYFMDGALANLECOAUWQVHFWGUKNFXMATJDCIQFQGVCXTKYKEYJL");

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
    msg.setTimeStamp(0.6918883989737102);
    msg.setSource(27181U);
    msg.setSourceEntity(62U);
    msg.setDestination(12281U);
    msg.setDestinationEntity(33U);
    msg.list.assign("ZFQJJBZQQCGHXAXWMQJIQECHCIGQPZXDZKVHJGEFCPWUTLKWHNMTSWYOBSVGBIRGLGPPUAMULQVCGDEIEUVWJBZFKOMVNRLEGKARILFAYRRFMJISXPANKKSRTEDWQTRNKWYPWCFTUCJYNBTYOWQMLVHHISLYOLMWAGZXLCAVKHPDVNUTNVSNRBXKBDCSX");

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
    msg.setTimeStamp(0.07740888912218391);
    msg.setSource(16604U);
    msg.setSourceEntity(84U);
    msg.setDestination(47267U);
    msg.setDestinationEntity(154U);
    msg.value = -31083;

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
    msg.setTimeStamp(0.1533262465506312);
    msg.setSource(30806U);
    msg.setSourceEntity(51U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(179U);
    msg.value = 16701;

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
    msg.setTimeStamp(0.894666920435798);
    msg.setSource(25368U);
    msg.setSourceEntity(32U);
    msg.setDestination(62758U);
    msg.setDestinationEntity(254U);
    msg.value = -19116;

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
    msg.setTimeStamp(0.41022660067907424);
    msg.setSource(7270U);
    msg.setSourceEntity(131U);
    msg.setDestination(41623U);
    msg.setDestinationEntity(174U);
    msg.value = 0.15775179716942556;

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
    msg.setTimeStamp(0.9986194360708047);
    msg.setSource(6812U);
    msg.setSourceEntity(38U);
    msg.setDestination(65186U);
    msg.setDestinationEntity(5U);
    msg.value = 0.4881176693769419;

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
    msg.setTimeStamp(0.9319702752800677);
    msg.setSource(14617U);
    msg.setSourceEntity(26U);
    msg.setDestination(7764U);
    msg.setDestinationEntity(179U);
    msg.value = 0.6017596509786538;

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
    msg.setTimeStamp(0.49044590346065253);
    msg.setSource(11256U);
    msg.setSourceEntity(105U);
    msg.setDestination(47826U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8244305535685347;

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
    msg.setTimeStamp(0.19528698968421843);
    msg.setSource(19315U);
    msg.setSourceEntity(239U);
    msg.setDestination(59131U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8176109801083155;

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
    msg.setTimeStamp(0.7674145980062461);
    msg.setSource(35303U);
    msg.setSourceEntity(117U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3774160946812024;

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
    msg.setTimeStamp(0.7784822703085228);
    msg.setSource(49145U);
    msg.setSourceEntity(203U);
    msg.setDestination(42088U);
    msg.setDestinationEntity(155U);
    msg.validity = 60358U;
    msg.type = 29U;
    msg.utc_year = 10848U;
    msg.utc_month = 67U;
    msg.utc_day = 52U;
    msg.utc_time = 0.3611846490166254;
    msg.lat = 0.30143963220138636;
    msg.lon = 0.580049471356381;
    msg.height = 0.21370681579197648;
    msg.satellites = 169U;
    msg.cog = 0.1294654143551508;
    msg.sog = 0.21735044943097914;
    msg.hdop = 0.6096106487105702;
    msg.vdop = 0.9314109840385083;
    msg.hacc = 0.3792476132640785;
    msg.vacc = 0.3093980051969215;

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
    msg.setTimeStamp(0.0222277173888481);
    msg.setSource(30653U);
    msg.setSourceEntity(73U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(119U);
    msg.validity = 48902U;
    msg.type = 145U;
    msg.utc_year = 45658U;
    msg.utc_month = 48U;
    msg.utc_day = 132U;
    msg.utc_time = 0.2566578563764428;
    msg.lat = 0.6702655069491489;
    msg.lon = 0.3810240354394394;
    msg.height = 0.85533751332551;
    msg.satellites = 160U;
    msg.cog = 0.7733553032753406;
    msg.sog = 0.9949637663654863;
    msg.hdop = 0.1726830446469949;
    msg.vdop = 0.2143828551099345;
    msg.hacc = 0.8268536506797843;
    msg.vacc = 0.44437772755486116;

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
    msg.setTimeStamp(0.6751093800397989);
    msg.setSource(16580U);
    msg.setSourceEntity(64U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(22U);
    msg.validity = 42385U;
    msg.type = 21U;
    msg.utc_year = 59321U;
    msg.utc_month = 174U;
    msg.utc_day = 240U;
    msg.utc_time = 0.8767363080896956;
    msg.lat = 0.42904453897502814;
    msg.lon = 0.7669835389929924;
    msg.height = 0.6429501476483278;
    msg.satellites = 169U;
    msg.cog = 0.5664916060492123;
    msg.sog = 0.6578751693912328;
    msg.hdop = 0.3835234473939402;
    msg.vdop = 0.4510092011825535;
    msg.hacc = 0.9260164804065444;
    msg.vacc = 0.6362381774069693;

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
    msg.setTimeStamp(0.36337401824032856);
    msg.setSource(48288U);
    msg.setSourceEntity(1U);
    msg.setDestination(13056U);
    msg.setDestinationEntity(9U);
    msg.time = 0.21122246441526793;
    msg.phi = 0.86329088946947;
    msg.theta = 0.3023071277384558;
    msg.psi = 0.4162181547489313;
    msg.psi_magnetic = 0.7558660618747178;

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
    msg.setTimeStamp(0.578378436913512);
    msg.setSource(28417U);
    msg.setSourceEntity(4U);
    msg.setDestination(23326U);
    msg.setDestinationEntity(187U);
    msg.time = 0.37325968305377355;
    msg.phi = 0.7681899098525793;
    msg.theta = 0.022913826815003535;
    msg.psi = 0.21884370274236487;
    msg.psi_magnetic = 0.10732700598581191;

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
    msg.setTimeStamp(0.5715002166732118);
    msg.setSource(43765U);
    msg.setSourceEntity(214U);
    msg.setDestination(45870U);
    msg.setDestinationEntity(76U);
    msg.time = 0.10193184825798152;
    msg.phi = 0.7987895262428568;
    msg.theta = 0.3496703158979514;
    msg.psi = 0.8923231084124408;
    msg.psi_magnetic = 0.8694325792295207;

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
    msg.setTimeStamp(0.6786210997756157);
    msg.setSource(45972U);
    msg.setSourceEntity(166U);
    msg.setDestination(5564U);
    msg.setDestinationEntity(148U);
    msg.time = 0.6162773280301123;
    msg.x = 0.7728464033182605;
    msg.y = 0.0935531296754788;
    msg.z = 0.31391369207253483;
    msg.timestep = 0.7690611192151345;

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
    msg.setTimeStamp(0.795761400125842);
    msg.setSource(8062U);
    msg.setSourceEntity(140U);
    msg.setDestination(10348U);
    msg.setDestinationEntity(50U);
    msg.time = 0.9196932827478236;
    msg.x = 0.60627311378175;
    msg.y = 0.5546768034021162;
    msg.z = 0.0881193667780924;
    msg.timestep = 0.5344498196662455;

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
    msg.setTimeStamp(0.549249586919467);
    msg.setSource(46582U);
    msg.setSourceEntity(82U);
    msg.setDestination(39818U);
    msg.setDestinationEntity(20U);
    msg.time = 0.9221063195629495;
    msg.x = 0.6297993866580743;
    msg.y = 0.27014865054533665;
    msg.z = 0.5020488948191666;
    msg.timestep = 0.7440676252676783;

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
    msg.setTimeStamp(0.43792417806523676);
    msg.setSource(48073U);
    msg.setSourceEntity(244U);
    msg.setDestination(6066U);
    msg.setDestinationEntity(245U);
    msg.time = 0.3793652437594701;
    msg.x = 0.9087475915170176;
    msg.y = 0.03500762880738295;
    msg.z = 0.3133683438910394;

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
    msg.setTimeStamp(0.1495354723250899);
    msg.setSource(47159U);
    msg.setSourceEntity(90U);
    msg.setDestination(3773U);
    msg.setDestinationEntity(229U);
    msg.time = 0.275795457903694;
    msg.x = 0.6217997924862008;
    msg.y = 0.38708330251985124;
    msg.z = 0.9608937158377477;

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
    msg.setTimeStamp(0.41505339735516933);
    msg.setSource(11980U);
    msg.setSourceEntity(180U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(111U);
    msg.time = 0.5612360064080192;
    msg.x = 0.6480939414648113;
    msg.y = 0.8909328805516622;
    msg.z = 0.08902729432896594;

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
    msg.setTimeStamp(0.5831304905976289);
    msg.setSource(40719U);
    msg.setSourceEntity(128U);
    msg.setDestination(50579U);
    msg.setDestinationEntity(21U);
    msg.time = 0.6959391906368211;
    msg.x = 0.3004555233838715;
    msg.y = 0.5374538634981808;
    msg.z = 0.7342303577449671;

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
    msg.setTimeStamp(0.884377694640679);
    msg.setSource(18437U);
    msg.setSourceEntity(0U);
    msg.setDestination(42707U);
    msg.setDestinationEntity(112U);
    msg.time = 0.4084214348031938;
    msg.x = 0.821971907301292;
    msg.y = 0.9759286278217185;
    msg.z = 0.3677380935272744;

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
    msg.setTimeStamp(0.8148556981002442);
    msg.setSource(61269U);
    msg.setSourceEntity(9U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(221U);
    msg.time = 0.8813120277250733;
    msg.x = 0.3653228825204615;
    msg.y = 0.7020072582171899;
    msg.z = 0.7166751700756763;

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
    msg.setTimeStamp(0.5310814186173014);
    msg.setSource(43196U);
    msg.setSourceEntity(15U);
    msg.setDestination(41336U);
    msg.setDestinationEntity(56U);
    msg.time = 0.3226117016018786;
    msg.x = 0.5122729745880161;
    msg.y = 0.49717695496503633;
    msg.z = 0.9008114915063536;

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
    msg.setTimeStamp(0.18204834613342447);
    msg.setSource(576U);
    msg.setSourceEntity(25U);
    msg.setDestination(26081U);
    msg.setDestinationEntity(120U);
    msg.time = 0.6269993584323919;
    msg.x = 0.1420404959583227;
    msg.y = 0.47843465885998016;
    msg.z = 0.1464098353828952;

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
    msg.setTimeStamp(0.9743987120044271);
    msg.setSource(7829U);
    msg.setSourceEntity(110U);
    msg.setDestination(63904U);
    msg.setDestinationEntity(221U);
    msg.time = 0.03535234001006837;
    msg.x = 0.29772709349569404;
    msg.y = 0.6315110174348766;
    msg.z = 0.6319667635072087;

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
    msg.setTimeStamp(0.7242483318049702);
    msg.setSource(26905U);
    msg.setSourceEntity(105U);
    msg.setDestination(39432U);
    msg.setDestinationEntity(204U);
    msg.validity = 114U;
    msg.x = 0.8405828637709242;
    msg.y = 0.2716461355670434;
    msg.z = 0.8148382347916632;

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
    msg.setTimeStamp(0.010727822625615335);
    msg.setSource(38708U);
    msg.setSourceEntity(121U);
    msg.setDestination(18223U);
    msg.setDestinationEntity(108U);
    msg.validity = 98U;
    msg.x = 0.3125774850602926;
    msg.y = 0.41799590235459727;
    msg.z = 0.6313537722270197;

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
    msg.setTimeStamp(0.5307202465104225);
    msg.setSource(4322U);
    msg.setSourceEntity(120U);
    msg.setDestination(9950U);
    msg.setDestinationEntity(251U);
    msg.validity = 90U;
    msg.x = 0.8288644926776885;
    msg.y = 0.8421425719015616;
    msg.z = 0.9783475627440289;

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
    msg.setTimeStamp(0.5972161542687728);
    msg.setSource(58883U);
    msg.setSourceEntity(211U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(142U);
    msg.validity = 81U;
    msg.x = 0.8831062933075792;
    msg.y = 0.6052131053940227;
    msg.z = 0.2537903799116559;

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
    msg.setTimeStamp(0.699851072255031);
    msg.setSource(63040U);
    msg.setSourceEntity(84U);
    msg.setDestination(46088U);
    msg.setDestinationEntity(141U);
    msg.validity = 65U;
    msg.x = 0.3977936058807483;
    msg.y = 0.47467768920877673;
    msg.z = 0.13662665539322894;

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
    msg.setTimeStamp(0.9385852960758423);
    msg.setSource(33304U);
    msg.setSourceEntity(169U);
    msg.setDestination(27277U);
    msg.setDestinationEntity(5U);
    msg.validity = 11U;
    msg.x = 0.21344950424064635;
    msg.y = 0.7540205412721056;
    msg.z = 0.33129560717089535;

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
    msg.setTimeStamp(0.39506977448449665);
    msg.setSource(49276U);
    msg.setSourceEntity(213U);
    msg.setDestination(646U);
    msg.setDestinationEntity(95U);
    msg.time = 0.40074267581861;
    msg.x = 0.4797449112419546;
    msg.y = 0.5090040183145979;
    msg.z = 0.9923658078256233;

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
    msg.setTimeStamp(0.4483017266400551);
    msg.setSource(23308U);
    msg.setSourceEntity(55U);
    msg.setDestination(17505U);
    msg.setDestinationEntity(217U);
    msg.time = 0.39222811553655124;
    msg.x = 0.15698165117872975;
    msg.y = 0.8677191009066261;
    msg.z = 0.6782993699870219;

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
    msg.setTimeStamp(0.20716310490777512);
    msg.setSource(50980U);
    msg.setSourceEntity(162U);
    msg.setDestination(21281U);
    msg.setDestinationEntity(129U);
    msg.time = 0.3987449104998596;
    msg.x = 0.8157500074284986;
    msg.y = 0.8535810542583793;
    msg.z = 0.5993558323182376;

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
    msg.setTimeStamp(0.27129780963809536);
    msg.setSource(35212U);
    msg.setSourceEntity(201U);
    msg.setDestination(8986U);
    msg.setDestinationEntity(204U);
    msg.validity = 178U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.21318822335825194;
    tmp_msg_0.y = 0.07858740394468033;
    tmp_msg_0.z = 0.9893937774273144;
    tmp_msg_0.phi = 0.47854695649673784;
    tmp_msg_0.theta = 0.02848038380322282;
    tmp_msg_0.psi = 0.21454733069112164;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.12900670130209924;

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
    msg.setTimeStamp(0.4648589862633423);
    msg.setSource(22012U);
    msg.setSourceEntity(190U);
    msg.setDestination(43633U);
    msg.setDestinationEntity(164U);
    msg.validity = 236U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.09715506249685213;
    tmp_msg_0.y = 0.34968341184675844;
    tmp_msg_0.z = 0.3687295368684842;
    tmp_msg_0.phi = 0.8262442371523866;
    tmp_msg_0.theta = 0.4028247097919999;
    tmp_msg_0.psi = 0.4383330179013508;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.573336455067901;

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
    msg.setTimeStamp(0.18267638528917507);
    msg.setSource(43092U);
    msg.setSourceEntity(101U);
    msg.setDestination(55925U);
    msg.setDestinationEntity(214U);
    msg.validity = 223U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3570708739215239;
    tmp_msg_0.y = 0.5284451003513588;
    tmp_msg_0.z = 0.3637022955943916;
    tmp_msg_0.phi = 0.39567867987889327;
    tmp_msg_0.theta = 0.051625521644522165;
    tmp_msg_0.psi = 0.20870567172949372;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8308909393839675;

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
    msg.setTimeStamp(0.28168723057143097);
    msg.setSource(18229U);
    msg.setSourceEntity(74U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(84U);
    msg.value = 0.4428445702475594;

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
    msg.setTimeStamp(0.3995439617398303);
    msg.setSource(11885U);
    msg.setSourceEntity(114U);
    msg.setDestination(7512U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8965939353294853;

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
    msg.setTimeStamp(0.9024980648166998);
    msg.setSource(60548U);
    msg.setSourceEntity(39U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(204U);
    msg.value = 0.8030386664677294;

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
    msg.setTimeStamp(0.029241196462972963);
    msg.setSource(9600U);
    msg.setSourceEntity(41U);
    msg.setDestination(23066U);
    msg.setDestinationEntity(80U);
    msg.value = 0.13219336043890406;

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
    msg.setTimeStamp(0.5333438004870209);
    msg.setSource(58096U);
    msg.setSourceEntity(102U);
    msg.setDestination(2992U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6400970116632214;

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
    msg.setTimeStamp(0.8099192112319026);
    msg.setSource(60403U);
    msg.setSourceEntity(232U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(86U);
    msg.value = 0.10193864668584274;

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
    msg.setTimeStamp(0.2787674711549867);
    msg.setSource(42468U);
    msg.setSourceEntity(240U);
    msg.setDestination(16453U);
    msg.setDestinationEntity(73U);
    msg.value = 0.2551603446745454;

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
    msg.setTimeStamp(0.9806756949395418);
    msg.setSource(5579U);
    msg.setSourceEntity(93U);
    msg.setDestination(2617U);
    msg.setDestinationEntity(244U);
    msg.value = 0.8619339803349129;

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
    msg.setTimeStamp(0.2854853786473299);
    msg.setSource(18209U);
    msg.setSourceEntity(227U);
    msg.setDestination(21914U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7130358080220908;

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
    msg.setTimeStamp(0.7298977894953247);
    msg.setSource(30051U);
    msg.setSourceEntity(191U);
    msg.setDestination(41080U);
    msg.setDestinationEntity(208U);
    msg.value = 0.47483670548642665;

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
    msg.setTimeStamp(0.18549128483080468);
    msg.setSource(42316U);
    msg.setSourceEntity(211U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(73U);
    msg.value = 0.2736223325726739;

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
    msg.setTimeStamp(0.5924371791027329);
    msg.setSource(64742U);
    msg.setSourceEntity(240U);
    msg.setDestination(26893U);
    msg.setDestinationEntity(130U);
    msg.value = 0.28076807447463525;

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
    msg.setTimeStamp(0.18453172215047897);
    msg.setSource(63023U);
    msg.setSourceEntity(126U);
    msg.setDestination(19618U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9657019346490916;

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
    msg.setTimeStamp(0.07212506069529068);
    msg.setSource(62804U);
    msg.setSourceEntity(13U);
    msg.setDestination(57460U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9941616679701984;

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
    msg.setTimeStamp(0.15741496605763272);
    msg.setSource(1335U);
    msg.setSourceEntity(131U);
    msg.setDestination(55539U);
    msg.setDestinationEntity(87U);
    msg.value = 0.08812972723608992;

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
    msg.setTimeStamp(0.8182012513325027);
    msg.setSource(20891U);
    msg.setSourceEntity(154U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(110U);
    msg.value = 0.6532171222593276;

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
    msg.setTimeStamp(0.9689235004654487);
    msg.setSource(41074U);
    msg.setSourceEntity(67U);
    msg.setDestination(5471U);
    msg.setDestinationEntity(134U);
    msg.value = 0.017580533851009772;

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
    msg.setTimeStamp(0.8302471445160825);
    msg.setSource(11233U);
    msg.setSourceEntity(72U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(7U);
    msg.value = 0.5558647344839064;

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
    msg.setTimeStamp(0.9072721109565591);
    msg.setSource(63702U);
    msg.setSourceEntity(92U);
    msg.setDestination(21745U);
    msg.setDestinationEntity(44U);
    msg.value = 0.6865230477600175;

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
    msg.setTimeStamp(0.7172925336729912);
    msg.setSource(35310U);
    msg.setSourceEntity(105U);
    msg.setDestination(38206U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9846781766261957;

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
    msg.setTimeStamp(0.39625392358740885);
    msg.setSource(2315U);
    msg.setSourceEntity(198U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4106960554950928;

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
    msg.setTimeStamp(0.1285848335850709);
    msg.setSource(49972U);
    msg.setSourceEntity(135U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(137U);
    msg.value = 0.7585792212712062;

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
    msg.setTimeStamp(0.7598135586725108);
    msg.setSource(20485U);
    msg.setSourceEntity(79U);
    msg.setDestination(59947U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9884726977596501;

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
    msg.setTimeStamp(0.5697763399555609);
    msg.setSource(3502U);
    msg.setSourceEntity(182U);
    msg.setDestination(31912U);
    msg.setDestinationEntity(230U);
    msg.value = 0.14679399329581255;

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
    msg.setTimeStamp(0.6228317657504762);
    msg.setSource(45356U);
    msg.setSourceEntity(59U);
    msg.setDestination(52841U);
    msg.setDestinationEntity(211U);
    msg.direction = 0.9091289832794953;
    msg.speed = 0.6957902657391696;
    msg.turbulence = 0.8841386051489422;

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
    msg.setTimeStamp(0.7850051796854304);
    msg.setSource(19635U);
    msg.setSourceEntity(37U);
    msg.setDestination(22146U);
    msg.setDestinationEntity(237U);
    msg.direction = 0.5728175034758264;
    msg.speed = 0.902789487452746;
    msg.turbulence = 0.632115686464839;

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
    msg.setTimeStamp(0.7897091800895467);
    msg.setSource(46618U);
    msg.setSourceEntity(194U);
    msg.setDestination(12703U);
    msg.setDestinationEntity(40U);
    msg.direction = 0.19019541756603187;
    msg.speed = 0.035919050809398057;
    msg.turbulence = 0.0022375899021908063;

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
    msg.setTimeStamp(0.45952931479041603);
    msg.setSource(3941U);
    msg.setSourceEntity(226U);
    msg.setDestination(41985U);
    msg.setDestinationEntity(207U);
    msg.value = 0.9462274590389573;

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
    msg.setTimeStamp(0.468732396855871);
    msg.setSource(39467U);
    msg.setSourceEntity(221U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8046416857376064;

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
    msg.setTimeStamp(0.591737203339064);
    msg.setSource(56490U);
    msg.setSourceEntity(97U);
    msg.setDestination(52477U);
    msg.setDestinationEntity(231U);
    msg.value = 0.3930578554568539;

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
    msg.setTimeStamp(0.9744893261051842);
    msg.setSource(45886U);
    msg.setSourceEntity(139U);
    msg.setDestination(60365U);
    msg.setDestinationEntity(122U);
    msg.value.assign("FLAWLWYZMVYGQWDEJORZDZFPYPINYPAJPVFCTNGRWQBLZWNY");

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
    msg.setTimeStamp(0.36880087907811043);
    msg.setSource(45672U);
    msg.setSourceEntity(151U);
    msg.setDestination(56969U);
    msg.setDestinationEntity(206U);
    msg.value.assign("WKUSWIUZXLEAMYXGQQFVUHZARUFIVJHURKLYBNUMWDLTCBLIGLZCPVFKOQNICEEOVIANHGQFAQRHMIBJRISMBEJPGYWSNLZZCDTMQPJRSVYTKYTUDGOSGOWPDXPYLEODCMFEOLVEWNFVJ");

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
    msg.setTimeStamp(0.15851804534275094);
    msg.setSource(61339U);
    msg.setSourceEntity(188U);
    msg.setDestination(14413U);
    msg.setDestinationEntity(13U);
    msg.value.assign("VELDRXGJAEHPQTBROIZZDGXUQKRNHPZTWNSIFLJNRODMUMPKMRXGRZUWOMLMJNWUIYXLAQOBEXFCQKVRXCVGSQSEAUDAQPLOPGEPIHXTYWXEZHCLYPIDGQHMEQ");

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
    msg.setTimeStamp(0.9080637277678169);
    msg.setSource(38844U);
    msg.setSourceEntity(175U);
    msg.setDestination(22218U);
    msg.setDestinationEntity(154U);
    const char tmp_msg_0[] = {49, 26, -90, 36, 85, 11, -47, -81, 48, 121, -54, 115, 69, -38, -123, 76, 99, 80, -55, -45, 124, -51, -121, 32, 31, 36, 104, -114, 29, -77, 114, -90, 107, 103, -23, -123, -16, 19, 105, -20, 119, 56, 17, -15, -39, -15, 121, 5, -79, -3, -121, -105, -116, -105, -117, 84, -107, 27, 66, 35, -10, 98, -109, -99, 77, 3, 12, 125, 54, -48, -25, -110, -75, 106, 60, -24, -79, 13, 102, 36, 58, -78, 97, 13, 47, -2, 47, 107, 95, 39, 16, 3, -31, -43, -109, 33, 114, -108, 97, -118, 114, -100, 100, 119};
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
    msg.setTimeStamp(0.007353332048727901);
    msg.setSource(8601U);
    msg.setSourceEntity(6U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(39U);
    const char tmp_msg_0[] = {-100, 48, 27, 53, 51, -12, -82, 42, -35, 79, 38, -114, -79, -77, -93, -128, -53, 13, 32, 32, 46, 79, -82, -113, -43, -116, 45, 33, -14, 84, 63, 16, -24, 46, 100, 75, 1, 39, -3, 112, 105, 1, -14, -118, 73, -91, 15, 124, -125, 124, -127, -47, -18, 63, -85, 108, -6, 36, 57, -18, 124, 96, 108, 92, -56, -64, -10, -117, 124, 50, 70, 70, 40, 86, 2, 27, -7, -6, -87, -60, 47, 63, -19, 12, -63, 49, 18, 89, -19, 113, -36, -111, -79, 101, 96, 84, -24, 3, 37, 14, -71, 65, 125, -22, -66, 126, -51, -73, -107, 63, -119, 91, 51, -68, 95, 93, 56, 110, -29, -70, 100, 72, 49, 81, 99, -70, 93, 1, 24, -53, -69, 56, -69, 18, 73, 13, 45, 74, 57, 2, -57, 62, -107, -8, 23, 4, 74, -78, -9, -39, -56, -59, -55, 63, 47, -118, 32, -5, -27, 25, 85, -74, 4, 48, -97, 23, 16, -10, 4, 84, 114, 47, 10, 14, -70, -88, -126, -7, 19, -90, 11, -119, -116, 73, 74, 93, -124, -93, -73, -55, -66, -9, -28, 103, -60, 48, -74, -78, -106, -17, -26, -94, 87, 79, 101, 4, 118, 74, 31, 43, 106, -40, 51, -55, 1, 82, -33, 69, 38, 64, -118, 2, -30, 99, -64, 71, 61, -80, -125, 57, -122, 7, 46, -53, -39, 105, 91, 53, 8, 120, 23, 86, -2, 53, -93, -123, 70, 50, 48};
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
    msg.setTimeStamp(0.006009507453144103);
    msg.setSource(13499U);
    msg.setSourceEntity(200U);
    msg.setDestination(20798U);
    msg.setDestinationEntity(35U);
    const char tmp_msg_0[] = {47, 30, -35, 104, 43, 104, -126, -108, -122, -36, 14, -80, -128, 1, -120, -31, 34, 55, -117, -48, -73, 24, -93, 36, -120, 43, -107, -119, -69, 42, 15, -18, -14, 57, 78, -113, -30, -115, -19, 67, 122, -3, 66, -119, -121, 37, 12, -108, 9, 67, 25, 84, 126, -99, -93, 70, -88, 85, -8, -35, 36, 55, 116, -45, 52, 106, -93, -101, -121, 118, -113, -36, -86, -107, 81, -85, -88, -116, 114, 20, 125, -107, 14, 46, 60, -24, -119, -118, 123, -52, 12, 50, 1, -88, -27, 8, -80, -60, -52, 82, 12, -104, 28, 51, -84, -78, 118, 28, -82, -75, -106, 99, 37, 18, 43, -65, 108, 18, 118, -35, -38, 103, -59, -6, 96, 87, -72, 121, -29, -70, 24, -71, 60, 57, 84, 8, 43, -86, -17, 33, -5, -122, 65, -72, -68, 81, -4, 49, -106, -49, -120, -123, -68, -55, -38, -8, 99, 69, -7, -99, 7, -59, -22, -34, 1, 79, 106, -53, 45, 119, 92, 98, -88, 93, -30, -14, -91, 104, -38, 97, 124, -90, 122, 14, -116, -38, -113, -126, 23, 83, 85, 0, 72, 77, -115, 18, 11, -34, -37, -108, -84, -56, 112, 28, 61, 105, 22, -87, -56, 73, -81, 107, -33, 73, -79, 59, -116};
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
    msg.setTimeStamp(0.5717326081074084);
    msg.setSource(11343U);
    msg.setSourceEntity(153U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(247U);
    msg.frequency = 2242962885U;
    msg.min_range = 23365U;
    msg.max_range = 41521U;

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
    msg.setTimeStamp(0.9054646408149363);
    msg.setSource(30465U);
    msg.setSourceEntity(122U);
    msg.setDestination(47600U);
    msg.setDestinationEntity(110U);
    msg.frequency = 3794574798U;
    msg.min_range = 483U;
    msg.max_range = 25025U;

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
    msg.setTimeStamp(0.0637638523522911);
    msg.setSource(59324U);
    msg.setSourceEntity(82U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(45U);
    msg.frequency = 792786165U;
    msg.min_range = 256U;
    msg.max_range = 54319U;

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
    msg.setTimeStamp(0.5017993522792366);
    msg.setSource(51639U);
    msg.setSourceEntity(124U);
    msg.setDestination(40213U);
    msg.setDestinationEntity(204U);
    msg.type = 2U;
    msg.frequency = 254299953U;
    msg.min_range = 51986U;
    msg.max_range = 36046U;
    msg.bits_per_point = 50U;
    msg.scale_factor = 0.5198481164891766;
    const char tmp_msg_0[] = {31, 33, -110, 80, 126, -123, 20, -35, -2, -24, -4, 87, -110, 118, -25, 21, 11, 29, 16, 40, 17, 74, -112, -96, 64, 19, 92, 82, 121, -24, 38, 19, -11, -25, -43, -49, -48, -79, 87, -75, 87, 33, -106, -56, 36, -88, -72, -53, 105, 2, 51, -13, -98, -10, 1, -123, 52, -127, -86, -64, -56, -68, -108, 108, 98, 125, 72, 89, 80, 60, -15, -61, -74, 61, 17, 50, -8, -32, 90, -28, 5, -91, -3, -12, 126, -97, 88, -99, 95, 61, 108, -106, -57, -13, 73, -100, 30, 54, 87, -91, -96, 115, 24, 109, -71, -88, 21, -125, 34, -81, -84, -64, -46, -56, 12, -95, 117, 121, -79, -26, -71, 108, -8, 61, 123, 123, 40, -35, 86, -122, -94, 104, 60, -38, -42, -7, 61, -18, -3, 64, 97, 56, 54, -7, -68, -68, -40, 82, 123, -26, -123, -126, 76, -6, 63, 70, 94, 8, -116, -73, -101, -105, -43, -47, 9, -67, 33, 65, -122, -99, 98, 94, 62, -92, -24, -122, -92, 39, 55, -112, -38, -128, 47, 104, -65, -21, 99, 71, -15, 34, -17, -6, -16, -113, -56, 1, 90, -57, -20, -78, -33, -83, -122, 126, -52, -82, 1, 20, 2, -102, -51, -122, -61, 94, 53, 84};
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
    msg.setTimeStamp(0.002604908867760214);
    msg.setSource(20371U);
    msg.setSourceEntity(86U);
    msg.setDestination(61031U);
    msg.setDestinationEntity(152U);
    msg.type = 113U;
    msg.frequency = 2077355334U;
    msg.min_range = 19468U;
    msg.max_range = 1838U;
    msg.bits_per_point = 216U;
    msg.scale_factor = 0.03729172295393446;
    const char tmp_msg_0[] = {79, -81, -91, 52, -102, 96, -32, -103, 96, 58, 75, 34, -88, -76, 96, 48, -28, 43, 8, 63, 79, -12, -104, -110, -84, 57, -55, -5, 76, 77, 12, -2, -65, 58, -76, 5, 38, -27, 102, -125, -43, 80, -29, 43, -59, -117, -56, 118, 2, 122, -96, -85, -45, -120, -57, -50, 0, -39, 67, 18, 107, -2, -124, 54, -71, -33, -31, -81, 78, 81, -85, -66, 51, -88, 35, 112, -104, 65, -72, -45, 0, 50, 42, 31, -77, 109, -110, 27, -115, -33, -55, -96, -24, -46, -72, -7, 85, 62, 96, 6, 57, -19, -31, 111, 40, 51, -89, -90, -91, -67, 93, -1, -2, 87, -104, 65, -34, -32, -123, 79, -90, -13, 92, -30, 93, -52, -31, 33, 109, -127, 48, -82, 34, 92, -54, -31, -76, -123, -3, -12, 36, -126, 78, -36, -107, -87, 81, -103, 83, -109, -125, 52, -57, 40, 13, 109, 116, 38, 102, -81, 68, 86, 114, 98, 105, 6, -30, 118, -45, 43, -44, 20, -46, 82, -22, -52, 101, -109, 70, -41};
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
    msg.setTimeStamp(0.8509620082039846);
    msg.setSource(63464U);
    msg.setSourceEntity(119U);
    msg.setDestination(25304U);
    msg.setDestinationEntity(83U);
    msg.type = 205U;
    msg.frequency = 1952678705U;
    msg.min_range = 8722U;
    msg.max_range = 28466U;
    msg.bits_per_point = 90U;
    msg.scale_factor = 0.7087338242819538;
    const char tmp_msg_0[] = {-72, -18, 50, 100, -59, 123, -75, -121, -25, 100, 36, 74, 92, 36, -106, -113, -31, 125, -64, 19, 25, -48, -65, -108, 64, 4, -11, 65, -93, -66, 54, 125, -52, 58, -43, -17, 120, 35, -125, -80, -8, -8, 52, -106, 50, -91, 93, 114, -76, 62, 102, 80, -68, -69, 42, -4, 117, 87, 101, 28, -32, 76, 58, -36, 73, -117, 87, -31, 85, -14, -105, -75, -126, -30, 118, 5, 76, 90, 73, -126, -125, 59, 102, 31, 114, -66, 97, -69, -85, 118, 68, -108, -41, 9, -44, -114, 9, 25, 60, 9, 34, 87, -24, -83, -17, -106, 54, 6, 68, 21, 40, -78, 125, 123, -105, 47, -32, 72, 95, 87, 64, 95, 73, -86, 16, 1, 105, -123, -33, 85, -72, 111, 59, -63, -66, 11, -41, 95, -26, 94, 30, -27, -20, 85, 86, -84, -100, -11, 42, -116, 29, -99, -58, -109};
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
    msg.setTimeStamp(0.6369224190991571);
    msg.setSource(34873U);
    msg.setSourceEntity(36U);
    msg.setDestination(1134U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.653156686462376);
    msg.setSource(42167U);
    msg.setSourceEntity(222U);
    msg.setDestination(30935U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.11311335842058123);
    msg.setSource(39577U);
    msg.setSourceEntity(250U);
    msg.setDestination(5020U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.7414963109239648);
    msg.setSource(38467U);
    msg.setSourceEntity(45U);
    msg.setDestination(33303U);
    msg.setDestinationEntity(249U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.16192065340674167);
    msg.setSource(24188U);
    msg.setSourceEntity(86U);
    msg.setDestination(32055U);
    msg.setDestinationEntity(97U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.3537938624847403);
    msg.setSource(1521U);
    msg.setSourceEntity(224U);
    msg.setDestination(50157U);
    msg.setDestinationEntity(204U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.4573493036378169);
    msg.setSource(38309U);
    msg.setSourceEntity(251U);
    msg.setDestination(33112U);
    msg.setDestinationEntity(146U);
    msg.value = 0.9319296473678986;
    msg.confidence = 0.2902075098579734;
    msg.opmodes.assign("KLRZGOLCZPXOHJEWEEKVAANDXNCBNBKKEJXMLVPYMOUBZASPUGGFEUUPHYQMLJTDKHXNWFDWMPXTYSVIHVXZVJ");

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
    msg.setTimeStamp(0.47540285677181005);
    msg.setSource(23343U);
    msg.setSourceEntity(23U);
    msg.setDestination(51671U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8895133013655964;
    msg.confidence = 0.017299877105247496;
    msg.opmodes.assign("CGOKLTOEBXXHISQZUIEAHOKPRPJJYGNYCAXIMOKMILVYWWDXTSKRNFUDWOQTFHOEOWFUWTQURZIPPGFPLQAQMZNBMBTTQPLLAMNSCQLRWDSFPMINYBWWYQBHAHEJANMCZSVDOSYUVNGFCBDZRXODB");

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
    msg.setTimeStamp(0.07767677956857055);
    msg.setSource(60474U);
    msg.setSourceEntity(84U);
    msg.setDestination(10090U);
    msg.setDestinationEntity(231U);
    msg.value = 0.2079677351332475;
    msg.confidence = 0.8188520114144342;
    msg.opmodes.assign("UWXLFVEQCODTTLRIRHSPIOFCBJNJHWGVAOQDVGWEAIABSYCXIBNTEHNFDVMOJVGNCUGXZBOPLXEDF");

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
    msg.setTimeStamp(0.04507088161184514);
    msg.setSource(3236U);
    msg.setSourceEntity(53U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(72U);
    msg.itow = 572247631U;
    msg.lat = 0.29911136175670383;
    msg.lon = 0.5937498754256249;
    msg.height_ell = 0.3586285227933982;
    msg.height_sea = 0.5273033222030983;
    msg.hacc = 0.6095259642737492;
    msg.vacc = 0.9618470546291734;
    msg.vel_n = 0.9655187537075012;
    msg.vel_e = 0.4309486675964639;
    msg.vel_d = 0.3438337787500485;
    msg.speed = 0.444965858100836;
    msg.gspeed = 0.8679480350056273;
    msg.heading = 0.9456057082196957;
    msg.sacc = 0.6176807946422816;
    msg.cacc = 0.038014688078973013;

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
    msg.setTimeStamp(0.6016588358626151);
    msg.setSource(31616U);
    msg.setSourceEntity(146U);
    msg.setDestination(5076U);
    msg.setDestinationEntity(201U);
    msg.itow = 2876403486U;
    msg.lat = 0.47451611529766846;
    msg.lon = 0.3557637638378568;
    msg.height_ell = 0.6535658414357239;
    msg.height_sea = 0.2173252945086248;
    msg.hacc = 0.7918787589998237;
    msg.vacc = 0.8071468192622451;
    msg.vel_n = 0.6007381417872526;
    msg.vel_e = 0.29083669104084564;
    msg.vel_d = 0.9993680429305584;
    msg.speed = 0.7665259320139979;
    msg.gspeed = 0.612703041246945;
    msg.heading = 0.11005072261876159;
    msg.sacc = 0.27005187724396884;
    msg.cacc = 0.4415796617955611;

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
    msg.setTimeStamp(0.609118315506644);
    msg.setSource(16596U);
    msg.setSourceEntity(225U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(172U);
    msg.itow = 3695979981U;
    msg.lat = 0.27705504321986274;
    msg.lon = 0.1670019061444291;
    msg.height_ell = 0.07772215377476732;
    msg.height_sea = 0.19367320372008168;
    msg.hacc = 0.7033244006401366;
    msg.vacc = 0.14559335521244976;
    msg.vel_n = 0.11702600384545259;
    msg.vel_e = 0.529494474439244;
    msg.vel_d = 0.3025666002523253;
    msg.speed = 0.1881486391646432;
    msg.gspeed = 0.40247802857126025;
    msg.heading = 0.8346943535553821;
    msg.sacc = 0.5993708323709251;
    msg.cacc = 0.5193698673489117;

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
    msg.setTimeStamp(0.13409246841881217);
    msg.setSource(53203U);
    msg.setSourceEntity(143U);
    msg.setDestination(33849U);
    msg.setDestinationEntity(252U);
    msg.id = 29U;
    msg.value = 0.7715421270570008;

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
    msg.setTimeStamp(0.12927573897148026);
    msg.setSource(61373U);
    msg.setSourceEntity(201U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(0U);
    msg.id = 233U;
    msg.value = 0.4882642585061746;

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
    msg.setTimeStamp(0.8678405584911998);
    msg.setSource(22178U);
    msg.setSourceEntity(136U);
    msg.setDestination(47772U);
    msg.setDestinationEntity(9U);
    msg.id = 223U;
    msg.value = 0.652957118217591;

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
    msg.setTimeStamp(0.151447582783233);
    msg.setSource(41894U);
    msg.setSourceEntity(103U);
    msg.setDestination(62255U);
    msg.setDestinationEntity(40U);
    msg.x = 0.6077385818180953;
    msg.y = 0.06367240249619743;
    msg.z = 0.9446331136767208;
    msg.phi = 0.7855700296919136;
    msg.theta = 0.26451360317993367;
    msg.psi = 0.6437269282393883;

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
    msg.setTimeStamp(0.4033259238272633);
    msg.setSource(28917U);
    msg.setSourceEntity(39U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(203U);
    msg.x = 0.6792452927129314;
    msg.y = 0.36449125725742215;
    msg.z = 0.8092953896819073;
    msg.phi = 0.7188194366759368;
    msg.theta = 0.7428192200689677;
    msg.psi = 0.9631669883479667;

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
    msg.setTimeStamp(0.6485007376942022);
    msg.setSource(12975U);
    msg.setSourceEntity(204U);
    msg.setDestination(45539U);
    msg.setDestinationEntity(247U);
    msg.x = 0.25454801761059187;
    msg.y = 0.0025757524897704887;
    msg.z = 0.962805764247575;
    msg.phi = 0.015334844633644096;
    msg.theta = 0.12195371550792711;
    msg.psi = 0.10424152712275381;

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
    msg.setTimeStamp(0.4796870434087537);
    msg.setSource(5299U);
    msg.setSourceEntity(46U);
    msg.setDestination(21355U);
    msg.setDestinationEntity(30U);
    msg.beam_width = 0.18939762464782228;
    msg.beam_height = 0.5955284039286882;

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
    msg.setTimeStamp(0.15918138476455035);
    msg.setSource(433U);
    msg.setSourceEntity(51U);
    msg.setDestination(47851U);
    msg.setDestinationEntity(103U);
    msg.beam_width = 0.5407751656360323;
    msg.beam_height = 0.9118928934272256;

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
    msg.setTimeStamp(0.632203223172936);
    msg.setSource(7698U);
    msg.setSourceEntity(107U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(132U);
    msg.beam_width = 0.6940711348024506;
    msg.beam_height = 0.5372168847510479;

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
    msg.setTimeStamp(0.7217162710136843);
    msg.setSource(7669U);
    msg.setSourceEntity(48U);
    msg.setDestination(9289U);
    msg.setDestinationEntity(45U);
    msg.sane = 53U;

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
    msg.setTimeStamp(0.9777278654665418);
    msg.setSource(5265U);
    msg.setSourceEntity(195U);
    msg.setDestination(40731U);
    msg.setDestinationEntity(88U);
    msg.sane = 242U;

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
    msg.setTimeStamp(0.5796235644272241);
    msg.setSource(57684U);
    msg.setSourceEntity(53U);
    msg.setDestination(35663U);
    msg.setDestinationEntity(78U);
    msg.sane = 59U;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.9974218958705258);
    msg.setSource(50267U);
    msg.setSourceEntity(186U);
    msg.setDestination(59185U);
    msg.setDestinationEntity(236U);
    msg.id = 27U;
    msg.zoom = 131U;
    msg.action = 69U;

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
    msg.setTimeStamp(0.25979474868650854);
    msg.setSource(4363U);
    msg.setSourceEntity(176U);
    msg.setDestination(27738U);
    msg.setDestinationEntity(68U);
    msg.id = 215U;
    msg.zoom = 229U;
    msg.action = 155U;

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
    msg.setTimeStamp(0.31819383245783595);
    msg.setSource(39875U);
    msg.setSourceEntity(88U);
    msg.setDestination(12115U);
    msg.setDestinationEntity(182U);
    msg.id = 183U;
    msg.zoom = 146U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.5823492703557529);
    msg.setSource(26990U);
    msg.setSourceEntity(123U);
    msg.setDestination(41651U);
    msg.setDestinationEntity(230U);
    msg.id = 40U;
    msg.value = 0.06787159671989951;

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
    msg.setTimeStamp(0.5185615937639728);
    msg.setSource(35479U);
    msg.setSourceEntity(165U);
    msg.setDestination(65245U);
    msg.setDestinationEntity(193U);
    msg.id = 145U;
    msg.value = 0.040511741184378836;

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
    msg.setTimeStamp(0.5589626491646419);
    msg.setSource(16693U);
    msg.setSourceEntity(131U);
    msg.setDestination(2454U);
    msg.setDestinationEntity(121U);
    msg.id = 80U;
    msg.value = 0.33658636085668614;

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
    msg.setTimeStamp(0.26085743300149);
    msg.setSource(18961U);
    msg.setSourceEntity(30U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(168U);
    msg.id = 100U;
    msg.value = 0.9007608386579723;

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
    msg.setTimeStamp(0.6267223931101176);
    msg.setSource(62290U);
    msg.setSourceEntity(208U);
    msg.setDestination(41084U);
    msg.setDestinationEntity(193U);
    msg.id = 88U;
    msg.value = 0.589828233282775;

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
    msg.setTimeStamp(0.5016305962447462);
    msg.setSource(23498U);
    msg.setSourceEntity(244U);
    msg.setDestination(23118U);
    msg.setDestinationEntity(140U);
    msg.id = 0U;
    msg.value = 0.34229730032089933;

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
    msg.setTimeStamp(0.7931933270083558);
    msg.setSource(10369U);
    msg.setSourceEntity(27U);
    msg.setDestination(58690U);
    msg.setDestinationEntity(92U);
    msg.id = 178U;
    msg.angle = 0.07777400733665973;

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
    msg.setTimeStamp(0.37329589658170537);
    msg.setSource(3988U);
    msg.setSourceEntity(7U);
    msg.setDestination(7202U);
    msg.setDestinationEntity(62U);
    msg.id = 188U;
    msg.angle = 0.438731032585327;

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
    msg.setTimeStamp(0.6387868392370499);
    msg.setSource(52875U);
    msg.setSourceEntity(79U);
    msg.setDestination(49800U);
    msg.setDestinationEntity(83U);
    msg.id = 249U;
    msg.angle = 0.7822654149284196;

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
    msg.setTimeStamp(0.4354586259789236);
    msg.setSource(14056U);
    msg.setSourceEntity(233U);
    msg.setDestination(7570U);
    msg.setDestinationEntity(27U);
    msg.op = 181U;
    msg.actions.assign("IYACNKZFMARINUDNTEHWJPQPLODPHZWKEEBXKX");

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
    msg.setTimeStamp(0.49653055030178406);
    msg.setSource(33545U);
    msg.setSourceEntity(32U);
    msg.setDestination(14999U);
    msg.setDestinationEntity(188U);
    msg.op = 59U;
    msg.actions.assign("FPRKIXCAYJEDCBCUBFRMSHNXWWTOBPUJPMOWEXDVVZYGMKDJETDKFSFAZCBPVFPMXWRIEVKRUTAYEZHPHLDQEXJDACQBZMBCYURQIGGSGUFLGKATDLHDSTQGCZWRZJVZIXOHRMXLNIUDGQHJBVQOIQNALUDWNYFLIZVECWILPNOSFMTKIMERTUZYMKC");

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
    msg.setTimeStamp(0.9518670366439871);
    msg.setSource(25578U);
    msg.setSourceEntity(200U);
    msg.setDestination(55758U);
    msg.setDestinationEntity(69U);
    msg.op = 201U;
    msg.actions.assign("JXLBAACHZMTBUMTNHCRXEVORQBZMUOUWOWNKMEHHLUESQINDDKTZPFEBSTIYRLCQDAGZRYVYOSZGHWAWHGDERVOXRAEIIY");

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
    msg.setTimeStamp(0.5720090581511774);
    msg.setSource(1491U);
    msg.setSourceEntity(141U);
    msg.setDestination(34067U);
    msg.setDestinationEntity(128U);
    msg.actions.assign("PLCWSZGVJOQT");

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
    msg.setTimeStamp(0.8690883481237792);
    msg.setSource(6164U);
    msg.setSourceEntity(17U);
    msg.setDestination(13903U);
    msg.setDestinationEntity(127U);
    msg.actions.assign("PGSLRUVOUWYZMFAMISLBDGRZDPQORZSQINAUTWZHFKRWVKEKNQTBHQVXNJEHILLDGDMABSRVNACYADQHLTFJCKEUTHQXMSCYDYRICJTPQJZOKCMYYTOOZZBEANVGVBDGSUKDKRUGEEQFOBJIHPUXOHFXYCUZJWOVTSKT");

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
    msg.setTimeStamp(0.3409144102932523);
    msg.setSource(39931U);
    msg.setSourceEntity(157U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(166U);
    msg.actions.assign("SUCDKAOWJQKEVJKCWGIRJPCBAPQGERQLAFDYLN");

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
    msg.setTimeStamp(0.931463690542048);
    msg.setSource(4046U);
    msg.setSourceEntity(128U);
    msg.setDestination(35218U);
    msg.setDestinationEntity(190U);
    msg.button = 185U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.03551839060794593);
    msg.setSource(18068U);
    msg.setSourceEntity(186U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(126U);
    msg.button = 118U;
    msg.value = 146U;

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
    msg.setTimeStamp(0.808151715088007);
    msg.setSource(9471U);
    msg.setSourceEntity(6U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(167U);
    msg.button = 21U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.1464602291285776);
    msg.setSource(59598U);
    msg.setSourceEntity(27U);
    msg.setDestination(27154U);
    msg.setDestinationEntity(101U);
    msg.op = 65U;
    msg.text.assign("AQCNOMOELRHURSJBFRTDWQQWIYZNASEBMBRDVJCYJUDZPQMQKBVSWDEGISYIXYZMNIGIJMLQWZSGHPNCPVJNJEXXCSDLFNFDWNXPFAEIUXRBHWOYKGTSCCMTHBOFNRVIXDKAT");

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
    msg.setTimeStamp(0.5776636507615365);
    msg.setSource(26407U);
    msg.setSourceEntity(164U);
    msg.setDestination(56086U);
    msg.setDestinationEntity(218U);
    msg.op = 9U;
    msg.text.assign("DPLMHZCTSFXXJHWVPROVWDKMNQSOIXBZNLXYRXZQZCIBAOJDCAPYDKNGCPPDSUGCLYOEMMCTZEIWVSROZUFLHRQBADWSTYTGMRQETTKAXWBBOKGFRYWJNVQPSEJXIKVHTAONYKPRVUCWVSHJNDJUPXHHPFGUCVGFURLIQLFBPYWIEEUBMDIVJ");

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
    msg.setTimeStamp(0.15903677242286596);
    msg.setSource(9148U);
    msg.setSourceEntity(70U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(107U);
    msg.op = 207U;
    msg.text.assign("RBQHBCSKETRJLHENZSVWNPTLMVQAXWEADAJMVSIPDZMURXDARAOGOFTXHBPJLBIBJWIVZLTBYRJTYDLIYSUAWXWKIFJGZQYRSJVMKLXMBDVKZUGRBHLXSPKEMUPHPKRWGXOTGUICZCKTYQSRMOCLYYWNCWFUANEPDCDKNEQBZVIFQTPKTEOHVEICVSROQKEDGNSJNUHLOIQHTXAFSHZEOBGFLQMXHCZODXN");

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
    msg.setTimeStamp(0.4792139796095839);
    msg.setSource(64413U);
    msg.setSourceEntity(114U);
    msg.setDestination(28803U);
    msg.setDestinationEntity(153U);
    msg.op = 142U;
    msg.time_remain = 0.6305744464285133;
    msg.sched_time = 0.03170764607488363;

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
    msg.setTimeStamp(0.47115477085296964);
    msg.setSource(18053U);
    msg.setSourceEntity(248U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(186U);
    msg.op = 159U;
    msg.time_remain = 0.7159927316701606;
    msg.sched_time = 0.5777096222335203;

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
    msg.setTimeStamp(0.1670863222809117);
    msg.setSource(49129U);
    msg.setSourceEntity(143U);
    msg.setDestination(40558U);
    msg.setDestinationEntity(157U);
    msg.op = 150U;
    msg.time_remain = 0.6689122737447336;
    msg.sched_time = 0.05123585935168018;

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
    msg.setTimeStamp(0.7532408927592111);
    msg.setSource(32749U);
    msg.setSourceEntity(169U);
    msg.setDestination(61677U);
    msg.setDestinationEntity(209U);
    msg.name.assign("OTUMECAKQKUXZFDAQRTDWNUTMMXVDLMHTCPGLZTJTTNDZRDVUGVHLURIPYBSXJYHSEYWRBFCSERIKVQSADNZIZYENKMEARSYZSACHCOPMOXDHQCNBORIXEKQOVJJHMWWS");
    msg.op = 224U;
    msg.sched_time = 0.07388214870651022;

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
    msg.setTimeStamp(0.7371644522376744);
    msg.setSource(12208U);
    msg.setSourceEntity(5U);
    msg.setDestination(31916U);
    msg.setDestinationEntity(6U);
    msg.name.assign("OZHTZWBUVUJXTHSYBDQHMVZRHUXNGKMKSMWBJEZKQGXRQNYXLXDCSHQBFPRRWKCNIZSZUNLIVWAIJMBPTEUJOWZKHLYMAGVQETWGKDNEBYYFJGIMCSCTBWMLIPMBEMBROHAWLODFUHLUPCVNXBWWDMOVXJQQJGERTRKYUPOAUCYDOSLNTFVRLKFVRQNXTKCSLTDSFYPIEJDFPCXNRTAFFCX");
    msg.op = 18U;
    msg.sched_time = 0.4682796529190484;

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
    msg.setTimeStamp(0.9696453488590262);
    msg.setSource(25857U);
    msg.setSourceEntity(151U);
    msg.setDestination(26284U);
    msg.setDestinationEntity(250U);
    msg.name.assign("LIDWXNERUFTOZGWILNQHLKGQHEXCHZIUBOZOZAEPLVRGKRBFLGDCQCOFBGGSYUSVHEJPONMGWIRCUNPDSZUZWDWXTVOKPYBBDYYYUCAWUWQCJWKXKFAVM");
    msg.op = 192U;
    msg.sched_time = 0.023293253501340705;

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
    msg.setTimeStamp(0.24961903506764327);
    msg.setSource(24176U);
    msg.setSourceEntity(54U);
    msg.setDestination(16283U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.9987487375417526);
    msg.setSource(18860U);
    msg.setSourceEntity(21U);
    msg.setDestination(51637U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.20536951818731308);
    msg.setSource(45177U);
    msg.setSourceEntity(194U);
    msg.setDestination(11931U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.6780913018253326);
    msg.setSource(46216U);
    msg.setSourceEntity(225U);
    msg.setDestination(49064U);
    msg.setDestinationEntity(202U);
    msg.name.assign("QWRFAANOQYTMOXIWKTGRADLYIQJKWBNSQJERVEHTSREFXLFYJHDKVJITNEVBICPRGKEXJWDTBZVPPFBEFMXMCNASGVIYPRDALECNJIGEIUBSJAZGMKKPXHTGWVLBIPNZXOCLFHUDUZWOMVGYUOYYQNPSLHPURRTJZIFLNZUDKBJUHZNXD");
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
    msg.setTimeStamp(0.26473320295551905);
    msg.setSource(48961U);
    msg.setSourceEntity(108U);
    msg.setDestination(61666U);
    msg.setDestinationEntity(191U);
    msg.name.assign("EHINEWRQILHVXNRWDVXGKQOISTLQFAISTWWNHUIQTHDVAMZHEPVTLLXUELRZPJICGVSGKOS");
    msg.state = 38U;

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
    msg.setTimeStamp(0.0037643290121397444);
    msg.setSource(57580U);
    msg.setSourceEntity(231U);
    msg.setDestination(46872U);
    msg.setDestinationEntity(144U);
    msg.name.assign("WUXUHHVRDIYPEIGQCRCENNLMOFTKTPQOSJAUFHWKCNKOXLCVBYRTYKKZSGAPQGMLUEROVDSGUTJASFWIEHBCNQLAMSLNJZGBVHXOGZQBWK");
    msg.state = 103U;

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
    msg.setTimeStamp(0.27076420712598315);
    msg.setSource(11219U);
    msg.setSourceEntity(95U);
    msg.setDestination(50533U);
    msg.setDestinationEntity(219U);
    msg.name.assign("XITKKFZYVKEPAJZSGLWOCKUHMXSFPYJJDOPHHJQYZJHMCQZNKZQBVRJPTMTJPOUNAARQFWUOEAVWCDEYCNBWTLEHWCDKNVKI");
    msg.value = 252U;

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
    msg.setTimeStamp(0.4953385607624824);
    msg.setSource(2512U);
    msg.setSourceEntity(169U);
    msg.setDestination(48406U);
    msg.setDestinationEntity(189U);
    msg.name.assign("JXDCKXAMQRYCAWXZYYPKWIDKPESGTONIZFMHVKGUVWHTRHBUNKPKRJLNUVAVMZUTQYBYNFNFUMJHEOWQSIPWVIRFCZRBVOPIMAQCHRLEEARMFISOEOTNTCYVYSDKGJQFKSMDTLLOEWHRXSRBTAKQIAJNMGCHFUJTYCHZNGTCLHDOCZENJGBLW");
    msg.value = 130U;

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
    msg.setTimeStamp(0.1316811425560973);
    msg.setSource(15490U);
    msg.setSourceEntity(172U);
    msg.setDestination(32229U);
    msg.setDestinationEntity(54U);
    msg.name.assign("SEYFGBONEREPPNYETRIIRYOJOLWEAGDSHYAZJJWQLMQTSMWMJAMIIKWDUCUEHAJFQFXTVFMDBQOVTBYQUHZUBNJQXFDCFDZYMYZGCVVIAUSBXZAAEBSKMNEUPUWEHHHHLNPLHCMKXLYCUAZZOGHLCGITX");
    msg.value = 37U;

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
    msg.setTimeStamp(0.9631727988117541);
    msg.setSource(13770U);
    msg.setSourceEntity(158U);
    msg.setDestination(9845U);
    msg.setDestinationEntity(153U);
    msg.name.assign("JSYGUWIFTKGXBMACERDKMHJXVTRJQFROPKOQZINAHEZFYTOUGYEDDWOZRPGAOWCWAWQAGKCTYBEVXQPLBTOMZFKCJFCAXVHJTLBUHDJKDKDUOUISPSFQEZWPGJERYZNPVOCQPJIBPQBCINLAHBWRKX");

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
    msg.setTimeStamp(0.48973825087567124);
    msg.setSource(14294U);
    msg.setSourceEntity(68U);
    msg.setDestination(19254U);
    msg.setDestinationEntity(173U);
    msg.name.assign("XYJPEOMKCKLGJJHXHWYIQWDKOTOBCREQXIADTHEBZXUCFNGAADVZBQDLGDGBHOOOFLMXYVFCAWPQHBRORFYMSSHTSMVWIZECUUWVLJEYULXCRSKNNAVGXFDUMYPZEQCUYGSUFNSZXLVOZHIEPR");

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
    msg.setTimeStamp(0.6027120860023565);
    msg.setSource(11324U);
    msg.setSourceEntity(148U);
    msg.setDestination(61670U);
    msg.setDestinationEntity(13U);
    msg.name.assign("BVFCUPSXSTCOKTHODIFMNJOSLRFAHKGZYTWRCQYTRRAEORLPQLVHYDNIQAGQBNCHSMASEBUPQRZSNLXTPKNFCILWRMKIOOZZDQQKOGTMDVBBVDXNUECSEFVFUIJWLKMOKJILAFZIASUMCBXZXPGDTIUZSYNAXGVGXASDDYPZJHVBAHDFVFGYWHJYJEWNJRUXMW");

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
    msg.setTimeStamp(0.9320619610475706);
    msg.setSource(49022U);
    msg.setSourceEntity(147U);
    msg.setDestination(14052U);
    msg.setDestinationEntity(240U);
    msg.name.assign("ZHONQVDTJICPOMSSSILYANVLIHAFDVEDCFWUIHRHXKPFJPTGYIYXSZSEJQFZOALRXZDLWEVYSBQOVCCXTWHLOJXVTPIPJURAQZTABDTHTRFNANWKGEPLYDNDMMOWGUXWQZJEKVYSGBXZCZVGKUMETEAMXRIPBBKPSGLUXYXBCJBRPMUWQKBFZFGMOAGVHFLVG");
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
    msg.setTimeStamp(0.771704135533521);
    msg.setSource(4364U);
    msg.setSourceEntity(200U);
    msg.setDestination(15613U);
    msg.setDestinationEntity(159U);
    msg.name.assign("BIETLJUUOKMSNDYVFZOBBGALSBQGIEDCHTHODGWCNNPWDYTHJVPSRUFCGMPFMBAQUZSBWRFKRLTIQXNEJINBVIWX");
    msg.value = 219U;

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
    msg.setTimeStamp(0.3511940515818134);
    msg.setSource(9104U);
    msg.setSourceEntity(149U);
    msg.setDestination(25976U);
    msg.setDestinationEntity(64U);
    msg.name.assign("ALFGDQHXGQVSTXQWMVYIISYBROTHJHXNFBKNECOKQXVVKTOMYPRPOIJJULEQAWEADCUMCKSUDHHILOGJTMXWWMAOPSARVABKHBCHNFUPYPPPJHPQQLTAJZRTMWKRFFZEXFGSIDUICYVFESDLMERHNLOFSLYZIXYDBDJTVUDRQZKZEDNZCMNJEDRCURJLANLMWAEBQFYKGGCVZGXUOAMRK");
    msg.value = 159U;

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
    msg.setTimeStamp(0.9952536084020018);
    msg.setSource(55027U);
    msg.setSourceEntity(47U);
    msg.setDestination(33714U);
    msg.setDestinationEntity(183U);
    msg.id = 18U;
    msg.period = 3376262610U;
    msg.duty_cycle = 2644727465U;

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
    msg.setTimeStamp(0.941371374695011);
    msg.setSource(20101U);
    msg.setSourceEntity(247U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(60U);
    msg.id = 100U;
    msg.period = 3311396358U;
    msg.duty_cycle = 1525693754U;

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
    msg.setTimeStamp(0.9760305568935086);
    msg.setSource(23998U);
    msg.setSourceEntity(245U);
    msg.setDestination(61428U);
    msg.setDestinationEntity(215U);
    msg.id = 94U;
    msg.period = 2166010322U;
    msg.duty_cycle = 1462827323U;

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
    msg.setTimeStamp(0.6071511535877612);
    msg.setSource(360U);
    msg.setSourceEntity(120U);
    msg.setDestination(48829U);
    msg.setDestinationEntity(185U);
    msg.id = 210U;
    msg.period = 211900997U;
    msg.duty_cycle = 1596315748U;

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
    msg.setTimeStamp(0.31138442128731225);
    msg.setSource(43135U);
    msg.setSourceEntity(95U);
    msg.setDestination(48348U);
    msg.setDestinationEntity(166U);
    msg.id = 160U;
    msg.period = 533645619U;
    msg.duty_cycle = 69904241U;

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
    msg.setTimeStamp(0.6676944542901465);
    msg.setSource(35236U);
    msg.setSourceEntity(187U);
    msg.setDestination(23128U);
    msg.setDestinationEntity(85U);
    msg.id = 13U;
    msg.period = 755936688U;
    msg.duty_cycle = 2352849699U;

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
    msg.setTimeStamp(0.6123752628275184);
    msg.setSource(5408U);
    msg.setSourceEntity(167U);
    msg.setDestination(52751U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.6946578427858401;
    msg.lon = 0.22444981832137967;
    msg.height = 0.5313990856494146;
    msg.x = 0.2638563120004699;
    msg.y = 0.8921131235236177;
    msg.z = 0.6651504998352581;
    msg.phi = 0.4606155954413613;
    msg.theta = 0.2391365582922632;
    msg.psi = 0.7399606625266475;
    msg.u = 0.05912110596086684;
    msg.v = 0.6046832331339823;
    msg.w = 0.5831762733787647;
    msg.vx = 0.46418423869972114;
    msg.vy = 0.13461736903720434;
    msg.vz = 0.19784301373356883;
    msg.p = 0.515651601177516;
    msg.q = 0.4490160433340712;
    msg.r = 0.04313725676983182;
    msg.depth = 0.3401017616706874;
    msg.alt = 0.9112404699521105;

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
    msg.setTimeStamp(0.819202820910073);
    msg.setSource(59086U);
    msg.setSourceEntity(170U);
    msg.setDestination(58447U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.6825434734934362;
    msg.lon = 0.8520055159861306;
    msg.height = 0.6515728576510936;
    msg.x = 0.34072637689615526;
    msg.y = 0.6628749726599721;
    msg.z = 0.22746765602542962;
    msg.phi = 0.2218259001614309;
    msg.theta = 0.041745315637386704;
    msg.psi = 0.4492016583935349;
    msg.u = 0.11599557379140968;
    msg.v = 0.19961159855279031;
    msg.w = 0.8560356876337086;
    msg.vx = 0.1600547212191854;
    msg.vy = 0.9073396390217479;
    msg.vz = 0.5171783756362028;
    msg.p = 0.4504462764375441;
    msg.q = 0.42470161141578566;
    msg.r = 0.5384227133593487;
    msg.depth = 0.2913702031296551;
    msg.alt = 0.14636880798026575;

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
    msg.setTimeStamp(0.01180609458773263);
    msg.setSource(19462U);
    msg.setSourceEntity(66U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.5285534140813859;
    msg.lon = 0.26193426298186206;
    msg.height = 0.8471431442894747;
    msg.x = 0.51168471881878;
    msg.y = 0.05973851110594308;
    msg.z = 0.2749942224423648;
    msg.phi = 0.6316166136554839;
    msg.theta = 0.5349832734730955;
    msg.psi = 0.011889481162560944;
    msg.u = 0.9773346225913069;
    msg.v = 0.9838041430094643;
    msg.w = 0.8216278681505433;
    msg.vx = 0.4946073722415779;
    msg.vy = 0.44224926367801154;
    msg.vz = 0.6618961326979993;
    msg.p = 0.2268758467899542;
    msg.q = 0.6891533841326423;
    msg.r = 0.04552801600220158;
    msg.depth = 0.7995246407696188;
    msg.alt = 0.32073896174657024;

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
    msg.setTimeStamp(0.37743323004469564);
    msg.setSource(1726U);
    msg.setSourceEntity(27U);
    msg.setDestination(50857U);
    msg.setDestinationEntity(165U);
    msg.x = 0.8085894294720247;
    msg.y = 0.7101023851853119;
    msg.z = 0.853774696448306;

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
    msg.setTimeStamp(0.3909119666652878);
    msg.setSource(415U);
    msg.setSourceEntity(87U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(130U);
    msg.x = 0.7409853580791399;
    msg.y = 0.2982225646600395;
    msg.z = 0.5856021006823069;

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
    msg.setTimeStamp(0.5022385569144597);
    msg.setSource(19168U);
    msg.setSourceEntity(104U);
    msg.setDestination(6326U);
    msg.setDestinationEntity(116U);
    msg.x = 0.9181698388435126;
    msg.y = 0.1940084649186702;
    msg.z = 0.7843530475940631;

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
    msg.setTimeStamp(0.76562398468814);
    msg.setSource(6968U);
    msg.setSourceEntity(58U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(33U);
    msg.value = 0.30322057934517954;

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
    msg.setTimeStamp(0.2855793914113015);
    msg.setSource(19278U);
    msg.setSourceEntity(102U);
    msg.setDestination(58795U);
    msg.setDestinationEntity(118U);
    msg.value = 0.3835863943126837;

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
    msg.setTimeStamp(0.5855326991894751);
    msg.setSource(63103U);
    msg.setSourceEntity(86U);
    msg.setDestination(58757U);
    msg.setDestinationEntity(189U);
    msg.value = 0.3519712388604844;

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
    msg.setTimeStamp(0.10845907961874746);
    msg.setSource(31167U);
    msg.setSourceEntity(164U);
    msg.setDestination(55540U);
    msg.setDestinationEntity(135U);
    msg.value = 0.5711834645214828;

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
    msg.setTimeStamp(0.02741595806296404);
    msg.setSource(10963U);
    msg.setSourceEntity(173U);
    msg.setDestination(50375U);
    msg.setDestinationEntity(30U);
    msg.value = 0.943175806454092;

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
    msg.setTimeStamp(0.664970028382405);
    msg.setSource(43196U);
    msg.setSourceEntity(115U);
    msg.setDestination(23933U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5244033091078719;

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
    msg.setTimeStamp(0.5519484636024278);
    msg.setSource(2674U);
    msg.setSourceEntity(223U);
    msg.setDestination(21716U);
    msg.setDestinationEntity(237U);
    msg.x = 0.8979149593435074;
    msg.y = 0.8269238119339916;
    msg.z = 0.10752351435970331;
    msg.phi = 0.551186464680631;
    msg.theta = 0.5272067328320015;
    msg.psi = 0.8723539612304259;
    msg.p = 0.5037657431911379;
    msg.q = 0.9011114617250571;
    msg.r = 0.4538604567717165;
    msg.u = 0.2673571250474204;
    msg.v = 0.7441695864886897;
    msg.w = 0.060314390361254744;
    msg.bias_psi = 0.12108876420481707;
    msg.bias_r = 0.4277255835527555;

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
    msg.setTimeStamp(0.9225810288001779);
    msg.setSource(14687U);
    msg.setSourceEntity(224U);
    msg.setDestination(39347U);
    msg.setDestinationEntity(87U);
    msg.x = 0.6480298717325095;
    msg.y = 0.40611924150249545;
    msg.z = 0.18512829226077776;
    msg.phi = 0.28764093925960055;
    msg.theta = 0.33509465777216196;
    msg.psi = 0.2672855603365687;
    msg.p = 0.34197310404484704;
    msg.q = 0.13792529733586778;
    msg.r = 0.288345398382276;
    msg.u = 0.3194333379900899;
    msg.v = 0.5456007138498536;
    msg.w = 0.5152444497116362;
    msg.bias_psi = 0.7671197889901131;
    msg.bias_r = 0.30871079029150705;

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
    msg.setTimeStamp(0.627243583750721);
    msg.setSource(17974U);
    msg.setSourceEntity(237U);
    msg.setDestination(14179U);
    msg.setDestinationEntity(208U);
    msg.x = 0.6007758619366743;
    msg.y = 0.8486302142164319;
    msg.z = 0.33747776258000883;
    msg.phi = 0.3569187304174035;
    msg.theta = 0.24221549114934948;
    msg.psi = 0.973877619965617;
    msg.p = 0.03139245592853501;
    msg.q = 0.04183284824324063;
    msg.r = 0.7454942069509406;
    msg.u = 0.9270285888649613;
    msg.v = 0.8070702769760731;
    msg.w = 0.4988731469115235;
    msg.bias_psi = 0.5262955545837211;
    msg.bias_r = 0.9825717346410271;

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
    msg.setTimeStamp(0.5339018624508184);
    msg.setSource(48451U);
    msg.setSourceEntity(175U);
    msg.setDestination(20611U);
    msg.setDestinationEntity(9U);
    msg.bias_psi = 0.22722769886444028;
    msg.bias_r = 0.0638510013153969;
    msg.cog = 0.4108221737691049;
    msg.cyaw = 0.04482764579685172;
    msg.lbl_rej_level = 0.7851740153907772;
    msg.gps_rej_level = 0.5209216032671418;
    msg.custom_x = 0.6588390019689581;
    msg.custom_y = 0.16330506684764612;
    msg.custom_z = 0.45548093425392644;

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
    msg.setTimeStamp(0.8928676502056632);
    msg.setSource(60780U);
    msg.setSourceEntity(56U);
    msg.setDestination(596U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.011283864144774114;
    msg.bias_r = 0.662599285301119;
    msg.cog = 0.9696219541226572;
    msg.cyaw = 0.0588156585828169;
    msg.lbl_rej_level = 0.934687468304915;
    msg.gps_rej_level = 0.013615854226823099;
    msg.custom_x = 0.4967354520208981;
    msg.custom_y = 0.3140116224967777;
    msg.custom_z = 0.31750520412135375;

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
    msg.setTimeStamp(0.6050423878699401);
    msg.setSource(30270U);
    msg.setSourceEntity(231U);
    msg.setDestination(52520U);
    msg.setDestinationEntity(245U);
    msg.bias_psi = 0.8349685840940331;
    msg.bias_r = 0.6634969135247978;
    msg.cog = 0.3499164629682715;
    msg.cyaw = 0.03204919778483162;
    msg.lbl_rej_level = 0.32408348269848386;
    msg.gps_rej_level = 0.5372962901374058;
    msg.custom_x = 0.5716473101840814;
    msg.custom_y = 0.1568122920182723;
    msg.custom_z = 0.21197575964479776;

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
    msg.setTimeStamp(0.06882363314746887);
    msg.setSource(59588U);
    msg.setSourceEntity(81U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(147U);
    msg.utc_time = 0.5388995955947112;
    msg.reason = 163U;

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
    msg.setTimeStamp(0.5345061874580477);
    msg.setSource(56512U);
    msg.setSourceEntity(157U);
    msg.setDestination(24652U);
    msg.setDestinationEntity(252U);
    msg.utc_time = 0.7757818480029907;
    msg.reason = 74U;

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
    msg.setTimeStamp(0.06653543544212281);
    msg.setSource(19700U);
    msg.setSourceEntity(43U);
    msg.setDestination(26845U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.7105874706573455;
    msg.reason = 251U;

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
    msg.setTimeStamp(0.47773164935197165);
    msg.setSource(11477U);
    msg.setSourceEntity(169U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(183U);
    msg.id = 24U;
    msg.range = 0.4365940603028923;
    msg.acceptance = 253U;

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
    msg.setTimeStamp(0.3112248226431007);
    msg.setSource(16178U);
    msg.setSourceEntity(215U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(35U);
    msg.id = 129U;
    msg.range = 0.9821125319851789;
    msg.acceptance = 189U;

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
    msg.setTimeStamp(0.18144232266659577);
    msg.setSource(41251U);
    msg.setSourceEntity(76U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(4U);
    msg.id = 129U;
    msg.range = 0.4222589876961017;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.4737372607636491);
    msg.setSource(16266U);
    msg.setSourceEntity(105U);
    msg.setDestination(59091U);
    msg.setDestinationEntity(52U);
    msg.type = 149U;
    msg.reason = 37U;
    msg.value = 0.7289894100991506;
    msg.timestep = 0.7697645468821084;

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
    msg.setTimeStamp(0.9088972256961023);
    msg.setSource(26917U);
    msg.setSourceEntity(216U);
    msg.setDestination(28340U);
    msg.setDestinationEntity(137U);
    msg.type = 68U;
    msg.reason = 56U;
    msg.value = 0.9270874557802118;
    msg.timestep = 0.8635540090365486;

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
    msg.setTimeStamp(0.4413588657303309);
    msg.setSource(11751U);
    msg.setSourceEntity(143U);
    msg.setDestination(58512U);
    msg.setDestinationEntity(183U);
    msg.type = 46U;
    msg.reason = 247U;
    msg.value = 0.5026946779228466;
    msg.timestep = 0.9666059956867323;

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
    msg.setTimeStamp(0.5866199702042714);
    msg.setSource(438U);
    msg.setSourceEntity(63U);
    msg.setDestination(32041U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.6522135183139172);
    msg.setSource(15160U);
    msg.setSourceEntity(181U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.037804110635862975);
    msg.setSource(42347U);
    msg.setSourceEntity(69U);
    msg.setDestination(64070U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.39047179208912397);
    msg.setSource(37678U);
    msg.setSourceEntity(202U);
    msg.setDestination(55620U);
    msg.setDestinationEntity(189U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XKHCLPTLNBWLFHODZCSGYIPXWXSOXTLPZRGCSKWEXRYMQNDWKQRXVKZCNLDUIUSAANVPSDCUUNJQAVZHTPNTQCJSHHAKXIIPGAOCYRDTEPIMKJWOCYUWSEEYOYAHF");
    tmp_msg_0.lat = 0.8660950031522363;
    tmp_msg_0.lon = 0.1613662245423293;
    tmp_msg_0.depth = 0.9150844739713049;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 85U;
    tmp_msg_0.transponder_delay = 165U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.14717466170865445;
    msg.y = 0.5712760417180744;
    msg.var_x = 0.9936658118994245;
    msg.var_y = 0.6231705437581252;
    msg.distance = 0.07347003261208651;

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
    msg.setTimeStamp(0.38319317114387685);
    msg.setSource(41825U);
    msg.setSourceEntity(81U);
    msg.setDestination(63844U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KWBUVNLRHEMQEYZZWICJNNYOUQTSKGODIBIGZJCGCEQCNQYKECDXIMXRXHDHVSOBXMGYTBPFPDJAQPFLYWCOHWMWVHAATUPXPUROAEHZKPIFSBTSUGMXAOKY");
    tmp_msg_0.lat = 0.5669698699513057;
    tmp_msg_0.lon = 0.2939474370226284;
    tmp_msg_0.depth = 0.7468659320481856;
    tmp_msg_0.query_channel = 39U;
    tmp_msg_0.reply_channel = 136U;
    tmp_msg_0.transponder_delay = 58U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.45871792231454067;
    msg.y = 0.6576462163542225;
    msg.var_x = 0.08432314687121789;
    msg.var_y = 0.0230909284140125;
    msg.distance = 0.40021550349458124;

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
    msg.setTimeStamp(0.9340094988185857);
    msg.setSource(41487U);
    msg.setSourceEntity(74U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(154U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KKOSLQPGUANDUSECBOCBBUEERCMXWTEWDDSCEUHWNZCTPQDUVUECTFMOWNKEJNRPEIQJRTWJVYSZIHJRBBPDQFSKMTFXXMWSTBM");
    tmp_msg_0.lat = 0.7605071969246089;
    tmp_msg_0.lon = 0.00359047533140211;
    tmp_msg_0.depth = 0.8995107656382166;
    tmp_msg_0.query_channel = 24U;
    tmp_msg_0.reply_channel = 220U;
    tmp_msg_0.transponder_delay = 73U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9466057188919885;
    msg.y = 0.41875140689893275;
    msg.var_x = 0.46130565811939495;
    msg.var_y = 0.1311911578234265;
    msg.distance = 0.0722306752889591;

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
    msg.setTimeStamp(0.9132372162793508);
    msg.setSource(50763U);
    msg.setSourceEntity(118U);
    msg.setDestination(3284U);
    msg.setDestinationEntity(237U);
    msg.state = 154U;

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
    msg.setTimeStamp(0.34758770359463775);
    msg.setSource(6795U);
    msg.setSourceEntity(209U);
    msg.setDestination(28657U);
    msg.setDestinationEntity(243U);
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
    msg.setTimeStamp(0.8660587829638704);
    msg.setSource(37U);
    msg.setSourceEntity(233U);
    msg.setDestination(39277U);
    msg.setDestinationEntity(163U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.6754373218368822);
    msg.setSource(44669U);
    msg.setSourceEntity(220U);
    msg.setDestination(10407U);
    msg.setDestinationEntity(158U);
    msg.x = 0.5288099754049608;
    msg.y = 0.26436100170153976;
    msg.z = 0.13025356470747207;

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
    msg.setTimeStamp(0.76820075218623);
    msg.setSource(64599U);
    msg.setSourceEntity(32U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(181U);
    msg.x = 0.8211024408120322;
    msg.y = 0.9888062189142739;
    msg.z = 0.4306561945169185;

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
    msg.setTimeStamp(0.8158079079588946);
    msg.setSource(33525U);
    msg.setSourceEntity(214U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(180U);
    msg.x = 0.8618798503790265;
    msg.y = 0.6124301395274706;
    msg.z = 0.8975987639633634;

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
    msg.setTimeStamp(0.986183754077269);
    msg.setSource(11855U);
    msg.setSourceEntity(224U);
    msg.setDestination(59465U);
    msg.setDestinationEntity(172U);
    msg.value = 0.39189591199354645;

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
    msg.setTimeStamp(0.9539805581050956);
    msg.setSource(63969U);
    msg.setSourceEntity(4U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(49U);
    msg.value = 0.2039704138948174;

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
    msg.setTimeStamp(0.2648202848014417);
    msg.setSource(60232U);
    msg.setSourceEntity(117U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(152U);
    msg.value = 0.36094439116123356;

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
    msg.setTimeStamp(0.05913915757412258);
    msg.setSource(586U);
    msg.setSourceEntity(45U);
    msg.setDestination(49047U);
    msg.setDestinationEntity(93U);
    msg.value = 0.34955035518175603;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.5694482366991517);
    msg.setSource(46050U);
    msg.setSourceEntity(11U);
    msg.setDestination(31095U);
    msg.setDestinationEntity(180U);
    msg.value = 0.6444233329609997;
    msg.z_units = 0U;

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
    msg.setTimeStamp(0.9112917261753085);
    msg.setSource(1664U);
    msg.setSourceEntity(38U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6570799556448372;
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
    msg.setTimeStamp(0.9664497269553108);
    msg.setSource(9995U);
    msg.setSourceEntity(18U);
    msg.setDestination(35778U);
    msg.setDestinationEntity(227U);
    msg.value = 0.8919332391617887;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.2516952022184241);
    msg.setSource(26586U);
    msg.setSourceEntity(183U);
    msg.setDestination(51913U);
    msg.setDestinationEntity(208U);
    msg.value = 0.4236382651889369;
    msg.speed_units = 192U;

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
    msg.setTimeStamp(0.11944301755032327);
    msg.setSource(62813U);
    msg.setSourceEntity(172U);
    msg.setDestination(10170U);
    msg.setDestinationEntity(20U);
    msg.value = 0.44306426682627154;
    msg.speed_units = 62U;

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
    msg.setTimeStamp(0.9871800928785683);
    msg.setSource(40799U);
    msg.setSourceEntity(130U);
    msg.setDestination(60623U);
    msg.setDestinationEntity(64U);
    msg.value = 0.8471953662472843;

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
    msg.setTimeStamp(0.8447338915778799);
    msg.setSource(60008U);
    msg.setSourceEntity(243U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6895250489701563;

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
    msg.setTimeStamp(0.471313497271012);
    msg.setSource(8092U);
    msg.setSourceEntity(202U);
    msg.setDestination(34562U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8791154375467067;

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
    msg.setTimeStamp(0.034893912687009365);
    msg.setSource(41838U);
    msg.setSourceEntity(123U);
    msg.setDestination(21190U);
    msg.setDestinationEntity(196U);
    msg.value = 0.09008822356343382;

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
    msg.setTimeStamp(0.8371795634466999);
    msg.setSource(34113U);
    msg.setSourceEntity(61U);
    msg.setDestination(45924U);
    msg.setDestinationEntity(27U);
    msg.value = 0.47312902681154123;

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
    msg.setTimeStamp(0.4652891290674872);
    msg.setSource(42811U);
    msg.setSourceEntity(59U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(216U);
    msg.value = 0.7108952831916373;

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
    msg.setTimeStamp(0.14977735419643423);
    msg.setSource(60928U);
    msg.setSourceEntity(158U);
    msg.setDestination(50786U);
    msg.setDestinationEntity(232U);
    msg.value = 0.3001424629924515;

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
    msg.setTimeStamp(0.8471051259054267);
    msg.setSource(21634U);
    msg.setSourceEntity(48U);
    msg.setDestination(3332U);
    msg.setDestinationEntity(85U);
    msg.value = 0.7308464892816626;

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
    msg.setTimeStamp(0.13951709152953984);
    msg.setSource(62402U);
    msg.setSourceEntity(227U);
    msg.setDestination(7975U);
    msg.setDestinationEntity(87U);
    msg.value = 0.7776405370081733;

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
    msg.setTimeStamp(0.9096419987022814);
    msg.setSource(50239U);
    msg.setSourceEntity(253U);
    msg.setDestination(41311U);
    msg.setDestinationEntity(42U);
    msg.start_lat = 0.9853115596727463;
    msg.start_lon = 0.8914242272105192;
    msg.start_z = 0.1560400449614704;
    msg.start_z_units = 172U;
    msg.end_lat = 0.42289186764752673;
    msg.end_lon = 0.7018600300263099;
    msg.end_z = 0.7173739380577963;
    msg.end_z_units = 54U;
    msg.speed = 0.9161418981145276;
    msg.speed_units = 60U;
    msg.lradius = 0.11680148268752344;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.5670197586658721);
    msg.setSource(2647U);
    msg.setSourceEntity(124U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(98U);
    msg.start_lat = 0.7571892478712319;
    msg.start_lon = 0.4305804207869772;
    msg.start_z = 0.7915849170237281;
    msg.start_z_units = 252U;
    msg.end_lat = 0.867509924773096;
    msg.end_lon = 0.021458908828449696;
    msg.end_z = 0.7058505478628874;
    msg.end_z_units = 16U;
    msg.speed = 0.5723609842402111;
    msg.speed_units = 171U;
    msg.lradius = 0.2867494159654944;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.8496517890264591);
    msg.setSource(65067U);
    msg.setSourceEntity(131U);
    msg.setDestination(35533U);
    msg.setDestinationEntity(145U);
    msg.start_lat = 0.47235240696507375;
    msg.start_lon = 0.6991664925310775;
    msg.start_z = 0.5808854411304541;
    msg.start_z_units = 117U;
    msg.end_lat = 0.02300046323025995;
    msg.end_lon = 0.23812072504798687;
    msg.end_z = 0.5304833234729165;
    msg.end_z_units = 229U;
    msg.speed = 0.9958070289663707;
    msg.speed_units = 6U;
    msg.lradius = 0.19176860533254114;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.08696487066494263);
    msg.setSource(48628U);
    msg.setSourceEntity(9U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(39U);
    msg.x = 0.005153329224015901;
    msg.y = 0.9268018409425204;
    msg.z = 0.08536608335811036;
    msg.k = 0.7572709150576257;
    msg.m = 0.8588393072210807;
    msg.n = 0.9318419612331684;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.2838097381264125);
    msg.setSource(57899U);
    msg.setSourceEntity(135U);
    msg.setDestination(43386U);
    msg.setDestinationEntity(31U);
    msg.x = 0.061820570712675216;
    msg.y = 0.3744881441356064;
    msg.z = 0.5537220437748;
    msg.k = 0.7691653365718889;
    msg.m = 0.44031514151728524;
    msg.n = 0.228427275224387;
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
    msg.setTimeStamp(0.39158873434407404);
    msg.setSource(43369U);
    msg.setSourceEntity(65U);
    msg.setDestination(6951U);
    msg.setDestinationEntity(20U);
    msg.x = 0.14468559604538167;
    msg.y = 0.4912097169462173;
    msg.z = 0.17206489393137392;
    msg.k = 0.34102782970538603;
    msg.m = 0.18329818105601747;
    msg.n = 0.7378988489241672;
    msg.flags = 38U;

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
    msg.setTimeStamp(0.6247734952524099);
    msg.setSource(59607U);
    msg.setSourceEntity(9U);
    msg.setDestination(22446U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9640330733246131;

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
    msg.setTimeStamp(0.5826265865841678);
    msg.setSource(54858U);
    msg.setSourceEntity(174U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6319089890333389;

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
    msg.setTimeStamp(0.6249085211589981);
    msg.setSource(5698U);
    msg.setSourceEntity(96U);
    msg.setDestination(46553U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7057764828131389;

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
    msg.setTimeStamp(0.6797327135603035);
    msg.setSource(35851U);
    msg.setSourceEntity(192U);
    msg.setDestination(62874U);
    msg.setDestinationEntity(167U);
    msg.u = 0.20799402819254575;
    msg.v = 0.03244849405852013;
    msg.w = 0.8399643227501755;
    msg.p = 0.5094810036696186;
    msg.q = 0.9396710809265427;
    msg.r = 0.4061659052730544;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.6173058909461691);
    msg.setSource(7147U);
    msg.setSourceEntity(101U);
    msg.setDestination(21966U);
    msg.setDestinationEntity(11U);
    msg.u = 0.44119496170113026;
    msg.v = 0.9446855770280431;
    msg.w = 0.7304537490594375;
    msg.p = 0.14385433248164647;
    msg.q = 0.9695571565123092;
    msg.r = 0.9083835741141931;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.9156230738927488);
    msg.setSource(3857U);
    msg.setSourceEntity(6U);
    msg.setDestination(21918U);
    msg.setDestinationEntity(24U);
    msg.u = 0.24885979018900972;
    msg.v = 0.24068656428762558;
    msg.w = 0.40522963891875086;
    msg.p = 0.05120673577934154;
    msg.q = 0.39210284580980137;
    msg.r = 0.861758148417349;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.801970883069654);
    msg.setSource(25970U);
    msg.setSourceEntity(185U);
    msg.setDestination(27646U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.7201702429156458;
    msg.start_lon = 0.0061357359749217855;
    msg.start_z = 0.34870768291827814;
    msg.start_z_units = 56U;
    msg.end_lat = 0.9060940275849468;
    msg.end_lon = 0.2760873977431185;
    msg.end_z = 0.8751109400618202;
    msg.end_z_units = 26U;
    msg.lradius = 0.7893658580079723;
    msg.flags = 191U;
    msg.x = 0.8269291867375662;
    msg.y = 0.4098487342634628;
    msg.z = 0.7071609297737208;
    msg.vx = 0.9170399000382387;
    msg.vy = 0.4756315991079597;
    msg.vz = 0.17150582753817312;
    msg.course_error = 0.9680510795664249;
    msg.eta = 40508U;

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
    msg.setTimeStamp(0.043670232646251694);
    msg.setSource(3459U);
    msg.setSourceEntity(5U);
    msg.setDestination(22346U);
    msg.setDestinationEntity(141U);
    msg.start_lat = 0.8564733957892119;
    msg.start_lon = 0.1853553022072142;
    msg.start_z = 0.3412964325891722;
    msg.start_z_units = 242U;
    msg.end_lat = 0.061521544392688865;
    msg.end_lon = 0.6253193125984595;
    msg.end_z = 0.3851562745172318;
    msg.end_z_units = 29U;
    msg.lradius = 0.061835760481192104;
    msg.flags = 40U;
    msg.x = 0.06184150475826333;
    msg.y = 0.7287419963813142;
    msg.z = 0.8450975721344294;
    msg.vx = 0.011947499245906212;
    msg.vy = 0.017597095996782053;
    msg.vz = 0.961875857895999;
    msg.course_error = 0.3554749859973908;
    msg.eta = 16695U;

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
    msg.setTimeStamp(0.6161161073855924);
    msg.setSource(34818U);
    msg.setSourceEntity(45U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(72U);
    msg.start_lat = 0.06324656363350623;
    msg.start_lon = 0.5798217246391888;
    msg.start_z = 0.6436248941216132;
    msg.start_z_units = 171U;
    msg.end_lat = 0.25786806206587454;
    msg.end_lon = 0.4236877335637821;
    msg.end_z = 0.42027889330635526;
    msg.end_z_units = 183U;
    msg.lradius = 0.6430930063166437;
    msg.flags = 198U;
    msg.x = 0.3053764591527012;
    msg.y = 0.3852342823541056;
    msg.z = 0.9749295752970072;
    msg.vx = 0.5157424969533442;
    msg.vy = 0.0456676760772281;
    msg.vz = 0.5581479881256866;
    msg.course_error = 0.21961668182767735;
    msg.eta = 27797U;

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
    msg.setTimeStamp(0.22848791790512357);
    msg.setSource(63856U);
    msg.setSourceEntity(145U);
    msg.setDestination(11040U);
    msg.setDestinationEntity(31U);
    msg.k = 0.9157962807953038;
    msg.m = 0.25682950315550657;
    msg.n = 0.5269082186802073;

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
    msg.setTimeStamp(0.18448980341150278);
    msg.setSource(7927U);
    msg.setSourceEntity(63U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(217U);
    msg.k = 0.2584842924539208;
    msg.m = 0.37952807720975346;
    msg.n = 0.4294135620932884;

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
    msg.setTimeStamp(0.141208421827838);
    msg.setSource(15230U);
    msg.setSourceEntity(122U);
    msg.setDestination(1011U);
    msg.setDestinationEntity(40U);
    msg.k = 0.8477694673326813;
    msg.m = 0.6556623975065647;
    msg.n = 0.8719851944729572;

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
    msg.setTimeStamp(0.32049109762900085);
    msg.setSource(38410U);
    msg.setSourceEntity(147U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(19U);
    msg.p = 0.4865894872433376;
    msg.i = 0.9163810155600626;
    msg.d = 0.6591835881116868;
    msg.a = 0.7656773342346992;

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
    msg.setTimeStamp(0.8462307402250525);
    msg.setSource(48192U);
    msg.setSourceEntity(159U);
    msg.setDestination(40761U);
    msg.setDestinationEntity(62U);
    msg.p = 0.5699427936133548;
    msg.i = 0.8397762992504212;
    msg.d = 0.8173497564718457;
    msg.a = 0.6441102703698938;

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
    msg.setTimeStamp(0.3292365568582366);
    msg.setSource(26800U);
    msg.setSourceEntity(137U);
    msg.setDestination(33627U);
    msg.setDestinationEntity(189U);
    msg.p = 0.7540300250485528;
    msg.i = 0.9758328401051172;
    msg.d = 0.8855617587679404;
    msg.a = 0.6453984396192292;

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
    msg.setTimeStamp(0.9788197365927542);
    msg.setSource(56778U);
    msg.setSourceEntity(170U);
    msg.setDestination(32317U);
    msg.setDestinationEntity(3U);
    msg.op = 31U;

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
    msg.setTimeStamp(0.12367286064095862);
    msg.setSource(35568U);
    msg.setSourceEntity(18U);
    msg.setDestination(38293U);
    msg.setDestinationEntity(46U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.3139604099424602);
    msg.setSource(5721U);
    msg.setSourceEntity(120U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(22U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.4169404646496069);
    msg.setSource(14103U);
    msg.setSourceEntity(111U);
    msg.setDestination(53952U);
    msg.setDestinationEntity(94U);
    msg.timeout = 64997U;
    msg.lat = 0.5023793768418715;
    msg.lon = 0.9599519643857725;
    msg.z = 0.08979944246609362;
    msg.z_units = 89U;
    msg.speed = 0.45315635705249957;
    msg.speed_units = 220U;
    msg.roll = 0.8596431907019871;
    msg.pitch = 0.8092680787461031;
    msg.yaw = 0.32376406063484586;
    msg.custom.assign("TGOXWVHLEVKAPFZEHLIUZRAQXCQWZFNOSTEMJUDVSTJALNWWMPLHFBMCMAJVIAZKYIVYKCDBWLBSGUZNPJSQNLRBEERHFSCLZTEXQMDUKHNIBZOIHHLTTOGDLCTQQDAWVNIOIJYIDKTFBHZMSRWGBDJPYFRDFJOSGTNHAZUJXAYCXRINOMUQCZNLMYQEWEMOAXKPMUOABIDUGGRQGPPXKKWNGDUBRVCEPBJYYSUKW");

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
    msg.setTimeStamp(0.09745586273357476);
    msg.setSource(53195U);
    msg.setSourceEntity(221U);
    msg.setDestination(47896U);
    msg.setDestinationEntity(174U);
    msg.timeout = 56808U;
    msg.lat = 0.1428831030149521;
    msg.lon = 0.1799731067769721;
    msg.z = 0.05179195558756977;
    msg.z_units = 171U;
    msg.speed = 0.4329935498059243;
    msg.speed_units = 194U;
    msg.roll = 0.7725218013900444;
    msg.pitch = 0.04431616953899009;
    msg.yaw = 0.42980756906126105;
    msg.custom.assign("PLTIWEMPURVSGQTCXCYZNXXPIHPVNWBVWWTTZSIAMGEKPRWGYKPSKVJDDJTPBDLXAUBGVXIGQQJHILENVUMBUHSMYOABUIHWEJWLKKRQRYZMOINIXATYRLFPRNZCZHIOJZHOPBFQEPKFVLDVYNXNCBQ");

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
    msg.setTimeStamp(0.6684145826644119);
    msg.setSource(34771U);
    msg.setSourceEntity(204U);
    msg.setDestination(59239U);
    msg.setDestinationEntity(105U);
    msg.timeout = 54593U;
    msg.lat = 0.3786527439452221;
    msg.lon = 0.4143956343421492;
    msg.z = 0.05903382269036417;
    msg.z_units = 68U;
    msg.speed = 0.7610449063617364;
    msg.speed_units = 50U;
    msg.roll = 0.9299148587704464;
    msg.pitch = 0.48289772783210794;
    msg.yaw = 0.1095887709148583;
    msg.custom.assign("QLHWSPTOETQRKVCOSHZLZWGKSNYZFIJSOIJQONLWLQBSAIUDZRQYMHUPZPREBNPDWPCVTZYFEGSRGYHZDUDOPRFCKNVTJDYUQBNRJCMCWLTXDUJCAZYHTRPXJIWVAYGEEBOAFCXXCVDBBEMSIJGUQNYMUWGVLESXTBRCDGUOAFEHTKLRJAKVKVMXBNBIDFAONKKMMPJQI");

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
    msg.setTimeStamp(0.6326215566636115);
    msg.setSource(5305U);
    msg.setSourceEntity(208U);
    msg.setDestination(63579U);
    msg.setDestinationEntity(85U);
    msg.timeout = 49272U;
    msg.lat = 0.29237910924491617;
    msg.lon = 0.8424021439796939;
    msg.z = 0.7189773400805584;
    msg.z_units = 163U;
    msg.speed = 0.8658205667288668;
    msg.speed_units = 228U;
    msg.duration = 41278U;
    msg.radius = 0.25326213511181905;
    msg.flags = 168U;
    msg.custom.assign("MNHKPIQZIUXFQVUGDFKTEXAGKBXLNMUNRSMNYWGCZKLLFGCLZNGVITTQRBFNQSFKYSDGXZOWBOJHRLDPUIWVYPLOBPISCXCFPHFOYKBLSKMWVUIWVGZCHXNDLPPAWJITYJVEGHYJSZTJRETHWYMHVEPVQEMMXYEAYACPCKYEACZUONLJXSDQSJAOLZDOHEFBQJSJMOUDWENUQQG");

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
    msg.setTimeStamp(0.322378552643364);
    msg.setSource(47289U);
    msg.setSourceEntity(222U);
    msg.setDestination(33144U);
    msg.setDestinationEntity(125U);
    msg.timeout = 20874U;
    msg.lat = 0.4988008130841898;
    msg.lon = 0.022424850626564408;
    msg.z = 0.9825985001175538;
    msg.z_units = 201U;
    msg.speed = 0.10548053362687126;
    msg.speed_units = 151U;
    msg.duration = 19178U;
    msg.radius = 0.892937580264224;
    msg.flags = 115U;
    msg.custom.assign("LAABSNELSQCEOAEXGSPUOKGXGYXHNZONPCRJWBZTNDEHYPGDMHECLOWHFNBHNLAVXUKMBJRVJQXMJCLXCYWWHGVFPRYKHVECUANSYOLFZUTKQQAZJBPZKQCSVGABJUCPCF");

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
    msg.setTimeStamp(0.14884920031206295);
    msg.setSource(12915U);
    msg.setSourceEntity(248U);
    msg.setDestination(51243U);
    msg.setDestinationEntity(99U);
    msg.timeout = 17059U;
    msg.lat = 0.3528502395154137;
    msg.lon = 0.9279409949738632;
    msg.z = 0.33534453275067977;
    msg.z_units = 61U;
    msg.speed = 0.9634815292625218;
    msg.speed_units = 160U;
    msg.duration = 43224U;
    msg.radius = 0.979673644656851;
    msg.flags = 62U;
    msg.custom.assign("OEYGJLHABRRGYQOGWEDGMZEZXYALZZMWIALIFSVIKCMWQRWCPBXLVCBMJUAYNJVENYEXWVFKBDYVQYFRMAENQDFARPSGHUJKSLHPNJOWWYUBXUFZHUSIZMTTLMGCCOHPTWQXJRQEZPCWKWJRDNKSVZVDGBTO");

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
    msg.setTimeStamp(0.1413278133056246);
    msg.setSource(26569U);
    msg.setSourceEntity(125U);
    msg.setDestination(7127U);
    msg.setDestinationEntity(129U);
    msg.custom.assign("KNYOBLALTPWHPO");

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
    msg.setTimeStamp(0.8150693859303328);
    msg.setSource(20558U);
    msg.setSourceEntity(242U);
    msg.setDestination(8021U);
    msg.setDestinationEntity(58U);
    msg.custom.assign("AAEWPAYZVEZCCPXXAJYFMOCPNQIPGDCJSJJUSBOWGPSQTUMPOZWENNZQCOYRIHFFMQHOLSIJSGWKBLMGKPHOEDFVUSYBTG");

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
    msg.setTimeStamp(0.30135334182891804);
    msg.setSource(3004U);
    msg.setSourceEntity(201U);
    msg.setDestination(3351U);
    msg.setDestinationEntity(43U);
    msg.custom.assign("LKMNIMIDBFBZREMGMSTBXDPTGTWYQXCEIHYQOLOPCFWACVLCEQTSTGVMHHICAIZWPMUNPRDEWXYOPCTZIJPFBRDSXABNYUYURHPMHKFVKJNCSXNKQWGATEPBOHEMSH");

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
    msg.setTimeStamp(0.5412165246912823);
    msg.setSource(55449U);
    msg.setSourceEntity(66U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(89U);
    msg.timeout = 61105U;
    msg.lat = 0.9183795818186937;
    msg.lon = 0.9667188183175236;
    msg.z = 0.9768987267123995;
    msg.z_units = 93U;
    msg.duration = 31267U;
    msg.speed = 0.6088345650745279;
    msg.speed_units = 88U;
    msg.type = 47U;
    msg.radius = 0.7712258298559944;
    msg.length = 0.038248239145870944;
    msg.bearing = 0.08147567322469407;
    msg.direction = 52U;
    msg.custom.assign("ZCTVOQMHGAFOUVQWJKCBJXSZRDXLYUWUMDLLGSJFBVQLGILMPLMWSGRSNNDAMGGAJEYCIALPCYBHBNYOHNOAJVPOLPIDHKYSLWACZKQEJGWEZSFEWEHWJOVJXCQZDUGKXUFXOIGFUNNPOODCUMSTRTDHEBXHZEXFRCMPHSKWCQBVNXQHJXRPCTQTAPNNTATZIPYRQWEYEBUTHKIMRFMDJGDUDIFUVZBRRTXOYVYL");

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
    msg.setTimeStamp(0.3065440917791562);
    msg.setSource(9773U);
    msg.setSourceEntity(96U);
    msg.setDestination(29208U);
    msg.setDestinationEntity(192U);
    msg.timeout = 50060U;
    msg.lat = 0.3226462450818286;
    msg.lon = 0.2895662923079182;
    msg.z = 0.11022846156895949;
    msg.z_units = 66U;
    msg.duration = 13226U;
    msg.speed = 0.2596876432118643;
    msg.speed_units = 49U;
    msg.type = 124U;
    msg.radius = 0.7788024940463145;
    msg.length = 0.44874550299680505;
    msg.bearing = 0.06964194778682908;
    msg.direction = 225U;
    msg.custom.assign("WEOGZDHJGPRJIL");

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
    msg.setTimeStamp(0.9426650636251169);
    msg.setSource(15706U);
    msg.setSourceEntity(2U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(152U);
    msg.timeout = 51776U;
    msg.lat = 0.30858710615691987;
    msg.lon = 0.15530843509749814;
    msg.z = 0.12557432830617554;
    msg.z_units = 164U;
    msg.duration = 33249U;
    msg.speed = 0.21612822561025546;
    msg.speed_units = 0U;
    msg.type = 137U;
    msg.radius = 0.862419429439291;
    msg.length = 0.04658160663257549;
    msg.bearing = 0.5934757196843278;
    msg.direction = 202U;
    msg.custom.assign("SPIPCQWBFKCPGEOYUGOHOTLKOVBITQUISTDTFVLVQN");

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
    msg.setTimeStamp(0.6065747439377793);
    msg.setSource(46275U);
    msg.setSourceEntity(246U);
    msg.setDestination(54803U);
    msg.setDestinationEntity(229U);
    msg.duration = 28370U;
    msg.custom.assign("GKBHTWNRDNIWAMIMDPNPVRFXEKLAMRFBWLUTLCURKNHIUZQCLKAZTOVWQVZVEONORHUOSBOFFYHDQFDBVODVCUGRPHEMAAGCPMOWFMPXYXCQVPBSIYXJSHVCGKBRWSYZWEIJJAMJYNHXGUDXHEGOERCHDYUTETYJUBPGOTDCNIXLNLVTLDQQSAPZJYTTAQBFMWMAJERZBCBULJKXFGEEDLQZXGYONIKVSIQFGSTQLPZKRWWSKUZASXP");

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
    msg.setTimeStamp(0.3481722965573486);
    msg.setSource(3997U);
    msg.setSourceEntity(167U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(121U);
    msg.duration = 23600U;
    msg.custom.assign("TUNJPMBQJGAUKZJNEYOXGOYRNAKUEBQZQGGBOJWPCDGLYHHSWZRGRBXKKCMETAXQRHZIYJMAROVUBUXNWYXOZEEAXHY");

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
    msg.setTimeStamp(0.30082303576081837);
    msg.setSource(33996U);
    msg.setSourceEntity(26U);
    msg.setDestination(57771U);
    msg.setDestinationEntity(74U);
    msg.duration = 27854U;
    msg.custom.assign("AFRSPGZTEDTUBFLAFKNDMHVGJVLRBIGFQNQKKDVMGWJKATHBURHXCWXVAVPWCFNPCEPLKHSHLYRKBISEFHGLPDOUDWHWPZTCBYGSHMCBEOAAKUESUWUXUQMDXPSJALLTAMRGNJLBRCLVODIMZFKCXNONDVVTQQUQZGYSSGYT");

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
    msg.setTimeStamp(0.07819804070212355);
    msg.setSource(53395U);
    msg.setSourceEntity(70U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(196U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9230969249325675;
    msg.control.set(tmp_msg_0);
    msg.duration = 3216U;
    msg.custom.assign("XAYPFWLUKUIHTRMBCJQRLBCUJCPAQADQYWUGIBWIRDNPHVKWWXHCXVXDGAJNHBZNXFSUIFTZLFLTHXJYFIWAAYBZWOASGSQGLECPYOQTRDXJESJPZHXWNUTUMDSQOZARMPBVRMZRSGMYYIANCCGDIHKUQKIZTFFMNEKHDMULTJQJENTLKXNRVHELLMOFWGGSBAMMOKQOHBZ");

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
    msg.setTimeStamp(0.30215372272584773);
    msg.setSource(26662U);
    msg.setSourceEntity(208U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(158U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.9991527397680645;
    tmp_msg_0.start_lon = 0.8635567010708314;
    tmp_msg_0.start_z = 0.7601823085903429;
    tmp_msg_0.start_z_units = 86U;
    tmp_msg_0.end_lat = 0.2688072603452437;
    tmp_msg_0.end_lon = 0.9361022657487931;
    tmp_msg_0.end_z = 0.10236579049373373;
    tmp_msg_0.end_z_units = 179U;
    tmp_msg_0.speed = 0.36677798432451403;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.lradius = 0.2027907396122819;
    tmp_msg_0.flags = 71U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52292U;
    msg.custom.assign("JKHRVEIWEXTGUQCDLBWLXIZCPLURBHXQMRTFAGPEPGAKUGTAHWJDIWJQFFZTJVQAJLIACEQBTFAEQMUJFZNEWGKGHMYISPOADHGSYLPHNTBEFETPYMGJYKKVDPIORSUNELVAQCCWKIXSOXPBNKZIQWYMCZLHRPNNZVVCVSLZXKDSYMIVEZWXTFPJCVHIQJCNBDOXKKDOLW");

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
    msg.setTimeStamp(0.3566497501317717);
    msg.setSource(51923U);
    msg.setSourceEntity(193U);
    msg.setDestination(64472U);
    msg.setDestinationEntity(176U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5611737421674974;
    tmp_msg_0.z_units = 123U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62076U;
    msg.custom.assign("LVKPCCHOGKUSMCPUMNHXLLIGMRRIAIMTLTZYPKJFEWBYDBRZSCBYZJKYMDXPZQKCENFFYBCOWIIGSQUHATZGDRWZJPCJVEKUANQLJRPVUPHDTABGHWTSAANRGZTYLBOTJZIDULSGWIOSMTWNJAYWOHGHZWTUXNIFYSBBIMDERXHKSVGJDLOQRDNCFAVWVFOVOPNYQFXQKEOEDPPQNUUCUMNEKZVEVXBXMQOL");

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
    msg.setTimeStamp(0.19148927645788438);
    msg.setSource(5024U);
    msg.setSourceEntity(131U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(89U);
    msg.timeout = 37931U;
    msg.lat = 0.4138717605315758;
    msg.lon = 0.6853492729444808;
    msg.z = 0.6848164026532664;
    msg.z_units = 83U;
    msg.speed = 0.32054361077916027;
    msg.speed_units = 61U;
    msg.bearing = 0.06702466403161866;
    msg.cross_angle = 0.8009978143024548;
    msg.width = 0.28691142040823225;
    msg.length = 0.14287133846410993;
    msg.hstep = 0.9585612780456798;
    msg.coff = 64U;
    msg.alternation = 9U;
    msg.flags = 6U;
    msg.custom.assign("EHUOBHLAMGUZVXREOBYFXCUNSLSONNTDVAJHRQSXIVJMDNAX");

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
    msg.setTimeStamp(0.7384607830537336);
    msg.setSource(52359U);
    msg.setSourceEntity(210U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(24U);
    msg.timeout = 39011U;
    msg.lat = 0.29045564719276085;
    msg.lon = 0.9246185441631706;
    msg.z = 0.21681978008247627;
    msg.z_units = 73U;
    msg.speed = 0.6877543138230384;
    msg.speed_units = 216U;
    msg.bearing = 0.7633261825688815;
    msg.cross_angle = 0.32145740278037727;
    msg.width = 0.8950060636719168;
    msg.length = 0.7253278960596201;
    msg.hstep = 0.5005079824547385;
    msg.coff = 19U;
    msg.alternation = 160U;
    msg.flags = 173U;
    msg.custom.assign("KXJVXPTWYCUVSKLYUTCCPBKSMIPGQASWHIFQEDZFMYZUVYRXPGKRHYQJTEOSGVTFOVHMKFZESLHWILBLRWJDPDEOQRHHVMSGIUNJMLNJMZUFAFTDXEONCXRCVLDTGPUDBH");

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
    msg.setTimeStamp(0.43967992612041107);
    msg.setSource(4818U);
    msg.setSourceEntity(66U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(105U);
    msg.timeout = 23110U;
    msg.lat = 0.7190954186197471;
    msg.lon = 0.33383186147431476;
    msg.z = 0.6070884227655318;
    msg.z_units = 238U;
    msg.speed = 0.19886487016447318;
    msg.speed_units = 168U;
    msg.bearing = 0.4763718974388227;
    msg.cross_angle = 0.278763948433131;
    msg.width = 0.15514922040008894;
    msg.length = 0.6600244971917891;
    msg.hstep = 0.14274845215034804;
    msg.coff = 93U;
    msg.alternation = 190U;
    msg.flags = 155U;
    msg.custom.assign("QMEBGTYQYDBNDAHBURODMUJHXLOHVNJZ");

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
    msg.setTimeStamp(0.679022844574123);
    msg.setSource(35774U);
    msg.setSourceEntity(223U);
    msg.setDestination(22586U);
    msg.setDestinationEntity(1U);
    msg.timeout = 32310U;
    msg.lat = 0.28873384505564337;
    msg.lon = 0.45351564315403914;
    msg.z = 0.1101988273869201;
    msg.z_units = 172U;
    msg.speed = 0.16142543304221635;
    msg.speed_units = 253U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8803565478567646;
    tmp_msg_0.y = 0.5549820961356928;
    tmp_msg_0.z = 0.6081411163438004;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GQKIZEBZVTQEXSCAZACDNJSRKNPQLNHWTUK");

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
    msg.setTimeStamp(0.35153463289145803);
    msg.setSource(8939U);
    msg.setSourceEntity(40U);
    msg.setDestination(39405U);
    msg.setDestinationEntity(245U);
    msg.timeout = 42176U;
    msg.lat = 0.5246722334594578;
    msg.lon = 0.592498213141316;
    msg.z = 0.7384153568467253;
    msg.z_units = 102U;
    msg.speed = 0.6731630458151501;
    msg.speed_units = 89U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.09965339994351152;
    tmp_msg_0.y = 0.04652866355107277;
    tmp_msg_0.z = 0.02642485515977111;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MNXRMJOSQZFBVUZDKIMKNZFJMIESTIQUERLWZMASDZTCCZQOIAYUXOXHIFYWG");

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
    msg.setTimeStamp(0.24088620963315044);
    msg.setSource(27456U);
    msg.setSourceEntity(63U);
    msg.setDestination(6499U);
    msg.setDestinationEntity(134U);
    msg.timeout = 53146U;
    msg.lat = 0.5264846532746748;
    msg.lon = 0.4368173924988442;
    msg.z = 0.9744399582294164;
    msg.z_units = 220U;
    msg.speed = 0.2381340056127489;
    msg.speed_units = 97U;
    msg.custom.assign("EOAHHGYWMZCWZNFGHNSVEMXFPNDCIEOHXCKQFSYYSEOGTYRRMLTAZDVEVEXZRHSUJAUWUYVYXHNUZINOSOJWGQMOPGXWRTINGBBRQPRTOAMIKPHBVJSURCPJSTFLJKYQNQLTIDGQKWKGLXAODLJFDJLHCUVCUXLVMLFAMTBWOFPKAHKEMTVL");

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
    msg.setTimeStamp(0.6038434704923349);
    msg.setSource(23862U);
    msg.setSourceEntity(163U);
    msg.setDestination(8507U);
    msg.setDestinationEntity(212U);
    msg.x = 0.34316593657087735;
    msg.y = 0.29521618455374565;
    msg.z = 0.18191488692924662;

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
    msg.setTimeStamp(0.263637834579422);
    msg.setSource(41322U);
    msg.setSourceEntity(106U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(209U);
    msg.x = 0.7633232729765912;
    msg.y = 0.8986542234031661;
    msg.z = 0.5870393258775259;

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
    msg.setTimeStamp(0.15861589536331366);
    msg.setSource(35751U);
    msg.setSourceEntity(28U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(173U);
    msg.x = 0.9277716777480255;
    msg.y = 0.9556106940665328;
    msg.z = 0.2961712436915488;

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
    msg.setTimeStamp(0.6989958692647461);
    msg.setSource(9768U);
    msg.setSourceEntity(3U);
    msg.setDestination(40478U);
    msg.setDestinationEntity(173U);
    msg.timeout = 57636U;
    msg.lat = 0.20238909195989385;
    msg.lon = 0.15695851565441754;
    msg.z = 0.7744305492204117;
    msg.z_units = 38U;
    msg.amplitude = 0.28042655666935135;
    msg.pitch = 0.905225670551707;
    msg.speed = 0.960143376770426;
    msg.speed_units = 14U;
    msg.custom.assign("NTYUUKPFEESEAPNNYKTRQTLTORUJLNXKZKAGZIZBVPLTIWTJDNAJHFCOHLYRMSIJRRLBLEFEAOMKYXRUPKVBDXIFBCWXIMGOOPMBARCYOGZEXEZEZQYCXXCH");

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
    msg.setTimeStamp(0.021858044485681627);
    msg.setSource(21571U);
    msg.setSourceEntity(163U);
    msg.setDestination(11563U);
    msg.setDestinationEntity(19U);
    msg.timeout = 31541U;
    msg.lat = 0.4391321011844679;
    msg.lon = 0.1850475665989203;
    msg.z = 0.5301197902151211;
    msg.z_units = 6U;
    msg.amplitude = 0.8311190713998552;
    msg.pitch = 0.6354941232420359;
    msg.speed = 0.5076751031415992;
    msg.speed_units = 29U;
    msg.custom.assign("DRSPPFXBPNGNDEGZIUSGTSEYCTTLVSOEQLNAF");

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
    msg.setTimeStamp(0.49171366494254976);
    msg.setSource(29184U);
    msg.setSourceEntity(47U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(64U);
    msg.timeout = 54010U;
    msg.lat = 0.1969345423655885;
    msg.lon = 0.5041399494645953;
    msg.z = 0.6982565918482263;
    msg.z_units = 184U;
    msg.amplitude = 0.5727997098732778;
    msg.pitch = 0.2133975056043712;
    msg.speed = 0.4686307835318463;
    msg.speed_units = 146U;
    msg.custom.assign("VJYMPJZFYXBJWXKPVURKQVGUODVGRRUETOKIDKPBSEHZJIHEBEPVMURQFWKKQWYZTXZARNCGMQXICSSQTAZRGOVDHGITDYBQDUORMVULIGPXNNLASHNYPICAOXTANLLFSTJJUZLHTZIYFCNWMSERQUNSLPWSBJFYLWBGLENAIWKDLSIXCHYMHGEFFSKDCMXVOAMCGBFHDRCEBNOZOAGUTLWMFYKHQERP");

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
    msg.setTimeStamp(0.46780949899378643);
    msg.setSource(43097U);
    msg.setSourceEntity(116U);
    msg.setDestination(16433U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.8361410487590332);
    msg.setSource(64486U);
    msg.setSourceEntity(125U);
    msg.setDestination(24208U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.33944830933082937);
    msg.setSource(39634U);
    msg.setSourceEntity(157U);
    msg.setDestination(13613U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.26276063832511787);
    msg.setSource(50087U);
    msg.setSourceEntity(95U);
    msg.setDestination(28162U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.3276951229413595;
    msg.lon = 0.019477331130744013;
    msg.z = 0.4011668301184109;
    msg.z_units = 79U;
    msg.radius = 0.17013636235308127;
    msg.duration = 59220U;
    msg.speed = 0.18224578051636875;
    msg.speed_units = 33U;
    msg.custom.assign("ORQUDGWKDMVYHNDBANZTSOFQPUEPTWDBUHQCJWFIHUPRQPLMYSQHKGZWSBONIRCSJFKMANCOHEKVSRXVMNOZZURGGXFBXZMITOSTGMUCWVOAXHTXYYSYYCIPBEYTZBERTGKCUHWJQMRSMJSXLBYFJEZKAMVENDEPILRAPBMLCWLAKLNXEGOJTKPRZYNADFCDLWFJXLHTVQOVBVUZYELFWZARGDKHIEFCQLNHIGIDCQ");

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
    msg.setTimeStamp(0.4436262204969249);
    msg.setSource(8615U);
    msg.setSourceEntity(203U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.811300964555422;
    msg.lon = 0.28587940864523;
    msg.z = 0.5867342466840697;
    msg.z_units = 164U;
    msg.radius = 0.27327019075602266;
    msg.duration = 14779U;
    msg.speed = 0.9630860936524411;
    msg.speed_units = 227U;
    msg.custom.assign("DLEAEEOHMSGVKTIMTNTNSMAVGDVEQKPYFJWBFHUWBJYPRQWTZMUNYQCJSRDFIDNKYRVCBLMUUQWUUEXBZVGVIVHWCWAYSMYJGDFTREHYGOTXCZZIFYKHZHOCTISONPILBYDDRKILCSPMXZN");

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
    msg.setTimeStamp(0.012436806737121775);
    msg.setSource(33018U);
    msg.setSourceEntity(80U);
    msg.setDestination(13401U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.4082204711386844;
    msg.lon = 0.7398051094415043;
    msg.z = 0.6328495543477888;
    msg.z_units = 176U;
    msg.radius = 0.955354671135969;
    msg.duration = 34261U;
    msg.speed = 0.9465774327996069;
    msg.speed_units = 217U;
    msg.custom.assign("ELVQYKVSEVATQZDGSFHVASNKFKWFHDGNWTYRUFJSBMXLXLNPYOFFETTANHQOPHGKREPYOKIMBQIWKBUMRVCSGSECXTLMZPOAIQKBUWOUCWGRYDWXPRCRUIOXPXEGAGAZTGAMIZRCMRJUYDAXSNZMDTIIDVICPQUVNOZUUMXCEBJQZHBNWFGJCHSEQLO");

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
    msg.setTimeStamp(0.292782984292836);
    msg.setSource(51718U);
    msg.setSourceEntity(187U);
    msg.setDestination(60025U);
    msg.setDestinationEntity(104U);
    msg.timeout = 5439U;
    msg.flags = 8U;
    msg.lat = 0.07892967879809765;
    msg.lon = 0.5922916330952934;
    msg.start_z = 0.31143734296043757;
    msg.start_z_units = 5U;
    msg.end_z = 0.458040938401271;
    msg.end_z_units = 149U;
    msg.radius = 0.6221134359217735;
    msg.speed = 0.008507119463400659;
    msg.speed_units = 187U;
    msg.custom.assign("VYVUQQITQJNDNLHCPLFSBMRWCSGOXDJSJPGLGZLTDKKUGCHPAQPYZTNHVXYWUAJHHFWWOEXSCMEZKOUNJYAFTWFIWZETEAAQGACLPISIVPRQBNFLWEBNFHBHVYVIXYHMYPKJMUQLNSZVBTOSVDHJONZAVZIRWJMDNFEIRLMUKTFAIWUGMMTOBLFKIBDKCXRGOWOORGEZAAHDEZUTUXQSCJYIKPB");

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
    msg.setTimeStamp(0.43537322337812556);
    msg.setSource(46560U);
    msg.setSourceEntity(15U);
    msg.setDestination(59630U);
    msg.setDestinationEntity(248U);
    msg.timeout = 49882U;
    msg.flags = 247U;
    msg.lat = 0.1528388814031535;
    msg.lon = 0.8430678032233608;
    msg.start_z = 0.39505563500894714;
    msg.start_z_units = 58U;
    msg.end_z = 0.8379514794357763;
    msg.end_z_units = 108U;
    msg.radius = 0.519174201058547;
    msg.speed = 0.6490319697110635;
    msg.speed_units = 154U;
    msg.custom.assign("VXXSDLIAIFJTUICANZJHIIZLQGEXQMQMMGHPEVZXTUJXNOVUJHTYWHSZOVFKNSFYZBMSGDCVCWGLSWTWDUUZLXBCTQYAWMYKAPVNEMWCFFRNEDESGWNLRBZZJXHYVRXJAHSOUOLZSDRYSEDVHRKDBKMLOYTBFACRHEBRAAIQQ");

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
    msg.setTimeStamp(0.2026040361547553);
    msg.setSource(19174U);
    msg.setSourceEntity(53U);
    msg.setDestination(36163U);
    msg.setDestinationEntity(113U);
    msg.timeout = 15857U;
    msg.flags = 128U;
    msg.lat = 0.5973754801993961;
    msg.lon = 0.8811959626050003;
    msg.start_z = 0.6925203171311911;
    msg.start_z_units = 87U;
    msg.end_z = 0.2023947175910391;
    msg.end_z_units = 149U;
    msg.radius = 0.40990221220918877;
    msg.speed = 0.07404878443883323;
    msg.speed_units = 139U;
    msg.custom.assign("UWJTYZTQONDPNAGWYZSLMFP");

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
    msg.setTimeStamp(0.8162483067648287);
    msg.setSource(8530U);
    msg.setSourceEntity(3U);
    msg.setDestination(62878U);
    msg.setDestinationEntity(9U);
    msg.timeout = 46159U;
    msg.lat = 0.14490241057539688;
    msg.lon = 0.21926674531179624;
    msg.z = 0.941611253355334;
    msg.z_units = 19U;
    msg.speed = 0.4452767400954657;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.06005128999979292;
    tmp_msg_0.y = 0.06865099952521891;
    tmp_msg_0.z = 0.8241429091608723;
    tmp_msg_0.t = 0.027258741619259674;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IHDMMEJTNHFFEKRIJUHBQOSGMZOQENESQBMDTXJDIUIGSJCNVTCFDDXCMOUMIKOWUSUBDTZWBSASLOWFPKCCWBIAQZEBYONQAUIJHPJEKGARZFBTAZCYUNVZXYGGIDIYXLBLLWBVYBPATPUVGOYTCKOFMDGGHSMCFLHXXGJZYLDQRVEDRPOVRHHWLENVKLRREGOSPNT");

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
    msg.setTimeStamp(0.057978716528535035);
    msg.setSource(36519U);
    msg.setSourceEntity(230U);
    msg.setDestination(38368U);
    msg.setDestinationEntity(161U);
    msg.timeout = 46080U;
    msg.lat = 0.48779683118833217;
    msg.lon = 0.5166490320153131;
    msg.z = 0.5089247836200541;
    msg.z_units = 191U;
    msg.speed = 0.06693306308664326;
    msg.speed_units = 214U;
    msg.custom.assign("XYFWZRNPXCUOCSUVXFRHOLLAXBTWGVQNAPHDTMBICDJRIISTPWMHMOAVJOEVOREWHCBDIUKBJUTFORZEQQNOGXBXLWLRMPSQLMENWCJCRNGSGQZIYMYZIYTLHIFFMDACCBKFHWBUVOIYEPUAZAOEWSDNMFAJLULKFEZMNPXRQSTJDHCDXTVEFYKIDHADOLIZEWQUVJZGJKZNKKGRBXBSQYNQUPVBGAVFJPZTJTCDNHGP");

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
    msg.setTimeStamp(0.9313053520975119);
    msg.setSource(33630U);
    msg.setSourceEntity(104U);
    msg.setDestination(23752U);
    msg.setDestinationEntity(130U);
    msg.timeout = 18509U;
    msg.lat = 0.12976623770275952;
    msg.lon = 0.7224241148969908;
    msg.z = 0.9026176788396616;
    msg.z_units = 112U;
    msg.speed = 0.3939363804527214;
    msg.speed_units = 125U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3064039771301823;
    tmp_msg_0.y = 0.3457005818675133;
    tmp_msg_0.z = 0.5702192120021353;
    tmp_msg_0.t = 0.3192077199381529;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IEBEFFCYJLZTDYQNWGVXFGKKXDMDWOPUBQATRPXOOGZJWNOQZEXAGMZKYFCPFKLFDKIUIUJIZHUPJWZPNGJUQHQBWMLLAHYYCVGTGORHCQZGABJCCVMOANOBSIDJQBNMXPPYAESTRSIRYPCMMPNBJPMAQLTLVJASDMFZUXAHXQCKSBHLHKEFDXRAEVBUUDNVJTRSS");

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
    msg.setTimeStamp(0.5626197927645502);
    msg.setSource(11444U);
    msg.setSourceEntity(111U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(103U);
    msg.x = 0.8379387852109376;
    msg.y = 0.10247612749091317;
    msg.z = 0.23779819712235628;
    msg.t = 0.4880605350126984;

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
    msg.setTimeStamp(0.9207507394083805);
    msg.setSource(783U);
    msg.setSourceEntity(137U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(137U);
    msg.x = 0.1095199346061172;
    msg.y = 0.989206311045411;
    msg.z = 0.921610126338851;
    msg.t = 0.4912352012217658;

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
    msg.setTimeStamp(0.6450490101324323);
    msg.setSource(1979U);
    msg.setSourceEntity(34U);
    msg.setDestination(26946U);
    msg.setDestinationEntity(124U);
    msg.x = 0.6804230537148152;
    msg.y = 0.07620083977979408;
    msg.z = 0.08909982086382695;
    msg.t = 0.6824620988299674;

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
    msg.setTimeStamp(0.5492305763197429);
    msg.setSource(47320U);
    msg.setSourceEntity(144U);
    msg.setDestination(58545U);
    msg.setDestinationEntity(86U);
    msg.timeout = 12358U;
    msg.name.assign("MORJWOUIEZDXIDMWMNIPUXRUJRTBCRFINXNGKZEBKHAUSVOMFAHHAZCHWMHZJVBEKJVRUSNMLYFIULTPDDPXJOYDPHZBGNKHEODQFDUFSGFBWLIKCTNQFEPNGZLOAYRCTIWBBTXGCVZLFKBMCKGCQJETCSRQVCQDVAVASYDSWPYUVDONFAGUJM");
    msg.custom.assign("TXAAJMLZBYMSZIMRJYTFJHBCAZEBVHYFNNDQLLPQPIABTMQRDUQVCJIZNTKKBJARQMZDUQAVOFOFFICFILEPKKSAEXKTNARTFKLGDYSWNXOGCEGLQ");

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
    msg.setTimeStamp(0.8351046630565819);
    msg.setSource(23868U);
    msg.setSourceEntity(242U);
    msg.setDestination(20261U);
    msg.setDestinationEntity(225U);
    msg.timeout = 52726U;
    msg.name.assign("ELOALKXXMHNTIJFCSPDQXYVESKJAZOIURGGUUKUWQWKFOWNIZZEBADUHWMMQUHGTBWZOIJVAPTWJEKPCSCYDIGNTFN");
    msg.custom.assign("QMJUCAKDINROGJISHICUKHBOWZKLQLQRCULIAPZGAKTLNDJPCMDZDPRHZNETPWJZIHLVMEXWIZEFWOMNOSSOGGEUDGRJTVJKIGJMBMAEAUCWAYTMXERYQFTLBXYDAVPAPGUJBLTVYPDSEHZHOXMYOWGQVSEXJWGFQLGWVFTKSBXMAVKZBPOTHAIIURCNVZQNFHKHSYTBVCYMWNLFJCFDIKYNEKUROCUNQSYRDXQPOHSBXFXXBBCZF");

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
    msg.setTimeStamp(0.13479199348074467);
    msg.setSource(5095U);
    msg.setSourceEntity(38U);
    msg.setDestination(48740U);
    msg.setDestinationEntity(42U);
    msg.timeout = 35704U;
    msg.name.assign("ZCGAVZMRFGRFITQWEFJYYRTPXITCFIKMJHJTPPQJWGDOEKRGVJPDWXAFRWVSPNXUZDPNTSDORQQRFGBMWBBSDJEQUZCEGINXJGAYYNZEZYYGZTOTYCASFBIVOOWVVTKSXHCBISYX");
    msg.custom.assign("VVZDNGTODAKXFCONHNWWFFHNIWSCTIWCJOIKTUDLXKASPDMCAAERZUOMEIXTMPNYFAMNYHEGYIQNRMEMYLKBPGARXIYQFTVFJKXHHTQKXCUWGTQRBAMNIMEQDVVHYSQJPZJFMGHVEFDJLJILAOSEZCBBBHWYTOVKGRZXASZXPGZLBSBPBELOBACWQUGPQSVNLSGUPCJUREPQRINCBJWCFVRLXYE");

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
    msg.setTimeStamp(0.30651046112855873);
    msg.setSource(21544U);
    msg.setSourceEntity(64U);
    msg.setDestination(1813U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.2605954242628795;
    msg.lon = 0.3430806327051097;
    msg.z = 0.03431550428976404;
    msg.z_units = 105U;
    msg.speed = 0.10698283990069779;
    msg.speed_units = 232U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25279U;
    tmp_msg_0.off_x = 0.28264509813883876;
    tmp_msg_0.off_y = 0.3010675295053503;
    tmp_msg_0.off_z = 0.15019262006991907;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.12638248768703952;
    msg.custom.assign("OAUVZYKJWKDHEKYMODBEALHKCPXEOZVHDCKYXTPHCRICNFIFTKJFVJLLTNDOJDEYAHUEMWQBNZWUGVWGPCDRRDNALUESQBRJTOACRWJIGUZYNMJONZQSXCJWQKTQVQOFXYIVSXIMQSLEPGHVBNAHWVTKFSLPLPMIBUNAZPXZPVSEAERCJMBGEGHMQFYTBFHWFLTRBOLGCIUPTMMSGGWUFUDLWHKYIOYVDIZIYOMBDZ");

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
    msg.setTimeStamp(0.4583169756247941);
    msg.setSource(48585U);
    msg.setSourceEntity(231U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.9769028312372627;
    msg.lon = 0.9683577178287449;
    msg.z = 0.2615581486220383;
    msg.z_units = 77U;
    msg.speed = 0.30253237984116266;
    msg.speed_units = 229U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.03521729925476624;
    tmp_msg_0.y = 0.49733728301353497;
    tmp_msg_0.z = 0.46200207141312877;
    tmp_msg_0.t = 0.08560112547237841;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.36390369633918185;
    msg.custom.assign("WSFINDKCWVOSCVJAJVWUUNALVRVYEGYWETNRJOXGGAAZUONDPPIIQJTQQMBMTUGTLIIHPLHQYLTFXBSVUJWQNAHWXGNZFMCERDEOAVHZFPTRXLQYPQCFEXPMKJLQCSUAHBFTYEUDNBGTMXSVORBTBKCDSEFZKLYOMLPYY");

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
    msg.setTimeStamp(0.5190952735196739);
    msg.setSource(22217U);
    msg.setSourceEntity(219U);
    msg.setDestination(18233U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.42308812602175017;
    msg.lon = 0.9373216256053583;
    msg.z = 0.3949089321537884;
    msg.z_units = 86U;
    msg.speed = 0.8014536382701437;
    msg.speed_units = 9U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56295U;
    tmp_msg_0.off_x = 0.0008614683068461915;
    tmp_msg_0.off_y = 0.8360105070610477;
    tmp_msg_0.off_z = 0.38503899941224673;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8815127464387961;
    msg.custom.assign("AZWTEKMCWUTYALYIQNPWGBFTZKJHXJGSOPXHJQXBGTBRRWCOOKSKDJEDBIXCQSABRGATXELZJOIXMTWTDSLISHXVMESYYTJBARXZHVDDKSQFAKEDLQJPVGMCQJRUZARDMBVUTQQPGZXUHIIPCDOPPELNHVWUEUOYOHCLGNMNVIGCUOPJWLVWDFFXHKNOEPUQGSCVTLKCPFFRIYYBASRSNJKWDZUMWACYKNELNFQRVFHFZFLANGR");

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
    msg.setTimeStamp(0.9201509633479952);
    msg.setSource(23805U);
    msg.setSourceEntity(62U);
    msg.setDestination(2190U);
    msg.setDestinationEntity(130U);
    msg.vid = 32664U;
    msg.off_x = 0.7197049807240229;
    msg.off_y = 0.7520189548569489;
    msg.off_z = 0.8194170937710914;

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
    msg.setTimeStamp(0.5244267901663731);
    msg.setSource(48934U);
    msg.setSourceEntity(42U);
    msg.setDestination(46748U);
    msg.setDestinationEntity(39U);
    msg.vid = 28454U;
    msg.off_x = 0.9492995346536957;
    msg.off_y = 0.7007785139633864;
    msg.off_z = 0.7318771980057509;

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
    msg.setTimeStamp(0.830366666795324);
    msg.setSource(56178U);
    msg.setSourceEntity(15U);
    msg.setDestination(27810U);
    msg.setDestinationEntity(82U);
    msg.vid = 2791U;
    msg.off_x = 0.26296298793372086;
    msg.off_y = 0.37230398645010276;
    msg.off_z = 0.7957191949045119;

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
    msg.setTimeStamp(0.10066683286309841);
    msg.setSource(27219U);
    msg.setSourceEntity(163U);
    msg.setDestination(42765U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.20898438869864933);
    msg.setSource(12116U);
    msg.setSourceEntity(5U);
    msg.setDestination(30097U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.7269477182811401);
    msg.setSource(31158U);
    msg.setSourceEntity(68U);
    msg.setDestination(35435U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.17084054903522583);
    msg.setSource(23938U);
    msg.setSourceEntity(23U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(81U);
    msg.mid = 38646U;

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
    msg.setTimeStamp(0.825084614164471);
    msg.setSource(53875U);
    msg.setSourceEntity(186U);
    msg.setDestination(13806U);
    msg.setDestinationEntity(63U);
    msg.mid = 7067U;

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
    msg.setTimeStamp(0.7717134238213249);
    msg.setSource(51314U);
    msg.setSourceEntity(107U);
    msg.setDestination(7995U);
    msg.setDestinationEntity(52U);
    msg.mid = 46232U;

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
    msg.setTimeStamp(0.49286492238767543);
    msg.setSource(11090U);
    msg.setSourceEntity(187U);
    msg.setDestination(44339U);
    msg.setDestinationEntity(5U);
    msg.state = 230U;
    msg.eta = 33448U;
    msg.info.assign("JWWQWEGDCTBMITLCEYMUJCUGFQWRVKRNFT");

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
    msg.setTimeStamp(0.8915471377216456);
    msg.setSource(14602U);
    msg.setSourceEntity(72U);
    msg.setDestination(30513U);
    msg.setDestinationEntity(112U);
    msg.state = 200U;
    msg.eta = 43874U;
    msg.info.assign("KDEWEQGSMEZBDAGRSKXAHPOTCXVIJOEYWSGUPVNUMZQDLYMZSEPARPDCSXIBIWQSWGQTGRYFZOZDFLKZHOVYAZLELHWCGMFUDFUXRFKIVUSUTXNRLIJBBVPOQCGQSVOVHRALXZTJIWTINDHHGJBXLFDOHFJTPYEANIRAUNFEKGDWABO");

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
    msg.setTimeStamp(0.10141746305197474);
    msg.setSource(18840U);
    msg.setSourceEntity(37U);
    msg.setDestination(22793U);
    msg.setDestinationEntity(135U);
    msg.state = 97U;
    msg.eta = 42739U;
    msg.info.assign("HWBZUYHMCLVZCPSWGGDLRUPCPBFJLXHNITFQRIRAYWEEZGXKODDSAJSZMRHLXXFBONVPYBBEKLHQKCMAJFYQDZQAJUTWUJVRNBOTVAHISDVVUTBVLFMLUIZCOJCJENEQKZNGMPYALQGOMSWNYFCPQAOBYEHNNULGKKRCPBGIMVYKWIXWWPIRSHXKJFTVGOLQMXHTEMSZQOPEYCDTFOIFORSAUMNSZRKRKGYCAHXS");

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
    msg.setTimeStamp(0.18176673784404085);
    msg.setSource(30169U);
    msg.setSourceEntity(157U);
    msg.setDestination(26204U);
    msg.setDestinationEntity(101U);
    msg.system = 46261U;
    msg.duration = 16384U;
    msg.speed = 0.09556247193677281;
    msg.speed_units = 146U;
    msg.x = 0.24363768852591028;
    msg.y = 0.5677943430043528;
    msg.z = 0.42627725510048653;
    msg.z_units = 250U;

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
    msg.setTimeStamp(0.40875052577645665);
    msg.setSource(20749U);
    msg.setSourceEntity(30U);
    msg.setDestination(14039U);
    msg.setDestinationEntity(76U);
    msg.system = 51689U;
    msg.duration = 55143U;
    msg.speed = 0.5428990162836385;
    msg.speed_units = 11U;
    msg.x = 0.2615101480655221;
    msg.y = 0.885711877532043;
    msg.z = 0.12901257618405226;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.7197582289923964);
    msg.setSource(44778U);
    msg.setSourceEntity(159U);
    msg.setDestination(62839U);
    msg.setDestinationEntity(48U);
    msg.system = 48084U;
    msg.duration = 56591U;
    msg.speed = 0.9992055538012156;
    msg.speed_units = 97U;
    msg.x = 0.21695824930497065;
    msg.y = 0.28676660789966857;
    msg.z = 0.22817743537214874;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.5997740299201222);
    msg.setSource(1486U);
    msg.setSourceEntity(229U);
    msg.setDestination(38877U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.2742861996933733;
    msg.lon = 0.7562846975950894;
    msg.speed = 0.6383833280787969;
    msg.speed_units = 80U;
    msg.duration = 14900U;
    msg.sys_a = 56510U;
    msg.sys_b = 13439U;
    msg.move_threshold = 0.0493570118126041;

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
    msg.setTimeStamp(0.5532073427268324);
    msg.setSource(15309U);
    msg.setSourceEntity(165U);
    msg.setDestination(9569U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.5336537053268051;
    msg.lon = 0.7664472443989643;
    msg.speed = 0.3592508467410924;
    msg.speed_units = 236U;
    msg.duration = 64046U;
    msg.sys_a = 18257U;
    msg.sys_b = 3166U;
    msg.move_threshold = 0.5537731951669732;

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
    msg.setTimeStamp(0.4029774927167611);
    msg.setSource(51665U);
    msg.setSourceEntity(19U);
    msg.setDestination(41496U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.23140486658148407;
    msg.lon = 0.04543668861468031;
    msg.speed = 0.7757810182767206;
    msg.speed_units = 175U;
    msg.duration = 10447U;
    msg.sys_a = 45747U;
    msg.sys_b = 13997U;
    msg.move_threshold = 0.47927662434566365;

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
    msg.setTimeStamp(0.5893477375673954);
    msg.setSource(31413U);
    msg.setSourceEntity(161U);
    msg.setDestination(59774U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.8609218672479448;
    msg.lon = 0.7636809451154299;
    msg.z = 0.07518919109897637;
    msg.z_units = 79U;
    msg.speed = 0.10124853763458475;
    msg.speed_units = 44U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.45821993357345914;
    tmp_msg_0.lon = 0.2544035318449007;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KTZJJPAKZKAPGCJFYKPYIDWGWWQRXLXZCXAVMIOFEFRWBDABWYQDDRCTRE");

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
    msg.setTimeStamp(0.11420665055266732);
    msg.setSource(33110U);
    msg.setSourceEntity(176U);
    msg.setDestination(14717U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.20106845271976015;
    msg.lon = 0.3578828616126013;
    msg.z = 0.5950342323257473;
    msg.z_units = 117U;
    msg.speed = 0.12089926780560412;
    msg.speed_units = 235U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9782876063895718;
    tmp_msg_0.lon = 0.12467207556488902;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WARPQMGKCWIZJXXRZZUCWDOVUFDEPQHMTFXPJNEKQLKIIVYMNUUQHAZCAQLDXGTWRXNGZNCWVEMFLPBOBIISXOGFVLGOSKFWJYJHVVEVKEJGSHFSNY");

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
    msg.setTimeStamp(0.4530254698779309);
    msg.setSource(51950U);
    msg.setSourceEntity(172U);
    msg.setDestination(27151U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.3356393735518969;
    msg.lon = 0.8179666417200904;
    msg.z = 0.8718891900995984;
    msg.z_units = 98U;
    msg.speed = 0.48413761006689926;
    msg.speed_units = 29U;
    msg.custom.assign("XWYXIBGBFGTKMTHZQNARFDPXJQMMMRIYEPRAZCWTTOSMIPYO");

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
    msg.setTimeStamp(0.39403928311965575);
    msg.setSource(4792U);
    msg.setSourceEntity(134U);
    msg.setDestination(29175U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.2972912790908313;
    msg.lon = 0.17811239059797823;

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
    msg.setTimeStamp(0.636660836224338);
    msg.setSource(21149U);
    msg.setSourceEntity(199U);
    msg.setDestination(52968U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.6060315579127734;
    msg.lon = 0.203203513091341;

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
    msg.setTimeStamp(0.3812716038994288);
    msg.setSource(6146U);
    msg.setSourceEntity(134U);
    msg.setDestination(7016U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.3038548457919227;
    msg.lon = 0.6392794191064162;

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
    msg.setTimeStamp(0.012881263318197278);
    msg.setSource(17820U);
    msg.setSourceEntity(131U);
    msg.setDestination(41695U);
    msg.setDestinationEntity(8U);
    msg.timeout = 24402U;
    msg.lat = 0.8668834744417486;
    msg.lon = 0.09415584693405099;
    msg.z = 0.3055454258283885;
    msg.z_units = 139U;
    msg.pitch = 0.9785501837404323;
    msg.amplitude = 0.972544020218576;
    msg.duration = 2709U;
    msg.speed = 0.8740266619257926;
    msg.speed_units = 136U;
    msg.radius = 0.49762206219419525;
    msg.direction = 204U;
    msg.custom.assign("RGICXHOMXPNTYAYOHCYYAMTPJRNPDQHDZALSJBDGMICPJPWWHSLMORQTAEJJA");

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
    msg.setTimeStamp(0.25157399395444224);
    msg.setSource(8046U);
    msg.setSourceEntity(11U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(229U);
    msg.timeout = 46701U;
    msg.lat = 0.6865061200815491;
    msg.lon = 0.5132016335017773;
    msg.z = 0.03766483933864928;
    msg.z_units = 46U;
    msg.pitch = 0.4766574229924204;
    msg.amplitude = 0.6143293941078558;
    msg.duration = 50037U;
    msg.speed = 0.09931146708900429;
    msg.speed_units = 48U;
    msg.radius = 0.7900205715402646;
    msg.direction = 103U;
    msg.custom.assign("APEGYTAUVZGZELVLANMIVDZKDZFDSQXTJSLINGLPUCHVMLAHTNXKABOSYEDSXNOKDDHUWNVRPLQRWYIFOBTINIQHOYFZLW");

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
    msg.setTimeStamp(0.19959596676921387);
    msg.setSource(39055U);
    msg.setSourceEntity(128U);
    msg.setDestination(38915U);
    msg.setDestinationEntity(227U);
    msg.timeout = 8188U;
    msg.lat = 0.9418362559599159;
    msg.lon = 0.25305032925252946;
    msg.z = 0.6826694145049772;
    msg.z_units = 131U;
    msg.pitch = 0.11128530698955419;
    msg.amplitude = 0.3508023561219227;
    msg.duration = 24028U;
    msg.speed = 0.931466513820463;
    msg.speed_units = 22U;
    msg.radius = 0.892048451409741;
    msg.direction = 114U;
    msg.custom.assign("CYJMPOIXWDZTBKPOPBGODBOOANJYKQBKN");

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
    msg.setTimeStamp(0.5666596668443928);
    msg.setSource(36872U);
    msg.setSourceEntity(224U);
    msg.setDestination(47131U);
    msg.setDestinationEntity(139U);
    msg.formation_name.assign("KKOFXWQVWNOBMQWELOYTWFHSMRGUKHUGCTLZEDIDCSBHRNPEZHDXBXQQCYNKBQ");
    msg.reference_frame = 136U;
    msg.custom.assign("UUELYFORMCXNWMPATBNKGBFIYTNQDXEZCWKAYCGWXQTUPDBMBZOFSYRZTQEQRODXWWVIFRHYCZIOJRKHJDMOSHYDPRAGKEBREKPYANXXFASTVEZIQXFMJCHGIIUEXLUAUOMLVZOWQGUQXFGZFILNUGPFPVSNLJUCLGDSSUHIOSALRKESHCIDVWGJWPNKBKKLVISZZAJPQDHCJWNFXYLDNJHTTMTHVEJVPM");

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
    msg.setTimeStamp(0.6616749735468948);
    msg.setSource(9427U);
    msg.setSourceEntity(242U);
    msg.setDestination(50774U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("AHBSHFTGDJGZGEBWEKTDOEKFHIJPMFVITALQNXJJDPUDRZIRPVVZSPJUZWEAJVVXXHYXRCTMHUVUKXFTECIKEKDMCMSVWCSWTIXIRMBLVQZOVWLOZMXWFNPINRVGLHBYOWQGRCJSCANOYCRXLHLREXSKPGRNPIKEZY");
    msg.reference_frame = 46U;
    msg.custom.assign("NLDLOQFLZJFCNKSJXTMRSJMNZZDGEGKPTSBCFWWTRHMUTWMNCWDWAIGSK");

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
    msg.setTimeStamp(0.6443287639175406);
    msg.setSource(31819U);
    msg.setSourceEntity(161U);
    msg.setDestination(47536U);
    msg.setDestinationEntity(62U);
    msg.formation_name.assign("ZQQQIXBYDGQOXVCECHGVBIUEHABGZWOBOJJHTKONCWBAKMIXCEHTJQAYJLZVCULFAICARGESFPCGJDORPEBXGSCYDTISFUHPVDNUANHZYGFMIZXKRVLXQBDCJBWQKKDIGMFPKXWMKMUWWJRYRHRESPNLUZQYNWFAUTTLLORFCIWYOOPLGRMPWQVLQBRNLTFAWOEPDXJYMJVVRZTUVIYDEKIEZPDSLNMZFHPEUTNNXTMUTSVAZXGB");
    msg.reference_frame = 169U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7361U;
    tmp_msg_0.off_x = 0.47641612186874827;
    tmp_msg_0.off_y = 0.3191931029121833;
    tmp_msg_0.off_z = 0.9460772889320614;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ENIVYPELTGKXDHBKLAZEHLOBHDOCFCORIJKZFRDZYSNOKUDBXFQNVNJYOAFXXPIUIJDHWUKTZWXUWXDRNODQMBARSUCRUISJMCQMVWNMMGLLFLANCFAQHGUFGHGPTXZWVPVAZCFDSVCRULQSUPPQMZQO");

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
    msg.setTimeStamp(0.46118959107773383);
    msg.setSource(57900U);
    msg.setSourceEntity(90U);
    msg.setDestination(25849U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("JDDIVZTYZRIJKTEQLWKHKVOUVJSJR");
    msg.formation_name.assign("PBTEVUCBJUFBMEIOGTPBKQEUOGNGYNIMBOCKURLLSCRVONZHXUTQTFQVYEAFMSILHDYYJKXZARVNBC");
    msg.plan_id.assign("FJBRROMENDSHAKBLWAXVZCSZWYJFVNWWSPROQPFCBRETKXGXKRHSHDOUYLROHHXLZXPMANMQFYJECCNEWTCMDWIIRIHPJZTPJBNFYVHMUMGPROMJSCKMNZLDAGQZATYRUTVJLJNAGBJSOKDVYGDQXQLSCNFXQBV");
    msg.description.assign("URTINWQFGFSQUWUFYESOYEKPVOKVHLPBWAXUGGHNIITUVTGTMOWLBBFNNQX");
    msg.leader_speed = 0.9668572463862214;
    msg.leader_bank_lim = 0.9051979890002976;
    msg.pos_sim_err_lim = 0.2185166056340836;
    msg.pos_sim_err_wrn = 0.5282281324262234;
    msg.pos_sim_err_timeout = 19394U;
    msg.converg_max = 0.3098706629454705;
    msg.converg_timeout = 20782U;
    msg.comms_timeout = 50590U;
    msg.turb_lim = 0.16093506131982482;
    msg.custom.assign("TSHWFJFUYXLTVKOYAHIBQ");

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
    msg.setTimeStamp(0.08934544458386362);
    msg.setSource(27732U);
    msg.setSourceEntity(152U);
    msg.setDestination(54654U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("XJREQIBCFDNLNZYOMDZJTVAGLFJ");
    msg.formation_name.assign("MPEMEDCRAVEWICCDDSSVUTFLWCMUEFCGFGKDSHBEAZJMPLLXUOBWIITZHYSMAJXCNFGTQVVYHRADKSHYDKGOZTWLMONOOCRZZTDJGKHSWZAKDBOBSRHMAPKPEQAYCVNKXTVMYWMQRF");
    msg.plan_id.assign("JYDBZJPREGXURCSEOKPHKMYEIMNRLNHNSWDQLSPXQYQOLEOKNNWRFYLFFCURGPWHOWWPZMAPSFLTFAYFRHZTKEXUPOLGBMYRNZGQVGOCDTVOXSYCXQBUKHTBWIAKTRFJMVEMUPKWMTTELZSNVDIUIKHPLYAVJZDWXVYSGGBTUNDOBESDPQHBGGDHFVCIQXJIJXTAJNCEJ");
    msg.description.assign("RWBOAWSCPZPXCBLFUMQLIRATQTUYJBYDRMXQWVXWUNLHDBAFYWEUHALXXPFTPZSJTBUENFCZGJVCEFESBHCGQSAZDKHKPBGYRPZMPOMRUWIGGPTMV");
    msg.leader_speed = 0.16051560069476367;
    msg.leader_bank_lim = 0.09021538474136104;
    msg.pos_sim_err_lim = 0.9859613924294212;
    msg.pos_sim_err_wrn = 0.6224066960282378;
    msg.pos_sim_err_timeout = 29825U;
    msg.converg_max = 0.651299604334689;
    msg.converg_timeout = 24148U;
    msg.comms_timeout = 48773U;
    msg.turb_lim = 0.8031368665376489;
    msg.custom.assign("UYSABEAEKXJPBRYAYOGPIZRTWMQQHRVTZJVXUYMAZPFEPCXEYTULBDKEAWKGGOSGARBXDMPCOOKJQTNKHBNTDDSBQCJOQMN");

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
    msg.setTimeStamp(0.29875447355123874);
    msg.setSource(41065U);
    msg.setSourceEntity(137U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(53U);
    msg.group_name.assign("IXRIKHPGOHIEANERSBJMUONUQJZKGZIATPOBBDRQWDNFEOXUNWKOGMSDGJTKDDSAS");
    msg.formation_name.assign("PVTYVLPVFZTKUMWXDYBHCZWEUBBJFFSQPOCWTEGRGXNTPQPXZQLYNUSIVYHYKJULRZRKJCWHTDVQASNOXALPFXSHVAQOOFGJCOIJBIACXEZKETYIGAEIJFGFMIXDRDRFTOTGDZZDMQOZXAMWCWBAIEOMVEZHLUUMCKUGYTLDVLDLFSNQBYMKRAPRIUPGKVN");
    msg.plan_id.assign("VUXSHHXVYDGOAVHXMLTMEDZZGQBFWQBSRIWKPQHNKJQLDEKKLDHRNKPATZVAGJRHVGJCHFLZCTTECPHOLPFGNYJBNOSSCGFWDKCSOLBWFGDAAOWNMVETBNETAC");
    msg.description.assign("URHCONUMQGCXECPZKPNFGILRAWSAJZPCCWAKMKCKIAHBSUKRXGJFCDJGEHYZJFBTGOAMPPBYAWSNEVYTXMGVFYVQKLENGOSKF");
    msg.leader_speed = 0.33761511279508327;
    msg.leader_bank_lim = 0.4310245468706586;
    msg.pos_sim_err_lim = 0.8042421315983033;
    msg.pos_sim_err_wrn = 0.8827503571661142;
    msg.pos_sim_err_timeout = 45173U;
    msg.converg_max = 0.49754784717426725;
    msg.converg_timeout = 30512U;
    msg.comms_timeout = 25799U;
    msg.turb_lim = 0.9481604500520135;
    msg.custom.assign("GDEBTAWKMRYKEPHSRJOLLAFMDMMJCCDRMASVCEVDXBFYETPVWFIXGAZMJWCXZSXXUVCIAPWSWOFUOKVRDFJJEGYABGDABIZOMYHXLEBRHVIEISBFWLDWMRTRUIYCNZSOQLFWSQWZFUKBNGUOLN");

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
    msg.setTimeStamp(0.3923399740325795);
    msg.setSource(36308U);
    msg.setSourceEntity(33U);
    msg.setDestination(5521U);
    msg.setDestinationEntity(3U);
    msg.control_src = 59567U;
    msg.control_ent = 75U;
    msg.timeout = 0.7970996139846245;
    msg.loiter_radius = 0.5177462693148928;
    msg.altitude_interval = 0.8007168364166888;

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
    msg.setTimeStamp(0.24294487111444796);
    msg.setSource(35210U);
    msg.setSourceEntity(209U);
    msg.setDestination(32789U);
    msg.setDestinationEntity(222U);
    msg.control_src = 54385U;
    msg.control_ent = 29U;
    msg.timeout = 0.9863888903995442;
    msg.loiter_radius = 0.21095143747807554;
    msg.altitude_interval = 0.8755872112666806;

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
    msg.setTimeStamp(0.09823122259606198);
    msg.setSource(6192U);
    msg.setSourceEntity(83U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(80U);
    msg.control_src = 21824U;
    msg.control_ent = 68U;
    msg.timeout = 0.40992801397507705;
    msg.loiter_radius = 0.6357500379130431;
    msg.altitude_interval = 0.369733071374048;

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
    msg.setTimeStamp(0.7097345543814497);
    msg.setSource(27932U);
    msg.setSourceEntity(198U);
    msg.setDestination(53739U);
    msg.setDestinationEntity(163U);
    msg.flags = 193U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.15845211631416445;
    tmp_msg_0.speed_units = 112U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8470731012876498;
    tmp_msg_1.z_units = 251U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2575394677395627;
    msg.lon = 0.49908039735944343;
    msg.radius = 0.41002371379077573;

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
    msg.setTimeStamp(0.06772840568541938);
    msg.setSource(8709U);
    msg.setSourceEntity(167U);
    msg.setDestination(59593U);
    msg.setDestinationEntity(101U);
    msg.flags = 7U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8965967102276148;
    tmp_msg_0.speed_units = 22U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.21119057073979286;
    tmp_msg_1.z_units = 243U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.42990258106589085;
    msg.lon = 0.35063763254897395;
    msg.radius = 0.9266988120819457;

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
    msg.setTimeStamp(0.331197856706019);
    msg.setSource(72U);
    msg.setSourceEntity(98U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(109U);
    msg.flags = 155U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5923422027111959;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6861365081849357;
    tmp_msg_1.z_units = 97U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7389458320084209;
    msg.lon = 0.500808953882491;
    msg.radius = 0.5403512077459832;

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
    msg.setTimeStamp(0.8862249693790102);
    msg.setSource(31084U);
    msg.setSourceEntity(46U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(37U);
    msg.control_src = 37479U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 4U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8228179476567201;
    tmp_tmp_msg_0_0.speed_units = 98U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2800623739021133;
    tmp_tmp_msg_0_1.z_units = 49U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9264135107785886;
    tmp_msg_0.lon = 0.08208120153898535;
    tmp_msg_0.radius = 0.5620363346301966;
    msg.reference.set(tmp_msg_0);
    msg.state = 88U;
    msg.proximity = 106U;

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
    msg.setTimeStamp(0.42437072648062557);
    msg.setSource(20928U);
    msg.setSourceEntity(94U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(228U);
    msg.control_src = 28633U;
    msg.control_ent = 65U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 35U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1035566831494904;
    tmp_tmp_msg_0_0.speed_units = 88U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5369642988410095;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5960373393214387;
    tmp_msg_0.lon = 0.8075445414933267;
    tmp_msg_0.radius = 0.1060480480700815;
    msg.reference.set(tmp_msg_0);
    msg.state = 102U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.5745613592167429);
    msg.setSource(17443U);
    msg.setSourceEntity(217U);
    msg.setDestination(51289U);
    msg.setDestinationEntity(49U);
    msg.control_src = 7765U;
    msg.control_ent = 13U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 61U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10665189460515334;
    tmp_tmp_msg_0_0.speed_units = 180U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6159630504571086;
    tmp_tmp_msg_0_1.z_units = 7U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2356681585959356;
    tmp_msg_0.lon = 0.7598122612145232;
    tmp_msg_0.radius = 0.9974366928017332;
    msg.reference.set(tmp_msg_0);
    msg.state = 165U;
    msg.proximity = 187U;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.14368610845116547);
    msg.setSource(56067U);
    msg.setSourceEntity(166U);
    msg.setDestination(41450U);
    msg.setDestinationEntity(33U);
    msg.op_mode = 42U;
    msg.error_count = 116U;
    msg.error_ents.assign("SJUAVVWJVPRCDTFQBZOGCMWWBKZVTIBNCWKYXZRHOUOBDFJIHLKFOREDTMSNBAIILLXMTIUQGFBOIXARRNKZSJKQDLAXCAEZLMETJWSVDTQN");
    msg.maneuver_type = 23685U;
    msg.maneuver_stime = 0.3339965790083643;
    msg.maneuver_eta = 20442U;
    msg.control_loops = 954003486U;
    msg.flags = 85U;
    msg.last_error.assign("QIQVMKMNYKIBWUQYESFCOKIPZDKTCLQMAHDSIRTWXDSHRLJVGDGQEMKHHUNYIVHUZVRMNZOTSMZLJPVNABXNLEORSOJGWMJPPOJZPLEQIUWHTVBMWXEWFUJOFYZFYMBRMBORIJCKRJSDQXPGPFVLXBBQXTETFVZUDFENPRWXHRXG");
    msg.last_error_time = 0.4487443471078817;

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
    msg.setTimeStamp(0.04884432289004459);
    msg.setSource(12839U);
    msg.setSourceEntity(114U);
    msg.setDestination(17777U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 111U;
    msg.error_count = 28U;
    msg.error_ents.assign("DYXNEACZYZNWOPUISGPTZBESVLJQOJSHNWTCRLRJNAUTUAFOFXECOKFHWPHKCZPEQOHKZZCIRRWNWMWXSIYODIKMMUYVQYGIAONWOVSVNHXCIEFBXRIEGSEMQZILYBONFHSQYPHKCYALRDSRUFBPPQDLTGKEBZTUDFBWTVRPBCHJPQ");
    msg.maneuver_type = 29632U;
    msg.maneuver_stime = 0.901577759652395;
    msg.maneuver_eta = 19146U;
    msg.control_loops = 3835785714U;
    msg.flags = 118U;
    msg.last_error.assign("NQSHDFIHUYYBC");
    msg.last_error_time = 0.8869345407571965;

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
    msg.setTimeStamp(0.2898844364248042);
    msg.setSource(18529U);
    msg.setSourceEntity(165U);
    msg.setDestination(24540U);
    msg.setDestinationEntity(180U);
    msg.op_mode = 63U;
    msg.error_count = 155U;
    msg.error_ents.assign("QOENZDKRPWKCVGPKEDZBUYYGDFFDLNPMKLLYJNGNQVXQEBSMETJWQTHSCBUDELTIXFAKXWPPHQVUYUSXGUEFYXJNQOJSYSFCLKBQWAPCBITONMXRIYZXXJITRBAMFDVVPWJUFUVWEOHZMMXIOHGODZUWTMTFAROYALQPHMQZFJASKHSZOWADPPTVLTVGHVAJHUOLNIGIMEBRROWERYYQSZINCXCANCFGHICBGLZGRJDWKMDLZCRSBEASTIVUNJ");
    msg.maneuver_type = 9104U;
    msg.maneuver_stime = 0.6610232119520724;
    msg.maneuver_eta = 8719U;
    msg.control_loops = 2378560853U;
    msg.flags = 231U;
    msg.last_error.assign("JRKOKUGYSVDCIBYUEOBMHNGPBKBENCISISHPQTNGHJXQNYDTPKVQKZQBMXAVFHFAPXFPGOACWNATSCOYYOZGTAFVLJRDLLCHYQLWWIDLRXLMUPFYOYUCVUAOGZDJMIRRRTJEQBJLESYNMKTIXBCGZGGASDFQHTIWFFECLBZMEPEVZSEUINPDKZDAPDBUDWQMOWWLNFRMJIWWGSNUTJRZLUKTHJZXUCAHCYXVERNMQERKSFXOKOVAXBQ");
    msg.last_error_time = 0.9934872057076181;

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
    msg.setTimeStamp(0.7831153175590703);
    msg.setSource(36894U);
    msg.setSourceEntity(17U);
    msg.setDestination(29203U);
    msg.setDestinationEntity(127U);
    msg.type = 104U;
    msg.request_id = 60676U;
    msg.command = 13U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.5180954000801282;
    tmp_msg_0.lon = 0.21195940616825426;
    tmp_msg_0.z = 0.1530514858805525;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.speed = 0.17512550130730975;
    tmp_msg_0.speed_units = 81U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.23497256418967138;
    tmp_tmp_msg_0_0.lon = 0.4786297252274665;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YWRWPMRDFHSBCGVLZOTGIOCQWOTVDCABKLZGWNJRCGIPDMGHNIJAAGIAEDOET");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3165U;
    msg.info.assign("SGCQHRYTNBIBTKMSLRFGLWETOAGRVNNDDSGZORXLULIVDJDSN");

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
    msg.setTimeStamp(0.03989965063373613);
    msg.setSource(14611U);
    msg.setSourceEntity(50U);
    msg.setDestination(15906U);
    msg.setDestinationEntity(65U);
    msg.type = 97U;
    msg.request_id = 34153U;
    msg.command = 164U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.22466089999796857;
    tmp_msg_0.lon = 0.9019410841345957;
    tmp_msg_0.speed = 0.04077445401290625;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.duration = 266U;
    tmp_msg_0.sys_a = 32264U;
    tmp_msg_0.sys_b = 50688U;
    tmp_msg_0.move_threshold = 0.7486189647373105;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29870U;
    msg.info.assign("FLNSILAYDCBQMNQTYHBUOJZJMUZOFPWBWQDBKLYEFZYCCKIHVQXISGNDYEGEXSPHDTBOVOAYYZOSFZQMBCKODYCAUAEHTRRGWUIDHPUAWKFNKWXHQZKRPVLCIXJUGPGTBVECWILJF");

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
    msg.setTimeStamp(0.6799116997866582);
    msg.setSource(61485U);
    msg.setSourceEntity(23U);
    msg.setDestination(37846U);
    msg.setDestinationEntity(135U);
    msg.type = 124U;
    msg.request_id = 2815U;
    msg.command = 20U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 12503U;
    tmp_msg_0.lat = 0.09621172434378389;
    tmp_msg_0.lon = 0.00017900228544387442;
    tmp_msg_0.z = 0.8152429108827995;
    tmp_msg_0.z_units = 168U;
    tmp_msg_0.amplitude = 0.6870524072303149;
    tmp_msg_0.pitch = 0.047201690017182996;
    tmp_msg_0.speed = 0.25481347195979875;
    tmp_msg_0.speed_units = 168U;
    tmp_msg_0.custom.assign("NIPDRUDUEXJCMYZELVPDLZOCFCDRFCNNGZLIRJAWOTESWRHUBDJZHDAX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33038U;
    msg.info.assign("APZRSBZQCWISUMYQ");

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
    msg.setTimeStamp(0.41270508536850037);
    msg.setSource(40026U);
    msg.setSourceEntity(225U);
    msg.setDestination(64559U);
    msg.setDestinationEntity(120U);
    msg.command = 218U;
    msg.entities.assign("ZMLQYMWJBPBOJFKYRNCYVFEGJKIMAZSAXNUNWRNDRCNAAPHOVGOQYEHLZVKFHUKYNMUDUBCEUQECWWPBKCJVCBYOYHQLYRDJGWMQFTBDKRIHIEFSFLHCQSAJHKWMCWZULGGKOXXOZSSQHLDGPQSQREBXZYVWBTEZDZ");

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
    msg.setTimeStamp(0.9559268147626904);
    msg.setSource(16473U);
    msg.setSourceEntity(107U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(215U);
    msg.command = 179U;
    msg.entities.assign("TLZYWQTAUTQUKENAYRDWESKQMYBVKYEOGRZBOPIONOYTSJZPYSJNIVJSRPXFAFPLXIAKCZVPKLUSIYACIQYUHDHGGLEXGCRLKNWMMPCBCQFTJCWAFSBRNCVMPFOZEULHDKEMEGNRLHJXIMXXUDWVMUJKQLMNHROJGTMOECSYRBZVRWIDABGGBHBSIDFZXUHWOAITTLDTWVPVODZVQGQNZFFPUSKLDMDCSCXYXBTZHQEJJRWPHING");

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
    msg.setTimeStamp(0.9676190738623527);
    msg.setSource(46549U);
    msg.setSourceEntity(41U);
    msg.setDestination(46031U);
    msg.setDestinationEntity(11U);
    msg.command = 237U;
    msg.entities.assign("TCWTKVUTCQXKPVMMJRFAKOBSFVVCTALXSUXXGHVULKDBSMNFRRHRFO");

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
    msg.setTimeStamp(0.5078155284533608);
    msg.setSource(60539U);
    msg.setSourceEntity(35U);
    msg.setDestination(38133U);
    msg.setDestinationEntity(240U);
    msg.mcount = 195U;
    msg.mnames.assign("AUKOPGACBTWCRKJAZXWGBIPLODFOZSZFKYGGEPNTJNCRWVTJBSJDZOESHZYERWVPVVZLIKJZXYLIFVKIOMXJASPRMUIMCQCEOJXXEBFEOEUQBDTHSAWHWHKDLQMTNOVMHFYXYYNROBQCQFZINIKXQNTEMSXKWLINSGUHOMAAHTMSRYPIYURRMRGMBULTXQFTGWEANPYPNUKKWJFLVGEHHQDGVBDWPSVJDICAZXCUCCZULD");
    msg.ecount = 37U;
    msg.enames.assign("BJPFWPZNOOQGHXOSAKBMPVRMBLUHRHJLNYQCWZRXYEFOVHHEWKYEBQDTTJAXGJPFJIYQDPLMOPUJHSBAUMUWTTSNBIKFOTGKZIAGWAKDVCTCIRKZLGRSJBVUCRNAUCNAOXXIESEIUPSWNAVMKWIGXGL");
    msg.ccount = 245U;
    msg.cnames.assign("AZBCVGCQMEFJQXZKNTRBPGBIZANORNTWXXOLIYAWAWWQCMRGQBKVQVFCGZAEKZGAEPODRSHXJQRUNWEOMHKAYSIPUWCOIJYDKHTPLHHFFOJPUZWTIW");
    msg.last_error.assign("ZKVAARWSCCTWOXNXAIZKSEOQTSKQEUQVQMEWYZUCGJDVMXHECMNAYOLYOWKDXBMCRMYQIRSGHDNYNJZGJULWNPTPGAWXJBHFUMBWIPJGPUFBTOZVYELACOCEJOHNZZMDIQCMP");
    msg.last_error_time = 0.1723519277027319;

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
    msg.setTimeStamp(0.48179864047167054);
    msg.setSource(44767U);
    msg.setSourceEntity(139U);
    msg.setDestination(36755U);
    msg.setDestinationEntity(25U);
    msg.mcount = 102U;
    msg.mnames.assign("PNBXQPNMKHEAGCZBEJYFXTMDDQUSWIMLPYLGTWFRLNOBOQZHJNVNVCFCVRASSJLAITAZVJEERDPUSYDKQPWCWOMXCXFSEHLHBJLTGPIIMHDZJHYLOAXQADKZHRBZCKLKEZRMWCJSFISWXRCNSYNDQERRFURBVKVVOGPUOOTGGXKUGFQZKIAYBEYPGMWJNCGOGQXFWKQIPFDYCMUMLAUMNNBJAVHWUVEYIWZLHBPUUSOTXJAHTTDKBTYTXID");
    msg.ecount = 119U;
    msg.enames.assign("UHIBWOZKVCIWVQKDXQPSXABSBJWPJJMOWFQTMGXGGNTMTDUZVJORXMGRJDLYHEYHBOOCEZCOCPUZICGKGLJQBOLAKHNGAUHXMKAMFCIDRYFZWHOKBFLPXLXGSFSMTDNAEFUPCUTSHPSRSJSTGFFZJDKNLY");
    msg.ccount = 23U;
    msg.cnames.assign("YODZCKREAMHWPNAXXDGTZFFQNDTSLGIFERMGPWZWHJRUSZOXSAZXSESRMUCFHKHQLGWHUKWZYKPAMZPUKBMMCEZZJFILURLQBVZYUPCQBFJBXNJSTOIJBAGVCDEVSTTQRPVCETOQAODXTBRSMEFQYMGP");
    msg.last_error.assign("FYDVUFLFHUSMIQAIFNRPHGDXTUJMDGEMAQRITRCWKKESLAMQQPBXFCKKUFCOSORTJNDJOSAXAEVYUZLDNXKVBSUHIKCBXQIIRDBGTNJGARCDENVMHDVZKYHMJLZYEMZCLBGPEAKTWYCBFUNIOWTBNWRHHRSOY");
    msg.last_error_time = 0.7487728412829204;

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
    msg.setTimeStamp(0.8918835628109106);
    msg.setSource(2525U);
    msg.setSourceEntity(104U);
    msg.setDestination(30918U);
    msg.setDestinationEntity(141U);
    msg.mcount = 173U;
    msg.mnames.assign("OSRNTSSMBOSLGIYQOBTRRNIPNCPKNZSGGBTRDLDYHDQFCGGYVSTHWKIYVKFYJLUZUBZEXOGTABJNDWYIQXSMAJYLIWEZEUTJWSMUBKTK");
    msg.ecount = 156U;
    msg.enames.assign("PVCTITPIWUQQJSE");
    msg.ccount = 121U;
    msg.cnames.assign("RLRGFHKCXWABLNGVFGIYJIZFHHSJFTLHAWCPDGDIMIQIJINBLJKFIBCRMQOTJNCRXZDTEFONHDMLEREOQZUUSJJAMVWXUHPWCHBGNWUVLQODRXAPJNMRUBSZPQMKBKVARXPMZETTVWWVOZFZIQCWWOZKGCDLYDFXECAAUGQOSPCTYTXOSEZAFSASBSLDWPNTTNGVVKVYARNYYI");
    msg.last_error.assign("ZVZLELROZBNUGXGANCENJNWGSVWJVYHWRTOBREMQWGUXOMOOJSKEPZIURBAWSRUPSKL");
    msg.last_error_time = 0.014147904463423067;

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
    msg.setTimeStamp(0.9790168270355162);
    msg.setSource(26496U);
    msg.setSourceEntity(138U);
    msg.setDestination(4511U);
    msg.setDestinationEntity(108U);
    msg.mask = 50U;
    msg.max_depth = 0.8289820546149819;
    msg.min_altitude = 0.3637381278589632;
    msg.max_altitude = 0.25980533899451697;
    msg.min_speed = 0.8126308479403298;
    msg.max_speed = 0.02090467790728734;
    msg.max_vrate = 0.9955244689802647;
    msg.lat = 0.524294002845203;
    msg.lon = 0.35364595051603553;
    msg.orientation = 0.39381564014424697;
    msg.width = 0.11899702568245663;
    msg.length = 0.8371789329855264;

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
    msg.setTimeStamp(0.6390052221214235);
    msg.setSource(27086U);
    msg.setSourceEntity(71U);
    msg.setDestination(2541U);
    msg.setDestinationEntity(68U);
    msg.mask = 46U;
    msg.max_depth = 0.9811936995134993;
    msg.min_altitude = 0.252507060376178;
    msg.max_altitude = 0.2723242520262512;
    msg.min_speed = 0.917510889211375;
    msg.max_speed = 0.3280575857688375;
    msg.max_vrate = 0.22570405973857655;
    msg.lat = 0.508434207946379;
    msg.lon = 0.6019689358394704;
    msg.orientation = 0.3465020704998636;
    msg.width = 0.8861121192860089;
    msg.length = 0.4964669741096279;

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
    msg.setTimeStamp(0.4807606405235644);
    msg.setSource(987U);
    msg.setSourceEntity(36U);
    msg.setDestination(26921U);
    msg.setDestinationEntity(207U);
    msg.mask = 33U;
    msg.max_depth = 0.4319113589471547;
    msg.min_altitude = 0.6287202417589448;
    msg.max_altitude = 0.9303365153293726;
    msg.min_speed = 0.1675071053685887;
    msg.max_speed = 0.8415896372786815;
    msg.max_vrate = 0.3696293238966182;
    msg.lat = 0.00030472561953698296;
    msg.lon = 0.8893457180455391;
    msg.orientation = 0.8392503597241323;
    msg.width = 0.3774661977317325;
    msg.length = 0.5434769968700207;

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
    msg.setTimeStamp(0.13078239106162648);
    msg.setSource(46816U);
    msg.setSourceEntity(245U);
    msg.setDestination(55660U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.1405969572246064);
    msg.setSource(50853U);
    msg.setSourceEntity(35U);
    msg.setDestination(43714U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.7628127223607115);
    msg.setSource(18127U);
    msg.setSourceEntity(181U);
    msg.setDestination(63916U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.41559776835530393);
    msg.setSource(2367U);
    msg.setSourceEntity(166U);
    msg.setDestination(41525U);
    msg.setDestinationEntity(158U);
    msg.duration = 18391U;

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
    msg.setTimeStamp(0.7249218089955303);
    msg.setSource(60521U);
    msg.setSourceEntity(88U);
    msg.setDestination(52162U);
    msg.setDestinationEntity(198U);
    msg.duration = 43203U;

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
    msg.setTimeStamp(0.9267039691845873);
    msg.setSource(31662U);
    msg.setSourceEntity(230U);
    msg.setDestination(53562U);
    msg.setDestinationEntity(113U);
    msg.duration = 55767U;

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
    msg.setTimeStamp(0.11489596153326653);
    msg.setSource(52860U);
    msg.setSourceEntity(221U);
    msg.setDestination(32200U);
    msg.setDestinationEntity(43U);
    msg.enable = 87U;
    msg.mask = 2248604250U;
    msg.scope_ref = 273929509U;

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
    msg.setTimeStamp(0.03301304505235336);
    msg.setSource(2123U);
    msg.setSourceEntity(112U);
    msg.setDestination(19117U);
    msg.setDestinationEntity(4U);
    msg.enable = 39U;
    msg.mask = 3602586787U;
    msg.scope_ref = 582901867U;

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
    msg.setTimeStamp(0.5063471351103396);
    msg.setSource(43096U);
    msg.setSourceEntity(112U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(217U);
    msg.enable = 62U;
    msg.mask = 2300365771U;
    msg.scope_ref = 3088023351U;

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
    msg.setTimeStamp(0.564555286615284);
    msg.setSource(26303U);
    msg.setSourceEntity(20U);
    msg.setDestination(3368U);
    msg.setDestinationEntity(34U);
    msg.medium = 212U;

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
    msg.setTimeStamp(0.9513337573196495);
    msg.setSource(21576U);
    msg.setSourceEntity(79U);
    msg.setDestination(25213U);
    msg.setDestinationEntity(70U);
    msg.medium = 145U;

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
    msg.setTimeStamp(0.1294311431076689);
    msg.setSource(51729U);
    msg.setSourceEntity(18U);
    msg.setDestination(24816U);
    msg.setDestinationEntity(115U);
    msg.medium = 48U;

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
    msg.setTimeStamp(0.041278758858451114);
    msg.setSource(34538U);
    msg.setSourceEntity(124U);
    msg.setDestination(58864U);
    msg.setDestinationEntity(71U);
    msg.value = 0.6860942172940534;
    msg.type = 63U;

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
    msg.setTimeStamp(0.652127399045727);
    msg.setSource(24001U);
    msg.setSourceEntity(46U);
    msg.setDestination(52921U);
    msg.setDestinationEntity(187U);
    msg.value = 0.03586819243272987;
    msg.type = 165U;

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
    msg.setTimeStamp(0.2433565649624554);
    msg.setSource(39752U);
    msg.setSourceEntity(151U);
    msg.setDestination(7530U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5656638178330374;
    msg.type = 129U;

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
    msg.setTimeStamp(0.340421480325256);
    msg.setSource(29901U);
    msg.setSourceEntity(127U);
    msg.setDestination(18710U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.6175837794928491;
    msg.converg = 0.4591500189845108;
    msg.turbulence = 0.11544640793419225;
    msg.possimmon = 111U;
    msg.commmon = 14U;
    msg.convergmon = 22U;

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
    msg.setTimeStamp(0.9856169827760631);
    msg.setSource(59652U);
    msg.setSourceEntity(227U);
    msg.setDestination(1101U);
    msg.setDestinationEntity(227U);
    msg.possimerr = 0.5470005219375449;
    msg.converg = 0.36233226072884217;
    msg.turbulence = 0.012395773495238571;
    msg.possimmon = 99U;
    msg.commmon = 50U;
    msg.convergmon = 142U;

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
    msg.setTimeStamp(0.347049673235278);
    msg.setSource(40159U);
    msg.setSourceEntity(174U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.021952054970064916;
    msg.converg = 0.08370737655500748;
    msg.turbulence = 0.3115296677890954;
    msg.possimmon = 154U;
    msg.commmon = 182U;
    msg.convergmon = 161U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.1384836742257709);
    msg.setSource(62521U);
    msg.setSourceEntity(57U);
    msg.setDestination(41333U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.8865629064550795);
    msg.setSource(58219U);
    msg.setSourceEntity(176U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.6337052419005511);
    msg.setSource(30990U);
    msg.setSourceEntity(77U);
    msg.setDestination(63641U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.5961711240302551);
    msg.setSource(20165U);
    msg.setSourceEntity(16U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("MVCPUQGDACZPEZBBGYKERKTUGLIJXTDMSBENJKSUPZXNZW");
    msg.description.assign("ZWABZXGOVHHKECXHXGLGNCGVOFWHGBBUEUIQYKIJXIQOJLHOQNJLXBTKDKEAKWFZZKRAQLYNMESAPPRHSFVNOVQRJYIMJBPXXMKKCCQDSKRJXEDLMWNSRSGUFPYJYDTZWNSCUBCRWOSGKLOHEMXUJ");
    msg.vnamespace.assign("UDGOMSUFFCXXZOASAFAXMDIDRGEGDZSWFWPTYBNIRHDUQCVJKLKGUGSLWVVUQBOEKVRIUZNKQNGNMAUVLHVTXIRBTCLEAZYUCJXPZNHONDMJFLQDMOYFTHPSGDCMASWECPWNJEPEFBCJMPTYIYHBYCZRQEHHDT");
    msg.start_man_id.assign("WSOIEBIRSGESLFUJVRONEOTPXOUNMHKZDYYALIXPCBCZYYNYRHHTRXJVSMVUFEMPVWPLIJCCQWWEIDYJTLYDISFZHADDBXUYCSAKTPQJBVGHOWUWXHOMSYNNTGCRKFSMGZMOHRUJODUFGYZPWLIQTAGTJAZMFHATZULCXSLNEWUIVNKRLOWIKQTBCXKVQJOQADBZMXHBER");
    IMC::Pulse tmp_msg_0;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::WaterVelocity tmp_msg_1;
    tmp_msg_1.validity = 203U;
    tmp_msg_1.x = 0.11486728208586605;
    tmp_msg_1.y = 0.5825370613020363;
    tmp_msg_1.z = 0.3079483799516832;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6038326973164914);
    msg.setSource(33297U);
    msg.setSourceEntity(65U);
    msg.setDestination(56849U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("LIUDNJYFUSQXRXJPAIVWGJPEIAZQEBTVFIAFBZTWTCSAWCQGWGYXAGPPMZYVLYWLCMUTYMPDWOSCODHNKMXWIIRTTHMGZIUSDBXNUKYKMYOVRYNHNKUJRVSSVQFBDKUFKHSQOXJPCNNBMPDZZFJCALMVNEWDPHSUXIRJGTCSILVVAQFOHUQOWHJBEPAZRAYFQGLHKBZFTTKKQRIM");
    msg.description.assign("PGADLUSIDS");
    msg.vnamespace.assign("QLJVGQCGAEGAJISOZXMZHHTWYPDCOOQGJDUCJOYEWQCHQFPFVFLGLOIZBUQEDLPBHTRTKAQAAFYGXXPEHGUBZYMDPRXSMKOTDPLEVDBUMRCHZASDUNJCOMWCMUNXTKHVBJLQNYTOMFNTWXTBENKAHRYLCPSDBZQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("WQCQWQKEOOEMRZVCSKETPQABNGCFGUDXINHGSSAVXIBALY");
    tmp_msg_0.value.assign("PQIHMXDUCUYGFRUTKJKMBPTXZGQODFOVRFMTNWBMGEOGAUJSZKCPQNERXDYRFNNHRZAJKSNWPJLMVWWEWNTSWADEHTONPVKUGJOAKWKBSPPAYHDLLTFM");
    tmp_msg_0.type = 247U;
    tmp_msg_0.access = 68U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QTRXDHYLVLLXRLTNPGXEJSSHZNRFXPMABUITCDWMIVAOSEUKGOLHYZBTEQYKXPQBMXKMZQNOUFQPMORPSVBCJJDTJNDHVTXRVNBUDGBAIAMLYJTYIYRBLAMQUXKTKHDFDINIUCMVCFRIAZEHZVIERKWGRQAVVCPOWGGBJUKRPOCSPQOONKAJYSHYXWELJKZWKFCGGNSZEIW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SJQFJOJNICVCXSHTEENZXWXUSZIXXETEPFADFTDRUEKIMKHZUEJDKPDGFBVWCSHQVKNRLXDWAZKDFBRIKYQALBLFUOZQZMQQLIUTMHQDALNUYGRAPYOMGCJYLJDDJFI");
    tmp_msg_1.dest_man.assign("KGOUYEQGJPGTMRBKZMHVNCHHDJMLYTHALBPYKRCDCXIPSGBQTXVNTZDXSTCOPOPKZMUHOLQNXVVBFGOBIRNOXZAKTQKCYASLW");
    tmp_msg_1.conditions.assign("BXJANHEPCHXDPFQIPVQTBWIWJQEMKREGFZKKVMJTGWPWJS");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.8149691418209168;
    tmp_tmp_msg_1_0.lon = 0.226627021661843;
    tmp_tmp_msg_1_0.z = 0.9957280397915795;
    tmp_tmp_msg_1_0.z_units = 192U;
    tmp_tmp_msg_1_0.speed = 0.07747433534953674;
    tmp_tmp_msg_1_0.speed_units = 161U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.9372559230488692;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.6374705274213078;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("OHRVKDAWCXTHKPVKYMEJBFABJOPUXQNNSTCNIULJCWWUNZECEBMSBDZIGTPYFWCQJKBFMIGAUCFRBREYLQRDFMYHHNWXMVZPOYXTYWGAILZWXIGZHHFYPOEODKRIFXDAKQHCWZKPMSUIGAQUQTN");
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
    msg.setTimeStamp(0.6753831433735227);
    msg.setSource(30675U);
    msg.setSourceEntity(197U);
    msg.setDestination(30084U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("CKPYAWAACPZWAZSLZJKTWNPEZTHHPAVLPTEOCINVPJEEDADXHYRSYCVCMJOTLQKSHOVOPVUFSFIRNLJYDUNRYQWIXVBFXRZTGAXMFBCWDCKOOLDDMJIJMNIGJJIESFI");
    msg.description.assign("DPUMQYJEGZBLQXRDKKVASEWCOACOZUCLYFHIYQTAXJCQDDCIEVRZMINNKWMWXWGGBFJHHUSYSOSVEVZSCMXILMBFQZHP");
    msg.vnamespace.assign("LGYXLZXVOHMCASIEYJYIYVWNCYTAUTTZSOSQFPJOATEJEMHGJDFLUTAZRVVHTPTXDKGPPEBREF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HZFYIKVEXCTKTJGNWGTSLBUGWJDANTNLHQURFAJVWPUYMMHQFQQILILBMYOVCMRXKRPASNRVBQKWISCCFPVBYFTDOFLQLPRYJSEDMECNIUBAUGKFSRGIXUYQXBTFAQMRJHHPMZCFBHMCAGRXEZZAUPAVPHIOWHMNTDDKQSZNSJZOENLDVAREKKYGNYEAGNOZDKZEZUIXXLCJBY");
    tmp_msg_0.value.assign("JTRJPMKGGYFBHJUXPZQIUKUQQIUSMOFECEEMKTKMTJWKRNOHPGRRZTVFVRBZZHQXSTMTYFNUMACVCAIXBDEOEHVBCSFZQXGJTVYNZNSQWLZPNWLVMDODOJYAJODMVONHDXZHKNCBVYJSGADRHGUGFXIVYIPOAWMBKGIPLOKGPENCLFBCYAGSDUYZZBERHVEWBWUARALFXCLAJYEWQQLIHJL");
    tmp_msg_0.type = 104U;
    tmp_msg_0.access = 180U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KZBYJJEXEXXWPYEEPVAWBNISAMROFJZGZMOOTBXDYHVLHPMDOJTWAHGHBGVEHPIBEDFFWRTVQWZAXCWUBNKCVUQRSUETQLPUZZWEQAOINCYNNTJCMRAMHUVYWVBJRPJGPIOHRL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("UTAMSOFDGMRTOGDZSLHMAYPTYSWJUIDLRQNHSLHQPTAKDOBFCEXCDPRBFMVPCTQMLBVWIXUGNZWKBDJXFKAOPZZRFQJYZWWMDNFDAXFHAPTDUNAISIOLUQTANZNYJYECGROEVCJWXQRZIKIEAOCYIHXSBVMLUIYXYZKPUWKUFBVTLCZP");
    tmp_msg_1.dest_man.assign("EMTHKGPMPJZVSNAHMAYWPPMOYFDXYKJSCIAJJMNFNORRVZVVURZKIFOQDWZQAENZRZCJXLELIPAPJUTFVSIFQIWXIUUVNHPMWXBLBGDUSHTBRDZQRYLUDHNIFGPKECSJJBEOWBXGYECUGQCVMWLIDCQQRETYONAWEJJVUZSYMGADXOSWTKXBPQUHCUXFDBNKTTBNBLKCWEFHYLSGOSRXVGZHTHKAMFTZHADLD");
    tmp_msg_1.conditions.assign("XTPJPRSMWTMSERDWCXGVXCUXZVKOSYJOFVVHEGKMBNGNUDFLPKSFRHPOPXILTHQLHAMZEUEJRHDQTARTBMOJUQCXFUPWQEOGYKVZNXNVSWJZQYLPRCMEEXKDQDVOAKOXIYBIPGBMNTQGVGTB");
    msg.transitions.push_back(tmp_msg_1);
    IMC::RestartSystem tmp_msg_2;
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
    msg.setTimeStamp(0.39007655107860273);
    msg.setSource(49535U);
    msg.setSourceEntity(156U);
    msg.setDestination(13963U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("QQOHCLQTFLZNORVIFWQWEJKZWJXHMMWVATGJHEMHCKXNCEIMGBHTTCLA");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.017935092404600783;
    tmp_msg_0.lon = 0.49132478575741567;
    tmp_msg_0.z = 0.0012103267481489155;
    tmp_msg_0.z_units = 200U;
    tmp_msg_0.speed = 0.7511641995660474;
    tmp_msg_0.speed_units = 7U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 29376U;
    tmp_tmp_msg_0_0.off_x = 0.2107388233737194;
    tmp_tmp_msg_0_0.off_y = 0.6411655332032767;
    tmp_tmp_msg_0_0.off_z = 0.375837938705017;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.5215969694289228;
    tmp_msg_0.custom.assign("FCRIJXPEUDGSNLRWTQRKEOSQYRMVUGCGOOMNGXFNJYCHPEEGYTDSQCDSAHITDLQMVFNDEBBBSXEKMUTMTVSYAVVITLESXHYRHSJCYVIUOQYZWSMNPPEFPRBAXKJWJFAUQZYDAUZHBIWHUPAPJHWFIWCUVDHUMLZHTGJNBZTDNLGGWBYXPRBLYXPGTNJNVZKXOQIAFVZAKHKXRWINEOZCOLIOOOFQSCKARRABD");
    msg.data.set(tmp_msg_0);
    IMC::NavigationUncertainty tmp_msg_1;
    tmp_msg_1.x = 0.36688344066949374;
    tmp_msg_1.y = 0.9457513747410492;
    tmp_msg_1.z = 0.9785611677895302;
    tmp_msg_1.phi = 0.8869588515502845;
    tmp_msg_1.theta = 0.6253028145188995;
    tmp_msg_1.psi = 0.34218604247841444;
    tmp_msg_1.p = 0.5695323829215081;
    tmp_msg_1.q = 0.2386511032100438;
    tmp_msg_1.r = 0.33596810276755695;
    tmp_msg_1.u = 0.6549055856638125;
    tmp_msg_1.v = 0.2763246200641416;
    tmp_msg_1.w = 0.11148798438652463;
    tmp_msg_1.bias_psi = 0.41495245117829715;
    tmp_msg_1.bias_r = 0.3804206715354329;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityState tmp_msg_2;
    tmp_msg_2.state = 224U;
    tmp_msg_2.flags = 147U;
    tmp_msg_2.description.assign("HNHMNCRSFKFSPVZSIMKQDFAYGGSDAOBPVIEPHTMQGYEWRXJAJWDTBSIJKDDDXZCNBREYURMEYWZIYTXMGAGLNZPJVCBLLDNKXLQZVZMQHGWCKXUAYFKC");
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
    msg.setTimeStamp(0.4761016234573884);
    msg.setSource(2713U);
    msg.setSourceEntity(88U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(184U);
    msg.maneuver_id.assign("JHSYFHQXBNEECTVHSLCZQAFRLPGMCFWJDNOKANARCVEQDAXPVBEGUVPVWRZIHUBQSGKQWMZNDINZBPYJASKZFNVUGQGL");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 57726U;
    tmp_msg_0.flags = 157U;
    tmp_msg_0.lat = 0.3993290269523374;
    tmp_msg_0.lon = 0.011099340087321496;
    tmp_msg_0.start_z = 0.9298985636079696;
    tmp_msg_0.start_z_units = 238U;
    tmp_msg_0.end_z = 0.25378332085795374;
    tmp_msg_0.end_z_units = 21U;
    tmp_msg_0.radius = 0.7680937303435441;
    tmp_msg_0.speed = 0.5762824621356069;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.custom.assign("UMPRMCRYLZASOGYC");
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
    msg.setTimeStamp(0.2188160655506899);
    msg.setSource(5651U);
    msg.setSourceEntity(210U);
    msg.setDestination(5079U);
    msg.setDestinationEntity(51U);
    msg.maneuver_id.assign("VBJCJGOVCIWMWOTB");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 44376U;
    tmp_msg_0.lat = 0.35174232051641596;
    tmp_msg_0.lon = 0.7152779414489764;
    tmp_msg_0.z = 0.2804248301752327;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.8708568027460606;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.custom.assign("XIZLENPFVMSOIKZMAWXECWLVKJHWHGXMRCAODETVHNKRSKDGYVMJGRJKUYJKXTWLBTIBDVPRCQNWSTZUYJKGDSV");
    msg.data.set(tmp_msg_0);
    IMC::DesiredPath tmp_msg_1;
    tmp_msg_1.start_lat = 0.5651058843571345;
    tmp_msg_1.start_lon = 0.1366227099343481;
    tmp_msg_1.start_z = 0.4453696978370434;
    tmp_msg_1.start_z_units = 250U;
    tmp_msg_1.end_lat = 0.3910349951397324;
    tmp_msg_1.end_lon = 0.2996456419905702;
    tmp_msg_1.end_z = 0.8029671611696897;
    tmp_msg_1.end_z_units = 106U;
    tmp_msg_1.speed = 0.441017139981852;
    tmp_msg_1.speed_units = 235U;
    tmp_msg_1.lradius = 0.9542930661656363;
    tmp_msg_1.flags = 142U;
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
    msg.setTimeStamp(0.6867944343482306);
    msg.setSource(9452U);
    msg.setSourceEntity(126U);
    msg.setDestination(58904U);
    msg.setDestinationEntity(155U);
    msg.source_man.assign("IGUGKPLGLIZNLRYGXBRICSUMBKRVFTRTZUNTSTRPEQM");
    msg.dest_man.assign("NWKYUYEEGIONXUCAGENHOPYLHIXH");
    msg.conditions.assign("TKNXWPHYCVFALZGFVIEALSYSBSQUNMXJQKAPDBACEFBLZHECAEJJRYZBQWTWUCGQWMNVYIWFLVESPDFEZPKCBPKNAMCIDTJAZPWTMAUXJVXUKDHOCBGJIPRMGXWBNFOOMFZECYILTQIZKGYRSSUDILBKOIYXUJJEOFQELEUGNWCAUTRBLLOWRFXNGVIJYRBHSUTODXMFPKDORQHNANRQXHZIHMSHQKTKXCV");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 18672U;
    tmp_msg_0.status = 169U;
    tmp_msg_0.text.assign("CEUVCBERUWTXTMJFAGTEBHDXWDTVYSYMIJOFGVRNDOLMXRAQTGYTPGNMGCBDUEWEYOPUKUBAHRZZKCPRSFKQSNEIRJ");
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
    msg.setTimeStamp(0.281507154970824);
    msg.setSource(20871U);
    msg.setSourceEntity(163U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(186U);
    msg.source_man.assign("VIAIBJUWISQWLJKBNNJVHUHQGMBFVBAAXTXDHYZQDEFZMYTYPSHLIWCGAQJFWXDRZRKTTNPYKIWCNIMKSOFAOGLLPZNGIHFYWZURKYFQPJFRIYTBMCXKOCBAYDORRFXAZTWUUTPRUTEQMFESCYNDHRACMESCJKUCSVGJMNLFBRTVPOLKTUKEJLVDNDGLWOXSCGUDZVZBJVDAHMGEVPSLEOSXAGIQHQDEONOXZBRC");
    msg.dest_man.assign("HTJDWWUTGRQQPUUREBKQRGTVBFRCBDIXDKJNDTTZHHJZNBVTHTGYCMMUMKZENCIZVNJMNOFBATVZXBVNMIRRZUGAOYOIJFPZFGJRVWGHXPIPLXZQPSSDDAHUSOWEPYLLCWESPMBAVONAPZKOSNYUFFDLAESYRZJFDKXVQVPVMQGCLDQSRBEWSQWIAHHFTQLSXYHCUIGXCLEYPIYXJLOYNCJEGQAAFUKASBEDTMMILIKCHBYOK");
    msg.conditions.assign("LGLRFQBNIMXDPPYBVMWVOGHWZTBAUTMFVBWYVTSQRBDUEMTCJZBUDIWSXRGHKGFERLMWJFKLXZVSNFADMFTSHMSPOVOSLAGFTTDRYMBKFRQGPXXOXNEAEGJRUCKLDGIHCZLXHQPUUZYQYYOHPYVWOYMEXBNKIQENFXHAWDDSRAKRLSKCNKUBZDNXVSPNOJJZFKIHJQWINUZIJLCOHHIZUAAYZQMAUVYATC");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2860880653U;
    tmp_msg_0.messages.assign("HVROJQKQSNTWTJQKLGEXHPJPRAXFDEIBCGIPBVSLETFOCKSERIOHSPYWXZUNEDHUTCWLMVZCWOMMTEGPENRBGYCZVQPMMQUN");
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
    msg.setTimeStamp(0.06936837245324912);
    msg.setSource(3891U);
    msg.setSourceEntity(205U);
    msg.setDestination(9585U);
    msg.setDestinationEntity(229U);
    msg.source_man.assign("HFSFZAJESBNKCMSVMGRFKQAKNEZXAURMIMOKWTOZYXTGQOE");
    msg.dest_man.assign("ARPYQBOKQDKWYNFIAUTQZHMFRBWGKLARSPMCDXNRHUGNYSYYKAFVKMQIJFCWZGOMLUYIGZTZIGSVQEIPMHNNEAUWDXPXL");
    msg.conditions.assign("HLVAWSZUNTWEQTWGGSCSJJFQNRTEUXINLMRRFTPMOGPVGECZYJUSDZBVNULHFRBIMWHYKEDWMMOVAZGVMKIUBXWAVDRJSLVCFCRACLBDEFQRIXYWMKUCPQKXZXYQAYHUFFOITY");

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
    msg.setTimeStamp(0.21483485066548347);
    msg.setSource(47392U);
    msg.setSourceEntity(97U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(225U);
    msg.command = 242U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BEYXSREXJRSINYDYWRFIHOTQRWEQPMFKDOGCVBXIZKVBOVUJDASOHMATUAMCKQATCPVONETPEJNLCUEOFSZALARFHSHTTTMHFYLFZLINXQXMJDBXJUKNLWLMJMEETOXKJMDVZTCIPHLOZFPYNVQDRGUWZPHGLIQRYQHGRCCR");
    tmp_msg_0.description.assign("XCZOOTUCBUIYDJMDOQRIIEZLZEHWWKJXGVDVEDGUXPKBJFLHUSJGJWLYSLWVVONFSSSJIMLEIC");
    tmp_msg_0.vnamespace.assign("CEIDQYWLHCIGYWRINBVTRWTCIDKHYVFYINPXANVTKAYNIAAGOFCMAPBSTZKKUSOMMSSJXJPKHMLFCLRLVTZQEIJTLODUZNNBURCEFBTRONSFUPMQOZPPHXZSXJBUIXJFQKBKOUSGESDXMGXRACNKLEDQGTIHFVBIDRPGJDWQZQQQKHZCQCOPLJBGHVLYGPVXRJAMVWDTHEWLUNZEPXODAEKBAWFSLVVXHYWYFJREEUGAMGOBUMZOUFRYSW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ALCPSMZGPNQIIFTUAQSZEZUTKHYRSLJNZRBKZXERVXUDLLPTSTBJQMNKDACJVBFJQVMFDJIHGGHSWPZVVSZZYTHOPJVROXOANPLRLWYEZSGUQEFUBLVAWRBDGWAIGNYCNKOYDINW");
    tmp_tmp_msg_0_0.value.assign("XYATJLMDEFZPUXKCVZLUMHEQUCXANCKGKRVVWTIXYLUWTSNBORMOJRWMWZTGSOEVQPQXNZHTUAFOHBOOSPRSUTIARVKQVTWPVJVHMIRLE");
    tmp_tmp_msg_0_0.type = 90U;
    tmp_tmp_msg_0_0.access = 251U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZGKASPBJBRCNEJCKCVYGXDUIBMUSHZGLAMVAAVSLSFIBGONZQMJUELEDOFDWAWPKRRVCPQCGMPZBNVTLJHJWFCYBHTSPOKNEOSCDEQTKPNGVRHTOXYGQQYTFMUDDWWUNBRXHTDSILMYVMAZNZQPZMGOJJHQCXWTLPRFXVKHHLEYGCXEDRFUPIZJFPMNQUKRSTIEDMOBNJIGBWALIKIOYZLJFXUAYENUW");
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
    msg.setTimeStamp(0.47519688363434487);
    msg.setSource(47216U);
    msg.setSourceEntity(4U);
    msg.setDestination(54180U);
    msg.setDestinationEntity(228U);
    msg.command = 71U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LPWCYVZUITIIGXDJEBFBEOGFLBKHLNOJSCRHUZMWYGEJXSLKHDTSEXVHQQMTGNNTVSFXLV");
    tmp_msg_0.description.assign("QGETMFQMLDZUPDUHUCCWVGQMLJJKLMTMFXYXPURNZEZOVIYNGMKJORCIPHWNFNAPHOWOTYBNADBGTJIKDAKYENCVXSREDCBLDLBVUITFXVFFJSXACNTXRKOKEFYKBZGISVSDLMSYZAKGPRWDPBEJLARFQWUERSSHGJCHVNOOPYZXTIZLMVYQCQUWWFIQHNBUBYSIGVDDAWEQROEHPNXZPMWSQCFGOAIBHOVRLKAPSTTJRXEUWTLIUHJAMGK");
    tmp_msg_0.vnamespace.assign("EYQZINFROBZXPJYTULJXZNGKRQLLSYFBQYMHUVGSGOINNUWDXWAAPOJYAMVUTYORIWMUSEFBSHTCGKQMVGROLXJSHUUYAVGQCLRSKMF");
    tmp_msg_0.start_man_id.assign("BMVSBXWCXOROIIFVHIPLRUNFXEWMESYZYCRIYBGQAIUUVGYRVUBNJKFXBHSQISLVGUQABJMLAHMEHZQYAHJDVEMACPSNLFEMNLSOSDMTZHWBAZVNPDQWXGJOUCOAKIGPHVIGYSTKRBOTYNTUZRCJPDZCDMRKFTQDLTETLSXERAJGVOFCQQPSCXWEQPLRWWOTEDIECADUJBVPGFYPKFLZMKGTWCTNDH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UQSPMOVYNGWVWGKSPLANSKSUVYDEEHAZMYYLQLYFIJGJABWGJEUGFLCPIWIOOCQXNRDGZFZCWYCDZSDLCJBSRKTGDIEYXPGCQIHFLAAFKQBXVWTTBMHVHSRKWTONVKHZNMSEQXLXPRB");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 21317U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.8007766784892953;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9513019857486822;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9121672598754239;
    tmp_tmp_tmp_msg_0_0_0.z_units = 122U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7080685053736356;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 17U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("SIEQUUTYPQJCUIOOOPRBACKYVZVNPWZBHFKSQINFYLISNYGQLQEVADJOXCIGNFAGNLVSRTRYBWZCBPZLDTGVWXMAUBFSGDLZMQXRXRYOMASUJHEDHYMSREDNNNCHRBOOAINIWJFRGYSUMLKEVXXQWGTBKDMWZAHDUWOWCXJGZXCHIDESHMLRHQFUPTKOVEHEEFSLFKHLMAPXGOKVDADJBVBRMPZTYCUBTNQPT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 65U;
    tmp_tmp_tmp_msg_0_0_1.flags = 86U;
    tmp_tmp_tmp_msg_0_0_1.description.assign("OJXKSJJBOKQAUJEG");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UOOIIMBKPUTGWQSTWXKJJNDOLLZNRFNDZQQJMAVZUHRADCSPENDQHTEKTFPOBLAZPOEUCAMIOIDOXEQMBFYSBPQPGMVDQVTVKIKPHGZUOFAJTMYDVGPCMSWXFUUNWNLHCAWRWNWREGCVNVSPX");
    tmp_tmp_msg_0_1.dest_man.assign("UXNGKERNXDHMSALIAMWJMVACBHIHIPOHHCNXKRZLTXXJEQZLSXCTCBLTWQQKSVHF");
    tmp_tmp_msg_0_1.conditions.assign("JAQGLJLIQRYHUTBUYQXUWIHEZYEKHXHKSSFOIDJRGOELDIQVFAMOFPCBIWKIATVTMKNMXWJXYRENLGHSDAYCEWLAQDMZNPXUXUVPJ");
    IMC::Collision tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.13713862251893538;
    tmp_tmp_tmp_msg_0_1_0.type = 57U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.9963441347263242);
    msg.setSource(23482U);
    msg.setSourceEntity(115U);
    msg.setDestination(13084U);
    msg.setDestinationEntity(141U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QJDBIEZVCBOJOMAFFHQEGRENMYCFWRUBPXOGKUMYLRDQIETPXJRCWWJABAXJYWMITLDQDLYNVUQRZLAAUYAGJQSNMT");
    tmp_msg_0.description.assign("KYARRCOOIZCRAVMPZVKSYGZQQWMAFEVNWNRITFPFZTEGQYJXCLLXCLJVYQKTDPJKQOUSTCMEIWSFIVHHVGPZUNCPNAGOLWQHDUNYAKSAKXUUKJEUQWOHOXHTLFMJYDIVRONWXHBREWUEITZGLTREYMNQWBLHIMZBRFL");
    tmp_msg_0.vnamespace.assign("KRMPJDBNBUQLECNRXHTMPDZAJNOCGDSWGGVAZCOLYLHGXWQDUEAOKZWNWWIZCZQSIJRCIIHNKAQBFOQVDJPCDKMADGXZHLEKTLOAMTRCEVUHNVYGVRMVWLLMOEOHYBAESQQIKOYSRXZFBLVZAJSHLDPQGMHFXGWUFVUCRPHREUUDYIXGWEJTEYBIZNBSPMKBTBSTQNKVC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GGHAOOCHUEMFFFLNGYEVQJRESPSXHUAKDBFUJSXCAQLSWWVJXNNENCZKCGZYQEODKFMKPJIUYFXSQRZZMXFRQJQWS");
    tmp_tmp_msg_0_0.value.assign("KVQMUYYSFBDTDLIGTXMRVP");
    tmp_tmp_msg_0_0.type = 100U;
    tmp_tmp_msg_0_0.access = 102U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YRPXFZRRTBDGXRDGOQNAQXMRQHOYPWMZBMUTIAQBGDRWWHRPX");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("OSJHLKOHPYNIGZDSKKTMMWHNBAGYRDUNBOWINCPMNVEWMIQAMCZBSVMYFHVGQXDWJVWUNSSBYIYISGALGTWHYSXRPAECLZEPUFOMEIOEJTWIWKRPKUDWBKRZCICVLZQEAROXZKZPHHDDCXKFQHLBXOOCHXINQGVLSBVCQWUGTPVTGZSRMAKYEGDPIJUFCFJEJXUQABVTSTRFDFETCDYLMAZUNXGBDYROAQUHAZXJVPKMRJNLLFTNQFF");
    tmp_tmp_msg_0_1.dest_man.assign("JIWRTFEWZILJXPITFLQBMR");
    tmp_tmp_msg_0_1.conditions.assign("ZWPNSEUPRAJFHXILBOAZYWOTTZTERPNAANGICCYSKZVLKDYTRYCLUNMNKYYGOFLVXDDFQPATQVVSGHIXRDMZYKEYEGOOVTZFSJCNIAHFXROAPWJKUVCMTWOOQAFKHNBXWSHOKCSSCVWKQCZGZLJMMEHGQLUVSQEFAHYENGBHSBIRTMGF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("BNWZBMTHMP");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("ZFHSTOEDEPRUZZOKFIIWADIVJAOVHWLSVYWMDVSAVAQOKDBMIPLWVXTRGMLCVTWMBNVTFQHBFFNINGQSITKPCEHOAXDUXFSGAELSZDKMBYEPBABJRULVGXRSATY");
    tmp_tmp_tmp_msg_0_2_0.value.assign("HXQUCKOWWQLRYTTPSCHBBEVENVJCZWRUFZANMEDYAFDKGNSLYWBRDDXUIFNJKQNWK");
    tmp_tmp_msg_0_2.params.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.6050208525264121);
    msg.setSource(47781U);
    msg.setSourceEntity(107U);
    msg.setDestination(13196U);
    msg.setDestinationEntity(72U);
    msg.state = 54U;
    msg.plan_id.assign("SYQBZKAJQYDURXZQSZCHGMNPFZGPLPTMMTJHRHIOUUKFKFBDROCLXWJESFKLEBTNMWEPVEDKROLYTNTBAGWWDUGLNXYQGIGLNVDRAFFONEVYSHJWRYAOYIXMRWCJCCQBSHUILZWTPBGAZKPKCMOBGYCZWQUIKAXUQVFUCXMII");
    msg.comm_level = 25U;

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
    msg.setTimeStamp(0.24353273792279206);
    msg.setSource(4623U);
    msg.setSourceEntity(237U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(250U);
    msg.state = 99U;
    msg.plan_id.assign("UBXSDBALINSZYUCSVLDZHIVRFDXMBGUZTJCEGH");
    msg.comm_level = 56U;

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
    msg.setTimeStamp(0.20517151998345606);
    msg.setSource(3386U);
    msg.setSourceEntity(210U);
    msg.setDestination(43939U);
    msg.setDestinationEntity(34U);
    msg.state = 208U;
    msg.plan_id.assign("TJAPRKOJZIACWIDOXLPVYJESDIYZVQLOSPRWROJXIASSTQMYHQWMBNMKSXIEQPRMGTSAEQBZCXKSCLGTFGT");
    msg.comm_level = 53U;

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
    msg.setTimeStamp(0.9631559662820187);
    msg.setSource(58890U);
    msg.setSourceEntity(88U);
    msg.setDestination(56212U);
    msg.setDestinationEntity(148U);
    msg.type = 74U;
    msg.op = 214U;
    msg.request_id = 10581U;
    msg.plan_id.assign("OZJBYSCDLCOLHHMJSIIMPVARNFMTSJKGHZGZNORFHRHBZORMBHXUEPPXADAEJTNLBDRBQPHCLAUKBNCJVEETTVULFKKPMFAAHEOODMMWLWWDIZVAWTEBPXAVOFYWDUP");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 194U;
    tmp_msg_0.lat = 0.6385852273602347;
    tmp_msg_0.lon = 0.6402727324241761;
    tmp_msg_0.z = 0.2861926458609624;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.pitch = 0.6756339663490843;
    tmp_msg_0.amplitude = 0.807819706416727;
    tmp_msg_0.duration = 4257U;
    tmp_msg_0.speed = 0.7270497991466692;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.radius = 0.42789753177477885;
    tmp_msg_0.direction = 141U;
    tmp_msg_0.custom.assign("IZVPTCZYVURLCXLPSCAQMTAGYGVBBCRFDFEUMBXTOHFDDKOBBODDSQFEEZFTNAANRGZAKODNYGNQLWMKCSXEHJNZAPKTZUONTKHCXKXSZCRFJJRORWPXUJCDIVOOYCMBMFHSJKFSBIULRLYVQEKGYKPWMGJIJLKTMAGUQJVIJSFTUHXMLDLQIRSPBYINLWQHEUOWBINSWVEPZUYRAYCTDWWMBT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BPFBYFRLDUINEJOGAGRKXVWGLHTCVOBUNPNAFBGZCPOKKESFKKAYTOCVOHJWEYOCDSDNGWXQZWORYISIHLPVXIXHIBZLZVSZJKNXSLPMQTVMJEACNMZUOMYLQHIDVASHZNJVGDAUCQURFCNSDRMDUUHJLQRZYYTXFXZEHQITMQMFRKGPQTSMYVRWSICGTLXBYTU");

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
    msg.setTimeStamp(0.2986094032627511);
    msg.setSource(53501U);
    msg.setSourceEntity(202U);
    msg.setDestination(56860U);
    msg.setDestinationEntity(0U);
    msg.type = 17U;
    msg.op = 250U;
    msg.request_id = 28061U;
    msg.plan_id.assign("ZOXTKOZWZBIMXYWHIZXWIKNAYQLUGRKYCIDFCFOPQWXQZDWOVAMVLDYGFSNNPFXJJL");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 16U;
    tmp_msg_0.x = 0.6947442279296014;
    tmp_msg_0.y = 0.5272994589342569;
    tmp_msg_0.z = 0.6470793393940155;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DBSKJZMRPOVUWSFKHYLDKVSWJHFMAPEXHFIVBFAUZJEUGLYNWRVWTSOCP");

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
    msg.setTimeStamp(0.27156626901773906);
    msg.setSource(56567U);
    msg.setSourceEntity(135U);
    msg.setDestination(50100U);
    msg.setDestinationEntity(190U);
    msg.type = 191U;
    msg.op = 64U;
    msg.request_id = 16644U;
    msg.plan_id.assign("SIYXPHKFPSTTMUZRYTCIDJLKUXNILPNVTEVCVGLFASTUFGHKILSLMNHWISHGGTXJDODFADFOKJEYNZTAZVJYKJDPESMYZEVHRJVXRNZYRRLDVOMRARBPWIQVURFATUBBEEKPKYSEPGSCBFMWNBUZQULJXHQTFIBXLPDZODOSCOWFGHZCHAATWWXMOPJBQBRZGMCDLWNGSKBMA");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1132412285U;
    tmp_msg_0.destination.assign("IQRCXFQSBDALWYPVUWLWUTZFMJNNIOJTBGSYEQQLXDPROZMJQVMLRGRACTQILMNLKZUISARHBEPEGPSORPKOASFGDEGZECTQSWFBJGKLIZBEOTLJCRVVEJKPFNQYRXYSBUYASHO");
    tmp_msg_0.timeout = 27035U;
    const char tmp_tmp_msg_0_0[] = {-108, 57, 0, -116, -97, -54, -101, -45, 107, -47, 40, 52, -42, 79, -107, 63, 4, -99, -25, -106, 46, -113, 100, 111, 46, -90, -68, 25, 108, -119, 55, 35, -100, -28, 74, 60, 50, 89, -94, 45, 24, -4, 86, -72, 116, -88, 99, 122, -49, 98, 3, 98, 72, 70, 66, -120, 93, 121, 23, -125, 118, 75, 101, -82, 104, -78, -119, -66, -108, -98, -107, -90, 119, 70, 40, 2, 71, -19, -45, -122, -42, -88, -70, 20, -30, -67, 20, 98, 114, -80, 123, -60, 88, -114, -28, 125, 19, 121, 95, -33, 13, -46, -15, 17, -126, 97, 78, 108, -124, 52, -42, 120, 27, 55, -40, -38, 113, 23, -71, -19, 123, -8, 111, -122, -63, 111, -105, 121, -3, -106, -66, -122, -42, 18, 79, -90, -86, -81, 103, -85, -28, -83, -125, 125};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPPVKMVZNAIOGWBYSULDJZTMOXDFFUJXRXYAIWNOHGDYZRKHEFDIFTAHWNIMXVBBKINZLIAGSCXQARSITOJNEHLZMEXVFSCNNSWUAVWEIQQBOAGKBULKJJUFZUHLCNWJCKZTAMSNDOYCJKYVBHIPAWUYQDCNWMGDJSLYFPHYQYRJTCTQKCRLEVBUBRTEQCPO");

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
    msg.setTimeStamp(0.7778680012538939);
    msg.setSource(48819U);
    msg.setSourceEntity(205U);
    msg.setDestination(48716U);
    msg.setDestinationEntity(104U);
    msg.plan_count = 53430U;
    msg.plan_size = 3411421269U;
    msg.change_time = 0.3389959018811963;
    msg.change_sid = 2578U;
    msg.change_sname.assign("AQYZIAGKLMRPJCNERQSRWYVLHBZDSAARMOAAMZXZJGAIBCDMYEBYKFGRTHPWEZRUIZOLPTAXWCFNHHUXLHNOQJ");
    const char tmp_msg_0[] = {-76, 15, 33, 31, -50, -37, -15, -109, 51, 8, -16, 47, -96, 25, -13, -50, -81, 116, 65, -86, -19, -116, -88, -50, 108, -15, 54, 87};
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
    msg.setTimeStamp(0.6164207856981898);
    msg.setSource(43514U);
    msg.setSourceEntity(50U);
    msg.setDestination(17928U);
    msg.setDestinationEntity(177U);
    msg.plan_count = 35014U;
    msg.plan_size = 925899113U;
    msg.change_time = 0.9048530111746393;
    msg.change_sid = 4982U;
    msg.change_sname.assign("BWEIWVMYCSSWLTLUANVPKTVGEGJCBDZSNDBGQXNYHOQWTZQCAINMDGFTYDSFKAYTBFPXDFUHCPENGHVGOVXMUCVRXNTOASPSMIJUIEZKLKQHTNIOFXPVYJUQGMLWOKHYTM");
    const char tmp_msg_0[] = {76, 0, -2, 2, 94, -7, 87, -1, 102, -126, -91, 12, 24, 71, -124, -88, -100, -7, -110, -43, 70, -71, -44, 80, 82, 52, 110, -98, 58, 120, 3, -113, 22, 81, 0, -98, -93, -126, 104, -63, -3, -125, -44, 114, -15, -15, -35, 75, 75, -52, 75, -67, -100, 62, 76, 67, 10, -56, -6, 33, 35};
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
    msg.setTimeStamp(0.35741044920773013);
    msg.setSource(49095U);
    msg.setSourceEntity(157U);
    msg.setDestination(31021U);
    msg.setDestinationEntity(49U);
    msg.plan_count = 59234U;
    msg.plan_size = 601106888U;
    msg.change_time = 0.9887015635217898;
    msg.change_sid = 37036U;
    msg.change_sname.assign("RYEMFWFJWWQXSVOGZYVRPPBJQKFFMZL");
    const char tmp_msg_0[] = {30, 121, 3, 114, -87, 16, -112, 72, -98, -17, -53, -18, 114, -91, -61, -85, 58, 10, -105, 88, 84, -66};
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
    msg.setTimeStamp(0.9275472395726546);
    msg.setSource(53631U);
    msg.setSourceEntity(77U);
    msg.setDestination(45912U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("IRHIAGNWKAHADFICOUPDNNWVNSSTFBCSJKLLKTRMIBEJROHQQJDBVBBWSZULPJKUZEFIQFXCTCDBSMNQSXOFM");
    msg.plan_size = 53038U;
    msg.change_time = 0.22950045071185288;
    msg.change_sid = 37922U;
    msg.change_sname.assign("FVYPALUUVERUTBFTCYOWQTSBISKGEKLOQSG");
    const char tmp_msg_0[] = {-64, -80, -7, 81, -73, -5, 90, -90, -47, -40, -34, 23, -96, 119, -63, 5, -52, 95, -68, 85, 25, 67, -55, -46, -11, -9, 65, -66, -38, -79, 24, -41, -107, -50, 72, -114, -36, -128, 11, -110, -60, -119, -84, -90, -103, -116, -15, 8, 21, -51, -16, -6, 119, -17, -9, -37, -27, -30, 93, -1, -122, 111, -60, 9, 109, -2, -54, -69, -125, 45, 100, 0, -13, 55, -109, 62, -63, 4, -57, 95, 51, 123, -12, 64, 100, -67, 104, -124, 125, 116, 52, -1, 61, 4, -73, -98, 97, -115, -17, 121, -115, -3, 69, 110, -95, -73, -56, 29, 74, -4, -42, -112, 116, 123, 68, -40, 92, 98, -95};
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
    msg.setTimeStamp(0.7481231775283064);
    msg.setSource(27274U);
    msg.setSourceEntity(40U);
    msg.setDestination(27491U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("WWFWSCKJQGVOBTFAYRAZRAYHTJDRABWDEOEECCOGQZVSPCIEHGLAKINLZJSBLGLFSTMIUGOCFQYKXAHNCNYWAQUMZHBMPQRKWLHYLVROSXLGDITXWMDKJNRNTUMFLZBPJBKEUUPTYPFQESVIYXDEARCVEVRVKDMJCHLNKYVXGTOFHWMIJBDVBNYGNSUKWM");
    msg.plan_size = 35743U;
    msg.change_time = 0.1094750166648275;
    msg.change_sid = 28477U;
    msg.change_sname.assign("WJGZVYVAHKWQDTXSQFGGM");
    const char tmp_msg_0[] = {100, 73, 97, 119, 75, 81, 23, -22, 17, -110, 126, -46, 79, -97, -1, 76, 46, -79, -51, 121, -53, 96, 67, 96, -60, -121, 27, -80, 73, -60, -19, 38, -36, -64, 92, -27, -32, -4, 50, -78, -63, 126, -62, -34, -54, 84, -94, -123, -19, -45, -66, 61, -86, 62, 41, 97, -39, 126, -70, -16, -10, -46, 87, -59, 106, -5, -90, -45, 45, 6, -23, 64, -116, -122, -52, -14, -104, 111, 5, 52, -6, 71, 27, 28, -122, -50, 14, -64, 89, -96, -106};
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
    msg.setTimeStamp(0.4322774135380687);
    msg.setSource(50451U);
    msg.setSourceEntity(119U);
    msg.setDestination(4386U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("SEXCAWUOLLYYQFHDAMYGPCPPDEYPFOFIQGKHGTUQBZZPPASTPDFNEMXPRXQVRWMTBIAAMRXYABLXNYBIQHJFKRVIJIQHJAHOHVXYJGSWTMNHSERVHFCRMENCCDNNWIMETRMRLWZOXUFGLXDZZFQMJZDQUCDKWCJKLOKVOYWZUTLTSKCOJSVDQXIIWKBZVRSNVUGKNOTBLLZWBUOQAENPJKVVGKFSYTHEEFBLJH");
    msg.plan_size = 7598U;
    msg.change_time = 0.22452400375619308;
    msg.change_sid = 39826U;
    msg.change_sname.assign("YUUSFDFSAMJUNORGQCCVWMEOTDUEPULKXOREFHDFWROGJCMPKVZQZNLPASKZVOTRISLOSNPITHMYHSUINFILRLAUIJ");
    const char tmp_msg_0[] = {38, 106, 93, -41, 107, 8, -25, -3, -2, -98, 83, -20, -75, 101, -43, 90, 70, 41, -99, -125, -38, -20, -8, -29, -76, -114, 20, 87, -45, 61, -110, -105, 34, 126, -36, 58, -4, -21, -4, -8, 59, 1, -40, 102, 66, -12, 63, 16, -40, 90, 40, -43, 77, -83, -66, -73, -118, 85, -102, 47, 118, -22, 52, -1, -111, 8, 124, 126, 29, -19, 123, 122, 93, 3, -89, -67, -27, -59, 35, 120, -114, -31, 54, 44, 57, 87, 57, -97, 111, -32, 110, 51, -45, -49, -123, -71, -51, 63, -20, 46, 95, 93, -85, 96, 75, -31, 117, 56, -105, 46, 74, -29, -87, -74, -46, -22, 66, 47, -85, -32, 106, -22, 109, -80, 88, -92, -99, -69, -77, -112, -128, 65, -39, -81, 115, -7, 48, -7, -78, -75, -74, -16, 108, -6, -60, 25, -34, 91, -6, -126, 74, -105, 104, -66, -27, -62, -104, 117, -11, -55, 28, 25, 90, -80, -111, 79, 74, 88, -54, -84, 103, -54, -80, -60, 52, -56, -106, -123, 2, 71};
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
    msg.setTimeStamp(0.9737634036625316);
    msg.setSource(19872U);
    msg.setSourceEntity(89U);
    msg.setDestination(15738U);
    msg.setDestinationEntity(253U);
    msg.type = 152U;
    msg.op = 127U;
    msg.request_id = 19090U;
    msg.plan_id.assign("SMGVHUTLEQZJXJUIHRKYWCLZZJXJONTIWWUGVJSQEXSSVAIVCDZYBVTKPOXPDTLDJHFPJSOBHIPHXKXRBWOEQLEFDAKIAWCRGRNDCGIHIEAHFAUKEKZFQYQTLESLDBCUVEWZKUSNMMCYOUQQQZBAFIAWONKTWGBICNOZMMJGFTDYVOENPMLLYYRXQF");
    msg.flags = 17463U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("XPTJWEZYYBVIFYQAREXNQVEMAKKTXPDCPTHHREMVCTCDFHMXNOSQGWRJRQRJIZTVWXLWZFBYTNPASKDNQCESGLIFYGLXNGXHK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JRMJLNOGWPMCKQQZQENUFTBBYQNUNQDISAFEPXAPHFQNEYRUZSKWDXDBKWHDZPWORWFOBKXGZJVXZLLZMDMCHCDNYYSSGWCLPHBASHRAEAG");

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
    msg.setTimeStamp(0.8507169237628505);
    msg.setSource(16614U);
    msg.setSourceEntity(192U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(28U);
    msg.type = 36U;
    msg.op = 86U;
    msg.request_id = 18324U;
    msg.plan_id.assign("SSZKPNKEPWLHCJNTOBQERPFWALOBTZDVTOEAYBGCIKGQKRXCNQYDYQYBIBGFZIXYKAGHSVDGHZYWJFUPMZMACDBKEYMPJADBXTBJIDFVNUJSDWXUNFCSPUGROC");
    msg.flags = 60457U;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KBTLBXMUGROHFH");

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
    msg.setTimeStamp(0.21531052312106802);
    msg.setSource(45052U);
    msg.setSourceEntity(33U);
    msg.setDestination(59500U);
    msg.setDestinationEntity(216U);
    msg.type = 113U;
    msg.op = 61U;
    msg.request_id = 34208U;
    msg.plan_id.assign("BAUAVKSQZNYNBRFSEIDRUDPH");
    msg.flags = 13043U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.7440422412317926;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RKAWMHETGAFEDAWWESGTOXINAQGCTFQMGTJZLDQHZUXIDSOAXQUVPZYDDNBLIL");

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
    msg.setTimeStamp(0.22418390471789362);
    msg.setSource(17546U);
    msg.setSourceEntity(159U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(241U);
    msg.state = 136U;
    msg.plan_id.assign("YMNBKBXCPFWNKRLKNLQLE");
    msg.plan_eta = -1179932730;
    msg.plan_progress = 0.30318633741237944;
    msg.man_id.assign("EPTRWXQVDCNDIVZLUPIVYQRHBUIQOJGLYXTUKAJYLDPRCHDDAIYBXNPZIVCNETJMMFZELFYSGUQNWAXCMEKGHFBSKVTKFZEXAMODKANBSUONTTRGXECDLLNZKIEPWXCBZVEQZXRRTOYAHDKYHCW");
    msg.man_type = 28129U;
    msg.man_eta = -1292926106;
    msg.last_outcome = 229U;

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
    msg.setTimeStamp(0.8336609626695473);
    msg.setSource(48015U);
    msg.setSourceEntity(201U);
    msg.setDestination(16069U);
    msg.setDestinationEntity(151U);
    msg.state = 41U;
    msg.plan_id.assign("OZUVXWGNSZUVKXBIXUEELXYJSAVYBWNISWEIDODZFCPECIKRTFQGSOAHLXQNIXWSNAHHGQYYJNJTISUOKRVLMUTDBZKMHTRKCSCAYMOLPCQDVALEMMTXPGTMGZGQEIJLMORTYYDBQRCPKFUWKJEQZCFXL");
    msg.plan_eta = 143461522;
    msg.plan_progress = 0.20653246925702984;
    msg.man_id.assign("SIRNBJTQCMYBFZADEVTOSOFUWBKXWLWSEHULJRMGSGQQRGOKPDAKKTGSIVBBBCCHMSJZIYOLJFSZKKNV");
    msg.man_type = 17373U;
    msg.man_eta = -1651451089;
    msg.last_outcome = 128U;

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
    msg.setTimeStamp(0.219952963820375);
    msg.setSource(51114U);
    msg.setSourceEntity(71U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(121U);
    msg.state = 234U;
    msg.plan_id.assign("KJOUTIKIJCYCJKHOEUSXOKETDTRWMTAZKWNYEXDCNVPQGLXUEVFVHZYZOWH");
    msg.plan_eta = 1000441921;
    msg.plan_progress = 0.32225098425979515;
    msg.man_id.assign("HVXOOBTJAQXVMRXPIFHWVDKGBGBRMYQRMWIFQIOJUJMPZGNGESMMKSVYKXUQOGBNTTFKHWTQFOJNIEOXQVRYTBREWVINDBJKEJATHCDGTZIPZPEFZSVWCXPXAUAYTCHXDUFOTCNFREELAAWDSUMLADGGGWQDSDZNDNLBHLMVISRQJPYZPECPHAKYCBAUKGKJSK");
    msg.man_type = 27121U;
    msg.man_eta = 351960668;
    msg.last_outcome = 81U;

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
    msg.setTimeStamp(0.8916275647229951);
    msg.setSource(65339U);
    msg.setSourceEntity(30U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(192U);
    msg.name.assign("MESCCWDTMPKRW");
    msg.value.assign("OGSSDIEFZYIOFTPURFHCLGUFZWWTABVICSGWIQXESKMVWEZMRJTDWLDAXYEGGHPWBKRRDZAXVVPSRYEQIYUQNRCVLBJFEEFJVLFAHMRUJDNSGDHJNKGGKUPSTIQHJOICUVOAXTMYBCCATXCDZPBBAERLYUKHKTEZZIQZLGL");
    msg.type = 132U;
    msg.access = 190U;

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
    msg.setTimeStamp(0.31093996283425784);
    msg.setSource(50376U);
    msg.setSourceEntity(27U);
    msg.setDestination(10359U);
    msg.setDestinationEntity(207U);
    msg.name.assign("AIVROCZJRPTQLZZSCDEXQMPAWBRRSEDBJWDAXCCUBJFFMHVMIWHXOKQRTCRBVTCBWVOLDSTGVAGJFDWFGLQPGQSONTLBYTUUKCOKHOAKKYSYYFIKEZJHGHVQSWLMQYZXKZNDHZB");
    msg.value.assign("UIDHHMPXNRXHPBUIJQRBVRVZASMEFNVFZYVJHYWYOBSOWKTVCCUVZRXTUXQQBTMP");
    msg.type = 194U;
    msg.access = 104U;

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
    msg.setTimeStamp(0.04027053706747186);
    msg.setSource(56905U);
    msg.setSourceEntity(127U);
    msg.setDestination(2905U);
    msg.setDestinationEntity(116U);
    msg.name.assign("EDZVIQUTDGEJXZLDIRPRFPJDCVYABCRBTQWPVMXKRNJEPAWCEUXMHQAIUIFMUGDWYTAAIMINUNZLOMSEQGRQRYRUVOJQIPZZGOLNLNCVTHZVJJELXCXCSQOGVRGNJXSCHMPXAFSKNZFIWZALNOGEMJUDEDOZKPRASSWDYXAHWXEUTBOTFHKBKWKUF");
    msg.value.assign("BBNEYFNAAKIBGMTUQPFNXHCKVMOFZEHACUSRYWPKFHRENKBZJWZTFLAYNHYOKISBTUWNMDSRXJMILOGQLHYKERUVLAPMWAFSEPIPCEJUJIOIKZXHMTYYFNHQADQCECXTDFQJVLYOMTWZKICRD");
    msg.type = 120U;
    msg.access = 155U;

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
    msg.setTimeStamp(0.639884961671261);
    msg.setSource(49591U);
    msg.setSourceEntity(251U);
    msg.setDestination(40859U);
    msg.setDestinationEntity(212U);
    msg.cmd = 171U;
    msg.op = 82U;
    msg.plan_id.assign("MNQNULOKCRAYNBVSHINCSQOPFJGESXZOCDMBXMLVASKGPFIJDCKRAWAMQMATZPFEHKUYZPUYCDBSWSTREIMFLTGXRNEBDKJWWGVOPGBQGCBYUFJVBPIZAITSHWTOBZQORJFNTEWDMVCPUFSZRJILZLWUHPYKJGHEXYQLKDGQYKTWENHXHDAVIQLEBYYCKVRPCWAXOPINIKMUJRUODRZUDTNSI");
    msg.params.assign("IPMKKHHNMPTUCVNLMZEFLUNOAFWGKYXQFMQQPSLEJGYTSBWTQJFWVBWMO");

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
    msg.setTimeStamp(0.4061227870316684);
    msg.setSource(9744U);
    msg.setSourceEntity(128U);
    msg.setDestination(2633U);
    msg.setDestinationEntity(240U);
    msg.cmd = 13U;
    msg.op = 53U;
    msg.plan_id.assign("FTUQHPJJAWSLUDXHVHLVPNYDIJWWPZFUISNYDWALQXDNFSUFPZNEQKDDHLIHCEQTUGBFHZBBWIGZIGODREMQOEIBNVKCFYUARWOSCXEWJONCCRTCZMAYUBGNMRPWLEYPMEFHDXSFCBIATTPYOJATVBRAORHKRKUKTXIGQESSJVJPZICZQTOMAKDQQZHCPXEAVGMKHMNNYXFXVJMOLKSBOKUGLWJZJUFYLBSDVCBMIROSGVZXNYQLPTGL");
    msg.params.assign("WDHKRXLQRAOZBXJVORXJNWVOZIKFEYASOWVXCPCUHPCNKPIRBXIYLKHGKTFWUUVVCQUPGDTIJAYWEAMABUSXNNNNFZSJJD");

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
    msg.setTimeStamp(0.2797959306593246);
    msg.setSource(60575U);
    msg.setSourceEntity(181U);
    msg.setDestination(48552U);
    msg.setDestinationEntity(112U);
    msg.cmd = 40U;
    msg.op = 207U;
    msg.plan_id.assign("PSAKUUGGDBK");
    msg.params.assign("HXRNUTXYXPRFLLKUMHNDVKUCFKNFTRDLAZYIYUTACBGPRJUXZEKSGQQXBIELXGONOPAOLUWWZFOEYIUGMSTOGQBPGPWIJZSMEGBOCHMLNVEVFWNQVHOBTITCZSOSQDWVDDFMHADYVWSIMT");

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
    msg.setTimeStamp(0.7517663436375681);
    msg.setSource(64741U);
    msg.setSourceEntity(215U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("JHNQLZJRSIILMUKYKIIOFDUDJPFWGRATXEVMXEKWEAGQPLHWSHEOAHZPAYPXDOSTFCMTXFAOASZV");
    msg.op = 164U;
    msg.lat = 0.21257937193817367;
    msg.lon = 0.6322342976423991;
    msg.height = 0.9324457094794529;
    msg.x = 0.7828652692208902;
    msg.y = 0.7434219872900003;
    msg.z = 0.10694724036352066;
    msg.phi = 0.23061312615898388;
    msg.theta = 0.27367195138872047;
    msg.psi = 0.7189766077905393;
    msg.vx = 0.22761049287881618;
    msg.vy = 0.20381415688059845;
    msg.vz = 0.6071911951905535;
    msg.p = 0.9118682187055565;
    msg.q = 0.5147434786639785;
    msg.r = 0.8218890301865187;
    msg.svx = 0.6656447898960403;
    msg.svy = 0.620181306068349;
    msg.svz = 0.6564231129388058;

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
    msg.setTimeStamp(0.8485993199217107);
    msg.setSource(8840U);
    msg.setSourceEntity(184U);
    msg.setDestination(62522U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("ZSWDJZARBUYFNCXTQKUKSAGVLUMPMVCREIGEIZAYDXTBHYV");
    msg.op = 206U;
    msg.lat = 0.4580984839414668;
    msg.lon = 0.1019316206515346;
    msg.height = 0.8095645994056123;
    msg.x = 0.21110772654920462;
    msg.y = 0.45659532372316347;
    msg.z = 0.3520745488621949;
    msg.phi = 0.24459455901342597;
    msg.theta = 0.3251405835513571;
    msg.psi = 0.38738324918363565;
    msg.vx = 0.7571486132553549;
    msg.vy = 0.8083090616966166;
    msg.vz = 0.14533810167759964;
    msg.p = 0.7496779676986366;
    msg.q = 0.683228529882946;
    msg.r = 0.7425574521510807;
    msg.svx = 0.24731163973374415;
    msg.svy = 0.4917826842817633;
    msg.svz = 0.9504529023450918;

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
    msg.setTimeStamp(0.3076692565989997);
    msg.setSource(12252U);
    msg.setSourceEntity(7U);
    msg.setDestination(40532U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("WRITQPNAETOWZGBVEDGMZSXJQSNFVEXOTFWZUUEQVWRYYAEULVEOKYEJBDY");
    msg.op = 78U;
    msg.lat = 0.005509122581086823;
    msg.lon = 0.465033522697326;
    msg.height = 0.26808929210044163;
    msg.x = 0.3735980285555319;
    msg.y = 0.9796456661101479;
    msg.z = 0.37926163592434614;
    msg.phi = 0.2791706256043185;
    msg.theta = 0.6589307580943087;
    msg.psi = 0.970825231846659;
    msg.vx = 0.2288120303222967;
    msg.vy = 0.0006733686350393064;
    msg.vz = 0.6242308472397032;
    msg.p = 0.181290367176133;
    msg.q = 0.43134173669769993;
    msg.r = 0.4165709348625254;
    msg.svx = 0.005455761289203553;
    msg.svy = 0.34524703516673283;
    msg.svz = 0.15722285439082362;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.008317505704533823);
    msg.setSource(15853U);
    msg.setSourceEntity(58U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.3528358345725736;
    msg.lon = 0.5910952404736941;
    msg.depth = 0.4419536572165478;
    msg.roll = 0.621558896444638;
    msg.pitch = 0.030854721151592268;
    msg.yaw = 0.8560140847437732;
    msg.rcp_time = 0.10575746945080244;
    msg.sid.assign("VVUNDBPTJVTNXSWBYPXAMCYZFUZUDPCWIAEGDLCYISQOLWGWKYKVSOIMQXAIEIZSAUSZ");
    msg.s_type = 60U;

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
    msg.setTimeStamp(0.7433048384179631);
    msg.setSource(47745U);
    msg.setSourceEntity(72U);
    msg.setDestination(55073U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.20250717278124541;
    msg.lon = 0.003637551417929763;
    msg.depth = 0.529501341042458;
    msg.roll = 0.8466942482383361;
    msg.pitch = 0.14198888173876145;
    msg.yaw = 0.14779157523128905;
    msg.rcp_time = 0.07015547400272892;
    msg.sid.assign("UWPQRPEPKSSXMLTHETRHJRYIYGLYNXAQXOCHRXQITYLCFCNYQHWRIUQSAZBZVDCHFLWSPWBNKPLTSDVROZGEAKYGBKVANBVLJVGRSJTDXDCTESLNKUEDWFSTUKVGOYLYQBJUZPADEMKFHSMBITOXAZWIJXTNEUMJBMDJVFMQLWHYUIMGYNNXRNFHDPTDGAMFIPZAENCMVWPPZJQFHDMJCRCKOGIELWOV");
    msg.s_type = 30U;

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
    msg.setTimeStamp(0.7244954334435952);
    msg.setSource(62955U);
    msg.setSourceEntity(35U);
    msg.setDestination(51514U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.6222751556146382;
    msg.lon = 0.8809391786453088;
    msg.depth = 0.38722387108314915;
    msg.roll = 0.7970331135322659;
    msg.pitch = 0.34415244315797877;
    msg.yaw = 0.5871787969295481;
    msg.rcp_time = 0.37347106003418284;
    msg.sid.assign("IBVRGEHHFJTWVMUYWPZRNJOHJIRZGTOWFEEREVUKLWNVQBWDWGWNNFSLSDEZKORWIBZXOFKPNMVBJBSPFBXMUKZGKYCZFSWVALCAMOGKFCIVUQIDZNRCXJPZOQVIBPHGUOPSINJLXRDVFEYDXRHMDPYUDOMKQGRWSBHTTCKLIKAXNDFUSTUTYYVYZEGGYOQFKMHQXAHMPPRSHQUCAUC");
    msg.s_type = 175U;

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
    msg.setTimeStamp(0.7520513566348168);
    msg.setSource(19864U);
    msg.setSourceEntity(99U);
    msg.setDestination(43124U);
    msg.setDestinationEntity(91U);
    msg.id.assign("QVNNZWEQXLNFSYCWFLNGIODXTIXUQGMDGKUJIABPYKDVQRXEBQBYFYHSAUZLKSGOKKMAXMOZIDEQBWWGHTADFLYHMVVBTOFSODHNGDEBMVKOSJREYHTPWBAEZFYMBHBZSANVCPZWIRXJYYAUTJEPGLPKU");
    msg.sensor_class.assign("PDEUAJPGWQDSEWKCNDAUFHYSMWKHRZRNVXKUBQXWIJLYKNRMIXVFNKRJIJMBBTWBRYZSIVHGOEQXOMFOJXWWUBCHTECDDTZGACSOPVBEDNGLGNEQAOMAOLHDCUHHWBPXGEMROSAHEXQQVGAAPOCFRRDMWYVECPFULSTWKTCSBYPZPBUCDMRLFOPTJYHMAYJLIGNKTI");
    msg.lat = 0.9541633088269358;
    msg.lon = 0.17144655453540525;
    msg.alt = 0.19690102775678986;
    msg.heading = 0.3492081821793732;
    msg.data.assign("QKPWGSIYOGGVBJZAPDUMIDOZZ");

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
    msg.setTimeStamp(0.9741129016364226);
    msg.setSource(51502U);
    msg.setSourceEntity(37U);
    msg.setDestination(30300U);
    msg.setDestinationEntity(115U);
    msg.id.assign("BUHOJUKJDNPLMILAFIMXPWNWPWQNGGZPFRKHUZGLUMOHGGBAMBCAAYVYILMXSNFKUCJVERWTHDXILQYRRRQCFFGVOPERNIYEUDAFNQWOTHPJSGZYNCBTAQEQVXORHYNJCHFCOHWAEEDWKMXMTRMBZUVYMQALXPFCJIKEYBSIVPUYDBZJTSXAQTGTVTJILWEPJATOHWLZCXSZQQKUOCETVKZDZRVDSFLGK");
    msg.sensor_class.assign("ZVSIAZJIMXKQTRKTVOTGEUITIPDWJSJQHPIYQFPEVHRXETZADBZUBCAYUFUPIHASDGUOCYBLXRSVPLFPFBHWLYCAWNGTDXGVMSMNBKCHMAKFDOCBNXTSOSU");
    msg.lat = 0.48904144974998387;
    msg.lon = 0.21351572651080808;
    msg.alt = 0.7276986467039663;
    msg.heading = 0.6400723768507223;
    msg.data.assign("XZKMNZOVIZPTARHPBZJNLFTJDQISKDCSLGQFARXYOEFLJQQPYZSMLPEIVSBIDZXAACWQTDWKVPNLCLUUEVZMHBZPRSPFJXQPMHNZAFLGITSNKOSYHBVBWUYCNOSKQGGTBEGJJIIJOITGVZMHXRHXWPKTFMHAWKGD");

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
    msg.setTimeStamp(0.24536056580343713);
    msg.setSource(16700U);
    msg.setSourceEntity(151U);
    msg.setDestination(14538U);
    msg.setDestinationEntity(193U);
    msg.id.assign("IEALOCWXMNPWPKRFEFHHSRRGHLPQOYOSWIIZOKYREBYWJHDAUQEZZNUUDTVBHUNPKCWCIRJGYIMZKVKXXGEEQZAPHEIFVDJGUBORPLKXVDNYAMZTGTN");
    msg.sensor_class.assign("ONPDKPWQFGXMRZVYQVJKCASUJHILLYSXHXUCNQQHGOGYYJJDZXAAHBYQSYWDDGRNMKFGKMATKOMSTYPHUECRUUAECQUXFHMPLWWPVIONOXFMXJERGLTRITLWDOBNXDGQGHEWUNTENCWSDPAIWQEPAJVSLAMIEVWLBCBVMQGUPKKPJBYESFABODJZFUNVBINZAZBYDRGDJEZBPIJTFIRXCNFZOLKWUSLSZVHZBIVOLRHMCRQOTM");
    msg.lat = 0.1266901937685685;
    msg.lon = 0.9479485373763723;
    msg.alt = 0.9923862674295226;
    msg.heading = 0.29184443106406677;
    msg.data.assign("CVSNXHCCEVFMGPZEINEIGYBLRSERCYAYNUJYSDIMZCASNLWCZZRHDIKFOIMYPLINRPJGXEMOQOLKQLHHXCZSDFTKJUPMXRRECTJMSPZUOVVLKJTVKFDHBGUORXTYJRYXQFAHJUWIBQKVKXMVLQVXBCAXTGJGMWCGAMEQNDRNBPBBPVSZAWYLIGZNDLAPATWSKTDGBWEDSIHGIFUUOXYDKUHDVJQZFZWKQQNTSBWUPAPOOATWEFREYUHOFJOH");

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
    msg.setTimeStamp(0.7471410362575103);
    msg.setSource(51597U);
    msg.setSourceEntity(17U);
    msg.setDestination(26297U);
    msg.setDestinationEntity(218U);
    msg.id.assign("XBPWMHKBNSEHPJZZTKGEIMYOTRWNZFVPENTUAPQDQAHVYMUHAXSCMHKCKRIPFDDSRWFEPVLUGEADLOMNVTQLSSUJAFHULTTMDOPJCHYTQCYXQLBLHTJNSFGFXMMDELZXSKRZYJKFUBO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PIVUBDODWEMBICRRFW");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 73U;
    tmp_msg_0.rgb_green = 14U;
    tmp_msg_0.rgb_blue = 97U;
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
    msg.setTimeStamp(0.33364763040438783);
    msg.setSource(24204U);
    msg.setSourceEntity(247U);
    msg.setDestination(11479U);
    msg.setDestinationEntity(179U);
    msg.id.assign("AYAQCFYABMFVKSDXVVBIBPFUELOPIBIABQCMQKBSYOKGGJQQJGGHODDHSIJRBVHUDNKZYDAUXTCDQTONANGRJXXEZUADRTHZZTSDLZXEVZWZRJMGMHXWIYLXVWLLAGYNHOHIUCGNOWWOKXWCFUVMSJMRXMNVUOFFXLLUBREWPEAJTMSENKZGC");

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
    msg.setTimeStamp(0.06536459429509667);
    msg.setSource(26423U);
    msg.setSourceEntity(60U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(15U);
    msg.id.assign("WBGGGLKZKEWHSFLJPFS");

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
    msg.setTimeStamp(0.28041217246953687);
    msg.setSource(31171U);
    msg.setSourceEntity(160U);
    msg.setDestination(3682U);
    msg.setDestinationEntity(243U);
    msg.id.assign("ITEPNHOUCXBARQXYHRDAJDTVKCMBXZLJYCIDSRKAOJIYNWMMJAFAGFDTQKZDCEMELGULQHHONRXLIDKRDHS");
    msg.feature_type = 97U;
    msg.rgb_red = 45U;
    msg.rgb_green = 248U;
    msg.rgb_blue = 52U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8900622744932759;
    tmp_msg_0.lon = 0.927670174836057;
    tmp_msg_0.alt = 0.7818040039181663;
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
    msg.setTimeStamp(0.6787759090413231);
    msg.setSource(8497U);
    msg.setSourceEntity(186U);
    msg.setDestination(64681U);
    msg.setDestinationEntity(103U);
    msg.id.assign("VRRPBZRWPKEAHZGOLGXLLFPYXIUWOYEFHBRMUBOBTGBCZSSJJGRLKTIIJSDOIUAJKPISCEQHQQDOKBWKWWLRPVAPDMCYUJSNTVQCAMYBAWJFNZSNNAUWKKMCLYBPV");
    msg.feature_type = 44U;
    msg.rgb_red = 13U;
    msg.rgb_green = 182U;
    msg.rgb_blue = 240U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.49718246054794046;
    tmp_msg_0.lon = 0.8527147955935597;
    tmp_msg_0.alt = 0.8929814383013005;
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
    msg.setTimeStamp(0.6791402838148902);
    msg.setSource(22786U);
    msg.setSourceEntity(199U);
    msg.setDestination(32790U);
    msg.setDestinationEntity(33U);
    msg.id.assign("HOYZBNKARDUBLMTKRKMUVRRJXHDZCYHGAPOGPXGAQMZLVNXXCYOFPVSYXQPFTNHKOTNBIPJWYRLGUPCRBYDWEOCZCQTKGVCMIKHO");
    msg.feature_type = 63U;
    msg.rgb_red = 175U;
    msg.rgb_green = 107U;
    msg.rgb_blue = 170U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5191329428836429;
    tmp_msg_0.lon = 0.8059623016180616;
    tmp_msg_0.alt = 0.5812936763408407;
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
    msg.setTimeStamp(0.44043993955651994);
    msg.setSource(34564U);
    msg.setSourceEntity(33U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.2011792054009368;
    msg.lon = 0.11788255211099585;
    msg.alt = 0.21331977393291512;

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
    msg.setTimeStamp(0.506541806371489);
    msg.setSource(13956U);
    msg.setSourceEntity(106U);
    msg.setDestination(18176U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.4209015327768869;
    msg.lon = 0.009914792648903825;
    msg.alt = 0.0023969370124981015;

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
    msg.setTimeStamp(0.09655738621517185);
    msg.setSource(44280U);
    msg.setSourceEntity(22U);
    msg.setDestination(56324U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.8700725951615453;
    msg.lon = 0.6582709466104326;
    msg.alt = 0.862988105859822;

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
    msg.setTimeStamp(0.0665323039040675);
    msg.setSource(55971U);
    msg.setSourceEntity(96U);
    msg.setDestination(7465U);
    msg.setDestinationEntity(94U);
    msg.type = 200U;
    msg.id.assign("PDQUPHZECGMVDJISRRFRSBQUOMYZRVTYOMEAVYYJFPBSHTZKXCKFHQFZHNDTXJRVDUEGYXZAIWSFCDTWRVVUCYKXBBJPZBWKNOWIAFOZZLUZADNQAELJHTBEHBQJIXLDUFDHKEJQWLSRYNKSRMEGTPW");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 61505U;
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
    msg.setTimeStamp(0.9764756292179836);
    msg.setSource(16030U);
    msg.setSourceEntity(85U);
    msg.setDestination(15708U);
    msg.setDestinationEntity(143U);
    msg.type = 119U;
    msg.id.assign("PMQCWUCAYLTFYCOZHJPZWSVOVHTPGYQFUJDGLKZKRTDIOSVYEVTNQIRQFKLZUOCWBIBIRB");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.7919960633917469;
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
    msg.setTimeStamp(0.13831895459463905);
    msg.setSource(23285U);
    msg.setSourceEntity(228U);
    msg.setDestination(63249U);
    msg.setDestinationEntity(159U);
    msg.type = 77U;
    msg.id.assign("DTXXNFMVAKHDCZOPAIPTVGWFLSBWRBYEKAUC");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 221U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("OERHVGTVUVUZFMDAISOXJSGMSABMCTFTUNKFYGFERECZDKCOGJCGYXNNCWFYZMNHMDUQZUKLTVWBWPZHIJNMHNPHMTYUWOAASXLGLETOEWHMNBQRIZLBQDBEKRTTLLPSCSPHPGOEYDAXAKIXPYOETWKJQGIEUQJTKGZVFVWHSPBKJNUJCPUDNLXRQJNJSJKFALZDCBLSRKRDWBSFOVRRRBFQIQXMCH");
    tmp_tmp_msg_0_0.description.assign("GIKZEDEPQOLYHCIMYKFSAEJADSTZVMQUOCVIRVMHCXZKHRBXDKPDU");
    tmp_tmp_msg_0_0.vnamespace.assign("PORAXLTDGBUESUZUBPHGJECIWWHWOELPVPFHNDPDUKDANONXQJRLPMTOKMCCKHMXNASJQOVKKQSIZXYLABQWTEISPZKMKLCYDUUNBGFHEMDSFBKEJMXLAOIHCCHHQNOQOMIQBIDPAYRGORZMWDRGHSHXYRLXJAAUWYVYYCNLKWOXZTVUVZRFFJTFXDCQYJBVJASIGTRVPGMLCNZBZTWZLXGPVFKIJNMNSVCZUVFWEBQQB");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("VXFTGICUTZAOWOYWDKKBLHFQPDMI");
    tmp_tmp_tmp_msg_0_0_0.value.assign("QIXQRGGVVIQEKLDZVQYFZEYKWJMJAAMFMVWKHIDEJWQGBURGHYTNLDCPRAHLBH");
    tmp_tmp_tmp_msg_0_0_0.type = 158U;
    tmp_tmp_tmp_msg_0_0_0.access = 225U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("YSWRANSNFAGEXKMCLIVATNMLLGPUTYSJNQCYMQDLRNJYCHVWRDGEVJRMTFZXRIQZXKLQOBCIJASCQZUTIOZMJAVKUOZCJZUDYHZUMSXGYHBIYAKP");
    IMC::SetServoPosition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 241U;
    tmp_tmp_tmp_msg_0_0_1.value = 0.49144522510886923;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Rpm tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 3008;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3243227406046567);
    msg.setSource(57017U);
    msg.setSourceEntity(88U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(39U);
    msg.localname.assign("XCEKHHMUXWAYHHEIPLSJMFWEFVCHPVYCSAKMGSHLDGIENKRWKUSALIZCYDEAORGJKTKCWKLIYSAIVITQNRDBUCVQBEYUYOPPTXQPRDPUIDJFTFNOWWMHBJCFGYGKZFFVNOQBIZRAQDCONP");

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
    msg.setTimeStamp(0.2776571604839332);
    msg.setSource(45583U);
    msg.setSourceEntity(146U);
    msg.setDestination(36312U);
    msg.setDestinationEntity(116U);
    msg.localname.assign("JFTLUOUGQZTCJAHPVBQCLBGJAEPYNMMFQYTWDUSVKRVZHGBKILTXDVLMECYYAPUR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HVGTIUKCTRISXWSDQRCBUHYNYXJFZPCLLRAMXZVUQHCJGBWJKLGTKUZDKOXXZQIDAPGQPINGYBYEXIPZLGDEAERMBJZZZSPXJPEPWTGTMJ");
    tmp_msg_0.sys_type = 90U;
    tmp_msg_0.owner = 16140U;
    tmp_msg_0.lat = 0.0082633167509637;
    tmp_msg_0.lon = 0.8392599267298612;
    tmp_msg_0.height = 0.9428426043594037;
    tmp_msg_0.services.assign("CCRRHRYSQNRFGYZQENZTBRLWLRIOEOBKESKNQVWAFSVDDMGZPHRUJVOBBQIMBMWZGFXNFSEIPQWLJUNTOUMDUJYOABQTSNVPHCQXQLXCXGWLYAYNYZHSTIJ");
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
    msg.setTimeStamp(0.6652208115632716);
    msg.setSource(7760U);
    msg.setSourceEntity(57U);
    msg.setDestination(30722U);
    msg.setDestinationEntity(119U);
    msg.localname.assign("TEFMEUCFKBGDPPALGMEWVMWDYJISWZYBCOMRKRSWNULSIOGSN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WVUDSFVAAQBYLKDNYCNVFXUKGGKJXICGIMMWFPTXCCLQUKUHCWTRTTZNWMXMIAGVHHNMPMLVPSLIPN");
    tmp_msg_0.sys_type = 248U;
    tmp_msg_0.owner = 51516U;
    tmp_msg_0.lat = 0.06344665070952371;
    tmp_msg_0.lon = 0.0017043026137150141;
    tmp_msg_0.height = 0.5456739597116821;
    tmp_msg_0.services.assign("ZPJHKDQBNLRJKMHWAZOMPNFMNDCUHWWAALXAIMIOKVBGLUGMGIHMJPKICCDZBWJTSXIBBQWTGNQOYAOEGZXLDHCDYZVFMCNOXQNKYATYDFUXSVMTRJIAARBPSKTIYFOGR");
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
    msg.setTimeStamp(0.17259435581172766);
    msg.setSource(36093U);
    msg.setSourceEntity(159U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(116U);
    msg.timeline.assign("JUZDTVFBPAMYVIQKPJGZUKFVUCKOVLAXNNRRPRPAOIRWXMIBIYOZIHLBPDETVRIDANOGOPLFHQETFSZOLXYZEXNJQTFUOTVCSWVCGCMOSQQUCJYOSBWJKEERSVSAHHKQJWDMJNKIHFATMZXXLCEGFCAIYGQLSNRBGDCJJYQUNCDHNDBGNBLURCHSULXLKBPAVJH");
    msg.predicate.assign("UMNBUYUMUBAQLWCFDCXFSBKIPOTQHEGIDLBIBHNZLEFQLORJHDVXYVPDSSSHIKIWZFETYNGAVHBBCUEJXAXYRHWAKKZWLTFJOGVCECAYRMGNGLUPAIOFXJRZCMYMUIJKADSDVNEFWPQBAPRSNVNDHSEMOCFXGWTDJLPFMQEGGK");
    msg.attributes.assign("ZMGTCUUVQRDZQQAZEKNRCUWJBIUXFWVPJGQQZBHJOPREBFZUSOCRGOFKKTUEWCUZHZL");

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
    msg.setTimeStamp(0.1483515494343569);
    msg.setSource(7430U);
    msg.setSourceEntity(52U);
    msg.setDestination(30018U);
    msg.setDestinationEntity(79U);
    msg.timeline.assign("JLZHXHGESKSPVRGWTBTGJLWAOTFFEBNQEDKUVGFTJXVCPKYHJAPICBXGMICL");
    msg.predicate.assign("VZUQKYDEGQIRUBOHKCEJYRHXJOVJLHXVDAGGCHXZCQVPNISXJKZXKFWOPDONBFKEIZOAJFQRGTQXGPFXMNPVABKHMNEQBTWOGIFULBMWSYSCWMYAPMXHCNOKQJUDNTTLFDMVLELREJFNZCIWZGAJFOVUUMISKOTHZDABZOPTCDLAAHGWIBPVELZHSTJRWCSYETXGSRINQKLXPUYDPSHDURLQWIPQUBVRTYLFNSYUSGMCMVEC");
    msg.attributes.assign("IIEWBVGCLJEIFMUCTPHFMTZLAREINXOKNYSQZBMJMZRONKELVPYIKIWIHGWRZYHRVUQQWYQSFUSSCBXCJBRWEYYHNJDGZBCVIRLYKMSYXCLFAXBACPNGZEKQAMNFHDOGGFTXJKNDTUBDCTLTWUADQPGIEXAFOJVWHTJHVQFALPTB");

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
    msg.setTimeStamp(0.6578337883802554);
    msg.setSource(19028U);
    msg.setSourceEntity(203U);
    msg.setDestination(34398U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("QDDBZDHBTIEXAVGCISZRPSJXFMLKEBSAIIBWLJPVFMASNFKXDBYYOCMAGPDWLTNNFFURQAQZUZYENOGUCAAQOTMVJCMISTPNCMVZLJEJUHCNBGPERSIURWUJWOQFATXAVXJDQBKQSZIVFKSOYKRLXEGCKEDKCOXDHTNUHEGYTRJLZPWYTDZYWOPUPJFRWCOHMITBKOSLCGGGMVFYVXMVB");
    msg.predicate.assign("NKSSREXHWBYWHSAMNHWGG");
    msg.attributes.assign("GZBEVOMTXLFMWRJEYCQINUOJGWXLYHXTSBHPHALFVERKONFYAQSNWRXQPRKEXOLWW");

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
    msg.setTimeStamp(0.016824402240255387);
    msg.setSource(50219U);
    msg.setSourceEntity(133U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(126U);
    msg.command = 116U;
    msg.goal_id.assign("SWBMTAIRXIVRPBPAYTIDW");
    msg.goal_xml.assign("LWCELLYFZKMXIALJBFZEBVXSHUGXWRVEBWMWVFSKACYUIK");

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
    msg.setTimeStamp(0.2568677567924711);
    msg.setSource(20039U);
    msg.setSourceEntity(253U);
    msg.setDestination(14571U);
    msg.setDestinationEntity(7U);
    msg.command = 183U;
    msg.goal_id.assign("RHOPCMKTHREHNSGGSGPWOAXXCOIXVYPQALRZDIQNQOJJJUFAOAULLZIBKQUXWTBUZLMHDSYRJFMCXTKNKATYFYWXRDGSDQXKYGZELGCPWOSVECMNDTDKCTNVFEPTNQBLMABBZJPNIAUXHWLCAGHPUOYUHDUIVWPTVPVXHNSRCMFKZEYGRTOVQMNSOFJTLLUYQDGBBZVKDQAVHEZIRDBJHBRIEYGAILMSFWVNF");
    msg.goal_xml.assign("AGYHWRIBKUNURMMRSFXXMZOWFPVIJRHCSKOGCEBSBICCEOTOWPDLNTDDHCBERWZOZFUNVAUGLWNKJKKPHJNFAEHEDBFLZYJEKRDPVUGDXERSHXNNKFAYWAMQJIOSOXTMVBAGOFEEMVYHIIMQWJQBLYCYPMBAIWUQQZZDTXRDXTZLHKDYSUYYGLVOJGH");

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
    msg.setTimeStamp(0.506176828088925);
    msg.setSource(43927U);
    msg.setSourceEntity(56U);
    msg.setDestination(34563U);
    msg.setDestinationEntity(140U);
    msg.command = 219U;
    msg.goal_id.assign("FETNLOOVCBLEGUOAGHUWNHQKQRMSHTHFXTGLGZASEPPNYYLVLEV");
    msg.goal_xml.assign("WIWVJKZORZUNLLPPSZUCDPRNMLUFBQIGWKCVRQCCJXIYAHHVZMYBICEDSEATWIDOGPVOECIWXTAKPJJHNMYXKFKCNWKQALUDIUAUQBLSMEWTNMCKREOSJEUDJXGNOQIVVAHQHQRXBXHTGVGZJVTZSPYMBDLHWIZYCHLMYTGFSSJMFATXBSVGRGNEODEAQ");

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
    msg.setTimeStamp(0.10359301460324788);
    msg.setSource(54229U);
    msg.setSourceEntity(196U);
    msg.setDestination(38028U);
    msg.setDestinationEntity(28U);
    msg.op = 116U;
    msg.goal_id.assign("ZCQOXORRMNLBTJPILVMZLNSUGRUCKEJNUSMOFWRCYNEYATXRTXDZDGVABNCEZUIZIYVSVQRSVXGDOYDTWIPDNLFPVNWTJKVPKAAOQZDIEIJFGXQOSUSCMOKFLGWOTICAXWHWYUJDJTIEXMWMHCHNAFGLGEGSXCMAFIPUZZLQDRKEGEYZKHEUHXAOJBPTMFNKDEFQAYUQHMDPBBVYZHMXVLCQNS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZSYGBNXTVUIDQMUCCPWIRWYMIFTNBYKFVUXPAGIFNJWZAZUPWSJBHVGHUVMEYNYRQZVRLOHMSZFMMXONOABKBYBJLAOXCRGSJQDMDKRUGXAFJARULMHDIYJHKJPMDVVXHBPPCBEKFDAOKSODQZTPGOJQQCHXPIJLJGDAENLREEKPTDCTLUMZSNIGSWRVTOLAIHETY");
    tmp_msg_0.predicate.assign("LGUXTRULEKWPXMYJXCIUYZABWBWLKAVOHQETRCAYCNAUAOYCNFWMVZADHQQEDJIGFGVNZMZDGPXJNQVKSJRNWTOBLZSLEJGJWNRUGNJMHOJTOFWSBJBQEPHHZSIRSBKESWVEGKYAOMVCWSBCTPUHHBTRAWUHVIAZTPYTFNKFDUZTDFQCICNYBERLIXFOH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TIJDGCTQSVHNZUGXJNEWZMSRBDGHKYVNEEQAJFHPFKVBKOLRVUJBPHMOSXLAKUYPBIFWQZNBKPZLXUTFAPLRPDWWHOSTHLOVPKAYDIFYNLZCFCF");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("XQHRIPMVQTXZMDSXTYQXQBEKBQIGXOVHXYIRHOFEIZZITPXGHYZDJMLGDFLFMBMLGDGQNJMBMNOUUPDVLEWMEYNCUVFPHWWPYXGKZLGEVASAXVBHOAKFEEHJNLNOMBLDKWKTTYKYZAKSDZRQRKSLKCCSSCRRZRUZWFHDJPWWEHJZBIRLAVIKFCOQ");
    tmp_tmp_msg_0_0.max.assign("RHGJVZFNRHNVAWLHTWNTDLVPRURBWGIIFBQUXBAZYKBUIMGCDZKJMOXBSKTTWNRPHTRVGFAMJYQSKYXWQKIUJPQDJHYWWCZMYNASIPQHOLIFMHIFCAGAHEOBLZADTTURAKUECVJOCKPIGBXW");
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
    msg.setTimeStamp(0.3069314868665256);
    msg.setSource(36377U);
    msg.setSourceEntity(217U);
    msg.setDestination(23985U);
    msg.setDestinationEntity(121U);
    msg.op = 224U;
    msg.goal_id.assign("BEJNLJAPVZRVFPDFISBQBSHAYMQKSVKSGNDGILGSXBWPOSPDPKRIRCABYOKQMUDWYKMNTFVSLJBCAUEEJNSIDGWZDPZZBXKWFJVAFQLMMPTHKMORIYTIFRBLKYXAXUTWOQFHUQTCZNYUVNMWQFCCTPZJDTNXUHGYLONZRECHECRJIOJULXDDNYKCPNXHBLWGQGTGOEEJHYVXLOJWTZVAEGFOUPMSWOAHIQWZRAEREZTHXYRQLKVUSGHMBXCF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CVBKZFQXSEGVISQIKXWCERNKJDFTWGYMUAKRGDTOINPEGZIWBGXQQRYAKGWBFHVCDYLRIULZ");
    tmp_msg_0.predicate.assign("RUINTXOJPBZAZJWHUDTWSDDQIGSYVCUQIOOHSNKSQHAIQKIHBULUV");
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
    msg.setTimeStamp(0.04242409474786846);
    msg.setSource(44313U);
    msg.setSourceEntity(72U);
    msg.setDestination(34416U);
    msg.setDestinationEntity(82U);
    msg.op = 94U;
    msg.goal_id.assign("MSUUMVSPQPDYWIZDNRTJNIMGRHTHLZXPTOAXUYFRQVPXFAVPBWBOCARIHACTWZABZSCBXIYHHKOBCR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZQWSVYNOFHTEXRHBYGRYSVNLCKAIXMPRNISTUGAHAPPPDDQPQMLYORB");
    tmp_msg_0.predicate.assign("SGDNUFQRBWVJQHDMTRPLLYRAELJCAPOHDZARILMJMTXJVFCGENOHTBEKINOVRLDJNOSGSJMJAITNJKGSWBXWWBCUFTQXKXIHUYAXIDFTQEOPAVDSFZWWXOPFIKBLBUYKJCYITCSBQCZOGAMODXLUWSBMFZNNMZLGLSYKEESCXP");
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
    msg.setTimeStamp(0.6076515700700021);
    msg.setSource(34686U);
    msg.setSourceEntity(202U);
    msg.setDestination(21341U);
    msg.setDestinationEntity(209U);
    msg.name.assign("HMGUZZVQPJIXEHUYXHECGTIITQDFVROUTZSPFEBJDXWCIYIWNRFDCPYVSFDQPQXZMBREHVZWEXSOLVYNLHHBZLMLXJ");
    msg.attr_type = 15U;
    msg.min.assign("DPHVKTKZNLHDMVTUTAAXSELXGUWVEDSIPXOPQSNFAQIPWEBWCMGTKVIAUNOOFNFNZZMNBTWJBEJXEAILGKHXIHJZPLAFUEVCOMBHRYRVAEROGNXYTYIWFBTWGRKECCNQYSSGAYQTQHSUWJRZVAXCDRJKRVJTLLTODPPRYDQJIXWBYSVLPCLKMBSKOLSZUERQGIGBVUZYFDO");
    msg.max.assign("IOYRYPFGYWDNTYWKIWRELOMQHSUNIKAAMJHKXDPPNURRENJOIZAITQUOYWJXWLRTSKIWOPDLQSEJZVHRIIUENAJJZL");

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
    msg.setTimeStamp(0.7931322075250788);
    msg.setSource(39436U);
    msg.setSourceEntity(60U);
    msg.setDestination(61142U);
    msg.setDestinationEntity(195U);
    msg.name.assign("SIAERHMYZUOXWEPTFYFMHOVVWDILJTVWZEOJPAMASAFZRQRTKCNFUYVUYWOWMNTGZJKBNPLCJCJHVPKEWQYNSXLQQGWGKKRDUTRSYNBNIR");
    msg.attr_type = 111U;
    msg.min.assign("QNBGJIMYGEBHFRDPXUDNUFWGKCU");
    msg.max.assign("YLPAECPDIXEMAFKUIMRSPUXIZUXBZJTVZLYKKYOGQFQBFTZWPAIUZJQWURZIEZHCXGMIUVELJXTSHMETKNOJUHXSPMAZAWDGBUEBVSFVYEGGVXDDUFQMFWCXBVYWSJDCYYDQLXBJSW");

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
    msg.setTimeStamp(0.6731193730225619);
    msg.setSource(1825U);
    msg.setSourceEntity(53U);
    msg.setDestination(23969U);
    msg.setDestinationEntity(23U);
    msg.name.assign("NILDOEXUHWBONRZJOJWQJQOEFTKWCQNAXATVZGYKFHKUOYMWPQYGEA");
    msg.attr_type = 208U;
    msg.min.assign("REGUBZKTCZCMQCMWBNHQRWUGRGNEMCPFOXBUSDLWJJUFGZPIQINJWHODSYXMURWKMOBIZDOYNAEUCBVBKYMWAQLDMMQVXXIIRXTNAYHLOROAZQATFWEBVNHJNTYGEOEILZFLKFGEPTFKZSRHIPPZQHTHKPSFLXOSLSGECOABTGJYKATQHTDEQ");
    msg.max.assign("CDXSBIBUXETISEAIOQOXHCBDRBOCFHVGURWQOVUBSVGKFJTPSXUOQCWPTFUUDRZIHXLVAGWPTUJPYOGKNRAQOLZ");

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
    msg.setTimeStamp(0.4958410055205914);
    msg.setSource(54606U);
    msg.setSourceEntity(104U);
    msg.setDestination(59576U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("BENSEXWTJYINDMLDMRYCOIFYYKJGCNVNJGWIKVZGDBVONWBSAJFRSSUDJVOXWSUKSNTHKZZTIBPOYUOALMFDYWHXLA");
    msg.predicate.assign("JBDMJPLDCWPPYYNIRTAENVBKSZLWYQJBNLWQACOGUBVYPLGEPSWHDZITUHRVGSLIAZDKIMULOMFBJITTYXOAHTAMCZSYRQBGDNDZOWVAKFMJUMJGUFGOQHZHFUBKHVSADZEPCIOPRVUNRDELORLWBMRKXPQMXZVMNUENZYUIQAXIKESDGFSXNWNJRSOXGBVCXPQNGFETQSSBOWYCGFAIM");

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
    msg.setTimeStamp(0.19834585685651973);
    msg.setSource(39699U);
    msg.setSourceEntity(192U);
    msg.setDestination(35724U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("UJMPFPDNEKB");
    msg.predicate.assign("VYWAOQXVKKSRBYIFWTMWRZBKWIIKEFAMPCTQSJTYZXRUPHSCKWQWAXEUFBEXSUVXCNVPVRJHGOVPNNOVHWDRZMZETOESUTEHNTYBOSPYZHQDDNLDVQNZGVDLLJJFHQPCUZEZYAOCMIMKDFECRTXGYGLUMOMHJHLKLVTADYWMXAHMC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BRXBNFBCUUQDMMAZFJAACDNJWZEXSNINKVHMZOYUKCFQHOIGODLPCTZCCTSGVNQIUBVVVIMZUHDULYFNTEBXKRCNVFIWXYQXGWDBSBEMRLEJPMTYTDMTSTEWGRQHQCVUSATWYYEVWLUHEQSUEOSKPLRMARDMPIPLF");
    tmp_msg_0.attr_type = 194U;
    tmp_msg_0.min.assign("HRAFGBPSHPIYCENZMAAOPCVZJGTNPTXKEQGCVKQUBFMSUNNWINFSEEQMFLUCPQYTGPXAXOJVJLSZCISYOWTRLKGUQZQDKLSOZQYUZQWBIDJOMKRIVRYTPKJXQEKMPBECUZTBHGNOSBAYDDOLAWVLWJIDBHEATUDIWELLWNYNGVXMHFDUEMZRCWWHXVIVHYZYROTDXJCHAVGRCGERKFXKRIBRFXXIQFSMTOPHLJTSZKLJUOMGDVBNMFSFYU");
    tmp_msg_0.max.assign("ATITZGNXTEWDQWSAHBDSAUPWAMVEIYPOFZUPWBENDJSFOQOYGJVHDUVNKKTBAXGKMLQJMCKFAADMRCHQCSNHOTSXSQLRZAJSXLGMRYCBKBVIUVXOTWZHKUMQMKEEPCRQQCGPBXYFPIDRFJEPNHWROLPYXIWZVYWHIFXACJGJURWTNLZUFTNMKRMMIOILLNQJUOXJGNCCEDPLREZKFAFHYTZKVGDPZCUSFHSYUIJQXGVYNRBLS");
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
    msg.setTimeStamp(0.18068680860026265);
    msg.setSource(64500U);
    msg.setSourceEntity(86U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("MJZWHFLRVOEZRUHAOBSHCGGJROHFEKCLMVLTKQDNVNJFIVHGCKTKDISMNHBSEFDTIPPRYIVRDSZSPUELKVXJJEGUOWWQLUBOOMUFAZKTS");
    msg.predicate.assign("HKAPNXISQBGLUZSTIOUQNPUYVBAXVMIBJPYCWTFGDYCLDAYGBDBJNQXRRXSJFPWPHUEVGXBCNPJDUXTHRRYOIVVPBDWIOHNQJWUSANSL");

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
    msg.setTimeStamp(0.6487652982877549);
    msg.setSource(52670U);
    msg.setSourceEntity(96U);
    msg.setDestination(10989U);
    msg.setDestinationEntity(231U);
    msg.reactor.assign("XLXGKVTREIDWLJMAPAMSGACPANIIYSVUDZNVPLFPLHGHERRHTYULSGBTVOUONNDKRBOMLHKKOBEEGEWZCLFAJQFJZCMQTTCYFUDFNGKKKUROQAABJAQVSFXLXSSDSXEVZNJJBIKCKXVTNPJQIPNMIRKVWYZDOQERLBWCJICCFDHWCMVSOQFIGIHSVMHJTJQBPDTEUCNXWZPAWXBRZGOWWSMBXNEQGD");

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
    msg.setTimeStamp(0.22031217163764927);
    msg.setSource(39034U);
    msg.setSourceEntity(159U);
    msg.setDestination(41620U);
    msg.setDestinationEntity(74U);
    msg.reactor.assign("VOACDGSWWEKFDLPTHJBSNNDVGEPFOLHJCDFUHYIGQLCCLTYCQKYSMBI");

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
    msg.setTimeStamp(0.5952548710982842);
    msg.setSource(45464U);
    msg.setSourceEntity(122U);
    msg.setDestination(31350U);
    msg.setDestinationEntity(81U);
    msg.reactor.assign("JBYDVDDNFYMPGVOYKFEUDKGITRGXVDSLSDXSDHJYFMFAEAGOJXEVVTWWTEHSUXIWCMQWKRSOVIHPCZWGHWADEZRAECLQLBCMBPIIRLPCWRNWHKIRLYCMILLIGZAMBYQCAPNNPZAASTVBFXFGBOFQHXZKFRQJUZDRGTYJUAUJOZYOKUKJTYUSXMPJKZTVNSQSPTG");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.8361715387664992);
    msg.setSource(35133U);
    msg.setSourceEntity(90U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(9U);
    msg.id = 50U;
    msg.width = 49680U;
    msg.height = 31544U;
    msg.widthstep = 63666U;
    msg.channels = 237U;
    msg.depth = 181U;
    msg.finaldata = 230U;
    const char tmp_msg_0[] = {-82, 4, 27, -71, 6, -10, -54, 126, -82, 17, -54, 73, 87, -65, 114, -103, -86, -51, 34, 36, -71, 126, 116, 39, 120, -122, -18, 61, 19, -61, 122, -125, -100, -107, -10, -12, -71, -62, -84, -35, -56, -44, 17, 46, -127, 98, -13, -29, -83, -38, -56, 2, -106, 30, -25, -109, 9, 19, 102, -49, -122, 115, -30, 108, 17, -69, -44, 88, 2, 43, -90, -90, 122, -106, -31, -5, -116, 91, -65, 107, 115, -52, 99, -64, -75, -72, -105, -121, 124, -34, -64, -9, 64, -79, 101};
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
    msg.setTimeStamp(0.8605671378584397);
    msg.setSource(3577U);
    msg.setSourceEntity(219U);
    msg.setDestination(6389U);
    msg.setDestinationEntity(40U);
    msg.id = 242U;
    msg.width = 51815U;
    msg.height = 54096U;
    msg.widthstep = 62634U;
    msg.channels = 164U;
    msg.depth = 136U;
    msg.finaldata = 145U;
    const char tmp_msg_0[] = {11, -25, 51, -102, 37, -59, -29, -9, -97, -85, -50, -80, 122, -32, 75, -117, 30, -34, 70, 40, 62, -22, 41, 105, -111, -22, -66, 94, -81, -32, -27, 14, 84, -92, 71, -97, 42, -43, -53, -45, 7, -3, 32, 88, 113, 25, -92, -8, -69, 14, 68, -93, -32, 97, -66, -36, 117, 11, 101, -120, 65, 61, -72, 81, 88, -92, -2, 48, 121, -102, -9, 111, 53, -27, 55, 20, -20, -27, -50, 42, -122, 102, 98, -92, -24, -104, 52, 27, -52, -34, 124, 72, 53, -57, -107, 47, -48, 112, -43, 43, -99, -28, 72, 21, 59, 5, 78, 99, 126, 56, 71, -3, 48, 94, 121, -94, 126, 107, 56, -110, 64, -111, -122, 66, -88, -54, 56, 80, -101, 15, 105, 118, -11, -72, -98, 10, -41, 60, 72, -68, 99, 117, -118, 4, 49, -5, 111, -55, -21, -20, 40, 10, 108, -32, 58, 45, 116, 80, -92, -30, -72, -85, -18, 115, -15, 8, 14, -19, 30, -39, -100, 125, -13, -54, -46, 3, -94, -86, 107, -119, -42, -75, -43, 124, 56, 95, -57, -111, -7, -41, 13, -105, -54, -91, 87, -77, -116, -6, -18, -127, 61, -124, -117, 108, 114};
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
    msg.setTimeStamp(0.3322590320624257);
    msg.setSource(12942U);
    msg.setSourceEntity(203U);
    msg.setDestination(53058U);
    msg.setDestinationEntity(165U);
    msg.id = 161U;
    msg.width = 8174U;
    msg.height = 23324U;
    msg.widthstep = 36378U;
    msg.channels = 168U;
    msg.depth = 67U;
    msg.finaldata = 208U;
    const char tmp_msg_0[] = {-109, -41, -33, -43, 55, -36, 36, 117, 70, 78, -101, 68, 80, 68, 41, -39, 92, 99, 61, -29, -36, 100, -73, -76, 123, 34, 0, 98, -90, -50, -21, 122, 76, 80, -46, -13, -42, -102, 16, -31, 33, -69, -21, 34, 2, 68, -20, 67, -52, -96, 118, 111, -66, 109, -106, 79, -112, -24, -25, -39, 65, 30, -91, -114, 112, 42, -62, -49, -40, 57, 26, -23, -112, -103, 121, -113, -113, 94, -42, -15, -80, -23, 19, -8, 75, -87, 42, 63, 15, 75, 48, -55, -68, -24, 26, 70, -71, 39, -44, -5, -101, -37, -1, -95, 6, -45, -54, 56, 73, 102, 53, 62, -49, 36, 120, 82, -90, -59, 0, 0, -85, -53, -103, -78, 61, 126, 8, 103, -58, -28, -63, -92, 49, 118, 44, -5, 70, 109, -80};
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
    msg.setTimeStamp(0.20468886090500982);
    msg.setSource(38907U);
    msg.setSourceEntity(125U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(129U);
    msg.width = 39554U;
    msg.height = 54078U;
    msg.channels = 29U;
    msg.depth = 133U;
    const char tmp_msg_0[] = {-56, -16, -119, 45, -127, -48, -126, 32, 75, 36, -106, -49, -53, -41, 55, 77, -120, -86, -121, 45, 27, -57, 20, 68, -78, 29, 118, 7, -48, -128, -74, -14, 100, -117, 34, -111, -17, -96, -41, -100, 102, 2, -79, -30, -25, -41, -106, -95, -128, -75, 17, -10, 17, -26, -112, 52, -100, 12, -87, -67, -92, -102, 76, -77, -81, 38, -2, -2, -4, 112, 48, 54, -80, 39, 54, -30, -123, -6, 60, -71, -29, -65, 117, -70, 9, -49, 120, 11, -32, 119, -94, 7, 95, 67, -32};
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
    msg.setTimeStamp(0.6398749516625275);
    msg.setSource(19531U);
    msg.setSourceEntity(217U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(48U);
    msg.width = 14939U;
    msg.height = 57026U;
    msg.channels = 208U;
    msg.depth = 230U;
    const char tmp_msg_0[] = {-38, -101, -76, -31, -1, 72, 71, 21, -118, 69, 48, 8, -105, 41, 67, -102, 121, 89, 110, -70, -98, -104, 88, 63, 64, 58, -114, 22, 17, -8, 74, -69, -5};
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
    msg.setTimeStamp(0.8716011445103885);
    msg.setSource(40043U);
    msg.setSourceEntity(87U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(181U);
    msg.width = 34844U;
    msg.height = 59301U;
    msg.channels = 112U;
    msg.depth = 158U;
    const char tmp_msg_0[] = {-11, -85, 79, -64, 85, -17, 96, -128, 16, -58, -54, 6, -108, 18, 71, -13, 10, 66, 126, -117, -59, 118, -84, 27, 117, -104, 52, 123};
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
    msg.setTimeStamp(0.9173174622740632);
    msg.setSource(53361U);
    msg.setSourceEntity(19U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(252U);
    msg.frameid = 181U;
    const char tmp_msg_0[] = {14, 23, -38, -117, -45, -19, 105, -11, -14, -125, 74, 30, -24, 61, -33, -95, 6, 43, -115, 6, 41, -99, 102, -21, -117, 106, 125, -67, -87, 99, 51, 126, 101, -126, 102, 123, -117, 14, 39, 39, -34, 58, -16, -95, 60, 64, 96, 44, -70, -98, 115, -76, 75, 17, 17, 120, -95, 55, -29, 9, -110, -26, -124, 56, 82, -112, 77, 95, 7, 88, -90, 26, -99, 16, -49, -124, 8, 90, -121, -20, 107, -51, -56, -32, -6, 46, 74, -22, 64, 50, -29, 22, -78, 62, 38, 48, -85, 75, -33, 29, 36, 101, 44, 110, 122, -114, -120, -119, 18, 88, -83, -97, -13, 106, -51, 29, -78, 93, -66, -73, -39, -117, 79, 33, 97, 118, 96, 38, -4, 78, -5, -120, -69, -18, -61, -124, -30, -49, -75, 123, -1, 84, -125, 25, -50, -123, 25};
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
    msg.setTimeStamp(0.7800236548084534);
    msg.setSource(30903U);
    msg.setSourceEntity(203U);
    msg.setDestination(44085U);
    msg.setDestinationEntity(122U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {124, -84, -16, 115, 28, -9, -10, -104, -13, -92, 42, 19, 70, -108, 120, 89, 33, -30, 14, 114, 48, 45, 44, 25, 2, 45, 42, 62, 87, 25, 74, 114, 21, 66, 66, -31, -52, -38, -95, 73, 93, 102, 62, -5, 1, -88, 33, -117, 13, -79, -99, -99, 51, -98, 67, -9, 39, -62, 71, 15, 62, 48, -102, 36, 4, -106, 31, 77, -65, -7, 72, -103, -125, 44, -97, -17, 13, -64, 70, -25, 60, -40, -35, -67, -10, 9, -72, 108, 28, -99, -97, -46, -87, -109, -37, -114, -4, 109, -67, 3, -63, 9, -60, 122, -47, 40, 11, 103, 10, -5, 27, -116, 103, -90, -17, -30, 81, 117, -37, 10, -106, 98, 98, -100, 93, -123, -15, 40, -114, 122, 107, 41, -58, -86, -128, 86, 48, -27, -88, 8, -84, 43, 17, 34, -59, 47, -18, -75, -94, -50, 4, -96, -54, -125, 35, 63, -108, 106, -30, 92, 50, 29, -74, -28, 64, -56, 86, -126, -93, 112, 23, -11, 51, -15, 103, -21, 1, -97, -6, -68, -111, 19, 26, 78, 82, -28, -81, 75, 118, -96, 68, 84, -63};
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
    msg.setTimeStamp(0.4061582745761314);
    msg.setSource(60842U);
    msg.setSourceEntity(120U);
    msg.setDestination(24599U);
    msg.setDestinationEntity(186U);
    msg.frameid = 208U;
    const char tmp_msg_0[] = {24, 104, 103, 1, 68, 63, 13, 36, -79, -44, -4, -89, -108, 56, -20, -91, -68, -109, 29, -78, -82, -26, 36, -74, -7, 38, 54, -118, -52, 118, -60, -44, 3, 41, -17, 70, -61, 21, 123, -116, -80, -37, -85, 6, 77, -48, 53, -15, -46, 34, 48, 72, 23, 15, -50, 41, -7, 116, -86, -90, 98, -62, 34, 125, 126, 87, -71, 69, -21, -99, -55, 106, 53, 95, -14, -62, 1, 13, -65, 93, 40, -111, 50, -16, 126, -100, -29, -75, -70, 58, -74, 12, 10, -91, 83, -61, -4, -117, 91, 80, -69, 116, -26, -67, -62};
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
    msg.setTimeStamp(0.20889689252627464);
    msg.setSource(23765U);
    msg.setSourceEntity(223U);
    msg.setDestination(51646U);
    msg.setDestinationEntity(113U);
    msg.fps = 43U;
    msg.quality = 176U;
    msg.reps = 72U;
    msg.tsize = 154U;

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
    msg.setTimeStamp(0.11614665083482767);
    msg.setSource(2192U);
    msg.setSourceEntity(157U);
    msg.setDestination(15567U);
    msg.setDestinationEntity(199U);
    msg.fps = 175U;
    msg.quality = 197U;
    msg.reps = 211U;
    msg.tsize = 188U;

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
    msg.setTimeStamp(0.35528675261188625);
    msg.setSource(3790U);
    msg.setSourceEntity(58U);
    msg.setDestination(53424U);
    msg.setDestinationEntity(238U);
    msg.fps = 248U;
    msg.quality = 211U;
    msg.reps = 7U;
    msg.tsize = 203U;

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
    msg.setTimeStamp(0.7540637174113436);
    msg.setSource(53444U);
    msg.setSourceEntity(149U);
    msg.setDestination(39134U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.17398248353174817;
    msg.lon = 0.6588187226707919;
    msg.depth = 29U;
    msg.speed = 0.5159033688863548;
    msg.psi = 0.2335843019145425;

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
    msg.setTimeStamp(0.4431481961041982);
    msg.setSource(9894U);
    msg.setSourceEntity(205U);
    msg.setDestination(47923U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.3691136380406389;
    msg.lon = 0.6958507204509203;
    msg.depth = 209U;
    msg.speed = 0.029558895415216058;
    msg.psi = 0.7357021387636259;

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
    msg.setTimeStamp(0.3349085528448714);
    msg.setSource(28834U);
    msg.setSourceEntity(45U);
    msg.setDestination(42919U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.7308837947386213;
    msg.lon = 0.32496754435234954;
    msg.depth = 194U;
    msg.speed = 0.2557927186289757;
    msg.psi = 0.9577456623711994;

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
    msg.setTimeStamp(0.24981571801682678);
    msg.setSource(54718U);
    msg.setSourceEntity(55U);
    msg.setDestination(47371U);
    msg.setDestinationEntity(8U);
    msg.label.assign("RJXHJUKUWDCISXNHZFYLDVEZIYEZKGSAUWBZXEUVPRISFGLXOOPJVNXYDAIPGWPVVVRARHHRTPWAUJQXGTFVSMKKWNYHLCISBTPELQYUAERHADLOTRLIKORSBIFYROCMXMEKYHZWEYCSSQJDRSQCFOMTTQNBKXFEOWQCFXZDQQSNTKCVLDAPYLBPZONMU");
    msg.lat = 0.9282676986039802;
    msg.lon = 0.4843030696437438;
    msg.z = 0.8165050237619137;
    msg.z_units = 210U;
    msg.cog = 0.47357480255646756;
    msg.sog = 0.03731379424593162;

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
    msg.setTimeStamp(0.6643443929371472);
    msg.setSource(60774U);
    msg.setSourceEntity(201U);
    msg.setDestination(18463U);
    msg.setDestinationEntity(112U);
    msg.label.assign("XBZNWSGYTAAOERQJWBIHKTCIRFEPHIQXMZKSJCBHNDLSCBDVMNXMYEUGYITKVJGAJEAWFQOPHAPJQLXFEAKTLYNAWUXVDKIQSQTGOWTRLCDTAIFAZXXSWLIZYFBVKHJSNCEROZJUMUODVNIRAKNHFKMESGNBWFQEFWZMQPUGGDLXUJWVLRHVYEOIVTSMLYPYFDNZ");
    msg.lat = 0.18168960435828818;
    msg.lon = 0.6610858200537094;
    msg.z = 0.7418643847142496;
    msg.z_units = 128U;
    msg.cog = 0.061323383432516865;
    msg.sog = 0.5533033358274034;

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
    msg.setTimeStamp(0.015211088519455407);
    msg.setSource(26375U);
    msg.setSourceEntity(53U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(107U);
    msg.label.assign("OJWSCYNAWCMLJBOKBKBWFYECZLVRBQKUICREELKRHTLEZXHPXQVVOYUACFUCTMYNUMBJMOMZNXRPZZNKVBYPLPWVRUIAWIWEUGXNIZGADHIDUPXYTVFTAHLEQXHTTGQUKMDQBWIXQTFVZISRRILOAQVELTAHNLQCSNSCUTKXHSDWDP");
    msg.lat = 0.8525833786381666;
    msg.lon = 0.41677477341073266;
    msg.z = 0.5554596130315471;
    msg.z_units = 177U;
    msg.cog = 0.4837933412426193;
    msg.sog = 0.8678923949253021;

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
    msg.setTimeStamp(0.2653962714948527);
    msg.setSource(1134U);
    msg.setSourceEntity(186U);
    msg.setDestination(32032U);
    msg.setDestinationEntity(164U);
    msg.name.assign("NILENJTUBAFEWCFVYTUWVXDDSOKEXLROUWFOKG");
    msg.value.assign("HZAPDHOAAFWDZXMYBXJNDAKRKDRTCBCEOFYGTGHJBOWJEMTIMGZBMYPPLKECYHIMJQSKDCPUPZNRQSVGGQ");

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
    msg.setTimeStamp(0.7740597988226418);
    msg.setSource(25172U);
    msg.setSourceEntity(216U);
    msg.setDestination(24495U);
    msg.setDestinationEntity(207U);
    msg.name.assign("VGFGUFYHOJINTDUREREGIWXLUKXYNPXNZUWUCMFKTQXDJMRXZPYEQIMPQHNNNGKFZVBHPTIMIYBFLOZMUKMCREATCSJUJERWLQAVXOLHKHKWIDTQRZYFGHYZKYVGCBNFBOPDVSRWJCPQMPNBUTHTDREQVNLJDKAECQNEJQZGUWOYTELVHVOBBMORXUIAFSSMATIDSHWLKIAYGOAYHFZEWLSDWPRZPABJCCDAIOXGSTKDBCPSOSFJBGLCXSMLJ");
    msg.value.assign("RTRUCEDFROXJVANLYITNWQJYSWSZGMWFGSCENDXLFQDSTFIBQISBXFWBFUAPLEEMGZBXQIWNXTBYVIOIQUGKJPTCANCPZHMDHSIJBSODDRMRCMOUHQELWYJZIVGWIBUCFUATZDLNACNTRWYOJZLCNKDOOTZ");

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
    msg.setTimeStamp(0.2309150607220638);
    msg.setSource(17297U);
    msg.setSourceEntity(115U);
    msg.setDestination(51907U);
    msg.setDestinationEntity(185U);
    msg.name.assign("SISIVJEQGBSYZZEZRILXRPULPIOVJQWSSZGVRSCQKDIZNLUYDQNUXEKGVPXGAVPAOYLUDBUQLSBQIYMHKOVTBHLTZXUMDWJETLCAKBENYRXOY");
    msg.value.assign("HMPABJMHQZRWXPTIGXDZDPRQMKCFEKYBJXMGDALCUVULOXHXQUAEVKUUCWBFEQEATZIYVJPWRJROHGZCY");

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
    msg.setTimeStamp(0.94367805570437);
    msg.setSource(35633U);
    msg.setSourceEntity(223U);
    msg.setDestination(59677U);
    msg.setDestinationEntity(173U);
    msg.name.assign("XDOJVODPDDNBBYLPCCSEYTBMUMXBZVHPMJWDCQPWPAOHXKGYXMEWGQRNALAYGPRMZHQRCFNNELXKCKEAJZBYPTPLVFIIGCFTKSOHHMVYNPTHXLIBAUOMKALSTZIRMJELRKBGLGVTVZVAHLFDIWZXURBNHSYXCLIGRNBFTOKSZSFDZQNR");

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
    msg.setTimeStamp(0.43616070188337186);
    msg.setSource(48919U);
    msg.setSourceEntity(211U);
    msg.setDestination(63076U);
    msg.setDestinationEntity(164U);
    msg.name.assign("ZHYQUQYZDCMXDRNAUWDLTQGORCSMWXXFSJJEPLACHIEKNBJWJBDUQLAICXGOKCFSUHIZAFGWEOYTTESIJFYPLLWOOEVGVPKOAJXIJCBXZNPYFHRDMSPZVYQNWTKOUZCBWMRYXRRRITM");

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
    msg.setTimeStamp(0.29184857634054584);
    msg.setSource(333U);
    msg.setSourceEntity(108U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(183U);
    msg.name.assign("HXSPFDRMNCFRQBOZSGHUTLOJINJLOGFEXNEKXRZAGTCAVXLYSZDJELNUQPRZIBOIVUERLXKIBSVMFBJTWGDPIFMOPZIRCMEWJBTPGRLPKZHKHQGFXMZMODFPALDRNKNWBSCTBVAUZENDADYSKUEHEYVPXOQVYVSFHNYLCGGQIUJOTVLKCCNAFQKXPNIGTMYJQROCMMWHKRLSUYDMAHSEQZUWWYTPDZBATHQBK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XOTWAIBXRMMKZDTJRZDNIOHWARSNXMNYQYNPKOPAKUKQZHVCH");
    tmp_msg_0.value.assign("SKZGFSOKIZIADCRRBFAVXUYCIMZXXCLXHHUVBOFQELEEGCSTVGMYDTSPEHWNZYOJIXNVMWAGGAQZAJVTOKSHEYADRRZKXPFXNPQZDIIUJHOSALWVTRKHQXURACVUROCEPFCKKMTJPQULQPLCYDMGRHNWBPDNWJWXTYJOGUYACDMT");
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
    msg.setTimeStamp(0.298360641539252);
    msg.setSource(33257U);
    msg.setSourceEntity(83U);
    msg.setDestination(29734U);
    msg.setDestinationEntity(188U);
    msg.name.assign("SSNAILAPSVFQLCAZSC");
    msg.visibility.assign("SFSCQLTOUSFIEETTARTUJRZRVWQDAZNCMJWAMRGATLKECSJZMENHQONAZZWIQYCNVLKOLTKWEILSOXPIBGYXPUXPQBDI");
    msg.scope.assign("ZXKHGEWPLZBUHSYPOXUDKNFUUMTTYWGAPJWMNCYCYEQVFLCCQMRRUANHVINWJZCRLQJJGIFQXRBOXERVFPGGTTSSIKJRSUNDDYKYZYBQNGPITBMTEOOCZOQFSWVQVFNCKTBEJYCLSDUILSYWYEHLQIOLBRDMIBUNGJLWRIACBKIAWLJSHZZUKTWPAREDKPHBVOWHPMKGJQRMFGDOJIXEP");

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
    msg.setTimeStamp(0.2615479196433802);
    msg.setSource(51603U);
    msg.setSourceEntity(2U);
    msg.setDestination(21252U);
    msg.setDestinationEntity(216U);
    msg.name.assign("HCFXEEXAFDFLKBGGYEJGEHGWZKRYODOHHCRQTHBSICPCJFSOAKNELPQGRKFIBGRCZHUPZXHCCOQSPMDSXGKLMOTUEWBYAAIYPXNQJMFUUBNVGDMUHQRXMDSUJJQLHIIRGVWZZMOTIKTQRDWXYQVNTBK");
    msg.visibility.assign("IUVFQUJHPMBPOZYAZIKGVTADUTDWMSWYXBOLDVDAOCJLRARPJSNEMAVXIMMZZFBRWXSHTVIYHNV");
    msg.scope.assign("EJGPVICRRHKPCDAGOHQZLFXPSESLFNUUQTFKLWKTNJONOBCHLVIOKAQAJQPBNXDRRAVWULAWCKQLNMXORHMPNUAJSBIFRVQMKZVSRYFYYGYVGDHZCXNZYBSGBDESFYENUILASOWEVLFGDBJIKXDXURMUECMOGVTYCWHZTVIHUBZAQCVGSWYDDDJEITWMOGSQDWMBJZMWQXPRAEIEKKXMRFZIW");

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
    msg.setTimeStamp(0.1425838639341488);
    msg.setSource(56481U);
    msg.setSourceEntity(116U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(201U);
    msg.name.assign("BQKUFQVXLBVQXXVZVENOZDBEHGERWRAMSHPTPOKAJRYUALMOMYYXIWMDHSQVPOCSWLLJLOSPTKWBJBNXHLNGMZDFZHCPIJIUCJBWASDLSACVTXERQJIKZROIOSWRUBEOKIGYRCNMORZHVWZMUHQCWWKTGEIFTVDENQQ");
    msg.visibility.assign("HIODJRBWWVTFWAQIWCJOSRHEDHZLMBYHPPXVJHOQUQBDEQEJYXXLEOTMABHGGXVZXNTPJQIWLJJQVPBYCBZMEJUCENKKDVORCBMRNCYSURUQF");
    msg.scope.assign("BWDRBUMTPADPXPRYAWZTROUYDUKFYJHSA");

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
    msg.setTimeStamp(0.7806642280483105);
    msg.setSource(43142U);
    msg.setSourceEntity(44U);
    msg.setDestination(6738U);
    msg.setDestinationEntity(106U);
    msg.name.assign("UTODDVRRLHSTWBVCNQUZDPCNVQILYLKWAKJJIMQTHZVMELCUWSKVPCYFKOHYXNFWQXXWHTPJOE");

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
    msg.setTimeStamp(0.12865582443180656);
    msg.setSource(21064U);
    msg.setSourceEntity(159U);
    msg.setDestination(29605U);
    msg.setDestinationEntity(76U);
    msg.name.assign("CVYDHHUBZDGQPLQUJCEOLFPFJAGMCDOITSIRTOTJAXFEGEEGDKEFXOBSEOPVRZIJJUWHLNPCGPNGCZOHGKKYWXZSERIWZVNILYXVYYEYWRUIDPZOHRLNCQSEQAAMUAGVLSFNZXLVDALZSTUPBUTKMBRVKKPHWWSJXSYEBZJNOUYMRNIPSCISOQTCLTNTTFRNWKKGFUQRXHWFHLFXAWNRYVVAWJQBJHBYBQXBCQQIZMDTFCDDA");

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
    msg.setTimeStamp(0.38474233425568594);
    msg.setSource(27196U);
    msg.setSourceEntity(13U);
    msg.setDestination(59309U);
    msg.setDestinationEntity(67U);
    msg.name.assign("MDNJCRDSHSMAFRDTVJAQUFCXTZZPZUJPGAQPRIMPOICACNRLVLHFJRPWBGWTVCWMHWJJSYGCXBWKKIWDFQKSPCWOYYZNMEOQMQKTHXOXBGVNEFVGSKQCTVYPHJVNILGCRUGIMUSOSOOKWIEYXJEPBNUQAPGHLBXWNXOHOOLKIJKHDYXLTBKBEAMHUFCVMMPYQINFSZAWLIDZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QTBOZNKUEJOGVHDCJZKZGUCJUBOIHAAIMLABDICSDVEKZOYITTMCABXBPVESNQLZQGROUJVHWUMRVESZQRWWHUDHPOHEIFOFWPDDYLPTCMSHNBSFHEFAPWNDSAOWINNJCYFIAVRQZBKXUGPSYXLLWSOOFKMJPPGTLLKHGNUIYKLBIAQUBTQKKGERLFJMDTZGTRVGJTXBKXYXQHMCDSMGVFQVCQPMVXZWRFEZDXIACWE");
    tmp_msg_0.value.assign("ADEQNDHTQUTAYJJMDBNUSKKVDKLVECOBNSFAWXRSOSRELDUEGTCHAAFOKPIVGNXKYVCBIOOZRGUEQLATNBRUKDPHRZVAEDJWTJBAJVFOCDLLIIGFQATMUWSVDRFEWZJNLMKPCZCQZTZRXUBQYFSFOSPBNXUSHMGIGTJJQDQMECPPOFKRGTBMPXYVKYYEOYXMEWZVMSBCGAMLWTHJWXLSGX");
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
    msg.setTimeStamp(0.6797360719047082);
    msg.setSource(58554U);
    msg.setSourceEntity(128U);
    msg.setDestination(60496U);
    msg.setDestinationEntity(198U);
    msg.name.assign("QVTXMCFAEEHVYKWOCFATDKUGLHCLZPDOM");

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
    msg.setTimeStamp(0.9598607589571918);
    msg.setSource(8589U);
    msg.setSourceEntity(166U);
    msg.setDestination(16591U);
    msg.setDestinationEntity(240U);
    msg.name.assign("FDBMCHPQIYMUJKKOKYIGBSYIXWVDRXIVNXQKSREVPOJOPMCMLSPCIUMEGBLOLDAVVWBALYGFOWDTTKDSRDJHSINBHMMDNCQGZIGFXHZDOMWFTNNNQMRJABRVNJVFJARSZAVQTEJGVLTZSQPUYMHITJDPLJGEQYQNBXSEQRUXBIFRPGWOGELDCCEACTAEGAPFYJOYCXKSHHPOXWW");

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
    msg.setTimeStamp(0.8713197182586417);
    msg.setSource(18285U);
    msg.setSourceEntity(23U);
    msg.setDestination(7430U);
    msg.setDestinationEntity(25U);
    msg.name.assign("RYIWJMNANPUNWQINVUZBNGKXNVGBYBSODAOLSMFBHIBRIVFIDEFLPYNPFGVORSGHAEWUOUSORLWXGUCDNNUUWTJGTJZKCEBLQZTMYGSFRNFBRWZVQQOVKDIPXTHPSDYSTABZAPLHFTCLIWADSXEOMKEDHHQYYHIFXLSLKLQRJODVIIJPKFJQXZREMJRMBYPGVCCQXC");

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
    msg.setTimeStamp(0.07205206985988089);
    msg.setSource(4641U);
    msg.setSourceEntity(93U);
    msg.setDestination(14609U);
    msg.setDestinationEntity(165U);
    msg.timeout = 3738539655U;

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
    msg.setTimeStamp(0.758694966600285);
    msg.setSource(47331U);
    msg.setSourceEntity(148U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(175U);
    msg.timeout = 3522955175U;

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
    msg.setTimeStamp(0.6332708305658027);
    msg.setSource(6019U);
    msg.setSourceEntity(8U);
    msg.setDestination(3444U);
    msg.setDestinationEntity(154U);
    msg.timeout = 2396641490U;

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
    msg.setTimeStamp(0.7745723731154163);
    msg.setSource(28787U);
    msg.setSourceEntity(209U);
    msg.setDestination(56693U);
    msg.setDestinationEntity(121U);
    msg.sessid = 4217450889U;

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
    msg.setTimeStamp(0.6941926191913428);
    msg.setSource(44906U);
    msg.setSourceEntity(119U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(137U);
    msg.sessid = 4218824325U;

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
    msg.setTimeStamp(0.406219989465739);
    msg.setSource(60872U);
    msg.setSourceEntity(123U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(126U);
    msg.sessid = 783134638U;

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
    msg.setTimeStamp(0.02260221945118135);
    msg.setSource(34341U);
    msg.setSourceEntity(68U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(26U);
    msg.sessid = 878221015U;
    msg.messages.assign("ZEIGYCAEHLQKSNVGTIJTWLZSUTAXFYCUNOUYYLMMRUAPHEQLZXVAFAZBVOPNMKWHAFSBXGJPCMQJXQTTLBBNLVUFDFPSFTBSBJRFWRUHDTASWHBPKQVRGEMGHJSVOKUCYYNWHLDPOPDWFISOCKNNXLPOZIDCEELFCDRZKYGSRTIOMRHUKARYIUNHVWFQIWOZDYDQMGJMGDVDATEPEWQTNYCMWGXBZ");

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
    msg.setTimeStamp(0.9326270011873747);
    msg.setSource(15507U);
    msg.setSourceEntity(157U);
    msg.setDestination(34420U);
    msg.setDestinationEntity(153U);
    msg.sessid = 50274965U;
    msg.messages.assign("QSQKIIJWXXLVLVGSZEBLFVTJQDFDWXNTJDEBPTZJUPOXVPXETMZFJWLTMHSMVUFXANGVACIGFUVQYJOWAMHACQEBOVINFMWLXZKIZ");

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
    msg.setTimeStamp(0.43561057514418977);
    msg.setSource(17004U);
    msg.setSourceEntity(46U);
    msg.setDestination(40162U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1966260568U;
    msg.messages.assign("OFZIDWAYLPDVILSYCBWLVAFEQPAAHSSBSVTORQTAWULGKZHTPVIYUACDFWKNPLHESTVGRNEZJYEHBJVRRSPXNZNDVQRAJPPJGUMTPIIXRUQCEDFOCYYORXEVRDMXVIAPDOHGCXUMNYUZSTWQKDQJACCWODKHSOSQMBQRZKMBXWFMSDJKUFFLEBKW");

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
    msg.setTimeStamp(0.8438124393670303);
    msg.setSource(21177U);
    msg.setSourceEntity(106U);
    msg.setDestination(14764U);
    msg.setDestinationEntity(133U);
    msg.sessid = 2740382412U;

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
    msg.setTimeStamp(0.13649624745058386);
    msg.setSource(9700U);
    msg.setSourceEntity(40U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(125U);
    msg.sessid = 651464926U;

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
    msg.setTimeStamp(0.5808720934361706);
    msg.setSource(31710U);
    msg.setSourceEntity(159U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(200U);
    msg.sessid = 2264907192U;

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
    msg.setTimeStamp(0.9112714636952866);
    msg.setSource(17469U);
    msg.setSourceEntity(204U);
    msg.setDestination(7208U);
    msg.setDestinationEntity(21U);
    msg.sessid = 913994884U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.9160823154774921);
    msg.setSource(7624U);
    msg.setSourceEntity(195U);
    msg.setDestination(23869U);
    msg.setDestinationEntity(169U);
    msg.sessid = 3712518218U;
    msg.status = 216U;

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
    msg.setTimeStamp(0.21105527371458732);
    msg.setSource(38706U);
    msg.setSourceEntity(158U);
    msg.setDestination(15882U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1854235694U;
    msg.status = 82U;

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
    msg.setTimeStamp(0.18360075907805495);
    msg.setSource(27702U);
    msg.setSourceEntity(81U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(208U);
    msg.name.assign("ASIZUODUESUFJHOBIIGFFTJMEYXTAYGNVKHAPAEFAWKYUZMHDZMHVQRPCUULTCLCLONWKTRUDPXLBGSGLLIHYDQAQXGRTOWHBZQJGBOMVINATWNMEADENBQRVFXDPQRZRKXINPIECJGFOTSSKKRPTJYVHC");

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
    msg.setTimeStamp(0.8317187829038348);
    msg.setSource(61082U);
    msg.setSourceEntity(216U);
    msg.setDestination(49233U);
    msg.setDestinationEntity(57U);
    msg.name.assign("RWXJWKPFNHLBHGRNGRAUMVGKPDIOVXEWFDQVOJHVKPTICZXKNYEEDLYCLHBZMRJPUFEPZLNBZUDUTBBQDZZJUNJBPSUSMEIGFGEFTNDQNOC");

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
    msg.setTimeStamp(0.4424448906716518);
    msg.setSource(39696U);
    msg.setSourceEntity(197U);
    msg.setDestination(64986U);
    msg.setDestinationEntity(9U);
    msg.name.assign("XHYBCYRRVLHJXJOZGALNFRXSEHMWEMXFIELDQXKPPHNFMTYMICTTOOEUFCOYMCHCPHSJLUTHYFPURTMBSKWAQLTLZWNIH");

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
    msg.setTimeStamp(0.20221782551573697);
    msg.setSource(10289U);
    msg.setSourceEntity(17U);
    msg.setDestination(15505U);
    msg.setDestinationEntity(125U);
    msg.name.assign("EIILGEXBAOLBWAYIDZFXIUKJQANTMAGBNPLPTGJSTEZCMWN");

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
    msg.setTimeStamp(0.37769783616071706);
    msg.setSource(1416U);
    msg.setSourceEntity(111U);
    msg.setDestination(4174U);
    msg.setDestinationEntity(162U);
    msg.name.assign("DKWPAKMREWCWGOHRPXPLFFJUOMBPWFNKPCHKKJSLMGWPZXAMQOTOMEDBRWYVCAYKVOXBEAJUCCLUXYGYUOQANXVZBKEFORAHRTBTAIXFUUKRMGPNZHLQMRQSODYFGIXUXGIBCSEMYIJJKMZGQBNIWGZOYLBYIRQLTWVVHJZPNA");

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
    msg.setTimeStamp(0.335387535609875);
    msg.setSource(49221U);
    msg.setSourceEntity(186U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(185U);
    msg.name.assign("BWGMHANLOFJXDCKREZEOJELFHOJMQLORROJIEWGLQHCGVLPMDCTWLEPWOTSBFQBZEMWOYYUIUBMMAJIMESSTZRNVDSAITYATUPHNWDBDFZBTYLSJXVDNSNFKGIXBIWVKYMJBADNKUUOZWYONPFDCKPUXKQJQVKGQXVVLLLNRZRVGGUQHBSFIPXCKCRDXGXJSFVYNKAJRUTM");

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
    msg.setTimeStamp(0.378811681070681);
    msg.setSource(32658U);
    msg.setSourceEntity(89U);
    msg.setDestination(63429U);
    msg.setDestinationEntity(30U);
    msg.type = 74U;
    msg.error.assign("KWVTYYLOXQUJUTBMRGQBNHUGMPXGHBLENMXKGWLXSMGWWIEVOAHPPCEOUAJEVXSISZYKIIBRWBOCDXAFIRXFVNHZHJFCFFKSWBOTHLNTUMBOOUTOINWRGESL");

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
    msg.setTimeStamp(0.44553356038114456);
    msg.setSource(58087U);
    msg.setSourceEntity(61U);
    msg.setDestination(4642U);
    msg.setDestinationEntity(153U);
    msg.type = 74U;
    msg.error.assign("JUPOUDQLCYAEIAPDGTRMOZFHCOFBMKGWVNRFQZWVXTBGPIDMJEONITNKSQVJYYOFWUKFONWADGHMSOLNQMGDEQUXJSERBNTJEFCMNKMVRHXJHRZQR");

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
    msg.setTimeStamp(0.7366367740314153);
    msg.setSource(53733U);
    msg.setSourceEntity(99U);
    msg.setDestination(64164U);
    msg.setDestinationEntity(159U);
    msg.type = 164U;
    msg.error.assign("TTRIZBPXPNCAIDXJKAFVLVESGEYUQLIPJFEKRVWTUTCNZ");

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
    msg.setTimeStamp(0.3600554826430078);
    msg.setSource(58074U);
    msg.setSourceEntity(189U);
    msg.setDestination(21264U);
    msg.setDestinationEntity(122U);
    msg.seq = 37196U;
    msg.sys_dst.assign("SVHFGAGCBCYWKZWYRCTAZJVJNRLHUKMMJIKXT");
    msg.flags = 161U;
    const char tmp_msg_0[] = {-10, 15, -113, -13, 15, 2, -43, -92, 72, 87, -56, -1, 26, 55, 99, 10, -128, -75, 18, -85, 106, 104, -13, 95, 93, -103, -37, 76, 62, -66, 46, 63, -48, -68, 35, -53, 38, -79, 59, 5, -85, -44, -49, -119, -51, -70, 88, -64, 50, -52, -126, -103, -73, -11, -86, -100, -121, 42, 36, -34, 10, -56, -94, -72, 10, 105, -37, 125, 124, 2, -128, 102, 49, 93, -75, 107, -100};
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
    msg.setTimeStamp(0.8706385100404218);
    msg.setSource(15829U);
    msg.setSourceEntity(89U);
    msg.setDestination(18161U);
    msg.setDestinationEntity(63U);
    msg.seq = 46818U;
    msg.sys_dst.assign("WIYDAGKXOYDJBEECOHUFWIAKDMCTFWLFYVZLFGPBIMVQRTPZYJNOCREAENKQWPUUFTGDDONTWPBJJTHQCPKOZTCNHSXUFMLOWFRBBGDWERMUEQHHFBGITDPPPMNIKLGXJTYZKYUVFEZSBMNRPGOVUMUAYJVDEEUIKWVWSYCKVAJHGRCRTBKKZXMQPCLLQIGLAYLHBOISSAOSGZNSDLVXAIOMTDXHXJSMQCZYVSBQXNIQQRXJZRXR");
    msg.flags = 200U;
    const char tmp_msg_0[] = {31, -61, -56, 38, 67, 52, 52, 46, -3, -27, 67, -6, -43, 7, 36, -93, 45, 106, -87, 52, -54, 43, -13, 63, 56, -65, -14, 22, 53, 18, -78, 85, 114, -106, 28};
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
    msg.setTimeStamp(0.5376808165684911);
    msg.setSource(55207U);
    msg.setSourceEntity(115U);
    msg.setDestination(8222U);
    msg.setDestinationEntity(176U);
    msg.seq = 25851U;
    msg.sys_dst.assign("ZFIPUHFCDRIQLYLNCBOWNTMEIOFYVLZZXFBOKJLCOGSNLQGOGDAPFUUQRKFWNCKWMVPVVPTFBKXWPNHGGWTRJLRKDIAPWLZIKHBTEOYDTAJDEUSUYMXCJVQCDUERYHAZMQVYIWRXHRVISKBQZNSOAQCXQXLSCAHLXYICMSQREYOHRKFMJJPAXNANPJWPXVEZAZYDJTZWBLUTMCUEGBQMIJUMFFGB");
    msg.flags = 105U;
    const char tmp_msg_0[] = {-80, -77, -18, -52, 10, 38, -85, -74, -41, 34, 106, 45, 30, 8, 49, -25, -33, -46, -69, 21, 38, 79, 97, 40, 22, 68, 38, -92, 86, 67, -28, -123, 57, -15, -100, 14, 124, -64, 99, 28, 72, -57, 98, -63, -117, -58, -118, -59, 120, 3, -59, -12, 36, 41, 16, -103, 62, -24, -31, 27, 78, -10, 81, 57, 89, 33, 48, -104, -121, 82, 4, -110, -5, -40, -17, -53, -112, 104, 101, -35, 85, 68, 20, -117, 55, -77, -81, -102, 64, -120, 70, -51, -21, -109, -85, -28, 118, -51, 85, 33, 67, -36, 17, -54, -38, 32, -83, -78, -64, 79, 42, 36, -75, -110, -69, 12, 23, 32, -109, -79, 29, -23, -101, -63, 77, -29, 96, 58, 15, 58, 92, -88, -59, 94, -125, 89, -87, 38, -40, 23, -52, 91, 112, -6, 76, 63, 9, 80, 68, -17, 96, 46, -9, 85, -82, 74, 73, 2, 36, 72, -4, 17, -13, -117, -13, -47, -64, -94, 89, -49, -62, -30, 2, 97, 81, 54, 98, 91, -2, 9, -91, 71, -3, -65, -22, 102, 116, -22, 37, 91, 7, 51, -46, -111, 112, 9, 102, 112, -1, 60, -20, -108, 80, 82, -70, -110, -105, 16, 29, 118, -65, -79, 95, -43, -30, -85, 59, 103, -68};
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
    msg.setTimeStamp(0.6415458661516504);
    msg.setSource(18209U);
    msg.setSourceEntity(19U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(142U);
    msg.sys_src.assign("KCZBTNWRXXPKIZNDHJFOEMEVPIYLOOJZEXEULDASEOERUWQYIHVFXOTIQHAUGKTBZYSWCAMXAGARDZQHSDIIFPJBBPWPMMBCHWXIATKMOLYTAKTOQVAVLJXUOPCMVNLSQFCPHNRWEZSPVBGQTSPDICQKOGYWROKLMRNUYLTHJJXGSMIICCWKNSBFTJYFSQNAEDFFNDBEZGGGBCUMMKFHWUAVJDYRZHLJUHRTUL");
    msg.sys_dst.assign("EDXJHOQBEFITIGFBIDUCNNJTORLAJPPRWALGHHYBPQPBBUCPVYGOTHMLJQKIEEROFZNFVUPGZLERMNWFAOZVUDMIAZHJPZIIAXHHVBAOAFCYWJRYKSCECGKSWLZTFSSZIYFEQDLDGIVBNDGJRYFVQYTSNRLOHWECVOCKBXMXADYQPBSUXAVXEKSBQNZKQMKUFOLWEMCWHAYZRSMDQUNRIMTRL");
    msg.flags = 104U;
    const char tmp_msg_0[] = {-117, -61, -55, -16, 77, 79, -117, -118, -44, -59, 125, -44, 41, 58, 26, -33, 65, 26, 73, 55, 87, -85, -76, 63, -35, -30, 16, -10, 2, -101, -116, -87, 119, -105, 107, -114, 116, -87, 26, -7, 50, -25, 93, 105, 21, -85, 96, -62, -122, 56, -107, 50, -47, 49, -87, 53, 13, 93, -38, 61, -106, 116, -71, -72, 50, 4, 92, -64, 113, -60, 112, 88, -60, -7, 4, -126, 88, 108, -47, 54, 44, -36, -15, 82, -106, -10, -95, -26, -40, -4, 35, 69, 77, -64, 10, 25, 63, 23, -1, 41, -124, -93, -32, 66, 8, 55, 20, -125, 72, -23, -63, 100, 84, 86, -108, 6, 90, 58, -43, -8, -3, -41, 108, -23, 59, -71, 78, 43, -34, 44, 64, 30, 22, 116, 53, -109, 117, 44, -107, -40, -57};
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
    msg.setTimeStamp(0.3330112269598704);
    msg.setSource(18208U);
    msg.setSourceEntity(201U);
    msg.setDestination(23007U);
    msg.setDestinationEntity(230U);
    msg.sys_src.assign("PLUTXJMNTPOZVPMAFBIETYDDLGGFXDIBIZHYHRLKESRUCTTFQVKLXCBZRAVPRPGZENDXIHXJBOLMUFOLSQONBDVHSJYXKWHUIHCKFABNBPIDIWAQCDEUTOADVQ");
    msg.sys_dst.assign("XKFYSOBXJAKFSZVPECEGRPNWXAHPTILZWUNCMYFQXKBRRFJLCKGSVHGGNGNQRKJZRQDFOQMWWSOGIOBJSMBCU");
    msg.flags = 68U;
    const char tmp_msg_0[] = {-29, 11, 57, 90, 1, 47, 93, 2, -125, -96, 78, -19, 109, 41, -45, -80, 124, -93, -109, -115, -2, -54, -86, -121, -42, -17, -119, -102, 62, -110, 45, 35, 47, 45, 90, -66, 94, 89, 96, -119, -2, 22, 58, 19, -54, -37, -12, 93, 14, -109, 71, -16, -112, 10, -51, 4, 24, 108, 60, -127, 49, -19, -101, 111, -40, -10, -43, -27, 44, 44, -64, 3, 50, 49, 91, 56, 96, 94, 56, -64, -5, 47, -84, 91, -61, -52, -7, -89, -75, 119, 13, -47, -21, -86, 3, -8, 52, -53, 71, 51, 101, 52, -125, 93, 93, 123, -112, -90, -96, -77, -52, -122, 34, 70, 17, -55, 91, 37, 6, 61, -1, 45, -63, -1, 116, -98, -127, 28, -83, -39, 13, 52, -39, -123, -26, 51, 75, 56, -48, 16, 110, 73, -87, -91, -13, -58, -93, -120, 58, 43, -5, -83, -38, -118, -125, 76, 44, 18, 2, 125, 7, 80, 32, -39, -89, 26, -98, -36, 108, -126, -97, -5, 19, -3, 4, 72, -90, 31, 57, 49, 50, -119, -47, -108, -83, 60, -48, 52};
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
    msg.setTimeStamp(0.5887872278269689);
    msg.setSource(62408U);
    msg.setSourceEntity(26U);
    msg.setDestination(18092U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("TJDMQZHNBNORFWXZKICUMKEYMYVDIWHOBKQOTBFANRHKGXEPYNHRIQUKBFASAFDRFPNCBVASLOCZFEULXNUMXMZHUHFWPTYCCE");
    msg.sys_dst.assign("BBQETGXVYERCSIBRFKJODAV");
    msg.flags = 164U;
    const char tmp_msg_0[] = {51, -7, -69, -20, -37, 110, -58, -100, 3, -95, 4, 55, 125, 43, -25, -97, -112, -21, -115, -60, -23, 110, -97, 20, 126, -67, 80, -67, 29, -95, -70, 44, -109, 72, -110, -122, -112, -71, 88, 85, 61, -9, 19, 74, -69, 106, 88, -107, -21, 58, -55, 105, 48, 99, -36, 75, -109, 18, 82};
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
    msg.setTimeStamp(0.46707492900173087);
    msg.setSource(2355U);
    msg.setSourceEntity(118U);
    msg.setDestination(2527U);
    msg.setDestinationEntity(60U);
    msg.seq = 60754U;
    msg.value = 11U;
    msg.error.assign("FFNIRBQRYMBTOVCCMQKUEXJCOINMEJFXTHRLAXZLIJSJNJRNZGTGTKUIDQYTBGWAOFRFKEFLSZPH");

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
    msg.setTimeStamp(0.1589702765218356);
    msg.setSource(39391U);
    msg.setSourceEntity(243U);
    msg.setDestination(60208U);
    msg.setDestinationEntity(77U);
    msg.seq = 34311U;
    msg.value = 128U;
    msg.error.assign("IACUPEIWFAKZRGCZFOVDVAKWYOQLJCTOXORJWGAPNJVUZZWWASHCTKXRYJARSAFFHQXXHDTJEKUPABJHVICXXYOJNBAYGFOOCDSWYYKTPSYZCJCUKLVOHSTBNBKDDMNBOLDRVUYVHIDGMXWMUMFXTQSVGBCUDHZPELTPQOSVQPDES");

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
    msg.setTimeStamp(0.28497310350410143);
    msg.setSource(49574U);
    msg.setSourceEntity(148U);
    msg.setDestination(11679U);
    msg.setDestinationEntity(109U);
    msg.seq = 51831U;
    msg.value = 193U;
    msg.error.assign("ZCQYFVYCRMEORYZNPEMUODMSBHYGAHNCYKFUOVBPMEXC");

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
    msg.setTimeStamp(0.858621960246558);
    msg.setSource(40693U);
    msg.setSourceEntity(163U);
    msg.setDestination(19225U);
    msg.setDestinationEntity(31U);
    msg.seq = 8101U;
    msg.sys.assign("NHAJZJOXYYDIYKVMHWGLKANODGEUGUKEBJSVEWOUPEOPGKLKZ");
    msg.value = 0.42661487295401646;

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
    msg.setTimeStamp(0.8372295105521028);
    msg.setSource(348U);
    msg.setSourceEntity(116U);
    msg.setDestination(52081U);
    msg.setDestinationEntity(22U);
    msg.seq = 32932U;
    msg.sys.assign("QLUISJIDUXKESLZRGQVOFUHIVXVLPHFBSPFKULKFCTCWXPUXZBPJIUBYJMJKDTQSCKMHEZOJBEWCYW");
    msg.value = 0.7959274441269307;

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
    msg.setTimeStamp(0.838779803750597);
    msg.setSource(36490U);
    msg.setSourceEntity(212U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(135U);
    msg.seq = 14858U;
    msg.sys.assign("AQBIYJINXYGNCWHJTXLJELPVPSMWQFCWAEMCSMFAHFNOKUQPJAHYVXMJDPFNIRKETDMHELBTOHLKTPBGOHJVCOIRRRUWSJZKBUPUTCARGKMXRDOPBWZAVUABCGVXNDSTPUDAXYUKTZVNMIVFWVUXNHZGMHKJGWTQQDLQOUCEOWCGHXZKLGFXZDKLATFBNKIXEPZYAWDZZTBOVQSGNEHQNILRESBQRQJYLYGBUISOWMYSFCIIZMYEDFS");
    msg.value = 0.3653498390412666;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.11266395550693942);
    msg.setSource(27714U);
    msg.setSourceEntity(132U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.4357173354384336);
    msg.setSource(57668U);
    msg.setSourceEntity(80U);
    msg.setDestination(58784U);
    msg.setDestinationEntity(140U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.1722089766724333);
    msg.setSource(26987U);
    msg.setSourceEntity(250U);
    msg.setDestination(21503U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.13432684549757923);
    msg.setSource(9392U);
    msg.setSourceEntity(236U);
    msg.setDestination(43545U);
    msg.setDestinationEntity(217U);
    msg.action = 18U;
    msg.longain = 1633791293U;
    msg.latgain = 231219831U;
    msg.bondthick = 2907617791U;
    msg.leadgain = 3296174491U;
    msg.deconflgain = 4111140662U;

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
    msg.setTimeStamp(0.5977998199969331);
    msg.setSource(26664U);
    msg.setSourceEntity(119U);
    msg.setDestination(18683U);
    msg.setDestinationEntity(66U);
    msg.action = 51U;
    msg.longain = 3567640701U;
    msg.latgain = 3569236805U;
    msg.bondthick = 2386858094U;
    msg.leadgain = 2795409375U;
    msg.deconflgain = 1744767852U;

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
    msg.setTimeStamp(0.5213633068937548);
    msg.setSource(40655U);
    msg.setSourceEntity(209U);
    msg.setDestination(35257U);
    msg.setDestinationEntity(235U);
    msg.action = 39U;
    msg.longain = 3944060285U;
    msg.latgain = 935336594U;
    msg.bondthick = 1988020300U;
    msg.leadgain = 2159690885U;
    msg.deconflgain = 3133955583U;

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

  return test.getReturnValue();
}
