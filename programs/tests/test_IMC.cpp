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
    msg.setTimeStamp(0.4442059427736107);
    msg.setSource(32333U);
    msg.setSourceEntity(137U);
    msg.setDestination(16187U);
    msg.setDestinationEntity(40U);
    msg.state = 166U;
    msg.flags = 100U;
    msg.description.assign("QRNHTWPGYVXZPBXIHZCGBNHKKLBXKVJSUSORWIFVSTAWMYCMZBLYOSJOPBWUVIOYSSKNJQFYLSHALFNDMRAEJDFV");

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
    msg.setTimeStamp(0.07859041442527126);
    msg.setSource(15188U);
    msg.setSourceEntity(209U);
    msg.setDestination(37377U);
    msg.setDestinationEntity(53U);
    msg.state = 86U;
    msg.flags = 62U;
    msg.description.assign("UHGPSGNBMFTJONTDFOLQCPTPCBIEXKGRIWTAUMCRLGOVQJJSXWNALKVZKOWYDZHODAGHVNUIPAAKQAROKXWHPSKLZHZMKXNIUNFBEIQECHWFBMFMUQESYADKKPTWXBPBDJFTIXCRDGWQHSTSLIYVYHGPFCGUBZYFNJXYRNCZEMYIXKYUMDDRZRSLJONLTEMMPEJFOBQCGESXVLMCSIWYAUUUVROVQWVFZEJDHCBVSGYRBROINAEZJLV");

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
    msg.setTimeStamp(0.8726177898655749);
    msg.setSource(47826U);
    msg.setSourceEntity(75U);
    msg.setDestination(24359U);
    msg.setDestinationEntity(65U);
    msg.state = 103U;
    msg.flags = 22U;
    msg.description.assign("WGZYGVEFIMDIQXPLROQMTAVFOTGGJNCNSURBDAVAOFECYKOGVXKIMUHQDVZBXMMWNZBZPKOBUGDWJZSVXGZCIJHLESFQFATBPZWYMBLBXCFPOFOAOUASND");

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
    msg.setTimeStamp(0.37936607601069505);
    msg.setSource(14940U);
    msg.setSourceEntity(140U);
    msg.setDestination(28199U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.6100664369181544);
    msg.setSource(29662U);
    msg.setSourceEntity(112U);
    msg.setDestination(56188U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.4892535692490281);
    msg.setSource(8894U);
    msg.setSourceEntity(21U);
    msg.setDestination(57307U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.30504739036663786);
    msg.setSource(25426U);
    msg.setSourceEntity(252U);
    msg.setDestination(49198U);
    msg.setDestinationEntity(93U);
    msg.id = 145U;
    msg.label.assign("EFPRFUOLRXBJHGEZZKCTWNSMUUZROLIXHNKRIETUSLBBBZSUHOWNBWADMNCFGNCVPJVPPHJAWHYODQRDPSGJCLZPSKAIJCSFNTHOTYVWMMGRAEZQKFBCAZDE");
    msg.component.assign("GVALTROGPCUWQWSKNHJHGAPXJSDPWOVLSCOUXDSNEZDAKSZQJABAIKSOVPFXVCDJQMGSMYKFYKOGLPSLFBJVUUJFBHKMWFMGMAJUMOQNNXOTCCTEWRILTBVXJUBXSEVZYUZDCIPNBFQILCTATB");
    msg.act_time = 7990U;
    msg.deact_time = 21886U;

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
    msg.setTimeStamp(0.8341783422477851);
    msg.setSource(39992U);
    msg.setSourceEntity(62U);
    msg.setDestination(13829U);
    msg.setDestinationEntity(241U);
    msg.id = 87U;
    msg.label.assign("ELRTHVDWNYHKQLMAXAIDEWDNCNRXJWHKYLMFOCACEGRGOJVUNJKQPOKNZMUHVXBIQYRZIZGYCVVQSNZBMOLKZUPXUCZELHVJFRKNZONOWQSSVDSRPORDHWZQGTXHXFEITFCTQSRHERJXGBK");
    msg.component.assign("ZLTSFMUQPMVJJETLHKMUOZVHLDDMNGQAPBHPXACKQYAIGJFJUYREASJPVLZQXTANYOKCGXACMDSBJGHXSVNKEKBGDLGFWNILZSPGZVHMFWCRGBIAUHKQFKNAORFIFEGAWEQTONBCTMTFVYIRZDXOEAUZILQSDPJEQXONJUCSRPNFTHYDRUWYMHKLUWL");
    msg.act_time = 1256U;
    msg.deact_time = 51903U;

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
    msg.setTimeStamp(0.7568928749159898);
    msg.setSource(40338U);
    msg.setSourceEntity(148U);
    msg.setDestination(5496U);
    msg.setDestinationEntity(34U);
    msg.id = 249U;
    msg.label.assign("QBUWFQKTKEWSTDGMXYKYTZIKFLBSPNSCIJCOQNFDQMAXLGTJHZTMOWXUCOVKHRAJDHFJZMLEGFTBUQMDOMTVXVDTLCHJPUQWDFRHALMVGIZBDVUYSAEWGBKLREOUSGWVUZJSVSBCPDQGHOJMFXCLKHPLPGSUXYYEHRQRBOBWKRYCXWXTEEZUKJFWERFGMEBRZNNPHCVIIYDPAZCYAZS");
    msg.component.assign("JMCUPQXPWVZXDLARRHSADMJKARLJUQMUPSCKQRQYEDLLXMCGGFFJTOGBANKWKLREVHPKRVAPYLTRCWYSZLYDNZNSMTZMGJVZUPBKAPDAMJIIQUYKVSDNCQFBEUPMZFRHTOCWIYGNDBKBCHVWUQCYRJIHLWNOWIWGBABUNEGKMITGRNOLXFEII");
    msg.act_time = 53256U;
    msg.deact_time = 64603U;

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
    msg.setTimeStamp(0.7629170871470591);
    msg.setSource(24606U);
    msg.setSourceEntity(129U);
    msg.setDestination(31436U);
    msg.setDestinationEntity(174U);
    msg.id = 101U;

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
    msg.setTimeStamp(0.3262786722274854);
    msg.setSource(22757U);
    msg.setSourceEntity(161U);
    msg.setDestination(47384U);
    msg.setDestinationEntity(150U);
    msg.id = 15U;

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
    msg.setTimeStamp(0.5074448450536666);
    msg.setSource(21005U);
    msg.setSourceEntity(152U);
    msg.setDestination(21298U);
    msg.setDestinationEntity(29U);
    msg.id = 63U;

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
    msg.setTimeStamp(0.8096660001233066);
    msg.setSource(694U);
    msg.setSourceEntity(160U);
    msg.setDestination(30197U);
    msg.setDestinationEntity(109U);
    msg.op = 115U;
    msg.list.assign("NEXJYLUSMGNDARAFWPYXUPETZRRRINBKRZYUVAFGLEHJGLTCWQMCWSPUJQUEKTHZCZVAKCPVMTVFLZBDGMYVQDFNXILFPPUCNCNHBBIOLKQSMVYOGQYJIRDYSKHXWEEFKMCLXBZZDIGHGVHHEYKOJMWYBLFGOQWITOXPXAQNRKZTQAW");

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
    msg.setTimeStamp(0.34093350647516507);
    msg.setSource(56428U);
    msg.setSourceEntity(223U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(53U);
    msg.op = 152U;
    msg.list.assign("BHCZJARGAHQXCTVVNFVEGOOZYLFWWVVNXRKEUDMIQHRBPYZPSNGHZDUYXGNXPUSKCTVDHGULBQEDXFLSRUIRZSTVKAJWJSTKQKYMLIBTGGBDLFJPEVERHOPTAPWMOBWUWSGMXTFYWUVJDEVKNFACSDORQDNCQXBUIIIOYZZMHKSJCIENTHLAFEFDIKOSGAGJIKXHC");

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
    msg.setTimeStamp(0.734490652139049);
    msg.setSource(30142U);
    msg.setSourceEntity(85U);
    msg.setDestination(7813U);
    msg.setDestinationEntity(123U);
    msg.op = 41U;
    msg.list.assign("KBFFBUUMJCLREWYDLBMSXWJZTCMQXDKNOLINCTIVRWGGLEBBSZWPVADKAQKLXGKOTWHJLIOPJOFPLBWNBVZKZXOHEUHYUROTVGJVFAAQBZGZSGMFIECYNSXRRRQHWALIHMHYQPQDKPNPTDGZMHBRZFURDQPFQVCJNZDOYGVRYJLEJXMKSQVUUWCVAKDTDETCNSFIKCMITUYUOAMVJPTMG");

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
    msg.setTimeStamp(0.47301712832229137);
    msg.setSource(19731U);
    msg.setSourceEntity(237U);
    msg.setDestination(14657U);
    msg.setDestinationEntity(12U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.03838138869931984);
    msg.setSource(56835U);
    msg.setSourceEntity(218U);
    msg.setDestination(13927U);
    msg.setDestinationEntity(163U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.8707358033814102);
    msg.setSource(20772U);
    msg.setSourceEntity(142U);
    msg.setDestination(22834U);
    msg.setDestinationEntity(85U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.132955690173177);
    msg.setSource(8650U);
    msg.setSourceEntity(38U);
    msg.setDestination(38968U);
    msg.setDestinationEntity(174U);
    msg.value = 146U;

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
    msg.setTimeStamp(0.6640964443809713);
    msg.setSource(39111U);
    msg.setSourceEntity(0U);
    msg.setDestination(9382U);
    msg.setDestinationEntity(79U);
    msg.value = 209U;

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
    msg.setTimeStamp(0.571447110955408);
    msg.setSource(51971U);
    msg.setSourceEntity(150U);
    msg.setDestination(57403U);
    msg.setDestinationEntity(118U);
    msg.value = 220U;

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
    msg.setTimeStamp(0.08759661116338124);
    msg.setSource(36344U);
    msg.setSourceEntity(215U);
    msg.setDestination(44000U);
    msg.setDestinationEntity(223U);
    msg.consumer.assign("ERYCSDBMMEMKJGNKWJPQAEXQMCBTETTBDPTGUZXREYCCZGRKUCTJORALRWJOITZWJILPXHIVQOKRYEYAEYAOHXTUJAXSSIYDDKMJVSCNFUFRKLVDGDSGULCZNWHVUVLLNKMANNEXNHBGQPZYWCWVYHKMNNTCGDSWFCVPHHOXFZBVQIZHOGLUTHOXFSXBSPEKAIODFBIOGRLZGFEWFHYWIKAPQMMWJLFBARNPDVPMYUJQVDLIQQBR");
    msg.message_id = 16343U;

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
    msg.setTimeStamp(0.7143495844999199);
    msg.setSource(17249U);
    msg.setSourceEntity(211U);
    msg.setDestination(36299U);
    msg.setDestinationEntity(79U);
    msg.consumer.assign("UIWYFGHJJKUHCFGNRQNDOTZVHQIOBCRJANQBVSDCFAEYLMMNMFOPSNSJXBKPCYXSLJGVVBKWQROTPAWHGKQIVDOIDCUOMCPWTEHGCRGAZXAWXQPUYPEMONARBZJWMCWXBZHMKZUUNMFBCFMFUDXLKUFOEFLRTGZUZWITYSVWYKTD");
    msg.message_id = 4109U;

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
    msg.setTimeStamp(0.45934426746145884);
    msg.setSource(1536U);
    msg.setSourceEntity(160U);
    msg.setDestination(15404U);
    msg.setDestinationEntity(171U);
    msg.consumer.assign("BZHKCGRAYFPQDXPEMMZYHHONGNEUKJNTTIDGAPZVYQRKPSCWIFYIBVIUJOWUDEKBFCDJELREETWXXSIGOMGDNZVSBBJSLEOMBCJLMXODGUJGBPABVWPVYDNKKQIKJLXXMZLLTXKOQYQJSAFPUEKFQYDVZWANTHZERRTJUQKPBGNSSTHDQRINOYXMUDMVWAQFSNHRWNYAQRZRSCRUOVCMUCYC");
    msg.message_id = 13195U;

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
    msg.setTimeStamp(0.555740882793828);
    msg.setSource(17259U);
    msg.setSourceEntity(6U);
    msg.setDestination(9932U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.2456589045894365);
    msg.setSource(44595U);
    msg.setSourceEntity(4U);
    msg.setDestination(12309U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.9466580159754625);
    msg.setSource(9878U);
    msg.setSourceEntity(126U);
    msg.setDestination(53546U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.33261690378444597);
    msg.setSource(55876U);
    msg.setSourceEntity(245U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(70U);
    msg.section.assign("BRTGEMDFMBBCTRZUJTFVPGVLPTVZXWZNIRLYCSCYOZZVENPAWYQNELCSNABEIODDPTPNZSYAKBEVGIQGHLTGFJGOHAKVNQQUBDCKMSGWCYDISWOBUUORNUDWHKCBWEEUWIHXQRIFRAVNMFGIKLJRKDTKYHSZJCOWYASCKHHOELWDQJUOIFGAFFK");
    msg.param.assign("UPFQLLBNGUNTRBHSCTYJXHNHDFDBLXFUIDRFQVXXEMQJTBRPUYIBQTQTKPAFYTHMSBJDSSDNNTMNCCRBSGVZKAZGMVWZOHRZYWWHQCZWGIVLGRZGQPOAOIAKCJLUVAILCDMIJLPAAZIXOJBFDGSEN");
    msg.value.assign("KDNQUWTFJJGGAOCJYARAATHDSHAYPODXCNCUYPJJILRIOKDIRPVWVLTYNBXGZDJGWPCTXZUTXWULTZRARLIYEOWXGIDBVANCHDZPGNAFFDUQMTRXSCWBHMHEAKXRWFIV");

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
    msg.setTimeStamp(0.016982078959122293);
    msg.setSource(27129U);
    msg.setSourceEntity(252U);
    msg.setDestination(59245U);
    msg.setDestinationEntity(51U);
    msg.section.assign("VWQNGLZIEPZUJHVQZRJGOQXJHRWNKIOUXGBYJYKKCDHJLENSPXOLSHTZAEIGVTVAKHOFEFBPOURHLW");
    msg.param.assign("XAUCNJVKWLMXMQMXCCKXGCQEGDVNTNHHZNIBMXBLTDBZSRCYCZAAAWFGQKCOODFLWDLRTGLHVMFHYEAPREPFTDUK");
    msg.value.assign("YZGTBQAMBPZUXZQCFDLUFDISQBIJFPOZWOSEJNGGIFVXTOVOKKWYOFWZMKJQEKLTPMJEEJKVBDWAEMSDNHWXZAHAAQAGRSBFYWQHZIDZOHCVUNDRWBJ");

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
    msg.setTimeStamp(0.6394944143740332);
    msg.setSource(36646U);
    msg.setSourceEntity(59U);
    msg.setDestination(1563U);
    msg.setDestinationEntity(225U);
    msg.section.assign("RMTFYKZTHWKTOEALJAIHBFNULJQSSMQWYSVRBTNDQOGJQFOFPJZMHPBUKQPSIUOEKARZINWPEZAYEXCNUHVTETKJCKMZTBBTREPMQRCGDGRMOARYNGLOFL");
    msg.param.assign("LZRYGMXJVILQCHDYKIMEYLJPYSZFLERDA");
    msg.value.assign("RUANWTDJWGHIJZAUCZWHOIVJRQLCFEFCWPCXRDUGVOYAQQZWJPOLYXBZMDSPSVIHFASPHVC");

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
    msg.setTimeStamp(0.12890840447898122);
    msg.setSource(56787U);
    msg.setSourceEntity(62U);
    msg.setDestination(12227U);
    msg.setDestinationEntity(191U);
    msg.op = 180U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("PKGTDYJOCCWKBRYRERQVKURYZPXWEVZIARCTGCKYBYMMHBVNMJMAHPMWHCOWFKJIOTNDVRQSMIDNPZHMJNMVIDBZQREQXXPOFITKWDSFLYKJACUQLGVULVWLZJXSVTZITRSRJPQONISOGDGNEQQQIFCJESALEAZTYBCLMTUIQDBZZLDODETSSUCINPSHGGFCOHJRJNOZGGNLYPK");
    tmp_msg_0.param.assign("YOMPFBLZODCGJXNOGECMAUYTZCWTBEBHABGKCUSYQOBJDUAYIFKPWNDHJUENVGSUGKPJRLERJNVXEP");
    tmp_msg_0.value.assign("AGJOBSYTMRJCEFJHNRWOVXQAIKYVOEIIAALYQRXIVXSCQGBMNBYZN");
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
    msg.setTimeStamp(0.8820171343998952);
    msg.setSource(2552U);
    msg.setSourceEntity(253U);
    msg.setDestination(16279U);
    msg.setDestinationEntity(161U);
    msg.op = 168U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ZSHGNYYWLROMWYRCJBJBUGGPEWXHXFRIFDOMOGVHFQZNKWNAUCWUZIBTFVSVLNQTKFWSBHYCIEQECJZZCYLOHVZFDSENTKTOKNYSURPLHVBBKDIHGQCKLCEXTSVJLEMUYVZLWRSPAQPQHCWWSYDLMNRXBMXGZJGERRMEKPAGLZDYADIQPUBAJPDONFARIEVOFGKQXCNUHJCJKJEDIXXOVBTIUXFYPTGJTAMSAWFQDMIP");
    tmp_msg_0.param.assign("POJLGZCBOBTQLFTLFZWZGNLYDODOZWAYSGLHR");
    tmp_msg_0.value.assign("YEDNCYVIGLWZLOAVRNILUOAQODXGKNOCZVIHMSPBTSCUCELPOFCEFCMKUCJGNQTDNWVXOXXZFJJQTRQYEHGFBEFJQPKJTCBWOMADRSNZAFFIPSQQYHGHOZWIAJPBGSFGGNYPAWEJJMNSRZHVNBZXRLBDOGCDVPRRLCDYUKWVUBMETZLUAAPXFKTHSQIWVXZQKMKBVXXDWUSTUYLIYHBYIGSWPIKMMLJNDP");
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
    msg.setTimeStamp(0.8514172064711034);
    msg.setSource(5711U);
    msg.setSourceEntity(212U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(117U);
    msg.op = 162U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("NVBNHOTNIBEVRRPAKAUAEDOFLUJNNKTVEQLJJPYYCJGFKUQBCDAYZCYEZVVDQUOHLSTIXXHWKHMRCLAPQMLXDEFZJSPBWHFDGLJKPTFGKRQPSZHCWVIRSHDHZGCSRMZQUGEZJSMHDZCDMMWYJTPGEXOFCBWOVOLUITUKFPOSMKFEYONZSAVAXQDGFSWWFLCRIVSEXTKLMNNBYNALIBAAKDXJMEPBGBYIBMOQXCNYIGVUQTURXJIRTYUGWXITPZ");
    tmp_msg_0.param.assign("VIZZVQUGSRADOKPXGHIKQGRPLJFOUVGMOXKWTPIAAEJMZRFUVDKAYULMHYDR");
    tmp_msg_0.value.assign("WFQSQEUETKDOCBXEJZRHQOBXLRCSYZWAXMMTSKMXNBXEULHKPAIJSSUERWLBTZALJDJYAMPGRKHIZQWIMPIWZZIQYUHIFJAWCHLKADGNLQUIEBWYKKLUNJJVTTGPJMBRHVGFYLSOHTFVIQOMYZSMBKEVPNPERVODUCDNZCGYPNUNHWYTQCDFGUDSZOFHFOTHYXGBXOEGLVIBNYEJXQCKVFDFKPPWQTIBAOVXCCWMRJZMLVXFROACAVANG");
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
    msg.setTimeStamp(0.18769969609418502);
    msg.setSource(16011U);
    msg.setSourceEntity(97U);
    msg.setDestination(52558U);
    msg.setDestinationEntity(89U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.6294918994625566);
    msg.setSource(32712U);
    msg.setSourceEntity(156U);
    msg.setDestination(30299U);
    msg.setDestinationEntity(17U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.8010618418906791);
    msg.setSource(7097U);
    msg.setSourceEntity(95U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(94U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.6788443934680343);
    msg.setSource(59782U);
    msg.setSourceEntity(33U);
    msg.setDestination(154U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 18U;
    msg.step_number = 12U;
    msg.step.assign("SIXEHUKGCESLQMCZPLFBERYIUCXVQRMHSJEGKACPWRGYMLZTAJSQZAWLAEMPJVZNOONOQEMKDKEFUSQJIWDCDFRPDLLWXVNNDYTUZWAGAJZOOPFCTIFBYUFUMGQJUWPVVCTTVHTRSTKORJVVDHMAXFBJXNIBFXKISWCNPXRFYCEQHRNYDOJWFSJHWIKYNYUTBLP");
    msg.flags = 77U;

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
    msg.setTimeStamp(0.9713109486765841);
    msg.setSource(57599U);
    msg.setSourceEntity(232U);
    msg.setDestination(16552U);
    msg.setDestinationEntity(20U);
    msg.total_steps = 147U;
    msg.step_number = 34U;
    msg.step.assign("PXFUEEAGCUQDVDAKEHKHLGZXLCPMLSDPFCHJTMDUDGKYKSIZBZQQQSZBOZMBHLYGBRBAZDSRJFGNCLFODEFOANBOYRJ");
    msg.flags = 138U;

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
    msg.setTimeStamp(0.1335725835128675);
    msg.setSource(46609U);
    msg.setSourceEntity(49U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(25U);
    msg.total_steps = 231U;
    msg.step_number = 146U;
    msg.step.assign("BEYJLBWBFNYNFPYJRPETTKUTHXJYOLQMLHWIZSWLQDBSKIKUSRHXCECLAQKDMEJRQZQOQQDD");
    msg.flags = 183U;

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
    msg.setTimeStamp(0.52825278831277);
    msg.setSource(42324U);
    msg.setSourceEntity(195U);
    msg.setDestination(38437U);
    msg.setDestinationEntity(167U);
    msg.state = 254U;
    msg.error.assign("MUPELBUCEYFJNSWNYXELEGZCTGPRMSAHTDREZSZCTHQIAQNJDQIUSAIUVHOBKAQDMEFZHXWVTKVEYXJLOHXKCRCNRSXVVBWHBMMURFJMXOWYYDHAJKNRNRYJZQLLL");

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
    msg.setTimeStamp(0.987212763689644);
    msg.setSource(55432U);
    msg.setSourceEntity(128U);
    msg.setDestination(60188U);
    msg.setDestinationEntity(5U);
    msg.state = 240U;
    msg.error.assign("USJJGCONTSRUXRYQGROI");

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
    msg.setTimeStamp(0.43798114500053054);
    msg.setSource(41792U);
    msg.setSourceEntity(78U);
    msg.setDestination(12488U);
    msg.setDestinationEntity(70U);
    msg.state = 225U;
    msg.error.assign("LXBQMIWFELACXUHBKNMLXDTGOGJHRDWAZQZUFJPEMTFAEOQCZURBNKFXSVAZVYAZSYJWRKEEPYWNGQHLTFSXDZUJYQLGLOPVBTLFOKKJFSQPIBCWLUDHTVOEQHMCTUNGPWJTOJPOECABVMSYZAZUYIURGWXA");

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
    msg.setTimeStamp(0.3873666248405878);
    msg.setSource(39587U);
    msg.setSourceEntity(75U);
    msg.setDestination(13179U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8961197626083679;
    msg.lon = 0.168687886982388;
    msg.height = 0.7611276152643736;
    msg.x = 0.17610414804487717;
    msg.y = 0.34388838846348;
    msg.z = 0.5425331250654747;
    msg.phi = 0.2922166997677563;
    msg.theta = 0.45664072417177026;
    msg.psi = 0.020047646453327905;
    msg.u = 0.6620179687974416;
    msg.v = 0.7306024187412907;
    msg.w = 0.3571312719609674;
    msg.p = 0.09922243543304987;
    msg.q = 0.7319790198570666;
    msg.r = 0.41750435974025;
    msg.svx = 0.45039356109990736;
    msg.svy = 0.7407625100349817;
    msg.svz = 0.9493109117413571;

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
    msg.setTimeStamp(0.4784617355502516);
    msg.setSource(38945U);
    msg.setSourceEntity(9U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.7176672085760355;
    msg.lon = 0.2889649374246924;
    msg.height = 0.3031351967156226;
    msg.x = 0.6638887676269126;
    msg.y = 0.3627056900741178;
    msg.z = 0.7591704954429823;
    msg.phi = 0.09545968481941591;
    msg.theta = 0.8639099639998752;
    msg.psi = 0.5549120273614159;
    msg.u = 0.9568867401507599;
    msg.v = 0.26904140025845513;
    msg.w = 0.92887286952626;
    msg.p = 0.3645219786391902;
    msg.q = 0.6041205374646283;
    msg.r = 0.2492615430894266;
    msg.svx = 0.4959794794262311;
    msg.svy = 0.26864435340387405;
    msg.svz = 0.35717387284613145;

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
    msg.setTimeStamp(0.10560933146051543);
    msg.setSource(63964U);
    msg.setSourceEntity(254U);
    msg.setDestination(5245U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.3532476108722906;
    msg.lon = 0.1952580118648347;
    msg.height = 0.6914979690032097;
    msg.x = 0.5345251187195825;
    msg.y = 0.9228858379535203;
    msg.z = 0.6896212005001815;
    msg.phi = 0.6885717171801061;
    msg.theta = 0.9091838618472399;
    msg.psi = 0.3537671298558982;
    msg.u = 0.5976871038660914;
    msg.v = 0.11796744110184454;
    msg.w = 0.5533800373730803;
    msg.p = 0.743198681990164;
    msg.q = 0.10915828116064874;
    msg.r = 0.4839435583051016;
    msg.svx = 0.3760780812033495;
    msg.svy = 0.9387799493428544;
    msg.svz = 0.036977970956540984;

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
    msg.setTimeStamp(0.5313122348799735);
    msg.setSource(17256U);
    msg.setSourceEntity(209U);
    msg.setDestination(19425U);
    msg.setDestinationEntity(33U);
    msg.op = 184U;
    msg.entities.assign("NKJNVLPPRLCKOSJTOCRLHJYPJBYJVRXUEZYOQLDKUGZZQXMAMCQUBHUEDVSZCPPQKMBJNDOMHMKXGAWJKMYYSN");

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
    msg.setTimeStamp(0.40269189836039476);
    msg.setSource(12514U);
    msg.setSourceEntity(49U);
    msg.setDestination(24753U);
    msg.setDestinationEntity(35U);
    msg.op = 28U;
    msg.entities.assign("OXKQDBPQFXBOZWUURROXORNQNXCDSFVLPPNXGHUTUGQTMMYKVEDOKGWPTVMHWAOANTZDHMGDZKIWIU");

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
    msg.setTimeStamp(0.7612347605470543);
    msg.setSource(63132U);
    msg.setSourceEntity(242U);
    msg.setDestination(44226U);
    msg.setDestinationEntity(178U);
    msg.op = 130U;
    msg.entities.assign("WIZFJGNCNLHPNVSTFVTWBCHYURBYDHQKZMEYPFYBVEUUFTQZDNEMSQOXIRCPTBMMSEOYEOTADYSHSNUQSLBLPBHGLVTPHPHWUWNXQIILNOGKJOILXXAXAHEWVOCKZAURAWWGORKRCSIYTPWZIFFQXDKDTHCJZYREKMKGDGAXKFZDBVMBWVCSQUJXWYGRIPGRMZOIDSUVKOSCNJJPROYBALNPEGMQEGTLBDFVCNZJJXZQLUFDHKAIMJAMVFXRUL");

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
    msg.setTimeStamp(0.1871122465994266);
    msg.setSource(9907U);
    msg.setSourceEntity(229U);
    msg.setDestination(55952U);
    msg.setDestinationEntity(206U);
    msg.type = 80U;
    msg.speed = 38618U;
    const char tmp_msg_0[] = {-22, 88, 76, 112, 28, 125, -106, -50, 114, 73, -59, 126, 108, -110, -16, -3, -17, -70, -75, -94, 95, 23, 125, 11, -107, 63, 81, 70};
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
    msg.setTimeStamp(0.6195702647255168);
    msg.setSource(21098U);
    msg.setSourceEntity(194U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(66U);
    msg.type = 228U;
    msg.speed = 36673U;
    const char tmp_msg_0[] = {-121, -70, 60, -71, 36, 24, -90, 121, -3, -1, 69, 23, 100, 67, 62, 14, -37, 114, -109, 14, -62, 49, 33, -108, -68, 103, 74, -110, 52, -122, 22, 105, -63, -110, -60, -14, 123, 71, 45, 35, 80, 83, -20, -58, 79, -24, -69, -9, 84, 62, -17, -32, 113, 98, -105, -2, 32, 21, 98, 97, -84, 53, 11, -106, 115, 118, -42, 63, -58, -116, -121, 73, 99, -1, 117, -31, -25, 44, 125, -8, 80, -42, -69, -52, -8, 37, -14, 12, 48, -38, 34, -60, -27, -55, 64, -75, -109, -115, 43, -89, 112, -48, 122, 46, 55, 120, 104, -90, -86, 49, 121, -86, 81, 73, 32, 73, 77, -86, 33, -100, -28, 56, -88};
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
    msg.setTimeStamp(0.330801559394145);
    msg.setSource(42346U);
    msg.setSourceEntity(247U);
    msg.setDestination(21626U);
    msg.setDestinationEntity(245U);
    msg.type = 239U;
    msg.speed = 4137U;
    const char tmp_msg_0[] = {-79, -52, 84, 2, 86, 42, 9, 34, 91, -27, -48, -50, -48, 57, 26, 56, -105, -1, -92, 101, -81, -26, 118, 78, -29, 40, -10, 66, -126, -94, -82, -80, -87, -37, 8, -53, -43, -63, -28, -121, -122, -109, -33, 1, -110, 93, 6, -44, -12, 9, -43, 100, 124, 111, 23, -16, 84, -54, 32, 112, 25, -54, 84, 122, -113, 69, -72, 28, 41, 54, 38, -1, 16, -46, -53, 13, -87, -33, -58, 7, 78, 74, -18, -122, 76, -96, -13, -21, -73, -32, -97, -34, 62, 2, 87, 24, -87};
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
    msg.setTimeStamp(0.6240905260024788);
    msg.setSource(3281U);
    msg.setSourceEntity(251U);
    msg.setDestination(8052U);
    msg.setDestinationEntity(137U);
    msg.available = 3745339567U;
    msg.value = 151U;

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
    msg.setTimeStamp(0.050833979056830736);
    msg.setSource(8549U);
    msg.setSourceEntity(118U);
    msg.setDestination(48387U);
    msg.setDestinationEntity(90U);
    msg.available = 381778075U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.23488912891119296);
    msg.setSource(26501U);
    msg.setSourceEntity(192U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(177U);
    msg.available = 3661747425U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.6316164288115832);
    msg.setSource(58115U);
    msg.setSourceEntity(200U);
    msg.setDestination(39400U);
    msg.setDestinationEntity(99U);
    msg.op = 65U;
    msg.snapshot.assign("DRQLBRDEUPSXTVLUWHVIFCVNZAMBVGNUQQVOKXGNAY");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("LKFAVIYUUXRDGALJQDHFBFQKJDWBTALGPOMFZYAMDGRHJYPEANEJODIFJQJMXQBYZUHHIABINCCWGSPBSRQATXXJOLZMPNGQTWMYHXRWHXLKZOWPKLAPXKEFJLBGYFKNBSTSCRKDDQVLRWNJTFOOUOZVIECXRQNHBCBPAVGVXTQGEUMOVDPT");
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
    msg.setTimeStamp(0.8284660668694503);
    msg.setSource(2748U);
    msg.setSourceEntity(66U);
    msg.setDestination(46899U);
    msg.setDestinationEntity(113U);
    msg.op = 121U;
    msg.snapshot.assign("KMWXDRJULSYQBEWWMUANUKIJFGKZMLTLRQIVBGHDDAQZZFRBNBVTKXYVSXIUKVBYITIABSZIECEVOPANXYQXKMPAEUWGPGPBNOTJEXQSOEKHCGSHVTDRAEMWKYBYSVLUMLPCWVJYHJDQPQXQFUIGDLAKRQTGSOLYFVMDCAGRNUFLXWVNZKRSMJZQXWAEPUGHMASOPJCOBJEIFCMOWCZFHRZLPPHNNCDHENTGDT");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6505254420945272;
    tmp_msg_0.lon = 0.08103967966298076;
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
    msg.setTimeStamp(0.4406773540223071);
    msg.setSource(29440U);
    msg.setSourceEntity(18U);
    msg.setDestination(49720U);
    msg.setDestinationEntity(247U);
    msg.op = 215U;
    msg.snapshot.assign("NQWRIAXRMVQFUBRVEPGLWMTZVQYTDFZRRXSGNOFECGKFNDWCCTHBDQUTWURHUUXBBUXXEVXOAJSFKIKLOXZNROOINHIPLPDNQPETWAEIKJJYSKDWXAPGJLRDLBZNOJZGPMPNWQ");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.42325725344331055;
    tmp_msg_0.lon = 0.26062228516878283;
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
    msg.setTimeStamp(0.3787289026155023);
    msg.setSource(56262U);
    msg.setSourceEntity(39U);
    msg.setDestination(44991U);
    msg.setDestinationEntity(62U);
    msg.op = 19U;
    msg.name.assign("YJIQWZOHDWIXFDOLMUPWHUSRMIYDRHMICNPJEGDUXIEYEKAHDVKIAGRRIPJTFUYCDGOXUQGTTAFNCORIJTLZFCPOUZCJMINVCYNMVSVOSKTEWGQXBQVZBJOXFYOESHLISRUKUTMMSXTPEHATUELYRNFPKDMCBSKZBGUPCRXLTHBXJJPKAVAONZDHQFMZANLLPGWWAGWZYCAXWBPVFBDQHQYN");

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
    msg.setTimeStamp(0.31136451144947475);
    msg.setSource(1183U);
    msg.setSourceEntity(123U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(74U);
    msg.op = 70U;
    msg.name.assign("HUJJUWQIDBWTYTSKMNNEPQMFMZYAIJOGLFFHCHSIELEEVYXXJGMIFHFWCCRGZQJGDQFJJKRKMDSYMHONJAUVTDURAPVSSFYAHXNHXWWLYBOCKLOIBYXNXSLXDQGTIJETSNYLKMEKVCRZYKFVQCGFAGZAAKBBZLUCURIVZHXQZUSBVVEPPNDSVBDC");

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
    msg.setTimeStamp(0.2370235838683672);
    msg.setSource(23455U);
    msg.setSourceEntity(77U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(16U);
    msg.op = 112U;
    msg.name.assign("SKTDSIKZXVWQRAGGBCJJUIUGQRMXNTDETOGVNHVKLRDXKYUWGPIARCGFENAQCQKXLLDOKTBFQUXVQWDSAESNAINZHRYUDYCAMYBIURPOCPDPWOPJWBJPSLOLBMWSMLMZHUFUVDXECQVOQLBPXGDEJYORXFJEJHTUCRJZHBKMWJZQVEVCFYKAMNWSLLCZIKNYUBJTDPHXZBQYWFYHAGBTZOFEZTMXFPOZHITATFWMICISOPSESMVAKGENYL");

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
    msg.setTimeStamp(0.2482036824999625);
    msg.setSource(58714U);
    msg.setSourceEntity(44U);
    msg.setDestination(57517U);
    msg.setDestinationEntity(94U);
    msg.type = 202U;
    msg.htime = 0.3106872629520576;
    msg.context.assign("HRJHRLASUPIHDGZDDVSAKICWDBYHTDJXCCNYNPOMLPQNLGVHSECFHVLFKMIESPRNZEFDGGMUFCQCAUFLMKGTKARYSZOWXUIYDIVTEVRPSMCZYTLXUIIQXNBZJHNGNOH");
    msg.text.assign("AYOWCBPGXDYHPUDKQYCQMJFXTQZWRGSHGKOOBUEEWIOGPJFEOL");

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
    msg.setTimeStamp(0.29556087857699964);
    msg.setSource(10676U);
    msg.setSourceEntity(237U);
    msg.setDestination(14832U);
    msg.setDestinationEntity(60U);
    msg.type = 204U;
    msg.htime = 0.2767663093547701;
    msg.context.assign("UISFHAQYARYRZKGQHBPOVLQB");
    msg.text.assign("UYBLUICGMXVPEIGQRODJIFJCDSKBYORAQRCJUDYTVJIQBQKLVKKFRSBTGGTWNFMHMNPERLJZQFNYVWPEAHDJMBJNXVDUDCMFHXSGILHIZZRWFCGFASY");

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
    msg.setTimeStamp(0.3219016759611951);
    msg.setSource(57356U);
    msg.setSourceEntity(131U);
    msg.setDestination(60760U);
    msg.setDestinationEntity(142U);
    msg.type = 105U;
    msg.htime = 0.9652538640220896;
    msg.context.assign("VWLXMIZQJKALWTELNYOYAUYUHBFANBUEJFCCPXODSCODIEZHGGAUNXGTZTLRFEETQBZDVMEQBFKPWATHZLSAEAKSMOJZUPRBBXOGYNJQLJCGYRNI");
    msg.text.assign("ZFNZJJANBUDZESKNLBMEUAQWFMWPOFTSHPTCOVALSHIVPFNCTDWAYLIKSTDUNKFURSPXNTAPQNFDEBOXZHFVQL");

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
    msg.setTimeStamp(0.463887229524093);
    msg.setSource(32090U);
    msg.setSourceEntity(43U);
    msg.setDestination(5981U);
    msg.setDestinationEntity(91U);
    msg.command = 24U;
    msg.htime = 0.9905126198404057;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 54U;
    tmp_msg_0.htime = 0.40984896609923394;
    tmp_msg_0.context.assign("YXTDUQYFTSSMGEIRNXNFFJCKRNAXIJKKYQOAGKENZHTHZNFDCZMTBRIVYDHMIJEFBRWCHOPCNAJMNMHZSAHBEBCXYJASKYFCOIOLWOZSGXKVPJRKVSUOTLGRAEFYZLLRCSBK");
    tmp_msg_0.text.assign("OOWIWIXVEZPOCNLSLTCDKHGLVZJKMAQBMTLIXYUIJQHDQBCCBJYGOKLAAWBLRQGMVKZGNVQJWVFSJVYPPZNNESTJYOTAULIANFJTASYSMGMBDIURWCWROETVMNEUKRMXVYUTVYCXGHEPGBKUFCWDCRBIQDSFGUMYHJDAMHEKBZKMRHNHEFWPUIDGPYOXFOBPFAXRHXXQTQNZEHRUJPFIZWFPLBC");
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
    msg.setTimeStamp(0.03377771985057143);
    msg.setSource(20131U);
    msg.setSourceEntity(105U);
    msg.setDestination(43912U);
    msg.setDestinationEntity(118U);
    msg.command = 43U;
    msg.htime = 0.5282329324334785;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 42U;
    tmp_msg_0.htime = 0.7501055367617367;
    tmp_msg_0.context.assign("QSZLXVIAICMPEXNZXYNDBYOIMJJZRDURAJNJSQARVM");
    tmp_msg_0.text.assign("YRFHAMTSQCOLBFPXARMBLXEDSOTECQXNTGHPKJLNMUIDPOPKRZCPUMECQADRNRYAZGDKVRHXQVPVVVXBUWBBJSYPGSPOBLMS");
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
    msg.setTimeStamp(0.928045689643675);
    msg.setSource(62092U);
    msg.setSourceEntity(153U);
    msg.setDestination(41801U);
    msg.setDestinationEntity(69U);
    msg.command = 149U;
    msg.htime = 0.7599372983720164;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.7076816961537787;
    tmp_msg_0.context.assign("CUYGRFXPXJHJQPFYEBTQCSABGJCGMIRMABV");
    tmp_msg_0.text.assign("SVEHWWSWNLGIUAVEZPNRMRUHWQTXHKICJITADSTGPYDYJZHSBZGYXBAJQXVSWJBFJCDXMQVKUPIJENKBL");
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
    msg.setTimeStamp(0.004097157225098513);
    msg.setSource(25444U);
    msg.setSourceEntity(202U);
    msg.setDestination(50956U);
    msg.setDestinationEntity(157U);
    msg.op = 48U;
    msg.file.assign("ZLZFFWMAIHOPJIOKYORDYLANEMTECSIGMBEZYGRGQJHHUXKZSQUPZCUPTORYBVNZLIYAVSKRIUNBSRYHTGCTAQXNOKMQPCQSJAFUJHHCRFGOBPZNEWHBLJILVVBCVRXEQRXQODMXENMZWN");

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
    msg.setTimeStamp(0.5530516524911789);
    msg.setSource(149U);
    msg.setSourceEntity(138U);
    msg.setDestination(50261U);
    msg.setDestinationEntity(7U);
    msg.op = 47U;
    msg.file.assign("NRDIJMCVHELSJFUVUIBPSQTQXIMRQASITUHHARUIUMDJYRXFDGQFWZKTIINVTVFSAYSQGJNLKPDTZGDAWEZUGIGHNCEFPWBSUAUEFPROAWFRPVWBMOSTJJMOWVHUAYRPFTRZNDLYCQDZQBZLCSLZEGBYJDQBKMTDBGKZPNXPVYLBYLYJKQHAOOXSXWJKYKC");

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
    msg.setTimeStamp(0.9995157551169279);
    msg.setSource(3256U);
    msg.setSourceEntity(143U);
    msg.setDestination(14346U);
    msg.setDestinationEntity(14U);
    msg.op = 91U;
    msg.file.assign("FQIXMBWQZPVPHPA");

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
    msg.setTimeStamp(0.6846620647917336);
    msg.setSource(54659U);
    msg.setSourceEntity(149U);
    msg.setDestination(33320U);
    msg.setDestinationEntity(100U);
    msg.op = 71U;
    msg.clock = 0.3144445007737755;
    msg.tz = 98;

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
    msg.setTimeStamp(0.7307235896045055);
    msg.setSource(28448U);
    msg.setSourceEntity(30U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(246U);
    msg.op = 114U;
    msg.clock = 0.3631139945177396;
    msg.tz = 73;

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
    msg.setTimeStamp(0.06522542861633673);
    msg.setSource(32729U);
    msg.setSourceEntity(236U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(189U);
    msg.op = 102U;
    msg.clock = 0.6416392910684416;
    msg.tz = 63;

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
    msg.setTimeStamp(0.4185573720688923);
    msg.setSource(51019U);
    msg.setSourceEntity(24U);
    msg.setDestination(46591U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.2889900304294346);
    msg.setSource(19052U);
    msg.setSourceEntity(58U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.8170244338872744);
    msg.setSource(60073U);
    msg.setSourceEntity(216U);
    msg.setDestination(31882U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.8697940588238571);
    msg.setSource(21876U);
    msg.setSourceEntity(65U);
    msg.setDestination(6404U);
    msg.setDestinationEntity(45U);
    msg.sys_name.assign("CKSUOWAMDQVQPWFNGEEUSWYKOEPI");
    msg.sys_type = 42U;
    msg.owner = 20528U;
    msg.lat = 0.23973971555633344;
    msg.lon = 0.23820134726021525;
    msg.height = 0.9193630338115792;
    msg.services.assign("ECKIHFHEZGGLMHJNLADTVGAIBNHPVGYCGBAKCILFNXKKBOHZSWRDOKUESPTYYJQNLWOGYKSGIEPPVCTHPTXRBBLFKUCDQZVKXUYFYOUENZKXLWTZBPVRRSJPAWWWVFAQJHMFDTANBSEBXMSWEAMTNNUXZNSGSOQEXMORYJPDCRUFOXRRLHYEYJIVIVZWDSJCMRUEIMHDAQMBHPBGCCO");

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
    msg.setTimeStamp(0.290467955997719);
    msg.setSource(7748U);
    msg.setSourceEntity(83U);
    msg.setDestination(272U);
    msg.setDestinationEntity(138U);
    msg.sys_name.assign("LYRGNQTRSIZGJKDRWZKFCPBMGSPFKEEVHOAYHVZARYZKIIWRXHWDXNHEBPNSAIKHARDQTOCBXJHLXGVASQJSOJIBZOMSUWNSFCJYIMSPLKJXSXALOTQTJYBENLNRLQDBOWCFUVOPVLAMUGQLDEGIUDJZACL");
    msg.sys_type = 49U;
    msg.owner = 44618U;
    msg.lat = 0.2778298804092282;
    msg.lon = 0.7851221284489797;
    msg.height = 0.5696361053831838;
    msg.services.assign("LZDQWGXYIUHHCQNBCAEGTMBBXZQOUGCWVSMPEPKOVAOFNJYMEDMKDAITQTIGYEDGNALTXURQWULUGGHRLTRFSPFYXRAPVANTHRI");

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
    msg.setTimeStamp(0.9301445301946262);
    msg.setSource(19362U);
    msg.setSourceEntity(136U);
    msg.setDestination(49330U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("LVLFNNAPXQCUCILBBDBADKRPVHMBIKAAIOGMQDIWWSCICKUCJUPLFRDTXADEZRZLJMQBOYBNGHUYHUEQYGXFTWVQTRRYSXKUGYOQXPLEHCNQXHBKQKZOUOYQXVJZMSWSJZFTYNZDHRKAZVEHJEGTGENZPWOJPSETWMOPIPRNWLLXOMIUAUSZFXMAFVSHVFMRLYLI");
    msg.sys_type = 118U;
    msg.owner = 3126U;
    msg.lat = 0.4621131806629183;
    msg.lon = 0.674575155502352;
    msg.height = 0.16906816050648588;
    msg.services.assign("HWXVAFITCFXMJWBQUKVUTVNSEOMANXSGVWMBCQFVBLYHKJONPIWTSYAAEAFDDURBHOLTOSESYGDJQIBMIPHLEUKGCRCVKXISOEFSKQZLLJELOMBZIJQWULJPOUALVTYNTTPNTNDWDXRRQQRGYSJFNEHABRYFVIIRQPZIQWGQFDKJDASNZOZK");

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
    msg.setTimeStamp(0.4797047415416714);
    msg.setSource(6773U);
    msg.setSourceEntity(24U);
    msg.setDestination(52352U);
    msg.setDestinationEntity(50U);
    msg.service.assign("GYZEPTCGWCOXKOQBLTIMTHTVNNLULOUYPOTFLLRCRPSCGKQXSGVKJLFHAJRMOQXFQFGYPQJHMPTMVZTDQQILHAXFIUFUYFLMOUSCNBMWDXTYCJBIIBDARJTOKTGWXPPMMBQEVYEZUURSBMFHREHVNBWWBIUZXZGRJONIUWGAKEPSCJKXCVDUBIQWNDFGSZJYZHGRLAZDVKHWSNEAFZXNVXIERWVMBJ");
    msg.service_type = 158U;

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
    msg.setTimeStamp(0.5793643077674332);
    msg.setSource(28389U);
    msg.setSourceEntity(219U);
    msg.setDestination(7496U);
    msg.setDestinationEntity(128U);
    msg.service.assign("IVETQUOTQJVPBNKSFWEAXSHSQETRRLDNENBRDHJXCSSZPWPDKCGUUZM");
    msg.service_type = 205U;

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
    msg.setTimeStamp(0.4715422878070279);
    msg.setSource(51089U);
    msg.setSourceEntity(154U);
    msg.setDestination(15637U);
    msg.setDestinationEntity(211U);
    msg.service.assign("FOJDCOUISZLXTFFUSEDPKPAWKWGUBAARYMCPZLLICWQCGYMHOQCBOUZFEBCGSNQYVXHOGDDLJNVMOTXSJUNLQZRONNCVYQVUJPPNBEFYSLTARIMGHFZPDJZRKKPYYDZNJXMYNXBBXSCKZMIJATBHSCLVYDXKUXPF");
    msg.service_type = 239U;

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
    msg.setTimeStamp(0.8764472970301459);
    msg.setSource(29506U);
    msg.setSourceEntity(149U);
    msg.setDestination(2153U);
    msg.setDestinationEntity(199U);
    msg.value = 0.9678453841867031;

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
    msg.setTimeStamp(0.9163614823026847);
    msg.setSource(46350U);
    msg.setSourceEntity(227U);
    msg.setDestination(18020U);
    msg.setDestinationEntity(76U);
    msg.value = 0.10196460077240665;

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
    msg.setTimeStamp(0.6099250291314852);
    msg.setSource(7751U);
    msg.setSourceEntity(203U);
    msg.setDestination(10560U);
    msg.setDestinationEntity(4U);
    msg.value = 0.8363191668448591;

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
    msg.setTimeStamp(0.42479505085384395);
    msg.setSource(49263U);
    msg.setSourceEntity(117U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(24U);
    msg.value = 0.9316749569898648;

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
    msg.setTimeStamp(0.390589097955757);
    msg.setSource(64480U);
    msg.setSourceEntity(164U);
    msg.setDestination(63946U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8667141406521548;

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
    msg.setTimeStamp(0.2807180665454907);
    msg.setSource(51862U);
    msg.setSourceEntity(166U);
    msg.setDestination(52502U);
    msg.setDestinationEntity(179U);
    msg.value = 0.29246480638914096;

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
    msg.setTimeStamp(0.17704613758019117);
    msg.setSource(53065U);
    msg.setSourceEntity(229U);
    msg.setDestination(30254U);
    msg.setDestinationEntity(186U);
    msg.value = 0.07542681898417003;

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
    msg.setTimeStamp(0.27876909229804614);
    msg.setSource(2900U);
    msg.setSourceEntity(5U);
    msg.setDestination(570U);
    msg.setDestinationEntity(49U);
    msg.value = 0.5577300720246403;

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
    msg.setTimeStamp(0.75693278038087);
    msg.setSource(8059U);
    msg.setSourceEntity(80U);
    msg.setDestination(29980U);
    msg.setDestinationEntity(235U);
    msg.value = 0.6936201587665078;

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
    msg.setTimeStamp(0.5769546506837786);
    msg.setSource(50555U);
    msg.setSourceEntity(245U);
    msg.setDestination(61448U);
    msg.setDestinationEntity(230U);
    msg.number.assign("APVOXWDSGXGIWQLHHCWAEHXBTOANHDNYMEUHWCDKNEXUUJIBZZIVPZMRWEUNVTSGKYGLEJJPJHQIFYNMJRDVCACROVSHRIYLKBEUYVVFKWFTNCVDMTESBCDZUFTTMCOVIIHXAJXKZZKARQTJPBNZYGAQQYN");
    msg.timeout = 39250U;
    msg.contents.assign("XYGTJMGJTAPOFXLYIQRQSKADYAWGQRQCYMMHUQUBCMTNZBYOVWQIFUZYCLQHFVULVKQVNDOPRDQBWMFNAXEDFNYPJSXWYDWJBHLWMCZP");

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
    msg.setTimeStamp(0.8658340590965689);
    msg.setSource(9925U);
    msg.setSourceEntity(164U);
    msg.setDestination(42339U);
    msg.setDestinationEntity(194U);
    msg.number.assign("DHEAJYDMGAMPMRVZQOQVFIZBNXWNPIKCXGQDXYYTWUZQVEINQPMIIOINUPFAPLXLDWNIBIKDFWGJDYJHXUCANTJRCPZLTJYLYSRZTEAWXULOQKQGBWNLYJPHBATOTNRZCPCSRQCHMEFHEHDNFLVGIVWSRKMRVJCJFGEOVSHNZBRSHKZJDPFWEVUFGFOTIQKEUAAODGOAZVSKXYEAKTOMFUGYYS");
    msg.timeout = 25331U;
    msg.contents.assign("VWDJTJGGCGBWHRFFNWMUXWJIFZJLMGOVCSFKBTTWHZQMHOKRRZEFUDOKAIVBZSIZPDNMQRMCEPOEZDNQOIAJDSMAHGRAUXVN");

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
    msg.setTimeStamp(0.1567040726640676);
    msg.setSource(21926U);
    msg.setSourceEntity(214U);
    msg.setDestination(24249U);
    msg.setDestinationEntity(16U);
    msg.number.assign("SGMYFMQJQLKYABZKJWWKWLRGLIQZQUVVUEUCOMHYJBLDBRXERJVVSEKTGGPOJRIPNDFZXCOBIZXTWYALRSNRSRTBPCDOWMSGQFKYEGIMEVTBVHAQAHFOHLECAAUEXJYMHGMWXDMJAHSORXPQXDBTIWOVJSBZAUTPLYKPCRLUNCBCNDPGMQZTYXKFQUUYEJAIUNHZTSMJSIRPFICNVFEVNKNIKDQFBNKAWCVCZUGDWNEDGOL");
    msg.timeout = 65412U;
    msg.contents.assign("GAHTCIFPOVUUBDRSFQFJYFQZNEIOGYJOCCMXAYATQGTAFCQOBUIDGPMWLHICDGRRYMONFEWTAJOJKHLJTCLIPTHHZYPXDSZCNXUTKRXETUIKLCMYBZBSMXXXMQVTGPUJWNVKHQBIWLEKBWPZFVYISSCSFFESDZWAXNTRQVMYJVONDSAKLDEHOENKAZUVRKXNWCNSHMJKVADDGDMHQVJRERZMRPULJOWINIPBQLERFGAG");

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
    msg.setTimeStamp(0.8256790179440636);
    msg.setSource(12051U);
    msg.setSourceEntity(123U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(192U);
    msg.id = 215U;
    msg.range = 0.1695303180200809;

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
    msg.setTimeStamp(0.577610910384868);
    msg.setSource(38096U);
    msg.setSourceEntity(214U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(105U);
    msg.id = 159U;
    msg.range = 0.6032738024577013;

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
    msg.setTimeStamp(0.952486761993834);
    msg.setSource(32800U);
    msg.setSourceEntity(162U);
    msg.setDestination(18872U);
    msg.setDestinationEntity(190U);
    msg.id = 70U;
    msg.range = 0.9689474499272714;

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
    msg.setTimeStamp(0.3642087334102747);
    msg.setSource(31526U);
    msg.setSourceEntity(125U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(58U);
    msg.tx = 229U;
    msg.channel = 221U;
    msg.timer = 40900U;

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
    msg.setTimeStamp(0.2886669835832206);
    msg.setSource(45600U);
    msg.setSourceEntity(128U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(100U);
    msg.tx = 107U;
    msg.channel = 152U;
    msg.timer = 42977U;

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
    msg.setTimeStamp(0.45327002230632774);
    msg.setSource(14279U);
    msg.setSourceEntity(175U);
    msg.setDestination(59U);
    msg.setDestinationEntity(246U);
    msg.tx = 254U;
    msg.channel = 168U;
    msg.timer = 61498U;

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
    msg.setTimeStamp(0.7824462947717592);
    msg.setSource(33971U);
    msg.setSourceEntity(99U);
    msg.setDestination(51099U);
    msg.setDestinationEntity(83U);
    msg.beacon.assign("VQNPRBKXSTERJDHTRDKUFCZAEFEXOQMBSKLUYROBIHFUKMLVFPL");
    msg.lat = 0.1897562810050487;
    msg.lon = 0.37310238618201996;
    msg.depth = 0.24668415779324127;
    msg.query_channel = 42U;
    msg.reply_channel = 89U;
    msg.transponder_delay = 114U;

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
    msg.setTimeStamp(0.6242581425773619);
    msg.setSource(53762U);
    msg.setSourceEntity(81U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(164U);
    msg.beacon.assign("ERGJSXDVIMZAKQRXCYPJLHCTPBSLIGLWZJUYCGHWZOWDVAFDFPUULNTKOYWAQFSHEUELJKHHLWMANUSUYNPUVMAYOSYJLVIVGDLRXIUVBJBDOJVRGPVHEQEENQIKTQNWNUTSQMSZNNZYZZQESOTMJIGVOWTTBKBKYWLQREIPQBIFC");
    msg.lat = 0.5304592731416793;
    msg.lon = 0.7426623798434497;
    msg.depth = 0.058100195174474845;
    msg.query_channel = 196U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 156U;

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
    msg.setTimeStamp(0.9594970763906232);
    msg.setSource(15239U);
    msg.setSourceEntity(31U);
    msg.setDestination(39120U);
    msg.setDestinationEntity(223U);
    msg.beacon.assign("MDJRBAGYXVHTFKRWNIUWYZCOWFEYHUWBRKTGJJESDQVETXKXSVUDZABNDZQYTFTPGUSOPHFYWCRMPXTVOGCYGNPDBDMZOXGCCEAWPBSIRPJOZBYPOBLAFSHXQVKMXQIVINBZUDLPKQGMHIOTDWCIALNSQRLTJAKRBVLLVEMYQECKNFLCCUYWKQAERKVQEJRDPOIKTLLD");
    msg.lat = 0.1861186726311227;
    msg.lon = 0.309022053145525;
    msg.depth = 0.6539090215946133;
    msg.query_channel = 153U;
    msg.reply_channel = 67U;
    msg.transponder_delay = 195U;

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
    msg.setTimeStamp(0.9789514846735204);
    msg.setSource(33132U);
    msg.setSourceEntity(217U);
    msg.setDestination(16123U);
    msg.setDestinationEntity(196U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.7215006227154349);
    msg.setSource(46929U);
    msg.setSourceEntity(235U);
    msg.setDestination(50839U);
    msg.setDestinationEntity(233U);
    msg.op = 157U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NEGEGVWGGUHCYDCKLREXXQZVDFDVKFETNIIRSJOG");
    tmp_msg_0.lat = 0.23673760303951408;
    tmp_msg_0.lon = 0.3431352877519409;
    tmp_msg_0.depth = 0.5364855997421927;
    tmp_msg_0.query_channel = 49U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 163U;
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
    msg.setTimeStamp(0.5449325646809328);
    msg.setSource(24240U);
    msg.setSourceEntity(128U);
    msg.setDestination(56870U);
    msg.setDestinationEntity(126U);
    msg.op = 249U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VMDUQNQJMQTPGXEPFKEXIFRWYWSXVCMYAHULBXGYMYMJKAAWBYCELQLWHBMYCVNHZXDUTJUYHFDLCIZQEZMCSFCLAVDQBIXUGJQAHZODNVXNJUBTOSNTBHGCRWUT");
    tmp_msg_0.lat = 0.0567457010651673;
    tmp_msg_0.lon = 0.7936648017022381;
    tmp_msg_0.depth = 0.8353625419959924;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 138U;
    tmp_msg_0.transponder_delay = 19U;
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
    msg.setTimeStamp(0.03395179513015001);
    msg.setSource(61799U);
    msg.setSourceEntity(54U);
    msg.setDestination(58503U);
    msg.setDestinationEntity(196U);
    msg.address = 109U;

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
    msg.setTimeStamp(0.09932352879272999);
    msg.setSource(3734U);
    msg.setSourceEntity(48U);
    msg.setDestination(32153U);
    msg.setDestinationEntity(111U);
    msg.address = 103U;

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
    msg.setTimeStamp(0.6278539153110176);
    msg.setSource(50617U);
    msg.setSourceEntity(217U);
    msg.setDestination(5309U);
    msg.setDestinationEntity(28U);
    msg.address = 98U;

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
    msg.setTimeStamp(0.07426051282235147);
    msg.setSource(18163U);
    msg.setSourceEntity(124U);
    msg.setDestination(20293U);
    msg.setDestinationEntity(106U);
    msg.address = 139U;
    msg.status = 67U;
    msg.range = 0.37595483282535347;

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
    msg.setTimeStamp(0.7395275632111602);
    msg.setSource(26622U);
    msg.setSourceEntity(188U);
    msg.setDestination(12113U);
    msg.setDestinationEntity(161U);
    msg.address = 106U;
    msg.status = 43U;
    msg.range = 0.01702827058351808;

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
    msg.setTimeStamp(0.6619135576797889);
    msg.setSource(46990U);
    msg.setSourceEntity(50U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(143U);
    msg.address = 253U;
    msg.status = 58U;
    msg.range = 0.6249155166026326;

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
    msg.setTimeStamp(0.27487198614435093);
    msg.setSource(46341U);
    msg.setSourceEntity(189U);
    msg.setDestination(31297U);
    msg.setDestinationEntity(236U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.id = 231U;
    tmp_msg_0.label.assign("YWRDXWRDXCPHTELIXGDOXSQSHZMJPOZTGEKDCSHUHVJSTDROMMZXNKBABZJQORQTHTNKULSAIFVRIVBPRZXMZGEEOFAPYELSRXYWCCUTV");
    tmp_msg_0.state = 47U;
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
    msg.setTimeStamp(0.017184552908332207);
    msg.setSource(29670U);
    msg.setSourceEntity(201U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(169U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7598780391163753;
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
    msg.setTimeStamp(0.24001212606474343);
    msg.setSource(24410U);
    msg.setSourceEntity(77U);
    msg.setDestination(115U);
    msg.setDestinationEntity(99U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 197U;
    tmp_msg_0.eta = 3803U;
    tmp_msg_0.info.assign("JKWWUGWEUXPPDSDOWLQZQMFBYRQRHBUXNTUZZNZKYBDCJIFGMZHDAGVSJYPERKVOMVCUAJQVSIRDKZPPRXWLCOPIFRLQYIKJVXQC");
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
    msg.setTimeStamp(0.96239676706063);
    msg.setSource(50001U);
    msg.setSourceEntity(191U);
    msg.setDestination(6817U);
    msg.setDestinationEntity(232U);
    msg.enable = 86U;

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
    msg.setTimeStamp(0.13448497181426167);
    msg.setSource(6231U);
    msg.setSourceEntity(209U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(187U);
    msg.enable = 85U;

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
    msg.setTimeStamp(0.38055029940695406);
    msg.setSource(27121U);
    msg.setSourceEntity(227U);
    msg.setDestination(40665U);
    msg.setDestinationEntity(133U);
    msg.enable = 236U;

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
    msg.setTimeStamp(0.6747198642041272);
    msg.setSource(13568U);
    msg.setSourceEntity(245U);
    msg.setDestination(3062U);
    msg.setDestinationEntity(253U);
    msg.summary = 30U;
    msg.level = 235U;

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
    msg.setTimeStamp(0.36380105693212483);
    msg.setSource(38094U);
    msg.setSourceEntity(121U);
    msg.setDestination(27091U);
    msg.setDestinationEntity(69U);
    msg.summary = 248U;
    msg.level = 54U;

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
    msg.setTimeStamp(0.642427402082891);
    msg.setSource(40398U);
    msg.setSourceEntity(131U);
    msg.setDestination(22007U);
    msg.setDestinationEntity(126U);
    msg.summary = 9U;
    msg.level = 230U;

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
    msg.setTimeStamp(0.7098810984125371);
    msg.setSource(10089U);
    msg.setSourceEntity(221U);
    msg.setDestination(20912U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.5753239854032289);
    msg.setSource(28811U);
    msg.setSourceEntity(232U);
    msg.setDestination(58881U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.04389384074282776);
    msg.setSource(43446U);
    msg.setSourceEntity(154U);
    msg.setDestination(36894U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.2846796947318303);
    msg.setSource(50025U);
    msg.setSourceEntity(179U);
    msg.setDestination(41834U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.28715645923730715);
    msg.setSource(22205U);
    msg.setSourceEntity(28U);
    msg.setDestination(12220U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.70190024510783);
    msg.setSource(42417U);
    msg.setSourceEntity(235U);
    msg.setDestination(50031U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.619482385181881);
    msg.setSource(17573U);
    msg.setSourceEntity(228U);
    msg.setDestination(25532U);
    msg.setDestinationEntity(213U);
    msg.op = 105U;
    msg.system.assign("HPYBQHELFQZGVDFBSGCVLKXSIKLDYRFCRAGTVUDHXZDIFAKSXNKBUGPENMKHUMHHIOSZCRNPPWWZPGMSCUIRJJXTUDXQYTPREOEWKAISTQVZVMURVTBOYZYJDMINEWXFXIDJGXQWOBOYVJQLJOCCTAUHYAKRIILYTENHWOBPAGWJFRKTDMZCPXKRVHLEVARCZAEQYSPMLSWNWCFABFBILANVBZNMOLCUQWFMSNUOONFKT");
    msg.range = 0.8976307468388766;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 31544U;
    tmp_msg_0.custom.assign("LMWQPTVYYIXKQVHYBOBQYPXYKGPGPODQVIQGMHHVWDFQALWMEWAVEZUXKTREEIHXZGCKDCDMUQJBZIHUSGTJOEQYAABTDAJGONYLNJFCKEPNWGEMUXHWUMCEOQNISLPVMBKPTRDLFAIRCDFLZVTLGZRABYCANISXJYVGODIOA");
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
    msg.setTimeStamp(0.042466442519420666);
    msg.setSource(39713U);
    msg.setSourceEntity(50U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(198U);
    msg.op = 147U;
    msg.system.assign("CWDSGIIXJMMBKHQCBEZWWPQPGKMGSLLZEJTWAEQOFESLFSWYJBLBKPJIBTABKWMQHLAINDHYWTGDCHNRGLHZORRYTSYKUTOAAEKP");
    msg.range = 0.876459535442681;
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("QMOKIWDPNHVZYXLWBFORCVGIELGUCHNTKUFJFHDGBTIKOHLSJOLNIYXQABVAPBHTEJTEZSDTGIRXXJFBTKUCOEBZGRFKXPUWWSHZAPFEBAAYUSICMZWPVC");
    tmp_msg_0.x = 0.7725855005550128;
    tmp_msg_0.y = 0.3778254798195788;
    tmp_msg_0.depth = 0.46092457127206155;
    tmp_msg_0.var_x = 0.8852920469970448;
    tmp_msg_0.var_y = 0.4838539247795337;
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
    msg.setTimeStamp(0.14792621484001967);
    msg.setSource(62756U);
    msg.setSourceEntity(234U);
    msg.setDestination(23746U);
    msg.setDestinationEntity(218U);
    msg.op = 151U;
    msg.system.assign("XJYKXGJLXASBJYK");
    msg.range = 0.3025109042938482;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5712205994710613;
    tmp_msg_0.lon = 0.8715681237025956;
    tmp_msg_0.height = 0.13997016836953113;
    tmp_msg_0.x = 0.170511116368255;
    tmp_msg_0.y = 0.6854878766604524;
    tmp_msg_0.z = 0.4438564018889616;
    tmp_msg_0.phi = 0.8945536443545975;
    tmp_msg_0.theta = 0.12232951121192892;
    tmp_msg_0.psi = 0.3448905226779936;
    tmp_msg_0.u = 0.6291576158688369;
    tmp_msg_0.v = 0.22175064641980957;
    tmp_msg_0.w = 0.8539457675747322;
    tmp_msg_0.p = 0.7935881448916224;
    tmp_msg_0.q = 0.30330989598150326;
    tmp_msg_0.r = 0.7244382501749025;
    tmp_msg_0.svx = 0.8870655829664521;
    tmp_msg_0.svy = 0.8769110713858026;
    tmp_msg_0.svz = 0.3426114045927693;
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
    msg.setTimeStamp(0.6133036298758191);
    msg.setSource(54899U);
    msg.setSourceEntity(253U);
    msg.setDestination(58677U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.9151080254789369);
    msg.setSource(30837U);
    msg.setSourceEntity(67U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.781015455223992);
    msg.setSource(60354U);
    msg.setSourceEntity(149U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.09429459069347745);
    msg.setSource(3408U);
    msg.setSourceEntity(189U);
    msg.setDestination(50011U);
    msg.setDestinationEntity(36U);
    msg.list.assign("FFGUQYTZZMYPPVSNWWAEGJPCMP");

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
    msg.setTimeStamp(0.14535154851525423);
    msg.setSource(55825U);
    msg.setSourceEntity(190U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(233U);
    msg.list.assign("HDUXQWKQDNJTIRBMERAHDGLZRBGMWVLDKXVFLOGVTMCUVLDGJVMHNFENACKCOWOLLJASSXTXUMEFMLOWLIOCNTCUXRZWQTLEJJMBEZPNFSZKVJNKKDIBFUGZRQDYVGWBBHKYQPGBZGXMCFFHXNDQUOASLMEHIRNWUHACUKWROFQEPWYYYCNVAQPIWYJQYJMARSJHRHTVAITIPSUVHXSTZSP");

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
    msg.setTimeStamp(0.4178396494874568);
    msg.setSource(12245U);
    msg.setSourceEntity(71U);
    msg.setDestination(24409U);
    msg.setDestinationEntity(150U);
    msg.list.assign("KTFXNSGGFK");

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
    msg.setTimeStamp(0.2147289910791632);
    msg.setSource(13559U);
    msg.setSourceEntity(42U);
    msg.setDestination(14706U);
    msg.setDestinationEntity(205U);
    msg.value = -14890;

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
    msg.setTimeStamp(0.9188778646622612);
    msg.setSource(55275U);
    msg.setSourceEntity(165U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(109U);
    msg.value = 6695;

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
    msg.setTimeStamp(0.5984846000791891);
    msg.setSource(58909U);
    msg.setSourceEntity(230U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(247U);
    msg.value = 12055;

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
    msg.setTimeStamp(0.3426973064480473);
    msg.setSource(7613U);
    msg.setSourceEntity(171U);
    msg.setDestination(18141U);
    msg.setDestinationEntity(143U);
    msg.value = 0.18436910699193454;

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
    msg.setTimeStamp(0.5457123839571172);
    msg.setSource(26293U);
    msg.setSourceEntity(96U);
    msg.setDestination(40777U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6484693678604152;

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
    msg.setTimeStamp(0.9200691347885752);
    msg.setSource(3002U);
    msg.setSourceEntity(97U);
    msg.setDestination(39972U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9381813654166449;

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
    msg.setTimeStamp(0.8656628682523518);
    msg.setSource(55512U);
    msg.setSourceEntity(30U);
    msg.setDestination(39708U);
    msg.setDestinationEntity(220U);
    msg.value = 0.377131033049233;

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
    msg.setTimeStamp(0.1912886432867832);
    msg.setSource(51232U);
    msg.setSourceEntity(150U);
    msg.setDestination(33633U);
    msg.setDestinationEntity(245U);
    msg.value = 0.13490258285808188;

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
    msg.setTimeStamp(0.02942063525505012);
    msg.setSource(56565U);
    msg.setSourceEntity(97U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5751909387997032;

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
    msg.setTimeStamp(0.06625745507803438);
    msg.setSource(28525U);
    msg.setSourceEntity(15U);
    msg.setDestination(43934U);
    msg.setDestinationEntity(40U);
    msg.validity = 64559U;
    msg.type = 40U;
    msg.utc_year = 62213U;
    msg.utc_month = 198U;
    msg.utc_day = 169U;
    msg.utc_time = 0.45015634333435506;
    msg.lat = 0.8550115805429215;
    msg.lon = 0.6589042434203628;
    msg.height = 0.29668353309675377;
    msg.satellites = 17U;
    msg.cog = 0.7525278929363917;
    msg.sog = 0.07949805957172151;
    msg.hdop = 0.5103944417957653;
    msg.vdop = 0.7829595587832858;
    msg.hacc = 0.3386223027021058;
    msg.vacc = 0.8517045109943311;

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
    msg.setTimeStamp(0.846049949690706);
    msg.setSource(30451U);
    msg.setSourceEntity(168U);
    msg.setDestination(45267U);
    msg.setDestinationEntity(12U);
    msg.validity = 39875U;
    msg.type = 215U;
    msg.utc_year = 38305U;
    msg.utc_month = 83U;
    msg.utc_day = 180U;
    msg.utc_time = 0.3422511826273751;
    msg.lat = 0.003306184358047859;
    msg.lon = 0.7636880291225209;
    msg.height = 0.08281303558208253;
    msg.satellites = 213U;
    msg.cog = 0.7027418871871078;
    msg.sog = 0.8652793470410219;
    msg.hdop = 0.20218099009089718;
    msg.vdop = 0.43309431330466586;
    msg.hacc = 0.6321367792361914;
    msg.vacc = 0.9793172950841501;

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
    msg.setTimeStamp(0.2655304581028255);
    msg.setSource(58445U);
    msg.setSourceEntity(34U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(87U);
    msg.validity = 20905U;
    msg.type = 53U;
    msg.utc_year = 6202U;
    msg.utc_month = 166U;
    msg.utc_day = 217U;
    msg.utc_time = 0.9426207156389436;
    msg.lat = 0.015228260325946597;
    msg.lon = 0.7028499972958236;
    msg.height = 0.20817653422855242;
    msg.satellites = 50U;
    msg.cog = 0.6134749835609281;
    msg.sog = 0.7074541401403992;
    msg.hdop = 0.06721351341377213;
    msg.vdop = 0.3819997587390599;
    msg.hacc = 0.7464776688071778;
    msg.vacc = 0.5603544476779524;

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
    msg.setTimeStamp(0.2184478276520827);
    msg.setSource(63653U);
    msg.setSourceEntity(14U);
    msg.setDestination(62394U);
    msg.setDestinationEntity(143U);
    msg.time = 0.2884815235537518;
    msg.phi = 0.08309738668892808;
    msg.theta = 0.2522590645194456;
    msg.psi = 0.9317817299969794;
    msg.psi_magnetic = 0.14579236557692088;

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
    msg.setTimeStamp(0.7403148719842911);
    msg.setSource(28316U);
    msg.setSourceEntity(159U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(209U);
    msg.time = 0.6457233876649369;
    msg.phi = 0.09489665742378062;
    msg.theta = 0.20880140526368351;
    msg.psi = 0.03928674166897983;
    msg.psi_magnetic = 0.35002594264030285;

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
    msg.setTimeStamp(0.46977926583759244);
    msg.setSource(56244U);
    msg.setSourceEntity(50U);
    msg.setDestination(63247U);
    msg.setDestinationEntity(171U);
    msg.time = 0.11382225697859272;
    msg.phi = 0.26792931569876643;
    msg.theta = 0.817032354474411;
    msg.psi = 0.9771916361839331;
    msg.psi_magnetic = 0.9017764026823806;

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
    msg.setTimeStamp(0.8866103612033356);
    msg.setSource(45678U);
    msg.setSourceEntity(70U);
    msg.setDestination(35341U);
    msg.setDestinationEntity(4U);
    msg.time = 0.5333309617047037;
    msg.x = 0.13622061466338942;
    msg.y = 0.7910566270018028;
    msg.z = 0.8767342172023195;
    msg.timestep = 0.13005736749750418;

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
    msg.setTimeStamp(0.56916804433564);
    msg.setSource(24371U);
    msg.setSourceEntity(74U);
    msg.setDestination(56410U);
    msg.setDestinationEntity(100U);
    msg.time = 0.7601773155176699;
    msg.x = 0.519068946037213;
    msg.y = 0.2711050196246919;
    msg.z = 0.8703013267657922;
    msg.timestep = 0.4598125349999159;

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
    msg.setTimeStamp(0.5770591229123425);
    msg.setSource(27462U);
    msg.setSourceEntity(46U);
    msg.setDestination(3989U);
    msg.setDestinationEntity(194U);
    msg.time = 0.8345863357912875;
    msg.x = 0.6669088468506521;
    msg.y = 0.25512101955870303;
    msg.z = 0.9354272261242749;
    msg.timestep = 0.3124844169020985;

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
    msg.setTimeStamp(0.7154839555905514);
    msg.setSource(22591U);
    msg.setSourceEntity(149U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(140U);
    msg.time = 0.21208054979786184;
    msg.x = 0.6067507214431321;
    msg.y = 0.15461043143514064;
    msg.z = 0.2308655489864031;

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
    msg.setTimeStamp(0.8658480729463635);
    msg.setSource(14598U);
    msg.setSourceEntity(186U);
    msg.setDestination(20886U);
    msg.setDestinationEntity(85U);
    msg.time = 0.9046058847408589;
    msg.x = 0.2578964778856704;
    msg.y = 0.7498725976687121;
    msg.z = 0.3913655542663692;

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
    msg.setTimeStamp(0.891498066850165);
    msg.setSource(7771U);
    msg.setSourceEntity(36U);
    msg.setDestination(33753U);
    msg.setDestinationEntity(5U);
    msg.time = 0.5628164269616449;
    msg.x = 0.3826600106481024;
    msg.y = 0.7233314569362962;
    msg.z = 0.793059384017224;

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
    msg.setTimeStamp(0.2009768395435909);
    msg.setSource(60267U);
    msg.setSourceEntity(181U);
    msg.setDestination(62700U);
    msg.setDestinationEntity(7U);
    msg.time = 0.15913901687388476;
    msg.x = 0.6766262335393901;
    msg.y = 0.9554697767254391;
    msg.z = 0.9031086357219716;

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
    msg.setTimeStamp(0.7409414011104984);
    msg.setSource(14416U);
    msg.setSourceEntity(221U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(252U);
    msg.time = 0.8617809792141821;
    msg.x = 0.05975104196396397;
    msg.y = 0.5185459766461723;
    msg.z = 0.42189424700722056;

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
    msg.setTimeStamp(0.18582870321317346);
    msg.setSource(28920U);
    msg.setSourceEntity(8U);
    msg.setDestination(26940U);
    msg.setDestinationEntity(73U);
    msg.time = 0.16524836710271906;
    msg.x = 0.2427317524901268;
    msg.y = 0.6786767988945153;
    msg.z = 0.12991641114312003;

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
    msg.setTimeStamp(0.9086783805593671);
    msg.setSource(7185U);
    msg.setSourceEntity(185U);
    msg.setDestination(18783U);
    msg.setDestinationEntity(175U);
    msg.time = 0.9544937191094855;
    msg.x = 0.1468383497085619;
    msg.y = 0.4771117351674222;
    msg.z = 0.6481445395316668;

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
    msg.setTimeStamp(0.3979353997835957);
    msg.setSource(41089U);
    msg.setSourceEntity(134U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(74U);
    msg.time = 0.9513567569179049;
    msg.x = 0.1430095956056534;
    msg.y = 0.12106213720921166;
    msg.z = 0.4932363526438903;

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
    msg.setTimeStamp(0.4956375474879129);
    msg.setSource(47950U);
    msg.setSourceEntity(105U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(62U);
    msg.time = 0.5772742162300205;
    msg.x = 0.867213136618769;
    msg.y = 0.21115635403526656;
    msg.z = 0.9806668644297666;

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
    msg.setTimeStamp(0.5976277701354344);
    msg.setSource(24487U);
    msg.setSourceEntity(214U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(61U);
    msg.validity = 236U;
    msg.x = 0.5701999342244704;
    msg.y = 0.6071689425399955;
    msg.z = 0.5375023363915447;

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
    msg.setTimeStamp(0.8684825020321238);
    msg.setSource(59539U);
    msg.setSourceEntity(87U);
    msg.setDestination(32738U);
    msg.setDestinationEntity(90U);
    msg.validity = 87U;
    msg.x = 0.26248730609607007;
    msg.y = 0.7861061988007106;
    msg.z = 0.6230422097982399;

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
    msg.setTimeStamp(0.30539334118192485);
    msg.setSource(25543U);
    msg.setSourceEntity(202U);
    msg.setDestination(390U);
    msg.setDestinationEntity(178U);
    msg.validity = 49U;
    msg.x = 0.44992515693406365;
    msg.y = 0.6149947588740431;
    msg.z = 0.8960756009651969;

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
    msg.setTimeStamp(0.32498297795426834);
    msg.setSource(54464U);
    msg.setSourceEntity(235U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(28U);
    msg.validity = 201U;
    msg.x = 0.09125138532391885;
    msg.y = 0.9698389414416161;
    msg.z = 0.6607767073426675;

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
    msg.setTimeStamp(0.34130050002958556);
    msg.setSource(14311U);
    msg.setSourceEntity(199U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(238U);
    msg.validity = 142U;
    msg.x = 0.592152104199876;
    msg.y = 0.8359572146638682;
    msg.z = 0.5656448022335631;

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
    msg.setTimeStamp(0.858369654673926);
    msg.setSource(19882U);
    msg.setSourceEntity(209U);
    msg.setDestination(36465U);
    msg.setDestinationEntity(206U);
    msg.validity = 70U;
    msg.x = 0.715972776053952;
    msg.y = 0.5531458449971051;
    msg.z = 0.6424676300422735;

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
    msg.setTimeStamp(0.7616706919094854);
    msg.setSource(51752U);
    msg.setSourceEntity(237U);
    msg.setDestination(2620U);
    msg.setDestinationEntity(249U);
    msg.time = 0.6214820582054036;
    msg.x = 0.27564852653925;
    msg.y = 0.3987635511235075;
    msg.z = 0.5132491632099322;

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
    msg.setTimeStamp(0.3493131184412137);
    msg.setSource(27765U);
    msg.setSourceEntity(64U);
    msg.setDestination(58381U);
    msg.setDestinationEntity(60U);
    msg.time = 0.30725830915773644;
    msg.x = 0.2615112916035415;
    msg.y = 0.4182448594023682;
    msg.z = 0.846532230791504;

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
    msg.setTimeStamp(0.47507611192319144);
    msg.setSource(5050U);
    msg.setSourceEntity(215U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(160U);
    msg.time = 0.8721748673968774;
    msg.x = 0.34654614455463906;
    msg.y = 0.9589530077416082;
    msg.z = 0.4218406718649711;

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
    msg.setTimeStamp(0.5097214822753257);
    msg.setSource(27559U);
    msg.setSourceEntity(205U);
    msg.setDestination(29803U);
    msg.setDestinationEntity(105U);
    msg.validity = 9U;
    msg.value = 0.5172117504481479;

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
    msg.setTimeStamp(0.5782109379504706);
    msg.setSource(38082U);
    msg.setSourceEntity(144U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(195U);
    msg.validity = 25U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5611014363384024;
    tmp_msg_0.y = 0.6590563538020395;
    tmp_msg_0.z = 0.05541075215610125;
    tmp_msg_0.phi = 0.5325352785037755;
    tmp_msg_0.theta = 0.6950283295242661;
    tmp_msg_0.psi = 0.655164362650255;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.14293155417512438;
    tmp_msg_1.beam_height = 0.037874822457918844;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5881189653859111;

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
    msg.setTimeStamp(0.2312291206122461);
    msg.setSource(54323U);
    msg.setSourceEntity(51U);
    msg.setDestination(45131U);
    msg.setDestinationEntity(93U);
    msg.validity = 186U;
    msg.value = 0.4663543514238828;

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
    msg.setTimeStamp(0.4061364700758451);
    msg.setSource(7733U);
    msg.setSourceEntity(25U);
    msg.setDestination(49899U);
    msg.setDestinationEntity(180U);
    msg.value = 0.729373913298338;

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
    msg.setTimeStamp(0.5035555463956704);
    msg.setSource(22508U);
    msg.setSourceEntity(62U);
    msg.setDestination(19970U);
    msg.setDestinationEntity(147U);
    msg.value = 0.39134877812845104;

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
    msg.setTimeStamp(0.9537303709744923);
    msg.setSource(18580U);
    msg.setSourceEntity(151U);
    msg.setDestination(20624U);
    msg.setDestinationEntity(94U);
    msg.value = 0.13940575895817353;

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
    msg.setTimeStamp(0.5987355451904662);
    msg.setSource(21960U);
    msg.setSourceEntity(120U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9264712559722836;

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
    msg.setTimeStamp(0.7502486932799961);
    msg.setSource(40405U);
    msg.setSourceEntity(217U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9511628059796963;

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
    msg.setTimeStamp(0.5503697829304887);
    msg.setSource(46710U);
    msg.setSourceEntity(226U);
    msg.setDestination(36984U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9645516339184965;

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
    msg.setTimeStamp(0.2846592434502233);
    msg.setSource(22634U);
    msg.setSourceEntity(246U);
    msg.setDestination(54354U);
    msg.setDestinationEntity(172U);
    msg.value = 0.518141107091228;

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
    msg.setTimeStamp(0.7302319640486582);
    msg.setSource(63507U);
    msg.setSourceEntity(166U);
    msg.setDestination(6367U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9896284291703007;

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
    msg.setTimeStamp(0.4831414097820095);
    msg.setSource(26237U);
    msg.setSourceEntity(55U);
    msg.setDestination(31312U);
    msg.setDestinationEntity(69U);
    msg.value = 0.1095577418198489;

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
    msg.setTimeStamp(0.6661651596419456);
    msg.setSource(3591U);
    msg.setSourceEntity(11U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(197U);
    msg.value = 0.025191822014796417;

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
    msg.setTimeStamp(0.6529622473481407);
    msg.setSource(23307U);
    msg.setSourceEntity(164U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5284646103056028;

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
    msg.setTimeStamp(0.4649768756303422);
    msg.setSource(1395U);
    msg.setSourceEntity(145U);
    msg.setDestination(40578U);
    msg.setDestinationEntity(191U);
    msg.value = 0.9203952299625481;

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
    msg.setTimeStamp(0.629758498284143);
    msg.setSource(10400U);
    msg.setSourceEntity(240U);
    msg.setDestination(37483U);
    msg.setDestinationEntity(221U);
    msg.value = 0.14972563683333806;

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
    msg.setTimeStamp(0.002981265764694707);
    msg.setSource(6641U);
    msg.setSourceEntity(195U);
    msg.setDestination(57449U);
    msg.setDestinationEntity(146U);
    msg.value = 0.38173271870191006;

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
    msg.setTimeStamp(0.8220239330261304);
    msg.setSource(47933U);
    msg.setSourceEntity(157U);
    msg.setDestination(55244U);
    msg.setDestinationEntity(215U);
    msg.value = 0.06393146986298082;

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
    msg.setTimeStamp(0.17560411767721962);
    msg.setSource(17126U);
    msg.setSourceEntity(205U);
    msg.setDestination(52831U);
    msg.setDestinationEntity(61U);
    msg.value = 0.6872682197721683;

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
    msg.setTimeStamp(0.19551733473108213);
    msg.setSource(47861U);
    msg.setSourceEntity(110U);
    msg.setDestination(579U);
    msg.setDestinationEntity(33U);
    msg.value = 0.07343683535216394;

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
    msg.setTimeStamp(0.456865749101672);
    msg.setSource(44509U);
    msg.setSourceEntity(251U);
    msg.setDestination(955U);
    msg.setDestinationEntity(18U);
    msg.value = 0.8142291341790278;

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
    msg.setTimeStamp(0.6447975791947491);
    msg.setSource(43387U);
    msg.setSourceEntity(204U);
    msg.setDestination(20274U);
    msg.setDestinationEntity(167U);
    msg.value = 0.09957241466235878;

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
    msg.setTimeStamp(0.8052512708412287);
    msg.setSource(44014U);
    msg.setSourceEntity(109U);
    msg.setDestination(19226U);
    msg.setDestinationEntity(88U);
    msg.value = 0.22605662586376019;

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
    msg.setTimeStamp(0.016342436184908604);
    msg.setSource(49473U);
    msg.setSourceEntity(18U);
    msg.setDestination(41295U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9618461192079121;

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
    msg.setTimeStamp(0.8153516861298775);
    msg.setSource(16399U);
    msg.setSourceEntity(201U);
    msg.setDestination(61537U);
    msg.setDestinationEntity(184U);
    msg.value = 0.2682168239569245;

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
    msg.setTimeStamp(0.6261097553585265);
    msg.setSource(40696U);
    msg.setSourceEntity(35U);
    msg.setDestination(31964U);
    msg.setDestinationEntity(7U);
    msg.value = 0.4792887112514185;

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
    msg.setTimeStamp(0.5231992757221879);
    msg.setSource(4126U);
    msg.setSourceEntity(47U);
    msg.setDestination(28348U);
    msg.setDestinationEntity(119U);
    msg.value = 0.1735145874747902;

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
    msg.setTimeStamp(0.085415039287569);
    msg.setSource(37931U);
    msg.setSourceEntity(20U);
    msg.setDestination(31901U);
    msg.setDestinationEntity(75U);
    msg.direction = 0.6366070805387255;
    msg.speed = 0.6177361827001623;

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
    msg.setTimeStamp(0.04247643910457943);
    msg.setSource(25448U);
    msg.setSourceEntity(5U);
    msg.setDestination(44218U);
    msg.setDestinationEntity(191U);
    msg.direction = 0.9366278341768329;
    msg.speed = 0.43432373570553895;

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
    msg.setTimeStamp(0.9848370198486633);
    msg.setSource(5238U);
    msg.setSourceEntity(242U);
    msg.setDestination(58419U);
    msg.setDestinationEntity(251U);
    msg.direction = 0.658892586743001;
    msg.speed = 0.5246412543776001;

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
    msg.setTimeStamp(0.09914020084866637);
    msg.setSource(8818U);
    msg.setSourceEntity(231U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8619598066409454;

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
    msg.setTimeStamp(0.5891997605388164);
    msg.setSource(2987U);
    msg.setSourceEntity(5U);
    msg.setDestination(14641U);
    msg.setDestinationEntity(129U);
    msg.value = 0.06410628946017194;

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
    msg.setTimeStamp(0.7882677247932162);
    msg.setSource(29958U);
    msg.setSourceEntity(98U);
    msg.setDestination(52084U);
    msg.setDestinationEntity(161U);
    msg.value = 0.22998485331365826;

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
    msg.setTimeStamp(0.955748106870068);
    msg.setSource(11553U);
    msg.setSourceEntity(135U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(97U);
    msg.value.assign("FTECETQFIEYFZSEOLMYSKRKBSZWGSRTYKTHVQMEBNCLGSTQQ");

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
    msg.setTimeStamp(0.5170165256989042);
    msg.setSource(32071U);
    msg.setSourceEntity(29U);
    msg.setDestination(2914U);
    msg.setDestinationEntity(44U);
    msg.value.assign("BKNSTGPWUEGRWAOYNMTKWMSMGOBOPGBBIUXSVGXCCKZTJRADAFVHQNYRQKKLFAHVPFUYNAQPVYRJYDVONVAEOYHZKWFGBVDPAMUSSXHRXWEBFKHOHDSMKUSSCPFKLSMZOTPKRLIYPIVLTZUYDMQBPZNQCQXUA");

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
    msg.setTimeStamp(0.17658326823026527);
    msg.setSource(42501U);
    msg.setSourceEntity(180U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(84U);
    msg.value.assign("EKXZRQEUWPNRRORPFWLGXXTVOCPZQRDASSJUNGHAZVSCZALWPYTBCMHAVTESMXKPNJAYETTSLMJNDUZTSJFMFEEQKXYUFMZXDHWXGGHIEKEKACLDFBKAUJAYJSQDQSQLKEIVTZVBOLHNKIROPOYKMTQHXGXBMWCDGJMQLOWUBOGIQVIYTLNVNYNGCTHLIWESJBPZLCWOCRDIHBCZVHAJMISFFWIJXHWFPUIVYRKBVDNFRUGO");

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
    msg.setTimeStamp(0.5591872528434243);
    msg.setSource(3304U);
    msg.setSourceEntity(199U);
    msg.setDestination(40039U);
    msg.setDestinationEntity(129U);
    const char tmp_msg_0[] = {-11, 49, -119, -63, 37, -86, -24, -109, -61, -65, -67, 93, -55, 8, -68, 49, -118, -110, -104, 43, -79, -114, -32, -30, 15, 42, -26, 17, -52, 3, 4, -41, 89, 93, -18, 72, 28, -13, -94, -24, 75, 110, -1, -109, -95, 29, -102, -93, 67, 5, 83, -47, -92, 47, 90, 43, 18, 34, 58, -122, 120, -44, 86, 49, -3, -77, -19, 32, -116, 14, -34, 67, -34, -71, -58, 42, 19, -28, 57, -81, -6, 58, 117, -123, -37, 14, -17, -1, -85, 48, -77, 57, -51, 21, -87, -116, 114, 37, 69, -15, 41, -127, -77, 67, -59, 88, 9, 18, 71, 96, -52, 123, -83, 12, 29, -11, -52, -70, 89, -56, -51, -56, -19, -57, 20, 94, -125, 105, -73, -29, -40, -65, -22, -83, 125, 15, 66, 82, -76, -79, -11, 120, -61, 29, 54, 36, -117, -93, 17, 62, -31, -62, 95, 124, 8, -45, -11, -35, -119, 28, -59, 117, 93, 26, 66, 70, -68, -32, 87, -68, -104, -76, 25, 123, -28, -122, 11, 23, 97, 42, 10, -70, -112, -61, -33, 53, -65, 30, 77, -86, 51, 98, -54, 44, 101, -29, 93, -97, -3, 30, -69, -6, -54, -111, 3, -99, 83, 10, 81, 61, 101, -10, -123, -43, 100, -53, -7, -108, 109, -2, -44, 41, 63, 124, 120, 45, -107, -106, 92, 39, -116, 42, -3, -7, 27, 78, 64, 115, -45, 34};
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
    msg.setTimeStamp(0.04627544161133679);
    msg.setSource(60027U);
    msg.setSourceEntity(213U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(71U);
    const char tmp_msg_0[] = {-81, -4, 44, -88, -57, -34, -62, 97, -100, -113, -97, 48, 105, 32, -52, 111, -109, 18, 68, 80, 34, -62, 6, -38, 6, 71, 105, -58, 27, -59, -43, 91, -33, -9, 91, -90, 83, -34, 30, 62, 10, -51, 53, -18, 16, 121, 31, 7, 82, 74, -93, -29, -94, -116, -65, 45, -110, 11, 62, -7, -11, -88, 30, 25, -41, 49, -61, 0, -101, 47, 125, -36, -49, -25, -58, 27, -105, -3, 74, -4, 114, 20, -6, 19, -20, -4, 106, -104, 7, 83, -92, -15, 34, 24, 3, -4, -113, -2, -15, 73, -61, -12, -79, 54, 58, -74, -54, 34, 31, 43, 36, -128, -121, -64, 90, -36, 31, 49, 58, -17, -107, -17, 44, -91, 31, -127, -87, -44, 24, -87, -46, -44, 104, 123, -2, -65, 7, -89, -114, 15, -80, -79, 102, 22, -39, -55, 44, 119, -51, 111, 16, 13, -69, 108, -36, 27, 94, 65, 1, -27, -40, -26, -13, -43, 113, -105, 23, 120, 0, 71, -118, -127, 89, 83, -87, 69, 71, -45, 34, -81, 99, -105, 38, 99, -107, 110, -91, -33, -117, -90, 57, -13, 113, -106, 100, -15, 7, -21, 61, 90, 113, -96, -43, 30, -79, 64, 49};
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
    msg.setTimeStamp(0.551202722710099);
    msg.setSource(55908U);
    msg.setSourceEntity(135U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(158U);
    const char tmp_msg_0[] = {116, -50, 121, -49, -119, -51, 99, 91, 99, -37, -22, -51, -29, 89, -36, -121, 27, -82, 36, -85, 124, 69, -96, -39, -38, 80, -116, 99, 96, 59, 31, -83, -84, -127, 11, -106, -43, -21, 27, 52, 126, 122, -44, 57, 57, 1, -107, 30, -75, -88, -64, 97, -127, 72, 51, 89, 96, 43, 77, 111, -127, -122, 103, -10, 21, -41, -32, -84, -74, -127, 112, -52, -8, -60, 67, -52, -117, 25, 67, -53, -109, 38, -84, -13, 102, 13, -32, 106, -11, 27, -51, 115, 8, -81, -92, 92, -47, 1, -94, 30, -113, 69, 20, 2, -80, -70, 105, -46, 38, -64, -3, 53, 103, 49, 45, -5, 90, -103, 58, -83, -1, 67, -100, -79, -120, 112, 45, 55, 74, 8, -121, -116, 47, 96, 106, -37, 66, 107, 47, -72, 52, 82, 69, 103};
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
    msg.setTimeStamp(0.6568835471657214);
    msg.setSource(36979U);
    msg.setSourceEntity(92U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(184U);
    msg.frequency = 3757289433U;
    msg.min_range = 16008U;
    msg.max_range = 55833U;

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
    msg.setTimeStamp(0.9454646351339995);
    msg.setSource(16990U);
    msg.setSourceEntity(118U);
    msg.setDestination(27064U);
    msg.setDestinationEntity(205U);
    msg.frequency = 3690422696U;
    msg.min_range = 55551U;
    msg.max_range = 19440U;

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
    msg.setTimeStamp(0.7373380069350133);
    msg.setSource(27264U);
    msg.setSourceEntity(250U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(34U);
    msg.frequency = 1532674982U;
    msg.min_range = 55295U;
    msg.max_range = 22423U;

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
    msg.setTimeStamp(0.22957099762470212);
    msg.setSource(2317U);
    msg.setSourceEntity(127U);
    msg.setDestination(19825U);
    msg.setDestinationEntity(173U);
    msg.type = 233U;
    msg.frequency = 3094562356U;
    msg.min_range = 11345U;
    msg.max_range = 34100U;
    msg.bits_per_point = 121U;
    msg.scale_factor = 0.4991768253017298;
    const char tmp_msg_0[] = {7, 18, -102, 123, 56, 54, 105, 20, 3, -54, 105, -60, 18, 119, 124, 122, 117, -86, -17, -61, -29, 7, 37, -100, 85, -87, -118, -117, -75, 98, -8, 17, -90, 38, 61, -44, 73, 66, 15, 108, -34, -70, -106, -106, 112, -85, -4, -23, 88, -67, 13, 78, -76, -107, -92, 47, 105, -64, -77, -110, 28, -121, -46, -63, -63, -85, 106, -32, 17, -71, 123, 74, 46, -81, 48, 89, 69, 6, 54, 43, 96, 63, -49, -8, -18, 1, 19, 105, 72, -108, 113, -69, 14, -105, 103, 112, 107, 84, -97, 87, 114, -128, -52, -43, 109, -54, 94, 46, -71, 111, 2, 28, -30};
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
    msg.setTimeStamp(0.4690938343583525);
    msg.setSource(42855U);
    msg.setSourceEntity(47U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(71U);
    msg.type = 44U;
    msg.frequency = 216864323U;
    msg.min_range = 12658U;
    msg.max_range = 60650U;
    msg.bits_per_point = 158U;
    msg.scale_factor = 0.17973621908725113;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.07893151835419887;
    tmp_msg_0.beam_height = 0.28718380132561594;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {79, -65, -88, -27, 9, 54, -17, -16, -65, 67, -79, -115, 121, -35, 3, 1, 21, -56, -108, -101, -60, 91, -26, 91, 83, -10, 24};
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
    msg.setTimeStamp(0.3383758524167134);
    msg.setSource(58896U);
    msg.setSourceEntity(211U);
    msg.setDestination(34154U);
    msg.setDestinationEntity(162U);
    msg.type = 67U;
    msg.frequency = 1258137862U;
    msg.min_range = 20376U;
    msg.max_range = 59295U;
    msg.bits_per_point = 166U;
    msg.scale_factor = 0.5518444763295556;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.07718706997202263;
    tmp_msg_0.beam_height = 0.9520909791351733;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {13, 119, 26, -10, 114, 61, 3, -7, 99, -114, 90, -128, 96, -43, -63, 47, -126, -115, -98, 0, 102, -105, -110, 126, 52, -53, 44, -14, -62, -65, -21, 29, -22, 96, -56, 51, 13, 120, 58, 42, -42, 65, 83, 28, -68, -84, 101, -53, -85, 100, -8, 45, 117, 125, 85, 48, 68, -37, 87, -57, 82, -29, 64, 13, 60, -16, 19, 115, -51, -48, 40, -101, -23, -41, -61, 39, 123, -55, -117, -44, -122, 34, 84, 44, 120, -24, -115, -52, 65, -14, 95, -104, -115, -55, -116, -73, -90, -83, -50, 114, 50, 5, 43, 110, 111, -16, -109, -37, 40, -109, -34, -91, -102, 88, 27, -99, -114, -6, -56, -41, 13, 79, -123, -44, 0, 39, 35, -101, 60, 64, -15, 73, 99, -82, 124, -13, 97, -22, -87, 86, -69, 115, 31, 5, -125, -123, 39, -60, 4, -67, -105, 56, 28, -74, -21, 14, -88, 8, -25, 65, -91, 121, -26, 90, -113, -35, -4, 95, -65, 102, -37, -92, 109, 18, 102, -63, -111, 51, -119, -107, 5, 48, -5, 59, -7, -82, -64, -104, 102, 80, 108, 3, 71, -27, -38, -35, 90, -92, -23, 107, 122, -75, 124, -80, 70, 35, 77, -58, 69, -10, 110, -115, 8, 16, -94, 56, 99, 38, -52, -80, -86, 64, 76, -29, -47, 25, -87, 114, -46, -70, 79};
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
    msg.setTimeStamp(0.9821656961946889);
    msg.setSource(53134U);
    msg.setSourceEntity(178U);
    msg.setDestination(59593U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9848828747422042);
    msg.setSource(21305U);
    msg.setSourceEntity(129U);
    msg.setDestination(27289U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.3963830109066936);
    msg.setSource(748U);
    msg.setSourceEntity(19U);
    msg.setDestination(34861U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.012325563960949748);
    msg.setSource(45147U);
    msg.setSourceEntity(49U);
    msg.setDestination(62615U);
    msg.setDestinationEntity(252U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.9571214157250124);
    msg.setSource(38777U);
    msg.setSourceEntity(123U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(90U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.2380457563140007);
    msg.setSource(24658U);
    msg.setSourceEntity(189U);
    msg.setDestination(13331U);
    msg.setDestinationEntity(97U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.84511077655347);
    msg.setSource(6832U);
    msg.setSourceEntity(188U);
    msg.setDestination(7225U);
    msg.setDestinationEntity(239U);
    msg.value = 0.42378578983729076;
    msg.confidence = 0.809885474823816;
    msg.opmodes.assign("HJLISPIYQKUIIFYDYFPKIVDIMETWDRGRWKNLWJFZJUTQOZNOXQHKGCZOJHVQVPAUULHZTWGEZBYRCGVYLUUTNSPVGFEPAZJUGSNEZOTSZUWIJWMYEMLDRADGBVBHJOKCRCRTDVNALJATCXSAGKOMPRNAPPQBMWYEKFNL");

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
    msg.setTimeStamp(0.17814293390634672);
    msg.setSource(39739U);
    msg.setSourceEntity(88U);
    msg.setDestination(43252U);
    msg.setDestinationEntity(159U);
    msg.value = 0.1608388933734065;
    msg.confidence = 0.5132053905757115;
    msg.opmodes.assign("BGKGTWPPPJCRCBRYZRJZXQXGTWIPHKURIHQ");

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
    msg.setTimeStamp(0.8451834080064928);
    msg.setSource(43905U);
    msg.setSourceEntity(41U);
    msg.setDestination(30813U);
    msg.setDestinationEntity(210U);
    msg.value = 0.12248606388739913;
    msg.confidence = 0.3831997145296936;
    msg.opmodes.assign("LYZZOERFYCSSUHUDXKJJZZMNZQLMQZXAGHVZIORQCQBVBOHPSIDSYMYFGAYREVMEXGPFBWWTWLYBAACSLQFFHVWOOIOIEITSXDDZPTANRMPVDKQBZGTRQXEHCPVCDMZJAAYPLDHXXFNIKPVUQYLGGEYHINGNQTWIRPFJTTVVWUEOKOGGMUMDTNLIECTCCUSGRINDWJFSACJSNRJHOEWJQJUXXKBK");

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
    msg.setTimeStamp(0.3876721463532605);
    msg.setSource(60218U);
    msg.setSourceEntity(66U);
    msg.setDestination(43619U);
    msg.setDestinationEntity(51U);
    msg.itow = 3425908675U;
    msg.lat = 0.35087359868283285;
    msg.lon = 0.33011924508360624;
    msg.height_ell = 0.7747002345653178;
    msg.height_sea = 0.1396654565016866;
    msg.hacc = 0.3539781636406609;
    msg.vacc = 0.4463499712534139;
    msg.vel_n = 0.3596050197426388;
    msg.vel_e = 0.9914225104473381;
    msg.vel_d = 0.47517030955436923;
    msg.speed = 0.13934615871227862;
    msg.gspeed = 0.028015280015408872;
    msg.heading = 0.527154543581904;
    msg.sacc = 0.3440144101249778;
    msg.cacc = 0.137783553097643;

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
    msg.setTimeStamp(0.28761762364371);
    msg.setSource(24157U);
    msg.setSourceEntity(195U);
    msg.setDestination(21418U);
    msg.setDestinationEntity(74U);
    msg.itow = 2192055222U;
    msg.lat = 0.920276971119866;
    msg.lon = 0.514607055054533;
    msg.height_ell = 0.9416195180105845;
    msg.height_sea = 0.6972654221390802;
    msg.hacc = 0.690255504772249;
    msg.vacc = 0.7601565165598634;
    msg.vel_n = 0.36816324339037854;
    msg.vel_e = 0.048958289460696136;
    msg.vel_d = 0.3133739686574796;
    msg.speed = 0.08777103959994859;
    msg.gspeed = 0.4874205384429653;
    msg.heading = 0.30224845364531816;
    msg.sacc = 0.26886764155952214;
    msg.cacc = 0.03298905221264825;

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
    msg.setTimeStamp(0.10893562480004904);
    msg.setSource(7607U);
    msg.setSourceEntity(150U);
    msg.setDestination(350U);
    msg.setDestinationEntity(171U);
    msg.itow = 468291302U;
    msg.lat = 0.1968861796738942;
    msg.lon = 0.28571902193426246;
    msg.height_ell = 0.20676566273369568;
    msg.height_sea = 0.247886405239778;
    msg.hacc = 0.3477005489192525;
    msg.vacc = 0.6841371364955514;
    msg.vel_n = 0.6829986825293622;
    msg.vel_e = 0.42644338288961725;
    msg.vel_d = 0.6684315127735958;
    msg.speed = 0.010663955164061267;
    msg.gspeed = 0.22468396170042193;
    msg.heading = 0.562444145310657;
    msg.sacc = 0.3214173178877896;
    msg.cacc = 0.011731386807832922;

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
    msg.setTimeStamp(0.760016539440145);
    msg.setSource(5611U);
    msg.setSourceEntity(17U);
    msg.setDestination(6000U);
    msg.setDestinationEntity(5U);
    msg.id = 33U;
    msg.value = 0.24307753650848207;

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
    msg.setTimeStamp(0.13615823769770619);
    msg.setSource(25005U);
    msg.setSourceEntity(30U);
    msg.setDestination(11228U);
    msg.setDestinationEntity(102U);
    msg.id = 66U;
    msg.value = 0.8078174431785878;

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
    msg.setTimeStamp(0.2535957519335843);
    msg.setSource(27926U);
    msg.setSourceEntity(226U);
    msg.setDestination(48849U);
    msg.setDestinationEntity(136U);
    msg.id = 48U;
    msg.value = 0.30110743620197844;

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
    msg.setTimeStamp(0.784310604222162);
    msg.setSource(14310U);
    msg.setSourceEntity(232U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(196U);
    msg.x = 0.7307538688830386;
    msg.y = 0.40032926363912347;
    msg.z = 0.6492306967582673;
    msg.phi = 0.2372851054986128;
    msg.theta = 0.9298397974159741;
    msg.psi = 0.5156600015998741;

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
    msg.setTimeStamp(0.5087286004817492);
    msg.setSource(50362U);
    msg.setSourceEntity(82U);
    msg.setDestination(36051U);
    msg.setDestinationEntity(75U);
    msg.x = 0.7273169265091448;
    msg.y = 0.8038201950928591;
    msg.z = 0.8572225872532535;
    msg.phi = 0.0033863639479833063;
    msg.theta = 0.5037042565298909;
    msg.psi = 0.1227635870432876;

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
    msg.setTimeStamp(0.10022230985726943);
    msg.setSource(43574U);
    msg.setSourceEntity(140U);
    msg.setDestination(34079U);
    msg.setDestinationEntity(153U);
    msg.x = 0.923008282596853;
    msg.y = 0.6201973305742203;
    msg.z = 0.3216691119163336;
    msg.phi = 0.5260419700880061;
    msg.theta = 0.8841849453772663;
    msg.psi = 0.3642668946070101;

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
    msg.setTimeStamp(0.6414014076328005);
    msg.setSource(31704U);
    msg.setSourceEntity(171U);
    msg.setDestination(23404U);
    msg.setDestinationEntity(48U);
    msg.beam_width = 0.11981123559129137;
    msg.beam_height = 0.9241644053151895;

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
    msg.setTimeStamp(0.8260281764481275);
    msg.setSource(20277U);
    msg.setSourceEntity(122U);
    msg.setDestination(15400U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.8456358019976147;
    msg.beam_height = 0.07641255600364272;

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
    msg.setTimeStamp(0.8334025015066052);
    msg.setSource(30000U);
    msg.setSourceEntity(86U);
    msg.setDestination(60998U);
    msg.setDestinationEntity(4U);
    msg.beam_width = 0.8553982981311492;
    msg.beam_height = 0.9523960531986972;

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
    msg.setTimeStamp(0.6813308988149073);
    msg.setSource(59638U);
    msg.setSourceEntity(217U);
    msg.setDestination(64259U);
    msg.setDestinationEntity(35U);
    msg.id = 163U;
    msg.zoom = 138U;
    msg.action = 234U;

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
    msg.setTimeStamp(0.8209765265302196);
    msg.setSource(18175U);
    msg.setSourceEntity(72U);
    msg.setDestination(58254U);
    msg.setDestinationEntity(28U);
    msg.id = 75U;
    msg.zoom = 245U;
    msg.action = 82U;

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
    msg.setTimeStamp(0.06562552972884428);
    msg.setSource(6681U);
    msg.setSourceEntity(6U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(7U);
    msg.id = 94U;
    msg.zoom = 240U;
    msg.action = 129U;

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
    msg.setTimeStamp(0.5147238284133901);
    msg.setSource(56115U);
    msg.setSourceEntity(68U);
    msg.setDestination(22101U);
    msg.setDestinationEntity(243U);
    msg.id = 104U;
    msg.value = 0.2982819671740542;

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
    msg.setTimeStamp(0.8404092307562162);
    msg.setSource(55275U);
    msg.setSourceEntity(12U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(205U);
    msg.id = 95U;
    msg.value = 0.20474598438499825;

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
    msg.setTimeStamp(0.419745880901051);
    msg.setSource(57507U);
    msg.setSourceEntity(21U);
    msg.setDestination(41343U);
    msg.setDestinationEntity(250U);
    msg.id = 200U;
    msg.value = 0.7578719014988545;

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
    msg.setTimeStamp(0.8850883136057287);
    msg.setSource(2128U);
    msg.setSourceEntity(39U);
    msg.setDestination(20129U);
    msg.setDestinationEntity(17U);
    msg.id = 11U;
    msg.value = 0.6691912023363905;

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
    msg.setTimeStamp(0.17148932588702703);
    msg.setSource(47623U);
    msg.setSourceEntity(194U);
    msg.setDestination(35808U);
    msg.setDestinationEntity(44U);
    msg.id = 246U;
    msg.value = 0.6958048932801456;

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
    msg.setTimeStamp(0.6363398757812635);
    msg.setSource(31393U);
    msg.setSourceEntity(195U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(4U);
    msg.id = 34U;
    msg.value = 0.6372986954670271;

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
    msg.setTimeStamp(0.08818170842562079);
    msg.setSource(4836U);
    msg.setSourceEntity(211U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(87U);
    msg.id = 44U;
    msg.angle = 0.840472136024263;

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
    msg.setTimeStamp(0.07138084122776278);
    msg.setSource(44184U);
    msg.setSourceEntity(4U);
    msg.setDestination(13463U);
    msg.setDestinationEntity(43U);
    msg.id = 250U;
    msg.angle = 0.76681552820506;

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
    msg.setTimeStamp(0.38224639384451053);
    msg.setSource(832U);
    msg.setSourceEntity(202U);
    msg.setDestination(52364U);
    msg.setDestinationEntity(144U);
    msg.id = 140U;
    msg.angle = 0.42172176781577;

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
    msg.setTimeStamp(0.6419953891808337);
    msg.setSource(62470U);
    msg.setSourceEntity(33U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(231U);
    msg.op = 123U;
    msg.actions.assign("VHXKPIYECQBVWZZNFJJLYWPBSGSQEUXFBEHGRLBQKCGSYUJBNCCRMCNPILLNOFHDRUUOMAOTXDA");

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
    msg.setTimeStamp(0.670551908027154);
    msg.setSource(42140U);
    msg.setSourceEntity(166U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(252U);
    msg.op = 110U;
    msg.actions.assign("AIOBSAZKTWKSVOFIQNCXBXGQWEYWOBNXIMSRRVZEPEXZGMCDNGXXYQLWAKSZUHOWJXCDFEHQCDLOFQDYJHQZFMNJWIGVYFOGJKLVDJUPVFYMZTWHAQXSUQAHVDLCPHYPJULPSSCNQEQFZLAJKCYESMBTIUNLEGWPDURUTIRCFYBEDRYBGVLHMRFPZBWMKPIKTHJNZACMVPBOALTUJACTKXTH");

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
    msg.setTimeStamp(0.927944571159827);
    msg.setSource(22535U);
    msg.setSourceEntity(7U);
    msg.setDestination(10018U);
    msg.setDestinationEntity(212U);
    msg.op = 170U;
    msg.actions.assign("OWRHXQVZOSGPWDHBPSJXSGAPXKSPMZGMGIHQLRBPNOEDVRGIBXEQMNCZJADRFXHFYCCQYANVNYSCONFKKVLDLKEDPUTLOWCKQUINRTQM");

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
    msg.setTimeStamp(0.5194694367878574);
    msg.setSource(17226U);
    msg.setSourceEntity(240U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(181U);
    msg.actions.assign("CMIHCQLKWTYPVJXWIMGHGUQIYKXRNUTDYETHVFULWCPQXEIXSDMCTSNKZZFZKSPYSLNZ");

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
    msg.setTimeStamp(0.7477478771472862);
    msg.setSource(53720U);
    msg.setSourceEntity(240U);
    msg.setDestination(17126U);
    msg.setDestinationEntity(36U);
    msg.actions.assign("AWNMYVHXPWEUCQYBWIUYEJIRUKYRRSSEROVATHPAJNEVGRGJABFBYUNKRETCQQQFZAZADWFXPLSLOLELZXUSQUYHBHXTTLXGJRGQAECDJWDCRNUOGMNCCWSSLHTJYPSZTMVVVDZCOQVO");

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
    msg.setTimeStamp(0.1537163225735365);
    msg.setSource(51865U);
    msg.setSourceEntity(137U);
    msg.setDestination(2723U);
    msg.setDestinationEntity(88U);
    msg.actions.assign("HCOIKIPEPVAUFJZEAXRJJFIUAPSDLSQWUXTAUTSOWZWPSXKLCJMTWJZTIILFHWIVPHDSSFJNDWDZMDAEOHBXRJDMZRLSYAVUVMEPBNBHRXGBSIQUANWBQYEXKRJKKJAHVUKRLJYP");

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
    msg.setTimeStamp(0.938507374532065);
    msg.setSource(62657U);
    msg.setSourceEntity(55U);
    msg.setDestination(43493U);
    msg.setDestinationEntity(44U);
    msg.button = 131U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.8550267208432958);
    msg.setSource(3033U);
    msg.setSourceEntity(237U);
    msg.setDestination(46125U);
    msg.setDestinationEntity(7U);
    msg.button = 70U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.2696395660455506);
    msg.setSource(32651U);
    msg.setSourceEntity(78U);
    msg.setDestination(21449U);
    msg.setDestinationEntity(197U);
    msg.button = 134U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.6074587451954867);
    msg.setSource(44935U);
    msg.setSourceEntity(131U);
    msg.setDestination(45661U);
    msg.setDestinationEntity(202U);
    msg.op = 82U;
    msg.text.assign("TKDJJVRFERTVIRYFIBPWVLWVBRKLFMVUIQCIWMZHPVABTDANERMUJOQMTNBHNCJICQLHBQJYCCAQWASEFQWSOORXEYHPSAGDUTPOKJZENAIISBZUOISRXTDSCPPJTNMNBITUMAVVYXQGGQOYK");

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
    msg.setTimeStamp(0.16948289888133583);
    msg.setSource(63916U);
    msg.setSourceEntity(145U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(66U);
    msg.op = 178U;
    msg.text.assign("PKDIHEZASVOTLRSONXBAROHNIWTQBRUCEVVAETIULWQYPHEIXSWJQUEUADSWXDGQAFRYZDJBAJONWZUTNLGXFKLLTODPZXGVLPMHCUUEJRVESCMKZXGHIYHPOGNNZBKFOZIPLGLTFTBWOTWRXFDJKUXCMNWGYJHEQCVCDXJ");

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
    msg.setTimeStamp(0.5266292187432812);
    msg.setSource(60969U);
    msg.setSourceEntity(235U);
    msg.setDestination(59363U);
    msg.setDestinationEntity(179U);
    msg.op = 77U;
    msg.text.assign("DHTSLRKHRYTPJXNSKKAMHJPSOBTLPNQBJMSVBBITDLAIOVWDGEECKMCQIHUJJNKXWIJSZELBUAXNMQDGOTOYCYDVPFVCJVAXFIKFPORGPGJSCIWFIEPMOWGTFCDXSVUHYJTOYPQQWLUMXGCSYAZHVKELKOABWUEMZZLNKWKCLBHLIEUANEAXQGFGC");

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
    msg.setTimeStamp(0.9718895936597299);
    msg.setSource(13520U);
    msg.setSourceEntity(87U);
    msg.setDestination(60698U);
    msg.setDestinationEntity(198U);
    msg.op = 81U;
    msg.time_remain = 0.5219223898375785;
    msg.sched_time = 0.282279029504766;

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
    msg.setTimeStamp(0.8984001700595505);
    msg.setSource(63297U);
    msg.setSourceEntity(115U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(128U);
    msg.op = 120U;
    msg.time_remain = 0.25737601499107543;
    msg.sched_time = 0.4657341154772644;

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
    msg.setTimeStamp(0.6436682822022708);
    msg.setSource(9103U);
    msg.setSourceEntity(226U);
    msg.setDestination(15362U);
    msg.setDestinationEntity(54U);
    msg.op = 38U;
    msg.time_remain = 0.46536367969433756;
    msg.sched_time = 0.9176883199598135;

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
    msg.setTimeStamp(0.6918498313283338);
    msg.setSource(42160U);
    msg.setSourceEntity(243U);
    msg.setDestination(64542U);
    msg.setDestinationEntity(254U);
    msg.id = 103U;
    msg.op = 231U;
    msg.sched_time = 0.4822694409876418;

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
    msg.setTimeStamp(0.06931415523669038);
    msg.setSource(29734U);
    msg.setSourceEntity(10U);
    msg.setDestination(41565U);
    msg.setDestinationEntity(96U);
    msg.id = 110U;
    msg.op = 194U;
    msg.sched_time = 0.5680340372078865;

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
    msg.setTimeStamp(0.3268195253997974);
    msg.setSource(54412U);
    msg.setSourceEntity(163U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(15U);
    msg.id = 198U;
    msg.op = 237U;
    msg.sched_time = 0.3324897230395687;

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
    msg.setTimeStamp(0.8945224531646522);
    msg.setSource(41202U);
    msg.setSourceEntity(48U);
    msg.setDestination(58759U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.5525659005760034);
    msg.setSource(38932U);
    msg.setSourceEntity(182U);
    msg.setDestination(33819U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.44226332422152825);
    msg.setSource(34248U);
    msg.setSourceEntity(96U);
    msg.setDestination(44527U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.6271709089483929);
    msg.setSource(23195U);
    msg.setSourceEntity(136U);
    msg.setDestination(62788U);
    msg.setDestinationEntity(110U);
    msg.id = 161U;
    msg.label.assign("VKPUPECLQUWGXWZOQWXYBHLKJZPRYFKYTQDRIUSKCCDKIDZPQKNKVBLMULGZNODCHOBYAPJZBHOWTFGFFQWTJARVVXNWQINOBKMVVICMHVWOJNZXECEAVOGIWRVYDGGKTFUBHZLUGARLQLRFFDIEHOSUJTDISFTEJALXBDBMXAEUDTACTGSMBHUALMBIJQPNRQWSJJSYSYSIZFRYZDK");
    msg.state = 248U;

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
    msg.setTimeStamp(0.36033780497778234);
    msg.setSource(51199U);
    msg.setSourceEntity(81U);
    msg.setDestination(40401U);
    msg.setDestinationEntity(0U);
    msg.id = 33U;
    msg.label.assign("GMENPCSCEVAEOSR");
    msg.state = 175U;

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
    msg.setTimeStamp(0.4997767186796489);
    msg.setSource(50761U);
    msg.setSourceEntity(11U);
    msg.setDestination(38247U);
    msg.setDestinationEntity(96U);
    msg.id = 223U;
    msg.label.assign("DYXQXOOALTOHAJAJBOIFIPZKELGTMXCNDGXLTFBFKACNNOLAIAPHZVYRHGYRCGTPCQSOWGODYDOUMPKWIGTBPSBNSVEFDXKJMWHVZDCFBREZYMRFVECRQPYDBULJP");
    msg.state = 92U;

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
    msg.setTimeStamp(0.023349954821330177);
    msg.setSource(28596U);
    msg.setSourceEntity(221U);
    msg.setDestination(54024U);
    msg.setDestinationEntity(58U);
    msg.id = 100U;
    msg.op = 18U;

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
    msg.setTimeStamp(0.511847803664146);
    msg.setSource(11978U);
    msg.setSourceEntity(57U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(27U);
    msg.id = 83U;
    msg.op = 225U;

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
    msg.setTimeStamp(0.8791919692266349);
    msg.setSource(19097U);
    msg.setSourceEntity(192U);
    msg.setDestination(10234U);
    msg.setDestinationEntity(101U);
    msg.id = 163U;
    msg.op = 104U;

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
    msg.setTimeStamp(0.14928485813625703);
    msg.setSource(50357U);
    msg.setSourceEntity(81U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.12021902801121043;
    msg.lon = 0.10469624416142842;
    msg.height = 0.3254855122349821;
    msg.x = 0.4641410476495256;
    msg.y = 0.752027055895775;
    msg.z = 0.13012365111691593;
    msg.phi = 0.8212410274890328;
    msg.theta = 0.36206745203364266;
    msg.psi = 0.2644084595965285;
    msg.u = 0.12908578156677697;
    msg.v = 0.7070113511200279;
    msg.w = 0.7304094363696332;
    msg.vx = 0.07101999479313958;
    msg.vy = 0.4296183555953328;
    msg.vz = 0.4277454177252329;
    msg.p = 0.38608574091386594;
    msg.q = 0.17493956306503167;
    msg.r = 0.12245110276725568;
    msg.depth = 0.027438752697464652;
    msg.alt = 0.753823303468478;

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
    msg.setTimeStamp(0.0061415101600929);
    msg.setSource(12828U);
    msg.setSourceEntity(48U);
    msg.setDestination(27420U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.948782028476571;
    msg.lon = 0.3601857199541588;
    msg.height = 0.7426500194904182;
    msg.x = 0.5644304714341174;
    msg.y = 0.7393005372379184;
    msg.z = 0.5992597753914437;
    msg.phi = 0.2691688247461812;
    msg.theta = 0.4978765282206219;
    msg.psi = 0.6086930016337125;
    msg.u = 0.6891733799908072;
    msg.v = 0.5105264992311556;
    msg.w = 0.8446122073327383;
    msg.vx = 0.7867107931003927;
    msg.vy = 0.8628798299181966;
    msg.vz = 0.17950678794593122;
    msg.p = 0.9675356188360178;
    msg.q = 0.9570220467815507;
    msg.r = 0.14360903106990242;
    msg.depth = 0.9874424265751859;
    msg.alt = 0.02177884009523756;

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
    msg.setTimeStamp(0.45920200422114765);
    msg.setSource(18909U);
    msg.setSourceEntity(68U);
    msg.setDestination(46492U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.9316256358128524;
    msg.lon = 0.9344451078044951;
    msg.height = 0.7748686747805351;
    msg.x = 0.3188723792110504;
    msg.y = 0.7811847766582445;
    msg.z = 0.541642497902345;
    msg.phi = 0.991022213492648;
    msg.theta = 0.9059024256441851;
    msg.psi = 0.7175378735137903;
    msg.u = 0.2604207118183778;
    msg.v = 0.4299060044893691;
    msg.w = 0.861854714484342;
    msg.vx = 0.9083745548628916;
    msg.vy = 0.8587973865427723;
    msg.vz = 0.3482614297827953;
    msg.p = 0.18268061538964686;
    msg.q = 0.8958285828371815;
    msg.r = 0.4979889154913273;
    msg.depth = 0.44511679707160057;
    msg.alt = 0.8496703086819307;

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
    msg.setTimeStamp(0.013945666314663097);
    msg.setSource(49034U);
    msg.setSourceEntity(46U);
    msg.setDestination(27487U);
    msg.setDestinationEntity(3U);
    msg.x = 0.015164870338922665;
    msg.y = 0.4654916946528673;
    msg.z = 0.09918250440950216;

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
    msg.setTimeStamp(0.8118449502548736);
    msg.setSource(15611U);
    msg.setSourceEntity(95U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(94U);
    msg.x = 0.3237620852212544;
    msg.y = 0.7304397867539297;
    msg.z = 0.5991148242692368;

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
    msg.setTimeStamp(0.03626945499919221);
    msg.setSource(28806U);
    msg.setSourceEntity(215U);
    msg.setDestination(12419U);
    msg.setDestinationEntity(11U);
    msg.x = 0.41237539876927964;
    msg.y = 0.279722327387672;
    msg.z = 0.5868512744369767;

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
    msg.setTimeStamp(0.2631200757727319);
    msg.setSource(56910U);
    msg.setSourceEntity(196U);
    msg.setDestination(91U);
    msg.setDestinationEntity(51U);
    msg.value = 0.09339042430504785;

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
    msg.setTimeStamp(0.6183679829432671);
    msg.setSource(10135U);
    msg.setSourceEntity(56U);
    msg.setDestination(38825U);
    msg.setDestinationEntity(95U);
    msg.value = 0.2826620822845356;

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
    msg.setTimeStamp(0.4245398474100477);
    msg.setSource(48973U);
    msg.setSourceEntity(148U);
    msg.setDestination(64298U);
    msg.setDestinationEntity(132U);
    msg.value = 0.5605356341721474;

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
    msg.setTimeStamp(0.5390676289588957);
    msg.setSource(8330U);
    msg.setSourceEntity(20U);
    msg.setDestination(31097U);
    msg.setDestinationEntity(88U);
    msg.value = 0.4615358339191368;

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
    msg.setTimeStamp(0.7794858657837782);
    msg.setSource(15057U);
    msg.setSourceEntity(182U);
    msg.setDestination(62138U);
    msg.setDestinationEntity(189U);
    msg.value = 0.16706628346846586;

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
    msg.setTimeStamp(0.9884917914556572);
    msg.setSource(13681U);
    msg.setSourceEntity(215U);
    msg.setDestination(53385U);
    msg.setDestinationEntity(107U);
    msg.value = 0.46036562380005963;

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
    msg.setTimeStamp(0.19673319052172278);
    msg.setSource(40694U);
    msg.setSourceEntity(144U);
    msg.setDestination(31244U);
    msg.setDestinationEntity(249U);
    msg.x = 0.1207775114452212;
    msg.y = 0.7607101937960491;
    msg.z = 0.9497643010220032;
    msg.phi = 0.8773273008407766;
    msg.theta = 0.08148934565329202;
    msg.psi = 0.8147311039608188;
    msg.p = 0.4072825692693901;
    msg.q = 0.5109057321096603;
    msg.r = 0.6616815347554077;
    msg.u = 0.8106893382547735;
    msg.v = 0.17021849650133847;
    msg.w = 0.8861913090240459;
    msg.bias_psi = 0.509808735751527;
    msg.bias_r = 0.9120068238639495;

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
    msg.setTimeStamp(0.1309888582987051);
    msg.setSource(36338U);
    msg.setSourceEntity(72U);
    msg.setDestination(35040U);
    msg.setDestinationEntity(12U);
    msg.x = 0.4692151001837095;
    msg.y = 0.8091684822723181;
    msg.z = 0.7570608091827632;
    msg.phi = 0.5200245912111372;
    msg.theta = 0.8027955105879184;
    msg.psi = 0.08240480008596751;
    msg.p = 0.6043445006439666;
    msg.q = 0.8748368919744676;
    msg.r = 0.17282556201140953;
    msg.u = 0.6822496581197229;
    msg.v = 0.31970599259859955;
    msg.w = 0.6805364563332301;
    msg.bias_psi = 0.7846460685109301;
    msg.bias_r = 0.1648683973064391;

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
    msg.setTimeStamp(0.890468241942118);
    msg.setSource(45068U);
    msg.setSourceEntity(241U);
    msg.setDestination(8718U);
    msg.setDestinationEntity(72U);
    msg.x = 0.18612811231476212;
    msg.y = 0.0543915856553675;
    msg.z = 0.02213645247738938;
    msg.phi = 0.7997778965949451;
    msg.theta = 0.10766562509233346;
    msg.psi = 0.6826054279554568;
    msg.p = 0.9302957909371056;
    msg.q = 0.11531712437250641;
    msg.r = 0.051686398031923875;
    msg.u = 0.3076879863359704;
    msg.v = 0.6515032074707332;
    msg.w = 0.4537929293485299;
    msg.bias_psi = 0.02198094733533784;
    msg.bias_r = 0.6617593726787789;

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
    msg.setTimeStamp(0.7804665440332904);
    msg.setSource(44130U);
    msg.setSourceEntity(129U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.8152486589294654;
    msg.bias_r = 0.47981895106401773;
    msg.cog = 0.7069904493337515;
    msg.cyaw = 0.28701446793217356;
    msg.lbl_rej_level = 0.20913725318704113;
    msg.gps_rej_level = 0.037997389499092926;
    msg.custom_x = 0.42039579704232766;
    msg.custom_y = 0.9090865450721682;
    msg.custom_z = 0.16264711238412755;

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
    msg.setTimeStamp(0.7303407397860413);
    msg.setSource(18610U);
    msg.setSourceEntity(183U);
    msg.setDestination(51712U);
    msg.setDestinationEntity(2U);
    msg.bias_psi = 0.6510675301231492;
    msg.bias_r = 0.047072244020771814;
    msg.cog = 0.3237330643465297;
    msg.cyaw = 0.5614996933746323;
    msg.lbl_rej_level = 0.49830652473596093;
    msg.gps_rej_level = 0.8411721949343816;
    msg.custom_x = 0.8838452528161731;
    msg.custom_y = 0.49998270137116707;
    msg.custom_z = 0.016320807305199914;

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
    msg.setTimeStamp(0.23847898504735043);
    msg.setSource(25687U);
    msg.setSourceEntity(14U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.7961270271079683;
    msg.bias_r = 0.5991476819354834;
    msg.cog = 0.5509484557793196;
    msg.cyaw = 0.8011305098830637;
    msg.lbl_rej_level = 0.35626477659583566;
    msg.gps_rej_level = 0.8710888764283997;
    msg.custom_x = 0.386539211722427;
    msg.custom_y = 0.5696265650157268;
    msg.custom_z = 0.3859853753267881;

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
    msg.setTimeStamp(0.021765110874212623);
    msg.setSource(60435U);
    msg.setSourceEntity(81U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(8U);
    msg.utc_time = 0.7375402748040553;
    msg.reason = 133U;

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
    msg.setTimeStamp(0.2595239985920177);
    msg.setSource(1023U);
    msg.setSourceEntity(11U);
    msg.setDestination(39402U);
    msg.setDestinationEntity(140U);
    msg.utc_time = 0.23415389721303292;
    msg.reason = 12U;

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
    msg.setTimeStamp(0.024505558703676322);
    msg.setSource(26136U);
    msg.setSourceEntity(17U);
    msg.setDestination(34878U);
    msg.setDestinationEntity(0U);
    msg.utc_time = 0.6981730267797414;
    msg.reason = 105U;

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
    msg.setTimeStamp(0.8973635147525818);
    msg.setSource(31187U);
    msg.setSourceEntity(36U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(136U);
    msg.id = 193U;
    msg.range = 0.5558998560178409;
    msg.acceptance = 89U;

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
    msg.setTimeStamp(0.1272530714777328);
    msg.setSource(60326U);
    msg.setSourceEntity(12U);
    msg.setDestination(39496U);
    msg.setDestinationEntity(91U);
    msg.id = 247U;
    msg.range = 0.5528904985300397;
    msg.acceptance = 93U;

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
    msg.setTimeStamp(0.242819819552603);
    msg.setSource(8612U);
    msg.setSourceEntity(35U);
    msg.setDestination(56262U);
    msg.setDestinationEntity(155U);
    msg.id = 20U;
    msg.range = 0.8581851647118148;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.9537322459552539);
    msg.setSource(12416U);
    msg.setSourceEntity(91U);
    msg.setDestination(45213U);
    msg.setDestinationEntity(22U);
    msg.type = 127U;
    msg.reason = 155U;
    msg.value = 0.9288053223587235;
    msg.timestep = 0.9611889013908659;

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
    msg.setTimeStamp(0.8448967655203533);
    msg.setSource(12509U);
    msg.setSourceEntity(152U);
    msg.setDestination(39408U);
    msg.setDestinationEntity(153U);
    msg.type = 143U;
    msg.reason = 156U;
    msg.value = 0.03298495827605197;
    msg.timestep = 0.037322968759699315;

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
    msg.setTimeStamp(0.2429758066788047);
    msg.setSource(33057U);
    msg.setSourceEntity(67U);
    msg.setDestination(61130U);
    msg.setDestinationEntity(167U);
    msg.type = 129U;
    msg.reason = 1U;
    msg.value = 0.6383207310862581;
    msg.timestep = 0.3765676384591842;

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
    msg.setTimeStamp(0.7277016431051098);
    msg.setSource(12171U);
    msg.setSourceEntity(102U);
    msg.setDestination(31531U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.1802076224585052);
    msg.setSource(26030U);
    msg.setSourceEntity(229U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.2580980374789753);
    msg.setSource(25524U);
    msg.setSourceEntity(121U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.5130220281350916);
    msg.setSource(32647U);
    msg.setSourceEntity(131U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(220U);
    msg.beacon.assign("OZXBFZNSFGUNNFGCIDZUCVDJAXSDQMQHEJXPLAJOMLARVYNIBWBVFJWK");
    msg.x = 0.39964069555838366;
    msg.y = 0.640753580598054;
    msg.depth = 0.7121912030693541;
    msg.var_x = 0.920819889486628;
    msg.var_y = 0.9052206997316024;

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
    msg.setTimeStamp(0.20875400477113593);
    msg.setSource(19721U);
    msg.setSourceEntity(163U);
    msg.setDestination(40382U);
    msg.setDestinationEntity(65U);
    msg.beacon.assign("FSCKAQIUUKFUJSGVAXSTQDWIZLNHNMUAXVQNYNYSLBLDXTLVFAJWMGBRPXXYIUENDJPSRSZGOYRISZWWOMXXVEKWTNTCCUOFZWKE");
    msg.x = 0.6233984686204219;
    msg.y = 0.30797223231321724;
    msg.depth = 0.2648643055876304;
    msg.var_x = 0.446520561502574;
    msg.var_y = 0.2529544845701621;

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
    msg.setTimeStamp(0.365002213540093);
    msg.setSource(60630U);
    msg.setSourceEntity(118U);
    msg.setDestination(17970U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("EGHWRTZFYZMURIJPEMOLADDSSAGHDAQDXHSQTTYHOYBKWKPZFUAMMRMCDEOANTWPTFDYHWTHCULLTHIQWEZSLJDNBKMUIRYIIJGLNFJSJBOQARRGDLGUNBWPJJRVZIXCWEAOBSISOGTLSFURVXOBHDVKNGZHEXQWUXSRBJZF");
    msg.x = 0.48035134925621503;
    msg.y = 0.45641593792934787;
    msg.depth = 0.08364987201080276;
    msg.var_x = 0.5380035393811009;
    msg.var_y = 0.7214919046615172;

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
    msg.setTimeStamp(0.699889472358441);
    msg.setSource(38990U);
    msg.setSourceEntity(125U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(38U);
    msg.value = 0.27201875781224527;

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
    msg.setTimeStamp(0.5947439898859375);
    msg.setSource(33635U);
    msg.setSourceEntity(16U);
    msg.setDestination(18867U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8459216236772759;

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
    msg.setTimeStamp(0.04466399646354802);
    msg.setSource(37954U);
    msg.setSourceEntity(161U);
    msg.setDestination(133U);
    msg.setDestinationEntity(131U);
    msg.value = 0.1093740753391752;

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
    msg.setTimeStamp(0.9677380401748967);
    msg.setSource(13074U);
    msg.setSourceEntity(0U);
    msg.setDestination(10290U);
    msg.setDestinationEntity(250U);
    msg.value = 0.21759633303581294;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.6838773417537346);
    msg.setSource(54260U);
    msg.setSourceEntity(102U);
    msg.setDestination(5579U);
    msg.setDestinationEntity(122U);
    msg.value = 0.2265366556085564;
    msg.z_units = 65U;

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
    msg.setTimeStamp(0.11029309587015956);
    msg.setSource(31222U);
    msg.setSourceEntity(210U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9610675726635635;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.6912715103070242);
    msg.setSource(53442U);
    msg.setSourceEntity(215U);
    msg.setDestination(53127U);
    msg.setDestinationEntity(187U);
    msg.value = 0.4245577095445817;
    msg.speed_units = 253U;

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
    msg.setTimeStamp(0.7465842372655558);
    msg.setSource(13311U);
    msg.setSourceEntity(98U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(31U);
    msg.value = 0.8134611828979726;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.07294645868398153);
    msg.setSource(37814U);
    msg.setSourceEntity(165U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(144U);
    msg.value = 0.3553856173754868;
    msg.speed_units = 137U;

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
    msg.setTimeStamp(0.20324376025964286);
    msg.setSource(18417U);
    msg.setSourceEntity(172U);
    msg.setDestination(43320U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9323142941547468;

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
    msg.setTimeStamp(0.2850195030576601);
    msg.setSource(44673U);
    msg.setSourceEntity(78U);
    msg.setDestination(61385U);
    msg.setDestinationEntity(244U);
    msg.value = 0.21207310138355728;

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
    msg.setTimeStamp(0.6742107748610076);
    msg.setSource(58207U);
    msg.setSourceEntity(229U);
    msg.setDestination(22726U);
    msg.setDestinationEntity(95U);
    msg.value = 0.20526176455023093;

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
    msg.setTimeStamp(0.73507207254727);
    msg.setSource(9244U);
    msg.setSourceEntity(0U);
    msg.setDestination(40154U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3218463321938234;

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
    msg.setTimeStamp(0.3055823334967428);
    msg.setSource(27974U);
    msg.setSourceEntity(184U);
    msg.setDestination(55662U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7533733831000269;

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
    msg.setTimeStamp(0.9546035161660533);
    msg.setSource(21971U);
    msg.setSourceEntity(168U);
    msg.setDestination(54022U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6657834427881412;

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
    msg.setTimeStamp(0.8053424546798222);
    msg.setSource(12826U);
    msg.setSourceEntity(26U);
    msg.setDestination(58877U);
    msg.setDestinationEntity(63U);
    msg.value = 0.05671206090704839;

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
    msg.setTimeStamp(0.7937167857823662);
    msg.setSource(34763U);
    msg.setSourceEntity(20U);
    msg.setDestination(41650U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7430900549179161;

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
    msg.setTimeStamp(0.886481305014984);
    msg.setSource(54658U);
    msg.setSourceEntity(179U);
    msg.setDestination(55274U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6672338752318004;

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
    msg.setTimeStamp(0.6833685867019705);
    msg.setSource(9717U);
    msg.setSourceEntity(68U);
    msg.setDestination(34243U);
    msg.setDestinationEntity(92U);
    msg.start_lat = 0.2831878955802357;
    msg.start_lon = 0.5783200777258843;
    msg.start_z = 0.7451159776050705;
    msg.start_z_units = 96U;
    msg.end_lat = 0.4696285559629314;
    msg.end_lon = 0.7016637051355817;
    msg.end_z = 0.06119678016252916;
    msg.end_z_units = 239U;
    msg.speed = 0.045734494528991476;
    msg.speed_units = 31U;
    msg.lradius = 0.8187804936844011;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.910504765600539);
    msg.setSource(25431U);
    msg.setSourceEntity(67U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(46U);
    msg.start_lat = 0.1691729506246643;
    msg.start_lon = 0.8859236168219408;
    msg.start_z = 0.0028289574874289514;
    msg.start_z_units = 31U;
    msg.end_lat = 0.46031328473667843;
    msg.end_lon = 0.09628785832717346;
    msg.end_z = 0.738291785210156;
    msg.end_z_units = 174U;
    msg.speed = 0.6630755039765083;
    msg.speed_units = 181U;
    msg.lradius = 0.06809192672367459;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.7334864992655006);
    msg.setSource(10272U);
    msg.setSourceEntity(35U);
    msg.setDestination(47801U);
    msg.setDestinationEntity(178U);
    msg.start_lat = 0.4075722137156348;
    msg.start_lon = 0.42222154467892936;
    msg.start_z = 0.22355786609219097;
    msg.start_z_units = 103U;
    msg.end_lat = 0.7676660401795007;
    msg.end_lon = 0.6555953899957017;
    msg.end_z = 0.9258152101670019;
    msg.end_z_units = 253U;
    msg.speed = 0.5278870890619627;
    msg.speed_units = 14U;
    msg.lradius = 0.14026181940862303;
    msg.flags = 236U;

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
    msg.setTimeStamp(0.5260794249429628);
    msg.setSource(23033U);
    msg.setSourceEntity(214U);
    msg.setDestination(60833U);
    msg.setDestinationEntity(195U);
    msg.x = 0.11195861197145063;
    msg.y = 0.12295572238652686;
    msg.z = 0.614561429632667;
    msg.k = 0.07964642301547731;
    msg.m = 0.6751034501592673;
    msg.n = 0.669712265657418;
    msg.flags = 128U;

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
    msg.setTimeStamp(0.22559903082944188);
    msg.setSource(24534U);
    msg.setSourceEntity(57U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(9U);
    msg.x = 0.882619015506555;
    msg.y = 0.5723227060102243;
    msg.z = 0.514136973012194;
    msg.k = 0.4712493751681981;
    msg.m = 0.9217013502892485;
    msg.n = 0.8397209864858233;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.8215449898735276);
    msg.setSource(3662U);
    msg.setSourceEntity(32U);
    msg.setDestination(43697U);
    msg.setDestinationEntity(159U);
    msg.x = 0.2773543573677151;
    msg.y = 0.3053520330019275;
    msg.z = 0.3545616688567037;
    msg.k = 0.8790280619390579;
    msg.m = 0.07778864401408858;
    msg.n = 0.3279646914955463;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.4022171947394101);
    msg.setSource(29416U);
    msg.setSourceEntity(13U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9754236125570899;

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
    msg.setTimeStamp(0.28369486905853813);
    msg.setSource(5081U);
    msg.setSourceEntity(94U);
    msg.setDestination(22751U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5161489044815815;

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
    msg.setTimeStamp(0.7428712405314245);
    msg.setSource(53064U);
    msg.setSourceEntity(143U);
    msg.setDestination(47904U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9843452824341107;

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
    msg.setTimeStamp(0.27683587632914874);
    msg.setSource(17923U);
    msg.setSourceEntity(247U);
    msg.setDestination(18589U);
    msg.setDestinationEntity(127U);
    msg.u = 0.5320510010833122;
    msg.v = 0.3666122537915839;
    msg.w = 0.3487296339893561;
    msg.p = 0.19044318816255335;
    msg.q = 0.5553462910653838;
    msg.r = 0.22722757978355124;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.5349499183100814);
    msg.setSource(18118U);
    msg.setSourceEntity(63U);
    msg.setDestination(51500U);
    msg.setDestinationEntity(154U);
    msg.u = 0.7849889421748422;
    msg.v = 0.8983111627736307;
    msg.w = 0.7360424398856676;
    msg.p = 0.19288330554555644;
    msg.q = 0.9674113980479196;
    msg.r = 0.923884390396844;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.4681767594447426);
    msg.setSource(33008U);
    msg.setSourceEntity(55U);
    msg.setDestination(58778U);
    msg.setDestinationEntity(217U);
    msg.u = 0.8511965945826233;
    msg.v = 0.9398738494986093;
    msg.w = 0.5109722863476551;
    msg.p = 0.47738318017138404;
    msg.q = 0.7127085665527927;
    msg.r = 0.47344329936429275;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.9322477159830507);
    msg.setSource(13741U);
    msg.setSourceEntity(149U);
    msg.setDestination(12105U);
    msg.setDestinationEntity(198U);
    msg.start_lat = 0.05365902680468515;
    msg.start_lon = 0.36702226007376637;
    msg.start_z = 0.2835014879359733;
    msg.start_z_units = 4U;
    msg.end_lat = 0.24345385935399755;
    msg.end_lon = 0.5979214471592632;
    msg.end_z = 0.19560433437897573;
    msg.end_z_units = 198U;
    msg.lradius = 0.6494330946598245;
    msg.flags = 142U;
    msg.x = 0.8998717360056337;
    msg.y = 0.673505920527743;
    msg.z = 0.04877609354986301;
    msg.vx = 0.8515865064140217;
    msg.vy = 0.2588763490144812;
    msg.vz = 0.633035581233863;
    msg.course_error = 0.18970730847609674;
    msg.eta = 12780U;

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
    msg.setTimeStamp(0.0072988093462881265);
    msg.setSource(55705U);
    msg.setSourceEntity(73U);
    msg.setDestination(5150U);
    msg.setDestinationEntity(246U);
    msg.start_lat = 0.6408137341737928;
    msg.start_lon = 0.004150949871034926;
    msg.start_z = 0.8855448977343326;
    msg.start_z_units = 185U;
    msg.end_lat = 0.3472765859351351;
    msg.end_lon = 0.3935464239860851;
    msg.end_z = 0.612268326971472;
    msg.end_z_units = 99U;
    msg.lradius = 0.08238303712779826;
    msg.flags = 57U;
    msg.x = 0.27728094238856493;
    msg.y = 0.08210037704628392;
    msg.z = 0.8417865476992344;
    msg.vx = 0.6617123779968143;
    msg.vy = 0.1469329965141264;
    msg.vz = 0.7471897772039284;
    msg.course_error = 0.9068329273561323;
    msg.eta = 40514U;

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
    msg.setTimeStamp(0.415169014170641);
    msg.setSource(26222U);
    msg.setSourceEntity(79U);
    msg.setDestination(19852U);
    msg.setDestinationEntity(201U);
    msg.start_lat = 0.3366342322345742;
    msg.start_lon = 0.20759886853889964;
    msg.start_z = 0.324716358100986;
    msg.start_z_units = 208U;
    msg.end_lat = 0.2901126096305977;
    msg.end_lon = 0.40915503298096667;
    msg.end_z = 0.24375444924574685;
    msg.end_z_units = 114U;
    msg.lradius = 0.7661334895044197;
    msg.flags = 120U;
    msg.x = 0.6670346544017525;
    msg.y = 0.9831391870178662;
    msg.z = 0.6485832779375991;
    msg.vx = 0.5418573507942667;
    msg.vy = 0.9208362857496002;
    msg.vz = 0.6355208224985422;
    msg.course_error = 0.9188583914142534;
    msg.eta = 12576U;

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
    msg.setTimeStamp(0.19163295868473051);
    msg.setSource(38361U);
    msg.setSourceEntity(157U);
    msg.setDestination(13960U);
    msg.setDestinationEntity(15U);
    msg.k = 0.3527797523864159;
    msg.m = 0.8438120177767898;
    msg.n = 0.44304704862180044;

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
    msg.setTimeStamp(0.868670462891107);
    msg.setSource(49748U);
    msg.setSourceEntity(199U);
    msg.setDestination(4674U);
    msg.setDestinationEntity(223U);
    msg.k = 0.8856527954037657;
    msg.m = 0.7159606148514951;
    msg.n = 0.36559693279986927;

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
    msg.setTimeStamp(0.014943706969288595);
    msg.setSource(21218U);
    msg.setSourceEntity(22U);
    msg.setDestination(48623U);
    msg.setDestinationEntity(190U);
    msg.k = 0.7523906439153437;
    msg.m = 0.30909820482944017;
    msg.n = 0.7786182279425672;

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
    msg.setTimeStamp(0.6243656229101033);
    msg.setSource(38913U);
    msg.setSourceEntity(2U);
    msg.setDestination(9385U);
    msg.setDestinationEntity(31U);
    msg.p = 0.5311028428783771;
    msg.i = 0.8123263324149225;
    msg.d = 0.12691758981049306;
    msg.a = 0.9675849920274189;

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
    msg.setTimeStamp(0.42164323816955396);
    msg.setSource(28089U);
    msg.setSourceEntity(100U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(254U);
    msg.p = 0.951273299504528;
    msg.i = 0.517887802508766;
    msg.d = 0.6899634185871094;
    msg.a = 0.2561359202124118;

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
    msg.setTimeStamp(0.07519336838717516);
    msg.setSource(3797U);
    msg.setSourceEntity(143U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(89U);
    msg.p = 0.24006027347129377;
    msg.i = 0.2978403043258584;
    msg.d = 0.3708500481627205;
    msg.a = 0.44925560791388164;

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
    msg.setTimeStamp(0.4558250358991113);
    msg.setSource(65423U);
    msg.setSourceEntity(180U);
    msg.setDestination(63096U);
    msg.setDestinationEntity(207U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.5605346836141125);
    msg.setSource(14119U);
    msg.setSourceEntity(217U);
    msg.setDestination(45606U);
    msg.setDestinationEntity(21U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.7430924674718431);
    msg.setSource(18817U);
    msg.setSourceEntity(17U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(175U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.02053277156827693);
    msg.setSource(12617U);
    msg.setSourceEntity(138U);
    msg.setDestination(52469U);
    msg.setDestinationEntity(237U);
    msg.timeout = 64578U;
    msg.lat = 0.3138283566918282;
    msg.lon = 0.44758622324216946;
    msg.z = 0.024320634513770423;
    msg.z_units = 38U;
    msg.speed = 0.4827013063833955;
    msg.speed_units = 210U;
    msg.roll = 0.8779084649564698;
    msg.pitch = 0.3120739210764045;
    msg.yaw = 0.9689101140287968;
    msg.custom.assign("NYXFRKOKWOCKVHKILHARVQWOBJGPMCEATGELLLWNXSYFPSRZLIZLPBQDDABASVQJBKZQHMFASUPXEGKSDBHNYERNLXTERVRZIBNODGFKICCWHIGMWNLCVEUXHOYVRYWCHAFHG");

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
    msg.setTimeStamp(0.9603153913580871);
    msg.setSource(22373U);
    msg.setSourceEntity(70U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(6U);
    msg.timeout = 44554U;
    msg.lat = 0.28538235496568554;
    msg.lon = 0.7465395975584489;
    msg.z = 0.6371547244731004;
    msg.z_units = 143U;
    msg.speed = 0.839544383019913;
    msg.speed_units = 110U;
    msg.roll = 0.7294050482161606;
    msg.pitch = 0.2954020475115019;
    msg.yaw = 0.4255520378213967;
    msg.custom.assign("YOPRSMCFGFDIVWNAVKYNKPGYUKAVBZPRQYSIDITHMZIUTWJTXBFUYAGYENFFRFURINTRUCMBCHPHGKKRHIQKAPUHMUTAGJMYAEMCLQSMMJIUFEQVHOHTKPSUSOXBRYXNIHJOZBLLFQJGWXDAJIBXKTFOWZXQTOEZOZCBGQESPYPNWJQGWWBSVGJXEFSWBJGWJZAZTEB");

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
    msg.setTimeStamp(0.788532546613009);
    msg.setSource(53161U);
    msg.setSourceEntity(168U);
    msg.setDestination(49026U);
    msg.setDestinationEntity(160U);
    msg.timeout = 64626U;
    msg.lat = 0.42391406956496536;
    msg.lon = 0.4525351774514743;
    msg.z = 0.7358006692114762;
    msg.z_units = 151U;
    msg.speed = 0.7278785682629726;
    msg.speed_units = 124U;
    msg.roll = 0.28039739345727577;
    msg.pitch = 0.4516404025019728;
    msg.yaw = 0.22804744366373508;
    msg.custom.assign("SYSLIVHNGZDNNDAHDYGAKCRURIBMGSBPWRYTHKJHIVMKILPNHZBLMCJXTJMSMJEFQFSDCGYTLXGHLRLVKDDKQRYUXICUNOJNRHTPQUCNJOFCFXKBCEEBKZOOPUQWNSRGTYPXQOIOWGCFPFUWSJPHKTQFMPEFX");

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
    msg.setTimeStamp(0.714221016227331);
    msg.setSource(41962U);
    msg.setSourceEntity(161U);
    msg.setDestination(24743U);
    msg.setDestinationEntity(166U);
    msg.timeout = 63510U;
    msg.lat = 0.06573307994540101;
    msg.lon = 0.44901806678025014;
    msg.z = 0.1398458541670835;
    msg.z_units = 241U;
    msg.speed = 0.8694443248184337;
    msg.speed_units = 223U;
    msg.duration = 11937U;
    msg.radius = 0.13745318573864973;
    msg.flags = 133U;
    msg.custom.assign("OUAVWRVAOZ");

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
    msg.setTimeStamp(0.9517080596462932);
    msg.setSource(35694U);
    msg.setSourceEntity(102U);
    msg.setDestination(1427U);
    msg.setDestinationEntity(112U);
    msg.timeout = 4325U;
    msg.lat = 0.09419276974812585;
    msg.lon = 0.44935716254268043;
    msg.z = 0.9625576510553157;
    msg.z_units = 32U;
    msg.speed = 0.08752079636087529;
    msg.speed_units = 214U;
    msg.duration = 17533U;
    msg.radius = 0.15355988103275497;
    msg.flags = 206U;
    msg.custom.assign("USDJADUYNGOWUGHMTPMTLEYMZMHHXBYROJBSCIJSMDRYFLSTZ");

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
    msg.setTimeStamp(0.9167308544044223);
    msg.setSource(4013U);
    msg.setSourceEntity(25U);
    msg.setDestination(33881U);
    msg.setDestinationEntity(95U);
    msg.timeout = 1683U;
    msg.lat = 0.20331019767042413;
    msg.lon = 0.5113484925331399;
    msg.z = 0.7050025348412342;
    msg.z_units = 190U;
    msg.speed = 0.35258791168550163;
    msg.speed_units = 29U;
    msg.duration = 52379U;
    msg.radius = 0.29961904806271034;
    msg.flags = 5U;
    msg.custom.assign("JKXTQTSZXGPEHECCAFHQHDBEVJUONUAODYPZVUMOSHBSVDXJSNGMLLWUQXEYVGEPNXXWXKGJOGNHKFLVLIMOGIBTPZWOVFIRDCRAMZJYWEPWJCYQRUMHZZFIGFNIZEKLYBSFOTTCBRMLNOWCQDQVCTUYSSRMYJXUVPIJBVCATZBXDOVQHYTAPACSKLTKHLQAWQGRA");

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
    msg.setTimeStamp(0.9160149573862512);
    msg.setSource(1616U);
    msg.setSourceEntity(95U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(190U);
    msg.custom.assign("LCAEZUSXSLEQJJJFSVCJBWSNLWQODSVKLYJQZJBLGVPRYGNQEYRCHRFMQGQTAWHYDXPHTFHRPGYYKZCDQUWSBDFMKPUZDXAAIMANQWNUEGILCCB");

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
    msg.setTimeStamp(0.6130505269120946);
    msg.setSource(31776U);
    msg.setSourceEntity(87U);
    msg.setDestination(47405U);
    msg.setDestinationEntity(27U);
    msg.custom.assign("PQZWOITYANFRY");

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
    msg.setTimeStamp(0.3334306993623336);
    msg.setSource(61210U);
    msg.setSourceEntity(184U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(140U);
    msg.custom.assign("RLHZLGTGKQHCOOBYFNWZMXOTGDIWFHRIVUWTZRBISCHBAOYEGVLLGRNASPSMQDGGUUQDUQMXMSELJDOVKRJVFOBVOVSACSYWHJHYTYJNRBVIWGEXKBDCPHDWJMFBTCAEHHAAPHIUJXPIBPJFEKNPNUCZNMWCUXYCWSBRRIQPFZITMAKUFIXDQLKEMBCDMYTSZDWIRVZLJNQZWYKMVZAXQE");

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
    msg.setTimeStamp(0.29803283833477223);
    msg.setSource(59636U);
    msg.setSourceEntity(161U);
    msg.setDestination(15438U);
    msg.setDestinationEntity(12U);
    msg.timeout = 18969U;
    msg.lat = 0.8716251313007305;
    msg.lon = 0.8126058050176136;
    msg.z = 0.518171040213867;
    msg.z_units = 243U;
    msg.duration = 59149U;
    msg.speed = 0.6457775473133447;
    msg.speed_units = 237U;
    msg.type = 221U;
    msg.radius = 0.8802342878839798;
    msg.length = 0.6044496830057078;
    msg.bearing = 0.6889470518074343;
    msg.direction = 35U;
    msg.custom.assign("COMMIIKJELFIXLUSGMGVYWISKAYBDSXHAWMUHNVJMCOYHIWDKEUQNIXOXTEUGVHDTGJSPOPDEMCZJETSQKJEBUPENYAHVFNJAEORJMLNPLXX");

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
    msg.setTimeStamp(0.015992032116671995);
    msg.setSource(20987U);
    msg.setSourceEntity(214U);
    msg.setDestination(56258U);
    msg.setDestinationEntity(225U);
    msg.timeout = 15508U;
    msg.lat = 0.1168595371099922;
    msg.lon = 0.6347545360806486;
    msg.z = 0.949314794909941;
    msg.z_units = 113U;
    msg.duration = 14216U;
    msg.speed = 0.5607491564481494;
    msg.speed_units = 172U;
    msg.type = 168U;
    msg.radius = 0.5203199983978138;
    msg.length = 0.03811195748843099;
    msg.bearing = 0.7054944864929875;
    msg.direction = 179U;
    msg.custom.assign("FBWZJPBEQSSQCKOIWWMJPVOMOUJIWZZFBABMXIYRROQGIZLVADPLDWVQCSGVIPSPNTNMWPMGJNCCEMKAWXYKTUDMNSEZCCFAKTGBUIXYTRHLFLANCIXNQTZCVRWMBVLAGWOPHZRIDGMVYREHRQZGHOTFOIKBYSEJFUXBWKAOFQGUGJYDHHQSKGNHUKVLFOENX");

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
    msg.setTimeStamp(0.6006879280245064);
    msg.setSource(27516U);
    msg.setSourceEntity(215U);
    msg.setDestination(56324U);
    msg.setDestinationEntity(172U);
    msg.timeout = 3905U;
    msg.lat = 0.4354395050562363;
    msg.lon = 0.31802858242705645;
    msg.z = 0.6964040443041954;
    msg.z_units = 107U;
    msg.duration = 56626U;
    msg.speed = 0.8343418030322436;
    msg.speed_units = 23U;
    msg.type = 103U;
    msg.radius = 0.08070036201856545;
    msg.length = 0.04597033166154407;
    msg.bearing = 0.03713727139926237;
    msg.direction = 174U;
    msg.custom.assign("EPRMRFOQHIZXGHXBAAANJRJEXZQVQRMGZWTGBXEIKESYXTRVUTTUCSFZKWMXGNSPEJFIRKKBKGTOKARAGQQIFLDUWZD");

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
    msg.setTimeStamp(0.9321375803759817);
    msg.setSource(7523U);
    msg.setSourceEntity(110U);
    msg.setDestination(22133U);
    msg.setDestinationEntity(119U);
    msg.duration = 866U;
    msg.custom.assign("RBQFCECEWIKQTSJGVMDIYDLHWLHDZIVTRAYQEKRCUGSXTCBTVXQBAJEPXPYZLACLMUBZOHIJBCJEYGDQMJCJTVLHBZFQZSHCPOGJMGSKLZGOZPRXKUYJMKL");

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
    msg.setTimeStamp(0.6742339685941756);
    msg.setSource(63049U);
    msg.setSourceEntity(197U);
    msg.setDestination(6768U);
    msg.setDestinationEntity(84U);
    msg.duration = 52155U;
    msg.custom.assign("SPKGNDSFZTLMOWFGYAQIVFEVTVBGCAAPGZYUBQMKPPSXCLZCZORTYWKFLWIUQUJUXMNHKTHDHMBFWHEQSRJNOAFNHKKAIOJQBQBTSWWDPCXGGNKAZSXERWHOISOAKZLMTBYTEDXBPHBZYEKLZPMHIRRRYLANNJUROGCETAEVMGJMWVXUHW");

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
    msg.setTimeStamp(0.8145491837263658);
    msg.setSource(32833U);
    msg.setSourceEntity(124U);
    msg.setDestination(60297U);
    msg.setDestinationEntity(84U);
    msg.duration = 28534U;
    msg.custom.assign("HAQMMDZFTCNSGFKTWIEJITPPTLOQBIRXNYKFRDYBKGLALNJQSXREJIWHCIJWGLVTNM");

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
    msg.setTimeStamp(0.2644346741635639);
    msg.setSource(22200U);
    msg.setSourceEntity(241U);
    msg.setDestination(465U);
    msg.setDestinationEntity(109U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8311655544619867;
    tmp_msg_0.speed_units = 125U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21652U;
    msg.custom.assign("GEJLLCYXFRJNKDXZAACWUFAMQKTFZXHSTZZGASOVNIUVUIVVDJQYKXMDYLWKWPEQONVWCKFQQNGHIWCCUZUATBOBHBHCDEDYCYRRLYXPOXIVRBIHJVBPHERLEGAQRPTERMCOXBFICLIFLYLBJGSDWGJPLUKNHONXHWVAOIGUOPOASMWSLDZVAMESJPEMOTTUDKMJXFDMKNFYMPZQZHQRFEDY");

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
    msg.setTimeStamp(0.995842554600255);
    msg.setSource(13192U);
    msg.setSourceEntity(5U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(216U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9445025173294687;
    tmp_msg_0.speed_units = 120U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61788U;
    msg.custom.assign("IKSRSHQFDTHSTMRPXAOHPDZDISCHCWDXJNKFHRTNLQCNBBPBKCYGNYPZAMSFHULWEVGQDDVBMUFGNDFKEADCQEAMZAYUVWMYKXIJTVLMPEYOEWUCTIHGDOSXYWIKGIYFRCLIVULVOUNZGKXEKBJUMTRHVTALJZWGUAFQBAYWXJMRPGSKLSDVZSHIFQQZNVWEZSQJPPJX");

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
    msg.setTimeStamp(0.025117004747480576);
    msg.setSource(12594U);
    msg.setSourceEntity(54U);
    msg.setDestination(9699U);
    msg.setDestinationEntity(233U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5986882313143442;
    msg.control.set(tmp_msg_0);
    msg.duration = 63719U;
    msg.custom.assign("MTDINVXMVIWUITAMZSLELUYSOEPPYFQVEHEHTAIPLNXNOEUFVOZCFRPEXOFMHWXJWUKMQDSOSLCRZLNHGRFLLBHQYNMTZPFWCVDRUCGGUJOJROYZGJUOUQNAHTKJAQ");

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
    msg.setTimeStamp(0.7403996986823512);
    msg.setSource(27740U);
    msg.setSourceEntity(0U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(220U);
    msg.timeout = 1291U;
    msg.lat = 0.714458804749058;
    msg.lon = 0.7514660196916956;
    msg.z = 0.6362279950164119;
    msg.z_units = 137U;
    msg.speed = 0.05330609028413513;
    msg.speed_units = 159U;
    msg.bearing = 0.9875080903605484;
    msg.cross_angle = 0.5320516465049634;
    msg.width = 0.8178243401488102;
    msg.length = 0.5879924888121467;
    msg.hstep = 0.6233049388061462;
    msg.coff = 44U;
    msg.alternation = 128U;
    msg.flags = 212U;
    msg.custom.assign("HMLAERNEOLIUXZZVSFSQKZTFKRGDQQXTW");

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
    msg.setTimeStamp(0.04306690336357655);
    msg.setSource(19043U);
    msg.setSourceEntity(99U);
    msg.setDestination(31586U);
    msg.setDestinationEntity(77U);
    msg.timeout = 43663U;
    msg.lat = 0.7832003187482718;
    msg.lon = 0.03535763568279826;
    msg.z = 0.90629716712981;
    msg.z_units = 106U;
    msg.speed = 0.3203446457298815;
    msg.speed_units = 176U;
    msg.bearing = 0.09156454657296498;
    msg.cross_angle = 0.4345462285284961;
    msg.width = 0.5580365342152324;
    msg.length = 0.5235588575793217;
    msg.hstep = 0.15490891344998425;
    msg.coff = 63U;
    msg.alternation = 207U;
    msg.flags = 189U;
    msg.custom.assign("OGFSYDGWVZFNIJKMDIXWEEMESOAHVDZCVQLRKNFWUBWUXXAOCDLOYCTRJGNGDUTPTTJBNIZAWMPSTFNHRQUKKWGUPZCAYVWWLASQHEEAIWHOJBLOPTMDAFKONLRMLXNYMZZFJDXJGVYFPHRYSSQGETLHVUHUXCKJLKRCKRJSQYLGBIPHAISVOHTNQZMWKNZYXQXGQRQBKYHRJSBCDJFUCXIBEZAAMSQBMPXTPOERECEZFYBLDCB");

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
    msg.setTimeStamp(0.19407105412077086);
    msg.setSource(18720U);
    msg.setSourceEntity(112U);
    msg.setDestination(60751U);
    msg.setDestinationEntity(226U);
    msg.timeout = 3798U;
    msg.lat = 0.4669991556154598;
    msg.lon = 0.41495043018261457;
    msg.z = 0.877589573597651;
    msg.z_units = 140U;
    msg.speed = 0.855812542943212;
    msg.speed_units = 236U;
    msg.bearing = 0.7225088068002298;
    msg.cross_angle = 0.9203623937398666;
    msg.width = 0.961626828865395;
    msg.length = 0.1785554900253108;
    msg.hstep = 0.4532404721520844;
    msg.coff = 65U;
    msg.alternation = 188U;
    msg.flags = 174U;
    msg.custom.assign("FHIMOEXKVZGRRIUONJXOAZBUIRUSDVGOQUGJNLPMVILJCYVVCDTOJSSQNKEFAIQFZMPQMVHUOVBAJFDRKBTDFRLXXTBBUKKYHSSSBXTXGNOQPAAXHYEYWDKPTWCSCGWPPAXYUWKCWHFEULKQNTULEFCYCS");

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
    msg.setTimeStamp(0.6280709503580891);
    msg.setSource(27528U);
    msg.setSourceEntity(107U);
    msg.setDestination(45345U);
    msg.setDestinationEntity(94U);
    msg.timeout = 44131U;
    msg.lat = 0.6524885166350223;
    msg.lon = 0.3761821067369864;
    msg.z = 0.8931694304729795;
    msg.z_units = 122U;
    msg.speed = 0.12844738554652346;
    msg.speed_units = 142U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0019965928803402644;
    tmp_msg_0.y = 0.9352860176192109;
    tmp_msg_0.z = 0.5221625340401832;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RNCMBTVKDOBLHZSFWQJTRIOEEZKHQJCQWWXGUDLXZGCBTEQSDSSNTKTHZIDPCVGHZJPWMEPACMQWGNAWRSJGDJWOFYBCFRLX");

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
    msg.setTimeStamp(0.3735261036055513);
    msg.setSource(45171U);
    msg.setSourceEntity(149U);
    msg.setDestination(34600U);
    msg.setDestinationEntity(42U);
    msg.timeout = 24221U;
    msg.lat = 0.9866966334925851;
    msg.lon = 0.0013075320564842619;
    msg.z = 0.49653083579764445;
    msg.z_units = 103U;
    msg.speed = 0.14068361285272024;
    msg.speed_units = 147U;
    msg.custom.assign("JOJBYLINBDGBRCWNLHSFAGWYCDZLGIACQNZKBPNERBXWPZGOCPIFPQSFCTVGDRHYLMTHTYFXUUKKTEVSUEXJDFXEXDNSKYLSOGRKODEDOTVVJZPGUJITWKBLQBQUCBFNZIXHKBVULMGMMWKQJWQAJZJFMEVABNIWADEVEGASSATZHTROCMTMRMYSPRYJHMPIPYO");

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
    msg.setTimeStamp(0.6171480380493799);
    msg.setSource(17472U);
    msg.setSourceEntity(244U);
    msg.setDestination(44698U);
    msg.setDestinationEntity(241U);
    msg.timeout = 41996U;
    msg.lat = 0.9818351570714255;
    msg.lon = 0.0321135102507073;
    msg.z = 0.9254088398182992;
    msg.z_units = 103U;
    msg.speed = 0.0012659885920047742;
    msg.speed_units = 249U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.05804047036548332;
    tmp_msg_0.y = 0.30846428948395876;
    tmp_msg_0.z = 0.503581902699816;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JXIMCVNTRWOQUWMXVDHBGNVZQSHVIBYPAVHTGGLNXUQIOQDTCDGTNKEAWBUDBNKDWILJREFEJSPJHOREZIMPEPUWDPMFZSKIOYBJGOEAFMSHORLLQ");

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
    msg.setTimeStamp(0.03786495978412652);
    msg.setSource(29893U);
    msg.setSourceEntity(80U);
    msg.setDestination(45500U);
    msg.setDestinationEntity(163U);
    msg.x = 0.736748984525973;
    msg.y = 0.7552915267033904;
    msg.z = 0.1641627900692072;

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
    msg.setTimeStamp(0.8108975757696859);
    msg.setSource(4526U);
    msg.setSourceEntity(133U);
    msg.setDestination(53977U);
    msg.setDestinationEntity(11U);
    msg.x = 0.8518941615801361;
    msg.y = 0.768249204536739;
    msg.z = 0.012375527776251505;

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
    msg.setTimeStamp(0.23677714483450296);
    msg.setSource(21587U);
    msg.setSourceEntity(76U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(11U);
    msg.x = 0.13583163411039334;
    msg.y = 0.18495455661391014;
    msg.z = 0.41513639177264317;

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
    msg.setTimeStamp(0.2092687303510099);
    msg.setSource(11561U);
    msg.setSourceEntity(201U);
    msg.setDestination(13164U);
    msg.setDestinationEntity(162U);
    msg.timeout = 30729U;
    msg.lat = 0.024576476701445027;
    msg.lon = 0.5949321595524679;
    msg.z = 0.8037081295517144;
    msg.z_units = 94U;
    msg.amplitude = 0.19431162177018113;
    msg.pitch = 0.1805697772577588;
    msg.speed = 0.9500846410452634;
    msg.speed_units = 50U;
    msg.custom.assign("UZQSQHVAKWWLOPIHSUWZZENXLEGYRNLJKMMLRJDUMFBIHRAWGOPOCTKRQWRDJWCNZXIKUUXBTBLOOCBPMQHKRLLWSBQFOEDNVOIDHNEEVYMNJHKCYVSSOGADRRVMSMTEAYPFDUNKSYOMBTYEBISAVGGQMCCJIGKTYTLVAYTMPSQXYHNNRHPGJDCZEGCXUWOQJDZKUDZGPXWTZQFXRTCTXEAGBJQVAYP");

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
    msg.setTimeStamp(0.7708175503203438);
    msg.setSource(40062U);
    msg.setSourceEntity(17U);
    msg.setDestination(8691U);
    msg.setDestinationEntity(133U);
    msg.timeout = 2449U;
    msg.lat = 0.6319778419925042;
    msg.lon = 0.27316045489379503;
    msg.z = 0.6368914107880407;
    msg.z_units = 34U;
    msg.amplitude = 0.058487842108810306;
    msg.pitch = 0.38986955402484635;
    msg.speed = 0.28461299090424275;
    msg.speed_units = 9U;
    msg.custom.assign("VRQTUIVCZUNAFFZSNDFJHVEDITCHJGKTCNOTWJZYAHXQEVMOOUIWLFYZSBSZZYPRAKFXQCCJBMMVAROWDMQMGCOTSQYBTIPKRRUSVIEXILSWAPRKZWMXRQYSLGLXDASWBTDWXYXOJJHMOHBZDYLGTMGOGAXLENPCTGENJLIKEPDUKPVEAFFCUVQYHPTBHIIKNNQXBGHMWJLRQDRSUIZCAEOBQJSPXHEJKWWLBGMKF");

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
    msg.setTimeStamp(0.7748110134404333);
    msg.setSource(60009U);
    msg.setSourceEntity(9U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(114U);
    msg.timeout = 20924U;
    msg.lat = 0.5084355931920814;
    msg.lon = 0.3743319445016817;
    msg.z = 0.33420709686644645;
    msg.z_units = 6U;
    msg.amplitude = 0.4799881166193476;
    msg.pitch = 0.9084514685553333;
    msg.speed = 0.16644234405644498;
    msg.speed_units = 228U;
    msg.custom.assign("HCUBQKPABCUCBOMRDILLXHGMDZWPWIPNNGMCKWAUSLQLTSPCRNSLOWMUAUSZQDFDROMYDWTOKDTMQVNKXVPXMZKULILADPEGBKYYZEAZRYDZEHUAPXUOIKFMCYRBCIIYTQXRLXJFQZWAFFZPJNHQBGNVONVFEAEWAQVGESZFJUHXYRGWGFIHYVRVIJX");

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
    msg.setTimeStamp(0.5195999223262393);
    msg.setSource(31092U);
    msg.setSourceEntity(2U);
    msg.setDestination(64777U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.4028583522890351);
    msg.setSource(29552U);
    msg.setSourceEntity(119U);
    msg.setDestination(33908U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.570757916078179);
    msg.setSource(3430U);
    msg.setSourceEntity(228U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.5419472961743044);
    msg.setSource(62627U);
    msg.setSourceEntity(241U);
    msg.setDestination(42346U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.7498380466034738;
    msg.lon = 0.6590737748468911;
    msg.z = 0.4700862414118089;
    msg.z_units = 183U;
    msg.radius = 0.7585770600968657;
    msg.duration = 16304U;
    msg.speed = 0.5387466847266418;
    msg.speed_units = 212U;
    msg.custom.assign("TKPXLLYWHYHUZEVUMWATFKUSNVDACXIPDUZNINGFMWEUWFVDPQ");

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
    msg.setTimeStamp(0.9990943471469316);
    msg.setSource(12304U);
    msg.setSourceEntity(219U);
    msg.setDestination(7494U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.01383323206528242;
    msg.lon = 0.6126056904365251;
    msg.z = 0.30632353019000635;
    msg.z_units = 60U;
    msg.radius = 0.6671224471992286;
    msg.duration = 20847U;
    msg.speed = 0.2242713901743557;
    msg.speed_units = 30U;
    msg.custom.assign("MWXPIOKCDRUUTLNIXJJPRDFASZFKNKUEOJPVKYXMSBPDGVFLHTYZEXXBGLVIVECVTNVMFAHCMLKJ");

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
    msg.setTimeStamp(0.9951812090406027);
    msg.setSource(25850U);
    msg.setSourceEntity(231U);
    msg.setDestination(48562U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.5448079897673022;
    msg.lon = 0.6775046315889943;
    msg.z = 0.4444712236122985;
    msg.z_units = 19U;
    msg.radius = 0.09320516101926979;
    msg.duration = 41740U;
    msg.speed = 0.5820824356022756;
    msg.speed_units = 38U;
    msg.custom.assign("XTFOUXKVVRIPASWUDLBZ");

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
    msg.setTimeStamp(0.40835687857272307);
    msg.setSource(5429U);
    msg.setSourceEntity(190U);
    msg.setDestination(61786U);
    msg.setDestinationEntity(134U);
    msg.timeout = 37958U;
    msg.flags = 224U;
    msg.lat = 0.12498002618235515;
    msg.lon = 0.7559874692237946;
    msg.start_z = 0.3202891195874855;
    msg.start_z_units = 158U;
    msg.end_z = 0.2807708995029856;
    msg.end_z_units = 242U;
    msg.radius = 0.728313682825289;
    msg.speed = 0.6298798205634154;
    msg.speed_units = 114U;
    msg.custom.assign("OOCYHYLAWNRFGBUPGQYFOPKZMQQJPXMNLDWTEDFMO");

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
    msg.setTimeStamp(0.9642447482153662);
    msg.setSource(24146U);
    msg.setSourceEntity(222U);
    msg.setDestination(26601U);
    msg.setDestinationEntity(164U);
    msg.timeout = 54292U;
    msg.flags = 122U;
    msg.lat = 0.2332091972591911;
    msg.lon = 0.779253028057482;
    msg.start_z = 0.22303804041612907;
    msg.start_z_units = 229U;
    msg.end_z = 0.8397270040356624;
    msg.end_z_units = 209U;
    msg.radius = 0.05121247854010147;
    msg.speed = 0.8865543985837896;
    msg.speed_units = 165U;
    msg.custom.assign("JJHSYDAQCOVCNZXRDEGCKTQYBJMHLZBMWJUOVAZFMKGWOALVDPQGYPFUYYMIMYFNVGNBEKHIXRIFXWAJADFZNUKHXLDKVSNEBAJDLTEJEINDWKCXBMEMDYEGUVTSLSLKUSGBZMWIGUWYQLUNEPLZPQRDTFTBZRIAMPCPZRLVQCHAGKTUPHRIHEWRCTOHPWFVOJSVJUNSOBNQCVRPXSTOFOGYCFDXJSR");

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
    msg.setTimeStamp(0.9264802272631226);
    msg.setSource(47896U);
    msg.setSourceEntity(113U);
    msg.setDestination(14326U);
    msg.setDestinationEntity(198U);
    msg.timeout = 30382U;
    msg.flags = 236U;
    msg.lat = 0.653243171634519;
    msg.lon = 0.08399041774011207;
    msg.start_z = 0.13411430156603443;
    msg.start_z_units = 50U;
    msg.end_z = 0.39486152472815783;
    msg.end_z_units = 195U;
    msg.radius = 0.014229178519995722;
    msg.speed = 0.13526785842943267;
    msg.speed_units = 203U;
    msg.custom.assign("ZZXVLLDXHUUGRYXLNDPIOAWTAEMYIFMQVOKCIIZJKWFQVNGKQWEXUUVPSTSGCKEXQECPJBVCJNDNWIECXUOYPZBNGKYASZQDORYFHBHAKUEAQWRLQWLUYKICIMTBKOJGTJTHRXRPJ");

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
    msg.setTimeStamp(0.5749694678557978);
    msg.setSource(18328U);
    msg.setSourceEntity(69U);
    msg.setDestination(59238U);
    msg.setDestinationEntity(79U);
    msg.timeout = 49572U;
    msg.lat = 0.9222401869496261;
    msg.lon = 0.04666526770815582;
    msg.z = 0.2305588609770004;
    msg.z_units = 18U;
    msg.speed = 0.41596128643737273;
    msg.speed_units = 174U;
    msg.custom.assign("UAGHIFVJZMCHHEOLLVAIKGDHNDNASTQUUWBYSDWOYWHXRRIKQYLZEMOANLKSHZSVGVVMFDAZJVSETBCKZCEBRTDRMAORVFNKUJFTZ");

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
    msg.setTimeStamp(0.812215007560038);
    msg.setSource(29555U);
    msg.setSourceEntity(128U);
    msg.setDestination(44931U);
    msg.setDestinationEntity(60U);
    msg.timeout = 11285U;
    msg.lat = 0.25474088620307245;
    msg.lon = 0.46398732127418796;
    msg.z = 0.5281699010174973;
    msg.z_units = 54U;
    msg.speed = 0.6156091085160562;
    msg.speed_units = 191U;
    msg.custom.assign("DUWLJZFOUZWKLLCBRHGCPDRUSVITSCASSNAKJTLIBOPIOIFUYPVGNBEXRPOAPFFTQOJPQSYXCUDVWUSLUGDMLCHHKEZRJQOUIZGRSK");

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
    msg.setTimeStamp(0.11857521391530712);
    msg.setSource(62211U);
    msg.setSourceEntity(221U);
    msg.setDestination(18391U);
    msg.setDestinationEntity(25U);
    msg.timeout = 61459U;
    msg.lat = 0.4388633055694644;
    msg.lon = 0.9396422093036558;
    msg.z = 0.7445370904603161;
    msg.z_units = 54U;
    msg.speed = 0.7360517531586135;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7223601524680293;
    tmp_msg_0.y = 0.6902635355787808;
    tmp_msg_0.z = 0.011183986546117297;
    tmp_msg_0.t = 0.15701343249870092;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MPMAFAISFBONZXPTQALHVXLAMNBBZDXDJSRAQGDYJXCHLXPDELGTNCNRLUWLRBKW");

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
    msg.setTimeStamp(0.2558973013127571);
    msg.setSource(4537U);
    msg.setSourceEntity(84U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(68U);
    msg.x = 0.3898012350258634;
    msg.y = 0.8423724171957714;
    msg.z = 0.8475835371196498;
    msg.t = 0.9909472823700275;

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
    msg.setTimeStamp(0.8576375341323067);
    msg.setSource(42654U);
    msg.setSourceEntity(164U);
    msg.setDestination(4533U);
    msg.setDestinationEntity(191U);
    msg.x = 0.4607579348615336;
    msg.y = 0.8330449133267208;
    msg.z = 0.9016195538936795;
    msg.t = 0.19465892265856966;

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
    msg.setTimeStamp(0.6369247620304748);
    msg.setSource(30220U);
    msg.setSourceEntity(246U);
    msg.setDestination(40180U);
    msg.setDestinationEntity(4U);
    msg.x = 0.4181592059577084;
    msg.y = 0.9507937404345725;
    msg.z = 0.2404706679637868;
    msg.t = 0.12308298537538664;

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
    msg.setTimeStamp(0.9321845989174781);
    msg.setSource(54240U);
    msg.setSourceEntity(220U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(30U);
    msg.timeout = 61258U;
    msg.name.assign("XXPWMUIISUMOLLZFJBQMUIQVGHYJLTTIHBFOPNVSBHWXFANRFNFDIOXVGNJHWMDMNLHYAOQLGCVKHFYAMOVKXYLMRIGGQASCCZWWNEZSWURQPTEOPKUCOVREKOMRYPEBWXINFFACGIRXAZBTHSKOKETDVCFVDLQCPLQGZCZWRNRZQPTJKERZ");
    msg.custom.assign("EYVLZCFJPFJSCARURVYPSDQEADNWWXFFALKZVZJCDFZFTRUHWSMBNSXQVOQUQWNHHNDSLOXZUHUXONISMTFQWBSZRIO");

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
    msg.setTimeStamp(0.10809864234825706);
    msg.setSource(10329U);
    msg.setSourceEntity(94U);
    msg.setDestination(30029U);
    msg.setDestinationEntity(215U);
    msg.timeout = 12374U;
    msg.name.assign("URMQXFHWYSZHZCOOPKLGHPWIKNTHRAKUKFSRMWADCYXEXVNJHKSQNANGSTESYNAEQRPHFLAZCRKZYPDMXGOQLFDYEROUUBXMWJIYJXDMGZBSWNTNCOKZXDTCVOAFOJVQOZDYSJTJDKNVYQMAVUHKFYBDJGAVWHQTNEITXZJXEIQJHLPWEQGFBPMDUERMYNBCMTLBPDGHUGFCRACU");
    msg.custom.assign("BXIKWTYVHYFVQCTBFWGDIIJOZUFCZCPGLBDIRZXAPK");

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
    msg.setTimeStamp(0.4030984637235965);
    msg.setSource(42327U);
    msg.setSourceEntity(199U);
    msg.setDestination(61077U);
    msg.setDestinationEntity(40U);
    msg.timeout = 4781U;
    msg.name.assign("ETGHSJVPBNYIKKGXTNDHNJWNKENAUNDKUYKFMOKUTXOHPMFVLUPWDWVJOHZSZIJESMPNLRORLELZVSRQAGIKTZPDIJHYBABPDWORAYZBBUOWCUVBKWOPXIOYWRDJWC");
    msg.custom.assign("JFRQWMGYNWEJINIRDPKFDLNXNJVCLCXSJYFBQQVGYOYAWGLVQNJAEOPFEOMARZNSJCZTHISWODZEQLYBEDPMBSTEOCIHIRVJJKAOZXVQBKEQKIUOXDMOHLRIOIYTHPZBUDKUMXFPWFTUZRMAWWSPFAPYUKZZSENAQCDDABBUPCHCAQKEXWXGNUUTYHKRFJWCPHTRIXGGL");

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
    msg.setTimeStamp(0.8923073357521455);
    msg.setSource(29389U);
    msg.setSourceEntity(98U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.1703582315584936;
    msg.lon = 0.5454898170776855;
    msg.z = 0.3271258141875133;
    msg.z_units = 182U;
    msg.speed = 0.6612035917267965;
    msg.speed_units = 170U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8813340476180412;
    tmp_msg_0.y = 0.09631583356296947;
    tmp_msg_0.z = 0.588958884942235;
    tmp_msg_0.t = 0.655600200424173;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15827U;
    tmp_msg_1.off_x = 0.05529282732553742;
    tmp_msg_1.off_y = 0.32567569474992153;
    tmp_msg_1.off_z = 0.8977760893731535;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6788005861230604;
    msg.custom.assign("JCIXTNMDPWRGVZPXQGCYRWEFGZPGJGHMYJGRGLAC");

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
    msg.setTimeStamp(0.7512039681052937);
    msg.setSource(26173U);
    msg.setSourceEntity(117U);
    msg.setDestination(7967U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.6237863587237412;
    msg.lon = 0.7444524098531248;
    msg.z = 0.6786578085212347;
    msg.z_units = 88U;
    msg.speed = 0.6101690805873629;
    msg.speed_units = 180U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.19963512972115882;
    tmp_msg_0.y = 0.24107701391329595;
    tmp_msg_0.z = 0.6798542648548233;
    tmp_msg_0.t = 0.19904928045395132;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.2224357921825585;
    msg.custom.assign("NEEKAWJAZZCUPNPNVGIAGKSDNXSDRUKEIYTXQRVQBLBODHDWCBUOVHOPZFXBVAFZLOTBPDRRIGWMQYVTNMMPZLMPYMVIJEYDLMSXOSCCKJQQWLWAYLFCJRHCX");

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
    msg.setTimeStamp(0.32635366963631385);
    msg.setSource(4246U);
    msg.setSourceEntity(215U);
    msg.setDestination(63464U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.7789186223419927;
    msg.lon = 0.26406979022289445;
    msg.z = 0.050935164289201085;
    msg.z_units = 44U;
    msg.speed = 0.45047974284746584;
    msg.speed_units = 133U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1959160477298031;
    tmp_msg_0.y = 0.15204273748223285;
    tmp_msg_0.z = 0.34740898004280807;
    tmp_msg_0.t = 0.12696949931304913;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.561174739845455;
    msg.custom.assign("FHZUZSPBIOUXWDWAIQESLEXAEQNPAUMNQQOUTAXWHKIGZHWJFXLAKQOCRSSZCOLPYLSVSCPRWXFKTGODMEWTDHNWFGYSRJ");

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
    msg.setTimeStamp(0.4483687113882717);
    msg.setSource(32734U);
    msg.setSourceEntity(194U);
    msg.setDestination(6953U);
    msg.setDestinationEntity(10U);
    msg.vid = 55823U;
    msg.off_x = 0.868712046009579;
    msg.off_y = 0.9825472577646174;
    msg.off_z = 0.8420092917345184;

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
    msg.setTimeStamp(0.9690329212750877);
    msg.setSource(23116U);
    msg.setSourceEntity(109U);
    msg.setDestination(31300U);
    msg.setDestinationEntity(196U);
    msg.vid = 3565U;
    msg.off_x = 0.8699521704014636;
    msg.off_y = 0.18512428600121456;
    msg.off_z = 0.1779067078162604;

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
    msg.setTimeStamp(0.4959238550363083);
    msg.setSource(25675U);
    msg.setSourceEntity(248U);
    msg.setDestination(29490U);
    msg.setDestinationEntity(65U);
    msg.vid = 38145U;
    msg.off_x = 0.43945188383734834;
    msg.off_y = 0.09156874355269307;
    msg.off_z = 0.0486525088381915;

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
    msg.setTimeStamp(0.646586710327036);
    msg.setSource(53650U);
    msg.setSourceEntity(107U);
    msg.setDestination(12718U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.045280440463087546);
    msg.setSource(49557U);
    msg.setSourceEntity(86U);
    msg.setDestination(6875U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.6884276043863538);
    msg.setSource(41413U);
    msg.setSourceEntity(238U);
    msg.setDestination(61807U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.9318886745100124);
    msg.setSource(13776U);
    msg.setSourceEntity(161U);
    msg.setDestination(47553U);
    msg.setDestinationEntity(132U);
    msg.mid = 21796U;

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
    msg.setTimeStamp(0.8443077015052494);
    msg.setSource(31954U);
    msg.setSourceEntity(116U);
    msg.setDestination(59743U);
    msg.setDestinationEntity(145U);
    msg.mid = 7800U;

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
    msg.setTimeStamp(0.18929073965420795);
    msg.setSource(50551U);
    msg.setSourceEntity(189U);
    msg.setDestination(16273U);
    msg.setDestinationEntity(154U);
    msg.mid = 26552U;

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
    msg.setTimeStamp(0.5989174958812273);
    msg.setSource(49065U);
    msg.setSourceEntity(56U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(69U);
    msg.state = 47U;
    msg.eta = 12341U;
    msg.info.assign("YBVLTYUYSRQGXWGUFYJJMVGSCKYKPQOCYXRJGEEINMWVVQNLBLUYXLBMIGJNZULWPRJEXVDPAHZIWDRGJZEQNAWDABPTBWHODOKFCNFNXCAILBEOQPYNEZAKKFBFXGNBRTCFBMJORPEXCMMYTOPLHVFVTSQUABEXRDUYCQPCWWIEOLDUXIFSVLFKLDOGHSHUKEHHZZPMNZRXS");

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
    msg.setTimeStamp(0.9560138547399184);
    msg.setSource(61931U);
    msg.setSourceEntity(100U);
    msg.setDestination(42724U);
    msg.setDestinationEntity(159U);
    msg.state = 220U;
    msg.eta = 43300U;
    msg.info.assign("LPPSOLBVGWB");

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
    msg.setTimeStamp(0.27681551114843095);
    msg.setSource(57251U);
    msg.setSourceEntity(184U);
    msg.setDestination(41521U);
    msg.setDestinationEntity(135U);
    msg.state = 33U;
    msg.eta = 30268U;
    msg.info.assign("QSWLMGHPCEYJSOPDKJARVSDNMHGYXQOMOVKCFSFZOBTRUQFO");

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
    msg.setTimeStamp(0.723138924067982);
    msg.setSource(33108U);
    msg.setSourceEntity(9U);
    msg.setDestination(1013U);
    msg.setDestinationEntity(210U);
    msg.system = 62444U;
    msg.duration = 21336U;
    msg.speed = 0.39358971414311017;
    msg.speed_units = 13U;
    msg.x = 0.7493796275940662;
    msg.y = 0.32136586978061177;
    msg.z = 0.8499583872388041;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.12312539763924335);
    msg.setSource(55746U);
    msg.setSourceEntity(233U);
    msg.setDestination(5803U);
    msg.setDestinationEntity(242U);
    msg.system = 12715U;
    msg.duration = 26193U;
    msg.speed = 0.4909064903057473;
    msg.speed_units = 87U;
    msg.x = 0.8748278816594928;
    msg.y = 0.11906448903381783;
    msg.z = 0.7210954508341261;
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
    msg.setTimeStamp(0.6484834774525554);
    msg.setSource(8296U);
    msg.setSourceEntity(56U);
    msg.setDestination(40186U);
    msg.setDestinationEntity(241U);
    msg.system = 13956U;
    msg.duration = 57435U;
    msg.speed = 0.7506886031812324;
    msg.speed_units = 151U;
    msg.x = 0.06856255828270053;
    msg.y = 0.5404134761101073;
    msg.z = 0.557322096784368;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.08276442761125069);
    msg.setSource(34401U);
    msg.setSourceEntity(100U);
    msg.setDestination(23640U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.7382790430352248;
    msg.lon = 0.9249929884520682;
    msg.speed = 0.43510243494012424;
    msg.speed_units = 94U;
    msg.duration = 50974U;
    msg.sys_a = 4246U;
    msg.sys_b = 56925U;
    msg.move_threshold = 0.08484567977414137;

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
    msg.setTimeStamp(0.3863498695943409);
    msg.setSource(54305U);
    msg.setSourceEntity(138U);
    msg.setDestination(18616U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.22421132428747947;
    msg.lon = 0.767796454082607;
    msg.speed = 0.7015462697646481;
    msg.speed_units = 150U;
    msg.duration = 63283U;
    msg.sys_a = 11300U;
    msg.sys_b = 53701U;
    msg.move_threshold = 0.4093072075233578;

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
    msg.setTimeStamp(0.27556292904332);
    msg.setSource(19812U);
    msg.setSourceEntity(131U);
    msg.setDestination(50901U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.9314216407995379;
    msg.lon = 0.7160033433282563;
    msg.speed = 0.5401034189073586;
    msg.speed_units = 224U;
    msg.duration = 12560U;
    msg.sys_a = 19711U;
    msg.sys_b = 40648U;
    msg.move_threshold = 0.6709245401619907;

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
    msg.setTimeStamp(0.8797432068517939);
    msg.setSource(25531U);
    msg.setSourceEntity(184U);
    msg.setDestination(4356U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.5167232755864837;
    msg.lon = 0.13892721330375124;
    msg.z = 0.18282028211629764;
    msg.z_units = 9U;
    msg.speed = 0.37208848159640107;
    msg.speed_units = 63U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.940794851389383;
    tmp_msg_0.lon = 0.44430312800201655;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AZDHVVXMIVKRJIDGHCQEIBBNDSKMPUJKQSYTAWVPTGYHRXWTIEMEMIOWLFYOTZAJCHQIUCAV");

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
    msg.setTimeStamp(0.17801876483352475);
    msg.setSource(45514U);
    msg.setSourceEntity(141U);
    msg.setDestination(57265U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.803792183244816;
    msg.lon = 0.75401187623074;
    msg.z = 0.38363099359742736;
    msg.z_units = 94U;
    msg.speed = 0.9305586809065521;
    msg.speed_units = 32U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.550388826327803;
    tmp_msg_0.lon = 0.8140513899093582;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RGJIYSVYPWPYBHZFIUUBBXFJPOWMMMJSWLUUSZULGYWIFERARILCKNYLRVLOJPKHOLSSKDQNOXAACVSEKRHTNCJWHSMMWPNUVDOBROFTTFTWYKZWQEDGIIQJVWOKEH");

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
    msg.setTimeStamp(0.7625417725142696);
    msg.setSource(53295U);
    msg.setSourceEntity(116U);
    msg.setDestination(2348U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.5015008334072583;
    msg.lon = 0.9874326724473577;
    msg.z = 0.007364518019413291;
    msg.z_units = 235U;
    msg.speed = 0.7285155453127237;
    msg.speed_units = 32U;
    msg.custom.assign("UKFXIJAZKABHVUITZPYCFUQVEBZRMKWOCQBTSTGIYPAFQZCVGIDOXOGUDENFWE");

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
    msg.setTimeStamp(0.648387447443425);
    msg.setSource(64771U);
    msg.setSourceEntity(83U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.04300374649505956;
    msg.lon = 0.18784951450502174;

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
    msg.setTimeStamp(0.9942536343663136);
    msg.setSource(31539U);
    msg.setSourceEntity(4U);
    msg.setDestination(32618U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.12473459811498522;
    msg.lon = 0.3630633674117483;

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
    msg.setTimeStamp(0.5330863483927579);
    msg.setSource(16300U);
    msg.setSourceEntity(168U);
    msg.setDestination(20696U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.16662288095349964;
    msg.lon = 0.23477087020966225;

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
    msg.setTimeStamp(0.015154606052230846);
    msg.setSource(29852U);
    msg.setSourceEntity(87U);
    msg.setDestination(12386U);
    msg.setDestinationEntity(252U);
    msg.timeout = 7992U;
    msg.lat = 0.4323438589455342;
    msg.lon = 0.49341850322175307;
    msg.z = 0.025878471296373662;
    msg.z_units = 21U;
    msg.pitch = 0.05627752405149533;
    msg.amplitude = 0.2649659378076039;
    msg.duration = 38829U;
    msg.speed = 0.9429387984101432;
    msg.speed_units = 29U;
    msg.radius = 0.9823506183893596;
    msg.direction = 18U;
    msg.custom.assign("TCMSDEHUZCTPPVEAMJZOTOFEAHAGTXBZLHTFQVNNYJJUVZXRVCYQFSHXMQJCYRWACONULLQTPEDWPNRBNTKMHCBLJSAM");

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
    msg.setTimeStamp(0.7418992641074992);
    msg.setSource(57029U);
    msg.setSourceEntity(227U);
    msg.setDestination(2940U);
    msg.setDestinationEntity(2U);
    msg.timeout = 19919U;
    msg.lat = 0.6473432660306291;
    msg.lon = 0.624177220398275;
    msg.z = 0.6582995559951219;
    msg.z_units = 83U;
    msg.pitch = 0.7509883690372686;
    msg.amplitude = 0.8075049801617825;
    msg.duration = 30860U;
    msg.speed = 0.676016838978775;
    msg.speed_units = 0U;
    msg.radius = 0.42674109448010045;
    msg.direction = 10U;
    msg.custom.assign("RPMYKOUNMZTIYGTUBUOIGWAXZLQXURGLKLYSZHOENPAKKFMIXRASMBGBDHQBJRVYWPAGSRLCRKPKWEMELBANCIVJIJMNSAPCCBZQGNNHELUQRPVDNNEBSGUWVATTTHOUIEVWWYRIHQGZYYQNDFCDIWVXKHELRXDSJFTBWCUSQCTFPHJYBDMAKJVQHHUDFCIDZVOAJLPXHAEJCVMOZRFZGITCXFLOJMSDGVZEPFXXWKZXD");

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
    msg.setTimeStamp(0.6151266153487271);
    msg.setSource(45110U);
    msg.setSourceEntity(109U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(214U);
    msg.timeout = 19458U;
    msg.lat = 0.3495773938365654;
    msg.lon = 0.0788662417232534;
    msg.z = 0.5736509954051567;
    msg.z_units = 60U;
    msg.pitch = 0.12325082568373869;
    msg.amplitude = 0.791162999966888;
    msg.duration = 57836U;
    msg.speed = 0.4673833668170616;
    msg.speed_units = 0U;
    msg.radius = 0.5185965693412453;
    msg.direction = 143U;
    msg.custom.assign("KMHCXRZXMGGYAHGNHWCVOMHMFRLWWNZLWTSDPTOIEYJNFWONDJLPXUAQNKKSWXYQXBSQQREKSPMGLDZSPNFLHLDXCMBOVMBQFZSYBBKJRRYEMIVELQJOAVMOIWURNSGJECOKEIJQJGISNKPUFHRYIUYJZSKVCCAFBPDPGRIIAAPEHTBNCUWGOFTHIZVLARUQFRWBUNZELTTXETTGDYCJEKBULUCMVBVCFYHX");

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
    msg.setTimeStamp(0.6967831108223463);
    msg.setSource(42888U);
    msg.setSourceEntity(12U);
    msg.setDestination(35049U);
    msg.setDestinationEntity(164U);
    msg.control_src = 14500U;
    msg.control_ent = 223U;
    msg.timeout = 0.4446191828677464;
    msg.loiter_radius = 0.2221898552287952;
    msg.altitude_interval = 0.8879469302074903;

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
    msg.setTimeStamp(0.3259711051898484);
    msg.setSource(27386U);
    msg.setSourceEntity(222U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(136U);
    msg.control_src = 54703U;
    msg.control_ent = 43U;
    msg.timeout = 0.38853182059939684;
    msg.loiter_radius = 0.8435863192751858;
    msg.altitude_interval = 0.9596443594465748;

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
    msg.setTimeStamp(0.020656988180599023);
    msg.setSource(44962U);
    msg.setSourceEntity(66U);
    msg.setDestination(52268U);
    msg.setDestinationEntity(193U);
    msg.control_src = 38824U;
    msg.control_ent = 184U;
    msg.timeout = 0.6911253450108223;
    msg.loiter_radius = 0.5266194011729409;
    msg.altitude_interval = 0.738639355140454;

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
    msg.setTimeStamp(0.38884974394510075);
    msg.setSource(32105U);
    msg.setSourceEntity(62U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(136U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8789014546899194;
    tmp_msg_0.speed_units = 147U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6310983898655229;
    tmp_msg_1.z_units = 19U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.18409391273355458;
    msg.lon = 0.3079288951088539;

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
    msg.setTimeStamp(0.7054733180444072);
    msg.setSource(55321U);
    msg.setSourceEntity(251U);
    msg.setDestination(62907U);
    msg.setDestinationEntity(93U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3627945458668974;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07936831969204305;
    tmp_msg_1.z_units = 196U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.057763481860736654;
    msg.lon = 0.2459696559475748;

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
    msg.setTimeStamp(0.8662334342484163);
    msg.setSource(8521U);
    msg.setSourceEntity(64U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(217U);
    msg.flags = 135U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5389939571320425;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7249641810290419;
    tmp_msg_1.z_units = 127U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3754616814488111;
    msg.lon = 0.782715910995713;

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
    msg.setTimeStamp(0.7459680384798253);
    msg.setSource(11006U);
    msg.setSourceEntity(102U);
    msg.setDestination(48713U);
    msg.setDestinationEntity(184U);
    msg.op_mode = 110U;
    msg.error_count = 115U;
    msg.error_ents.assign("UXTSNSPCAWDOIEHEGAEYRUNOEMWBUUVJYZDLBXQPHSMQBEFIBTIMUXDODDYMOSRQ");
    msg.maneuver_type = 34939U;
    msg.maneuver_stime = 0.9641258290294074;
    msg.maneuver_eta = 60366U;
    msg.control_loops = 662333916U;
    msg.flags = 225U;
    msg.last_error.assign("IWEKEOJLCOZOGGIBTXBSGM");
    msg.last_error_time = 0.8137367295371927;

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
    msg.setTimeStamp(0.9736565958460555);
    msg.setSource(65416U);
    msg.setSourceEntity(188U);
    msg.setDestination(58863U);
    msg.setDestinationEntity(94U);
    msg.op_mode = 191U;
    msg.error_count = 253U;
    msg.error_ents.assign("MXNWOEYAUVCZNYBXLZLGVRHZFFFFGDPIBDPLVRSJMSXKGFKLJQCAZZJBGVQGIZBNKWOEMVGVZCSKWKVJEHIWMDJQCBIPZKIMDGTYUPJHKKALMYIQEBQXDTJOPUUCXCWOLALXNGNOPQOXWNBFGWFVEBSPOYHTEHHBDCUXYQSFGYSRPSQEHKJUQTQHITZOUNYYMAEFRCHAEPTRNNORECRJUMASNALXTZAOSPIWTMJMKADDIDCLFTLSRYHRBUUX");
    msg.maneuver_type = 41293U;
    msg.maneuver_stime = 0.34256053832824607;
    msg.maneuver_eta = 10443U;
    msg.control_loops = 3883142796U;
    msg.flags = 48U;
    msg.last_error.assign("SRCKAUQREQWZYBUVDDALSQASGFHZTBTLYVWRPEKJMKBNJMVQODCXYEAUULFKFOIXVNEHFYQZZABOVHJLZKJXALARSGBVOQCMPTXJWYQIZFSFOYSUYUGMKLZWCDBYGFJTRISFMUMMDNHELHVNMBZITNDHVAGSKGXKDPUNCLFIHRHIPHBXRPCTZMLEKUPJICXSRDOYQNZPFJQWMUIINHEJPWVXEGPT");
    msg.last_error_time = 0.9952987845048713;

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
    msg.setTimeStamp(0.3939703115070976);
    msg.setSource(65336U);
    msg.setSourceEntity(104U);
    msg.setDestination(1916U);
    msg.setDestinationEntity(204U);
    msg.op_mode = 29U;
    msg.error_count = 107U;
    msg.error_ents.assign("EHQSLTAMLHCYSIVEALXDLKRTJKMGXUOSKOMCWCXPZWYOAMLKSWPAXODCLMUTNMLETBHEHTYASXB");
    msg.maneuver_type = 53311U;
    msg.maneuver_stime = 0.04249434786072337;
    msg.maneuver_eta = 45034U;
    msg.control_loops = 1834573823U;
    msg.flags = 84U;
    msg.last_error.assign("MIOPGIYBCTFFISMAJYMBOFSWALVAABRZQNVWZKOOGAZHETDRXARFERTYNLUIYQMHNKEHAHCCKOBSVVOXIQLMRKZRNSLFIQTNRYSJNWUWHXNRLEUHPQUPTKBDSRSCCXIDPTFEVISWKSXQVDBMCCRNZMHTWDXKGAPBYCXUGKFLWQNXYGQ");
    msg.last_error_time = 0.2945155338351736;

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
    msg.setTimeStamp(0.9843725753835448);
    msg.setSource(57894U);
    msg.setSourceEntity(24U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(13U);
    msg.type = 132U;
    msg.request_id = 59025U;
    msg.command = 76U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 15053U;
    tmp_msg_0.flags = 14U;
    tmp_msg_0.lat = 0.7851030204064156;
    tmp_msg_0.lon = 0.3746358214406801;
    tmp_msg_0.start_z = 0.357532234609931;
    tmp_msg_0.start_z_units = 157U;
    tmp_msg_0.end_z = 0.7475487322113327;
    tmp_msg_0.end_z_units = 72U;
    tmp_msg_0.radius = 0.25845813252759975;
    tmp_msg_0.speed = 0.9460985103330983;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.custom.assign("GUXCWCFEXVGCBVJYVRZLEDYUMNOKIQAHJMYCSNPJGFBKKPKOEIAEQTHKNJRMDRCYSFXIZBPLJAJOZBBDFRONTANTXBAEGJJLUVNTSLHLSMEWMNWKPWSIUUYYZERIVCDBRZNPFHHHUCXPIKOIRNQKIFWQWBQSGBFZRVVGDYJTCOTAXWGDGFJUX");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("WOBKDHQKQXVGVDMBTEZHOGKOCYROMJVRJWRWIRAYYQUKDGSXQLILPDCRPMGZJGKAHZVFBOVAEMZOHYWRRMYXTUNZWPIBXYAENGWIEZSFBUFDUNXIWGHPSEVCSCASVOPDKAXBGFSNSACMCHFSTLLDMXBCWPPYZCUIAQMAFZNREYKXFIQHNDNMUJPNNY");

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
    msg.setTimeStamp(0.5418430366373185);
    msg.setSource(3522U);
    msg.setSourceEntity(102U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(127U);
    msg.type = 234U;
    msg.request_id = 13476U;
    msg.command = 174U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.7109205929486235;
    tmp_msg_0.lon = 0.27567659305127734;
    tmp_msg_0.z = 0.4537753617839937;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.5696349947948587;
    tmp_msg_0.speed_units = 208U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 29633U;
    tmp_tmp_msg_0_0.off_x = 0.7642049067424631;
    tmp_tmp_msg_0_0.off_y = 0.27794030646590406;
    tmp_tmp_msg_0_0.off_z = 0.6476805511224282;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.7158901512475164;
    tmp_msg_0.custom.assign("EMUPQATQOCINIUUACKLUVLJXBTQXRTAZGTWKPTRBMYMSJHBWHDNFLHTAAPVSHPB");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("LYRFZSDWJUOQBAKRBEBIWJBSJTURZOQBUMLLQICOK");

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
    msg.setTimeStamp(0.9052486609580732);
    msg.setSource(12274U);
    msg.setSourceEntity(234U);
    msg.setDestination(57490U);
    msg.setDestinationEntity(148U);
    msg.type = 206U;
    msg.request_id = 56284U;
    msg.command = 54U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 10415U;
    tmp_msg_0.lat = 0.3782495715081179;
    tmp_msg_0.lon = 0.6855691547020412;
    tmp_msg_0.z = 0.18641638295328566;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.35243081418758837;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.custom.assign("DQXKMPEBXIBGLEOGXUTMDGXFSDCCMWAEIDJGTSEVTAZSSEAVFNNJUIHSFUFHBMYRZISFBRPHHVQQWGLSDIIOEVRQZXSRAWXDYAUXNHZINBWQOUGPYKYHUCKRDBJAWCYPZLXJLFJVFMYBMWTMPLTNOKRXTOOTYQUQZRVTCVGDFIPVIAHKMKEDAJPKSMJLOCRRLVJQBCJFHAWFLKWYNUKHQOBGSMPDROIKCENYZLNCEYNTVB");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("STOJHCLWZCLCBYHVHRNUVYUOANDKEQIQEGJOTMIEGKLAOLXURYBBJFWINIOKF");

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
    msg.setTimeStamp(0.7766241898733517);
    msg.setSource(44868U);
    msg.setSourceEntity(176U);
    msg.setDestination(21935U);
    msg.setDestinationEntity(137U);
    msg.command = 241U;
    msg.entities.assign("WKRTVFPEKEMUZUSJZDUYGUXOAVLGBCSTEDEOBMZENJHZFATLLYJSUBKIRYTWPDCYTYISUSFFORHMQXCIQCVABZMRSLDOYMMIGEWV");

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
    msg.setTimeStamp(0.9140909109169622);
    msg.setSource(22854U);
    msg.setSourceEntity(151U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(201U);
    msg.command = 84U;
    msg.entities.assign("XZHHEDDSNWVDBQGKZLLQMLJZCDCQQDFRGRDZVJTRM");

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
    msg.setTimeStamp(0.08350833424482884);
    msg.setSource(9151U);
    msg.setSourceEntity(136U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(74U);
    msg.command = 95U;
    msg.entities.assign("ZZCGODISSZCVJXLUCECBOHHRWNTDWFRTFODHLMYWTPDUWXTMXWRUCKOGBPLBMLVILSGNUWEEHFFMXEPQJYYEZQPQQUKXNMHFTANJNQFTIABKGAOEYGGGMPEUKRIXKFYCSAVZVIUP");

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
    msg.setTimeStamp(0.7398454846060507);
    msg.setSource(3092U);
    msg.setSourceEntity(202U);
    msg.setDestination(31734U);
    msg.setDestinationEntity(222U);
    msg.mcount = 36U;
    msg.mnames.assign("YICGNGNOUAIZKQKXOTLXJQFGEIYAFVPVFWKWJOIZEHEVDKDIUPYJUPQXRCWFPBKWKMPWOOBQGSDJBNMQZYVWETVCZWORRTAZL");
    msg.ecount = 155U;
    msg.enames.assign("DSLYKPRTLOQQGPAWOMXCXZWZBVSHNIIMFXFIUWNKISDUQGYTGZFDIKUXHPNSKAUSSJGDODRZRUKIPBJEMVBAYLJNCGNCSMFAJBKVYHHDMAARMOLETWOXQKIMERMBRHLSOYMDRPZYPIDHFVPTRZAWTPGQWBALVWALQXUEEUOFDEYJCTOFZVLHGBQNCZWVJZINHFGPNYCEJVEQEQCL");
    msg.ccount = 70U;
    msg.cnames.assign("MPMYIQGUCPFBUTSDHSJTTVYQJBLDEXIUAJAQNFCJLJZIEPPKZIYNUDWJPYMSHYEOEEGZTBRBRXOAEIBVHAOGKNKGCIJGHPSNMQKMCRYHMJKNSJTTHFVNHOPOVSCFDSLFTNWDGGFOWAWOVRINQXYBDZRUGAZBAA");
    msg.last_error.assign("XYEIRZLECRCPPTIWMPRAFRAFJDVDNMJYXQUNAESDGFYZZYWHGUZGSXULAOEOWDRCZFWBXFKVYGDMQICNJYDTOGJWKTLB");
    msg.last_error_time = 0.5990198969926994;

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
    msg.setTimeStamp(0.9035366880253339);
    msg.setSource(38017U);
    msg.setSourceEntity(91U);
    msg.setDestination(6175U);
    msg.setDestinationEntity(92U);
    msg.mcount = 173U;
    msg.mnames.assign("NSDYLAUXXACWJPYFYQXOXXWSRCPCOZJLMPNEUNZIBEPJRMDSZRV");
    msg.ecount = 178U;
    msg.enames.assign("LENMKQJVTMHAGSRLNYCDDIBUHPETTZRQCUWOJDOLXJSBTYKINRHVKYEEDQNCWNRJTZKNQSWEXHRMRJIGIRJGJCQYEVWVMDBBQFOXLAZBFSWXAE");
    msg.ccount = 212U;
    msg.cnames.assign("LHAFEOTCGSGHYOBNIAPRTFBMFTPOKDXGOFVPLVAAJKVQKPIKDJUUBFODUABSEPSIGZLDZVWXRMTIWGHZXJHEJFKJO");
    msg.last_error.assign("RYPXCLJNQLQNYYVEIZCEMGMTOYAQDOBINUGDVXDKCCGLQDKKJTMMAACRTYELHJOALPRYZVGEUDMQTSPIDQNRXHQFOUUOEYHDXBTFRPPEAIWDWGEMSFPWKWTJBBVHOTBAJGYKIISQWFLZPGZZIJPPUNFQKSHFTVWHMOPWOHSRRSRWRXJLZWNCUYKCNXTKXMMSBYRCHIZASSJEFXUUFBNHCUIVQJAIVNEVZHOL");
    msg.last_error_time = 0.7481837825217558;

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
    msg.setTimeStamp(0.12694588696270392);
    msg.setSource(22708U);
    msg.setSourceEntity(24U);
    msg.setDestination(44661U);
    msg.setDestinationEntity(159U);
    msg.mcount = 10U;
    msg.mnames.assign("IRRJQBIDTWEKQAPIJGQJVHNUZDTYNYVUFEACOSAMEEVSGBIULKRBOWUSKBLGWRZJFMRUXELGKLHOHOFBBKXWPXTMVRZELUMEXDKVZPRMPJYMWRKSQFMTVCDITESYFVUZXRPADYOKZMWWSZAXLECWJBTPIUBDGYTNL");
    msg.ecount = 215U;
    msg.enames.assign("VZDOUIOUEJNEKROFHFTLGBXLJIPXPKDEZF");
    msg.ccount = 250U;
    msg.cnames.assign("YQZFWMJVBRIPHLLWEIVYFQDLORNQQGLPFGZOPBGKTZVPWSAUVHXSTCARKWTCHUTJCJKGCJQTMEGXNOMZDQHNIAFKESTTWGZQXGOWVSLOUMPOJKSVXMOCSUYQUKMKBLODTBXPKEXFXIIBXZKHQARYNNFYSVMWAOBTIXAYJELIPHILVJYCFNZJNRRUCIUJBFBSGIWUPSGNQXDRAAOUDYEYBRTFDZWE");
    msg.last_error.assign("DFNIUTXKGMKJUTXKSUWWGMXXFJPGQEUMVMMEHRQNSQJOWJDPBHEUHRYDCGNBHNABQLRORRYFTENTNLALYPPVOZONDXQWULCXGCKTQBARAVEYICKKDAFMIDFZVSZXUTXRJCSXKISLCKTHQZGSIJOPBGHOPTWIZVMDUJFALABKHCZMILIYBLBEEGEVZDQJYPOESQCNHTENLUIBYQAUJCZWNSHAWYBIA");
    msg.last_error_time = 0.2004445899690951;

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
    msg.setTimeStamp(0.9295611358663314);
    msg.setSource(63164U);
    msg.setSourceEntity(3U);
    msg.setDestination(18846U);
    msg.setDestinationEntity(60U);
    msg.mask = 18U;
    msg.max_depth = 0.6316153317221316;
    msg.min_altitude = 0.17369316194359907;
    msg.max_altitude = 0.8189233706824098;
    msg.min_speed = 0.2204866619128919;
    msg.max_speed = 0.61083785324673;
    msg.max_vrate = 0.1779592510407808;
    msg.lat = 0.9175515922377043;
    msg.lon = 0.07301153297227281;
    msg.orientation = 0.066345719727125;
    msg.width = 0.6406906712026653;
    msg.length = 0.35627802119431073;

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
    msg.setTimeStamp(0.44715560020649436);
    msg.setSource(6685U);
    msg.setSourceEntity(74U);
    msg.setDestination(29695U);
    msg.setDestinationEntity(78U);
    msg.mask = 231U;
    msg.max_depth = 0.6537352882805254;
    msg.min_altitude = 0.5299872193511912;
    msg.max_altitude = 0.5387384627048974;
    msg.min_speed = 0.25535827411858725;
    msg.max_speed = 0.9660695374989884;
    msg.max_vrate = 0.27397954147872794;
    msg.lat = 0.10029499334708025;
    msg.lon = 0.4629685188021295;
    msg.orientation = 0.8127726214467665;
    msg.width = 0.14897944616949166;
    msg.length = 0.057138958048086885;

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
    msg.setTimeStamp(0.7242908619122908);
    msg.setSource(47186U);
    msg.setSourceEntity(96U);
    msg.setDestination(54818U);
    msg.setDestinationEntity(177U);
    msg.mask = 78U;
    msg.max_depth = 0.7960699472476752;
    msg.min_altitude = 0.2125034576851449;
    msg.max_altitude = 0.711771612725152;
    msg.min_speed = 0.9076342407818583;
    msg.max_speed = 0.4445028069165431;
    msg.max_vrate = 0.840755566937905;
    msg.lat = 0.5040883123962968;
    msg.lon = 0.20606135075018694;
    msg.orientation = 0.7471720484913617;
    msg.width = 0.28428814212745246;
    msg.length = 0.209319221266132;

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
    msg.setTimeStamp(0.9497823952794839);
    msg.setSource(58460U);
    msg.setSourceEntity(27U);
    msg.setDestination(27960U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.5028854118993019);
    msg.setSource(56942U);
    msg.setSourceEntity(129U);
    msg.setDestination(31715U);
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
    msg.setTimeStamp(0.49478530962714296);
    msg.setSource(47174U);
    msg.setSourceEntity(125U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.8237498331621312);
    msg.setSource(28918U);
    msg.setSourceEntity(201U);
    msg.setDestination(6938U);
    msg.setDestinationEntity(33U);
    msg.duration = 2552U;

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
    msg.setTimeStamp(0.36662184270144416);
    msg.setSource(22844U);
    msg.setSourceEntity(150U);
    msg.setDestination(18486U);
    msg.setDestinationEntity(171U);
    msg.duration = 45665U;

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
    msg.setTimeStamp(0.6230309260289435);
    msg.setSource(44226U);
    msg.setSourceEntity(176U);
    msg.setDestination(38353U);
    msg.setDestinationEntity(112U);
    msg.duration = 61991U;

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
    msg.setTimeStamp(0.3597057775634529);
    msg.setSource(53704U);
    msg.setSourceEntity(59U);
    msg.setDestination(46899U);
    msg.setDestinationEntity(109U);
    msg.enable = 91U;
    msg.mask = 1419182838U;

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
    msg.setTimeStamp(0.35124187955720254);
    msg.setSource(16465U);
    msg.setSourceEntity(52U);
    msg.setDestination(12172U);
    msg.setDestinationEntity(235U);
    msg.enable = 159U;
    msg.mask = 1955317455U;

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
    msg.setTimeStamp(0.9334465557128838);
    msg.setSource(44004U);
    msg.setSourceEntity(120U);
    msg.setDestination(36382U);
    msg.setDestinationEntity(240U);
    msg.enable = 75U;
    msg.mask = 3223819209U;

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
    msg.setTimeStamp(0.2838330218785192);
    msg.setSource(6601U);
    msg.setSourceEntity(251U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(42U);
    msg.medium = 84U;

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
    msg.setTimeStamp(0.46161215289661806);
    msg.setSource(53885U);
    msg.setSourceEntity(245U);
    msg.setDestination(7916U);
    msg.setDestinationEntity(88U);
    msg.medium = 30U;

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
    msg.setTimeStamp(0.17373345840933718);
    msg.setSource(52358U);
    msg.setSourceEntity(62U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(224U);
    msg.medium = 92U;

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
    msg.setTimeStamp(0.6224369882378247);
    msg.setSource(40567U);
    msg.setSourceEntity(156U);
    msg.setDestination(13492U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.7764055101494587);
    msg.setSource(3318U);
    msg.setSourceEntity(193U);
    msg.setDestination(59296U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.5064609443281283);
    msg.setSource(57761U);
    msg.setSourceEntity(66U);
    msg.setDestination(832U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.4643278308331752);
    msg.setSource(19287U);
    msg.setSourceEntity(86U);
    msg.setDestination(3128U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("XWRZXDJMDEXRSORNJECVBJRMRMRKIDCHTWWSQ");
    msg.description.assign("LUGRPGJCDNQZYMEWPCMTOWOGGYJJQNBXEKWYTWIIETWJZBUUWNNTMEHYERFEXMOJHVPCKGIMAGINQONPKTFIPFSFVGPREXRJSELBZMSPYHVREAOVTGLZXDYDFTFPLRHRHNASVLTNWTRGAVCOQBZ");
    msg.vnamespace.assign("NFEMNNNCJRTPWQFTGTWBOUFQVSJOOBBDBEIFDTYQEZUXGZFXMFXKDCCHHCULJZRKZGSSOZIPPLPGBRGKRZQYYAHNZJRIIBAOIPFFDVMKUVOAVZEKHJKWYTMHHDXYTAJBAICXCTXQSBFWWMQYLYVGJSHQCDTUA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RUDBGQEGBEGVIFCHZEPALZYNMVPKLAFZXDEJSYHLWREMBSABAQKTRSWOTUPCGPOGISNRVWUXIWXJLHZCLMNWZSQJOCDJVSNIEKTOFZKOMYPHURBUYTOKAHUGVRQUVKWDFRXZCGZHOSMPUETQFNTWTIR");
    tmp_msg_0.value.assign("QZNFXUNDRXZFSGOFSPTSOGIAMLZAZRDFHOKJRBBFEGJCDNZAHLJIOYJCDSZAPUBCQVLXUQJIYBEULVXGETHXCHYFILUOKGCZWDUHVHLQEPSKNZTCLWXEHERIYIQWWGKFBRNPOAKTAGLOYRTLEMEVSKPZTFDCHSKVIPQOUXMPNGZNMBMDQWDMVMQWKSJGPCWDJNRYOSWMWQKXQMUJTCPEVJYVTS");
    tmp_msg_0.type = 125U;
    tmp_msg_0.access = 163U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZEQEWFMIGIEUAYDSTLEEIYGWCXRTORHOJOMIITJQWTPLYMPVZUKPRDLS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZWTMECDOCRDOMUXSLQJGFXMYUSPXMJVFVJZZGVNOJIKJVICXOHOWVPNPKDDPZPHFUFRQRXTGNAEJBARUMONSXYGVRMYHTVWECENDEFUKMNYJSMYQXCBQJWTDQQKGVLGWRFSLPXVLCEOECLHBAJKBVIIAYKGEBEKPBXHSCDIZLWMBTLSFANU");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.7291703385043022;
    tmp_tmp_msg_1_0.lon = 0.39931727490200464;
    tmp_tmp_msg_1_0.z = 0.7531520269134989;
    tmp_tmp_msg_1_0.z_units = 222U;
    tmp_tmp_msg_1_0.speed = 0.19695878691866653;
    tmp_tmp_msg_1_0.speed_units = 32U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.vid = 37784U;
    tmp_tmp_tmp_msg_1_0_0.off_x = 0.5694508753717923;
    tmp_tmp_tmp_msg_1_0_0.off_y = 0.6898090837288104;
    tmp_tmp_tmp_msg_1_0_0.off_z = 0.36200960695642115;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.0752061571077054;
    tmp_tmp_msg_1_0.custom.assign("ILPKJDZHTDXDPJTVUWZMCHBFIJTGONKMANSZATIQPVYOULQONGWMRLPQSAMDQGUABEFGDBIBKXCPKJVHIYZSKEWNHOPUREAAZUSILFQGRCLSOUNWYCBMQWOMCYJNDTVVXOFKTJOZBIYHQFUKIYXVIQPZYXBXKDUMNRFPELCXYYQFHTXHSMCHADLQGZNMJJGXBEROZNILKJEBVLDGTCRSSD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LoggingControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 216U;
    tmp_tmp_msg_1_1.name.assign("SYHKHLGHLFIILEHNAMRWSBDKVMYQAXZTCKZXQKMPZHRJFSJXXBSZJRQENOETOJRKJUMQEEVFADIDQNGAVMUIFFCVKMXCDPOYLENWHRTCRZFTJCYANYSAYHLLTSKIXONJRTNFVKWEHGCZBYDVWNCGRCUJYPIZTLMRRJGJUSBODGQBIQEOXTSDWIBLFOPMGXDYOFHTWNUWDKWUMFUYGGUQICXDHBPPUPBOVULPASVVOGZABPZICMVWABAQKNSEW");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::VehicleFormation tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.7477980060082431;
    tmp_tmp_msg_1_2.lon = 0.12314816184616795;
    tmp_tmp_msg_1_2.z = 0.5732578452451611;
    tmp_tmp_msg_1_2.z_units = 251U;
    tmp_tmp_msg_1_2.speed = 0.04574570494452268;
    tmp_tmp_msg_1_2.speed_units = 153U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.x = 0.3847802884760718;
    tmp_tmp_tmp_msg_1_2_0.y = 0.9552211166564754;
    tmp_tmp_tmp_msg_1_2_0.z = 0.8663330567595365;
    tmp_tmp_tmp_msg_1_2_0.t = 0.7054926797569725;
    tmp_tmp_msg_1_2.points.push_back(tmp_tmp_tmp_msg_1_2_0);
    tmp_tmp_msg_1_2.start_time = 0.13734747159080463;
    tmp_tmp_msg_1_2.custom.assign("ISYHGUANKYBDUHFCKQQWILDQTOQXBBCIOURHFJECTSVDCWVPYZOLJCBJWXSCRZLRULNAQKNEXYVSSKRIVRFURPNKTKNOKLTDHZSYNJXLDVTPEBISCPPOLENWBXSFOWYHBZEGKAAZJUZXTHGAQTJLFWYWJMUUZZAMHQXOUVSUAZMFPEXGVKOMYALHWNRCCIQGTAMPBPRDMDSMYALVOMJVGPZH");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::UASimulation tmp_msg_2;
    tmp_msg_2.type = 216U;
    tmp_msg_2.speed = 19993U;
    const char tmp_tmp_msg_2_0[] = {68, -14, 117, -95, -57, -20, 34, -29, -14, 21, 100, -122, -89, 50, 70, -42, 124, 63, 103, 65, -36, 86, 56, 72, 13, -47, -86, 92, -59, -104, 67, -85, -127, -116, 23, -5, 31, 37, 81, -15, 52, -65, -2, 104, 90, 55, 92, 69, -112, -17, 90, 78, -92, -2, -2, -112, -4, 95, 79, 42, 118, 90, 95, 1, -73, -86, -61, 22, 90, 41, 55, -57, -123, 77, 103, 89, -57, 84, 60, 80, -115, 76, 53, 116, 30, -123, 10, 24, -67, 104, 74, 42, -121, 92, 41, 6, 103, 27, -24, 59, 111, -108, 83, -95, 32, 121, -49, -48, -39, -42, -104, -123, 57, -98, 118, 109, 17, -88, -108, -26, -59, 30, 81, 4, -64, -55, -5, -83, 15, -60, -85, -114, -112, -6, 80, 25, 70, -113, 104, 121, -8, 74, 99, -4, -49, 76, 81, -71, -85, 68, 121, 11, -127, 22, 82, -120, 44, -54, -93, 77, 80, -117, 63, 106, 34, 126, 109, 6, 86, 80, 12, -57, 52, 94, 1, 78, 72, 108, 11, 106, -79, 59, 117, -97, 71, 70, -70, -73, -12, 49, -103, -16, 97, -7, -10, -102, -107, 119, 40, -58, -50, -81, -11, -99, 60, 118, -33, 34, 86, 43, 29, -29, -2, 62, 73, 79, -50, 61, -66, -29, -51, -98, -22, -62, -58, -79, 90, -105, 58, 83, -67, 2, -93, -96, -68, -47, 110, 93, 88, -101, -4, -51, -25, 24, 9, 22, -90, -1, 74, 78, 63, 102, 9, -67};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CameraZoom tmp_msg_3;
    tmp_msg_3.id = 118U;
    tmp_msg_3.zoom = 38U;
    tmp_msg_3.action = 229U;
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
    msg.setTimeStamp(0.23441047994408903);
    msg.setSource(51143U);
    msg.setSourceEntity(72U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("FJUJGDODLDTJGIDQYOSAPPOLNRHHWRWPQZWFQDECOKBAWBZNAMIFLNRWVFVVQQAJSIREZZMSCQECZXFGSIINTLJEXKFRPULCGKSKDLZHHXPTNCOBRXNHWHALCSYEDVUHYYKMWPZNHLGXVUUKIOCYBFTNVMPEGAVUKTTITDNLAZBOKJEBYRUPCXEHHPJNSBXXYGFDCQGUMYMXXAKJWUELZMMIBAGETSRFPMYQSZAVQIOIVWYSJOCJKORBF");
    msg.description.assign("ULWECMLHJRGHOAMUWYEQGRDKYOBRIIFXQMBAMZCKWXOQQGZTCBFJVNSKZEKCYRTAYVFWZXYDNIEUVXUHIEZMPOTGJNGSYKJSRCBRUOFBLLIKHIXEOPZBQARXGAWXCYZQDJPNFSXFAPPJALOILNUKSDJPFPKUTBHHVVMILDKTQVWMJNXSWELCKDJDTIGROQOYGSRPTVXVFUHDZRZTMFICHBBVEQNJUTBG");
    msg.vnamespace.assign("UJWBEQLARMSDZYIVTWSYAMTFEXPUMJYSLGHNEFGCNJPTTMZBMCWLKIITQQKSCRQEKDDBFXLOPKWALNOCQUDEAZUGJKPSVRRFNFXDAOYTGVBMFUVCUXJZORBIVCNJJFGRYBIPGDTQALKJPWQNDPWRMXJYEWDRSFUAUIRVKIZZXLKMFPOZPOIPBUJSHAYWEHWDOYAIIEOBVQNCLG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MWEPBZYYAVKFLPNBLWJIUBTYEWJHZUBXGQEMHURFQHHMAXOTAGWKXCINSJCOSMISVWPWLKMMZXXJFOSOGLZIYEIHSUAOCFCAJQOYHKMPVCNFSVYAYEYLRFADHFXHLPADZOUCEXNVXDIJDJUPVUGZSXLAIDJYPMJSFG");
    tmp_msg_0.value.assign("LNXFYMPXTZAHXPUOKNLOKAXUHPRLTFOYWRGAOXKESJWXRMDRWELBXAMRFCPPEBYJLXGELBUGIZWYSDOEJCSSPSTMWDYLHFKFUGTBZGDAKFOWIQKCCEAHYGUQQFZLISIOMVUBNGVOEZXJYHFMOFCKNYEKYIQJNFNUQIAIBSQAQJPWBVJGSMSBCKEWHDVWVTRDBQHPMTILCAKCVWZEHVPVHRCZNOZXIDYPZTRD");
    tmp_msg_0.type = 237U;
    tmp_msg_0.access = 196U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WPVFOIBFCGVTQQDNITQRDODPAOUUGYGRNUNV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NUWDYZLDEEPUFHUVXPGTWZOJTSRJXDSCACERDRNJCKOGRQXRIEALXHZFVTOSQQLJPWHJAATKCWVBMZMOGGBKYLDNROYSKKTVFRVXXYHOWGNBCDZMILJESNJCGSYPIURHZVYWRDPODFMMONETBFASUFUEVNPJAELLBQCWIAZKQNEXCLVBLKIBBHLJBAUFUVHHXRMCUOVOMCHZPFPYAUAMGYEHXQITIMGGKQKYPDSIZFTQXIQNSSWYTPWZIQF");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 28637U;
    tmp_tmp_msg_1_0.lat = 0.29842239548304406;
    tmp_tmp_msg_1_0.lon = 0.23197517814800228;
    tmp_tmp_msg_1_0.z = 0.3632085495801769;
    tmp_tmp_msg_1_0.z_units = 157U;
    tmp_tmp_msg_1_0.speed = 0.27264293397840644;
    tmp_tmp_msg_1_0.speed_units = 232U;
    tmp_tmp_msg_1_0.duration = 29512U;
    tmp_tmp_msg_1_0.radius = 0.30171501658975475;
    tmp_tmp_msg_1_0.flags = 187U;
    tmp_tmp_msg_1_0.custom.assign("KFJRZMAINERZFEDCCXJHIRIMBKAUQTEVXKNPFAL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ButtonEvent tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.button = 172U;
    tmp_tmp_msg_1_1.value = 108U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::FollowPath tmp_msg_2;
    tmp_msg_2.timeout = 40622U;
    tmp_msg_2.lat = 0.7798479266852768;
    tmp_msg_2.lon = 0.8443014829102408;
    tmp_msg_2.z = 0.35376163697497987;
    tmp_msg_2.z_units = 82U;
    tmp_msg_2.speed = 0.8158476945752228;
    tmp_msg_2.speed_units = 124U;
    tmp_msg_2.custom.assign("XUPKNGYKYSJFVLZUZQWOVDIUF");
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
    msg.setTimeStamp(0.9687901671467676);
    msg.setSource(61193U);
    msg.setSourceEntity(28U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("WZFRDMQSZJWMDBPPYOUIFGVSHNQGLTTIPVMKKNYBLHMILXQKKEAZPTUCLXFWHTAEOIKXEDVBFUMPEMNEKHLNSWJEJZDYDLJEPQRCIHWVKCOJSMOGIWFSMSSRNVRBPXBNYZYDVUDCGXZHAVATRBVYWWCJUVIDFRFGJIYXUGJTTFXZGAUCZJNYOCRFUEPHSCP");
    msg.description.assign("RSEAHMPWCFPWZWFWPSUJGMBXXJAEJAKRYMLWBUTBXZMUONIOOGDQLNUAYOTNKKPLIXQMTIHFVVKKSFUSFDUHJZCVMVWODKBXZBHPYGAQWSH");
    msg.vnamespace.assign("JIGKRJMYDIWEMTLCBOWJQFFYVEXMZRYJLNIHXZBNXFMAXOFNHKCVFHNLPZDVANOSUOUNGRRUIKYRRYBZQQBBUXEGKTTHURAGRBECQWQIAHBXZQTHCMHWGVJLUMZIOMTWKOKFPUZSEKEUDMDWATEOPPZD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FQBTGNPAKXTGRMCXLMADJSJZODUHFUKBGQHDBPYBOSNMQRVYCOPLLULTIGOOPSXJFFSYYOMCMPGYLBOEKJQHWHHZDDSTECCRKUDAWCBKFADMLPOUAWIWNFDCRXNLYSKBXJSPAUTHIIZIDIRVATPTARLTWVDJMGFEXWWCERAURUQXYLKNXJNPVIQH");
    tmp_msg_0.value.assign("JULCGZRTYIERKUILFCZUWOZUJOYOKTCMDOSVPOIJGBLSIXRXYIPFIHVWYPCBAIWGFJNXRKOGNFHFFSVEYHZDENNWPOXYTDLPTTFERLNPOBEJKHBXMRKAWWHEBGQIRNFLRPVQFSKUAAQYXHGHQJXMDAVVJCXMHCBSNBUXHBAXKKSBONNZMBDCIMJDGGEWCIZQSPWVJEAVDSCRGTDGVSAYQUWZMTYTEEDPLHVQRZATMLQZTKPSUJQ");
    tmp_msg_0.type = 42U;
    tmp_msg_0.access = 131U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WGZDPOTNGLU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("GSZMPZXTIRMCQDKSWMBHNUNIEVPGWECLFFDDQLSRUDAKEAGUADCHXEYYQEZTYSBNYGFHQPJWMSWIOXUERPPW");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 10347U;
    tmp_tmp_msg_1_0.lat = 0.060955280331871364;
    tmp_tmp_msg_1_0.lon = 0.772369668526078;
    tmp_tmp_msg_1_0.z = 0.22095285825804867;
    tmp_tmp_msg_1_0.z_units = 122U;
    tmp_tmp_msg_1_0.speed = 0.9218209136216207;
    tmp_tmp_msg_1_0.speed_units = 58U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.745103770080563;
    tmp_tmp_tmp_msg_1_0_0.y = 0.4908010853751903;
    tmp_tmp_tmp_msg_1_0_0.z = 0.6186453595435409;
    tmp_tmp_tmp_msg_1_0_0.t = 0.007085414041635096;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("SNVRYDMEGAAQCSDKKOE");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ButtonEvent tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.button = 14U;
    tmp_tmp_msg_1_1.value = 64U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::QueryEntityInfo tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.id = 240U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Announce tmp_msg_2;
    tmp_msg_2.sys_name.assign("CVMRIPFESZWMFYCLAXWZCUHPRUHDJDVCKONMHPDNDGCXHMKMJKUTJZEOJQCGZZJHNBTULQKXUOWRPXOINJRMBUJWSYNNQZACEGELIVCBVPRFPWOZDMXUVFQCJLAV");
    tmp_msg_2.sys_type = 87U;
    tmp_msg_2.owner = 55128U;
    tmp_msg_2.lat = 0.44971513410049346;
    tmp_msg_2.lon = 0.9499728494690938;
    tmp_msg_2.height = 0.0859031510878343;
    tmp_msg_2.services.assign("MTKMRKFERSQAEUVVNPZDMMXLOJCGJUPGDTZIJDIWDAYGZOBQCFLWWZYBBSSWYETOOMNNBDPAZCRMLSFGXVLRFLEAPUQTPCHDOPGGVHMUOJAOEQZCXOEHJWKHAAD");
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
    msg.setTimeStamp(0.27180556296408187);
    msg.setSource(15318U);
    msg.setSourceEntity(153U);
    msg.setDestination(62416U);
    msg.setDestinationEntity(189U);
    msg.maneuver_id.assign("UCFYDPGNRLQEZOYBILNHPECPJSMFGZPKFZHWRJNVQMCOCOIXWPAWQSOQBVFNXTFOBFWEZKKHABSJNCXEXCUQKWDKRGZPRPDLXBHZOBRSJIMRVVBANTTUYFMIQKQRLENYVTSSJUQTVNTLNPYHMEJKTXZLYALOADGGIWMXSHYGIHVFFMEJYMPDMLEXASVFTELDTCUKWZVYWIQJIMRDALHUCGANUTJHIAUCSX");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.3034196657894014;
    tmp_msg_0.lon = 0.2942426415996854;
    tmp_msg_0.z = 0.44070596675498264;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.16504926878239;
    tmp_msg_0.speed_units = 55U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.053956899587491725;
    tmp_tmp_msg_0_0.y = 0.594827773896775;
    tmp_tmp_msg_0_0.z = 0.2515569935722588;
    tmp_tmp_msg_0_0.t = 0.8452926997228222;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.9685127726793825;
    tmp_msg_0.custom.assign("AXWINCLNQZIWPRRXGUKBMWI");
    msg.data.set(tmp_msg_0);
    IMC::LeakSimulation tmp_msg_1;
    tmp_msg_1.op = 77U;
    tmp_msg_1.entities.assign("ISOWBRIWQPFBRTLZYWGXQTLIYNTHQIHBBKYJQSAEDFEQAMKZQZFIBACAFZDEEZGWPMYKXJEFCBZSUWUERHQJKKPXJSUBNLMJZHJLPORMGFFYDABWLLWYNHVQPRVSKWDALOSPOPRCTSYXNMUPIVEXVIZRUOJKWOKCMFHNU");
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
    msg.setTimeStamp(0.6914267751685687);
    msg.setSource(59766U);
    msg.setSourceEntity(104U);
    msg.setDestination(39306U);
    msg.setDestinationEntity(180U);
    msg.maneuver_id.assign("DAZZLHKPSTJGIKJCWBUDXKGYKMQZXMTNRWIFOPPJQTRSEHIJMAFOKDPEIOLBMVNGVGFYCEHKECDCOLIPDXISJFMTBLLUJIFWBRXBZSXHUBYZJBGCYTPGLYQRRUHNPWTDQXWRLFDVGUX");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 52121U;
    tmp_msg_0.lat = 0.6743061416939692;
    tmp_msg_0.lon = 0.8682941776423205;
    tmp_msg_0.z = 0.572846083111889;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.amplitude = 0.6145724492822446;
    tmp_msg_0.pitch = 0.9226944734460418;
    tmp_msg_0.speed = 0.8522196005544465;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.custom.assign("HZGVHTXJFKBHPFZARKEXMSPYNRVKDODBJPSHOOJWVJMGKUYWWALKBDMJLSDFZNUCSREIXXPPUIAGEFKMYAGIKYKNFNX");
    msg.data.set(tmp_msg_0);
    IMC::VehicleCommand tmp_msg_1;
    tmp_msg_1.type = 96U;
    tmp_msg_1.request_id = 61462U;
    tmp_msg_1.command = 2U;
    IMC::LowLevelControl tmp_tmp_msg_1_0;
    IMC::DesiredPitch tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.value = 0.05016942090247811;
    tmp_tmp_msg_1_0.control.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.duration = 42270U;
    tmp_tmp_msg_1_0.custom.assign("ODQTPRTPVWBWKNBQSJITCNAAKPUEGGMQVLVFTTAGRVSHFWTSDRIJNFXFHXVSTJBTKZQLQUEMFEISHUVMOYPOHOJNSUEWKCIEFULPHFEAVPYEYFTXUGMHGGIFKQPBBPUIGMJKVBEBOVNWJGYJXIXRRCCMPXCRGXBCFWSYZCABHWGONAERESACXMCV");
    tmp_msg_1.maneuver.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("EIUFNBUUXPECUVTHOKHWNSWSQHDJGRDMCIXWFZZFYVRSVMNJRKRKOWAIQPCIJPODGVTRTZQBALSTHUFTYGPEEISEXZWPTSLCAQBJBXZWHGGTRMOQWDNVBHKRMEGQGJXU");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticNoise tmp_msg_2;
    tmp_msg_2.summary = 166U;
    tmp_msg_2.level = 240U;
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
    msg.setTimeStamp(0.14283889956461293);
    msg.setSource(8353U);
    msg.setSourceEntity(190U);
    msg.setDestination(36305U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("IHSOXUPLHRSUIDFYEOLFTNQCBMUDVSFRNXMMETRYAUBRWCFNBWWVKNHISPKRJUGWECQFZGJGSADCTKCZZNZQLYGESAHYT");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 15026U;
    tmp_msg_0.flags = 239U;
    tmp_msg_0.lat = 0.7394743573991984;
    tmp_msg_0.lon = 0.5718470545789104;
    tmp_msg_0.start_z = 0.4257263064364646;
    tmp_msg_0.start_z_units = 129U;
    tmp_msg_0.end_z = 0.5261997035341495;
    tmp_msg_0.end_z_units = 140U;
    tmp_msg_0.radius = 0.9735379802188799;
    tmp_msg_0.speed = 0.36530374751142214;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.custom.assign("CFGPQBMWGLPDSNYZBZJCSHEDDMNWIKVITSPADCEAZFUYPYUNURFMMMCVGQGJQIALGITWQHLQXEPLOUVDJTBKBXZOHERMOVZEVNFAZZYAIQJWMSRBXTHA");
    msg.data.set(tmp_msg_0);
    IMC::Parameter tmp_msg_1;
    tmp_msg_1.section.assign("GQRAEATNZQCDZCHPXUPGZGDPBGVYTERSFZGMATNVHZEOIRHGWBNLSQYATZBHQEVHIUNKKVKVSWZWCMMZOCIUTWSCMFLCJSLCLUNIIFCDIERJERLTYEDTXLPZGOJUMRTSWKOOWSXJDDNUNBPHPDFMGWXLFWGDIMXHXKHBKCJYSASSJNTPBROQVYOOQHVJVAYYLFEAZABWIUFQFXWAPKJXMAOIQCUUIKNDYOFYQY");
    tmp_msg_1.param.assign("OGVNEFZWHAINTINIZMTXTZFQZZGFXJFBKDRZFSYOVSZPZJJQPCMDULGXVKD");
    tmp_msg_1.value.assign("ACEJQZWVWRBNAGVKGYABGNSADQCMCDYTINPSCZHTUMHKQIDEXHILUURDVKIKAMXQOZROUCDKFOMHIPLHZZRPXFPCYLEVQFHDBUWYKSYWFSSVUWEJKIXQZQSGLPUMXFPFXGHOGVNMUHTNAYORLMWKGPCOUJPXGRLZSUPBTQJIETVMCORCMXYEKABEFALWOBPIKFINOJTE");
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
    msg.setTimeStamp(0.670089079034369);
    msg.setSource(50787U);
    msg.setSourceEntity(241U);
    msg.setDestination(54099U);
    msg.setDestinationEntity(157U);
    msg.source_man.assign("IOWDIXDRGQFZHCCTQWDUWKAGKOPUOXZHGVLYQZEEVDMHRXBPLBKSXRAYVSYDOIBNHWCLSNYNZPNSCNRRZSXJMERDBTCDFYWQWISJDGEZKWHITNGPZKPAMQZBOQMVABHINZJDUACJHBOPYOTQIALXSGJQQHCIFMKMUKJEKOASWEEALVGCUUKNAUCFJTQTWRFFBMVPKHRWTJXTXFEMHAUVJOBNLLYD");
    msg.dest_man.assign("NZJSWPLOKMKAXHYGRWKKATJSOIYTMCAITPHQDXCRQQFBOHPDKEZUIOULDXZFTCRMQKPQIXLHAJQELLUVHJUOALMFXBGBEHHCROEWGYJKHZIFBHEVVCUCLSPEBGFXMIIZDNJRGWWFROQAESNRONWRBDPMXTAGXZVEYBUDFYTFYZXJUSVPTYUVUASBVXQRIRGWYKNZCTCYZNJMVVISO");
    msg.conditions.assign("UJCMIHEZQDVRIAMDCTLMZUVRDDWYNVBDRONSUNIARWPEVRONBJUVYAMLXSHGFKSZIABASIGMJZJZPO");

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
    msg.setTimeStamp(0.8081399026725737);
    msg.setSource(30727U);
    msg.setSourceEntity(107U);
    msg.setDestination(58634U);
    msg.setDestinationEntity(223U);
    msg.source_man.assign("YSMNVVOAQRPKDOAUNHJQAATBYI");
    msg.dest_man.assign("EKWTOIMWZUIMTZXDFQTGEZSLEICQURCLFYXCAOJTHJXWEQGRBXWDBDRDMISBEQSGX");
    msg.conditions.assign("KYBBIOTWAPMTAZLRPRHGSYIUFBDRXUJCVJQTMZDISMXBAPFDVIPDBSFGVZHNCUEXGNIMLQXTCRBRUGOJUTQCSJLAZGYPKSRGIRUOWHCXXWSLZQSCDLGVKNJHUWHGOWOKBMNJKAOBTFTCNVWNZV");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.5951116433255722);
    msg.setSource(32975U);
    msg.setSourceEntity(131U);
    msg.setDestination(57843U);
    msg.setDestinationEntity(10U);
    msg.source_man.assign("XVEFLFSRQPTDKPOPTNBBVKDCMZQOEGQUIIJZHOMKAQMFZRUSCGDSFGIZLAUKAXHGFHZIBSQMRYZVNXMCEKTAGQKAESYLRFALOOFXSWIWJSLHBTONYXHUQPWQMNBGEFTNCCEEHCILWWWRJIMITLJVPAJGYRDVVKAGXQGCHEUYBUVZWBPOYMKDJUCVNJJINBYLDESDWCKODOOAYMPXRHXATHTCSEPDLRUBNGJSZUBXVZTNUXP");
    msg.dest_man.assign("XHHYPOGABHIAINLROTMKAVIQNYTDRKJSDWKWVBCEDKZTMOGJXPKWDKTNRGOSXVBAUALJMJFYHBAQEWPLAIJGWHSKRZCUBHREGQHQVVXTCBWFYKWSAYNSGFHJECRISUCOZSZIQVLFBKRSTLRUGXJLFXPDDEYGTNZEUCGWDTBLVJOMXJMULSNAYFNTPNCPWDFCQBXOBEPLYYVZMMIVEVDIZDYFXFHQKPUOMFOAQUECEPPNHRGQZSTZMO");
    msg.conditions.assign("YPFXITIQUOOVTUCGSAJVSHUIQJDODPJPHRGFJMWGKUWBKGZZFMNWVZTSGXEKNUNKMYOCLOMJEGIWBKWZTTPNLRFCMPNUCARWNFCQLNCLRUOIVVMGKQRBDKSARRFUFAZHXWEWNFTCHNETXBMAIOEDMYGEKNJCPHQZBVXJLWHODYYEYLBLIZAJDXBXXTHALFGJRBTUPLRPAQBXESHD");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7646987378232554;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 52722U;
    tmp_msg_0.custom.assign("BTBFCBHJWQENXOTCLYYPZHCOYYAMQKQOUMIYJVHEBOGXMQXZKRFVEJEIAMKQLNHSXALDNPEVJSUSPOZIXXTWGRSMFW");
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
    msg.setTimeStamp(0.4166793862016961);
    msg.setSource(59737U);
    msg.setSourceEntity(96U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(78U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LUJLRIDITFKZGJHXRRSQJWUZKBZLMIWWYENJKU");
    tmp_msg_0.description.assign("CUCJASGEOCZKDIQYYMWZBYPPXPNTUJEHORUWJFMVGVKPEAQONVGJOAZCNPKABFJALRVMI");
    tmp_msg_0.vnamespace.assign("YGZSMOJTYEWXCYEPFGJTQWZEPJWDXODFWVGRKMUEHTXSDKNFOSRLTOLOBOZGZTGDAFMUCOPYUQEJVBCMGQBINLPPTVKONVQDLLZWAXAUNDNXQKAOSLPSZHRRJCEEHVZNFXURLUDEVCFICIZIXBBWCAIWUAHDEYAAJBZJHZMKPYYWKDGRSJIUNHFIXCQSM");
    tmp_msg_0.start_man_id.assign("ULCPDIOBOUNBOINCAXKOWVYQPQYWNKTENUTFLHKOCSTMUKVGPOTKRSJODXAPFQXBCUGWIQLTHRUEHIFMYFIXQNULVZKQVLRSBEF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RZCQEQGKNKQQAMTSDPSBZEK");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.16998105360799154;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0042831593994400174;
    tmp_tmp_tmp_msg_0_0_0.z = 0.39209294235565384;
    tmp_tmp_tmp_msg_0_0_0.z_units = 212U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8611642766978072;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 215U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.3907214143356361;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.7914003703053155;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JRTLXHLPWYHAXIYUZENOCNKXNMLOUMTEWPMNRZYPAMDDSQQZUQFFFGQLOOABYMHXOOSHRXBTQIIJHPNDIGFGJZDYDCUCDSFKVAJVOBPJAEROAYPYHZWGWEPCWDYGWAVCEIDENBGKVTLIZRSJBTLRBQSWEABSKUWJKUECKIBMEIGSVNRFCLWQTVBVXGEQSJLMVVTHFLSDOZCNJKTGMGOYKDQXUCXWRUZMVZRQUJTKA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MagneticField tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.time = 0.3714322068007184;
    tmp_tmp_tmp_msg_0_0_1.x = 0.13011262330819096;
    tmp_tmp_tmp_msg_0_0_1.y = 0.07147242658481989;
    tmp_tmp_tmp_msg_0_0_1.z = 0.5230289524961462;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.7427966095626436;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.4390363065937529;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredHeadingRate tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8264367374727645;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LinkLevel tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.7659987713263086;
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
    msg.setTimeStamp(0.5924924659371221);
    msg.setSource(19346U);
    msg.setSourceEntity(190U);
    msg.setDestination(16534U);
    msg.setDestinationEntity(52U);
    msg.command = 164U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PBGLBMHJTNWJUIETKVZUOTLACSMRPAGCHYNJZLVMWDBNTUNBJYDVRCRVCFYFMQWWRLQGWCOACVYWYDHYDLGJPCUAXUQFHHPIHFPFGLAZCPXRXSZDYFINZGXWGLXEDEPYURTGMPZFESNXQRDEBKWOKWEDHSZMVEPXLURSTSNTQPXIJKEIIOOQUABXQMJFDKJAAHTKHOOJT");
    tmp_msg_0.description.assign("FGAKYEIDTZEBDUCCWDDTJGQZATYFPGZXKCPLSYGFJFTYWLXKBVNUUYEYOMLQZCSAUPTZNEKOXLWECIKNMAWWVOSCMAHRFQAIQBKLTDUVXRLIFPBOLXFRZQIISQHPJXTNVDRSCNWWFPRHYNVRGHDRZAVQOECJTMXEJIZSVMWLDJYONUSDKJFGTBYOXROMBISDMPSRNLPEPMJYK");
    tmp_msg_0.vnamespace.assign("QMWZQDYAXPKAXXDZKKBDUNTGDVSMGIVSQGIHFLGBCHREEWPRVTUFKXPUHNKOVGJQOFYPSQDKWYUSMJETVWDKZ");
    tmp_msg_0.start_man_id.assign("NGREUGYWBVOTRHFKZVXYKDZXPLFSZONLKKBFJPNSVNNHY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ASDIVVJUEKHBKKMCDEODWHYWGPVCAXCBXPXFYIPYUBVMQQWFIRLORKCGTSDITALEKQQMQTZNXHLHUJNHZRECDFUWSOGVSYPXZQDKYCMQMVAHXIAJKZLUTOZLBGWYEHBRVLJUIOZGINHDPTTGQSSFVKGXWAIYNNJRTHRBNWLEPVZGFEYHESFPAUQROUMMSNWSFNZLPFBLRC");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPath tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lat = 0.2295428758486726;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_lon = 0.012538336605466216;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z = 0.8141246255306803;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_z_units = 209U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lat = 0.29049621982368734;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_lon = 0.5102436186395942;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z = 0.31213501797290877;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_z_units = 149U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.7662122308515463;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 110U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lradius = 0.3231224012943267;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 216U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 36890U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MJMIWHCLCBPXNHKKAVWPZGRATJJLDKPFWEYQXOGQAUBXSNMOJTXMKOUVYMYGFXKFUDWANZDQCQWRHAGYTTVASDRSKOUYZCLPPUYOBNBERZJEGUVGTWMBIRCAHQUIKACGLABLETEZJOKQRWVFGRFJZKHMFNDSXVQWYKVLJFONFSNCHIBOHN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Voltage tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.4406096184149638;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::LblConfig tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 227U;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.beacon.assign("DJMXBAEOAZSFMYQJXPGMNYWYGBICEXGRSDNRPOMCXALMMUGXBJPIPKJEGBQCOYZQEHAEKMWATHYZLZKZUH");
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lat = 0.8483844007438991;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lon = 0.7474850673038801;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.depth = 0.09668526901689845;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.query_channel = 149U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.reply_channel = 188U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.transponder_delay = 191U;
    tmp_tmp_tmp_msg_0_0_2.beacons.push_back(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::EntityControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 96U;
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
    msg.setTimeStamp(0.308727123881241);
    msg.setSource(45859U);
    msg.setSourceEntity(197U);
    msg.setDestination(65223U);
    msg.setDestinationEntity(8U);
    msg.command = 33U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SFHLMCHXWTPKDTUKBACUHDOTJWNSALPSLYYUKEIRJWCTAKUELLAOTIHRXZQWDDLPQNNUWEDTGYFZXGYFOGPGRUUWXLQIYEBZPWOLJCVIPQNMREXPCGBKBBNGTCCHZNIJJFVEZDZYHOVZULHFZWNAMTDVAOXGEJWVXRSFKCIOQQKZPJRSFRMXAQVWYXMDFB");
    tmp_msg_0.description.assign("UJNCHLKKFVSMHVDSXXWMBLVXGTFEGEYIJLSCKNJAFHZAZYAQRUZBLETDXNAQUBDFXGNWKUEFRWWJWGZSSKRIMVWKUQCMRMGBVFXOGRMPOWDRXOFKINAIPJICDVLORTWYHSJZYKRIH");
    tmp_msg_0.vnamespace.assign("AHQZIXNARNGOGRQPAFHCZASXWILYJTJEFVIULLMYLWNHC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YESOWFSXUGWICGZLPIOLVAYDCRORNHFGFRYJLOMOYGDVJQNUYEOHTZEWPPFDVBEUCRZGREPMKXFZSIAHBZBPTFZBAHEZNGPTFAINQKSYLBQNXYNXQEWZUUWWIAMGUTJDEPMQOVNXIABHJENHIKQNATGDTRMUFQSZHTAWPBOUANBQXTLPBDFMFBHCZJRSQYSYQJRSIYJXVLVLLVMKSCLEXHTVODWAKRXIKDOKDMKUGCJCCTPWJCDS");
    tmp_tmp_msg_0_0.value.assign("LFDTDEBXPAQVFYZSLDCNWHZRMEYIIRHHWFZSOJKCCHYYZJMQPJTEQHZDFKXLJPRXYCPKDSBVFORWGNSZWCGYNUFYMITFVHGJSKGNXKBRHLPUKOLFJ");
    tmp_tmp_msg_0_0.type = 217U;
    tmp_tmp_msg_0_0.access = 35U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UOVQDHOSAWNSGSEDOEPZIPKBHCLZVX");
    IMC::EulerAnglesDelta tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.7642217334805999;
    tmp_tmp_msg_0_1.x = 0.8144747732422407;
    tmp_tmp_msg_0_1.y = 0.6580239749953898;
    tmp_tmp_msg_0_1.z = 0.6440313434355286;
    tmp_tmp_msg_0_1.timestep = 0.4232198284301164;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.9965228923859956);
    msg.setSource(46654U);
    msg.setSourceEntity(93U);
    msg.setDestination(58957U);
    msg.setDestinationEntity(103U);
    msg.state = 182U;
    msg.plan_id.assign("XCJENCPIEHXYQBZGOWWFKCVYIANZW");
    msg.comm_level = 130U;

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
    msg.setTimeStamp(0.1600979615243906);
    msg.setSource(48498U);
    msg.setSourceEntity(121U);
    msg.setDestination(30536U);
    msg.setDestinationEntity(71U);
    msg.state = 233U;
    msg.plan_id.assign("RCTPDAZWNFOGKSQIHXVAUAAAWGGCWYVPXEPBWBDCRLLLQTTFYWETJKZJOWXJOTZRORXNHBDDINXLRSSXVOOPNIKZUEIEZLTBUHPFQPBPJMBUYEBSEXXDSUPGEJOYMWOGFUXGHMVACHLICUJVHJQEQIBYMNZMHQYHLVZFWFAC");
    msg.comm_level = 216U;

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
    msg.setTimeStamp(0.4750055840655647);
    msg.setSource(20865U);
    msg.setSourceEntity(157U);
    msg.setDestination(34085U);
    msg.setDestinationEntity(32U);
    msg.state = 127U;
    msg.plan_id.assign("AXKSNXCKSSUITJSNRYFHUUWIGDHFOBUGAEMHTSFKJYMAWGRWOQTEBCRCXCPYRWDLTQRJZRFBHEMYBCYHK");
    msg.comm_level = 120U;

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
    msg.setTimeStamp(0.11133824178271778);
    msg.setSource(64726U);
    msg.setSourceEntity(76U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(173U);
    msg.type = 182U;
    msg.op = 77U;
    msg.request_id = 8584U;
    msg.plan_id.assign("OLKTFKMFRDYNSTOOCCJUYSQALYEPNHDWBILBHXVYFQXMIBGRVOXWDDTAIJMHTTMFUWGGGZJXCQVSBZCWGZWUBAGZLENZRQLSFWHNKJJWUVHAEHJYCSUMKSICQRLHVOMYOXKJLILJTQEFHPBEAHOGCUXQVSIYCSEDMQKCYTVRFPRZDEUDVKIXPKMEFXNQPRUNDKX");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2514217517U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LTVLRKXPBNNZRHGYIZGQKCJMSFTVHICKNVOPQXFBRXXPCDWAYLAYPTLKTEMXDDSOOQMEBTQJEHIVOSSKUCWSRQSHGPWZLKNMXRWQODPKSDAGLYZDRHTGKUOIC");

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
    msg.setTimeStamp(0.292039412968387);
    msg.setSource(32504U);
    msg.setSourceEntity(51U);
    msg.setDestination(51122U);
    msg.setDestinationEntity(9U);
    msg.type = 248U;
    msg.op = 74U;
    msg.request_id = 36661U;
    msg.plan_id.assign("ZIGZFHVVTAKTQYMIZHQLVFUVFNHPWVTZCKXIOSLTJHSJXUDPRQPNHXNNSRTDFEHBPCKBALCEULRKKZMAIEHGZUWQFYGMULYIAQQYKAAOCBCEMABXHIWMSIIWTDJDOESJKPFQRQD");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("HKYOENRWMTMTBQHLSLOPEHIXSURPALUXXANDR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VUHGDARKZEFQDMCOFYDCSXICAKVTXOVXPGKCHFMIEAKWAJSDHVRLZSUYLPXTNDLOGVWLJBHRLWJVTWQPPTOLBZNZSAJSZUANIHPUZTDIURWBFDTWFUTYFVWEZWMZEISGNAXGPMQJQRTRNBEMKVXFSOMDPZUQRXYQESIEYGWJQECSCNETRNADMLXAUSKPJZXHOHLNIJRYMEUYCGFLBOFMRKMHB");

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
    msg.setTimeStamp(0.6397941556867193);
    msg.setSource(11821U);
    msg.setSourceEntity(136U);
    msg.setDestination(14996U);
    msg.setDestinationEntity(117U);
    msg.type = 107U;
    msg.op = 238U;
    msg.request_id = 4020U;
    msg.plan_id.assign("OLWSGUUIYNSLJRQYUZZRSXCQ");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.op = 117U;
    tmp_msg_0.request_id = 53294U;
    tmp_msg_0.plan_id.assign("EBDSHVXMVPUBSCZHGTRFRKIPZXOUGCHOZBCLTPIXUPOBJQBJXGFYCSENRHFAWETLIXLIYYZYDGFDSOAYLVOLKGVWIMQWZKCYUJNXNSNDVYLPUVWLFFQSKZMBFSWSAGAUQDIUNBPNPOVWCADKVAZIVQFNVXJJQWMHJQCHRMMJLJYUYDTFEPOOAOSCDBWDPRMFTGKQTJXTHETMPCMGZLNEYQAQAOWCSJENHRXUEZKKREGMRZ");
    IMC::SetThrusterActuation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 77U;
    tmp_tmp_msg_0_0.value = 0.9525140988762849;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("URGCSPXPBNHCEJEVIYJXYXUBKSBIZBFKINRHPYOVHTTKWZLFRBVBJXRDOLJDCDINOPXYDWVMAVRRJHDHEJXCTZGXPKLAFRQOGKPFOJCSVPGOYQHWFUULIYNVCYCTVEWMSSNAQIMAD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PJKYIGIGFKDUWEKYMWAAZKCPGXPJGFQGUTCHRRGGFYDWNCSCEBZXIPCTOOLHDDVLWOZMHQXBKPLZEMBUIXVDYXRALNVSCHXJKDQVJPFYUBHXWEJEIMPILSMKOAFWYNOMKNRJCVNBWQLENQCHTTMQLSHWBDORLVFGVNAPHNAMBTVWAHCDYAZOIZMEYVKRJDCTRMTPEAYNUIGRBEWNFRQZIFLSOQSIQUXUXJUFSDQYJHPZBSBKZAFO");

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
    msg.setTimeStamp(0.7252065582393935);
    msg.setSource(31155U);
    msg.setSourceEntity(98U);
    msg.setDestination(47306U);
    msg.setDestinationEntity(167U);
    msg.plan_count = 42116U;
    msg.plan_size = 918910605U;
    msg.change_time = 0.3853300071987307;
    msg.change_sid = 33271U;
    msg.change_sname.assign("PUNFMFUEJGKBBMECHRSMUKRZDTWEDYRMFPBSWWHQLBYHQBTLSXVYCEPJAQVSARICMLLUBPALGSWXIWSOYHYXZYGJAKWXCKRNIHNTMFCORQSNHEXZUZZTDUVORFADAEQUGJZTKEAZTKNHKDOMIJZXZQVKECMADPYTVCIWJPVPSNVTFDPFMXCFGOINRDEYIPYJX");
    const char tmp_msg_0[] = {59, 110, -82, -111, -24, 70, 40, -51, -63, -96, -99, -67, -50, 87, 83, 75, -125, 26, -70, 108, 4, 37, -23, 37, -97, -11, -91, -100, -23, -120, 103, -11, -113, -76, -36, 28, -70, 60, 34, 63, 25, 80, -123, -49, -76, 14, -42, 121, 8, -12, 15, -70, 18, -118, 86, 78, 85, -63, 53, -68, 106, -67, 75, 88, 45, 120, 22, -44, -12, 70, -50, -40, 121, -42, 125, 101, -1, -41, 25, 52, 3, -76, 41, -60, 100, -90, -68, 54, 63, -6, 123, 109, -52, 111, -75, -106, 114, -58, -127, 53, 89, -51, -110, -43, 69, -45, -48, -62, 117, -40, -80, 115, 43, -73, 111, -57, -26, 43, 12, 84, -32, 2, 110, 59, -41, -13, 102, 80, 114, 61};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QQZRLAPVFPALZFZYTCFFTUEHZKLISMMVLMUMWDSNAVAXHVYCKOTEBUNZNJHITJZBREHMQGYOFUUCHTLTAKYBDFONYRPABYMYYXIDPESNQJGOIZKTLATDEXPWIYRODEKWJWLVLOEGRVURGSCMXAQBTVSMGGYQMNLBXGFXCVXDHKWTRBHCCUKWCJWKBERJOSFKCGWQBJEEPZXBPAQDWGWHLVPPUKDDRHZNIZFSQNPUOIXO");
    tmp_msg_1.plan_size = 60490U;
    tmp_msg_1.change_time = 0.3206668112412595;
    tmp_msg_1.change_sid = 23012U;
    tmp_msg_1.change_sname.assign("EEVWXHJUCMIBYBFMZRJEWJHNCENSNXBJ");
    const char tmp_tmp_msg_1_0[] = {112, 111, -86, 30, -125, -29, -62, -90, -12, 111, -128, -45, 83, -128, -90, 63, -68, -90, -103, 104, 107, 100, -9, 92, 62, -108, -5, 102, 45, 37, 25, 78, 33, -28, 19, -125, -68, 22, -107, 15, -104, 2, -67, -6, -117, -39, 75, -29, -106, 18, -24, 124, -101, -125, -94};
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
    msg.setTimeStamp(0.14424341301602672);
    msg.setSource(12144U);
    msg.setSourceEntity(44U);
    msg.setDestination(48081U);
    msg.setDestinationEntity(219U);
    msg.plan_count = 56234U;
    msg.plan_size = 1368609193U;
    msg.change_time = 0.04991775809378429;
    msg.change_sid = 46549U;
    msg.change_sname.assign("VEBOUOXSBGFTQMKVLTLDAVSGBHIOKYCALLJHMERDRSIP");
    const char tmp_msg_0[] = {4, 93, -6, -59, -47, -103, -42, 117, 1, -86, -49, 122, -126, -86, -67, -39, 59, -68, 49, -47, -108, 70, -60, 30, 22, 43, 61, 53, -20, 24, 26, -101, -119, -91, 53, -42, 119, 8, -49, 29, -43, -63, -75, -21, -121, 80, -99, -52, -45, -100, 63, 46, -42, -42, 93, -46, -94, 60, -103, -27, 66, 115, -9, 19, -61, -121, -50, 29, -3, -42, 102, -88, -67, -30, 112, 65, 30, 109, -88, -35, -51, 98, -113, 62, -61, -67, 51, -83, 74, 90, -84, 48, -33, 51, -31, 92, -15, 87, -62, 87, 17, 19, -126, -39, 47, 105, -92, 63, 106, -39, 81, -80, 54, 103, -31, 27, -87, -72, 62, -124, 79, 78, -112, 60, 10, 1, -86, 23, -60, -117, 37, 19, -124, 115, -44, -86, -49, -121, 116, 99, -98, 22, -52, 0};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YVACVHVIXZAUOTCTPXCDKAZQSWGUBDJAQNJUAKRPNJOLZTECHMNDJBPDWOSLRORENXUCQKLXFXIBNVSQ");
    tmp_msg_1.plan_size = 30244U;
    tmp_msg_1.change_time = 0.807096809902213;
    tmp_msg_1.change_sid = 44458U;
    tmp_msg_1.change_sname.assign("FUWDOHLCAOTDRCUYMTUJPFHKQIPJMKIKEVUJJRIAPTKQVGWQMXBQXWXGUBLYWVKCJSAZAQWDTCYHLRZSSNSOMBXABGPZKGFDZGNZZBFMOTWBRDEVLOPJCRVGEXEGDMOJMOAPQYUSPWUBHBYXEIZSTEUHNADEFFGUHAKALPXYLNZIVORVCREJINFYPRYCIPBAZEQQTNOIBGOWQJFLCWT");
    const char tmp_tmp_msg_1_0[] = {20, -51, 30, -85, -38, -85, -62, 11, 71, 31, 107, 66, 114, 72, 48, -25, 0, -21, 55, -76, 47, -85, 29, -43, 68, 5, 82, 39, -9, 38, -101, 14, -124, -121, 49, 38, -81, -45, -118, -49, -109, -126, -17, -125, 101, 54, -11, 94, -44, -124, -5, -114, -47, -113, -28, 103, -81, -15, -59, -38, -35, 6, 35, 117, -70, -128, -43, 49, 71, -83, 27, -106, -90, 32, -16, -8, -50, -23, -76, -62, 53, 6, 34, 18, -25, -92, 89, -6, -106};
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
    msg.setTimeStamp(0.6439810206946643);
    msg.setSource(33818U);
    msg.setSourceEntity(100U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(163U);
    msg.plan_count = 38046U;
    msg.plan_size = 3864916486U;
    msg.change_time = 0.21720232239370596;
    msg.change_sid = 33529U;
    msg.change_sname.assign("FGPEFYWOKVZRDZGUAMDNQUCOLNHIOVBCBPQSXIQBDVPXKWXAWTMNFPWPTAWSEIHDAWTEYBXDUZQCVHLITMRBGLWFUDUSQAPMFYOXEHLZOLQCOLCJVUNPPZYRJYINXBOINLRGAHLRCMXFRPRCONJFGLZSUWXSKYXEIVKMVQYVTJFHSZRCJBMSSNKRGPKSBAKKEITGTCIHHYJCAUELUIJTHMAOWSZDK");
    const char tmp_msg_0[] = {-86, -117, 64, -78, 70, 17, 112, 92, 113, 71, 11, 2, 49, -7, 19, -31, 26, 113, -47, -68, 76, -70, 44, 110, 0, 28, 79, -36, -21, -65, 22, 16, 28, 82, 15, -70, 7, -63, 94, 97, 84, 113, -86, -103, 89, 59, -46, -64, -39, 7, 116, -128, 29, -8, 64, 125, -2, -45, -96, 116, 45, -97, -31, 75, 118, -71, 95, -49, 78, 124, 114, 33, 7, 26, 103, 126, -101, -81, -119, 9, 94, 72, 56, -6, 40, 63, 51, 44, 84, 25, 7, 17, -64, 45, -48, 19, 67, 72, 97, -68, -116, 121, -56, -42, 77, 103, 84, -58, 70, 36, 110, -57, -31, 0, 8, 123, 74, 76, -84, 11, -116, 0, 33, 64, -115, -101, -3, 83, -31, -93, 57, 77, 5, 86, -52, -64, -57, 95, -69, -125, 56, 70, -127, 57, -26, 105, 96, -107, -61, -36, 101, 108, -57, 114, -71, -49, 102, -48, -56, -119, 86, 114, -2, -48, -126, 4, -84, -77, 16, 82, -85, 35, 110, -97, -29, -61, 68, 80, -4, 11, -72, 64, -40, -28, -50, 52, 50, -119, -30, -98, 54, 21, 76, -68, 110, -105, -80, 125, -64, -42, -79, -107, -94, -26, -71, -70, -66, 94, -78, -39, -55, 95, 83, 39, -75, -87, 97, -80, -126, 99, -30, 19, 50, -49, -43, 116, 113, 61, -51, -21, -116, 47, 81, -91, 19};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZSDIAWESUGDYBZJTQYYZPLNDHERZOPNPCFMXQFXNXULXKWDNJHAXRJKYCXRTRCMKKOPBHMMVWOJPEFNBMIVCJBBGBHTHNMOZIKSHDUSYVBEGDTBELAWLKUCGIMJLJEPOXVQRTICUFFTWJAHXUZVUESRUWMXGYYTAULKZEIVNRXSUHKFQNJOCDMQBQAPAYICLOROI");
    tmp_msg_1.plan_size = 11544U;
    tmp_msg_1.change_time = 0.5097925016910851;
    tmp_msg_1.change_sid = 5015U;
    tmp_msg_1.change_sname.assign("YMWZORLCLKFNVFRRVTPHBISFZRAXLTGPPONCGASWIZMEQGBYOAPIMUWDJTAEWTOFYFSRBKGVQUHTHSDSJXMOGKTNPZKPLYQNMJK");
    const char tmp_tmp_msg_1_0[] = {-122, 24, -30, -32, -116, 8, -37, -54, 126, -48, -109, -92, 126, -104, -12, -127, -102, -13, -121, 46, 44, 121, 24, 66, 94, -17, 116, 67, 6, -17, -43, -104, 43, -99, 20, 54, -38, 106, 67, -123, 117, 31, 22, -3, 8, 34, 49, 45, -33, 75, 111, 27, -10, -97, -7, -95, 108, -74, -116, 73, 71, -111, -30, -34, -24, 104, 96, -103, 62, -68, -108, -68, 13, -39, -102, -44, 30, -9, -1, 70, 125, -51, 61, 115, 53, -74, -125, 1, -16, 126, -25, -37, 111, 38, -77, 50, 121, -30, 30, -27, 23, 66, -107, -115, 26, 74, 89, 109, 2, -116, -126, 64, -115, -66, 90, -51, -85, -39, -121, 4, -67, 1, 10, -91, 69, 73, -117, -8, 44, -126, 7, 7, 36, -74, 6, -79, -102, -41, 77, 4, -103, -4, 63, -10, 65, -62, 62, 72, -125, 28, -23, -65, 34, -104, 48, 3, -23, -4, 90, -5, -99, -64, 56, -42, -33, 118, 20, -24, 89, 15, -45, -74, -31, -27, 46, -67, 0, 119, 26, -32, -75, 19, -65, 104, 28, -56, 58, -43, -55, 97, 46, -101, 70, -59, -76, -17, -92, 114, 122, -23, 113, 64, 86, 31, -118, -4, 105, 19, -1, 121, -118, 94, -27, 24, -5, -41, -80, -1, 46, 31, 82, -108, -12, 76, 104, 72, 118, 82, 46, -88, -50, 21, -23, 92, 101, 96, 125, -64, 120, -15, -116, -44, -83, -116, 16, 110, 53, -67};
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
    msg.setTimeStamp(0.8829803432726329);
    msg.setSource(7076U);
    msg.setSourceEntity(143U);
    msg.setDestination(8918U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("JIRJUXNIOEVWFLTNHBKCZPIMXNDQRSGSOQBQCYPYKDUOFQXPGEYJAZPAUCKRAKECNZCZUXEHGFEOQTRNSXDKNSMZOZJ");
    msg.plan_size = 34605U;
    msg.change_time = 0.2760866837158832;
    msg.change_sid = 5749U;
    msg.change_sname.assign("MTBETJXNWVBZBUBCVTWKJFIOPMMQSVNIJSGQYBXARCHHLSFWLGGANJBUHRDYSVPSZHWDQUHLUNLGZPMCAUTBXCTIDYKNISZQDLSXRTEHZGHEAEXZCWBMRIOBXSDVSDANPEEYCRDVGJMHPLOOOQALEC");
    const char tmp_msg_0[] = {-60, 120, 39, 1, -27, 23, -42, 60, -41, 14, 95, -13, -20, 13, -49, 75, 118, -24, 39, -20, 23, 119, 105, 123, -14, 60, -26, -55, 100, -38, 107, 30, 72, 30, 91, -93, -120, -41, -118, -75, -74, 86, 97, 4, -46, 109, 65, 28, -16, -31, 43, -101, -114, 96, -24, -111, 32, 93, -66, -53, 53, 56, 123, 7, -104, 35, 72, -66, 15, -95, 76, -23, -28, 101, 2, 43, 91, 79, -3, 98, -127, -110, -42, 56, 1, 102, -116, -7, -117, -66};
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
    msg.setTimeStamp(0.23009680212044614);
    msg.setSource(30147U);
    msg.setSourceEntity(178U);
    msg.setDestination(35519U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("JGKLNAEYGPQEMQEDAEBITCTUPVAYPJSFTHTXFSYZTAHMIBRYPWFIGUTYDSRPNZFJMLANDMJTCMRFVVWOYUWMEOMWBXGWLUPTMOOSBURJQDIFYZXJOIXEQGNCNVLAQIRMAZ");
    msg.plan_size = 21329U;
    msg.change_time = 0.9711644434332847;
    msg.change_sid = 7698U;
    msg.change_sname.assign("JHFVVXLNOWCBVSNIUHRWESFDHKEYGQTOTZAMZBSHGFUAGQOZHMECY");
    const char tmp_msg_0[] = {118, -9, -28, -23, 85, 52, 58, 121, 69, 116, 56, 78, 68, 30, 97, -20, 35, 17, -102, -122, 91, 69, -106, 47, 98, 111, 4, 42, -109, 105, -102, 44, 94, -70, -8, -56, 65, 71, 73, 34, -5, 19, -112, 28, 61, 36, 32, 2, 45, 41, -93, -58, 36, -76, 9, 30, -65, -38, -2, -100, 112, -22, -127, -71, -108, 19, 44, -76, -2, -10, -71, -40, 33, -7, -39, -21, -112, -75, -41, -37, 72, 61, 39, -6, 118, 7, 42, -102, -1, -16, -36, 31, 34, -4, 99, -96, -65, 59, -93, -96, 1, 75, 97, 1, 89, -76, 57, -81, -67, -60, -54, -42, -100, 73, 82, 2, 26, -37, -101, -115, 33, 121, -94, -85, -109, 112, 86, 121, -46, -46, 83, 40, 17, -33, 35};
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
    msg.setTimeStamp(0.5123974995975749);
    msg.setSource(7576U);
    msg.setSourceEntity(43U);
    msg.setDestination(14577U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("FEWVQPDJLUZVMYZCADSMRBPEIALMKZDHWFIXREUBOIJDNGBWONKMHVTTVNEZCXKKPHCILWVAJRCIEUOIYFTGJNLMHWZFHFMMXEWSRPKYVQFIJBEOYADXQKGASCLDYPAZTLUSQQQDOUKZ");
    msg.plan_size = 1644U;
    msg.change_time = 0.5500025828035373;
    msg.change_sid = 38198U;
    msg.change_sname.assign("HDBNSAHBREQCDSOHYIIMUUGACNHTQCJQOCSPEKTJJPMKRNLQOYVMHJSBWEFIIEHIRSV");
    const char tmp_msg_0[] = {76, 31, -40, 122, 51, -16, 60, -19, -37, 67, -22, 92, 43, -61, -64, 61, -79, 122, 98, -16, -100, 49, 32, 52, -102, -69, -26, -128, -17, -39, 35, 1, 107, 38, -12, -106, -21, 18, 116, 125, -61, -85, 108, -96, 122, 79, 20, 32, -28, -90, -53, -36, 23, 82, -27, 102, 97, -12, 116, -8, 54, 51, -119, 92, 30, -122, -70, 126, 123, 71, 62, -23, 15, 112, -6, 97, 60, 58, 51, -38, -120, -89, -15, 105, -66, 95, -32, -2, 29, 0, -111, -46, -22, 61, 99, 19, -93, 9, -110, 1, 47, -108, 6, -125, -29, 56, 78, -25, -123, 88, 123, 102, -105, -90, -50, 42, -20, 13, -82, 23, 13, 125, 93, -98, 123, -117, -19, 81, 3, 65, -102, 10, 24, -29, -2, -102, -24, -23, -83, 121, -110, 95, 17, 52, 12, -122, -42, -50, -65, -70, -87, 116, -1, 66, 89, 44, -59, 48, 108, -75, -1, 37, 80, 90, 114, 73, -88, 44, -79, -68, -121, 66, 45, -124, -81, 25, 55, -50, 125, -35, 21, -101, -12, 3, -63, -87, 89, -66, 61, -113, 31, 95, -19, -120, 11, 27, 68, -21, -38, -31, 39, 59, 75, 36, -97, 17, 114, -69, -51, -37, -34, 12, 69, -4, 38, -40, -81};
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
    msg.setTimeStamp(0.5427492118942953);
    msg.setSource(10470U);
    msg.setSourceEntity(190U);
    msg.setDestination(44470U);
    msg.setDestinationEntity(3U);
    msg.type = 110U;
    msg.op = 78U;
    msg.request_id = 41564U;
    msg.plan_id.assign("COMACNTOHZCRMCNTMFPIMBBMVRNWSXCXIDAIQHGKKTFINHNNHUFUSJPDZFUEWAKBQUSSFEJPYUYUQSYRSUOAGWKJQXYEUTQBAFVADEJJXXCYIGYPSAGGHHDPZMOOQUTHPMRPOVJNSVWLFXYLVRALQJCIHMKIQYJKLWNLTTBOHM");
    msg.flags = 61873U;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.4916598861909822;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WEDRZGAXNFGSHKFMTQIXLJJMXGVJPTDEZCGVUPLPYKJPOTFFWSJZPFICHQZIFSHBYRBLXEMVCUCLSAXVHUNPIINCCAWNOJQLANABSYKNHGTXDEHCEZDAXKQERHYWJWWKVMISGHAMODMPRLLTFQKVYIAORGZJGUCQOIMG");

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
    msg.setTimeStamp(0.6272905874494096);
    msg.setSource(47488U);
    msg.setSourceEntity(234U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(214U);
    msg.type = 67U;
    msg.op = 140U;
    msg.request_id = 46925U;
    msg.plan_id.assign("PSRYNIRYVTUNYTVBTKZEDHVDTXPWXOZVRKNZALU");
    msg.flags = 8252U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 144U;
    tmp_msg_0.htime = 0.3966046660107513;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 101U;
    tmp_tmp_msg_0_0.htime = 0.8497721056443054;
    tmp_tmp_msg_0_0.context.assign("XZMCGACQVYPSSSCYBERYOWQKGAFCFHYYXTYRLZJDZLTCPGVQVIYHRDNFFERBFINRHDAOKIYLXZADEOOXNVZJCCEVKYCOPECPSTKEUMGIKFDBAWOAHEIPUNUTMAZSVUNANMBJBURDLQ");
    tmp_tmp_msg_0_0.text.assign("CDUDXKEOPZCOSDDUSHLQWNHIAWMFVWFPCGGTADRLFLQKCPI");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OJWUOUXTESRVDORJDUGDMFEHAZZTLVQWGIVROSMKHSNOWBLEBQXWRQDNMHBTVLGOHCKBPASVYNKWIJTLNKEHGTVXFINXD");

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
    msg.setTimeStamp(0.7101751508162266);
    msg.setSource(41035U);
    msg.setSourceEntity(169U);
    msg.setDestination(6197U);
    msg.setDestinationEntity(9U);
    msg.type = 235U;
    msg.op = 107U;
    msg.request_id = 50705U;
    msg.plan_id.assign("QOWMOUPNMZPCAFSESSPSRUUHMEUWAJXKJQYSCAOBVZWGEFRZPDPDJBICCPAFVINCILFGJCDFFYTKAENRUWXAWVQQOSMP");
    msg.flags = 22101U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 130U;
    tmp_msg_0.zoom = 157U;
    tmp_msg_0.action = 79U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CLODBQHDLWNAYTWTPMVZYPGPKYWBWFDIZQCZABWNVVDUKADJLCNBLCPUXIDYZRGDNNOLFVZAQUAC");

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
    msg.setTimeStamp(0.0009032674500812909);
    msg.setSource(1512U);
    msg.setSourceEntity(69U);
    msg.setDestination(11063U);
    msg.setDestinationEntity(180U);
    msg.state = 22U;
    msg.plan_id.assign("DDWSHEPLBFRUARBSPTAJZXJYKIHKGWMQAHKFOHHDVZNVYKLOITMCEDEQLXVYCWSEPWNUPQGPIUMWOISTDKRUJBNRACBIBHKXVWEDVQJAPAFXPAMWFZOLQOZLFWSTNVNFMCHMNIZZTKPKRJXXUYUMGERUGWTUCYSLQGMEOYJBEQYUUGESOFGFZNLDRADIQCTNDXCRQTPERBAIIGZKB");
    msg.plan_eta = -1284098362;
    msg.plan_progress = 0.6267641289641797;
    msg.man_id.assign("HKUAEBJTKWXWZHQOBHTBDZVMDIYISXNVVUMXJWWQGGYQQPLBPLZMNNOVK");
    msg.man_type = 49562U;
    msg.man_eta = 1841834807;
    msg.last_outcome = 3U;

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
    msg.setTimeStamp(0.6053761264157789);
    msg.setSource(51565U);
    msg.setSourceEntity(109U);
    msg.setDestination(32009U);
    msg.setDestinationEntity(66U);
    msg.state = 62U;
    msg.plan_id.assign("SNIOSQIEQLVDGPYMDKDVXPKSETXACYZTTHAJYDIHLBVPBDZVCSOPYEUBKMOJWEMKRZMNEPRPBLFZLGJCWGFSAYMCPCZR");
    msg.plan_eta = 1486383840;
    msg.plan_progress = 0.6720041458484565;
    msg.man_id.assign("KLQLUWIDDYFZMEVWKNJLLHEUTSNMAVXWPVIGPTKVBAVKFZXCIRYCQTUZBKFNYJAFDWIPHSXCZYPTFBRUXMXTUYIGSDPXQTWOCRRHONQODJCLAU");
    msg.man_type = 39194U;
    msg.man_eta = -545716234;
    msg.last_outcome = 188U;

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
    msg.setTimeStamp(0.7666217425973685);
    msg.setSource(30144U);
    msg.setSourceEntity(184U);
    msg.setDestination(59859U);
    msg.setDestinationEntity(156U);
    msg.state = 16U;
    msg.plan_id.assign("GKQEUSTQDFBIASAUGNHBIJGWPYFBRVSRKDRZAQDLFPSWPHERMDYKAURZXOPOYNMLGBIHVMCNEYEKDRNGFGIWCTJXYWQXUTVLVXFJHAFKVVWWQROXZPAGMGBIBCTEZDTPNSASZISQHNJCFHLXLKIILNMFKSIOUOEUBVGKEWQYLPCXICWWQMJLNMUJOJYSRPYRHECVTJKXPSDCPGNJWBZXHEMAUZULXAOHNVDTOBYOUJDKHMYRDVTZOFZQTTFQAM");
    msg.plan_eta = 718708415;
    msg.plan_progress = 0.8913352381027073;
    msg.man_id.assign("MJSOCQSQCTBRLHCSHGADAWLZIAYZNDQSMZCLKKZQNNTJYAVVIYOLAYRZXLGLECFDZUJAFWTMVI");
    msg.man_type = 36549U;
    msg.man_eta = -393020321;
    msg.last_outcome = 43U;

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
    msg.setTimeStamp(0.5003087704337367);
    msg.setSource(9353U);
    msg.setSourceEntity(113U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(134U);
    msg.name.assign("ZRTDRBLRWCMNBTAUHNEULYXLYJICIYBFEPBICHYKMIQGSCGNCFFJKDWFWVSTRXPJDADHRQQWOILJZJGGKNMVUHUDBNWSTJDLLXVGVAPIFUWSXEHEAYFOWYXSGCNFDFJXRPLQAPSRLFQMQMLBIHUTECBTBDXSEZKUKQCOVAHAUWRVKPAJIOQZZXZOGYSGUWPDCLKUNZJAGONMBORVDOENMBKTTVHEQRYIOVGOSKAFZYMQZXTZWHENSPTJKCM");
    msg.value.assign("PSAVMEAIZWD");
    msg.type = 47U;
    msg.access = 80U;

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
    msg.setTimeStamp(0.03083148739163233);
    msg.setSource(9070U);
    msg.setSourceEntity(130U);
    msg.setDestination(13979U);
    msg.setDestinationEntity(157U);
    msg.name.assign("XZVFPTKIYOHYNDRSGFGDRCICXJILOGEMSJNIOPRHUGWPVLMFCGIJEUTWLLAPQBQAUYWAITKBANDVEOXULUBMCUOBWPBKHROUAAANKSMNLRYTJERYVHXJEKBVBXWGMHDQZZFMTFWCIDKZOVQRDJPPGOPHDHFYPTEZLKKFLXQWEUPJCJDFZFYQHKGIDWSLWOUQXAEFZNMHEYQYXVLQBADNVRSSYCIUVHCGZNASRSTMCTVOGXJEMSKSJZXNITMWT");
    msg.value.assign("MJWEEVOVFKYEFPAOTIDGZFDMSGLCOZBQVLCURPYTYGOVRUFMQOHCUWBYUPVJYKSBMBWVQOBPNDZTNDUMKZFCURFNIUGURDIWUXONCPDKHJYHWRIKNFTRBMWMMLEQJVAZWEWYGRWNMAJNTBFOJLQ");
    msg.type = 149U;
    msg.access = 252U;

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
    msg.setTimeStamp(0.8060883912787923);
    msg.setSource(13346U);
    msg.setSourceEntity(200U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(237U);
    msg.name.assign("UKXJTVMRTEIYGVBKPJHS");
    msg.value.assign("FZIVVKKWAWVRYTRGSQEQVAOIJYDXVNJX");
    msg.type = 144U;
    msg.access = 247U;

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
    msg.setTimeStamp(0.14554799621044434);
    msg.setSource(29858U);
    msg.setSourceEntity(46U);
    msg.setDestination(60735U);
    msg.setDestinationEntity(36U);
    msg.cmd = 20U;
    msg.op = 146U;
    msg.plan_id.assign("GHQCXXNIEROMOMGDHTZJEDDJGTTIJFVCDQAXRAQFEMWIPBXCPTSKBIMTFCMFSZVHUDHOIWOJRNFPRMEPUASFXWHKDKPLRCNOVYLUBFDILKHTUXQYCLLABBLCQZURAKSFNMIANGFEDWZPYCYOOISQRDXOSGVUPNPXJIYXKTBVZVGPGDUKCZYEQNMNESEUZSEYJKJOKVBSTYAVWNAWR");
    msg.params.assign("QSYHJVZXLNRPJHFMOXHZCZDQNACCHBJYBGWBHQINCAMAPCZSFDDWRZJWTPYVFEFNVKXRL");

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
    msg.setTimeStamp(0.6196197432941649);
    msg.setSource(22017U);
    msg.setSourceEntity(246U);
    msg.setDestination(57463U);
    msg.setDestinationEntity(157U);
    msg.cmd = 184U;
    msg.op = 39U;
    msg.plan_id.assign("TBSJKYTUGELNCDZZNXFIIVBLJVNRGBAFCPGGZCTYLOHTIHOUSQCARGYVJCADNZTJMX");
    msg.params.assign("CCGFFPWRDGVEOBENYHUDFBMHAACMYJVFSKSYCFROPUOCBSRJQPNFVDIBVIJSHRQEZXAKQKVQDLFJBDANFXNSDUZSJHNQKJNRHORXOIYPDZZYTCMDSTGPLZPLNZUHRXTLGGRYZEM");

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
    msg.setTimeStamp(0.6026478293914311);
    msg.setSource(31572U);
    msg.setSourceEntity(196U);
    msg.setDestination(27572U);
    msg.setDestinationEntity(199U);
    msg.cmd = 249U;
    msg.op = 175U;
    msg.plan_id.assign("XMZCVRFQPOXFLHMSAENOIQBHEAALZWNGQDTBIMVVRCKOTMFOKVTZMTOWTXRPVTGDRUPFDVTSOHHUSEXVNSNJUCKOBLOVLDBAYRWDGWDFGOSCNGQNAPS");
    msg.params.assign("BJZQRILNCXTOCMHYHUUIDSMSBFMXWITQQOYYAXEGBLFHOIAVOPJSMEKTLCJYJPPUMPGEDKUEKVHPVZUSXDUPAJKAGMKZJBCAFSRDMYFCOVBWOTWTIGAWPTVVRGPNWZMFLHNIXJSYOGDVXIIDXUMJNGQQPVHKGDZANRZQRQEJFYRXAQPGESBSWFIKHNFLFVBMXTINTCBRYRLWAUHTSHZZLB");

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
    msg.setTimeStamp(0.22692606320419395);
    msg.setSource(6163U);
    msg.setSourceEntity(71U);
    msg.setDestination(3211U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.581313825209681;
    msg.lon = 0.022489318114132018;
    msg.depth = 0.7710751269576046;
    msg.roll = 0.6986967699737451;
    msg.pitch = 0.5979854068490802;
    msg.yaw = 0.8924088584593591;
    msg.rcp_time = 0.7055614634511003;
    msg.sid.assign("MMPQSNTZMGWHNQUKKHNMOCRFQHIVZXDQRUVPZEEZDHAPETPCANWJSWAOOTKFQTSGMSXVYJXJMSDYYEKXDAOUSZILCGOBQCPKTIYPNIEGSHIRYRKYFRMCWLFJIDVGXBRIMXBONCZJKEUUOAWHFJLGYUVLZYAQB");
    msg.s_type = 239U;

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
    msg.setTimeStamp(0.4070040819502019);
    msg.setSource(58534U);
    msg.setSourceEntity(45U);
    msg.setDestination(19146U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.6552965518690467;
    msg.lon = 0.8960511429268553;
    msg.depth = 0.10333832915686092;
    msg.roll = 0.5797940177667991;
    msg.pitch = 0.9280693365300878;
    msg.yaw = 0.06673782376537463;
    msg.rcp_time = 0.7894208322858122;
    msg.sid.assign("TYRYOIMVXNQJKXTEPZNAVBKKWWVTPDMNBTJGTEEEUXVFGAHMVMQMNBPCCXGYILLNMENVGZRCLSEJXYEDLOSBFMOTNCOIISKGWABSVLRLHZHOFXHQOCAPBPPOJTSUXEYBWZJUEIFICDFAAZBUZFLMCVMSGWFRPDUYKFI");
    msg.s_type = 14U;

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
    msg.setTimeStamp(0.6976212604858445);
    msg.setSource(14334U);
    msg.setSourceEntity(213U);
    msg.setDestination(55582U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.08580280404945517;
    msg.lon = 0.4866851969640569;
    msg.depth = 0.991993918096521;
    msg.roll = 0.8588466721310131;
    msg.pitch = 0.7743684758237632;
    msg.yaw = 0.6137081179670226;
    msg.rcp_time = 0.14632638036495127;
    msg.sid.assign("RRPOXLLCRDIHGLLFZXCOJIFXAWTLHKYBIYVPQYFQSKMEBZSAKGPTNOMPVSWKZMEHVLURNKSIPWASFNQSEBDVHCJYVVMZLCHKHVXXUOETYCWODOMNXTOPGBQWLNAFXWCJPBHNTXNMBGYGMGSVRVHOJFMZWCVAREJKYGRRRSCPRQBWINXZLYQDYBKJFWDDETQZFOGJHSGTAEBTXUEDJFPUPTZUUUJTWMCDAENKFSE");
    msg.s_type = 63U;

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
    msg.setTimeStamp(0.24452459098339596);
    msg.setSource(8147U);
    msg.setSourceEntity(147U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(20U);
    msg.id.assign("BOBJEIPLCMKARYTLSBADXRIGUIPHPAVPBGIGLGEVZFFWPSHXLSGYUMMRNUTANCSUPUHVWQEUWOLFTAEKOCEQCARTPIDMDDHKJOTMXEJZKWQRDGXJKNYBIYGVZHENRVBWKZJZAMSYZUHSLTZQYKQQNVXOGNLVVYWVADKJYFMRNDOJKWINXWNBZUXQSF");
    msg.sensor_class.assign("APQJWICHIBLVCISTCKPNUVAYRMCBRLPGGNYDBXUAQYKGZYOATCFJFLXFTDPNQWTRSRMMKRMBNKHKAHCVMBITFJGRFFNUAPHNTXKBOLHHNVAFBKTEKOXMXUZGEHUQIMEXNSEJZEIHYGDOQYEPDOWBBLWHSXGZSEDAWVCOOQUZPJYIZDQNSVWAIQCUEXGWFOAXZSFCDJQWURSIGVHSUPNDMXTCWLYLJETRRYDVWVBZFSM");
    msg.lat = 0.25147124717505265;
    msg.lon = 0.6229425099530846;
    msg.alt = 0.22779398070511803;
    msg.heading = 0.06123695395930262;
    msg.data.assign("HLFBXEDEYNIHFTLAQGYVJXIFBTPWXBLACVNKLEZUWEBRPZPLYKSUNPMZHCKSUPQQDOQWVCCDWDTOSBFRCLGFAMQPZAKNIJGAJOTXXTQWIVGERQJYTGBETONKKMWCSROODAUNVVPXDIJDMWUYZHBWHCXMNQZHFZGIQLVZRPRVAZKDKMPOJEHM");

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
    msg.setTimeStamp(0.351768633016721);
    msg.setSource(46888U);
    msg.setSourceEntity(119U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(253U);
    msg.id.assign("HVRPWSEULNYEMGRAPVRZGLMIRKUIPKNHANSLQYJMIRTZXQINXABIITBBFRBFECGMCHJCHNQGDUUCCDFOFKTMDRTAPKZSNNATFXSYPCHSGJVTZJBBYZTMWZJWJZTESDLEFKXSNGOBLRDADHVEFUPIWGHO");
    msg.sensor_class.assign("BIBPLDZQOYGJJFEWDKOHFEXWQKXMUNQMXPLRQJVQQVITYZSQPSUPJSGOARHCKZCWRPBINDLAIYVQPGNJFUATCCGYDLJZBLVZFWFUTBZQZLFXMTBOFQOWRKCEORMKSCVXJNBDNLHPWDAIVEZUOGHMNBCVPLIKMCHYHCGSEOWMOCRMWBUHYBRTKINVRVXJUHTG");
    msg.lat = 0.4904434047249583;
    msg.lon = 0.376909404975336;
    msg.alt = 0.6810536860402221;
    msg.heading = 0.8400875061719321;
    msg.data.assign("GLPWSFMWBBTRDURNBXKPLLXUBMQAYXQHXIAYAUBUDKEFEGMINMFJVOJTTRJGYUWXNPPDORYZGSPTVQDVWLEVKXCAODQEMVOOSIRZYEEWLGXTKZABVXYFDQIAHMDMZDQRHSNSZYLV");

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
    msg.setTimeStamp(0.7790585742497023);
    msg.setSource(30508U);
    msg.setSourceEntity(109U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(39U);
    msg.id.assign("SRXBSXYXKFMWZORXPKNVDHYYOEGWEMVLDKXUBZAVOZUKSDEQQTRLIGLTCNNAUTNIVLQHFSNQCFACADIAXEQIJBOZUPGGOBBVQCGTTCYPKVEGKWIUUHUYXYG");
    msg.sensor_class.assign("VJDRAPAEPYGBVPZSEXPMILENJHPGAQMBEOMILSJDFIVEYZJ");
    msg.lat = 0.2528537622657986;
    msg.lon = 0.39376487954105444;
    msg.alt = 0.004366529586953494;
    msg.heading = 0.606947345687531;
    msg.data.assign("XXYQZUGLRVRLHQTSLZFZINVYTDPCCLUISOPEAIMRKIWEMQPXOEJKUWKRSVOVBFNIVLFNLGZFSQOTNWDVCXGIEJRVYJVWVOVWAKDLUWLUSXSAESDTERBFMMYYESCXEEKJUKBGCDRNBLJHTQRHAMPTJXAFQYNZMHKMERDBHFYYCADQIQJHAGHFOIPDZNANGBMQQUKJBLFCYGRCPAPPOPHTUK");

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
    msg.setTimeStamp(0.7399058002504617);
    msg.setSource(57553U);
    msg.setSourceEntity(41U);
    msg.setDestination(3939U);
    msg.setDestinationEntity(189U);
    msg.id.assign("MKXWKBWIFCDGRXGULNCDNKJKHRERLEQOYHCFYOBCNIAY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QVRYESSOPXIEZRVGDKPJZLLVQSFWIFELGYAKXTQUAOUXCXYVRDWJKGONSQMVLEHNXYMVOUPNIZGOZWDFFSSMDNTBKAIFIGQMPIMNWCPSQJSQVESBCHAEZHGWKYKQFHAACWDYDXJXXZOP");
    tmp_msg_0.feature_type = 94U;
    tmp_msg_0.rgb_red = 94U;
    tmp_msg_0.rgb_green = 5U;
    tmp_msg_0.rgb_blue = 17U;
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
    msg.setTimeStamp(0.7042548384464449);
    msg.setSource(28104U);
    msg.setSourceEntity(197U);
    msg.setDestination(25286U);
    msg.setDestinationEntity(3U);
    msg.id.assign("GAXTOEIBHRGAFTGCFMYRBNXUTWNKZRBASDDSTUMQQJNFAFSHINWKBDVERECVHURQLQGRMUCUMIKWANKLCBYYXAVUCOZIV");

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
    msg.setTimeStamp(0.9707964081142331);
    msg.setSource(6515U);
    msg.setSourceEntity(72U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(246U);
    msg.id.assign("JOBKXOSYLDNYNCSFAHFIZZAERKFVFRTYUHGTDUANTGTKUVXFDWMUYQHPJCJRQEUOTMSGDNRWUAJCDLPNPIORWBOXBCNLIRSRQYISREJGAFAXELMZSPTQKWSYXZYKBMGDDHSPWBVOTUEDUOBCIYPZEVCNEMBAGFXKRLVWBSIPCAKNTXDPWMUVEZQVMHJXVULJIJWFGLQNTKXLHRZJSGVQGHGMCLOZBAYQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DRVFTDXQISMZGRZKHZJTJJPQHMGSZFOXBTHMPEBBWJSLKJAGPHOHYEZTZAVXSKTRNVWUAJIXLLXTPCAZMILGQILDEBBNQWNOMXIHWESLJCFCKJAWMUWNLBHUGRNFYUVOOIZAQEBXFFQRYULAFYOUFUKPXNPPIMVIDDNJKQQCJGFPLRRHLCXCWMDMABEEXRTHCTVYK");
    tmp_msg_0.feature_type = 159U;
    tmp_msg_0.rgb_red = 103U;
    tmp_msg_0.rgb_green = 223U;
    tmp_msg_0.rgb_blue = 45U;
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
    msg.setTimeStamp(0.2526948082205095);
    msg.setSource(16764U);
    msg.setSourceEntity(123U);
    msg.setDestination(49059U);
    msg.setDestinationEntity(31U);
    msg.id.assign("ABOTFXWZSDAWTAGJKPPNKYYXLQRXTHJEHTYRINULFPDIDINIDSXZYZQMPBZLFDSECJXVBTRMSVMB");
    msg.feature_type = 155U;
    msg.rgb_red = 80U;
    msg.rgb_green = 176U;
    msg.rgb_blue = 189U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.05050858425250382;
    tmp_msg_0.lon = 0.3267759758438644;
    tmp_msg_0.alt = 0.05029723867457603;
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
    msg.setTimeStamp(0.43423483674223884);
    msg.setSource(47543U);
    msg.setSourceEntity(179U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(187U);
    msg.id.assign("FAHUNISSRBEEMKBVERUTTJYGSHLCQIQUMQHLFOHEJDAENDSJLNYAJXVWCAKXFWRJHPLKXDFQSYBRLOHEVXSPDYVCRCMLQKMGTXCVFZFGNURJNWUUOWGPTOULDDPYCFZFABZZU");
    msg.feature_type = 87U;
    msg.rgb_red = 240U;
    msg.rgb_green = 9U;
    msg.rgb_blue = 167U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.20603015005586112;
    tmp_msg_0.lon = 0.6284700009634608;
    tmp_msg_0.alt = 0.6505328018648104;
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
    msg.setTimeStamp(0.5125891569807114);
    msg.setSource(35651U);
    msg.setSourceEntity(165U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(176U);
    msg.id.assign("DFQIHQVVMISADOVSCRNFJJRKWKGHFECKIDYNXHEGZZYNXXALXJLZPNUNIVCQOJMYLTIDWMLZYHVAJADWEWGPFTQCPURURBMPKHFXLRQSGKXCOOYHHZVJHSOSOUABJWSMGIDEFCMYROLUG");
    msg.feature_type = 130U;
    msg.rgb_red = 65U;
    msg.rgb_green = 64U;
    msg.rgb_blue = 73U;

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
    msg.setTimeStamp(0.17462589989291566);
    msg.setSource(49452U);
    msg.setSourceEntity(186U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.6021997444589707;
    msg.lon = 0.5243096653456119;
    msg.alt = 0.1952588750234937;

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
    msg.setTimeStamp(0.031049803739947035);
    msg.setSource(11053U);
    msg.setSourceEntity(237U);
    msg.setDestination(26294U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.7276337256566262;
    msg.lon = 0.435989565131363;
    msg.alt = 0.276354854274511;

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
    msg.setTimeStamp(0.6209382733551136);
    msg.setSource(35772U);
    msg.setSourceEntity(150U);
    msg.setDestination(62758U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.2568617417097212;
    msg.lon = 0.5720854035594797;
    msg.alt = 0.4960598673411032;

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
    msg.setTimeStamp(0.4841324050856798);
    msg.setSource(46396U);
    msg.setSourceEntity(207U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(224U);
    msg.type = 36U;
    msg.id.assign("OKVSEFGSZRFBRWKAZEJ");
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 3U;
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
    msg.setTimeStamp(0.21983667361451842);
    msg.setSource(29672U);
    msg.setSourceEntity(132U);
    msg.setDestination(24380U);
    msg.setDestinationEntity(152U);
    msg.type = 28U;
    msg.id.assign("BKPTAYKDXRHDYNKAGSBCDHDMJXRGGVOHFZULEOHDPLRLYYYUMKGJQTZSPBUBNEFFXHNWVWVFZRTAFAXGUZFHXQNPEUYTOPIPBOTKKCWZAJVHFCZMRSOEFIRWQDRDSGVOVQN");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 235U;
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
    msg.setTimeStamp(0.9152055355322987);
    msg.setSource(6248U);
    msg.setSourceEntity(146U);
    msg.setDestination(14184U);
    msg.setDestinationEntity(161U);
    msg.type = 142U;
    msg.id.assign("YUGKBFRHVFAQTNSZLEXDBETIAUFLOPFBDDXBCECTZCWHXIAEF");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.013624505950533883;
    tmp_msg_0.lon = 0.017799347800520393;
    tmp_msg_0.height = 0.9020734220910964;
    tmp_msg_0.x = 0.7091283702396696;
    tmp_msg_0.y = 0.6082533154235774;
    tmp_msg_0.z = 0.4776574811310744;
    tmp_msg_0.phi = 0.992368165531217;
    tmp_msg_0.theta = 0.2494154824781346;
    tmp_msg_0.psi = 0.4159153888416611;
    tmp_msg_0.u = 0.43391823929690054;
    tmp_msg_0.v = 0.8218236531877595;
    tmp_msg_0.w = 0.9305875484581689;
    tmp_msg_0.vx = 0.2942777504431515;
    tmp_msg_0.vy = 0.33907390744624155;
    tmp_msg_0.vz = 0.26039462997986973;
    tmp_msg_0.p = 0.8805481531220112;
    tmp_msg_0.q = 0.9601167243258364;
    tmp_msg_0.r = 0.836561370261599;
    tmp_msg_0.depth = 0.924714122215399;
    tmp_msg_0.alt = 0.4370021963673205;
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
    msg.setTimeStamp(0.001083554900271566);
    msg.setSource(2339U);
    msg.setSourceEntity(153U);
    msg.setDestination(55885U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("LAZTLJXZBDOJ");

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
    msg.setTimeStamp(0.6810908043663693);
    msg.setSource(24664U);
    msg.setSourceEntity(59U);
    msg.setDestination(26514U);
    msg.setDestinationEntity(146U);
    msg.localname.assign("FFLNUPMICJLOJENKTG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OERLOJLLOXJXRAETXQFSIWVVQAPSNOWRKTEKLZQAJOUIOZCGNMRPABZIJFMDZGYYIYNCSPIMHJCJCURATAWMQHQYUIDSXNUQFZGTYECZBNAEBZHLEVFFHVKRSRHXODLUSLACIMGFNKMDFPABOTEGJJSJP");
    tmp_msg_0.sys_type = 74U;
    tmp_msg_0.owner = 7942U;
    tmp_msg_0.lat = 0.380799988030584;
    tmp_msg_0.lon = 0.6198175496943623;
    tmp_msg_0.height = 0.44379669119003795;
    tmp_msg_0.services.assign("FOTQEFOCLVFGHG");
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
    msg.setTimeStamp(0.624796291527938);
    msg.setSource(5189U);
    msg.setSourceEntity(155U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(90U);
    msg.localname.assign("IPHIIMADLKMWSTCHLGGAHEQSHVTUWBRUFDBRPJYPVZKPFTVOOARQPEXGBNKJWOQVZQNVSSOEPYLWBSKFCRBSZLYCVJXCDSNTGTEKJXICMGIISEVAAXORKDECNBNPDLBQLIDLDUPGKZTWZDDNLMMPRYOBTRUOYMJLUXMAXNQYFCBFFWI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YMASPXHPFQLLDKTGPWLTGULCWPZRL");
    tmp_msg_0.sys_type = 138U;
    tmp_msg_0.owner = 28392U;
    tmp_msg_0.lat = 0.5363875081339816;
    tmp_msg_0.lon = 0.14210361088464074;
    tmp_msg_0.height = 0.384677581587754;
    tmp_msg_0.services.assign("JELDAQFMGIVPWGQURPCZZEKEPOSVCFCOPUYFWLECPTBTVEGVIXBPMXUOALDVKUZRXHODMXGINHCJMJTNRIATSNRHBBUHSARXVMITAEFPOOVZAQMNGPISLFKWDHJRTWSUHHBSCNMSQJSTTJUBYZKFWXVAXWRMODDCFHBKSYNJLVGKEWQXILKMQYJFBNDGVQEKYXTYSOANRCDYWPMLZZQKUWDFHJULCDNXYTEGZNZHQIRIARYEBBLKOJLYGOUZ");
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
    msg.setTimeStamp(0.029923759810195127);
    msg.setSource(36339U);
    msg.setSourceEntity(149U);
    msg.setDestination(37921U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("PNXEBWCGVCLMHUGHYBOAKPFIEDQJRJUVATKABDENKS");
    msg.predicate.assign("PBGZPAQSICUZQROYRSDHJPWKRWHQCLJDBMSJMTPKOXSLKKUFLUNFHXKDGOXWOSLDVDLBNHWPLUTVMSFNGQJ");
    msg.attributes.assign("TYGSKFRJQRAETBIFKMCIEIHKTYIOTOFQAXZOSDAUFXDVBMMZRPWBYLUPZMIXGTNYJAJOGMYHMHZCSFHKHJSKCSFGAKLODBLYIUQGCTLJODNUUPHEBAQQZEAQLGHPCFBCAKCZPIVNBNJUFVCXKRLSJORDHXSELRNVVQPWNWGXTXWZXEXJKMUYJTIZVVAINKEMDWNVWRHUPGDEBQVESEDXCCPULRRYJVNMABQWPOFOT");

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
    msg.setTimeStamp(0.2534794476493165);
    msg.setSource(9052U);
    msg.setSourceEntity(196U);
    msg.setDestination(33408U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("JRLVBHCIJXFZPOZFVPBIMWTWYSAEFTJUMBDTHTGXDEVKZFHIANJKPICUWFHYCDAUQUWFQRBCGAMTVCQVBWQFIYSADNCYHRQCYLTWVUXLLLDTCFAWJPORBAVOTLMSDCVEXNENEZOGNQSYHSMBJMHZPFKREOOOJRELSHKOFLHMXIKBGSUENIKIZPR");
    msg.predicate.assign("GJXTLULNKLPIQYHCCLOZFDSZWZNEHMPWVQVOPDQYYZVMSKIQKBETIORUIRAOOQSKJTPFMNTPPCBTXNHFFUUHDLXEONCUKUSHJVGQZYZWYTZHCFNJQPPSJQHICAMHNSCACBWWKPYRWQ");
    msg.attributes.assign("JHCZOGGEWJNNXRIQQCGTJYXDIJESFVORGVNGZQXVOFIHWCPTUWXEHHILTMJPBAKZPDQVYEXFXHFFDSYSXSHJHWUVVBDMZPKLCCUVLJBJBABRRUCAKPPTRLUYOVRAIBXLEGANORQOKQKIHE");

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
    msg.setTimeStamp(0.728310134897976);
    msg.setSource(35909U);
    msg.setSourceEntity(145U);
    msg.setDestination(3774U);
    msg.setDestinationEntity(193U);
    msg.timeline.assign("KZEMKZCITDEVZMNWQDGSIBXIUOVHXRIMXODGTGKBXKVVDOTZIUVMQQYVVUKYHYXNSHFHOWKBIABLQUMXPTEAONCLSQVHTCTXYGYCYUAEBNLFMDFNVJIHULXJGYWGLSBGDQIBXWMCOHJKTBFJHPKMKRCSAWAGMEPOLJLEEFPZWZFVZQUHQPGDUREJEJKJTALRTAPASYTPRNFQBFHDLZDASINSWWFQGOMSPRRBI");
    msg.predicate.assign("ZTOATMLDLDWXPDAIGKRXAVKGZYEBRNQJMZJTHIIYCRSXTESJCDXBRGHTXNOEMJPEWJRWBLVNWFNBQPSWZOOHQYYHSCMXRAUGVLIPKLMWKVUSSOEXPHLXSOMPMVLCCZYDFEGURSPFJURQDCFAFMIQWXIXNABUAWTFVYEGTIEHVFV");
    msg.attributes.assign("AHXJMGPDBOZGTPBCGXRFNVCPNOYCBIFANVZTIMJLULPVQBFQOKVIIURYVJTEDPDSVVHAECREWSYLUHNYHCKOKDYHQAUKXFVTGGMNAPYPSZRIOCOTVTAFBGXTKKOFGPMQWXMERSNICNWOSCRSEELYYJMCMJDIBWEQHLGDSFOVZZRB");

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
    msg.setTimeStamp(0.8267246125113459);
    msg.setSource(63923U);
    msg.setSourceEntity(243U);
    msg.setDestination(45497U);
    msg.setDestinationEntity(131U);
    msg.command = 125U;
    msg.goal_id.assign("OVTETUUPNFJJBJVZOQUJQGWQHUJKXVZCXGPPZMSCOOQAWESMTLCMWSFLZPKESKSYSDAKHDIEIJQWKAPSELDDYSZTFIAAYRHAFVPFFZDLKAPVVKCDDATHBNTULEQKWMFWQDLLOOMLHCYBPCSRCV");
    msg.goal_xml.assign("KYEKTYWPAWLPSSLHQYZOZNDIDCXPGZDJOGKFNUTGVHAZUFJZAGQCLKTEBEUBNRJTXEIGFGVOOWQXQLXFEBQNCOPNGAURSUMYILTIKNUHPDZVWXTMQHXSIYCIOAAMBSWNADCTVFMKBMGIJSPHKITBVUQDCHTYRFGWOHIWQMPVZUHTPKEZRBWDQJQEJFKYHFYJRCRFAMBOXRZYXCCNZALPODRBJIELVWVXRCLPOJVUNEEKWXNSGS");

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
    msg.setTimeStamp(0.40328408002380933);
    msg.setSource(28743U);
    msg.setSourceEntity(81U);
    msg.setDestination(56474U);
    msg.setDestinationEntity(108U);
    msg.command = 74U;
    msg.goal_id.assign("WKMOCYEBYRWPTEBIJBRCKRXFHSMYYINNQNAHSQSQARCZAFZPHPSXI");
    msg.goal_xml.assign("LKHLFUFHIHTVADQIAKMNZSVMTTNKTKBKTKJIYZUSPMDCNDDVUWIXYGRYJXXLMCNUTGOKJOJWFYKQQVERSEDZGONPCFSBKQJWMYDQXXOYAUZHDGZCAWROUIBXTFUJDTDSEEZPIIZSAMIBWTFYSVGCYEKOAAENCUSSRRHZVQPMWLPBXEOUHANZHRUBRFN");

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
    msg.setTimeStamp(0.9185705328287862);
    msg.setSource(21374U);
    msg.setSourceEntity(127U);
    msg.setDestination(27790U);
    msg.setDestinationEntity(155U);
    msg.command = 172U;
    msg.goal_id.assign("CRJBHRARKUQSLMLNXJTWVUSNRTFDXATPLCQAMJOIZUVISWCOOUJTKSHPFHIOESKHKGBPXYTATSDERKHRDPTPJSBBFXNBJTOEIINJEHWZYWRWLDXCLWEFKQICDBHBQJCDIXZYVVFUIEGJMSHWTXANMOOVTGUPKOFPQMYGQYZVZVPRFWHVCAUHVLPQJMRMGEYNDAAFGLBOXUGYYGRKBKLNCPXGIYWEMLAQ");
    msg.goal_xml.assign("WXSMUCFDUWOPOVURSSDWTKMNGIVKWNSIBYMLJTLVHVXKFMVGGJSRTOOCCPSJZMSTRNEYADWTHAOBCTLQELEAWPLRHBKWDMDOQDXBAUQQHZERGZNECKIFYLFVEXNIIWEVYKYQLCIATUDADCHRBFJZAFCINGBLSRPIIUTYWLJBENTBPRZXGNPMOAVMXDQM");

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
    msg.setTimeStamp(0.12403381182384654);
    msg.setSource(22485U);
    msg.setSourceEntity(150U);
    msg.setDestination(40347U);
    msg.setDestinationEntity(118U);
    msg.id = 118U;
    msg.width = 44442U;
    msg.height = 35949U;
    msg.widthstep = 47982U;
    msg.channels = 128U;
    msg.depth = 179U;
    msg.finaldata = 151U;
    const char tmp_msg_0[] = {-14, 86, 54, 69, 95, -47, -68, -4, -102, -86, 48, 108, 86, -101, 87, -48, 26, 16, -73, -126, -51, -14, -96, -39, -71, 35, 89, 94, -1, -55, 57, -19, 95, 39, 70, 69, -110, -71, 107, -69, -115, -13, 101, -76, 37, -16, 40, -18, 78, 39, 117, 2, 54, -70, -22, 118, 73, 126, 123, -41, -35, 83, -5, 43, 53, 37, 23, -77, -8, -25, -36, 123, -37, 69, 10, 11, 65, -108, 36, -38, -106, -47, -65, -24, -110, 113, 110, 82, 14, 49, 71, 7, 67, 72, -35, -45, 54, 82, -67, -47, 32, 103, -57, 124, -120, 101, 97, 68, 16, 123, -100, 123, -32, -9, 41, -91, 126, 80, 62, 38, -55, 59, 21, -18, -22, 44, -68, -5, -60, -77, -15, -115, -54, 29, 121, 5, -121, 60, -7, 108, -121, -37, -56, 90, 86, 44, -62, 66, 122, 58, -83, 42, -35, 112, -84, 52, -18, -105, -98, 119, 85, 46, 82, -68, -93, -96, -57, -6, -81, 116, 43, -16, 118, 71, 13, 103, 62, -81, -119, 121, 89, 102, -35, 66, 21, -13, -105, 39, -113, 0, 27, 105, 5, 114, -97, -117, -10, -111, 12, 52, -9, -65, -40, -47, -18, 106, 13, 67, 27, -107, 81, 115, -85, 69, 49, 100, 59, -105, -69, 97, 45, 3, -20, 51, 23, -74, -98, 0, -84, 41, -47, -11, -62, -125, -64, -19};
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
    msg.setTimeStamp(0.24339003364301526);
    msg.setSource(825U);
    msg.setSourceEntity(99U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(242U);
    msg.id = 57U;
    msg.width = 16751U;
    msg.height = 40909U;
    msg.widthstep = 39874U;
    msg.channels = 241U;
    msg.depth = 139U;
    msg.finaldata = 55U;
    const char tmp_msg_0[] = {-56, 90, 52, -113, -125, -38, -16, 89, -58, 17, -68, 33, 123, -3, -59, -21, 87, -108, 71, 36, -56, 110, 73, -92, 51, 91, -90, 115, 117, -60, 122, 62, 110, 25, -27, 5, 78, -42, -7, -124, 86, 76, -83, 98, 99, -44, -56, -49, 47, -36, 52, 72, -30, 87, 124, 99, -113, -20, -19, 105, -48, -37, -34, -81, 7, -127, -20, -89, 58, 29, 0, 101, -16, 97, -20, -125, -46, -26, -66, -20, 104, -104, -19, 24, 46, 122, -35, -20, 54, -35, 41, -51, 113, -103, -31, 101, -7, 38, 48, -112, -3, 52, -93, 108, -65, -100, -100, 12, -102, 13, 98, 16, -29, -87, -29, -103, 10, -76, -98, 59, 90, -28, 92, 0, 104, 64, 57, 73, -102, 97, -53, 112, 111, 125, 52, 12, 125, -21, -42, 60, 37, -112, 5, -54, 66, -15, 111, 38, -52, -61, 117, -5, -44, 119, 123, -79, 103, 10, -28, -81};
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
    msg.setTimeStamp(0.2872096926290767);
    msg.setSource(8351U);
    msg.setSourceEntity(74U);
    msg.setDestination(1712U);
    msg.setDestinationEntity(112U);
    msg.id = 13U;
    msg.width = 20725U;
    msg.height = 18312U;
    msg.widthstep = 65230U;
    msg.channels = 49U;
    msg.depth = 106U;
    msg.finaldata = 63U;
    const char tmp_msg_0[] = {126, -92, -115, 97, -72, -22, 25, 104, 49, 19, 117, 38, -93, 55, -14, 29, 114, 27, 100, -24, -36, 96, 0, 45, 88, -1, 86, 61, 11, 119, 112, -43, 48, -108, -94, -32, -29, -97, 72, 89, 78, 76, -66, 71, -8, 49, -124, 65, 106, 97, -102, -9, -92, -12, 120, 69, -9, 26, 0, 73, -34, 100, -107, -125, -4, -16, -128, 117, 30, 80, 97, 28, -45, 118, -78, -30, -90, 124, 81, -37, -117, 64, 1, 46, 116, -90, -49, -118, -42, -65, -82, 104, 23, -5, 39, -99, 53, -9, 122, 70, 33, -43, -87, 5, 28, -100, -96, -70, 94, -76, -60, -106, -54, -42, 75, 24, 123, -88, 67, -12, 16, -105, 60, 3, -27, -23, -34, 24, 15, -70, 100, 123, -88, -116, 16, -37, -72, 38, 10, 115, -127, 88, -119, -82, -110, 89, 33, -97};
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
    msg.setTimeStamp(0.31285410903512567);
    msg.setSource(40588U);
    msg.setSourceEntity(220U);
    msg.setDestination(18875U);
    msg.setDestinationEntity(51U);
    msg.width = 52856U;
    msg.height = 41232U;
    msg.channels = 251U;
    msg.depth = 103U;
    const char tmp_msg_0[] = {-74, -55, 97, -47, 31, -78, -95, 105, 77, -69, -43, -89, 78, -47, 14, 40, -57, 7, 111, 104, -45, -81, 78, 22, 120, -105, 71, 115, -25, -11, 43, 35, 123, -37, -51, -78, 23, 48, 24, 107, -104, -53, 18, 63, 10, 43, -104, 71, -96, -45, 83, 87, -31, -48, 58, 57, -118, -10, -8, -12, 73, 44, 36, -34, -98, -127, 12, 114, 119, -63, -58, -81, 75, -3, 55, -74, -101, 50, -111, -53, -34, 40, -38, 12, 9, -50, -99, 44, 20, -93, 78, -118, 124, 17, 19, 79, 47, 27, -51, 50, 124, 31, 3, 31, -85, 81, 76, 20, -25, 100, -16, -44, -95, -74, -86, 94, 98, -106, -39, 39, -1, 88, 32, -36, 107, -11, -85, -11, 120, -25, -86, -46, 114, 4, 64, 37, 82, 14, 101, -109, -33, -111, 63, 82, -105, 41, 28, 5, -38, -68, -17, -50, 109, -95, -87, -74, -104, 0, -73, -61, 69, -31, 98, -3, 121, 78, -93, 4, 32, 61, 90, -108, 113, -95, 61, 5, -37, -80, -49, 85, 107, 68, -51, -48, 24, -2, 17, 112, 4, 123, 113, 3, -79, 5, -111, -29};
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
    msg.setTimeStamp(0.09256496041515383);
    msg.setSource(40322U);
    msg.setSourceEntity(165U);
    msg.setDestination(45694U);
    msg.setDestinationEntity(231U);
    msg.width = 6110U;
    msg.height = 33802U;
    msg.channels = 93U;
    msg.depth = 217U;
    const char tmp_msg_0[] = {-31, -95, 107, 10, -85, 1, -31, 4, -16, -10, 9, 124, 8, -42, 73, -62, -64, -14, -62, 35, -59, 76, -49, -49, 75, -80, -106, 11, -105, 47, -55, 80, -31, 116, -13, 99, 38};
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
    msg.setTimeStamp(0.426822631582937);
    msg.setSource(17880U);
    msg.setSourceEntity(195U);
    msg.setDestination(60232U);
    msg.setDestinationEntity(181U);
    msg.width = 38363U;
    msg.height = 17609U;
    msg.channels = 110U;
    msg.depth = 81U;
    const char tmp_msg_0[] = {73, 45, 12, 92, 110, -110, 36, 74, 108, 28, -30, 86, -2, -126, -74, -82, 37, 30, 13, -28, 29, 87, 10, -76, 4, 7, -57, -79, 106, -28, 98, -39, 30, -67};
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
    msg.setTimeStamp(0.8453608694788627);
    msg.setSource(18817U);
    msg.setSourceEntity(251U);
    msg.setDestination(9832U);
    msg.setDestinationEntity(176U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {69, 67, -84, -71, -58, -38, 19, 53, -34, 69, 26, 90, -41, 83, 118, 118, -10, 9, 81, 103, -43, -43, 23, -13, -62, 112, -15, 11, -41, -74, -41, -126, -23, -73, -119, 118, 125, -40, -90, 61, -79, 122, -61, -87, -80, 68};
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
    msg.setTimeStamp(0.8398198957918022);
    msg.setSource(35261U);
    msg.setSourceEntity(211U);
    msg.setDestination(25358U);
    msg.setDestinationEntity(123U);
    msg.frameid = 31U;
    const char tmp_msg_0[] = {43, -100, 47, 107, 10, -5, -24, 70, -6, -84, -22, 75, -28, 97, -97, 3, -62, 112, 46, 44, -80, 100, -30, 4, -28, -114, -119, 47, -52, -14, -127, 5, -124, 91, -113, -83, -71, -8, 55, -83, -8, 50, 18, -96, -91, -69, 7, -19, 98, 20, -105, -109, -17, 94, 86, -34, -127, 109, 1, 41, 117, -32, -117, -26, -70, -4, -104, -24, 2, 121, -60, 115, 108, -8, -57, -116, -6, -56, -28, -30, 29, -38, 60, 110, -78, -76, 65, -49, 22, 67, -18, -88, 77, -10, 79, -125, -17, -13, 117, -37, -122, -25, -90, -73, -53, 21, 115, 120, -30, -15, 92, -29, -7, -112, 120, -41, -37, 117, 54, -100, 64, 68, -107, 56, -55, -20, -126, -56, 98, 20, -83, 36, 113, -63, 118, -36, 87, -104, -91, 36, -103, 119, 47, 121, 37, -45, 90, -92, -116, 84, 5, 109, 18, -18, -100, -80, 59, -113, -31, 14, -9, -31, 121, 57, -111};
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
    msg.setTimeStamp(0.9653643300268153);
    msg.setSource(42938U);
    msg.setSourceEntity(239U);
    msg.setDestination(9033U);
    msg.setDestinationEntity(13U);
    msg.frameid = 204U;
    const char tmp_msg_0[] = {20, 21, -66, 99, -75, 83, 51, 38, -116, -54, 78, -54, 36, -61, 27, 112, -22, -37, -41, -58, 86, -42, -89, -33, -22, -9, 62, 54, -105, 78, 1, 66, 30, 51, -22, -30, -104, 20, 103, 80, 31, -59, 15, 83, -122, -90, 97, 86, -37, -30, 10, -98, 39, -64, 120, 78, -11, 65, 18, 14, 96, 72, 34, 8, -29, 75, -18, 86, -94, -64, 101, 109, -52, -128, -71, 89, 100, -124, -126, 112, -47, 94, 116, -69, -79, -31, -91, 75, 89, -73, 19, -118, 120, -62, 37, 12, -74, -16, -84, 56, -16, -87, 101, 24, 12, 72, 10, -22, -69, -13, 55, -75, 64, 7, -113, 0, 97, -34, 50, -49, -55, 106, -57, 88, -41, -62, 75, -1, -114, -36, -46, -94, 36, -128, -61, 65, 38, 16, 28, -78, -77, 46, 12, 60, 1, 42, 24, -85, 21, -35, -66, 23, 116, -54, 114, -10, -19, 31, 37, 36, 111, 44, -22, -20, -98, -96, 18, -70, 103, -117, -20, 5, -59, 121, -59, -107, -118, 65, -38, -32, -11, -127, -96, -81, 62, -91, 114, -31, 125, 21, -6, -61, -65, 85, 37, 74, 60, -118, -102, 66, -4, 110, -27, 93, 108, 91, 97, 25, 31, -93, 87, 81, -21, -37, 116, 33, 102, -14};
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
    msg.setTimeStamp(0.6245503300689483);
    msg.setSource(48765U);
    msg.setSourceEntity(187U);
    msg.setDestination(32744U);
    msg.setDestinationEntity(117U);
    msg.fps = 210U;
    msg.quality = 44U;
    msg.reps = 209U;
    msg.tsize = 122U;

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
    msg.setTimeStamp(0.6542441361379628);
    msg.setSource(12322U);
    msg.setSourceEntity(94U);
    msg.setDestination(43969U);
    msg.setDestinationEntity(67U);
    msg.fps = 67U;
    msg.quality = 2U;
    msg.reps = 152U;
    msg.tsize = 5U;

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
    msg.setTimeStamp(0.28900027607124246);
    msg.setSource(4561U);
    msg.setSourceEntity(45U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(200U);
    msg.fps = 47U;
    msg.quality = 218U;
    msg.reps = 19U;
    msg.tsize = 165U;

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
    msg.setTimeStamp(0.528231528248769);
    msg.setSource(7295U);
    msg.setSourceEntity(250U);
    msg.setDestination(31662U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.14723955713358983;
    msg.lon = 0.6082518701353489;
    msg.depth = 136U;
    msg.speed = 0.19052556370884433;
    msg.psi = 0.07973685668947927;

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
    msg.setTimeStamp(0.44364856865830726);
    msg.setSource(57331U);
    msg.setSourceEntity(54U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.762577398972053;
    msg.lon = 0.17058226599158632;
    msg.depth = 116U;
    msg.speed = 0.6881819555997489;
    msg.psi = 0.24218317168509196;

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
    msg.setTimeStamp(0.7861410495859301);
    msg.setSource(27067U);
    msg.setSourceEntity(247U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.11454240909968849;
    msg.lon = 0.9955366251861746;
    msg.depth = 96U;
    msg.speed = 0.1962290864049615;
    msg.psi = 0.11660631542146793;

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
    msg.setTimeStamp(0.7883433340107467);
    msg.setSource(8945U);
    msg.setSourceEntity(213U);
    msg.setDestination(64505U);
    msg.setDestinationEntity(217U);
    msg.label.assign("NKQGVUHWIWHNITWQKMESKLKPPRFYWYZSRJSPHALMUZRRUDVNFJPEESUXOJMDHGMBTZWRMGIYXKLKDGRQUOJP");
    msg.lat = 0.5320100509551046;
    msg.lon = 0.6452480950973919;
    msg.z = 0.979213537035811;
    msg.z_units = 49U;
    msg.cog = 0.32992990522164234;
    msg.sog = 0.9471621682145437;

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
    msg.setTimeStamp(0.6107453089617416);
    msg.setSource(29631U);
    msg.setSourceEntity(115U);
    msg.setDestination(49603U);
    msg.setDestinationEntity(76U);
    msg.label.assign("IYFTGDVHSDIEOVRGIUKWNSIBIIOWYDJELGXEZJCXEQVLPHCPKRTAVVQBDQFNRGXCBRKITDHPHAVJDDFWZMOFZARORSZEWEGLZPZBKHAXUCMKCGOGVUSZVBTZPLFFDQSARYIWSJYPTKYHASVEMNFJSR");
    msg.lat = 0.3596419802945787;
    msg.lon = 0.7902444825255506;
    msg.z = 0.2924798009232611;
    msg.z_units = 9U;
    msg.cog = 0.9471023520626448;
    msg.sog = 0.8294300882409166;

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
    msg.setTimeStamp(0.6657430399763149);
    msg.setSource(54766U);
    msg.setSourceEntity(179U);
    msg.setDestination(352U);
    msg.setDestinationEntity(126U);
    msg.label.assign("CYFGWDPAALNVDALQUMSSQTBUPWXQKYXDHHCERRQUGWIWJHFYGHVJPLWBUIGGISZFCVDBJVXZNVFFNMMEUPCKJAPEOVRXHZNCXLSFQIEVSOCFLRNOKOYKTRZBNWYOYPCLBXTONGTZKSWILNG");
    msg.lat = 0.6737734909480068;
    msg.lon = 0.36509373869026496;
    msg.z = 0.285279327508679;
    msg.z_units = 48U;
    msg.cog = 0.861805217396758;
    msg.sog = 0.31166373750158594;

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
    msg.setTimeStamp(0.20081594618874843);
    msg.setSource(42809U);
    msg.setSourceEntity(65U);
    msg.setDestination(50186U);
    msg.setDestinationEntity(154U);
    msg.name.assign("TAQIKEHNYEB");
    msg.value.assign("VOSYWGQVGVLBQTCBCBADOMMZHFWMPEJTYFGDQDVRSVSMKNULJQJZDRFQLBOTYUOSZDUERENMNQDWOVEDWRUHWQNPYCSICRHDCVHWSTGYIEIGDGAOSJR");

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
    msg.setTimeStamp(0.7928529138107895);
    msg.setSource(30419U);
    msg.setSourceEntity(148U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(78U);
    msg.name.assign("VTTFJDEKPCDXLWCCIWODWMEPNKLWBITKQSOGAHGZNUWMXMFCLGHEURNVQMIXQVSHDLEIAMQTSYETEKAJIXXUZXMCBHGYBRGIQYPATOYYOYLQOZYGOMZULUVBLHFTSQSOHNDNCLFEXJFVKDZAWWCQMURPMBUTTBZQGWPERISLKD");
    msg.value.assign("DNJFHEYKRCJHFVZOOQJZKMBFUYFOAMCVLIGHTSCYLQFXYPFIKGBSBJADVAOWJKWDAPTOVUUOTYIQLRSANDDXXASMTNCMPLFWEFPYTQBJFGRMPYPDUPADOBPLZMCENOIUHXLEXLSGIYCIBRZTQHTAWZQGXIJIXES");

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
    msg.setTimeStamp(0.1991498004586274);
    msg.setSource(55194U);
    msg.setSourceEntity(181U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(158U);
    msg.name.assign("HPWXCAFWCYPIIFEHOEIPHVBPXQHUFBMZTJPBMPNENJQOSSQSXZJINATUDRKLLKFXOGOAYZGHUZULVIEYYGWUAUDCORHBWJDBZWQCTGSCNVHBNFINZLOKUSCJPFLZEKEBIFQVKRGDETVMGTRKTHUXLPWJRJRMOEKPHDKCTSDVIHWYXLQBFQZLVRRQDAANCZSXOSTLTCKWSNYO");
    msg.value.assign("WGULUACBWRFIAWXYXPALOURCYTJYQBEHTFJETPQJVAWHVUWBXVBYBJYLMEPCUUYLNNULRHFHPVGJMWSIZYZCAIGQGKUFQRUMQLOOSCSYDBHCKSGKSBDKXRCDVKNUDKGLMHKOIADEHPOSEPIQTGTWR");

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
    msg.setTimeStamp(0.8850862136434875);
    msg.setSource(39420U);
    msg.setSourceEntity(189U);
    msg.setDestination(56890U);
    msg.setDestinationEntity(246U);
    msg.name.assign("SQKPJCVXNJAZIXCNECCHQJOQYJSHCDMPQSNTTKWEJZOAYFXSFOVTWQFAGZXGORDUHULHMTFFYLBTIICQZATLWVKEZYRLSRJVTMZGMHUWNHLUFSOAUHNDRVUODWPWPZKCIPBREKQQMWUFBJCVOJMLZQ");

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
    msg.setTimeStamp(0.7100198775681275);
    msg.setSource(45446U);
    msg.setSourceEntity(109U);
    msg.setDestination(31854U);
    msg.setDestinationEntity(29U);
    msg.name.assign("RMGIUNNXKCIBQCZWIPLHAGQBQORREFENDQEWSWYSQHGMDUJUVYZMTUBBXFOLPGNRRJFKHZQLUEEOKJONFMCPHIHXOHSBLHRBXDCSZQVINQIXAIMSTEWZTFWJUINYPREOOLAZQCFNDAPRXCMGCCKJMLACPUHA");

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
    msg.setTimeStamp(0.9491455521530084);
    msg.setSource(25315U);
    msg.setSourceEntity(229U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(167U);
    msg.name.assign("QEQKIJWWMXVOJOPVHOOQTLCVRXTIMGSUKDQBHCPWQFQXDCYPFFSFUWPBPLYNYUHTZGXKBPQWASDNCIKRVZALIHJNOXYQTBRTAIHPAECLAPSFOVCKJOTYWOJFJMMXMGGRNDLLCEKGZTUYUEBRXBXDSMI");

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
    msg.setTimeStamp(0.10981822277331688);
    msg.setSource(15912U);
    msg.setSourceEntity(58U);
    msg.setDestination(29075U);
    msg.setDestinationEntity(41U);
    msg.name.assign("YRGJEAZENIYGGMRTRQJBKOMVUCWNMNMKMBSRXOXAHSVXCFRJEJZPZMSKFUMSFHWIJZLOYNRBYZTBXTTHIPUYREYWGSJIJXEWHGXBBRRNOODAVXLTIDAHLLICFDWDIELJSGQAIPLZHQMZCKIVNLEJFUDFGFQHNPPSDKOUAKPSPQNTQOYBZWQCMPADKFFQUSPYVWLFQUSGTHAXZCTCKEGXOLVINEXGETCNJOVYUAUUAVBKOB");
    msg.visibility.assign("GWSVETPSAEQTHLZNONKMPMUSHOAJORQRIEJUHEXNCCZGQSXIACVGWRRTJSSMKWECPBNLGZXIPANGVCZYAUTTFEDDHAVNTVKWEUFPSBUIRSIHOPBGGKOWLXZFFDNKDBYDLPVFHIYPYANDYXMKROKFKWPHDXIGIWRAUQNTXZMDQCWMUBKELQBXZAIUCMXOJBPIUBQCSTEXLQREBWCKOFHGJYZVVBLOYYZMQJTDHRLWFZJYQRJTNOJDF");
    msg.scope.assign("MJGMQJYMJY");

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
    msg.setTimeStamp(0.9993147356792543);
    msg.setSource(12871U);
    msg.setSourceEntity(67U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(30U);
    msg.name.assign("ZOFSJKGECBGADGLHWJOTZEWSCRVIESTYNVQMFRSGXBBLBBQQNPPYUZYGBVPD");
    msg.visibility.assign("MGZUZQLOBIHDAXHRBNWWCSSKGAYVRPYIKUTWOXNFBDGFKI");
    msg.scope.assign("YCEQJCLFILRXEKIHPULWCVTBPFAQRNSQOBYOOIEBBLHJIDYLXLSTQNGUTFPSFOVIVLCGKMRDOTWBMLXZUNUAIYGHVMQPQTKXZQBSWHBZHXAVYSEAKOPPJDGJUMJ");

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
    msg.setTimeStamp(0.7826491047960049);
    msg.setSource(59918U);
    msg.setSourceEntity(99U);
    msg.setDestination(34539U);
    msg.setDestinationEntity(39U);
    msg.name.assign("QQDALENTVEEOCHTUFYMOHAPOJUIYZBTDRLNXSQGVPGJSNJLUPLIDBFBTBFVZNLXXTKSWJCWTRFKZYIIAENQCZDERXVXCLKSPIFGUTNNMQIRCLPSZGKRROWKCNFGHIMXBHBWXDIGHSCFIPZQFBLHSOREZJAWAPMSLZYKWOHPSPMWOPFAEYCWVCUAAYVXDWVTCHSBBQDXBKUMXKKLEQUJRJGZDMINUUVRYTOHOJGVMW");
    msg.visibility.assign("ZNYACMFOAMQJPXXSTKKBLMKBDRZGPUQEGWDFA");
    msg.scope.assign("RIFTKPTVXXNZWWQCPTWYPFPAFLEQBBDYLLPGXYJNBUPWDUYDZTQOQCYXRUIXHGBJCEZVPMIKWORXOUZOLOKHBQRJDASADDVVRJGKMZKDVEXEFAFNKWZZQQWVSFJCRLFGJILMEKBCIAHTTMSOOBNQAYTMHEIABLYIRBJOXASTANZPBTSVHZPGJD");

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
    msg.setTimeStamp(0.4471241986048845);
    msg.setSource(62656U);
    msg.setSourceEntity(249U);
    msg.setDestination(46769U);
    msg.setDestinationEntity(89U);
    msg.name.assign("APBHEIGWOCLACRORUFXWWYDQHISOASYKNJENIJKGCNEVGGXFREAKMMYIWAQQKBCZUXTSNUISRKFVFLJHRREKIGWPHDPGSCXSSRQPBJTMHJZBMAPXIUQZATEYWZQBMCYXKNLENUNXCPROUHUYIZZMFJIZWVTUZPDTJMWWDTDHRJGLJHUFOLYVQOAAZHP");

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
    msg.setTimeStamp(0.6622989708246645);
    msg.setSource(2504U);
    msg.setSourceEntity(95U);
    msg.setDestination(13195U);
    msg.setDestinationEntity(184U);
    msg.name.assign("HYMMZJNPKKQAJHLDCEUDKWVZIIRGOQGWSNMXLLNICAHZNAADGFEVUBZHNHLPHSDYJKYSQIAEFXZPGBEVTYYIIPQ");

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
    msg.setTimeStamp(0.6719549582969658);
    msg.setSource(56953U);
    msg.setSourceEntity(146U);
    msg.setDestination(47682U);
    msg.setDestinationEntity(138U);
    msg.name.assign("VIZTGEFMHAHDJCGDGXIASPLXVTKKUAYSKQODMGPQNZOQMOYTNTSUQAELURDBHRFAXUOPSUWXXPEIMINWLYYVMDJKHWILPEELSKENSBLATXSOMSRYTBPHGNHJZQCXWUDMKCVTJDATZNCQBFZZWEGORCBHNROCPFYGEJFRVCJUJVWUGVMREIAHLZQVGHKXPCJVBQKIXNZMMBBFIIPOYRBQJWKXAZLHQDY");

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
    msg.setTimeStamp(0.3076264193862711);
    msg.setSource(52226U);
    msg.setSourceEntity(227U);
    msg.setDestination(8554U);
    msg.setDestinationEntity(123U);
    msg.name.assign("LZYIUQCAHIFOQKLDXQRHVCBPWTUEXBHFXEFNHPGSWCKBFLHUWTNUKSNJSFMMANNVXUXQRDZCTNQFKNPJCNO");

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
    msg.setTimeStamp(0.8290083233738961);
    msg.setSource(1426U);
    msg.setSourceEntity(92U);
    msg.setDestination(65492U);
    msg.setDestinationEntity(39U);
    msg.name.assign("FKITUMEISKFEWGUNTOLUXPKOSOGXTRXAKDIEFYGRIDWDDPECSLWVRLIMBYHLNQKYGNHPVTQHMCNLVZSPSZAITHWVXQRFAYCUDVPTJUPDWEXJOXZTZZCIWJJCZOVMRGPSWPDLZLJAHUWTAVUNRUGXYFSGSMXABDHIOFDEJKYZORFJFMNKBAQXQWKHKCCTSMQGKJVJQBPZQHMLGPRWOERBMHQIR");

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
    msg.setTimeStamp(0.30021329614136816);
    msg.setSource(17975U);
    msg.setSourceEntity(50U);
    msg.setDestination(23855U);
    msg.setDestinationEntity(162U);
    msg.name.assign("WUEDWIJXBGDEZQATSRWLNOOVTZUJEIYWPKEYGWKEHCOIUHBCLBOPDOHHJHTTLJDVSLBGKPGVMZBFNAQXEYUTDNMSOFQAZSLAWHTYBGOZZLIGQKGOJPIKFKYEUSWONUTYFPHSXTJKKKIHTRRLJKQMXSYVCXMFWGWXCNDZDQAUAYGXPURDP");

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
    msg.setTimeStamp(0.3196946428032481);
    msg.setSource(10776U);
    msg.setSourceEntity(175U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(246U);
    msg.timeout = 4155569747U;

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
    msg.setTimeStamp(0.6226984085342299);
    msg.setSource(9126U);
    msg.setSourceEntity(65U);
    msg.setDestination(49841U);
    msg.setDestinationEntity(108U);
    msg.timeout = 3767745412U;

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
    msg.setTimeStamp(0.6666693270012192);
    msg.setSource(5697U);
    msg.setSourceEntity(169U);
    msg.setDestination(6376U);
    msg.setDestinationEntity(40U);
    msg.timeout = 3634161056U;

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
    msg.setTimeStamp(0.1463030474918684);
    msg.setSource(63944U);
    msg.setSourceEntity(125U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(167U);
    msg.sessid = 994743556U;

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
    msg.setTimeStamp(0.2616994535414384);
    msg.setSource(61454U);
    msg.setSourceEntity(196U);
    msg.setDestination(33137U);
    msg.setDestinationEntity(184U);
    msg.sessid = 3932164127U;

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
    msg.setTimeStamp(0.46775117439501546);
    msg.setSource(28491U);
    msg.setSourceEntity(101U);
    msg.setDestination(54654U);
    msg.setDestinationEntity(193U);
    msg.sessid = 1022944396U;

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
    msg.setTimeStamp(0.2616421617517447);
    msg.setSource(19888U);
    msg.setSourceEntity(196U);
    msg.setDestination(28651U);
    msg.setDestinationEntity(87U);
    msg.sessid = 1136490827U;
    msg.messages.assign("RVHUXNGVIZFJDPCZNYALDFRSVQQFXMZJWKYYQJZPJQAGJHLJCUZEHGTCWTUEPMKYMGHYCFRREAWWMQERMBKLGNTUIYXDETJIQOHPCPEUMRVOYZADVRZPOYDSORCLXXNLBQNGTSDXJWKHSTKOXFLQQBVFEXASSAIPSYGZEWIKDNVFKXMIGIBMILUBOAMAANHBLNCVMHEWOLBFS");

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
    msg.setTimeStamp(0.12925927209803034);
    msg.setSource(50891U);
    msg.setSourceEntity(148U);
    msg.setDestination(6459U);
    msg.setDestinationEntity(122U);
    msg.sessid = 1535532575U;
    msg.messages.assign("IVTBTGKPHPLOZMIMBUEWJDKZADMQKGBIDDRCPZPGFLBXTKLHXBOKAAEPZXYCQZWKVTILTQFREXXUJXDVUOQEPLQUQCEUYOSEFWCGOHFGOOYTRXDXJUPMJSARAQTYLHHNHHZRKRFWCFRCIXRZYXGINADEVHAUHYMFFYSIMPEZIOILKLZVN");

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
    msg.setTimeStamp(0.3173377314505723);
    msg.setSource(8597U);
    msg.setSourceEntity(5U);
    msg.setDestination(38374U);
    msg.setDestinationEntity(169U);
    msg.sessid = 1773639586U;
    msg.messages.assign("KVZNIDATXLLOUQSQEUHLJBCMFROYRSXRJCMYXNCTPAVAFHEGEFNYVFYUGDBNWGDYSQPJTZHCUCVPGMNWADNWEDESPQSQSQJXWZJAJZUXAIFTSEOXBFBBJHSYGZMGWACQBIVWCDHRJUFHODICHPULAPXVIDKFVLNJRXBTSOMIYTMGNDGKOPZYDJWMUZHLQMKKQLYEMLTUIUTOWXRRRGAKLTONXEALVH");

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
    msg.setTimeStamp(0.19451457427058483);
    msg.setSource(13769U);
    msg.setSourceEntity(214U);
    msg.setDestination(43749U);
    msg.setDestinationEntity(242U);
    msg.sessid = 840235128U;

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
    msg.setTimeStamp(0.8248171525934826);
    msg.setSource(47368U);
    msg.setSourceEntity(212U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(92U);
    msg.sessid = 755822319U;

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
    msg.setTimeStamp(0.9377520190376135);
    msg.setSource(39372U);
    msg.setSourceEntity(143U);
    msg.setDestination(20967U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3231177794U;

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
    msg.setTimeStamp(0.09646140551193072);
    msg.setSource(27394U);
    msg.setSourceEntity(116U);
    msg.setDestination(34687U);
    msg.setDestinationEntity(99U);
    msg.sessid = 206975152U;
    msg.status = 140U;

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
    msg.setTimeStamp(0.8568157890671823);
    msg.setSource(5894U);
    msg.setSourceEntity(21U);
    msg.setDestination(11816U);
    msg.setDestinationEntity(64U);
    msg.sessid = 4162431536U;
    msg.status = 140U;

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
    msg.setTimeStamp(0.37204400924534176);
    msg.setSource(57691U);
    msg.setSourceEntity(38U);
    msg.setDestination(42219U);
    msg.setDestinationEntity(101U);
    msg.sessid = 1617074873U;
    msg.status = 121U;

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
