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
// IMC XML MD5: a67a1fa7e1c11ea6a3be0634d905c820                            *
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
    msg.setTimeStamp(0.6984126092561267);
    msg.setSource(53587U);
    msg.setSourceEntity(66U);
    msg.setDestination(11562U);
    msg.setDestinationEntity(115U);
    msg.state = 182U;
    msg.flags = 208U;
    msg.description.assign("ENNZWPBULALYJRVULNUXIBAMSLHFZMKJOBMST");

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
    msg.setTimeStamp(0.22367415033619176);
    msg.setSource(47192U);
    msg.setSourceEntity(112U);
    msg.setDestination(22366U);
    msg.setDestinationEntity(40U);
    msg.state = 161U;
    msg.flags = 156U;
    msg.description.assign("NIYIWRPTDXBSYXXISPUNCSJRGVKNBXQGJCVSGPOVTNVKBQCNXADEWTTAPECIMCYYJCVFGZBDTWLJXKNIKFQBDWVBLHFRPYFRDJNKULCDUVDVUXATXPRUEESIRATMEKDHQWYOOMUWWZZCZUOATUAEOFNHLMRJJKASRPUYRQOBL");

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
    msg.setTimeStamp(0.5702423392455986);
    msg.setSource(38518U);
    msg.setSourceEntity(221U);
    msg.setDestination(37952U);
    msg.setDestinationEntity(218U);
    msg.state = 37U;
    msg.flags = 14U;
    msg.description.assign("BTGMALMOHXQQTPWMOZVOPNFEKZVRMLHPUKHHBXBUDWJEALUGMXRCBGQNEUBSPTGBRLYDNESRFVKMBWVDOTVQGSRHZUFJHJZRDNSKNFAXGFXCJWPJBBIOSITNQFABODENREJIZRXCDC");

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
    msg.setTimeStamp(0.8307956506562002);
    msg.setSource(65407U);
    msg.setSourceEntity(64U);
    msg.setDestination(4697U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.10612862349796726);
    msg.setSource(26865U);
    msg.setSourceEntity(71U);
    msg.setDestination(7255U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.5118984464208046);
    msg.setSource(65090U);
    msg.setSourceEntity(99U);
    msg.setDestination(12652U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.599111594764063);
    msg.setSource(23580U);
    msg.setSourceEntity(183U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(226U);
    msg.id = 35U;
    msg.label.assign("CFYVSILTZXLZFHRPWAAPCYVSVRIDBPUXVKTNZEKIZHAGDIZQTGCOHXBYGNSDKXUDZOJVKBYTPZCKMQMZQERLUSZWQHTAVSUAMGCIAXEYSFQLKPLDHBMCJLZPCYBHBFXYGHNVNUREIJAVRPOKALJVEWEHRTQGAFUIHILMRKGNTWJBUCQLOADUPGVNNOMXPIFFSMGDYUJDWQYJKOPYTWXSTBFUGBFOJRCJHWSEBI");
    msg.component.assign("IKWLOKYSGWBZONLALKHKXOJVPZWXAWUVDYURSMDQNIPNAVWDJUHVIWYCDQCRAFLMLUKRNIPPXLGHIFGVUUAACEDEIGGRAXZCRU");
    msg.act_time = 39347U;
    msg.deact_time = 45183U;

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
    msg.setTimeStamp(0.924863080645515);
    msg.setSource(62139U);
    msg.setSourceEntity(7U);
    msg.setDestination(19926U);
    msg.setDestinationEntity(244U);
    msg.id = 7U;
    msg.label.assign("ONIPEUMVYBTMHMOIVWDZBSYUUMJBTKXKTIDNPKSJHJLZDCEEFFJESPZQKIDRAMUTBZIAFNYPXXDSWHZQOAODRPQVONGGXBQLDMZACUXOBIFHFBRQVLL");
    msg.component.assign("NPOTBNFSWZYJELADKQLBOLEWCJATMMPMSQRMUATEUZGHNHPIGDDVPFXCSDRBSHMWIKSXLIXYBOIOSVWXCVTBQUFNICUHFCZBDKJ");
    msg.act_time = 33091U;
    msg.deact_time = 65109U;

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
    msg.setTimeStamp(0.6583627462564927);
    msg.setSource(11670U);
    msg.setSourceEntity(11U);
    msg.setDestination(43889U);
    msg.setDestinationEntity(70U);
    msg.id = 183U;
    msg.label.assign("DTMPYTNXIYFRWYJCTLIISKLNTMXRGRB");
    msg.component.assign("QPIIFMCVAAMIHHSJYRSISFJXKCVZTRW");
    msg.act_time = 4212U;
    msg.deact_time = 22854U;

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
    msg.setTimeStamp(0.8907041599244521);
    msg.setSource(4685U);
    msg.setSourceEntity(6U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(108U);
    msg.id = 253U;

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
    msg.setTimeStamp(0.06412759126330203);
    msg.setSource(9204U);
    msg.setSourceEntity(55U);
    msg.setDestination(39611U);
    msg.setDestinationEntity(141U);
    msg.id = 75U;

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
    msg.setTimeStamp(0.2929841495040467);
    msg.setSource(26377U);
    msg.setSourceEntity(28U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(158U);
    msg.id = 5U;

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
    msg.setTimeStamp(0.5076868115589203);
    msg.setSource(60561U);
    msg.setSourceEntity(40U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(209U);
    msg.op = 120U;
    msg.list.assign("KVCLYDGPPRZXKEIJDVSWENBOQIOCWHXQMZLSDJNJLEXBUYNBTRTNLARAMDIZPMOCQNUBXXHEKMKLWUFEARUAORKPGRYWRJYVUBEBASJJDGGDBZAAZWGACSGBFKCSDQFTPF");

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
    msg.setTimeStamp(0.6187676639914359);
    msg.setSource(63695U);
    msg.setSourceEntity(135U);
    msg.setDestination(5475U);
    msg.setDestinationEntity(18U);
    msg.op = 50U;
    msg.list.assign("ZZLCDCGJLGAVBKAKREELMNHWPWPDCWARGVABVOGMYFTJAZYQCUXQEYQTYZWRONNMXNLOLMWHJRVPJLIIQBDUJNETFQQEFFPRHVRUOJJKMOIZYIDUMHICCZUZULMDTZRXBTKPATNXUWUPLKBOPEGDKFDHPRVIQPMEDJGVNSRSKBIXBZSTQPUTFNLFTKAFMWCNFBYHBICXXLKBXHMCVVKQHSVFXAWGUOOWJERTIA");

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
    msg.setTimeStamp(0.24259516723821217);
    msg.setSource(39808U);
    msg.setSourceEntity(130U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(185U);
    msg.op = 105U;
    msg.list.assign("DRUPOSJSIVZHEKFZGNOYLLYRJSYYVFMYMDTIHSIQHZKNJCQISNPPZQDCUYXLDFCLVLNGC");

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
    msg.setTimeStamp(0.21440836817648112);
    msg.setSource(64431U);
    msg.setSourceEntity(127U);
    msg.setDestination(38237U);
    msg.setDestinationEntity(124U);
    msg.value = 96U;

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
    msg.setTimeStamp(0.9531115618776409);
    msg.setSource(1789U);
    msg.setSourceEntity(85U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(186U);
    msg.value = 19U;

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
    msg.setTimeStamp(0.5505201677174568);
    msg.setSource(18335U);
    msg.setSourceEntity(91U);
    msg.setDestination(1913U);
    msg.setDestinationEntity(140U);
    msg.value = 108U;

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
    msg.setTimeStamp(0.449295526939542);
    msg.setSource(36496U);
    msg.setSourceEntity(131U);
    msg.setDestination(24268U);
    msg.setDestinationEntity(151U);
    msg.consumer.assign("EJVYAHITBUJEXVBAKQYLKIXBZHSGDRAKFWCOEDHWCMJRNHYTY");
    msg.message_id = 22030U;

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
    msg.setTimeStamp(0.928054874668635);
    msg.setSource(51562U);
    msg.setSourceEntity(90U);
    msg.setDestination(27534U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("WLSXEGSWPKERTVJMQFDDNWAMPTNRBYCAMDWMPZAQVJZVULPDACDTRWJUZYQNOSVNLRTWOUVYOFORXSGEESFWHOYKLELFDPRFZKSTTPGHAQQAERUIHZJEXWJONNRBKHDIBICTEPXKUFKJKGUPKQWSTCLYDSMKFAGYXKMXIJBJQIYQLTIFLPIHVLSUWVIFBMOMMDHCGXOBZBUZIHGOBCZNHFQYXZENCABRCJVOLZUEPJYI");
    msg.message_id = 50871U;

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
    msg.setTimeStamp(0.025785255584243494);
    msg.setSource(41298U);
    msg.setSourceEntity(115U);
    msg.setDestination(37577U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("OXVIYGDCZBILGTASWEHGDIEKICRKZTMIPSUBUJLDNJYQBLOZXJNXHGXOBUYWRFRGYBNBPVOENVVGLQRYYJITVZMC");
    msg.message_id = 37493U;

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
    msg.setTimeStamp(0.19409161779566675);
    msg.setSource(1058U);
    msg.setSourceEntity(117U);
    msg.setDestination(48215U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.7558309505906533);
    msg.setSource(18448U);
    msg.setSourceEntity(53U);
    msg.setDestination(56698U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.41045923274539153);
    msg.setSource(56081U);
    msg.setSourceEntity(87U);
    msg.setDestination(64811U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.9903159004360045);
    msg.setSource(48706U);
    msg.setSourceEntity(72U);
    msg.setDestination(39504U);
    msg.setDestinationEntity(41U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.8843625945243611);
    msg.setSource(19128U);
    msg.setSourceEntity(21U);
    msg.setDestination(24714U);
    msg.setDestinationEntity(215U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.20834225631185443);
    msg.setSource(1556U);
    msg.setSourceEntity(5U);
    msg.setDestination(55961U);
    msg.setDestinationEntity(13U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.032723954943940425);
    msg.setSource(53334U);
    msg.setSourceEntity(200U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(199U);
    msg.total_steps = 124U;
    msg.step_number = 173U;
    msg.step.assign("YFXVVUWOPCEFKIDBWCOEBPCUEKGSLXTFPUFRSLMBAQHYAXMLCXTZNSVSZQBBJZDTTNRGGECNNOMGVPDPLQCYXATZLNUOQFSHJI");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.8044794022021186);
    msg.setSource(21190U);
    msg.setSourceEntity(33U);
    msg.setDestination(51625U);
    msg.setDestinationEntity(24U);
    msg.total_steps = 90U;
    msg.step_number = 136U;
    msg.step.assign("FVHKNCSWSMFYGORM");
    msg.flags = 218U;

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
    msg.setTimeStamp(0.7125836590986626);
    msg.setSource(64194U);
    msg.setSourceEntity(13U);
    msg.setDestination(37679U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 122U;
    msg.step_number = 164U;
    msg.step.assign("RBFLXMGZKVLQIESCIZFEGXJYTWBYDUNQNDNCDHIYSCMQRAQ");
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
    msg.setTimeStamp(0.8202440309700008);
    msg.setSource(14704U);
    msg.setSourceEntity(42U);
    msg.setDestination(29723U);
    msg.setDestinationEntity(92U);
    msg.state = 135U;
    msg.error.assign("BBUHEPAQDSYVROMYMEXXLESQGFKNXIOFEMQQIQWTHBWJZWOAZUWFKFQPCMNCOALJJADTRRWDNPKTSVKAVYZKTINAOVNPHCGOCMLMEWEXGUCNXDZTVCGZLQJWUPURJDSPURRYGCXGZCLJZOFYOBMDXRBSLQSZYZOSBVNHDJYSUCHAAPIPLBGULERYTWEFIEMNJSSVHJEKHNGFDTZTIBHFUIVFRIHNMTIMDWYQC");

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
    msg.setTimeStamp(0.4461346575792452);
    msg.setSource(7806U);
    msg.setSourceEntity(104U);
    msg.setDestination(29540U);
    msg.setDestinationEntity(124U);
    msg.state = 98U;
    msg.error.assign("EELYDPSJNZSQZXASUGUDUUQILSILEBDYMRTGDIUISAETCSRYVJWNYVJECXLCOCDJGWHDHTAVUYZVSAJZNFBLWCN");

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
    msg.setTimeStamp(0.3104785415651684);
    msg.setSource(3878U);
    msg.setSourceEntity(234U);
    msg.setDestination(52052U);
    msg.setDestinationEntity(103U);
    msg.state = 57U;
    msg.error.assign("OPKFHOTOGGSNRZFLDVXTNNVZTKJZWRVNFWUBVWMVYCLBUKGMCFIQZXAVPRGOLJAFMDWHLSYAYEDOOGISFEXJMARMLGSTFHPNAXNUWOYSUYCQASXEPKCAPBXJMEQIDAHVWL");

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
    msg.setTimeStamp(0.25037508545866816);
    msg.setSource(16231U);
    msg.setSourceEntity(104U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.17213614405055166);
    msg.setSource(55933U);
    msg.setSourceEntity(59U);
    msg.setDestination(53452U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.3046662560050113);
    msg.setSource(61266U);
    msg.setSourceEntity(249U);
    msg.setDestination(8217U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.9787964102290944);
    msg.setSource(1913U);
    msg.setSourceEntity(110U);
    msg.setDestination(36081U);
    msg.setDestinationEntity(4U);
    msg.op = 213U;
    msg.speed_min = 0.5139233661906483;
    msg.speed_max = 0.6518361876052242;
    msg.long_accel = 0.4864584942635495;
    msg.alt_max_msl = 0.9170730092241262;
    msg.dive_fraction_max = 0.6353361789416471;
    msg.climb_fraction_max = 0.06568710696422841;
    msg.bank_max = 0.015654969206820524;
    msg.p_max = 0.4299528822284071;
    msg.pitch_min = 0.04648126901090477;
    msg.pitch_max = 0.07756084705109878;
    msg.q_max = 0.6766800352626524;
    msg.g_min = 0.5255972679926991;
    msg.g_max = 0.9957046065383237;
    msg.g_lat_max = 0.8921977556353792;
    msg.rpm_min = 0.446676746332926;
    msg.rpm_max = 0.5436652141985737;
    msg.rpm_rate_max = 0.44434287002549266;

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
    msg.setTimeStamp(0.1829365121361437);
    msg.setSource(62067U);
    msg.setSourceEntity(70U);
    msg.setDestination(46118U);
    msg.setDestinationEntity(129U);
    msg.op = 20U;
    msg.speed_min = 0.6716021261159734;
    msg.speed_max = 0.516096728949879;
    msg.long_accel = 0.683733062257773;
    msg.alt_max_msl = 0.12346839864105552;
    msg.dive_fraction_max = 0.7997115888476097;
    msg.climb_fraction_max = 0.6110854744323306;
    msg.bank_max = 0.3867901294939533;
    msg.p_max = 0.14050768416722792;
    msg.pitch_min = 0.44144152018348515;
    msg.pitch_max = 0.9860026420408974;
    msg.q_max = 0.4879672447645834;
    msg.g_min = 0.30113788878726555;
    msg.g_max = 0.6929620203596598;
    msg.g_lat_max = 0.7912493535922692;
    msg.rpm_min = 0.6615479477208375;
    msg.rpm_max = 0.23664557394340824;
    msg.rpm_rate_max = 0.6229521106742906;

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
    msg.setTimeStamp(0.4130256996757876);
    msg.setSource(6478U);
    msg.setSourceEntity(95U);
    msg.setDestination(3720U);
    msg.setDestinationEntity(253U);
    msg.op = 175U;
    msg.speed_min = 0.8919609789275428;
    msg.speed_max = 0.18128253491413782;
    msg.long_accel = 0.23945852447941518;
    msg.alt_max_msl = 0.6024315500294335;
    msg.dive_fraction_max = 0.9904628156445513;
    msg.climb_fraction_max = 0.8697540883668999;
    msg.bank_max = 0.2542277055705744;
    msg.p_max = 0.8130975225618112;
    msg.pitch_min = 0.014335478953352854;
    msg.pitch_max = 0.5328215685824208;
    msg.q_max = 0.8158369464640292;
    msg.g_min = 0.3491840505232604;
    msg.g_max = 0.6866064402826584;
    msg.g_lat_max = 0.26358642084939865;
    msg.rpm_min = 0.6849403340543533;
    msg.rpm_max = 0.9594833615273477;
    msg.rpm_rate_max = 0.47254551472702133;

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
    msg.setTimeStamp(0.8832125090169517);
    msg.setSource(22718U);
    msg.setSourceEntity(144U);
    msg.setDestination(17848U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.010339249243690896);
    msg.setSource(34932U);
    msg.setSourceEntity(169U);
    msg.setDestination(52987U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.6844217825596269);
    msg.setSource(36991U);
    msg.setSourceEntity(237U);
    msg.setDestination(46719U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.48226706430900745);
    msg.setSource(47165U);
    msg.setSourceEntity(225U);
    msg.setDestination(5356U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.4445324788762577;
    msg.lon = 0.0077844386019200185;
    msg.height = 0.0655789261140729;
    msg.x = 0.5642257996256637;
    msg.y = 0.4279178934649418;
    msg.z = 0.17642613203616142;
    msg.phi = 0.8214549944633938;
    msg.theta = 0.6231191184020917;
    msg.psi = 0.6922916119109129;
    msg.u = 0.8803605294644273;
    msg.v = 0.5267967148247226;
    msg.w = 0.7919365676759106;
    msg.p = 0.15525226485073207;
    msg.q = 0.8991819712898279;
    msg.r = 0.5130112809044303;
    msg.svx = 0.6430886452477022;
    msg.svy = 0.3282638917437162;
    msg.svz = 0.7688588150319794;

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
    msg.setTimeStamp(0.4514969745088325);
    msg.setSource(59116U);
    msg.setSourceEntity(85U);
    msg.setDestination(37622U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.31520877577141737;
    msg.lon = 0.6315068906446624;
    msg.height = 0.011663167220187232;
    msg.x = 0.7813644153481482;
    msg.y = 0.886120993520829;
    msg.z = 0.006252957097950151;
    msg.phi = 0.09129347079724681;
    msg.theta = 0.5778623064838534;
    msg.psi = 0.47423252187398146;
    msg.u = 0.6470258960753138;
    msg.v = 0.42796890121189246;
    msg.w = 0.18057676989423221;
    msg.p = 0.04021730841835003;
    msg.q = 0.14635717233096757;
    msg.r = 0.40570148095080727;
    msg.svx = 0.7669824695194942;
    msg.svy = 0.9090865759368222;
    msg.svz = 0.9666917623322523;

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
    msg.setTimeStamp(0.5637869890186915);
    msg.setSource(28375U);
    msg.setSourceEntity(115U);
    msg.setDestination(8212U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.19310605568628658;
    msg.lon = 0.8008133633336921;
    msg.height = 0.02805972367552312;
    msg.x = 0.2431520947375937;
    msg.y = 0.40573476991468127;
    msg.z = 0.17291938134012674;
    msg.phi = 0.7747885478941271;
    msg.theta = 0.9452009417653908;
    msg.psi = 0.45625010311337044;
    msg.u = 0.22794924009735107;
    msg.v = 0.16601736133643408;
    msg.w = 0.2952096586286349;
    msg.p = 0.853437363728652;
    msg.q = 0.13742360669282916;
    msg.r = 0.015713085547241046;
    msg.svx = 0.5820882403225914;
    msg.svy = 0.8828064535043014;
    msg.svz = 0.5352192547878927;

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
    msg.setTimeStamp(0.9596209409339465);
    msg.setSource(41416U);
    msg.setSourceEntity(120U);
    msg.setDestination(14022U);
    msg.setDestinationEntity(164U);
    msg.op = 182U;
    msg.entities.assign("FPQTROQCEUFTDGUAZTENLWSEAKWCYAUBVVQRIZQACGPUSJFLCPDKUJIXGPAZWM");

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
    msg.setTimeStamp(0.6025048407674227);
    msg.setSource(13444U);
    msg.setSourceEntity(114U);
    msg.setDestination(59150U);
    msg.setDestinationEntity(55U);
    msg.op = 197U;
    msg.entities.assign("LBDTDWGGWLGPLBSBLVPQNYKTYMTQONUAOJRFTNEVHWESZGOSQDIFVOKMDRJRNIQHAVOWOCSEAJEKXYLZZHPZEACZQHLNFEIMAWMSIRUJZCVDSOUWFEHEWAQZDGJLMHNMYKVYUTAHOCBIFXDJTDDT");

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
    msg.setTimeStamp(0.14217537374062927);
    msg.setSource(65317U);
    msg.setSourceEntity(109U);
    msg.setDestination(16974U);
    msg.setDestinationEntity(209U);
    msg.op = 159U;
    msg.entities.assign("JRLPUKLHCTPYFWJKEMNPDFVMCEZQFTZSSWTPBYNMWJRNORZLNCDNEXLYHFKROKYNWWCXTTBOQINOPBNXZUPHQIJYMFYHWXHSEOKBZDLXPYVUAEINAXVYQULBSRREAVBDRGEGVRTQIGMSMLEJU");

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
    msg.setTimeStamp(0.5924208993987147);
    msg.setSource(51025U);
    msg.setSourceEntity(93U);
    msg.setDestination(4698U);
    msg.setDestinationEntity(166U);
    msg.type = 174U;
    msg.speed = 3088U;
    const char tmp_msg_0[] = {-84, 101, 89, -40, 21, 50, -36, -87, -76, 86, -18, -81, -111, -104, -30, 125, 71, 26, 124, 94, -53, -37, -61, -121, 114, -118, -125, 90, -8, -59, -76, 17, -68, 3, 14, -91, 23, -92, 38, -124, -51, 96, -82};
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
    msg.setTimeStamp(0.19635219321206643);
    msg.setSource(45628U);
    msg.setSourceEntity(8U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(17U);
    msg.type = 71U;
    msg.speed = 17065U;
    const char tmp_msg_0[] = {-90, 66, 103, -48, 104, -17, -97, 8, 74, 29, -75, -110, -36, -123, 17, 112, -67, 20, -4, -127, 73, -30, -42, 66, -94, 81, 100, 78, -40, -113, -26, -17, -106, 112, -104, -12, -18, 100, -118, -96, 54, -43, 65, -84, 12, -46, -94, 106, -34, 57, -54, 1, 81, -121, 116, 27, 114, -81, -76, -11, 34, -74, -126, 97, 6, -88, 47, 91, 43, 48, -112, 126, 79, -5, 59, -94, -64, -59, 108, 51, 98, -75, -77, -61, 33, -81, -68, 75, -9, 120, 85, 75, 63, -119, -92, 103, -61, -64, -70, -64, -43, 53, -52, 120, -117, 62, -93};
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
    msg.setTimeStamp(0.29800050002746625);
    msg.setSource(58873U);
    msg.setSourceEntity(64U);
    msg.setDestination(6638U);
    msg.setDestinationEntity(63U);
    msg.type = 142U;
    msg.speed = 63367U;
    const char tmp_msg_0[] = {116, 15, -64, 17, -34, -24, -29, 93, 119, -35, -61, -87, -18, 38, -65, -5, 58, -88, 67, -71, -113, -35, -107, 11, 20, -41, 22, 70, 82, -31, -55, -6, 58, -29, -86, -123, 12, -95, 60, -30, -116, -37, 74, -16, 44, -90, 82, 99, 123, 59, -21, 67, -128, 36, 103, -13, 45, 124, 63, 101, 98, -106, 107, -104, 114, -50, -111, 66, 17, -39, -92, -86, 85, 65, -108, -122, 45, 43, 125, -81, 87, -91, 4, 55, -3, -22, 124, 5, -115, -100, 96, -72, 44, 61, 126, 84, 92, -83, -14, -117, -73, -26, 71, 8, -107, 113, -27, -46, 126, 106, -109, -89, 81, 27, 65};
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
    msg.setTimeStamp(0.17386674097865407);
    msg.setSource(50689U);
    msg.setSourceEntity(245U);
    msg.setDestination(13642U);
    msg.setDestinationEntity(197U);
    msg.op = 8U;
    msg.tas2acc_pgain = 0.48599781860233615;
    msg.bank2p_pgain = 0.4598454204596484;

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
    msg.setTimeStamp(0.5902459057156331);
    msg.setSource(36163U);
    msg.setSourceEntity(87U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(201U);
    msg.op = 191U;
    msg.tas2acc_pgain = 0.19872487070568923;
    msg.bank2p_pgain = 0.8328379778241728;

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
    msg.setTimeStamp(0.18924621872437175);
    msg.setSource(32709U);
    msg.setSourceEntity(41U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(25U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.9180199562724555;
    msg.bank2p_pgain = 0.3260894897536456;

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
    msg.setTimeStamp(0.835338002797115);
    msg.setSource(10596U);
    msg.setSourceEntity(53U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(51U);
    msg.available = 3990877557U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.49683228634755516);
    msg.setSource(55261U);
    msg.setSourceEntity(159U);
    msg.setDestination(28483U);
    msg.setDestinationEntity(117U);
    msg.available = 2790605835U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.8380541324155326);
    msg.setSource(15884U);
    msg.setSourceEntity(77U);
    msg.setDestination(460U);
    msg.setDestinationEntity(240U);
    msg.available = 3311086779U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.7260722627612477);
    msg.setSource(22239U);
    msg.setSourceEntity(21U);
    msg.setDestination(11011U);
    msg.setDestinationEntity(116U);
    msg.op = 82U;
    msg.snapshot.assign("CNDPGRTHDLXTCPAOWAUSDHXIBNCHWBWBBWZUUVSDRUJQJXDKMBLQFHEGTJBYTKKJZRKRILRQPFWPFLNKQGEIDKWCYICSZCXZDKYKEIJAWVFDQQGABXONMGGL");
    IMC::AcousticMessage tmp_msg_0;
    IMC::Depth tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.57965149518264;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.35080790210272705);
    msg.setSource(37055U);
    msg.setSourceEntity(123U);
    msg.setDestination(61315U);
    msg.setDestinationEntity(253U);
    msg.op = 4U;
    msg.snapshot.assign("BHTIVXLAEBIVDTWDXOXQPSYTRKBSVUKHVXGGPEBDPRCQIZNARWSNOEBHQWWLMTMDKBJQAZADNRJAMPMVPCKJZRSHSRBZOUUICIRGQKSGOAPVCGNFWUOUHQMFGOYWPDCZWBVEXJJDYMNJASHPXKJIGTZVYXRYPESWBJNI");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.3693692727010589;
    tmp_msg_0.confidence = 0.3792736004514634;
    tmp_msg_0.opmodes.assign("GPIOVQBOSRQFXDECDVJVCNYTLUBQRCHARZNRAYASEDCKQUEAFOYJAXFPABBLAJHIGKGIUECUDPBKLXPMWVALOJBPQOYWVHWGZNOIXTTSBSSXFNORTSAXKYMDJXCKIZOHETKPWMGLSYLFJPINTILVHYYPWNWNQJNUWHEQNHECISEDNMLVTDSHRMIUIPVMGCWM");
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
    msg.setTimeStamp(0.64436763458389);
    msg.setSource(44986U);
    msg.setSourceEntity(236U);
    msg.setDestination(18894U);
    msg.setDestinationEntity(70U);
    msg.op = 89U;
    msg.snapshot.assign("VTIWWAUXFTTOFWDSUSKAIOBXFXAGDWGMZLSEKHNJULQRTVEYZGZKYMFXHMOFBIQRFIVJUZOGWPJDXYIDNJZCIYNRDSZDOQQAJGH");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 3685601280U;
    tmp_msg_0.id.assign("ULHQGTDVTABKXRCNFBYKWKZQCYXDZSUFQAVWQRDVQJGFGWUJTKRNGMGNJHTAIGPGPNOASIBDMSCTGBIERSPHUZYXGFNPLZZJKHXXEWEBMLKOZDNJSXPKIEYVBPEZCUJESIOPYANEVLDIYUUTSQDHLYWOCZJUHXWLAEVQGHBYKEMRQWB");
    tmp_msg_0.memento.assign("SDRACKNHFWGHJLWKKPXWDRETIUVGUDLKAWFZROMLFYSUBLQORHEVFTSANCIZYTJHENBOJBPYFYX");
    tmp_msg_0.custom.assign("NVYTRTRHPFLAKEQOONZWMENWNCUCYUJVRRGTDKQOJBBSGEOBNITYCXLALKYUWGUXYSQHEMTXMRVTJQDFAJAYKYGZNPSHAESVYIUUSVVFUAFJILZOMWSXDHFTTGLZDLGZIXCGDSUCDAORPFKFPCHQBYISNJS");
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
    msg.setTimeStamp(0.9944171008873897);
    msg.setSource(30774U);
    msg.setSourceEntity(1U);
    msg.setDestination(52406U);
    msg.setDestinationEntity(4U);
    msg.op = 168U;
    msg.name.assign("OBZHAMEBXYXZTLFEFIFJGKPHESQCWIAFGXRXXZNOQLVCKAIZPWYSUTJTQPUXLSNXMVGMRSGDCMYUSKSHYJAMTSBHWQNXJOJMNSNZJGVCUPCMDVYONBYZVYRVCSGJCILYHTORTVMFFKPQDDQANOMKNVJPZPPIOHSHUNLUDRRKCWCATHLEQGJIEIIEOWDZPVBARKWEQOTNGPUZEXMEOTDALFKBHFLWFDXRCRWLBAUKIWB");

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
    msg.setTimeStamp(0.9052589726699566);
    msg.setSource(8953U);
    msg.setSourceEntity(124U);
    msg.setDestination(48955U);
    msg.setDestinationEntity(144U);
    msg.op = 190U;
    msg.name.assign("HWQFXDQYGQBOFTOFKXURQZCCIEMLLCNGNQEAYVOBVAUDZYHFJOCCAJFHGEUXFRLRSITVQVYWOJWDCBWBQOPHHSSDPGEIKGEKSKULRXMNXXRLWZUFJMBGTEWYRRSYRGWMGASMAJPBZVCKDEIYGTNBKKSTRMPOJPVMZXBEJOHURAZMUWWIDWQQXDVLUIGXEBTUZHCNKMF");

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
    msg.setTimeStamp(0.7023031317844176);
    msg.setSource(6050U);
    msg.setSourceEntity(104U);
    msg.setDestination(55076U);
    msg.setDestinationEntity(232U);
    msg.op = 114U;
    msg.name.assign("OVLRPUYHBMFKVQIDBTCXWCAVYHTLNUCQVZXHXYNZLEOXBKEVPXLZADQHQDJIACAWWISOMKMADFGEWDHNJWVLODFQWMCRCLSWPGEFZGPAYUINAYZYKYUDIGWOIEGSPQNJBJLKQJBMNFULVCBCTKXMVXNVOSZFUEJRIXDJRGTIFITSMRP");

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
    msg.setTimeStamp(0.0711087435112483);
    msg.setSource(44819U);
    msg.setSourceEntity(157U);
    msg.setDestination(64744U);
    msg.setDestinationEntity(55U);
    msg.type = 193U;
    msg.htime = 0.8978901145230354;
    msg.context.assign("WNDSGXVIRKJXLARHZSOGPWPXZQNMSCDSBWQXDLFOQHXRPTWKRWKEXRYBAIANROELDOFMPZZGWBUKYNIEWVJASZVQHNBVLDUKEVFUNJRDOYGSVTUXGSHDTCLUFPNCTVICJMAXASJAZ");
    msg.text.assign("KXLOFXNVADMNRMBRWXBRNSIZFYCKJEXQHAKWTPDEYWSAOYKATCYBTUBORRPQGTCUKHWGJBULILFXZBUYNKYNHXVCKRKBS");

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
    msg.setTimeStamp(0.6590925140009021);
    msg.setSource(46170U);
    msg.setSourceEntity(220U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(203U);
    msg.type = 114U;
    msg.htime = 0.5197727339089697;
    msg.context.assign("LACUHZOTVMZRVIRVHDTIBKOJIPIRYEHDCYETSSASWCPVCHFQJPDEILWWXCWPYEKPLABIRUEPZYCBNLSRNAFXBWMEUOZWRKAABENZKTNJFLGFGNQSCGDSYN");
    msg.text.assign("PDPCUMVQIKEKVFDZCIGWCCROGZIHYZFIQKYAZDDQKHIANYAEMWJ");

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
    msg.setTimeStamp(0.5743103594604292);
    msg.setSource(49040U);
    msg.setSourceEntity(127U);
    msg.setDestination(41102U);
    msg.setDestinationEntity(112U);
    msg.type = 208U;
    msg.htime = 0.2114881636648991;
    msg.context.assign("BFBVCBRVUQASJACDRZKFUZFAVJCDLIJUNDXTSYPMQNCCIXJHMZPVWXYHN");
    msg.text.assign("QKPOFDRQVTLNTUFSTFEXNRQYYUAWBGUOASCFI");

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
    msg.setTimeStamp(0.6885338998527338);
    msg.setSource(11816U);
    msg.setSourceEntity(0U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(37U);
    msg.command = 50U;
    msg.htime = 0.4031386400477138;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 205U;
    tmp_msg_0.htime = 0.6646121669318594;
    tmp_msg_0.context.assign("XVFNFBQSYZKZOAYNESNKNLEWHNHVKBFBAOGQLWNIHZYYRPIUAWAZCCMZROEQHITXJKESTGVRBCDWDOQSOOTOBPDICXPLRDO");
    tmp_msg_0.text.assign("HWZBXSLFOBSFOATHLAFXQMJTJUSYNECNYFIENPDSAAUVPWFHRKUMYGOTCGPLWINQDVZPAVWTUVOHYEKDZTHDZGJMVMXELWQKGOHBNQWETQPRPKFBXMDQEPUISABJZXRILUBWSEXSE");
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
    msg.setTimeStamp(0.33248437954248333);
    msg.setSource(57416U);
    msg.setSourceEntity(220U);
    msg.setDestination(40603U);
    msg.setDestinationEntity(162U);
    msg.command = 27U;
    msg.htime = 0.4541885220391845;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 144U;
    tmp_msg_0.htime = 0.060520498048734495;
    tmp_msg_0.context.assign("JIPEDFRWJCFRJONZTMTYIIVFKBHUKTZTPEXQOSRWZBYAXLDHUYOQIEWVESQPYNIRTVNGUICWWEJXJWFJEVRQNLJLRRSWXNEZQUGLSAOLPFKFREZHGYSUOGNKCSYXLWIBOLMDLMPICWUKVBGSTBZXOOTKCGYGYVPZKNFJQMEHXHZQHRFNVKDMFAUUVHDBVLMSMZXTDATTAIJANDAO");
    tmp_msg_0.text.assign("YYOMAEVNTIWXEKIYFWFXZCUDDXTT");
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
    msg.setTimeStamp(0.47876153646761876);
    msg.setSource(4869U);
    msg.setSourceEntity(242U);
    msg.setDestination(26933U);
    msg.setDestinationEntity(164U);
    msg.command = 237U;
    msg.htime = 0.9286565119717606;

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
    msg.setTimeStamp(0.950363744438318);
    msg.setSource(38602U);
    msg.setSourceEntity(148U);
    msg.setDestination(39258U);
    msg.setDestinationEntity(186U);
    msg.op = 199U;
    msg.file.assign("QUIOAAGYKHWVMDDIRYOUGPELYWCKXTGRBFQDFPTTTIAIANONHKEWYZ");

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
    msg.setTimeStamp(0.7016300165441784);
    msg.setSource(15459U);
    msg.setSourceEntity(120U);
    msg.setDestination(61926U);
    msg.setDestinationEntity(38U);
    msg.op = 223U;
    msg.file.assign("LPDIZNHBNRQCWC");

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
    msg.setTimeStamp(0.9796403343052994);
    msg.setSource(55092U);
    msg.setSourceEntity(146U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(126U);
    msg.op = 95U;
    msg.file.assign("YACAKVOKTKSGDEXIFSOGRGXBSZAICDIEYQMRFELHOMZQKDULUUBPQXXLCNBFHJQLFOPMVRCTJDWFFXMVJ");

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
    msg.setTimeStamp(0.8159547354443961);
    msg.setSource(41128U);
    msg.setSourceEntity(136U);
    msg.setDestination(5906U);
    msg.setDestinationEntity(54U);
    msg.op = 254U;
    msg.clock = 0.9844559259274582;
    msg.tz = 49;

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
    msg.setTimeStamp(0.4660954723166719);
    msg.setSource(18383U);
    msg.setSourceEntity(232U);
    msg.setDestination(41753U);
    msg.setDestinationEntity(164U);
    msg.op = 128U;
    msg.clock = 0.7990524705186792;
    msg.tz = -17;

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
    msg.setTimeStamp(0.23262072548745916);
    msg.setSource(63993U);
    msg.setSourceEntity(40U);
    msg.setDestination(25097U);
    msg.setDestinationEntity(29U);
    msg.op = 68U;
    msg.clock = 0.6962955664778455;
    msg.tz = 76;

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
    msg.setTimeStamp(0.15145526733988635);
    msg.setSource(22650U);
    msg.setSourceEntity(149U);
    msg.setDestination(51809U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.06385225315240217);
    msg.setSource(7541U);
    msg.setSourceEntity(80U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.13616943619517408);
    msg.setSource(13127U);
    msg.setSourceEntity(51U);
    msg.setDestination(13485U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.16773372152388377);
    msg.setSource(26947U);
    msg.setSourceEntity(111U);
    msg.setDestination(60024U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("PSTYIATLWPEHBMAITEGQISDCKYZEILDSEONLUNXZRJRTBYMFCFDXXHTGFBNMRIATYJQELVKBVUTWLOVAGPGGQMRSECBCMYPTKSMXKFFCHFQWUROMQKRWNQJFNVAXBPWDRVPSZJCUDPZMNDFWYHMUJKEKRAFAXWQSBYQOGNSBKPTHFUGCNEZZVVDWIRPEKEOHILJNXMYAUQHAAZIZXJZODQJJYVDZTUDKI");
    msg.sys_type = 106U;
    msg.owner = 61527U;
    msg.lat = 0.39219786707206694;
    msg.lon = 0.9893769484760205;
    msg.height = 0.005728897402420441;
    msg.services.assign("FPMFBLLYCHMVQODCCESWICQWMCUJEGDSYEYBRPTFWTLRQAYWSDYZPVTSZVCDOQXKFGCYWQNLZNKUBOSYVVRKZZDBXRJTUJCHUQHOAOJPNPSDOWDQGOGKGFXHPHQWRRZGIQEFSOXIELZQYMANOYCEDFRBGLJJPEASDAJ");

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
    msg.setTimeStamp(0.9647302292174981);
    msg.setSource(23428U);
    msg.setSourceEntity(81U);
    msg.setDestination(30794U);
    msg.setDestinationEntity(26U);
    msg.sys_name.assign("HWAXYCSCCHYZDEHQ");
    msg.sys_type = 217U;
    msg.owner = 54206U;
    msg.lat = 0.9624892578754554;
    msg.lon = 0.3875281273030967;
    msg.height = 0.538252984801808;
    msg.services.assign("DIFOQJRSVYZBUMGLHUAPHXEYQUYIIATIMQPYKGCXEPPDBZYFTNDFNZKOAIWNQYKOOQQWYNVRWPJMHOHWJYJULGWHNBXJFKJNZGANLMDXLUSLRMHLEEIXVYVGSHWAQDBTCWVMXMZUUIJLKLSMNBPERFZXCBKCAGSKSPDHPZCNXVIJOJMTFGNCGERGDCTTTVBICVMKZ");

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
    msg.setTimeStamp(0.1828869912692077);
    msg.setSource(48512U);
    msg.setSourceEntity(232U);
    msg.setDestination(56298U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("KMECZTRAAIPMBNGRWAYMDXTGZWHEDYXOKBVSHIKIFDBGGXCULKDKEPSOZUWLYWQDCTBOJLUPZGYHVASYTFYGTZJIKHSQCDNHFHVFSBXIPOENNIFLVSABCXQWAELNKIJBRBOIZLJTHVVMJKNCJFXVGTQFKJNZLVGRRXCN");
    msg.sys_type = 249U;
    msg.owner = 41525U;
    msg.lat = 0.7204880709238562;
    msg.lon = 0.3226886322099861;
    msg.height = 0.7893906118625466;
    msg.services.assign("SRUBYAMGHCWIBINGUARUAHKYAMGQXRDWXXNEJOQVYZEIRSNIMSRJDEPRVQIEATLUSBHWCHOSQVTLEEXWDFQEFJOVFTCOZITCIQCIHNVKAEWFOINLFKXXSGSNYRVMXMUXYCVGGPBULGDWFJPWZMJMBPLPQNNBIDYTVYDKB");

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
    msg.setTimeStamp(0.564133332255269);
    msg.setSource(34788U);
    msg.setSourceEntity(33U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(99U);
    msg.service.assign("WBXDPGBNVPAKVRUDHFRUZJQROPNBIXBLUJSBFTDVKHGSQQTMWPOHANBMZLUSXVYEGBYPBCVHZEOKFAWJXHXUZSERXHHSIUDAZZIAQEDHIDPVPUXWYOJNCLUZZKMYZCUTWIQNLCMFKCQRDTWRVEGJVKAHAACTSJWOMFDERSVGGYLYJAAHXQXOPTTJUBEFJTGKWMQELIRNSKWGLPGOINKICMSGVOTQOYLSYMCFNOI");
    msg.service_type = 192U;

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
    msg.setTimeStamp(0.04809338580268696);
    msg.setSource(38891U);
    msg.setSourceEntity(35U);
    msg.setDestination(776U);
    msg.setDestinationEntity(32U);
    msg.service.assign("XTOSIWQQIWGLOTVHHQDSQLQZDVYJAIPMWHWQLYGKJKTMUBTPONDFEDWNHUKAFTYUTSZTWMPQDKCELBNALXAUVTZXIZKCAXGMICLHWAAYIOURZYVMEEFIRFZGJPUBDYBRXJZJKLBOENOQVKCNNHXPANMLFPMDIOGSXPPDOGTFZMBMJAAYVWOWENBHXHXRNVJRCTQSLRSJGCKZFCGDVUSB");
    msg.service_type = 195U;

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
    msg.setTimeStamp(0.8028754607259037);
    msg.setSource(29549U);
    msg.setSourceEntity(34U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(164U);
    msg.service.assign("TJGJFSWGMNIULIVASSVGLOWFOBEQ");
    msg.service_type = 56U;

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
    msg.setTimeStamp(0.37036691682252176);
    msg.setSource(16036U);
    msg.setSourceEntity(189U);
    msg.setDestination(22266U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7674044702619537;

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
    msg.setTimeStamp(0.09116060748610644);
    msg.setSource(18108U);
    msg.setSourceEntity(167U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8434091731823737;

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
    msg.setTimeStamp(0.5013306141945734);
    msg.setSource(28562U);
    msg.setSourceEntity(102U);
    msg.setDestination(25856U);
    msg.setDestinationEntity(134U);
    msg.value = 0.09521868396886468;

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
    msg.setTimeStamp(0.6460844984371618);
    msg.setSource(61185U);
    msg.setSourceEntity(104U);
    msg.setDestination(29666U);
    msg.setDestinationEntity(157U);
    msg.value = 0.41433821746762156;

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
    msg.setTimeStamp(0.7027129527289085);
    msg.setSource(18214U);
    msg.setSourceEntity(128U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5457122815698908;

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
    msg.setTimeStamp(0.9461274376900879);
    msg.setSource(28769U);
    msg.setSourceEntity(42U);
    msg.setDestination(6160U);
    msg.setDestinationEntity(37U);
    msg.value = 0.23670607024861046;

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
    msg.setTimeStamp(0.17289807472571417);
    msg.setSource(36797U);
    msg.setSourceEntity(161U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(111U);
    msg.value = 0.6231151247548562;

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
    msg.setTimeStamp(0.07318478748277135);
    msg.setSource(28767U);
    msg.setSourceEntity(229U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(91U);
    msg.value = 0.14331466635618562;

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
    msg.setTimeStamp(0.030642312549006734);
    msg.setSource(37444U);
    msg.setSourceEntity(248U);
    msg.setDestination(42131U);
    msg.setDestinationEntity(59U);
    msg.value = 0.892158732178326;

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
    msg.setTimeStamp(0.395430818265078);
    msg.setSource(33066U);
    msg.setSourceEntity(175U);
    msg.setDestination(29541U);
    msg.setDestinationEntity(51U);
    msg.number.assign("OJLHWQCZGYAMSRPZHHTUGLCJDGVTTYKNXAFQSIOKTVOWEQXMQPZBEVEHWDWHTCMFSNSIIJTRKDBYZRNEGPVKAGLSCMWNLUJKOZMEPFFNXLFWLYHHIOATYFPRAQTDBMGNLEGUDCBBJVUYIORDCJYQVDOWXHSZCEEAJWDLUMSNPRPXHXGNIJRAPIGCUWKIK");
    msg.timeout = 10723U;
    msg.contents.assign("LEIQEWONMVGATVYFJPORDFWFFKQRSGUPXJCHISTSCASWNEHB");

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
    msg.setTimeStamp(0.5549266785233389);
    msg.setSource(61088U);
    msg.setSourceEntity(2U);
    msg.setDestination(61032U);
    msg.setDestinationEntity(202U);
    msg.number.assign("KCNUBQRONHRWWQTURYBSFPABMKZZRDXBHOGECNSCNUCQLEUFZBQEXXOKIXWVNHRPCGYLFLNCHMWBAVZJKJJLVTFQTYWLSDEXQFPNODLLTTESLMFWIZCXADBPEFMIDXKXDJZAJLAUOYJLTSPJQPXUGYZIHIICYUGHZQGFMVPOVBRJFHTDVVYFKDQHINJKPAOIVRIDAVRMAUSBGJWOKKGGDACMGMRRNWPUAYKQTOUMSTEIHCOEBSZWEES");
    msg.timeout = 42335U;
    msg.contents.assign("JVYLGDZYCQHVCUROXEHTSDNCCGPKMJRZABQIZSPVWRGMOEBBSERYQHTSGDKCMZLIXTHASELOKQRETGPJCNBRCPINXKQVUWXDNWXMBJGBCEFQNKFNESJOBJRODFFNYZEKW");

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
    msg.setTimeStamp(0.6422342429088919);
    msg.setSource(6308U);
    msg.setSourceEntity(251U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(146U);
    msg.number.assign("QJDOOMPBXTHDDYPTHYNCMWBXQT");
    msg.timeout = 40336U;
    msg.contents.assign("WRCWHWMTODRRLVTUOPGVRMQHEYEXOBENNZYKBMVQOYGZCMYCKIUCQEDHUYBQYQQENKEGVSHJSLXMUABBWPAVFSIMJZCROJXZHRPFDGTTFHCASGMPUJCKKLEIBJESERXMHDPANHFXUYVJAAAPSVAOYOPQISUFKYTDGDNDZGQPPTFITRMDQRWNXZLWZIGOTWCFCNWWEXWIGLIVJGMHNXBLJVUDKLVZKHDKJLBN");

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
    msg.setTimeStamp(0.8738927317051385);
    msg.setSource(39817U);
    msg.setSourceEntity(84U);
    msg.setDestination(63811U);
    msg.setDestinationEntity(79U);
    msg.seq = 2403802311U;
    msg.destination.assign("AMZOKXUTYKYPNSIENOPURGVWCAKSILVHJHAQBAWSCPGKBLEEZGCKHGTHMITQGBPJONBGGDACVTQRJKFXHMOAXENVWURRNFPXWRTBZZAZSBUSVNXCKXTOMDITXMCZNLAGEFYBDPYOWZMUWMCBFYEFSTSDTGZIJMCUUIQJYSQDIZEQFYRUFDSPLPLDOETDLQHDLNLNWDPHRERSWVCVIN");
    msg.timeout = 22998U;
    const char tmp_msg_0[] = {117, -24, -122, -89, -71, 119, -125, 66, 1, -128, 108, 29, -66, -60, -47, -49, 42, -45, -75, 26, 92, 44, 24, -65, 73, -106, 112, -124, 122, -117, 81, 124, -70, 91, -15, 11, -43, -20, 97, 91, 81, 75, -63, -30, 4, -49, 24, 97, -62, 86, -58, 85, -69, 53, 43, 96, -75, 58, -22, -64, 73, -93, -92, -12, 117, 107, 103, -57, 62, -84, 94, 61, 91, -121, -1, 26, -99, 117};
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
    msg.setTimeStamp(0.772551863208132);
    msg.setSource(61427U);
    msg.setSourceEntity(174U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(202U);
    msg.seq = 2076325433U;
    msg.destination.assign("GZCIDNYQEUAZRZKLRKRSXHVXV");
    msg.timeout = 44795U;
    const char tmp_msg_0[] = {-68, 125, -121, 49, -109, 41, -79, 72, -58, 58, -68, 9, 104, 90, 13, 98, 112, -67, -110, -106, -85, 69, -67, -29, -93, 64, 55, 14, -4, 41, -84, 108, 2, 0, 32, 23, 47, -119, 48, -78, 44, -9, -47, -107, -107, -8, 109, 87, -28, -116, 50, -120, -87, 47, -106, -113, -90, 3, -48, -75, 106, -91, 124, -30, -128, 67, 21, -80, 16, 124, 1, -116, 63, -65, -116, 9, -17, 87, -1, -25, -124, -92, -11, 61, 64, -16, 115, -74, 4, 114, 66, 90, -67, -108, -15, -53, -50, 43, -118, 93, 4, -91, -61, 10, 60, 40, -115, -19, 14, -59, 41, -114, -60, -50, -44, -118, 22, 69, -21, 120, -68, 121, 67, 56, -120, -22, 87, -20, -3, -53, 54, -52, 68, 73, 48, 39, 0, 72, 37, 52, 19, 87, -45, 13, 92, -18, -49, -97, 9, -74, -73, -110, -10, -127, -76, -41, -15, -1, -116, -83, 105, 3, -6, -111, -93, -123, -127, -35, -59, 78, 89, 22, -55, -39, 63, -100, -10, -121, -78, -28, 60, -28, 53, 74, -126, -23, -96, -4, -62, 88, -111, 123, 110, 121, 14, -41, 113, -87, 23, 62};
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
    msg.setTimeStamp(0.029766045893050763);
    msg.setSource(18858U);
    msg.setSourceEntity(94U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(117U);
    msg.seq = 1914758284U;
    msg.destination.assign("YTGZKNPGUJLMIGXZBILU");
    msg.timeout = 32077U;
    const char tmp_msg_0[] = {46, 107, 66, 106, -103, 56, 13, -109, -55, 120, 90, -98, 85, -97, -48, -62, 124, -91, -125, 79, 39, -10, -26, -34, 89, 82, -126, 106, 60, 50, 110, 116, 90, -44, 21, 116, 113, -82, 93, 90, -127};
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
    msg.setTimeStamp(0.4894632166577576);
    msg.setSource(49579U);
    msg.setSourceEntity(88U);
    msg.setDestination(31156U);
    msg.setDestinationEntity(22U);
    msg.source.assign("CDRNTUTPHNLGKLQWEMKJOWYYQPRJBGQYNKXFMVLDKUEADBQCFFGGLWNEEGUBXABBNBOZFEYHUEKKMFGEQHVOHQROODCGFSTAESJUKHCMIJWLAZHRWHSDDVFMNCTINGMZXTKVZPCEDPMIVICAVYVQIOZZUSVLFWZCXWTSOAZYBTAPHJWKNMMXHLIPPIUJQOXABRDPOIMGPXIB");
    const char tmp_msg_0[] = {-88, -34, -114, -9, -75, -23, 124, 4, -104, -32, 7, -37, -79, 82, -83, -54, -34, -70, -86, -102, 85, -83, 19, -102, 9, 53, 64, 125, -3, 84, -6, 3, 124, 39, 119, -57, -23, -33, -111, 20, 31, -124, 97, -128, -73, -36, -91, -113, -5, 90, 78, 74, 92, -128, -22, -97, -5, 62, 2, 114, 86, 9, -98, 112, -99, 103, 65, -1, 22, 24, 32, 55, 70, 100, 72, 117, 55, 78, 4, -95, 87, -12, -37, 7, -62, 19, 36, -113, -94, 40, 51, 98, 38, 94, -53, -34, 6, 36, -63, 60, -66, -128, -65, -116, 117, -107, -18, 49, 72, 31, 75, 16, -64, 126, -69, 68, 0, 87, 84, -76, 76, 7, 1, 104, 7, 97, 74, 42, -97, -89, 2, -127, -52, -10, 10, -20, 50, -77, 57, -70, 101, 125};
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
    msg.setTimeStamp(0.8356291418598054);
    msg.setSource(18549U);
    msg.setSourceEntity(73U);
    msg.setDestination(17819U);
    msg.setDestinationEntity(176U);
    msg.source.assign("QBICPPSWFKJWGGIJWKRAXLMYLQATBOKDNBLBNYXCHHXMHQUIPBPZNRFGYKSUAKETZEVIJTRWJVOOFWVJAEGNHMYBAHGEBYIDNQF");
    const char tmp_msg_0[] = {-20, -24, -73, 18, -45, 93, 86, 54, -87, -77, -31, 20, 56, -43, -120, -40, -57, -93, 81, 12, -40, 35, -57, -52, 10, 67, -11, 60, -10, 90, 33, -4, -119, 31, 22, 51, -39, 89, -35, 51};
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
    msg.setTimeStamp(0.17059076973198484);
    msg.setSource(47215U);
    msg.setSourceEntity(34U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(232U);
    msg.source.assign("VMDBSHKLXZNQYNLITWKWLMPFDMCGXCYVNTPTUATGBSGRRQAZCTWDIDOXRWUKJCYTCEMZADQJDBFUAELXOWPWYOXRNQHFJWUBVPEDSPGISQBHRHYFMJZKMSLEZAZBGJESZKNOEJONRXPVBHGGLSRQPDQVVXUHJHA");
    const char tmp_msg_0[] = {64, 17, 10, -97, -110, -6, 115, 104, -11, 84, -25, 21, -51, -106, -27, -37, -24, -121, 83, -59, -9, 123, 89, 76, -81, -98, -128, 40, -83, -43, 95, -23, -90, 67, -125, 101, 34, 29, 9, 34, 64, -45, -23, -74, -69, -116, 40, -70, -57, -17, -76, -120, -11, -26, 61, 39, 56, 122, 31, -117, 64, 30, 39, -92, -107, -114, -50, -27, 106, -110, -108, 52, 71};
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
    msg.setTimeStamp(0.6391463340292164);
    msg.setSource(21051U);
    msg.setSourceEntity(84U);
    msg.setDestination(53044U);
    msg.setDestinationEntity(77U);
    msg.seq = 1396581407U;
    msg.state = 25U;
    msg.error.assign("YDDSSZHEXQWWPHXICGCWIQPNFRRAWZDXATBUUENOFBJLYVMIGVBPCGMEMRKRZKSYVWRIIFNPGULRNTIXUOJMEHYZXYTSTFTVBALQEQOBLTHIWJHOYCFJWZYUVZCQESHRTNAOSZOCLTPCVKBLJQJSDYGCZPUHIBAADKVWB");

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
    msg.setTimeStamp(0.04582276029959054);
    msg.setSource(64062U);
    msg.setSourceEntity(159U);
    msg.setDestination(7855U);
    msg.setDestinationEntity(248U);
    msg.seq = 1625492010U;
    msg.state = 56U;
    msg.error.assign("FUQTLFZSYYDMBWVQHNBBIRNXKPMBUQESEYHPWAJOYCVALFTDVOGDIYBDOZIACJWZHKJSCNFVOKTVGGZEIFUAFPFQHVLGMXECJPOWTLUDCQRUMXEJKJQLVYFLQRLWZMASCKGBOTDKMMIAWMKZKARRRIPXULPDOXRWNZYQJQOGEYTCPJAKBYLUCNIKHTGNVUXPSSPEOQHHLDCNESGJDAWSBZCITMRNPHGDIVWFIEX");

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
    msg.setTimeStamp(0.5303786395523064);
    msg.setSource(44991U);
    msg.setSourceEntity(244U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(244U);
    msg.seq = 1272120358U;
    msg.state = 71U;
    msg.error.assign("PLAPIASEEUQVXHPAGLKYWIBKQOLMHZMMSLAANFOTNGFTVBUWZEYAHDIOLYWPDRJMDVHJKXZXENNDTOHOXCNLQBDKHTKFXWOPRLISHURQZICJXWVMOFDURJAXDSWPKIKGEHUVRBPYTAVIESUCRZLPKTOBPCQKRXNWJEMQTGVFTJUZUSJNWXNHWKSPGCQSDVJQ");

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
    msg.setTimeStamp(0.061711921451736096);
    msg.setSource(61693U);
    msg.setSourceEntity(210U);
    msg.setDestination(56345U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("RXFAPJSLYTJGRJJUQNDCJOIVOIPAFCUQDHGYHPVNHNWKBHVIKPZIUSEPXDLMMVFZYOEZIDGWZZKFWLFVFURCVASTVGENELTWQUCDGJNHXRFVUEKCZOJPNBOXSMUX");
    msg.text.assign("OSJVJYEQPZRKAXAGSHLP");

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
    msg.setTimeStamp(0.3778695241160376);
    msg.setSource(34908U);
    msg.setSourceEntity(58U);
    msg.setDestination(42130U);
    msg.setDestinationEntity(124U);
    msg.origin.assign("SFBOHKOKOPNKSRWIPL");
    msg.text.assign("FWRCLSGKBDAIALNEFCSSXMGXHVBFYXABRUAWGOPXYJVDPDBLYWZOEMXCQUSCZLNKMFTKZSOH");

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
    msg.setTimeStamp(0.6014433267113004);
    msg.setSource(61130U);
    msg.setSourceEntity(162U);
    msg.setDestination(13431U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("PTXKIBHXJOBFVWMGAQJEJOUMWOSMKRZHLETYPCM");
    msg.text.assign("VJQLMGDFDSHRTZTEOXYN");

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
    msg.setTimeStamp(0.7651819663615942);
    msg.setSource(31594U);
    msg.setSourceEntity(250U);
    msg.setDestination(40323U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("MBBECQSUTUXRPGDEEAPRAFBWOKCZFSSRDIZMYTAHLKZAITNLHEKAKMDQSOWSIOONUMLPRLFEJAQVJKYVVYNMSSDKCRDPVTKXTZSFGBOSZGNTZTTQB");
    msg.htime = 0.45326412964196094;
    msg.lat = 0.6298256719650032;
    msg.lon = 0.2560833942543348;
    const char tmp_msg_0[] = {56, 25, -60, 6, -101, 71, 97, 44, -77, 74, -16, -20, -26, -28, 122, -15, 44, -125, -124, 34, 47, -121, -16, -58, -117, -128, 104, -128, -95, 25, -84, -7, -33, -9, 115, 17, 83, -6, 22, 72, 124, -77, 45, -125, 126, 93, 123, 77, -27, -47, -72, -107, 85, 5, 71, 32, -122, 114, 94, -87, -51, 65, 73, -32, -57, -110, 59, -38, -75, 44, 19, -124, 118, -75, 82, 52, -42, 113, 123, -56, -103, 62, -79, -99, -12, -5, -14, -23, -63, 6, 119, -81, 98, 115, -115, -119, -72, -15, -3, 116, -10, 55, 18, 64, 9, 61, -78, 33, -46, -110, 123, -15, 110, -19, -96, 111, 126, 114, 68, 41, -60, -80, 54, 67, 6, 33, -76, 94, -38, 14, 99, -39, 47, -26, 80, 107, -84, 109, -54, 71, -11, -128, -17, 88, 50, -99, 2, 96, -103, -11, -37, -60, 18, -45, 23, -80, 98, 30, 102, 7, 51, 83, 6, 99, 23, -58, 54, 116, 97, -112, -90, -11, -67, -114, -28, -60, 90, -118, 10, 88, 100, -17, -56, 48, 45, -36, -98, 124, 6, 40, -27, 5, 35, -127, 27, -47, -99, 11, -49, -26, -28, 26, 75, 105, -53, 74, -2, 20, -25, -56, -72, 0, 20, 90, -16, -5, -45, 8, -63, 86, 87, -126};
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
    msg.setTimeStamp(0.30204408766461677);
    msg.setSource(33000U);
    msg.setSourceEntity(120U);
    msg.setDestination(41804U);
    msg.setDestinationEntity(98U);
    msg.origin.assign("NZTXNGPNHPWQUNXTCKSDGVDEERIQKIWYKIXYRYSJUZJNDKAOAWYBQOCUVFMGPFFBXLLNVAEPJWYLTMEEORSTBNVQJZWHZMCFRWCAAVMACWSKPBLQHTDFWTDXBNINMAGLERTPUKFISYGZQLTMBUNH");
    msg.htime = 0.1576715484746185;
    msg.lat = 0.24354177655149356;
    msg.lon = 0.6742640650004195;
    const char tmp_msg_0[] = {114, 45, 91, 116, 112, 28, 97, -63, -81, 89, -7, 81, -30, -125, 114, -16, 111, 96, 41, -44};
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
    msg.setTimeStamp(0.044518107112684);
    msg.setSource(39523U);
    msg.setSourceEntity(107U);
    msg.setDestination(51606U);
    msg.setDestinationEntity(55U);
    msg.origin.assign("ULLFAPKGUMGQKFBXEORHZAZFDYXIJJGWJPKYACVEENNJT");
    msg.htime = 0.3660263448648755;
    msg.lat = 0.46249882062974634;
    msg.lon = 0.48352967635013944;
    const char tmp_msg_0[] = {27, -20, 39, 108, -71, -7, -36, 93, -79, -95, -87, -95, 46, 27, 2, 26, -60, -25, 101, -104, 57, -92, -118, 60, 122, -39, 102, -114, -39, -41, -79, 76, 113, 89, 97, -15, 68, 45, -86, 3, 100, 123, -97, -63, 103, 69, 114, 66, -79, -66, -127, 61, -21, -19, -59, -46, -78, -4, 31, -38, 26, 77, -79, -8, 40, -18, -2, 9, -21, 64, 25, 37, 6, -116, 67, 123, -26, 2, -12, -113, -97, 52, 106};
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
    msg.setTimeStamp(0.4954367784158248);
    msg.setSource(65183U);
    msg.setSourceEntity(11U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(121U);
    msg.req_id = 7842U;
    msg.ttl = 56202U;
    msg.destination.assign("LMGRQLIBQJTTHGKCLPCGXPVXSIBYEPVJZIDDASCSCFVKOGBHAREEZYMVMAOZXKJRPQGLTLFJRKFRQMVACROMIQTWAMRSYFYYIFFQOEYDVZXWSPUWOEDEONXNZNRHUXGDLYNNFJACPZBQEKCIIJRQZJMVWWSMDHYFUJHOZDWAWMTUYUNCNVHVPLVBYUDFEZAAUQOPBWNUDIWSXGJHGOBNIKM");
    const char tmp_msg_0[] = {-47, -113, -82, -100, -60, 13, 52, -9, -64, 70, 25, -128, 2, -20, -6, 76, 22, -25, 42, 21, 73, -15, 26, -68, -28, -63, 88, 89, 120, 68, -75, -64, 57, 19, 75, -32, 87, 86, -85, -107, 52, 117, -73, 72, -64, 83, 96, -89, 76, 19, 38, -11, -112, 7, -14, 68, -31, -109};
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
    msg.setTimeStamp(0.9163605631374303);
    msg.setSource(6581U);
    msg.setSourceEntity(29U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(174U);
    msg.req_id = 39495U;
    msg.ttl = 22359U;
    msg.destination.assign("MGJJISCXXBUHYQEGMAVJWCIZTHIWNDERNYARHVCNAETWBTFJIDCRFLONOUGQPRGSNKLPSRVQPXWPQN");
    const char tmp_msg_0[] = {-109, 22, 70, -101, -75, 70, 77, 87, 24, 113, -48, -108, -56, -63, -33, -18, 79, -114, -57, 52, 55, 15, -49, 71, -98, -85, -125, -4, -69, 35, 48, 11, 29, -1, -10, -19, -4, 36, 89, -69, -65, -2, 71, -107, 82, 14, -16, -42, 24, 72, 47, 120, 53, 82, 79, 31, -2, -1, -74, -18, -106, 53, -7, -72, 81, 16, -116, -83, 71, 68, 91, -123, 87, 3, -20, 80, 84, -18, 113, 1, 58, 24, 98, -56, -95, 77, 20, -45, 118, 65, -66, 20, -63, -41, 47, -102, 75, -59, 10, -116, -76, 52, -86, 36, 35, 38};
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
    msg.setTimeStamp(0.48846051089561937);
    msg.setSource(20282U);
    msg.setSourceEntity(33U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(21U);
    msg.req_id = 46682U;
    msg.ttl = 7713U;
    msg.destination.assign("MQZFYIBYOYNREHLPAZCHITCLP");
    const char tmp_msg_0[] = {49, 111, -108, -89, 86, -77, 29, -122, 89, 26, 111, -10, 77, -122, -111, 47, 106, 17, -25, -78, -24, -90, 91, 96, 31, 16, 97, -5, -61, 40, -16, -91, -11, -15, 32, 92, 99, -2, -2, -42, -98, -123, 108, -101, 6, 118, 20, 73, -55, 87, -60, 82, -3, 6, -61, 85, 57, -95, 90, 29, 98, -40, -34, 95, 87, 16, 68, -31, -51, -54, -68, -97, 116, 107, 37, -30, -11, 6, 112, -78, 63, -104, 39, -1, -91, -125, 102, 12, 113, -45, -95, -4, -106, 85, 100, -113, 56, 30, 29, -121, 4, 107, -16, 119, 69, 83, -107, -116, 8, -104, 9, 90, 114, 52, 14, 89, -3, -31, -126, -64, -91, 59, -11, -52, 93, 86, -117, -5, 22, 16, 31, 16, 14, 91, 52, 84, 56, 97, -82, -107, 96, -32, 89, -46, -24, -119, -106, -96, -111, 45, 39, -45, -116, -107, -30, 80, 64, -79, -74, 75, 83, -40, -79, 95, 4};
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
    msg.setTimeStamp(0.4804849947102231);
    msg.setSource(41137U);
    msg.setSourceEntity(176U);
    msg.setDestination(44100U);
    msg.setDestinationEntity(229U);
    msg.req_id = 24083U;
    msg.status = 219U;
    msg.text.assign("NVKNQPLIOONTCAVTXEHTJPVKCTTGJPYTFOF");

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
    msg.setTimeStamp(0.9946574200692117);
    msg.setSource(12784U);
    msg.setSourceEntity(145U);
    msg.setDestination(61409U);
    msg.setDestinationEntity(213U);
    msg.req_id = 11028U;
    msg.status = 8U;
    msg.text.assign("TPULXTRWNZCZPNFQXMQSCLFJCYOEIJNBOHDJXZDEASCWSFXNLDTIBHWDMDNKKPVUBERGPZJHIPBMPCQFJLBWGTKSVCONGEABUTMPNIYTMHDUNZKYKOBYBYKJYXDWFLUAPNMQQLQIULGTYZLWEUHQWAKRWVOIRAUPSKRDSHEVGZXOFUIJTSLXCRGVDOHDXQVCHCWTJEXOERUQLI");

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
    msg.setTimeStamp(0.7821312553304633);
    msg.setSource(61992U);
    msg.setSourceEntity(227U);
    msg.setDestination(35096U);
    msg.setDestinationEntity(87U);
    msg.req_id = 25566U;
    msg.status = 139U;
    msg.text.assign("DPMSIXTRJIJNTPJXFBIIMKHGGWHSQQUCKJPNABXGTVOJUJBMQDWLBDNKFACQVAZWMNZWNPNDNVQCBNWOKGHODUFWSCPXMRHLOZEJIBZFORUUGAUIVCSKSGYTOZVFDWEEQIYJKHSYLRAHELPIUVLMYDYGEHLUNZQXGOKVFYKOCIASRUM");

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
    msg.setTimeStamp(0.992723135640922);
    msg.setSource(16202U);
    msg.setSourceEntity(200U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("PKJSIKUQLAUMMDWPIABVEWSJNLBQHRRZYNIZSZBMFBHAMEVMQPDFGMGOFGHKWBWPLWQCB");
    msg.links = 2993887707U;

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
    msg.setTimeStamp(0.9480789760716405);
    msg.setSource(4515U);
    msg.setSourceEntity(113U);
    msg.setDestination(38818U);
    msg.setDestinationEntity(243U);
    msg.group_name.assign("AYGJIPZIALVRALJNBCAGIIEJHSJWUYSLQOCVMEQJUFYOAPJXOEKBWHQDPTAUFQZXHPVIKTSBSDITFWFFOAXZEYNMNZFLLOZKGCGUMLSNRLCWITBBUCOPYNXRCNVQTMV");
    msg.links = 2933978210U;

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
    msg.setTimeStamp(0.5603517755129809);
    msg.setSource(1124U);
    msg.setSourceEntity(70U);
    msg.setDestination(32503U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("GHBZKLDXCHTZJTGHVVPRIRTGLMLWXMUPFXQZOYEJGKIUECJEFALSUMIVILOPKSUIWLCFDTFDFRAWPYDFDMVIDGQBVRBAXAIFTAKHSZUNSCGGZJQDNMNBOWBWWQYDXYJLYUBRVBDCONPRNGBHNZXMEYWVEEXAVQNOCUOTJCNNOWLIOEMMBAMYCMNQSQHKSLJK");
    msg.links = 1266687913U;

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
    msg.setTimeStamp(0.7079023246476607);
    msg.setSource(21966U);
    msg.setSourceEntity(121U);
    msg.setDestination(41850U);
    msg.setDestinationEntity(163U);
    msg.groupname.assign("YNWHGFUGLGZ");
    msg.action = 105U;
    msg.grouplist.assign("SOCYYFIXGDOGLARSVCEWTXYAMYKUSMFEVQAGIPBNOCMLFDWVCFOFJSEZWTRXLXWMIJJQUXAUEBDJONNSBPGXPVVGQHNZLJBLEKHDCZVWNTWSGEYYDJYXOQURBHSPMLZKMA");

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
    msg.setTimeStamp(0.28274432098234714);
    msg.setSource(32567U);
    msg.setSourceEntity(195U);
    msg.setDestination(65094U);
    msg.setDestinationEntity(212U);
    msg.groupname.assign("HYPLRFDJRRCGAFKMCZJBKVKGYZZRNAENEHVQSXNPSUDVPDQTISPPWTYXIPJXDDOGUMGUWQBGTCLOFTSQJATYZZMCIKYKEFFASFRWKFAWUCQBOAIGJXDUFDHEVHLWLYYTIPGSVPEFBGOUUXPLVYKIKAIWVQLMMEHONWLNOQZTCUNXWQHYGHJVTXZMCALIUFDKGWSACB");
    msg.action = 254U;
    msg.grouplist.assign("AOSMMONYFJMCGDLYWAEHF");

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
    msg.setTimeStamp(0.07568797995554333);
    msg.setSource(58340U);
    msg.setSourceEntity(45U);
    msg.setDestination(42600U);
    msg.setDestinationEntity(204U);
    msg.groupname.assign("ALGXSGZTOVRREEGWAZUNIMROVJWFGCFRGSYVELEUZZXLBYMMCMTKQHNWPVZYIKSUOJMPNAFISNTSDUKENLOEUGHRAVSOHVXLJHMPTIMQCBWYDDLXSHDQMJBIHPDXZZBXBIUZNPXRFGDUIRCRWKUKYMEIVUTZFFIECHBYBDJYTXXSEKGABHJVOAJVDFAQYUHDQWLLWFRFTQYHOSCWANAAOCNKCXPZQOLPNPKYERFJLGTKCJDW");
    msg.action = 94U;
    msg.grouplist.assign("ZTJBQOQNEEVSALWWYLCSTSYVIRXQJRCRWFKMUZHOQOCJQITIWSRNXHE");

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
    msg.setTimeStamp(0.46794071529861414);
    msg.setSource(45912U);
    msg.setSourceEntity(196U);
    msg.setDestination(32791U);
    msg.setDestinationEntity(3U);
    msg.id = 220U;
    msg.range = 0.7387317003738002;

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
    msg.setTimeStamp(0.8009556529391523);
    msg.setSource(37204U);
    msg.setSourceEntity(87U);
    msg.setDestination(12575U);
    msg.setDestinationEntity(110U);
    msg.id = 127U;
    msg.range = 0.34965414151047425;

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
    msg.setTimeStamp(0.6861614113683189);
    msg.setSource(6151U);
    msg.setSourceEntity(201U);
    msg.setDestination(448U);
    msg.setDestinationEntity(175U);
    msg.id = 32U;
    msg.range = 0.0045949944704442025;

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
    msg.setTimeStamp(0.3924938163023428);
    msg.setSource(13147U);
    msg.setSourceEntity(235U);
    msg.setDestination(15883U);
    msg.setDestinationEntity(75U);
    msg.beacon.assign("FGIWGMYZQZIUSSNDVVMNEYNLLOBMALRHDURKKWUCBEOCEDHTWMDQFJHHTIAMTITPOHWYOJLAEGBHRAGFNYXTYZVHRYAPAUOXJCNIPNROLAYCKFEQJCKPCXTWWFGFXYEPVCVJGLKJ");
    msg.lat = 0.17209384640308945;
    msg.lon = 0.7480074367808209;
    msg.depth = 0.2552711569725793;
    msg.query_channel = 39U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 151U;

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
    msg.setTimeStamp(0.3170876423978509);
    msg.setSource(36029U);
    msg.setSourceEntity(209U);
    msg.setDestination(10065U);
    msg.setDestinationEntity(132U);
    msg.beacon.assign("QKGMUMYEGIAVDJVESDJDBXIENAAWEMPYMYCMXUUWLNXXIPCCSGRNZHVFYJQSJZPPEUYRMHITOIGSWTSAGSVRSQDHJLYMSVFZORONZHCLUFUPBVYRAQDEATZJGCEUJJBYWPZPXPXRHQMBGTMTXOFNDFGQNQDIFOIAUWAEULKAGEF");
    msg.lat = 0.3136072770245082;
    msg.lon = 0.7676336801698019;
    msg.depth = 0.8605819353364853;
    msg.query_channel = 179U;
    msg.reply_channel = 121U;
    msg.transponder_delay = 211U;

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
    msg.setTimeStamp(0.7025175902127783);
    msg.setSource(26270U);
    msg.setSourceEntity(179U);
    msg.setDestination(18289U);
    msg.setDestinationEntity(193U);
    msg.beacon.assign("GYACQDLXKDRLQHNCBIOEBJKRUTPBARUZRJARFUSCKVCFLZHDJIMPRIJVGXWXZSYNZJJLHNJBOXFSTZIKUIZBCKAWDLEJAEXBGMSFFWMPHERQRLQYTLSUGADIQEOAOLMVWXOOFDSOVIB");
    msg.lat = 0.05399540173417794;
    msg.lon = 0.27543464210549573;
    msg.depth = 0.40132834714371024;
    msg.query_channel = 20U;
    msg.reply_channel = 200U;
    msg.transponder_delay = 238U;

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
    msg.setTimeStamp(0.9909891842852289);
    msg.setSource(20764U);
    msg.setSourceEntity(53U);
    msg.setDestination(2669U);
    msg.setDestinationEntity(204U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.906937933858016);
    msg.setSource(2327U);
    msg.setSourceEntity(201U);
    msg.setDestination(1706U);
    msg.setDestinationEntity(224U);
    msg.op = 191U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EYXQXGWUEDKGZGNLOWENKURXPMTEYNTJGXE");
    tmp_msg_0.lat = 0.9593777987666421;
    tmp_msg_0.lon = 0.7397960987360699;
    tmp_msg_0.depth = 0.8958381314670767;
    tmp_msg_0.query_channel = 248U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 55U;
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
    msg.setTimeStamp(0.8392534544200759);
    msg.setSource(16244U);
    msg.setSourceEntity(30U);
    msg.setDestination(3768U);
    msg.setDestinationEntity(108U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.1417284137530861);
    msg.setSource(56234U);
    msg.setSourceEntity(134U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(39U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 145U;
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
    msg.setTimeStamp(0.2685225437090456);
    msg.setSource(22841U);
    msg.setSourceEntity(77U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(225U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.plan_ref = 3115227233U;
    tmp_msg_0.id.assign("WEKUJMRGWZXTVJAZEDDTJVOHKPLOLPCWSYQPPULOXBRJMRUDMXNFHESSXWUCQWIKEEJAUYLSBAKKIXGVVJUGMRGLGGTCUFISLFQORCMXRZTJSHPHYQXVAZHZXWJIYXNUCWLEQCYOBODHYKNKSIDFTPDEFDAAOKL");
    tmp_msg_0.memento.assign("QEQAFWLPCQSJWXXKBLMIMTCFZBZKEOAEHHKJOLFUPRUPEZIYFLKYPOXDTITHVMVBOYVLCVVQYEAGZWXNDIOKTODHPFPWUEEPDINSSXGJ");
    tmp_msg_0.timeout = 6049U;
    tmp_msg_0.lat = 0.23377357677722443;
    tmp_msg_0.lon = 0.21465647914122665;
    tmp_msg_0.z = 0.31912035796424776;
    tmp_msg_0.z_units = 19U;
    tmp_msg_0.speed = 0.09882415829226654;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.duration = 25079U;
    tmp_msg_0.radius = 0.42232739858019597;
    tmp_msg_0.flags = 3U;
    tmp_msg_0.custom.assign("UEXZXHNFLKMMKMBGLOFICKXNWIUOEMUDAFJOELCNAYPUQXFYSLCZGGQIQDLBGDMNJVIEUXKDWSIPFDHUYWLIAZLBKLDGSZIGBHJBRTYUWNDVFNMCVPWQGIINRVRHPCYAZZTBHPQZWOERSCJTCREEPGCQHAPMPEQASORWKLHAGHLQFWWXSOTSVENZPHNMBMEURYTSDDTBJJJTSNHFJRTQVQTZMKBUYKAOXWXAZFKUFSVOVRTYODX");
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
    msg.setTimeStamp(0.06236571561769466);
    msg.setSource(2525U);
    msg.setSourceEntity(156U);
    msg.setDestination(28804U);
    msg.setDestinationEntity(195U);
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("FJFROMRKPILPXTWPKUODILDDCHJGYZVLBSSZCDERWSRGQJWCNMUWSHGGUEVLDBMFQSLZSNTEPFIUJBYADGKJVTCHDHYWAQYTKBBHGLWNICJFZXTQJZXBGUOQHAYAFMAHAZPHKNINENVUPRCZPTNOOWQXEZMTEBGOXJKSFRUYRQVEVRIICGXDQMOKESBEASFMUY");
    tmp_msg_0.op = 249U;
    tmp_msg_0.lat = 0.7723573888319677;
    tmp_msg_0.lon = 0.806693669182294;
    tmp_msg_0.height = 0.6486724775908825;
    tmp_msg_0.x = 0.6117956097938736;
    tmp_msg_0.y = 0.3826656147440375;
    tmp_msg_0.z = 0.2638273777049629;
    tmp_msg_0.phi = 0.9445545981862885;
    tmp_msg_0.theta = 0.07892420169077541;
    tmp_msg_0.psi = 0.504105784501081;
    tmp_msg_0.vx = 0.43027579161550944;
    tmp_msg_0.vy = 0.029165212564629117;
    tmp_msg_0.vz = 0.15613213009545002;
    tmp_msg_0.p = 0.8133012683369498;
    tmp_msg_0.q = 0.3819539561362625;
    tmp_msg_0.r = 0.6575694367250419;
    tmp_msg_0.svx = 0.31865516228655977;
    tmp_msg_0.svy = 0.1179934918113481;
    tmp_msg_0.svz = 0.3538794396467919;
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
    msg.setTimeStamp(0.6545928625124122);
    msg.setSource(48545U);
    msg.setSourceEntity(142U);
    msg.setDestination(59491U);
    msg.setDestinationEntity(28U);
    msg.op = 98U;
    msg.system.assign("YGUSGIEYZQPHYSOFNSIOPULVSWYDXRKHVIHODFMOFESMMQBUYAGAILXNJNCROZNOCMTJNVCPLLZLPMTALTREVVOFSGWPIXFDSCTMHZWNTCKXCLZUJVBNMDDHSQXXBXEIJEZAADGHKCBQEIUFHVRTDQCKKMBXBQVHWAPQCMVNABKGFJG");
    msg.range = 0.8261215633711484;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BRFBMSSQDLFODWEITJTXHPBIAQMIKYWAKNAUUVFGBTIVDGOGHNWGADLNHBJCUEAOPPTXLWRAGDQCWJPUOYYPNYFLDGYRTKWNOVIKDRKMFSBAEAZILNIWSPTSYMHCECHVJTZMUOJZKIFYYDJWZZLNVJJMOZE");
    tmp_msg_0.value = 60U;
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
    msg.setTimeStamp(0.8503015735372081);
    msg.setSource(44505U);
    msg.setSourceEntity(182U);
    msg.setDestination(37332U);
    msg.setDestinationEntity(170U);
    msg.op = 8U;
    msg.system.assign("NISURJGANZKIYBFXOGZXQMNBYWNVDJVGUZOFYYWEJSXVXEYTHXTWCMULTKOKTUDPEXDCNOUWDQUETLZPWHSIZRWXJXZAFRXVYAGMVHAIMSUEICHCULCABNCBTWDJPFFKGTRKSAFYGHIKDHKSCIDRDEQJBQRPERJMJEVULWQPZMKAPLOHBFNGFWSVOYAQSJTNQUQZPRGKAFPLDQVIYCMSIZPHHSOTMEBTVNCZLVOPFLCYBD");
    msg.range = 0.37629264219329195;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 135U;
    tmp_msg_0.error.assign("TBIMOENUSUAWWVFFTUXCMUTVMZUCCPKBKVGRGSNCBCAODHYZAHYBOQIURCRWKLHBWXNJSSCPYHEFOVIGFHFFFHLTWRAPCMETWLIEZHYTJQLMGZKAXKJOURYWKLPKQOEQJVXRYMSWSRTGYBDQEMNZGZGDYDJTLDFIVJYPXANSERQPIMWPIKQNOSBPUGBRIMHHLLNVDNQAXTFKRZAPQIKEBX");
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
    msg.setTimeStamp(0.47364332051618596);
    msg.setSource(36535U);
    msg.setSourceEntity(134U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(235U);
    msg.op = 136U;
    msg.system.assign("LEUXBTCWGYMWUFNEOFKZTYVZQESPPGGMFIZPJMDBIZSWQRVCYUAIUJVKWCSMEQUOVOUFPRBYDUULBLDPNSAXRLRXBRJPNAEFBMQOPZEJFLYSXRTXDASLDHJTNWQCGVAOZIQEYFXKXMSHTGRCKHCLBYGHQCPYMTTMTXGHFITDHRILLDIXPWZOVZCRHXIOJ");
    msg.range = 0.26485067449516586;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 79U;
    tmp_msg_0.period = 260741476U;
    tmp_msg_0.duty_cycle = 2901722602U;
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
    msg.setTimeStamp(0.9848769441549612);
    msg.setSource(28287U);
    msg.setSourceEntity(87U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.07128205136678112);
    msg.setSource(27067U);
    msg.setSourceEntity(122U);
    msg.setDestination(9828U);
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
    msg.setTimeStamp(0.36842295941277137);
    msg.setSource(42080U);
    msg.setSourceEntity(48U);
    msg.setDestination(22197U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.6131908212840363);
    msg.setSource(30031U);
    msg.setSourceEntity(190U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(110U);
    msg.list.assign("FKZTJPFHOSZNHFHKAIOCEGIXLEOAECVJYKWCYABCZELBPADRICLKQIHDFUSMYQEWQBDBDIUFVOGDWQTIRNBRMRJVJVYGENTUTBEYKTYLQKPXVLMVOSNNLJNFWJUTMQLZTWFLRDVGIDVMLRAMPANTEPIXZFFXZQHRUGNWYQRBGIOWAWJHP");

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
    msg.setTimeStamp(0.5878150817889611);
    msg.setSource(47085U);
    msg.setSourceEntity(119U);
    msg.setDestination(64473U);
    msg.setDestinationEntity(132U);
    msg.list.assign("LOXTQJXFVOWGXKGLBETEUVASXCWQQPCCVGSYVOZKNMJAMISZYBIIPQOCEJZZBIOAHFGSYQTVNCLADRSFRRDASTPDZDFTVKJEIQJDFBNNYRXCIDM");

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
    msg.setTimeStamp(0.9763942597443077);
    msg.setSource(46151U);
    msg.setSourceEntity(101U);
    msg.setDestination(63758U);
    msg.setDestinationEntity(110U);
    msg.list.assign("BIWSOQLVKVHWWLLZGGASRVTFHUZICSSFCUQSRJMKUXPOWBDJFLDKXTQCEXJMLFGMSHENTVXCPSNTQPZQMHHUNUUKKXSJXIGESNMIDREDOQBAJNHWFPYONBYDDBZAWQBSRRMFYIOIIPBGQHEFVYKZLTLEHXVPYOYZJDGCQMFGBTPBOWALPAUMJWCBPUTCLAAHOCVRARKIAK");

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
    msg.setTimeStamp(0.657830410654812);
    msg.setSource(35016U);
    msg.setSourceEntity(167U);
    msg.setDestination(42146U);
    msg.setDestinationEntity(188U);
    msg.value = -831;

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
    msg.setTimeStamp(0.4020100839401145);
    msg.setSource(32020U);
    msg.setSourceEntity(183U);
    msg.setDestination(65440U);
    msg.setDestinationEntity(150U);
    msg.value = -22953;

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
    msg.setTimeStamp(0.4697940013359896);
    msg.setSource(33249U);
    msg.setSourceEntity(113U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(32U);
    msg.value = 10316;

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
    msg.setTimeStamp(0.8764090500268931);
    msg.setSource(21179U);
    msg.setSourceEntity(164U);
    msg.setDestination(8384U);
    msg.setDestinationEntity(5U);
    msg.value = 0.1218154116889757;

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
    msg.setTimeStamp(0.09890012179906915);
    msg.setSource(60636U);
    msg.setSourceEntity(50U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(36U);
    msg.value = 0.9651374613911676;

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
    msg.setTimeStamp(0.14936529574707502);
    msg.setSource(14771U);
    msg.setSourceEntity(231U);
    msg.setDestination(396U);
    msg.setDestinationEntity(128U);
    msg.value = 0.4073128062223411;

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
    msg.setTimeStamp(0.02113352778700006);
    msg.setSource(6990U);
    msg.setSourceEntity(183U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(126U);
    msg.value = 0.7215836584153761;

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
    msg.setTimeStamp(0.8110669171233672);
    msg.setSource(5545U);
    msg.setSourceEntity(189U);
    msg.setDestination(20797U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6409776570235408;

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
    msg.setTimeStamp(0.6867392883418029);
    msg.setSource(12831U);
    msg.setSourceEntity(75U);
    msg.setDestination(23288U);
    msg.setDestinationEntity(72U);
    msg.value = 0.3719635736671181;

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
    msg.setTimeStamp(0.5444898222831034);
    msg.setSource(43060U);
    msg.setSourceEntity(61U);
    msg.setDestination(50584U);
    msg.setDestinationEntity(9U);
    msg.validity = 61253U;
    msg.type = 237U;
    msg.utc_year = 44400U;
    msg.utc_month = 173U;
    msg.utc_day = 204U;
    msg.utc_time = 0.9243166117997427;
    msg.lat = 0.19748350085685396;
    msg.lon = 0.33943810737550184;
    msg.height = 0.0035290039684356955;
    msg.satellites = 247U;
    msg.cog = 0.19011633801401218;
    msg.sog = 0.04411384742691449;
    msg.hdop = 0.5519496912108306;
    msg.vdop = 0.16028477410910913;
    msg.hacc = 0.40493916204927205;
    msg.vacc = 0.6071211388844789;

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
    msg.setTimeStamp(0.5712621168341466);
    msg.setSource(37101U);
    msg.setSourceEntity(113U);
    msg.setDestination(12997U);
    msg.setDestinationEntity(177U);
    msg.validity = 20148U;
    msg.type = 189U;
    msg.utc_year = 18425U;
    msg.utc_month = 182U;
    msg.utc_day = 48U;
    msg.utc_time = 0.8380248536857529;
    msg.lat = 0.014137061034018461;
    msg.lon = 0.7415458051543423;
    msg.height = 0.35312472650623905;
    msg.satellites = 163U;
    msg.cog = 0.7470215171526844;
    msg.sog = 0.4693044920430156;
    msg.hdop = 0.727657818469711;
    msg.vdop = 0.11388146610228755;
    msg.hacc = 0.24594981060088517;
    msg.vacc = 0.42157206600811004;

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
    msg.setTimeStamp(0.9229935464571869);
    msg.setSource(6050U);
    msg.setSourceEntity(141U);
    msg.setDestination(19237U);
    msg.setDestinationEntity(169U);
    msg.validity = 3659U;
    msg.type = 80U;
    msg.utc_year = 3261U;
    msg.utc_month = 103U;
    msg.utc_day = 60U;
    msg.utc_time = 0.374117751861315;
    msg.lat = 0.8016738229873046;
    msg.lon = 0.8612744974504294;
    msg.height = 0.051932845391574944;
    msg.satellites = 4U;
    msg.cog = 0.6867970100915083;
    msg.sog = 0.34669446561175865;
    msg.hdop = 0.15154164609764187;
    msg.vdop = 0.8704849031455182;
    msg.hacc = 0.5236336851767175;
    msg.vacc = 0.026265415252668345;

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
    msg.setTimeStamp(0.9097840775021288);
    msg.setSource(27191U);
    msg.setSourceEntity(180U);
    msg.setDestination(5990U);
    msg.setDestinationEntity(102U);
    msg.time = 0.9560805500621863;
    msg.phi = 0.28237555047338736;
    msg.theta = 0.5707506448667062;
    msg.psi = 0.728750689799043;
    msg.psi_magnetic = 0.8644480445915879;

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
    msg.setTimeStamp(0.6058963290664133);
    msg.setSource(12566U);
    msg.setSourceEntity(131U);
    msg.setDestination(56801U);
    msg.setDestinationEntity(214U);
    msg.time = 0.38887673554354907;
    msg.phi = 0.218146220722099;
    msg.theta = 0.023711339221603844;
    msg.psi = 0.2829481152310932;
    msg.psi_magnetic = 0.7060354337762252;

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
    msg.setTimeStamp(0.3837482650557704);
    msg.setSource(26744U);
    msg.setSourceEntity(48U);
    msg.setDestination(47721U);
    msg.setDestinationEntity(212U);
    msg.time = 0.224012232485868;
    msg.phi = 0.42710387944157047;
    msg.theta = 0.8070722026079468;
    msg.psi = 0.23966273769133783;
    msg.psi_magnetic = 0.5413870858641849;

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
    msg.setTimeStamp(0.674744661433208);
    msg.setSource(22706U);
    msg.setSourceEntity(34U);
    msg.setDestination(51126U);
    msg.setDestinationEntity(214U);
    msg.time = 0.30054130005960233;
    msg.x = 0.13614351287057258;
    msg.y = 0.4472096056204703;
    msg.z = 0.4567788125191058;
    msg.timestep = 0.05030051274924019;

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
    msg.setTimeStamp(0.1720018335578224);
    msg.setSource(40937U);
    msg.setSourceEntity(250U);
    msg.setDestination(5399U);
    msg.setDestinationEntity(107U);
    msg.time = 0.7875941447561292;
    msg.x = 0.06312168715297217;
    msg.y = 0.2298280747760859;
    msg.z = 0.42539100168040866;
    msg.timestep = 0.7188908512676982;

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
    msg.setTimeStamp(0.40149405929757576);
    msg.setSource(54452U);
    msg.setSourceEntity(213U);
    msg.setDestination(22539U);
    msg.setDestinationEntity(188U);
    msg.time = 0.2414736974612296;
    msg.x = 0.11793288897414922;
    msg.y = 0.09812423360830935;
    msg.z = 0.6639004087137719;
    msg.timestep = 0.6008996318433717;

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
    msg.setTimeStamp(0.989918381629198);
    msg.setSource(43577U);
    msg.setSourceEntity(46U);
    msg.setDestination(42209U);
    msg.setDestinationEntity(82U);
    msg.time = 0.4513307478973446;
    msg.x = 0.032702968343499283;
    msg.y = 0.6324209179411431;
    msg.z = 0.505822754272663;

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
    msg.setTimeStamp(0.12038810314896453);
    msg.setSource(1056U);
    msg.setSourceEntity(103U);
    msg.setDestination(24309U);
    msg.setDestinationEntity(12U);
    msg.time = 0.6502806839597671;
    msg.x = 0.018546935316747004;
    msg.y = 0.34006472922160447;
    msg.z = 0.06475142282328217;

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
    msg.setTimeStamp(0.5580084779575344);
    msg.setSource(64334U);
    msg.setSourceEntity(167U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(205U);
    msg.time = 0.6174362431712038;
    msg.x = 0.548900324685831;
    msg.y = 0.20750068324005078;
    msg.z = 0.3741749787512364;

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
    msg.setTimeStamp(0.6770623686517014);
    msg.setSource(21007U);
    msg.setSourceEntity(148U);
    msg.setDestination(24657U);
    msg.setDestinationEntity(62U);
    msg.time = 0.5649864796677978;
    msg.x = 0.0023825612978017885;
    msg.y = 0.004089155876193629;
    msg.z = 0.43721637565831983;

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
    msg.setTimeStamp(0.16491559480843554);
    msg.setSource(26803U);
    msg.setSourceEntity(185U);
    msg.setDestination(9573U);
    msg.setDestinationEntity(71U);
    msg.time = 0.8312946503058215;
    msg.x = 0.13583765676480863;
    msg.y = 0.046523889160170584;
    msg.z = 0.34808651969563564;

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
    msg.setTimeStamp(0.8005870817842465);
    msg.setSource(63284U);
    msg.setSourceEntity(160U);
    msg.setDestination(42637U);
    msg.setDestinationEntity(29U);
    msg.time = 0.05953459440415343;
    msg.x = 0.8927943365642595;
    msg.y = 0.11213165558793381;
    msg.z = 0.5953260175054109;

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
    msg.setTimeStamp(0.839836474967817);
    msg.setSource(43253U);
    msg.setSourceEntity(13U);
    msg.setDestination(24094U);
    msg.setDestinationEntity(126U);
    msg.time = 0.7355630217560108;
    msg.x = 0.8662903952887351;
    msg.y = 0.15612121655858258;
    msg.z = 0.08773390748858567;

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
    msg.setTimeStamp(0.838658069345704);
    msg.setSource(60926U);
    msg.setSourceEntity(142U);
    msg.setDestination(2574U);
    msg.setDestinationEntity(96U);
    msg.time = 0.4180550239879479;
    msg.x = 0.4609634508160866;
    msg.y = 0.11518602867267647;
    msg.z = 0.9617334677403229;

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
    msg.setTimeStamp(0.22757202722107606);
    msg.setSource(23019U);
    msg.setSourceEntity(231U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(246U);
    msg.time = 0.18409787977835246;
    msg.x = 0.24596057281062245;
    msg.y = 0.5653954871389026;
    msg.z = 0.8924068600713226;

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
    msg.setTimeStamp(0.14003133345128793);
    msg.setSource(10095U);
    msg.setSourceEntity(188U);
    msg.setDestination(50576U);
    msg.setDestinationEntity(173U);
    msg.validity = 189U;
    msg.x = 0.1086350762105529;
    msg.y = 0.9078846424514315;
    msg.z = 0.2595045992255137;

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
    msg.setTimeStamp(0.3806987793471762);
    msg.setSource(28685U);
    msg.setSourceEntity(1U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(236U);
    msg.validity = 91U;
    msg.x = 0.7374852736685709;
    msg.y = 0.5385510614240748;
    msg.z = 0.33073231037920725;

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
    msg.setTimeStamp(0.34272655566913224);
    msg.setSource(8299U);
    msg.setSourceEntity(98U);
    msg.setDestination(876U);
    msg.setDestinationEntity(219U);
    msg.validity = 143U;
    msg.x = 0.6279261607939006;
    msg.y = 0.42515260562410295;
    msg.z = 0.9265852272466258;

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
    msg.setTimeStamp(0.9962184949121233);
    msg.setSource(57504U);
    msg.setSourceEntity(73U);
    msg.setDestination(16321U);
    msg.setDestinationEntity(206U);
    msg.validity = 170U;
    msg.x = 0.6691632978559516;
    msg.y = 0.13965605449469598;
    msg.z = 0.3920464558469202;

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
    msg.setTimeStamp(0.8365733738775576);
    msg.setSource(60216U);
    msg.setSourceEntity(241U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(142U);
    msg.validity = 176U;
    msg.x = 0.22588347522427932;
    msg.y = 0.41253028428896765;
    msg.z = 0.7292277513036894;

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
    msg.setTimeStamp(0.6308188403637905);
    msg.setSource(33856U);
    msg.setSourceEntity(20U);
    msg.setDestination(4566U);
    msg.setDestinationEntity(14U);
    msg.validity = 179U;
    msg.x = 0.9619526987973285;
    msg.y = 0.1123034366600898;
    msg.z = 0.32231824429511313;

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
    msg.setTimeStamp(0.514057638016093);
    msg.setSource(10076U);
    msg.setSourceEntity(84U);
    msg.setDestination(42932U);
    msg.setDestinationEntity(141U);
    msg.time = 0.19541573584654048;
    msg.x = 0.8607824255703707;
    msg.y = 0.9916943610815124;
    msg.z = 0.9283317916499337;

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
    msg.setTimeStamp(0.9148379166586909);
    msg.setSource(25895U);
    msg.setSourceEntity(140U);
    msg.setDestination(34790U);
    msg.setDestinationEntity(166U);
    msg.time = 0.546754884858401;
    msg.x = 0.6370503737881335;
    msg.y = 0.9218402984268547;
    msg.z = 0.6121754784387881;

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
    msg.setTimeStamp(0.8427313429529608);
    msg.setSource(34026U);
    msg.setSourceEntity(211U);
    msg.setDestination(48300U);
    msg.setDestinationEntity(209U);
    msg.time = 0.7439386798336259;
    msg.x = 0.34034335964495466;
    msg.y = 0.43450868781231833;
    msg.z = 0.03261396485574586;

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
    msg.setTimeStamp(0.19335071559055295);
    msg.setSource(20857U);
    msg.setSourceEntity(159U);
    msg.setDestination(2175U);
    msg.setDestinationEntity(41U);
    msg.validity = 99U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.29327457756849495;
    tmp_msg_0.beam_height = 0.03344465749775016;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.915473999346614;

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
    msg.setTimeStamp(0.963852763394348);
    msg.setSource(53547U);
    msg.setSourceEntity(0U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(42U);
    msg.validity = 101U;
    msg.value = 0.032805911964477796;

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
    msg.setTimeStamp(0.5077145553178937);
    msg.setSource(27235U);
    msg.setSourceEntity(239U);
    msg.setDestination(20315U);
    msg.setDestinationEntity(198U);
    msg.validity = 19U;
    msg.value = 0.6135122204332631;

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
    msg.setTimeStamp(0.7206726702902146);
    msg.setSource(6410U);
    msg.setSourceEntity(148U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5935086476723954;

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
    msg.setTimeStamp(0.09081410484802077);
    msg.setSource(5058U);
    msg.setSourceEntity(88U);
    msg.setDestination(30361U);
    msg.setDestinationEntity(243U);
    msg.value = 0.10572757864332083;

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
    msg.setTimeStamp(0.3244909867571055);
    msg.setSource(12874U);
    msg.setSourceEntity(138U);
    msg.setDestination(62973U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5844028095616488;

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
    msg.setTimeStamp(0.5411186717633722);
    msg.setSource(9953U);
    msg.setSourceEntity(158U);
    msg.setDestination(8859U);
    msg.setDestinationEntity(141U);
    msg.value = 0.23534365970056426;

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
    msg.setTimeStamp(0.49224211883699787);
    msg.setSource(61783U);
    msg.setSourceEntity(112U);
    msg.setDestination(30065U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5213869475547633;

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
    msg.setTimeStamp(0.6537031916383605);
    msg.setSource(11675U);
    msg.setSourceEntity(183U);
    msg.setDestination(32013U);
    msg.setDestinationEntity(69U);
    msg.value = 0.6268198564962405;

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
    msg.setTimeStamp(0.5384521619711139);
    msg.setSource(12385U);
    msg.setSourceEntity(80U);
    msg.setDestination(48308U);
    msg.setDestinationEntity(102U);
    msg.value = 0.7709696120426528;

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
    msg.setTimeStamp(0.7128690044370407);
    msg.setSource(50964U);
    msg.setSourceEntity(112U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5334063370301626;

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
    msg.setTimeStamp(0.2180811244413977);
    msg.setSource(2059U);
    msg.setSourceEntity(3U);
    msg.setDestination(36447U);
    msg.setDestinationEntity(101U);
    msg.value = 0.37158604005788887;

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
    msg.setTimeStamp(0.24461112287916842);
    msg.setSource(39843U);
    msg.setSourceEntity(250U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9116402724137315;

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
    msg.setTimeStamp(0.2608241978372826);
    msg.setSource(42779U);
    msg.setSourceEntity(50U);
    msg.setDestination(58752U);
    msg.setDestinationEntity(241U);
    msg.value = 0.24391872233868095;

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
    msg.setTimeStamp(0.28899727851159707);
    msg.setSource(4573U);
    msg.setSourceEntity(185U);
    msg.setDestination(52272U);
    msg.setDestinationEntity(71U);
    msg.value = 0.013454994696821543;

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
    msg.setTimeStamp(0.391263177567685);
    msg.setSource(36004U);
    msg.setSourceEntity(10U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(61U);
    msg.value = 0.16912389389031413;

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
    msg.setTimeStamp(0.2928933433945291);
    msg.setSource(11595U);
    msg.setSourceEntity(128U);
    msg.setDestination(13516U);
    msg.setDestinationEntity(99U);
    msg.value = 0.07121921281578159;

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
    msg.setTimeStamp(0.3913918050463);
    msg.setSource(36235U);
    msg.setSourceEntity(35U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(168U);
    msg.value = 0.6104001859779059;

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
    msg.setTimeStamp(0.07443520329578057);
    msg.setSource(13988U);
    msg.setSourceEntity(85U);
    msg.setDestination(45118U);
    msg.setDestinationEntity(143U);
    msg.value = 0.06899155063776963;

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
    msg.setTimeStamp(0.5450229283837928);
    msg.setSource(52U);
    msg.setSourceEntity(253U);
    msg.setDestination(10290U);
    msg.setDestinationEntity(31U);
    msg.value = 0.6073450132276034;

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
    msg.setTimeStamp(0.4232147109794049);
    msg.setSource(29850U);
    msg.setSourceEntity(37U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(90U);
    msg.value = 0.27197734567802;

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
    msg.setTimeStamp(0.5350736524548685);
    msg.setSource(55838U);
    msg.setSourceEntity(248U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(217U);
    msg.value = 0.4545473129519668;

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
    msg.setTimeStamp(0.5313400803318905);
    msg.setSource(61422U);
    msg.setSourceEntity(58U);
    msg.setDestination(3915U);
    msg.setDestinationEntity(211U);
    msg.value = 0.43261522298792854;

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
    msg.setTimeStamp(0.20960481586433732);
    msg.setSource(13132U);
    msg.setSourceEntity(159U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(248U);
    msg.value = 0.03670151227228413;

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
    msg.setTimeStamp(0.03191254737498139);
    msg.setSource(22127U);
    msg.setSourceEntity(44U);
    msg.setDestination(44362U);
    msg.setDestinationEntity(226U);
    msg.value = 0.0081018441662708;

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
    msg.setTimeStamp(0.10411713513004583);
    msg.setSource(7283U);
    msg.setSourceEntity(10U);
    msg.setDestination(12169U);
    msg.setDestinationEntity(218U);
    msg.value = 0.7136905504606432;

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
    msg.setTimeStamp(0.9789236374554732);
    msg.setSource(2201U);
    msg.setSourceEntity(161U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8405354381752532;

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
    msg.setTimeStamp(0.7556966367468797);
    msg.setSource(29118U);
    msg.setSourceEntity(167U);
    msg.setDestination(28181U);
    msg.setDestinationEntity(214U);
    msg.direction = 0.6169042827600918;
    msg.speed = 0.46481549231106134;
    msg.turbulence = 0.28657425257222646;

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
    msg.setTimeStamp(0.0927697899714941);
    msg.setSource(52678U);
    msg.setSourceEntity(62U);
    msg.setDestination(12662U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.9388488885704551;
    msg.speed = 0.26607924628079827;
    msg.turbulence = 0.8853452661548602;

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
    msg.setTimeStamp(0.7391087646143183);
    msg.setSource(37523U);
    msg.setSourceEntity(248U);
    msg.setDestination(18739U);
    msg.setDestinationEntity(25U);
    msg.direction = 0.8581283595010565;
    msg.speed = 0.7354411710265144;
    msg.turbulence = 0.17921993788673862;

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
    msg.setTimeStamp(0.2348688928666992);
    msg.setSource(60337U);
    msg.setSourceEntity(63U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(87U);
    msg.value = 0.29833966232335407;

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
    msg.setTimeStamp(0.4666519483480833);
    msg.setSource(64854U);
    msg.setSourceEntity(233U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5824210095296648;

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
    msg.setTimeStamp(0.25190315281100617);
    msg.setSource(510U);
    msg.setSourceEntity(51U);
    msg.setDestination(23850U);
    msg.setDestinationEntity(184U);
    msg.value = 0.178779710106727;

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
    msg.setTimeStamp(0.5227149776380762);
    msg.setSource(19802U);
    msg.setSourceEntity(241U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(175U);
    msg.value.assign("IHMEPVOAAQQRBCGMLIOQOJ");

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
    msg.setTimeStamp(0.7641511198651311);
    msg.setSource(56562U);
    msg.setSourceEntity(207U);
    msg.setDestination(46684U);
    msg.setDestinationEntity(78U);
    msg.value.assign("LDLKOYOIJXPRUMZVSFNJLGTMLYWUMXVCXUGQRGUAOHIQYRZVSKXECLXBYZGNWCHCIVNSEIPDDGTNCSSPHZXDVQONPKTRJHOBKYTDMSTDNUW");

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
    msg.setTimeStamp(0.2764669838280013);
    msg.setSource(42848U);
    msg.setSourceEntity(198U);
    msg.setDestination(46642U);
    msg.setDestinationEntity(81U);
    msg.value.assign("ARQUGVFMTEWRUZAJKXOOVIBQKPOBR");

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
    msg.setTimeStamp(0.21332282015412518);
    msg.setSource(38131U);
    msg.setSourceEntity(104U);
    msg.setDestination(37734U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {-43, -104, 118, -118, -15, 30, 59, 4, 42, 13, 94, 63, -38, -72, 69, 44, -36, -72, -44, -83, -19, -20, 95, -11, 53, 25, -117, -30, 90, -107, 86, 13, 61, 24, 65, -91, -28, 53, -62, 117, 99, 36, -6, 97, 93, -41, 54, 28, -98, 27, 106, 20, 32, 18, 23, 44, 115, -95, -69, -35, -80, 123, 52, -13, 106, 10, 57, 8, 25, 108, 78, -60, 74, -116, -27, -34, -13, 74, 40, 65, -91, 82, 1, 83, -83, -82, 96, -36, -88, 48, -91, 109, 34, 41, 97, -77, 116, 32, -123, -37, -104, 92, -9, 108, 37, 107, -31, 12, 96, -8, -58, -21, -100, -120, -106, -99, 5, -29, 95, -98, -66, 6, -86, 98, 85, 90, -92, 12, 13, 69, 106, -119, -82, 2, 97, 111, 16, 67, -79, 0, 98, 78, -41, -79, -29, 115, 65, -53, 72, -65, 42, -13, 108, -39, -114, 0, 24, 55, -58, -85, -82, -103, -100, 80, 19, -85, 24, 90, -25, 106, 54, -60, -11, -53, 0, 102, 80, -7, -70, 71, 57, -52, -52, -91, 0, 0, 83, 45, -91, 52, 56, 54, 104, -13, 113, -17, -3, 71, -80, 10, 77, 67, -49, -66, -78, -57, -51, 16, 118, -127, -31, -2, -115, -123, 94, -24, 89, -34, 114, -16, -61, -84, 58, 29, 15, -57, -41, 106, 83, -88, -12, -97, 114, 19, -80, 50, 26, -111, 31, -106, 16, 71, 118, -30, -43, -23};
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
    msg.setTimeStamp(0.024663326745856917);
    msg.setSource(31758U);
    msg.setSourceEntity(79U);
    msg.setDestination(48148U);
    msg.setDestinationEntity(156U);
    const char tmp_msg_0[] = {84, -63, 123, -19, -7, -15, 115, -105, -34, 69, 60, -87, -30, -94, -40, 120, -5, -122, -118, 107, 4, -124, -110, 15, -86, 24, -78, -59, -113, 91, -73, 92, 69, 28, -53, 17, -31, -77, -59, 61, 83, 59, -101, -28, -51, -48, 98, -60, -31, 36, 69, -72, -116, -90, 49, 64, -84, 75, -87, -74, 111, -118, -32, -72, -16, -114, 90, -15, 30, -64, -16, -50, 61, 18, 93, 8, -97, -117, 75, -83, 11, 53, -110, 19, -66, 28, -48, 91, -93, -5, -10, 122, 74, 91, 72, -70, 116, 96, 69, -46, -116, 5, -105, 81, 68, -27, 89, 96, -99, 104, -19, 107, 118, 98, 123, 79, -27, -116, 117, -125, 46};
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
    msg.setTimeStamp(0.6575493916321254);
    msg.setSource(53137U);
    msg.setSourceEntity(157U);
    msg.setDestination(32614U);
    msg.setDestinationEntity(39U);
    const char tmp_msg_0[] = {-46, -50, -84, 15, -112, 81, 83, -126, 92, 124, 93, 58, -53, -16, 0, -101, 67, -45, -41, -52, -88, -15, -110, -47, -14, 23, -22, -30, 39, -123, 31, -59, 104, -128, -69, 97, 119, 84, -59, -116, -25, 61, -121, 43, 67, 51, -3, -44, 56, -62, 49, -9, 64, 121, 91, -16, -92, -120, -3, 112, 110, -36, -50, -68, 84, -8, 11, 108, 94, -88, -14, 83, -121, 105, 81, 19, 96, 32, -57, 70, -84, -124, 119, -123, 88, 86, -102, 118, 3, -24, 65, 32, 33, -33, 60, 8, -105, -9, -56, -32, 105, 102, 28, -28, -34, -48, -28, 87, -29, -70, 33, 41, 75, 108, 123, -101, -92, -64, 93, -64, 93, 27};
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
    msg.setTimeStamp(0.9857612768505364);
    msg.setSource(58461U);
    msg.setSourceEntity(121U);
    msg.setDestination(11063U);
    msg.setDestinationEntity(139U);
    msg.type = 252U;
    msg.frequency = 4265112748U;
    msg.min_range = 48622U;
    msg.max_range = 41198U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.40685620313728965;
    const char tmp_msg_0[] = {36, -95, -49, 105, -86, 108, 112, 65, 51, -14, -109, 66, 47, 31, 28, -20, 100, -54, 4, -89, -38, -79, -111, -49, 26, -58, 94, 50, -112, -47, 125, -66, -63, 25, -90, -65, 42, 11, 105, -59, -28, 74, 120, -77, 48, 115, -3, -50, -28};
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
    msg.setTimeStamp(0.42260669351418656);
    msg.setSource(8568U);
    msg.setSourceEntity(20U);
    msg.setDestination(13856U);
    msg.setDestinationEntity(38U);
    msg.type = 195U;
    msg.frequency = 1244392428U;
    msg.min_range = 885U;
    msg.max_range = 37648U;
    msg.bits_per_point = 70U;
    msg.scale_factor = 0.24103594700981956;
    const char tmp_msg_0[] = {75, 54, 70, -33, 89, -101, -10, 95, 105, 118, 27, 11, -75};
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
    msg.setTimeStamp(0.31784565106195417);
    msg.setSource(25151U);
    msg.setSourceEntity(209U);
    msg.setDestination(24326U);
    msg.setDestinationEntity(229U);
    msg.type = 63U;
    msg.frequency = 2115652687U;
    msg.min_range = 39590U;
    msg.max_range = 29357U;
    msg.bits_per_point = 245U;
    msg.scale_factor = 0.2838830426738571;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.10487649558360246;
    tmp_msg_0.beam_height = 0.4397442948466095;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {32, 60, -97, -43, -101, 102, 5, 13, 41, -75, -116, -46, -127, -115, -88, -40, 77, 117, -16, 107, 70, -83, 115, 58, -17, 65, 19, -22, 95, -91, -35, 24, 48, -28, 124, 39, 98, 40, 115, -14, 60, 67, 97, -86, -78, -15, 66, -50, 0, 94, -12, 93, 107, -119, 22, -128, -48, -18, 38, -96, 27, 76, 60, -69, -54, -62, 120, -93, 14, 22, -18, -47, 60, -104, -24, 30, 18, 76, -40, 32, 75, -95, -108, -119, 99, 19, -119, -28, 117, -40, 0, -93, -122, -33, 59, -104, -19, -74, 123, 44, -90, 94, 79, 122, 19, -120, -15, -74, -21, 12, -39, -69, 22, 94, 52, 124, 109, 9, 14, 117, -53, 45, 5, -11, -40, 48, 57, -43, 11, 85, 43, -85, -90, -78, -90, -33, -86, 60, 26, 12, -99, -29, 74, 90, 105, -34, 116, 1, -110, 120, 40, 84, -4, 86, 3, 110, -9, -75, -115, -79, -81, 43, -1, -117, 22, -58, -126, 65, 45, -58, -57, -60, -71, -45, 3, 70, -81, 5, -97, -93, 54, 52, 70, -54, 111, 25, -62, -114, 57, -111, -97, 13, -113, 118, 23, 63, -87, 60, 54, -57, -81, -127, -118, 31, -6, 109, -49, -81};
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
    msg.setTimeStamp(0.5109977901514087);
    msg.setSource(36510U);
    msg.setSourceEntity(60U);
    msg.setDestination(43760U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.7946024956934294);
    msg.setSource(61435U);
    msg.setSourceEntity(190U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.1499465682664195);
    msg.setSource(7442U);
    msg.setSourceEntity(177U);
    msg.setDestination(53722U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.04166481161766422);
    msg.setSource(14303U);
    msg.setSourceEntity(123U);
    msg.setDestination(37193U);
    msg.setDestinationEntity(44U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.9176495853096959);
    msg.setSource(22643U);
    msg.setSourceEntity(93U);
    msg.setDestination(36570U);
    msg.setDestinationEntity(116U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.5872851719390586);
    msg.setSource(22261U);
    msg.setSourceEntity(213U);
    msg.setDestination(43137U);
    msg.setDestinationEntity(161U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.9464475917568115);
    msg.setSource(19375U);
    msg.setSourceEntity(13U);
    msg.setDestination(14702U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7486268295591645;
    msg.confidence = 0.9149153435607521;
    msg.opmodes.assign("NKAWFYCFJOLBIQBUCUSZXVTXZMPSJKBSTXBEJOWZMVMWKMGAADEDMHMVYJXYWIMLOFWFCMGYQIPPBGCGELDFCFKCHIINSHQPXASEB");

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
    msg.setTimeStamp(0.32997714037071046);
    msg.setSource(2524U);
    msg.setSourceEntity(208U);
    msg.setDestination(45755U);
    msg.setDestinationEntity(226U);
    msg.value = 0.3832981914334146;
    msg.confidence = 0.13451767897771416;
    msg.opmodes.assign("BXRPVEQBMYHAXIFCDCMSUNUEIVIKCSJGAYBRZRIXALSTHLJDYSZUHRGOCSFZOQGYTWBGIQJWTBLPWNLASLGKOTZSTLHPGUSXUCLVVYQEIBKFZDTEESMBOKCYXQPMICALMJQARVGKNGYNLEQYHHREADZDXDXMNZCUYJFKFBDOQFUOHWZOMJZUOHTTVHDGPRRKFWVKQFAEDDNENIVJYUCFIVCFOPKSJBONXPWMWWGXXIWTJBPMQKTLPH");

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
    msg.setTimeStamp(0.2662017174713569);
    msg.setSource(52831U);
    msg.setSourceEntity(95U);
    msg.setDestination(55780U);
    msg.setDestinationEntity(26U);
    msg.value = 0.12075327071449193;
    msg.confidence = 0.7907842494073882;
    msg.opmodes.assign("UEOUJXAMMHUVMVASWHGPBKVEXIFLLHZQJOTMTTYYSASHMGIBPR");

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
    msg.setTimeStamp(0.6112620357237133);
    msg.setSource(29382U);
    msg.setSourceEntity(81U);
    msg.setDestination(1820U);
    msg.setDestinationEntity(96U);
    msg.itow = 2713251334U;
    msg.lat = 0.5431065578470093;
    msg.lon = 0.232116204183615;
    msg.height_ell = 0.11798146045907343;
    msg.height_sea = 0.7112213171102973;
    msg.hacc = 0.434644174504901;
    msg.vacc = 0.14427053458048755;
    msg.vel_n = 0.22883637796682088;
    msg.vel_e = 0.11270763667149952;
    msg.vel_d = 0.7754280692256525;
    msg.speed = 0.615385008954835;
    msg.gspeed = 1.0008032464203787e-05;
    msg.heading = 0.846306373041905;
    msg.sacc = 0.3265583497717407;
    msg.cacc = 0.7108126863430813;

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
    msg.setTimeStamp(0.9146373443981333);
    msg.setSource(52430U);
    msg.setSourceEntity(46U);
    msg.setDestination(58887U);
    msg.setDestinationEntity(38U);
    msg.itow = 2237120420U;
    msg.lat = 0.2888496325699613;
    msg.lon = 0.32201939994716944;
    msg.height_ell = 0.2218427654344256;
    msg.height_sea = 0.25652720481088587;
    msg.hacc = 0.9051874755916326;
    msg.vacc = 0.9562265500569889;
    msg.vel_n = 0.3822198003475854;
    msg.vel_e = 0.0026752733807885454;
    msg.vel_d = 0.4310509958712547;
    msg.speed = 0.9183709592428178;
    msg.gspeed = 0.06744709644703728;
    msg.heading = 0.6438952817408222;
    msg.sacc = 0.6749735722145779;
    msg.cacc = 0.20138353062368286;

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
    msg.setTimeStamp(0.9388455953896877);
    msg.setSource(43127U);
    msg.setSourceEntity(133U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(159U);
    msg.itow = 2932749715U;
    msg.lat = 0.3208145695943354;
    msg.lon = 0.7918272749830207;
    msg.height_ell = 0.5059553671966512;
    msg.height_sea = 0.1811121707194916;
    msg.hacc = 0.09109380815820634;
    msg.vacc = 0.7512377960891198;
    msg.vel_n = 0.9071749228056858;
    msg.vel_e = 0.402432124555256;
    msg.vel_d = 0.3002498541755574;
    msg.speed = 0.7515776333013549;
    msg.gspeed = 0.8007136583460435;
    msg.heading = 0.529912310680839;
    msg.sacc = 0.79859156520367;
    msg.cacc = 0.499697323242453;

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
    msg.setTimeStamp(0.31714068176426546);
    msg.setSource(57863U);
    msg.setSourceEntity(32U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(27U);
    msg.id = 184U;
    msg.value = 0.02117829014303607;

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
    msg.setTimeStamp(0.7095573509342591);
    msg.setSource(21948U);
    msg.setSourceEntity(100U);
    msg.setDestination(37806U);
    msg.setDestinationEntity(56U);
    msg.id = 99U;
    msg.value = 0.719173724495048;

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
    msg.setTimeStamp(0.9022992797106943);
    msg.setSource(22180U);
    msg.setSourceEntity(254U);
    msg.setDestination(31227U);
    msg.setDestinationEntity(239U);
    msg.id = 4U;
    msg.value = 0.5422005067386902;

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
    msg.setTimeStamp(0.2679068524857312);
    msg.setSource(59346U);
    msg.setSourceEntity(52U);
    msg.setDestination(45880U);
    msg.setDestinationEntity(182U);
    msg.x = 0.45071695245295706;
    msg.y = 0.12247245356802994;
    msg.z = 0.7212536477624729;
    msg.phi = 0.6392487687995202;
    msg.theta = 0.76136850008203;
    msg.psi = 0.7223015611858019;

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
    msg.setTimeStamp(0.7433636600697981);
    msg.setSource(65362U);
    msg.setSourceEntity(192U);
    msg.setDestination(33624U);
    msg.setDestinationEntity(205U);
    msg.x = 0.7888807121886794;
    msg.y = 0.20825209862256477;
    msg.z = 0.6941201484762295;
    msg.phi = 0.2361810078838592;
    msg.theta = 0.29398445454179545;
    msg.psi = 0.05940927034524002;

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
    msg.setTimeStamp(0.9087276233097147);
    msg.setSource(42990U);
    msg.setSourceEntity(74U);
    msg.setDestination(4236U);
    msg.setDestinationEntity(202U);
    msg.x = 0.05726068323721545;
    msg.y = 0.36157890786438773;
    msg.z = 0.0023872479908655375;
    msg.phi = 0.5851441502776136;
    msg.theta = 0.37136966651357084;
    msg.psi = 0.7549441935520955;

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
    msg.setTimeStamp(0.43045376912848043);
    msg.setSource(49612U);
    msg.setSourceEntity(101U);
    msg.setDestination(63145U);
    msg.setDestinationEntity(166U);
    msg.beam_width = 0.8832207210891269;
    msg.beam_height = 0.18698561037778638;

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
    msg.setTimeStamp(0.7818148758522057);
    msg.setSource(11066U);
    msg.setSourceEntity(185U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(17U);
    msg.beam_width = 0.3413915538598834;
    msg.beam_height = 0.2601343507092425;

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
    msg.setTimeStamp(0.8466914780984717);
    msg.setSource(36699U);
    msg.setSourceEntity(197U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(151U);
    msg.beam_width = 0.2221712902818973;
    msg.beam_height = 0.9119707958879107;

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
    msg.setTimeStamp(0.809488120181493);
    msg.setSource(58641U);
    msg.setSourceEntity(215U);
    msg.setDestination(31394U);
    msg.setDestinationEntity(184U);
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
    msg.setTimeStamp(0.2847341984485543);
    msg.setSource(10936U);
    msg.setSourceEntity(182U);
    msg.setDestination(4603U);
    msg.setDestinationEntity(193U);
    msg.sane = 201U;

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
    msg.setTimeStamp(0.4128397510120718);
    msg.setSource(48603U);
    msg.setSourceEntity(91U);
    msg.setDestination(46311U);
    msg.setDestinationEntity(5U);
    msg.sane = 205U;

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
    msg.setTimeStamp(0.0030639811944593864);
    msg.setSource(39510U);
    msg.setSourceEntity(125U);
    msg.setDestination(34216U);
    msg.setDestinationEntity(105U);
    msg.value = 0.026344789366968047;

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
    msg.setTimeStamp(0.15691415536806796);
    msg.setSource(41263U);
    msg.setSourceEntity(14U);
    msg.setDestination(22613U);
    msg.setDestinationEntity(245U);
    msg.value = 0.6858956014698683;

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
    msg.setTimeStamp(0.04716910421061116);
    msg.setSource(46945U);
    msg.setSourceEntity(137U);
    msg.setDestination(32614U);
    msg.setDestinationEntity(178U);
    msg.value = 0.002209275452784154;

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
    msg.setTimeStamp(0.062043559272612514);
    msg.setSource(4150U);
    msg.setSourceEntity(223U);
    msg.setDestination(65365U);
    msg.setDestinationEntity(26U);
    msg.value = 0.2685012723479582;

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
    msg.setTimeStamp(0.0063856500623203916);
    msg.setSource(35183U);
    msg.setSourceEntity(151U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5615251584456794;

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
    msg.setTimeStamp(0.996068534162858);
    msg.setSource(3267U);
    msg.setSourceEntity(223U);
    msg.setDestination(12256U);
    msg.setDestinationEntity(33U);
    msg.value = 0.20404410774006598;

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
    msg.setTimeStamp(0.2494654945671052);
    msg.setSource(36997U);
    msg.setSourceEntity(172U);
    msg.setDestination(11160U);
    msg.setDestinationEntity(229U);
    msg.value = 0.3453953669121608;

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
    msg.setTimeStamp(0.12133369759810808);
    msg.setSource(6449U);
    msg.setSourceEntity(218U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(68U);
    msg.value = 0.684258311357779;

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
    msg.setTimeStamp(0.947116574519532);
    msg.setSource(45865U);
    msg.setSourceEntity(101U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(169U);
    msg.value = 0.2702399525576249;

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
    msg.setTimeStamp(0.48522846690708876);
    msg.setSource(45855U);
    msg.setSourceEntity(243U);
    msg.setDestination(12757U);
    msg.setDestinationEntity(210U);
    msg.id = 0U;
    msg.zoom = 116U;
    msg.action = 230U;

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
    msg.setTimeStamp(0.03089723830039437);
    msg.setSource(1876U);
    msg.setSourceEntity(109U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(178U);
    msg.id = 115U;
    msg.zoom = 40U;
    msg.action = 228U;

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
    msg.setTimeStamp(0.010916734893306024);
    msg.setSource(22472U);
    msg.setSourceEntity(91U);
    msg.setDestination(54955U);
    msg.setDestinationEntity(233U);
    msg.id = 74U;
    msg.zoom = 244U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.8583939012009043);
    msg.setSource(52386U);
    msg.setSourceEntity(181U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(127U);
    msg.id = 135U;
    msg.value = 0.8296476515627729;

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
    msg.setTimeStamp(0.7363349695869476);
    msg.setSource(6215U);
    msg.setSourceEntity(44U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(182U);
    msg.id = 211U;
    msg.value = 0.4600678364979932;

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
    msg.setTimeStamp(0.00031027603010924665);
    msg.setSource(19613U);
    msg.setSourceEntity(168U);
    msg.setDestination(7662U);
    msg.setDestinationEntity(147U);
    msg.id = 32U;
    msg.value = 0.5005485888369068;

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
    msg.setTimeStamp(0.18419148355359505);
    msg.setSource(51252U);
    msg.setSourceEntity(204U);
    msg.setDestination(29213U);
    msg.setDestinationEntity(216U);
    msg.id = 53U;
    msg.value = 0.2129265095527182;

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
    msg.setTimeStamp(0.8974671549164199);
    msg.setSource(55615U);
    msg.setSourceEntity(60U);
    msg.setDestination(61760U);
    msg.setDestinationEntity(132U);
    msg.id = 15U;
    msg.value = 0.21490666381896273;

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
    msg.setTimeStamp(0.8857733398435451);
    msg.setSource(39786U);
    msg.setSourceEntity(63U);
    msg.setDestination(21387U);
    msg.setDestinationEntity(105U);
    msg.id = 7U;
    msg.value = 0.4046006290142662;

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
    msg.setTimeStamp(0.8594803895155385);
    msg.setSource(58754U);
    msg.setSourceEntity(5U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(207U);
    msg.id = 66U;
    msg.angle = 0.28800377208355477;

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
    msg.setTimeStamp(0.5487784580374896);
    msg.setSource(5787U);
    msg.setSourceEntity(54U);
    msg.setDestination(64265U);
    msg.setDestinationEntity(28U);
    msg.id = 17U;
    msg.angle = 0.020513354146784457;

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
    msg.setTimeStamp(0.23449549133181857);
    msg.setSource(61114U);
    msg.setSourceEntity(41U);
    msg.setDestination(52463U);
    msg.setDestinationEntity(191U);
    msg.id = 239U;
    msg.angle = 0.4607392204796221;

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
    msg.setTimeStamp(0.09997028596757906);
    msg.setSource(29218U);
    msg.setSourceEntity(14U);
    msg.setDestination(16223U);
    msg.setDestinationEntity(31U);
    msg.op = 48U;
    msg.actions.assign("EEBPSKJRHRIVLTXNYTBWHKLIYMWLSGFPKROBVDZDEKWDFMQWFECXDBKJPKDESORFXTCRMZIHEBGLEBWKGWZODZDTCCHRRCRDPTMINYWHSCHMXSYMUCHAYNBVLCZUQAOUIJQRGDOAXBSVAOYJYPUAQJPUNIPJZNYOELMAPFYDKAYIVSQWGXTQIUXMPQARCIACZJVKGNHBQZEXG");

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
    msg.setTimeStamp(0.2447406038309905);
    msg.setSource(11135U);
    msg.setSourceEntity(155U);
    msg.setDestination(29799U);
    msg.setDestinationEntity(90U);
    msg.op = 172U;
    msg.actions.assign("YLBZJPTXFMGXIAGOAUHQSEOEWOWCZBWQQVJPBQNTJFEDGSWBRCEPTYFGIHHQGQRFVRVOXKPVKKJHWVKUZUOEIPMSA");

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
    msg.setTimeStamp(0.5180331473899362);
    msg.setSource(18633U);
    msg.setSourceEntity(147U);
    msg.setDestination(34913U);
    msg.setDestinationEntity(220U);
    msg.op = 75U;
    msg.actions.assign("VAFFSHGTKZWEPXIZIMVCUNARVNVCELDUUXVFRMOXTSYNYTBVYPQVKCXPMCPFSHCABEQEPZFPLGPKRGHOJHELXJULSUNDGOOXHZXFIABMKAEQSWMGPUYXQDINXQODTKUBFMTDVYRWKRSQSBDJCIBZBBDTCNEFWPNEZQIZJEZMJIJUGLYDMXHSWQROENKTWCWURLAATDAILGTCZLKKPQNGJIWSGSBOJYAVWZQJVRLJTN");

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
    msg.setTimeStamp(0.978207661494562);
    msg.setSource(36870U);
    msg.setSourceEntity(78U);
    msg.setDestination(23318U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("LQVXYPIIMGASGTLRXJBYMRIFDOKVQLGLWYBLGWOPSUNCCVQJVSQTEYTBDDKUZJARSREKFEXSTPCTAEUSRMMURIHYCIWVUAUTZNAQYGAWOUFQBZIZN");

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
    msg.setTimeStamp(0.34215916822468095);
    msg.setSource(59706U);
    msg.setSourceEntity(7U);
    msg.setDestination(30317U);
    msg.setDestinationEntity(34U);
    msg.actions.assign("DTVFIHHJUFETPHXSABWKNGDEOMHKHTRXDNRYJRYDGIZVVAJEOPUGMVOMPTOBZJTVSAJWWNMLBKSXLLNHSMHPIYJMPIXWHRFAHKTYDMFQIGTTIUCVQJXVGCGYDOZNKQGWGHQNPIZKLYNEOMFZOCAUEVFPWDJZKWJCKZLPZWXKBU");

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
    msg.setTimeStamp(0.22981208335129955);
    msg.setSource(3402U);
    msg.setSourceEntity(177U);
    msg.setDestination(2498U);
    msg.setDestinationEntity(131U);
    msg.actions.assign("VGIMQUMLPHVYOKOPRGIPZZARFGCRFVVWNUYRCNCVYPYEAMRPPQTJLVPLJYBSHXZHUCKRLEXNHZTFUDAYFCQTTBKIWXALHIBZWSNIUSCRDONUNJJGECGMNKXLODHAITOGKVOBDJJEBDPJTJDMYHNQPZFRUQWHRFFLSNEDXMNSDUZCROTQQZXUWISJWWKSHGBMCXMQAEKOTVWQEODYLDLUOYBWTAKLAZSEBYHTXKEGSGXFCA");

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
    msg.setTimeStamp(0.5691861999361698);
    msg.setSource(1280U);
    msg.setSourceEntity(207U);
    msg.setDestination(48388U);
    msg.setDestinationEntity(95U);
    msg.button = 142U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.19802586509414388);
    msg.setSource(37504U);
    msg.setSourceEntity(92U);
    msg.setDestination(30236U);
    msg.setDestinationEntity(213U);
    msg.button = 210U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.89249182213321);
    msg.setSource(15823U);
    msg.setSourceEntity(97U);
    msg.setDestination(9561U);
    msg.setDestinationEntity(128U);
    msg.button = 49U;
    msg.value = 233U;

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
    msg.setTimeStamp(0.47964789988999257);
    msg.setSource(811U);
    msg.setSourceEntity(219U);
    msg.setDestination(63458U);
    msg.setDestinationEntity(208U);
    msg.op = 27U;
    msg.text.assign("NMCXLVTKJIHDTVOYZBVOPCQLBGONMTHGLQLXZCKBZIVUZKNIEGSYBWSRYONRVWRNXGRAKSMRCMHTMHVSFUWQDTYGOFQSONJHWRDCLCEZLGUKIGUITXFZRSCYDUKXNNOTSMLYVCI");

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
    msg.setTimeStamp(0.32372987328969816);
    msg.setSource(44715U);
    msg.setSourceEntity(172U);
    msg.setDestination(40946U);
    msg.setDestinationEntity(75U);
    msg.op = 238U;
    msg.text.assign("BDVYEHATXFVSUJMFHPMIJDHNMBCONPFMVCTRIHQEURFFREDYZFSRQWYRSLWOASFBXKKBDGHETNRZSQCTSJJIKLAHQCWEYEPJVLIGZOYRKFVJDOKCGOXUVKKMHSENYXZLMLZIGWAQYNZPTADWFGXLLVAVLTXNHXUOMNRGIKJPCUPENINBYAOVWOULACJBGPPSAZLUIORPHKSJUEXYMRZBWBDMDKPXCYQSTIWCBMIZE");

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
    msg.setTimeStamp(0.6614289063984988);
    msg.setSource(28233U);
    msg.setSourceEntity(110U);
    msg.setDestination(17228U);
    msg.setDestinationEntity(213U);
    msg.op = 189U;
    msg.text.assign("PHTXHWAHSYHBEJTMNQSNEVYXGXJZAZYHNSUQPKTVDFLEXLKQFOFTNPXWCCDDVMSDIJY");

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
    msg.setTimeStamp(0.30371204686123165);
    msg.setSource(50430U);
    msg.setSourceEntity(57U);
    msg.setDestination(12127U);
    msg.setDestinationEntity(10U);
    msg.op = 214U;
    msg.time_remain = 0.41077663352177085;
    msg.sched_time = 0.2267488868919465;

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
    msg.setTimeStamp(0.7849167755006763);
    msg.setSource(28912U);
    msg.setSourceEntity(229U);
    msg.setDestination(40800U);
    msg.setDestinationEntity(138U);
    msg.op = 59U;
    msg.time_remain = 0.48873937742177387;
    msg.sched_time = 0.5789748013687236;

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
    msg.setTimeStamp(0.9453702275262387);
    msg.setSource(39808U);
    msg.setSourceEntity(23U);
    msg.setDestination(5018U);
    msg.setDestinationEntity(222U);
    msg.op = 45U;
    msg.time_remain = 0.5310574763904055;
    msg.sched_time = 0.8272072527808013;

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
    msg.setTimeStamp(0.8765683174915);
    msg.setSource(14704U);
    msg.setSourceEntity(141U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(141U);
    msg.name.assign("OMYRDYEOXZGDOUBJAAKZINTMAFSOEYHBRVWDU");
    msg.op = 145U;
    msg.sched_time = 0.37387463173933644;

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
    msg.setTimeStamp(0.7029906604026938);
    msg.setSource(30193U);
    msg.setSourceEntity(30U);
    msg.setDestination(61200U);
    msg.setDestinationEntity(221U);
    msg.name.assign("UYULTPSIKVUBTVDVDENCDDKUKWVOJFBMEWBQORGJINSRYFHOXAOPLMHJTCOEPDWRHS");
    msg.op = 116U;
    msg.sched_time = 0.5043579546775915;

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
    msg.setTimeStamp(0.9470815273624094);
    msg.setSource(4497U);
    msg.setSourceEntity(185U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(26U);
    msg.name.assign("FVKMLXXIIQVILDEMWHDJFZSTXYQLPSZLPACSRMZARBMHCYADVHJTBHZLJLEFIUGSOXSEQEIUJZDPCGJQBGOYLPKBNKOLYNDNNDYUUTAHRJQMOCBATHTGRWGCWRPVHGKKDXOGZ");
    msg.op = 101U;
    msg.sched_time = 0.9600181144011768;

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
    msg.setTimeStamp(0.9738289755037044);
    msg.setSource(32804U);
    msg.setSourceEntity(24U);
    msg.setDestination(11606U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.47711333766094677);
    msg.setSource(18119U);
    msg.setSourceEntity(132U);
    msg.setDestination(12504U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.8752309370560031);
    msg.setSource(8871U);
    msg.setSourceEntity(106U);
    msg.setDestination(22521U);
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
    msg.setTimeStamp(0.022775970075506247);
    msg.setSource(16142U);
    msg.setSourceEntity(224U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(45U);
    msg.name.assign("VHXVCKIGAPRMBVYRFHWQHRIDAZBIOOOBOTGQVBLZTW");
    msg.state = 3U;

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
    msg.setTimeStamp(0.07082124776826948);
    msg.setSource(46810U);
    msg.setSourceEntity(58U);
    msg.setDestination(8273U);
    msg.setDestinationEntity(65U);
    msg.name.assign("DYHGORBMAVOBUFISUCWGBUVXTQASZBHGYZJBHDOXLQVMCKOUDUZTJRJTVZTEZNSUSUQOSHLJNPWXDWWHYQNZNMKRUXXKGYLG");
    msg.state = 139U;

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
    msg.setTimeStamp(0.020870079975289557);
    msg.setSource(39279U);
    msg.setSourceEntity(195U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(121U);
    msg.name.assign("SNFMSZRPPLNUXXZFRIPDREEXDMYNLVYTKCHBEIPNPLZBVHAYKQUQTLDWOEXTNEQITWGTOPFBGBKDSKBZHCHAMISBFJARGKHIRYXUOUUHCVHHOJCVYZTGWETTWUOXSGLQEKAXYSUGKGBBJRZXVNFTJIYMYRCHLNYVCYMCJQDZSGJMFNFAA");
    msg.state = 24U;

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
    msg.setTimeStamp(0.6553639502334871);
    msg.setSource(36776U);
    msg.setSourceEntity(17U);
    msg.setDestination(20348U);
    msg.setDestinationEntity(4U);
    msg.name.assign("XIPWNFLBEHICZPBJM");
    msg.value = 168U;

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
    msg.setTimeStamp(0.8225366539524371);
    msg.setSource(40578U);
    msg.setSourceEntity(23U);
    msg.setDestination(31201U);
    msg.setDestinationEntity(57U);
    msg.name.assign("IAZEKFIEZMPMPYASODWAHZMDSGQV");
    msg.value = 235U;

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
    msg.setTimeStamp(0.9500435371271905);
    msg.setSource(61629U);
    msg.setSourceEntity(172U);
    msg.setDestination(2282U);
    msg.setDestinationEntity(89U);
    msg.name.assign("YLTILNWZDZAHGTLZVXFIXFKVDJAUEHSUECVSDRMYWHXQTPKOSSEAVGPAXQWHZPHULYKYOJDVHJSTRNZQZIUWKWUEKMGIBKIDHBNKPQJSGRMPBSHWRCDVLKKAQOUCZCRXRERDMQWOTNMBYFCRINJDUCCWGAVLJGFXYPQXMGUZBSGVBGMBVL");
    msg.value = 40U;

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
    msg.setTimeStamp(0.2489379937910149);
    msg.setSource(59307U);
    msg.setSourceEntity(133U);
    msg.setDestination(8955U);
    msg.setDestinationEntity(37U);
    msg.name.assign("IQYCQUCFHPZZKIUVIGNDTCTZVSQVTHOBMWHDSCLYFMYKYJVAXEYQRARAZKWIFMPGKZXVEJJPSVMAQPWSSAVKORLMKEDCXTALEZPLURZXINPQLSIDBNWXRJFUGZPUHKBCRJBLXPVHNEQYDWDEKTEBOMVJUQNTXRXWIFGMLCBNGDTSEHACBGKWUOXYHSPMDSFFUYFBCFXGSHTNNZWLODFYNIBURQJTGOWORQICH");

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
    msg.setTimeStamp(0.1309534950104715);
    msg.setSource(10458U);
    msg.setSourceEntity(116U);
    msg.setDestination(31937U);
    msg.setDestinationEntity(138U);
    msg.name.assign("QUMLMOMZDUQPUQEPWCYDFPFNYMVHERBSIKKNIIAUGZMWHVHPQS");

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
    msg.setTimeStamp(0.8363950216882615);
    msg.setSource(32799U);
    msg.setSourceEntity(92U);
    msg.setDestination(64713U);
    msg.setDestinationEntity(14U);
    msg.name.assign("ZXVFBNZPURVVKSNOIPAZTYLGAHSIBQLUKZWGXTYFAHIFJOMOSZYOKJWBSUUDUMHFFFMYWWVATBZYHMJCQALKZIEFOPTZXGBUSDAMLEMLFDDLYXKCSXTMIKPFCNRLBWTHCJYUOSQDELREOAQTBMYJUDGQKJVRNIGBTCKCYVGCQCZPUJVVSNWIRPSNEVEDHRQEBZTEKNRUXVOHTKYA");

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
    msg.setTimeStamp(0.2096207265574721);
    msg.setSource(24334U);
    msg.setSourceEntity(66U);
    msg.setDestination(38821U);
    msg.setDestinationEntity(3U);
    msg.name.assign("HIAFUBIJTRHNRDTSMEEBQQTOFQUMNYOSUKVSRDEQJURRXUZXVWTZRMDCLJRFQUEIJDNLOEMVBGWYLJYQBLCULNRMKTSVHMHGSJGDQLKETJKONZPMPQCMHHQLORPFMBTXYETJIZKCVZGFZNIKWFMALCGWSNCBSBJHZGBAG");
    msg.value = 170U;

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
    msg.setTimeStamp(0.10841807275834958);
    msg.setSource(49372U);
    msg.setSourceEntity(186U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(164U);
    msg.name.assign("JVMTCYVZSGJSTZQWMEHQHCMTIROTQVAAOFHSGKVBRXKNWZQBAYSWBYMXLIPSGKZGCIWNIJNWGUCFFUFQSPDTDTKYDLSMKPAIVELGBLESZFEMUBWEQMEZUDTKLLKJOLVJXJPRNARXEOBYXTIIKHUHZEYNRGROVXCVAPURTALUGHFSHCNVWQHOLYBQDAMPIRWJFEKCPPBTSUFDDXDKZNNVOZZYHUMHPUGAOQIOFCCNECPLDR");
    msg.value = 92U;

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
    msg.setTimeStamp(0.37414492623676177);
    msg.setSource(16949U);
    msg.setSourceEntity(130U);
    msg.setDestination(29384U);
    msg.setDestinationEntity(233U);
    msg.name.assign("KYXRLORSVOJXAINUQBGAENTGWRHFWFQNGAELDDTWJSIPAZEVGWBZQKEYVGDNVYLKMTHPGYBJIXFUWXDPYCYVTAPTSEHKQMZKCKUNXBTKMSPEZKJRGDFWJKCZHOLCZBLLAYHIQMUNCACXEBMLZFILIX");
    msg.value = 94U;

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
    msg.setTimeStamp(0.3648098319139771);
    msg.setSource(19394U);
    msg.setSourceEntity(164U);
    msg.setDestination(54297U);
    msg.setDestinationEntity(254U);
    msg.id = 103U;
    msg.period = 966263413U;
    msg.duty_cycle = 2619724909U;

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
    msg.setTimeStamp(0.5386222739548495);
    msg.setSource(44129U);
    msg.setSourceEntity(254U);
    msg.setDestination(62309U);
    msg.setDestinationEntity(123U);
    msg.id = 111U;
    msg.period = 665402571U;
    msg.duty_cycle = 339412715U;

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
    msg.setTimeStamp(0.267281310877747);
    msg.setSource(49414U);
    msg.setSourceEntity(6U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(98U);
    msg.id = 137U;
    msg.period = 564307855U;
    msg.duty_cycle = 4211024507U;

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
    msg.setTimeStamp(0.3554721896332268);
    msg.setSource(12794U);
    msg.setSourceEntity(17U);
    msg.setDestination(45070U);
    msg.setDestinationEntity(92U);
    msg.id = 204U;
    msg.period = 2972952649U;
    msg.duty_cycle = 1789208479U;

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
    msg.setTimeStamp(0.7975498051229375);
    msg.setSource(60338U);
    msg.setSourceEntity(7U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(84U);
    msg.id = 183U;
    msg.period = 3615290911U;
    msg.duty_cycle = 2273564592U;

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
    msg.setTimeStamp(0.1331662859690348);
    msg.setSource(38108U);
    msg.setSourceEntity(46U);
    msg.setDestination(12169U);
    msg.setDestinationEntity(106U);
    msg.id = 166U;
    msg.period = 1733297880U;
    msg.duty_cycle = 1101308946U;

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
    msg.setTimeStamp(0.7593959489098124);
    msg.setSource(20530U);
    msg.setSourceEntity(72U);
    msg.setDestination(26313U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.9644049558121204;
    msg.lon = 0.700134355523193;
    msg.height = 0.22834636015989662;
    msg.x = 0.5601218109043193;
    msg.y = 0.8171839643809875;
    msg.z = 0.6131823303232729;
    msg.phi = 0.9500663494554341;
    msg.theta = 0.19948159807945431;
    msg.psi = 0.4266884430862927;
    msg.u = 0.5872301228912655;
    msg.v = 0.8007712783067238;
    msg.w = 0.24950579889977043;
    msg.vx = 0.26719973053793733;
    msg.vy = 0.022636474997310585;
    msg.vz = 0.9141632365615853;
    msg.p = 0.47599138721924494;
    msg.q = 0.42844440597091904;
    msg.r = 0.5420401583643709;
    msg.depth = 0.005454049232336167;
    msg.alt = 0.6149858168786313;

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
    msg.setTimeStamp(0.47524506486893314);
    msg.setSource(11942U);
    msg.setSourceEntity(38U);
    msg.setDestination(15420U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.42820726461571246;
    msg.lon = 0.5656933510569578;
    msg.height = 0.3884568168341104;
    msg.x = 0.2804880064667785;
    msg.y = 0.7971631578154967;
    msg.z = 0.9475276361154823;
    msg.phi = 0.9683203556068649;
    msg.theta = 0.516345978588469;
    msg.psi = 0.3977039060133375;
    msg.u = 0.728162248689263;
    msg.v = 0.7489135187775395;
    msg.w = 0.9058816562331256;
    msg.vx = 0.49877013282570415;
    msg.vy = 0.43787330841435834;
    msg.vz = 0.7458256628410809;
    msg.p = 0.44743091131028034;
    msg.q = 0.8724231480664889;
    msg.r = 0.3238297953617161;
    msg.depth = 0.9319539539026898;
    msg.alt = 0.43989929685769136;

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
    msg.setTimeStamp(0.2794689780399553);
    msg.setSource(10147U);
    msg.setSourceEntity(172U);
    msg.setDestination(45487U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.36049054663623525;
    msg.lon = 0.9749048155194678;
    msg.height = 0.9895988653224679;
    msg.x = 0.2291235171813295;
    msg.y = 0.6034899395442023;
    msg.z = 0.8181711020439187;
    msg.phi = 0.8108573856319907;
    msg.theta = 0.9233883549959433;
    msg.psi = 0.21851490722618594;
    msg.u = 0.21308656072928212;
    msg.v = 0.16523335122493066;
    msg.w = 0.5241584995490116;
    msg.vx = 0.8586379449568095;
    msg.vy = 0.8077365588144904;
    msg.vz = 0.9231358173605355;
    msg.p = 0.5092606407571095;
    msg.q = 0.8178631363271075;
    msg.r = 0.5431787750967646;
    msg.depth = 0.660603298790161;
    msg.alt = 0.17288965266197764;

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
    msg.setTimeStamp(0.004695961772477775);
    msg.setSource(59315U);
    msg.setSourceEntity(30U);
    msg.setDestination(60204U);
    msg.setDestinationEntity(77U);
    msg.x = 0.5210730386856279;
    msg.y = 0.8762072971258246;
    msg.z = 0.6856398110407823;

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
    msg.setTimeStamp(0.8355982361238787);
    msg.setSource(34646U);
    msg.setSourceEntity(157U);
    msg.setDestination(63137U);
    msg.setDestinationEntity(250U);
    msg.x = 0.3524350805349339;
    msg.y = 0.3188279270653649;
    msg.z = 0.5980840321931048;

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
    msg.setTimeStamp(0.6952726186129609);
    msg.setSource(13883U);
    msg.setSourceEntity(220U);
    msg.setDestination(56922U);
    msg.setDestinationEntity(32U);
    msg.x = 0.16315038700847762;
    msg.y = 0.5267424692830204;
    msg.z = 0.7355000510426749;

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
    msg.setTimeStamp(0.4235441290188551);
    msg.setSource(60680U);
    msg.setSourceEntity(184U);
    msg.setDestination(29791U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5816276377555912;

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
    msg.setTimeStamp(0.1704255487596883);
    msg.setSource(9027U);
    msg.setSourceEntity(101U);
    msg.setDestination(32867U);
    msg.setDestinationEntity(87U);
    msg.value = 0.21987249152638377;

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
    msg.setTimeStamp(0.14108893023611957);
    msg.setSource(61111U);
    msg.setSourceEntity(96U);
    msg.setDestination(63822U);
    msg.setDestinationEntity(140U);
    msg.value = 0.6861376289298426;

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
    msg.setTimeStamp(0.07925009871939082);
    msg.setSource(63022U);
    msg.setSourceEntity(220U);
    msg.setDestination(59525U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5329051179850095;

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
    msg.setTimeStamp(0.5592344850734845);
    msg.setSource(10524U);
    msg.setSourceEntity(147U);
    msg.setDestination(6326U);
    msg.setDestinationEntity(214U);
    msg.value = 0.13978868389927324;

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
    msg.setTimeStamp(0.7687631968266122);
    msg.setSource(50469U);
    msg.setSourceEntity(85U);
    msg.setDestination(32937U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6300775453721104;

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
    msg.setTimeStamp(0.9753681607611293);
    msg.setSource(59673U);
    msg.setSourceEntity(90U);
    msg.setDestination(12159U);
    msg.setDestinationEntity(111U);
    msg.x = 0.8133392461237862;
    msg.y = 0.9542224830252509;
    msg.z = 0.7007027270364232;
    msg.phi = 0.8892439738158331;
    msg.theta = 0.9695303602314398;
    msg.psi = 0.23425022593613043;
    msg.p = 0.572419953781065;
    msg.q = 0.9975308209480404;
    msg.r = 0.8679364635223328;
    msg.u = 0.4187993286224647;
    msg.v = 0.5219101511552943;
    msg.w = 0.31525258666342415;
    msg.bias_psi = 0.5987225947424191;
    msg.bias_r = 0.33255457984915127;

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
    msg.setTimeStamp(0.2506461112006144);
    msg.setSource(25848U);
    msg.setSourceEntity(22U);
    msg.setDestination(65160U);
    msg.setDestinationEntity(20U);
    msg.x = 0.6232553076314871;
    msg.y = 0.8714278344018661;
    msg.z = 0.6494491289999155;
    msg.phi = 0.8579753442801834;
    msg.theta = 0.31386706797883523;
    msg.psi = 0.9700774865728212;
    msg.p = 0.3865927356223585;
    msg.q = 0.43440444834808;
    msg.r = 0.9527506507488115;
    msg.u = 0.5004608688004586;
    msg.v = 0.3544853773451081;
    msg.w = 0.07053463374190594;
    msg.bias_psi = 0.19157383424064467;
    msg.bias_r = 0.8830477652048172;

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
    msg.setTimeStamp(0.452993276591666);
    msg.setSource(28140U);
    msg.setSourceEntity(176U);
    msg.setDestination(23455U);
    msg.setDestinationEntity(122U);
    msg.x = 0.16868190415850393;
    msg.y = 0.8963345175643279;
    msg.z = 0.6680592519539295;
    msg.phi = 0.5611233929543644;
    msg.theta = 0.30714576027658236;
    msg.psi = 0.278703235544268;
    msg.p = 0.4110943053260463;
    msg.q = 0.7092384457279681;
    msg.r = 0.44084036020984285;
    msg.u = 0.982811468264983;
    msg.v = 0.23053278087929285;
    msg.w = 0.9404956759366523;
    msg.bias_psi = 0.28546084528090254;
    msg.bias_r = 0.34109607477844406;

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
    msg.setTimeStamp(0.15222306917746276);
    msg.setSource(10149U);
    msg.setSourceEntity(48U);
    msg.setDestination(65017U);
    msg.setDestinationEntity(211U);
    msg.bias_psi = 0.050819960492020755;
    msg.bias_r = 0.7295840397929748;
    msg.cog = 0.04013400231510811;
    msg.cyaw = 0.5179320281252818;
    msg.lbl_rej_level = 0.30700002939135496;
    msg.gps_rej_level = 0.6788155359075643;
    msg.custom_x = 0.43485975550722145;
    msg.custom_y = 0.15375399100833187;
    msg.custom_z = 0.6455530228249811;

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
    msg.setTimeStamp(0.6486000852919991);
    msg.setSource(44381U);
    msg.setSourceEntity(43U);
    msg.setDestination(46336U);
    msg.setDestinationEntity(79U);
    msg.bias_psi = 0.9483135201274141;
    msg.bias_r = 0.48564552124345206;
    msg.cog = 0.6257261865803616;
    msg.cyaw = 0.7631048237899093;
    msg.lbl_rej_level = 0.7959811157903061;
    msg.gps_rej_level = 0.9048385844495594;
    msg.custom_x = 0.2538691436017382;
    msg.custom_y = 0.8823559825441393;
    msg.custom_z = 0.6754136665884075;

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
    msg.setTimeStamp(0.7405150622175021);
    msg.setSource(22682U);
    msg.setSourceEntity(125U);
    msg.setDestination(50984U);
    msg.setDestinationEntity(67U);
    msg.bias_psi = 0.7964292336230039;
    msg.bias_r = 0.41504912701946106;
    msg.cog = 0.1341871231428925;
    msg.cyaw = 0.4327829444866519;
    msg.lbl_rej_level = 0.3133938603486497;
    msg.gps_rej_level = 0.6774539984532186;
    msg.custom_x = 0.041347275990084476;
    msg.custom_y = 0.783240835736256;
    msg.custom_z = 0.2550068962256057;

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
    msg.setTimeStamp(0.17915979839801288);
    msg.setSource(56759U);
    msg.setSourceEntity(198U);
    msg.setDestination(58440U);
    msg.setDestinationEntity(247U);
    msg.utc_time = 0.6141520219747401;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.1267115713175445);
    msg.setSource(712U);
    msg.setSourceEntity(91U);
    msg.setDestination(1703U);
    msg.setDestinationEntity(239U);
    msg.utc_time = 0.3272649558295877;
    msg.reason = 223U;

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
    msg.setTimeStamp(0.059635112761216025);
    msg.setSource(26304U);
    msg.setSourceEntity(126U);
    msg.setDestination(3775U);
    msg.setDestinationEntity(161U);
    msg.utc_time = 0.7787487375122556;
    msg.reason = 184U;

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
    msg.setTimeStamp(0.7179471585862812);
    msg.setSource(37560U);
    msg.setSourceEntity(167U);
    msg.setDestination(21759U);
    msg.setDestinationEntity(249U);
    msg.id = 123U;
    msg.range = 0.9635045859649224;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.7551510759546656);
    msg.setSource(32331U);
    msg.setSourceEntity(35U);
    msg.setDestination(21903U);
    msg.setDestinationEntity(50U);
    msg.id = 84U;
    msg.range = 0.147790768066281;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.5066384460530888);
    msg.setSource(6640U);
    msg.setSourceEntity(129U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(206U);
    msg.id = 236U;
    msg.range = 0.7793644102825642;
    msg.acceptance = 200U;

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
    msg.setTimeStamp(0.6754943240656708);
    msg.setSource(27448U);
    msg.setSourceEntity(103U);
    msg.setDestination(27920U);
    msg.setDestinationEntity(238U);
    msg.type = 95U;
    msg.reason = 125U;
    msg.value = 0.008497084655569531;
    msg.timestep = 0.20401691893019713;

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
    msg.setTimeStamp(0.18510464122411174);
    msg.setSource(35238U);
    msg.setSourceEntity(6U);
    msg.setDestination(9910U);
    msg.setDestinationEntity(205U);
    msg.type = 69U;
    msg.reason = 18U;
    msg.value = 0.59559994798829;
    msg.timestep = 0.6073756275490151;

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
    msg.setTimeStamp(0.4667904862693859);
    msg.setSource(49903U);
    msg.setSourceEntity(56U);
    msg.setDestination(23542U);
    msg.setDestinationEntity(216U);
    msg.type = 27U;
    msg.reason = 54U;
    msg.value = 0.7974744962250576;
    msg.timestep = 0.3460398012045952;

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
    msg.setTimeStamp(0.5115271768231834);
    msg.setSource(52763U);
    msg.setSourceEntity(229U);
    msg.setDestination(50206U);
    msg.setDestinationEntity(169U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MNDKJPCHJTPZJQDROEVCHWNSOQKLQBVMDDJJQKWFROKYYTPXAKMAVCLWWFLNHUXGIWSIGZBEYAZYIKHYCODZCSUIZYXQINBQZXENAFCZLNHMPJVMNEKTLERVFUPRRXVBWVXTKHOAOCSIYHIDUHDVFLF");
    tmp_msg_0.lat = 0.501160971595722;
    tmp_msg_0.lon = 0.9690793444388396;
    tmp_msg_0.depth = 0.28515602345178337;
    tmp_msg_0.query_channel = 246U;
    tmp_msg_0.reply_channel = 240U;
    tmp_msg_0.transponder_delay = 192U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2182918202903923;
    msg.y = 0.733180805901507;
    msg.var_x = 0.5090106007950088;
    msg.var_y = 0.4387291139806081;
    msg.distance = 0.4561866624561689;

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
    msg.setTimeStamp(0.737088107609689);
    msg.setSource(38391U);
    msg.setSourceEntity(97U);
    msg.setDestination(63126U);
    msg.setDestinationEntity(248U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MBJWAILFYTUFHCNVNKZHJPJEWTE");
    tmp_msg_0.lat = 0.5836069550341584;
    tmp_msg_0.lon = 0.4611450589964816;
    tmp_msg_0.depth = 0.006071025934259677;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 151U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8072996276321857;
    msg.y = 0.7597101273963885;
    msg.var_x = 0.9974628198261093;
    msg.var_y = 0.8262373665615478;
    msg.distance = 0.6511936724912736;

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
    msg.setTimeStamp(0.596675582994819);
    msg.setSource(10209U);
    msg.setSourceEntity(183U);
    msg.setDestination(32756U);
    msg.setDestinationEntity(148U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PYFTINRTFGAFVGRRAIYDCLKMXQXDUWWZXZLMJTXGWPLNKQJFOTQOHSEFKVIUOQSM");
    tmp_msg_0.lat = 0.5280957966032623;
    tmp_msg_0.lon = 0.2849540311953609;
    tmp_msg_0.depth = 0.8732816026940539;
    tmp_msg_0.query_channel = 223U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.1828138643690097;
    msg.y = 0.7550318345751782;
    msg.var_x = 0.05440403590109688;
    msg.var_y = 0.15700569893547822;
    msg.distance = 0.23987990582076701;

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
    msg.setTimeStamp(0.7064319167655705);
    msg.setSource(55472U);
    msg.setSourceEntity(176U);
    msg.setDestination(9401U);
    msg.setDestinationEntity(25U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.796118789755814);
    msg.setSource(37771U);
    msg.setSourceEntity(46U);
    msg.setDestination(5305U);
    msg.setDestinationEntity(197U);
    msg.state = 36U;

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
    msg.setTimeStamp(0.25955027471972913);
    msg.setSource(27638U);
    msg.setSourceEntity(194U);
    msg.setDestination(18140U);
    msg.setDestinationEntity(223U);
    msg.state = 92U;

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
    msg.setTimeStamp(0.9859421682013586);
    msg.setSource(12121U);
    msg.setSourceEntity(189U);
    msg.setDestination(48576U);
    msg.setDestinationEntity(3U);
    msg.x = 0.6528029423299128;
    msg.y = 0.1824889455237516;
    msg.z = 0.16356973676438769;

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
    msg.setTimeStamp(0.8061253137885047);
    msg.setSource(12701U);
    msg.setSourceEntity(97U);
    msg.setDestination(17313U);
    msg.setDestinationEntity(23U);
    msg.x = 0.2145667176325483;
    msg.y = 0.05891816949097284;
    msg.z = 0.44403394150844666;

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
    msg.setTimeStamp(0.2647612202514109);
    msg.setSource(54112U);
    msg.setSourceEntity(78U);
    msg.setDestination(26084U);
    msg.setDestinationEntity(148U);
    msg.x = 0.2122037091294452;
    msg.y = 0.5900755776963862;
    msg.z = 0.8899304316981222;

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
    msg.setTimeStamp(0.8578043636401883);
    msg.setSource(59483U);
    msg.setSourceEntity(32U);
    msg.setDestination(64143U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8544462301101048;

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
    msg.setTimeStamp(0.6453796731276314);
    msg.setSource(36808U);
    msg.setSourceEntity(90U);
    msg.setDestination(38213U);
    msg.setDestinationEntity(2U);
    msg.value = 0.49151978739099256;

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
    msg.setTimeStamp(0.11569712069198057);
    msg.setSource(53299U);
    msg.setSourceEntity(57U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(102U);
    msg.value = 0.05281469648127146;

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
    msg.setTimeStamp(0.8615708584756322);
    msg.setSource(54478U);
    msg.setSourceEntity(29U);
    msg.setDestination(5270U);
    msg.setDestinationEntity(135U);
    msg.value = 0.14167775386665138;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.32704786772478567);
    msg.setSource(41098U);
    msg.setSourceEntity(95U);
    msg.setDestination(45987U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6635313320267442;
    msg.z_units = 194U;

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
    msg.setTimeStamp(0.5754664374029616);
    msg.setSource(59500U);
    msg.setSourceEntity(23U);
    msg.setDestination(13365U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9548179498068935;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.32695588725008096);
    msg.setSource(10566U);
    msg.setSourceEntity(20U);
    msg.setDestination(23492U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0023583538588424213;
    msg.speed_units = 131U;

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
    msg.setTimeStamp(0.5623009491865654);
    msg.setSource(51808U);
    msg.setSourceEntity(157U);
    msg.setDestination(48741U);
    msg.setDestinationEntity(56U);
    msg.value = 0.7218639908485627;
    msg.speed_units = 202U;

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
    msg.setTimeStamp(0.07185615019618052);
    msg.setSource(57632U);
    msg.setSourceEntity(183U);
    msg.setDestination(41140U);
    msg.setDestinationEntity(127U);
    msg.value = 0.17335656876470773;
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
    msg.setTimeStamp(0.8431815325710023);
    msg.setSource(26874U);
    msg.setSourceEntity(213U);
    msg.setDestination(25308U);
    msg.setDestinationEntity(248U);
    msg.value = 0.04081153095460266;

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
    msg.setTimeStamp(0.20569014293706223);
    msg.setSource(36040U);
    msg.setSourceEntity(171U);
    msg.setDestination(4964U);
    msg.setDestinationEntity(176U);
    msg.value = 0.7478651056635418;

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
    msg.setTimeStamp(0.6418171443306957);
    msg.setSource(52699U);
    msg.setSourceEntity(103U);
    msg.setDestination(8156U);
    msg.setDestinationEntity(200U);
    msg.value = 0.29456412736598725;

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
    msg.setTimeStamp(0.08372463665879348);
    msg.setSource(37191U);
    msg.setSourceEntity(212U);
    msg.setDestination(17043U);
    msg.setDestinationEntity(73U);
    msg.value = 0.09560927078464876;

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
    msg.setTimeStamp(0.6424404795827083);
    msg.setSource(45441U);
    msg.setSourceEntity(54U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(158U);
    msg.value = 0.597424727668915;

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
    msg.setTimeStamp(0.8729662073256511);
    msg.setSource(32329U);
    msg.setSourceEntity(58U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6840369379137191;

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
    msg.setTimeStamp(0.021324602243078195);
    msg.setSource(34674U);
    msg.setSourceEntity(143U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5243357676950492;

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
    msg.setTimeStamp(0.6068506681517496);
    msg.setSource(10439U);
    msg.setSourceEntity(213U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0727490731921705;

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
    msg.setTimeStamp(0.5985472932885239);
    msg.setSource(30679U);
    msg.setSourceEntity(236U);
    msg.setDestination(29286U);
    msg.setDestinationEntity(147U);
    msg.value = 0.884920882388574;

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
    msg.setTimeStamp(0.13716965266467296);
    msg.setSource(2589U);
    msg.setSourceEntity(207U);
    msg.setDestination(16153U);
    msg.setDestinationEntity(96U);
    msg.path_ref = 167204305U;
    msg.start_lat = 0.6178644755537009;
    msg.start_lon = 0.7731186130253839;
    msg.start_z = 0.7726302754535843;
    msg.start_z_units = 121U;
    msg.end_lat = 0.14973060974261432;
    msg.end_lon = 0.5911685377398946;
    msg.end_z = 0.506465640996386;
    msg.end_z_units = 141U;
    msg.speed = 0.10366864847215362;
    msg.speed_units = 56U;
    msg.lradius = 0.986696769537612;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.7488539440587456);
    msg.setSource(4225U);
    msg.setSourceEntity(134U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 3929812814U;
    msg.start_lat = 0.49455991735918503;
    msg.start_lon = 0.6748844626793178;
    msg.start_z = 0.6622152797484986;
    msg.start_z_units = 66U;
    msg.end_lat = 0.5077200848658173;
    msg.end_lon = 0.0457629250772188;
    msg.end_z = 0.5426372907808408;
    msg.end_z_units = 14U;
    msg.speed = 0.20951713529960103;
    msg.speed_units = 49U;
    msg.lradius = 0.4065836003172475;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.5427189962072728);
    msg.setSource(43032U);
    msg.setSourceEntity(30U);
    msg.setDestination(16419U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 1737837784U;
    msg.start_lat = 0.5357535060364199;
    msg.start_lon = 0.1068532119730562;
    msg.start_z = 0.9342195944877271;
    msg.start_z_units = 228U;
    msg.end_lat = 0.5223577960289069;
    msg.end_lon = 0.9120831723180136;
    msg.end_z = 0.9206749409841659;
    msg.end_z_units = 244U;
    msg.speed = 0.8031488778404304;
    msg.speed_units = 45U;
    msg.lradius = 0.4723338937583835;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.4248332542615032);
    msg.setSource(9569U);
    msg.setSourceEntity(81U);
    msg.setDestination(52797U);
    msg.setDestinationEntity(19U);
    msg.x = 0.004284712340553054;
    msg.y = 0.5178329330745736;
    msg.z = 0.7382151020983557;
    msg.k = 0.11900003498672884;
    msg.m = 0.5175742095944675;
    msg.n = 0.647068972107546;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.2784108825416378);
    msg.setSource(61184U);
    msg.setSourceEntity(11U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(23U);
    msg.x = 0.11828499378475554;
    msg.y = 0.715529069395059;
    msg.z = 0.5951523102918617;
    msg.k = 0.14977854035855975;
    msg.m = 0.3110485406720377;
    msg.n = 0.03311081928465098;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.8797831078201296);
    msg.setSource(22008U);
    msg.setSourceEntity(193U);
    msg.setDestination(54027U);
    msg.setDestinationEntity(42U);
    msg.x = 0.7671296232283263;
    msg.y = 0.31105914993995276;
    msg.z = 0.24628734665967322;
    msg.k = 0.7160225120548681;
    msg.m = 0.7591138322523653;
    msg.n = 0.6105185625048034;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.7518338429327561);
    msg.setSource(57028U);
    msg.setSourceEntity(20U);
    msg.setDestination(7419U);
    msg.setDestinationEntity(200U);
    msg.value = 0.02701639188387539;

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
    msg.setTimeStamp(0.6189815588556741);
    msg.setSource(55391U);
    msg.setSourceEntity(20U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(170U);
    msg.value = 0.2541563881812283;

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
    msg.setTimeStamp(0.609535490336991);
    msg.setSource(46792U);
    msg.setSourceEntity(142U);
    msg.setDestination(60264U);
    msg.setDestinationEntity(75U);
    msg.value = 0.5319314203806393;

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
    msg.setTimeStamp(0.11179905777649823);
    msg.setSource(56615U);
    msg.setSourceEntity(116U);
    msg.setDestination(28364U);
    msg.setDestinationEntity(1U);
    msg.u = 0.7308162046601031;
    msg.v = 0.3692497988721207;
    msg.w = 0.21597784243949547;
    msg.p = 0.6370205948658855;
    msg.q = 0.30467827125117286;
    msg.r = 0.9017834659783753;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.40752887959466855);
    msg.setSource(5053U);
    msg.setSourceEntity(59U);
    msg.setDestination(51522U);
    msg.setDestinationEntity(227U);
    msg.u = 0.9946933410920359;
    msg.v = 0.1251670009603859;
    msg.w = 0.3603931194095057;
    msg.p = 0.3502615001006616;
    msg.q = 0.4638013682723009;
    msg.r = 0.6937906069429433;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.20300577580705415);
    msg.setSource(37143U);
    msg.setSourceEntity(162U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(11U);
    msg.u = 0.7718314682243862;
    msg.v = 0.181877002463257;
    msg.w = 0.4013844125384044;
    msg.p = 0.09839390194815811;
    msg.q = 0.6307790126177744;
    msg.r = 0.2237733505607855;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.7901580986014287);
    msg.setSource(36504U);
    msg.setSourceEntity(59U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 824015408U;
    msg.start_lat = 0.199788552823573;
    msg.start_lon = 0.20810651304732197;
    msg.start_z = 0.6711727037846879;
    msg.start_z_units = 96U;
    msg.end_lat = 0.4152384308922189;
    msg.end_lon = 0.45370393430632383;
    msg.end_z = 0.02838415489453916;
    msg.end_z_units = 109U;
    msg.lradius = 0.3005683459072762;
    msg.flags = 107U;
    msg.x = 0.20649566384118;
    msg.y = 0.667648009325185;
    msg.z = 0.054979066575804536;
    msg.vx = 0.12016526913808734;
    msg.vy = 0.5580193743166146;
    msg.vz = 0.8885605726044737;
    msg.course_error = 0.5723687229135729;
    msg.eta = 28550U;

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
    msg.setTimeStamp(0.20493036618657046);
    msg.setSource(12470U);
    msg.setSourceEntity(100U);
    msg.setDestination(60045U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 2654548577U;
    msg.start_lat = 0.5001415721128017;
    msg.start_lon = 0.12866078186328678;
    msg.start_z = 0.9223058291978866;
    msg.start_z_units = 19U;
    msg.end_lat = 0.013803419435296282;
    msg.end_lon = 0.408927254699438;
    msg.end_z = 0.5688379202936102;
    msg.end_z_units = 99U;
    msg.lradius = 0.9513913496276247;
    msg.flags = 53U;
    msg.x = 0.2994207543421984;
    msg.y = 0.31129089978484037;
    msg.z = 0.4237748635799453;
    msg.vx = 0.926632055604352;
    msg.vy = 0.5010757239353733;
    msg.vz = 0.8450358243301168;
    msg.course_error = 0.5367651171026449;
    msg.eta = 55067U;

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
    msg.setTimeStamp(0.2610537492837466);
    msg.setSource(12641U);
    msg.setSourceEntity(226U);
    msg.setDestination(57347U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 3371351931U;
    msg.start_lat = 0.09907597677924984;
    msg.start_lon = 0.12357470831880157;
    msg.start_z = 0.8189354478873841;
    msg.start_z_units = 10U;
    msg.end_lat = 0.08756652758475891;
    msg.end_lon = 0.4320110358905086;
    msg.end_z = 0.7621250806311746;
    msg.end_z_units = 240U;
    msg.lradius = 0.21878175316721027;
    msg.flags = 111U;
    msg.x = 0.7520767914935547;
    msg.y = 0.45870304521151184;
    msg.z = 0.6600752334345626;
    msg.vx = 0.5232142405149309;
    msg.vy = 0.9401238194726144;
    msg.vz = 0.6767943018400499;
    msg.course_error = 0.38044825526037285;
    msg.eta = 27933U;

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
    msg.setTimeStamp(0.41340390241752145);
    msg.setSource(23473U);
    msg.setSourceEntity(29U);
    msg.setDestination(57477U);
    msg.setDestinationEntity(106U);
    msg.k = 0.4088110956501462;
    msg.m = 0.7949768086441898;
    msg.n = 0.6132040971489435;

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
    msg.setTimeStamp(0.8564806318421219);
    msg.setSource(53986U);
    msg.setSourceEntity(250U);
    msg.setDestination(58713U);
    msg.setDestinationEntity(172U);
    msg.k = 0.1480578672988968;
    msg.m = 0.6854912619825402;
    msg.n = 0.4698792140585103;

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
    msg.setTimeStamp(0.24727670128196944);
    msg.setSource(49318U);
    msg.setSourceEntity(162U);
    msg.setDestination(54722U);
    msg.setDestinationEntity(33U);
    msg.k = 0.21788485076132402;
    msg.m = 0.5311475034259308;
    msg.n = 0.9426868946398662;

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
    msg.setTimeStamp(0.1273315565202634);
    msg.setSource(11150U);
    msg.setSourceEntity(246U);
    msg.setDestination(10985U);
    msg.setDestinationEntity(220U);
    msg.p = 0.9985676253699465;
    msg.i = 0.7064953031036708;
    msg.d = 0.8487752978573482;
    msg.a = 0.46235145501870867;

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
    msg.setTimeStamp(0.21329148828337074);
    msg.setSource(17396U);
    msg.setSourceEntity(227U);
    msg.setDestination(17328U);
    msg.setDestinationEntity(253U);
    msg.p = 0.8776038311283813;
    msg.i = 0.11840173906786378;
    msg.d = 0.29359846094265163;
    msg.a = 0.7852668489826689;

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
    msg.setTimeStamp(0.7966460649017582);
    msg.setSource(55424U);
    msg.setSourceEntity(190U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(139U);
    msg.p = 0.32037747122741655;
    msg.i = 0.28738591655823953;
    msg.d = 0.2688402215233793;
    msg.a = 0.6945097327066757;

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
    msg.setTimeStamp(0.16311364068852718);
    msg.setSource(5747U);
    msg.setSourceEntity(223U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(28U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.7570607712859667);
    msg.setSource(34721U);
    msg.setSourceEntity(17U);
    msg.setDestination(22909U);
    msg.setDestinationEntity(55U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.7071263160765469);
    msg.setSource(15612U);
    msg.setSourceEntity(7U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(16U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.05907883421856386);
    msg.setSource(32053U);
    msg.setSourceEntity(77U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(5U);
    msg.plan_ref = 452695306U;
    msg.id.assign("BKDLXSABDDZRNIMUAVMEMAWNOYNVHUOOHIVPMVPNAEKCFAYUWZOJRGATZSHGUXVJUFPQMGHTRRPZXJWHJZBXFIPEYJSCWLBMAJFOSFNIRKBONVWJXTKDQLHCLYDGGICFCFTXQXNDWMEKOGKOVWQIOPUFLSGUXJQTFQTEVYKBWEZZQLWRSFDNCPBRSTEQECBDMDIQQPRJBVYDXPCTZYKRPLIHUYOIUGHVLXJLKCGCLYMNYRKZANTUITAASHES");
    msg.memento.assign("EIDERNTNPLOHSFMUWTJLIMYR");
    msg.timeout = 58238U;
    msg.lat = 0.9376303047878198;
    msg.lon = 0.9880687438018453;
    msg.z = 0.15653750969839642;
    msg.z_units = 124U;
    msg.speed = 0.5517524875920705;
    msg.speed_units = 80U;
    msg.roll = 0.8386112498949473;
    msg.pitch = 0.8375490611222706;
    msg.yaw = 0.8184057887928206;
    msg.custom.assign("CUHTLEKSCRIARQZOWBNCIEPGKNXSVAPYXVBEYZNZFUPADKAGWWJ");

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
    msg.setTimeStamp(0.502441957971856);
    msg.setSource(50088U);
    msg.setSourceEntity(12U);
    msg.setDestination(26282U);
    msg.setDestinationEntity(8U);
    msg.plan_ref = 1692717798U;
    msg.id.assign("HEGYXZAIHKGQVKSBMWOMBWIRT");
    msg.memento.assign("QFJASCFDGNYMLOXHUHONPOBYAPZPOFRKKURQEVGTLIANUBKBSAMJUIKKTTZXRGOBSQNQQLRZANJYLFVBWQEBJMKY");
    msg.timeout = 17430U;
    msg.lat = 0.2825233502086564;
    msg.lon = 0.27792271767213306;
    msg.z = 0.3833942951660828;
    msg.z_units = 102U;
    msg.speed = 0.7723722139404536;
    msg.speed_units = 28U;
    msg.roll = 0.8400926286169262;
    msg.pitch = 0.5400658104472006;
    msg.yaw = 0.8417987633584634;
    msg.custom.assign("YVQTHUUWYKNLBWNOYFDCDHAVPTSGHBWVQZRHQEGREKITNECEQBOAEEJXBHIGZLSDKRDGUITVJBIZFERRZPADCMBAICFNAPXXMZOTNDVPUOYGSMFMRXQVKCZCZJSSENUKQHLWOPWTOUMNGKLXLAVLAMABIOIKXCRHPNPDCJJP");

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
    msg.setTimeStamp(0.6361980672472226);
    msg.setSource(63144U);
    msg.setSourceEntity(12U);
    msg.setDestination(45387U);
    msg.setDestinationEntity(168U);
    msg.plan_ref = 3368858310U;
    msg.id.assign("SNXQEHQMUCLIGOFRNBWTAZSPDBQGZTPFHAYTZZSMULIJCKNOFCLELA");
    msg.memento.assign("QRURZCEXRDPWETYZSDMYFQIYQHKYLUTXVGOFCYWGFIYYVAPTOMMTHN");
    msg.timeout = 37644U;
    msg.lat = 0.15254405739832122;
    msg.lon = 0.50434136773605;
    msg.z = 0.45052487669879027;
    msg.z_units = 241U;
    msg.speed = 0.8438549717205248;
    msg.speed_units = 59U;
    msg.roll = 0.6275500859918163;
    msg.pitch = 0.2808137776816576;
    msg.yaw = 0.9226925157417475;
    msg.custom.assign("FEURVSHMGZBQVJWDCKYSH");

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
    msg.setTimeStamp(0.23002296565197633);
    msg.setSource(21772U);
    msg.setSourceEntity(23U);
    msg.setDestination(62420U);
    msg.setDestinationEntity(226U);
    msg.plan_ref = 812214400U;
    msg.id.assign("OJULBQLPFWAZUXRFMAKSRXMSOZVDCECKQBJJVHHIFEIOCZLVYQUPZBMEYXVUATGROWGJPFWIJMGQSNBYDTDNTIYHHAAIUJOBTJFRNGCEKJQQTKAJWCPDCUYKGPCUFELYLGCCUOWWSEFAODWGHGVWDBNRVMWSSZPFKMVMSXTTIXPUKDOMLLTBGTBYXHF");
    msg.memento.assign("OPHUGCZPMKYQZNEIICYQFRTEXRAJBRWGUUAUFOSTVWFZRUSTEQIRRVHJXICESWLBKDTSHMSWKYBOKJPBMRZZIOLEJXMLKAQD");
    msg.timeout = 54331U;
    msg.lat = 0.49447312347248795;
    msg.lon = 0.8378610919943574;
    msg.z = 0.7168013254978371;
    msg.z_units = 42U;
    msg.speed = 0.7225528183405973;
    msg.speed_units = 84U;
    msg.duration = 11883U;
    msg.radius = 0.07249260641011579;
    msg.flags = 179U;
    msg.custom.assign("CHEKUEPOYCUTMKEZISFYIPIMRKLNTTHSFRJVUOBGGEKNJUDGVACAFHINNI");

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
    msg.setTimeStamp(0.6912757523183567);
    msg.setSource(56029U);
    msg.setSourceEntity(108U);
    msg.setDestination(51783U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 2137327646U;
    msg.id.assign("CLWOVFDPYHJCSCJTMHWIEKBBGOWMSELDCVFGNMJOGMGEZVLOKTRPVXYYJRQZYWUKZEGZUSANMEBSKXRDGJBKANIUTGDUHKTHIPVHUPCQIOPTZWAIQQQZB");
    msg.memento.assign("KYGGHATXXFLUOKDZUZXMNOEQEVHNRFBGROLHHLPRLHLMHYORBDFAXZDTDFOJHZMCYAQTCCOKJXJCELCMSDUCYLJYZMCJYMPKALJSRPAPBIUWVNSJRPNWWLOGTXHXMSVAZGQYFFXUUWQPAVVJGIBUSGICVCWJFZTWRABTNGUP");
    msg.timeout = 26498U;
    msg.lat = 0.30041771673436923;
    msg.lon = 0.8446412568186203;
    msg.z = 0.009540035306543349;
    msg.z_units = 96U;
    msg.speed = 0.5716172289988776;
    msg.speed_units = 226U;
    msg.duration = 10643U;
    msg.radius = 0.9137700534318611;
    msg.flags = 68U;
    msg.custom.assign("ZEDETJWMAXPKMXYIZQXKTLEXVKOCRNIPGQCRBEZUVATGTCHEQPVAMQLSVGAVLYBZAWTMUFOGNFDMKTNBPSHDSFSOLJZTNCXMJAXOCHLFMKBVUXUSRFHUBDSXJIUYNRYFSVSJITWZHDRYJZGYWQCHENDLCDLBQRUTQPEQRNBXGLWUWAVKOMJ");

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
    msg.setTimeStamp(0.027816108283880148);
    msg.setSource(33349U);
    msg.setSourceEntity(72U);
    msg.setDestination(42595U);
    msg.setDestinationEntity(38U);
    msg.plan_ref = 1840435081U;
    msg.id.assign("SODEFNGZTYWCGDHCQEMMDGKZJGZSQIRZJKLAAYLOYVUKIUNFTCXTLZXBTOOROLJAFTEWYINRUKRXDQVPFNVEYJDGAJURPYPOFKVSHWNADKNMRVLPIBKMNBYIEQVCRCZGCWUQSVMNQQFETMFCWZIVNXYANHLCJBWGAOKSJTUKSAULXSBPUTFEPHWYUMGIALJHVLYS");
    msg.memento.assign("AKDNFUIXKYOKPUZHRWHMLACXUGMTGADNLXJJQZOOUCNGNAGYAJTQIFOXPEXHMFNSCPFGZSTLRSACVKIRQTWQFRFFJTNYIHBVSVPLUULPYJSECIDEBIQVVZOZOXCMUAARMOSDQRBQFHWWIGOGHONMOJRVGZPQHJJUWNPKRJMTQXHIPSBEZCECZVUSWNKBDSWHYY");
    msg.timeout = 61197U;
    msg.lat = 0.5275147208979543;
    msg.lon = 0.4263392357039677;
    msg.z = 0.3160356815810512;
    msg.z_units = 182U;
    msg.speed = 0.027561289736083072;
    msg.speed_units = 216U;
    msg.duration = 34509U;
    msg.radius = 0.24417027426864701;
    msg.flags = 173U;
    msg.custom.assign("ROEYMHSVFLHOTERYKLMPITGETLRGBNZSBYPMAJULXQBTMOXSUAAWLTXALUPGLIGZVWXDAUCWXGGWDHIBHNVOGFJJBWTSUMQNJEJU");

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
    msg.setTimeStamp(0.9256595166695561);
    msg.setSource(32806U);
    msg.setSourceEntity(92U);
    msg.setDestination(41458U);
    msg.setDestinationEntity(43U);
    msg.plan_ref = 1722905625U;
    msg.id.assign("YMDKLVNMZIJQJYBMFRCQNDXZAHNNKKAYBPSYOJKOISFTLPHUINIGEZKDBJXBGWSYQHUJDPBPYHLAMJPEVNFZVJHGZDNROWDUBERMXLHOUWFOZQUOJKLUECOPAERBHLYWGLGCXVGGLWTLRASZAKIAKVKHWIDAFCQOMQRQEXBREURZGPETXQCSMRSNMFXITTHZAITC");
    msg.memento.assign("MIHSDAEPAODXPFTAZWUBRTPELURKERQMZJJAHANTDSAFPGPQJJYLTRTHIWSRGYCYZGNTKUBNZDVPJNQBVFFNXKCCIEWLCBKLSKBZECVHJGEYIBXBPMQONUEHSUMXOVQ");
    msg.custom.assign("RQMEEVCKFYLNGAFYQZZVHAMNNVIQDWKGSEEKHRFHKFMXDRZQEWNSMDZTYGUHCOZWQBNZSAFPXISYDVVIFYBTCEPXGLKDTTOQLHEABJRPOOJGAUQYAXUPKLATWNCLRTPIGBC");

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
    msg.setTimeStamp(0.8910671554071525);
    msg.setSource(45734U);
    msg.setSourceEntity(237U);
    msg.setDestination(46229U);
    msg.setDestinationEntity(11U);
    msg.plan_ref = 3829210612U;
    msg.id.assign("IRXBYIQKWPVOHNCVNEEZNTBRIOEPPKBROFHPOUMBSYIWIRQHWPUOTAQLDSNJYWHSZCVGEDVEGPVAYTGRDWIUIFSNSWXAWVZCMHIBLJFNCFMAFKFRCXPNVQASFYJZDHLPCQGQATZPUYDGSLYIBZCJQFOKRYMKEYKBFTLLXEUQKXEDPMHOBMJXZCZNUELXMGTZ");
    msg.memento.assign("HEHHXUZBHJHUBOUXVIVEQPLAAYPEQRTTMDGSAWSWMNNN");
    msg.custom.assign("ECAHYQWYPCUXVCDVSKBIAJCKUGFROIODWJFYSYTNFKOSYNITFSXDDPUPATXSHPDFUOFIFACOEJHGTDSMLWNLSTCKVBSQCPGZXQKWRZWZM");

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
    msg.setTimeStamp(0.8805450813095306);
    msg.setSource(53253U);
    msg.setSourceEntity(253U);
    msg.setDestination(8218U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 2599672273U;
    msg.id.assign("KSFQUDYBJPIZLBDBYSVYPHWBZABTRJLMWQLLNAVXUOGRYDXCSRMHAUGZFNQRXOXHGNUHWEIYDRMDWTOUIKIHVONWVMAHZYKOSBZTJGCXNISVUWAWOXFEZPDSNHFMYLUMSPQFREHTOFISDVCLZHLJRIVNJDWKAXPNEPECRUPRGFJENIJCEGYOCCDTLQTLVFMPTMBXIZFKYEJQ");
    msg.memento.assign("FSZNFYPLPNLRLFGNZCJHNIMWYJYYQCGQEYDZRVEBWJSHZGDPHKVRCROUQJEMMATKJYBXMZOHKXLLWHOCSQQPTPAWUCDXDXKITPBTVXEJRYVHPUBWIICSTOWVNEVDNHVODSKBHFBHMNAESFJZQNBKFSQPIMPZULVOZAIFATLFTMNBXGXSEZRXUMIOUYGKWALUUQSRJOKAEAGLKFDINXWYEEIUBRSQRQ");
    msg.custom.assign("QLUFPIEALGOGRXTOEVCPPSCISBXOWMKFYJMZQXEFSZLTBAWV");

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
    msg.setTimeStamp(0.5446615924311761);
    msg.setSource(12613U);
    msg.setSourceEntity(37U);
    msg.setDestination(55793U);
    msg.setDestinationEntity(6U);
    msg.plan_ref = 2835804000U;
    msg.id.assign("DKRAJETEXKTFYCANGIUDCNORAJIDHSIMOLVQWVOTYDVRGQZMXUBHNEXHQAJRGIUKKXPVMRZGCDZRZCSHWBLEKMDYYFNHIIBJSMBTGMEAARVQSKYBLFZHLAATQFMXGXLPNQZKBHCGDUWXSEIJGJPPLOLNMDYBKTFDJY");
    msg.memento.assign("RQHVNZCLGYLEXKTIQMSJWPVMRSJDBYKSDESWYGBQMFYBIMCEXKASCYOUCM");
    msg.timeout = 58507U;
    msg.lat = 0.2328404988213002;
    msg.lon = 0.9270352148012708;
    msg.z = 0.8708523593087285;
    msg.z_units = 220U;
    msg.duration = 3721U;
    msg.speed = 0.6352484553041453;
    msg.speed_units = 85U;
    msg.type = 99U;
    msg.radius = 0.6980820544974141;
    msg.length = 0.10372551150433829;
    msg.bearing = 0.3496857140249705;
    msg.direction = 0U;
    msg.custom.assign("NIDWETOJZYLORHNRMCMBUNPXWGQCDHNWXSJCUBPNTKABKBEHGPHRWLEGGVAQSXYPCZOQAOHKHXYQBZZWCGYMIVXFAOZXYZZYPMJERDWJWVDKIQCEFQGSGQLVFPPKHJAQVIKWMXCTTILNYGUJFMULMUTBGXJFZJYSNPXFBSIDVNOMSLPHRRRFASAGAFLUCVWJWEAUIHCTVITEBKLKURFIHDMXDQVFDTELOZRONY");

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
    msg.setTimeStamp(0.9897166221072435);
    msg.setSource(17448U);
    msg.setSourceEntity(40U);
    msg.setDestination(44495U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 1098101926U;
    msg.id.assign("LYIQRKTWSMIBOGZ");
    msg.memento.assign("SAZXQKUFUNNXINTDBCUMGTIHHKXDZNHLOMAMPKUXFJVEWHJLMJDSEQTSMGGAVAZCYXOUEEGFREAQTTP");
    msg.timeout = 64161U;
    msg.lat = 0.42276091984884523;
    msg.lon = 0.6181790389408642;
    msg.z = 0.6840450340200839;
    msg.z_units = 59U;
    msg.duration = 16385U;
    msg.speed = 0.5288314939433536;
    msg.speed_units = 242U;
    msg.type = 72U;
    msg.radius = 0.7220752299700134;
    msg.length = 0.48173152591444723;
    msg.bearing = 0.9172713681148436;
    msg.direction = 159U;
    msg.custom.assign("SYGRPOKXCMFLPICSSUANAHKYXUDIQMUBJSEUENVADKBNSSRNDGWFGSPMBJOXCKWBNVMJXAEADFSVBVCLFLHOJRTIPZBMLCFIMXTVKRDWIZXYQTZVUGYRGVQYAJTDLFHPHCBWJTTHELPIA");

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
    msg.setTimeStamp(0.5978900424147062);
    msg.setSource(5758U);
    msg.setSourceEntity(96U);
    msg.setDestination(2796U);
    msg.setDestinationEntity(130U);
    msg.plan_ref = 3508657283U;
    msg.id.assign("RGPXJRESIWFCKGUEICXVVREHPHMFBSZBUIOCOALWTHBI");
    msg.memento.assign("VKDTBAFFLJEVOIHMYICVCGJBIKUQSHXXNEOSPYGQMIZOQBVQZULCJRKOZQWFPFWZWUQZGVRHBEXLHMAOESGTRYLIEIHXCRLZRYGWUDFDMVM");
    msg.timeout = 59818U;
    msg.lat = 0.9839058757958937;
    msg.lon = 0.2856211286987751;
    msg.z = 0.7392122705236442;
    msg.z_units = 78U;
    msg.duration = 49723U;
    msg.speed = 0.0921463042650017;
    msg.speed_units = 99U;
    msg.type = 179U;
    msg.radius = 0.057433719565963326;
    msg.length = 0.33940750715987755;
    msg.bearing = 0.789434052512391;
    msg.direction = 189U;
    msg.custom.assign("IRWYRBZUJYKFN");

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
    msg.setTimeStamp(0.8178426313118982);
    msg.setSource(29107U);
    msg.setSourceEntity(103U);
    msg.setDestination(64804U);
    msg.setDestinationEntity(37U);
    msg.plan_ref = 2120918007U;
    msg.id.assign("UHWQYPEAOCTQBOPSDLCRAKENZBWKGDJJPLKSMMXVOTK");
    msg.memento.assign("NPEISGEVFMFAOZHMBYMOHMTNCTUIEYSOFSOSDNHBTKAPXWLYNQGEVOBHZCJXESJJZNZSOTJTQNRTHDUUDLRTCEQUYFESRHSPXCUWLIACXBLGEPRWPNYZBNJGVWIXSNWHQMWKKCIXHJXCLZGDDYUMAXPRLUQBIQVDQMAIWVDXLWLCGFOOTPPFNVKO");
    msg.duration = 53011U;
    msg.custom.assign("HHBOFLCIBVMRNKEPPYTCBJVSOHUAYGAXGICYGGPEENUQDBPFNXIXDGXUKZULERVCTKMINRJLDKAEPZBEJYBQLLDHFVUAWISLWYOQSIQCQTZOQUATDCWHOKDFR");

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
    msg.setTimeStamp(0.6934448620734686);
    msg.setSource(48931U);
    msg.setSourceEntity(67U);
    msg.setDestination(61413U);
    msg.setDestinationEntity(94U);
    msg.plan_ref = 2877413799U;
    msg.id.assign("SZPZVYVRQWUMJMJVFCNCJRTDLMOQPURONEBNTNEHDHBFXPKAJFNDSHLYHRBUQEJSXTVZCPSAQRTUCZDNZOFKREOOPQBXWFQNZUTIAYPFWHAMKGAXPKBJUOOXYVRGBHRIMOUYXWGEZBGILKSSIEEVCILM");
    msg.memento.assign("CAAJACQMOXLBGRRNWDJDMBKWYZYXHEILVZXZWUSWYYNIGWITVNGSGWLSDYQYZSOVZDKZTNLCDVOIYPRBNSKHONHOEYUQHIHEAPSCFENAUEVQPTFRTBGPGGJFHLEWBMSTAKCDFEYBBRMZOJNLJWPZPCXCUWKFEJFMYKVAQQOHFULBJQLXPTGTQIXPKJGUXIRZSCURQLRMNPFKNXEHDJJMSFFEOAIMGDCHVDWIMLRAOUMSVQDTVUAHPTC");
    msg.duration = 40331U;
    msg.custom.assign("PYOVMRZJWVQZOXPSMDIDFWKWEKXCUBECLSAIGFYGUDYVXQTAGSNDKPVVXSLRWDLCJEIWKQLNYQSPQCDZMOMARZFXERVNCQIDTTPUBCNPCPFBHMLSJTHPJIUYXOGBZJDEUGTGQSYTSJUAPBKQCZONOGMXYSJWDFZVEGNVWZLLITDGZXHOSYIV");

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
    msg.setTimeStamp(0.7207801816499985);
    msg.setSource(58606U);
    msg.setSourceEntity(214U);
    msg.setDestination(37784U);
    msg.setDestinationEntity(12U);
    msg.plan_ref = 2743643427U;
    msg.id.assign("TLWLNDRRKPLBTTUKUZQXHBVXEFGKMYKMNITUEGESYHOQGCRCUAYQORTXDPBXAIGCSISQDUYQJTXNRMOVMERARLKAVQCWKGWHPGHJCCXXSWNBDOFYOLWZNVVWIOJMTQEOIHMDJXIZGPQHHOOYEVRELDZPNP");
    msg.memento.assign("DSOWXUXOINXFY");
    msg.duration = 2548U;
    msg.custom.assign("OBRYFQAHDARMBKCZIXKEDTRKIHUJPCLUYOPSWLQMYESYDJTXKOVYLLLKFWQAVQSRIDCUMDKNATSGSBRPSUKOVSMGSMVN");

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
    msg.setTimeStamp(0.290244637174468);
    msg.setSource(9993U);
    msg.setSourceEntity(153U);
    msg.setDestination(40151U);
    msg.setDestinationEntity(159U);
    msg.plan_ref = 1791296328U;
    msg.id.assign("OVTOPPKHANNNJCQQKNFGKWVVJRPLIWVSNKOXPXBXDMGHDPQCEYJVZFIDSNBCROTMLMKEEMBSYUPUCTEZHFDLDQQUCWCSRQHYZGJFQUHYFRLZMVOEKGMZTGZMXO");
    msg.memento.assign("NBVTPCLVWJZFHWMGDMRYGLJOBPEQXOXJASPJBIMIAWSBHILTQEXIXAJLPQXKNQOONUXSALJEQTBQUGKHAWNKWLQCBRKDEXJIAYKTQWDHYGMOSSHSCVSNYYKHUTTRNCEJXSHZFWEURMVZBTNIRYVNMCJCFZZZWNYYIBKTUEBFWWPRTGZVFYCPZECHPRDAOUFMVMUUDOEKBSANCCIPTIFHPKXRFGLAZLDDJESLGVVLOAZPRDGDUYQRFXDIQUMG");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.13456174871677506;
    tmp_msg_0.z_units = 168U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50038U;
    msg.custom.assign("ITFJMVVZAZMKFKXINCYPRDRJCADNHOLDS");

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
    msg.setTimeStamp(0.5267809937461165);
    msg.setSource(7035U);
    msg.setSourceEntity(183U);
    msg.setDestination(8661U);
    msg.setDestinationEntity(192U);
    msg.plan_ref = 2994752431U;
    msg.id.assign("OSGBUBLYEOGTCNIJIWKFVSSBHTFCOCKNMWVENFXAZLQEHNZCZDPJKHGIZLWNLJYRFEPYRGFPDSQHCNRHODZERVAZRALAUSMXPJWIJM");
    msg.memento.assign("PDNYNJVEWUHVOCYUMWBASMPGSSWLWAPAH");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.061009498321683564;
    msg.control.set(tmp_msg_0);
    msg.duration = 6087U;
    msg.custom.assign("HGZVBFKYSANKFOHLRTHHENPMYDVVOLDFPTEFIKVQJJMBUPBEMVUIRHWBWOGIQEDDGDJHABOMEUABIAYXVUAXRVGEBRJPZWCUEGDMKXDRJSRZJCGWFXZKWPSMQZLFFZQGTPUOAKJZOSXCYCOWTEUPFDKKPYITXOBNIXOLCLSUAJNCNTFKJAHVHHUGRSSNXLIWIZQYSIRCYLWGTENRNTKMSDPALQFYUBSIVLMQTWWMEZTYQQVORX");

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
    msg.setTimeStamp(0.1582109497804992);
    msg.setSource(55267U);
    msg.setSourceEntity(248U);
    msg.setDestination(15111U);
    msg.setDestinationEntity(93U);
    msg.plan_ref = 3022094685U;
    msg.id.assign("NWCUGYVBURNQBJCHDGZGQCZDLDXTXHYCHFPUPVNZEAFILPJBGFDBHTWMSUPRSKFUEDVNONEIAIXKIUXERLTXHZMYJDHRPVOMQBGSGBJQYOUYGKLPWRQRIFBWYKMTBAOHWZTJIWRVPAAEJOBMNTNRTALJDQXBSPKVEXAFJXCZOATVCEILVRKSPYDNCSFUXKIKKDLKMSVQTIWZST");
    msg.memento.assign("ZCETVRFMFPCRLKKNFJSJJWKSYSYQCUCYNCKZGTWOTISVXOXAEY");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.13204305504919234;
    tmp_msg_0.speed_units = 15U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30227U;
    msg.custom.assign("NLBTTRFMCHXMHZAUZYDQOGSBQLZONBWTSTMWMYWIKINLKGVUCRSSDLIAXAIEDNJCDBYEXGELYAVJOGQRMAQSCHOAFRZAHNIPDIBRKUEBTCPYZZMYXVORXTGPEZHHLBHTGQKNM");

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
    msg.setTimeStamp(0.8605020097412445);
    msg.setSource(21622U);
    msg.setSourceEntity(94U);
    msg.setDestination(31161U);
    msg.setDestinationEntity(74U);
    msg.plan_ref = 2812992344U;
    msg.id.assign("VEPKYMRZPBSIRZMCLVZHXSHHDRMSRLTZGBQOVZWKSSYRFOSAUDVQNBUDIKHJNWXDCOXNLBARWBNWCZPSAGCCHBEXDMQQEOJLKNFNIGUIKBGFTHRMTOLLHQNPAPO");
    msg.memento.assign("XXJSTUDLTON");
    msg.timeout = 2010U;
    msg.lat = 0.222317203370189;
    msg.lon = 0.731738426332961;
    msg.z = 0.6335436213380072;
    msg.z_units = 159U;
    msg.speed = 0.23448995064090716;
    msg.speed_units = 97U;
    msg.bearing = 0.9730925967370782;
    msg.cross_angle = 0.6135187081301975;
    msg.width = 0.2582120333262792;
    msg.length = 0.3265090382604343;
    msg.hstep = 0.8610702047302784;
    msg.coff = 172U;
    msg.alternation = 25U;
    msg.flags = 33U;
    msg.custom.assign("CKUQHVWYHQAY");

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
    msg.setTimeStamp(0.5520328034502329);
    msg.setSource(51561U);
    msg.setSourceEntity(36U);
    msg.setDestination(22236U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 1280374529U;
    msg.id.assign("UCZORBRPHEAYHZHPOSNYLQTGIZTDWXLNVJKLIRO");
    msg.memento.assign("UBEASSTINND");
    msg.timeout = 20566U;
    msg.lat = 0.9210854704823352;
    msg.lon = 0.23210153578204284;
    msg.z = 0.514707413881762;
    msg.z_units = 164U;
    msg.speed = 0.5074459887795202;
    msg.speed_units = 117U;
    msg.bearing = 0.6215540108530304;
    msg.cross_angle = 0.556054782718623;
    msg.width = 0.8853314793456348;
    msg.length = 0.8589811365493821;
    msg.hstep = 0.26875069730436885;
    msg.coff = 252U;
    msg.alternation = 2U;
    msg.flags = 247U;
    msg.custom.assign("ZYLYXWTDYORTDBKZONCQRQSDJKRRJXIIOCSOEZZFETVJVABACKBQNYEKRHESSAWYYNTEGTRMHBJOOAQMLCQMHPFWUHFJXFAAMLTRQGPDJDXRIIQMIKBSZCGDUTQAOWMNEPNXKFVVHXJUGJNEBDULVBVWXZYBWUUCCLGLFHZLSXEMPZZWLUOLHFEDGJIG");

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
    msg.setTimeStamp(0.7816136210990181);
    msg.setSource(58501U);
    msg.setSourceEntity(141U);
    msg.setDestination(14821U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 3845165193U;
    msg.id.assign("IPDYBSOXXTEUGFCWYPTNRKVUFQLIIPPERRILUEAZIMQTDWNVOMZESUCMAJXQNUJGJNXBTEBFNYAMJLDASEUWDVWBQSJY");
    msg.memento.assign("AQKFQXZOZGXRHDGVNRTPGAPYTKBLCIXUAGPCGTLYATMUNEILWJXUMOYCQIAWMMOSWUFINCTGRDLVBSUZKIQBEXCZRMDFDVFXXREWLTOMNWSMQAOKREJTUFZHHRKSKXHOHBWBESZLBFKUAWSPJOIUNQLBOVDMZVPYSEUJPHFYLWVOJDEBJDKGVTDQPBNJNKEICCVAZBFLYQOQHD");
    msg.timeout = 44718U;
    msg.lat = 0.8610336728111596;
    msg.lon = 0.4074469101387115;
    msg.z = 0.7120868834031239;
    msg.z_units = 211U;
    msg.speed = 0.7656701391956856;
    msg.speed_units = 16U;
    msg.bearing = 0.028346097003605242;
    msg.cross_angle = 0.24373623410901968;
    msg.width = 0.923970268566575;
    msg.length = 0.01436165071509199;
    msg.hstep = 0.10590525438506493;
    msg.coff = 231U;
    msg.alternation = 9U;
    msg.flags = 9U;
    msg.custom.assign("DFRPQMZGXUICDPJOJVWZTEEGEWSNEAFWTWXVMPXXXTNMHBOIYLE");

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
    msg.setTimeStamp(0.7968377948731338);
    msg.setSource(8935U);
    msg.setSourceEntity(38U);
    msg.setDestination(27512U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 1583161639U;
    msg.id.assign("DQYNDPNJUQMATHKMDPPXGTJOWUGSNUICBDMFVXJPHRLCBDVUSSRILIBYQZRWUCVREYQNRLYCZXWHQTVSMFCBJEVZOAZPTTL");
    msg.memento.assign("ZIDBURKPXSHRGZJFAVUVCTDRWOMJIOJPMRHCTVLEUSTWMLE");
    msg.timeout = 34230U;
    msg.lat = 0.005215469619643476;
    msg.lon = 0.6509730480227947;
    msg.z = 0.049575381372987115;
    msg.z_units = 172U;
    msg.speed = 0.3477746852249475;
    msg.speed_units = 167U;
    msg.custom.assign("KCDXSGOXDHUAHEBKKQZEABBUSCPCFHIWFZANAPTNJYONIKOVZIDSAFVAZXWTWRDXQDSDMZLKHSJRUAUVGPHQYGPYLNBVRJCXEYMTFJEUVPLIPIMCPAVBJKDELWNGAQGBUWGTYZIQGVNCRLVFOERKHFLCHXULRFEQRQTGOJKI");

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
    msg.setTimeStamp(0.4324906888999238);
    msg.setSource(38444U);
    msg.setSourceEntity(76U);
    msg.setDestination(19441U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 1410938591U;
    msg.id.assign("VVPZFICFAFGWQYUXPNBGGIPORAQXRPXRXOLXVQLJNKANOAWAQSEORVKFEQULBKVDGTNXYXUUQDGUZVZWHNGIPDJYFZQCKXKMEASZOEZECCGZLBUZYROVVXIUYWCWIIKHHRXMHSESDCYYW");
    msg.memento.assign("WHKDGSUNKGGVOVSIKGIPDVPJGXIRFFFZRYBYXVTEXXSZNKZFUHFRLCWLDTBASAHXMQTSHLUADNFEZVPITTUNMVDZRQRWJOCMEHHMXBWZOQLMNWHCBGCQCUYFQLCLSWKIWOXRRDVQZFSKYUTYMCWMTPNNPFCUEZGJPBMQEJJXYHWDJUAKZBYOWLKSVKIPTTTAOEQEBSPOAQNPEJXBVVNDIOASJIYUCOKUFXOCIADGGGMLRHYZBRALIABQLEJN");
    msg.timeout = 10064U;
    msg.lat = 0.6956109842316893;
    msg.lon = 0.43108641526411184;
    msg.z = 0.248756406078793;
    msg.z_units = 63U;
    msg.speed = 0.9908226531428137;
    msg.speed_units = 151U;
    msg.custom.assign("LXWBWSXMZNMUWGLZXJFOLYUPYAKRYBQLZCKHEZKMFDTXJSRTZONBRGTKNWKQQIUAGKKHDLDNAAIYHRVVWOYDMWCVJVACXPOJ");

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
    msg.setTimeStamp(0.2527956868072271);
    msg.setSource(29108U);
    msg.setSourceEntity(69U);
    msg.setDestination(9033U);
    msg.setDestinationEntity(207U);
    msg.plan_ref = 360362136U;
    msg.id.assign("SDEGNXOJFUTTFEBQIZKIXAACXADHRGSDCOPBWMVJJWHMVOQFKBADHMCDZDHEMJFLQZALECKUVGUFRKXSKJQYXINMGOXJXKYSWUKKHOOWQIJKQHVETMNEUPDNSNXWYMLBWFGYNWZYTPQPLSPVHHSSIMCLZORTAJLAGGIRCGZZERMSTQBILTRPBPFKWXQCFFPCBNROTCROHD");
    msg.memento.assign("FSPWVPKTTUTJITIZJWEGZOQTVHYGFYTPVEBLFHDRRADOICNEESBVQFSRDUVRNNFIDXUJJOBYNJEPQUSMRNFWIGIXJFFESGRBGFYXNZEPRKAJOIRVHKPQLKHRDWABGWGHUVACAHAWXLHEVAQYLKPTCCQDZIUQKB");
    msg.timeout = 55709U;
    msg.lat = 0.5690531764876374;
    msg.lon = 0.07977665244338605;
    msg.z = 0.8160711363774283;
    msg.z_units = 115U;
    msg.speed = 0.8652520083460977;
    msg.speed_units = 11U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9433405956248639;
    tmp_msg_0.y = 0.14385545013358203;
    tmp_msg_0.z = 0.7852852114624944;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YODXQHSSOOHTLKETBZXCLIHKAIUMNECECAGQBWJXSXJNWGSICBRJVGEQFIDADWGRIHULUMEDXNQZBZXUVMSBRXLQVWZKJPDACOGLXRMZJBVOXHWLSSUCSAMVTBQDTPJVHKNBWORREJWIFFYTWSEMFZMDEYYOKCCUKYPTTLWMJZFNTIUPVXYEVRADADBZLQQHQAKKEPFPSZKUMPVAUNCYTYHFKGLNGQDCYVPOJMRPIGGUILRAYNFFZOFROWP");

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
    msg.setTimeStamp(0.20196135061033316);
    msg.setSource(31869U);
    msg.setSourceEntity(129U);
    msg.setDestination(4007U);
    msg.setDestinationEntity(69U);
    msg.x = 0.11745350410208522;
    msg.y = 0.6424537593893507;
    msg.z = 0.3824652014068405;

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
    msg.setTimeStamp(0.8353143787047803);
    msg.setSource(47778U);
    msg.setSourceEntity(229U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(117U);
    msg.x = 0.10690396186873452;
    msg.y = 0.7655833780243718;
    msg.z = 0.5998859241062988;

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
    msg.setTimeStamp(0.6442258409065968);
    msg.setSource(9082U);
    msg.setSourceEntity(211U);
    msg.setDestination(39715U);
    msg.setDestinationEntity(211U);
    msg.x = 0.33836117472093996;
    msg.y = 0.9285599166586553;
    msg.z = 0.6287852178682791;

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
    msg.setTimeStamp(0.5103652045905446);
    msg.setSource(44458U);
    msg.setSourceEntity(148U);
    msg.setDestination(14380U);
    msg.setDestinationEntity(222U);
    msg.plan_ref = 3304049946U;
    msg.id.assign("QZYDIICYBPNUXOURBFBTCZRWNWUZIHKOXVXMUQKCCYETASXJAVDRTIRKVXQYZJZWWPNEESCZOYUTKDVFLSDNDCMRPTMZTZMJEPVEUSYPNHAFKKMOXTJGMAOKQRIOUGTJZYIMQQCHVESJPUOLFCAYKMLQNWABPNSVBTBLARYDEFHASDFEAIZLDHLWGGPPLSWOWHVNRSIIGXRHRGBWGNVFKQMCGVLJXXBD");
    msg.memento.assign("FIMOSBGXLLJOOCFRXLIXUKPRRAQYUMLCNSSRWAHTJZBIEIHTYMAXARNJTBCHDUEJFTSVSZONKXIGDNZELMQIQOEHFCGZPCAEGPOSEPLXRBCHISXPUAOLHPDVYVMKNDJFZVWSPQTH");
    msg.timeout = 39520U;
    msg.lat = 0.3129627839711665;
    msg.lon = 0.08413921007679515;
    msg.z = 0.4434271729710023;
    msg.z_units = 39U;
    msg.amplitude = 0.5318462717074034;
    msg.pitch = 0.48376663075931914;
    msg.speed = 0.12494648683635123;
    msg.speed_units = 254U;
    msg.custom.assign("BMQUSTQNRKDAELKANNMDFTWUFCVKZUBAOHBCZXIYYZUQHJJPFUGBIXOBGZIGTTZLYCGEKORMBJIBRBRMCVHXCFVTVTKKIIYIIVKNDFUH");

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
    msg.setTimeStamp(0.9087412900886258);
    msg.setSource(62243U);
    msg.setSourceEntity(8U);
    msg.setDestination(55435U);
    msg.setDestinationEntity(153U);
    msg.plan_ref = 229544764U;
    msg.id.assign("WARVPKATEZEJCDGTCBJMJBNMUBGELFTHWHURYIVINOQEOMHAOAAPMPNUXQYWICJIVMKOXGDPOISXRFQBQZITJQHDOVWEDJWLVNGAZWDKVVZUCWUSSHXDNPSYSDSMTYRXZARJWZPKLGZYMCYFIRVUVFU");
    msg.memento.assign("LMCOBKDKJWHEXVVWMGMPUFCRXVZMTRCFENFKLTXKNZQWKAQYHTQLLNALJVFCYBNDXAIWTWERLREXLNCHRJZD");
    msg.timeout = 15749U;
    msg.lat = 0.8682529493330098;
    msg.lon = 0.5770575022160827;
    msg.z = 0.3896042559818207;
    msg.z_units = 130U;
    msg.amplitude = 0.871462706975372;
    msg.pitch = 0.28169999748469376;
    msg.speed = 0.18458164469604676;
    msg.speed_units = 170U;
    msg.custom.assign("EJFPSYSQAIAPKUTHKZHQAGZSTQAMRIHDCEMWCEJRFGIQZZGMUWRHHPXLDXDWRFRBYKWXPWHEDPNBBZVQWBPZFONMIKLBYVUCBBRWDAYSOLZUIKXMBTYZOFIEIGKAOPAV");

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
    msg.setTimeStamp(0.9845960045758719);
    msg.setSource(23187U);
    msg.setSourceEntity(143U);
    msg.setDestination(21945U);
    msg.setDestinationEntity(63U);
    msg.plan_ref = 2765950899U;
    msg.id.assign("KAVICFJNSOOYVNYWXLVQBKIYVWPIWQBUJBYNSPSCHQFDFBHMDGDIWPQGNCTATZYFNUTMNMHBYDVLLCDLQXXIEHFMRZXASZMVWKCMNEPFMZYNGJGXKKU");
    msg.memento.assign("WBBRVLIPHNUQDCFSSLTFWDODZQENRKWHFLCGWHTWBWMQMUTIZALSDMRQXSCLGWTMUGOJORUHYJASVEZSZYFLZYHSVQZHD");
    msg.timeout = 11484U;
    msg.lat = 0.8894944520338278;
    msg.lon = 0.27646911226517645;
    msg.z = 0.7620519964529092;
    msg.z_units = 7U;
    msg.amplitude = 0.6360478341657441;
    msg.pitch = 0.31067080705674865;
    msg.speed = 0.23572538191034598;
    msg.speed_units = 242U;
    msg.custom.assign("RLWQYEDFOGWVGJCZFLBKEMIYCWTENUMMMFI");

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
    msg.setTimeStamp(0.2729149788884879);
    msg.setSource(6066U);
    msg.setSourceEntity(21U);
    msg.setDestination(60510U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.39632507091222613);
    msg.setSource(46525U);
    msg.setSourceEntity(78U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.9369512470695491);
    msg.setSource(1174U);
    msg.setSourceEntity(94U);
    msg.setDestination(53002U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.9840894348282001);
    msg.setSource(53787U);
    msg.setSourceEntity(252U);
    msg.setDestination(48149U);
    msg.setDestinationEntity(102U);
    msg.plan_ref = 691592295U;
    msg.id.assign("ECROJPTAHAKITMDGYTBXHDTHWDWEOKKWQGMIVAFJRQGHTBZEWMXGNICFWZXI");
    msg.memento.assign("PRDPKYQICFPMOWSEEDZOXUHFSERORBFHZQVKTDXFVWYCJCBUWQLECXPUIMDBFSQYLFPUHEHPLCILILRANSIGZTHNIVZQMHYWEJFKWHCEAJMCAQGKGWZOLWXJNQYUFADZIXTOSWJNVGENYYOTABAJKT");
    msg.lat = 0.8458368496910258;
    msg.lon = 0.10806484847235343;
    msg.z = 0.5448038540146073;
    msg.z_units = 214U;
    msg.radius = 0.8489379815980138;
    msg.duration = 43992U;
    msg.speed = 0.3822279048721008;
    msg.speed_units = 205U;
    msg.custom.assign("ROAMQATQEHRWYWJBUYMYKUXBQFGKPOOCNCHREXNJWFGATDSFVQVAYMGCCOFKYYLMPDJTIXKROSOCKUZZBVEBNKQLRWFVRWVZRRDIXDSUMOKVLDEPHANRYWTXZUUXAOASEKAULJYGLNTBUMPIEFGNCNZZSGPGJHKLFUHITOJQTAJQQVCWATTHJZLNJFZMZYQMBPSHLFFQHWHDKBVOEWDNPSXGSXBEDHYJGXPDIUGISIMDITZLBBSINWIVEPXRCC");

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
    msg.setTimeStamp(0.1380606649198216);
    msg.setSource(44282U);
    msg.setSourceEntity(250U);
    msg.setDestination(43716U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 723308304U;
    msg.id.assign("VITBLLTWTNQHT");
    msg.memento.assign("VHONVYLTCTLQNCZVVIFBUGDJNSSJWTPZLRPGEUXPHRYBRXZPGLBFJJKYMRSB");
    msg.lat = 0.4975332891349372;
    msg.lon = 0.002742537477169571;
    msg.z = 0.45873593138946633;
    msg.z_units = 9U;
    msg.radius = 0.9085637344875441;
    msg.duration = 64663U;
    msg.speed = 0.5595476136071237;
    msg.speed_units = 198U;
    msg.custom.assign("WQLNITRFYIFRRFAMGQBQXFNFISWVWQOFKCDQNALXHJFVDBHUHUREAVOBMLHNRGSYQBIEYPOYDPNJEGQISMTBYPJALWOVDLKCXBKVRTZPHWJNBGRMCLUGKUMBUEMTOYZIZCXNZCJKKJELXKPFSQSMVZJYUSPHOTVOPOEXTYGABKWRFZEJMNUCUSCGVWZKRADDHQGUCGWAMEZLHVTXSADTAVFPCTWDHQP");

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
    msg.setTimeStamp(0.6424237142317296);
    msg.setSource(21231U);
    msg.setSourceEntity(159U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(190U);
    msg.plan_ref = 4076324884U;
    msg.id.assign("PTJJOQISAWYULMNGYSIFUEPZNKNVVPPOWNMMEYXQMVXXJRYPVZQTNWLCHCR");
    msg.memento.assign("RWBQEEHINEUXVCLBNZONVTPRLGTEFRAWRUDJBQJROGWAGXOOFWQPXHMSKXEHINDLAZVVDWZMI");
    msg.lat = 0.19305708354031548;
    msg.lon = 0.5609859267938554;
    msg.z = 0.9091236967237358;
    msg.z_units = 153U;
    msg.radius = 0.44725205496624465;
    msg.duration = 32354U;
    msg.speed = 0.9031087777711546;
    msg.speed_units = 220U;
    msg.custom.assign("BBOQYRYKXGYFJFKKBGOFIBXZIRUURHONCWTKOWBZGQVQXWTZIIETEWGCZC");

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
    msg.setTimeStamp(0.9620627239191577);
    msg.setSource(35768U);
    msg.setSourceEntity(70U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(98U);
    msg.plan_ref = 1724327476U;
    msg.id.assign("OKVKSLZSWTDMNEYDPUOTGFSTPJGUFQMXKJTAHUXUDGIABREPNLCQLZWFMRHCUAAVAKCVSJHINRQLEQAECQYKZYKXXIPNTSFN");
    msg.memento.assign("QJGYGCXTHMSPNNFRTOLSFRQNEZSXSABVTGIJGMQCDBUAENUXBUZWLDQIXRYDYHPBITJPHZWIZVGYRKVHCVSCGYHLNFOCITFJWTOLXUKOOBKMXSXJTUBVOSQEKGKIWDAFCIEIGDCCPZIYOYKVOYDHVTKKLZMSMRQQMNPZFHVXAAEKAPTIUEBPQDTMLXWOSBQFAZVWLXYNURCHZDAWECNSAJRHJQFWLRJWVLLNMEKEPDUFAWGPFGNZRO");
    msg.timeout = 27883U;
    msg.flags = 108U;
    msg.lat = 0.5534816120453832;
    msg.lon = 0.7989602186198225;
    msg.start_z = 0.8715364922239585;
    msg.start_z_units = 59U;
    msg.end_z = 0.20706852795612674;
    msg.end_z_units = 215U;
    msg.radius = 0.110303294221202;
    msg.speed = 0.6063588707444143;
    msg.speed_units = 197U;
    msg.custom.assign("JMASKHTNSQNYIFRVKXIAPCRSEVTFLPNOONWWNBAIHDOPKGTZPRTSLIUTBXDCDIQUYVUBLXRHJNBIXDWKMKCEXICERIGMAKERQSVBFMBGXJJAPEGYLRTLLGQUOTPYUZWOFYYZVVDSJUDPKGHZTHJJJZQSWJOBIEGMDXPWCCFLWFL");

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
    msg.setTimeStamp(0.1604662041290158);
    msg.setSource(14159U);
    msg.setSourceEntity(66U);
    msg.setDestination(47642U);
    msg.setDestinationEntity(248U);
    msg.plan_ref = 3519491772U;
    msg.id.assign("JQXIMTMJKPQOUWEKVHGFLDZMNXQKWUSOQXHBYGFDVCLUECXXTLCESUOLRPBDHXHFWVHYSRJMWABAFIZXEMRLJFWLONVLZXQWQGGFUDTERUQBT");
    msg.memento.assign("ZQOQIZNQYRJQRELEZUNDVXCVRSXASAFKGVEMKKMS");
    msg.timeout = 41085U;
    msg.flags = 122U;
    msg.lat = 0.8973198919464066;
    msg.lon = 0.8742157889654919;
    msg.start_z = 0.3317879256392329;
    msg.start_z_units = 30U;
    msg.end_z = 0.6459067713352091;
    msg.end_z_units = 48U;
    msg.radius = 0.8470152283606828;
    msg.speed = 0.5209702982370417;
    msg.speed_units = 225U;
    msg.custom.assign("VHSWFRDIIUPKZZNZVJMOUSYYBINXDCETPMGXIKLGNBDBTJKOHVTCGYCGSWUYJRPHAFWQDXLPRSMKPRPGOJHHCRHSCOWAIUXLNCSKJEEUXIQDTGNEVIBRQSZAFYIJAWPVAMLVRZFNBJXAQUSFQYRMNMTOGUKVWOYVEWJQEQGCRXYWAESAKBWPFLTAQZRKJDTBEBLCZTYGLZZOSKHEAYZBXLDDNENFCVPTFUBXMPQDIW");

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
    msg.setTimeStamp(0.7352129936238088);
    msg.setSource(26503U);
    msg.setSourceEntity(186U);
    msg.setDestination(41850U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 37053762U;
    msg.id.assign("JIRDIQOXGZQQLCLIYISTNZUMMEFJYDLGFANXUFCGKBWMEVKVLAJGOAQENDPGWQLWQUCCMLIPSVPXTGWHDMNKIIAUOGZEBJGVLYTUKSNJAKNHPUWACVNHAKHSBYOTOEIZZWFBZMDYTJXBMVQJREVGADZRZNFPXUNRSXURPRSJHBPDRFXMWQLCCYGHTTVSLFZTQBHCWVYUODSJROYOENFWYVTCKXMEYWBKCUBRPHIXBOKATQZD");
    msg.memento.assign("GGLZWAXPLRMSMVGYKKOLGMHWUVPYAZBBYHBAEPBEDNTGKCRZXNJAEIOQECTCRWKR");
    msg.timeout = 42370U;
    msg.flags = 163U;
    msg.lat = 0.22415921333021716;
    msg.lon = 0.5115377096611787;
    msg.start_z = 0.15686541838312584;
    msg.start_z_units = 99U;
    msg.end_z = 0.15227363796698534;
    msg.end_z_units = 29U;
    msg.radius = 0.659063121962008;
    msg.speed = 0.7600648876710442;
    msg.speed_units = 137U;
    msg.custom.assign("TSULCHOLGEVIWQSZQJWNFQACLDHFOTJDMJWEGMHYHBRXDJOWMASPXORKLECWFDHUKFGLWIROQTRLW");

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
    msg.setTimeStamp(0.026268770568159572);
    msg.setSource(37227U);
    msg.setSourceEntity(99U);
    msg.setDestination(24576U);
    msg.setDestinationEntity(94U);
    msg.plan_ref = 3664081167U;
    msg.id.assign("NYSKAVQOASHTVSICRUONSCGWHAZRLEDCIUQRIYQLRFMJFYCFBPWJCHUIQEJVXJAPIGPEGBEQAUYJQHIYEKVXEJMMLOKOLWKPPSXKDHUORDFSBHULJVLYXARKOUPKAMWQDEULMSGNZTHNDEFHNKGABXDYAPHXCWUYVXYJPTFODBDTBTWONFTMNTPTENABQBCOVMVITWCPUKBJISISZGFFOZMIGRFBMNQLQENRVXZCXWCDZYZSJRLGZHRVGG");
    msg.memento.assign("PYNMRBAAOHRSSPVBXKXEMPFJDIYXCVTJSNPSNZQQZCQCRJUHNFOCTGXKHYNNXVXKULLGVTLLWDTGYHZEWAOUIQOAFSLLWVSCARCOPDEKCEHMWFAPBNWLBUCMPSNGXJ");
    msg.timeout = 29788U;
    msg.lat = 0.38944819936877806;
    msg.lon = 0.7121135100640974;
    msg.z = 0.598264793690232;
    msg.z_units = 40U;
    msg.speed = 0.23278821098750646;
    msg.speed_units = 11U;
    msg.custom.assign("VPTUIVUANOWECFLCWHSKDTJZCMOGMSMFIHKWBEHUMPCVPARAOCDYQTAZCJSEFUWUQTXVWLAIZGKRNXNIHXLOULPSWQRSWTYYXZUBLFLSXKDNOCFNQJPJMAWORZYZMJYBVHRYFVHCKBNEDUDJNII");

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
    msg.setTimeStamp(0.6863490783255792);
    msg.setSource(25759U);
    msg.setSourceEntity(113U);
    msg.setDestination(49839U);
    msg.setDestinationEntity(149U);
    msg.plan_ref = 2184954914U;
    msg.id.assign("OZYIGIKERQWAFDBPRBUNWOXCSQFUIPLRVDOZHBGF");
    msg.memento.assign("QOLGBCKXXSOCPNMSJXZISDNLUGVSYRFCBXPEIQBQKRHZADKOJMCXUIQWFARBKBGBFCVBTBMBJFXKAIWINLEFDOPYFHNSYELXOMPHMO");
    msg.timeout = 13281U;
    msg.lat = 0.8304618145467163;
    msg.lon = 0.35170693827688604;
    msg.z = 0.4259006483291027;
    msg.z_units = 198U;
    msg.speed = 0.7618661687407801;
    msg.speed_units = 158U;
    msg.custom.assign("COVCAVYJXIWFGBZNRYCSWMAGOSNEDRNPREMBYGYGWSHXBEJJOQDGDXNSYEIAUZLAQKIRLRCPUCBDGFOLJFLKJTDHAUJBHIGUTESHXNPPHVWYHFGRLECZTEGGCLVHAAJHUI");

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
    msg.setTimeStamp(0.5723436249434158);
    msg.setSource(26983U);
    msg.setSourceEntity(6U);
    msg.setDestination(13457U);
    msg.setDestinationEntity(224U);
    msg.plan_ref = 1856014404U;
    msg.id.assign("JJUHKGSLKTTLOVHFSHZIOAMPRWNWRPKNEVJVUFCXTMDAHBNRMTNSEQRAVOLFIJHXKZNGRRKPBTLUIBXDFXWFETGQGXVPYMEILZYLZOAOMBHYVLMIOHZBFIDCHAYMARQUKPJWHSEAVIXOLGAMGCJWXQFNJ");
    msg.memento.assign("WEBRWUISMXJMCTMFPZIQSVXFLKIPDTOTLAWSAKZQDGNECXGAQWHHJRCQEGTCVCDBFDJUWVIJIZXOGJPMAEGRUYDORPMCOFCUMZCDYBLUHHQNLNRMKYTXUGNJOEYGFAXCHSWNBLKRVWJHFBGPDZYOKBTKVIYUSVMEQN");
    msg.timeout = 58974U;
    msg.lat = 0.4192806074147897;
    msg.lon = 0.04148234093616732;
    msg.z = 0.5058410326406179;
    msg.z_units = 204U;
    msg.speed = 0.08891552457804563;
    msg.speed_units = 247U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.14419572633496736;
    tmp_msg_0.y = 0.3210913866808549;
    tmp_msg_0.z = 0.1626449302325027;
    tmp_msg_0.t = 0.6136060726546234;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZNFCHDGLDCXXVIHBBOGSTHXOORJKVJILSSUKDFTFKACTRCVUKMHRSLWPLMNHHAPFXQIRZUPZNOZEKDBYMYJLQPAPGUJETMEXPXYQZLJZWPFJHJKAQIBAMXSMUWDCECQEEEZFYQIBKF");

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
    msg.setTimeStamp(0.38493695130308403);
    msg.setSource(2283U);
    msg.setSourceEntity(197U);
    msg.setDestination(44529U);
    msg.setDestinationEntity(114U);
    msg.x = 0.2473464149764837;
    msg.y = 0.21578411756506977;
    msg.z = 0.8989518325381579;
    msg.t = 0.14444899442340442;

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
    msg.setTimeStamp(0.49389909886269556);
    msg.setSource(10042U);
    msg.setSourceEntity(232U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(224U);
    msg.x = 0.6136689049944598;
    msg.y = 0.2898568220610771;
    msg.z = 0.3130772091555708;
    msg.t = 0.12945147788834488;

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
    msg.setTimeStamp(0.007889528171538207);
    msg.setSource(18149U);
    msg.setSourceEntity(107U);
    msg.setDestination(14560U);
    msg.setDestinationEntity(179U);
    msg.x = 0.9822717005621592;
    msg.y = 0.8614687004313208;
    msg.z = 0.6077994876449404;
    msg.t = 0.07117654634996984;

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
    msg.setTimeStamp(0.37288024802211617);
    msg.setSource(65051U);
    msg.setSourceEntity(66U);
    msg.setDestination(16697U);
    msg.setDestinationEntity(162U);
    msg.plan_ref = 1898153279U;
    msg.id.assign("TMEYHITIPYJGBFENAJHSCSULZQONMIAMR");
    msg.memento.assign("DYGEDHCHFHDXASGZNUBGJNMBQAVAXWYTXQVMGMFVZCAFYTVNOKMWZXIIDBQSKPOXUTNESLSOXISZJUHGKTKPHBLC");
    msg.timeout = 58693U;
    msg.name.assign("GAXRRTIRGLVTZVNGKAGQATCLADAWYWIDHTJQRNYBFKBWMVMEXEFMHJYARMNOSSENLELMFDKHFPJU");
    msg.custom.assign("TEDDRXQYOIPRSWWTMFIZOMUCOJAMCNUATHYDHCILWVZAOQGETYEFXWEAJBRLKTVGBLAYAINGYVNDTKTJZEYLHONKMBBKPLCSTNPEITRPSFHXALWRLQWIHZFVMDXH");

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
    msg.setTimeStamp(0.6719498707428003);
    msg.setSource(44853U);
    msg.setSourceEntity(170U);
    msg.setDestination(56342U);
    msg.setDestinationEntity(10U);
    msg.plan_ref = 2516135724U;
    msg.id.assign("ODTCPOIFQCCZTSXDAALBOAUYDJMZBKOATGEFZBJZQNZDGTKBQQFIPQGSFRHPEMCULSCVMCXBHKERMYANAUVFWDKXOHXIOUCPGTFSZWOARTIYCJWVLNMKVEYPIDESGXVWVQJJJSTPDIEYZYPEQQNRJLFXWLREHWLBHDVMPUNUFRYWSFKRLOQUGXMCGAWYWZISYK");
    msg.memento.assign("SCXRESMFGKPQRPQCFTLGZHDF");
    msg.timeout = 54243U;
    msg.name.assign("QURZJHWCWGGVOVASHLLGMBAXBDNMTXWNKLWEUZNEVFDVETSXHZRJIVYMCFNRLCTHOPSCKQFSZGLKPIWSQAMOATEHDJYERHCPGBDGRRBEFKO");
    msg.custom.assign("IBKPWMMBPJPDXJKFQYKFMXYFNUBWCSHNXBGBXGANNGRGHVYCYETLPZUZNUERJZWRRVWMHJEMQZKU");

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
    msg.setTimeStamp(0.9038831107109492);
    msg.setSource(26638U);
    msg.setSourceEntity(71U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(186U);
    msg.plan_ref = 1247350397U;
    msg.id.assign("UUMXFAMZHXREXKDNBCLGSKGXQPVYISVYDUXNPXJDSCQUYZKSMLRCPFNCHWWJLIQMSKTNTFHXPRPTPRLTJKVPNDHLZRNYHUWDKVNOG");
    msg.memento.assign("AUCIYEDLUQGLVXMOAHSTAPZFVNSHNOYWPXJMQRGYPHCDWAPJZHMWIRPEWRVGDXAQWISVSNJDXOIENIECOYMKLNGFQXPRTCRMHAEBDWBHUKMTSLIRZGSJTLNYKJUWJWFTAHDBDIHCAXEOAZXBBXSTIQFVGGFDPIZNCZQPDZKIBCEBLTNCTQDYUFWOVZTKKNFREOPHKYUSFURFYNQVVYSZGBOJPXUCJMYXSMQMTOOBHVMKUQKLERCZVJR");
    msg.timeout = 11510U;
    msg.name.assign("EOMFHKRXGPRMKKARXSSMOBRJNOLQFVYGHRZPUSJWUEZIVOPTTRGVFRCJVSKNMURWUAEDJXXHTWQLTYCESBWMPLJWCZPGPDFJZBNXHDGYOUAISAKHCNSIMGNKPINXAQWLMNBXQVMGCQDZEAQMDVGCPYUYXRLODJHZOBOWTLHKWBZGUESQTNUAPTTYYKBVCUGWLCQZDWZ");
    msg.custom.assign("CTVYJMBNYXGVKIUSNCAJAGEGIHDRZKTKGRZKAYFFHEEMOZHUZLLONMUIQQUXBVCNDFOXCYNKTFPXJVKRCWLDBUYNT");

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
    msg.setTimeStamp(0.48778887813863514);
    msg.setSource(39389U);
    msg.setSourceEntity(46U);
    msg.setDestination(45591U);
    msg.setDestinationEntity(89U);
    msg.plan_ref = 747717089U;
    msg.id.assign("WUWTRNNOQGWPEFPFOPBAOUFZPMBJXKDYTCAKOPXGHQUVJAHXUXQVTCMXGSYANYTJPSCDXQLWWFHBCNANFRIGXNSVVCGBZLNYLLPBYDHRZZFJMKTDUMWNTYJHBJLOEIIBRSRULECZTDFXAHKRCPSUJHECGDEGBSFZIEDQMIKKKASHUNKVMAATWFUWVESEZEOLGAJZIKVCZMBGNYLXMVLPILRQOTIZDJRMDQJOUDYOWQGRBMSRECHOXYQ");
    msg.memento.assign("FCCZYNTRLOWZOHVBMHDKGKINGEUFRNZUAZCNHTULADMMCKXYTHHQPOMKTPRXFYDRLBAQLMKQVNZJVGQCXSQGWYUAFWYAWUBYBPDIJIYWS");
    msg.lat = 0.20763078299894056;
    msg.lon = 0.8437935485631025;
    msg.z = 0.9615817349064182;
    msg.z_units = 227U;
    msg.speed = 0.12836629984456227;
    msg.speed_units = 236U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6903030895561818;
    tmp_msg_0.y = 0.9650493111695934;
    tmp_msg_0.z = 0.9752437843962735;
    tmp_msg_0.t = 0.4241513461240377;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 13963U;
    tmp_msg_1.off_x = 0.7384443938266816;
    tmp_msg_1.off_y = 0.0574832803136307;
    tmp_msg_1.off_z = 0.08169997187312439;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8164760635309359;
    msg.custom.assign("DHFBSUTUHZNOSVAVJEJSUZPDADISMDOMROVHTUTLQBOTZGCNJI");

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
    msg.setTimeStamp(0.3986384770409379);
    msg.setSource(40313U);
    msg.setSourceEntity(134U);
    msg.setDestination(11058U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 2015611021U;
    msg.id.assign("SYDVJGHRUYGTQPMKZILYON");
    msg.memento.assign("BCGXUPINFXONHZWLSWLUSSDYAVQ");
    msg.lat = 0.595767236720812;
    msg.lon = 0.7897710125978088;
    msg.z = 0.13094553270744003;
    msg.z_units = 105U;
    msg.speed = 0.8336592438303584;
    msg.speed_units = 75U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.796174463398716;
    tmp_msg_0.y = 0.1451153635471849;
    tmp_msg_0.z = 0.13016142466061242;
    tmp_msg_0.t = 0.8495952494346058;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8717947214493327;
    msg.custom.assign("RDFJZMOKABOKHCWVKQBTNFFJYAJRKWNJXSMLFUVEADIQRPVPYXEZQMBARUTFQCOZAVIURPIDMMXHEMIOXKXWGQGYGPSXROLEVRNEMZCCOLCXSHMDKJBBYVMZPIUCEAQCBMSYPUOQBWKUNXEGRFFVCPLZEOKIUOTHYPBNAHLFJSJATFPLENTKBHGQICJFUGZXZSNWUWOTDYWGSVHQUQLVSDIKBDDGHSNYSYGTTIEWRX");

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
    msg.setTimeStamp(0.9430242100415837);
    msg.setSource(47172U);
    msg.setSourceEntity(130U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(41U);
    msg.plan_ref = 1460841627U;
    msg.id.assign("GHFOSQFSRKRLPIKJQHFIIXNFMMNLNMBYCWACTTFQSMDWUGGVMDUKILOPWJQPZHSRLPSGCZHGUTROXQVPZAHJLLPCTDLXNWOUOMUVVCQEMIVOCBZGOHHVWMFIZDKNEFKEIG");
    msg.memento.assign("QRJLZSKBFPTHOBYROYYMFKYITYFPJWBQP");
    msg.lat = 0.12657517719541278;
    msg.lon = 0.24263929145915974;
    msg.z = 0.9126525055706739;
    msg.z_units = 154U;
    msg.speed = 0.03101318048197388;
    msg.speed_units = 212U;
    msg.start_time = 0.1622381267529368;
    msg.custom.assign("FEPQWQJDOEIHWCCBQYGFVVXYIDTHRHJWKOEFJBVCAOQRQDBLMSPWWHPMMPOVVRAFUVAPMCVZLOKWOATUEYZUYSRKMAGNBNCILIYAZVIKCFUUGLUWTLDZWIHXSAFZURLFKXUBENS");

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
    msg.setTimeStamp(0.09461296289654841);
    msg.setSource(22697U);
    msg.setSourceEntity(213U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(5U);
    msg.vid = 42001U;
    msg.off_x = 0.5517847630786058;
    msg.off_y = 0.7562503384537675;
    msg.off_z = 0.4571182534812347;

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
    msg.setTimeStamp(0.35576892462732457);
    msg.setSource(62281U);
    msg.setSourceEntity(18U);
    msg.setDestination(26611U);
    msg.setDestinationEntity(45U);
    msg.vid = 37437U;
    msg.off_x = 0.027755659511487063;
    msg.off_y = 0.7047500958791196;
    msg.off_z = 0.9887108295448604;

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
    msg.setTimeStamp(0.345865094301243);
    msg.setSource(21983U);
    msg.setSourceEntity(200U);
    msg.setDestination(34237U);
    msg.setDestinationEntity(89U);
    msg.vid = 46833U;
    msg.off_x = 0.10038921109411703;
    msg.off_y = 0.8056585572218097;
    msg.off_z = 0.6247216677125718;

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
    msg.setTimeStamp(0.5213470726637587);
    msg.setSource(4784U);
    msg.setSourceEntity(69U);
    msg.setDestination(60296U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.8815624825662386);
    msg.setSource(63232U);
    msg.setSourceEntity(122U);
    msg.setDestination(18069U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.4268084268920791);
    msg.setSource(34104U);
    msg.setSourceEntity(133U);
    msg.setDestination(14582U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.5146659275272147);
    msg.setSource(49728U);
    msg.setSourceEntity(187U);
    msg.setDestination(20810U);
    msg.setDestinationEntity(215U);
    msg.mid = 1447U;

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
    msg.setTimeStamp(0.8070780151920122);
    msg.setSource(51356U);
    msg.setSourceEntity(127U);
    msg.setDestination(30907U);
    msg.setDestinationEntity(187U);
    msg.mid = 1533U;

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
    msg.setTimeStamp(0.8938109865735061);
    msg.setSource(43455U);
    msg.setSourceEntity(21U);
    msg.setDestination(49836U);
    msg.setDestinationEntity(230U);
    msg.mid = 7421U;

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
    msg.setTimeStamp(0.8485039079339481);
    msg.setSource(10773U);
    msg.setSourceEntity(162U);
    msg.setDestination(57779U);
    msg.setDestinationEntity(169U);
    msg.state = 44U;
    msg.eta = 15315U;
    msg.info.assign("DTWUSAMZZABWKTGNTGNZXD");

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
    msg.setTimeStamp(0.9600824656911874);
    msg.setSource(38598U);
    msg.setSourceEntity(147U);
    msg.setDestination(42588U);
    msg.setDestinationEntity(143U);
    msg.state = 107U;
    msg.eta = 18940U;
    msg.info.assign("QTYNBKDQBHJEXFYOQALSYQAQGWJDENLFNUJLBSGPKJZTOUIWGEBUMBAAPLIWREXZSDQJKGPRWDOCNEOYMVCEXIFYVUITGCKJSTRLRRSIHWHXJGMBAOKFLKCCYWQWIWTQWDOBHJVXJUTBUAIMAKLBZICYZLHRVZOCWAXHUTVXCEPSLNKFPXSMLFVMUDPHGRFOHSNMIEVNPQOVKHIYAQ");

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
    msg.setTimeStamp(0.1974873805589652);
    msg.setSource(57239U);
    msg.setSourceEntity(40U);
    msg.setDestination(7172U);
    msg.setDestinationEntity(70U);
    msg.state = 26U;
    msg.eta = 33076U;
    msg.info.assign("TMIZTFVZVGNKFAULMCMIHYHCZWXIVDWPBHISONWSCFDSORBIFVSOWTNRQYMAFQZYHFJIXESUZYSTJYXUGIHMPRROHWUZEBGEPPKAMAKVJDERAQROVSNBLNWXLXEDF");

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
    msg.setTimeStamp(0.2096573441348093);
    msg.setSource(18717U);
    msg.setSourceEntity(216U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(126U);
    msg.plan_ref = 330765433U;
    msg.id.assign("UALIQVSUQSXXYVVPIGYDICVHVJRNWRRHHTQNUIABEYZEJOKJFWNPMLFAKLFVLSD");
    msg.memento.assign("DUGVGPGIUYWDWQHNLUMCQTNIWVDRKVSQBFFEDXALJKTNCIUSGNCKAXZQCRWFASKNAHVRSJIZJEGPBBVNFBMXDDLTCJIZJICWVDXUYOZEHZLKMPFEOSKURFKKQJETZLUVYNHWXYIAPBCRPYRHVFWJOOWQHLMOGUPY");
    msg.system = 60102U;
    msg.duration = 54355U;
    msg.speed = 0.5096337850893228;
    msg.speed_units = 166U;
    msg.x = 0.5981705028122788;
    msg.y = 0.236227987756231;
    msg.z = 0.2619848401697441;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.3951290659467246);
    msg.setSource(27943U);
    msg.setSourceEntity(176U);
    msg.setDestination(48793U);
    msg.setDestinationEntity(85U);
    msg.plan_ref = 480967461U;
    msg.id.assign("TKOHBDZPZNBZPMZJJOPLBCSCGMSUKNVBQKVHPWWNOYUFAKQDIAXNPDIUBCGLYCCUFBQVPUGZTBJAOYEMWEZXDOEYRREFDQRBLJZJRLVVWRSLAFMDRQWTWHSFHOIHNYCKLXHPJKYQGSNXQKHXIGCAKIADQIMBVMTSWCTZOGDPHUQWGQEIWDPMNTPVMBZJXYLRYNRSUTVLVRTEJSNEGVOSOFAWHMTGK");
    msg.memento.assign("JJMPVJASNSNYUPXCWAVFGDUYKMYYWLSAZIRIDREHTROVYRDJKOIJHBKH");
    msg.system = 7224U;
    msg.duration = 14588U;
    msg.speed = 0.9114020012232025;
    msg.speed_units = 119U;
    msg.x = 0.9900313808829331;
    msg.y = 0.4692891640848532;
    msg.z = 0.8358018261211697;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.6291037559664285);
    msg.setSource(31374U);
    msg.setSourceEntity(59U);
    msg.setDestination(40609U);
    msg.setDestinationEntity(253U);
    msg.plan_ref = 1723363754U;
    msg.id.assign("DNQHSNYGQDHOMHFLUIOQKMZCEUYLVEOOQXLQOUWBSRPHEZDKPSWUKDTGVLDTCYKTPMHTBKZTRQNSELNMHJCWWPZZXZLKYCAZYLQUSASEBEJZXLSHRMFIBICOAJWBXLFVKZITCMTHWVWIPGCZAUJRTGXAQLJPABNDJNWMVGQOPEIMNXHXRGUTEIVFYRVWVNGAGKFGCGDFBCVOPERRNYFTXUPVNBSAQUMJREAYBOCIDYOIWDJBM");
    msg.memento.assign("MSJNZLJMFQMFCQMATCGKCVQNWPXTHKVXSPGFVWLBFTYVRWNIVJTGMBMZSBXOTHUPNAXQZMZGDDADWZETNOBQQWABIXMKCZCFGELUHRVUHJGRDEILRAPGYCLVFGWDLKHDJFAHKVSNZISWYKJXPHBKPDLWUHNEJUTFQPOMESCEOFUNQWOKYPJGGYOUEOUYSXXQYIRAXCXCRRKROAYSZPPZEHZMQYLDTBAIINLHDTIJWB");
    msg.system = 8351U;
    msg.duration = 3143U;
    msg.speed = 0.7739915782301547;
    msg.speed_units = 6U;
    msg.x = 0.07625148193371778;
    msg.y = 0.47522205023404696;
    msg.z = 0.13881470577540134;
    msg.z_units = 230U;

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
    msg.setTimeStamp(0.5163186269713025);
    msg.setSource(9430U);
    msg.setSourceEntity(190U);
    msg.setDestination(38118U);
    msg.setDestinationEntity(22U);
    msg.plan_ref = 1780482394U;
    msg.id.assign("RCXVBXGUVCIWXMSNRTLJBCTUZPSZSEBNKRFVYIMLZFHJOBTFYWSLIWQMCYGBUUODHXRCNBQNCLEPUKNILEYGAVUVRPKVSNPMFXHAYVJQYQMHHJDTKZOXAYTFHRGGQAKTKQWFMXGYNVXOADUHTDSBMWADXCHOZBJBTMKZRWZGOJKFLLFJUWYNHNYIOQIRZPDLCQHDODVWEMDPKRUKEIOIQUPSACPPWGAXGEBCTSFLOAVJPWEDG");
    msg.memento.assign("ZWMDFMXQVGQEIRYGIIZBKOEOPHCUQGATKMERPLRPHFLAJYDVZMYVYVNQSDISCXBXJERPBKKWBFQKFNVUYWOBZSGUHMKQLEZXLUOFYKZWXEXAJULLHJNPRP");
    msg.lat = 0.7867207163276755;
    msg.lon = 0.4040302533214237;
    msg.speed = 0.5620875979481311;
    msg.speed_units = 62U;
    msg.duration = 3015U;
    msg.sys_a = 52642U;
    msg.sys_b = 28087U;
    msg.move_threshold = 0.7553073192895555;

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
    msg.setTimeStamp(0.8072691412268269);
    msg.setSource(22584U);
    msg.setSourceEntity(44U);
    msg.setDestination(8257U);
    msg.setDestinationEntity(169U);
    msg.plan_ref = 2072717744U;
    msg.id.assign("SCMQGENYLCIEEZVMTUWWTWDEFLGFKEVGQVOMUOOPZYARMIWIHZPUTWAAXPJSLGFLNLVHRABWTFSXPEVKYJJSDOKNTHRBGXXWNYIFDLCBBUADHOHKZADPJANYDKSNZAGMOKVYDRPPGVZUUAQSVBEKFTUIWQFYXTQMLRCPOKZGLAPZWQBKQHGLNEQURXNCLJBMJDSXXGBTSVCRJQHJIIOZXNPMJMRYKCOWYBUISOUQFCHSNHHBCYIZ");
    msg.memento.assign("IPZOXNQJLGNROEKEERGICHFTWTGDNZVBJBEWFLGWFYCZDJFYDFPUZWAXOKKPHSKSFHMLVYCUVPWFQRAUXAHSZZZVLFQBJIOBXDKHMQ");
    msg.lat = 0.6614470535448821;
    msg.lon = 0.9673187272102519;
    msg.speed = 0.8274627368050755;
    msg.speed_units = 192U;
    msg.duration = 46224U;
    msg.sys_a = 20230U;
    msg.sys_b = 5140U;
    msg.move_threshold = 0.3619158693074702;

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
    msg.setTimeStamp(0.1791049098909282);
    msg.setSource(63567U);
    msg.setSourceEntity(105U);
    msg.setDestination(58507U);
    msg.setDestinationEntity(73U);
    msg.plan_ref = 3746391673U;
    msg.id.assign("MJABERTTABLVBJSNXKSILMUUFFJXHCOIOFNZHCEVQBLCYCECJICNWKRQGKOLIGPRAXSBFVSIBGQLPDUPVOQTAGUTAVXEIWJJQKSBMWSPHOBAMQALNTRYSZBKJXPVJZERCGNQNCYSPHYNEFIXFXUDRWMZDEHCALHXZHDRDTWOWZBFOUDRDASNKJTAWLZVKMLTRQOHWZIMGYKUEDGHKYOMOUWTUEQSGZPJMP");
    msg.memento.assign("BYNMJJLYDTFPAVYYDAJFPCOYEKZVRUEINFVEQWHIUUSKZHTUAXLBNXGYQDSBWCLCPXIMHGWZKARJERKXDORZUVAIQGFOXSZPQVQHGEBNPTTGZBHTHWASDUSGORWSFCVFTTUDKHIZDOKMAAYCSSCVQGDACXWGZWDNOQMNJVGENXHPCWPJRMLEPNKKLOORHJKBZPBWYBBLEABNOLMFDIQRZEXUKMTCYCLJUPVLLXOSIFIQWSIEU");
    msg.lat = 0.11547066026204944;
    msg.lon = 0.1870099853313021;
    msg.speed = 0.7229172061463005;
    msg.speed_units = 224U;
    msg.duration = 59755U;
    msg.sys_a = 41255U;
    msg.sys_b = 65239U;
    msg.move_threshold = 0.8262239661476185;

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
    msg.setTimeStamp(0.9009398684356211);
    msg.setSource(38943U);
    msg.setSourceEntity(25U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(98U);
    msg.plan_ref = 1950171023U;
    msg.id.assign("WWRPXDVJSBIUYGZGJWMXOLDVXTZRBFCCUSICLRANVSGJQWTEXIHDBHIUQNYCLHWGIHSZHETRCBLWDTHSKZRXLKYQTPQFQCMCFPVMBIXZXUVBLOHFQX");
    msg.memento.assign("PNBZERGWSYYLDZPDYEMAF");
    msg.lat = 0.6320226595227095;
    msg.lon = 0.11783813723388803;
    msg.z = 0.9383196997194962;
    msg.z_units = 6U;
    msg.speed = 0.2927152655444163;
    msg.speed_units = 250U;
    msg.custom.assign("IPRBRVQCJEHQICJOWHBDIWOTJTEVZOUGSZHBZWHTRLWLNDLPJIMDOTCCZQKYDNEMLLKBVHCJZAFJFOZHWGNCCNVGDKBPVGLJQRFAVBLSRQMYYUADQUCXXSXNGYUECGXFXLPWIDXYBZRTWDIOSQPTFPYXAJLEXINKOFIQUESQDBFBMZKS");

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
    msg.setTimeStamp(0.16555239209574257);
    msg.setSource(22887U);
    msg.setSourceEntity(129U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(170U);
    msg.plan_ref = 168728267U;
    msg.id.assign("CFGLXXVLIZBFLYGGOGDXSVQQNXRMHSHRCNYRJXZYTCIUNFTSWMCTRDPJHJUQJRZYPSBEUKHJUMQASJYPWWNPFKJMYVAEKBCDYLIXTZZF");
    msg.memento.assign("TQACSTAFDVXIOWYBMUKUIGJZRKABHCMLLKBRIRTHZZGJPUOKIIFECHOGZHRUTFDNAXWLJHKWJDVLEUCANIHRGUVKVPU");
    msg.lat = 0.26760520813583655;
    msg.lon = 0.245208885443304;
    msg.z = 0.9472673096685914;
    msg.z_units = 140U;
    msg.speed = 0.24087793212204844;
    msg.speed_units = 10U;
    msg.custom.assign("TDDXXIDLBLFUQTFGLIEIUWFUWHQNLZGTJNBGOOFJHCCLIZHTJQPSCKTSZOAWMYMMWXDERVOUZNRBLDDXANYMFFSUCKSTNRXBFGKRQGDRJYNYLBISWXQWKCW");

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
    msg.setTimeStamp(0.6305760490174276);
    msg.setSource(46245U);
    msg.setSourceEntity(93U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(80U);
    msg.plan_ref = 3798428052U;
    msg.id.assign("CQMVABXFOWYXHQKRSTVRXBPHPTMIMVMEBMZSULYEJDJAFUOVPGBRYKIIBFWRHISJAODAXQIBJEKSRHWACEYHAIDLPEPMMQUKEESTNIZIGLTDWQNGYEKTTUSVZZDYYPWOHWFCLRQROXMF");
    msg.memento.assign("NBQPMCVQEIYYSUWONTPVZXOQCYQHXFRSDTNDZBGQPOSGJNZRTVLWNMEGUZNZDPCSRLYDHSJHPHVSJOWAWUGCQNZ");
    msg.lat = 0.7684654379878825;
    msg.lon = 0.3370443597392996;
    msg.z = 0.31082457176874256;
    msg.z_units = 198U;
    msg.speed = 0.5280393270576756;
    msg.speed_units = 144U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3639937011276422;
    tmp_msg_0.lon = 0.6388265276596614;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AQOLPJBREQHBQARPDGJUIFNIAPFNRFCMTNJKLBSPZJIGHYJHESHVCDMTUFGAKZWUSWWESSKHZHUWYOCVLXVWDTEDFCOVIIYUYCOGMBEJTXLCRLDAJOYGLQNPTUXATFNZLCDBTXENRXWKBIQNHKFZMAVWRMRXDOMAYPENZKZYLBOWEKIQOPIPGSGODVSJDHCYSKFRGCUTNBQUFPXWMKTYBRJSJQ");

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
    msg.setTimeStamp(0.46199106997091444);
    msg.setSource(6765U);
    msg.setSourceEntity(25U);
    msg.setDestination(49088U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.775801022452413;
    msg.lon = 0.22541997813341563;

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
    msg.setTimeStamp(0.044200630605976454);
    msg.setSource(24657U);
    msg.setSourceEntity(147U);
    msg.setDestination(53462U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.20028442758518994;
    msg.lon = 0.46263144572397763;

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
    msg.setTimeStamp(0.0701171471922093);
    msg.setSource(51387U);
    msg.setSourceEntity(237U);
    msg.setDestination(60138U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.9667258695851271;
    msg.lon = 0.4021542761454263;

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
    msg.setTimeStamp(0.3796340849676937);
    msg.setSource(55835U);
    msg.setSourceEntity(124U);
    msg.setDestination(2720U);
    msg.setDestinationEntity(223U);
    msg.plan_ref = 791558417U;
    msg.id.assign("CKHRKMTNYQPIUOPOYGMRQHAVKBPXQDRPILSZTAZNKIVMC");
    msg.memento.assign("OQOYTGCFFXPKFRPYESACAVLYGVJHWMFKGESN");
    msg.timeout = 47584U;
    msg.lat = 0.7290893533618635;
    msg.lon = 0.547379679435528;
    msg.z = 0.48778912278258857;
    msg.z_units = 14U;
    msg.pitch = 0.9411987201237532;
    msg.amplitude = 0.26900675937798335;
    msg.duration = 47178U;
    msg.speed = 0.6766814634614524;
    msg.speed_units = 129U;
    msg.radius = 0.6536017090032993;
    msg.direction = 151U;
    msg.custom.assign("FGMCVPEBFXYGHPBGIELNHZDCOAVXNJPEZUDQTASEILJWYECXMZYTEQZAWIOAMRVFQFUQSBPDVAKVADGOJNBTLZKMTCDFUIUHNGPPVDQADYCJCDCHSLNOVVENYMWPUPAXQRSJRMWRBQKSCTXWRFIISZWFCTYKXKKZUB");

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
    msg.setTimeStamp(0.5548081043164016);
    msg.setSource(41857U);
    msg.setSourceEntity(155U);
    msg.setDestination(13759U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 1594178702U;
    msg.id.assign("JRDDPFRUXLEOBKBOYQDWNONMUQIQWRIZXMFGHIWSLPASHVAWXELSETVONBUSRKPNAADSFPMCYAHRCTYQKTTYEOUGPJPZOYAJRVIAKLXNURXGCKVCUWVFYABIRHILXMNDSUQCBWNGDESZIEHQYICBJHITQKLQKSQCBKSXXRTOBDTEBXHRFGGEJVCDYOPYWMGHCZUDUIZEPHMMXZFAVZWSQVOK");
    msg.memento.assign("ASWQBMBEAZFWLPXYRPUPKVNBNPVXRRINQLYPKYEACVJSOXXALPQGYQWUTNZTCOTRKYIIYOGZGXKEOOJHFLSGHMRIEJFIFLKPHUGTQICKJZMTHCHIAMITYDHJSFJUAXZVLJSMAOCOBSRHNNAJQMYERGKRQLTEDDOUMTOLFGDMUFGEPSPCGDMVMUSCTBRHSA");
    msg.timeout = 57457U;
    msg.lat = 0.9647528420105106;
    msg.lon = 0.228311142546755;
    msg.z = 0.5171889044049105;
    msg.z_units = 174U;
    msg.pitch = 0.8388030322244968;
    msg.amplitude = 0.290242760595256;
    msg.duration = 48022U;
    msg.speed = 0.1454993279430813;
    msg.speed_units = 159U;
    msg.radius = 0.6999266379502868;
    msg.direction = 246U;
    msg.custom.assign("AOJVAPESRNAKDVRJRWKYZNPZDUNSGUGITLVSEIBIFPYVJPGXIYGVMDFSDCUKBCDHSBCTJKXZNWKWEWLQIHXFENVWAOHPBITOXVMHRRYCTTFKJQZMDQODNLAQDLXOBHWCZOYPEMTNWZFYHFEWHQGGIRGOUYYTRRNNMAILSUHVCBNQUTZLPRPMDEXFOI");

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
    msg.setTimeStamp(0.046769753369856226);
    msg.setSource(30688U);
    msg.setSourceEntity(233U);
    msg.setDestination(8442U);
    msg.setDestinationEntity(53U);
    msg.plan_ref = 3856088349U;
    msg.id.assign("YKODUQOTAUKEBEDROQNZGPUDEXICVBXIBYVOCUQ");
    msg.memento.assign("ZYBNYPAGWSYHVZ");
    msg.timeout = 15402U;
    msg.lat = 0.5307298075667168;
    msg.lon = 0.6609487330685564;
    msg.z = 0.6346346647718737;
    msg.z_units = 59U;
    msg.pitch = 0.04236618575487261;
    msg.amplitude = 0.011896410710005023;
    msg.duration = 13392U;
    msg.speed = 0.9887251966280742;
    msg.speed_units = 190U;
    msg.radius = 0.7857995589705004;
    msg.direction = 60U;
    msg.custom.assign("UPBKMJJCDCSSFCOKYMFCTAFJMBSSZMNBPTERQUNFQODRRKGEBWHISOMFDWFKWPCVKYZISUHGLRCG");

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
    msg.setTimeStamp(0.7216842511089748);
    msg.setSource(19964U);
    msg.setSourceEntity(90U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(40U);
    msg.formation_name.assign("IWIMRAPWVHKTIMWGFLSEALGLSPQJQSXIZCENKSCM");
    msg.reference_frame = 117U;
    msg.custom.assign("AKEPEHSWFUBBO");

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
    msg.setTimeStamp(0.9523217719045602);
    msg.setSource(31895U);
    msg.setSourceEntity(136U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(63U);
    msg.formation_name.assign("PLRKMMLYYEZQRFJNGMUJFWTENYVENVDKWCPFRHRGSKCASZJUSITBAJTKWEILFUVTLYADEKXICOKNFGTGCQSJOJRWON");
    msg.reference_frame = 152U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26403U;
    tmp_msg_0.off_x = 0.4058338492984884;
    tmp_msg_0.off_y = 0.4794131967180514;
    tmp_msg_0.off_z = 0.48402731174314295;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BGGUBAXEHKWLMYIZOKCFFJJCKDSAYTSGEBAKVTPPRZARADEHHZPYXPMBADDUIQHERWQWSNRGTDUVNKQMWCE");

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
    msg.setTimeStamp(0.3037089638134377);
    msg.setSource(51327U);
    msg.setSourceEntity(36U);
    msg.setDestination(27957U);
    msg.setDestinationEntity(208U);
    msg.formation_name.assign("MHEUWDVSCUQUUMNTZVPKYOGTMHGAGNSZXLYRERYBONQFIDMFTVJUEXMWRWIAJTNBDNSBUGYLWRFZEGPOCVSDBIDBKWPWJNATTOVHLZZ");
    msg.reference_frame = 82U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14594U;
    tmp_msg_0.off_x = 0.8913253005551168;
    tmp_msg_0.off_y = 0.5548029689156971;
    tmp_msg_0.off_z = 0.03633588531673393;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UXYTMNPVODDABIIIKIANSXZCEZDSWTSYIPGNTIKXKGNRQ");

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
    msg.setTimeStamp(0.8906692521610987);
    msg.setSource(63551U);
    msg.setSourceEntity(117U);
    msg.setDestination(25108U);
    msg.setDestinationEntity(12U);
    msg.plan_ref = 102894075U;
    msg.id.assign("GQGRPACAYOVMGVLOHUYMPSKYSAQUIFTWQLADKLFZSYZEAKMNXEBMCRRGRONOXYCUDQRPGF");
    msg.memento.assign("TBNPRXUWTACWERSRGYBRCNJMMOWXQNZJIGLVWVAKFHQQUUURKIKHNICOLDVGOBGFUXSFHZZWJDEPIBFKEHJMHMAQJLGJQWOWLOGQZPCTOIJXDMJNBSTDVHSNEYPFSCBPPZFEFZDAVYHUFSVKQLFCMYTJARPBQKUMRQWPXMLAHZZKYBIHEWADTDUTSTGKPYLM");
    msg.group_name.assign("IZEEMBUCVSTOVVAIZQEJMINPEQBAUEYHQJDJBTINZQEEVUTPUBQJORXYNAUWNXWKVTZWYLCIRZNSFEHKWKCNOQUHVDKNGMXZDKAZIFYZRYMKOP");
    msg.formation_name.assign("LPJWZTVYDVDOEHLLGQTPRFRMKNYMHLMTOGUYZAQMTKWJVYYMEHQWMYCKMTLJDHXKYQRNWNUUJWVVJNCDRUXRFOUXQNZQCUNCZWCHJAKP");
    msg.plan_id.assign("ZXSBNOHHUTMALMCAVAEGSPDWJQQOFGJYQVEETYWVYVSGAWHYGAFIOIINDTECBDVIPNLGRILDBRPKJMPFSSUMGNFUKAEKOYLEBJJZEXDMQQXOBLZTZSHFDCIVASWMOAKKFBNFDEWCHWRMTCPNTRYHBYKHGZXZALUCXJXUAESUMLQYKWTIXKWGBKESZRHZDNRPF");
    msg.description.assign("WNPCBTZLMUNVDUTKAJSDAJBLWLIGJYGXWEACHTUTKJLYTGRO");
    msg.leader_speed = 0.37402691614857086;
    msg.leader_bank_lim = 0.8989102636595305;
    msg.pos_sim_err_lim = 0.7226783927730851;
    msg.pos_sim_err_wrn = 0.849538401199171;
    msg.pos_sim_err_timeout = 35398U;
    msg.converg_max = 0.24534794179901354;
    msg.converg_timeout = 47562U;
    msg.comms_timeout = 57319U;
    msg.turb_lim = 0.7716891911324848;
    msg.custom.assign("EFKBVCOPFLPVSPQBSGWPCNNPEOOMGXCJTMQQKPGSUVMYUKVIGGSQADTORQETJBNZSRLJNKBYZGHDLANV");

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
    msg.setTimeStamp(0.687660904591823);
    msg.setSource(13413U);
    msg.setSourceEntity(94U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(8U);
    msg.plan_ref = 985369014U;
    msg.id.assign("IZSMRIZANGRNQDESONGRRSHWVQYBTWVNTCIPJLJSFSVXCIVHUNBCWPDUUTNHOFYWRPTDJEVOLYFCEMIOYHQTMLVXDRMDOGUUAIGUBQOBFCKXLHMQRWNJDHZGCPGKTBFZMLKLTQHFXFRZOCLBYFUQMTWSYVIUZAEPEYUFKWBQHSXYKSZGEEGIKXLEKMRDVONTFPPDAIDPJVWSKLAJCZETJMZHJNAAJWYOWQHZAXKCKVOJMGP");
    msg.memento.assign("NKHDVJUKEMRWJLGXECSDIILRZDUENOKUUDEVWXDGAIEUTIWZEKXTDMSHEY");
    msg.group_name.assign("PBIYXVCBBAZGLSRYGDYHJCEDYZHFORUGDWBNTWPDTTRXPTCTOMNIPACEXRBIEHTMSVOAAHWXFLBZJZODXGFYQORPYAHKNPPIAVVBUKIJHKFJKUOXFIXAZKZIUQQHNGQMUKFWNCUWNEQLUHPGMREFVOSFNJJRQVELSBTCKDADIJGMKJLXNQHHLYUYKXCWSZWOEMJWBGSIVWCVQASDPBGV");
    msg.formation_name.assign("MRDZHVYUOVNCXMYGSTYOLJYQAGFSVLSNULMWCABRNNOGZLKKTDGTVDSZIXKEQKFPYOTPSYLWVBLIEPFIJYZKQKBJXQTRFGCJBISLPEDCKHJNPCNOPCWMBXEWTMESMXJKTUUAMIRXZBKAARCUXJZVEMTQQUGWIYNQQBWFLCWTVPDUFLZUVYXHDOGRLNIZHFIVEMOBIYFGDOGIRHOQRWFHMZEEQUSACHHSGAXPAHPJADTWKCFOSNXHJARV");
    msg.plan_id.assign("QQNSOYPYDBPJDVCTCLHFTXFOJXZOMXRODVUBPLKHHENDNZFPRSGBEAMOESKPFSCXVEUYYMA");
    msg.description.assign("YENMHWPEQPMDBFRLPSRBNEALRVFEYICVSQILKBOAQYJOWANAUQSHRFCNWGIGFUQVVDPONXYXCXHJERAVHXPEXSZKRJZDWXCLRBHGKAJPZBGQKMHQFIIIOYZSDNVUAUZGKWHIQEZODBDDIOAWEPPDLMRVGYUJFUAWCYUKHFSJOXTZYLCEN");
    msg.leader_speed = 0.062047710213002705;
    msg.leader_bank_lim = 0.6265648806207469;
    msg.pos_sim_err_lim = 0.10924359750810697;
    msg.pos_sim_err_wrn = 0.5083501933810253;
    msg.pos_sim_err_timeout = 36700U;
    msg.converg_max = 0.7782146810872557;
    msg.converg_timeout = 22471U;
    msg.comms_timeout = 60411U;
    msg.turb_lim = 0.9201409493005723;
    msg.custom.assign("TKBVOLZKIMBYPLHBEEQYDUTCSDXJGXQXDMODTNXRHZWRUTWEBNVHNBKMADIETBAXGPOBLHIZSAVFJCTSUHTIMNHCWXIGOCJGCSNZA");

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
    msg.setTimeStamp(0.16567673256824056);
    msg.setSource(50116U);
    msg.setSourceEntity(30U);
    msg.setDestination(26574U);
    msg.setDestinationEntity(227U);
    msg.plan_ref = 2153619105U;
    msg.id.assign("AGKNOLXPMIZABUFEQPELSPRBJZANWRRHGRQOSMALPZEQOSVONVWDNQLAGWEZVUKCHUPHHWIYMOPPEJSQKLXTCLVGNPBZYAHDPMTCDJSCDESDWRVEUCAGDMXKFFEFZTIXDQURUJKXQZILTOUGLOWTTMKBRJBRWIJSFUFXFKYUDZIJDIWBQOCPRB");
    msg.memento.assign("CWBOPSDESCCZDKCFYDIXWTSIJCRBOJKYBTGOWRXKNMJXZEJVGTBMLHLBDSXBQABPMMEZFXHUKSSPDIHJWXUWWVWJOIWYSRLFYYABFEMGPAPULJDGGEOTGXRHJVNECTLUILIFFAVFNXJKFASPKEZMVEQZKENHIYBOJQRQNZVXRRNIMPVHPUDA");
    msg.group_name.assign("ZFTKXJPGOBCSLRYESBZBWXJVGXKAUIXZXXIHHBHIOLUUGIEIDZDOMANNNLLNUNMYALYJXDENDCBJKPHRVKLVJFEGNAHRUECNSEVCKQEGYHRWPQWWTUMBGCDWAZQCRMVWXVODMGHSZFYOSARPSVEHXSBGNSQLYNTVJTOIFCQHXFMMYPPBDIITOWLYLYMTZSKZJAFLTIGQCYDJPWFRMAH");
    msg.formation_name.assign("ANSZGJKPQCBVEFRQOPCMPAVUYMTLQBYWGAHWYFYZOINSOBARIGHZSURJYHTXRHSZODDLUJMNRRDIGNURXFKJJHZIZVCTIVKQMLYAXFEYSYRYMAXPTGQ");
    msg.plan_id.assign("QKGHFFSRGSHAPVJDCIGHPBTOJSDMLYVSRFVUTQHAVRKNJMYVBSLGINIMEUCRAMLFOUXUCVHBXEWBJWRVJZCCTTFWBFDXGTSQIZLHFLLXKOTYSYHJWKOKMMPDPQKKXNWPRZBBIOZSW");
    msg.description.assign("GWLYDPRKFAQMUYQTBBKPOHWZISMLUTUTOODAZVIPEGWUJGPRLTGRAJVPOVAEKUEMYJAOKAINHACXYFPCEDZIFJXIYQBWHESVHQJDRYGLMQDDXYLRODWGVCGXFPSSCZNXHEFLNGHVKQSFQRSZBRBCSSRMWEJFDJQLRFTXTHVPOPMWMJYCAMXNVOXAWIUOXBQYNADUTLOZMQJLEGUXIFDCSYNEB");
    msg.leader_speed = 0.6622884978154991;
    msg.leader_bank_lim = 0.9440010194149265;
    msg.pos_sim_err_lim = 0.5659374200720372;
    msg.pos_sim_err_wrn = 0.9164154423445559;
    msg.pos_sim_err_timeout = 52243U;
    msg.converg_max = 0.9135168572396113;
    msg.converg_timeout = 9074U;
    msg.comms_timeout = 4313U;
    msg.turb_lim = 0.21396469683591224;
    msg.custom.assign("NMDZHNHLCIDJAMSISUBBFEYPXVLSWETXREEMXMIYFXAJCGHLJTJFRDQIZPJOVJRVTNQEAYSWSYEGBWBNNZWRQPVRL");

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
    msg.setTimeStamp(0.2568754197512424);
    msg.setSource(9790U);
    msg.setSourceEntity(20U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(175U);
    msg.plan_ref = 2455518964U;
    msg.id.assign("YBBURQLNZRXPIDOOSMCQYZQMHSRLKPKPQIOGVRECVYOZPKDEDGXHLCZBUKIOMVTFRPWZJWIAPTSIGGNXBXXCKVUTAAAVMJTKDCWYIHAXSZERAQNYWTGFVLEQFEHSFDYLELFTBZTBPUUJWGYHNZMZCNPBAJJJOGHBMNJSKSHDBIURAZIOJEPAVNPMWXQFRYQVLDKMNKSDGOTHHFNCSFYGURRMEVCAMOCNIHFGXLYEUWULXTTKUFBLJIDOXDWEW");
    msg.memento.assign("TNSQMKIVBMPFTVWOCENZXCICUQGEOMKUHKAYYHDBXTPSVZTSXFYHUPNMXMTHDFSQODJTXNDBHEFBIOPICSHUPYLOCJGIXVOQLMFPTJRWLLRGUKAKWZUIBFGMYAPNHOUZAZYRCSVLBUAWEMDELUQXVGPRDQFRHHWGXODWRCERXQJAUKSAJLXOIEGHSNBZBOJCMJWCPAPEIEKJFC");
    msg.control_src = 33433U;
    msg.control_ent = 161U;
    msg.timeout = 0.9246115472851112;
    msg.loiter_radius = 0.33176555374241024;
    msg.altitude_interval = 0.24946510106645114;

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
    msg.setTimeStamp(0.4787375769663409);
    msg.setSource(54692U);
    msg.setSourceEntity(207U);
    msg.setDestination(2805U);
    msg.setDestinationEntity(196U);
    msg.plan_ref = 3682681994U;
    msg.id.assign("IAYILKUVVTWSWIFQZGPMVGUNAFGBPHXMLJMAEUNTBPHXETGTECDCRETXJYKCMAGJLAPMRQZSRVQZOFFQCWOFJRHBIUHLXJBAGPYJNZICOKDKNNNQMJETSSXWIDPKHUXBUOUKYWRINYBXCBPODOLCGUFYZAFWVVFYKGOTHKMZHMVSORSBZADGQDEHAUGEMVZJEYVYT");
    msg.memento.assign("GMMOPNICXGAPRJFBAKZXHFRSVGWOPEBQCKYQGMYUILGWDEKTITAMYGWEURHJSZPZBRXIEWWJZFYXSPVNNMUEFYPUQTVJIVLURHYDXXDHTDIFOGQFAQOKQKHBVILRFZCWCJGAXZL");
    msg.control_src = 36201U;
    msg.control_ent = 5U;
    msg.timeout = 0.0606983753323328;
    msg.loiter_radius = 0.6813969334485208;
    msg.altitude_interval = 0.4944578428041241;

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
    msg.setTimeStamp(0.5939551638051651);
    msg.setSource(55339U);
    msg.setSourceEntity(7U);
    msg.setDestination(42654U);
    msg.setDestinationEntity(237U);
    msg.plan_ref = 574195702U;
    msg.id.assign("JVBPEOWRAYLYETNXXSEWOCZVWIIFPKDFUCMWWCBLIKVZOWUKNNJDFDXMJFHPUHEWMWFHQCHSEDXZGTWIJOSREMKELKSPBPUZZNVGYPMRRNUDHJIOXOGXZULGSQUHPQAYKDVGVUVLGXXQOJEKFSNLFBHARBZQMFQLHKDYVMCPVRNRDLBHRITYGJAUWNAUYXCMTQ");
    msg.memento.assign("XPHKIUBHYWEHFDNAMZNVJGYWPWLIQXRQNFBTDRENUEIMLQRWDXMNNDIRPFIAGKHSIECNUSLVKJUKPBMXHOXVGGZQJKWMUZWDLBYOETPETKOBAAHETMDCGYMDSCKJLHQUGKDSABLROWOXPZAOSUZJXQRLJFWYYAPBOPAEFVHWEQVCLEFTBKXCCIBASYUCDTMRAQCFFVONDBZPLCRRCFTTIMPSJSSRZZYHSLZJG");
    msg.control_src = 64627U;
    msg.control_ent = 11U;
    msg.timeout = 0.5620441754620727;
    msg.loiter_radius = 0.9681332049695949;
    msg.altitude_interval = 0.7707185983904591;

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
    msg.setTimeStamp(0.7786399433728661);
    msg.setSource(41757U);
    msg.setSourceEntity(188U);
    msg.setDestination(14423U);
    msg.setDestinationEntity(104U);
    msg.flags = 30U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.23562893991586875;
    tmp_msg_0.speed_units = 159U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6440941145242072;
    tmp_msg_1.z_units = 145U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8560843393124903;
    msg.lon = 0.7594252977034109;
    msg.radius = 0.4457222820061133;

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
    msg.setTimeStamp(0.27649732758414736);
    msg.setSource(48743U);
    msg.setSourceEntity(249U);
    msg.setDestination(1953U);
    msg.setDestinationEntity(212U);
    msg.flags = 175U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1605966069093554;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.20620222111910125;
    tmp_msg_1.z_units = 136U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1675437031916459;
    msg.lon = 0.841494998355971;
    msg.radius = 0.5383807411952416;

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
    msg.setTimeStamp(0.019899188267084145);
    msg.setSource(46695U);
    msg.setSourceEntity(136U);
    msg.setDestination(63847U);
    msg.setDestinationEntity(137U);
    msg.flags = 5U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.40184821675210214;
    tmp_msg_0.speed_units = 235U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9074705291233692;
    tmp_msg_1.z_units = 141U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6893590159791608;
    msg.lon = 0.3011968795858052;
    msg.radius = 0.942859669202831;

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
    msg.setTimeStamp(0.30862915060633245);
    msg.setSource(47750U);
    msg.setSourceEntity(170U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(238U);
    msg.control_src = 22754U;
    msg.control_ent = 102U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 49U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13976822651127796;
    tmp_tmp_msg_0_0.speed_units = 3U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9135674518358109;
    tmp_tmp_msg_0_1.z_units = 184U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8206543145882144;
    tmp_msg_0.lon = 0.4168093804336249;
    tmp_msg_0.radius = 0.06920419491126828;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
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
    msg.setTimeStamp(0.2283679802643246);
    msg.setSource(39136U);
    msg.setSourceEntity(211U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(37U);
    msg.control_src = 8547U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.03940844186808479;
    tmp_tmp_msg_0_0.speed_units = 42U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.18005082805890638;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.042665147801213554;
    tmp_msg_0.lon = 0.05916255313497942;
    tmp_msg_0.radius = 0.837336920251839;
    msg.reference.set(tmp_msg_0);
    msg.state = 35U;
    msg.proximity = 88U;

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
    msg.setTimeStamp(0.2523295509374379);
    msg.setSource(39853U);
    msg.setSourceEntity(83U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(4U);
    msg.control_src = 20399U;
    msg.control_ent = 63U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9526371661593889;
    tmp_tmp_msg_0_0.speed_units = 97U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2789313463231836;
    tmp_tmp_msg_0_1.z_units = 170U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9138409512279452;
    tmp_msg_0.lon = 0.46979004206485575;
    tmp_msg_0.radius = 0.7400207624985488;
    msg.reference.set(tmp_msg_0);
    msg.state = 252U;
    msg.proximity = 179U;

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
    msg.setTimeStamp(0.01631972981760177);
    msg.setSource(40013U);
    msg.setSourceEntity(33U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(25U);
    msg.ax_cmd = 0.6033408117242626;
    msg.ay_cmd = 0.31031333121972493;
    msg.az_cmd = 0.030905740278301397;
    msg.ax_des = 0.32603584456032364;
    msg.ay_des = 0.040571465872832224;
    msg.az_des = 0.8906492844563008;
    msg.virt_err_x = 0.43851133266323494;
    msg.virt_err_y = 0.45685418057424143;
    msg.virt_err_z = 0.5822863422604847;
    msg.surf_fdbk_x = 0.9716130090257091;
    msg.surf_fdbk_y = 0.16506480850437855;
    msg.surf_fdbk_z = 0.7636829617765662;
    msg.surf_unkn_x = 0.6622870813986453;
    msg.surf_unkn_y = 0.29980303979358525;
    msg.surf_unkn_z = 0.5409283224793097;
    msg.ss_x = 0.46304308378451786;
    msg.ss_y = 0.9307963023258219;
    msg.ss_z = 0.5745153273251761;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RQDSBYYYJEENH");
    tmp_msg_0.dist = 0.26177383437171853;
    tmp_msg_0.err = 0.43243532699096066;
    tmp_msg_0.ctrl_imp = 0.8860471118633245;
    tmp_msg_0.rel_dir_x = 0.18592902723363636;
    tmp_msg_0.rel_dir_y = 0.17369790637327798;
    tmp_msg_0.rel_dir_z = 0.20885957024840585;
    tmp_msg_0.err_x = 0.8608164829552473;
    tmp_msg_0.err_y = 0.11737074310809037;
    tmp_msg_0.err_z = 0.6636429199656871;
    tmp_msg_0.rf_err_x = 0.7296470186591474;
    tmp_msg_0.rf_err_y = 0.581161628987618;
    tmp_msg_0.rf_err_z = 0.8038527306430252;
    tmp_msg_0.rf_err_vx = 0.8479486375306623;
    tmp_msg_0.rf_err_vy = 0.47034191537436265;
    tmp_msg_0.rf_err_vz = 0.5724178678448513;
    tmp_msg_0.ss_x = 0.24348925998112814;
    tmp_msg_0.ss_y = 0.5859868250014993;
    tmp_msg_0.ss_z = 0.8596293193135056;
    tmp_msg_0.virt_err_x = 0.613116932690029;
    tmp_msg_0.virt_err_y = 0.07944787458277724;
    tmp_msg_0.virt_err_z = 0.7770736882154428;
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
    msg.setTimeStamp(0.17437973850614275);
    msg.setSource(30834U);
    msg.setSourceEntity(18U);
    msg.setDestination(46347U);
    msg.setDestinationEntity(160U);
    msg.ax_cmd = 0.5866332631385139;
    msg.ay_cmd = 0.7103338748353271;
    msg.az_cmd = 0.167651972150629;
    msg.ax_des = 0.7498354882042243;
    msg.ay_des = 0.42576558944887855;
    msg.az_des = 0.8558971564285799;
    msg.virt_err_x = 0.039693433470509354;
    msg.virt_err_y = 0.37130419622966904;
    msg.virt_err_z = 0.29692940212590635;
    msg.surf_fdbk_x = 0.4154023909362541;
    msg.surf_fdbk_y = 0.5704087161444464;
    msg.surf_fdbk_z = 0.02086608702290471;
    msg.surf_unkn_x = 0.3673198097739204;
    msg.surf_unkn_y = 0.3945044253461085;
    msg.surf_unkn_z = 0.2850279256366396;
    msg.ss_x = 0.7731149563084794;
    msg.ss_y = 0.005140687041903069;
    msg.ss_z = 0.8452773772765781;

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
    msg.setTimeStamp(0.06825902185597477);
    msg.setSource(22656U);
    msg.setSourceEntity(56U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(143U);
    msg.ax_cmd = 0.1352123870174815;
    msg.ay_cmd = 0.03325306267320982;
    msg.az_cmd = 0.9219049160728966;
    msg.ax_des = 0.12599287763203026;
    msg.ay_des = 0.5025340691503746;
    msg.az_des = 0.3422677655165277;
    msg.virt_err_x = 0.4944934194545979;
    msg.virt_err_y = 0.5899777325041059;
    msg.virt_err_z = 0.5250309644334803;
    msg.surf_fdbk_x = 0.4974890734188433;
    msg.surf_fdbk_y = 0.36431342344140016;
    msg.surf_fdbk_z = 0.10338582997274615;
    msg.surf_unkn_x = 0.7043965276370117;
    msg.surf_unkn_y = 0.6459039459317705;
    msg.surf_unkn_z = 0.3443306868256668;
    msg.ss_x = 0.17092721462831384;
    msg.ss_y = 0.3734270801368347;
    msg.ss_z = 0.023445981910709457;

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
    msg.setTimeStamp(0.45878731394766603);
    msg.setSource(4635U);
    msg.setSourceEntity(242U);
    msg.setDestination(37637U);
    msg.setDestinationEntity(97U);
    msg.s_id.assign("BAIBWUZWYHTMRFVCZREUZYJ");
    msg.dist = 0.02656782301272631;
    msg.err = 0.10196699182001945;
    msg.ctrl_imp = 0.7749112406967954;
    msg.rel_dir_x = 0.8658918253219108;
    msg.rel_dir_y = 0.29891565888864313;
    msg.rel_dir_z = 0.3989559523916769;
    msg.err_x = 0.24836802525047907;
    msg.err_y = 0.3475653544104742;
    msg.err_z = 0.8973057352992576;
    msg.rf_err_x = 0.3920742568565856;
    msg.rf_err_y = 0.03183008401245102;
    msg.rf_err_z = 0.9667836835145611;
    msg.rf_err_vx = 0.6946733738096484;
    msg.rf_err_vy = 0.4278503117548075;
    msg.rf_err_vz = 0.4486164325479327;
    msg.ss_x = 0.3955702910026845;
    msg.ss_y = 0.5032493636867283;
    msg.ss_z = 0.5972593974147419;
    msg.virt_err_x = 0.6492574073633905;
    msg.virt_err_y = 0.6549432431264609;
    msg.virt_err_z = 0.9832240133184806;

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
    msg.setTimeStamp(0.5188545505290034);
    msg.setSource(44718U);
    msg.setSourceEntity(110U);
    msg.setDestination(28349U);
    msg.setDestinationEntity(252U);
    msg.s_id.assign("LNMUJYCGXJRNUMBRCLDLQOFXXNPYXEOXHDM");
    msg.dist = 0.5093621670695111;
    msg.err = 0.1590772346132432;
    msg.ctrl_imp = 0.26138247858910957;
    msg.rel_dir_x = 0.12953977053471954;
    msg.rel_dir_y = 0.591717131244061;
    msg.rel_dir_z = 0.9956376969850987;
    msg.err_x = 0.4285712059201571;
    msg.err_y = 0.7240592102810969;
    msg.err_z = 0.2994223357370527;
    msg.rf_err_x = 0.43965185671309703;
    msg.rf_err_y = 0.06448447809188451;
    msg.rf_err_z = 0.011886585738807076;
    msg.rf_err_vx = 0.48452845485139506;
    msg.rf_err_vy = 0.9316148387458943;
    msg.rf_err_vz = 0.24400067182851115;
    msg.ss_x = 0.634220999013527;
    msg.ss_y = 0.15718507865909592;
    msg.ss_z = 0.09379489228502513;
    msg.virt_err_x = 0.9487308532290635;
    msg.virt_err_y = 0.08985113995615246;
    msg.virt_err_z = 0.30289103270665096;

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
    msg.setTimeStamp(0.4644211194132055);
    msg.setSource(8213U);
    msg.setSourceEntity(163U);
    msg.setDestination(17303U);
    msg.setDestinationEntity(103U);
    msg.s_id.assign("OCTJPLEGZJNIRUDMWWPTKJHXAHIEINVUALQNFFLWNTKPXSGEBJNXYCWUHBPMKPYYTURAZGAFRHNXJTKRDAAVHKZNXNSWQRCMZ");
    msg.dist = 0.6825995463658348;
    msg.err = 0.11043720687711078;
    msg.ctrl_imp = 0.8867260705812857;
    msg.rel_dir_x = 0.5556108844038424;
    msg.rel_dir_y = 0.6500368643340513;
    msg.rel_dir_z = 0.422299577889523;
    msg.err_x = 0.2705016837933727;
    msg.err_y = 0.5775613533432433;
    msg.err_z = 0.11854405985208805;
    msg.rf_err_x = 0.678137517554399;
    msg.rf_err_y = 0.5882321882148269;
    msg.rf_err_z = 0.23399998062260008;
    msg.rf_err_vx = 0.2734947678105315;
    msg.rf_err_vy = 0.653674570762236;
    msg.rf_err_vz = 0.7288968246691766;
    msg.ss_x = 0.16963888585325326;
    msg.ss_y = 0.28884224859372976;
    msg.ss_z = 0.22971399169437168;
    msg.virt_err_x = 0.14068698931471313;
    msg.virt_err_y = 0.9188338777732961;
    msg.virt_err_z = 0.4109992854020369;

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
    msg.setTimeStamp(0.9214973449929649);
    msg.setSource(65299U);
    msg.setSourceEntity(227U);
    msg.setDestination(31892U);
    msg.setDestinationEntity(54U);
    msg.plan_ref = 1644734908U;
    msg.id.assign("KFVQZJNJHSVRKEAOVHLINNTGUAOWGTDZAYMDBGGDRCRFAPUBSSLOPCARWWHNYMXQSGXPKDZFERNFQUECYKQDPQYKJXIIZYVYBORDFIUTYAPWCWSAHBRYWCGZEKVVYJNLUEFUIJEHCIMGTHXTTNHXPKFZBLBCCMFIWMZKWKODUUVMSRIEZQZLIMJDIYSOH");
    msg.memento.assign("ZFNZTJQSSUOMHGYXMJNPRMA");
    msg.timeout = 57938U;
    msg.rpm = 0.6425788957581949;
    msg.direction = 4U;
    msg.custom.assign("WUZIMZJBTNZGXCSMMEQXUXGGIDUHCLHPVAPZTJKHKENNAYTYTDHLYWVINAHZRSXALCBONVDPNJANXDCWTPTBMYSFPIBLJLACCUFVOCPPKTQHAGRPIHBUOBYTULEQSFFMDMRORJWESVKQIWJSLJBBQKTSFIDGMIEVRYBKCAUYXXAVEZTNOYRV");

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
    msg.setTimeStamp(0.6063533432303677);
    msg.setSource(42986U);
    msg.setSourceEntity(39U);
    msg.setDestination(53563U);
    msg.setDestinationEntity(28U);
    msg.plan_ref = 1986851U;
    msg.id.assign("FWBHOLVFAHVXZSHNOQJPMQXNKWWVLXZEUJSPEOZOCBQFULFSTAHXUUXATMMYSZICPLZGEIQESXGGAENLODZHSANJDEVCSPYYHVGYSHTKJZTQLGAVRLNXXTGVNOTYYOTGDFPRIFXPQKNRVJQSMZJGAXCRBIRCAWAKWPIM");
    msg.memento.assign("YEUONFROZWMUFZFEYJXWWOXIWJEJKKWOZLRLMQLMDAYACZVBYSXPGCGBEKWINNIDSLYEIBGUHBMVAPKHJXQUZ");
    msg.timeout = 41635U;
    msg.rpm = 0.98861068554249;
    msg.direction = 169U;
    msg.custom.assign("ARVLXHBYLYSZFVIZSEQQXVCGDUHJJBQRGRKGQEMFBEAXXYIKBITFZTIOC");

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
    msg.setTimeStamp(0.3282911881482711);
    msg.setSource(63970U);
    msg.setSourceEntity(73U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(64U);
    msg.plan_ref = 941778312U;
    msg.id.assign("YDQBGRNPLJMPXKSNOHOQKJWKBRCDNRYGTTFTJZIHQXBOPVFL");
    msg.memento.assign("MFJACIZOENXRPRHVWUFKZVJDMBYGUOWNGNPCUTHWYYD");
    msg.timeout = 17175U;
    msg.rpm = 0.4606529181706124;
    msg.direction = 176U;
    msg.custom.assign("PRNRZPERMLGMOBQOBZBFHQSIJJRKXWULHHOHOPVPTWWCSGCFZARGTQDJNJBLMTFYMSPKLRNSDFEVPBCPICJKIRH");

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
    IMC::Memento msg;
    msg.setTimeStamp(0.7164531646891952);
    msg.setSource(14172U);
    msg.setSourceEntity(163U);
    msg.setDestination(54777U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 3894455687U;
    msg.id.assign("ZJDBXRKWFAIGUWHMJFFXDFVLPTYNPBAWZSIFTGOEYZRXUPMRQJCQVXVHNBNYBLQBDXOMSZKCHRYCYBUALYUPLYAVJCODAQWTWKITAJFAIMAUTEMHXKEQPKXQGRGWOEISTEIGESOYGHLKQL");
    msg.memento.assign("EKXOJERFMWPMINFIRWJSQLAXRKYJNHDYEBCMPDRWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.3280392107397502);
    msg.setSource(8111U);
    msg.setSourceEntity(206U);
    msg.setDestination(59174U);
    msg.setDestinationEntity(214U);
    msg.plan_ref = 2962462965U;
    msg.id.assign("AKOUQQECUPPJVWEKSKAVNZUADQZHUFRETVEWOXADPAFPWVXBGPWYJTO");
    msg.memento.assign("MQEWEQRSONLOCKAYLNVXVQYLYOZSKGXMPLZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.43824630329900327);
    msg.setSource(52398U);
    msg.setSourceEntity(37U);
    msg.setDestination(13312U);
    msg.setDestinationEntity(157U);
    msg.plan_ref = 1408769834U;
    msg.id.assign("YLKUYCREAJJTNSOKOZVANUCHAXYWBCKXWFGEQKGMQUGCJOBZNRDWYMPHXMBHOLYVKUSFCLHDUSJDELCIJAIKANCZZMXSZDSQAPWUFIIMJHFIVUQMIOMKWJGGNWPVGJDQLXNWQHECWTZGEWUKAXGONJTREFEVPVYMECTDTBGHTYOBHPHXLRZWXGRCSVFOEIDRDBFXULRKVRNDAIHFFYQSBMLDUSOPT");
    msg.memento.assign("ZJQUBTEPAHOIQNPZZBGNXERAIOFXNHDQFFHQQZWICIFNEBKFLUEDRUSJBGRICLMTBUBCHMZNMKRLUWIMMOSGXZNDBOGNSPJWSDPCWET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2551454760218882);
    msg.setSource(45486U);
    msg.setSourceEntity(20U);
    msg.setDestination(25957U);
    msg.setDestinationEntity(21U);
    msg.op_mode = 99U;
    msg.error_count = 200U;
    msg.error_ents.assign("QZYSKCKRZUPOAIJACWDUMYXMABTWEWDKGJWWRCIKOMYERZZJILGQVMOYPZDDXSNWOUWQGLFJHUNAOHRBHOYENDVHKSFSIRZ");
    msg.maneuver_type = 56934U;
    msg.maneuver_stime = 0.38066196755441184;
    msg.maneuver_eta = 13967U;
    msg.control_loops = 2028621369U;
    msg.flags = 80U;
    msg.last_error.assign("FLATNPDOLGACDUC");
    msg.last_error_time = 0.7900192392398795;

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
    msg.setTimeStamp(0.8701664371936966);
    msg.setSource(59569U);
    msg.setSourceEntity(209U);
    msg.setDestination(17044U);
    msg.setDestinationEntity(230U);
    msg.op_mode = 4U;
    msg.error_count = 68U;
    msg.error_ents.assign("NBGBVTAZBJXPPGGVASMSQUZRWQYNXCTXFWROEWGKHOEHORYHAIKBSMUSNTSRGJWXOOSRFLUZEDCDUGFEAFECVYQFHQNYPPOPJHHQSAMWLRGINZTBHOTITSHARDOCKAZBWYJDIVIYLYOJBWUDVPQZVMVOK");
    msg.maneuver_type = 47932U;
    msg.maneuver_stime = 0.18034709876127064;
    msg.maneuver_eta = 27777U;
    msg.control_loops = 115581648U;
    msg.flags = 176U;
    msg.last_error.assign("QGMXPLEUFEFXSMKHNRDKCJQGOLRSWXDVZCMITKVOCLAXTSQUXCFGIOAMCFAJOCYRTBQPDKIKATBVYVNRIZNQ");
    msg.last_error_time = 0.696094721773958;

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
    msg.setTimeStamp(0.750034746195815);
    msg.setSource(64221U);
    msg.setSourceEntity(176U);
    msg.setDestination(14292U);
    msg.setDestinationEntity(88U);
    msg.op_mode = 144U;
    msg.error_count = 62U;
    msg.error_ents.assign("TUWIAPBDEWDUXFUKIHSPXUAAZHBBTWIEZQIOWZAHVOMMRCENJIQHGVNKJLOXSL");
    msg.maneuver_type = 4328U;
    msg.maneuver_stime = 0.24169597963821776;
    msg.maneuver_eta = 19685U;
    msg.control_loops = 2265304830U;
    msg.flags = 176U;
    msg.last_error.assign("OOIQGUEXIACDCWPFQUSVCBESZDRKWGXSIAEAKYWLJLKYZUJAKVLMUOZPOQTQVDLNFMWBNPKEWRSXBRFVRFNWIFNTDSMJKSXNKRHQZAMCCXHILPGKQCVJBXNSOPOJTNTUGWHZYGMFPNMSPLEYEYGBIVAVEAHLXEOOTLIFUUTLBHWBAMYHLARSIGNXDJGIRRTEBJXYIPPKECVMZMTVKCZHCHQXUDUFMTS");
    msg.last_error_time = 0.9297030718131021;

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
    msg.setTimeStamp(0.4805737332620078);
    msg.setSource(32158U);
    msg.setSourceEntity(172U);
    msg.setDestination(54956U);
    msg.setDestinationEntity(74U);
    msg.type = 8U;
    msg.request_id = 27369U;
    msg.command = 92U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.plan_ref = 795794654U;
    tmp_msg_0.id.assign("RAPLEXCCPJGFLOGMANPITHJOEGZAOWRROZEBPEGSVFBMINUSBGAVYTFMETZSXZUXKYIVDOKBUHNMACGNLYUYFQPQHWIKXIDPRIRXMGQSPRUVQSXXTYLPIRSUOWTIHJVJ");
    tmp_msg_0.memento.assign("NYWSLRJUDFXUPZEKKFZCJOACKFHMTPSMTGSFVBVLAFZDHOGRMZTZGN");
    tmp_msg_0.timeout = 41950U;
    tmp_msg_0.lat = 0.6888458453681781;
    tmp_msg_0.lon = 0.46342540432106805;
    tmp_msg_0.z = 0.6594057889618972;
    tmp_msg_0.z_units = 212U;
    tmp_msg_0.amplitude = 0.7926939949094496;
    tmp_msg_0.pitch = 0.04734913973560839;
    tmp_msg_0.speed = 0.40532985639064856;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.custom.assign("BLJMPVTRHHXZKIWQNUTCEVNWAMERHVCU");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("DSSFMXWKAOWYRRNYTBDPOMOWJEHXNTVRLEUAKMGATIVKBXNBCEMHWRDPAXTHBNFWKMJPYISCZJYVUKDXLCPUHBQMCMCWUSSZOQVZJIHLBLCOQFYNGLPBIUOVOMQOSRPQDEXTWQHF");

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
    msg.setTimeStamp(0.4471901651518938);
    msg.setSource(7687U);
    msg.setSourceEntity(198U);
    msg.setDestination(64996U);
    msg.setDestinationEntity(248U);
    msg.type = 8U;
    msg.request_id = 19613U;
    msg.command = 40U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.plan_ref = 975359055U;
    tmp_msg_0.id.assign("CBJUPWVLGZCQUTKMGNMDNSRJZFKNVHWEVOOOIGTLOOWIPLBHRSXUXBBLKKBKBVLMPAPNPEHSJMYJTDXFYMZRGRTQXIMJXBRFSEDFJWHKVWZWHRUGHELJQCJMQDVHNCGIPYITZMTQQ");
    tmp_msg_0.memento.assign("YVHXXIWXBZAFKMCZUVRTKFGXRQUSTQUNOSUSJPQVEECSBSWTYIRJGFFEXDCFGWQHJCGOTDQSKNLZIBQTDBVGPZQNLUKFEMXBJABISSMKRZFWRHNGTHNLHBNMLZPAJSUFPZLHRJPEDVBCPRYLVOMPLZWVNOBFLISVHIYKXVXTDZEAXZKDPAMMMJQYNCHMTOIXYAINHTGRBQIENKYJLADYUOPAWCUDKYCPWICOOKTGJRDERAEVEJ");
    tmp_msg_0.timeout = 43162U;
    tmp_msg_0.lat = 0.6290834822594267;
    tmp_msg_0.lon = 0.7307540005157374;
    tmp_msg_0.z = 0.42656793457085485;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.speed = 0.4692760291639101;
    tmp_msg_0.speed_units = 211U;
    tmp_msg_0.bearing = 0.5540778517307823;
    tmp_msg_0.cross_angle = 0.3325087556526922;
    tmp_msg_0.width = 0.32916679187816433;
    tmp_msg_0.length = 0.5894679271349116;
    tmp_msg_0.hstep = 0.07490476314245254;
    tmp_msg_0.coff = 254U;
    tmp_msg_0.alternation = 213U;
    tmp_msg_0.flags = 209U;
    tmp_msg_0.custom.assign("ATFSSMYQHUINRODUUKYBFPJDLCWRFOQCPTANC");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("PPRXNSNFSCAKYYHZPLMQLFDLXEKPFQPUJXWZIOAOANOAHDOIRYZTDUCYVTJJKPPQFRVZWKLQWVERHGXQBBSESZGMFRPAITDIBBMIPCSQXUWHIMFNFYEVYKYSOCRELTVMYNVUGOANXAGUHWYEXIQGAGWBGOTOVJWMVZSNUWRDCEVHGHENDWXDNCGTBQURPELYJLGMAXJBBQBHX");

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
    msg.setTimeStamp(0.8352595211233479);
    msg.setSource(30131U);
    msg.setSourceEntity(51U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(139U);
    msg.type = 3U;
    msg.request_id = 2697U;
    msg.command = 128U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.plan_ref = 1682155396U;
    tmp_msg_0.id.assign("CFYWWTQAZCKLGVWEFBMNHNTPKNJPSPGVGQTRUVMYHYGTOTVDDOJFWFUGRDUOLLVCLTGVJPDWKRHUFDJIBYWJAVSQZEJZDYNDWITWMIASBKOZEMXXUKGFZMOKVQGPBETQRDREEXMXJJUCK");
    tmp_msg_0.memento.assign("JSZLZPWAGYGJYKJJWOLVWCXUPVVMUOIVCHCAEDJPTYVCLDQKBDFUUFESILKFPSZXSBXIFKNSGOBREZVNQMBESDHTKQYOIJXJZGNJWRRJVCAVAQEOTKGTTSPPGBAGBPQLBTYEOBLCFUNNHXIEBIFINPDNDSZSWBRUUKTCSURRQEPMHMWUREWVTDQYRAILHXQVZXZAHMDWCXOEMFANODFYFLHNCDKRTWMFPAJXQMCMLGTYKIZHOIWGMOUZGAYKHL");
    tmp_msg_0.timeout = 12974U;
    tmp_msg_0.lat = 0.5928698438082388;
    tmp_msg_0.lon = 0.4825367091752729;
    tmp_msg_0.z = 0.37013567450345997;
    tmp_msg_0.z_units = 143U;
    tmp_msg_0.speed = 0.02619439535418233;
    tmp_msg_0.speed_units = 42U;
    tmp_msg_0.roll = 0.7073167305445393;
    tmp_msg_0.pitch = 0.38136700174755467;
    tmp_msg_0.yaw = 0.6618100194457607;
    tmp_msg_0.custom.assign("LTOGIGJLCXDLBUI");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("VKPSCMLXQXPRTCBJMBJLOTLNJZYBEXAOFTDALOEFYDJOQTFJRZGNSLVLGNQVW");

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
    msg.setTimeStamp(0.5673446443627087);
    msg.setSource(29083U);
    msg.setSourceEntity(207U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(152U);
    msg.command = 242U;
    msg.entities.assign("GYBCURUOMYTBFHBUDDMORKQVHOXDHPJVPSTRNAFQMSMINOKJYMSXLLKNLUKJGCSFHTTSWMNCISOPHZAYOXCWKVWBFALSRFHCWUGZERXQNEBKIRZJOYHDIEJMVYCINUTQQPKPZEJTOGZFHJGVWAIPLDQJGHSBGFKFGLBACDWKUYUEUIGVDVZQLSAQINQIQBYMTCRZXOBFXJABLPTYNZEVWNN");

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
    msg.setTimeStamp(0.86383883607416);
    msg.setSource(9417U);
    msg.setSourceEntity(147U);
    msg.setDestination(20496U);
    msg.setDestinationEntity(5U);
    msg.command = 92U;
    msg.entities.assign("MWWESICNLQBEDTAVQIMXNRBGCMDHXGJTBHMBKAERBXLNUXSTYCTISDVJYSIIUMNWIGHFYLZAQYSATWSJOHSPZUECXDIKBKADZPDHAUBZFBHKXCPTWQUKLRFFANPCGWUXJQOZDDDXGEHOUCLVJVVWEERSZZPTOFMRGPKEFZCZXLWVWVLILTQKESKGNBPCYUMNREQAP");

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
    msg.setTimeStamp(0.7188415583343877);
    msg.setSource(22885U);
    msg.setSourceEntity(213U);
    msg.setDestination(44016U);
    msg.setDestinationEntity(27U);
    msg.command = 90U;
    msg.entities.assign("RWKVPIEJPQXPECWVNA");

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
    msg.setTimeStamp(0.5945059873133517);
    msg.setSource(51060U);
    msg.setSourceEntity(114U);
    msg.setDestination(58138U);
    msg.setDestinationEntity(59U);
    msg.mcount = 128U;
    msg.mnames.assign("TKXXCXMXFWJIRBAGYAQEJVDGHDTGVRWHUYGKJFYSPVQIRMNLWSPKSNVRERXSXPLOGFTWEODBEMYZPGAUUYSJPQSZUMCMMVATPAVEWNNNDBZHNBWCZVJLGILFKUBYDLKIDWINPTRCDQNWFBZTIXIJHJBMBBYLOCHUOGCNZLCOUFATMQXJUSQDKRTOIFKZYKYHRCLSWAZDCFNBQIQLVPLOPHGKVHJEIDTTMZUFERGOOESAAJF");
    msg.ecount = 31U;
    msg.enames.assign("QRGQYEACILVJTHPAQCFOQDIXLMDPTJLVRSGZHDFMIOHEKGLFIWTTOAKEWPH");
    msg.ccount = 171U;
    msg.cnames.assign("MWSZKUVOPQEWUUYDXUHIKEXBCJORRDTEMGYEOIHSRULJEMJSNHYKWGWYOXKJJNNPRFZGQANQFPRGPJBNJJCQFCEXDIKTBTLFAMQVHPGWJOVOJYDVLAQKFAHDSLMVMXZRSPNLULSACBBLFTQGTLVIALUKSUNBNPMETVTXGDZGNYACOKIRZUYFTCYIWEHQCGXIMDXOFEQYNCWKHSCWPUHVXTDQYSAABHAIICSZRWMEBLODVXBPWGRZKFH");
    msg.last_error.assign("WGMFJFXGUKMKSQWFXAGZOFKOXXQB");
    msg.last_error_time = 0.9467676917041635;

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
    msg.setTimeStamp(0.3250781846356924);
    msg.setSource(58481U);
    msg.setSourceEntity(73U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(219U);
    msg.mcount = 70U;
    msg.mnames.assign("UDWUDDFYNJIGYVHGJUPLHCOBGQDEYTACLLLMSXYSCQNBZVTMRXGSTWZGNONHPKKUFJLXQMSEISCKIEWZOFEVUERUFPGHOUNOVBYLVKNIARZAJVMMVXDEGJFMTWJIZSPEZBBIKKKPXNRWYXOSONURDTCARZJILBTLAHDCEZ");
    msg.ecount = 0U;
    msg.enames.assign("JWXHLSYLVSFYCPWEIBINDXHVOKQHZF");
    msg.ccount = 128U;
    msg.cnames.assign("RJOWCQSNLLXGXLCWLWJUVHMCUABXKUICWFBY");
    msg.last_error.assign("XQJVQILBDPMGUQNBHXJCIIQYIJNPFEFKKRVNUZNFDPMKVLFLENWOTWEDNQCCOAYLEHGLQZMWUSVUHETZCMHBYDSVABJAPXMYRHFEPFJMQLWXLSKOPUDZTYIXBZWLVOUJETOBKI");
    msg.last_error_time = 0.22308170110463776;

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
    msg.setTimeStamp(0.48352015507211044);
    msg.setSource(7308U);
    msg.setSourceEntity(5U);
    msg.setDestination(44790U);
    msg.setDestinationEntity(157U);
    msg.mcount = 152U;
    msg.mnames.assign("RGSUCIDIAYZOXONUPNOTKAZMFOOEYRMAHVQBKJSAGOQMEIDHHTRVLMXFHVIAUXJCQFAZPOSNZYRERCABAFPPEQYGTKCJCRJWFNDNRNLSWZTKGBJDIKUNSULWNKHHLUIPYWJUPKKYSWDLDQJFUFLQWSSXCTTQBQTBFENGXBLMTUDPWRDFWINGXJBMZKIZGLITEIZTXYGHZPBJAQAWD");
    msg.ecount = 16U;
    msg.enames.assign("ZSYWMPFPQCJTROTDRCJFMTIVAYVLSWLRLSXYCUQDLHCUHKZOUSYBHNKQBIVMDAWDGOGEJWRIGXZUNKXKQYGWNTSOMGTQUHXHFPDWMIYONQHYABUPETANQSSPIMZBJEGDFPHZTINCEHGFWEUXRIOYXRXLEKEKPGFPXVAUNVSNADSTPDLOKIVGMBZGJTQBLQHFYRCDWWETFVUYLRKJJBORDCBCVSZVZCWIQBKZOUEHFVMMINCKAAMOJRAJNFJLAP");
    msg.ccount = 177U;
    msg.cnames.assign("XLIWVTAHLISWUHSQYDZKTOUKFGWXNGJRXRGRTAQLHOBNXMDZARDQPOYDNCPUZQIBMIIBCKQJVVSSVMNURVCJODUTHPYLSCKSWWKLUGCVCFCSELZPXVJOAFJXBJTKYHENMVGXVOECFQXUW");
    msg.last_error.assign("YUJIBPSGLDTDOYPKHGHFJKLFNAVJYGIXMELZXBVMZBKTRCXLCROKQIHGTVVOTMBCHMRKITUUPHCWUWNGBXNEXJASBNFANELZGWURAYLGVMBUMOCKLZBIXQWBNDEMQWUZUYJPGSAXNKNANLZOIDHMSF");
    msg.last_error_time = 0.8849982062378067;

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
    msg.setTimeStamp(0.27936370017170853);
    msg.setSource(57963U);
    msg.setSourceEntity(31U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(108U);
    msg.mask = 135U;
    msg.max_depth = 0.48155481914252907;
    msg.min_altitude = 0.5788913774789748;
    msg.max_altitude = 0.6987588114422562;
    msg.min_speed = 0.8253975514346349;
    msg.max_speed = 0.6588863757176121;
    msg.max_vrate = 0.9035250970574673;
    msg.lat = 0.12330324278593408;
    msg.lon = 0.040200919871978824;
    msg.orientation = 0.8923817292093407;
    msg.width = 0.654936677119594;
    msg.length = 0.9871766551273109;

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
    msg.setTimeStamp(0.7162813090693914);
    msg.setSource(17248U);
    msg.setSourceEntity(63U);
    msg.setDestination(34229U);
    msg.setDestinationEntity(117U);
    msg.mask = 193U;
    msg.max_depth = 0.14687615863278614;
    msg.min_altitude = 0.1805488119155022;
    msg.max_altitude = 0.541781099547061;
    msg.min_speed = 0.8083267178773956;
    msg.max_speed = 0.8972595075523698;
    msg.max_vrate = 0.5668388140875865;
    msg.lat = 0.33358698459732006;
    msg.lon = 0.23206596217548459;
    msg.orientation = 0.4358234152977708;
    msg.width = 0.9448224342753775;
    msg.length = 0.24606121624199517;

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
    msg.setTimeStamp(0.32590111072293027);
    msg.setSource(44042U);
    msg.setSourceEntity(15U);
    msg.setDestination(43257U);
    msg.setDestinationEntity(124U);
    msg.mask = 142U;
    msg.max_depth = 0.7460004372416842;
    msg.min_altitude = 0.7535636069386139;
    msg.max_altitude = 0.16820886829352388;
    msg.min_speed = 0.5005155213945651;
    msg.max_speed = 0.8626378403543975;
    msg.max_vrate = 0.3392570821735309;
    msg.lat = 0.0393245728835645;
    msg.lon = 0.5532489472064985;
    msg.orientation = 0.9048608871632973;
    msg.width = 0.8924695295752768;
    msg.length = 0.8951428916046433;

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
    msg.setTimeStamp(0.7507716989976899);
    msg.setSource(35995U);
    msg.setSourceEntity(35U);
    msg.setDestination(215U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.599132775726667);
    msg.setSource(7061U);
    msg.setSourceEntity(136U);
    msg.setDestination(9791U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.2101664982219581);
    msg.setSource(18980U);
    msg.setSourceEntity(148U);
    msg.setDestination(47919U);
    msg.setDestinationEntity(17U);

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
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.8528166539441357);
    msg.setSource(50038U);
    msg.setSourceEntity(41U);
    msg.setDestination(42539U);
    msg.setDestinationEntity(104U);
    msg.enable = 250U;
    msg.mask = 1005692622U;
    msg.scope_ref = 3339685277U;

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
    msg.setTimeStamp(0.1963352491828353);
    msg.setSource(52677U);
    msg.setSourceEntity(102U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(147U);
    msg.enable = 157U;
    msg.mask = 1750621669U;
    msg.scope_ref = 1506857225U;

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
    msg.setTimeStamp(0.48300397979972165);
    msg.setSource(28119U);
    msg.setSourceEntity(65U);
    msg.setDestination(27137U);
    msg.setDestinationEntity(241U);
    msg.enable = 205U;
    msg.mask = 3843359837U;
    msg.scope_ref = 1454432650U;

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
    msg.setTimeStamp(0.7153339360035887);
    msg.setSource(50459U);
    msg.setSourceEntity(165U);
    msg.setDestination(37701U);
    msg.setDestinationEntity(193U);
    msg.medium = 180U;

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
    msg.setTimeStamp(0.9892073187076809);
    msg.setSource(29287U);
    msg.setSourceEntity(113U);
    msg.setDestination(37264U);
    msg.setDestinationEntity(54U);
    msg.medium = 251U;

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
    msg.setTimeStamp(0.021190057554066444);
    msg.setSource(25943U);
    msg.setSourceEntity(124U);
    msg.setDestination(35584U);
    msg.setDestinationEntity(6U);
    msg.medium = 82U;

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
    msg.setTimeStamp(0.6305179509130837);
    msg.setSource(63230U);
    msg.setSourceEntity(176U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(31U);
    msg.value = 0.4851101029571282;
    msg.type = 177U;

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
    msg.setTimeStamp(0.04231670189607106);
    msg.setSource(42899U);
    msg.setSourceEntity(49U);
    msg.setDestination(16049U);
    msg.setDestinationEntity(31U);
    msg.value = 0.04775508630057068;
    msg.type = 24U;

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
    msg.setTimeStamp(0.09869813947846429);
    msg.setSource(22987U);
    msg.setSourceEntity(26U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(42U);
    msg.value = 0.33624701533309964;
    msg.type = 14U;

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
    msg.setTimeStamp(0.9468968128597811);
    msg.setSource(3145U);
    msg.setSourceEntity(8U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(121U);
    msg.possimerr = 0.4951484237482042;
    msg.converg = 0.9266234286108296;
    msg.turbulence = 0.1797551897014319;
    msg.possimmon = 198U;
    msg.commmon = 160U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.42664589239560713);
    msg.setSource(54677U);
    msg.setSourceEntity(35U);
    msg.setDestination(13553U);
    msg.setDestinationEntity(93U);
    msg.possimerr = 0.008358834229861833;
    msg.converg = 0.8136660759499678;
    msg.turbulence = 0.04501677259016257;
    msg.possimmon = 147U;
    msg.commmon = 154U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.1225784377085738);
    msg.setSource(7334U);
    msg.setSourceEntity(17U);
    msg.setDestination(47621U);
    msg.setDestinationEntity(95U);
    msg.possimerr = 0.4442601295552856;
    msg.converg = 0.11525179647427186;
    msg.turbulence = 0.14676050827870502;
    msg.possimmon = 119U;
    msg.commmon = 250U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.16708737625424597);
    msg.setSource(13405U);
    msg.setSourceEntity(203U);
    msg.setDestination(16431U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 118U;
    msg.mode.assign("GUFULOVQFIOWYK");

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
    msg.setTimeStamp(0.7874496383599461);
    msg.setSource(29880U);
    msg.setSourceEntity(22U);
    msg.setDestination(30111U);
    msg.setDestinationEntity(133U);
    msg.autonomy = 105U;
    msg.mode.assign("QNGCSJMUVQLDIQKXIGKLWEKFXSATSTOMYMMSZABIVVDILOUDSDIETICOCGPADROIMYM");

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
    msg.setTimeStamp(0.6641335011306725);
    msg.setSource(32318U);
    msg.setSourceEntity(47U);
    msg.setDestination(63185U);
    msg.setDestinationEntity(40U);
    msg.autonomy = 76U;
    msg.mode.assign("SQAEBUKWEJPOFKNTXAQPLYRYJACWSSOOCDONVASDMQKVCYTILAHCHWUQFFGDFKTQRYGGUXFBPMRPPSJKDOIMXQWUAIFTBEGTVKSWEWGHNLNOGRYVJTXRMZDSLLIJAQZNEVBBHBUMBUTXYREHXIAWUJHGQGDODLRILBCUYKDINRJKKSPIDWZPJAPFIUNGB");

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
    msg.setTimeStamp(0.32806027758351874);
    msg.setSource(19302U);
    msg.setSourceEntity(87U);
    msg.setDestination(50916U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.6516365693358003);
    msg.setSource(43439U);
    msg.setSourceEntity(202U);
    msg.setDestination(6682U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.6921340107507867);
    msg.setSource(52771U);
    msg.setSourceEntity(16U);
    msg.setDestination(45038U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.4985793522130024);
    msg.setSource(34311U);
    msg.setSourceEntity(237U);
    msg.setDestination(14681U);
    msg.setDestinationEntity(196U);
    msg.plan_id.assign("QPAXRILTCUCFWYEIYMPBZNZNTECQVMDNWYCINZDPDMPEGYORJFVUTURTRKTVMAQQEMVNZVJKJYAGZPSHUBNMLKXGYERTLULLHXOJHWTDEOWTXBZSVF");
    msg.description.assign("TTDGKFQUVRODSNDHTBDFEJXPPQYQMVERECNHRHNLQGLWYULGXHRSOVTDLRQTRIBDJEMLNOEFGUSOGBUTBLXZCWDHPICLFWZOOFHNIGNKVIFGSRUQVBMFXOXZPPXRPKYKEUAAXISGWJBQMMJTYARPBUERPFJJUDQCGBCZSSDIVWSWSEMCJLQUKCVEWAMNMJOAEFWTWVTTUAZPBGZCYZHZLDAZOFZAPNXNICHKQIJIKAYKHOWYVKHYXCNYIAX");
    msg.vnamespace.assign("JZEOUQQCHRNRJN");
    msg.start_man_id.assign("THAWCNFJKYYKYFIZQXTORJTVDMZFUJDSPZCMEPSIRYPVPLSAAPVPNKCCHZQXUULZACTGBSONCMGTZBNXAYFDZKFHRYIWEOUGWBRZFTKRRMZOMOWAJJFVHDHDFLQGKSVOSRWHREAUPIYEOWDOEVMQAXHLCTPAONHXPBDGJBFGGUIVLKXWMSQVCBNQEUVMMLZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PAXSOSGNHHWFQOPRYUJOMTJDGEUDUFTVKJDGSNIBZCMGVOAMMDACKMDJIILWWRZYSZQTOPKVVYNICYRARXRWCGJSUQCQBPFYBSQZEXJZBQEFGBXPFVYXRDLJLFNUNUIQSZHXNKDTIXEGBZNQNCMEMYCOLKHJUEAZGWYEPCNLHLXTQYIPPVXEPKFVLTHKABKGVJBUGUWHTOWSNTOTEFELRSXHOAULLQRSWTJKBKAMVBRYOM");
    tmp_msg_0.dest_man.assign("MJOXCRTKJQBHURRVWEDQYLCXOQOPKDFQUYATVWFTGBHBGVEPOCPMKYTLFDEYLTNOHQXCCAQBRZDIWHVKKOHSTCNABUNFVIIJHSLKRXGBJUPPIUDIZAYKOHZAFXAVCZWGIVGVLTMSNHXFGANZWEPHFVWUFTXRYENOQCOVWAUNJRWSIBELIEFSUULNJALXHGQZSFUJ");
    tmp_msg_0.conditions.assign("EHHLWOADCIPROLANMSRECFSBSTKWGWYBZIW");
    msg.transitions.push_back(tmp_msg_0);
    IMC::MonitorEntityState tmp_msg_1;
    tmp_msg_1.command = 245U;
    tmp_msg_1.entities.assign("HELLSHEGJQAAWIPKXQUIUE");
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
    msg.setTimeStamp(0.1583319606011494);
    msg.setSource(50472U);
    msg.setSourceEntity(148U);
    msg.setDestination(37501U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("TTCFMKXHJSMEOLOSXNIWTQYTJGOGGMUIAVCVUNLYQKYOAGWPDFYHSXOZVQNEISBLBBUDQUCYVEVNSJGFOHLTTZLIDSHAAEMPKBPHIRWOVXVEXGRBPWUIZCNRRYHTCJLKGUGAESRQEAMCDMENOYACUPJJLVUDAFEXKYKHRRWSWKWYCIGORWNIXOQLZNPWZTZAFFDJPGBZWIPHTFPUPQVHQBFAQMRZLYBCDISBBLNTCKMNKKJQJRDJXFM");
    msg.description.assign("NQPDDNUXYJRQOHXPWERCADJTDZVKUDLMVTAIYBZGHCSXEZUTM");
    msg.vnamespace.assign("ZFLBUEBFZFIQNCRCEYAESORKTKFYMVNLWMWENRRHXRMOOEBGJZNCUSHYFUADJGNADVYDTMJEPQVWHEIJKAYWYUPUWZQOTFXSAQLVGXTWHVYPIVMJGTZMOKVBJZLAKSTFAITWPNIPQKCLBLTQDXBZPYPJOQEIJYUKGLGORZYRXSCBCFIHILHKMQGEGUDUMXBOQCCDJKXVDMWSVKNHZTULRPXJXTWFPUSAL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZWPYQVDRGWZURGDJHSOAENEEXBCKTTNUNHEMJYWXVLYQPX");
    tmp_msg_0.value.assign("ABYNLGSBLPDLRTKNWHUVGIVRPKRFXSXJOYFCEIOCHLXQSMOOVKKWWQGTGADSFMUHPBBFOJKMQGVQYGQJAEOWZJIPCPAZRTQIM");
    tmp_msg_0.type = 88U;
    tmp_msg_0.access = 18U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MCYOTXJPBUGGDWFRGIAHLIPHDCVDPQSISVYZLBERLKFMZZUGCTDDSBTJWJOBWMUEIXXRYCFXWSKJTHGTZKSDFOGCPAFEEXSHNUMRPRESODQNNVAWGFEWLDTEPOYIPMAMMBQUYLG");
    IMC::UamRxRange tmp_msg_1;
    tmp_msg_1.seq = 13542U;
    tmp_msg_1.sys.assign("DEYDWUKEFQHGKZVBHNSZHZNRQIGFRKLIZIZRVWIWALMHFSEIHDDLANNGRSPVVGJWJMQSUMRAYOEEZFQCLDZOAPTGXTDMAVHBQOVEGBGXLAXMMTMIHLUUNYJPRWOVBMJLODBBPRQUNDFMZJIGTBIUPKGXYQGYCJNKVMKOOAFQKBTTROJCJKWSYUWTFFPSLWCEOQXHWNDESTYXPUACHZBTSY");
    tmp_msg_1.value = 0.5318539473099875;
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
    msg.setTimeStamp(0.4812444658544892);
    msg.setSource(37274U);
    msg.setSourceEntity(61U);
    msg.setDestination(18569U);
    msg.setDestinationEntity(7U);
    msg.plan_id.assign("JODRUACTDSSBUAGRWFYQPNKSXSIBBRMFDVZCLSKSEMLEXKTTDZIXNIKSVYLORXROBNDXHGCEIIGUPVVJUTMYZFIPEPUEIVXTNFWXOSTHPHEOMOYPTZZCKGNALWZAPRECMRHFWLIGJXYYLWFOJBAQADJYQZKYUBAXJQTKJFMGLOVVMSYBTAPNDWBQGMSHLNKRNFENQQJBOKMUGVCNCDIGWHTDJAYHQKQWHEIMZQUCVHOWRCFJPPWGEBXLZ");
    msg.description.assign("AWHDXBDXSPUPJFNVZTKXOMKSTEXNUNNBHFOLEOPZXLIAAYWAPWEFDQCTKUBYOSJDKRRFMPTPHZPQNVCBLWZTGQZRHTBFCXUYMSBLMVIYLMJGMCEGZQIDAARPEIVVNOWGKHEBQKPDDQJMKJSZLSWDLUGSQXFNGFMJTHYULRKAXFUYOHIVHVR");
    msg.vnamespace.assign("CMYWLUYKCYBXVDQRHAGTEFQUTGDPHIJEYBCXZZYRCZLWXHTATROGARVNWWMQPZSDSEGFKRCRMFJVABCZPMYUIYRTXXEOOASKMOZOJXLPUTUQRIKJSFGRYLBAJVQARNCVVEPXJCHGBQMJWOZMVCUTLKSZMFGSSUDNNELNLNWJKDVDLWK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZLHKEUFQFCPLRBODMIBBAHSOYEWZRIQBWOUXASGYIFOMALZSRUHMNTKLYYQIVRHKUCQXKXFKCJNEFZHDIBCSWAK");
    tmp_msg_0.value.assign("NMEFLBGPOYDHKDXXHVSYNJCTPXBDWPESCJSQMBPZAZOAWKCKDBFOUTWRIICQFTUNPGEIOXTREAPBXNHRONZAMOKDLIQWILCKQGUUEQHFGYYTKRBVFQGRUGDESUFCPXVZGXWYHGIWVDJUHJCTDACRGFYLIERKHSJFSWKJBAXLZOZTRYMUAMFBLINTMMOJTYAQKHBOIRSMNVBRPDYWJ");
    tmp_msg_0.type = 40U;
    tmp_msg_0.access = 99U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VQZZOZRRGBNVSKXYNHHHSEXNMKSPTBAGBLTSSTTNGYBIEQPUDRFIHJGKWUTGZWHIPNYLLUTMMKWJQYKILLHZCAXFMOCUKDTINUVE");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FRAXNAUDPHTYNXJRGVHCOYRKVZGJHUIXNOFBSOJZVZSKEGUODEYYPEWVTKVVOWQBKSXJUDQPMOXSXYKPRLQJTPOCLQRLACNFKUDAFCFHLSPRWKOQIENHWKMQUE");
    tmp_msg_1.dest_man.assign("XWCGETLAXDNHEBDYSILDSKPXIEJNWNMVQNXNAVBLVCBFUGQORJUWVVNNCMZHPZDUFWFJIGCGJOZDDQBLRRYTAAMUCPQOLBLALCHJNPRSZPDSNESYIUATJFSBWGYHMTZCBPHAOIMCPSYTO");
    tmp_msg_1.conditions.assign("RABFMETPZOKUUGJQRDOYHBIXPOCPKEQKBHBCFZTLUSOIYHZAJLWLOYLZZZBCTGKDYOIAVSAITIRCKQZUFXQTRPXOMYXOUKDNQCCFIBARMWVSNCVAWWQWBAHWEZLGKLHJSPHHFHGCWBXHDGAODPISNZBQDEIRMVUNXUQPREXJLMHMJGEWJJYGGANPGEVUMVSVNWSVDNTNFFJIPIFMTQYOXRLXALJDDKYEB");
    IMC::EntityInfo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id = 144U;
    tmp_tmp_msg_1_0.label.assign("KYRUFKXYMVPGTERNRQEIHFKPNJITYQBFGGJSCWJBPJYIAXKDEMPXSDFQHDZEQATTUMAGQBNLNHTFACBVWNHZGGLFERPSVKEXMDEKTSIGWLEWAXSVZJUJCDWKJWIHFATEWBLBDOZZGWEGDLMOVOUNZTARXZGWMNQBIOTNLVVKSBRPOVQXMRFVUJOORYKRUSWZHNOKFMPTBHYAHXYJCFQZIYBCCUXAADIRYCDLCLU");
    tmp_tmp_msg_1_0.component.assign("ADYYUKVZDWWTWVOVMHJKNLGCEMGWJYCFZIQJLRKNLJUTPNRHYLNCWKABHJSCEQDVVKCJMBSDZEBCEHWOSNIWJRPLPOPRIBGANWKPCDSPHEFEAOLVJJIUMPBUQFMYUZHFNGXNGWXQRUUAMVBSYYOFFHAIRULEOZMOGWEZ");
    tmp_tmp_msg_1_0.act_time = 11405U;
    tmp_tmp_msg_1_0.deact_time = 36773U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PowerChannelState tmp_msg_2;
    tmp_msg_2.name.assign("GBYNEIPVZHOVMLXRKZJKTZYZQEGVLVYLELEKXZPPJFPWXDOUSPOJADYSBONFPNUITONATIBHVSISWFMMRARRZVZFYGGKMEKNSKYXCNABSKVETEUXCAJPNBTQWIHYVTADXVWQRSFHXWCIGUULSLDKMCEXQWLMWNOUHCEMDTFGXICQQRB");
    tmp_msg_2.state = 143U;
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
    msg.setTimeStamp(0.11727605071276326);
    msg.setSource(8303U);
    msg.setSourceEntity(145U);
    msg.setDestination(4451U);
    msg.setDestinationEntity(211U);
    msg.maneuver_id.assign("IHCNKKSGIKTPIMFVXVIQQBKIURDFZVJFCFDTTHOLAHVOTQYQPONSZ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.plan_ref = 4020105059U;
    tmp_msg_0.id.assign("IQKBERFADHUIABGOIKARNZIUKAZGUAETJCCYLTIYMSRMFWXRQYPTMQWJMHNCSYULIILVZZQGLMKPPRPLXAVMRSSONGBHOXUXBCTGFGXFWRODJYAEGKDTNHJKEDYNCEISNPHWCWOBQUAHVDCFKVJJPZFVTHETOQXNUSXGBBMBGRLIDDNDKPYZVHVXZBHRFWFOBPNJMFXA");
    tmp_msg_0.memento.assign("BWIIBEUSYHLOHVFBYKAYQPGFJJECFLRSHXMKSBQNGGBUKFZGXJECKAQTGRZRVZXDIBCSVORLKSWJACLEHAPZDMTIMFBDAFJURGOOEDEVYMOUHJROGAPPZINOTQMNUNJFHNXYAVLZXVJLGRXNOZEKRHOLUZUCIIMWGVLSTCJQQFDKCPMYSQEYFWH");
    tmp_msg_0.timeout = 38131U;
    tmp_msg_0.lat = 0.4557971652323244;
    tmp_msg_0.lon = 0.6462613471028177;
    tmp_msg_0.z = 0.10513232124130234;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.07955830123607188;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.roll = 0.21624667315032353;
    tmp_msg_0.pitch = 0.880849837647905;
    tmp_msg_0.yaw = 0.6378893600795009;
    tmp_msg_0.custom.assign("KXSNAMTVPVIJNHQOAYRHLBZKICCJWTEWLEVFROHZYSRPUBPEWUSRDZPGRGKDMAFDBESUOZMHRGODQKPHZPWOBLQEWODJXHXYQXIQFTJKBSIKXRGBSVRCYSIELFUZVXHVUJICHQBLMNEZFIKTHZQGQCIHIMWTXJJROYBFDWKMLLSGAOWCGCBUFDCXYTZFJFVDSIGMPNNQ");
    msg.data.set(tmp_msg_0);
    IMC::EntityList tmp_msg_1;
    tmp_msg_1.op = 91U;
    tmp_msg_1.list.assign("WRXNKCTVSZFDPEVSTVQMWWNAEQVTUESJLPUAADDFGSSIDNBTBXBYCLOSYDGCCQFQWJTZCQXGGZMPFLIYYWHYZHTOXFFQFSYVHMOJNTA");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Loiter tmp_msg_2;
    tmp_msg_2.plan_ref = 3605354163U;
    tmp_msg_2.id.assign("ABIADUXXIQCGZFFRCOGXGRLIDODOZMUCMFSVWKTNEXUWTJAAMCRPJJBURVHCLVFBGRCQYLWEWSEOBLENNYZNIXSXJMTZEZQBDXZHJDRGPRPYTGRHKPCHJMKFQMSUUBSHUFJQOITZAOKXUHZNEFBBUEIPVEOTVGSYJBWIFPUCYNWFPHWQDYZYPVNCHWSNT");
    tmp_msg_2.memento.assign("NPEZGJYDPFACAGQXQDBMRFSBZIELFOTCTRLIYSNLYYRQUPCPJERVFBXDBWZTOLYXLVNSJCTVRUGMUKZTOLDKOAGAWNKWVGAYYOHIIABGDHHAOLZXUNUUFXOHBCGRXMMPRCRZXBESIZJEFUUSKFXMSQGKCIMWJCPJETLCAXYDJUEHMTSEKFNZFBJZNMHKHHMKKOPVBFHNQLPVNDVAHJYUSQTSWWGBCWAS");
    tmp_msg_2.timeout = 42777U;
    tmp_msg_2.lat = 0.5533722187759659;
    tmp_msg_2.lon = 0.785589560527249;
    tmp_msg_2.z = 0.5723039520395844;
    tmp_msg_2.z_units = 68U;
    tmp_msg_2.duration = 24273U;
    tmp_msg_2.speed = 0.9852230538288241;
    tmp_msg_2.speed_units = 199U;
    tmp_msg_2.type = 224U;
    tmp_msg_2.radius = 0.43789479784200114;
    tmp_msg_2.length = 0.3064738631638064;
    tmp_msg_2.bearing = 0.5860713124998991;
    tmp_msg_2.direction = 238U;
    tmp_msg_2.custom.assign("VIQUDMQFNSMHEOYDLECOYOACQNDSLUBJDIIRDGPENGXRNVLJJOZMEWRTTTWGNQRSPIWDAYIDNRLFCSYGKOLXTYTXKVUYASTKVUHKAYIFHUWLEXWQUYDGQJKWMLIMJBVIWAHMJMCEJBJPZHFWBVRFSDRPAFCTAMCEVQVFELFXGCFMOBGSGSJNXVUTZBKCHLJOZEHNRKQXGNKQBUQMUXZPZCZXZOOHRPRHPBASKOBICXV");
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
    msg.setTimeStamp(0.8450956771615219);
    msg.setSource(50024U);
    msg.setSourceEntity(176U);
    msg.setDestination(31521U);
    msg.setDestinationEntity(161U);
    msg.maneuver_id.assign("GQHQWVDVRKJLLXZTEGRPIWAXAIZYAADRPGZLVCNUMMFERBNXGQHKYOCISWXMEGPCFJXWYTFCHUHYKBLJNDVOKTUZLFPTRZBUEGXWBBMKZAZBFYEPAWHYUSKVQLASNJPMQAXPMGBRTNIUAG");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.plan_ref = 2681623344U;
    tmp_msg_0.id.assign("HVCEOMHKKPJVCNFBMEBZWHJLUUAPJWJUUTSNLRALOPRSEMFXYFHJCOYLXN");
    tmp_msg_0.memento.assign("MFWOOUHRXAPZTAXVLWBOLFIJPLOCHHMHTIHYSZDXPNGWCSEWKODCZMJYCSPFUQEVFCFCFJODYSZVVXLGYQKAJTHPEATYCBPKRBUVKYQWNKZLAPQYYHGALE");
    tmp_msg_0.timeout = 54022U;
    tmp_msg_0.lat = 0.29451578636339093;
    tmp_msg_0.lon = 0.8359495404539081;
    tmp_msg_0.z = 0.5575423616744131;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.8609020822485557;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.roll = 0.5580664033719865;
    tmp_msg_0.pitch = 0.29050449764091246;
    tmp_msg_0.yaw = 0.8136118855691667;
    tmp_msg_0.custom.assign("FRSYAXDEPPPZISDIFBAGEPVZCEBQUHIZQDNKKSVJSTMAJJSWHTRQRK");
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
    msg.setTimeStamp(0.6757304346673365);
    msg.setSource(41401U);
    msg.setSourceEntity(36U);
    msg.setDestination(45664U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("LZMIJZWVICEVUJNDXGEZJNXGIJPWNADWCQRCHJVZIJLSKVCRELAFBTWOYQUZGWDYSXUMSKOUXXYFOOUWKTQFGFRDZUBAYGNMIDNPVHSBBKQONAZUCQYPKGARPKPFVWXQFOKQJHSLHTNAMCIFMSHOBIOZQXWDTLELBZAEIGDTV");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 1569613217U;
    tmp_msg_0.id.assign("SJLQGEJLUXVMPKKQUYRAUOBLDEYOKKMBQREZGCYNJROTOSLETOLRIQRMLDMRUPIFVIMDVAQIHFYLXGDLKCVMKBUJCFCHPVCORMTIAZIYUHPHPOXWCVENIBTEGZOQJTWHAPGQKVVAWUZGINSKSWZHSDDXUUCGMEXEBZQTDFCELQFRWYPUSNBGEWZHOO");
    tmp_msg_0.memento.assign("AMEZODRMEBXZBPQMJPIRJSJIVENAGLGCJBGQDMTURAPTVYWXHQBISEONPUWOWRFUGTFXAVQOTHHYNVMBZWPDFVCGHFFCHXMMDDKKRGRCSZZYPFEASMYUFTCJPUBAEOJRGXYVHHVWXKLLQVQIJPXSPZTIHNIDEYYWCDNBAKVETMNALKVEFDISIXWLMQIYRZNWXRJBJCKUTDUSUWCOKBRO");
    tmp_msg_0.timeout = 58303U;
    tmp_msg_0.name.assign("IYGLOTRGCLONFPPPVCFQMYITSNCTQZIYUEHTNOPTXTKCPGQHUOVOQTZVWEJWQBJKLTWBMPJRXEZSZEMNVNSJMZMBK");
    tmp_msg_0.custom.assign("MFEPUAEOPNQUGROKSQEAVWNKKXWCCON");
    msg.data.set(tmp_msg_0);
    IMC::SimulatedState tmp_msg_1;
    tmp_msg_1.lat = 0.5763723163134218;
    tmp_msg_1.lon = 0.645184599859365;
    tmp_msg_1.height = 0.192700252925043;
    tmp_msg_1.x = 0.12379743986618752;
    tmp_msg_1.y = 0.8157361067756436;
    tmp_msg_1.z = 0.2474378177343911;
    tmp_msg_1.phi = 0.41831424391630745;
    tmp_msg_1.theta = 0.91436134804519;
    tmp_msg_1.psi = 0.8810289710539059;
    tmp_msg_1.u = 0.3682245181500833;
    tmp_msg_1.v = 0.07897367076064632;
    tmp_msg_1.w = 0.4819852866223293;
    tmp_msg_1.p = 0.049049269838141174;
    tmp_msg_1.q = 0.8066813670216241;
    tmp_msg_1.r = 0.17873106336574185;
    tmp_msg_1.svx = 0.20299481811881648;
    tmp_msg_1.svy = 0.4185972700694681;
    tmp_msg_1.svz = 0.4326179708148272;
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
    msg.setTimeStamp(0.7682325662465478);
    msg.setSource(45108U);
    msg.setSourceEntity(30U);
    msg.setDestination(5047U);
    msg.setDestinationEntity(234U);
    msg.source_man.assign("UVLXZHISFBWVSCFRARTYEHQNLSTZVXHWMRBKALDXJNAEAIAOSUQHRGUMIQPIIXVQFRPUYBTAJGTLHEQYEZGGVLPBEWRDJIVDUHFBPNDOCBDORIKTLGNNBPLMWSXGWKLBEVFYPJBRKOCRKMJYCTTEEWDPMMTXUYKYJZGSOFFIOCHGPSYASZGVCUZNRKJMAUWCPBXENCGJOIMWXD");
    msg.dest_man.assign("JAVBTNSYDLYEGGCVWZNGHOLPMISIFFQSYCXAMTBEBADUFPNGZCLSTFXCRFYJNAAEYOZQQJRIZZPYJEO");
    msg.conditions.assign("DOKODIBRYIWVDRDONFGGKVGLVBTEESKAJKWJEJNWVCTJIWIMCTUMKWRDCUAHOXPMGTEEUHHKREPDQQQIEAUGDBVXIVALNWJIJUYINVZFPXDOHKZITNAYQHWBJPGJHYCQBLAYMNCFUSJWAUCBNGVZFHLNNCCLXEHPPZPAMOSOXBOKMURMMTBPRZUEVUZWGSYSOTYHBSAIMOLGZVRARFNLPDEKFLYKXQSSTXQLSRG");

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
    msg.setTimeStamp(0.09539086188563328);
    msg.setSource(4738U);
    msg.setSourceEntity(229U);
    msg.setDestination(46016U);
    msg.setDestinationEntity(220U);
    msg.source_man.assign("KYJAHNSWQMXJPBXGEGSBMXKABVHHFGBRVUILRFJ");
    msg.dest_man.assign("YEFCDKZTTAMYOOGUEBAZITTMQQOEAZRZIJBPAVHGFGOOXSNTHLFQMSRYXYWIWUIHAFBMNQYKCAMDFXPPVQKLGJESYZNTNKTHOLVCTIPXVLWWDOGPICGJMRKUGQSCAWURLDXFEQXPVVDSWDCZJPHFDXCWIZUXUBQJEJWHMHLRLVPKNVSK");
    msg.conditions.assign("YQLVJWMPDMXQOEFLVXUQNQAESNKOLFWKZFEFGFDETRUAFRJNQBPNCOJCHHIACBXDZEJFOZWIYXGSHMXSRCWVLJUPNITMVNWTMWXPKGSHBDEVKJRVQBJJQLGCKUUGEFZPQDYPIMHQAHHWMZLCDNRAKONYIGLUTGKUNOMRRTIWONLLYYOMCUYHRSTXOBWAZQUCDHKVLPPABDPMAZXJVH");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 203U;
    tmp_msg_0.list.assign("TWPGGEOIPVXAZZJLFTUVJKOQUOUKSRICDPQKCRLDOKCMWTYDDQWIRUPNJCZAURRVWCZZBEHMJBGLGVZWEBHXEMYJUXSBTEBIHVRTVUQOPNBBWYHNRDFXWMXQGL");
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
    msg.setTimeStamp(0.4445228152837536);
    msg.setSource(39117U);
    msg.setSourceEntity(95U);
    msg.setDestination(928U);
    msg.setDestinationEntity(56U);
    msg.source_man.assign("XNNUAERLMUQEJSIFUGBXHVMFGLQVSSGZJLKZAALTWGGOITXETYTZOMXWNIEYVZBCSDHUQYZMQPMOFCESSKQKVWDRJGPRNOFDFQCJYOWJBKDUTSZZHTGJLWHHBPSUMIHHXKNZIOEPGEFXPORAJBBPIMPPYCAFDHVCDBNHLWOCXFEKUVUAYVXSQIBLBGTLCEOWNVSZQATERQMDVFNJUDYIKUZATRYRKMWPGYWDRH");
    msg.dest_man.assign("SZNHGLNGDZRGSZPLKGMCUCIKIWAFDNXISZYPZTAFOXOLZUXOJWXKJQQEHOPNJHZJXKVMBYPACJNNTGFQRGTAYIRXSLCFWDCVYTIVUHYWTIBXJGZRKYRTPBUOFARGLMQQYCKBVLEYHQOUHKTMFAQQOREQAJEYRSDPSXNIAWOWXEUGMMLIVVHTKRFHZBEAIZSEMKDBFPEOMBCSUTVUVNWSWNYIXSPUELLUEFHBCJPCMKJFLBQDW");
    msg.conditions.assign("RLQHWYDBIBMTCVNFUJFQPUEMWASISSBZNHWLXQAOHTRFKIIUTYFULBK");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 424723807U;
    tmp_msg_0.id.assign("QWKMRLOOCRVWLXUKMJFEARXGATCZJVGGOTJYBFSTZQTSJFHVNTBBLUIWKAIKSCMYPUGIISBNCIVFDILOQLCRQOEEGEGFNTBUNHSGXBNZDJJFIOPMKHWVXZESDOBLHLVUERPUNXKARJFBFTJPPVVPDWKHCHQMKDNQMDZWCAJRYCATIRQPMEWAIMXOFGNMBUPYNHLYARGHQYRCESDWILDQZPWJTYWUKYFEXH");
    tmp_msg_0.memento.assign("XFHBQVUWOCZQCMCLLELGJPSWCFEHDWJRHAFPONZHKVXISJABYWSVVLWVOIRGKXRNPDCAYSO");
    tmp_msg_0.group_name.assign("BGVSUFLAOUEAIGRFYLUJEATBVHZDTVQCCEQNBAKZYVHTQNFYAKOKCHHRUEGOJZMTNZEFNPOJCYPFRDFTPF");
    tmp_msg_0.formation_name.assign("EZSSGCEMFONPSAPLAGCBMEEXRPBVXOYWTNHYUFJHRQXVDSZHOPETADZFNTUKRWQWLBIPFVFBZUHKTHXXNM");
    tmp_msg_0.plan_id.assign("MMHRALKTMKLBALPAM");
    tmp_msg_0.description.assign("OINZBFDWZCSQXZKXNNVWTFITVCEYDQUKGRCGVJSCPKWMMIKHOBREFYHFTUHOYWXHCFIQEBUIBVCDQEJLUENBIVCFPROUSAJRKXCDYHJAGMQOKRZTLOAGLSUGGPNMQBAKTBWQTADDMWCAVNFZKEEMTBMILIZTSYXCOXMLMVZREHDYTVSYNEDPJAXHBUIDXJIBPHFLXZMGAGZNHGOYFWLFVPROQWGLNHSPKOLYXRNJLYUWPEQAVRQKPTW");
    tmp_msg_0.leader_speed = 0.5166204394468336;
    tmp_msg_0.leader_bank_lim = 0.09330383298802891;
    tmp_msg_0.pos_sim_err_lim = 0.1347480577454454;
    tmp_msg_0.pos_sim_err_wrn = 0.3762585132924453;
    tmp_msg_0.pos_sim_err_timeout = 16682U;
    tmp_msg_0.converg_max = 0.6740051698741902;
    tmp_msg_0.converg_timeout = 34712U;
    tmp_msg_0.comms_timeout = 11415U;
    tmp_msg_0.turb_lim = 0.9358349893102876;
    tmp_msg_0.custom.assign("AQLXCNCBCFGNAKVUMTGQOKIBHVVRJWDSFLZRSIIHUNQHGKVPTAMLDLOBLKWNJBXPOKRQIMUUDXELIHBSKSWFHX");
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
    msg.setTimeStamp(0.0005765055512920725);
    msg.setSource(60771U);
    msg.setSourceEntity(47U);
    msg.setDestination(21463U);
    msg.setDestinationEntity(65U);
    msg.command = 241U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OQAQIQLYULBJAYWMDLEPUKANGRCUBHEGJVZAFFNLOZBKVKRHQJBWSTNYNCXDRFJFCJASIFQXWLBGHRRQOXCLTYSPGHPEQZYJOPKIFERYQRZMIFHLSKAUKSRBWEWUYUMMGQZDVSCOFMARRKLILELJITPVOOUTWTXJXVWHFQMEOXCKWNITAIHHUBZGDYP");
    tmp_msg_0.description.assign("BTFBHALTJZCAGZQNZSZYLAQVNXGIOCUFMNWVRYFMOLXCRYNQGWMEDBPFWYGNEZVFMNCJZPPCUXHJGWHDQDGIESSQKIFATHRGOYSZDXVMGIWTPCPXKLNXKUPYCPFNEGKORUHQZWUMKKS");
    tmp_msg_0.vnamespace.assign("HHPOARSDBNPVPUWNVAGT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BRRYFWSCTGVNKCDPGTPBGRZZSZYDGTKRAXXKCYICOGQVNGGIMYQCHTMXV");
    tmp_tmp_msg_0_0.value.assign("PSJYHTVVBSWMLPPYMHBRKN");
    tmp_tmp_msg_0_0.type = 44U;
    tmp_tmp_msg_0_0.access = 247U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TQCQJBCXENPJDGYVJFLBSIGRTOVQMKSC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ROMVOXEUPGBIYIEACOAPWELPFBLXQMEGPGOSYFIXZZRTYNJZRZPWJZDMGHTJHSZSRGTWHATTDVVOMBQAVZLPFXTPWBWCIQFTCKECNJIZHXSOJTULYAQGRAFJUNVQPXOKJYSHKWYSJRXJMSUAQMPCMPFZEUBBIQDLIYUOGLXETMWWHROESDKHSNDUNHTMSCMQKRYVXYOJIYQBZCNBRNFADDWEKGXINLKE");
    tmp_tmp_msg_0_1.dest_man.assign("SQJAKOJHWQNXSUVAUUUONMGVZEALCWDYYIAVMRORRMGZHBKJSDXKJVLRBJIZGBGDRWPXAPXBSGDMSGKSOGVAECYKFNBYNTBFUMAWCDFFGEVDQWNIOYKEOMVTUDQWTMAHXFPKXMRHEBIPDFJNJPRYRXCUYZSSZHXZRYMECOHJQQHTKLIFCQHWEONLWOVXVWRZPUSQLVZNLPDTZLLLFBCTICHPQUTKZJPIAQEIENTEPOIIYBDC");
    tmp_tmp_msg_0_1.conditions.assign("EHBOWWZZEOXBMSDGRVZDWIYJDYNXOVYMIFWKOOEOIVXVQUPXSULBGSGDCNMRNLOGAOQEJJCLKJZAIURIQIUVMORTXCZNBZERMCCUFHSTFSFDGDGSBSFFTPPZCGVIXHQQEAMSYANJMWKJPLEGUKHHYLPAUNXBETKBMPHTIDAWLQBRRTQMKLJFWVITGETWTAQYUKRSAVWZWYNMNRXFQRNSUHLHCUNB");
    IMC::AcousticOperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 119U;
    tmp_tmp_tmp_msg_0_1_0.system.assign("UQTSFCLKQWUGDRVCXKGFBXXWHKNLFVTCJYYAABJLVQDORZZXYIHAQPYHAZLJJNHKEBFNRMOLLOKXMYAFSWPDRJJFTNMZESILRKUHZITBPSTQQYHTVJHBCMEHVZPSDNWMRFUCYDDMOSVQKCGWBULEVWVNAN");
    tmp_tmp_tmp_msg_0_1_0.range = 0.11189134436773063;
    IMC::EntityMonitoringState tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.mcount = 10U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.mnames.assign("XQWCGBWSTDVUXDYMSFBIRHMIRKRJERGFQCATSBKLZRJOVSRQBPDMLODZNWSEXBTNBQTVFH");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.ecount = 159U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.enames.assign("UOBGDSUEWPPEHVBFSTZENIIANTGQSHRXGTHDRGFOXIBLFCABZLKAVWEDNDHOYLQMFSVBJJDUFSJMRRMKBZNTMYPPYZRZOOLMCPKBQOQNYLSTZYSJRUPHTEFNKHLENJGWWMJIUQEXALJSVGELFGZWVHCZRIVIBOKFHQKTMPDWHATDFYJZ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.ccount = 33U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.cnames.assign("YUCSIIFMJYSFLMRDAMQHQOZDZFPEGYVXFTVYQAIDIHZPTCIZTWSEDEMYGSLRKHVELOURVUKGUXFCWRALOSAAUPQBGJSZGZOUTPBCZRFJKBRXWMNTUDPXZ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.last_error.assign("OMTRLFPTUQTLAXOJTRFCDIRZORQYEAPEUHUAWJUEKXGJLPANEVFQDNEWOFGIQXRWAJLVYKVPTCPBDMXHHZEDKBICBRGHYXVCBBCBQHTPNTJLLHPDWJMZM");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.last_error_time = 0.31604437173929667;
    tmp_tmp_tmp_msg_0_1_0.msg.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FormCtrlParam tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.action = 124U;
    tmp_tmp_msg_0_2.longain = 0.05863060847918833;
    tmp_tmp_msg_0_2.latgain = 0.1835710683826427;
    tmp_tmp_msg_0_2.bondthick = 1087926861U;
    tmp_tmp_msg_0_2.leadgain = 0.9859111534210806;
    tmp_tmp_msg_0_2.deconflgain = 0.34672726786141506;
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
    msg.setTimeStamp(0.8663974003167955);
    msg.setSource(11832U);
    msg.setSourceEntity(177U);
    msg.setDestination(13894U);
    msg.setDestinationEntity(187U);
    msg.command = 92U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CDKUGUOBEVUSRLXBAXEPCMJURYWZCKZTOKDAPMOIRQDKVQEDWKAQVGDQCMBTMMIXBWBJBEPAJYAEWOLZPXQLLVYJHLUHUPIHXFLPUONUAFEDQSXGVHOQTFWJLTGZFCXHIYFUIGDDZLHAHTNFMMBAHROSZTNPAKMEJNASRRURIZXTCVIGOFYNWRDKSMPPQEIWYZG");
    tmp_msg_0.description.assign("JEVXWUKXGTWQRRVKAZGPPQCBDJMZYJMRDIGMUNBMVBRTZKFIZQVEADANHUSWKVCYFHHJVCAKCXHUTWNJEOCDCOLRFXUCXQFJSHF");
    tmp_msg_0.vnamespace.assign("YIUSHUEKLVQC");
    tmp_msg_0.start_man_id.assign("ROJCIPAMIHQMPFVRUHBELAHXABJFIQZKWNPYLPYYMVOXQQVBTOSUGEBIQWYHEZHHACPKETBLFAKMZZPASDYJPRJANVULPXBRYVQWTOCMRMSXXXZASVZDDISQFZTOCUYJJOGITSNGTGJTCNMELGJJKWTXZLNSOLZHFNIRBHITMWAKWESEXYWBBKWCGPLGRROYUCGQSUMYV");
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
    msg.setTimeStamp(0.37557561558705865);
    msg.setSource(49567U);
    msg.setSourceEntity(31U);
    msg.setDestination(52908U);
    msg.setDestinationEntity(219U);
    msg.command = 43U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZTFMXHOJCGWUPGALANSVISGXQYOJEDJDFOEHBDLCILYKMHHYCVAIOZDJCLDTOVRBPQIRZTSMCEHGROFSU");
    tmp_msg_0.description.assign("MXJMHPDPKGYZZTADNRODZYNBVMARCJOAXOYLQTICENUZBICWIKYKFDBHHKYKAXDUGZWNLFXTQSAOPMNZ");
    tmp_msg_0.vnamespace.assign("URSUEVEXGEHQOMNRIUPHDJQZZQRVCJRJXJSZGTTSAUFCCBEGTGI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QPXKJLXQFSDGMVSDVQRPFEXXRBMXTRIVMSKT");
    tmp_tmp_msg_0_0.value.assign("QMXBXYHBAUMQVQLZDQGANUBNPLYKPTOPGTRVDZCRIOIGUKYVOPEZFWXWCGLAWVZHFJETGPRQLUVCKJCYXCHTSERKJWRQRPQIGFSOHDIDBPRIUUNKUYSHGRVMNIXYNDJCLNVQWOKNACZASKNZWHDAVZKFSUJTOYOPUDIOTTQMHWMLAJJYHAXBXAIJDVFGFTPLBKFBNMSXCHZSWFOEEVYNIPDDIEWTBAETSLFXSEFCCZWMSRBEKYLQZJGM");
    tmp_tmp_msg_0_0.type = 114U;
    tmp_tmp_msg_0_0.access = 183U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LNGLAMDTTAXZPYBEDYBFJFAJVONOXQPTNMNNGRYHPKZWLKGGPXSJBVUSSDRCBJEACHTYQFDSHEQWSCRTCMJSKJQZICVOZXTRHNNWVETGFBUQADFUMCJMKIZXRZDWMHGETLLKLCSYHLOIUFKBQGXUTZVHGQVFDHAHAETIOYBNNYJKQZZSFUUXOUEMAKFGYDEUBRWWGXWOSNPILRXKVPLQPVHXRWACKIPURMIPBI");
    IMC::DynamicsSimParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 83U;
    tmp_tmp_msg_0_1.tas2acc_pgain = 0.66207471722077;
    tmp_tmp_msg_0_1.bank2p_pgain = 0.7320987873016559;
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
    msg.setTimeStamp(0.774258725651014);
    msg.setSource(12870U);
    msg.setSourceEntity(250U);
    msg.setDestination(31732U);
    msg.setDestinationEntity(161U);
    msg.state = 46U;
    msg.plan_id.assign("ZHPZZWVDGJNQVXUJHEUFBYXSFEVMXNBCHYFWMBRLKLIQCCLBQVXFSNUOLGPNHYXJEQKWOXSMSDHOOMUJFGZCEPDGVVWRCHDYWGZXWUITCDFZTQSFAUDQNIAHAOXWALUNBKSDQVVOCPOGJKOCRNNUZJLZOHIDLWNMEWZUMYTRZCYUJKVDWATMCIYKAVBKJHLJSEXTMKDRPNBTPXGR");
    msg.comm_level = 111U;

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
    msg.setTimeStamp(0.34489291251014065);
    msg.setSource(11494U);
    msg.setSourceEntity(234U);
    msg.setDestination(30330U);
    msg.setDestinationEntity(111U);
    msg.state = 91U;
    msg.plan_id.assign("QLTGKUWGHSLVCHEWBNADJGXILZONNSCZIQRXTUGFYYKCEOGFCHKVWDEAJNHF");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.18158884767605654);
    msg.setSource(10687U);
    msg.setSourceEntity(118U);
    msg.setDestination(40051U);
    msg.setDestinationEntity(78U);
    msg.state = 171U;
    msg.plan_id.assign("DHAQYPALTXSIBILLEVSJCYEIGACFUSMKZNDXLKAWIFXELMQAWJMIFOJWLMXDRQZFUSROCTQMNHAWJJRNCVQCACNRKKIRHPXPBTOWZZNEHYKBPPDSIQGTKLGFBYQCBHMVYVBYSYAWUTEYAJOFIECNUOKMNQKRLUEXHRRGZMPWUVZZBDKRUOVGEETIJMUB");
    msg.comm_level = 212U;

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
    msg.setTimeStamp(0.9689856313936704);
    msg.setSource(20591U);
    msg.setSourceEntity(220U);
    msg.setDestination(25208U);
    msg.setDestinationEntity(212U);
    msg.type = 174U;
    msg.dt = 192U;
    msg.op = 128U;
    msg.request_id = 3112U;
    msg.object_id.assign("UYCEGQOPLEWHGBDPKAGMIYWLKISOZIKXFSRLXTEIORRJYDHDZHVFJEQUTSZOSTCGXXRERALXVAUTJJDMQDUBBMMUJOERYHQCAIBQNFCDBAWMDDTUMPCZXVLETGFKUGVPWEZFINIGRYPPMOYQNVLZZMHPTZBHALPVFJDWIAANJHOOGYYKPCFCLVTONKIJXSKNMGFKLNFU");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("GESPNLLRLHXIYMNVKZSTLVGRJAFWXOZVBFFAVARDQCBCJPZCLFWUZXGOBRDIWRQVDUHQVZELBNNHFCSWCIDEVCXBKBTMBHSWOXQQSWDUHMQLGJSWMSKUNMENHOFPPHGOYEUBPWDNKSQKQMTSVYAJTGNTU");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("CTXOSYIJFRBQFQHPFKVUCOARJBWATTNSAXUYNKZFUTLFDIKXHILUGOIQZJIBUGRBVPSHQZNCGUDBJPNWNTDTCNHLVCOFKKAEZYESEWLSRXTYMKDGMPPN");
    tmp_tmp_msg_0_0.sys_type = 1U;
    tmp_tmp_msg_0_0.owner = 28249U;
    tmp_tmp_msg_0_0.lat = 0.9349207520306737;
    tmp_tmp_msg_0_0.lon = 0.754140750505346;
    tmp_tmp_msg_0_0.height = 0.1692209609206501;
    tmp_tmp_msg_0_0.services.assign("TXJPWDBOANSECQBYMMGECBXBGCHCGQD");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JOPUKANYKTVOEPCFSPLZMHQWHRCDDEVXUKLRFWNFMQGNRADSNPXVRKSBQIUAQXCKJEUTNPONTNPBGISXVXSKMLCQBKGSIHUGZKIPYBUZEMZILEMJWTJYWSOGUGFCJYURGCQVFDDDCOZTIRIEXTXG");

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
    msg.setTimeStamp(0.17117067566954136);
    msg.setSource(34550U);
    msg.setSourceEntity(31U);
    msg.setDestination(17429U);
    msg.setDestinationEntity(243U);
    msg.type = 11U;
    msg.dt = 241U;
    msg.op = 195U;
    msg.request_id = 11286U;
    msg.object_id.assign("RYAVMRSKKKUOFNEPHHJ");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("DBVQPEMMCYEFSBFT");
    tmp_msg_0.sys_dst.assign("QHNLHCPMSCCGUHXQSYO");
    tmp_msg_0.flags = 50U;
    const char tmp_tmp_msg_0_0[] = {-38, -97, -100, -53, 76, 104, -36, 5, -9, 8, -74, 105, -71, -74, 103, -24, -65, 66, 53, 124, -84, 79, -9, -98, 85, -125, 22, -23, -9, 4, 93, 44, -51, 109, -9, -62, -60, 13, -36, 13, -79, -33, -83, -90, 94, 3, -8, -82, 90, 68, 4, -54, -56, -94, -34, 126, -5, -25, -92, -106, -64, -15, -63, -26, -94, -43, 62, 57, -15, 120, -80, 81, -31, 36, -40, 75, -6, 109, 15, -44, 116, 92, -41, -53, -124, 88, 35, -9, -87, 62, 30, 29, -54, 124, -108, 68, 38, -90, -62, -4, 93, 75, -1, 11, -9};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QCIKFGFTVEEMMASFHVKZRAWEGTTOFTUSZJBBSINJAXRBQPKHLFMHWMYDRZXXBQZCVMWLSHYOKUUNONWJRWPTAZNXSKOQPNTWEBEBDCLTIZUUDBWAQUYIFSLEMAMUCCUYPIQPDTNVOUQODFZVROHKXNFAWBLRMLCKVGJMYIHPASZJOOHCYFJYSCDAXQOPPQIRVJJDWGUYNXQNLTDFAYJXHRYNSCVGXGLHBVKEL");

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
    msg.setTimeStamp(0.7862322741055522);
    msg.setSource(784U);
    msg.setSourceEntity(228U);
    msg.setDestination(28709U);
    msg.setDestinationEntity(48U);
    msg.type = 194U;
    msg.dt = 15U;
    msg.op = 232U;
    msg.request_id = 51642U;
    msg.object_id.assign("WSWCHMGXQRHAGOZEMZSUYJPWHLDXEYFABGBIWJJDHSSTXWLFKBIJOVTLTRPDHXASQDZNJXKUUEMYZLAOKQWCPDNIJNRSCRJPKXCGXYND");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SQIHAUNEKQYXKWNSAYPTBTVNCLRCYVFNIBFZMSJEFJDUKMOFBRELICOETPNMFBFCJKPEAAKDABOMGLMKVVLFJKFRVIQYVYWTKJLMWOVNNYWL");
    tmp_msg_0.dest_man.assign("ZNHSQMICOTAAIZKVNPYOQXXGFRKNPSQHAROUGTHJUBENKECMKXSKKVNHCYTUDGHBSOASCQPZTJIUJLZQYNYTATZXEZMUEPXHJAPEWZGUMVDLJRNZQHQGYGAIFWLOGWMKBBHIHEEYIPWBYWPBQSFLBFSL");
    tmp_msg_0.conditions.assign("BJXLRVSDMPYRDDQCDLYIMSWOLVETFPZZYTEHOVYCCRAUBEAMVBCFRNMGDPPXCTSLRACDYSUKDPDFUASNAQNNNKBJUIAHQWPNTVBQXYLRHXSUNFZQIGXMFBGPHZBNKMSSBFKIQENHSBVKZJOJWVYONOUKQGHTRVMEEIWAGYTPIAZEEJJGLOKVCCOCPMQLDDPTWMTXOGKTFEXUMLRYWIIOJFGUJRHEVKQYZHZZAWHJRICUXXAQBTJZHGFGU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GLTBPPCRUWZM");

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
    msg.setTimeStamp(0.6619507247196623);
    msg.setSource(9513U);
    msg.setSourceEntity(105U);
    msg.setDestination(43217U);
    msg.setDestinationEntity(170U);
    msg.object_count = 44536U;
    msg.object_size = 1983637588U;
    msg.change_time = 0.5799406371842502;
    msg.change_sid = 41902U;
    msg.change_sname.assign("RKJSANIGXIAPZXHKHRQBIUJYEACSJOFCUDMHHXOXYFNWKRIZXHUJKBPKGNEFQSDRKGLHARBUFQTXLAQGLDIWYGCGUATLNWOCVGOEYNPQJTKCQAUDVIRTCVZLZQLMPEMYXQBYYIZZOFXFTFMOSDZPOK");
    const char tmp_msg_0[] = {28, -118, -39, 4, -54, -126, -67, -93, -72, -49, -96, -112, -109, -88, -98, 30, 9, -113, -33, 15, -90, 2, 28, -91, 106, 9, -24, 8, 31, 61, -128, 96, 45, -123, -94, 41, -50, -76, 60, -22, -124, 39, 55, 38, 82, -53, -78, -125, 84, -62, 70, -81, -107, 102, 0, 112, 106, 101, -27, -25, 70, 113, -81, -81, 53, -121, -14, -29, 39, 99, 73, -43, 46, 24, 6, -118, 95, -72, 90, -104, -13, -126, -125, -115, -11, -1, -24, 44, -6, 49, -31, 85, 97, -61, -36, -123, -23, 118, 1, 7, 41, 107, 41, -52, -97, -124, -56, 101, -114, -119, 4, 97, 38, -36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("DTUHRFOUDPJDCXMAAQBDYJMPTBMFTOSGXDPPHVEYHWWURM");
    tmp_msg_1.object_size = 1973U;
    tmp_msg_1.change_time = 0.0016776227315302705;
    tmp_msg_1.change_sid = 23989U;
    tmp_msg_1.change_sname.assign("CLOXIRMPVZNVECLRDGUBYHRVIKHZZVABNOWNXPSUKDWUNMZIGCFIGMZMWFYYHNMAIGYXQSGPGFMPNDODOPLLNJEDPWTPTHVRDYIVFDZWSKHVNJQSAODRZKJYEPLXCTXJJOFSYQMTIOKQUIXZTCWVWXFXLNFGLOKWTOPBJAUUABXYUETZZGSWREYKCGHQUJRIAHJQTVECBJFDLULEEABLQSMXKPROABHERDJ");
    const char tmp_tmp_msg_1_0[] = {-68, -45, -78, 19, 30, -16, -41, -92, 41, 72, -4, 72, -100, 99, -15, 30, 99, -11, -86, 9, -91, -48, -110, -95, 87, 44, 36, 51, 72, -112, 0, -22, 6, 50, 74, -56, -98, -84, 45, 81, 20, -23, 14, 111, -84, -32, -107, -37, -17, 101, 85, -86, 2, -117, -103, 92, -71, -53, -67, -34, -36, -5, -66, 41, 99, -63, 22, 59, 40, 57, -45, -71, 92, 37, -33, 76, -101, -14, -47, -121, 120, 21, -7, -120, -127, -124, -111, -32, 104, -38, 92, 1, 107, -58, 94, -42, 10, 106, -5, 68, -13, -128, 91, -16, -83, -52, -63, -109, -95, -71, -112, 94, 98, -31, 34, -2, 44, -93, 111, -116, 79, 41, 46, -119, 57, -122, 40, -49, -28, 24, 53, -20, -7, 6, -43, 8, 107, -118, -75, 23, -112, -72, 35, 84, -93, 54, -3, -58, 11, 117, 32, -59, -90, -68, -9, -103, -92, -41, 114, -26, 4, -111, -68, -126, 81, -67, 6, -21, 25, 57, -99, -75, -18, -18, -12, 59, 85, -84, -128, -119, -16, 62, -82, 18, 10, -85, 17, 102, 97, 43, 22, -31, -104, 97, -16, -18, -100, -103, 67, 11, 92, -78, -36, 73, 94, -107, 44, 59, 68, -103, -20, -49, 71, 99, -104, -118, 113, -66, -51, -115, 65, -114, 1, 55, -7, 43, 57, -34, -13, 2, 60, 57, 122, -85, 25, -124, 78, -107, 102, -14, 8};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("FSWPPEHUJJKDRWEHVGKILGAOUOFXYGOGEQYHAVVNKKNULOAWMICQMONYDTNFMIZPHIZOWWQGXYMZUDAMZOLRWKSLQDXYZFQSODFOEPTALSFCCRAZCBCIFBBHTDMDTROTEHTJEFKBNHRBJUTMVTNWJQZLHGIKPFNZBGBJADPEBXHPJFWXJUAJIXYBLGCKNXBSNRCAMRKRXSECVHTUYICMYUWEQCSVLEQNVVGXRSZDI");
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.007263636999570666);
    msg.setSource(11814U);
    msg.setSourceEntity(222U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(26U);
    msg.object_count = 47644U;
    msg.object_size = 459111563U;
    msg.change_time = 0.7849246392856423;
    msg.change_sid = 43319U;
    msg.change_sname.assign("PGXXMZOZQEBGZOLHZDUZGBFMKAGELSDBF");
    const char tmp_msg_0[] = {111, 40, 121, 4, 79, 66, -112, -55, 53, -57, -90, 25, 91, 63, 73, 12, 31, 52};
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
    msg.setTimeStamp(0.7234183384119809);
    msg.setSource(3623U);
    msg.setSourceEntity(170U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(205U);
    msg.object_count = 57647U;
    msg.object_size = 3359159250U;
    msg.change_time = 0.16543327306008226;
    msg.change_sid = 28631U;
    msg.change_sname.assign("NIMFFVELDVKLQKOTZVVMTUKIXIZCGSYQRXJCOBXHLWFXCSKXVDWASUETQOJLEMVFVPUR");
    const char tmp_msg_0[] = {-45, 80, -47, 6, 125, 14, -120, -125, 124, 65, 108, 14, 93, 77, -93, 53, -72, -29, -41, -40, 93, -13, -119, 1, 113, -42, -31, 105, -15, 104, 60, -10, -76, -76, -103, -110, -66, 30, 98, 60, -15, 109, 20, -23, 122, -55, 106, -127, -25, 86, -3, -72, -81, 64, 38, 36, 107, 54, -43, 21, 125, 65, -1, 108, 23, -76, -105, -10, -70, -113, 120, 91, 81, -32, -15, 88, 63, 61, 106, 38, -109, -107, -27, 57, 65, 97, 122, -15, 87, 99, -79, 63, 63, 100, 100, -48, 65, -23, 27, -111, 85, -12, 112, 95, 5, -122, 60, -75, -112, 41, -15, 58, -102, -80, 84, -16, -42, -34, 81, -22, -23, 25, 90, -85, 69, -44, 99, -101, -80, 120, 54, 34, 26, 95, -41, 103};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("ENWQPDTNOSNVOXEVXOQIWMJASSXKMTORPJFFECYPFRCSRKRLNVQX");
    tmp_msg_1.object_size = 50893U;
    tmp_msg_1.change_time = 0.04546848080215837;
    tmp_msg_1.change_sid = 57171U;
    tmp_msg_1.change_sname.assign("HRXHIGGRVEALKBMQUZVWVEEJWVUZFMNLTGFNSPO");
    const char tmp_tmp_msg_1_0[] = {-122, 25, 93, -50, 8, 48, -35, 43, -24, 22, 106, -40, 97, -125, -46, 7, 124, -57, 55, -22, -51, -97, -79, -116, -54, 123, -41, 10, 86, 10, -57, 44, -84, 112, -61, 55, 73, -102, 4, 76, -45, -69, 54, 109, 19, 55, -9, 59, 84, 109, 111, -88, 15, -25, -23, 98, 12, 77, -37, -122, -70, 3, 42, 104, 41, -91, 0, 26, -78, 97, -75, -17, 0, -48, -105, -97, -122, 98, -34, -15, -105, 116, -77, 24, -80, 49, -68, 117, 81, 78, -85, 41, -5, -119, 126, -99, -12, 59, -61, 99, 63, -39, 80, -19, -64};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("XTMNRONKWAZLNVLMSMIFWZOBMRFPLHFETVIOCDIYVRGLIOQBYFSPSIWHZWVLZYVABVLOXYDIXQBDRCERCPPPSCVTFWPTAXHAYMLPZRKTMZWAUJOOZQWTAUDSGFGXLCXEFRTHYKIQSGUOVVZXCIJXGYSJPGMJJTMNZHTYNIKQPUJBFKXGNCUBNUHUHRARTLQGWUJDMUHKKDXNNDQEJOHSKEZJSDKE");
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.861821850214236);
    msg.setSource(51187U);
    msg.setSourceEntity(21U);
    msg.setDestination(18817U);
    msg.setDestinationEntity(71U);
    msg.object_id.assign("NIYCTNSMKWGUOMXWCNOSWLCKZIDJXMFFQZCTBRTZVMCNZNIZIV");
    msg.object_size = 17218U;
    msg.change_time = 0.428091981325758;
    msg.change_sid = 20751U;
    msg.change_sname.assign("RGVMHEKMMEIQKHAYBHWJDOZVGVMLSBFCJQSEQYZCYLJDKYATYCWIWUCVIHJZ");
    const char tmp_msg_0[] = {-105, 42, 91, 26, -1, -99, 11, 40, -120, 55, 117, 37, 27, 2, -1, 30, 55, -23, -120, -20, -81, 14, -68, 29, 125, -115, 68, -98, 94, -64, 46, 28, -6, 87, -88, -57, 59, 63, 21, 113, -71, 30, -56, 54, 126, -97, 15, 59, -96, -28, -56, -112, -7, -60, 35, 123, 15, -2, 63, -84, 32, -119, 111, 33, 27, 14, 106, -85, 113, -33, -113, -11, 116, -59, -78, -88, -77, -47, 56, 62, 43, 21, -26, -26, -65, 30, 45, -99, 9, 44, 54, 13, 32, 29, -2, 46, -60, -11, 122, -95, 113, 84, -17, 9, -89, -72, -64, -72, 120, 92, 58, 73, -65, 2, -66, 26, -43, -16, -23, -97, -62, -83, -110, -112, 17, 124, 123, -17, 81, -46, 5, -103, -16, 124, -60, -92, 90, -51, -10, -112, 86, 65, -83, 65, 120, -112, -88, -78, -113, -107, -102, -15, 62, 22, 33, 9, 101, -115, -1, -11, 43, -88, 93, 19, -124, 103, 48, -100, -127, -83};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("UZPCJGFCGRWBOFZLTNHRDVWSJNOMMPULJXASLCFHFWNYBOWOZNWPIROAVEUCKJFRZYVTPARJQYMMQQFMLEQTX");

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
    msg.setTimeStamp(0.4568725919347967);
    msg.setSource(24806U);
    msg.setSourceEntity(181U);
    msg.setDestination(937U);
    msg.setDestinationEntity(171U);
    msg.object_id.assign("WFAARSPAGMMYMZXOYCFDGVZNIVJHTWHUZQUTEFBLMDIYPJTUPOLELJRZSMGIVYKXFSAETDDJXPQQSMOUNFBCGFGNPVOCWMBIZBGJYTXOCPXKTKEPPOQNVASQYRMXLXUSEPDANLNVOKHZTDZZVEMNDGQICRBBCJABEURRCDLTSLKUCWYNYHWIW");
    msg.object_size = 7137U;
    msg.change_time = 0.9721073933246908;
    msg.change_sid = 63657U;
    msg.change_sname.assign("ZWAHFGXRHYWHEONREMDSTNWLILCVYSVDRDDTGKWSBRHLPYWDAHEKALPN");
    const char tmp_msg_0[] = {-23, -60, -18, -6, -60, 100, 58, 101, -52, 43, 79, 101, -85, 26, -98, 47, -27, -10, -82, 122, -20, -76, 81, -31, 26, 70, -8};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("ZRHDXDJHTKXKMZQLRLBGLABCJREGEIMYVNQGMWHR");

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
    msg.setTimeStamp(0.7013284645494677);
    msg.setSource(53271U);
    msg.setSourceEntity(231U);
    msg.setDestination(36204U);
    msg.setDestinationEntity(138U);
    msg.object_id.assign("JAIPUCPZZLDZLYWCOVEDJKNWMBYOFNSGRJOPGTEARECXUWPPMZFEDBJPQVHILNRLZINBFXYKYKH");
    msg.object_size = 6744U;
    msg.change_time = 0.7545927666355912;
    msg.change_sid = 16013U;
    msg.change_sname.assign("MNMBDRAEEXXZOKGPOSWFLJYEFTEACTKBUIHSHWYNZPDCFAVTCQGZSFRRACRMIAASUPXXSRJAJHSGQQOIPKQQYAXICUQSUDVHLBIRJIWJWMUJVNVVNRMWXWQTJMBJONYYDWPCSFWFLZLXJNYSINVGZOLBFSUCXRVVKHXGQFWPHIZYPGRUEAUZOHFYPMLKQTBHHBYZMKLNUEBONHEBCRIMDDGJXTTGQGKDPOLYDTWGNZEB");
    const char tmp_msg_0[] = {3, -21, 46, 52, 16, 55, -97, 85, -101, -34, 42, 106, 91, 67, -125, -85, 84, 83, 125, -41, 42, 40, 74, 26, 75, -115, -38, -106, 105, -67, -86, 113, 63, -122, 73, -93, 70, -68, -122, 126, -43, 99, -126, -61, -113, 32, 4, -19, 103, -82, 63, 43, -93, -73, 102, 49, 40, -99, -29, -21, 18, -118, -61, 56, 107, 43, -53, 110, 50, 105, -56, 119, -38, -105, -102, -43, -125, 64, 5, 96, -91, 54, 123, 26, -41, -1, -33, -18, -50, -96, 42, -7, 114, 45, 118, -86, -63, -87, -15, 66, -99, 96, 64, 1, 67, 67, 19, -14, -113, -48, 114, 108, 92, 30, -86, 49, -37, 40, 28, -44, 59, 27, 60, -6, 123, 3, 114, 29, -73, -109, -14, 60, -111, -11, -52, 88, 78, 62, -110, 67, -118, -108, 83, 79, -93, 69, 102, 105, -24, -50, -123, -59, -4, 37, -113, -76, -58, 65, 67, 39, 91, -41, 53, 10, 79, 24, -65, 113, -100, -19, 89, -117, 0, -103, -16, 88, -114, 111, 126, 96, -107, -78, 70, -47, -113, 106, 109, 48, -17, 70, 124, 57, -48, -116, 23, 14, -59, 90};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("PGVDDDVZJUTEOTDYFHQKSWVGCOZTOBWMYTPZHMLJRQ");

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
    msg.setTimeStamp(0.34003747421103825);
    msg.setSource(33834U);
    msg.setSourceEntity(23U);
    msg.setDestination(29098U);
    msg.setDestinationEntity(41U);
    msg.type = 27U;
    msg.op = 60U;
    msg.request_id = 58825U;
    msg.plan_id.assign("TDYUNHYZJDJYMMGCKGIKGHSFZODKWYJLXXBTYBSDOXYRXLNEPRPPSEBPVEUYUDOAEVGCJSPTORRNMVGFTWXRZUTKGIGSVQUNXQFENEZGBZRSOMATLZKJMMNOFTRFIZLBCWHSAVFJUDWARPHXEHHQMOJLWYBIHFOQBJXFABAAKLWRESVFMXQHACKNDQTSSCUCIGWQIGAQQ");
    msg.flags = 37543U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("WWSPQKOPAJXCZVOBLGZHBXVKLWIVWTZKFYQJOZVGMHZCQNXYQVBDFWCCECUKGYOTUHXDAGTDNLGYDSJZMUSWKVQNMKTLYVMZYGIAPTLHXMCPDAMNMXNYTKQGYUAAFFKQFHEIRCEDQPVYRRRAXBIANKJWHBBEULWVLGJEESMTZDPBUURJTJPFPGJHTIIRR");
    tmp_msg_0.op = 96U;
    tmp_msg_0.lat = 0.05238081801091887;
    tmp_msg_0.lon = 0.6857837907759176;
    tmp_msg_0.height = 0.24633225193235553;
    tmp_msg_0.x = 0.4208592614322596;
    tmp_msg_0.y = 0.21537864792465333;
    tmp_msg_0.z = 0.546913953576374;
    tmp_msg_0.phi = 0.2327634403741724;
    tmp_msg_0.theta = 0.3620714776292119;
    tmp_msg_0.psi = 0.9423321374854711;
    tmp_msg_0.vx = 0.8344786412391585;
    tmp_msg_0.vy = 0.4743801293343296;
    tmp_msg_0.vz = 0.6611095354955075;
    tmp_msg_0.p = 0.020802282912962933;
    tmp_msg_0.q = 0.542622190091539;
    tmp_msg_0.r = 0.9931231841692941;
    tmp_msg_0.svx = 0.0899419714021138;
    tmp_msg_0.svy = 0.4066607854789598;
    tmp_msg_0.svz = 0.030396225420947665;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BKKWDBNITPUBZIDTAACIDKPXRHQDYQGRSKHZGSRLYREGEEWUCLUUNVFZXIPXGOPHXWYP");

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
    msg.setTimeStamp(0.8414427909827512);
    msg.setSource(63409U);
    msg.setSourceEntity(37U);
    msg.setDestination(12197U);
    msg.setDestinationEntity(208U);
    msg.type = 143U;
    msg.op = 251U;
    msg.request_id = 14429U;
    msg.plan_id.assign("HGWESRYHCAAKGLJUHAPSRLIADRBNMODHSKZMWTIXEEEPOGOTXJFKOMQTYCIDBHARXRJMBOTJVMPKTKYUPFVWFGNQX");
    msg.flags = 30808U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FTWJYNYBCBICHIRVXPASJWIZXTVOJKSENRPRUMBRGYTVVRZCNDYQLADIYDMNSQOBAGIJWUPSYYYAVMUUNAKMEXMSMTKLZAH");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 561204729U;
    tmp_tmp_msg_0_0.id.assign("ULFGQXTYLCXYGNHTRDVILKPFRQPSNJHDJPWBTQDJBHWATEDMAZTKDVTWWJSGCUNUCYFPSLOWUKBINZBAGWMHLASTUMVGBZJQVYCQVRJXYHZFMTYDEUGWNKODWMHANE");
    tmp_tmp_msg_0_0.memento.assign("OMSLUVGTEJBXYPXSTWXODOIHHCWIJZEBUSVXTIANKAFGJIEGEVFRCBQYTQYHVQDUAYXFWQORGOJTSTOWZLFXPEVSPPAJIASYKBECWMITOMYQSCOISMTVLKKJFMRRCZDGRAQBSMGGQNLEVIMAKOQYEZDC");
    tmp_tmp_msg_0_0.timeout = 33096U;
    tmp_tmp_msg_0_0.lat = 0.1786832088507485;
    tmp_tmp_msg_0_0.lon = 0.19584399295211952;
    tmp_tmp_msg_0_0.z = 0.7765345128259912;
    tmp_tmp_msg_0_0.z_units = 13U;
    tmp_tmp_msg_0_0.pitch = 0.9344311675484168;
    tmp_tmp_msg_0_0.amplitude = 0.6528403836268224;
    tmp_tmp_msg_0_0.duration = 52000U;
    tmp_tmp_msg_0_0.speed = 0.27360670019915556;
    tmp_tmp_msg_0_0.speed_units = 153U;
    tmp_tmp_msg_0_0.radius = 0.8488779316269935;
    tmp_tmp_msg_0_0.direction = 11U;
    tmp_tmp_msg_0_0.custom.assign("DHTVTERXNYNPCWLIHGLUJQTJHARM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WIVLRBYHMAOVQWAAZTPAUNGOVHGAKOPUNSTUWUUDBHPXXDNJFBMIQMQGVFJDWYHQFIEEESNRIKGFBGKVBKCNYMHXISCCWKWMEHEADOPCTSMAHZTYYBMGSVXDXQTG");

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
    msg.setTimeStamp(0.4242379499833676);
    msg.setSource(842U);
    msg.setSourceEntity(139U);
    msg.setDestination(55124U);
    msg.setDestinationEntity(26U);
    msg.type = 76U;
    msg.op = 163U;
    msg.request_id = 63938U;
    msg.plan_id.assign("EPOLCDSRAGUAIYQIQOWPJHGRGCWXYXKLUMKZYUNDBCSUZUQLXTRPFMJWYURWTUSDCICQVTDIYHJJTHEYKOVTXBWFKUNVJYZLEQFELDKWGCBBPRCWDXJTRBVMZIUSPANL");
    msg.flags = 24898U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.08733659336537836;
    tmp_msg_0.beam_height = 0.9912438214696621;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KUYDGTCJTXG");

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
    msg.setTimeStamp(0.396378386420971);
    msg.setSource(40292U);
    msg.setSourceEntity(226U);
    msg.setDestination(12549U);
    msg.setDestinationEntity(13U);
    msg.state = 160U;
    msg.plan_id.assign("PLEAAZZOSPNCPBTJQRMGLADJBRHCPWYMTJKRUFLTJWFNXYFSZXDVEIPHUHUSSGIEZFVWIRADHWANLNKVAKXBZLDCKDUWCYOWGDUACDNPTFHJXZGBRQYYSMETMQNGCRZQEYVCENQTDURMOLMQCKBBALFOWXGNBKNXHUXMUVRBPCEIXEXYFFSGFIVOYKDMTP");
    msg.plan_eta = -281079141;
    msg.plan_progress = 0.9941740090162081;
    msg.man_id.assign("YVNGGRACFZXUDHRUIABXQCDREZGCVRPZZYWPGWKYEESEFRTTSHBBLPXHWEFCSAKMTGZYCOZWPNHDHKNBUUEGCLGTDKJMFLUNXDMNNVUMWXUXIPITPGLOSTJZMIQGKPSSKRMAQQYSNJRAJTXALVJLKQPISYOZTACOSUEJAJKNBODVPBEVDXODNBNYCKYQFFFWTUMMQYBQMHUOFWEOQVAYFHHSCIVADJGQBZOXEIIM");
    msg.man_type = 36491U;
    msg.man_eta = 1863075288;
    msg.last_outcome = 201U;

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
    msg.setTimeStamp(0.7671152020219415);
    msg.setSource(29704U);
    msg.setSourceEntity(70U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(107U);
    msg.state = 54U;
    msg.plan_id.assign("UWRWVHKOPOQGQLVFHKJGHPZTZWYGYAGWJOPFWLGZHDGMFEXPLIPUMLNMTULSFOQQIQJDZUKYECYSGCEJPVTDKDRYBHMCVIANNWFQBMMFPBRDDVXUJLTHTRAAOUYFJLEDAZAEOJIZSGLICSWIUXNTKZKCVSKHVUTCMNBTDIARNDQNPBSURJVLIHHSVIUEWXJGBQCXOATSAXBNYGKXMNNRPRSEFZRFQYMWKBRIHZDPCQBKEVO");
    msg.plan_eta = 397339391;
    msg.plan_progress = 0.8292476898073803;
    msg.man_id.assign("NMCDLVVGSXTDYHYJDVUEOIOPMDMCDOAUUEQBUWZYPMKLSZXVIYUYWTKFRLWODKNJYSZRQLVVNEXNOTBKJAQSCRBCIHPVRCZSNWVMEZLUIGFTYNWMZOKAQJMLUOOALIIEKOFSDQPAOPSFQJCESAERTNJWMBWPBBLZLEUNEGPQNSVPZIFGHJQLCAFKNCGFFMWBKRAAGTFXBHXGPHMRHZPXBUHIKCCXRHSGZYUFGJWDXJIVTDRTTQKQAEXTYGR");
    msg.man_type = 2351U;
    msg.man_eta = 99153844;
    msg.last_outcome = 110U;

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
    msg.setTimeStamp(0.25286154094909197);
    msg.setSource(40143U);
    msg.setSourceEntity(182U);
    msg.setDestination(35970U);
    msg.setDestinationEntity(8U);
    msg.state = 88U;
    msg.plan_id.assign("YWQTNHPDFTBESOUSFUYZALDTNSD");
    msg.plan_eta = -632306290;
    msg.plan_progress = 0.7069108925430903;
    msg.man_id.assign("XKCXWDRASYGRNXGDJVYYXPRDHCZQFYNGTCRUEDAQUIKOVZPNQLHSCXWAD");
    msg.man_type = 5084U;
    msg.man_eta = -1635689920;
    msg.last_outcome = 27U;

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
    msg.setTimeStamp(0.9836193009878755);
    msg.setSource(24605U);
    msg.setSourceEntity(225U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(30U);
    msg.name.assign("SDEVZDIFSKHIRBOYVCGFCRBFMZFOBZEJUBLGKPSNIBGXMWDLCATGAETXUGAODMPPEKYXSKKGECTZWJPPKJVNOPGJOMBFWNCUJ");
    msg.value.assign("MLUKZTYEZKAPISAEIFJUENTGBTAFNHUOFXLSDXUHGZSJBWVUGIGGHMDPSKDTGNVWRTMXJCZZQEYSQBHQZHIQGIVYNCEYACYVPCRPRBSXMDIKNJDLPCQC");
    msg.type = 191U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.14580871239735638);
    msg.setSource(30481U);
    msg.setSourceEntity(172U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(241U);
    msg.name.assign("EOWHYJZLDQGBBBBXJPSXNFDWRZKNAZITLRNSNZHFIVXNSTBLYVAHIOFILVXCHBACMDXRTMZMRUEIQVOEAOUIKYMIQUPPXRPBJIVHMAPWEFMLWZUCNJALEMQQOKQHYCXUXGE");
    msg.value.assign("GVREMYNCSSUREIJHGNNXUFPYSCYCGTHREHMBIOKZEGBHBOZJJUZNASXCPSCOHUQXFKXQMBPADXBXTXKNGJQCLOLPYKMICRSHBFPOWZQHMTDYELDEZPDEAFDVVFFKRKOUCXMUFZSFMVQGNWUBVEGKJIBGCJXTJRQDIAIHWCBWEZMRVKTHTWRWAV");
    msg.type = 153U;
    msg.access = 174U;

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
    msg.setTimeStamp(0.06473569931453438);
    msg.setSource(17588U);
    msg.setSourceEntity(13U);
    msg.setDestination(43882U);
    msg.setDestinationEntity(254U);
    msg.name.assign("DFVVSQKSNIJWZWEBKIESMGPWMTFRTCIMPPLZAIUAKOTCCMZLDKNVELCUDIOMXZWOLJEWWQBXGYRBFHUGVKYVESBQUCNYHVLFTOADCIBXXAWLOIWYMSZYEUULQZPIFXBHQPZVMHCGKOKJNYANMFSFMXFGOBDDXRMLNHTSZPCSPTODZUAERYAGFTNKGUIJKDHFCR");
    msg.value.assign("AEURBLFROCBJTFIOMUWERQMBOZTZRSNDSPIGHYRYJUKXFBCIGVICFYGVVZHVSBHSOXTEFJCGYWLYYHWNEANWXBFMKJCJTWDOTCYBIAXZVQSFCLUAATYWHXSJRPZNMGAJVS");
    msg.type = 34U;
    msg.access = 129U;

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
    msg.setTimeStamp(0.21880781217251166);
    msg.setSource(5433U);
    msg.setSourceEntity(132U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(164U);
    msg.cmd = 243U;
    msg.op = 93U;
    msg.plan_id.assign("WWGKZZJYSGBCUKEISYIDJREYEZTQBNBQIBTGNAFWXRSZMDNPLKEELAULGRSHJTFOJRSCRCGGAFFCLIXAFXGXLKKWNHHEVRNHGADQOPVIOMMAUMTVDYVXCPMUZSFEDXSJWXHQFRHZVNNWYQUQYZJUFUJDHJADOIYOYSORCZELVVPD");
    msg.params.assign("RNPAJOWWRPLZFAYKVZZPRUSDV");

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
    msg.setTimeStamp(0.23767209508013076);
    msg.setSource(9798U);
    msg.setSourceEntity(221U);
    msg.setDestination(11673U);
    msg.setDestinationEntity(161U);
    msg.cmd = 31U;
    msg.op = 92U;
    msg.plan_id.assign("ZNQFZKAYLINBVKRFDKLZCRVVIZKGEGNMBXBCSLPPRSUFYYWAKQXWNZNEHQAJCFRGADIMPONPQLWMCUDZDHZMEJYSMEBJMSJTQHJUYPHQUOHWEAXWEIAIBLIAOKPWCAYJILPXWNGVOTXUSLORCGJCKSLAOUTUNKHDRETCODEMRFPWVDSDTBDYMQSABMUYQGFNZRZCEFQVVSXJGFOLYJM");
    msg.params.assign("HFGMTAIVDKGXGCMLQVUNPXPVLMTJVOSMWXQHZGBWQDBYDMBYJDNMZHIQ");

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
    msg.setTimeStamp(0.5915044218547832);
    msg.setSource(20657U);
    msg.setSourceEntity(227U);
    msg.setDestination(20565U);
    msg.setDestinationEntity(128U);
    msg.cmd = 49U;
    msg.op = 219U;
    msg.plan_id.assign("ZVNLPCTGUKIVOOLEZTWUVW");
    msg.params.assign("USBZUGENZSBDCOAVHDOUOKAMYALBNZLPBPXJOQSYUZFCZSLHDKIBLTGULATYCQSQLNFFNPQYVDOGVWCIOUIRSXYHKJMUIDPDBEFOMKTNLZMFCRETCTMQXLUMMBJJEWPNVWIZHRFFEQDKOGAWWAQXHTHDZBNJGJNQGIITVWQHXPCPUWHFTHYYTESQRYECYWVVGGKEZKMWDLWJRMXPNLKVUOXTIEFJGAIORZ");

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
    msg.setTimeStamp(0.8299879087180657);
    msg.setSource(19128U);
    msg.setSourceEntity(52U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("QPIXPCZWWKSYTEEALXQLOULOEIUHZYRUOVUTEEYOANRUBPCDDFMXLCEQDAQMWTHKOBOKDOHRQTGJDGWJBLWTNIFPGHMBJSTJPXVGKGIRFZNSCHWVCVZSVYYYFUNJZTDSXRBGIBGWHJEMSBQSNAMAYAMMECENZKINKIXUQOJTQHYFFHPDXPZWRPAQQULGNBLZKIPYMGCYAIE");
    msg.op = 183U;
    msg.lat = 0.15013162757904097;
    msg.lon = 0.21295991691711003;
    msg.height = 0.8370115288747308;
    msg.x = 0.7694938014497628;
    msg.y = 0.5159156052758481;
    msg.z = 0.6815132804806203;
    msg.phi = 0.656664360611843;
    msg.theta = 0.43244708733300863;
    msg.psi = 0.993928168271353;
    msg.vx = 0.1317276722534304;
    msg.vy = 0.1516566467177859;
    msg.vz = 0.5091719949018675;
    msg.p = 0.9831327586600294;
    msg.q = 0.050130334375183994;
    msg.r = 0.029073876886854144;
    msg.svx = 0.9413368716260226;
    msg.svy = 0.8718832334770391;
    msg.svz = 0.9609805473540974;

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
    msg.setTimeStamp(0.7266254870324305);
    msg.setSource(36424U);
    msg.setSourceEntity(60U);
    msg.setDestination(49500U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("XAHHFPDLJKGOZVWDDHWZWVTOLGPPOVSAXMZNCWGPUZVFXSZTJZBPBQKKABWTQLTXDHPLPRLMNSCEZIGGXAFSZHQZAFCAKUKURDOCOODNLCWLRWWXHJPRWCCIYRZMOJPCEIQYNSGERENPSQNBGXIVOAVRISGERBUYJOKIXHVCXIEJTIAJEHVLNTQYBYMMFFFW");
    msg.op = 220U;
    msg.lat = 0.3028887924879601;
    msg.lon = 0.8748833504898829;
    msg.height = 0.8840348305259899;
    msg.x = 0.8555167986361643;
    msg.y = 0.17210731457354622;
    msg.z = 0.8893800094371591;
    msg.phi = 0.6899833933877272;
    msg.theta = 0.439746903403751;
    msg.psi = 0.6310881570697469;
    msg.vx = 0.32256773031950403;
    msg.vy = 0.8165417454151552;
    msg.vz = 0.5099962980060062;
    msg.p = 0.5670618606388478;
    msg.q = 0.4826852730602472;
    msg.r = 0.9977231266104267;
    msg.svx = 0.7018197532867687;
    msg.svy = 0.07119109960765646;
    msg.svz = 0.8289806288719354;

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
    msg.setTimeStamp(0.16221180129858803);
    msg.setSource(20415U);
    msg.setSourceEntity(24U);
    msg.setDestination(64534U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("ZAHENXNIHTWXWBWKQOWITXVGHVGBMOGYWIVDVYGHAYPXUFEWZMFKTLYCPSMMPFPIZQTBVOWNMOMYIUTMRUNPDJQKRSYCIYHOLQAQKNUJXKSEZARAFEBCHIASKQLZVBNDMTJNXSLIIAEPVDLLEXSMGBCQKIFNFLJXSZETJVPUJOEPWDMOUZYZGHZYCRODWXKLRDPGDCVOYUCSNCFUQHJKKBFABNJP");
    msg.op = 251U;
    msg.lat = 0.7804877803167575;
    msg.lon = 0.046785240501393655;
    msg.height = 0.6071115025237166;
    msg.x = 0.6195501267588053;
    msg.y = 0.5933021016739993;
    msg.z = 0.9294283460571333;
    msg.phi = 0.8191684066771585;
    msg.theta = 0.593672359303856;
    msg.psi = 0.49133463359628715;
    msg.vx = 0.6297436922454572;
    msg.vy = 0.22758573028983708;
    msg.vz = 0.49846188798216307;
    msg.p = 0.8979541058937064;
    msg.q = 0.5765040351492247;
    msg.r = 0.21683130685919105;
    msg.svx = 0.6756572234990877;
    msg.svy = 0.3787305910333333;
    msg.svz = 0.006605255889852946;

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
    msg.setTimeStamp(0.1660616971271479);
    msg.setSource(32974U);
    msg.setSourceEntity(81U);
    msg.setDestination(4675U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("CMJYVIUIWTVPIXTBEBQSTRCZFRQBYTSNJQBGWEPKMHCCVFAZSIHFQHKWHVVJUYAQHMLYIOH");
    msg.type = 64U;
    msg.properties = 4U;
    msg.durations.assign("KWUSHVEOUBTWSFZQXQLOBLKBBYTNPAWCHKGYYTIZIBOZGDOJEPXAFTDCBNDIVOKOYTPWXNQELCMTOJPMNDMYRCOUGJZVJHSHSNILOVPTBPPHFIUIK");
    msg.distances.assign("JPVRFRROGVIATOAFFAWDLLBGGYTKUWMHIWQSZGJKSATDQQJRMKCRVNXKXPQGXBQBXADQYEYWCILNVNTFUNAMBLQTBOTRBJOHIUOKHYDJGVNOMPEHJCQIYUGGDXIOKAZECILPKELWCFBKQRVEHDCZHJCSFEMHMYEUMVJMVUSELUCWOSWZNFKDFTYDPWVYZYTOFPQLXUIZWJSMUSMDNPSZXBNIRISHBLNCBAATPTAZKXJG");
    msg.actions.assign("SRZDMBSWMFABRMHWSQCNQVANXJXKVXDLOQNXHFEIEQJGGLRWKOFVCNQUYLOTKSMGXPEOUVIYSVDTDPEACSCEEVHNQMYGFIZJNMBTVMLQRBSUAXYRUCJJTLDOYHWMAUCYPSXKFLJBIGMORJHEGXUIUDDAPTGCZOUZLNATRHICPBGEZZKAMOYBQWB");
    msg.fuel.assign("RLEMJWXFVQPFWAZKWSRKTENNHHGYAWCGFOGOIHDSBTHODNIXCFGBGEMMXUXSPIQYVNPUUBAPSCKUCZIUHTWJVXZUNMJHRVDHEMSFKQOQJTSERNQTWDMJOBEQZPQHKAVBLIYDRETETULGXJJZMJYARCOKGTROZABDINMWXGKSXAWTVLNPCZYOMHDSJPYY");

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
    msg.setTimeStamp(0.2024424279736734);
    msg.setSource(26518U);
    msg.setSourceEntity(103U);
    msg.setDestination(31083U);
    msg.setDestinationEntity(117U);
    msg.plan_id.assign("KFOQYCIQVNRLRHPNCBGVOPUHKTNMECFATPMZEMIYXYZHESDDFSLPANTXCVMNLSAODFKLWBJLZBJDYJDUECDZSPUAJEBNZFWHCNZYTRTTNRSHYHOIVRYSCFIRFZDWEQYGOFBJBUEVDAGKKYKSBQFQMGWLBQMSKGUXCAAGPOUYXICXFBAXURXWWRQGXJQKUSLZWHAVLIQTLNE");
    msg.type = 58U;
    msg.properties = 15U;
    msg.durations.assign("EPNDHDOSTRNS");
    msg.distances.assign("JTZQQZZFERRBNXRUTZXDTBKUTBPVRDIOXXSFAQIAHVDHXYLMEATSWCJRWTYGACPQIYCDCPPMBPHFKXALQYDLNPKWEDNHZSEUERAKOELRCDUVDIGOWZGBZFBKINXSGQYVKCLCETNHSYRRWPJJGEJXVFOKANZGTUJFMUGFGIOK");
    msg.actions.assign("VQQGAKQBROCDEKLUPILCLSRLQVPJPZTEFJGANOXEGIFTMDNRUSXTMCBKOBZHKXUXWJHNJNUTCBRJRYBBYACBLPDVSYOQYGMGYNZBGUVWYWYVKQCXTTYEDZDNHOTUEJADXMXWOLPVDGMJRCXOSHZQQXGHHQYZSAFAIUMJWMABLIHSWAFHYRGLKREDVREMVKEJJFZIOZOOPZSMIKLWQUXFPS");
    msg.fuel.assign("QQPUMCHFCKLMXHHOZXPRLJPXMQOFGJRUYUKZOSKSAAZOBKUEFEIVJWZBAJPCSBRTDGOMNAFZCMLYQVUSWNDMNEDGUJTSJEERPVGMQCNBFKTELYSLOHIBOWFWNPPCKSIQIVCTYITYXBS");

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
    msg.setTimeStamp(0.9468848437928671);
    msg.setSource(36024U);
    msg.setSourceEntity(104U);
    msg.setDestination(28291U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("RZDNJKKMXNGOLYWAPQPELJJGTYBGAWBTPZJOYKAJLMKIRIGVCFHUARCPOXGSITGCPRTUKDYZZNWMXNAJLSUBNTHJSGXBHPHSECGVFVQXHKZRCBONGITVUBOMDDRQQFSSGHAWTJQUKCYXTVBMKDHQYMPVLHVNYUEWNXBORFYNDFAZAWESUFOXVRCEXBINUEMOQCZZYIOHQVLPSDZMEUFLTKIWACIBJMEWYIHTZVDDFKXSRLSRDQQCLA");
    msg.type = 189U;
    msg.properties = 196U;
    msg.durations.assign("RZBFYCPMXELZAXJMEPZQJVIIMESTDZGCULRYVAOQNGGZVOVYJCOOKPIHVCMPQ");
    msg.distances.assign("NKRWPKGOEDSSVFOFAVNGLZCBFLMUWOBGYAXLRTNFPCGUUSUPMQMUHWLJHSXFMQDPMHWHIQBBYWXAIHCREXPYZTXBWWTGZVULDOMWSVOKLNUYCCXDNQZIBRMEZERGYLEJON");
    msg.actions.assign("ICZMATCGJIEJBNGZJFAVRQXQWXZRPSPNFPGMMQBIIYHBTEZUDOSCOVJTCEUEXIWHVAXKUZSNMCKNJUVODIESBWLOQWCLFBKAERUODQFNUVPSDWBDKGPARGYWHAVYSHTLJHLZHKCDAWURBZJTKBZDYVUXSPFGJHXMEKDQTQRAFGPKEOTCOMRZDJVFRZYVKKNALXTYNHWRMGYLUOGTTLPBMABDFOXPELINVECRCILYWHILWFYPUIMSYQFMXSSQG");
    msg.fuel.assign("IMCHLZARPGVZIXYMXKEFDVVTQMWRJHYLVJFVTLGABLCGSKPSJHMOAHAQNCTPBYIXEBDBYQUYLMRIVKCQXFPETQJSZQAVJRJVNWRUSVNXCWLEHNDMOIWNHMQSJWZNAUOFUSNYMINTK");

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
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.8556631608965886);
    msg.setSource(57448U);
    msg.setSourceEntity(163U);
    msg.setDestination(24037U);
    msg.setDestinationEntity(42U);
    msg.id.assign("WSLMROYUEFKVDTTYNUDUCCKYZ");
    msg.plan_id.assign("OTMCABYROPVYVUHQCPXVEUPMGAJNZXDBCWHHXCNGUTAOFBLQHBSLELSYPOWXBHZRLTMXSZULNVPIWKJIUCZAGZKVWDLIMLQMIBCJIFHBWESFUWRTOMZXFTFDKKMQYIKMPNFSLAUOGRJNSTJBMDVTWPADRVANUWYEEXKGWENJZDOKMROUQYWYDBYSOCTSAHCGJKDQBIZQCDHVAXFLYXPIJSIEHOCURFRNPLGSFGGQVNIPQGNRDVEAK");
    msg.maneuver_id.assign("MROMLYFYCPWAPBZAWVTEFURNWZSDKKBWHPXSWPGGYRKIKECZTBLOOWZNAWZRHNCJUAMPFKVXLTIQZHGZNRLJSDTNLWAVNCGFYTJFZHOMMSYEQIELBPULVUARFUUSTLKIRXDKMOBXMXFQODIDCNGUHAYLUOIPTNYYKHGMQNRPXSQVAEQXEJSCSDQFRKGJCYPTPX");
    msg.memento.assign("YUUVMARRGMSFJNVYD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.12946530766959008);
    msg.setSource(10446U);
    msg.setSourceEntity(6U);
    msg.setDestination(35394U);
    msg.setDestinationEntity(33U);
    msg.id.assign("ARCTXRAUFJLKSEUWKHHRKWFIEJQCTNNVZLEMMGRLJIGHWWSLQNXABKUVNWJY");
    msg.plan_id.assign("LFUTHUZQVNMNNHNJHRGXAEZXUYENQDUQMMQIMWWIGCXLWIYPOCCKKYSXIGSNQFEWDMOSOJCBSTJAPQZAVOGRWDZVMBSLDFQRZLGLVTOQFVTDLVHIMLCURXJVCBWIYYBLERUJKFRPKBKJYPSTNGIPEIBCQSSHXXVOUPENMBYYTZTWDFWLWFDKBKHAAZAGUOUPTXXHYDUTPOECNWECBDGRRSRPLKXJCHNQEODRHSFKYGMAJPJEAHBJMAZ");
    msg.maneuver_id.assign("QHQMYFSEEJYKREADKBIBKKLUUXFEPFOQXXVPVPJSOUYASXZGWKTLRIIGLVZSHWGRCXUOMNPTJZOBHVYU");
    msg.memento.assign("SWLQBBNZBEXWHTMDISGDHLNGJIUGGXRAVORAWCHTCUSDZBFYRKLONVIXTYMSNJVEQGEMMXGFAPFXLOQCRDGAVPZMNQQRFRSRZCFQPAKSLDJBCGUCUKNKLVIBEUUPRBOFAJYEWPMOEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.6807785307183181);
    msg.setSource(45907U);
    msg.setSourceEntity(149U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(181U);
    msg.id.assign("TVDWAVTUGNLQOMSJCUANKVGKHGZQEEIURXC");
    msg.plan_id.assign("YTONPTYQNGYSBQVUKZSY");
    msg.maneuver_id.assign("LNAIZRBNXMBMGFEHEYVWUCFUDXPVOSHTJMPEKETTBRXEKVYHMDMPOLVNNAGJQPQMEQKNTZRZFKSIRMUUCOEGRHYJLSOIJSFIWJOBJQYZENOPITXFPGWYSLAXAJVUHQHPVVYLWKZBSLRAXUQBVCHZAUIGRKCBHDTYJDLRXVMALWUDUXBXCFDOJKDQNFTNFJZLQGGIZHGQDSSKESICNITAZYLXTCMAEQHVB");
    msg.memento.assign("SZVKQISCSGKKZIDOKYLDEHBYSMMRBPTRFVOJPCSWOCFUQXEONVDPNEFRINSLCKHTQBPQETARNRCXPCSPGSGUVDHZWVVXXJMXILAJBPQRLIUOVWNTXKZONYFDKOYXWVAHWUHTZVARIGZLAFUMZYOACNYUHEDEMUIMADHCZFRHIQALBBHMMWWUPPQAUGTKGJGYKEFEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9314634938705172);
    msg.setSource(39770U);
    msg.setSourceEntity(39U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.7387445273713605;
    msg.lon = 0.7345523705231564;
    msg.depth = 0.8795660166274379;
    msg.roll = 0.8765502257297492;
    msg.pitch = 0.0641988879090376;
    msg.yaw = 0.34579335200725037;
    msg.rcp_time = 0.39835735206368206;
    msg.sid.assign("XTIFPFOZGJWF");
    msg.s_type = 90U;

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
    msg.setTimeStamp(0.9902344368654716);
    msg.setSource(3852U);
    msg.setSourceEntity(56U);
    msg.setDestination(55580U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.9007347546076717;
    msg.lon = 0.28103024399437326;
    msg.depth = 0.6164105664104661;
    msg.roll = 0.5308211176466576;
    msg.pitch = 0.36102058261337355;
    msg.yaw = 0.059005507604360186;
    msg.rcp_time = 0.43190145595024465;
    msg.sid.assign("ZEIBSZITUZPMTAHYVRQWCSNFIBGJEDBDLVBDFIJUFSRSXXPHYJLUMEAGV");
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
    msg.setTimeStamp(0.5881259890401527);
    msg.setSource(1635U);
    msg.setSourceEntity(253U);
    msg.setDestination(31012U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.6940377747685217;
    msg.lon = 0.7975273819581084;
    msg.depth = 0.4949975092176341;
    msg.roll = 0.9210337338043578;
    msg.pitch = 0.2129861125386402;
    msg.yaw = 0.5908124885959166;
    msg.rcp_time = 0.0844147007191719;
    msg.sid.assign("SUQJHCRLULWBYRVKAZRLLTKOQJGQSBXTMIDACBPCFBLJBNSNTXFECEQERTFEPLJXNJ");
    msg.s_type = 186U;

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
    msg.setTimeStamp(0.0870419785794635);
    msg.setSource(52186U);
    msg.setSourceEntity(211U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(119U);
    msg.id.assign("NGWPMIWHCVSLDU");
    msg.sensor_class.assign("LZTAUOWTQSHXCMCWREGDBIHUUOUVPSYQZSDQQDOFYPMKGVYCWSIEVMCHMVKROYNGOCOFOENWJAFBKBLEMDPRYHANSLSKHJDYCTGYDZNGXYEWQSCRAKOPMLWWXBURPGAJADZSQVFLHQRZKJIQIUZDFPBGGQIWBYMAZCLRNRIBNPVVJLXAEPJEWFZUOHAFBPJVUFWZXLGBGBKK");
    msg.lat = 0.44078654444812826;
    msg.lon = 0.7733641574060405;
    msg.alt = 0.9361929267902848;
    msg.heading = 0.39231434433322854;
    msg.data.assign("AQIIWKQSWWATZHIDUIEEFMDX");

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
    msg.setTimeStamp(0.8176910455407962);
    msg.setSource(26426U);
    msg.setSourceEntity(76U);
    msg.setDestination(37973U);
    msg.setDestinationEntity(113U);
    msg.id.assign("FZELLIUXNSQWQOLPPDANGWGVOQTPITZQERHLKATDQCQWTMWWARVPDXASB");
    msg.sensor_class.assign("QAHCISCKYKHGUDJXPWQMKNBMVYVCMFHWEZOZKVXRNBWEHTQIDFFLCBBYLXAVYMJVEZA");
    msg.lat = 0.8592167065887374;
    msg.lon = 0.9215893183346383;
    msg.alt = 0.043185973238045294;
    msg.heading = 0.9758094973574805;
    msg.data.assign("GCUAOHGUAYLQNTAVJHCMMXQDLTHFWOTUUVUGDSYAWIBFPLBBAZDBRLGEDKZCIVUFMUTNADSOYVDFGQSJPYNURY");

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
    msg.setTimeStamp(0.4701296824007313);
    msg.setSource(36887U);
    msg.setSourceEntity(58U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(194U);
    msg.id.assign("TNWWAXJFSYLESCUXJTUXVMAIOOGBRPVXISSHUHLNGMOTOWMWOFJKQKEXWEXPNHCWMPCFKGICHKDBDVFTMCDUZHMVDLRAWGYRPXNVDTYIRISUFBNZBCSRQUZLBQKHVYMHXTAKYGMWIYVTFLYD");
    msg.sensor_class.assign("MBLITOGZYQOYDNVDDBGERTHIVQZZRQGCUEUICSDZMFHMAFKLTCNHZLPIGIHKRORDYEJUQDEPSZ");
    msg.lat = 0.820347192976125;
    msg.lon = 0.3488688389761154;
    msg.alt = 0.959090179116726;
    msg.heading = 0.21903421115671484;
    msg.data.assign("MUPDVLJLCEBNLDOQFILAPQJCEGMDBLSQUTLBEKJVCSBDZTEVTMXZAKOAHWLWNOXHRIVGZIWNUVIYWHCODCZYXCZQFROTBXWAYUZFENIKGWUUJDSFQAROKGAGLJUVHEQFJQWXRBWXKSQRJHPSNOIUYTNKVHXIJMEQPAODRBEKDVMEMLZGRSPZXGIPETZUUBBMADFY");

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
    msg.setTimeStamp(0.4167155527191858);
    msg.setSource(43505U);
    msg.setSourceEntity(45U);
    msg.setDestination(14152U);
    msg.setDestinationEntity(197U);
    msg.id.assign("FKZZEICIDLCLLLFDJRBTYKSCITJRROQCXMQLEONEGGYKZCZLHGQACANHWDMSZUAYKUAQHPXPFVXIHVKRPAYQDEIVTGGHWSJFTVUBOXIXATWIDAOL");

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
    msg.setTimeStamp(0.05081298869090234);
    msg.setSource(14424U);
    msg.setSourceEntity(202U);
    msg.setDestination(46404U);
    msg.setDestinationEntity(49U);
    msg.id.assign("EZUJOQOADNFUDK");

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
    msg.setTimeStamp(0.5516277964041437);
    msg.setSource(51614U);
    msg.setSourceEntity(89U);
    msg.setDestination(54825U);
    msg.setDestinationEntity(6U);
    msg.id.assign("WWAUGJFKNGPFPYBYJNODKEBUIWDHCHZFRQQOVGVJDFOPYKFNDEIXAYLTIQYJYTGRNUBCQXTNAEPHWZKSFHPBUQWLBWMIKFMLLCOAIPXULKORVTBGLAZVJGNVQSZHXIIMCZGCPME");

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
    msg.setTimeStamp(0.0586004714090016);
    msg.setSource(18452U);
    msg.setSourceEntity(109U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(165U);
    msg.id.assign("GAVWRZOURRZBYLVWLXHMSAPXSWDGJGPHUICSMVUSTLBTIQLVPVTBPOJACIJNEMETDJRZYGPEYJSXGLCSTBHPJOWBFVFVABHJAGEXTEKDHMDLRWGRIUHVNYZMKYFQHXFWVHODTAYQUWFKKCXBNUYAGEQNFNRMKKWPOMSDIMZXKQDQINMRPCROECYBQIXKJOUHOZFSNDQCMJQWXBKLPAXFOTDWPA");
    msg.feature_type = 247U;
    msg.rgb_red = 108U;
    msg.rgb_green = 61U;
    msg.rgb_blue = 139U;

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
    msg.setTimeStamp(0.9557204961326377);
    msg.setSource(7715U);
    msg.setSourceEntity(229U);
    msg.setDestination(25967U);
    msg.setDestinationEntity(189U);
    msg.id.assign("TMRAXKTIHQRXFHDSFXQHERUGFJBZUTPHELHAWQSBGKPKXELTZJGLWVGZXHCRUDPIYIBGEGLTOLXOSKIBNEADQTEFWTJRJIXCSXUIYMPBTNUCYJMNBUZUIOWDHVQHEMENAYBYYZOIVGYCMIJMQTVXZZKDKCBVFPECDTMFKDWRVOFBKJLZDINJQJCMZWFGVBORAUAORNNSYQPEFCSLMGCRQOSPDPZYSWWLJUYOKAUWVANHWSGHNNRVVKSCMQA");
    msg.feature_type = 2U;
    msg.rgb_red = 176U;
    msg.rgb_green = 65U;
    msg.rgb_blue = 83U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3411977593013745;
    tmp_msg_0.lon = 0.1818039761072926;
    tmp_msg_0.alt = 0.8903330884344585;
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
    msg.setTimeStamp(0.04471807490907875);
    msg.setSource(22397U);
    msg.setSourceEntity(57U);
    msg.setDestination(61723U);
    msg.setDestinationEntity(85U);
    msg.id.assign("MXKFPJCABYAONTJNIBECRUYXJBYAUTMAMJFURUINJWXKVDKZQBFQBCBMSAZQIZDWCRBEJUWVCMLEORFQTDUMLGXFBNYVWWKYZJSNVLYFKGRPQZVDORFHFNEPEWMKAOPHDLAZVAQNNHTQKHZWFPDKUWMTCLLSRXZWMHETSHSMOCFIIGIZTZVJQHUXDCSOXAGPEXLHJUEPLQIILGYDPAVEY");
    msg.feature_type = 31U;
    msg.rgb_red = 67U;
    msg.rgb_green = 14U;
    msg.rgb_blue = 150U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2206079357599029;
    tmp_msg_0.lon = 0.22015496064497542;
    tmp_msg_0.alt = 0.6387228973611444;
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
    msg.setTimeStamp(0.273950683035572);
    msg.setSource(55301U);
    msg.setSourceEntity(229U);
    msg.setDestination(41450U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.12914843396905762;
    msg.lon = 0.7868086571913075;
    msg.alt = 0.10839000775292951;

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
    msg.setTimeStamp(0.7174459199163957);
    msg.setSource(56638U);
    msg.setSourceEntity(107U);
    msg.setDestination(49363U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.036134515316648796;
    msg.lon = 0.5229509349007652;
    msg.alt = 0.9865784926312432;

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
    msg.setTimeStamp(0.5828411479758557);
    msg.setSource(30957U);
    msg.setSourceEntity(165U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.5516013195084013;
    msg.lon = 0.4585545318165163;
    msg.alt = 0.5079783196149915;

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
    msg.setTimeStamp(0.8237554131572461);
    msg.setSource(39661U);
    msg.setSourceEntity(87U);
    msg.setDestination(4856U);
    msg.setDestinationEntity(24U);
    msg.type = 73U;
    msg.id.assign("DWTJFSRQMLRAFSLJZNLJUXPPTKOYWXYNMUGZGDQNEJCRKTCJKWEOXRHLDAMPGSCCMDIYZHFTVZXSCEIKZRVCDJXGFUBCKVDIYXCBFVALQIPCFLAUGTGHFNBWQABBDAQUHWPDGQVMKUYSDYNJUOARWJBWAOWPXYQFAEISWLLIBUOLEINKM");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.12063085500923831;
    tmp_msg_0.beam_height = 0.834177226031874;
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
    msg.setTimeStamp(0.04091131863142805);
    msg.setSource(5918U);
    msg.setSourceEntity(81U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(110U);
    msg.type = 82U;
    msg.id.assign("VQABVVPDSDTPIAZFZCVCPNINEGLXRETJCPODUFVHKBKJKJGRBMGRBVYDOGUPSXLOQRTIGMUGQFWUC");
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.654559361038874);
    msg.setSource(41191U);
    msg.setSourceEntity(248U);
    msg.setDestination(24170U);
    msg.setDestinationEntity(204U);
    msg.type = 162U;
    msg.id.assign("COXDMPQTRWRNSRLHJZNFRMFWIFEXXFMTPENFYGLIZLRYDJVHQMGEAOXRUCTFXXIJCKTTABYWPPIYNUDSZJGDZKOPGACQZPVBWDOKBIUCDIDQGAYPUSSLVMWKPDGJYEEMUYNBNZDCESJCECGVWWWBHEOHLOABVKQKSUKJZQZPUTJBMTHHNNLPKQUWRZAGIVAXBXLGOARHXIYFRNBJYACA");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 59331U;
    tmp_msg_0.ttl = 16822U;
    tmp_msg_0.destination.assign("MRNEKSSNGTJWHMDUGCTSRYTKGQETNKHNPGQMLQSGOPKLCWPTLMPNAAAJUAMBHDZXVZPWEUYZQXSNDKFGPHQCLGBULJCWBSDCUCJHZGFUIUCXSPXFVJBXNTATKAYORBMLDZLYHSEOBYTZORPQWRVQOJTDYOAIKJZDEWRKNSVIEAJYIHIQYVQHNHVXWIKFPWISBFJZLVOMRGXFCVWUIYWKXQ");
    const char tmp_tmp_msg_0_0[] = {23, 99, 26, 30, 39, 113, -33, 21, 36, -48, 87, -22, -11, 31, -24, 54, -69, -87, -71, -50, -120, 70, 59, -96, -49};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8206086950535033);
    msg.setSource(25965U);
    msg.setSourceEntity(197U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(19U);
    msg.localname.assign("KPBOBDNZAZJOVVRKYAYBRAERYKTQIUJLGWIJLBPSGWJNPEZUFWZDERGHXNHEHTGMESJCPEVIAGEXOUKSHGPLKCXDUCNZXVYMFLOQNUIXSUHHIQPZDLCXXGGMIPAKYJFVRFOWQDDNLMQMOYWNYKYWHYAJMAAXWLUTFBXNRKJVZQBOCSEDTBJMQVPBDXSZCMOVYZVBTFNUTH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KPQQWPUICYAVLWYZQBGZDUUJJBJLHLYDWUHQDCOKWETRUCWSKCBMMGVHSPZRDQTNXAWGDMMYVMDZXEONEQNPBRONTGTXIBLDTSCUAIPEALMKDMFWFAMPBIZFUYECEIZFDKFNCIJWRUAHQOQETYVXSPNIIJNRYVZMOCHIWASNSHRXSCHBOTZGRVFGWIHAGAUTLMCNSREXBLJTXXFVB");
    tmp_msg_0.sys_type = 231U;
    tmp_msg_0.owner = 44585U;
    tmp_msg_0.lat = 0.10934242612746092;
    tmp_msg_0.lon = 0.6587251935836675;
    tmp_msg_0.height = 0.0812220273491725;
    tmp_msg_0.services.assign("ZYPWYSKHKGWIXDUOBWNYLFFXPHMVENYRGZFQIAZMTCSSLVBLBQOOOJJOMHXIVJPAYCGRCUKXULGQADINMTSGRJMBWXORXNDFMHFIOUHXAJDQZLFMYLMVSSEJRXSWWDQRJZCTTZOUYKKFVGDLRCSQPLWEKLJFZLVTQERPAZVGWGWTOCUCPNPZAHEECHFIGVXTCVGUBKEQKTNXMKARIYBHIBUOPFBISTEB");
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
    msg.setTimeStamp(0.7324276719400327);
    msg.setSource(39125U);
    msg.setSourceEntity(243U);
    msg.setDestination(13224U);
    msg.setDestinationEntity(216U);
    msg.localname.assign("YMQZLGZGAULGCJBVXQNDZHBQWMUJMWXULJGRIFBAPCEFSQEHSILHCIGKUFFDZLBCBLWJENJRMTMYPVDWEYDKCIDTXIAQSDDGJUXBWXASYTXEVJINYYRXHFOKYFRZXNTGTLVOLNWAT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YRMAENOQLZZSPRUZSUTXKJZNXGYDSOFAOFKQBTUBCJHSFIGEEKQZITFOEAJGSVEGLXICWNDSTKYKEUDOTRZNTRGBHIVGMCJTABTZDXMVCMOMZPHLDVFQKCPTWXNZIBYVIXQYALYFI");
    tmp_msg_0.sys_type = 118U;
    tmp_msg_0.owner = 27961U;
    tmp_msg_0.lat = 0.8700282911284292;
    tmp_msg_0.lon = 0.5935985153133693;
    tmp_msg_0.height = 0.7035879857142548;
    tmp_msg_0.services.assign("WBBFQSPZEWMOLBVSAQLYTYPORRRGQPLDLCMXKVIEBXMPYIORIKTGUTVCZZLGMSXUVSACDBJLOJPBIDWHRSBYWBPNEDEXFIHMLAAFAZUYCRPOWQQQKGTMNAFEALVRNEKSGFNTKRWJUXUDNYPQGHOSOXHGYLQWVZZGHSJDGV");
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
    msg.setTimeStamp(0.47504817485289963);
    msg.setSource(15304U);
    msg.setSourceEntity(53U);
    msg.setDestination(42078U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("IBTHFWXRYUGMOVUYZDVSTCUCBVPCNKFYOIDZGECCBBWDEBTUDLTKMLIDOBFIGPKKAVTHPUBICJYETZLEVGUJLQXUUKGAUXDNJRPQMFDSYHAKIHHEEINJOEJXIAMTRTQKNMLLLRPZANF");

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
    msg.setTimeStamp(0.6000775833671969);
    msg.setSource(61271U);
    msg.setSourceEntity(207U);
    msg.setDestination(8915U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("JWOTXFCLPFIBVNTZLJUIQLWHGADKSZXYGBRMRCYQVEGYNXTJWWOHSDDQWLZLXNMBDJYCQBTHUFZPVAPXUVIXYHRGMJNYPDATSNITCJPLLQERZKHPNRUWPRJKPOHVAVWRIFQZAANTCLGQNZJCPLCSZEKJUKEEMIKEGEORBPBDMSNKIOGOBURGIOKEAJFXGTSKQYOMSURFZCYVEFVCWOIVUXBQLWKMUXBABVFU");
    msg.predicate.assign("ZUGSFHDQJCIBUQEKOWENUALURJZZODXONOHZLCZIHFEBRQWGJSXXBQFXBFZMQMXNDAQFTYUSHXHSYZYALVKTYAQPDKRZHYYATWOEJGVWHOHVSYNQCIAGLYOBLMGEIJJBDBTPDECRDXSWUYUTTMCISRGRXTBKFSTRINOCMJJHRNFEGCWSMWQPKVPBEEIPLWLLLCVMPGFAMYPOXIGJVAFKQWATVVDNMEOPTPUHKKVSRAINIDDKBNZF");
    msg.attributes.assign("CXJQCQVTEARNWDQENZMUNMAOFIDETPJDHYSEKWHIWWMLKRRLFI");

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
    msg.setTimeStamp(0.06680570762521942);
    msg.setSource(2721U);
    msg.setSourceEntity(24U);
    msg.setDestination(19209U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("KMYUNKBYODXHPMZLEWKJGWSUNBFTVMYWXJZXORJCQARJFLUETUIPCCVNFFBMVVFTYHEBBNWQROEBIKRYNQHYAXVFGYNSWLMRLEKDQTWZVYWRSUVTDQSOCGNPICTPSPGHGPFVKSUXBCICABUOPLKMTHDBTCVZJLAEWERDXDPZLJZRMDQXGTLVZGIYGAAAKKDWGEXODRQJMOSFEQPUNIMPOCQXAGYDNTHXHUHBIE");
    msg.predicate.assign("CNIYLUKBCGBMPGGLHFATTXYHXEKZCPYQTTPQZJFVNUXNTYRZMGZOFMABKSGEUKNLSYAAONATDUCBOSKXEAPWZERRFZVIVKDGENCMQPNHYDIYLDMXJVFHWCPXRECQMWVMOQVJXULAQSOSGBHTJFXJZBRUXHFVTWKLTEQRDDCQHVSPWBOKBWMMJOIGWERIOJWUHCOALPCKGIDAISWULRUYPGDZULZFNALNJITXVJYRKSFRHBVE");
    msg.attributes.assign("SVBMBCUXTQRUNATXHJIPFIKJJYKBYMACKZXIFYMOSFEAWPYNMNOPSNQWJMDACSYDGLFSCVKRYAEMHHWYWRSZUWJSQXJNXAFHKRFGTSQJBPHXL");

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
    msg.setTimeStamp(0.7403397728408911);
    msg.setSource(11393U);
    msg.setSourceEntity(113U);
    msg.setDestination(50603U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("YLORODEZPHNDFBUTCDJXWTRHSXQOCRCBIYSQELVNHXEXZUGQZAYFMCAJFKFFIOXNCOWGJNVHFWMVXVMWMYGHCNXJRAASJSWRQPCRABOGGJLZGNWSKYPOSLBTMLEPNMTAHEWYUYQAULTLCUPFBHDAKVIPDUAIZKGLITSDBYYDNSBYNGEEZQTKXPVWMUIUBWUKRMKZVHEOPWLVZQKIFDQTFJZXT");
    msg.predicate.assign("PYNEOXFICYGY");
    msg.attributes.assign("BQECBVJVFTCYQRLAFKLHZUXRLABBMKSFZZNXHXVVZKDTDGOMNYCCEANWPTOZRKLEYPXINDNCIZPKAOJVJQCUUQDPTLXHIMFRVOGEROVORLOHBPRIIXWWRDFAXSMPJDGMVBGUBROPHVTXKREMKGDIMHSTFXGUYYAJBMYCUSBADLEEJISIWWNSONCGTM");

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
    msg.setTimeStamp(0.6348617025778233);
    msg.setSource(50340U);
    msg.setSourceEntity(197U);
    msg.setDestination(34693U);
    msg.setDestinationEntity(36U);
    msg.command = 242U;
    msg.goal_id.assign("PBXUHNVGQLTUWYBGABWOFUHODAYDZCBTNLWLKCBIFIRROYJGIMADQDSWMMZTUYCGMUFRCHPXXIHURWUHACWXNNQGVOWJVXZXBDOOTVVYLGSEKOAJLLQOQJESYATWBRBICPEKCTTHFAHVUSJENYWZFPKSYNUPPZXXTMELGKMELOZDZJMNKRIMOHGQBVCJDSNFHPISTNKMGLCXIAFJRRFZZQUQLWYHKKSEVJFIIQEPPANMESBZJGVDRXADQSKP");
    msg.goal_xml.assign("CDICYYQGNPCMZBBYYKRPMLXZQIORWSJPWKQKDXSTMTVXZSBCEHDAJGIHDNCUSLTZRHNNYOMMQGBFLINKZFYEFFLAXRHWNDSOEVWQJLDEHBTFSUAOIFJMZAZGTKOZQTUOTFYJZIDRSYBLOLJYUSUHLBLNNBRQW");

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
    msg.setTimeStamp(0.20796865688727173);
    msg.setSource(46338U);
    msg.setSourceEntity(157U);
    msg.setDestination(60932U);
    msg.setDestinationEntity(252U);
    msg.command = 236U;
    msg.goal_id.assign("RSLMNGMHWJXNGEQPYFEXBXQAZNHFULMSXAHFITZGWVKZOPHBMFBPRRJTWQYOAVXUSZHJFJSCTNDFMGKZAYKDLSZHQRBYINHEPJFIBHNOGVEMCMTAAPNTEKOUAOOGZJIUVMOOLKFASVQLSRBCWKFXVYNWEJIKVVCZXNITSPUUEHLKDUQLWVTCBRRYJXYAHYBTEPIKGJBBGYQCMDWAXZFDIDOSCJQKLZWTEEUM");
    msg.goal_xml.assign("JFQPQDDTJOBAAYQUSIWBTWTVPXUEYTUIWUPDDWAHVOOXCHXPKLNITEAZIKMBSQVWLRPHVGMPJMBFKYEZVBBWXAMZACFSUEGDSFZDYBRGQTWVKHQFXFNWQNHGQCBHAKMWYSSOBZRZZNDUGLSFROACKLEOFCIATSLKGZNDBEKVPCXKJHQCUCYMNINPVLYNJZURRUCXCRPIYWFXSOJSLGJHIDLTEVMPXMLRGG");

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
    msg.setTimeStamp(0.3361877217504843);
    msg.setSource(23828U);
    msg.setSourceEntity(127U);
    msg.setDestination(38021U);
    msg.setDestinationEntity(156U);
    msg.command = 75U;
    msg.goal_id.assign("FJKQFJFYQBBFENTDWWJFYBLQTVRYFNEPESVAWLFHYTOXHNQDHILKKRBLXKXHTUWLTPXOZKYAALBDYRFIKMGACJZTCJOEZWIUUSHIPAPTFBNCCBUXUSHEZZRXTKAOZSTVVYZGSVPNEOLIUAPOMVDVBUSGJMPXJFXR");
    msg.goal_xml.assign("GIHABYEAFUIQJAVHNTKHGODOBTCHVNVROCXAYXINDPBRZGGQVSWOPXIDUWATLBVHMXZSNYFFKVDJHXXKSAVSPNRCTUQOLAXCNIWFCQLBMBGSZEUHVQFYFFIREOLLZTFTPYSROCMDPQHOZEISSTQOQECGODUJQKUJKWGJJRLKGYUJMCZTFSBMXWBZLLQKZMVBWNURUBMMTWRLJDWEDGMFXKPPNREKDNHZNPVJAEAXWIECYATIWEUHYPYSRC");

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
    msg.setTimeStamp(0.03579351817196397);
    msg.setSource(34962U);
    msg.setSourceEntity(50U);
    msg.setDestination(58861U);
    msg.setDestinationEntity(58U);
    msg.op = 151U;
    msg.goal_id.assign("RJINHWMWYWRSUSVTNIKPFDESAVXHLTPKKNFHILRNYPSAQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XBMBOANJTEUNQDKJHTPLVDSXSWYJURALSXAQSOISMQVHCYKMHFJUSAYCZKATPYUGZMPDMEUIXYWRPOECNSIVQQOFIFHGMQAAIDGWQPSGWXGTFGSJRRCCUXGMFAVEZ");
    tmp_msg_0.predicate.assign("CTDOUOQHIURVLVLFXIXEOPZGHBHARWYYKIYEDWLTOPMCGYELZLJFXNHCDXRKATAQPFOGSGXKTUTPXUFIGOMVXQCNAJWDYBDABIOZBOSSYJEWTLVAQEMKTSPWNITNDNXUMLQIXAFFTJWKHVCHJSJQKSPRWBQGCZSPSKLA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SSDXYQDKYXNMPKJWTGHVSXAXLFAIQZUCFTCKFHQFRDHEUOJBQWLIGPBSCPGZRMQJGYICRCYVTEHGNEGTJONVIRDZLKRBVMWONHPPAGMUBVRFJZWDJYKIVDGUEESUZZAPUNWDYNLKIAMBTALVERIXOXLLEKAEFTMTBBHXPJXQDQSGRLUOQMFIRKLUOJAOYHBJVKWONDSZSVFZWIXZPM");
    tmp_tmp_msg_0_0.attr_type = 171U;
    tmp_tmp_msg_0_0.min.assign("SFZGMPIUGOINRMMNLZCJTQYBDSCNPINWJQCDBOTYLGFPELHQTJRHBULTDMRKQPFYSLRMYDNHRYKUWUJNKTNCTWXWAEWYS");
    tmp_tmp_msg_0_0.max.assign("VFUGJMDBIKFIBQQNVTMDDXZYLQKCSZADVWWJSBJQHVCNQEFMAGHAMAXINMPOKXEZYSBOGRIVHZPBOHYSETLVZPLZLNAUDWRECGFOOPHBJGFSGZJWSYLACTTOMFWKJITQELLEHPWRNUXATYEACGONVUXNFWSUNCRQRNFRQUDIHMCTIGEYGTLIFNLUBCSKKXETDFCYCQMHZMY");
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
    msg.setTimeStamp(0.6950818413710835);
    msg.setSource(23229U);
    msg.setSourceEntity(61U);
    msg.setDestination(59945U);
    msg.setDestinationEntity(230U);
    msg.op = 222U;
    msg.goal_id.assign("UMYVTRLRZAYRCBPSKOJMKWZFWLQNXTYERQGVPZXEABIMWMOPLIHIGGPFOZRTVEXDGCDQRAFDYNUIOAJORHIMPCJNNBFOJNQGKPODHNVVTBBCHYEKCXACQSNMWOXZLGVHKUBYFBHWSBMZJGCEMJLVISKYBUDCKWSRTHDIKVPTXUACRT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VUHGEQJNXYAZLLPKXGLXKXRKVPWHBABYSFCUITYHFBMDDVPSSTSKNYPGMDMPKYZWQFDFUZWQWFQSWFKICZLMOIHHTHBCCRQERBUHPYAPRVYALSXIHGGSMMOCDWFTWEULLAQWEOWZJTVZOMEWGPQBXAEUVGPLVJJDNDAEOENZSCNMINHBOKJXZOBYUEVBPNMKURJHFFYOZDRDITAQCIEUVTBM");
    tmp_msg_0.predicate.assign("AOACNEGSCXYQZLJBBFOMOJALFJEDXVVAVMSFORIKXXGRISENXWKYDXDMPZLMZKVWNYSIABPSY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HKYUECVCYLRHGBFKWXQQASMIOPTSZYUSNTZQSNXKRVMMEXSWFKD");
    tmp_tmp_msg_0_0.attr_type = 158U;
    tmp_tmp_msg_0_0.min.assign("RCOEYSDLRBLRSATZKKQWDQCJHHZYWIMFTFKZWPOTRNRDWDMSUYTPMRLHRZEKMQTPDUPWFJUDOWMOUVDHEXUCNOGFGMSZNHVZTKNHHPGNMQCYYXGXIDKAQVEWALJMSIYJGLFAPJBAMLTQGPRUOXFWYXBHQFWSVZBKISXOTDUVTBCEAJZZEQJIEBIBMJLCRCJGVBFVIAPEBPSFOOYKNXYSTGVNALQWANVPEDGIOKUCHSILQXNY");
    tmp_tmp_msg_0_0.max.assign("LUFRANNMYAKFNXFUTEDDACKUSYVKCFBCHPDJOPOVLLCCLINQQTZQXFOPCMIODXEWONFKASIHVXTIWVISOKSLKVVHSZZNTGPSWCKRMOAHVZRTSQEWAXBBMHAVHYTWZWBFVEOISPQUYJDZIYPDAIQBGZBCJPRXLXZMPJYMGPJLS");
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
    msg.setTimeStamp(0.9179399056612904);
    msg.setSource(43906U);
    msg.setSourceEntity(9U);
    msg.setDestination(21449U);
    msg.setDestinationEntity(121U);
    msg.op = 215U;
    msg.goal_id.assign("MIKOOLNWFK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VSDQGXTIUSIRBYHWZNUBZTGMNSNLG");
    tmp_msg_0.predicate.assign("JDGPUGLJUXWXRDVIEPSLYBSRBBZSZOBOLXYEQGLFNAKVVAEFYARMCFQFJOYTZZJKIIUWRPK");
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
    msg.setTimeStamp(0.2550332293013494);
    msg.setSource(63312U);
    msg.setSourceEntity(229U);
    msg.setDestination(40274U);
    msg.setDestinationEntity(62U);
    msg.name.assign("XFOEQTTWCZFYJNRPZRVJSSKUXSAJOBHLGIZLPSVMKOLQSYUXCYNTMLVNFDMSQUQKFZNAWI");
    msg.attr_type = 186U;
    msg.min.assign("TWIYNCIUGAATLDKPXZQPHLFJSJDXOLMNGFJKMGONFVTSBLFDVROXOWZGQPYKNSVBKEVSCCSMCWUZAYDL");
    msg.max.assign("ISOPEKQUACUYWMQDAHPURTPSNCMMWWCTGNWGWLIDSUBVOQFYZTAKLKKGLGJYLIAXIJRSOXEBLZTNNVDRQNBGBECLHXMGQAZOPZHTBRXVCEKYAXVSSWOZXNICJLYDRTMFMOJMQTOJOWJVVKVRHGADPJKGPYBBMINQAEDBWVIPFZXKEFVGNQCKVCFTSLEKCWYRHYPUUIAFZECFHIE");

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
    msg.setTimeStamp(0.9710483929985698);
    msg.setSource(7134U);
    msg.setSourceEntity(235U);
    msg.setDestination(32697U);
    msg.setDestinationEntity(101U);
    msg.name.assign("BBXNTVCGSREMQBEGFVDMXQCPOGCYJOBRUYPUEPJJXTCKHVZMKYEUMIJKYBHEHNOLAUULCADXFTBHPLIZLZZIINNAWXLLSUXPN");
    msg.attr_type = 35U;
    msg.min.assign("PDYOYWPFLEGKKNTQXAQFIXSVACCXGPFLEQUSFWRAAHDEIYBVBITGZNHHUBFZLUQFOBWYIGKJRCCGUSPDEJEPAGLUPJSTIQLXACBHBAXYRLQBLPSZFWIYQNOKDJTKHXWLCMXAVIECNEKRMIWWUPNSTYZFKOXMWCVCBWNDULISSZYJZMMTDYQJUOTPDGJSTE");
    msg.max.assign("FQEVKEFKZNYRYTINBSUHXKEJGLVHYMIKGEEPMCLPBOCOWWFBUIGIUVFNXPOWSSWLADRTPKOGLTHGDLCQAQMCEEITXURDVWLZCAFCJYNIZWAZISNRXOACUQSFJVQFHXOX");

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
    msg.setTimeStamp(0.5993675199657286);
    msg.setSource(64242U);
    msg.setSourceEntity(161U);
    msg.setDestination(34717U);
    msg.setDestinationEntity(30U);
    msg.name.assign("MVQGMZFZDSOEXEWJXGSTPASEHUZPZATPFRL");
    msg.attr_type = 65U;
    msg.min.assign("BIJGDSVZEAGTAOSJMKURPRVIEFODSXNEWSJFBYOCUVVQVFXIEFEHCVFNFKKRWZOZNLNYPSUUHKD");
    msg.max.assign("LVDDONVFNKZUFVHQGXGTFUEBBPCOHEQPRRWRASSQSBOLLYIQVHMEHHTXNCYEXQGLRPBTNQVSHUCFKCWKIMZJAFWJUBVRJNQIFDGORMMIJBUS");

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
    msg.setTimeStamp(0.1689096143336054);
    msg.setSource(50617U);
    msg.setSourceEntity(138U);
    msg.setDestination(55500U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("YZNRCQBMSITIUFRMCAILDZLOTHHVEEUTIGGFUGDGEELKGTBBDYQOOCXLYVMJKGBWQAPMUNFFJOSDWIQFGCXKOYAZWMPHUNQFUHIWMEFAZLUKPEL");
    msg.predicate.assign("QXRYNKNSPODLGYEUAJVFCPNDALCESVYWDRADKOXUVNHXDQFDNZVJRTSGQULWGSJSWUJFXUVBNCBAPCLQMCRYEKQEYGUQWBEUHFJPHMQMCKDVEJLZIQNIRYSKUKPSPFCXZZPLBIFIIKATHTKBHRGZZZKOOHNKPMTDMFWEDIYRALBVGCJVXZITPSYIBPAHEWGZQJMVT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ATUKTRQLQYMEFCVAIFKRRDVGTTHHINGDPXSYHBPWKMKFXUCGYQUUCSEOJWGRQPNMKPNLEZAFBFXNHEMOULTDHZLBJSCEZJKZOHUVARRVJALVPCGYJWWDBSVDBMQTCBTFSWQEZDVNOCWSAGOXRDZDKXZUYPDASTNUKORNMCBYYHVDOEFCMANJQ");
    tmp_msg_0.attr_type = 86U;
    tmp_msg_0.min.assign("BBRHRPOFIDWGACAIYBTEQLQFIFQCYBKTZZBVAWUUOPRJZWSMYHJLENUBGQDTOEEDOXLZTLICOIKVGMUZXVBYINWHSNIDTXFYPKOGUCAAUBWHPJMMSGLIPPXCKJRAXXSUFIHKZMSTVNGPFZRQVEYQGAENLKDXECGDZUWUVRCSYGHPRLNVCQMADKAKIRCJHMJJRSOYDLULNODBDSBRZFYNXTWZFHSVJMNPOEXMHVCNLHW");
    tmp_msg_0.max.assign("TLTUBAWMVLWXJXATAROTPHKJHDZUOKFCYADNUTAGDTRFGHDUEKSHBYYHGBACMAXNPOWBXYSGRLESSIPWYQKIDOKUBJZVQENWYHNDMRILJWSXYFURDRAKGFVXXONNZERKEVJPLFMMFSVZPHYLWKCZUZDCBKHODJA");
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
    msg.setTimeStamp(0.6068428812506448);
    msg.setSource(32034U);
    msg.setSourceEntity(0U);
    msg.setDestination(59286U);
    msg.setDestinationEntity(1U);
    msg.timeline.assign("EWVCXCRYXESCRDTKZUCMNVKYPVNQPPOCUMHAQONEUXHDQMTRBNLOVGTYQZDSOILHFKBIHWPKPESKKBUWTXOUUDSYUNQMYXVBRVDBALWFPZLTNFLNBKKLTABTPNECBBRZNMIEAJXLQJOGYJSLHXGRVRHGCXMIDFTQKJGSGOKOVWDAFSZAZVCMWRGPWOGSAZFLAIEZWJ");
    msg.predicate.assign("VECLYZRAKEHAJJSTZ");

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
    msg.setTimeStamp(0.7054101274498089);
    msg.setSource(42749U);
    msg.setSourceEntity(113U);
    msg.setDestination(62963U);
    msg.setDestinationEntity(108U);
    msg.timeline.assign("YXRICAHKIJZZSFLIOQFSRAASHJTLGYMBPHAUYMTXLPUDNJDTVXVCYRUPNPXWOBNDVKQNBLRQUGJ");
    msg.predicate.assign("UJNWXPHIKEZOQNNAZDLYBATIPLC");

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
    msg.setTimeStamp(0.640687290813004);
    msg.setSource(21277U);
    msg.setSourceEntity(114U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(53U);
    msg.reactor.assign("RSAYVOYMJNBGHBWOCEAHQKVWQMFDURKDJKFIRULXOZQRDDTCDHRGFZUKIMNGTAHXKFDOVPPRBDXGBATTBGEJINVKVRISX");

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
    msg.setTimeStamp(0.7585062357774924);
    msg.setSource(53707U);
    msg.setSourceEntity(229U);
    msg.setDestination(30056U);
    msg.setDestinationEntity(241U);
    msg.reactor.assign("ZPSHWUXMAEYBQTIEIDALNEXOUZGHMNSPFBLCAVCVFZHJDFGPMHIABABGXEZBJTHCTJCIKAUGPURJESFS");

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
    msg.setTimeStamp(0.6869078578334653);
    msg.setSource(26834U);
    msg.setSourceEntity(2U);
    msg.setDestination(10806U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("TOWJDWKIWQXLRPFSZAZQBBSFMMFKDHXSICRGNGQVLVNSNATUEFOEXZWJCHLLWFLBGEPXMPZFOUJYRPADAPPYSJCTXLMUBXRLUOBGXEMHRIVKZZPCTWYUSJSTCXYUQHYCDFTBGYUIBQRDWCHSZJOQNCAGIEVYOETZGDDHCBGLSZRBDMKAWQEKGMTNBKXKNLTTOHPVAOIVJUZPFMU");

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
    msg.setTimeStamp(0.4739180399751005);
    msg.setSource(400U);
    msg.setSourceEntity(176U);
    msg.setDestination(39911U);
    msg.setDestinationEntity(212U);
    msg.topic.assign("TJEXEBGWADCKZXRPQUPDVKJUKTMAEKAUXODOWPESRVXQIRVMSWXJCTIOJCFUBMXSJDWJPRZYOZHLORVMJDOQLFGGZEKXAZOCWNCPQQAZNBITMGDPAYCZLPSNYQFWXMTKAOZALVTWVXENWSHHRENBBILUDBAELURTYQIEHCHLGFDKTMCWFJGHILYWBJFYCPTBSYRSIFMNRFSGBVMMPHZDUDJKFNNUZFXQERPIKAVKUN");
    msg.data.assign("CDBHOPQDUGAYBZTRYKRSVXXHXJYOSPOIARBDTDZYNLKFOZPRJOHLQLHCKJKOOGWZVLZXRQJBBRWUCDZCZOZFDEANEPWSGJEUEVEIFVEKLPIFNJKFJACUMHNUCPKQHNQQMAYHJMPSLWKFXFMTWNFHGXWGEDOJAPVZQLSQEIUYTSHVTFCSSAUDX");

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
    msg.setTimeStamp(0.721833538491507);
    msg.setSource(21434U);
    msg.setSourceEntity(76U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(70U);
    msg.topic.assign("RPKNYBUFRTOLBMYQIONJMOEJHQNUZXRISIELIXPHTUKCRCSKXEKCSPUWFZCDNPVXASTNNDIGARGAWRWFHKGJDCUAETBHVEFSAKUNOHJOMJEXVJFVVVTACMMYCBTEVWZOGOQLYQQQGIGKAFMXLIBBEHJSGJHDXPWPOMZXNLIVQSOYWPDLBAAGWCZXFLBTDJZHTYECNZYETLUPBLYDCAQDHZILSMKOQWPRSIXGYUKMW");
    msg.data.assign("DULMREEHZOOGSLNODJZRIEHFFONWHFGNGYJEGYZFCNIOUZMMZRFXCCPKBAEGLKDDFU");

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
    msg.setTimeStamp(0.04458629978027007);
    msg.setSource(16017U);
    msg.setSourceEntity(164U);
    msg.setDestination(26857U);
    msg.setDestinationEntity(199U);
    msg.topic.assign("BRVLUCIKPEAQYEHBNTHYZJUNJ");
    msg.data.assign("DLJWMOGAQMIAYCXJHEXCINXGVYFPFVIAMUCSKGDFYMDTEJIWKFHWCRHTFVOZPESPDUARHVZXAUQYC");

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
    msg.setTimeStamp(0.9949330699716205);
    msg.setSource(7347U);
    msg.setSourceEntity(188U);
    msg.setDestination(8499U);
    msg.setDestinationEntity(79U);
    msg.frameid = 203U;
    const char tmp_msg_0[] = {-74, 97, -67, 33, -41, 61, -109, 40, 10, -68, -90, -50, 124, -14, -54, -103, -100, 39, 64, 103, 20, -6, 94, 80, 93, -44, -77, -53, -127, 81, -83, -121, 125, -9, -6, 2, -106, -39, -49, -25, -22, 72, -1, -87, 122, 31, -96, 60, 10, 102, -42, 90, 5, 67, -10, 8, -78, 20, 96, -106, 119, 122, 97, 20, -17, 2, -101, -6, 112, -96, 85, 82, 33, -104, -40, 24, 11, -125, 59, -80, -2, 56, -126, -99};
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
    msg.setTimeStamp(0.6342255631267605);
    msg.setSource(61377U);
    msg.setSourceEntity(4U);
    msg.setDestination(2560U);
    msg.setDestinationEntity(241U);
    msg.frameid = 120U;
    const char tmp_msg_0[] = {43, -68, -119, -17, 4, -56, -47, -118, 91, -103, 30, 3, 33, 16, -122, -20, 116, -44, -75, 71, 19, 67, 51, -127, 95, 28, -83, 3, -59, -94, 121, -33, 57, -57, 114, 86, -80, 56, 18, 121, 116, -94, 122, -128, 122, -110, -96, 61, -72, -5, 6, -58, -86, 7, -96, 42, -13, -74, 109, -89, 70, -4, 117, -13, -85, -33, 33, 92, -37, 80, 30, 82, 60, 125, -90, 86, 50, -66, 17, 8, 99, 117, -110, -90, -32, -34, 11, -115, 10, -41, -43, 96, 11, -37, 83, 12, -21, 91, 118, 39, -84, -79, 6, 42, 124, -97, 105, -93, -36, 42, 124, -5, 103, -83, -63, 54, -16, -68, 100, -114, -116, 0, 71, -71, 87, -44, 104, 52, -65, 79, -70, -121, 52, -80, -48, 4, 42, 57, -85, 125, 70, 52, 43, -98, -79, -87, -6, -7, -49, 70, 38, 46, 17, -123, -122, -62, 77, -3, -72, -6, -120, -120, 77, 108, 6, 23, -42, -93, -32, -36, -34, 35, -90, -5, -102, 113, 95, 10, -119, 90, -101, 91, 40, 58, 24, -122, -27, -93, 103, -58, -8, -51, -70, 98};
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
    msg.setTimeStamp(0.3539736168769928);
    msg.setSource(58561U);
    msg.setSourceEntity(150U);
    msg.setDestination(55512U);
    msg.setDestinationEntity(76U);
    msg.frameid = 232U;
    const char tmp_msg_0[] = {58, -35, 79, -9, 28, 64, 39, -101, -93, -79, -44, -106, -7, -14, -128, -120, 68, 57, 42, -56, -78, 39, 63, 39, 78, -115, -121, -54, -123, 4, -57, -69, -104, -72, 122, -79, 22, 31, -40, -84, 24, -5, -22, -26, -122, -85, 101, -1, 40, -21, 2, -109, -35, -5, -112, 46, -53, -49, 40, 19, -82, 51, -109, -46, -64, -123, -4, -73, 121, 25, 110, 67, 111, 17, 110, -82, -55, 15, -100, -96, 25, -85, -111, -71, -3, 53, -12, -15, -122, 82, -90, -128, 21, 76, -43, 2, 67, 95, -125, 116, 116, 17, 75, 64, 66, 61, 82, 45, -83, -5, 2, 91, -9, 12, -84, -17, -35, 88, -102, -81, 105, 75, -73, 80, -44, 10, -92, 75, -17, -8, 20, -16, -4, 81, 19, -19, 98, 101, 124, 2, -61, -128, -128, -86, 62, -13, 119, 64, -5, 65, -5, 20, 69, 13, -105, 124, 75, 64, -126, -34, -22, 19, -56, -109, -105, -37, -84, 64, 48, 28, -96, 119, 66, -13, 91, -99, -46, 67, 7, -68, 19, 2, -14, -44, -74, 44, -121, -116, 33, 58, 29, 2, 91, 10, -105, 68, 120, -67, 112, -37, 36, 1, -28, -108, -74, -123, 72, -4, 33, -84, 13, -55, -15, 103, 83, -41, -17, -113, -120, 101, 30, -69, -1, 119, 73, -6, 3, -69, 105, 120, -36, -82, 90, -72, 50, -43, -117, -63, 44, -88, 5, 125};
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
    msg.setTimeStamp(0.34956829349874974);
    msg.setSource(63972U);
    msg.setSourceEntity(42U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(34U);
    msg.fps = 189U;
    msg.quality = 223U;
    msg.reps = 219U;
    msg.tsize = 77U;

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
    msg.setTimeStamp(0.06515267399466229);
    msg.setSource(48047U);
    msg.setSourceEntity(15U);
    msg.setDestination(28564U);
    msg.setDestinationEntity(86U);
    msg.fps = 1U;
    msg.quality = 173U;
    msg.reps = 61U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.8538547707522067);
    msg.setSource(60709U);
    msg.setSourceEntity(178U);
    msg.setDestination(56551U);
    msg.setDestinationEntity(9U);
    msg.fps = 253U;
    msg.quality = 240U;
    msg.reps = 19U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.7960444654551162);
    msg.setSource(45851U);
    msg.setSourceEntity(220U);
    msg.setDestination(52473U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.8913079410637305;
    msg.lon = 0.13017841560588328;
    msg.depth = 96U;
    msg.speed = 0.5923615824540392;
    msg.psi = 0.5477411329105089;

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
    msg.setTimeStamp(0.4806028532028953);
    msg.setSource(3533U);
    msg.setSourceEntity(144U);
    msg.setDestination(64964U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.4083625308079245;
    msg.lon = 0.885835738059971;
    msg.depth = 72U;
    msg.speed = 0.15060506388500638;
    msg.psi = 0.5232169462895172;

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
    msg.setTimeStamp(0.30175482049169233);
    msg.setSource(58414U);
    msg.setSourceEntity(45U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.44413213750580727;
    msg.lon = 0.7767130400876847;
    msg.depth = 129U;
    msg.speed = 0.2671226121714465;
    msg.psi = 0.9994083066629897;

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
    msg.setTimeStamp(0.8664193957076137);
    msg.setSource(4076U);
    msg.setSourceEntity(17U);
    msg.setDestination(59411U);
    msg.setDestinationEntity(184U);
    msg.label.assign("OIFCGYMWQUGLHBTBJLFQMEUWKGXRVWKEMYERBUOVQADZPESCAFFNSPXOTAPSKTCZZMZIPYYOBFDTOTQPUHEMLGXIYPCFDNGVDYWSGIEIATQKXSOSFQOPVWLNRZWUMZRSCUHILBZNLNJVZBLGRJTPGDXDVUAINHGCHDCLVRIMHCYDACQRWTSJKBYLYKDWGOOUP");
    msg.lat = 0.7611070264670007;
    msg.lon = 0.820995138405534;
    msg.z = 0.8933466559190352;
    msg.z_units = 81U;
    msg.cog = 0.07049350172947422;
    msg.sog = 0.8607028162859164;

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
    msg.setTimeStamp(0.7001473191935772);
    msg.setSource(46680U);
    msg.setSourceEntity(68U);
    msg.setDestination(50820U);
    msg.setDestinationEntity(235U);
    msg.label.assign("OETUZJCBVRHSIJOMDQEVZCOBAHLJCDEFFGCUSSDKKBRDQZVNYIWVOWPBINRLGJECSMQWWUQZGLANEMNQRGLPFFYIWYWHEVFKXOCODXZHLAYPDRKVOQGLRIBZOJRQYAKDJVQSTSGUHHFRAIRYTXYCWIEDXBTTMFZUXQQKWUSIJLVAPHNCDLXVXSCWASMZ");
    msg.lat = 0.26921104660696826;
    msg.lon = 0.03827070359125895;
    msg.z = 0.8634235362811679;
    msg.z_units = 158U;
    msg.cog = 0.6869302549788336;
    msg.sog = 0.9637332310556718;

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
    msg.setTimeStamp(0.45135164344986356);
    msg.setSource(5669U);
    msg.setSourceEntity(14U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(93U);
    msg.label.assign("THVGLINMTTDQODBSBURELAZPCWLIBKKVFPFVQHAKSRJHUYYSLTLGUTBXBADNSNAPQMJGRDZUXOKKHKQFZWYDEMRVQHBFSTWELSEBRVBQSIGGVVGOXLOOJBWPCIYJHDQMROFIODOPMN");
    msg.lat = 0.46419513393209766;
    msg.lon = 0.008276826295204098;
    msg.z = 0.8328620858075774;
    msg.z_units = 53U;
    msg.cog = 0.6228449392934621;
    msg.sog = 0.5242701539581468;

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
    msg.setTimeStamp(0.6431877321855113);
    msg.setSource(39506U);
    msg.setSourceEntity(14U);
    msg.setDestination(10590U);
    msg.setDestinationEntity(120U);
    msg.name.assign("HGMOCJLOGMAESXKYMTJLBUHANVTIMODMOREAZWHYIKAFVBSJVZXWTQXYFLWDPMHIGRTCTIDASSGIDQYPWQRGSWSDJVNEXCXKOOKOPUCOJNMTFBUYDERJVLWGBLBFUTEPWDZHXSALEXHQCUNBCZQBKFGOUQTIUZH");
    msg.value.assign("UKODRWYICBXXVJCGSJGKXPDKYVLGEISAAYBCRJFUEIXWSUNG");

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
    msg.setTimeStamp(0.21627587030180495);
    msg.setSource(16916U);
    msg.setSourceEntity(50U);
    msg.setDestination(36159U);
    msg.setDestinationEntity(127U);
    msg.name.assign("RBJITKDOYCAZPONYOFNDWEEGXLMLYUQPQNSDIKSOQFRCMMZMSJVWUTANTCCISPHWIACJYYMHMHRGCLDRPBVAIFGWBDXV");
    msg.value.assign("PYXQXXSSWUOHLORDEFPMBOTVTLICGDJJXXCUEJYYKDJBUHLKGWNYRATMWAFIBTPQ");

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
    msg.setTimeStamp(0.9249099115986648);
    msg.setSource(19201U);
    msg.setSourceEntity(155U);
    msg.setDestination(40578U);
    msg.setDestinationEntity(163U);
    msg.name.assign("AFEJCTYFJINMHROWRKWGPWBEDPMDZJACTLDISQAVUJADBSFHHWPDIJPPHTKETKYTFCOKHQVOPIGIAMBWEGCTSLVGXLQXYJRREOAHGORIGLISZYEPFMPKUBRYVXRGDMMJEFRVGCCFRPVPUIZXBJLMDXOOUJQZYXZEFTNNSUVFAUBTYSEUDZODCGZSBQKFNLKBQZWXNSALSNK");
    msg.value.assign("KLUZJKUWHRMDJCCMROEDJWSNMFSUY");

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
    msg.setTimeStamp(0.8695814187329614);
    msg.setSource(24993U);
    msg.setSourceEntity(57U);
    msg.setDestination(7178U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ODMWOMXJGVDYNTYNXIPSEJMEHTQKYWXHMDIQCARUTUAOFDFYBNMY");

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
    msg.setTimeStamp(0.6853555189208042);
    msg.setSource(36331U);
    msg.setSourceEntity(243U);
    msg.setDestination(63472U);
    msg.setDestinationEntity(179U);
    msg.name.assign("CEHPMFZEMOKORVSAKIQAZUKZCPLPDESGHRWDGQKSNERRZBQHLDSTFTGUUPWRDPOKAYRJOAQTUYZWLQNRUYBFBHYGJUZDMHJXXGRVFNSJBFPKNWXKHGKSCUEDQVXFJRJIJPNONTIOCISFLQEAKVOLQDUMFYNIHPEAMXUSGQOMYNPBTHIIXCNOEMALVXTMZHTPBGXYMIAMWDVLCZCRJCSDNJBVBXYFXZ");

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
    msg.setTimeStamp(0.9036823490306171);
    msg.setSource(30950U);
    msg.setSourceEntity(25U);
    msg.setDestination(24247U);
    msg.setDestinationEntity(59U);
    msg.name.assign("GCPERHVQJACKREAYURWJBJTUAKDHYGUTYYNHQLAMONHETCXLCXYJDWHFOPGJQOPHWTVMJFRJYDOZCOXNWLPR");

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
    msg.setTimeStamp(0.5942576284171244);
    msg.setSource(17291U);
    msg.setSourceEntity(88U);
    msg.setDestination(33231U);
    msg.setDestinationEntity(131U);
    msg.name.assign("PBDOKTMPRMZGMHGERMVNIJZBUXFZXWFTPGRFJVKWUQRQBPHVFEOOSNMPULLBCRMSOFDORFKXTHJMZKBHAPVJYKTYGMSIIWWCSSEIYZCQKRWZLVUQ");
    msg.visibility.assign("RCOUXASNFTQPSLVEAWRBDPUEOKVVTSCZXYXRVCOCEOTHHLBZTROLFQNZOVXAQKKDFPYUZZQCNDIWSSNYDNOJHLPCHUHMULHZMWGTGHMJYKNIJGPMVGVBRRDIBQYLHDDCVBYNDRUPFIMXYFGNJIKJRIGWBBTMPLYXKFEJWWHOAAUTUGPVWRZJLMFDMLEZSEGAANAAKSZEXSXQFBKYZHQQTQKDIWXMOINJRACTLIPSSPFBMWIEFGYEUEWBCU");
    msg.scope.assign("RFPJLLMEWCW");

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
    msg.setTimeStamp(0.9091802660255395);
    msg.setSource(16218U);
    msg.setSourceEntity(86U);
    msg.setDestination(32414U);
    msg.setDestinationEntity(110U);
    msg.name.assign("MAIQXVFZRLQTJTBMNKJXZDHMNZTUSYYMRDOQCBUIDBWVYKWQCDGJUHNAHQZIMCJVCEXTOVNSNLAVKTHHPKPLDZGERYWGRWHUKAUASJEQZKCONMOKLFTEGBLAWNEX");
    msg.visibility.assign("MISFRSEQTIWRZBTQMKGTQGKFXXSLHUINPHHGUHKVDAYSDXGCJMTQFORPGLCZXBZRGUHXKWYATJCARPPJZGNUFDCEJOHEKNDNKJQXUOHSOZPWELYIVYLICUWAUVJWRCJXLOVQSERBQOECMKJNZIDGA");
    msg.scope.assign("ZWOEMRRUHLRBWEFTDPXABADUDMSPPULADPUPSVQLTJCBZVWIEMEONCZ");

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
    msg.setTimeStamp(0.926592020628909);
    msg.setSource(36166U);
    msg.setSourceEntity(117U);
    msg.setDestination(9006U);
    msg.setDestinationEntity(43U);
    msg.name.assign("KMJJMTNGYYDBKXDALYHDVFLQWGSKHWIARBYUAJUPNBYFMWSNVOAZZSNIQWHTMCZGTHYLPCQCHIJPZVOOGLGOEULQLXNYRJJFULVSBCOHIRUNB");
    msg.visibility.assign("XEHMNXFRUPFYFLQZCAIUULDQKDFJCSWIEGSPPEMKBHLVHYDDZTJXRITBZJAMCPVWTVGCGISKCO");
    msg.scope.assign("BYXAYEHLDQHPHSWHLECPOMPJGUKAXVAHWWLYAUFDXHBAIMAFQQFGIZVJEGYPFRKSKFCXMCLVWGZUXGZGIXQNKLSUKZNIJAOMVLPBOFZSPOSEVMTRVEQDFQWRLTHNWETZMUSKFPKTRRCZTDEDNWFBBVTTRJIEXRBVCIPMBYLBTZOMSUEUNQC");

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
    msg.setTimeStamp(0.6338833960779265);
    msg.setSource(41643U);
    msg.setSourceEntity(57U);
    msg.setDestination(27467U);
    msg.setDestinationEntity(132U);
    msg.name.assign("QUNQYUXLMASDGKHZCEPAYTWTDQHXDXGNAUHZTRZQPXKEDLUFBZXBLGQCSRTMCYEWIMVYGBIDVNAIKULFOSOLUUVGKR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GNRCGHMUZLVPGLUHBFKTCMWTZLLEKACBORYENEV");
    tmp_msg_0.value.assign("WHNAVGAHEWYGMUOWYSOSMZMJMSOCFJGYFFKOFMVOXTXVJVOUBCULPHTJODHIMQPYIYQIMZKUPKBSKLHHYOUAWCZQIVZUQEQYKVFWZTNVXGPHAQJEAVMTNFJSPVPBGJBNQTTRPRJCPIZUELKLFMRGCGBMSERIEBCAFAPXLBBQZLYLYKCRWDCJIEFBZD");
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
    msg.setTimeStamp(0.5409824877790704);
    msg.setSource(24843U);
    msg.setSourceEntity(184U);
    msg.setDestination(34064U);
    msg.setDestinationEntity(248U);
    msg.name.assign("DQVMGSNVWRVDCHTMYSXQQAKOKVSKVIAKRAOWYEYUHUERFGNKIEHXCQDIOUNVJEWDVAGRSNYUKGETPSAGGYFXFBNLLNJSZZZPFGMTLBHWGDROTDBQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MAPSJXSNHAWJNRMHNDPDRFCQANRPIVLCHMINUJ");
    tmp_msg_0.value.assign("YNYFVWSONIEJPMBELHMZBZTNKCWVJTTMGXFTVGGFXUEBCNLBBODENHPRIBVNUWSARMTWGHKXKPPZUVWSRXRYEWPWVZSXPMSGUYSTEHODGIADLRDZFZOVJWHDBXREUAUIRCARGOINXXKIHORADSZAUCMLDHEWKOYJTKQMBBHHJAUTXGLOPHLCMIPCDLBPUYWEFYDPSOOQNQQXLJFZNQYGQCKTCAJKIAVYNSYZIMQJJZFQFKCMEQVFGQVTAKRLC");
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
    msg.setTimeStamp(0.9525903853845346);
    msg.setSource(32200U);
    msg.setSourceEntity(116U);
    msg.setDestination(21235U);
    msg.setDestinationEntity(129U);
    msg.name.assign("NWAVUVKGLELQWVGFYDNTKOSZQCDFKCHOUKAFHWLTVJUCSQPPNXBQMELGAMXYYOHAHUNZFZPZHRIFADMEZZLIBQLETGUQITZSCPUVGSXBAYNPBRJZYNKJHDWTFJREMQTSXUXAEYPANWCHKNMQEBHRHOXDRMZDCVLHORKWOKBVFLJVURJLOCQXNDUWGGEITAPXJPICDACSBSKIPGYSREJFMIXM");

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
    msg.setTimeStamp(0.6795650384201353);
    msg.setSource(44395U);
    msg.setSourceEntity(142U);
    msg.setDestination(36239U);
    msg.setDestinationEntity(187U);
    msg.name.assign("TDMQGWTLMFFVHYSQBVQOSTEDECVCJDFSWKWDWNBGOCOXRKIDEGQXUFFKBNRFTZDTVKNMWCZWIRPQSREDYOHTTBEVJUBJCLRXWMKGVQRVNIBWCALIXDUHYOZXEJYCGOCEPNEMNLJMILLSMPHJNOHHKYKPAZZIVWNGMKESHDQUZGZSAXSJOOAOBAQRJ");

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
    msg.setTimeStamp(0.874022613987529);
    msg.setSource(42156U);
    msg.setSourceEntity(193U);
    msg.setDestination(43255U);
    msg.setDestinationEntity(21U);
    msg.name.assign("GLMEXUFBTQCEMDELVHHXEQHFOEFBAKIJWZFTMENHPJVHGNTPZJUYSDOIQVNYULAOEEKFROHTFCLIXUDGIAGYBWRSGBKSRQ");

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
    msg.setTimeStamp(0.5580502586682139);
    msg.setSource(6098U);
    msg.setSourceEntity(136U);
    msg.setDestination(52016U);
    msg.setDestinationEntity(83U);
    msg.name.assign("GUELSUCQGHFOVAIYPFWGGNHZUKHFITDAYDSFYXAOTMSVEXQBGXHXZWAYBFQGNGRSCTJVXNXPTTQTJABLMQGIMGCELYYMLCOT");

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
    msg.setTimeStamp(0.8478037588327728);
    msg.setSource(21790U);
    msg.setSourceEntity(206U);
    msg.setDestination(50338U);
    msg.setDestinationEntity(232U);
    msg.timeout = 2619899321U;

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
    msg.setTimeStamp(0.4433933243353093);
    msg.setSource(62190U);
    msg.setSourceEntity(186U);
    msg.setDestination(6481U);
    msg.setDestinationEntity(133U);
    msg.timeout = 87819326U;

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
    msg.setTimeStamp(0.9674051534008618);
    msg.setSource(53573U);
    msg.setSourceEntity(195U);
    msg.setDestination(43705U);
    msg.setDestinationEntity(39U);
    msg.timeout = 2933719194U;

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
    msg.setTimeStamp(0.3368785395738382);
    msg.setSource(27163U);
    msg.setSourceEntity(205U);
    msg.setDestination(13213U);
    msg.setDestinationEntity(243U);
    msg.sessid = 331291647U;

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
    msg.setTimeStamp(0.5277774506382161);
    msg.setSource(42476U);
    msg.setSourceEntity(191U);
    msg.setDestination(42289U);
    msg.setDestinationEntity(164U);
    msg.sessid = 3432414089U;

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
    msg.setTimeStamp(0.4833110460203005);
    msg.setSource(5243U);
    msg.setSourceEntity(6U);
    msg.setDestination(65209U);
    msg.setDestinationEntity(104U);
    msg.sessid = 3539479047U;

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
    msg.setTimeStamp(0.7723463262099992);
    msg.setSource(59131U);
    msg.setSourceEntity(115U);
    msg.setDestination(62931U);
    msg.setDestinationEntity(36U);
    msg.sessid = 2642243607U;
    msg.messages.assign("BHPOBCCFTIFEGTIXJIMBFHKZURPSDAODLWNVIBXXMUUKNGRLNDLPTSFCDPXBXFAPASJKTCGVZDRONLIAHDWIALEOVNJRJFSAALMQQWMHYHRSKGWKCCWWOUIJUKEPMQLQUHRPVTGUMYBERFTUZVYAWDYYNJVEHZEZZN");

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
    msg.setTimeStamp(0.6722091815689113);
    msg.setSource(33409U);
    msg.setSourceEntity(177U);
    msg.setDestination(54961U);
    msg.setDestinationEntity(231U);
    msg.sessid = 949601558U;
    msg.messages.assign("SVFSBARQRHNLCFLGJSSZJYMYTJTYIM");

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
    msg.setTimeStamp(0.9763677546941769);
    msg.setSource(11369U);
    msg.setSourceEntity(39U);
    msg.setDestination(61979U);
    msg.setDestinationEntity(60U);
    msg.sessid = 1690090922U;
    msg.messages.assign("VGJLIKHPSKXIMTEXNPYAXCAYGFWFQHOMGVGKAFRRAVENODQSENFFXJSISVSWZUECLTZAGAZVDCEHJZGRJECBRUSRKSVAOQCBYLZTRQYANKJUNDLPRXWORMMYQSLLGKZWXCBOWSNHVKWBUQUTXMJFWDISFFZGEIO");

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
    msg.setTimeStamp(0.2809487410282714);
    msg.setSource(64535U);
    msg.setSourceEntity(129U);
    msg.setDestination(26100U);
    msg.setDestinationEntity(50U);
    msg.sessid = 1071477122U;

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
    msg.setTimeStamp(0.6621750863484097);
    msg.setSource(15627U);
    msg.setSourceEntity(178U);
    msg.setDestination(48781U);
    msg.setDestinationEntity(145U);
    msg.sessid = 1068223283U;

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
    msg.setTimeStamp(0.9351007332490183);
    msg.setSource(56838U);
    msg.setSourceEntity(82U);
    msg.setDestination(59594U);
    msg.setDestinationEntity(93U);
    msg.sessid = 3700569671U;

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
    msg.setTimeStamp(0.5560407678240571);
    msg.setSource(14105U);
    msg.setSourceEntity(247U);
    msg.setDestination(43749U);
    msg.setDestinationEntity(37U);
    msg.sessid = 3492108842U;
    msg.status = 218U;

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
    msg.setTimeStamp(0.11062140790072539);
    msg.setSource(53033U);
    msg.setSourceEntity(140U);
    msg.setDestination(23185U);
    msg.setDestinationEntity(63U);
    msg.sessid = 147049229U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.8250249229102541);
    msg.setSource(27272U);
    msg.setSourceEntity(54U);
    msg.setDestination(42087U);
    msg.setDestinationEntity(113U);
    msg.sessid = 630620418U;
    msg.status = 197U;

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
    msg.setTimeStamp(0.754223343866434);
    msg.setSource(52267U);
    msg.setSourceEntity(81U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(96U);
    msg.name.assign("ZAHUOFJJMGTEOJHXCPMOHRHSJVOQPUCWAUSWQJTIBLWJSSOKQUSHAPDSFPYJVOHKYPVXUAYBRKMTEIUYMBUHWLLNFZGLVLTEPGANCVXCMRQIFEBZXYDYNSWRDFCTBPIDAMREDYNNGFBXXHBRQZDOJMRASWQINCFTMUSOCPRGGKYDGNFPLWIKGAKOQKTMTHVKHZZCIXWLBFNFXCDQJWLZPUJBZXNTGDMQOLCRXSNYATLWVKZEEYGZVIVE");

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
    msg.setTimeStamp(0.5430952080704814);
    msg.setSource(55577U);
    msg.setSourceEntity(37U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(3U);
    msg.name.assign("JSBYNGYXJUEGDZREKVFACKXQQWGTNCFJBMXTQOMNREBRWIJHADIDWLMPCCQLUZNKAELKNNESOEPZQPGGBXPOFIRPUVXHHWKEDHHIEYDRJOMFIEIFVDFCXQAJLNKATPROYKABSYVNPWJO");

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
    msg.setTimeStamp(0.9428160593235372);
    msg.setSource(48763U);
    msg.setSourceEntity(121U);
    msg.setDestination(7155U);
    msg.setDestinationEntity(233U);
    msg.name.assign("NGOAWOWZASBJEQNEWIDECVXBAGGAKBOOPJSVWTVEZKFXUKSFEHFYHJCGMCXLPUVIYCNL");

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
    msg.setTimeStamp(0.10402723016396864);
    msg.setSource(63651U);
    msg.setSourceEntity(15U);
    msg.setDestination(44322U);
    msg.setDestinationEntity(202U);
    msg.name.assign("DKTCYNYHDUPWLYQKTJAQFZFGUAECGQIKJYCDMAPWGSWXZBJVQUVFCNFKKAWSLUZAIKLTZZIAULXIOSBALLXGRQEWMHRDVQPUNMULLXHXRFNVOZOQEOXDPSNLPKICWOJINYNRDXHJYQYYFZNHQBRRIKKFNESXWUPBVNU");

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
    msg.setTimeStamp(0.6492613790221035);
    msg.setSource(34549U);
    msg.setSourceEntity(74U);
    msg.setDestination(54203U);
    msg.setDestinationEntity(227U);
    msg.name.assign("SFDPWWMMHN");

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
    msg.setTimeStamp(0.18672481391729412);
    msg.setSource(23188U);
    msg.setSourceEntity(187U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(93U);
    msg.name.assign("HTLJPZXAGFHNBYHEYLZXYQAYKISCBUEVPBTHWUNYIKLLIMZOTSTIGJCARRMFAFSTOISJVAKXKGGTMFEZUZQBHAFZPQVQBUIMDRTYLCJOGLCESN");

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
    msg.setTimeStamp(0.6777310072172049);
    msg.setSource(36904U);
    msg.setSourceEntity(129U);
    msg.setDestination(44740U);
    msg.setDestinationEntity(161U);
    msg.type = 103U;
    msg.error.assign("ZFMHZPLQBTUDTYPXLNATUODDQDEHKQPTWONJPEWIBQGKGRVNJMFYNZXMLIPFFSFCHBRMWIPOGJLMNHWJ");

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
    msg.setTimeStamp(0.25597141626216213);
    msg.setSource(36707U);
    msg.setSourceEntity(3U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(249U);
    msg.type = 112U;
    msg.error.assign("YGMGHHDJSIEFITXRVDX");

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
    msg.setTimeStamp(0.3646700612233227);
    msg.setSource(24108U);
    msg.setSourceEntity(231U);
    msg.setDestination(46226U);
    msg.setDestinationEntity(238U);
    msg.type = 249U;
    msg.error.assign("XRAXIOOQVJTBUKRBXAKAFRPRZFZJTTFQFOSSIOJNYSOFTUNPPISNHCDZKWWPMMLMKIGHWSF");

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
    msg.setTimeStamp(0.29093255070780977);
    msg.setSource(57635U);
    msg.setSourceEntity(155U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(173U);
    msg.seq = 23552U;
    msg.sys_dst.assign("QNOMROEDEEJENMUFAD");
    msg.flags = 42U;
    const char tmp_msg_0[] = {-11, 77, -90, -26, -116, -50, 96, 125, 6, -16, 121, 32, 95, 104, 78, -65, 49, 14, -112, -7, 98, -76, -83, 41, -105, -94, 126, 36, 66, 37, 61, -36, 20, -42, -79, -10, -42, 72, 93, 111, 95, 116, -5, 68, -69, 39, -124, 124, 96, -2, -101, -102, 50, 30, -37, 85, 61, -83, 63, 117, -58, -26, -62, 64, 68, 122, 16, -83, -111, 83, 0, 15, -118, -36, -52, 49, 45, -70, -65, -74, 47, 15, 26, -120, -43, -6, -42, 84, 51, -10, -40, -119, -67, 101, -7, -60, 115, -120, 0, 12, 110, 101, -85, 4, 65, 21, -95, 89, -31, 10, 104, 58, -62, 120, 25};
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
    msg.setTimeStamp(0.029275261342396552);
    msg.setSource(41091U);
    msg.setSourceEntity(226U);
    msg.setDestination(55093U);
    msg.setDestinationEntity(170U);
    msg.seq = 31773U;
    msg.sys_dst.assign("WIKQXVKDEJSXFQQLXTUHFTWESRPWPZMQJTANQVJBMRDRRFYNUUVBQLYXLWBCAIHILEMZLUOOUJJYCZNRAWUHUTGCKDQLPBFCPTPEDGGYIJODSAANNBGCHEQRDYRHNMKHQGWKLEYTWSNNBZZCSXINYKNZUEEVTIWAZXPBZJPYDOAHREBPCBOOGIFVVGFIVVPDAZSGOKHWFEKXSHGVPFMXQHOALJMOLSFCXFWCMURDGL");
    msg.flags = 196U;
    const char tmp_msg_0[] = {34, 56, 104, 88, -23, 82, 104, -65, 53, 124, 106, 67, -107, 119, 54, 54, 0, 105, -120, -34, -77, 101, 74, -80, 18, -116, -3, -121, -82, 68, 44, 102, -79, -113, 123, 93, -34, -47, -72, 55, 62, -67, 93, -1, -99, 90, 10, -16, 77, -127, 49, -58, -7, -54, -22, -41, 57, 46, 90, -84, 100, 98, 112, -70, 55, -125, 103, 56, -28, 22, 63, -108, 92, -73, -69, 10, -93, 64, 120, 27, 53, -115, -63, -115, 116, -120, 61, 70, -100, 80, 100, -117, -78, -99, -77, 83, -96, 58, 33, -33, -120, 104, -64, -4, -16, -128, 83, -89, 114, 108, -16, 9, -21, 12, 89, -127, -22, -101, -82, 27, -5, 88, 95, -45, 116, 83, 17, -46, 62, 47, -120, 118, 57, 46, 87, -44, 69, -2, 88, 1, -111, 62, -18, 48, -1, -78, -51, -27, -65, 43, -3, -116, 75, -55, 89, -50, -117, 59, -110, -62, -58, 12, -6, 103, 6, 64, 43, -80, 20, 21, 61, -127, -48, 85, -124, -48, -72, 66, 73, 9, -127, -78, -48, -62, 126, 58, -33, -52, -50, 104, 49, -67, -59, 80, 124, -9, -44, 51, 69, 71};
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
    msg.setTimeStamp(0.20543863044454524);
    msg.setSource(50096U);
    msg.setSourceEntity(141U);
    msg.setDestination(15912U);
    msg.setDestinationEntity(224U);
    msg.seq = 47902U;
    msg.sys_dst.assign("OVPNUHSMMIRZVRRJWMGQILATAOXITNQTABUHMDWJOUFLICSVWCYKFHWPBTYYNYREABCOBQNIYDQEENPKEDBDWRGXCRKJHVHCUJKIEULMNSWWIDZIHGLKVIBRCSAEDESGBFPBGXTZPCOSMYGGESWYOVDDLFONLKATAUPRUQQJQCKJBOTPMMXKCSAHRRADLOLPJEUWUXODBXPTNNA");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-41, -21, 67, 48, -125, -120, -81, 91, -19, -125, 47, 106, -66, 8, -34, 99, -50, 14, -110, -82, 24, -72, -81, 15, 108, -107, -37, 92, -26, 74, 24, -59, 76, 25, 123, -86, 40, -96, 58, -34, 82, 60, -1, 123, -106, 35, -16, 119, 5, -13, 123, 5, 14, -1, -112, 78, 21, -52, 24, -79, -64, 4, -22, 51, 24, -86, 71, -127, -3, -52, 42, 51, -62, 56, -57, -52, -67, 81, -33, -16, -77, 57, -108, 25, 46, -97, 61, 41, 42, -31, -128, 1, -120, -122, -64, 124, -97, 109, 25, 32, 47, -116, 16, 60, 75, -27, 83, 61};
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
    msg.setTimeStamp(0.7127056423150169);
    msg.setSource(22936U);
    msg.setSourceEntity(129U);
    msg.setDestination(19172U);
    msg.setDestinationEntity(44U);
    msg.sys_src.assign("QRXMSGADUMCSFYXSFCPUUZICIVCBEZPPCREAEYHRWXJNZWDREEJWMBOZFUTDBZQCONCJOHEMDSIDLTIBVNMNTUMTUUNFLQVFKTDEYGJXGAAIJMZHMIKVEYTPLRXUTJFLJRKWPWZQVOYOOAEVHOPTCLGWPNDANKQLJHKN");
    msg.sys_dst.assign("OGJLAXBMWVSEBXYCTJTNRTFEIFQZTWYDZFFBWBKQEPBAKSYYCOPCUTUOIGVRDWXDBMJBTKKJKOPGVLDMOGESTMZHMYLKZUGZPKBDQIMCTQVXAUWO");
    msg.flags = 241U;
    const char tmp_msg_0[] = {32, 49, 95, 26, 70, -109, -60, -20, 63, -8, -2, -68, -24, -8, 82, 28, -27, 76, 89, -8, -122, 52, -122, 10, 59, -59, -78, -40, -103, 120, -127, -69, -14, -91, 8, -59, -12, 82, -86, 36, -19, 4, -27, 50, -35, -45, -72, -119, -1, -124, 105, -107, 48, -51, 45, 86, 92, 52, -54, -80, -13, -50, -112, -15, 67, -44, 88, 47, 118, 62, 111, 14, 119, -2, 49, -106, -114, -89, -15, -84, 95, 32, -98, 2, 80, 98, -78, -8, -5, -45, 13, -108, -89, 114, -128, 40, 20, 40, -88, -12, -34, 24, 87, -69, -38, 6, 17, -38, 64, -57, 61, 123, 26, 47, 26, 49, -40, 106, 25, 59, 54, 2};
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
    msg.setTimeStamp(0.8038659863110468);
    msg.setSource(29442U);
    msg.setSourceEntity(34U);
    msg.setDestination(10546U);
    msg.setDestinationEntity(39U);
    msg.sys_src.assign("LRVZDUJZIZWYWCEOSYVQRIOJOZJWOJJXSXODJSQFBBRAKBUBIFHPVJHKLDIZUEMSUTXGMBCJNFPAURWYMYGLZAHIBLTWDKGAKHLOHJUSQNZBVTAYVEYYRNPNTISPNKOWSCVNTMFFPDLRCLLDWQGEUQGCPIHHIWQSNM");
    msg.sys_dst.assign("CKHRWFZAZZRKFJJS");
    msg.flags = 29U;
    const char tmp_msg_0[] = {-60, -42, -9, -109, -4, -107, 4, 74, -39, 60, 112, 126, -123, 96, 40, -61, 116, 42, 59, 7, 42, -19, 66, 79, 40, -11};
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
    msg.setTimeStamp(0.01900147562150445);
    msg.setSource(21603U);
    msg.setSourceEntity(180U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(106U);
    msg.sys_src.assign("QFTKENXFWRXMOTWBKOCSTDLIUBYUCVQKPGJAZSBMYLSQXQTJNJ");
    msg.sys_dst.assign("DYNISSVWZUTHJRXUWMUBXIEMRGBWSKAPZKYORABLGZOEAIXIRJJXQKTCZZREGWKYVALNESNKHEARNUTHVDCWFFDZWDWLLJALBBHCUTYDNOQTOPCDHXPMGUVTQSKFYEJQJRGNHBEFGISGN");
    msg.flags = 223U;
    const char tmp_msg_0[] = {-102, -110, -15, 118, -114, -29, -63, 92, 62, 90, 61, -1, -66, 62, 17, -70, 113, -84, 15, 80, -10, -44, -112, -56, 86, -47, -119, -12, -20, -64, 84, 90, 101, -42, 53, -99, 93, 69, 122, 39, 106, 107, 72, -18, -73, -49, 28, -33, 37, -92, -47, -51, -58, 77, -108, 10, -45, 95, -26, -58, -110, 41, -88, 68, -1, 4, 10, -67, 24, -83, -42, -124, 18, -69, 117, -1, 57, -52, 8, 73, 21, -83, 13, -23, 1, 56, -10, -31, -21, 85, 103, 40, -27, -106, -71, 11, -114, -120, 110, -118, 68, 34, -2, 17, 108, -34, 27, -63, -64, 68, 71, 84, -15, 103, 102, 28, -17, -46, 119, 106, 53, -5, -63, 79, 90, 78, -26, 117, -118, 95, 13, -108, -86, -114, -5, -93, 31, -77, -117, -127, -69, -44, 87, 97, 49, -13, 88, 48, 102, -110, 53, -13, 24, 64, -117, -72, 69, 36, -29, -81, -89, -99, 66, 55, 35, 18, -123, 46, 74, 103, 73, 37, -40, 123, -91, -25, -69, -66, -107, -28, -50, 58, -46, 21, -117, -5, 50, -11, -26, 95, 109, 96, 96, -81, -48, 47, -21, 61, 118, -55, 67, -19, -112, -35, -62, -108, -113, 83, -21, 24, -15, -114, -19, -78, -116, -67};
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
    msg.setTimeStamp(0.6790679366251338);
    msg.setSource(24884U);
    msg.setSourceEntity(27U);
    msg.setDestination(45538U);
    msg.setDestinationEntity(73U);
    msg.seq = 24535U;
    msg.value = 183U;
    msg.error.assign("MIGPLNYJTSFBHUODSQRLLBWVWBITMJWLFDNWVVFJXAQRAEOARUTEHAYINDJVCCNPRLAPOMUSJVXCOZCHRGIJACTKXLMVSEWTESBFMYRXDOPWW");

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
    msg.setTimeStamp(0.6625579944355906);
    msg.setSource(15608U);
    msg.setSourceEntity(116U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(77U);
    msg.seq = 16577U;
    msg.value = 252U;
    msg.error.assign("OXVYWXPKICGIMCANNORXMFGFNSZKQPFETCSGNIUUOBXCYWTYLZLKVNTDEAHIPZQXQCRELHCBCTFZODHPLCQREJXOSMUMVGMVJKKBWLYIVYMFHUKRHNQWAIFJKSMAZRTPBXPTBJBHIPYYNVWIDFOHTIDTJWGRJBWRASZHKTSCWKLGOZFZJNXPXZAYYRGQQUATMYHJEEDLSGFIHMPUVDLFABBGMNJSV");

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
    msg.setTimeStamp(0.14135264332458808);
    msg.setSource(39694U);
    msg.setSourceEntity(137U);
    msg.setDestination(52423U);
    msg.setDestinationEntity(148U);
    msg.seq = 1759U;
    msg.value = 15U;
    msg.error.assign("OTXYGDDJKYBDBGGJWNEJUCXPSHWPPBULLOUKOBSHMPLSPXSACDFQNUTDBGKOMLRPJBNVXNEUCEHASEQTAAVXW");

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
    msg.setTimeStamp(0.491861450694964);
    msg.setSource(57526U);
    msg.setSourceEntity(168U);
    msg.setDestination(27983U);
    msg.setDestinationEntity(121U);
    msg.seq = 17098U;
    msg.sys.assign("KNHVOZEXOGRWRFYGADIQDVBYYSGSMPWEQYVGJWPGERGSAKRUMBLXAQLJKQIXBEOITIQHFCANEAITFUFMYJRSGBZNRJMITJUCZJOXPUUKWFODMZSQUKBBPUKHICBHCLZPXQZKEYRCSPQLRNCEKXNUTNDRJGXYLOEMQWFXITPZEOPFZLVIOJTWCWYDXMBVZTJAVDNPAVTSJUMRBDFDUKXHVWPHADHQSNLEOLCD");
    msg.value = 0.3397589595579612;

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
    msg.setTimeStamp(0.058676956642571665);
    msg.setSource(11861U);
    msg.setSourceEntity(187U);
    msg.setDestination(40160U);
    msg.setDestinationEntity(34U);
    msg.seq = 19456U;
    msg.sys.assign("JEIRFYTHMZAFVCGNLTRQLRZONBGQIGAXTVWNUJUQJJHMEKEOCZMMYYLNXNXXRTYOJBCUWNQOWAAISGMEFFJKCKHWLXIDBNRN");
    msg.value = 0.7270957757480935;

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
    msg.setTimeStamp(0.7000603721724813);
    msg.setSource(19032U);
    msg.setSourceEntity(32U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(57U);
    msg.seq = 58400U;
    msg.sys.assign("JHTOYBJAGGPWGVZNCMYVSRHSYRALUCWXVFDHHXEHXGDGYYZIMKMTIXISUAONYFJWAOSDDULCCXRMRNMMTJRF");
    msg.value = 0.6897608228007908;

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
    msg.setTimeStamp(0.897986592313383);
    msg.setSource(39585U);
    msg.setSourceEntity(237U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(84U);
    msg.action = 92U;
    msg.longain = 0.5242029221776676;
    msg.latgain = 0.9957094320906994;
    msg.bondthick = 263761164U;
    msg.leadgain = 0.1317767665604671;
    msg.deconflgain = 0.06728245103019692;

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
    msg.setTimeStamp(0.8045712801738967);
    msg.setSource(55058U);
    msg.setSourceEntity(196U);
    msg.setDestination(33662U);
    msg.setDestinationEntity(52U);
    msg.action = 67U;
    msg.longain = 0.46106086447069927;
    msg.latgain = 0.5950002182850295;
    msg.bondthick = 2922400398U;
    msg.leadgain = 0.18225510084805874;
    msg.deconflgain = 0.8172911942118126;

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
    msg.setTimeStamp(0.13227698161962353);
    msg.setSource(54020U);
    msg.setSourceEntity(189U);
    msg.setDestination(5615U);
    msg.setDestinationEntity(41U);
    msg.action = 4U;
    msg.longain = 0.9009916973009415;
    msg.latgain = 0.08514909411831406;
    msg.bondthick = 1975754669U;
    msg.leadgain = 0.9873383415264294;
    msg.deconflgain = 0.23408064565418574;

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
    msg.setTimeStamp(0.19474101991343618);
    msg.setSource(1517U);
    msg.setSourceEntity(229U);
    msg.setDestination(25256U);
    msg.setDestinationEntity(66U);
    msg.err_mean = 0.30563323726946556;
    msg.dist_min_abs = 0.33947742186421614;
    msg.dist_min_mean = 0.8898426197657122;

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
    msg.setTimeStamp(0.5376863416507766);
    msg.setSource(60107U);
    msg.setSourceEntity(83U);
    msg.setDestination(1139U);
    msg.setDestinationEntity(99U);
    msg.err_mean = 0.3575514720498185;
    msg.dist_min_abs = 0.9224384678860257;
    msg.dist_min_mean = 0.14446831192238596;

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
    msg.setTimeStamp(0.7768733847323559);
    msg.setSource(62422U);
    msg.setSourceEntity(163U);
    msg.setDestination(52288U);
    msg.setDestinationEntity(201U);
    msg.err_mean = 0.9347445112287754;
    msg.dist_min_abs = 0.5280236572179361;
    msg.dist_min_mean = 0.8772988115710455;

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
    msg.setTimeStamp(0.14423074843914274);
    msg.setSource(38039U);
    msg.setSourceEntity(72U);
    msg.setDestination(7154U);
    msg.setDestinationEntity(195U);
    msg.uid = 151U;
    msg.frag_number = 150U;
    msg.num_frags = 206U;
    const char tmp_msg_0[] = {-71, 25, -41, -86, -102, 109, -53, -105, -59, -18, 52, 32, -93, -48, -96, 9, -34, -85, -23, 10, -66, -89, -105, -107, 123, 15, -112, -5, -109, 96, 126, -14, -29, -54, -121, 114, 57, 88, -128, -21, -46, 86, -101, -54, -59, 12, 30, -118, -109, -23, 52, 3, -16, 39, 38, -11, -16, -8, -128, 71, 52, -15, -97, 36, -26, -85, -28, -113, 120, 60, -41, -98, -76, 67, -35, 100, -77, 124, 66, -29, -112, -13, 14, -66, 72, -39, 38, 99, -41, -66, -93, 83, 78, -121, -92, -69, -45, 1, 82, -91, 86, -76, -68, 72, 73, -35, -37, 106, -57, -98, 110, 29, 38, 101, -77, -68, -55, -100, 106, 55, -128, -37, -79, -56, -84, -108, -92, -3, -53, 103, -100, -9, 112, -73, 61, 81, -125, -17, 103, -34, 117, -19, -95, -97, 59, -47, -88, -6, 33, 74, -82, 86, 19, -17, 52, -123, 30, -77, -87};
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
    msg.setTimeStamp(0.05259895449969798);
    msg.setSource(30708U);
    msg.setSourceEntity(122U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(42U);
    msg.uid = 191U;
    msg.frag_number = 167U;
    msg.num_frags = 17U;
    const char tmp_msg_0[] = {-59, 21, -26, 64, -90, -93, -94, 49, 121, -112, -30, -62, -2, 84, -30, -24, -29, -124, -51, -121, -73, -39, 81, -95, 49, -126, 39, 103, -24, 16, -113, 20, -50, -97, 20, 115, 94, -57, -88, -109, 35, 45, 76, -94, 91, -96, 31, -32, -77, 62, -56, 52, 4, 96, 78, 24, -85, 95, -39, -111, 40, -119, -107, -12, 7, 84, 83, 103, -106, -125, 106, -108, -17, -112, 116, -5, -83, 15, -37, 14, -37, 12, 87, 54, -21, -80, -28, 98, -74, 104, 59, 124, -122, 6, -121, 44, 107, 125, 105, -96, 35, -65, 103, 6, 1, -1, 41, -14, -92, 93, 103, -47, 72, -102, -39, 117, -35, 86, 80};
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
    msg.setTimeStamp(0.17589818065429175);
    msg.setSource(65411U);
    msg.setSourceEntity(185U);
    msg.setDestination(52436U);
    msg.setDestinationEntity(228U);
    msg.uid = 211U;
    msg.frag_number = 226U;
    msg.num_frags = 175U;
    const char tmp_msg_0[] = {72, 58, 103, -82, -80, -29, 121, -128, 66, -118, 91, 107};
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
    msg.setTimeStamp(0.5530005333616794);
    msg.setSource(33937U);
    msg.setSourceEntity(82U);
    msg.setDestination(52515U);
    msg.setDestinationEntity(159U);
    msg.content_type.assign("KNOILFBFBWFMBQVNVFQUREENUKBHLETOALNIWIMGZCZOWNFYCKAKSZBPPPAMTMFGUORVTSVJCVLVFXWFVHIXXTANNYYLOBMJDDYGKIGEFKSXQKNAHXCUSIUEVAHBGWPJXBQHZLSWEYSYKCXZVRMPWQPIAJJNPTHSTZSGYCZMGGLCYBRCIYRIJQDDJDWLGMNQPFJUYOZHRVUBZKJTHCTMOIMEEOTQRZXLKUDQADCHRPWJTRDXUOAESPHX");
    const char tmp_msg_0[] = {-79, -52, 118, 32, 24, 39, -81, -37, -116, -6, 54, -77, 84, -36, -68, 107, -115, -33, 62, -15, 45, -100, 106, 21, 30, 122, -22, -36, -42, -53, 3, 57, -86, -86, -24, 25, 85, 75, 69, 96, -49, -117, 22, 18, -97, -61, 97, -83, 125, 30, 120, -36, -68, -43, 52, -83, 42, 80, 66, 3, -10, -79, -112, 51, -12, 38, -67, -11, 10, 111, -25, 117, 26, -2, 48, -116, -43, -63, -58, -46, -79, -6, 26, 124, -33, -56, 106};
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
    msg.setTimeStamp(0.46966323863823034);
    msg.setSource(38561U);
    msg.setSourceEntity(171U);
    msg.setDestination(22062U);
    msg.setDestinationEntity(185U);
    msg.content_type.assign("EOLRMHGQTVIGMEWUNYAKLIRNAQXSFJNGWWTSHWPHYGAQDQDKJLHKZRNFCDSXUZTYSHUTMFWJOTZITPFVJOXJEJDHCZTNOQLMGYVQJRCJLFJPCVNFSRVXUNOLUOFKQREVDMMCVVUBINQIESLGXMFIZPDSNYODMJKPZKZRALGBUVRBPHXAQUSDWEXLAABCYDPIRMOPCCEYAFLIBCXOYWGCXHWTPXHTAZEIMONKKVBHA");
    const char tmp_msg_0[] = {38, 80, -68, -9, -64, 93, -72, -37, -93, -28, 88, -13, -57, 14, -117, 69, 10, 116, 83, 69, -44, -5, 65, 103, 119, 44, -71, -40, -29, 88, 126, -31, -72, 45, 1, -104, 9, 32, -103, 44, -64, 36, -21, 83, 46, -54, 68, -91, 37, -15, 80, 30, 100, -104, 113, 37, -78, 90, 80, -65, -103, 41, 70, 114, -101, 31, -83, -61, -114, 125, -15, 106, 32, 95, 85, -70, 52, -117, 111, -92, 59, 6, 83, 77, 83, 47, 97, -113, -119, -68, 109, 52, 15, -17, 61, 82, 2, -56, -69, -47, -102, 122, 81, 81, 87, 119, 122, 104, -35, -44, -18, 40, -83, 67, -32, -76, 77, 91, -51, 121, 15, -60, 11, -109, 77, 43, 83, 90, -122, 30, 122, 114, -19, 98, -21, -106, 109, 111, -56, 73, 96, 93, 28, 84, 72, -26, -90, -69, 35, 81, 88, -16, -5, -74, -112, -18, -28, -45, -40, -116, 63, -100, -64, -123, 89, -87, 52, -12, -20, -116, 12, 111, -79, -115, 78, 64, -94, -106, -92, 120, -77, -37, 4, -121, 55, -111, -76, 9, -50, -110, 95, 33, -41, -100, -90, 15, -14, 86, -86, -82, 40, -5, 59, -59, -34, 82, 59, -128, 35, -116, 124, 39, -54, 8, 95, 72, -26, -38, 10, 62, 93, -30, 95, 83, 62, 63, -101, -59, -28, -49, -1, 54, 1, -122, 71};
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
    msg.setTimeStamp(0.8989360117985504);
    msg.setSource(28320U);
    msg.setSourceEntity(238U);
    msg.setDestination(43642U);
    msg.setDestinationEntity(187U);
    msg.content_type.assign("UKFGMZWPTHCSUEJYIULRAYNZJKROIMKTAIUDPNQPGQPBCCYEFFLRILHVJSEZNYVEIEQKTTORLTBQZCVBSEDGIGTDJHHXWGLUKHJRFJYYBFBPPUCSYXWWBPWXUKGCMDNYHOQWVFULRSGBZEMQJEDAOATWVNNPXRS");
    const char tmp_msg_0[] = {-79, -36, -83, -66, -72, -25, -33, 96, 59, 53, 64, 73, -15, -13, 22, -35, 21, 91, 75, -8, 109, -3, -7, -3, 37, 77, 40, 107, 52, -98, 40, -4, -35, 91, 44, -87, 119, 112, -61, -39, -118, -63, -61, 84, -120, 68, -120, -4, 1, 105, -110, -110, -59, -2, 101, -64, 56};
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
    msg.setTimeStamp(0.4950718824409207);
    msg.setSource(30862U);
    msg.setSourceEntity(83U);
    msg.setDestination(49119U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.06880101033354746);
    msg.setSource(3056U);
    msg.setSourceEntity(142U);
    msg.setDestination(46137U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.7259303395072677);
    msg.setSource(33030U);
    msg.setSourceEntity(189U);
    msg.setDestination(10103U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.3092950610534938);
    msg.setSource(9803U);
    msg.setSourceEntity(55U);
    msg.setDestination(61336U);
    msg.setDestinationEntity(12U);
    msg.target = 60079U;
    msg.bearing = 0.7153322427087435;
    msg.elevation = 0.04376135631040279;

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
    msg.setTimeStamp(0.4245515171868983);
    msg.setSource(12582U);
    msg.setSourceEntity(226U);
    msg.setDestination(19773U);
    msg.setDestinationEntity(179U);
    msg.target = 15848U;
    msg.bearing = 0.41272460750283546;
    msg.elevation = 0.06813856448401356;

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
    msg.setTimeStamp(0.5561327760595653);
    msg.setSource(45364U);
    msg.setSourceEntity(11U);
    msg.setDestination(18918U);
    msg.setDestinationEntity(117U);
    msg.target = 2058U;
    msg.bearing = 0.7003264117280885;
    msg.elevation = 0.5216373972436998;

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
    msg.setTimeStamp(0.36611750167531476);
    msg.setSource(53783U);
    msg.setSourceEntity(229U);
    msg.setDestination(35369U);
    msg.setDestinationEntity(5U);
    msg.target = 16523U;
    msg.x = 0.40891836274297977;
    msg.y = 0.33323868833465875;
    msg.z = 0.4978970390811399;

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
    msg.setTimeStamp(0.6693405826188706);
    msg.setSource(25021U);
    msg.setSourceEntity(222U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(117U);
    msg.target = 59206U;
    msg.x = 0.4331362684266793;
    msg.y = 0.5021747975473514;
    msg.z = 0.7846145313323101;

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
    msg.setTimeStamp(0.10295732970032412);
    msg.setSource(24100U);
    msg.setSourceEntity(105U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(36U);
    msg.target = 10657U;
    msg.x = 0.3631137522517024;
    msg.y = 0.9085896672935907;
    msg.z = 0.9022130222781263;

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
    msg.setTimeStamp(0.596749783000364);
    msg.setSource(46889U);
    msg.setSourceEntity(0U);
    msg.setDestination(40417U);
    msg.setDestinationEntity(59U);
    msg.target = 42478U;
    msg.lat = 0.616609174122345;
    msg.lon = 0.04811489082033138;
    msg.z_units = 133U;
    msg.z = 0.5305796420941387;

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
    msg.setTimeStamp(0.5922811225974047);
    msg.setSource(56677U);
    msg.setSourceEntity(122U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(39U);
    msg.target = 8255U;
    msg.lat = 0.7299225513938401;
    msg.lon = 0.11230187977415529;
    msg.z_units = 197U;
    msg.z = 0.6615935608794598;

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
    msg.setTimeStamp(0.38854955431257987);
    msg.setSource(11846U);
    msg.setSourceEntity(242U);
    msg.setDestination(22866U);
    msg.setDestinationEntity(18U);
    msg.target = 37398U;
    msg.lat = 0.6877309229525145;
    msg.lon = 0.732059000992056;
    msg.z_units = 46U;
    msg.z = 0.5316447060868867;

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
