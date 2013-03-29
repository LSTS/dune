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
    msg.setTimeStamp(0.7577454750831919);
    msg.setSource(26999U);
    msg.setSourceEntity(38U);
    msg.setDestination(11576U);
    msg.setDestinationEntity(72U);
    msg.state = 29U;
    msg.flags = 131U;
    msg.description.assign("YMNPVPHMQRDRYMXLKEEUSDNBQNJX");

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
    msg.setTimeStamp(0.5645338949580615);
    msg.setSource(29371U);
    msg.setSourceEntity(94U);
    msg.setDestination(35910U);
    msg.setDestinationEntity(87U);
    msg.state = 189U;
    msg.flags = 6U;
    msg.description.assign("QCBHBOGBPRCUZ");

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
    msg.setTimeStamp(0.36380086700596403);
    msg.setSource(23064U);
    msg.setSourceEntity(187U);
    msg.setDestination(8998U);
    msg.setDestinationEntity(198U);
    msg.state = 90U;
    msg.flags = 158U;
    msg.description.assign("LOWTZKTHDMCMUDSQZJACGGBPYXLTYXWKHGRGAVUBYRBQURYHTDCBHRHIIUGYVCBWUBBVRLHDFMPLMEJSAOFRSZVJIOXSMXLCPJNMRTKVCXMFNSFVMFZHOSXZNLFQEWKPWPVBPCUDZZEUTNEHZEDPNTAOKZDWKQQTKGGSKXJNPMBAIFJWRYNHXYQIQQILGDJRNYQNDHIYDBGYX");

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
    msg.setTimeStamp(0.9050813278798168);
    msg.setSource(8873U);
    msg.setSourceEntity(89U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.6529061311609817);
    msg.setSource(56737U);
    msg.setSourceEntity(30U);
    msg.setDestination(12589U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.13405181141007694);
    msg.setSource(4137U);
    msg.setSourceEntity(58U);
    msg.setDestination(28848U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.9809331211693438);
    msg.setSource(4252U);
    msg.setSourceEntity(58U);
    msg.setDestination(34999U);
    msg.setDestinationEntity(101U);
    msg.id = 226U;
    msg.label.assign("RFTPIJHIKDSXTSIIPCHYELRUWYVUTOEQEGDBIIPLARBGTWMVRTOEMHTATXRLTSCBPUGMEJUBQFNHCYTQKHHNFXLJKNAXFMFRUZEOEVKVGZKWVPNYNPLPRQXGQNWLAFDKKDGBPFEYXDASTBOXOWXLASMUDWWILDPGZXHJCJCOFEGLYJYLRKZOVCFNGKOZJGUQZMSPMDOZVMAIQVENCQJMIBRCSSCKBWZQZCVJAY");
    msg.component.assign("VTWLPCQIZOOVSUOAVEPGFBPJXMGXRSTNRAXRTIAJYCEBFMCVZHLILWOUSMXFJHSIAZUZCQGLREM");
    msg.act_time = 25265U;
    msg.deact_time = 41988U;

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
    msg.setTimeStamp(0.15549376901101208);
    msg.setSource(6226U);
    msg.setSourceEntity(56U);
    msg.setDestination(16952U);
    msg.setDestinationEntity(135U);
    msg.id = 48U;
    msg.label.assign("LIHRNBSHZPXOVBBUEVKZDAGICHXDEZMGACRXAUJWPKKNQOVLHPSSUPTWITKLECXHWYKFQJDELQTYJVGLFJQWZHRCNEORMRFCGWODDFJSGHBIVXKAOPWDZTSOWFBVNSLTCTTPYMDMZXRYOJMBHOOCFQSUBKPJQIVGJKRGFUEVNDVAQKT");
    msg.component.assign("DRLTEKKBAJIMMKDZWVYHSJGEBFFYEZMSLOSLPRKTUXIGXVXVAWUEOJNKYHZGYUGPXMCZJYWORJQJRLPKYATFWOODRLOFLSOHGQBVDMMNOBNVUPNXAEFJRBCFQMZLZCBIUFAXCTOGRUTHWVVGIHAOQGEWMJFNYBKTNCNVIICAFHDYCSKPIPNHANYIEEGVZSQEDKQXKPJWZEBAISBDHYXMRZVQDJXWUTUDSRPTH");
    msg.act_time = 29201U;
    msg.deact_time = 24715U;

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
    msg.setTimeStamp(0.33531611808101325);
    msg.setSource(35213U);
    msg.setSourceEntity(83U);
    msg.setDestination(49128U);
    msg.setDestinationEntity(111U);
    msg.id = 18U;
    msg.label.assign("RLOQCWIGJTGCVEPBZEWH");
    msg.component.assign("UHXLERESWFSRDJGSVZGRBLJSAJCQEQYQIKANOXKKXYFMUZZICMRRTOKVOMBALXDPKPUUFUEYTSNYOBQBPWFDXHIINGVKXXNDFTNUCRKPJZFZDHQEYWUPPOAVBJQPTJGTZGUDEJMDVNJPHIGMUWCCYWCSFMYTNMKXYEHZVTNVBDZWWHLOLVZQGLSCADHQTQLTFOOHGRGBCBFKEW");
    msg.act_time = 21517U;
    msg.deact_time = 50928U;

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
    msg.setTimeStamp(0.5369031433030784);
    msg.setSource(40296U);
    msg.setSourceEntity(213U);
    msg.setDestination(60496U);
    msg.setDestinationEntity(187U);
    msg.id = 48U;

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
    msg.setTimeStamp(0.18380827455614823);
    msg.setSource(20097U);
    msg.setSourceEntity(101U);
    msg.setDestination(60927U);
    msg.setDestinationEntity(85U);
    msg.id = 84U;

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
    msg.setTimeStamp(0.5315149433895588);
    msg.setSource(212U);
    msg.setSourceEntity(234U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(39U);
    msg.id = 148U;

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
    msg.setTimeStamp(0.4698728790552722);
    msg.setSource(13923U);
    msg.setSourceEntity(242U);
    msg.setDestination(27327U);
    msg.setDestinationEntity(72U);
    msg.op = 243U;
    msg.list.assign("DUBXOMKEEUBFMLOEPBZRNPEBBPAARTOYLZUBWVXQVTSZKSWUZGZTMDJKOIKFEXNRVSVPOTZZUDVKCACDEHINZDGXS");

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
    msg.setTimeStamp(0.8666171874428709);
    msg.setSource(6500U);
    msg.setSourceEntity(51U);
    msg.setDestination(39323U);
    msg.setDestinationEntity(74U);
    msg.op = 182U;
    msg.list.assign("EBQOZVWCIFJYJKHXTBRFJSQPAEDKLAMMCLBDLWCNTRHIOIEZFMQBZAVFVXUXNRSPPWARYNLURHXYGZRTJDHETKEJAMKDGGARHLNYQWVIUWWIYIWXDJDKUMZVCNNXZYBPEGGDMBKCENECYCIXHOOXPPGDAKFCJYATHOGUIVHHZZYQLNTUTVDUMPOQFELAPQQVVIZSMAJRKGB");

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
    msg.setTimeStamp(0.18620801520970653);
    msg.setSource(30934U);
    msg.setSourceEntity(75U);
    msg.setDestination(26432U);
    msg.setDestinationEntity(149U);
    msg.op = 27U;
    msg.list.assign("SLUQBDFYZFSGAFXDWXTZZPAWFHGWTXKMKDIFGYB");

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
    msg.setTimeStamp(0.07091294220252731);
    msg.setSource(56609U);
    msg.setSourceEntity(177U);
    msg.setDestination(21663U);
    msg.setDestinationEntity(116U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.24709212559549676);
    msg.setSource(14020U);
    msg.setSourceEntity(181U);
    msg.setDestination(63137U);
    msg.setDestinationEntity(26U);
    msg.op = 134U;

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
    msg.setTimeStamp(0.5519895669664747);
    msg.setSource(64159U);
    msg.setSourceEntity(65U);
    msg.setDestination(29710U);
    msg.setDestinationEntity(202U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.9896143995963982);
    msg.setSource(25702U);
    msg.setSourceEntity(92U);
    msg.setDestination(19921U);
    msg.setDestinationEntity(79U);
    msg.value = 174U;

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
    msg.setTimeStamp(0.06925011342765353);
    msg.setSource(39144U);
    msg.setSourceEntity(139U);
    msg.setDestination(32796U);
    msg.setDestinationEntity(171U);
    msg.value = 17U;

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
    msg.setTimeStamp(0.5574546599620352);
    msg.setSource(14687U);
    msg.setSourceEntity(84U);
    msg.setDestination(15940U);
    msg.setDestinationEntity(216U);
    msg.value = 225U;

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
    msg.setTimeStamp(0.8972787113499522);
    msg.setSource(13701U);
    msg.setSourceEntity(88U);
    msg.setDestination(38928U);
    msg.setDestinationEntity(12U);
    msg.consumer.assign("VQTGSGIKROVSHJNYIKXYEMFAZWBHFGJLSPLUDEBZYYCSURKXUELZNXEBVDWSYZLSHVRPTQAATCBCTRTPWHJMWBY");
    msg.message_id = 48321U;

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
    msg.setTimeStamp(0.6804958949641029);
    msg.setSource(1051U);
    msg.setSourceEntity(43U);
    msg.setDestination(13822U);
    msg.setDestinationEntity(28U);
    msg.consumer.assign("DPSJSEHQCZWVXBHCRQYLSKEOKXEARZAGVGQWEWYEDYDLYIHUOJVJZZTMJUTASELWWCVGXGIWLDSROBPJQHPNNFDRZJWZNFQONXMGFESVFYOHMAQUHJMBRXCUIANMCDUPTPFLMZLOKYVYIHBDZZKYCAWPRNQKCUXUNMFEKMEMINDTKQDKYBCQWERSSXJGGRXVVSTTAGUORMXBGBTR");
    msg.message_id = 45565U;

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
    msg.setTimeStamp(0.43394190795710463);
    msg.setSource(62827U);
    msg.setSourceEntity(13U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(84U);
    msg.consumer.assign("RRXBSUWIPQTBSABIJWMVXUBZWNPBVVFGYHEQPABVKJSFQJOGECCXUELMHQPUBNDXIUMHTZXSEEYDTAOUHNSBGUFJKTMORGWPWAMTLNZUHLJTFYPSIPMNLSWZANKGCIJLYDTENRXALWWZGIRYHKLDGAWSTUVVJZDVRYHBESGYIZFCQRIDERMUVOXMKLLFKCCAVXYAQDIOXYQZDZPQQTDCJTKSFRJNMFKWEOLHCBHDCJPKPFG");
    msg.message_id = 39523U;

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
    msg.setTimeStamp(0.9521309458964058);
    msg.setSource(58739U);
    msg.setSourceEntity(9U);
    msg.setDestination(60531U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.0778933513628165);
    msg.setSource(50266U);
    msg.setSourceEntity(91U);
    msg.setDestination(55607U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.6232187121578848);
    msg.setSource(39164U);
    msg.setSourceEntity(141U);
    msg.setDestination(11736U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.4429039328257983);
    msg.setSource(65207U);
    msg.setSourceEntity(9U);
    msg.setDestination(44926U);
    msg.setDestinationEntity(120U);
    msg.section.assign("PSIUEQUPFDEVPJMOKGVZGWTOZKKZODEAFDYWXGKIZAFJXVGJPQNIABVDUKJBBPEUMDYIPOVRSGYNDLTYEHCXRLBEUTCCAWTNBJTXRMICZBIRPTZSUYTHCXRFVXWLGLSLQNDTHKOOJQWNPYFMWSEPAFOZJKLQQBAVYWWMGYYHM");
    msg.param.assign("DJPFJYWCTJJPKPYHLNKROFMUZQNLXUVMHOSGFQNFUCBPYSESFCDRINKIPFAKGBLCEBQITAOZDYGVIAYJRYKRVXCGYLEZZMBIXONAPLQOWBXWPWZIRAGYSDHDTMTXWRCTHSCBJTQKTQSVEFPJXDBOAGVEIBXKUIVUDXXM");
    msg.value.assign("ZLGETJNSTRFSWKOOLSXFOPDAXCBIRSEJROHPJWAISBSKHDIKQGAAAHHUSVEQAURCKHJDANNVFBPRERIMBBDQQYVLBTJSLJOVLWWQGYAVMZUPKZWGTRRTAHWMPTIUCDVVNYGPYDOECCFTOKPZDUHEHKGXBHKCQIIZVFQUBUIYMGZXOXPKHIMJNDTWWCAZXLFEFWYLM");

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
    msg.setTimeStamp(0.29124769293048847);
    msg.setSource(63506U);
    msg.setSourceEntity(251U);
    msg.setDestination(2016U);
    msg.setDestinationEntity(205U);
    msg.section.assign("SDFOWKKDQMFFPSUGCLPOGGHBDLPPZSMHERCKQYNPPPJJHLDJXRMKXNBATLI");
    msg.param.assign("QWDPOFRXTKYCDYWJKLRNTSNGGUUJHQVNFRTHRBQJXIDVVGQIZIZUVDQYXVZHFWMYGDWEAQXIDGBITODKEDSHUMNU");
    msg.value.assign("ZNLYMSKVPINSXLDKLTCBJZHNDHGWGIMVSKXTUOGQJFSCODLVYTTKUNIOEMMRWWKOIAHZLZSLCWDKSBXTYDB");

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
    msg.setTimeStamp(0.6485136266092929);
    msg.setSource(51684U);
    msg.setSourceEntity(217U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(165U);
    msg.section.assign("UWANNLVOAPYJMCWGCLADFMFZSPFDGLOVDZJYVHEGZAXXBGZKHCCXPS");
    msg.param.assign("YFBCCNWPAXIKZTGGIPZYLLKUZKALJRZRCBPCUZAVHRWBMOUZONHFIXFLFRWZISCNAPXUYWRWJAJDJHMYOHBIJFTDJKTLCODOSDYWRUAXVVPQHHQEZUCXSDUWENEBXKCUFVHFJWAFFSKTOMQQQAIRBTURAIONYZAWTBBHRSEDP");
    msg.value.assign("XCFXPYDOMCMKJFYCXPQYJOFQFVROXKXMZBNWGYSZCWWBGOELQOVDEHQQKOPLVNUXZOZMWFGJTAQVGNKUYVGPJUCCEHSHKRJJLEYNTIKFEZAB");

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
    msg.setTimeStamp(0.5434635994341372);
    msg.setSource(665U);
    msg.setSourceEntity(168U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(9U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.7102552560480457);
    msg.setSource(5525U);
    msg.setSourceEntity(102U);
    msg.setDestination(21334U);
    msg.setDestinationEntity(146U);
    msg.op = 17U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("MLCAWBDFWZHQDIPDOETPEIVGXQXHTDUAMRZZJAXCMGGOFBZGYIPXVPWKQRTIJFZNFSKPKDYJQUENYPWNGUSKBJHZLVXHFCHNEKHGSBBIZYQLQCCXEL");
    tmp_msg_0.param.assign("YUBEBZLCZIVGNWTSSGKLHQJSWVFHWNCGWZPLEVQEDTCEKWYXROPWYZHPOOFROKNMBWZZHTQCUWURXHEDRVZGVBMRPAGEDAIBQGEFATFNXDLQHMSOGTSIJQVTJPOIPICUHCYFUKKAJLZELDBJHFJPQXRRTRN");
    tmp_msg_0.value.assign("ZKKCWWPHUDXEWKBVTUGWSOWBOORSRPXQHPCRFNLIDIYAWJCHXFWFUPIMQNRZJEDZZ");
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
    msg.setTimeStamp(0.006667716280732372);
    msg.setSource(35140U);
    msg.setSourceEntity(59U);
    msg.setDestination(38482U);
    msg.setDestinationEntity(35U);
    msg.op = 91U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("WVBEBYPGFHSLMIFKDVRIVFZAKXAFNQLIZICXJLTTPIIGMTFHKRTVCNLGUIYMACEKHXVXYXTHZPDNEBGNKTCLMVMEANVRGBXWOZHHPHEBPGQBORUACFXZQRJJUZPSCWODOWGEFJLDWBY");
    tmp_msg_0.param.assign("LXPDQTIZSTZUDGVWHHCHGXRMYDVYVFRQVWSMFEQIYLRSXTWJYQBCUJNVZAGVPIUENSSQFDAUZJWRUXKKNILMJJPGDWOOCTRFNVDFAIJESEBPOH");
    tmp_msg_0.value.assign("HZGERTKQLXHXEATOLQRWBRLMWUQFBBZLFGVKUSYJPRVKOZFLJULKHXEVDLFPWJILYEJJAPPGKVITUWYADPMYKNCXCSQSDPZNHMCRPSEOMVASZEFMZTBHTMCCIAQFIJMQGIJHQLNZJQEUFGDWODVXKYXSGQBMCBANSBGWUKZHEDPMILNINFBCJPCFGTJUTNAD");
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
    msg.setTimeStamp(0.09147953160981337);
    msg.setSource(16295U);
    msg.setSourceEntity(239U);
    msg.setDestination(15162U);
    msg.setDestinationEntity(156U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.8170717248605894);
    msg.setSource(32141U);
    msg.setSourceEntity(57U);
    msg.setDestination(26567U);
    msg.setDestinationEntity(33U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.2887481544519931);
    msg.setSource(60566U);
    msg.setSourceEntity(108U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(147U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.9455619084764082);
    msg.setSource(62223U);
    msg.setSourceEntity(157U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(249U);
    msg.total_steps = 33U;
    msg.step_number = 154U;
    msg.step.assign("ODEYDYAPLHCILROZKFFZMMBDWAIBPLESZDRVOKNUAOIMMOHIPQMCRUWQINRFCNLBFFDENTTZWSCSQCPHBEQVSCEGSMYHGQAHHQGKIYFDXJGXWIKNLOKCQFWZWKTSAPNYBBWTAQNBGT");
    msg.flags = 138U;

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
    msg.setTimeStamp(0.13402047088949642);
    msg.setSource(7978U);
    msg.setSourceEntity(253U);
    msg.setDestination(60126U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 209U;
    msg.step_number = 13U;
    msg.step.assign("QBJNSXRCSTDKLBGMAJFXGVASYPROFPHDCDEHYCDYOVEE");
    msg.flags = 100U;

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
    msg.setTimeStamp(0.14593028814155196);
    msg.setSource(25597U);
    msg.setSourceEntity(132U);
    msg.setDestination(54340U);
    msg.setDestinationEntity(0U);
    msg.total_steps = 47U;
    msg.step_number = 139U;
    msg.step.assign("APEAZVXNVYUWLBXZGKOUAHYVVMMAIQJGOBMPUFPNPJHIRRADQGCJXGDQ");
    msg.flags = 248U;

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
    msg.setTimeStamp(0.45068788168160356);
    msg.setSource(43615U);
    msg.setSourceEntity(198U);
    msg.setDestination(64116U);
    msg.setDestinationEntity(177U);
    msg.state = 118U;
    msg.error.assign("CZAVUVNWALBWTZNGKQGRVSTRSOVXHBKYUCEIEQNXKPEJPCJTVFWURSUDSEMKBJBLOHNUHTQGPWDTXFLNDMMUQYKYSSDRKIVOGCNDXLPVSNWNPGOLMMAHFHYHRHFAIJRZIBJEQ");

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
    msg.setTimeStamp(0.15163267898484178);
    msg.setSource(31507U);
    msg.setSourceEntity(48U);
    msg.setDestination(35834U);
    msg.setDestinationEntity(82U);
    msg.state = 77U;
    msg.error.assign("YNKGJICLTTZILVEFFKQSOHTFIXKMEXVIODQRWGXRBATNARGIQEKMIKXBRG");

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
    msg.setTimeStamp(0.870095929208559);
    msg.setSource(49896U);
    msg.setSourceEntity(102U);
    msg.setDestination(40003U);
    msg.setDestinationEntity(40U);
    msg.state = 165U;
    msg.error.assign("BYLOZUCOBBFCQQBNURHXISFRMFXKEITBTLHURAEYHRXJGUWXTHMDZETJDHJDAQOKJRPGKSWEFVKNBLVWHIMTALQAQNFZJIZRNPWXCJTSUAYZOIWUCVQAHNJLQGMPYKLPWTMTVRAPSTXISVZSERJGPZWKNYSVGJDGSVYDQIVN");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.589242745971705);
    msg.setSource(61148U);
    msg.setSourceEntity(63U);
    msg.setDestination(40766U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.19756288250274046;
    msg.lon = 0.006937012358389505;
    msg.height = 0.01545519706006071;
    msg.x = 0.2813813278039119;
    msg.y = 0.06902249926533743;
    msg.z = 0.2710139692882657;
    msg.phi = 0.768654474724664;
    msg.theta = 0.6716621880271507;
    msg.psi = 0.780192528698238;
    msg.u = 0.6070458914598544;
    msg.v = 0.29239703904490066;
    msg.w = 0.2957531555396551;
    msg.p = 0.10615717250501655;
    msg.q = 0.7184481069622157;
    msg.r = 0.6902637049284569;
    msg.svx = 0.4744115739363646;
    msg.svy = 0.968904419380989;
    msg.svz = 0.3545360449200974;

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
    msg.setTimeStamp(0.7699995973870807);
    msg.setSource(4599U);
    msg.setSourceEntity(202U);
    msg.setDestination(60006U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.30820312552686013;
    msg.lon = 0.6307286385517987;
    msg.height = 0.6886717376546123;
    msg.x = 0.6931337088632656;
    msg.y = 0.7100028619341578;
    msg.z = 0.1877648481262204;
    msg.phi = 0.5843726948295909;
    msg.theta = 0.43312149476033346;
    msg.psi = 0.14295964601893463;
    msg.u = 0.9889783984228574;
    msg.v = 0.6824867445007059;
    msg.w = 0.5370427082512529;
    msg.p = 0.9978098262966645;
    msg.q = 0.9488786155795348;
    msg.r = 0.10398840246230345;
    msg.svx = 0.06826851687122992;
    msg.svy = 0.8322845652439583;
    msg.svz = 0.5052672250526464;

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
    msg.setTimeStamp(0.15807445491508176);
    msg.setSource(20462U);
    msg.setSourceEntity(157U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.39452078178940686;
    msg.lon = 0.04036858537418375;
    msg.height = 0.3238282723639362;
    msg.x = 0.2801855415829104;
    msg.y = 0.05023515394602995;
    msg.z = 0.8977251213377434;
    msg.phi = 0.3000789431628702;
    msg.theta = 0.6956530284366993;
    msg.psi = 0.7637476972926011;
    msg.u = 0.977088621948344;
    msg.v = 0.09595071498100416;
    msg.w = 0.32645064997067963;
    msg.p = 0.24933652097248626;
    msg.q = 0.9414004896044302;
    msg.r = 0.8963198931552423;
    msg.svx = 0.5848408625182766;
    msg.svy = 0.269236493660133;
    msg.svz = 0.5380345046399325;

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
    msg.setTimeStamp(0.494875020284786);
    msg.setSource(59246U);
    msg.setSourceEntity(109U);
    msg.setDestination(40335U);
    msg.setDestinationEntity(174U);
    msg.op = 133U;
    msg.entities.assign("DHXRKQXTJZLZBMSOAYIEMLQLFJGMNWONALBTHASEWOYMGBYEZRTCWLLCYLVNMVTAYEOCJUMCRJAWBTEIYJSHVNVHSHFNBBULWMWNNJGOCZQUIBTXPLFEBZPTOQSXWHQIPXGVKGUZRYVHQKEPTUJVIWTIIUVFVHMSDDHXKGQXXYRHFSPAYEKIDGGOODJCFSTDXNFDOIZFUKSPUKZKRW");

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
    msg.setTimeStamp(0.2696832263148835);
    msg.setSource(25489U);
    msg.setSourceEntity(174U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(42U);
    msg.op = 185U;
    msg.entities.assign("DOFUNZMMBSYIQTNWEID");

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
    msg.setTimeStamp(0.3674003847870909);
    msg.setSource(10420U);
    msg.setSourceEntity(111U);
    msg.setDestination(7259U);
    msg.setDestinationEntity(151U);
    msg.op = 194U;
    msg.entities.assign("ZOHBAWCILDGDPSKLMRFSEIOWQUEZZLRYMRSEUGQYZQLPOXVBNQYZUHI");

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
    msg.setTimeStamp(0.8790364843915961);
    msg.setSource(40768U);
    msg.setSourceEntity(140U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(220U);
    msg.type = 142U;
    msg.speed = 32837U;
    const char tmp_msg_0[] = {58, 121, 82, 6, 89, 99, 32, -75, -94, 32, 37, 20, 67, -1};
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
    msg.setTimeStamp(0.7780070938937145);
    msg.setSource(30678U);
    msg.setSourceEntity(199U);
    msg.setDestination(44140U);
    msg.setDestinationEntity(186U);
    msg.type = 61U;
    msg.speed = 38534U;
    const char tmp_msg_0[] = {-19, -84, -81, 85, 113, 71, -100, 12, -60, -87, -8, 119, -125, -2, -108, -18, 114, 27, -1, -112, 83, -102, -22, -10, 101, -1, -65, 85, -6, -61, -62, -10, -85, 26, -42, 122, -4, -39, -41, 79, -3, 93, -10, -67, 59, 34, 71, -116, 10, -25, -87, -107, -39, 111, 0, 108, 13, -66, -69, 79, 113, -3, -41, 79, -94, -83, -37, 12, 116, 102, 105, -128, 22, 87, -58, 120, -48, 109, 30, -79, 109, -127, -5, 95, -57, -56, -61, -63, -83, -92, -95, 13, 116, 126, -9, 75, 61, -24, 87, 79, 52, 123, 60, -81, -85, 48, -128, 43, -92, 5, -105, 124, -102, -69, -32, -46, -40, -103, -27, 6, -13, -76, 113, 44, -35, 57, 43, -97, 91, -74, 15, -8, 120, 6, 117, 33, 27, 13, -25, 39, 77, 112, -26, 69, 9, 45, 64, 54, -13, -98, 24, 62, -50, 1, 86, -80, 88, -120, -99, 49, 59, -74, 73, 33, -61, 88, 25, -46, 122, 24, 93, 86};
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
    msg.setTimeStamp(0.9751737672624662);
    msg.setSource(33579U);
    msg.setSourceEntity(133U);
    msg.setDestination(53625U);
    msg.setDestinationEntity(47U);
    msg.type = 18U;
    msg.speed = 60668U;
    const char tmp_msg_0[] = {70, -20, -122, -54, -17, 50, 36, 27, 67, -67, -128, -126, 112, 71, 105, 27, -21, 52, 63, 67, 70, 40, -118, -96, 70, 62, -106, 78, -127, -44, 43, 6, -105, 9, -81, 111, -109, 120, 33, -47, 109, -127, -8, 30, -31, -116, -55, 37, -62, -19, -46, -114, 117, -109, 82, 24, 13, -20, 46, -90, -7, -82, 6, 56, 68, 103, -49, 51, 69, -43, -114, -28, 106, 80, -57, 1, -22, 32, 71, -121, -116, -97, -110, -106, -56, 100, -89, -15, 55, 36, -5, 2, 31, 107, -15, -16, 53, 33, -110, 69, 40, -95, -6, 95, -123, -118, -103, 52, -49, -53, 41, -43, 69, -87, -39, 116, -52, -21, -73, -33, -80, -97, -63, -98, 13, -108, 28, -119, -99, 69, 46, -66, 98, -42, -87, 110, 5, -79, -103, 0, 95, -111, -123, 70, -21, -82, 51, -21, 92, 5, -51, -45, -109, 27, 19, -79, 88, 100, -113, -20, -98, 110, -62, 64, -58, -114, -127, 112, -75, -90, 20, -17, -128, 115, -18, 80, -63, 21, -86, -72, 112, 8, 19, -110, -18, 118, 31, 80, -25, 97, 73, -13, -26, -12, 105, -35, -52, -50, 119, -126, -36, -67, -87, 114, -101, 97, -92, 102, -126};
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
    msg.setTimeStamp(0.3619159620358836);
    msg.setSource(20590U);
    msg.setSourceEntity(240U);
    msg.setDestination(9041U);
    msg.setDestinationEntity(177U);
    msg.available = 739582480U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.535641071180112);
    msg.setSource(15570U);
    msg.setSourceEntity(171U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(171U);
    msg.available = 2917465136U;
    msg.value = 130U;

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
    msg.setTimeStamp(0.8774436542599783);
    msg.setSource(32280U);
    msg.setSourceEntity(65U);
    msg.setDestination(16533U);
    msg.setDestinationEntity(223U);
    msg.available = 3175709868U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.6102339207514317);
    msg.setSource(52420U);
    msg.setSourceEntity(77U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(18U);
    msg.op = 163U;
    msg.snapshot.assign("YJGFUETYTMWJLYMPPKCRDDAPAZRTPKOJDSCZPLPJFHEEFFSPOELBOBUNEQLWIUVDNEFYXDIMWCBXXLOWNIENKNBNDOWZDMNXRFJLMMJEXTOGXMOKQJBAYCQNVCKVGCXWKIKZA");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 4U;
    tmp_msg_0.mnames.assign("BEAZPWOECZZDCXJJAMBVANTKFTYGZFBVMZEIIQMJWYMBEAYPRIZIPJBSSWDMJN");
    tmp_msg_0.ecount = 58U;
    tmp_msg_0.enames.assign("HMOEGQQDYECRSLHPFDKVAZMOJDKVRFQIMHIVSJSFRSESOAHLXIUZTUYAQJMJKQRZWMNBGKHQEKEJZJTYTCUMAXMOILVBUBEWAIWWOPRGIABNHCCIVYVKWZRUAABIWLXCTNCFKMEYTJZWEGDQJJCUCUTXJXZADPKZNZQTSGDOOHWMUKFR");
    tmp_msg_0.ccount = 75U;
    tmp_msg_0.cnames.assign("KIZWLOYKEDOTZBQJVOJJIVCYDLVHSQXCKABWQNWKIPIDMPFRVFKXNRTZCLEUEGAYBTSRFQTJQHCNZPFFYCDARYXXMSEHUGZPWXFTETVOXIWJPHIXOEIHOHBUUVOPDSNUODGIHHZYGMCNGQHRLOYGPACMQINPDKACASLSRDMAZSFMPBLBYTVWHNTAAXKJRGENIVZBQSBNZEGWLMJERDUVSGQWOJC");
    tmp_msg_0.last_error.assign("UAHVIMAJGALXUAETPMQZQZVCXOMPJPVWHSRNPKUUFLFRTBCOLIDKYVXIUENZTMTJZCGLFIEWB");
    tmp_msg_0.last_error_time = 0.01573431637829603;
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
    msg.setTimeStamp(0.00286083453661945);
    msg.setSource(7148U);
    msg.setSourceEntity(10U);
    msg.setDestination(58689U);
    msg.setDestinationEntity(18U);
    msg.op = 251U;
    msg.snapshot.assign("TXOSTLVPFVDKABTRPFGGTBIIWVUGZDUFHYJFRXHQHXNSIEEWQYJRQBECGSFOYRJOPOKMXISUFTCEZLXQNGYYFNSZVBLDJWDOQVZKNYVRUNMCKPZLYXHWMQRLEZGQZATDEFQ");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.866908864214255;
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
    msg.setTimeStamp(0.2031012120018808);
    msg.setSource(26773U);
    msg.setSourceEntity(176U);
    msg.setDestination(1036U);
    msg.setDestinationEntity(68U);
    msg.op = 78U;
    msg.snapshot.assign("HZKVZYZANQYANKSKOAV");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 235U;
    tmp_msg_0.range = 0.5003022695618264;
    tmp_msg_0.acceptance = 132U;
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
    msg.setTimeStamp(0.06284783554507845);
    msg.setSource(48124U);
    msg.setSourceEntity(30U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(121U);
    msg.op = 184U;
    msg.name.assign("VMTKPSMAAXONDJTDGDFPUDGUEEWHGPJZGLRDETWVJJDLSRYPFKLLSYOQFLXPLICITWZNNLYQWIZAEJIQMAQUEBVFNHYRXLQUYCYBHEIACXQETRFZJHFBHUMVTZMCDPCUBNQSVVWJAKHGXJSXZTEUXROOGPFKOJOAJPPTKGHFYFBWBRZZHFNUYCER");

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
    msg.setTimeStamp(0.9943617223802541);
    msg.setSource(44942U);
    msg.setSourceEntity(164U);
    msg.setDestination(326U);
    msg.setDestinationEntity(101U);
    msg.op = 35U;
    msg.name.assign("ABOAKMVYLVZAZGYYWCWOKCEDJWZAIULKWVHTSLWBZXJCQKUJDILINDSZRTUTHNQEAVBHVBFXMFKEFQCGYCCFMPDBSAGEGJGFVNFBLRXOHRRQWYUHNEHEYOLQXOSUVTKWSCBHIHUDAUXBLWTDTPMQADEVJSMRQPQOFMOXPGREOAZTBIGDSPMNJSHYYHJAKRSVXEKOCNRJQPNVNIMTJBXXYULT");

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
    msg.setTimeStamp(0.29175667113093673);
    msg.setSource(37459U);
    msg.setSourceEntity(16U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(26U);
    msg.op = 136U;
    msg.name.assign("PQMTKRTZEIURODDRIUBFJAGQLUQSHIQHGOPPXPKFBWLBSMQKFGKZBNELWSWIXGDJCYHENVLDXRCDODVPNASGFGOFE");

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
    msg.setTimeStamp(0.8838856988979433);
    msg.setSource(52880U);
    msg.setSourceEntity(34U);
    msg.setDestination(43490U);
    msg.setDestinationEntity(50U);
    msg.type = 58U;
    msg.htime = 0.11266870723323807;
    msg.context.assign("XADVFQGWCSZDFPYYMJIHLRTA");
    msg.text.assign("NLEFDMGZTQKBEDYTJGPXZMPDJYZBHMUBCFYMUOLHNDUTXAWRSRPOWURHOBLXLYPGMIQOCHINQZOQURJSVCNUESOGAWOWEFPNCBIICLYIFURVSIMZWKAFPQKETYGVRMWTXQFCNKYEBNGQAZKESTWRXIAMFVLTLXHDWJLGCNJBVZIRPQRTABNYHXKVCSDQBJLVJNSGKJFUOVACDTVOIZXIPWAWZASGFLQHCEHPKHMHPFDGJKVSDEKB");

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
    msg.setTimeStamp(0.6853178554141237);
    msg.setSource(61574U);
    msg.setSourceEntity(242U);
    msg.setDestination(48562U);
    msg.setDestinationEntity(81U);
    msg.type = 102U;
    msg.htime = 0.0672754597070172;
    msg.context.assign("JUPNJSVFLAYFBCRETAZVMNXHYAVLUWFFPJGMBVYRP");
    msg.text.assign("WBZZQJLVXCGMZBOPDVQHGCITJRPRDVPMNLXTCNLHILSUFWWAIZPQFVSALXBUTUTASNWMSXRJF");

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
    msg.setTimeStamp(0.4307668573241341);
    msg.setSource(51494U);
    msg.setSourceEntity(254U);
    msg.setDestination(38815U);
    msg.setDestinationEntity(198U);
    msg.type = 164U;
    msg.htime = 0.967671317252385;
    msg.context.assign("VAYZJVWIAMJKJYODHYDRZHFDTOPOMAYEXHHQGLOSULGRLXXMNRBAOFF");
    msg.text.assign("REMFPYQHGFCYCUXSBUKYWECQVYVSOBPDEDKZHKKMTGOIOPTEPYN");

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
    msg.setTimeStamp(0.726302872127978);
    msg.setSource(41596U);
    msg.setSourceEntity(42U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(126U);
    msg.command = 41U;
    msg.htime = 0.46203415967704975;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 203U;
    tmp_msg_0.htime = 0.1250726825824109;
    tmp_msg_0.context.assign("CWPCKBZWFNXRAYSPDRBGJWAPPZAUZIVDMYCWHDFYLDVTGIKPCELOOGKYRDZNCZFLQTJUIOCQFXZUDSVWABAJVIAWLUPHEFZQRLCORBPSOMRQLGUGGVKSSYNWTXLUQKVQIJCJSZMXKNRHLEFMUXSKTOWJMDTNZGTUBYSYEMJIBXPFJQFVNBGGPTKWXWENSYCIIJEHHHEBOPIMUNVQXJZQFRIAMNFGOAHXQMHXRATEK");
    tmp_msg_0.text.assign("LKPXULTWEYDHTPLMQZRBBTPNQNDTDJUMEZXXIYVCFQHYILYGOVAFYPSPBVMFZ");
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
    msg.setTimeStamp(0.9934147795577544);
    msg.setSource(28867U);
    msg.setSourceEntity(26U);
    msg.setDestination(5430U);
    msg.setDestinationEntity(133U);
    msg.command = 132U;
    msg.htime = 0.6172711858576243;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 214U;
    tmp_msg_0.htime = 0.9660990749745291;
    tmp_msg_0.context.assign("EBTZJDPQXUVQZQKFHKYQQZGVVDHWYCSPCVJSGBMLMCFTMXPOIMRAOQLOMDDUBTCDNCCTWBISDBPYBRYTIRAA");
    tmp_msg_0.text.assign("LWECMTHANVLOEKQCRZZVDEHVXPQLNBCHOBFQWOUYCHMDWJSYHMQPXNZERYYTFZVHDPP");
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
    msg.setTimeStamp(0.3008355675764315);
    msg.setSource(2378U);
    msg.setSourceEntity(37U);
    msg.setDestination(29822U);
    msg.setDestinationEntity(90U);
    msg.command = 91U;
    msg.htime = 0.08410832311417815;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 34U;
    tmp_msg_0.htime = 0.21257962936174635;
    tmp_msg_0.context.assign("LPOSUOUWBDTIRJUZETGYUPKFCSJXYAMWDFMEZTJRLXBBRIBPGGRINQEOBSVIKHJKTFRFMFJVZGWXBLMCVQWHMSCISGDDUKNGLZLDWTSWOXUQGMJUAWJQGQZOEBDJMCWRXVV");
    tmp_msg_0.text.assign("SWFMQZXVZTHNYMQKRVEEHIINZSJUGZUCRLWWNTQETOPNVBSNXLWRPTOXYLVUBGRSFHLVVXAWKQKJCEZUZGCZOTGREKDHPFOHOABLJHSUQGJWJXKCIMABLICGQCEVZTOUMPFXFQAMHWWDDAHKKKHZTXUNIKADVYEFFSPSDJIJBBPQFQPGIBLCOTERFLCWAPBDBNRMLWTVNAZIHUGYRYJJSODJCEGPNTRNSYFPYYVRAUY");
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
    msg.setTimeStamp(0.5464236658192929);
    msg.setSource(54293U);
    msg.setSourceEntity(233U);
    msg.setDestination(45315U);
    msg.setDestinationEntity(93U);
    msg.op = 212U;
    msg.file.assign("OHBUECXDJTIQOMBCMZPZCJCHGFLHMXDFKTLXMNREVWIBCMVDJBYPAIPJMSVYDJSTQFOUHUILNKRWCUNPOPESUJYYAEZWYRGJEWXNAPAIZFIAVWOZCMVWUMCV");

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
    msg.setTimeStamp(0.5954211837729628);
    msg.setSource(29124U);
    msg.setSourceEntity(130U);
    msg.setDestination(57305U);
    msg.setDestinationEntity(168U);
    msg.op = 201U;
    msg.file.assign("DWXUKIRQGPMGHZHJHLVWZSKKBASVSWTCZHTQPCPXKNIGKOAYNVAUPANSWJOBMKET");

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
    msg.setTimeStamp(0.11464478858690297);
    msg.setSource(35792U);
    msg.setSourceEntity(162U);
    msg.setDestination(14189U);
    msg.setDestinationEntity(58U);
    msg.op = 240U;
    msg.file.assign("MYUZKOPVFELTJQMKWWUFVGHDCXFPXUWAXEJWYEEIAJAKNSHPUZZJHJSVOPLYBBKZGTINTUMSSEYRWCVVRAVNPZIITAIYBKQKLURTSJMPAMDMDXGWOMUNSOOFKKAFXGDILEV");

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
    msg.setTimeStamp(0.7569723846611299);
    msg.setSource(25819U);
    msg.setSourceEntity(85U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(151U);
    msg.op = 68U;
    msg.clock = 0.3400395292134566;
    msg.tz = -6;

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
    msg.setTimeStamp(0.2396129748775343);
    msg.setSource(64403U);
    msg.setSourceEntity(211U);
    msg.setDestination(46306U);
    msg.setDestinationEntity(15U);
    msg.op = 88U;
    msg.clock = 0.18197762158050412;
    msg.tz = -4;

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
    msg.setTimeStamp(0.8006508122251286);
    msg.setSource(3385U);
    msg.setSourceEntity(144U);
    msg.setDestination(24197U);
    msg.setDestinationEntity(223U);
    msg.op = 190U;
    msg.clock = 0.2462071215773537;
    msg.tz = 79;

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
    msg.setTimeStamp(0.6508498514204125);
    msg.setSource(51182U);
    msg.setSourceEntity(4U);
    msg.setDestination(34365U);
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
    msg.setTimeStamp(0.017237838198876698);
    msg.setSource(2180U);
    msg.setSourceEntity(132U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.17150945830903797);
    msg.setSource(42075U);
    msg.setSourceEntity(84U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.9526573357166331);
    msg.setSource(50630U);
    msg.setSourceEntity(24U);
    msg.setDestination(35989U);
    msg.setDestinationEntity(19U);
    msg.sys_name.assign("MXRXVNQTFGYFYRYSTAPIAKRJHETWCWHJBPCNFZBMLCHWOZFTUXEHRSOOXXURGRDMZYLGUDNAMTQLNAYTYDXUPSCWLXQWUBNEYLIZYVJNQVQZQIGSIOSCFGFQPQLBTEXOUSCMFUTMJKPJVNRAXKBPGKNYJDACNDBVLLHAZSHJPCVNERIV");
    msg.sys_type = 193U;
    msg.owner = 47439U;
    msg.lat = 0.5708748253074633;
    msg.lon = 0.8009503039537945;
    msg.height = 0.5310405992747084;
    msg.services.assign("TLQBFQOVQXKJMYDHREIIWZVAMFEXYJZPDAIUOSAUJXXYSJAUHHKWNBWZTCLAMRYDZIQCYSNBFKODZAPFTGZLVPRUPCWDBVLPBM");

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
    msg.setTimeStamp(0.6942275390735486);
    msg.setSource(5025U);
    msg.setSourceEntity(252U);
    msg.setDestination(54450U);
    msg.setDestinationEntity(88U);
    msg.sys_name.assign("AISLUXVBXCZCHHKDTXNTYYGRQPNRBYXWBMPRGJEZRVVEFJWKYPGFDBTUCYACOUNEXJHFREVNMEOLWDKAVB");
    msg.sys_type = 160U;
    msg.owner = 25693U;
    msg.lat = 0.19759874833256952;
    msg.lon = 0.18587105032326035;
    msg.height = 0.7983914934465957;
    msg.services.assign("OXPHZFKVFZINPRYBMOUBGDDGQAQCIWSPZYAQNWJIHBACHDCPNWRZCDTCVSCKGWJKBNXXDVGADSAYMTHZFLUUQHXUAWVMIZYBGEKEMKDMBOKIJCGSNIVJDLSOPT");

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
    msg.setTimeStamp(0.46454318765501945);
    msg.setSource(47388U);
    msg.setSourceEntity(122U);
    msg.setDestination(38013U);
    msg.setDestinationEntity(151U);
    msg.sys_name.assign("WNQIRHZPOFQYMULKGFRZBGQWNARHCKOSPJBPAKFFLQRJJRWLVKIZLOMGIRXGFTUBKHNNWVXOFECPWIUCJMXMAZNAITNWXMKLDADFJHKYVBSFPBDSEYZTHMFQACZRWSPAYTZBMQYGIOYCJESOVTSNGTLTEWDKBUCPRENASIECVI");
    msg.sys_type = 135U;
    msg.owner = 27734U;
    msg.lat = 0.7059259016566566;
    msg.lon = 0.940578997857607;
    msg.height = 0.1998435981622071;
    msg.services.assign("TESLHCSFSKZXBOXWKDADYOWMXAXDZLUVMQKYLXKKOXVTTC");

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
    msg.setTimeStamp(0.7400241398226439);
    msg.setSource(4235U);
    msg.setSourceEntity(213U);
    msg.setDestination(39672U);
    msg.setDestinationEntity(227U);
    msg.service.assign("TRLEZUMGVKOAIPPSDEAMYGIRVKTJZNHBDFSBHFUZIFHIXTGKFURMOLGNQUCDRKINAVVJKHPIAZUGOMMCSETHADZWBKUBYVQYGPYDGTREBQ");
    msg.service_type = 77U;

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
    msg.setTimeStamp(0.7534740604215563);
    msg.setSource(35273U);
    msg.setSourceEntity(6U);
    msg.setDestination(325U);
    msg.setDestinationEntity(31U);
    msg.service.assign("DFGMUJCMNYVJFJRPUVRYQWWWETGWAUYXNDSZJUOWMKFEKUSIAVVJVTYBYEPVIMAYCULRZKVIEZVQBHBBILOHIWGTNTHFSZUJWFFIXDTRAGFABKMGDLGHIOQOXMSOHUQWLCRAPBZPOHHCDCBGTXSMTALHHRTFSJNRRZQWYNAKOFQJKLMAXKIPDNKNEEZWCEZXGKVORQMQNICLJPADXLBEIXDPLCSYVSJL");
    msg.service_type = 246U;

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
    msg.setTimeStamp(0.7837326514577319);
    msg.setSource(18898U);
    msg.setSourceEntity(22U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(153U);
    msg.service.assign("UQFXXHBUHXOLCVRACKAOBNOIPGLPENYHGM");
    msg.service_type = 247U;

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
    msg.setTimeStamp(0.7583131553804454);
    msg.setSource(39431U);
    msg.setSourceEntity(54U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5704723749016589;

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
    msg.setTimeStamp(0.23245367054357768);
    msg.setSource(37307U);
    msg.setSourceEntity(95U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(250U);
    msg.value = 0.6538804150119764;

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
    msg.setTimeStamp(0.15216998215098154);
    msg.setSource(50395U);
    msg.setSourceEntity(243U);
    msg.setDestination(64848U);
    msg.setDestinationEntity(239U);
    msg.value = 0.6055601770410279;

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
    msg.setTimeStamp(0.9369377644782506);
    msg.setSource(50661U);
    msg.setSourceEntity(85U);
    msg.setDestination(33862U);
    msg.setDestinationEntity(23U);
    msg.value = 0.35868170562523294;

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
    msg.setTimeStamp(0.5423438003891902);
    msg.setSource(34607U);
    msg.setSourceEntity(158U);
    msg.setDestination(36867U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5354508005932537;

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
    msg.setTimeStamp(0.08300507836678994);
    msg.setSource(3338U);
    msg.setSourceEntity(113U);
    msg.setDestination(23504U);
    msg.setDestinationEntity(74U);
    msg.value = 0.47283794939633983;

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
    msg.setTimeStamp(0.9892421552201055);
    msg.setSource(30504U);
    msg.setSourceEntity(162U);
    msg.setDestination(12028U);
    msg.setDestinationEntity(247U);
    msg.value = 0.18850497540151145;

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
    msg.setTimeStamp(0.8259737216059592);
    msg.setSource(6638U);
    msg.setSourceEntity(218U);
    msg.setDestination(50781U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7237412600810267;

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
    msg.setTimeStamp(0.7001023156252448);
    msg.setSource(9360U);
    msg.setSourceEntity(191U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(72U);
    msg.value = 0.823146461714503;

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
    msg.setTimeStamp(0.5440034492701573);
    msg.setSource(60600U);
    msg.setSourceEntity(207U);
    msg.setDestination(41313U);
    msg.setDestinationEntity(39U);
    msg.number.assign("SCNBWREOIGQKHUEVSNYYOPJVFATQMHBBRPBWFNAZXURLPPKHEDPKQKWJYNVZCGKIMTRSIJJMYIRPTDTZFMUALCIGPWNQOGEQOMJOERCMZAANLHFJGIDGABAWZOOYUFXXVSGACXUCKDEWTFFSGXXSWZTLDDCZEKUHWHPLYUDAYLSQWHYTQDVTRBVDLHYXJGZXSAELNVNPBQWOCXEPVOZJNIMLDQYKEUXLRZBIUSGMMKBKFVVMB");
    msg.timeout = 4439U;
    msg.contents.assign("VMFXZUQEMTIEUUDNLBCCIWSGFLHUMHYDWNIPJWAIXMYPFABDSMWLPEZJFQWFUJKFOONSJBVUALZJAKBPDQHZTIIMIRRFYATZVVLQYPOBPVXGYCIHRHVRUKLRKNMDAYJOGERTZPXHKXXXZUPAOVVPQGDMKPOZNTGATYZNTEQSBEWYVUEHMHYWISWSRETNHKMGOJALNXQDKCFSRBJCASKUGGRCECCNJSBTXQGOTH");

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
    msg.setTimeStamp(0.11373813404879984);
    msg.setSource(21367U);
    msg.setSourceEntity(157U);
    msg.setDestination(49613U);
    msg.setDestinationEntity(57U);
    msg.number.assign("UFOVBUGVHEVKHVQPDMUWSIBCDLRUZTBWXAZYYHTCEWAJYHNLTGGWSCPODNPXUAGIZJIRGZHEVXZSWZPLDBAZVUAQGKNYCNCONKSXESYFQIDMFTRPCFIK");
    msg.timeout = 32769U;
    msg.contents.assign("LIHZGOEKYWJDCPCORWDBDJIIEDFJWIAOZALWVTQJVFLMVRTVMYBTOXFTJTVUZAGSHVNNMKPZHOYZYXZPOPQBBBMACRZXHQBLJCWUGSKUQLEHXSGORPYJPPGWESETIQSPZJ");

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
    msg.setTimeStamp(0.037431572154036696);
    msg.setSource(3340U);
    msg.setSourceEntity(78U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(12U);
    msg.number.assign("WELZVZAWOPTAHVWUHHIXHXQELMLFSSND");
    msg.timeout = 12312U;
    msg.contents.assign("YWOCBUTJQYLPCSXEVIUMRYBDVBHGTRPLRSMPQCKNBJQTGD");

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
    msg.setTimeStamp(0.202486136871463);
    msg.setSource(9842U);
    msg.setSourceEntity(62U);
    msg.setDestination(1071U);
    msg.setDestinationEntity(3U);
    msg.seq = 2836615362U;
    msg.destination.assign("WEJQLTCYOIGWWPTKSURCVNODBDBTUSKJHEMGCOQANWDIZPYKINZTXZNBGARTLURDIWWGFVPPKLNZYHIYFXYZHVXLNEMMTJJVYFKMEESPKNIPWCMFBWSWDNZBSZMTQUUIJJFTBVJCOGJGLRMCOHGGQSEATQBXQRJGFPPUKCSBVDVOVQYASQROXMRMNRFSIGHYLBJLHIVKERYYTLHFZMEUOCXKEZBDPAQHSCPXADFAULOAEZXHVACFIRK");
    msg.timeout = 8145U;
    const char tmp_msg_0[] = {-36, 95, 16, 62, 34, -22, -17, -98, -49, 58, 70, -11, 19, 85, 14, 29, 14, 37, 90, -47, 88, -9, 24, 113, -15, 1, -128, 93, 111, -63, 3, 121, -42, -114, 13, -67, -75, -52, -76, 93, -36, -67, -125, 91, 8, -87, 88, -62, -44, -117, -74, -111, 16, -69, -118, 93, -98, -7, 25, -24, -29, -20, -67, -43, 60, -103, 13, 44, -112, 42, 60, 36, 3, -70, 97, -85, -125, 110, 31, 87, 6, 101, 26, -97, 91, 38, -114, -92, -26, 102, 78, -51, 99, 87, 80, -87, 105, -14, -126, 31, -82, 93, -80, 11, -64, 115, 106, -95, -65, -45, -1, 11, 76, 97, -42, -123, -25, 52, -119, 56, -74, -77, -120, -37, -109, 82, -46, 101, 1, 76, -73, 101, -74, -7, 12, 40, -113, -25, -107, 101, -77, 87, 66, 103, -19, -128, -93, -33, 78, 36, 70, -43, -121, 54, 6, -16, 28, -50, -13, -116, 73, 19, 52, -81, -7, -107, 12, 78, 14, 111, -86, -13, 105, 97, 61, -19, -31, 118, -89, 25, -66, -109, 86, -66, 30, -64, 73, -76};
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
    msg.setTimeStamp(0.9467944940047103);
    msg.setSource(54359U);
    msg.setSourceEntity(113U);
    msg.setDestination(31786U);
    msg.setDestinationEntity(17U);
    msg.seq = 2339180778U;
    msg.destination.assign("ZIKYDGIEDYJVYVYCSQCVSOGKAKPUZTWAGQNFJCDSAAOOHSNWSAXPJLGBLGCJTCHTBNPOAPZASZIXTMLDXCVRTGTQMHEEKJ");
    msg.timeout = 64566U;
    const char tmp_msg_0[] = {-81, 122, -17, -49, 27, 112, -48, 79, 90, 120, 38, -57, -123, -35, -76, -66, -120, -31, 101, -120, 86, 48, 42, -128, -37, 10, 1, 126, 116, -53, -50, 102, 4, 73, 49, 45, 39, -92, 116, -102, 8, -45, -118, 21, 51, 120, 68, -36, 9, 78, -52, -84, -52, 53};
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
    msg.setTimeStamp(0.6266660348094754);
    msg.setSource(21958U);
    msg.setSourceEntity(27U);
    msg.setDestination(54796U);
    msg.setDestinationEntity(199U);
    msg.seq = 3288095744U;
    msg.destination.assign("OYDVVWOARHQNJWYXQNDHSF");
    msg.timeout = 19214U;
    const char tmp_msg_0[] = {2, -33, 88, 98, 97, 13, 30, 14, 23, -42, -69, -87, -98, -122, -119, -119, 17, 7, 53, 55, -34, -48, 47, -4, 2, 109, 80, 87, 64, 23, 117, -103, 56, -41, 57, 123, -107, -105, 99, 0, 52};
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
    msg.setTimeStamp(0.35916251907230234);
    msg.setSource(22083U);
    msg.setSourceEntity(97U);
    msg.setDestination(51198U);
    msg.setDestinationEntity(34U);
    msg.source.assign("IYBFWESTTLCNCJIITCWIRYXADHRBEPLIYFQVQJBLXSVNHKIBUJBDSAZ");
    const char tmp_msg_0[] = {-38, -28, -59, -87, 15, -86, 103, -56, 16, 19, 91, 45, 104, 18, 40, -36, 80, -122, 18, -47, -111, -15, 93, -3, 44, -76, 10, -31, -83, -66, -71, -93, -126, 75, 55, -28, 80, 41, -25, -58, -123, -79, -49, -89, 84, -46, 4, -41, 103, -58, -4, -99, 58, -41, 28, 62, 121, -83, -13, 88, 104, -12, -125, -100, -76, -91, -82, 63, -115, -39, -74, -18, -105, 10, -70, -42, -67, -34, -3, 10, -44, -73, 121, -41, -41, -89, 54, -52, -42, 114, -67, -2, -23, -82, -39, 57, -56, -112, -26, 102, 74, 3, -32, 10, 123, -41, 118, 115, 52, 28, 42, -18, 68, 123, 41, 3, 5, 96, -87, 111, -39, 112, -115, 123, 97, 59, -38, -8, -3, -119, -97, -25, 57, -90, -71, 46, 12, 74, -25, -22, -7, -45, 21, 107, -118, -25, 35, -100, -55, 71, 58, -82, -127, 53, 20, 67, -68, -49, 3, -115, 39, 7, -2, 83};
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
    msg.setTimeStamp(0.44588084112681126);
    msg.setSource(51906U);
    msg.setSourceEntity(94U);
    msg.setDestination(54427U);
    msg.setDestinationEntity(142U);
    msg.source.assign("NBSQCPRPDOZTBTSHPULTQWLUIWTEUVMHUEGJHHXYIGAYLQLLIKOTJGKFWBETEYWRAXSBKPSVMBNQDIRMNAICJOEWMAEWBXZKHIGXRCRUVDLAFCKGQFUXIMCFNQKOBEJVDYOCWJZYLJHVQQRKAMCZYJFHZIGVEKTAWRRMMBOPFHNDGFPSWOXDAJLEGIDUFSAFNNHPKUCSCMJDKELOZGX");
    const char tmp_msg_0[] = {-125, 26, -59, 8, 33, 48, 108, 115, 51, -10, 76, 88, -31, 27, 43, 113, -18, -88, 95, -115, -114, -90, -57, 82, -66, -72, 89, 84, 38, 68, 87, -110, -20, 36, 99, -51, 112, -88, -103, 62, -21, -77, 45, -110, -14, 28, 79, 106, 30, -60, 117, 94, -127, 90, 93, 125, -72, 28, 10, -55, -76, 0, 111, -10, -79, -110, 67, -74, 94, -16, -54, 66, 116, 59, 86, 114, 8, -77, -4, 9, 104, -81, 78, -59, -101, -92, -88, -58, -80, -85, -73, 51, 77, 17, -82, 53, -46, 46, 62, -64, -35, -28, -18, -18, 62, -25, 121, -28, 39, -46, 93, -14, -81, -39, 90, -120, -127, 55, -110, 55, 23, 38, -105, 53, -55, -121, 53, -95, -128};
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
    msg.setTimeStamp(0.756827949236734);
    msg.setSource(28338U);
    msg.setSourceEntity(100U);
    msg.setDestination(43938U);
    msg.setDestinationEntity(1U);
    msg.source.assign("ODODZGJNTVEJGJFZSZUBNKRSKLJPYDNBNVLUWTPTIRTRNWJMLWAHXYTVUMQJEUIQABBWBNDKCLAINUCRIXYUPIIRRJQVQPSOWBVVOBGEETPF");
    const char tmp_msg_0[] = {36, -60, -54, 11, 58, -21, -121, 49, -22, 102, 11, -35, 54, -35, -57, -11, -107, 83, 96, -14, 104, 106, -89, -17, 31, 63, -102, -74, -68, 18, -121, 21, 87, 52, -6, -9, -115, -102, -5, 12, -80, 101, 17, 36, 27, -117, 76, 28, 92, 81};
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
    msg.setTimeStamp(0.05700854966685831);
    msg.setSource(4443U);
    msg.setSourceEntity(88U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(169U);
    msg.seq = 2990372806U;
    msg.state = 229U;
    msg.error.assign("HZQAWVAIWGCJONKZQONZJUECQNFBPZQBYIUMMEBPSMUSBUOUYULHUNCCEETSKETXHMQFDVSXZJYXAPQOEDRIZFPZVRSROHFATAITYILRJRDMWNDUGVTNVREIYWUXNLPGBBKHLT");

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
    msg.setTimeStamp(0.42235482058819274);
    msg.setSource(23140U);
    msg.setSourceEntity(212U);
    msg.setDestination(3725U);
    msg.setDestinationEntity(195U);
    msg.seq = 1592729840U;
    msg.state = 11U;
    msg.error.assign("DQQYPTAEMHKZSJCF");

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
    msg.setTimeStamp(0.14219250306099596);
    msg.setSource(46742U);
    msg.setSourceEntity(254U);
    msg.setDestination(48960U);
    msg.setDestinationEntity(133U);
    msg.seq = 3589990397U;
    msg.state = 221U;
    msg.error.assign("MGFKWSHPVUITZECPFYDQXFJA");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.41602849060644886);
    msg.setSource(33710U);
    msg.setSourceEntity(46U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(190U);
    msg.id = 158U;
    msg.range = 0.3055735843306754;

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
    msg.setTimeStamp(0.3253610988661111);
    msg.setSource(52794U);
    msg.setSourceEntity(144U);
    msg.setDestination(19482U);
    msg.setDestinationEntity(168U);
    msg.id = 235U;
    msg.range = 0.27857115743133964;

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
    msg.setTimeStamp(0.1579867922243553);
    msg.setSource(26767U);
    msg.setSourceEntity(45U);
    msg.setDestination(23617U);
    msg.setDestinationEntity(115U);
    msg.id = 213U;
    msg.range = 0.7760289365075465;

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
    msg.setTimeStamp(0.09240094269773691);
    msg.setSource(41158U);
    msg.setSourceEntity(170U);
    msg.setDestination(15255U);
    msg.setDestinationEntity(225U);
    msg.tx = 127U;
    msg.channel = 30U;
    msg.timer = 31038U;

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
    msg.setTimeStamp(0.0971779387032532);
    msg.setSource(25286U);
    msg.setSourceEntity(137U);
    msg.setDestination(44323U);
    msg.setDestinationEntity(51U);
    msg.tx = 72U;
    msg.channel = 18U;
    msg.timer = 15387U;

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
    msg.setTimeStamp(0.2872955918485671);
    msg.setSource(8388U);
    msg.setSourceEntity(197U);
    msg.setDestination(55290U);
    msg.setDestinationEntity(110U);
    msg.tx = 122U;
    msg.channel = 135U;
    msg.timer = 2989U;

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
    msg.setTimeStamp(0.9817381140146174);
    msg.setSource(34153U);
    msg.setSourceEntity(238U);
    msg.setDestination(57569U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("GXENPLSYDECUSRWXVAOSPSRQYMXIVPGRNSAWQUGTZWCQABWLPOBWNKUSETQIYXZOHQJFTKYZPFNEDXDPVNNLAMQHNGMIDDFBAVZDBYLOKCFHNURZHYVYWKFZLWVOIJGWSYJPRRVGKLTIMEKFEDXQIOBERDUJKSHETUUHJMAGKOENBTYZFONXKCIVJZCSGIFTMUFJCBXVJGJHTLFLHLHRCKDTIZOQSBCYLWMAIO");
    msg.lat = 0.6647238328616166;
    msg.lon = 0.6493772590090083;
    msg.depth = 0.2426063012748203;
    msg.query_channel = 63U;
    msg.reply_channel = 73U;
    msg.transponder_delay = 25U;

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
    msg.setTimeStamp(0.008048990502300013);
    msg.setSource(48274U);
    msg.setSourceEntity(151U);
    msg.setDestination(56006U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("KZAQXUVMLWSHXXBRCYYJAOVAUFFFIKWOTBNZTUKIFHPBLLPCLEBAEEYCV");
    msg.lat = 0.4430707679432564;
    msg.lon = 0.3694249886826124;
    msg.depth = 0.9345835227131023;
    msg.query_channel = 113U;
    msg.reply_channel = 201U;
    msg.transponder_delay = 250U;

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
    msg.setTimeStamp(0.3862796099762468);
    msg.setSource(17438U);
    msg.setSourceEntity(92U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("ETGOLQOXQGJZHDPBHIRBJFWGRUXNSDVQWVUWLDAJTAQKHKSYVLAQCTCTEYLQMAEZJIBWSHGAXCUKAMWHPFEUYZFNPPJZFRMURIDMJOGZNGHYMLETAPFXCAICMTINLWTKZXPNQTBZFBSVGQHYNHZFBXEUYYRVPTLDOLCXEGIONCOYFMCDSRWUZABNJTFBISOVXHJIKYCSVMSXQSRRWGVDDUKSCEKMNWOJFZQOEPKIKHDKEDYLW");
    msg.lat = 0.22123750502523964;
    msg.lon = 0.5331891455199562;
    msg.depth = 0.6927787898302596;
    msg.query_channel = 200U;
    msg.reply_channel = 12U;
    msg.transponder_delay = 200U;

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
    msg.setTimeStamp(0.053977625778825145);
    msg.setSource(55263U);
    msg.setSourceEntity(219U);
    msg.setDestination(53461U);
    msg.setDestinationEntity(42U);
    msg.op = 184U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JCZZQCEJPNJVHTLNQXOKNYEUVDLRTMPFMCAESYHQKBHDWIFFIMSKVIHMTOVPNPPGTHORPDIKZRVUYLSLBHUDLAFQCSRNJPLWFYUNVHCBDRAYOEOSWXUCTCXWBQOZQKAIUJBPAVMVGELFNFIEIRKNSCKERTBZDAZXXYSLUXGRUAWGJKYUMQZYBCAFA");
    tmp_msg_0.lat = 0.4266613335556375;
    tmp_msg_0.lon = 0.3465457776952191;
    tmp_msg_0.depth = 0.041131966417744414;
    tmp_msg_0.query_channel = 85U;
    tmp_msg_0.reply_channel = 229U;
    tmp_msg_0.transponder_delay = 71U;
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
    msg.setTimeStamp(0.9711974936132337);
    msg.setSource(56261U);
    msg.setSourceEntity(110U);
    msg.setDestination(8877U);
    msg.setDestinationEntity(168U);
    msg.op = 41U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZWAWMZCGHEYPWZQMXQREODDOBUVMXRDSBBZMKWVDNDUQCKTSQTTEAJJSOXYFYYPIPGAJKIPNNNVCVRUEUAWKJIIUGLOXIMXXRFXGVKYHJDIPDZUWZHTQFCLHSBYTZRTNPVLSMZMUBIEJGAETHHJJSFCSXHS");
    tmp_msg_0.lat = 0.9116200146073464;
    tmp_msg_0.lon = 0.5364137250482616;
    tmp_msg_0.depth = 0.36894709530352665;
    tmp_msg_0.query_channel = 29U;
    tmp_msg_0.reply_channel = 18U;
    tmp_msg_0.transponder_delay = 212U;
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
    msg.setTimeStamp(0.008541116454137687);
    msg.setSource(43453U);
    msg.setSourceEntity(67U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(63U);
    msg.op = 179U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RLUDTJBXLJGFJNMPFGBWTZQPNCHIUPUMKOKUDWCYAYFPMQCALBOPFNODZYALKDJYCGVLBPZGNBMIGTSMAQBDCGRKSSFQIHMQRCYZGSWSWMTIEQAEOHNVAVFAIDLLXFIVWZLSOLFJXAKRPHBAEKGNNVJFOQDHQTEUCRUPOYXEFJMOQTUKNERRVXAWRHXITM");
    tmp_msg_0.lat = 0.4552365974837238;
    tmp_msg_0.lon = 0.07335459153127677;
    tmp_msg_0.depth = 0.5419186830919358;
    tmp_msg_0.query_channel = 16U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 24U;
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
    msg.setTimeStamp(0.10467036847978128);
    msg.setSource(34170U);
    msg.setSourceEntity(208U);
    msg.setDestination(20888U);
    msg.setDestinationEntity(177U);
    msg.address = 236U;

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
    msg.setTimeStamp(0.2921653063729789);
    msg.setSource(5650U);
    msg.setSourceEntity(42U);
    msg.setDestination(8550U);
    msg.setDestinationEntity(195U);
    msg.address = 44U;

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
    msg.setTimeStamp(0.4737413681050813);
    msg.setSource(60431U);
    msg.setSourceEntity(175U);
    msg.setDestination(43108U);
    msg.setDestinationEntity(252U);
    msg.address = 137U;

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
    msg.setTimeStamp(0.10916657382431527);
    msg.setSource(860U);
    msg.setSourceEntity(78U);
    msg.setDestination(27684U);
    msg.setDestinationEntity(85U);
    msg.address = 237U;
    msg.status = 229U;
    msg.range = 0.2697728378766552;

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
    msg.setTimeStamp(0.021264441880671114);
    msg.setSource(15298U);
    msg.setSourceEntity(155U);
    msg.setDestination(27217U);
    msg.setDestinationEntity(21U);
    msg.address = 240U;
    msg.status = 223U;
    msg.range = 0.17649895872641208;

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
    msg.setTimeStamp(0.9965190503543927);
    msg.setSource(43479U);
    msg.setSourceEntity(244U);
    msg.setDestination(22033U);
    msg.setDestinationEntity(129U);
    msg.address = 238U;
    msg.status = 222U;
    msg.range = 0.5594377325827564;

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
    msg.setTimeStamp(0.7171556825900639);
    msg.setSource(45338U);
    msg.setSourceEntity(182U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(169U);
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.9988086079766437;
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
    msg.setTimeStamp(0.7994367655699596);
    msg.setSource(45117U);
    msg.setSourceEntity(94U);
    msg.setDestination(6691U);
    msg.setDestinationEntity(233U);
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 80U;
    tmp_msg_0.width = 15656U;
    tmp_msg_0.height = 28854U;
    tmp_msg_0.widthstep = 60206U;
    tmp_msg_0.channels = 222U;
    tmp_msg_0.depth = 241U;
    tmp_msg_0.finaldata = 186U;
    const char tmp_tmp_msg_0_0[] = {-59, -2, -35, 19, -94, 88, -98, -30, 86, -93, 7, -66, 52, 90, -37, -120, -125, 120, -33, 79, -117, 63, -46, 50, 13, 69, -32, 86, -34, -95, 113, 63, -49, -16, -65, 97, 99, 57, -81, 41, 0, 88, 108, -83, -97, -44, -1, 28, 101, 44, -67, -114, 7, -31, -74, 30, 24, -37, 94, 111, -98, -53, -34, 83, -89, -96, -104, -53, 59, -57, 32, 24, 123, 88, -49, -121, 41, -1, -76, -25, 108, 18, -44, 28, 98, 59, -109, -87, 9, -121, 6, -70, -89, 106, 34, 49, -115, 100, 116, -81, -88, 28, 28, -73, -50, -6, -124, -37, -36, 55, 65, -20, 35, -120, 123, 118, 60, -42, 75, -79, 84, 96, -60, -59, 83, 112, 69, -17, 84, 100, 126, 111, -69, 37, 57, 108};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.725913970792705);
    msg.setSource(15897U);
    msg.setSourceEntity(144U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(36U);
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LAPTNKUQAHFEPJWLJKYEBTCFDLPQGVCAZURGOLXWAUCMKFYRHKKONBHIFBZMWCXCRZYURSVEOFUQGIBVVJMTXQANOTGYAISDIBHHTLXDBBAIALQCHRSNTBTYYSKMEYWJJSGCFXIORZDDCZVVQNZKXEOCXFENGWHFWNHGDPQLQQYIZPWWRMPMGRAZH");
    tmp_msg_0.value.assign("BBAHFIAFKGWVSUYMCMXECIQRRKTZWVEWVLYXJQUKZEODOTLHLJDUYQQBKMEYWAOZWCQKQFDVCWMRNTGUMGIHBDKQOPPZIEMSWPLJGJEATNLXNZUTDLLABCMTVDBNHLEHSUUPXXKNGIAPVYTHZOYDRMUCCWAKBZYRGSBYHXEPWIEDHCUJVVNZJHBQSUOFNCPYEIVSADGJDJIRSSOTIKZXPNPZNXAF");
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
    msg.setTimeStamp(0.4592154341408662);
    msg.setSource(11614U);
    msg.setSourceEntity(227U);
    msg.setDestination(28324U);
    msg.setDestinationEntity(203U);
    msg.enable = 65U;

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
    msg.setTimeStamp(0.3387744081240719);
    msg.setSource(47843U);
    msg.setSourceEntity(184U);
    msg.setDestination(32122U);
    msg.setDestinationEntity(125U);
    msg.enable = 59U;

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
    msg.setTimeStamp(0.4994185352276187);
    msg.setSource(25008U);
    msg.setSourceEntity(62U);
    msg.setDestination(53115U);
    msg.setDestinationEntity(222U);
    msg.enable = 140U;

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
    msg.setTimeStamp(0.7109756170661434);
    msg.setSource(61999U);
    msg.setSourceEntity(115U);
    msg.setDestination(61765U);
    msg.setDestinationEntity(38U);
    msg.summary = 156U;
    msg.level = 16U;

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
    msg.setTimeStamp(0.14309981130780347);
    msg.setSource(8216U);
    msg.setSourceEntity(46U);
    msg.setDestination(1277U);
    msg.setDestinationEntity(101U);
    msg.summary = 34U;
    msg.level = 78U;

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
    msg.setTimeStamp(0.92737914770501);
    msg.setSource(49094U);
    msg.setSourceEntity(171U);
    msg.setDestination(60521U);
    msg.setDestinationEntity(35U);
    msg.summary = 0U;
    msg.level = 95U;

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
    msg.setTimeStamp(0.4157808019844009);
    msg.setSource(36473U);
    msg.setSourceEntity(220U);
    msg.setDestination(11705U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.04243016913372599);
    msg.setSource(53457U);
    msg.setSourceEntity(122U);
    msg.setDestination(14556U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.7266654035244989);
    msg.setSource(25491U);
    msg.setSourceEntity(87U);
    msg.setDestination(10809U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.796259921271252);
    msg.setSource(28075U);
    msg.setSourceEntity(229U);
    msg.setDestination(28970U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.2836219828329082);
    msg.setSource(41095U);
    msg.setSourceEntity(186U);
    msg.setDestination(23342U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.2825747654709171);
    msg.setSource(14226U);
    msg.setSourceEntity(208U);
    msg.setDestination(6988U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.4096962529485413);
    msg.setSource(2646U);
    msg.setSourceEntity(102U);
    msg.setDestination(10334U);
    msg.setDestinationEntity(65U);
    msg.op = 61U;
    msg.system.assign("OTETBMSYEOAVTLRADMLLZWRCIDULUIWYUWLGQJTJEHXJPKFVUHBDEVCVQQIWASNIMGWIJZKCERUCECLPCITSPVJTKVBBPVRMZSQCBNSNGMIYOVDVNUXTUROBKOEQZXGNHFHJYOOQZPALLSWFSFJOZWQBEIFGAIMQJBGUHZKTMLXDXSRWYHPWMGNNDLMBGFTKPZMAKFBASCXRZPYPYZGXHATFXFFCIYROHOKEGUDJASDDKWNVNRNHHJXYQ");
    msg.range = 0.06728867986191767;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 175U;
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
    msg.setTimeStamp(0.5477276821561706);
    msg.setSource(64582U);
    msg.setSourceEntity(24U);
    msg.setDestination(50936U);
    msg.setDestinationEntity(196U);
    msg.op = 20U;
    msg.system.assign("HJGXWAFBLYOXVWNFEJYJNUAPEUMHMWJIQKEBORGUKOIILAPXTZVIRQDDGZZWZFGUHKMBKZKCGDYMNMYDMHQJNIVYDOELVDNBSPXEVMLNLSXAHKVYSDISATRONQYDJRIZBMIWUQSKTXWCOOJUITLGPCTFBLFVGBPTVCHOQXACFNEFQOZPJVUSEGZ");
    msg.range = 0.6413559583227155;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 171U;
    tmp_msg_0.value = 0.1494644041944695;
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
    msg.setTimeStamp(0.8469634419851771);
    msg.setSource(59864U);
    msg.setSourceEntity(165U);
    msg.setDestination(2499U);
    msg.setDestinationEntity(150U);
    msg.op = 41U;
    msg.system.assign("XWHEVYBJXGCAWYLFXNZDEOZPAQRYAHRZBWOENKBPUSMTKDEPHTQKDGMEMIIGBWCUJVABSYYQLNFTCXKKMGCOZGGLDFPCNNINTBDSQUPTRIRIYSUCJCXCHGTLARAEIWCSBVRXSHNANMXHXPWUHXFLSOIYPLQFZJDOONDILJKTPZLVFVCAUHWVGSQBYZJBULKVMQEUWZOKBNRKJJRWTXVJSTDZUUIKVOFMYDGGROAWOIPEELVDFH");
    msg.range = 0.6679603498647363;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("ZYTPJIGQXYGLROMOVWICUGGCUYVITFPZFENJXBCSKJWJKJBMZKENJHDNBWGFUAPQAWRIOUDZXGTXZLSKIGYZPTPNAAUSCVVHRHSNOYLYVTUEHNITANEOLQUURDYBVCCLYJFHNFGARLXWDLDSFDUBSWZSPIHBXXPLMDJRMBRTUHKEYIQQLMHNBIGPXXVCCEQJDRVZFMWWMJQSQOXOOBMF");
    tmp_msg_0.state = 79U;
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
    msg.setTimeStamp(0.8821104781300931);
    msg.setSource(39532U);
    msg.setSourceEntity(169U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.25798034742843046);
    msg.setSource(21495U);
    msg.setSourceEntity(205U);
    msg.setDestination(55639U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.5775825511175857);
    msg.setSource(13170U);
    msg.setSourceEntity(112U);
    msg.setDestination(14551U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.015922012230042526);
    msg.setSource(48469U);
    msg.setSourceEntity(23U);
    msg.setDestination(57791U);
    msg.setDestinationEntity(200U);
    msg.list.assign("BDYEXZVCUAHTJGSQNYBEPYGXDFOTXCJB");

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
    msg.setTimeStamp(0.05905891115867268);
    msg.setSource(40633U);
    msg.setSourceEntity(76U);
    msg.setDestination(64355U);
    msg.setDestinationEntity(110U);
    msg.list.assign("POOKCBGJZOXFUPUVWCJYHHQEWGKFLLTVYBVQNIFPTXFNHSTAEODISDHDKRNSVTNZZFITJAIDARQKMPABBNSKZMTQHPLLCULAKAPGOMNZFTWGCYKCNUDLJMURGWSITDRDASCSJJHHNPOJHBQIFIFHKJQTEVIHCECSZIRMUSLBXLDMTMVLXYEUAGZOMUGBEYWYGKXBQOZBWERUCOWFXER");

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
    msg.setTimeStamp(0.6426414793898625);
    msg.setSource(14002U);
    msg.setSourceEntity(192U);
    msg.setDestination(62559U);
    msg.setDestinationEntity(44U);
    msg.list.assign("FJPAUBNNXIATQYDKOHFSEJIXEHRMYDIJECRLYCXXLVOATCBCVPOHFGKJBWKSRZOCMSMZORDYGVCDKHFTAGHWNGIOYWLAXLLZNEWRSZUTYTXUSBMPAPVOZKUEBHNFNKUIDAZCQEBZNUBESZFJWKVQWPAPULRHEZVAFDSSSUTFZEHTVXIXLIOPMKMBDRQWHLQYWGOPYDQBEIDGUNOIJPMJTNWRLCCNQUMYADX");

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
    msg.setTimeStamp(0.7191060725380598);
    msg.setSource(57875U);
    msg.setSourceEntity(214U);
    msg.setDestination(9524U);
    msg.setDestinationEntity(179U);
    msg.value = 9381;

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
    msg.setTimeStamp(0.1329692273611428);
    msg.setSource(261U);
    msg.setSourceEntity(246U);
    msg.setDestination(3903U);
    msg.setDestinationEntity(86U);
    msg.value = 18331;

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
    msg.setTimeStamp(0.9528240736033458);
    msg.setSource(45360U);
    msg.setSourceEntity(209U);
    msg.setDestination(57039U);
    msg.setDestinationEntity(188U);
    msg.value = -16885;

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
    msg.setTimeStamp(0.8309895326526281);
    msg.setSource(1315U);
    msg.setSourceEntity(84U);
    msg.setDestination(11144U);
    msg.setDestinationEntity(4U);
    msg.value = 0.7988575876678092;

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
    msg.setTimeStamp(0.15775436022545997);
    msg.setSource(56097U);
    msg.setSourceEntity(6U);
    msg.setDestination(43041U);
    msg.setDestinationEntity(185U);
    msg.value = 0.13139290656877944;

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
    msg.setTimeStamp(0.3373529803378811);
    msg.setSource(32048U);
    msg.setSourceEntity(244U);
    msg.setDestination(8792U);
    msg.setDestinationEntity(42U);
    msg.value = 0.21740525318904558;

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
    msg.setTimeStamp(0.467504918061333);
    msg.setSource(39231U);
    msg.setSourceEntity(225U);
    msg.setDestination(49313U);
    msg.setDestinationEntity(182U);
    msg.value = 0.35416507440800327;

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
    msg.setTimeStamp(0.13761575065714027);
    msg.setSource(65112U);
    msg.setSourceEntity(23U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(99U);
    msg.value = 0.3118275224338166;

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
    msg.setTimeStamp(0.6539425558153238);
    msg.setSource(50262U);
    msg.setSourceEntity(119U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(58U);
    msg.value = 0.8515278168858147;

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
    msg.setTimeStamp(0.11261006816257946);
    msg.setSource(65123U);
    msg.setSourceEntity(52U);
    msg.setDestination(45178U);
    msg.setDestinationEntity(81U);
    msg.validity = 21103U;
    msg.type = 230U;
    msg.utc_year = 52291U;
    msg.utc_month = 95U;
    msg.utc_day = 219U;
    msg.utc_time = 0.7845959005250356;
    msg.lat = 0.8192289730133093;
    msg.lon = 0.6014083651113752;
    msg.height = 0.032370604081796706;
    msg.satellites = 12U;
    msg.cog = 0.9175386524035031;
    msg.sog = 0.8186010163895169;
    msg.hdop = 0.49150685201602096;
    msg.vdop = 0.9797949492082433;
    msg.hacc = 0.2818285276426358;
    msg.vacc = 0.010782349840657401;

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
    msg.setTimeStamp(0.20835059527597122);
    msg.setSource(36970U);
    msg.setSourceEntity(238U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(39U);
    msg.validity = 48421U;
    msg.type = 79U;
    msg.utc_year = 55730U;
    msg.utc_month = 117U;
    msg.utc_day = 38U;
    msg.utc_time = 0.9817667810552398;
    msg.lat = 0.5366318436478138;
    msg.lon = 0.039792057264560476;
    msg.height = 0.8410895798578436;
    msg.satellites = 32U;
    msg.cog = 0.6702368061546267;
    msg.sog = 0.6518170525441846;
    msg.hdop = 0.13008167392590586;
    msg.vdop = 0.7577186013955002;
    msg.hacc = 0.8078278930929755;
    msg.vacc = 0.02651639552119045;

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
    msg.setTimeStamp(0.6599807129240387);
    msg.setSource(45912U);
    msg.setSourceEntity(117U);
    msg.setDestination(1590U);
    msg.setDestinationEntity(191U);
    msg.validity = 45365U;
    msg.type = 169U;
    msg.utc_year = 44792U;
    msg.utc_month = 99U;
    msg.utc_day = 195U;
    msg.utc_time = 0.7494255505690632;
    msg.lat = 0.6918903350608919;
    msg.lon = 0.66619148302967;
    msg.height = 0.2531524507284898;
    msg.satellites = 237U;
    msg.cog = 0.11835536450677131;
    msg.sog = 0.7152371319121568;
    msg.hdop = 0.0007181692133875206;
    msg.vdop = 0.7530070421643273;
    msg.hacc = 0.20303406908798316;
    msg.vacc = 0.2751944050461429;

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
    msg.setTimeStamp(0.6512256204284541);
    msg.setSource(7364U);
    msg.setSourceEntity(136U);
    msg.setDestination(22824U);
    msg.setDestinationEntity(193U);
    msg.time = 0.9592132256302776;
    msg.phi = 0.20425696894053114;
    msg.theta = 0.8103184036540784;
    msg.psi = 0.15976635652023752;
    msg.psi_magnetic = 0.7162079053255763;

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
    msg.setTimeStamp(0.16054093189635144);
    msg.setSource(47097U);
    msg.setSourceEntity(218U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(11U);
    msg.time = 0.20989890749687146;
    msg.phi = 0.9469853615129112;
    msg.theta = 0.48535345464320756;
    msg.psi = 0.3409064174525279;
    msg.psi_magnetic = 0.5213435469913835;

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
    msg.setTimeStamp(0.17422599353066226);
    msg.setSource(8025U);
    msg.setSourceEntity(35U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(69U);
    msg.time = 0.2579343829251449;
    msg.phi = 0.31801441744003944;
    msg.theta = 0.3451745870395799;
    msg.psi = 0.94742152167662;
    msg.psi_magnetic = 0.6347632409403363;

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
    msg.setTimeStamp(0.3204784954901093);
    msg.setSource(29565U);
    msg.setSourceEntity(74U);
    msg.setDestination(59018U);
    msg.setDestinationEntity(146U);
    msg.time = 0.1687434768491488;
    msg.x = 0.37479357801151614;
    msg.y = 0.04502111277718501;
    msg.z = 0.017063607399042002;
    msg.timestep = 0.5327096407667727;

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
    msg.setTimeStamp(0.21522487947369107);
    msg.setSource(13913U);
    msg.setSourceEntity(2U);
    msg.setDestination(26044U);
    msg.setDestinationEntity(66U);
    msg.time = 0.1021258188740406;
    msg.x = 0.6686589034407955;
    msg.y = 0.8041193233905121;
    msg.z = 0.010688691235763104;
    msg.timestep = 0.31365162188839657;

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
    msg.setTimeStamp(0.4882355235809772);
    msg.setSource(52875U);
    msg.setSourceEntity(28U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(12U);
    msg.time = 0.796410531436777;
    msg.x = 0.43591996433319513;
    msg.y = 0.09317189221188504;
    msg.z = 0.848975117767932;
    msg.timestep = 0.5893444774110479;

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
    msg.setTimeStamp(0.3329548725752245);
    msg.setSource(40816U);
    msg.setSourceEntity(32U);
    msg.setDestination(58016U);
    msg.setDestinationEntity(222U);
    msg.time = 0.22160929361877113;
    msg.x = 0.33284513058262966;
    msg.y = 0.730389066143293;
    msg.z = 0.60069117114772;

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
    msg.setTimeStamp(0.7725431882249522);
    msg.setSource(47494U);
    msg.setSourceEntity(71U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(74U);
    msg.time = 0.46286495505299685;
    msg.x = 0.27652927514237424;
    msg.y = 0.7741119109459423;
    msg.z = 0.3072671456751904;

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
    msg.setTimeStamp(0.2665536608697059);
    msg.setSource(34421U);
    msg.setSourceEntity(103U);
    msg.setDestination(24402U);
    msg.setDestinationEntity(172U);
    msg.time = 0.06446836487509733;
    msg.x = 0.4131670319855735;
    msg.y = 0.4128391375813253;
    msg.z = 0.9680872079340798;

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
    msg.setTimeStamp(0.37871234048605973);
    msg.setSource(23695U);
    msg.setSourceEntity(172U);
    msg.setDestination(51498U);
    msg.setDestinationEntity(221U);
    msg.time = 0.6869316096725715;
    msg.x = 0.47964872054736596;
    msg.y = 0.08245032890424708;
    msg.z = 0.3519289131351656;

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
    msg.setTimeStamp(0.2812518045323975);
    msg.setSource(35632U);
    msg.setSourceEntity(39U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(1U);
    msg.time = 0.002326848950847782;
    msg.x = 0.7957970949007417;
    msg.y = 0.8839618628948117;
    msg.z = 0.9854234906999635;

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
    msg.setTimeStamp(0.9200060262744009);
    msg.setSource(48322U);
    msg.setSourceEntity(0U);
    msg.setDestination(58667U);
    msg.setDestinationEntity(44U);
    msg.time = 0.8894634763358628;
    msg.x = 0.5106927778287566;
    msg.y = 0.9461617644387155;
    msg.z = 0.5224497683300746;

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
    msg.setTimeStamp(0.4067601337956195);
    msg.setSource(15566U);
    msg.setSourceEntity(181U);
    msg.setDestination(60225U);
    msg.setDestinationEntity(103U);
    msg.time = 0.14540884583486013;
    msg.x = 0.5177302544627652;
    msg.y = 0.7306159033333517;
    msg.z = 0.47505561594145584;

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
    msg.setTimeStamp(0.09372779575752033);
    msg.setSource(15383U);
    msg.setSourceEntity(232U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(158U);
    msg.time = 0.6340553932799856;
    msg.x = 0.4999842199521809;
    msg.y = 0.8949536796305664;
    msg.z = 0.6497405439049259;

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
    msg.setTimeStamp(0.3164420359237674);
    msg.setSource(3160U);
    msg.setSourceEntity(248U);
    msg.setDestination(14517U);
    msg.setDestinationEntity(197U);
    msg.time = 0.35000234295818977;
    msg.x = 0.1740128912777691;
    msg.y = 0.4762711308306301;
    msg.z = 0.5650897322026865;

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
    msg.setTimeStamp(0.5979146541630701);
    msg.setSource(21404U);
    msg.setSourceEntity(139U);
    msg.setDestination(7842U);
    msg.setDestinationEntity(182U);
    msg.validity = 66U;
    msg.x = 0.6026286844649927;
    msg.y = 0.24627065219576583;
    msg.z = 0.2824234722676362;

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
    msg.setTimeStamp(0.6225829342488345);
    msg.setSource(63474U);
    msg.setSourceEntity(240U);
    msg.setDestination(52873U);
    msg.setDestinationEntity(57U);
    msg.validity = 33U;
    msg.x = 0.04665088618625757;
    msg.y = 0.9311502841823746;
    msg.z = 0.690223163813155;

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
    msg.setTimeStamp(0.9965544663449843);
    msg.setSource(56887U);
    msg.setSourceEntity(46U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(68U);
    msg.validity = 245U;
    msg.x = 0.266646921638782;
    msg.y = 0.39353117578055563;
    msg.z = 0.811940165523851;

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
    msg.setTimeStamp(0.1253889366598051);
    msg.setSource(39900U);
    msg.setSourceEntity(21U);
    msg.setDestination(40854U);
    msg.setDestinationEntity(148U);
    msg.validity = 222U;
    msg.x = 0.1258267530363466;
    msg.y = 0.3330462644318519;
    msg.z = 0.7497783443036375;

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
    msg.setTimeStamp(0.6506837866792873);
    msg.setSource(29118U);
    msg.setSourceEntity(106U);
    msg.setDestination(18249U);
    msg.setDestinationEntity(184U);
    msg.validity = 163U;
    msg.x = 0.07426601910616903;
    msg.y = 0.4166644103038689;
    msg.z = 0.19108692778656877;

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
    msg.setTimeStamp(0.427843740158415);
    msg.setSource(8100U);
    msg.setSourceEntity(126U);
    msg.setDestination(47089U);
    msg.setDestinationEntity(101U);
    msg.validity = 218U;
    msg.x = 0.3794792100215332;
    msg.y = 0.9254250695850105;
    msg.z = 0.38625692321026617;

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
    msg.setTimeStamp(0.12827951238938473);
    msg.setSource(17988U);
    msg.setSourceEntity(186U);
    msg.setDestination(27305U);
    msg.setDestinationEntity(148U);
    msg.time = 0.6088817327835432;
    msg.x = 0.8503478776598533;
    msg.y = 0.15358930388810255;
    msg.z = 0.7997800307462996;

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
    msg.setTimeStamp(0.00509521415367109);
    msg.setSource(55599U);
    msg.setSourceEntity(23U);
    msg.setDestination(10314U);
    msg.setDestinationEntity(121U);
    msg.time = 0.47412872020436525;
    msg.x = 0.269250156418373;
    msg.y = 0.709040715199635;
    msg.z = 0.49050417875104235;

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
    msg.setTimeStamp(0.08037482663217432);
    msg.setSource(40346U);
    msg.setSourceEntity(210U);
    msg.setDestination(39411U);
    msg.setDestinationEntity(56U);
    msg.time = 0.3617164697085542;
    msg.x = 0.6212959284506768;
    msg.y = 0.20594639122047642;
    msg.z = 0.2587330604978113;

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
    msg.setTimeStamp(0.9154430589851402);
    msg.setSource(16944U);
    msg.setSourceEntity(204U);
    msg.setDestination(17312U);
    msg.setDestinationEntity(47U);
    msg.validity = 156U;
    msg.value = 0.7268911404920565;

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
    msg.setTimeStamp(0.7314658696249199);
    msg.setSource(18385U);
    msg.setSourceEntity(242U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(0U);
    msg.validity = 132U;
    msg.value = 0.4332228963350545;

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
    msg.setTimeStamp(0.32458609068296074);
    msg.setSource(12358U);
    msg.setSourceEntity(101U);
    msg.setDestination(57838U);
    msg.setDestinationEntity(47U);
    msg.validity = 113U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5377119114674545;
    tmp_msg_0.beam_height = 0.7689130013110218;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1550743787709732;

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
    msg.setTimeStamp(0.9289995769410914);
    msg.setSource(43211U);
    msg.setSourceEntity(250U);
    msg.setDestination(10598U);
    msg.setDestinationEntity(84U);
    msg.value = 0.47250846421630366;

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
    msg.setTimeStamp(0.7415786917503395);
    msg.setSource(23861U);
    msg.setSourceEntity(23U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(100U);
    msg.value = 0.31097326852919516;

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
    msg.setTimeStamp(0.10501589225101549);
    msg.setSource(55781U);
    msg.setSourceEntity(12U);
    msg.setDestination(60152U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5981581044787663;

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
    msg.setTimeStamp(0.5734717809160231);
    msg.setSource(17289U);
    msg.setSourceEntity(17U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(197U);
    msg.value = 0.4587105206404738;

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
    msg.setTimeStamp(0.3965335157479922);
    msg.setSource(37460U);
    msg.setSourceEntity(225U);
    msg.setDestination(18431U);
    msg.setDestinationEntity(2U);
    msg.value = 0.25648059250465116;

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
    msg.setTimeStamp(0.1466058183634823);
    msg.setSource(42561U);
    msg.setSourceEntity(7U);
    msg.setDestination(53977U);
    msg.setDestinationEntity(167U);
    msg.value = 0.7811171917852029;

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
    msg.setTimeStamp(0.6497392494408203);
    msg.setSource(37194U);
    msg.setSourceEntity(151U);
    msg.setDestination(8689U);
    msg.setDestinationEntity(27U);
    msg.value = 0.17692452591763153;

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
    msg.setTimeStamp(0.5560176028804712);
    msg.setSource(47045U);
    msg.setSourceEntity(35U);
    msg.setDestination(19111U);
    msg.setDestinationEntity(132U);
    msg.value = 0.7473018973002497;

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
    msg.setTimeStamp(0.5681341942322292);
    msg.setSource(23329U);
    msg.setSourceEntity(128U);
    msg.setDestination(23716U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8973404185326996;

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
    msg.setTimeStamp(0.6416169345633451);
    msg.setSource(62447U);
    msg.setSourceEntity(96U);
    msg.setDestination(24492U);
    msg.setDestinationEntity(200U);
    msg.value = 0.29938619697424673;

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
    msg.setTimeStamp(0.9747862170633897);
    msg.setSource(51588U);
    msg.setSourceEntity(110U);
    msg.setDestination(26469U);
    msg.setDestinationEntity(11U);
    msg.value = 0.975878846187638;

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
    msg.setTimeStamp(0.6312766039434567);
    msg.setSource(15439U);
    msg.setSourceEntity(22U);
    msg.setDestination(19736U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5785221920267004;

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
    msg.setTimeStamp(0.5903418672482027);
    msg.setSource(15023U);
    msg.setSourceEntity(63U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(83U);
    msg.value = 0.034101927389000974;

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
    msg.setTimeStamp(0.7460272206548517);
    msg.setSource(54962U);
    msg.setSourceEntity(84U);
    msg.setDestination(29233U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2009780109693825;

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
    msg.setTimeStamp(0.28292188156468234);
    msg.setSource(16618U);
    msg.setSourceEntity(251U);
    msg.setDestination(55519U);
    msg.setDestinationEntity(202U);
    msg.value = 0.11227186533479372;

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
    msg.setTimeStamp(0.49913845957628444);
    msg.setSource(38728U);
    msg.setSourceEntity(224U);
    msg.setDestination(24235U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5945881199122469;

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
    msg.setTimeStamp(0.304575378993723);
    msg.setSource(43904U);
    msg.setSourceEntity(185U);
    msg.setDestination(932U);
    msg.setDestinationEntity(188U);
    msg.value = 0.06824472857403285;

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
    msg.setTimeStamp(0.2897828086415569);
    msg.setSource(50695U);
    msg.setSourceEntity(32U);
    msg.setDestination(48925U);
    msg.setDestinationEntity(140U);
    msg.value = 0.8028950770512884;

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
    msg.setTimeStamp(0.3144316271297024);
    msg.setSource(38165U);
    msg.setSourceEntity(162U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(3U);
    msg.value = 0.4800907304639971;

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
    msg.setTimeStamp(0.3741145546690231);
    msg.setSource(36713U);
    msg.setSourceEntity(220U);
    msg.setDestination(44868U);
    msg.setDestinationEntity(56U);
    msg.value = 0.7377054521775045;

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
    msg.setTimeStamp(0.7661093125919649);
    msg.setSource(20452U);
    msg.setSourceEntity(104U);
    msg.setDestination(11179U);
    msg.setDestinationEntity(153U);
    msg.value = 0.4308265632992978;

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
    msg.setTimeStamp(0.48691700346366407);
    msg.setSource(57911U);
    msg.setSourceEntity(244U);
    msg.setDestination(32348U);
    msg.setDestinationEntity(90U);
    msg.value = 0.1082710360704826;

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
    msg.setTimeStamp(0.803004650946411);
    msg.setSource(11954U);
    msg.setSourceEntity(232U);
    msg.setDestination(56618U);
    msg.setDestinationEntity(217U);
    msg.value = 0.24656852015000363;

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
    msg.setTimeStamp(0.704117948854673);
    msg.setSource(31308U);
    msg.setSourceEntity(153U);
    msg.setDestination(44521U);
    msg.setDestinationEntity(220U);
    msg.value = 0.01103098041277395;

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
    msg.setTimeStamp(0.8863143914882344);
    msg.setSource(26631U);
    msg.setSourceEntity(124U);
    msg.setDestination(18637U);
    msg.setDestinationEntity(141U);
    msg.direction = 0.6288498056568773;
    msg.speed = 0.4491182175452133;

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
    msg.setTimeStamp(0.6283292714378191);
    msg.setSource(1478U);
    msg.setSourceEntity(41U);
    msg.setDestination(48703U);
    msg.setDestinationEntity(9U);
    msg.direction = 0.21797066487444539;
    msg.speed = 0.25811023804876543;

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
    msg.setTimeStamp(0.24530754266585353);
    msg.setSource(57893U);
    msg.setSourceEntity(19U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.7576533282104813;
    msg.speed = 0.7563757493076343;

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
    msg.setTimeStamp(0.172854365569453);
    msg.setSource(35127U);
    msg.setSourceEntity(190U);
    msg.setDestination(2101U);
    msg.setDestinationEntity(252U);
    msg.value = 0.3804071590798088;

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
    msg.setTimeStamp(0.5357974543055922);
    msg.setSource(5700U);
    msg.setSourceEntity(197U);
    msg.setDestination(35673U);
    msg.setDestinationEntity(176U);
    msg.value = 0.11511858965306065;

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
    msg.setTimeStamp(0.016962430904451598);
    msg.setSource(61186U);
    msg.setSourceEntity(201U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(135U);
    msg.value = 0.730332480268014;

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
    msg.setTimeStamp(0.5071288438838316);
    msg.setSource(65038U);
    msg.setSourceEntity(117U);
    msg.setDestination(7253U);
    msg.setDestinationEntity(40U);
    msg.value.assign("ALDHEWVBGAQEYKTNFWPLTHXOXHUGWCZIVWBBIDFGARDPHHESZRLNMLUNVZNXBUUPGYUBFYNBTAOYTKSSRAIQDFPECRJSADJVIUIGSEQRDOTXKKOCQ");

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
    msg.setTimeStamp(0.9586198583850186);
    msg.setSource(34387U);
    msg.setSourceEntity(50U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(202U);
    msg.value.assign("GBKSBCODATGUTZFLNXLOSFVBZQGDRDWLFAGGLMIRFXMGQPKZXOAGFWEFPZLRIJUTSPCAXUHQBKZUPIYUYYKNXDYVMWNRHNEHWNQXVLWHZBFKIJBKTIHNYSZFASMKBMHOEITJUAIDINWSCNEDXAXRXPVCYJKR");

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
    msg.setTimeStamp(0.3006274193807935);
    msg.setSource(51546U);
    msg.setSourceEntity(229U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(138U);
    msg.value.assign("STLQZCGTYUUFXKOIYBYHSBIDHMLXURFTFRVOHQFGXAUHHQAPRWKEQKRXQYEQGMMYHXWKJANWKOIWDJGPEAZUCIDBVRGQKBAVCKWMSSJBLLSPSJOLWVZNQFMYDDHUOYRCMCQEBFNYWNZICBZZPPTHOBZWFUQJJSFSSOPEXIEIDSGTATNVNCPMGEANKNR");

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
    msg.setTimeStamp(0.37532398515332754);
    msg.setSource(42595U);
    msg.setSourceEntity(52U);
    msg.setDestination(15917U);
    msg.setDestinationEntity(9U);
    const char tmp_msg_0[] = {113, 94, 35, -40, 110, 110, -38, -28, -37, -57, 100, 47, 32, 6, -90, 9, -98, -16, 49, -31, 112, 66, 46, 2, 93, -7, -116, -128, 52, 39, 28, 7, 18, -75, 120, 2, -26, -116, 3, -105, -14, -58, -58, 84, -81, -126, -13, -63, -33, 61, 124, 12, 111, -71, -38, -59, -108, 38, -6, -108, -106, 10, 59, 109, 48, 79, -29, 91, 39, -48, 101, 38, 124, -8, -98, -7, -70, 114, 110, -47, 28, -8, 38, 105, -125, 41, 87, 2, -83, 99, -125, -32, -75, -78, 93, 32, 78, -39, 28, 78, -22, -98, -107, -123, 6, -105, 84, 41, -126, 23, 79, -21, 66, -126, 59, -88, 54, 29, 31, 99, -16, -113, 25, 77, 100, -35, 4, 73, -39, 46, 10, -14, -102, 19, 93, 50, 60, -49, 13, 27, 7, 83, 49, -6, 41, -124, 67, -56, -57, 67, -89, 90, 98, -78, -75, 15, -30, -39, -77, -127, 103, 72, -41, 86, -113, 51, 96, -75, 85, 115, -74, 76, -32, 93, -38, 44, -69, 38, 37, -75, 70, 70, -120, 45, -82, 18, -11, 79, -39, -17, -17, 4, 91, -26, -90, 5, -50, 54, 78, -114, 62, -83, 104, 69, -72, -79, -41, -96, -63, -75, 16, -71, -15, 110, 106, -85, 40};
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
    msg.setTimeStamp(0.9245107502050577);
    msg.setSource(42025U);
    msg.setSourceEntity(126U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(249U);
    const char tmp_msg_0[] = {123, -102, 19, -94, -102, 40, -99, -58, 96, 95, -103, -120, -42, -37, 4, -61, -91, -80, 43, 48, 72, -80, 19, -124, 93, 67, -85, -116, -116, 41, -31, -33, -35, -98, -105, 37, -69, -19, 47, -103, -62, 105, -88, 96, -30, 11, -68, -14, 52, 112, -74, -111, 113, -98, -74, 4, -104, -56, -44, 116, 10, -73, 126, 13, -1, 20, 100, -65, -114, -32, 64, 119, -87, 20, 60, -52, -36, 85, 100, 108, 115, -88, 49, 50, -46, -104, -35, -119, 42, 42, 124, -69, -97, -14, -76, -41, -124, -34, -24, -109, 17, 125, -70, 63, -103, -109, -84, -19, -111, -69, -26, 48, 108, 16, -88, -46, -115, -13, 31, 73, 45, -108, -62, 100, -77, 98, -48, -7, -101, -125, -71, 111, -81, -5, -41, -93, -32, 86, -66, -10, -125, 37, 103, 121, 22, -21, 54, -42, -34, -111, -110, 84, -96, 48, 20, -11, -81, 60, 114, 77, -106, 45, -84, -109, 113, 41, 98, 46, -17, -22, 37, 44, -69, -81, -41, 44, 49, -114, 54, -26, 94, 113, 8, -36, -66, 15, 29, -57, -95, -41, 69, -33, 46, -93, -32, -43, 52, -65, 43, -120, -72};
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
    msg.setTimeStamp(0.9213584723026876);
    msg.setSource(8603U);
    msg.setSourceEntity(123U);
    msg.setDestination(33322U);
    msg.setDestinationEntity(170U);
    const char tmp_msg_0[] = {-83, 113, -100, -55, -27, -32, 50, -105, -56, -1, -29, -128, -25, 3, -128, 40, 95, 5, 4, -52, -117, 89, -128, -30, -109, 19, 30, -112, -79, -12, 124, -58, 111, 28, -79, 26, 21, -125, -117, 58, 93, -12, -36, 80, -107, 112, -92, 26, -101, -29, -32, 116, 104, -82, -11, 77, -67, -103, 77, 83, -69, 24, 97, -65, 29, -77, -76, 71, -98, 20, 71, -86, 18, 108, -111, -116, 90, 1, 72, -68, 35, -53, 61, 6, 66, 82, 91, -68, -66, 86, -41, 1, -39, -121, -74, 11, -59, -73, -121, -25, -49, -48, 92, 101, -42, 124, 0, -24, -14, -4, 69, -81, 85, 21, 34, -85, 99, -127, -54, 123, 27, -40, 97, -111, 41, -69, 74, 17, -41, -77, -69, -2, 77, -91, 96, 125, -41, 79, -78, -72, -83, -24, -117, -34, 87, -74, -13, 12, 21, -72, 112, 56, -25, 103, -128, -64, -68, -76, -31, 76, -104, -120, 38, 63, -53, 33, 78, -110, 19, -16, -44, 111, 81, -62, -29, 81, 120, 92, -1, -37, 41, -99, -11, -112, 97, 121, -41, 69, 65, -47, 92, 37, 113, 55, -111, -47, -115, -10, 48, -66};
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
    msg.setTimeStamp(0.07260128035655689);
    msg.setSource(60902U);
    msg.setSourceEntity(132U);
    msg.setDestination(36706U);
    msg.setDestinationEntity(199U);
    msg.frequency = 1952359995U;
    msg.min_range = 24927U;
    msg.max_range = 10239U;

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
    msg.setTimeStamp(0.7821024378340286);
    msg.setSource(31866U);
    msg.setSourceEntity(167U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(5U);
    msg.frequency = 2956550445U;
    msg.min_range = 61628U;
    msg.max_range = 1400U;

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
    msg.setTimeStamp(0.15901842976402214);
    msg.setSource(41233U);
    msg.setSourceEntity(162U);
    msg.setDestination(62508U);
    msg.setDestinationEntity(115U);
    msg.frequency = 3762556238U;
    msg.min_range = 52325U;
    msg.max_range = 54353U;

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
    msg.setTimeStamp(0.4620102846845253);
    msg.setSource(53751U);
    msg.setSourceEntity(89U);
    msg.setDestination(52862U);
    msg.setDestinationEntity(165U);
    msg.type = 197U;
    msg.frequency = 485564899U;
    msg.min_range = 5509U;
    msg.max_range = 26848U;
    msg.bits_per_point = 60U;
    msg.scale_factor = 0.18468140649445908;
    const char tmp_msg_0[] = {-112, -95, 99, 1, 78, 35, -70, -82, 53, 28, 43, 25, -54, 81, -31, 11, -107, -63, 30, -102, 40, 54, 34, 14, -9, -63, -31, -106, 50, 39, 112, -67, -54, 58, 58, 120, 113, 34, -85, -53, -5, 104, 2, -61, 31, -58, -87, -107, -98, -15, -4, 92, -2, -105, 78, 45, 28, 36, -79, 3, -63, 7, -119, -72, -56, 106, 27, 95, -87, 77, 88, 44, -17, 110, -109, -125, 15, 65, 123, 73, 21, 24, 63, 108, 72, 68, -95, 35, -126, -98, 92, -98, 17, -54, -114, 61, -115, -4, -106, -69, 74, 96, 62, -52, 112, 67, 56, 20, 49, -61, 124, -113, -8, -112, 65, -112, 31, -79, -10, -89, 53, 84, -110, -50, -28, 21, 48, 58, 62, -47, 111, 70, 33, 46, -81, -30, 3, 113, -103, -64, 123, 63, 35, 22, -97, -43, -93, 86, 79, -8, -127, 67, 36, -74, -68, 37, -5, -121, -60, 68, 79, -53, 111, 90, -21, 52, -60, -33, -70, -72, 12, 115, -120, -127, -84, -52, 100, 59, 24, -26, -17, 11, -89, -51, -48, 38, 88, -16, 87, -101, 75, 103, 4, 82, -82, 105, 111, -41, -15, 104, 29, 50, 39, -125, -88, -46, -79, 44, -102, 59, -64, 104, -12, 104, 33, 76, -75, 95, 29, -41, 25, 24, 84, -21, 21, 68, -80, 86, 35, 81, -90, 98, -23, -126, 82, -24, -77, -4, 100, -104, 106, 34, 59, 65};
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
    msg.setTimeStamp(0.25673838659418613);
    msg.setSource(39041U);
    msg.setSourceEntity(17U);
    msg.setDestination(38988U);
    msg.setDestinationEntity(239U);
    msg.type = 90U;
    msg.frequency = 856262501U;
    msg.min_range = 46487U;
    msg.max_range = 31271U;
    msg.bits_per_point = 163U;
    msg.scale_factor = 0.9489820386654791;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.39355207236977396;
    tmp_msg_0.beam_height = 0.48217498600967645;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {93, 13, -37, -43, -15, -113, -126, -61, -97, 121, -93, 119, 124, -30, 122, 10, -93, -124, -56, -29, 95, -16, -5, 83, 54, -51};
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
    msg.setTimeStamp(0.7000666536825705);
    msg.setSource(60591U);
    msg.setSourceEntity(73U);
    msg.setDestination(63626U);
    msg.setDestinationEntity(211U);
    msg.type = 177U;
    msg.frequency = 3146622596U;
    msg.min_range = 27306U;
    msg.max_range = 51635U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.6527180793659443;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.16328833906423412;
    tmp_msg_0.beam_height = 0.28907089140170594;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {119, 64, -24, 53, -4, -106, 48, 30, 113, 84, -11, -20, 40, -1, 81, 102, 94, 80, -75, 97, 51, 47, -24, 83, 41, 76, -80, 41, -82, 4, 56, 87, -73, -33, 44, 76, 113, -95, 59, 124, -79, 50, -69, -82, -8, -17, 123, -68, -59, 95, -17, -49, 12, 77, 46, 25, -9, -46, -95, -127, 10, 118, -20, -119, -18, 82, 43, -68, 32, 48, -37, 23, 52, -61, 40, -33, 1, -93, -97, 1, 3, -50, 106, 83, 64, 28, 48, -108, -81, 4, -27, 101, 60, 70, 59, -80, -77, -119, 60, 11, -68, -118, -107, 73, -52, -54, 81, -88, -101, -75, -106, 42, -18, 80, 71, 64, 9, 19, 75, 116, 61, -113, -51, 63, 113, 79, 80, 2, -118, 20};
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
    msg.setTimeStamp(0.4251156139083979);
    msg.setSource(62200U);
    msg.setSourceEntity(29U);
    msg.setDestination(18234U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.5422862783170828);
    msg.setSource(64310U);
    msg.setSourceEntity(209U);
    msg.setDestination(23328U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.04600103090144325);
    msg.setSource(16131U);
    msg.setSourceEntity(1U);
    msg.setDestination(21075U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.2853087643239185);
    msg.setSource(8825U);
    msg.setSourceEntity(153U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(41U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.16679941792502917);
    msg.setSource(21725U);
    msg.setSourceEntity(205U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(109U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.5295748415292284);
    msg.setSource(8209U);
    msg.setSourceEntity(240U);
    msg.setDestination(34283U);
    msg.setDestinationEntity(204U);
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
    msg.setTimeStamp(0.6542992683944334);
    msg.setSource(63170U);
    msg.setSourceEntity(87U);
    msg.setDestination(50443U);
    msg.setDestinationEntity(159U);
    msg.value = 0.20279315095966943;
    msg.confidence = 0.5800265223271821;
    msg.opmodes.assign("JHSFVJSFEFATXGCVNCMVNGMYLUARWXFYIUEBWERVMQRXBPDLJQDCXETQSZOBBVOCKXGBWGCJMABWIKUKZOIJFRRJHKASYSYELAMHVMSOOXWLQEYDZIWLICQITGAUBKWIZHQXZDYPFQTVNGQFUYWRZJYOADRTACCZRNLOLEHVOSNPTQMDODSRGFEEPKHXZXYXHM");

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
    msg.setTimeStamp(0.4593934398614754);
    msg.setSource(8743U);
    msg.setSourceEntity(20U);
    msg.setDestination(28270U);
    msg.setDestinationEntity(244U);
    msg.value = 0.1730570883775724;
    msg.confidence = 0.7940174939677817;
    msg.opmodes.assign("SVJTGJIHFNIIBUXMWEWLVVJBANAHYQSJ");

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
    msg.setTimeStamp(0.8050088703607317);
    msg.setSource(62829U);
    msg.setSourceEntity(61U);
    msg.setDestination(48975U);
    msg.setDestinationEntity(90U);
    msg.value = 0.14096402227916427;
    msg.confidence = 0.9650130848299026;
    msg.opmodes.assign("ZRGCCZXKXBRIYYRTDLAXFKRVFUKL");

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
    msg.setTimeStamp(0.907048447271122);
    msg.setSource(30529U);
    msg.setSourceEntity(2U);
    msg.setDestination(51372U);
    msg.setDestinationEntity(192U);
    msg.itow = 503206718U;
    msg.lat = 0.21396935357261393;
    msg.lon = 0.20390897625885807;
    msg.height_ell = 0.6735834210389771;
    msg.height_sea = 0.37480592930449486;
    msg.hacc = 0.5739425171554485;
    msg.vacc = 0.17673630466332224;
    msg.vel_n = 0.7858271261933116;
    msg.vel_e = 0.5948952871194201;
    msg.vel_d = 0.8484788509784232;
    msg.speed = 0.6692588382402928;
    msg.gspeed = 0.4732416815863051;
    msg.heading = 0.06621528373767605;
    msg.sacc = 0.004989515142417522;
    msg.cacc = 0.3570871593433863;

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
    msg.setTimeStamp(0.09671169398214619);
    msg.setSource(35236U);
    msg.setSourceEntity(18U);
    msg.setDestination(50624U);
    msg.setDestinationEntity(77U);
    msg.itow = 1529644372U;
    msg.lat = 0.6074764660123823;
    msg.lon = 0.2938245005891833;
    msg.height_ell = 0.024045057840160866;
    msg.height_sea = 0.16430601322167038;
    msg.hacc = 0.44091916026172384;
    msg.vacc = 0.4360976619260153;
    msg.vel_n = 0.6864723692979599;
    msg.vel_e = 0.6613122592950339;
    msg.vel_d = 0.9369897715660092;
    msg.speed = 0.5814612967118831;
    msg.gspeed = 0.1137435441936222;
    msg.heading = 0.010923363995170687;
    msg.sacc = 0.17397119468895617;
    msg.cacc = 0.9491818955400263;

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
    msg.setTimeStamp(0.9756916217017166);
    msg.setSource(34836U);
    msg.setSourceEntity(191U);
    msg.setDestination(26593U);
    msg.setDestinationEntity(27U);
    msg.itow = 2071323876U;
    msg.lat = 0.5549447831456702;
    msg.lon = 0.3218148987815749;
    msg.height_ell = 0.36756102333611407;
    msg.height_sea = 0.4949843565124714;
    msg.hacc = 0.4856064290281563;
    msg.vacc = 0.6694813359243714;
    msg.vel_n = 0.43060855750675264;
    msg.vel_e = 0.5502586024669794;
    msg.vel_d = 0.6989122974388832;
    msg.speed = 0.5121449873273659;
    msg.gspeed = 0.513658976029927;
    msg.heading = 0.7970066789446697;
    msg.sacc = 0.8781689362280181;
    msg.cacc = 0.417208606822945;

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
    msg.setTimeStamp(0.6138795179203228);
    msg.setSource(26994U);
    msg.setSourceEntity(198U);
    msg.setDestination(56710U);
    msg.setDestinationEntity(43U);
    msg.id = 163U;
    msg.value = 0.7772321413977831;

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
    msg.setTimeStamp(0.6300903368114381);
    msg.setSource(43735U);
    msg.setSourceEntity(28U);
    msg.setDestination(21012U);
    msg.setDestinationEntity(202U);
    msg.id = 118U;
    msg.value = 0.4888810399269853;

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
    msg.setTimeStamp(0.3040760914009679);
    msg.setSource(2831U);
    msg.setSourceEntity(102U);
    msg.setDestination(14226U);
    msg.setDestinationEntity(29U);
    msg.id = 19U;
    msg.value = 0.8836923474052912;

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
    msg.setTimeStamp(0.10090241352205431);
    msg.setSource(36839U);
    msg.setSourceEntity(70U);
    msg.setDestination(31731U);
    msg.setDestinationEntity(139U);
    msg.x = 0.6488573245572775;
    msg.y = 0.31106167927841455;
    msg.z = 0.1579050824901319;
    msg.phi = 0.015253148820916995;
    msg.theta = 0.11221773320964257;
    msg.psi = 0.1081669521830827;

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
    msg.setTimeStamp(0.47252822026941366);
    msg.setSource(36664U);
    msg.setSourceEntity(77U);
    msg.setDestination(52275U);
    msg.setDestinationEntity(29U);
    msg.x = 0.7645972027685562;
    msg.y = 0.5982214574996734;
    msg.z = 0.6812565297893514;
    msg.phi = 0.5231951262032155;
    msg.theta = 0.4667218656129045;
    msg.psi = 0.3252695364220488;

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
    msg.setTimeStamp(0.04570237035761604);
    msg.setSource(8275U);
    msg.setSourceEntity(6U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(80U);
    msg.x = 0.06634347007607655;
    msg.y = 0.1490760270003434;
    msg.z = 0.8111999214442492;
    msg.phi = 0.1395323007651469;
    msg.theta = 0.7520761463830069;
    msg.psi = 0.3155496311209164;

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
    msg.setTimeStamp(0.6548637776189697);
    msg.setSource(33064U);
    msg.setSourceEntity(7U);
    msg.setDestination(28192U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.764465856514203;
    msg.beam_height = 0.08382277727692156;

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
    msg.setTimeStamp(0.7906869110201419);
    msg.setSource(14804U);
    msg.setSourceEntity(214U);
    msg.setDestination(42230U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.06388755944654734;
    msg.beam_height = 0.13132610251555343;

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
    msg.setTimeStamp(0.9475938358386902);
    msg.setSource(34056U);
    msg.setSourceEntity(35U);
    msg.setDestination(47785U);
    msg.setDestinationEntity(89U);
    msg.beam_width = 0.2595450295931554;
    msg.beam_height = 0.25754405847068396;

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
    msg.setTimeStamp(0.10740690006920706);
    msg.setSource(58391U);
    msg.setSourceEntity(242U);
    msg.setDestination(33231U);
    msg.setDestinationEntity(212U);
    msg.id = 236U;
    msg.zoom = 218U;
    msg.action = 160U;

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
    msg.setTimeStamp(0.8250178374385366);
    msg.setSource(29317U);
    msg.setSourceEntity(17U);
    msg.setDestination(62579U);
    msg.setDestinationEntity(20U);
    msg.id = 217U;
    msg.zoom = 15U;
    msg.action = 76U;

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
    msg.setTimeStamp(0.16004641479180204);
    msg.setSource(3928U);
    msg.setSourceEntity(148U);
    msg.setDestination(8742U);
    msg.setDestinationEntity(202U);
    msg.id = 216U;
    msg.zoom = 183U;
    msg.action = 209U;

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
    msg.setTimeStamp(0.5027122967996754);
    msg.setSource(11962U);
    msg.setSourceEntity(245U);
    msg.setDestination(50935U);
    msg.setDestinationEntity(87U);
    msg.id = 181U;
    msg.value = 0.9100969558394897;

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
    msg.setTimeStamp(0.3979426813157825);
    msg.setSource(58453U);
    msg.setSourceEntity(99U);
    msg.setDestination(4109U);
    msg.setDestinationEntity(69U);
    msg.id = 65U;
    msg.value = 0.7765063913363957;

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
    msg.setTimeStamp(0.7832177293744279);
    msg.setSource(28279U);
    msg.setSourceEntity(14U);
    msg.setDestination(22605U);
    msg.setDestinationEntity(119U);
    msg.id = 66U;
    msg.value = 0.5361730824165519;

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
    msg.setTimeStamp(0.7492017022509725);
    msg.setSource(56749U);
    msg.setSourceEntity(110U);
    msg.setDestination(15840U);
    msg.setDestinationEntity(110U);
    msg.id = 133U;
    msg.value = 0.19087104227373042;

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
    msg.setTimeStamp(0.1874549274118268);
    msg.setSource(29020U);
    msg.setSourceEntity(112U);
    msg.setDestination(17120U);
    msg.setDestinationEntity(121U);
    msg.id = 161U;
    msg.value = 0.9754298715735419;

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
    msg.setTimeStamp(0.9303775486999033);
    msg.setSource(58164U);
    msg.setSourceEntity(114U);
    msg.setDestination(60123U);
    msg.setDestinationEntity(150U);
    msg.id = 143U;
    msg.value = 0.09392874278650343;

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
    msg.setTimeStamp(0.510892744206549);
    msg.setSource(31860U);
    msg.setSourceEntity(121U);
    msg.setDestination(44085U);
    msg.setDestinationEntity(148U);
    msg.id = 74U;
    msg.angle = 0.7101938613972153;

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
    msg.setTimeStamp(0.8746436329548781);
    msg.setSource(46710U);
    msg.setSourceEntity(184U);
    msg.setDestination(50794U);
    msg.setDestinationEntity(0U);
    msg.id = 11U;
    msg.angle = 0.6550112034751626;

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
    msg.setTimeStamp(0.041016387462164405);
    msg.setSource(13906U);
    msg.setSourceEntity(76U);
    msg.setDestination(56313U);
    msg.setDestinationEntity(211U);
    msg.id = 102U;
    msg.angle = 0.686857736694356;

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
    msg.setTimeStamp(0.5614925139225698);
    msg.setSource(31334U);
    msg.setSourceEntity(22U);
    msg.setDestination(43796U);
    msg.setDestinationEntity(50U);
    msg.op = 179U;
    msg.actions.assign("UBPSMBCAOFDHLQWISNTCGXBWLFECWQLIJAJZRFNMGXEATTBGZCSXBLGOHHCJUMFGUSAZJONOJNINHBRQKTDPSPRDQZDPWAEQJHHNOISUUCRFHBEYHAAWTCXOVKODNFKISSGXVYMPZWWGPR");

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
    msg.setTimeStamp(0.8432824724327423);
    msg.setSource(4832U);
    msg.setSourceEntity(36U);
    msg.setDestination(21576U);
    msg.setDestinationEntity(227U);
    msg.op = 141U;
    msg.actions.assign("XVJTITYMQLYOVVNVGMIGMUFRHDDXCCNKSHFKFXRZRAAJDTLTXBBUTQMWAEZXOLCZZUZAYUKSOFSMTWPXZFWBOJKNJZCNUTJMEPNGXLKVBRAQRBGIQJEYHFQUAIWLWIWOWFSYLCTHMRDNDFDAZRGIYIIPBNCOPSKG");

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
    msg.setTimeStamp(0.9092832435037983);
    msg.setSource(2063U);
    msg.setSourceEntity(45U);
    msg.setDestination(34388U);
    msg.setDestinationEntity(125U);
    msg.op = 134U;
    msg.actions.assign("ZSDIGKFLHSCLPESRSXWNPBULJITOIUJPGMTTHXVCKMMFZAPNBWDELDGVOMZZVYMZBTNLADGPZKYCRFPIGZDZPQORTPRNQFGVEOANVKIXAODBTLDUJJCXGBXQLQUKIAXY");

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
    msg.setTimeStamp(0.5993148158857675);
    msg.setSource(39595U);
    msg.setSourceEntity(191U);
    msg.setDestination(65013U);
    msg.setDestinationEntity(28U);
    msg.actions.assign("WAHSSDKLBXHPOQVNYJFOFYCAEVKCUJRCHPRGXIEZPUURLVAVZUPGYEYBWMFHMNAGVBLWSTYZXQAXIELLYFIKDUVDVDIKJQERCEKGOWCQNOZWIRGDDAVCTZGBKOQOPDUPBJJWHMWVBYQIMNZXNNOQJSTMWCUZMFYNAE");

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
    msg.setTimeStamp(0.9878976512264525);
    msg.setSource(11148U);
    msg.setSourceEntity(169U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(189U);
    msg.actions.assign("DSCHNQTFIGOFDUHVYASKLJUOONEZLMBQSVTLLJOCBGIQCETQQISHHPDPNQQNZCEMLWXZRWRPGA");

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
    msg.setTimeStamp(0.31232168476732103);
    msg.setSource(59085U);
    msg.setSourceEntity(66U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(78U);
    msg.actions.assign("IWLLPFNPGLUTSOMTPPEJVJLUXOGNCVNBXJZRHCHCXICSXWKBZDJLIXDJFMPOPCHMTQYKDDEMCOOYQKQSXAFKZMTZRYRTXVNVBKUZAGMQUIRGLPWNIZTBWRXYNZHN");

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
    msg.setTimeStamp(0.9212644376493185);
    msg.setSource(56747U);
    msg.setSourceEntity(191U);
    msg.setDestination(49619U);
    msg.setDestinationEntity(243U);
    msg.button = 168U;
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
    msg.setTimeStamp(0.6406002001553646);
    msg.setSource(26197U);
    msg.setSourceEntity(140U);
    msg.setDestination(1868U);
    msg.setDestinationEntity(213U);
    msg.button = 180U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.49577487563040457);
    msg.setSource(48617U);
    msg.setSourceEntity(106U);
    msg.setDestination(14867U);
    msg.setDestinationEntity(192U);
    msg.button = 199U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.6918152126994724);
    msg.setSource(4749U);
    msg.setSourceEntity(210U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(154U);
    msg.op = 138U;
    msg.text.assign("NREVXNQDWZGSDQPHBSVBTHRFNYVMHNTQGWILADNSCMQUEH");

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
    msg.setTimeStamp(0.5786332708007573);
    msg.setSource(62647U);
    msg.setSourceEntity(121U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(51U);
    msg.op = 135U;
    msg.text.assign("IQWSOGFYIQEJHMCZOGKKWVEYEIWYQFGLDURBIDECNRSNBONYLTTUHEWTFVIUCRLYFRTYNOTASFKSUEZJVQMQGDAMMAJXZLQKTKZRES");

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
    msg.setTimeStamp(0.9470291403437059);
    msg.setSource(38287U);
    msg.setSourceEntity(16U);
    msg.setDestination(35953U);
    msg.setDestinationEntity(179U);
    msg.op = 16U;
    msg.text.assign("WWMEPELNPTJWKJKNDJHBKKCMCPHYQETZJYHVFTQOQIUWERFGBYRFKONUZQVUQTGRNLRROVMTJDJPBN");

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
    msg.setTimeStamp(0.8632297071622974);
    msg.setSource(48456U);
    msg.setSourceEntity(86U);
    msg.setDestination(21867U);
    msg.setDestinationEntity(237U);
    msg.op = 51U;
    msg.time_remain = 0.41189061302958674;
    msg.sched_time = 0.5809814023199693;

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
    msg.setTimeStamp(0.22286514928232903);
    msg.setSource(45460U);
    msg.setSourceEntity(66U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(1U);
    msg.op = 163U;
    msg.time_remain = 0.48329100054097396;
    msg.sched_time = 0.12420250885646966;

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
    msg.setTimeStamp(0.8417200310887218);
    msg.setSource(63263U);
    msg.setSourceEntity(144U);
    msg.setDestination(7927U);
    msg.setDestinationEntity(105U);
    msg.op = 53U;
    msg.time_remain = 0.717537793541382;
    msg.sched_time = 0.43471373066775265;

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
    msg.setTimeStamp(0.7833829843972311);
    msg.setSource(61996U);
    msg.setSourceEntity(59U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(218U);
    msg.name.assign("WXNPQDGSVLCMGTMOGFYPNTPQP");
    msg.op = 158U;
    msg.sched_time = 0.6295919269262249;

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
    msg.setTimeStamp(0.7668932471138284);
    msg.setSource(23364U);
    msg.setSourceEntity(129U);
    msg.setDestination(39217U);
    msg.setDestinationEntity(159U);
    msg.name.assign("TZHRFOROEJZDMPUZZJLRBHLYZSTHRWUOXSUCYTWMATVEIOWONUZHXCYSPO");
    msg.op = 60U;
    msg.sched_time = 0.24334481024253174;

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
    msg.setTimeStamp(0.5463080950317029);
    msg.setSource(22453U);
    msg.setSourceEntity(117U);
    msg.setDestination(7474U);
    msg.setDestinationEntity(41U);
    msg.name.assign("OEHEYARKGNJEKJKRWSOVUOLIDAMZKWTNBDGIUENTGIWMEIBALYLVHDPYRVNEPGKWAFMOXOJTSWQPZALFECZNJFABWSMQKGYKJWBOZNXKHVLFRVUGBYSAITGIQFJRZKDCMNFOZUFCWXMIHVYLPQYSFPBGOMDHRTQRCSIDEUBZQBVXPPHCQDGHUJANT");
    msg.op = 21U;
    msg.sched_time = 0.3629988639394994;

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
    msg.setTimeStamp(0.4121866306295833);
    msg.setSource(44213U);
    msg.setSourceEntity(204U);
    msg.setDestination(14894U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.1469649476813525);
    msg.setSource(14968U);
    msg.setSourceEntity(241U);
    msg.setDestination(24991U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.17005311711967974);
    msg.setSource(37548U);
    msg.setSourceEntity(152U);
    msg.setDestination(39733U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.8047259191998646);
    msg.setSource(43720U);
    msg.setSourceEntity(125U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(7U);
    msg.name.assign("ZNCEXFHIYGLUEQIWWGQAQSCHTZXKTLJOGFBLGYOBRJKXWKHRUYUUIOFFHRF");
    msg.state = 226U;

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
    msg.setTimeStamp(0.2648640783058632);
    msg.setSource(45917U);
    msg.setSourceEntity(252U);
    msg.setDestination(22363U);
    msg.setDestinationEntity(159U);
    msg.name.assign("KXDCZPGBSSIOLDETHCNMJJQLAPJVXCWGONCPKGZKZBKQHRNSFOJKGEWORHYTKNDDKIBJYMWFHCLEESJGPGOHADMSDRGUYFTYRLUHBXNCWWIFTEANTNZRAOTQVHTZQSY");
    msg.state = 114U;

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
    msg.setTimeStamp(0.6097992996039506);
    msg.setSource(63992U);
    msg.setSourceEntity(14U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ZNVBAXUDWGOQCYWOHINZNNGEPDRPGJJIASZFNLAOJKGFXPZCOITDIXBWVLLLAUPKDTFOWECTPVQNQKYBHNJJOSZOFLJTAAMDYVJAZUPAKRAVQ");
    msg.state = 188U;

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
    msg.setTimeStamp(0.8162632180725403);
    msg.setSource(38202U);
    msg.setSourceEntity(61U);
    msg.setDestination(15213U);
    msg.setDestinationEntity(160U);
    msg.name.assign("GXMBZCOOUWCDMUBLOFWHQQHJXKEINBNGWGWEKDNIPKOVJFSZMJMAOHFUNBXLPZIVQATCDTPYUSFSHBNGXZOXEKGNSUYPCGVZKMJVWWYQYARNSDQTKDTPESVKVITFPRYLAKLRYOEGJRJXVOKRGZNMPUDPLFEQRFMRVTOMBZBMHBAHUILSCDUJFXIQYIBXJCSDLERKUSAXQWSZUQGTWHHCPCGYDACPBYHWIVNTJAOIIZACWEDZXLE");
    msg.value = 25U;

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
    msg.setTimeStamp(0.6238896890284075);
    msg.setSource(52754U);
    msg.setSourceEntity(26U);
    msg.setDestination(62872U);
    msg.setDestinationEntity(62U);
    msg.name.assign("NBXDBHRJGAEFNCERFCKUESCYMKRDCDUOMSAMQTGMATHLBVTGYXK");
    msg.value = 28U;

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
    msg.setTimeStamp(0.0736249024057476);
    msg.setSource(31662U);
    msg.setSourceEntity(126U);
    msg.setDestination(7228U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ATATXKEPYYMIWKLQYYJBAWVFGWSOYVLDWULRWTNQLMYNALCBTUZUXGKAZQTRPEONODYTDTHJZXWINWJCIKSCXHSKDSWODDQJEPHFLDIAZRXSIYHLXGXDTTFAQREM");
    msg.value = 144U;

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
    msg.setTimeStamp(0.24086233462058448);
    msg.setSource(31163U);
    msg.setSourceEntity(188U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(113U);
    msg.name.assign("JECAMMRSZQXHAKKKJNIFDYXLLAHVQOFOAVVVBWLTHEWRLKCWWQBIBZASIGRBZXESHQCPWLGPSGNDQFIFFRMNIZDMDSWBDQD");

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
    msg.setTimeStamp(0.6683564442367903);
    msg.setSource(61589U);
    msg.setSourceEntity(229U);
    msg.setDestination(31934U);
    msg.setDestinationEntity(93U);
    msg.name.assign("WNRSMZWYMQVAFJDPCQJKCFEHNXGYFAFTPFPO");

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
    msg.setTimeStamp(0.44396163440936043);
    msg.setSource(12199U);
    msg.setSourceEntity(158U);
    msg.setDestination(34900U);
    msg.setDestinationEntity(225U);
    msg.name.assign("JVVLQGFUZUIKLBTADRZYHTLIKVXYKYPSLEZNKWYSQHPMECWWERWQSNKQFEBIKDOHBMWINEALZXPACCWFGMMYERIRBJQTEMXNYSBFSUATXVNGRTLOXCXUPSTOGAHQVPCKDGVIUPOIUGGANLVYZYMJVGZHVFMRMSPPDMGXSWQBJJLMZHNHQBAUOCOCWPFTTFZJCQFOKBOKTHUSRDWUDJNCKPEJFHBNIRYDBFNIQDERXAAJXXITUVDAJEY");

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
    msg.setTimeStamp(0.4662558918660692);
    msg.setSource(23514U);
    msg.setSourceEntity(200U);
    msg.setDestination(51090U);
    msg.setDestinationEntity(96U);
    msg.name.assign("BSVELUXVMRQEOYMOGTWIZXZATFRDGZTXRAHHITITFFEGTQDDIMADMDKCDPFGUUKPXOYUVCSWCZYVIMCSBJCHXDUGBMRQLJUZWSBXUOBEKJBTPYTNCHOKPKBMMZQKVHYNJFUNSJFAWYAZJLQSQYSHNFBORPYOVNRDPIAWGIAHDEEKSEWELLRZXNUVNMHZRKFPAYONWESPIPSQAQKJWRLGLWVLJILBUGPZXRFCDQCEKAYGNLWVFMQHG");
    msg.value = 218U;

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
    msg.setTimeStamp(0.6737703546505964);
    msg.setSource(56394U);
    msg.setSourceEntity(94U);
    msg.setDestination(10665U);
    msg.setDestinationEntity(78U);
    msg.name.assign("DEDDXZSZSLSHQEHISDUDUBJHWBARPUAWUQOHXFKXUPNBRZYXXBH");
    msg.value = 87U;

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
    msg.setTimeStamp(0.5760167402330509);
    msg.setSource(21444U);
    msg.setSourceEntity(32U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(101U);
    msg.name.assign("YOWAUYENQFFINPGZWYTKSWQNGVJBLFIUYJHIUKHGMRYETLSTYWXJQJJPMNPJNKRTRWPFBLSLPGQOKIEAZYKVCGTYHXFPSRCVVZKQBEDRDAOCYQWOVIDQOXNA");
    msg.value = 199U;

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
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.8474826259401447);
    msg.setSource(42274U);
    msg.setSourceEntity(109U);
    msg.setDestination(25900U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.6274037834494671;
    msg.lon = 0.014571480459784847;
    msg.height = 0.5053484557292436;
    msg.x = 0.27107169170091205;
    msg.y = 0.387942333403832;
    msg.z = 0.539773137196015;
    msg.phi = 0.505212441726007;
    msg.theta = 0.9020599993760013;
    msg.psi = 0.5841593762064649;
    msg.u = 0.08117282056661934;
    msg.v = 0.7241457018228569;
    msg.w = 0.35156366650295934;
    msg.vx = 0.4096509732434067;
    msg.vy = 0.5157070647557352;
    msg.vz = 0.3671469668705404;
    msg.p = 0.5553810365686315;
    msg.q = 0.3455398051805263;
    msg.r = 0.34357246932090524;
    msg.depth = 0.37885426135712563;
    msg.alt = 0.7195181961668708;

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
    msg.setTimeStamp(0.41822945812474155);
    msg.setSource(61774U);
    msg.setSourceEntity(168U);
    msg.setDestination(25387U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.9335224301533813;
    msg.lon = 0.39736258361914434;
    msg.height = 0.663493784504769;
    msg.x = 0.2518359470791697;
    msg.y = 0.818572223737692;
    msg.z = 0.004400374674922158;
    msg.phi = 0.2219855522554216;
    msg.theta = 0.5936146718948426;
    msg.psi = 0.09661210742952109;
    msg.u = 0.5708905167856848;
    msg.v = 0.41095467522234785;
    msg.w = 0.6534248315901081;
    msg.vx = 0.33318336572175566;
    msg.vy = 0.2288479445981363;
    msg.vz = 0.4239404771084436;
    msg.p = 0.11192245621539798;
    msg.q = 0.8849903649638127;
    msg.r = 0.4573568842608057;
    msg.depth = 0.14276990447395677;
    msg.alt = 0.6928068653989699;

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
    msg.setTimeStamp(0.244204780320885);
    msg.setSource(37468U);
    msg.setSourceEntity(121U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.2324896293889962;
    msg.lon = 0.5056747435077789;
    msg.height = 0.5313214472056602;
    msg.x = 0.8182444946086348;
    msg.y = 0.22610595788163657;
    msg.z = 0.3122066688076691;
    msg.phi = 0.8819786265590567;
    msg.theta = 0.6372404981883592;
    msg.psi = 0.05183603938229109;
    msg.u = 0.18393690704289112;
    msg.v = 0.8755596326832144;
    msg.w = 0.9574668034477418;
    msg.vx = 0.6763964371185436;
    msg.vy = 0.5586338992639647;
    msg.vz = 0.6895960662915737;
    msg.p = 0.6342898967908739;
    msg.q = 0.49458582915649874;
    msg.r = 0.7211394890047221;
    msg.depth = 0.9286930136753959;
    msg.alt = 0.19643374708856942;

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
    msg.setTimeStamp(0.5325158277873525);
    msg.setSource(532U);
    msg.setSourceEntity(207U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(94U);
    msg.x = 0.41104570467665524;
    msg.y = 0.6562551255634544;
    msg.z = 0.7060773575424469;

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
    msg.setTimeStamp(0.8474153886746254);
    msg.setSource(61629U);
    msg.setSourceEntity(123U);
    msg.setDestination(50171U);
    msg.setDestinationEntity(34U);
    msg.x = 0.48168300611158554;
    msg.y = 0.08504312894365651;
    msg.z = 0.3662645374197524;

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
    msg.setTimeStamp(0.7499151636102571);
    msg.setSource(21853U);
    msg.setSourceEntity(200U);
    msg.setDestination(49979U);
    msg.setDestinationEntity(163U);
    msg.x = 0.47650976545488755;
    msg.y = 0.5169131567439754;
    msg.z = 0.3055723554058436;

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
    msg.setTimeStamp(0.6371742278483568);
    msg.setSource(53640U);
    msg.setSourceEntity(231U);
    msg.setDestination(38525U);
    msg.setDestinationEntity(97U);
    msg.value = 0.3775343486193995;

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
    msg.setTimeStamp(0.44629044509838534);
    msg.setSource(25609U);
    msg.setSourceEntity(21U);
    msg.setDestination(47864U);
    msg.setDestinationEntity(85U);
    msg.value = 0.13714047355739278;

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
    msg.setTimeStamp(0.49089110603342834);
    msg.setSource(21689U);
    msg.setSourceEntity(111U);
    msg.setDestination(31876U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7202180564734473;

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
    msg.setTimeStamp(0.2891175665332921);
    msg.setSource(4660U);
    msg.setSourceEntity(34U);
    msg.setDestination(9062U);
    msg.setDestinationEntity(204U);
    msg.value = 0.11253880637930558;

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
    msg.setTimeStamp(0.9095298257924056);
    msg.setSource(18790U);
    msg.setSourceEntity(214U);
    msg.setDestination(321U);
    msg.setDestinationEntity(65U);
    msg.value = 0.9029762252381199;

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
    msg.setTimeStamp(0.590238601826719);
    msg.setSource(21974U);
    msg.setSourceEntity(43U);
    msg.setDestination(358U);
    msg.setDestinationEntity(53U);
    msg.value = 0.009072122431663221;

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
    msg.setTimeStamp(0.8222595485340153);
    msg.setSource(60066U);
    msg.setSourceEntity(77U);
    msg.setDestination(64575U);
    msg.setDestinationEntity(246U);
    msg.x = 0.9495178639878925;
    msg.y = 0.5504419238680555;
    msg.z = 0.8376334714179735;
    msg.phi = 0.2505903319245594;
    msg.theta = 0.6526422077482759;
    msg.psi = 0.0858026476712549;
    msg.p = 0.6943488688916489;
    msg.q = 0.21605841588052732;
    msg.r = 0.15625676380257636;
    msg.u = 0.6603810525045349;
    msg.v = 0.9932684982308072;
    msg.w = 0.5160217955760152;
    msg.bias_psi = 0.2640284099326706;
    msg.bias_r = 0.5242158857370662;

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
    msg.setTimeStamp(0.7148480678736431);
    msg.setSource(28446U);
    msg.setSourceEntity(23U);
    msg.setDestination(40407U);
    msg.setDestinationEntity(6U);
    msg.x = 0.9512168561385694;
    msg.y = 0.8729498701345642;
    msg.z = 0.2779946252082327;
    msg.phi = 0.41220604109488224;
    msg.theta = 0.18832565179174765;
    msg.psi = 0.53676510746491;
    msg.p = 0.6059113549694725;
    msg.q = 0.4585751759222022;
    msg.r = 0.6409749495315848;
    msg.u = 0.30099937737468896;
    msg.v = 0.20495491820730716;
    msg.w = 0.8981304475487009;
    msg.bias_psi = 0.14369011239788165;
    msg.bias_r = 0.013308648403665968;

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
    msg.setTimeStamp(0.5377546026370447);
    msg.setSource(14595U);
    msg.setSourceEntity(193U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(208U);
    msg.x = 0.20752419658995458;
    msg.y = 0.2671337782933596;
    msg.z = 0.7823066338106596;
    msg.phi = 0.10729840535014679;
    msg.theta = 0.9574138059122813;
    msg.psi = 0.5427738784362631;
    msg.p = 0.06998384492525211;
    msg.q = 0.29694514224906754;
    msg.r = 0.6349360682041583;
    msg.u = 0.9634040202006046;
    msg.v = 0.3402440418221542;
    msg.w = 0.3595796698162955;
    msg.bias_psi = 0.3589561170857456;
    msg.bias_r = 0.1972796514698847;

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
    msg.setTimeStamp(0.9712583665450082);
    msg.setSource(19717U);
    msg.setSourceEntity(188U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(215U);
    msg.bias_psi = 0.8446066901919471;
    msg.bias_r = 0.2555727411453782;
    msg.cog = 0.3728786634744654;
    msg.cyaw = 0.22889593185584567;
    msg.lbl_rej_level = 0.7029018366758074;
    msg.gps_rej_level = 0.4180235653367971;
    msg.custom_x = 0.19621819461469214;
    msg.custom_y = 0.5389197723099431;
    msg.custom_z = 0.8170150361234461;

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
    msg.setTimeStamp(0.32742847446679935);
    msg.setSource(13115U);
    msg.setSourceEntity(239U);
    msg.setDestination(22242U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.8154670808145711;
    msg.bias_r = 0.06919364876840017;
    msg.cog = 0.9422136627260277;
    msg.cyaw = 0.6746778520386212;
    msg.lbl_rej_level = 0.49217613957107365;
    msg.gps_rej_level = 0.14054826394258324;
    msg.custom_x = 0.6763625490974776;
    msg.custom_y = 0.12213168305445676;
    msg.custom_z = 0.2965052724013998;

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
    msg.setTimeStamp(0.3610627398460319);
    msg.setSource(21265U);
    msg.setSourceEntity(143U);
    msg.setDestination(8834U);
    msg.setDestinationEntity(31U);
    msg.bias_psi = 0.09259433562643504;
    msg.bias_r = 0.31012888266901384;
    msg.cog = 0.17918153365923295;
    msg.cyaw = 0.5547634126008665;
    msg.lbl_rej_level = 0.8770852160906619;
    msg.gps_rej_level = 0.1503093890913667;
    msg.custom_x = 0.24920933638379095;
    msg.custom_y = 0.6147472364771487;
    msg.custom_z = 0.6404842826649647;

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
    msg.setTimeStamp(0.1942159945648343);
    msg.setSource(36336U);
    msg.setSourceEntity(194U);
    msg.setDestination(28923U);
    msg.setDestinationEntity(44U);
    msg.utc_time = 0.23364328104905674;
    msg.reason = 63U;

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
    msg.setTimeStamp(0.09888015846472709);
    msg.setSource(61024U);
    msg.setSourceEntity(177U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(92U);
    msg.utc_time = 0.021165500254482827;
    msg.reason = 196U;

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
    msg.setTimeStamp(0.5998209979652426);
    msg.setSource(29498U);
    msg.setSourceEntity(232U);
    msg.setDestination(62415U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.33279041021678113;
    msg.reason = 4U;

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
    msg.setTimeStamp(0.2854060033364858);
    msg.setSource(23073U);
    msg.setSourceEntity(187U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(192U);
    msg.id = 239U;
    msg.range = 0.451120494219446;
    msg.acceptance = 227U;

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
    msg.setTimeStamp(0.016580677253279386);
    msg.setSource(11755U);
    msg.setSourceEntity(63U);
    msg.setDestination(60222U);
    msg.setDestinationEntity(190U);
    msg.id = 54U;
    msg.range = 0.749500012639206;
    msg.acceptance = 212U;

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
    msg.setTimeStamp(0.9313947381172338);
    msg.setSource(51829U);
    msg.setSourceEntity(223U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(173U);
    msg.id = 241U;
    msg.range = 0.672900310923939;
    msg.acceptance = 71U;

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
    msg.setTimeStamp(0.34949287367514226);
    msg.setSource(4929U);
    msg.setSourceEntity(165U);
    msg.setDestination(45977U);
    msg.setDestinationEntity(121U);
    msg.type = 240U;
    msg.reason = 99U;
    msg.value = 0.0933448055479732;
    msg.timestep = 0.8152291799471221;

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
    msg.setTimeStamp(0.18254737650402142);
    msg.setSource(58760U);
    msg.setSourceEntity(77U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(20U);
    msg.type = 51U;
    msg.reason = 88U;
    msg.value = 0.985333258239853;
    msg.timestep = 0.41842254215520014;

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
    msg.setTimeStamp(0.0718870423705884);
    msg.setSource(44800U);
    msg.setSourceEntity(192U);
    msg.setDestination(60895U);
    msg.setDestinationEntity(229U);
    msg.type = 229U;
    msg.reason = 82U;
    msg.value = 0.6744746989436129;
    msg.timestep = 0.8454170197415796;

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
    msg.setTimeStamp(0.7796215735348021);
    msg.setSource(29559U);
    msg.setSourceEntity(108U);
    msg.setDestination(20870U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.6421726431539025);
    msg.setSource(21437U);
    msg.setSourceEntity(19U);
    msg.setDestination(46725U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.5745704214182276);
    msg.setSource(59965U);
    msg.setSourceEntity(251U);
    msg.setDestination(35067U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.325217902256174);
    msg.setSource(33291U);
    msg.setSourceEntity(40U);
    msg.setDestination(62044U);
    msg.setDestinationEntity(225U);
    msg.beacon.assign("NDBIRRXHRGNFOQZMVOIDZWPBTTTWLXQOASBSGHHNTPCIKJOAFLKUAUAHSUQXV");
    msg.x = 0.7695851176006298;
    msg.y = 0.9121095355997292;
    msg.depth = 0.4858668866998228;
    msg.var_x = 0.1476911786109495;
    msg.var_y = 0.391008976234806;

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
    msg.setTimeStamp(0.5571261186714717);
    msg.setSource(43218U);
    msg.setSourceEntity(155U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("SADOACQQAIJMVHXXPSXHWOLKCKJHDLCKJEXDMFMPWBVKZGCSBBQCVGOLTZHYDDMRLKTQO");
    msg.x = 0.5626775087003526;
    msg.y = 0.9054436916891384;
    msg.depth = 0.3938163477810238;
    msg.var_x = 0.5499630321841942;
    msg.var_y = 0.5200046026595123;

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
    msg.setTimeStamp(0.14361984768799774);
    msg.setSource(61615U);
    msg.setSourceEntity(158U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(54U);
    msg.beacon.assign("HPQRYSGBTVFROZVJLEXNGLGZDKHSJBTMMGDTIHNVKEATZQAPKSBHAAFGWEFPCAHAGBBDYZLRINXVDURTSUQBMFUQYXOLBKPMPPOJZCRFVQIMZIIRULFQXCTELYLGDUXQFWDHAOXWDYOMMMNXUKZSQWJUFS");
    msg.x = 0.7954140959065266;
    msg.y = 0.3868461176961687;
    msg.depth = 0.6046597154738326;
    msg.var_x = 0.4922518835493931;
    msg.var_y = 0.36235296006828976;

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
    msg.setTimeStamp(0.5543266972128817);
    msg.setSource(26066U);
    msg.setSourceEntity(203U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(117U);
    msg.value = 0.6193343173366641;

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
    msg.setTimeStamp(0.7220011113414073);
    msg.setSource(13878U);
    msg.setSourceEntity(252U);
    msg.setDestination(32176U);
    msg.setDestinationEntity(109U);
    msg.value = 0.2961556940233293;

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
    msg.setTimeStamp(0.5727988887754242);
    msg.setSource(30366U);
    msg.setSourceEntity(10U);
    msg.setDestination(12283U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7689031154529511;

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
    msg.setTimeStamp(0.17386616695938106);
    msg.setSource(26228U);
    msg.setSourceEntity(156U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(179U);
    msg.value = 0.19314505859816256;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.20726707757793217);
    msg.setSource(45110U);
    msg.setSourceEntity(181U);
    msg.setDestination(8850U);
    msg.setDestinationEntity(95U);
    msg.value = 0.29626599255392894;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.4437333344145141);
    msg.setSource(34309U);
    msg.setSourceEntity(211U);
    msg.setDestination(38491U);
    msg.setDestinationEntity(81U);
    msg.value = 0.729308693499546;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.281084986101065);
    msg.setSource(6504U);
    msg.setSourceEntity(172U);
    msg.setDestination(40460U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7123223875172342;
    msg.speed_units = 165U;

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
    msg.setTimeStamp(0.45823748620749005);
    msg.setSource(36693U);
    msg.setSourceEntity(20U);
    msg.setDestination(23841U);
    msg.setDestinationEntity(246U);
    msg.value = 0.013072482414611564;
    msg.speed_units = 198U;

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
    msg.setTimeStamp(0.12690876114649197);
    msg.setSource(10810U);
    msg.setSourceEntity(75U);
    msg.setDestination(3927U);
    msg.setDestinationEntity(197U);
    msg.value = 0.6488634974260524;
    msg.speed_units = 44U;

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
    msg.setTimeStamp(0.7939943645034849);
    msg.setSource(43073U);
    msg.setSourceEntity(37U);
    msg.setDestination(11832U);
    msg.setDestinationEntity(61U);
    msg.value = 0.20378882893683492;

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
    msg.setTimeStamp(0.7333926915573078);
    msg.setSource(49664U);
    msg.setSourceEntity(102U);
    msg.setDestination(17652U);
    msg.setDestinationEntity(20U);
    msg.value = 0.9835768143402472;

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
    msg.setTimeStamp(0.3177319835326099);
    msg.setSource(10698U);
    msg.setSourceEntity(31U);
    msg.setDestination(18740U);
    msg.setDestinationEntity(238U);
    msg.value = 0.13008209125351367;

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
    msg.setTimeStamp(0.10496545083057862);
    msg.setSource(17444U);
    msg.setSourceEntity(239U);
    msg.setDestination(16520U);
    msg.setDestinationEntity(30U);
    msg.value = 0.5376502148148471;

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
    msg.setTimeStamp(0.6438941472106305);
    msg.setSource(41389U);
    msg.setSourceEntity(16U);
    msg.setDestination(2183U);
    msg.setDestinationEntity(79U);
    msg.value = 0.7974130751334715;

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
    msg.setTimeStamp(0.758366485205098);
    msg.setSource(830U);
    msg.setSourceEntity(90U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(25U);
    msg.value = 0.659925596598245;

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
    msg.setTimeStamp(0.9433289379361808);
    msg.setSource(53765U);
    msg.setSourceEntity(50U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(184U);
    msg.value = 0.7789628081605343;

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
    msg.setTimeStamp(0.4562911077426829);
    msg.setSource(52653U);
    msg.setSourceEntity(243U);
    msg.setDestination(167U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8193201648566393;

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
    msg.setTimeStamp(0.6660248534382379);
    msg.setSource(37072U);
    msg.setSourceEntity(58U);
    msg.setDestination(32536U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8266047642790977;

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
    msg.setTimeStamp(0.1731201967361664);
    msg.setSource(9757U);
    msg.setSourceEntity(212U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(95U);
    msg.start_lat = 0.3348979875514899;
    msg.start_lon = 0.26473878636429127;
    msg.start_z = 0.24784629599225605;
    msg.start_z_units = 21U;
    msg.end_lat = 0.03733502232630148;
    msg.end_lon = 0.45260189581894905;
    msg.end_z = 0.37275871630288726;
    msg.end_z_units = 119U;
    msg.speed = 0.4903824164102032;
    msg.speed_units = 141U;
    msg.lradius = 0.9216772398600824;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.5232258393465942);
    msg.setSource(5330U);
    msg.setSourceEntity(211U);
    msg.setDestination(554U);
    msg.setDestinationEntity(163U);
    msg.start_lat = 0.034766182728994344;
    msg.start_lon = 0.7419812277988108;
    msg.start_z = 0.9054477028218849;
    msg.start_z_units = 113U;
    msg.end_lat = 0.7903677659917385;
    msg.end_lon = 0.006718272459626973;
    msg.end_z = 0.059791721830461775;
    msg.end_z_units = 195U;
    msg.speed = 0.9125929261371962;
    msg.speed_units = 43U;
    msg.lradius = 0.2639897818266095;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.346628166046998);
    msg.setSource(5288U);
    msg.setSourceEntity(218U);
    msg.setDestination(63345U);
    msg.setDestinationEntity(144U);
    msg.start_lat = 0.9048239268150228;
    msg.start_lon = 0.9340487491762014;
    msg.start_z = 0.500295590363031;
    msg.start_z_units = 25U;
    msg.end_lat = 0.15509254688514595;
    msg.end_lon = 0.6822591537162848;
    msg.end_z = 0.059194890106907705;
    msg.end_z_units = 87U;
    msg.speed = 0.36167415816995396;
    msg.speed_units = 51U;
    msg.lradius = 0.08108252017058215;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.8146291907786652);
    msg.setSource(48831U);
    msg.setSourceEntity(182U);
    msg.setDestination(24289U);
    msg.setDestinationEntity(45U);
    msg.x = 0.9738540897054057;
    msg.y = 0.5637751406150344;
    msg.z = 0.3561377657033501;
    msg.k = 0.02335616910283056;
    msg.m = 0.39793432785161054;
    msg.n = 0.8259977718130157;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.36305521918822337);
    msg.setSource(40918U);
    msg.setSourceEntity(127U);
    msg.setDestination(1678U);
    msg.setDestinationEntity(154U);
    msg.x = 0.6508135402125323;
    msg.y = 0.684446305159964;
    msg.z = 0.22980707258584043;
    msg.k = 0.5497016475677882;
    msg.m = 0.13050910370561186;
    msg.n = 0.7353274216471756;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.8908586559684263);
    msg.setSource(14526U);
    msg.setSourceEntity(146U);
    msg.setDestination(3011U);
    msg.setDestinationEntity(21U);
    msg.x = 0.6108217585419652;
    msg.y = 0.7969290810457187;
    msg.z = 0.16702470206657127;
    msg.k = 0.19868279286412183;
    msg.m = 0.7768947604841819;
    msg.n = 0.2889002841951134;
    msg.flags = 189U;

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
    msg.setTimeStamp(0.03679213678968629);
    msg.setSource(28753U);
    msg.setSourceEntity(218U);
    msg.setDestination(62208U);
    msg.setDestinationEntity(110U);
    msg.value = 0.342507012273226;

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
    msg.setTimeStamp(0.1746607030698688);
    msg.setSource(17849U);
    msg.setSourceEntity(240U);
    msg.setDestination(19693U);
    msg.setDestinationEntity(161U);
    msg.value = 0.3695516796831346;

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
    msg.setTimeStamp(0.23520541994546518);
    msg.setSource(40972U);
    msg.setSourceEntity(152U);
    msg.setDestination(8834U);
    msg.setDestinationEntity(99U);
    msg.value = 0.2105639386282273;

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
    msg.setTimeStamp(0.8320674597483559);
    msg.setSource(44086U);
    msg.setSourceEntity(208U);
    msg.setDestination(38342U);
    msg.setDestinationEntity(132U);
    msg.u = 0.14456437774267483;
    msg.v = 0.5836935693289066;
    msg.w = 0.2254793189956782;
    msg.p = 0.19627511083658344;
    msg.q = 0.43787679135745095;
    msg.r = 0.640701734230735;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.3092461560505818);
    msg.setSource(11804U);
    msg.setSourceEntity(219U);
    msg.setDestination(64875U);
    msg.setDestinationEntity(173U);
    msg.u = 0.3484655268004748;
    msg.v = 0.8967908564911363;
    msg.w = 0.366596560984379;
    msg.p = 0.7792941392697542;
    msg.q = 0.5784334662067521;
    msg.r = 0.5773867651492532;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.3700115012489027);
    msg.setSource(2022U);
    msg.setSourceEntity(249U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(224U);
    msg.u = 0.4557940887802675;
    msg.v = 0.6034904402516099;
    msg.w = 0.4154221094710081;
    msg.p = 0.008037522763660543;
    msg.q = 0.07369806089559872;
    msg.r = 0.5452748520508917;
    msg.flags = 182U;

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
    msg.setTimeStamp(0.4811109591286692);
    msg.setSource(33600U);
    msg.setSourceEntity(18U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(159U);
    msg.start_lat = 0.6878987060824155;
    msg.start_lon = 0.03241392533242149;
    msg.start_z = 0.7568510924348699;
    msg.start_z_units = 48U;
    msg.end_lat = 0.9738963308342587;
    msg.end_lon = 0.5698436060944476;
    msg.end_z = 0.1129902592703983;
    msg.end_z_units = 15U;
    msg.lradius = 0.7430427694420362;
    msg.flags = 93U;
    msg.x = 0.026014554271054702;
    msg.y = 0.6487376165516923;
    msg.z = 0.4358974785706963;
    msg.vx = 0.8283707638004;
    msg.vy = 0.04898264250430795;
    msg.vz = 0.977583812225908;
    msg.course_error = 0.5281915939999464;
    msg.eta = 10308U;

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
    msg.setTimeStamp(0.26477052311739036);
    msg.setSource(36725U);
    msg.setSourceEntity(146U);
    msg.setDestination(7633U);
    msg.setDestinationEntity(141U);
    msg.start_lat = 0.05568584028318768;
    msg.start_lon = 0.6736824050988208;
    msg.start_z = 0.8102112604655973;
    msg.start_z_units = 57U;
    msg.end_lat = 0.9693292036490266;
    msg.end_lon = 0.061549966668277944;
    msg.end_z = 0.8960579672450457;
    msg.end_z_units = 45U;
    msg.lradius = 0.41814096406078105;
    msg.flags = 252U;
    msg.x = 0.09029504416951728;
    msg.y = 0.047999567985958835;
    msg.z = 0.11053971171086852;
    msg.vx = 0.8873533536101011;
    msg.vy = 0.42340887935796134;
    msg.vz = 0.7470307426173431;
    msg.course_error = 0.3965599282893366;
    msg.eta = 45429U;

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
    msg.setTimeStamp(0.061606744462544216);
    msg.setSource(39522U);
    msg.setSourceEntity(153U);
    msg.setDestination(3147U);
    msg.setDestinationEntity(203U);
    msg.start_lat = 0.38787987030576787;
    msg.start_lon = 0.43366623115985536;
    msg.start_z = 0.8229280675963012;
    msg.start_z_units = 54U;
    msg.end_lat = 0.8084019172454572;
    msg.end_lon = 0.8353342860269649;
    msg.end_z = 0.29287568887265725;
    msg.end_z_units = 181U;
    msg.lradius = 0.06321689846917955;
    msg.flags = 23U;
    msg.x = 0.5401092433290711;
    msg.y = 0.07629991181442031;
    msg.z = 0.10808449237784268;
    msg.vx = 0.6384883938841146;
    msg.vy = 0.34721193288687147;
    msg.vz = 0.10097998759053817;
    msg.course_error = 0.9459807991869312;
    msg.eta = 46551U;

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
    msg.setTimeStamp(0.9984582987152518);
    msg.setSource(13856U);
    msg.setSourceEntity(96U);
    msg.setDestination(45282U);
    msg.setDestinationEntity(240U);
    msg.k = 0.6003570748777297;
    msg.m = 0.8953030496385832;
    msg.n = 0.5578676683054197;

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
    msg.setTimeStamp(0.5682465320238488);
    msg.setSource(16998U);
    msg.setSourceEntity(137U);
    msg.setDestination(45688U);
    msg.setDestinationEntity(35U);
    msg.k = 0.24235235421617274;
    msg.m = 0.2862249883329415;
    msg.n = 0.3555407916123765;

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
    msg.setTimeStamp(0.2921613131140882);
    msg.setSource(55201U);
    msg.setSourceEntity(165U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(169U);
    msg.k = 0.5455188047883235;
    msg.m = 0.33610665200973333;
    msg.n = 0.17234574492609722;

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
    msg.setTimeStamp(0.6101905475542911);
    msg.setSource(8711U);
    msg.setSourceEntity(130U);
    msg.setDestination(19286U);
    msg.setDestinationEntity(243U);
    msg.p = 0.5647191369475827;
    msg.i = 0.9023694070679485;
    msg.d = 0.4904895678991371;
    msg.a = 0.6189117523716038;

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
    msg.setTimeStamp(0.8302993607191816);
    msg.setSource(23669U);
    msg.setSourceEntity(41U);
    msg.setDestination(46227U);
    msg.setDestinationEntity(119U);
    msg.p = 0.3054863180132683;
    msg.i = 0.11418548729278633;
    msg.d = 0.2188766893836369;
    msg.a = 0.6431180734071272;

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
    msg.setTimeStamp(0.705754025213384);
    msg.setSource(32835U);
    msg.setSourceEntity(15U);
    msg.setDestination(42976U);
    msg.setDestinationEntity(214U);
    msg.p = 0.0001549141616983274;
    msg.i = 0.23864624609516194;
    msg.d = 0.08670232720834736;
    msg.a = 0.4356000702288749;

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
    msg.setTimeStamp(0.286311412775911);
    msg.setSource(30047U);
    msg.setSourceEntity(122U);
    msg.setDestination(33278U);
    msg.setDestinationEntity(56U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.18676446319046025);
    msg.setSource(49761U);
    msg.setSourceEntity(248U);
    msg.setDestination(38336U);
    msg.setDestinationEntity(235U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.3054317057392518);
    msg.setSource(6810U);
    msg.setSourceEntity(58U);
    msg.setDestination(44669U);
    msg.setDestinationEntity(30U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.1849909862751603);
    msg.setSource(39831U);
    msg.setSourceEntity(172U);
    msg.setDestination(64580U);
    msg.setDestinationEntity(145U);
    msg.timeout = 6723U;
    msg.lat = 0.20513835496710264;
    msg.lon = 0.19011683152970527;
    msg.z = 0.6584057382440333;
    msg.z_units = 239U;
    msg.speed = 0.9585265092601796;
    msg.speed_units = 96U;
    msg.roll = 0.048374866606706424;
    msg.pitch = 0.5455311094366182;
    msg.yaw = 0.9742896660418648;
    msg.custom.assign("FNQMQLEJDQXBNXBFRRATTJIMFSOVFPUNZMDPEIESWBXKPYPHGSOHIPAYYSYEWCDFCKLMJGI");

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
    msg.setTimeStamp(0.8577545402282664);
    msg.setSource(56568U);
    msg.setSourceEntity(126U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(23U);
    msg.timeout = 47389U;
    msg.lat = 0.8465633560026824;
    msg.lon = 0.362222876694987;
    msg.z = 0.8651100473026124;
    msg.z_units = 54U;
    msg.speed = 0.005028478363057309;
    msg.speed_units = 228U;
    msg.roll = 0.9018865144530853;
    msg.pitch = 0.8914355118398886;
    msg.yaw = 0.9594217239652267;
    msg.custom.assign("WHLWYUSMVXDROUPXZJUGIMKXVANBEWAGBFCCEZASZIIIGGPYBGKKZCOQSOAWUHMLPOPPIDARSMXDGNHRSPLKEG");

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
    msg.setTimeStamp(0.8135136216179312);
    msg.setSource(50711U);
    msg.setSourceEntity(29U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(253U);
    msg.timeout = 53573U;
    msg.lat = 0.929842960611468;
    msg.lon = 0.4013687031327733;
    msg.z = 0.40269543484647596;
    msg.z_units = 89U;
    msg.speed = 0.7728221662239003;
    msg.speed_units = 88U;
    msg.roll = 0.035035869547718757;
    msg.pitch = 0.43474064794869394;
    msg.yaw = 0.19769838391982697;
    msg.custom.assign("DRLCMRVGSLJQPLVBKDTOHAMDVRKSLOYNDRQFIPBUWINUXVVIIQJWPDMTGKVBYLDSPANFGFQTVDCRRXMWFZQFTCNTMOEKZGNJTXMJUNPKJZQYZPPDNVMXFAW");

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
    msg.setTimeStamp(0.9489346635690727);
    msg.setSource(40058U);
    msg.setSourceEntity(140U);
    msg.setDestination(1235U);
    msg.setDestinationEntity(3U);
    msg.timeout = 24506U;
    msg.lat = 0.335571882941063;
    msg.lon = 0.6969182426650639;
    msg.z = 0.7611251869615748;
    msg.z_units = 120U;
    msg.speed = 0.4954977257146662;
    msg.speed_units = 75U;
    msg.duration = 12463U;
    msg.radius = 0.1690027061891788;
    msg.flags = 183U;
    msg.custom.assign("REGPYHLDHSUNWRRUCRHDZAPRMFOKIKPAUPBZUBKXBLMQKCCCIGVGQCSMQNOLCWHMDSFTQYKBXAJKOTOAFBFEWINBDBGEPFZFWNEUFSLMTTSOTSNQELICXNLQVBTSVZUQHJXWSUKYKVDMGCIZSMEDAPE");

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
    msg.setTimeStamp(0.686005194248945);
    msg.setSource(1254U);
    msg.setSourceEntity(36U);
    msg.setDestination(54195U);
    msg.setDestinationEntity(225U);
    msg.timeout = 50187U;
    msg.lat = 0.3479223214624747;
    msg.lon = 0.10732856082748077;
    msg.z = 0.012791406164121666;
    msg.z_units = 219U;
    msg.speed = 0.9505449475215809;
    msg.speed_units = 218U;
    msg.duration = 43567U;
    msg.radius = 0.0152569331959852;
    msg.flags = 92U;
    msg.custom.assign("TYVZURZYDXFOEIORFJHSMDSPUVMZFCWXTCMLYENYJUCUJZTMOORNLGHQBXAUBAJSQLGJEWQKLFTTCEDAOIXPBUQBLKZJDDDGWOVVRXUQEFRIKUMVJNWJQIKZHTLAXJEQHJDSMCYASVBQIVEZYXBXYLGUOGIYRCHWMNTSGZFWPAEBKNXVCHOGBMPYKNFZIUPDCDPMKSPA");

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
    msg.setTimeStamp(0.050875637629822834);
    msg.setSource(15385U);
    msg.setSourceEntity(209U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(126U);
    msg.timeout = 50324U;
    msg.lat = 0.14928664540864267;
    msg.lon = 0.6621616802561336;
    msg.z = 0.4237623835673783;
    msg.z_units = 49U;
    msg.speed = 0.27449500290862516;
    msg.speed_units = 215U;
    msg.duration = 20491U;
    msg.radius = 0.354834927902157;
    msg.flags = 189U;
    msg.custom.assign("XLKBJEOHAPORIQNTASILSLZHVBFYBDKDARFDGHQPEEVKVPKXIDUJULGHXOUXVGMLPYWDKHGVCQMKTMISANAFHEQXAGQWYLRHUDZNOTCTTHKSBMIGZPVXCREPYDFQOTXJWAJWBEAYNMXBVCFTOEQJOSZAJZNPNQDYRJRSLJU");

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
    msg.setTimeStamp(0.48524701045050944);
    msg.setSource(58806U);
    msg.setSourceEntity(177U);
    msg.setDestination(55351U);
    msg.setDestinationEntity(213U);
    msg.custom.assign("HCLZUPRCYKVSKUYRPMDQOFEMMBAAHAQEHDJSLHNAFVXLLNMPJCZOHFAJOBXXWUJIFVLJQEUATBXTDGSESHDVIRCFYXNPNKTLAI");

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
    msg.setTimeStamp(0.8092018526656796);
    msg.setSource(38379U);
    msg.setSourceEntity(69U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(88U);
    msg.custom.assign("KRUWUWACLGMIFPVXZGTOEYCGUAWQJRWBZJGVMIAKODRIZKWZEQOBSEGAPOSQTJCDFKYJDRQSQAPDFFLBDRGQITKQSK");

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
    msg.setTimeStamp(0.7921459235229557);
    msg.setSource(19808U);
    msg.setSourceEntity(62U);
    msg.setDestination(4707U);
    msg.setDestinationEntity(145U);
    msg.custom.assign("BBSXQCMNWVFCDKQMOWTULMEIWTJXOYURACJZURNIUVEIAJXGHMAMLQSJIPVDMSTVPYNFTDRJGRHKRMOXYXBDYNKYXAIJHZJGFHTZNWBUPPPUTKDKPVOKHODGWVVQLYXHLBFDJNZTPDSMFZCHEGJVBYIFCYEFAEBOLPUYZAGLQZXSQNGIBQREZSLSAENHLUOERECKCSWIRNFGHVRAXXTZBKCOANTRKOIW");

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
    msg.setTimeStamp(0.18694599299740744);
    msg.setSource(51628U);
    msg.setSourceEntity(127U);
    msg.setDestination(42305U);
    msg.setDestinationEntity(20U);
    msg.timeout = 13839U;
    msg.lat = 0.8279225253192853;
    msg.lon = 0.3452333145383155;
    msg.z = 0.7850337449659173;
    msg.z_units = 214U;
    msg.duration = 53641U;
    msg.speed = 0.25091835955090647;
    msg.speed_units = 64U;
    msg.type = 228U;
    msg.radius = 0.2217122097550951;
    msg.length = 0.22998458292614143;
    msg.bearing = 0.07181557607022904;
    msg.direction = 34U;
    msg.custom.assign("PLUYYSSDPTPBVYJOPMZREFOWUPZZTSTSPVVNENNKADUWJHULWETSQFANTFIXKGSWQDX");

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
    msg.setTimeStamp(0.862262155501275);
    msg.setSource(48939U);
    msg.setSourceEntity(206U);
    msg.setDestination(27218U);
    msg.setDestinationEntity(119U);
    msg.timeout = 38286U;
    msg.lat = 0.8341240357517271;
    msg.lon = 0.8401894001259304;
    msg.z = 0.6905987783329343;
    msg.z_units = 38U;
    msg.duration = 55542U;
    msg.speed = 0.7322817471298159;
    msg.speed_units = 190U;
    msg.type = 228U;
    msg.radius = 0.41896974761922023;
    msg.length = 0.3865287673213482;
    msg.bearing = 0.09258150224471173;
    msg.direction = 89U;
    msg.custom.assign("ZUUMYZWVJRPRGKLBHYBDPTOPGFIFMANVGWRMHXCPLRIURUUZOQIOZVJNEHEYNJAVCFSAJREQSAGTLZXVOGDNDSCKNXFTBCMKFUHNWPRHSJDSYTCBUATIQGJIMVDPYJBYIDUZHAWGXGIQTQOBAMWWIPTBHWZNHKFKTXKIJPZFOOOHDSWIZLGMBXEDLNEXVXES");

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
    msg.setTimeStamp(0.11576050889510603);
    msg.setSource(2046U);
    msg.setSourceEntity(75U);
    msg.setDestination(21905U);
    msg.setDestinationEntity(163U);
    msg.timeout = 10073U;
    msg.lat = 0.1532460145830672;
    msg.lon = 0.32573589448189366;
    msg.z = 0.36492530377331345;
    msg.z_units = 104U;
    msg.duration = 35004U;
    msg.speed = 0.12431936800619403;
    msg.speed_units = 124U;
    msg.type = 101U;
    msg.radius = 0.7278228663224252;
    msg.length = 0.40764599377332955;
    msg.bearing = 0.5617887797133496;
    msg.direction = 171U;
    msg.custom.assign("UJLHMMCXVNROGLOQEPUKWTEMAPCCAZUDPSVTAVFODZILYOUPSMLJNXUWYERSQUWHTKTCEOTFJEDBVQONEAFNJDSHPDBYUKVUYXWLDATZYGYXRBINMGNBYYGAL");

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
    msg.setTimeStamp(0.9444502603986201);
    msg.setSource(13821U);
    msg.setSourceEntity(147U);
    msg.setDestination(15515U);
    msg.setDestinationEntity(228U);
    msg.duration = 36753U;
    msg.custom.assign("LWBDPVABTASBODFSPJISYOCTMCUGUUPONNUGXCOJKOXZKPJQJLYVEEJRNKLIIHNUYIVETXGXDEEMEWLZJRRYJNKPCFNHASVAWONPUCWNXEGTFZYRYLUA");

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
    msg.setTimeStamp(0.21678664868529518);
    msg.setSource(54848U);
    msg.setSourceEntity(44U);
    msg.setDestination(13245U);
    msg.setDestinationEntity(131U);
    msg.duration = 7840U;
    msg.custom.assign("YRHBXKSEVASHAJNHLVRLGGTUCIABYWOWMMUKWEFFNFILWNLKIPEPLYRTAVHPXWGGTROQHNYQLICSYOROXDCPBFNLPJZDIXFGKJOFPXRDAHMDQIITMUXUZYSUELWBLTFKDOJUBVANZSUOLZDQCHZGPBVNYQISUSEPBCDCZVMMYYGSWIJKG");

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
    msg.setTimeStamp(0.20008281875411016);
    msg.setSource(53042U);
    msg.setSourceEntity(220U);
    msg.setDestination(44084U);
    msg.setDestinationEntity(42U);
    msg.duration = 27948U;
    msg.custom.assign("QWBYKUOPYCNMGDKATBYNJKTSPSXRMPMPTDNWTBKZCNACDYYCLAYNZGMVHJDFABILHQQGJHPLRWNVIPUUQISEJMCTSGRSALFHKEVDSKDLRFDFYKPEQEMZKJLMZMKVJLVRJRALMREVWIWHXIHIELEUXGCCFZDESETHMIYCIRWNITETZFROOXJUXBXOPXBQDOQOSXXVWUWCHGFWVQ");

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
    msg.setTimeStamp(0.7120294461360882);
    msg.setSource(31690U);
    msg.setSourceEntity(32U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(53U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.7734866961449014;
    tmp_msg_0.start_lon = 0.48901990938534634;
    tmp_msg_0.start_z = 0.3310820826233214;
    tmp_msg_0.start_z_units = 68U;
    tmp_msg_0.end_lat = 0.9334958798488089;
    tmp_msg_0.end_lon = 0.6531544337491271;
    tmp_msg_0.end_z = 0.8439352009173774;
    tmp_msg_0.end_z_units = 177U;
    tmp_msg_0.speed = 0.3358586869573139;
    tmp_msg_0.speed_units = 141U;
    tmp_msg_0.lradius = 0.4559864279996497;
    tmp_msg_0.flags = 213U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53664U;
    msg.custom.assign("GVIWGYNBZHJL");

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
    msg.setTimeStamp(0.5054109255665613);
    msg.setSource(418U);
    msg.setSourceEntity(22U);
    msg.setDestination(34449U);
    msg.setDestinationEntity(197U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.11905596186847112;
    msg.control.set(tmp_msg_0);
    msg.duration = 33978U;
    msg.custom.assign("SHYLRRKRLWDQORJTQWJEITHABMKWQICIOMAYXCRPIMKZOGZHLOQTEICFMEY");

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
    msg.setTimeStamp(0.2637368754968007);
    msg.setSource(24679U);
    msg.setSourceEntity(28U);
    msg.setDestination(43890U);
    msg.setDestinationEntity(218U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.30995803420095713;
    tmp_msg_0.z_units = 32U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42754U;
    msg.custom.assign("DTDKCMEEVMYTBCSWRYJGVGVBRPOLRHHVGATYFADWYZGMLQVFPATLMNCFUWDXXQSXTVQLIUIADVAKOPDPQYDCJUKPZZHZMBPQUPNQWHOUALCTBVTCDMZLARTJAQJLFQMAOBYNXGWXHSUDCGXJRKKMRKSNEXIFWZBLSIONWHSKEHYBXZCROJFRNCHMZHJEDTNIXXNIIKZAHIYWJPS");

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
    msg.setTimeStamp(0.9483486956223711);
    msg.setSource(37402U);
    msg.setSourceEntity(139U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(122U);
    msg.timeout = 39936U;
    msg.lat = 0.8934362017817082;
    msg.lon = 0.01718288182253347;
    msg.z = 0.8059369163348278;
    msg.z_units = 89U;
    msg.speed = 0.4591738773485686;
    msg.speed_units = 206U;
    msg.bearing = 0.4756409362860431;
    msg.cross_angle = 0.7148102134083302;
    msg.width = 0.6015209711294575;
    msg.length = 0.6894273635033606;
    msg.hstep = 0.20609124005541934;
    msg.coff = 117U;
    msg.alternation = 250U;
    msg.flags = 248U;
    msg.custom.assign("MQLBJFRTUSWUACBCQIZJHFIHRLRWSQFDEAOUM");

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
    msg.setTimeStamp(0.4646426887779064);
    msg.setSource(53715U);
    msg.setSourceEntity(124U);
    msg.setDestination(2130U);
    msg.setDestinationEntity(136U);
    msg.timeout = 42529U;
    msg.lat = 0.5538464868210853;
    msg.lon = 0.9296823762384073;
    msg.z = 0.09835069148753428;
    msg.z_units = 196U;
    msg.speed = 0.10950680876100927;
    msg.speed_units = 17U;
    msg.bearing = 0.2451585790915266;
    msg.cross_angle = 0.8931761362118236;
    msg.width = 0.37483357829833763;
    msg.length = 0.7572379569402236;
    msg.hstep = 0.4161569044311729;
    msg.coff = 87U;
    msg.alternation = 174U;
    msg.flags = 63U;
    msg.custom.assign("TJCMCGUIDFYNHGMHILNTXRYYTXJUMORQUHBOXISQPQODCJKSANHOTTGUMJJPAFWVDPYQPNPFBVNNYFEWHRXKTRULLPDPMRMQVEHWSVDANKSGHLGEZAQISVZEUXUDAODNLBQLY");

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
    msg.setTimeStamp(0.0573491696653291);
    msg.setSource(24413U);
    msg.setSourceEntity(52U);
    msg.setDestination(59057U);
    msg.setDestinationEntity(22U);
    msg.timeout = 15683U;
    msg.lat = 0.23399443210710236;
    msg.lon = 0.558252147453641;
    msg.z = 0.9605544693364304;
    msg.z_units = 180U;
    msg.speed = 0.7042316336424757;
    msg.speed_units = 68U;
    msg.bearing = 0.573256816516279;
    msg.cross_angle = 0.8437172223905457;
    msg.width = 0.6342464727583632;
    msg.length = 0.7684107997306822;
    msg.hstep = 0.5645869459881598;
    msg.coff = 176U;
    msg.alternation = 189U;
    msg.flags = 178U;
    msg.custom.assign("NQHQMFRZYZXGIXLYYAKNALEUQFFTUBCAHPYSESGZJJCFYRJCFPWXACAKJCVQMBZGGDUADRTWEX");

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
    msg.setTimeStamp(0.3357908807994383);
    msg.setSource(46707U);
    msg.setSourceEntity(211U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(63U);
    msg.timeout = 39702U;
    msg.lat = 0.528600431925624;
    msg.lon = 0.25733714844408606;
    msg.z = 0.8750884632140138;
    msg.z_units = 157U;
    msg.speed = 0.8212273847611719;
    msg.speed_units = 78U;
    msg.custom.assign("VYOLOBONHCEONQMXOHHJTUZKPSDXTZFWAKKQQDADLGTUDSRNRGWEDMDGHSVPTRMNAEPBAPTHYCYLFXWJTWLNVVUJOVYSSQMUNVYELBEEVPULIUWLXNIFNSTBKXTBWXAIUPJIILZQRBFIDOHPQCZQSRVNJKFKOYCEEZFCMWZCYJCHGCSGXOGZABPXYJ");

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
    msg.setTimeStamp(0.23802844026164316);
    msg.setSource(29495U);
    msg.setSourceEntity(164U);
    msg.setDestination(16276U);
    msg.setDestinationEntity(109U);
    msg.timeout = 52215U;
    msg.lat = 0.7910807178784145;
    msg.lon = 0.2258278829182162;
    msg.z = 0.29271035687533475;
    msg.z_units = 239U;
    msg.speed = 0.6208679063530103;
    msg.speed_units = 97U;
    msg.custom.assign("ILXEUMPNVZORAYQIZDKDKNKRCZDOGVXTTQAMDACEOZHRDXDWOLTYDQLBBBZEWLQPMZVQIIROVLURFDQEGSHUFRWNZPCRUSCXZOALX");

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
    msg.setTimeStamp(0.7514777967697016);
    msg.setSource(57428U);
    msg.setSourceEntity(158U);
    msg.setDestination(25872U);
    msg.setDestinationEntity(79U);
    msg.timeout = 50064U;
    msg.lat = 0.11936849170885655;
    msg.lon = 0.36065264273083464;
    msg.z = 0.5236491032403437;
    msg.z_units = 43U;
    msg.speed = 0.7208982111446277;
    msg.speed_units = 199U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4333177135694388;
    tmp_msg_0.y = 0.3003607520198276;
    tmp_msg_0.z = 0.21146411105782326;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VXHFTNDKNQQQHUWKPLGVUOXCBYRIUXBZDIZBBLDXMAFXOKRWVRGVLJQROIZYKMIPGPGARESENAOJKZZTXVMMUSDKDJKCWJLAWBCRDWNFDHPNZNWGASFEEKEXJARHW");

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
    msg.setTimeStamp(0.03439698091221599);
    msg.setSource(41243U);
    msg.setSourceEntity(15U);
    msg.setDestination(34052U);
    msg.setDestinationEntity(119U);
    msg.x = 0.6882856649206633;
    msg.y = 0.25702542223335745;
    msg.z = 0.6152644732405177;

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
    msg.setTimeStamp(0.3437030388861423);
    msg.setSource(36549U);
    msg.setSourceEntity(205U);
    msg.setDestination(43549U);
    msg.setDestinationEntity(254U);
    msg.x = 0.6342431218381102;
    msg.y = 0.44956074391655376;
    msg.z = 0.47363084045207116;

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
    msg.setTimeStamp(0.8416784405349652);
    msg.setSource(37556U);
    msg.setSourceEntity(84U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(65U);
    msg.x = 0.2533151063293597;
    msg.y = 0.6466461522508964;
    msg.z = 0.7391765045857701;

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
    msg.setTimeStamp(0.6734988513783289);
    msg.setSource(35471U);
    msg.setSourceEntity(25U);
    msg.setDestination(53792U);
    msg.setDestinationEntity(208U);
    msg.timeout = 50592U;
    msg.lat = 0.21572439834622914;
    msg.lon = 0.15234689739802498;
    msg.z = 0.5209924300801688;
    msg.z_units = 20U;
    msg.amplitude = 0.9476479645056496;
    msg.pitch = 0.8331017176368899;
    msg.speed = 0.8036533874216822;
    msg.speed_units = 210U;
    msg.custom.assign("ZJZOHUPSGVAHNQLMRNZJIMRHMNKRKXEAPEACOOIRHHGTDSFSMQUXABELJKIOIPIJMWEPXOXTEDKUGHRBWTULNCQCHCDGAVYLKPBVEYJVWWDCOSPMIRDYLHSKY");

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
    msg.setTimeStamp(0.3562078496904575);
    msg.setSource(59935U);
    msg.setSourceEntity(52U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(34U);
    msg.timeout = 37277U;
    msg.lat = 0.9266395262040499;
    msg.lon = 0.13969504572424074;
    msg.z = 0.02090830615309358;
    msg.z_units = 92U;
    msg.amplitude = 0.5639228268297041;
    msg.pitch = 0.6047520833104825;
    msg.speed = 0.5093326476778899;
    msg.speed_units = 226U;
    msg.custom.assign("ZRCQUVVIBEMOXNHPFSTJQVHZQJXOVOLKBYDQIYXSMRUISELGMITVPPXVRMEFSRHBDNEQFJDGMYSJKWIPSTIPFZFDIWAWVRWXKOGKSZZXCOLBCVLTHEATKPYWCLGVIBAKEGNOTUCXSBADUQNNPKEWRIUTGAJQEFCGFMDADRJWQXLKZGXYMUWHRUFHWYBACPNFFBZNEYNM");

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
    msg.setTimeStamp(0.3973649279754462);
    msg.setSource(61542U);
    msg.setSourceEntity(130U);
    msg.setDestination(2254U);
    msg.setDestinationEntity(251U);
    msg.timeout = 58043U;
    msg.lat = 0.4275051539798125;
    msg.lon = 0.7434627842876588;
    msg.z = 0.7323064381893669;
    msg.z_units = 141U;
    msg.amplitude = 0.22808862041873945;
    msg.pitch = 0.16034546957260287;
    msg.speed = 0.7781651058647393;
    msg.speed_units = 156U;
    msg.custom.assign("SXLZCBTDMWCBUXBHEUNEYIYOLHCOEAYMOVNXLFJEJEFCOBFIWRXJYXFZRHFEDIAPPWZQKZZBCSISBRYDAFGVCBCWSDPSQOTIVMQGGRKVQIDTWZAWIQIDPN");

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
    msg.setTimeStamp(0.5170949085558958);
    msg.setSource(5394U);
    msg.setSourceEntity(128U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.3414444436997347);
    msg.setSource(40587U);
    msg.setSourceEntity(250U);
    msg.setDestination(41982U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.3161213838191115);
    msg.setSource(10409U);
    msg.setSourceEntity(243U);
    msg.setDestination(58259U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.5308204188258225);
    msg.setSource(20173U);
    msg.setSourceEntity(48U);
    msg.setDestination(49110U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.9388059428049838;
    msg.lon = 0.5789228873769762;
    msg.z = 0.8748357783737919;
    msg.z_units = 218U;
    msg.radius = 0.02755047671828681;
    msg.duration = 16971U;
    msg.speed = 0.44528978866375524;
    msg.speed_units = 41U;
    msg.custom.assign("LIQYSNSCZZEQWFWRKTPULKHDVCBJRHOZRVISXNNIMSRUDTXZIDBJELOMSBMGWFSUAPMQMUEQEKJPVXGTICFQYYNOLVKPCLDWNIDQGNALWAMNJKJHOUKZUOWXPGYMJYFVAFDBCEERTLMKCJJVDTAAHYXBHGQURRPGAZMOEAJKGSAQKWTXPBTYZPXRNYBUIRFFMLHFGOELKJVWXYDVSYCNTXUEEFBWUOCZSIPBCGOFSTBDD");

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
    msg.setTimeStamp(0.6373227944923133);
    msg.setSource(10280U);
    msg.setSourceEntity(138U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.404514532718823;
    msg.lon = 0.41036212136867456;
    msg.z = 0.6719765882027265;
    msg.z_units = 237U;
    msg.radius = 0.2663109929051273;
    msg.duration = 6683U;
    msg.speed = 0.39829379745226123;
    msg.speed_units = 218U;
    msg.custom.assign("MZAOZPRZYLXGVCDKGRJOEAQFTJPCCUIHTLFSATQAVBPIYKFYJDVXDSRHMCGVHLAPCUQXHOTNFOLKFVPKIMBKQXWYZNNMUELNHEBQPCQLRUMSDYKJUSNGQOWWTYEPDTPQGSOZPPVTKFBTVKSEDAQBNUBHEZDOYAYXDWNLVUWBJWHIFBIZJIKERZJJINRXMNUWFWISZMFRXOJJGROLKBILOETSSGXMMNE");

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
    msg.setTimeStamp(0.5077891830957182);
    msg.setSource(7779U);
    msg.setSourceEntity(150U);
    msg.setDestination(58101U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.7152029232325453;
    msg.lon = 0.5519957589383577;
    msg.z = 0.813999893871481;
    msg.z_units = 132U;
    msg.radius = 0.956366205275807;
    msg.duration = 19193U;
    msg.speed = 0.5635354225043936;
    msg.speed_units = 216U;
    msg.custom.assign("SRHFRARZAYOGZNMUZPGUFKQZELXPNZWLMLJBAEJIKUQJRCXCPXDEPWLHATXYRAZSZLSCSVSBLSOVKNHIDDTKEIFSSBLOYORGVDMAOFSFXWPFURODIJGHWKCOTBARNDPBTKKDNTQNXCEOTMYPTYQEZHINNLTQLUUKMGDWYIIQYWVMUTPZFGNYZCBJWVIVJXDUCOBVJXRPCAOAEWQMEYJKBTQQSHPMJHDXNXHEIHVMCHGBMCVFRGFUJQWWEUVKIF");

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
    msg.setTimeStamp(0.6104228319962216);
    msg.setSource(53873U);
    msg.setSourceEntity(253U);
    msg.setDestination(21200U);
    msg.setDestinationEntity(185U);
    msg.timeout = 45780U;
    msg.flags = 106U;
    msg.lat = 0.4506629619755457;
    msg.lon = 0.3486707430062008;
    msg.start_z = 0.5089043304360471;
    msg.start_z_units = 173U;
    msg.end_z = 0.5367819852842142;
    msg.end_z_units = 244U;
    msg.radius = 0.6494203669521269;
    msg.speed = 0.2517316469066324;
    msg.speed_units = 194U;
    msg.custom.assign("MWEPHNFRWUNVKLIMVIAAMHBPNGTMFCPTOOSRGNQYRADAHMZVPDBGMKTKABZIKJLGIFMTGNGXOFVEZVOHGFOYTPKQPBJVGLJFZWJYWFCUSNZHAREDMILELQEQYWKJOUQDCHZPKAUHDJWRUBDCUIOOIWJKZXCNLCQFBANUBWIMWXDDYLQCPCGVLKQZWOHVSY");

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
    msg.setTimeStamp(0.494039255834014);
    msg.setSource(6715U);
    msg.setSourceEntity(40U);
    msg.setDestination(35068U);
    msg.setDestinationEntity(188U);
    msg.timeout = 17657U;
    msg.flags = 142U;
    msg.lat = 0.7438687048175647;
    msg.lon = 0.7810224965991649;
    msg.start_z = 0.9661436771655417;
    msg.start_z_units = 6U;
    msg.end_z = 0.5872530247098132;
    msg.end_z_units = 123U;
    msg.radius = 0.7364727907086068;
    msg.speed = 0.5975694876606147;
    msg.speed_units = 96U;
    msg.custom.assign("UTXWWULKXXOZGIASMWAOSUVQVVRZWFTIZHMXZLLTKTTJSPOAXENDFANPIDIDKHGJBORNGFJSUYTDPJVYMCXDRRYLDQZJBKCJEORVERJXINFMKNPCMGVXNYCSGIBYTFQCQEAHONEWYFLMBUZOHMZLJVXOIQVE");

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
    msg.setTimeStamp(0.40564269934113417);
    msg.setSource(22756U);
    msg.setSourceEntity(191U);
    msg.setDestination(49977U);
    msg.setDestinationEntity(78U);
    msg.timeout = 28811U;
    msg.flags = 160U;
    msg.lat = 0.8751679838362629;
    msg.lon = 0.5831500364693695;
    msg.start_z = 0.29669743233465606;
    msg.start_z_units = 121U;
    msg.end_z = 0.7587479437758574;
    msg.end_z_units = 0U;
    msg.radius = 0.19871251163513404;
    msg.speed = 0.8870646068497778;
    msg.speed_units = 40U;
    msg.custom.assign("WOKMTPNSAZZBXAKNNUPVJNYYJIPSMWOGMGCLKBISCOWCAAVCTQHVBMZXDBSZST");

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
    msg.setTimeStamp(0.6386393777918912);
    msg.setSource(61412U);
    msg.setSourceEntity(155U);
    msg.setDestination(57921U);
    msg.setDestinationEntity(150U);
    msg.timeout = 63555U;
    msg.lat = 0.27505113075987364;
    msg.lon = 0.6925646658413221;
    msg.z = 0.22540194884525677;
    msg.z_units = 183U;
    msg.speed = 0.8392275266019099;
    msg.speed_units = 124U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7094535675325914;
    tmp_msg_0.y = 0.794673821021198;
    tmp_msg_0.z = 0.5321140536951225;
    tmp_msg_0.t = 0.7386872760746293;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EWMRVZQUNWMFDUZZICXCIBVCLSOHVJJKHTXNDEDHHXEXPMPFHZOURQZ");

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
    msg.setTimeStamp(0.09514355231318516);
    msg.setSource(23558U);
    msg.setSourceEntity(145U);
    msg.setDestination(12127U);
    msg.setDestinationEntity(235U);
    msg.timeout = 36138U;
    msg.lat = 0.019989617828861217;
    msg.lon = 0.8262089474373203;
    msg.z = 0.5872554628372226;
    msg.z_units = 14U;
    msg.speed = 0.18155588420095115;
    msg.speed_units = 43U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2135848569389338;
    tmp_msg_0.y = 0.4245103686289844;
    tmp_msg_0.z = 0.55331966497198;
    tmp_msg_0.t = 0.0483503449654471;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YAVXGFNLBHLCXYZJNMECTMYYSIJKFIVQACVQQHTAKFCGRLRHKPXUZIPZCMBWLRDPVGQMFJGSULGNIFH");

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
    msg.setTimeStamp(0.19351559694105924);
    msg.setSource(42607U);
    msg.setSourceEntity(146U);
    msg.setDestination(56075U);
    msg.setDestinationEntity(127U);
    msg.timeout = 3981U;
    msg.lat = 0.6116144227411555;
    msg.lon = 0.905830848457517;
    msg.z = 0.7948809087349156;
    msg.z_units = 76U;
    msg.speed = 0.3603784641280977;
    msg.speed_units = 21U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.748189050194801;
    tmp_msg_0.y = 0.5778511836759961;
    tmp_msg_0.z = 0.9140529128845762;
    tmp_msg_0.t = 0.47957697859343795;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SADTCKJGYIMDMISIZTFNLMHWPUSFZRZXUISHKJDLAMTSOYVLKZWVOBXTVBQMCAMYTFZWIEGJHVANUXJFRTICGGQCTUNUEMPEJCHJNGSPCRQPIWOUPFNRPOBWCAWBQKJZKUTBYKDOQMJSPRYLXEULDIXAUDJWZ");

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
    msg.setTimeStamp(0.9489499029158107);
    msg.setSource(54614U);
    msg.setSourceEntity(18U);
    msg.setDestination(36543U);
    msg.setDestinationEntity(29U);
    msg.x = 0.07812258844917963;
    msg.y = 0.9446933264781125;
    msg.z = 0.7630862523035606;
    msg.t = 0.939082720742298;

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
    msg.setTimeStamp(0.2765792079737428);
    msg.setSource(33257U);
    msg.setSourceEntity(90U);
    msg.setDestination(51710U);
    msg.setDestinationEntity(30U);
    msg.x = 0.07648278748965409;
    msg.y = 0.653319976309972;
    msg.z = 0.8877585849446714;
    msg.t = 0.5073199260084755;

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
    msg.setTimeStamp(0.4349512069302094);
    msg.setSource(5128U);
    msg.setSourceEntity(48U);
    msg.setDestination(3577U);
    msg.setDestinationEntity(15U);
    msg.x = 0.5724897423093372;
    msg.y = 0.4204037583112533;
    msg.z = 0.6407850193243848;
    msg.t = 0.36581738347118564;

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
    msg.setTimeStamp(0.37869696326476077);
    msg.setSource(40659U);
    msg.setSourceEntity(254U);
    msg.setDestination(47934U);
    msg.setDestinationEntity(122U);
    msg.timeout = 17260U;
    msg.name.assign("GCKTHAHNIILIKPSTSZNGWBVATUCZLSXEXPMYBPRPLRJXMFHQYFKXPJZTWWQRQUQDZXVFNZSMMTTVYFCKUVYJNDIDJOAGNBADWOBXKJODIPUKRGQQYECCOXADKFRAERIMALNDJVLFWZRDHZUILQKHYUUCNVKUENBOITYYWLJTESXYBCGZSUGXCNMSOXPFWCU");
    msg.custom.assign("VMXYGNBDDWTTORLPBAPDGKVCVIJGPZIJJXFVVACEMANURQLODOSXJEAALYMJYIVMDCWTHZWRVSUPONZVBHPIVSKMKNHKNQZVBESOBMWBYRAKMRWUYYFQJLKCDROGZJEUGXPDGJEXUAWQUXAOQFRAPZFICSFUTFQDYWPTZIAJMXWEHIBLCOFTXSCRBHEOQQHGZSHWUUPBQINREFIYGFZF");

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
    msg.setTimeStamp(0.45099064673430966);
    msg.setSource(42382U);
    msg.setSourceEntity(159U);
    msg.setDestination(54101U);
    msg.setDestinationEntity(86U);
    msg.timeout = 25367U;
    msg.name.assign("MZGEANNNITYDFDUZEFHXBVPAIZPHFWEMLGWFJWJOJSDTAQGYDQFUZRCQSOQLWCHCXYLFOZUYGMFGXEJWOJWKDRJUBLPH");
    msg.custom.assign("QANBYLUPLJOACISACWZOVLXZPJWLGVXZTDHSVUHPJFUKRFIJTFHRWLVFZTQMPWFDKDYOANKJQEWOPGMXNYNLHQQRVX");

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
    msg.setTimeStamp(0.2123232370446676);
    msg.setSource(61862U);
    msg.setSourceEntity(211U);
    msg.setDestination(8096U);
    msg.setDestinationEntity(232U);
    msg.timeout = 32642U;
    msg.name.assign("GFFJMHZFUGBKRCDBPEOIDMETQNZWLQPYXXGSMXHIQUZKAOETLGWHBCTKLOUZTLJZIOSYINUVQZVISRBDVECRZBSTPPRWMAOOXHCXHCRWQETTVNQOTAOYQBPFRYDGGKWLMAJSKXBNVKGJTULYRNVWHXSKSHUEQLYOPCHMYMCI");
    msg.custom.assign("BRRQKOZYABKHUVPJLJUHEORCYJNOIVGALHNMDKYFMSZIGFVFUCPLZZTWDQROTCHRNPKGXDNREWBTQJLPMYOXVUPLASPIIUNHZGWVTOSGWSMCSDMIANEYKBPMTZHFKXNVOQOENCCFNTIWIJJXULXDHQULE");

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
    msg.setTimeStamp(0.47468259546233604);
    msg.setSource(65058U);
    msg.setSourceEntity(252U);
    msg.setDestination(56270U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.15060035000704486;
    msg.lon = 0.6793577858343202;
    msg.z = 0.6569812319230961;
    msg.z_units = 172U;
    msg.speed = 0.5854176245548894;
    msg.speed_units = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18473U;
    tmp_msg_0.off_x = 0.26585816775638693;
    tmp_msg_0.off_y = 0.9235986653873559;
    tmp_msg_0.off_z = 0.27893695392524753;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.86292952354188;
    msg.custom.assign("THNYYMCZVFRCEMAGDHVPDLIFMRCCFJNXVRLFELPGSLCDAAYJVLUHSGQKSKHWPUXJMIDBBKQTEQUOOL");

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
    msg.setTimeStamp(0.14846494514472675);
    msg.setSource(63533U);
    msg.setSourceEntity(253U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.2762047805105665;
    msg.lon = 0.9799002646474477;
    msg.z = 0.8819161375764777;
    msg.z_units = 243U;
    msg.speed = 0.5074533927839449;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.47212399141710093;
    tmp_msg_0.y = 0.9018549157552127;
    tmp_msg_0.z = 0.29606856849122276;
    tmp_msg_0.t = 0.44924606660862254;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 13162U;
    tmp_msg_1.off_x = 0.6953396065511239;
    tmp_msg_1.off_y = 0.30043394097813436;
    tmp_msg_1.off_z = 0.7752189319902546;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5998091391721692;
    msg.custom.assign("GKTJHVCMLYCORZLTUWBRDHJVWZRFVXGNJADYAOMQYTHNEGVGQGKMYJBAUBODIARCZMEPNWDLTBEFKICVETXXPRJNYPWUOBKXIZSHKTANQYHPHJSCEBRCHQALORUARFPOFCPNXTQKGSSC");

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
    msg.setTimeStamp(0.3895313331044694);
    msg.setSource(62000U);
    msg.setSourceEntity(244U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.3980532474524823;
    msg.lon = 0.3690972015022589;
    msg.z = 0.3337942733810131;
    msg.z_units = 216U;
    msg.speed = 0.6685095766867936;
    msg.speed_units = 208U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9505049512704883;
    tmp_msg_0.y = 0.47814934497909034;
    tmp_msg_0.z = 0.7233469067561517;
    tmp_msg_0.t = 0.3262093934438155;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31481U;
    tmp_msg_1.off_x = 0.5236126255489255;
    tmp_msg_1.off_y = 0.27047699909488054;
    tmp_msg_1.off_z = 0.794857616003235;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5602870926429036;
    msg.custom.assign("AFCSPKJIGLWBCVDSBNZIZWJCUVNONTMUMQZAHXZYHTCERWLNCRDCHRZQLYGFYGEJDXOFRYGBWVOATFREXJPRTSXTLG");

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
    msg.setTimeStamp(0.18813227970891888);
    msg.setSource(3518U);
    msg.setSourceEntity(99U);
    msg.setDestination(54549U);
    msg.setDestinationEntity(227U);
    msg.vid = 2448U;
    msg.off_x = 0.17633608546904267;
    msg.off_y = 0.6608844061212006;
    msg.off_z = 0.6531645004996053;

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
    msg.setTimeStamp(0.36789727496770264);
    msg.setSource(65180U);
    msg.setSourceEntity(90U);
    msg.setDestination(42999U);
    msg.setDestinationEntity(141U);
    msg.vid = 37862U;
    msg.off_x = 0.17856896475503448;
    msg.off_y = 0.18186037533115995;
    msg.off_z = 0.6922392519220245;

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
    msg.setTimeStamp(0.0058275341682199056);
    msg.setSource(12284U);
    msg.setSourceEntity(105U);
    msg.setDestination(28886U);
    msg.setDestinationEntity(59U);
    msg.vid = 34161U;
    msg.off_x = 0.1794341133751295;
    msg.off_y = 0.4209729267555373;
    msg.off_z = 0.1524474816625795;

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
    msg.setTimeStamp(0.6631071464241499);
    msg.setSource(3155U);
    msg.setSourceEntity(234U);
    msg.setDestination(65069U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.3578669504214027);
    msg.setSource(11110U);
    msg.setSourceEntity(76U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.018677057878306313);
    msg.setSource(19988U);
    msg.setSourceEntity(91U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.9810538132901794);
    msg.setSource(27485U);
    msg.setSourceEntity(148U);
    msg.setDestination(35705U);
    msg.setDestinationEntity(37U);
    msg.mid = 18747U;

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
    msg.setTimeStamp(0.005495440747551261);
    msg.setSource(11040U);
    msg.setSourceEntity(115U);
    msg.setDestination(62078U);
    msg.setDestinationEntity(211U);
    msg.mid = 32279U;

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
    msg.setTimeStamp(0.37062828615142196);
    msg.setSource(40505U);
    msg.setSourceEntity(212U);
    msg.setDestination(33979U);
    msg.setDestinationEntity(115U);
    msg.mid = 4194U;

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
    msg.setTimeStamp(0.3586659713183915);
    msg.setSource(13256U);
    msg.setSourceEntity(107U);
    msg.setDestination(60654U);
    msg.setDestinationEntity(230U);
    msg.state = 24U;
    msg.eta = 57292U;
    msg.info.assign("FBTTLHWDXMLJKYGGOBBZHSDDRVAKWFATIPITCJLURMWNKEKOVFJVZKHSMRQUHASIVNCZFFLMMQWHRHDDFSMZAZPXUKFLNPQNMCYKNEEUIJQZSZAICDUTAGKTJTQGVWIBOLPDWYNOIESSNWYN");

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
    msg.setTimeStamp(0.8292734465046347);
    msg.setSource(12506U);
    msg.setSourceEntity(240U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(240U);
    msg.state = 216U;
    msg.eta = 33912U;
    msg.info.assign("TUMDRZQDWXBGLAESJSWYHIUAVEOMKRNWIOCYCWIEFZLTMXKXMPEDCABIUDWXILQTJSLNLRBLDVLROEOZVCHSARKIESDEZNMQUUZGIXCOPHLBQKRJJTJRKYAQUJFFZQGVFHHVKMPGTYIXEBPBCRVKFRMUTWS");

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
    msg.setTimeStamp(0.45934953786688093);
    msg.setSource(52356U);
    msg.setSourceEntity(205U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(224U);
    msg.state = 121U;
    msg.eta = 1134U;
    msg.info.assign("OEHVIVAPIYUYPJXZNVCJEBICRSMOZYPPLYCBLZNCXVXZZIEWBLFAUVVOXGSDVSBWQHVCOUJRGWBCTXSFTMLHLQMETSCNIRWFKGDJAMEQJWWYEXLIFOOYYYAJLKUKXVRHLNKJNFWSNUOKTOYKGIJIOEKTQZZQYKZFRTQBZQGHPQAHSFRGUUWHXWDBLSFZPUIRLKMBNFDHXDAAMUOGEPCXJMAMDGHMNGTVSIAQSEGQPEDMCNFDNTRT");

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
    msg.setTimeStamp(0.051027409211717334);
    msg.setSource(27458U);
    msg.setSourceEntity(25U);
    msg.setDestination(54144U);
    msg.setDestinationEntity(194U);
    msg.system = 32456U;
    msg.duration = 4272U;
    msg.speed = 0.46463824527518505;
    msg.speed_units = 56U;
    msg.x = 0.12375654862416186;
    msg.y = 0.5678221551433982;
    msg.z = 0.5214741120257627;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.3502333109400726);
    msg.setSource(64845U);
    msg.setSourceEntity(66U);
    msg.setDestination(34456U);
    msg.setDestinationEntity(32U);
    msg.system = 13021U;
    msg.duration = 36360U;
    msg.speed = 0.32900351358408086;
    msg.speed_units = 192U;
    msg.x = 0.9071366057346614;
    msg.y = 0.8696213315991775;
    msg.z = 0.7118815656039819;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.1677436668326533);
    msg.setSource(40143U);
    msg.setSourceEntity(21U);
    msg.setDestination(50952U);
    msg.setDestinationEntity(1U);
    msg.system = 40501U;
    msg.duration = 38129U;
    msg.speed = 0.8881029363714024;
    msg.speed_units = 250U;
    msg.x = 0.4418056521765571;
    msg.y = 0.05305087107644291;
    msg.z = 0.29063750710774694;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.7771554962551711);
    msg.setSource(24080U);
    msg.setSourceEntity(114U);
    msg.setDestination(38917U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.2171472180273719;
    msg.lon = 0.30997810795260117;
    msg.speed = 0.9230573873386818;
    msg.speed_units = 156U;
    msg.duration = 53698U;
    msg.sys_a = 14725U;
    msg.sys_b = 45487U;
    msg.move_threshold = 0.5838156355989889;

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
    msg.setTimeStamp(0.6425937891504497);
    msg.setSource(35065U);
    msg.setSourceEntity(53U);
    msg.setDestination(1208U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.39551170648513534;
    msg.lon = 0.583044147931977;
    msg.speed = 0.8841393501061269;
    msg.speed_units = 232U;
    msg.duration = 4072U;
    msg.sys_a = 55300U;
    msg.sys_b = 49198U;
    msg.move_threshold = 0.032942578400460776;

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
    msg.setTimeStamp(0.49997694147789196);
    msg.setSource(52084U);
    msg.setSourceEntity(242U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.7655795705805007;
    msg.lon = 0.7435840572446848;
    msg.speed = 0.9970857674563811;
    msg.speed_units = 227U;
    msg.duration = 4419U;
    msg.sys_a = 56953U;
    msg.sys_b = 25278U;
    msg.move_threshold = 0.9440280182347207;

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
    msg.setTimeStamp(0.8018105185482614);
    msg.setSource(49635U);
    msg.setSourceEntity(143U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.7341735583409468;
    msg.lon = 0.05415765702733899;
    msg.z = 0.5595328024282631;
    msg.z_units = 120U;
    msg.speed = 0.6779995400793273;
    msg.speed_units = 198U;
    msg.custom.assign("NVMIQKGXXZYWATLVIVVJHQYRBVOWRBATHUTUTLGNRHNBXHYLWMLOZAXZKGF");

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
    msg.setTimeStamp(0.36629835966068347);
    msg.setSource(1288U);
    msg.setSourceEntity(185U);
    msg.setDestination(16683U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.43988631913598086;
    msg.lon = 0.9524441478371396;
    msg.z = 0.15130587125108752;
    msg.z_units = 3U;
    msg.speed = 0.31238884107589593;
    msg.speed_units = 168U;
    msg.custom.assign("LFBHXMVURBWWFNSGCATKOXNEIFFPGRKCVYLPVLRFLEDOSTOYZEHBLAWMOFKIANBQWPZRPUSOTXSUHBVLOVZSQKRVLNTZHYPQJWKGPIBSEJYZEDUUXRYMHTYTEKIJLYJEJNLMFKVYAPKAZEMNHBWCSRIDNMXHGOEAMFJFGWYLDICCGOCJUBTCAPAIQSJRQXJVDWSUBZWGDBIRX");

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
    msg.setTimeStamp(0.24225361494992181);
    msg.setSource(45747U);
    msg.setSourceEntity(254U);
    msg.setDestination(30646U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.9905963226001822;
    msg.lon = 0.14827035952223389;
    msg.z = 0.9785935289842684;
    msg.z_units = 186U;
    msg.speed = 0.23717264630180157;
    msg.speed_units = 138U;
    msg.custom.assign("BDPKKQTBJMHRJXBLPIKHYLWWMCKPOFRYSDJSFYHPIMFVMWLPTJUSRANVEAPOCJQKYHXIUALGFAMDWUUHSDDIWXXCUZMZQWTXBVGLESRSZZENRZMPJYFEPQCEJTV");

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
    msg.setTimeStamp(0.870958783183851);
    msg.setSource(3265U);
    msg.setSourceEntity(218U);
    msg.setDestination(36183U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.21233286425424758;
    msg.lon = 0.18962826822566325;

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
    msg.setTimeStamp(0.9776713789483349);
    msg.setSource(28333U);
    msg.setSourceEntity(230U);
    msg.setDestination(1135U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.2616578239109817;
    msg.lon = 0.2662251886258731;

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
    msg.setTimeStamp(0.8302638331655121);
    msg.setSource(56976U);
    msg.setSourceEntity(79U);
    msg.setDestination(16758U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.8108022756852514;
    msg.lon = 0.18589515864322015;

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
    msg.setTimeStamp(0.31819620010641136);
    msg.setSource(53895U);
    msg.setSourceEntity(135U);
    msg.setDestination(4931U);
    msg.setDestinationEntity(221U);
    msg.timeout = 19350U;
    msg.lat = 0.17372826818011178;
    msg.lon = 0.7936722306836465;
    msg.z = 0.8547684285382009;
    msg.z_units = 60U;
    msg.pitch = 0.2829741948056316;
    msg.amplitude = 0.5646691028632934;
    msg.duration = 15208U;
    msg.speed = 0.38812646454176103;
    msg.speed_units = 104U;
    msg.radius = 0.498331784069317;
    msg.direction = 249U;
    msg.custom.assign("ZFJYHUMKLUXIRHVEZAGGTWYDHRAOPFMNZZJVYOVIXNSRGDFUGDWLCOITIRHNOMATZQGSBBEPTAQPSMBAIMILUQWLSCUJRVNHKYKOXPXDNWHNFVBJPXREQBWNFKNUCJYILJOZDGPYKGKSECKFLBAQUTJESEOVZCMVXHMATQWHSZLCQNGRMAIKLYABEALCGTHNQUTLXDTCOMKDFDS");

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
    msg.setTimeStamp(0.00013876189844064246);
    msg.setSource(58350U);
    msg.setSourceEntity(118U);
    msg.setDestination(52496U);
    msg.setDestinationEntity(91U);
    msg.timeout = 32882U;
    msg.lat = 0.033126900098268464;
    msg.lon = 0.6706676059717331;
    msg.z = 0.9806876848134894;
    msg.z_units = 251U;
    msg.pitch = 0.13303092237145664;
    msg.amplitude = 0.8851348790204636;
    msg.duration = 61746U;
    msg.speed = 0.6254130011259771;
    msg.speed_units = 205U;
    msg.radius = 0.8610325150694049;
    msg.direction = 195U;
    msg.custom.assign("DHZNRLLBTCDSOQQMEFITSPPUEAZKXSONKWYBDXXRKXRDCVYQKYDQHHIANOPANHBFIHUYJLPKIEFPMEXCDHKONJITWGNVCWRARBLHFRPTOSAQIUGWWTBTWKUJXVTZJRRKENGRALWCGMFATPJJOZVHMIUQMFGSDGYWUSLLHZRMXAJBKCGZUTQUXUMBVDQEQEFMGPBPMOCTOIZSWEEVKSEBDIIFBVJCYNXVJZXYWYVZSLAHNDGUVSCQ");

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
    msg.setTimeStamp(0.7726473655071333);
    msg.setSource(34317U);
    msg.setSourceEntity(129U);
    msg.setDestination(50356U);
    msg.setDestinationEntity(247U);
    msg.timeout = 52128U;
    msg.lat = 0.18524870952243944;
    msg.lon = 0.6007218623922718;
    msg.z = 0.9915162046505576;
    msg.z_units = 131U;
    msg.pitch = 0.41619511705410805;
    msg.amplitude = 0.7344295071470188;
    msg.duration = 9333U;
    msg.speed = 0.22123496586586167;
    msg.speed_units = 116U;
    msg.radius = 0.5623834034057057;
    msg.direction = 47U;
    msg.custom.assign("DSGHDLDZRHYOEOTBQKXWASZLJFTNSGRUZBRTELU");

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
    msg.setTimeStamp(0.2146414300204822);
    msg.setSource(49725U);
    msg.setSourceEntity(160U);
    msg.setDestination(12744U);
    msg.setDestinationEntity(8U);
    msg.control_src = 39679U;
    msg.control_ent = 139U;
    msg.timeout = 0.8946727826781483;
    msg.loiter_radius = 0.3526476840414995;
    msg.altitude_interval = 0.4859024872466522;

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
    msg.setTimeStamp(0.9307755070676149);
    msg.setSource(48649U);
    msg.setSourceEntity(187U);
    msg.setDestination(36130U);
    msg.setDestinationEntity(82U);
    msg.control_src = 31660U;
    msg.control_ent = 95U;
    msg.timeout = 0.6928070823944972;
    msg.loiter_radius = 0.4484620746334341;
    msg.altitude_interval = 0.03528076606908104;

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
    msg.setTimeStamp(0.5769418452917567);
    msg.setSource(45392U);
    msg.setSourceEntity(102U);
    msg.setDestination(50176U);
    msg.setDestinationEntity(129U);
    msg.control_src = 36107U;
    msg.control_ent = 55U;
    msg.timeout = 0.561775605727693;
    msg.loiter_radius = 0.16924659704076372;
    msg.altitude_interval = 0.3852184734574172;

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
    msg.setTimeStamp(0.7734336528353858);
    msg.setSource(23554U);
    msg.setSourceEntity(10U);
    msg.setDestination(5376U);
    msg.setDestinationEntity(209U);
    msg.flags = 96U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6220898515239002;
    tmp_msg_0.speed_units = 202U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2663265555460924;
    tmp_msg_1.z_units = 246U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.800934262356592;
    msg.lon = 0.6562859104820332;

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
    msg.setTimeStamp(0.6878125319554084);
    msg.setSource(29560U);
    msg.setSourceEntity(182U);
    msg.setDestination(60470U);
    msg.setDestinationEntity(137U);
    msg.flags = 198U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.172369115012882;
    tmp_msg_0.speed_units = 67U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6589743203434433;
    tmp_msg_1.z_units = 59U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9884762134507105;
    msg.lon = 0.5940057575576695;

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
    msg.setTimeStamp(0.29503440667879866);
    msg.setSource(27284U);
    msg.setSourceEntity(174U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(162U);
    msg.flags = 179U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.04842871833152329;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.19698545809695867;
    tmp_msg_1.z_units = 67U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.004426829446550373;
    msg.lon = 0.38013250765152984;

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
    msg.setTimeStamp(0.9080270974354712);
    msg.setSource(43895U);
    msg.setSourceEntity(50U);
    msg.setDestination(49755U);
    msg.setDestinationEntity(17U);
    msg.control_src = 57723U;
    msg.control_ent = 223U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 5U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7049623558517384;
    tmp_tmp_msg_0_0.speed_units = 189U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8843349038951488;
    tmp_tmp_msg_0_1.z_units = 230U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3490224465852847;
    tmp_msg_0.lon = 0.1577860894799169;
    msg.reference.set(tmp_msg_0);
    msg.state = 107U;
    msg.proximity = 62U;

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
    msg.setTimeStamp(0.4710610413580847);
    msg.setSource(57785U);
    msg.setSourceEntity(171U);
    msg.setDestination(61110U);
    msg.setDestinationEntity(111U);
    msg.control_src = 22328U;
    msg.control_ent = 6U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 220U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.26748731753459554;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8576803315698427;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2947204575032847;
    tmp_msg_0.lon = 0.381766230966743;
    msg.reference.set(tmp_msg_0);
    msg.state = 76U;
    msg.proximity = 152U;

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
    msg.setTimeStamp(0.7051475286524528);
    msg.setSource(44174U);
    msg.setSourceEntity(166U);
    msg.setDestination(4660U);
    msg.setDestinationEntity(218U);
    msg.control_src = 40700U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8578737117813665;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8932579025969021;
    tmp_tmp_msg_0_1.z_units = 162U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7241588165960443;
    tmp_msg_0.lon = 0.20821016074307064;
    msg.reference.set(tmp_msg_0);
    msg.state = 143U;
    msg.proximity = 96U;

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
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.5186649601287052);
    msg.setSource(31189U);
    msg.setSourceEntity(18U);
    msg.setDestination(22830U);
    msg.setDestinationEntity(192U);
    msg.control_src = 41539U;
    msg.control_ent = 184U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 75U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.31952572656667777;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8597213145089704;
    tmp_tmp_msg_0_1.z_units = 239U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.06323554564410871;
    tmp_msg_0.lon = 0.37029695727775225;
    msg.reference.set(tmp_msg_0);
    msg.state = 121U;
    msg.proximity = 192U;

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
    msg.setTimeStamp(0.9604687877177337);
    msg.setSource(47768U);
    msg.setSourceEntity(95U);
    msg.setDestination(46329U);
    msg.setDestinationEntity(219U);
    msg.control_src = 12397U;
    msg.control_ent = 238U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 137U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.05931862215576911;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.17206622134103955;
    tmp_tmp_msg_0_1.z_units = 86U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.586077612896871;
    tmp_msg_0.lon = 0.6480089853437307;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.026161667982321224);
    msg.setSource(20162U);
    msg.setSourceEntity(111U);
    msg.setDestination(54262U);
    msg.setDestinationEntity(225U);
    msg.control_src = 11656U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 59U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43371514725981763;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5201637442267811;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7349589848400782;
    tmp_msg_0.lon = 0.4503679786504946;
    msg.reference.set(tmp_msg_0);
    msg.state = 53U;
    msg.proximity = 226U;

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
    msg.setTimeStamp(0.851074990472278);
    msg.setSource(14922U);
    msg.setSourceEntity(152U);
    msg.setDestination(34533U);
    msg.setDestinationEntity(150U);
    msg.op_mode = 30U;
    msg.error_count = 153U;
    msg.error_ents.assign("RGTBAGQWDICDNUMWOXSBKSNSGBOTKVPOZNIWPJLUXYISCYEOJVVVHNLPFGAEZWARVQBWZLYTDFEUUTRMHCYFOJRZFXFMQWTDZNYGHGSWFAZLCOVJIECAJEXYHVKGITAPUDMDRGNQLUQJXSIEHOPHVMGGKPWM");
    msg.maneuver_type = 24284U;
    msg.maneuver_stime = 0.041371499886637464;
    msg.maneuver_eta = 34252U;
    msg.control_loops = 1058585004U;
    msg.flags = 124U;
    msg.last_error.assign("QJNQCKALKKQPJXPUVHGNZMNYIAEXOPERTBIVEMJPRHEDVUSOTZVUVLIGADSYHIMZGWDUTWPBNIRBKCCSCWZZSIUCQFQMPFJKWDPCWTETIHSHXNFOCXYQMTAFFVZLVEPEFQWMUXKHURDZYJIYUOLIEGKDSDBTMDLAKVOJLHLWGOR");
    msg.last_error_time = 0.5224269551052947;

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
    msg.setTimeStamp(0.7631600404861473);
    msg.setSource(6132U);
    msg.setSourceEntity(172U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(166U);
    msg.op_mode = 35U;
    msg.error_count = 200U;
    msg.error_ents.assign("JRRJCHFUEREIQJNFGFKETQNTZWXPHJABVVBZZACGSROTEWDAYXYJGLXPBWUNPDMWEDVXFOWZDBICSLAIMVTUYUQTLYWIMAXWODWVVGONLQLHHNFUWNIHFDZMXTVRPXIRDARJENKOKZKGDBSOQKCHSSPQOZHBFOLGALGRKEEVLBCCSHMAGUVRPKLLZMMSJXTQCYQAIKGUPTSEICZAYSYUTJOZNIQYPHIUGOBTQFNXCMF");
    msg.maneuver_type = 25669U;
    msg.maneuver_stime = 0.5690851479938228;
    msg.maneuver_eta = 42769U;
    msg.control_loops = 1568388599U;
    msg.flags = 248U;
    msg.last_error.assign("ELNBQIDPYUPFCLHSRPZTZSCFYITYZZVDRCIDBAAMYIHADEYADGTVCOSINMSFXBMAXOLJFUVTXXOOIORKCJTBTMUSIDHWWECSGDNWNTMSGPZEYULNKJKIFQUVVHKDYYUOGJQPXZNKVRWLHHUHQQHDSBEWZLVBTFLHJNGEBKPRPAN");
    msg.last_error_time = 0.06933485393005312;

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
    msg.setTimeStamp(0.726047072766624);
    msg.setSource(12278U);
    msg.setSourceEntity(59U);
    msg.setDestination(24553U);
    msg.setDestinationEntity(152U);
    msg.op_mode = 208U;
    msg.error_count = 79U;
    msg.error_ents.assign("OCYILHEPIEVFPHHIOQUXNAWYLTSFSXDVYNTLDXYVIJGGRFLUERMGGBDSWJMPKFFUDRENNRHUXVZBVECKDXMRLHYSHBRAPSAYOHOATZOMJGVBTIUNMTBWDZPRXTWKGLAHIQNMKUKYMHUOBNPTNIQJDUBPHIJKXSCPTJKNQFFYKSIGOMBFGWGCJFCZAAEVLDCCRJSAZWLMEZWQXQVZRESLQDEX");
    msg.maneuver_type = 4243U;
    msg.maneuver_stime = 0.6033647482877406;
    msg.maneuver_eta = 24306U;
    msg.control_loops = 2809604634U;
    msg.flags = 150U;
    msg.last_error.assign("DOJMYSQAWXIXXGXVLARHLSLBPZFEMRTMYQBCBIZAMXJVOBLGLMQEIYHJXNEVEPQNZBSUQCCBCDWVZGUORJDDQUHKHYFOMIOGUMWFTQGGGXKPKKFSXIUOMWENYZTZCLEAQWYWTVDJRHFHIUNFNUFTTXOWKGCJWKRAPDJZIPLYAUDLSSZOFOEEEH");
    msg.last_error_time = 0.7766012220398801;

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
    msg.setTimeStamp(0.21146010353214617);
    msg.setSource(1905U);
    msg.setSourceEntity(212U);
    msg.setDestination(55987U);
    msg.setDestinationEntity(240U);
    msg.type = 44U;
    msg.request_id = 20515U;
    msg.command = 163U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 16043U;
    tmp_msg_0.lat = 0.7921502905041663;
    tmp_msg_0.lon = 0.8743413539419663;
    tmp_msg_0.z = 0.6485865195656385;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.8400627777985746;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.duration = 35616U;
    tmp_msg_0.radius = 0.6539519556917374;
    tmp_msg_0.flags = 99U;
    tmp_msg_0.custom.assign("RSRNWZWGFYOPVRAEVROLCLWERUITJRYWEUZUOROOKKTCBXPMXQSZZAK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6448U;
    msg.info.assign("JAYIJVUODTVFHXXEIFKJCXMXHSWEKHBCXKUQQXDRWTUSDTANRLCFGUZCJVSMGKRCPLQVXGYLISWYIHFQDJQQZPMMOGDFCWUBVYINODQAWNPJLOKDLPKJGALPQVEYEAEZPOZZXTONQIGYFWSCRNHNRYFMQRJRWIEUOFASWXTZMCZONSKZULVTEBDPPHOTVNHSGVRHZERKEBXISIVGUYGMDCAWUZTJBMWPGBLMLIFBLDOK");

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
    msg.setTimeStamp(0.16495310002798236);
    msg.setSource(17436U);
    msg.setSourceEntity(138U);
    msg.setDestination(8354U);
    msg.setDestinationEntity(158U);
    msg.type = 175U;
    msg.request_id = 50645U;
    msg.command = 24U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.64347849940627;
    tmp_tmp_msg_0_0.z_units = 47U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 27429U;
    tmp_msg_0.custom.assign("HAIQFPGRDNKYHZMVAMOQBTPFUEVAKDLOAHOJQIOLREEDAIVASNVHYTXSPXFICUNRCYGKDPYWTKOFBJTCSSLRIVDWPNEOSTYLQXFXKMWHUJZDLTVXAWMNDCEVMBXIKCHLFNHTQZMHWZJKWPILPEEGGOKJVLRNRGJUUBCLGWOZMYGJMXRUBFQFKJGNSIOYPUCEBLZCJQFMZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47235U;
    msg.info.assign("ZCUWTVOEBUTWWRTDMUEACCPBGAGABEMPGQLCOAM");

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
    msg.setTimeStamp(0.7053459256130936);
    msg.setSource(31028U);
    msg.setSourceEntity(87U);
    msg.setDestination(34776U);
    msg.setDestinationEntity(201U);
    msg.type = 169U;
    msg.request_id = 65457U;
    msg.command = 144U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 34890U;
    tmp_msg_0.lat = 0.21141420280279044;
    tmp_msg_0.lon = 0.41584316211904726;
    tmp_msg_0.z = 0.8889297117925814;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.speed = 0.19113641938831305;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.bearing = 0.3083755177769951;
    tmp_msg_0.cross_angle = 0.01110992751758999;
    tmp_msg_0.width = 0.5958758192657502;
    tmp_msg_0.length = 0.6525547038313964;
    tmp_msg_0.hstep = 0.4431243187724464;
    tmp_msg_0.coff = 162U;
    tmp_msg_0.alternation = 253U;
    tmp_msg_0.flags = 200U;
    tmp_msg_0.custom.assign("RVMABDTSFVCYCOKEMWJDNYZHWXHVMANDELXRDPBVZAMQCZQCZJLSXJMGQCOAWZM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19904U;
    msg.info.assign("YFGJHNFGHPCNGYOPNALQUZNKBZGYLKWTCXPLJMAVATMWOSCBGPVJHJSFDKRSAJEFGNPTCJMWDZHXOAUGSLMYISEEBZOWUVDRYMXTOAACIEYRHLVDYOMHBUIXEQ");

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
    msg.setTimeStamp(0.2723066517320225);
    msg.setSource(26076U);
    msg.setSourceEntity(235U);
    msg.setDestination(15005U);
    msg.setDestinationEntity(41U);
    msg.command = 85U;
    msg.entities.assign("LKIYSTSCPLWDQQTEXGHFWESQJNSHZXTGQZAJHVWFHEPALOOPUICORBRAZ");

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
    msg.setTimeStamp(0.5277163261300732);
    msg.setSource(51635U);
    msg.setSourceEntity(54U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(58U);
    msg.command = 185U;
    msg.entities.assign("CEGTCAIYVTLMCFOUYUPXZURQJYSRUKHWNLNJWCNAPKMMJEAPXVOMTCHZSIPJKVNBARSBZVKRITXHWUFBCZDLTAVHKQQWGNEIHNQBCRHJJGSBBRTQLTDPFJEHIMMGSRBMWUZDOFBVVBPGYTPYKQPHDULNSFYXCUMQMISCENVFIQWLYOGUYRDKFDZHYOYDGKJPN");

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
    msg.setTimeStamp(0.7004446405864868);
    msg.setSource(17366U);
    msg.setSourceEntity(24U);
    msg.setDestination(58261U);
    msg.setDestinationEntity(68U);
    msg.command = 11U;
    msg.entities.assign("QZHFOYRCQJTCHNBGNCBSJUSCMGZOTEAMLNGJFYVDDRUGUGYZCLSEXODIFDFJEAXVYPREELXYGVCELJXQZLUFJFWNGWSNOUQTHMUCHCHHMPSZLWXKTSUAPBDNDBWPPBLMKMKMQRUAIVIFU");

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
    msg.setTimeStamp(0.2380858235050668);
    msg.setSource(62497U);
    msg.setSourceEntity(213U);
    msg.setDestination(65432U);
    msg.setDestinationEntity(252U);
    msg.mcount = 245U;
    msg.mnames.assign("IVSMREIDXFMCLBTGJDWPJNOSYVUWFAXIIPFKXPGVRZJLNCOOAMXCLJEXTIJQNYXXYPTEUSI");
    msg.ecount = 71U;
    msg.enames.assign("GTZAUBOXEDNYSDTYAZXZKVDKSSKENPCGWPWXPVVIMBQSAQGBZGGHTHFOWHJNKPRLWFVJNSVSRRYVCXCZ");
    msg.ccount = 83U;
    msg.cnames.assign("UGPBDWEDVZZVGMPTJZDKWUUAQTGEAKLVYCYGPYQOPLGFURWWKYBATDIGTMCQAMFWZVPJBNQDMCBGKNWCGJOQSJYALAKIPMNSF");
    msg.last_error.assign("CACLZEZTRPETVNXJMTDXBVYRTGINUIYZGGCMSXSVGAKBZKIDSKOBNJPYCOALZFPYEBXFPJNBLQLOILBNEFEUQWWMHMWZCNZIHDXRRFYUVXEAWPFCGSDFEHHRUCBGDTAKLISNWOZMLTRAPTSMUXHRKJEPZTDYVQJUJVSVGFYUYBOAHBNLFTUHWRVDHNYGXKDNSH");
    msg.last_error_time = 0.4784851793200512;

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
    msg.setTimeStamp(0.41406933591579054);
    msg.setSource(59261U);
    msg.setSourceEntity(209U);
    msg.setDestination(50871U);
    msg.setDestinationEntity(29U);
    msg.mcount = 204U;
    msg.mnames.assign("OWKMWFOOCKTKFJOOFLXLHCZZYGTWBCJEGYSYKTXWERLCMSBDNWVMXPQZGGMLAMEPJPXQINJZRVVSTYBIQADUMIRLJEMYYRRUNEGOUJGSPKTCSHWUNQZZQBPFMPELLQIRAVXLHGVARBUDFUSWSBDBCXHOKYMAQHYZBXRLLDPTKCJTHSAHWDIKJRICGIPAWZOFFSNUXFIPIBZQQ");
    msg.ecount = 211U;
    msg.enames.assign("LQNNAPTUFNHWJQYGTYJDLDMRWRAJFZQSJIQUJJCUVOAMTLHPRCUTSIRDXHTMHYFHAGPNOSBLYCROWBOBZPGZGYDFCXJMYRIJXHSPBNNASEMHFEMDLWUXISEDDFIKPPTASNTKIYOGVZCQDIUFOLCNGRFOYHVLVVPGVHQNAELLEQ");
    msg.ccount = 81U;
    msg.cnames.assign("ZKQDOMJZVWWYDYLBTCWDUZAEMLRSAZRJUFAHUXCKLQQIKQNPUGQCTWGIMXPHGMABDPLYESITYPOXAEFKLZCXTRBBDNABYCFQSQAYERPDKFBUGJWVIKXVTRROVTWPRNVXKDZJRENYQCRLMY");
    msg.last_error.assign("DXXONMRLOFAMQVOWPLRTSDETUEKGFGCRWZBENNPNIUTKMSSAQFXQYWEUGFCTKJBXFWMXSZMZIQPFHWGRFFH");
    msg.last_error_time = 0.16640952709998347;

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
    msg.setTimeStamp(0.046156292042149216);
    msg.setSource(10989U);
    msg.setSourceEntity(203U);
    msg.setDestination(65269U);
    msg.setDestinationEntity(221U);
    msg.mcount = 58U;
    msg.mnames.assign("QKGZAWHHOFWLYIPHAJDLMBPCCIADFNXVFAXUPDHBFHFCOGQUKLJPQRUEMMUDYQNNQUQMNGEKHGZCZWZLISBVKBLRJAKIQNYATRMMGXXLJTYWNXIROHFMWDVKRUQNWORUPSDJQSWAOYTO");
    msg.ecount = 57U;
    msg.enames.assign("JZIGWTVYOIGGJDFLOBHXWKHNXZNFODFPBNMSVIRTQZYOXXLSQKMTESYEXCSKLXZTLQILVMONKUBEARILWAZBYTCSJOECFOFRCYVQTHHFVTGJYZSPGUMKMEAEHARWUWDMVZRVDUWX");
    msg.ccount = 6U;
    msg.cnames.assign("KSFKHWNKEBX");
    msg.last_error.assign("OQLLNYWNBGTZCFOHXSALYNTGJIXZCDAISHRVMXWRTZQFHFTBBQLWPDHEOZXCPOSGKPMLYGHFNKEKOM");
    msg.last_error_time = 0.4305776329512834;

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
    msg.setTimeStamp(0.20399111267784964);
    msg.setSource(43033U);
    msg.setSourceEntity(15U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(12U);
    msg.mask = 187U;
    msg.max_depth = 0.9817119520147548;
    msg.min_altitude = 0.7790002465457043;
    msg.max_altitude = 0.889355201792198;
    msg.min_speed = 0.23079424892827982;
    msg.max_speed = 0.3952296813987427;
    msg.max_vrate = 0.9484305028013655;
    msg.lat = 0.5360516828364048;
    msg.lon = 0.626857781403665;
    msg.orientation = 0.05551980194306394;
    msg.width = 0.010141945860779544;
    msg.length = 0.09673769050037417;

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
    msg.setTimeStamp(0.46288352472291183);
    msg.setSource(48297U);
    msg.setSourceEntity(106U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(194U);
    msg.mask = 38U;
    msg.max_depth = 0.3855459700774363;
    msg.min_altitude = 0.488162902583105;
    msg.max_altitude = 0.9849070590494596;
    msg.min_speed = 0.9547389237058567;
    msg.max_speed = 0.6025737519388054;
    msg.max_vrate = 0.9893547041736144;
    msg.lat = 0.9379144424706581;
    msg.lon = 0.6073873104638376;
    msg.orientation = 0.9002272852522492;
    msg.width = 0.6812653731370429;
    msg.length = 0.8704921028879763;

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
    msg.setTimeStamp(0.007120830845353865);
    msg.setSource(29855U);
    msg.setSourceEntity(185U);
    msg.setDestination(3436U);
    msg.setDestinationEntity(160U);
    msg.mask = 44U;
    msg.max_depth = 0.7077460980302926;
    msg.min_altitude = 0.6555462100152704;
    msg.max_altitude = 0.4770586039441562;
    msg.min_speed = 0.04525978407386244;
    msg.max_speed = 0.7016474522781927;
    msg.max_vrate = 0.47572071036206853;
    msg.lat = 0.665372815281325;
    msg.lon = 0.22318141966387783;
    msg.orientation = 0.0607359462489383;
    msg.width = 0.7567187042116933;
    msg.length = 0.5689796249246946;

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
    msg.setTimeStamp(0.7270682650781454);
    msg.setSource(53180U);
    msg.setSourceEntity(62U);
    msg.setDestination(3370U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.4465413539682189);
    msg.setSource(56973U);
    msg.setSourceEntity(102U);
    msg.setDestination(3345U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.2986553688444483);
    msg.setSource(25780U);
    msg.setSourceEntity(148U);
    msg.setDestination(47670U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.8564195648345831);
    msg.setSource(43651U);
    msg.setSourceEntity(56U);
    msg.setDestination(21602U);
    msg.setDestinationEntity(187U);
    msg.duration = 6239U;

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
    msg.setTimeStamp(0.10250638397123724);
    msg.setSource(11272U);
    msg.setSourceEntity(42U);
    msg.setDestination(36224U);
    msg.setDestinationEntity(6U);
    msg.duration = 44838U;

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
    msg.setTimeStamp(0.0026141496874376724);
    msg.setSource(536U);
    msg.setSourceEntity(181U);
    msg.setDestination(26899U);
    msg.setDestinationEntity(188U);
    msg.duration = 20627U;

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
    msg.setTimeStamp(0.7302197250339559);
    msg.setSource(11992U);
    msg.setSourceEntity(110U);
    msg.setDestination(58794U);
    msg.setDestinationEntity(174U);
    msg.enable = 173U;
    msg.mask = 913208011U;
    msg.scope_ref = 0.8466599040156776;

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
    msg.setTimeStamp(0.7852562622897807);
    msg.setSource(59574U);
    msg.setSourceEntity(208U);
    msg.setDestination(20997U);
    msg.setDestinationEntity(63U);
    msg.enable = 96U;
    msg.mask = 3358478144U;
    msg.scope_ref = 0.33576028342078934;

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
    msg.setTimeStamp(0.5760391631466781);
    msg.setSource(55475U);
    msg.setSourceEntity(110U);
    msg.setDestination(54319U);
    msg.setDestinationEntity(2U);
    msg.enable = 34U;
    msg.mask = 4284676201U;
    msg.scope_ref = 0.8106619993247695;

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
    msg.setTimeStamp(0.5156052324811042);
    msg.setSource(13275U);
    msg.setSourceEntity(210U);
    msg.setDestination(14977U);
    msg.setDestinationEntity(97U);
    msg.medium = 116U;

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
    msg.setTimeStamp(0.7114805847715424);
    msg.setSource(28429U);
    msg.setSourceEntity(79U);
    msg.setDestination(38404U);
    msg.setDestinationEntity(37U);
    msg.medium = 12U;

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
    msg.setTimeStamp(0.3543847769894336);
    msg.setSource(59586U);
    msg.setSourceEntity(101U);
    msg.setDestination(22420U);
    msg.setDestinationEntity(197U);
    msg.medium = 90U;

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
    msg.setTimeStamp(0.6444165142621635);
    msg.setSource(32544U);
    msg.setSourceEntity(67U);
    msg.setDestination(22038U);
    msg.setDestinationEntity(68U);
    msg.value = 0.09224858073653575;
    msg.type = 141U;

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
    msg.setTimeStamp(0.558604435021687);
    msg.setSource(25331U);
    msg.setSourceEntity(178U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(219U);
    msg.value = 0.14531061381036225;
    msg.type = 217U;

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
    msg.setTimeStamp(0.4096441259716127);
    msg.setSource(41337U);
    msg.setSourceEntity(209U);
    msg.setDestination(17319U);
    msg.setDestinationEntity(50U);
    msg.value = 0.2894760873728591;
    msg.type = 108U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.7514469581479726);
    msg.setSource(29982U);
    msg.setSourceEntity(188U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.7863481763112901);
    msg.setSource(55522U);
    msg.setSourceEntity(224U);
    msg.setDestination(60891U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.09778980121083425);
    msg.setSource(38311U);
    msg.setSourceEntity(231U);
    msg.setDestination(52612U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.6482817245323728);
    msg.setSource(62849U);
    msg.setSourceEntity(130U);
    msg.setDestination(48071U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("XXGWEMJWZIMAFULMYCRHBXRGXOMMUGSXOPJVXAEYCBWDBBHLLIIEISO");
    msg.description.assign("RSQSMBBHXPWLTRDFMMLIVTIDPZDPQGIVSRUSKBWODSYBQVXMLGSOVWXXUOJRNHNIMMNAKZJEKOAOYLPSIODDGNFCPJRTXYGEKKDDFWMLZUEBQRGPAAKRXIKDOGHWFTVZNVFZYCTJSKNXTBTVAECPHTUGMSSTF");
    msg.vnamespace.assign("ZUJVFDPTMHGJITILXPETVCNDGNHKCBSOZIYLWKHUVRLAMQBSFBDVDXYOAZHHWROROSNIMQRQXOVOGCYGNEEPQRIFSVENMKGNZQPICQULBKDVGGTIJYMKDXSBEYAFZLFLUJAYYLGKDWXNZINLBPQUPAHOAVWXSCTUKHXYHCUMXAOUOWYTYBFQMSZNNSQZJLGBWHJIWKFMJBCJEDURFIWRE");
    msg.start_man_id.assign("SZVZQLGGDFLSXAHFBCQINBZBLZHVYWEUJTKWFMPHNNWCCKWTWSXBSNLDIGDHETLBPUWUSCXGTARSZNCWXLXDTVMMQKRMEYVCVPSVGIMWMNCOJHIBAYPPJHOTAEHXPRIVAQHGUNPJJKRKNXUZZKKPNKYSFOVTGEBXJOTEQSGAYEBROJSHLVQBRDDEJZFRFXUKOMAJIDYQFOOARREVYKIDUQITQUXABAFERWPOUFDZZIGGLHDMUMYC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XMJBHDGTWQRBLSDYYTTLOXMACOWUBQKSKPRWZEAAJJQJXLMMPMOPBZJKPQFTCNWRKWZRPEHQZYFLKFRUQUZDUUYGBWUXXBVODNFYRFMDMXYRVFYKOXKYGUVPCCJYQOPBACASWNTVXTFLVENDWDSHRVSOIGSDJUAIKBFECDMQAQKOGNBSJZSNHVWQZHLNYLZCXVKIVTHBHNJTPCICINLR");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 62442U;
    tmp_tmp_msg_0_0.custom.assign("TRGYRVUFAVWFLIGZIPASJAPFPUYERZCQUHZXFJWZOGGRVHKDMGYOH");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::CloseSession tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sessid = 3610466271U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BNGLWGVXGWZBAVFVVUTDHYMKLDAXZUQBJOGSYVOJJHBKUFNEIAMDTZIMYDTYSUUCQSUQYPUCOQMCBFESETNGQYQZOIYJXFCOGCTGUOWRRSNMAOYEVXJDYCAZZHISTXTBNFZDETZAMRKPRJXHNENLGBQCVCRPVKQMMPGVAPTTXFEFOILOHKRHHBJWQVWANISRUKSEKKD");
    tmp_msg_1.dest_man.assign("SPKIXRMULCMIZZGTRQMVBIHXRTWDFJTSUBOUGKNVCMOTFBZBYDPMFAWIPEJQJYOQDHESWGCBQODJAHUYRZEXRONQWKFLLMQDIXEXAIWBOLCHYQSTKAVMVIOMVKUJZZTLYVFWPXEIJRXHGSREPIYXLZFIMATNVMGLDULFPULECKJYDSHRVBYLNK");
    tmp_msg_1.conditions.assign("OMLTOMZQBRYNOAEBQCOEOJSVARBINPBKNWPTAYZSTP");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.8060064984869426);
    msg.setSource(24784U);
    msg.setSourceEntity(182U);
    msg.setDestination(25503U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("SBWBRYAMVDCFNKWJFIKVOIETFMPATJOQKEASUZAXINAXQWLYMZXFGJNEHDVFSTSSFYIUDQNIOKXPOC");
    msg.description.assign("TGTOZIYXVALCJDWVULUNDFFITLHVAQWCVTCCPVFOAFQIHAJNWGOAZURCVVBERUINJLGMEHFMRBKUYWBHJZEEAZBTDCHGWKADTSMHSHLUPWBHSMBLSMNXQTLKJIIWAQEMQDPUUKYXCIXXORGCMAVYSXKELOGFGMTFSPRNKKPLUXXWZYINERYZJDRZNDDWYHXPEZBSKQCOQZPN");
    msg.vnamespace.assign("SVGYUPDPRITPOINTTLNBZDQKSAVMTTWUEHCSMMLKARGQZXDSWBZJWZKU");
    msg.start_man_id.assign("HWSOXOPVELJFMWHLMJUUXYNMUTLPKEAKBBOVMSONCTSBZYFCHDWMAYPETXQBQQNPYRQBCXXTRXEZBFJDNYWGINPWENSALBGOSVJYRCMLCOSDTNYSUXTLGPTFIPVKIZTFNORCQWRZZRAJFIEVLMHULHTRH");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PMUNCHIHRJNYFLE");
    tmp_msg_0.dest_man.assign("JPJFCDVECGDVQNYDMSURUAELXCTNBJLSLPKKGOMELEZMQWGCCPIGVFZSVJOIIWMRNVTTWPMUJNSOPYNTKXSSGBAKZDALRDQQDHONZFZYCZMRSIALOWOTQYUZGBAXKEFHUSQIWJPBKURDRIFHRDWLXNQYKPCGXBRKLYAQJAMLTTHQDHVGTEBTAEWVVMXCMFHSOEFXJGYBZGYCHRZXKOARWD");
    tmp_msg_0.conditions.assign("AJSILQRXGXCVIVHLRJJZZRYDUBFWPLLXHYNOPWDHCSMLGGTXPSYHCNBQIRTEPMZYEUVSQADFQSYGCIJBQMC");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Sms tmp_msg_1;
    tmp_msg_1.number.assign("QCYEXWIETDDXLKNUEZPZXACRHNZUPAHGDVORVWRBSLRSYDNCKVXHVWYKHJMRMEUMUIFZX");
    tmp_msg_1.timeout = 39956U;
    tmp_msg_1.contents.assign("JGEFLNTNWOXKZOVPZIQRCMGAXLOMHEARNNELCGQJOHWWOPMLCZFPUOTOKLJLCYHZEVDJKSHYTDBEHUIQBAQKAUXEWZNZFVFZWOYGBFGDIDHSKHSRKCEXWBIPB");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.18829321878969318);
    msg.setSource(23964U);
    msg.setSourceEntity(225U);
    msg.setDestination(3462U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("NIRLBYWSUAHLVYIJKQJMNPIYXSQLMZOTYLMPHFHCUNZDDDDQNKIKTZSZQJHYNRCGNODQCGOSBVQWEHBGJOBFMLRCPCKBFDERPU");
    msg.description.assign("BRNDTUXAMVQGSCLFFDGNBTFUUHCZXDXJMXPNUKJCFMWSCGLBZZPXFGQTZBFVHEIWKINQRYLCVSBLICVJNSLRIYNOROZRDVIVYWMOCMTPEAZHJY");
    msg.vnamespace.assign("LUGVHTAPEBJNUGDWUTSTVQO");
    msg.start_man_id.assign("WPVSSOVPTHUPFVBWXFMBLUMLJCRWZFIKZARRLGMPHZAJMYIIJFZCYRULQENKDJWAJUUPDCGQRTVVIYFSFGDOWZWQNDFSADNYOCYUVSBLCLITEOJIRDSBOXENZGFCMLOGIKKVBPFUQNURDYENMQVEKWXPNBMOEZHRODVCHTZWTJQYA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("XDPNZSRIEIUWKVZGNITCXTABQVFFIFXQPQOJIRVKWAIDWRPQRGTXRODMQYBNNFRVLBXQBCFZELCMZMFHOGUSQRISOCXSMHYEIDALPEQLSAFUUVPGPYOHBNDSSHLUAXYYKGYJPZODTNOUJGZUMBKEO");
    tmp_msg_0.dest_man.assign("PBXXDAELAYVHYNVZYRHJZPLQBVFINTOGOJLXDNHVAZNAMOAXCBWONIDOPSKEWYMYKVBHFAYBNFPOKVTHVECLIQEXCAKCIRLRHTMDTKMZWLGRZEJQZZWWSXUAZQZAJERNHLDOQXDFYTF");
    tmp_msg_0.conditions.assign("CNFZLESJCSRDQQXOHXRIDVHCPVCENLBSPWYWBTPLQGEZMSSOCDRJCUYUIWWOADCCPNDGQSTYFBFHZHAAEHRWAJBFXXSGBYHGKPHXYFPEHYZFNQTTLXWMNTOORVZUQYBTGSNGNIOKNDCAERPJBQIUVIKUMUWGMEAJAFLUMEJIIILPATLRHYDGQKWBNTYMOMXMTCJUJOIRGHXKMZZFNTSVLWVPBZRDEKQKWVFGOJPBDK");
    IMC::RSSI tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6977481997945554;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::RemoteState tmp_msg_1;
    tmp_msg_1.lat = 0.7920825438211218;
    tmp_msg_1.lon = 0.11550778707918252;
    tmp_msg_1.depth = 115U;
    tmp_msg_1.speed = 0.8539221120725579;
    tmp_msg_1.psi = 0.4807461576525255;
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
    msg.setTimeStamp(0.8233028605588011);
    msg.setSource(54204U);
    msg.setSourceEntity(32U);
    msg.setDestination(44479U);
    msg.setDestinationEntity(15U);
    msg.maneuver_id.assign("PWGMTCLCVBUITQZNCLJDSRFSGYZMOQSTGTPKVVAGYNXIEOHUSHCANXEKTAODRMMDHDYBNGKBUVIFJBSIZDKRBJXBABZNLUOKNTWICEFCEFMBMAVAQBWSKJRUDRPUGYQALDIZYXKPWNHLUHQIHRICOZXODGWFQXTMWOXKQFOWCJGEAFXFHTSXENJZEQPLBIRVHLFWLSOYVRQYDWDSTZ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.5182255612643707;
    tmp_msg_0.lon = 0.005119552750403322;
    tmp_msg_0.z = 0.7393929659462118;
    tmp_msg_0.z_units = 68U;
    tmp_msg_0.speed = 0.5973621756456022;
    tmp_msg_0.speed_units = 96U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.40306341899194575;
    tmp_tmp_msg_0_0.y = 0.009584863926404008;
    tmp_tmp_msg_0_0.z = 0.821970485914017;
    tmp_tmp_msg_0_0.t = 0.40444176020630995;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 55653U;
    tmp_tmp_msg_0_1.off_x = 0.7435577980980824;
    tmp_tmp_msg_0_1.off_y = 0.7690402378077414;
    tmp_tmp_msg_0_1.off_z = 0.4138605585176812;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.6178167661406684;
    tmp_msg_0.custom.assign("ZRLQWHHFENASYQBYRPSZOHUHCHMXXLENJATDXDUJMDXBCMBCQQSVAHNULGIEMCRWKUFWIOFWTADZDDTRZFTFKCJRYWABKBTMNDIWHKNSBMWQGWHLBRYYSIYOJSEJUVTPPOBSVGPHLXWWVJF");
    msg.data.set(tmp_msg_0);
    IMC::CpuUsage tmp_msg_1;
    tmp_msg_1.value = 77U;
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
    msg.setTimeStamp(0.9126444008957051);
    msg.setSource(4861U);
    msg.setSourceEntity(177U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("YGRDGXTWNZYONFREVQTYAGFAKFZHFQRBMRSHBMTXJQXEULZDLCWDGQEMAIEQAAMXDLBKRZQNJIJHLFGBSCERFSKPKOLNMNYVCUMIKDIIHBAJAXQVEGZWBKBVCUPHLSYBLXMCQJLNPTPAZISVCUNRJKKYWPCKXZZCTOEWNYFVWGHLIXLNUDEPW");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.2003476821145892;
    tmp_msg_0.lon = 0.7016066256339557;
    tmp_msg_0.z = 0.050804875352723156;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.radius = 0.4125855414789743;
    tmp_msg_0.duration = 61911U;
    tmp_msg_0.speed = 0.3003134441244426;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.custom.assign("SCZAKHQPQXSNGWWGLZCUCOFYMDQQMPMVORNTNWZLDWKLMAMBTNNOGVCRFQTFEGVUPDFLRDQYGNJAECOSFSKKSANYWJDJAHHIWEOUMRRNRFERGFPEZYZQKVHTYXZEKBBDYITTPVBMWEDIRBSETZVKRHORGALAVJBKYIPWCUUNHXGPJFVFSONDGABXXVAMILCLSIUXJCZBOSPVJGIPQXP");
    msg.data.set(tmp_msg_0);
    IMC::AngularVelocity tmp_msg_1;
    tmp_msg_1.time = 0.8749429434480865;
    tmp_msg_1.x = 0.5507812922098261;
    tmp_msg_1.y = 0.8321056772482184;
    tmp_msg_1.z = 0.7886016875837614;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LinkLevel tmp_msg_2;
    tmp_msg_2.value = 0.7024827621246875;
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
    msg.setTimeStamp(0.6700745440318988);
    msg.setSource(3318U);
    msg.setSourceEntity(241U);
    msg.setDestination(62629U);
    msg.setDestinationEntity(43U);
    msg.maneuver_id.assign("KRSMPFVBJZYKQEKDZUQSPLYUMCQHUCFBZZVFVIQJTTWMAEXVWBUTDIDMOEDXBMUPSCFZQGNIWNIXQWPDWBYCQLIGKATLSSNNUBKYOEMXRWWQPTGJMYNWHZMCFMXEHGKRGOELUQLIVEOUZXLFJNVKVADCLHHYE");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.3662869721699712;
    tmp_msg_0.lon = 0.6848010209002967;
    tmp_msg_0.z = 0.9777371758736007;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.radius = 0.9617548636763725;
    tmp_msg_0.duration = 28849U;
    tmp_msg_0.speed = 0.1191683187695809;
    tmp_msg_0.speed_units = 224U;
    tmp_msg_0.custom.assign("NDZEJECWLXVVZYUFLRKOLIJYIXNMFASKRWVGGHBFOBCLESMUZCXKRATPDHOLKGFMEZILFGLOSVDKHDLXNTLSSIRUBQGFIUBSKHMAARPMCTTZTAYRJUNBKRQHBQMXJSWEVUNDJJHEOWTLXCMPZTPTDZPJHJNVKIOOCPSEVNFRAMBMSUQDYCFAZGVHIQNZXARGWVBDYXOPQYGVUNZQHYRQYCIJSJWTYIYWXFWKPCKEANQFPPG");
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
    msg.setTimeStamp(0.9788496305513493);
    msg.setSource(21563U);
    msg.setSourceEntity(153U);
    msg.setDestination(36042U);
    msg.setDestinationEntity(161U);
    msg.source_man.assign("LFEKZQYCMSZXOLFEXTDFVSWZCVSKKLQEYNQNAICHFMXPEKZXATODNNSDMQOU");
    msg.dest_man.assign("NUJBKWPICFGVMBUMVUSIIJQAXQKEPDZJRUKJPGTYKDSVMUWILDUHQSOXRCWZFDYBAGLUNBUKRXGQDTPSDJAARFYSSEVKPWVDYAZOXFALEYGLMGMEZJFALTKBLLHIPZXYQWZNEDVGTSVIMHOBRXJJKYQERHYNL");
    msg.conditions.assign("ESPSYLAQXQLKRQYBHZVNCAWJLWCVZKUHSBFCJJIHHGDDZYBRVCVZEYZYXNTUNYMRFEKETTVVMKWDHFUBGKIFRNVBSDUZPGRRNCOQKTXVBTPUYSXMFOEGDKVZLSLTJOMRJPBICTKOESPQWBIAQTXPZOCAVRZJCWN");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DVZAOQATFUKUMOHIMRPWGK");
    tmp_msg_0.visibility.assign("ZUTGSVFVIUXEQVLLWDIAPAQBOBQVUHTQGIPZELDXCSPZMKVIMXKHHZELRDRFWQOWMJIVWIAVCBJNTDQNBAYCQCCNOPEXOOGSHGCLEZXORFNWS");
    tmp_msg_0.scope.assign("YXRHUOKCVFEKGZQIUIUPCLREMBVKNEBVZDORSCUTSQR");
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
    msg.setTimeStamp(0.3722704120221987);
    msg.setSource(8930U);
    msg.setSourceEntity(198U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(55U);
    msg.source_man.assign("JWOFQVYCAZHZMDXJXVSBXLIGXDIXGKSUKHYAMNXEZYTLKCBZRGWZORUERTQUKGPFQKLYJEKPILDGFVTMVKBIWBPTQHPTLSOBZCUCYEBJLTKJEECEYPCAHNJKTC");
    msg.dest_man.assign("UVOIYJXPWTYJLWAESCDKBOCRRTINIJWFFPXXZBUMPXKHJJXGPAOUHSAQQDXABOUBKLOIONWIYWQMFNOILSCAHVRVHLNESAACWBTNRDSRUQMAEEMFSSJBPLTFZ");
    msg.conditions.assign("XEGQMLUXSQMHSUDISBVYHREMDAUVWPUASJPPRIVVITTDRWHPKJEWUWNBYRLDSHWSRTUHKXKEO");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 192U;
    tmp_msg_0.x = 0.755808939786618;
    tmp_msg_0.y = 0.7686767685641728;
    tmp_msg_0.z = 0.34712869155053216;
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
    msg.setTimeStamp(0.9476258376144986);
    msg.setSource(21290U);
    msg.setSourceEntity(10U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(190U);
    msg.source_man.assign("NIBYCKPDZRRVHWKDNOSHTTNRZMVC");
    msg.dest_man.assign("FXNQRMGKUPWPBOWLGCTRSGOYYIEAEMNDVNPUDHXDRNTIHKRQKPUHNQAUDGWOBFEOPKAZGGMSXHSEYYVTOJSMWEMYIJYETCDLRWTBYQOPHOFOWBWJYEAPMVVQCXQZJUAJSCFUJLIVMZXPDZAXBGCNLIQKRGENEBLCASPLZZMTBJTHFBZKTNLKUHKATFIVJUOGCCQ");
    msg.conditions.assign("AZBGFZBZZZTVOQSOKTKSGTUEDHTYNTFJISVTWYNAMJQUDPTQXJLAHMWMFCSVFDJREGGCLBBGLHKZYYLSKZYBHVCHAWXPKRRNGNDLRAIPIRUAWWVTDOWMIQHPEB");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("OTLFFETEEVPMMOBSCWKKLBLIUOMYYOQZ");
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
    msg.setTimeStamp(0.6387066693054669);
    msg.setSource(7202U);
    msg.setSourceEntity(110U);
    msg.setDestination(39436U);
    msg.setDestinationEntity(14U);
    msg.command = 159U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WPXOGWQAGWYIAPWAVFE");
    tmp_msg_0.description.assign("OCHTNVMLYTLDSQBPABIAWGJPYXOWSTTDEDOBCKIEEDBPBTKHLVIVUESASIXBGHIZUGZIRVUJVAVQZFDHQPHYDFRWGEJPFFNKEOGVABCHZYJFMJMFZPZFSUNCIXOTNLHHWWOMFKYRYIBJDVAQKMTMETNGUUCASKGVWRBOLHFRZGKLTRQIJWDUWUCZZMGEMMRYWOXSERQRKQIFSPSYWAHYUKTXEKCNLYPXONXXLCCZAVSDMLDUPNPXANNJXQ");
    tmp_msg_0.vnamespace.assign("KDYAZVATOXSGYPUXNYSFHCCMGBHQXEJFRQTKIEAYQJLZZADSCHPMIADNKZHHIDQALHWTGFAOEROOJZMPSLFNHGDTJUMSMHVACPBSSJBBAVYNRBQWKFKQBLWMUDQFALJYITBBCGFUS");
    tmp_msg_0.start_man_id.assign("HSBGFCUTVPNIYCPHJHEKAEINZXXKAWNTWOSHYGTTXZJOCNCNJHCQTLWRBIKJDSAWEAKTBWPFVQVZQJKEEBBGDLJAMMOCSFLKNVXWQQGKMFBMEYPTHUGMUNUYJEHZTFLNRIFBBMELRILPRMIKVXOVEEPHBZFZOWSZDIORLGTGSDPFMYPUQMWDJLAIXDPMQJJXSXQAOYZARIDVBQVTCRWYYURVQYSVNICFZU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QAINHJPTISIDWPBACYFHQMRFVPRDBVYQOBOWEVMCYGIJSRZLJTRCQWBJHOHLCUBDHPNULMGPASKMCOJJGRAGZGWMPONPLTEKNVORZAGEUVQNWAXQERYXDVNXEITEZQKMEYHUPEIYHUVRSDVNWTTXJITZHTDQSWJDLS");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredHeading tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.9165852578895194;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 63514U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JMUOAFCDMQFKWIHHGJATRN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AcousticRangeReply tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.address = 133U;
    tmp_tmp_tmp_msg_0_0_1.status = 224U;
    tmp_tmp_tmp_msg_0_0_1.range = 0.593506987922414;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Depth tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19015981954045047;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6762232713947594);
    msg.setSource(36759U);
    msg.setSourceEntity(21U);
    msg.setDestination(24484U);
    msg.setDestinationEntity(76U);
    msg.command = 95U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FKKGEPLAJTFKDPSTQXFFWJGBBMDRYMBUCTLMJSAKWXXYUOHYAOIGBNSGIPXEUMNXKRFNHMCVXRETDXBJWWHMQRBEOQSPYPCWTVASCHGCEZKDLVOIETCQWJYFYUQSBYADLHJ");
    tmp_msg_0.description.assign("VCDNVHFLAHGYBWKKMBVSFAMNXRKQJZRXJSYJQLZMMQBHTKTAORIEWAXXUBVICGAVOGPMCSUYFCEBNWWCBUSCRTWGCNYWHIEWJJZYFSLCKZOXDOIGBFDCJNZY");
    tmp_msg_0.vnamespace.assign("WFVELDTQDGUOODSWPHFYIEIOUOMEXBBTIMSWNWYRXASMRWDATHB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XVJZHRZALYHBUVQXMXYIZHWJKODUQCHZIROGKWPJUCWDFLSMLNFOEUMTVTVJLAGSUMGLQIBDNNRBLDVFTXGTZJWIWECYNADBOJRZAOZZSHRQPFGDMWRKKNCYKFKYIWHUYQYBUHMESCPRHULVTHL");
    tmp_tmp_msg_0_0.value.assign("NXOJXRDHIQRVYVEJBRBMYSXLUGVEILRNCPPLOXEIEWKEFUUGSJVNASLZIUWBQZTMJOIPPVTPWOBZLAGUMDRWSNSSYLBVLLNTCPSYKQUBMJBFCUIRGHAGZBFEALHFFYQMSJGEHKZXYCBMTDGCAVWARTRLQWWGPINPDQHXXZUWQEKJ");
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.access = 218U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DYXGNSACNJOGDMQBMZKGEHSRTTSCBHMTBIMIPVTMRLYUOCAJHRDXYLYZVFUYIQVOJKJUXZOKAFMKWLZXVIPUHLPXBABVUGAQYVTNHCUJOOBFFSRQSHUGZQMANSCT");
    IMC::TrajectoryPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.3609273380353467;
    tmp_tmp_msg_0_1.y = 0.8749559006988459;
    tmp_tmp_msg_0_1.z = 0.7195073183493442;
    tmp_tmp_msg_0_1.t = 0.32293884953464524;
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
    msg.setTimeStamp(0.019957176978496638);
    msg.setSource(59075U);
    msg.setSourceEntity(62U);
    msg.setDestination(9414U);
    msg.setDestinationEntity(233U);
    msg.command = 222U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LNAUESLNTLGGJMABDBCUJNUNAKFMKUSWFDRQISYAEVWVMPBZDDQQCHIPZQDFHYXJMJVWCYRWIHAUWELIBLEFHATAPYZKXMSMGXFXJTFJUKUSEWUZQBYWRHLDGERTRAQGFZNQGPXHRVRZSMQNCVVOXGSMHQLNESTPOVLYVCGFPWEBBTOMZJLZVDOORFXQCX");
    tmp_msg_0.description.assign("XZJJNKFHHOIOGPSILRYAKXPWHQSSRABCWNVYZEXKCYTARTOBBXUTAABNDOAOZKIEUZSYSGYJRWLCQNMQCQSRWCLKVXFAMDJHCUQNQKDTBLELGZJLKOERFAMVLGH");
    tmp_msg_0.vnamespace.assign("LEPEWFPCHYKMAAQIVOLODADAQBTPQVBBRKVSSRMXOCWTMVWIJSQWXUMJMCFYROJCUDYHPFQGBPPTFDDWKJYVWGVTUGPRBNHPMUFEERNISFKOGZQIXZYDTCGQOJXEIHSZSZAZYLWMGHYPROUDGCYAKUKNLATASITVGFFWZKZXREAZNFUOSYXDYCJNKCLHVAGITINHUCJFEHCEJRKHBUONLULIXQVMRPQVTLLSGWBBE");
    tmp_msg_0.start_man_id.assign("YARWCROZJHOOQSGHLEBMMQNDIWZUUSSTKTRMRXMPTKCVRPJDIFKLCJAANVUTKDXXWKSXSGTPEFOHCWKIGIXJWETEOIVKMIFEAPSUKLZGEHBDWULRXCBHUGFJERYBXTLFZNEIQFCCTNOZDYAZOTVAVONCHJCYQDSZIQAK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FKRZZAVUPQWYTQDOGEKZAZKETEMUWTYVXSITSGPUKWBJQCSLI");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CSQBMCQXZLYEXICMZMELNOUKLWREWNEECYOVNUFCVNGRDQDNVZFPRDIFKAEPURYHXAJUJLDSLUSGBCPMKATBTTRDFHGBGJWJVCYKOLMNQPPDYBVDJHSGTEJWOBHVSKH");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::GpsFix tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.validity = 52854U;
    tmp_tmp_tmp_msg_0_0_1.type = 38U;
    tmp_tmp_tmp_msg_0_0_1.utc_year = 36916U;
    tmp_tmp_tmp_msg_0_0_1.utc_month = 180U;
    tmp_tmp_tmp_msg_0_0_1.utc_day = 202U;
    tmp_tmp_tmp_msg_0_0_1.utc_time = 0.9604083110781685;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.5507861634044934;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.7658567822188607;
    tmp_tmp_tmp_msg_0_0_1.height = 0.88292398387381;
    tmp_tmp_tmp_msg_0_0_1.satellites = 234U;
    tmp_tmp_tmp_msg_0_0_1.cog = 0.6963865208252573;
    tmp_tmp_tmp_msg_0_0_1.sog = 0.21907142939671365;
    tmp_tmp_tmp_msg_0_0_1.hdop = 0.06383136030497283;
    tmp_tmp_tmp_msg_0_0_1.vdop = 0.4251021042732098;
    tmp_tmp_tmp_msg_0_0_1.hacc = 0.7636638751519106;
    tmp_tmp_tmp_msg_0_0_1.vacc = 0.4478938814384996;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::OperationalLimits tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.mask = 119U;
    tmp_tmp_msg_0_1.max_depth = 0.8066911534097891;
    tmp_tmp_msg_0_1.min_altitude = 0.6828952055344736;
    tmp_tmp_msg_0_1.max_altitude = 0.8681098843988542;
    tmp_tmp_msg_0_1.min_speed = 0.5125789376239928;
    tmp_tmp_msg_0_1.max_speed = 0.66774579109217;
    tmp_tmp_msg_0_1.max_vrate = 0.9576812447108685;
    tmp_tmp_msg_0_1.lat = 0.4359186012701103;
    tmp_tmp_msg_0_1.lon = 0.5273978906315151;
    tmp_tmp_msg_0_1.orientation = 0.6610639765670988;
    tmp_tmp_msg_0_1.width = 0.8548761632200542;
    tmp_tmp_msg_0_1.length = 0.5373769984971367;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TrexObservation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeline.assign("ZXZSFWKUECNEYZRFXQLDUVPRUTNHZHRJIMFOWSWNCGMATARJBQHDNQLZPOYCPIJZKRUKSKVLTGMIXWWGUGMJKYVTLHOQYAXXXPRHZOGJDUGYIQFTQACPLEOAHSCJWCNLFYMBMTGEAJURIYQCCFOSBLMNCXQSIFACIFNNRMSAUHKBZKPKBV");
    tmp_tmp_msg_0_2.predicate.assign("AOSWXGNVEIHMUAWIWQPROUZITONVWARRRQHXHHLXYDMOFGGULLVAEDSMWIPJEABEIPQVMFLBNQMHEHPAQGKZVKLTFSMGWIJRQWHJDYMXEJYDOYNFBELYXXZSKKEQWORJGTXRHLTUVLU");
    tmp_tmp_msg_0_2.attributes.assign("OHWZQKJDUUPADYIHHEAODGKZLLOUDDSBTMCSEGMWFFHFXQUFQRDXHVACGLODTYAIBHSLJNLYYDTEAMRKJGVVBPZAJNUHFGRQTKLCVJPDNEBF");
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
    msg.setTimeStamp(0.20712502426202872);
    msg.setSource(2627U);
    msg.setSourceEntity(241U);
    msg.setDestination(54034U);
    msg.setDestinationEntity(74U);
    msg.state = 15U;
    msg.plan_id.assign("HDTWYKOFJDHRJTONLZENAUWDVBAHNZFKDRKWNMMZMRCQGASPLDNPQHTWQIKIJFZRXUYNCUMAQSCHVJPGZNECXBZZVMJEGYBBIBKVQG");
    msg.comm_level = 106U;

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
    msg.setTimeStamp(0.34238155495268197);
    msg.setSource(11803U);
    msg.setSourceEntity(154U);
    msg.setDestination(23208U);
    msg.setDestinationEntity(112U);
    msg.state = 83U;
    msg.plan_id.assign("GSYRDLKNEFMTACSEBBXYEGXHDYCUWAJVSCVKKVTLYLINTVFOASGODTCQQGBIEVKQZKZXURULNFDHRFCYTRJFNQLSDVGIH");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.4200944454154414);
    msg.setSource(35818U);
    msg.setSourceEntity(157U);
    msg.setDestination(48843U);
    msg.setDestinationEntity(25U);
    msg.state = 253U;
    msg.plan_id.assign("IIXXXSNSWHSIAHYKYCBVYNJBFHPVAFGWLVZHCNDEUJKTXDLZRZBUKUUTIXWORAUIQDVOOIUAHEARHEYHQECRPLZOSYYPZZQVJJMHDQWYGTMOCBLGVTMWXZEPLKBSKCRNPIFVPA");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.23757039679122338);
    msg.setSource(41597U);
    msg.setSourceEntity(17U);
    msg.setDestination(10446U);
    msg.setDestinationEntity(120U);
    msg.type = 169U;
    msg.op = 176U;
    msg.request_id = 21840U;
    msg.plan_id.assign("CODHVXJCSHFXOEQRXYVUASADMXBENENEGZFMHMOOYGCPJVGAWTWRLEYPQFAKSERHYBXCNHWGJPKTYFQAQLXVKXMKZAFUGPRLADNATPROPCSJRIZLOULNBIJZLUIUUBMJGGZRJNELVBKGXMBYXVNPWRNBLHLJDDTZGLHVEZYPRQGBTWFVCSVHFPDSXIWEUDHBPZVIIKWYKKIQTSWKOCQMEOMBNAIJSMDYWKDQSDJ");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 3585262775U;
    tmp_msg_0.lat = 0.7773604694604197;
    tmp_msg_0.lon = 0.827204319941402;
    tmp_msg_0.height_ell = 0.9801204913080261;
    tmp_msg_0.height_sea = 0.6649557841147754;
    tmp_msg_0.hacc = 0.5178918755544841;
    tmp_msg_0.vacc = 0.11572315977504488;
    tmp_msg_0.vel_n = 0.7978471242950866;
    tmp_msg_0.vel_e = 0.4048065945665761;
    tmp_msg_0.vel_d = 0.31636265836006205;
    tmp_msg_0.speed = 0.3111088784625118;
    tmp_msg_0.gspeed = 0.4865938126534888;
    tmp_msg_0.heading = 0.5408930105891179;
    tmp_msg_0.sacc = 0.33573561963107934;
    tmp_msg_0.cacc = 0.10472554715219295;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OIWQLMJRBRUVHVZCBBMPIAUDPRBSEQAZWUDGHHWIZXODSREIXCGXSINHUIGZMFDULQBXX");

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
    msg.setTimeStamp(0.5165201893356292);
    msg.setSource(4307U);
    msg.setSourceEntity(111U);
    msg.setDestination(14020U);
    msg.setDestinationEntity(139U);
    msg.type = 135U;
    msg.op = 128U;
    msg.request_id = 42689U;
    msg.plan_id.assign("YPYCVLBDTQBEXPLGILTOEIDHBFAUDSNTIYMIIYEIYUNSFHRVKATJGLPYPQILXRNDRBPWIWHMGOOGBAZMCEOPHESWSFQJHWHGCWWKVXADWKSVDOEHRKKPTUMEJTOFJXJXRTAMUFTXFDOKSJEQVENJVLNTQHAJEYCQZUCFZAVCSMYMXIJXFDRJKGADPLMDBZFCLGVNWYZASQZXCURGXZAKHUCYOB");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -15970;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RQZQQPMRPGJECV");

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
    msg.setTimeStamp(0.2510513596638162);
    msg.setSource(15034U);
    msg.setSourceEntity(196U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(167U);
    msg.type = 60U;
    msg.op = 133U;
    msg.request_id = 17423U;
    msg.plan_id.assign("WXYWUBCXLQNISTQFWHUJAHWXCLQEDAYZFHOGEGZDMWNNZQDYSZBKNGUPFWFVATOPCVGDJGOTJOXYURTOYCEINRLVOUXNEOVOMPDIVQAPIRLDMCTFKEVYLFISYPZZKTFRQROIRYBGKLQJZJYAHKULHWIFSJAXTUHNKGCMMWBDZISEDISNLHCVXJPXBGDMREQTAMVQQPFCBBUAOKRYHMDHUHBZTMBGIWNJWZVFARARJPXSXKTSSEUCVNPSKJ");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JGTKBVVOBRPIIFDBRZKAICSUOSBYHNCPHDBVNEKZPTPDXGINOKQGLLGNAFXLGMSYCXKPKSFMDVWCRQXENJPDZJUWRMTVSVLMXRZKOUFFOLIIMLSWMWTLENEJGUUIFSFQHQEMYIQOKDCBYELUWTPTWKHHCHGNZUHOSZATNAHRQXYJTJCCRMJHDQOEY");

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
    msg.setTimeStamp(0.9547142661714608);
    msg.setSource(64524U);
    msg.setSourceEntity(72U);
    msg.setDestination(47863U);
    msg.setDestinationEntity(52U);
    msg.plan_count = 60858U;
    msg.plan_size = 3872475966U;
    msg.change_time = 0.8139922345816715;
    msg.change_sid = 1664U;
    msg.change_sname.assign("PSEDFELBNURPVHOVZJUPUWSSCKDEWJBYBZKYRNMUGFZNDVABWRXCLPUOFMKLSYBMIRYLHXETQTYUIFMWLLFQBANSQFGTRXWMUOZMAZELKGQABLXJIZVHXOMTDUCUOHECVVPGYDFWOJDKZYJKXGDZXSFDLYEEFRCRNTWSKCOCQRGXBJCOY");
    const char tmp_msg_0[] = {35, 30, -16, 13, -20, 87, 107, -12, 105, -121, 43, 119, 66, -105, 50, -73, 111, -31, 61, -67, 8, 10, -5, -111, -9, 0, -64, 87, -20, -118, -46, -63, 98, -4, 48, -27, -7, -97, -128, 19, -79, 4, -69, 106, 53, 84, 90, 101, -30, 16, 90, -87, 123, -18, 108, 27, 42, 107, 77, -25, -45, -39, -44, -1, -97, -122, -25, 71, -19, 111, -67, 125, 87, -65, 42, 48, 97, 16, -97, -2, -90, -32, -109, -120, -98, -17, 113, -94, -77, 42, -64, 74, -89, -126, -58, -108, -10, 76, 32, 110, 91, 16, -125, -117, -121, -60, 120, -17, -30, -16, 124, 44, 77, 125, 22, -24, 113, -76, -128, -16, -38, -71, 124, -73, 24, 28, -85, -60, 101, 114, 57, 19, -50, -64, -30, -115, -125, 71, 114, -3, -78, 68, -95, 84, 112, -70, -38, -111, -30, -16, -65, -109, 10, -39, -106, -34};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VBVZGATDDSNISMJSXOOEJXBSLYLXJZLRAAIUCOH");
    tmp_msg_1.plan_size = 35103U;
    tmp_msg_1.change_time = 0.1510027063632301;
    tmp_msg_1.change_sid = 60952U;
    tmp_msg_1.change_sname.assign("IURMTJADDNTEIZOQKZPROULGQFYLYDBAHBRJHCAKNPVJKJPGEGBXZESZPISFHTFVQDFWGRZWNMYIWIPLCKSXVXKTTGPPJDJDUIEFBURGWSKXHNZHNRXJEWLQXRJLRGGQCLFAVSIULNIKT");
    const char tmp_tmp_msg_1_0[] = {4, 49, 5, 20, -1, -125, 74, -35, -118, -84, 40, -28, -27, -55, -59, 88, 30, -89, 57, 88, -51, -120, -38, -27, 126, -57, -53, -23, -103, -77, 35, -27, -52, -106, 47, 47, -20, -2, 64, 78, -83, -14, 14, -2, 25, 47, -38, -50, -18, 80, -38, -97, -33, 41, 10, -82, 13, -113, -3, 112, -27, -56, 99, 10, 121, 80, -111, 88, -10, 2, 111, 3, 12, -74, 19, 1, 38, 106, -86, -57, -110, -126, 83, 83, 42, -31, -20, 66, -6, 35, -59, -12, -93, 84, -26, -121, 86, -67, 107, 98, -33, 39, 63, -55, -109, 8, -21, 91, -81, 116, -86, -54, 35, -43, -107, 122, 15, 113, 14, 78, -60, -38, -37, 118, -70, 31, -8, 76, -105, -68, 60, 11, -82, 14, 88, 43, 97, -112, 66, -127, 114, 94, 93, -78, -37, 52, 115, -106, 122, -52, 122, -85, -66, 5, -38, 33, -87, -28, -68, 107, -79, 22, -83, -3, -71, 102, -107, -101, -2, -60, -52, -83, -36, -75, 57, 13, 28, 56, 31, -114, -124, -44, 53, -96, 47, 82, 6, 4};
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
    msg.setTimeStamp(0.18419063683192416);
    msg.setSource(13272U);
    msg.setSourceEntity(115U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(223U);
    msg.plan_count = 39986U;
    msg.plan_size = 1918378462U;
    msg.change_time = 0.5965419981784963;
    msg.change_sid = 128U;
    msg.change_sname.assign("XOTDTQGRSKDGEGXILDFLPZJJPRYCNFBNWRXMTMULFPRWEKHGQTAGHNMYYJXRIUVOADEJLWDOXZKGQBYAYYIHRAQKZPRHEUMMBDUCHVMUBPPSCQGNJZJHLCVFVCZOSTVXDTKAWNWMKUCULNVHPGXJWIXWQSEXWVAEDLZVPZJUWKSAZAHMHBQQIPAOFDTEAF");
    const char tmp_msg_0[] = {-18, 28, -117, 48, -46, 30, 27, -62, 30, -56, 28, 27, 29, 66, -118, 30, -89, -75, 121, 4, 49, -75, 86, 55, -54, 18, -47, 48, -51, -16, 67, -66, 108, -87, -86, -29, 115, 110, 18, 35, -27, -46, 116, 84, 31, 8, -114, 82, -3, 96, -26, -55, 3, -128, -19, 40, 37, -65, 112, -105, -108, -74, 29, 59, 80, -25, -51, -95, -29, 84, 45, 110, 26, 118, -121, -82, 7, -22, -117, -122, -115, -36, 36, -86, -40, -22, -84, 121, -113, 111, 58, 83, -79, -60, 122, 8, -89, 12, 47, 41, -107, -53, -22, 13, -100, 16, -110, 69, -96, -44, 77, -19, 29, -111, -86, 2, -82, -118, 96, 109, 28, 10, -123, -87, -30, 29, 71, -64, -114, 43, 47, 6, 89, 112, -54, -96, -74, -31, -81, 78, 112, -59, -19, -38, -88, 108, 124, -13, 61, 81, 124, 1, 87, -125, 113, -113, 22, 26, -127, 34, 22, -92, -24, 4, -35, 115, 20, 33, -55, -51, 30, 103, 119, 120, 57, 126, 71, 113, -120, 117, 101, -68, 29, -52, 83, 85, 97, 64};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MIHIHWSSFASBQ");
    tmp_msg_1.plan_size = 41171U;
    tmp_msg_1.change_time = 0.5536610562846699;
    tmp_msg_1.change_sid = 2959U;
    tmp_msg_1.change_sname.assign("GCYNZTBBBGMOAOWTXLQSDAHHRPYXTFZQCYZHRWVHUZWDNIBRCVKJHETQFIDUFDJHTOAVDDWZULGTOFTHAMZCGBLKDDRKSSQKEVPYTLK");
    const char tmp_tmp_msg_1_0[] = {-51, -52, -76, -119, 65, -40, -82, -74, 53, 32, -76, -90, -39, 102, 118, -52, -43, -96, -28, -15, -120, -117, -106, 13, -12, 69, -114, -77, 103, -81, -41, -80, -47, -102, 10, -10, -105, -121, 120, -62, -103, -117, -97, -95, 24, -8, 46, -81, 30, 80, 95, -48, -31, 29, -108, -103, 97, 98, 76, -38, 47, -39, -122, 17, -1, 56, -115, 63, 51, 84, 59, 105, -48, -80, 15, -100, 110, -67, -33, 88, -40, -103, 1, -101, -102, 72, 98, -75, 7, 10, 93, 98, 122, -20, -14, 9, -116, -74, 105, -43, -87, -128, 69, -123, -49, 122, -70, 110, 31, -1, 57, 32, 93, -12, 18, -61, -113, 90, -99, 84, -108, 9, 48, -43, -27, 22, 15, -28, 47, 52, 104, 110, -111, 73, -115, 85, 23, 49, 79, 40, 2, 16, 59, -83, 95, 11, 90, -118, -34, -32, 80, -101, -76, 122, -90, -58, -35, 90, -77, -83, 107, 122, -127, 18, 9, -2, 1, 51, -43, 107, -4, 112, -2, 92, 106, 76, 41, 79, -10, 112, -59, -115, -115, 53, -56, -83, -31, 70, -78, 113, 25, -118, 15, -2, 23, -78, 6, -30, 90, 4, 103, 102, -122, 126, -48, -51, -55, -114, 25, -38, 20, 94, 61, 82, 0, 84, -48, 37, 28, -21, -84, -115, -35, -108, 38, 28, -46, -126, -118, 77, 60, -118, -97, 48, -128, 109, -9, 61, 88, -104, 95, 61, 84};
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
    msg.setTimeStamp(0.24378699652397995);
    msg.setSource(21619U);
    msg.setSourceEntity(65U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(67U);
    msg.plan_count = 16431U;
    msg.plan_size = 692952698U;
    msg.change_time = 0.06414463130026926;
    msg.change_sid = 26465U;
    msg.change_sname.assign("KLAMCMUPDFBQWVAPFOMDQZJRTFZMIFXQANVILSYGWBACWEFNTICAJZCTGGZJRNFTRQIHTCLIGNROBWWQVKYULLFKUSGAZGYIRMJENYBGMNVXLTXJXCCDJBOSZVHDIGXPAUZPZOCBDRWTXJKOUKKYQVBDXHKQHSUSGXHJPVHJXRIPYKCATQYEWLYRLHXAMHBDMSKRDEEEZNDBSRSVFNWHUQUIIUEOOHPOSVYFAENYBPOULQGZWMTNFEVWEP");
    const char tmp_msg_0[] = {-58, 28, 0, -11, -20, -87, 31, 87, 5, -42, 30, -20, -16, 25, -26, 47, -27, -113, 11, -65, -39, 74, 120, -94, -7, -83, -27, -73, 36, -39, 7, -30, 22, 54, 82, 1, 26, 73, -79, 74, -26, 99, -7, -45, 119, -45, 72, 40, 20, -123, -126, -35, -54, -7, -101, -68, -39, 14, -52, 94, 52, 61, -55, 26, 0, 111, 20, 95, -92, -92, 5, 68, 45, -90, -104, 107, 25, -33, 113, 55, 15, 34, -38, 11, -5, 102, 23, -39, -6, -114, -114, -60, 88, -119, 119, -50, 35, 91, -115, 0, -51, 124, -36, -114, 54, 53, 101, 80, 31, -65, -106, 33, -79, -112, 59, -112, 21, 108, 5, -38, -13, -97, 27, -9, -87, -56, -114, -104, -95, 44, -111, 2, 54, 118, -66, -54, -64, 115, 34, -62, -38, 88, -114, 61, -31, 116, -64, -117, -71, 9, 78, -72, 22, -73, -88, 44, -48, -97, 101, -23, -74, -10, -117, -60, -48, 13, 115, 13, 11, 93, -118, 15, 42, 25, -33, 96, -5, 80, 12, -41, 14, 33, -31, 115, 108, 104, -82, -13, -128, -115, 66, 87, -44, -108, 11, -23, -100, 108, -87, -94, 81, -40, -112, -6};
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
    msg.setTimeStamp(0.2600490038488914);
    msg.setSource(35734U);
    msg.setSourceEntity(192U);
    msg.setDestination(43125U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("LNILQRRQUDOPNPJQEQWINQIHAOJEAHVBXMEITFGDOBYEPKGBZNORWQCXBJKLYGWVXZYVPJTMFAZRWXBHKFSUACPAPUZBKSGXDGIOBMCOGJWWTXPLWCHNAPGNDZJUOICLTEZHTSQFBYWMHVFVJTBAEYQNKXCRP");
    msg.plan_size = 18459U;
    msg.change_time = 0.3126233389189228;
    msg.change_sid = 38128U;
    msg.change_sname.assign("MLVNQNMFTNYVURTCERJNYBGXZCHAWCCQAPIQSEOUKMAZDJHTWJERFKFPWLIFOVWPLLPYCOEDTZVVXELKZSGAPIPZSVIOQJYKKFIGURCEYJDXAUAJNGSOHFDEYOFVYPBWBTGUNSLHBECRABDBBMMFNYQIZAWYVDWDIPSKOTDUSRGRIXXBMWCXPLIPKHULZJJGLVXRROBWTHZJWJXGCKFVGEFHUQKZMTYNMDHMQIQGDKX");
    const char tmp_msg_0[] = {-5, 7, -105, 47, 26, 22, 14, 22, -56, 15, -64, 26, 21, -45, 36, -108, -5, 33, 18, -47, -26, -14, -104, 71, -91, -118, -42, 9, 55, 56, 116, 93, 59, -73, 80, 66, -125, -88, 126, 4, -35, -114, -63, 7, 4, 19, -59, 105, -1, 123, 43, -127, -75, 28, 72, 120, 115, 34, 55, -96, -54, -113, -106, 75, -30, 76, -44, 126, -33, -37, 96, -34, 32, 13, -45, 51, 8, -47, -95, -23, -40, 86, 82, -66, 47, 90, -4, 29, 65, -21, 3, 18};
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
    msg.setTimeStamp(0.1738302449521748);
    msg.setSource(16049U);
    msg.setSourceEntity(240U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("TQKSMFKGYIYNSNBNVHAAEMLXJFFQGXD");
    msg.plan_size = 29045U;
    msg.change_time = 0.32258227146327323;
    msg.change_sid = 24944U;
    msg.change_sname.assign("NCBKXZPDLSMEZIIJVXWNQUCRDQDJNPROHCQNBVODFVMYBTNJODLZFIYRDYUBRDHRQSYWWJDOJWABARFFTOHLOUKGPHPHXTWLFFNCJUCGFVNEAFELWRYCSFEZUMGRJCIAWGQCENUOUQS");
    const char tmp_msg_0[] = {-36, 6, -27, -85, -73, -37, 122, -54, 36, 5, -2, 73, -81, -89, -47, -75, -85, 100, 21, -118, 20, 72, -115, 47, 126, 51, 28, 66, 93, -63, 50, -37, -83, -32, 81, -92, -101, -21, 126, -5, 7, -64, -116, -62, -100, 110, -97, 58, -117, 109, 120, -95, 45, -35, 89, 45, 78, 46, 106, -37, 21, 52, -40, 18, 53, -72, -52, -47, 124, 26, 22, 48, 64, -86, -53, -74, 34, -41, -19, 87, -109, -52, -73, 25, 117, -68, 3, -37, -126, -92, 12, 102, -49, -10, 54, -34, 26, 80, 88, -52, -93, -43, 14, 0, 13, -60, -42, -53, 98, 117, 117, -60, 8, 125, 115, -115, -26, -35, 94, -64, -89, -12, 32, -76, -47, -6, 108, -108, -15, -77, 81, 90, 43};
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
    msg.setTimeStamp(0.8957354029056066);
    msg.setSource(12613U);
    msg.setSourceEntity(198U);
    msg.setDestination(50418U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("ABQXNTDUKEXQVMUSEISATNNGBFUTOIUZYJRWOEYGIMAZORJZCGGQSROMIPCFJDXNUUHPNZAULBTQSLOYAMPKEKKLLVMHXCBAWEJCRMVFOXXVYWEAJWTGBBYEQQYQRJLTKOPWCYBFSKIKIYHSXNZF");
    msg.plan_size = 52640U;
    msg.change_time = 0.4756232386748577;
    msg.change_sid = 63361U;
    msg.change_sname.assign("ECXLZLYUZPHXHPNBCRLHTNZKWODVUOIMXKIREDVFLXQQVSYYFMMZZSGFCUJMGPADRFKRRRTPIANSXTHWTGFVNPSIAMKSBUQIPZNKBOWYSKDCWPWCEGBUXVDREVUQTNWHGZUEEDMFWIUBHNBIFPXAULTDVYBOO");
    const char tmp_msg_0[] = {99, -95, 72, 91, -123, 43, 64, 106, -13, -63, 92, -28, -99, -121, -37, -104, 7, 108, -127, 33, 14, -69, 58, 26, -47, -84, 57, 100, -126, 103, -48, 0, -105, 120, -25, -97, -47, -92, 43, 29, -103, -94, -4, 97, 66, -99, 39, -37, -73, -128, -128, -49, 119, 69, -55, 63, -93, -10, -117, 115, -83, -88, 44, -69, 36, -88, 60, 82, -100, -54, 1, 32, 12, 121, -17, 75, 84, -36, 39, 33, 102, -15, 70, 117, 116, 58, 62, -76, -93, 82, 77, 122, 50, -98, -11, -13, 71, -100, -56, -38, 42, 101, -19, -88, 11, 110, 44, -17, -84, -68, 23, -15, 56, 72, 22, -109, -54, 71, 115, -11, 15, 16, -56, -72, -49, -26, -60, -31, 65, -84, -65, 107, 69, -111, -49, 40, -76, -42, -41, 122, -30, -75, 124, 30, 120, 51, -27, 20, 50, 101, 27, -36, -75, 53, 111, 27, -101, 126, -68, -85, -46, -24, 37, -52, -69, 93, 38, -37, -62, 38, 125, -41, -10, 43, 84, 16, 73, 105, 95, -27, -120, 115, 19, 59, -121, 53, 48, 83, 22, -73, 40, 84, 48, -79, -120, -13, 54, 90, -41, -80, -101, -127, 20, -35, -44, 72, -33, 20, -124, 39, 1, -21};
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
    msg.setTimeStamp(0.9336586992660728);
    msg.setSource(39777U);
    msg.setSourceEntity(220U);
    msg.setDestination(27341U);
    msg.setDestinationEntity(3U);
    msg.type = 194U;
    msg.op = 220U;
    msg.request_id = 48273U;
    msg.plan_id.assign("YMVSVIDRBKOPULRCLCOXDZQWTCGPPKTJTIUGSEXDXMSMAQWEEFBQNFQJAKPSSMSJHFKTDRVB");
    msg.flags = 42762U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 241U;
    tmp_msg_0.value = 51U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BDJCPRSNGILLEWJWVHYOCYQFBEEAKLCKTNRPGYROOSTQTCBZZIJJHQTZVFMVFGZVOFOMHRMXXXUTNXHRLBCAFTKVDJTBTMUUKIJEIDWXIUYDKUHILMNDSMVYDGEWQFAICAQUOHRSLVIBBZNSPSQVUYQAZXXRFPMKZTGZIKGNBGXQQXPBGHALEENHWXHPYPN");

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
    msg.setTimeStamp(0.02964930470920535);
    msg.setSource(32660U);
    msg.setSourceEntity(2U);
    msg.setDestination(34002U);
    msg.setDestinationEntity(102U);
    msg.type = 16U;
    msg.op = 203U;
    msg.request_id = 40132U;
    msg.plan_id.assign("XBECPQELDUDFBAKSHFVJKTNZYFWGAJIPYOO");
    msg.flags = 26463U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 195U;
    tmp_msg_0.request_id = 59202U;
    tmp_msg_0.command = 243U;
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9377372993087302;
    tmp_tmp_msg_0_0.lon = 0.24657519989032006;
    tmp_tmp_msg_0_0.z = 0.38908483068251976;
    tmp_tmp_msg_0_0.z_units = 133U;
    tmp_tmp_msg_0_0.speed = 0.7767025898486517;
    tmp_tmp_msg_0_0.speed_units = 156U;
    tmp_tmp_msg_0_0.start_time = 0.03410627520160292;
    tmp_tmp_msg_0_0.custom.assign("ROZYNSNBRWRENVAAZXRLIOBBQKERFABJKWCUUSRTTBVKNSHHJLZXADDZEMKJJINISVNAVLFQPVRVKGOAIRIPXPWLLSKDCYEZPUCWHCPKUBBPAZKXTFQSCPJYTGU");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 2402U;
    tmp_msg_0.info.assign("VHGYAKKSKZCFGMOXWZQOEPNSJQWJKFZHAHPAQUJEVNVLEXTYAJKEPMDTXTSOSYSZNTKLDOSPDBMGFLTMGVLGVRKZJUOLLDXJFDBRREFUXQVHEUQOFTCZIOWMWVOXNNWPBLADWYBBEEUYXPQISSHUQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SXDGMHYPACXUUPNJKTYKWJONVLAACEFLWWOMJGJQDWOHSSUSBWBOMZZPMDKSYPCMQODKFZUGVQJFEZLDUKJTNTROXYSTFQRVTZICZSGWIPFBLEMJFAQBQRCWEJBLGHIXWOVIGNPXCPRULAFUGRSETZLYVUQNCRAQIENKAMZREIRKOHDDCQHLGBFBVOEAXBGUJCXAIPHNTMSRBWSVYXIYTVEFXEJYWIKVMND");

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
    msg.setTimeStamp(0.1188459667788142);
    msg.setSource(1524U);
    msg.setSourceEntity(166U);
    msg.setDestination(45603U);
    msg.setDestinationEntity(228U);
    msg.type = 68U;
    msg.op = 166U;
    msg.request_id = 24895U;
    msg.plan_id.assign("QQPGKQFRTBQLZNMAIFRZYAUUKCATHXJHKFSVVECPLRBXDUWEBJFOZADGBXZAOYXJGECHRWSQAOHITDERBBNIAXFGGSZUWVEZRHKCXQYQUL");
    msg.flags = 12652U;
    IMC::EntityControl tmp_msg_0;
    tmp_msg_0.op = 174U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LGYKOAFKZZXECSSHXJVNTRWSVWRJPPMGPLLHJZETGHGPIQXILYNQDRBVDNYWOCMYPHAAUSXQNFRRMIGZMZOZNAOUNIJRFVEDKCEWGKXRAOQMGETVGDKVWBJWVTMDNHTBMFZSCLRVTDJUMOPWXHHKHIUIBUPYQPNAWHWBCUJJCBLYSEHYOXS");

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
    msg.setTimeStamp(0.9034246439661343);
    msg.setSource(10936U);
    msg.setSourceEntity(36U);
    msg.setDestination(62696U);
    msg.setDestinationEntity(75U);
    msg.state = 12U;
    msg.plan_id.assign("PODMULCTUQBSEPJNPDHDSYDIWIERQGAJGKXOYKSODKDLFHQSBILEBCPEQBUPCVMIFJZUFOMPZUFSWSOYYGOHMYLYMMJBKVZNGWOUREPATLXHKFTYW");
    msg.plan_eta = 1251271489;
    msg.plan_progress = 0.7531561450803761;
    msg.man_id.assign("RJPHKWCCPWSRUJCLDXZEDXCEJSMGUYDCJQABULFWCRCTTMXNYLOWXNYQYDMEZVIMLIJZIXOHGZBTQBASKKZBFHHTZIRJWADTEANEVDORBGYQZLZJUVDAFSOKBNAERBFGISGUNPMPNAKMXKASHHRBRYMOVPTULCQKISNKFDPLIYYOPUYPAQWMHAKUURECHZPHJXHOEWGFIMRYTQKZDWCSGOWJFQBGGN");
    msg.man_type = 27973U;
    msg.man_eta = 987494802;
    msg.last_outcome = 47U;

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
    msg.setTimeStamp(0.5199869947704197);
    msg.setSource(64239U);
    msg.setSourceEntity(10U);
    msg.setDestination(18163U);
    msg.setDestinationEntity(77U);
    msg.state = 162U;
    msg.plan_id.assign("ILYTGEMJFKKEMAOGFQWYTPEUGFSSKZDELLONRBXGRVXQIMGJBANQWHTRCKWZVLUFPKUNSBVNZGSYKCGXYEJBWADMIERGWTHXPJLOCJSCKPHBKULAMXHADFZGWNAPCAUIOFZUIFDLSTGKCJZWYNFSQVELYRVJQSVCYUHTYVQLCJFDHMYEPIIHO");
    msg.plan_eta = -5068110;
    msg.plan_progress = 0.6707491937416568;
    msg.man_id.assign("APNKOHNICDGJAPDYBTLYSNTMOTBVCFROBSIVLWLZXZUKQMAJCGRLNXHZZXODFXCJWQHDRXWJCEIQQZUVMMFHSDGHSOGUWAVQTCYKKQIMPTNTVNZHCGOIRYKNXBNWKKDFDVRJPGZXWXXULSUCMOQJYYNLBFUTLIUYFJHGRVTEIQYBMRPSKIZYGEVPAMISCEWNJCAREEFRQXUGJWGFMFODVBLUAELHOBOBH");
    msg.man_type = 22293U;
    msg.man_eta = 1651082180;
    msg.last_outcome = 224U;

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
    msg.setTimeStamp(0.8267593677902029);
    msg.setSource(7621U);
    msg.setSourceEntity(53U);
    msg.setDestination(44406U);
    msg.setDestinationEntity(131U);
    msg.state = 101U;
    msg.plan_id.assign("FFTXKACUMARISSKAPCBRMGUBLJTWLNBSMOGRFJMCOQBKGEOAPFLHRHUHJCRGPQFNYXPENTSAJFQBDZESHCVMSJSQWLLPGUYJOZYKUTVYSZLBQIIHFJAVGRVWLKTDRESVKXAAFEWHUXOMZAZAWNQYBVXOKCYRKVUCLQDWIWPZNGEUOXTEIHYRWJQDTIHBIKPHIWEPMNTDOKBZOVOMCSDDYGRQNJYHCBFUEJY");
    msg.plan_eta = 815178689;
    msg.plan_progress = 0.22585379847727427;
    msg.man_id.assign("FMXDVYCJWQARESTYLALOJIEVGGZWUSNKHUGFAYMQUVDSWZREBVJMVQOSRBIZWLOHWXXTGXOPPMMINHOCGVPIPASRKCTTQDMTQEIBXOVJNXTUZLPQFIBNSRLYJOTERNPKLFNRLEMTPBWAHCANBWHHAHUJKMFYGCJKMJUYYCSI");
    msg.man_type = 24704U;
    msg.man_eta = -909617241;
    msg.last_outcome = 245U;

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
    msg.setTimeStamp(0.4580379850813199);
    msg.setSource(27875U);
    msg.setSourceEntity(223U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(133U);
    msg.name.assign("OSKRGMUYREZYMLZIQUOIWJSXETCCSISHFCUFALWRPKBNVGXMEHSAXXFEVABZBHVUQZVLFWYHAQDJQVGXHTDKUVHTNEKXERIOQCGJTOZBPAZKGTMKADRZSYDM");
    msg.value.assign("PJEVPAXKBYGDNISHITDQ");
    msg.type = 114U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.02785187214197915);
    msg.setSource(9922U);
    msg.setSourceEntity(223U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(140U);
    msg.name.assign("SVOOUEAVHRDHXXFVKYVXYTHNHWOJDWXDCDLCAQUXJWNKKKGZMAFFSTFRJBEURSVTQNQZJOALCBKPHJFCKDXFYJVJEYGLMMCAXIGDTONHUGPVPZLZPNZEVBLSRXHIWMQRFTCYTQEOAMOENWSXBUYRAEFLPMLWZSIOUGCWIQQGGZAHBDMYWNUDFKPYERVSSXTPPBIRBCCZ");
    msg.value.assign("MFGTZORSXNRIIZGQHXAYTIZKKJYJJFQYERSKAGRGHRIEBNNWYAAFOLFGTYFDSRIWSGESXKHBJKEUWBVXVPYMECMHKARIHJFJDHPOMLLRRZSUCMXBBBVTONJCZVPDURSHKCLVUSBAVQXNXHLQFDPYFBVHUIDCUTMNXUVDULWIOXNBDZLESQ");
    msg.type = 35U;
    msg.access = 46U;

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
    msg.setTimeStamp(0.49791412154249326);
    msg.setSource(26172U);
    msg.setSourceEntity(193U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(137U);
    msg.name.assign("NZOFSCSRRPLBZKJPMLMDXGADKNQFKBCENLYNKGXYUPRLSGDEKHVOCVLHL");
    msg.value.assign("HCQSEMPIAYDJFCOIYEYMVXEELCQNYJYVZKRLVJSMXQLKZBSWNBUAGYQFUCCQEMBQROTFLXXEGFRFHWJNMYPAXSTMVBCMFJBKCBWUQWDGZVARHITUBMTZEDKQKOHOZIVUAWKTVATOQBHGOPAXGSSIFQDKFBPCMTZOPEBFNLHHSKLDVJOZRTIIL");
    msg.type = 246U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.7688581527035184);
    msg.setSource(46217U);
    msg.setSourceEntity(29U);
    msg.setDestination(26386U);
    msg.setDestinationEntity(190U);
    msg.cmd = 22U;
    msg.op = 155U;
    msg.plan_id.assign("XJQPDTUILTSVVDBZBEQIJRBVVLHJDKM");
    msg.params.assign("IHDLBTGPEQ");

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
    msg.setTimeStamp(0.905391622139025);
    msg.setSource(21264U);
    msg.setSourceEntity(232U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(63U);
    msg.cmd = 48U;
    msg.op = 79U;
    msg.plan_id.assign("ETMJNGVNBTZQYFTLCJXYIRUBMOLPMBJRVIOWOXUAHZFDMHGMJPHCRDJHCNXHNLDDIGAVQQUGFNURHGGXASITJGZLFKLKAECSMBKKHFKBWKQYWOUOSSZPIPAWAWVREYUCVRYLFDCGENYICPRPTTNWA");
    msg.params.assign("QVVDKCJUTPGQEHDRGXZCCGIZLYYSTJJRDVKCIKHDQBUJFCYAFHZQXKAPAPFEXVIUAWAVZNDJOZIUOUFTYUMDRIJEHUCOMCLIVYBPDBQWELJIPXMSDEMPUNSQKWOECXSF");

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
    msg.setTimeStamp(0.016299876956917925);
    msg.setSource(62316U);
    msg.setSourceEntity(237U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(203U);
    msg.cmd = 176U;
    msg.op = 170U;
    msg.plan_id.assign("EVVGTZYTTOKABRCVEQQSMBJXZCFBDAABRPUTRWIAHHCLUWQHGEZFNMMHQOBRWCIMPFKPACXPVUJADOMSDHXSXUSEDEYCJATRCIQFNLREEUEHHQXOMUGZQEKFIVBPNR");
    msg.params.assign("VCIXULIOZQTJWK");

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
    msg.setTimeStamp(0.4792811013788658);
    msg.setSource(2249U);
    msg.setSourceEntity(236U);
    msg.setDestination(54088U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.16576334867672948;
    msg.lon = 0.52640349129616;
    msg.depth = 0.5163862460379083;
    msg.roll = 0.7693195020938776;
    msg.pitch = 0.003281760446149362;
    msg.yaw = 0.8293669323437737;
    msg.rcp_time = 0.782193394454706;
    msg.sid.assign("VSRVFJVQJVYPBXZUFOLHESQMPBJZLKUTCMLPNFKRBRYNYLORLHQUXBDSBZXOEZEASLUSBXEQORIGFIYWMZHNVCZCIGHZENGETGZXOXIPQSFRCKITEQJH");
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
    msg.setTimeStamp(0.07339135172870181);
    msg.setSource(29578U);
    msg.setSourceEntity(136U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.635890601555241;
    msg.lon = 0.8810561958284173;
    msg.depth = 0.5974479294945007;
    msg.roll = 0.7446812447832813;
    msg.pitch = 0.5476521099178788;
    msg.yaw = 0.3789469453387172;
    msg.rcp_time = 0.2612851272086445;
    msg.sid.assign("UQWPIWXGSKPHKSTQIRRZIWENEUWMYSKOBYMBVYKMGBZHODRBZBNVMZLIOGKOECEGTSUFFRMTPEMCZSFJAHPHHIXDEGVJYWLHRVCNWDPAGKCFXFUOBJQJ");
    msg.s_type = 223U;

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
    msg.setTimeStamp(0.5753767695661284);
    msg.setSource(26150U);
    msg.setSourceEntity(45U);
    msg.setDestination(51492U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.3579390149628423;
    msg.lon = 0.46195744659477744;
    msg.depth = 0.7100065429714846;
    msg.roll = 0.6230969489495659;
    msg.pitch = 0.45456809878438065;
    msg.yaw = 0.9905018270751931;
    msg.rcp_time = 0.08320272920777994;
    msg.sid.assign("OTXTVGQPNOJIXRWYNTJYVYIMLBAMOFKVTBOEOZIJKPKMZHQHLOUEDRWWAWCJIJDGYGSLKBQVNRCUUMRWTIYRELMQED");
    msg.s_type = 107U;

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
    msg.setTimeStamp(0.5132286061964736);
    msg.setSource(52465U);
    msg.setSourceEntity(248U);
    msg.setDestination(64912U);
    msg.setDestinationEntity(183U);
    msg.id.assign("EHYWISDATJEIBIHLGKOWVVEFNVRMSEUANJMTKZENFBWAFEJAFGQSOKSAHOGXXNTPPHDMEXJFOTHYIQXQHREKFTUIIMJ");
    msg.sensor_class.assign("LRGVWDMOZLLNZHOBZVHMRXKCNBLYKDWJCASIZJOTKGQWOPNQLIEDLISCCPMTPSNWKVIHUQXXVETJHTUWFBUTQRIYCDVCDQRPXDIFSKILXAGTHUSFRUHZRABKEYITAAMJXOAZJSLYCYIZNVTRHNBSBYQUPODGQCVMEOYFWJJBCEPFJMMPAG");
    msg.lat = 0.15394616184764898;
    msg.lon = 0.3478850603482787;
    msg.alt = 0.04053516185688777;
    msg.heading = 0.939688565761182;
    msg.data.assign("LRPUTCRDOOUHBHBWXBLWVQSUSEWSDLUNGMDVACPGDCLUFIBIZCTOHADKGPIYMNCHXXQRIASIJYDKYPPFHNXHLBVDNFO");

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
    msg.setTimeStamp(0.7875919670290259);
    msg.setSource(23437U);
    msg.setSourceEntity(215U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(178U);
    msg.id.assign("XHUGWYNCTSQZCAJZVTIHIWBWFFCOQRYKSGXDBMGNPYQLQRJUGXHLLUDQMXVBWIWFOBZGSWLXSMUIURCDAVTZQJIAUKTONLKRAIOBMKHNHOFYEADWMCYEVRZCZXCDFEPLGJTGYTUQTBPEAAWRKPPCWAEJVJUUNE");
    msg.sensor_class.assign("YELMBOOXMOJNSGUCUPHTCFLBJVTPOFGCAVMISDCRLRISXANEIRVTGSVJZDZUDVRRXVSJYTHKWBMYQMWSJANRSNDDCHZGZCVGMWUELKDBLZSXPKEAGNDAQPPEYWHUOCPBIEQRYTKVQKAXGYNIHJMQPEGIZIVBHCLFRCAQTWFQOUOXFFXTTZTFFHVFCQGKHNPKLUYJYWRN");
    msg.lat = 0.5687003214770405;
    msg.lon = 0.9087059908460339;
    msg.alt = 0.458048001009594;
    msg.heading = 0.8411674803216654;
    msg.data.assign("LGTVFJRKSXAYPYEIZSVOADCSPJIKNEHYNJJRSLIXXZRIGVAIFQWRLUIQOVEPJQTEOTDPHBDJOMWTAAVGSZFHMKLRBUIONRNMHBBOSCFFNHIYXDGGEZGUZVLEMTMMKOWMKYACWNACPQGHNJDYNKYKCGFCTBRPSZVJQKGPQBYTLRMQGQXHMUDUCULLXXJTCVJUBTBNPSPZLTXRISZFYH");

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
    msg.setTimeStamp(0.4322806588250292);
    msg.setSource(25980U);
    msg.setSourceEntity(85U);
    msg.setDestination(34990U);
    msg.setDestinationEntity(190U);
    msg.id.assign("LUTMPLHWBFWRRJDASKPDZABCFQVASHCENBDGQVI");
    msg.sensor_class.assign("HOGLNOPYGFHIYPCXZRZTYZMJWUXXHBWZQRGUKTSSTOTWXDUUKDVHMHSMLAENOSYGMARICBMQKXIJCJKYEZIQEQFJJOBYHGSONUDKBTXNOFGAXNEJSQFAMEEAFVEJPJKGMGPJCIBVAZMIYWTXDLDYCBLCTPEDILSRFQHLHPTPCUAWEDBFLUVSDWAILCNFIGFRWRKNVRKMSCORAZ");
    msg.lat = 0.9928963150343424;
    msg.lon = 0.4367965159631262;
    msg.alt = 0.5238766493360585;
    msg.heading = 0.6808404925491699;
    msg.data.assign("RTBOXMGJWWIZDIIEJIBEYCQWTSQMTGVFCYVFLSGGNVHBANPYCORLIWWHIBYSVPSSFUYEHJYMDPPQAHIGGAYWBDJUKDSZEMQXGLCNEWQR");

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
    msg.setTimeStamp(0.5087909868315833);
    msg.setSource(50432U);
    msg.setSourceEntity(155U);
    msg.setDestination(59144U);
    msg.setDestinationEntity(100U);
    msg.id.assign("HDIXMTZHDSBGCCATYBKNHBABRYCPNFXXOCLKVEEP");

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
    msg.setTimeStamp(0.6350346522548554);
    msg.setSource(10919U);
    msg.setSourceEntity(50U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(60U);
    msg.id.assign("EMZVMXYBIDMOFKNBAAVTTFQBXCYWDYUNRRXRA");

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
    msg.setTimeStamp(0.6802645769514459);
    msg.setSource(25551U);
    msg.setSourceEntity(19U);
    msg.setDestination(34832U);
    msg.setDestinationEntity(141U);
    msg.id.assign("HKISRBVFRCJDILEMVMGTZFHJXCGOPORNDOCLYTWWICPOLEPZLFXNAHLQPBVQXEGPMZNRWMSVBHYQKDXAUNCFDLNWABTYFTLOWKZVHSNQIRSDYWLBKUYJAPZGALZTFYFIGHNGJUXXCTRMDDAUQRGCJVCTHTWBXKOYWKRMSHSXEPUQQBGTNRILQFMEKGEAPPOYBVVKUWXOJIZAJUCFPMAWQESTUMZEZIJRDVIGSDMOHKUSZXKOFJHNUSBYVEYI");

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
    msg.setTimeStamp(0.8874907385272419);
    msg.setSource(64220U);
    msg.setSourceEntity(146U);
    msg.setDestination(61307U);
    msg.setDestinationEntity(134U);
    msg.id.assign("BQIWTCPZWDZQCXKPGHCUT");
    msg.feature_type = 149U;
    msg.rgb_red = 71U;
    msg.rgb_green = 144U;
    msg.rgb_blue = 237U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6027415313153291;
    tmp_msg_0.lon = 0.6961632676677226;
    tmp_msg_0.alt = 0.08166602914829746;
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
    msg.setTimeStamp(0.9120574179107812);
    msg.setSource(58091U);
    msg.setSourceEntity(144U);
    msg.setDestination(53436U);
    msg.setDestinationEntity(153U);
    msg.id.assign("CRPZBTQUNPNODBDSVZWYTHBJUGPDWKVAGYXIKDKMIUKGCVQCOPBOLFTWTMEFCITQAGCXSOBWRHQDGHLSFQXGUOTLVZHYBNAAJDXKDMAOJRWXYPLHNZFULXZERDLCNALVPYVFUAHGAXVRYZTJFIJIPDFGQZWRRQSUQAWLOE");
    msg.feature_type = 103U;
    msg.rgb_red = 254U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 84U;

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
    msg.setTimeStamp(0.7143202710448957);
    msg.setSource(41278U);
    msg.setSourceEntity(198U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(197U);
    msg.id.assign("QEBSMNSCGFVJKLEJFNBYLMHPZLWQBDMDVLXUZLLRSCKAEGOGTHYZUDQNZBQAUITCFPWLKEODSOMDKUBVSYCIPFCZQFNOXVIETDAXQUVFHRUCSPPCJJFHGAKJMTHHNGRKWUXXPMCOIJEKLMPIVJYRMWAKBJOXEXBIWBZSYKFJFRHDUWNTRIARZZWOUPOIUGSGYIGDESMRDWTXZNYGRZOQAQQVASPFVYC");
    msg.feature_type = 103U;
    msg.rgb_red = 215U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 96U;

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
    msg.setTimeStamp(0.10143981826794446);
    msg.setSource(54769U);
    msg.setSourceEntity(237U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.12570265354855137;
    msg.lon = 0.7923677335228767;
    msg.alt = 0.6160732890156283;

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
    msg.setTimeStamp(0.36962438055194313);
    msg.setSource(26631U);
    msg.setSourceEntity(9U);
    msg.setDestination(62256U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.5443439689282257;
    msg.lon = 0.4560481684171812;
    msg.alt = 0.2217650713278655;

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
    msg.setTimeStamp(0.628246571800307);
    msg.setSource(33739U);
    msg.setSourceEntity(155U);
    msg.setDestination(50891U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.9367549552902577;
    msg.lon = 0.6746221170476822;
    msg.alt = 0.5535814127197061;

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
    msg.setTimeStamp(0.6832185426666753);
    msg.setSource(53980U);
    msg.setSourceEntity(149U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(202U);
    msg.type = 253U;
    msg.id.assign("IWIDULQIBJZFUNJNYEXHIEOOSGCYIXGIYDAMJFOFGRPDKJRWFDFWQNXJPJCVQMKBHSYTYSZSAC");
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 85U;
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
    msg.setTimeStamp(0.5924206167920646);
    msg.setSource(18688U);
    msg.setSourceEntity(115U);
    msg.setDestination(43825U);
    msg.setDestinationEntity(103U);
    msg.type = 213U;
    msg.id.assign("IEQGYIMFZITDYRENSLWOGRWULUMCCEEQVRHFRITJAUISTGOCMTZVHUZZOOBJJ");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 48U;
    tmp_msg_0.plan_id.assign("PGYDDYXFFLOEPCUWELOKRRIREGLDIITGYZWWEUBOJZOPVXRGBZGSHDYKUATTNUZMHFDBLSZCPYKRXTGILRNFLJDNJQZJAGCDKIMXJEVGJSGKCHHHXFVPAVUQFSSJPQQEEMELQNCMRAGCYMKSXNTKMHPTMBWCWLQVCYCOSUZDOKWDREPBVTINVFDATJWQO");
    tmp_msg_0.plan_eta = 594482534;
    tmp_msg_0.plan_progress = 0.3070646560732919;
    tmp_msg_0.man_id.assign("PGVASIUSJKMHPZOONMPBMLPLXWXVMXNHCVZQTYXSUYGRLAQBVVTKDIASKKUYHMSHEXBQGCOKQDQMZNINHAZZWRDZRNCFILYEUYIGJLFFTCFTRAWTBOADYXQLDDHQIKZELGVJJQDELNONHSXEXBKACXGDFJOTERCWUGUECWUHIJYRWAWMOJAMVBUAFBHSCF");
    tmp_msg_0.man_type = 33369U;
    tmp_msg_0.man_eta = -389699107;
    tmp_msg_0.last_outcome = 46U;
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
    msg.setTimeStamp(0.6505917266727745);
    msg.setSource(14342U);
    msg.setSourceEntity(1U);
    msg.setDestination(55054U);
    msg.setDestinationEntity(166U);
    msg.type = 212U;
    msg.id.assign("YCTRRBWNOVGMHFMFUONPOCMZPQLOGQKVMKTZORVULXMZINTAHUQSHHLNHDSDUSXIWXQTMYPMHJWBBGSUVMDBUERDSQHZSQYBLWAKJAYKKAHENCXUD");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("HSCHJYBCLMQUVDQPKCALETDUGSBWJGIFNUACLEHTWSVVLQRZGOXFNREWEYYANNMUTKFEMODUJAFTBHWXJGEXDUNJGTZKIMTEVBAKWZAAHFKBOZCZPUIVEOQIDWVYWWPYWNBFMBXNFAZ");
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
    msg.setTimeStamp(0.8305451124729891);
    msg.setSource(16146U);
    msg.setSourceEntity(54U);
    msg.setDestination(22563U);
    msg.setDestinationEntity(13U);
    msg.localname.assign("YPFUBEVCBMCPEWINVTNRGTKMDZBIHORXZVSYCLTEQEFGQKZIKGMRAQMEBHSJWDLEHGCLHYKOVGBUPZAISXVMMVVRETCYYUKDV");

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
    msg.setTimeStamp(0.8427326274672512);
    msg.setSource(9094U);
    msg.setSourceEntity(103U);
    msg.setDestination(17038U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("DRNFGMFSGWWTVKSDMQBBPUJAZPUFLYTRXGJYZYWGOYKXWFBHXUTETAJOIN");

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
    msg.setTimeStamp(0.19789284003447372);
    msg.setSource(45874U);
    msg.setSourceEntity(117U);
    msg.setDestination(45606U);
    msg.setDestinationEntity(233U);
    msg.localname.assign("DWBAUAOHYG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MRSWLETVVTCXCOYNLAPGCWMZRAWPFDSWMUXHZRKOEBZSAWXLJNOYVUAKSHDZJDNFVJEMQZNKPONYNJBQASAMXJIYFZSOUBNRRWFKXDHTG");
    tmp_msg_0.sys_type = 35U;
    tmp_msg_0.owner = 33439U;
    tmp_msg_0.lat = 0.30354444792858715;
    tmp_msg_0.lon = 0.37164939436637845;
    tmp_msg_0.height = 0.7772101923278706;
    tmp_msg_0.services.assign("VUOQKMCPYRUBWSOMNJXIHUQMYHVCNMZGRUXEEJANAEASYWIISSFB");
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
    msg.setTimeStamp(0.24606869225851213);
    msg.setSource(30660U);
    msg.setSourceEntity(19U);
    msg.setDestination(30068U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("OYIQIGXVTEULDVQVIBBXPVUFZWCZHWLZZBDNBTWMPCQMWGNMIKJKQSXAOLRTUKSTACPEYKANTSTAJYPMFRDRZRUMEYEHVGNIUFVZMLOSIJCUGGYRGXGIJWJFKZBCLFLDPOHHPZYQSWJFASEUKWAETUOICNQDAKKLPMRUYWKWLXDPSPQRYNLSOJRTXES");
    msg.predicate.assign("QMBUFDYJPIUUSMDGLTPOHFXECEECBNCXLHVWINUNSZXMJLIRRRFNAGJCOZFWAFZTNNIUSECTPNPASOPWKUHBCKLPXQYYRWKRRVIAIQPHEPMXJWBQZLWWRVFGTJVHKMNCSEJLWZPQWZDHKQOTEJLUYMWAYVVVVMPVCSCAHOHYBSABXRHQYGBEIZLYXSBSTODJZOALDSDOFYMLQXDOKMCARDUTJIKGEQRJEGNKZBKDBAFTZFKOGVTIM");
    msg.attributes.assign("GKVEFLPQLOBNZMYGXVJGKBIXGEVRAMTSWYARLRFYHJIJHWXUNXCODSNAOWHRAJPAQOCBGPXTEWXURMGJRWMT");

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
    msg.setTimeStamp(0.9533857092337351);
    msg.setSource(34978U);
    msg.setSourceEntity(241U);
    msg.setDestination(6204U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("OGAJOYNAAVBDQTSZWTQFSMXDNVKEVEVLDSIULTJLQGYFYTYJDRTRUCJMSZXVNBGI");
    msg.predicate.assign("VXEXLCIJQQBEBMQETBCDDLSKXFKFQKGZRPNEHPWOSOEHURJLVHWBCVZPLLCNUNMGFKUWHHVMITYTGUDZCROYSDVDAKNXGSHVEOWDJTOWXSFRLIPATMPHTDBUJQIZFCVANEOMWACTVOUHLYRZPYAKISNKCJNSM");
    msg.attributes.assign("EXCJRYQWGAUDQRZMPBHDXACKGTVBGLPJMGKNTCJSPTWIJZBAYVFXUPCEDTAOOYVECERBZSWWAYOIIKZQZLMBAIWXKDMYSMMPVRFPSQMILSJQKVBOYGEWARJUHRHCTLTUOIVQLINKGCEKVXJHGGTDXAPRNVFSRAFUQCSTJUHNYKPDFZCJNPSARNIGHHXLNDHWDLOBNJE");

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
    msg.setTimeStamp(0.6153837758859404);
    msg.setSource(64441U);
    msg.setSourceEntity(73U);
    msg.setDestination(167U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("ZMFAZXJXIKVCWDUSXRALJXOMRBWKZLNTGYTUHSTKPOJVBHXNITOBNRRMUYMFJGUMBCVAWEDUEDKWNLNYITYGQYYVLQDHQLPACKBPWTLJBCCYVEQ");
    msg.predicate.assign("PRGUJNZZKFNAWFTHCCDAAWQOFAOVJFRBGRDINYOAWNMVCQPERIULZTWBGKDXHERONUPLFRLVODXISICNVOVGJWST");
    msg.attributes.assign("ONXHFQIOJDCUBJLBJKCWXRHQWA");

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
    msg.setTimeStamp(0.6577875491323925);
    msg.setSource(6838U);
    msg.setSourceEntity(144U);
    msg.setDestination(14065U);
    msg.setDestinationEntity(55U);
    msg.command = 122U;
    msg.goal_id.assign("MXUVCZTFHXXYZFRVNEACLADMFWQIRGIYXKILUGBQGSTDUEBCDGDNKGHKSFKNXJQBWRAMKWUUJVZLFJJCEOXEIMOOBZOLYYCTHPKYYWGHXWKUTTCUMEHCEARLYVSGQQNSNBJLHFQPWCZQUVJRIQBOMFJZNSRRGEPXMRVKNQZJLPOEAXTALDRPOSDHDPBVIIDYLIIPGERCGQFMWNUTETSWWBIPSZMHTZYSALMFVAYBNUZABN");
    msg.goal_xml.assign("GLTDOCEIQKGPDKINPMXYNBBJQMRMEEGDXOROWJGECLUOKEAMFNFJYAM");

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
    msg.setTimeStamp(0.5689262452008228);
    msg.setSource(8515U);
    msg.setSourceEntity(89U);
    msg.setDestination(41657U);
    msg.setDestinationEntity(135U);
    msg.command = 191U;
    msg.goal_id.assign("WALPBTTSFXDNGNJZARWMYKOTJJSIIRCFACLNPSUUQRIGLVWQTBIXMG");
    msg.goal_xml.assign("XGZFOTXKFNGXBMYDECGYMDITFGPIVXLQSXRDVJUQQUKLJUMSYYHQKMLWVRPPFOEMQKSCOLRHKTWCJASFAZPDNUYHJDGNUIPCTGPLGJUELXALJQZSVCTSCQAYKIMYRNHZIKNIATOEPEMJCFQWVKUGEIBAVEJRDFHNHRIYFELWAPBZNTBMZFMBBTUDBGEBGHBDEDNLXAVHVOWWKSMTQKZRYRPOJDNCSVFOCWUWWQJIOICUZL");

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
    msg.setTimeStamp(0.9474237794139817);
    msg.setSource(22149U);
    msg.setSourceEntity(238U);
    msg.setDestination(33732U);
    msg.setDestinationEntity(117U);
    msg.command = 245U;
    msg.goal_id.assign("VZLGXHJLSOQLBDZLALFVRYNLJOOPEDHNAOKEBRNJVAVDVGZGKBQSXTPFQKJUDEXJMBYGEVQSSWFFASMJFSC");
    msg.goal_xml.assign("TNXFWHMABXFKECPYXCPOVVGZPZIQJRSRAPNTMLKGCUBTEGVCDFVUFGWNVSJIFLZLAHVIZDUZSCBCTYDLZVNDIMYNLAESBBBGCJWAPXOZLCISIQQOTNPYRNQJHYJQKJYLJZODWEEFSGXRRHUAGGKHORHOHAYKGNQIWPBVJZIIWXEXRELREB");

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
    msg.setTimeStamp(0.9778105324888734);
    msg.setSource(1194U);
    msg.setSourceEntity(175U);
    msg.setDestination(24247U);
    msg.setDestinationEntity(114U);
    msg.id = 215U;
    msg.width = 20488U;
    msg.height = 48726U;
    msg.widthstep = 10306U;
    msg.channels = 217U;
    msg.depth = 168U;
    msg.finaldata = 249U;
    const char tmp_msg_0[] = {120, -58, -55, -24, 89, 22, 45, -80, -93, -53, -7, 24, 84, 32, 43, 46, 13, 116, 71, 119, -116, -52, 39, 51, -6, 26, 42, 81, -92, -74, 68, 69, -16, 48, 64, -107, 72, 27, -79, 7, -9, 39, 103, -108, 120, 120, -76, 62, 71, 37, 38, -38, -58, 19, -122, 60, 25, 79, -41, 104, -74, 10, 0, -110, 117, -61, -53, 121, 114, -19, 14, -49, -67, -125, 20, -81, -100, 49, 27, 35, 40, 123, -94, 115, 98, -98, 20, 115, -33, 126, 11, 58, 86, -42, -68, 2, 16, 13, 126, 25, 78, 68, -103, -23, 25, -3, 2, 116, -112, -4, 99, -100, -99, -45, 122, 91, 22, -68, -24, -86, 110, 22, -123, 61, 62, -9, 38, 97, -128, -127, -65, 109, -19, 27, 50, 90, 43};
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
    msg.setTimeStamp(0.047514952100522145);
    msg.setSource(61648U);
    msg.setSourceEntity(76U);
    msg.setDestination(16855U);
    msg.setDestinationEntity(46U);
    msg.id = 72U;
    msg.width = 35771U;
    msg.height = 41140U;
    msg.widthstep = 62682U;
    msg.channels = 156U;
    msg.depth = 108U;
    msg.finaldata = 177U;
    const char tmp_msg_0[] = {87, -100, -88, -77, -93, -26, -79, -75, 20, 71, 62, -62, 44, -41, -118, 0, -1, 105, 73, -38, 98, -84, -70};
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
    msg.setTimeStamp(0.6136791202809208);
    msg.setSource(10090U);
    msg.setSourceEntity(124U);
    msg.setDestination(19099U);
    msg.setDestinationEntity(177U);
    msg.id = 112U;
    msg.width = 62561U;
    msg.height = 41926U;
    msg.widthstep = 46925U;
    msg.channels = 246U;
    msg.depth = 130U;
    msg.finaldata = 125U;
    const char tmp_msg_0[] = {-106, -126, 101, 30, 109, -30, 1, 32, 89, 94, 118, -75, -43, 119, 13, 10, -117, -25, -15, -13, -78, -62, 126, -60, 112, 14, -108, 59, 62, 20, 43, -34, -22, -19, 21, -56, 26, 31, 25, -115, -67, -67, 119, -77, 98, -76, 39, -80, 101, -37, 49, -71, -127, -101, 74, -14, 11, 114, 10, 14, 104, 62, -35, -128, 68, 79, -83, -14, 54, -20, -53, 62, -27, 5, -128, -33, 89, 25};
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
    msg.setTimeStamp(0.24546513805964343);
    msg.setSource(37351U);
    msg.setSourceEntity(34U);
    msg.setDestination(9163U);
    msg.setDestinationEntity(252U);
    msg.width = 22880U;
    msg.height = 60102U;
    msg.channels = 129U;
    msg.depth = 114U;
    const char tmp_msg_0[] = {114, -83, 88, -39, 98, 9, -105, 44, -45, -20, 122, 75, 20, -68, 122, 26, 115, 13, -98, -27, 29, 91, 105, -64, 41, 113, -31, -4, -6, -117, 55, 101, -123, 11, -124, 102, -42, -38, -14, -46, -50, 47, 37, 57, 5, -11, 81, -20, -47, -122, 111, 9, 51, 119, 7, 8, 75, 117, -13, -111, -114, 115, 27, 76, 79, -59, -44, -103, -23, -66, 119, 84, -94, 14, 55, -101, -72, -6, -88, -2, 12, -57, -16, -80, -68, 47, 1, -41, -99, -123, 118, -108, 95, 97, 47, 6, -60, -84, 74, -86, 48, 73, 63, -51, 3, -91, 93, -60, 78, -117, -95, 43, -38, 10, 55, 59, -4, 66, 96, -21, -44, -28, -6, 10, -25, 108, -52, -40, -28, 75, 54, 58, 120, 80, -94, 50, 91, 52, 65, 31, 75, 91, -44, 118, 107, -63, 114, 13, 7, -67, -77, 119, -38, 95, 62, 67, 114, -60, -34, -126, -100, -3, 24, 74, -111, -74, -113, -63, -82, -99, 42, 124, 33, -37, 34, 96, -9, -41, 28, -17, 59, 74, -28, -90, 60, -56, -17, 58, 103, -41, 29, 19, 101, -114, -86, 42, -116, 49, -83, 16, 124, -84, 35, -46, 32};
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
    msg.setTimeStamp(0.9689077818002814);
    msg.setSource(25428U);
    msg.setSourceEntity(1U);
    msg.setDestination(60039U);
    msg.setDestinationEntity(61U);
    msg.width = 58381U;
    msg.height = 24774U;
    msg.channels = 29U;
    msg.depth = 184U;
    const char tmp_msg_0[] = {101, 24, 101, 46, -103, 48, -120, 100, 26, 47, 25, 98, 97, -23, 100, -115, -87, -124, -64, 86, -120, 1, -78, 8, 25, 46, 11, -63, -128, -58, 126, 107, -11, 86, -68, -13, -16, 72, 0, -14, -93, 48, 59, -30, -38, -75, 106, 61, 109, -118, -119, 113, -87, 25, -77, -15, -72, -115, 78, 122, 61, -7, -26, 125, -67, -27, 112, 60, 46, -113, -10, -118, 7, 42, -98, -84, -72, 28, 4, -27, -96, 9, -21, 15, 74, -5, -21, 47, -6, 43, 79, 112, 99, -107, -56, 109, -68, 59, 116, 107, 97, -38, 104, -101, 20, -58, -29, -9, -110, -44, 86, -32, -20, 111, 19, 87, 75, -125, -4, -83, -77, -90, -70, -77, -25, 119, -61, -25, 123, -115, 101, 91, -32, 88, 35, -80, -58, 25, 11, 100, 31, 42, -84, 31, -26, 66, -76, -60, -31, 16, -77, 121, -73, -102, -97, 49, -60, -92, -45, -4, 115, 84, 57, 12, 124, -44, 108, -54, 126, 71, -73, -101, -6, -111, -1, 11, -61, 25, 66, 54, 26, 1, -124, -33, -86, -44, 106, 67, 76, -61, 100, -12, -108, 82, 57, 84, 44, 123, -91, 89, 34, 96};
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
    msg.setTimeStamp(0.8321338013431259);
    msg.setSource(25179U);
    msg.setSourceEntity(122U);
    msg.setDestination(15011U);
    msg.setDestinationEntity(174U);
    msg.width = 21412U;
    msg.height = 36578U;
    msg.channels = 63U;
    msg.depth = 27U;
    const char tmp_msg_0[] = {65, -79, 74, -92, 64, 40, 108, 48, -30, -21, 61, 39, -31, 59, 116, 78, -123, 79, 25, -124, -122, 69, -4, -103, -59, 76, -92, 73, -54, 19, 49, -6, -40, -60, 105, 82, -11, -128, 72, 57, 121, 50, -125, 79, -115, -74, 24, -122};
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
    msg.setTimeStamp(0.46260103629955907);
    msg.setSource(17324U);
    msg.setSourceEntity(218U);
    msg.setDestination(42922U);
    msg.setDestinationEntity(78U);
    msg.frameid = 18U;
    const char tmp_msg_0[] = {19, -87, 51, -64, 40, 95, 9, -117, 59, -84, 117, -29, -91, -82, 15, -41, -27, -62, 46, 95, -86, 43, -47, 106, -24, -91, 64, 126, -83, 124, -64, -118, 126, -74, 71, -91, -14, -126, 104, -44, 90, 64, -97, -32, -9, -128, -55, -95, -24, -33, -14, -107, -90, 113, 10, -128, -73, -12, -101, -4, -62, -97, -123, 49, 14, -112, -26, -25, 12, 48, -11, 97, 107, 112, 69, -111, -114, -94, 90, 58, -96, 109, 110, -100, 100, 114, 53, -33, 31, -44, -86, -105, 3, -105, -23, -52, 75, -112, 25, 6, 41, -88, -128, 12, 114, -48, -124, -103, 125, -89, -37, 27, -122, 98, -113, -26, -79, 55, -116, 12, -74, 41, 115, -103, 39, 11, -36, 18, 24, 15, 85, -104, -77, -48, -54, 48, 77, -14, -56, -2, 61, -117, 4, -78, -114, -75, 95, -91, 108, -74, 58, -31, 116, -114, 81, -60, -84, 59, -42, 40, 17, -98, -59, -124, 39, 82, -79, -98, -103, -31, -38, -114, 96, 92, -11, -62, 31, 76, -35, -105, -84, -34, -76, 108, 51, -114, 124, -16, 32, 119, -46, 86, 5, 76, 60, -69, -32, 16, 51, 122, -16, -23, -34, -7, -46, -111, 58, -107, -65, -75, -69};
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
    msg.setTimeStamp(0.8305752685114772);
    msg.setSource(18179U);
    msg.setSourceEntity(23U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(221U);
    msg.frameid = 47U;
    const char tmp_msg_0[] = {-90, -94, 109, 52, 14, 83, -42, -97, 41, -121, -64, 84, 94, -12, 23, -79, -37, 12, 64, -25, -43, -40, -102, -28, 105, 101, -94, -12, -119, -128, 77, 73, 9, -114, -71, -54, -110, 84, -85, 103, 71, -117, 92, -69, -54, -37, -60, 121, 112, -77, -14, 34, -29, 125, -31, 113, 117, 106, 123, 100, 124, 63, -40, -29, 35, 103, -80, -85, 75, -17, 76, -42, 62, -100, -18, -63, 119, -123, -67, -22, 106, 5, 51, -66, -6, 90, -107, -34, 106, 121, 60, -59, 92, -65, 73, -64, 107, 90, 95, -61, -73, 91, -41, 94, 75, -33, -81, 27, -88, 104, -62, -107, -81, -22, -102, 89, 99, 81, -95, 14, 88, 119, 98, 116, -114, -59, -84, -105, -88, 86, -8, -92, -89, 57, 59, -103, 72, -123, -6, 72, -64, 29, -9, 88, 17, 111, -70, -87, -60, -48, -109, 113, 97, -27, -18, -97, -11, -66, -105, 47, 14, -82, -89, -33, 82, 61, 3, 64, 101, 98, -44, -37, 26, 113, -23, -126, -53, -32, -24, 121, -87, -122, -39, 20, 60, 19, -128, -101, 94, -82, 49, 15, -122, 43, 118, -49, 68, 44, -128, -6, 3, -56, -31, -55, 98, -45, -2, -88, 92, -3, 100, -128, 37, 54, 123, -85, 71, 71, 93, -65, -96, 125, 71, -77, 58, 12, 61, 25, 38, 98, 65, -34};
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
    msg.setTimeStamp(0.13319582725808132);
    msg.setSource(3696U);
    msg.setSourceEntity(45U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(235U);
    msg.frameid = 106U;
    const char tmp_msg_0[] = {67, -67, -25, 35, -79, -93, 26, -14, -79, 74, 98, 89, -14, 0, 32, -46, 118, 97, -10, 79, -110, 14, -124, -2, 44, -8, -103, -56, 11, 16, -75, -100, 59, -105, 28, -69, 33, -128, -92, -66, 124, 53, -7, -17, 26, -89, -116, 83, 57, -18, -72, 95, -19, -90, -111, -47, 114, 79};
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
    msg.setTimeStamp(0.07548877075708627);
    msg.setSource(62058U);
    msg.setSourceEntity(245U);
    msg.setDestination(2999U);
    msg.setDestinationEntity(102U);
    msg.fps = 20U;
    msg.quality = 85U;
    msg.reps = 212U;
    msg.tsize = 161U;

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
    msg.setTimeStamp(0.16817085113557162);
    msg.setSource(606U);
    msg.setSourceEntity(163U);
    msg.setDestination(5455U);
    msg.setDestinationEntity(131U);
    msg.fps = 93U;
    msg.quality = 22U;
    msg.reps = 104U;
    msg.tsize = 109U;

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
    msg.setTimeStamp(0.25170362817407554);
    msg.setSource(54288U);
    msg.setSourceEntity(85U);
    msg.setDestination(55234U);
    msg.setDestinationEntity(237U);
    msg.fps = 229U;
    msg.quality = 149U;
    msg.reps = 122U;
    msg.tsize = 84U;

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
    msg.setTimeStamp(0.18806648192323272);
    msg.setSource(16620U);
    msg.setSourceEntity(16U);
    msg.setDestination(8394U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.5625236576746993;
    msg.lon = 0.9970521541829739;
    msg.depth = 79U;
    msg.speed = 0.92711013982433;
    msg.psi = 0.5199371224084399;

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
    msg.setTimeStamp(0.41671002854158223);
    msg.setSource(57434U);
    msg.setSourceEntity(45U);
    msg.setDestination(27964U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.46611123024756795;
    msg.lon = 0.9286717332654543;
    msg.depth = 219U;
    msg.speed = 0.82874040413653;
    msg.psi = 0.28560056105799625;

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
    msg.setTimeStamp(0.9168127347597567);
    msg.setSource(12032U);
    msg.setSourceEntity(220U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.28934022427591677;
    msg.lon = 0.1085150435896658;
    msg.depth = 21U;
    msg.speed = 0.9760146571285236;
    msg.psi = 0.2607035313707118;

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
    msg.setTimeStamp(0.2207908843020817);
    msg.setSource(45631U);
    msg.setSourceEntity(27U);
    msg.setDestination(18396U);
    msg.setDestinationEntity(158U);
    msg.label.assign("EVRLWRVSHOMTUYDUDNGEPQCNHNGPTISFJXGOAMWCNCLDDMKRLJTRHZUMLIJGQLWWNVIQVLDRXVBFRMNSBUYUWYZSOFZKMCUEBBGSJOFMJLFJMDYAJOZZTXBAMJTHHYLAIGDPXELHPVEWNJIXIPYNPTRTGOKSOGCHZPXWDMZQFAKKRXWHQBII");
    msg.lat = 0.06224727519843132;
    msg.lon = 0.3020424114918273;
    msg.z = 0.05173782765716317;
    msg.z_units = 113U;
    msg.cog = 0.6500333554537826;
    msg.sog = 0.7412910238970114;

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
    msg.setTimeStamp(0.5951091089722944);
    msg.setSource(31160U);
    msg.setSourceEntity(25U);
    msg.setDestination(1539U);
    msg.setDestinationEntity(26U);
    msg.label.assign("ZMWGNUCUCHGOIHWTFVAKRXWMYBTLPLJCRMCLPTRUSBJSJCEUSOSWOGHGBMVWXUAKYDFDJQFHNBIPHIGEGVIFTCEBFHQPMRYHJZXAQGSWSKYRMYSZQXDBHXDDFCCNVLLTQZDAIWAMNLYNKVRILCZNWSMFWXYJAIZGYJQJEQOHMKVPGYAJENQOBNLVZLOXODXTRAEKAZFQIVRYWHBUXDEEDIK");
    msg.lat = 0.31478256877630306;
    msg.lon = 0.255058966267261;
    msg.z = 0.5082566666743118;
    msg.z_units = 45U;
    msg.cog = 0.4897566406131476;
    msg.sog = 0.23130639457772173;

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
    msg.setTimeStamp(0.17352650790891944);
    msg.setSource(62127U);
    msg.setSourceEntity(247U);
    msg.setDestination(22920U);
    msg.setDestinationEntity(164U);
    msg.label.assign("BFWMFLXYBEJUJQOXNZACIJQXNQIAWNNAUHRPXFVQRFHLQRYVDZUYRKXKCGDMWEHMIOYTLKDMMEPBHNEYHLWLTSSBBEPRDLBUASVWIJIRWPOINQIOKDZNGELZLZQMSJQDCBBDZUOTBGIHFNGEYYDRSZKHEUXQJJY");
    msg.lat = 0.9374146679325731;
    msg.lon = 0.4989745702387455;
    msg.z = 0.5692686830812546;
    msg.z_units = 166U;
    msg.cog = 0.7520502803892481;
    msg.sog = 0.16149536198362835;

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
    msg.setTimeStamp(0.5971331216590063);
    msg.setSource(26561U);
    msg.setSourceEntity(215U);
    msg.setDestination(37382U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KDNCTTRDJXYNZPASLIZZDRACDPKQVRVLWUHGZCIREMJKMBSQDABLCOFENOVBYDXMOJOLNIGYYGBKKOSNGDQPCLTPVGEOSWCACBFFKVATZNSZJRIIDWYTKYGSQWIPYSGMUAIDFLWOVNCUZUDXVHKCXXALHFTAQYRWM");
    msg.value.assign("QPBJCOMBYYYLGFSZPFCTOAJNHQGTTVIVOEKWLXELBRIAKNJXWFRGMLOFVQZBOMODIFILGZTXWPERBDOZDHXVRJGGBZWCMLTAXUWJTKPEUCGZUVPUCFGNBEQOTZKXH");

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
    msg.setTimeStamp(0.8073832066200884);
    msg.setSource(22762U);
    msg.setSourceEntity(144U);
    msg.setDestination(6100U);
    msg.setDestinationEntity(57U);
    msg.name.assign("YLZSTMAXTYVPNNLRTPKZUZMAZEDBQZUAGZOGFXMXVFOIBAPSNUBZRJWYJXEOMGBUMXKTPKPRRSVTFSJVUJCWRJPPOZJIFUCSDYWOFLAONNISXDRAURTDIITCHYLFYBJVYQXZUUHCSYHLBM");
    msg.value.assign("QMUFEINEQIMMPLXHTXSAACYTGYRQYZSUWEJHXAVWHQHPKZKPJFTJMSYCYZKWBZDETOGRZDZQEUCVOUMLJVULCVAXOONKHFSEWQDJBUPPFXAPMIMRIKTD");

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
    msg.setTimeStamp(0.7357317401955418);
    msg.setSource(2399U);
    msg.setSourceEntity(63U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(36U);
    msg.name.assign("TECZHGGNYCHOOZGLYHBKVTPSQKHVCUWDBRSYFHPQFQZMNMULWCFKRRUXKKUZNOYWTQJYPSIXICKKJNSYGBIWLAIRNOGD");
    msg.value.assign("ILIZOJYPKVSQCIIV");

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
    msg.setTimeStamp(0.9354738760051047);
    msg.setSource(10961U);
    msg.setSourceEntity(12U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(36U);
    msg.name.assign("WXZTZCKAMEGLGXPJOQBBDLKFRQVPNSIHMWXTDAIVJUYSJGMOAGDEEQIFFOKTJHTOOULQFKTPSCCJSXSISIANZVHRWHXXEKWPTWTCFLELFFMMOZHUQPVUMIIGCPYALJEHNTPADJUMIRLZVLCCN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GUTDONQEEA");
    tmp_msg_0.value.assign("OVFZLDOUTUBQQZLSJPVLJDYOTDPXQJORYAIZASGPMJCEAJWLHWSUYPCZIBSUJN");
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
    msg.setTimeStamp(0.08833656004636714);
    msg.setSource(5940U);
    msg.setSourceEntity(23U);
    msg.setDestination(16556U);
    msg.setDestinationEntity(145U);
    msg.name.assign("CTDHXPMNBXOILYMORSQRHK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EQVNJTRBPOPDFCPXAAUUGODPCWZIBKXDAOKQGRCYUTKWSLDVEXASXNZYOUEEFGDRUQUETIPVBFZFBHMOXVBNJNKCZYFKLHLSFOYWMHILJSCLSBGW");
    tmp_msg_0.value.assign("QKSWSPDVLQZKIIJTJEQEPSTZVXDBKTGAEBQJHTBKLTGWMVFQWCTXLSXYRWUFNMHSIBPZNFFCMZBTRMTQYDUIWHUQGXSONLBAUMMRDQWLCKVQGBFXNFIOACLYPHUUJKEBNDPOGCRSPJKKHCIWZHAFXOBHDZFSUYEKAHAXVPGIVEOLIBLEYZDQREXRJIOLCPAORGVUPTOCXMYAHKGFRSFCYNENDUYIMANNZWRUGOWOZVCMS");
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
    msg.setTimeStamp(0.5916451113962079);
    msg.setSource(36907U);
    msg.setSourceEntity(208U);
    msg.setDestination(42543U);
    msg.setDestinationEntity(43U);
    msg.name.assign("NAAXYTSJPPYRXFIDUWPNENCIEWJGZDDXOHKYBMXCAZDNRWUIFVMAATICWUJXXBZYYSIUFIRRJJNULTKXRPWOQOJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RZCLPRUAPXLUCNIBJMAKKEVQFBSWDLKBERN");
    tmp_msg_0.value.assign("RIBYSOZJHJURYMPIHNFJZ");
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
    msg.setTimeStamp(0.05982228123669131);
    msg.setSource(16938U);
    msg.setSourceEntity(53U);
    msg.setDestination(51801U);
    msg.setDestinationEntity(41U);
    msg.name.assign("DSOXEXSJOXTSQPLHGAUCUBQFBFNNZKUCGKNLYIGSCTZPHXTMOKRDGIUPPMREYSZXMNFIMYDKRHLVHWYDFPMVYBOIDEVMZQODTJENGHBNRWJTLJNHHSSIZCGTXMAOKRZRSZCQKNEQNUATYXXIPHFVCFNRBJU");
    msg.visibility.assign("XNQVGRPQHLWDFSAZFFYTTPFHCYKPDDBZQPOLMOISHGYASADCMGIWSXU");
    msg.scope.assign("YHSOOAGPRMQEGYIWEEDJPQMMNTEDHHXZNRXJIVCKQBQIOLKKELDXMNFFKTXEWGPJYUDVZJVCPPNYZMONRUUXNRYPULGBBFLSBHBKWUCQVADKMGTCREXTWFTWKNXCWOAJUBEVNSTNMTVQWTQUISAXPFGSBYSDKAVUFLADMFLIQWOHZHAMLPJPZIIKRGRCQAGBKZIISZRACHZD");

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
    msg.setTimeStamp(0.1696382210286872);
    msg.setSource(15171U);
    msg.setSourceEntity(194U);
    msg.setDestination(33673U);
    msg.setDestinationEntity(21U);
    msg.name.assign("LTGQNMWQVCMHOWPZPYZQNASUHZWLHBRKLSZFPEAJEWJOERGZBNHVNDNPRKNYMHIRLXGOQGYKQFSTVLJKEXPBIYZRAJYFTDJKDDQEOUUJTQJ");
    msg.visibility.assign("FAZNGARSQDRWATXUVPOPC");
    msg.scope.assign("VFKGFRTUYVNAAPKIFY");

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
    msg.setTimeStamp(0.9930083946850994);
    msg.setSource(47122U);
    msg.setSourceEntity(176U);
    msg.setDestination(51776U);
    msg.setDestinationEntity(101U);
    msg.name.assign("USPGNWQLTASLWUOIEFXYBH");
    msg.visibility.assign("EOXVLBFCQISUZFLHDDPBPSIY");
    msg.scope.assign("VARWTZQJUEXXDXRDNEKDPBVHRCEGUGZIVQUKAQYFWRGWLSBZQZXWPTXKLVTBMHNLCNJYZSDUVZFXQEQGPJUYKKIVAMUHYJLNTKLJFGPVEGVMRRIBUUQSZNZTQMPHVJSXYGPCAABHDGTOOMKIBWCROOBWSL");

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
    msg.setTimeStamp(0.7006275503513141);
    msg.setSource(35696U);
    msg.setSourceEntity(59U);
    msg.setDestination(48390U);
    msg.setDestinationEntity(129U);
    msg.name.assign("DENRCCNKJIELVASZQOFXRYIKYADCCWQDLPQPDMQFVSDTTBQYEJZOTBRJIZDWMTPMJTQYLPFMGPSNEAKBVZLRVDPBYGUXUUAGZYXXEKIRWZZJXANHTEHCOFSWGNMLHGRSTAJYHKFBKZOYLHVJFUDCNSPAGHBUKNMRSABUVIRSHWQCUEQEOJTVECYXOGUMWRVHZB");

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
    msg.setTimeStamp(0.9530545849411451);
    msg.setSource(2762U);
    msg.setSourceEntity(151U);
    msg.setDestination(22518U);
    msg.setDestinationEntity(163U);
    msg.name.assign("AHFWEEILFGRPVRASNUSCLAHILSJZEEHJPDCYBFGMJOMUJREMUDUHIOGJQBTHVVYEXTMMKDNTNVKDLGPKWTUXKRZEXDBKLMLQLCISSNPAMSPUQDHT");

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
    msg.setTimeStamp(0.13315184540243863);
    msg.setSource(16943U);
    msg.setSourceEntity(77U);
    msg.setDestination(25804U);
    msg.setDestinationEntity(1U);
    msg.name.assign("YPXMOHSIAKFCIDTYIEEE");

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
    msg.setTimeStamp(0.21140218317912252);
    msg.setSource(40163U);
    msg.setSourceEntity(181U);
    msg.setDestination(40593U);
    msg.setDestinationEntity(40U);
    msg.name.assign("GSVPLILYJCSVAWNJWJFWZPTXTRKUCIFDADQXYDPBZKYFMWETIYVX");

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
    msg.setTimeStamp(0.2507361405460423);
    msg.setSource(21793U);
    msg.setSourceEntity(192U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(166U);
    msg.name.assign("ENXOOBJFWWDKUDIMRNTLQWOJMXTSOAWUGHAQGQFYZKTCNRQCLVIIXYGZWPZASRLAPJWLODPUUFOKSMGMCISXXZENSWSYKHKMHYYWHQYPBTYOMMUJZZBGXJELRDGZIKFRVVJCNURFBBPCBLRZVQOAEPZWAYSXCQVDINWLCNMHVGDFNDQEIHLAJSGVEYFHJPVBHESIUPTU");

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
    msg.setTimeStamp(0.07014852647590186);
    msg.setSource(8206U);
    msg.setSourceEntity(95U);
    msg.setDestination(53948U);
    msg.setDestinationEntity(38U);
    msg.name.assign("PDMIEKDHIEGJFADCPVBUECQPTVHNOZCQDGBWMCMFBOYWPJXXZONJKDYJICRAYKZTVNXLZW");

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
    msg.setTimeStamp(0.3357119797950098);
    msg.setSource(27649U);
    msg.setSourceEntity(95U);
    msg.setDestination(51508U);
    msg.setDestinationEntity(150U);
    msg.timeout = 1756743709U;

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
    msg.setTimeStamp(0.7229398918914443);
    msg.setSource(62944U);
    msg.setSourceEntity(166U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(192U);
    msg.timeout = 3865402947U;

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
    msg.setTimeStamp(0.8685888974303783);
    msg.setSource(44267U);
    msg.setSourceEntity(11U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(77U);
    msg.timeout = 2831468316U;

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
    msg.setTimeStamp(0.7601155290428689);
    msg.setSource(64941U);
    msg.setSourceEntity(15U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(245U);
    msg.sessid = 3582465488U;

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
    msg.setTimeStamp(0.6584306435820791);
    msg.setSource(6140U);
    msg.setSourceEntity(92U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2709213706U;

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
    msg.setTimeStamp(0.3309629857992885);
    msg.setSource(31050U);
    msg.setSourceEntity(172U);
    msg.setDestination(24383U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3104534416U;

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
    msg.setTimeStamp(0.2572556796250818);
    msg.setSource(15508U);
    msg.setSourceEntity(128U);
    msg.setDestination(20688U);
    msg.setDestinationEntity(26U);
    msg.sessid = 4157916123U;
    msg.messages.assign("LCRXYJNWDYJEKOZHAVUWMHLZJXTIQSIELHWTUNTMUJDAVYTGPSHVKOVZDPENPVAZKZYFLOVOBHLAXIDLBWSRCSABARNLTSPQUPMQJSMHZETVOVTOTKAODKGEOSLXIFDYOEPWJKZ");

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
    msg.setTimeStamp(0.5831215329656441);
    msg.setSource(64333U);
    msg.setSourceEntity(144U);
    msg.setDestination(29057U);
    msg.setDestinationEntity(29U);
    msg.sessid = 992276928U;
    msg.messages.assign("QTLZQJXUZMZELFNNZGFCWLDNVUWCPVLMISABVRYNKGJRHCXOXVHUQLYRKZZUEQGYS");

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
    msg.setTimeStamp(0.7534673430659821);
    msg.setSource(10356U);
    msg.setSourceEntity(53U);
    msg.setDestination(50027U);
    msg.setDestinationEntity(110U);
    msg.sessid = 2178995125U;
    msg.messages.assign("EAFIEPXAYAPNCLOZLPRWDWAGBFJNSOOUXOVIRSSQOLLQJRTWWOTMBFJHULKVSYGRCKUIYDWTCTSEHJHSGUDRBECYFIZZAPP");

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
    msg.setTimeStamp(0.09435565574743332);
    msg.setSource(54891U);
    msg.setSourceEntity(135U);
    msg.setDestination(46809U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1524153436U;

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
    msg.setTimeStamp(0.6926349688453246);
    msg.setSource(46703U);
    msg.setSourceEntity(6U);
    msg.setDestination(23306U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1025537484U;

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
    msg.setTimeStamp(0.021341622402256344);
    msg.setSource(13421U);
    msg.setSourceEntity(59U);
    msg.setDestination(33567U);
    msg.setDestinationEntity(27U);
    msg.sessid = 1825133934U;

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
    msg.setTimeStamp(0.696564484773877);
    msg.setSource(3067U);
    msg.setSourceEntity(163U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(53U);
    msg.sessid = 1481501018U;
    msg.status = 96U;

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
    msg.setTimeStamp(0.278900709637273);
    msg.setSource(52561U);
    msg.setSourceEntity(230U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(114U);
    msg.sessid = 2564014859U;
    msg.status = 13U;

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
    msg.setTimeStamp(0.6783659616868996);
    msg.setSource(45268U);
    msg.setSourceEntity(152U);
    msg.setDestination(8029U);
    msg.setDestinationEntity(171U);
    msg.sessid = 626608150U;
    msg.status = 147U;

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
    msg.setTimeStamp(0.5736454186169925);
    msg.setSource(20297U);
    msg.setSourceEntity(162U);
    msg.setDestination(60969U);
    msg.setDestinationEntity(195U);
    msg.name.assign("CIBFBWBAMRNQCABWPDJMDPTWELLGQGJAXZSPQGNGCKHFMJMXXXXLNCDKWXEYWGCZTYDZWTLQBBDYYUJKBSTQVVOQIHYEHLSVXPMCLVSARLOUNIHCOZOTMBERZTNH");

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
    msg.setTimeStamp(0.4781050559538236);
    msg.setSource(3915U);
    msg.setSourceEntity(23U);
    msg.setDestination(31527U);
    msg.setDestinationEntity(89U);
    msg.name.assign("RRXJLPZQBOWEGLBKNARGPONJCVXNIXHMLRHNNKQROLLRFERKSVBVJAJKZCUSQAOQBJBGMFWEDCSMPIPPEAHFHCHJVMAOTJXDQWYVULVHKPMEXUHLSYTBZZPLGICSOUDWHUYTLISRWDTDOXYMCONWHFUYAWXZIFYPNNGZKYRFKLKXEPUCWI");

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
    msg.setTimeStamp(0.7398982634848361);
    msg.setSource(56755U);
    msg.setSourceEntity(153U);
    msg.setDestination(59338U);
    msg.setDestinationEntity(181U);
    msg.name.assign("UZGLSWANAYGEURWVOIFTVLPH");

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
    msg.setTimeStamp(0.060263645347535366);
    msg.setSource(1243U);
    msg.setSourceEntity(91U);
    msg.setDestination(2235U);
    msg.setDestinationEntity(163U);
    msg.name.assign("FHTYDJAAJJNAQYRGGCTWSAAAQNXUVJEDMZLNVNPLRVHLMUIDNCZUZGKFZVLFTVIEORYKDZLQKWMSIQGRDOBHSMYHRJCHLXXPOWMQOWVGSQSTBKEZVFQBQEOIXGTCBDEKLFPWBJJMJGGNWEZOTERWVHFSWPBNINPCXRPXDHLJCKKNZXYSCAIDICRXZYIUTHTSKJTUBEFWMEMOUREYPCFTFBLQ");

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
    msg.setTimeStamp(0.23716671888742713);
    msg.setSource(12351U);
    msg.setSourceEntity(59U);
    msg.setDestination(15821U);
    msg.setDestinationEntity(45U);
    msg.name.assign("WQRMNKPLYJDVSJSGQBDMNZCHXUUVKIAASBYUPFYTEUDFXEFKCGMFUZFLOLNABS");

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
    msg.setTimeStamp(0.2846703104267432);
    msg.setSource(64823U);
    msg.setSourceEntity(148U);
    msg.setDestination(5945U);
    msg.setDestinationEntity(33U);
    msg.name.assign("KUQSHDYGTSKDMFZBMVAJJVEOFYBPOFBIXFNTGPQKKEXCVQMBCBVUIWDHJWAJLTBHTRORGKPOEGHHIPLKECGFCQLYMWTJSHODTM");

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

  return test.getReturnValue();
}
