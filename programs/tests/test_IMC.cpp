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
    msg.setTimeStamp(0.333325299455);
    msg.setSource(559U);
    msg.setSourceEntity(162U);
    msg.setDestination(49787U);
    msg.setDestinationEntity(205U);
    msg.state = 97U;
    msg.flags = 145U;
    msg.description.assign("SLSMPCTHFXGOQFPOLANLCTTKWCZTQADWMRXEZZHIDLQMPXWGQANEIMIDIWOYBWJVWLQVTBERRHPCTKGEKBSVVQJOPFLBKMFVDGRBRWMQFMUGLUYODKKAIHTVZAUIDLBXFPYXHNDCTGOACEUDUHQDWAIYUGWVNSQNKPJSHWSKMVJNRJXZMDONRZUXZFHHBLUTPVTYNKGGXFZBYAGLSECCNREJPSCUEOYOPIRIZSKENXOVJZJQ");

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
    msg.setTimeStamp(0.616470494134);
    msg.setSource(13265U);
    msg.setSourceEntity(54U);
    msg.setDestination(51167U);
    msg.setDestinationEntity(120U);
    msg.state = 164U;
    msg.flags = 119U;
    msg.description.assign("RADQLCEOHBEOTANWQSIXDNRHBAXYKWXBILKHYQWLSYGDMPFQKGEYXVTQHGQFJQSSFCWHTWUFNZNLGAUDNDXVLNJTXMOROOSFDJIEZRPDFVQRALBTEFHNAOHXRGUPJNZHBUZFTOPSBYNYVCPVIAKVCKXZLTMIZACZMCGJEZEMYVUXTFXRKABOU");

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
    msg.setTimeStamp(0.295432572679);
    msg.setSource(24809U);
    msg.setSourceEntity(54U);
    msg.setDestination(41339U);
    msg.setDestinationEntity(200U);
    msg.state = 70U;
    msg.flags = 0U;
    msg.description.assign("DXIOCSUVNMPBFZVOFOMKDAYVZSJWWNKPNUSXGLTMEXJRPCULCPSTKCNLDVCYGXYHIB");

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
    msg.setTimeStamp(0.824855194501);
    msg.setSource(31875U);
    msg.setSourceEntity(121U);
    msg.setDestination(62148U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.472493130258);
    msg.setSource(24009U);
    msg.setSourceEntity(16U);
    msg.setDestination(42348U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.792186878014);
    msg.setSource(47075U);
    msg.setSourceEntity(53U);
    msg.setDestination(24620U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.579557187293);
    msg.setSource(2789U);
    msg.setSourceEntity(53U);
    msg.setDestination(11071U);
    msg.setDestinationEntity(24U);
    msg.id = 214U;
    msg.label.assign("RPRKCEAFBJTVSHPZJDWXBMWFFNBSQOTJYMDRUFAFIHNCWGDZYIMOCHNKPBQQOHBBWRURRPZSIGJGAVNHFROXSXKNGUKLDZUNKBZJFJSERXWCDVLQZBTHHRQEKXJWZKPSEGEAHQLXUYMVIDNMIEAGDTGGCQLKWBYCQYEHFHUEWVVYTNLUPPMOOAUCVZINXO");
    msg.component.assign("VRSQZMFHHCNEUVDWOXYRXIJIOOFKZZMDBFQTCTXEAGYXBSPHGNINSJRPIGTZUYEPQUEFUXFQL");
    msg.act_time = 5195U;
    msg.deact_time = 13681U;

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
    msg.setTimeStamp(0.776260010818);
    msg.setSource(55060U);
    msg.setSourceEntity(11U);
    msg.setDestination(187U);
    msg.setDestinationEntity(51U);
    msg.id = 30U;
    msg.label.assign("MIOUQGAWPYBXQSXCULZZASVFNPUSLGGVLBSWXIWELJLHDOPNXHIANHCRVQFOLDURFRVSKNZMJBCMKRSHAADQNQVEDKHWTDBDBXFAZROWEXUNDIULIIWXXEYITXQGPNHYNNCWOIBMDGJLJGFTQSJTUIPSRPKOMQZFFEFHCHOVOPDKRBPUMM");
    msg.component.assign("FNFXSUBJTZSGGRXWLVSGAIALRKMOCMKNBWIDIWKMCJIUMZLILUTYNVPWHKDRPTGZAAZERXLCDOQJUEZDTUHMYDPEVQFFLWGVOUNKJNPGPBRCJWXPRAOHAAJJBTIHIBQVFQQSBOEXVEFSIKYUYCLSODOCMPCKWHVPSCJKE");
    msg.act_time = 56244U;
    msg.deact_time = 25857U;

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
    msg.setTimeStamp(0.626106100629);
    msg.setSource(42292U);
    msg.setSourceEntity(207U);
    msg.setDestination(50963U);
    msg.setDestinationEntity(85U);
    msg.id = 232U;
    msg.label.assign("BXPXGDQIPNOBJEAQZUKHJHHRWCDNCVSUMQZXNGTTDABJNRZUFROAWCXPLSMFIYNAVJYWBHHLMZMGPCVAODEIJNZPIFLZTYRBJUBEGAQQGWSQUYRSXKTURTRTAUFYZDWOOTMIXKLPGDWWCF");
    msg.component.assign("NDPMYMWIDKGPOSDJOCKEZYJOKEEHMKUDUNTRODVLEFGTGMCNVKUJLNFZRYITXHSJGNZQTXHLBPBRJQDPSVUBES");
    msg.act_time = 60553U;
    msg.deact_time = 60474U;

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
    msg.setTimeStamp(0.208735775146);
    msg.setSource(38641U);
    msg.setSourceEntity(152U);
    msg.setDestination(10179U);
    msg.setDestinationEntity(156U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.272153594144);
    msg.setSource(39268U);
    msg.setSourceEntity(203U);
    msg.setDestination(34738U);
    msg.setDestinationEntity(161U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.774565915431);
    msg.setSource(39803U);
    msg.setSourceEntity(111U);
    msg.setDestination(49012U);
    msg.setDestinationEntity(22U);
    msg.id = 53U;

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
    msg.setTimeStamp(0.4323707605);
    msg.setSource(16445U);
    msg.setSourceEntity(20U);
    msg.setDestination(1706U);
    msg.setDestinationEntity(33U);
    msg.op = 80U;
    msg.list.assign("LWIOEGQDJQBPTBPDNXQRUYHWEHXLYZLCEXCREJTJEOGYVPNZIOGNMAMKOWISCXVBECBBMACFAHZNFQHLUHBDUOUKSZAQJFOVYGIKXVDMSKPUMVFFKBXADWTLCSGRIJARWYWGIPZDRQSIACPOPBLSJGFNZHRFYPNUACNPVLCHJGIKUUSEOJMTRZTBEAMLRURZXVTTUZDTCWMYVOGFNIFVDMYLQKVEQWJPKXSYFHOZSYJHEQTNDTW");

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
    msg.setTimeStamp(0.168246884132);
    msg.setSource(44086U);
    msg.setSourceEntity(68U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(210U);
    msg.op = 105U;
    msg.list.assign("IQNTACISXLVEOIEKAMVNKHTSHYCMULRZQLHKMESQJPZEHNFWMPTXJZVTYNXOYTSFHLFNWWNSAQXBWLCUPLYACKRPMHUYOMGTJOXGLJBDWBGLDAGZRQGXRPZTGHJYQBCIKFUEWHUEDVLDWMXARFRFUNCKFQOCKEPDDCZOFY");

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
    msg.setTimeStamp(0.678805661224);
    msg.setSource(26960U);
    msg.setSourceEntity(98U);
    msg.setDestination(7309U);
    msg.setDestinationEntity(170U);
    msg.op = 135U;
    msg.list.assign("OSQBXKTWWSHKOCQJZFEXJRPCPLDHVGIMZCAIYQLDNESRDRIOXDUFXLSFTVCQBTVMNMPYHUZGGNWXEVGZBNW");

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
    msg.setTimeStamp(0.320055764085);
    msg.setSource(56177U);
    msg.setSourceEntity(101U);
    msg.setDestination(44588U);
    msg.setDestinationEntity(237U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.330328546616);
    msg.setSource(31872U);
    msg.setSourceEntity(172U);
    msg.setDestination(1401U);
    msg.setDestinationEntity(47U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.714991992529);
    msg.setSource(40039U);
    msg.setSourceEntity(206U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(205U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.572404597834);
    msg.setSource(9786U);
    msg.setSourceEntity(5U);
    msg.setDestination(58280U);
    msg.setDestinationEntity(171U);
    msg.value = 239U;

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
    msg.setTimeStamp(0.24921675713);
    msg.setSource(18734U);
    msg.setSourceEntity(82U);
    msg.setDestination(53838U);
    msg.setDestinationEntity(183U);
    msg.value = 159U;

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
    msg.setTimeStamp(0.631010148283);
    msg.setSource(56713U);
    msg.setSourceEntity(42U);
    msg.setDestination(49329U);
    msg.setDestinationEntity(73U);
    msg.value = 163U;

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
    msg.setTimeStamp(0.927634412505);
    msg.setSource(52092U);
    msg.setSourceEntity(18U);
    msg.setDestination(58480U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("GJIOYGHLPUXJIQQNBJWUOGVKV");
    msg.message_id = 17841U;

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
    msg.setTimeStamp(0.811808067114);
    msg.setSource(3073U);
    msg.setSourceEntity(253U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("GKMEGJMLKFYATYLZRLCGUYYVWKZNXCRHLUMJMJOWGYBLXKJDERPQZPOGFEIILEBOIVNQNSTWVSTRVHLZORDILYQPHNGFJLUJUPFMQIFKXRGXIFHWSZDXUIQCPOCSYYABAQQFDNMLTMVWNXCHAWHHXNUPATDUBEAXVIQCTPJVWDCTXBFNSQ");
    msg.message_id = 8293U;

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
    msg.setTimeStamp(0.168761806651);
    msg.setSource(61905U);
    msg.setSourceEntity(64U);
    msg.setDestination(38080U);
    msg.setDestinationEntity(204U);
    msg.consumer.assign("KCLOXIQEZSPWGPYQUVWBWWHADGKLKOAJZSMRTUCZNBBFAKHVQDXEJTOSBIXYROVSTRSXPCMVGWCNUMKHRDELDBQNIGJKZBYGTLONQZMPUVIJXFLXKLTBRKECCGLRDRTRRYSBAECPZHFLXIAHBNJTWDHV");
    msg.message_id = 10137U;

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
    msg.setTimeStamp(0.186567237168);
    msg.setSource(43589U);
    msg.setSourceEntity(153U);
    msg.setDestination(18991U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.200366444908);
    msg.setSource(12803U);
    msg.setSourceEntity(8U);
    msg.setDestination(64072U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.925842599881);
    msg.setSource(2248U);
    msg.setSourceEntity(213U);
    msg.setDestination(45915U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.910623576057);
    msg.setSource(30679U);
    msg.setSourceEntity(199U);
    msg.setDestination(10285U);
    msg.setDestinationEntity(10U);
    msg.section.assign("VGQKIKLOMOOPSGRRINESRMPNWLNTZRCAKMBDSAJDLBACXAUBELBZRSKAHMBWNIZKBGNAWLOROVWITJGUKXWLTITXHLSQDUFDUAZFGQBGPEOHDTHGXFYXCPNNQCNVVEWQHCMAJJHWZVOOSPJWIGMMQVJRZEDKYPJYSBDFVRKDQJTYZPIULKXAFUVZMCCVEUYLPYFSEIFXHNJDYDLMTWUHXZTEIKCPSBCQQXQZTRFVEITOY");
    msg.param.assign("VYBJOCOQSXPXBSMWCRKBVSGTPCARDFMLXBWOEBNCBHBXBSXVIEHCLKIWMJSCRUXIFTUWZMMGAEUJUTGDWXJPWYXIGKD");
    msg.value.assign("NTFOUUAKBSWBHXBEQLJPPNYUOLPKGNOVWVFEDBAYEPNMFMNBIRQORSZZOKAJWLDMBXWEBEPYLQTDUEZXYPKEFTCQVYOYQMEQDGSPD");

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
    msg.setTimeStamp(0.534909787777);
    msg.setSource(23388U);
    msg.setSourceEntity(231U);
    msg.setDestination(5404U);
    msg.setDestinationEntity(215U);
    msg.section.assign("IDGDTPCPSBHFMXIQXODQUQYXXCSBNWBMJVAKGQWWLFJLRNQVUCXJUKMXMDSJVPUNOUWGKWRISMNKNPOWRNGHEZOCYBZWQNZFOOCTIVFZHFJBQASYYHRQZDTHZNZDOEIFAAGNGKWPFIGMALFEQOTATLWYFMHKDVMGRTSYXVLRDZJIJRZBXGUYPPPXGDZJKBSDESLCHETBUHRPHTOCEWCBTIKTE");
    msg.param.assign("ZATAOLGMLKOJWYISSRESGYUVRFPKONDXKVFXQMIFQURTBIYVNWSRBLDRIBRNTBXDHWCABFTGTKDSGEMJYWNUQZIPQXOXYVBIBKKSZMJEFSUNDJJXCFYYXMHAWQHJZYURPFWDNAQXRQZCGZMWTOSICCEEXQQ");
    msg.value.assign("GKKFCFYCTZSCLRJLSIYIARDVLPRVTIDEBTVXDHOKJYXZMTEEW");

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
    msg.setTimeStamp(0.487751529491);
    msg.setSource(58869U);
    msg.setSourceEntity(172U);
    msg.setDestination(58483U);
    msg.setDestinationEntity(177U);
    msg.section.assign("WRZKLHVQSYMDLGYXVQUKJEMGLRSRLKGUXCIPJLLIHUJCWUPAEKRUWUNOJVQNIBEFTCTDJOQMTNLMBONOZUAOPFGHZFYXFLEOTEAN");
    msg.param.assign("THJXRHUHOEUNMZDOXK");
    msg.value.assign("ZWHKXRNHUNZMTYVJMGDQBIOSWMSOLTNOMPRYWLSPJOVCTPDCVZHSEZKXLKTJFUIBGPDGDORYXBJRPQCHZWWFITJZINWVAESIVMLZSMFNXWBLLYRUGALEFZYQMUJJCYVYROPVGWYPMANDXDNCFUUJKVAYKHUABVSDWGGXIXCCXGEJDBRQHRPTVFBLKEAEQMKUJHIOKUDANEOFRTXKUGFNDKLHRAOWLCEHTTTIIEHQFBAM");

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
    msg.setTimeStamp(0.564858109548);
    msg.setSource(24244U);
    msg.setSourceEntity(182U);
    msg.setDestination(36051U);
    msg.setDestinationEntity(97U);
    msg.op = 18U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ECUDVQITSVCLYXIKFOOQGGDBRN");
    tmp_msg_0.param.assign("GPQEAUHVSHWNMSLXGPGCOMMORYCGCSHZWEQXPASYOBTSAYFKZCZZKJJTRJJTLUKWMRQBVLPDSBGWCLMVRYXJXWOILKVFCNURDAHVMTLUNFQOEXTPAHWUPFLBCWWVZREIBFDDROOUVYNHMDQZJGNKBXIGUFKIOAHDYXPHJTCOIFVEINDXGWEQEZVQTDORVNSNNUQHLIZSBKHZRIJPMFKGYTPGLFACMSNCXQYJITPUEJAYADKEDEWL");
    tmp_msg_0.value.assign("OZXVMHIZTDQBOUMFFNUCCXDYZCBGFJTHTPSRBITTXBAZRCQVXYVNISHWHMFEYUVSCUFEMYEZMLLFIJSJRGCK");
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
    msg.setTimeStamp(0.586541702944);
    msg.setSource(35981U);
    msg.setSourceEntity(151U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(138U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.549897099879);
    msg.setSource(8784U);
    msg.setSourceEntity(4U);
    msg.setDestination(62314U);
    msg.setDestinationEntity(1U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.93274065682);
    msg.setSource(31630U);
    msg.setSourceEntity(245U);
    msg.setDestination(46310U);
    msg.setDestinationEntity(215U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.253486701464);
    msg.setSource(55498U);
    msg.setSourceEntity(222U);
    msg.setDestination(43491U);
    msg.setDestinationEntity(33U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.874805335636);
    msg.setSource(55112U);
    msg.setSourceEntity(75U);
    msg.setDestination(12218U);
    msg.setDestinationEntity(54U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.858376043071);
    msg.setSource(1665U);
    msg.setSourceEntity(17U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(134U);
    msg.total_steps = 187U;
    msg.step_number = 93U;
    msg.step.assign("FMWUFVTRHSTQELBNXCEMGERXKKYQTYYTBGETGSKOCKIMXZBBOIPVDRPESHTLPSCHOWMBCFEUGRMFDXJFQYBUPJWIOZNZDZQCKQUJHJTPIRRVMWAZZXSRYILPVUAOFPGLBAINHDLXHCEPRJUIQGJCWOBHDFDTMGXQGFENKIDUVQFANJMLDGSUTW");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.056792961499);
    msg.setSource(42130U);
    msg.setSourceEntity(126U);
    msg.setDestination(53749U);
    msg.setDestinationEntity(106U);
    msg.total_steps = 135U;
    msg.step_number = 31U;
    msg.step.assign("IHBHLZBGDPRXCIWAUNYRNQNMOPOHLOQNUDSKVCAQBMYINFWJHVAXAJTHKILXFSEMYPFZVBCSDHZZIFLKWZTWRUUDFPJIXVECZDEZUWXDAKAKBNLZUOTGFBUOTASKGPOCFRQMIQMPHZHXHXMPJXKVLBQOJFAISWRSYWGMLBEOOLSATITLBKGTRRWUGJKPQVEGWJGMVYRRG");
    msg.flags = 74U;

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
    msg.setTimeStamp(0.657867813807);
    msg.setSource(36754U);
    msg.setSourceEntity(123U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(181U);
    msg.total_steps = 149U;
    msg.step_number = 251U;
    msg.step.assign("UCIUTDQZCRHAIEVOGLYTYPSVFZFNZNBPOLQYOYGNKMIBHZUPWWXPZDTJUXAWEWTQKHAAZRDMR");
    msg.flags = 21U;

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
    msg.setTimeStamp(0.765087616082);
    msg.setSource(53735U);
    msg.setSourceEntity(116U);
    msg.setDestination(35690U);
    msg.setDestinationEntity(126U);
    msg.state = 86U;
    msg.error.assign("IDUHWSMRZTNYBBEOGFWHIITPVMGCZJRLUWMGNPSUDAWDHLFAYNMUCOVHVZSDTHXVTAOYNGHPXEPTCEXODCAZGXYGBMJYHAGQSEIADKHLPSCRNJOFRFUWHFJVZDQSEXQV");

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
    msg.setTimeStamp(0.211724272371);
    msg.setSource(54480U);
    msg.setSourceEntity(158U);
    msg.setDestination(35119U);
    msg.setDestinationEntity(41U);
    msg.state = 106U;
    msg.error.assign("ZFUEHFXPYNNLQMKYHXJTGXUPUHNUVDPRFWJIGWOFBJYIUGQQWCIKAEEGJBXWZLNSPDBCBDXWYKOTRPSXYUAWDAOHNBJHDKGMAAYNYQOFYIHLVXFILCTGJIZDOHTTUVBYZNROKCQSCUSANNFIRAGDEXQMGMMKEQKEJPCEEKSZSAJXBTGLFPRAFOHTWLPVTNFTVMOZLVJJ");

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
    msg.setTimeStamp(0.583990291846);
    msg.setSource(15433U);
    msg.setSourceEntity(200U);
    msg.setDestination(8630U);
    msg.setDestinationEntity(225U);
    msg.state = 200U;
    msg.error.assign("SZEYMRZKMXIRETRTGJCZHNZPRIONMKOQWCWXFYJOARJBKBQPQFTGMOPDEYAELZVHQLFYKWTTBAAQUHICTZFCOVFJVODKNCFBISYRMLINZJVDOFEPGEQXJFPSPABMXHNPWGORUNQVRZTUAJPUUPYKRLUIIYHDXTGSKKDUHCMKGEINUVXVAJLNFZGDCNBLQBBHLMEGXHDWVWQSQHSSTVBXROSGMZELVWYTWCIABLSJYXCU");

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
    msg.setTimeStamp(0.912017219963);
    msg.setSource(12633U);
    msg.setSourceEntity(217U);
    msg.setDestination(6915U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.672613142881);
    msg.setSource(58099U);
    msg.setSourceEntity(97U);
    msg.setDestination(8684U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.454928263548);
    msg.setSource(50267U);
    msg.setSourceEntity(177U);
    msg.setDestination(60191U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.821154825913);
    msg.setSource(40296U);
    msg.setSourceEntity(201U);
    msg.setDestination(58182U);
    msg.setDestinationEntity(72U);
    msg.op = 79U;
    msg.speed_min = 0.420616360102;
    msg.speed_max = 0.181948343725;
    msg.long_accel = 0.199211356335;
    msg.alt_max_msl = 0.0840261460578;
    msg.dive_fraction_max = 0.469931465173;
    msg.climb_fraction_max = 0.917944534157;
    msg.bank_max = 0.241960061655;
    msg.p_max = 0.300956134497;
    msg.pitch_min = 0.288542879897;
    msg.pitch_max = 0.153931879765;
    msg.q_max = 0.424082717283;
    msg.g_min = 0.994500380294;
    msg.g_max = 0.356069980659;
    msg.g_lat_max = 0.210187978811;
    msg.rpm_min = 0.708462530812;
    msg.rpm_max = 0.808949997671;
    msg.rpm_rate_max = 0.969143336989;

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
    msg.setTimeStamp(0.986833550438);
    msg.setSource(1078U);
    msg.setSourceEntity(44U);
    msg.setDestination(30630U);
    msg.setDestinationEntity(113U);
    msg.op = 66U;
    msg.speed_min = 0.339165250731;
    msg.speed_max = 0.239491114359;
    msg.long_accel = 0.626809893822;
    msg.alt_max_msl = 0.310530716132;
    msg.dive_fraction_max = 0.936228180981;
    msg.climb_fraction_max = 0.128122750869;
    msg.bank_max = 0.576862177726;
    msg.p_max = 0.330067645369;
    msg.pitch_min = 0.400417806798;
    msg.pitch_max = 0.90876730228;
    msg.q_max = 0.023248937368;
    msg.g_min = 0.997724300254;
    msg.g_max = 0.154458734681;
    msg.g_lat_max = 0.021615533708;
    msg.rpm_min = 0.762987661501;
    msg.rpm_max = 0.164285873589;
    msg.rpm_rate_max = 0.552399384419;

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
    msg.setTimeStamp(0.53642353717);
    msg.setSource(54322U);
    msg.setSourceEntity(53U);
    msg.setDestination(327U);
    msg.setDestinationEntity(49U);
    msg.op = 49U;
    msg.speed_min = 0.799953073611;
    msg.speed_max = 0.244160203413;
    msg.long_accel = 0.735206195011;
    msg.alt_max_msl = 0.103271923035;
    msg.dive_fraction_max = 0.971884453736;
    msg.climb_fraction_max = 0.842079463488;
    msg.bank_max = 0.30953689659;
    msg.p_max = 0.499463521279;
    msg.pitch_min = 0.687864674687;
    msg.pitch_max = 0.0446680717736;
    msg.q_max = 0.795341038732;
    msg.g_min = 0.747785937508;
    msg.g_max = 0.176380917256;
    msg.g_lat_max = 0.747272724239;
    msg.rpm_min = 0.776889137136;
    msg.rpm_max = 0.0246909349687;
    msg.rpm_rate_max = 0.861788730945;

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
    msg.setTimeStamp(0.392575553962);
    msg.setSource(43754U);
    msg.setSourceEntity(40U);
    msg.setDestination(23590U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.153037976809);
    msg.setSource(22572U);
    msg.setSourceEntity(46U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.780306381159);
    msg.setSource(57975U);
    msg.setSourceEntity(114U);
    msg.setDestination(59001U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.232666650493);
    msg.setSource(65334U);
    msg.setSourceEntity(83U);
    msg.setDestination(19649U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.76442625394;
    msg.lon = 0.707068487236;
    msg.height = 0.747020353315;
    msg.x = 0.763472611604;
    msg.y = 0.70018782453;
    msg.z = 0.278776323847;
    msg.phi = 0.547407203337;
    msg.theta = 0.0269567174194;
    msg.psi = 0.271572086734;
    msg.u = 0.782246371167;
    msg.v = 0.573380204536;
    msg.w = 0.855576069415;
    msg.p = 0.246630505807;
    msg.q = 0.323223609103;
    msg.r = 0.48933484493;
    msg.svx = 0.878188167183;
    msg.svy = 0.56300944725;
    msg.svz = 0.0565253515912;

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
    msg.setTimeStamp(0.411189969833);
    msg.setSource(56371U);
    msg.setSourceEntity(244U);
    msg.setDestination(12076U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.145816699236;
    msg.lon = 0.22456890297;
    msg.height = 0.024247557012;
    msg.x = 0.156545268977;
    msg.y = 0.15328363568;
    msg.z = 0.0771573662001;
    msg.phi = 0.645581445261;
    msg.theta = 0.994890869914;
    msg.psi = 0.0126234601478;
    msg.u = 0.0511641974731;
    msg.v = 0.69792940848;
    msg.w = 0.55699637129;
    msg.p = 0.749327293031;
    msg.q = 0.518820680545;
    msg.r = 0.594735143207;
    msg.svx = 0.0254134650679;
    msg.svy = 0.796134888457;
    msg.svz = 0.616981177584;

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
    msg.setTimeStamp(0.0371431114821);
    msg.setSource(26837U);
    msg.setSourceEntity(156U);
    msg.setDestination(51845U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.278016930902;
    msg.lon = 0.876194031124;
    msg.height = 0.662534673307;
    msg.x = 0.0557821600824;
    msg.y = 0.135008586318;
    msg.z = 0.179762544336;
    msg.phi = 0.312089508077;
    msg.theta = 0.894417973938;
    msg.psi = 0.792962992145;
    msg.u = 0.174985268071;
    msg.v = 0.572898757062;
    msg.w = 0.437759494109;
    msg.p = 0.674906193439;
    msg.q = 0.375533548118;
    msg.r = 0.587120931749;
    msg.svx = 0.0351810738428;
    msg.svy = 0.518793693546;
    msg.svz = 0.740393824983;

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
    msg.setTimeStamp(0.829534539081);
    msg.setSource(45594U);
    msg.setSourceEntity(141U);
    msg.setDestination(37957U);
    msg.setDestinationEntity(88U);
    msg.op = 115U;
    msg.entities.assign("VABZLQIIHVSTIDNGJBLFKFQRKKKBUZFYROKTOMLYBSPIXZJQPZRPRQTUHYONDSKMNVIVCUNQPQBUOCQCHCAIIWEVLBMVQBEWBXWUNHXKUZLTEUGJFDJDXYDWTAQHAEWAGDJGARYWAPYJPSZFTMTYTWNMWUKQCKXSUSFEDJFXPTRISGOHJPXSZROCJLVGGAAYLAPXUEIIMPWZDCCOGLDNVZRMHGYXLBFHKBCSLRZHVONEGDWEH");

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
    msg.setTimeStamp(0.873954430737);
    msg.setSource(44949U);
    msg.setSourceEntity(81U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(40U);
    msg.op = 237U;
    msg.entities.assign("YQNHGZEXHMIQIOKRZWVPFSWYMMRGJCQPSDKZAJGDCJQEBZDNWQZNLJJROHXTMKTXODUBVNVORXTLUGSTLAOJPBTMVAHMFYNJZACUDKLGTXISFNAFBDIAGSQQGPPIZYHRVFEEEUKDCNQCBMLJHYAEICTYCUVHPBUUFSVWTELVXEOKZZLAPPJQMYWPNAFRINWFUXOBKKOXFZSYWWEJYSIMARBSHLIFSDGOGWKXGBLKRCHLTBTCYOPMUQV");

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
    msg.setTimeStamp(0.206659371746);
    msg.setSource(1377U);
    msg.setSourceEntity(210U);
    msg.setDestination(65335U);
    msg.setDestinationEntity(117U);
    msg.op = 41U;
    msg.entities.assign("OMPPRQPYSOXELFCSHCERXPXWIGJNMOTEPDABGZFKQYIOFXCKMIOJITNVXFZJWZIUUDQUKBRYBZTWZJLZRKXGPKLDVQQPXSBSYJYBDAUBEVVCDDEJDCGXEAVONECRSNPWXTQU");

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
    msg.setTimeStamp(0.0913598979764);
    msg.setSource(10817U);
    msg.setSourceEntity(23U);
    msg.setDestination(8633U);
    msg.setDestinationEntity(138U);
    msg.type = 9U;
    msg.speed = 61910U;
    const char tmp_msg_0[] = {23, 64, 94, 82, 2, 2, -77, 111, -8, 45, 66, 115, 118, -120, 77, 39, -62, 21, 117, 67, -8, 11, -62, 77, 48, -76, 94, -81, 99, -66, 60, 71, 18, 74, -71, -115, -83, -105, -23, -65, -57, 95, 8, 14, -68, -97, -98, 39, -68, 14, 53, -55, -21, 30, 36, -33, 107, -103, 41, 26, 17, 117, -117, 54, 17, -51, 33, -29, 11, 27, 67, -45, -16, -122, 42, 77, 92, -41, -68, 74, 61, -84, -85, -41, 113, 31, 74, -92, 68, -23, -75, -80, 33, 55, -52, 2, 96, -89, -41, 115, -121, -91, 70, -87, -89, 61, -5, -121, -87, -50, -127, -21, 82, 92, -116, -51, 94, 105, 73, -43, -35, -17, 96, 117, -87, -68, 112, 66, 53, 125, 66, 110, 9, 95, 24, -117, -42, -113, 103, 13, -81, -5, 90, 3, 121, -51, -100, -58, 73, -101, -35, 36, -17, -70, -20, 63, 95, 104, 19, 5, -80, -70, -128, -12, 122, 111, 5, 45, 89, 87, 97, -95, 90, 58, 100, 2, -100, -60, 24, 64, -42, 3, 35, -41, 126, -54, -23, 18, -68, 49, -125, -82, -122, -100, 77, 6, -24, -12, -117, -28, 69, -77, 108, -74, 113, -81, 71, 40, 124, 57, 94, 18, -37, -118, -40, -35, -100, 0, -117, -56, 6, -49, -125, 59, -52, -42, 117, 12, -26, 105, 94, 26, -70, 24, 89, -80, -111, 66, -84, -27};
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
    msg.setTimeStamp(0.711813159092);
    msg.setSource(21859U);
    msg.setSourceEntity(212U);
    msg.setDestination(31128U);
    msg.setDestinationEntity(234U);
    msg.type = 204U;
    msg.speed = 38468U;
    const char tmp_msg_0[] = {-98, -126, 1, -65, -33, -55, -12, -76, -72, 76, -58, 5, 72, -53, 34, -50, 10, 0, -101, 11, -102, 66, -117, 23, 109, -29, -59, -33, 51, -103, 61, -77, 102, 5, -82, -107, 49, -7, -101, 118, 124, 67, -97, -41, 28, -63, -90, -124, 37, 35, 101, -114, 27, -85, 59, -63, 62, 84, -124, 80, -117, -98, -58, -123, -128, -107, 122, -89, 16, 126, -84, 59, 89, -28, -88, -62, -19, -6, 109, 36, 60, 52, -45, 7, 93, 58, -112, -12, -123, -49, -105, -59, -93, -124, -97, -35, -119, -28, -84, 9, 14, 38, -4, 7, -119, 48, 16, 73, 62, 52, -80, 1, 19, 16, 38, 92, 122, 68, -6, -103, 54, 5, -103, 13, -68, 97, 98, -48, 95, -53, -86, 25, 25, 84, -117, -41, 2, -69, -93, -87, -59, -66, -66, -97, 107, -116, 17, -13, -118, -80, -36, 10, -5, -105, -95, 8, 63, -76, -91, 121, 22, -41, 120, -93, -113, -98, 7, -8, 75, 84, 48, -89, 5, -19, 102, 52, -65, 94, 48, 112, -46, 44, -25, 40, -108, -8, 13, 39, -75, -77, 15, -22, -107, 92, 86, -117, 34, 93, 60, 50, 1, 49, -26, -103, 94, -37, 108, -9, 23, 61, 67, 24, -5, -66, 116, -115};
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
    msg.setTimeStamp(0.983639316303);
    msg.setSource(56806U);
    msg.setSourceEntity(77U);
    msg.setDestination(45771U);
    msg.setDestinationEntity(7U);
    msg.type = 124U;
    msg.speed = 36872U;
    const char tmp_msg_0[] = {-7, 120, 96, -22, 31, 20, -103, -84, -2, 14, -1, 50, -63, 50, -76, -109, -96, 67, 55, 13, 125, 47, -65, -104, -76, -40, -42, 49, -116, -42, 61, -84, -70, 114, -122, 58, 46, 112, -106, -63, 36, -39, -120, -92, -93, 96, 112, 25, 34, -39, -92, 69, -3, -65, 46, -21, 70, 92, -8, 119, -59, -69, -56, -30, 20, 90, -4, -118, -41, 21, -50, 23, -23, 86, 66, -5, -9, 43, -43, 81, 45, -19, -75, 35, -33, -113, 96, -56, -17, -33, 60, 99, 15, -3, -37, -11, 94, -100, -87, 36, 10, 11, 14, -118, -123, 96, -122, -58, 113, 67, -31, -21, -6, 16, 86, 78, 3, -59, -62, -3, -17, 92, 39, -44, -49, -25, -73, -30, 60, -46, 4, 67, 72, -123, 87, -77, -9, -118, 49};
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
    msg.setTimeStamp(0.321656323987);
    msg.setSource(1777U);
    msg.setSourceEntity(147U);
    msg.setDestination(38861U);
    msg.setDestinationEntity(70U);
    msg.op = 55U;
    msg.tas2acc_pgain = 0.0370919056128;
    msg.bank2p_pgain = 0.475889615527;

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
    msg.setTimeStamp(0.250127465408);
    msg.setSource(58156U);
    msg.setSourceEntity(250U);
    msg.setDestination(54365U);
    msg.setDestinationEntity(231U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.78046795247;
    msg.bank2p_pgain = 0.938792678926;

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
    msg.setTimeStamp(0.979298548497);
    msg.setSource(22350U);
    msg.setSourceEntity(0U);
    msg.setDestination(39462U);
    msg.setDestinationEntity(18U);
    msg.op = 229U;
    msg.tas2acc_pgain = 0.410339184025;
    msg.bank2p_pgain = 0.048435047839;

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
    msg.setTimeStamp(0.415441133447);
    msg.setSource(30728U);
    msg.setSourceEntity(94U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(44U);
    msg.available = 3310541133U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.145998401181);
    msg.setSource(41444U);
    msg.setSourceEntity(209U);
    msg.setDestination(14584U);
    msg.setDestinationEntity(46U);
    msg.available = 3698111921U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.885483478576);
    msg.setSource(16670U);
    msg.setSourceEntity(154U);
    msg.setDestination(36321U);
    msg.setDestinationEntity(205U);
    msg.available = 754815734U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.712006338581);
    msg.setSource(58106U);
    msg.setSourceEntity(193U);
    msg.setDestination(2432U);
    msg.setDestinationEntity(104U);
    msg.op = 222U;
    msg.snapshot.assign("JUKBLEFKAUQZODDGNYHHKBJTNVFTWUBBWXYRYLRZNNRXKTWBHQCBDWQDEFGPTTMZMCHLQLGUHWXMMJDJVLKCJQMMDOIWXYXDISNSXXEMASTDLILLVHIVUEBWPHGRVCIAKYCSCBVBXGZWOYVFQRJNJTIGPERSFVKNOCMIASAYFWGDTDSMZSOEEGVKCYUIN");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 11520U;
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
    msg.setTimeStamp(0.8306377303);
    msg.setSource(43620U);
    msg.setSourceEntity(154U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(188U);
    msg.op = 29U;
    msg.snapshot.assign("WVMQKWZYKWKWIUFUOBAVPCZDCATQDSYTFYMBHRSRDAGDFMHGPUAJHJMNKWPVNOXEIBYOHXKCWKZXMESADPQIZQSLKCCGZCSAODUGANGGBIYKETHLQNUBTPEQLHRKUEGBPLYHUEA");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 30U;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.722846368509;
    tmp_tmp_msg_0_0.beam_height = 0.403180030988;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.679972309405;
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
    msg.setTimeStamp(0.360319428039);
    msg.setSource(8055U);
    msg.setSourceEntity(145U);
    msg.setDestination(41633U);
    msg.setDestinationEntity(134U);
    msg.op = 71U;
    msg.snapshot.assign("MMALMKTIJGYSBHCXOVRROTCTHZQBIHUXECPAVYOASEOXJYNQEBCWMKUFWBNLQQQJTOFAP");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 154U;
    const char tmp_tmp_msg_0_0[] = {18, -72, -55, -100, 118, 75, 45, 72, 24, -77, 70, 65, -106, 78, -89, 100, 103, -85, 6, 54, -47, 42, -4, 78, -11, 51, -8, -17, -105, -40, 101, 15, -41, -36, 67, -33, 0, 45, -38, 101, -43, 30, -29, 96, 27, -61, -73, -47, -7, 14, -13, 106, 123, 33, 108, 36, -95, 124, 54, -11, -43, 22, 51, -12, -122, 26, 39, 86, 15, -76, 62, 49, 14, 125, 102, -116, 48, 100, -108, 112, 110, -55, 113, -14, 87, 26, -118, -90, 63, 56, -111, 40, -52, -106, -36, 38, -24, -104, -106, 52, 80, -101, -5, -36, 51};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.843928051772);
    msg.setSource(26304U);
    msg.setSourceEntity(121U);
    msg.setDestination(59929U);
    msg.setDestinationEntity(91U);
    msg.op = 116U;
    msg.name.assign("DBDTMTZKTNFGYUCYHATCMGHZORWSFSZBZQUKMVCYTDCMWJHJZENNRFRJKEQJXPTRJATVBCQPONOBQRMRSGUSJJHTUPFCDBJYGPFRODJOLWFHLEKVLBUDGPPXOHAIEIAHNEXSLHPKDQSQYZXAJACMVBAVXCEWIDRFSCAYIVOMYWFVUZKWXZWWFZLXTUGLVXIAFWLGNIXONUHKUXSSLBEODIEP");

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
    msg.setTimeStamp(0.309305723064);
    msg.setSource(3500U);
    msg.setSourceEntity(3U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(167U);
    msg.op = 94U;
    msg.name.assign("KDLZXLBPRBYOYSFJKJIIUAMMUVZTIWUSLARZCUPQXSIILGBQEUHJCLTHSTJWQZBXCTDHKMMDGEJMNFHQAGCWPCDCZZNGBMNEKPDZYSQRRVDRYPY");

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
    msg.setTimeStamp(0.288953323515);
    msg.setSource(37852U);
    msg.setSourceEntity(7U);
    msg.setDestination(37485U);
    msg.setDestinationEntity(219U);
    msg.op = 143U;
    msg.name.assign("OWXXKMIBGUVVGNGGJJDWHZAMPUAIZKUPDKMLPMCEOHKBHSKMDZTYFVSOGCAIXZOFRDHQNJPQLJLMUQEWHLCTBFJNVDZVAXFCUGAZBNSRKKWJADMUYRIIVRJ");

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
    msg.setTimeStamp(0.77044579786);
    msg.setSource(1080U);
    msg.setSourceEntity(0U);
    msg.setDestination(26870U);
    msg.setDestinationEntity(244U);
    msg.type = 198U;
    msg.htime = 0.140217421996;
    msg.context.assign("AOTDCZGKTIPYQGTLXMPVUBSBORNYRETLOWBRGYETFOUAHGRDQXECCOYWYAHLFWJVPIHMHVOEIQEDKGODLNZHLULDKNPNTHVFQUTIGMJBJWAPPFFRMBXKIZDUQKPUUJZWQXHCPEBHXASVKCOYPYMSJXARTNAVHMZDFSNLEWTKWFURBGOQERBXBSBVZVXVXNFQNSSQIZJVNTN");
    msg.text.assign("VWJDZFFZEKCLFKSYOKYZKRMEAUHVCUCOATRMXLFYEUTQBIDFUWIOOPEVBDUFHBXNZPKVNTSYKAROLCXJPKECBVVPQOHUZJDXVNBRKYIMHQUMCGAIXHDDSYAIJJQWGYWXJWDGZERMGM");

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
    msg.setTimeStamp(0.913396572115);
    msg.setSource(17167U);
    msg.setSourceEntity(58U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(243U);
    msg.type = 138U;
    msg.htime = 0.919091791532;
    msg.context.assign("QFGCMKQSLJTZLBUHTEIYVDVJEPMVXMIIBULFK");
    msg.text.assign("YVRVBMGQWUUCNTGOXUWQXDKBCHFOZUPSEUCVVBHZEPNKNWVGMYHATCFAHXCJYLKMBKZIHACVWBTDTJSUMRQIIWAPZRJIYCFEWNVXLJZLOMGTWTEEDKXYQFDSQMLRCAQAAOWPESLYLZMPXSLZIVOENGYGYMJYCPKPTSFGGYNLRUUJXDFIHPNZJBJHVWHMQXNTDNJBVSHIRDJADUNHIFPZSBWOZTXQRFIDSMOKRPDUGQACQTAKLBOKBRSO");

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
    msg.setTimeStamp(0.344089255605);
    msg.setSource(54601U);
    msg.setSourceEntity(88U);
    msg.setDestination(23275U);
    msg.setDestinationEntity(16U);
    msg.type = 102U;
    msg.htime = 0.206331308208;
    msg.context.assign("MGRVJDKXPBDHZCRESDVGATWTY");
    msg.text.assign("IXEVDDQTURSTOCWIVIMRGYYOZHALMWORVYXQLTLNKLTUZAUZUCHYOBWDMBEMZEMPQNNVHZHEKTSCMBWZGBNYSZJOTXGJPNDJUJGEEALXSDPPSIYWKAWPHQVMRXJUJACKPLRFNXRKFMGEMDKYLURWCJGRXVWTFKBEZPYQNZJPGKNAVKFVOFDHO");

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
    msg.setTimeStamp(0.706238262135);
    msg.setSource(64071U);
    msg.setSourceEntity(194U);
    msg.setDestination(32305U);
    msg.setDestinationEntity(95U);
    msg.command = 4U;
    msg.htime = 0.563502394757;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 127U;
    tmp_msg_0.htime = 0.681399370399;
    tmp_msg_0.context.assign("DSWVLUEJPFQEXQYGOGDNPQCUTUWHWC");
    tmp_msg_0.text.assign("XXLBBVYGMYLIDYWQETFSKNHFYVFCUKXIAHPKJUIETSQNZCBQCOQDIZHSOELBMJ");
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
    msg.setTimeStamp(0.807328257383);
    msg.setSource(6101U);
    msg.setSourceEntity(9U);
    msg.setDestination(49311U);
    msg.setDestinationEntity(162U);
    msg.command = 149U;
    msg.htime = 0.618097223801;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 173U;
    tmp_msg_0.htime = 0.276185509714;
    tmp_msg_0.context.assign("RPSZJRFFAOVZ");
    tmp_msg_0.text.assign("YHVNGTWEALJLNXSLUTCXRKJWLHXCWNNJRBRVICMZPKWETYDBZAJGIOZWNWIHXMFR");
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
    msg.setTimeStamp(0.978648742371);
    msg.setSource(59184U);
    msg.setSourceEntity(131U);
    msg.setDestination(14409U);
    msg.setDestinationEntity(154U);
    msg.command = 90U;
    msg.htime = 0.745628188391;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 230U;
    tmp_msg_0.htime = 0.754942724472;
    tmp_msg_0.context.assign("WYAPXZXCNPECWSASPVTQRBKBZYMTBYYLECVTHNBSJCZGILOPFMTJKMZQIWSGIQAERMQMGXVGEHIGVKRPOFCZZHDVSGUKLYPLJIMPEQFFZDUHLLXQBLFTONUOFXWVNKNVUQSXSHIKRWBRNRNBTVDDVPBEUIATLOWNJCUZFOJBVERHEBCQOWTKIFOHXMYRWDJDYKLDKNRPYGCXSGFJDMHGDSTEYZMXPIQAATEYAWZC");
    tmp_msg_0.text.assign("JUDZBGRHWMPSJWQJLZARYNJGXHBVIHQXGFABMRWDNVLVYTOZSDYLSQOHDFUWWUSIKFCKGRNWGOPZPBQZTKCEJUJYFXEJCEHBHIP");
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
    msg.setTimeStamp(0.627506208054);
    msg.setSource(47889U);
    msg.setSourceEntity(26U);
    msg.setDestination(35529U);
    msg.setDestinationEntity(215U);
    msg.op = 12U;
    msg.file.assign("BOSEPNWDUBAASIJJLVMBFWOBGSSTBJKDYYTRCNJCFZCYSJCLVSUZXSZOUVNCIPCXBOPJDAVIHAOZQYTXYLTETNGQGWTMDECLGHPSQVAURUPANYRTTZGWBXKDDQRTEUCRKOPXIVAIPJBSHUOHQMXRFRKXZVHKJLEQUWRZNHEF");

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
    msg.setTimeStamp(0.893716914036);
    msg.setSource(17144U);
    msg.setSourceEntity(26U);
    msg.setDestination(9623U);
    msg.setDestinationEntity(126U);
    msg.op = 109U;
    msg.file.assign("DXRTNZAWYAMZXMOLEVQQBXYHNCNYEKOBAPYFMAGPWVFDWXNVZIKQGUSPGXFZBBIHGITJCBVPVQHVLDKUJVTFZGGIBRHEPUEJOCNMOZSRICWEMJRSRKKDSFNTJRFUITUDPLEYVDRPSNRHUKCOQH");

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
    msg.setTimeStamp(0.301954831135);
    msg.setSource(4597U);
    msg.setSourceEntity(132U);
    msg.setDestination(4177U);
    msg.setDestinationEntity(189U);
    msg.op = 66U;
    msg.file.assign("ZACLVZJLRSBRGJZYGKCQFPOXMDZCBXCVONQNLVQRURXOTNMQCNHDWTQTZIKHZFOJVSPKWFSPZHJUDIEPKLFLLYINUMWCFUAYDGBHIRKANJHVXTZVGNVMGR");

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
    msg.setTimeStamp(0.921410886174);
    msg.setSource(42697U);
    msg.setSourceEntity(238U);
    msg.setDestination(35021U);
    msg.setDestinationEntity(64U);
    msg.op = 195U;
    msg.clock = 0.22266206258;
    msg.tz = -90;

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
    msg.setTimeStamp(0.267046474799);
    msg.setSource(44778U);
    msg.setSourceEntity(88U);
    msg.setDestination(38614U);
    msg.setDestinationEntity(5U);
    msg.op = 121U;
    msg.clock = 0.46221285356;
    msg.tz = -21;

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
    msg.setTimeStamp(0.567052158524);
    msg.setSource(21467U);
    msg.setSourceEntity(240U);
    msg.setDestination(62706U);
    msg.setDestinationEntity(65U);
    msg.op = 186U;
    msg.clock = 0.715072519459;
    msg.tz = -73;

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
    msg.setTimeStamp(0.69843927446);
    msg.setSource(7753U);
    msg.setSourceEntity(68U);
    msg.setDestination(1272U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.6266547022);
    msg.setSource(49984U);
    msg.setSourceEntity(239U);
    msg.setDestination(43197U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.482538334792);
    msg.setSource(6694U);
    msg.setSourceEntity(120U);
    msg.setDestination(39482U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.788511147703);
    msg.setSource(32579U);
    msg.setSourceEntity(173U);
    msg.setDestination(26065U);
    msg.setDestinationEntity(129U);
    msg.sys_name.assign("FGLVLWXNQVMRCINIISFQMNWWFTQEZMYJFJGANPQFOVURITNIOABDXCNMZQPWVFHTLDPEUOEKTHBVOMBJXHJDZYPGWSQYOCEGRMULXBNHHL");
    msg.sys_type = 37U;
    msg.owner = 40807U;
    msg.lat = 0.9282002759;
    msg.lon = 0.390821985648;
    msg.height = 0.0418607089238;
    msg.services.assign("GQHSJIOBMNMICEMMTDFTUDNSUONGENWUUADFHHLMNXCTYFRMVPZZWKVSHUI");

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
    msg.setTimeStamp(0.0964130407613);
    msg.setSource(18198U);
    msg.setSourceEntity(213U);
    msg.setDestination(5244U);
    msg.setDestinationEntity(163U);
    msg.sys_name.assign("XIKKMARVANHAWQJGNVCSZQXLPOHSCVVSSISNOEKEHLQBEOCLWRBTLXYOAZDIMEZQCWEKCCEUFUSQJMJAQYTXUYNEFMJYCHUXIFDGUOTJQFTMCIHHZZZFFAMYIPDNGVIEYPHAUDOIVLMRXPKJCFYGKSMSJZRLAKBLLWWYQDWVPOKZFD");
    msg.sys_type = 217U;
    msg.owner = 42198U;
    msg.lat = 0.780747921655;
    msg.lon = 0.450849465028;
    msg.height = 0.773330489686;
    msg.services.assign("JPSCUHPZDLRKUSRFHSJFIRHXPZPJSAOXNOWEXCDYSRVLKLNV");

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
    msg.setTimeStamp(0.827323857485);
    msg.setSource(45532U);
    msg.setSourceEntity(221U);
    msg.setDestination(25541U);
    msg.setDestinationEntity(145U);
    msg.sys_name.assign("XZKNRESESHFCJOTMVNNBUCYDVFBWSAAGLCEPYKPRIRIJRGENQQUVIDTJXZQWDPLHINXCSXGKEFEWOFCYSZKFVPBLQVLUWKMXSM");
    msg.sys_type = 38U;
    msg.owner = 2542U;
    msg.lat = 0.431004943481;
    msg.lon = 0.506856285788;
    msg.height = 0.420834924972;
    msg.services.assign("FJUHSZLCNGFKNZGWQYRQDODWMDMLRONCBRTSZGLHVRHNWAMCPKUEFBRQDGMOBTNUAOTFFYKXXHTRZPRCYILXFYGLZAVLICHZEBSKCVAEHDXVTBEFQSGJLGXEHAQPQXEXPVLIISUYPUTAMIVHQANTCPDVDWICRVJZWXNBAMSLRWUBOCXTEIWPOGKHOQMY");

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
    msg.setTimeStamp(0.762477407261);
    msg.setSource(18092U);
    msg.setSourceEntity(116U);
    msg.setDestination(3677U);
    msg.setDestinationEntity(160U);
    msg.service.assign("RNOOJAXAROPUXHEPBYIADLTJCGIGTEPYVIOFISKYCMDVKUJBHDUITRSVRFLQLNGOXKQUHGZMTADZUEQILONLCSCKPUZWGFQZNXFDCVFBIUGGYEGUNVYWE");
    msg.service_type = 27U;

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
    msg.setTimeStamp(0.0549645122321);
    msg.setSource(35227U);
    msg.setSourceEntity(18U);
    msg.setDestination(28725U);
    msg.setDestinationEntity(188U);
    msg.service.assign("TKRQHKZXENAEPMIMTDLMFUBRSVVEDOQHGFRTVUSFRDLBDXZVVCCPUFXCLRDPVCDAWQYAVNAEPCQYTWLVURQGAYEKG");
    msg.service_type = 247U;

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
    msg.setTimeStamp(0.452246361196);
    msg.setSource(62773U);
    msg.setSourceEntity(148U);
    msg.setDestination(10753U);
    msg.setDestinationEntity(199U);
    msg.service.assign("DGRMZHADVCCIPBMEELVZAIGPXDUDWDXUTLUBSXRNXTNHZQFDYDFPYBOQJYHTSRKKJVXXYKRCVKUBEBFSGNIAQBZZTMEX");
    msg.service_type = 181U;

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
    msg.setTimeStamp(0.146581236526);
    msg.setSource(61823U);
    msg.setSourceEntity(180U);
    msg.setDestination(62666U);
    msg.setDestinationEntity(137U);
    msg.value = 0.519193180959;

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
    msg.setTimeStamp(0.607945482568);
    msg.setSource(10842U);
    msg.setSourceEntity(66U);
    msg.setDestination(50894U);
    msg.setDestinationEntity(122U);
    msg.value = 0.571505830764;

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
    msg.setTimeStamp(0.0870237369115);
    msg.setSource(5388U);
    msg.setSourceEntity(25U);
    msg.setDestination(40200U);
    msg.setDestinationEntity(138U);
    msg.value = 0.291861489661;

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
    msg.setTimeStamp(0.645004333393);
    msg.setSource(23029U);
    msg.setSourceEntity(128U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(143U);
    msg.value = 0.711958989579;

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
    msg.setTimeStamp(0.226714763002);
    msg.setSource(22112U);
    msg.setSourceEntity(93U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(134U);
    msg.value = 0.382855803236;

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
    msg.setTimeStamp(0.414001801245);
    msg.setSource(40419U);
    msg.setSourceEntity(207U);
    msg.setDestination(23520U);
    msg.setDestinationEntity(190U);
    msg.value = 0.346189749946;

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
    msg.setTimeStamp(0.931056625212);
    msg.setSource(4446U);
    msg.setSourceEntity(101U);
    msg.setDestination(56829U);
    msg.setDestinationEntity(10U);
    msg.value = 0.00701348521993;

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
    msg.setTimeStamp(0.317664116794);
    msg.setSource(1716U);
    msg.setSourceEntity(198U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(95U);
    msg.value = 0.261742080307;

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
    msg.setTimeStamp(0.615421399349);
    msg.setSource(21188U);
    msg.setSourceEntity(233U);
    msg.setDestination(7350U);
    msg.setDestinationEntity(174U);
    msg.value = 0.663663098607;

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
    msg.setTimeStamp(0.625545910459);
    msg.setSource(51443U);
    msg.setSourceEntity(106U);
    msg.setDestination(17913U);
    msg.setDestinationEntity(8U);
    msg.number.assign("CQLNBPEICWLWQVKJYNDJQHLKNGSPHFVLMXJRNFUYFTAMTDMVKDHLLAZIXGQZMIJPUBPKERGUEXWZBECMUHGJBQORAEMHBZTYULXTAFXTUKMQXKACHWYFZAOWQOAKEMHIWYXWLECLHNWFYOBDMYRVOVDONPZGCWGC");
    msg.timeout = 63694U;
    msg.contents.assign("SLXJKEFXFSTDHVPLXKXRZXMWSUQVMZFORGADLSYIKEVOGJYHODOPNMTNFZKOMXFLOVJHYSBZWQJTGQQIFJHZFJYNGESBOVBRUICUUJEMSHEKHWRRRPYVCCLSHKDELWAMLWCEQXWUJXWVIYDIJAGUZYWQEFFBKABZNTKDCHIBEAVPRJZMIDTNGGITQPPDCUWYLLBNRYTGMOCRQUTAMEIMGHKPAZPIVQSLTQHOSKBG");

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
    msg.setTimeStamp(0.703971216057);
    msg.setSource(232U);
    msg.setSourceEntity(139U);
    msg.setDestination(54673U);
    msg.setDestinationEntity(62U);
    msg.number.assign("EYQTKRIQDEHFZKIKVGRBYLTNRW");
    msg.timeout = 21379U;
    msg.contents.assign("KGOUJSNLBRUMDMZGKZULVEJOMBQAHITIQNUCYXSOWKLFCBVGALSVPFJLXOXOLYBZAVPDMNDCTZUTDBNSDETJFAQFZUCONKRNKNIWSIQEPADMBCNMZZQBXYXEPFWFGVXEFRRTCJWG");

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
    msg.setTimeStamp(0.404587044225);
    msg.setSource(58189U);
    msg.setSourceEntity(69U);
    msg.setDestination(48443U);
    msg.setDestinationEntity(38U);
    msg.number.assign("OTQXIMCJLIHE");
    msg.timeout = 64914U;
    msg.contents.assign("KIGQEAMWMQFZLPVLAEIOWUFSEFNWSEGMYEJIGGJMAXMYIZPNBSQBSINRTCSZTQPXESBCGGDKIKKPHITOEJUKADOMTVODJPTCHCJVFBAWYURPMXUPHJLQPHYHNEMTFDPBZVUJHKLLYDDRZNXAACKYFOUQWOVEFGFKPBLWYCRGJBKMBHVXQITUSBATCHYNSOYXRRZLKXCRCSDWUTJCZHYMIUXVLLNFQDRZEONZVQOJFNRXVV");

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
    msg.setTimeStamp(0.233618446865);
    msg.setSource(60535U);
    msg.setSourceEntity(135U);
    msg.setDestination(42020U);
    msg.setDestinationEntity(6U);
    msg.seq = 3462385931U;
    msg.destination.assign("PZMCVCRGUDTUBWPZSWQUMCPXEKUTINPYUEZFPXBITOPIKCABHUJNXDVTBYFIGVOYQRCIXQMISMFNHKZQAGUESBTLIUGJOENSHMYAAHJYJCZAXINNOOCQGYRBLLYQROSFAWAIZQVVLJEKCMHJJNBQWVWMMSTHFYPLMEURDRXDDTOKAEWVGXELFKWQKADNLDWOGKKWDUQGHHKOHOBNJRFYZLTVLSRFJGSMDTVXRDFXPNI");
    msg.timeout = 25611U;
    const char tmp_msg_0[] = {8, 73, 105, -9, 53, -89, -105, -91, -13, 99, -109, 109, 37, 84, 92, 84, 125, -69, -22, -56, -125, -102, -87, 103, 61, -103, 34, 24, -21, -44, 96, -6, -53, 86, -62, 104, 68, 84, 29, 85, -63, 61, 31, 67, 1, 70, -63, 17, -21, -117, -122, -46, -58, 63, 7, -61, -81, 125, -68, 25, 13, 1, 6, 106, 93, 116, -16, -35, 18, -20, 44, -98, 56, 42, -57, -47, 87, 72, 74, -87, -33, 78, -27, -71, -65, 112, -8, -125, -74, 109, 68, 48, -116, 18, 47, -83, -64, 94, -3, 106, 26, -30, -101, 71, -47, 33, 67, 72, -47, 90, 53, -26, -54, 53, -49, -20, -20, 22, -41, -97, -115, -38, -11, -124, -11, -37, 52, 67, 79, 109, -29, 47, -113, 41, 14, 104, -39, 124, -14, -17, 116, 111, 66, -89, -100, -69, -107, 10, 105, -122, -59, -120, -66, -69, 122, -1, -45, 104, 80, 55, -66, -95, 87, -89, -87, -77, -100, 91, -47, 85, -124, 32, 102, -81};
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
    msg.setTimeStamp(0.393980248897);
    msg.setSource(61430U);
    msg.setSourceEntity(170U);
    msg.setDestination(50789U);
    msg.setDestinationEntity(244U);
    msg.seq = 70706419U;
    msg.destination.assign("GRLPMAMQOWZRKQXMLOLHSJJDMKCGSTVTDFAVKQBDDLKNNQXFEZKYIPMLUWIGCIUMBUAQR");
    msg.timeout = 7211U;
    const char tmp_msg_0[] = {87, -3, -26, 4, 123, 75, 126, -19, 40, -89, 33, -128, -121, -94, 78, 50, 12, -37, -46, 38, -49, -3, -40, 57, -114, 43, -92, 47, -18, -91, -11, 39, -12, 34, 18, -51, -114, -98, 78, 15, 105, 86, 13, 60, 94, 59, -127, -85, 126, -93, -119, 23, -31, 54, 46, -46, 60, 75, -36, -105, 0, 41, 115, 116, -57, 48, -60, -49, 110, -127, -112, 80, -71, -32, -36, 32, -40, -51, -116, -43, 54, -60, 98, -53, -80, -58, -101, 46, -119, -120, -118, 5, -100, 12, -76, -121, 1, -118, 109, 34, -71, 90, 86, 88, -124, -2, -77, 27, -83, -24, -94, -50, 5, -41, -7, -13, 29, 53, -33, 17, 76, 21, 121, 2, 24, 69, -47, -12, 21, -16, 95, 56, -110, 34, -66, -114, 119, -6, -46, -84, 51, -89, -10, 19, 84, 109, 58, -41, -8, -23, 23, -69, 30, 77, -11, -45, -45, -42, 15, 30, -69, 71, 0, 47, -51, 5, 31, -15, 91, -23, 58, 124, 26, 31, -11, 86, 104, 85, 77, -111, -67, 98, -47, 121, 85, 79, 57, -20, -38, 106};
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
    msg.setTimeStamp(0.0730326194899);
    msg.setSource(2703U);
    msg.setSourceEntity(178U);
    msg.setDestination(59396U);
    msg.setDestinationEntity(247U);
    msg.seq = 2652806697U;
    msg.destination.assign("EWZFLBGDMUBWRJWAAYSVSFYDBJSXQSFJGKZUAGOULOKRRJLIWSINXXWZGCVTLOCHTPHTJUPNWSVCNOFUTZXNDRKSBGRKKMAZAQWFIPSNBCVERMNQTCHKPQLPLDHIINMEPCJOIKYOPDQAYOIWNZULTVAHYYYDOFEQHVZSLCGKBJMBLAPSRIVMMQIWZTMDWYJIEACUEPBFCRUEVRXVUYBMGNUGEFKQGJBXRETFZZJHXACKTVHDGLQXOTF");
    msg.timeout = 60073U;
    const char tmp_msg_0[] = {-73, 119, 79, 75, -64, 48, 119, 49, 126, -102, 19, -111, 47, 54, -57, -92, -43, 4, 110, 18, 85, 12, 119, 99, -55, 89, 90, -56, 23, -93, 100, -54, 74, -20, -95, -37, 99, 30, -78, 108, 36, -122, -34, -44, 8, -21, 16, -44, 28, 1, 35, 15, 75, -84, 90, 113, -23, 111, 60, -2, 67, -77, -15, -36, 4, -54, 80, 28, -48, 60, 85, -56, 106, -58, 102, -25, 119, 51, 51, 124, -84, 11, 17, -72, 47, 21, -85, -123, 56, -53, 115, 11, -40, -80, 65, 118, 106, -91, 28, -30, 105, 29, 92, -122, 8, -97, -33, -12, -62, -117, 64, -32, 56, 56, -91, 53, 58, -78, -92, 112, -38, -23, 38, -65, 121, -126, -72, -7, -7, -100, -86, -78, -85, 106, 101, 90, -80, 118, -85, -38, -43, -40, 93, -4};
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
    msg.setTimeStamp(0.0587125114604);
    msg.setSource(47592U);
    msg.setSourceEntity(106U);
    msg.setDestination(53490U);
    msg.setDestinationEntity(204U);
    msg.source.assign("YPGSECDOVOOTSNQSURXXDEBKNQXZIVMVBDQMNTGZSBSQNHAPFCFAGRMLPXZIUCYOMYCDBQGNDVVFSAHHU");
    const char tmp_msg_0[] = {63, -80, 104, -29, 126, 57, -65, 39, 94, 126, 52, -34, -7, -106, -91, 23, 34, 90, 119, 6, 107, 22, 93, -56, 61, -75, -43, 56, -42, 116, 120, -45, -107, 108, 59, 44, 122, 36, -57, -23, -6, -112, -81, -96, 14, 61, -47, -61, 126, -48, 25, -49, -1, -50, 16, -92, -95, 57, 26, 25, -79, 117, 117, 118, 39, 66, 26, -127, 101, -18, -37, 123, 84, 103, -25, -72, -100, -13, -83, -59, 18, -48, -116, -26, -114, -119, -85, 82, 87, 79, -117, -71, 103, -60, 114, -97, 31, 117, -58, 120, 44, 83, 123, -42, 90, -100, -104, 126, 0, 67, -18, 72, -125, -10, -6, 65, -43, 93, 51, 112, -36, 2};
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
    msg.setTimeStamp(0.712072510755);
    msg.setSource(3916U);
    msg.setSourceEntity(43U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(31U);
    msg.source.assign("CHMOEGJAKTMLOAFNDAUNFKZFLYWBDQDWIRUIFJUETVUBGPCOLTSVCJA");
    const char tmp_msg_0[] = {-15, 103, -106, 116, 75, 35, -28, 11, -58, -77, 3, 6, 111, 58, 28, 63, -15, -49, -44, -42, -78, 69, 17, 75, -118, -8, 120, 70, -106, 90, 86, -86, -85, -78, 119, 81, -16, -6, 49, -10, 7, -2, -95, -85, 96, -5, 106, -2, -27, 31, -110, 38, 74, -44, 44, 123, -14, -103, -53, -87, -113, -29, -56, -41, 6, -109, -118, 20, -72, -92, 91, -119, -122, -77, 56, -61, 50, 18, 69, 94, -19, -8, -37, -42, 91, -92, 71, -69, -82, -29, -104, 13, 11, 123, 68, 26, -124, 122, -19, 106, 36, -28, 70, -42, -54, -108, -80, -117, 97, 100, -84, 81, -110, 40, 71, -127, -79, 119, -72, 80, 56, -82, 80, 44, 108, 114, -37, 67, 32, -108, 109, -20, -122, -6, -26, -58, 55, -55, 79, 110, 43, -128, 111, 77, 27, -54, -4, 51, -1, 14, 79, -21, -86, -75, 12, 98, -63};
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
    msg.setTimeStamp(0.819155543429);
    msg.setSource(65484U);
    msg.setSourceEntity(128U);
    msg.setDestination(23693U);
    msg.setDestinationEntity(116U);
    msg.source.assign("ZZIQFVDJURNDDAMXSMQFESFDFCOHUUCAKLPESEOIYQUMAGSLYCAPNWGJYNBORZWRTJRGJIOCOHJZGJHYPUXKBWBVCJWPHXJYYXKRSKHNDSUYICAXKMFWMOPDBGTBPOQEYQBY");
    const char tmp_msg_0[] = {-87, 85, -9, 14, -108, -115, 14, 78, 7, 26, -35, -9, -74, 101, 61, 78, 112, 99, -98, -92, 58, -34, 51, 78, 66, -60, -123, 46, 105, -127, 67, 67, 5, -41, 19, -109, 114, 41, 77, -39, 23, 53, -116, -106, -11, 75, -117, 41, 25, -127, -110, 86, -72, 73, -32, 102, 33, -106, 84, -60, 42, 13, -2, -56, -91, -66, -2, 77, -59, 22, 9, 122, -15, 16, -33, 44, 9, 97, 9, -16, 7, 33, -2, 113, -36, 68, 7, -45, -21, -126, 66, -39, 102, 105, 84, -90, 13, -77, -115, -116, 121, 87, -18, 124, 56, -93, -105, 6, -101, -89, 46, -120, 80, -58, -122, 44, -101, 91, -52, -83, 41, 25, 108, -50, -108, -93, -67, -74, 71, -122, 7, -91, 40};
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
    msg.setTimeStamp(0.774861220312);
    msg.setSource(29574U);
    msg.setSourceEntity(88U);
    msg.setDestination(25846U);
    msg.setDestinationEntity(34U);
    msg.seq = 2778959188U;
    msg.state = 139U;
    msg.error.assign("RGSPULASMMGNSOIEKPTFHSASJYIUOIWSDSLKACLOLDSKGGBJYMPAGFTYZHWTTIDHEHRPWGQHKELHCHAKTBNCKWZRZTPMYCJGZKTIOGXOBODGNEJBHZWYECUYZMZPUXXBOXIDVJDAYVJRXWJYBZZUAIULHNNQPSERDXNXQVWQWDB");

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
    msg.setTimeStamp(0.903253947758);
    msg.setSource(27189U);
    msg.setSourceEntity(103U);
    msg.setDestination(11517U);
    msg.setDestinationEntity(223U);
    msg.seq = 165233796U;
    msg.state = 57U;
    msg.error.assign("WMXSEJIMFTYTFKWMKGCCEYHNLAQIVDZBNRKLVQFFNKWBCYZKJD");

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
    msg.setTimeStamp(0.339517704738);
    msg.setSource(52677U);
    msg.setSourceEntity(195U);
    msg.setDestination(28509U);
    msg.setDestinationEntity(36U);
    msg.seq = 2736570353U;
    msg.state = 13U;
    msg.error.assign("YIDOGRYGWASDLWUOFSDYOZWGSDMELDLVMXCKOSXCXKNGWESCMEEJSJOZAMTRCFQIKIPUCYVRHNSMWHQBGKNMKFXJFHOLFRUWIRBZHKBNEPHKYQUEBD");

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
    msg.setTimeStamp(0.842646715357);
    msg.setSource(5772U);
    msg.setSourceEntity(10U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("VIXPNXALXDKEZIPPTNZCOLLKAORIQXRVRNYPXTMJWEGNDQZBUSMINZQULEVHTBBQCDQBCIZCLRWOCYGESPPAXVKGPFTYYFRJACITHHXOKQFTVYKQFZJULSZNUWIDCSDBFDSGKKQXSKYFAGRFBOWGVCSWHUVRNVEMHMAMBAZLMWWUJIMYJYERQJAURLZTBKNIGPBUWVSZBPDTOYJDJAL");
    msg.text.assign("CBLYITEYHUELRLPTOBYXJBPASAJNDRNBFSAMELERMYYTCTLHSRPUMUFULIEFWUNKPAMOQTRQHFJEGAZTVRSQEDIKUROIJGZWMMAFGXKHNPKFGVAQIMDBQGUXFWKHVBTTLRVDNZGXMCQDEAUTJZ");

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
    msg.setTimeStamp(0.330443670231);
    msg.setSource(65458U);
    msg.setSourceEntity(106U);
    msg.setDestination(20451U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("FSOOKAXNLGTPQTWNSMKAABTWTCPJTUHZNPKUGOXJEPKZDWXCDPWDJXUCSURWMNRJTOCBQQJUEGFBJKGYNFLXVVIGOHXZ");
    msg.text.assign("YUCCHEYBEJGZHEWMZKUZHRMKZTJRUZREOTFFIPMNYDQURMYCEBAOGBSMUWDWXTYASINMBIPWCYAUUKPGLCKOOIPMGLXABPVHJCRQXUJSHYFVLRSCTWIKDFKTBNLPIGVLMTKBQZCNGXLQYHQENYCRJIABJXLKQAOTHBZENDSIGGDHFWVWTVONXDEITOUPEOUROXRAASV");

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
    msg.setTimeStamp(0.46707291769);
    msg.setSource(10280U);
    msg.setSourceEntity(119U);
    msg.setDestination(4132U);
    msg.setDestinationEntity(115U);
    msg.origin.assign("EHURVTJDCHEGUSPHB");
    msg.text.assign("CXNZAINQKGRGKSTOCLWDSWXXANRFERPKEYSUGUJHYGCZUPBYZHUVTPCOBKQJCPYEJFGKNNOSBERPELYQQMWOTORLAMFXSDOMEAUTLCOMHZPOQKNNTEUZBNKLVXZUFDQPIZJWCYCELICDXUVKWNNRSHYGJSSPELOZYRSDXTXRWFGXAOMFYBZLIIHIFBHEIAVVWDFYIQJHWFWTKIA");

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
    msg.setTimeStamp(0.965167494717);
    msg.setSource(53919U);
    msg.setSourceEntity(171U);
    msg.setDestination(27593U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("KWXXKKAMYFPYYOJNGVSTXZIIMZOBEBUTEDNAJJEAUNAJVRIPMEXZWHYPGZBCUJIQNLLFYMNMOZSQYPOUWTJUGRGCWSVFPAUFLHPWOCQDSNYRDQSTTPPAIEHMTKWUHYAQLDVCDLTNJHHRLUOQDSQVZDBGMOLNGRHWZUEZIWXVGFLXTVPGSWFFZFCTFTKHOVRLRVASSHYGFBARKQXXBQXBNBECHMR");
    msg.htime = 0.412598562918;
    msg.lat = 0.308546761465;
    msg.lon = 0.57662406595;
    const char tmp_msg_0[] = {-28, -103, 13, -46, -30, 55, 118, -112, -64, -105, 18, 13, -96, 106, -90, 16, -127, -22, 13, -107, 48, 118, 2, 112, -27, -56, 74, 41, -80, -97, -89, -9, 44, 48, 58, -89, -123, -86, -102, 84, -13, -6, 104, -38, -14, -31, -2, 15, -83, -123, -111, 0, -50, 124, -3, 32, 119, -113, -46, 1, 114, 59, 101, -54, -26, -62, -25, -3, -27, -91, 102, -58, -10, -128, 30, -38, -57, -116, -92, -110, 73, -115, 84, 8, 29, 118, -45, -66, -10, -59, 16, 63, -87, 66, 60, 80, -121, -35, -88, -11, 65, -80, -44, 98, 33, 66, 88, -53, -5, -19, -75, -127, -79, -90, -126, 58, 102, 14, 64, 50, -2, -22, -51, -50, 38, -26, 24, -83, -20, 5, -14, -10, -81, 38, -17, 68, 78, 104, -69, 54, 45, -115, 15, 84, -101, -68, -90, 80, 0, -97, -76, -101, 12, -15, -6, 116, 95, -1, 47, 118, 47, -87, 109, 91};
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
    msg.setTimeStamp(0.111483390586);
    msg.setSource(33377U);
    msg.setSourceEntity(112U);
    msg.setDestination(1246U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("EXBUKNJTZZLYMDNYIXZGYSGJNPUOFDAGTPRFHHLUTWHLPEPRQGTHKMVCNLXSWZTRCNQIKVOFMFHDCFMRZTXOVIUIWSVIRLEJOSJLQNDZSEUVRJHIKLXYMPJJBQTGNVQVMFVWWYRAUTYBAWBBUCJEYUABVWAEOLATQFDCKZPLCHSOKIIPEBIOFKSAYNOYRDQBXQDXJHFLTZGMKRSQRCWEHKDAEADONPCAHBJBKEXZGSGPWZ");
    msg.htime = 0.638486970439;
    msg.lat = 0.580529742962;
    msg.lon = 0.0903573944124;
    const char tmp_msg_0[] = {-19, -34, -33, -75, 70, -77, -124, 114, 10, 18, 28, 104, -112, 68, -83, 35, -38, -24, -107, -67, -115, -95, 75, 32, 63, 19, -15};
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
    msg.setTimeStamp(0.0167768922171);
    msg.setSource(53028U);
    msg.setSourceEntity(212U);
    msg.setDestination(42501U);
    msg.setDestinationEntity(87U);
    msg.origin.assign("YCINFVASCRDSUZDLSSERWIVZWQPHNKNCIUPIYYKGBTTMTJQWLUZAMRDFATTXPJUFCAUKEPGMXSHODVWSQKNTVFJRVVSNUGAWBVCMGCEVNWUZXBRLHVYCEIUKZGKLDXCIGWLRJVAYQEHBHHQRDYOLEFLFXOZJLOHZQKXDDAETXNELOQWOGIGRMBWTMMIKBJMPQOYZOQBFYJUYFNHISMBXRNJPJAPHUTOCBJNHAZBKRCGXPWXSFPITSYMDE");
    msg.htime = 0.496819420062;
    msg.lat = 0.944025269655;
    msg.lon = 0.50031399885;
    const char tmp_msg_0[] = {-81, 20, 16, -119, 69, 61, 13, -6, 39, -93, 76, -36, 14, 125, -70, -90, -35, 26, 40, -26, 116, -7, 125, 86, -120, 100, -90, -95, 32, 78, 26, 114, 53, -66, 94, -30, -61, -77, 46, -19, 115, 3, -115, 15, -28, 48, 81, 105, -120, 25, -30, 2, 36, -12, -64, -121, -97, -80, 24, 27, -128, 101, -11, -10, 108, 67, -125, -115, -87, 117, 3, -23, 90, 33, 47, 107, 11, -5, -94, -127, 57, -66, -94, -56, 25, -16, -98, -35, -72, -80, 60, -11, -67, -46, 47, 79, 24, -28, -8, 31, -125, -74, -60, 14, 18, -51, 45, 72, 44, -76, -105, -104, -70, 122, 66, 4, 121, 111, -121, -66, 84, 99, -90, -99, -108, 87, -42, 101, -37, -94, 56, 73};
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
    msg.setTimeStamp(0.330213010354);
    msg.setSource(13897U);
    msg.setSourceEntity(62U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(80U);
    msg.req_id = 51141U;
    msg.ttl = 8201U;
    msg.destination.assign("HHKGYFMESMTSEQU");
    const char tmp_msg_0[] = {-103, -61, -89, -8, 11, -46, 20, -55, 26, 109, -121, 118, 82, 80, 69, -115, -45, -83, -72, 49, -67, 25, -124, -64, 121, 23, -54, -44, 32, -38, 107, -96, -118, 30, 22};
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
    msg.setTimeStamp(0.389826208541);
    msg.setSource(4514U);
    msg.setSourceEntity(31U);
    msg.setDestination(59068U);
    msg.setDestinationEntity(35U);
    msg.req_id = 15146U;
    msg.ttl = 24445U;
    msg.destination.assign("RCHZYKFFMBSRLCNYDWMPJHCBVDQQWGNXDKTCMWYZFDEKKRHOKQGKCNBQWXSAMGIIOGIYQWBMPQSEXEOJHNDRMBSXSFVERKNAXCYWVFJEWAETDUWNSFVZ");
    const char tmp_msg_0[] = {-97, -25, -80, -40, 123, -66, -109, -94, -101, 91, 41, 86, 122, -54, 43, 104, 101, 71, -83, 28, 4, -25, -65, 0, -68, -22, 97, -98, 85, -126, -89, 6, 22, -85, 77, -105, -34, 62, -27, 120, 0, 26, 106, 100, -6, -15, 44, 2, -3, -72, -66, -56, 84, -96, -47, -85, 30, 107, 100, 65, -102, 6, 115, 4, 63};
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
    msg.setTimeStamp(0.865544545899);
    msg.setSource(39732U);
    msg.setSourceEntity(208U);
    msg.setDestination(48383U);
    msg.setDestinationEntity(25U);
    msg.req_id = 46005U;
    msg.ttl = 1349U;
    msg.destination.assign("FKKCAHLULOGUOQPCMJETDBJPTPHNFOPSRITXJMYERUYXRAB");
    const char tmp_msg_0[] = {-36, -34, 61, 114, 50, 120, 27, 42, -100, 64, 62, 99, 73, 51, -2, -22, 91, -91, 4, -8, 115, 39, 6, -53, -23, -55, -58, -87, -3, 103, -33, -60, -1, -37, -51, -64, -54, -49, -6, -95, 97, -76, 122, -32, 8, -123, 24, -13, 101, -48, -22, -125, 45, 113, -118, -113, -13, 18, -11, -34, -61, -61, -30, -23, -85, 64, -122, 95, 10, -119, -102, -113, -91, -122, -88, 93, 121, 49, 5, -5, -13, -68, 58, 62, 2, 86, -53, 25, 125, -6, -89, -45, -64, 51, 118, 63};
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
    msg.setTimeStamp(0.0117249429982);
    msg.setSource(41793U);
    msg.setSourceEntity(19U);
    msg.setDestination(46793U);
    msg.setDestinationEntity(80U);
    msg.req_id = 50585U;
    msg.status = 103U;
    msg.text.assign("UASRJALGOMRFORQARVAXGEMDMPZEHECSOWHSUDQOYKACQJKZHRBSHEVQJPXFCZNBCXNLNQQPHPXJHJWYYVTAMKFKLFNGRGWOZBIUUIOMOATITVVRFJLSWDEUDPNXEDZRKHRTWDATFASNQGCICYXYJNDUZPABWMKVRFCUMGMICBWFGDCTY");

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
    msg.setTimeStamp(0.172799220821);
    msg.setSource(35965U);
    msg.setSourceEntity(43U);
    msg.setDestination(7873U);
    msg.setDestinationEntity(144U);
    msg.req_id = 3668U;
    msg.status = 146U;
    msg.text.assign("OYDHTJTXKDTZNXSSLTRWFBOJRLJIOLXDTZNCMZPYSFBIHAGSQBDWULPMWVVHUEAUEMLYNXDSKXRMNJSMCZVHPFPZQJFGSUVEYKBJIELGQKZZDAMEQFDAKRZI");

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
    msg.setTimeStamp(0.980887963916);
    msg.setSource(36372U);
    msg.setSourceEntity(70U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(64U);
    msg.req_id = 13617U;
    msg.status = 183U;
    msg.text.assign("BETXVGFDCAHHOVSYPZBBXMSEWDOCKFADNPEFAFNYJPTFWYSVURMBVUDCFTIYYBUSZPIUKVCIXGBXOSLHLAULTJFWFMRGHSITCAWWKDYZGAWLONQGEFJTQWVCHJNHYJSDCOORPGQJEWAGQULZZHUURIEGKSTZQRINIKPTJLBPRRXINOJNXPMDDAZOQLJB");

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
    msg.setTimeStamp(0.721344068804);
    msg.setSource(43631U);
    msg.setSourceEntity(203U);
    msg.setDestination(5930U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("HUHFALTRDTAVICWAFSCXJMYZETAIVKUBGUPFRYUBZRSQYALANXVVHZHSDYPLJRNYWZIIMYBGRWYKOKGRUASVEFOSDJNNMVJIUJYDLLFVXDKJSHZJXRUUMYIOCOM");
    msg.links = 691110771U;

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
    msg.setTimeStamp(0.313203780347);
    msg.setSource(23816U);
    msg.setSourceEntity(89U);
    msg.setDestination(64682U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("PIMQBLESHDCZJAGFDIGESTBWGVLMEULCJHKJZKXZURLDUQLOCIMYDRDPVDHCEHPJXCTXENXCZWNAQRNWXZVWSUZPDWVHFFAUXKWAIVWQMZGGJOFWFBMMTGTVKHASGOHKIOF");
    msg.links = 1894566326U;

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
    msg.setTimeStamp(0.556580313097);
    msg.setSource(55081U);
    msg.setSourceEntity(225U);
    msg.setDestination(36893U);
    msg.setDestinationEntity(183U);
    msg.group_name.assign("RAYVNUPZNIVMAAGVXJSGWTWKHDCZTSRLEFWDLBXSCZDXHQACWQRBMGVEFITYJ");
    msg.links = 2121290755U;

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
    msg.setTimeStamp(0.969063316671);
    msg.setSource(22114U);
    msg.setSourceEntity(188U);
    msg.setDestination(22535U);
    msg.setDestinationEntity(180U);
    msg.groupname.assign("BAPLQNLDUKUPYFEGNXOBXHZJPGJHBGXATOSFWVCNHRLLRQSBEUBSVDTQDLPSX");
    msg.action = 81U;
    msg.grouplist.assign("JALIGJQUIEGIFMJKMUGVDVQRSOHOKJIXMCBUHDRPMXDGPVWWGOKTLBOYXXJSXBWQDGDXCFRXFMGNRVSHZPTQEBULDVZFHQRNZDRCTFRKBITCGCTEWQOTAUZNEHOAIZNYCLXFPQQUZJFTWVYAOGDKOWKA");

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
    msg.setTimeStamp(0.546602830112);
    msg.setSource(27033U);
    msg.setSourceEntity(46U);
    msg.setDestination(54373U);
    msg.setDestinationEntity(20U);
    msg.groupname.assign("UFYMLNQEAIXKTAELYCHIGGWAJRDLOUDPPROKAAEVLLRRWDYJYZQMYCFPIVPCLNPSXVDHTPKHFISQOUBFGGQPVIPPKKTUSDCMBFMSUZTXOYMTZNAOJCCUMRTOJZZCGADJDAMKFNBGMNAUYDTEKFHHORCVGXMWTOJQTJBQSEBLBZRIHYWXDSUHHWGZVOKWNSPNEUJELBJYIWHFMBOGLQZIKHQVTLXYRXUNXSAVRFVFWEXJRBXS");
    msg.action = 254U;
    msg.grouplist.assign("YMWAXYWVCPMDJEDMIIYKLBWXCWBHZMGWVLQZNOVJRZYPWMXXOKYFWVUOUVXOZXRGJTWDYSAVMRVTGZQPROQPDJSUUEITRZZUABBFVMYTNSNFLTRHBSTXAEYTOCLFLQDHYWASPNEFBPBMLJXRSKCCDPGOJHGVSKPEURBQACPCCSGRVKXGTKEUMFIAK");

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
    msg.setTimeStamp(0.837549865895);
    msg.setSource(60371U);
    msg.setSourceEntity(86U);
    msg.setDestination(51085U);
    msg.setDestinationEntity(67U);
    msg.groupname.assign("QKJBNLUVGOIUCGANPVGKQHXHTFURBKCIXURTVXWUKCIZPNYJEJNGRHQMZUFVDGUFSBLUROOOODIKEHNWBSJRTWYXSA");
    msg.action = 172U;
    msg.grouplist.assign("GMFOFNCLUWGGYOXJLZRFHRTDAYZXZIUWALFAIPUQIUDTUIR");

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
    msg.setTimeStamp(0.419381487844);
    msg.setSource(6449U);
    msg.setSourceEntity(212U);
    msg.setDestination(50197U);
    msg.setDestinationEntity(234U);
    msg.id = 137U;
    msg.range = 0.937187464221;

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
    msg.setTimeStamp(0.583069209685);
    msg.setSource(61028U);
    msg.setSourceEntity(113U);
    msg.setDestination(52804U);
    msg.setDestinationEntity(35U);
    msg.id = 248U;
    msg.range = 0.0237686481635;

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
    msg.setTimeStamp(0.941711216411);
    msg.setSource(1886U);
    msg.setSourceEntity(178U);
    msg.setDestination(56625U);
    msg.setDestinationEntity(64U);
    msg.id = 222U;
    msg.range = 0.055371574273;

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
    msg.setTimeStamp(0.217019675565);
    msg.setSource(37229U);
    msg.setSourceEntity(3U);
    msg.setDestination(5086U);
    msg.setDestinationEntity(37U);
    msg.tx = 1U;
    msg.channel = 106U;
    msg.timer = 24678U;

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
    msg.setTimeStamp(0.169952865064);
    msg.setSource(37923U);
    msg.setSourceEntity(253U);
    msg.setDestination(51068U);
    msg.setDestinationEntity(241U);
    msg.tx = 131U;
    msg.channel = 34U;
    msg.timer = 35942U;

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
    msg.setTimeStamp(0.398010598947);
    msg.setSource(43178U);
    msg.setSourceEntity(19U);
    msg.setDestination(39230U);
    msg.setDestinationEntity(57U);
    msg.tx = 155U;
    msg.channel = 207U;
    msg.timer = 48738U;

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
    msg.setTimeStamp(0.915438459936);
    msg.setSource(53081U);
    msg.setSourceEntity(133U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(4U);
    msg.beacon.assign("DNYJWQIQCRSKALWBOMDTOFNVETZXGBUHMAYJPVLCGDAWZIDPNXCNGDUIQPCBSMFCEOLUJPKMOIXFPQTMGREGALIJHJTICKTYMQSHKWYEOWVDMRKAEZRHKPUJXCXRHXXBVKMVYPVNNLFTWUBNPGXUGLEPOBQJQWUWYJSLAVHAUWIDSSFIZZDKCIYMBBEPHRDERALMHIXCVXRURSTGZZVFGDFOZTQYKLEALHKSJNNRTSOFYOZZWUQGYT");
    msg.lat = 0.120703381596;
    msg.lon = 0.989979148616;
    msg.depth = 0.286885169963;
    msg.query_channel = 94U;
    msg.reply_channel = 4U;
    msg.transponder_delay = 99U;

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
    msg.setTimeStamp(0.649589165606);
    msg.setSource(15580U);
    msg.setSourceEntity(208U);
    msg.setDestination(8298U);
    msg.setDestinationEntity(127U);
    msg.beacon.assign("NLUEDYWTWRZRDCJGJ");
    msg.lat = 0.471362224744;
    msg.lon = 0.70537918746;
    msg.depth = 0.100390648451;
    msg.query_channel = 235U;
    msg.reply_channel = 117U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.331135164446);
    msg.setSource(53760U);
    msg.setSourceEntity(186U);
    msg.setDestination(30680U);
    msg.setDestinationEntity(180U);
    msg.beacon.assign("JRLAFSPOERCKKSPRJPIJUOQRXDMULHEKXGYEHTABYQLIWDJUYIVPFWODKCGARKSJDBYHPMWCITLIJGQXBDVIFFMQNOLURPFZZDMRHMHSYWJUGUXVSZSQXGUYOQEFGNWCENQQCMZGSZUVHSVBQIQOTVUKDLNLJIBPJOHENZGCKZWVOVCBZYLRZNWAKBUOFSAMPTXEYGDCWATHWBDANOFN");
    msg.lat = 0.203828368223;
    msg.lon = 0.917042508624;
    msg.depth = 0.443400549832;
    msg.query_channel = 111U;
    msg.reply_channel = 104U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.71179775094);
    msg.setSource(21280U);
    msg.setSourceEntity(89U);
    msg.setDestination(15961U);
    msg.setDestinationEntity(134U);
    msg.op = 207U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AXBBCMJPUPZFDQYWUZCNQXZNKKUTPKAOIHWKENXOARVJLCYMBQDGIRPQZJTOGVCUHZNECFOGRXIJLYQEBGYTCDBCZPOWPNSAAFHXQIBW");
    tmp_msg_0.lat = 0.138534641358;
    tmp_msg_0.lon = 0.551959301191;
    tmp_msg_0.depth = 0.237331675389;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 234U;
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
    msg.setTimeStamp(0.433377840314);
    msg.setSource(62360U);
    msg.setSourceEntity(171U);
    msg.setDestination(21316U);
    msg.setDestinationEntity(6U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.972863933663);
    msg.setSource(18242U);
    msg.setSourceEntity(74U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(128U);
    msg.op = 245U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WZECXPQTAJZFYCQKLJZPKFZKYIQPDYGXSSOEXSOURUQQTCVWAPVDMLRILBTUNFBOLJLPBUQYRFUDCIDDZPCNHT");
    tmp_msg_0.lat = 0.527187701079;
    tmp_msg_0.lon = 0.051561145483;
    tmp_msg_0.depth = 0.499836634474;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 119U;
    tmp_msg_0.transponder_delay = 0U;
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
    msg.setTimeStamp(0.440092937985);
    msg.setSource(8830U);
    msg.setSourceEntity(210U);
    msg.setDestination(22174U);
    msg.setDestinationEntity(177U);
    msg.address = 16U;

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
    msg.setTimeStamp(0.56623550194);
    msg.setSource(32337U);
    msg.setSourceEntity(117U);
    msg.setDestination(4759U);
    msg.setDestinationEntity(157U);
    msg.address = 82U;

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
    msg.setTimeStamp(0.415090062167);
    msg.setSource(6146U);
    msg.setSourceEntity(116U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(90U);
    msg.address = 120U;

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
    msg.setTimeStamp(0.327660053465);
    msg.setSource(40239U);
    msg.setSourceEntity(106U);
    msg.setDestination(48258U);
    msg.setDestinationEntity(56U);
    msg.address = 128U;
    msg.status = 224U;
    msg.range = 0.833672373851;

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
    msg.setTimeStamp(0.996566170797);
    msg.setSource(7897U);
    msg.setSourceEntity(9U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(154U);
    msg.address = 199U;
    msg.status = 85U;
    msg.range = 0.271526913241;

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
    msg.setTimeStamp(0.64580937945);
    msg.setSource(38181U);
    msg.setSourceEntity(75U);
    msg.setDestination(8098U);
    msg.setDestinationEntity(21U);
    msg.address = 165U;
    msg.status = 37U;
    msg.range = 0.408570023321;

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
    msg.setTimeStamp(0.187711270218);
    msg.setSource(27217U);
    msg.setSourceEntity(162U);
    msg.setDestination(4501U);
    msg.setDestinationEntity(95U);
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 62883U;
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
    msg.setTimeStamp(0.614182472586);
    msg.setSource(13312U);
    msg.setSourceEntity(5U);
    msg.setDestination(44432U);
    msg.setDestinationEntity(139U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 226U;
    tmp_msg_0.step_number = 87U;
    tmp_msg_0.step.assign("ZKANVDXTYMVKWKYTENUVPINQFLBSBPZGUSYDCVAEMSEGOBHQSDWPAOOYDYUKVZAIXLLFMCBJEBDCCROCGGOQMIGJSXXRIDHPPVDHDUWNXPRINFFMJJFMZBUJGWZVLMGUEPAROTJXTLMVVHLNLRIQDOTQNX");
    tmp_msg_0.flags = 13U;
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
    msg.setTimeStamp(0.501379508656);
    msg.setSource(42444U);
    msg.setSourceEntity(65U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(61U);
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 220U;
    tmp_msg_0.plan_id.assign("YNSOWNGASRLWRUTZDDBCANZOXYEKCXLRQFBINGCSQSGHCVPWYNDGKFSFAJQMNCSJDTRBJLMZIXDOHUIBQSWNSCTAMMFPRKMBJLSIBHBEQKMUVLRDLDAEZPWYYWVRPUOYQSIUMZAZGUMTMQAVHAFPVEOGAKRLZEOITNHFVGKJGXVTKOZOPUMCHUCIBFXIKYYGQ");
    tmp_msg_0.plan_eta = -797181303;
    tmp_msg_0.plan_progress = 0.942423804195;
    tmp_msg_0.man_id.assign("GWEMFTUWYZAZGVSMIXOQJEYXFYZNHQDJMNHESFNRIPKKTXSYLSCHKCWBLBVRYFIZCPCLBCOAVPTPOKZAENLHUCXGUWQSJPHWGORTVEXRLUCKWNQZTNYNVRQXZIDAVUMPACIFDKEDERFGJNIOTQMUYQBTAWGSLDYPWCVIENWSGUFUQHBJLIKRJMFRSJSKOPXOHZJZLAMOISUDJVRBFNHZFIBBDOUXEMYXYDLDWMAHJHXMQBVVBDTKPGGKTGOCLQ");
    tmp_msg_0.man_type = 11369U;
    tmp_msg_0.man_eta = -803666574;
    tmp_msg_0.last_outcome = 42U;
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
    msg.setTimeStamp(0.885168858789);
    msg.setSource(59923U);
    msg.setSourceEntity(202U);
    msg.setDestination(31343U);
    msg.setDestinationEntity(11U);
    msg.enable = 126U;

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
    msg.setTimeStamp(0.171442974019);
    msg.setSource(4639U);
    msg.setSourceEntity(61U);
    msg.setDestination(41183U);
    msg.setDestinationEntity(65U);
    msg.enable = 224U;

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
    msg.setTimeStamp(0.369893556001);
    msg.setSource(55247U);
    msg.setSourceEntity(252U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(85U);
    msg.enable = 167U;

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
    msg.setTimeStamp(0.333939838061);
    msg.setSource(32411U);
    msg.setSourceEntity(136U);
    msg.setDestination(33904U);
    msg.setDestinationEntity(14U);
    msg.summary = 246U;
    msg.level = 149U;

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
    msg.setTimeStamp(0.112133059947);
    msg.setSource(27223U);
    msg.setSourceEntity(93U);
    msg.setDestination(19890U);
    msg.setDestinationEntity(81U);
    msg.summary = 242U;
    msg.level = 224U;

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
    msg.setTimeStamp(0.259126474052);
    msg.setSource(40726U);
    msg.setSourceEntity(181U);
    msg.setDestination(26016U);
    msg.setDestinationEntity(230U);
    msg.summary = 81U;
    msg.level = 164U;

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
    msg.setTimeStamp(0.0132334176079);
    msg.setSource(8117U);
    msg.setSourceEntity(83U);
    msg.setDestination(48243U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.81043612419);
    msg.setSource(13105U);
    msg.setSourceEntity(107U);
    msg.setDestination(571U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.711550082015);
    msg.setSource(37875U);
    msg.setSourceEntity(193U);
    msg.setDestination(8733U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.266928723214);
    msg.setSource(26902U);
    msg.setSourceEntity(23U);
    msg.setDestination(11498U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.158302647765);
    msg.setSource(62275U);
    msg.setSourceEntity(167U);
    msg.setDestination(31732U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.771467769495);
    msg.setSource(58320U);
    msg.setSourceEntity(247U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.048671438099);
    msg.setSource(43821U);
    msg.setSourceEntity(168U);
    msg.setDestination(10802U);
    msg.setDestinationEntity(89U);
    msg.op = 29U;
    msg.system.assign("GXBIAANPBKNDVVXIQECEARCW");
    msg.range = 0.340345053349;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("WTPXSKZZLCMADBKSIWIRVSBQWMIMLIEFXTZKYTENNZXPCLYBYPCHDBQPWISRAKUEWOFZKCZTDJCNINGSQWHVQ");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("TOUAEYNIHOKSQDIBKBNLAIVFQVGQZFLRYIWPQXBTSJRYQTDJWOAZMDYOZLSERXLFEUILPMHNTVFNZDP");
    tmp_tmp_msg_0_0.sys_type = 34U;
    tmp_tmp_msg_0_0.owner = 37168U;
    tmp_tmp_msg_0_0.lat = 0.315726182452;
    tmp_tmp_msg_0_0.lon = 0.147196878544;
    tmp_tmp_msg_0_0.height = 0.553891586488;
    tmp_tmp_msg_0_0.services.assign("IYYUOANRBORVMBCQDFRPPJTEURQQYHRBZMISGSPZLLSEZQWEFQZTOWALJFJZRQYMIWCNWXYYHVAUKUVMEAXHKPXIPKRXJGTQNJFDUHDSZVUBNXGIADCNFXWZIHRMDNBIYOPIZTOP");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.344365186245);
    msg.setSource(31236U);
    msg.setSourceEntity(31U);
    msg.setDestination(41454U);
    msg.setDestinationEntity(11U);
    msg.op = 124U;
    msg.system.assign("IKZEBZAROJEQLPOJJIVUTGFDXCPLOXKHSAPMGBMBTMLTMURDHCRDVSEPWYNHDMHIMILSQSYKENNTFVYJACBTOBJDTAUWNSRAXQECHAZWQPPWXGLWHGPAWKZMIISKYPSVDQEWCAFILKFBYSNSIJZUSURKTTFGCDXEVPOAXUVXJHCDUQVYEGGMJFGYBKULHKJCLTKXFURFHOWNGRBHEBONCVNFRYVFPTLQOVRQBMJMNUZEYZOXDQIYGNQCZWXD");
    msg.range = 0.388074045304;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 200U;
    tmp_msg_0.error.assign("UWMMWYCMDIVYZNGGNLYGSSXREUIFPSXBAZFCHEZBJJPQAVFSHEGRPKNXPYBWVKCDASUZNBLHLTDVFUKEWEKELIQDAJQCJPOSEZCFPPSOSJIDNXYCPJTTXJWHXEOQQWAHXEBLQBNKRDYFYMCIOGQXMVUDACOMSTIVGVJAUPCDVBNJNVKROMHQTKFYURUDLLFFZINGCTTHTRZHWLODXMTRBBPZAZKMQK");
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
    msg.setTimeStamp(0.344083478736);
    msg.setSource(53372U);
    msg.setSourceEntity(246U);
    msg.setDestination(15987U);
    msg.setDestinationEntity(150U);
    msg.op = 45U;
    msg.system.assign("UVBQIQKWVDAPEGEOZKFVEOWGCQZGAAYGMFXHYJGMETXZAYQOPXXJZAWBHOFVDBHOUNLYMCJANTRLKDMJCZXUZEDCDYHSDJQQKXDLMPKCVGPWTWCRVHIWMKXGRMOJSQJUENJGTZUBVTIFOBGVNDFSLB");
    msg.range = 0.045018310681;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 187U;
    tmp_msg_0.mode.assign("FOHINIQARXVVSTQQTSRBKKYDFFEOXYG");
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
    msg.setTimeStamp(0.977006288453);
    msg.setSource(42664U);
    msg.setSourceEntity(182U);
    msg.setDestination(26581U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.517282295793);
    msg.setSource(14700U);
    msg.setSourceEntity(23U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.812519859863);
    msg.setSource(57927U);
    msg.setSourceEntity(89U);
    msg.setDestination(31881U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.0503020207035);
    msg.setSource(65119U);
    msg.setSourceEntity(228U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(143U);
    msg.list.assign("OTUFTGVUHSJQDESBAFYEJEALELKQAQNGLGFRTHADFMKNAVQWUOQXSWDMDMVYBTPIYMNBOLYKHYRRZXIHVULBAPYNXOOCPHXREHSBVVNSEIEYGPLXRNLJWXOWFFSIBFKBJJUHDWWQUH");

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
    msg.setTimeStamp(0.0978954649536);
    msg.setSource(9668U);
    msg.setSourceEntity(108U);
    msg.setDestination(56528U);
    msg.setDestinationEntity(21U);
    msg.list.assign("PVTZFQFDVKHIHGYUJSRZIVOTQDMTTVWUYRHMBSTKMR");

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
    msg.setTimeStamp(0.24480030047);
    msg.setSource(55403U);
    msg.setSourceEntity(20U);
    msg.setDestination(42167U);
    msg.setDestinationEntity(149U);
    msg.list.assign("HFRVVYEQHDGDQWYWSIZPZTANAKHFFUUPLRZPMDIA");

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
    msg.setTimeStamp(0.512663251266);
    msg.setSource(57267U);
    msg.setSourceEntity(148U);
    msg.setDestination(29627U);
    msg.setDestinationEntity(158U);
    msg.value = -11757;

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
    msg.setTimeStamp(0.654762535386);
    msg.setSource(64595U);
    msg.setSourceEntity(236U);
    msg.setDestination(49611U);
    msg.setDestinationEntity(63U);
    msg.value = 2537;

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
    msg.setTimeStamp(0.0910047311948);
    msg.setSource(52037U);
    msg.setSourceEntity(3U);
    msg.setDestination(56742U);
    msg.setDestinationEntity(215U);
    msg.value = -12204;

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
    msg.setTimeStamp(0.732687569812);
    msg.setSource(47257U);
    msg.setSourceEntity(25U);
    msg.setDestination(59222U);
    msg.setDestinationEntity(159U);
    msg.value = 0.764162926704;

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
    msg.setTimeStamp(0.00657943346213);
    msg.setSource(60668U);
    msg.setSourceEntity(9U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(96U);
    msg.value = 0.66080658493;

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
    msg.setTimeStamp(0.866225210262);
    msg.setSource(2291U);
    msg.setSourceEntity(143U);
    msg.setDestination(63345U);
    msg.setDestinationEntity(16U);
    msg.value = 0.35375377281;

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
    msg.setTimeStamp(0.329974873229);
    msg.setSource(34855U);
    msg.setSourceEntity(49U);
    msg.setDestination(37173U);
    msg.setDestinationEntity(48U);
    msg.value = 0.262765589919;

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
    msg.setTimeStamp(0.863379162674);
    msg.setSource(63086U);
    msg.setSourceEntity(68U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(104U);
    msg.value = 0.925052773962;

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
    msg.setTimeStamp(0.811732199904);
    msg.setSource(42841U);
    msg.setSourceEntity(114U);
    msg.setDestination(51033U);
    msg.setDestinationEntity(112U);
    msg.value = 0.416077158724;

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
    msg.setTimeStamp(0.0534553284957);
    msg.setSource(30222U);
    msg.setSourceEntity(169U);
    msg.setDestination(25330U);
    msg.setDestinationEntity(156U);
    msg.validity = 41353U;
    msg.type = 134U;
    msg.utc_year = 38028U;
    msg.utc_month = 153U;
    msg.utc_day = 148U;
    msg.utc_time = 0.42133225689;
    msg.lat = 0.877427681582;
    msg.lon = 0.459086858221;
    msg.height = 0.602888912228;
    msg.satellites = 128U;
    msg.cog = 0.807320361397;
    msg.sog = 0.495922005575;
    msg.hdop = 0.111046164219;
    msg.vdop = 0.325433360577;
    msg.hacc = 0.971981415211;
    msg.vacc = 0.437850605865;

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
    msg.setTimeStamp(0.910206869813);
    msg.setSource(51274U);
    msg.setSourceEntity(253U);
    msg.setDestination(44013U);
    msg.setDestinationEntity(153U);
    msg.validity = 9799U;
    msg.type = 236U;
    msg.utc_year = 25521U;
    msg.utc_month = 237U;
    msg.utc_day = 80U;
    msg.utc_time = 0.65346765952;
    msg.lat = 0.797129366246;
    msg.lon = 0.0481239257668;
    msg.height = 0.229096941615;
    msg.satellites = 87U;
    msg.cog = 0.26171843;
    msg.sog = 0.419602573243;
    msg.hdop = 0.408203690449;
    msg.vdop = 0.73868351757;
    msg.hacc = 0.47048814065;
    msg.vacc = 0.467412748631;

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
    msg.setTimeStamp(0.148049016843);
    msg.setSource(65U);
    msg.setSourceEntity(129U);
    msg.setDestination(32572U);
    msg.setDestinationEntity(127U);
    msg.validity = 62714U;
    msg.type = 91U;
    msg.utc_year = 24941U;
    msg.utc_month = 32U;
    msg.utc_day = 36U;
    msg.utc_time = 0.929158783655;
    msg.lat = 0.987480652688;
    msg.lon = 0.291079454025;
    msg.height = 0.994454579499;
    msg.satellites = 61U;
    msg.cog = 0.500218838904;
    msg.sog = 0.306279566921;
    msg.hdop = 0.439799296768;
    msg.vdop = 0.680843771909;
    msg.hacc = 0.345433085207;
    msg.vacc = 0.234211890447;

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
    msg.setTimeStamp(0.614749802148);
    msg.setSource(52597U);
    msg.setSourceEntity(61U);
    msg.setDestination(36225U);
    msg.setDestinationEntity(60U);
    msg.time = 0.456392421803;
    msg.phi = 0.616496771672;
    msg.theta = 0.745348558779;
    msg.psi = 0.836552818241;
    msg.psi_magnetic = 0.265448702315;

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
    msg.setTimeStamp(0.720438262888);
    msg.setSource(46690U);
    msg.setSourceEntity(116U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(235U);
    msg.time = 0.37351027036;
    msg.phi = 0.427763332292;
    msg.theta = 0.475166854144;
    msg.psi = 0.903861601099;
    msg.psi_magnetic = 0.511344525858;

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
    msg.setTimeStamp(0.587999322108);
    msg.setSource(19827U);
    msg.setSourceEntity(75U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(7U);
    msg.time = 0.437347421074;
    msg.phi = 0.145822092709;
    msg.theta = 0.774146446641;
    msg.psi = 0.731693158479;
    msg.psi_magnetic = 0.25121057526;

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
    msg.setTimeStamp(0.558300848618);
    msg.setSource(10375U);
    msg.setSourceEntity(75U);
    msg.setDestination(17779U);
    msg.setDestinationEntity(98U);
    msg.time = 0.554397484332;
    msg.x = 0.982430221884;
    msg.y = 0.397574294764;
    msg.z = 0.236689461993;
    msg.timestep = 0.247666851604;

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
    msg.setTimeStamp(0.557051359364);
    msg.setSource(54045U);
    msg.setSourceEntity(104U);
    msg.setDestination(40799U);
    msg.setDestinationEntity(15U);
    msg.time = 0.384205167446;
    msg.x = 0.0160495963858;
    msg.y = 0.245876922571;
    msg.z = 0.433726021751;
    msg.timestep = 0.917462268998;

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
    msg.setTimeStamp(0.0070766555518);
    msg.setSource(2418U);
    msg.setSourceEntity(104U);
    msg.setDestination(25430U);
    msg.setDestinationEntity(97U);
    msg.time = 0.433070874082;
    msg.x = 0.469067651559;
    msg.y = 0.877930126778;
    msg.z = 0.285643019178;
    msg.timestep = 0.0793759034564;

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
    msg.setTimeStamp(0.868368731197);
    msg.setSource(19040U);
    msg.setSourceEntity(28U);
    msg.setDestination(31860U);
    msg.setDestinationEntity(193U);
    msg.time = 0.229064869327;
    msg.x = 0.514169096584;
    msg.y = 0.546535694002;
    msg.z = 0.231305481409;

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
    msg.setTimeStamp(0.375447451729);
    msg.setSource(5919U);
    msg.setSourceEntity(184U);
    msg.setDestination(13396U);
    msg.setDestinationEntity(92U);
    msg.time = 0.261981598204;
    msg.x = 0.42920326159;
    msg.y = 0.410411515334;
    msg.z = 0.315757823383;

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
    msg.setTimeStamp(0.83018759145);
    msg.setSource(32043U);
    msg.setSourceEntity(53U);
    msg.setDestination(54368U);
    msg.setDestinationEntity(67U);
    msg.time = 0.84144785688;
    msg.x = 0.391315930293;
    msg.y = 0.251375114483;
    msg.z = 0.587321787094;

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
    msg.setTimeStamp(0.838146771998);
    msg.setSource(52824U);
    msg.setSourceEntity(223U);
    msg.setDestination(56371U);
    msg.setDestinationEntity(31U);
    msg.time = 0.435008977425;
    msg.x = 0.139887579753;
    msg.y = 0.679784997925;
    msg.z = 0.668280455043;

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
    msg.setTimeStamp(0.858243720285);
    msg.setSource(18197U);
    msg.setSourceEntity(233U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(235U);
    msg.time = 0.476391003544;
    msg.x = 0.703505168732;
    msg.y = 0.255833346589;
    msg.z = 0.99289562127;

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
    msg.setTimeStamp(0.874241347758);
    msg.setSource(13182U);
    msg.setSourceEntity(59U);
    msg.setDestination(49439U);
    msg.setDestinationEntity(110U);
    msg.time = 0.914429405155;
    msg.x = 0.446221446039;
    msg.y = 0.565076598113;
    msg.z = 0.630687504735;

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
    msg.setTimeStamp(0.973892591837);
    msg.setSource(32188U);
    msg.setSourceEntity(222U);
    msg.setDestination(64847U);
    msg.setDestinationEntity(241U);
    msg.time = 0.612878084199;
    msg.x = 0.536971870764;
    msg.y = 0.897348734652;
    msg.z = 0.110029634843;

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
    msg.setTimeStamp(0.326952044795);
    msg.setSource(28545U);
    msg.setSourceEntity(201U);
    msg.setDestination(58541U);
    msg.setDestinationEntity(103U);
    msg.time = 0.524356051934;
    msg.x = 0.415118132323;
    msg.y = 0.343608784015;
    msg.z = 0.00697257296995;

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
    msg.setTimeStamp(0.153190261017);
    msg.setSource(19677U);
    msg.setSourceEntity(157U);
    msg.setDestination(40058U);
    msg.setDestinationEntity(203U);
    msg.time = 0.274896101497;
    msg.x = 0.493065476752;
    msg.y = 0.0719085520207;
    msg.z = 0.676793386298;

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
    msg.setTimeStamp(0.860847186446);
    msg.setSource(28433U);
    msg.setSourceEntity(203U);
    msg.setDestination(18313U);
    msg.setDestinationEntity(183U);
    msg.validity = 220U;
    msg.x = 0.383303914443;
    msg.y = 0.0290783596412;
    msg.z = 0.711856465077;

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
    msg.setTimeStamp(0.332088354357);
    msg.setSource(15386U);
    msg.setSourceEntity(146U);
    msg.setDestination(16765U);
    msg.setDestinationEntity(249U);
    msg.validity = 49U;
    msg.x = 0.568112532645;
    msg.y = 0.264587471543;
    msg.z = 0.610405754665;

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
    msg.setTimeStamp(0.630903379252);
    msg.setSource(26044U);
    msg.setSourceEntity(94U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(149U);
    msg.validity = 60U;
    msg.x = 0.30980183238;
    msg.y = 0.948883038483;
    msg.z = 0.828407698004;

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
    msg.setTimeStamp(0.124849313277);
    msg.setSource(38707U);
    msg.setSourceEntity(252U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(181U);
    msg.validity = 42U;
    msg.x = 0.783248761722;
    msg.y = 0.850907258508;
    msg.z = 0.816212573321;

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
    msg.setTimeStamp(0.957588077551);
    msg.setSource(31708U);
    msg.setSourceEntity(180U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(176U);
    msg.validity = 121U;
    msg.x = 0.0521876971471;
    msg.y = 0.338896752763;
    msg.z = 0.325801815527;

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
    msg.setTimeStamp(0.704951896475);
    msg.setSource(57474U);
    msg.setSourceEntity(106U);
    msg.setDestination(22598U);
    msg.setDestinationEntity(214U);
    msg.validity = 71U;
    msg.x = 0.671438430912;
    msg.y = 0.666870340564;
    msg.z = 0.179991108406;

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
    msg.setTimeStamp(0.871292815362);
    msg.setSource(28724U);
    msg.setSourceEntity(228U);
    msg.setDestination(21446U);
    msg.setDestinationEntity(105U);
    msg.time = 0.69443528705;
    msg.x = 0.387371843391;
    msg.y = 0.367646297254;
    msg.z = 0.0622539761759;

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
    msg.setTimeStamp(0.794948314939);
    msg.setSource(57664U);
    msg.setSourceEntity(141U);
    msg.setDestination(48919U);
    msg.setDestinationEntity(61U);
    msg.time = 0.615707286079;
    msg.x = 0.455205814401;
    msg.y = 0.884973216341;
    msg.z = 0.569172939865;

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
    msg.setTimeStamp(0.27398097776);
    msg.setSource(58331U);
    msg.setSourceEntity(228U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(10U);
    msg.time = 0.593605270295;
    msg.x = 0.647488167283;
    msg.y = 0.0512035405759;
    msg.z = 0.220640088143;

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
    msg.setTimeStamp(0.241925892107);
    msg.setSource(35319U);
    msg.setSourceEntity(129U);
    msg.setDestination(2937U);
    msg.setDestinationEntity(159U);
    msg.validity = 185U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.378116062256;
    tmp_msg_0.beam_height = 0.0334578529578;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.185413830442;

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
    msg.setTimeStamp(0.286126013122);
    msg.setSource(60306U);
    msg.setSourceEntity(80U);
    msg.setDestination(20633U);
    msg.setDestinationEntity(232U);
    msg.validity = 4U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.829674177525;
    tmp_msg_0.y = 0.563519237334;
    tmp_msg_0.z = 0.443122431928;
    tmp_msg_0.phi = 0.147472383354;
    tmp_msg_0.theta = 0.137140662019;
    tmp_msg_0.psi = 0.650402535088;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.835243574032;

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
    msg.setTimeStamp(0.185457164534);
    msg.setSource(7988U);
    msg.setSourceEntity(92U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(253U);
    msg.validity = 229U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.962262967074;
    tmp_msg_0.y = 0.782242686914;
    tmp_msg_0.z = 0.900189540657;
    tmp_msg_0.phi = 0.461667637033;
    tmp_msg_0.theta = 0.429553861924;
    tmp_msg_0.psi = 0.773247741491;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.286078389517;

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
    msg.setTimeStamp(0.954821784935);
    msg.setSource(6726U);
    msg.setSourceEntity(116U);
    msg.setDestination(2461U);
    msg.setDestinationEntity(65U);
    msg.value = 0.968450389243;

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
    msg.setTimeStamp(0.135048127218);
    msg.setSource(33658U);
    msg.setSourceEntity(30U);
    msg.setDestination(43955U);
    msg.setDestinationEntity(176U);
    msg.value = 0.470626791456;

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
    msg.setTimeStamp(0.701279536773);
    msg.setSource(65329U);
    msg.setSourceEntity(65U);
    msg.setDestination(32616U);
    msg.setDestinationEntity(239U);
    msg.value = 0.347539956997;

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
    msg.setTimeStamp(0.279663718264);
    msg.setSource(12855U);
    msg.setSourceEntity(58U);
    msg.setDestination(12327U);
    msg.setDestinationEntity(96U);
    msg.value = 0.212363459671;

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
    msg.setTimeStamp(0.477426393464);
    msg.setSource(17552U);
    msg.setSourceEntity(76U);
    msg.setDestination(60901U);
    msg.setDestinationEntity(202U);
    msg.value = 0.903690491424;

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
    msg.setTimeStamp(0.544940454881);
    msg.setSource(49997U);
    msg.setSourceEntity(77U);
    msg.setDestination(52272U);
    msg.setDestinationEntity(49U);
    msg.value = 0.123988832651;

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
    msg.setTimeStamp(0.853688875194);
    msg.setSource(15629U);
    msg.setSourceEntity(173U);
    msg.setDestination(53232U);
    msg.setDestinationEntity(52U);
    msg.value = 0.243771307902;

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
    msg.setTimeStamp(0.242517907695);
    msg.setSource(47712U);
    msg.setSourceEntity(143U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(94U);
    msg.value = 0.100321372748;

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
    msg.setTimeStamp(0.283673819099);
    msg.setSource(34451U);
    msg.setSourceEntity(97U);
    msg.setDestination(11354U);
    msg.setDestinationEntity(161U);
    msg.value = 0.556694918316;

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
    msg.setTimeStamp(0.851982800654);
    msg.setSource(30048U);
    msg.setSourceEntity(4U);
    msg.setDestination(15752U);
    msg.setDestinationEntity(50U);
    msg.value = 0.419036492578;

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
    msg.setTimeStamp(0.326450258079);
    msg.setSource(13565U);
    msg.setSourceEntity(78U);
    msg.setDestination(36242U);
    msg.setDestinationEntity(92U);
    msg.value = 0.246427704214;

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
    msg.setTimeStamp(0.540516495288);
    msg.setSource(59480U);
    msg.setSourceEntity(116U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0142510606717;

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
    msg.setTimeStamp(0.449403248301);
    msg.setSource(54636U);
    msg.setSourceEntity(142U);
    msg.setDestination(13795U);
    msg.setDestinationEntity(136U);
    msg.value = 0.807946499883;

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
    msg.setTimeStamp(0.988278755878);
    msg.setSource(29341U);
    msg.setSourceEntity(25U);
    msg.setDestination(46263U);
    msg.setDestinationEntity(78U);
    msg.value = 0.35973310022;

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
    msg.setTimeStamp(0.463331588226);
    msg.setSource(35720U);
    msg.setSourceEntity(183U);
    msg.setDestination(13604U);
    msg.setDestinationEntity(20U);
    msg.value = 0.133832703086;

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
    msg.setTimeStamp(0.813248076231);
    msg.setSource(52262U);
    msg.setSourceEntity(233U);
    msg.setDestination(31562U);
    msg.setDestinationEntity(96U);
    msg.value = 0.110950061347;

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
    msg.setTimeStamp(0.905010615901);
    msg.setSource(52012U);
    msg.setSourceEntity(113U);
    msg.setDestination(26787U);
    msg.setDestinationEntity(178U);
    msg.value = 0.527723755746;

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
    msg.setTimeStamp(0.893258311988);
    msg.setSource(35192U);
    msg.setSourceEntity(182U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0840288253157;

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
    msg.setTimeStamp(0.137772275707);
    msg.setSource(56961U);
    msg.setSourceEntity(94U);
    msg.setDestination(9316U);
    msg.setDestinationEntity(127U);
    msg.value = 0.590744771935;

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
    msg.setTimeStamp(0.00600363230155);
    msg.setSource(33415U);
    msg.setSourceEntity(122U);
    msg.setDestination(5580U);
    msg.setDestinationEntity(1U);
    msg.value = 0.249352036728;

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
    msg.setTimeStamp(0.409771899466);
    msg.setSource(30730U);
    msg.setSourceEntity(249U);
    msg.setDestination(36892U);
    msg.setDestinationEntity(67U);
    msg.value = 0.627242517548;

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
    msg.setTimeStamp(0.981056205299);
    msg.setSource(60435U);
    msg.setSourceEntity(80U);
    msg.setDestination(42738U);
    msg.setDestinationEntity(67U);
    msg.value = 0.829620546653;

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
    msg.setTimeStamp(0.834825688027);
    msg.setSource(10378U);
    msg.setSourceEntity(142U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(3U);
    msg.value = 0.294689702616;

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
    msg.setTimeStamp(0.187103711699);
    msg.setSource(36326U);
    msg.setSourceEntity(114U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0177204875588;

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
    msg.setTimeStamp(0.251156269238);
    msg.setSource(31074U);
    msg.setSourceEntity(106U);
    msg.setDestination(45764U);
    msg.setDestinationEntity(140U);
    msg.direction = 0.835913157539;
    msg.speed = 0.350287717538;
    msg.turbulence = 0.646130034232;

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
    msg.setTimeStamp(0.199067410487);
    msg.setSource(45565U);
    msg.setSourceEntity(209U);
    msg.setDestination(62857U);
    msg.setDestinationEntity(188U);
    msg.direction = 0.522888114499;
    msg.speed = 0.183529394004;
    msg.turbulence = 0.0318763759924;

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
    msg.setTimeStamp(0.452985560668);
    msg.setSource(7631U);
    msg.setSourceEntity(165U);
    msg.setDestination(59836U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.798944677712;
    msg.speed = 0.782073837829;
    msg.turbulence = 0.318358665001;

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
    msg.setTimeStamp(0.823774819651);
    msg.setSource(48321U);
    msg.setSourceEntity(219U);
    msg.setDestination(30636U);
    msg.setDestinationEntity(48U);
    msg.value = 0.665305763724;

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
    msg.setTimeStamp(0.581633261282);
    msg.setSource(4320U);
    msg.setSourceEntity(130U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(224U);
    msg.value = 0.549338608519;

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
    msg.setTimeStamp(0.352023010575);
    msg.setSource(29428U);
    msg.setSourceEntity(110U);
    msg.setDestination(35884U);
    msg.setDestinationEntity(213U);
    msg.value = 0.910058585107;

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
    msg.setTimeStamp(0.0759237909233);
    msg.setSource(21852U);
    msg.setSourceEntity(44U);
    msg.setDestination(61146U);
    msg.setDestinationEntity(138U);
    msg.value.assign("KLPGBOLPQHYRSAOHQBVEGDNDATYPJCVSHIXYDZURAMXOUHFUVMJMRHNVMVQIKGXUNRLVRPIWWRGEQGIDMIWGOJVFBHXKFYQDTUWYJYXSJTMHZSNKDPBUPCESFYFOZWTMOSMYBOHJSAERQVESBQBIEWTLNOBWUTK");

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
    msg.setTimeStamp(0.754805544758);
    msg.setSource(64654U);
    msg.setSourceEntity(187U);
    msg.setDestination(3110U);
    msg.setDestinationEntity(62U);
    msg.value.assign("JLDNFHPZXWQXYOHKFEBMLNWAIDLPZYQCGWPTFKZLDFNKNXAGITAIQURAKCARGBAUFULOYVXEMFGSKDWWEQBMVGECSYBSDQBIVZMCRPSPDTLURKLEUUMTZAOJRNVIHJJGVKWROXVKWOCNYWFJPFZVEEDXNODGOVPQFEZBZZAMKRQCGC");

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
    msg.setTimeStamp(0.532336376043);
    msg.setSource(45392U);
    msg.setSourceEntity(73U);
    msg.setDestination(31246U);
    msg.setDestinationEntity(26U);
    msg.value.assign("NLUEHBXTIYJRWPNQXUN");

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
    msg.setTimeStamp(0.493274998585);
    msg.setSource(45675U);
    msg.setSourceEntity(219U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(226U);
    const char tmp_msg_0[] = {36, 108, -89, 101, 1, -120, -126, -109, 54, 78, -44, 93, 73, -74, -91, -112, 69, 62, -52, -82, 32, 69, -100, 72, -77, 21, 49, -9, 30, -95, -42, -106, 114, 107, 71, -112, 10, -91, 63, 90, -41, 27, -85, -26, 18, 92, -60, -53, 86, -71, 126, 17, 71, -115, 113, 47, 3, 83, 11, 13, 104, -105, 82, -80, -6, -102, 69, -30, -3, 81, 46, 20, 55, -68, 14, -19, 90, -111, 18, -27, -43, -63, 106, -47, 93, -29, 79, -128, -26, -80, 35, 80, 109, -92, -42, -73, 15, 78, -95, 16, 59, 108, -106, 121, -73, -84, -4, 108, 66, 49, -127, -53, 46, 80, 59, 122, -4, -99, -79, 71, 5, 63, 15, -12, -119, 40, -43, -28, -41, 113, -40, -80, -56, -88, -93, 75, 104, 40, -2, 36, 108, 9, 116, -122, 14, 54, -76, -48, -35, -29, 103, 118, 76, 47, -43, 29, -105, -120, 122, 96, -88, 125, 112, -70, 76, -99, 20, 6, 1, 96, 126, 61, -42, 110, -111, -78, -88, 22, -54, -125, -41, 31, 5, -27, 93, -13, 106, 108, -23, -118, -27, -60, 34};
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
    msg.setTimeStamp(0.541756247139);
    msg.setSource(41517U);
    msg.setSourceEntity(66U);
    msg.setDestination(53686U);
    msg.setDestinationEntity(155U);
    const char tmp_msg_0[] = {-45, 20, 116, -18, -88, 73, -40, 70, -36, -4, -94, 11, -102, 87, -3, 49, 9, -73, -117, -7, 62, -63, 106, -8, 27, 89, 15, -3, 78, 98, -66, -57, 93, 33, 87, -26, -109, -22, -27, 25, 118, 78, 10, -126, -2, -66, -75, -5, -69, -115, -35, 40, 64, 11, 113, -50, -48, 45, -1, 101, 123, -45, -51, 37, 43, -98, 0, 63, -30, 65, 104, 10, -33, 108, 99};
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
    msg.setTimeStamp(0.970440997226);
    msg.setSource(20840U);
    msg.setSourceEntity(129U);
    msg.setDestination(53919U);
    msg.setDestinationEntity(225U);
    const char tmp_msg_0[] = {60, 48, -50, 52, 101, -94, -108, -128, -97, 59, -62, 63, -77, 82, 56, 46, 25, -3, 97, -66, -102, 103, 64, 33, -64, -32, -108, 19, 52, 110, -98, 111, 81, -79, -65, 11, -40, -34, 108, 9, 86, 54, -64, -23, 80, -3, 64, 89, -73, -22, 100, -91, -3, 119, 66, -68, 122, -48, -74, -14, -47, -100, 24, 80, 50, -108, 31, -54, -128, 10, 8, 106, -80, -114, 67, -100, -85, 92, -88, 84, -93, -125, -78, -106, -27, 102, -47, -78, 104, -58, 101, -74, -111, 41, 1, -96, 72, -57, -9, -61, -40, -83, -13, -99, 123, -56, -14, 116, -7, 15, -114, -98, 32, -111, -28, -35, 40, -94, -52, -50, 64, 45, 29, -35, -44, 121, 15, 107, -70, -110, -71, -64, -56, -69, -81, -81, 39, -8, -73, -76, -55, 124, -23, 101, 8, 34, -75, 88, -86, 100, -95, -2, -17, -23, 110, 92, -122, -34, -59};
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
    msg.setTimeStamp(0.0975175712975);
    msg.setSource(50354U);
    msg.setSourceEntity(156U);
    msg.setDestination(21404U);
    msg.setDestinationEntity(3U);
    msg.frequency = 4253875732U;
    msg.min_range = 8519U;
    msg.max_range = 7633U;

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
    msg.setTimeStamp(0.71550565608);
    msg.setSource(63548U);
    msg.setSourceEntity(76U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(167U);
    msg.frequency = 551728345U;
    msg.min_range = 49956U;
    msg.max_range = 40442U;

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
    msg.setTimeStamp(0.877087624207);
    msg.setSource(14574U);
    msg.setSourceEntity(226U);
    msg.setDestination(52165U);
    msg.setDestinationEntity(32U);
    msg.frequency = 2952950223U;
    msg.min_range = 32339U;
    msg.max_range = 40704U;

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
    msg.setTimeStamp(0.293986774646);
    msg.setSource(64638U);
    msg.setSourceEntity(134U);
    msg.setDestination(21596U);
    msg.setDestinationEntity(19U);
    msg.type = 165U;
    msg.frequency = 1854483183U;
    msg.min_range = 58506U;
    msg.max_range = 5441U;
    msg.bits_per_point = 135U;
    msg.scale_factor = 0.717535421274;
    const char tmp_msg_0[] = {-89, 107, 58, -91, 19, -20, 16, -99, -54, 95, -24, -124, -120, 17, 71, -118, -66, 93, 65, -6, 102, 125, 91};
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
    msg.setTimeStamp(0.75925720579);
    msg.setSource(21325U);
    msg.setSourceEntity(17U);
    msg.setDestination(22237U);
    msg.setDestinationEntity(186U);
    msg.type = 170U;
    msg.frequency = 4158588767U;
    msg.min_range = 43438U;
    msg.max_range = 14387U;
    msg.bits_per_point = 95U;
    msg.scale_factor = 0.206051654478;
    const char tmp_msg_0[] = {-79, 118, -60, -94, 74, 43, -113, -39, 48, -45, -17, 91, -55, 81, 98, -30, 82, 92, 13, -18, -71, 19, 90, -6, -7, 9, 28, 30, 0, 36, -26, -92, 86, 124, 102, 55, 7, 119, 110, -37, 93, -124, -79, 50, 21, -119, -65, 2, -36, 120, 87, -88, -124, -16, 107, -95, -99, -80, -26, -4, 1, 70, -10, 65, -73, 118, 21, 30, -3, -34, 54, -74};
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
    msg.setTimeStamp(0.62800461909);
    msg.setSource(32023U);
    msg.setSourceEntity(61U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(99U);
    msg.type = 132U;
    msg.frequency = 1261626034U;
    msg.min_range = 62449U;
    msg.max_range = 38258U;
    msg.bits_per_point = 152U;
    msg.scale_factor = 0.617520044413;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.142372782401;
    tmp_msg_0.beam_height = 0.216027396065;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {88, -32, 72, -28, 75, -11, -80, -15, -17, -28, -48, 8, -119, -12, 51, -46, 126, 74, -123, -25, -42, 107, -6, -104, 82, -117, -11, 103, -53, -63, 103, -116, 53, -6, 52, 64, -44, -105, 74, -61, 23, 44, -71, 116, -12, 85, 19, 1, 63, -16, 101, -127, -22, -23, -16, 84, -76, -106};
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
    msg.setTimeStamp(0.82279634902);
    msg.setSource(20131U);
    msg.setSourceEntity(211U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.013406418479);
    msg.setSource(14448U);
    msg.setSourceEntity(79U);
    msg.setDestination(35914U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.208012881577);
    msg.setSource(31399U);
    msg.setSourceEntity(141U);
    msg.setDestination(40675U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.418201936655);
    msg.setSource(27038U);
    msg.setSourceEntity(81U);
    msg.setDestination(19681U);
    msg.setDestinationEntity(17U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.737572132943);
    msg.setSource(8965U);
    msg.setSourceEntity(229U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(92U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.179796995696);
    msg.setSource(25110U);
    msg.setSourceEntity(16U);
    msg.setDestination(8814U);
    msg.setDestinationEntity(234U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.298915662046);
    msg.setSource(25831U);
    msg.setSourceEntity(212U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(127U);
    msg.value = 0.510315973815;
    msg.confidence = 0.0354504517021;
    msg.opmodes.assign("MWRQIMMQBGGJJSOZNQ");

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
    msg.setTimeStamp(0.907323068976);
    msg.setSource(43567U);
    msg.setSourceEntity(27U);
    msg.setDestination(59740U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8423653911;
    msg.confidence = 0.0582562394766;
    msg.opmodes.assign("RWOXKEFBMSOXOGNIXEQKPGTYTIVWRMVPZJYVAMQFVUXUKDZAPCAJFOIILQUSOWDMRGELGLMZJZNHFBFAEEKBPNZBWVUKDPUSFOKVRHKCMZJNNNTBTTXJXSHUCAVNCLEDGWGPNSQUT");

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
    msg.setTimeStamp(0.884514253248);
    msg.setSource(58107U);
    msg.setSourceEntity(102U);
    msg.setDestination(1081U);
    msg.setDestinationEntity(109U);
    msg.value = 0.940097230973;
    msg.confidence = 0.076531591523;
    msg.opmodes.assign("GXKPLARTQWQIXFXPYUZTYBRQLGXDVRSWXNAGWLEJILBCVOKOSREOYJGNDAXCNNSXBRDTZIEMNQMPFRWDAOCOHCLOKGYWJWIRAMFMOZDUJAQZJNSKVOMCUUPKHPBTQTTNYGQYWCIKPPUNVJD");

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
    msg.setTimeStamp(0.115367556738);
    msg.setSource(17019U);
    msg.setSourceEntity(182U);
    msg.setDestination(55951U);
    msg.setDestinationEntity(187U);
    msg.itow = 3525897769U;
    msg.lat = 0.272374701778;
    msg.lon = 0.502129663806;
    msg.height_ell = 0.96767081061;
    msg.height_sea = 0.720597990492;
    msg.hacc = 0.971891049676;
    msg.vacc = 0.370375068801;
    msg.vel_n = 0.0503369604155;
    msg.vel_e = 0.146154578635;
    msg.vel_d = 0.439858336122;
    msg.speed = 0.61682954472;
    msg.gspeed = 0.983067577194;
    msg.heading = 0.919569023625;
    msg.sacc = 0.996405401721;
    msg.cacc = 0.0905249704275;

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
    msg.setTimeStamp(0.113839738478);
    msg.setSource(4195U);
    msg.setSourceEntity(225U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(88U);
    msg.itow = 2705443327U;
    msg.lat = 0.658345094484;
    msg.lon = 0.616609370638;
    msg.height_ell = 0.216167895386;
    msg.height_sea = 0.245060982316;
    msg.hacc = 0.0474067752727;
    msg.vacc = 0.354274447585;
    msg.vel_n = 0.216872654201;
    msg.vel_e = 0.128042794094;
    msg.vel_d = 0.55208662249;
    msg.speed = 0.234407445511;
    msg.gspeed = 0.679016391022;
    msg.heading = 0.444763754979;
    msg.sacc = 0.914682307313;
    msg.cacc = 0.0749324048609;

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
    msg.setTimeStamp(0.362975220284);
    msg.setSource(26982U);
    msg.setSourceEntity(107U);
    msg.setDestination(9734U);
    msg.setDestinationEntity(141U);
    msg.itow = 2064291156U;
    msg.lat = 0.964446688706;
    msg.lon = 0.631160269388;
    msg.height_ell = 0.768749611077;
    msg.height_sea = 0.617828294606;
    msg.hacc = 0.956089099063;
    msg.vacc = 0.247286169388;
    msg.vel_n = 0.808820186757;
    msg.vel_e = 0.791506426616;
    msg.vel_d = 0.574329416059;
    msg.speed = 0.52563907075;
    msg.gspeed = 0.128471489056;
    msg.heading = 0.718588683145;
    msg.sacc = 0.186957484709;
    msg.cacc = 0.667115116922;

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
    msg.setTimeStamp(0.666750974);
    msg.setSource(21999U);
    msg.setSourceEntity(251U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(43U);
    msg.id = 32U;
    msg.value = 0.408958873636;

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
    msg.setTimeStamp(0.945107509093);
    msg.setSource(55120U);
    msg.setSourceEntity(155U);
    msg.setDestination(15354U);
    msg.setDestinationEntity(198U);
    msg.id = 147U;
    msg.value = 0.356528212255;

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
    msg.setTimeStamp(0.325770677272);
    msg.setSource(59361U);
    msg.setSourceEntity(178U);
    msg.setDestination(36069U);
    msg.setDestinationEntity(37U);
    msg.id = 155U;
    msg.value = 0.0145915858195;

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
    msg.setTimeStamp(0.419232034821);
    msg.setSource(52782U);
    msg.setSourceEntity(126U);
    msg.setDestination(24312U);
    msg.setDestinationEntity(86U);
    msg.x = 0.0957938126587;
    msg.y = 0.674299399047;
    msg.z = 0.0530238740703;
    msg.phi = 0.775966433832;
    msg.theta = 0.0773396680597;
    msg.psi = 0.204951649223;

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
    msg.setTimeStamp(0.651447207232);
    msg.setSource(46023U);
    msg.setSourceEntity(96U);
    msg.setDestination(27718U);
    msg.setDestinationEntity(146U);
    msg.x = 0.363543598425;
    msg.y = 0.45320081436;
    msg.z = 0.672050366204;
    msg.phi = 0.533469640339;
    msg.theta = 0.822336097832;
    msg.psi = 0.575482657404;

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
    msg.setTimeStamp(0.598693061954);
    msg.setSource(41496U);
    msg.setSourceEntity(30U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(9U);
    msg.x = 0.767570284717;
    msg.y = 0.734424101931;
    msg.z = 0.999016814625;
    msg.phi = 0.875557155657;
    msg.theta = 0.677949362675;
    msg.psi = 0.630934896711;

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
    msg.setTimeStamp(0.561497775416);
    msg.setSource(48499U);
    msg.setSourceEntity(22U);
    msg.setDestination(14509U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.426099026712;
    msg.beam_height = 0.794160610794;

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
    msg.setTimeStamp(0.637620602851);
    msg.setSource(13953U);
    msg.setSourceEntity(45U);
    msg.setDestination(15710U);
    msg.setDestinationEntity(20U);
    msg.beam_width = 0.150605888932;
    msg.beam_height = 0.59653143308;

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
    msg.setTimeStamp(0.0179783307945);
    msg.setSource(26137U);
    msg.setSourceEntity(83U);
    msg.setDestination(40929U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.145102578715;
    msg.beam_height = 0.544105973362;

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
    msg.setTimeStamp(0.753549786414);
    msg.setSource(21912U);
    msg.setSourceEntity(215U);
    msg.setDestination(1087U);
    msg.setDestinationEntity(1U);
    msg.sane = 253U;

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
    msg.setTimeStamp(0.606241034894);
    msg.setSource(10561U);
    msg.setSourceEntity(103U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(69U);
    msg.sane = 5U;

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
    msg.setTimeStamp(0.965769345177);
    msg.setSource(56717U);
    msg.setSourceEntity(153U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(17U);
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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.499774448225);
    msg.setSource(27859U);
    msg.setSourceEntity(83U);
    msg.setDestination(64098U);
    msg.setDestinationEntity(235U);
    msg.id = 213U;
    msg.zoom = 54U;
    msg.action = 10U;

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
    msg.setTimeStamp(0.363160479051);
    msg.setSource(31243U);
    msg.setSourceEntity(61U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(206U);
    msg.id = 174U;
    msg.zoom = 127U;
    msg.action = 99U;

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
    msg.setTimeStamp(0.317745553387);
    msg.setSource(4010U);
    msg.setSourceEntity(221U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(162U);
    msg.id = 90U;
    msg.zoom = 54U;
    msg.action = 115U;

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
    msg.setTimeStamp(0.43693018622);
    msg.setSource(9364U);
    msg.setSourceEntity(146U);
    msg.setDestination(59892U);
    msg.setDestinationEntity(10U);
    msg.id = 22U;
    msg.value = 0.279252473996;

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
    msg.setTimeStamp(0.596231086758);
    msg.setSource(2845U);
    msg.setSourceEntity(136U);
    msg.setDestination(40728U);
    msg.setDestinationEntity(136U);
    msg.id = 0U;
    msg.value = 0.280781764665;

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
    msg.setTimeStamp(0.927733620753);
    msg.setSource(7258U);
    msg.setSourceEntity(18U);
    msg.setDestination(16784U);
    msg.setDestinationEntity(9U);
    msg.id = 153U;
    msg.value = 0.376977168568;

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
    msg.setTimeStamp(0.948278906789);
    msg.setSource(23412U);
    msg.setSourceEntity(170U);
    msg.setDestination(15130U);
    msg.setDestinationEntity(79U);
    msg.id = 180U;
    msg.value = 0.442601115156;

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
    msg.setTimeStamp(0.852933853642);
    msg.setSource(26490U);
    msg.setSourceEntity(245U);
    msg.setDestination(54741U);
    msg.setDestinationEntity(80U);
    msg.id = 239U;
    msg.value = 0.4497301936;

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
    msg.setTimeStamp(0.735536157947);
    msg.setSource(129U);
    msg.setSourceEntity(232U);
    msg.setDestination(45514U);
    msg.setDestinationEntity(80U);
    msg.id = 2U;
    msg.value = 0.191170647394;

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
    msg.setTimeStamp(0.472760651846);
    msg.setSource(4111U);
    msg.setSourceEntity(173U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(96U);
    msg.id = 76U;
    msg.angle = 0.161758435904;

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
    msg.setTimeStamp(0.0620433968744);
    msg.setSource(18330U);
    msg.setSourceEntity(11U);
    msg.setDestination(52400U);
    msg.setDestinationEntity(133U);
    msg.id = 48U;
    msg.angle = 0.104085598612;

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
    msg.setTimeStamp(0.348296692503);
    msg.setSource(36440U);
    msg.setSourceEntity(169U);
    msg.setDestination(7968U);
    msg.setDestinationEntity(82U);
    msg.id = 101U;
    msg.angle = 0.296586187576;

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
    msg.setTimeStamp(0.699519075139);
    msg.setSource(798U);
    msg.setSourceEntity(50U);
    msg.setDestination(28533U);
    msg.setDestinationEntity(189U);
    msg.op = 49U;
    msg.actions.assign("KUNVQVMKQJMTAGDKEMDDCLGRJPFFSNVOIJHHSRTWMPFENYGCRAJXTQTVMWTEXKQHEAVPPIBOGRZSKUKZLZUBHBCWUCTSALPRXLJGYIBKCZMBERTAIKDUERXMAQOUGWDVHNWXAWISPOMFNOAEGNZDCDEHPLTZMIBQSUVJZEPOPKLPNQCNXFCCAWHYUFRODTY");

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
    msg.setTimeStamp(0.237567659503);
    msg.setSource(11195U);
    msg.setSourceEntity(169U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(68U);
    msg.op = 170U;
    msg.actions.assign("IVVLKFPSBAGCYQJRQLJVXQIREKOCFXWFHMQOBLEHWTKEUEINXUQSHXTCFUVZRXOSIRVGBBROZEQBIZQYHZHJGYANCTDDTMSSGZYDQOWCKPEJTZMAAANEHVJNGUDOHRVNFXUIFDDTYJMWACWOMYRBOSYPCWPCUEOPAKNYLJERHIDMFSPZFLAQVMINPZWGWPXRGBU");

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
    msg.setTimeStamp(0.768678973805);
    msg.setSource(38072U);
    msg.setSourceEntity(233U);
    msg.setDestination(60667U);
    msg.setDestinationEntity(24U);
    msg.op = 109U;
    msg.actions.assign("HYSMZGDHQRHVNLYBKZFRPOAMTFOQQEOPCNJEPBPYTUBYRXCVHEQZFXLLTKGSADWXSSZIDKGDIDAMUYKKTRFMAIRFDFNRIWCEUOJUXQGMINKTSMQ");

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
    msg.setTimeStamp(0.124176806551);
    msg.setSource(45807U);
    msg.setSourceEntity(188U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(246U);
    msg.actions.assign("AJPGUKRMLHVVGJXKUDWTWBTXICSCRYOTLWFIDZLNARMIABUBESFHPPGVHECIJSJSRXQLRJOSGABRCKFVTTWYTKPSZJZBDNDOOBSJOWFRKBRBIEJGYWFIRYVXMYLSYEXLCXWINUHNZPHUP");

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
    msg.setTimeStamp(0.587768260074);
    msg.setSource(15556U);
    msg.setSourceEntity(53U);
    msg.setDestination(54813U);
    msg.setDestinationEntity(167U);
    msg.actions.assign("CLJRMIBRUWZHLGMTPUGETATMCXTSBQROHZMRWSKIQCHOGKZCOABWQGXMDLRPBPPIRWKPXUSSDGYJFVPUBSLBQCVSVYECUVNKRCDBFPEINITGYIUAKAJROWNKPJKRANEZHXWXHNAOENMQSFTDVMTGJQAXVDFXGVOAQWEZZMKZLNJQEYYZWYBEJKZCLTGIELFOCDDDXDAIGFOYHSFJMBBRPUWVLHZNSXVNFUPVEL");

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
    msg.setTimeStamp(0.322917066216);
    msg.setSource(30298U);
    msg.setSourceEntity(167U);
    msg.setDestination(5178U);
    msg.setDestinationEntity(28U);
    msg.actions.assign("ASZSDGIFLDPCACNBXKLIZLBOQCWNLGFRPQJLWBPZBAXMZGKLFMAGESPFQAQVTPTAHJTUOWTOBTGNHVTQWMTQKNVYRKRKGOJUOGPSQOEZMJGBOSIUXNVUJJVNEUHELMGKBUYYDYHXNPXIIXRVSBFSZDFSREXMMEPXRYTQDLNWJHAJMIYFWQCAPUYDDMVTGIHB");

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
    msg.setTimeStamp(0.531062772078);
    msg.setSource(39868U);
    msg.setSourceEntity(223U);
    msg.setDestination(8467U);
    msg.setDestinationEntity(9U);
    msg.button = 94U;
    msg.value = 186U;

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
    msg.setTimeStamp(0.482213645454);
    msg.setSource(64524U);
    msg.setSourceEntity(80U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(80U);
    msg.button = 234U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.455971994304);
    msg.setSource(48623U);
    msg.setSourceEntity(148U);
    msg.setDestination(61253U);
    msg.setDestinationEntity(232U);
    msg.button = 188U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.56563127712);
    msg.setSource(21312U);
    msg.setSourceEntity(201U);
    msg.setDestination(10013U);
    msg.setDestinationEntity(28U);
    msg.op = 242U;
    msg.text.assign("FHLBPFYRSPLYMJBNXRAVCUEAOOHBDBSKRLSAQSWMWXREJGSWJILXKOTAXYADZSIERHVTLPYWZQKTUGWABASWXQRUTGGZLWVKQEISCENFGSNITOQPVHKPJMQXPCNNXBMBOLRVDGHFYLBMDAUMCOYMNAZOEFEGKWQOQCSYZZZQRYKTTKXHFJXGEUWFDVHXRVYGMLIAHIVCOWDETCFLPMDBIKZKJIDNUJCCYTIONPCPUPUDBJFVUJJZDZGVUTHEIH");

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
    msg.setTimeStamp(0.646429941312);
    msg.setSource(38001U);
    msg.setSourceEntity(211U);
    msg.setDestination(30096U);
    msg.setDestinationEntity(89U);
    msg.op = 176U;
    msg.text.assign("EBTNKHSGRWIIVWTTEBDZEQRZKODRDQYLCGIBCZIIFNRXJJGBDESXSCZSCFGOHCUIMOHEQMFOFLDAAVYNMIMPAGBOXNUWKLYAQZQAYYNYWAVHSHOJLBOPKAEIJAUBYENINDOYWBRVTDTZPKXJWSM");

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
    msg.setTimeStamp(0.460934573436);
    msg.setSource(25418U);
    msg.setSourceEntity(86U);
    msg.setDestination(38866U);
    msg.setDestinationEntity(30U);
    msg.op = 100U;
    msg.text.assign("WTEVFQDZBBATFLAKMRBKYDOMHDUEAMGKIQISFPCNWDCJPWWUZSPFBOQABQFHJMAWWHTONEVNVIBSOKKYHJXJBEYTCPXALDXBLZPDLCKPHVXHEQVUADYNRREBPZWJHSUZFUEOVNJUTOXWGNHTRRWNKR");

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
    msg.setTimeStamp(0.623855591344);
    msg.setSource(42733U);
    msg.setSourceEntity(148U);
    msg.setDestination(62121U);
    msg.setDestinationEntity(30U);
    msg.op = 82U;
    msg.time_remain = 0.602370113969;
    msg.sched_time = 0.0508313624834;

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
    msg.setTimeStamp(0.132796317446);
    msg.setSource(12976U);
    msg.setSourceEntity(158U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(225U);
    msg.op = 53U;
    msg.time_remain = 0.186335788386;
    msg.sched_time = 0.570903031703;

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
    msg.setTimeStamp(0.728687694808);
    msg.setSource(57385U);
    msg.setSourceEntity(228U);
    msg.setDestination(35135U);
    msg.setDestinationEntity(236U);
    msg.op = 163U;
    msg.time_remain = 0.265103553659;
    msg.sched_time = 0.129088160491;

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
    msg.setTimeStamp(0.675892323322);
    msg.setSource(62482U);
    msg.setSourceEntity(144U);
    msg.setDestination(24168U);
    msg.setDestinationEntity(88U);
    msg.name.assign("AWGLDIKUVS");
    msg.op = 61U;
    msg.sched_time = 0.618949146624;

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
    msg.setTimeStamp(0.127670169594);
    msg.setSource(14331U);
    msg.setSourceEntity(118U);
    msg.setDestination(11477U);
    msg.setDestinationEntity(41U);
    msg.name.assign("QVEYWYMZUKUCWHONGTCUFTXSZGXOVMCPTHDOKNGGSBVONBCJXCPXSDKYQZKTAAZLHMMPKLXVJQJPDDAXSSCRKDA");
    msg.op = 61U;
    msg.sched_time = 0.0829647425181;

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
    msg.setTimeStamp(0.866042194158);
    msg.setSource(37579U);
    msg.setSourceEntity(50U);
    msg.setDestination(57428U);
    msg.setDestinationEntity(197U);
    msg.name.assign("KYOWONGKIPSRGCKAMXRMGGJETSEZBVBSFTFXVSRGMZBFWIBGCFDMYDAHIZGQZMTEYKWLOJSUSSNNWVMKZUPXDBLULUKXIFKEXZCFZWOADTWYBKUFHKFVRPHYRNAAPAWCHJQHATTPXIYYZCDPBTEMTJRMQOYDWHEXDQQUYVIQHEKL");
    msg.op = 93U;
    msg.sched_time = 0.00329194942648;

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
    msg.setTimeStamp(0.866268653025);
    msg.setSource(8222U);
    msg.setSourceEntity(35U);
    msg.setDestination(16903U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.780494703973);
    msg.setSource(5321U);
    msg.setSourceEntity(164U);
    msg.setDestination(37991U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.807080953176);
    msg.setSource(34751U);
    msg.setSourceEntity(78U);
    msg.setDestination(45882U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.252923575484);
    msg.setSource(21533U);
    msg.setSourceEntity(35U);
    msg.setDestination(53029U);
    msg.setDestinationEntity(225U);
    msg.name.assign("NDJJVZPBYFXSGJGLNYHFDGCCZNODNTHZZUJFGKRRIVPGBXASXDWGUNWIETE");
    msg.state = 252U;

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
    msg.setTimeStamp(0.943010914354);
    msg.setSource(29800U);
    msg.setSourceEntity(166U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(252U);
    msg.name.assign("QIFZBVBRPJPYAWXVFYYCKYMAXIEESTGJXQNNRNDHEGZYAFGELXNOHWSJRXDZIDTTUGTRU");
    msg.state = 123U;

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
    msg.setTimeStamp(0.626498902454);
    msg.setSource(19279U);
    msg.setSourceEntity(196U);
    msg.setDestination(6927U);
    msg.setDestinationEntity(83U);
    msg.name.assign("WYJVQZCERTEMDKMBXMSOKNPVJDMTSAZNRFDXTPWXFMYQLTDWOZBQPNBZHWHIHTRRAYSGCMQRTAIUPNEMDILLXAONOAFQYXPGYOUODNFEIYKPJIQLRKZVSTPDLAEWPOKYJQHZJWCJZKFNOA");
    msg.state = 113U;

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
    msg.setTimeStamp(0.723477813068);
    msg.setSource(33152U);
    msg.setSourceEntity(42U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(134U);
    msg.name.assign("HSRHMNXSYZVGIYQIONXAEDOUGKMDIKSINJOUXHWMCCAGYRKZIPRFNHWTMGXYLZKHVKXWZQPOBEAQUPGRBUQPAYNJJFDUBJWYNESLFMPVPVOCFPOHZTLOXLUAHKBAQMBYRYFXOYXUREAJOFDNRKHULWTCZJKIDLATVJVBSCPZMILBGIGYQXULFSLZRARSCFZCVTQTKNQRCGQICEIVBVJTOWEXP");
    msg.value = 218U;

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
    msg.setTimeStamp(0.322981092253);
    msg.setSource(4348U);
    msg.setSourceEntity(167U);
    msg.setDestination(49140U);
    msg.setDestinationEntity(202U);
    msg.name.assign("YTPKWOWTABTSRKPXRCFJPTDCSQOSVCWRFYNJQFPWNWBWUXGQJUJFEMUMAHYDCFLZVDNSZXBCWHNBSDCUYQRIQNTRUTIZLMWIEDCPUGQPEFUGZVFJABHAKBQGCPYHBHEOUTD");
    msg.value = 64U;

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
    msg.setTimeStamp(0.387415710237);
    msg.setSource(53939U);
    msg.setSourceEntity(105U);
    msg.setDestination(4510U);
    msg.setDestinationEntity(219U);
    msg.name.assign("LPBBRZUDVQDZUGARSYKFBLZAXNMOXDWH");
    msg.value = 178U;

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
    msg.setTimeStamp(0.617040968718);
    msg.setSource(32415U);
    msg.setSourceEntity(170U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(178U);
    msg.name.assign("MEBXEXGNLXIFILYNXEOIUNKPQYRJOWPYAVCSMZHRUFNPTGDKLNTUOKWXVPYJCORITMDGKGOHYNXHJAOUSNEMBXYQFQVCTJPVBSVSKEBQMXDZOZHOKGRRQWBUIFAQNBVKZSDRYKWEZJRLQJFCAWLNYAHWHPDRFEMZJJTZHESWFPSPPZBHUOABFDSTGXCBDTUXVBLHTIIAGECJQLRCGIJUEYQWVALLLFKNFQAMVTZWCMRSUMI");

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
    msg.setTimeStamp(0.955787779892);
    msg.setSource(53490U);
    msg.setSourceEntity(107U);
    msg.setDestination(22885U);
    msg.setDestinationEntity(39U);
    msg.name.assign("KRELGHYTFNBS");

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
    msg.setTimeStamp(0.353923948822);
    msg.setSource(22675U);
    msg.setSourceEntity(249U);
    msg.setDestination(18510U);
    msg.setDestinationEntity(84U);
    msg.name.assign("LSOTBOGZOPAVLYJRXNITGLLFLNYSDFMAIGBOZDASEUZSOQCMYJIPWIGKWJKQNAFNHHCDEKMTZXUKZXNUJGZBBHSOQ");

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
    msg.setTimeStamp(0.145377142122);
    msg.setSource(1550U);
    msg.setSourceEntity(19U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(222U);
    msg.name.assign("ITBOYEXTKOMQERPGDEQYDQGLBWTFANRFHSNXPKIBKJNMCZDPZGWATSWXQWGAHDLAYASJZOQKBFMDUNUQRNFXMZPBNQWDIPALDHUZVBUXJFOWHFVEHIFZSBIJRXFAUMHLZVFQXKJGOIPGUXBNYWNIWHLVVEYCZARXSUVOOUEKSKLKZTPLMJRTSOPHIKTUJCMLOGYYYXLJCRENBQMPSNHPCWBGCAE");
    msg.value = 82U;

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
    msg.setTimeStamp(0.57018690771);
    msg.setSource(35148U);
    msg.setSourceEntity(0U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(156U);
    msg.name.assign("PXCOASZCVDUDLNZMVVFSCFILIYKSSAABZJADCCTOGROJN");
    msg.value = 138U;

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
    msg.setTimeStamp(0.594490190897);
    msg.setSource(55593U);
    msg.setSourceEntity(144U);
    msg.setDestination(14549U);
    msg.setDestinationEntity(221U);
    msg.name.assign("DUXMHXJNZCNXYBQGVEYUOASHEOGQQBTKWPQSKWAMIJIUEVTXPBBGOVTAJBNKRJYTNTZCHLIEIGSKFLRIUWDDVRAGAMLCCJOUMXXRNACZLBSZHDGCMXELKCGVGBFKRVWDWCUDUHPHQCSMJKTOEPUHKZYAYUMGRFPRYOBWYSYETSTPMNSZFBQNVIQUVPTKMHAEXWOSMIAFJZYTLIIRECDXIHSQVDLODNFBFZRAJW");
    msg.value = 138U;

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
    msg.setTimeStamp(0.681212564662);
    msg.setSource(37631U);
    msg.setSourceEntity(92U);
    msg.setDestination(55826U);
    msg.setDestinationEntity(79U);
    msg.id = 104U;
    msg.period = 1694818480U;
    msg.duty_cycle = 4281269502U;

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
    msg.setTimeStamp(0.0793012965177);
    msg.setSource(35776U);
    msg.setSourceEntity(38U);
    msg.setDestination(22338U);
    msg.setDestinationEntity(26U);
    msg.id = 147U;
    msg.period = 4144808658U;
    msg.duty_cycle = 4091176253U;

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
    msg.setTimeStamp(0.233730005228);
    msg.setSource(54723U);
    msg.setSourceEntity(72U);
    msg.setDestination(59559U);
    msg.setDestinationEntity(167U);
    msg.id = 19U;
    msg.period = 599612594U;
    msg.duty_cycle = 370885371U;

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
    msg.setTimeStamp(0.00185733693276);
    msg.setSource(11916U);
    msg.setSourceEntity(180U);
    msg.setDestination(38368U);
    msg.setDestinationEntity(66U);
    msg.id = 111U;
    msg.period = 1889261409U;
    msg.duty_cycle = 3544013970U;

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
    msg.setTimeStamp(0.185024966744);
    msg.setSource(52589U);
    msg.setSourceEntity(49U);
    msg.setDestination(61754U);
    msg.setDestinationEntity(207U);
    msg.id = 186U;
    msg.period = 172284386U;
    msg.duty_cycle = 1674403625U;

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
    msg.setTimeStamp(0.497593230098);
    msg.setSource(3537U);
    msg.setSourceEntity(95U);
    msg.setDestination(5290U);
    msg.setDestinationEntity(65U);
    msg.id = 178U;
    msg.period = 2153898879U;
    msg.duty_cycle = 2371814879U;

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
    msg.setTimeStamp(0.745505255258);
    msg.setSource(9426U);
    msg.setSourceEntity(193U);
    msg.setDestination(5154U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.0629631335651;
    msg.lon = 0.718404835716;
    msg.height = 0.223092718574;
    msg.x = 0.341460969211;
    msg.y = 0.595155449199;
    msg.z = 0.515051239639;
    msg.phi = 0.0329457241593;
    msg.theta = 0.960980072036;
    msg.psi = 0.765649327588;
    msg.u = 0.878035906111;
    msg.v = 0.33772778558;
    msg.w = 0.0237421309297;
    msg.vx = 0.895563272657;
    msg.vy = 0.0307068555026;
    msg.vz = 0.275592091477;
    msg.p = 0.123146034521;
    msg.q = 0.0268289454948;
    msg.r = 0.737864850735;
    msg.depth = 0.448673001309;
    msg.alt = 0.336610449328;

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
    msg.setTimeStamp(0.343158582099);
    msg.setSource(21269U);
    msg.setSourceEntity(85U);
    msg.setDestination(63685U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.304074330816;
    msg.lon = 0.687724573744;
    msg.height = 0.904374233202;
    msg.x = 0.176492181677;
    msg.y = 0.491302851164;
    msg.z = 0.888196640596;
    msg.phi = 0.646768561065;
    msg.theta = 0.977910176171;
    msg.psi = 0.563368876128;
    msg.u = 0.517597284386;
    msg.v = 0.849428468284;
    msg.w = 0.537834987042;
    msg.vx = 0.119442480688;
    msg.vy = 0.019143828676;
    msg.vz = 0.368638579899;
    msg.p = 0.195302044762;
    msg.q = 0.208907711591;
    msg.r = 0.828659680254;
    msg.depth = 0.770589693008;
    msg.alt = 0.724948848248;

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
    msg.setTimeStamp(0.582275058718);
    msg.setSource(30579U);
    msg.setSourceEntity(67U);
    msg.setDestination(48784U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.291602773761;
    msg.lon = 0.171461750429;
    msg.height = 0.537689910352;
    msg.x = 0.831727887338;
    msg.y = 0.44439433197;
    msg.z = 0.0395089679272;
    msg.phi = 0.844009404799;
    msg.theta = 0.882195007541;
    msg.psi = 0.178375419616;
    msg.u = 0.935390231078;
    msg.v = 0.379928161901;
    msg.w = 0.657317399851;
    msg.vx = 0.632816874051;
    msg.vy = 0.383683890247;
    msg.vz = 0.573243141919;
    msg.p = 0.26867725566;
    msg.q = 0.588948943379;
    msg.r = 0.0942792178308;
    msg.depth = 0.29320796628;
    msg.alt = 0.355258470212;

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
    msg.setTimeStamp(0.995278352845);
    msg.setSource(2509U);
    msg.setSourceEntity(88U);
    msg.setDestination(51950U);
    msg.setDestinationEntity(149U);
    msg.x = 0.622619359878;
    msg.y = 0.677661881137;
    msg.z = 0.831409153356;

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
    msg.setTimeStamp(0.147590497987);
    msg.setSource(23382U);
    msg.setSourceEntity(151U);
    msg.setDestination(23576U);
    msg.setDestinationEntity(14U);
    msg.x = 0.536451670822;
    msg.y = 0.331896913066;
    msg.z = 0.363075103991;

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
    msg.setTimeStamp(0.813395892098);
    msg.setSource(9658U);
    msg.setSourceEntity(94U);
    msg.setDestination(46967U);
    msg.setDestinationEntity(12U);
    msg.x = 0.0694491091974;
    msg.y = 0.362408053091;
    msg.z = 0.055788322433;

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
    msg.setTimeStamp(0.799070279012);
    msg.setSource(29761U);
    msg.setSourceEntity(68U);
    msg.setDestination(28107U);
    msg.setDestinationEntity(91U);
    msg.value = 0.747862325772;

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
    msg.setTimeStamp(0.263278409243);
    msg.setSource(48511U);
    msg.setSourceEntity(145U);
    msg.setDestination(29116U);
    msg.setDestinationEntity(146U);
    msg.value = 0.51181153516;

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
    msg.setTimeStamp(0.604463323333);
    msg.setSource(44355U);
    msg.setSourceEntity(162U);
    msg.setDestination(20278U);
    msg.setDestinationEntity(48U);
    msg.value = 0.43992745436;

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
    msg.setTimeStamp(0.845493058412);
    msg.setSource(18515U);
    msg.setSourceEntity(227U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(249U);
    msg.value = 0.833610994466;

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
    msg.setTimeStamp(0.986901963995);
    msg.setSource(9121U);
    msg.setSourceEntity(56U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(48U);
    msg.value = 0.62740643049;

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
    msg.setTimeStamp(0.302047414832);
    msg.setSource(53460U);
    msg.setSourceEntity(48U);
    msg.setDestination(50311U);
    msg.setDestinationEntity(239U);
    msg.value = 0.838043342866;

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
    msg.setTimeStamp(0.22877423003);
    msg.setSource(23450U);
    msg.setSourceEntity(89U);
    msg.setDestination(10151U);
    msg.setDestinationEntity(9U);
    msg.x = 0.475694941277;
    msg.y = 0.942205619773;
    msg.z = 0.714333044372;
    msg.phi = 0.541507929957;
    msg.theta = 0.814771235839;
    msg.psi = 0.630328431797;
    msg.p = 0.866167766793;
    msg.q = 0.87169603737;
    msg.r = 0.729114842472;
    msg.u = 0.912758008403;
    msg.v = 0.633443268363;
    msg.w = 0.84378314707;
    msg.bias_psi = 0.433349759295;
    msg.bias_r = 1.54334112057e-05;

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
    msg.setTimeStamp(0.0376024339038);
    msg.setSource(10633U);
    msg.setSourceEntity(4U);
    msg.setDestination(47128U);
    msg.setDestinationEntity(12U);
    msg.x = 0.00454871683838;
    msg.y = 0.515640937718;
    msg.z = 0.362787612885;
    msg.phi = 0.366744656812;
    msg.theta = 0.994970962192;
    msg.psi = 0.662224127238;
    msg.p = 0.0130532049603;
    msg.q = 0.922663475357;
    msg.r = 0.223578057451;
    msg.u = 0.214801081608;
    msg.v = 0.588783001993;
    msg.w = 0.392485897808;
    msg.bias_psi = 0.879597820339;
    msg.bias_r = 0.0722493043805;

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
    msg.setTimeStamp(0.739916763798);
    msg.setSource(27645U);
    msg.setSourceEntity(62U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(151U);
    msg.x = 0.373537738817;
    msg.y = 0.358939335133;
    msg.z = 0.292237375257;
    msg.phi = 0.735981087163;
    msg.theta = 0.990346030264;
    msg.psi = 0.560625001734;
    msg.p = 0.520378221517;
    msg.q = 0.363873253116;
    msg.r = 0.0106541187838;
    msg.u = 0.814088471271;
    msg.v = 0.153224394569;
    msg.w = 0.126441703329;
    msg.bias_psi = 0.598061872493;
    msg.bias_r = 0.312715382409;

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
    msg.setTimeStamp(0.377862312997);
    msg.setSource(2961U);
    msg.setSourceEntity(198U);
    msg.setDestination(54721U);
    msg.setDestinationEntity(104U);
    msg.bias_psi = 0.387555778268;
    msg.bias_r = 0.510042139693;
    msg.cog = 0.672886664417;
    msg.cyaw = 0.176543452443;
    msg.lbl_rej_level = 0.621082736936;
    msg.gps_rej_level = 0.933790424324;
    msg.custom_x = 0.269860169573;
    msg.custom_y = 0.07383602721;
    msg.custom_z = 0.731728195511;

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
    msg.setTimeStamp(0.60670797837);
    msg.setSource(22594U);
    msg.setSourceEntity(212U);
    msg.setDestination(61655U);
    msg.setDestinationEntity(36U);
    msg.bias_psi = 0.790381762966;
    msg.bias_r = 0.713292413567;
    msg.cog = 0.263409731178;
    msg.cyaw = 0.851312762659;
    msg.lbl_rej_level = 0.0521229564404;
    msg.gps_rej_level = 0.196555054549;
    msg.custom_x = 0.306302318901;
    msg.custom_y = 0.0655012613036;
    msg.custom_z = 0.0501818525758;

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
    msg.setTimeStamp(0.182854041914);
    msg.setSource(57315U);
    msg.setSourceEntity(17U);
    msg.setDestination(25342U);
    msg.setDestinationEntity(132U);
    msg.bias_psi = 0.0203687061674;
    msg.bias_r = 0.524188644078;
    msg.cog = 0.634823019301;
    msg.cyaw = 0.379577729369;
    msg.lbl_rej_level = 0.666958145734;
    msg.gps_rej_level = 0.751752769119;
    msg.custom_x = 0.669516873433;
    msg.custom_y = 0.328754972499;
    msg.custom_z = 0.79599961493;

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
    msg.setTimeStamp(0.00354246555229);
    msg.setSource(33895U);
    msg.setSourceEntity(63U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(20U);
    msg.utc_time = 0.982930804731;
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
    msg.setTimeStamp(0.0116903337206);
    msg.setSource(24227U);
    msg.setSourceEntity(153U);
    msg.setDestination(18940U);
    msg.setDestinationEntity(85U);
    msg.utc_time = 0.533449579427;
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
    msg.setTimeStamp(0.317730336276);
    msg.setSource(35416U);
    msg.setSourceEntity(54U);
    msg.setDestination(22369U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.323949200537;
    msg.reason = 31U;

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
    msg.setTimeStamp(0.338269284039);
    msg.setSource(64802U);
    msg.setSourceEntity(92U);
    msg.setDestination(20502U);
    msg.setDestinationEntity(52U);
    msg.id = 23U;
    msg.range = 0.463753374178;
    msg.acceptance = 162U;

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
    msg.setTimeStamp(0.233092807511);
    msg.setSource(45584U);
    msg.setSourceEntity(90U);
    msg.setDestination(45313U);
    msg.setDestinationEntity(248U);
    msg.id = 56U;
    msg.range = 0.380296959845;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.173778514101);
    msg.setSource(64636U);
    msg.setSourceEntity(251U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(236U);
    msg.id = 239U;
    msg.range = 0.310500879354;
    msg.acceptance = 70U;

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
    msg.setTimeStamp(0.828121609365);
    msg.setSource(31617U);
    msg.setSourceEntity(6U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(80U);
    msg.type = 102U;
    msg.reason = 103U;
    msg.value = 0.929634159038;
    msg.timestep = 0.264166654343;

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
    msg.setTimeStamp(0.394097452434);
    msg.setSource(33279U);
    msg.setSourceEntity(64U);
    msg.setDestination(42483U);
    msg.setDestinationEntity(79U);
    msg.type = 240U;
    msg.reason = 159U;
    msg.value = 0.72175305571;
    msg.timestep = 0.550259137111;

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
    msg.setTimeStamp(0.179296087853);
    msg.setSource(29034U);
    msg.setSourceEntity(43U);
    msg.setDestination(55278U);
    msg.setDestinationEntity(144U);
    msg.type = 72U;
    msg.reason = 66U;
    msg.value = 0.334922134967;
    msg.timestep = 0.386649110265;

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
    msg.setTimeStamp(0.483178756078);
    msg.setSource(17837U);
    msg.setSourceEntity(0U);
    msg.setDestination(24668U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.0324634926495);
    msg.setSource(19310U);
    msg.setSourceEntity(73U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.179982569989);
    msg.setSource(37714U);
    msg.setSourceEntity(218U);
    msg.setDestination(38503U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.0256078930101);
    msg.setSource(11973U);
    msg.setSourceEntity(75U);
    msg.setDestination(61343U);
    msg.setDestinationEntity(166U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QNNNWAOOLVPDTHMGBDGWFFDGVQOEKYAMSGVWKVXKDDVXUJOMBVYHCLPESYKFUIZWANCKKSDFVLRHUGSKOGBKMXQMEYHFQPZTMEZOLZBJRFAPYJZEAYKRIQTIXJWTDCEPPONIRLCTQRCZUQNIJAB");
    tmp_msg_0.lat = 0.205221025955;
    tmp_msg_0.lon = 0.938570080806;
    tmp_msg_0.depth = 0.937961663068;
    tmp_msg_0.query_channel = 153U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.132736999294;
    msg.y = 0.731714942951;
    msg.var_x = 0.0394286189908;
    msg.var_y = 0.858391564392;
    msg.distance = 0.845108957338;

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
    msg.setTimeStamp(0.744899678893);
    msg.setSource(14269U);
    msg.setSourceEntity(146U);
    msg.setDestination(58029U);
    msg.setDestinationEntity(233U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SOEZGATAOJHTPLQOWOCCQKIMAXDHBCGIAJVCDFASCBJKJZSBHNQVCSMFENIAXREVZNVBUKWGUHZJWWKTGSFNNBPOGUQPWZZAY");
    tmp_msg_0.lat = 0.946583618734;
    tmp_msg_0.lon = 0.248429845164;
    tmp_msg_0.depth = 0.792655370591;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 2U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.843965689371;
    msg.y = 0.138637542613;
    msg.var_x = 0.884152428041;
    msg.var_y = 0.682421723465;
    msg.distance = 0.787337292876;

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
    msg.setTimeStamp(0.965899906245);
    msg.setSource(28575U);
    msg.setSourceEntity(167U);
    msg.setDestination(14726U);
    msg.setDestinationEntity(51U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ELOMLRGUPYSBLVYARCABYOQTEFUDBQUTGOIKZRJANWXVHJBRXRWMWCYVAZBIGUFMWTIQCHDDGCWYZUXBZNYM");
    tmp_msg_0.lat = 0.406116401685;
    tmp_msg_0.lon = 0.979704432225;
    tmp_msg_0.depth = 0.567744680942;
    tmp_msg_0.query_channel = 71U;
    tmp_msg_0.reply_channel = 189U;
    tmp_msg_0.transponder_delay = 22U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.414553698769;
    msg.y = 0.314192265636;
    msg.var_x = 0.6766995614;
    msg.var_y = 0.986664812184;
    msg.distance = 0.364060411037;

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
    msg.setTimeStamp(0.100000387812);
    msg.setSource(42726U);
    msg.setSourceEntity(54U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(177U);
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
    msg.setTimeStamp(0.243910856372);
    msg.setSource(64497U);
    msg.setSourceEntity(249U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(236U);
    msg.state = 189U;

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
    msg.setTimeStamp(0.756699010881);
    msg.setSource(5512U);
    msg.setSourceEntity(170U);
    msg.setDestination(42227U);
    msg.setDestinationEntity(234U);
    msg.state = 8U;

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
    msg.setTimeStamp(0.157509403868);
    msg.setSource(10906U);
    msg.setSourceEntity(65U);
    msg.setDestination(61783U);
    msg.setDestinationEntity(203U);
    msg.x = 0.109906464903;
    msg.y = 0.219478254014;
    msg.z = 0.840124506856;

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
    msg.setTimeStamp(0.603747476766);
    msg.setSource(10582U);
    msg.setSourceEntity(235U);
    msg.setDestination(23930U);
    msg.setDestinationEntity(179U);
    msg.x = 0.577076190204;
    msg.y = 0.949210026669;
    msg.z = 0.442404009958;

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
    msg.setTimeStamp(0.406676954211);
    msg.setSource(36899U);
    msg.setSourceEntity(111U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(24U);
    msg.x = 0.307878259089;
    msg.y = 0.118821268897;
    msg.z = 0.940567889454;

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
    msg.setTimeStamp(0.104702700438);
    msg.setSource(62716U);
    msg.setSourceEntity(56U);
    msg.setDestination(63287U);
    msg.setDestinationEntity(213U);
    msg.value = 0.619777141547;

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
    msg.setTimeStamp(0.33015067445);
    msg.setSource(17037U);
    msg.setSourceEntity(4U);
    msg.setDestination(11220U);
    msg.setDestinationEntity(45U);
    msg.value = 0.954309462127;

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
    msg.setTimeStamp(0.15630199283);
    msg.setSource(43237U);
    msg.setSourceEntity(254U);
    msg.setDestination(1578U);
    msg.setDestinationEntity(100U);
    msg.value = 0.761485778084;

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
    msg.setTimeStamp(0.25316922326);
    msg.setSource(12206U);
    msg.setSourceEntity(4U);
    msg.setDestination(62899U);
    msg.setDestinationEntity(215U);
    msg.value = 0.854605263828;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.816041245576);
    msg.setSource(6146U);
    msg.setSourceEntity(34U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(130U);
    msg.value = 0.746348255054;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.222947064803);
    msg.setSource(42218U);
    msg.setSourceEntity(55U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(95U);
    msg.value = 0.406887540838;
    msg.z_units = 210U;

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
    msg.setTimeStamp(0.324963404202);
    msg.setSource(228U);
    msg.setSourceEntity(3U);
    msg.setDestination(16062U);
    msg.setDestinationEntity(134U);
    msg.value = 0.577248109033;
    msg.speed_units = 122U;

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
    msg.setTimeStamp(0.519577926167);
    msg.setSource(35010U);
    msg.setSourceEntity(71U);
    msg.setDestination(48480U);
    msg.setDestinationEntity(219U);
    msg.value = 0.21187695448;
    msg.speed_units = 10U;

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
    msg.setTimeStamp(0.229891385986);
    msg.setSource(44830U);
    msg.setSourceEntity(187U);
    msg.setDestination(28946U);
    msg.setDestinationEntity(71U);
    msg.value = 0.790431156233;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.822708514267);
    msg.setSource(46091U);
    msg.setSourceEntity(156U);
    msg.setDestination(35107U);
    msg.setDestinationEntity(224U);
    msg.value = 0.48881939434;

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
    msg.setTimeStamp(0.224664858185);
    msg.setSource(3946U);
    msg.setSourceEntity(106U);
    msg.setDestination(15406U);
    msg.setDestinationEntity(141U);
    msg.value = 0.255325756158;

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
    msg.setTimeStamp(0.438352000999);
    msg.setSource(33611U);
    msg.setSourceEntity(132U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(26U);
    msg.value = 0.512190717333;

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
    msg.setTimeStamp(0.57722109097);
    msg.setSource(21264U);
    msg.setSourceEntity(12U);
    msg.setDestination(64561U);
    msg.setDestinationEntity(32U);
    msg.value = 0.951154631554;

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
    msg.setTimeStamp(0.265328094882);
    msg.setSource(46353U);
    msg.setSourceEntity(146U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(189U);
    msg.value = 0.120333132293;

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
    msg.setTimeStamp(0.904727172154);
    msg.setSource(5384U);
    msg.setSourceEntity(23U);
    msg.setDestination(7053U);
    msg.setDestinationEntity(225U);
    msg.value = 0.169188999667;

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
    msg.setTimeStamp(0.681328112266);
    msg.setSource(59145U);
    msg.setSourceEntity(237U);
    msg.setDestination(4347U);
    msg.setDestinationEntity(118U);
    msg.value = 0.531511003606;

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
    msg.setTimeStamp(0.396276814479);
    msg.setSource(19140U);
    msg.setSourceEntity(232U);
    msg.setDestination(21966U);
    msg.setDestinationEntity(19U);
    msg.value = 0.915355365088;

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
    msg.setTimeStamp(0.666349305865);
    msg.setSource(58053U);
    msg.setSourceEntity(210U);
    msg.setDestination(50680U);
    msg.setDestinationEntity(11U);
    msg.value = 0.875512827447;

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
    msg.setTimeStamp(0.762300454701);
    msg.setSource(29297U);
    msg.setSourceEntity(81U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(189U);
    msg.start_lat = 0.733029586191;
    msg.start_lon = 0.214136879103;
    msg.start_z = 0.588304946838;
    msg.start_z_units = 241U;
    msg.end_lat = 0.896717629847;
    msg.end_lon = 0.590653087094;
    msg.end_z = 0.352073498586;
    msg.end_z_units = 53U;
    msg.speed = 0.886683770256;
    msg.speed_units = 109U;
    msg.lradius = 0.952553388869;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.563754472633);
    msg.setSource(4413U);
    msg.setSourceEntity(208U);
    msg.setDestination(35183U);
    msg.setDestinationEntity(81U);
    msg.start_lat = 0.288246532695;
    msg.start_lon = 0.605947930593;
    msg.start_z = 0.932303733666;
    msg.start_z_units = 162U;
    msg.end_lat = 0.322960799306;
    msg.end_lon = 0.383196522644;
    msg.end_z = 0.831478976381;
    msg.end_z_units = 193U;
    msg.speed = 0.97722894904;
    msg.speed_units = 21U;
    msg.lradius = 0.448104373553;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.60868168955);
    msg.setSource(13887U);
    msg.setSourceEntity(12U);
    msg.setDestination(12809U);
    msg.setDestinationEntity(166U);
    msg.start_lat = 0.2317022251;
    msg.start_lon = 0.727866227003;
    msg.start_z = 0.287406106876;
    msg.start_z_units = 224U;
    msg.end_lat = 0.190506738361;
    msg.end_lon = 0.00903215059259;
    msg.end_z = 0.424056213177;
    msg.end_z_units = 174U;
    msg.speed = 0.680934029905;
    msg.speed_units = 208U;
    msg.lradius = 0.432160723659;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.420579660768);
    msg.setSource(46781U);
    msg.setSourceEntity(97U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(227U);
    msg.x = 0.283612301663;
    msg.y = 0.357879880142;
    msg.z = 0.948394141404;
    msg.k = 0.222463540898;
    msg.m = 0.882231927695;
    msg.n = 0.571959565447;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.251086303412);
    msg.setSource(42733U);
    msg.setSourceEntity(17U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(233U);
    msg.x = 0.808898329405;
    msg.y = 0.314787557526;
    msg.z = 0.788777596718;
    msg.k = 0.267581886871;
    msg.m = 0.187001064581;
    msg.n = 0.336110429724;
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
    msg.setTimeStamp(0.63718843941);
    msg.setSource(44525U);
    msg.setSourceEntity(240U);
    msg.setDestination(14769U);
    msg.setDestinationEntity(131U);
    msg.x = 0.925843404921;
    msg.y = 0.148126984384;
    msg.z = 0.278706697291;
    msg.k = 0.683723503718;
    msg.m = 0.282406249104;
    msg.n = 0.80454895617;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.291971692345);
    msg.setSource(61764U);
    msg.setSourceEntity(107U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(12U);
    msg.value = 0.442633132322;

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
    msg.setTimeStamp(0.224915325399);
    msg.setSource(35995U);
    msg.setSourceEntity(253U);
    msg.setDestination(21449U);
    msg.setDestinationEntity(227U);
    msg.value = 0.564064979562;

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
    msg.setTimeStamp(0.284894165482);
    msg.setSource(61914U);
    msg.setSourceEntity(14U);
    msg.setDestination(46602U);
    msg.setDestinationEntity(205U);
    msg.value = 0.29833982294;

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
    msg.setTimeStamp(0.708307074331);
    msg.setSource(22255U);
    msg.setSourceEntity(144U);
    msg.setDestination(27420U);
    msg.setDestinationEntity(174U);
    msg.u = 0.800797867103;
    msg.v = 0.110960050652;
    msg.w = 0.87549773252;
    msg.p = 0.84652806679;
    msg.q = 0.331123960145;
    msg.r = 0.470809897517;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.959945187601);
    msg.setSource(60201U);
    msg.setSourceEntity(130U);
    msg.setDestination(55647U);
    msg.setDestinationEntity(71U);
    msg.u = 0.685018242533;
    msg.v = 0.541419038623;
    msg.w = 0.804763380532;
    msg.p = 0.11531788813;
    msg.q = 0.987327129518;
    msg.r = 0.129632671557;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.224324271137);
    msg.setSource(62823U);
    msg.setSourceEntity(34U);
    msg.setDestination(29999U);
    msg.setDestinationEntity(143U);
    msg.u = 0.124428116554;
    msg.v = 0.834096966858;
    msg.w = 0.753382123339;
    msg.p = 0.505526586696;
    msg.q = 0.55211181527;
    msg.r = 0.716516493169;
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
    msg.setTimeStamp(0.283133087027);
    msg.setSource(25671U);
    msg.setSourceEntity(148U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(80U);
    msg.start_lat = 0.454321903038;
    msg.start_lon = 0.0870982443393;
    msg.start_z = 0.665554916246;
    msg.start_z_units = 183U;
    msg.end_lat = 0.928129984161;
    msg.end_lon = 0.785222322066;
    msg.end_z = 0.167026540873;
    msg.end_z_units = 47U;
    msg.lradius = 0.0650675181028;
    msg.flags = 33U;
    msg.x = 0.409685748646;
    msg.y = 0.535422445326;
    msg.z = 0.0318030902761;
    msg.vx = 0.722934886007;
    msg.vy = 0.822177431772;
    msg.vz = 0.739660395854;
    msg.course_error = 0.722868643399;
    msg.eta = 46342U;

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
    msg.setTimeStamp(0.469947627253);
    msg.setSource(10376U);
    msg.setSourceEntity(112U);
    msg.setDestination(27679U);
    msg.setDestinationEntity(152U);
    msg.start_lat = 0.570318676361;
    msg.start_lon = 0.456540572229;
    msg.start_z = 0.864152095164;
    msg.start_z_units = 244U;
    msg.end_lat = 0.355512569164;
    msg.end_lon = 0.568600664934;
    msg.end_z = 0.637777420804;
    msg.end_z_units = 114U;
    msg.lradius = 0.429144452185;
    msg.flags = 252U;
    msg.x = 0.153779664152;
    msg.y = 0.467839217822;
    msg.z = 0.0358051185282;
    msg.vx = 0.233442579444;
    msg.vy = 0.0836527786569;
    msg.vz = 0.63111352405;
    msg.course_error = 0.496064616989;
    msg.eta = 48659U;

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
    msg.setTimeStamp(0.744991125953);
    msg.setSource(14816U);
    msg.setSourceEntity(233U);
    msg.setDestination(18938U);
    msg.setDestinationEntity(123U);
    msg.start_lat = 0.486683109077;
    msg.start_lon = 0.589641658008;
    msg.start_z = 0.892377053581;
    msg.start_z_units = 125U;
    msg.end_lat = 0.67937122178;
    msg.end_lon = 0.282654988816;
    msg.end_z = 0.325618951777;
    msg.end_z_units = 225U;
    msg.lradius = 0.887783659446;
    msg.flags = 0U;
    msg.x = 0.128378358203;
    msg.y = 0.325081736374;
    msg.z = 0.217801312955;
    msg.vx = 0.224312983775;
    msg.vy = 0.363242478555;
    msg.vz = 0.186511935332;
    msg.course_error = 0.32125083742;
    msg.eta = 62954U;

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
    msg.setTimeStamp(0.105737752815);
    msg.setSource(47812U);
    msg.setSourceEntity(163U);
    msg.setDestination(8466U);
    msg.setDestinationEntity(115U);
    msg.k = 0.431646642464;
    msg.m = 0.0648157064514;
    msg.n = 0.597333877851;

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
    msg.setTimeStamp(0.144318140079);
    msg.setSource(54421U);
    msg.setSourceEntity(104U);
    msg.setDestination(44849U);
    msg.setDestinationEntity(101U);
    msg.k = 0.120048251962;
    msg.m = 0.875531231165;
    msg.n = 0.732734529347;

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
    msg.setTimeStamp(0.975766639159);
    msg.setSource(9328U);
    msg.setSourceEntity(163U);
    msg.setDestination(25550U);
    msg.setDestinationEntity(90U);
    msg.k = 0.770524890878;
    msg.m = 0.404462309275;
    msg.n = 0.622192783105;

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
    msg.setTimeStamp(0.557673946752);
    msg.setSource(17332U);
    msg.setSourceEntity(16U);
    msg.setDestination(45170U);
    msg.setDestinationEntity(14U);
    msg.p = 0.417447551217;
    msg.i = 0.377130463248;
    msg.d = 0.598441494771;
    msg.a = 0.524306883894;

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
    msg.setTimeStamp(0.388563887899);
    msg.setSource(41574U);
    msg.setSourceEntity(246U);
    msg.setDestination(53535U);
    msg.setDestinationEntity(180U);
    msg.p = 0.269489368934;
    msg.i = 0.198052961861;
    msg.d = 0.758698720636;
    msg.a = 0.769756535502;

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
    msg.setTimeStamp(0.927299517658);
    msg.setSource(23560U);
    msg.setSourceEntity(92U);
    msg.setDestination(5530U);
    msg.setDestinationEntity(210U);
    msg.p = 0.259486525137;
    msg.i = 0.550657405915;
    msg.d = 0.166028045679;
    msg.a = 0.200385462974;

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
    msg.setTimeStamp(0.335659971842);
    msg.setSource(30259U);
    msg.setSourceEntity(133U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(1U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.00926620191611);
    msg.setSource(19565U);
    msg.setSourceEntity(112U);
    msg.setDestination(37664U);
    msg.setDestinationEntity(237U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.172760529836);
    msg.setSource(35247U);
    msg.setSourceEntity(137U);
    msg.setDestination(42693U);
    msg.setDestinationEntity(228U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.0880091711801);
    msg.setSource(18019U);
    msg.setSourceEntity(248U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(226U);
    msg.timeout = 21829U;
    msg.lat = 0.00583886511513;
    msg.lon = 0.0845295478137;
    msg.z = 0.268406689276;
    msg.z_units = 254U;
    msg.speed = 0.574455693591;
    msg.speed_units = 42U;
    msg.roll = 0.193082276781;
    msg.pitch = 0.765282852094;
    msg.yaw = 0.0367911165621;
    msg.custom.assign("SILUMFDLZGRLLKTCTPGAIYZCWGSEDBMOKBFJWFJNWSJYCZBKHHUQFWMKAJSPETJAWYOADVZMOL");

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
    msg.setTimeStamp(0.201564086108);
    msg.setSource(41449U);
    msg.setSourceEntity(164U);
    msg.setDestination(7952U);
    msg.setDestinationEntity(88U);
    msg.timeout = 44525U;
    msg.lat = 0.655055112276;
    msg.lon = 0.209454079956;
    msg.z = 0.2154558269;
    msg.z_units = 19U;
    msg.speed = 0.990057532243;
    msg.speed_units = 73U;
    msg.roll = 0.0384781839624;
    msg.pitch = 0.40385580339;
    msg.yaw = 0.288909595967;
    msg.custom.assign("RIMRAVHBLQWRIAAELESIXHHDCLPMHVLGEQQGYHZVCWDOONSAXNBJNVRDUMFRAXCTABEPRKODBQNDWBVJIIRQUBZXXOEQYZPDSLRFBQUKYTJMKCFGTDUKSNWZGVUIJQSVSSYYLYBCGJCUXHEKNHZXMGUYMDYFOWLZFTBAKGAOWPCCVTGPRPMRHGILXUIZXFLTZHBPOTIOFJFA");

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
    msg.setTimeStamp(0.820575115247);
    msg.setSource(41616U);
    msg.setSourceEntity(137U);
    msg.setDestination(38567U);
    msg.setDestinationEntity(39U);
    msg.timeout = 26016U;
    msg.lat = 0.32987359109;
    msg.lon = 0.307986501929;
    msg.z = 0.154781547734;
    msg.z_units = 142U;
    msg.speed = 0.263059837875;
    msg.speed_units = 93U;
    msg.roll = 0.486897935865;
    msg.pitch = 0.0247972801859;
    msg.yaw = 0.787900435027;
    msg.custom.assign("CHXKHTJWHGBTIBQYAQUZFMIICXKOJMUWMGKFPEYRLSEIGDWVITMUHHJPFDEOLNNJDFNOKAWUAJVUDEZHCBVCMAJUPFJBXCWRYYDBZOYKGIEPGZUZZP");

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
    msg.setTimeStamp(0.0600672678966);
    msg.setSource(23434U);
    msg.setSourceEntity(169U);
    msg.setDestination(32413U);
    msg.setDestinationEntity(44U);
    msg.timeout = 53359U;
    msg.lat = 0.350892880043;
    msg.lon = 0.269088257853;
    msg.z = 0.476672152525;
    msg.z_units = 126U;
    msg.speed = 0.815739321406;
    msg.speed_units = 254U;
    msg.duration = 42942U;
    msg.radius = 0.184287900824;
    msg.flags = 83U;
    msg.custom.assign("RDIZAZKCWAFSKLEXKCVPKFOBABKZUFLVDPXOPEPZNNZICGEUVZRRIYJYINSLCZVTOUVPMBBHJQLJYRHHNTBZUNGHDJUQPCREFTDWUETDSANYQLEOCPRSLMBCQOEEJYWJXOXSVHBTQHFQTGJXGKNWJLLSEXFOMVNLIKOMREWQOZS");

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
    msg.setTimeStamp(0.245626708895);
    msg.setSource(31190U);
    msg.setSourceEntity(198U);
    msg.setDestination(24417U);
    msg.setDestinationEntity(28U);
    msg.timeout = 34U;
    msg.lat = 0.990298389872;
    msg.lon = 0.0572384287164;
    msg.z = 0.330162960417;
    msg.z_units = 249U;
    msg.speed = 0.352958683459;
    msg.speed_units = 117U;
    msg.duration = 56247U;
    msg.radius = 0.136586180018;
    msg.flags = 208U;
    msg.custom.assign("FDATFCEZSYBBIENIDVGAJCAEPGGNHXINRYDQMZAOLNCLYGCEAUCHTRISIGCYTHRRHGBDRFKTOUWTLWKMSXMIQYUVREDIKJXCPTAOKFXSLLQPSAIWEFEHBNPFRRGZEKFXOMXBOGJTZWSWJUVULMLCAXKSJMDSTOYAHKRYWNNPHPDUPZWFQKVLPDFRVBYOMJBUVQZBPKNVS");

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
    msg.setTimeStamp(0.631397736117);
    msg.setSource(36527U);
    msg.setSourceEntity(192U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(45U);
    msg.timeout = 62499U;
    msg.lat = 0.159798213466;
    msg.lon = 0.576576237109;
    msg.z = 0.623771396662;
    msg.z_units = 113U;
    msg.speed = 0.0210059022603;
    msg.speed_units = 23U;
    msg.duration = 8747U;
    msg.radius = 0.289026671725;
    msg.flags = 210U;
    msg.custom.assign("JJNSRYATKDT");

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
    msg.setTimeStamp(0.761450938581);
    msg.setSource(54413U);
    msg.setSourceEntity(14U);
    msg.setDestination(31938U);
    msg.setDestinationEntity(78U);
    msg.custom.assign("DEVHKBEENNCWFINUQJTFUFDOTATDLZIOZRTBJSEMRU");

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
    msg.setTimeStamp(0.33807668739);
    msg.setSource(14962U);
    msg.setSourceEntity(205U);
    msg.setDestination(21574U);
    msg.setDestinationEntity(178U);
    msg.custom.assign("BPXQGSANOFZPNNFKOTLHBYMADBKYCWEBEEQZXVSOKHCPVBDDWTTALMSTUVQYVMQHNCWTOGVYGHNXKGXUXLCFIKFWUQYRBWQHACDFN");

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
    msg.setTimeStamp(0.521115352207);
    msg.setSource(61902U);
    msg.setSourceEntity(158U);
    msg.setDestination(33133U);
    msg.setDestinationEntity(87U);
    msg.custom.assign("QAZZPEGXBQFHVGTQATXJBUGAFPVTEYNDFYOXPKERCKAQOSMVRIWLPJIYDIYKUCEMXAROFQMHPDGCOHPEWDOXXTAWHJFCMVBLQOODYGZIYSLRXGNABAGHSXKRFVOBVJUDHWNMFLDMUQESBPKLAPWDJPWGZUACLMTBRMYWNHQQKWCTSPWKBYCRKBXHIEFXVNZCZSDNUVSLUENRZIYJHHIBJNSUIUQRLMNVTIZFFVOGJOETSCNCD");

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
    msg.setTimeStamp(0.499110374795);
    msg.setSource(29159U);
    msg.setSourceEntity(63U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(71U);
    msg.timeout = 41213U;
    msg.lat = 0.174273171579;
    msg.lon = 0.116690463284;
    msg.z = 0.55271881686;
    msg.z_units = 26U;
    msg.duration = 65333U;
    msg.speed = 0.721753006993;
    msg.speed_units = 87U;
    msg.type = 0U;
    msg.radius = 0.467888962605;
    msg.length = 0.985825336704;
    msg.bearing = 0.413226690653;
    msg.direction = 230U;
    msg.custom.assign("JZHAQCUFYLFEGUTMZJKWUOCDMPSTPQZMBRSDKGHEBFZQTIQQCFZDSRLMBAJABZROELNRQUJVUTLBWQYQUHUMSKGUIPLMTXPEMXXAGKZKTCBNFXNCROBHVHAJRVGKAFGIJDLQDSRMPILVTMGNHYYVXJOPLMIYGJAXBWYAZXXINVEVCVSDDHRZOSOEIAWWYGFOOL");

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
    msg.setTimeStamp(0.29055706074);
    msg.setSource(28032U);
    msg.setSourceEntity(13U);
    msg.setDestination(21968U);
    msg.setDestinationEntity(154U);
    msg.timeout = 65175U;
    msg.lat = 0.944731352747;
    msg.lon = 0.570342734404;
    msg.z = 0.287381932993;
    msg.z_units = 177U;
    msg.duration = 33036U;
    msg.speed = 0.291725684304;
    msg.speed_units = 174U;
    msg.type = 220U;
    msg.radius = 0.00413143341463;
    msg.length = 0.184014845016;
    msg.bearing = 0.0250053089107;
    msg.direction = 29U;
    msg.custom.assign("LBXKCWLFZKGWXOYYYEFDVXUHXDLOSSTGQNDVWLJKRJGPWVKUXQNNEOVZBCDPIQAXRFTMPMCPTOBMYZOIYQVRJLLNJMTHORMKVHFAWSDGSELOUYXTSEIFFSDKURZISUNEBITRXPYVYMDZMUECGZFAPUDXVCMKARUBLJBJJGJOBZOWEHNQCVQPDNACEKIDZFWUHCYQTPXMNCZQGKHBNAPEMANUG");

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
    msg.setTimeStamp(0.286419252595);
    msg.setSource(38693U);
    msg.setSourceEntity(231U);
    msg.setDestination(14860U);
    msg.setDestinationEntity(231U);
    msg.timeout = 53598U;
    msg.lat = 0.0623899729436;
    msg.lon = 0.631676950752;
    msg.z = 0.343700032304;
    msg.z_units = 58U;
    msg.duration = 52172U;
    msg.speed = 0.444720716859;
    msg.speed_units = 83U;
    msg.type = 201U;
    msg.radius = 0.857586469376;
    msg.length = 0.0781451369517;
    msg.bearing = 0.849542937454;
    msg.direction = 48U;
    msg.custom.assign("TTNDDUZCDHSNSXNIKFTXFWZTURBQFRIRJVLLZBUHXYHDKBOMGOLNQGGIIEKZIUAJENALWYLQOLKRQVEE");

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
    msg.setTimeStamp(0.930681073559);
    msg.setSource(59123U);
    msg.setSourceEntity(51U);
    msg.setDestination(31082U);
    msg.setDestinationEntity(242U);
    msg.duration = 53555U;
    msg.custom.assign("JIOALFJFUCSZDZOIKTVEUCTIYXKGEQWCAQEGRXINVSGMHPMKRYCSZAMTPWYKDPBZVFMNYGMTLKOLRRNQDQQNJKZPHJONLWDOKWXFGSVQTYFIWXZKBUDUWCNUXPFIJNPTNAVXPXAVVQPDDLYBMOMOYUVIYHDIJTLBKSUSBTZMKQPAMDRAJINROWZJOSBYOZC");

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
    msg.setTimeStamp(0.880081252962);
    msg.setSource(41228U);
    msg.setSourceEntity(103U);
    msg.setDestination(42539U);
    msg.setDestinationEntity(251U);
    msg.duration = 23389U;
    msg.custom.assign("HBHUSUUQDQSFNNGFIJCAZEXYPPMZMYJQDFYNZQJUQMHFABDLIRUNXRIYREGOUGSPY");

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
    msg.setTimeStamp(0.381093146177);
    msg.setSource(63690U);
    msg.setSourceEntity(187U);
    msg.setDestination(59779U);
    msg.setDestinationEntity(76U);
    msg.duration = 26559U;
    msg.custom.assign("DGFCDSOZEMTKEPVXFOKKIEYQSJGNRTITYUMXSFBRTLMSAPMQMQQBNHALLDZVTZDYOFJUZCE");

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
    msg.setTimeStamp(0.362266369764);
    msg.setSource(1017U);
    msg.setSourceEntity(96U);
    msg.setDestination(37063U);
    msg.setDestinationEntity(210U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.435456632059;
    msg.control.set(tmp_msg_0);
    msg.duration = 43597U;
    msg.custom.assign("VFKZHVHMNWQWRMAFVYJBOOHBSGBJSZTOZLCPWZIIYMGDAYSUKAYKNHVBJXQIBFREFNAHTGWYNHK");

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
    msg.setTimeStamp(0.12202981862);
    msg.setSource(54203U);
    msg.setSourceEntity(108U);
    msg.setDestination(2441U);
    msg.setDestinationEntity(225U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.91498486932;
    tmp_msg_0.start_lon = 0.25785935753;
    tmp_msg_0.start_z = 0.519145421781;
    tmp_msg_0.start_z_units = 139U;
    tmp_msg_0.end_lat = 0.482314950777;
    tmp_msg_0.end_lon = 0.790541701993;
    tmp_msg_0.end_z = 0.934783875879;
    tmp_msg_0.end_z_units = 88U;
    tmp_msg_0.speed = 0.673220633815;
    tmp_msg_0.speed_units = 155U;
    tmp_msg_0.lradius = 0.0116209245924;
    tmp_msg_0.flags = 109U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62420U;
    msg.custom.assign("AMRZTUWFDJGOTKBEFRGGOBFEMFIPVSRSAJELUOYVDHVSOXAJCICZQQWLUADVRVNKCSSSMMIYYSDHJUIMFJNNFRBNKPDDLDUNUGSCWNVTWIVUUXCIJYLYEAWOBUZYXKGGOXVQPTKSJBFWMLDIZNCPATQYMNENBTABSPXPHEBNYRXLYZLPXHHBFQKCRQBWWHQJDWRGZPTOQXKQREEDUIIPQHKGMCGYXTPRETXZLLJZWF");

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
    msg.setTimeStamp(0.29698229683);
    msg.setSource(56076U);
    msg.setSourceEntity(251U);
    msg.setDestination(63825U);
    msg.setDestinationEntity(227U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.244655954713;
    msg.control.set(tmp_msg_0);
    msg.duration = 41191U;
    msg.custom.assign("QAZRKSADBYLYQYGXSVFBBURYPZD");

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
    msg.setTimeStamp(0.567293883958);
    msg.setSource(44573U);
    msg.setSourceEntity(112U);
    msg.setDestination(39082U);
    msg.setDestinationEntity(206U);
    msg.timeout = 63073U;
    msg.lat = 0.720633264672;
    msg.lon = 0.64532906553;
    msg.z = 0.121403459122;
    msg.z_units = 200U;
    msg.speed = 0.183301980866;
    msg.speed_units = 243U;
    msg.bearing = 0.220599533552;
    msg.cross_angle = 0.830100010786;
    msg.width = 0.141349659925;
    msg.length = 0.326514752804;
    msg.hstep = 0.802027142069;
    msg.coff = 104U;
    msg.alternation = 37U;
    msg.flags = 86U;
    msg.custom.assign("LHIAFMIXRAZQGPZFPFSDCHEMRZCKHRQORWLREKTTEHYGPNFSOTYOJWUSXVQBUSWEUUMGKNNBHKFDSJKBBUXYTEJSBPGRXGMPWXAUYJVCTSLBVBFQJXWVGWQJMRRNKNICIDKVONSYTXCNFKVKMZPIYGEHONFAKDWMDXFYHOAQDBVMTLNQCVULEZQIGJCLOOYRIEMSIEAZWJEDABC");

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
    msg.setTimeStamp(0.568429029624);
    msg.setSource(3215U);
    msg.setSourceEntity(245U);
    msg.setDestination(839U);
    msg.setDestinationEntity(51U);
    msg.timeout = 48888U;
    msg.lat = 0.929166517886;
    msg.lon = 0.296131349174;
    msg.z = 0.541316670775;
    msg.z_units = 82U;
    msg.speed = 0.993513323228;
    msg.speed_units = 164U;
    msg.bearing = 0.355785083186;
    msg.cross_angle = 0.261544939068;
    msg.width = 0.0836213726122;
    msg.length = 0.168976707615;
    msg.hstep = 0.329968822975;
    msg.coff = 159U;
    msg.alternation = 243U;
    msg.flags = 32U;
    msg.custom.assign("XGBPYYJLRJGWTYUDFYQGHTIIUWNBJMZBERZTWSLMRKPSNGRFZOEHEZFJOCCKQRVYUURJCDBSWVMVGOMFTMIDAAHCTQXUSSHMCLGLOFAENGHUEARFVPDDGOQLTJAQKLKSCEZBBJWLXTVOMDYZIENPNIPFLPOYMBWEZIACDYWQZAKNBHHDSMMKHVARJWBNUXLGQXOTRIFDKWVVNXODIBSRTOXXCTPNPAYXZCXAYQIFHLCHSZVPUQ");

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
    msg.setTimeStamp(0.378892382155);
    msg.setSource(17058U);
    msg.setSourceEntity(185U);
    msg.setDestination(49884U);
    msg.setDestinationEntity(165U);
    msg.timeout = 55571U;
    msg.lat = 0.705858152573;
    msg.lon = 0.368409514326;
    msg.z = 0.135095116361;
    msg.z_units = 249U;
    msg.speed = 0.447479923225;
    msg.speed_units = 145U;
    msg.bearing = 0.621063889154;
    msg.cross_angle = 0.994499311051;
    msg.width = 0.0596183227123;
    msg.length = 0.109266135447;
    msg.hstep = 0.835453184388;
    msg.coff = 232U;
    msg.alternation = 27U;
    msg.flags = 95U;
    msg.custom.assign("WBHGGMETBBALBJDZHI");

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
    msg.setTimeStamp(0.181004167163);
    msg.setSource(58286U);
    msg.setSourceEntity(57U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(15U);
    msg.timeout = 31410U;
    msg.lat = 0.781576561106;
    msg.lon = 0.552034301417;
    msg.z = 0.0959726242642;
    msg.z_units = 110U;
    msg.speed = 0.685377142121;
    msg.speed_units = 29U;
    msg.custom.assign("QDBDRSWKWYVNTXMRPUHYZ");

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
    msg.setTimeStamp(0.0111147384215);
    msg.setSource(377U);
    msg.setSourceEntity(47U);
    msg.setDestination(38199U);
    msg.setDestinationEntity(48U);
    msg.timeout = 40340U;
    msg.lat = 0.279181470098;
    msg.lon = 0.744456064619;
    msg.z = 0.675783260618;
    msg.z_units = 152U;
    msg.speed = 0.669599125545;
    msg.speed_units = 244U;
    msg.custom.assign("CCXEEUSBONDIPFKCAGIKPLYUHEWJIHLZZPKGXZAIGFBORJHJZCHRNCTZUUHSBCDYIMTIXEYLQQLNKMFOLUDYERYQFPSUBNVKGQEGGHCWTXXSYLYHUDOYKTVOVNLRZCVTSAPDQFVMKQNUZKWVGOPDTWVT");

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
    msg.setTimeStamp(0.543232149496);
    msg.setSource(17553U);
    msg.setSourceEntity(160U);
    msg.setDestination(55471U);
    msg.setDestinationEntity(235U);
    msg.timeout = 21932U;
    msg.lat = 0.316967850988;
    msg.lon = 0.0211093117003;
    msg.z = 0.708135066862;
    msg.z_units = 175U;
    msg.speed = 0.734945363196;
    msg.speed_units = 144U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.136477039483;
    tmp_msg_0.y = 0.225126394761;
    tmp_msg_0.z = 0.631790628189;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QXTNDDQEOLHHPXGYWNTJIJGLJCOOJDCXULBATFUBHBRLQTEXLJBSECBQXYFQPYZJCSZIEHWJKVRAFACTIKPMFOHZAVWMXRDKSNVDHMIYRHJMNJSYUMYOWGYIIPNGWBBEPGUUBMFUMNZLCAKMARXQUIVAEDDPSGKWDVFCSMFMQLYANNSBTZQJHZFUREY");

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
    msg.setTimeStamp(0.374569009014);
    msg.setSource(35746U);
    msg.setSourceEntity(105U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(241U);
    msg.x = 0.707044329158;
    msg.y = 0.616500438525;
    msg.z = 0.178926090116;

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
    msg.setTimeStamp(0.998011261415);
    msg.setSource(34445U);
    msg.setSourceEntity(217U);
    msg.setDestination(54403U);
    msg.setDestinationEntity(195U);
    msg.x = 0.537062616288;
    msg.y = 0.75885027555;
    msg.z = 0.814179716214;

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
    msg.setTimeStamp(0.242088038811);
    msg.setSource(33997U);
    msg.setSourceEntity(87U);
    msg.setDestination(56521U);
    msg.setDestinationEntity(28U);
    msg.x = 0.127809541877;
    msg.y = 0.0473815193957;
    msg.z = 0.0605084924038;

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
    msg.setTimeStamp(0.0876166699416);
    msg.setSource(40614U);
    msg.setSourceEntity(96U);
    msg.setDestination(7678U);
    msg.setDestinationEntity(192U);
    msg.timeout = 59901U;
    msg.lat = 0.948283124187;
    msg.lon = 0.658218125023;
    msg.z = 0.657335657873;
    msg.z_units = 239U;
    msg.amplitude = 0.906425315823;
    msg.pitch = 0.92796573614;
    msg.speed = 0.484182313191;
    msg.speed_units = 12U;
    msg.custom.assign("GMHPHZFWRKQHWFRZEUNLUMOLOTGLIIRBQTKWDSQVRGYPQB");

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
    msg.setTimeStamp(0.734011542007);
    msg.setSource(47480U);
    msg.setSourceEntity(62U);
    msg.setDestination(18461U);
    msg.setDestinationEntity(120U);
    msg.timeout = 48326U;
    msg.lat = 0.0436437054315;
    msg.lon = 0.743600671208;
    msg.z = 0.746146275474;
    msg.z_units = 164U;
    msg.amplitude = 0.735413905133;
    msg.pitch = 0.758959161164;
    msg.speed = 0.450017503926;
    msg.speed_units = 206U;
    msg.custom.assign("UIHDPACDSORRPAOBSZZHQGLPREPDEFLPTPFBEKVUGCWPEJQDXEMDNRCOWBQDIKUNUJXOLUKSBKUHQIYXSKNDIIJXYNVYCJTISCFNVOIORFXDSNYWMY");

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
    msg.setTimeStamp(0.204557678598);
    msg.setSource(47851U);
    msg.setSourceEntity(241U);
    msg.setDestination(2269U);
    msg.setDestinationEntity(139U);
    msg.timeout = 50906U;
    msg.lat = 0.785120911182;
    msg.lon = 0.640090228489;
    msg.z = 0.0833414985695;
    msg.z_units = 165U;
    msg.amplitude = 0.0658869540337;
    msg.pitch = 0.899746376086;
    msg.speed = 0.494096207339;
    msg.speed_units = 69U;
    msg.custom.assign("WVEILQTRQAZMDCFSVZMJPEGTAIYSAOWWEUEYBBTLNVVTJYTYWERJOXHOIIKCXMZFWOSNVVCOFJPCYEXSGNFFNLPXMLXVOCZCQGNLHSSLOYUARDBJZWQUOLPIUMMUGEMTPBIXHZBLEDAPUCLHRIDJKWZGUVGQFSKRSIRZBPUUAJRDIPYKFBMQFDTDUSAKKZOKNGRXQCATHKZHMJGNYFQEHJNWXDBGRE");

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
    msg.setTimeStamp(0.0299161282483);
    msg.setSource(50031U);
    msg.setSourceEntity(70U);
    msg.setDestination(62218U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0451924477017);
    msg.setSource(47453U);
    msg.setSourceEntity(179U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.399277920462);
    msg.setSource(5802U);
    msg.setSourceEntity(88U);
    msg.setDestination(29505U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.412561394411);
    msg.setSource(34108U);
    msg.setSourceEntity(214U);
    msg.setDestination(38263U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.391821061488;
    msg.lon = 0.39115399503;
    msg.z = 0.691472213769;
    msg.z_units = 163U;
    msg.radius = 0.6676816354;
    msg.duration = 19979U;
    msg.speed = 0.615627209209;
    msg.speed_units = 68U;
    msg.custom.assign("UKQUHBQDIWDQKBWYAMWSSXXNHXTCAZGZXHULOEGEHXBPRYECMOT");

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
    msg.setTimeStamp(0.583555790654);
    msg.setSource(31283U);
    msg.setSourceEntity(170U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.587211245751;
    msg.lon = 0.0547184347654;
    msg.z = 0.574622722189;
    msg.z_units = 51U;
    msg.radius = 0.976540932555;
    msg.duration = 63900U;
    msg.speed = 0.973045509866;
    msg.speed_units = 18U;
    msg.custom.assign("PBXIMTASTFSYWVZAPNUKZNECNLAOHVWEPCOVVUNSDPAWBRXWYLERLOHRQBKLQIIYFSPNPGLKGOTNXHUQJEVZRWCKMPWXKSJAJIBYFGFQTAFRLTYSATFTMUBENEAOOGDMBIZPCZPFMCEGLVKSYJNNW");

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
    msg.setTimeStamp(0.572320887254);
    msg.setSource(23965U);
    msg.setSourceEntity(249U);
    msg.setDestination(57724U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.713571267506;
    msg.lon = 0.303561336743;
    msg.z = 0.0446688427335;
    msg.z_units = 127U;
    msg.radius = 0.881557888978;
    msg.duration = 22889U;
    msg.speed = 0.211268542841;
    msg.speed_units = 157U;
    msg.custom.assign("MSMIOVKJYCXVUJAMRUYJXROTZWRXWVAGZUKPDNBHLSJSLERXPZCBPUCIUJBOVSMNHIIKXZXWHWEPPETAQGXBNZCYHQIPTHQSBUIXCDDFWHKRFLMORQXDINNBECANMKSYVR");

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
    msg.setTimeStamp(0.594966976596);
    msg.setSource(47069U);
    msg.setSourceEntity(184U);
    msg.setDestination(15838U);
    msg.setDestinationEntity(101U);
    msg.timeout = 31408U;
    msg.flags = 184U;
    msg.lat = 0.738417913404;
    msg.lon = 0.35063931159;
    msg.start_z = 0.16000325152;
    msg.start_z_units = 29U;
    msg.end_z = 0.877078797838;
    msg.end_z_units = 163U;
    msg.radius = 0.473289076284;
    msg.speed = 0.909147071839;
    msg.speed_units = 155U;
    msg.custom.assign("JVFICRWWRQBWPVTQCYMYXUFSRKXHLKLAXNXPUDAYWIFYTDZJPPRFYENKJIOILHFIZOCMACACMDS");

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
    msg.setTimeStamp(0.508140114281);
    msg.setSource(23567U);
    msg.setSourceEntity(179U);
    msg.setDestination(55227U);
    msg.setDestinationEntity(63U);
    msg.timeout = 3936U;
    msg.flags = 99U;
    msg.lat = 0.810005609163;
    msg.lon = 0.193587249779;
    msg.start_z = 0.767628346386;
    msg.start_z_units = 20U;
    msg.end_z = 0.173872803317;
    msg.end_z_units = 152U;
    msg.radius = 0.0818942079271;
    msg.speed = 0.153207280281;
    msg.speed_units = 254U;
    msg.custom.assign("AQCCUQYSNZWWCWCMQGONEPSIPSZXIHBNNRZVDGAMBFHFCCTSZHTOHFKEMBEYKAURKDEOQHDXEOBTCIFAIVPUYYGPVPNRJYUNROWITYHVDRVCBDRCWBXJJIZKROAYFOGHFIEXGUKWUJUDIVVLJKMBFEGPXHQDGXDKSMXJVMHYJWHNMIUVWFTNQLLLLPKSBRQWDGRYRAMZFLTZGLQ");

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
    msg.setTimeStamp(0.163730976894);
    msg.setSource(518U);
    msg.setSourceEntity(192U);
    msg.setDestination(59375U);
    msg.setDestinationEntity(251U);
    msg.timeout = 9790U;
    msg.flags = 123U;
    msg.lat = 0.462960250332;
    msg.lon = 0.506586720684;
    msg.start_z = 0.168956530519;
    msg.start_z_units = 102U;
    msg.end_z = 0.814928273531;
    msg.end_z_units = 124U;
    msg.radius = 0.546812737773;
    msg.speed = 0.981642131825;
    msg.speed_units = 181U;
    msg.custom.assign("PDCAEPJPNORBLGGURRVXDUEPJJKAQMGYUJIEKKSILDVDEECMIRKCUOSZLVXGFWPAICUUXXDXNQOXGJFIESSSFUXOJBVQMSERUDHTYTLSVEQMGBOKWPZUDHJBPBPFNDWYOWZVMGACFRUWWTPOVFID");

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
    msg.setTimeStamp(0.797917694869);
    msg.setSource(64774U);
    msg.setSourceEntity(247U);
    msg.setDestination(32921U);
    msg.setDestinationEntity(123U);
    msg.timeout = 9077U;
    msg.lat = 0.0310993698787;
    msg.lon = 0.496609215334;
    msg.z = 0.726182119142;
    msg.z_units = 88U;
    msg.speed = 0.697469916531;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.172127841054;
    tmp_msg_0.y = 0.112498729805;
    tmp_msg_0.z = 0.965063216341;
    tmp_msg_0.t = 0.00391008560473;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IMCZOLQPALFGANMDNBVONGVGZYMLHHUFTXVLMCEXTWOPENFONESAMRYPADHBPMSLEZIRQOIMHDXEIBDGBCTQXUPQBIVAKYBYOJXRYWNJQYVJTOGJZUYWTRVRLKEKZRQKZUTRFVDXHWNKXTTWGUVQYHNHPBFJQKGMGIQWSFAKFYCSCCTWRADEAIKXXDIAMBHHCJESOSKBZDQSOJVDFPRRLPUYUSIKLHLMPZWICCSJUTUZVPF");

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
    msg.setTimeStamp(0.405174655261);
    msg.setSource(43542U);
    msg.setSourceEntity(225U);
    msg.setDestination(27489U);
    msg.setDestinationEntity(235U);
    msg.timeout = 4731U;
    msg.lat = 0.993129002905;
    msg.lon = 0.990835309124;
    msg.z = 0.870353313956;
    msg.z_units = 113U;
    msg.speed = 0.686387162862;
    msg.speed_units = 75U;
    msg.custom.assign("KTFNKAVYJIOLYJJFBGMKDTSNDCRMVJQFWRGVOJIUVMREZYZWODUDBKJYEBWSUUXDEAVVGNUSPMLIHIFDHXRCIZRAZAFBYOQQDGVANTNQYAGAEWMMITQZWMIQQDZJKGEEOXYARJCQCIUKPBKHNGYSGRTBWBCPFHYVUBHHPHQDOFTQDCIRJZLXPGOCUMXRTEELLZMPCBSXXAWHSXFLCAZLVWLLJCVPKSTNNKEOX");

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
    msg.setTimeStamp(0.491838757054);
    msg.setSource(49217U);
    msg.setSourceEntity(91U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(197U);
    msg.timeout = 65364U;
    msg.lat = 0.477646171428;
    msg.lon = 0.999894787432;
    msg.z = 0.652270488629;
    msg.z_units = 16U;
    msg.speed = 0.818321515279;
    msg.speed_units = 203U;
    msg.custom.assign("KBCWIUGNKRMXKGWFAKQVSQZKJVMATHFIGJLOREYELQPJYPJWLLHXHUYZFXKXNLHJUDBDEAAGYVVAOWHOCIR");

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
    msg.setTimeStamp(0.901619320408);
    msg.setSource(9822U);
    msg.setSourceEntity(237U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(1U);
    msg.x = 0.116925312636;
    msg.y = 0.56351349609;
    msg.z = 0.55086372917;
    msg.t = 0.148035130092;

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
    msg.setTimeStamp(0.262938943519);
    msg.setSource(37376U);
    msg.setSourceEntity(71U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(119U);
    msg.x = 0.698343033285;
    msg.y = 0.425185491156;
    msg.z = 0.00156651798233;
    msg.t = 0.359068336499;

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
    msg.setTimeStamp(0.750425854773);
    msg.setSource(319U);
    msg.setSourceEntity(138U);
    msg.setDestination(16704U);
    msg.setDestinationEntity(53U);
    msg.x = 0.476184210429;
    msg.y = 0.455006006862;
    msg.z = 0.527679305055;
    msg.t = 0.948565886761;

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
    msg.setTimeStamp(0.74638861344);
    msg.setSource(31330U);
    msg.setSourceEntity(236U);
    msg.setDestination(19465U);
    msg.setDestinationEntity(31U);
    msg.timeout = 27795U;
    msg.name.assign("JGMDGFKQEZNHKDZKZWLJDXOLCOLMZRFKHJMBUFGWPFYJKIPQRY");
    msg.custom.assign("YKLZPMCZQCRJGAPFBUQGISJNUQJOWHNFYXRNOTWOVYVKTBKDCVIJSFTXWKEEQRBHYWBSUXDLCKBVYWDXRXXDRVMUOREDPLAMTASJNQZQNMUKBPBMLDTOHCSOODACCYONFPZQEHKXCSMSGZAHNJPKPFWWECLRBZQHHAFJVGVJVWDNDEGMCAQLWYZOUISVAGIUEGBYUGTJBIGTWXPMUTLMIISADA");

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
    msg.setTimeStamp(0.764391163041);
    msg.setSource(61001U);
    msg.setSourceEntity(78U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(175U);
    msg.timeout = 3406U;
    msg.name.assign("DWKKYXBPGCOULWHPOENSHJYEDXVMMCTYFLWXDYRHHGIEVTGVSPOFEAIICCRZZEWDNRWQVPYOZPUQKJUEAGHFXKULNBELSH");
    msg.custom.assign("MHXLSGJIGBOXCVYJRDHMAKLEIJOQQHBQKRTLZPXFRXGEVJNJOQAEDW");

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
    msg.setTimeStamp(0.352518766327);
    msg.setSource(15271U);
    msg.setSourceEntity(107U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(182U);
    msg.timeout = 44529U;
    msg.name.assign("JBQUZUNQIKWJJRUDINDGRHOFLHLEHXJAEVRQHCOKWBYRRTVDASBAZYZOTRBFMCZQKDMVDRXUPHAWVVABCID");
    msg.custom.assign("HISNNGTMHYFJDPKVPHMWFEYMEKUHKCIJUSGDNZBYLSUMAUUOAMZWIORJRTSNGKOQVPHOXCVCPLNEFCNOPMDSAJC");

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
    msg.setTimeStamp(0.932531661763);
    msg.setSource(62988U);
    msg.setSourceEntity(25U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.589639994472;
    msg.lon = 0.0999822380377;
    msg.z = 0.948298393614;
    msg.z_units = 221U;
    msg.speed = 0.289175353162;
    msg.speed_units = 20U;
    msg.start_time = 0.766681819688;
    msg.custom.assign("JKGKYBZGJUQWZIBPBTYORLDXXUGBSMYTZERFUUQM");

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
    msg.setTimeStamp(0.0879651945493);
    msg.setSource(45930U);
    msg.setSourceEntity(84U);
    msg.setDestination(6672U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.978287225137;
    msg.lon = 0.65606095217;
    msg.z = 0.546219577349;
    msg.z_units = 104U;
    msg.speed = 0.706973092102;
    msg.speed_units = 133U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.792053987374;
    tmp_msg_0.y = 0.285156628552;
    tmp_msg_0.z = 0.438029009879;
    tmp_msg_0.t = 0.247968372887;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.682680360895;
    msg.custom.assign("JQIVYYOZOKRETNEHSUETRXAOUJIZSWWARSOBLXMPMKROMBHSMGYNLJIDEULQDLRYKIPESXCMTPNOLYWBVUXTYFIKAPDGFGJZWNXMLGVJOAPUGFWAFXP");

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
    msg.setTimeStamp(0.245136862788);
    msg.setSource(34205U);
    msg.setSourceEntity(89U);
    msg.setDestination(63982U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.834184226392;
    msg.lon = 0.027498754726;
    msg.z = 0.428698762704;
    msg.z_units = 203U;
    msg.speed = 0.505956369607;
    msg.speed_units = 172U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8117U;
    tmp_msg_0.off_x = 0.023710370125;
    tmp_msg_0.off_y = 0.854676609877;
    tmp_msg_0.off_z = 0.454259929649;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.759733766443;
    msg.custom.assign("BAGZVDVHAKE");

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
    msg.setTimeStamp(0.290649359763);
    msg.setSource(58569U);
    msg.setSourceEntity(55U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(185U);
    msg.vid = 49652U;
    msg.off_x = 0.931374750238;
    msg.off_y = 0.459278282961;
    msg.off_z = 0.565606971893;

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
    msg.setTimeStamp(0.337054778445);
    msg.setSource(28674U);
    msg.setSourceEntity(24U);
    msg.setDestination(7449U);
    msg.setDestinationEntity(76U);
    msg.vid = 38879U;
    msg.off_x = 0.990771119165;
    msg.off_y = 0.988252450067;
    msg.off_z = 0.689044405645;

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
    msg.setTimeStamp(0.0275901253133);
    msg.setSource(38445U);
    msg.setSourceEntity(223U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(148U);
    msg.vid = 58143U;
    msg.off_x = 0.0832587505295;
    msg.off_y = 0.915065893021;
    msg.off_z = 0.727266004232;

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
    msg.setTimeStamp(0.39658060891);
    msg.setSource(21654U);
    msg.setSourceEntity(168U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.93591628629);
    msg.setSource(44880U);
    msg.setSourceEntity(113U);
    msg.setDestination(32151U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.47662420117);
    msg.setSource(33764U);
    msg.setSourceEntity(35U);
    msg.setDestination(34480U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.246351125379);
    msg.setSource(12122U);
    msg.setSourceEntity(241U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(201U);
    msg.mid = 58503U;

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
    msg.setTimeStamp(0.465967616583);
    msg.setSource(45022U);
    msg.setSourceEntity(41U);
    msg.setDestination(45826U);
    msg.setDestinationEntity(211U);
    msg.mid = 47626U;

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
    msg.setTimeStamp(0.725086428307);
    msg.setSource(63192U);
    msg.setSourceEntity(72U);
    msg.setDestination(28710U);
    msg.setDestinationEntity(49U);
    msg.mid = 57731U;

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
    msg.setTimeStamp(0.682894666142);
    msg.setSource(32470U);
    msg.setSourceEntity(126U);
    msg.setDestination(41146U);
    msg.setDestinationEntity(233U);
    msg.state = 96U;
    msg.eta = 45078U;
    msg.info.assign("YPJAJRBZMZJQFTKSIINIUBFIDGDEYCSLSLFKSPSNXFGXJKURBJEMTTHLPYTPHGMYOBJLUXEZVUYBCHMAYAAVVTGFNKIUCLARKQMDPCFVWUV");

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
    msg.setTimeStamp(0.739261561744);
    msg.setSource(34601U);
    msg.setSourceEntity(117U);
    msg.setDestination(9660U);
    msg.setDestinationEntity(232U);
    msg.state = 144U;
    msg.eta = 35635U;
    msg.info.assign("URXJQPUVKVMNDQWRNZWEZBNPKOKIUCIWCNUEL");

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
    msg.setTimeStamp(0.555764264134);
    msg.setSource(31969U);
    msg.setSourceEntity(88U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(179U);
    msg.state = 165U;
    msg.eta = 49618U;
    msg.info.assign("WXWTMLYUZVZWWQWVKLMODBVPCLGUGRCDKOCYTHXKQJDZGNGWDCCMYKRTHCKJLSUNPINFMRUBWKJOBSMYOTZSBESIHUVVLHEHSVXJPKAFYPQOIYNEFSWEAZBAHOCELBNUEGRQXNTGQFEMIMGJPF");

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
    msg.setTimeStamp(0.502328149979);
    msg.setSource(28464U);
    msg.setSourceEntity(192U);
    msg.setDestination(35786U);
    msg.setDestinationEntity(102U);
    msg.system = 11768U;
    msg.duration = 32290U;
    msg.speed = 0.0771271325247;
    msg.speed_units = 95U;
    msg.x = 0.386427719872;
    msg.y = 0.537558644948;
    msg.z = 0.096686361241;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.804217058635);
    msg.setSource(40311U);
    msg.setSourceEntity(239U);
    msg.setDestination(15739U);
    msg.setDestinationEntity(214U);
    msg.system = 25296U;
    msg.duration = 62377U;
    msg.speed = 0.602523981396;
    msg.speed_units = 139U;
    msg.x = 0.423574073626;
    msg.y = 0.687664923524;
    msg.z = 0.234774785398;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.29711205307);
    msg.setSource(25658U);
    msg.setSourceEntity(61U);
    msg.setDestination(62673U);
    msg.setDestinationEntity(141U);
    msg.system = 64566U;
    msg.duration = 7725U;
    msg.speed = 0.230121587451;
    msg.speed_units = 39U;
    msg.x = 0.425155428429;
    msg.y = 0.0746390829129;
    msg.z = 0.792883940048;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.710802528492);
    msg.setSource(18039U);
    msg.setSourceEntity(187U);
    msg.setDestination(48750U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.723223587393;
    msg.lon = 0.22030676698;
    msg.speed = 0.101258668056;
    msg.speed_units = 106U;
    msg.duration = 38007U;
    msg.sys_a = 25780U;
    msg.sys_b = 47251U;
    msg.move_threshold = 0.969673640126;

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
    msg.setTimeStamp(0.00743532253063);
    msg.setSource(12905U);
    msg.setSourceEntity(80U);
    msg.setDestination(22926U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.341319818625;
    msg.lon = 0.834150011252;
    msg.speed = 0.997645007856;
    msg.speed_units = 235U;
    msg.duration = 4241U;
    msg.sys_a = 54019U;
    msg.sys_b = 59774U;
    msg.move_threshold = 0.187410720651;

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
    msg.setTimeStamp(0.55226944817);
    msg.setSource(49792U);
    msg.setSourceEntity(225U);
    msg.setDestination(9510U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.622211649804;
    msg.lon = 0.768736807516;
    msg.speed = 0.462439391513;
    msg.speed_units = 130U;
    msg.duration = 29607U;
    msg.sys_a = 14211U;
    msg.sys_b = 6925U;
    msg.move_threshold = 0.799802670181;

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
    msg.setTimeStamp(0.703634386659);
    msg.setSource(12125U);
    msg.setSourceEntity(230U);
    msg.setDestination(34004U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.206186291695;
    msg.lon = 0.350683917379;
    msg.z = 0.16833042499;
    msg.z_units = 88U;
    msg.speed = 0.970401258844;
    msg.speed_units = 58U;
    msg.custom.assign("TNBTSZELQAQIPMFDAMMHYYMKFEKDFNRYVLURKRIGNIQQNKNWDKPAZBSJWNCWTUPMRZEPXZIWEMOALHKUFRZPKJNBEFYZDTFICXNSUTKZQLIMFISHBZPGCUYTLTGSSUWWSRSADEUPPXEHSWJEFWORBXHYTDDQYGLEJFNAGBGPRMQHIDAHONGGQXOVGWO");

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
    msg.setTimeStamp(0.887172410027);
    msg.setSource(20229U);
    msg.setSourceEntity(115U);
    msg.setDestination(64817U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.525314188275;
    msg.lon = 0.413677227086;
    msg.z = 0.874270530826;
    msg.z_units = 103U;
    msg.speed = 0.136243818819;
    msg.speed_units = 56U;
    msg.custom.assign("WGLBNXNYZJOKFENJOFEYIIWAISXLPLIQSPTVDZHKGWSTSLBMSHSUUEVBQPEZ");

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
    msg.setTimeStamp(0.761827605362);
    msg.setSource(6226U);
    msg.setSourceEntity(214U);
    msg.setDestination(28844U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.830737249825;
    msg.lon = 0.601143163657;
    msg.z = 0.430483758821;
    msg.z_units = 16U;
    msg.speed = 0.887813444154;
    msg.speed_units = 39U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.654223593716;
    tmp_msg_0.lon = 0.224808810108;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JBSUGRDELTVBMQEZYGIOZHYJSOOUWQUXPBTWWSHBCBKAPXVKZWIETFNUKAOQARKRSECXQPJGSSGBKCXIPQOMVYCTFMFOQXXITHEWV");

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
    msg.setTimeStamp(0.940670883343);
    msg.setSource(29489U);
    msg.setSourceEntity(68U);
    msg.setDestination(64435U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.685632819121;
    msg.lon = 0.912322750095;

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
    msg.setTimeStamp(0.740121792458);
    msg.setSource(9136U);
    msg.setSourceEntity(138U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.873600729744;
    msg.lon = 0.279175710049;

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
    msg.setTimeStamp(0.897663427761);
    msg.setSource(45496U);
    msg.setSourceEntity(236U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.297430462962;
    msg.lon = 0.988642796501;

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
    msg.setTimeStamp(0.0610097661447);
    msg.setSource(65394U);
    msg.setSourceEntity(176U);
    msg.setDestination(52142U);
    msg.setDestinationEntity(197U);
    msg.timeout = 37809U;
    msg.lat = 0.963308312259;
    msg.lon = 0.20463654602;
    msg.z = 0.543160381703;
    msg.z_units = 102U;
    msg.pitch = 0.215855947782;
    msg.amplitude = 0.837527174512;
    msg.duration = 1878U;
    msg.speed = 0.182015453194;
    msg.speed_units = 7U;
    msg.radius = 0.90567064641;
    msg.direction = 83U;
    msg.custom.assign("IBHZYGRSGHWQQYBSOWMWEIUACSSDSPDTPZWMCBWCJANLRIGSVVEFBKOONEMCVONQFGECTETUFZMKAUHNJTLYXYJALSWLYLKKIITLXYEOIODVXKHHJDVXTEFHBZCBDTLNEPWHRSMURHAVGFY");

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
    msg.setTimeStamp(0.375998138213);
    msg.setSource(11230U);
    msg.setSourceEntity(214U);
    msg.setDestination(46230U);
    msg.setDestinationEntity(163U);
    msg.timeout = 57763U;
    msg.lat = 0.376051210484;
    msg.lon = 0.249177154681;
    msg.z = 0.142903215659;
    msg.z_units = 41U;
    msg.pitch = 0.292545899473;
    msg.amplitude = 0.162748178383;
    msg.duration = 54463U;
    msg.speed = 0.966118875633;
    msg.speed_units = 244U;
    msg.radius = 0.105807991304;
    msg.direction = 45U;
    msg.custom.assign("IKUOKNJKJCWDSITYTXXHRDBLNMRUFHOKMCCOICGAVWOMFVBWWUSTTJEAQDJYZIDTVZWRPQFIGDFALCARSSIFCHRZMTHVWDUBHJZHETZJBVZOOPEOSXOJDPMFNAHXPZKQLHEMPUIPNTSDGBGESTBLLQVRUROIYAWRQCYKXJGVAQMHQULCDYMLRVK");

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
    msg.setTimeStamp(0.709803287507);
    msg.setSource(20390U);
    msg.setSourceEntity(74U);
    msg.setDestination(6371U);
    msg.setDestinationEntity(249U);
    msg.timeout = 41082U;
    msg.lat = 0.647110798168;
    msg.lon = 0.331316604841;
    msg.z = 0.0904363799114;
    msg.z_units = 15U;
    msg.pitch = 0.0873893736373;
    msg.amplitude = 0.502181822678;
    msg.duration = 47906U;
    msg.speed = 0.0775558502791;
    msg.speed_units = 237U;
    msg.radius = 0.789300679414;
    msg.direction = 187U;
    msg.custom.assign("WBUQFPLMZFQRCEUBHTAMDLEJIXNWPCCNMXYJAGORAMTKHSFYCSVEHXRDSANTQBOSQHQGLBUUQQJOIYNMBKGVVFSCSRBCIARPLKXIYKRYMUWIZUETEFZDCDZLEJYPDBGOLPFVMUEWTKWSORXWDXZGDAKHJFVWRDDFHNHAIEG");

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
    msg.setTimeStamp(0.584384495889);
    msg.setSource(11491U);
    msg.setSourceEntity(125U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(21U);
    msg.control_src = 8117U;
    msg.control_ent = 167U;
    msg.timeout = 0.489814972648;
    msg.loiter_radius = 0.975952059705;
    msg.altitude_interval = 0.576025708185;

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
    msg.setTimeStamp(0.664235737325);
    msg.setSource(18468U);
    msg.setSourceEntity(44U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(14U);
    msg.control_src = 31104U;
    msg.control_ent = 45U;
    msg.timeout = 0.627302125937;
    msg.loiter_radius = 0.302493447005;
    msg.altitude_interval = 0.600340514487;

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
    msg.setTimeStamp(0.106099779591);
    msg.setSource(12216U);
    msg.setSourceEntity(33U);
    msg.setDestination(959U);
    msg.setDestinationEntity(85U);
    msg.control_src = 11471U;
    msg.control_ent = 64U;
    msg.timeout = 0.0148779592859;
    msg.loiter_radius = 0.583800635152;
    msg.altitude_interval = 0.765630371439;

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
    msg.setTimeStamp(0.0536448706003);
    msg.setSource(27126U);
    msg.setSourceEntity(236U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(73U);
    msg.flags = 191U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0315022518007;
    tmp_msg_0.speed_units = 69U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.756591833366;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.350932471021;
    msg.lon = 0.785062037242;
    msg.radius = 0.0415287584255;

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
    msg.setTimeStamp(0.0512538871348);
    msg.setSource(7734U);
    msg.setSourceEntity(130U);
    msg.setDestination(49112U);
    msg.setDestinationEntity(250U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.230053940042;
    tmp_msg_0.speed_units = 163U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0802283577501;
    tmp_msg_1.z_units = 177U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.123201976729;
    msg.lon = 0.51629443928;
    msg.radius = 0.437208618719;

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
    msg.setTimeStamp(0.748363315981);
    msg.setSource(47205U);
    msg.setSourceEntity(242U);
    msg.setDestination(30142U);
    msg.setDestinationEntity(186U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.219359976865;
    tmp_msg_0.speed_units = 191U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.118006116478;
    tmp_msg_1.z_units = 133U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.438525005081;
    msg.lon = 0.631567433388;
    msg.radius = 0.0246617648533;

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
    msg.setTimeStamp(0.706790305645);
    msg.setSource(47575U);
    msg.setSourceEntity(96U);
    msg.setDestination(40006U);
    msg.setDestinationEntity(86U);
    msg.control_src = 46962U;
    msg.control_ent = 254U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 221U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0663939662493;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.122292253524;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.779601647236;
    tmp_msg_0.lon = 0.592125407489;
    tmp_msg_0.radius = 0.838073914287;
    msg.reference.set(tmp_msg_0);
    msg.state = 76U;
    msg.proximity = 157U;

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
    msg.setTimeStamp(0.827851273356);
    msg.setSource(12799U);
    msg.setSourceEntity(101U);
    msg.setDestination(28385U);
    msg.setDestinationEntity(80U);
    msg.control_src = 65044U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 176U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.981846521354;
    tmp_tmp_msg_0_0.speed_units = 37U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.309326003035;
    tmp_tmp_msg_0_1.z_units = 106U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.643886107342;
    tmp_msg_0.lon = 0.0708721881117;
    tmp_msg_0.radius = 0.737981208715;
    msg.reference.set(tmp_msg_0);
    msg.state = 127U;
    msg.proximity = 243U;

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
    msg.setTimeStamp(0.624534151444);
    msg.setSource(46637U);
    msg.setSourceEntity(174U);
    msg.setDestination(36262U);
    msg.setDestinationEntity(22U);
    msg.control_src = 65220U;
    msg.control_ent = 117U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 127U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.209329007127;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0933521852776;
    tmp_tmp_msg_0_1.z_units = 207U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0570354166795;
    tmp_msg_0.lon = 0.832249268002;
    tmp_msg_0.radius = 0.828395089872;
    msg.reference.set(tmp_msg_0);
    msg.state = 160U;
    msg.proximity = 171U;

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
    IMC::Formation msg;
    msg.setTimeStamp(0.188621133325);
    msg.setSource(9105U);
    msg.setSourceEntity(177U);
    msg.setDestination(13272U);
    msg.setDestinationEntity(164U);
    msg.formation_name.assign("KAZJPSHVGKCIILELJXURCHHLOMKFSAEXJQGGACPESHBMVXKIYYNK");
    msg.type = 70U;
    msg.op = 31U;
    msg.group_name.assign("UMDYCOOHTVAFHSOUXZWGDEECWQQZEIVEBKHSRORODHAXCSWLHNRBUPSCSFMZTEKGQATKFDWBJAHTNEVZVZXVXSZPGAGDTXRIKVI");
    msg.plan_id.assign("YPHQRYUCKGVAUJSEVFSWOMBGUAWTCHXMKBHHIRXEJRDIYJYDWEKSPPLFFXNQZENJMCBTMAHWTXAJKNWQYYIPETNDRDGLTSITRFCZOIOOEDNTJQZOVESJNBLCLCKHBFHQKLHRZQRWLWUTCORVPSQZ");
    msg.description.assign("ULLUILGIHSQZGWMYYVEYKDLTFZANWXYABLXMLWHKFRTTSZPAZQTAEQDVUYTJHVHTLLNXVZKGQJKSXDNYBUPQZUWKEHRFBPGKQJGPERGYIVTOECDZFEHOSMWPMEANCBITNCJYXPUYROMCXWBRUSEEPTHDDK");
    msg.reference_frame = 247U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 8331U;
    tmp_msg_0.off_x = 0.309604042863;
    tmp_msg_0.off_y = 0.327540797983;
    tmp_msg_0.off_z = 0.23557964671;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.484395255661;
    msg.leader_speed_min = 0.404236969757;
    msg.leader_speed_max = 0.156881490228;
    msg.leader_alt_min = 0.863616750216;
    msg.leader_alt_max = 0.868257654111;
    msg.pos_sim_err_lim = 0.487929553292;
    msg.pos_sim_err_wrn = 0.1806963888;
    msg.pos_sim_err_timeout = 17628U;
    msg.converg_max = 0.373435787815;
    msg.converg_timeout = 61583U;
    msg.comms_timeout = 15539U;
    msg.turb_lim = 0.518647089037;
    msg.custom.assign("FHBHKJLQQQDZWMWIDHESDQFNSZMJAOXCTUZPLGUESCFJXTVYMHYHPLVTBVVMODCXANZOHFOKODYRDGFQAMZKNTSXNBXPBIMJPUKCOHZLKANNFPKVAEESIQFQVNWCGUERSLTIXPEYYDYMJISGTWGSMWFIJPVQRGNKJCIWGRHDISXJUOKUCCBUDDMGXPRLEWBOUQTFHFARTYABOENJPCKEIWRBGVZVUALYJWQXLILACEUTHYKZSWNOYBLMVG");

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
    msg.setTimeStamp(0.835833707896);
    msg.setSource(65301U);
    msg.setSourceEntity(237U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("GTFSYQHLPEYZWALKEJUIDHSRJOPKNYEIOGMHJFVXBQIUDCTAHZJZHKOHPSFVQGHCRULVTMZCYRROYNOHZGVPQLTHNSKNPCXRGDSIZXAWUWWNLEPBCBFQUUCDFHWQSPAVCNNOL");
    msg.type = 232U;
    msg.op = 250U;
    msg.group_name.assign("YGOYEXJRRSSHIGRZTKMQEHVEIFTDKIZIAWBMJEVNAIVWLQURUAEYTYGKBOVNVRPHUDLMZQBAQCPZLHMCDFQTVMNVMBQJJWREANLOHWXBPTIQGAWJOMSAOLASFCOHUIDNPTFTJLORHGKQQKBPCJHCUFNYTEMFPDECNVUKPBHXJKSUOXIDFSGWNZOVOYXDSWQICRJEYGKJPGLEVZFCALTYLWKDYWCZMRUWXI");
    msg.plan_id.assign("GPHCIWOXSFPPQFDHPDYQUUBMPNXRFGJVKAIEAYJUNLWJFOVFHGMTCZ");
    msg.description.assign("TYCZZRLIPCHKDULUYXZDTDLDKFAMTSUEVCTFNWKYW");
    msg.reference_frame = 136U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1154U;
    tmp_msg_0.off_x = 0.594086943;
    tmp_msg_0.off_y = 0.0810782841013;
    tmp_msg_0.off_z = 0.0328694618787;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.221899302344;
    msg.leader_speed_min = 0.256505010954;
    msg.leader_speed_max = 0.656670005586;
    msg.leader_alt_min = 0.836109970912;
    msg.leader_alt_max = 0.498479694021;
    msg.pos_sim_err_lim = 0.117332570357;
    msg.pos_sim_err_wrn = 0.272088651711;
    msg.pos_sim_err_timeout = 26849U;
    msg.converg_max = 0.618188074979;
    msg.converg_timeout = 21720U;
    msg.comms_timeout = 10257U;
    msg.turb_lim = 0.428503994821;
    msg.custom.assign("NFUVCPZSCHLURWHBMQRGZHJFESKEBXBJUNGZRZGEHVCBEXTIOQOFNXFAACXKPELALMEBMDAJHLBRNUDSQPXKVDIAWSRJBCCAXNQIVDHFFOSDVGDDYJJTUZCQWWYQDYMMVLWOYMEWSQXPAWODYPZLMNRTRTFL");

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
    msg.setTimeStamp(0.129407826232);
    msg.setSource(25241U);
    msg.setSourceEntity(82U);
    msg.setDestination(39244U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("GOOYBHHMTRCIGBMLFHDBXGQSIXBLRWZMQRRYUJTHXCFOQUPJKPMFDWTMFKKBCSSSKPXJYTFIENRSGPARCZ");
    msg.type = 203U;
    msg.op = 179U;
    msg.group_name.assign("JJMYXKHTFYMDIUZGJATBXNKIEUGOKTJOSSCSBOISWPXUCWKQVNTXWYKNDIMKQOPHWPHEDJTNWVVFDWBNELYKFTAPTYEOWCFAAGCBPE");
    msg.plan_id.assign("RUJZCQQPKQFXBWEGBKIKPSWLUARFJQZBUYRDBEIYJULESTCGXOGDIVRJSGZXOPYUXVHKYECXTBBMJMXAYQCBRR");
    msg.description.assign("IVWUSHDNECCEAFOEBCMXIJWGDZKETPJMEKVSYCBYIHZZITTDRTRKVERYARUFPQGQVJYBXAUYRBCDSRQCEIPOWVPNTXSVGBOHHAFSLLUJKGRQYJGNBSGMNAQHSOPBKWLKPUZOF");
    msg.reference_frame = 67U;
    msg.leader_bank_lim = 0.251421592503;
    msg.leader_speed_min = 0.920663219489;
    msg.leader_speed_max = 0.874887771885;
    msg.leader_alt_min = 0.744870841526;
    msg.leader_alt_max = 0.861631507032;
    msg.pos_sim_err_lim = 0.880245176043;
    msg.pos_sim_err_wrn = 0.537782056475;
    msg.pos_sim_err_timeout = 19472U;
    msg.converg_max = 0.514989719868;
    msg.converg_timeout = 49456U;
    msg.comms_timeout = 34376U;
    msg.turb_lim = 0.135424691184;
    msg.custom.assign("PBYHAJUSWSZXRPIECHQREWINAVPLIQRVYGJDTLOUMKHCSBDUDMOWYPCUEWJPPKXDMHFDYBPIOCZWENXHBU");

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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.18510322154);
    msg.setSource(59416U);
    msg.setSourceEntity(55U);
    msg.setDestination(15952U);
    msg.setDestinationEntity(245U);
    msg.dist_min = 0.077060969083;
    msg.ax_cmd = 0.736062928928;
    msg.ay_cmd = 0.285743747486;
    msg.az_cmd = 0.751869474326;
    msg.ax_des = 0.00475769117328;
    msg.ay_des = 0.810798932104;
    msg.az_des = 0.767011500244;
    msg.virt_err_x = 0.680531077558;
    msg.virt_err_y = 0.463265484537;
    msg.virt_err_z = 0.114890082462;
    msg.surf_fdbk_x = 0.0773894038187;
    msg.surf_fdbk_y = 0.0831641080958;
    msg.surf_fdbk_z = 0.095419475422;
    msg.surf_unkn_x = 0.607250195808;
    msg.surf_unkn_y = 0.622042195409;
    msg.surf_unkn_z = 0.973520715975;
    msg.ss_x = 0.458392699097;
    msg.ss_y = 0.549066424707;
    msg.ss_z = 0.953074930431;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JMDOMWFHYHNGBCWWLPNNESTJTXAGXYQRSKLOWZXXXIWLZLEQZUZOJLXROMRDPJHQTCMEBANJMVFTHBRZKHMCOGLINZYNRY");
    tmp_msg_0.dist = 0.155723769681;
    tmp_msg_0.err = 0.992810437139;
    tmp_msg_0.ctrl_imp = 0.218746413174;
    tmp_msg_0.rel_dir_x = 0.807762378525;
    tmp_msg_0.rel_dir_y = 0.430982503733;
    tmp_msg_0.rel_dir_z = 0.706762971245;
    tmp_msg_0.err_x = 0.62457577366;
    tmp_msg_0.err_y = 0.950739817457;
    tmp_msg_0.err_z = 0.660306542696;
    tmp_msg_0.rf_err_x = 0.118062956589;
    tmp_msg_0.rf_err_y = 0.993501179914;
    tmp_msg_0.rf_err_z = 0.800804789462;
    tmp_msg_0.rf_err_vx = 0.638934599756;
    tmp_msg_0.rf_err_vy = 0.661272215348;
    tmp_msg_0.rf_err_vz = 0.878440699229;
    tmp_msg_0.ss_x = 0.409584053158;
    tmp_msg_0.ss_y = 0.68740363938;
    tmp_msg_0.ss_z = 0.361791748374;
    tmp_msg_0.virt_err_x = 0.564340644182;
    tmp_msg_0.virt_err_y = 0.940821955357;
    tmp_msg_0.virt_err_z = 0.703023438975;
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
    msg.setTimeStamp(0.759214731475);
    msg.setSource(24767U);
    msg.setSourceEntity(160U);
    msg.setDestination(42403U);
    msg.setDestinationEntity(169U);
    msg.dist_min = 0.783335951544;
    msg.ax_cmd = 0.194812750959;
    msg.ay_cmd = 0.0177633684113;
    msg.az_cmd = 0.601617568454;
    msg.ax_des = 0.625460125767;
    msg.ay_des = 0.637139400768;
    msg.az_des = 0.113811847471;
    msg.virt_err_x = 0.856964561811;
    msg.virt_err_y = 0.847120447816;
    msg.virt_err_z = 0.0411838286445;
    msg.surf_fdbk_x = 0.871862055052;
    msg.surf_fdbk_y = 0.178879997062;
    msg.surf_fdbk_z = 0.621418249268;
    msg.surf_unkn_x = 0.775210016223;
    msg.surf_unkn_y = 0.414498043416;
    msg.surf_unkn_z = 0.243367953931;
    msg.ss_x = 0.696940584155;
    msg.ss_y = 0.183249906713;
    msg.ss_z = 0.650553453312;

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
    msg.setTimeStamp(0.0835056263722);
    msg.setSource(11791U);
    msg.setSourceEntity(186U);
    msg.setDestination(24677U);
    msg.setDestinationEntity(139U);
    msg.dist_min = 0.0114995069314;
    msg.ax_cmd = 0.471515528267;
    msg.ay_cmd = 0.809678328819;
    msg.az_cmd = 0.956018678636;
    msg.ax_des = 0.799224358221;
    msg.ay_des = 0.512477240659;
    msg.az_des = 0.844612900119;
    msg.virt_err_x = 0.678716877898;
    msg.virt_err_y = 0.290971202176;
    msg.virt_err_z = 0.882896403271;
    msg.surf_fdbk_x = 0.0756997496665;
    msg.surf_fdbk_y = 0.250859441156;
    msg.surf_fdbk_z = 0.380385339943;
    msg.surf_unkn_x = 0.421404148563;
    msg.surf_unkn_y = 0.684316688549;
    msg.surf_unkn_z = 0.510187916322;
    msg.ss_x = 0.339890134879;
    msg.ss_y = 0.946160925879;
    msg.ss_z = 0.9069648921;

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
    msg.setTimeStamp(0.445020113397);
    msg.setSource(17566U);
    msg.setSourceEntity(131U);
    msg.setDestination(1119U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("FGPPVXQLEZKWDEZJCVANTHSXVXDJDQCRRUYFNXKNXDSYTTUEFKXNBLWPEWMJLWOIUNGNKZGLRCEXVGOFIMUNUOTIQMRKMKHMVOQCACSSAIVWGITNQHZBPQCLTWJFAFCARJWAGMXPZGHPSFXDRTWSPBJJUYOIBLTSETCHBOMIFHONIHYEOKZABOM");
    msg.dist = 0.615713619671;
    msg.err = 0.0636635732221;
    msg.ctrl_imp = 0.507831940884;
    msg.rel_dir_x = 0.67511649866;
    msg.rel_dir_y = 0.536756403054;
    msg.rel_dir_z = 0.121259380816;
    msg.err_x = 0.252361838379;
    msg.err_y = 0.0387485610973;
    msg.err_z = 0.242343995125;
    msg.rf_err_x = 0.983676677522;
    msg.rf_err_y = 0.231067943547;
    msg.rf_err_z = 0.520080453547;
    msg.rf_err_vx = 0.131970671192;
    msg.rf_err_vy = 0.733960766034;
    msg.rf_err_vz = 0.950450937866;
    msg.ss_x = 0.684084852566;
    msg.ss_y = 0.165788020931;
    msg.ss_z = 0.112270356684;
    msg.virt_err_x = 0.442746290592;
    msg.virt_err_y = 0.379555338356;
    msg.virt_err_z = 0.0519487960548;

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
    msg.setTimeStamp(0.609448277103);
    msg.setSource(3155U);
    msg.setSourceEntity(203U);
    msg.setDestination(17075U);
    msg.setDestinationEntity(29U);
    msg.s_id.assign("TBYJZTYPCXMZIPMRYQJUYNOJVALJWMDWBHODEQQDZSBKWUBWFIFUMBRFRHTLARBOCTGJNILJOGUWERXYSURKXNQMPE");
    msg.dist = 0.262395620181;
    msg.err = 0.389218406424;
    msg.ctrl_imp = 0.235188239211;
    msg.rel_dir_x = 0.0923543470543;
    msg.rel_dir_y = 0.728505284946;
    msg.rel_dir_z = 0.143014698404;
    msg.err_x = 0.822669972378;
    msg.err_y = 0.984575184491;
    msg.err_z = 0.87178645839;
    msg.rf_err_x = 0.274788068316;
    msg.rf_err_y = 0.162435889879;
    msg.rf_err_z = 0.99975278168;
    msg.rf_err_vx = 0.545280898215;
    msg.rf_err_vy = 0.228676366263;
    msg.rf_err_vz = 0.293929833551;
    msg.ss_x = 0.694155210589;
    msg.ss_y = 0.220861548409;
    msg.ss_z = 0.439545948326;
    msg.virt_err_x = 0.177485451849;
    msg.virt_err_y = 0.0643952764006;
    msg.virt_err_z = 0.738395688502;

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
    msg.setTimeStamp(0.688956626073);
    msg.setSource(19039U);
    msg.setSourceEntity(28U);
    msg.setDestination(62982U);
    msg.setDestinationEntity(186U);
    msg.s_id.assign("XOAZSQSXJBIIYACBACJWXBHDKECHNXOJOEKDVMFYOUWGDFSMENCLDPYMBQGFANPMZBPELKKNHSVDQPEUZBVDRBTSLQEOLITECYZDGBGFHHMBQGZFATLRTCFSSNNWUVOZLYPRSQKUHEVJMOTYRICBXUHYTRZIDLDWVDMNRKGVJWXYGPRLIKCHFPJXRQAUXPQTOUWUYAZPGNIJVERLSJJFAGTLMXEUOFAKWKWVIWWZFT");
    msg.dist = 0.769553066608;
    msg.err = 0.0863097333175;
    msg.ctrl_imp = 0.292216674121;
    msg.rel_dir_x = 0.304529923222;
    msg.rel_dir_y = 0.771787700329;
    msg.rel_dir_z = 0.182990053698;
    msg.err_x = 0.907766850933;
    msg.err_y = 0.00815964338346;
    msg.err_z = 0.403327526508;
    msg.rf_err_x = 0.63772054012;
    msg.rf_err_y = 0.524153400496;
    msg.rf_err_z = 0.869968627278;
    msg.rf_err_vx = 0.973775514736;
    msg.rf_err_vy = 0.557148733725;
    msg.rf_err_vz = 0.446618592551;
    msg.ss_x = 0.41290369626;
    msg.ss_y = 0.334510558702;
    msg.ss_z = 0.838753818882;
    msg.virt_err_x = 0.471328580116;
    msg.virt_err_y = 0.757604865869;
    msg.virt_err_z = 0.57803290287;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.262130074851);
    msg.setSource(9826U);
    msg.setSourceEntity(98U);
    msg.setDestination(47108U);
    msg.setDestinationEntity(254U);
    msg.op_mode = 61U;
    msg.error_count = 114U;
    msg.error_ents.assign("VOSCFULDBASZRJHNTFILZPBOFGZOBQDDIQOQEKCHQXJGEARYGDMYJSLUSHZYPXIYALINRCQYKDAONACLDXOMSYVLXZPEOMVNYKVDRANSMJZCRHGZSPAWLNNPZKPTTCXLZQWB");
    msg.maneuver_type = 65445U;
    msg.maneuver_stime = 0.224847010755;
    msg.maneuver_eta = 34242U;
    msg.control_loops = 2297961757U;
    msg.flags = 9U;
    msg.last_error.assign("XLMJVHTCNWZDIKTKEXUKTLMZEKEOGVIRIZQIPJXSQWAUQPSZIKMSRYTVBVLWHADDDCVVJRSKPDCXEODBRRWJAYMESJBMTPAVXFHMHUWIQABMOHXOAABLBKPOQYQXIIJYPEMPLBXSKLGFXTSEEQVZYUZHTNRNDFHQBRUYGYCHCZNCTMWWOHZQTGGXDEGVNTSINULCNFLZGNYYNGDFOOUECWKRFCKZGBJARUAJBDPFLWHFSAQPNO");
    msg.last_error_time = 0.781401422915;

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
    msg.setTimeStamp(0.268084666832);
    msg.setSource(54119U);
    msg.setSourceEntity(233U);
    msg.setDestination(17689U);
    msg.setDestinationEntity(72U);
    msg.op_mode = 110U;
    msg.error_count = 2U;
    msg.error_ents.assign("LKLRYQFFGVTZEPRGAVBCRZDNFNJZKQSJCBXPCAKOHEWQSCDPZKJELLBTONDYGIPHRVHXLXFKIYDTWIIQJRMUYICTJOXSBQIEHHDPWDXINBMCJSOEPLMCJCWQWGDONIDTVQDWNSOIASFXJMYVUDMQYKBUZAEOHLGZ");
    msg.maneuver_type = 21115U;
    msg.maneuver_stime = 0.839389105224;
    msg.maneuver_eta = 41119U;
    msg.control_loops = 943864265U;
    msg.flags = 191U;
    msg.last_error.assign("DUBTXGXCWSYZUPKQTIJCFYSUNWKBPCQGBOZAHSDRWETVJFGMMQUKLWEALXQFGMRJBBHHGKAITILTADLJEUWTBI");
    msg.last_error_time = 0.197688353426;

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
    msg.setTimeStamp(0.875907486703);
    msg.setSource(15297U);
    msg.setSourceEntity(233U);
    msg.setDestination(54120U);
    msg.setDestinationEntity(192U);
    msg.op_mode = 86U;
    msg.error_count = 200U;
    msg.error_ents.assign("YACYUNJSKGTPKCFRSPWHECEYYUXIVQELQZILQYAKTYDCSEVIRJDOUIBDNULTTVREPH");
    msg.maneuver_type = 27022U;
    msg.maneuver_stime = 0.260579079263;
    msg.maneuver_eta = 53936U;
    msg.control_loops = 630658203U;
    msg.flags = 99U;
    msg.last_error.assign("FLSTRWXZFUHXYSHWJXBJWPLDLKPEMDDDDLOAOYYFFXFPRROLJVBQCSRBMIGZWJVMECDYMMILJGUTQFCBXWUHLUKZNWVPZJNQAFBSSRZVVCCGHQMPMERPIEVNIQGJKYRVO");
    msg.last_error_time = 0.871573483381;

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
    msg.setTimeStamp(0.0689338146323);
    msg.setSource(19706U);
    msg.setSourceEntity(11U);
    msg.setDestination(5621U);
    msg.setDestinationEntity(139U);
    msg.type = 80U;
    msg.request_id = 167U;
    msg.command = 237U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("HVXGAONMMBSRQWNRJIUPMMSFYBHDJZTFN");
    tmp_msg_0.type = 25U;
    tmp_msg_0.op = 108U;
    tmp_msg_0.group_name.assign("ZBKHDPUNSIOYFNVDKKKWQYUSSNOYAJAESQVMOTIRPRPHUFEMKMWFKBFNX");
    tmp_msg_0.plan_id.assign("MDITSPCGWYEIFDNKJLVKQEUTLYXYFHTDUHTOPNSGOMPDXIBFKHYEPCBSPFAXQZFAWEPSRUYBXMMDZXZTEJTZDHJJLEAUVLUSQOO");
    tmp_msg_0.description.assign("YCXQSLCLTKAOMIHOWRFJQQWAHNHOPATABWZSGHNOLILXHTJMDAAFSUEAGGJZGPRIVIFBTGZWEVRMYCLVDQYKIOAWUESSSRVQLZXN");
    tmp_msg_0.reference_frame = 220U;
    tmp_msg_0.leader_bank_lim = 0.324475294788;
    tmp_msg_0.leader_speed_min = 0.776269366689;
    tmp_msg_0.leader_speed_max = 0.25453175847;
    tmp_msg_0.leader_alt_min = 0.764997758306;
    tmp_msg_0.leader_alt_max = 0.222931634104;
    tmp_msg_0.pos_sim_err_lim = 0.311336619684;
    tmp_msg_0.pos_sim_err_wrn = 0.559457857828;
    tmp_msg_0.pos_sim_err_timeout = 49787U;
    tmp_msg_0.converg_max = 0.121060280303;
    tmp_msg_0.converg_timeout = 62927U;
    tmp_msg_0.comms_timeout = 39438U;
    tmp_msg_0.turb_lim = 0.469260621809;
    tmp_msg_0.custom.assign("PYXXRIACTVBQLIFAKTYBQWHRNQVDHLUKYYHJCFEROGDIRYJNMLPJEZJMBKUWMTIOTZPHDCPWQTMXVBZTOJBUNCCOSLXRWFVBXVRCOKEHSVVGOCINLQKANPWKUAGNWMSQMXPQJEVXZDFDYJIBQSGSFQFSFQAIGLDWSEGXDYGXREILKNNHWGTBEGPUZPGTJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2364U;
    msg.info.assign("QSZBCOIVQMDEHNZPFGDDFZFMJNFCYCRHRRSQHQRBUKETMFXTSAEKLJQQAWWAQZAUDADYRFHNIDJETNVUGZIYZIUNHAVOUYJJWVDIPEZGLWQTKTWGIDRXHCPSOFYFCJUVTLWPWLNTPIBWBDKVXPSBHLDNCNBJOESFBEMKMVMVUMJYXNKLCZNAGVGFPHOOPYQBYO");

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
    msg.setTimeStamp(0.360866605689);
    msg.setSource(47602U);
    msg.setSourceEntity(171U);
    msg.setDestination(13993U);
    msg.setDestinationEntity(72U);
    msg.type = 67U;
    msg.request_id = 46672U;
    msg.command = 86U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.152983598114;
    tmp_msg_0.lon = 0.669878785521;
    tmp_msg_0.speed = 0.297715468759;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.duration = 36176U;
    tmp_msg_0.sys_a = 63086U;
    tmp_msg_0.sys_b = 64375U;
    tmp_msg_0.move_threshold = 0.206859569374;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10986U;
    msg.info.assign("ZAUYLKNVUBHVDYEEJJJWYFLXTKDVAHTGNFFEDROGMNGONIFXPBSVWCNTBLFKVRHFWMQSPDBTRSTZIUUCSVAAEWVBUTJMNAMGFIXVLPVPCIOXHSAOCONQGZTILHCCVZGBLQZGWKKESZODXTMUKEAIRPGBEYERQCDMZIDBMAHLZTASSNRQYRYHOBQXGIQHXAQMKWEDPPSHURKNXMWOJRJXNPFOCQUQWUELCYUYJY");

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
    msg.setTimeStamp(0.529270332455);
    msg.setSource(54200U);
    msg.setSourceEntity(100U);
    msg.setDestination(513U);
    msg.setDestinationEntity(81U);
    msg.type = 45U;
    msg.request_id = 50676U;
    msg.command = 160U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 52484U;
    tmp_msg_0.lat = 0.513145874199;
    tmp_msg_0.lon = 0.352780960203;
    tmp_msg_0.z = 0.798599819772;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.739525627195;
    tmp_msg_0.speed_units = 188U;
    tmp_msg_0.custom.assign("XKUJWMGLEEQRPXAXCQKEUNOXUEFMUOCSCVFQRFVSHBERGHKIXJCGPOFPGXYABQDIYNELCCNULDLSJVIDBZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30684U;
    msg.info.assign("PHMORKAONDAIVRFWLDNSQZETOFJQOJIFTASFIMEXHUYEHDKRIOUIJVSJUCDLKBMNYRIFLSGVJTGNPPKMXKIHGKBLACPZXUXRSXECJYNMUMUCQLMBIGHYJNPHWBPZQJFDJZFRXKKPVLECMMW");

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
    msg.setTimeStamp(0.794818787887);
    msg.setSource(49589U);
    msg.setSourceEntity(63U);
    msg.setDestination(21990U);
    msg.setDestinationEntity(84U);
    msg.command = 168U;
    msg.entities.assign("RMIQWUHSKTQVLSXFPWEVPSVNMXFTXKVHOHWYFNHKHPFOEJRCCZHFDPNVDYMPRDZAUCENFDYQBJATWINHGRMZOWMTABXTIZUBXCHBDLYOIESGSGVRKWQTXWBFOLQUZENGTBQJBXEOAIJNHAPKUESCPZMCOIFZLTQVEJNMSQMNAKGUCSRVCBJLYKREVUAQGLMVGWESGAJDPJKJBLIPYXIZAGRIFMCDUQTKTDNDZAROUYDBWXGJOZKIXFHUY");

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
    msg.setTimeStamp(0.384710997218);
    msg.setSource(14700U);
    msg.setSourceEntity(222U);
    msg.setDestination(85U);
    msg.setDestinationEntity(206U);
    msg.command = 25U;
    msg.entities.assign("XBXWWJHDOEHWLQZRJKNFRSELWKYVFUCKIIAMXIRKBZSXYDVDSSUQGABMJJAGBZWSYFTDQBXKPTATEPUPLTVRKSTWFHZXGNMCRQOWSKMXDYAZQBLVINGPIGSFCYMONOQBGERIMSPLKFOOCBUTIPPRZDQRNNOGSHAPYJAIWNMMVRLEETCXTYAHYQZK");

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
    msg.setTimeStamp(0.313660143926);
    msg.setSource(30142U);
    msg.setSourceEntity(145U);
    msg.setDestination(14219U);
    msg.setDestinationEntity(253U);
    msg.command = 89U;
    msg.entities.assign("CSQAZBXVNYOJSVGCHDENSNENOPOLVBWIYAZGLLPUAVUDDGJCVGFVCNIZISKOLIAO");

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
    msg.setTimeStamp(0.45192793887);
    msg.setSource(54455U);
    msg.setSourceEntity(157U);
    msg.setDestination(59745U);
    msg.setDestinationEntity(104U);
    msg.mcount = 58U;
    msg.mnames.assign("WVWRDYBCSOLREYZKGSEKGGOHOWLPBRODQQAUJNEPWLLCUMHZHFPISBNWYSDQTSHOINPHQDHTNVBJMJPUGXMEYOJZXXHWZAFIXVTXCJLHOICPFTANRTTVGWGBQEGRMMCXYUHUXOVLSKIKCUUBLMMILSKTNQIPDBYCZRUQGWVYSHGNAIFJKIXEZKNAYERWMSNRJBZEJXKBQUBTVACFDZTZOAVDFAYJMXFKLNWEYGAORS");
    msg.ecount = 214U;
    msg.enames.assign("FSDARKSDYTBEDLAYYIDGJBBVKCDGIWMOIHSWCZADGVBOFJBYSOWRBXDWVCROTXIBRT");
    msg.ccount = 201U;
    msg.cnames.assign("LPASSVSXYVRIWAXUYLJFIXFALQDQYLIXEESMHWKQGLITTCVNRERCPQVHBKWMWGJZKTBHWYNXMVKPQGHROGJYJRMPFOLMOUOGYKDISVTZIRJTOPSWBJZHBNEUDRFFHMGEUGNKOOAHPWNCYMNXNAMVZEFGCTDVRMWUHYCDFAVIZSXNERTDHLZZBEQSYCCLDUXBFQDOXMYRVIAEKZLUC");
    msg.last_error.assign("GIMXDSJTOPZICMCMDXLHAKUTUVKSBKXGLEFBWMXGRZACPOPFGSWEBLPMGDDJYJDHMCDNILGWSVRMNNNQMFGKNQLAVCIAUBTTZEZTWIKYJCQRHNFBVWLOCWVDQOURMBJQEALFDIKVMJPAFZZKNEWBCRJTWUXBPGQYQWRHUYKISJXLF");
    msg.last_error_time = 0.685184883678;

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
    msg.setTimeStamp(0.332463856136);
    msg.setSource(41417U);
    msg.setSourceEntity(114U);
    msg.setDestination(11530U);
    msg.setDestinationEntity(114U);
    msg.mcount = 168U;
    msg.mnames.assign("ZMMBPAHKLXKWUDQJ");
    msg.ecount = 133U;
    msg.enames.assign("OPCRAYGHWXLRRHJBNWBTHIGLJBRRDZHUBVQVAARDYPKHZUVLJDXDODNRIKKEBTBMJAZPQXDVDMGFNPMLYQWNSWMNKTILUUXJFQLEFOVGFXWIHAZYECQLHXPURQ");
    msg.ccount = 142U;
    msg.cnames.assign("WTRIYAAYWUPOFDQCEXRVPMZIERZIEBQNASEBOYTGZVWCJLZOYKFOSKWHNFHKRTQHZJTQXMEXQMQD");
    msg.last_error.assign("YBBPXKXHNIJIACRLEOTJWKWZXNCPNYABXOMKSMRZFYFCRGVLJGMPGKFXOMZWCTUNEQJDLIKSRDXTOIGYSHKHHJUSZHQYBCWWEL");
    msg.last_error_time = 0.722563602249;

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
    msg.setTimeStamp(0.328758180916);
    msg.setSource(34276U);
    msg.setSourceEntity(197U);
    msg.setDestination(13283U);
    msg.setDestinationEntity(162U);
    msg.mcount = 115U;
    msg.mnames.assign("DQCFYYXUJLPKICESKNHVIPLMHMHEECUWOKUPXPJPWXQPONLKRCMAGJRDKPRMA");
    msg.ecount = 250U;
    msg.enames.assign("ZAFKFJFRRZKGIDNNWZZCRPOXKIEDNPTCSMTXMBKROXMPEOGRFUNLHSTUHKXXKWLYFUTZLJOSZEIEVUECCHBIVOGFVHSMIUIHAWAZIAPNIBRSFPQKWCXKYHDUUSXCTEXVZOKJVADVMPLWCNMGBULDQVDYWJ");
    msg.ccount = 126U;
    msg.cnames.assign("PPGGFBGSBVGZTTELHAIMWZBXOEJYOPNKPOECYHZAKQQSGNPBXLFDKXUZEYULWXMRTFSHJORTAYZLUAYYVONXAYPWEDVSMNOHNMXIZOTSGAUIQMWMXPCUJBFIVGTRNJKDCENUDVIXBTQOTCHIZXRAKMJQOJOSYCIWNCDLRYTELKUCQLRLWESRG");
    msg.last_error.assign("XROULCICIWYXABOLBUBUNVAEWPFNESPQFCPNVQJURCGCKJQYWQNGEGNOLMTFRTTMVFTWJIDZWGRDHHRNZBMREBNDGQPPWHGAFMNJIRQXSDUCVTFDUZLAMCBJIPHZKVIMPPXDZALVQSEYOSVQCHWFZXSLQZKBKBCQEAKJUOUIWAPKZLDYXMOSXTEKJHDRKKHITPFBZGENOYRLAS");
    msg.last_error_time = 0.447453855336;

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
    msg.setTimeStamp(0.00986423449568);
    msg.setSource(24054U);
    msg.setSourceEntity(78U);
    msg.setDestination(22761U);
    msg.setDestinationEntity(114U);
    msg.mask = 125U;
    msg.max_depth = 0.0612389288786;
    msg.min_altitude = 0.0899634006234;
    msg.max_altitude = 0.639816366331;
    msg.min_speed = 0.402442889409;
    msg.max_speed = 0.447447423298;
    msg.max_vrate = 0.0371328890803;
    msg.lat = 0.439154275337;
    msg.lon = 0.888074035891;
    msg.orientation = 0.415461614429;
    msg.width = 0.952234206205;
    msg.length = 0.413813762843;

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
    msg.setTimeStamp(0.466283204555);
    msg.setSource(9848U);
    msg.setSourceEntity(66U);
    msg.setDestination(260U);
    msg.setDestinationEntity(188U);
    msg.mask = 88U;
    msg.max_depth = 0.922639213187;
    msg.min_altitude = 0.629387232097;
    msg.max_altitude = 0.289888015719;
    msg.min_speed = 0.874389664592;
    msg.max_speed = 0.42355696241;
    msg.max_vrate = 0.695373933663;
    msg.lat = 0.104235717959;
    msg.lon = 0.206674089692;
    msg.orientation = 0.0524400016157;
    msg.width = 0.351015422086;
    msg.length = 0.395393599664;

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
    msg.setTimeStamp(0.748006374837);
    msg.setSource(38059U);
    msg.setSourceEntity(94U);
    msg.setDestination(64328U);
    msg.setDestinationEntity(202U);
    msg.mask = 239U;
    msg.max_depth = 0.951271454958;
    msg.min_altitude = 0.243213285835;
    msg.max_altitude = 0.165321275392;
    msg.min_speed = 0.182635091362;
    msg.max_speed = 0.247598219151;
    msg.max_vrate = 0.783954563548;
    msg.lat = 0.843130671562;
    msg.lon = 0.481281939818;
    msg.orientation = 0.807419621772;
    msg.width = 0.779896120302;
    msg.length = 0.991360537286;

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
    msg.setTimeStamp(0.653883895223);
    msg.setSource(57971U);
    msg.setSourceEntity(241U);
    msg.setDestination(4876U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.662026534235);
    msg.setSource(229U);
    msg.setSourceEntity(160U);
    msg.setDestination(44349U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.656844857692);
    msg.setSource(21278U);
    msg.setSourceEntity(136U);
    msg.setDestination(12442U);
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
    msg.setTimeStamp(0.72024958683);
    msg.setSource(283U);
    msg.setSourceEntity(51U);
    msg.setDestination(1869U);
    msg.setDestinationEntity(203U);
    msg.duration = 40162U;

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
    msg.setTimeStamp(0.714557034892);
    msg.setSource(47140U);
    msg.setSourceEntity(214U);
    msg.setDestination(9428U);
    msg.setDestinationEntity(157U);
    msg.duration = 65396U;

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
    msg.setTimeStamp(0.556577286981);
    msg.setSource(26425U);
    msg.setSourceEntity(129U);
    msg.setDestination(60212U);
    msg.setDestinationEntity(226U);
    msg.duration = 37992U;

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
    msg.setTimeStamp(0.37838842519);
    msg.setSource(18136U);
    msg.setSourceEntity(30U);
    msg.setDestination(62454U);
    msg.setDestinationEntity(58U);
    msg.enable = 113U;
    msg.mask = 2927523787U;
    msg.scope_ref = 2933126167U;

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
    msg.setTimeStamp(0.958120604386);
    msg.setSource(46383U);
    msg.setSourceEntity(32U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(220U);
    msg.enable = 207U;
    msg.mask = 3973095848U;
    msg.scope_ref = 1768972771U;

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
    msg.setTimeStamp(0.90063252067);
    msg.setSource(8644U);
    msg.setSourceEntity(100U);
    msg.setDestination(39149U);
    msg.setDestinationEntity(211U);
    msg.enable = 72U;
    msg.mask = 1362273621U;
    msg.scope_ref = 3967529371U;

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
    msg.setTimeStamp(0.845630003862);
    msg.setSource(45853U);
    msg.setSourceEntity(23U);
    msg.setDestination(46595U);
    msg.setDestinationEntity(217U);
    msg.medium = 15U;

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
    msg.setTimeStamp(0.38530275039);
    msg.setSource(54121U);
    msg.setSourceEntity(210U);
    msg.setDestination(34876U);
    msg.setDestinationEntity(35U);
    msg.medium = 18U;

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
    msg.setTimeStamp(0.359466176297);
    msg.setSource(3609U);
    msg.setSourceEntity(214U);
    msg.setDestination(3144U);
    msg.setDestinationEntity(99U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.188010066546);
    msg.setSource(14078U);
    msg.setSourceEntity(188U);
    msg.setDestination(29644U);
    msg.setDestinationEntity(199U);
    msg.value = 0.522886640139;
    msg.type = 31U;

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
    msg.setTimeStamp(0.0886308460364);
    msg.setSource(42400U);
    msg.setSourceEntity(191U);
    msg.setDestination(5307U);
    msg.setDestinationEntity(2U);
    msg.value = 0.375322550541;
    msg.type = 89U;

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
    msg.setTimeStamp(0.226177394779);
    msg.setSource(38536U);
    msg.setSourceEntity(90U);
    msg.setDestination(37019U);
    msg.setDestinationEntity(115U);
    msg.value = 0.347931017054;
    msg.type = 96U;

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
    IMC::FormationState msg;
    msg.setTimeStamp(0.489703549378);
    msg.setSource(57796U);
    msg.setSourceEntity(42U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(165U);
    msg.possimerr = 0.981711419614;
    msg.converg = 0.130101154736;
    msg.turbulence = 0.328652673542;
    msg.possimmon = 53U;
    msg.commmon = 9U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.0205571969177);
    msg.setSource(3284U);
    msg.setSourceEntity(179U);
    msg.setDestination(39609U);
    msg.setDestinationEntity(190U);
    msg.possimerr = 0.273458679368;
    msg.converg = 0.631446116759;
    msg.turbulence = 0.566301604473;
    msg.possimmon = 128U;
    msg.commmon = 144U;
    msg.convergmon = 36U;

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
    msg.setTimeStamp(0.594039764729);
    msg.setSource(18231U);
    msg.setSourceEntity(177U);
    msg.setDestination(34827U);
    msg.setDestinationEntity(159U);
    msg.possimerr = 0.537801808818;
    msg.converg = 0.939973119825;
    msg.turbulence = 0.584938631042;
    msg.possimmon = 162U;
    msg.commmon = 87U;
    msg.convergmon = 109U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.561922059795);
    msg.setSource(27813U);
    msg.setSourceEntity(8U);
    msg.setDestination(38956U);
    msg.setDestinationEntity(163U);
    msg.autonomy = 17U;
    msg.mode.assign("OHMLQNGVVORAUPDUJQNWUYYGVIJJMRIZDNWYFMYUHXIIBCMHKFCVMRXOJXNDOWVBDQCTVEALC");

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
    msg.setTimeStamp(0.629424050645);
    msg.setSource(20371U);
    msg.setSourceEntity(219U);
    msg.setDestination(58393U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 111U;
    msg.mode.assign("BXIWLDHSUFYBGHYRYXLUDAODQVXMACRCOYBXOCEHODTJFSLGQYVMNKVPAZZFILQWRNAQAAPQJGCWQUKZESRYDTWTPSBKSZCEDEZCMHMFZEQTGCOWQGHWHJERHHVYXZDUNFEVMIVIHJVJKVLXYYNOFNKWSAOJNIUUFQLMPNOTCXWFKBTXFJBWBSGWGNXDSLQKIVEE");

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
    msg.setTimeStamp(0.503888161456);
    msg.setSource(59014U);
    msg.setSourceEntity(124U);
    msg.setDestination(57904U);
    msg.setDestinationEntity(182U);
    msg.autonomy = 1U;
    msg.mode.assign("GBGQDYWESPSOIYGJRRYUTBEVDEOYOZRCKDXCSENBCPXJQEEANMPFAVHJQPSRSFMWXPNUKLVZCGPLAYWSRCYOOMMZAUAMWVBEATXDHLFBCJIHIXFRAHMTNJMWAKGKOBDIXIWLFZTNQVDKZBQCHPLJBEKZGXNZVIPTUQADXVODULNPUMSJBFTXEWOVZNUGPHRFXROJLJUSFTQHGRFNTIYKAQCDNWWTKL");

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
    msg.setTimeStamp(0.0988489804136);
    msg.setSource(34738U);
    msg.setSourceEntity(94U);
    msg.setDestination(13387U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.916557704904);
    msg.setSource(26969U);
    msg.setSourceEntity(154U);
    msg.setDestination(65445U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.884895346664);
    msg.setSource(52809U);
    msg.setSourceEntity(253U);
    msg.setDestination(43937U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.890838595003);
    msg.setSource(9689U);
    msg.setSourceEntity(52U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("AEMCWCNHSGXGSJD");
    msg.description.assign("MNYIAPEQQCQEZPFMFGFIKYJFWIRDGWOKEOCYWCLEOHDLUOCJKHXAUTVQSLDZNPRRLRGKWZJSMAHBSAXPKFMHDJXMWXJXGZMNBPLXRZLALQKJHB");
    msg.vnamespace.assign("ENDSHBGXZMYDAZBPAOBQMCQKJPYVPUOMGGUZIIOGJCXFTMEQMHZPFVTLFRDDENIIUOXPRNJTLGJTCMDERGAKZCJWHBPILSCTZOFVSYMXTDXZOACKYLBWTLJCWWVRDKWUKLZQ");
    msg.start_man_id.assign("NPBMQFLTDSUOMEAPRLDRFBTNQITWDAZKOBKRCCJFVIPPZYCGARKDDCNGGLTXYYUZHKCZJDIGHVOIEHCLEEHWQTTVEGAVPKIUDFZQYRHUZFQQKRWAIZVSKNNGLVXEUNJIFXHCXDBZOAKJQWRNL");

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
    msg.setTimeStamp(0.0591855094625);
    msg.setSource(60101U);
    msg.setSourceEntity(112U);
    msg.setDestination(8946U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("MDXMJWNKFCHLGGKFPUZNQNWRTZBSDJAUCKCOPEEGFQALZDMXGPJAZHZAIISRTWCNPKXYKFWLCKCLSFEHQTHUZIOFZLXSUSLMIUPKXDSBWTTXYCQJJTPGJQYGVEPSWKNVHYNOIWBLOHNZYBBJGBHGSMNNNVDDMXWRYCFVVTRLDRJARE");
    msg.description.assign("MFEYOKMEPUSWMUKFFMRKDGHWAXVRHCDDIFDRYNTCAJTKJEUWGNENIGLRPQBHQNBJTLBVEGGGOHCXPGIDOICACVZXYAEZZYPFWFFLNEAKSXPLOTNWCLKWJMKDBGSLMQTUZIGUQSZDKJTSFBAXZRPXNJRYLTCRPCJH");
    msg.vnamespace.assign("PHHLZTJNCHWDRNANHEWZATYHURPKNMHGUZJQZFNUKDQUOUMKNNHSSLTXAVYENYSWGSEMXZMVLTBSCIREFYSDRFUEFQCVJBV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HQGIKOWSUQTBVXGSKRNTXKNRFDYZKTLDJZUKBDMUENAAVNFKVDATZMBVQSHWTHPLZCOVYPHBIVDRUTGFMLTOCCSIQMPLGHELJGEJNDREZOAIELQONPSOKUUZQGNUIOLFVPXSNRMZNUTYGJPXXPJFMBOEWRBZXXAYK");
    tmp_msg_0.value.assign("LGRSEUESUZPNTBHHZLSQA");
    tmp_msg_0.type = 193U;
    tmp_msg_0.access = 121U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JTSBXGATMHKWPLRZSSIWALISHTCAPLHYQDXVWWZGRHMGBBOGFRYRIPLYVEPFRFNHKQEDTZFPJJDXUSEYTXSXYNOAIWZUIOSPENYIXGFUZQDBKCLELDMUOSNBTQMCUEIBKHJQJMFOMOATJVJDKAALNBXKXVNVWCPPZOQUCDGWPAIGHQQMZMKRFYLGZRCBYVXFCSFPDFQEK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SMPHKRNVKNKDHQFFYBHXTAPQIWVAISXHCBPJEUCQRT");
    tmp_msg_1.dest_man.assign("AODDKYKLUSIPEUVXXTPFGYJSZTDQWHMZGRKYVETDSMDTUMMNYAZOWRINSLQPDPUMGSWLJQPAOOKINHLZWCXGYBAQUGMIKFXBPJLNNUYGRVBZFGKIBCFLWMBFVCTAHKBBWAZPCCYUTXVSDLYRUEWZNXTQJQQJMJNRIFVSPIRETHKBCOGJLXFEVLODZHVWJTYXCZAFATQXRJUA");
    tmp_msg_1.conditions.assign("WWXOAFCAJTAMSXEQUNSTSOEUPFORZJRPBZYOCCAJHKQXHHYVJJAGOD");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Parameter tmp_msg_2;
    tmp_msg_2.section.assign("MHQGHCBQBTWZEQBIGFJLMHQYDQSPQLGAMKOLIDXPLNYMYVVZUHBNUVTEAIKRRBFFPHNBZOJWUXPTXOIWSEJEADLTQGVRJNQSEHCJCXHUOUOTFNUSYTKUWBITXONDPWWGVWFMYPDNLVVUQYVRFAEMJAFKYVKAAAPXGPGXWNJITCCKISLYFVSZLZRCDKI");
    tmp_msg_2.param.assign("ORZNPFNDWAGHLOLSBMWIGINVPYERFYTTDGJWZBNVDXHROHMCNASBDJOYQIYQUALNQFXUHYCSZDZ");
    tmp_msg_2.value.assign("AVURNKLSCHAMNAEHIPLS");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.142526822408);
    msg.setSource(63244U);
    msg.setSourceEntity(19U);
    msg.setDestination(24367U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("IZMBVNEDDMEASSEKFRPQHXZTBPGYXIJSAWLKAXMOIPYIVPZFJRGQUXTMEMMLFCWHMWVLIUHNZZYTEZ");
    msg.description.assign("JGEOKOSFIDONXCSRMBJFYQJFEW");
    msg.vnamespace.assign("NKMREGNJPTTUMNNVKCLVIZBEDELQNJBOHESUSWQMEWBVLHHBCBYTYMLFEEYADTIADXVRXFLURVZQBENARFSRSWEUAUDOWTNPOOVMFHAHFQICTGSYKZGXFCQQXUJZKXLWYSKMPZCGPLTWPIBPUMJMDUYIYOANVLBZJADCXDLKIASFI");
    msg.start_man_id.assign("ZGMDKPWLEZYWEFLOQOXMEWXAXOEZHVCTHIKXRRJJKYNGBHBSTJMTZCHLLDRAURZMOTDVKENDQAAWQYSMBCJBSSIXZOCSVNPGLAQIGFUGOWICIIQBARQIGSLZDDODBNOGYOPJJJPKWTQNIEUPNUUNPFDZUXLRPILRGYCJMVPBQKEVVTUZBWVSFKRAUKFVWHWXHCMUTQAATBETPXHFSCOVMCFKJYYHWAXPFNHTRFDCYVDMLKFZL");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 151U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.309867918857;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.988750705958;
    tmp_tmp_msg_0_1.z_units = 246U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.112695369949;
    tmp_msg_0.lon = 0.274308077768;
    tmp_msg_0.radius = 0.191928548778;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.817273708899);
    msg.setSource(65195U);
    msg.setSourceEntity(22U);
    msg.setDestination(24210U);
    msg.setDestinationEntity(234U);
    msg.maneuver_id.assign("EOFBABVHSHGEX");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("USMTEMWARRVGSCNDFHEBMMMRIGJHDGXYRBKKJGKDXMOWIBFLHIWNTCZQFUBIHWVSCROLNQHFZTPTXQXWZYZBETYOOYERQZXLNSUPMKJQ");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.218340845283;
    tmp_msg_1.y = 0.076667057793;
    tmp_msg_1.z = 0.891176443104;
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
    msg.setTimeStamp(0.654989294464);
    msg.setSource(21970U);
    msg.setSourceEntity(202U);
    msg.setDestination(57780U);
    msg.setDestinationEntity(77U);
    msg.maneuver_id.assign("AIOFSEXRJUKSVCFALWSILZCIMAMTGFUNSTVHMXQBBEECBYAQKOZDUYRLPXCJWCVSZGNHPPGBHQMZTSTKJKYUHWJAIKANFOYMUFKZEFURTYNMFRHHNJLTOQYKAVQHLGFNDSDGWFOQXAGRQQUYZXUATJLVXBZTVROORANI");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TKFCKIUZNRDMUHODZGAGNWNZLPCZSPDATTJIFKXPSXAEWBBVYFVFVEDTJAVBGALPQWYIQAHYAFCFNZSMPRIHKQHFPXYPTGTZQCEJHWDBRVJOGTSETMMZEMJQHVGRASCVPNYWSUVMGWKTNNUKOWEYUCBJYMUBOJLCADLWWWMBTFO");
    msg.data.set(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 43U;
    tmp_msg_1.snapshot.assign("XTHADHWBZGYEXPPLBTZWGNCDXUBAFXWYLQCDWYQVJLXOJERICHBRZYIVFEFYRONVFJKPMDXCTCJARYIDAZKMLBUGWANHNTJCXMQQQDCYQYUWQRSSJLROIHYJKLOMJQPVDPCFZETEUHLAPMOOOSZOKUSRFBAPRDHKVDXINGKSVIMPVUAZCNKSHRVFGWBOZRBC");
    IMC::QueryPowerChannelState tmp_tmp_msg_1_0;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Elevator tmp_msg_2;
    tmp_msg_2.timeout = 2134U;
    tmp_msg_2.flags = 179U;
    tmp_msg_2.lat = 0.9070215178;
    tmp_msg_2.lon = 0.0895015153238;
    tmp_msg_2.start_z = 0.424910054019;
    tmp_msg_2.start_z_units = 174U;
    tmp_msg_2.end_z = 0.459329417734;
    tmp_msg_2.end_z_units = 219U;
    tmp_msg_2.radius = 0.914298435782;
    tmp_msg_2.speed = 0.667691229142;
    tmp_msg_2.speed_units = 220U;
    tmp_msg_2.custom.assign("QNVCHLMJNCLSUVSGKATQOBEOOESUTFEMZDVCFKSLBHAMCDQLYGPJUR");
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
    msg.setTimeStamp(0.136351546028);
    msg.setSource(34172U);
    msg.setSourceEntity(7U);
    msg.setDestination(49431U);
    msg.setDestinationEntity(179U);
    msg.maneuver_id.assign("KWRNKMJTFBMRGSHULHCTSIWJCXWQXUZMSINYXDSHZCUGZMIFG");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 19617U;
    tmp_msg_0.lat = 0.201602698423;
    tmp_msg_0.lon = 0.543541221897;
    tmp_msg_0.z = 0.503178925286;
    tmp_msg_0.z_units = 222U;
    tmp_msg_0.speed = 0.186965143;
    tmp_msg_0.speed_units = 158U;
    tmp_msg_0.custom.assign("YLKFMFECNXJGGCTPKYVAYXQMVGMFJSNHWODJAFSQTDJELEEDTZUBYAOZAVOWBZQGZXNBUWOFAQIO");
    msg.data.set(tmp_msg_0);
    IMC::PlanVariable tmp_msg_1;
    tmp_msg_1.name.assign("QBTGMCBOGUIBAZLYXHFFDSYMFSWOAPTUETYPOEDEPSAEPJTIHODTJCVHRGDECFWBKNTZDUKJPRLNZWOSHSPEFJMBQFWUSAOMJXVCNEVCRBPJWULMUNNLGGECXGUZAHXBIJRKEJPLATMGWUOWNKKWQDXJRHVQVKXJVXQAMUYKSYNZNRSRQTRXFAIVZSKYPLXYIVCZGYIZLWFACIZOUDQFBGBTNITHGIBHCWVMHD");
    tmp_msg_1.value.assign("ZKLQGSEWTWSYXEIPQXIWQVCZNHCLSOUIQSSRXJUCZNZPFYNBFYFFAZPWXRAANVJZJLFBQBCDXTLMAHFERJPDVZXYUEJRJADNSMXJGBKBHLBKUTIRLNGXIGLBWEGHCVOWENUVJHMRTUFWOJBKOEMOTKPYOIIYQVRFLSSDYGDITHIWAROZGVICALOQFTKZGKMDMTE");
    tmp_msg_1.type = 175U;
    tmp_msg_1.access = 177U;
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
    msg.setTimeStamp(0.47019481943);
    msg.setSource(39881U);
    msg.setSourceEntity(206U);
    msg.setDestination(17884U);
    msg.setDestinationEntity(215U);
    msg.source_man.assign("CYPCUTKJNFOYGZYPLMBAVZKCEHGAXIHGRNLNZXNQOIZKZBUJZDYQXUWGTMDVWSRRUIVKBAOWXBIUIDHNAVDSMCZJLEYSFDUPMROFFFSCCOFZGPCEIMFKTUGBURQQTWZGGQHISRSJXDJBBBOHTWMHFEREKHMLTQABRAFKMHFEKYASLPNYTCYALSWJNX");
    msg.dest_man.assign("QTYLHUDONSYDUXZFUUHGTCPXKMHYWRWKAGLWYNPOAKCZOZLWYGJZTBZUIDLEXXAKZVXJJSPNZSHZV");
    msg.conditions.assign("RJJWNSEZUGXZZWRVHJVWMIBNIXQFFATDKRHLNORQATXPVDFBDGMTIONWJPJCHANYFRIZBKXSEAKKICVDZXPVCTBUEM");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("DNCBIJODJXQRIUOJMGFPEHKRBOQUZAAELPZWYZTAP");
    tmp_msg_0.timeout = 21399U;
    tmp_msg_0.contents.assign("LWETPJKEUSXGTMJFUYNQBOLPUTDGWYYTXZRGYLVCLQFIKEDQMWRPAONEYNWZXCAGPSBOIODEZVRHKYCBLJGXPFFFTCKEVUXDORZPGJBUJSADRKLYSDIKCETXQKGNRHFHHQYECINIRFMNPWWZUBWCHXKMIAKYZZDMVRTMQSUHSJAVSOHNXQMLLIRVDVCLGBLZZMRXDWZJVQOPF");
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
    msg.setTimeStamp(0.603167807897);
    msg.setSource(38276U);
    msg.setSourceEntity(248U);
    msg.setDestination(27686U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("ISVYPGRJLSN");
    msg.dest_man.assign("GVTENZAKBZZOODQPLVLMKETXNTCMXGWCLY");
    msg.conditions.assign("NFNYXFVSQTOHMKLACMAHBWRVOEAPYWBTZLSIAWXLGJTKZYXSVFVHOIIFTDECRUWJBLDXJPQNNHVIRYSFDWXXLMNJWMJXJBLCPM");
    IMC::RawImage tmp_msg_0;
    tmp_msg_0.width = 48847U;
    tmp_msg_0.height = 27088U;
    tmp_msg_0.channels = 204U;
    tmp_msg_0.depth = 57U;
    const char tmp_tmp_msg_0_0[] = {-65, -91, -30, -115, 107, -126, -50, 1, 115, 71, -101, -65, -91, -27, -79, 35, 86, 75, 46, 91, -98, -50, -16, -50, 35, -99, 0, -77, 111};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.688402725845);
    msg.setSource(58161U);
    msg.setSourceEntity(26U);
    msg.setDestination(61392U);
    msg.setDestinationEntity(127U);
    msg.source_man.assign("KOZENJJJMSCDLGHZFQFTHLSXGFZZPNTPMEHAWDDDTQKGGPKWHLCBZGFSQTWIPVPQHTJXQKLNYYNGYQJPWKZUHDCNUGIGYFTHCACOEOVBKBYPEUVLVXASROXXBAVBMJYNQWJSUXXAMHBMRSIBMDYINATXVISOQDOVFRLLRBELEEMQZDAWHTTHAFKEYOPSNUJJRICWNRYXULFICMKCRUVGJAVBXBURCGPYWPRV");
    msg.dest_man.assign("EVENLDELDSDXTRDQMQXDUQDUXYGBHDVZOAWHRPTSVZYPIMPUNNFMIJQANBYXMIHCBHKZFWFJJACGGDJGUOLGYNRRPVEYZCTRODCXOGHHNYSKCVSZNRKEAKJSSLB");
    msg.conditions.assign("VWVBRGCDAIRYSCJSTASEGEIOXCGFPRQUFUAJAMSHIBXJAFVHLKPTOUJQFZTAYNRFIDLSWOSDNJRDVGVBLIXBCUQYXWWOAHGUKFOXPPFZGCNZVZNCXCLFURVDSIMQRFDSCMKHTJQDHSRDZKLEPHMZENYEPGPVKLJABYXPKBUUJLNGHOQOVIMWAZYDMTEINMQOYBRXFZPGQ");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.140980729442;
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
    msg.setTimeStamp(0.145540144998);
    msg.setSource(25879U);
    msg.setSourceEntity(148U);
    msg.setDestination(19440U);
    msg.setDestinationEntity(86U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OZMSUBNTUHPCMJBHNRKFPHNGIRSQDTJNKMJWRIKETGMZOBCSZEFFHXXEHPROXXCBVOIATYYYLDCQWFUAJRFGDITGACAVBMYDXPHQZUOBPSFKIWQDVYBMNFYLEGNXRKGVMFTVV");
    tmp_msg_0.description.assign("SANLBEYWQHZSXAGUKIPNITHODNOCHKSXBECMQRLMIPPLBDKMHEAVWTACUTYZFFKVSLKEDMBMFOPJEPGMJKUCHIYDTFAMRLLFYIBUZBXQMNYCGJJKRUOXXLGXFRMZTYOSWOVAADNSTCZCXRADGLFNPNHVRRL");
    tmp_msg_0.vnamespace.assign("SCXRVYVBAXQCIIOTDRCXTXYPRAFFUSOBXMQNNBJPENXLQNUIBKUMVPEPWMGOAOLJWFZWEQDZHTZCFZLIKPLZHIMAELCBMFXWOOQFDHWXYTULRUCLDUDZSVBQBPSQMSLAUNZTDJRIINMWSOOUJBZTBNXVPHHHFRGEVXMHIAESG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KGUEDFMTOVGKFBVHLJSBMCEQAOIVLOFFVRNSXXGIYAZIP");
    tmp_tmp_msg_0_0.value.assign("DOTYFBUATBIHESHCZBLLFMW");
    tmp_tmp_msg_0_0.type = 21U;
    tmp_tmp_msg_0_0.access = 8U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OMAXVVYLGWHJVWPNAUBZLNUNVVIJOBHYGBTVZKBRMCHUHYLEAUTYUTLEKZDCMFZICWMVRFWGEEDCRPPAAMHTXRDRFJMIQTQKNUFJWLJNKAAGDDNKQHLFMBEFQGNHWXWWZGTPIUMGJTSP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EJZKNOTNGPMZKD");
    tmp_tmp_msg_0_1.dest_man.assign("OLAZSFZRCVYXMEMDERGATKEAMDYGRBXDZUKVIIAIBJMBYIFVELXDFCQAWZVAFBJUNGUGWQGZFTNNXLJOZNOXODUHHLJHSCNGKPUVXHBQGCRYEEETCLIIQDDJPMXSRFFWMUPLMEKWOPLPJAXRJFSZDHDWVPIKFKBIRZUQBVWZOASLCKTRTIBNSAGWUAJTOCKTHJNUHHGTYTUOXHWHLOIVBPYEM");
    tmp_tmp_msg_0_1.conditions.assign("TKVIQYGRHZFUIPODJDVEESHSCSBYUCOOWDWFDTWUUTPYEKZLNPDBLKHVBGOACGDZWRCCHJVECPIXDFEAIVKYMSJMZKYZHWMGQIBTFHFNGHLSCGXBOUZNORSMQUAKOUXSXBRRMFINMRQFTXIINHATDENSYNKFTJMJMFBQTJWUALVAQAELWEL");
    IMC::FormationState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.possimerr = 0.901727165674;
    tmp_tmp_tmp_msg_0_1_0.converg = 0.421102287264;
    tmp_tmp_tmp_msg_0_1_0.turbulence = 0.0505193036802;
    tmp_tmp_tmp_msg_0_1_0.possimmon = 122U;
    tmp_tmp_tmp_msg_0_1_0.commmon = 54U;
    tmp_tmp_tmp_msg_0_1_0.convergmon = 95U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DevDataBinary tmp_tmp_msg_0_2;
    const char tmp_tmp_tmp_msg_0_2_0[] = {-51, -107, 100, 16, 82, -19, 80, 15, 10, -21, 98, -68, -5, -82, -60, 95, 99, -86, 119, 80, -76, 114, 37, 49, -56, 52, 109, -89, -72, -38, 72, 13, -36, -112, 9, -28, 34, -71, -53, 9, 49, -97, -67, 33, -93, -13, -78, 8, -27, -89, 91, 70, 13, 85, 7, 73, -56, 105, 23, 101, 51, 21, -65, -94, 90, -125, 27, 116, -105, 17, -57, -65, 113, 11, 27, -51, -57, -70, 100, -126, -58, 77, 45, 27, 75, 114, -10, 112, -60, -51, 3, 108, 45, -123, 44, -51, 87, -35, -92, -70, -105, -72, -103, -56, -32, 125, -98, -125, -12, 76, 47, -50, -19, -60};
    tmp_tmp_msg_0_2.value.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.51840159615);
    msg.setSource(24437U);
    msg.setSourceEntity(225U);
    msg.setDestination(17181U);
    msg.setDestinationEntity(111U);
    msg.command = 239U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JDDLSYZIABEYKZWRRQTTGVTNTZWSFTUXBXFMJPYMLULCGK");
    tmp_msg_0.description.assign("VAGDLJQVKHRFISUGMQGDVDEXLCDFJJEXTXOVRQYXZTGCUKYMWJCIFZLCHZTHBRCRHZMEBZPDPPKSBJTAPVRSJPICVPHKIEZIOJYAOTZOCQBMAFDOLLPWIWNSYROLLQHHCBXNCBVNGADEWWNUZLUGEVMADFURJGNKXMTHEOBZJBPNCOUIMPRFSVHTBUYOQJWGOHWIGWUDAYTNEFISSETQAXDYSILTNNKQKRNXARMEYMFGSKQABULXZ");
    tmp_msg_0.vnamespace.assign("PLJTLJLUVLNHMVWWM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DMROJUPOMCNGUEKKDIVEXIKCWCNGPZWVZZCZYKBSVZLVAUBYQNCFZBUQBGKRPWOXOBYIAFTFDETXPXXPEM");
    tmp_tmp_msg_0_0.value.assign("KXQPZNHVQRWNAMUYYVASMTBMOCEKKRFZDHENPANMVGRTLUQWPJVTFLSPOCBRSLSPJHXPHEINZJUKAUBNXBUGGREGWRHVLIVGRFQJJZDIDWTTOZZCMWRDLBGSNJGQINSEUOLLICJSCRBPDJWFXBKFOLPKEDYQNVDKAKUAQHFYCMJOLVIOL");
    tmp_tmp_msg_0_0.type = 232U;
    tmp_tmp_msg_0_0.access = 245U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UIYPRRSGIAYURVWDVXWIGVUBOTOZVKJSLJJGTLNOVYLWDLROHKYULXRTQCAHIQXGCZTQQKUXXHCCXGPIBNRSEMOFMHCXWZWGCZGYTKUUEADTIGFNNDLDLFPEHDAFPJLNYOPHCFAWJBJCETRJLQYPLYEFBYFTOSNJGCINAJOSUQKMROHWKUTTKZMAOVENHVMRBWSYMKAMBPIHXPKDZECKSMARBFEVJZDBDBQUQEMSP");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MBAYATPNZGCMNSULEMMKZFUNDZGARVUXQHOWRVQLGSYNZIHDWGHLQLHCELBIH");
    IMC::Loiter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 55274U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0438919022002;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.531300205616;
    tmp_tmp_tmp_msg_0_1_0.z = 0.323037053962;
    tmp_tmp_tmp_msg_0_1_0.z_units = 149U;
    tmp_tmp_tmp_msg_0_1_0.duration = 45610U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.996910935897;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 78U;
    tmp_tmp_tmp_msg_0_1_0.type = 7U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.753482502027;
    tmp_tmp_tmp_msg_0_1_0.length = 0.482777674822;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.189596975654;
    tmp_tmp_tmp_msg_0_1_0.direction = 240U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("AIQXUYJOSBHHVRXXKDFGKOUCNHGLAGNNDOOSQYTRBCRJOTXNDEEHKETBKOCGJBIYFTJPSNNESEJQOYMFT");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::WaterDensity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.979351487036;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SoundSpeed tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.695888470801;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SmsState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 2041459101U;
    tmp_tmp_msg_0_2.state = 53U;
    tmp_tmp_msg_0_2.error.assign("VUJTSOHJEWVHJVHMPFIDSLTRCBPFFOFLCDGSEIZKICELSUGNGZTAXKVHHDWAPMCZWRGBRKLZICNGSXYDYRKQJZQPTUQLYLBUJDGWVXDAXKEOQIOPIBOUETNVJNQPTIMQWYLTJXQF");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.788080260992);
    msg.setSource(50994U);
    msg.setSourceEntity(147U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(65U);
    msg.command = 128U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWXUBQMAPWMIBNEUXPDSEVXZJJYKYQMSIQYSCMRCGIVJOCEOUFMQQGFKEOWDIRKXMSRDZCRNPHBNXBVIWKLFROVPLVHVGOUKJE");
    tmp_msg_0.description.assign("ELZCFHDSIQMLBDAFYNFXGDAWBNSTSXVDGEMDZEDFBVBTSKUGMLYPOOK");
    tmp_msg_0.vnamespace.assign("CUJYDWKPFXPNUQKQYIRCANGZTEQQCRSRZOGINNSQVFHSHZFUGFGXKREOKAJBTTIQUPSFWDUVEHPIMBUHLCUUDTQZSPCOMXJZHIRLONYFWEXWMDPJXZOVZBNHFKTMBBCOORRCPDRVIAKXWHMLSOGUBPGECJAGPYLXEIRZLQSLBPTWHMWXBANBCBGVLYMNQOEIVHWTDAYQKTLYVKGAEXWT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AOYPRKBKLQCDOJVKASGNMMYYHMVPZCFQQMSMWSUUCXKWSNMWGBJ");
    tmp_tmp_msg_0_0.value.assign("RHNOCWBJNLNKGXEQURVKXFVCKPOVZBTZUWNDNHXWYMGAHIHYHVDMDDEQBDPUKQSQRUVSKDOLWAIRKVXGNJSFSATZOPDFLFANASRKAAZNDWPCWEUFBMZJCBMDEYYFAWBNSXTTCHXHJCHVUJYUHQOCJPZLITULBNCKXQVBLIJJLVETIFUUXXQGMQIFMWFCLXSWGZE");
    tmp_tmp_msg_0_0.type = 144U;
    tmp_tmp_msg_0_0.access = 244U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ELHHCTMMQAJDTAAJULEWOYMMVSYCFCGNQOYLJWMXHNYYZGLBYKKJLROPGIQRGVPULPKNBLPZZMCPIXBU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("PZYJVPOMJIUPBRVVOEHIUAMYSJXOTGRIRVSLYHCZDKTWUCSFKSMEQPABXQDFDQWIRTMXLLGAAFJTWFTRQUZGQIAHKEUOVTXDTCPFZHVYOJLKXFTJDHEUEJOQQVWDCRKMUMOZYQRIPGNIGCXMSNGNKKBSIWONHTZNDHARWW");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 25440U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("WCFQHKDGMXGEERLTQAZFWNLCJQVWIYJNWCXITLNOFVQVNALOGTRFYGEKNMIWXNQIPCIEXFSJXCPHDJTSBYGHUUDYZZRDMZDPVSHOAPGUTRBUBLJMTRKKMEUHGQVPVLYUCYSOTMSVZMHBJQOJOSZVWTOCBMHMZXJUZQNBEUCLIEQKI");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FGNYSEHCVOYRXXKKOBFOTYMZKNLLXZOEBEBSUCQSDCFHIWTALFOYGYILDNVIZZVDOTELJYQXZRAMLWMWWNFJIPWTDFNCVABLUOETUBTTJZFFGKSCUIKSDQRYJXOGKXVWDNERJUZSXPJCTAEDHSAIQMKVUJAGBMZHSPOBDXWMWYYPUVCQURMLA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.source_man.assign("XDYTFVXTMJJQAWDSWMXDNKTTORFJMQPCLZLVOGDNZYATSZZUDLEOXYMPTCKDEESLKZXVARYVCECFVLITCVIWTUKKHJQRDGUIAVPAKKCBJRNGSCXUHPHABWPOIFJPLYQYZSNEPGEOYMNXBDYZ");
    tmp_tmp_tmp_msg_0_1_1.dest_man.assign("GQETGOGDPENIOKMCRFYOOBWLAZAMRHAIFTIYZRMJUWTZEXLIOPEHNMBSELLQDVKKFAWPXRCXAVFJTDCBKVUSXSTFRLMRRBUCUISWDICWOQCGLQDWZPRSTECHZUGFYJENFWIHKWZBDTZGOXZIEAPDKVUVFXONNDAXRVDYYJHEYXZBTQXIPLBOLNHMSKBABHYTGCKPVJLSQ");
    tmp_tmp_tmp_msg_0_1_1.conditions.assign("TQUAWFLWAHATOXDDHJPAKG");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::EntityState tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.state = 205U;
    tmp_tmp_tmp_msg_0_1_2.flags = 208U;
    tmp_tmp_tmp_msg_0_1_2.description.assign("OAYGACIKVHYMYFSQJQXYYBPOCUSPAIBJXRAIIPXLSQR");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::RelativeState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.s_id.assign("KHVXQGRAOZVLHKFEPTJNWPFLMKTSYMDPCMJCLBORKGTPGUWIEZEJXMHIDWLOEKOBFHYEKNLFRQANTSNUVYBZCSVKFUGKRVBCJMBFKSBJUQNZWOULAEZZCHBQWZUQYQQMDPDDFZATAFPXXWHGLKIUUAVFLNXWDJZVUAYSBMJGODYXHRMICVOZLGXCEYGYIHMETPWTRNPNIPVYVHICSAWSGPBEMOYLDADQFCIOIRWACSINOJXNBSHQU");
    tmp_tmp_msg_0_2.dist = 0.127178220418;
    tmp_tmp_msg_0_2.err = 0.945343665201;
    tmp_tmp_msg_0_2.ctrl_imp = 0.628212861393;
    tmp_tmp_msg_0_2.rel_dir_x = 0.0667662992816;
    tmp_tmp_msg_0_2.rel_dir_y = 0.761471991321;
    tmp_tmp_msg_0_2.rel_dir_z = 0.84268568345;
    tmp_tmp_msg_0_2.err_x = 0.560462548162;
    tmp_tmp_msg_0_2.err_y = 0.651169663111;
    tmp_tmp_msg_0_2.err_z = 0.999300498285;
    tmp_tmp_msg_0_2.rf_err_x = 0.354230078292;
    tmp_tmp_msg_0_2.rf_err_y = 0.476987723403;
    tmp_tmp_msg_0_2.rf_err_z = 0.673544512107;
    tmp_tmp_msg_0_2.rf_err_vx = 0.328051755124;
    tmp_tmp_msg_0_2.rf_err_vy = 0.999905087112;
    tmp_tmp_msg_0_2.rf_err_vz = 0.945380873987;
    tmp_tmp_msg_0_2.ss_x = 0.196829915285;
    tmp_tmp_msg_0_2.ss_y = 0.749174269281;
    tmp_tmp_msg_0_2.ss_z = 0.393729460544;
    tmp_tmp_msg_0_2.virt_err_x = 0.561291151033;
    tmp_tmp_msg_0_2.virt_err_y = 0.739295261069;
    tmp_tmp_msg_0_2.virt_err_z = 0.846561080391;
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
    msg.setTimeStamp(0.586737739178);
    msg.setSource(32700U);
    msg.setSourceEntity(252U);
    msg.setDestination(41191U);
    msg.setDestinationEntity(3U);
    msg.state = 52U;
    msg.plan_id.assign("LZTWXAZSJAEVHPEBRVMDDWJEBVTXLRMHGUPKKKCSGNNTOALVTWZWNOKZOCNUUWSMBJAZJLUZOTXOXFXDGIHLARCRQIDGHCTQLXQYRNGIYDJICGHINPYBVWJMDSGOYWSLMHRVBMYUTKEQEPDAYOKHPQ");
    msg.comm_level = 175U;

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
    msg.setTimeStamp(0.100617340659);
    msg.setSource(6212U);
    msg.setSourceEntity(162U);
    msg.setDestination(65204U);
    msg.setDestinationEntity(212U);
    msg.state = 54U;
    msg.plan_id.assign("MRMMESWAWSZTZQVRIIZAVFHLYSNAFYNAMXULOWPCSKEWXCRKEWLMHTSVXIYKLIPSMLUNIZZRKCLHXEDCQBROXMYMNZSTPUQEHELHDTTTCTGUCLPPJFGMWUJBJJXDHSGWNKDDARBNINWBBORVJDVPOGUYFCNXUVIJJTXMLFZWOZPFPEJPQBYOCQKAEVRGDVTDYGRJAQUKIXVCCBUFGWJYSTKHKFFBODHIASADRGBELNQFVKGHQXZBZOOYOQPQ");
    msg.comm_level = 112U;

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
    msg.setTimeStamp(0.171521350406);
    msg.setSource(50436U);
    msg.setSourceEntity(140U);
    msg.setDestination(35338U);
    msg.setDestinationEntity(166U);
    msg.state = 127U;
    msg.plan_id.assign("QDEWXPGWDOYIWTCXFOQNJXIHNPEGEHFVYAURIKNCDABETUBKHTXCQPPJMRFVZJDRSFFLHABLNUHJDETRPLYURZCBAWXXLVTAYSPPFTZILBJLGNYIIWNH");
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
    msg.setTimeStamp(0.24184980229);
    msg.setSource(48489U);
    msg.setSourceEntity(31U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(93U);
    msg.type = 27U;
    msg.op = 208U;
    msg.request_id = 29091U;
    msg.plan_id.assign("GMSIEQKVASXXXHPWRMKPNKYVGWOOEBZCLGGQFKUENFUFVVFHSCLBDTJG");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.892722494766;
    tmp_msg_0.y = 0.0261127679174;
    tmp_msg_0.z = 0.154277663757;
    tmp_msg_0.phi = 0.799850237158;
    tmp_msg_0.theta = 0.888278391989;
    tmp_msg_0.psi = 0.540668991879;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZEWGFBUEEHTBAFSSKQQFMCIWYXHOGLDPRGPHTOUCGJMAMUMJWPAYVVCWTXCZZUIKLKOXGDVKJYUXHHHVXSLFVBSDLBPOEIDYWDQWFPRFIAXZTNZTNNDMFVIBRAWXVONVKAIFPNYOTQBIJNKFDTMCZGMYUSKYNZEVYMAWLPEXR");

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
    msg.setTimeStamp(0.197725270065);
    msg.setSource(64154U);
    msg.setSourceEntity(237U);
    msg.setDestination(47741U);
    msg.setDestinationEntity(186U);
    msg.type = 201U;
    msg.op = 91U;
    msg.request_id = 60273U;
    msg.plan_id.assign("EGQSKCZBXSQLNRHZZNCBOMESQTIZOJVZIDHLUDVFPMKDNEESNNTIPHBJBQUKFOAQGGJPARNGMDLCYT");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 140U;
    tmp_msg_0.label.assign("FIFGDMQGKOEXLJOTESHPBVMHGZEDIZFTIAFWOOKKUXPXGUXPPIYROPARVUMWDEMSMWNMRWFVQIMBQVQNUNJCSNLEXEJKFZTQBGLRRECHHAQBTQU");
    tmp_msg_0.component.assign("WPSHPBKPGUZPBIUGUDTOTPLNCICXWAWCCASIIKCSLDAEFCMRTCGDEWOZHXCPFPNKYMWWSANAXEBTWPWYGLIHILQJFKGDKRIKJFHXMVEBRIHOJZJZRDOFESDAGZESVMMLUYAQNFNLSWJJYEFYVYRRVQXBUQQIOCNGSNVFXUBAGKYGHMBZXDMFVD");
    tmp_msg_0.act_time = 59646U;
    tmp_msg_0.deact_time = 156U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WVVFVTYNEZEXHSSKPZECKLMSPOGGJFWXYUSXBOCJYOAATVPNCJEXRGRXCWZHQPMTZWEDUKITLCVLKYYP");

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
    msg.setTimeStamp(0.165341235233);
    msg.setSource(46151U);
    msg.setSourceEntity(239U);
    msg.setDestination(36298U);
    msg.setDestinationEntity(227U);
    msg.type = 157U;
    msg.op = 193U;
    msg.request_id = 65500U;
    msg.plan_id.assign("LSDKIYFSOEMZZEJLQGQSGHTGRLRTOGQJIGGWKRWZYRBKEIFZKUIADOBFEOWDLCSEEPORXAJEVDLHVXKAXPTOLFHLIHJCUMJMXAPVXUDWDKQOJSMHRNVAZYANBKZWQMXSRILHQCKQYJBMSSRNFEHYAVHPSDNGXBNMZBITBZOABODVJXNFMBUKCEDJCHQCTQYAIW");
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 180U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KRPLYZOCTUUNUATCVYXNPDPKSPNJJPQZJYLATHCBRZADLUFENGCXUOBMSOKYCB");

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
    msg.setTimeStamp(0.840822243298);
    msg.setSource(40892U);
    msg.setSourceEntity(237U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(161U);
    msg.plan_count = 21346U;
    msg.plan_size = 781165829U;
    msg.change_time = 0.53586847546;
    msg.change_sid = 11974U;
    msg.change_sname.assign("WTMZOIENDVAVLYEXNTPIXTMWYVBGFZTFAWYLCSLGBJMXJOHEWFQGXDZINWLAJFQSQHJDNTLBKICLDYWTBYMTNWPDQEUZTDFFJUFIAIJPNHQMYXHUMSRCKIBOFJSBEERCPSJCMDOGVGHIYTLXCZTVRQOMEBIZ");
    const char tmp_msg_0[] = {40, 74, -18, 5, -91, -1, 8, 45, 52, -112, -102, -76, 24, -28, 112, -36, 19, -50, 96, 13, -41, -30, -40, 109, -102, 91, -93, 47, -97, -62, -88, 3, -120, -10, 8, -115, 108, 89, 86, -112, -119, 46, -89, -107, 6, 106, 0, -61, -54, -35, 66, 48, 3, -8, -92, 54, 64, 93, -29, 70, 76, -68, 46, 44, -19, 16, -1, 67, 81, -30, -69, 15, 49, -54, -63, -108, -35, 53, -108, -3, 78, -66, -104, -71, 26, -67, 121, -12, -57, -15, 3, 73, 96, -115, -114, 0, 6, 121, 48, -18, -69, -24, -1, -63, -13, 16, -10, 101, -79, 118, -29, -45, 107, 108, 48, 107, 76, 108, 28, 3, -121, 118, 71, 115, 123, 45, 18, -82, 113, -36, -92, 4, 100, 124, -72, 46, 37, 99, -48, 12, 32, 16, -36, 83, -67, 19, -67, -66, -18, -106, 16, -29, 19, -59, 73, -101, -42, -123, -66, -44, 0, -41, -36, 59, -9, -126};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KNAZHFPDTZQKBUPREKDRNVQIYXNRIQXCPLOIXECXPVLFEYCMYSHSWUCNITZCGZUZXUQONZIHOXIOQVZJKVPJVTEELHJHGZTRQIMAWIFQRYRAJOWOVFKQLDMUNGEFMJPVRHBNQGHFWYNDLXTGEMDLDWAOMTRMGBEFWKVTBYSDTXWBHCUDZJDPJXFYBKKPGMKHOIBXOABSVYWBMAGCBTJYZ");
    tmp_msg_1.plan_size = 30675U;
    tmp_msg_1.change_time = 0.68799706574;
    tmp_msg_1.change_sid = 18435U;
    tmp_msg_1.change_sname.assign("SVKMMAYSGZMJZDDPLEHQLGIASNCRVVTWVJNYICVBZTFDULZJOOTERFFCKYDQGVBKPTYH");
    const char tmp_tmp_msg_1_0[] = {-12, 114, -6, -59, 76, -52, 74, -91, 53, 46, 3, 66, 100, 34, 32, 12, -32, 74, -67, 38, 110, -76, 68, -18, 52, -43, -106, 7, -7, -5, 42, 56, 28, -121, 103, 15, 124, 93, 124, -75, -30, 115, 106, -60, -31, -32, 83, -75, -40, -113, -105, -51, -32, 104, 90, -91, -89, 22, 25, 0, 94, -26, -62, -50, -14, 23, 31, 31, 64, -124, 114};
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
    msg.setTimeStamp(0.48292400926);
    msg.setSource(39976U);
    msg.setSourceEntity(224U);
    msg.setDestination(57028U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 37452U;
    msg.plan_size = 1607191719U;
    msg.change_time = 0.733146210462;
    msg.change_sid = 32324U;
    msg.change_sname.assign("IUCBQWRDUXDAKTLWYFHRZCHHEGBBUCBVTHODXFGHWJAJXWLYHYZETCOFUPMAJDPWRPZMNIQPJVWJERQNMGNPRGBDWSSCTEQEVVWANLLGAOROAZUFUSOQXDNCQBPSTKMLEVUYVNATTIIEFLGSTLZQBJLHZMMLMSF");
    const char tmp_msg_0[] = {-57, 45, -125, 95, -67, -119, 38, 21, 23, 119, 80, -15, -65, 47, 104, -3, -116, -5, -10, 125, 82, -95, -59, 121, 47, -34, -32, 48, -66, -120, 81, -59, -109, 73, -36, -77, 63, 44, -101, 73, -63, -20, 29, -28, 103, -123, 57, 123, 123, 41, 60, 35, -77, -11, 65, -64, 19, -102, -69, 115, -44, 116, -102, 73, -77, -31, 122, 79, 53, 37, 24, -47, 75, 124, 102, 39, 73, -25, -122, 14, -10, -49, 48, 93, -69, -55, 79, 107, -10, 93, -56, 98, -4, -45, 53, 111, -126, -3, 19, 121, -78, -53, 106, 125, 7, 96, 47, -117, 112, -77, 47, -11, 42, -10, -15, -34, -117, -92, 79, -97, -106, -37, 87, -117, -40, 76, 72, -81, -106, -123, 104, 0, 6, 118, 39, 12, -95, 10, 43, -61, 49, 58, -32, 22, -121, 70, 126, -126, -105, -85, 90, 3, -67, 117, 122, -21, 24, 113, -82, -92, -58, -53, -95, -2, -126, -5, 20, 117, -60, 21, 86, 90, -75, 79, -65, 60, -114, -75, 89, -17, -59, -111, -68, -54, -70, 3, -74, -76, 37, -43, 38, 63, -93, -73, 10, 82, -67, 82, -58, -62, -112, 40, -66, -69, 46, 19, 52, -44, 14, 68, 48, -39, -63, 47, 39, 100, -2, 69, -22, -91, -32, -75, -23, 23, -42, 12, 107, 11, -110, -40, 36, -113, -105, -61, 59, 122, 70, -63, 91, 26, -34, 0, -88, 43, -112, 126, 9, -60, -91, 1, 120, 1, -43};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PNJZQIZWCXUOLBBJJMFIBSWSU");
    tmp_msg_1.plan_size = 38943U;
    tmp_msg_1.change_time = 0.669379448455;
    tmp_msg_1.change_sid = 9025U;
    tmp_msg_1.change_sname.assign("MJVBGNLMDSTIIQLTLIXERZGKOLNXVXQGRXZLATGHOAUZFWXUCUJDZKIJNLAQFOJYLEBMDAKUVTXYHPSOREWJPSZDYWFEJPNYJFKDAWSMWZQGHVOXCYKWMYGCFPBHRAPVQXRCYIEMUCQJFVOEPZJEPOBDEBWYIANSWPTBIFPMFBSZ");
    const char tmp_tmp_msg_1_0[] = {-38, 107, 85, 70, -58, -88, -34, 71, -30, 46, -4, -111, -59, -70, -57, -124, -90, 44, 126, -126, -104, 52, -8, 61, -100, -93, -66, 49, -108, -78, -30, 12, -75, -117, 22, 89, 32, 52, -25, -117, -91, 80, -123, 96, 112, -22, -26, -30, 80, -12, -44, -43, 18, -109, -7, 60, 13, -41, 116, 16, 25, -34, -119, -123, -60, 87, 125, -114, -33, 50, 58, -27, 90, 36, 118, 32, -118, -61, 46, -110, 1, -83, 44, -118, 22, -68, -72, 99, -102, -125, -120, -58, -94, -21, -1, 103, 58, -69, -42, -65, -104, -98, 82, 49, 125, 112, 107, -50, -40, 88, 73, -39, 93, 77, 52, 31, -61, 23, -113, -107, -17, 64, 75, -44, 24, -118, -80, -60, -27, 0, -5, -54, -99, -64, 59, 31, 16, 4, 102, -53, 82, -42, 49, -10, -121, 45, 117, 41, 124, -59, 58, -100, -115, 104, 100, 0, -59, -73, 116, -9, -47, 34, -115, 77, -125, 52, 111, 83, -29, -50, 35, 50, -19, 80, 40, -67, -88, 107, 6, 93, 65, 63, -107, 37, -2, -95, 91, -47, 43, -8, -31, -95, 76, 85, 111, 80, -104, -54, 58, 74, 40, -8, -16, -80, 2, -35, -124, 27, 41, -13, 8, 18, -65, -46, 20};
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
    msg.setTimeStamp(0.592319881192);
    msg.setSource(51357U);
    msg.setSourceEntity(237U);
    msg.setDestination(60117U);
    msg.setDestinationEntity(127U);
    msg.plan_count = 3706U;
    msg.plan_size = 4182206391U;
    msg.change_time = 0.688854519745;
    msg.change_sid = 40767U;
    msg.change_sname.assign("UOKCZJAMHHNEYMJGPRVDHGDLVRAXKPFZWKOQFDHSOCCFVBBFEGPBDJEUYUEGZYLFKNTNWATNYQIAIQSZZOJYFQRZAGRHS");
    const char tmp_msg_0[] = {-100, -25, -81, 58, 45, -23, -5, 24, 22, 1, 54, -68, -125, 118, 58, 113, 64, -41, -48, 69, -125, -60, 79, -18, 13, -42, -64, -113, -119, -126, 59, 52, -81, -44, 123, -75, 45, 1, -88, 123, -110, -72, 13, 78, -83, 78, 31, 49, 55, 61, -75, 125, -108, -120, 28, 109, -5, 117, -31, 68, 121, 71, -75, -94, -65, 81, 117, 94, 76, 100, 95, -92, 65, 49, 5, 19, -121, 99, -53, -103, -35, 30, 47, 45, -93, -86, 77, -111, -32, -46, 78, -60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WKAKNEVNBDAPVFUXAXRJIGWVOCXSVTAUXVWPKZDBDOQDWMNANIATBUGZMWFHRFWSWVQQJHNQOILMPUJXPLGVKKJSODIHCCTOGRMGQYHYTXORCHRQNZHBSFHKFSLPUBEZXPJMHXPGFWGZJFZCTEGLHJSTAEREYBYT");
    tmp_msg_1.plan_size = 39105U;
    tmp_msg_1.change_time = 0.491309509547;
    tmp_msg_1.change_sid = 48884U;
    tmp_msg_1.change_sname.assign("FVMGLRLNPKFVIXTNEJHEUIPESMLUACJVTPBIYCAZFUOZNEEWAHEIWTPMLXRIGCTOFRHDQWEJWRHZJFCAJUKUHNBWJLQVMNIGDXFZOEOGUDBNYRKSCXRGOXSAPWXCDLFZNGMIQUHTRHCBROKSOMJAQLUAXWQWTKRDGJREVKYDWSGLTCLKNQZDXPYZKVGQVWKPDHFMXIPBQGZMBOVXYZQYDUIOAFYS");
    const char tmp_tmp_msg_1_0[] = {117, 79, -92, -67, -123, 61, 114, -9, 105, 29, 65, 90, -27, -15, -14, -123, 125, 13, 68, 85, -67, 35, -91, 90, -99, -112, 62, 91, 2, -93, 9, -89, -23, 40, 31, -120, 46, 75, -24, -65, 15};
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
    msg.setTimeStamp(0.342446150672);
    msg.setSource(41969U);
    msg.setSourceEntity(137U);
    msg.setDestination(53054U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("SDPTVVIXKXYKCETVXWKRXKBZTTFJBUQUCTEGKSFCRFJPQAJYHJFLNLPQLDIGEOBMPHTKJISGCEUF");
    msg.plan_size = 6608U;
    msg.change_time = 0.68503617177;
    msg.change_sid = 44128U;
    msg.change_sname.assign("WPQUXJAICQFJNNFXXMEPMRVRLHDVZTPEYVKOONUYHAPUBQFTFCIMTTLQGFYGLERSPDSMSHXCWPCJNKMXXAYKDKDNEZGNJKCDOSGSECAURZRUXYAOQRSTCCWZKAHSLGARLBBUVFBGZGJHUIDITDVNJBWLHQMIMKTLPJOIPZKRELOLMJZMEYXZRTDVOVWYWMNWQUDZBOHKEUCAXASVHOHBIEJHPIFBNTGUWWGXJENIDZTKSYVCRWLBIYSY");
    const char tmp_msg_0[] = {118, 71, 3, -102, 35, -5, -86, -71, 82, -102, 91, -27, -56, -103, -20, -6, -106, -122, 79, 114, 20, -90, -119, -71, 54, 78, 126, -48, 67, 118, 50, 26};
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
    msg.setTimeStamp(0.0615733722048);
    msg.setSource(5914U);
    msg.setSourceEntity(109U);
    msg.setDestination(11799U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("RSJXFWAFCLNZHSSUSPOVLQEILEARENJMYHKVPHZKLAHDSZRPKBFXAGPUYIUUKCOYCQZSWSIBOYMZXVTBALTTYFVRDQLHACLIPGIJTZZMKOXBHBERZEJVQWBAFJFDBTGKYRAOGCVCNTOQCMUEJWQPEJNUUWDAUPRFSJEYVYYNGVYEHXDALMCPGPUKQIVNRBDWRHNDQMISQOLNROZWINXKMMXFI");
    msg.plan_size = 10097U;
    msg.change_time = 0.39881273639;
    msg.change_sid = 47146U;
    msg.change_sname.assign("QGIRPAWLZBALGSANUCUOBAIWSVTCEXRABIPTURIGKTBTWJMTUGWVMJSTWHWNNAGJMQYHENDTUSVHEKHCJRASALFKKMGJLFWGMVBFXXDXDDZIZWLOQHRGQIVYKE");
    const char tmp_msg_0[] = {13, 72, 57, -38, -79, -30, -126, 24, -73, -104, -70, -56, -47, -87, -41, 16, 71, 104, 117, 92, -84, -1, 55, -119, 1, 42, 2, -106, 80, 46, 72, -73, -88, -34, 1, -16, 126, -89, -112, 110, 53, -25, 41, 47, -32, 124, 105, -2, -80};
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
    msg.setTimeStamp(0.181743483786);
    msg.setSource(28761U);
    msg.setSourceEntity(214U);
    msg.setDestination(43231U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("DHLGDAHEQEFUMAABVYWXDLGATGPEJFMVCKLEIPVGXDPIEXRSMCLMWZYNNKMZHAJRYXSRVJWGCUNWUDSQPKHXIZIXNEOAEGSWOTNJMFJVLUVDYDQWYXGRHIOSSFTMYVMZYJHOSWBBOBANHJNKOG");
    msg.plan_size = 65074U;
    msg.change_time = 0.559278213672;
    msg.change_sid = 37325U;
    msg.change_sname.assign("XQEHUKUAASEXGNOLIFTMHSYMYWRRWFVOTUXZCIVNMHXQJHPDWWDRVDKYOKLGMKPOHLTQZGXHBNZXQHOSNGRGZJEYQIHXFPKMAINCUXAHYXQCFBPBASZHYQUSZVVAJPNTUFGAGGJIVRRTOADKORPNGJWMBBPKEMIG");
    const char tmp_msg_0[] = {101, 34, 73, -108, -34, 14, -84, -92, -95, 11, -44, -102, 20, -44, 66, 11, 123, 72, 118, 107, -110, -18, -57, 47, -39, 89, 36, -118, -96, 33, -44, -13, 62, 86, -100, -78, 36, 18, -90, -28, -11, -24, 86, -71, 90, 23, 8, -58, -83, -75, -70, 63, 17, -70, 20, 123, 36, -47, 48, 110, -3, 55, -101, -50, 7, -52, -128, 49, 59, -47, -121, -96, 1, 116, 114, 39, -82, 64, -5, -53, 27, 67, 72, -52, 126, 60, -114, 106, 78, -59, -41, 125, 57, -75, 59, -53, 42, 34, -87, -66, 48, -101, 60, -58, -18, -38, 126, -122, -33, 75, 19, 77, 90, -13};
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
    msg.setTimeStamp(0.576875428579);
    msg.setSource(14234U);
    msg.setSourceEntity(112U);
    msg.setDestination(5616U);
    msg.setDestinationEntity(120U);
    msg.type = 116U;
    msg.op = 189U;
    msg.request_id = 13469U;
    msg.plan_id.assign("GUNZYFXLODMRFYBTWCUAJILXVDUXSPEUGGDPQOEGMIMRCZQRDAIKA");
    msg.flags = 54560U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 39U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("FZKKALVPZLLOOBBNSYBRXLEJHQYTXWUFNIRUVWOJSYHVNUNYWAXCSPOEFONFQMAPKKRVIUGKYGZXFLBMZKCTNJAUDIHPFQILCJUXGXBOXDHIZGTBUQHWGDWMEWQFNGBVYTFZFSDKR");
    tmp_tmp_msg_0_0.lat = 0.0385781937617;
    tmp_tmp_msg_0_0.lon = 0.79638737504;
    tmp_tmp_msg_0_0.depth = 0.585451754669;
    tmp_tmp_msg_0_0.query_channel = 204U;
    tmp_tmp_msg_0_0.reply_channel = 203U;
    tmp_tmp_msg_0_0.transponder_delay = 113U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EEMZPFJNTSZXFKFOYXVXNWPCIZIYHIFXHMZAEROVCASGRCHCXHBSWGAOMSHPLXWOUKIKTLSNSPIKIXETDDVTRAESMQQSCJYAOVEJLHCEMSRZNEVTPAQOGVDEUFBZJPBUYLFZXMGXNUDEDRYHNWUTDGRIKVPQMJBVLLUBAYUSFKKRGHMJLDJOQBFWWIFGWZOTYNLCYT");

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
    msg.setTimeStamp(0.830425950184);
    msg.setSource(4917U);
    msg.setSourceEntity(124U);
    msg.setDestination(16966U);
    msg.setDestinationEntity(25U);
    msg.type = 164U;
    msg.op = 71U;
    msg.request_id = 34917U;
    msg.plan_id.assign("OYAYOFCJBBQZETRPIYCGTZQVIOSKNZGHNZXBIUCVSDTSSTZPSZJZQBNSBWKGKAKQXNZQGLWVPRCZYXHBMMBQHGEWMXUOPVWOBHYMXEXVRMGFDDUDKUACLRKMTGGITEDBNPDIUUCAINZGYKLOLKYHLQIUFJLAHSHFQEWRQYLHPAMOIJWFRFRTANMGCNWSPMEHLVWDVJQPAIEKSTAYOECXDVJUCAEYJRWXPFDJOELDUIT");
    msg.flags = 8495U;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("XBGMMCWPXTNQCHKTYUWQWXCYSDXNRFLFEVABQXTNVKBDQWCUKRAHIFMSTUISXXASHNJ");
    tmp_msg_0.plan_size = 36910U;
    tmp_msg_0.change_time = 0.78223745052;
    tmp_msg_0.change_sid = 58714U;
    tmp_msg_0.change_sname.assign("HLVQSIEDPKPGKZVNDWYKIJVNYJAVCRVYMECBSYWYSRLKNYHQTUCUTUTWQBSWLEGFCNDGABFCXTMKPUQUHLPM");
    const char tmp_tmp_msg_0_0[] = {0, 114, 60, 82, 105, 106, 81, -18, -122, -92, -19, 120, 33, -15, 48, 93, 75, 113, -102, -30, -60, 57, 62, 97, 109};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OZHKFQCZXSHLLTHVWQHJNSYZUBUWHBTTPOXBDZVSYUTKZCMJAFIUWQSEYMIGZKTCGKXGDYLZKPMDRXVOXKHNWOUMFXBYAJOCNGRRTYNQHVMPSDEFIGYPKMQAJPHNCHEBIMFROCFDWNUIPLWBAUSRFARVVLSJQXQ");

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
    msg.setTimeStamp(0.0286577219735);
    msg.setSource(25521U);
    msg.setSourceEntity(55U);
    msg.setDestination(28033U);
    msg.setDestinationEntity(217U);
    msg.type = 74U;
    msg.op = 183U;
    msg.request_id = 30782U;
    msg.plan_id.assign("BSAIHGHUMVBMISRRZUKDFBLULIJCJWTUXGQPWXTNPEWTSYIMDPKRTYWXDMVUPXAXKDPEKHYZLXBHHLRNOEPKLHAAXZQZIHOCJJPTQVMYFCNYVBQSSEQNEMTKJZVINBRCBLR");
    msg.flags = 14927U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.0357241640521;
    tmp_msg_0.type = 147U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BOZVQPGRHHNVXMKJOAKRGPALOCXUSYFRJHHTWYPXHYIRCRSDVGGQMCAOPRPOPNREOVCTUWHSILEZDDQJMYBKWSCBGUIECNLRSAO");

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
    msg.setTimeStamp(0.525499581715);
    msg.setSource(16831U);
    msg.setSourceEntity(202U);
    msg.setDestination(6185U);
    msg.setDestinationEntity(248U);
    msg.state = 192U;
    msg.plan_id.assign("UMWFYRTHGSZULHAVGODGFMJ");
    msg.plan_eta = -900388477;
    msg.plan_progress = 0.234360721224;
    msg.man_id.assign("KSDERNUWIOHOGXQO");
    msg.man_type = 29432U;
    msg.man_eta = 1033464160;
    msg.last_outcome = 182U;

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
    msg.setTimeStamp(0.350579370791);
    msg.setSource(17714U);
    msg.setSourceEntity(178U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(253U);
    msg.state = 134U;
    msg.plan_id.assign("WHZHIQMPOIMNDBBEONZHUDYSOMESLCQUTTQRNPPYKVSOVFYMN");
    msg.plan_eta = -116705496;
    msg.plan_progress = 0.991625316657;
    msg.man_id.assign("OKROHCHWMDBMPMKDEVXUUGHLJEPCCWCZGYUBGFPZEFRVTMSEJKSQIMLAKHJKSVRYAVSWMJMMHAYKNAONIHDSTLEQQDJEPQNFNCUWXLMLHPYOUOIOQZTTDQDKFNXWPUPTWUYAFHLAGRITKQPDJGOTXGVYVENFKICBRXSZXATZYWDYDCSBYLZLOJJGHFKBDJAEALIIYNWEJXCRZUPL");
    msg.man_type = 14493U;
    msg.man_eta = 77360552;
    msg.last_outcome = 159U;

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
    msg.setTimeStamp(0.319954336833);
    msg.setSource(35607U);
    msg.setSourceEntity(12U);
    msg.setDestination(1725U);
    msg.setDestinationEntity(81U);
    msg.state = 175U;
    msg.plan_id.assign("WVTXMTKJWPMTHPSBUWEPSUSECUQWILSNZOEQWTLNMQFGAQTITGYMWYHGYNOOAPJZJNZYAGOUGXYFDJPR");
    msg.plan_eta = -484148259;
    msg.plan_progress = 0.728816455073;
    msg.man_id.assign("TOVBBUGYXHSDHUCAKWAWTBVVZVNYUSFSMHERPRICIBFLOUPAEMEPM");
    msg.man_type = 27194U;
    msg.man_eta = 1758182082;
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
    msg.setTimeStamp(0.431892966106);
    msg.setSource(51079U);
    msg.setSourceEntity(175U);
    msg.setDestination(10483U);
    msg.setDestinationEntity(32U);
    msg.name.assign("HFIVEZSTEWKBSLHPBONKVCLPUCORJSXSQIFSQZYAGRSFEUWQJPQWWPZMIVHYCEBZYYSKZUZCRNOBHKAMCAZVQKLBGVMUMHODJZORWDFBCODXRMGDNCJPUKZQHSQBXATKIAPTEKKGLAYNQISFOICYDNIALRLICXUYAOWGLSWENDWFWBXMDPEUFLTUMGVQJVUNRVXMNTR");
    msg.value.assign("HPBZMXKQXOLJEEACGOOXBVTCBEOGAWCKRVCOGPOXHGJZAJHTRTXIBBQRUBQXWSAAFUISRKRKMIQSIJUKJSNOIUUTRHGFVMAWVRYAAMEFBQVTFQYJMEGWIWXMEVPZDFWJQRISRVTLMCWCNZNUBRSUTCDIQNSNOWZLMTYFLNFKOM");
    msg.type = 80U;
    msg.access = 113U;

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
    msg.setTimeStamp(0.759030644766);
    msg.setSource(46957U);
    msg.setSourceEntity(186U);
    msg.setDestination(9710U);
    msg.setDestinationEntity(242U);
    msg.name.assign("AAIPBALOVGVWYPRUQHNSEJASPPBMMTNFCGLTCRCROZBUBGATDHNA");
    msg.value.assign("DDLMQAGBHAPKPIVHFETGCCXINJSQKMLDLRZYHCXNTIKGNNJDOCRPMUXEHUPWUHYUXOOAQUFJKQFSSTSLIWIPEBCRCQTXGQPAGJWWLETIIOHCKMJLCDUNBNJZROZMGYNLOTVVZVGDWDQAVLWNMOMAXLHHSUFPORCXYZTOSRRAKJGFBEQTUHMYQWCKPYFQ");
    msg.type = 108U;
    msg.access = 86U;

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
    msg.setTimeStamp(0.318329564426);
    msg.setSource(51266U);
    msg.setSourceEntity(32U);
    msg.setDestination(18976U);
    msg.setDestinationEntity(232U);
    msg.name.assign("DVYPXAGKDBMUAMEOSQQHSQFWTPZKKWVGZCYTZNLOLUIOFSBUMIMFHZIMUIKIOUWFJJPJKQUKSDDTBBIPUVUQUBRJRKZGOWHDAYYNFRXLSINHNCPYNJGEHGYTPSJKJCTTDTQRODRQHGFHXNCHZRWKMVLKBPVFFVTNYLPJCIOJWASXCANCWQERIFVPYNRCXGWRLCIHGVJFTWZEEVAQMHNLCXSETOUGLRDBLWEXSAMOMDGYEZQAYM");
    msg.value.assign("GSXCTEVDYUPZPKQRFTOLGHNRHFJIHFXUJIBOYFNXBKUDPCSSYWAUOOPDJXXBTWSLHAFSQRZUCLZNMBBFEQBRSGVMACJTCOKAVKQIDUTHAGYGZWKPRCHZLTZXUFJEQDCOYVYRWHANPYMZINJHWRPGHAHMISDJLKGOTURCEICWAAYWUMOFMKNQPEPGJNATMJEXWBVIZLELYWQZ");
    msg.type = 148U;
    msg.access = 142U;

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
    msg.setTimeStamp(0.822671164606);
    msg.setSource(34528U);
    msg.setSourceEntity(172U);
    msg.setDestination(43738U);
    msg.setDestinationEntity(121U);
    msg.cmd = 84U;
    msg.op = 231U;
    msg.plan_id.assign("SXPAJCHHPBUKQAOIRSGCBVRPKMLJDNMJOPPGIIEYLAWBVOUHGVWNCLZPKRZBEEOULIZQVSQPGXCTGQFYDQRMVIFSXOLSAQKDHNWNTRZECXBIDIURRWHSSZMYUTULSQAOKRNHMWTZLSYJVCBUJFOODXRFKFJJEJXBTGJTADWLZEWKUJKQIDEEIXVYMPHHFWBAZNDYFZKLV");
    msg.params.assign("VJARLDMFOFSHIFMIKWUFJRHVCUODBCKMLUZIAQWKHBSZXECIXVBTMKCFJRTVPRAZWGZLYHFBLTZWPLAGOYIHYPEVUBGRKVWPJGODEMBKNKNSAFDYIPIGYWUXTGDXQVWMFODJLVYXDZWQGAQZPDLNINCMSTZHCARTJLQBTHRNPEAYHAETLDXXUIIPYFECGKP");

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
    msg.setTimeStamp(0.584972439675);
    msg.setSource(35100U);
    msg.setSourceEntity(104U);
    msg.setDestination(24505U);
    msg.setDestinationEntity(218U);
    msg.cmd = 185U;
    msg.op = 176U;
    msg.plan_id.assign("CYRWJMLUFOYFYWAOJTXJVALEVKQOFOQXKGYZGNJDCHCNPZQJESFYGTPJJWPLDNZVIBAMJRILRVPBCCCOQSDBUHCDOIFTCSZUMZOSNAMUNNXLXNGICQRPZBSUDSHYRFAWPTJIELLAFRNOLRUEKTQZDEPVYHWSPZHHDPTHXAMHBAQIGETSFGXTVHCIIUMNXAKYXZFEABLKJSNYWUPRDQWSUILMWETGXEVDEWQZVGMVMBWFQKIBRDMOXOK");
    msg.params.assign("APXNMRPEFNYFGBRTCTSVTHLQVOOHELKQSOWVAZPRRAMHYFOGEIBJEPAIUCKLCFHOGNBQUQOHEPXWZVYBCSTPUIPJIMIDTGDEHVBLVLSHIMFWVJWDZIEGSJJKFATHZSKATDGJEQMSSKYWCIMZOYXUMTKYZNQOBNLNBJXZELRPJFGSOHLYAUMKQRRIKURQWNKJUDCDBLWCDW");

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
    msg.setTimeStamp(0.0214804145582);
    msg.setSource(42719U);
    msg.setSourceEntity(199U);
    msg.setDestination(52712U);
    msg.setDestinationEntity(149U);
    msg.cmd = 162U;
    msg.op = 95U;
    msg.plan_id.assign("EZYWXGJMUAXPZWMFTNSESJBWTCEHYVF");
    msg.params.assign("AJKRXQIPUCWFJFNSJCSAZMGAWDXYZOKZAWZVXYTXONNHBGENLTWUQQZXFODHYMRZBRQBGKJCAOPRDWNXUEOXQJZHJBLXWKQICUHMIEBVSVVRGEQHJBYUKKJIBMCLMAECBWFXDVEGFMFOLUHSRXFSDIUZGOJ");

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
    msg.setTimeStamp(0.441951776406);
    msg.setSource(19315U);
    msg.setSourceEntity(113U);
    msg.setDestination(39008U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("TCIBHINWSFQYTRJEWNBLLAXQGWJCYBFMAEKARPJTNPHAIFUJLMVXVQKXBLLSUUKWPAKRMFZAPTQHBRVHBLRSLLDACNEWQXDFYMTRGLKDKQZSRKEOESIIJDNYFJVBEHLFIRNMTEDTMQDFOYBOUTGSGPIXKVCDJMIJSVSGPUCPHYOPCADTXZMMGSZQOXZNOYZNAFOYHUZQCWMNYEVOIVZBKQEZUFYOEPXWHXCWUHRJ");
    msg.op = 69U;
    msg.lat = 0.666122556622;
    msg.lon = 0.162288044294;
    msg.height = 0.342923045897;
    msg.x = 0.349967729007;
    msg.y = 0.173870828111;
    msg.z = 0.523654826015;
    msg.phi = 0.755643228103;
    msg.theta = 0.766528557484;
    msg.psi = 0.384612897626;
    msg.vx = 0.453331445906;
    msg.vy = 0.320942721432;
    msg.vz = 0.410842333114;
    msg.p = 0.814722277512;
    msg.q = 0.107984148708;
    msg.r = 0.519998763216;
    msg.svx = 0.551355791785;
    msg.svy = 0.880281071124;
    msg.svz = 0.91575351514;

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
    msg.setTimeStamp(0.146334840303);
    msg.setSource(5184U);
    msg.setSourceEntity(205U);
    msg.setDestination(16160U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("HCLVFUENGGLQUREPFKJTWSVJRHBPCUBKNJXIXJVNRCLGYLVMDENIFUDRRDQOVCFPQYWJACHHWRZAYMSQORQVMWXLYFEIGDTUUBNKOTNWIEOR");
    msg.op = 109U;
    msg.lat = 0.812621188253;
    msg.lon = 0.481069321635;
    msg.height = 0.637906591046;
    msg.x = 0.107382589341;
    msg.y = 0.555812975135;
    msg.z = 0.135768337088;
    msg.phi = 0.784515160461;
    msg.theta = 0.663201957909;
    msg.psi = 0.678976876731;
    msg.vx = 0.818361728166;
    msg.vy = 0.105947809867;
    msg.vz = 0.797012295235;
    msg.p = 0.32728709935;
    msg.q = 0.467568994134;
    msg.r = 0.243458174837;
    msg.svx = 0.273759502322;
    msg.svy = 0.131792477405;
    msg.svz = 0.982384621699;

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
    msg.setTimeStamp(0.638503903761);
    msg.setSource(4444U);
    msg.setSourceEntity(193U);
    msg.setDestination(49089U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("RWQFBAFPBINEPNKYXXJPRTJCUMLNGNHLQRDQYFVYFCULSMRROHCCQOSQANLAUCJLVXITBDDNMSDTFPQZAEWGFBUPSWVVAIHEPKMEPWCOTXXDSHKNLIRASUJXOWSWMZQNHQRGLZKVBWIDJTIGJUYOMZLDGVJBXWYPUQFSUMGOQBHEDYKVTSZCYJUGBLMDTKZZZXG");
    msg.op = 127U;
    msg.lat = 0.906198510541;
    msg.lon = 0.455521440282;
    msg.height = 0.203810081843;
    msg.x = 0.021806598908;
    msg.y = 0.661554819433;
    msg.z = 0.360300368027;
    msg.phi = 0.784817927361;
    msg.theta = 0.801219441357;
    msg.psi = 0.69256263299;
    msg.vx = 0.675057228442;
    msg.vy = 0.849079056611;
    msg.vz = 0.792408128047;
    msg.p = 0.244777739957;
    msg.q = 0.109020117099;
    msg.r = 0.0632768690746;
    msg.svx = 0.83546846427;
    msg.svy = 0.49559034171;
    msg.svz = 0.251854365089;

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
    msg.setTimeStamp(0.389237439554);
    msg.setSource(30541U);
    msg.setSourceEntity(135U);
    msg.setDestination(54773U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.350368407637;
    msg.lon = 0.921210739447;
    msg.depth = 0.866090798792;
    msg.roll = 0.399421797256;
    msg.pitch = 0.330616039739;
    msg.yaw = 0.8091077715;
    msg.rcp_time = 0.601320866077;
    msg.sid.assign("LBWLLPKBLGXOQHADQHQJGCBKONUKXDWFYERVHFYINCCPNJFXUSEYGHAMPSEODOYJPUXIXZITZPYYWMSKZCMOSTYTXRKSOHPARVBUKTLXQJZWRHFITTVMSAFFNJXNMLVJAOHVIMBRRHGOQUAPQCBIAJIZAGKGFYCNGBKBACETTQXEDJ");
    msg.s_type = 58U;

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
    msg.setTimeStamp(0.151696251266);
    msg.setSource(3180U);
    msg.setSourceEntity(172U);
    msg.setDestination(36212U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.0638247112383;
    msg.lon = 0.564569660998;
    msg.depth = 0.384986101445;
    msg.roll = 0.189578399571;
    msg.pitch = 0.259723532106;
    msg.yaw = 0.23327900626;
    msg.rcp_time = 0.333628080623;
    msg.sid.assign("UGFVLFWSHXGONBFLYSQUFQUEPXYLTIERVNHYZSYZKURVUYRPVSAWYMLMDFILFMVBUKACLXNZMUBYENONCHHQIXWPQTQDEKABDUIGDWTHJUVAMJVJTZXCHJD");
    msg.s_type = 94U;

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
    msg.setTimeStamp(0.231247966264);
    msg.setSource(40214U);
    msg.setSourceEntity(191U);
    msg.setDestination(8475U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.485570107423;
    msg.lon = 0.0147250671798;
    msg.depth = 0.999645247072;
    msg.roll = 0.146063020591;
    msg.pitch = 0.658556545074;
    msg.yaw = 0.887296646476;
    msg.rcp_time = 0.797297201403;
    msg.sid.assign("PSJNZXBRMMUGZRICJVUEQZAPFZFNGJKVACMPBFBEDXOSADTLZDLPWCLOZUYMLWHNPWQKUTZHBVAITKKRVKYTWHRWQINQDNPHZAODTBLSKGELYH");
    msg.s_type = 227U;

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
    msg.setTimeStamp(0.674081118741);
    msg.setSource(29487U);
    msg.setSourceEntity(93U);
    msg.setDestination(3962U);
    msg.setDestinationEntity(109U);
    msg.id.assign("KFEZDVFYMFUWUYWKTADTOGNZVEGMCPJYPFEKVFNZGQCTVVDKJAMVPHYRWUITVSSFFVWWHRMDQIMONREVZNHZFDTIV");
    msg.sensor_class.assign("EDBKEIIRJVPJCYCHLGHMEOWYQVJLAWLCHPALDXIDTRVHLIVQLRDNQNAPUFCUBWSBIYAFXELECSOQTYKAMUDEOMOGAOONSMFCGTSAUKNPTXZBXXDGINBULZNHKTZFUPQHZCPDMSYBNQGQKKECIXJTOHWGTXYWRVBZGVVUXGZOTWDJFJRIDJNPLFLXBMNOFGZYEJTAZFWWWIUKKBHCRRVOKSGZPWJBSERDHVQYMYPJUAFQQCEFVMSNRH");
    msg.lat = 0.730746137562;
    msg.lon = 0.707873592407;
    msg.alt = 0.34860181595;
    msg.heading = 0.775523254531;
    msg.data.assign("WYOQBJOQNRKVAHVEHHTEDOWNXACMURSMNTIANDRMCNBJDFIASNYUKXLGJZGQHALOFZKFIJCWSUJXNRCSUCWDUPYJUMKRUZGHXMZDIQGLIPBZXSOGLZLWSWSZDLHTOUECHVPHDXUVWPHNEZJTEBRQPMJOYYXLQVQTTY");

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
    msg.setTimeStamp(0.912158989071);
    msg.setSource(30159U);
    msg.setSourceEntity(51U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(131U);
    msg.id.assign("HCIKLMGAZXIAUYOGWLVRTHOGYSMXDJZJMMNDJTSEOEAZTSIMYZLZCNRCXYZFPLHUYKGWWQPCEVNQOWYXIDZJGFQNKRVIRMYSRFBUGOSTATRLZZITIIKJQHQESUJNASVTNBUQLGDBOCOAXENOLPRDCVFJAVKFXWJEGBDBYMUQVBZMXGBXYHDBJFROWUMNPPGQAAKQDXWVDKUIHLFWPOVBRUEWNKHCESDHFTJTPPKTSLWHPAQXLFMFECBKEIRUCS");
    msg.sensor_class.assign("FENXWTEOAGXWOVQDYTYSJIHRXYVIJ");
    msg.lat = 0.0280153270793;
    msg.lon = 0.847242319387;
    msg.alt = 0.747783040357;
    msg.heading = 0.333904225209;
    msg.data.assign("PVCFHJNLAUFTJGMHJEMFDAJFRIYKCTOBADLCDXVEALPCFXDHYDGOSKIOGEOMEWHFCNPKVRZUAKSMJWCCZXJKMTTUNWRQMNNKZPGIWOXBDRYWESVZCFYEL");

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
    msg.setTimeStamp(0.529732890383);
    msg.setSource(12200U);
    msg.setSourceEntity(232U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(148U);
    msg.id.assign("JIAOZLNUKIMNIIVVGAHMTQLCJIQAVJUYLPRXAVNQURODQXZQTDOYLGIFWTARWYCSCRTXSTKJHWHKIXGOEBUAVZUPZGELEAILQQKPGVZCFKJSUBXSWOPINBEVJKACBOYOSEDBPLHJWHXXDBRVWWERDGWUWYEZFSTTDCFNLSQTQJDNKDVBRKBXMFOFMMXOGSWNULLACYNFIEDJHGZXYSFPPDQMMMMPRZCF");
    msg.sensor_class.assign("YGLVEEDMJJIXCTXVRQZBTTRFSSNDAVFNBRWCNOAXHXXWCMBTHRLKFNIKQROPEPPUKZUBBZEJJDLKYZPXORHYUPVRWLVCLJGMCNYZQNGZKBSHNDZXTGPWALPGWDOUWVNHHGEKIADWOHVAMLTZWYEGXQAVGISWGOUEQIKJUNCSYMEMXIJJVYOOFXFBY");
    msg.lat = 0.295159538471;
    msg.lon = 0.320583947218;
    msg.alt = 0.740198820629;
    msg.heading = 0.488053785072;
    msg.data.assign("OHAHSFTENDWYKZGUIUNMRLDEBBBDRVVCPSNXXUHUXGCLRLFBTMBYEPCEYRCBPZUFNJ");

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
    msg.setTimeStamp(0.322468149203);
    msg.setSource(63937U);
    msg.setSourceEntity(114U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(38U);
    msg.id.assign("MFDAUTNXQERBM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YDYKQIJGUFEDVTECSMTQCVYTBSBCPKHYMLOHULXEO");
    tmp_msg_0.feature_type = 148U;
    tmp_msg_0.rgb_red = 203U;
    tmp_msg_0.rgb_green = 135U;
    tmp_msg_0.rgb_blue = 38U;
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
    msg.setTimeStamp(0.27544989706);
    msg.setSource(40745U);
    msg.setSourceEntity(188U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(60U);
    msg.id.assign("HVUSLUSOGBIHPFRAJJZCBRI");

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
    msg.setTimeStamp(0.509260271104);
    msg.setSource(460U);
    msg.setSourceEntity(212U);
    msg.setDestination(12943U);
    msg.setDestinationEntity(8U);
    msg.id.assign("HVBHOMEVRMGLHANUPZVZRPDSDUUSIX");

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
    msg.setTimeStamp(0.855904829209);
    msg.setSource(152U);
    msg.setSourceEntity(60U);
    msg.setDestination(32715U);
    msg.setDestinationEntity(52U);
    msg.id.assign("YWAHJDOHZWGYWMAANGNXXZXXTGMISQGVNQRPSIKVZRTSHVHOVUCLYBLDQKTSMOXSVWJZSCZBRZMAQBWHCQXLUDOFC");
    msg.feature_type = 146U;
    msg.rgb_red = 97U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 219U;

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
    msg.setTimeStamp(0.21238280714);
    msg.setSource(54854U);
    msg.setSourceEntity(220U);
    msg.setDestination(28257U);
    msg.setDestinationEntity(71U);
    msg.id.assign("YNASGYKVEHOWVOAFXVRKFMTNIUHNKTRACRUXSQPKBDIZJOOMYBIRPILEXLZZZBFCQDWIDLSQRKQAVGJGUOI");
    msg.feature_type = 238U;
    msg.rgb_red = 112U;
    msg.rgb_green = 183U;
    msg.rgb_blue = 60U;

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
    msg.setTimeStamp(0.274213969807);
    msg.setSource(20766U);
    msg.setSourceEntity(69U);
    msg.setDestination(8848U);
    msg.setDestinationEntity(86U);
    msg.id.assign("YIGDRGYMSKZUUDSIHIZASRLXCIXCMJTYIEETYJUKVSCVTFQNLP");
    msg.feature_type = 226U;
    msg.rgb_red = 253U;
    msg.rgb_green = 97U;
    msg.rgb_blue = 101U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.122216043327;
    tmp_msg_0.lon = 0.198910193036;
    tmp_msg_0.alt = 0.732476516633;
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
    msg.setTimeStamp(0.303677822249);
    msg.setSource(15981U);
    msg.setSourceEntity(167U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.214490692779;
    msg.lon = 0.74945336182;
    msg.alt = 0.440199115971;

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
    msg.setTimeStamp(0.655295123475);
    msg.setSource(64352U);
    msg.setSourceEntity(217U);
    msg.setDestination(18706U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.905526128816;
    msg.lon = 0.0833909710542;
    msg.alt = 0.478184324817;

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
    msg.setTimeStamp(0.630493070295);
    msg.setSource(11246U);
    msg.setSourceEntity(179U);
    msg.setDestination(3375U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.748226925752;
    msg.lon = 0.488089166157;
    msg.alt = 0.731870714443;

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
    msg.setTimeStamp(0.130050803959);
    msg.setSource(50157U);
    msg.setSourceEntity(250U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(105U);
    msg.type = 29U;
    msg.id.assign("HGHLIKYLDYKGIILMCQPPPMYOIIVTVDUNQBBOWYFNDFWKMRHSUXLXQGIPQVMEWJKPTRUVQMYZWUCBAGAOLIJKBHYPQXACWVJFTVZCEBEEUEUVB");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.247634068299;
    tmp_msg_0.i = 0.393595567401;
    tmp_msg_0.d = 0.679187696987;
    tmp_msg_0.a = 0.220407937184;
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
    msg.setTimeStamp(0.531198011521);
    msg.setSource(1466U);
    msg.setSourceEntity(79U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(151U);
    msg.type = 177U;
    msg.id.assign("CBLJDPEYUCSVCMOFGBPOMINAWZYWLDZNMBENVTFVYRXBQOSEYIEDFRKTMWRWYQJSUOMOTDATQKKTPRYNZZFTZGLJOCAPYHMJNVXDFADQKAXXRJQMJXZOKZVNVUJGNXUGBVLBSPOPJKIFVUJKGDFCOBVFWATPHGCTLNPEYCIRAHSXIHBRMEISMDWEIYUXSHBDKQIXHGKVTLHQGUQSPHCIYPBHIZ");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.346240569706;
    tmp_msg_0.m = 0.653866567653;
    tmp_msg_0.n = 0.287430979116;
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
    msg.setTimeStamp(0.866264516966);
    msg.setSource(41984U);
    msg.setSourceEntity(28U);
    msg.setDestination(61907U);
    msg.setDestinationEntity(78U);
    msg.type = 234U;
    msg.id.assign("QMQTWKIDLOBOGLTSCNWZYEEARECNOGOBIVFKYZANJESKMIPXHOYBSQPWCXPFZKFOSCIRZBQAUYCNVJRFMQVYULZQDDGNRTGPZMTG");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 23U;
    tmp_msg_0.range = 0.786493318225;
    tmp_msg_0.acceptance = 243U;
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
    msg.setTimeStamp(0.0556646783133);
    msg.setSource(27903U);
    msg.setSourceEntity(252U);
    msg.setDestination(30054U);
    msg.setDestinationEntity(98U);
    msg.localname.assign("MQOKTOVOJMKPBYHPITVTTMPHFWSGCTKVAAZTTJUCQFMKOHRD");

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
    msg.setTimeStamp(0.858490167365);
    msg.setSource(9303U);
    msg.setSourceEntity(88U);
    msg.setDestination(11694U);
    msg.setDestinationEntity(87U);
    msg.localname.assign("TAYLLDNUPMVMIYAJHKDIUNQNHFCIASBHDPITGRGJCSVHEXLZBVNTQHTZUDDBFYWXSXOPQGBYHDDVSVKZVVOZXKQBGFJCIAFELCSMTRJYNECNDJJXVZIINJTSWKSJWZOPFUUXOQRBNAZPWURFEZKOMAHCDNMPSLALSIZGYPFBPCEYLXCOIRAEIVYUTMXYTOVJYJXWUOKKQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ENYBQRLUXSPQTHVKUFYPCOLJAQDKZBIHWRHH");
    tmp_msg_0.sys_type = 250U;
    tmp_msg_0.owner = 38357U;
    tmp_msg_0.lat = 0.18448422227;
    tmp_msg_0.lon = 0.345916562384;
    tmp_msg_0.height = 0.453304628995;
    tmp_msg_0.services.assign("TVGIQIUAVLEEJXYPRZJQVXFPODFKQLCPANQACANSGKYDAUYVZGGBNFFRUNFCXAKHITTPCQAJFLNLSW");
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
    msg.setTimeStamp(0.176242587524);
    msg.setSource(5875U);
    msg.setSourceEntity(35U);
    msg.setDestination(18751U);
    msg.setDestinationEntity(12U);
    msg.localname.assign("MILPFMTHRQXTMIUPGKEZCINUGTNTRRMNBNGUFWWLDHRUSRYFODCMPGFVWJBRFBQCJCLTMZGQSITHYZSRDOVKELLAEHENGAYVRXAUVJHBXSQXHNOGCOAFSVZQMEXIXNTPEVPLHUOHDZPDVYHCBFQTYOUPKGSIXAMGUYVYEWDCGA");

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
    msg.setTimeStamp(0.627860613604);
    msg.setSource(2707U);
    msg.setSourceEntity(18U);
    msg.setDestination(62060U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("GLCSSRDSYFLDMAXRFKOHRBHLUZPSUBMHGVJWZMBQJFTNLPDATGGNJJZSLSZ");
    msg.predicate.assign("UBCABSSLJCHNGYNDGLKWGKIJGCVRAQBVMFBKDZLCSWNJVGVKLTCEUPUXFQEZHCBDZPOOETEMDLSZXELIXJLQHWIUIPYUZUEAUNUPGTBIZHRDCHUGSNMMPPFXYQMRANFEOLLTJOKROJYSNAHWKOQCRTGIQXJYBKQEIWMZWJFFVSFUTKETOIVKGSBVCQVRYQPNRHOHKYJBWFPXZNIZQXDSTMDATYSLDFXABPTPWIZCMMAXVYWGARFAHDY");
    msg.attributes.assign("XEWUOJFRHAKGZSBOARHAEPIRDRSVYGNXEKNWGSFYLZSTMSPOZSWIXDSTSNHKAUNOBHYMXMHINFHQZUTYYDVUTRUFPRJFKGIPBATWGCFESHRQEVKMFAOEPRGVPQGZKUTXJZXDOKQACIMJKAVLXZATQQDNRQNBHSUYCCKWBZEXCMVKRQFPUQOLVJPMUBDPYVYPMFTIWTCXLECIJGJDIFGZHBGUMLDYICYLZBOELNTBEWHDLWVJVJNMOCJW");

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
    msg.setTimeStamp(0.817600024913);
    msg.setSource(25855U);
    msg.setSourceEntity(233U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("YFRPPIFWIMXUZIHWLUYCIMRAHRWVCWNDLBIGDHEBEPKXARJDNHXTZLTLFBOYMLVAFVESWTSUDCYHIRQPMYBEZTZBYKTRUUTGJQAGJPHQSUDMHOODKHBXLWTMPZFWNAXKLNTIXVPCOSPYKJZOKYVFRZBXPVACCPUYEXUFTANOCWEGSSRADANYQKUVCEQZWSLIBFNSFNGLXKJSDFEQVGCCGMIVWJKOXANOQDDBRGHHEMBUZNOEISMKGGL");
    msg.predicate.assign("RVTFBPNYAHVIRSNAYJKXJOLPUNSZCSHOGGIXDQVHWDPBZMDZQVFXYIATEOQQHPCLFQKMDROONWVMSGWCTGPQKCXTJRZBEEESWOCUZJFWFDEAXTNFRISQAAYLZHUVBZKJCLHABSONOUCGDTNOHWTSWPYEKHFGGYBBAUJODALUXGKPVEFQQLEFNLZDUQCRDMUPB");
    msg.attributes.assign("YZBPREGZWVVODSUPMPUSPIFRRJVJNRGEHQXTLMZTAYCKAAONEFIEUIMTYRXLRDBVBTYDSJVPZBYQQNULFVQKKSZPWJMFTXDLXBIAXOUSJBAUSCMCEQRASNLPAXRIWZDEGPQKWHNCNLUOLKKIISFWCOEQXNGHZGTHVCUHTHZGDPCCGUHXOFJVOFYEJFOXTIVEAZQYDDRGOSGVPJIMTZYCMEBNJLLGDXHHKYKHFWWBMAKWMJF");

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
    msg.setTimeStamp(0.0730178431107);
    msg.setSource(15210U);
    msg.setSourceEntity(80U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(242U);
    msg.timeline.assign("RHSSKUNQBNNHHMZAXGTWLNJITVMBUFSJDLHKDNLOKGIKJRXMLXAOQYOWWESMRPWMPUYAGJNIPCM");
    msg.predicate.assign("TWGTGAQJOPWKIUJNSLRJBCEUIPVITYNAFERLAUNDUGSXLUHIHQNNJXO");
    msg.attributes.assign("RZCRCSFJQMGYTWCCGLUEJPDGNMJXBPLTPUSLYQZCGSOPIWEGBBBVAJTUEWMPHTLRYMSXNTZAQOKVWDAUPHQRLIFIQCWXSCEENHZYVUVAHOZGJNBUXSZQVTTGDOUDSNAQONJTSHZMOYKMZEWNFJQXYDKRJWHE");

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
    msg.setTimeStamp(0.876766481895);
    msg.setSource(19949U);
    msg.setSourceEntity(60U);
    msg.setDestination(11583U);
    msg.setDestinationEntity(17U);
    msg.command = 36U;
    msg.goal_id.assign("OPVYIUVYXUMPUMCLJSRXAWYYQDTOMWONGNDG");
    msg.goal_xml.assign("PTIFPGAOYLSWNJKKGBMUPWJDTVEGQEITWTCQZRFXXVEUOZSOYOIGKHNGZ");

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
    msg.setTimeStamp(0.0273590605974);
    msg.setSource(22482U);
    msg.setSourceEntity(195U);
    msg.setDestination(45097U);
    msg.setDestinationEntity(96U);
    msg.command = 166U;
    msg.goal_id.assign("HFQTYNHTIOQPYJNOJULAUDFEXPWSUPIVPWTFBKNYSIWNMYWOSZFREKNDVBKLCWQWSWXSJAXUVXIBVVGMELDRGGCXCCKTHVAJPEZLZVZUBJKYWDYPSYKDIIJNCPYAQRZECXGOGTWQOJQBVCLQNQUAKEAAGPEALXGMTRHEJMDQSSLUNJECRKU");
    msg.goal_xml.assign("YTMHVINGQXKONJEASOMWXBENKOHEBMLGQPLDUIRZGRXOVKGPSFUQRQNJCJETKZIKDSMPDTMGPSDIVWVYHCUUBQBYDXZMHWDYZRZYDUYHIQWLOWBATWFRMMKCVWQFFVBYGCKAZ");

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
    msg.setTimeStamp(0.289888823698);
    msg.setSource(59305U);
    msg.setSourceEntity(186U);
    msg.setDestination(62837U);
    msg.setDestinationEntity(15U);
    msg.command = 162U;
    msg.goal_id.assign("JJDGATMOGXZPOZGGZDBWQOUFALDPLZFLIQXWLNIAYEVNHRSWJELJTYHMHUGIABFCJXUPNTJWLUYHYRMUOTSUMBZMJQTPQNFMQEYFBZOGRVKJFSSYQPISWHEFDEVPVDYLFDETOOXSBIGNCBZICCQNKRAXRJYNODDZBCFLKKTWWZRPPWRXEWISHRIACKLBVETBZAUHUVSIVEYADMUALCWVMXDPPRHIYKNMFGEGNX");
    msg.goal_xml.assign("AWFARPXTWIYBFDVZPZJEZDQXWMKIDYOYITXIMQCVXKAKPFAMUYCUQMHLVFFTEOSRQIBLIHTSNRCAWQJNFNOOHBYTKCSUNRCGMDGXDBYXONFBVJQKWRGJRRQERGBKQXAYIUDPKEEMTJMGLPLTUPHNNTAEUKHVSULZYZHCEVBBUGUAEDWWNCNGLLHOJHIDVVKMNGXHEPJCEOWS");

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
    msg.setTimeStamp(0.801187718614);
    msg.setSource(36956U);
    msg.setSourceEntity(202U);
    msg.setDestination(45195U);
    msg.setDestinationEntity(154U);
    msg.op = 69U;
    msg.goal_id.assign("ZZXECLSJVOUMYNFFYKXXBHZPGQYENAMDDVBMSVEGHXAJZPSZBMWOUWICWTZEGLXTIYIQRPJSFCYZZPCCXBWSNUTJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CMHQVFEACIDQNDUVWJQ");
    tmp_msg_0.predicate.assign("QDUUESMODXUOVBHMPEQOWAHFZSTYPPSVOHKBQUOBIFMZPOPTNKXMRXWHMLFKHEEFCECGKZLEPRUTIGWXNJGWZUUHCACIUCLILXWRIYCTIVQBBOXGNJICASTLLJVQYKMSNDDD");
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
    msg.setTimeStamp(0.742027124412);
    msg.setSource(20827U);
    msg.setSourceEntity(9U);
    msg.setDestination(61039U);
    msg.setDestinationEntity(46U);
    msg.op = 167U;
    msg.goal_id.assign("YLRCIYGBRANDCVFCGPYFAJXDVCRNCWPKHRBFPFKUEHOWQAUMDJEUDZNDEHKUXZEZSDXFOAEZMILJJGMVMJJGCFUHPQXCTCIMPQPGOHRNFRTDXKBMITQRACEBKKOBVTWSLLQUURUATAMRWPSBIYVIVRWGXHNOWJLGZQNTIZSJLHZBXMKKXUWEFUFBYSMIGQXDYWHYBVGJNSVSKIEKQATZDZQTPVCMWLANTNLVWJEOEZFLLP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MDUOUHBOVCRGBLWQSGPOQDZKBQBPZEWLIMLGYTSCDXBTYUJHUMZQKRHMCAQLL");
    tmp_msg_0.predicate.assign("PIWZOVENMMCZLCNEHCKBYYEQWVVDFGIXEXIYQJWOXEFTUHODHEVKBTUFKUTBTQWFMKAQTHMPVAJYGXDPMHPOPSIGZKDLCBPCUZASNSAJGFARLTHMLLVRSOSKSCPIJQZMGLSJJELUWUWINJASQENJKDUCXIYY");
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
    msg.setTimeStamp(0.691869590034);
    msg.setSource(50459U);
    msg.setSourceEntity(34U);
    msg.setDestination(58485U);
    msg.setDestinationEntity(227U);
    msg.op = 211U;
    msg.goal_id.assign("NPZTITDRBRJMNOWGKRSAZUXOPDFFUNFYFWQUITAILLOKLCJPBPOINAYATKSITHQWBJHOANYR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GAJCZYWBXDLSRRXQFMCJTEGEHITHODIWABXHADWIYEOLJWQLCMUUAIKATLSQSHEOBXYIOIZLM");
    tmp_msg_0.predicate.assign("FAARHXAIEDSEWOVNBYIWTILLJHLUWPVUQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLOTPZFOCAUVB");
    tmp_tmp_msg_0_0.attr_type = 252U;
    tmp_tmp_msg_0_0.min.assign("RPCMVOAEBCANNCFZEHNDVQLVNOVZULVKUDTHEOVUIHHISXZYSBLYDYENPTEFOKJHGFOMQZKQWGDSXPMUNTZKFKRQNRPDWDPSOGTGXYUCCRABJLITBCSWSGTHBLDCWYSTUPPWXYJRWJOEXCJQMMGAMAZQGFVHTKJIWIGKDCKTAFPIIQYOZEMWGILYLRVAAJNKBFDXRNLRJFBZEXXXUYEZEUXRCQWLUMDOYHGUOVZBBFBKPNFMW");
    tmp_tmp_msg_0_0.max.assign("VMZOGFEUNYPECINYZCPAERAPOXKHKHUGJQEICGMMAIBNNLEFZMWMLYEBSIIOOWZWSRXZMVXPRDJCPPOBSYREXWTVGCWKUAFQSSUIZRGXGKQTPJKENKLYOBZULXLRVSNFCABNRTEQWLGDGXVZHIWOUATSGEFTSFTUBMQBXMDMLPVYLAYSJNUTBPOVRHBLQQJKJTXQZOSHKFKIJKUQJOHDRINXCLFYFNHVVCDWZWUDTQJIB");
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
    msg.setTimeStamp(0.468405037852);
    msg.setSource(22596U);
    msg.setSourceEntity(59U);
    msg.setDestination(60172U);
    msg.setDestinationEntity(7U);
    msg.name.assign("MWCYSWQPPKHJYUSVOQOGPZBUWRWXNQIKDAKDJSPIBVFULNNQQGOJJQYFGONEAGRRVLHNTSVZXZDPPBTPLRYLFKUVKFETWVPAHQWDIZYUTHIRSAXCGHZPRZMNLCMOHMBVFMZDKORJUKTSCDHYXBRJDUEIQEBCMSSLCAWHUEIXTBLNIMLAXJNACVZEFOELVHYWMOWCH");
    msg.attr_type = 183U;
    msg.min.assign("LJPVTJRQYITNSAWYTAVQQVWXUSFWUGHURHSZXDCKXKLSUIODNJQHTTREAVPKZKQWTYABOGSUITSXVAAQOVOKIZMOOSJQWKUXLNMACOFDCFVNP");
    msg.max.assign("LHYOHYKQZABZQPMDTSBBESDLYEHAPDGKMMFLCQYRKUVEXN");

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
    msg.setTimeStamp(0.56505145106);
    msg.setSource(10145U);
    msg.setSourceEntity(118U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(123U);
    msg.name.assign("MVZLGUBKPDZARKJUQKNVFAYVF");
    msg.attr_type = 92U;
    msg.min.assign("XDGXHZMYXWORRVPHYZRRIFGLJZXTSQKKGWEBQJJEJYJNHGLVFUCAYTLSXFCAOCLYNDTIMPTMTUQYKNVELJNXWAHRBSMFO");
    msg.max.assign("OSWKEGFDJFUHXGKCHZHVRTQACQLDSICZVBRTFXDMRLANXCQBDSCFRNB");

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
    msg.setTimeStamp(0.777135834647);
    msg.setSource(9703U);
    msg.setSourceEntity(20U);
    msg.setDestination(33087U);
    msg.setDestinationEntity(143U);
    msg.name.assign("BQWQFRNBNAAUVSMHGBCMXKEDILONQGTBVJWRSXHCOLJNXUHYZDURHEAITNYOPDDRFN");
    msg.attr_type = 70U;
    msg.min.assign("LNXURQNUEKADUJHYEHVRIPUUVWXLRMPTZXSVOIQIBHGJXZTKXDESVQRSRKOWRQILMPGMFSQVGYPNNZGSBOSJYAAYXWYODCRFMFPXTFAZBOHWCLDNGBIOZTAYNNPKPUEJLENQXTHRYFSZOALOVJL");
    msg.max.assign("NBYIAIMOQYZLJJRAHAEMZSLGWQSQPAWKOXTSTCGCPGUNJDFHCHJFIOAUZGWLYEPXDCWBXHDFFGBFUZRSIJTVFXJKJLWDXAEATHRAWEPBAGMPCWUNOYSEQEGCGVNQIUUDYFCAROJMQVNSWTLMDBPOUXTZNQFIXKJVMVSIXPMFZICBYZOBLITCRSZVMRRRP");

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
    msg.setTimeStamp(0.664280738737);
    msg.setSource(24393U);
    msg.setSourceEntity(27U);
    msg.setDestination(48286U);
    msg.setDestinationEntity(193U);
    msg.timeline.assign("HQWDITAJUFWOQSZJBXLEHSFLTGRWOGBMTLUURDBDAAUAAHTFLQCAVFYRYJZOHTIHCFXPLOLPEOWONGJNCPXENAYJCW");
    msg.predicate.assign("MPPRQUFLIBJXJCOBZLFXOQPUUJUXZDULAFRLCCTRQUITLNHVKIZDVLVSSAQDCAWMUJHEXIGFWPGIFJQXVENWLUGMCAC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YYFKUCZQLDEZJDZGCWWTHSTTXXPVQB");
    tmp_msg_0.attr_type = 139U;
    tmp_msg_0.min.assign("TAYXMRVSKFIPECTAISMZJLDQXLNHYIRPNKZHJACACDA");
    tmp_msg_0.max.assign("ALTAUDXSAIQVWPTUULGXAYNUFWKZBBQCIPMRZEGSTCWWODDOFTHUSJNLNONZIQXYGDIIHKHAOXI");
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
    msg.setTimeStamp(0.422450033944);
    msg.setSource(9813U);
    msg.setSourceEntity(244U);
    msg.setDestination(54135U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("XXAAYNEUGBYWZRUOBZGTPHSNCYCGTZYJGECAOIVVBEJRWRASJHVNHLJLJKEZKKOWFWEAUPLYQMFFIHFUUJZXVTAUGMVPSYMWTQTFFZKGRRUHFDDXZSJXASTDMVWQVNRVRWNMCBQUFZCMBYISEFDYIJNQKQBKJNITWPVQSOKNJLPHMXLIOOYTLSGCRLQOOLLHUNGYCEUCLDBHAHKMXCAIBFEASBSD");
    msg.predicate.assign("NZGTUBNYPVENJBIFKAGAQXHDOORPUIMBIZNBHNSJSUTYHOZRWPIJKKECMMLXEWZXGOIQKFRVMVDPVRKGMSCGXAJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CZIDARTJCRSBTIGCMAZAUIPPIBXRATEEEQKFXKJWVMXGFHQVEFLJYFKDPJMSNTOLRGVIYGYPFJISAZKMQOLROUUKARQCBGXBHKCLLTWZDKWECQSVNMHUAHQLVNWRZN");
    tmp_msg_0.attr_type = 156U;
    tmp_msg_0.min.assign("ENGPONMLCGNODRGLZ");
    tmp_msg_0.max.assign("PUWZPRGYGETGCJPAPRWDOKRLQUAFFKRMKYQERUCIANHBSAAUNYQBDVTTJVVRZIKOQQPASZCNJJEDGOLZPKYSEGSOMIJSYFUZLWTXJFADUGKMEOXTQVBZRIDXZEOSXBPECAINTVHNUWGYESLOHLNSVLPMMICIRRTBFOBGHNCYFTKXDBGNYNDFIQHXWJPXVOGFFBWMZEDLHLCVCSBKVSMHCUOA");
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
    msg.setTimeStamp(0.109087121318);
    msg.setSource(45005U);
    msg.setSourceEntity(90U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("ZFXRDTUXQPAMZGERNIFFUODPDBIYDKSRVEZLBBTAYKSKYWLEVOIJYILVWEPEQTKCOCUSOJXPZIACAWPUJQMOWSZZCNCRCWLJFKYSEHRYGRQJJGJBMDKFTJLTFUWTFVRUBOYHTEMHJDFVNNOTSVLV");
    msg.predicate.assign("TSXWAKVFQIAUHGESMSLKPCRZGQEHSWXIKEJFNYSZUYVOFDWRBHKXUPURHNIBTEIIBPUTXFMXVAQAPVDIJCACRYMDOWVORBCXOLKGKTQTCNLNGDUTELHXOCXCCOBRNGZUDPLIDVRZYOLGLFZNZQLYEFRHBMYJMKQRPUJYBVBUIMJZSVZLUJODMPXWQWGLTGOSYJJKTBZEWYSQ");

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
    msg.setTimeStamp(0.365149755386);
    msg.setSource(36491U);
    msg.setSourceEntity(251U);
    msg.setDestination(734U);
    msg.setDestinationEntity(18U);
    msg.reactor.assign("DCARVCZIXWSARSSUNWUOSLQVWNJXIQWNHTZSBOHEFPZUIAJPEFLBGJTUDIVFEOZZBEGPKFBR");

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
    msg.setTimeStamp(0.495753120169);
    msg.setSource(61863U);
    msg.setSourceEntity(14U);
    msg.setDestination(59161U);
    msg.setDestinationEntity(129U);
    msg.reactor.assign("OGYAMQKEMDSNTMQERWZBVMKHXWGFQHWDIAYWECCTFRUVDXSTNLIAUDVAPAIRVWHSJFUXPKJTUXWLLCHXOXGAIZHLEPLDDMOYUYZCFSTFJDRZJNXQJWGMQUCVBDFLBISUSVEOKOKYTNKVEMJHJHBPVJPBPYHSLONQRNCLUGYJSNMAKGBREUFXJZYDCVIAQICFRZGVWECAQUICTOI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FRZTHYZCCJKOWMEUZRNIBTHPDKLNRFERZTMBRTBXBLKDUOBCMKFCTYPZJDQAJMJBWWCVNAEJAHXEPYERFAYUANGPSIFSZBPFHLLHVWWDIGOEYSVXMEWILXZIVDQLJODGECMVKQJQAQCOINHSFYEDXFLTSNDVTKPYNPGVNSBRMVOUZQQLAZMFAURRYQYSJAHNPWOHTIUKOSUXGUHKHTYIGLGWPOV");
    tmp_msg_0.predicate.assign("ISAFOGMNBOZQPFLLJMXEREHGLTDKOTRMUZPRUOVOBDPODYJKYV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KSJMHFXZSWTCCCXVMFTAVDREQMIFRMMSYPDICKLPNQZYGIYHIGFZNUHVVRUOIEOOCLAQLGNNYJKMNHAHLXXXSNMUXEZJYZRWPVTORRHWBFTTYQA");
    tmp_tmp_msg_0_0.attr_type = 231U;
    tmp_tmp_msg_0_0.min.assign("KWUPRGKHMDRZOQBBMBDHLJQKSCXEUPUPQXCPXDPBAIYZUEFLNAAMYQYDHIWAZXAORFTWNMWFTUNQTQAY");
    tmp_tmp_msg_0_0.max.assign("YUYJNFXKEPRPVEXDMTHARNDKBZXUHOJP");
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
    msg.setTimeStamp(0.596765585278);
    msg.setSource(13424U);
    msg.setSourceEntity(213U);
    msg.setDestination(35227U);
    msg.setDestinationEntity(48U);
    msg.reactor.assign("QQPDXACKJXIDLQOBORTFJKOQGXWYIWIHZJAENLZETQZSXHTPLZYVSGGBSNKTWKFDNWJIFRCJFHBUNOMBWLOYEJKCSEYHGYLVNPXVGIQOISNQWXI");

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
    msg.setTimeStamp(0.689868149485);
    msg.setSource(51539U);
    msg.setSourceEntity(149U);
    msg.setDestination(21199U);
    msg.setDestinationEntity(104U);
    msg.id = 198U;
    msg.width = 51978U;
    msg.height = 6683U;
    msg.widthstep = 63686U;
    msg.channels = 236U;
    msg.depth = 24U;
    msg.finaldata = 66U;
    const char tmp_msg_0[] = {-100, -74, -28, -82, -114, -108, 39, 91, -29, 98, -126, 77, 16, 45, -114, -77, -101, 66, 123, -7, -23, -111, 115, 116, -117, 1, 0, -105, -55, 90, 20, 29, 77, -29, -103, -45, -75, -117, -74, 48, -114, -10, 14, 81, 115, -53, -24, -2, 45, 91, 125, -89, 87, -109, 116, -94, -23, -28, -92, 53, -14, -35, 46, 47, 19, -14, 16, 14, 2, -115, -20, 54, -2, -128, -3, -61, -32, 3, 95, 107, 82, -124, -22, 27, -58, 121, 110, 88, 124, -49, -31, -38, 96, 126, -32, 54, 116, -49, -55, -28, -76, 16, 15, 13, 40, -115, 51, -65, -69, -43, -33, -21, -96, -123, -23, -122, -116, -105, -101, -98, 32, -53, -4, 28, -113, 125, 34, -86, -85, -74, -47, 75, 50, -78, 23, 68, 124, -65, 107, 82, 7, 71, 97, 18, -10, -128, 75, -108, 75, -96, 32, 112, 15, 43, -87, 87, -54, -80, -123, -96, -13, -105, 82, 73, 118, -68, 19, -125, -53, 98, 22, -121, 85, 70, 11, -107, 120, 98, -72, -110, -50, 48, -77, 100, -52, -66, 73, -32, -95, 37, 85, -19, 40, 119, -125, 34, 86, -95, 125, -12, 75, 85, -40, -65, -126, 3, 101, -48, -60, -46, 20, 81, -115, -121, 99, -8, -103, 23, 50, 42, 82, -46, 32, -93, -104, -91, 12, -81, -93, 19, 116, 108, -40, 44, -12, -69, 99, -2, -112, -105, -100, -8, 87, -96, 5};
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
    msg.setTimeStamp(0.329215140872);
    msg.setSource(7959U);
    msg.setSourceEntity(109U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(159U);
    msg.id = 68U;
    msg.width = 7501U;
    msg.height = 6152U;
    msg.widthstep = 984U;
    msg.channels = 54U;
    msg.depth = 34U;
    msg.finaldata = 34U;
    const char tmp_msg_0[] = {-44, -55, -9, 72, 124, -50, -56, -47, 37, -32, -60, -113, 73};
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
    msg.setTimeStamp(0.167938206804);
    msg.setSource(3619U);
    msg.setSourceEntity(83U);
    msg.setDestination(60649U);
    msg.setDestinationEntity(108U);
    msg.id = 79U;
    msg.width = 15608U;
    msg.height = 39160U;
    msg.widthstep = 3396U;
    msg.channels = 118U;
    msg.depth = 140U;
    msg.finaldata = 59U;
    const char tmp_msg_0[] = {20, -1, -109, -21, 107, -112, 83, -79, -67, 0, 12, 98, -98, 89, -92, 36, -88, -125, -109, -6, 1, -25, -37, -82, 71, 75, -44, 101, -42, 32, -116, 4, -34, -2, -108, 5, 73, -80, -17, -110, 6, -128, 8, 50, 66, -78, 24, -22, -65, 30, -4, -86, -80, -94, -86, 14, 40, -118, -1, -41, 123, -70, -82, 58, 17, 62, 46, -22, -113, 121, 47, 93, 47, 5, 63, 14, 120, -123, 88, -32, -109, 102, 52, 111, -94, 53, 40, 40, 24, -13, -68, -58, 121, 24, 43, 96};
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
    msg.setTimeStamp(0.135493507693);
    msg.setSource(44679U);
    msg.setSourceEntity(218U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(4U);
    msg.width = 13179U;
    msg.height = 50264U;
    msg.channels = 222U;
    msg.depth = 139U;
    const char tmp_msg_0[] = {90, -60, 67, 83, 45, 87, -115, 16, -60, -126, -39, 95, 88, 37, 3, 76, -8, -16, 101, -70, 92, 116, -13, 104, -50, -42, -50, 55, -115, -24, 47, -74, -59, -8, 111, -80, -98, 56, 100, 33, 79, -57, 97, 6, 22, 45, 37, -104, -74, 49, -34, 11, -44, 41, -17, -120, 114, -78, 107, 45, 8, -50, 47, 85, 17, 104, -60, -63, -6};
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
    msg.setTimeStamp(0.303904219485);
    msg.setSource(39559U);
    msg.setSourceEntity(159U);
    msg.setDestination(28456U);
    msg.setDestinationEntity(147U);
    msg.width = 56711U;
    msg.height = 43912U;
    msg.channels = 247U;
    msg.depth = 220U;
    const char tmp_msg_0[] = {-17, -21, 28, -72, -5, 55, 80, 113, -39, 91, -3, 25, 26, 107, -117, 68, -31, -64, -64, 47, 17, 36, -35, -87, -110, -12, 64, 44, -8, -47, -93, -12, 95, -70, -127, 82, -94, 50, 126, -122, -106, -65, -117, 70, 11, 71, 112, 111, -62, 22, 80, 74, -93, -90, 34, 14, -5, 23, -120, 85, -87, -43};
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
    msg.setTimeStamp(0.977623769726);
    msg.setSource(7576U);
    msg.setSourceEntity(148U);
    msg.setDestination(61331U);
    msg.setDestinationEntity(3U);
    msg.width = 23932U;
    msg.height = 30420U;
    msg.channels = 141U;
    msg.depth = 77U;
    const char tmp_msg_0[] = {-71, -76, -118, 126, 114, 52, -57, -120, -43, 120, -123, -76, 98, -89, 29, 123, 117, -62, 45, -22, 84, 55, 27, 106, 41, 62, -65, -32, -117, 19, -8, 77, 87, 87, -75, 36, 87, 121, 30, 110, -95, -110, 111, 62, 58, 51, 96, -34, -108, 58, 14, 32, -54, -44, 99, -64, -13, 36, 109, 109, 1, 57, -123, -31, 68, -101, 126, 101, -121, -29, 84, -69, 121, 39, -122, 72, -82, -7, -94, -96, -91, 95, 32, -57, 35, 82, 17, -64, 46, -18, 52, 121, 68, -92, 93, 76, -35, -34, -117, -64, -65, -59, -67, -37, 41, -108, 71, 3, -26, -24, 13, -107, -80, -50, -102, -48, 63, -15, 82, -56, 99, 25, -19, -37, 61, 41, -110, 23, -44, 98, 32, 86, 109, -29, 1, -99, 95, 61, 56, -97, 113, 121};
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
    msg.setTimeStamp(0.948087337528);
    msg.setSource(14938U);
    msg.setSourceEntity(102U);
    msg.setDestination(16484U);
    msg.setDestinationEntity(53U);
    msg.frameid = 218U;
    const char tmp_msg_0[] = {29, 25, -63, 15, 117, 118, 39, -24, 122, -117, -48, -36, -82, -98, 121, 27, -59, 65, 48, -103, -57, 41, 20, -97, -102, 3, -16, 61, 121, -60, -8, -65, -10, 107, 40, -35, 72, -34, -11, 41, -38, 124, 95, -116, 22, 81, 89, -62, -61, -27, 24, -126, -15, 70, 81, 87, -6, 96, 4, -100, 104, 10, -67, -109, -85, 66, 121, -32, -6, -120, -54, -104, -5, 63, 6, 60, 110, 18, 118, 13, 25, -6, -113, 17, -29, 101, -28, -74, 78, -122, 21, -97, 21, 24, 5, 81, 38, -112, 103, 62, -28, 66, 62, -128, 18, 88, -108, -3, 10, 70, 86, 117, 68, -124, -56, -47, 76, 20, -41, -18, 62, 118, 90, 57, 22, -11, -106, -46, -96, 99, 104, -9, -103, 50, 58, -47, -82, -93, -25, -110, -12, -73, 111, -99, -105, -6, 80, -108, 35, -76, 5, 25, -128, 111, -109, 72, 72, 100, 32, -123, 95, 116, 75, 68, 0, -111, -42, 20, -117, -82, 115, -16, 27, 119, 58, -72, 47, -93, 42, -54, -23, 38, 25, 0, -32, -84, 42, -96, -38, 91, -116, 90, -89, 73, 26, 60, 123, -77, -61};
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
    msg.setTimeStamp(0.0479589955915);
    msg.setSource(59066U);
    msg.setSourceEntity(23U);
    msg.setDestination(7433U);
    msg.setDestinationEntity(224U);
    msg.frameid = 56U;
    const char tmp_msg_0[] = {78, -94, 24, -65, -103, -66, 97, 104, 86, 81, 58, -83, 8, -69, -7, 64, -108, 12, -110, 59, 26, -74, -91, 18, -87, 78, -35, 76, -29, -64, -42, 16, -123, -24, 98, 71, 103, -74, -34, 84, -121, -85, -55, 10, -126, -74, -32, -102, 74, -31, 72, 1, 95, -127, 32, 120, 18, 3, 29, -54, -100, 73, -24, -103, 17, -12, -26, 35, 79, 81, -72, -93, -15, -42, -83, 40, 28, -5, 26, 10, -84, 51, -31, -14, 50, -75, -74, 61, 50, -34, -98, 36, 30, -13, -113, -125, 41, 35, -78, 1, 50, -101, 25, 79, 82, -72, 11, 2, -57, 124, -96, 2, -13, -107, -69, -55, -41, 48, -48, -87, -93, 34, -103, -91, -34, 105, -78, -20, 3, 48, 95, 70, 88, 10, -107, 94, -58, -43, 85, -78, -80, 62, -60, -87, -120, 126, 47, -22, 79, -56, -36, 99, 87, 37, 67, 51, -13, 107, 38, 97, -77, -28, -87, 35, 33, 124, -67, -85, 44, -44, -67, 13, -126, 4, -16, 5, -120, -18, -57, 63, -84, 21, 6, -6, -92, -38, 44, 41, -31, -44, -80, 95, -102, 26, -82, 109, -60, 63, -90, 91, 66, 97, -8, 16, -97, -44, 112, -8, 82, 25, 70, 18, 88, 115, 5, 113, -112, -39, -92, -92, 54, -120, -127, -113, -67, -12, 123, -95, -23, 109};
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
    msg.setTimeStamp(0.269171654623);
    msg.setSource(37601U);
    msg.setSourceEntity(75U);
    msg.setDestination(4128U);
    msg.setDestinationEntity(220U);
    msg.frameid = 43U;
    const char tmp_msg_0[] = {117, -2, -93, -49, -38, -77, 41, -48, 113, 43, -119, -42, 114, 87, -66, 11, 19, 90, 100, -90, -101, -85, 83, -116, 14, -10, 25, -25, -36};
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
    msg.setTimeStamp(0.550992536545);
    msg.setSource(42956U);
    msg.setSourceEntity(186U);
    msg.setDestination(48074U);
    msg.setDestinationEntity(97U);
    msg.fps = 96U;
    msg.quality = 74U;
    msg.reps = 106U;
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
    msg.setTimeStamp(0.011751875392);
    msg.setSource(22476U);
    msg.setSourceEntity(11U);
    msg.setDestination(50248U);
    msg.setDestinationEntity(194U);
    msg.fps = 80U;
    msg.quality = 77U;
    msg.reps = 117U;
    msg.tsize = 130U;

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
    msg.setTimeStamp(0.247273962712);
    msg.setSource(46551U);
    msg.setSourceEntity(104U);
    msg.setDestination(3851U);
    msg.setDestinationEntity(253U);
    msg.fps = 123U;
    msg.quality = 8U;
    msg.reps = 124U;
    msg.tsize = 98U;

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
    msg.setTimeStamp(0.294764520477);
    msg.setSource(35388U);
    msg.setSourceEntity(201U);
    msg.setDestination(14990U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.486049859959;
    msg.lon = 0.876272385846;
    msg.depth = 168U;
    msg.speed = 0.156391639212;
    msg.psi = 0.625262062887;

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
    msg.setTimeStamp(0.256946355469);
    msg.setSource(28110U);
    msg.setSourceEntity(92U);
    msg.setDestination(40203U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.36809383244;
    msg.lon = 0.848911187311;
    msg.depth = 100U;
    msg.speed = 0.42012048743;
    msg.psi = 0.304266989441;

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
    msg.setTimeStamp(0.205075577108);
    msg.setSource(17635U);
    msg.setSourceEntity(142U);
    msg.setDestination(13336U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.42178025289;
    msg.lon = 0.0367022758194;
    msg.depth = 150U;
    msg.speed = 0.770978915213;
    msg.psi = 0.945734035703;

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
    msg.setTimeStamp(0.732083756823);
    msg.setSource(58427U);
    msg.setSourceEntity(4U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(174U);
    msg.label.assign("UINXHQLOALATOZMEOIYNZRRUCDHOEHPYBVTYEWGYPNRMIUKNMRYVANWQICJLGTZVPRGLELSOHBEDRVJFMMHWXGJYRNBZQFVCNJGPBEGDAPUWITTYHJHVXFAJBI");
    msg.lat = 0.0839342190431;
    msg.lon = 0.762941685919;
    msg.z = 0.484455147211;
    msg.z_units = 104U;
    msg.cog = 0.351497687271;
    msg.sog = 0.845191052373;

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
    msg.setTimeStamp(0.65395106366);
    msg.setSource(47845U);
    msg.setSourceEntity(183U);
    msg.setDestination(25894U);
    msg.setDestinationEntity(129U);
    msg.label.assign("UWGROEUFHHSLBJWJSCMKGDZINRQGXEZRRZLADPZQHGSUSZCOFHFRMTDBFFNVACZJHGXVGYUPYUWDCPLGKBLXELYJOVNJONHHKPCWWEVEKGEZKAVMANLQBBFXVMXJTTFNIAKTTLAXSNQDMUCLQEZYYFLNIDRSQKPUNTEJQPPMOPACCABDMYZIQOBWORSUKBSFTGPJNQJWIBAHYTVDTSVEBVHZXISMXAY");
    msg.lat = 0.636944713468;
    msg.lon = 0.668826634979;
    msg.z = 0.46015495804;
    msg.z_units = 193U;
    msg.cog = 0.331675176642;
    msg.sog = 0.158129447344;

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
    msg.setTimeStamp(0.0336527555202);
    msg.setSource(33454U);
    msg.setSourceEntity(23U);
    msg.setDestination(55196U);
    msg.setDestinationEntity(220U);
    msg.label.assign("CNICUVYQWHPBTLIAHMCZISJUGNXCXQKPXAYWVNMHKKXZSTTCHVWEGQFURJBGEPBQFRHJJOTRSAGVVTRLQIKIZIYCZANOWMLGKETHAALRZUQYTXSSAOWPWUPGQBYYDMWWYOJIPCXNEBHVJNMLUFWJDNFLBUOSMAKFDEFXNSORPTZZOAUFDKKHXBPODLJBDNISEWXSQHCMTYE");
    msg.lat = 0.762807074611;
    msg.lon = 0.320134041948;
    msg.z = 0.251971284119;
    msg.z_units = 124U;
    msg.cog = 0.425945789922;
    msg.sog = 0.47757995096;

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
    msg.setTimeStamp(0.100013829303);
    msg.setSource(37723U);
    msg.setSourceEntity(133U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(155U);
    msg.name.assign("BOEWCJUJUZGQACNVFAPIWXNPJEHUNBYMHMCIFFGZGNCHJWUAEQITCFRFQYVAKWPXYKEQEFLDXHSCZFMYXBWBVMICWMSUTRJUGSIMHKZEWDKMJOASXZXKURKFANONGRLQTLZLUOIJKBPZTYYHYVSLHBLCQTVXECBXRELSYRFIDHNPBDNZAPGTFWIUVHGYRDSZROCILGNGKVRVMPBQXQPMHVSSXDJGTQDWENOBODKAAYULIVTDOLROJQATJ");
    msg.value.assign("LCOFEXDVRPSRHJVGTZFIXGCLBKMZULDBAYHUARGGVIVWQHRQJYEHUJAZFWLQTOYXIVKNXEYKXCSROWPQHXYGDGZZFMEKNCEZQSKLVNNJSCJLZXRWMIUBOTKDFVSPJKUYACASMNHHTEAJFVNYWODMPAAIGIEBLMZHQTTZDLNPBWGSTOYIRVIQCHCEPXFIRUBMXDSMCVJDRQUOGGAFSJYUSOBXYPUUNDO");

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
    msg.setTimeStamp(0.0870978791047);
    msg.setSource(23332U);
    msg.setSourceEntity(92U);
    msg.setDestination(35181U);
    msg.setDestinationEntity(14U);
    msg.name.assign("HVEAJPGRMMYGQIBKOE");
    msg.value.assign("SDRTKXHZGJXNSYPQIJSQFLUYZNPTCZZCUJLHSOCTPTYATEKONHOQEWEDDTSXGTEDVXANKWGPEDUHJBMAPBRNMJQWNTAJLJXMYGGMHAFQFASOWPKVIGFORZGWJVAMZIHYHCQIWLJEAHUGOMUPXVERGHLKZVOCVQQC");

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
    msg.setTimeStamp(0.0251473079975);
    msg.setSource(467U);
    msg.setSourceEntity(140U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(33U);
    msg.name.assign("IQLPGYBWCZKXEBFWVGJMMRUNTKMKSHTMSQJYDCIICXTBZUWYAVSYPRIOHVQDNNWPZCBODHHKWSIVEWFBAILGAGRQXOKVFGDSZBKBWCOEGUBZMJUBHHQOXTRXAKHQCRLMQRNEFUJHKZGQXYPTCHZUQUWOLYZLVENOLAYDVXTLIZVXNAMYXSFLFFEEDGVTKPINGMSKNIFJOTGSJNDJBWJVRQDAPS");
    msg.value.assign("LJESAXRQDEWCSBSOUWJDWEVIBISWZJHWHXWNVGNBMAIKJONHXKEFEEKTSKHVPMIXPWFZARVLOWXCYSDYURKQPUXDPKGNPHLIIATIPHYUJVMZHLNNWXCBEGFXQAAJPBFBPRFULDTZQTFCTYEBVBDPGRQUHMQSHO");

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
    msg.setTimeStamp(0.415882284857);
    msg.setSource(6991U);
    msg.setSourceEntity(205U);
    msg.setDestination(10187U);
    msg.setDestinationEntity(174U);
    msg.name.assign("QXAMPFFSGXVSTNSRMAKYNJLRKHZIKXVTZIUZNIEJKOGBJDLEZYOFWQJYZHFAOKCCLDPFOTWAHIHXKTZNWCDFUPMQGFPXARQIUHKONLHYUWNTROJVPHBTVKADHUFAJYKWZIYQQGFTIVJEFJKBMJYGPSVVGLQUSXCBOMNCDMVCBOCILWBJMTDVBRXYMXUASESEDQB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FNCBXBVTZNDYWTBEOXDRCRPGVGKFPZFBUKZBXATXBLCGMBSDSDOZGKKUTMCREKQPD");
    tmp_msg_0.value.assign("TXUCNCBDGROFIPJHTBSEFXMGLTZMERJLHLASFPGFAWCYPNSCQYYJLQBHLEYCNCYTVUJWHBZUAXHWOGPDMSKVOH");
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
    msg.setTimeStamp(0.943458269701);
    msg.setSource(50690U);
    msg.setSourceEntity(226U);
    msg.setDestination(60571U);
    msg.setDestinationEntity(205U);
    msg.name.assign("HCRMTJMXLEQZBFEWGRWRPGATIOEABNOPMCXGAVARXGGIHOWQBCPSYRMJEHUIPLDIHMGXS");

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
    msg.setTimeStamp(0.849076778824);
    msg.setSource(4208U);
    msg.setSourceEntity(235U);
    msg.setDestination(34989U);
    msg.setDestinationEntity(81U);
    msg.name.assign("HRMNLQAQGOLIRPGYWCVUUDNGYYVPOGSMIVEQYKUCELOOXDBRWUIWDEFTCVHTBFXSVJVIWDZQWKLXJVRPXTOHUAJCWEIPYTKFVQNKZEBNXDLIXLWGCMNRSOFSGKFPMTSZUGWYEQLRVXRBTH");

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
    msg.setTimeStamp(0.705691588679);
    msg.setSource(63979U);
    msg.setSourceEntity(115U);
    msg.setDestination(37598U);
    msg.setDestinationEntity(121U);
    msg.name.assign("WEQVNUIOAQENPGQECOJIKWFCDIDCZSAHFHFNYJXOZHURRVDTVSYCTMMXUYYXSJBZOQLTEFTPNNXKQUPSLIIIHLBWFXLPLAUGIHXGKCTPRZNKGIXGTMLJYACCMOVTOMAWLLESTYGV");
    msg.visibility.assign("OSQRAKSMXRKOHCDZEQWDFTYREAGYLZWXCWRUSOIIZHKMGKRJHEQDOPOUFYGUYLVTFVWPKRPQNCLLELKPFHLPTPLLSARJZCQBVCUNPGJXZADIINVEZJWFDHJWISQUBZFQHXOCHHMFBNSNQMEZADCOSLUNKTPPTDMOYTMIBSNLEOPVXNYVHAXUIUIMDXFXGDAGYBUAGBECRWSTWAJKBTXCFJZMUVVGBSIEGWGJJNMEVDXCIQRYFKBO");
    msg.scope.assign("VGITVJXZYKEMJBFOPFEUXZKARLTMGDCULOWWXFTAWOPIJMLFIREEONNIBFNIXSHHXZGQGETXXQGTARRSJGEBMCXVWYYXYKRVROQPLFDKPYJYQMYNVVCCXLHIAWIKQDVCFUEQAUPGEFYQZDDJRLRISAYNJMSWOSZDVTJKHHMLSPNCWVKJUEPYDSIUNKFUDRDOGABEAAMAGRLNHBQCHBZPZHDFNCKV");

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
    msg.setTimeStamp(0.663966863983);
    msg.setSource(8467U);
    msg.setSourceEntity(11U);
    msg.setDestination(4204U);
    msg.setDestinationEntity(14U);
    msg.name.assign("KIKSUPPVLXXRDGOTNJJMHXJTCWDMLLVQAROOGCEIJWMAXPTGWKDHOZPBYZNEGKMYQQQEEIBINAWHMSSVZGTHWGZYQBHEKDBQPRZTSZNAWPWKNWTFCDDRLJEVACTOHNTUVFDXOMSFMQSEOMFPHLIWSQDKYATCBOULLUPPGGFOMYWURNFNZYMBJIDQCYUVQGHBAYEGJXKXHNSPBKEZKYCVAVLIFCRSUFAHZUOCZFASBXXJXRL");
    msg.visibility.assign("KETBBVFDXMTDLIKWZROZEQHAWJJCEETRJESDVFUAKABDOOFFLUIIYTGGAKVXSMFJUGHSTSKPOGLMVWXVYPTQMRUYQYQZCRCBNQWGIPZDMAD");
    msg.scope.assign("TDVRXERIQFIYNASGRPSCYIXVXVRTUMSWJIA");

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
    msg.setTimeStamp(0.446039559639);
    msg.setSource(35478U);
    msg.setSourceEntity(239U);
    msg.setDestination(38203U);
    msg.setDestinationEntity(70U);
    msg.name.assign("WIOKUIXIVJAXSFCCRJMB");
    msg.visibility.assign("PKMLOIIHCVVGHOJUIXMSZGDJZQDSJMCDFRCBQNRQJ");
    msg.scope.assign("DFRGJSGPVKZMWFFGVYMSDLQDSCWEBNCXSTUIQAGNMQLTDOOICQXGZIWDBLHEFZZYNECCUPLGEDOSVHR");

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
    msg.setTimeStamp(0.708850581764);
    msg.setSource(14863U);
    msg.setSourceEntity(3U);
    msg.setDestination(10301U);
    msg.setDestinationEntity(37U);
    msg.name.assign("PCOEKVTJMLAZITUDGQSIRQXVERRCIVGWNJNYRIXULQLWWTPSARPMDHKGHYDGFNSEOUHTDCNASVYPBEKIKTXMOOTNFWFNVWQFMMTVMXAZUBQHJWSODLGQZBOZZERTNHQRTIFQKHUHZGEASJBIUPBVJGBNSAFPOAKGQPP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UFDSGBDWDPKKXCNULHVWXDTNKBCMPBKSMWHJHLEQWPUMS");
    tmp_msg_0.value.assign("IYXIJKOSJMFHSJZXLUIZHDUOZMAVGVUPLUBDQQXGMEEQFYROGLGDXSTRLMOSCCLRGCHQFNZWYNNNMPHMKOAHWIVUURHDTDLNDKJODLXJFIZKRLTWIPXNRFXGKBKFOYQBSUAAZYFPFCOWQVYYWNNHGERDXSBJZBAPDWCBTKQRFIOGVCTAMLPZJSWKUHBPSAVBKZFWPIKHPJIYYEVDQTVXEZGWTEAJ");
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
    msg.setTimeStamp(0.548616401268);
    msg.setSource(65192U);
    msg.setSourceEntity(209U);
    msg.setDestination(48665U);
    msg.setDestinationEntity(127U);
    msg.name.assign("FRTRUSKHNCQWDCCNKMDSBFJ");

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
    msg.setTimeStamp(0.0503496026061);
    msg.setSource(7156U);
    msg.setSourceEntity(117U);
    msg.setDestination(244U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ILGUFMQSQQWKJLSAIWFDMDFKYMELSFUMOKZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RZVOAQYPYKCWLPSJKMPYEQRSGLYYMJEYMVTUJXVAVOBOMFVBWGWQHUAFRIDEMFUZAGKLWJRLHTNVHBRUS");
    tmp_msg_0.value.assign("MHYJLNEAWBAZNVPIVDLQPQQHULMJZEDBLKGSGVCOMBUHDXQDHNUGNXFHXPXVTGWRBAPULNIKFCSRANKKBQOPYSSQNXPSTMFVFONCINBCUKKMTVLOAFKSZZTSBJNQCVYGIMEIUJPVWVRUSCBYGMTHLYTMGIUHUGRHFZTWCJHODRZWIOKEOYYAAJJEJXXO");
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
    msg.setTimeStamp(0.807201048552);
    msg.setSource(31255U);
    msg.setSourceEntity(91U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(154U);
    msg.name.assign("NXFGGNULYWZSMUAFPNXVQGNAINFMKUAALUXPBVHCLZIKPAIQBRTTVKIDZYNIANHTNHBKVOTDELMRYFVEPDEAEJJAXYEKTJXUROLJALFVEKMKGCFIVBSFVQXLYCIMZMRSTPHHMRPHERWNJOMJVCJXGZLHCQWKOUQPBLUJHJSQCBWSWDMTRUXXCZJERFSSPQXYDOQODNDPISTQDDYOOWW");

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
    msg.setTimeStamp(0.668516540616);
    msg.setSource(60188U);
    msg.setSourceEntity(69U);
    msg.setDestination(62957U);
    msg.setDestinationEntity(119U);
    msg.name.assign("ZRZPKSXKNEYATOMHWXUAFTEQVCWDWQYMUPJOCRGGIBRVWFUCGYTEYHKWJRU");

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
    msg.setTimeStamp(0.425987366144);
    msg.setSource(54682U);
    msg.setSourceEntity(120U);
    msg.setDestination(49327U);
    msg.setDestinationEntity(249U);
    msg.name.assign("UVRFATPIJZDGQEFLSDENTMZYNDHXAPKYUQLJWSBUD");

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
    msg.setTimeStamp(0.367064938254);
    msg.setSource(28479U);
    msg.setSourceEntity(121U);
    msg.setDestination(47614U);
    msg.setDestinationEntity(23U);
    msg.timeout = 4002127090U;

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
    msg.setTimeStamp(0.169252058914);
    msg.setSource(57644U);
    msg.setSourceEntity(199U);
    msg.setDestination(30691U);
    msg.setDestinationEntity(244U);
    msg.timeout = 2927633681U;

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
    msg.setTimeStamp(0.344967597261);
    msg.setSource(12191U);
    msg.setSourceEntity(215U);
    msg.setDestination(23485U);
    msg.setDestinationEntity(39U);
    msg.timeout = 1114957041U;

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
    msg.setTimeStamp(0.0967059799599);
    msg.setSource(12635U);
    msg.setSourceEntity(252U);
    msg.setDestination(15249U);
    msg.setDestinationEntity(228U);
    msg.sessid = 1722083034U;

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
    msg.setTimeStamp(0.750630022839);
    msg.setSource(44032U);
    msg.setSourceEntity(170U);
    msg.setDestination(20608U);
    msg.setDestinationEntity(117U);
    msg.sessid = 4209912351U;

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
    msg.setTimeStamp(0.930158997299);
    msg.setSource(51265U);
    msg.setSourceEntity(69U);
    msg.setDestination(43944U);
    msg.setDestinationEntity(217U);
    msg.sessid = 1146658686U;

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
    msg.setTimeStamp(0.567849939429);
    msg.setSource(3260U);
    msg.setSourceEntity(227U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(19U);
    msg.sessid = 2271332283U;
    msg.messages.assign("MJJCNOXNNAGVABSUOMXKPNRIWHEYLYEZFERTAWQSIBYIMHWPGJOIIEQNFUOKDXGCBTSHEBNTJWUBTZAHEGFXI");

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
    msg.setTimeStamp(0.549617940312);
    msg.setSource(7526U);
    msg.setSourceEntity(169U);
    msg.setDestination(54266U);
    msg.setDestinationEntity(19U);
    msg.sessid = 3490405137U;
    msg.messages.assign("VZCFEBWOMJZDREXCINDZYUJVCCZTLGQIKDXKCIAJQEHXDURGHMLM");

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
    msg.setTimeStamp(0.813783190698);
    msg.setSource(19846U);
    msg.setSourceEntity(26U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(96U);
    msg.sessid = 4225679252U;
    msg.messages.assign("OOJDTENBJJMXBQTQLYUMOMSZOOCITWBJVAKNRIVHWEHXBURWWVAOPAZFBBTUTKBGQYFZZZVVFGNKERHVKAXTU");

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
    msg.setTimeStamp(0.113393007094);
    msg.setSource(64926U);
    msg.setSourceEntity(190U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3033752330U;

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
    msg.setTimeStamp(0.13936822541);
    msg.setSource(13309U);
    msg.setSourceEntity(4U);
    msg.setDestination(4661U);
    msg.setDestinationEntity(60U);
    msg.sessid = 1983032086U;

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
    msg.setTimeStamp(0.279251701996);
    msg.setSource(7465U);
    msg.setSourceEntity(250U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(84U);
    msg.sessid = 2133521247U;

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
    msg.setTimeStamp(0.110418111434);
    msg.setSource(9040U);
    msg.setSourceEntity(189U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(180U);
    msg.sessid = 231083724U;
    msg.status = 135U;

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
    msg.setTimeStamp(0.854621851628);
    msg.setSource(5826U);
    msg.setSourceEntity(137U);
    msg.setDestination(11315U);
    msg.setDestinationEntity(87U);
    msg.sessid = 341111583U;
    msg.status = 253U;

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
    msg.setTimeStamp(0.0216909775787);
    msg.setSource(19768U);
    msg.setSourceEntity(245U);
    msg.setDestination(58671U);
    msg.setDestinationEntity(95U);
    msg.sessid = 3674717794U;
    msg.status = 169U;

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
    msg.setTimeStamp(0.105441223852);
    msg.setSource(25074U);
    msg.setSourceEntity(125U);
    msg.setDestination(34235U);
    msg.setDestinationEntity(85U);
    msg.name.assign("HQIMFENTWKRUCAGCFBXJZXQHVVBPOLFHRFXEEKVLRJISTWNBQNAUHPZPOPZJNWVVJAXGOFFALDTTJYAZSILYUBMWUVJICYALOJZLPMSSBCUCBQCHMZMQULGSRAWFSKXNOKVFIPCDFMXMJECYUEEGNHBOBVGPKPD");

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
    msg.setTimeStamp(0.547480338077);
    msg.setSource(40899U);
    msg.setSourceEntity(141U);
    msg.setDestination(4033U);
    msg.setDestinationEntity(93U);
    msg.name.assign("ABARRWSCFKYRGTCKIGKBHTAVOJYIOYFYFMDXPJNQZSPVCYONBIXINGAVAGNDGCOXPHVSFIFZWJGQFWOYDIZKTGPZBMKPUJYHBDCXNUQMXMNNULMEKHLQVEVOZLRKQWTDUJFPWHGSZKHDXVCXPLFKCZMQTTHEJMTEUHWUJRJREUBJXVEGU");

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
    msg.setTimeStamp(0.603226620581);
    msg.setSource(40348U);
    msg.setSourceEntity(253U);
    msg.setDestination(18090U);
    msg.setDestinationEntity(133U);
    msg.name.assign("GHLVOWLZWCY");

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
    msg.setTimeStamp(0.211904745526);
    msg.setSource(14559U);
    msg.setSourceEntity(136U);
    msg.setDestination(27780U);
    msg.setDestinationEntity(242U);
    msg.name.assign("BOVXDBCNKZXZOGSPJWDFKGZSSGHEOJVYKFASBEYBYNWLDQKZQDZCYNVREADPLJCLIEVIXMGZVQHMONLORNCEPOCHCHAJPLBHTIDARVEYMRGJELITMTMYPAVXABSWYTWUECRMEBWGFUVWUC");

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
    msg.setTimeStamp(0.134331498334);
    msg.setSource(35618U);
    msg.setSourceEntity(208U);
    msg.setDestination(57437U);
    msg.setDestinationEntity(150U);
    msg.name.assign("FVZQDLRBNZRWSGIDOMRDFOHRAQFSTQOCAUWMMRUEXCHGSXXXQEQYRBPYFPVHFJPPLFVUX");

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
    msg.setTimeStamp(0.482792864407);
    msg.setSource(24231U);
    msg.setSourceEntity(69U);
    msg.setDestination(34310U);
    msg.setDestinationEntity(146U);
    msg.name.assign("OCUZXXZSMINGWCRUDLUIYBGLYBOBTERAHDGMTNYUZJSSM");

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
    msg.setTimeStamp(0.201950163567);
    msg.setSource(4185U);
    msg.setSourceEntity(213U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(76U);
    msg.type = 59U;
    msg.error.assign("XWJFUPSAVIRXBLAVBUOYKIDDGQRLGJWWZCRAWFLJNKEMDOLSXIFLPXJIYLOGZOAAKRIZEDQPFWZSMFWNEGIDXJQYWGCKTJRTTTCSOJYBMACRVWLAKNH");

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
    msg.setTimeStamp(0.52816352474);
    msg.setSource(9084U);
    msg.setSourceEntity(10U);
    msg.setDestination(63904U);
    msg.setDestinationEntity(149U);
    msg.type = 3U;
    msg.error.assign("VXURCFHYUIDRPWBJPMIOWULJSRAZVCALZWHSZWEKRHNBYGBRFMLEGBGOHLXAQMEPTZFCT");

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
    msg.setTimeStamp(0.558621564989);
    msg.setSource(42916U);
    msg.setSourceEntity(130U);
    msg.setDestination(30907U);
    msg.setDestinationEntity(20U);
    msg.type = 30U;
    msg.error.assign("TWFULZYPUPWVMEMZXRNWFFNYSYSVGNSGHQRQVTDHXCPGGNPLEAVDHZJQBCSBBANWDNXSBKKINHDAHVTYCCJOEIRZOCSOKKZLNLUWNUAQHYMPJDZMQRXAFERRKYDHILUFXWIDYCCVEBUIPWAIBHQV");

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
    msg.setTimeStamp(0.699000202984);
    msg.setSource(61944U);
    msg.setSourceEntity(13U);
    msg.setDestination(64442U);
    msg.setDestinationEntity(247U);
    msg.seq = 59911U;
    msg.sys_dst.assign("SBAFRTYCJPPXOSTQPYIKTHERYKQQMTXZQLMXAODFDNGKXOZQJHOOKNJYEYLVCMYINPHAHBCLLDGFSIDBGFDEUPFOHSCDEMSLAUWEOGUZKTWMNCAZFILXRTXKSQOVVCM");
    msg.flags = 108U;
    const char tmp_msg_0[] = {78, -121, 8, -112, -124, 69, -98, 115, -90, 34, -63, 34, -36, -85, -54, 80, 31, -47, -9, 92, 93, -103, 69, 108, 114, -30, -117, -68, 18, -79, -79, -126, 82, 4, 62, -3, -26, 9, -4, -55, -36, 117, -74, 56, 5, 11, 88, 121, -38, -91, -31, 113, -113, -110, -1, -54, 89, -37, -18, -20, 57, 95, 71, -85, 49, -101, -53, -77, -121, -114, -1, 64, 27, -26, 51, -46, 2, 38, -79, -74, 40, -124, -46, -47, -5, 15, -91, -114, -19, -125, -7, -35, 114, -114, 31, -32, 79, 112, 15, 47, 20, 56, -84, -121, 54, 15, -101, -50, 67, -43, -67, -40, -19, -75, -110, 67, 4, -43, -11, 62, -41, -49, -84, -29, 35, -127, -79, -34, -11, -89, -29, -40, -11, -128, 82, -94, -95, 1, -51, -98, 84, -98, 82, -59, 119, 63, 0, 116, 110, -52, -39, -42, -95, 36, 94, 99};
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
    msg.setTimeStamp(0.398236148329);
    msg.setSource(6774U);
    msg.setSourceEntity(231U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(88U);
    msg.seq = 6581U;
    msg.sys_dst.assign("MGFATOCEVYRFRHIGMAQTPLUMNZSYFTOWOHNABUTIJVXPPQ");
    msg.flags = 173U;
    const char tmp_msg_0[] = {60, 63, -50, -24, -6, -63, 4, -83, -44, 80, 34, -55, -28, 98, -30, -74, 59, 91, -31, -100, -8, -34, 6, 60, 104, 52, -100, 122, 56, -27, -128, 10, 11, -17, 38, -71, 3, 17, -110, 23, 82, -81, -13, 100, 85, -58, -95, 99, 118, -116, 33, -127, -85, 73, -127, 67, 119, -32, 57, -80, -4, -96, -119, -8, -125, -125};
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
    msg.setTimeStamp(0.415909370233);
    msg.setSource(7339U);
    msg.setSourceEntity(58U);
    msg.setDestination(40589U);
    msg.setDestinationEntity(233U);
    msg.seq = 60440U;
    msg.sys_dst.assign("UYIEVSIVRWFMQFVETTUNDDZJTSLRRJNNOLCUREYOZQUHUNNTOQYJFYXHEBHHMGG");
    msg.flags = 141U;
    const char tmp_msg_0[] = {-84, -20, 110, 58, -123, -17, 99, -66, 10, -82, 102, 101, -50, 12, 82, -74, -84, -61, -27, -14, -100, -56, -60, -33, -60, 112, 47, -109, 51, -3, -96, -68, -121, -77, 23, 102, 26, 99, -4, 48, 27, -10, -39, 83, -108, 17, 70, -113, 19, -101, 40, 79, -97, 75, 73, -92, -51, 26, -60, 60, -11, 71, -10, 66, 86, -35, -26, 54, 106, -79, 37, 58, 68, 37, -70, 38, 48, -66, 57, 109, 2, -43, -48, -125, -21, 103, 91, 86, 107, -83, 48, -81, 12, 54, -69, -125, -14, 1, 87, 75, 97, 79, 103, -18, 52, 90, 69, -21, 117, -87, 45, 55, -49, 30, 67, -116, -5, 1, -113, -84, -33, 124, -95, 51, -43, -7, -45, -99, -102, -6, -42, 114, 59, 28, 31, -90, -103, -121, 54, 71, 24, 0, 29, -17, 7, 37, -46, -95, -48, -112, 119, 23, 71, 76, 23, 91, -13, -109, 2, -59, 68, 116, 75, 113, -97, 14, 33, 100, 26, -29, -110, -91, -93, 63, 29, -51, -115, -70, -20, -101, 99, -108, 101, -63, 58, 126, -59};
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
    msg.setTimeStamp(0.573376943686);
    msg.setSource(18798U);
    msg.setSourceEntity(142U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(90U);
    msg.sys_src.assign("EZMFUZIGMOPQPAUVUECPAGDYTISLLBKOWMRMBUOMXZSPJARLVQLUZNSLZQITAIHSAEJFBKDNETFHWDJISWLHEYKWNSUXWVJKGWDUXRZPDCHBMMTJFCVHGCXGQXZRHXPEYNLZJVGVWARHQYQIBFYBTTHCCEMVDFECRJTBWKXOTIFMOKIGGYILEAKBPWHNCBVGQDJLUKDSOEYRUGOQJHXCSNPTJBONLOFRQPIRQ");
    msg.sys_dst.assign("XAZHZNZAACTMZUGPLOSUZUACGFDUANTWEKBVIWLAISMBDGYPEHMGCHQMUXIFWSYHVPXBMQKQPTYVYYMLOKYJYVXDBEDYHDRLJZONCHFUJUTCYXDXHPJMEZIJJNKXNYOCQJNNGCPASWKQTRANEFTQIFFPRPOCFMPQVJRTFUIBERSQQXGUCBHVLKZOLWBVWEGSRMXETRGSSNGNKWRRGI");
    msg.flags = 0U;
    const char tmp_msg_0[] = {55, 33, 88, 36, 46, 105, -46, 50, -21, -84, -1, -43, -25, 8, 69, 73, -39, 77, 93, 37, -77, 54, 36, -121, -87, 76, 75, -127, -116, 100, 70, 19, 75, 49, 43, -30, 82, 29, 98, -78, 11, 111, -45, -100, -97, 7, -87, 56, -35, 115, 38, -22, 52, 64, 14, -60, -6, -96, -108, 47, -28, 71, -94, -63, -83, 30, -128, 50, 0, -46, 7, 88, -67, -83, -99, -90, -109, -112, -30, -71, -79, -84, 60, 95, -88, -126, -51, 70, 91, -24, 86, 36, 16, 46, 24, -20, -106, -7, 121, -60, -73, -89, -27, 78, 69, 52, -16, -6, -99, 59, 113, -101, 110, -45, -73, 116, -49, 120, -79, 65, 10, 62, 98, -50, 41, -3, 119, -78, -71, 58, 75, -118, -84, -83, -120, -44, -123, -42, -18, -7, 89, 37, -110, -7, -39, -72, -41, -48, -52, -64, 72, -101, -55, -68, 84, -91, 15, 14, 72, 25, -90, -16, 11, 9, -39, 112, 75, 14, 61, 16, 65, -9, -77, 81, 15, -14, -58, -30, -78, 73, 4, -11, -80};
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
    msg.setTimeStamp(0.700073271215);
    msg.setSource(42408U);
    msg.setSourceEntity(103U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(119U);
    msg.sys_src.assign("PMZOQPWFNHFEEEYCRSAHDARZ");
    msg.sys_dst.assign("DPHUVJKOVLKSLVZLRBWUASJZSUIJJICXIOQXKWKLAVFNTDHEYXQMQXMCZCDFWWAPCTQMQDHMONPRFLVHJYOPGFJPRNAFBJZUNPQCTYDQEEYXHYTBEVXCUKPGICMRAYNOAWCGBGQSTSPMRZOZOTANZIYUN");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-62, -119, -77, 71, -64, 81, -115, 49, 56, 39, -128, -85, 11, 124, -17, -1, -124, -17, 89, -61, -103, 100, 54, 73, 116, -62, 51, -121, 1, -101, -77, -44, -37, 116, 25, -80, 13, 74, 44, -20, 37, -83, -79, -99, -100, 11, 69, -31, -106, -5, 116, -35, 122, 49, -86, -21, -36, 24, 10, 87, 34, -94, -125, 1, 78, -98, 23, -120, 56, -67, 108, 25, -123, 26, -10, 122, 1, 26, 34, 97, -105, 95, 92, 50, 95, -39, -29, 54, 111, -87, -89, -32, -51, 20, -110, -40, 121, 14, -47, -98, -98, 76, 2, 13, -33, -8, -97, -40, -119, -10, 91, 2, 40, 98, -52, -31, -8, -59, -67, -111, 104, -46, 9, -51, 39, 40, -81, -39, 119, 63, -32, 6, 52, -35, -50, 29, 106, 81, -60, -24, 59, 14, 107, -69, -51, -72, -48, -20, 49, -51, 103, -9, -7, 126, -10, 123, -121, -83, -113, 54, 13, 44, 111, -91, 1, -86, -52, -30, -25, -101, -128, -104, 18, -59, 113, -62, 4, -89, -9, -89, -93, 42, -94, 0, -13, 74, 2, 16, 121, -62, 16, -86, -5, 43, 15, -70, 79, -67, -92, 108, -122, 119, -94, -83};
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
    msg.setTimeStamp(0.391729165245);
    msg.setSource(8788U);
    msg.setSourceEntity(44U);
    msg.setDestination(41567U);
    msg.setDestinationEntity(31U);
    msg.sys_src.assign("PXAVYTQLHHPPKTUISSNCKYOVGGFNWQFZAYWCXDXQNHUXDMUMBYCMCMUWTIEHFMCUAJGRDKFUSOZPOBHHRJJMEBKEEPMPDYSFSGLZBDSUMIFZRDEEURKONEZVCCEXZDRAFRIBLHOTVCVJBVFTIJJPCYNJGRVYNOZWGZZVANFRFIVJLKIIQGTLAZUOLSKQXPTKEWDMAGGTAKXBAYNOQHRUB");
    msg.sys_dst.assign("KHUFBPTHYRFFGJQBELFKVHB");
    msg.flags = 1U;
    const char tmp_msg_0[] = {118, -55, 77, 122, -69, -88, 66, 99, -23, -128, 33, 107, 33, -118, 80, 21, 40, -45, 101, -49, 21, -62, 112, 45, 6, 31, -17, 49, 75, 47, -9, 48, -10, -37, -57, -45, 43, -43, 27, 51, -67, -108, 119, 58, 65, -128, -37, -117, -96, -103, -66, 126, -107, 101, -47, -11, 32, 111, 76, 89, 78, 91, -92, -63, -117, -124, 28, -47, 58, 104, -102, 65, 126, -90, 94, -16, -26, -103, -69, -80, 20, -64, -71, -106, -62, 112, -45, -86, -95, 54, 108, -117, -109, -84, 67, -55, 106, -56, -15, 35, 32, -61, 22, 72, 9, -112, 87};
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
    msg.setTimeStamp(0.309492885164);
    msg.setSource(22643U);
    msg.setSourceEntity(149U);
    msg.setDestination(55615U);
    msg.setDestinationEntity(205U);
    msg.seq = 44019U;
    msg.value = 241U;
    msg.error.assign("EGMURYUPNAXMJFXRISHPULBMCUEYEAOQKCOXVHDDFYXYBEZMNLXHHOICNTSVUFVMSOSZNYSTTQZLYONPSPFELKWCQNRWGWAMWNPYWZBGTEDIKCKVWJBILOFDLGABKYWZPEXABFRFKQORNGCJJHOAIQCYMMPTAAGDRZBSKFFZJJLMCSRGTVQEXBTKIJJBVL");

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
    msg.setTimeStamp(0.287597129965);
    msg.setSource(30950U);
    msg.setSourceEntity(225U);
    msg.setDestination(35754U);
    msg.setDestinationEntity(203U);
    msg.seq = 52330U;
    msg.value = 175U;
    msg.error.assign("VQEHWVIOTGAUJLDARAJUBQUSORQJGQXUKXFCWACDFNYJUYVCVBVYWXGPYFZGMRGNTAHFLBKTLEZYMQIOPFVNCHJEBUVCNRXBLKFDLJNBYHWEXESKRDSWDYGFKBIHOXRHXDITPZNZZKWASCAEPVSKTFPTKWEHIIEMDHLJJNIBQCGNKQOOIQDMAHJPIPCMZYZTPGRIDFLSTWLYMZXDVLVSC");

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
    msg.setTimeStamp(0.480700094513);
    msg.setSource(6921U);
    msg.setSourceEntity(1U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(216U);
    msg.seq = 32831U;
    msg.value = 3U;
    msg.error.assign("XBFKAOPVFMYLAMRWOQZESNHEUJSLAILMJYHXUSTVSZJTMLSCLWQRIHXOVCFKBMFXUNGJVRYPATDGTIWYCQTBLARJVJJBQYLCKOFEBZYEXNHVDUUDXZFAMGDWNRAOGLRCICIDHLZKXYOVZMHGNQXEFSPCPOIGSXYACPOBINQKTGCQKWTVIDFPDQAPGGYUWZJ");

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
    msg.setTimeStamp(0.437049440234);
    msg.setSource(54425U);
    msg.setSourceEntity(91U);
    msg.setDestination(18015U);
    msg.setDestinationEntity(63U);
    msg.seq = 23478U;
    msg.sys.assign("LNBQKMZNURZFORFDNWMGNCAFBQYMKHKGLNVXHVAE");
    msg.value = 0.387752998576;

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
    msg.setTimeStamp(0.594864760348);
    msg.setSource(54717U);
    msg.setSourceEntity(86U);
    msg.setDestination(19495U);
    msg.setDestinationEntity(8U);
    msg.seq = 43544U;
    msg.sys.assign("URJSZQXOYNIYEBKROVPULKZDEUUXQDAMIOKDEKRRSZBXFJYTHMKXRGQWMPXG");
    msg.value = 0.526343573131;

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
    msg.setTimeStamp(0.406952954855);
    msg.setSource(12889U);
    msg.setSourceEntity(112U);
    msg.setDestination(12617U);
    msg.setDestinationEntity(137U);
    msg.seq = 56643U;
    msg.sys.assign("HJIDUGDDBHAKGXOHAZQKXWCOQEOMNGQSOLFMQLRF");
    msg.value = 0.381138421071;

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
    msg.setTimeStamp(0.517779770376);
    msg.setSource(47307U);
    msg.setSourceEntity(226U);
    msg.setDestination(3662U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.137325945771);
    msg.setSource(12197U);
    msg.setSourceEntity(253U);
    msg.setDestination(32513U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.138648874707);
    msg.setSource(18830U);
    msg.setSourceEntity(80U);
    msg.setDestination(46720U);
    msg.setDestinationEntity(114U);

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
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.601770283369);
    msg.setSource(55560U);
    msg.setSourceEntity(230U);
    msg.setDestination(25716U);
    msg.setDestinationEntity(189U);
    msg.action = 209U;
    msg.lon_gain = 0.142245588914;
    msg.lat_gain = 0.43406102288;
    msg.bond_thick = 0.566522156815;
    msg.lead_gain = 0.851746665068;
    msg.deconfl_gain = 0.065425368331;
    msg.accel_switch_gain = 0.461415480293;
    msg.safe_dist = 0.534591131671;
    msg.deconflict_offset = 0.982393954068;
    msg.accel_safe_margin = 0.0232469768696;
    msg.accel_lim_x = 0.510635176366;

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
    msg.setTimeStamp(0.723987015696);
    msg.setSource(11330U);
    msg.setSourceEntity(241U);
    msg.setDestination(61109U);
    msg.setDestinationEntity(4U);
    msg.action = 125U;
    msg.lon_gain = 0.916028378282;
    msg.lat_gain = 0.474608448287;
    msg.bond_thick = 0.93219172023;
    msg.lead_gain = 0.297249880423;
    msg.deconfl_gain = 0.338227768887;
    msg.accel_switch_gain = 0.00129910055642;
    msg.safe_dist = 0.690462007055;
    msg.deconflict_offset = 0.668844298754;
    msg.accel_safe_margin = 0.645937995437;
    msg.accel_lim_x = 0.235859880936;

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
    msg.setTimeStamp(0.128527943564);
    msg.setSource(59938U);
    msg.setSourceEntity(85U);
    msg.setDestination(18870U);
    msg.setDestinationEntity(25U);
    msg.action = 40U;
    msg.lon_gain = 0.0648271478791;
    msg.lat_gain = 0.604821549218;
    msg.bond_thick = 0.373503130714;
    msg.lead_gain = 0.471351028493;
    msg.deconfl_gain = 0.0147008642637;
    msg.accel_switch_gain = 0.866421043639;
    msg.safe_dist = 0.892830592978;
    msg.deconflict_offset = 0.771207079373;
    msg.accel_safe_margin = 0.221222437959;
    msg.accel_lim_x = 0.716402876788;

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
    msg.setTimeStamp(0.321788062192);
    msg.setSource(860U);
    msg.setSourceEntity(225U);
    msg.setDestination(60089U);
    msg.setDestinationEntity(211U);
    msg.err_mean = 0.472745097416;
    msg.dist_min_abs = 0.788326309585;
    msg.dist_min_mean = 0.123937372143;
    msg.time = 0.0563877309895;

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
    msg.setTimeStamp(0.054315168663);
    msg.setSource(53183U);
    msg.setSourceEntity(245U);
    msg.setDestination(3094U);
    msg.setDestinationEntity(138U);
    msg.err_mean = 0.0289449807213;
    msg.dist_min_abs = 0.97018921566;
    msg.dist_min_mean = 0.259801691287;
    msg.time = 0.774843113604;

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
    msg.setTimeStamp(0.753462920326);
    msg.setSource(27638U);
    msg.setSourceEntity(136U);
    msg.setDestination(62008U);
    msg.setDestinationEntity(154U);
    msg.err_mean = 0.380450686954;
    msg.dist_min_abs = 0.440655023347;
    msg.dist_min_mean = 0.550300407493;
    msg.time = 0.70478415189;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.824263656373);
    msg.setSource(34822U);
    msg.setSourceEntity(208U);
    msg.setDestination(97U);
    msg.setDestinationEntity(95U);
    msg.uid = 241U;
    msg.frag_number = 3U;
    msg.num_frags = 14U;
    const char tmp_msg_0[] = {101, -107, 22, -89, 66, -60, 116, 97, -80, -41, 20, 105, -77, -38, 91, -95, 94, 47, -13, -73, -80, 57, -30, -60, 99, -57, -33, -17, 51, -90, -56, -35, -111, -19, 64, 26, 65, -70, 24, 19, -69, 44, -111, -20, 54, -94, 12, 54, -111, -107, -51, 68, -40, 36, -92, 38, 86, 106, -46, 97, 0, 40, 59, 77, -68, -59, 70, -41, -115, 100, -79, 36, -120, -114, 119, -73, -123, -5, -71, 92, -57, -88, -116, -35, 101, -41, -51, -118, -28, 41, -88, 5, -75, 80, 75, -14, -1, 74, 126, -72, 67, 31, -98, -81, -90, 91, 42, -49, -8, -89, -33, -112, 98, 36, -7, -12, 109, 46, -33, 83, 14, -65, 49, 14, 102, -121, 74, -102, -11, 125, -27, -127, -94, 26, 52, -63, 96, -101, 54, 21, 42, 77, 26, -80, 87, 33, 56, 54, 6, -19, -37, -67, 22, -24, 18, 7, -99, -108, 69, -100, 48, 109, -61, 118, -16, 39, -109, 117, -40, 49, -124, -12, 61, 106, -89, 105, -54, -70, 64, -20, -86, -72, -63, -102, -91, -76, -127, 103, 85, -73, 79, -26, -102, -13, -123, 61, 31};
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
    msg.setTimeStamp(0.09861298311);
    msg.setSource(50362U);
    msg.setSourceEntity(138U);
    msg.setDestination(40975U);
    msg.setDestinationEntity(48U);
    msg.uid = 127U;
    msg.frag_number = 188U;
    msg.num_frags = 114U;
    const char tmp_msg_0[] = {-36, 22, -63, 32, -95, 4, -49, 13, 44, 2, -38, -65, -26, 12, -48, 73, -102, -120, 61, -97, -13, 14, 47, -8, 31, -60, 34, -16, -20, -10, -36, 44, -55, -87, 37, -77, -78, 76, -61, -68, -48, 52, -86, 57, 30, 108, -88, -8, 105, -111, 98, -43, 1, -112, -95, 70, 82, -112, -26, 6, -88, 126, 102, -27, 18, -115, -22, 79, -27, 109, 92, -67, -116, -101, 5, -50, -38, -39, -80, 82, 33, -78, -80, -4, 120, -13, 94, -79, -109, 81, 77, -65, -90, 103, -93, -85, -88, 77, -12, 124, -98, -5, -21, -16, -73, -17, -3, -84, 13, 102, 102, -81, 49, -38, -39, -115, 33, 1, -94, 1, 124, 58, -2, -2, 102, 36, 29, 101, -42, 19, -19, 70, -28, -127, 0, -83, -8, 16, 16, 0, -54, -122, -86, 100, 105, 85, -1, 87, -128, -41, 62, -56, -39, -44, 85, -123, -101, 45, -58, -44, -89, -7, -13, -66, 23, -121, -64, -6, -3, -27, 85, -20, 42, -54, -61, 122, -95, 46, 7, -81, -15, 37, -44, -69, 33, 79, 88, -36, -97, 118, -111, 0, -90, -11, 85, 117, 53, 24, 105, 44, 4, 26, -127, 110, 64, 115, 47, -29, 31, -32, -97, 17, -37, 77, -59, 28, -62, 104, -100, 42, -117, -16, -38, 118, -126, 93, 71, -100, -68};
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
    msg.setTimeStamp(0.929149642318);
    msg.setSource(55884U);
    msg.setSourceEntity(112U);
    msg.setDestination(13091U);
    msg.setDestinationEntity(103U);
    msg.uid = 189U;
    msg.frag_number = 8U;
    msg.num_frags = 16U;
    const char tmp_msg_0[] = {88, -69, 90, 90, 18, -64, -74, 121, 15, -26, -82, -7, 56, 93, -65, 15, 29, -116, 84, 121, 113, -101, -56, 69, -57, -13, 92, -110, 2, 3, -120, -68, 39, 13, -87, 62, 107, 35, -96, 118, -64, 101, -88, -18, -96, -84, 74, 18, 55, -80, -112, 104, 116, -63, -46, -1, 77, 97, 76, -86, -110, -21, 82, 36, -45, -53, 39, 3, 77, 17, -19, 116, -79, -113, 77, -21, 40, 58, 111, -27, 80, -124, 34, 102, 56, 12, 85, 61, 17, -84, 107, 68, -28, -106, -82, 88, -84, 74, -113, -51, 89, -116, 8, 61, -80, 7, 71, 69, -69, -64, 120, 54, -15, -126, -16, 107, -36, 97, -45, 4, -90, 3, 58, 16, -127, 1, -90, 110, -9, 42, 33, 33, -83, 24, 45, -102, -106, -109, 57, -57, -87, -86, 52, 83, 33, 36, -54, -39, 12, 16, 106, 86, -112, 118, 86, 4, 105, -90, -85, -111, 110, -13, -74, -45, 101, -89, -108, 90, -24, 8, 58, 53, 42, -37, -55, -44, -61, 50, 117, -112, 99, 71, -59, -107, 61, -63, -2, -62, 34, -57, 106, -93, 75, -2, 20, 8, 82, 59, -98, 26, -9, 4, -114, 71, -25, -110, -37, 27, 89, 52, 59, -34, 12, -54, 79, 122, 40, -10, 54, -7, 42, 47, -35, -6, -96, 1, -14, 99, -120, 102, 100, -112, 19, -49, 3, -96};
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
    msg.setTimeStamp(0.639028916018);
    msg.setSource(58685U);
    msg.setSourceEntity(81U);
    msg.setDestination(54761U);
    msg.setDestinationEntity(66U);
    msg.content_type.assign("FYPWDBHJVREAUNEKWNGSFYFLYDBTFBPKJZEDGGLTHSBQLZOPHSLOLGAYNACSTCLKDBXCCHUCQTLOHRBNRUFQAIRTWMPBPSEFMUMJWQRIIGOMUMXSRANGFPKOVZISPVEWEZPDMYICHRKTESBCQTJAQNGQMQGNFXDX");
    const char tmp_msg_0[] = {115, 50, -84, 58, 78, -74, -5, -112, 26, 65, -39, 111, 94, 25, 43, -47, -87, 72, 119, 102, 60, 91, 123, -68, -99, -49, 45, -29, -12, 75, -90, 0, 105, 35, 43, 69, -31, -101, -31, -50, -61, -32, -124, 21, 67, 105, -95, 58, 102, 104, -82, -102, 61, -106, -31, -49, -84, -12, -34, 49, -83, 75, -19, -77, -12, 53, 8, 122, -44, -81, 123, 73, -126, 51, -49, 126, -13, 79, -53, -29, 41, -23, 74, 13, 80, 51, 76, 34, -38, 118, -108, -111, 17, 94, 49, -88, -101, 30, -13, -106, -49, -7, 84, -28, -40, 15, -37, 61, 125, -102, 0, 40, -48, 72, 59, -112, -20, 75, 58, -39, 28, 95, -91, -10, 58, 2, -46, -13, 18, 85, -55, -8, -27, 99, -49, -8, -57, -113, -39, -1, 8, 45, -86, 97, -35, 84, -8, -86, 114, -114, -113, -48, 42, -10, 109, -11, -103, 90, 88, 53, 30, 25, -99, 101, 102, 51, 64, -2, -14, -122, 40, 91, 108, -110, -85, 72, -113, -25, -30, -102, 69, 49, 77, 58, -126, 87, -70, 68, -1, -57, 109, 124, 33, 69, 19, -96, 95, 39, -57, -116, 123, 26, -62, -27, 8, -107, 125, 14, -75, 26, -53, 51, 126, 50, 121, 22, -1, 92, 111, -121, 40, -37, -120, -61, 29, -75, -6, -114, 24, -54, -97, 92, 48, -61, 111, 71, -31, 22, -2, -81, -17, 13};
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
    msg.setTimeStamp(0.399312073044);
    msg.setSource(50396U);
    msg.setSourceEntity(89U);
    msg.setDestination(3680U);
    msg.setDestinationEntity(144U);
    msg.content_type.assign("NWSJDIPQAHQWSLFVNNYDXGSMNDRPXBOZOBHIYCZWISHJOHJBQGZLHLLEFWOYLEDMFWABJRIBGIJSTCHQVWYUETKKVOQPGDTVDGQEXNIRXFCBTB");
    const char tmp_msg_0[] = {58, -112, -123, -12, -109, -12, 13, 97, -59, -28, -41, 106, 45, 43, 104, 126, 121, -119, -123, -10, 72, 121, 94, 75, -84, 51, 71, -48, 92, -116, 3, -109, 121, 16, 94, -33, -27, -14, -51, -13, -5, -61, 34, 23, -106, -106, 24, 72, 87, 48, -67, 65, -48, 123, 54, -82, 72, -30, 44, -31, 37, 2, 106, 28, -10, 72, -110, -16, -102, -90, -106, -82, -108, -43, 95, -63, 75, 41, -48, 117, -53, -25, -128, 78, 39, 40, 55, -37, -115, 52, 22, -71, -20, 52, -56, -92, -39, 6, -118, 71, -59, -126, 1, -92, 122, 21, -82, -5, 75, -45, -69, -95, 109, 124, -94, 60, -71, -79, -64, -127, -5, 37, -117, 114, -11, 68, -122, -98, -94, -6, 10, 78, 14, -121, -64};
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
    msg.setTimeStamp(0.455387774645);
    msg.setSource(46582U);
    msg.setSourceEntity(80U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("DCCXXOYNEWXYYDXTUKRURSFUPZOFTRAFHYVGVLTIHOCBZPBLDVLOWIGGZKBVZUDARNHUPXETZVRFXEOQYOFDRIQTALDFFVYSQGMMKTZDUJYBJDWXSXWCQHYEIPFOTGGMNURHCAWEBTPZJNSNHCVEOTWMLZJWHYIKHSSHGJJVNHPJRGBWMXMYDKZNQSUOUFMQLIQTJIEEAPEIIJPCAPQRAGBXINPABUVACWNQJVEMKLSNMSWKZBBFL");
    const char tmp_msg_0[] = {-77, -28, 83, 103, 10, 70, -48, -15, 62, 30, 94, 84, 90, 11, -121, 43, -123, -20, 73, 49, -94, 58, 71, -73, -46, 21, 74, -82, -73, -75, 112, 112, -124, 28, 124, -75, -114, 42, -73, 58, 104, 109, -77, -14, 43, -3, 118, -53, 109, 104, 95, 118, 54, -94, -16, 6, -16, -8, 58, -34, 59, -107, 15, 84, 80, 37, 50, -98, 47, 76, -42, 119, -119, -30, 40, -18, -71, -92, -74, 37, 72, 33, -124, -128, 80, 103, 72, 47, -20, -108, -94, 116, 26, -120, 66, -93, 38, -93, 103, -24, -124, 66, 94, -92, -110, -92, 44, -58, -122, -122, -15, 34, -61, -128, 35, 66, -124, 30, -83, -39, 35, 66, -19, 117, -19, -12, 23, -17, 67, -39, 24, -50, -19, -71, -128, -59, 84, -34, 74, -10, -114, 36, 58, 52, 51, -84, 100, -72, 110, 119, -96, 101, 63, -17, 115, -111, 11, -16, 31, 49, 107, 105, -115, -57, 18, 10, -93, -86, 106, -12, -42, -68, 98, 30, 52, 23, -38, 45, 68, 102, 40, 45, 79, -42, 75, -19, 75, -10, -4, 25, 104, -94, 126, 91, 24, 1, 51, 41, -14, -79, 48, 25, 26, 85, -60, -81, -3, -40, 42, -128, 24, -51, -35, -71, -126, -64, 16, 79, 62, 9, -83, -89, -111, 54, -68, 107, -126, 57, 71, 79, -44, 66};
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
    msg.setTimeStamp(0.805890295228);
    msg.setSource(46281U);
    msg.setSourceEntity(45U);
    msg.setDestination(57284U);
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
    msg.setTimeStamp(0.233843289307);
    msg.setSource(55623U);
    msg.setSourceEntity(146U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.46967393232);
    msg.setSource(3784U);
    msg.setSourceEntity(82U);
    msg.setDestination(36341U);
    msg.setDestinationEntity(204U);

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
