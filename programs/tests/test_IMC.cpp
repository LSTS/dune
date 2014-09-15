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
// IMC XML MD5: 6e3390642d3c9b705db29653656178d0                            *
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
    msg.setTimeStamp(0.8979322040489717);
    msg.setSource(41927U);
    msg.setSourceEntity(201U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(41U);
    msg.state = 204U;
    msg.flags = 49U;
    msg.description.assign("GVBUCITAHPOAXANXKAZGYURELLROSFLIMFTAZVHSLCWMULPKFDYIJSRUHTHZMMHXKNHWBOLXNZSYGVICQV");

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
    msg.setTimeStamp(0.8555602628802156);
    msg.setSource(14413U);
    msg.setSourceEntity(78U);
    msg.setDestination(15341U);
    msg.setDestinationEntity(136U);
    msg.state = 47U;
    msg.flags = 95U;
    msg.description.assign("MDTSVQWPHUKHTTHJZUYLNYCHVOBACTRALCTAGDUOMLEPWNLFVZBNZYNEVGFXEIUTTQXGQDPYWFALUPXHJISJPORBXLIUWDNKYRMHXWZFEYMRCQUZIINSWZNFVNQKEBUZOVOJETGAFKPFRSHMRLTPCCBRGYDMRPJVWUIWXJBXJEND");

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
    msg.setTimeStamp(0.6283503966298534);
    msg.setSource(17507U);
    msg.setSourceEntity(183U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(107U);
    msg.state = 165U;
    msg.flags = 239U;
    msg.description.assign("MOXWLAKGWNBVBTMLGFRWQCPUSBFTBBELXIECZYJOYQLWEUOPVHOFYSVUYAKCJCSDLMRQPSOAAIJMFENKVSURZJWJMPQBRSUATTQFGDGCKNVTTFKKFIXDDIHSMIGUGNDTIZDFHAGZKKZPHJZWXIWRMHLYIOLGLYZEXPPGHNMRSRZHDBGPBNYOOCWDZEHADWTKVUPUCIEVVFLJNJJQWCSIMYQXXZQRXUTUNMAEXAYEOVFKCDBJN");

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
    msg.setTimeStamp(0.8090753943598084);
    msg.setSource(42748U);
    msg.setSourceEntity(147U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.11084307731316811);
    msg.setSource(35413U);
    msg.setSourceEntity(81U);
    msg.setDestination(53635U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.17943381184435558);
    msg.setSource(27246U);
    msg.setSourceEntity(162U);
    msg.setDestination(2688U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.7875772389639231);
    msg.setSource(40516U);
    msg.setSourceEntity(225U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(239U);
    msg.id = 65U;
    msg.label.assign("PLBZJCOJLYESSAHUXRCTOKTUVPVIQJQNOWGBQMOMHBXEOTYABFFWTORFRAJSHDKIHMMUKGWWNOSEAYTZDTTMYEEFVYNODDIDBWQVSEQSAPXMACFJHJXDGZIKULBZCXQUMINQCFJATGWZBQNVRTMFJKXAZILPRUXYJYHLFGU");
    msg.component.assign("TPOHWCBRJUZIXLSAXOYFIVHTSHTIPTMVBAYRZTQVMQZAHEWGXLKZJKHWVRCNOCLVEQEIQVKYYGJLSSGIMJDRLXUFWRACYQMVHCOZKENWSPDGZWGPSLVONI");
    msg.act_time = 27290U;
    msg.deact_time = 61265U;

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
    msg.setTimeStamp(0.1300061210270682);
    msg.setSource(11228U);
    msg.setSourceEntity(63U);
    msg.setDestination(15352U);
    msg.setDestinationEntity(196U);
    msg.id = 164U;
    msg.label.assign("PHVWPAKCSLMJLAKISLVRRSFOSMIDKBQHJVDIXYLHGGDMYMFNNNKAITGQZPHCPMAZYVEBQLZFXEOERMNACXFEIXUYDRXOWNGJVZDDTUZWPVUPFQGUGHVVTLNZVOPWSSXMBNDXBCFKDVEAERSFJINMGCCQEFNEAXJJKULQEOKYMYYLTGLBDUHRWPROKIRBZYEBSQYHABTBCIJTWTLC");
    msg.component.assign("ANIPWQCKKKNSRIDKHTDCXCWTAMZSPIXUYBALVFEBKNDFAFIFBJYREAWOVGCKUXDZHFBLBOWTEQSIHCMGTHWLTXPASXBAHIUUYFVTZQNHFVQXDRDQWZHJOJLJCSTCVGBKTJZBMQKBEOSEAVPCOJESEGZDKILUNAIMYNOGHJOXDUBLYRVFOSERYJZGSTFXRRLKNMVWYYWPZPJ");
    msg.act_time = 10783U;
    msg.deact_time = 31560U;

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
    msg.setTimeStamp(0.7480226581105008);
    msg.setSource(10646U);
    msg.setSourceEntity(155U);
    msg.setDestination(58725U);
    msg.setDestinationEntity(95U);
    msg.id = 106U;
    msg.label.assign("SUCKMPXCIHDNQAICBGDPEXRNVOVRDMTQUAINGANDZVKZUB");
    msg.component.assign("PPIFCBMOIAIOSPJVHVRFQCXZMOQLUVNEBVLSWFRWDICBZTYIKNUMCUEDCONYPUVRUKTJQSCLZKKWPYIHRYMMHDNHMZDKQLQNXKXTYSDBLOSRPEIOJILKXDRH");
    msg.act_time = 34785U;
    msg.deact_time = 46170U;

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
    msg.setTimeStamp(0.9750831655129389);
    msg.setSource(54722U);
    msg.setSourceEntity(177U);
    msg.setDestination(24837U);
    msg.setDestinationEntity(181U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.9994912861917983);
    msg.setSource(21600U);
    msg.setSourceEntity(165U);
    msg.setDestination(62281U);
    msg.setDestinationEntity(0U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.6958393032158793);
    msg.setSource(31108U);
    msg.setSourceEntity(137U);
    msg.setDestination(62632U);
    msg.setDestinationEntity(41U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.1190757096424423);
    msg.setSource(37128U);
    msg.setSourceEntity(188U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(94U);
    msg.op = 11U;
    msg.list.assign("IHTDOZBFRYMHKPCQHIGAQKDCRAEZLXIKAPQGULETHXSDLTVIBZZDPYVXULSSJYCFHFXBLBAPMENMNXPUMAQVREUBJZNUNDBDWPNJTIRIKHCULIGFROFHWOSWJNHYTWMNCQVVMSIKKFRWRVEVSWXERUGAHCYFOFYWTSALPUTVUGLZRSCMQEECIDAMKYDXVSDGCSPDZQOWOOMBITJZZRWOQJWYLGPOAXUEBNKMYJQTQBJENXHBONLGJKJKZYP");

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
    msg.setTimeStamp(0.9115655693909115);
    msg.setSource(4540U);
    msg.setSourceEntity(63U);
    msg.setDestination(5062U);
    msg.setDestinationEntity(102U);
    msg.op = 129U;
    msg.list.assign("WKIIWNSYMQECQLDLPGTQOQRFBCTTMLBCEVFCMJLDVDKUSJJHTRBDXAUCVHOFAFLEMNTRSYZHVHOWBBDDIZQXKNEILGHRPHWWELFIHKSGNCWAPRYRAAJRTLBOZLYXGFIZIDMZXNYMHXBQHXKSURSSOZCNFBUOTMJNFYVYPAFOXMNXDMOQWYHFLSVAERPSUJWNEADU");

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
    msg.setTimeStamp(0.9100929695940495);
    msg.setSource(20551U);
    msg.setSourceEntity(130U);
    msg.setDestination(5348U);
    msg.setDestinationEntity(88U);
    msg.op = 218U;
    msg.list.assign("BXEZSYBUQGVFXZLHOOYWHUDUCWFKFTKTJFAUEXDPORWFZCMNDJEIPKTHULRKALEWPFKPGJYLSHLOMOQNCTCMTEIJPGYSPFJTZCINGJRVWQWTJHBSPEAPVIXIHLLZECCVSG");

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
    msg.setTimeStamp(0.7554052237028119);
    msg.setSource(30686U);
    msg.setSourceEntity(106U);
    msg.setDestination(58841U);
    msg.setDestinationEntity(100U);
    msg.value = 2U;

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
    msg.setTimeStamp(0.17115950790356715);
    msg.setSource(22483U);
    msg.setSourceEntity(43U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(56U);
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
    msg.setTimeStamp(0.9474486576070372);
    msg.setSource(8756U);
    msg.setSourceEntity(80U);
    msg.setDestination(9252U);
    msg.setDestinationEntity(186U);
    msg.value = 169U;

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
    msg.setTimeStamp(0.13671209450037292);
    msg.setSource(63127U);
    msg.setSourceEntity(52U);
    msg.setDestination(5269U);
    msg.setDestinationEntity(25U);
    msg.consumer.assign("KLWVSGQCLRLAAIGGNJVTZHDAAKBQSHWMSZQBGTNSXHYVFPIEVVJPJDHLSLNDXEDCDZQGYNAKKEETGFYXHCTCRZPJXOGQOEPJCWVYCPUUYMLKJIUOTEUMJZBMGMWGI");
    msg.message_id = 41418U;

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
    msg.setTimeStamp(0.04025960709712362);
    msg.setSource(24006U);
    msg.setSourceEntity(168U);
    msg.setDestination(2445U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("BBSDRTQOZSFALNASUC");
    msg.message_id = 46558U;

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
    msg.setTimeStamp(0.8183554548638842);
    msg.setSource(52649U);
    msg.setSourceEntity(92U);
    msg.setDestination(45403U);
    msg.setDestinationEntity(131U);
    msg.consumer.assign("TWICTWYDTGORCDFPZZHHKGPSMQUDIVFMUNXZONQAGBIQECYTMEUQDMFGAHAIYLPEQLIPANWMUFNWWRQKHROHSMBFAQUHJGLLGCDLCMWKBYX");
    msg.message_id = 53617U;

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
    msg.setTimeStamp(0.2236585064227825);
    msg.setSource(12510U);
    msg.setSourceEntity(21U);
    msg.setDestination(50481U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.6239528754935166);
    msg.setSource(60979U);
    msg.setSourceEntity(145U);
    msg.setDestination(43707U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.8396384332272837);
    msg.setSource(63458U);
    msg.setSourceEntity(205U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.09044585369912583);
    msg.setSource(49406U);
    msg.setSourceEntity(80U);
    msg.setDestination(60191U);
    msg.setDestinationEntity(15U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.7051230779522148);
    msg.setSource(53606U);
    msg.setSourceEntity(147U);
    msg.setDestination(15272U);
    msg.setDestinationEntity(236U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.4669010242414724);
    msg.setSource(4461U);
    msg.setSourceEntity(13U);
    msg.setDestination(47718U);
    msg.setDestinationEntity(15U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.18959826710035999);
    msg.setSource(46801U);
    msg.setSourceEntity(189U);
    msg.setDestination(58138U);
    msg.setDestinationEntity(136U);
    msg.total_steps = 102U;
    msg.step_number = 228U;
    msg.step.assign("HNVYVKIMQDTXOHWKNDQRXYZPROCBHFTUUFGZSMVRSRJOWHFJJOBCMNVACITMPAGFGLZIAAMGWZSGQNCBTHQMDWAPRNYBT");
    msg.flags = 169U;

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
    msg.setTimeStamp(0.6751903926752711);
    msg.setSource(116U);
    msg.setSourceEntity(225U);
    msg.setDestination(6855U);
    msg.setDestinationEntity(189U);
    msg.total_steps = 17U;
    msg.step_number = 188U;
    msg.step.assign("AQUVGNFVKAYRKGJDPZRQSJOGVUWLMNTUKUNOORZOTVUOJFNXMFIPDYXJXFSXVBSEFXHRYITHEBHEQVHHLVOFKQGLCHMFXQNSRFHSQQVCKJIJRIEIIFDL");
    msg.flags = 253U;

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
    msg.setTimeStamp(0.06955265803567523);
    msg.setSource(34925U);
    msg.setSourceEntity(180U);
    msg.setDestination(6322U);
    msg.setDestinationEntity(208U);
    msg.total_steps = 132U;
    msg.step_number = 249U;
    msg.step.assign("DXCZFPETHSQJACYDJWKDUBUOBGNLGAWDIVRVCISUURTDQCICOSVVVOXYVHZONWGJZTDZPWEAPXLGABMBTSBDFCEXTFYOHUFYYPSHVBBNLFSRWFRWQWJQPCSEJRPSQQKILYKJZOCRLXFLMEMGNMWINMUJUHAGIGOBDRAGTUVYRQCAHYJFFNKRNWEUKTQEXSHOMXDSKOAMPHZTNZPMTZMZBXHNPKKKRZJBHLENVCAYIAOLKJ");
    msg.flags = 0U;

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
    msg.setTimeStamp(0.5085729182864913);
    msg.setSource(53009U);
    msg.setSourceEntity(118U);
    msg.setDestination(38221U);
    msg.setDestinationEntity(128U);
    msg.state = 49U;
    msg.error.assign("QPOIBFDAHVZLATIHLMWYCEAWMUBEUBTJHZFQUKJUXTKSLSEJUGVHODMECYPSJXQVNBOCGNQMNDSFDEAJNNAYHKBMOWCDXPFBZIEKORKVQYPSVILBEAGRFRASBBPFIIJVUXXPJYROTGLTNDMXWKPWZLZUYCLTMOKRWGVCEACXJILHUNQYZAJVLXGGTMZNHIOETTIWPZUWLQKCXJVWFVPGDPRSSUOYDHGYZMRSEQSYHAWNNTGKCRCDRFXH");

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
    msg.setTimeStamp(0.8131184633196059);
    msg.setSource(38782U);
    msg.setSourceEntity(195U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(185U);
    msg.state = 152U;
    msg.error.assign("ASMQWVCXTOLQJUIUBSHRZHAAIJRHBEUQMOZBIZGJSSCJJOFYJBPMSVQHUDKP");

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
    msg.setTimeStamp(0.07202856458439799);
    msg.setSource(55599U);
    msg.setSourceEntity(118U);
    msg.setDestination(41124U);
    msg.setDestinationEntity(166U);
    msg.state = 24U;
    msg.error.assign("WIKWHVASRMDROUZCLKTHPCUIOCGZDINFYMPTYPCEPNJMITETDFETXURLTHAUQLAASCLBQBTBPZNJJUPOZJHBSQWWIDUGJRMOZYZSXHNDDCQYBAGRWQDEXLYXFYWRXGIFVNTYUQMBVWMVVWBRKLEOFNTDNCUSNIHKQVQTVJFYKGOLELXJRCNJKLDHMOYMOPPGSGHFCQXMUELAEFGKAUIXIKORVWCHJEKGPN");

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
    msg.setTimeStamp(0.5523426323100165);
    msg.setSource(44488U);
    msg.setSourceEntity(154U);
    msg.setDestination(40844U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.3664399895327888);
    msg.setSource(50794U);
    msg.setSourceEntity(247U);
    msg.setDestination(22436U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.10583040361956897);
    msg.setSource(56852U);
    msg.setSourceEntity(182U);
    msg.setDestination(35120U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.6182737474128088);
    msg.setSource(7237U);
    msg.setSourceEntity(160U);
    msg.setDestination(50315U);
    msg.setDestinationEntity(39U);
    msg.op = 72U;
    msg.speed_min = 0.34336535584018757;
    msg.speed_max = 0.5665005068141417;
    msg.long_accel = 0.8680531538942337;
    msg.alt_max_msl = 0.7788214149814822;
    msg.dive_fraction_max = 0.09768847371995071;
    msg.climb_fraction_max = 0.20289824327059125;
    msg.bank_max = 0.5554169656590838;
    msg.p_max = 0.421487477760807;
    msg.pitch_min = 0.4533254342630385;
    msg.pitch_max = 0.5771990779239229;
    msg.q_max = 0.3637483707052054;
    msg.g_min = 0.7569584712057429;
    msg.g_max = 0.2598471299537388;
    msg.g_lat_max = 0.5771779059541838;
    msg.rpm_min = 0.07132590227178504;
    msg.rpm_max = 0.2736818373715165;
    msg.rpm_rate_max = 0.08967814805934704;

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
    msg.setTimeStamp(0.5755069463731477);
    msg.setSource(39189U);
    msg.setSourceEntity(54U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(84U);
    msg.op = 66U;
    msg.speed_min = 0.4857755292023317;
    msg.speed_max = 0.5324090848598475;
    msg.long_accel = 0.3965049566415013;
    msg.alt_max_msl = 0.6186339464318744;
    msg.dive_fraction_max = 0.18477094740680433;
    msg.climb_fraction_max = 0.5179345399803945;
    msg.bank_max = 0.4508287862143756;
    msg.p_max = 0.18094000863784743;
    msg.pitch_min = 0.3600887431494685;
    msg.pitch_max = 0.018179761536864514;
    msg.q_max = 0.8683966889768491;
    msg.g_min = 0.4504036433357954;
    msg.g_max = 0.17980424113575588;
    msg.g_lat_max = 0.676843693147229;
    msg.rpm_min = 0.8349538765287939;
    msg.rpm_max = 0.9086363738846467;
    msg.rpm_rate_max = 0.7150344435585859;

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
    msg.setTimeStamp(0.35602464405129997);
    msg.setSource(25943U);
    msg.setSourceEntity(87U);
    msg.setDestination(11788U);
    msg.setDestinationEntity(103U);
    msg.op = 166U;
    msg.speed_min = 0.18103034575836774;
    msg.speed_max = 0.6060845387431124;
    msg.long_accel = 0.1244321437868734;
    msg.alt_max_msl = 0.9522235771417773;
    msg.dive_fraction_max = 0.5776829059532149;
    msg.climb_fraction_max = 0.28904097571168474;
    msg.bank_max = 0.7480512168458275;
    msg.p_max = 0.7492778810922531;
    msg.pitch_min = 0.2577433005135594;
    msg.pitch_max = 0.9776862599545919;
    msg.q_max = 0.04517198313437776;
    msg.g_min = 0.2899631266692443;
    msg.g_max = 0.5775273245901738;
    msg.g_lat_max = 0.4075939666579922;
    msg.rpm_min = 0.5285086045264924;
    msg.rpm_max = 0.913168159204165;
    msg.rpm_rate_max = 0.6747864530622434;

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
    msg.setTimeStamp(0.7755841747165794);
    msg.setSource(57128U);
    msg.setSourceEntity(229U);
    msg.setDestination(42367U);
    msg.setDestinationEntity(236U);
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.06481978061603766);
    msg.setSource(31905U);
    msg.setSourceEntity(162U);
    msg.setDestination(51103U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.5138704854209812);
    msg.setSource(5994U);
    msg.setSourceEntity(13U);
    msg.setDestination(9224U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.23686277454000582);
    msg.setSource(16895U);
    msg.setSourceEntity(30U);
    msg.setDestination(35475U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.10279198984107685;
    msg.lon = 0.6888577858813731;
    msg.height = 0.291066005422843;
    msg.x = 0.7412598291650396;
    msg.y = 0.5260274226540281;
    msg.z = 0.13780540517530748;
    msg.phi = 0.5900482122876133;
    msg.theta = 0.7203417412457277;
    msg.psi = 0.8467520976248886;
    msg.u = 0.7964682236253692;
    msg.v = 0.33626012742391553;
    msg.w = 0.8547926947466874;
    msg.p = 0.5706090130258225;
    msg.q = 0.5206960793845429;
    msg.r = 0.08935167458941451;
    msg.svx = 0.4438693042615056;
    msg.svy = 0.2816834263802753;
    msg.svz = 0.09551089416827352;

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
    msg.setTimeStamp(0.13268507866546975);
    msg.setSource(21662U);
    msg.setSourceEntity(56U);
    msg.setDestination(35323U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.2925238459813224;
    msg.lon = 0.43482010743732347;
    msg.height = 0.49913108173697973;
    msg.x = 0.5322970555579283;
    msg.y = 0.4324217222704032;
    msg.z = 0.38190771682430047;
    msg.phi = 0.6056314794197514;
    msg.theta = 0.683756028751056;
    msg.psi = 0.30878354403336217;
    msg.u = 0.561230459789942;
    msg.v = 0.45646512069805634;
    msg.w = 0.8417395064873555;
    msg.p = 0.35763045343294886;
    msg.q = 0.10670968055353103;
    msg.r = 0.17051458328069447;
    msg.svx = 0.48853076226783454;
    msg.svy = 0.37132357532493376;
    msg.svz = 0.03913964215973753;

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
    msg.setTimeStamp(0.20753424051656055);
    msg.setSource(50886U);
    msg.setSourceEntity(148U);
    msg.setDestination(32790U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.3901437857368576;
    msg.lon = 0.04774320201218596;
    msg.height = 0.47545479978968985;
    msg.x = 0.45253434014142147;
    msg.y = 0.7582633609311585;
    msg.z = 0.9793303065019892;
    msg.phi = 0.2409006231182378;
    msg.theta = 0.8818221174973877;
    msg.psi = 0.26197147078309824;
    msg.u = 0.8436760689514394;
    msg.v = 0.9431787921389457;
    msg.w = 0.2595987453633902;
    msg.p = 0.8062596001796322;
    msg.q = 0.9803929295039334;
    msg.r = 0.04629267091622524;
    msg.svx = 0.9559478407245448;
    msg.svy = 0.22600058682019974;
    msg.svz = 0.759562448114605;

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
    msg.setTimeStamp(0.6231124694259986);
    msg.setSource(27356U);
    msg.setSourceEntity(140U);
    msg.setDestination(1152U);
    msg.setDestinationEntity(126U);
    msg.op = 62U;
    msg.entities.assign("PIKDAPHKJSTQDSNXGERPOQTYOAVO");

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
    msg.setTimeStamp(0.5182184441787384);
    msg.setSource(44846U);
    msg.setSourceEntity(85U);
    msg.setDestination(61754U);
    msg.setDestinationEntity(175U);
    msg.op = 111U;
    msg.entities.assign("MWRQCHCZITYIGCTFKIDECQFHGQXQOSFXOOVULQTSMFVVLHWYAUJIUASSAMOREBVJXEGAEXFUTLYPMVMWNNPPQHWENZXDJKOVRTZZSPCDOCXOEGTKUGDPEUZYGNKNBYJWGMKVUKRXBNBOKMCYBMKTVFAAITDFPFBKQIVNGSQMVYANPUJLRYQPDBRHZZJFZFHGLTNM");

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
    msg.setTimeStamp(0.9132738731039637);
    msg.setSource(62673U);
    msg.setSourceEntity(155U);
    msg.setDestination(32355U);
    msg.setDestinationEntity(144U);
    msg.op = 150U;
    msg.entities.assign("UENDJFMBWNQVMVAZYDOYEQPPXXXIRFXZHRLEYVAAIHLAJCMPGSPJCUGZGGACCMXIAQOAWEULWTKQCLKDTXSITQREKTJFDONLJSZGQFVRKKBSQOGBYHPFLQSUWCHAOKWVOKSYFZTAKIICYCRFVNTHTRURBUSMETCMUDHQNUFHRUSRBHEZEZGDLPXSPVZIMZBUNJODKBPLONQBYAIJM");

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
    msg.setTimeStamp(0.07020115583574549);
    msg.setSource(35291U);
    msg.setSourceEntity(106U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(45U);
    msg.type = 11U;
    msg.speed = 59135U;
    const char tmp_msg_0[] = {84, -29, 120, 2, -28, -70, 112, 104, -73, -100, 7, 16, -46, -59, 60, 90, 111, 71, -116, 63, -3, 12, -97, 19, 72, 44, 18, -35, -77, -52, 65, 112, 77, -36, -24, 60, -58, -53, -114, 43, -42, -103, -3, -124, 60, 67, 119, -75, 30, -60, -69, -64, 29, -16, -65, 2, 51, -109, -2, 58, -94, 49, 15, -66, -86, -92, 72, -111, 55, 38, -5, 13, -40, 112, 126, -10, -90, -54, 72, 94, 72, -57, -122, 37, 25, -54, 11, -51, -44, -120, 126, -21, 32, 20};
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
    msg.setTimeStamp(0.41185593996662817);
    msg.setSource(25077U);
    msg.setSourceEntity(150U);
    msg.setDestination(53181U);
    msg.setDestinationEntity(20U);
    msg.type = 101U;
    msg.speed = 16186U;
    const char tmp_msg_0[] = {-4, -5, 74, -80, -86, -81, 124, -20, -83, -68, -99, 126, 62, -128, -10, 73, -46, 67, -34, 113, -38, -20, 123, 67, -120, -89, 44, 76, -99, -43, 42, -75, -64, 90, -59, -66, 97, 1, 75, 76, -53, -27, -26, 38, 71, -101, 112, -63, -82, 18, -117, -51, 61, -70, 4, -122, -98, 24, 116, -59, -122, -58, -36, 81, 101, 31, 22, -119, -11, 89, -27, -27, -18, -100, 99, -68, -28, 39, 44, 122, -82, -51, -90, -28, -96, -106, 96, 34, -12, -58, 32, 110, -13, -43, 121, -124, 68, 93, -28, -28, -46, -82, -29, 46, 16, -9, -127, -99, 11, -29, 84, 18, -36, 66, 57, -20, -37, -58, 101, 119, 51, -92, 104, 0, -102, 68, -7, 49, 27, 12, 76, 16, 84, -26, -87, 47, 100, -27, -35, 73, -124, 20, -91, 93, 4, -70, 33, 33, 105, -116, -38, -41, -127, -42, -85, -42, -50, -78, 49, 22, -4, 99, -76, 67, -36, 27, -60, -13, 53, -71, -112, -17, -51, -32, -27, -57, -121, -94, 122, -24, -23, -104, 119, 55, -104, 31, 21, 67, 17, -115, 69};
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
    msg.setTimeStamp(0.3674498821674702);
    msg.setSource(38305U);
    msg.setSourceEntity(126U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(156U);
    msg.type = 28U;
    msg.speed = 62481U;
    const char tmp_msg_0[] = {44, -33, 114, 35, 117, 115, -106, -21, 122, 7, 73, -48, 62, -122, 7, -14, 114, -78, 12, -87, 42, -12, 76, -27, -23, -3, -61, 124, -120, -22, 87, 64, 92, -84, -67, 67, 125, -2, 57, -128, 19, -50, -24, -39, 2, -110, 68, -118, 74, 121, -24, -10, -66, 94, 117, 14, 66, 85, 125, 122, 91, -7, 124, -50, 106, 57, -96, -76, -68, 30, -7, -87, -83, -21, 120, -2, 3, -3, -44, 38, -31, 13, 64, -63, -88, -44, -117, 13, 43, -106, -60, 33, -109, 30, 31, -8, 105, 21, -81, 118, 93, -5, -122, -65, 75, -74, 44, 67, -44, 46, -6, -46, 79, -95, 44, -53, 9, 122, -107, 45, 32, -69};
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
    msg.setTimeStamp(0.3912431927672555);
    msg.setSource(43676U);
    msg.setSourceEntity(155U);
    msg.setDestination(58353U);
    msg.setDestinationEntity(27U);
    msg.op = 154U;
    msg.tas2acc_pgain = 0.24272997729598;
    msg.bank2p_pgain = 0.06274134217717275;

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
    msg.setTimeStamp(0.5748621167613622);
    msg.setSource(31387U);
    msg.setSourceEntity(41U);
    msg.setDestination(40912U);
    msg.setDestinationEntity(196U);
    msg.op = 190U;
    msg.tas2acc_pgain = 0.2170918232897926;
    msg.bank2p_pgain = 0.0781700118081835;

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
    msg.setTimeStamp(0.6429408463693295);
    msg.setSource(28430U);
    msg.setSourceEntity(117U);
    msg.setDestination(27793U);
    msg.setDestinationEntity(11U);
    msg.op = 32U;
    msg.tas2acc_pgain = 0.7823236007401858;
    msg.bank2p_pgain = 0.33615757301796645;

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
    msg.setTimeStamp(0.15924032375745634);
    msg.setSource(26404U);
    msg.setSourceEntity(199U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(248U);
    msg.available = 1527435451U;
    msg.value = 24U;

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
    msg.setTimeStamp(0.5396774485119374);
    msg.setSource(51561U);
    msg.setSourceEntity(38U);
    msg.setDestination(52689U);
    msg.setDestinationEntity(146U);
    msg.available = 1241023300U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.2320071604935834);
    msg.setSource(43872U);
    msg.setSourceEntity(250U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(20U);
    msg.available = 1172383082U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.13455571011456646);
    msg.setSource(23202U);
    msg.setSourceEntity(111U);
    msg.setDestination(14798U);
    msg.setDestinationEntity(169U);
    msg.op = 109U;
    msg.snapshot.assign("BMJSAQJTMFZOMSGYDGYILCDBGAZGSNRLOIFEBFAIQPRKNOWYOWWDXQLEKMDOFOASUZASJHCTTBDLTIJUULATMYNBDKBCMESMRFIUVDWEUFVCXENGYCXYVPDULVUIRDHQPKJSTNAREBZXSCQMBJOGARQEZHPRSNIPIJOFCHPVKBJHXACZEUHYELGTRLKCZGWKHVPYCYXTR");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.9771459464002272);
    msg.setSource(17050U);
    msg.setSourceEntity(158U);
    msg.setDestination(55990U);
    msg.setDestinationEntity(0U);
    msg.op = 95U;
    msg.snapshot.assign("RQVDBQZYVJBHEAYNDXSNGGSRTWQWKMCYJVCHJZHPVGOILIRIXNFBNFIEUPFJWKAVCDRCSZLFHOUAMIDLJQZYUIFAOLEHXQPWJKDQMRDHISUCGOLCAYTRBDXRHWJZLWUNZOYNLPXVULZIGZCOEOPWYPGZSVRVJTWXFQASM");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MFJKGRQUTJPIAEVCUXIGCYAPELGQJYGVFPHHBKZWCOGMHUBVUSDSKESNNLOOEPAPICXGNHEUKVKEJUNJTSQLQJOKRHSKAOQQDBHXQEJMTWLSGWLZUMXVTRKMKRVEAAIIWQDAMNA");
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
    msg.setTimeStamp(0.8814985531475427);
    msg.setSource(22330U);
    msg.setSourceEntity(169U);
    msg.setDestination(49139U);
    msg.setDestinationEntity(14U);
    msg.op = 154U;
    msg.snapshot.assign("FLCGORRVAPHPTWPOVDEJIXGDKUBWCPDHXMYMYVKHLPOGGIHVPILPRRUHBWARHLHJNUZMIEYSIASTIVTRSGZCNBMNMDXN");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 49U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.07532841616353503;
    tmp_tmp_msg_0_0.y = 0.027647444490421225;
    tmp_tmp_msg_0_0.z = 0.09018408018585711;
    tmp_tmp_msg_0_0.phi = 0.9160863987298818;
    tmp_tmp_msg_0_0.theta = 0.358330744892544;
    tmp_tmp_msg_0_0.psi = 0.39341643762240397;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.022930721561835288;
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
    msg.setTimeStamp(0.29036204909579844);
    msg.setSource(15540U);
    msg.setSourceEntity(219U);
    msg.setDestination(36086U);
    msg.setDestinationEntity(185U);
    msg.op = 130U;
    msg.name.assign("QKUSQKYPGXLOUWLFYOEEDRNGVERAWJSRCKDVAXAILWTHTHQNZTXTISTUBMMIHJEGXMJVDLNNUIKFTQIKDZXQIYNCVQMACLYCLEFNATPBMVOEYJKBFATOZNRHGVVBRJYASZLAYPCQTGMYWBDMHKAJSIYLKCSRCWZPXABUBCPOHCOBXQFGVDSPIILSFJYEU");

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
    msg.setTimeStamp(0.9350067102120319);
    msg.setSource(30534U);
    msg.setSourceEntity(15U);
    msg.setDestination(28320U);
    msg.setDestinationEntity(98U);
    msg.op = 199U;
    msg.name.assign("JZMKOSBAHNXBSSPOAEFYZZRQGBOIYIZOPWDDBRKGKPRM");

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
    msg.setTimeStamp(0.9369513035615483);
    msg.setSource(15731U);
    msg.setSourceEntity(46U);
    msg.setDestination(18915U);
    msg.setDestinationEntity(99U);
    msg.op = 148U;
    msg.name.assign("CZCSEACHCVBELZEGDJKVZJLACUHUYHIDWTRJDXDMJNUMYIVSSYBMUTVOHNSQTNAGALVKKFSOWMYFFQYERFIVPQJQXRTGMGGWSHZ");

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
    msg.setTimeStamp(0.08767496478212178);
    msg.setSource(1931U);
    msg.setSourceEntity(90U);
    msg.setDestination(30856U);
    msg.setDestinationEntity(132U);
    msg.type = 209U;
    msg.htime = 0.005090962526802856;
    msg.context.assign("CKIJYIFHWHMWRZUJGKZXDAQTQKILZGLTODMGGBWTLOUINQRBDGFCEONLSIZWMBL");
    msg.text.assign("LPKYPXXGQFZABSDFNYLIVY");

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
    msg.setTimeStamp(0.871314468112404);
    msg.setSource(38337U);
    msg.setSourceEntity(119U);
    msg.setDestination(39459U);
    msg.setDestinationEntity(60U);
    msg.type = 223U;
    msg.htime = 0.5720476927485245;
    msg.context.assign("ENOXCYJKMXKLLSDETAOOTTAVIQYLJPCEKHRIUDKOYWRFKWUU");
    msg.text.assign("WWOQQPHUBTJYJDUMPRHQRHULEMINEQISKMYURYJEFZQNKPLFDDWVKDRRJBIYAAQKTRYBORNXMRFXBXTBIPGXCZXYVMSEAGDWOBQECABIHIZELKBFKBPZUEOFULVKSMRPDZZQVGXCDAWOZSMOCWNJSFMUVHZNXNIXZFAPLOFBWCGCGDTSUSJINTHJZTXNWHSOMCSPLFEIYVKVJVT");

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
    msg.setTimeStamp(0.21057560629038985);
    msg.setSource(27014U);
    msg.setSourceEntity(180U);
    msg.setDestination(14011U);
    msg.setDestinationEntity(159U);
    msg.type = 200U;
    msg.htime = 0.11503684522586743;
    msg.context.assign("RVOHRXFNSMRKGVAQPIVQYVGVIFLEGJPSDYNEFEMMRIOJRAVYIUUWHBUAWABPRKEDNYVLWVAKJGTTCRBHYUFGWNXCACSSOUWHITJEFQKITZMGPCEKATTDQALZNOUZHFPQPKGMVBLSNOMQNCSHLFUX");
    msg.text.assign("XTHXGJHYNYSDQQWDJVPSVIWAUDVMFNRPOQYDRITLECILGXPWSSSBWDOZYIRAGWIHWXXXXEDMJXEWDQEVBZONPEBFRCUCEOHNOEZNYBBVRVEZOKXSIAYNCLMYVTHJ");

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
    msg.setTimeStamp(0.9100773750321888);
    msg.setSource(41734U);
    msg.setSourceEntity(17U);
    msg.setDestination(10353U);
    msg.setDestinationEntity(64U);
    msg.command = 71U;
    msg.htime = 0.33583522116018016;

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
    msg.setTimeStamp(0.786205547538093);
    msg.setSource(28690U);
    msg.setSourceEntity(93U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(164U);
    msg.command = 214U;
    msg.htime = 0.45978085683358905;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 60U;
    tmp_msg_0.htime = 0.11723758552566654;
    tmp_msg_0.context.assign("XIGIZQSONJLBBANKCAOCBZMYOUBMVUWELXIPCQEOZWUJZOAGJFXHKWBDFVCDQTLUDJETEYYGOJURSRVUKJNIKSTMVSVKFPPUTPLBEPSLLWGKMONXRGNVYBNDVXPEOAXRTHLDPKLJEMHBHNZMMDWDNFKRJQHMQHPFCFWPSRZZAYCPSEEWINFOIIRXGXJHAGWLRKFZGXRBQKCYQGYTZNTTYUGISHCDJHCAAHYMDFZIEWQDABYVTOIQVLUQWTXSS");
    tmp_msg_0.text.assign("VSIRTOIEACSTPOUCFUKSURHASNTDRDFEIHLQUUCUFDKABQGWIFHXSQBLTTYONZZUGEBBGMOCXQPIDVQLGDPTQMWXEKAGIPLMHWWYHQLAOOASJYQYZOWXTZOYVMR");
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
    msg.setTimeStamp(0.6956595515309041);
    msg.setSource(45838U);
    msg.setSourceEntity(211U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(195U);
    msg.command = 250U;
    msg.htime = 0.16017314948587558;

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
    msg.setTimeStamp(0.4120391673922834);
    msg.setSource(33702U);
    msg.setSourceEntity(6U);
    msg.setDestination(7808U);
    msg.setDestinationEntity(130U);
    msg.op = 90U;
    msg.file.assign("RYBMVWEEKIQTIKQVMWTPTDGJCMUDEBJGMPCBRZTHPLYAPXYH");

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
    msg.setTimeStamp(0.2440051456247324);
    msg.setSource(52881U);
    msg.setSourceEntity(224U);
    msg.setDestination(15419U);
    msg.setDestinationEntity(43U);
    msg.op = 0U;
    msg.file.assign("JCQOPQXSXWQZVMVUJXVGPGGWLSYCJYKOSNLBSEHRQHLMNOYSHZPCOTTAWLUFXGLKOCHUMVVAFIM");

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
    msg.setTimeStamp(0.19640597262241422);
    msg.setSource(24864U);
    msg.setSourceEntity(169U);
    msg.setDestination(27583U);
    msg.setDestinationEntity(18U);
    msg.op = 36U;
    msg.file.assign("UNPBDWROQLAUHTGX");

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
    msg.setTimeStamp(0.5787795594332439);
    msg.setSource(30468U);
    msg.setSourceEntity(183U);
    msg.setDestination(43545U);
    msg.setDestinationEntity(138U);
    msg.op = 155U;
    msg.clock = 0.20120742198884656;
    msg.tz = 110;

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
    msg.setTimeStamp(0.012580053670035451);
    msg.setSource(43535U);
    msg.setSourceEntity(208U);
    msg.setDestination(11014U);
    msg.setDestinationEntity(86U);
    msg.op = 50U;
    msg.clock = 0.23142233548529223;
    msg.tz = -12;

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
    msg.setTimeStamp(0.6701588213174329);
    msg.setSource(17402U);
    msg.setSourceEntity(136U);
    msg.setDestination(38843U);
    msg.setDestinationEntity(244U);
    msg.op = 95U;
    msg.clock = 0.4623358438008407;
    msg.tz = 71;

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
    msg.setTimeStamp(0.9090433343091541);
    msg.setSource(50632U);
    msg.setSourceEntity(215U);
    msg.setDestination(60341U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.9783436899761248);
    msg.setSource(41120U);
    msg.setSourceEntity(157U);
    msg.setDestination(27251U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.8602943624365319);
    msg.setSource(48244U);
    msg.setSourceEntity(152U);
    msg.setDestination(42995U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.5568421891221311);
    msg.setSource(63978U);
    msg.setSourceEntity(168U);
    msg.setDestination(11879U);
    msg.setDestinationEntity(43U);
    msg.sys_name.assign("MOECXLVFDWGQUCFNYVTQTCRIBUKMMTSZOXCZOAVRTRPEWMRKHPYXAEIPHBNGDQSNDTMMSLAVJDZGS");
    msg.sys_type = 178U;
    msg.owner = 22030U;
    msg.lat = 0.9782955143123911;
    msg.lon = 0.26694920247621845;
    msg.height = 0.5069389246758824;
    msg.services.assign("IHUPXDIHZJGECFMGEQMSRUOBNXYUHCXORLWEDFMFXOTBBWJCGVNDPZJNEDM");

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
    msg.setTimeStamp(0.7644312061492576);
    msg.setSource(47760U);
    msg.setSourceEntity(231U);
    msg.setDestination(45133U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("MCFPKKVRXNYBTRAMSWKQTRHLBORHEJKJRUZFKSVSECYBYWJNAVVDTDPHOILCFJNKFEMBETGXAHIUXPTVYNQMAWDJGKGMAOMEWHZSFZYUVDZKJJORLBELOYJGDIZLSIMQZUCDGZOTHYUASECXVRTGZOGBMUSPKQNQUBCQQHWYSWOGHU");
    msg.sys_type = 213U;
    msg.owner = 49431U;
    msg.lat = 0.37314086523440804;
    msg.lon = 0.5557570498894069;
    msg.height = 0.5866267278344706;
    msg.services.assign("AGCGZCBVIOTRIFVAGYBPMCUEQNWLNMIACYMAIUUSGKSSRCXTLLSJQMULRSWGOVXAALSMFVNVHZEFDOVHRPJJEZOBJFHZSMNPKYZBIGZJGTTUOIFCNMBUEVIKFLYKHNXPUWNYDCTLKZEKLXPZGSAQKJWHDKVJNP");

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
    msg.setTimeStamp(0.8323918463425299);
    msg.setSource(8140U);
    msg.setSourceEntity(136U);
    msg.setDestination(49799U);
    msg.setDestinationEntity(198U);
    msg.sys_name.assign("NUXYTOMSIS");
    msg.sys_type = 114U;
    msg.owner = 28582U;
    msg.lat = 0.9039138115030119;
    msg.lon = 0.12884402192321198;
    msg.height = 0.8748283507543008;
    msg.services.assign("YKNGBXQGGJOTYPNXMRJTKHRVJSAZVZSCLIVCPWEPRLQVYAOYQADJUQDIPQWAMRHFEPHIVKLXYPNLTKTEBMMTMNWPCEHGIANUEBYJVQOAAW");

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
    msg.setTimeStamp(0.6846642842000579);
    msg.setSource(5241U);
    msg.setSourceEntity(220U);
    msg.setDestination(46406U);
    msg.setDestinationEntity(109U);
    msg.service.assign("UBIHCJXTONXVHDSKRMGBGYNDFWAOUMZWIDADJUXJXHFSPTJVECIZJHXQEASSAGERARNLIEIDCXYRW");
    msg.service_type = 54U;

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
    msg.setTimeStamp(0.22382723480854094);
    msg.setSource(48217U);
    msg.setSourceEntity(183U);
    msg.setDestination(19102U);
    msg.setDestinationEntity(20U);
    msg.service.assign("RPKRNITRECQBXBVIICQWNFMMPWEXMZZZKJVWEGDNAWTU");
    msg.service_type = 76U;

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
    msg.setTimeStamp(0.236265405161722);
    msg.setSource(36446U);
    msg.setSourceEntity(203U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(96U);
    msg.service.assign("MLOECIRDZWPQKFCFFFIHWOVKKSYAIEJXYWTIZYANYQEJHPCZLTBTDERAUFBIYZTCRJZYGRMEUNETANKNQMFMXOMVVUTHLLJSHUCAYKJVXDRYOHJCWLLTUVXXQGPKLNBBOIRFKFEXGEDGSBUHMIXOMJVQNCSORQPRCVARAFRMKWDKJPGHQWFOZPXDMMTWXPZWBVUBAJOHCNNSVYZ");
    msg.service_type = 111U;

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
    msg.setTimeStamp(0.055064487479238866);
    msg.setSource(37088U);
    msg.setSourceEntity(154U);
    msg.setDestination(32286U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0923458297243045;

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
    msg.setTimeStamp(0.3257644179239998);
    msg.setSource(49549U);
    msg.setSourceEntity(202U);
    msg.setDestination(544U);
    msg.setDestinationEntity(134U);
    msg.value = 0.12636932739380646;

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
    msg.setTimeStamp(0.7742427012661749);
    msg.setSource(61411U);
    msg.setSourceEntity(124U);
    msg.setDestination(55182U);
    msg.setDestinationEntity(95U);
    msg.value = 0.9502261320801786;

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
    msg.setTimeStamp(0.20883772319150073);
    msg.setSource(1051U);
    msg.setSourceEntity(247U);
    msg.setDestination(16181U);
    msg.setDestinationEntity(12U);
    msg.value = 0.287362595761114;

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
    msg.setTimeStamp(0.7115985531599094);
    msg.setSource(23723U);
    msg.setSourceEntity(27U);
    msg.setDestination(11647U);
    msg.setDestinationEntity(118U);
    msg.value = 0.04054633414085984;

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
    msg.setTimeStamp(0.6645161061123466);
    msg.setSource(15729U);
    msg.setSourceEntity(54U);
    msg.setDestination(50544U);
    msg.setDestinationEntity(150U);
    msg.value = 0.16572368452554798;

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
    msg.setTimeStamp(0.3888038536847448);
    msg.setSource(42782U);
    msg.setSourceEntity(159U);
    msg.setDestination(18981U);
    msg.setDestinationEntity(207U);
    msg.value = 0.2991197998906918;

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
    msg.setTimeStamp(0.06743092377028637);
    msg.setSource(1786U);
    msg.setSourceEntity(154U);
    msg.setDestination(15225U);
    msg.setDestinationEntity(162U);
    msg.value = 0.39001174040509357;

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
    msg.setTimeStamp(0.6271809314845128);
    msg.setSource(33652U);
    msg.setSourceEntity(211U);
    msg.setDestination(20705U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8163884914891079;

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
    msg.setTimeStamp(0.6777750519825255);
    msg.setSource(40787U);
    msg.setSourceEntity(30U);
    msg.setDestination(3812U);
    msg.setDestinationEntity(161U);
    msg.number.assign("IWBIWKZAOZXMMWKVMXJEAHOYUTTFOAGNEETJSHIWQHGPXLZQTUJTMKYFZRMVBMVOFPXKQSLDCDWKPWJYTPLTYUGGRFUNKRQSAYZNSUIJIIJKKIHSFFXOCGQDBBCRTBLFSPUXQENWEOVGFRPMWLBNVCCLMBZAADIBQMNAFQOMSELEVHVUZGAYYEPHUISJTXYDAHCHVDCCQCPKDORBUSGZUHDZXVYYKRS");
    msg.timeout = 6825U;
    msg.contents.assign("UQBQUJNAFHBCKGQOPALRIWUSXKMVKJTYQKRUFEHVSRYLXUPYZCGLOXHTDVDFTIDSMJH");

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
    msg.setTimeStamp(0.7335512690027235);
    msg.setSource(22173U);
    msg.setSourceEntity(217U);
    msg.setDestination(18683U);
    msg.setDestinationEntity(208U);
    msg.number.assign("TMBIGTMMPLYJSGHDVEZWZNUAHBFFPZXYSOUJDDMCQFANJDHKAXSOPEKAVSKRWRGKNOFRURR");
    msg.timeout = 31489U;
    msg.contents.assign("TXJVMDEBNOHWJDERSTATTWUKISRULSLCJKLJN");

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
    msg.setTimeStamp(0.602140196295512);
    msg.setSource(18402U);
    msg.setSourceEntity(49U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(116U);
    msg.number.assign("DYLEOOSUVIWEVDFANCMYMCGHNIOHXEXCDHBFQZEF");
    msg.timeout = 44675U;
    msg.contents.assign("LGWJXQCYIZWPWWGJABISEUCSXHFVBSZXQPMAHJDZVEOGHHTVJSKXOODUMGKMLNUPBGIBNOOVKTBSKZYZHUHUIRBPNYNHWJFFDLMRXEYQFQJTHZSOTDYSVPLBECPHEHLNLCQEQPCIEVFCLRKULIGNURQFAMRJDDEUQAFXPETSAGJUJDZRCTKMXYNVFTARGOOMRXBGWDBCWVINYCNEFCISDMMXKA");

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
    msg.setTimeStamp(0.012671011752453332);
    msg.setSource(13286U);
    msg.setSourceEntity(250U);
    msg.setDestination(20081U);
    msg.setDestinationEntity(85U);
    msg.seq = 2113307663U;
    msg.destination.assign("EDWDHBEUQFBSAFQLNEUZJEKRJLTYYOSGOAUXLTRNPGYUQTLALKZSHVZAPPOQYUZBRWQIXHOWDONIMAEJCQNVKGTMDFWURVZKCMXTWYSCMILCWCSXEPCDBXGNQIVTFBFKWCDLVIVXCQKBPYGZXOSMMNVYRMKBJDIYYWFZHJRRPZSEMUOXBCIFGZIFHIMXARWHAIKBTRBVEMLVLALGXSFCHANZRPVU");
    msg.timeout = 11251U;
    const char tmp_msg_0[] = {90, -22, 67, 66, 79, 17, -48, -104, -28, 2, -17, -71, -52, -25, 23, 29, 114, -83, 9, 116, 78, 50, 123, -55, -19, -100, -124, -93, -42, -23, 65, -20, 106, -86, 63, -32, 42, -53, 112, -47, -52, -102, 41, -51, -23, 0, -94, 92, 39, -124, -123, 126, -30, 17, -34, 33, 22, 6, -115, 24, -116, 43, 124, -16, -92, 75, 100, 27, -82, -61, -60, 89, -113, 39, -121, -31, 112, 0, 123, -85, 99, 8, 34, -45, 104, 97, 22, 100, -107, 51, -25, 111, 45, -75, -128, 9, -109, 112, -39, 83, -20, 98, -35, -35, 123, 28, -44, -86, -81, -76, -128, -66, -90, -20, -61, 37, -5, 34, 49, -48, -55, 7, -85, -71, -51, 49, -80, -124, 78, 22, 61, 16, -88, -54, 15, -22, -101, -58, -72, -58, 123, -64, 35, -54, -17, -57, 52, 21, -16, 125, -44, 107, 48, 108, 86, 1, -49, -81, 43, 95, -57, -5, 70, -115, -110, -44, 36, -5, -11, 6, -97, 66, -48, 61, -66, -14, -55, 51, -93, 72, -51, 83, -79, -4};
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
    msg.setTimeStamp(0.3663939120220103);
    msg.setSource(32893U);
    msg.setSourceEntity(181U);
    msg.setDestination(48923U);
    msg.setDestinationEntity(110U);
    msg.seq = 228770384U;
    msg.destination.assign("FQDDFMFDMRGKTDPEGGMDIHEWSGQWCRTTONNSTXYUEQFJFBLXTVYCLNXDFVTEPIKHLYQADSSOBWBPJMYMQGACIWOPZCAGLQUEMEBQZOOHVTKQMESXMPCDDBJIJWQKVAEWABHAIJWTIZJKJVAUIBULUKY");
    msg.timeout = 60480U;
    const char tmp_msg_0[] = {-91, 116, -103, -110, -50, 7, 21, -115, 102, 26, 110, 123, -85, -68, -30, -109, -81, -110, 66, -76, -67, 35, -50, -79, -114, 10, -95, 117, -88, 46, 80, 101, -127, -60, 25, 59, 1, -39, -4, -83, 85, 56, -43, -13, -58, -65, -11, 101, 53, -74, 15, -43, 38, -18, -62, 7, 18, 9, -126, -21, -109, 79, 57, 3, 60, -68, 36, 116, -71, -72, -115, 65, 89, -90, -17, 95, -4, -117, 75, 126, -73, 99, 113, 52, 115, -28, -46, 1, 28, -2, -96, 105, 105};
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
    msg.setTimeStamp(0.4282220297814021);
    msg.setSource(50294U);
    msg.setSourceEntity(93U);
    msg.setDestination(54598U);
    msg.setDestinationEntity(18U);
    msg.seq = 1041302807U;
    msg.destination.assign("OUUMORBZPFWOUNCYEIVEBJIDMSNEGJHNNBCALTUTCXVGRGUQAWEP");
    msg.timeout = 40757U;
    const char tmp_msg_0[] = {48, 0, -59, -32, -50, 29, 94, 123, 17, 60, -2, 82, -4, 85, -107, 7, -29, -47, 4, 13, -93, 93, -68, 30, 33, 94, -51, 117, -88, 81, -102, 60, -128, 77, 78, 7, -49, 90, 61, -104, 16, -78, 98, 108, 119, 50, -13, -112, 20, 36, -82, 69, -58, -45, 102, 30, -27, -55, 23, -125, 60, 71, -18, 34, 126, 40, 83, 4, -102, -91, 52, 7, 31, 108, -62, -18, -37, -28, -57, 82, -78, -115, -109, -55, 108, 99, -100, -100, -90, -66, 46, 62, 30, 45, 27, -53, -22, 57, 69, -88, -72, 26, 47, -121, 17, 124, -33, -125, 17, -123, 94, -105, 122, 47, -13, 66, -56, 25, 4, -73, -70, -114, 28, -102, -18, -97, 124, -109, 12, 116, -64, -87, -110, -82, -109, -33, 77, -10, 84, 2, -29, -64, -92, -12, -19, -104, 101, 28, -22, 15, 26, 50, -36, 44, -7, 44, 86, 75, -110, 34, -114, -8, -28, -74, 115, -11, 119, -38, -122, -89, -88, -26, -107, 122, -109, -117, -38, -95, 33, -35, 8, 41, -41, -57, -73, -46, -51, 39, 108, -114, 33, 8, -50, 37, -107, -115, 84, 35, 87, 45, 58, -5, -70, 99, -56, 76, 2, -8, 12, -8, -96, -69, -128};
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
    msg.setTimeStamp(0.33925119433230266);
    msg.setSource(9104U);
    msg.setSourceEntity(126U);
    msg.setDestination(46580U);
    msg.setDestinationEntity(247U);
    msg.source.assign("NCSJVBDBNWENWYTASVHACTKJNRUOYOZNRCTPFLEAFJJUAGENBRMWLJGSZSLOSZVRBTHMGUKYAAXOUNNNQGOYDMOLMMYQGQYZOS");
    const char tmp_msg_0[] = {45, 19, 85, -54, 67, 81, 80, 106, -100, 71, 57, 14, 18, -102, 23, -87, 87, 117, 103, 86, -113, 78, -102, 16, 116, -17, 101, -109, 9, 93, -65, -33, -30, -120, 117, -26, 114, -73, -86, 5, -51, 46, 22, -59, -57, 48, -28, 76, -78, -105, 13, 68, 122, -89, -16, 115, -63, 9, -71, -68, -79, 46, -60, -60, 37, -98, 73, 4, -61, 101, 27, -95, -105, -4, -78, 66, 8, 34, -10, -114, 75, -111, 91, -66, -25, 57, 82, -128, 81, -26, -96, -6, -70, 18, 103, -35, 78, -18, -77, 41, 2, -27, 97, 60, 37, 56, 39, 38, 116, 36, -20, 87, 118, 107, 60, 117, -17, -8, -4, 44, 24, 126, -10, 97, -20, -113, -121, -7, 126, 121, -64, -40, -111, -110, -101, -119, 22, -112, 102, 124, -74, 8, 122, 49, 99, -127, -21, -16, -10, -50, -56, -63, 44, 54, 73, -58, -53, 2, 19, 28};
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
    msg.setTimeStamp(0.5424447380277319);
    msg.setSource(22700U);
    msg.setSourceEntity(0U);
    msg.setDestination(373U);
    msg.setDestinationEntity(229U);
    msg.source.assign("ATGZNIITZHYWEDBEJXYPPQEJMMEPEHFNXMYFAZACMYLRTKLBSOYENKTQDRIQSMFANSJKNJBOGWLHLARXIJOQFVDFFPRVVJWMEIOGPQEVRZKPKGMPCUDIYSBAGRPDGRZLHNSHWTICUQYFAFHDXXZRZYBU");
    const char tmp_msg_0[] = {92, 86, -59, -76, -83, 72, 94, -121, 113, 109, -88, -64, -87, 5, -38, 120, -104, -100, -71, 22, -94, 74, -98, 56, 80, 39, 9, 18, 21, -26, -124, 63, -25, 41, -92, 115, 40, 99, -89, -56, 90, 21, -22, 95, -34, -10, -57, -13, 4, -89, 97, -60, -46, 35, -22, -83, -15, -123, 36, 89, 82, -78, 40, -32, 80, 68, 89, 17, 126, -63, 58, -36, -93, -28, 25, -72, -55, -60, -127, 94, 49, -21, 30, 43, -104, -124, -49, -41, -43, -48, -73, 34, 51, 35, 81, 74, 114, -34, 100, 119, 4, -104, -60, 86, 97, -103, 37, -98, -95, 52, 124, 96, -105, -19, 71, 43, 82, -100, 17, 4, -82, -30, 27, 100, -29, 4, -29, 73, 49, 38, -19, -36, -43, 36, 68, -76, -11, 41, 33, 19, 93, 122, -112, 53, -83, 79, 100, 111, 111, 72, -94, -63, -49, 81, -51, -87, 61, -118, -22, -128, 46, -4, -17, 121, 112, -49, 94, 116, -127, -123, -67, -112, 81, 125, 116, -51, -20, 5, -21, -3, -8, 103, 120, -22, 27, 13, -19, 81, -4, -7, -128, 10, -70, 59, 69, 24, 49, 104, -90, -31, 39, 40, 68, 107, 18, 68, 35, -109, 48, 6, 43, 88, 37, -96, -40, 81, -64, 32, -2, 3, 6, 118, 88, 12, 72, 115, 58, 12, 6, 23, 44, -94, -88, -47, -6, 12, 45, -16, -9, 111, 90, -3, 47, 81, 26};
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
    msg.setTimeStamp(0.8451019975979001);
    msg.setSource(40591U);
    msg.setSourceEntity(35U);
    msg.setDestination(4505U);
    msg.setDestinationEntity(15U);
    msg.source.assign("TPOKYBPGWXMPCDAHWMQYRVKGGABCZJPFJHHFDVQSFLJMRKOFHAAAOWHZBWVKBODFVYSNJTGDPMHXSSQXJJQVSIHILWTUCLJGAADUKZQEYCQEGUKYWMEUXBRFMRGZSOIEKGYZSBUQBDULNSJIFWKWXNVCUSULTPUGEXEYLTDNRBJBIBTVEZLLMNCDAHDZRHWNYRQLZRNKPXLM");
    const char tmp_msg_0[] = {22, 63, -29, 26, -65, -101, -4, 0, -11, 18, -77, 89, 61, 114, 60, 106, 9, 69, -27, 111, 84, -98, 84, 49, -84, -81, 20, 81, -1, -59, 79, -30, -33, 72, 67, -89, -29, 28, -1, -55, 114, -97, -30, -112, 99, -6, 114, -10, 118, -3, 3, 76, 74, 105, -32, 66, 49, 37, -37, 121, -124, 16, 43, -104, 62, 96, -98, -82, 103, -45, -107, 104, -43, -20, 113, 118, 26, -39, -115, -29, -87, -126, -97, -124, -127, -109, -77, -85, -49, 124, -119, -118, -94, 78, 47, 90, -118, 89, -95, 70, 46, 102, -12, -91, 111, -66, -125, 116, -59, -19, 72, 90, 89, -46, 48, 0, 99, -97, -2, 32, 5, -43, -70, 17, -116, 117, -116, -57, -118, -70, 20, 58, -126, -102, 111, 18, -8, -120, -41, 114, 39, -117, -127, -117, 13, 31, -46, 43, 79, 8, -6, -105, 106, 42, -103, 124, 15, -15, -91, -36, 4, 20, -39, 72, -93, -64, 54, 79, -28, 82, 112, 96, -79, -98, 6, -98, -51, -35, -28, -96, -60, 12, 51, -95, -23, 22, -33, -34, 119, -58, -103, 53, 106, -32, 114, -82, -96, 107, 11, -103, -64};
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
    msg.setTimeStamp(0.15315425842807096);
    msg.setSource(10851U);
    msg.setSourceEntity(42U);
    msg.setDestination(52954U);
    msg.setDestinationEntity(14U);
    msg.seq = 1094571737U;
    msg.state = 230U;
    msg.error.assign("QHAWQVSAWGTFRLCKWXJLHVQPPSZHLIMPLLYLFOQVNOELHSTPZCADPNBUWGEHEGSMINVWQJQCIEADZJCOSQGDHIMXSUHGIKDOKMKGOUJJTKJYBROOAMTPNOYCEOBTPRQMHYJCCXQVOFKNZXIUXPZZIEBVBMXSGKETFBWDHKSZDGLTANADBWFWBNETLEEKBUGYCNUYYMPIYDXWRVYRASTZFMTFFICAMRBRRXKUJVXPVUAZUZGVNJFHSQU");

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
    msg.setTimeStamp(0.07127629756115805);
    msg.setSource(19538U);
    msg.setSourceEntity(211U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(144U);
    msg.seq = 900073052U;
    msg.state = 172U;
    msg.error.assign("PGNZCRZGYEEDJMUKKSSSKUSWAOBFIBVTBZNJQPREWBDIQDCEOCOOXGWOGROSDSQDWXDUYVHAHRWRQOWMFIBSYXPJDGDCCGGKXFAVYHFAZDTVIRILHHVTJWAUMXJCMQSTVTNZPYTKUELCXLQFPGPNMTALWQFGSXFJKHMASRE");

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
    msg.setTimeStamp(0.5656230266657107);
    msg.setSource(44325U);
    msg.setSourceEntity(57U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(102U);
    msg.seq = 3849014955U;
    msg.state = 249U;
    msg.error.assign("WAZUBGSWKJVKWXAEZPPYATZYOLZUDIEJKDWL");

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
    msg.setTimeStamp(0.02155854332130569);
    msg.setSource(12504U);
    msg.setSourceEntity(16U);
    msg.setDestination(60449U);
    msg.setDestinationEntity(201U);
    msg.origin.assign("FPTPMANXPWKHUVRLBGYILAULIBOFCDSXGAFEVVTAXYOZYMSHNGTCBQXCCTDSUMIUKTZGMAVSMHLRKIYWOENHWNWHLAZUYJUTAWNWNBAQXEQEZDHXQRHZOLYEUPDQTNOXYADLUVSODGOTDEEBFNRKIMGMFJIOGKEDJ");
    msg.text.assign("NEGGTADMVVFHVMLKAEQCIBCNTP");

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
    msg.setTimeStamp(0.9237621416298437);
    msg.setSource(23556U);
    msg.setSourceEntity(145U);
    msg.setDestination(34925U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("YNFZJRGKECVXUEGHXXTUWXLRLENSFNNJCBZBRIFAIYGTVPAXISTAXCKHORMWFCDMARCMDFYEJGRPWQ");
    msg.text.assign("RDWKFTAOFLTHGMDMTJERUDVFRYUDKKKCKNAENNZXOLBKKLOBQAJSIQEMZDMNKTAIIRMPPPTXSOFEBHDSHRSQFLYEAVYWXJOEOHZWPQLCDBYGQJGJLZWYGCMEFHKVCHXNNDDSHGULUNITPVVRZQCYSOKQBQ");

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
    msg.setTimeStamp(0.9352437921145151);
    msg.setSource(35643U);
    msg.setSourceEntity(47U);
    msg.setDestination(41381U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("DAXTXTTYEOUNDQMIBEEDXJBSKHDVIKCPECAJWKDHOWXEGFVRGSKSVANPSOBEIRBXREL");
    msg.text.assign("SKUFUBYHYVBDNJYXOYQSXWQKVSLDHPVCNYPNOPJLFLEEFCKDDDZAFZOIHKURQWHRVHJHQMBGAZNBWFOIPMDANPWJEJUHNMHBZQNMIXMSLGBJTTETXLQYAPGDOGEBIFSYECJZCEBACSTBRYXOOFKADYTDRKTGSEIFRZRWCIQNHGRLUNJRZVFCIRCVAMMJXGUVLTRSACGUIXTEVQZKMXZWJXIUPMUWUEKPBNDCLSQOFX");

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
    msg.setTimeStamp(0.4124987893808616);
    msg.setSource(9602U);
    msg.setSourceEntity(146U);
    msg.setDestination(34489U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("TXLDJFVZCVDYEBURPRIHUMVUBZWSCFZEFGKNCHXJLDCXAKLAWIPWANMMBDALYCAFTTNJNMEGMEDMQIUOQJWXQPTVYMUPHSRGZVWKLIAXVSSHJQFUHSXUOBEZZRJOQXCEAYOD");
    msg.htime = 0.49846510637624364;
    msg.lat = 0.23577149593979008;
    msg.lon = 0.15080651914636223;
    const char tmp_msg_0[] = {102, 4, 96, 48, -123, 49, 57, -50, -42, 108, 122, 9, -49, -117, 73, 44, -39, -127, -86, 89, 65, -87, -126, 55, 5, 30, -78, -94, 100, -91, -112, 116, -29, 5, -82, -88, 88, -79, 61, 56, 89, 103, 81, -50, -91, 84, -89, -74, 28, 39, 33, -15, -75, 83, 113, -84, -116, -88, 94, 119, 32, -36, 0, 98, 60, -125, -91, -31, -47, 48, -78, 15, 67, -98, 26, 6, 86, 114, -62, -1, -26, -102, 25, 47, 26, -84, -99, -72, -103, -57, -6, -12, 11, 68, -8, 107, -64, -97, -116, -86, -75, -10, -63, 54, 47, -28, 35, 7, -125, 48, -55, 113, -119, 4, -23, 55, 62, -69, -64};
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
    msg.setTimeStamp(0.7405112670949326);
    msg.setSource(41988U);
    msg.setSourceEntity(25U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("OJAVKIGEVCRUPFIPMUCVOPZDKHCMOSYBEYWEXHOEXLIGBSNIXDEMPIDZUCDRJLFYBKBDKHZIGTJXESSGDTAPJUKSFXXXNXWYDOWTLAQKASTJLCNBTPRMTTLKHUGSAIRRUJFZEHRGFZWFNSZCRQYDLLTZWCMAXDUYEBNKMMMJLIAIWVLHNOBBFWKVYBRYJOVGHQVHYRPVNWAJSKGVEZNTLWAQXERCQVTNCYJAMHUIPUNZSOMCH");
    msg.htime = 0.6621274992883069;
    msg.lat = 0.981066060638924;
    msg.lon = 0.6468227811460331;
    const char tmp_msg_0[] = {59, -71, -70, 33, 100, 35, 55, 124, -37, 111, -45, -11, -28, -65, -34, 94, -92, 72, -30};
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
    msg.setTimeStamp(0.600087633173837);
    msg.setSource(6731U);
    msg.setSourceEntity(202U);
    msg.setDestination(45246U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("MAEGJOZXFTTWLLKDANEJUTPYAHCVVTJJOKLWMOWSUROVSGXXYPMV");
    msg.htime = 0.40757112065971557;
    msg.lat = 0.5466060356117871;
    msg.lon = 0.015002443849360447;
    const char tmp_msg_0[] = {-120, -64, -50, 40, 8, 17, -65, 72, -57, -25, -11, 50, 32, 66, 7, 69, -58, -39, 6, -41, -106, 114, 94, 62, -2, -126, 44, -84, 0, -56, -113, -125, 3, 59, -41, 33, -79, 114, 84, -35, -6, -15, -30, -1, 12, 57, -46, -96, 58, -20, 96, -83, 64, 47, -8, -2, 66, 124, 62, 47, 7, 14, 7, 28, -9, 14, 94, 57, -5, 9, 18, -81, 74, 125, -93, -122, -51, -1, -71, 113, -89, 73, 119, -21, -5, -91, 57, 20, -26, -64, 102, 68, -42, -120, 83, 40, 50, 8, 117, 11, -67, -113, 10, -115, -52, -33, 63, 77, 36, 108, -96, -36, -111, 67, 96, -100, 123, 79, 65, -49, -81, 34, 34, -68, 87, 100, -78, 19, 110, 119, -42, -108, 50, -58, 113, 95, 61, 34, -79, 22, 106, -126, -14, 113, -41, -26, -126, 78, 115, 59, 46, 52, 111, 98, 75, -72, 115, -11, -102, -91, -54, -99, 41, 122, -101, -128, -65, -46, 27, -122};
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
    msg.setTimeStamp(0.9968197332770865);
    msg.setSource(40660U);
    msg.setSourceEntity(223U);
    msg.setDestination(42720U);
    msg.setDestinationEntity(239U);
    msg.req_id = 14929U;
    msg.ttl = 46082U;
    msg.destination.assign("NNBYSOLJXSNNPVXACPAJWGHKDWJXAMPIYOUGUWJHZXXFIPVZUTAFWIFLPOGTWVTIREQOFUOBKDETMWLHQUEWNJITBSJFEDHVCQTDYNVLMBILWVEQXLECGBQXZVFBUGPMCCXERSUOKGMQYCRRSHYBDFZYQRRGMISHMIBKZZYUZCATBHGTDTLRZJOZLGKRDJDUY");
    const char tmp_msg_0[] = {-98, 5, -64, -25, -5, 38, -73, 104, -32, -103, -70, 118, 126, 47, -29, -83, -79, -122, -49, 41, 52, -59, 62, -104, 43, -90, 122, -86, 98, -68, 79, -27, -68, 59, -121, 75, -10, 124, -22, -125, -77, 48, 9, -51, -64, -48, 24, -101, -99, 92, 4, -81, 17, 68, -24, -92, -91, 16, -56, -82, -5, 64, 104, 109, 78, 100, 48, -62, -41, -111, -62, -103, -82, 7, -110, -67, 53, 115, -88, -63, 61, -38, 82, -95, -105, 30, -55, 25, 17, -82, 0, 35, -87, -111, 109, -70, -73, -86, -6, -120, -74, -29, 42, -13, 62, -2, -3, -20, -107, 36, 93, -79, -6, -35, 47, -11, 76, -70, 66, 74, -15, 95, -109, -76, -32, -128, 33, 52, -21, 12, -65, 61, 65, 95, -85, 125, -112, -115, 24, -37, 66, -117, 108, 91, 88, -50, -40, -60, 30, -48, 55, 42, 39, -24, 36, -47, -74, 52, 67, -2, -95, -15, 116, -87, -78, -8, -127, -94, 33, -125, -35, -55, -104, -44, -53, -125, 107, 52, 71, 87, -70, -79, 115, 12, 46, 92, 25, 94, 4, 78, 79, -30, 61, -17, 115, -36, 90, -117, -110, 80, -13, 8, -58, -85, 68, -5, -34, -107, -108, 32, -55, 110, 81, -53, -77, 66, -21, -40, 46, -64, -114, -33, -118, -1, -101, -56, 88, 70, -77, 33, 70, 30, 97, -23, -86, 19, 114, -84, 111, -97, 6, 15, -63};
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
    msg.setTimeStamp(0.9842713728950583);
    msg.setSource(63409U);
    msg.setSourceEntity(172U);
    msg.setDestination(61410U);
    msg.setDestinationEntity(128U);
    msg.req_id = 7978U;
    msg.ttl = 20927U;
    msg.destination.assign("WPXJGTVJQGOSDIUIAQJQYESGMRGQSCORHVFZAZQNMXATZEAWPNDPYBCMBZCKYPPLLEIRIOXKRWLCEVXBMVDBLKAOITXVHQWJHOFYVIURLHFEZCWWQUGQIYXIMKSGXMAETUHWOPNSHZHRVDZUWLQSDGHIJLSCOFOYECTNKLSJUBWNTRKNXMLZEDVGYBIABJJGMUWURBCCAHXQDCPZENTODVFTOYFNJVSLBZKRFAFMJDDUYEPPSFUMPKXTKNYB");
    const char tmp_msg_0[] = {12, -87, -41, 52, 103, -78, 25, 118, -60, -60, -128, -123, 63, -67, 119, -32, -23, -4, 101, 41, 32, 28, 10, 43, 95, -64, -122, -46, -63, 23, -57, 78, 84, 33, 48, -81, -75, -93, -40, 57, 42, 36, 59, 3, 69, -62, -83, -1, -93, -119, 48, 99, -63, -84, 7, -57, 50, 32, 79, -81, -62, 74, -118, -45, 104, 88, 8, -107, -98, 9, -76, 35, 95, -9, -57, -87, 14, 7, -10, -73};
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
    msg.setTimeStamp(0.49315403191014495);
    msg.setSource(61778U);
    msg.setSourceEntity(23U);
    msg.setDestination(33306U);
    msg.setDestinationEntity(137U);
    msg.req_id = 5464U;
    msg.ttl = 40146U;
    msg.destination.assign("BSVFACHJSKEHIBOQGRUIXVLIBWUASDZZNIQJTIK");
    const char tmp_msg_0[] = {112, -10, -35, 85, -106, 84, 111, -52, 59, 110, -75, 10, -9, -3, -16, 39, -12, -124, 86, 10, 68, 21, 123, 73, -108, -34, -17, 86, -4, 14, 108, -70, -10, -40, 85, 23, 122, -82, 103, -83, -54, 40, 123, -49, 84, -15, 17, -8, -67, 61, 55, -69, -55, 99, 9, 121, -32, 30, -112, -36, 14, 15, 97, -91, 110, 2, 17, 8, -55, -30, 117, -59, -11, 24, 125, -117, -28, 115, -60, -128, 92, -125, 62, -128, 98, -3, -42, -79, 102, 34, 5, -36, 93, 19, 89, 32, 85, 16, -20, -50, 60, 9, -7, -80, -45, -46, -63, -58, -30, 11, -118, -126, 13, 118, -17, -42, -65, 28, -4, -34, -43, -104, 92, -4, -13, -48, -38, -39, -33, 89, 64, 102, -36, 60, 110, 64, -22, -60, -67, 93, -4, -42, 68, -9, -126, 86, -113, -101, -22, 108, 25, 111, 74, 10, -81, -64, -40, 38, -59, -15, 78, 87};
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
    msg.setTimeStamp(0.1082283356888869);
    msg.setSource(37830U);
    msg.setSourceEntity(78U);
    msg.setDestination(22440U);
    msg.setDestinationEntity(172U);
    msg.req_id = 5903U;
    msg.status = 112U;
    msg.text.assign("IPOMVYIRVHYGQYSSGAPBFCIEQZDHSVDAPHOGXOXRZIEHYQJQHVNIIMLEPIPNENNMRGSKCAYSXSFJPHZBJXGBKLNKIBNTCEQQIFJOYCFYGLSTZUCEOYVBVHBOSWLWLDTWKQJUFAOBTJDRRUMNZPGPJUGTTBUMNPFKCCTXFMDDSDOQMUKL");

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
    msg.setTimeStamp(0.8251235927453854);
    msg.setSource(61279U);
    msg.setSourceEntity(16U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(126U);
    msg.req_id = 48962U;
    msg.status = 177U;
    msg.text.assign("HKALTWXNXCVSREABMJUTCXYBHUAKGBKDLDYBEGQQIBPLTUHEJNFUISTBAENWWYHSUFREKIBDUCEYWDZARMKQGVTGVPSPIFUWXVOTTCBEISSFSOTV");

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
    msg.setTimeStamp(0.29189991588842423);
    msg.setSource(12322U);
    msg.setSourceEntity(149U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(93U);
    msg.req_id = 60638U;
    msg.status = 83U;
    msg.text.assign("AHJIBPBGVMVSKEWCMUBZJKGWSKUIKZWDHRBOURXRLBQIVLRATCETQSWNYUTFZVJDPACANKCGHEJJLKBLIFOYXANPVNJFUOVMXWZRKSOLKQDNAWMDODOLJCYSQXEFEVKGTARQCEJQHHIAQNIYBWQSXITOUHEIPHX");

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
    msg.setTimeStamp(0.4829298453580567);
    msg.setSource(60955U);
    msg.setSourceEntity(51U);
    msg.setDestination(43469U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("NHEAMLYFSPBATDYVKSGOAIVVCCPNGGUXLSLIWRVIDTJAZMFABOMDQRPXWMAMQLPUNYJISEMYDYCKBEMJZSJKSZBVHSJTZGUJFV");
    msg.links = 2513379875U;

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
    msg.setTimeStamp(0.05505008693870406);
    msg.setSource(64737U);
    msg.setSourceEntity(219U);
    msg.setDestination(59804U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("TZZIMXVLDOBYBGSCFWJWAPHRYTYZMESLOIBJUDCQVUUSPROEWAIP");
    msg.links = 403807690U;

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
    msg.setTimeStamp(0.28941354271036623);
    msg.setSource(14267U);
    msg.setSourceEntity(51U);
    msg.setDestination(49299U);
    msg.setDestinationEntity(94U);
    msg.group_name.assign("XAAYJORZDOBVFCJYHYRMLWMGERBUBWXGGKTOSUXICIENJKRWKLTFPCOHITJSBXOZLOESVANDQWGNPTGYTBLYTFEIUZQDSZXUSYGVMCVZZLCCWRTIDPEJTOYWFXVCPZHDLKKROQNINLFFBUSFQVECPZLJMQXSQSOVKCIYEJIJEAHRY");
    msg.links = 2430082140U;

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
    msg.setTimeStamp(0.7442365419131161);
    msg.setSource(25551U);
    msg.setSourceEntity(235U);
    msg.setDestination(35571U);
    msg.setDestinationEntity(216U);
    msg.groupname.assign("COYYPKGUVJTGXQUVKJADFPOWMFPHJQQSCETSEIBWDPWJGJOZXJANIKAGMMWCFRAIDOEDQBVBMFOHVEBFHRFYCHZGSCOHOVUUAHKWMCMSTHGEIGNYVKPPUKJTCIJXZLVQZREXYPARXOZBYRNVKPLWSULMQHZWSWGCYNOIZAYOLNWRIZFREABTDSBWNTDDLEPTBUXNUIHNZGPCSK");
    msg.action = 87U;
    msg.grouplist.assign("KENRSCBSATFWBEGZNPELQQAORKNGJQQCLVF");

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
    msg.setTimeStamp(0.7462580910273259);
    msg.setSource(908U);
    msg.setSourceEntity(128U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(99U);
    msg.groupname.assign("JOEBJHROFAWTUKSGTLYZXRFKKDAIZKOOQLRTYUJGZTEVFHRDTPCWVKXDXGRAVYQMAMIPTPHLZFGWXJRDHJVHNNOVMYSGQVNBVLCVAKRHMRISQIFMEULCLJBMGUSSDHFTPJZMBWNSWUOMZNOSNMYEXDAFIAEVUHXQLIA");
    msg.action = 165U;
    msg.grouplist.assign("MHRVGEBDLTINJLENCZOVWQUWYTHKVIIPOYQJGZLEDYRDNCFUZADBJLKRJHCIEVIYFBULGXMCC");

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
    msg.setTimeStamp(0.15572598082109723);
    msg.setSource(38018U);
    msg.setSourceEntity(249U);
    msg.setDestination(24149U);
    msg.setDestinationEntity(16U);
    msg.groupname.assign("ETDNAHLZKNCBLZCTAIWQBVIYMUBOXRDISTMVTWGKVHEGJZVDSHQGONYYJQYHBIJTNUMTCPNRMOKORDMWEQWGAPRBLHNCAGHGQQSXLVMABLDYTEEHASHXCRTXUCWCCKMZKPICDZPG");
    msg.action = 161U;
    msg.grouplist.assign("EMBECLIDCXKSEBWXLDUOYTZFREGSVFPVBPBFBZVLBPYQTBG");

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
    msg.setTimeStamp(0.3846771163888697);
    msg.setSource(38668U);
    msg.setSourceEntity(182U);
    msg.setDestination(50549U);
    msg.setDestinationEntity(88U);
    msg.id = 65U;
    msg.range = 0.12800174996958136;

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
    msg.setTimeStamp(0.6503063514206864);
    msg.setSource(35379U);
    msg.setSourceEntity(62U);
    msg.setDestination(33856U);
    msg.setDestinationEntity(75U);
    msg.id = 50U;
    msg.range = 0.530632574394652;

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
    msg.setTimeStamp(0.4920324263316993);
    msg.setSource(49236U);
    msg.setSourceEntity(127U);
    msg.setDestination(125U);
    msg.setDestinationEntity(159U);
    msg.id = 231U;
    msg.range = 0.7917167527804495;

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
    msg.setTimeStamp(0.3696312047418201);
    msg.setSource(49440U);
    msg.setSourceEntity(76U);
    msg.setDestination(21444U);
    msg.setDestinationEntity(126U);
    msg.beacon.assign("HSDWZFCYXZSOWAAQXGGXGWBHSPJBQAAKTIRPETKDUCWVLUDZSEQJSWHIJPAJAOZEQFGMRQZXXHQRTCJVWNIYKZCGFONVFOTFLMADBTVDLLCNJECYDF");
    msg.lat = 0.3128143503608417;
    msg.lon = 0.2530613140277136;
    msg.depth = 0.47913691098589284;
    msg.query_channel = 165U;
    msg.reply_channel = 149U;
    msg.transponder_delay = 20U;

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
    msg.setTimeStamp(0.9659410379101978);
    msg.setSource(49131U);
    msg.setSourceEntity(236U);
    msg.setDestination(61310U);
    msg.setDestinationEntity(57U);
    msg.beacon.assign("OPICCUXFSXGZUUAYGPLTORGAQRJHHHBTCJHJDKQPVDTPQXNWYDSOZMWDSRDLMRRRNXBWBQCXQNQYVRGVAEPYWJYKZUBNGHAVXYHAMFQNBSUJOSQIMFWPMGZVDEIAPFBCXQHKETNVOLOZTVWCMNAJNGTIFMIDEBLTMIZBDAAIEFEKU");
    msg.lat = 0.49495644279190987;
    msg.lon = 0.5040020115432091;
    msg.depth = 0.908669422859928;
    msg.query_channel = 87U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 117U;

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
    msg.setTimeStamp(0.3706821445157097);
    msg.setSource(35692U);
    msg.setSourceEntity(137U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(72U);
    msg.beacon.assign("OAADVBABNLDJUBCYSCGIJAHRMUOSLWCOAFXRSUGVNJLHEIRVBJYHHSASDIYQLDXDEPQTPYIUSRANZIVXZLXYJNNKTBUBXUPXBMERJMCSVWXXIDZCPKVGYXNBQFPMNOC");
    msg.lat = 0.6538529650915723;
    msg.lon = 0.7095280839377396;
    msg.depth = 0.8153582331071251;
    msg.query_channel = 66U;
    msg.reply_channel = 205U;
    msg.transponder_delay = 167U;

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
    msg.setTimeStamp(0.8106571374443159);
    msg.setSource(32406U);
    msg.setSourceEntity(49U);
    msg.setDestination(17467U);
    msg.setDestinationEntity(235U);
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
    msg.setTimeStamp(0.990987996359451);
    msg.setSource(24434U);
    msg.setSourceEntity(87U);
    msg.setDestination(24593U);
    msg.setDestinationEntity(91U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.1752024929817937);
    msg.setSource(9570U);
    msg.setSourceEntity(27U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(33U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.24551544371591927);
    msg.setSource(38299U);
    msg.setSourceEntity(248U);
    msg.setDestination(22556U);
    msg.setDestinationEntity(102U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 33737U;
    tmp_msg_0.type = 131U;
    tmp_msg_0.utc_year = 21476U;
    tmp_msg_0.utc_month = 157U;
    tmp_msg_0.utc_day = 16U;
    tmp_msg_0.utc_time = 0.08805336600527813;
    tmp_msg_0.lat = 0.932986543610222;
    tmp_msg_0.lon = 0.5736203269204253;
    tmp_msg_0.height = 0.8369154577934445;
    tmp_msg_0.satellites = 96U;
    tmp_msg_0.cog = 0.8204841263570916;
    tmp_msg_0.sog = 0.46285014807065894;
    tmp_msg_0.hdop = 0.5582666660335911;
    tmp_msg_0.vdop = 0.38699706295237357;
    tmp_msg_0.hacc = 0.937570169756022;
    tmp_msg_0.vacc = 0.98847161693289;
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
    msg.setTimeStamp(0.836415630847461);
    msg.setSource(19533U);
    msg.setSourceEntity(218U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(97U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 43U;
    tmp_msg_0.goal_id.assign("WOMABGGUBUSQRYTBDQLXKWJOXVJFGQSPHRFKNZVUKXWNGTMJLOSABTSFMCULPDQ");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("HWVLFSLPNYPWAMUOVEGTLTHIGNATXPWYERQUUFOOWPVXFSDBIJCDBWCBVLPFBXQYEXYUIKBMAGMFPZDYBKBALTTTCZFUZFOGWJZLIYVBZTNODIZAVZFJGMRQES");
    tmp_tmp_msg_0_0.predicate.assign("DGOQJXAOOODWXBONHGLEFHRRJEILMUAZJQIQEMMEITENTBYUGZSRZCSNJDZURXXCMFHEQDTOVCWIZACLQZHWCUZVYNPQXTQVQPKUNYJYFJUTPYITVJSOKLFESJXHSLUIBGCTOURESDVWBLPEKJMB");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.041063923967217586);
    msg.setSource(52145U);
    msg.setSourceEntity(45U);
    msg.setDestination(28852U);
    msg.setDestinationEntity(155U);
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 132U;
    tmp_msg_0.snapshot.assign("QDJKOVIXYLZBFMEJRHLUUVXHTNVZHNJMYIJXGLMNKAAQBMVGQHUEXHFHCFADSTCKNNWAMSTEJEHKYLARAKWLMGPOGYPDEWZOEJFMBNVSOYQDYODSZBUWTGUKZRRVMOY");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 2999119582U;
    tmp_tmp_msg_0_0.id.assign("ZKCFGVBBHYFXANTVMJNZHDVQXCDEASEWKI");
    tmp_tmp_msg_0_0.memento.assign("ECXJZLZMQTKEMYBMQIXZWMVWUKKAVCWKNZDCCLZVUKGEXTVTHQEUVXUXPMKMTWJRKAWNOHRRAFHPYJJNVYYCOMOSDNUHGLVRESJZGHSJETHFTQQQHGSHBMYYNPYWGENXABNOMTETASLWBSLIA");
    tmp_tmp_msg_0_0.group_name.assign("PLNGUMEKMORJOJNTBVDRHMCFQAHIVMCNSUIOPAGRLEONELUSGFGNVAYEACXOLRZXNEFATRRAUDDTQXKCJDCIGIUTASLMOYZZJHKQXFXRHQVZOQGESFDPRUFBQILUGKYQNZSUBMZIBYDYPUQTXHIKGWPRBOCHYQVOKCLSUZEKJBBXOWVEDKGFKWYVTLZIQGSYJTZRVDXATJEPBFZWDXPLPVWMPWHTIWCYBLSASHHNMPEWYNDIHWCCFJSJTJ");
    tmp_tmp_msg_0_0.formation_name.assign("ZNGAQTOVRANAUSUQGGDYCJFQSHCWLMDGMFZTZBOJYJEKRBRBAQSHZFGNVWWOAUQBPSGHGDINXDGMKFLBF");
    tmp_tmp_msg_0_0.plan_id.assign("KGETVFUTQDMBJMKCPJDSNCQBFUOCXHTJGLUDSTEXKHIQSGETCHBALKNPGAOSZRRPSEILQIYEWPERPUOIOJZTMLRGVBYLUVGRABJXQKXSXDRAMQRSLOWUXMJYMFKNZINZEAHFCGESOZMFNWBJCWUVDVRCSAVEKHTIVKILMBAKONDIUVQXLBZFRWYCPZGPBYDDLQZJC");
    tmp_tmp_msg_0_0.description.assign("PNUFSBVGKIWPVLILXDVUYTEWDAVLSDYWHQMBBAXLVNYMLPMTTNAEZJBCDQKFQ");
    tmp_tmp_msg_0_0.leader_speed = 0.5247168167793809;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.3160793180016521;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.15261792968356958;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.5998653408867642;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 27529U;
    tmp_tmp_msg_0_0.converg_max = 0.7738475153059249;
    tmp_tmp_msg_0_0.converg_timeout = 1496U;
    tmp_tmp_msg_0_0.comms_timeout = 58729U;
    tmp_tmp_msg_0_0.turb_lim = 0.8900230982289841;
    tmp_tmp_msg_0_0.custom.assign("WQCGSBCYTDBDKBBFLKYKUOASHIYMDPPXSIRWQAONYGXSOLXLHXKDCUXRNPQSITFGMNPPABGFNVNOYT");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7871838956172816);
    msg.setSource(61409U);
    msg.setSourceEntity(56U);
    msg.setDestination(31374U);
    msg.setDestinationEntity(111U);
    msg.op = 131U;
    msg.system.assign("TMKLLGNDSWDQSCCIKONFFVJWTPDDQLPWRGSYYHUMHDXIMJRZZAOBHFIPWPIQIUBADBYBERYARRNCEELMUTHWCKPCFMJHSWUHLCTZCKPFDHGXBKVWJILUKJNQESTGUOMTNNHRUOD");
    msg.range = 0.6272682302087623;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2245214899U;
    tmp_msg_0.destination.assign("ZWBNOHOHFULRYDDVAPTBFTHECJRKDNBJYSZJGVYDWICWQKUQSAYGZZLRJBCAHFUI");
    tmp_msg_0.timeout = 22135U;
    const char tmp_tmp_msg_0_0[] = {-2, -123, 83, -16, 33, -57, 92, -95, 61, 5, -98, 94, -72, 31, -20, -24, -34, 21, -100, 120, 69, 50, -122, -24, 55, -57, 108, 68, 102, -10, -88, -112, 75, -76, -124, -5, 59, -49, 118, 90, 0, -23, -44, -95, 43, -102, -103, -22, 24, -79, -25, 19, -125, 6, 108, -91, 103, 89, 118, 84, 90, -10, 20, -90, -32, -79, -101, -64, -33, 111, 69, -17, -22, 37, -47, -123, -116, 55, 114, -128, -67, -44, -70, -91, 74, 115, 3, 18, 10, -4, 64, -121, 27, -23, -41, 102, -85, 92, 77, -92, -124, 70, -6, -52, 2, -24, 45, -127, -45, -30, -127, -41, -60, 20, -64, -122, 47, 48, -19, 113, 42, -61, 94, -28, -94, -99, -17, 34, 50, -14, 88, 30, -96, 67, -87, 10, 27, -98, 3, -73, -40, 26, 79, 53, 93, -46, 45, -44, 105, 122, 81, 105, -115, -20, -23, 71, 52, -41, -19, -119, -7, -20, 76, 31, 70, 69, -24, -101, 88, -67, -74, -29, -21, 36, 21, -44, 125, -61, -28, 116, 73, -72, 85, -84, -52, -98, 21, -111, -21, 27, 67, -60, 40, -45, 25, 89, 27, 38, 27, -28, 43, 7, 74, -24, 107, -69, 72, 12, -48, 93, 109, 111, 75, -114, 96, 126, -62, 119, -121, 95, 48, 1, 118, -62, 28, 10, 46, -102, 118, -69, -85};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.07886441454151749);
    msg.setSource(54729U);
    msg.setSourceEntity(150U);
    msg.setDestination(38976U);
    msg.setDestinationEntity(156U);
    msg.op = 224U;
    msg.system.assign("BJNYIMGJDHKPUWXKITGHZKKXBARZQZPBGONEDYQXVFQGZPNOLJFURUEUHAYTRFGGVSCFAYIHLHDBWXLNQJBYFBOPBFKDXTWUTWCELQZWPEORNSDYMAPUOVUMUASL");
    msg.range = 0.9949923345123287;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 196U;
    tmp_msg_0.max_depth = 0.9662983006803244;
    tmp_msg_0.min_altitude = 0.4092505768188087;
    tmp_msg_0.max_altitude = 0.35434429966892544;
    tmp_msg_0.min_speed = 0.02546303022428631;
    tmp_msg_0.max_speed = 0.6277202406497809;
    tmp_msg_0.max_vrate = 0.679977521786861;
    tmp_msg_0.lat = 0.024314482164400686;
    tmp_msg_0.lon = 0.4248289559627294;
    tmp_msg_0.orientation = 0.627510937145644;
    tmp_msg_0.width = 0.5592896920665603;
    tmp_msg_0.length = 0.8904257928481829;
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
    msg.setTimeStamp(0.6841148381632598);
    msg.setSource(4614U);
    msg.setSourceEntity(161U);
    msg.setDestination(48401U);
    msg.setDestinationEntity(8U);
    msg.op = 244U;
    msg.system.assign("GXYDMBFXOFAZYWQBRQIAKSBCNWYGAPJMMVRZWHEJAKLTMKJBHMQXLHSMNYOKTHZIEWEOZHCVQJNDFPSATRZRXWWESWITNUZZWPXUDQUEOCFFTEBAJPZMPQFLJTSPAJELVYAXVCQPIAUDGS");
    msg.range = 0.23997642055688584;
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 1888547470U;
    tmp_msg_0.status = 60U;
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
    msg.setTimeStamp(0.7040790445052195);
    msg.setSource(24866U);
    msg.setSourceEntity(142U);
    msg.setDestination(13332U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.801945751126653);
    msg.setSource(53028U);
    msg.setSourceEntity(160U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.5534466896528456);
    msg.setSource(26936U);
    msg.setSourceEntity(148U);
    msg.setDestination(60981U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.6116176168776569);
    msg.setSource(37943U);
    msg.setSourceEntity(108U);
    msg.setDestination(13119U);
    msg.setDestinationEntity(142U);
    msg.list.assign("NWFBFRIUTIVTYQPNSJBQVUOMBMXVKUKEZEWHBTFPDWRRYGLZGJDSJYYGEJHRRUVVHFIOOCB");

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
    msg.setTimeStamp(0.7285257229057325);
    msg.setSource(38496U);
    msg.setSourceEntity(150U);
    msg.setDestination(31030U);
    msg.setDestinationEntity(236U);
    msg.list.assign("TJIJPCBGYBJJTYUCVAZLDQWLIPKTMWPAQBEYOGTEVYHOHCSTCZDJZXPOMRZEWYAUWLXELCWSNUDOYFKTZBSFUIDEHQRPUXDMRIGLBGIIAHMMARKGHBUKQSJFEGKVSWXNPHJNRQKVHLSETZXBYAMQHMOURNADKRGGYFBBXZVCHNIMJCILEUHNKFFCZGIDXASXSRDNJPOVQUPLNWSTVELZWLASXBWYFDCKYFNPOGIRTQFVNZOMWPXJRVDTO");

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
    msg.setTimeStamp(0.8531584132956403);
    msg.setSource(60977U);
    msg.setSourceEntity(179U);
    msg.setDestination(40252U);
    msg.setDestinationEntity(30U);
    msg.list.assign("OJLNXCVKLKMPLOWMTSZWYJTBSAORIEUAYVWRQCPOCEQNPDAYJXGBOECUNKJIDAIKNFDDRQAUGOVIVVFWPEDORCVUZHCGAIMBNZWUGEMQGMGPTOUEFQSKLKPNWEVCWRKHYYHRXDNJFSGIESESTBQHFORQJZUYJVFMGXDBLCBXMAUDPFMIJYJIDWCNIXZWHLWXZVGTJLMRLOXZLFVYSPAYTQSAHHQDNTHB");

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
    msg.setTimeStamp(0.3485056216255079);
    msg.setSource(18108U);
    msg.setSourceEntity(241U);
    msg.setDestination(46678U);
    msg.setDestinationEntity(71U);
    msg.value = 9884;

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
    msg.setTimeStamp(0.42114712636152507);
    msg.setSource(7634U);
    msg.setSourceEntity(228U);
    msg.setDestination(12948U);
    msg.setDestinationEntity(233U);
    msg.value = 17117;

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
    msg.setTimeStamp(0.6641467748551816);
    msg.setSource(14925U);
    msg.setSourceEntity(213U);
    msg.setDestination(25157U);
    msg.setDestinationEntity(138U);
    msg.value = 30889;

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
    msg.setTimeStamp(0.4290803582218313);
    msg.setSource(36680U);
    msg.setSourceEntity(62U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(169U);
    msg.value = 0.01713848229091619;

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
    msg.setTimeStamp(0.5086320633515822);
    msg.setSource(54394U);
    msg.setSourceEntity(40U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(130U);
    msg.value = 0.776014517596725;

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
    msg.setTimeStamp(0.5340288923737248);
    msg.setSource(25750U);
    msg.setSourceEntity(169U);
    msg.setDestination(57848U);
    msg.setDestinationEntity(244U);
    msg.value = 0.9879699743184714;

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
    msg.setTimeStamp(0.6796003850119374);
    msg.setSource(60792U);
    msg.setSourceEntity(35U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(123U);
    msg.value = 0.3310937357952889;

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
    msg.setTimeStamp(0.33386946859822664);
    msg.setSource(51597U);
    msg.setSourceEntity(239U);
    msg.setDestination(52515U);
    msg.setDestinationEntity(97U);
    msg.value = 0.2987823311733927;

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
    msg.setTimeStamp(0.897868921741737);
    msg.setSource(25015U);
    msg.setSourceEntity(40U);
    msg.setDestination(28504U);
    msg.setDestinationEntity(103U);
    msg.value = 0.32493304201696915;

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
    msg.setTimeStamp(0.9815306957772735);
    msg.setSource(44363U);
    msg.setSourceEntity(168U);
    msg.setDestination(56367U);
    msg.setDestinationEntity(104U);
    msg.validity = 63714U;
    msg.type = 247U;
    msg.utc_year = 58237U;
    msg.utc_month = 135U;
    msg.utc_day = 29U;
    msg.utc_time = 0.05049717308535717;
    msg.lat = 0.007161468576161845;
    msg.lon = 0.2680843204454395;
    msg.height = 0.9756123788432469;
    msg.satellites = 110U;
    msg.cog = 0.1018955864549359;
    msg.sog = 0.2412197479020678;
    msg.hdop = 0.6817167849977404;
    msg.vdop = 0.9805417070761263;
    msg.hacc = 0.20489519912310228;
    msg.vacc = 0.43727979879251944;

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
    msg.setTimeStamp(0.8630481790327224);
    msg.setSource(48742U);
    msg.setSourceEntity(80U);
    msg.setDestination(1120U);
    msg.setDestinationEntity(15U);
    msg.validity = 64279U;
    msg.type = 70U;
    msg.utc_year = 38685U;
    msg.utc_month = 111U;
    msg.utc_day = 248U;
    msg.utc_time = 0.37308846678188545;
    msg.lat = 0.6642146793368944;
    msg.lon = 0.6208350458672286;
    msg.height = 0.858362486842534;
    msg.satellites = 237U;
    msg.cog = 0.9575762838649634;
    msg.sog = 0.4032194851304083;
    msg.hdop = 0.09667129873845348;
    msg.vdop = 0.37985270959232664;
    msg.hacc = 0.5293630038584082;
    msg.vacc = 0.9420366409200923;

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
    msg.setTimeStamp(0.8597258409197246);
    msg.setSource(40614U);
    msg.setSourceEntity(85U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(76U);
    msg.validity = 56605U;
    msg.type = 163U;
    msg.utc_year = 2515U;
    msg.utc_month = 158U;
    msg.utc_day = 253U;
    msg.utc_time = 0.6044834173311117;
    msg.lat = 0.7367659519231485;
    msg.lon = 0.20211955359648692;
    msg.height = 0.1740023768929262;
    msg.satellites = 152U;
    msg.cog = 0.8897428979935249;
    msg.sog = 0.1556377168367148;
    msg.hdop = 0.026829140358200387;
    msg.vdop = 0.4244327934326072;
    msg.hacc = 0.3704427008816773;
    msg.vacc = 0.14126018583113364;

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
    msg.setTimeStamp(0.23988695467866306);
    msg.setSource(28062U);
    msg.setSourceEntity(48U);
    msg.setDestination(41101U);
    msg.setDestinationEntity(208U);
    msg.time = 0.8041085054585787;
    msg.phi = 0.4554728308441318;
    msg.theta = 0.38148536065600946;
    msg.psi = 0.8534239288334974;
    msg.psi_magnetic = 0.6824849014705349;

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
    msg.setTimeStamp(0.4684229522295693);
    msg.setSource(23410U);
    msg.setSourceEntity(93U);
    msg.setDestination(53872U);
    msg.setDestinationEntity(146U);
    msg.time = 0.19387902195305717;
    msg.phi = 0.3953031351519587;
    msg.theta = 0.5022652988508427;
    msg.psi = 0.7738428325844361;
    msg.psi_magnetic = 0.3296387774790702;

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
    msg.setTimeStamp(0.028138910629434744);
    msg.setSource(49463U);
    msg.setSourceEntity(228U);
    msg.setDestination(40949U);
    msg.setDestinationEntity(3U);
    msg.time = 0.8600056150388461;
    msg.phi = 0.0931874698263232;
    msg.theta = 0.026407113293076545;
    msg.psi = 0.1760663930168841;
    msg.psi_magnetic = 0.20844259800532783;

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
    msg.setTimeStamp(0.6906805404940664);
    msg.setSource(51237U);
    msg.setSourceEntity(37U);
    msg.setDestination(38711U);
    msg.setDestinationEntity(71U);
    msg.time = 0.6600350952457392;
    msg.x = 0.8578917004688178;
    msg.y = 0.5165913685321321;
    msg.z = 0.6405886532808636;
    msg.timestep = 0.36497746525711516;

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
    msg.setTimeStamp(0.7003724675888534);
    msg.setSource(12179U);
    msg.setSourceEntity(190U);
    msg.setDestination(19028U);
    msg.setDestinationEntity(31U);
    msg.time = 0.7228710282279167;
    msg.x = 0.2249059996639733;
    msg.y = 0.34658169343354983;
    msg.z = 0.0107924422162885;
    msg.timestep = 0.7025111594233758;

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
    msg.setTimeStamp(0.24866022495764362);
    msg.setSource(64373U);
    msg.setSourceEntity(238U);
    msg.setDestination(29309U);
    msg.setDestinationEntity(70U);
    msg.time = 0.06280746008952387;
    msg.x = 0.44164089777478477;
    msg.y = 0.8839658878716854;
    msg.z = 0.8088739930566836;
    msg.timestep = 0.555801524655317;

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
    msg.setTimeStamp(0.8845919713344068);
    msg.setSource(34624U);
    msg.setSourceEntity(192U);
    msg.setDestination(44113U);
    msg.setDestinationEntity(189U);
    msg.time = 0.8872926891162342;
    msg.x = 0.9892152618470047;
    msg.y = 0.33954017711151385;
    msg.z = 0.24750230296356746;

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
    msg.setTimeStamp(0.4583646074539458);
    msg.setSource(12102U);
    msg.setSourceEntity(170U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(67U);
    msg.time = 0.9809008675222429;
    msg.x = 0.8742449627563317;
    msg.y = 0.22689251610360517;
    msg.z = 0.1293764424138678;

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
    msg.setTimeStamp(0.49096280508914425);
    msg.setSource(18322U);
    msg.setSourceEntity(221U);
    msg.setDestination(50228U);
    msg.setDestinationEntity(47U);
    msg.time = 0.11457595691225375;
    msg.x = 0.9304698393580667;
    msg.y = 0.6939938128243947;
    msg.z = 0.7795079692773896;

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
    msg.setTimeStamp(0.41286449264512126);
    msg.setSource(28402U);
    msg.setSourceEntity(113U);
    msg.setDestination(19595U);
    msg.setDestinationEntity(172U);
    msg.time = 0.515714843021383;
    msg.x = 0.1982608011260808;
    msg.y = 0.7334638052557941;
    msg.z = 0.37549881240538574;

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
    msg.setTimeStamp(0.040313976775258276);
    msg.setSource(55134U);
    msg.setSourceEntity(131U);
    msg.setDestination(29586U);
    msg.setDestinationEntity(44U);
    msg.time = 0.6816836741534343;
    msg.x = 0.5396260657653277;
    msg.y = 0.29022892475214424;
    msg.z = 0.867968568508457;

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
    msg.setTimeStamp(0.5283504139581818);
    msg.setSource(8462U);
    msg.setSourceEntity(52U);
    msg.setDestination(280U);
    msg.setDestinationEntity(155U);
    msg.time = 0.5877200641013969;
    msg.x = 0.86576374686482;
    msg.y = 0.7639953624259186;
    msg.z = 0.9223413891780582;

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
    msg.setTimeStamp(0.31488396649426154);
    msg.setSource(63125U);
    msg.setSourceEntity(66U);
    msg.setDestination(24201U);
    msg.setDestinationEntity(239U);
    msg.time = 0.22017386064794187;
    msg.x = 0.24259264898806965;
    msg.y = 0.3505723013122384;
    msg.z = 0.8158313373585082;

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
    msg.setTimeStamp(0.2870268307603634);
    msg.setSource(23572U);
    msg.setSourceEntity(198U);
    msg.setDestination(47017U);
    msg.setDestinationEntity(75U);
    msg.time = 0.6712240566607622;
    msg.x = 0.2544773488098917;
    msg.y = 0.41150729744351744;
    msg.z = 0.24510530082044835;

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
    msg.setTimeStamp(0.9156553586301321);
    msg.setSource(55018U);
    msg.setSourceEntity(185U);
    msg.setDestination(52588U);
    msg.setDestinationEntity(157U);
    msg.time = 0.7486188876100952;
    msg.x = 0.6448480536983451;
    msg.y = 0.42589425663592617;
    msg.z = 0.3867515783446196;

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
    msg.setTimeStamp(0.9548251692432769);
    msg.setSource(10706U);
    msg.setSourceEntity(176U);
    msg.setDestination(47043U);
    msg.setDestinationEntity(111U);
    msg.validity = 55U;
    msg.x = 0.9524095067540922;
    msg.y = 0.14617555368451818;
    msg.z = 0.8449473873528532;

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
    msg.setTimeStamp(0.2395723411374433);
    msg.setSource(486U);
    msg.setSourceEntity(113U);
    msg.setDestination(37001U);
    msg.setDestinationEntity(177U);
    msg.validity = 100U;
    msg.x = 0.024417567731906842;
    msg.y = 0.6971084265184632;
    msg.z = 0.811448417612039;

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
    msg.setTimeStamp(0.9917806545499871);
    msg.setSource(61950U);
    msg.setSourceEntity(227U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(109U);
    msg.validity = 27U;
    msg.x = 0.9951019107011724;
    msg.y = 0.30233520025754135;
    msg.z = 0.11121593098763227;

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
    msg.setTimeStamp(0.9577708316551996);
    msg.setSource(64656U);
    msg.setSourceEntity(114U);
    msg.setDestination(53978U);
    msg.setDestinationEntity(108U);
    msg.validity = 224U;
    msg.x = 0.18562555098537992;
    msg.y = 0.6369974837126959;
    msg.z = 0.03757032228204582;

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
    msg.setTimeStamp(0.5538806484537272);
    msg.setSource(63742U);
    msg.setSourceEntity(76U);
    msg.setDestination(22657U);
    msg.setDestinationEntity(143U);
    msg.validity = 122U;
    msg.x = 0.7323877994017344;
    msg.y = 0.7698019595731429;
    msg.z = 0.882863929654625;

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
    msg.setTimeStamp(0.48437831712526225);
    msg.setSource(10027U);
    msg.setSourceEntity(142U);
    msg.setDestination(61635U);
    msg.setDestinationEntity(114U);
    msg.validity = 119U;
    msg.x = 0.10385706360789937;
    msg.y = 0.5424662804431214;
    msg.z = 0.6402496122644598;

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
    msg.setTimeStamp(0.13317487474343348);
    msg.setSource(4846U);
    msg.setSourceEntity(173U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(226U);
    msg.time = 0.6127555389983305;
    msg.x = 0.3046612769819209;
    msg.y = 0.5234732993889541;
    msg.z = 0.5125001396955692;

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
    msg.setTimeStamp(0.12842380356527594);
    msg.setSource(8263U);
    msg.setSourceEntity(197U);
    msg.setDestination(4974U);
    msg.setDestinationEntity(173U);
    msg.time = 0.4200880782745058;
    msg.x = 0.9673864067180397;
    msg.y = 0.7885101935870773;
    msg.z = 0.15680276928534265;

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
    msg.setTimeStamp(0.009488646977371618);
    msg.setSource(59784U);
    msg.setSourceEntity(206U);
    msg.setDestination(26341U);
    msg.setDestinationEntity(86U);
    msg.time = 0.5109636931903043;
    msg.x = 0.6821926726243827;
    msg.y = 0.6747484584757678;
    msg.z = 0.21836492927187878;

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
    msg.setTimeStamp(0.19815010125884303);
    msg.setSource(39885U);
    msg.setSourceEntity(219U);
    msg.setDestination(21166U);
    msg.setDestinationEntity(30U);
    msg.validity = 126U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.004182019486845601;
    tmp_msg_0.beam_height = 0.27690650186594834;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3537060827321885;

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
    msg.setTimeStamp(0.7885768264971379);
    msg.setSource(58939U);
    msg.setSourceEntity(66U);
    msg.setDestination(27623U);
    msg.setDestinationEntity(95U);
    msg.validity = 161U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.845950043743669;
    tmp_msg_0.y = 0.2950741110733903;
    tmp_msg_0.z = 0.47218048480224706;
    tmp_msg_0.phi = 0.84638085637493;
    tmp_msg_0.theta = 0.5294827886316731;
    tmp_msg_0.psi = 0.44731080812184354;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.3512658531896946;

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
    msg.setTimeStamp(0.6846729223881041);
    msg.setSource(31155U);
    msg.setSourceEntity(5U);
    msg.setDestination(21162U);
    msg.setDestinationEntity(153U);
    msg.validity = 182U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1333404405883193;
    tmp_msg_0.y = 0.6468238073940593;
    tmp_msg_0.z = 0.9190097909737367;
    tmp_msg_0.phi = 0.18592368261742953;
    tmp_msg_0.theta = 0.4208586386582308;
    tmp_msg_0.psi = 0.7872468788381999;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.18294704167184728;

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
    msg.setTimeStamp(0.6325861733827873);
    msg.setSource(54203U);
    msg.setSourceEntity(194U);
    msg.setDestination(41965U);
    msg.setDestinationEntity(113U);
    msg.value = 0.07313910030192816;

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
    msg.setTimeStamp(0.0010396724186989559);
    msg.setSource(40435U);
    msg.setSourceEntity(191U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8660245514170691;

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
    msg.setTimeStamp(0.15871902351489275);
    msg.setSource(22970U);
    msg.setSourceEntity(225U);
    msg.setDestination(46759U);
    msg.setDestinationEntity(97U);
    msg.value = 0.40994204181915184;

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
    msg.setTimeStamp(0.39940247934141093);
    msg.setSource(42888U);
    msg.setSourceEntity(52U);
    msg.setDestination(9608U);
    msg.setDestinationEntity(146U);
    msg.value = 0.1552299339131632;

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
    msg.setTimeStamp(0.1957330663555077);
    msg.setSource(13649U);
    msg.setSourceEntity(55U);
    msg.setDestination(26451U);
    msg.setDestinationEntity(55U);
    msg.value = 0.8933901073242947;

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
    msg.setTimeStamp(0.6400582430696585);
    msg.setSource(3351U);
    msg.setSourceEntity(230U);
    msg.setDestination(35383U);
    msg.setDestinationEntity(244U);
    msg.value = 0.4713899758429565;

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
    msg.setTimeStamp(0.7919633205416183);
    msg.setSource(26367U);
    msg.setSourceEntity(139U);
    msg.setDestination(50377U);
    msg.setDestinationEntity(119U);
    msg.value = 0.43276814904304606;

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
    msg.setTimeStamp(0.6940083464619641);
    msg.setSource(56671U);
    msg.setSourceEntity(172U);
    msg.setDestination(48335U);
    msg.setDestinationEntity(166U);
    msg.value = 0.5818534733929476;

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
    msg.setTimeStamp(0.3479920989843177);
    msg.setSource(41213U);
    msg.setSourceEntity(52U);
    msg.setDestination(2011U);
    msg.setDestinationEntity(122U);
    msg.value = 0.6365648434342437;

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
    msg.setTimeStamp(0.3407268317909947);
    msg.setSource(11370U);
    msg.setSourceEntity(56U);
    msg.setDestination(235U);
    msg.setDestinationEntity(238U);
    msg.value = 0.37407993437190945;

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
    msg.setTimeStamp(0.700648423450452);
    msg.setSource(35586U);
    msg.setSourceEntity(113U);
    msg.setDestination(40655U);
    msg.setDestinationEntity(208U);
    msg.value = 0.2617752833395828;

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
    msg.setTimeStamp(0.7992218018854276);
    msg.setSource(48494U);
    msg.setSourceEntity(124U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7597439890813531;

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
    msg.setTimeStamp(0.19427022135458016);
    msg.setSource(61530U);
    msg.setSourceEntity(251U);
    msg.setDestination(14138U);
    msg.setDestinationEntity(28U);
    msg.value = 0.45650550096611764;

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
    msg.setTimeStamp(0.9098485262757814);
    msg.setSource(2888U);
    msg.setSourceEntity(68U);
    msg.setDestination(7081U);
    msg.setDestinationEntity(149U);
    msg.value = 0.32869029898958535;

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
    msg.setTimeStamp(0.9680781966345825);
    msg.setSource(14995U);
    msg.setSourceEntity(157U);
    msg.setDestination(20653U);
    msg.setDestinationEntity(152U);
    msg.value = 0.13991251477463562;

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
    msg.setTimeStamp(0.657342778798415);
    msg.setSource(17944U);
    msg.setSourceEntity(98U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(16U);
    msg.value = 0.5723829175978998;

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
    msg.setTimeStamp(0.07429887062025586);
    msg.setSource(45946U);
    msg.setSourceEntity(198U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(208U);
    msg.value = 0.7043462473935966;

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
    msg.setTimeStamp(0.567670070223408);
    msg.setSource(43277U);
    msg.setSourceEntity(28U);
    msg.setDestination(16170U);
    msg.setDestinationEntity(104U);
    msg.value = 0.06522136413482837;

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
    msg.setTimeStamp(0.3099484594243822);
    msg.setSource(49247U);
    msg.setSourceEntity(30U);
    msg.setDestination(45649U);
    msg.setDestinationEntity(145U);
    msg.value = 0.291322353422799;

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
    msg.setTimeStamp(0.07666333671487746);
    msg.setSource(42436U);
    msg.setSourceEntity(35U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(130U);
    msg.value = 0.2753593435081989;

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
    msg.setTimeStamp(0.9231053576931708);
    msg.setSource(34810U);
    msg.setSourceEntity(119U);
    msg.setDestination(49552U);
    msg.setDestinationEntity(23U);
    msg.value = 0.2366283813783958;

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
    msg.setTimeStamp(0.8141287428176687);
    msg.setSource(23641U);
    msg.setSourceEntity(220U);
    msg.setDestination(23237U);
    msg.setDestinationEntity(100U);
    msg.value = 0.3126659028003732;

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
    msg.setTimeStamp(0.6700688879848348);
    msg.setSource(1340U);
    msg.setSourceEntity(28U);
    msg.setDestination(1522U);
    msg.setDestinationEntity(46U);
    msg.value = 0.7331737999351697;

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
    msg.setTimeStamp(0.33150425022341734);
    msg.setSource(49789U);
    msg.setSourceEntity(143U);
    msg.setDestination(12304U);
    msg.setDestinationEntity(81U);
    msg.value = 0.29981574028120683;

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
    msg.setTimeStamp(0.5690183049424482);
    msg.setSource(62807U);
    msg.setSourceEntity(49U);
    msg.setDestination(12289U);
    msg.setDestinationEntity(25U);
    msg.direction = 0.3824427397424357;
    msg.speed = 0.7979439308886801;
    msg.turbulence = 0.6279192147503362;

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
    msg.setTimeStamp(0.09629489108933798);
    msg.setSource(60852U);
    msg.setSourceEntity(17U);
    msg.setDestination(43026U);
    msg.setDestinationEntity(78U);
    msg.direction = 0.7975634983287887;
    msg.speed = 0.1081597467121278;
    msg.turbulence = 0.3277577603216829;

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
    msg.setTimeStamp(0.12072929019448775);
    msg.setSource(51033U);
    msg.setSourceEntity(124U);
    msg.setDestination(15934U);
    msg.setDestinationEntity(100U);
    msg.direction = 0.5248415234305279;
    msg.speed = 0.14383268448563435;
    msg.turbulence = 0.19790898751193464;

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
    msg.setTimeStamp(0.8896711176340514);
    msg.setSource(55957U);
    msg.setSourceEntity(52U);
    msg.setDestination(1058U);
    msg.setDestinationEntity(91U);
    msg.value = 0.1858337595058508;

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
    msg.setTimeStamp(0.9769603215546735);
    msg.setSource(22867U);
    msg.setSourceEntity(205U);
    msg.setDestination(49577U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6161260264973697;

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
    msg.setTimeStamp(0.07108054948211018);
    msg.setSource(7265U);
    msg.setSourceEntity(52U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(120U);
    msg.value = 0.10477545145183509;

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
    msg.setTimeStamp(0.44097094357535993);
    msg.setSource(21243U);
    msg.setSourceEntity(160U);
    msg.setDestination(58058U);
    msg.setDestinationEntity(207U);
    msg.value.assign("GOFTWWHWFIFYJUIQXJWBYDPXPYZVHIGQHAPYSLDRVMRTZRCJJRUBPDNLNLSTEKSHSGYAUWOADNHZKETGAQKPIUKPAJDDMZRQJOIHOMVELFLRGVONAQZFFIZOXOUOMTBMATWMQUHDAAUVNFHTLNCXETCBJCXICFNMWCJSZWNMSOUCZIPHJQPCXEEVVSYWYKSFYRBJTWRELQUGDDX");

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
    msg.setTimeStamp(0.3968574466838565);
    msg.setSource(45434U);
    msg.setSourceEntity(205U);
    msg.setDestination(47591U);
    msg.setDestinationEntity(228U);
    msg.value.assign("LXWKFLDYWBGODTJSVHUZSJDCTYRAKUELOXXEKHSUCTFGNARVEUFFFKYQGNVCKAQIGOVZWGQOMOYPIMTQCIRTSKNJEZMBGQGPBBJYYPHQLUVHEKPZSKXMUZH");

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
    msg.setTimeStamp(0.9546116274542447);
    msg.setSource(46655U);
    msg.setSourceEntity(146U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(242U);
    msg.value.assign("CJNSORULHMHUIGAFPOBLWUKVVYJXBKLXPUPHNJWYGFKVDWPHYSIWQFRBCMACBZGRKDDIMFYZDEHBRVRNIOUFCNWVHFWHLJMZCUFEKGOEDDGMBOMJUOOPOYVAPJCZBYBTTEXZQSGAYMBWNKYRAPPJMXBKCXQESZLVYNFXJRZMALFXQDEJAAWSYGNNIQQ");

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
    msg.setTimeStamp(0.5051973690349748);
    msg.setSource(56720U);
    msg.setSourceEntity(224U);
    msg.setDestination(48299U);
    msg.setDestinationEntity(196U);
    const char tmp_msg_0[] = {66, 15, 55, -24, 77, -89, -97, 82, 115, -117, 80, -99, 18, -7, -85, -32, -44, -8, 81, -58, 43, -60, 93, 12, -74, -1, -128, 73, 77, -91, 94, 28, -21, -10, 83, 70, -100, -113, -20, 86, 9, -93, 22, -112, -28, 12, -92, 118, 89, -111, -101, 77, -55, 50, -50, -43, -56, 76, 0, -106, -23, -76, -126, 125, 86, 108, -57, 18, -59, 109, 18, -69, 27, 94, 22, -106, 36, -13, -116, -2, 107, 12, -83, 79, 53, 28, 48, -44, -24, -67, 119, 124, -9, -88, 28, -36, -49, 21, -25, -102, 83, -52, 110, 23, -62, -112, -74, -13};
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
    msg.setTimeStamp(0.6493101235729846);
    msg.setSource(62257U);
    msg.setSourceEntity(96U);
    msg.setDestination(28904U);
    msg.setDestinationEntity(85U);
    const char tmp_msg_0[] = {-55, -52, -20, -17, -122, -99, -119, 88, 33, -21, 25, -116, 40, -17, -118, -46, 83, -61, 34, 59, -99, 72, 83, -84, -121, -16, 23, 34, -64, 110, -92, 73, 121, -99, 110, -78, -9, -46, -126, -50, -89, -61, 5, 31, -100, -32, -89, -90, 29, 18, 61, 111, 20, -73, -18, 62, 120, 77, -97, 40, -1, -108, 14, -91, -118, -6, -100, -94, 2, -14, -125, 83, 76, -37, -94, -128, 74, 122, 48, -67, -119, 58, -98, 14, -16, 70, -40, 55, -65, -102, -107, -38, -74, 19, -93, 110, 57, -9, 34, 76, 33, -78, -31, -26, -94, -115, 59, 98, -36, -1, 74, 86, 55, 83, -84, 15, -110, -88, 56, -74, 1, -82, -48, -108, -20, 54, 86, 15, 96, 46, 111, -40, 40, -122, -42, -53, 75, -55, -23, 61, 35, 87, 25, 2, 97, -74, 114, 56, -44, -22, -126, 40, 92, 82, -56, -54, 66, 101, -60, -44, -85, 100, 83, -93, -124};
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
    msg.setTimeStamp(0.5732041755794072);
    msg.setSource(41370U);
    msg.setSourceEntity(209U);
    msg.setDestination(34485U);
    msg.setDestinationEntity(96U);
    const char tmp_msg_0[] = {-68, -41, 101, -119, -66, -74, 122, 66, -31, 65, -32, 20, 63, 47, 49, 65, 120, -104, -72, 51, 51, -57, 71, -105, -29, -26, -33, -1, 23, -53, 65, -16, -114, -39, -10, 42, 72};
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
    msg.setTimeStamp(0.6077457702883305);
    msg.setSource(61265U);
    msg.setSourceEntity(176U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(183U);
    msg.type = 208U;
    msg.frequency = 638126029U;
    msg.min_range = 65475U;
    msg.max_range = 46035U;
    msg.bits_per_point = 40U;
    msg.scale_factor = 0.43268346405700275;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8947746820339252;
    tmp_msg_0.beam_height = 0.2793449768023779;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-94, 73, -103, -56, -127, 27, -83, -74, -123, -103, 109, 120, 32, 48, 48, -55, -67, 98, -78, 116, 15, -117, -122, 49, -38, -99, 118, -98, 54, -56, -49, 102, 21, -62, -40, -122, 94, 111, -50, -2, -79, -81, 102, -65, -73, 43, 90, 115, 72, -107, -1, 20, 64, 117, 108, 72, 27, -37, -44, 98, -15, -88, 115, 105, 93, 41, 28, -8, -42, 69, -99, -40, -4, -82, 31, -45, 47, 12, -11, -27, -30, 30, -87, 122, 90, -77, 119, 40, 50, 12, 111, -109, -82, 40, -77, 116, 7, -8, -40, -128, 55, -96, 115, 8, -27, -108};
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
    msg.setTimeStamp(0.003057062941830724);
    msg.setSource(60483U);
    msg.setSourceEntity(127U);
    msg.setDestination(58691U);
    msg.setDestinationEntity(63U);
    msg.type = 7U;
    msg.frequency = 277774898U;
    msg.min_range = 37817U;
    msg.max_range = 10480U;
    msg.bits_per_point = 224U;
    msg.scale_factor = 0.9913585758459158;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2632893862837219;
    tmp_msg_0.beam_height = 0.08409416693509641;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {28, 16, -48, -75, -68, -122, 44, -84, 89, -81, 120, 39, -51, 92, -83, 62, 117, -105, -119, -23, 65, -126, -2, 76, 120, -108, -52, 40, 80, -76, -40, 123, -72, 110, 50, 113, -77, 62, -15, 27, -59, 76, 49, 47, -85, -120, 100, 107, -19, -77, -34, 47, 120, 8, -61, -35, -49, -31, -121, 14, 84, -118, 14, 14, -30, -93, 31, -84, 2, -70, 76, -104, 110, -68, -33, -92, 50, 9, 73, -92, 7, -121, -69, 115, 20, 82, -81, -48, -27, -116, 79, 18, 43, 102, -124, -125, -74, -107, 119, -82, 96, 90, 44, -44, -103, 36, -32, 45, 11, 95, -94, -69, -3, 87, 62, 65, -66, -124, -6, 36, 92, 109, 13, 90, -21, -32, -120, -27, -105, -12, 27, 83, 28, 57, 16, 103, 98, 126, -103, 117, -58, -14, -10, -119, -15, 46, -52, -36, -22, -43, -25, -123, 99, 106, -63, -83, -65, -26, -25, -25, 95};
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
    msg.setTimeStamp(0.233843247388003);
    msg.setSource(14457U);
    msg.setSourceEntity(233U);
    msg.setDestination(49260U);
    msg.setDestinationEntity(204U);
    msg.type = 98U;
    msg.frequency = 1293227292U;
    msg.min_range = 33164U;
    msg.max_range = 50662U;
    msg.bits_per_point = 175U;
    msg.scale_factor = 0.6376067588783028;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8265882378657154;
    tmp_msg_0.beam_height = 0.3532767904264439;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-45, 98, -56, -86, -40, -49, 34, -122, 124, -32, 40, -96, 11, -37, -92, -127, 103, -28, -51, -99, -80, -122, -97, 46, 114, -60, 120, -101, 78, -105, 21, -52, -109, 97, -46, -114, 38, -27, 78, 100, 9, -15, -122, 9, -98, 21, -108, -40, -11, 125, 55, 99, -56, 5, -30, -124, 102, 88, -53, 112, 116, 8, -66, 125, -101, -27, -90, -123, -106, -35, 78, -43, 21, 27, 50, 4, -51, -113, 75, -42, 89, -114, -105, 67, 17, -78, -117, 4, -4, 77, -31, 51, -15, 55, -54, 7, 54, 63, 109, -48, -42, -36, -108, 50, -92, -113, -120, 6, 20, 114, 102, -95, -96, -99, -103, 55, -38, 85, -5, -14, 89, 66, 69, 81, 92, 16, -2, 55, -54, -82, -108, -55, -8, 117, -58, 114, 22, -121, 9, -104, 39, 73, -76, 118, 43, -99, -14, -47, -95, -20, 34, -82, 47, -114, 118, -32, -3, 41, 35, -22, -70, 91, 75, 45, -123, 53, 63, -77, 94, 91, 88, -47, 78, -36, -75, 110, -12, -95, 25, -10, -46, -6};
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
    msg.setTimeStamp(0.5592929684371619);
    msg.setSource(33261U);
    msg.setSourceEntity(14U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.5622561848030103);
    msg.setSource(40998U);
    msg.setSourceEntity(208U);
    msg.setDestination(45933U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.3009634349863507);
    msg.setSource(25762U);
    msg.setSourceEntity(75U);
    msg.setDestination(52286U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.8204139649188459);
    msg.setSource(20234U);
    msg.setSourceEntity(155U);
    msg.setDestination(17963U);
    msg.setDestinationEntity(7U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.29174425536356985);
    msg.setSource(1420U);
    msg.setSourceEntity(9U);
    msg.setDestination(38653U);
    msg.setDestinationEntity(18U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.1295484274051042);
    msg.setSource(406U);
    msg.setSourceEntity(211U);
    msg.setDestination(8504U);
    msg.setDestinationEntity(179U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.2702602574244545);
    msg.setSource(32388U);
    msg.setSourceEntity(84U);
    msg.setDestination(6450U);
    msg.setDestinationEntity(211U);
    msg.value = 0.15842212989599358;
    msg.confidence = 0.43807390444877214;
    msg.opmodes.assign("CRSYVHBZOWQUIREQFOTCVOIAXJFKVPZMACVLHVVBZORGDQTLGLNLQYWKSUMYDMMPNJFKPCBDRQKQYRFDJTVXPMXHRXEKEENYKBJIGTSDYZSTVWQAJGDHLPLDCSJHHMJHACCFQSENGAVQWCPIPFARDFNZNLYMWIFWIRWOOQZJRHFMCAGBWYTUBXKAIZIPO");

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
    msg.setTimeStamp(0.3405009733015031);
    msg.setSource(51964U);
    msg.setSourceEntity(89U);
    msg.setDestination(37647U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9939217661024707;
    msg.confidence = 0.3877917153445397;
    msg.opmodes.assign("JWZPGZHXXQRKTPJLEAZPISSEOHRVAAFNCNDNHBAMMKNPPZZQNYZREPVJDYJKVRUDBSWOLDFHPIXVYQUOFGMIAEKVDZLUTQXUUJIKOBLXMVAJVTQWVFNAETMDEQYHOQGMEMJPSRBQQCHBBVWIHJGRWETCNUFRSJYBOPIUYUFOMTLCDZIMJREZGNXTTCRDCIPTCGOOLKWGLGKLA");

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
    msg.setTimeStamp(0.9076176564930852);
    msg.setSource(50377U);
    msg.setSourceEntity(237U);
    msg.setDestination(65261U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7125338283754672;
    msg.confidence = 0.012323645254166182;
    msg.opmodes.assign("QZKJCXJPPRTCNIXZWWKMBYPQUNUULDZPGOSTERDRNHTNLTWKTQUWPCKBDHHZCAIVBUMLJVYKPABFI");

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
    msg.setTimeStamp(0.11543747190077203);
    msg.setSource(35257U);
    msg.setSourceEntity(8U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(73U);
    msg.itow = 1414181407U;
    msg.lat = 0.19691374568249798;
    msg.lon = 0.18940250271065506;
    msg.height_ell = 0.3561388839248776;
    msg.height_sea = 0.715804854177029;
    msg.hacc = 0.9577788659788734;
    msg.vacc = 0.6445957595237785;
    msg.vel_n = 0.6862102852498293;
    msg.vel_e = 0.5738938956730221;
    msg.vel_d = 0.6172030381997214;
    msg.speed = 0.4883010453555262;
    msg.gspeed = 0.19993797057350504;
    msg.heading = 0.34833723588637755;
    msg.sacc = 0.9119747005912783;
    msg.cacc = 0.36193623417888743;

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
    msg.setTimeStamp(0.1129783858103558);
    msg.setSource(62541U);
    msg.setSourceEntity(206U);
    msg.setDestination(32420U);
    msg.setDestinationEntity(158U);
    msg.itow = 1344429607U;
    msg.lat = 0.4664246307600042;
    msg.lon = 0.5198364941672687;
    msg.height_ell = 0.6447538678751308;
    msg.height_sea = 0.18210172695695648;
    msg.hacc = 0.730946795138772;
    msg.vacc = 0.3387057809223053;
    msg.vel_n = 0.8119135198647923;
    msg.vel_e = 0.8311525201055131;
    msg.vel_d = 0.5533244426942165;
    msg.speed = 0.08432935047108459;
    msg.gspeed = 0.08508724933539524;
    msg.heading = 0.5683838924638452;
    msg.sacc = 0.8225552733521536;
    msg.cacc = 0.8378140071395572;

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
    msg.setTimeStamp(0.4851962158651719);
    msg.setSource(17344U);
    msg.setSourceEntity(197U);
    msg.setDestination(12059U);
    msg.setDestinationEntity(121U);
    msg.itow = 2444535911U;
    msg.lat = 0.14281902033747695;
    msg.lon = 0.9874726860522757;
    msg.height_ell = 0.8978055139687334;
    msg.height_sea = 0.5887884419565081;
    msg.hacc = 0.7272943902910625;
    msg.vacc = 0.16776600131157982;
    msg.vel_n = 0.293505990313889;
    msg.vel_e = 0.5297589418494406;
    msg.vel_d = 0.7486802557107652;
    msg.speed = 0.23858015502792673;
    msg.gspeed = 0.7568062094105462;
    msg.heading = 0.7258344989642848;
    msg.sacc = 0.27268362302917404;
    msg.cacc = 0.3264677791288232;

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
    msg.setTimeStamp(0.31050888627949924);
    msg.setSource(41244U);
    msg.setSourceEntity(221U);
    msg.setDestination(33929U);
    msg.setDestinationEntity(119U);
    msg.id = 18U;
    msg.value = 0.2080253640313936;

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
    msg.setTimeStamp(0.029922440387732396);
    msg.setSource(50549U);
    msg.setSourceEntity(133U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(204U);
    msg.id = 150U;
    msg.value = 0.03498788259017227;

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
    msg.setTimeStamp(0.5665790226334257);
    msg.setSource(30825U);
    msg.setSourceEntity(214U);
    msg.setDestination(15200U);
    msg.setDestinationEntity(88U);
    msg.id = 211U;
    msg.value = 0.6738860206413951;

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
    msg.setTimeStamp(0.4241862329830205);
    msg.setSource(1633U);
    msg.setSourceEntity(156U);
    msg.setDestination(22616U);
    msg.setDestinationEntity(230U);
    msg.x = 0.27059940111595127;
    msg.y = 0.44741138980000683;
    msg.z = 0.43562921637452423;
    msg.phi = 0.27231965777529576;
    msg.theta = 0.6036534568294301;
    msg.psi = 0.6743904328889203;

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
    msg.setTimeStamp(0.8718378922665976);
    msg.setSource(11272U);
    msg.setSourceEntity(234U);
    msg.setDestination(15060U);
    msg.setDestinationEntity(87U);
    msg.x = 0.7791822544522031;
    msg.y = 0.1281605404180034;
    msg.z = 0.8171545581985339;
    msg.phi = 0.9720298704562913;
    msg.theta = 0.08888947492129806;
    msg.psi = 0.42234621099084135;

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
    msg.setTimeStamp(0.9277584882279984);
    msg.setSource(9292U);
    msg.setSourceEntity(112U);
    msg.setDestination(2608U);
    msg.setDestinationEntity(117U);
    msg.x = 0.40058530708684215;
    msg.y = 0.6187698021791511;
    msg.z = 0.4358078937015576;
    msg.phi = 0.16871441638366602;
    msg.theta = 0.030063752990081904;
    msg.psi = 0.25247335366738977;

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
    msg.setTimeStamp(0.3453491954221499);
    msg.setSource(37479U);
    msg.setSourceEntity(107U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(102U);
    msg.beam_width = 0.5421151321429751;
    msg.beam_height = 0.48423756019593356;

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
    msg.setTimeStamp(0.09548915320294227);
    msg.setSource(45684U);
    msg.setSourceEntity(131U);
    msg.setDestination(3295U);
    msg.setDestinationEntity(201U);
    msg.beam_width = 0.2971823857296879;
    msg.beam_height = 0.06781845630905636;

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
    msg.setTimeStamp(0.9905983027862226);
    msg.setSource(32009U);
    msg.setSourceEntity(14U);
    msg.setDestination(16511U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.8015018735928758;
    msg.beam_height = 0.21049670831774858;

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
    msg.setTimeStamp(0.18972752228334377);
    msg.setSource(51237U);
    msg.setSourceEntity(77U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(235U);
    msg.sane = 73U;

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
    msg.setTimeStamp(0.4323470407256709);
    msg.setSource(58264U);
    msg.setSourceEntity(138U);
    msg.setDestination(8159U);
    msg.setDestinationEntity(8U);
    msg.sane = 142U;

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
    msg.setTimeStamp(0.0987654528862435);
    msg.setSource(33775U);
    msg.setSourceEntity(182U);
    msg.setDestination(56450U);
    msg.setDestinationEntity(144U);
    msg.sane = 221U;

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
    msg.setTimeStamp(0.3315901742140184);
    msg.setSource(15271U);
    msg.setSourceEntity(194U);
    msg.setDestination(39357U);
    msg.setDestinationEntity(249U);
    msg.id = 146U;
    msg.zoom = 92U;
    msg.action = 182U;

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
    msg.setTimeStamp(0.19669801135797715);
    msg.setSource(33448U);
    msg.setSourceEntity(250U);
    msg.setDestination(47616U);
    msg.setDestinationEntity(244U);
    msg.id = 130U;
    msg.zoom = 14U;
    msg.action = 89U;

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
    msg.setTimeStamp(0.7880120803007002);
    msg.setSource(28228U);
    msg.setSourceEntity(250U);
    msg.setDestination(42657U);
    msg.setDestinationEntity(226U);
    msg.id = 81U;
    msg.zoom = 18U;
    msg.action = 34U;

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
    msg.setTimeStamp(0.8005760411866703);
    msg.setSource(11689U);
    msg.setSourceEntity(253U);
    msg.setDestination(61180U);
    msg.setDestinationEntity(107U);
    msg.id = 233U;
    msg.value = 0.20183592277329188;

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
    msg.setTimeStamp(0.789852576177866);
    msg.setSource(38988U);
    msg.setSourceEntity(34U);
    msg.setDestination(53492U);
    msg.setDestinationEntity(140U);
    msg.id = 169U;
    msg.value = 0.2542924120772362;

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
    msg.setTimeStamp(0.5197061762666478);
    msg.setSource(30072U);
    msg.setSourceEntity(29U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(93U);
    msg.id = 226U;
    msg.value = 0.453651020846192;

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
    msg.setTimeStamp(0.6294573718907897);
    msg.setSource(48101U);
    msg.setSourceEntity(230U);
    msg.setDestination(4952U);
    msg.setDestinationEntity(128U);
    msg.id = 175U;
    msg.value = 0.5952416107098987;

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
    msg.setTimeStamp(0.11353916266277597);
    msg.setSource(24052U);
    msg.setSourceEntity(30U);
    msg.setDestination(638U);
    msg.setDestinationEntity(49U);
    msg.id = 123U;
    msg.value = 0.16617729578219875;

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
    msg.setTimeStamp(0.31715563913933764);
    msg.setSource(59537U);
    msg.setSourceEntity(252U);
    msg.setDestination(16614U);
    msg.setDestinationEntity(148U);
    msg.id = 107U;
    msg.value = 0.5203560235248346;

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
    msg.setTimeStamp(0.765647405446653);
    msg.setSource(17448U);
    msg.setSourceEntity(192U);
    msg.setDestination(10803U);
    msg.setDestinationEntity(69U);
    msg.id = 172U;
    msg.angle = 0.7742762725918236;

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
    msg.setTimeStamp(0.03934516694315282);
    msg.setSource(65481U);
    msg.setSourceEntity(202U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(178U);
    msg.id = 78U;
    msg.angle = 0.7528506426250232;

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
    msg.setTimeStamp(0.5543787007235818);
    msg.setSource(39148U);
    msg.setSourceEntity(194U);
    msg.setDestination(18274U);
    msg.setDestinationEntity(69U);
    msg.id = 5U;
    msg.angle = 0.9083241499376331;

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
    msg.setTimeStamp(0.3468655440141325);
    msg.setSource(20771U);
    msg.setSourceEntity(213U);
    msg.setDestination(14146U);
    msg.setDestinationEntity(206U);
    msg.op = 68U;
    msg.actions.assign("ATMPWFBIEBVVYWGXNRMZQFKUTVKGDZWPDUPKWJIMPYEBAJRMOYFDZWS");

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
    msg.setTimeStamp(0.27020483716835186);
    msg.setSource(24622U);
    msg.setSourceEntity(78U);
    msg.setDestination(48599U);
    msg.setDestinationEntity(2U);
    msg.op = 205U;
    msg.actions.assign("NLBVXLPUMVLAPQBTOKWT");

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
    msg.setTimeStamp(0.14619877153418182);
    msg.setSource(9390U);
    msg.setSourceEntity(71U);
    msg.setDestination(38462U);
    msg.setDestinationEntity(177U);
    msg.op = 69U;
    msg.actions.assign("VVQVAOHYJWTJDNMNWYIQSSMKTRLQCFGHVPNKDMULYLJOFQGAACLX");

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
    msg.setTimeStamp(0.5880095883781346);
    msg.setSource(25687U);
    msg.setSourceEntity(105U);
    msg.setDestination(48967U);
    msg.setDestinationEntity(124U);
    msg.actions.assign("TDKMLWXIBDFEVVOAOPNMUIXWMPMIBLFDMPUAQOFYIPLOEQGFRKVUZOZZHWHSTJQVUUOEZSRYTMJRSXFHOZVPIDNLGAXBLUPRLGFYVAFIAOXWDRDJRPXRNGDKMBJTBKBGJCQWLWQTCECYKSRUCBQHKEKIWHYNSJJHCVJYCAOLBVHNRMOWFDCZCNZAYUV");

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
    msg.setTimeStamp(0.4829029214875521);
    msg.setSource(55049U);
    msg.setSourceEntity(73U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(35U);
    msg.actions.assign("ZTFJBURVVFKHAAYCIWLOLEKHJLROUJFRVALHGTTJPXKCMWNLTGXLCGKCGFVMTGYKOBHXSPUQAJFDXYWHKOVWOESAQXREWOIQDTQCSKVXPAQESKNSXMYHVRFJPWGN");

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
    msg.setTimeStamp(0.10728022671103044);
    msg.setSource(58279U);
    msg.setSourceEntity(231U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(130U);
    msg.actions.assign("LDFQCCXLCZJIIKRQYPSTXQPLSZDSCSYAGUUEVTBGBWWEMHQGLWOUQLIVJSRMPZYBNMJBAVXTBWAUFMOHEOAHFDNLEAPFZTERRXXWKMCNBDZIFWRRJIAHYWBVEOAJLPGTDEWXFTIXZBLQTBRCXFIANXSJNEJEQDAHXKOHTVYGKKMDJMONCDLKUZNOPQZUVVCOGKKK");

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
    msg.setTimeStamp(0.543355630298464);
    msg.setSource(24937U);
    msg.setSourceEntity(209U);
    msg.setDestination(31125U);
    msg.setDestinationEntity(4U);
    msg.button = 21U;
    msg.value = 116U;

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
    msg.setTimeStamp(0.7174227735938111);
    msg.setSource(62733U);
    msg.setSourceEntity(26U);
    msg.setDestination(51259U);
    msg.setDestinationEntity(206U);
    msg.button = 5U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.9027310878022856);
    msg.setSource(35838U);
    msg.setSourceEntity(86U);
    msg.setDestination(9100U);
    msg.setDestinationEntity(218U);
    msg.button = 151U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.9524567895538172);
    msg.setSource(25009U);
    msg.setSourceEntity(233U);
    msg.setDestination(55582U);
    msg.setDestinationEntity(186U);
    msg.op = 109U;
    msg.text.assign("RSDTEWLCSSZFYIBVJPBGNRXQRTDJBWPRNSASGCOXZ");

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
    msg.setTimeStamp(0.9925817465369016);
    msg.setSource(35540U);
    msg.setSourceEntity(37U);
    msg.setDestination(14808U);
    msg.setDestinationEntity(100U);
    msg.op = 224U;
    msg.text.assign("DPNOKRRDUVGTQEPJEZGBWHZFPXZIDHPTMBVMJBUCVGERJRFAMKUZMJBWCMRVHL");

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
    msg.setTimeStamp(0.2672940663185278);
    msg.setSource(20669U);
    msg.setSourceEntity(72U);
    msg.setDestination(12552U);
    msg.setDestinationEntity(206U);
    msg.op = 86U;
    msg.text.assign("BTZAWJUMPTQBLBYQGZJCLEFAMSQTPPENPAZSFGURNYKYJEQNUWUAEBLVEFYBHIMBCCGFOWOVCRMWUUJVKPBEAXLZUYNHENJJLHHSOTFKQQAXKDNHFICGDLOGNXMWJKPKPOYRKGQCPOXDVVSKNHZHFDCQBNXUIQWUCDJGUZXHVWQFYWZIOXDERIRIPAOOFWXCYVLPLMMRGTETRMNBTHZIJLTZVTGAGRFYRZIJ");

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
    msg.setTimeStamp(0.4889382863847921);
    msg.setSource(61617U);
    msg.setSourceEntity(78U);
    msg.setDestination(64351U);
    msg.setDestinationEntity(249U);
    msg.op = 31U;
    msg.time_remain = 0.00013420354159676684;
    msg.sched_time = 0.03390926528147997;

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
    msg.setTimeStamp(0.7540579302929259);
    msg.setSource(11755U);
    msg.setSourceEntity(189U);
    msg.setDestination(29032U);
    msg.setDestinationEntity(206U);
    msg.op = 61U;
    msg.time_remain = 0.5976059422593873;
    msg.sched_time = 0.8224694422690974;

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
    msg.setTimeStamp(0.210930836993378);
    msg.setSource(21704U);
    msg.setSourceEntity(108U);
    msg.setDestination(52321U);
    msg.setDestinationEntity(16U);
    msg.op = 18U;
    msg.time_remain = 0.9581682041604443;
    msg.sched_time = 0.10064058090083938;

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
    msg.setTimeStamp(0.4996192948208913);
    msg.setSource(61362U);
    msg.setSourceEntity(11U);
    msg.setDestination(28613U);
    msg.setDestinationEntity(9U);
    msg.name.assign("XGYQUWCCBZNPRTAYFFSOWOHXSRLDIMQDAFLDWKRMZZVEAKVZCWAXNJSLNUBVKUNXTTCWMFIRHHOYACHLBFHAVTCNEDZBTYAEUJJZ");
    msg.op = 137U;
    msg.sched_time = 0.5075134294886585;

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
    msg.setTimeStamp(0.6892916801862197);
    msg.setSource(31399U);
    msg.setSourceEntity(234U);
    msg.setDestination(38376U);
    msg.setDestinationEntity(153U);
    msg.name.assign("HJCSVDMQYIJKKQHUYSIQUPBGFHVKEVPXDYUOPZIMNQEBJRAMXBVAERTUFHNCKIZDNAJXBZZLKJWFJSVCOXLBDLPAX");
    msg.op = 41U;
    msg.sched_time = 0.9739133241973104;

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
    msg.setTimeStamp(0.25881936324187804);
    msg.setSource(65476U);
    msg.setSourceEntity(213U);
    msg.setDestination(48503U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ETSGLRQPUYYRRBQFFWZENOOHMFCIPHGCZOXPJVUPTBLUHSBHFFOSRRHQNSAXZVDOSHNFZCYKTTBVBZKRFAPEAZKVAJSVXXBWHJTUXXDDBEGCXEIZUGLLICJIVFZQTMKCPJLZIIUOAYVAWOMWGSWYDQYGYWCNIPMGSGCNLREQBAUKATDNPGCWHWOEMCDEJJRFKXKQ");
    msg.op = 95U;
    msg.sched_time = 0.5033260755227975;

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
    msg.setTimeStamp(0.9683795948891597);
    msg.setSource(48071U);
    msg.setSourceEntity(39U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.00782183216603205);
    msg.setSource(36472U);
    msg.setSourceEntity(193U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.7893861419537387);
    msg.setSource(37999U);
    msg.setSourceEntity(21U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.22845257826094523);
    msg.setSource(5511U);
    msg.setSourceEntity(253U);
    msg.setDestination(27967U);
    msg.setDestinationEntity(15U);
    msg.name.assign("MJBSCTOLNLPPNEKJRRDLXGLNWRUMHDBNHTOSWLGSFS");
    msg.state = 204U;

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
    msg.setTimeStamp(0.8968068656820946);
    msg.setSource(8053U);
    msg.setSourceEntity(99U);
    msg.setDestination(43173U);
    msg.setDestinationEntity(70U);
    msg.name.assign("XBMTCMCEAZSUKUPRZEORDHAFFDVNYLYZXLZBXMTZMFJBEHVNLPZFMLWRALENVIAVWAOWJJTSVQM");
    msg.state = 108U;

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
    msg.setTimeStamp(0.4990364695604703);
    msg.setSource(23349U);
    msg.setSourceEntity(144U);
    msg.setDestination(46818U);
    msg.setDestinationEntity(153U);
    msg.name.assign("JKKCWJZWHCHTOEGGZEHXSADFKCSKQEIIOEVJBHJJZLIQGUICXBKRAVYTWUWWWSUYMHJOVRNPBLOCEXATTAPVHQGEYTXLSOSFLVFMBTPFOCRMNPCYGMQGEVYCMQQFHWFQKNDAFXVZNXOVSQBATRZPRRDRDGDPQYLNJSUMHDSADPUPRIMXTDMZNEPPRXZYUL");
    msg.state = 246U;

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
    msg.setTimeStamp(0.7972778485816118);
    msg.setSource(9721U);
    msg.setSourceEntity(89U);
    msg.setDestination(15730U);
    msg.setDestinationEntity(134U);
    msg.name.assign("LJTAPJUBASIIIPPLSBGYPRHBNSBUBYSCOGWUQITWYQBVJXYWJLRQZHZXFLNSSPPVNMJFGEHGMINHLKAUBOZOEWATKHUDFUQRVADAFHVRSXNLCHQLRVXKJDETKPVRMGWWVJXXTZTKSJDYVKZWTQHICJWTXEZLZQIICIBABT");
    msg.value = 59U;

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
    msg.setTimeStamp(0.9106980978732764);
    msg.setSource(31650U);
    msg.setSourceEntity(37U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(54U);
    msg.name.assign("APLKEKXJQDNOBDUQPPLFJOXLBUFEPMATVFOHDKFUGOKLLLKNISCRKOBNWAZGXBYRVXHNOTPRWLNBXFCRUQDHDMVKAIHBMMOSTOBPJQYM");
    msg.value = 74U;

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
    msg.setTimeStamp(0.805550783841676);
    msg.setSource(28393U);
    msg.setSourceEntity(234U);
    msg.setDestination(53477U);
    msg.setDestinationEntity(245U);
    msg.name.assign("JUIKTBKNZBP");
    msg.value = 2U;

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
    msg.setTimeStamp(0.4018806157275854);
    msg.setSource(27161U);
    msg.setSourceEntity(253U);
    msg.setDestination(61677U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DSXGDAZGYGJZNLCKNWMSNDDRVVVZIVSOPMJAGWOMMUHWAQBYOJRRLWJYCTTRWNKARZJKNHUBSEODTZBVKXGXFPFIVQURYSLYBHRTQJOAITTWZPOKLJLDWAZTWYKAFMIPQEZKCCQEHOWPQQSPAR");

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
    msg.setTimeStamp(0.613993814227991);
    msg.setSource(56461U);
    msg.setSourceEntity(252U);
    msg.setDestination(15878U);
    msg.setDestinationEntity(113U);
    msg.name.assign("OWFRVSTIHDYDPZSAFEUZ");

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
    msg.setTimeStamp(0.8587266948265945);
    msg.setSource(43895U);
    msg.setSourceEntity(49U);
    msg.setDestination(63748U);
    msg.setDestinationEntity(184U);
    msg.name.assign("XVJFTTQWAVMAXCLISMBEJXQTCWIQGQBPQFCQODPWLSZDNZVKQCNGPVDDGERLMYKUOJYNTJQOTOSKQICADCTHUGCHKZUUPQDFRCODAKLRKJCTUHVTWSBXJSNNAZWERZYRWRLMIIHFGREHJWLYNEVSCOGBFOZIPEBMHOBUSDMWHLIAGHLNVBXBHFYRRYTXPNWEZY");

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
    msg.setTimeStamp(0.31402742559095387);
    msg.setSource(4289U);
    msg.setSourceEntity(87U);
    msg.setDestination(25580U);
    msg.setDestinationEntity(15U);
    msg.name.assign("NFZJPHDJVHKLUDDLFFJZJPWAHQBXWQKDIEVREBOZCCPUNZMCGOTZSUYWVCMLFMNPCCHEQVGGCDTIWLBYYCXXBKTZDEVBUYNCNAEHLLU");
    msg.value = 173U;

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
    msg.setTimeStamp(0.5380423093025436);
    msg.setSource(30789U);
    msg.setSourceEntity(55U);
    msg.setDestination(36285U);
    msg.setDestinationEntity(217U);
    msg.name.assign("DCOYZEWVOOZAGKKEPSFSUCUQGYJENVVLDKRADHSVQISKENLDSWVVBGUFFYUWDBCFMQRKRMMTUQPQHTNLXHFZKTITKHMYRMPXGYLGDPYBWZAOCNPTJSEXWMZASBMCERGUGLJKJHZCIT");
    msg.value = 234U;

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
    msg.setTimeStamp(0.1645440713354055);
    msg.setSource(1017U);
    msg.setSourceEntity(110U);
    msg.setDestination(40412U);
    msg.setDestinationEntity(68U);
    msg.name.assign("MHPLFXXIALXNFYSOBMQIKJUOTQSRFLABVDAZEQQROGRGTMSUCXZSATIPPNZFWVPMICJYWWMGGAZNHJUIDVANIDIETCANEVZW");
    msg.value = 34U;

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
    msg.setTimeStamp(0.9560508663651357);
    msg.setSource(56921U);
    msg.setSourceEntity(47U);
    msg.setDestination(55678U);
    msg.setDestinationEntity(135U);
    msg.id = 72U;
    msg.period = 2023642808U;
    msg.duty_cycle = 607222212U;

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
    msg.setTimeStamp(0.76776046289067);
    msg.setSource(13143U);
    msg.setSourceEntity(191U);
    msg.setDestination(59748U);
    msg.setDestinationEntity(139U);
    msg.id = 196U;
    msg.period = 473070416U;
    msg.duty_cycle = 1088504983U;

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
    msg.setTimeStamp(0.9066749736218331);
    msg.setSource(60891U);
    msg.setSourceEntity(0U);
    msg.setDestination(56782U);
    msg.setDestinationEntity(140U);
    msg.id = 178U;
    msg.period = 3799580629U;
    msg.duty_cycle = 2310282312U;

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
    msg.setTimeStamp(0.9685069973842646);
    msg.setSource(65091U);
    msg.setSourceEntity(159U);
    msg.setDestination(57659U);
    msg.setDestinationEntity(36U);
    msg.id = 233U;
    msg.period = 2828360340U;
    msg.duty_cycle = 3447959849U;

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
    msg.setTimeStamp(0.09603261041716893);
    msg.setSource(48048U);
    msg.setSourceEntity(143U);
    msg.setDestination(6017U);
    msg.setDestinationEntity(101U);
    msg.id = 48U;
    msg.period = 1661550197U;
    msg.duty_cycle = 2680144182U;

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
    msg.setTimeStamp(0.9438656871860173);
    msg.setSource(7850U);
    msg.setSourceEntity(46U);
    msg.setDestination(1526U);
    msg.setDestinationEntity(50U);
    msg.id = 254U;
    msg.period = 2306135314U;
    msg.duty_cycle = 2320974263U;

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
    msg.setTimeStamp(0.829733383155909);
    msg.setSource(7762U);
    msg.setSourceEntity(171U);
    msg.setDestination(1048U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.30825523289187007;
    msg.lon = 0.6575576731405923;
    msg.height = 0.6362146310179613;
    msg.x = 0.3784805068592101;
    msg.y = 0.8563548499329964;
    msg.z = 0.2448565323721914;
    msg.phi = 0.07135832678454901;
    msg.theta = 0.3816337948170594;
    msg.psi = 0.30166813884265187;
    msg.u = 0.2514895499797051;
    msg.v = 0.19743186930058365;
    msg.w = 0.8208261871734814;
    msg.vx = 0.6445141980564822;
    msg.vy = 0.48424792131007166;
    msg.vz = 0.5905211351479964;
    msg.p = 0.3727324681046955;
    msg.q = 0.19787763969045036;
    msg.r = 0.4321058120612836;
    msg.depth = 0.7334253475838759;
    msg.alt = 0.7527481812254333;

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
    msg.setTimeStamp(0.6476355074016074);
    msg.setSource(30965U);
    msg.setSourceEntity(216U);
    msg.setDestination(31197U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.6778839542749479;
    msg.lon = 0.7680808644084686;
    msg.height = 0.7359307923966714;
    msg.x = 0.4954180679242135;
    msg.y = 0.9668663035682009;
    msg.z = 0.5862087723061788;
    msg.phi = 0.6911856564333504;
    msg.theta = 0.8216563041381678;
    msg.psi = 0.23819196238498863;
    msg.u = 0.42404973132338386;
    msg.v = 0.6025950869317138;
    msg.w = 0.48912792357309054;
    msg.vx = 0.8943912811530488;
    msg.vy = 0.5439724883586718;
    msg.vz = 0.5211992968842463;
    msg.p = 0.1551560075545826;
    msg.q = 0.6841733181906261;
    msg.r = 0.7350054406391292;
    msg.depth = 0.42073750146124844;
    msg.alt = 0.48236690206068555;

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
    msg.setTimeStamp(0.09593347377844286);
    msg.setSource(10929U);
    msg.setSourceEntity(118U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.2361047712689499;
    msg.lon = 0.9520989050155175;
    msg.height = 0.28378055504965183;
    msg.x = 0.9967617887226897;
    msg.y = 0.1228223221040412;
    msg.z = 0.8155112535661723;
    msg.phi = 0.7312795738969238;
    msg.theta = 0.365797868304119;
    msg.psi = 0.5966656993301297;
    msg.u = 0.3652419192396691;
    msg.v = 0.5021855171522204;
    msg.w = 0.08800091569654178;
    msg.vx = 0.3362143880582744;
    msg.vy = 0.40660984975418235;
    msg.vz = 0.5767725773352435;
    msg.p = 0.32063783485828745;
    msg.q = 0.8528201596823303;
    msg.r = 0.9866251992077025;
    msg.depth = 0.4716100232533319;
    msg.alt = 0.19690096675417812;

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
    msg.setTimeStamp(0.5312923507752407);
    msg.setSource(62082U);
    msg.setSourceEntity(24U);
    msg.setDestination(60338U);
    msg.setDestinationEntity(217U);
    msg.x = 0.4930422280676682;
    msg.y = 0.6993752993108556;
    msg.z = 0.9782192342279621;

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
    msg.setTimeStamp(0.4396164222793011);
    msg.setSource(52320U);
    msg.setSourceEntity(88U);
    msg.setDestination(30357U);
    msg.setDestinationEntity(175U);
    msg.x = 0.657614000217472;
    msg.y = 0.8111897003531742;
    msg.z = 0.09400919802974228;

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
    msg.setTimeStamp(0.16673359046982406);
    msg.setSource(12971U);
    msg.setSourceEntity(120U);
    msg.setDestination(12492U);
    msg.setDestinationEntity(234U);
    msg.x = 0.5578817189537638;
    msg.y = 0.7758572026548239;
    msg.z = 0.9037960327076039;

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
    msg.setTimeStamp(0.11742351704429221);
    msg.setSource(29577U);
    msg.setSourceEntity(171U);
    msg.setDestination(16129U);
    msg.setDestinationEntity(175U);
    msg.value = 0.47225751220062784;

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
    msg.setTimeStamp(0.7429862668806801);
    msg.setSource(52654U);
    msg.setSourceEntity(93U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(87U);
    msg.value = 0.921454410260336;

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
    msg.setTimeStamp(0.8531155649757033);
    msg.setSource(60719U);
    msg.setSourceEntity(201U);
    msg.setDestination(51447U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8275660770129512;

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
    msg.setTimeStamp(0.6811952410082917);
    msg.setSource(31416U);
    msg.setSourceEntity(167U);
    msg.setDestination(43886U);
    msg.setDestinationEntity(169U);
    msg.value = 0.4563651925062814;

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
    msg.setTimeStamp(0.8131045948867446);
    msg.setSource(52476U);
    msg.setSourceEntity(115U);
    msg.setDestination(41707U);
    msg.setDestinationEntity(40U);
    msg.value = 0.2957777430635723;

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
    msg.setTimeStamp(0.008109866009762823);
    msg.setSource(44227U);
    msg.setSourceEntity(19U);
    msg.setDestination(25630U);
    msg.setDestinationEntity(123U);
    msg.value = 0.312988695645001;

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
    msg.setTimeStamp(0.8933676423613931);
    msg.setSource(29383U);
    msg.setSourceEntity(10U);
    msg.setDestination(37219U);
    msg.setDestinationEntity(52U);
    msg.x = 0.36328766598866535;
    msg.y = 0.18605366539425383;
    msg.z = 0.6962357801743048;
    msg.phi = 0.07897103523889781;
    msg.theta = 0.47027428818863537;
    msg.psi = 0.9914981656680194;
    msg.p = 0.18259990469111598;
    msg.q = 0.1417987330954329;
    msg.r = 0.5403244385353049;
    msg.u = 0.10170312216616995;
    msg.v = 0.1294595928688408;
    msg.w = 0.12391373379613035;
    msg.bias_psi = 0.06935491262687676;
    msg.bias_r = 0.1581674938628036;

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
    msg.setTimeStamp(0.2521312560206884);
    msg.setSource(33214U);
    msg.setSourceEntity(0U);
    msg.setDestination(60722U);
    msg.setDestinationEntity(186U);
    msg.x = 0.5800747585102419;
    msg.y = 0.06130016838330499;
    msg.z = 0.8497673307633199;
    msg.phi = 0.08512304055916609;
    msg.theta = 0.01825212192798964;
    msg.psi = 0.7406942481112189;
    msg.p = 0.16962706584341647;
    msg.q = 0.8619189876345187;
    msg.r = 0.9656041762450831;
    msg.u = 0.3208629279949944;
    msg.v = 0.334493291267539;
    msg.w = 0.876829723451474;
    msg.bias_psi = 0.6209538094125568;
    msg.bias_r = 0.8593711394045962;

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
    msg.setTimeStamp(0.8923401624472739);
    msg.setSource(40214U);
    msg.setSourceEntity(116U);
    msg.setDestination(57131U);
    msg.setDestinationEntity(120U);
    msg.x = 0.7376616985370182;
    msg.y = 0.5905488624121201;
    msg.z = 0.10243199769953237;
    msg.phi = 0.23119042737885565;
    msg.theta = 0.5891147464142168;
    msg.psi = 0.1202384974341476;
    msg.p = 0.052150974543737516;
    msg.q = 0.5386760736660094;
    msg.r = 0.8701014075807301;
    msg.u = 0.9155322551366452;
    msg.v = 0.688618487706058;
    msg.w = 0.6257514946179786;
    msg.bias_psi = 0.7554022825516327;
    msg.bias_r = 0.8789988721307068;

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
    msg.setTimeStamp(0.10058731628531481);
    msg.setSource(42427U);
    msg.setSourceEntity(45U);
    msg.setDestination(11483U);
    msg.setDestinationEntity(37U);
    msg.bias_psi = 0.27176982250578385;
    msg.bias_r = 0.2766001404028714;
    msg.cog = 0.19100754318259816;
    msg.cyaw = 0.6651364688007307;
    msg.lbl_rej_level = 0.6542520378859131;
    msg.gps_rej_level = 0.11401849558543631;
    msg.custom_x = 0.1715969375835421;
    msg.custom_y = 0.07803381671371223;
    msg.custom_z = 0.43598116306932977;

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
    msg.setTimeStamp(0.6844214733194826);
    msg.setSource(48609U);
    msg.setSourceEntity(168U);
    msg.setDestination(19826U);
    msg.setDestinationEntity(20U);
    msg.bias_psi = 0.8739390829513507;
    msg.bias_r = 0.14633010771871124;
    msg.cog = 0.5654485859024027;
    msg.cyaw = 0.7007289226857292;
    msg.lbl_rej_level = 0.1170417132005066;
    msg.gps_rej_level = 0.7106671771102578;
    msg.custom_x = 0.19434985480733147;
    msg.custom_y = 0.5856505654606786;
    msg.custom_z = 0.3082007078769191;

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
    msg.setTimeStamp(0.8964489872610947);
    msg.setSource(26665U);
    msg.setSourceEntity(39U);
    msg.setDestination(24103U);
    msg.setDestinationEntity(203U);
    msg.bias_psi = 0.28185161658387015;
    msg.bias_r = 0.5034409059565293;
    msg.cog = 0.9047619013947846;
    msg.cyaw = 0.32091616957147184;
    msg.lbl_rej_level = 0.5293027887039348;
    msg.gps_rej_level = 0.7454139293603762;
    msg.custom_x = 0.1767230576494604;
    msg.custom_y = 0.1532443059316978;
    msg.custom_z = 0.8908286468054694;

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
    msg.setTimeStamp(0.9471123842081183);
    msg.setSource(22714U);
    msg.setSourceEntity(172U);
    msg.setDestination(48822U);
    msg.setDestinationEntity(217U);
    msg.utc_time = 0.4038950293872987;
    msg.reason = 79U;

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
    msg.setTimeStamp(0.8156571016043231);
    msg.setSource(1931U);
    msg.setSourceEntity(142U);
    msg.setDestination(53943U);
    msg.setDestinationEntity(163U);
    msg.utc_time = 0.34079688557907895;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.49891747883435544);
    msg.setSource(61233U);
    msg.setSourceEntity(128U);
    msg.setDestination(21603U);
    msg.setDestinationEntity(134U);
    msg.utc_time = 0.859687930279008;
    msg.reason = 127U;

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
    msg.setTimeStamp(0.4421796163732695);
    msg.setSource(14944U);
    msg.setSourceEntity(177U);
    msg.setDestination(46920U);
    msg.setDestinationEntity(50U);
    msg.id = 127U;
    msg.range = 0.8787041998791987;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.6531881357080886);
    msg.setSource(39898U);
    msg.setSourceEntity(123U);
    msg.setDestination(34590U);
    msg.setDestinationEntity(215U);
    msg.id = 71U;
    msg.range = 0.1330793164653188;
    msg.acceptance = 28U;

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
    msg.setTimeStamp(0.8649784065565753);
    msg.setSource(9911U);
    msg.setSourceEntity(173U);
    msg.setDestination(22319U);
    msg.setDestinationEntity(196U);
    msg.id = 139U;
    msg.range = 0.10935124432887;
    msg.acceptance = 34U;

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
    msg.setTimeStamp(0.4914059828948637);
    msg.setSource(54401U);
    msg.setSourceEntity(247U);
    msg.setDestination(60239U);
    msg.setDestinationEntity(183U);
    msg.type = 172U;
    msg.reason = 233U;
    msg.value = 0.00967212476381285;
    msg.timestep = 0.5866423473083429;

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
    msg.setTimeStamp(0.6803579112762498);
    msg.setSource(894U);
    msg.setSourceEntity(148U);
    msg.setDestination(3587U);
    msg.setDestinationEntity(66U);
    msg.type = 5U;
    msg.reason = 190U;
    msg.value = 0.3061274759794086;
    msg.timestep = 0.9299573736196511;

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
    msg.setTimeStamp(0.497619256799842);
    msg.setSource(5115U);
    msg.setSourceEntity(138U);
    msg.setDestination(2322U);
    msg.setDestinationEntity(30U);
    msg.type = 244U;
    msg.reason = 148U;
    msg.value = 0.3602732857165718;
    msg.timestep = 0.6889936331535363;

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
    msg.setTimeStamp(0.9294985218318179);
    msg.setSource(62901U);
    msg.setSourceEntity(234U);
    msg.setDestination(32123U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.507468101703393);
    msg.setSource(28290U);
    msg.setSourceEntity(112U);
    msg.setDestination(30092U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.1436676809977936);
    msg.setSource(11093U);
    msg.setSourceEntity(238U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.8963951170965845);
    msg.setSource(51486U);
    msg.setSourceEntity(96U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(226U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ABPBBHWRMIQZHCDRFAZUDBYTVEAIPJKPODDNWCHNMNOULVUTWYDBCXJXYLDCXMJIRBPCVHGPTFJHAIYWUKAZIEGJGUXSIFXIXSKLDNZSKAKHESSFEKKVLMMGCGNNCZWJMNOQVAGVUTRGWASWDTKFQIFSOISDBUQMNBXEMRQHYUPWQXKWTLREFOCAOYQJYONJSUMYQTTABYKZHQPHGRYS");
    tmp_msg_0.lat = 0.32700899899174607;
    tmp_msg_0.lon = 0.6945448348851463;
    tmp_msg_0.depth = 0.08935528602765808;
    tmp_msg_0.query_channel = 162U;
    tmp_msg_0.reply_channel = 3U;
    tmp_msg_0.transponder_delay = 154U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18929280817924077;
    msg.y = 0.41197060312413736;
    msg.var_x = 0.6526993578654353;
    msg.var_y = 0.8513670041965363;
    msg.distance = 0.21865615419429973;

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
    msg.setTimeStamp(0.020283550908040793);
    msg.setSource(55603U);
    msg.setSourceEntity(181U);
    msg.setDestination(44660U);
    msg.setDestinationEntity(238U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LAMUCAUOVBZEULCKUYROVSOLNPXHHBYBBKREMZXIXBMUKKCTSRZEQEBWSRQSPVX");
    tmp_msg_0.lat = 0.29981751376355525;
    tmp_msg_0.lon = 0.8647161165625875;
    tmp_msg_0.depth = 0.9200808706097269;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 38U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10029328935496973;
    msg.y = 0.8855421762098061;
    msg.var_x = 0.9823516701387969;
    msg.var_y = 0.43580119310210397;
    msg.distance = 0.21200756570678791;

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
    msg.setTimeStamp(0.7586281787236862);
    msg.setSource(57576U);
    msg.setSourceEntity(27U);
    msg.setDestination(14285U);
    msg.setDestinationEntity(148U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OMOXQUFUNYECYSNWZPXLBFSUUOCOBXWPDLAWYBMQADLNZVCGRDAXCSCTGPHLUARPTCEEUJXKYVQXZCKTHDQSVITIRLKKKRZOLJIDYEZBHEQVPWJMNZMDWMNINGNGLZFJJWIOPWCDGHSSFRRSHFTQA");
    tmp_msg_0.lat = 0.8140891552367816;
    tmp_msg_0.lon = 0.97524562412636;
    tmp_msg_0.depth = 0.022068667843039735;
    tmp_msg_0.query_channel = 75U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 176U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.16821487596766804;
    msg.y = 0.16487436427681468;
    msg.var_x = 0.9455814136326284;
    msg.var_y = 0.4757313686351865;
    msg.distance = 0.38474936613888244;

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
    msg.setTimeStamp(0.8390536652202011);
    msg.setSource(43121U);
    msg.setSourceEntity(58U);
    msg.setDestination(17958U);
    msg.setDestinationEntity(75U);
    msg.state = 18U;

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
    msg.setTimeStamp(0.35050985057639805);
    msg.setSource(25564U);
    msg.setSourceEntity(46U);
    msg.setDestination(9500U);
    msg.setDestinationEntity(73U);
    msg.state = 101U;

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
    msg.setTimeStamp(0.3427325422460066);
    msg.setSource(10181U);
    msg.setSourceEntity(236U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(129U);
    msg.state = 159U;

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
    msg.setTimeStamp(0.47193779943603886);
    msg.setSource(20808U);
    msg.setSourceEntity(198U);
    msg.setDestination(3117U);
    msg.setDestinationEntity(91U);
    msg.x = 0.6888105526643187;
    msg.y = 0.9654307855918621;
    msg.z = 0.008720029806622231;

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
    msg.setTimeStamp(0.24238062668826232);
    msg.setSource(20760U);
    msg.setSourceEntity(50U);
    msg.setDestination(6507U);
    msg.setDestinationEntity(101U);
    msg.x = 0.9368637991279091;
    msg.y = 0.32843372952637373;
    msg.z = 0.8490490639152062;

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
    msg.setTimeStamp(0.6219275150645748);
    msg.setSource(2187U);
    msg.setSourceEntity(5U);
    msg.setDestination(15074U);
    msg.setDestinationEntity(76U);
    msg.x = 0.4537322728532164;
    msg.y = 0.20428455971224924;
    msg.z = 0.7488271082114167;

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
    msg.setTimeStamp(0.8030981742347545);
    msg.setSource(25077U);
    msg.setSourceEntity(61U);
    msg.setDestination(15358U);
    msg.setDestinationEntity(89U);
    msg.value = 0.4074958962751958;

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
    msg.setTimeStamp(0.9260938885685017);
    msg.setSource(16375U);
    msg.setSourceEntity(202U);
    msg.setDestination(20993U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6954518359597373;

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
    msg.setTimeStamp(0.25244477615361016);
    msg.setSource(17135U);
    msg.setSourceEntity(71U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9347887472501977;

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
    msg.setTimeStamp(0.15903313996517598);
    msg.setSource(9366U);
    msg.setSourceEntity(56U);
    msg.setDestination(53666U);
    msg.setDestinationEntity(75U);
    msg.value = 0.4262361645143833;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.4382485623567155);
    msg.setSource(58071U);
    msg.setSourceEntity(64U);
    msg.setDestination(26980U);
    msg.setDestinationEntity(97U);
    msg.value = 0.9698185764460806;
    msg.z_units = 5U;

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
    msg.setTimeStamp(0.21163689993341717);
    msg.setSource(112U);
    msg.setSourceEntity(56U);
    msg.setDestination(487U);
    msg.setDestinationEntity(131U);
    msg.value = 0.5874344690522763;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.8968851372696991);
    msg.setSource(34580U);
    msg.setSourceEntity(231U);
    msg.setDestination(1138U);
    msg.setDestinationEntity(99U);
    msg.value = 0.874908579877032;
    msg.speed_units = 216U;

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
    msg.setTimeStamp(0.8103206775143228);
    msg.setSource(15616U);
    msg.setSourceEntity(209U);
    msg.setDestination(51825U);
    msg.setDestinationEntity(169U);
    msg.value = 0.49232345288369894;
    msg.speed_units = 134U;

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
    msg.setTimeStamp(0.2765475979823282);
    msg.setSource(49919U);
    msg.setSourceEntity(217U);
    msg.setDestination(39099U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7447352234576841;
    msg.speed_units = 214U;

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
    msg.setTimeStamp(0.5519093363195439);
    msg.setSource(6930U);
    msg.setSourceEntity(146U);
    msg.setDestination(56233U);
    msg.setDestinationEntity(80U);
    msg.value = 0.9611954661594617;

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
    msg.setTimeStamp(0.3355643370402831);
    msg.setSource(39667U);
    msg.setSourceEntity(149U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9752006218821785;

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
    msg.setTimeStamp(0.27145610610532356);
    msg.setSource(18415U);
    msg.setSourceEntity(28U);
    msg.setDestination(46631U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5228502697104727;

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
    msg.setTimeStamp(0.054578482453944144);
    msg.setSource(27690U);
    msg.setSourceEntity(196U);
    msg.setDestination(37359U);
    msg.setDestinationEntity(214U);
    msg.value = 0.5550610514512578;

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
    msg.setTimeStamp(0.5481849516651868);
    msg.setSource(44965U);
    msg.setSourceEntity(71U);
    msg.setDestination(59353U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7720331572740854;

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
    msg.setTimeStamp(0.845668147849492);
    msg.setSource(65142U);
    msg.setSourceEntity(107U);
    msg.setDestination(20721U);
    msg.setDestinationEntity(214U);
    msg.value = 0.3617313890302595;

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
    msg.setTimeStamp(0.8296656692788846);
    msg.setSource(24377U);
    msg.setSourceEntity(188U);
    msg.setDestination(23242U);
    msg.setDestinationEntity(176U);
    msg.value = 0.557103871076964;

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
    msg.setTimeStamp(0.7684004959610651);
    msg.setSource(58756U);
    msg.setSourceEntity(13U);
    msg.setDestination(44364U);
    msg.setDestinationEntity(15U);
    msg.value = 0.39927497982402715;

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
    msg.setTimeStamp(0.9291394631443174);
    msg.setSource(31744U);
    msg.setSourceEntity(62U);
    msg.setDestination(34689U);
    msg.setDestinationEntity(132U);
    msg.value = 0.0029392344170695583;

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
    msg.setTimeStamp(0.6617823924715912);
    msg.setSource(60132U);
    msg.setSourceEntity(203U);
    msg.setDestination(54587U);
    msg.setDestinationEntity(30U);
    msg.path_ref = 1264080674U;
    msg.start_lat = 0.03413819185868039;
    msg.start_lon = 0.22715719506399767;
    msg.start_z = 0.005519135762291794;
    msg.start_z_units = 35U;
    msg.end_lat = 0.2687126371577875;
    msg.end_lon = 0.987359604520411;
    msg.end_z = 0.36058357325412416;
    msg.end_z_units = 208U;
    msg.speed = 0.005849428639439935;
    msg.speed_units = 121U;
    msg.lradius = 0.5471629514689829;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.8472883207739534);
    msg.setSource(23074U);
    msg.setSourceEntity(99U);
    msg.setDestination(38941U);
    msg.setDestinationEntity(88U);
    msg.path_ref = 2445477280U;
    msg.start_lat = 0.13311750202457306;
    msg.start_lon = 0.6279352729800153;
    msg.start_z = 0.1389487394852792;
    msg.start_z_units = 4U;
    msg.end_lat = 0.11706865751411644;
    msg.end_lon = 0.5835122906831394;
    msg.end_z = 0.6692800642035666;
    msg.end_z_units = 90U;
    msg.speed = 0.8652064760850594;
    msg.speed_units = 152U;
    msg.lradius = 0.5776293006048298;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.5550448835568627);
    msg.setSource(18724U);
    msg.setSourceEntity(117U);
    msg.setDestination(64804U);
    msg.setDestinationEntity(195U);
    msg.path_ref = 1545097060U;
    msg.start_lat = 0.8158862744161802;
    msg.start_lon = 0.04180103269212099;
    msg.start_z = 0.8689023431405107;
    msg.start_z_units = 139U;
    msg.end_lat = 0.2895577012867676;
    msg.end_lon = 0.20735690362271175;
    msg.end_z = 0.2958241925109457;
    msg.end_z_units = 167U;
    msg.speed = 0.564407838661434;
    msg.speed_units = 113U;
    msg.lradius = 0.26394549872169626;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.4432549688003269);
    msg.setSource(38164U);
    msg.setSourceEntity(178U);
    msg.setDestination(32518U);
    msg.setDestinationEntity(2U);
    msg.x = 0.7269536486329009;
    msg.y = 0.011104428488773022;
    msg.z = 0.5682818966951098;
    msg.k = 0.10393747039927703;
    msg.m = 0.044938073306586945;
    msg.n = 0.5297127988693726;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.896932695124724);
    msg.setSource(8757U);
    msg.setSourceEntity(170U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(209U);
    msg.x = 0.13709964799795726;
    msg.y = 0.44946399558555794;
    msg.z = 0.6042232498267447;
    msg.k = 0.05590905819691272;
    msg.m = 0.5507927106858309;
    msg.n = 0.44805808702719263;
    msg.flags = 133U;

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
    msg.setTimeStamp(0.10482182851806288);
    msg.setSource(41633U);
    msg.setSourceEntity(89U);
    msg.setDestination(11405U);
    msg.setDestinationEntity(52U);
    msg.x = 0.8993643441739603;
    msg.y = 0.48712473041911264;
    msg.z = 0.4137282742299401;
    msg.k = 0.5763600149215984;
    msg.m = 0.7196526957756473;
    msg.n = 0.3673842454739775;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.7282506760980645);
    msg.setSource(21078U);
    msg.setSourceEntity(173U);
    msg.setDestination(52427U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6719091202873144;

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
    msg.setTimeStamp(0.8018458688952778);
    msg.setSource(1803U);
    msg.setSourceEntity(74U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8599267184980817;

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
    msg.setTimeStamp(0.3587529847595937);
    msg.setSource(10U);
    msg.setSourceEntity(130U);
    msg.setDestination(61264U);
    msg.setDestinationEntity(229U);
    msg.value = 0.22953361286071783;

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
    msg.setTimeStamp(0.295567819368327);
    msg.setSource(24776U);
    msg.setSourceEntity(149U);
    msg.setDestination(32067U);
    msg.setDestinationEntity(65U);
    msg.u = 0.875002207897916;
    msg.v = 0.6997236816231739;
    msg.w = 0.017775996407848327;
    msg.p = 0.025902641918868596;
    msg.q = 0.19240145611944415;
    msg.r = 0.7699326536780648;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.5358650149817246);
    msg.setSource(7745U);
    msg.setSourceEntity(244U);
    msg.setDestination(43690U);
    msg.setDestinationEntity(246U);
    msg.u = 0.0516216434270903;
    msg.v = 0.3594359697547982;
    msg.w = 0.523989897115513;
    msg.p = 0.28881733430372725;
    msg.q = 0.1499057962393311;
    msg.r = 0.5008742968890136;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.07716755971811762);
    msg.setSource(49758U);
    msg.setSourceEntity(175U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(29U);
    msg.u = 0.6571655545861542;
    msg.v = 0.8699568614475989;
    msg.w = 0.5882242567438836;
    msg.p = 0.8620077390142481;
    msg.q = 0.7001500789935575;
    msg.r = 0.9781533809653105;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.8247699002360432);
    msg.setSource(17597U);
    msg.setSourceEntity(15U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(117U);
    msg.path_ref = 2813085823U;
    msg.start_lat = 0.729875093362281;
    msg.start_lon = 0.29174781362557756;
    msg.start_z = 0.8511751895346358;
    msg.start_z_units = 246U;
    msg.end_lat = 0.04649283449935682;
    msg.end_lon = 0.20077172211592742;
    msg.end_z = 0.7565756146386546;
    msg.end_z_units = 151U;
    msg.lradius = 0.5887064993475002;
    msg.flags = 125U;
    msg.x = 0.27806342286256025;
    msg.y = 0.36326801205560955;
    msg.z = 0.7881423987241076;
    msg.vx = 0.6568970096327811;
    msg.vy = 0.21733765470366306;
    msg.vz = 0.7556070716221432;
    msg.course_error = 0.9441810676382105;
    msg.eta = 30179U;

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
    msg.setTimeStamp(0.6734537731215039);
    msg.setSource(50305U);
    msg.setSourceEntity(43U);
    msg.setDestination(26715U);
    msg.setDestinationEntity(230U);
    msg.path_ref = 2505787584U;
    msg.start_lat = 0.3285838642830613;
    msg.start_lon = 0.5404586668579978;
    msg.start_z = 0.9970471075928489;
    msg.start_z_units = 163U;
    msg.end_lat = 0.8033966044637537;
    msg.end_lon = 0.133196702412526;
    msg.end_z = 0.45643892705437916;
    msg.end_z_units = 106U;
    msg.lradius = 0.462530971516282;
    msg.flags = 120U;
    msg.x = 0.32179539935627943;
    msg.y = 0.1512080675483778;
    msg.z = 0.720437858757804;
    msg.vx = 0.14793671646399265;
    msg.vy = 0.7608580454160127;
    msg.vz = 0.5000088696206422;
    msg.course_error = 0.5456870334964198;
    msg.eta = 11533U;

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
    msg.setTimeStamp(0.9004293825260509);
    msg.setSource(40901U);
    msg.setSourceEntity(126U);
    msg.setDestination(47828U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 3739178753U;
    msg.start_lat = 0.7908921019059804;
    msg.start_lon = 0.2402330444244255;
    msg.start_z = 0.28653989526452583;
    msg.start_z_units = 179U;
    msg.end_lat = 0.38625735101836023;
    msg.end_lon = 0.07809252751754436;
    msg.end_z = 0.21917244047467965;
    msg.end_z_units = 138U;
    msg.lradius = 0.4284233612045206;
    msg.flags = 55U;
    msg.x = 0.6657444036493041;
    msg.y = 0.3200367616622928;
    msg.z = 0.6993366040090808;
    msg.vx = 0.5149180695183384;
    msg.vy = 0.9932432759483293;
    msg.vz = 0.4193898836278849;
    msg.course_error = 0.4256734283185133;
    msg.eta = 26945U;

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
    msg.setTimeStamp(0.9494152918736749);
    msg.setSource(45275U);
    msg.setSourceEntity(121U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(149U);
    msg.k = 0.7958161310269053;
    msg.m = 0.7641907493609204;
    msg.n = 0.28775880597674175;

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
    msg.setTimeStamp(0.6015812185527964);
    msg.setSource(62746U);
    msg.setSourceEntity(101U);
    msg.setDestination(63384U);
    msg.setDestinationEntity(205U);
    msg.k = 0.09337746223287768;
    msg.m = 0.07485482802914722;
    msg.n = 0.8931153683367199;

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
    msg.setTimeStamp(0.5500461106353893);
    msg.setSource(15414U);
    msg.setSourceEntity(45U);
    msg.setDestination(58321U);
    msg.setDestinationEntity(218U);
    msg.k = 0.6057903922495672;
    msg.m = 0.17077921096887783;
    msg.n = 0.9710663141481709;

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
    msg.setTimeStamp(0.20366491340321002);
    msg.setSource(15437U);
    msg.setSourceEntity(120U);
    msg.setDestination(51772U);
    msg.setDestinationEntity(156U);
    msg.p = 0.13381588520028165;
    msg.i = 0.8013171864143092;
    msg.d = 0.9789789059991009;
    msg.a = 0.20971916661557666;

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
    msg.setTimeStamp(0.7482957603132429);
    msg.setSource(6815U);
    msg.setSourceEntity(62U);
    msg.setDestination(51330U);
    msg.setDestinationEntity(39U);
    msg.p = 0.236743932286282;
    msg.i = 0.36293902147742996;
    msg.d = 0.45348341590256347;
    msg.a = 0.2655054051250678;

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
    msg.setTimeStamp(0.10751744455294665);
    msg.setSource(33425U);
    msg.setSourceEntity(165U);
    msg.setDestination(4688U);
    msg.setDestinationEntity(222U);
    msg.p = 0.9304057727580666;
    msg.i = 0.651918835787333;
    msg.d = 0.21067144213115785;
    msg.a = 0.7951427274873015;

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
    msg.setTimeStamp(0.4854722846434789);
    msg.setSource(48044U);
    msg.setSourceEntity(91U);
    msg.setDestination(61848U);
    msg.setDestinationEntity(68U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.9978236420206306);
    msg.setSource(5234U);
    msg.setSourceEntity(0U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(222U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.16714966768536332);
    msg.setSource(60249U);
    msg.setSourceEntity(192U);
    msg.setDestination(19262U);
    msg.setDestinationEntity(114U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.4877905854364628);
    msg.setSource(37722U);
    msg.setSourceEntity(115U);
    msg.setDestination(9596U);
    msg.setDestinationEntity(136U);
    msg.plan_ref = 2096901850U;
    msg.id.assign("FKIIGCUPBWZQMKHCLAQNTUIKCBAUINPVJOLYCSTUTWANBJDRJKHROWSIEQGLMAFCUULHQTDCUTITDBIZJRTZOXRRIOXNTXFVENAPUZKPVXHBRYYQGBESSJEMNLNR");
    msg.memento.assign("MURVRDHDVPNPGPIMDCZAKSQSQDQVUUCYJJSWJVVHJOBMLUGNFBZQMTOMSSPENEEYBCEUFKGCBIJCXLTAXSXIDDNTPLWEKORQHOFLMGMEXKXWUBQVWYSOGGZRCZYXDHRBCDFAZLWCKXHHRNAPJAKCKLYLWTQIYOFVMGQOXSP");
    msg.timeout = 3712U;
    msg.lat = 0.5846998835494984;
    msg.lon = 0.7153210410380018;
    msg.z = 0.8029156377848138;
    msg.z_units = 62U;
    msg.speed = 0.6274146197064647;
    msg.speed_units = 71U;
    msg.roll = 0.11143737234189655;
    msg.pitch = 0.7663817890576479;
    msg.yaw = 0.6545940303954001;
    msg.custom.assign("UATZWSUXYTJIWVNJIVLNKMIVPYMEKAAGYLKXBCYOINEYSMQFATFNXBYJLSXOPADWURUWPYTRBSOZOKGFWUXQUBUTCBDERPDVVZPKKCSBAPLPOJYSCNHDIGZWGDJEQZHXOP");

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
    msg.setTimeStamp(0.6364911236709969);
    msg.setSource(42100U);
    msg.setSourceEntity(205U);
    msg.setDestination(47192U);
    msg.setDestinationEntity(115U);
    msg.plan_ref = 1378541700U;
    msg.id.assign("QEUCNGCKVERFJQTVOTMTUPSHXCRTVLANDCNAQXYRKQBSOZYSCXHFBEUVVWRXOHMJRFHJRJLAXKWAJSZDYZPSNDBFEQWUUKMMYGWFDNZEVLBMJBICSRLIQLHKYRQEGNUZSKMDJIWBOPWMCPDDRTTEXGLLCKPQXAAHIHKTWUWOYMJEQUJIXOFVSLVZINBOI");
    msg.memento.assign("OSMGLAWANKQCMUUVYAYYFJBTXPCPAEFKVSVVNHSHQGGEGTIRGQKWMJLMIUXTSKNWIFDEHSTVD");
    msg.timeout = 28315U;
    msg.lat = 0.17179671900711613;
    msg.lon = 0.5883297680103539;
    msg.z = 0.4523427383391143;
    msg.z_units = 180U;
    msg.speed = 0.8026608378696617;
    msg.speed_units = 39U;
    msg.roll = 0.18148187698493734;
    msg.pitch = 0.7279355762465394;
    msg.yaw = 0.5656421688252197;
    msg.custom.assign("WFOTGOZJQFDASOKHMBUGPZDBCCWIMXHPAIYKQAAMRTLPOEQTBMHTGAHFNWSDOLUTKRIUZLVFRCEPLNCJDMAFRWQXXYJXLXZGPGHTEFDLLYXISHEVHKZKFDRRDIOWBXQUFQAZSYZVIWNBCHOCAKGVRTAJLBPNMNEYNYNERIMNUVBXWJMUIKHJNCSSCKQOJHVKSZEJZ");

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
    msg.setTimeStamp(0.2949166966664005);
    msg.setSource(35277U);
    msg.setSourceEntity(7U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(150U);
    msg.plan_ref = 4230351138U;
    msg.id.assign("ZOEYNMJPGJCVXDISPLIWHGKPZTCPFB");
    msg.memento.assign("OYNSSWRGYTBJ");
    msg.timeout = 21692U;
    msg.lat = 0.43612263253047046;
    msg.lon = 0.5125137801110213;
    msg.z = 0.32822036613040717;
    msg.z_units = 125U;
    msg.speed = 0.11901357969649573;
    msg.speed_units = 142U;
    msg.roll = 0.26538278552818295;
    msg.pitch = 0.5369067795996751;
    msg.yaw = 0.08467836842028087;
    msg.custom.assign("AUBNJEOETFSLDVDCBKIUINLNORMDHIDQQYCZTXXWPEYEUGHUTKBKNQZYJHRRAHPDPQYKZRQPQVSTOJHVWGYTVSLZBGSARIFOJEELWXMSTFNAPKPOCFUEFZAALTMNHAUISWQMDWMHIYWXGJDWLCAGLKMXVEOK");

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
    msg.setTimeStamp(0.011349090693182462);
    msg.setSource(848U);
    msg.setSourceEntity(19U);
    msg.setDestination(35610U);
    msg.setDestinationEntity(162U);
    msg.plan_ref = 4287337736U;
    msg.id.assign("OHDFXMUJHNXGXVWMMMKPRHSWVXEUIDOCLWXYHVFFKCBWZSEKJIUABCCTUEETPWYRYPGHNLDFXBZBQUATTBLVKBIMDZMOYQMJVMWFITEQOBSVEMOQSJCZEAYLPCEGNCOPDZPSOYTOHGKRNAAH");
    msg.memento.assign("INTJIQJWWKAIHLDNRJOFQYYEJRNYKMNQGDJBRWRQSWOOYPUVWBLLUPTRLQNPKCNMEIBKCVWSEHCUQBRMZSBPDWCRQNMBTKDMBJXWROUTSEIQEFUSOFBDEZGUXHXRFVSJJCOQOVJUVXXSMRTBPAWGLTMDAZISNOZUZFXZBVTPZGEW");
    msg.timeout = 3931U;
    msg.lat = 0.9713514770274946;
    msg.lon = 0.12643587554012525;
    msg.z = 0.4814259749703784;
    msg.z_units = 60U;
    msg.speed = 0.8886059187214628;
    msg.speed_units = 14U;
    msg.duration = 52478U;
    msg.radius = 0.9764720991384644;
    msg.flags = 175U;
    msg.custom.assign("SGEPISWGEVRDKQNIPBVXJFRKDRWEYIENBT");

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
    msg.setTimeStamp(0.0666381854684358);
    msg.setSource(17436U);
    msg.setSourceEntity(104U);
    msg.setDestination(1477U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 3658221443U;
    msg.id.assign("VCKDUERKPEMSJMCUOSKUNTMADNDBDTIHLLSSAOYPZRWIHZHGJLMOLJVPQVNOWCEXQYBBFNJRILXGIVBXLECGWCTNXISQFBYYGWPGVXFNUTKYRKHJVOSUBCCZQQEJAG");
    msg.memento.assign("MGTECYHKWBQNEIYMHGVSLJWCLJWQFZMGQITRHRTSQVOQBRBLSKOHRZMLYYUOJGBS");
    msg.timeout = 65264U;
    msg.lat = 0.38629712322004484;
    msg.lon = 0.690560320559255;
    msg.z = 0.8820885284506;
    msg.z_units = 58U;
    msg.speed = 0.986452812822481;
    msg.speed_units = 119U;
    msg.duration = 25773U;
    msg.radius = 0.407573803760669;
    msg.flags = 64U;
    msg.custom.assign("BFDDNIGXIGHMGNJKICNAGVHCFCOMXCWTDDZGQZUVRWPEEZXWYHGTDQQRSQMVOVSZBKYIJZJUIUWZWOARJBUETKPBVTOJHNAOISPLZGJHKPJBRFLRTYFGWOYHXDCAUPHQKSLWAPHSCBNDAFXHLIELDJKMWXWZCXLNCSC");

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
    msg.setTimeStamp(0.7321332630603448);
    msg.setSource(35196U);
    msg.setSourceEntity(201U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(3U);
    msg.plan_ref = 949376454U;
    msg.id.assign("TUNBXLFLNLUEGHGUTPHOVCGNRRJZBZWVXJMQSXBKVUSYVMWXYSLMXCDZIMXUIMPKYMZECDDIJWKRNAPPNDPDDJFJLDUKTERZOFAKHHZEATBXDDCVBAMSWTVGZIUTAHIFZRLYOSIOMNBVCFRJPGSEFNTTCEWAOWFHJJQNRDGWAYVLQCRPQNBGVHWYOOUVLKKGIKWMYCHYQFUGIEFEOATCMECBRPNYELFXQIJATOH");
    msg.memento.assign("TIKPSPQTYDFNQXDJAMZWDOGCCBVDWEONLUAKFGCTXGMQRLWURVXQJMXIYAHUKCOSYCEZUUZJVKHPHOHNFZFWAAGWWCGHPJMKNSXYABBIRVTGVYENZEICVFAJVGOJDWGXSPLSBMTFYIIPECQSZ");
    msg.timeout = 24913U;
    msg.lat = 0.93063268255883;
    msg.lon = 0.6566382116028904;
    msg.z = 0.7060772027066171;
    msg.z_units = 174U;
    msg.speed = 0.2603546449348927;
    msg.speed_units = 210U;
    msg.duration = 37630U;
    msg.radius = 0.4561846595864395;
    msg.flags = 62U;
    msg.custom.assign("MUVZCNBWNRFNLLIIZVXGBFIDBEACTJKWDGBQZYATVKYDSIOQIRDVOJLJLDMQESCKXPRWUEBXKJUXLFFEWHIAUIDJEVPGFDPXVSSPTMNOHQQYJKADHCEGLTXIOGWEPBKWLIAUUEWCZPKLYHCMMVTIYAWXHTOFHDZFGGNVRPNVFAMSZYJBOUAOJMDQXYNGMAJGNQNOCWBULFBJEKCRSXRSCSKSPWRRZVZO");

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
    msg.setTimeStamp(0.2278192750755933);
    msg.setSource(50492U);
    msg.setSourceEntity(86U);
    msg.setDestination(38754U);
    msg.setDestinationEntity(234U);
    msg.plan_ref = 74762084U;
    msg.id.assign("WKMTALSDZLURVXZCYJXTSPAHVBOJFTZOMSHOOGOHCWGTZBJCMARCDSENALQOAORPGPIAWWWIEQKDICUZBAJHTKFCIQVAXDVMJZBSMGYUEBSZUFJOSJLMGYNHERYHBSNWFOZEQVIGXPBFHCFCOX");
    msg.memento.assign("ZZEYPHZOYPJZPKTDCNCORRRTPFFASDQICNCUJNLFQAAWDLLLEPXELZWKGFJSTUEZWKHYJKWXTMVOIIVPXYWWUPLPJRASKWDXJERZXGBHMQHBQDZWUCXQSBYVMTRECTBFAAURKHQFGNOMDQMSUXISIHAICDYVBEAANSPZGUTNXRVKMVLCFJLNEMUVRVZFGQLGOWBOTWUCCYJJABKGTPBOTSRSKYUXHIGDLFEVIHBHIKGVO");
    msg.custom.assign("CBHOQUEDCLAYWYXGMEWKXHLQRGNMGEABFZJUQXD");

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
    msg.setTimeStamp(0.2326660636623309);
    msg.setSource(258U);
    msg.setSourceEntity(96U);
    msg.setDestination(58879U);
    msg.setDestinationEntity(137U);
    msg.plan_ref = 2311648506U;
    msg.id.assign("ZKMTJWAVADSTDCGFUJAIUIDMFVZYDWIVAGBDXXOLYELGZRNLOGDTZOXVJIRYFZMMUYPHGARKVRFVCXEBCPBHHXTIJSHTROQMSWKVWGPBOBNUCSTDZJJYJNPNHWHBFXRCEQQUQMMABPFUIKYKISOWKEWGWCIKBQDBPKHHDVPKRRJXEAQMWLIADLGNLFSFGIXZTLUCNJFLBM");
    msg.memento.assign("HFTPUZDEMIZEZHQGTJONYVLXTQBYNAMFULHYOOLWHEGVBKUXSAVVCMWQRPIAEXCF");
    msg.custom.assign("UQVZZOENWTNJUPNHQRLWKPAORDGZDEEAPQZJRMWFHUPCCMNVLTQFUMCLFEGKVNXGQYOKXSAQKLQYGJQJPVGSHUKALVXUFDCRLKCXNQBWTRDTYSWRTOMMLTZRJBHSVYNOYFSGJZCQCYYAICIBVIMIBENYWEXFMHKLEJYXMISGSWZESJFTLIHUHHEKBAODIPUYDABTOGXBRHBCTWPEADAOZXDGPUORKBPLFFVSDVBHJIIWSFWJNUXPZKCM");

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
    msg.setTimeStamp(0.9380959630875099);
    msg.setSource(3860U);
    msg.setSourceEntity(141U);
    msg.setDestination(43739U);
    msg.setDestinationEntity(66U);
    msg.plan_ref = 81882483U;
    msg.id.assign("UAOZBCZLIYAPBXQCNNDFZVVFXGNIXVUCJVYUSKBMBRGLUGPSYBFTOXJYRQMQZCCSOA");
    msg.memento.assign("GCXYXLNHFDWYKIETTQIIUVDAYBWLSVJUKAUDWMKASGEOIFTSKVUMLOJPWEZMQOJGIXOPIPEQMBDZFLADOMASVHRFEZGUXOLZRRZNNCUVUHOYURCUUBKYTMRNTQFBFQWCQMSEHEK");
    msg.custom.assign("SAZWCQGDSIONJANHDWBCYRKIZMWJWXZYZRFCYGHXWGLUEVYLMSHBSPATHYEJOLMLRBAQDFXVYRCHKIHMRTFOUFCPXPLODCTSYAPRGSDDTKLBJOBMEDQDCUYLXXVCUIHQONTFRGKBALFQIWZKLWETMUGJFMNVKZRSEHFSHXZPQEJGNYEKPCLJIQDAKTBNOGWBOIXIPVYVIMBRMQTQAPZNNVUEZUHCATJKIUTVSGGQXRSAPE");

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
    msg.setTimeStamp(0.012921277604153736);
    msg.setSource(26332U);
    msg.setSourceEntity(83U);
    msg.setDestination(19351U);
    msg.setDestinationEntity(5U);
    msg.plan_ref = 3859726387U;
    msg.id.assign("CGOZJWWOVAVEVCPGIEPCLZATFFEDRKTYHGBFUCSNKXKTPNDZARNRSBMANJCIVQANFQQGYYMVJNGIUJSBKLZNWKEJUYOVBQDLPCUOQFCMMXORULSWIRKCXRZTPYUVTBOFBZLMODWEWHHQVVZBLUVXXSAJMKPODPNDGJYDRSAYQSIHZEQFYEZIDEAOWIH");
    msg.memento.assign("JOTGSVDBZXZIHMJXIIZVFLVCJDAIZSSRUNYHUGBZHBPRDFKCOPIFIABYHYXCKYKTMFASDEKTYZCMUHDWRCFEUINUXUTETAYJJXMQLEYOQQKSCNNUNBJNQQZTJRJMGAODOPTALMQDXFZVVPMDJ");
    msg.timeout = 25066U;
    msg.lat = 0.4523183617442995;
    msg.lon = 0.6746510142748067;
    msg.z = 0.7249148748168587;
    msg.z_units = 249U;
    msg.duration = 12506U;
    msg.speed = 0.46558878745676724;
    msg.speed_units = 249U;
    msg.type = 209U;
    msg.radius = 0.6598567898025753;
    msg.length = 0.11709200689394439;
    msg.bearing = 0.6353067616208943;
    msg.direction = 145U;
    msg.custom.assign("LIDGUQJNLZBBEZWJSCUKUUQGVWHOXQCVCLDALBMSBXSHPSIZDWNKIFJOTSZFIGWENFTEVKXTFBAQGMFYDQUXVGUYZDFROYVCMMZZJHTNNKCJYTMGOVHKOROSRZHDYAUWDCSJIRKBEADFTQUAWMMX");

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
    msg.setTimeStamp(0.4440444968732308);
    msg.setSource(28300U);
    msg.setSourceEntity(214U);
    msg.setDestination(62966U);
    msg.setDestinationEntity(184U);
    msg.plan_ref = 1998470316U;
    msg.id.assign("MFIPJBGOKNJFDSZMJTCCGQREJXGFNYBAIAUFLNDXGKUNJVCJQTLQSIBWOM");
    msg.memento.assign("GSHMEJTJXCNWQYAEZKJCHCPMIQINZWPXRDLVYXENDCQZUHNBUOOKVJTFY");
    msg.timeout = 41364U;
    msg.lat = 0.9512153489492364;
    msg.lon = 0.31277128919228203;
    msg.z = 0.19589353801525167;
    msg.z_units = 111U;
    msg.duration = 30811U;
    msg.speed = 0.6507815482220008;
    msg.speed_units = 49U;
    msg.type = 98U;
    msg.radius = 0.5330917557910324;
    msg.length = 0.1611666805458779;
    msg.bearing = 0.9087105454653066;
    msg.direction = 56U;
    msg.custom.assign("AQOWRLEEJSQAGICLOBYYUEUWPGIXPHVZFQOWFOWPKRYVHCLLZACNTSYMJZMSEQNMVIKSEQLNSRXYSBLBIAKBRPZJKTPMMUIUZSABPVUGCMACDKFTOXPUKEDQQVLDZ");

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
    msg.setTimeStamp(0.2669277430298369);
    msg.setSource(36189U);
    msg.setSourceEntity(77U);
    msg.setDestination(36950U);
    msg.setDestinationEntity(81U);
    msg.plan_ref = 3511651419U;
    msg.id.assign("ODPVUTZVIETYGQJSHUTHTHZMXHKLFYJMDRRDNBNRNLTJCWOVGUFEHWRZMJULAXRSWYDFBBQUEEOBCSWJSFQHMBEZWZZSLXUBKJJPGAHGZDGYUOXUVPTXGZMAEYGOCKPHKYRAECQMZOCNRKNIMUAQCLYZIAXPPVNMDLKYISIITVCBQVFCIPWSKWXSXQKRNTWHCJPIAIFDAOVVTEEFDQLANFKKNEWJYXYHDGSRBULRQG");
    msg.memento.assign("CLHROMTYKISAWRKRAEIYUFBMNCQFFGBRPUZHBELROWQPTWBJUDQSDWSAZZQFUJZBZZXAQKHWYGLBPGAKEHXPIHEGFSMUKRMOODMKLDXSGNJDTWKSZMWZPORGAGAJKCUOLDYGJIXAFYTTVCHSPUFCDTINYECHZJOWLXVQIVWCDQNDMQNPPNCIMNUMHBYOVQEJKETSFLAJVGIJDYAIXBTOEYPPV");
    msg.timeout = 41723U;
    msg.lat = 0.1802800347054203;
    msg.lon = 0.5290367347711579;
    msg.z = 0.29736870593050446;
    msg.z_units = 143U;
    msg.duration = 43722U;
    msg.speed = 0.824816878367121;
    msg.speed_units = 99U;
    msg.type = 225U;
    msg.radius = 0.12517015278049182;
    msg.length = 0.8212745439335806;
    msg.bearing = 0.196152077182298;
    msg.direction = 77U;
    msg.custom.assign("GRJVOEWNICPCZVBZYFRBPUBIBKWBJMMOHQCFCSVCAOXJEWLHEGHYNLLODPXOM");

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
    msg.setTimeStamp(0.4262671685750088);
    msg.setSource(10319U);
    msg.setSourceEntity(39U);
    msg.setDestination(55129U);
    msg.setDestinationEntity(197U);
    msg.plan_ref = 249736658U;
    msg.id.assign("UQPEJNHCZZFPPLLGTRTNSWIUEFPGZAJIQJURTBMKEYDMOXMXMRDWFFQIAKJWHYMWRTXHOCKCAMQOZABSWBFIQXVHJPYBFIVZMUIFGYFDLKOJDPJAOSRSVFEBXSWURSLLKCVHNAXKEBOJEGBYSDA");
    msg.memento.assign("SJJIIBAQAAQBREEIDFCASGZRVKLSDEVLLKUGCEHPZHWXMAJYSRBPIVJTXUQQUJTLWMCEMMWKWK");
    msg.duration = 56933U;
    msg.custom.assign("BGMAGOZEPQYBPCRZNSREPNKDOWRFIVCHNVJBOONKLSOUCIQWEXZRILSRXEIZHAGHFWDACFMBAWLTHTWLYZSGSSZKFTX");

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
    msg.setTimeStamp(0.975530989521843);
    msg.setSource(50244U);
    msg.setSourceEntity(82U);
    msg.setDestination(59793U);
    msg.setDestinationEntity(71U);
    msg.plan_ref = 3926425812U;
    msg.id.assign("ZSEPJCKBADNKCKWYMBEQSQMYPUPHJRDZDPBTYXUDNEIFXYBBLLIRPWBGADVLZYMONKDCVBWSJTQEFUFOQVHSMCTF");
    msg.memento.assign("BSCCKHXEJQKKAFAZKTOOPYOZXTEDYFQOAYZHFRAATEIRGMWGTIYRXVICZVVPCYCUXLMGBMNYODKSSPUTKGRHVMSJMRERUJDNFQSIWSILHDDECXEPXVKBEQXTQDXJMCAOPHNHEZIGFFQSNGDHZWWUCWYJAZPHVRZTIBQUNPRBJWWWTBGLKVMFUQGHWEADOJYVSNKFJTGYVCTWARHCXOBZPUFMPSIUDSYRLLVJQLLJLBIMPIUMZBN");
    msg.duration = 10567U;
    msg.custom.assign("DIVUNHARDNMLXKXJVYRVGHHUZIZOFRTNPVIASEKCFWSOMBHEDNFCIBQCLSJBGJTPLANLAXRIHEVJG");

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
    msg.setTimeStamp(0.3854270756723366);
    msg.setSource(48138U);
    msg.setSourceEntity(105U);
    msg.setDestination(6591U);
    msg.setDestinationEntity(16U);
    msg.plan_ref = 3411386873U;
    msg.id.assign("ZRKQUJZDTISLPMAHFUBHOZPYAPDCWKFKSMPMXZUCQTMGIUHLFRYGBPPHKUWHHIROLWEODXHGDTMMPIKDWVVSGWRVCFVEERDBJVQCERSZERTNOXVXXWGLNGWJVZTBSDNNNAJYFMYOSFALRNCUOOTFZTBUPYDOHVJXKZJCCKEZWXTCBRDVIIQASXNNHZLPQMWGYPWXUYLAQYGBFKJSIINFHEEOJMKQTQG");
    msg.memento.assign("UQNJPVGYHVYHYXLVSCYXBHSLDWCOTVEKAGWCUTKWBQANWXEBYV");
    msg.duration = 58833U;
    msg.custom.assign("DANOKWVOQQKKEKLFETABKLNMRMEJVAIVRXAGWCHDEAWEWTQTUABLKTMGOFFDPXYFWXCZMBDMXWYCBYSKFMIYDXADRBXLLVQWJINQTGX");

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
    msg.setTimeStamp(0.5628654021390717);
    msg.setSource(60187U);
    msg.setSourceEntity(187U);
    msg.setDestination(21100U);
    msg.setDestinationEntity(91U);
    msg.plan_ref = 1509402204U;
    msg.id.assign("JLSXOWHPICMAEKONSOMVHOMTVPMHCUJGBRWDDXFEQEDYTQASYANEGGUSCTKBREZXHJUBSMUIQZPKMGDZVPXCUFLPSSURTFPAJPKQZYJKHQGIALJXFHPCINKBNCZEKLFIMLBDKWJJRHWRVCRCWDOTSWOSYZDHWAQFNDMNUFXUVDRVUECSWYHQIRXYOVEGLKYTFALZFHVXYVRXUBLPTQMOTABILDPYTNXEZO");
    msg.memento.assign("BHYNJEZXGXPKCEOGPFZREOLLVGVNDOKYQNVLFIIKFMCDTLCYAWYBULQWWEQBUUXVNVVTDWQZDCZIYKVFMHMPEEFRXBDVQHAMPGXJUFRPLOSDJPD");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8966969159348209;
    tmp_msg_0.speed_units = 36U;
    msg.control.set(tmp_msg_0);
    msg.duration = 16268U;
    msg.custom.assign("RSLGKRYXXZJTKDUVBIJEZXETJPABWNBLIQHSYTPVURMWPNAWKVNNIZVSRXXAKZVWTNGSAYBSFCNHQINJNW");

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
    msg.setTimeStamp(0.9654754783863563);
    msg.setSource(42084U);
    msg.setSourceEntity(123U);
    msg.setDestination(60791U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 3346081054U;
    msg.id.assign("UZHXRKNQTIAFOKPJRPQOZIEYFUCOTMLSHLBJCYDEZSOSVJULWDYLRUQNKGHTXGYRKCJGQBMHMXIGIOLJBFGIVAOUJSRGIQGNSYKSQPDETWHNPWRPMEHACLZPOCCN");
    msg.memento.assign("RGPXOAHBVMLTJUMIVKZBQQXXRTYJOTEOGXZKJNLVPFSDGHFVTWMYIEEBQMJXOSFQLNZEFQPZHBPLKAQWBCKBWNNJWIIIJRGKZPTYIVZDFHPUFUSYSCJRYARNPLMAGDKVDXUKSFPLEQPXMCOXOWRVRWTUWUSVSS");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.2115352918767882;
    msg.control.set(tmp_msg_0);
    msg.duration = 16370U;
    msg.custom.assign("RIDZWOSXVHKEKJQJSOSDYHSNSDKRUQRDFQHUIJNGGKATIGHHXKGAOUQEPNACWYGPYPLZDLMBJDTCLHH");

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
    msg.setTimeStamp(0.9634309984948006);
    msg.setSource(17509U);
    msg.setSourceEntity(173U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(88U);
    msg.plan_ref = 1516091318U;
    msg.id.assign("CKMMKMPIPNUZFRZHGWIFAHXSYNQAOTDKZWKZQDRGSWBUPJRLWXME");
    msg.memento.assign("CMIMWAMYDJIURTGLIHFJZSJNRQPFXGQQBJOKYAMBZCZREMFRWOXVFQCXSQTDNOFTHTKXLDAZTZBPWXYBI");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.0934615695309613;
    msg.control.set(tmp_msg_0);
    msg.duration = 43378U;
    msg.custom.assign("ZRDTCUMNUPMWWDRMLEAKJYYRISDUYWSOSRTHMLOPLQMHFHYFBTWOVZTTGWGVXGLPYPBEBECVAIUQKDTUXRNGNCHOTKBPGVQPXJDJLINSEKTQTQVADNEWFVZXCLNMSBZXOXJGYRQNJUECGDRGAWRVPMFJSBAAZEZCBVOMVHCLGYKLFXHDHFPNCGOPSSJBQUPLUKXKFTIUKIVNRWDHCQIWYFJJAZANOXF");

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
    msg.setTimeStamp(0.2706198550049115);
    msg.setSource(14664U);
    msg.setSourceEntity(146U);
    msg.setDestination(14013U);
    msg.setDestinationEntity(47U);
    msg.plan_ref = 3186622789U;
    msg.id.assign("QJRESDHCJZMFGNJOEJTODSUJTMVWPEYVIASXPOMHQUHRKENKADCYBYCOKFDFXCFQQYDZJTEALFITVBQOIKPOWRUDMHYNDZOMRIHWDPKXEPDMENXFVGEWXOLTGGUBZIZITVEFNYKNWQFVTFLFRVNXMCPNRTW");
    msg.memento.assign("MAEGVBIPFPGRLCFHUMDVUYPXOTCUMJVULLKABLIXOVEFHKESTRLKNQENMSNYCYMTACCIBBFNVZYIMHSJQXKCHKHZVOHODYQOZJUHYSEHSJBOWFTVWCRYQKIXVANGKSOIGENMLWZKDRBEPGIRWNTRHEHIPVRQCWZUBWRMSBZFQAOUPXFUWQXRYTDJSONZJYDAGDFCXJXNSMNERYGKWBJIELPBXWXAVFGUIZGGASPODL");
    msg.timeout = 11802U;
    msg.lat = 0.014714259227093796;
    msg.lon = 0.800481746930129;
    msg.z = 0.8195627039426041;
    msg.z_units = 55U;
    msg.speed = 0.8974768913909943;
    msg.speed_units = 90U;
    msg.bearing = 0.024982966576315047;
    msg.cross_angle = 0.9814293000557246;
    msg.width = 0.14029039862470383;
    msg.length = 0.2362216022745286;
    msg.hstep = 0.46227452361712984;
    msg.coff = 243U;
    msg.alternation = 7U;
    msg.flags = 101U;
    msg.custom.assign("IQVRCVQIIMFLOEUYKWNAUPQB");

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
    msg.setTimeStamp(0.7919975661321205);
    msg.setSource(16484U);
    msg.setSourceEntity(202U);
    msg.setDestination(43611U);
    msg.setDestinationEntity(131U);
    msg.plan_ref = 1850361050U;
    msg.id.assign("MBOTOXLZMWLEUGIFSXCUBBAVQFUQPEUBYMLABWAPKMTVPXPOJHRQHKJRIGVDGKNIRZKIWLDOXXXMDIYNJDHQVNTTAGGNECJMMV");
    msg.memento.assign("EGUCPALPSEAPVWNPVTSMFTNEEBXVKDAHUAKTAMOEBEBVRYRUXPWDUUZQTKXKLPQLLCWSTS");
    msg.timeout = 32618U;
    msg.lat = 0.354355984091961;
    msg.lon = 0.4515046207239808;
    msg.z = 0.10806422302129925;
    msg.z_units = 143U;
    msg.speed = 0.29565592491423065;
    msg.speed_units = 147U;
    msg.bearing = 0.4076636190841596;
    msg.cross_angle = 0.5718848205163167;
    msg.width = 0.9959147447004727;
    msg.length = 0.011213987106202805;
    msg.hstep = 0.0016117117964047356;
    msg.coff = 41U;
    msg.alternation = 9U;
    msg.flags = 121U;
    msg.custom.assign("SFWZQNDXDTWBWCRFHDHCUMHLMPUVKTKSEQKAUIWXGXIRLXGYNEVZUFJGPBQMIITROOAOFOLFAXXXOZNRESQIVNKKJYANGZWHOZSEBEDPWVFJBDFYJWKBNAVJTVZWPUCIQYGTDYLJAHT");

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
    msg.setTimeStamp(0.9966834797646855);
    msg.setSource(31388U);
    msg.setSourceEntity(157U);
    msg.setDestination(32539U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 1677242526U;
    msg.id.assign("MHIQDZZOWREKWGHBACHFCQ");
    msg.memento.assign("NEAJKOCSQCRZMHBEYPAKDYQQRFNWZVKJYQMMGTQSOWCHRBJSBGTROWURAORAWDGAOPYPSVZXGCMVUGPV");
    msg.timeout = 26279U;
    msg.lat = 0.3749929661174862;
    msg.lon = 0.2911271803691624;
    msg.z = 0.15381651313253675;
    msg.z_units = 168U;
    msg.speed = 0.20905064459628953;
    msg.speed_units = 72U;
    msg.bearing = 0.2919475667451784;
    msg.cross_angle = 0.4180359110214943;
    msg.width = 0.9658334646196038;
    msg.length = 0.3210641536566442;
    msg.hstep = 0.5990876983945492;
    msg.coff = 219U;
    msg.alternation = 39U;
    msg.flags = 50U;
    msg.custom.assign("EAICARINQAKWKTMWDBCRP");

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
    msg.setTimeStamp(0.5126295356492887);
    msg.setSource(50038U);
    msg.setSourceEntity(155U);
    msg.setDestination(5208U);
    msg.setDestinationEntity(184U);
    msg.plan_ref = 1207594941U;
    msg.id.assign("ZYVIPHCQTWZWXPMXSIOMGKKRQYQLMBNKEYYBTLWSCWZVJTPANVGRSCEFPTIGSQSDVNIOPDVVQHJICZZLRJDBWMQRAZDIVAHYQJCYFXJWBGEOHRYLXTZUGYZRHDKFCBSAMLNIGFXEQWAJCVUFDVQOUKLKOAUW");
    msg.memento.assign("AYNPGOCFJZFWEXDCVNDTERXDOIKWIXQKRLASNGDWNHMIKVEGPUDCUJIZJEWCCSDSWCSFDBPAJLPRZMUBJUGGBJFGATTAKDOPWHSYEVRENEFHAPIVWVLZXGANMFIEXYZHMLZOQQKMMYCSRDVKIBOQKCSPQFURTXBTXQSPORCPGRUYHW");
    msg.timeout = 4479U;
    msg.lat = 0.20148671672446195;
    msg.lon = 0.026342384083607118;
    msg.z = 0.8252297924782048;
    msg.z_units = 236U;
    msg.speed = 0.6734991164211102;
    msg.speed_units = 35U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9510827556158739;
    tmp_msg_0.y = 0.6566731645803747;
    tmp_msg_0.z = 0.31852601560903204;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RQTWFOOHVAIYAPVJMNWFSXQYUMFZKCPAYYFQBWFEDNMPAPJZIIUKLADNMVAPHMXNTEENEIQTKGIEJBYVIHGHUZOVJQREWCCBXXJWPTCCCWQVTZMTSBOXQWRUGBWURYZATFGLBWWEHDQXGPYDZNBBMNAOGXMKTFQPVUHSRDTDXJHKTMCSOEZGSDUZIHKXZKGFJYQYBLJLFLHOANMRCLIOHIJVKOK");

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
    msg.setTimeStamp(0.626668043690178);
    msg.setSource(21687U);
    msg.setSourceEntity(114U);
    msg.setDestination(30492U);
    msg.setDestinationEntity(121U);
    msg.plan_ref = 2552682425U;
    msg.id.assign("CQLUJSALLYQNZWVXSPUFCSQBIOPEULKYVM");
    msg.memento.assign("MIVGINWVHWRATKXRSAOUMYBKJOCBIWTUITGWWPCZGNPCAYDAGUZNJXOHFMUINETVCTKNAGKHOZPHQPSSNBASRKLROSVIZBLDLDJEKHMUCFWPEQBLMLGSWDMUXPLOSWXORELZQRYUCLBJXCJGOITXEYLLPKTODNYGAFBRZFEGBNFMEQYEVMSIKVQIDSQABPKRJHSGCCZYJPVOXFFVWHHYQDEFNZYZYRTJNTMEBUQH");
    msg.timeout = 7814U;
    msg.lat = 0.5049319935684503;
    msg.lon = 0.7782547767648211;
    msg.z = 0.6860389697128713;
    msg.z_units = 173U;
    msg.speed = 0.46424484816058276;
    msg.speed_units = 19U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7723984583849985;
    tmp_msg_0.y = 0.9272258231135913;
    tmp_msg_0.z = 0.08272894671784115;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DLIOLEUDVQXHANTAYBCJRZWSHFGTTDTJMERKPPEWQLHVLLLYCUTPJWEIZTHJHGZKVIWZFSDZCPRRIIAXQABRYFKNBJU");

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
    msg.setTimeStamp(0.6054582781842376);
    msg.setSource(48117U);
    msg.setSourceEntity(153U);
    msg.setDestination(33516U);
    msg.setDestinationEntity(21U);
    msg.plan_ref = 3558065254U;
    msg.id.assign("URBICOWUPMAKBDIIFBPQKSWZEQHLRWXCIWFNZPEUFTOISLBHKNOTFWXDZTZY");
    msg.memento.assign("QCLWFGMRYMFMCAXUDNASDRIRXINUVMDPBFHEAJKZKPMOQWNOGAQHKHPNKGCICAZRIDRSDLHHNRLKJVCFEMXERUWDTHTQJATMEANRNCTLWVVFSQZNLTXBLWLTXCCHGIEIFUBXEAZGESPOAFXROOGFBLJSTNGVUEXEDQZSJBJCUZQJJTHUBYKISWMOUPFZUSYDQFYYSPWTGGVDWCPZBOXPBLBAZTMKQOBVYVEORIIKSKUMYJIVYWG");
    msg.timeout = 26115U;
    msg.lat = 0.9041818527267435;
    msg.lon = 0.6654937260196101;
    msg.z = 0.12857236637534397;
    msg.z_units = 37U;
    msg.speed = 0.5904670394022082;
    msg.speed_units = 31U;
    msg.custom.assign("OOXQMKURZUCD");

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
    msg.setTimeStamp(0.6247703300102794);
    msg.setSource(38220U);
    msg.setSourceEntity(120U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(149U);
    msg.x = 0.12052064451061173;
    msg.y = 0.5670059778427813;
    msg.z = 0.4386584003795634;

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
    msg.setTimeStamp(0.1553383971058243);
    msg.setSource(47761U);
    msg.setSourceEntity(22U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(34U);
    msg.x = 0.9389714491186115;
    msg.y = 0.5075372706010302;
    msg.z = 0.25469697124521284;

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
    msg.setTimeStamp(0.7381653962371385);
    msg.setSource(21822U);
    msg.setSourceEntity(252U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(180U);
    msg.x = 0.4156324559406187;
    msg.y = 0.9281935895106292;
    msg.z = 0.6243580168873135;

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
    msg.setTimeStamp(0.9740544479676104);
    msg.setSource(2326U);
    msg.setSourceEntity(197U);
    msg.setDestination(56548U);
    msg.setDestinationEntity(189U);
    msg.plan_ref = 2335163711U;
    msg.id.assign("LJLXFOCUYISWHENKWIBCSMNZEHVGESPGDKZOARKLZNKFXJVFFCKRCTTPCWACDVZRDHJJQRXICPLIYMDWLNNTOUSGMQKHSWBJSSZTDCANZAAHLRXAUIDRHQIWXOQIESKPZQWXGRFEGBETLFBLDXOQBYXYMFVWDVMTVJGAKCEAZBZUHFVOJNHTIRBT");
    msg.memento.assign("YGHPKSQPMSWQRDYWAVBBMDDHTIXXTQUIRMKUAFPQXRKWHIWGOASAFRYELJPNNOBXHGFQZJBPICGCWYXZOGQXZKZOYUOVVHWMDMICAUOVEUWLFCJONJZSAIPWJYDIEYXTGVTBLMSLRORAHAVJ");
    msg.timeout = 44485U;
    msg.lat = 0.7560702160910842;
    msg.lon = 0.11758636700484382;
    msg.z = 0.9294158873064874;
    msg.z_units = 22U;
    msg.amplitude = 0.1839851559019019;
    msg.pitch = 0.17724841268985636;
    msg.speed = 0.3245539184893993;
    msg.speed_units = 163U;
    msg.custom.assign("OJGGPESBEYSNGDIAHJJVWWRZYVHPHMKHEKGXUCQBELJLVUZYIVVMZWJXCRHITQZRDHUXWSUOIZPLYOWDCRUNOHYXFBFBTBODPDWIYSUDAIRQFMSVKTWFYIURTROOFQUETXWSJC");

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
    msg.setTimeStamp(0.045898446524080816);
    msg.setSource(23565U);
    msg.setSourceEntity(126U);
    msg.setDestination(45889U);
    msg.setDestinationEntity(192U);
    msg.plan_ref = 3579291803U;
    msg.id.assign("LJHMYJMOSIRRZHDUJIEALDBLXYGEZXWOKYVDHAWIZXBYJNVRXYOUFFJSKAPBIQNCZNYPHROVPGZGPCLZHFHFGBJOYJQOXPOLIWUKUSETDIAFWYRVKFPEVTIMKUKEFJRSAAWSSEAHQQSQDTZNAUTMTMHK");
    msg.memento.assign("RUPFVFEEJGDLLYWHJIQSZODTYGQAATBZVCPPNKMYQHDOWCVDHLMAXHFZUJWUWQCQJUHOEJAQGKABPQWSGVNGQUXDFJERXBGZNILVDRZBASIBGAGNEYJCGYYISLZSAYTMOWTVCSLKF");
    msg.timeout = 18240U;
    msg.lat = 0.3268773231078941;
    msg.lon = 0.1581421915856146;
    msg.z = 0.732322451571786;
    msg.z_units = 201U;
    msg.amplitude = 0.21071202211164353;
    msg.pitch = 0.3831782612175647;
    msg.speed = 0.35333651381166087;
    msg.speed_units = 38U;
    msg.custom.assign("DIMHYDQBAHTARSLFAEYPLHBTQSFFFHWQOOKCWORVWGHVBBRTOJMJMVNARYPOZFPKDHSCTXMQYXKOVCGWXYZEYSEUONYCJUSBN");

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
    msg.setTimeStamp(0.4354205552306545);
    msg.setSource(36230U);
    msg.setSourceEntity(210U);
    msg.setDestination(55154U);
    msg.setDestinationEntity(99U);
    msg.plan_ref = 3924980060U;
    msg.id.assign("YDRZGSHMTVVXGITXOUHFMPARRSLXMIVVHAJGLHPYAKSGNZCEXMMZLWYLSSIINANYJCZVAZWQEOYUVUVBPOCOFLCCLPSXFQUEUGCSNOKCTQBDPBEYEJLMQDEAOWAEJFKXNDWXFGYCGSWHVOKIIRBNPZYOQNURRBAZKUZDQTWDDXLEIRCJFQLMHVGIQHWG");
    msg.memento.assign("LGUYPVNRFWYGZTBRWNVNVCOBCIYJOKXSQFLAVXOYFUMVUKXSIFAMABLPJNKYNPTBHHWLEJHIIOJWGOCVAPSORXYRHJWQXEXLDCKOQAVYJFFHZDANZRQQEPSVRCCCZARHZIWPFNIBXDUGZDUIFWMNPWTMRZFSGA");
    msg.timeout = 36614U;
    msg.lat = 0.26371650479306386;
    msg.lon = 0.6177055024460829;
    msg.z = 0.3312745951596189;
    msg.z_units = 123U;
    msg.amplitude = 0.3420302793939165;
    msg.pitch = 0.8278044588549786;
    msg.speed = 0.5782514824745244;
    msg.speed_units = 48U;
    msg.custom.assign("FMYIVMUDNJEGXRTD");

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
    msg.setTimeStamp(0.6368681204501219);
    msg.setSource(30947U);
    msg.setSourceEntity(24U);
    msg.setDestination(46824U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.10595167821207174);
    msg.setSource(45275U);
    msg.setSourceEntity(63U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.7201300390812087);
    msg.setSource(235U);
    msg.setSourceEntity(67U);
    msg.setDestination(10159U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.7027816005582425);
    msg.setSource(988U);
    msg.setSourceEntity(50U);
    msg.setDestination(30325U);
    msg.setDestinationEntity(23U);
    msg.plan_ref = 1835833076U;
    msg.id.assign("GFEAPMPEPOBTOIDWGHNKR");
    msg.memento.assign("DHEJZSVHUSLAIONVBWVZPEMGOLKUACRQBJYZMEGEJGPDOMSZJLVYOWYHPVOUIVLYJKRTAJNAXSNLLDVTATWFQTRMRTGZFIGHKXCXBRUDTCQTIFKRGGXNONWRDRVIHFCZOEBFASYGTBJCCDKLKWIQZYCJKQQTNADSLDPBCYQMHMNXXIZFDWYPSABGEHBBIPRPTGAHDEWRJPYEKVMCOESU");
    msg.lat = 0.673003963801631;
    msg.lon = 0.4587069762616959;
    msg.z = 0.34963057591046853;
    msg.z_units = 172U;
    msg.radius = 0.026266079131974873;
    msg.duration = 29208U;
    msg.speed = 0.5353788184811434;
    msg.speed_units = 252U;
    msg.custom.assign("UGWQEEORZJOVYPWQQJPMGXHZMNCNPUJODCFKITISNFATGJORYVCZLC");

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
    msg.setTimeStamp(0.7682440246594846);
    msg.setSource(48504U);
    msg.setSourceEntity(26U);
    msg.setDestination(56882U);
    msg.setDestinationEntity(136U);
    msg.plan_ref = 3774253789U;
    msg.id.assign("RQMTCCPFOB");
    msg.memento.assign("FVFOIMAVZCCIJWIZXMKVEAUNEBNPBWDPPQDKBDHLCWWOBCXQSDERWIPVXDKUTSJFGYRYQQAUJPURQRPKQZSRCTACLXEVEMWELMYLGGZGUMTFHDQENNRCYKTNMPOBSTPOQFNGUJNWJCXZIQAKHRKZHJOKHAEXBSIDJVOZBEHDSWFLPBSJINITG");
    msg.lat = 0.8107930043043607;
    msg.lon = 0.5867171866904002;
    msg.z = 0.16325900870906151;
    msg.z_units = 137U;
    msg.radius = 0.3189068433181891;
    msg.duration = 44474U;
    msg.speed = 0.23602012389827387;
    msg.speed_units = 45U;
    msg.custom.assign("AMBFYMPBXRJXDHLFTXEJIJJWUQNABAISRDJZQLHTOWT");

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
    msg.setTimeStamp(0.7725481173818342);
    msg.setSource(25050U);
    msg.setSourceEntity(28U);
    msg.setDestination(24355U);
    msg.setDestinationEntity(51U);
    msg.plan_ref = 1703188502U;
    msg.id.assign("OUHDJUETRNDQEPSKGNIUHRSJBEJLHGSMBGCMDPFPGTWRZZVAPUUPTRBVWFEEZISQAIRUJJDSLPOKIMBEMWTRVIXDKILVAWKYGTITFOQYLFLRJNJDSQYWKLOXCCLRYGGYNOOMTBJSRYOCXKZQNVZYZCQCCKBEXCOMANTKAWCXMXUTNGBAFWGZKYZMUPBLPBWFVHXEFHTZUQNOYPHHVLQFQHF");
    msg.memento.assign("TIRFMRNQXOULFXHYTMYTWKYMPPDBKKQYCFDRSFSNYSPFGIZEWUBTIEGIVBSQUVLJCKXOZKDIKGNNRRVACC");
    msg.lat = 0.7826087626932005;
    msg.lon = 0.4853037488685217;
    msg.z = 0.5182960611765013;
    msg.z_units = 169U;
    msg.radius = 0.8458699953426975;
    msg.duration = 34082U;
    msg.speed = 0.6053564953854713;
    msg.speed_units = 116U;
    msg.custom.assign("FAEPEBSQRCQINKYBAQNYOLNHLZLPDDXXAJR");

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
    msg.setTimeStamp(0.9048851762274948);
    msg.setSource(29118U);
    msg.setSourceEntity(203U);
    msg.setDestination(44338U);
    msg.setDestinationEntity(127U);
    msg.plan_ref = 1758827543U;
    msg.id.assign("GMOUXPWNOXCYJGZPTLZUVOPRWTEYMVRYERMHRHRNLWEZDBLYXSFKQJFOIIEKPVWZUVXZXGFSQDWEIGQXKHC");
    msg.memento.assign("DHHKWDSUMCUYPIVGDRWXLLMVFFWDTQLBBFZAYZNJPPJUXSKZXAGCHTFGNKORYFXYXREMITKNBQMIJVAWJ");
    msg.timeout = 43735U;
    msg.flags = 37U;
    msg.lat = 0.7477069775739259;
    msg.lon = 0.06595082896096605;
    msg.start_z = 0.22076115380556016;
    msg.start_z_units = 189U;
    msg.end_z = 0.4974686606921309;
    msg.end_z_units = 97U;
    msg.radius = 0.09729449187315209;
    msg.speed = 0.3330696365597149;
    msg.speed_units = 118U;
    msg.custom.assign("TJYKOJMMVDFWUNPICBKCWZCLBHSJEL");

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
    msg.setTimeStamp(0.2205271743922821);
    msg.setSource(45050U);
    msg.setSourceEntity(150U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(39U);
    msg.plan_ref = 1774858009U;
    msg.id.assign("PXDSKELIWPXYOAHENACLCIBUJBUCQBOQWAVNELZNWREPWNFFPHNLTBWCDYPOKCCGVCULIUCXSKAZUADMVSIWOETGUUJDIKOMTGIYHYEGGARGWVSPLXQQFFTZRVNMJKNUMAHBJDYZFZLZDNSHFQQNMHRSRXTEOOBUFKXWKJBYRETRYSW");
    msg.memento.assign("SLIWFXSWLCJPBOVVGHXDGAKMVFVVOTIBEYKZUSGNKZPTUMNYYGFQOMPMRHBBULOXOADYAXE");
    msg.timeout = 35247U;
    msg.flags = 245U;
    msg.lat = 0.34373965362528236;
    msg.lon = 0.8707121391216329;
    msg.start_z = 0.12290584784163938;
    msg.start_z_units = 75U;
    msg.end_z = 0.7953604595786556;
    msg.end_z_units = 243U;
    msg.radius = 0.723709336712699;
    msg.speed = 0.03146017683062052;
    msg.speed_units = 3U;
    msg.custom.assign("TLJXBUFKGPESVBLLRJSJCYCHNLSUEWXRTZAYIUDHIRCPKWZWNPPBRMGUIPXYWBFPJYKHZPAQYNVXLSKQVMDORBAAGEVRDMEXGMHTJOIHZCTCZNKVJLBQFQIBCVBLAOQMGLWEFDYKWGLONCQDFOGYNCGAOWRVNOMZUEFOJOQTYXEZQMSZWIWKSAGUKUGLOXJKKSUDYHMWSTFJQHNDSFREIRCIDBNMDVPZ");

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
    msg.setTimeStamp(0.4137277851483496);
    msg.setSource(37568U);
    msg.setSourceEntity(26U);
    msg.setDestination(18437U);
    msg.setDestinationEntity(68U);
    msg.plan_ref = 844926492U;
    msg.id.assign("LVYSOHOTQWQCUEJPLZETKGTTJBVYMSMKQOIOMGGLLHODSGAVUGSPZMTJYIDAVNXABXXSTURIAKYEQRPBIEQLNARVGRWAD");
    msg.memento.assign("ZPHQNKTTGIMDTHZFWTFWRYMDKAXFUNQDSXLEQMYUTIDWGKZTRAU");
    msg.timeout = 47613U;
    msg.flags = 126U;
    msg.lat = 0.5151914600648221;
    msg.lon = 0.785851026101705;
    msg.start_z = 0.08922699351663022;
    msg.start_z_units = 111U;
    msg.end_z = 0.8220947685311625;
    msg.end_z_units = 16U;
    msg.radius = 0.6449818245124893;
    msg.speed = 0.8004693219036375;
    msg.speed_units = 88U;
    msg.custom.assign("RRPTIGGFEMNOMTLWYBJDCBIK");

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
    msg.setTimeStamp(0.5372217438513945);
    msg.setSource(28873U);
    msg.setSourceEntity(161U);
    msg.setDestination(12091U);
    msg.setDestinationEntity(228U);
    msg.plan_ref = 2507906227U;
    msg.id.assign("ZMSIBHTUTIEZTGOZLVASJMXXUORJVZWVUEIRZMDGETKHRDBECGYQACKWJ");
    msg.memento.assign("RIYEHWDEOIMZWYQUFXDGNAJNGMVHCLLVOTCGQPMXTECGFJZSYCJAIKKCLFACDTVKNTOZHIMATWIQKIOGFPXXQSYWTXSIPWQSCPGQKREKCXAQRJTYVOARNBTOHZKENGHFGIPWTPMNWVBPDUYLFMCVTLPRYSNVDBZSNMXRJYGZLRAFAKSBLEZUSKUBUOWMUBOUZBEJURFOVDEGJDQWNDABUPVJZPWEOSSZDVLXQFYHIMJYAHBNBLQEXRDR");
    msg.timeout = 15376U;
    msg.lat = 0.10669647441059094;
    msg.lon = 0.006373309531371607;
    msg.z = 0.05507138278967605;
    msg.z_units = 81U;
    msg.speed = 0.280170738891241;
    msg.speed_units = 243U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4377525268235708;
    tmp_msg_0.y = 0.4169691234278483;
    tmp_msg_0.z = 0.9448626646096527;
    tmp_msg_0.t = 0.2712469847932878;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DXFYGUDASAYIGCYDLNKPPBKITQDPBJFOZFBQIZUSVMWJOPNMNKOUZVXHQJWFIJQCBIDGUQBAZKREENOZDUFEGMTATHNYEYYNXGSQEMEMUPUKQEPTISLMWNXXRJRSADFXSVOQJAMBRVUVBPYJASKTFHFZWCEXGGXKWDKOGZFLCYTVROZSLRRQVGUVHIHBHVWGBUCRITTCLMIETONMLPWNLJELJOHZJCBLPCHWHXLFTDYKWRQZPVAKDCRH");

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
    msg.setTimeStamp(0.10242161339055567);
    msg.setSource(26672U);
    msg.setSourceEntity(240U);
    msg.setDestination(17626U);
    msg.setDestinationEntity(64U);
    msg.plan_ref = 2493235596U;
    msg.id.assign("RAPOXOVQGECRRKSPLKNTBMKSVVALSJULJFJDUFHMKVPSWOUCWUEWURYHRKLBWDCGDRTFBXUMGRNNFAILGTOX");
    msg.memento.assign("BRSYQFJJSKKEZRHWAXKFKLTHGTHONVEWDTDFXJQWZVREZIYDNMEJLJXJIHNIBCLFDMPMSNIWYXRAEXGOIQYPLWUIRRCRSCSJMOCQDKIBWTMZDUWGCSJAHQYCXUNZSCMRPFXHVEOTQKBLWLDFGPMKJYPOHOLAHPEUTKWGNKVZBBNUONHNUOEZPEDYTMTCRQBXYNZLAYGFQAUQCAWXKSIXAOUEOSJIMGUBTDAFRVGSGTFDCZPVBVGFMVPVHQY");
    msg.timeout = 4612U;
    msg.lat = 0.3092503669871415;
    msg.lon = 0.37295113838345495;
    msg.z = 0.253849117148493;
    msg.z_units = 204U;
    msg.speed = 0.2763069123355377;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8530627990157277;
    tmp_msg_0.y = 0.047433519414841196;
    tmp_msg_0.z = 0.46871407489918093;
    tmp_msg_0.t = 0.7156638894150487;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YANYFOMLLPTBABIYCSSCOQWUYBRZOHA");

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
    msg.setTimeStamp(0.311096342871372);
    msg.setSource(57394U);
    msg.setSourceEntity(185U);
    msg.setDestination(19111U);
    msg.setDestinationEntity(160U);
    msg.plan_ref = 1145135528U;
    msg.id.assign("RJYYFRLDETCAAGPNUNHQFPFDYZOMJGMEZDRBWWUWXBJBTXMRQISKRVOICKOTSYSOLNPVXVGCHNUP");
    msg.memento.assign("DODICSBIKPAEZOCGGQNHVJUPDNAFLGOTQLIXTBHNABJJDCMETPPGQTCBNKHNIFVABUKVDQYDOIUWKVZ");
    msg.timeout = 57394U;
    msg.lat = 0.018615762876554753;
    msg.lon = 0.4198466778820088;
    msg.z = 0.9792146749052776;
    msg.z_units = 29U;
    msg.speed = 0.7905968892661199;
    msg.speed_units = 254U;
    msg.custom.assign("PKGUNZJCVXMJUSGDGGCJNROIVYSLDXUVDHENZUQTZDBQKB");

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
    msg.setTimeStamp(0.9173865835387872);
    msg.setSource(14412U);
    msg.setSourceEntity(222U);
    msg.setDestination(22026U);
    msg.setDestinationEntity(204U);
    msg.x = 0.1846845042780383;
    msg.y = 0.7971838908149016;
    msg.z = 0.015767012363313904;
    msg.t = 0.593907131274647;

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
    msg.setTimeStamp(0.13304379920162934);
    msg.setSource(40965U);
    msg.setSourceEntity(95U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(186U);
    msg.x = 0.6904346639822814;
    msg.y = 0.59361854756798;
    msg.z = 0.5346132768509576;
    msg.t = 0.9413979246641824;

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
    msg.setTimeStamp(0.9247051450972996);
    msg.setSource(23216U);
    msg.setSourceEntity(104U);
    msg.setDestination(18178U);
    msg.setDestinationEntity(0U);
    msg.x = 0.18311029625410458;
    msg.y = 0.5506707491914489;
    msg.z = 0.6142577043690521;
    msg.t = 0.2067071682535948;

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
    msg.setTimeStamp(0.6506829097173474);
    msg.setSource(15365U);
    msg.setSourceEntity(56U);
    msg.setDestination(60055U);
    msg.setDestinationEntity(75U);
    msg.plan_ref = 3100949083U;
    msg.id.assign("EHKIJIQUOEHJQJGIBARSHJPLLBXFBZQITYUWGPJDHCOIW");
    msg.memento.assign("GATAAQGXYNZWCWSHZAVNBMGITFSEYFGAFAGSVMVUVCTADDLPYFZBTUZWRBFNGOYOKMINJUUCNDOXZKLFHMVDWQJBTAJQZKVEPDMIPEMLDZNVOPTYKNESPIEUCRNDHMISUYTHUMIIBZYQKJJRVPRLHHNCWBTBKXRYAHKUUGJTOEPSJXQXYHZESMCQW");
    msg.timeout = 50326U;
    msg.name.assign("IJBINFLMSJHHZNKPKLRBZZZKQCMQYAACREEJJELYPJDNWYBQLQMFREWVOEZKPACPTFEVYVOBQUAQUYKNEINRFVSVGTPSTJIUTXHGKFXG");
    msg.custom.assign("AAHQPLCWZTUXEKOCEINAGWF");

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
    msg.setTimeStamp(0.9482772418490842);
    msg.setSource(14407U);
    msg.setSourceEntity(114U);
    msg.setDestination(54589U);
    msg.setDestinationEntity(238U);
    msg.plan_ref = 4118064209U;
    msg.id.assign("BTCIFVEFPXNHWURKJVYYGLKAAAJWMDBOXLXXNQQYSKTCOHBCANOFKYJWVKPPGEESSSZDBHIJGXRIBVFJYCRUFWHUSLONNCHRVJPFDTDKPFEMMHWJZQTCUIQWASBWAQAFJGLVNARUOQMEIXPZHTDVYNKTLQUCPZYDZOIXCTIZGUQJSGEOMLXMDOTEAVUSVBXZLYMZEOSNRJNYRIBKTGSKMORLMGHFXGEPWNUZRULPFKIHYEDTDZCPBD");
    msg.memento.assign("JXYHPAIVCCVHRSQGTREYMUUNSBQKMIZAFBPROZTTDKJWOOGKQNORNYGVRSRBLXXVAYNAGUNLSGEZQMFHIPOMVGSAUAVOCDFEJKMXFKGFZYBDQMAMPWQNMGOQPDDEZPKULQIFEUMVCOGEPCJFJEKBVLISWFZWDNWTZYDMOLVNBHJLLSXQPLTESKHIRWSECBTHTJLJWGJXXCBUXWUYOZNICCRIAFIV");
    msg.timeout = 43554U;
    msg.name.assign("LEUSQEHKWPTUKYBRPKNHZGTYEZTNGJPWIIBRCSYPSLKLUCJVTSUTYHFLXRTWSOWMQWPWPZCFVUNLADHQREEIAOXYCAYYJONCIIFSATUAEUPMCDZPABQJJT");
    msg.custom.assign("TOFHTURWYTRAMZXKFCLKPWHSACNVASOLDYTNWBUYUILCTYMTHADFSGVJXSHEPNQXHQZJKFCPUUPDDDMVEQZIWGNUQEOJHQSCNTGZKJLUPEEKIJNBECQDOVKHCYAFDKF");

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
    msg.setTimeStamp(0.4180418464503458);
    msg.setSource(16146U);
    msg.setSourceEntity(110U);
    msg.setDestination(54036U);
    msg.setDestinationEntity(8U);
    msg.plan_ref = 1889633471U;
    msg.id.assign("YTPNFDYKPYMZLLNKDVTWRXAWQXOGSFIIJTAIJNFNOHDIXRACCYTGTXUWUOZGUOZJYLARMYDNPHPHZGWHQRJATEQDWSLXIBOXGEBQYVPUUYQZLCMMGIGASTEMSNJZTZCHFZNVCFGIMRCAVDHOIXKNCZQONFXUBCWPESOFEDBQCYJEHEVKEVHRGF");
    msg.memento.assign("FPKPIJVWFWQPGAPZSBYQAFUFKKYHMVUPSORBFQEPYXYIIMZMCMFTVVTDDWLTWBSMUMCMHSDBGTCOEWHTOKWCHRIZH");
    msg.timeout = 40151U;
    msg.name.assign("AMGPFOGQWKYIFOBNHXYNYKUYEVRETMYTERENTDJYTUKMBEZLSDPQJQLZHLVKSJRPJNHTCJNCCGBMCAIADXTRMXGAAFDDWUCEJOTDKNWICFQODAWUSHDKPKYSDYCUVSRTOFFZVSKONSGZZVJYMXLWWHIAVLEJASEFFFQIBXUEBEGOHZICGPAQZOZUBPLPRVIBWXWQPVXXMQVHJRMJQCOIIMHLUTBLTKVALGRUWGNMRBSNHU");
    msg.custom.assign("YXMAOTDVBMZOIJREJIFHHLMQUJNGCFHQNQRCGCNPXUYPXRV");

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
    msg.setTimeStamp(0.751860294205682);
    msg.setSource(30300U);
    msg.setSourceEntity(184U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(249U);
    msg.plan_ref = 451388474U;
    msg.id.assign("VRCGHLHWJNEWZVFJJYFOTTQFADPTLEXDUKOMKLIH");
    msg.memento.assign("UXFDVNIEKFBOWVNCTWNQJZXMDCWXZPBIZJJRTLXPEHSHFWKDZZIXODXOXHLRXLJWFGEIABLLKDECAYRYCNZFERYFJOLBSFPPVSTMVNZQWAPFYGKAIWUQIOSPYAQHVRVEJIOKHFCUVSBTPLGMQSTPWRNKDBGVTMTDVTAM");
    msg.lat = 0.7662375620248392;
    msg.lon = 0.9520108249527585;
    msg.z = 0.3047033524561723;
    msg.z_units = 214U;
    msg.speed = 0.2598084187797143;
    msg.speed_units = 122U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6432894678394687;
    tmp_msg_0.y = 0.45588187978556594;
    tmp_msg_0.z = 0.514649010705868;
    tmp_msg_0.t = 0.7196012943438824;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30474U;
    tmp_msg_1.off_x = 0.5242474076748477;
    tmp_msg_1.off_y = 0.17629814870733085;
    tmp_msg_1.off_z = 0.8462871269556869;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8961712947160548;
    msg.custom.assign("XWSSNZFRXAHKFMBENUKQIIXFUBUQONDCTZHTAXWLDWHFHMRTNICJSSJYDAZFESPCHAKWBYVDSPKLCQYTS");

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
    msg.setTimeStamp(0.9553394169190789);
    msg.setSource(18617U);
    msg.setSourceEntity(98U);
    msg.setDestination(44375U);
    msg.setDestinationEntity(98U);
    msg.plan_ref = 4049870638U;
    msg.id.assign("IPRNHEUKXTVR");
    msg.memento.assign("COHXXFRRPAODMAELNWQGSMRZLVRGAHSQMDXTSBUGBTPJFRWBZBIKHWXIOUQNKTYXZBQOACPKKDNLOFJJESQZUSLPMLVTRIGWWUBVGFJXUDQHCKHMFIYZSHFDKMSLSBGBAB");
    msg.lat = 0.6863507447610953;
    msg.lon = 0.7619341134687315;
    msg.z = 0.14728396081140516;
    msg.z_units = 246U;
    msg.speed = 0.8968219958345237;
    msg.speed_units = 15U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45836U;
    tmp_msg_0.off_x = 0.6693791672114446;
    tmp_msg_0.off_y = 0.4818755004564672;
    tmp_msg_0.off_z = 0.6800120526441097;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.30797017287366524;
    msg.custom.assign("QOZFURKKHLTPSPKSGYHJEIQOPDHMKTYQAKNZCATAIJHBCTQHDBLLNCCSEWCLFIBSZXFNCAMUWLTTBFXDPCRDVEGGFQMXDWUTHHDWLSXJKW");

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
    msg.setTimeStamp(0.48257662061165885);
    msg.setSource(12818U);
    msg.setSourceEntity(183U);
    msg.setDestination(12383U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 387337821U;
    msg.id.assign("RNCHBDPAWTENINSJDGUDWGCTHQIPAMIUJNLCIEKVMTOLNVDHMGFYJARXSKIGYHLCPQOGJYEVRASWQBIGOAFTGFQXDJZXFSYQWEHBYTQMHBZVKMSDPYAKBSGXLXVSGWXLPWRCTUWYRLJAFJZBHUBEJMZHMOHSCCOUPBYICE");
    msg.memento.assign("TNARLKMZDBZ");
    msg.lat = 0.12883673563779596;
    msg.lon = 0.4550899232434229;
    msg.z = 0.4487957397086795;
    msg.z_units = 82U;
    msg.speed = 0.8781779110795157;
    msg.speed_units = 196U;
    msg.start_time = 0.8268903959221807;
    msg.custom.assign("FKUJFEGSVSCDEUUHLKBWFHFIXPQDRGSCNZRSUGLAEBMRNVZXWNMYSBDZFLDGCJEAODLQAXTDKITSTJYAJOPK");

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
    msg.setTimeStamp(0.4066485267178317);
    msg.setSource(33999U);
    msg.setSourceEntity(186U);
    msg.setDestination(62295U);
    msg.setDestinationEntity(62U);
    msg.vid = 11899U;
    msg.off_x = 0.8430620430676959;
    msg.off_y = 0.8734494211368148;
    msg.off_z = 0.9025476320648727;

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
    msg.setTimeStamp(0.7946172569769024);
    msg.setSource(45447U);
    msg.setSourceEntity(190U);
    msg.setDestination(47589U);
    msg.setDestinationEntity(17U);
    msg.vid = 10339U;
    msg.off_x = 0.5822607572442069;
    msg.off_y = 0.4028897549390724;
    msg.off_z = 0.21808953014523302;

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
    msg.setTimeStamp(0.06856520819135459);
    msg.setSource(21039U);
    msg.setSourceEntity(231U);
    msg.setDestination(52301U);
    msg.setDestinationEntity(208U);
    msg.vid = 30409U;
    msg.off_x = 0.26680126259771864;
    msg.off_y = 0.5688208943696862;
    msg.off_z = 0.9719615318864234;

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
    msg.setTimeStamp(0.2275397354186809);
    msg.setSource(63941U);
    msg.setSourceEntity(192U);
    msg.setDestination(61859U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.23501126551416363);
    msg.setSource(27651U);
    msg.setSourceEntity(215U);
    msg.setDestination(45883U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.9728955427238444);
    msg.setSource(1119U);
    msg.setSourceEntity(72U);
    msg.setDestination(8617U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.12417315296096043);
    msg.setSource(50660U);
    msg.setSourceEntity(143U);
    msg.setDestination(18307U);
    msg.setDestinationEntity(152U);
    msg.mid = 30895U;

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
    msg.setTimeStamp(0.8692917498810998);
    msg.setSource(48627U);
    msg.setSourceEntity(145U);
    msg.setDestination(41412U);
    msg.setDestinationEntity(78U);
    msg.mid = 54740U;

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
    msg.setTimeStamp(0.2932335654647531);
    msg.setSource(12978U);
    msg.setSourceEntity(116U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(242U);
    msg.mid = 51584U;

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
    msg.setTimeStamp(0.19694024009171374);
    msg.setSource(41697U);
    msg.setSourceEntity(71U);
    msg.setDestination(49214U);
    msg.setDestinationEntity(98U);
    msg.state = 188U;
    msg.eta = 20971U;
    msg.info.assign("IQNOUYPNXSBZWIKCTZJTSJXWOMCEQQVDLXTAJBZKPFOBRVAYFPIVUUAWLNZNJPECZTDHFCMJMMOTDQLUOUUHEGLUEPOPXVQJDHQGDEDRTJLM");

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
    msg.setTimeStamp(0.46900036291207103);
    msg.setSource(1425U);
    msg.setSourceEntity(16U);
    msg.setDestination(36899U);
    msg.setDestinationEntity(45U);
    msg.state = 105U;
    msg.eta = 29001U;
    msg.info.assign("WPZSSDRYGPTYRGVQMJOJFXSLSOWICZNOAXIITILYTFTCNLYEFDJDEEBOKMCIVXWDESXKOTMEEJMUWXTOIUPHYLBYUWXWQAHNDRDGHCBNMEFWRRSZNTPJAUNSFFOKOSKGTLCMALKIENVPZSDHRJAQOURHZQHZMPVGGUKHYHWLHQXMUBZVIFGVCKNIWALLGURBPRPYVXAHXNTBVCGGUBDZQACWYMXQATQDOAQCVFK");

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
    msg.setTimeStamp(0.1738217739243315);
    msg.setSource(30384U);
    msg.setSourceEntity(206U);
    msg.setDestination(40429U);
    msg.setDestinationEntity(109U);
    msg.state = 202U;
    msg.eta = 11882U;
    msg.info.assign("MFWQDOXCLESGUCXSDBUAFWVTNHRCTIUV");

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
    msg.setTimeStamp(0.9821668276565194);
    msg.setSource(6337U);
    msg.setSourceEntity(6U);
    msg.setDestination(35219U);
    msg.setDestinationEntity(246U);
    msg.system = 19675U;
    msg.duration = 30174U;
    msg.speed = 0.31875117648747675;
    msg.speed_units = 173U;
    msg.x = 0.6789894655780983;
    msg.y = 0.1449337246663106;
    msg.z = 0.29447031006888447;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.8388532829808981);
    msg.setSource(52285U);
    msg.setSourceEntity(32U);
    msg.setDestination(13378U);
    msg.setDestinationEntity(215U);
    msg.system = 2470U;
    msg.duration = 12065U;
    msg.speed = 0.8307934571753928;
    msg.speed_units = 152U;
    msg.x = 0.15442319820865957;
    msg.y = 0.4823289670498594;
    msg.z = 0.49182745472444844;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.06503190081829269);
    msg.setSource(45064U);
    msg.setSourceEntity(66U);
    msg.setDestination(38778U);
    msg.setDestinationEntity(239U);
    msg.system = 44424U;
    msg.duration = 22093U;
    msg.speed = 0.4286090006192055;
    msg.speed_units = 155U;
    msg.x = 0.941326965259886;
    msg.y = 0.5506610370694284;
    msg.z = 0.1277426899630678;
    msg.z_units = 35U;

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
    msg.setTimeStamp(0.2062703272071057);
    msg.setSource(61181U);
    msg.setSourceEntity(203U);
    msg.setDestination(48091U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 835507277U;
    msg.id.assign("SYRNSJHNDTXKTPEPFPLRCHABLKFFDLKXHIACMPSJOCXNFAVSFCEGAOMZWMGFYPGTIYWUHOVWOJKMRWZIUVWWEATNTTDWRQXJNBOEBSTVLMGJDFEPTBFVBYILOZWKYVFPNEAZCRLAUJRHMPLTJB");
    msg.memento.assign("MUOKUQMBCGNFVSKMIVTZBXXTWRMUQPBCKNGQLNSJDZIRBMQOIAFCALEYNEDXPRJNMZHOTWELXMHUAYYKWLYOSRZNRGXLRKWVUCKBDXRCSIZGBQPDVTIDZFMJXUCCHJRYOFXOAHQQFWIEFKBWTRZVQPHTDIUOEJXNKGVFFOYPLIJCMVODG");
    msg.lat = 0.5170220763396485;
    msg.lon = 0.04402224012306866;
    msg.speed = 0.43313572740330364;
    msg.speed_units = 245U;
    msg.duration = 26203U;
    msg.sys_a = 28512U;
    msg.sys_b = 61135U;
    msg.move_threshold = 0.4700564932568774;

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
    msg.setTimeStamp(0.43704909941478687);
    msg.setSource(64220U);
    msg.setSourceEntity(225U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(233U);
    msg.plan_ref = 2304193037U;
    msg.id.assign("URDSBOANUORGYVBKPQXMHVZHBIEXSLYVWJFRLSPLFSJITRXERGSVYFLJNHIPBUDAGGFUJMEROWMVMDTDXQTJXUQXIDNORQMHAMCECFAZNGNUIFSSXTMOKKZWHIVQKCTIPJCJDBYUXOJOAJMMUTA");
    msg.memento.assign("AXXZUHZVJXTDFFGQYWXRDKRUXNKZRSKBHQFDKOIVBBTIUZHHCYKEFVBNFHFSPJOPSOJGKIRESJWOUCDDLUQEIDTJYWRIFLVFXFNJVLNXIGNYWKAOEWRNWOZMVRDPGBQLTSBLHYZJOCVYSAXTGBHMEPYCNATGEDLRMPSITULMABXSCUEZEAQULCLRMUSSJPJLPMZIHDQYHAZPRQYEVAMWKIQFOAGGQM");
    msg.lat = 0.8934202955352986;
    msg.lon = 0.7973655995454735;
    msg.speed = 0.28424892041886607;
    msg.speed_units = 114U;
    msg.duration = 15705U;
    msg.sys_a = 22315U;
    msg.sys_b = 48361U;
    msg.move_threshold = 0.38340491864259263;

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
    msg.setTimeStamp(0.07736298101601102);
    msg.setSource(1306U);
    msg.setSourceEntity(224U);
    msg.setDestination(13709U);
    msg.setDestinationEntity(67U);
    msg.plan_ref = 355733105U;
    msg.id.assign("OXFOWOVLEDHLMHZNEYHLMOGPRHVRWXFUSSEZBIABDKMLMATDCQTKIXRSPURJCDFODTISDATOJAPXHJFYIGLTBZUHQVNAXPNVOKVITZINYNKGXUZFMHFIABBLJROECDBICQLFIZBPNKIYJWSJXGYQBXGPRMJVYEDPMUHUSYSJDVAWCQQGYMXQBQWVZTKLCJAHSTRGNWFUQWANJCKV");
    msg.memento.assign("XSVIWNDLRWKGAOIYMAZPJGOMGRHNUHNCHZJMVFGYYCZROQWPRZFJKXJGHUBLCZTTIVSEBBQUEDIQSAGBQLEJUESBPHJQDNYITYORYMRTUMCCSFBEBAMSWEUBKTGJGFCUCHOOKWHXXNMWIDXQVDKAQRIHZAVPWZCNPDZDVXXRRUTYLPSLKWNLBKTFLPDJPINRFK");
    msg.lat = 0.5857249944509991;
    msg.lon = 0.584225735637483;
    msg.speed = 0.0881141411573334;
    msg.speed_units = 181U;
    msg.duration = 354U;
    msg.sys_a = 40279U;
    msg.sys_b = 50711U;
    msg.move_threshold = 0.988546072564592;

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
    msg.setTimeStamp(0.7776621402408104);
    msg.setSource(34592U);
    msg.setSourceEntity(21U);
    msg.setDestination(25744U);
    msg.setDestinationEntity(242U);
    msg.plan_ref = 2658887104U;
    msg.id.assign("GRERDVQRJUJLDSFVKDBKQHQNUGAZHGJVTFSQMPOFWMHCUYQFQPRUOSNVOEXRLDIEYPZIXHULBRFIRDVGOSTTNHYMFFDHTQIYPYCQWMMCSGKWFUHDAZOCPPETTISZIN");
    msg.memento.assign("AHSIGMZQGECBAYLOJKMMIXYMFPINCBWXMFPNQOLFXWAZHBXOSEHFJZEBMXBRDUTRUYABKPICKDEKRWSAXMZIMEAPDPOYZKESLDSCGVBHEGSUNIKTFXBWFNCTULLQJFSINUTLPOJPNVWTREUAVQKGIQJOYOVWJNYGDKQQTYCCXVWZUFDNJTHYDWLJRZTNQHUGSZKJDWCQPLPBFRSGZXAOCOV");
    msg.lat = 0.9279081344084952;
    msg.lon = 0.8629435415149004;
    msg.z = 0.29873472306243765;
    msg.z_units = 145U;
    msg.speed = 0.5393742164484036;
    msg.speed_units = 239U;
    msg.custom.assign("JOANOHUMRMGINTWCIWXZJPQMFANWIFSVXCSKTBTURNPQPENSIFUQJUFEYTMTOVEUSBJHGZSPRQOHZDDEHSWECRCIZQZUXBPBZCVNWUSYGPTGDSXUVBTJPRICLFIYMWQHYVDMLS");

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
    msg.setTimeStamp(0.3925942376380319);
    msg.setSource(20510U);
    msg.setSourceEntity(239U);
    msg.setDestination(53976U);
    msg.setDestinationEntity(220U);
    msg.plan_ref = 363526607U;
    msg.id.assign("FEGBMOTLPTRNKCRRPPBMCOVLVJIUOMUMBXRXXGIJCQSRTDKZSACGDDYOYGOBFSZDVPV");
    msg.memento.assign("CORKIQUDFAMYWGVAYVGDCCWIXHUMAGQBKALMACEBLDPPHLFKPVOPRD");
    msg.lat = 0.2019488443731774;
    msg.lon = 0.7280569694533279;
    msg.z = 0.9785576820159446;
    msg.z_units = 173U;
    msg.speed = 0.9305247074261428;
    msg.speed_units = 130U;
    msg.custom.assign("NBQICQERBIODQDMORJKZFWBYZFPPOGJNSQMETSRNLXDRQQWWIGMSNHOHKFSCDMGYQZBIARYURAXSGOKVPEMBYTBZHZNATSEHDUYUQUNCGZABJCZMHYMOLOXVGRPNBUUKKUXDWWAKMVCHSLMWCNKKPQFJNIZETTLLJJXYDUQFGVSWVVHWGLDSCJLR");

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
    msg.setTimeStamp(0.30312130951465044);
    msg.setSource(18364U);
    msg.setSourceEntity(0U);
    msg.setDestination(12037U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 2027339780U;
    msg.id.assign("KWZPMRFJQGAXAWJKPNPTJTOKIXFAPGRIVDXBQJUELCGWWIUVDOFBLQSVPYXCQYSDCMBRMVEKLIUSXUHDEPOV");
    msg.memento.assign("WUATPYMJVARNXJLDSXCIOTUIIYBLWKWZLXLAGQCOLZREEYHJUSOCUDEFWFQNBAIKFJXOMDCPPJFHDEBTNUDTNYAGRVAUNBVPZAFFSLKQJEQNNOVFBMSMOKLZYIVTGMUBTOBQKHXRXXRXSQTNDYNNGGA");
    msg.lat = 0.055458056949183376;
    msg.lon = 0.09161234734625923;
    msg.z = 0.2932973984862848;
    msg.z_units = 115U;
    msg.speed = 0.04184279657869738;
    msg.speed_units = 243U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38865226913000106;
    tmp_msg_0.lon = 0.8622196612024474;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LYKZMOSMKJISDPQZRVPMQHIFTBALRCAJAMYOKXWVDTHLXPRDVHQGDKSOTXZTKAUGZDRONQITYVFYETJOCBZVLTFEWKMNBWVUXJN");

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
    msg.setTimeStamp(0.6521075759640677);
    msg.setSource(47973U);
    msg.setSourceEntity(197U);
    msg.setDestination(52064U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.6088348032253681;
    msg.lon = 0.23975314293202865;

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
    msg.setTimeStamp(0.9712245580883615);
    msg.setSource(7240U);
    msg.setSourceEntity(213U);
    msg.setDestination(48245U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.008372328754881586;
    msg.lon = 0.8997026167280852;

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
    msg.setTimeStamp(0.5273335543231064);
    msg.setSource(15342U);
    msg.setSourceEntity(111U);
    msg.setDestination(50938U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.09473608722048088;
    msg.lon = 0.7045495384107767;

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
    msg.setTimeStamp(0.28452490744870695);
    msg.setSource(45346U);
    msg.setSourceEntity(145U);
    msg.setDestination(51480U);
    msg.setDestinationEntity(173U);
    msg.plan_ref = 4039287908U;
    msg.id.assign("HJTGVDUYTFCYKUFVOQZGSMCPJHREHMBNIAVNRXRIZEZYZRFFCOMTVIXJOBXUEBVSQKAGPFQGZZSBOUKLGPVJMDMWQXSTXUPKLAKNGWECBSDCZPJAPGDNSIOEDNXMIVYPNINWRAZOYLTHQLFVWSUAAVFWOMJCXBETINKXZSIYKZQQIUREMIAD");
    msg.memento.assign("PLZVRAHJMWOHYRFRKJDYNHAFGUCYSRNUZ");
    msg.timeout = 43047U;
    msg.lat = 0.6412194853709258;
    msg.lon = 0.014407160787067275;
    msg.z = 0.2749680981262177;
    msg.z_units = 195U;
    msg.pitch = 0.6843925622180559;
    msg.amplitude = 0.24344689488071358;
    msg.duration = 16280U;
    msg.speed = 0.4144131130482087;
    msg.speed_units = 93U;
    msg.radius = 0.09782113875801757;
    msg.direction = 44U;
    msg.custom.assign("YDQNHTCTBSVAHGDMEWCCURIGBLNDVCVSIHBQGEXOSVUIIXAWKNXLOCEYTADTVVBJPOFIGYCGHMMYKUICZECLDOMVZWMBAMQLZIGUIKTUKFDAWTOPRPSIQXUZOPDZWWEUSRODSKQZD");

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
    msg.setTimeStamp(0.7593492528397329);
    msg.setSource(33534U);
    msg.setSourceEntity(148U);
    msg.setDestination(64727U);
    msg.setDestinationEntity(13U);
    msg.plan_ref = 1150839354U;
    msg.id.assign("EUNMGELSJSNQSRXLKDOMYIYZLAVVLJSCZSHLUWNBJJFTMLDBKYTAPPJTJOFQTMGZTXDAPGNAYBPBKPRVYGVXKPBELZIKPVQVLEOHGCSAWEYFGCZWWEVUJKFXBIUCCWMHXMUWUMKXSFAGNWKDFFRXWSVQLIEHJFDQIMDAYKBXI");
    msg.memento.assign("YUVTNWCEPLCGDDNPZGBXGVFHDDLKEQMRVVNPRAAPROODUYHMUKLLWSNFXMQFNDOMUIDESYLLEYKXMWRGQXHIYJAUFHADNZXRXBJBUFEZLYUJTPAWUOWTFGSAEHFRJIXOTNTJABKXXHAXSMLOGZMKNCWSVYGKLYUQUJFOWCJPQBBAELPWPOZVZQVCTIIHKEHWFORPIMGSSBTYQA");
    msg.timeout = 36399U;
    msg.lat = 0.8585506328604662;
    msg.lon = 0.5624947413096015;
    msg.z = 0.08941455414408794;
    msg.z_units = 204U;
    msg.pitch = 0.09965101234128915;
    msg.amplitude = 0.053073477573357564;
    msg.duration = 37433U;
    msg.speed = 0.8083418402011652;
    msg.speed_units = 244U;
    msg.radius = 0.6011193705072797;
    msg.direction = 14U;
    msg.custom.assign("SIXHKXLUTDGQTQVMELYEZHUJAMBZJYKSZZDPOMVXAGVFOMGRWUPGWQPEQHWYTWPRWAILVFXHGKJVLBOUREBOBKPUSHUNBAUURONWRFCYAVJPTBKFLDRVDBSIILFYTRLAJYRTEEPDZHDJQCUKJWTZVGEMDNOBPGRIPTFTHLFQSTCCCKOXHXMSOWAWKMHSQNGILBXIFLANQDCZYPIDINNIZMYCCMODHFANEZAOXCJREXVQFWEYSCMKGS");

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
    msg.setTimeStamp(0.9347054566659677);
    msg.setSource(45929U);
    msg.setSourceEntity(109U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(126U);
    msg.plan_ref = 872633155U;
    msg.id.assign("KIJJTGDVWVUGNULPCHFTRFFB");
    msg.memento.assign("ZHKVUNSEGWSFWTAGCGWHNUNLBDZIZYXPDDMRBMRVJDTLCLAZQKIUBQKIRQGMYUXRFCXADNPFOXIBA");
    msg.timeout = 6812U;
    msg.lat = 0.6364197601290444;
    msg.lon = 0.6846191049442922;
    msg.z = 0.5572294594510746;
    msg.z_units = 91U;
    msg.pitch = 0.1663146570392955;
    msg.amplitude = 0.0972696438261832;
    msg.duration = 63613U;
    msg.speed = 0.6779685061616698;
    msg.speed_units = 101U;
    msg.radius = 0.14736489842445477;
    msg.direction = 79U;
    msg.custom.assign("JBSOTNOXNLQUBIFTGSILARMTKDMWYVQTXEYKJVETCFVPZBJSWNVGKHWNRBZJWIZMXJGPUMOASBODPGRHNTAGLIJIZDLKSWZHUNXOZNHVQLFSCAKGOWRKODDJSHWFCLUIYXUPDDVEFQFUWKGYQUEPRZAMYHKBVELCUXYDRNL");

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
    msg.setTimeStamp(0.34680961008121847);
    msg.setSource(48177U);
    msg.setSourceEntity(156U);
    msg.setDestination(17241U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("DPXITUUCDSZLUVJOOOTXEOVAGYCRKEXHILMCGWNTESHIWZXSSOUHVXRGMZFTLPSQFEKKWPXVSAFPUVIFXUNTAVJFCJQMZYSNGEIPHZOSDHI");
    msg.reference_frame = 228U;
    msg.custom.assign("EKJJBNAKGUHFCXRAVRKHYPIANHGZLYTEXSVAYNHZZSZVEJYPQROJXULBXCWFSMPSZZLWGYJUIMDIIDGGHNBIXPIWFRJDUHVOMLRVEQWSEKLFVCEEYFDXOCQATJNMMNTNYGTAJXIOCFFRUQTHKQBISDVCHNMRTBDOWOOGBKUJTCWVKBAWAGZRO");

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
    msg.setTimeStamp(0.5200635110071695);
    msg.setSource(58308U);
    msg.setSourceEntity(28U);
    msg.setDestination(58475U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("QMEFOFQGCVJUPMLTNAMWYFVJZHSNMGRZPIAJMNLFHWXWNUBUUSOFPSLUOOCKDBMYSHSTTARUNTCMPHJWIOKPFZEGVCIPZCGWRBVLTWQMSSCYQYJRQDGJQBFHXUYTXDMWDNIFYBETFHOYKLSXHEEPWVTOLARKVCKVDIVPKGOKYIJRXCYLNFDDQOHQEZZNHBHKDRMYERVDXGNJPVWQSCQEKAZAEASIRABRAXDU");
    msg.reference_frame = 208U;
    msg.custom.assign("ARTELVNBILOERECSODHGYTZVMBOZXJPKIIVYPQKLFYJONXRVQFSPCMEZZDFHZIFZMMWLREXGMTXSFHPOCBLBMVNPGSBHDCGFUYKKMAMBQOWZYLCJFZSXPPRHYMJADJEUCHMTVUOKHVQNZQKLOCNAJXTUPUXDWCKETIKRJIYSJDLQLPSNGWVIXFRAOGBSGUIDWAZE");

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
    msg.setTimeStamp(0.7344614823536023);
    msg.setSource(11598U);
    msg.setSourceEntity(100U);
    msg.setDestination(2913U);
    msg.setDestinationEntity(163U);
    msg.formation_name.assign("WALUCIFLJHVIJRVYOTTAIUGIYJKGGMHFYMGYDJAAEUVTNRHMCBCALSBWDJRTNGGMFMKQUILPQSWHNNWFDHVZFJOLEJKUPMUNPCZWLBOPQRESEDVCPRJMPBCRJQF");
    msg.reference_frame = 195U;
    msg.custom.assign("SNBQSCQCLVMXZEMMNNJXTZUKYCWXOTTUHAJYEFZRAPRBGFYNQIHOOKOVGHFXGWUKTRWZDVYQANDGKVXNARIOVQZAVNYEPOB");

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
    msg.setTimeStamp(0.2026096020007666);
    msg.setSource(44430U);
    msg.setSourceEntity(20U);
    msg.setDestination(17398U);
    msg.setDestinationEntity(201U);
    msg.plan_ref = 2010279320U;
    msg.id.assign("QJLXKCVHPFCQCMPRGQPSWFAKAHSZRGKNYSVIUQQXZNIESYXUBZPWPHRELHZYXCSDISDNBATAPUMQOLCMGFNBGYJMWPIGMKEDVHVFDRBRFMMTXGOLMEMWDZSYLLEYSYOXKPZTLUBZVEKRHTFDNHWKTIBOWGUINMYQFZODTPFABCAETDTHLJBXUHJUABLOHZAENOFDNCCRYJAVRICNGNZWIUGBJQYSTWTKKRVIVDKSUX");
    msg.memento.assign("XSZMOATKFCQNTLLTCJRYAHPHH");
    msg.group_name.assign("QBIUOAZFIXCZRKCBEMTHYGWRVAGETQFEPQWIKTAQKYWLJMVSGGYRTCBNSPKMSERKKHEMIVUORSHDZCAVGBBBHKQHCVWADWELAJXUBFONWCVLXMOCOTMDJQBNYTULXKNALPFOONCRTNAUOVZYDJFGLDBNUDXHHQXTVWGMRZMPVECFZCUDVRPYTFEGPIGJSSSQNIJQJDUEFZLYNYGWSUJORJIHPAXHZKWAPMHROS");
    msg.formation_name.assign("OFAPCMRKHCQEHKZXUGOLKFVCEVKVTFVYMGWBAXTNKJGLRNMPRUOOJQFJAVI");
    msg.plan_id.assign("JBBXAVACNHAOEACBTNLKYXVLIJXCOHYTFGTUZTQNZDHPQOMNUGPWSWKHEQJJRIXVTSCFSBSLDTXPLGQHVKPXJZQAVVOINIBUOAUSPTDCWUWRNNRWZOUGNLDKUSAYLFNYOVYDOCJAIMQLWKTHMREMHBXRZWEAYGFHFSUGDCZIJMEFTDFPZGPVRLZEJGKWEVPCWXFYRZEJQQWPTNBGKBLSRKSDGIFKMYUE");
    msg.description.assign("WYKDBOFXPMLABAVMKVFUSWUXZHDBFBIVQJQSIJUKKEXLUUIGTVWDZCLMDIPDKCZRMBJNPYRO");
    msg.leader_speed = 0.27947845935150917;
    msg.leader_bank_lim = 0.2437234499386618;
    msg.pos_sim_err_lim = 0.9210092685853916;
    msg.pos_sim_err_wrn = 0.021576676377827897;
    msg.pos_sim_err_timeout = 59366U;
    msg.converg_max = 0.4435194156382838;
    msg.converg_timeout = 39635U;
    msg.comms_timeout = 49142U;
    msg.turb_lim = 0.9234921813779912;
    msg.custom.assign("LCLCECMFBTUROMITMURSHXWAMJNSMMJVIHERPJGMCBGIMFNMYCCDTZYOSBKAVYCTKFVJGDUZRORJWRTQKQKPVPOWOCSUWJEXENHLEPZYUKXALBFWZPKKXLNWAHBYVDZAZSJNUEIAFDIIESHVEVOYLTFSBKQOPGLNDAYZXDZCHFQDXSOQUVTNPWGSUOVSGGRBJEQBXGWIWYFPYCRDPPXZ");

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
    msg.setTimeStamp(0.8930289885946315);
    msg.setSource(58034U);
    msg.setSourceEntity(97U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(32U);
    msg.plan_ref = 731446434U;
    msg.id.assign("DRKHTZBAAUYQWURHWCBFGYUFINWTFBSULYOPKIKTMXCSJLMQPOEXTGKZWOCMETLVUJJXLLNBXHCWDVFKADJBIPRXLHWOUZXPWUFIYPDYIDFLNESNREQZFHYCGDFYGKHYQBSDRQVIIZSWWNCPOGSJKVJZGBQETCHOBA");
    msg.memento.assign("UIFAXNERUROTQBGRDMXSIEPPTZVQKVCBPBENDUTSIKAFSDYXMHBKUAICOXVCMBIVPNHSJEBPFYTFORUZWNXFFCFGEJFGVNMXOARVZMTCQPKBSOVEJGCTULQJYAURSJDOGKNPHSJCIE");
    msg.group_name.assign("MVKWQLWDJPLYHYWYMQJZIBSIFOOIRCFDAIADWZGXPUNTIRCDKFDUGPLVXFWMABTYNJOECGGLTRYTCPXVDOEBFYULJJJCIWQMFCDXQJXHHBIRELPPKVTEECRZHUABUB");
    msg.formation_name.assign("JOFMLVITESQTELMARHHCO");
    msg.plan_id.assign("REGADGTMOLTSGADHGFTCRKSEAHZVXOBJMUCWQJLCAJNDJTBWNWLWQLDOOXGIBEKXWPPYZXMZFWPMIVNRHIPDCNKAVVZZVRBNORPYWSUTFDMOKREJRYJKUEEGLUJPITKPFSKFMJNUEPYHOJISNFCBZIOYMAUDBQVQIBKZHWTHUFYLHJCFXMHUFYGXCTAGTQBYCAYPYMBGLZHNIXFUSEN");
    msg.description.assign("HASCZBLNTLWRRWWOZUDYAMKFAXKTFYYHEJQPDOHJVKJONWVYQGQRRQWNWSLMZISWNTLDQVTYSSBUHKNAAAIMJWGEFCZEPFWEDRIYYXECULMQBJYDVYCKOVZBKIGXDF");
    msg.leader_speed = 0.9692524312451379;
    msg.leader_bank_lim = 0.9969087685003135;
    msg.pos_sim_err_lim = 0.7238906916384552;
    msg.pos_sim_err_wrn = 0.7372808762600637;
    msg.pos_sim_err_timeout = 58554U;
    msg.converg_max = 0.14082887399962163;
    msg.converg_timeout = 55220U;
    msg.comms_timeout = 34416U;
    msg.turb_lim = 0.32823007478722055;
    msg.custom.assign("CWWWHEZVXQNVNWMNONALICHYINIYZSAKCSFDXOMVFFPYWLQXGURTMJSLDFVJMGFMBIVHMPSKUPFJNPKXGKERALZPOKSGMADIIIXUQTIKXEGJSOVFTELQPRGODGKUPCUXRYSDUFASXNPYYVMLTDCFAUUVLTNWHFZOP");

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
    msg.setTimeStamp(0.6822717511865345);
    msg.setSource(41288U);
    msg.setSourceEntity(213U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(157U);
    msg.plan_ref = 725130903U;
    msg.id.assign("XBICLVQKLYTIZBRBIMYECFEQPSSZWFJFOOQMUGYMHVSTAXJLJSMIMNTNGDAPSWUWWTZRATGKDCLYUNFOQMJOBUCXEOSKSWUHJRAKDHKWKSUDVEGHTOPVWHMLCJMDEHPARERLQSGFIPLBKHARFOJMQZBWDDYNEPKVDYIJVXMXSXLOTVCILUWOZOGBEFQDAKTZGXAEKWCLZNYCFPTXIZCNCFADPRJBXRURJHRFBNNNZYZAI");
    msg.memento.assign("YIUORSCCMWGLVTCNRACFRMEOFXVEBREWLTBGMBDXQFTFIKSVHOYQ");
    msg.group_name.assign("ZAELBSTOVAGVYEHVSYBKDWZVWDMOHQKYJQEOGTXYTBTSIZGHXCZIUBYMUCEEPMPDWMEU");
    msg.formation_name.assign("MXQYJCGASOKPTLQDMNIVILJFZVJSCDOMSSWOQKPRLJXUXSTIAMOCVIYRDE");
    msg.plan_id.assign("MBKUCOVYQJTEDVIBRMXFJECWAZONYGMVSTJRJJHIVUXRNCSBSLOZLARYROJUCXKPHFWLKPYLQSEAURFISLXATGMNG");
    msg.description.assign("XZLSIDPLRQJTJOFUVZMGFBVTXMYUWVDJLRAMOZQMPOZYDHHYLMVUFKDXAPVEOKIZ");
    msg.leader_speed = 0.41464718338598816;
    msg.leader_bank_lim = 0.6511915910116325;
    msg.pos_sim_err_lim = 0.05870046076728608;
    msg.pos_sim_err_wrn = 0.9539093150133309;
    msg.pos_sim_err_timeout = 15297U;
    msg.converg_max = 0.5639491657892849;
    msg.converg_timeout = 51696U;
    msg.comms_timeout = 22142U;
    msg.turb_lim = 0.11526631176718505;
    msg.custom.assign("BSHYQBLWQQXRNXBSVZNRICORHJAOIGZTNIAMMQBLZGQSRCWXVDSWGNFPRYOIVHCZTNROKAJAGDWPIAUTPUVMCYQYKZKDMLP");

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
    msg.setTimeStamp(0.5191908333846571);
    msg.setSource(29587U);
    msg.setSourceEntity(197U);
    msg.setDestination(58587U);
    msg.setDestinationEntity(84U);
    msg.plan_ref = 3554986877U;
    msg.id.assign("ONKRRTZGYJEORWFUIDWRNNNJNULYLUNYXIXTJGNOTZYUFQSDCXPEGBYVWWEVEQHXJILVNCAZUFBDMFXRCOMGAPCSIALBHSWTJQKPCTAHBP");
    msg.memento.assign("IQBENFHFLMIOGDPTUWGFEYBKRTOSBVEBJCGFVQSJYJMQVQLTXDBVVRBFSGZLMXXPNHARDXVZNFPCHKEWJPQCIUZAUNHLTMAKXSRDXWUGTICZDDPRJTEACXIYNUQEHDWKGINQTGWYAJSHMHNYCXOUHLNASPVAOWCNTDDOUPKSCRKMLJ");
    msg.control_src = 49708U;
    msg.control_ent = 152U;
    msg.timeout = 0.3401581188834212;
    msg.loiter_radius = 0.14593860395667013;
    msg.altitude_interval = 0.9929626352385575;

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
    msg.setTimeStamp(0.41036127169152514);
    msg.setSource(38853U);
    msg.setSourceEntity(65U);
    msg.setDestination(43349U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 2403991668U;
    msg.id.assign("GLFWLAKBNSSKWZWNBNERFYDAGRHLFFPOCIJLAWHJAHNASGOCPGFVREPRTZQTVPOHYJMIMKEUYDNIZQRVDMMRPZEZYDENJROXXCBMKWDIMSOPIZZXQDTFQYQTSUBBNTOUQOKCSBVTTVWHGUHPUOIJKVZCVHPWIAXBWDSQXCVLJGGLNUSLM");
    msg.memento.assign("TZNXWNPCTYWCBBZYXMXXQQSNOQSPGDJAFLWTUSVFSORSKJIIZHIOYHE");
    msg.control_src = 14568U;
    msg.control_ent = 253U;
    msg.timeout = 0.8605678528384894;
    msg.loiter_radius = 0.7467423380585958;
    msg.altitude_interval = 0.8860767921446457;

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
    msg.setTimeStamp(0.32647266643483375);
    msg.setSource(11016U);
    msg.setSourceEntity(132U);
    msg.setDestination(54454U);
    msg.setDestinationEntity(217U);
    msg.plan_ref = 2463301210U;
    msg.id.assign("UZGLETVWVSVWPVYPQYIHTWBYMOZCOAFACOOUABLUPIFKPAEXTPQNEJAJCDYAOQMWHGUFLGLMRZ");
    msg.memento.assign("UEXTTSDKIUKWOLAOWFLFOJFVTFQYEOWCLEGKMLOPHNYVRLGLJMZXBVUZGAREBPNYXEKCNRZTFKANPYKMXOVSMTTUQLDGQGIQMPSDNDHTEHSXQK");
    msg.control_src = 24598U;
    msg.control_ent = 144U;
    msg.timeout = 0.6198139781908861;
    msg.loiter_radius = 0.5525064133826655;
    msg.altitude_interval = 0.7064405968703621;

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
    msg.setTimeStamp(0.09005272983062618);
    msg.setSource(27805U);
    msg.setSourceEntity(6U);
    msg.setDestination(24777U);
    msg.setDestinationEntity(59U);
    msg.flags = 140U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3351844112458223;
    tmp_msg_0.speed_units = 206U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.23689740958951344;
    tmp_msg_1.z_units = 149U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.27100623604790386;
    msg.lon = 0.745873758950697;
    msg.radius = 0.6554573110226745;

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
    msg.setTimeStamp(0.43217045715890945);
    msg.setSource(9745U);
    msg.setSourceEntity(95U);
    msg.setDestination(42729U);
    msg.setDestinationEntity(72U);
    msg.flags = 240U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1004317122852092;
    tmp_msg_0.speed_units = 168U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07254641229318559;
    tmp_msg_1.z_units = 84U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5795646660719177;
    msg.lon = 0.7579487495268474;
    msg.radius = 0.27768055161252303;

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
    msg.setTimeStamp(0.32249874097917053);
    msg.setSource(59891U);
    msg.setSourceEntity(250U);
    msg.setDestination(58976U);
    msg.setDestinationEntity(145U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17619106273428953;
    tmp_msg_0.speed_units = 28U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4350102973876572;
    tmp_msg_1.z_units = 249U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19078693155585047;
    msg.lon = 0.8386875373911383;
    msg.radius = 0.38794112294036465;

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
    msg.setTimeStamp(0.4022211007362374);
    msg.setSource(7493U);
    msg.setSourceEntity(61U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(170U);
    msg.control_src = 54600U;
    msg.control_ent = 12U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 96U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.036105837781318484;
    tmp_tmp_msg_0_0.speed_units = 218U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.30185296639564296;
    tmp_tmp_msg_0_1.z_units = 119U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.08063585131863515;
    tmp_msg_0.lon = 0.17446625541511007;
    tmp_msg_0.radius = 0.36232236688314334;
    msg.reference.set(tmp_msg_0);
    msg.state = 63U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.5369212249222965);
    msg.setSource(6866U);
    msg.setSourceEntity(223U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(86U);
    msg.control_src = 58890U;
    msg.control_ent = 19U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 103U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5403427638393901;
    tmp_tmp_msg_0_0.speed_units = 12U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7537913636055594;
    tmp_tmp_msg_0_1.z_units = 47U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7481822835145481;
    tmp_msg_0.lon = 0.21692225252655728;
    tmp_msg_0.radius = 0.29407107694504186;
    msg.reference.set(tmp_msg_0);
    msg.state = 185U;
    msg.proximity = 1U;

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
    msg.setTimeStamp(0.6187897447774133);
    msg.setSource(8839U);
    msg.setSourceEntity(134U);
    msg.setDestination(47588U);
    msg.setDestinationEntity(183U);
    msg.control_src = 37377U;
    msg.control_ent = 66U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.17252943083270078;
    tmp_tmp_msg_0_0.speed_units = 160U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3586731730868372;
    tmp_tmp_msg_0_1.z_units = 42U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7408789428500342;
    tmp_msg_0.lon = 0.14666296901942855;
    tmp_msg_0.radius = 0.6556550360442311;
    msg.reference.set(tmp_msg_0);
    msg.state = 164U;
    msg.proximity = 232U;

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
    msg.setTimeStamp(0.07261698518915471);
    msg.setSource(6467U);
    msg.setSourceEntity(69U);
    msg.setDestination(57531U);
    msg.setDestinationEntity(141U);
    msg.ax_cmd = 0.5763335146929622;
    msg.ay_cmd = 0.5795580108771355;
    msg.az_cmd = 0.05832646669467556;
    msg.ax_des = 0.7043778377052481;
    msg.ay_des = 0.09967125320346792;
    msg.az_des = 0.7671037632944224;
    msg.virt_err_x = 0.0012480366660690967;
    msg.virt_err_y = 0.2951052600613616;
    msg.virt_err_z = 0.2847616926197538;
    msg.surf_fdbk_x = 0.5495470190343146;
    msg.surf_fdbk_y = 0.998985622939949;
    msg.surf_fdbk_z = 0.5649624960193951;
    msg.surf_unkn_x = 0.9766143268554047;
    msg.surf_unkn_y = 0.9133545728601421;
    msg.surf_unkn_z = 0.9341822192032923;
    msg.ss_x = 0.38628615987707837;
    msg.ss_y = 0.626271392512416;
    msg.ss_z = 0.17104045696536152;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TBBFENKAJQJGVZSPMMWQNXQENBACZFBCPBYMMWXJGFIRACWCPALOMQTMINIDNOXKQQTMEYKGUSFVDNSYMKDKVAMYLYNCHEARJCUFSUADLAVSEHZIL");
    tmp_msg_0.dist = 0.5646013218921656;
    tmp_msg_0.err = 0.1392183862028875;
    tmp_msg_0.ctrl_imp = 0.3751594221306148;
    tmp_msg_0.rel_dir_x = 0.23368620820344443;
    tmp_msg_0.rel_dir_y = 0.814568693002009;
    tmp_msg_0.rel_dir_z = 0.5616834392806715;
    tmp_msg_0.err_x = 0.4353972049211676;
    tmp_msg_0.err_y = 0.23102866335146222;
    tmp_msg_0.err_z = 0.9379308131359722;
    tmp_msg_0.rf_err_x = 0.04851779840158532;
    tmp_msg_0.rf_err_y = 0.767144622116517;
    tmp_msg_0.rf_err_z = 0.04564154535765508;
    tmp_msg_0.rf_err_vx = 0.6552135151747294;
    tmp_msg_0.rf_err_vy = 0.7121255518770633;
    tmp_msg_0.rf_err_vz = 0.13702433973288652;
    tmp_msg_0.ss_x = 0.2060168154516423;
    tmp_msg_0.ss_y = 0.26949550821629886;
    tmp_msg_0.ss_z = 0.5432212065135761;
    tmp_msg_0.virt_err_x = 0.129866240897052;
    tmp_msg_0.virt_err_y = 0.32716961526092125;
    tmp_msg_0.virt_err_z = 0.4888661226988148;
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
    msg.setTimeStamp(0.8244816569449114);
    msg.setSource(25512U);
    msg.setSourceEntity(114U);
    msg.setDestination(58653U);
    msg.setDestinationEntity(134U);
    msg.ax_cmd = 0.065926779126943;
    msg.ay_cmd = 0.37907115272245073;
    msg.az_cmd = 0.12720792381937662;
    msg.ax_des = 0.35550007671054484;
    msg.ay_des = 0.38229898300483445;
    msg.az_des = 0.9760520302646688;
    msg.virt_err_x = 0.6540745490166109;
    msg.virt_err_y = 0.7638688221031551;
    msg.virt_err_z = 0.5418261864436695;
    msg.surf_fdbk_x = 0.5422562555968162;
    msg.surf_fdbk_y = 0.31621437286546306;
    msg.surf_fdbk_z = 0.029818134273287833;
    msg.surf_unkn_x = 0.24269220139533532;
    msg.surf_unkn_y = 0.44744175475666115;
    msg.surf_unkn_z = 0.7611669396951612;
    msg.ss_x = 0.13752587712224051;
    msg.ss_y = 0.8577405783360009;
    msg.ss_z = 0.4597706253915279;

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
    msg.setTimeStamp(0.5562121453809613);
    msg.setSource(37700U);
    msg.setSourceEntity(95U);
    msg.setDestination(39746U);
    msg.setDestinationEntity(26U);
    msg.ax_cmd = 0.460302865973391;
    msg.ay_cmd = 0.28363347849243814;
    msg.az_cmd = 0.6177213515698389;
    msg.ax_des = 0.11689099688224525;
    msg.ay_des = 0.9446799094993302;
    msg.az_des = 0.8336510899544516;
    msg.virt_err_x = 0.5225153129255685;
    msg.virt_err_y = 0.3891221516317429;
    msg.virt_err_z = 0.555951018847958;
    msg.surf_fdbk_x = 0.2796966371933609;
    msg.surf_fdbk_y = 0.05504314205925154;
    msg.surf_fdbk_z = 0.5124167279064238;
    msg.surf_unkn_x = 0.3764314485768365;
    msg.surf_unkn_y = 0.8945686144955982;
    msg.surf_unkn_z = 0.9999761832163719;
    msg.ss_x = 0.1484319347948121;
    msg.ss_y = 0.2012595109346932;
    msg.ss_z = 0.41214187775080113;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RSAHBUCZBLCIKJZMFEWBUVYKHHFUQZKUCPXGIKXYFNCJAWDDOIIHLSQQPXDSKFQWTLPLRNWTBBRKMTENFSYVAAQETKXTGTZJUNWKZWMFSPOJABANHLLFEBMPQMCGPUIOJXTAEPQDFJOORVLGKZHITDWIJDYMXEUNGQTBYCJJOSUCEUPWNGVQNNHV");
    tmp_msg_0.dist = 0.17978209487551855;
    tmp_msg_0.err = 0.13225576377320314;
    tmp_msg_0.ctrl_imp = 0.1418336516719858;
    tmp_msg_0.rel_dir_x = 0.1152661763763303;
    tmp_msg_0.rel_dir_y = 0.04588187548808975;
    tmp_msg_0.rel_dir_z = 0.37093203260615304;
    tmp_msg_0.err_x = 0.943539518749016;
    tmp_msg_0.err_y = 0.3803094577056758;
    tmp_msg_0.err_z = 0.09019671810143615;
    tmp_msg_0.rf_err_x = 0.5709458101708936;
    tmp_msg_0.rf_err_y = 0.4441609173531469;
    tmp_msg_0.rf_err_z = 0.6562183263454037;
    tmp_msg_0.rf_err_vx = 0.6689445586585392;
    tmp_msg_0.rf_err_vy = 0.2125163789775527;
    tmp_msg_0.rf_err_vz = 0.03742642207653901;
    tmp_msg_0.ss_x = 0.029881673164566025;
    tmp_msg_0.ss_y = 0.1504545293364974;
    tmp_msg_0.ss_z = 0.42878763065318837;
    tmp_msg_0.virt_err_x = 0.7789402791435124;
    tmp_msg_0.virt_err_y = 0.2619056900355091;
    tmp_msg_0.virt_err_z = 0.7207088231512242;
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
    msg.setTimeStamp(0.4537571611622746);
    msg.setSource(11869U);
    msg.setSourceEntity(51U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(85U);
    msg.s_id.assign("FUFYUVUQQMPZYKGHGDRPZXZRWLCNSQHAOKYAIFDJPYSW");
    msg.dist = 0.3277330267862206;
    msg.err = 0.21439390730050867;
    msg.ctrl_imp = 0.06746975089618867;
    msg.rel_dir_x = 0.7398650552945821;
    msg.rel_dir_y = 0.5733020234392343;
    msg.rel_dir_z = 0.8236921915482718;
    msg.err_x = 0.2227900232293628;
    msg.err_y = 0.39530152343265734;
    msg.err_z = 0.9898164295949433;
    msg.rf_err_x = 0.43743594828177057;
    msg.rf_err_y = 0.5421436880191853;
    msg.rf_err_z = 0.8076541462392184;
    msg.rf_err_vx = 0.23626353716367976;
    msg.rf_err_vy = 0.4410647908210942;
    msg.rf_err_vz = 0.531146831392669;
    msg.ss_x = 0.400444717370242;
    msg.ss_y = 0.18239461165382853;
    msg.ss_z = 0.14015477250016128;
    msg.virt_err_x = 0.7414808904988912;
    msg.virt_err_y = 0.023540520406617027;
    msg.virt_err_z = 0.11661483966186759;

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
    msg.setTimeStamp(0.16449540567500565);
    msg.setSource(24347U);
    msg.setSourceEntity(19U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(22U);
    msg.s_id.assign("XEISGYTHXKJNLVFAQWVNWDVKDRXZMWJTHCJXBNAVKFCTUFFNNDLKSXIFQJAEIEUPBFGYPMMQVLUVSVAXQFYQHEZHVGIKMOYTHPYTSTCDOJOHMGCHJILOSWEUJEEOIHLWSFHNXAGDJXBZOXPOUDLJGPURYOYTIORFOWJRNQBC");
    msg.dist = 0.3010085553461188;
    msg.err = 0.49325498543751845;
    msg.ctrl_imp = 0.09675666084662304;
    msg.rel_dir_x = 0.920297375378229;
    msg.rel_dir_y = 0.07622464269026863;
    msg.rel_dir_z = 0.005841405457671089;
    msg.err_x = 0.5585491207051575;
    msg.err_y = 0.5049900093694485;
    msg.err_z = 0.8936587323351906;
    msg.rf_err_x = 0.18015663894324085;
    msg.rf_err_y = 0.05032468191821726;
    msg.rf_err_z = 0.40830341424123184;
    msg.rf_err_vx = 0.16696295749666168;
    msg.rf_err_vy = 0.995155305197208;
    msg.rf_err_vz = 0.6027435183819626;
    msg.ss_x = 0.498559097340854;
    msg.ss_y = 0.8646407684727143;
    msg.ss_z = 0.4394671605051603;
    msg.virt_err_x = 0.4712231832857203;
    msg.virt_err_y = 0.5584026688644058;
    msg.virt_err_z = 0.45346294508969587;

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
    msg.setTimeStamp(0.4073721055562257);
    msg.setSource(1816U);
    msg.setSourceEntity(72U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(75U);
    msg.s_id.assign("ZZUXEIGXSLACXCILQQLDRPYLKYMQOFGVVWKXDDGEKSURHAJSAMIMHXGJCCRQRJUFVRAFDEMEMSNCZCFWHDZQPYCHLDOHTNKOKSLBPKBSNNGMINIRTZGHTCUVBBPZQAZQFRIYUVHOFGNRPNWOVELZSMIWSCBWYXOPVOIPDPKD");
    msg.dist = 0.797285018825896;
    msg.err = 0.9686845598251919;
    msg.ctrl_imp = 0.552632003277783;
    msg.rel_dir_x = 0.18320486520890356;
    msg.rel_dir_y = 0.44090380681206853;
    msg.rel_dir_z = 0.9118391153531037;
    msg.err_x = 0.639660118467852;
    msg.err_y = 0.7845633546632759;
    msg.err_z = 0.6089958474249662;
    msg.rf_err_x = 0.656263872813598;
    msg.rf_err_y = 0.9703610640677938;
    msg.rf_err_z = 0.8439071414737113;
    msg.rf_err_vx = 0.8983429877872099;
    msg.rf_err_vy = 0.4247835423559311;
    msg.rf_err_vz = 0.31355768578247334;
    msg.ss_x = 0.18036703291608447;
    msg.ss_y = 0.30129037528392055;
    msg.ss_z = 0.1677900379515086;
    msg.virt_err_x = 0.29372710857013073;
    msg.virt_err_y = 0.7461295115578196;
    msg.virt_err_z = 0.09967749865057263;

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
    msg.setTimeStamp(0.6976770327049747);
    msg.setSource(15745U);
    msg.setSourceEntity(227U);
    msg.setDestination(2489U);
    msg.setDestinationEntity(39U);
    msg.plan_ref = 208601547U;
    msg.id.assign("LLDQNJFVDHUPXMWEZJRXNEDYKFOBSZQIQMOROAAOXHCTFEPPNXSBCTHHYFTEOR");
    msg.memento.assign("SJMZZXIWJQBKIOKMNPQRVMTBHCUTDNFDDPEOIHNASZHFTWXKYXEGETCOPRJYAHFBXLNCMRDXQSHELXNQMKLOSOEUFJAUAGEHBISYMWIVDZQDCMBPUOMVJUSQOBVWBFQSYHYRLCTWPJCPTRKCEHABYYIDBQROJDDDLGQVWTRIZRVPKYEUWGGWUIZCZ");
    msg.timeout = 18809U;
    msg.rpm = 0.03217194898201681;
    msg.direction = 191U;
    msg.custom.assign("JVGPMAEJJNMQGOAIFUXBTPDEOYICDJMFCOPRUOBUIXEZJRAHLBCSBGISDJXLNSRGCWZDMKXDSEDIP");

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
    msg.setTimeStamp(0.8221900982692499);
    msg.setSource(57732U);
    msg.setSourceEntity(128U);
    msg.setDestination(31893U);
    msg.setDestinationEntity(75U);
    msg.plan_ref = 2191544231U;
    msg.id.assign("IYITYSOKQYXJWFQHABQZLNFSQKWEEBILODOMSBQKHQNLTKSCRTAASHWUXIXJCATTHAGINHTXMMIYGEQUASIVUVORJVKRNNTRCCODHNGPGYHHHTUPUCTMRBFLVSEEWGZOPDSJWAFMDFPNOJJQAYRAKBSWLGFEPPBYGP");
    msg.memento.assign("XAIPAVCXDRIGRVEBNJNJRAAJVZBK");
    msg.timeout = 24836U;
    msg.rpm = 0.843475264968924;
    msg.direction = 22U;
    msg.custom.assign("AVCMZXRMPOASKJUBGKWXFPCJDHHIHTOGOXVTBAQPHWEKJKQEYLPVCFXOPSKOPYTTFNRTPFGWQFIEOJLRUBLQHLFHKWEIWOUMEFYAYLLMGZLISRANJAUPHSIIQUWIBNBYZTHTSKSGXNLMOMCWHRAIANVSNYXPMDBVGCLDKFDDBNSJOJRZRVZBLDCJUEEYIMFWBMECXGVQDZUJEVMXWQWNTCSJHQYGBTQGUAPFXDNAYZVNKKYR");

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
    msg.setTimeStamp(0.8566331667909051);
    msg.setSource(56425U);
    msg.setSourceEntity(62U);
    msg.setDestination(57667U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 2115654872U;
    msg.id.assign("OOZWJQCCICHGBFEUYADBIVUSVZVILUNEYMRBJUZDJJNVZNHCQGKEXHUVPYISIXTOOSWUFLPMFFDARUAJBORSRJKFJLLTGOQZQTSVBNWHFUZWYQA");
    msg.memento.assign("BAPTSBBAYUOFKEVUQNPCCMOYXMWOHDDHMVWHAZXLMLJZIYBGEHREXZZJXJILBLIBKNCQVIGAARQCUNYRUMPC");
    msg.timeout = 59956U;
    msg.rpm = 0.5802498438655435;
    msg.direction = 101U;
    msg.custom.assign("LOCBSVUAFWBPDJIPHGKZNBVZWJVXDFIWMMYCFHYAKEQSXCBMS");

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
    msg.setTimeStamp(0.0314964758592603);
    msg.setSource(49105U);
    msg.setSourceEntity(181U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(101U);
    msg.op_mode = 81U;
    msg.error_count = 86U;
    msg.error_ents.assign("EXOIUULUGKFQXQJCYWQZWYCWNCEODKALJWWLBEMOISSWUVWTDBHDFTADPHXGOTIBVVORBVEXLZWQBRLDMGQCMFBTLPAUOWVDRRTJQTJMPRZQMHZUCBLCGIZHGHSXAKPJETYKMPTHJQFEUAANTRRYPLDKJUGMBJGTKARSZFSR");
    msg.maneuver_type = 9659U;
    msg.maneuver_stime = 0.35002800741945306;
    msg.maneuver_eta = 41065U;
    msg.control_loops = 2271412933U;
    msg.flags = 129U;
    msg.last_error.assign("JPZOFCYIPLSGNQGIWCXAASQKJFIBFRLGJYFGMJCMPZYATDPJXMEFDMJDWMRGKBSEETTAGGYXANAUOXUBYFRCMDCQIOWWDBGVEHSHBSRINKQUVZKVYOWFLUHXACLVYWPVDNPKRULJRQQKYDSJHMKVMQXZIQDUFEUZAEIERDCOLZCWYOQ");
    msg.last_error_time = 0.3827358280360632;

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
    msg.setTimeStamp(0.7541852791510786);
    msg.setSource(27455U);
    msg.setSourceEntity(216U);
    msg.setDestination(44962U);
    msg.setDestinationEntity(28U);
    msg.op_mode = 10U;
    msg.error_count = 43U;
    msg.error_ents.assign("RLOMALZEWZNFPYQPICPTVEAHKGUGSRJWFRQDYTNANKCTFWFJHYCNZVYPOMEFOJBPXRNDVGKNGZARVFXCRHYQVMLSSIKLVSEYDMLRZVHGLAXWKVTMFJZBCAMZCEWNQEWIIOSUTUSOUDSCFDKYXHPXHEQOMPBQIQKSFCQYXKBTIBDQWBWNMHILEHYHQUOSDZSBVPJJTJWGJAGYAVEGEIWRXANIDXKCTNUORUBDHPURMXZLJCPTZUUAMBT");
    msg.maneuver_type = 44616U;
    msg.maneuver_stime = 0.46017547687996496;
    msg.maneuver_eta = 26838U;
    msg.control_loops = 2761409689U;
    msg.flags = 39U;
    msg.last_error.assign("MDXHYZFUJOXZVKERRNUEPQCQQGVLGLNLNVCCMLKFQXQOZQTZIGK");
    msg.last_error_time = 0.139931339065543;

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
    msg.setTimeStamp(0.9008049389314853);
    msg.setSource(47292U);
    msg.setSourceEntity(100U);
    msg.setDestination(65057U);
    msg.setDestinationEntity(235U);
    msg.op_mode = 112U;
    msg.error_count = 137U;
    msg.error_ents.assign("EDQYVZTVZLPTOQOBDHTCHCONKDKRYVRKGSFRFJSQOFMLAYISZFSIDGEHDXRZCLWWLVDZWUWJKFIFEBPOCCWGHWXEGIHQAQEGGNSHIYLUVHXKJMKAYTEOZQRNKSBTACYWYZZNTMMRXJRVGQBBIUMCASJVAPGOZRPFDXEBPJXTUFHIVMIEGIRJPKNYLUACIBVESXHXYHXGXZCRLOQNNJTWMWLFCSPULJQYDATUTBBJKSUBOAANWKFEONQDMLMP");
    msg.maneuver_type = 53606U;
    msg.maneuver_stime = 0.7919003987646652;
    msg.maneuver_eta = 42761U;
    msg.control_loops = 727699576U;
    msg.flags = 142U;
    msg.last_error.assign("GSTCKYTZAMHVNR");
    msg.last_error_time = 0.46022092485761235;

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
    msg.setTimeStamp(0.275809425110464);
    msg.setSource(58124U);
    msg.setSourceEntity(58U);
    msg.setDestination(2139U);
    msg.setDestinationEntity(56U);
    msg.type = 32U;
    msg.request_id = 45224U;
    msg.command = 181U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.plan_ref = 699986764U;
    tmp_msg_0.id.assign("OHJAEQDXVAIYIBGBUWYPIHSSCNFXYCYLTTLKKDWUNSVDDZMVRLHFQRRHJSLHWQGEPCOSBVFRXOXXZEZWDKQUPVLXFAOTMMIUMZUDSHTIGLRKUMKPBTYEFUWZWAVRMWQFTRXBURMIVKYJVBTHNVDOAKHVKTJZPDICYRFJLQULXGZDBEPBFKAWACYPJHIEPONSYGOCXNWZSEMANOTABXZEFJENLUJCCGWTQGINMOQO");
    tmp_msg_0.memento.assign("ZCGYKRUZCMQJGZKHEDJXDRRGRKFLSYUTITPBHDATSTTFJHEQJZRLGVFAMRQXBBOPSIR");
    tmp_msg_0.timeout = 63258U;
    tmp_msg_0.lat = 0.8500655555124693;
    tmp_msg_0.lon = 0.8356197939188166;
    tmp_msg_0.z = 0.6920213652288563;
    tmp_msg_0.z_units = 191U;
    tmp_msg_0.speed = 0.22966732962216985;
    tmp_msg_0.speed_units = 5U;
    tmp_msg_0.duration = 56438U;
    tmp_msg_0.radius = 0.19218140938895867;
    tmp_msg_0.flags = 151U;
    tmp_msg_0.custom.assign("KPSYYCILMURAUKXCZDJZXFBMCRVAKPCOEXWZBPVCVWRTYOWMVWGMKGKUTSVYVQYIDFPKAFRWZCIKRNEADSZAPNBZPOCIAOTLPEYGSTHJIRTNXNBNDDYODYOWMXFSTGAIXXRHUIVQJKSURIQQWLFTTBJGLVHZOELDKBFTNWVQBJEIUPSQIGVWKMGJLGNEQPMHOOHZDBZRUQLZXLSACECYMJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21223U;
    msg.info.assign("VHOEAQEQTZNUIDPGHPRYWGJGBFDAYVGCEENHEDUKFBDJDPZVWNPVBXQFDRZUUNSSCLGFDCTRQNSJEPLJFYKWYROBMXZPCNRIRTBFOTVUKTZQXCPMVIORLHALEAWSMSCEFSZMVDIABPLRPIQHXGOIJHAOYWOYXGHSKYCJYOCRXTMNAICHWJMLZAOFZQZJ");

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
    msg.setTimeStamp(0.14315350555546602);
    msg.setSource(8684U);
    msg.setSourceEntity(74U);
    msg.setDestination(47218U);
    msg.setDestinationEntity(4U);
    msg.type = 212U;
    msg.request_id = 4381U;
    msg.command = 16U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.plan_ref = 3122209470U;
    tmp_msg_0.id.assign("UKTTMCHRIXYQFVAQVWGPVEVJPFWXSMOWKJBAZAIFBZMCBQDVMZGEIFVMTXFHWNHAKCVIJQKPUZBRYJEIUNSRCXURAONAHDBEKARSAFYDFTZSEJREOHGQBVLLGDUBJSQUZRXSOKKXQOCRNIQSSTLYMWGITODZHLHXEZFYJDZGIHPCHKJNLYLTVLINQOPLDMWNXBOWEDDOWFPZXNALIGTLUGYNEPHTYWMXRWESFJUYD");
    tmp_msg_0.memento.assign("EJBVPUOIXNHIRSAMYLBDELBRLFGMKUAGTWYBCDKFFAOXWFPACYZSYRXKLJWNAZJUZSEPFCHBXIZCINDRJEDLHCNBNEBGBQFZQGRKQFVVWROPJJECZKRDAHPYWPNIBKSUZVTXMWVHMZOARIBNKMLZDXACNWUEPUURUMJJGTQPLDIESSHOXVQOSIAFWOYGMYTWOEOXGPOFMDLHLSQKTYTJTCWGFTTJLVQHCNHVNZGUQPXAT");
    tmp_msg_0.timeout = 40622U;
    tmp_msg_0.lat = 0.40103229862967393;
    tmp_msg_0.lon = 0.26070132815551206;
    tmp_msg_0.z = 0.3502464594291832;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.14554688093149726;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.roll = 0.9851282659627136;
    tmp_msg_0.pitch = 0.4319390853121694;
    tmp_msg_0.yaw = 0.005666240078599394;
    tmp_msg_0.custom.assign("IZFRAXEYBGCYRXHUMQCRWSMEIJGWPKLAHXJEIVTDZPTSCANYLRKJRVZF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20492U;
    msg.info.assign("QSGYFUTVFSLPUJQNGYAUHODYXLBACSETRWCQBHNFOMZCSFORRFTWLAJRAFCQWVEDXMGTEVZHBDEJWKQPIDXEPHKKZRYMRIJAWKLZOTZJYJLWWGMGQEXDEZQFCCAKXOGTUKHIXLTBGVXVDDWPFICYNPPKYKUBUMJESAFHIIBPIPLJRRNAQCHSRYHBEJZJLOBIYYTZAGZGKWLSNNHAFDKNQLCXNXUIUVSSCEPBUZMOUVT");

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
    msg.setTimeStamp(0.5718339558567715);
    msg.setSource(32225U);
    msg.setSourceEntity(227U);
    msg.setDestination(16518U);
    msg.setDestinationEntity(96U);
    msg.type = 83U;
    msg.request_id = 1430U;
    msg.command = 88U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 2976033201U;
    tmp_msg_0.id.assign("NPSZQCPYTGTAWOELFQUROHILCYASWGZNEHVEMEZPOFPNXPPIXZJGLJXBHWTXHVWJOLRIQOFOSSTDADMMSULKNAWBLBQZMQUYUSLSDMRAODQBGIABZOXHFZRANYRCASOYRVBWMJOHRNWHSUTECEIDEIJUKPLJDQFSJHKDBRWXYYCFGQVCKIGNFMHIDXFRDUVYLJWMZVNZXEQVNEKUCPGVGGCCT");
    tmp_msg_0.memento.assign("YGSQHJPFXJBIFILLGQMHYNUTAOAVQKMTXAXZCPGXKTYWDMLZCYEXOFREEDHNNOUPDGTWXCDHWSPFCCORAPSI");
    tmp_msg_0.timeout = 24894U;
    tmp_msg_0.name.assign("HLFIBPKPNOANCY");
    tmp_msg_0.custom.assign("QAMAGJPEJBWJYMDXYTROWMFNUQSYFVSKIRKAMEFZJOCNKYAOGGKSAHLPWMHKSPTFIFTKUCZZAZNUIRJOFJQPYZSAATDXUYXFSCLTELQLQPXENGBP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9853U;
    msg.info.assign("MOZPXBFHHVTAXYTKIGSBUDSJIPFWYZQEDPREVCNIMLOVCWCGZ");

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
    msg.setTimeStamp(0.636951425984459);
    msg.setSource(24U);
    msg.setSourceEntity(55U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(7U);
    msg.command = 173U;
    msg.entities.assign("LBABTVVBMLVQHXNEANCWLUSCDVEDNZMWLDHUVYJLANKAKNDPLUDFGTNJHSLYLGHHBQREIFVZRTTWZYJTDFWWCTCSWMYLGGFJQKJPIEPVCYGQDPTCOIMJQYFADWKCJIQZXNSTMEEEKFOMPYZKFULEVXZROOKPZWICCMVFXEDEUHSHTXAXNUBIQCSYSGYWF");

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
    msg.setTimeStamp(0.817350174345499);
    msg.setSource(61404U);
    msg.setSourceEntity(152U);
    msg.setDestination(37509U);
    msg.setDestinationEntity(18U);
    msg.command = 141U;
    msg.entities.assign("LDOCXXJRDSVWGNTBZGQBAKLESSNECHFYHWXYSRXJ");

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
    msg.setTimeStamp(0.37151065009792983);
    msg.setSource(33780U);
    msg.setSourceEntity(148U);
    msg.setDestination(30782U);
    msg.setDestinationEntity(5U);
    msg.command = 207U;
    msg.entities.assign("CPXIZOHSQVPKBNNVWXODVGQMZUFOMOMYKUGFLXBWKZYUIWKRMZGDDNFYKKBDYTBVDLEJIOVHVAVWAYMUITUBJXWTRXJWILZXHKLALFJGILNBLQRPNCOPPVECTTBOZQCORSVVPPGGGSBPAEYINBFIRWCQDUCFSXARCQUH");

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
    msg.setTimeStamp(0.31348245786664053);
    msg.setSource(14885U);
    msg.setSourceEntity(68U);
    msg.setDestination(7171U);
    msg.setDestinationEntity(100U);
    msg.mcount = 121U;
    msg.mnames.assign("QXEASGNOLVUCIINMQFAYESGKLSJEYXONPOGRASMUCDPICCBZOGDJXNJMRYWFTZMYXNEFWWJVXABYZHYLZHKXSFHEPQIIPVRRWLUFKGZKZWAOTSSDNPQATHCRNJKHFKEWAHTEVVIVPUJDFLWIZLMVHCBSADYZGGQKLBXJYPCNQNODUTQEJUNHRCGXOVCWTBQSPBXTUJKBAEZBRMLOOUTMCKIIRTPGD");
    msg.ecount = 35U;
    msg.enames.assign("JZEWYDCBMPUZKBFQDYNVVWICYSWXRATMPAAQYBSIFPTIDZHTWCHTLKBGEXSJQTUOAGGENFYEOWNSRJAGAVAICBHJAZDGKMXDLRNOVFYOVIMXSGLCPKZX");
    msg.ccount = 182U;
    msg.cnames.assign("HGQUXFAILDBXYPIOLVFAQEMLNDQXTNJXSKTEYZERIJUPOKSGXXMCWGKYGTMUWSDDDMNOGRNMLWZDLQVRASFMVKAXEQWAUCJDIJJXK");
    msg.last_error.assign("YLEFANOYDZBBXLZJPOZIHTTDZSQDNHYUAOIZLRRGFJVHYARJNPAGHJLPPRXKMBBOOPREIPPOQGCOGHRKEIMDKKZBVAHULAEETWMVQUWCHXQXIRHSCSKZEIAMEEZLSXJJTTIPVLYEXGFDJQWFUXBGUVFFQFCKYYTYPWMJACLPGUL");
    msg.last_error_time = 0.048939629831221354;

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
    msg.setTimeStamp(0.9250329721291025);
    msg.setSource(34127U);
    msg.setSourceEntity(173U);
    msg.setDestination(5834U);
    msg.setDestinationEntity(82U);
    msg.mcount = 241U;
    msg.mnames.assign("WEVUFYBIATINJUSPCTTNTQNDGZZWGYZWFGHECPZUCPOMAUVSERKBHDMODSQOFXXXSYMMNYKJOPEGHLPBAKXBIUZIDOJOCOHRWLLAMIKPLUKBHUTIROZQSZECGCRVEKPXMQTEHFRIMCXLRNFJWJGVNIUZQDGTLYQOVMWATKRZDXTBJNKLAVDASUQJAFQBNZHJYKRLVJWKXNPIVWFCWPYETDPHRJ");
    msg.ecount = 37U;
    msg.enames.assign("AMBEIVDITNJXWBCDNTJLGVYJVDQHULBLHKDGSOQJBRZHXPAZUYMNGCDBZFLPOVHRBVOCKNGSOXGXPXCXMQYWEXKWLJJGFJJ");
    msg.ccount = 83U;
    msg.cnames.assign("XYCMYGISCGRVURXENDWJGJTGDBQYIXNUSKLKMKZHTWUDHFRBACLQLGSCCRGGVNADIYTVBFYDBZXEVRMQISUFVOFSOAZOLZXMUUHYCPEWHASSLJPNMXYHEVLDWYDKXPZBSOTCQVVBVZZHKWJWIQTKTUSSKAOWIBDQKXHCIZLWEURNPFLJAZR");
    msg.last_error.assign("OGCEJMQUTANYIILMQRWNIZMEYSQOEJOWEMIPQEWYSJCKWYUVLYHFLIPXCZGFYVSXDSUHQAKHVUOUXWUABXKAYCOWPKYPNRHDQGTOBFYEZNULCHKNVTBYHDFOVNBXXFSRQAJXDTNQAFSFHHMCGCLPTRQNNPRKHXGQWPHMJZGWTOBGROAXMUPWFSIESABZSTEAOWDBCLKLIJLJBPDDIIJTVLFBA");
    msg.last_error_time = 0.24137216788844829;

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
    msg.setTimeStamp(0.13119681939759176);
    msg.setSource(4944U);
    msg.setSourceEntity(29U);
    msg.setDestination(59112U);
    msg.setDestinationEntity(51U);
    msg.mcount = 242U;
    msg.mnames.assign("NNSRCRBHRBUXOZXYNLEXUOORTDQPVWAKQUSDGOGAXBWXNPNSVCYLSJUQMFXRYICFPEZPZOSDPTUMYZOQJJFFFLGAHWDFTVBLHIPXKTCRBSOIAOGJIQLJXCKXMDWGDGINCJVYCGRVCQZJDVBFTXWRSRHBIELZJKTBFQAPQIDIVMPLAQTCEMZZNKETBNNZDW");
    msg.ecount = 212U;
    msg.enames.assign("CJCLMTKYYBJXYOI");
    msg.ccount = 93U;
    msg.cnames.assign("CWQNSDVPAHKAERAGGZKGEFEKACENLOPFNLPLSUIIJBVSPTTIEEGPMWMVBOXITTJYUVTBBHAFMZANCYHDMGBPFJPDJRS");
    msg.last_error.assign("IEUTRAHYPOWPUWKXOGLTQSJYKNJLGBWVYJPAKRYXIJUIUVIFMOQTYNDRAPSPAYWEAECCBDEZWFGELPNOKCOXTLQHDWXNVPADRTYDXKSFLLBUCYFZFBULGWWVZMHCCECNXDJKZSNKUFVUVAQRSGPUIXNHXZONQITQNSCJHQFVOJKEOEBBRAZLNKAFSBFZJOPODIMZLJMTZSGRCBDPWDDRVUHJHYMXRISXIQTQBWSIMEQMCHVTAMYLHMEG");
    msg.last_error_time = 0.46869797971938254;

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
    msg.setTimeStamp(0.6423524104158964);
    msg.setSource(54522U);
    msg.setSourceEntity(249U);
    msg.setDestination(20072U);
    msg.setDestinationEntity(128U);
    msg.mask = 88U;
    msg.max_depth = 0.3773351269108186;
    msg.min_altitude = 0.33052262926832443;
    msg.max_altitude = 0.6824743603442782;
    msg.min_speed = 0.06010684383812026;
    msg.max_speed = 0.216484615209382;
    msg.max_vrate = 0.7932537109875253;
    msg.lat = 0.47378380408010634;
    msg.lon = 0.3283662061116641;
    msg.orientation = 0.2805026564497103;
    msg.width = 0.03827869103359727;
    msg.length = 0.10416894673761523;

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
    msg.setTimeStamp(0.17464069218882838);
    msg.setSource(22035U);
    msg.setSourceEntity(22U);
    msg.setDestination(6517U);
    msg.setDestinationEntity(14U);
    msg.mask = 136U;
    msg.max_depth = 0.6608634714469136;
    msg.min_altitude = 0.056339527630251074;
    msg.max_altitude = 0.17468949506789744;
    msg.min_speed = 0.14600610765797417;
    msg.max_speed = 0.09588931138386214;
    msg.max_vrate = 0.6529245062852634;
    msg.lat = 0.2943539994541574;
    msg.lon = 0.16066256556242242;
    msg.orientation = 0.6891081171100066;
    msg.width = 0.7982160526849333;
    msg.length = 0.06668657396802957;

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
    msg.setTimeStamp(0.5542296483786374);
    msg.setSource(14396U);
    msg.setSourceEntity(34U);
    msg.setDestination(7630U);
    msg.setDestinationEntity(87U);
    msg.mask = 97U;
    msg.max_depth = 0.9159812705537106;
    msg.min_altitude = 0.4450802814339224;
    msg.max_altitude = 0.39180760578296436;
    msg.min_speed = 0.37672553719962454;
    msg.max_speed = 0.0939831189053828;
    msg.max_vrate = 0.40136710869966674;
    msg.lat = 0.23272858846592026;
    msg.lon = 0.45780122712603466;
    msg.orientation = 0.8692920238945631;
    msg.width = 0.9055102551853593;
    msg.length = 0.04123746236578918;

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
    msg.setTimeStamp(0.15735970277498268);
    msg.setSource(6531U);
    msg.setSourceEntity(72U);
    msg.setDestination(5606U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.7736946315052609);
    msg.setSource(63037U);
    msg.setSourceEntity(142U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.07131430330644062);
    msg.setSource(50466U);
    msg.setSourceEntity(140U);
    msg.setDestination(15073U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7872564557480929);
    msg.setSource(45708U);
    msg.setSourceEntity(51U);
    msg.setDestination(40492U);
    msg.setDestinationEntity(214U);
    msg.duration = 14988U;

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
    msg.setTimeStamp(0.48280527477956703);
    msg.setSource(28223U);
    msg.setSourceEntity(190U);
    msg.setDestination(4891U);
    msg.setDestinationEntity(143U);
    msg.duration = 10961U;

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
    msg.setTimeStamp(0.8328025113285175);
    msg.setSource(5380U);
    msg.setSourceEntity(203U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(214U);
    msg.duration = 37672U;

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
    msg.setTimeStamp(0.8397755667198256);
    msg.setSource(6561U);
    msg.setSourceEntity(191U);
    msg.setDestination(50484U);
    msg.setDestinationEntity(239U);
    msg.enable = 144U;
    msg.mask = 654302271U;
    msg.scope_ref = 536531302U;

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
    msg.setTimeStamp(0.47912706207476663);
    msg.setSource(36746U);
    msg.setSourceEntity(4U);
    msg.setDestination(62437U);
    msg.setDestinationEntity(6U);
    msg.enable = 27U;
    msg.mask = 2230347114U;
    msg.scope_ref = 2420723988U;

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
    msg.setTimeStamp(0.5210911773238199);
    msg.setSource(32097U);
    msg.setSourceEntity(201U);
    msg.setDestination(33916U);
    msg.setDestinationEntity(18U);
    msg.enable = 192U;
    msg.mask = 2237978645U;
    msg.scope_ref = 391407413U;

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
    msg.setTimeStamp(0.7573935482758639);
    msg.setSource(12173U);
    msg.setSourceEntity(109U);
    msg.setDestination(29910U);
    msg.setDestinationEntity(206U);
    msg.medium = 171U;

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
    msg.setTimeStamp(0.49002240030494393);
    msg.setSource(39092U);
    msg.setSourceEntity(93U);
    msg.setDestination(43106U);
    msg.setDestinationEntity(188U);
    msg.medium = 27U;

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
    msg.setTimeStamp(0.545787514742031);
    msg.setSource(60622U);
    msg.setSourceEntity(29U);
    msg.setDestination(17914U);
    msg.setDestinationEntity(193U);
    msg.medium = 3U;

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
    msg.setTimeStamp(0.6322553110562446);
    msg.setSource(44445U);
    msg.setSourceEntity(45U);
    msg.setDestination(3107U);
    msg.setDestinationEntity(25U);
    msg.value = 0.4830850371189678;
    msg.type = 183U;

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
    msg.setTimeStamp(0.43169134047769253);
    msg.setSource(32739U);
    msg.setSourceEntity(64U);
    msg.setDestination(45594U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7306902426119635;
    msg.type = 133U;

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
    msg.setTimeStamp(0.8968418566705545);
    msg.setSource(27406U);
    msg.setSourceEntity(113U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6573455831826023;
    msg.type = 64U;

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
    msg.setTimeStamp(0.06766526105099024);
    msg.setSource(35468U);
    msg.setSourceEntity(69U);
    msg.setDestination(9876U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.9246867737509344;
    msg.converg = 0.1617716268764987;
    msg.turbulence = 0.548896481965328;
    msg.possimmon = 124U;
    msg.commmon = 224U;
    msg.convergmon = 102U;

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
    msg.setTimeStamp(0.0292842516455728);
    msg.setSource(10093U);
    msg.setSourceEntity(29U);
    msg.setDestination(55549U);
    msg.setDestinationEntity(218U);
    msg.possimerr = 0.4799818269848045;
    msg.converg = 0.46179216593081374;
    msg.turbulence = 0.9432378745195796;
    msg.possimmon = 21U;
    msg.commmon = 50U;
    msg.convergmon = 208U;

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
    msg.setTimeStamp(0.6343938140382467);
    msg.setSource(61467U);
    msg.setSourceEntity(144U);
    msg.setDestination(8506U);
    msg.setDestinationEntity(110U);
    msg.possimerr = 0.4180100804739735;
    msg.converg = 0.46435637752454806;
    msg.turbulence = 0.19585884346187787;
    msg.possimmon = 251U;
    msg.commmon = 227U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.803737884793344);
    msg.setSource(60220U);
    msg.setSourceEntity(193U);
    msg.setDestination(23431U);
    msg.setDestinationEntity(120U);
    msg.autonomy = 177U;
    msg.mode.assign("GVNVBGCAKSURAAGMBTVXFFIQYPIEIHMXJJCOMJVYZOXIVHQUWNURSGYNTLPKZWXLQDGDSCKLHNTLZZYXOCOWEIMRYUDHTTHNLPUDPLSCXGPJKKSRZMTBPBOAEQGEHMBDJYLAWVFFWBBKCVIRZXYWJWLXMWLRPEKGPJCOFUDFIEAJFYOKPQZCMPNLFOHNYDJQQSWQBMHKENSCTZEC");

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
    msg.setTimeStamp(0.5258318580352741);
    msg.setSource(44088U);
    msg.setSourceEntity(157U);
    msg.setDestination(55430U);
    msg.setDestinationEntity(171U);
    msg.autonomy = 158U;
    msg.mode.assign("RQMWIBPPXVKIPCPIZQDBLNGJOYLZQMYXVLFDYHJTAQVVIYAOFZGJCMFELCDGCGXTGCRJJSAMUWSLDNWFTGENTERCVDMMWUGRULEEAIEIEKXBNFHJEMPTSUHYOHSUOHCSPKWBSDITCKBGDDAANYTEIPRPVRZCGZPYQYBSAFXJVQWPDSVZNJAKRIODZEHQBNXFBXVNVSWXCXOMKRMRLTLNOKJKQQHMAZFYFULYUQFZBUKTJ");

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
    msg.setTimeStamp(0.8092529847924421);
    msg.setSource(53049U);
    msg.setSourceEntity(221U);
    msg.setDestination(62668U);
    msg.setDestinationEntity(230U);
    msg.autonomy = 133U;
    msg.mode.assign("NMWZGWJKJKRADPLMOHOVUHWUIIGNCNRXLPPEQHBVAFYUJYXGUOPCHARRBLWVFPNDELCCCSWBKEIDUTOSEXNGQQQTHEKPAQBZQVDXSGZXSUXKDMVHMITZRSN");

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
    msg.setTimeStamp(0.7259023538440418);
    msg.setSource(1858U);
    msg.setSourceEntity(142U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.1472913896342114);
    msg.setSource(36174U);
    msg.setSourceEntity(245U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.5110644359319074);
    msg.setSource(40838U);
    msg.setSourceEntity(144U);
    msg.setDestination(50856U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.06006580283497209);
    msg.setSource(35088U);
    msg.setSourceEntity(71U);
    msg.setDestination(33450U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("IBRCTEQOJOWUEHHKLVTSWNBKHZJAIALGCZZHZKMTFKQEGBKCCOANQWXOXDYSDQSFAYKIEMFKHTUALRVMYTWZEQNDLNQYFPCZYCULVDPFUOFYMUKIFXYLNJXDHLBECOIGBDSRGHZLRNPTGVPMRRWSSPTZXMAAZBHIJGHWARSVI");
    msg.description.assign("HNZGUITYVIOIENEPAXADZETORZOTMMFGKCKFKTOCUEOLRVRSHTJAMUUXAJHCPRRSIUAPJENBQCGKQYFYSPXMIQTRZDAJYPBRTQAEMNEEIZLBXTYQUXPJHCWAGXJFJNQTMKFGJXZHSFOVSIKKZKPOPXESVFUBLVSWSJVWJVSTXMLHPQWOBXN");
    msg.vnamespace.assign("YDXXHNMBOWAHLTVZZGAHBZKGXSBIPMCKDGZFBCIRZJHSWVDGDOHUAGLQHMMPCVIMGSGNXADLVTXYJWUXTTELESUQKYOISZMYCPTUOKZBJCVFFGARYIKHLDNOVEJBSZPRJBNTIEMPFILMFL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MBEGIDNDWRZLKTEBYHKTQWYSUZGOJNUCORATJRNATCLXODBGLVSAGXKARSCNPXAKKTWFDIPINPMETUWOOVNHHJHABGKWMJRZDPJWQUVYGFTLLQEBABGYAMXWOEZUIUIGMQYKHMLELHFQQUHSVDHXPVQVYNXMJIDRGEVC");
    tmp_msg_0.value.assign("URNVINCGTMVUJKGUBZUOASQNINYKLQKLBYYCIEGRWDQFBDAZEZJOLLLSYGWRMEIIDZEALMHDNCKUCTGOBDXPUXLZTVSIPTHBRFSNAEOQWHXZVRHWKTEK");
    tmp_msg_0.type = 152U;
    tmp_msg_0.access = 248U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SHBEWMWIVBYJABKFAORROHIXEWDQOM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SHHMPQHYFRPVYDKIZXLYIOGKWSMNPVHFRVPBNQVYRILJGOHURYYJASAR");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 612110714U;
    tmp_tmp_msg_1_0.id.assign("DTRYLAVFCCHHUCJSISGOTVBXCBBTDPLCUCTRWLKNXOEWQRAVLQZDUGHDWENI");
    tmp_tmp_msg_1_0.memento.assign("WJEMABOXLZWCOFGFUFQEPCIYQSEZJTTEXCIHHKIZMDPWPWHEQNANKKBEKWEVRYXAYNLNAMXDDWBBMKNCUGRXRHCFDDNCZEVULS");
    tmp_tmp_msg_1_0.timeout = 27504U;
    tmp_tmp_msg_1_0.lat = 0.3589069043886379;
    tmp_tmp_msg_1_0.lon = 0.7562810382972425;
    tmp_tmp_msg_1_0.z = 0.390966141611652;
    tmp_tmp_msg_1_0.z_units = 217U;
    tmp_tmp_msg_1_0.speed = 0.32311832424303744;
    tmp_tmp_msg_1_0.speed_units = 89U;
    tmp_tmp_msg_1_0.duration = 9061U;
    tmp_tmp_msg_1_0.radius = 0.6008456023367237;
    tmp_tmp_msg_1_0.flags = 224U;
    tmp_tmp_msg_1_0.custom.assign("SKFMVAYYQUBKZDGKXLGXGQUIHVEUGRIRTUMECMCRNZDRLHJMPYWQYJFNNBAPWXJTEGSPKTKXLLGIBBUJQHSDRGPNORYFKXDJHOFJZUTRXBEVQVIQCUUSCHHGDYXNMTZXWMY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SessionSubscription tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sessid = 624556567U;
    tmp_tmp_msg_1_1.messages.assign("NSNOXWNTKXDYTGXMRIZJXAJZFTINEBCLYBDEAZUKIDTVDQKJMVVQANLIEOILHBEVBCAMXQAVQSQGYRCIRYFTVOZNGFAHMSNKCEKHPSFQPMFXJTWKEHLWHO");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Heartbeat tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::ControlLoops tmp_msg_3;
    tmp_msg_3.enable = 131U;
    tmp_msg_3.mask = 2450576405U;
    tmp_msg_3.scope_ref = 3126695846U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.903546280632903);
    msg.setSource(63373U);
    msg.setSourceEntity(153U);
    msg.setDestination(22092U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("IWPVJOBCNSGRAEEAHJDMAAROGHIPBGZONREIDMRECKBMMDZIVKVUWQZFXKAJQFWSQNEYTHQMYYKVAOKWGSHXWPXUTPFZOVIPQWISVMVGBBKDUKCZPLJLAHXRDQKYMCEORUUSPJYGJTOKDEMITNHNTSXWALTSXRDBKPCAFYPYJWFDUIDNROQPLFFOUNCETVQLRBILVFRSJTHTMJGULZNNYOBWFGXYDVUWHLGFMAZS");
    msg.description.assign("CBBSXAOUXDQKIBVWPLKTYTTXQPXWJEJWFJFNIMOWCNHRFSWLNCMSDEVFAVQFCVAJSWYYSRAEEQALGXRIYNYVVBHMTVPINGYRUJPSTQKHRCKAZKYUVGDSELMBCHHNJOXHFQPNXMNWAAOODFEIKVPRGKZDIWBKMTTQNOCIDTLIWDSMFTXMOGRNOFABLTQZUBGULJDPKULJZEGWIURH");
    msg.vnamespace.assign("FDSSYZDPJJJHFVUAAIIZIJYUIJGYRWEABSYCXOTCHGAIEQNRGPUWFNQVYTLUTOBGMIWYQXCPKHQTGFSQXAHULUSEMPJVX");
    msg.start_man_id.assign("LOZYWQGSIFMJAJNXKKCITUXJARJNIXILMCZPQRZPNWDZFAHFOENQVGSDKGBXBWCJMYSFFYNILNPPJLBHXZVAXQDVYZNQZSCMWEARSZIVXEIWARKEBKHSGDAWENLIRTSSVOPSVOKWDVDGRMUHIXURRUUPYJOWFUHWWLYLKFCMVDTYZOHOBVLQKFTBTDMOUTBMCREGEGVPCZXQEEDAALCTJHGXMN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("LXZKVGCIADEBDMCBQLOIQKMZLQUNCSYRMFUGYZJNDWVWLBWKKXRJNNCSGGFZMXOQIRTTCABZVFPXPJCURUKYGPFHAAPZIOIKUYXUWSKPJJETTIYXSCXTPZYCZFBBTVVTSHDRYVOMEJA");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 2865994728U;
    tmp_tmp_msg_0_0.id.assign("LVJTMQKYRHZODULVTIEDXISGGJJJLJDSOOZZASXGMHYTUVPKFEINWSPQMKJHAYAJTFQNEIUZBAJDLQICFYNTQVCNUCRPKGNTUYZSMBSEERZHGFOLJNCCCKXMTNHBCWCVCRKKYVEZRIWYQRALXIVMBYCTNHMPXSPIIBAHBOBGDWDKBFNEUWO");
    tmp_tmp_msg_0_0.memento.assign("APHEBUKLCLBZSHONVTOSRZMJVITKKPPFMSSHQEWGXNUAHFZRXJBSCQEVEZBNNTJVFWMMGBYGWFDJSTXZFEFCIUFIPRBVRWCANGDBQUNJRGBIKZXSNZVNAODCWWQXXPUROCKLMGRMAQXLZEVU");
    tmp_tmp_msg_0_0.duration = 64498U;
    tmp_tmp_msg_0_0.custom.assign("GAGEWVIFMJJLSTQZKOFDOIBXMQOVAGQYZHMTRJTPUEHFCSREVDEQUMBISXWYFXJGTMNJHQYDJXANUGBXKQNASLMKOMOUGPNWT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LPDOTBBNIRWGTMCZMFWRARBGGYSELYRKYFDKCSHFQSRUOHVZUUCAAJMZSKFEJZITMGGYVOVHZKXIREKUMZBDKOFWCHFTOLSIOBJSEQNIDUPY");
    tmp_msg_1.dest_man.assign("QYDROTFPYQGSEKMENTVMRXBUHREDSFFMNLYOWJSIVYZRTERYGKSBSOGKZVLIXXZGNDSDFEALCBQJKLLCZHEAVWLGQPQSPXUVUXGAAHXLWMWLFZWBIQYUZPKRDECQWMFHWZBEYLCGKJCDEIUNVCAOKJNMOWDPILNNJVZKMOGDCBTHTZSYMQRMXTJPPZUJTKAADIIFJSOUBSVEOPXHFJYHKTGXVNOUYFDWCRQRAHNHOVAITUPCJAHRNBGQ");
    tmp_msg_1.conditions.assign("QZLQHXLVSQEDIQGIBPMCIDRIEDAYYCNBXJSCUADFSTACPRUBIOOVHQCZRTSNZGQTVBJBXMFFKTBOIRYKGEXWIQLEHUMFRILECOKAEMGASWPLVXKVFKZHSFODOUWBMDJDNNAJXJLLPPDGVXKPFFGWNASQGHKCOUYXWGNEXPMJHZRUQFZGJSUKVKCSKGLHTUYNUMWZJRAXCVBHNSEIWTTDWUPCRTIMHMHQAYOZRVNAOZLBW");
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
    msg.setTimeStamp(0.19735355107930996);
    msg.setSource(59458U);
    msg.setSourceEntity(197U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("HUWEXUVXPTHSUSPJLCMYVSZSVDQAOZTFUWIWTGMHIULZAPWMJLWODKBHMBXICXLQNFVYNB");
    msg.description.assign("RNZJIGHSDSYZWLYBYW");
    msg.vnamespace.assign("SWVPXCPZNRDOTJYANMRYGKLKLPPKXDPCCZIMEBLHQSUEYZVBICORZDHGEQGDFFRGWGSHNTLCZMYBOUKBNQSMMFSTZCIYPHYJRUHOASWQUIHDTAQOXPLQAQZCBFGWCVOFHBFKRJJXODJWG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PZKRZUQYYAFEDSFIIXXUFKPBJPCVGBXICPUAIBYIUOHYRWBBNQFLEQDHPIKYHCKEOOUMKGIZWKZAXOOXRDSMWZCMVUSHOLOGATYNEKSXYZMAXAWJHCPMCFRDNHLCYBNXAXISHEGQYSJNJPBJEEFMPNCYVGWFVETMLWHTWERNAVKRDJQDQLONGMGQGGTUJOBFHQUUSNJANAWVZKTDTELBZCZXMJWDIFTWVRZTDROHMDLQLVPCRULVIPLFSTQ");
    tmp_msg_0.value.assign("WIECSEZMBMPRFJEGBNNXJSBAQSXMJYEIHLCYKSFHVQKXKMTR");
    tmp_msg_0.type = 119U;
    tmp_msg_0.access = 87U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RSNJWCBYKMSYXUHSBAXFJWCDNHECPLABBHYVQNZGOBISDMYFOFVEGIRDHYPPVPAXWJIFUKSNDRGEFGGPKSQUVMCLTZQBWQLAZGIJXVMPGBBIYGSZYZAKMHWFLYXEUZOSOZCWUJNPJTKMFOEFUTLEZJXGLHVRUZJJOHWQWQQVICHUDTHEAITYRAEQHDNEXKKCVCRN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZJXVLQZYBWBJCTWIYSELXASIUEEQPRRKHPRJPCVRQBTPQSMMANDFSWFWJJQNOFBYBGXZVZIBQGLCVGYSGHUSTJFXDTIJVROSCVGKMEEOOOYILOELUIWYVATKPKWFMQTLLOILPXMUTHUANFKVMGYZAGVGCZCHASFDKHDXKCQRNITYAR");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 2389444302U;
    tmp_tmp_msg_1_0.id.assign("BMRVGWQSVWXHFLOCGBKWNSSWOUPDAAKVKEQHDIUTKBRXHGYAUQDAGEIQYINAZISLMGPJBQCQTOTFPRCDPLFLXTEPVMXNSJLWONUIIKCLJYUAFYSKUWBQCNYAVEUXZZJRDRDQEVGHZRMVKTEHIJGJEMRYNPSCZRDCCLNSAXJHPIJFXVINNXTHUAFRTLEOPYZNYDYIBLFVXFOAEQOBGS");
    tmp_tmp_msg_1_0.memento.assign("LCPMIJKFHFEUYYWWMKJNMVPPBVAFSDMNOOQPKHGVCAWCONGTOZXFKBPWXDELSZIGJUDTZYLEDJAKLLXETSUPYSAQRJODAQGMRODQEMIONVJREPQMJZXFGWVWLAXFMQSMKRFCSBZASQPVJURYGMNXBTNWEDLAWOZHWDDSCUCPHQHCYACVKRRBVXPUQUOSERTHGYZRRGHBIKXBYHE");
    tmp_tmp_msg_1_0.timeout = 41827U;
    tmp_tmp_msg_1_0.lat = 0.5170610817357656;
    tmp_tmp_msg_1_0.lon = 0.49905427335312025;
    tmp_tmp_msg_1_0.z = 0.2770380791984155;
    tmp_tmp_msg_1_0.z_units = 245U;
    tmp_tmp_msg_1_0.speed = 0.8903626003774416;
    tmp_tmp_msg_1_0.speed_units = 149U;
    tmp_tmp_msg_1_0.roll = 0.12094752329661906;
    tmp_tmp_msg_1_0.pitch = 0.07707576135056504;
    tmp_tmp_msg_1_0.yaw = 0.15223259046787507;
    tmp_tmp_msg_1_0.custom.assign("XQWTKSOSTLCKBZBMPEZJNULAWEFOCPLOZXOOQUUQWITBYRSGORSYYFMYYRDDTHZFSXBDYQYDDASVFRTTPEPE");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticSystems tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.list.assign("VCPBSGKYXUMGZAZCPVLSTBUHQZPOIGRQENBTYZKAUDUWEPTBBJZOQHHESQDNEXDLNEWYSMZVMIBBAQGPFATNOFWCMWSNXRHEOUKPNVUQRVFAYFIDJCLMYHZXKFRMDTDHTXVBPNOCHFAJWQWLGWPYDKWDOXGBJXXISSFNTFIYREJLCYOLPKIUDIRGABSAHXMQTFJUGHKLJHCKMZOZCINDSXYLWIRIAANRKGRJVY");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::LinkLevel tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.3791198982513374;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("PFKXKQNLHVQPBYVARYUOBRMBCOYTYDMKYFCGGSLDGCDMMAIDJIOWSOASTGWWKBTKVXWPPPNJDULITPXOVBRVAOEHUJVRXROETCQSVFTWTLGNLSUEFHMGZDSZMVQISYFICVTIIVERERBENGNBZCICHCFDZUPLNLIYOWQCGFMJQZWUSZBLCK");
    tmp_msg_2.dest_man.assign("OGYPQSIKHCAJXUFVIPZVYWVYSWXCJDSAJVWSSUEFTIFQBXLLXSVRWOTLIUMNUNPARFNAGIQOZTHYONUQPEAWPKDOQEKHGEKFBDZYHJTZXNCFCCHFBNEIEGPXKJJGIMUBCOQWMLAHKBEHETZFXUZBPBZMJWALRKYULSLDCSQIXRLENXYIGYZOJBYAWTWNEQDUMSRTPOVMMFDLGHZRBDKRVAMMOCDW");
    tmp_msg_2.conditions.assign("ZGVRYJENZQCRSGFHILDLLWUEIALQCSFUZBH");
    IMC::LinkLevel tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.581575320888565;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::QueryPowerChannelState tmp_msg_3;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.5374190600961207);
    msg.setSource(10570U);
    msg.setSourceEntity(20U);
    msg.setDestination(37936U);
    msg.setDestinationEntity(1U);
    msg.maneuver_id.assign("JUXVRTIBMTBRVOJZQOFFKIIDRVPQAWSQSHOWWWKUCYTNVNPMVHASKKGJXKBXGTTVNBKYBJPZRFJO");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 3030146828U;
    tmp_msg_0.id.assign("DMDTMVEFLTZQCRAPIGVVZKAGUUCUEQYENNONUMBZWYOHSYGYDHNWDSLZWXIATVJJTLRASUUJISYWVIHWWKWMKVCCIMLHFTNEUCOMKWOBNUJBREYPMZLAAKGSQQSKVFPDFLPLAWBTBFJQLOOKXEBGDYOKNPQBIUNHRXGSQXURYVJHEXDROGSJYQLTREBCECPOEFPXLJIBHZCSIFFDHDZBJ");
    tmp_msg_0.memento.assign("GSLRNWHVISCTGNVXWJCPZUKGKULRRSEGMTFQSXPLJLYVHQFZNDQZEEAXHYCVJVIIHHTGEZHOBVOOXPUZAQVTPWRAYKSTJSLCHCKODKBJYGXLDIMJNOOXCULBFWGPKMFDXEJPHCTMBYQQADPLUWUOEMYRGBFJSRFZQSNHDLQEZTPWOCODENRALIUNWIFAGHRXITQGTMYJZODMNCAZFXZMDSSENMWYYVBAFMYWKKV");
    tmp_msg_0.timeout = 35054U;
    tmp_msg_0.name.assign("BJBIENWCCHNHLOLMPESGDEMJDAYJFECEIFNSZRZRZIIEXYQTNAWGNPAXBJBE");
    tmp_msg_0.custom.assign("FAFLDHGADCCKIMMRHEEGALPIOAFNBPSPLBQNBOHJEOZJHNXV");
    msg.data.set(tmp_msg_0);
    IMC::CcuEvent tmp_msg_1;
    tmp_msg_1.type = 5U;
    tmp_msg_1.id.assign("UUPOWXYRBESYUTHVJFWFNVYTG");
    IMC::ClockControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 58U;
    tmp_tmp_msg_1_0.clock = 0.8278983328771133;
    tmp_tmp_msg_1_0.tz = -48;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LeakSimulation tmp_msg_2;
    tmp_msg_2.op = 240U;
    tmp_msg_2.entities.assign("OOJTAEFCOQTNSIQFEMQPRIMDIWYUCPETANXWGWIDETDGBRRZGJABRLTQNVRRZCAZPGJDPTDPJQUGHOUULFNGQVKYZJFHUPCBEMLAVPSMPRPGDWQZZSNLBLATZEYILHWPCGYYFIKBCMHSSIEKBYHJRHHLACVRBUYACFWJOWEQNVVSJGHUFXERGLXDFXOSQVJHOIKDCWSLMVSMFXYMQXABXKIFNTOOKKIWYWKSCJZAMNVBUKTXZZNXTYVUBUDKHE");
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
    msg.setTimeStamp(0.575255987982269);
    msg.setSource(52905U);
    msg.setSourceEntity(240U);
    msg.setDestination(15848U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("RRKKIZQPXKWMISTUTDEWNXQNWUHNCCFNGIPCUQFPNMYZRVWEWJZAYVELZMGEDMXEIMAHOUBROBMSEIECZPLXSFXBBYCTVNFWYJYPCRHHDLHGOAYITCGKTRVOZQIXAIWMZGABAQGJJPDNMOUPLOSAVTKDFYBTJHRAJZ");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.plan_ref = 3027521314U;
    tmp_msg_0.id.assign("MPBJBRWASCTBWESDGVMRKVINUNIGVYZZJXJYUWKCVXJWJFBRMCRPHZNGQRDKTSAXCOUUXOZCOFJWTDIVMOTTQDPGHFTYQRHMTEAUDAGHSGCWZXQLCFYPWPGRBQGZCPQHKQJLVNIAEJDUWITSLOILLAXAVGMFELGIHHZ");
    tmp_msg_0.memento.assign("UHAVUIMTJCPASTDMQQTEMAQGNIWZTULRFSXNECKDRNXERKOOIPFCKVZVKBCNGNUFXHENGKMFBROAHOHPYVGLEBXJRYXABSAYEFSDIYMZWXSNEUGEZHAGDLMUJTYGOCXXQUMPLFWIFIJTNQBSDQFRRGBWVQOPZUDWTXBKSOHHTKPGYRAYIJH");
    tmp_msg_0.timeout = 7009U;
    tmp_msg_0.rpm = 0.27663617051000355;
    tmp_msg_0.direction = 177U;
    tmp_msg_0.custom.assign("IBGRPRMURXPTDUACFQQWEDKLWTXIUGNDUXBYMEKCJVGCLZTQTYYYYCHMSVWVZHUDIWLQYWSPYKHGEKJFF");
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
    msg.setTimeStamp(0.47171220148360826);
    msg.setSource(3893U);
    msg.setSourceEntity(38U);
    msg.setDestination(37663U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("TGANNRDNKOOJRCQXEJFXRFROHEHSYKPBLWBIFZUCJABZNAZRWVWHNYLPTUABWUBZSUAAPFZMEDXMTLLHVLYDOSFCKCIKADJFGOZIWNESLENCQIXEMHGFTGZRDOBGURJZWKUXEQEBJSUPKHVQWIJYMLVHMAKUSKVX");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.plan_ref = 3182489982U;
    tmp_msg_0.id.assign("ONCTAJZOUNZRGFHGDAFXPMEDJIYSKDCQCAZCQPMCEKGVXHTMKLRCZAHIPHIFPRTRVJDJGQPZCFKBLECYXSUJXVAHXLCPWVYEJUQONAOYGDMLQQWVUGFQRGUSIFUTNBJBFSNZAEZMPEBAORPSRDWLTTOMHUABXHWSPIDQTVJIKUKBRYBXDENZGNWIWMVZFFIYBHWWNIYHJSFVYTOLNVXKXDYSIOELRUPJRGBAWS");
    tmp_msg_0.memento.assign("AXAWRWVPSRGGZRTOWXNLYLXPVLNHPSIOYHZTWDOHLHKQMWSVKKLBYBLYJFDJUPEVWCOJJKDDQZSZRCBNBIQFMFFDXIQHVXYAOMUVTUMOMEKNMYIRDDPJCVMVTSYUWUXBRARDLFJXTOUEGECBOHFXZILIYENTSQPEFJLCNCIPEGQBSKGFFHMVHBBNUKTAQAMH");
    tmp_msg_0.timeout = 17369U;
    tmp_msg_0.lat = 0.5393797596334123;
    tmp_msg_0.lon = 0.25251485302392707;
    tmp_msg_0.z = 0.33231680670981756;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.speed = 0.9902874242461641;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.duration = 26493U;
    tmp_msg_0.radius = 0.6086234392419343;
    tmp_msg_0.flags = 213U;
    tmp_msg_0.custom.assign("SCTUGWJSOYYQOGZCLKZBUIJETDLVXXIKEGULRVBQCYJDXETMELPDUEOJDRFYAYFMPIWSVUTYISRABWWDURGAVNSZEYRPYRXFROFEXXODAGMVVGVOCZBSGCN");
    msg.data.set(tmp_msg_0);
    IMC::GpsFixRejection tmp_msg_1;
    tmp_msg_1.utc_time = 0.8315802870460803;
    tmp_msg_1.reason = 69U;
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
    msg.setTimeStamp(0.29054727512848666);
    msg.setSource(14203U);
    msg.setSourceEntity(48U);
    msg.setDestination(37631U);
    msg.setDestinationEntity(173U);
    msg.source_man.assign("KZSTMQIKZW");
    msg.dest_man.assign("AMXSHEOOATKOQYIAQLBSWRXRCHTQGDWWGOHVGQERSXKMGQVUNGIJVBQUKFUOLBAZZDTWRFWPINKZKNEURHGYRGPWRNLSITBFRKVPEZTFFDFINRJVMYPUFHJGPITEYWDXHBDODXAPPZNCXQDHCXKEEXIYKCVMLMVJYWBXJNAHOOMRTNHQDLEYMXYKEFL");
    msg.conditions.assign("XKQSRMGVLJWHYCSVUZIONDGJRJRYXZFWIUGMUCQSCGNNZTTBCBBJUSPHXGQYDUWEAFAFHQPCQRFTKILSSZMQLWDXEJXZEQEPJCDIEPBNMLFJZDX");

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
    msg.setTimeStamp(0.08111297676057849);
    msg.setSource(26329U);
    msg.setSourceEntity(245U);
    msg.setDestination(22573U);
    msg.setDestinationEntity(205U);
    msg.source_man.assign("UEBXIIAHGOSRPBRBYTKKUNWTZJGKIUMAZNNFDLNWRZDLRAPCDKOKSVZAYJHVAXHJBYZFHSQNWNYSZXPJJQIDLCFTTVTDZUCNCFWMFBYPETRFAAUCMJUJYGCSNLISIFBMKRNXLMJWDJLVQDIOOHQWBLBKVGTLOUBVCMPWYIHHZTMEGMYCQLO");
    msg.dest_man.assign("JXCFPVYUASAXKISYWETECZKXZACGMLTTVIAJFDYQHZDMIDTJSRXFUNNFMLILYQDOEXLXPDHIVPQSMMJALOVGBERILYROQOYVRBWPPQHRRUGTPPQKEUFVJZQPYIGMKWMEBMWBXHWTFJLAKPHWNLNFABQIZDZJUTOKJUXGWTNSRBYDBEVFKFOGHGVOMNCHCJCWENTHHFVNOLKDZKZXHPABCDXABUYJ");
    msg.conditions.assign("JTBVHMBQIJJ");

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
    msg.setTimeStamp(0.4256682523321902);
    msg.setSource(51036U);
    msg.setSourceEntity(184U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(183U);
    msg.source_man.assign("ZFGDPEJIMOUASVQLKRSDMSRXHTIWAMINGYOMXHGFWZPEIKKNNVBAETEDXORXVCSZJFYXQVCBHLPWCGISVRNGAHKGSBENKGBJTPBYYZJOSNFKONMLZVJJMRKURTYQLEHCCZPUTOYUOLVCLAQDHMNBPUTDAJFBTVOCFTRZDIIFPOOEBYWFCGADMBWQTJIXEUWACZWKUYRLCLWDSZFIMVAXTHPFLSYDUYNAQ");
    msg.dest_man.assign("CEASYOYJTYPGF");
    msg.conditions.assign("PFRXEQVROJQZZOUJXDQOISADVBWDFZNVWFBUHQFTPHRQYLJSEHIDSFMCCCOMCXHWRYMMNTOJULKKSTFIUPBLTCALEXGXQVBTJHIXMLRYFUZVQONZRFGJPSUNZWUCEXRPIAHEUBDDWYCDKKNGNGBLQAW");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 246U;
    tmp_msg_0.error.assign("OMYKSMPUNDIJHYEHCUVHUGXSPLJCORDIGCGAKRLUAOXNTTO");
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
    msg.setTimeStamp(0.392604835490177);
    msg.setSource(61633U);
    msg.setSourceEntity(71U);
    msg.setDestination(61868U);
    msg.setDestinationEntity(215U);
    msg.command = 172U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EVWKXTEAYPIQGXRRWPVUZIHRWGZXGPLDTCXJBEFQIRHKDPJYMWAYPHRHDMLLZQWTVSZKSJAYQLKMENLYCERGONDAWUKBXDAFFJMKFIIDANBZSWUJSZAGIZONCXPVBUAYYSMNUMOPCLLFBNQHHXBOKQABBFLVGUORY");
    tmp_msg_0.description.assign("CRJBBUULWEVDBBBYDMIVFZBMGWVHDYOGOZIQVAUACIJKISPTVGZGQGRYUIVJIWJQGQLFAAQRIOPLNDGLJGQXRYFSEITVNCCTXHKKMUKPALZPAYQUHUKLYHEBZCOKRRGCTSCHDEL");
    tmp_msg_0.vnamespace.assign("FYABHUVKAWQPGBCMDUMYLLCOJJAVCSOCQKYZURMBVSYVZQNIXQVFFTZWQGLSKOKWOFTMVYFZWPBTESLPMWZEPLNMOXVFFMHSXGCOAHXCUACDJJKRIEYLWILBDRIPCDJNQOVG");
    tmp_msg_0.start_man_id.assign("XIGNMSMOHCAFHHPCJDPBRXELWDXQXBQCSUUPETKORQIRGPRFLUEJVDODGAWEGBSIWZINENUHVMJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LHPXEJYRXOCNOHSUQVBGEHLCPYSJCAWMMUFDEMLJLXEBWEFGTBCROSRRJEVRWPNFKQAJEEYUSKQGJDDTRXLMEYRTPOIGQAFHCPFSCTHVCPSIAMUDMTWUTVNZKFZIYIBIBQIVVFJJPOWHICL");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 2757688709U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("HKCBAYHZSEGVTXEPORRGCRRXVCCAVMWOOACKILDNGJEOPAHGEFUOYFUKLEIRDUWQXWTNUDHRSBUXMBVEDBUUKJIILINYBEMRCFSOKZZLQMLOAJZJQFAPWTWVYLJALICKFHNGXLDGWAFQQU");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("CUQDDGXSAMDVNPPSSJEQLVNJGRGKMEOJFXMXFYKWOLGGEPQBYDYCDXNSBHMEHVRFXSKBYIUVRICBSLFPWOWDZNJRGPCMARAJDOZOQEMQIILTIQXHBLZOCUBCVTLEHMRXCSHH");
    tmp_tmp_tmp_msg_0_0_0.control_src = 31510U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 139U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.4475279566997239;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.4428840229548744;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.956625771484622;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::StopManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.43324394819765666);
    msg.setSource(15794U);
    msg.setSourceEntity(58U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(158U);
    msg.command = 67U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EIQCMSFQMFWBPYUTFOVZYZPBREMJACFJTEBEXLQAPGKIWZPNSNYIXGRATLHRRGEQJPNYMYNAFWRLSGVIXYJHCESORJCMVDPBDBPUPHYDMZDOPUWVUDDJXPFKWSKULVCNOUU");
    tmp_msg_0.description.assign("TVMABKVJUDROQFJGUTFENNYQBYZTLJOTWLXTMHRETSQWLKCUSQFJXDYVJAZORRVZDRONWNDFRKQUCPLYXDHJPASMDGWJCSFLKARXMWXWOPIOBGQNGOABBHISJDYEAJPUCRYSXUUNIBKEFQZPNOBPCGNQ");
    tmp_msg_0.vnamespace.assign("XBVTAAJJMLZJGLNNKUXIKQUDKPYJHONZWGEGLSMNKIHXRJGLMFRQEJXHHZIHVKWQGTHMSOFKSJRMBNVUUPUOKIRLQKRRWUWOIVBIJMCLBPABMHRYATZUPFXYYGDQQPQOFZZFNQ");
    tmp_msg_0.start_man_id.assign("VNZDCOUESVXXYUEWORQKWMJQNUKAGKQTWMREQXBSKPMJDCSRQEUBWIVAHDDLRHSTVIAZWMQYFINIKRYDFIKWTFNJPHZCZNVHHIVIHXA");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("QXEQDGYSVZNZUKDBVINPOLPCEJZXLVXMSEZGEQOCIDWOUBHFTGORTBVXACHFMNPUKWZXGROVSBXCFGAKZPIPGCRQKEPGKGARHXDENYBVLIFOYGSFKPJHBMZSTYNTCXJWBHWTUOPUMYIEUNTMEWZLYDSXPJLQMURSOV");
    tmp_tmp_msg_0_0.dest_man.assign("NQSWEUIFVPRNZXFYOHJZQDDKKCUSDFMVBKHPIVPBOYRSWZITBSCBCLGCCEOJL");
    tmp_tmp_msg_0_0.conditions.assign("BSSLQXYAZXIFFZLEROMSSXDPZQYUFTWSJOHTYEHQVCDQJSVBMAUIVULHAZDFGZWNLFWHLGPKFJVBPAGDBIRQZNGDIAVRBLJUJNKYKOAYBPNTCHJCLEAHNNIRQETYXWVNMQTNKHQHMDSMKTBRTUZMNRIIPPCGDIELUAEXIHSGOIDMJVFKAQGMHYBWCXMOVSYUWE");
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
    msg.setTimeStamp(0.8980826671097238);
    msg.setSource(15297U);
    msg.setSourceEntity(108U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(18U);
    msg.command = 106U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KRONIRMMJYHYEUFXMBKMJODHEMBHHGMBFVIMGCBSYYCDNIKTOUCGGHFSVPQWAGGNNTKZYTGPNILORCWSRLBYYTCJWFLEOXZBMATUQKKLFSROWTSVYDPTVKIPQQPWEBZRPBTBQZU");
    tmp_msg_0.description.assign("TOXBKENWRDXVPAGYBUCYYLDHWSDPVWTCHPCILMNAOOSBZYKLMDZHVWXRDEMPGGCLFGHXZEKSKIFUCJSHNOJFXBMLEWUPBTUREIKGRMTVTINRWJEMASYOWKYQQNBMQDVDPTVNVJBVXHEASOUFPNQLXMDVAKHUZYLOFLBMIGODGTJBVPQYMQTRNPSJRKQSWZIIQNARQSKSXCCFFCFQAHUJJRELPYKZOECZJZ");
    tmp_msg_0.vnamespace.assign("VCWXSOZUBXMJCXNVTCICOELMLBNNKRQRKSGJPXMWCPISVLBAZFJEHGKJWTSTIIKEYRBBHMZO");
    tmp_msg_0.start_man_id.assign("QVRZTMOGXSSBGMUSQOSDIOQAXCWFOWVCQRKXUFNUADOGUIHQPTGLJNKVNEJTCZLSHEDAWRUMROYFUYCLOYYDPRNVJXTPRJXBKXNGCFYOAAJIHHMZTKAMCGDIFEPRKBJNAL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LGZRJBFNPGBOGXBYXEHWLSDZHLUWXDSVVTRJLVMCUNYWIKQLAZSYRBAPTLKKPTMAICYGBUZYRVJTNSPJHEUBOPFAXNOWSAKNRSOCHLQZPKZEWEGCXRDJNTMVMQD");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 1966894440U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("FYCXDSSCCWMPD");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("CNGYVJZJUORJUVAIGPJWVCNVZYHRKNWBJPIKOVBLLFXZMDHDPWLLGICMWFUAPCUNEHFLFHKUSTMQXMCCEFGQQCTUMGSMEKDWOPNAYRVHLJFQWGZOANKQIHEYVRDEGXIXGTYOASRSJCEUSIKZ");
    tmp_tmp_tmp_msg_0_0_0.duration = 5764U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NBJFQAXVULPAVWKOLHKYYGAKDMEHJNDMBNJRMDPWQYTCEUHXBLJJJPBUUYRTOZTWWNTGSDBHIEVXFZUVBTYCLBSNASSZSJHKGLYBIYELIXFVZWWSPHFMPEYATMPXZHHTKFRZGQFDMKRGWTBSKINQDMAIPPMLJCTEMKFDKOFXTWXCZLNMOHVACVJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanControlState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 29U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("QZUKZGWJSCNTCZEPKQMJMNGHLTRQGDYUIROSIYOKENUFVWEMYQVFHPVFSCICDANULJTPHLGNBJUBOVMEOXAQTKAHFVMTITLRHTKCKIGRSMIUIOXJNSWQNSGCBMVVMKYBJJSLFRCRWXXEEUOFDQCEGRLDHXWADURHYPENPOZGAJIIRXYSBNXFPTUYDAQXPZBGXZFBEVVZAYMLPWCYGZQRHJDYLSOHWHB");
    tmp_tmp_tmp_msg_0_0_1.plan_eta = -285256056;
    tmp_tmp_tmp_msg_0_0_1.plan_progress = 0.11377018797632821;
    tmp_tmp_tmp_msg_0_0_1.man_id.assign("CUAEPXDXGUJKNFOSFUGCNRJKBPGVCDT");
    tmp_tmp_tmp_msg_0_0_1.man_type = 5021U;
    tmp_tmp_tmp_msg_0_0_1.man_eta = -653340055;
    tmp_tmp_tmp_msg_0_0_1.last_outcome = 30U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DOEZZTOXASJPRMXLRHRXKBHUTMDHVNHPFNJWYLOLWSNDPFESGGBCAGSKTUENHRAIXWDDGPQCMUUHCMXKIVRFCRAQBTKZUQJBMIYYSXNFJUOTBNFIXDZDSVZPBOKJWMDZEHKZZALPYVANQEISUVQGNBTWJV");
    tmp_tmp_msg_0_1.dest_man.assign("URLJZZNWUTJLIZJFRHPMEMAGTQYAEOUAZZJCNHDALJDWBGBNJXKRYHQRFITDQJHKWIMTWEQYOZOJVBOGMFPEMQEYLPPUPOVQMERBYMBTSGWKZIWYPRDWVMLDVFASXHTANEYPXQNQKFIHSFNXS");
    tmp_tmp_msg_0_1.conditions.assign("VEBHVUXWEEBZQMYLAMUOPRPQAASQRGWLXIOLMOZJNWOBATQDRWTTZRUCSVFPSOMAGPGEEUJFXPPDVGXSDPWIFNDHRKKNHVBYJIAEMHNFILQDXUQAYIRJNCVXKNKYTOTUBXCZYBCNWZENHQSCTXDMITHLZVSKFULR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.utc_time = 0.5181050324868155;
    tmp_tmp_msg_0_2.reason = 54U;
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
    msg.setTimeStamp(0.6236322861860469);
    msg.setSource(58473U);
    msg.setSourceEntity(155U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(44U);
    msg.state = 132U;
    msg.plan_id.assign("IHUFTUZYXKIKBWRAJPRPZLHFQTCYLALBZGGZJRCRYFMLUMNEGISVEVPVQOSRHVJRBZMWLPETBZUUJILTXDFMMJOQGIFRNKENFACCLCMDTAETBYBOODENYTLUFHKNMGVIBUKSOSISWDPLO");
    msg.comm_level = 58U;

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
    msg.setTimeStamp(0.8055344946703477);
    msg.setSource(57675U);
    msg.setSourceEntity(19U);
    msg.setDestination(30516U);
    msg.setDestinationEntity(159U);
    msg.state = 130U;
    msg.plan_id.assign("OZECIJULUOVSSCLOXQWYZVMHTNHQOOBVFDYZHDEAJXUSNVPAXRRHFMWWSDGJHNEKIIVCWOS");
    msg.comm_level = 142U;

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
    msg.setTimeStamp(0.1684853691926793);
    msg.setSource(33150U);
    msg.setSourceEntity(1U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(219U);
    msg.state = 175U;
    msg.plan_id.assign("NDANHWKXZRDWIWTMWUMPAPUEURYZCYMQIPLFBQOSEHCIZIXOMGTLRABJHVFNVSXVMJOZCWJSOBZVJXRNUBNELTEJYBUNVQLEGKMFOQXUFGAQUDDAPTFOFHBDIKGGSVQMHQRSCQGDDHLNUPUNTJPBFPUOFTRSSTGICOLSZHYYKRGHWFVPSAXWOCGEYDXLDCJIYCRKAZRTVLAVZBKLBVKAHQMJKXICQYCPILWYEKNEIJEYRFMSDZNZGT");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.09778375353159863);
    msg.setSource(35466U);
    msg.setSourceEntity(170U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(237U);
    msg.type = 118U;
    msg.op = 179U;
    msg.request_id = 65064U;
    msg.plan_id.assign("TMYKKJFWOPNPZKBHVXTUDQEWMGRLOOWYMSGDMBPVYZBPGHDUMWEUJUMORULCUKZGFSUIQAQPSCVNNCKGREKTTVEYEVBHIGNXARAHIOLLAMZZLXVNGYDSFSJLYZWHIRF");
    IMC::RestartSystem tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GSPFRQCTYURSLGHDJYSOSYUDHKBLGYUQFWEKCUXXPD");

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
    msg.setTimeStamp(0.8557590855582047);
    msg.setSource(919U);
    msg.setSourceEntity(250U);
    msg.setDestination(5782U);
    msg.setDestinationEntity(21U);
    msg.type = 43U;
    msg.op = 249U;
    msg.request_id = 6386U;
    msg.plan_id.assign("UESXANJIYKYASBKRCSEREKBGLKMFDTXSWYJMLRFVROYQNBJSGFQBYVZAJDWIHGTFMCCCQDMYBIUKKEOFIPTCJRBSJNJCBZWRTXXBUMQMZEZUUPL");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 213U;
    tmp_msg_0.mnames.assign("OILMNMGJEGJMOCQLBELRIYWTHXTBYRVOSZRODBAWYAWTEWKFLSZNVIWBXIVPSVMFQYADWUFCHXYNCAYROPSCUASEGVPYUFEQQLKQA");
    tmp_msg_0.ecount = 204U;
    tmp_msg_0.enames.assign("NHQNQAEGRBNFABJMPRFVMYOVQTEPDCNDUJFOZFINOFAHWFQIYWYXRYJZCLRVLUTWTOYCIQPNLIBCVAQCQZRVIEOZQS");
    tmp_msg_0.ccount = 236U;
    tmp_msg_0.cnames.assign("JSESHYOLMCDBWBFPRRDTQVPFFOVDVHKCZFPSAMTNXFMWDHEXRNUPAIZOZKZSEUKJQCLJRPIWEPDFOXMVASEDJWDNCCWBQUVWLHKHQGBQOQCMKJYYIBMVWSQKYKLGNOBYVAGOTNNIVSAYZBZRUAIEESUYZTTIYJLFKBBFAXZSNUAEGTQRNXOXRUPXRYCUIGWQHFHLBDMCJTDIPWNGIJXRGLAGXXKEFPIVOOUZZLLLHQMENH");
    tmp_msg_0.last_error.assign("WWZHRATWGTYULSGTLXGOBUSQDZJFRSJSAEAVMFDFXVTNDGXNCBHGODQBRMZOMOPZSSVUJFWBMNFZHFTXYUEAKWEPICPJSYCXQTXVCNKNMLZTRHVOJCFAMKIBYYRUPOVGGCFEHVQLQZCVSKHHIVWSYBDNJIDOECFIEQZ");
    tmp_msg_0.last_error_time = 0.9463227485904343;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EPOQVQDLNFZJBBEYAIMRRIMMCRFFFALMFT");

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
    msg.setTimeStamp(0.6926879077194905);
    msg.setSource(42354U);
    msg.setSourceEntity(17U);
    msg.setDestination(59633U);
    msg.setDestinationEntity(181U);
    msg.type = 129U;
    msg.op = 85U;
    msg.request_id = 57416U;
    msg.plan_id.assign("VUUXTZTSOBIGDHWTUHGRQMGCYHERVHCD");
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.48715653274346304;
    tmp_msg_0.y = 0.7958951693421509;
    tmp_msg_0.z = 0.48449528709702294;
    tmp_msg_0.t = 0.7582721672123223;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MBCNGADZLFGZGPOJHIJKTDRXBUPMNEWTIXPMSQEFPWQYRGFIATXMPQCJZBOWJBNLNBVHUKICCSOVQUBOPONDLLLJAWVDAJZYTMPYUZTZAGUIYZMEBFYPASXYOSUANZVKJOLGYZWDAJRSKLOMEEXDBDXEUBDBYKTDQCAROCXMFQWIAUEWJLVKNTYQKNZWTOCCLSVSXHIFGJMFRPEURRVKDVLHTINHGMNFR");

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
    msg.setTimeStamp(0.704966167269391);
    msg.setSource(20123U);
    msg.setSourceEntity(147U);
    msg.setDestination(33604U);
    msg.setDestinationEntity(147U);
    msg.plan_count = 30045U;
    msg.plan_size = 3985410468U;
    msg.change_time = 0.288682924258705;
    msg.change_sid = 15565U;
    msg.change_sname.assign("IJIKGFTMGQJLZFYHLUNDHRQGCIJAYKVQFXWWBAFOLHMPBBYIRJLVNEWOESUFWVZSEGXKCBAVODUDEMSUBVRJPOCZTZFSJNVYPSRMTYICIUMKLZUDNUOZGWGJXHB");
    const char tmp_msg_0[] = {-48, -101, 26, -116, -31, 24, -15, -87, 126, -28, 28, -113, 55, -37, -24, 73, 20, 58, 121, -97, -79, -69, -101, 40, 105, -85, -99, 109, 95, -15, 107, 26, -121, -110, -36, 16, -99, -111, 117, 64, -98, -113, 48, -77, 88, -6, -127, -3, 8, 60, 55, 73, 25, 63, -43, 13, 124, 3, 72, -70, 103, -71, 118, -73, -93, 98, -86, 97, -37, 109, -84, -88, 109, -83, -47, 25, -120, -119, 72, 74, 50, -13, 80, -112, -111, -64, -43, 65, -117, 44, 71, 20, -48, 3, 48, 58, 82, -115, -6, 17, -6, 43, -90, 90, -58, 94, 11, 52, 90, 9, -123, -30, 95, 120, -47, 60, -112, 106, 51, 28, -96, -59, -79, 34, -118, 77, 27, 38, -67, 85, -54, 36, 99, 64, 122, 55, 113, -127, 87, -34, -73};
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
    msg.setTimeStamp(0.8698360040830067);
    msg.setSource(38564U);
    msg.setSourceEntity(4U);
    msg.setDestination(23393U);
    msg.setDestinationEntity(216U);
    msg.plan_count = 33388U;
    msg.plan_size = 3270283628U;
    msg.change_time = 0.9604107245844975;
    msg.change_sid = 63080U;
    msg.change_sname.assign("BHAJXUOYZWHEEAGMBWGWOIPMNLYKQOKVPJLBVAMYEFFFSCJQRUVCUHISAZXQECKYKYLXPQHNLIDIQSPFQDCBFLBCDJAPMJDAXBHMURQXKEGDQKNFUJHTSZXAEFTRDMFVGNEKNWUOSCJPNUQDDJPTGOIZOLPGYGMLOIXCHZJTDHTHNA");
    const char tmp_msg_0[] = {-5, -40, 43, 114, -119, -5, 109, 52, -29, 55, 2, 86, 22, -119, -98, -57, -92, -127, 49, 5, 48, 3, 97, 24, 43, -5, -11, -26, -123, -33, 13, -112, -94, 85, -58, -107, -93, 93, -6, 85, -105, 73, -29, -7, -3, -4, 51, 94, 56, 106, -118, 52, -24, -111, 55, -37, -34, 52, -34, -81, 73, 95, 63, -26, 40, -34, 85, -38, -79, -53, 84, 95, -91, -68, 100, 117, -44, -90, 111, -92, -106, -39, -37, -97, -50, -16, 24, -3, -105, -54, -105, -77, 47, 116, -41, 84, -118, -46, 16, -91, -101, -118, -55, 11, 89, -62, 47, 56, -64, 5, 69, 22, 9, -58, 109, -64, -58, 51, 33, 52, 83, -97, -35, -70, -41, 29, -20, 67, -89};
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
    msg.setTimeStamp(0.17496309055367765);
    msg.setSource(13158U);
    msg.setSourceEntity(133U);
    msg.setDestination(39870U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 34193U;
    msg.plan_size = 1796684421U;
    msg.change_time = 0.09773635305999706;
    msg.change_sid = 49082U;
    msg.change_sname.assign("ABCSKECFGUGQKYLXZICETEKROKKRFBHQHENGVFJJTUPRXKXVQGYTYXTPEWBNDJZUXSXHAWSBSJDPSOZNGNDHJCNXLHZHDYRVMUMIVVHEDRRQPXBSQMFPPRYJVOCRWOAJYLFVSKQGYINZVFWMZNERAEMHMYUBKZAZJWTOMPIPTOTYAKLIFPXSXTHUDGUGLOMWEIBQOFUQLQAOLMHTWNCSLBGCVLDZNVAWCUINECQKZICIAGAD");
    const char tmp_msg_0[] = {87, -15, 118, 60, 110, 33, -22, 42, -25, -114, -88, -119, 21, -41, 24, 96, -24, -121, -58, -29, -128, -94, 106, 23, -118, 17, 48, -61, -76, 59, -61, 67, 26, 84, 74, -51, -71, -80, 42, 27, 101, 56, 106, -70, -97, -25, -125, -58, -92, -99, 100, 42, -28, 89, -1, 35, -76, -52, -69, 28, 22, -121, 15, 34, 85, -17, 7, -40, 20, 120, -8, 6, 88, 1, 58, -26, -87, 124, 108, -17, -40, 54, -6, 77, -94, -79, -94, -22, 113, 27, -65, 32, 112, 20, -26, 62, 30, 62, 121, 114, -22, -47, -120, 30, 41, 20, 124, 9, 20, -76, -103, -76, 91, 1, 107, 66, 122, 68, -105, -61, 51, -13, -47, 94, -30, 67, 115, 19, 31, -15, 0, -27, 90, 93, -63, -109, -82, 52, 102, 94, 42, 9, -3, 0, -10, -21, -37, -18, 77, 40, -88, -89, -77, -76, -120, -116, -29, -26, -59, -85, 108, 72, -29, 60, -59, 103, 23, 126, -72, -52, -69, -108, 35, 61, 117, 49, 36, 31, -58, -43, 10, 105, 112, 75, -11, 125, -19, 3, -100, 48, -99, -92, -19, -26, -52, -50, 47, -67, 80, 98, 111, -66, 30, 26, -70, 75, 92, 0, 87, -108, 43, 86, 45, 97, 75, 97, 11, 76, -75, 77, 109, -72, -103, -19, 109, -122, 110, -13, 41, 45, -98, 40, -41, -54, 115, 87, 98, -67, 4, 18, 60, 52, -3, -101, 85, -93, -61, 67, 30, -57};
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
    msg.setTimeStamp(0.1155478626358365);
    msg.setSource(20217U);
    msg.setSourceEntity(128U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("ADPDUFHKRIWVIHPZYBEIHAHZYEATSYFEQAIBGFWLMJBOBQDNSXGCKWWZVVBYGVTPNLBPQHWWUULKUWLROEMEJMMDHYYRCPULANUYCPVYASJQGTFMTIOXVZAGERXXLCNCAKBOKNXPCFNQEKJKXEGLMZWQGRJMTKISUFZTELWXHICOIMYRJMRYQPDWGSOZQKJTJSODKIVVBDUOZZAJCLSEXFNFMQSHPUSRTNOTVGHFP");
    msg.plan_size = 22819U;
    msg.change_time = 0.43968523488249034;
    msg.change_sid = 23780U;
    msg.change_sname.assign("CWHXCAPKLNXPOADESPVMJVBCZFHOKQWTPPZTRZQICYWISHQCQRSCXXIXFCABFDGNDIXPNZDYHMWGTCZVYKNBEAOUHPZHRQSAUIVOVMQBEBLTFRFKMLBEZHOEDGVZSUEKUNQSAAZYFQRKLTNLMGTHDYPKNLXJXBTJGIJIMIPLJXUTAMOFJSJIEBWLRRGHOVNXJUMWKUSKLQNCFWBBUDYYEKRRIEGSGDWVTROPJTFWECYNZGAWYDAMGULYUVQ");
    const char tmp_msg_0[] = {67, -39, 110, -56, -79, -86, 30, -107, -97, -84, 63, 79, 118, -58, -68, -79, -83, 11, 115, 110, -22, 12, 72, 43, -97, -128, -103, 93, -55, 98, 118, 68, -77, -33, 0, -90, -62, 82, -70, 12, 116, -36, -111, 19, -42, -92, 33, 46, 98, 94, 10, 68, -40, 43, -29, 115, 78, 64, 91, -103, -124, -1, -92, 83, 79, 5, -20, 58, -85, -66, 39, 111, -117, -28, -87, 119, 111, 62, 100, -72, -44, -106, -100, -57, -38, 70, -117, -100, -56, -27, 3, 126, -4, -43, -108, 36, 18, -86, 96, 124, -28, 115, -91, 65, 26, 15, -46, -121, -50, 22, 111, 61, -53, 6, -30, -99, 85, 12, 121, 32, -16, 22, -80, -40, 53, 107, 54, -19, -122, -18, 35, -115, 120, -96, 65, 27, 31, 76, -91, 74, -87, -58, 36, -41, -20, -66, 93, 112, -92, -23, 75, -52, -26, -120, -43, 78, 38, 20, -107, -105, -96, 114, -10, 49, 100, 49, 36, -124, 3, 52, -69, 108, 88, -116, -44, -45, 48, -72, -90, 43, 68, -111, -68, 64, -54, -38};
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
    msg.setTimeStamp(0.4177591111383908);
    msg.setSource(62997U);
    msg.setSourceEntity(171U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("SPGOEDROPNQUZPWKHEXAMDTRRIOCDUOBDTWWKAYOFDSXXIXQWFAZSNEUKYBVTZWHLYCXLUTRQHLNMKHRWYVVSAIWUGRXGJPDK");
    msg.plan_size = 37727U;
    msg.change_time = 0.9882774907141244;
    msg.change_sid = 55593U;
    msg.change_sname.assign("NFQVMYYDRYFGRGYAHXHPIKXXBGMOUWOVUYSYLUCJLUREMPZNUQENGDSDIMPNYMCBAIWTRGFQCEVNEBCGYOZWKDEJFIFCUQXKEXGVTSYXBABQHZCMPFGVGUFJKBIMRIHIDHZRPVQHTEVUDQXWCTGHUMBDAAOEKSKIZCVIHJAUWRFXOQNNCNLWZMSKSS");
    const char tmp_msg_0[] = {69, -3, -79, -114, 122, -85, -33, 91, -85, -57, 50, 17, -83, -62, -89, 18, 17, -101, -92, -19, 45, 14, -124, -38, -1, -126, 3, -111, -27, 47, 83, -83, 73, 1, -85, 65, 81, 36, 115, 47, -86, 102, 91, 21, 120, 37, 28, -39, 114, -63, 121, 3, 32, -70, 59, -97, -109, 4, -71, -47, 6, -95, 34, 77, 67, -34, 125, -124, -78, -85, 102, -32, -82, -84, 14, -48, 104, -68, 13, 38, 64, -66, -14, 78, -5, -96, 126, -125, -106, 60, -13, -3, -58, -9, -59, -65, -41, 87, 50, 34, 95, 74, 2, -12, -78, 54, 101, -60, -74, 30, 14, 14, -43, -31, -48, -10, 84, 28, 103, -42, -118, 40, -11, -104, -98, -40, 59, 36, -107, 72, -51, 109, -72, -7, -69, -70, -45, -3, 45, -92, 68, -90, 111, 15, 2, -82, 119, -28, 10, -110, -99, -38, 96, -54, 2, -18, 113, 51, 85, -107, -34, 5, 53, -91, 99, -108, 122, -116, -74, 102, -13, 124, -109, -86, 70, 15, -105, 85, 9, 79, 120, 1, 17, -50, -72, -41, 15, -127, 64, 43, 102, -10, 47, -11, -126, 47, -34, 4, -81, -96, -13, 42, -81, -52, -128, 94, -84, 4, -92, 55, -14, -42, 88, 118, -54, -5, 66, 111, -7, 100, -32, 92, 9, 50, 71, -82, -12, -1, 98, 33, -116, -83, -18, -34, 31, -9, 69, -39, 86};
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
    msg.setTimeStamp(0.5915615654928157);
    msg.setSource(26019U);
    msg.setSourceEntity(209U);
    msg.setDestination(9590U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("WRTDACECOIRHNKGJZASDPZPFNAQHKHSGRVODLIRKZHRLZHVPFRSODMNOPUTFYEADVLZXHMIYZFDXMMNGJVBLBAVYLQMTHHLFEENKOXSIAKNUOZODTPMCGCZCUOXGXAEIXMWUVPBCTBQCVUELPAWXRJGTPFQFTSUJJNALUMOGHQKKGYEJYYIVMRKUVXQLXTEFTQSBEWZEJPPWYRQKA");
    msg.plan_size = 63378U;
    msg.change_time = 0.013691925458591991;
    msg.change_sid = 1494U;
    msg.change_sname.assign("ZHPEWTYCJAKXSMEQZRCPIEISSPAUGLZFYDVXQDZMUYPONFTR");
    const char tmp_msg_0[] = {14, -98, 19, 125, 76, 106, 8, 72, -79, -77, 33, -120, 84, -45, 96, 15, -77, -51, -78, -67, -19, -12, 64, -56, 14, -111, -122, 115, -121, -75, -93, 79, 26, 65, 115, -68, 107, -55, 92, -19, -108, -19, -120, 30, -22, 94, -75, 73, -95, -59, -88, -81, 98, -61, -3, -63, -126, 58, -36, -25, -45, 50, 86, 73, -42, 62, -96, -29, -12, 126, 85, -91, 19, 48, -59, -57, 100, 117, -53, 123, 91, -45, 34, -82, -85, 4, 46, 125, 104, -41, 49, -80, -12, 20, -48, 89, 53, -27, 7, -59, -104, -42, -93, -3, -57, -114, -16, -70, -56, 84, 76, 91, 58, 39, 112, -4, 95, 95, 60, -67, -115, -61, 63, -43, -35, -67, -114, 107, -71, 125, -35, -10, -81, -96, 101, 110, 96, 87, -91, 109, 25, 31, 9, -1, -116, -126, 76, 54, -113, 35, 31, -101, -72, -106, 49, 26};
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
    msg.setTimeStamp(0.22548242818189768);
    msg.setSource(25605U);
    msg.setSourceEntity(30U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(114U);
    msg.type = 243U;
    msg.op = 153U;
    msg.request_id = 11930U;
    msg.plan_id.assign("YOESJAXVNDCTLPZBTHLOSYDWYEMCONIGBMPVQCHMAVK");
    msg.flags = 42530U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.2764247581063015;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OOYGKSZAIGBAGKCYIWXTHJSVSXCZUVURECWJRICGCBWRZWMMNMHHFWXXFLLLHZEGYWEEUILPICZHYTFDBDKOMOQOPOFYLGYKJLPEJGHAJSNXDMBBDXNQPHQIYNQFANVIIBTJRBTZTN");

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
    msg.setTimeStamp(0.9429661483796049);
    msg.setSource(55956U);
    msg.setSourceEntity(42U);
    msg.setDestination(33869U);
    msg.setDestinationEntity(142U);
    msg.type = 240U;
    msg.op = 148U;
    msg.request_id = 48429U;
    msg.plan_id.assign("DBEHTWWAQYUMTIBOLFPBCPVAUYZJIGQJINUOOMTAXFZKFBLCNAOFMHBDRRQWMVFSKCNXBNSBJPOXSJVYMKBBTEJVQHQWAEMSUQPLMAEWRSPDNELYZFMQRCIV");
    msg.flags = 48406U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 183U;
    tmp_msg_0.entities.assign("AIRQIKRYOWBSEOJZGAJYXBNLDBZGQUJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HQSRVWBGHTHHLHADNEEEBDWPYWYAPMCFNJTODVHFYTPZWZNKLTECJZCKFFQGYUGXTSABXMUFUSOMCOVYAJEYSLVOXULUDPKUXILAJVKUOLOTLDRQBJCIYBJABQKVDUVCMKFGRFENZYCXYXXGOGROJNRPXTRZWSQUEKMQNJIMHRMCZMREBADIAMONSSWEIGQALSWZXLBJVNDHATIDXIPIDMCHGYHGPTZQVSTIKEFKPNGZUIWQFKOB");

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
    msg.setTimeStamp(0.10227640839682939);
    msg.setSource(53467U);
    msg.setSourceEntity(188U);
    msg.setDestination(14070U);
    msg.setDestinationEntity(9U);
    msg.type = 225U;
    msg.op = 26U;
    msg.request_id = 48034U;
    msg.plan_id.assign("FBOPTMJFDNEUXQAWNRZMGZHNTCOPVHPILDGFRKTSELPSVWJVPJRSEQAHTBHJMEUOYIEFYHMXGUURSBOMUHXCXKUAIKZQODRWKTFDEJSPKYLAWVKRABCEOZLADMOJGVOOFDSZWQXVTZAXWBKLCJMCTIVACXELVNDNEOGXBWHLCNJDNZIYBYBNCIBZYGQPIRGAUFRWYQTFDIKJQSUUWIPRYFZ");
    msg.flags = 33372U;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 141U;
    tmp_msg_0.name.assign("DJJKJXYIFJYYFZRJQBWGNJZHPMSXMONEVMQKWUSHMDGIRBWMLHGLVQYMOCGPUZQXOEGSSKVMTEVWXJPTCRQUREWQPIHFZVOAOGNCOBYDKKGFZYDULGUFZSLBFQWNMBLMIDUVLYZNOCSNPDFANPBZLRTAZAO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DZKNEHFGSGCNXVTOINLOLMPBUUOKTVFBTCEYTZGJQIBXXYTWPHLKDLFQCJGEXHJMWXPGMYVRPWIDGHDZFRVUWNIISBIQAZWVIRKWQVKKAB");

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
    msg.setTimeStamp(0.9628729275429038);
    msg.setSource(43231U);
    msg.setSourceEntity(225U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(91U);
    msg.state = 110U;
    msg.plan_id.assign("DTKGUGCCPXNVHQPPRCOQEQWGMFQAVERXREESXSZAEUXNTFJVQQXQTYTLIQGFMUUKPWNMPYZHCOSSCAEJNFDJLDDTXOTWZLKJ");
    msg.plan_eta = -907267193;
    msg.plan_progress = 0.9266776968342905;
    msg.man_id.assign("JEAYHBFMMOBDTNZTQRIVGSTAOWWKYGZBEANOBNJCKNFLCSGVIVBX");
    msg.man_type = 45526U;
    msg.man_eta = -2146051924;
    msg.last_outcome = 200U;

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
    msg.setTimeStamp(0.7840116113867325);
    msg.setSource(46039U);
    msg.setSourceEntity(96U);
    msg.setDestination(28103U);
    msg.setDestinationEntity(141U);
    msg.state = 202U;
    msg.plan_id.assign("TSFGSUELYVLQKEBXEFGOMNBPWRZKTNUSWIGEZQGJIONKUVJFZTHBRZKU");
    msg.plan_eta = -1358236744;
    msg.plan_progress = 0.4522316943894583;
    msg.man_id.assign("AWEYMIFQHLNAIEDLVVQXBFVPJFRQLVKXFZBELGOHYOZXZPAUZHIPKDESOVSAVHPTNISHUNYHZKSICDJRLTMMWYJHQDHXDGBDILQUFOYFMTJFPQRGJTGLNEDOJFAFWVEXXSEOCYTOKCBRHXTWWLSCAMZOWSTPUVAIYAWNUEMNSYRCUUG");
    msg.man_type = 1865U;
    msg.man_eta = 898079042;
    msg.last_outcome = 68U;

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
    msg.setTimeStamp(0.6943996312605827);
    msg.setSource(4824U);
    msg.setSourceEntity(173U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(91U);
    msg.state = 99U;
    msg.plan_id.assign("ALATVSOXPTUSFJSGQAOBJCIYSAQFFTBZFNXLCYKVFSCHVBGFNXJUGXRQXUVDKMSLRPCMQSZUUZATDXVCRNHDPPRGIIGBJRHODTLMCVNDMWAYBTBWOGKFFKEMHNGESBQW");
    msg.plan_eta = 1633829402;
    msg.plan_progress = 0.8465872382113788;
    msg.man_id.assign("RYXCFCLITSTAOECWLYRUVRJPPYZEYMXANBNMPHOMFIQAMGYWVRHEIDLJZHORKBJXCMWQDSYLLLFOKUWPD");
    msg.man_type = 50025U;
    msg.man_eta = -117182370;
    msg.last_outcome = 92U;

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
    msg.setTimeStamp(0.9101864549924197);
    msg.setSource(46741U);
    msg.setSourceEntity(27U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(221U);
    msg.name.assign("YHMTDAGKWCOVFYCVCMSWJIACLTZKNAPOXSNSIOZLLBPNCPAMEODMYTBYLXDQXJYXYBLQLLGEKQARSHDZUGAXNJZSNSJQFDHTJVFXJOUBRVZCIKEMOWLOTHZHQRMPWRZ");
    msg.value.assign("DNIPHEHJTKPKDXRNYKEZQVLOMEYCWYUJFVRNXZCCSFVMQUHVZFTUBOJQIKUWWLBXICSNNXUBTQTSLGYMJOAFVXGAIFUVHSXNFJOYZBZBODGGSWDCDYDZSTLBRHSJNQEFSCFT");
    msg.type = 144U;
    msg.access = 231U;

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
    msg.setTimeStamp(0.3123148775772717);
    msg.setSource(51546U);
    msg.setSourceEntity(40U);
    msg.setDestination(37800U);
    msg.setDestinationEntity(39U);
    msg.name.assign("HICJWVOMKGTNOPMPCDEHQGUJTUHLSNSUPXRCPBNTDZ");
    msg.value.assign("IRVNQNRAGGNDXOFLWOWDJSCTVYEWCXRQDAHLLPPUPCRMLCRRUFEXSBOEYETDUQGZZJTXCZMGWVMEGCPHOVCDBUBJHARYWYBZQ");
    msg.type = 11U;
    msg.access = 167U;

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
    msg.setTimeStamp(0.5112237557734346);
    msg.setSource(23833U);
    msg.setSourceEntity(165U);
    msg.setDestination(434U);
    msg.setDestinationEntity(178U);
    msg.name.assign("SNTNCPZGBDVRHRJLRXDYXJEJTAHPRSFMCBLBTEWCAISFQYT");
    msg.value.assign("YAPQJXLHUJZBXAUMFDFVNSROBWWBQPGUJWMMRQVFXHCOMWRATWGPFBTFTSGNPBOEVQNMHAACCWSYXJSARYKAUOOVUZNLXKOQTRXUOLULJFBYFEHCCKEDAPFPQWYZYIXCOZEGTJGKKEGNDBVVUBZWGRCHCGLNCNDNIZHMIQTRZWPTEETLEKSZMSDOICADVEVIKNTGBLISIHPVPQNOJYMYYFSIUHTLKIDSYDGDLBLSW");
    msg.type = 56U;
    msg.access = 79U;

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
    msg.setTimeStamp(0.9637611823328347);
    msg.setSource(50730U);
    msg.setSourceEntity(55U);
    msg.setDestination(62426U);
    msg.setDestinationEntity(31U);
    msg.cmd = 73U;
    msg.op = 142U;
    msg.plan_id.assign("QNIJCKTYWKAYKJEUBSEQHBTIJTITTGWRFCHBOCYTCIMETOQROQMYVEKPWCXVOSLHNSASJWYWKMAHQZARFMAVJBREVEGLUJZFBXAPQOPXPLWVCKPXQESHDDTJYAAMUBNTIZSKRGDXDYWPNCQOXWTHOYNNLBFUSJDJUZVKLNFXDGXLCGFAAGFKGSFZZGRQFGVINBBDELRYRNZRVLFDLBXIRUHPMHU");
    msg.params.assign("UYNBOARQCKVJYABMSSDWHWUBRQUNGLXEDMWBGUTQMUNAFKZIMGICBMPGCWLPOJKVIWDPAUDYXMKBJSKXFUQPIEFLTFTXYCKXOEXCJZVMPZVSRNOTLIPPMNFGV");

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
    msg.setTimeStamp(0.21662372717439493);
    msg.setSource(4761U);
    msg.setSourceEntity(141U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(143U);
    msg.cmd = 43U;
    msg.op = 6U;
    msg.plan_id.assign("KUZYRKWSPDRUOEGOGGNKFIHSZITHTSSLDLSSFKJBXJZEUXXVGWFDLIWYGCBLTKBZPPRLHCA");
    msg.params.assign("WDHOXACTRIHACDYYXQWXTBGVZEWPUTGEEVSGCBDJPLLDNYIBMUUIZILIAYOTFFHBMLHMVHRFEMDWNESLFAUCOTNS");

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
    msg.setTimeStamp(0.12173578328424839);
    msg.setSource(1142U);
    msg.setSourceEntity(100U);
    msg.setDestination(34712U);
    msg.setDestinationEntity(61U);
    msg.cmd = 131U;
    msg.op = 172U;
    msg.plan_id.assign("CUVHLITUNQWTDPNIVROATBQFGGEHPUEZBJNFMYCIASCCITQAQFMSAZGNLCPPRGPCWKGRDXAXMEPSIHOLJKSTLNQHLWDSKCEEIBXHBUVBADEHGNZNPIWRAXYTXJSXOIPOSDBFTVYJOJXPGQSQLIZYUKYRFKTOMLBAMXKDFMHUJNSHVKOWVFHAYKRRUZDZDWYOYZIDWRCCDGOQXOULGBMZZNYLAFQRXVMWTFVJEFVQTWECNPJBSUV");
    msg.params.assign("ARNVICFIACCGMWODCAOUBMBDZWJQFGYALUDIKHHXNYRLWUPRAYFVHGXBUXNFMOLLORWJXAEFWIJEIDPCQKKFCJEKTKSGSHSFGYTMHJU");

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
    msg.setTimeStamp(0.2958940490974198);
    msg.setSource(8654U);
    msg.setSourceEntity(205U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("KGQOPIILOPDBVDDGMXYNNUESTBHBZRIVIJEKWVXEBKIYSNYUKSUXQCEDAEKTJXVMPTKRLGBAVSZ");
    msg.op = 184U;
    msg.lat = 0.5424292567752553;
    msg.lon = 0.8377638513379531;
    msg.height = 0.0038416951565397595;
    msg.x = 0.49974933315770553;
    msg.y = 0.8437014423991962;
    msg.z = 0.9654892397473888;
    msg.phi = 0.14557176668778338;
    msg.theta = 0.29990812531882205;
    msg.psi = 0.18019615157911517;
    msg.vx = 0.4145267903138814;
    msg.vy = 0.08155003280723572;
    msg.vz = 0.036456122743802055;
    msg.p = 0.22035506331866328;
    msg.q = 0.3388477648646584;
    msg.r = 0.45777461400407027;
    msg.svx = 0.542503408766618;
    msg.svy = 0.7138113117272403;
    msg.svz = 0.41693752161542985;

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
    msg.setTimeStamp(0.5099304102955126);
    msg.setSource(56021U);
    msg.setSourceEntity(130U);
    msg.setDestination(50880U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("FJWPYCAGXOPOKBHVQYEHCGQBGIIPWKRLLMZTULRHOEORADKQUMARXGWRNEADGMIGZEHDPSUSBX");
    msg.op = 78U;
    msg.lat = 0.9861141408965299;
    msg.lon = 0.9502920470959594;
    msg.height = 0.9952119424445078;
    msg.x = 0.7179758535265772;
    msg.y = 0.9683202493766109;
    msg.z = 0.30331431271197884;
    msg.phi = 0.8945396072526662;
    msg.theta = 0.9528138765657053;
    msg.psi = 0.20794606726040288;
    msg.vx = 0.5310584626682561;
    msg.vy = 0.5818029901097215;
    msg.vz = 0.5281914835077949;
    msg.p = 0.24001389235879234;
    msg.q = 0.6954679806419389;
    msg.r = 0.29388716514017443;
    msg.svx = 0.5721084197978596;
    msg.svy = 0.8327538259243772;
    msg.svz = 0.0693722146848752;

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
    msg.setTimeStamp(0.6354675128827132);
    msg.setSource(53065U);
    msg.setSourceEntity(116U);
    msg.setDestination(30208U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("PZTDUIBJRVYUNWMYMRFRZXXMTUDVHDYUHZOPCJDWZAXCMTQAGHSTGJUPWGYLOLNUESQYKORGXIQQZKZAOOQGIJYDSSILFBQMZUOCSFOHKKFKNJAXCHAEMIXSXJTSGJURTBLYGNVWMJARWHDCXLMCCBIRGJDPFUPLAQWNALMLLWPPVBHYYCXVQEBIHBOONEQBNNTZNKZEVKEVTRSWRKWIEWFSBFDBRCHCDVFATXEPDUEPIEVKKPMAINOGT");
    msg.op = 62U;
    msg.lat = 0.516840381345249;
    msg.lon = 0.45944945353592614;
    msg.height = 0.09467241363433498;
    msg.x = 0.37078522615306975;
    msg.y = 0.4329729902724103;
    msg.z = 0.861069464094011;
    msg.phi = 0.7394416729816659;
    msg.theta = 0.09093218536751657;
    msg.psi = 0.8700713050732167;
    msg.vx = 0.6791793753428013;
    msg.vy = 0.8971716121035095;
    msg.vz = 0.7116739014440071;
    msg.p = 0.7798903091176974;
    msg.q = 0.3051559478612822;
    msg.r = 0.5814712868864534;
    msg.svx = 0.42858950431575615;
    msg.svy = 0.8370005031445085;
    msg.svz = 0.48087473712526196;

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
    msg.setTimeStamp(0.9064804351078491);
    msg.setSource(61295U);
    msg.setSourceEntity(207U);
    msg.setDestination(62559U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.2750390249336385;
    msg.lon = 0.138470398837381;
    msg.depth = 0.42654998482894546;
    msg.roll = 0.23850869574105926;
    msg.pitch = 0.04382444852392586;
    msg.yaw = 0.2598190764863767;
    msg.rcp_time = 0.29060072928199987;
    msg.sid.assign("TQCFWYQRHEZHFJVIPIT");
    msg.s_type = 223U;

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
    msg.setTimeStamp(0.026620820904009745);
    msg.setSource(38332U);
    msg.setSourceEntity(169U);
    msg.setDestination(1595U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.09899303212984734;
    msg.lon = 0.9628142418787797;
    msg.depth = 0.006000921167728102;
    msg.roll = 0.4746561305021646;
    msg.pitch = 0.6228346164545798;
    msg.yaw = 0.6018967458598534;
    msg.rcp_time = 0.05059206569526431;
    msg.sid.assign("GTOWNUMIRSTVIJZNDMADYCBABAVEVFLAEUSNOSBWHTEGQHTYBXKMIPAVVWKULOSLQ");
    msg.s_type = 206U;

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
    msg.setTimeStamp(0.35084794116254225);
    msg.setSource(8393U);
    msg.setSourceEntity(212U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.9758716397683834;
    msg.lon = 0.27953549000998223;
    msg.depth = 0.2140549525202109;
    msg.roll = 0.843822267624582;
    msg.pitch = 0.04525550791179578;
    msg.yaw = 0.9435685458788334;
    msg.rcp_time = 0.07388247966604977;
    msg.sid.assign("NTOXWOMXUZHMTWIQOSGKDQZWIRNFBPCTYSMQPJASSZAFNKTVFCTLRAHWNRYEBYVMBVKFDAOCPXILBKDUMHJXDCYZIAEJRUSHZEUGTPIUPNTLNKCTLZIGQZEXROIERQJAJTFUHCORJLCQLDYPXVDWSIQLZUWLNJACDLHIEGUBVGBYFKKXMGFYMEFGCVDVZUBRMCLDSZVRUHPEQSHNKYNVOABDFJFO");
    msg.s_type = 190U;

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
    msg.setTimeStamp(0.21995077663005813);
    msg.setSource(31409U);
    msg.setSourceEntity(118U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(239U);
    msg.id.assign("HGYLOACTZTGQOXOVXURSDWXWLZJQFMKCIGZJPLEIONVATTUPFIVZDKJUSSVJQ");
    msg.sensor_class.assign("XUVCSKVZKZZBLMFZIEDWSPEUDRPWAMGAIXJRNHQLMKUPSPEFNIRTGRUOHOQVODILYVSSVPZHFMXNCHSVODZXBAQAYXJWKOBWAASZDWBYUJQNOZHYLUDUXIGITMFMHGAHKRASUNCQZJBHRGOOBLEMCTWWROPXCGWVEPRYCRGNCNBNTMEOAGYCTYNTYQDFQIPVCKKJKFBVYSPJS");
    msg.lat = 0.7329438907617457;
    msg.lon = 0.049694053452566944;
    msg.alt = 0.0858505896533579;
    msg.heading = 0.6120762129157225;
    msg.data.assign("VMYYWSFDWTZTYDKYOUTDGUJUPRMOARASLWTXIFBLNEPLSZMKGRWOIWMESCODLHULJWZCPCRNUVDQRGCVBZBNVGFENMOBMHRJGWCPWTIUPASYUNBFMVBVBTAINDYEGYPHVXACTNKEKCWNPHGHKXWCURITJGRVLUQRHOMESQKNXOIXEFFDZQSAAHSZZOKBXPBJQDEZHNSIQPUSLJIHKZFJFKGMVQPFXIXXTJLVACHQ");

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
    msg.setTimeStamp(0.28758603131368854);
    msg.setSource(35637U);
    msg.setSourceEntity(91U);
    msg.setDestination(1656U);
    msg.setDestinationEntity(190U);
    msg.id.assign("VXFNZSFRYPAOHUCCVKCFWHHIQPBUSPZDUMX");
    msg.sensor_class.assign("RFZMTAJPGTDZDSVJPSJUKAYMZNIFNYRKPNLKEDEKJRBGNCIPWXDUMVEFCOVBNUFDHGZJZVXAQOKGUFYVGPLYCLNZIHGLHTWURPKVXTHSN");
    msg.lat = 0.09589672759857815;
    msg.lon = 0.7337054306397216;
    msg.alt = 0.6654405765335321;
    msg.heading = 0.5187394966271712;
    msg.data.assign("NWMZEWPZCYAT");

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
    msg.setTimeStamp(0.2929261811134364);
    msg.setSource(18723U);
    msg.setSourceEntity(160U);
    msg.setDestination(44923U);
    msg.setDestinationEntity(116U);
    msg.id.assign("QPTYMSTNYLELOCFBXGQOTFMOVPZPQWVEHNWKKAHZGLSWEMHWBKTVVMYJTQADCUAICSJAXWANCRYNGUVUF");
    msg.sensor_class.assign("TVIFSROXYCLPJUNSJUMSZWAERESIBWNGZJVHVCTBYFGABPMRQGAGMRNFXNRBXEWKBUUDSORTDPYXLLQEAXXHVKDCHOINODMUQBWKLIYRFYIPPXZWHVJDXAFQEVCOLJKLGEMGPQGNKCIUDVGIHYHTSZPWQRSHXEWMZXDWAMCOBFIHWRGJOPKTTABTGNFHNBJTCZTKESYWURKDNACKJSIMNYDUZVFABDJOFJCZLSYMLHCPUOALEVMEQOZP");
    msg.lat = 0.8312542042771981;
    msg.lon = 0.6555082041692903;
    msg.alt = 0.043353641006733334;
    msg.heading = 0.2592649950273911;
    msg.data.assign("FFVIDIMLUMBGOTXDRPDBCVHAINCYGWYDSRJGGLUMRZDDLQWJTVMLBLPERQNTHAPSWMXAJIFQEGUAVZGLJUXPPCGBPUQEWQTVLOQNYMDHSCJKYICHSUDEXYEAMKTAYQWJMGIDFKVCZSOALITEENVXOHHSRVIYSOKEFRENKCNWBUUKCNJWKZZRRRWNHBYB");

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
    msg.setTimeStamp(0.7271628716834106);
    msg.setSource(65148U);
    msg.setSourceEntity(195U);
    msg.setDestination(29907U);
    msg.setDestinationEntity(244U);
    msg.id.assign("BODYIOMDTJGPQPUSVUVZZHXWQDWNKQUVGOGQOWXEAXFYHTBECPOCECOFTWKAJIXXASGENABIFLYZDJRSQUUSEFAPQOQHNXSQKBVUYTCFTVXOBZNORKMAHHIPUIIZFLCTVTWVMUZWLWBBLRKFMXKPCFEYDPAKMJBSJGQNPNMJAHX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VBJPBVNLGVRVHXWOMUQAGODBQ");
    tmp_msg_0.feature_type = 132U;
    tmp_msg_0.rgb_red = 116U;
    tmp_msg_0.rgb_green = 215U;
    tmp_msg_0.rgb_blue = 155U;
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
    msg.setTimeStamp(0.46902375407206987);
    msg.setSource(18637U);
    msg.setSourceEntity(215U);
    msg.setDestination(52757U);
    msg.setDestinationEntity(131U);
    msg.id.assign("OAPMTVFSLHQBHSWOFEKSTTOTGETKJLYJIQCZCVINDPSJWUONFRJRRGGLDXDNYKZZXDCCDNYMGIZXUUXFVMEHAVXZBNWADUENESMGAVUSMGKEJMPLCECRWSKKMRTNPQYCKDTNPTGARARVTWO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RTSKTXOGQESPFUCGXLGTAVPDYGZMZHFVXNEVPJDOCLNNIEBJHAXUAJUWXAICPKGWSLZWYNBBMKFTNZZOOQMESYHQHFQAQOJCDMDMTVTZQSPMEUOCWYUGQHCPDMFDKRZKQYVQSARETMWXDILNUPPRFTBNJCCFSVHKSRLKGOYND");
    tmp_msg_0.feature_type = 111U;
    tmp_msg_0.rgb_red = 113U;
    tmp_msg_0.rgb_green = 216U;
    tmp_msg_0.rgb_blue = 87U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7328043813073654;
    tmp_tmp_msg_0_0.lon = 0.29854215774132165;
    tmp_tmp_msg_0_0.alt = 0.7676895417990122;
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
    msg.setTimeStamp(0.6857588332408586);
    msg.setSource(23851U);
    msg.setSourceEntity(0U);
    msg.setDestination(60060U);
    msg.setDestinationEntity(233U);
    msg.id.assign("VBPFHFLZSGKUXYKWAZCTVUBWUZJINHMHSSVYEXHERSBIBHRVYOMJSREBJRKNFAUDERJFPGZDVFHD");

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
    msg.setTimeStamp(0.3149622628369171);
    msg.setSource(45232U);
    msg.setSourceEntity(105U);
    msg.setDestination(33167U);
    msg.setDestinationEntity(30U);
    msg.id.assign("RBIAEQHBJEFINWOPVFADSTRZMOQOHYOGFZLQUNWMZWPIPBIDWJIFRYXXUVJMETMYSNPPLEORTXWMZHIKZJXXKCFUUGQEEWDBXAXLZ");
    msg.feature_type = 211U;
    msg.rgb_red = 148U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 209U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2054893179667615;
    tmp_msg_0.lon = 0.8694792276804477;
    tmp_msg_0.alt = 0.9815528020543044;
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
    msg.setTimeStamp(0.3864476819249627);
    msg.setSource(60719U);
    msg.setSourceEntity(196U);
    msg.setDestination(27476U);
    msg.setDestinationEntity(27U);
    msg.id.assign("FFNVLYHPOYQQVRTWYDKKEGVEDALWUYZZYMMU");
    msg.feature_type = 59U;
    msg.rgb_red = 11U;
    msg.rgb_green = 120U;
    msg.rgb_blue = 52U;

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
    msg.setTimeStamp(0.3759876058288435);
    msg.setSource(32033U);
    msg.setSourceEntity(43U);
    msg.setDestination(11752U);
    msg.setDestinationEntity(70U);
    msg.id.assign("SKMYCXPADZCGZXLBNEZUZGCNSGDOKNMUPDJVWWQAXKBYHEIQNIBJBWADLQHNVLOATGHJVAXESKUGSKVPLCULRWZWGZYCAKETKEYHVETNIBZOYURAJIRNMQPCYUFUXGXPSMDBFJBAWHTBKGBOMQFDQMILHBKWHIXTVMJHSJTHZPFTORMOSUARUIVUYWDFYRXFORDNEAZYEFJVLPZTOWMSQRO");
    msg.feature_type = 103U;
    msg.rgb_red = 248U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 45U;

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
    msg.setTimeStamp(0.5513934950021196);
    msg.setSource(51507U);
    msg.setSourceEntity(128U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.06588468213812093;
    msg.lon = 0.5196580894773372;
    msg.alt = 0.1262923165775035;

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
    msg.setTimeStamp(0.8063047069466208);
    msg.setSource(9846U);
    msg.setSourceEntity(51U);
    msg.setDestination(1706U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.485475515996839;
    msg.lon = 0.03198532941252308;
    msg.alt = 0.6977895233967029;

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
    msg.setTimeStamp(0.4587299685055266);
    msg.setSource(11089U);
    msg.setSourceEntity(221U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.18706119775982988;
    msg.lon = 0.8493017983856631;
    msg.alt = 0.9265190204803472;

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
    msg.setTimeStamp(0.298488940896367);
    msg.setSource(56520U);
    msg.setSourceEntity(34U);
    msg.setDestination(17230U);
    msg.setDestinationEntity(25U);
    msg.type = 140U;
    msg.id.assign("AXMYOTSMEQVYJURZBPBIVPWINXZLMMBWPKTXUFSYWWBDDUFQGTXXZRRKUOVLXYASCDVQTDEKQJSZJVRVZJZIAPYCARXCZKXFQCHZIONIICRIHACFDWPDYPYWPCVUDWOJMA");
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("QOXBTIZJMLGMYFQKLMSYBXCCSXLAWIKMKAVZTVJOFKUEFBXHOYGUPTXZWJDELQNOQDSSHBOASCZCLUYRLDDWHQJONBIEHTHUVZALKWZOJRKVYPZRTDLFVCIGCNJPIQFFUBEPRLPXJYGTVUEWAOGDEMIWWYRTCQ");
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
    msg.setTimeStamp(0.740698871859355);
    msg.setSource(57854U);
    msg.setSourceEntity(39U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(213U);
    msg.type = 41U;
    msg.id.assign("HWBGJTDALDCCFRMZFSRWLZTVMEEFWJUZYSKKTPWAJNQRMBIZGLAFJWOPLZUPNTKRIPLZKSNKVZWCIMVECNKFNAQOHNQEHXFGJXNLGFXIBSDHNYLVSISKJKXHHTXXNYYVUFATCDROYLMMPEJJJKEPMYBCGDMACRPVFVIZYRLYDBTEUPRIHMQBBQQWDVSTUXALIUHZ");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 3248684010U;
    tmp_msg_0.id.assign("DKULPRZWXREUATVZTCKEUHLPAQYJIQMMDMSVMBQHXZBHFGJTGJABJYEWDSFQGBRPHRUMLSYNUCWNULYALEHVCKGRDZMOZJRXFNBSXTWPFOXWVWGAGLUYJHUMERGKCDPJBIBXGQYPXZIHCTJSCLNSLKVOZVOCIIVATUCGDZWKOCXBEASFPOLFICEGTQWJRUAMD");
    tmp_msg_0.memento.assign("UDOZNFYIJNHCWQNZXNMZGGTQYSHVXGIJXCJDLMQBBNCSFQRDDARATALRBWRITIYMDMFWQHPJOYHSVOEAEODZZWAWGKZIVBQIOPEEMQUSPLFLFTLCIRNSUYMBTCVEOKQSIGZUCFKHXBLRUDZJWDGXMCAEAUDKNLAKXNNBABOFMXFSYYQPGSZFPLMH");
    tmp_msg_0.timeout = 44088U;
    tmp_msg_0.flags = 214U;
    tmp_msg_0.lat = 0.6126273878618818;
    tmp_msg_0.lon = 0.31083782651031766;
    tmp_msg_0.start_z = 0.26996303646299225;
    tmp_msg_0.start_z_units = 77U;
    tmp_msg_0.end_z = 0.7166141856171591;
    tmp_msg_0.end_z_units = 221U;
    tmp_msg_0.radius = 0.39282119445379826;
    tmp_msg_0.speed = 0.28739772937401653;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.custom.assign("JRLDFWZXWWNJWYNQXESQFMWEEDZD");
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
    msg.setTimeStamp(0.3189652929409664);
    msg.setSource(55167U);
    msg.setSourceEntity(97U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(0U);
    msg.type = 207U;
    msg.id.assign("QOXBZOYEGLZGPZRWRAAHXQKJSWWPOEDHSFGZGWYTYZUKAAKLASDAZBKPICGBUCKRCJQTBVOTSOIAXMJDHMKZISVSAXMEMWNZFITDGDEMEUVMINCYERLCTJQCRNEAWLJVEPJQVRWDLPDILYITINVTSPGIHQUNZHFVWFGYJCPDHJBFQBWZYCKEPUSBXUCXLHFXQRLSFMGOYHDXNWFQOOUJVUYDVNXTEAKF");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("IOIJRHSLHKZPJEEBFWKNRYFCPYSNQALGYM");
    tmp_msg_0.sensor_class.assign("HCWSRLJFOLUHAKCNQQWMOHFDDKAKYSCLIGVDJDPGXVNTITIUIFFRPLBDLWBDXMUTIEUZUODUXBFFYMCZYCQGNEFUEHMQJXBJWMFESEUEPGEIZVBGDNVAXSPOCWQWZIYNJBPGQCMCIOMAXGNIKJGAWOPYVHUGXZOQFLR");
    tmp_msg_0.lat = 0.5661763715116332;
    tmp_msg_0.lon = 0.884932751635639;
    tmp_msg_0.alt = 0.9288885759915861;
    tmp_msg_0.heading = 0.7433257625775568;
    tmp_msg_0.data.assign("EWNSFOEPEURHBFHFMOTQOSCHPQPOEHSJKBCYQBHZAAYVUJYUCRSUJMMJEZBLSOYDXHATQXIXQRZPVZIPWJKMFNFCILJKKJXLBMNXVWHRAYKTHVQLSVWSZQPFZVOEMJSZSBTFGTNPIAOUTGGCAZ");
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
    msg.setTimeStamp(0.0934982191268805);
    msg.setSource(17138U);
    msg.setSourceEntity(245U);
    msg.setDestination(14366U);
    msg.setDestinationEntity(160U);
    msg.localname.assign("SJUKBBKTJYDRDMO");

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
    msg.setTimeStamp(0.4386446161095645);
    msg.setSource(50424U);
    msg.setSourceEntity(53U);
    msg.setDestination(3752U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("ZMNMIVKJUVWQXGJTTSLWVUPTLNJYFSEHUHZYQUUDACKBUAEHLRXKCOPSDZZEGFLENODVOKBAFWHZSGRMWAOOYXRJDRPCXCJVMBTXBIBWD");

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
    msg.setTimeStamp(0.07853872186693633);
    msg.setSource(29859U);
    msg.setSourceEntity(26U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(204U);
    msg.localname.assign("UKCZMNQFEHLFVAPGYEWMZQSRLKBZGUUSAHKCOVIZDGMDMINOECGKNMEZAVOTUDYJXKAPHDBOLXQNSABY");

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
    msg.setTimeStamp(0.14635148648403506);
    msg.setSource(17768U);
    msg.setSourceEntity(227U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("YECWEDYACFXKUVKZSDZYOMCIAOVXIMOKDPXRAJODLPFBHZQUSNU");
    msg.predicate.assign("XRXVMLSSJOVAZBBTHNVJVQRSGELRFNTAYRTPLIZHTNIUFTADWTPPKGXXESODWZMURZAWKUQOXEKDILGKONZJRDKYCPEAJSNHHZKDUUFROCYFBYXYDQPNBWOBBYHOSFCECIMVKQUQLAFHWPHNBAVEWWCWKUZXJJTPXHMQIPXQDE");
    msg.attributes.assign("HFRPCSTEGLECRMVXABWVAJKHROJEUYXNHKMUHFGFZZEGYZARMMOJZIQBHPTBZWGIBQDQTQHHSCIODWKRPDXGBPWYCCNMNGFDBXXPGOZIYYCHYLIAQCAEFOVCTXQNGNDOZBZBBAPTTDUNKUPOUPJQELLADETXAR");

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
    msg.setTimeStamp(0.9972090343630156);
    msg.setSource(52626U);
    msg.setSourceEntity(124U);
    msg.setDestination(18130U);
    msg.setDestinationEntity(153U);
    msg.timeline.assign("FRVDPMYBSOFZAWXXZMADLYHFSIIBSCZNNPLTSCPGHCKKTDYMBXEUOMKIGQDWRTSMDOPVTXJHBUQORMJPOCAUCNXOOYEREIUVFOBIRDEACWVGOJWPANPXRMRTBTKBGRLLSWLFPVODVESDTLXWGJBHNYWKHXEIVLNAWPSGNWGTKKFVLLZJYQAQGNYAZHZYEQNZUTEJUGFCAQCM");
    msg.predicate.assign("LQXTBFSXODXZVJMHCESWFUIYDYVJCGQSOVVTFZRHXGKTPTQFLPPNAQYRHGCJKAUAUDOIWJTMHQZHHIBHARONYDEINNMESNVMJESGVPMFSQYYDEZZYJWGKVOQGURRTDTRKNJRYLBFBCUJXTAZYDNQIKXGJVPWCSZAASL");
    msg.attributes.assign("LXTEPPOKDYGCWTIOMELIWTZHTSPXMIQLRCGHJZOKNYBRYIBQBALOUVMZVNMVLJWMTWESPHWJXHGVTBBCFNXFNCNHIFFWKEQGDLAJTYOPPIXUUIHYIENUWDIAADFJZSKNOQ");

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
    msg.setTimeStamp(0.22836554936577513);
    msg.setSource(53317U);
    msg.setSourceEntity(157U);
    msg.setDestination(51647U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("NYNYKADDASXMUXCGBWJQXLFSLDPNAJDYIEYCMWISYBNAMOTDYKXFZNSRNHXHXLFTBVTGFNSHRQRIMOSMPABWWSDLCKHUBWZOFBGPQSOAHIZMXYJCETTQWAHRLKBWYUEEJRCZOWPOVADVNHXHJGZKVZQPIBZSKQJQDERJMXALGOCNVJEFRZLFPQMCPGUUCWREYMCLNHOIGTEKIKZTVWEGLSIZVUCDPFRYKFTGEVOQU");
    msg.predicate.assign("PKFPIPVRIOQDGPDCYRNBTLJXUPZMELRQUOUPXDFEXHQJNJVAZZSKYBGBVYLBSKJLIWBESSHYHEBCCJSVRTIEUFXQWCNWPMQGMODPVJPKZMGUYHNICCNDRTMTBLQILPITDFFMGYXWAAYLRYFVRXDFZBDSUSXOQGEAJQMLTWVCSSWEGNKGLKOJWFECURAOBKCNRZIFLFYZKMKU");
    msg.attributes.assign("OJEWRRQXMHICUXQAORXHBRDKSJSZSNMFOETAKWTKQUWWSTVQCILZJQIBCGBTJYXPPRYVHUEKQHIYVSEPXAXVNSIZHOVNYTZPNWUFYCTLCNRHNTEFLCUOQUFGDTBOBMLJBDEWZYKSBQTVKYYMINGXEDLCRZABGJGAUBVAAMQKPQLBFKJGNGIJSHPOUJDMGUCEDWRRKOIMXAOFGMSRPFIVGOZFDZIPDXUEFHNMMXYSLZYPVLHCAWTALPVJFWDW");

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
    msg.setTimeStamp(0.7784265012383379);
    msg.setSource(42544U);
    msg.setSourceEntity(119U);
    msg.setDestination(33266U);
    msg.setDestinationEntity(151U);
    msg.command = 106U;
    msg.goal_id.assign("PJFCXXPJCKTGIFRHQSANYEOAVGTASQMQKHBJAMWILYWQDZBGYIYMRCIJEYIVMLZNFCUNPQIWNPPLLVOZRIOWEHDNBZBAGJRPDBZDLBRHOSDRWMQLVWGPEKVMTZGPKSCVAYEWYJDSJXAVLYJHEIARKSUFUBOBSFZGWTXOYDIECZAKCIZHZMVUTQNJGHQLHOTRLFQ");
    msg.goal_xml.assign("FIPNFNZYAKPZOTCIIGSRDJHIELGERFLLLNCDUZHOTSVEQLCWNVWAQXSNEMHPTZACVOQJGESDRKHWXGBRDXQVGCKAHWNGRCFBGTHMEVMVWEMBQIOHAZCGLLAJYTCRTZSQHNJMP");

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
    msg.setTimeStamp(0.18415495059079523);
    msg.setSource(52139U);
    msg.setSourceEntity(210U);
    msg.setDestination(35912U);
    msg.setDestinationEntity(254U);
    msg.command = 9U;
    msg.goal_id.assign("RJKPFIGHNEYFQCXLYACQUOXJJHPIBRNUTQPIGINPJYGVYTEMAYMKYSOHBDONZCRKXNAMOEGFBBTVJHHMCXMXGOCVGIAFHCJGVKSKXRSLDJZCQKAKTRSSUTDUVWALYLXVVLUCWEORDZTTWDHBRPGFOBZZNQQSMXDQEEFSZHIYXPZJUPLGINBQUVFEONAKMTZWHWMNIESIBDNWUVWRKMCWAAPDBPEOH");
    msg.goal_xml.assign("GWAEHMPSKKCJNURCMYAISNOKEVCUMOAVBXSKQUSWGTHYMJEIIWQGLRGXOFSOPUWIGHJEKMIFTBNQAQCBU");

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
    msg.setTimeStamp(0.48563247922654285);
    msg.setSource(61494U);
    msg.setSourceEntity(81U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(140U);
    msg.command = 66U;
    msg.goal_id.assign("HECBINTPXSRXGMYEPLJNCYIZCIIBVISEWZYXKFEODXRHLZXPNVWTZVBSQZTXFYPFMJFUDACUDXZRHSVKSFPYWWMUAXDRUEKLFSQURLFPACWNZFMBOIKNIEONQQPQCRT");
    msg.goal_xml.assign("ARWMCVPNJSLGJQXC");

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
    msg.setTimeStamp(0.5813025575457264);
    msg.setSource(17738U);
    msg.setSourceEntity(109U);
    msg.setDestination(19435U);
    msg.setDestinationEntity(163U);
    msg.op = 121U;
    msg.goal_id.assign("ODPWAOAJXVDQNBVKEHSYJRCEKGTAZLIFRXVHQMPSLCXLTKPZGOMJBWIPUVJBCGFMVUNNWKEAYVXEXSFJOFDFHFUUDQIYTRHVBTXUAGEFAXK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RARARJIAYFPEBFZCMBPHUTDNICOMSFIRFONGMVIUCIYVHZVKOQTAZDVHAYWWKRZTZHYLSLUVUCJOAQLDOJNMWPCJSPQBWKDBDGAREPEVOXWIWTAXTESBFHYCYHFCJRMFPHKLVGPSJQHSPWLLSQJTOMXIXBRQXHWYNTQQZKJSBCDDKUTENLOEVWZEKYGEISCUDQHKMGTSGXXYBJGONNICRGQFKULXJRNFUALGGXNPZMMZNMVWUDX");
    tmp_msg_0.predicate.assign("XGPLQSYXIMPEICROVIPTAAXWVZMTYXXPADNPFMUSKGLZUZXONEOYVBDATWRFFCBNQFGGU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UEQNEZDZDRVFMRJQOAFWXNVLLGUKKSZJFFWFJVQCLJFGCETBNZKSDKPBLBRHSILWHRYZQMGTNCDSDTSPFRCMHGADYHZGUQLSGFTYGPGDNAWTHXPDOEEHVWVWTWNKAKKBIDBYCIMXXILSFMSQCUDPIVKERTQHWVRNZUOPUEOHZLAAXEHGBWIRCCMFOIQKJUOUYXLTPTVA");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("ACNUIGALCEGIJEVIBNOWDWJZYCBKMLKXFYAUPMPTUSJLAQVQHLPNFZHWGZYEPKCBYGXJJYKZGVKFLNVKPIQCCSFJODDQFOBTRIGOOZTXURRDRCDFHCJQZVZFAIBSXYSHIHMRBFHRZVXTEYXNWZMTKOMTVYAMNFHIVZFESPNXT");
    tmp_tmp_msg_0_0.max.assign("XJYWESBSVLWTRAOKSOIWFEVGNKKVRDCXPHCYTMKZRDKGLHPWDQUPKSWXNVA");
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
    msg.setTimeStamp(0.005474296633831477);
    msg.setSource(24470U);
    msg.setSourceEntity(123U);
    msg.setDestination(23627U);
    msg.setDestinationEntity(244U);
    msg.op = 171U;
    msg.goal_id.assign("QCXLYZAFZYECLPIWYTOLMWUSXNRURVIMYUV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YHBTVYRWFB");
    tmp_msg_0.predicate.assign("PQGSMQEUBQCVAWWTMDUZYYTXQSZGXPDQCZARNDKPBSUMVDKABOVPMYRVIMQITNCLPSQFHLSCTGXOSCRFMXYHCUABYXZNCLDFXPRYHLFRVIJEBNERBVFIUAWXMGBJCLOJUNGVINDIOLZOFSWLVYYZMFSIFUTLSHOOYQEHMWNHOMWJHXUTGAOKGBKRUPUDTAZPJIZOAKKJRGEEGKXLTCIWBKE");
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
    msg.setTimeStamp(0.28164644636008596);
    msg.setSource(19144U);
    msg.setSourceEntity(16U);
    msg.setDestination(43138U);
    msg.setDestinationEntity(159U);
    msg.op = 52U;
    msg.goal_id.assign("FFGIBZOLQIJZGDNFHRZMCEAEGADMFHHJUUESLWQGCUFVBFLIAUSJXMHWEPINQCTXFJMOQKBDY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NGJPQXWNICBHXAZXYFEBNBQHJBFQUHDVRMVZTWXHSSYQPJYHMCPPGIKEBKZCQNQJAFLCWJPJGOZKASBAQUUOGSQMMSYUIOWKLDSVDSEVTNPUXKHJTIAKOIEEGFPOHXDTSZCSLMVYEEBOTNCQWOLLGDMZOMEKJFTREPLBMWRYKAYSXRVROXIRWIBGAPFXTTNFLUIIGDLIV");
    tmp_msg_0.predicate.assign("MYOCFWCTNNMRDWASQVAGOXLPPAHTIIETBXKSTDNFHUHKIDZLCDHCWSPAIKZPJLNXGEQBBAOLZCIWSMQIUKAYFSFTGYUNUUYOXJLFZVQODQIVYTMLRLHCZMSGVPGPSJFVRXZCGBBMPETMWBPBXEKQJUROA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BRAECTQECKZRFXXJEKBSGOBMPPFZXGZCUYPEKKCUBEBMFHLVIYESKBJKRRXSNFPYFAIDLMYCQJUOQNAWTGNJAIHSFVGJPYZXGVHJQAJPXJNKWFMYQUMALYQVTWWPWZGOPRXBOMTURNHIXIMIJECKOIUHOLVOFSHRCTZZOLNDFPALETNKHESMDADYEASLBZVMTZB");
    tmp_tmp_msg_0_0.attr_type = 38U;
    tmp_tmp_msg_0_0.min.assign("YRPMTRNEZEZZMHHEJEMCNWCWVDRMAMXQL");
    tmp_tmp_msg_0_0.max.assign("SLFDZXRBPDNGITPIGCMUNDCKMRIRMRXJPCBHUBTZYAWXLUYHXVYXMTVSJIEVFQANTDNLFUQDFXDZLIERWSPADOFWICEBRHYEQKCVKGZIJGHTTPBCXLKLWNTDGVEXPQAZKQTFLCJTLWSPJWWRHRYFOACJNLYWZJRYSAAKOKUIGEUPMUZMWHFIBEVOUQVSTGJLJGSZOEXEQQOOQGPDYVWSPCNNJUBYFSKHDOUNVMYEHVKAFBAHXQ");
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
    msg.setTimeStamp(0.015183537295116012);
    msg.setSource(43207U);
    msg.setSourceEntity(27U);
    msg.setDestination(7091U);
    msg.setDestinationEntity(76U);
    msg.name.assign("FANNVEKZNHKQKHUBERGWTKETJMMQMYSEGEABBWGJTAJOLLAGPEVIXCWZDRHWIQWNLXNIRSABKLXWACJY");
    msg.attr_type = 75U;
    msg.min.assign("XSISLDTQZNLFEKYKCRHVKCOBKDTWBLOMCMTPODWNMUTZELPBYDQVUBBTTFQIXLSAKVXDDMAEEADMIDHZOIZBCOQRGNOSBYTCFWNJJXUMZPUQSIEKUGMHINSNXVNEPHHNSPEUPJYRAERDAHWGVIGLFO");
    msg.max.assign("HKJEKYGDPVDMZUXCGWSGDNFEZTVOTLMBHBJNRPKDYKTGXNGCPLXWVULGTJUCHXQVIDCLXSEZFYGZTNIJTFRLXAIOYWXWSCUMUEJLKKYRPLMUQFARZHZOQFGJAUTOIOCAIRWNQUMGPVOODBWKZDMEHYFLXOFERLNVYIZDSMAMPVBEIIFRBZPQEIPBBQKFNTYTRQAGMHSNSSJPNENCQHJOCH");

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
    msg.setTimeStamp(0.09162052579913771);
    msg.setSource(60341U);
    msg.setSourceEntity(235U);
    msg.setDestination(28549U);
    msg.setDestinationEntity(243U);
    msg.name.assign("AAZTFMOQJCDXSIUBOATBCCNADMRLIKYHUFKCPFVWNBJJKHHFDMDATZPFXIEBXOHKLJQLVFGCYWYRABIQULCSVWIBK");
    msg.attr_type = 35U;
    msg.min.assign("SPFBAHXOMAZBPARDAAZNAISLOPQXTXRCWBKQGEOXIWDRXSNXJUYMEGSCEAJKYGTITQRNYCKLUUFXKBKEKLOIBGYDMEFDFNEKJSPOZANIMDGLHDEJZMIMERRYQTPQEZYTLVNAVJUUCUCPPLQIWQJP");
    msg.max.assign("JBDTVOBKZPZLNHNBIKPDFCDRORJCUJREEFCQJAXGFHVDEOQXVFJTENIGFSCWPTYARJZIGECYAERTSGSXUEJAPTZGBKMLJGUXQJ");

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
    msg.setTimeStamp(0.06517491190280977);
    msg.setSource(50333U);
    msg.setSourceEntity(195U);
    msg.setDestination(57240U);
    msg.setDestinationEntity(230U);
    msg.name.assign("BUHSFBKNEVZGTRWSPOZCDUOMHKAVQZZOFJUKGRCMFTBVRJZCBSIQMNJKVLGWJTSHNYYBGUDJQLDLLMORUEVSTEWMNXWVNVEGBXIMLHRCVOCEARZEJYATYYRPIIXOSDXNSPMETXPERZCARUPPGSKMOJGFYPLHEIAFWIFUYTKQCNXVAIWWAAIDWDVJBFTHSEMCLFLBXJRMOSKZJXQGDWDCDYPF");
    msg.attr_type = 72U;
    msg.min.assign("EWJHIIBPGCJZGNXWAJQOKTPRUDJDQHXIMRRZYRMIQWJIFUPDCHENPWKKUAAEUYRVENQZHRMNBXJHKFRAGVNWWCBVRYSXEGVWTOOVCYLWVYGUPZSXIIZNTKFQTJDFBASMNDTBNZDFLMXFYLFTBMPMIHW");
    msg.max.assign("MRVCHWORPPZBMUWKOJNXDTAQRBSHBLAJYCFEFHNEDOPQYJRGDGMTFVLRDNYUWUXAHBYXTSOAATKUZLQXSMLRAVYRAGJZGOLRMEZVOVHDKCKGDZQUXLEGSEUQMXIJFEAYQXSKSKOIGVESPNIZIEVTUVWDDIZEAN");

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
    msg.setTimeStamp(0.01307649801635169);
    msg.setSource(2300U);
    msg.setSourceEntity(199U);
    msg.setDestination(37276U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("QIROJZOCQNOFVZASBXKZLMYGYTTTDOCLBMIFNIJOLORZFBPTSJRULBXISXQBGFJMNSHZIGNRXYKGMBUVGCHSXTKINVYTPDFPRXPTEWMALBYPENPSPKKYDWLCXVKYQGLIMNUUFFZJRDOMCJEBRVAQQIWLCTINAPREHMHFKEPYZZWLCUAZDON");
    msg.predicate.assign("JMMCSYTTMCEZSHJUWVGQODZPLBYGJLVAOSAVXOUTFBAIOGQMDZKRAMKXNGAUXHRXTJRECUIEHXEAIFWDBKVRLURPYVESSFFTPYBBNSSBISTGZUNMTEKWLZDLXINJYPEHRYNBFNGXKPFGPKHQQPWHSCASMLQVMOXCAUVDRNQDRZNRZGQKJBWZOUNQIDIFILDABBCPXOEEIYVIWAZLCWDLTJGEHNFWPFMTFYOT");

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
    msg.setTimeStamp(0.4122201531388183);
    msg.setSource(40391U);
    msg.setSourceEntity(202U);
    msg.setDestination(23552U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("STGDBUEQCGKQJQRGEGKSFSWVPSUTLTRMIWYPBVJESDSXMFAXEVOVGXKLLBIPICSZAICGNEEHHMOEVDHDQPKFRZEWTYFXUDBWCHCXFZTZVOCJRFWHGBQDAMATFGLRQHBZIMUXLANRDFJXIXMUMJAYGBJJLVSICSYPKRDUZCVYNLYNANXBJVNWKFWYHD");
    msg.predicate.assign("ZOOAKSDBFUYQTBAPNSYPSYNPYNWWGLEOBNVKRXOFEOFQCHWWMYMIHMUIIKDHAVFGKYXSCPHXYNWTMORXEPGGLUJZEOFGWJBCXTPNMKFUDHAXVYTWXSOZZLQILXRVIZEAUBKLBETHJPDIUOQXCNWUFKZCZDJJKSMGLJHDLCDPUBADHJMGTCFYALGVSZAERQOGIGXKAVJZBESRVKFLEVNJVCYQF");

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
    msg.setTimeStamp(0.16688699975249244);
    msg.setSource(27098U);
    msg.setSourceEntity(141U);
    msg.setDestination(7060U);
    msg.setDestinationEntity(191U);
    msg.timeline.assign("INRVLQVDTBVWKZVQSKCGEQYKZMOMFXNFCYOBKSBAGEFCGPZJPFPCNQBYLJGZULORTQIFUHQFZVJOPAPYGLXMZIWWCILIHHKOHSGYUNURGBJRTJJFR");
    msg.predicate.assign("QIZRBVYUGJHAPNOHMTCLXAJJQSKISFUHYQXZGTPWKPVMJGUYRH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MYKPQEBYIXOERFHMBWRYMTGMOUNWAUOYHZSLWTNCMCQIOABJUTQNKHJSFNJZWWHUKZQOJCUMHQEBSEPZTZKAXJAQMPOJMPWRXKUPLSWJYIHXGFDEKEUCKZIIVTFXJHSSQORGTLNLPUGCUWHPVQVHDFAWOLEVZKABNIVTZNVPCBYDKFLDWXDCUQJPMGCVNLDAXATVAZBFOGRDCYYXRIIYXCFESGELRBATVLITBZVDD");
    tmp_msg_0.attr_type = 21U;
    tmp_msg_0.min.assign("ASKBQKFNTWZKXTQEYDZWPBPCCJEDFKKLFMYYLXRXBITQVHLUMENRCMDVGROBOLCSJCNYKGIWRDJNCXTHMJSGSSECIGEPIXHVUOOWFNFUZGREZLAGYXECMTMQIQWRNT");
    tmp_msg_0.max.assign("WPBSJKFLRILULCQAHHOCPLRSETDJFIEKFRGOVBMXTVDVSJPGEFXCGZHFAPECBKWTNJNOZQBYWGNSP");
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
    msg.setTimeStamp(0.3164840739168425);
    msg.setSource(24533U);
    msg.setSourceEntity(242U);
    msg.setDestination(28255U);
    msg.setDestinationEntity(182U);
    msg.reactor.assign("WOKGQWFFNTISKYQZRNIBRMPSSOVHAOLYZBRYHIMUQHURHGPGEDFKPQDJGJTNVYDUCGMNLDLSXNFHSFCNGDUDWFEKXAYRRZZGFLAVAPULATNME");

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
    msg.setTimeStamp(0.9051044414244731);
    msg.setSource(62351U);
    msg.setSourceEntity(209U);
    msg.setDestination(41061U);
    msg.setDestinationEntity(149U);
    msg.reactor.assign("UJKCDUILZBGYMOYABDQNPFSDLDVLVRPKZSHBMXJEQXA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UZCYONDAHYZQJKQJIYWCQFRKCVMOXHBZMNURBFWQQLRENXAYVPNMDYXESIEDLMKBWVBOBAECZKVNITRBYLKEYOTABRODUDNBOJMREQMFXKHZGSPLDYCXNFGUE");
    tmp_msg_0.predicate.assign("CKYFAGZVLBEZYNUFXLGPOEMQLCVFXYHWBEAEDBVDQIMAXOKYUQIWLMDLAIAIKWJIZQYAMFOPUDAIRWRHC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFHJGEBNWZNDXGGWKMQLQTEAUCYPRLSFSLJCMMMQFYPBSZNCDLUAZOCBGIQMSHTECZOFFARFYDQSZZVHWIORAQLIDDFQARVBQHYILNCBTEHGKSJNMTSVCEXJXYROWHE");
    tmp_tmp_msg_0_0.attr_type = 180U;
    tmp_tmp_msg_0_0.min.assign("GVWJIMNDPBOLQAQNIPCKLARXJXHTACEQRFDNTHTHCQWXZRYBDVMZXZBLWUBPHSZDPECOWQTNQUXYMUFRCFG");
    tmp_tmp_msg_0_0.max.assign("UXEUWNIWZSCXQRPXKQTFQJKMOSYFOLSYBKVKHRDLKOPWVEXMYYBGLCTEPMIVLPEQBNJGVGFDHHKUYLJVOHJZEKRMWAMKAFZPZPMJRBCCOGTXVJW");
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
    msg.setTimeStamp(0.7178645465047412);
    msg.setSource(9956U);
    msg.setSourceEntity(3U);
    msg.setDestination(13582U);
    msg.setDestinationEntity(66U);
    msg.reactor.assign("HXSUPFYUYPPHINSKCNDPVLJDXAPMTFUXYMELDMIMNKZZRKCYTVLKLDQGONUQFLVHYTWWDZZTPCMKSCKRACZZERYDRAERRHOODRBHXPJGSAPJBNWIHWLXNXCJQTXKBVYFQBTJHJVVNBUQSBTDUVWOBFLWNEGAIWKDFNEIFJSTCKQLMOWLSGXJIIRAFCGVSMOSOAJBRXQZLO");

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
    msg.setTimeStamp(0.08597556976453913);
    msg.setSource(60449U);
    msg.setSourceEntity(188U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(172U);
    msg.topic.assign("XQEIZTJPFHDWBYCSKZAQQAJGGYACRZTTYDLVJRXQRHGMFZGMGIEOWYBWUKNHLIBVCBPQSVFKRULIMYTECQPKVTPXNJKLGLXZOCCEMBLSHORWLWLQGOGDXVJTHUNTONJMBDATGZHJACZSWAUHCFFKCSOKVNPQLVQPKWQIAJENNFABDONUCXYUEIJSRSTAFMYXKJEMPBZZUMADUYRUXEVEUNSHRRSYMWHDVIYIIOZHDGOXL");
    msg.data.assign("PFVQTWOYUIWPPZRGXUIJXZZGGINLXDLKOODRQFNIMAEHSMTMXIELJRVMRPGXCDDENWPWY");

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
    msg.setTimeStamp(0.9938668344210881);
    msg.setSource(34195U);
    msg.setSourceEntity(13U);
    msg.setDestination(59532U);
    msg.setDestinationEntity(225U);
    msg.topic.assign("DAMTXDQNUKNMXJTCTKNUFPDLSVOPHOTEOHUESCFV");
    msg.data.assign("JWXMQFNWUVCJZNUUTZFUDGBAKGWXNNDZTQWHESYULAMEBPJVGFRLFSVOXDDJSUAQNQJIDLNPWYMBHJYKLYBCIPTZUGOVQUPQFXRBFECMTLLXXJLCPRGEKLTWGZXVISBGCMFTEHZQROCBKZAWIUUOEGHNIOCXSYDRPHRGPOOFOATJHNQDYIFVYTNAMMEOHAMCPKLMVKZIPGESREAPNDQS");

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
    msg.setTimeStamp(0.7630820172555737);
    msg.setSource(1011U);
    msg.setSourceEntity(58U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(126U);
    msg.topic.assign("STGDXLTGEEBINYLXLGJIHPZACILKMRSQOOQPMFTBNJSCWMOQJRKTVDNBYQRRCDFPNQFBHJITQEAEWXEUUXDJAYLWMVKVNLDVRKADUUIVPUIGYYWZAFAZQYTTFIDIIKYSNQHWEK");
    msg.data.assign("TMNFPIFKHHBDNVSRDIWCMMHIZRTYBZOPQNRCYMRWFSLGR");

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
    msg.setTimeStamp(0.3171129155928376);
    msg.setSource(5069U);
    msg.setSourceEntity(228U);
    msg.setDestination(61959U);
    msg.setDestinationEntity(144U);
    msg.frameid = 41U;
    const char tmp_msg_0[] = {41, -118, -71, 70, -115, 80, 10, -47, 2, 125, -28, -59, 0, 17, 80, 101, -101, -107, -73, -31, 58, -109, -108, 111, -124, 45, 120, 9, 19, 113, -123, -14, -64, -28, 52, 26, -6, -64, -57, -82, 7, 75, 81, -124, 118, -37, 87, 10, 19, -24, 49, -43, -103, 104, -6, -33, -89, 21, 41, -90, 8, -54, 9, -70, 29, 80, 116, 115, -6, -81, 65, -105, 119, -70, -54, -125, -48, 70, -33, 90, 36, -49, 108, 3, -9, 46, -21, 61, 97, -65, -47, -107, 33, -10, 15, -121, 4, -61, 48, -23, -86, 55, -61, 59, 58, -72, 25, 21, -97, 59, -113, -66, 55, -89, -113, -80, -104, -117, 104, -74, -43, 33, 85, -106, -107, -12, -21, 11, 118, 54, -65, 122, -49, 122, -57, -35, -53, 16, 27, -127, -89, 108, -5, 4, -85, 47, 117, 21, 118, -17, 81, 98, 18, 102, 125, -103, -84, 31, -64, -16, -15, 85, -38, 14, 32, 50, 108, -84, 29, 78, -117, 67, -24, -83, 105, 98, 75, 122, -60, -106, -71, 28, -70, 86, -21, -38, 67, 124, 112, -27, 118, -111, 91, 50, -46, -128, 20, -74, 61, -63, 44, -65, 0, -47, -69, 97, 22, 63, -50, -6, -5, 97, -68, -60, 75, -19, -7, -5, 44, 4, 117, -86, 79, -120, 111};
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
    msg.setTimeStamp(0.13156022484042995);
    msg.setSource(61218U);
    msg.setSourceEntity(8U);
    msg.setDestination(64745U);
    msg.setDestinationEntity(93U);
    msg.frameid = 198U;
    const char tmp_msg_0[] = {-26, -87, -80, -82, -109, 88, 110, 27, -11, 86, -95, 112, 99, 62, -125, -67, 95, -56, 91, -90, 118, -10, -55, 78, -2, -5, -28, -13, 57, -98, -44, -100, -86, 44, -124, 92, 105, -13, 52, -21, -121, -64, -19, -112, -113, 52, 112, 119, -126, -43, -70, -114, 124, 112, 44, 106, -128, -118, -52, -115, 63, 117, 85, 47, 88, -108, 86, 62, 72, 73, -19, 50, 81, 29, -112, 31, -77, -75, -59, 101, -68, 114, -67, -38, 62, 5, 22, 67, 54, -8, 59, 81, 35, -119, 2, -104, 94, -120, 80, 1, 12, 13, 16, -113, -31, -51, 64, 98, -46, -46, 126, -76, -53, -30, 19, 72, -36, 43, -123, -112, -2, 66, 11, -50, -67, -97, -126, -56, 95, -79, -29, -75, -53, -82, 3, 96, -40, -115, -72, -14, 102, -55, 29, 106, 68};
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
    msg.setTimeStamp(0.18307759745841234);
    msg.setSource(29731U);
    msg.setSourceEntity(174U);
    msg.setDestination(44877U);
    msg.setDestinationEntity(73U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {-35, 78, -128, 117, -108, 12, -72, -79, 70, -110, 114, 74, 43, 70, -2, 17, 51, 101, -24, 28, 90, -63, 0, 33, -71, -70, -97, 33, 9, -65, -28, -115, 92, -107, 119, 62, 87, 27, -114, 33, -1, -30, -127, -21, 78, -21, 26, 22, 22, -121, -127, -124, -87, -49, -24, 78, -13};
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
    msg.setTimeStamp(0.8546020003609603);
    msg.setSource(36521U);
    msg.setSourceEntity(75U);
    msg.setDestination(41795U);
    msg.setDestinationEntity(33U);
    msg.fps = 9U;
    msg.quality = 80U;
    msg.reps = 86U;
    msg.tsize = 185U;

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
    msg.setTimeStamp(0.8285583904669159);
    msg.setSource(42370U);
    msg.setSourceEntity(92U);
    msg.setDestination(5172U);
    msg.setDestinationEntity(65U);
    msg.fps = 235U;
    msg.quality = 68U;
    msg.reps = 44U;
    msg.tsize = 17U;

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
    msg.setTimeStamp(0.060156074137227344);
    msg.setSource(45849U);
    msg.setSourceEntity(22U);
    msg.setDestination(7320U);
    msg.setDestinationEntity(208U);
    msg.fps = 30U;
    msg.quality = 189U;
    msg.reps = 169U;
    msg.tsize = 53U;

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
    msg.setTimeStamp(0.4530831411913331);
    msg.setSource(21506U);
    msg.setSourceEntity(50U);
    msg.setDestination(28904U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.13810061150042152;
    msg.lon = 0.4931535225948819;
    msg.depth = 170U;
    msg.speed = 0.020611053761569798;
    msg.psi = 0.03602139617558553;

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
    msg.setTimeStamp(0.28205186373826885);
    msg.setSource(17467U);
    msg.setSourceEntity(94U);
    msg.setDestination(54104U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.13273579663749924;
    msg.lon = 0.45189112006025123;
    msg.depth = 143U;
    msg.speed = 0.0027979289447631617;
    msg.psi = 0.7234384827914037;

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
    msg.setTimeStamp(0.964217569659366);
    msg.setSource(19318U);
    msg.setSourceEntity(131U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.33039627282352546;
    msg.lon = 0.560304834978152;
    msg.depth = 159U;
    msg.speed = 0.5146157809110362;
    msg.psi = 0.7765142951982001;

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
    msg.setTimeStamp(0.5566813728871439);
    msg.setSource(41893U);
    msg.setSourceEntity(170U);
    msg.setDestination(23362U);
    msg.setDestinationEntity(18U);
    msg.label.assign("MDNWXAKPYVHLNAJANWOPOTBUSXUMRRMNUIYDQQFGRJTMZZJLBTSVNCCLGIMINWBLLEDERWSRNGKIZCFMFVCMZOUJHXHRKNOXGEGLGXOYGEYKP");
    msg.lat = 0.6776317563741788;
    msg.lon = 0.735035577952022;
    msg.z = 0.9696069337070434;
    msg.z_units = 54U;
    msg.cog = 0.07331098588497598;
    msg.sog = 0.35447592104965986;

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
    msg.setTimeStamp(0.46514002031437973);
    msg.setSource(19624U);
    msg.setSourceEntity(18U);
    msg.setDestination(54217U);
    msg.setDestinationEntity(225U);
    msg.label.assign("HZQSBTVRLHWIYEJOWEBXMEZPYZQSEGTNGQRHIGPMKRGCOUJBETLTDWESHRIYXOCMXYSECKIKREJZXITAMIRKWCBQOJDZLMKCCLEZJWDKDUGQNHBNXCLQAXTTXPAMOIJMGUQSQPILHKWOAFBPHSNVYEJXYAYAKIMBZFBIMLWUTUPOBOPAJLFDLRONFDSVGFQDCXK");
    msg.lat = 0.5419336494637775;
    msg.lon = 0.6087701567874448;
    msg.z = 0.44631099934852514;
    msg.z_units = 108U;
    msg.cog = 0.4116151844184609;
    msg.sog = 0.8970054135051209;

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
    msg.setTimeStamp(0.009865893376177048);
    msg.setSource(51407U);
    msg.setSourceEntity(89U);
    msg.setDestination(55307U);
    msg.setDestinationEntity(221U);
    msg.label.assign("NGGBDVKRTOIDQAJJVYWERKIDMTUCQYHETRGFXZCGRNBOLJIWGZXRZQPARUTFONIRWUAMSSCXOYNHSSJDKYFEAQWBIHJJDHEKTTQOUHDSLLPNJTNMPCIGEVUHSHUXKWIREBCPBXHEMLWYVPQXNZDZZJAMNIJCTWUZOQZGTVUBPGPBMKCMLVKIBVDLPSMAXFSVEUAVBPFOQWELXNXKZAYFWOXCWQUHLMQOEAKLDBSHFJSTRFGMKNIYYCVCFOA");
    msg.lat = 0.9705534888599923;
    msg.lon = 0.536307608388816;
    msg.z = 0.06430921230940256;
    msg.z_units = 185U;
    msg.cog = 0.18040165868432145;
    msg.sog = 0.9874282080817642;

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
    msg.setTimeStamp(0.8656321263621877);
    msg.setSource(14671U);
    msg.setSourceEntity(4U);
    msg.setDestination(47744U);
    msg.setDestinationEntity(227U);
    msg.name.assign("GMPDVAWIMXEGGDIJBKPWFIZSESOPCUWWECJTJVYCKIPVLBZFTIGKEZLKBPFNSBFQUEUQDKQVXYANJCAFKTCEMDKDMNHXUVLVLOHHFSOZXZRGROVNIXNOCWHDALQKOAHPQPEPTBQIZRYUWBREYTYBJZHJAXDQRWJJDYLIGCFGAZ");
    msg.value.assign("JORUACIOTZVOGJIOVUIXZCMTHCFRIJOTUXBHZMBGUREMQBUEGZZGJTNHGARSDTJICYWGYUGYIWSFNZMFEQUJANRAUGLHWNAIECDYFYPNRXBOAPYVOQRKKWWHDUQCLCMLSVEZZMPXXLIMYLXQHFSADJTSCPFXLSEJMEBBQBBPEVFSWTOSRPLKEAWHXNF");

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
    msg.setTimeStamp(0.7424920608674995);
    msg.setSource(35487U);
    msg.setSourceEntity(82U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(23U);
    msg.name.assign("WWNMAKWGRU");
    msg.value.assign("NXTWEPFIOVTPMYWAOPXLFVRBYJPDGYJSYKTCBLWNVVCWMKQKCHUDWXATEIVKOMJOFEZHLSZOTELQNCQBIYOTRUSDWLEEONDWJTUJRXHVISZHVFSSSGCDPBUXCXMROAWAIBUIHCJFRDSZXPJFZGUDMQBZAGKABWYJRHNOQL");

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
    msg.setTimeStamp(0.14194305425229026);
    msg.setSource(42188U);
    msg.setSourceEntity(109U);
    msg.setDestination(52105U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ZPWBAHLRZBWFXJHPICOEIGPUDUASTGLKWGICMQQXEUHNUNSNMVZNUERYGFYTEJTOQRTDMWM");
    msg.value.assign("JACOVAHOZCJNDZQLWXYCPXPSQYNMRAYSDOCUWECXUWFQFAPMOVLHKKIVYTQRDVKBEWDIUGIZQHPSMOXHPVLADZQHOWPARNLXSWHMVBXWIKTVTUZNOEWDLCDIYUQANCGXJBCRETKWTNPIEULDRJGOJLRSFGTSQBTIAKGMPKJHLFBHPBCGKFFGXRKRYUKEZLNTYMFSVXTGRZISHWHCUR");

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
    msg.setTimeStamp(0.1122432999685079);
    msg.setSource(7195U);
    msg.setSourceEntity(195U);
    msg.setDestination(30685U);
    msg.setDestinationEntity(134U);
    msg.name.assign("HMRVJHYKGNZJJBTLEMWIQKHGLFUCANNXXSXTUSLWOMSAGOJGQIIUBYKYJWTIDDVEZRWIOIMTITLFUZRHLOPHEQQQKPFKVBCCFYBOHUBLSOCHGBLTQFDJBSDPROMPJIUSHDTFWLXRBSUEQCLLJRUWFDSGNOGWPXVZVKPVV");

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
    msg.setTimeStamp(0.11371271557752882);
    msg.setSource(64220U);
    msg.setSourceEntity(179U);
    msg.setDestination(53069U);
    msg.setDestinationEntity(140U);
    msg.name.assign("RMIKUKGUWBWRVJBKYVIVCFUJTESBDGKTAOSLZEZIQVHJDUBIHJOHDCGPKZTMFVSIECVMLHSHOVFNMRNPFMSAWZZUUIAGPOPLXQHFBNLQXECQPZYNLBFVQEVAXFZXKCYSHNEXJKNKDTJEGLRAUTPFJYOYFYQAZBNDEDPMBMMGWOXXFGDYLHCICDKJCCRWRUPPTSGXYGWNJPBICLRYRRELQSOUDZQEDQSAWILYOJGNZMABQOTNOAMA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZDQMLVEFGJJTZCSIPNXHAOPZHGYLOQJKKJFXXBAHRNLZTBRQTMPUVDBJDYQHATEILSCKRWDLZQZQNKVCXHWLRBCSWNNVBXVWXBFBGAYCKKVJUSPCMFTMRTKKSBDZDPMYYAWDLHEPODONQVAOVUXSALQEEMEHUGIFYWGCURTSWTWBSIOENDEXUSXDIHWFIZRHMTGXPTAUPGRI");
    tmp_msg_0.value.assign("IINJSPZNKXIXOKHGNXCTUNEEQUJMUJLDTLTDSIYBUTAJSXLURSCLQZXXSOPEMEMWZSHDOXIZLDBMQGKFFBBWYOVCCCMIAOWGBWBMRGVCRSIRBTKNPDCZGSEKU");
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
    msg.setTimeStamp(0.48955640507170517);
    msg.setSource(55391U);
    msg.setSourceEntity(72U);
    msg.setDestination(55506U);
    msg.setDestinationEntity(0U);
    msg.name.assign("UVLLIZMONZWAKBBBWFAROLEDXNGPDCAUPNRNHYSVCATNGJLMVFLPZSZSMCT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KHPIYQWOSTMXHVILGHBNEMBCTIKDROQDUATJKKZJCGBVBYWPJFREHSUONNAMVVASIODXRZTRECSALZPWEFOWKTEYWMCNUJUDUQEGRLIBLKVLMPQVSICYXDVTAAFMINNAJNUZRPAMFCRCDKBO");
    tmp_msg_0.value.assign("QHOWRFPKIAMFOMHLGEUDWINYOIWTZGXOHLCNGMXZZQOXJBXEEDUSBSJZJCPNQXAGDDT");
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
    msg.setTimeStamp(0.5381847297964384);
    msg.setSource(15386U);
    msg.setSourceEntity(242U);
    msg.setDestination(18506U);
    msg.setDestinationEntity(97U);
    msg.name.assign("WJDRHOQPJJADDJGCQXUNVATHWQSZPEAYXRCDKSYLGKKXTYSKKYJOUWWJKAUHTAFEOITNJZGXMCSTNZPLZEHRVWXNYOGFHXSPTFHEDAZBRILRSMSKRVHEQZLLVIQOVCITWHDBBUZMBGFEIC");
    msg.visibility.assign("RHUCUWQFOCIJRMQDUAVDVRGRQDXWNIETYNHYIETQSBXGXWTCHSVFPMTFXOZDCOAHXBPHHMAIIPYLTKLBBBUSTFITRFQJXRMCMIWXJCLUM");
    msg.scope.assign("ZGALWCIITNLRAIDJCAANOQAMTSFLQVJSUVKWZDDCPFEMUDASYGBMHEVGJYJFCOONYUFAJEBULPVBKQKZZFOPCDDYGKLWNEHVTECLMMVSXWQWNYTUYDPUCNAZXXYWGOXQRPXRHGKGSOQBVHDOVOZBLBJHDRYOEXWXTLLIYRTSCKAFDTPTMWRIJOZTU");

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
    msg.setTimeStamp(0.9885437702535433);
    msg.setSource(49526U);
    msg.setSourceEntity(215U);
    msg.setDestination(43345U);
    msg.setDestinationEntity(249U);
    msg.name.assign("MBNFUNVHLKBGQQZDFRAUJWDLIVEBDHODDYYBLLWVXMEPEFAJJQVSCCPKOATTEGOVOXGCSZPCGDCNCBNKMSXLHJETRXSAOWWCVIWIZZOJMPWJQSHGRAHUNKCQXKDKTLYAWSKBSFLVUWKFZAYBZRTLYHTBTUPHNUMCFQSTMPPIUVUEIXEXQRAQPJLMUOJBIRFGORDEVNIIOZRZOGVQNYTIAKPMHJBXZZYGHPEWYRDKDRLTQSAYNIMWEGYCFXXJH");
    msg.visibility.assign("SYRMSHEHQEGBXHKOLVAYOTJBAIVTXYYMIUXRBUCZPQMXPHGYWSKYOVNPEZDNKBZZBUBIDKIPSGNEXJASDELPAWNHBUUUWGMAXGXOBTPCRPNFRNKADMMJMMGPIJTTSVKWQSNHVFFRPTRGFQJWKIUFKQRWTQLHSSWYGWRQTDVELFCLAINVYDFTVIOCRUOWBEFKZJEMDCLZMXOBSQJNACZXIDDHICE");
    msg.scope.assign("TWSDJEVVPBGGJCEGLCZUFTYLKUANMQIRKIMRWVUQSHMZZWAOKPHFUKWVDOATNXRFZXXEIKSYAOVHOUQMCQIDLPCR");

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
    msg.setTimeStamp(0.5383691288595583);
    msg.setSource(52740U);
    msg.setSourceEntity(104U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(225U);
    msg.name.assign("WWRWWBBFWQDRNYHWPIRFQTMYRMCULLBHAZJFCQDJWAFTNYYXHECHJZQLEBSNXTCRIBGUYAOUXSLJFPTZGASCZYVLOWQIVOKYKHDY");
    msg.visibility.assign("QGGGSIFQOOOWTZNEPFLFXVCMINOUHYGTRQSDFMLKJTKOJKTTMAHPACGBUXLWJNTRKZYQKIAQSEEQBXARWPVVHURNBDVIEBCPHXGIBYZF");
    msg.scope.assign("YZXQNRWJNERILFCAUGWWXVKGRJLXMIYQLGOSXVGPOERERBWUXFSULPVJWOWQTHZYTIHRSHSBEGJHCBUUCSYNYDUAJBACYPDXSYDYZJOWQKYBLQSVMZNFPZZMMGQCBYHWCSLHOCGTAFVXVDVZTDQIIABUCBQENQMWIOEEAINOLBFKKNRDICAMMIFJKIVTZOPMUBGVLPVQLRPTTPEMNSLFGFENXJKTEWOAJDKZDHP");

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
    msg.setTimeStamp(0.3925704153499846);
    msg.setSource(41006U);
    msg.setSourceEntity(121U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(0U);
    msg.name.assign("IBIEHNEABPTSNQKTFNFWWQHNNRZOUHWSFUYJTGLLDKBDNVESRQGJFJGYICIDNCSDDWGECXQZOAZFHBIVLZBVBYPRXWPTZXVUHAIHRXAJQJCRSATHYLZEVUXOOXOPGRWFFSUMWIPDQKDVMILOSEICODQNMEZYPUCABZTPAPKHDTKMYWOMSYLJGOVWFNNGXFMRZLQACFKVLCSQHBVJMMREAUTOVUWRBKGKZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MJAIZFHJJEFALMICOKXZSDBOCLDGWOYVFSLMRDAQNADJCQTXQSZWTKOKFSEWKMAKQCPGRUKGQBNODUMIFLNZUYOAUXPMKHMJUTBYFTCRZJOIKVEATKNXCQSYRDFMGJVVYSPPYNLSRVYCVCTTMWBBHQYVLHDMWGHXWQLBGAWBLSIPIQ");
    tmp_msg_0.value.assign("EERKLIGMSNKHVUWTAKMXQAAJEJOFJLZMWTOASBIRZHCCBOWYGKMSWOAFOFLBGULRQDFMACPBKEJXVJVROIMVOXHJLHUQSQDVYINOVBSSHTHGIRTQGQDRUZNUVIUFIRTYVZKURYNSDZFYPWMYXONBTAKZWAXSGPFGHENYMCGBRDXXLJOXIPGSAXNUEMQVJ");
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
    msg.setTimeStamp(0.232387755038875);
    msg.setSource(46756U);
    msg.setSourceEntity(208U);
    msg.setDestination(29644U);
    msg.setDestinationEntity(29U);
    msg.name.assign("QUFQFUFOEEOLHLDLBYRURFXSMUKCIDBHSOOUMAVRKYNCQZNAJRQSASILJPTAAHPJVABPJNEPGPOVBMCBTHFYBCLASDRWWUXLGXXHXHKJMTDELOSCLTNZSFTHPRCKOZZUYVFGYXBRZGLDNZIYWIRBGETMMWCRLZJEXXYQACMSQZGATTCKVWGM");

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
    msg.setTimeStamp(0.2748475509564209);
    msg.setSource(27663U);
    msg.setSourceEntity(7U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(101U);
    msg.name.assign("CIMJHAWZYCDFVBET");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SRDDJCJNQIHNKJWUVAMBQGKTVPAVWPGTFYECPORLETRWIALEXPYFFKFKPVKDWFKEAMOMTGGEXYGENRKNCXQBBPIGHUCWUZNEHJVXNQGKKLHWVDJMSUQEATPRRTI");
    tmp_msg_0.value.assign("PZRBWTIYKKAJWNOEOQIEYIZKMKUDMECRBQQFXZFTOLNSHVFAMFHJHEUGHAZOIPGFPADWYULHGNTLTJLVHSDHCNSQEKXZTCHRQAMXMIBBHFUQVFVIFTDZJNXOXGCNULTGUYCANC");
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
    msg.setTimeStamp(0.2859156114741995);
    msg.setSource(40670U);
    msg.setSourceEntity(123U);
    msg.setDestination(49834U);
    msg.setDestinationEntity(208U);
    msg.name.assign("XKNFXEIYFYWXQZVEYZCVNFEWEYLEITUUVJGAQEUSDJZDNWHQDRTLSXIPRVINGGTXITLTPPTORZBMCMAZYNXUBHZRFPVODH");

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
    msg.setTimeStamp(0.8726504465776642);
    msg.setSource(43001U);
    msg.setSourceEntity(37U);
    msg.setDestination(37458U);
    msg.setDestinationEntity(25U);
    msg.name.assign("NPLCIWMZYKIHZZRTJYXVYFXJBDWVUUPBKFQWVXGZJVJWQIVOGAHLXPCKMDAQESPJNQHZHFOUFIDGOSANJN");

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
    msg.setTimeStamp(0.49556494928189276);
    msg.setSource(27416U);
    msg.setSourceEntity(200U);
    msg.setDestination(23081U);
    msg.setDestinationEntity(67U);
    msg.name.assign("CLEURGRDCXGZDJZMNHPRDWKDDGFWSJYBQSYICDBNPSLLBJPIFOKBQLUHBHLKNZHFJHDPUMVHKEYIINGRGGRXVZMQLAYCWTETTEHIXGKUFOZOVBXQARMWZYUKTIXKWNVWTTPEVUZBYQMFHTVBUZNNSFKNXALMYOZUTOSXCASMFQLQDEOUOMJIVRJXKGPISFCAXDNHVTDSAROWVCJEGSLEAYIEKAPRMWFCQQNRQX");

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
    msg.setTimeStamp(0.0880028254757752);
    msg.setSource(26595U);
    msg.setSourceEntity(122U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(163U);
    msg.timeout = 145181480U;

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
    msg.setTimeStamp(0.5502834878495029);
    msg.setSource(63547U);
    msg.setSourceEntity(49U);
    msg.setDestination(22348U);
    msg.setDestinationEntity(168U);
    msg.timeout = 1870302948U;

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
    msg.setTimeStamp(0.4208551006486576);
    msg.setSource(16360U);
    msg.setSourceEntity(8U);
    msg.setDestination(8258U);
    msg.setDestinationEntity(98U);
    msg.timeout = 3626248607U;

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
    msg.setTimeStamp(0.15184829898565722);
    msg.setSource(26438U);
    msg.setSourceEntity(48U);
    msg.setDestination(45844U);
    msg.setDestinationEntity(25U);
    msg.sessid = 2171594421U;

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
    msg.setTimeStamp(0.869029132350064);
    msg.setSource(31683U);
    msg.setSourceEntity(22U);
    msg.setDestination(55342U);
    msg.setDestinationEntity(105U);
    msg.sessid = 3337578142U;

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
    msg.setTimeStamp(0.21378234230980764);
    msg.setSource(33158U);
    msg.setSourceEntity(80U);
    msg.setDestination(2561U);
    msg.setDestinationEntity(200U);
    msg.sessid = 512304774U;

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
    msg.setTimeStamp(0.8260236523301375);
    msg.setSource(52315U);
    msg.setSourceEntity(100U);
    msg.setDestination(53880U);
    msg.setDestinationEntity(40U);
    msg.sessid = 1851590800U;
    msg.messages.assign("RSUOUYLCBVTJDRCJNCNZWPYSPBUQVUDXXAONZUDDQHTLJSHKHOCDDSQATYIGYQSKBXQERXSRYYJYASBEWOIHPRXFWVXNHGTXFLSJEQLHZKNJTBJECDTGZFPVJGPIQKBIWARDIWNQRFXCTKPGTOKMILWRAHOSCVFFWIKVZDHQAZVORXHGMLULUMVFMZAWVDCKGZSANHMOFFJNBPBMYUNE");

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
    msg.setTimeStamp(0.12473473467258545);
    msg.setSource(54312U);
    msg.setSourceEntity(109U);
    msg.setDestination(15645U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2109663423U;
    msg.messages.assign("BMLAEGOYKPBZQMFPMPADTGWYIXNDVXXTELEPSFPDSKKJDNGXGCAUTPCPIMRUCYUAPAILHUCSWOKBZCIGYELUJZAGUEOWWMNJDRONWOKIDVEHJEATKQTSMTLNKOOVHKJBZBCDFHRQUMDVWFCTDIPJZRFSLHBFJHMFVHFXQQUSFQAAKOBVGZRVVSENPZRXJGTYRNSEHQTVCIURJNWBRZLOYDIJICWQMCVXZ");

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
    msg.setTimeStamp(0.3454252335883147);
    msg.setSource(13451U);
    msg.setSourceEntity(220U);
    msg.setDestination(48561U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3216480260U;
    msg.messages.assign("NMZRAGEGBAORHDALJOOCEVFKURIKLICLKYMANJHAPUEUYUGWNFGFWMHCNJNVAHVATXXHNXXYEPSKBYPAXLVALUVVWKNUTUBUBJJPXOVKLWBEUOYIBBIIZUIEHZQTXZKQPTFTQEGDXWHDYSJRETECILOMFLHSMQSKYYGMTAM");

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
    msg.setTimeStamp(0.8714017262195665);
    msg.setSource(15824U);
    msg.setSourceEntity(187U);
    msg.setDestination(37003U);
    msg.setDestinationEntity(140U);
    msg.sessid = 1271151786U;

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
    msg.setTimeStamp(0.22903239243425577);
    msg.setSource(56487U);
    msg.setSourceEntity(17U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(177U);
    msg.sessid = 3905230058U;

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
    msg.setTimeStamp(0.7231192057460688);
    msg.setSource(19627U);
    msg.setSourceEntity(2U);
    msg.setDestination(64806U);
    msg.setDestinationEntity(44U);
    msg.sessid = 4141264830U;

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
    msg.setTimeStamp(0.2527181661313751);
    msg.setSource(46165U);
    msg.setSourceEntity(41U);
    msg.setDestination(34283U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1859033269U;
    msg.status = 66U;

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
    msg.setTimeStamp(0.4097844291587136);
    msg.setSource(58557U);
    msg.setSourceEntity(164U);
    msg.setDestination(61713U);
    msg.setDestinationEntity(220U);
    msg.sessid = 1362228663U;
    msg.status = 39U;

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
    msg.setTimeStamp(0.393535471325402);
    msg.setSource(4179U);
    msg.setSourceEntity(42U);
    msg.setDestination(6825U);
    msg.setDestinationEntity(218U);
    msg.sessid = 1577268406U;
    msg.status = 161U;

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
    msg.setTimeStamp(0.7407218468046107);
    msg.setSource(35786U);
    msg.setSourceEntity(34U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(117U);
    msg.name.assign("RQIYCSVXNJVUFYXLVOIYPFWKSKDYCKJUALUGWMBZBZJQNKBMPYDRNLYYBFW");

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
    msg.setTimeStamp(0.6839567516997843);
    msg.setSource(45757U);
    msg.setSourceEntity(202U);
    msg.setDestination(45155U);
    msg.setDestinationEntity(187U);
    msg.name.assign("FNYPCUYKEVAMEUKIWSXUSQAOUIDAGKVQZSTUEB");

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
    msg.setTimeStamp(0.0690449497905885);
    msg.setSource(5092U);
    msg.setSourceEntity(39U);
    msg.setDestination(41614U);
    msg.setDestinationEntity(246U);
    msg.name.assign("XHKWMCGOCRBYLCOCEOZIPVPFSBCJYQFIDEVLMDXPMEXLVACHAPGUECZPLPUKEBMMOQIKZJSRYTSNSYLQPYJOCQSCAUYTTWZBVUPALDIJDZXMYXVHBQNOTQJHXFZWRNKROWGFFKFNOIARIUVGIRLNSJ");

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
    msg.setTimeStamp(0.0565610274864069);
    msg.setSource(44153U);
    msg.setSourceEntity(190U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(171U);
    msg.name.assign("TUAPAPGZFUGXBVAVELUZLJXJHVCIZWFXXMQDISYKWHNSBVQSYMQWAPCCRMKFETCCDJTOUHFEXQDGDOTKRBYYJEXRBPYTUWULYBAPKMNMLAIXECOWUI");

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
    msg.setTimeStamp(0.807267436954386);
    msg.setSource(34862U);
    msg.setSourceEntity(167U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(54U);
    msg.name.assign("CFFARVXOUKWTDTQKHSCRUXYXKBKOWBPYTLNGKPBZAZWEOMGMHXOIRXJHZVYLECVEAJVZHWNSILWOTWZOLSZEBESJUODMFOQZJIZNHCCQXXJDJWRDULLGMJTUKTZSQVYANPFAGPAKDBMUDSCNCUQWQPCVXETXCMVHNESLNIHIFKPPBJGURLOHMIRDFMTISGPXDRSIWNRVSCAGRH");

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
    msg.setTimeStamp(0.8614445158496458);
    msg.setSource(63850U);
    msg.setSourceEntity(145U);
    msg.setDestination(812U);
    msg.setDestinationEntity(34U);
    msg.name.assign("RBZDVAPIEGYDHKYCNTDIVYN");

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
    msg.setTimeStamp(0.3853242001998065);
    msg.setSource(23292U);
    msg.setSourceEntity(20U);
    msg.setDestination(41296U);
    msg.setDestinationEntity(95U);
    msg.type = 67U;
    msg.error.assign("YKVTYLHVKQPXADBFUSVIQQZRGHEHBBFMZJCQUKCPNTRRCICOGDJNTVUUBEDNJDQNZLXAWMBIAJIHMOMEBOHYUYPWFLNTEDXHSZEXTHVGMKUTSLPAXNFKVDUQYDCOONCGMRMLJQGSSSFFYQCZSBPNLRQSA");

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
    msg.setTimeStamp(0.5083577294591127);
    msg.setSource(26317U);
    msg.setSourceEntity(92U);
    msg.setDestination(9249U);
    msg.setDestinationEntity(112U);
    msg.type = 132U;
    msg.error.assign("CKXPMBEYJCVLBLEIHMBHUZNPNIDROBEMWDTZJYNKKDDGDOXGSCRWDURKOENGVXZSHTTAHQNHYMHIJRTACSYHQQXTNWOBEFVWKAIYFMBLZ");

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
    msg.setTimeStamp(0.2830703168009724);
    msg.setSource(59449U);
    msg.setSourceEntity(187U);
    msg.setDestination(60322U);
    msg.setDestinationEntity(20U);
    msg.type = 137U;
    msg.error.assign("CDQUYBLTZGBJFLUJTYIVSLPIEHXAAKVCIVQW");

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
    msg.setTimeStamp(0.13709936283462043);
    msg.setSource(29841U);
    msg.setSourceEntity(221U);
    msg.setDestination(59291U);
    msg.setDestinationEntity(32U);
    msg.seq = 36502U;
    msg.sys_dst.assign("ZHVKHFBWUJZFQPTZLKAOBIYSROWEPPXYGGLRZNLFWWVSCCDAMRVPOMNQSLPNBQMWDUWHYWIHNEFBRUZFYMLJBGIPCJQWMGQSDELMNJUCRNLIXESKGAZVYRYTBMKRJOG");
    msg.flags = 195U;
    const char tmp_msg_0[] = {-39, -23, 86, -80, -120, 39, 27, -21, -73, -101, -114, 26, -33, -66, 125, 68, 75, -54, -96, -26, 43, -35, -89, 34, 33, -39, 47, 52, 97, 21, -24, 21, 69, -7, -26, 21, 45, 112, -11, 3, 112, 38, 53, 32, -92, 115, 114, -40, -74, 59, -94, 92, -121, 118, -98, 28, -86, 32, -33, -13, -114, -114, -113, -104, -105};
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
    msg.setTimeStamp(0.1053991503326257);
    msg.setSource(11110U);
    msg.setSourceEntity(21U);
    msg.setDestination(63440U);
    msg.setDestinationEntity(191U);
    msg.seq = 56890U;
    msg.sys_dst.assign("MLACTBRPZHBQXHIWNVJRSAPIBZFAVAYEZ");
    msg.flags = 160U;
    const char tmp_msg_0[] = {87, -75, 39, -72, 18, -123, -77, 59, -42, -34, 85, 68, 37, -113, -77, -66, 33, 92, 7, -23, 85, 121, 40, 12, 105, 106, -124, -110, -78, -105, -113, -27, 69, 80, -59, -109, -117, -19, 71, 49, 93, -111, 5, -93, -12, -47, 46, -52, 29, -96, 100, -92, 97, -19, 70, -45, 17, 17, 28, 76, 49, 74, -95, 99, 72, -36, -93, -53, -20, 49, -34, -56, -114, -66, 21};
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
    msg.setTimeStamp(0.7229230177603491);
    msg.setSource(1552U);
    msg.setSourceEntity(225U);
    msg.setDestination(17442U);
    msg.setDestinationEntity(74U);
    msg.seq = 40068U;
    msg.sys_dst.assign("PRXFGDGZDNYSVQXJSCDCLSKEGBNBPPRDMIHJRMQMEUXJHTHLEDGTMVWNSGKKZYCSFBLQWWRFVLLNPJRUFGLBRXVQZIYYNITTTOZQMFTEZKVOPBQMOZXBLMAYDQSVTFTHIUWGCAISINPYASPWIJEXOUNKEAJEXN");
    msg.flags = 73U;
    const char tmp_msg_0[] = {-2, 5, -8, 76, 32, 15, -58, -106, 100, 26, 123, 117, 51, -120, -109, 69, 1, 1, 113, -22, 10, 120, 28, 88, -14, 96, -108, 87, -51, 89, -42, -28, -51, -110, 32, -60, -48, 89, -83, -108, -105, -22, 51, -48, 1, -3, -128, -101, 79, -104, -24, -111, 57, 80, 20, -95, -47, -98, 81, 68, 112, -107, 18, 122, -97, 46, 77, -7, -65, -117, 10, -54, 107, -97, 123, 68, -2, -16, 65, 0, -98, -60, 114, -69, -71, 123, 57, 45, 59, -36, 73, -91, 123, -75, -112, -37, -120, -105, 5, -121, -54, -20, -10, 47, -51, 98, -75, -4, 28, 105, 45, 82, -128, -8, -46, 47, -90, -78, -7, 74, 118, -2, -43, -12, 14, 117, -126, 109, -123, -77, -62, 112, 57, -40, 17, 75, 21, 5, 25, 3, -44, -119, 76, 74, 95, -54, 105, -78, -90, 125, 53, 21, 60, -97, -58, -126, 105, 61, 110, -92, -57, -95, -22, -107, -47, -25, 16, 120};
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
    msg.setTimeStamp(0.9603208112083034);
    msg.setSource(59890U);
    msg.setSourceEntity(4U);
    msg.setDestination(875U);
    msg.setDestinationEntity(135U);
    msg.sys_src.assign("QTLTMZLYDKNZQLJGCFGWHGBPLPVJSKNAWXVUPKOQRDVCUZOAHSTUIQKEELGIGCEESFRORWCSVOVFPQWHKVHZKYBSMYTNMDIYQENEXPWPFUXLNAQDEGXZOOCAIFGVWBXFCDZITYVFRPEKPIWXMQBUMDRSJNWGJFNYUHSSAAHNGYOFIJHJLMDCJFDZTKHMYJLTCLHXNGLBABEKTRMVOEAWCBNPX");
    msg.sys_dst.assign("LEWHUCOQMFZRHTKKKOOBQGPJCFDPSUCBUUTIRQKAXZIWYTIIHEPUCAVPUBUHEOWSQP");
    msg.flags = 248U;
    const char tmp_msg_0[] = {60, 56, 16, -22, 13, 68, -11, -59, 64, 36, 43, -43, -113, 111, 34, -104, 9, -2, 52, 94, -59, -65, 119, 110, 33, 22, 13, -62, -7, 31, -54, -73, -80, -41, 72, -9, -44, 35, 18, 126, 64, 75, -38, -10, -102, -45, 72, -120, 22, -38, -102, 1, -99, 79, -107, 27, -122, 10, -57, -62, -54, -49, 106, -103, 72, 7, -114, 43, 98, 79, -21, 85, -74, -66, -74, -75, -68, -5, -110, -55, 40, 13, 50, 107, 78, 26, -118, 36, -36, -85, 29, -73, 121, 70, 4, -89, 87, -88, -125, 93, 119, 66, 82, 48, 112, 55, -16, 75, -122, -16, -114, 46, -91, 59, -23, 44, 106, -43, -113, 53, 75, -126, -75, 14, 70, -92, -47, -75, -67, -110, 14, 22, -14, 93, 75, 19, 69, -38, -87, 75, 73, -2, 103, -119, 60, -114, 93, 33, 59, 53, -125, 27, -83, 73, -24, -73, -47, 126, -32, -103, 114, -58, -84, 91, -106, -52, -28, -82, 73};
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
    msg.setTimeStamp(0.2684563841802403);
    msg.setSource(60087U);
    msg.setSourceEntity(186U);
    msg.setDestination(13816U);
    msg.setDestinationEntity(94U);
    msg.sys_src.assign("YXKCKRETUQDTNJAWFUBOIWORYAUDVCNJNKHZFHUBTELCNUVJJWAUQRGCQQRADIXNUGFEEURBAHJAFVDHCYESTEIMLBPDBVWDQYDNKQGEBSGHGKLXMWXLSEMPZYTEVNASZINMOXKVQRDZVFOQPLFWHLHTRGDLCIXMW");
    msg.sys_dst.assign("RHRUOHYJMWFNDXCJWABOWYOKCYUOWCOWLMSUYTXNFBQIDKXSVCJTMPHYRPUSSQWEOZIBOFHXMWZLQVEPISSOWRZUBLUIDLFDLFTMEHZYZTEFCXJTZRUQUVITVCBNHNGRVXARHKAMAYMSGFAKSINJBGSMPPJRTISEBHGKPQNVGALKJVAZQLPFDCJEIOMDPUVUWYQJRITXBAKFQIVTJGKXRLCAVZHMEELEYGXPQFCQAKGDZCPLNODXEKNDG");
    msg.flags = 66U;
    const char tmp_msg_0[] = {-64, 116, 64, 35, -18, -10, 34, 101, -22, 93, 103, 20, -69, 46, -32, 114, -99, -6, 62, 106, 27, 92, 50, -113, -26, -86, 86, -121, -7, -112, -117, -126, 22, 106, 51, 112, 28, -74, 120, 80, -90, 12, -82, -24, 49, -80, -81, -36, 64, -105, -108, 49, -70, -2, -61, 55, -100, 116, 56, 60, -65, 98, -33, -47, 99, 40, -106, 120, 50, -75, -89, 56, 125, 40, -26, -106, 98, 88, 62, -38, 16, -102, -54, -96, -87, 114, -89, -93, 98, 124, 10, -4, 91, 66, 125, -89, -70, -57, 83, -100, -96, 83, 116, -108, -31, 69, 79, -59, 0, 125, 104, -112, -40, -124, -34, 111, 30, 78, -8, 78, 22, 34, -128, -116, -104, 45, 76, 78, -34, -7, -105, 104, -116, 64, 116, -31, 43, -23, 124, 112, 115, 90, 46, -5, 33, -72, -38, 23, -69, 63, 39, -44, -30, -2, -94, 118, 80, 90, -43, 124, 94, -72, -9, -109, 118, -57, 116, 49, 71, 113, -93, 78, 79, 73, 112, 30, 27, -86, -99, -56, -44, 101, 48, -94, 9, -41, 93, 7, -127, 38, -114, -15, -89, 49, -63, 31, -34, 30, 89, -78, 77, 90};
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
    msg.setTimeStamp(0.2531154514346664);
    msg.setSource(22819U);
    msg.setSourceEntity(241U);
    msg.setDestination(4362U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("FFXWSPTACRHJIPVNPCMCQFWEXOQQONHUISZDMHIBKOMYHKVZOOXKAEYHSNPFWYZL");
    msg.sys_dst.assign("OUZZDXYBDEREJYSXFMKEQLAKLPNFLHTFZZKFLRXWNZCFCJD");
    msg.flags = 166U;
    const char tmp_msg_0[] = {-74, -106, 42, 85, -69, -42, -97, 28, -27, -107, -91, -26, 64, -51, 93, 33, 61, 73, 98, -106, 40, -104, 37, -41, -17, -123, -28, 20, 115, -126, -43, -83, 3, 18, 120, -76, 68, -17, -96, 92, -15, 105, -104, 18, -59, 22, -77, 64, 47, 108, -89, 3, 114, 6, 53, -69, 38, 74, 106, -123, -59, -36, -56, -4, -96, 60, -5, -10, -104, 108, 67, 82, -119, -9, 47, 20, 52, -48, 116, -62, -44, -123, 53, -33, 6, -13, 98, -119, 101, -14, -92, 65, -13, -7, 77, -109, 29, 25, 31, -64, 7, -114, 118, -7, -91, -27, -90, -121, -54, -79, 52, 103, 48, -45, -5, -25, -40, -42, 113, 65, 100, 79, -107, -11, 69, -89, -3, 117, -62};
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
    msg.setTimeStamp(0.06572789766451503);
    msg.setSource(17546U);
    msg.setSourceEntity(123U);
    msg.setDestination(41213U);
    msg.setDestinationEntity(192U);
    msg.seq = 44882U;
    msg.value = 180U;
    msg.error.assign("LKUMJATZDBNWOVCGRKIGWFPZRCWSVKLDHMUJNRYPMINLQXVAGVITXALDJLKQSUXNUICORPBTRTJMNDOZXHZHGUIMSETVVCVYWHWEACQDYDZMQVPBJKFALFDFKBIOTSLVCAWGEPGUGRPDZXJMXNOKKSJSZEBXESEKBAOEAFVYHJCTDRZOLIQYMEGCUBUWKAMUUZYHYGWJRSQCYJIPSWHEI");

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
    msg.setTimeStamp(0.25472506450249055);
    msg.setSource(65206U);
    msg.setSourceEntity(234U);
    msg.setDestination(11302U);
    msg.setDestinationEntity(92U);
    msg.seq = 26689U;
    msg.value = 48U;
    msg.error.assign("AWXDUQJBOPFSRXOVTCRVHIVKXNTFIBBEHMMSNYPMQE");

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
    msg.setTimeStamp(0.2939616382905106);
    msg.setSource(39158U);
    msg.setSourceEntity(200U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(193U);
    msg.seq = 61695U;
    msg.value = 229U;
    msg.error.assign("LZKXGVDETJICPAMNDGMOYRUDFCZOMYEOGSGWJVBANIPUMIDSJOJOMVWU");

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
    msg.setTimeStamp(0.6563496168043635);
    msg.setSource(23202U);
    msg.setSourceEntity(170U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(195U);
    msg.seq = 12982U;
    msg.sys.assign("KJIYOPGVMGXVEFBIPJTAQHPILSXOBWZJZSKFJNXYCWGJWDWCGUXVDAXTEQHTQGJXKYK");
    msg.value = 0.5364378967055393;

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
    msg.setTimeStamp(0.7289522175097717);
    msg.setSource(11424U);
    msg.setSourceEntity(112U);
    msg.setDestination(4003U);
    msg.setDestinationEntity(23U);
    msg.seq = 6593U;
    msg.sys.assign("KFLNFUQNEYOWBHNBPNDMCUTOTNQJLBMARXNIJFPGNEOKWATIJLKQYATDZTCPYVZVEWSRKDXWGQH");
    msg.value = 0.27205651328411107;

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
    msg.setTimeStamp(0.29398326667348884);
    msg.setSource(40864U);
    msg.setSourceEntity(75U);
    msg.setDestination(47970U);
    msg.setDestinationEntity(118U);
    msg.seq = 62945U;
    msg.sys.assign("LZRNGXVVPADUJTMIGSUFTEGOYKTGNFVTYBBEKSSHDHYJXKYLXSRJRPZJJLTNVEQKDRDUZCNTEMABALQFIIJOREOQCDEYFWQZPDLJLBOPGUWHLIZSMDMUUGOVEDZJQHRXOUIUBPBAVUCRICKXIMFMWXXOFYRUWOQLQTXYKWAIWPGSANBMHLYELAYFCCFXFS");
    msg.value = 0.5280253309831044;

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
    msg.setTimeStamp(0.4874892631590032);
    msg.setSource(34540U);
    msg.setSourceEntity(47U);
    msg.setDestination(153U);
    msg.setDestinationEntity(187U);
    msg.action = 104U;
    msg.longain = 0.19413329825063208;
    msg.latgain = 0.5247572557541836;
    msg.bondthick = 493505797U;
    msg.leadgain = 0.4142235001906234;
    msg.deconflgain = 0.6298525652874934;

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
    msg.setTimeStamp(0.13783688586149434);
    msg.setSource(51271U);
    msg.setSourceEntity(21U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(107U);
    msg.action = 177U;
    msg.longain = 0.11024155104067312;
    msg.latgain = 0.9731137383922148;
    msg.bondthick = 1845374532U;
    msg.leadgain = 0.47327293167085505;
    msg.deconflgain = 0.31291755601024696;

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
    msg.setTimeStamp(0.4044169189859679);
    msg.setSource(25568U);
    msg.setSourceEntity(0U);
    msg.setDestination(34647U);
    msg.setDestinationEntity(105U);
    msg.action = 24U;
    msg.longain = 0.05118247088090977;
    msg.latgain = 0.02204843058158601;
    msg.bondthick = 3879825448U;
    msg.leadgain = 0.31396467361167935;
    msg.deconflgain = 0.6771395525116615;

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
    msg.setTimeStamp(0.1737234274249525);
    msg.setSource(46444U);
    msg.setSourceEntity(142U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(201U);
    msg.err_mean = 0.6162963633542877;
    msg.dist_min_abs = 0.9836417615903326;
    msg.dist_min_mean = 0.786157482414244;

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
    msg.setTimeStamp(0.22028461454455106);
    msg.setSource(62842U);
    msg.setSourceEntity(84U);
    msg.setDestination(59026U);
    msg.setDestinationEntity(72U);
    msg.err_mean = 0.7319632801375934;
    msg.dist_min_abs = 0.8428719480883234;
    msg.dist_min_mean = 0.8777792217540772;

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
    msg.setTimeStamp(0.06812555242819074);
    msg.setSource(5345U);
    msg.setSourceEntity(62U);
    msg.setDestination(39189U);
    msg.setDestinationEntity(223U);
    msg.err_mean = 0.4167677306078633;
    msg.dist_min_abs = 0.8080243538961507;
    msg.dist_min_mean = 0.9379517586232358;

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
    msg.setTimeStamp(0.3316171769676305);
    msg.setSource(23887U);
    msg.setSourceEntity(229U);
    msg.setDestination(15516U);
    msg.setDestinationEntity(137U);
    msg.uid = 73U;
    msg.frag_number = 20U;
    msg.num_frags = 59U;
    const char tmp_msg_0[] = {-63, -103, 107, -21, -49, 105, 63, 19, -116, 70, -20, 39, 111, -89, -6, 117, 74, -22, 25, 75, 26, 84, -17, 46, -45, -20, -20, -106, 2, 75, -13, -73, 38, 102, 9, 28, 47, -6, 90, 66, -101, 59, -2, -91, 100, 63, -125, -53, -44, 32, 57, -60, 70, -51, 91, -38, 30, 40, -43, -64, -40, 58, 68, 57, 85, 114, 38, -47, 87, -38, -98, 61, 42, -20, -50, 56, 74, 32, -90, 66, 97, -117, 34, 116, -23, -37, 55, 104, -82, -77, 74, -72, 102, 57, -53, 57, 69, -101, -56, 52, -8, 74, 18, -116, 68, -53, 72, -77, 89, 104, -107, -2, 79, 38, 61, -42, -102, -43, -67, -21, 40, -31, 1, 123, -14, 26, 28, -66, -20, 114, 70, -122, 40, 28, 75, 115, 104, 107, -81, 50, 44, 4, 71, -109, 65, 44, 121, -69, -96, 112, -2, 28, -72, -108, -33, -56, 104, 39, -65, -37, 35, -56, -13, -2, -78, -122, 66, -12, -24, -96, -24, -108, -30, 12, 67, -34, -57, -7, 92, -108, -29, 71, 43, -43, -26, 110, 6, -74, -113, -18, -57, 99, -71, -4, -50, -50, -104, 16, -93, -102, 80, -121, -10, -57, 4, -100, -93, 80, 54, -16, -3, -34, -13, 65, -101, 120, -66, -103, -85, -35, 6, -60, 52, 55, 85, 89, -3, 113, -90, 9, 86, 106, -50, 41, 120, 42, -92, 46, 60, 99};
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
    msg.setTimeStamp(0.8580345237389044);
    msg.setSource(42845U);
    msg.setSourceEntity(120U);
    msg.setDestination(39222U);
    msg.setDestinationEntity(15U);
    msg.uid = 241U;
    msg.frag_number = 95U;
    msg.num_frags = 37U;
    const char tmp_msg_0[] = {121, 80, -39, -5, 15, -25, -75, 30, 50, 5, -16, -83, -63, -48, 113, 83, -127, -103, -50, 46, 0, -119, -29, -59, 117, 70, -76, 48, 35, 27, -94, 111, 64, 3, 7, -38, -89, 98, -76, 29, -42, -57, -78, -33, 83, -34, -88, -50, -98, 92, 6, -33, -68, 30, 73, -102, -121, 113, -41, -78, -95, -17, 4, 60, -15, -36, -22, -57, 108, 102, 102, 87, 115, -40, 125, -120, 41, -114, 101, -75, 79, 16, 38, -113, -39, 107, -23, 26, 70, -74, 17, -92, 65, -77, -13, 59, 115, -58, 114, 20, 17, -20, -41, 33, -45, 90, -9, 65, 119, -9, -124, 124, -68, 84, 43, 62, -27, -84, -46, -4, -105, 40, 81, 13, 114, -31, -115, 6, -105, 12, -22, 38, 4, -63, 98, -77, 56, 48, 102, 109, -8, -40, 98, 122, 54, 36, -95, -87, 29, 119, 98, -66, -105, 57, 66, -44, -118, 1, 0, 96, -6, -122, 64, 79, -97, 32, -113, -12, -107, 61, 81, 20, -32, 124, 54, 91, 87, -62, -98, 18, 56, 50, -17, 65, -100, 101, -33, -122, 1};
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
    msg.setTimeStamp(0.8438480597792523);
    msg.setSource(36466U);
    msg.setSourceEntity(25U);
    msg.setDestination(65004U);
    msg.setDestinationEntity(131U);
    msg.uid = 173U;
    msg.frag_number = 60U;
    msg.num_frags = 170U;
    const char tmp_msg_0[] = {111, -109, 9, -8, -8, 52, 80, 71, -7, 39, 94, 17, -107, -99, 89, 107, -105, 91, 64, 99, 45, 47, 46, -4, -93, 79, 118, -2, -96};
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
    msg.setTimeStamp(0.766014642473287);
    msg.setSource(53253U);
    msg.setSourceEntity(38U);
    msg.setDestination(20963U);
    msg.setDestinationEntity(214U);
    msg.content_type.assign("ICPFYMOLYWQGSCTTUSJXGSKKPUFLWXJYICMKKKFNBQNDJKHJQHWABOWZOAXM");
    const char tmp_msg_0[] = {101, 113, 116, 5, -74, -55, 46, 36, 14, 117, -23, 71, 113, -19, 66, -126, -5, -103, 43, 20, -69, 96, -122, -9, 17, 90, -25, -81, 94, -5, 35, -81, 111, -43, -27, 107, 115, 11, -114, -1, -5, -58, -51, 96, -107, 103, -108, -126, 8, 42, 112, -82, 51, 97, -66, 26, -29, 68, -4, 6, 111, -85, -97, -81, 74, -83, -85, 57, 98, 102, 106, 60, 30, -26, 57, 71, 74, 81, -89, -1, 126, 116, -89, -47, -117, 121, -125, -43, 26, -61, -24, 6, -126, -128, 121, 44, -59, 11, 62, 17, -70, 2, -45, -56, 112, 105};
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
    msg.setTimeStamp(0.868369022070429);
    msg.setSource(62502U);
    msg.setSourceEntity(142U);
    msg.setDestination(48271U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("LUCXKQPOACVMYGDFYWEMEZBPUUSUUORJVGSPFAWSHEBKQYLBGIJXAIETETJSTGTZRNFBFLMGHBWWGHNCENZHPVWZXZKOUMFQOJNDPTY");
    const char tmp_msg_0[] = {-106, -11, 97, -122, 43, -114, 19, -67, 61, -91, 3, -32, 100, -32, -128, 5, 61, 21, 113, -41, -66, 119, -28, -49, 20, 126, -15, 83, -122, 54, 51, -128, 28, 63, 86, 66, 5, 79, 122, 5, 42, -44, 33, -120, -67, -98, 1, -42, -66, -86, 82, -13, 26, 121, -69, 62, -24, 25, -72, -103, 26, 114, 18, 88, -40, 72, 48, 105, 117, 89, 12, -106, -104, 93, 96, 126, -57, 10, 26, -108, -41, 118, 25, 54, -18, -18, 9, -91, -15, -89, 101, 100, -126, 5, 10, 121, 26, -112, -55, 48, 33, 106, -70, 12, -126, -15, 120, 34, 54, 7, 83, -28, 70, 111, -2, -74, 20, 1, -50, 49, 93, 3, -31, 116, 75, 78, 119, 117, 21, 123, 112, -3, -117, -84, -109, 47, 72, 81, -29, -59, -65, -122, -122, -104, -104, -68, 52, 2, 111, 1, -100, 54, -110, 31, -68, -39, 112, -47, 17, 18, 80, 82, 101, -88, -69, -41, -59, -38, -7, -31, 96, -122, -4, -67, -10, -15, -115, -59, 40, 84, 43, -6, -58, 51, -110, 53, -109, -15, -40, 77, 96, 105, -32, -112, -15, -72, 102, 83, 82, -113, 46, -79, 62, 94, 53, -73, 52, -53, 108, 97, -8, -7, 8, -107, 32, -46, 112, 109, 83, 92, -114, 112, 123, 70, -66, 70, 93, -105, -60};
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
    msg.setTimeStamp(0.7265570325474232);
    msg.setSource(45075U);
    msg.setSourceEntity(87U);
    msg.setDestination(43753U);
    msg.setDestinationEntity(171U);
    msg.content_type.assign("SKFADUQOLQOGINWWYOJNMXLGDAEXBBFPHKBJMCQATGHGVRASQYLJUSCPXHRPGGCPKOZBCMKTYZGHJQFSUAZXYLPFWFARQVNWAVRFVJZMZBUNQUELEBYODEBDDSSJKXRISCMMVUBPTRKCQIBRLERLY");
    const char tmp_msg_0[] = {68, 115, 19, -113, -119, 22, 40, 0, 101, 43, -64, 6, 29, 13, 72, 125, 82, 102, 64, 83, -73, -46, 95, 117, 63, -69, 120, -98, -3, -120, -91, 80, -67, -18, -118, -44, -102, -98, 79, -62, 66, -10, 71, -83, -38, -71, 48, 100, 6, 5, 61, 26, 51, -99};
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
    msg.setTimeStamp(0.6331655244136134);
    msg.setSource(31237U);
    msg.setSourceEntity(249U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.4269055547376517);
    msg.setSource(54180U);
    msg.setSourceEntity(171U);
    msg.setDestination(58836U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.37918675334645746);
    msg.setSource(20711U);
    msg.setSourceEntity(166U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(152U);

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

  return test.getReturnValue();
}
