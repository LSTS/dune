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
    msg.setTimeStamp(0.02301627031521636);
    msg.setSource(64298U);
    msg.setSourceEntity(195U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(185U);
    msg.state = 139U;
    msg.flags = 30U;
    msg.description.assign("WYFOZAFHLCGHGSVQNPOLFHJADDWTUPCVOTTSCEXOXVJGCVIHAEOLGQOPMZDDBELAUOPEBSKNMYZKCQPXHBXTIUBQSKPMJBREVMUPVZEIWYGUKKNJHPIAAXKXULSQYZMQHFSFLTAFAPSUZMJNBTWEGONWCDBDQUUFPNKAXFYCJXZYNZUYCRTHWITZRRVMSNFSEVWDWXWRINACCZRY");

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
    msg.setTimeStamp(0.41511422859600156);
    msg.setSource(57865U);
    msg.setSourceEntity(28U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(160U);
    msg.state = 223U;
    msg.flags = 36U;
    msg.description.assign("HXOIROQZBDQMSRDFVEWKEIKOPAVUYLDXGLSJPJCFPUNPSGIDAFMHCLKQKTMDHXCDQUJPUONDGVLGCZBWUDWFLUFQLYKHIHVGPUJGTRHZLYWFLOSQMFXVSOMXRCAYMGHCBVEOTAXSQIRJRTNEAMNBJEINGRVQSWGJAOXOLYSCKWOTWVP");

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
    msg.setTimeStamp(0.4261706725256934);
    msg.setSource(57943U);
    msg.setSourceEntity(100U);
    msg.setDestination(34660U);
    msg.setDestinationEntity(198U);
    msg.state = 178U;
    msg.flags = 250U;
    msg.description.assign("PZJAEFCPNFQEXGUPNLSVOETSDFIBLDFDVUVWKWKTSUHLLJFJQRLMKHQCYDJOIXQPYWYWPZAUTXNQMYJDJIZTZWGAEDIVLWAQQSEGTOGYMUAIBVIOUXMWQSXGGXHFBVKZCSKFVVURCGSPWSKEGMRKIZAQIHYYMBLALOFENDRLXVNNNPBTATGYJMPCMHBTAORJQCVRTBMNUFXKAFPOSEHZUHXRZSIECWNCJOPDZWI");

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
    msg.setTimeStamp(0.39907068005139235);
    msg.setSource(45357U);
    msg.setSourceEntity(50U);
    msg.setDestination(43686U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.4364375312703993);
    msg.setSource(24869U);
    msg.setSourceEntity(107U);
    msg.setDestination(21567U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.834503591534537);
    msg.setSource(4533U);
    msg.setSourceEntity(193U);
    msg.setDestination(34271U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.5480933826814138);
    msg.setSource(44423U);
    msg.setSourceEntity(87U);
    msg.setDestination(21583U);
    msg.setDestinationEntity(17U);
    msg.id = 250U;
    msg.label.assign("KLBIHHDKNBSUNUMCGDJWBSVDMVITLRVEO");
    msg.component.assign("IOQFFUSPJCUXZOLRYZOSZWCYDJGEVUWDSWABJWJQTMTCUKDVAEXAGGVAABGXBNOYHKLIWISBJMOIVQMNOGDIFABQRPRWKXQNCGIGUAPSSTRIELJMWOFFODPPFDLSZDLCRFWQVAAEPCVLLBRCTOUOCKGRGRPJCTLVXMYZLESNIWMURKCEHQ");
    msg.act_time = 2790U;
    msg.deact_time = 16136U;

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
    msg.setTimeStamp(0.2908419158012059);
    msg.setSource(11387U);
    msg.setSourceEntity(111U);
    msg.setDestination(26483U);
    msg.setDestinationEntity(193U);
    msg.id = 182U;
    msg.label.assign("SXMDUCPCPRJSAXOULAMCRVTGROPYXNBLWVORSDTUNKSYJKMNRQRJOCIBGTPKJZYMEFILIQCDTJXSCYGAUHBKZDEAKHFGEWHONXMMFHGNESZQFNRUUIZDJCKZJQDKKWFMP");
    msg.component.assign("KVBLCKXICZLEFURRERBOLDBZXSNXRBRFAINBVMQFGDCARQOVKDPCYWBYGFJHXPXUYEJBIGAQEMWECLIGBODZMJHGMHSUYMBJILZYWLAGRDONVFATWEWNQSSZAGNYPHBPMKVYISWXWVYLJNDIHWVPUCJWOHNFHYFYUSHESJHKIPRTUPCOCFFQVTTFMKDMONKTZNGTHNXVUDTSZKIE");
    msg.act_time = 39070U;
    msg.deact_time = 29068U;

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
    msg.setTimeStamp(0.5772253963589637);
    msg.setSource(625U);
    msg.setSourceEntity(55U);
    msg.setDestination(22082U);
    msg.setDestinationEntity(100U);
    msg.id = 4U;
    msg.label.assign("OFTUIOQOVUCIXTCNSZBTEOAWYVEFKLBSYONWOOCWHPPGTCIUSKQMCYNNQSJSBBRCTACJYZOJQLYHKIEQDHZMWHMPCLWEAPBVQLVZRJOHFYYHAZVIJGMNADJPLMEMRSHDIDPFMLTGWXHUH");
    msg.component.assign("EFYFXBDDFYNVVETVYHKDSAHTLKNCZZMERKUXOOEOGYZTAQXIQWRTUWLUNADBCITBONJVEOOMVETBKBRJRPONUCSYQMESNMGCJEPIVGBMGFSNZZJPYZWVBEMPLUQGFDMLHJPPUATCTMRKDBGWJBVIHQCILZSTWFFQJRLRAVOGPYOYLXXHXMCSZWFIMTIXSPHFDIKNLBGH");
    msg.act_time = 14366U;
    msg.deact_time = 26056U;

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
    msg.setTimeStamp(0.32201997220089884);
    msg.setSource(44629U);
    msg.setSourceEntity(179U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(205U);
    msg.id = 185U;

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
    msg.setTimeStamp(0.01055100648073648);
    msg.setSource(2095U);
    msg.setSourceEntity(251U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(226U);
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
    msg.setTimeStamp(0.7811009922218751);
    msg.setSource(6303U);
    msg.setSourceEntity(222U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(34U);
    msg.id = 70U;

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
    msg.setTimeStamp(0.2383233846406687);
    msg.setSource(1195U);
    msg.setSourceEntity(40U);
    msg.setDestination(26707U);
    msg.setDestinationEntity(153U);
    msg.op = 186U;
    msg.list.assign("SFSHMKEZNTQLWTZTJVXPGGXUQCBRWXERHCERXPLBNSTWVJLDWHSVLANUNEYDYPLDVEMZUNTYOJDEOYSIKRZOHBCDGKOJCINPQQTBGOXMI");

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
    msg.setTimeStamp(0.14547401044512998);
    msg.setSource(9391U);
    msg.setSourceEntity(207U);
    msg.setDestination(9115U);
    msg.setDestinationEntity(67U);
    msg.op = 207U;
    msg.list.assign("OIFLIJTATSCSPSGYTJADEDKHIMRUBRDZNLMEYAXDNWPGSBCECSQBXEVCZOWJLZRGWVXEGBHFZRVAOQAXAWMQTUJEABOQFQYOGKFZQFTUPIQUUQVNAJEWVHBMMHVSLTWGNMQKYFWHCMAHYTMSYBGEFZSZUQNRPKRLRHSHPNHKBMDVGOIPTSOL");

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
    msg.setTimeStamp(0.9443251532556423);
    msg.setSource(47682U);
    msg.setSourceEntity(77U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(218U);
    msg.op = 64U;
    msg.list.assign("LIQJGCQJIJSYPWGIYLAYKLXSQWASTONWSPUTPMXMNGUUAMTURGDGSMPLHMPBRHICVOQZEYLELVTRTBBHYFQXTQNWDSZBDEXVXFKFLDFYRNZCRKEOINSMYZZBMZWCDNMMRNEQHSKKXVICCPRZVMGZBVUDWWKYVUKLHAFEGFNOTHOKPEJJDJTDFDAOCWFLBBIURHQPLOJSAWJBUCUVOQCKAVOEAUEER");

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
    msg.setTimeStamp(0.22168628621370612);
    msg.setSource(18949U);
    msg.setSourceEntity(106U);
    msg.setDestination(35594U);
    msg.setDestinationEntity(140U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.6874198236655483);
    msg.setSource(46587U);
    msg.setSourceEntity(105U);
    msg.setDestination(6943U);
    msg.setDestinationEntity(203U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.808614892379532);
    msg.setSource(17148U);
    msg.setSourceEntity(61U);
    msg.setDestination(8187U);
    msg.setDestinationEntity(226U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.9214293624937443);
    msg.setSource(22989U);
    msg.setSourceEntity(122U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(173U);
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
    msg.setTimeStamp(0.04435677208664901);
    msg.setSource(17801U);
    msg.setSourceEntity(182U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(113U);
    msg.value = 221U;

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
    msg.setTimeStamp(0.06894509885948441);
    msg.setSource(14430U);
    msg.setSourceEntity(18U);
    msg.setDestination(51038U);
    msg.setDestinationEntity(207U);
    msg.value = 1U;

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
    msg.setTimeStamp(0.7253649258217186);
    msg.setSource(19763U);
    msg.setSourceEntity(181U);
    msg.setDestination(19164U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("BKIZODEPUJOQVBQUKJ");
    msg.message_id = 56870U;

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
    msg.setTimeStamp(0.33342004485577736);
    msg.setSource(31808U);
    msg.setSourceEntity(132U);
    msg.setDestination(19413U);
    msg.setDestinationEntity(48U);
    msg.consumer.assign("DQMZLPNODMVUODRWCYBWQUPFUIQILRDJDXWGGJXZUXTOPOXYAPHDCZMOIFSAVNBMPNHQUEGKIPRYVUDYYZPEMFQZZCSTJNKJ");
    msg.message_id = 19262U;

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
    msg.setTimeStamp(0.7882713037204171);
    msg.setSource(9050U);
    msg.setSourceEntity(62U);
    msg.setDestination(62314U);
    msg.setDestinationEntity(25U);
    msg.consumer.assign("ICRTQNSVRYYRCIAVTOBZBZGE");
    msg.message_id = 10033U;

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
    msg.setTimeStamp(0.690754959028442);
    msg.setSource(65231U);
    msg.setSourceEntity(7U);
    msg.setDestination(19294U);
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
    msg.setTimeStamp(0.8028373934492168);
    msg.setSource(23904U);
    msg.setSourceEntity(149U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.6342145908964046);
    msg.setSource(33933U);
    msg.setSourceEntity(6U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.06653680417416252);
    msg.setSource(9849U);
    msg.setSourceEntity(24U);
    msg.setDestination(54693U);
    msg.setDestinationEntity(8U);
    msg.section.assign("KIHZJGYQVRMWDKRBL");
    msg.param.assign("CEGNDCYGZXCJAGIAKKLWLHYXRUYVDKHSRKQYCOTIJZGOPZVRUXXZJPDCBAYTQVITFKLLBIKDMTMTHM");
    msg.value.assign("DZJSGQABAFVVQXWHDYEXHXOCYDUIEUZAFYAMMPJJHQMGIPCBHQBJXTGJXBOEGPRECXGCWTRNHZREGKVNIRAQIQKWIFXKLKKJUMGEPWQLZIUTOOSNAKACNCDVSMNZUKXZLONMI");

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
    msg.setTimeStamp(0.013101303136012876);
    msg.setSource(26797U);
    msg.setSourceEntity(104U);
    msg.setDestination(3088U);
    msg.setDestinationEntity(253U);
    msg.section.assign("OJPUBZMTENFDYFZQCZUVBSWSOHCOHMOJMYGOUJVXMAMKBXIQWLBAHTFIMRWZWEHCQ");
    msg.param.assign("PRUWRNMTDIBDBLKBWETKGRNNYQAGIKQNM");
    msg.value.assign("OCRJQKQSAOHKJNXFDJGFOBLNRLWWIRIRXKDHDCKCVLUWHCFSZBFFWPGBBAHVLAANBMOVKOJBMULHTCIEJTGTAXDFKDCCKHCMMUDXASSUMZJZKRRFOQDNYNEMTIEESHAWRMBPTUPNUBFE");

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
    msg.setTimeStamp(0.4680813238644246);
    msg.setSource(18079U);
    msg.setSourceEntity(18U);
    msg.setDestination(1319U);
    msg.setDestinationEntity(228U);
    msg.section.assign("IHWDYQSVLEPVOISAAVRMEUYJTUORXKBMQHZBGCASCGUDRSXKCVQHYKQCMTNXFHFFMQQOOPGLBGDIJDOJNILLDNJRCYGXGSBTABRAJKLJLIVXBESOAGOMGMCHPZXYW");
    msg.param.assign("UUVUJOHYPN");
    msg.value.assign("XLATVCKTIUSUPCPJYVHJAYJPCVIFIDELFPPHHCWULISZZBFGBGZZFQEQGFLLJOBVNMSODYYUWNRQMLONZDGAELRZHUJDHQRAMYURKNBNMMLWMIEJKQVKCSJQQGEGTORITMQACWNUOZXYNORWJXVKQAAXFYYFWLTZJNDFDAVTAUGIYSBSIWPSOXVTXCLBHTXRMXGPAKDCKPVFGNHWGECSZMETRMUKBSUPHPDWQSOYTEZVWDIXOEORKBH");

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
    msg.setTimeStamp(0.22106115559581274);
    msg.setSource(47509U);
    msg.setSourceEntity(244U);
    msg.setDestination(51005U);
    msg.setDestinationEntity(221U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.3398720935695432);
    msg.setSource(18612U);
    msg.setSourceEntity(243U);
    msg.setDestination(29378U);
    msg.setDestinationEntity(36U);
    msg.op = 29U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("JNZIVKXFPODWX");
    tmp_msg_0.param.assign("SVZUNXXCWUFDAUQVEIIFGHQQJZBLYODYHJHSGHOCGXKMHZNIBZAPYXEQVQJSYVCBGZKVQFKRDZNEUYQTIKOHMUAASWPLFMICTMNRKWQLQRRHEGDUBNMRCTGAOXOCEWWYWDLFOXMMNIVRBSMSCTQVLRAUJXPOIFJUBARWIIYMAUJOYRADWHPWUGBNPKEDN");
    tmp_msg_0.value.assign("FNGJEQZFJUNCHEEAMVWJTSVTPQWCGRADRQXCMHXJAYMDKYLHVTAWFRMSUOSDMFVKVSBHSVNNSQIKKNPXPMYUCH");
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
    msg.setTimeStamp(0.79665527123495);
    msg.setSource(14843U);
    msg.setSourceEntity(61U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(115U);
    msg.op = 29U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("GHXRLDTTOLNXYWUSJVAOXBNFCWXHIMTPPKOJSBIHBWFUPMVXTQJNHHQNDJVNMBWPHCYQPWDLNGGAUYDJOZIUNILGYPMNUZDPRIOYKZLGFFRVONVRIWDSDZVIQYDHOEHW");
    tmp_msg_0.param.assign("LTDSHVQLOUINNBVMHXCVRITWJXZFAMRFZUTHJVKDKUDSQSYHBCDKNBBUFKALVUGCCNZJHSVBYNRYFCTRIHZWQAYLKIXNEEQUXEWN");
    tmp_msg_0.value.assign("YOTWDHYHANPTPCQZITHAB");
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
    msg.setTimeStamp(0.803158360363453);
    msg.setSource(55076U);
    msg.setSourceEntity(226U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(56U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.6543794396498553);
    msg.setSource(37348U);
    msg.setSourceEntity(159U);
    msg.setDestination(36938U);
    msg.setDestinationEntity(48U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.6707991965465776);
    msg.setSource(43669U);
    msg.setSourceEntity(56U);
    msg.setDestination(60308U);
    msg.setDestinationEntity(11U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.48061503220550994);
    msg.setSource(3405U);
    msg.setSourceEntity(24U);
    msg.setDestination(56875U);
    msg.setDestinationEntity(146U);
    msg.total_steps = 140U;
    msg.step_number = 230U;
    msg.step.assign("RRQDOZPWATAR");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.9010628479645197);
    msg.setSource(6781U);
    msg.setSourceEntity(221U);
    msg.setDestination(5283U);
    msg.setDestinationEntity(176U);
    msg.total_steps = 84U;
    msg.step_number = 156U;
    msg.step.assign("BOVBJWSWEVCHXIPBMMRHCYAJIRHVWTELEKNNGHWLOOIDTSXTLHHTZVNTLYSGSJXQRMTDNPCZAOMQGEFFSYLHJZXBPDSVMCKZKBJYQMNJGFTAYRDJFNQZZFQTQKWUKUAMSPAUEUICAYOXXDNZLOWPHIDEKGVCLRV");
    msg.flags = 219U;

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
    msg.setTimeStamp(0.13669502030820935);
    msg.setSource(10450U);
    msg.setSourceEntity(49U);
    msg.setDestination(18754U);
    msg.setDestinationEntity(194U);
    msg.total_steps = 201U;
    msg.step_number = 78U;
    msg.step.assign("PQDDMJEPZCDFGCWLXWNRLFIIQGKQLAJIXGUNKJTVYOILIVNDCXSVHMOAJAXPBFZXTXVYOULLCRROKPBSNCEDYCBFITLCAKDMBYWHSCFDTGXZEYQBWXRUUMTGUPMDMSEVKENZWBBZUNIGPJMHGDTQANAMIHIIVT");
    msg.flags = 113U;

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
    msg.setTimeStamp(0.9014087751384261);
    msg.setSource(29268U);
    msg.setSourceEntity(110U);
    msg.setDestination(64136U);
    msg.setDestinationEntity(221U);
    msg.state = 61U;
    msg.error.assign("LXBRAQLUJIUMKZFBFLNXAHMZGSWDYNCAGDWVVOPCWVOMMTMAWGVOPUSLSWQAIUJJHEWAZVCHDNTRETFRSDVYIEVMXERJKMTSHBZIHYEDBLWFYWJVJSBPOXIHBZRSHMFIRRNGCGTEQNTWUDFJYJFYQQLQPOKJGAUESNPIQQABOJCEXICVFXZQCGDDURKLDPKMCKLIZOOAQPHKSBSPYBKVUOTCMFYFETNBAGGPH");

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
    msg.setTimeStamp(0.5887467625678275);
    msg.setSource(62678U);
    msg.setSourceEntity(35U);
    msg.setDestination(19049U);
    msg.setDestinationEntity(61U);
    msg.state = 174U;
    msg.error.assign("CPTJKPIUQVVKNDDQVEKJUQSOFQTOAKYAMGMRICWVCKHOMPFZTJAQGHNTYINNRQYJSJBAJHLYLWUOEFUAEGBEDZVNIBMMYYKCTGKELIBHXWDSZQOIXMSUJRTSWYWUHSZICPRWTLAFSDPMZFEGXJXLWUAWUQDSXWHGLOIQRMFHEVZPQXNONJCKPCCRBLHBGTBFCVXXMOSDDELKTXRIIEAPOKZZYAB");

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
    msg.setTimeStamp(0.5653391291976553);
    msg.setSource(15653U);
    msg.setSourceEntity(138U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(219U);
    msg.state = 38U;
    msg.error.assign("TULNCVTVOMOJOFZERJMDUWVNRUGKHWYDDHRYSMRTFGKSXZQDWQNBYPCMJQSESNKHSAUZGJAUVKOZRLEM");

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
    msg.setTimeStamp(0.3514955837499979);
    msg.setSource(46960U);
    msg.setSourceEntity(36U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.7749700323307881;
    msg.lon = 0.0818754837322555;
    msg.height = 0.8966590092785229;
    msg.x = 0.737255531722331;
    msg.y = 0.6538205582963725;
    msg.z = 0.25941027596754296;
    msg.phi = 0.3507482884498879;
    msg.theta = 0.6293835464354943;
    msg.psi = 0.181805433482645;
    msg.u = 0.1509150780344729;
    msg.v = 0.20415089557731858;
    msg.w = 0.026783628241609736;
    msg.p = 0.6525526310625941;
    msg.q = 0.6088911375190544;
    msg.r = 0.27235653865184406;
    msg.svx = 0.5795883335570767;
    msg.svy = 0.0026462285936970087;
    msg.svz = 0.13115011030122414;

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
    msg.setTimeStamp(0.1820573388746174);
    msg.setSource(45898U);
    msg.setSourceEntity(90U);
    msg.setDestination(23335U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.7349079132240404;
    msg.lon = 0.9901173958253443;
    msg.height = 0.8536561203533416;
    msg.x = 0.466922221689537;
    msg.y = 0.8586618576228248;
    msg.z = 0.569681823856555;
    msg.phi = 0.3891587285299638;
    msg.theta = 0.4782709239591416;
    msg.psi = 0.02171127016711094;
    msg.u = 0.8818963753191859;
    msg.v = 0.8311698663304733;
    msg.w = 0.08918842898204826;
    msg.p = 0.050625013338606806;
    msg.q = 0.3918401144524022;
    msg.r = 0.6466931970427046;
    msg.svx = 0.25127939078224093;
    msg.svy = 0.9118040270759312;
    msg.svz = 0.5367258391452477;

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
    msg.setTimeStamp(0.3521260521844176);
    msg.setSource(19262U);
    msg.setSourceEntity(53U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.3134974306666668;
    msg.lon = 0.5942918957665593;
    msg.height = 0.9764564632121033;
    msg.x = 0.2185733742469148;
    msg.y = 0.13734410590691326;
    msg.z = 0.29279031426236657;
    msg.phi = 0.8156780968140855;
    msg.theta = 0.9084211238092149;
    msg.psi = 0.3560091147569777;
    msg.u = 0.5055221448710308;
    msg.v = 0.697110842328391;
    msg.w = 0.7088212817937842;
    msg.p = 0.9239841519363762;
    msg.q = 0.8996947062017585;
    msg.r = 0.5892459623201711;
    msg.svx = 0.0006183242546197176;
    msg.svy = 0.4965578847898884;
    msg.svz = 0.971457679108323;

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
    msg.setTimeStamp(0.9050901247802967);
    msg.setSource(17541U);
    msg.setSourceEntity(171U);
    msg.setDestination(7109U);
    msg.setDestinationEntity(221U);
    msg.op = 197U;
    msg.entities.assign("ACQPRHFEIHZSBSBYTLPLZPDVMAFEZOEKUXAEWDPBJGJCKIGGIYHIEJQUGFBSYCVRYHMGGQINNRTKGYVSYFUITLJAJXDRMDBNDIOZMBDORYMTGDAUVFKKYLCZCRWYTESLQHXNRMHXAGFPAZABCYWHFVVJUHKJ");

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
    msg.setTimeStamp(0.020319072914496306);
    msg.setSource(30894U);
    msg.setSourceEntity(155U);
    msg.setDestination(43899U);
    msg.setDestinationEntity(23U);
    msg.op = 52U;
    msg.entities.assign("HULUKVDSRFHSYTZXEGCHGMKEQWNGMPDUEWQFAQJXQYKMGXFZVZMTABMBEJFGUGYSNFTKHSFRHQNIEIQSNPJYZWKFXOXIKLGBBVDOJHXTQLLXNLWMNZMVPVMSPOCDNYATEIMDEGZIUFIUOUMHRSDUSQDAKQALVPHRKCWOP");

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
    msg.setTimeStamp(0.07201574425189583);
    msg.setSource(30052U);
    msg.setSourceEntity(79U);
    msg.setDestination(53255U);
    msg.setDestinationEntity(29U);
    msg.op = 244U;
    msg.entities.assign("VHFHOJZNMTJIPRXTQWQWOYSMAFIFEUHEPUANRFHFESDUCSVBIKLYAYIMXACUIPWQGZZJMFYRZOSEBCXVTVHGBQABGLBJLIZHTWBMLRLTCDAIXTRGDMBAVNLRVJCVNGQUEAMZPRLKHWEGZEDHQZMCOUSGPPNFJTDOQVTOVIHJMJUXRWFDEYBDUKAGXLQKRACIYNOUDCWNYPXWGKHTYPFEZSSOJGKKBVQOSUKXDXXKYORNNSQJBKF");

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
    msg.setTimeStamp(0.05848439045098419);
    msg.setSource(23061U);
    msg.setSourceEntity(182U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(172U);
    msg.type = 156U;
    msg.speed = 42044U;
    const char tmp_msg_0[] = {38, 68, -122, -52, -53, -101, 67, -89, -103, -49, 97, -111, -10, -34, -24, -94, 73, 1, -120, 111, 64, -26, 113, -54, 108, 115, 31, -7, -13, -31, 31, 18, -38, 20, 60, 50, 15, -32, -45, -24, -14, -82, -16, -76, -113, -87, -62, 10, 57, -123, -15, -119, -112, -127, -38, 105, -18, -120, 10, 108, 75, -68, 61, 72, -83, 36, 92, 68, -58, 104, 89, -99, -117, -52, -68, 101, 119, -49, -13, -25, -128, -117, 58, 4, -19, 117, 40, 24, 9, -57, 65, 90, -104, 21, 114, 80, 44, 13, -68, -72, -102, -92, -21, -76, 38, 107, -21, -93, -72, 97, 108, 99, 19, 102, 103, -117, 59, 124, -47, 49, -127, 126, -102, 73, -45, -13, -27, -103, -81};
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
    msg.setTimeStamp(0.9624331654820334);
    msg.setSource(63079U);
    msg.setSourceEntity(32U);
    msg.setDestination(6760U);
    msg.setDestinationEntity(88U);
    msg.type = 238U;
    msg.speed = 57283U;
    const char tmp_msg_0[] = {-114, 106, 18, -124, -2, 14, -15, 118, 120, 112, -27, -18, -84, 105, -117, -12, 65, 17, -56, 14, -33, -15, -114, 46, 104, -46, 22, 80, 41, 55, 88, 10, -44, -101, -5, 90, 75, -4, 111, 88, 2, 24, 48, -28, -8, 14, -30, 21, 110, 36, -80, 9, -14, -93, 51, 122, 24, 47, -25, 33, 84, -54, 115, -80, -51, -33, 54, 80, -13, 25, -79, 24, 97, 74, 11, -106, -48, 83, 83, -90, 42, 84, -92, 99, 22, 38, -41, 60, -106, -24, 60, -46, -43, -82, 86, -40, -93, 122, 29, 86, 22, 96, -117, 93, 62, 7, -56, -122, -72, -103, -107, 16, 104, 54, -85, 93, -120, -53, -20, 14, -83, -48, 28, 61, 53, 45, -49, -8, -86, 53, -116, 116, -44, -16, 9, -116, 71, 32, 113, -73, -9, 117, -54, 22, -105, -66, 11, 109, 97, -9, -122, 23, 49, -123, -21, 9, -2, 75, -124, -108, -17, 77, -64, 103, 5, -106, -100, -102, 46, -101, 59, 120, -59, -73, 115, -106, -102, 120, -63, -6, 123, -10, -66, -5, 24, 23, -72, -11, -97, -6, -16, -16, -13, 14, 5, 62, 12, -79, -40, -23, 48, 46, 122, -58, -124, 79, -56, 51, 88, -54, -34, -9, 111, 52, 45, -85, 48, 66, -54, -13, 31, -113, 114, -91, -122, 73, -59, -97, -100, -65, 98, 10, -40, 9, -42, -112, -4, -45, -5, -58, -67, -83, 102, -106, -23, 106, 70};
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
    msg.setTimeStamp(0.7279869722977585);
    msg.setSource(36870U);
    msg.setSourceEntity(253U);
    msg.setDestination(27660U);
    msg.setDestinationEntity(73U);
    msg.type = 243U;
    msg.speed = 2723U;
    const char tmp_msg_0[] = {100, 104, -61, -17, 5, -115, 9, -21, 14, 17, -33, -3, 20, 79, -69, -120, -1, 56, -83, 125, -49, -118, -78, 117, -93, 104, 17, 107, 111, -56, 40, -45, 114, -24, -76, -94, -37, -28, -55, 123, -30, -74, 101, 81, 70, 125, 55, 88, -47, 99, 6, 33, 118, 116, -55, 73, 18, 91, 58, -98, 52, 80, -71, 19, 82, 108, -31, 88, 3, -90, 46, -54, -11, -6, 109, -113, -71, -68, -51, 3, 126, 95, -1, 36, -110, -86, -53, -112, -42, -94, 22, 75, -85, 123, -84, 33, -85, 23, 36, 69, -92, 26, -17, -74, 23, 20, 11, 67, -82, 10, 118, 7, -79, -19, -95, -21, -128, -40, -100, -31, 113, -106, -127, -75, 105, 40, 105, -109, 41, -53, -90, 16, -13, 37, -85, 41, -124, 40, -121, 107, 25, 83, -48, -111, -2, -60, -42, 124, 102, -57, 83, 124, -39, 35, -61, 117, 23, -29, 14, 101, -22, -128, 25, 120, -23, 35, -69, 118, -120, -77, 63, 98, 44, 86, -77, 70, -32, -99, 75, -49, 49, -66, 5, 60, 63, -108, 32, -51, -50, 32, -5};
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
    msg.setTimeStamp(0.729264778852771);
    msg.setSource(9900U);
    msg.setSourceEntity(209U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(106U);
    msg.available = 4108666222U;
    msg.value = 90U;

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
    msg.setTimeStamp(0.9550433277277675);
    msg.setSource(60014U);
    msg.setSourceEntity(52U);
    msg.setDestination(6096U);
    msg.setDestinationEntity(247U);
    msg.available = 3287247908U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.2627838077587379);
    msg.setSource(21469U);
    msg.setSourceEntity(33U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(156U);
    msg.available = 2711934960U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.9388962479440656);
    msg.setSource(41802U);
    msg.setSourceEntity(186U);
    msg.setDestination(17092U);
    msg.setDestinationEntity(77U);
    msg.op = 253U;
    msg.snapshot.assign("YGHPIZPNLHCTLFOD");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 84U;
    tmp_msg_0.file.assign("NYIFGLENAENLELSZJMTBRVIKYCXSFSATLWXGPAWBOMWUEYFRSHNSUETWILDXRVUTJPISAXMPZCPPZVUJXEAUGOQRSHXPVQIBBYGBKINBSJRZDGJRCJNCKWCHAIOYYWFHZJLOMGTVXKNMGZUW");
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
    msg.setTimeStamp(0.1762975191156505);
    msg.setSource(18693U);
    msg.setSourceEntity(40U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(10U);
    msg.op = 230U;
    msg.snapshot.assign("RRXZILNBIEOSUUXMAENPWLSXXMTACOTBFHPJEWKZFBJKU");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1723891745U;
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
    msg.setTimeStamp(0.2865501792099544);
    msg.setSource(39607U);
    msg.setSourceEntity(216U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(2U);
    msg.op = 73U;
    msg.snapshot.assign("ZGUEXELUVGQWVOKIFUMTBPSXXJCVSOFLLPRSHHMXQCMHYZDZRNJLTFRDDFSTVNXPOEAHYRZAOISATZTPONIJHRXDKUQABCAWIDSBJTQPKQSOEMWTLYIQKMSCHVBAFNYWKIGDK");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.7357663893493067);
    msg.setSource(41819U);
    msg.setSourceEntity(47U);
    msg.setDestination(12195U);
    msg.setDestinationEntity(89U);
    msg.op = 219U;
    msg.name.assign("FGBQKAPHPC");

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
    msg.setTimeStamp(0.0056406192608498);
    msg.setSource(51099U);
    msg.setSourceEntity(45U);
    msg.setDestination(19232U);
    msg.setDestinationEntity(89U);
    msg.op = 230U;
    msg.name.assign("WOALFJQIFUTMPPAKTGIGGVEXNZMAQPKDLCZTGQVWBEXBCNJLDKCYYZJTWYBQSBPZUOEKJWHVNNHGLXGOCFNRMLFMHRDITVURWPBHMMOIWIORMUYXNBIHEIYQUYSAHN");

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
    msg.setTimeStamp(0.5257679867177754);
    msg.setSource(27581U);
    msg.setSourceEntity(192U);
    msg.setDestination(9856U);
    msg.setDestinationEntity(75U);
    msg.op = 76U;
    msg.name.assign("SDRCKELHABLQJQCRERBHEZBYDZVGFDLAMEYMJJNKFTLCVYXQJATUIPC");

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
    msg.setTimeStamp(0.7866336421233848);
    msg.setSource(41838U);
    msg.setSourceEntity(120U);
    msg.setDestination(45780U);
    msg.setDestinationEntity(47U);
    msg.type = 74U;
    msg.htime = 0.05624402707069265;
    msg.context.assign("PNKARKLTKOFCXHUECZEJJDOCBXWVGIXJAPSGAZTLVWYEFFKAVRUFLNOZBRPNYIZMNOD");
    msg.text.assign("ZXBLKPHRFHYJWKACOJMODWNCVMNNPTOIHIURJXAGYQLRWIDCCOIBXORGNYKUNGXLXVPRJDNXPJSOZHLHDFWLVQIBEEWSECVNWORGRGTAWKTYNFJHGGAAUZUHELXSUPTKMJZDHLXDKWYFISZQQUFGLDPAMFDKBCS");

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
    msg.setTimeStamp(0.24646624984009768);
    msg.setSource(14832U);
    msg.setSourceEntity(189U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(119U);
    msg.type = 138U;
    msg.htime = 0.7780543426143404;
    msg.context.assign("WILPAUHTQOCPHSDZQVNHTZHYGNUAACMWSXUERADFAASQXSOIBSGFOMXJWPHLYFMUCIQMTVARBKTVNUIUKIUXDEKKGLOIHFVEGKNZJOCAYEZLPTWNIXVSNNAFRWFQFGMPGLLZBBIEPYWWA");
    msg.text.assign("OXMCLYEJCLPDILGBWRSMCLYZLCHBXDZBVJFPRGRGLVXUFJINGMJKJSWQZZQCUUJQDEAPOOHONMLUJRFQRTRCXWWYAVJAHHUEXWKBKMTSCNORQDZNTYFOIXRFSPNURKPOSGBWIPYVWYEDBLEVHQVUHGXFVEYWSTGKWMNAKAAHCQQMDDYCXDVBKRTAIYQ");

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
    msg.setTimeStamp(0.6421234848132596);
    msg.setSource(25990U);
    msg.setSourceEntity(45U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(192U);
    msg.type = 92U;
    msg.htime = 0.24360662116710874;
    msg.context.assign("FCETLDHKMSBBPGMRROBFYMCMPHNJIQWDUSIOGWBOUTHBIKCFKMFDUQGCWRHYYKXSAGYFDZINKFVIIXVNAPBYCPMLWXJTGVTERNRNIUYQOTVSUMSYFMLEATSSOYKUPTGEUNVBPPOEEZHAXRAQXQKCUSJIFZOLQDBLHBVZEXAWOLHJVLNONNZEYWVQJDLXTKGMPYCTKIUIJCWSEKCUZWMAZZQHTXHJJGEGFOW");
    msg.text.assign("UBXIOACYFYOBEZWBTLJECRQYCOIKJUMRKZETSVJATFMPKQXNWDFKQGWSTPHCUPMOBTDVXPOGUDSMBLEERFTADZMDAMVIDIWNHQITHZYANOZSSIMEEVQYZUCOCGJGHKUHGPJVJRJIZOVHPCNWSUZLUAXYBDXLWGWRDHAKFLFTGPXUBQYSKHJRHFNLIPQDGYQZELSRDXATKCMXJNLKNNFFCRVIVRGBSQUSBMFA");

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
    msg.setTimeStamp(0.047168206128403334);
    msg.setSource(13486U);
    msg.setSourceEntity(78U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(65U);
    msg.command = 15U;
    msg.htime = 0.5675973407785172;

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
    msg.setTimeStamp(0.16837350123900785);
    msg.setSource(65424U);
    msg.setSourceEntity(166U);
    msg.setDestination(34460U);
    msg.setDestinationEntity(165U);
    msg.command = 235U;
    msg.htime = 0.6906716499107026;

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
    msg.setTimeStamp(0.15153960236830866);
    msg.setSource(52200U);
    msg.setSourceEntity(208U);
    msg.setDestination(37319U);
    msg.setDestinationEntity(250U);
    msg.command = 172U;
    msg.htime = 0.7737804039625351;

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
    msg.setTimeStamp(0.5446905273593959);
    msg.setSource(63635U);
    msg.setSourceEntity(25U);
    msg.setDestination(39860U);
    msg.setDestinationEntity(148U);
    msg.op = 202U;
    msg.file.assign("GSPYHHRVRPWLPDQREWEKQMRHNRFWDXSPKCPHSVJRXCYLSGHFYQKZWYFIPVZMSRXLKUWGITDQUUMIZUYTEBAMVNFJSTKEQOBQRDDKSWZXNHVXXNDOYAAQAXSULTDXEMAPCNCDEZMOAHJWGGZTC");

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
    msg.setTimeStamp(0.5336927529424006);
    msg.setSource(62843U);
    msg.setSourceEntity(167U);
    msg.setDestination(3041U);
    msg.setDestinationEntity(130U);
    msg.op = 221U;
    msg.file.assign("PODMZHXPKJRGHZQTDCVVACOBZRZPBSIJTCUDYMUUANKPAWQJJIRQXIFHARCPKMVSRVEBAJTJBDIIIPSYDTGWYERWIHSFMGTWHEWYMYNNXRZESKKVQBCMFNPOQXHKNWBNLQXQTBXUUBUSKTXAQ");

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
    msg.setTimeStamp(0.22548480258498982);
    msg.setSource(23537U);
    msg.setSourceEntity(30U);
    msg.setDestination(30210U);
    msg.setDestinationEntity(158U);
    msg.op = 33U;
    msg.file.assign("KPEHGRLQDJTHMHMDIK");

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
    msg.setTimeStamp(0.6187444654031946);
    msg.setSource(21935U);
    msg.setSourceEntity(152U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(228U);
    msg.op = 166U;
    msg.clock = 0.9903457815201511;
    msg.tz = -76;

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
    msg.setTimeStamp(0.2922452258979864);
    msg.setSource(48830U);
    msg.setSourceEntity(68U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(42U);
    msg.op = 242U;
    msg.clock = 0.0597689999254738;
    msg.tz = 112;

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
    msg.setTimeStamp(0.8149120592337825);
    msg.setSource(63434U);
    msg.setSourceEntity(49U);
    msg.setDestination(653U);
    msg.setDestinationEntity(107U);
    msg.op = 33U;
    msg.clock = 0.8161639392464405;
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
    msg.setTimeStamp(0.21780533341218433);
    msg.setSource(24551U);
    msg.setSourceEntity(134U);
    msg.setDestination(18866U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.7767410197571271);
    msg.setSource(24686U);
    msg.setSourceEntity(165U);
    msg.setDestination(7729U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.2322444742823796);
    msg.setSource(25929U);
    msg.setSourceEntity(252U);
    msg.setDestination(44393U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.26019868197107265);
    msg.setSource(16733U);
    msg.setSourceEntity(185U);
    msg.setDestination(44795U);
    msg.setDestinationEntity(228U);
    msg.sys_name.assign("ULQPBVKPAKAEDWFPGYINQFEBFVDTWVSZCODNKJDQXBSRA");
    msg.sys_type = 251U;
    msg.owner = 48499U;
    msg.lat = 0.20858743826668413;
    msg.lon = 0.29473377295870695;
    msg.height = 0.6362204204310811;
    msg.services.assign("SJEWUVUARRLIGDMBAYIXQVHGDRFWOEDLFPJSHZJJCT");

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
    msg.setTimeStamp(0.9688703164436022);
    msg.setSource(2252U);
    msg.setSourceEntity(51U);
    msg.setDestination(54474U);
    msg.setDestinationEntity(96U);
    msg.sys_name.assign("DXUDTTQIAJRLGMJBDUZVMIDWQMAPPHTULUCAEPQSIDSFXZIABQCIYMNQKGNSQCQHICSFGZMYATABSLGWXFRBNHQYOXRKVPGOBKEKTRHFFOHGVRIEIFOQ");
    msg.sys_type = 188U;
    msg.owner = 22729U;
    msg.lat = 0.7685498928706596;
    msg.lon = 0.7940461769427892;
    msg.height = 0.8508815393905169;
    msg.services.assign("RHIOJXXYKWUFQRCQCJWMLVCMBCAXWZDGDTRWDHHQUISXEDQYVAUMZOXRMGYSBKLJPFHOUWEYKSYPAQFKARQIJSMBRQFCDEWSUVKPGJJFJFVGLGNABTNLKMPOPCEZV");

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
    msg.setTimeStamp(0.2818340206790009);
    msg.setSource(39619U);
    msg.setSourceEntity(116U);
    msg.setDestination(3309U);
    msg.setDestinationEntity(57U);
    msg.sys_name.assign("IDDAQQGRNWZADKVICRFJSOOZITWWDEWZLMGQVCRWNZUEUOTYXUIJXFXGCRNPEMPZYGQMWGBLJAKGI");
    msg.sys_type = 243U;
    msg.owner = 58128U;
    msg.lat = 0.538067196882637;
    msg.lon = 0.5805191771638085;
    msg.height = 0.7790742165038027;
    msg.services.assign("VILTTQAMRGLSJHRIEYZDEEUCXCTNEBMLPVMYRUCHOFWDEQWBYDODPZSGRUIRGANAZVMJQXKUWTKHIDUGDCCYJSSCYXONHFIBVASMEFVXINIDJMJFX");

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
    msg.setTimeStamp(0.8590649741526125);
    msg.setSource(62228U);
    msg.setSourceEntity(74U);
    msg.setDestination(47172U);
    msg.setDestinationEntity(9U);
    msg.service.assign("JAYWLYLAOSRMTSRDWUCYLFCZIZIHELIFYLYSRJAOQHJGLONRBZWTQPFDXBGFDEHCXVZBMAESUKVDEHNRDPCHFHNKADUMGGVGSJEQWQTZYUVFFOTEXHAURPYNMIDLCMXVBTTJIGPBQIQROZWKEXVFPPOKYHNACCBEUPIH");
    msg.service_type = 193U;

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
    msg.setTimeStamp(0.7838481658642247);
    msg.setSource(28011U);
    msg.setSourceEntity(238U);
    msg.setDestination(29683U);
    msg.setDestinationEntity(72U);
    msg.service.assign("BJPDVESSEMIDMSYFEQRBQZWSKFVGSFXGWJHUUVXBTQPNIOTXFWMSBPZHPDLWTPALSVBHOVBOJAJDGXQHCQUBKMSUEBXWWNDLYHGUFFRWILSLTIJCAAGLAKKFNFKQHXYZBMXNCTOFRNJDYEMWNHGZVUAIVMAQPJCRVORHEDIRCEMYHFXUOZCTTZYUINZACQKKGLTIQCUEYJT");
    msg.service_type = 48U;

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
    msg.setTimeStamp(0.06601048413050226);
    msg.setSource(39362U);
    msg.setSourceEntity(233U);
    msg.setDestination(13658U);
    msg.setDestinationEntity(67U);
    msg.service.assign("RTHZECMRCOJWMUXHCDMHVVDEMPMEGUUQYJXMIFFTFQLWEISVKPRZZWPOKUDJACEQUDSKVIIBDTGLFMLVWCWNXJZEBGKTVLAPYFNXXDIDGOJWFOAXJBMQYXNTAXNQEZNSIHNSUBJJYOEKZOTCNKCPBFQYPQTKRHKQDRQHLWYSVROUNZAPLVKBNUSTGVSEBWRABPIULAWASRZKGFHQZCHYGRAPLICYJ");
    msg.service_type = 150U;

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
    msg.setTimeStamp(0.37725645464838575);
    msg.setSource(32603U);
    msg.setSourceEntity(155U);
    msg.setDestination(34730U);
    msg.setDestinationEntity(166U);
    msg.value = 0.08027261911936745;

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
    msg.setTimeStamp(0.5966208808557104);
    msg.setSource(62299U);
    msg.setSourceEntity(242U);
    msg.setDestination(31823U);
    msg.setDestinationEntity(138U);
    msg.value = 0.12619675267280284;

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
    msg.setTimeStamp(0.9727704135988655);
    msg.setSource(1810U);
    msg.setSourceEntity(5U);
    msg.setDestination(52201U);
    msg.setDestinationEntity(47U);
    msg.value = 0.16082341214663665;

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
    msg.setTimeStamp(0.870043856488677);
    msg.setSource(15840U);
    msg.setSourceEntity(20U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7499441071670699;

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
    msg.setTimeStamp(0.9533760708905228);
    msg.setSource(45451U);
    msg.setSourceEntity(107U);
    msg.setDestination(16937U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9775472479913956;

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
    msg.setTimeStamp(0.306540157570517);
    msg.setSource(29134U);
    msg.setSourceEntity(196U);
    msg.setDestination(10518U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7674612272058883;

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
    msg.setTimeStamp(0.011224627567839818);
    msg.setSource(49486U);
    msg.setSourceEntity(119U);
    msg.setDestination(26180U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8176899284898281;

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
    msg.setTimeStamp(0.27358767157740793);
    msg.setSource(27707U);
    msg.setSourceEntity(114U);
    msg.setDestination(13233U);
    msg.setDestinationEntity(191U);
    msg.value = 0.039700410952479115;

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
    msg.setTimeStamp(0.42123938891375845);
    msg.setSource(42271U);
    msg.setSourceEntity(12U);
    msg.setDestination(34183U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7311313281129086;

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
    msg.setTimeStamp(0.02678665078820075);
    msg.setSource(46972U);
    msg.setSourceEntity(49U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(176U);
    msg.number.assign("WWPUGNOCMMYCYIDYKJOZPHMKXIQRCUUL");
    msg.timeout = 13812U;
    msg.contents.assign("XXKUXMIHAUKFVAYKHOSWPWVDVGWEHMIUPCZQXMCMEYOWTNRSRCIRPHTNWBBZMGNOEQTEASJVLQIZUMRZVJZHVOZPECT");

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
    msg.setTimeStamp(0.9580771430216457);
    msg.setSource(4892U);
    msg.setSourceEntity(45U);
    msg.setDestination(35411U);
    msg.setDestinationEntity(109U);
    msg.number.assign("FCXRCNUTWVPRUJADCZYIZRQMAEFVHETSYGSMMOGIUGWFILZYBOSVCHGFJOGUHPRDYMWSKLPYQNXZXRQKBHFPFDWDJKAVYPASNEAFLBMWDTSMCNKSXTKZBEEZXIOSTBBBWQVLVNYBRGXWOPKPCQDPRQVGUQJFALBTLIAFYUVZKXQIMJJENOSKHEILOIYJHWQXINOHHZ");
    msg.timeout = 47758U;
    msg.contents.assign("QWUTYMXGETLXDUMHJHYUTXCQHUSAYVYVEOPVBWBUJVCYDPGELBSRRZNOPSGKWHOHMMDCYBNUNVPIBFFOQRNKSXTFAIBAWTZIONWCIDHAOQJAIZKKJNDBXKHTRECWHHEZIEXCAOLDJVYGESALLSVFAGBRRDRGDQMYXTIPTFCQUEGGKXOKMCRS");

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
    msg.setTimeStamp(0.34437759040841054);
    msg.setSource(42478U);
    msg.setSourceEntity(177U);
    msg.setDestination(47847U);
    msg.setDestinationEntity(174U);
    msg.number.assign("EYOBALBPSIUQDWWRVCVKCUTHNAUQINOWSMRZNUPJYQJTMVLWTTDOHYHEAPPGXVNWUHDJKXCJEIFNDAGLFRRBVOHUXNFKFKMYLBDRIXSVVAJTCDPOPQAVGFMYKLTHEIAQSDYEQBDDAHZLGAZUJGSHQZWMMOZWMWCFGZFXMTECIZZEYGBFGUSNKBZGRXLJORMTZSURBONTWPCOKRAIIOXLUEDMPKIF");
    msg.timeout = 21554U;
    msg.contents.assign("QKFMFKZKAWENDJAQAUGYGTZTPNMFKKRXQZDHCEMFCUOIYVQDDZSBEVXBTODXJWRYLLEIJWXFBIWGZMWFJBPLWOHDVHPWCTKRME");

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
    msg.setTimeStamp(0.057070748923518266);
    msg.setSource(65480U);
    msg.setSourceEntity(58U);
    msg.setDestination(3140U);
    msg.setDestinationEntity(47U);
    msg.seq = 914774651U;
    msg.destination.assign("RZKPANDSVODIGPWTXPOZGSXSLNQAQMMVSTWSIIXGVOCYRZVBNKETXXZCOJVALUMMEPWYYPBAKCCHUNJEKUBPYTQIUPHBNTWCWKQZMGVEYSXEFFDZRYNUMVWHLFOIRJFCJURYHTXEJDCAZOMSKGECKNFWRFJTXLUTAVIPDRMJAQHERAAJDJJFOEHWWLDOYHDUBGULVEF");
    msg.timeout = 7575U;
    const char tmp_msg_0[] = {-123, -93, 16, 100, -106, -60, -40, -109, 85, -13, 124, -125, 107, 93, 120, -51, -8, 91, -122, -78, -11, 18, 74, 86, 35, -31, 79, -104, -110, 98, 73, -96, -79, 59, -89, 41, -65, -63, -16, -57, -122, -49, -38, -10, -122, 117, -22, 105, 121, 69, 65, -73, -57, 0, -50, 12, 105, 99, -114, -54, 126, -123, 35, 87, 41, -70, 79, 0, 58, -62, 24, 123, -87, -75, 24, -114, -46, -124, 99, -44, 78, -61, -24, 124, 15, -24, -105, -47, -54, 42, -86, -120, -79, -3, 116, 114, -93, -66, 98, 26, 119, 19, 90, 105, 86, -43, 12, 12, 114, 92, -97, 3, 13, 59, -10, 80, 124, 20, -22, 34, 14, 114, -20, -2, -91, -84, -17, -112, -118, 63, -52, 60, -122, 117, -111, 67, 66, -75, 41, 12, -42, -115, -49, 93, -123, 124, -38, 72, -59, 6, -62, 126, -22, -61, -11, -121, -99, -59, -31, 106, 86, -51, -33, 84, 53, 15, 93, -126, -65, -14, -31, -94, -80, 85, 22, -29, 126, -80, -9, 106, -125, -67, 102, -31, -22, -108, 72, -58, 122, 104, 104, -104, -86, -77, 32, 65, -123, -113, -47, 16, 30, -54, 22, 79, 98, 83, -55, 83, -86, 88, 122, -16, -61, 22, 36, 10, -85, -84, 52, -77, 5, 68, -83, 1, -82, 117, -95, 88, 79, 99, -64, 18, -83, 79, -1, -28, 78};
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
    msg.setTimeStamp(0.24949313786240157);
    msg.setSource(52567U);
    msg.setSourceEntity(93U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(251U);
    msg.seq = 3272132233U;
    msg.destination.assign("VDWZEMQHEBKKIFPKNYCFQWOJESIYUAJFQPZFGBOOYACTHOAHBSLOKSCESSHYFSSAMFGTTQTBCOANOFDIPGQRQGFCRJNIBYIUDWRNVPDINNKJOVCXFLTZUXYZXSZWKEBJVXRGLMKTREGRVMLQTYXGJEESWVAGHUOKRMWCICABJMIZTYPZHLUIZNVDHNQBGMAXWXLJRPXUUO");
    msg.timeout = 20635U;
    const char tmp_msg_0[] = {-92, -18, -117, 98, -127, 58, 123, 117, 34, 62, 108, 117, 92, -128, -21, 112, -50, 118, 117, 124, 86, 86, 61, 11, -83, -56, 45};
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
    msg.setTimeStamp(0.2179890245869266);
    msg.setSource(24470U);
    msg.setSourceEntity(35U);
    msg.setDestination(22151U);
    msg.setDestinationEntity(203U);
    msg.seq = 1124544927U;
    msg.destination.assign("SPPAONNWMMZZQDEMJLGIWCLYJOGQLWPLSXJAPYNOHCVQSTYZFPHIGGNVDJUXVDMBMMWVUNVBIYXTALTFKZYKNUKQNOSYCEKRBCYLRIKJVHCIAPZIFBORKZNGQARRUZMAYUWCEORGAITVMXWBSETBGZAURQJPBSOKDOBKSKENJFFEFSHFUTKGCPDQHDTRDOLIXUHHVFWJQS");
    msg.timeout = 24073U;
    const char tmp_msg_0[] = {-1, -60, -86, 43, -7, 6, -92, 126, -64, 63, 17, 31, -125, -47, 36, 28, -60, 2, -74, 121};
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
    msg.setTimeStamp(0.04019544215242399);
    msg.setSource(65114U);
    msg.setSourceEntity(111U);
    msg.setDestination(26233U);
    msg.setDestinationEntity(99U);
    msg.source.assign("QRABNORGKKOKVYWUHESCIVPXJJXCULCPBCUCIKQVFNEGPAAVUXNRJMYGMBDOHEIUDGYHNOQWDBTNWKSBAGZDRASEHMEOZMHCLJXVPSLLJKCQWXFPXDMVTJTHSDZNSERUOJKYGJT");
    const char tmp_msg_0[] = {35, -22, -13, -93, 12, 14, -34, -107, 50, 76, 4, 87, -118, -48, -2, -72, 17, 33, 15, 15, 52, 44, -53, -30, -64, -3, -53, -105, -117, -116, -3, 64, -70, -3, -111, -76, 29, -5, 24, 101, 33, -115, -128, -46, 102, -89, 121, -114, 67, -5, -93, -7, -60, 37, 81, -71, 4, -79, 102, 16, 58, -106, -88, -109, -36, 87, 8, -117, -72, -14, -20, 116, -79, 107, -57, -118, 3, 46, 104, -103, -24, -111, 95, 18, 85, -106, -101, 24, -40, 24, -100, 69, 79, 0, -47, -47, 60, 98, 43, 93, 122, -55, -124, -91, -27, 126, 124, -10, 38, -55, -51, -23, 63, 26, 50, 44, 35, 14, -111, 110, 109, 73, 108, -104, -49, 19, 58, -108, 57, 120, 2, 125, 9, -123, 31, 54, 122, -111, 43, 10, -26, -89, -125, 29, 66, -101, -46, -90, 54, 119, 50, 76, -79, 65, 72, -87, 89, -86, -93, -4, 2, -108, 11, -61, 60, -35, 113, 27, 100, -98, 31, -23, 118, 45, -22, 26, 33, -81, 120, -7, -69, 87, -78, -75, 104, -104, -24, 75, -65, 89, 114, 76, -10, 99, -121, -108, -128, 66, 18, -122, -41, -124, -4, 13, -44, 77, -128, 51, -93, 119, 59, 92, -67, -41, -62, 3};
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
    msg.setTimeStamp(0.053096312242202126);
    msg.setSource(35165U);
    msg.setSourceEntity(5U);
    msg.setDestination(17531U);
    msg.setDestinationEntity(9U);
    msg.source.assign("HGNICKJXRGAQTCUVOZUKXTJRQBHKFDKBQOUPGIDOGGPAAYUUOFNSVGKQLYNPGXCBVPLMXLJEDHFAMZTWZCHSUNEQMFCPLFIQNNDZLBYGZDGBMFEDWTIMKYIANEGUVZPKSIMNFZTWJRZMTWVQSWYHOWJDLQIVUJETAVPMFLDZCXJINKHQARZ");
    const char tmp_msg_0[] = {-104, 98, 2, -111, -8, 30, 23, -102, -89, 68, 106, -18, -97, 59, -32, 118, 121, 60, -15, -105, 126, -122, 105, -108, -108, 30, -79, -101, -113, 86, -100, 112, -73, -85, -58, -70, -111, -94, -53, 25, 15, -66, -39, -112, -42, -62, 116, -111, -91, 66, 47, 15, 8, -11, 28, -18, 118, 24, -4, 113, -66, -62, 102, -98, 1, 102, 107, 5, 11, 37, -83, 62, 0, -37, 70, 101, -7, 101, 118, -39, 68, -15, 67, 114, 116, 50, 14, 4, 82, -90, -70, 31, 34, -70, 11, 82, 11, -61, 33, 17, 117, 93, 87, -50, -108, 56, 69, -70, -65, 67, -128, -127, -86, 16, -124, -61, -49, -43, -86, -49, -123, -42, -73, -116};
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
    msg.setTimeStamp(0.28091753084707527);
    msg.setSource(48631U);
    msg.setSourceEntity(106U);
    msg.setDestination(17212U);
    msg.setDestinationEntity(138U);
    msg.source.assign("JOEWKEMBIPEZJVYRHRHYAWDYAYGJXHXKLXTBHCGIGUAWVZRLPQYXNNSHWDKBLSTIGOCMCLKKZSVHPBEATCRSUTTFWQNDMCYOGMUZCVXZPXPTXIOBCDVDKWRCEOWFSGBHLPJTYVNVIMJNDGBOGDMSUZNHIVCUTDNJXMZGNEFYJOLADQZEBFPSLYE");
    const char tmp_msg_0[] = {-122, 10, -102, 88, -17, -95, 65, -42, 38, 110, -8, -52, -8, 29, 81, -60, -102, 119, -75, -15, 10, -23, -6, 15, 54, -88, -90, 72, 98, -101, 32, 98, 92, 106, 61, 123, -35, -16, 96, -44, 13, -89, 115, 123, 19, 89, 40, 41, 100, -74, 24, -124, 101, 58, -31, 77, 56, -17, 15, -11, -124, 101, 9, -24, 58, 56, -117, 63, 2, 83, 120, -10, 72, 113, -107, 43, -117, -67, -100, 71, 62, 36, 41, 75, -47, -34, -35, -111, 56, 90, -121, 109};
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
    msg.setTimeStamp(0.37338586521452977);
    msg.setSource(47732U);
    msg.setSourceEntity(127U);
    msg.setDestination(36347U);
    msg.setDestinationEntity(233U);
    msg.seq = 474304341U;
    msg.state = 181U;
    msg.error.assign("SFPJLZJHTIXNSUAIQRRZVHGDJXHWKWOQVKIMPWSMABJLONGTCHXUZTLXNIGQMRBARVMQSVKRYDBDPRCVVMOFESGNGOATZYYFEZZBPJOJINUBVCIKSTZGEQAGB");

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
    msg.setTimeStamp(0.916095386963488);
    msg.setSource(21263U);
    msg.setSourceEntity(168U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(12U);
    msg.seq = 2887661097U;
    msg.state = 213U;
    msg.error.assign("HSFPNINHJNCVJTTLUYITPGALJFGHUXGDJRLWAPFBZWWRWXMAENFXXQSBJMBUQSVQJLBRTQHOGMQLATINXYAPYOPMFUSLEGKSDVJTZOTZRCKHUTWIWUKMGGVVRKRACKFXTBWDPPPWDFSEYEYBBPZIJZXNKQOCXFELZXLABDEDCZHVOQKMMCKUKSBSSKVHNARDUZZIIRONSJMQAIVCQTNHLYDVBOQCGLFIYOAHHRE");

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
    msg.setTimeStamp(0.14236674565241947);
    msg.setSource(51926U);
    msg.setSourceEntity(65U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(136U);
    msg.seq = 845593686U;
    msg.state = 184U;
    msg.error.assign("MQHUBMUQXGTNYWZPUVXCOKKKKWEFJHLMWGUGSXMUUWYSSSKNFEGNIKT");

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
    msg.setTimeStamp(0.7855331835767441);
    msg.setSource(33707U);
    msg.setSourceEntity(123U);
    msg.setDestination(45963U);
    msg.setDestinationEntity(128U);
    msg.id = 120U;
    msg.range = 0.5302007784165207;

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
    msg.setTimeStamp(0.9958807785242614);
    msg.setSource(25337U);
    msg.setSourceEntity(2U);
    msg.setDestination(51949U);
    msg.setDestinationEntity(177U);
    msg.id = 250U;
    msg.range = 0.5104969074369448;

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
    msg.setTimeStamp(0.2190560638785859);
    msg.setSource(27219U);
    msg.setSourceEntity(164U);
    msg.setDestination(30714U);
    msg.setDestinationEntity(27U);
    msg.id = 11U;
    msg.range = 0.07962343388018267;

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
    msg.setTimeStamp(0.7270133870129272);
    msg.setSource(45940U);
    msg.setSourceEntity(73U);
    msg.setDestination(9576U);
    msg.setDestinationEntity(58U);
    msg.tx = 202U;
    msg.channel = 200U;
    msg.timer = 55419U;

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
    msg.setTimeStamp(0.2911583316012838);
    msg.setSource(910U);
    msg.setSourceEntity(93U);
    msg.setDestination(38264U);
    msg.setDestinationEntity(185U);
    msg.tx = 1U;
    msg.channel = 224U;
    msg.timer = 54353U;

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
    msg.setTimeStamp(0.3149931407318387);
    msg.setSource(44859U);
    msg.setSourceEntity(112U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(148U);
    msg.tx = 110U;
    msg.channel = 133U;
    msg.timer = 17459U;

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
    msg.setTimeStamp(0.5494606176297758);
    msg.setSource(11267U);
    msg.setSourceEntity(92U);
    msg.setDestination(650U);
    msg.setDestinationEntity(69U);
    msg.beacon.assign("UVRLRJALXIBSNWXPICJZBSAQCADDKZVKZJLFHCQJZWMGDJG");
    msg.lat = 0.94049547759855;
    msg.lon = 0.5459870529990833;
    msg.depth = 0.36899826461336926;
    msg.query_channel = 101U;
    msg.reply_channel = 140U;
    msg.transponder_delay = 234U;

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
    msg.setTimeStamp(0.9427447946761698);
    msg.setSource(2094U);
    msg.setSourceEntity(195U);
    msg.setDestination(39882U);
    msg.setDestinationEntity(107U);
    msg.beacon.assign("JDAPCZFMIBFIGZXDVIIMXKAWRI");
    msg.lat = 0.5477136039952674;
    msg.lon = 0.15026744971513728;
    msg.depth = 0.4614055981012506;
    msg.query_channel = 89U;
    msg.reply_channel = 222U;
    msg.transponder_delay = 48U;

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
    msg.setTimeStamp(0.17214261973534206);
    msg.setSource(51544U);
    msg.setSourceEntity(26U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(229U);
    msg.beacon.assign("OAHBZJLZGCRIYKBALURPTIYGEGEUMNQSDEMSIDQOXVVTUNSDLVOCNZRFUQJJWFKKUIACYLUSAKMTXWPBRPUPPCRFKFLIOSCBGDYZDEGUAIUVBRKHDNMPTVOVWWJXXLKVIPFGGNIRMWWQQRZOLZYUSZEWPGHLEJCYCXDONACWLEVHMLJQYPBRXGITDABTVMTAMHQZXFMCQOKOHSNDECEKHEPDHJZQMBXJBTNGJXYSBYNHWTQ");
    msg.lat = 0.6598298382903687;
    msg.lon = 0.9402466345561143;
    msg.depth = 0.35894706110408214;
    msg.query_channel = 111U;
    msg.reply_channel = 245U;
    msg.transponder_delay = 140U;

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
    msg.setTimeStamp(0.2356813718075791);
    msg.setSource(55361U);
    msg.setSourceEntity(205U);
    msg.setDestination(64652U);
    msg.setDestinationEntity(190U);
    msg.op = 247U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CASHDIKUPTHXQFCUWRQDXEBNUWWSDMWAGMEEHUIYBLWLGDEYZNCPQCYTSJGZRHVUUHCARXEYQUFJVWNGDZTXNOITVTOOBZLR");
    tmp_msg_0.lat = 0.038423210067133895;
    tmp_msg_0.lon = 0.3634891041833267;
    tmp_msg_0.depth = 0.787242010503116;
    tmp_msg_0.query_channel = 164U;
    tmp_msg_0.reply_channel = 166U;
    tmp_msg_0.transponder_delay = 104U;
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
    msg.setTimeStamp(0.9858383406927418);
    msg.setSource(14262U);
    msg.setSourceEntity(29U);
    msg.setDestination(46838U);
    msg.setDestinationEntity(200U);
    msg.op = 27U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HVRSDLTAPPCUI");
    tmp_msg_0.lat = 0.43472959060336025;
    tmp_msg_0.lon = 0.7971324492588792;
    tmp_msg_0.depth = 0.9330977161621122;
    tmp_msg_0.query_channel = 64U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 61U;
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
    msg.setTimeStamp(0.22126802745120666);
    msg.setSource(24037U);
    msg.setSourceEntity(54U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(33U);
    msg.op = 101U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WRBLKNXFFGEALDIAXYTVSVRSJOVTJUEAEBIOBZSI");
    tmp_msg_0.lat = 0.18840159265953504;
    tmp_msg_0.lon = 0.3792129792951291;
    tmp_msg_0.depth = 0.17471069519187;
    tmp_msg_0.query_channel = 15U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 86U;
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
    msg.setTimeStamp(0.5690269774747051);
    msg.setSource(5989U);
    msg.setSourceEntity(124U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(175U);
    msg.address = 124U;

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
    msg.setTimeStamp(0.7821070282001326);
    msg.setSource(21889U);
    msg.setSourceEntity(42U);
    msg.setDestination(21295U);
    msg.setDestinationEntity(29U);
    msg.address = 110U;

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
    msg.setTimeStamp(0.6359797782531516);
    msg.setSource(63999U);
    msg.setSourceEntity(62U);
    msg.setDestination(10565U);
    msg.setDestinationEntity(68U);
    msg.address = 4U;

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
    msg.setTimeStamp(0.8146059990779482);
    msg.setSource(20539U);
    msg.setSourceEntity(177U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(101U);
    msg.address = 203U;
    msg.status = 97U;
    msg.range = 0.3178634950089214;

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
    msg.setTimeStamp(0.9714457053698922);
    msg.setSource(18200U);
    msg.setSourceEntity(78U);
    msg.setDestination(60381U);
    msg.setDestinationEntity(107U);
    msg.address = 156U;
    msg.status = 64U;
    msg.range = 0.2686638371223695;

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
    msg.setTimeStamp(0.9304841016144944);
    msg.setSource(22414U);
    msg.setSourceEntity(113U);
    msg.setDestination(26032U);
    msg.setDestinationEntity(119U);
    msg.address = 170U;
    msg.status = 178U;
    msg.range = 0.7495353576709876;

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
    msg.setTimeStamp(0.6078155428355334);
    msg.setSource(24160U);
    msg.setSourceEntity(17U);
    msg.setDestination(23255U);
    msg.setDestinationEntity(106U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.898582456669388;
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
    msg.setTimeStamp(0.6802566482848834);
    msg.setSource(31527U);
    msg.setSourceEntity(121U);
    msg.setDestination(44215U);
    msg.setDestinationEntity(98U);
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.1458297494917813);
    msg.setSource(25669U);
    msg.setSourceEntity(246U);
    msg.setDestination(42128U);
    msg.setDestinationEntity(111U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.7328005558749991;
    tmp_msg_0.speed = 0.681208014421412;
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
    msg.setTimeStamp(0.724434944074519);
    msg.setSource(24388U);
    msg.setSourceEntity(152U);
    msg.setDestination(14542U);
    msg.setDestinationEntity(68U);
    msg.enable = 64U;

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
    msg.setTimeStamp(0.46554332776998963);
    msg.setSource(2804U);
    msg.setSourceEntity(77U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(19U);
    msg.enable = 84U;

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
    msg.setTimeStamp(0.1927082836835743);
    msg.setSource(34498U);
    msg.setSourceEntity(142U);
    msg.setDestination(46399U);
    msg.setDestinationEntity(111U);
    msg.enable = 49U;

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
    msg.setTimeStamp(0.6601576665866644);
    msg.setSource(37756U);
    msg.setSourceEntity(39U);
    msg.setDestination(45238U);
    msg.setDestinationEntity(207U);
    msg.summary = 135U;
    msg.level = 124U;

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
    msg.setTimeStamp(0.735656489049847);
    msg.setSource(20456U);
    msg.setSourceEntity(18U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(153U);
    msg.summary = 148U;
    msg.level = 169U;

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
    msg.setTimeStamp(0.8252915289220396);
    msg.setSource(52303U);
    msg.setSourceEntity(157U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(16U);
    msg.summary = 120U;
    msg.level = 105U;

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
    msg.setTimeStamp(0.7095754858755763);
    msg.setSource(35809U);
    msg.setSourceEntity(224U);
    msg.setDestination(57807U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.5847145590515047);
    msg.setSource(9745U);
    msg.setSourceEntity(239U);
    msg.setDestination(20533U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.211520015824598);
    msg.setSource(52283U);
    msg.setSourceEntity(198U);
    msg.setDestination(1513U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.0841537757573968);
    msg.setSource(6873U);
    msg.setSourceEntity(113U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.8881308596253449);
    msg.setSource(3299U);
    msg.setSourceEntity(86U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.6338102703651428);
    msg.setSource(9651U);
    msg.setSourceEntity(64U);
    msg.setDestination(44016U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8591977608160111);
    msg.setSource(42226U);
    msg.setSourceEntity(207U);
    msg.setDestination(38699U);
    msg.setDestinationEntity(45U);
    msg.op = 75U;
    msg.system.assign("SGOUEAFMYCTEQOQKZAASXWLRWHIQDVYBRTUVUGOHFCKXD");
    msg.range = 0.37112313145216025;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("AICKPGVNPAWQXGYYIGICGOXUUCDPYLVYZVRYCMOKMJENBTUF");
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
    msg.setTimeStamp(0.17633790780124436);
    msg.setSource(38697U);
    msg.setSourceEntity(195U);
    msg.setDestination(13867U);
    msg.setDestinationEntity(175U);
    msg.op = 88U;
    msg.system.assign("IISNGBVASOLVGUCJXKCERPIQWNSVPITLOVEKMEUNAHVZDPTVYRMFCXWOSNXESJXDUWETKXGNZXUIRNKRLHHAWZHUNIFLYCNSUJPVLGFBVJJBFDQWRAHCAMOSARQRXYYBZQTDBLLEEBGOQPZDTQTZMOYTSOPFVMHSOKPZHIQFDDIFEFAKQAPSCGJNOXPMAMJZTFKHKGUTYGXYJCECEGWYYMNUURBGWAKMMBRCHIIPYWVWWQBJZDCOKZLHDURFXT");
    msg.range = 0.7979326922619252;
    IMC::SonarConfig tmp_msg_0;
    tmp_msg_0.frequency = 2178241422U;
    tmp_msg_0.min_range = 40602U;
    tmp_msg_0.max_range = 35206U;
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
    msg.setTimeStamp(0.3648704184453665);
    msg.setSource(50301U);
    msg.setSourceEntity(95U);
    msg.setDestination(9235U);
    msg.setDestinationEntity(123U);
    msg.op = 222U;
    msg.system.assign("TOESKRSGWTETDPIBBHNJRJMAXRPZGFALNOPXLXTKQRKMWSIDMZTKBJIZJGDEQILGUVYDVVCNZTYDJARMPUBJSUCOLRORGMCEGUGNUJLGJNXWLYQ");
    msg.range = 0.06019818129456411;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 65U;
    tmp_msg_0.request_id = 35434U;
    tmp_msg_0.command = 89U;
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 32494U;
    tmp_tmp_msg_0_0.flags = 221U;
    tmp_tmp_msg_0_0.lat = 0.4060720600332859;
    tmp_tmp_msg_0_0.lon = 0.7870984281488805;
    tmp_tmp_msg_0_0.start_z = 0.7328934418917377;
    tmp_tmp_msg_0_0.start_z_units = 187U;
    tmp_tmp_msg_0_0.end_z = 0.9269111966833729;
    tmp_tmp_msg_0_0.end_z_units = 29U;
    tmp_tmp_msg_0_0.radius = 0.6540613766068503;
    tmp_tmp_msg_0_0.speed = 0.0796778580369446;
    tmp_tmp_msg_0_0.speed_units = 229U;
    tmp_tmp_msg_0_0.custom.assign("RRXTBIMLTDTVNZDFUIKOGLGEETYBCPAKHPZIVZUMYHNBQSPCIFNGAACRSEOMMQRLKIFLWFWWXUTZJCHNVQYTJVTJNEAYOCUZNKPZSELQHPUDGCYYHOQEDAQGTKSSIXUWWNQZFQULROZSJMLJEKHBLEYXBAXWJUDMFC");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 47837U;
    tmp_msg_0.info.assign("RNTTZYTODGXEQQQDAHASBFYVVDMHMPPKUQEVG");
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
    msg.setTimeStamp(0.49579034903595);
    msg.setSource(61721U);
    msg.setSourceEntity(163U);
    msg.setDestination(38380U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.11599452883378403);
    msg.setSource(3453U);
    msg.setSourceEntity(119U);
    msg.setDestination(9628U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.9453916439794762);
    msg.setSource(8042U);
    msg.setSourceEntity(128U);
    msg.setDestination(17494U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.4904540630727614);
    msg.setSource(54222U);
    msg.setSourceEntity(200U);
    msg.setDestination(47125U);
    msg.setDestinationEntity(184U);
    msg.list.assign("DESMVHILYRZKZYQGFDKQTGJFMMROPSISXJMVOFGJEQSCJXYZRHEJNCREJSKCMLKRHZRURGDLNSOFUDTQKBLKGHUURATWVWCNHPKNIIAFDWPLVGBLCIEVTFBFCAIWOMXOXSEPNDWHOIMUSZJYQTTGRBPFXTIBMSHLOOKZSUNQACVEEWCYPBAPLHFZGDWRCFVUWYZUTEVXWCNDNBKJQMPYQVBQY");

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
    msg.setTimeStamp(0.8407527460039061);
    msg.setSource(64697U);
    msg.setSourceEntity(29U);
    msg.setDestination(4876U);
    msg.setDestinationEntity(171U);
    msg.list.assign("EHORTWGYRXGZBMNLFKQEVWOYRZQHOYVAAGDSJIIPCHSKNSXHDICQKZIUJFGAVUNVKDXXJJILLLYIQFOFXKEBDEODDZTWABCYNPYSVZKOEJTUXPPHCVLDATDANFXNIEULJZWYHUQOLUZNAWEISPPVAJWQAVRRGCXMIGUSFGFFTZBGWNNEZTRFJKPDPHKREOSBSBHGGQXTCBZR");

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
    msg.setTimeStamp(0.19359735465502903);
    msg.setSource(24725U);
    msg.setSourceEntity(244U);
    msg.setDestination(4310U);
    msg.setDestinationEntity(179U);
    msg.list.assign("MPEBWAWNWWCJT");

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
    msg.setTimeStamp(0.4598381132453081);
    msg.setSource(11791U);
    msg.setSourceEntity(192U);
    msg.setDestination(30378U);
    msg.setDestinationEntity(17U);
    msg.value = -22039;

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
    msg.setTimeStamp(0.8036893525687839);
    msg.setSource(47722U);
    msg.setSourceEntity(97U);
    msg.setDestination(12711U);
    msg.setDestinationEntity(88U);
    msg.value = 3635;

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
    msg.setTimeStamp(0.6063711793468877);
    msg.setSource(35162U);
    msg.setSourceEntity(252U);
    msg.setDestination(38669U);
    msg.setDestinationEntity(244U);
    msg.value = -11501;

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
    msg.setTimeStamp(0.030518044785290965);
    msg.setSource(11247U);
    msg.setSourceEntity(105U);
    msg.setDestination(13450U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6366154518403472;

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
    msg.setTimeStamp(0.00775984717635303);
    msg.setSource(41147U);
    msg.setSourceEntity(196U);
    msg.setDestination(6408U);
    msg.setDestinationEntity(140U);
    msg.value = 0.7134341295832715;

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
    msg.setTimeStamp(0.6174190629109169);
    msg.setSource(2982U);
    msg.setSourceEntity(230U);
    msg.setDestination(8795U);
    msg.setDestinationEntity(142U);
    msg.value = 0.6741722010068966;

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
    msg.setTimeStamp(0.26446558421107336);
    msg.setSource(53222U);
    msg.setSourceEntity(99U);
    msg.setDestination(24951U);
    msg.setDestinationEntity(249U);
    msg.value = 0.48045490069919283;

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
    msg.setTimeStamp(0.17269719768192904);
    msg.setSource(54359U);
    msg.setSourceEntity(27U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(231U);
    msg.value = 0.14673911597639944;

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
    msg.setTimeStamp(0.0790053813476409);
    msg.setSource(21726U);
    msg.setSourceEntity(221U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(25U);
    msg.value = 0.049112786721149715;

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
    msg.setTimeStamp(0.8726122818419922);
    msg.setSource(420U);
    msg.setSourceEntity(5U);
    msg.setDestination(14077U);
    msg.setDestinationEntity(130U);
    msg.validity = 9821U;
    msg.type = 94U;
    msg.utc_year = 39137U;
    msg.utc_month = 101U;
    msg.utc_day = 116U;
    msg.utc_time = 0.17945693210664648;
    msg.lat = 0.6084404709428394;
    msg.lon = 0.7268158798139955;
    msg.height = 0.07800086111965854;
    msg.satellites = 188U;
    msg.cog = 0.7622527028355195;
    msg.sog = 0.004681541377315801;
    msg.hdop = 0.159760871206452;
    msg.vdop = 0.030151270181983714;
    msg.hacc = 0.4340321434809188;
    msg.vacc = 0.47866972729426127;

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
    msg.setTimeStamp(0.5221301522304734);
    msg.setSource(38136U);
    msg.setSourceEntity(81U);
    msg.setDestination(22582U);
    msg.setDestinationEntity(245U);
    msg.validity = 38248U;
    msg.type = 106U;
    msg.utc_year = 21282U;
    msg.utc_month = 75U;
    msg.utc_day = 6U;
    msg.utc_time = 0.6159887300547376;
    msg.lat = 0.4540525793221679;
    msg.lon = 0.18255546921026633;
    msg.height = 0.5512375721732644;
    msg.satellites = 4U;
    msg.cog = 0.9104747261182111;
    msg.sog = 0.08287005650717061;
    msg.hdop = 0.9416117949052859;
    msg.vdop = 0.7675187838746251;
    msg.hacc = 0.33962195406215834;
    msg.vacc = 0.990781430492776;

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
    msg.setTimeStamp(0.8017535742793125);
    msg.setSource(1312U);
    msg.setSourceEntity(243U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(240U);
    msg.validity = 42116U;
    msg.type = 251U;
    msg.utc_year = 57418U;
    msg.utc_month = 0U;
    msg.utc_day = 193U;
    msg.utc_time = 0.38242679882207997;
    msg.lat = 0.02443828355500466;
    msg.lon = 0.8558260282077947;
    msg.height = 0.8420658047488091;
    msg.satellites = 183U;
    msg.cog = 0.9384373550695831;
    msg.sog = 0.8978584927816975;
    msg.hdop = 0.10581854752598008;
    msg.vdop = 0.3641920716856525;
    msg.hacc = 0.03903410398192142;
    msg.vacc = 0.3445441716032226;

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
    msg.setTimeStamp(0.642542656997254);
    msg.setSource(52286U);
    msg.setSourceEntity(10U);
    msg.setDestination(5084U);
    msg.setDestinationEntity(240U);
    msg.time = 0.9320096475191916;
    msg.phi = 0.027113784510871097;
    msg.theta = 0.8616562098778225;
    msg.psi = 0.06795911956320533;
    msg.psi_magnetic = 0.918456511962851;

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
    msg.setTimeStamp(0.6289320411086411);
    msg.setSource(25293U);
    msg.setSourceEntity(38U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(127U);
    msg.time = 0.028677144397554533;
    msg.phi = 0.212480331277913;
    msg.theta = 0.49331906367773526;
    msg.psi = 0.27393237407297666;
    msg.psi_magnetic = 0.7799340208909573;

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
    msg.setTimeStamp(0.35205684931146);
    msg.setSource(19025U);
    msg.setSourceEntity(105U);
    msg.setDestination(28575U);
    msg.setDestinationEntity(189U);
    msg.time = 0.07350099528050402;
    msg.phi = 0.6590887509569505;
    msg.theta = 0.8165812086440707;
    msg.psi = 0.6680660873522826;
    msg.psi_magnetic = 0.8783544374454797;

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
    msg.setTimeStamp(0.2919244942554631);
    msg.setSource(39614U);
    msg.setSourceEntity(151U);
    msg.setDestination(13662U);
    msg.setDestinationEntity(84U);
    msg.time = 0.20055566041523387;
    msg.x = 0.2662065743854928;
    msg.y = 0.32531454540909144;
    msg.z = 0.30973521069733;
    msg.timestep = 0.5031506942979125;

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
    msg.setTimeStamp(0.26022024300720226);
    msg.setSource(20868U);
    msg.setSourceEntity(240U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(104U);
    msg.time = 0.3001270898245155;
    msg.x = 0.9634318218029388;
    msg.y = 0.7265079771926702;
    msg.z = 0.12707061338660564;
    msg.timestep = 0.8374479248786533;

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
    msg.setTimeStamp(0.7820571498261188);
    msg.setSource(11436U);
    msg.setSourceEntity(218U);
    msg.setDestination(52762U);
    msg.setDestinationEntity(148U);
    msg.time = 0.4176844207754168;
    msg.x = 0.7652410430421234;
    msg.y = 0.015383072938154552;
    msg.z = 0.8629321704390428;
    msg.timestep = 0.0002032487618419676;

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
    msg.setTimeStamp(0.9330212200209881);
    msg.setSource(10381U);
    msg.setSourceEntity(187U);
    msg.setDestination(32013U);
    msg.setDestinationEntity(10U);
    msg.time = 0.2794935951835992;
    msg.x = 0.980651963629156;
    msg.y = 0.5617137790666616;
    msg.z = 0.6045063381898985;

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
    msg.setTimeStamp(0.6323080160215587);
    msg.setSource(16171U);
    msg.setSourceEntity(114U);
    msg.setDestination(16073U);
    msg.setDestinationEntity(106U);
    msg.time = 0.9726947158401981;
    msg.x = 0.6054940147497653;
    msg.y = 0.7890324356703954;
    msg.z = 0.6091588941745995;

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
    msg.setTimeStamp(0.5817586324305135);
    msg.setSource(60509U);
    msg.setSourceEntity(23U);
    msg.setDestination(24376U);
    msg.setDestinationEntity(78U);
    msg.time = 0.5731517941069599;
    msg.x = 0.1381704035104231;
    msg.y = 0.8918333604076094;
    msg.z = 0.5770675557465612;

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
    msg.setTimeStamp(0.6367828478350912);
    msg.setSource(25597U);
    msg.setSourceEntity(88U);
    msg.setDestination(23086U);
    msg.setDestinationEntity(119U);
    msg.time = 0.8069197210138592;
    msg.x = 0.7875917445486049;
    msg.y = 0.252738636148232;
    msg.z = 0.5018863724014623;

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
    msg.setTimeStamp(0.6690688490007838);
    msg.setSource(21814U);
    msg.setSourceEntity(109U);
    msg.setDestination(33355U);
    msg.setDestinationEntity(76U);
    msg.time = 0.4750800610615854;
    msg.x = 0.6234300363904783;
    msg.y = 0.8567264832813827;
    msg.z = 0.8891310837948114;

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
    msg.setTimeStamp(0.5697713635212046);
    msg.setSource(1299U);
    msg.setSourceEntity(153U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(220U);
    msg.time = 0.0010987726399090958;
    msg.x = 0.2877803264991189;
    msg.y = 0.31882484462149197;
    msg.z = 0.5459420457010692;

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
    msg.setTimeStamp(0.04221940072800279);
    msg.setSource(46384U);
    msg.setSourceEntity(204U);
    msg.setDestination(15015U);
    msg.setDestinationEntity(214U);
    msg.time = 0.05711605435404077;
    msg.x = 0.49561778553649616;
    msg.y = 0.9774896622111247;
    msg.z = 0.09472321170303633;

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
    msg.setTimeStamp(0.02026539832716745);
    msg.setSource(11140U);
    msg.setSourceEntity(22U);
    msg.setDestination(241U);
    msg.setDestinationEntity(24U);
    msg.time = 0.11228618885038821;
    msg.x = 0.3931219712599481;
    msg.y = 0.539172852096032;
    msg.z = 0.2472376353969149;

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
    msg.setTimeStamp(0.5189595926591966);
    msg.setSource(12884U);
    msg.setSourceEntity(174U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(197U);
    msg.time = 0.9639963719915079;
    msg.x = 0.8472482209894612;
    msg.y = 0.9473302843259841;
    msg.z = 0.5375341036054243;

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
    msg.setTimeStamp(0.8461990586532413);
    msg.setSource(42836U);
    msg.setSourceEntity(176U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(68U);
    msg.validity = 37U;
    msg.x = 0.12437732221992726;
    msg.y = 0.1933791332700553;
    msg.z = 0.14408818970425163;

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
    msg.setTimeStamp(0.8319551683299335);
    msg.setSource(33066U);
    msg.setSourceEntity(204U);
    msg.setDestination(14265U);
    msg.setDestinationEntity(122U);
    msg.validity = 69U;
    msg.x = 0.7974303629316357;
    msg.y = 0.7540570438809763;
    msg.z = 0.8964396315053049;

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
    msg.setTimeStamp(0.34954971892574527);
    msg.setSource(27695U);
    msg.setSourceEntity(36U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(34U);
    msg.validity = 33U;
    msg.x = 0.8777294253350464;
    msg.y = 0.41121179788519246;
    msg.z = 0.6786346683780242;

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
    msg.setTimeStamp(0.496361632699156);
    msg.setSource(57723U);
    msg.setSourceEntity(27U);
    msg.setDestination(2921U);
    msg.setDestinationEntity(38U);
    msg.validity = 114U;
    msg.x = 0.9484726355633941;
    msg.y = 0.665095858458756;
    msg.z = 0.9657257514148456;

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
    msg.setTimeStamp(0.3037615643008915);
    msg.setSource(18717U);
    msg.setSourceEntity(41U);
    msg.setDestination(30060U);
    msg.setDestinationEntity(76U);
    msg.validity = 48U;
    msg.x = 0.3959407017220985;
    msg.y = 0.20810874334028484;
    msg.z = 0.6507372551560421;

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
    msg.setTimeStamp(0.13553188468435484);
    msg.setSource(5682U);
    msg.setSourceEntity(154U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(249U);
    msg.validity = 208U;
    msg.x = 0.330252885451926;
    msg.y = 0.4544266889500791;
    msg.z = 0.015018401580045748;

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
    msg.setTimeStamp(0.09418747781570369);
    msg.setSource(15531U);
    msg.setSourceEntity(237U);
    msg.setDestination(57571U);
    msg.setDestinationEntity(29U);
    msg.time = 0.12130367794837049;
    msg.x = 0.7536837251254316;
    msg.y = 0.3956190470265232;
    msg.z = 0.19226659299416782;

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
    msg.setTimeStamp(0.23562557542120754);
    msg.setSource(46367U);
    msg.setSourceEntity(113U);
    msg.setDestination(42648U);
    msg.setDestinationEntity(73U);
    msg.time = 0.19215789458272692;
    msg.x = 0.36293576255387605;
    msg.y = 0.04236689739349453;
    msg.z = 0.46900740081143566;

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
    msg.setTimeStamp(0.049669609009291404);
    msg.setSource(17818U);
    msg.setSourceEntity(247U);
    msg.setDestination(44157U);
    msg.setDestinationEntity(8U);
    msg.time = 0.1320876729059678;
    msg.x = 0.4493087350149879;
    msg.y = 0.32865047941410463;
    msg.z = 0.7325624237677202;

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
    msg.setTimeStamp(0.0858979717593884);
    msg.setSource(7226U);
    msg.setSourceEntity(26U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(165U);
    msg.validity = 218U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9284373934521117;
    tmp_msg_0.y = 0.45091147669122644;
    tmp_msg_0.z = 0.9281494494042505;
    tmp_msg_0.phi = 0.8661233018684757;
    tmp_msg_0.theta = 0.8718842058511848;
    tmp_msg_0.psi = 0.24154417678905638;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8243931090647236;

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
    msg.setTimeStamp(0.1086089493185376);
    msg.setSource(31607U);
    msg.setSourceEntity(114U);
    msg.setDestination(46331U);
    msg.setDestinationEntity(76U);
    msg.validity = 114U;
    msg.value = 0.9528286706800295;

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
    msg.setTimeStamp(0.7136081199976286);
    msg.setSource(57978U);
    msg.setSourceEntity(127U);
    msg.setDestination(63601U);
    msg.setDestinationEntity(209U);
    msg.validity = 159U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.563611553829604;
    tmp_msg_0.y = 0.7539690745234987;
    tmp_msg_0.z = 0.6051402529106263;
    tmp_msg_0.phi = 0.8771959059587947;
    tmp_msg_0.theta = 0.4829973932724585;
    tmp_msg_0.psi = 0.6315632562442692;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.17927743428568355;
    tmp_msg_1.beam_height = 0.6036823183190474;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8192496194308538;

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
    msg.setTimeStamp(0.5519600781800744);
    msg.setSource(60273U);
    msg.setSourceEntity(157U);
    msg.setDestination(32351U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2900873791062111;

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
    msg.setTimeStamp(0.5824222937070465);
    msg.setSource(32723U);
    msg.setSourceEntity(69U);
    msg.setDestination(63993U);
    msg.setDestinationEntity(146U);
    msg.value = 0.837022301716045;

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
    msg.setTimeStamp(0.6953968807082432);
    msg.setSource(56666U);
    msg.setSourceEntity(96U);
    msg.setDestination(60407U);
    msg.setDestinationEntity(40U);
    msg.value = 0.1054951319062224;

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
    msg.setTimeStamp(0.27387479865584696);
    msg.setSource(15541U);
    msg.setSourceEntity(170U);
    msg.setDestination(27358U);
    msg.setDestinationEntity(59U);
    msg.value = 0.24159326735511255;

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
    msg.setTimeStamp(0.6596428414434808);
    msg.setSource(5841U);
    msg.setSourceEntity(203U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5814122903602986;

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
    msg.setTimeStamp(0.03517699991605849);
    msg.setSource(19691U);
    msg.setSourceEntity(78U);
    msg.setDestination(18267U);
    msg.setDestinationEntity(121U);
    msg.value = 0.5957058791667876;

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
    msg.setTimeStamp(0.9859019022442191);
    msg.setSource(63080U);
    msg.setSourceEntity(195U);
    msg.setDestination(29099U);
    msg.setDestinationEntity(202U);
    msg.value = 0.03480034613121785;

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
    msg.setTimeStamp(0.19906042656410894);
    msg.setSource(14495U);
    msg.setSourceEntity(206U);
    msg.setDestination(60606U);
    msg.setDestinationEntity(109U);
    msg.value = 0.10794753388953637;

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
    msg.setTimeStamp(0.5370036372925197);
    msg.setSource(49025U);
    msg.setSourceEntity(209U);
    msg.setDestination(49137U);
    msg.setDestinationEntity(37U);
    msg.value = 0.306735619445194;

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
    msg.setTimeStamp(0.1357912231576205);
    msg.setSource(62283U);
    msg.setSourceEntity(246U);
    msg.setDestination(23573U);
    msg.setDestinationEntity(78U);
    msg.value = 0.5833092710699009;

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
    msg.setTimeStamp(0.9391479283873435);
    msg.setSource(13786U);
    msg.setSourceEntity(215U);
    msg.setDestination(20507U);
    msg.setDestinationEntity(158U);
    msg.value = 0.8522574475629079;

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
    msg.setTimeStamp(0.7666558977238898);
    msg.setSource(25612U);
    msg.setSourceEntity(184U);
    msg.setDestination(46570U);
    msg.setDestinationEntity(120U);
    msg.value = 0.5684681448700202;

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
    msg.setTimeStamp(0.7719684095024458);
    msg.setSource(9616U);
    msg.setSourceEntity(196U);
    msg.setDestination(41393U);
    msg.setDestinationEntity(183U);
    msg.value = 0.505671374639767;

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
    msg.setTimeStamp(0.9854895429870867);
    msg.setSource(27990U);
    msg.setSourceEntity(241U);
    msg.setDestination(21653U);
    msg.setDestinationEntity(61U);
    msg.value = 0.09506644812982867;

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
    msg.setTimeStamp(0.24402558526640628);
    msg.setSource(44446U);
    msg.setSourceEntity(9U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6112314255843975;

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
    msg.setTimeStamp(0.49629710484460077);
    msg.setSource(10472U);
    msg.setSourceEntity(165U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9461665685186988;

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
    msg.setTimeStamp(0.17746439240869016);
    msg.setSource(43127U);
    msg.setSourceEntity(120U);
    msg.setDestination(61722U);
    msg.setDestinationEntity(202U);
    msg.value = 0.24493826512101646;

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
    msg.setTimeStamp(0.8522057028042398);
    msg.setSource(8598U);
    msg.setSourceEntity(184U);
    msg.setDestination(40460U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6622243689238869;

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
    msg.setTimeStamp(0.6766556229605866);
    msg.setSource(894U);
    msg.setSourceEntity(175U);
    msg.setDestination(60595U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5934915399897378;

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
    msg.setTimeStamp(0.4004796153353041);
    msg.setSource(41126U);
    msg.setSourceEntity(76U);
    msg.setDestination(23705U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6033496235476058;

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
    msg.setTimeStamp(0.43392892243590875);
    msg.setSource(49979U);
    msg.setSourceEntity(73U);
    msg.setDestination(62078U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9865039416789262;

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
    msg.setTimeStamp(0.7886677651831198);
    msg.setSource(18785U);
    msg.setSourceEntity(118U);
    msg.setDestination(33014U);
    msg.setDestinationEntity(14U);
    msg.value = 0.4211646839807317;

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
    msg.setTimeStamp(0.5059033280047998);
    msg.setSource(59430U);
    msg.setSourceEntity(113U);
    msg.setDestination(14540U);
    msg.setDestinationEntity(99U);
    msg.value = 0.02474334936713596;

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
    msg.setTimeStamp(0.41665939508952643);
    msg.setSource(65423U);
    msg.setSourceEntity(74U);
    msg.setDestination(6329U);
    msg.setDestinationEntity(58U);
    msg.value = 0.035903450692029715;

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
    msg.setTimeStamp(0.12170787251897441);
    msg.setSource(51591U);
    msg.setSourceEntity(46U);
    msg.setDestination(20304U);
    msg.setDestinationEntity(0U);
    msg.direction = 0.6240458746343956;
    msg.speed = 0.24287281995751742;

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
    msg.setTimeStamp(0.5043924640696901);
    msg.setSource(31097U);
    msg.setSourceEntity(47U);
    msg.setDestination(11327U);
    msg.setDestinationEntity(158U);
    msg.direction = 0.19421952853212243;
    msg.speed = 0.9544652590269876;

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
    msg.setTimeStamp(0.9818452270958331);
    msg.setSource(48261U);
    msg.setSourceEntity(68U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(195U);
    msg.direction = 0.7100850497592222;
    msg.speed = 0.8244355144084777;

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
    msg.setTimeStamp(0.388504400672412);
    msg.setSource(53933U);
    msg.setSourceEntity(122U);
    msg.setDestination(49012U);
    msg.setDestinationEntity(174U);
    msg.value = 0.08404629231702332;

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
    msg.setTimeStamp(0.9409793502047172);
    msg.setSource(7151U);
    msg.setSourceEntity(62U);
    msg.setDestination(21904U);
    msg.setDestinationEntity(40U);
    msg.value = 0.9530625851586911;

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
    msg.setTimeStamp(0.6068076498637942);
    msg.setSource(19822U);
    msg.setSourceEntity(209U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(94U);
    msg.value = 0.73838251679372;

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
    msg.setTimeStamp(0.3810534910296063);
    msg.setSource(15864U);
    msg.setSourceEntity(212U);
    msg.setDestination(31049U);
    msg.setDestinationEntity(102U);
    msg.value.assign("SRKRPPBWVNEPQXOQQYUGTUDFUILUUYCVESFVVMUXEUOYLCRNGMKMJJMSSPNFIGOPTDAEANHGEGWLEZZYNHVDXRFRBHMXPKAZHHLMILUKWIMWHFHQJNDKIGPJTSZWWWOGDLIXRZQJRSKQMLVADCCXDFTXACBTQGC");

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
    msg.setTimeStamp(0.5857552875667793);
    msg.setSource(64962U);
    msg.setSourceEntity(173U);
    msg.setDestination(37254U);
    msg.setDestinationEntity(205U);
    msg.value.assign("ZUTHFMELMWKUGNGAHLBLFQIKLDHHZFBYVJMVLQNNUDCOBKOLGTAAVWYZYHMEHSVRGEMQYONSDJXXUUVVHTRDILCWPKIAPFJOQQWEWRBRPCQLLXBIOCAZAPXPKFEHDQRNJSKIGJWKJMCIFMSNTUMSDYIPYEQCIPZCGXRDMXBCTXGRGFPGSFKUJBMBXKDUASZQUTHJWTZZUTBNVI");

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
    msg.setTimeStamp(0.6814862133354899);
    msg.setSource(64350U);
    msg.setSourceEntity(190U);
    msg.setDestination(9018U);
    msg.setDestinationEntity(56U);
    msg.value.assign("LEZUWHKCOEKJPVGENZYIEZURZJHONMKWSLMCNIUINMPWLMARSUTI");

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
    msg.setTimeStamp(0.617654581582562);
    msg.setSource(34510U);
    msg.setSourceEntity(37U);
    msg.setDestination(61378U);
    msg.setDestinationEntity(118U);
    const char tmp_msg_0[] = {-28, -48, 37, -64, 80, -123, -56, -7, -32, 31, 82, -6, -53, -57, 62, 6, -67, 41, 79, -38, 24, 99, -119, -72, -39, -127, 73, 48, -51, 83, -127, 60, -1, 51, 82, -103, -63, 26, 51, 122, -92, -45, 51, 101, 47, -117, 29, 52, -94, 124, 40, 58, -2, -3, 65, -33, 25, 21, 44, -13, -127, 119, 12, -105, -112, -2, -2, -126, -2, -31, 66, -64, 47, 126, 68, 33, 56, 45, 18, -78, -18, 71, 64, 110, -28, -99, 125, 48, 15, -80, -16, 19, 0, 87, -57, 27, -56, -126, 44, -13, 124, 2, 103, -93, -74, 60, 35, -128, 48, -111, 125, -114, 21, 61, 26, 43, -100, -32, 100, -37, 91, -43, 27, -28, 94, -2, -30, 51, -121, 78, 47, 54, -114, -76, 52, 82, 10, -77, 112, 10, -125, 12, 126, -109, 117, 95, -115, 65, -102, -128, -111, -32, 104, 110, 11, 96, -38, -32, 12, -70, -62, 10, -81, -92, 73, -93, -112, -107, -50, -121, 83, -63, -126, -65, -34, 58, -97, -85, -126, 85, 98, -67, -122};
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
    msg.setTimeStamp(0.9830983311817891);
    msg.setSource(33815U);
    msg.setSourceEntity(198U);
    msg.setDestination(56347U);
    msg.setDestinationEntity(124U);
    const char tmp_msg_0[] = {36, 35, 66, 43, 31, 41, -66, -78, 6, 0, 74, -106, -2, -82, -118, -108, -98, 68, 16, 105, -50, 73, -127, -103, 87, -81, 91, -91, 55, -120, 12, -22, 115, 80, -35, -17, 1};
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
    msg.setTimeStamp(0.02497330211249993);
    msg.setSource(65230U);
    msg.setSourceEntity(46U);
    msg.setDestination(39558U);
    msg.setDestinationEntity(133U);
    const char tmp_msg_0[] = {-20, 74, 6, 124, -91, 14, -6, 46, -22, -62, 77, 5, 6, 114, 30, 31, 84, 54, 45, -24, -120, 120, 43, -36, -8, -27, 92, -83, -68, -39, 109, 108, 37, -23};
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
    msg.setTimeStamp(0.5570386585703807);
    msg.setSource(38177U);
    msg.setSourceEntity(176U);
    msg.setDestination(16224U);
    msg.setDestinationEntity(50U);
    msg.frequency = 2106232193U;
    msg.min_range = 37685U;
    msg.max_range = 59129U;

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
    msg.setTimeStamp(0.7957742450809961);
    msg.setSource(8210U);
    msg.setSourceEntity(8U);
    msg.setDestination(45064U);
    msg.setDestinationEntity(2U);
    msg.frequency = 2333766126U;
    msg.min_range = 39306U;
    msg.max_range = 62044U;

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
    msg.setTimeStamp(0.9189540998459228);
    msg.setSource(9719U);
    msg.setSourceEntity(89U);
    msg.setDestination(37709U);
    msg.setDestinationEntity(201U);
    msg.frequency = 1695295409U;
    msg.min_range = 43749U;
    msg.max_range = 57641U;

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
    msg.setTimeStamp(0.8607139429965461);
    msg.setSource(18419U);
    msg.setSourceEntity(198U);
    msg.setDestination(24049U);
    msg.setDestinationEntity(186U);
    msg.type = 52U;
    msg.frequency = 3963317026U;
    msg.min_range = 62022U;
    msg.max_range = 13613U;
    msg.bits_per_point = 68U;
    msg.scale_factor = 0.7038945778583924;
    const char tmp_msg_0[] = {18, 91, 112, 49, -89, -41, 32, 68, 16, 90, -52, -91, 52, -78, -96, 34, -23, -95, -4, -89, 52, -117, 31, 119, 78, -31, 78, -4, 32, -71, 82, -58, -48, -85, -71, -38, -8, 113, 63, 103, -8, 56, -54, 72, 79, -80, 54, 74, 1, 115, -100, 40, -38, 121, -99, -42, 105, 10, 15, -64, 80, -29, -13, -61, 98, -85, 77, -18, -26, -91, 83, 126, -94, 54, -78, -21, -4, 103, -113, 38, 71, -5, -115, 69, -87, -26, -39, -7, 18, -65, 16, -37, -79, -71, 58, 37, -123, -3, 3, -48, 7, -13, -123, -55, 51, -85, 73, -9, -9, -67, -85, 7, -71, 70, 79, 119, -120, -5, -124, 31, 40, 32, -63, -11, 102, 31, -70, 54, 120, -105, 52, 86, 61, -114, -114, -94, -37, 76, 71, 100, -100, 62, 21, 20, 22, 83, -88, -90, -11, -9, -71, 29, -114, 120, -81, 65, 23, 65, 121, 42, 24, -73, -23, -24, 116, -103, 113, -7, -26, 105, 107, 19, -128, 99, -14, -68, -58, -104};
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
    msg.setTimeStamp(0.387411066022575);
    msg.setSource(46678U);
    msg.setSourceEntity(4U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(103U);
    msg.type = 236U;
    msg.frequency = 3107756717U;
    msg.min_range = 30253U;
    msg.max_range = 42187U;
    msg.bits_per_point = 59U;
    msg.scale_factor = 0.5020624394113115;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.49666629200775436;
    tmp_msg_0.beam_height = 0.8800551654807729;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-89, -82, 107, 77, -1, 56, -10, -23, 46, 121, 40, 78, -112, -91, -107, -122, -69, -111, -49, -114, -113, 0, -43, 43, -61, 120, -14, 104, -100, -65, 53, 96, 9, 97, 27, -34, 120, 73, 73, 80, 34, 11, -125, -98, -23, -94, 40, 97, -48, 28, 6, -118, -106, -112, 88, -112, 33, -60, 76, -54, 97, -114, 6, 43, 50, 16, 28, 16, -106, 4, -5, -29, -70, -49, -37, 18, -41, 110, 85, 95, 34, -55, 33, -18, 81, 37, -33, -17, -55, 7, 46, -39, -121, 92, 87, -28, -111, 38, -112, -67, -103, -119, -71, -121, -25, 25, -63, -88, -24, -90, 112, -127, -2, -110, 70, -95, 60, -37, -74, -37, 93, 32, 76, 3};
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
    msg.setTimeStamp(0.4063992689682231);
    msg.setSource(3293U);
    msg.setSourceEntity(3U);
    msg.setDestination(27391U);
    msg.setDestinationEntity(114U);
    msg.type = 77U;
    msg.frequency = 3141273335U;
    msg.min_range = 27230U;
    msg.max_range = 62591U;
    msg.bits_per_point = 151U;
    msg.scale_factor = 0.7597170812285737;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9250785637407842;
    tmp_msg_0.beam_height = 0.6057192548695867;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-17, -108, 41, -111, -77, -9, -62, 81, -40, -69, -104, 67, 75, 6, 2, -34, 106, -33, 120, 121, -34, -31, -59, -112, 40, 109, -80, -113, 0, -111, 93, -57, -97, -30, -103, 1, -113, 75, -23, -73, -33, -9, -54, 5, -119, -128, -119, 34, -122, 37, 27, -79, -60, -122, -39, -71, 3, 120, 102, 75, -36, 121, -50, -111, 119, -112, 14, 26, -45, 83, 7, -29, -83, -81, 102, -112, -60, 88, 32, -5, -72, 87, -77, 75, 123, -107, -117, 21, 115, 119, -128, 96, -122, 41, -75, -83, -27, -96, -123, 74, -51, -123, 124, -70, -59, -77, 13, -100, 30, -73, -127, 91, -75, 51, -51, -90, -47, -92, -26, -28, 101, 65, -98, -116, 52, -93, -28, 7, 28, 94, 24, -22, 19, -75, 115, -126, -115, -16, 63, 11, -52, -115, 111, -124, 81, 64, -22, -110, 103, 105, -46, 88, -118, 12, 78, 3, -23, 99, 85, -50, -49, 69, -45, -67, -44, 101, -43, 46, 18, 14};
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
    msg.setTimeStamp(0.5728547918708781);
    msg.setSource(2587U);
    msg.setSourceEntity(72U);
    msg.setDestination(14947U);
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
    msg.setTimeStamp(0.11977873644278858);
    msg.setSource(57060U);
    msg.setSourceEntity(74U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.7271200908144515);
    msg.setSource(32375U);
    msg.setSourceEntity(43U);
    msg.setDestination(12394U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.8084869999859445);
    msg.setSource(2276U);
    msg.setSourceEntity(61U);
    msg.setDestination(9217U);
    msg.setDestinationEntity(44U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.6885255207964354);
    msg.setSource(16964U);
    msg.setSourceEntity(54U);
    msg.setDestination(9309U);
    msg.setDestinationEntity(0U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.42080349124794014);
    msg.setSource(61999U);
    msg.setSourceEntity(249U);
    msg.setDestination(4724U);
    msg.setDestinationEntity(163U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.36022721298467086);
    msg.setSource(27469U);
    msg.setSourceEntity(15U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(185U);
    msg.value = 0.1389030016691728;
    msg.confidence = 0.9011573204231704;
    msg.opmodes.assign("ZRIHRWWHZCRDSJ");

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
    msg.setTimeStamp(0.30152508596744976);
    msg.setSource(65302U);
    msg.setSourceEntity(14U);
    msg.setDestination(61086U);
    msg.setDestinationEntity(142U);
    msg.value = 0.13731985639104427;
    msg.confidence = 0.22087600092548632;
    msg.opmodes.assign("RAQHDEZOOWJL");

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
    msg.setTimeStamp(0.27035774496411147);
    msg.setSource(5289U);
    msg.setSourceEntity(178U);
    msg.setDestination(25682U);
    msg.setDestinationEntity(42U);
    msg.value = 0.5913851749880482;
    msg.confidence = 0.047272924473522715;
    msg.opmodes.assign("DRZCGPSQQCNRUIQPSEHXEUMPSMOMONADPEEXLBAGWWVJVFIURBWYPVBOZFMJXJGPCLGTQBFMXZWFHPTBMJ");

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
    msg.setTimeStamp(0.32128443158304865);
    msg.setSource(29387U);
    msg.setSourceEntity(53U);
    msg.setDestination(10612U);
    msg.setDestinationEntity(234U);
    msg.itow = 295685511U;
    msg.lat = 0.7279922320012506;
    msg.lon = 0.7910004141961635;
    msg.height_ell = 0.22555199288266936;
    msg.height_sea = 0.0345759551563517;
    msg.hacc = 0.11848287300936866;
    msg.vacc = 0.8360493525920708;
    msg.vel_n = 0.2673160873364988;
    msg.vel_e = 0.5077431575653519;
    msg.vel_d = 0.6266973400283699;
    msg.speed = 0.6366171454509254;
    msg.gspeed = 0.3637245964040008;
    msg.heading = 0.37626942094076865;
    msg.sacc = 0.35263536335228207;
    msg.cacc = 0.12877951187071512;

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
    msg.setTimeStamp(0.057883654898111536);
    msg.setSource(62975U);
    msg.setSourceEntity(220U);
    msg.setDestination(54482U);
    msg.setDestinationEntity(219U);
    msg.itow = 1294807957U;
    msg.lat = 0.7402930435593786;
    msg.lon = 0.6754528018423567;
    msg.height_ell = 0.2275299615233115;
    msg.height_sea = 0.8891371612050174;
    msg.hacc = 0.44035886650607636;
    msg.vacc = 0.07803706625841267;
    msg.vel_n = 0.23214234804471334;
    msg.vel_e = 0.5337880277080027;
    msg.vel_d = 0.07507176355970191;
    msg.speed = 0.6397285287448075;
    msg.gspeed = 0.8204179246123133;
    msg.heading = 0.7293255057744975;
    msg.sacc = 0.6889255773634295;
    msg.cacc = 0.08898716561771358;

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
    msg.setTimeStamp(0.374504507816973);
    msg.setSource(8821U);
    msg.setSourceEntity(121U);
    msg.setDestination(33506U);
    msg.setDestinationEntity(218U);
    msg.itow = 3327794240U;
    msg.lat = 0.7309929066720923;
    msg.lon = 0.5568892632977516;
    msg.height_ell = 0.6895859173901893;
    msg.height_sea = 0.4773266095876896;
    msg.hacc = 0.30454491958777985;
    msg.vacc = 0.2785579623376281;
    msg.vel_n = 0.8256332758982884;
    msg.vel_e = 0.5501894490303241;
    msg.vel_d = 0.11199328703510303;
    msg.speed = 0.5506076692842641;
    msg.gspeed = 0.04893054745851999;
    msg.heading = 0.35529862404071755;
    msg.sacc = 0.004205965937087552;
    msg.cacc = 0.6969820862627895;

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
    msg.setTimeStamp(0.3448087415239537);
    msg.setSource(46128U);
    msg.setSourceEntity(128U);
    msg.setDestination(35323U);
    msg.setDestinationEntity(51U);
    msg.id = 35U;
    msg.value = 0.29661175092712655;

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
    msg.setTimeStamp(0.4843411112282985);
    msg.setSource(53933U);
    msg.setSourceEntity(144U);
    msg.setDestination(29288U);
    msg.setDestinationEntity(197U);
    msg.id = 164U;
    msg.value = 0.7608092901204684;

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
    msg.setTimeStamp(0.43803648166320686);
    msg.setSource(24442U);
    msg.setSourceEntity(30U);
    msg.setDestination(45280U);
    msg.setDestinationEntity(127U);
    msg.id = 152U;
    msg.value = 0.9037267409374645;

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
    msg.setTimeStamp(0.7077311991651243);
    msg.setSource(55815U);
    msg.setSourceEntity(75U);
    msg.setDestination(19457U);
    msg.setDestinationEntity(183U);
    msg.x = 0.46120421891858;
    msg.y = 0.2716302765337777;
    msg.z = 0.9616929391595992;
    msg.phi = 0.9355769721780312;
    msg.theta = 0.010576912031307506;
    msg.psi = 0.9444066937404523;

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
    msg.setTimeStamp(0.4958376396120222);
    msg.setSource(32862U);
    msg.setSourceEntity(181U);
    msg.setDestination(35547U);
    msg.setDestinationEntity(25U);
    msg.x = 0.6926182691058133;
    msg.y = 0.6215663415674946;
    msg.z = 0.7845247136842818;
    msg.phi = 0.7812574927577709;
    msg.theta = 0.2855928298674042;
    msg.psi = 0.4112892847087247;

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
    msg.setTimeStamp(0.8165891554841614);
    msg.setSource(58951U);
    msg.setSourceEntity(164U);
    msg.setDestination(9259U);
    msg.setDestinationEntity(228U);
    msg.x = 0.5293590065353436;
    msg.y = 0.979912773534875;
    msg.z = 0.65847947191988;
    msg.phi = 0.8171549932912715;
    msg.theta = 0.6543244939603798;
    msg.psi = 0.018776283353446388;

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
    msg.setTimeStamp(0.36554191567034544);
    msg.setSource(57534U);
    msg.setSourceEntity(216U);
    msg.setDestination(61424U);
    msg.setDestinationEntity(200U);
    msg.beam_width = 0.37172935696778464;
    msg.beam_height = 0.9153681143833035;

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
    msg.setTimeStamp(0.6658806298754916);
    msg.setSource(60071U);
    msg.setSourceEntity(111U);
    msg.setDestination(11598U);
    msg.setDestinationEntity(50U);
    msg.beam_width = 0.3255049441520721;
    msg.beam_height = 0.4924038116526004;

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
    msg.setTimeStamp(0.18685634641852233);
    msg.setSource(64797U);
    msg.setSourceEntity(59U);
    msg.setDestination(21082U);
    msg.setDestinationEntity(137U);
    msg.beam_width = 0.37837824984971036;
    msg.beam_height = 0.46973574432202236;

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
    msg.setTimeStamp(0.5706414898960727);
    msg.setSource(22872U);
    msg.setSourceEntity(210U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(231U);
    msg.id = 214U;
    msg.zoom = 64U;
    msg.action = 96U;

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
    msg.setTimeStamp(0.09376747344398528);
    msg.setSource(54999U);
    msg.setSourceEntity(114U);
    msg.setDestination(44808U);
    msg.setDestinationEntity(73U);
    msg.id = 98U;
    msg.zoom = 99U;
    msg.action = 27U;

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
    msg.setTimeStamp(0.713680115118445);
    msg.setSource(12413U);
    msg.setSourceEntity(243U);
    msg.setDestination(36039U);
    msg.setDestinationEntity(23U);
    msg.id = 225U;
    msg.zoom = 77U;
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
    msg.setTimeStamp(0.21460959189700501);
    msg.setSource(41250U);
    msg.setSourceEntity(18U);
    msg.setDestination(57753U);
    msg.setDestinationEntity(123U);
    msg.id = 15U;
    msg.value = 0.6859914951952034;

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
    msg.setTimeStamp(0.9784612093122073);
    msg.setSource(6765U);
    msg.setSourceEntity(177U);
    msg.setDestination(54713U);
    msg.setDestinationEntity(126U);
    msg.id = 221U;
    msg.value = 0.590889077163986;

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
    msg.setTimeStamp(0.33137329398250903);
    msg.setSource(17308U);
    msg.setSourceEntity(117U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(163U);
    msg.id = 104U;
    msg.value = 0.3455614075915513;

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
    msg.setTimeStamp(0.5599206803478725);
    msg.setSource(8952U);
    msg.setSourceEntity(23U);
    msg.setDestination(45508U);
    msg.setDestinationEntity(169U);
    msg.id = 231U;
    msg.value = 0.2471720956206398;

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
    msg.setTimeStamp(0.1498424015747435);
    msg.setSource(42696U);
    msg.setSourceEntity(178U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(92U);
    msg.id = 160U;
    msg.value = 0.7570630226976699;

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
    msg.setTimeStamp(0.5017781799065474);
    msg.setSource(52071U);
    msg.setSourceEntity(40U);
    msg.setDestination(15688U);
    msg.setDestinationEntity(1U);
    msg.id = 61U;
    msg.value = 0.7148001366245775;

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
    msg.setTimeStamp(0.6392561669981387);
    msg.setSource(37175U);
    msg.setSourceEntity(176U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(63U);
    msg.id = 222U;
    msg.angle = 0.38766766275502784;

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
    msg.setTimeStamp(0.4512402913335998);
    msg.setSource(2510U);
    msg.setSourceEntity(126U);
    msg.setDestination(29020U);
    msg.setDestinationEntity(194U);
    msg.id = 12U;
    msg.angle = 0.5607379544286792;

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
    msg.setTimeStamp(0.919346844453889);
    msg.setSource(12206U);
    msg.setSourceEntity(103U);
    msg.setDestination(34455U);
    msg.setDestinationEntity(93U);
    msg.id = 60U;
    msg.angle = 0.9798668708891188;

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
    msg.setTimeStamp(0.002576915738889851);
    msg.setSource(38876U);
    msg.setSourceEntity(193U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(78U);
    msg.op = 91U;
    msg.actions.assign("YKMYPLBSDQVHOAAXLGQRSMHZUGTSWILANMDKXGYQOMUQUGLFKZILEFHMKWDZKFOEZBQUSFJZXSNCFPDUVENJEWNGQCXXHFPRBQSAMZAWIBLRWDTCXJYNLJEPRTYDWAVGPBRMNPNVHAZLIWYQOTSOWCG");

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
    msg.setTimeStamp(0.044858849645676324);
    msg.setSource(63690U);
    msg.setSourceEntity(217U);
    msg.setDestination(23293U);
    msg.setDestinationEntity(51U);
    msg.op = 83U;
    msg.actions.assign("OIPKMBJXKPEDAQWIMECXRTGPKEAMZMYYHXSLYAKLYDVEC");

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
    msg.setTimeStamp(0.44895254431987275);
    msg.setSource(14588U);
    msg.setSourceEntity(60U);
    msg.setDestination(31144U);
    msg.setDestinationEntity(87U);
    msg.op = 49U;
    msg.actions.assign("VNROUOLXCMENSOQTWEXLGVMKNHEGPDBKCABRCJDKH");

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
    msg.setTimeStamp(0.43850464410890644);
    msg.setSource(20355U);
    msg.setSourceEntity(244U);
    msg.setDestination(44593U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("ZGWXONXCKHROWHKVMHDQASLPJKYGOMSFVALRWONRWISUNGQHHFGLWXVPOAXWCGADZIBBFNKLJTQPSURQFVZIDWGYOUEYYUPDWIJVDKESMXHMYDVKTZZUMRAHOAQKRCOCTDBISTAMKFZGN");

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
    msg.setTimeStamp(0.725560810295839);
    msg.setSource(22525U);
    msg.setSourceEntity(189U);
    msg.setDestination(13096U);
    msg.setDestinationEntity(230U);
    msg.actions.assign("WEGVEDVDSXQHIISEJKAAQPGONEPVDBZPFTPGKCHHSKHCBZYXNHVCTJLJPVHLSQORYURDNEOGFTNDBRHWBCWXZNMKLMLJXJOYRNFOWJFTTBUWINRKUEXIYHIMLZDGONVVAXLEURUSLJBMAIJBAIXJSOKEXSKLFGCQCQUGUFRAASWDAYKRBHFKYUCLZ");

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
    msg.setTimeStamp(0.13723775739905475);
    msg.setSource(49665U);
    msg.setSourceEntity(200U);
    msg.setDestination(46871U);
    msg.setDestinationEntity(104U);
    msg.actions.assign("BSOSDPTUNCWFCYNHMQFZAYOGWLGIJTUTGUEDOUNJZFCAVZIYWPSKJTKUQLALKVMEFRCQYORMZVNJMYRPLDIUHVITNVPXDXKLBHHMUBAJPOYAGHJKCOKNVQUAGJICIBFWXWCRKSZFOAGNTPRMNLPJEVJZDJMXFDTSTZQSTNICPBFECRSXEVGZOLLRWBPYCORKWSWGAMDNIXAZDWSKHOEXDTRF");

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
    msg.setTimeStamp(0.21463417235843574);
    msg.setSource(28881U);
    msg.setSourceEntity(64U);
    msg.setDestination(44443U);
    msg.setDestinationEntity(233U);
    msg.button = 93U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.4013102525409742);
    msg.setSource(20006U);
    msg.setSourceEntity(205U);
    msg.setDestination(58005U);
    msg.setDestinationEntity(201U);
    msg.button = 140U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.7611213001956011);
    msg.setSource(13413U);
    msg.setSourceEntity(92U);
    msg.setDestination(40282U);
    msg.setDestinationEntity(83U);
    msg.button = 127U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.5125449627205009);
    msg.setSource(12745U);
    msg.setSourceEntity(168U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(129U);
    msg.op = 72U;
    msg.text.assign("QOGSFSRJSMFTWVWMHSSRFUJFFXDPKULYJNSTXWYSBZXGUVNBKURGVRWPGOHDNGKSZINHYIZCNDHLBZZHPTTBUCFDLTPNXMEZLEYIIGARCIZCKJMZEVAQWWTGJAGTQLBYOHOAMGFUIVRVHABQCCJEKLRWPXHILJTRNYAQHOXQXFPDTQZCEVXNVUKAIPQYOBRAJKCKITWUWQMDEXNMEBCPSRYLBOOWVKYEL");

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
    msg.setTimeStamp(0.13549938624645796);
    msg.setSource(55960U);
    msg.setSourceEntity(9U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(198U);
    msg.op = 185U;
    msg.text.assign("IBKHHJEEEVIOCKFWLYBGJQFSDGJKGEWCYSAXSZLVZQIHNPYMHPDZQJGUCEFXBOAZBJMOYEMCKOPEAOJF");

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
    msg.setTimeStamp(0.4897448129041704);
    msg.setSource(900U);
    msg.setSourceEntity(222U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(61U);
    msg.op = 234U;
    msg.text.assign("GSYOHRZACXUBXAADWFRQMRYRMOPHPWFERXUHVYSAKJFYBDFXUVDLDMAOLRSTQQJFCUZCGTZBAZHILUZDQNNIOGTGOHYPGXPEQEITIWLMVZGXUTFEIKDILEEBARQNBEGSUJPJATKFJJEDINDSCJXXTMYVBMYNUCLBVYKHHKCHCTUPWBLYJNSILVNSRVOMWMNOHSKBY");

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
    msg.setTimeStamp(0.3096895695556875);
    msg.setSource(41198U);
    msg.setSourceEntity(228U);
    msg.setDestination(23025U);
    msg.setDestinationEntity(144U);
    msg.op = 219U;
    msg.time_remain = 0.715961757032863;
    msg.sched_time = 0.9054894508452527;

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
    msg.setTimeStamp(0.8910469756998561);
    msg.setSource(4308U);
    msg.setSourceEntity(67U);
    msg.setDestination(45635U);
    msg.setDestinationEntity(113U);
    msg.op = 176U;
    msg.time_remain = 0.40550425613402086;
    msg.sched_time = 0.7911628988304059;

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
    msg.setTimeStamp(0.6583536189421946);
    msg.setSource(55079U);
    msg.setSourceEntity(205U);
    msg.setDestination(21187U);
    msg.setDestinationEntity(135U);
    msg.op = 107U;
    msg.time_remain = 0.8350380920602914;
    msg.sched_time = 0.15259582899228508;

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
    msg.setTimeStamp(0.3451805315887736);
    msg.setSource(8827U);
    msg.setSourceEntity(113U);
    msg.setDestination(56018U);
    msg.setDestinationEntity(127U);
    msg.name.assign("FTFGUSMEZLDVETZRGBJZYEOMU");
    msg.op = 157U;
    msg.sched_time = 0.8153238866772339;

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
    msg.setTimeStamp(0.7249994397282593);
    msg.setSource(5676U);
    msg.setSourceEntity(117U);
    msg.setDestination(56819U);
    msg.setDestinationEntity(151U);
    msg.name.assign("KYAWLWFSINTNMGMNVJXTYMQYUSPLCCIWJRCQRVRASJCYDAEMHEITJVOFHELBGWXJBVKEJTUXHPTUYZWRQWOZBCKEXONRFQVLAZGVFGSDAIKMCOPZZONXNZYBZYPRXDQPVSSHGXHSLRNCCSQIMZDEAWETWVSKDVUKKDFGTPROPJPBBMQXXI");
    msg.op = 12U;
    msg.sched_time = 0.68995277006119;

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
    msg.setTimeStamp(0.8786597846453851);
    msg.setSource(39044U);
    msg.setSourceEntity(191U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(30U);
    msg.name.assign("ILPZQOGVWSYVRYEOATKZREQVRSVJJCSYJFEPURTJONEGNOVIGEAZPIAWIVEDOHPFELTVWHLMUNQQWCLUXXKLQYSKPFLKPWHCEQRVRIRJBAPZZOZDHKTXBWROTMIYACAUXVNXUMPADAWSIIEFCBF");
    msg.op = 161U;
    msg.sched_time = 0.4099753807678346;

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
    msg.setTimeStamp(0.37239236702254674);
    msg.setSource(15869U);
    msg.setSourceEntity(125U);
    msg.setDestination(24581U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.4682968515831598);
    msg.setSource(5580U);
    msg.setSourceEntity(161U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.0747613158000413);
    msg.setSource(4407U);
    msg.setSourceEntity(200U);
    msg.setDestination(52221U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.44576312316503264);
    msg.setSource(15367U);
    msg.setSourceEntity(45U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(30U);
    msg.name.assign("KWEATOWRHVPJZPSHOWQLOACXGSZSAEVPVHKJXVJIKFKLDOHMNRDSNNYUDOSBVXLXTSHHISIDZLCRWCRNROHJLYGGMBYXFGDIFVBPFNPDXULQRZMHPCYLBQXRYQPCNWMBDJPIGGCZZWQHKIBAYIPGQRKTUSBMDJUIWLNHIYAWNUUDSFUEMOGBYZBAWQXEUTOMJETKMKMOOQEPAQCIAEJLDEKYRGYJKNZCCTT");
    msg.state = 76U;

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
    msg.setTimeStamp(0.8639784084407391);
    msg.setSource(32117U);
    msg.setSourceEntity(70U);
    msg.setDestination(20340U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ODBJNMKBFVIJRNZYHGLEMLQUPGIYHOBQJUXAQEZMEMJMBPATOPOIMTKWCSHGRVWHWQKUXQSCROLLDGHSWAVPFWJZYDPXRTLEAQLDYXWDWVMRLTHKKSKJZITZSFNCTBISGTFIABXBACGMZV");
    msg.state = 9U;

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
    msg.setTimeStamp(0.5259985422667078);
    msg.setSource(25469U);
    msg.setSourceEntity(62U);
    msg.setDestination(31099U);
    msg.setDestinationEntity(34U);
    msg.name.assign("UHWYNOESCWZDYNSYUKXBHLKMREOXDDWILEEOPMLIXZBHLPCCFZOCFTNEBWTELGCKPJORPPHGIJYXTEQJONLYWAKBVKCSQJYRUTFEXVUHHIARBEOIVWFODSLSHDNHUMSVDZMMVNVCBYIGGJTADKJFQKCWNRYRJULNDGJZAMAITQGCVTFRGSXULZXAFXXVPTFNBIRTASKQBVFEKQVGCMZSUZBIMOUQADHFMPRWAJIXZUS");
    msg.state = 35U;

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
    msg.setTimeStamp(0.6372739490985401);
    msg.setSource(242U);
    msg.setSourceEntity(251U);
    msg.setDestination(43519U);
    msg.setDestinationEntity(64U);
    msg.id = 186U;
    msg.op = 110U;

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
    msg.setTimeStamp(0.5380912806696099);
    msg.setSource(7580U);
    msg.setSourceEntity(176U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(202U);
    msg.id = 138U;
    msg.op = 217U;

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
    msg.setTimeStamp(0.36501810838919024);
    msg.setSource(41590U);
    msg.setSourceEntity(36U);
    msg.setDestination(25140U);
    msg.setDestinationEntity(88U);
    msg.id = 96U;
    msg.op = 32U;

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
    msg.setTimeStamp(0.2720188004968217);
    msg.setSource(60665U);
    msg.setSourceEntity(64U);
    msg.setDestination(54033U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.9758568770285113;
    msg.lon = 0.6252089129740133;
    msg.height = 0.8086447190097518;
    msg.x = 0.12303480965536306;
    msg.y = 0.6865121468575305;
    msg.z = 0.16615094847120215;
    msg.phi = 0.29329263780904713;
    msg.theta = 0.021277328114326144;
    msg.psi = 0.2876035096248494;
    msg.u = 0.0737721704896408;
    msg.v = 0.661967275308724;
    msg.w = 0.26832518266455374;
    msg.vx = 0.686383846653163;
    msg.vy = 0.1177355348652207;
    msg.vz = 0.5614805424889642;
    msg.p = 0.14936650155694875;
    msg.q = 0.5645857211106412;
    msg.r = 0.25706478863990734;
    msg.depth = 0.4073875148484567;
    msg.alt = 0.5933565804884604;

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
    msg.setTimeStamp(0.31770039953421914);
    msg.setSource(61151U);
    msg.setSourceEntity(146U);
    msg.setDestination(21144U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.44285395311069575;
    msg.lon = 0.7364974485838154;
    msg.height = 0.4346339297753312;
    msg.x = 0.9868240383187694;
    msg.y = 0.8150358753739346;
    msg.z = 0.3234512546127766;
    msg.phi = 0.7548466328464171;
    msg.theta = 0.13711281588652757;
    msg.psi = 0.05986430086304184;
    msg.u = 0.6665044624876186;
    msg.v = 0.5823804006096479;
    msg.w = 0.8093892420705243;
    msg.vx = 0.6807151022803396;
    msg.vy = 0.7022185535909314;
    msg.vz = 0.5749422848647936;
    msg.p = 0.13538605210011256;
    msg.q = 0.8833473834743918;
    msg.r = 0.34466319125084144;
    msg.depth = 0.832961348572531;
    msg.alt = 0.6735245364729725;

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
    msg.setTimeStamp(0.5734968708113803);
    msg.setSource(55317U);
    msg.setSourceEntity(59U);
    msg.setDestination(57463U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.4973846435259984;
    msg.lon = 0.7746321445312263;
    msg.height = 0.9976731550715925;
    msg.x = 0.004249772970583265;
    msg.y = 0.986715190602478;
    msg.z = 0.9494310742581374;
    msg.phi = 0.7193538651086931;
    msg.theta = 0.8487896683878149;
    msg.psi = 0.3379133162121758;
    msg.u = 0.8447113528620048;
    msg.v = 0.4141216870510924;
    msg.w = 0.6066142823563633;
    msg.vx = 0.7136774694767134;
    msg.vy = 0.3006349945135296;
    msg.vz = 0.024056095169437963;
    msg.p = 0.9615075776925709;
    msg.q = 0.5067422818660823;
    msg.r = 0.8885981898791506;
    msg.depth = 0.8428574838458562;
    msg.alt = 0.9196664606427997;

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
    msg.setTimeStamp(0.8849367401934781);
    msg.setSource(48220U);
    msg.setSourceEntity(244U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(20U);
    msg.x = 0.5601833899900963;
    msg.y = 0.05449529117909313;
    msg.z = 0.9720130423916661;

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
    msg.setTimeStamp(0.4002428279937632);
    msg.setSource(997U);
    msg.setSourceEntity(103U);
    msg.setDestination(34932U);
    msg.setDestinationEntity(61U);
    msg.x = 0.7453111817597876;
    msg.y = 0.2838859085854897;
    msg.z = 0.2734682293473636;

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
    msg.setTimeStamp(0.7205885264277614);
    msg.setSource(2309U);
    msg.setSourceEntity(0U);
    msg.setDestination(56007U);
    msg.setDestinationEntity(203U);
    msg.x = 0.28307209464817085;
    msg.y = 0.6881445221785697;
    msg.z = 0.348939644629906;

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
    msg.setTimeStamp(0.5120080791209822);
    msg.setSource(38265U);
    msg.setSourceEntity(56U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9324430826252936;

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
    msg.setTimeStamp(0.3893121037021703);
    msg.setSource(63196U);
    msg.setSourceEntity(100U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(58U);
    msg.value = 0.45490398995816506;

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
    msg.setTimeStamp(0.43654668719965384);
    msg.setSource(48691U);
    msg.setSourceEntity(32U);
    msg.setDestination(56268U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7525753349230918;

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
    msg.setTimeStamp(0.3424588258826152);
    msg.setSource(37023U);
    msg.setSourceEntity(206U);
    msg.setDestination(59489U);
    msg.setDestinationEntity(77U);
    msg.value = 0.2995623959643735;

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
    msg.setTimeStamp(0.9874178191044475);
    msg.setSource(54265U);
    msg.setSourceEntity(48U);
    msg.setDestination(46440U);
    msg.setDestinationEntity(18U);
    msg.value = 0.45797222889884925;

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
    msg.setTimeStamp(0.523983205020021);
    msg.setSource(176U);
    msg.setSourceEntity(41U);
    msg.setDestination(37586U);
    msg.setDestinationEntity(108U);
    msg.value = 0.42592147138987424;

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
    msg.setTimeStamp(0.5890407706099218);
    msg.setSource(18554U);
    msg.setSourceEntity(34U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(43U);
    msg.x = 0.258287984163027;
    msg.y = 0.9471500101766671;
    msg.z = 0.7983596932770042;
    msg.phi = 0.5397793082482744;
    msg.theta = 0.6522587873686926;
    msg.psi = 0.396807037388473;
    msg.p = 0.5850673188665154;
    msg.q = 0.40971979965506156;
    msg.r = 0.417736369788392;
    msg.u = 0.012922415453348046;
    msg.v = 0.1315892174699148;
    msg.w = 0.9654583165494339;
    msg.bias_psi = 0.8386537858387729;
    msg.bias_r = 0.3985857415829742;

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
    msg.setTimeStamp(0.0003906797941779505);
    msg.setSource(49677U);
    msg.setSourceEntity(197U);
    msg.setDestination(42306U);
    msg.setDestinationEntity(240U);
    msg.x = 0.3789552077529825;
    msg.y = 0.9636751838446527;
    msg.z = 0.029432886036467765;
    msg.phi = 0.5824794562566149;
    msg.theta = 0.9156779626567504;
    msg.psi = 0.6915419627034074;
    msg.p = 0.1973325419923032;
    msg.q = 0.6220166956255464;
    msg.r = 0.433339650422611;
    msg.u = 0.6334368912964543;
    msg.v = 0.46465575309344687;
    msg.w = 0.04749796390397487;
    msg.bias_psi = 0.17956451796669226;
    msg.bias_r = 0.7436435549130479;

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
    msg.setTimeStamp(0.7978200898201301);
    msg.setSource(845U);
    msg.setSourceEntity(24U);
    msg.setDestination(16678U);
    msg.setDestinationEntity(76U);
    msg.x = 0.4644579280892517;
    msg.y = 0.04526130183478205;
    msg.z = 0.2987746007271366;
    msg.phi = 0.8520544658548048;
    msg.theta = 0.45756204440135095;
    msg.psi = 0.2539922678669586;
    msg.p = 0.23314690357732848;
    msg.q = 0.5664712879483256;
    msg.r = 0.6176320534340046;
    msg.u = 0.011644737435373531;
    msg.v = 0.26566703930613944;
    msg.w = 0.41712772789320085;
    msg.bias_psi = 0.7907635182978006;
    msg.bias_r = 0.5755722733129515;

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
    msg.setTimeStamp(0.41993648991345656);
    msg.setSource(63958U);
    msg.setSourceEntity(97U);
    msg.setDestination(65278U);
    msg.setDestinationEntity(126U);
    msg.bias_psi = 0.6482018976088654;
    msg.bias_r = 0.8476318915343085;
    msg.cog = 0.01336199291488982;
    msg.cyaw = 0.7850575982390234;
    msg.lbl_rej_level = 0.06780417247104298;
    msg.gps_rej_level = 0.8157669153327385;
    msg.custom_x = 0.5872959215640098;
    msg.custom_y = 0.3233285216769396;
    msg.custom_z = 0.6697583831679796;

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
    msg.setTimeStamp(0.8256118102081068);
    msg.setSource(11043U);
    msg.setSourceEntity(89U);
    msg.setDestination(10020U);
    msg.setDestinationEntity(105U);
    msg.bias_psi = 0.8741859814604744;
    msg.bias_r = 0.7558135357708463;
    msg.cog = 0.6475789712101747;
    msg.cyaw = 0.15343957520610163;
    msg.lbl_rej_level = 0.05366585986715844;
    msg.gps_rej_level = 0.26492667464305997;
    msg.custom_x = 0.5435687115630558;
    msg.custom_y = 0.35752644886717;
    msg.custom_z = 0.4186910678643333;

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
    msg.setTimeStamp(0.8673049597808378);
    msg.setSource(9906U);
    msg.setSourceEntity(28U);
    msg.setDestination(38208U);
    msg.setDestinationEntity(30U);
    msg.bias_psi = 0.7765129306175909;
    msg.bias_r = 0.47543018937445003;
    msg.cog = 0.6090370478102717;
    msg.cyaw = 0.7417538641005462;
    msg.lbl_rej_level = 0.20484300468571426;
    msg.gps_rej_level = 0.42448183022586805;
    msg.custom_x = 0.593297872953575;
    msg.custom_y = 0.5579370715454094;
    msg.custom_z = 0.5432269389561973;

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
    msg.setTimeStamp(0.8911915084954299);
    msg.setSource(2340U);
    msg.setSourceEntity(252U);
    msg.setDestination(7500U);
    msg.setDestinationEntity(34U);
    msg.utc_time = 0.36109902115541637;
    msg.reason = 66U;

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
    msg.setTimeStamp(0.15356147224011552);
    msg.setSource(36923U);
    msg.setSourceEntity(8U);
    msg.setDestination(8216U);
    msg.setDestinationEntity(53U);
    msg.utc_time = 0.7669677465632582;
    msg.reason = 136U;

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
    msg.setTimeStamp(0.9161800875015527);
    msg.setSource(12535U);
    msg.setSourceEntity(8U);
    msg.setDestination(15391U);
    msg.setDestinationEntity(228U);
    msg.utc_time = 0.5174257299602617;
    msg.reason = 24U;

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
    msg.setTimeStamp(0.25256299139224214);
    msg.setSource(8036U);
    msg.setSourceEntity(195U);
    msg.setDestination(3197U);
    msg.setDestinationEntity(56U);
    msg.id = 97U;
    msg.range = 0.3114896747383017;
    msg.acceptance = 54U;

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
    msg.setTimeStamp(0.8498153198290231);
    msg.setSource(32782U);
    msg.setSourceEntity(179U);
    msg.setDestination(40685U);
    msg.setDestinationEntity(22U);
    msg.id = 195U;
    msg.range = 0.7098118971778955;
    msg.acceptance = 174U;

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
    msg.setTimeStamp(0.08413519936830882);
    msg.setSource(22477U);
    msg.setSourceEntity(97U);
    msg.setDestination(51370U);
    msg.setDestinationEntity(96U);
    msg.id = 14U;
    msg.range = 0.2427523766840325;
    msg.acceptance = 244U;

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
    msg.setTimeStamp(0.9029923186154803);
    msg.setSource(17854U);
    msg.setSourceEntity(93U);
    msg.setDestination(43609U);
    msg.setDestinationEntity(50U);
    msg.type = 33U;
    msg.reason = 8U;
    msg.value = 0.29701367497990394;
    msg.timestep = 0.11104215384617411;

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
    msg.setTimeStamp(0.26327354772737044);
    msg.setSource(32147U);
    msg.setSourceEntity(135U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(152U);
    msg.type = 83U;
    msg.reason = 143U;
    msg.value = 0.23082151506043036;
    msg.timestep = 0.6959394658415455;

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
    msg.setTimeStamp(0.02199356690419385);
    msg.setSource(53724U);
    msg.setSourceEntity(134U);
    msg.setDestination(50383U);
    msg.setDestinationEntity(164U);
    msg.type = 232U;
    msg.reason = 80U;
    msg.value = 0.5145631012563261;
    msg.timestep = 0.8194278795941946;

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
    msg.setTimeStamp(0.23077579237436296);
    msg.setSource(23615U);
    msg.setSourceEntity(112U);
    msg.setDestination(36738U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.9178558348666924);
    msg.setSource(14006U);
    msg.setSourceEntity(116U);
    msg.setDestination(59330U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.11621437586212646);
    msg.setSource(63923U);
    msg.setSourceEntity(94U);
    msg.setDestination(22140U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.5186573198970403);
    msg.setSource(34530U);
    msg.setSourceEntity(251U);
    msg.setDestination(37852U);
    msg.setDestinationEntity(137U);
    msg.beacon.assign("ZVFRCWIGEONXPDWGBFPQIAVSMKLXPMPUTBXZZVFJNSDBCTLLSZLXHEHKKRUYCSMIZXMKLWCMBPXCOPIRFMWMDLXHWVWCJGP");
    msg.x = 0.7995592851497255;
    msg.y = 0.18448468860181277;
    msg.depth = 0.6625418535732701;
    msg.var_x = 0.4913918488620307;
    msg.var_y = 0.14877401964507375;

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
    msg.setTimeStamp(0.39877754048789493);
    msg.setSource(35542U);
    msg.setSourceEntity(11U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(174U);
    msg.beacon.assign("WMVYGVAIASPJTMFZRALLVQVTTORLWTLAPXXIBCXTMSKLIHIQLOUHYETLIFRSBYKALDNKCXORYOFOMKSWCFPBPEBBJSYJROVGASPCMXUZUZZZBBVSUZJNZCBDYLKWJHCQHRNCHOSHCIEGSHJQIPQNOGYNJNAENUDQJVOSFTGEMQYXOIWBPUDDEFBRKHXQJHGADGPGEULKDWKCNEWTMVKHZCAIYJPMZGUWTFUPERVEFKQIWWQNAXNRXRVD");
    msg.x = 0.3898179493945012;
    msg.y = 0.5894461543641817;
    msg.depth = 0.1784058811063537;
    msg.var_x = 0.5289631118187472;
    msg.var_y = 0.8296924846494093;

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
    msg.setTimeStamp(0.016423654495229978);
    msg.setSource(64616U);
    msg.setSourceEntity(63U);
    msg.setDestination(55207U);
    msg.setDestinationEntity(211U);
    msg.beacon.assign("TDGAHGGXOZQYVMOSFRDQLPXMXDGQCQOKMQKISTDFEUAXCBTWJBWZMXKXNVZSZOSDJTXEMIGKAFVHMJZRYBJZUJNWJTCTVVBJUGAALKOCKTRHBCNQNFLRHHHAGPFGURFEECLQRRXDDUWHALOCOCWYBENEOMEGPYJIMNAVRXYUWKPWTUIUVZYNQKBWRFPBRLISIMATGCEBAHJ");
    msg.x = 0.9319333550600308;
    msg.y = 0.23469408051510787;
    msg.depth = 0.39721794175711544;
    msg.var_x = 0.45606377368918927;
    msg.var_y = 0.249293150690436;

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
    msg.setTimeStamp(0.35326104589789076);
    msg.setSource(65347U);
    msg.setSourceEntity(242U);
    msg.setDestination(37563U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5334238069802093;

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
    msg.setTimeStamp(0.9030642141363558);
    msg.setSource(55459U);
    msg.setSourceEntity(43U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(135U);
    msg.value = 0.5547016569816458;

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
    msg.setTimeStamp(0.4311292002710754);
    msg.setSource(11818U);
    msg.setSourceEntity(228U);
    msg.setDestination(51030U);
    msg.setDestinationEntity(60U);
    msg.value = 0.4605281272553504;

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
    msg.setTimeStamp(0.44388922718158996);
    msg.setSource(16782U);
    msg.setSourceEntity(162U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(97U);
    msg.value = 0.47201952491809207;
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
    msg.setTimeStamp(0.7461069565532611);
    msg.setSource(53590U);
    msg.setSourceEntity(129U);
    msg.setDestination(13794U);
    msg.setDestinationEntity(149U);
    msg.value = 0.6959018190660725;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.7075178076780931);
    msg.setSource(43457U);
    msg.setSourceEntity(48U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(184U);
    msg.value = 0.3197121471176997;
    msg.z_units = 250U;

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
    msg.setTimeStamp(0.4142596535996488);
    msg.setSource(38011U);
    msg.setSourceEntity(21U);
    msg.setDestination(57569U);
    msg.setDestinationEntity(66U);
    msg.value = 0.1382503207381175;
    msg.speed_units = 51U;

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
    msg.setTimeStamp(0.694931193200448);
    msg.setSource(26113U);
    msg.setSourceEntity(149U);
    msg.setDestination(43003U);
    msg.setDestinationEntity(146U);
    msg.value = 0.6880241332133125;
    msg.speed_units = 61U;

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
    msg.setTimeStamp(0.7443919041118194);
    msg.setSource(55329U);
    msg.setSourceEntity(164U);
    msg.setDestination(17176U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8261626946779737;
    msg.speed_units = 51U;

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
    msg.setTimeStamp(0.18307108945303197);
    msg.setSource(45045U);
    msg.setSourceEntity(81U);
    msg.setDestination(20203U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9532940948552953;

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
    msg.setTimeStamp(0.7910816799753131);
    msg.setSource(48278U);
    msg.setSourceEntity(114U);
    msg.setDestination(9709U);
    msg.setDestinationEntity(172U);
    msg.value = 0.20828199900923372;

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
    msg.setTimeStamp(0.8046316175123666);
    msg.setSource(32071U);
    msg.setSourceEntity(221U);
    msg.setDestination(63137U);
    msg.setDestinationEntity(174U);
    msg.value = 0.7208854113427472;

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
    msg.setTimeStamp(0.41271132021508694);
    msg.setSource(53031U);
    msg.setSourceEntity(150U);
    msg.setDestination(26711U);
    msg.setDestinationEntity(14U);
    msg.value = 0.38662912307427766;

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
    msg.setTimeStamp(0.07575505076773381);
    msg.setSource(52958U);
    msg.setSourceEntity(241U);
    msg.setDestination(726U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6892002973337377;

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
    msg.setTimeStamp(0.6248077529190513);
    msg.setSource(25146U);
    msg.setSourceEntity(217U);
    msg.setDestination(10675U);
    msg.setDestinationEntity(191U);
    msg.value = 0.529595054805689;

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
    msg.setTimeStamp(0.01130688941095026);
    msg.setSource(14173U);
    msg.setSourceEntity(23U);
    msg.setDestination(50771U);
    msg.setDestinationEntity(183U);
    msg.value = 0.041434841510372244;

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
    msg.setTimeStamp(0.25772795136847015);
    msg.setSource(23005U);
    msg.setSourceEntity(15U);
    msg.setDestination(19474U);
    msg.setDestinationEntity(62U);
    msg.value = 0.14230510882770053;

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
    msg.setTimeStamp(0.5914151907401951);
    msg.setSource(7557U);
    msg.setSourceEntity(76U);
    msg.setDestination(36004U);
    msg.setDestinationEntity(217U);
    msg.value = 0.01227000845611137;

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
    msg.setTimeStamp(0.06756576730358643);
    msg.setSource(17688U);
    msg.setSourceEntity(193U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(3U);
    msg.start_lat = 0.07280199286377376;
    msg.start_lon = 0.609865784262;
    msg.start_z = 0.42438046042660416;
    msg.start_z_units = 20U;
    msg.end_lat = 0.6172911336470883;
    msg.end_lon = 0.8621665962749879;
    msg.end_z = 0.6746635588417491;
    msg.end_z_units = 187U;
    msg.speed = 0.08307815618994052;
    msg.speed_units = 88U;
    msg.lradius = 0.2643256142151005;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.013619203790125711);
    msg.setSource(53445U);
    msg.setSourceEntity(161U);
    msg.setDestination(758U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.09394806001881517;
    msg.start_lon = 0.806446438154144;
    msg.start_z = 0.06624238862085152;
    msg.start_z_units = 131U;
    msg.end_lat = 0.3685562530000932;
    msg.end_lon = 0.484044863463307;
    msg.end_z = 0.8003692025858544;
    msg.end_z_units = 47U;
    msg.speed = 0.8487772696839665;
    msg.speed_units = 96U;
    msg.lradius = 0.20601309698552095;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.8001143710560591);
    msg.setSource(8102U);
    msg.setSourceEntity(70U);
    msg.setDestination(51245U);
    msg.setDestinationEntity(149U);
    msg.start_lat = 0.8858682192845326;
    msg.start_lon = 0.8168328752292178;
    msg.start_z = 0.49408725030209766;
    msg.start_z_units = 203U;
    msg.end_lat = 0.629617436677696;
    msg.end_lon = 0.09039431788698293;
    msg.end_z = 0.6206118546185919;
    msg.end_z_units = 111U;
    msg.speed = 0.6748404918210634;
    msg.speed_units = 22U;
    msg.lradius = 0.4671727398751916;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.9955414013142083);
    msg.setSource(40346U);
    msg.setSourceEntity(103U);
    msg.setDestination(5638U);
    msg.setDestinationEntity(32U);
    msg.x = 0.44159222599716896;
    msg.y = 0.51501471945236;
    msg.z = 0.5369642910455468;
    msg.k = 0.05625142764676705;
    msg.m = 0.26647162413954295;
    msg.n = 0.6177234631620666;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.32155032971897923);
    msg.setSource(26493U);
    msg.setSourceEntity(224U);
    msg.setDestination(44852U);
    msg.setDestinationEntity(47U);
    msg.x = 0.7832713687437924;
    msg.y = 0.7108795344028414;
    msg.z = 0.6308116327840653;
    msg.k = 0.7881553703032036;
    msg.m = 0.8624363547647351;
    msg.n = 0.5744681529246825;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.5329433584971768);
    msg.setSource(62262U);
    msg.setSourceEntity(60U);
    msg.setDestination(37570U);
    msg.setDestinationEntity(95U);
    msg.x = 0.9187832295680397;
    msg.y = 0.345066362555987;
    msg.z = 0.4646178256096043;
    msg.k = 0.018925462625998923;
    msg.m = 0.09403080512804896;
    msg.n = 0.5885664520866235;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.6690093607596496);
    msg.setSource(7646U);
    msg.setSourceEntity(31U);
    msg.setDestination(22213U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8042682686825623;

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
    msg.setTimeStamp(0.9374312230017199);
    msg.setSource(11989U);
    msg.setSourceEntity(54U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(250U);
    msg.value = 0.0022629817869975755;

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
    msg.setTimeStamp(0.7730697600061068);
    msg.setSource(38965U);
    msg.setSourceEntity(182U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(42U);
    msg.value = 0.6241789625061228;

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
    msg.setTimeStamp(0.3857256480508131);
    msg.setSource(33832U);
    msg.setSourceEntity(5U);
    msg.setDestination(12468U);
    msg.setDestinationEntity(227U);
    msg.u = 0.562510551055331;
    msg.v = 0.951837726063992;
    msg.w = 0.20475640577283494;
    msg.p = 0.8154025209711688;
    msg.q = 0.5592853933367988;
    msg.r = 0.15737521137244825;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.6519608286631426);
    msg.setSource(49358U);
    msg.setSourceEntity(207U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(119U);
    msg.u = 0.6827892777133194;
    msg.v = 0.5093960969890858;
    msg.w = 0.5295627511072183;
    msg.p = 0.763150714723448;
    msg.q = 0.006614784469788915;
    msg.r = 0.2743488280430534;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.35192154650212404);
    msg.setSource(11038U);
    msg.setSourceEntity(242U);
    msg.setDestination(46467U);
    msg.setDestinationEntity(28U);
    msg.u = 0.10918804521443581;
    msg.v = 0.28517403057547586;
    msg.w = 0.4445272668487341;
    msg.p = 0.9644434766876103;
    msg.q = 0.09251464500073625;
    msg.r = 0.4366927393674094;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.4803879215259703);
    msg.setSource(47135U);
    msg.setSourceEntity(91U);
    msg.setDestination(36275U);
    msg.setDestinationEntity(254U);
    msg.start_lat = 0.2382164290327231;
    msg.start_lon = 0.8590495142554191;
    msg.start_z = 0.39805006020741285;
    msg.start_z_units = 174U;
    msg.end_lat = 0.25123472994301266;
    msg.end_lon = 0.8393011999441692;
    msg.end_z = 0.8992531649839014;
    msg.end_z_units = 81U;
    msg.lradius = 0.6425195354846364;
    msg.flags = 142U;
    msg.x = 0.8492392400859755;
    msg.y = 0.12237756216526596;
    msg.z = 0.9251051993289175;
    msg.vx = 0.2785066836929787;
    msg.vy = 0.3686336969664379;
    msg.vz = 0.02243024009449235;
    msg.course_error = 0.07433145957887666;
    msg.eta = 51950U;

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
    msg.setTimeStamp(0.2586141370832741);
    msg.setSource(21255U);
    msg.setSourceEntity(239U);
    msg.setDestination(52475U);
    msg.setDestinationEntity(80U);
    msg.start_lat = 0.5046846053575026;
    msg.start_lon = 0.5778785274632251;
    msg.start_z = 0.3691466565561612;
    msg.start_z_units = 185U;
    msg.end_lat = 0.8247356853240089;
    msg.end_lon = 0.798887385591067;
    msg.end_z = 0.00922278375884178;
    msg.end_z_units = 9U;
    msg.lradius = 0.1452288876868162;
    msg.flags = 109U;
    msg.x = 0.7642479615632266;
    msg.y = 0.840031711487759;
    msg.z = 0.9049688858830761;
    msg.vx = 0.6625553689994221;
    msg.vy = 0.9306573044046214;
    msg.vz = 0.5708578699402942;
    msg.course_error = 0.4990544202133893;
    msg.eta = 57667U;

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
    msg.setTimeStamp(0.6393622330562792);
    msg.setSource(24791U);
    msg.setSourceEntity(195U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(172U);
    msg.start_lat = 0.008954747036648447;
    msg.start_lon = 0.1511006085560792;
    msg.start_z = 0.39058788309030734;
    msg.start_z_units = 11U;
    msg.end_lat = 0.8227288167947997;
    msg.end_lon = 0.6113029941120085;
    msg.end_z = 0.6854617074210695;
    msg.end_z_units = 60U;
    msg.lradius = 0.5132173413351269;
    msg.flags = 19U;
    msg.x = 0.8000237697912811;
    msg.y = 0.19906538337883561;
    msg.z = 0.5984464351762412;
    msg.vx = 0.31391218905292695;
    msg.vy = 0.6816093585022654;
    msg.vz = 0.11600094532821026;
    msg.course_error = 0.07284005771532531;
    msg.eta = 4828U;

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
    msg.setTimeStamp(0.451185520921782);
    msg.setSource(26260U);
    msg.setSourceEntity(183U);
    msg.setDestination(18001U);
    msg.setDestinationEntity(120U);
    msg.k = 0.8653363005000353;
    msg.m = 0.9027050798381924;
    msg.n = 0.013336293914071096;

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
    msg.setTimeStamp(0.3277762608954742);
    msg.setSource(58052U);
    msg.setSourceEntity(62U);
    msg.setDestination(5706U);
    msg.setDestinationEntity(152U);
    msg.k = 0.6959561680973348;
    msg.m = 0.8183535250270024;
    msg.n = 0.004828354486525521;

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
    msg.setTimeStamp(0.038905007745427156);
    msg.setSource(47291U);
    msg.setSourceEntity(156U);
    msg.setDestination(50218U);
    msg.setDestinationEntity(132U);
    msg.k = 0.7471099374714697;
    msg.m = 0.1372973267840354;
    msg.n = 0.5795359890817362;

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
    msg.setTimeStamp(0.5711822770376161);
    msg.setSource(32896U);
    msg.setSourceEntity(228U);
    msg.setDestination(27969U);
    msg.setDestinationEntity(152U);
    msg.p = 0.21105554992532072;
    msg.i = 0.04648230014383503;
    msg.d = 0.4707993075119584;
    msg.a = 0.18106264982405407;

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
    msg.setTimeStamp(0.9663637268876508);
    msg.setSource(1090U);
    msg.setSourceEntity(133U);
    msg.setDestination(1925U);
    msg.setDestinationEntity(246U);
    msg.p = 0.17391139712429315;
    msg.i = 0.6621382944482551;
    msg.d = 0.3203222413474264;
    msg.a = 0.8055472236284721;

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
    msg.setTimeStamp(0.32269589033760027);
    msg.setSource(29502U);
    msg.setSourceEntity(102U);
    msg.setDestination(56104U);
    msg.setDestinationEntity(161U);
    msg.p = 0.4696436618675316;
    msg.i = 0.8351072185442119;
    msg.d = 0.39841653581402514;
    msg.a = 0.9872841247385696;

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
    msg.setTimeStamp(0.8749208289273236);
    msg.setSource(10736U);
    msg.setSourceEntity(47U);
    msg.setDestination(19268U);
    msg.setDestinationEntity(188U);
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
    msg.setTimeStamp(0.08485636501118354);
    msg.setSource(48059U);
    msg.setSourceEntity(140U);
    msg.setDestination(39023U);
    msg.setDestinationEntity(39U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.25243460195594136);
    msg.setSource(26045U);
    msg.setSourceEntity(114U);
    msg.setDestination(52354U);
    msg.setDestinationEntity(126U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.36902875389797485);
    msg.setSource(3234U);
    msg.setSourceEntity(29U);
    msg.setDestination(59115U);
    msg.setDestinationEntity(58U);
    msg.timeout = 50787U;
    msg.lat = 0.5367881566331144;
    msg.lon = 0.8879896803524979;
    msg.z = 0.7472657275461402;
    msg.z_units = 157U;
    msg.speed = 0.15022827773345448;
    msg.speed_units = 145U;
    msg.roll = 0.8744747257587475;
    msg.pitch = 0.5254723022100786;
    msg.yaw = 0.8206840218576265;
    msg.custom.assign("WHDKVEHDOAUHQFZPCKYDYIPTBKULABBZDLJOAYAFCOPOMAGNLTNIJKIRGLPWWRDFMGEIQXCYEACMJCSCDZHNTEQQJUWDJOSEMRAEGFYDWBTZFEWDCHZPYIBMATGJUWLMZLUSSIXMBNTWXNYRPJWLZFUQYPXYUKQSLFTHHKGOCNLAHIXSKHBUQASENQJEUVPPKTSQS");

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
    msg.setTimeStamp(0.6379473584200752);
    msg.setSource(51526U);
    msg.setSourceEntity(2U);
    msg.setDestination(52079U);
    msg.setDestinationEntity(180U);
    msg.timeout = 25584U;
    msg.lat = 0.31843093845940496;
    msg.lon = 0.7888385316343984;
    msg.z = 0.37413983091863723;
    msg.z_units = 101U;
    msg.speed = 0.20805355153256178;
    msg.speed_units = 75U;
    msg.roll = 0.9360313060883912;
    msg.pitch = 0.24878811426457104;
    msg.yaw = 0.4235373627596116;
    msg.custom.assign("GPWWYCIBFQWQPRNKEZSOEXCXHDWWLLWKEAJGCZFCHKEWYXAKHHMXZAFQMKTVLTODCABORSARTSMOMITHCXUPOEPEZSFIZLZLJSUOPQFPNIYYIKQZJWUBUGXGTYFNZBENKFZBBDERNJZVKJNULGBCVARXUYFTVKIUAXLNLPEWDNPHTCHMGMJXSQLBHRJOOQIDUAVYMSVMR");

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
    msg.setTimeStamp(0.11130198485869325);
    msg.setSource(19386U);
    msg.setSourceEntity(19U);
    msg.setDestination(3615U);
    msg.setDestinationEntity(242U);
    msg.timeout = 12547U;
    msg.lat = 0.22486309576088193;
    msg.lon = 0.5837859785958933;
    msg.z = 0.9504152569818886;
    msg.z_units = 175U;
    msg.speed = 0.7596532639454023;
    msg.speed_units = 102U;
    msg.roll = 0.7998752902109498;
    msg.pitch = 0.48099816344526614;
    msg.yaw = 0.7094096490508447;
    msg.custom.assign("KDQOOQVZVWWNQIWONTSFCYCBVMGJNHWSCYTSDDLIENYWBOQBKZREZUOAWDXYRSTUGUKSUBSXARFDRMCYKWIBAHYEMYHHXZMCNARBGPPPKBTHLHUWLVTIJYODQP");

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
    msg.setTimeStamp(0.5758698728939127);
    msg.setSource(3888U);
    msg.setSourceEntity(172U);
    msg.setDestination(58864U);
    msg.setDestinationEntity(51U);
    msg.timeout = 36262U;
    msg.lat = 0.054841460403080244;
    msg.lon = 0.06886694634125579;
    msg.z = 0.24806745309140743;
    msg.z_units = 14U;
    msg.speed = 0.7934283494520827;
    msg.speed_units = 167U;
    msg.duration = 18863U;
    msg.radius = 0.4128242119112435;
    msg.flags = 141U;
    msg.custom.assign("GSAGIHTRAYPCYMGDXGMWDRGRWGFUTGTLVLFTSXBYGKVKUYPZ");

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
    msg.setTimeStamp(0.46477485000374896);
    msg.setSource(61260U);
    msg.setSourceEntity(78U);
    msg.setDestination(25100U);
    msg.setDestinationEntity(222U);
    msg.timeout = 8725U;
    msg.lat = 0.13584743406166166;
    msg.lon = 0.6458005063265463;
    msg.z = 0.2347899007413029;
    msg.z_units = 109U;
    msg.speed = 0.25727297898198775;
    msg.speed_units = 239U;
    msg.duration = 14449U;
    msg.radius = 0.6186800370819513;
    msg.flags = 27U;
    msg.custom.assign("QVORQFVKVRJXEGEMPVUXQAISSOVYPFOLQYSATEBMWDFGWXRKCAYNTUOKEEWUJBFWHRYZCMMAGATQESQFJBNDZRTAHWXNKJSLTVBJNGPPCRQXUNHZBZOKTDVIMRFCHZJSWWASCNLZFUNRGUIGKGDNLICZRBKLKOBFPGA");

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
    msg.setTimeStamp(0.9052944834379505);
    msg.setSource(6971U);
    msg.setSourceEntity(41U);
    msg.setDestination(60061U);
    msg.setDestinationEntity(182U);
    msg.timeout = 35436U;
    msg.lat = 0.08507199470042481;
    msg.lon = 0.30252728225205505;
    msg.z = 0.9541427875302692;
    msg.z_units = 240U;
    msg.speed = 0.09926313367012396;
    msg.speed_units = 18U;
    msg.duration = 26841U;
    msg.radius = 0.7650767433235396;
    msg.flags = 148U;
    msg.custom.assign("AYWTZHCGQVOMNMBXLZLRNNQBTNXGNNHRFJIOTCOXBQKTYQYXOUYSNBFVHZGDUWAWGHKWUMAVSMXHSDIRFRVFFTYMCZATIWRPIXJJEGSDUJMUVZIPQYFKLCEWDGCYCDIOUYYKAGPEQSARPLDFIFBJZLIMOQTJPVBRFQIOATXWKBEKTDPUGCJECGKLSSNYWUSHCPNLIXPBDOOALPJMVVREHMEZ");

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
    msg.setTimeStamp(0.7975850686148505);
    msg.setSource(50898U);
    msg.setSourceEntity(222U);
    msg.setDestination(54630U);
    msg.setDestinationEntity(117U);
    msg.custom.assign("TTDUGOHMNTRKJAQIRXCLMYGURVSKTFADFPNEVEYBSXAKEFHGCPBLQVIWDKXNMDCOJEKJNRGCGVLJJSKYPLQPWAYDHXLBETYVXXQHODYOOADRNMWJOZABBAZZCMMGFTUCYFUTHZDWKNTGDPUYBIZRFZPVAXAIXKTLPRIGEQHZQLSEWUKEXCSLTOSZVGQI");

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
    msg.setTimeStamp(0.6617936862808099);
    msg.setSource(64292U);
    msg.setSourceEntity(40U);
    msg.setDestination(32347U);
    msg.setDestinationEntity(128U);
    msg.custom.assign("UCVJSNEDSGMKCAVITEBVGQUNYTIPBUYQLNBYOLECDFHXOHHLNYKEPFPWUZ");

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
    msg.setTimeStamp(0.4859726064606532);
    msg.setSource(47732U);
    msg.setSourceEntity(224U);
    msg.setDestination(2143U);
    msg.setDestinationEntity(8U);
    msg.custom.assign("APMGMIERAYRXLQVWEKVDBHOWWPFHKTGKHUCVNKLLIJRHSDJSJWEYQFPNDTEZQBKZUAHAWNTYXSIHHTOQPIDGVMXSSZUAMNBOBCFXNXMIVDXGRLYEAGXYZCCYZZRLINEATBXDVFIWUDLFRCOLJHTEFHBWUZXPCDDNQIY");

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
    msg.setTimeStamp(0.23360111522861893);
    msg.setSource(7491U);
    msg.setSourceEntity(55U);
    msg.setDestination(50502U);
    msg.setDestinationEntity(38U);
    msg.timeout = 7440U;
    msg.lat = 0.38961592183229976;
    msg.lon = 0.5135168845380833;
    msg.z = 0.23001030491535968;
    msg.z_units = 128U;
    msg.duration = 44195U;
    msg.speed = 0.24856235496085788;
    msg.speed_units = 154U;
    msg.type = 149U;
    msg.radius = 0.12940357726471352;
    msg.length = 0.19588925517764078;
    msg.bearing = 0.8205368854560899;
    msg.direction = 50U;
    msg.custom.assign("TGGNXEFDBVTBCLWWAFKBYAPQKNAEBTMJEOIJWCZZRBVOROMMPKCXNUIWSWIEJGIYHVFXWIDLVIJGPXYAAAPPMXDWXZZDSASMUKJZDDLFBHHJIURAEERNZRTVFJKHNJHZWXMLQDNLGSYRFUNHQYASRBHRQCYMRUTUELXZXCOTHUKDXLQCTIMLZNNVVWQGCOLFSPSBYSNCVPVHZPKUTJCBQTMJGODOOUFOPEQKFIBQ");

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
    msg.setTimeStamp(0.8097062998003318);
    msg.setSource(2333U);
    msg.setSourceEntity(203U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(242U);
    msg.timeout = 52225U;
    msg.lat = 0.19118808609189397;
    msg.lon = 0.5464974762453325;
    msg.z = 0.5424246315158212;
    msg.z_units = 233U;
    msg.duration = 47835U;
    msg.speed = 0.6654931465249428;
    msg.speed_units = 43U;
    msg.type = 253U;
    msg.radius = 0.5129490650153322;
    msg.length = 0.40662226916314104;
    msg.bearing = 0.4755116967685131;
    msg.direction = 117U;
    msg.custom.assign("YWHUJUOSTAKZXAFBEMJSILDHKPUHDWGLDYBWQJVAFDBUVIQIMIRULBDBINFNEXUTUFWYTMXCDVYOZTZESKALFSUAOMYPJRALOSXHNSTAVHHXQPKVZOJAPERWVBQPNTFGMYGNHHSGEOGURAZMLODVGVEXPYEERIMDBWDOGCNCYOZWDRLGQHXSBKKEQXGBX");

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
    msg.setTimeStamp(0.5587453355125717);
    msg.setSource(39051U);
    msg.setSourceEntity(155U);
    msg.setDestination(1531U);
    msg.setDestinationEntity(205U);
    msg.timeout = 37505U;
    msg.lat = 0.27791342763083915;
    msg.lon = 0.13891059241605141;
    msg.z = 0.9458664612388856;
    msg.z_units = 202U;
    msg.duration = 5246U;
    msg.speed = 0.9841251637822341;
    msg.speed_units = 58U;
    msg.type = 129U;
    msg.radius = 0.9954738280660959;
    msg.length = 0.3121181607128143;
    msg.bearing = 0.21539918689517212;
    msg.direction = 100U;
    msg.custom.assign("XMKNVBQXHXXVSSMCGCHATBDUDFODHVLWOOZJUHREJWBUOKAMCPOLKNNOMSVUBVEHTRPAIIUQJMIZKLKWLCNKEGROXDFHRZWWBQYTJRSVYVAEBNWCYHJCFPVOGULEGZJQY");

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
    msg.setTimeStamp(0.7877500322701647);
    msg.setSource(61319U);
    msg.setSourceEntity(253U);
    msg.setDestination(35308U);
    msg.setDestinationEntity(127U);
    msg.duration = 49968U;
    msg.custom.assign("SJQZAKRYLPENPUEIIVHXHLYBUOZCYR");

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
    msg.setTimeStamp(0.40548319630928187);
    msg.setSource(21690U);
    msg.setSourceEntity(120U);
    msg.setDestination(8202U);
    msg.setDestinationEntity(38U);
    msg.duration = 65289U;
    msg.custom.assign("QIOKZJDKKTXHRZGQVSBBONLTNJAYZYCYOFCTIKWMXOALPWETMHZFBKAJVKUZOSNAOVBPBAZXWIWSFDKELHQTCEINUVEVXARCSPXCBMDGPUIGGXSVNFVJEOPUYA");

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
    msg.setTimeStamp(0.6268631312183861);
    msg.setSource(56792U);
    msg.setSourceEntity(205U);
    msg.setDestination(7141U);
    msg.setDestinationEntity(238U);
    msg.duration = 4904U;
    msg.custom.assign("ZVEIEUZPRJJJOTWUWBFBVLQMJFVAXRMNXTDIPXFOBWVHGSIDJXPINLMKTLVAMMUXWDCYFHRAYCSYYGFZEMOYIRQGFWUAWMHTDAKRVRMWRSQROFQYCGGZVDUXHXMPNIHBFGDKHFOYEES");

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
    msg.setTimeStamp(0.9729954684806957);
    msg.setSource(15633U);
    msg.setSourceEntity(223U);
    msg.setDestination(9255U);
    msg.setDestinationEntity(127U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.08307642209290977;
    tmp_msg_0.z_units = 194U;
    msg.control.set(tmp_msg_0);
    msg.duration = 65470U;
    msg.custom.assign("AFWMLOOITPOGZWYDXZDAIFNLMOPNKQEOCBTNEKJVIPBLPYSAYPEAKRWIZJRULKJPG");

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
    msg.setTimeStamp(0.4455188748633757);
    msg.setSource(44664U);
    msg.setSourceEntity(42U);
    msg.setDestination(4695U);
    msg.setDestinationEntity(249U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.8869572899809021;
    tmp_msg_0.start_lon = 0.35655872785161846;
    tmp_msg_0.start_z = 0.9023520028739901;
    tmp_msg_0.start_z_units = 177U;
    tmp_msg_0.end_lat = 0.08531245604495974;
    tmp_msg_0.end_lon = 0.06988697863573423;
    tmp_msg_0.end_z = 0.9028319186632744;
    tmp_msg_0.end_z_units = 9U;
    tmp_msg_0.speed = 0.24911310691631305;
    tmp_msg_0.speed_units = 75U;
    tmp_msg_0.lradius = 0.7375183329365017;
    tmp_msg_0.flags = 227U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46373U;
    msg.custom.assign("NQTQHDJVOVFWUPXTQSIVKHFJABPVVZEKOU");

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
    msg.setTimeStamp(0.07285807043727843);
    msg.setSource(13498U);
    msg.setSourceEntity(142U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(37U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.6998436683912247;
    tmp_msg_0.z_units = 153U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23411U;
    msg.custom.assign("KRVDYTONYNYYZLORPEMQVQEJZVYQJUHORUHMQCPFMIIFBSADLSRGUGAHJJMWMSOWBN");

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
    msg.setTimeStamp(0.9477053988411781);
    msg.setSource(48338U);
    msg.setSourceEntity(59U);
    msg.setDestination(53074U);
    msg.setDestinationEntity(213U);
    msg.timeout = 60711U;
    msg.lat = 0.47866117969834854;
    msg.lon = 0.017825644145783914;
    msg.z = 0.46218783732730495;
    msg.z_units = 84U;
    msg.speed = 0.09870189272287211;
    msg.speed_units = 168U;
    msg.bearing = 0.7031978802110844;
    msg.cross_angle = 0.9400810333088928;
    msg.width = 0.6558339252960678;
    msg.length = 0.1799376787519148;
    msg.hstep = 0.8326178880296328;
    msg.coff = 28U;
    msg.alternation = 24U;
    msg.flags = 135U;
    msg.custom.assign("KNHXOUJWQHFPDUANRTDKBEKLZFQJGONHLTSHEBYUSRSGURUBZELACAOLTCVLMBCYHDQZVSENPJBQOCCLWQVIPGIRRKITXZFEVLIWUYBIQKTYTBKWGHMCXEDXWNDAYJIXUGSCQRDIMCTQFEZMYVKOGMVFRBNISTMDYRPQNNDCAVJMHIQJYXGNLYRMPPFVWFZBOJUVZIFUAPGNPEFJSXXMTKTBHXOW");

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
    msg.setTimeStamp(0.2922064012631366);
    msg.setSource(65070U);
    msg.setSourceEntity(254U);
    msg.setDestination(2633U);
    msg.setDestinationEntity(173U);
    msg.timeout = 1544U;
    msg.lat = 0.1029374394276863;
    msg.lon = 0.46347654224078594;
    msg.z = 0.835195494105425;
    msg.z_units = 97U;
    msg.speed = 0.5008535555302212;
    msg.speed_units = 54U;
    msg.bearing = 0.9706160355879622;
    msg.cross_angle = 0.5782325640182151;
    msg.width = 0.3356106403998066;
    msg.length = 0.2823268912128233;
    msg.hstep = 0.44030021165763666;
    msg.coff = 140U;
    msg.alternation = 246U;
    msg.flags = 110U;
    msg.custom.assign("XKRUHBOLDBMSMZQRQWLIHWIBANGVTCQBBVLKTJAIEYYFOWTEOKFFAVQCYDPXDSFVFGHKGXIVPNUVQOXRDWXILDOYJQMTSXURHAHIKBGZUTZTBNJCNJMTLMHEICCIPARPSCXTWARUSMFZBPGDSVMQMJFZEJDBRDSWKIZXUUQPKLVDZZWFSNNCGFPZUXKZYGPOSTEDENAUWJCEGLORVUEQISQNHYOHLRTAGKKJ");

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
    msg.setTimeStamp(0.7195562133583833);
    msg.setSource(29832U);
    msg.setSourceEntity(1U);
    msg.setDestination(35769U);
    msg.setDestinationEntity(81U);
    msg.timeout = 53528U;
    msg.lat = 0.7277523913594531;
    msg.lon = 0.4439376274462189;
    msg.z = 0.5346093200827745;
    msg.z_units = 175U;
    msg.speed = 0.1906630208782477;
    msg.speed_units = 52U;
    msg.bearing = 0.5974846655907337;
    msg.cross_angle = 0.434198027446264;
    msg.width = 0.328715995511519;
    msg.length = 0.06784607449028024;
    msg.hstep = 0.4685462204561256;
    msg.coff = 183U;
    msg.alternation = 163U;
    msg.flags = 154U;
    msg.custom.assign("ZSZCSAPBHIHPMWKVZRJSLDERIVFMCXXLDMDXSLGMMWYKYJMOVVZFVNWVAALUROHREBUFKXYHFPJHEXGVGWKSWSBITPCQNSGYAUJWTGRWDBIUKTGYEBNPJCKGILOIRTTKMMQNHKHWYQOQPVPREXKZUONNQIJFGXJDIHLHEAZZYQDQITBQIUMDXDBJFLCGEPMZCVLFALEEFNHONRUBUTXGLQTOWPKOUPWBFDTDVEOYSRBCCXYRTAZZASUSNYA");

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
    msg.setTimeStamp(0.2630588566059293);
    msg.setSource(48487U);
    msg.setSourceEntity(14U);
    msg.setDestination(59909U);
    msg.setDestinationEntity(11U);
    msg.timeout = 30624U;
    msg.lat = 0.05432777048849258;
    msg.lon = 0.047853178776630645;
    msg.z = 0.4086027593382566;
    msg.z_units = 76U;
    msg.speed = 0.14246551169393906;
    msg.speed_units = 103U;
    msg.custom.assign("ULXJXVCWSYFZEPYEFHIKRGGDSEZFYXTXBXYNHDRXEKAQCVKRJETUGXIJUYEDMPGGORLQAVINMOWIGOITSLTYTRGNWHOVLXNKHFEUVYCTDKCSMHXZOBHUESIQAMYBAQSIBPJOFOMBPRJLJEBFBQCPVUWRZJZWNASZHTUFFLKWRDHWRDLPUPNAAUZBEDZIPXCTWAJMCHVQTANWCCMSTNQGMQUSBDHOKDINMVNYFGLVLAMQWZKJZYILROPDG");

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
    msg.setTimeStamp(0.9321833246796266);
    msg.setSource(62260U);
    msg.setSourceEntity(217U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(221U);
    msg.timeout = 16993U;
    msg.lat = 0.8715695699166263;
    msg.lon = 0.47040731749141895;
    msg.z = 0.544177107081322;
    msg.z_units = 222U;
    msg.speed = 0.4044460194159962;
    msg.speed_units = 109U;
    msg.custom.assign("FJDZASUXPFHMIHGDCRUFKSGZTWABXLWTMVEZVQLFC");

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
    msg.setTimeStamp(0.5838604709632217);
    msg.setSource(46788U);
    msg.setSourceEntity(187U);
    msg.setDestination(34740U);
    msg.setDestinationEntity(159U);
    msg.timeout = 61631U;
    msg.lat = 0.25770302607200013;
    msg.lon = 0.48295193347037113;
    msg.z = 0.2313280474131354;
    msg.z_units = 24U;
    msg.speed = 0.19590012576319016;
    msg.speed_units = 239U;
    msg.custom.assign("MPIALLQRGSSSKKBOAUHJVPZTRIAUGVMYHFEWZJGMBFXSXRLEIKGVKEHVOBDPEXYWCZWCOUYEIDXLMHBULOPALRUCVQTDHNKTZHBLFQICAKOZNBDEUVUXJRKBWJLSBAZRJNJPAVIKNFYGFSMUNE");

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
    msg.setTimeStamp(0.80853008998377);
    msg.setSource(13330U);
    msg.setSourceEntity(251U);
    msg.setDestination(15928U);
    msg.setDestinationEntity(103U);
    msg.x = 0.9999516838369402;
    msg.y = 0.20928791168091299;
    msg.z = 0.9799783848997391;

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
    msg.setTimeStamp(0.4281446056451591);
    msg.setSource(23938U);
    msg.setSourceEntity(29U);
    msg.setDestination(30058U);
    msg.setDestinationEntity(82U);
    msg.x = 0.20209234260685982;
    msg.y = 0.26797514636177633;
    msg.z = 0.5406496210963609;

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
    msg.setTimeStamp(0.942512569915779);
    msg.setSource(10016U);
    msg.setSourceEntity(62U);
    msg.setDestination(58834U);
    msg.setDestinationEntity(189U);
    msg.x = 0.0249182940170648;
    msg.y = 0.46739844700690614;
    msg.z = 0.6955853780028375;

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
    msg.setTimeStamp(0.3499925611270761);
    msg.setSource(55345U);
    msg.setSourceEntity(106U);
    msg.setDestination(41524U);
    msg.setDestinationEntity(82U);
    msg.timeout = 54836U;
    msg.lat = 0.9190252142805113;
    msg.lon = 0.6331931683494376;
    msg.z = 0.22936699078361356;
    msg.z_units = 118U;
    msg.amplitude = 0.6738765062928139;
    msg.pitch = 0.682818644509375;
    msg.speed = 0.10746965039362177;
    msg.speed_units = 15U;
    msg.custom.assign("XYAGLYARNMTIDARVWHQAXOPBWNOOAAGVYIPFUBVYGQHXEMTKMIDMMRQHOVSJWUCHQZTKTNXCURPCEAQAHCCSEVOHSWSBUMLLMJMQKFZJCGNRUISZVCLJYBFIJOPZCKHDRAWZUNDEXJFBCBPSSKEIKXRFTYOIGPNGYNZTTFXZCVLPEWQYOEPQTPEHDUQJGUWNABZNSYLVYJQUFRVJ");

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
    msg.setTimeStamp(0.8338496142477286);
    msg.setSource(37551U);
    msg.setSourceEntity(221U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(242U);
    msg.timeout = 32179U;
    msg.lat = 0.028626148911615856;
    msg.lon = 0.3818872502639955;
    msg.z = 0.16069983077372607;
    msg.z_units = 16U;
    msg.amplitude = 0.9279888455445203;
    msg.pitch = 0.49660691516544286;
    msg.speed = 0.23351632605849193;
    msg.speed_units = 222U;
    msg.custom.assign("JFFPUBEOCDMQIRLCBWFBQQEFOUEVSWZZWROCZNRSBDLUJGJNPOAMVLTAEMDUJJRITFJCMLYFDAKLUZXAVYNHOPPEJTQWRMQNEGUURKGVDLAIKNZTRVWIQQXUCXHYPPGWGVCCZHQOCVHAWSHMLSZXPRYELOJCRXUMSWIHKBIVYUXHSFAJKVOIHYESTBMZNKXSF");

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
    msg.setTimeStamp(0.8839573120197949);
    msg.setSource(18849U);
    msg.setSourceEntity(239U);
    msg.setDestination(21960U);
    msg.setDestinationEntity(134U);
    msg.timeout = 28317U;
    msg.lat = 0.9286328731972452;
    msg.lon = 0.9354497569222806;
    msg.z = 0.7814707690831924;
    msg.z_units = 45U;
    msg.amplitude = 0.3669784304273632;
    msg.pitch = 0.3732470721472462;
    msg.speed = 0.6194928344800239;
    msg.speed_units = 206U;
    msg.custom.assign("RBREBUKJGPKSEIUMBZUXYCKFACNFFAEWFERKDOSQERZQMPNXTCCOXLWYNINSYRHVVAUJNZELYBIVCYOHAVKJSCPUMWG");

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
    msg.setTimeStamp(0.7902079297742549);
    msg.setSource(58283U);
    msg.setSourceEntity(38U);
    msg.setDestination(42280U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.5403986167435528);
    msg.setSource(37501U);
    msg.setSourceEntity(220U);
    msg.setDestination(64611U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.1295221655233768);
    msg.setSource(5529U);
    msg.setSourceEntity(133U);
    msg.setDestination(56756U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.2277557340266888);
    msg.setSource(2591U);
    msg.setSourceEntity(11U);
    msg.setDestination(53372U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.8420773088314736;
    msg.lon = 0.2718171683988717;
    msg.z = 0.5458172027696816;
    msg.z_units = 47U;
    msg.radius = 0.5713278070796948;
    msg.duration = 8840U;
    msg.speed = 0.3047346256233777;
    msg.speed_units = 213U;
    msg.custom.assign("HHIUOYGRRGQCZJUQMSBACLUOTUXRENKQTKUKZLGYJVKRKJYYDIEBGBDYCTZQFUDRLDXNCXMEJEPVYBIIZNHY");

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
    msg.setTimeStamp(0.12438780831641527);
    msg.setSource(24655U);
    msg.setSourceEntity(242U);
    msg.setDestination(63050U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.2493953718603945;
    msg.lon = 0.5428322550617283;
    msg.z = 0.013964320889552129;
    msg.z_units = 31U;
    msg.radius = 0.3213159610973182;
    msg.duration = 31298U;
    msg.speed = 0.7763845528762278;
    msg.speed_units = 85U;
    msg.custom.assign("LRTUGEENCFTKFLPYSGZCENLWALIIVZYYNRIGQBSFWUPFOYAASWXLVUBLILHRPXROJJPKQHEAQZIAXXDMFODAHKKKTKWNBJHXUQTIMVSEJEOXCHXWDXCBRHYGLCFPMNOWKMYJWAXRG");

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
    msg.setTimeStamp(0.520740740739413);
    msg.setSource(63980U);
    msg.setSourceEntity(69U);
    msg.setDestination(30013U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.37957242881137465;
    msg.lon = 0.8986671932568429;
    msg.z = 0.7106039992921452;
    msg.z_units = 74U;
    msg.radius = 0.8882137197035286;
    msg.duration = 43321U;
    msg.speed = 0.20079623172208438;
    msg.speed_units = 66U;
    msg.custom.assign("USQIFERGOHQDDFEEAXPUVDLZBHESNVXQDGVAMNYONZOJABKIYTWCWZTOMYJDPTGVIGJASXLRKFQKHQOYOLMSXEWRVZDASORWNGTSFPVTHFJUZJCTNLZZHRWZCAFHWYFQTJKTLWGQPZXB");

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
    msg.setTimeStamp(0.7138342183354702);
    msg.setSource(48429U);
    msg.setSourceEntity(180U);
    msg.setDestination(4831U);
    msg.setDestinationEntity(79U);
    msg.timeout = 59664U;
    msg.flags = 104U;
    msg.lat = 0.18081674305226003;
    msg.lon = 0.7282869566449378;
    msg.start_z = 0.06563173783302534;
    msg.start_z_units = 175U;
    msg.end_z = 0.8383305795738681;
    msg.end_z_units = 119U;
    msg.radius = 0.35605135374136365;
    msg.speed = 0.7917620406479609;
    msg.speed_units = 179U;
    msg.custom.assign("PCCBSYGDRRQHITFGNEZJIYKJIJULXRPMMUJSZGAOCUDRTEKMHPRKPDRNDVCZFTIMHVCFZHCFQDWOBVPBMQFQMYFMXQNHNJURUOTSIBZVUWCJLHILIVWJDSLFEHXPYRCZDFYQAIXNXDQOVVKANQ");

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
    msg.setTimeStamp(0.39723615615529917);
    msg.setSource(2971U);
    msg.setSourceEntity(8U);
    msg.setDestination(48808U);
    msg.setDestinationEntity(213U);
    msg.timeout = 23341U;
    msg.flags = 195U;
    msg.lat = 0.9262699705583411;
    msg.lon = 0.4797302601373922;
    msg.start_z = 0.03238749490547843;
    msg.start_z_units = 0U;
    msg.end_z = 0.47528223069865827;
    msg.end_z_units = 47U;
    msg.radius = 0.017343878939133472;
    msg.speed = 0.3125115286502854;
    msg.speed_units = 220U;
    msg.custom.assign("BPSENOPROGKIUQXSKBFJIFJMLPJPUXOQBJCEZHBXIREEBTGMTPNRKGTSUQCVSTYCDGSVXBWBLVSHOVNDAIOJNQGFFYNTAKFDFWNWUUPOAZASGHRVGWDFJZUERZJPMXOULGYNIAUEQBCOXHAMKIFVKYJQGDRCARPZEASDMZLBBNQVTEOYKITWHXAWYOYHLSNZLXPLDGNPEJCKJRRVTDKIWWZCXKFHYZLX");

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
    msg.setTimeStamp(0.3396757211613941);
    msg.setSource(29677U);
    msg.setSourceEntity(129U);
    msg.setDestination(29888U);
    msg.setDestinationEntity(181U);
    msg.timeout = 54414U;
    msg.flags = 67U;
    msg.lat = 0.2347954938607738;
    msg.lon = 0.9685853459225526;
    msg.start_z = 0.7721803601787219;
    msg.start_z_units = 33U;
    msg.end_z = 0.8091002291169709;
    msg.end_z_units = 15U;
    msg.radius = 0.5798296604331538;
    msg.speed = 0.5369653829152359;
    msg.speed_units = 61U;
    msg.custom.assign("LPFVNOOELSVPGTAWYTYEBOOLPFUYHWBJYZJNQJTRESKZHIDAQXUFOHVASTUMUBZILZOCLCXRBATULGLCNGSNRMUSCBIRKYCWAXCVIDNMUKNZDUHJAWWIAGLGJYRACVXHZVDEROEPXCFQFKFWFIKQSDSFWXKJSNKPQZTBFWMHDVYZKQNEYUWDMNVJNEHEQRAVMPVAQHBXKOBGPBXKCJTRGGFCQXDSM");

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
    msg.setTimeStamp(0.37587474481968497);
    msg.setSource(25748U);
    msg.setSourceEntity(127U);
    msg.setDestination(32095U);
    msg.setDestinationEntity(71U);
    msg.timeout = 40228U;
    msg.lat = 0.25272652624675884;
    msg.lon = 0.3043177608173674;
    msg.z = 0.760570852491539;
    msg.z_units = 169U;
    msg.speed = 0.7707864788594772;
    msg.speed_units = 51U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6617300370494029;
    tmp_msg_0.y = 0.9447541073499549;
    tmp_msg_0.z = 0.3788532012156868;
    tmp_msg_0.t = 0.7530593149561262;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QYMAYDJPUPIBKHTAOEOKIJBLZUUQFBNOBCHMXMUTBALJGVHNRXDSYFMVIWXSKLHEZTICSYATBPRNYQMQUVWWUKEQGFVOLJFWDMDTOYUWMMBFRYRVRMCBCRFTLVQTOIDSNWNJHLZZPTZFLNXXQPCRCVSEDYSCSATPAGAJSXMQVWEVCUZELXFIYHJQJUKZGDJZXS");

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
    msg.setTimeStamp(0.7364714219445949);
    msg.setSource(29108U);
    msg.setSourceEntity(181U);
    msg.setDestination(55021U);
    msg.setDestinationEntity(157U);
    msg.timeout = 37756U;
    msg.lat = 0.802263765696341;
    msg.lon = 0.4433642258635644;
    msg.z = 0.6215874188571725;
    msg.z_units = 169U;
    msg.speed = 0.8894397753679671;
    msg.speed_units = 187U;
    msg.custom.assign("STQBOITUTGKNOWHREQCQQXLJXMYFWGKOYPHUEGONUZSAAZFQOSIQRWMPDJMOLZYOXINKGVCLBRCYQAANKPJFPQGHXXDBGODDNFFLVNRHHTLFCVIJKGULLOFRTWMTTYWVUAANZFKYBDXPLCREAIBJVBIFEDGBETCEHIFZSXWPOZXCACBVMANUWVIZVJJECDENASKECKGXPMHRMZNPTWSSHRYUMKYIWDURUMVDJZTPSJPYZSQVJKBBHLRGQSWEI");

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
    msg.setTimeStamp(0.30901222631493575);
    msg.setSource(19614U);
    msg.setSourceEntity(226U);
    msg.setDestination(681U);
    msg.setDestinationEntity(65U);
    msg.timeout = 34615U;
    msg.lat = 0.673057652166769;
    msg.lon = 0.5272356309470387;
    msg.z = 0.5277002353372233;
    msg.z_units = 42U;
    msg.speed = 0.8256159673680443;
    msg.speed_units = 189U;
    msg.custom.assign("GYRGCMLFRXEWPQWJKLRDCGAGEUOSYERLDYVQGCLYRDLPVHPROVUXMDSKAPXRELPSKYYMNXBETWHXRHSOEZZDDPVFQIMDZWASKEKXVAZZVOYYIPATGOPAKHPIUQBSUFWTBLIUTYXZ");

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
    msg.setTimeStamp(0.4792134500378854);
    msg.setSource(39770U);
    msg.setSourceEntity(68U);
    msg.setDestination(42848U);
    msg.setDestinationEntity(89U);
    msg.x = 0.5694079319871338;
    msg.y = 0.26379532399048267;
    msg.z = 0.3175950121244746;
    msg.t = 0.5202728084872469;

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
    msg.setTimeStamp(0.1373946259169364);
    msg.setSource(3917U);
    msg.setSourceEntity(126U);
    msg.setDestination(3732U);
    msg.setDestinationEntity(26U);
    msg.x = 0.4798212822715495;
    msg.y = 0.708673785248521;
    msg.z = 0.8348760031605421;
    msg.t = 0.5219398267297993;

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
    msg.setTimeStamp(0.914363299050311);
    msg.setSource(7751U);
    msg.setSourceEntity(253U);
    msg.setDestination(5848U);
    msg.setDestinationEntity(41U);
    msg.x = 0.3221415011539991;
    msg.y = 0.2135520161359874;
    msg.z = 0.9014686610605445;
    msg.t = 0.08266165728490926;

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
    msg.setTimeStamp(0.41723480368299515);
    msg.setSource(9460U);
    msg.setSourceEntity(90U);
    msg.setDestination(42271U);
    msg.setDestinationEntity(123U);
    msg.timeout = 44999U;
    msg.name.assign("DZCPRRYEALTRKPLXRCSPEGJVFQFLGJEDLJGWSSNAUYQYBZCNGXYJOXRJHTAFFOMQMTQJNNWQBUXKBUHVGDUUGYCTZGICDFWCOYRFQKKDAUHHWEPOFTARRFHQYIBIDSUOAJSAMGSRXOBMSBZFKLKKXIZWETAEMNTMRJHHKVNAINWVXWLMCIPVJPSQBOFTBZZTZQYTOCXIYZYELVMXQDHUH");
    msg.custom.assign("EFUORYYRPDTSCXFWWXGZVTSHTUTIGWYTVHQRNTQJDIJSCZPPENMABBNJNYYK");

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
    msg.setTimeStamp(0.3272953095956269);
    msg.setSource(3219U);
    msg.setSourceEntity(81U);
    msg.setDestination(7538U);
    msg.setDestinationEntity(147U);
    msg.timeout = 38721U;
    msg.name.assign("ASQSLYXNBUKZECOCUNBTYMNBVSMBWFTGQMGWORBMKUOGHKMNIQEITFSKDJDJPUCQTYXLZXAQREGTIDYJLJAZEFEWTWAYOOVSNVUZKCJFPCHQDTEHUUFSVDDGLOXYQMNWIZIPFKIELZSYZEGWXJROHR");
    msg.custom.assign("HQUSCTRDRAZQYZHGUQTMGVPKPZNVEDKYYVVHYJSHJMQPFWRHNJCIGTXGHSXRAUSQRBQGUBPWSDZHRLCOGFOUKWNKOGSRTVPRXIWLOEWELICCBTJAMODSFCIIILVUJNGJQCIXJIBKWEZDUSENNQTMBPZOFZBEWFPYKVFPXHALVNYTEHLODUKRZXFCV");

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
    msg.setTimeStamp(0.2493637607093493);
    msg.setSource(24167U);
    msg.setSourceEntity(209U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(232U);
    msg.timeout = 14860U;
    msg.name.assign("KCKJSBVILNLWFDKEOOSHJYOEOTXUCAHXYYLBSVFGSJNGTWWJIWQQHVUPHEYUSZRQOHALDMNPNVAJVKPYAVIFDZZFNSHCGTNQUWZDVNDQBRNZEPTWIFZMXAFE");
    msg.custom.assign("FECAZPZHLEUEFSCGPQXJVXTYEAOJQGFHCUPYXXEUGODKMODLSNFVIPVHBBGTCLFDRWPLTCJMNQULIFXTSBOQYYFTGJBCNBOZJVKRRCGSXRKWKKAHPRVENGVDHAVBKXBJUMWWZFQURDEOAFWZITXQMLBTYPKOQYNSLIDXIRUIQUH");

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
    msg.setTimeStamp(0.36640028552952486);
    msg.setSource(54549U);
    msg.setSourceEntity(221U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.077494832843232;
    msg.lon = 0.8682086954617287;
    msg.z = 0.9881046175405623;
    msg.z_units = 134U;
    msg.speed = 0.21610402774176096;
    msg.speed_units = 73U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07449193110046237;
    tmp_msg_0.y = 0.6217054838507735;
    tmp_msg_0.z = 0.8981720209522;
    tmp_msg_0.t = 0.7644419712473964;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8927147036902455;
    msg.custom.assign("UHEJIMXGTIOTVGWADFKWPHUAPKJLIZDQSSVNRYTCHXLYMHURAAHXUEWBWWQBVJJTRGUXDNGQSKRWRLKOSUEFZQTUOPVSVYPCAYLGAVXSFQJBBUVWQHYZZBPJXTCGFREOGLVYBOEMVSNBFPMASNKZBKECGKNEZGLMXNLNFKIUODHUMFCENQEVTAPTOICQBSHDFZPNMWINFCXZI");

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
    msg.setTimeStamp(0.7967792005343218);
    msg.setSource(35216U);
    msg.setSourceEntity(113U);
    msg.setDestination(63443U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.717011445493102;
    msg.lon = 0.055906114531845574;
    msg.z = 0.26407178984471213;
    msg.z_units = 58U;
    msg.speed = 0.1512347724980826;
    msg.speed_units = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20927U;
    tmp_msg_0.off_x = 0.27337781456466037;
    tmp_msg_0.off_y = 0.11977847958383314;
    tmp_msg_0.off_z = 0.2653454851356414;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.35649440532969245;
    msg.custom.assign("KLYSHSVWFZBOGDVWCMGTMQRJKJALJWDEFZQMLQCTPJFPRXVUYWAPVCTXIPGYXXGDEPNUXCVLMLATLPZWCHDEHRNSPVWXNTHPUMFOOEADQOJFSWOOTQCSXBBCEMYSFESIOMDCAUSILOKRYKBNZTLKMBZVSGDNFWVEDTQGWGYICDNSRIBZEBNYUAUAGQQIUJRLJHW");

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
    msg.setTimeStamp(0.8811353902521971);
    msg.setSource(63720U);
    msg.setSourceEntity(189U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.48153603033809644;
    msg.lon = 0.1850416230420694;
    msg.z = 0.34791667985433916;
    msg.z_units = 210U;
    msg.speed = 0.671911264365201;
    msg.speed_units = 245U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18453U;
    tmp_msg_0.off_x = 0.30525847424296304;
    tmp_msg_0.off_y = 0.9436428125428011;
    tmp_msg_0.off_z = 0.7961338396674891;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6640973954314349;
    msg.custom.assign("HERUJLABIVKMDCNOSLPSVSLYRNUKUGKFAWJEMUZRQWUYIPYXFTKJTYENVGZQKMPQNFVEBDCOWZDMKLVXXGEKQEDUACRYUAGEOQJBKXVIFLMBHBYRJXAOGJ");

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
    msg.setTimeStamp(0.5303198590453247);
    msg.setSource(48871U);
    msg.setSourceEntity(143U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(10U);
    msg.vid = 9044U;
    msg.off_x = 0.3039949503012668;
    msg.off_y = 0.4432020109446677;
    msg.off_z = 0.5258325282446681;

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
    msg.setTimeStamp(0.8641114918122352);
    msg.setSource(2955U);
    msg.setSourceEntity(69U);
    msg.setDestination(65402U);
    msg.setDestinationEntity(235U);
    msg.vid = 27072U;
    msg.off_x = 0.15912727692222262;
    msg.off_y = 0.3597757018176121;
    msg.off_z = 0.29345622609465916;

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
    msg.setTimeStamp(0.886355326557104);
    msg.setSource(29524U);
    msg.setSourceEntity(201U);
    msg.setDestination(24076U);
    msg.setDestinationEntity(6U);
    msg.vid = 46976U;
    msg.off_x = 0.262149590166849;
    msg.off_y = 0.97366050227816;
    msg.off_z = 0.22685272867541018;

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
    msg.setTimeStamp(0.14780216347715736);
    msg.setSource(42641U);
    msg.setSourceEntity(240U);
    msg.setDestination(22950U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.8144159686084252);
    msg.setSource(19081U);
    msg.setSourceEntity(9U);
    msg.setDestination(41593U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.6904959690702948);
    msg.setSource(16106U);
    msg.setSourceEntity(169U);
    msg.setDestination(4438U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.06914856696838767);
    msg.setSource(23541U);
    msg.setSourceEntity(229U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(16U);
    msg.mid = 37203U;

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
    msg.setTimeStamp(0.8144904779518611);
    msg.setSource(21028U);
    msg.setSourceEntity(71U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(177U);
    msg.mid = 20360U;

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
    msg.setTimeStamp(0.8102177143692869);
    msg.setSource(58290U);
    msg.setSourceEntity(30U);
    msg.setDestination(4313U);
    msg.setDestinationEntity(33U);
    msg.mid = 58394U;

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
    msg.setTimeStamp(0.6758030580550105);
    msg.setSource(49502U);
    msg.setSourceEntity(174U);
    msg.setDestination(38326U);
    msg.setDestinationEntity(248U);
    msg.state = 237U;
    msg.eta = 41774U;
    msg.info.assign("IZVMFXBNTLYOXINAIYVTYMBUEC");

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
    msg.setTimeStamp(0.12527558160150942);
    msg.setSource(47887U);
    msg.setSourceEntity(53U);
    msg.setDestination(55317U);
    msg.setDestinationEntity(27U);
    msg.state = 210U;
    msg.eta = 34692U;
    msg.info.assign("ZQOJBGCCRQSLHIQJOSEDTCSQFEIBVTPPXHCXWLMGMDKSXMVQBISCTUORMWROWZICRHGFNWUALNBPIMAUDJVXSANGSVUTUQKGMSYROYVHQFZDZNEWJFCTOVFMWRMOUXNQEEEPPRJBPMUTIVYJZMWAYQYKIVDPHGKBETDSYLUUBGANHDPJFBNWABZDTKXAEKFLDXWASJQIRVNLTXBLOFLZPYHIEKCGITR");

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
    msg.setTimeStamp(0.9031414655996103);
    msg.setSource(1386U);
    msg.setSourceEntity(187U);
    msg.setDestination(23579U);
    msg.setDestinationEntity(234U);
    msg.state = 136U;
    msg.eta = 52552U;
    msg.info.assign("BITREPXOBVRGEKHNOOKNCGQVYVIJAVVBGBYUFEMSYO");

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
    msg.setTimeStamp(0.5877597957419142);
    msg.setSource(55413U);
    msg.setSourceEntity(88U);
    msg.setDestination(22874U);
    msg.setDestinationEntity(111U);
    msg.system = 64575U;
    msg.duration = 31462U;
    msg.speed = 0.769565194059774;
    msg.speed_units = 193U;
    msg.x = 0.6738711216125243;
    msg.y = 0.018800939783392923;
    msg.z = 0.8114483069232921;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.0027499034291538216);
    msg.setSource(41506U);
    msg.setSourceEntity(62U);
    msg.setDestination(48374U);
    msg.setDestinationEntity(244U);
    msg.system = 14651U;
    msg.duration = 7298U;
    msg.speed = 0.7093307545389319;
    msg.speed_units = 206U;
    msg.x = 0.4015087399733105;
    msg.y = 0.44783790802218937;
    msg.z = 0.7951096744465885;
    msg.z_units = 31U;

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
    msg.setTimeStamp(0.8491012038002008);
    msg.setSource(22929U);
    msg.setSourceEntity(230U);
    msg.setDestination(57775U);
    msg.setDestinationEntity(36U);
    msg.system = 24204U;
    msg.duration = 41129U;
    msg.speed = 0.2213480147708915;
    msg.speed_units = 251U;
    msg.x = 0.6240287124979151;
    msg.y = 0.4478625435352076;
    msg.z = 0.3893682921410663;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.26821179210630697);
    msg.setSource(43692U);
    msg.setSourceEntity(183U);
    msg.setDestination(49009U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.14550139624594438;
    msg.lon = 0.4395024996485951;
    msg.speed = 0.5774481740045451;
    msg.speed_units = 199U;
    msg.duration = 19859U;
    msg.sys_a = 35489U;
    msg.sys_b = 44631U;
    msg.move_threshold = 0.8146760780233866;

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
    msg.setTimeStamp(0.6169155908133246);
    msg.setSource(5223U);
    msg.setSourceEntity(218U);
    msg.setDestination(1403U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.8633152449348852;
    msg.lon = 0.7921751176722581;
    msg.speed = 0.5096023036232322;
    msg.speed_units = 61U;
    msg.duration = 9147U;
    msg.sys_a = 17698U;
    msg.sys_b = 49680U;
    msg.move_threshold = 0.44142326994463965;

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
    msg.setTimeStamp(0.9932517538134574);
    msg.setSource(48071U);
    msg.setSourceEntity(85U);
    msg.setDestination(14124U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.22506060598883237;
    msg.lon = 0.5657739243007646;
    msg.speed = 0.4691070838264343;
    msg.speed_units = 30U;
    msg.duration = 33246U;
    msg.sys_a = 9012U;
    msg.sys_b = 55430U;
    msg.move_threshold = 0.3482882845781151;

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
    msg.setTimeStamp(0.8790453610708746);
    msg.setSource(33638U);
    msg.setSourceEntity(55U);
    msg.setDestination(38460U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.17941708491657438;
    msg.lon = 0.024867873869431234;
    msg.z = 0.8802439110212344;
    msg.z_units = 186U;
    msg.speed = 0.515261438755781;
    msg.speed_units = 96U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.45901117240174516;
    tmp_msg_0.lon = 0.7575231736527421;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IYYCBLCWYZKBCPASDUHNNZDGRIFFFBVJQUZOXGHOAONQ");

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
    msg.setTimeStamp(0.926113460516812);
    msg.setSource(21097U);
    msg.setSourceEntity(98U);
    msg.setDestination(51630U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.8895402260603871;
    msg.lon = 0.4498017030580884;
    msg.z = 0.6708615375385237;
    msg.z_units = 11U;
    msg.speed = 0.21197226217104015;
    msg.speed_units = 182U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8321831057864127;
    tmp_msg_0.lon = 0.5382372474525398;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TWQYLVYMNNIGKWIBPXAVIRYCKJONSBSMILLNBQBSHAWUBBMQHYMKUTZDGDYSOFQZTNUDOZQRGNBJJDVDCJUCYESDIVLCAZRRITEJHWFCN");

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
    msg.setTimeStamp(0.9807847945085604);
    msg.setSource(37645U);
    msg.setSourceEntity(86U);
    msg.setDestination(14295U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.6334905486388543;
    msg.lon = 0.9021343956927044;
    msg.z = 0.2801239539918139;
    msg.z_units = 108U;
    msg.speed = 0.4721297922916279;
    msg.speed_units = 35U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.30899985380288264;
    tmp_msg_0.lon = 0.3751803893639635;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VIILCLPDPMNHZPGUVKVCGFSHPVXLMOIJIGRFCHETDVKTXZHPQWBMZATVHQEAYWQELSUUKQNDDUFTAYMCBYVVOJYIURGOOMQZGOZPFVDSBY");

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
    msg.setTimeStamp(0.5876058430801645);
    msg.setSource(47552U);
    msg.setSourceEntity(191U);
    msg.setDestination(45816U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.009593415495131596;
    msg.lon = 0.007949311377140056;

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
    msg.setTimeStamp(0.902525021333098);
    msg.setSource(48576U);
    msg.setSourceEntity(20U);
    msg.setDestination(45579U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.9258400231040705;
    msg.lon = 0.4445508469972901;

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
    msg.setTimeStamp(0.8608514215853231);
    msg.setSource(18318U);
    msg.setSourceEntity(141U);
    msg.setDestination(50846U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.8794259265211136;
    msg.lon = 0.30746095118601924;

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
    msg.setTimeStamp(0.37110122596750905);
    msg.setSource(13457U);
    msg.setSourceEntity(71U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(149U);
    msg.timeout = 38593U;
    msg.lat = 0.5932940572952938;
    msg.lon = 0.10577682595317339;
    msg.z = 0.34798168386787165;
    msg.z_units = 195U;
    msg.pitch = 0.916933499299993;
    msg.amplitude = 0.0516012792183278;
    msg.duration = 19111U;
    msg.speed = 0.33623749375322043;
    msg.speed_units = 10U;
    msg.radius = 0.6193090669681304;
    msg.direction = 223U;
    msg.custom.assign("MLSDSECBCAYSZJLIEXTIKRHLRUFRKDIBXJUSDDPXVNZLTWKEIYOGWVMNAFAPEKYQCFBKZVJLRGTCINMVQTJFXQWY");

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
    msg.setTimeStamp(0.2955557710669504);
    msg.setSource(51772U);
    msg.setSourceEntity(16U);
    msg.setDestination(31751U);
    msg.setDestinationEntity(204U);
    msg.timeout = 17135U;
    msg.lat = 0.5734089767243296;
    msg.lon = 0.6603989726958829;
    msg.z = 0.8960689780262405;
    msg.z_units = 67U;
    msg.pitch = 0.8432330085232561;
    msg.amplitude = 0.038249584006908255;
    msg.duration = 48545U;
    msg.speed = 0.004526256103975501;
    msg.speed_units = 88U;
    msg.radius = 0.7327769207159931;
    msg.direction = 15U;
    msg.custom.assign("QWVEUHZSMKYRUHQQEQURMVBPSPPRAJXSYOOW");

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
    msg.setTimeStamp(0.06577066773978879);
    msg.setSource(49619U);
    msg.setSourceEntity(220U);
    msg.setDestination(26108U);
    msg.setDestinationEntity(97U);
    msg.timeout = 51698U;
    msg.lat = 0.06857444373582144;
    msg.lon = 0.8424735150361781;
    msg.z = 0.6394748831748699;
    msg.z_units = 59U;
    msg.pitch = 0.9276064467590467;
    msg.amplitude = 0.10338556020530987;
    msg.duration = 64219U;
    msg.speed = 0.5604572198991066;
    msg.speed_units = 179U;
    msg.radius = 0.11183352725856877;
    msg.direction = 12U;
    msg.custom.assign("SHTRWBSBYIYQDSAMNXQEXKJLNQCMWKHMWVLNDKIACUSKFEKVZXXPFJPT");

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
    msg.setTimeStamp(0.27789536763448297);
    msg.setSource(7771U);
    msg.setSourceEntity(82U);
    msg.setDestination(26169U);
    msg.setDestinationEntity(217U);
    msg.control_src = 21013U;
    msg.control_ent = 121U;
    msg.timeout = 0.8118931390911145;
    msg.loiter_radius = 0.8577600219021982;
    msg.altitude_interval = 0.14901631533752058;

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
    msg.setTimeStamp(0.7024692906772367);
    msg.setSource(62728U);
    msg.setSourceEntity(214U);
    msg.setDestination(28131U);
    msg.setDestinationEntity(213U);
    msg.control_src = 41100U;
    msg.control_ent = 202U;
    msg.timeout = 0.1459650850629367;
    msg.loiter_radius = 0.8822403925060363;
    msg.altitude_interval = 0.5971242035351227;

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
    msg.setTimeStamp(0.2763054621784552);
    msg.setSource(40514U);
    msg.setSourceEntity(98U);
    msg.setDestination(54098U);
    msg.setDestinationEntity(131U);
    msg.control_src = 42381U;
    msg.control_ent = 214U;
    msg.timeout = 0.7656286624073416;
    msg.loiter_radius = 0.5319260769404066;
    msg.altitude_interval = 0.689038963168694;

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
    msg.setTimeStamp(0.08582915130625868);
    msg.setSource(27001U);
    msg.setSourceEntity(15U);
    msg.setDestination(112U);
    msg.setDestinationEntity(114U);
    msg.flags = 57U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9987887695865182;
    tmp_msg_0.speed_units = 111U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5232916065401508;
    tmp_msg_1.z_units = 93U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4858109399957038;
    msg.lon = 0.3713833982765711;

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
    msg.setTimeStamp(0.19010894615555152);
    msg.setSource(43287U);
    msg.setSourceEntity(49U);
    msg.setDestination(2829U);
    msg.setDestinationEntity(155U);
    msg.flags = 68U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.30976036079929836;
    tmp_msg_0.speed_units = 142U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6751311299435163;
    tmp_msg_1.z_units = 139U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5984680264032061;
    msg.lon = 0.3451760334554742;

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
    msg.setTimeStamp(0.08441119332848424);
    msg.setSource(23018U);
    msg.setSourceEntity(193U);
    msg.setDestination(5547U);
    msg.setDestinationEntity(176U);
    msg.flags = 162U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20873332566910718;
    tmp_msg_0.speed_units = 244U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.03473112192313288;
    tmp_msg_1.z_units = 39U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7001476428234769;
    msg.lon = 0.7980941803398129;

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
    msg.setTimeStamp(0.3726025060731978);
    msg.setSource(42417U);
    msg.setSourceEntity(94U);
    msg.setDestination(33730U);
    msg.setDestinationEntity(208U);
    msg.control_src = 41140U;
    msg.control_ent = 178U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 67U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7999066523112911;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4704509765531547;
    tmp_tmp_msg_0_1.z_units = 193U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.42486286326116307;
    tmp_msg_0.lon = 0.9453277908325354;
    msg.reference.set(tmp_msg_0);
    msg.state = 237U;
    msg.proximity = 168U;

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
    msg.setTimeStamp(0.35041135814726054);
    msg.setSource(40323U);
    msg.setSourceEntity(252U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(6U);
    msg.control_src = 21815U;
    msg.control_ent = 150U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 66U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.682130762015357;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.035678809104382814;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9266592168525046;
    tmp_msg_0.lon = 0.5935941189076765;
    msg.reference.set(tmp_msg_0);
    msg.state = 67U;
    msg.proximity = 31U;

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
    msg.setTimeStamp(0.14250524691147481);
    msg.setSource(5787U);
    msg.setSourceEntity(152U);
    msg.setDestination(24644U);
    msg.setDestinationEntity(143U);
    msg.control_src = 23124U;
    msg.control_ent = 246U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 163U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.00659724555345953;
    tmp_tmp_msg_0_0.speed_units = 199U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8853561443007943;
    tmp_tmp_msg_0_1.z_units = 133U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26529627171725934;
    tmp_msg_0.lon = 0.6068144070551216;
    msg.reference.set(tmp_msg_0);
    msg.state = 65U;
    msg.proximity = 231U;

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
    msg.setTimeStamp(0.7120464946288102);
    msg.setSource(18716U);
    msg.setSourceEntity(146U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(108U);
    msg.op_mode = 236U;
    msg.error_count = 158U;
    msg.error_ents.assign("DQJVVMBWYGOATGSTUCRBJZESDTDWNVHNIJPLLMBTUCYQLEEQJRPMXGIWM");
    msg.maneuver_type = 45663U;
    msg.maneuver_stime = 0.4270286731432166;
    msg.maneuver_eta = 21703U;
    msg.control_loops = 451451961U;
    msg.flags = 100U;
    msg.last_error.assign("DBJOKRJTEPAGEJCPDOUJIADHNIOTBUQVXATHOQDIGPJFQDPSCZCMKYDUCZLXYCYFTTPZWZKXHEHRRIKZSFMSLFVZTFFMLQUQMZEMMJXYKIQHHLKPULNARXNHWLFNORFVCIGPTZRTLMIXEBSNRVPBRYUY");
    msg.last_error_time = 0.7950684412663145;

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
    msg.setTimeStamp(0.6160054582549771);
    msg.setSource(33321U);
    msg.setSourceEntity(116U);
    msg.setDestination(20055U);
    msg.setDestinationEntity(203U);
    msg.op_mode = 87U;
    msg.error_count = 177U;
    msg.error_ents.assign("CDBMTHUQTJWZFESPXXOIRDBLCGWQGVSBQDDWAUVAHKNGZFUOZFGHCLBEOSZSOZPEEWMKKWEALTREAXMYYJLDILGFCRQEYGFVVSJZDNDN");
    msg.maneuver_type = 25874U;
    msg.maneuver_stime = 0.31787767781040555;
    msg.maneuver_eta = 63583U;
    msg.control_loops = 1133080336U;
    msg.flags = 106U;
    msg.last_error.assign("EYVWKIEOSHLPJLCYWFNYHHHSOIJOHHFFDLKEOKNYQAZUFZQMMPYEPEAXZDLMSPPPWDLIWXSWQUYAHKRQNRRLNYLVVZ");
    msg.last_error_time = 0.14101111356150375;

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
    msg.setTimeStamp(0.7601335028222447);
    msg.setSource(35441U);
    msg.setSourceEntity(86U);
    msg.setDestination(38847U);
    msg.setDestinationEntity(19U);
    msg.op_mode = 54U;
    msg.error_count = 94U;
    msg.error_ents.assign("DDULIYHZFHEVPCAULUSGFMBWXHRJNHTOUISVWMADH");
    msg.maneuver_type = 29969U;
    msg.maneuver_stime = 0.3934941311700474;
    msg.maneuver_eta = 34547U;
    msg.control_loops = 1928907922U;
    msg.flags = 143U;
    msg.last_error.assign("SGBZEFDXPLEDUDGWDCCIJFPVPJHIHQGWJUSULEIYBXFXVRSEDKFLOIYONTSRRGQKIDRAHYRPITFTMAJLQWXZQIPWBMKQAGNNSUVQNYADWJBOGRXSJFKAXFZHDEPKMONVHNBSZYQVLAJXMHLZONCACFIYOPMKLHXUFUJXMGOUUBHBANNWWAAHXCQDIYZCSLVRVJR");
    msg.last_error_time = 0.2516656253623274;

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
    msg.setTimeStamp(0.45470575496116716);
    msg.setSource(15930U);
    msg.setSourceEntity(218U);
    msg.setDestination(344U);
    msg.setDestinationEntity(145U);
    msg.type = 122U;
    msg.request_id = 3815U;
    msg.command = 139U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QQXMEJNRQMXWTPTZFWNSVFPCQMLXYKLCILQAVOPUEUHWWQSQIGXBUYJZABTYMWHZHNGPUIHMFRNHNTZDTSSGAUPDTZSBSCDBNKYUELFZFPUWCAAXPURBOKGXSSZIRRAAXMDDINCIZMTUCENOFOCYOJGDJFQHVPEJDYLLYLXIMIDELBGLAIKBKOFEFBOGIKJYSTOEJCFQZNBGVXRRKKBAWTDOCJPDYVCGREYHJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9449U;
    msg.info.assign("IGGAWGUSEFMXZXLKZZTXJZLGIDJMLTAKZOJBMNOTMPFOPVHPEMIYGRWKROTERLCLVHINCBTHDTYHZYKSRZSQWUJRKUD");

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
    msg.setTimeStamp(0.7526680126233123);
    msg.setSource(46602U);
    msg.setSourceEntity(232U);
    msg.setDestination(38096U);
    msg.setDestinationEntity(129U);
    msg.type = 34U;
    msg.request_id = 13321U;
    msg.command = 4U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("HOWGGKCAFTMHJKUVORPRSUMSNACZVTWFVTMGZDLQBYUOMYCEICDBBGRDZVREJUCVFEDQIRI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 45877U;
    msg.info.assign("DUVZXJJOYVACEELRWHFZFPRVU");

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
    msg.setTimeStamp(0.29077570930583607);
    msg.setSource(18663U);
    msg.setSourceEntity(166U);
    msg.setDestination(8415U);
    msg.setDestinationEntity(170U);
    msg.type = 22U;
    msg.request_id = 57151U;
    msg.command = 131U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 57489U;
    tmp_msg_0.flags = 182U;
    tmp_msg_0.lat = 0.7669960869858671;
    tmp_msg_0.lon = 0.14013966734180783;
    tmp_msg_0.start_z = 0.9788742239544255;
    tmp_msg_0.start_z_units = 191U;
    tmp_msg_0.end_z = 0.8926629137010743;
    tmp_msg_0.end_z_units = 178U;
    tmp_msg_0.radius = 0.8083416643802696;
    tmp_msg_0.speed = 0.4387119581859481;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.custom.assign("BHHRAKTDXTAMFRQJNXIMUWTWSUEOCLDBFVXUYGEKTVCALMXPWKNZCSVXEZQFBSKZLGVPSNNKLPIEUJEARKRQZVGQAROBNLOEJBTTIBRIPDABOFFLPQUOPKLXSVILKMCCAUPIHHN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26218U;
    msg.info.assign("BZGVRCFPZCRZBIZHUKWNIDSLJLQNFVDFKTAHDX");

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
    msg.setTimeStamp(0.8077464856558486);
    msg.setSource(11929U);
    msg.setSourceEntity(81U);
    msg.setDestination(35894U);
    msg.setDestinationEntity(194U);
    msg.command = 125U;
    msg.entities.assign("TJPYKQWFBJZEMCU");

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
    msg.setTimeStamp(0.1571077068821729);
    msg.setSource(55697U);
    msg.setSourceEntity(150U);
    msg.setDestination(16013U);
    msg.setDestinationEntity(134U);
    msg.command = 114U;
    msg.entities.assign("HNYPWOCPRGJNRGFWAKDGSTZTBFGHNTKBOJWDCQTHNUCHBOFQMRLZPJDJWILUMESOLPJPVAUXVXSSXCXFZUXEIXYIHBKPUSLEERJKRYGMAYMUNTMAROXVEJBTQCWVZXKPDIKBLAIFOPUZJGAVLWOYHEHMXGVCSPHQVKIDIQBVRLVWKWPDDBFDQRUZGFFKSAYEAMQYUDQCNGETMQEHLLSDKWHCNRUQIMVSZEOBZJCTCFOTGYTIAJFSOMLBXY");

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
    msg.setTimeStamp(0.8212626932152374);
    msg.setSource(11861U);
    msg.setSourceEntity(202U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(39U);
    msg.command = 121U;
    msg.entities.assign("NWPRFUTIHVSSRVJEOZJHNWXWDTLXATPDPQNNVCWXCPZZAEJHCZOEKNDWAYUUHLYCFDPEAIXDQQKBUKKVOLMRAUJCXOCGTYYFHIDODSLABDEFEJIJFGNIWFPYKZKZJMGDEXCVLRGBVQMKLQFYNXGWFCSNGPQBOSJRVXYLSIIHYENTQFMKBZAHPBMSMCHGORIUAGGX");

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
    msg.setTimeStamp(0.20257959867943331);
    msg.setSource(65092U);
    msg.setSourceEntity(106U);
    msg.setDestination(37001U);
    msg.setDestinationEntity(57U);
    msg.mcount = 19U;
    msg.mnames.assign("PPYGTKVSYEGARXLCHSDCFKFUKYGVNFGYDJBHJPMVRBTLQPSOJOZLAXQCMTKWXWJVWACYDMMRTSOTPLSKADHABJJMNCLSMUMANGTDBBEHZMNAOORWRUBCAQHKZXZNQZWPJPUDGBUDSULGTRKNQIXKJMYRABXLXGWOFVCOYVKTGPESVEQULFTHEFQTDEEVPAVWFWIHCCPZIEVRGIWCHYFHRZHQIIOIULWLKBUJNYOQJDQOIYFXXSEUXNRSZIIZDN");
    msg.ecount = 212U;
    msg.enames.assign("AXCSILHYPMQVQBIKPKYXTYDGTEOAYUDTNCVDMMBSHNPWOEKGHZASNOSDADCTCVGVFTZWLVSKLXBUKXJRGNRCEASZXFAGOHUYLLACDMLTQIBRKUWPDQQVCJKNRXNOJIGMMPYEYOJHIRULFOXIUSMNEQQBVZAJPWP");
    msg.ccount = 32U;
    msg.cnames.assign("IEHBTQXPGXKASNBVBYHJGOAITSFXULPEMLCKVBNXCTUSNTEEMGYRKQYQUAROBJIVAVFVVDZRPQTZCRKHFIJBHWKEXNPXEMMHGAWDWYXUYTMDCESSASMPYBLMRABGZKSVRYMDADUQHGUZJJJESIAZGPTGXPCWBFOUJYLJZTKOLNIKFBPNHALQXIHFNOKVRWOKEXWVWW");
    msg.last_error.assign("PTLOBOEIXSKYI");
    msg.last_error_time = 0.6704622669751011;

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
    msg.setTimeStamp(0.01594488669581695);
    msg.setSource(4489U);
    msg.setSourceEntity(254U);
    msg.setDestination(16383U);
    msg.setDestinationEntity(174U);
    msg.mcount = 208U;
    msg.mnames.assign("KRRAYMHENKIVFWHCJVHJSACVOCVLQHPXTLUAHKELNIAYGZVWCZAJPIXPYQKEUZZKQOCMMJPMVOGISSSLDZNORWVAOSYFIQUCYMHZSKQPYGDRRBUJLGBYGGEUFFRXHRXNJCQGPBJVIOWIZEMTTFXDGOUAWWCDJPBJNMWNDASPXBBPKWHBOMECFWVDMBITRQYKLFQFUVNTXZDSNALSGSXZDZTHUCRNHBPLIWOREXXFBNATGYIUTKDEQLUJDL");
    msg.ecount = 179U;
    msg.enames.assign("AZBHRWMJPFSNAFPDVEXKDYOAYXDPTSPKZDQTWDAMWMSXNCKHLSLXHUZAGBZGJZBZZJVQEIPLMWVHWKYXCMIFAHTVKXAWWPQSCIUOJBCBNFJFPQTRAUMDOLFQYCX");
    msg.ccount = 251U;
    msg.cnames.assign("OWOWNXCPSYNZKCZ");
    msg.last_error.assign("PEMMBLUIXLVJSLWOSNJEUEWNJPREWJVLTKBADYGRPQZBFYFENEJXOTLAHVIIBAWLYOQWUPJYGZMIHUGHMDWNUOJVRHXQFH");
    msg.last_error_time = 0.21710768072074205;

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
    msg.setTimeStamp(0.25675618084584173);
    msg.setSource(33611U);
    msg.setSourceEntity(1U);
    msg.setDestination(62011U);
    msg.setDestinationEntity(73U);
    msg.mcount = 41U;
    msg.mnames.assign("VGODODNKIPXZLUISQWDMRZQQZDESIYXCWIACBZYDVRUYNVSWBGLHAVHEATUAPLQSNKNXWAYCZNLROCMPKFHEFQUABVOHXXSDCEGSXUXIYDVJGJNMMYFUJJKMFQBGKFGOWAZWBKWSMQOETIPWAWKZLHPJDTHVTERHUBEQSCCLNOVWMBGCIYFJSTQRHDTGPPHN");
    msg.ecount = 177U;
    msg.enames.assign("KIWHNPRCPFSYBYFYIQIJZCXKGQUCWTZIUIDJMSBNOBQAWSVZIQVZOWVWUBYRDTLMIQRQALSOKLSEMJUEFHEFKFXADHDEXGLTUUVGPOPKPEJUJRARZCJSWMPSFQNBXWZYUPNTFIMXBWWHVGZPSTTYRGDLAYMOXGYXTDTRBSRKAEJCVVBQESETRLHINCXVMZAGXLONVABZBYGQFHOKVCNN");
    msg.ccount = 237U;
    msg.cnames.assign("EYOOQZEKKBFVVVSKZMGCNSPJHCWGLCRNHRBURZAMJZUQ");
    msg.last_error.assign("JNVEOKNZUWOYJJQNCQPOGQTPHNAATYKVOKFYYIBINHLYUIUDFLDSBSIPYMUSR");
    msg.last_error_time = 0.9292466645447006;

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
    msg.setTimeStamp(0.4084238140536959);
    msg.setSource(29475U);
    msg.setSourceEntity(78U);
    msg.setDestination(28968U);
    msg.setDestinationEntity(176U);
    msg.mask = 1U;
    msg.max_depth = 0.9949859932277887;
    msg.min_altitude = 0.44726212240685326;
    msg.max_altitude = 0.6894265281477778;
    msg.min_speed = 0.19142686944848364;
    msg.max_speed = 0.085227090140364;
    msg.max_vrate = 0.8749849731253694;
    msg.lat = 0.9024209052375198;
    msg.lon = 0.38715842826677294;
    msg.orientation = 0.670368776631249;
    msg.width = 0.8499010582832597;
    msg.length = 0.09695779906719959;

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
    msg.setTimeStamp(0.35263530099394436);
    msg.setSource(50622U);
    msg.setSourceEntity(127U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(85U);
    msg.mask = 118U;
    msg.max_depth = 0.14894652423123622;
    msg.min_altitude = 0.14839410482133597;
    msg.max_altitude = 0.3017068541743283;
    msg.min_speed = 0.5783316365375348;
    msg.max_speed = 0.12724544229660806;
    msg.max_vrate = 0.6811848767949801;
    msg.lat = 0.7666526260604151;
    msg.lon = 0.3512202650756212;
    msg.orientation = 0.943815891968491;
    msg.width = 0.9601551518722223;
    msg.length = 0.7453007997025737;

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
    msg.setTimeStamp(0.9357643815555294);
    msg.setSource(59997U);
    msg.setSourceEntity(166U);
    msg.setDestination(8035U);
    msg.setDestinationEntity(131U);
    msg.mask = 241U;
    msg.max_depth = 0.40211658578687626;
    msg.min_altitude = 0.8702828840539643;
    msg.max_altitude = 0.28325761877548283;
    msg.min_speed = 0.7045838991725886;
    msg.max_speed = 0.6960851055154155;
    msg.max_vrate = 0.4296661802106998;
    msg.lat = 0.5765423786920372;
    msg.lon = 0.9621419435072446;
    msg.orientation = 0.5015673829705942;
    msg.width = 0.8771813925532823;
    msg.length = 0.13918021875601727;

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
    msg.setTimeStamp(0.7656521211707213);
    msg.setSource(52156U);
    msg.setSourceEntity(63U);
    msg.setDestination(59758U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.789138398865177);
    msg.setSource(39607U);
    msg.setSourceEntity(101U);
    msg.setDestination(25688U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.5451954859031891);
    msg.setSource(44308U);
    msg.setSourceEntity(104U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.08464658451491991);
    msg.setSource(7782U);
    msg.setSourceEntity(26U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(224U);
    msg.duration = 39648U;

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
    msg.setTimeStamp(0.3803382679350422);
    msg.setSource(10484U);
    msg.setSourceEntity(35U);
    msg.setDestination(12739U);
    msg.setDestinationEntity(150U);
    msg.duration = 24271U;

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
    msg.setTimeStamp(0.6946558278662593);
    msg.setSource(39509U);
    msg.setSourceEntity(37U);
    msg.setDestination(50076U);
    msg.setDestinationEntity(152U);
    msg.duration = 54474U;

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
    msg.setTimeStamp(0.4752786997788183);
    msg.setSource(35647U);
    msg.setSourceEntity(175U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(125U);
    msg.enable = 238U;
    msg.mask = 1636733940U;

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
    msg.setTimeStamp(0.2796778913388399);
    msg.setSource(38970U);
    msg.setSourceEntity(194U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(39U);
    msg.enable = 213U;
    msg.mask = 4155131639U;

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
    msg.setTimeStamp(0.2079651386660898);
    msg.setSource(33055U);
    msg.setSourceEntity(31U);
    msg.setDestination(43977U);
    msg.setDestinationEntity(151U);
    msg.enable = 64U;
    msg.mask = 1839852414U;

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
    msg.setTimeStamp(0.5618330255185682);
    msg.setSource(50095U);
    msg.setSourceEntity(233U);
    msg.setDestination(56924U);
    msg.setDestinationEntity(236U);
    msg.medium = 20U;

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
    msg.setTimeStamp(0.2963139918375355);
    msg.setSource(55306U);
    msg.setSourceEntity(185U);
    msg.setDestination(17223U);
    msg.setDestinationEntity(144U);
    msg.medium = 220U;

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
    msg.setTimeStamp(0.755489517007973);
    msg.setSource(43368U);
    msg.setSourceEntity(220U);
    msg.setDestination(12388U);
    msg.setDestinationEntity(182U);
    msg.medium = 170U;

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
    msg.setTimeStamp(0.7291733147402303);
    msg.setSource(57660U);
    msg.setSourceEntity(142U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(19U);
    msg.value = 0.5117525991682788;
    msg.type = 25U;

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
    msg.setTimeStamp(0.7682150055303861);
    msg.setSource(31357U);
    msg.setSourceEntity(91U);
    msg.setDestination(28096U);
    msg.setDestinationEntity(225U);
    msg.value = 0.04798790627566252;
    msg.type = 237U;

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
    msg.setTimeStamp(0.380989749355206);
    msg.setSource(62514U);
    msg.setSourceEntity(96U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8666670364877456;
    msg.type = 32U;

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
    msg.setTimeStamp(0.471714678076107);
    msg.setSource(50167U);
    msg.setSourceEntity(32U);
    msg.setDestination(64431U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.47557137561176654);
    msg.setSource(28962U);
    msg.setSourceEntity(70U);
    msg.setDestination(37557U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.3039387922761757);
    msg.setSource(29872U);
    msg.setSourceEntity(99U);
    msg.setDestination(44846U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.18378251959260716);
    msg.setSource(3611U);
    msg.setSourceEntity(67U);
    msg.setDestination(55173U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("HMKBTGEOTC");
    msg.description.assign("ITJTFFAIQCZVHZZEVNPXEYLXKJDDFJGILBYEWSLASPFTSMKNDSBXOODOTURWBUQWNAIRUNDOMWHTPXYAVHCJKKYXDVWRPHRRQGFJJAGQIULWSGPFHPSPWHQSZPZNOUVOOFVJWMGSRHXELEKKEFIAUYYYDGVIPBEAZJEHUTGCBHRLLQTVMATCACZWOSLUBNMA");
    msg.vnamespace.assign("SFIRRSJMWTEIEHCFBOFDTFPUFVITJNWSBBOXZKVLZUQWAIVCEJUQBHLQPIJOZMPSQBTDDPYUZKYNZXWWNRMWCTQOHGUIKASNOKWVQET");
    msg.start_man_id.assign("PXUHWVWZMVHFSDITGNSZYTSXMPUQEUSLRVVRIMMBTIPJDMVSUGHENTVOYQHDSCTWVSUWDOTEFJJOPNEHYAFIGHMKGEOBFDYBKFHWIUVLQCLFJ");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.start_lat = 0.8179938644169679;
    tmp_msg_0.start_lon = 0.8276834517065065;
    tmp_msg_0.start_z = 0.6106776311724638;
    tmp_msg_0.start_z_units = 200U;
    tmp_msg_0.end_lat = 0.14433486075457824;
    tmp_msg_0.end_lon = 0.3500695823808947;
    tmp_msg_0.end_z = 0.04055334200594041;
    tmp_msg_0.end_z_units = 106U;
    tmp_msg_0.lradius = 0.2685123049469711;
    tmp_msg_0.flags = 57U;
    tmp_msg_0.x = 0.00724625516886912;
    tmp_msg_0.y = 0.14189432897022403;
    tmp_msg_0.z = 0.8171088953499376;
    tmp_msg_0.vx = 0.42070579154029486;
    tmp_msg_0.vy = 0.1530704017340122;
    tmp_msg_0.vz = 0.9800936639481005;
    tmp_msg_0.course_error = 0.7066631283132171;
    tmp_msg_0.eta = 16351U;
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
    msg.setTimeStamp(0.851186964587719);
    msg.setSource(53783U);
    msg.setSourceEntity(246U);
    msg.setDestination(29345U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("TTVHMBCEOBQNSJOKLVPNCNMZYEPQKWJIQAILBWXZUJJRXCXUOIGYRTLISYKACIHSIJMEQKHPQHLXONOJWNXCDKUAHQTRNFCUPZJEZGFKHGWDJYEDIGJNVYXADAGQTMCFEQVUIXXURFGVPKRDEAHZRENZYDHROGFSPKVOSIFBFVPYAJMZPMBLMOB");
    msg.description.assign("LKRQAMOUTHAZQEIJANIYVCWHKLWYHPOFKVUVXNCQGKRWIWBIMCDTGPCORZWGJYSFYUAGMDEVMOGLPTICXMJFVLNWNSPUDSBEHUHYKOYCNEXQSUGATNGLKHSXLOUIIDSBJGOIPGSLRARMYRXMUZDRDVTUEXEJEUATVZZBOEPVECNWPZMN");
    msg.vnamespace.assign("BPUECSTXERIV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HNUDSTSKGGTKO");
    tmp_msg_0.value.assign("UGDJIROIYVRWHBNSCJLPGLHQUOPXJTTXWVPANXSWGVWCTZKTVJJADYVMYZGGMSBHHLCSUQYZGSQWGZOQOPZMFTMKHWNSPLCNBXFLLZPKNXISFQWCAABQRKQBHXQHIJNWMUICMSSNOGFIKGMPFDPDJFKKSATEJYZRZYCEYAEUXRKHTPVWNAREEGDDVEFOJIFWAQOOBTBTKNUIEVYHRQMRFVYBZXDZRLEUUARIXMOUBDDMLEXPVLBLCOJCIEY");
    tmp_msg_0.type = 62U;
    tmp_msg_0.access = 229U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NXTBQQUYJTKWOSMMRBZQELXOPQXFYDHJXVCNHFOEZQALTLBGCLUDZBZYKLPUNZOSIYBMGRCCAKYFTCTMFSDSVWWWWKBDVIIQPTEIVEGRODDLNRFXSZUFUOKXSMLPI");

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
    msg.setTimeStamp(0.7789415320587567);
    msg.setSource(24843U);
    msg.setSourceEntity(228U);
    msg.setDestination(33987U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("KMHEGPUWPNWMQVBAVKWBDRADMRDCSNQVCTIYGUOUDBBQEZQTIGVPODSWMHNBTAOLTABYSXNDSHJIUUKPASWDNKXFKRQHVW");
    msg.description.assign("ZMSYOFTZDQSHFKVBPQMXTXUMXGXRDCYUHYOQXDYDAUSUTOLTZVIIPMRBKMHNOZCOSCSIUQGMFBNNDWOYGEVYBRRIDBPZQHUMMRWVRQJPYLGZDFATBPHJXBNFZZOJMKWNRQTWWCIICFSVDEJZKKYEEELDLFPJLYAHRWLPVCSSWOPIAPAIJBJGXQAXMVWRSAIEQBTWWNLEATGDOTKKGUHKVYCHBTUKEGNQZOVRCJUCSEEIVCFNGPAJHL");
    msg.vnamespace.assign("TIKUADMCMWKOWRPRWBVHDFVREBFPBBXBZXYEOAWIWERFYJCOYOPLHEMJTNJUFOEVTLH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PVALHFQRYRFMNVYIMAQMGUHEGEOGKJDCSLAOF");
    tmp_msg_0.value.assign("KXEPTAQDKRCPJRZJFPQXUQGBSCVAHOFTZEZNTQJRMGCZUIDLGSATDMAJBPMLHYZJCCG");
    tmp_msg_0.type = 129U;
    tmp_msg_0.access = 149U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BQDBQQTKKBEXWOTRHSGDFDWYNYKTSCRHOZGFZSISYNUESLYREQQAGMIDGJGAGLYEZSAWYIZSSQNKIHNNLMAPFJBEEUYWHZAHUCCWTMXIQVXNRIHROMUCDAXBODOQXUCSXZPDVFFNFRUWJVPUTGLJMVJKMHGIJJPOOXSFUCHB");
    IMC::EntityActivationState tmp_msg_1;
    tmp_msg_1.state = 19U;
    tmp_msg_1.error.assign("HDLYKNEELPWANWJKIRTTJDQUOIDBVUTZTSPXKKFOUDWVLTMLEEZKVACRUGICCAFWMMWZSXRHJHKYCXQIFELEBDJYLGGGNFOOGXNRQVIYSXX");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredControl tmp_msg_2;
    tmp_msg_2.x = 0.007772514867822489;
    tmp_msg_2.y = 0.5495219539846966;
    tmp_msg_2.z = 0.8775374007244112;
    tmp_msg_2.k = 0.5816773410936208;
    tmp_msg_2.m = 0.7701779018313661;
    tmp_msg_2.n = 0.5901440019388441;
    tmp_msg_2.flags = 183U;
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
    msg.setTimeStamp(0.47380770580169884);
    msg.setSource(7706U);
    msg.setSourceEntity(39U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(199U);
    msg.maneuver_id.assign("WQCUXLELQPSDHZTBMQEOZLJCKWETSBIZZKGZXDBVXPKIFAMCWKRFRHVAVUBNLVQIOANXGQDKSEZTXOGYSZDVNWNVSJKMWKYDTZJRJDUW");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 40387U;
    tmp_msg_0.custom.assign("VKEJHTBEIUCUPSTTGDQYPLCHLZIRTJRMWKPXMGSPIJHMGTVEEMRHUVRAIOQZKQIVAHIBEWKUNRYDDTOBWNJLNAGYNKGNSBZVLBZGKOOIKYOCXANDLKBBDGAFJJYZVAUTCVKQQYUVPJSNWUFXJWOZCETSB");
    msg.data.set(tmp_msg_0);
    IMC::VideoData tmp_msg_1;
    tmp_msg_1.id = 167U;
    tmp_msg_1.width = 7884U;
    tmp_msg_1.height = 64101U;
    tmp_msg_1.widthstep = 21767U;
    tmp_msg_1.channels = 35U;
    tmp_msg_1.depth = 37U;
    tmp_msg_1.finaldata = 100U;
    const char tmp_tmp_msg_1_0[] = {107, -65, 61, 38, -104, -23, 101, 25, -37, -80, -104, -39, -35, -4, -11, -49, -112, -115, 30, -32, 11, -39, 90, 50, 79, -77, 1, 12, -72, 96, -63, -109, 2, -107, 21, 94, -113, 92, -59, 91, 56, 24, 19, 113, -120, -17, -72, -15, 4, -4, 123, -91, 1, 91, -32, -35, 111, 57, 111, -124, -97, -20, -28, -5, -66, 42, 16, 83, 26, -50, 101, -79, 17, -113, 112, -25, -60, 22, -23, -78, -96, -59, -104, -84, 120, 96, -46, 16, 126, -125, 20, 5, -65, -60, 72, 73, -41, -67, -94, -62, -109, -114, -87, 2, -83, 29, -124, 83, 93, -17, 111, -75, 101, -88, -67, -16, -46, -79, 79, 7, 40, -3, -67, -2, 106, -66, -104, -70, -22, -84, -1, 70, 25, 89, 70, 6, 44, 44, 101, -96, 117, 106, 78, 98, -49, 1, -13, 28, -15, -25, -84, -43, 125, -50, -17, 70, -114, -128, 111, -22, -74, 71, 86, 61, -28, 38, -44, -87, -60, -13, 89, 60, -23, 101, 101, -21, 12, 47, 114, 82, -122, 99, -12, -41, -50, 30, 95, -94, 20, -115, 87, -12, 5, 98, -45, 56, -28, -119, -4, -114};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.9877815775463555);
    msg.setSource(61230U);
    msg.setSourceEntity(14U);
    msg.setDestination(44249U);
    msg.setDestinationEntity(202U);
    msg.maneuver_id.assign("ITQQLUOKTVOZLCTWSXEPUCIMKMHTPVPUD");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.992962367223379;
    tmp_msg_0.lon = 0.5488523678651405;
    tmp_msg_0.z = 0.5142852891447901;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.radius = 0.5960657759948843;
    tmp_msg_0.duration = 20618U;
    tmp_msg_0.speed = 0.9226441400308449;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.custom.assign("BUKBORNPEMLVCQN");
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
    msg.setTimeStamp(0.29804408147589057);
    msg.setSource(63862U);
    msg.setSourceEntity(77U);
    msg.setDestination(6385U);
    msg.setDestinationEntity(185U);
    msg.maneuver_id.assign("CFHKUOXTOQUJBJZTQVCPKSNWOSMHGGWYHOHONIBFDEDIJHTXAXBISMCBNRQQGXZULSOBYGQVJYDRGWPKAZCATERPMIVZLSXLXUQJALRMUMUHKHRXEENIYFZUUYEXPECNFCALDTKIZBWKMPEFNOJGXWOBYKXHVSVCCUKUEDHPIZHNRQMYZT");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 52188U;
    tmp_msg_0.lat = 0.4024705374840045;
    tmp_msg_0.lon = 0.5527598131329895;
    tmp_msg_0.z = 0.19577641613546914;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.duration = 2586U;
    tmp_msg_0.speed = 0.9524573115404287;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.type = 82U;
    tmp_msg_0.radius = 0.6195249282237579;
    tmp_msg_0.length = 0.2848084433635345;
    tmp_msg_0.bearing = 0.5589897996627025;
    tmp_msg_0.direction = 187U;
    tmp_msg_0.custom.assign("ARHPIIUPGYSNRJMCJTVAQGIVKNQBOXPCJXXGBPTMEXUEECSOQQJLKPFBBLVUUDFHZCSWVDDVTMENUHCGGOLRZNYSTINECYOAZFBCZXYLBMRMUTFJDMDYEOCZIRIGCMJAHFPWVOKNKJKDFAPKOQZIZ");
    msg.data.set(tmp_msg_0);
    IMC::LedControl tmp_msg_1;
    tmp_msg_1.id = 180U;
    tmp_msg_1.op = 167U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AllocatedControlTorques tmp_msg_2;
    tmp_msg_2.k = 0.27024219997132204;
    tmp_msg_2.m = 0.0957582840556308;
    tmp_msg_2.n = 0.7449077888524981;
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
    msg.setTimeStamp(0.35793198467201726);
    msg.setSource(52360U);
    msg.setSourceEntity(101U);
    msg.setDestination(10273U);
    msg.setDestinationEntity(8U);
    msg.source_man.assign("HFVWMZWAYDWKYIQHTNFGATZEVEQXCLMXMXNVIKOOZBORDKRGVDJIJNOYSXLLBSSSVPNPQVOFWSGTGTSURYAOGBXFPYEENPKKJNARCWQQUCAGKDGOYDYHARHMMFKCNWIDBXZCJELVBQFGQKIQHLIBMCUFUUMTWVTE");
    msg.dest_man.assign("NTILNUPLCTGXQFZSNNWDICESOIYILVIQPZUMVACEHHFYQJBA");
    msg.conditions.assign("MFWZIITSSKVZXBZKMWTHLCQQCOW");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-10, -64, -46, -48, -44, 92, 38, 111, 60, -113, -98, 126, 54, 123, 116, -30, -39, 100, -20, 77, -48, 117, -115, 12, -91, 29, 92, -128, -72, 4, -82, 124, 74, 22, 101, -102, 12, -50, 46, 51, 66, -97, 88, -35, -67, -82, 105, 106, 85, -112, -11, -40, -22, 79, -107, 31, -67, 55, -28, 81, 50, 93, 120, -48, 73, 24, 38, 109, -79, -21, 116, -2, 59, -106, -33, -85, -38, 59, -44, 19, 79, -44, -88, -97, 76, -3, 73, -6, 4, 33, 35, -29, -72, 105, 71, 27, -116, 25, 79, -122, -44, 43, -53, -3, -56, 15, 51, 49, -89, 22, -65, 73, -35, -105, -81, -106, -100, -67, -98, -9, 68, 102, 109, 27, 90, -59, 74, -106, -99, 26, 104, 73, 34, 123, 58, 92, -11, 57, 123, -58, 17, -19, 6, -94, 49, -98, 112, -79, -116, 62, 20, -120, 50, 24, 52, 114, 115, -28, 112, -77, -62, -6, 6, 7, -53, -80, -105, 35, -119, -117, 46, -102, 92, 10, 29, -82, -55, -11, -77, 11, -84, -118, 13, 97, -28, -79, -61, 95, -72, -25, 23, -94, -125, 24, 51, 103, -55, 106, 14, 14, 34, 122, 126, 29, -26, 72, -108, -108, -93, 25, -82, -4, 126, 32, 115, -74, -65, 120, 92, 40, -23, 67, -56, 57, 28, 126, 44, -126, 29, 57, -61, 116, 60, -76, 70, -10, 109, 18, -26, 98, -61, 119, -114};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.45436811795734255);
    msg.setSource(43675U);
    msg.setSourceEntity(138U);
    msg.setDestination(22996U);
    msg.setDestinationEntity(147U);
    msg.source_man.assign("LLDAUSDNHIINMXGWWYYIECQVITUPESTQXOOBWPMFVNGEEUATHHSIHXMJZGSYVSCARPAFOZQURFHSDQZPDSLBCZUJKPUQADZWZSBOJEPKLVYKECPTJGJUPMSVVKCJNVYDGXIVHRBCXJWFLXTFCMREKKOCSMCZRHDOAPXAQFVUNQWURIJIHHGMCFFEJYUXYEDIHOODNBKNRGOTXPLKWDLEGBTTYVLRWWGOTLB");
    msg.dest_man.assign("HQODONYVAEZBWULHNKFCMLMZEMQJQNTJVJGRMFWJXJFXFTZTHECAVPCZYKQUYBIROHIYDYBYCUHDASQUYWBSNQYVBSZILIRMOQHSFTMXOIWPCOAUKCDASMKKJGSBPWWDXH");
    msg.conditions.assign("QVXBWDRWDYFNSCMLGDDGBGBFHILMQXBMCWIXIGZEHWPISLLACBSNIPJKHTLUPFABSFTQXLYGMNCBTVHJOOAKCFQMAEJAXPDGRQRXODBMMTDJFWKJZWPRYYZEBOZOJTIKWNAUGTTVHNUSYOZRCVZATSUIEPWCKNXLWIRNHMPHZVZAQU");

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
    msg.setTimeStamp(0.019034557754097903);
    msg.setSource(16069U);
    msg.setSourceEntity(80U);
    msg.setDestination(6977U);
    msg.setDestinationEntity(210U);
    msg.source_man.assign("LZBNKACDKSYNLQMFOXPWZRLZIGYTEGIQIOAYCUJUKHCWUHXPZKDXLVKKEPWLTNQFCTWLLUDIKMN");
    msg.dest_man.assign("RCABJPSZABXZSYMNLVJORTANLPPUTTGJJRWPNFVASNMSJGXY");
    msg.conditions.assign("RNJCTIAPUWJAEZLLSQIOBBAVSEMYWMTHAFIUOLHYXNYZMCRXFFAHAUGVEJPHNGNGURBUUYZTKPYHMDMGTZCOZFWCPRBNFPQXXOYXZSWDZXSQNPEIDRGTJHICJUMYWQBMAVSNXZWPGGCUTXJTAQFNHEIKCOKPJZOCVKLQLVIGATFJWFPSSDVDEXBKCETKSYYRBBGHUEIAMQNKVQSPDJNSKDLFWLXRTIBVDVIJHRLOKRERWOVKOOYBQCQL");

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
    msg.setTimeStamp(0.1402472405343309);
    msg.setSource(61154U);
    msg.setSourceEntity(242U);
    msg.setDestination(61737U);
    msg.setDestinationEntity(34U);
    msg.command = 208U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PSSCAQKJWBJSAWVOBKURXKETOIDQJMLBFHTJNYCXPFTRTDTUFUVGQTEEUOLRAPIVBZTSHIJQHGVEKXBJONIHHTLBZNMRORUODV");
    tmp_msg_0.description.assign("UDBXJMLASFCFCSBZQNETQVZTDERCXKYNSXMHJUGYDO");
    tmp_msg_0.vnamespace.assign("FPHSIOSMXYADQCAOUTROQFTLXEASIQGBJWNTOXCEPJYPMUQYLZTZLDKANUDQIJURLFPCPAPDSARBCHAETNFYBIKYXTDMKSMSKEZYCDKVLITCSLXEBMQCIOIXLFIXZAMOGGEJVJWBSOHYEAWNXFMGAURIVMLHLWHYWCHWKNZTRBXHWVSFOBDRKUDWWJBDJNFR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JBASUTWHVNOVQZQLEPBOPGTOCSFOUNDGC");
    tmp_tmp_msg_0_0.value.assign("IGRWLRGUNZAFAXMKDKJTJFDXMQQSAYTFVGCPBFRNUWQYMZYFQKXPKWIHTBCHRUNKNWDEZAHNRPLTIUQXJYKLSVXUEUDFONSQUPHDHSVEWTIEVRIALPQGZMLLWVJGZTFZZLTCISBKFSNMCJOGVNZMYPUUZPPQYGCBHOYBMFVOJCVKQPEIUWADY");
    tmp_tmp_msg_0_0.type = 204U;
    tmp_tmp_msg_0_0.access = 82U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SGEHBXMKGBCCMXUAXWFXDZDPEFEOYIOPKQWGRTYAKGTSWGPMWJOSYYDRAWZKZWYDUKUJXGQCDHLUOEMYSZNLMVUSSVKLCHMCJJIFFXXPLMCTLZOPDVZRQBYBFDAWXGVFSMBQINSYPBJEDKOOFQDEASYNTGBHZCVOHEFVBAVNKNERUUTXLINAWOLJIIRZIAITARYJTRNMQTTSDHNHHHJJQPVCFWQQUIKFBLUCTLPKVGMRZUNAR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ARUOCNVOAAOHAUVMHXUYYPMQDZCRPKVNDAHUHGWRUEWEHWEECTCJBNDCJSWLJNPSCGPZQBWDIFCMFWEQIEXCROYQ");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredHeading tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.6188352121336014;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 59935U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VMDCUQSLYEDJDADVOOSNAELKTGYXEVXF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::VehicleState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op_mode = 38U;
    tmp_tmp_tmp_msg_0_1_1.error_count = 188U;
    tmp_tmp_tmp_msg_0_1_1.error_ents.assign("HEHGEPJHGXHLXKJBGTDBCKGMTLWEUGTBKDVPZLRSSMANSS");
    tmp_tmp_tmp_msg_0_1_1.maneuver_type = 8453U;
    tmp_tmp_tmp_msg_0_1_1.maneuver_stime = 0.12326233477105786;
    tmp_tmp_tmp_msg_0_1_1.maneuver_eta = 37058U;
    tmp_tmp_tmp_msg_0_1_1.control_loops = 2582926186U;
    tmp_tmp_tmp_msg_0_1_1.flags = 4U;
    tmp_tmp_tmp_msg_0_1_1.last_error.assign("QWPNHBVPIRZQSQPEUUIPSCQMJYHNJTSTJZLAOJRHSEWXBOOXVRCDPOMSYURTVAVMKRYMMIAJLWICGVHIMFZMFTUCJBYZETTEGLCAHFKREZDGUZZZBDULXLXKZIVFAYFEGCIAXNEFNDUVKWNATSRBYBWKIQTBHMQFWASCCKQQKXDCMLBOVYPKX");
    tmp_tmp_tmp_msg_0_1_1.last_error_time = 0.20008706235912743;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Rpm tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 24640;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("OJJPBDYZLKFDZYQUSRRHYQRLXALVPPJAANZANUUWWQZHTBRTWVONKVRQGHUXRFKDBZCCOEGUCIUGPCSGSWKHKUEJEOFPJNTKOEQYZJVG");
    tmp_tmp_msg_0_2.dest_man.assign("YJKKLFCZYAJUEVUENIFNUWTVCCYBTOHXSWVGBSSLOTZROCDWYALHFNWBADTJDNRRVFZULPACPOQWXIQLJJEHBMQBMQGEIJHDZVMFAUBOQOBKFQMCDFGTLNEUONIIDXMRIPEKKGZNQSRIVZMSUKBWBYRMEEFAFXXTPYHIVZGKPMHORCSATSULWAJDGYTOZUNODHTGQVSMVKTHRPHNJPNXPSEIXKBLQZRJJFHVQARCMKCDEGGXPLIWY");
    tmp_tmp_msg_0_2.conditions.assign("COMZTWAMOFQLCYRSLNOPINTHRPMRXDSRZYGEJIRXYWZAOXUBPMVJMXLXZVFZIGUVJHFCDLJMOFBCLAGIOWYKEFVPPFMHGXKGELNXKTBN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::Pulse tmp_tmp_msg_0_3;
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
    msg.setTimeStamp(0.2052546481659292);
    msg.setSource(18855U);
    msg.setSourceEntity(133U);
    msg.setDestination(30535U);
    msg.setDestinationEntity(230U);
    msg.command = 253U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IMTSCANDLGISURQSAI");
    tmp_msg_0.description.assign("BKHREESXYXZWXA");
    tmp_msg_0.vnamespace.assign("FMXRZFPZMZXOPEYVTWZDCLCPIGICFQQJPJKWETEJYSMHQSWRGPFSHZGVQDBXSNTBIQPVIVXOXZMMFTMDNRRGKIJQVUDLWCSRGJPLBNFOHHBTKICSGWMRVLKNAZBINBDZ");
    tmp_msg_0.start_man_id.assign("LNGWKQXJUHMDDJLRVVHOSTWDNKPMMOXOINZLNFFDAGSHRWLKETTGGXLNRVFWLBWPQGRFPHFVZTEXZUFAIBZSDLRPBZMCRYAXYMIKXYJADFKCTHVEHSIUBZYPPEROOJJSCAKCTJEKGYQYIVSXNJCANBIBND");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("ZUROFOAIEWPNXAKWPCHZCOWOJBRJRLQWZAZYKEUPLDTGKMIBDLZWTVZQKXX");
    tmp_tmp_msg_0_0.dest_man.assign("GJDKNOUMMJYPXLPBMIXIAFSXFDELWHEXTHF");
    tmp_tmp_msg_0_0.conditions.assign("DNZTAXSLFNGSVVGHOG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::LedControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 179U;
    tmp_tmp_msg_0_1.op = 229U;
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
    msg.setTimeStamp(0.6789238935167303);
    msg.setSource(37729U);
    msg.setSourceEntity(94U);
    msg.setDestination(831U);
    msg.setDestinationEntity(160U);
    msg.command = 218U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DOPTBQBRZVISLCGGIEHHQFMMBRGTQXVNJINEWQZCNCXNNEQRPAHSFUKWDVCYORZUXBHLPDNQAPFXJOJSFIONYQTFKLU");
    tmp_msg_0.description.assign("ZPALCACHIEBIOGMAVKULXHDWFMKSVRQBARPUDFBJABKZSEVLCZRWUKCSPFPKGSXBMIDVSGMSWFMLIOBKLTXNFTXSDDIHJKDVWYHGOCFHECERRPMHXTGUZRQIJPXCTPQEQJFTZGZGLQUYIWWVNGQHVGUJZODFAWYUDUGOJYTZMVTHYANVBIYYCAPQWOKYNEEPOWYOSUNPAHXSMKLLAJKVLRQRBNZRHXIUE");
    tmp_msg_0.vnamespace.assign("OKEYKJFGOICTZQDUOELBBJABWWTIHXBQALSDVXIZNZPVPVJPJRHWNDAGPOLVCXDBVRIASJFXICYGIDOTUFJKZNULSSVKLKQHWGUZYTNTIWPCDLLTRUIEHMXSFLQWMLASHHFEPDHZCAUMSVUYNRRYXOKKTBCYNWXIZQCMDZTHHYX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EYGIEEBMWTFPKKYEUBELVYCJJYNSHFKISMJVYURILJCLJSOUNJPRBJUMLMAKDGGGEGVFCHUDLIMQYYKINGWPCTWOSSQJLFQKHHSZLCPAFHCPDUWZRXQJQUTVQBZAOXRBVNFAUFZVIABVBFNIXRQMTTDPPFODCWMQXDKDIHURZZWKCLVLJWXONTKOOOZHAPHYGICPUBHED");
    tmp_tmp_msg_0_0.value.assign("EBGXJVNHGGNCNSXDUXBIJEJGUCPOVUVLOAQHQKCFWEHTRRWDWOMLTPYCURTDSYFDVVDWONYFZSPMERGJLZTGXUAEFIGFMSAKUBJSZQFWS");
    tmp_tmp_msg_0_0.type = 179U;
    tmp_tmp_msg_0_0.access = 231U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AOBTMLBMRTFFSZVVARJAKERIMQPI");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TBQXBMDEOOXYQ");
    tmp_tmp_msg_0_1.dest_man.assign("IINOVNMJHJPKEZMOLXREMDNYYEMEGQVQUZQCMJDROBTAHVHHKVITWVQLIDOJZMUAXCJYBDAKBUHIURGJEXYHGWOVSORWUIJEMATXYFYPFPZTXDDQLPQBCTMBEECPQENTNAFPSOCLFPCZSPRXHMQFAYSAMDWOXUKBLCGQAKVUTHSGPKISCRFXOKDNT");
    tmp_tmp_msg_0_1.conditions.assign("LKOKGOBQBCFLMKHDEQYSWHFZVMXLVNEWFMULUKHXYXBEGLPYRCTNISTOHWQRPDJRZN");
    IMC::AllocatedControlTorques tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.k = 0.506256445779319;
    tmp_tmp_tmp_msg_0_1_0.m = 0.7891685959021526;
    tmp_tmp_tmp_msg_0_1_0.n = 0.6571627686408473;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DvlRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 254U;
    tmp_tmp_msg_0_2.reason = 237U;
    tmp_tmp_msg_0_2.value = 0.11476242258518432;
    tmp_tmp_msg_0_2.timestep = 0.1829586835562842;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6263225884829029);
    msg.setSource(1024U);
    msg.setSourceEntity(109U);
    msg.setDestination(51665U);
    msg.setDestinationEntity(79U);
    msg.state = 106U;
    msg.plan_id.assign("LMBCPOQHJGZWQIYURNRIVTNPUMSHOLRRUARJADDMNNOHIKCWZPSAMZPXNKOTFJCBWEDQROULJZDFOYHWGCCSXZKHZXYOBTIGGPXYOEZQFKBXSXSNBKAPLHHNMFD");
    msg.comm_level = 160U;

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
    msg.setTimeStamp(0.37568993844611054);
    msg.setSource(2710U);
    msg.setSourceEntity(103U);
    msg.setDestination(7144U);
    msg.setDestinationEntity(118U);
    msg.state = 184U;
    msg.plan_id.assign("HVUXNWZSVQCUWYIORHAAHGSMYAGZUMUGKVLREVPWJDKHSBGAFKJAXJTPZLJKFCQGSLEWZVQMVKONGBKAGNQDZX");
    msg.comm_level = 106U;

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
    msg.setTimeStamp(0.6761483602593884);
    msg.setSource(47958U);
    msg.setSourceEntity(247U);
    msg.setDestination(45421U);
    msg.setDestinationEntity(189U);
    msg.state = 189U;
    msg.plan_id.assign("VDDWBBGQPIPKGACAYTCFXPWMYNZO");
    msg.comm_level = 91U;

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
    msg.setTimeStamp(0.43156499637171464);
    msg.setSource(39253U);
    msg.setSourceEntity(111U);
    msg.setDestination(5239U);
    msg.setDestinationEntity(78U);
    msg.type = 15U;
    msg.op = 193U;
    msg.request_id = 12466U;
    msg.plan_id.assign("RBZRJCOPCHJUYTEDNAMQDGOGVMIFBROWWNCFWFZCSSBSNLSHYYOHILDHMEBKTKDXITCJGYMQTVOWODMXNXLUJHVTLOMUAVZIQZSJJEEBGMATLZWRPYPXKUOJYKEFFZRBLRCWQDB");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.6953042153365365;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SESMOQNQNRHWRKMTUZTUSMFOYATFBLKLPPWXBPPRRYCZJLTGICOZRQDRNYFVRPBSVQJELJADSWGYQTGJHEZFHKUCUAIWJWXODLZKHSRDAMGRNIYNIECEQAKIFPBVUBLONPJHKVPGTFLEZTMDUVOJXYCOXQVKDZXDTCSIDIWBBGIHGNXQCSCAMCKENYJTBCUJXRWNLJSXEFAQIZGPOIBGXYHLUUAWDUVHZEXFVGMOLVDAEFVMWPQKZYMKHBS");

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
    msg.setTimeStamp(0.38265536881642415);
    msg.setSource(18513U);
    msg.setSourceEntity(227U);
    msg.setDestination(54736U);
    msg.setDestinationEntity(86U);
    msg.type = 8U;
    msg.op = 234U;
    msg.request_id = 38044U;
    msg.plan_id.assign("PCNABYMBEYRNKFOGDZFPHSGLUVXRSVJHKZDAFMJBSOQIXBNJKOKVMQAVEQOHEJSIWSVTRXBRVKSCYFJIQBAUOXDEWPCZETMFLSTRUGWHWUOLLWHGXNCFCMYZLPSUMRCQERDMJMBQTARPYIYXDSEFGHDPLUXWNIWXDLTUZEAOOFNMBQVPKEGUKEAWJXITRNJCQAZZYGDFNSOLPGKNQTORIKZMHPDZCVITLFILYWJTVGPYA");
    IMC::TeleoperationDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YBXHXYIDDPNGSPEPNRHSMRCWORLVOUGWJSUBTISKIGSEAL");

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
    msg.setTimeStamp(0.07077555991112816);
    msg.setSource(30709U);
    msg.setSourceEntity(89U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(233U);
    msg.type = 244U;
    msg.op = 110U;
    msg.request_id = 3023U;
    msg.plan_id.assign("NMJESPYTEDDOSQVJFDWPQSTQUMJLCMKTVKCUHRGGZUZEFWNYFWKDXUOENXXKLOWCKF");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 46U;
    tmp_msg_0.mnames.assign("EAZCHZBDGAHFCZHBONKQESHLRVSYTMWTYWZVJDKXZSFHOMMYCVVFRQFRWQAXUUUYAAKHCKPTJPDIAVBVUJMNUUXRLSTQWNGKKLXZFXEVZRQPUEMYODWJOTOJXDLWCNEJCBFNLIASKVBIYIYDHIWCWGLXXLRIMHCZPTQMPQGBLXSKJGNTODULMOFPQKKEXUZBNMBEAJJGTSFDEPIPGGBORFANPRWVAGIIZYSQTSJOFTEPBDSYCVQ");
    tmp_msg_0.ecount = 73U;
    tmp_msg_0.enames.assign("YGTXUUCATGPWOYIVREFKUHMYPWHAPVEBHGRZBUWQIWXVMMTBQINDAE");
    tmp_msg_0.ccount = 112U;
    tmp_msg_0.cnames.assign("YDFXOTPKUQKFYVBWAUXBGXMZMMLKLYELETGFBNCRSVBSNIOAUYPHOVUQCVCJJMLJFRIPQKCSTDPBYJCXNDASYHWHDMTIEBLSXSJTRZVSGPIWPGXZCZNYMCYPBKQQZVFFOAQTBIRQGEPMLCRWHGNUGNCLAJWAFNOPOTVNEXTKLSMIKIUAHEJIQH");
    tmp_msg_0.last_error.assign("CKVDXOSERVMIRUNHLLDGNQTMPTQIENXPGWMFBFIBFGZUNGMOCUQYACKXLNWZBJDVEXLHEPZFWT");
    tmp_msg_0.last_error_time = 0.18396860296772555;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ESHQUXBFZSURLBWIGDTEOJMVFAOUYOZNGNADKCYQMHEZXPJJIBSLAYLTKWNJDDGKKCVTWGIBMTQZKRYVPZAKGDKMPJUWELSCVBDBOQLXCUXDDMWHITWXUPZHUNPATOEUINQXWKACMLQLSZTEGKGAMFCWOLJPXCLEFBQWOASIQMVYWRHJQRYKAISGEXVBRDJFEPI");

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
    msg.setTimeStamp(0.9230210196554982);
    msg.setSource(5937U);
    msg.setSourceEntity(57U);
    msg.setDestination(35813U);
    msg.setDestinationEntity(73U);
    msg.plan_count = 1937U;
    msg.plan_size = 376260526U;
    msg.change_time = 0.27514148236401437;
    msg.change_sid = 9983U;
    msg.change_sname.assign("RJHICUHHYERENUMXVASFNALLAXYCGLGKQUWGVMTDHGDAWEGKCRLXPDVNBAWZJWTSATNMAJVSMCHMIYEWXHFIKRPCMRFSHUFNROSJOL");
    const char tmp_msg_0[] = {-23, 21, 53, -111, 96, -107, -102, -122, 49, -119, 35, -21, -92, -113, -34, -9, 86, 29, -59, -45, -89, 112, 104, -68, 91, -73, -14, -55, 54, 125, -104, -107, -10, 121, -7, 8, -94, 40, 119, -25, -5, -21, 10, -109, 122, -11, -101, 124, -90, -20, -33, -24, 92, -14, -57, 122, -91, 13, -123, 88, 118, 75, -27, 48, 74, -53, -17, 8, 70, 53, 80, -15, 91, -28, -11, -92, 23, 36, 42, 72, 6};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KMGEJDAYDZOVFMRLNEURZYLXCQTDYQKMWPFXXCVYYTNMYPHUWETHNRZGXUNCDWMKTVCNSZPCIOWQKUGSUIQPFDBFPVOJTERAZLBACEKJVSIAWZSAWWFJTAQZNTVBWLADUGHYDSQEBQLCOKRPVYMDXFBSKRRXPROLCHOPOJMIEDILOHHNKTINBMJHZVGIUXTJQGEAAFLFFGEUPCNBWGAFUYLVHNTJHXHWMBOIRJQSEURSVYQ");
    tmp_msg_1.plan_size = 52708U;
    tmp_msg_1.change_time = 0.6028586160133307;
    tmp_msg_1.change_sid = 64714U;
    tmp_msg_1.change_sname.assign("AYTLHUDVAYANKIBQVSFBQGHKTYFZBSMBDWPCUVOASJIEHFNE");
    const char tmp_tmp_msg_1_0[] = {-95, 1, 20, 41, 79, 117, -112, -12, -73, -15, -47, -77, 31, 126, -30, 52, -89, -2, 12, -83, 24, 78, -10, -97, -119, -45, 86, -11, 67, -30, -78, 15, 98, 3, 107, -54, 65, 93, 36, 80, -108, -42, -44, -115, 49, 76, 113, -115, -56, 99, -57, 91, 67, -123, 90, -117, 57, -13, -105, 61, 16, 23, 110, -25, -41, 59, -107, -75, -60, -25, 62, 73, 76, 55, 78, 83, 29, -80, 90, 105, -49, 67, 100, 4, -20, 120, 104, -76, 27, 9, 91, -106, 39, 106, -122, -39};
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
    msg.setTimeStamp(0.6672951265010154);
    msg.setSource(5789U);
    msg.setSourceEntity(22U);
    msg.setDestination(52238U);
    msg.setDestinationEntity(142U);
    msg.plan_count = 60918U;
    msg.plan_size = 2802529944U;
    msg.change_time = 0.5983289303898653;
    msg.change_sid = 32669U;
    msg.change_sname.assign("XYDMCUDKNUBKFSLVJYBSEFURBTVONJOKQSRZDOWMEKMLEKEMLPMVAPFCIXJQWJLZRKEQLPAQKEVMUGRLGPRVIICWHZGPBOVAHXINWOFRXKQJHDJSAWOUVSZQNXXDNCBQFOTDETUZNUGYSQMNHYLZOWVRGBCAOLFDLLNTYAIZIKHCZCPWTBUGZDXRHXFGIRJGWBVDNEHXHQBHSYDUCITSQPTSEIFXO");
    const char tmp_msg_0[] = {49, 58, 31, 68, -101, 62, 115, -19, 31, -61, 75, -121, -66, 68, -128, 48, 94, -7, 20, -33, 30, -108, -20, -115, 40, -48, -101, 45, -86, -68, 45, -22, 38, 47, -26, 109, 62, 58, -119, 93, -117, -37, 88, -108, 118, -76, 18, -27, -43, 45, 119, -25, -60, -49, -20, 47, 79, 26, -84, 112, 24, -82, -32, 126, -79, 70, 41, 118, 10, 39, -85, -123, 17, -64, 77, 68, -4, 98, -71, -7, 104, -13};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RPPTSBRSQHDPYPLJUUMEZMERSZBVTDWEJSWOQTEVMEIHMIUIMSCSQARZXGAEKZXBTXPADLHNRYZLDGJYEMNPJGRXFZFNIJOTHWAOHVZBHUNVHWNJKSDTHAFHKPEOHBRKGNQXEGWYCWOIBNGXDMBWQTJNNGOWNISRQRDYGTBGFXLOQLAUKCUDUSWYIDPJAZYMK");
    tmp_msg_1.plan_size = 29792U;
    tmp_msg_1.change_time = 0.691137285760417;
    tmp_msg_1.change_sid = 4709U;
    tmp_msg_1.change_sname.assign("UNNEBPOGHJZEKRUKHEVCYLUAPDYMSCIRICQRPTMSDPLBZPGMUZXRDIFBSPSZKNHQWLVTDMUMUNMNEGAFHZIHORBSYETAQMGYEKXWHYONJVCPHTOXOXADJQKGQMKRXZWQFQBIUUPYNFZECEYFSMF");
    const char tmp_tmp_msg_1_0[] = {52, -33, 47, 12, -98, -36, -80, -107, -8, 100, 5, 66, 117, -88, 71, 64, 121, 84, 85, 38, 91, -87, 39, 12, 42, 8, -42, -77, -34, -7, 103, 59, -118, 51, -80, -20, 28, 99, -120, 90, -121, 56, -97, -10, 78, 63, -70, -86, 69, -86, -68, -58, -109, 36, 126, 32, -37, 18, -58, -17, -47, 23, -107, 98, 41, 9, -31, -117, 86, -21, -66, -21, 13, 38, 91, 12, 7, 71, 20, 94, -44, -45, -95, 11, 47, 29, 108, 14, -82, 73, 85, 115, -69, -64, -58, -119, 54, 106, 84, 74, -10, 34, 0, -13, -40, -109, -30, 94, -91, -127, 55, -118, 28, -100, 123, -63, 13, -89, 123, 12, 53, 41, -41, 100, 3, -92, -68, -93, 99, -55, -96, -50, 83, 66, 49, -70, 99, -57, -113, -79, 20, -43, 109, -125, -38, 33, -10, 18, 118, 31, -23, -64, -6, 22, -92, 115, 82, -107, -118, 115, 101, -84, -29, 52, 20, 90, 29, 71, -51, -84, -96, 56, -65, 110, 39, 31, 121};
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
    msg.setTimeStamp(0.5568568897195263);
    msg.setSource(30353U);
    msg.setSourceEntity(17U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 55863U;
    msg.plan_size = 3768950566U;
    msg.change_time = 0.4093896053470806;
    msg.change_sid = 43615U;
    msg.change_sname.assign("XQILXUNAHJNQWZYEQSEMXUGSAVVJILWQOJANJNLZDJQPBTWOXPOSFRBFDZAWCUWWOLPRMZKJIUAJTGMUFYLGGIJIHSSCQYTUCUKBJXRIRHDKKMNRTRTFPEMCYOAQZVITZXESBYFXWNNDFHLOJCVHFVKKDZPCBKWBRAEGCTPQKKPYEBMFIGMCPDCDSPOHNSYVVTMONRFHHGMNAITCDORLTHLYEIWZLQBELVGUHQVMSRPGYEVXBWY");
    const char tmp_msg_0[] = {-41, -23, -120, -116, -104, -71, -50, 35, 71, 74, 33, 111, -52, 76, -83, 109, 93, 35, 9, 97, 108, -90, 84, 99, 29, 54, -46, 97, -19, -78, -111, 87, -108, -110, 42, -105, -16, 113, -79, -29, -62, -33, -116, 53, -104, 93, -63, -48, 48, 45, 13, -9, 63, 17, -58, 7, -126, 9, 85, -110, 95, -47, -49, 113, -61, 99, 122, 39, 9, 62, -85, -126, 118, -9, 22, 124, 26, -63, 48, 10, 43, 80};
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
    msg.setTimeStamp(0.9655414563445016);
    msg.setSource(22756U);
    msg.setSourceEntity(164U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("EHGVDFXZPSEOZAZGMMDRABQTSZODHEFOIBNONYUKSSWKGBXFXOIKLVUPRXXJWKMFHYLCYKMRTFUTDQTLILRSWPJWIVTDHOPMPCWAZLCOTHAWPDGHAULYYIQWRCAXBMSJJNGJFDVFHNJCPHGLBKCYRLVCYBXCONWVJINUNMJYDERSQOZUEHUSPFRNRGRWQIIBMFMCQPPYIVGKMQVEEUATT");
    msg.plan_size = 49074U;
    msg.change_time = 0.33629203871599134;
    msg.change_sid = 57403U;
    msg.change_sname.assign("AGXREZJGPLRUHFEPCBHKIVMBJHNAMHPJYEWCBVMVGUKGCLCKMDVEGJGTNVVZJDAEHJSNPAARXAANUNAMRJFJTFNJNKIIXPQNFYHHBUYLMKBSDKQTXCXLQBXHXHFILYADTHSBBMQSOWQOFIZUWEURQIEGZPGRQQKYSMTOQCDICKSMCOUATSLPVJIFLVWURDVOFRKPTPOTZQBSWOFKPLFWOETSXVOYWOZLUIYGYWCNRCDBXZDDI");
    const char tmp_msg_0[] = {-59, 4, -49, -6, -23, 19, 25, -115, -64, -121, -33, 107, 77, -15, -86, 97, -71, 19, -113, 40, 53, -114, -93, -56, 115};
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
    msg.setTimeStamp(0.8618024744073525);
    msg.setSource(22468U);
    msg.setSourceEntity(112U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("HZXTVQWXWFORCEW");
    msg.plan_size = 25768U;
    msg.change_time = 0.4981170270343185;
    msg.change_sid = 60667U;
    msg.change_sname.assign("IWBHLIRVWDBUBMWPRFYSELYLHXBZTDRDSODMALYQABCTFMIBLJZZYOREEBXSPIZWDEVQCPTVEHCNWFUQJZFRTIUMUGAOTQGXUJLXYMBAOOGITKWOZ");
    const char tmp_msg_0[] = {-8, -9, 33, -70, 43, 47, -49, -62, 90, -32, 14, 38, 124, 40, -95, -67, 77, -94, 93, -9, 46, -98, -90, 95, 10, -97, -29, -26, 58, -111, 18, 112, 96, -74, 58, 73, 24, 63, 81, 52, -47, -49, 76, 111, 72, 74, 57, 111, -100, 84, -94, 21, 64, -62, -31, 92, -5, -7, -62, -34, -9, -25, 125, 68, 80, 111, -54, -51, 61, -40, 77, 81, -88, 84, 1, 39, -62, 15, -9, 40, 108, -90, -31, -84, -51, -23, 61, 100, 82, 116, -114, 92, -32, -68, -57, 4, 26, -115, 114, -46, 118, 45, -114, -80, 122, -62, -4, 117, -67, -115, 83, -45, -45, -120, 92, -106, -113, 65, -71, -59, 81, -59, -12, 5};
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
    msg.setTimeStamp(0.7687747456371283);
    msg.setSource(42048U);
    msg.setSourceEntity(112U);
    msg.setDestination(13965U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("WLYEPCCBOMSAWPTMQVLCBZBUNEGJMZZJGIAOKVRLRJWOKIZYETIAQDWULYHYBTTZQSOERFWKAOBTDNRKFVNAVJUCAEHWGIVIGEPHKSWPJKVCMAVFUNUWBORSEXYSUVHBTEZXDMMXDDQBHNJKVRLKIGUTHQHGAXLCYXYFQOHREJAPLPFNXWSAQTFUGCGNJYGPXLNDMCIJLZRPSOYQINFKCEZYJRQPFSDDTSRWDQBLOZOMMUXTZHFVCNIGD");
    msg.plan_size = 9712U;
    msg.change_time = 0.2649568717634142;
    msg.change_sid = 58635U;
    msg.change_sname.assign("FDHIDYDKSZVCRAEBBTLURYNHNXJZAWILGMKMHEOUOVVLXEXBSBUQNLGMGFUCZYPPATVJUJPQVYKBGHHLDSVWIMEMKPCUJMADAWHSQGQORCIKLSFDJSHXPWKTPOTVCBUFYZDKGEJVOOSWBXEDJTTTNGITQNIPIRMWSSLEAXCDPHAOZNMKBHJRRATAIUFKZW");
    const char tmp_msg_0[] = {70, -102, 46, 95, -102, -25, -83, -22, -106, 38, 1, -15, 71, -26, 60, -66, 90, 43, -126, -114, -34, 14, 49, -119, 51, 35, 46, -79, -5, 1, 57, 4, 15, -88, -10, 88, -72, 92, -102, 91, 94, 63, 107, -58, -35, -122, -15, -97, -3, -96, -109, -71, -128, 50, -42, 47, -4, 110, -67, -76, -30, 96, -82, 54, 71, 114, 42, -113, -47, -5, 106, -104, -27, -94, -46, 73, -86, -119, 113, -120, 31, 101, 93, 126, -52, -22, 114, 125, -58, -103, 4, 1, -78, -109, -41};
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
    msg.setTimeStamp(0.1489831965098375);
    msg.setSource(9437U);
    msg.setSourceEntity(187U);
    msg.setDestination(2525U);
    msg.setDestinationEntity(243U);
    msg.type = 105U;
    msg.op = 114U;
    msg.request_id = 57752U;
    msg.plan_id.assign("OPYEBRYUUHUWHRLNIEWTNQQUZKBWBXJJBCOM");
    msg.flags = 56907U;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("TPVAWCESTXSQGBOASNSVJPTYVFMLDHVOWLYKJFTFWSVOICMN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OIGCECGFIEWWNVQUNVXHGQRGMVJGGIHJLJZGFCTBHNNRGKCYKBPEFOUKBVAMROXPPDQRTJEOUEPJNPBUILPCYYOMWYNZSDBHFLALBELYKHR");

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
    msg.setTimeStamp(0.7819340897756917);
    msg.setSource(43350U);
    msg.setSourceEntity(158U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(138U);
    msg.type = 136U;
    msg.op = 175U;
    msg.request_id = 16838U;
    msg.plan_id.assign("PSWTJFSUBGKZNQDRLMIFPCOFTJGWWWMSHHLTQHIJAMWBUDVOFPDSYGQAMKKPXMLCSEAVKRARNCYEBIEOURXJNJXZBACUVRAJENSDLTBEKXWT");
    msg.flags = 18276U;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("UINZFFIIWTOHIEHLOTMFMJBMOUKDAKCRESOAGPEDZSUKGHPQHJDZBBLLFYRQFDKGZW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BAMDWSSHFDCISQGYRHTBWXLCWVSGFSRZNL");

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
    msg.setTimeStamp(0.6229829145849011);
    msg.setSource(34516U);
    msg.setSourceEntity(184U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(193U);
    msg.type = 193U;
    msg.op = 173U;
    msg.request_id = 2803U;
    msg.plan_id.assign("LVDHPJGANYUJWKEXUMXJMVPRZUXNEKEBPBTELNZNOYZOVLIDXQBDRHYITKVEF");
    msg.flags = 48686U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("JTOYYKFMGXAQYPWFJTVMTKIPIAXSPSRVKQSHFMUBBBAZIUGSLTPXOLLRPVPHCCZUSNPJKJVQZWIFBEKIYBLCJOGDSNNQVUTZXOJPMGDAQFOMLUJONIEUNCWQYQAWCQADUGENT");
    tmp_msg_0.predicate.assign("GOYEOERTNGOWRSLZIOLRPUPWIADITXGJHHOOFOBEQVLGWTSHHVMWNYPPZQMRPGGDFKVZLEMAJBYXDSUUVWEXJQTQSXLHKDULCCCTAXXBTJIFRPBNRZYBCLFKCFSJCEJDMZLDAMKNVVKDUGQZIHATIDLJEXUNYDMNWAWHYBVZOHGMCRFVYOFGEEJGXTQKOVPQSNJIDSRFB");
    tmp_msg_0.attributes.assign("TSZFPZJDKFOFSTRQEVLNQBSWECTABQFNGDLWHAVBTJEWOXIGSLFRAMPPRXGNZQIAYQYUORWFUJNHHZGJPDXHXJIDOAMCBGYBKWDUHNHIAMUDYSLCMYYRSAXVXKTVKWWOTZIDGHWOKMXZKZPHLMMGVHRJGLTANLCIUGQXFLPSMXPYPNDKZCUESOQQOCTAVXBBFYWJBMUEVIFLCDHUYOIQIJQISESLREJCVTZEKNCGMNWD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FVHGVSDFQFYACNTIIQPDTRPLNJMHFIKLWPYGFUYSPGQOJZOEVMSRQPKESHAUCNPJBEPJUYCTIJZWRLXREHLMDWRUGNKOZOQTZRMLNYIDUVXQMHMSQNXEQBHYGOZIXGKOJLT");

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
    msg.setTimeStamp(0.43339072281405033);
    msg.setSource(217U);
    msg.setSourceEntity(216U);
    msg.setDestination(34548U);
    msg.setDestinationEntity(150U);
    msg.state = 137U;
    msg.plan_id.assign("HLQUKWZDPUEOXIVVYGCNVJTNFAFPJXRFNDTSMXWMJIYPOTQPQWETCYCVQBJHEHSEJVCRUHXKSTGZYJ");
    msg.plan_eta = -1593383597;
    msg.plan_progress = 0.3958245420760709;
    msg.man_id.assign("UTKWLZYDVHMWINXGMGNQRESCYLUWAJMVDHTCJSTEYKNEQLPACGEKVKHPCUOIRILBQLWGJUJAYAXZFTPPIOLOZNDSDMGSATGZGLFXLKNVIEJWDBIXGWPVJWTZEQFWRGSKOIDQEHHXLSNRFMWUZHQZAONQETVFRTDYTCSOUEI");
    msg.man_type = 21851U;
    msg.man_eta = 532005442;
    msg.last_outcome = 230U;

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
    msg.setTimeStamp(0.7646176511019617);
    msg.setSource(48019U);
    msg.setSourceEntity(196U);
    msg.setDestination(8277U);
    msg.setDestinationEntity(0U);
    msg.state = 117U;
    msg.plan_id.assign("NRQSJJATPEWHHOQAGRQUPIGXLDXOVJKORGZBIHTYZLRBEUMOATJGDYKQJQEVTNCNVMMFDCDBSUENRPUOFXZDPTFEDQXSJFXOZNVIWZHWFPHYPBDLCKGFGUAZYLSRINWBWBHJX");
    msg.plan_eta = -1457109003;
    msg.plan_progress = 0.15199679341002836;
    msg.man_id.assign("TLCWUFXPVGEAXRRWJVEWUMMIOASHFZRQLNRJZUFOYOUZYEJUNHOYUZPXLBJHQIUIQHWTJTBMVZVPDSBPWMIOIDSPDUBVGDEULBAPBTDLXPTGWVNDXGKQCVGCOFVHFTYEZBRCKKFWZNGJAJFFCKR");
    msg.man_type = 13881U;
    msg.man_eta = -1813999219;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.3083587999796257);
    msg.setSource(7918U);
    msg.setSourceEntity(117U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(6U);
    msg.state = 127U;
    msg.plan_id.assign("GHDOVQRHOBEZJCSPVUTSQDGPSMYNXTINZYNZDULKWCGIRWKUEFQRLFXPMLXBUHREUCOAIVKFNWNSCULTMZZARAMVLXJEZYTJCFITAXNIFVEJCKQHFAIPUANSCCDWAORLOBWFNPKDHBVWJYYZEBDKYVURYGPSMMHQSGXIGZSSRAGCJVFWMBEPAKQWTFVXJRTDDJUTIZPUPXHKQYBHMGKXMZYSWJNKFATCLHBNLXWOBRVEBQQILEH");
    msg.plan_eta = -210837004;
    msg.plan_progress = 0.5155694975456637;
    msg.man_id.assign("XXWJZOWTRQAXCMLSVBYLPPYLPLNHNXSEAIBUMLHCJSRBDFYJ");
    msg.man_type = 18324U;
    msg.man_eta = 1621362623;
    msg.last_outcome = 211U;

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
    msg.setTimeStamp(0.2899824218232373);
    msg.setSource(16967U);
    msg.setSourceEntity(235U);
    msg.setDestination(24440U);
    msg.setDestinationEntity(22U);
    msg.name.assign("JWYSXQKEDXAZIQEIZOVKMAJFCKGLRRXFCXNTXCIDYBHLWLBIDBDOXSAANKGHWBPMVEFKFLNCMTJYPWXDJOHYLTOZZGZHGBOYBNAUVWLRPSJHSDVFWLCEMHMKWKPZEQFRIKURVZYTQRRSMEQMGQZFAKQHXDBG");
    msg.value.assign("UYHLXOMEBRRJJEJYDQBYVBHMZHDBSMRURUFLWXPYAOVTFFDABWTKIQAFIGYFSGGIKHABQANCQSHLKLYHEIBEKVWJKUEUZGNVAFFRJPKHJAJXZYGZOWGXL");
    msg.type = 247U;
    msg.access = 89U;

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
    msg.setTimeStamp(0.7345928761245001);
    msg.setSource(61049U);
    msg.setSourceEntity(86U);
    msg.setDestination(58628U);
    msg.setDestinationEntity(164U);
    msg.name.assign("TQTLXRVAMZFBIKFYGIDIAPRGGPXGZYCCRGAKTZDLFEARWNUGBMVZHWNLAPNZBMDNC");
    msg.value.assign("FOPVLHFYHLTBLNUPPMSRNUIQATIYAQEAWJQEBWGIOJQAKX");
    msg.type = 58U;
    msg.access = 176U;

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
    msg.setTimeStamp(0.37024224657801597);
    msg.setSource(37465U);
    msg.setSourceEntity(185U);
    msg.setDestination(38958U);
    msg.setDestinationEntity(114U);
    msg.name.assign("GFYITPDZQNKPVPSFGBYAICNSEGXFAAQAUJRUJMOGNZMZFHMBZIXRVOWZOGEINNPDXMBLVVGOEUQSHKUNVPPWCHLEDTHSGCTBQXKXMEJYJSMTRCJUAIWRYJICYTGUNKZXKBVDQPQVRVYBXWRUILYORTFQTJPKHVWASHZOKCSFIYSMFOAYCSBXZLLTDUDRKQHFLICOEEIWFCWEXJHMSOZPJJANMYGHKBBATDRMDKLFUWDXRGUQCPNEALEOW");
    msg.value.assign("NEHGJRQYFLLFHOTOZZAYOVXEENBGNHHSJNZFJKUHRVMUDUWCCBIYSRYBERJRTWJRZUOEKGSNZVMSCKJODUBCCZHDMAMSTOWUQXQXBLMPKIXLSLRSGTHHITIUTCNSXQYODLMHORHNNPXCNPLIKYDNIDIPGBXPAVLJJBAPXFYGMVCWEMFBGPQQQYYRYSADGZAWXAUIZKQGUTAJTWSZF");
    msg.type = 148U;
    msg.access = 242U;

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
    msg.setTimeStamp(0.6734707463791517);
    msg.setSource(2147U);
    msg.setSourceEntity(173U);
    msg.setDestination(41177U);
    msg.setDestinationEntity(157U);
    msg.cmd = 196U;
    msg.op = 113U;
    msg.plan_id.assign("FNBMVAADAZSZEMFGFGJKOBAHQCOHSOWLBTFYRAGGKOSIQVCPWJHUSZGULQOXGLFXFCPHJEPIWUVSRNFQYKUVQNWTVOGHFSKLDJVPD");
    msg.params.assign("CEYCQPERMUKKOCXWJSOCJUDFXOFRFUHABVFQMYPSPKTDEKKXMBVZRIQYEWIPUWOHKMFCFOPGIOUBLSLWTGGNXEZBIWGOZARDXQWGLHXLYLYTOMGAGATDLYKSJBFWHJKQJINM");

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
    msg.setTimeStamp(0.057037905362232966);
    msg.setSource(17617U);
    msg.setSourceEntity(91U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(50U);
    msg.cmd = 116U;
    msg.op = 196U;
    msg.plan_id.assign("MUYZUULFGDYEKPCJKRIIQQCHCWLNNZGVTAGQFDGBRUXXQVYIOONSAXEAWZZRJOKFPCJDAYNWBULREVKZUIJSCMDHTLIQMFTXRQXTYJPYDHAEMDWPZEOOEOXFMSVLJLCFPVFAXGTZBGLTCCVRJ");
    msg.params.assign("HOGBCLTIQENZXTFPLNNYBAFYJQWYRQYCFDRPEIDUZWHBKCRTMKLASJHJCPMPKYLXYBOACCRAAYUQGEKUGMJOWLMMPZQXIZGHJHBPDVEIIDFSDJEGKWPHSZDARV");

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
    msg.setTimeStamp(0.9428932594685863);
    msg.setSource(45027U);
    msg.setSourceEntity(106U);
    msg.setDestination(25587U);
    msg.setDestinationEntity(112U);
    msg.cmd = 200U;
    msg.op = 15U;
    msg.plan_id.assign("EGHACHTKFZRRPFSCQXUMIEDDAZVAETTHVLOUMMUBUQUVVTHMSFHAHNRTVNXWECJAYO");
    msg.params.assign("ZFRQVPTVCZCKGLJMBVTARMPONASXCDUYPTLBJLXJWSIENTDJZCURJIAJXGJALNZWXCQRPVHXXLDUIPWSERDGXMPRRXCYKGUKSUAVKNMHYUEFE");

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
    msg.setTimeStamp(0.9125155230699002);
    msg.setSource(14417U);
    msg.setSourceEntity(248U);
    msg.setDestination(15293U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.7158162537367607;
    msg.lon = 0.808407688681097;
    msg.depth = 0.5461323709680678;
    msg.roll = 0.13149313518203543;
    msg.pitch = 0.042132701174779186;
    msg.yaw = 0.8707729165831195;
    msg.rcp_time = 0.6345126700131356;
    msg.sid.assign("JBJJVVLOMHKNQJMNFDIPQDVXRDJEFRDJNNFLXZZAWGMGXEQHPI");
    msg.s_type = 248U;

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
    msg.setTimeStamp(0.39615292029630134);
    msg.setSource(50985U);
    msg.setSourceEntity(62U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.48077823797108166;
    msg.lon = 0.9697138449964884;
    msg.depth = 0.21650361188602407;
    msg.roll = 0.3110087358253405;
    msg.pitch = 0.3113653119024874;
    msg.yaw = 0.9752533352079584;
    msg.rcp_time = 0.49493290189086425;
    msg.sid.assign("SEKNRSNMKPMIPBXODPBMOFTLUEJIZGAYAAYICJTPYYNOCPJKBWJIZWCCEHXRQAPEWKQVDFLXAGGRTOIZXVW");
    msg.s_type = 140U;

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
    msg.setTimeStamp(0.2854907115295737);
    msg.setSource(52667U);
    msg.setSourceEntity(173U);
    msg.setDestination(14634U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.8195248866819671;
    msg.lon = 0.19500718238635162;
    msg.depth = 0.6278751874729884;
    msg.roll = 0.7893539104262647;
    msg.pitch = 0.7399902966473513;
    msg.yaw = 0.09389571782892259;
    msg.rcp_time = 0.9663912810498383;
    msg.sid.assign("XWXHJBFRAUURONHUKCJCVIRCYOEWEQAUPNHGDBNZCLKIDIXHTLFIGMCILLPMJSPXAVUGBYJQEUPVKXQOWFVFOGZYUQEQSEDWTHOUWLBYCQKNMVIKYFXRZGSRZT");
    msg.s_type = 44U;

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
    msg.setTimeStamp(0.8185711124083929);
    msg.setSource(37078U);
    msg.setSourceEntity(209U);
    msg.setDestination(36089U);
    msg.setDestinationEntity(105U);
    msg.id.assign("QGFSLRCHVKTCSAZOQXKDDLJEVQJEDAPXEHCTWLIOISRIZWQKBPRQNYLALTUCJLWPXZVRQGLWACSOZMEJPPUEOFIHHCHWHBBPYKNEELOYUZKDVXYOHEJNEHTQIATBJIVCIPTSFADNSWTGZXEVYOHVRGJZKWAKSYMMGCXYSMMFUDNNOUXMMIGNGDUBAGJGTADQQOWNX");
    msg.sensor_class.assign("QMHEDYDLFQEWUHLWRSWGULFKNRBAGVWDUNRGZNTCYPPCTULFJVSEEXZESVSCMAAYNHVYUIISUPEASFXLEMFFGBOGIWTZOOXHLYXFHSPPVGDQHTPJIWBEDRJRWXAZXCCXGNTJFFQBZOLJMYTBUZVMCINFOKJHBYRDINKZPJMJL");
    msg.lat = 0.8158876997581568;
    msg.lon = 0.37012141964317036;
    msg.alt = 0.5370300916615062;
    msg.heading = 0.9903793304562538;
    msg.data.assign("GHBTVBTTVAMASLILUKWMURENMWBNLFOZZCVZUJPZEJABYHQIIKLATJNZJDCMNVRZHSELQPOGIQWCLGRIWUMUNJIWUROAZSKQXXDYQGMPVVDNPQDWAHQIKOMEBZTSBWKREFUCAREWOGCQNDOHPOBLDRHTBRPKJSYEBYFYHWXINJHSXCOFAUGOJNDPHFFXXMSVGS");

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
    msg.setTimeStamp(0.21182035707240843);
    msg.setSource(39481U);
    msg.setSourceEntity(229U);
    msg.setDestination(38286U);
    msg.setDestinationEntity(224U);
    msg.id.assign("ENGFRUCDUBRIWGQZSMZDDEJOTKISLSJQM");
    msg.sensor_class.assign("PTZSYYUAMRREXRNEFFDCDFMVKEHCKSPFBEHMJNUWBEPFJOYVNLXYWOVNOSZQDMTQWTUFGGBYEOGRZXILUAMSBJRSZIKXJDQDQATZMHNVVLFVCZHUQVHDAKWRMGOPHHUBRKQDUPQPBNUASWIQOAVIWTFXJWWLZSTOHERGENSXAPLAMYEYTZCJSCN");
    msg.lat = 0.2237746407338873;
    msg.lon = 0.07939806049541764;
    msg.alt = 0.7982829229193272;
    msg.heading = 0.18928863190645362;
    msg.data.assign("CVXMTHHBZLEJDJRZGTSUKLESLTXEIRTDFSXVOIOAAYKRIENUHZGUFQGDPWRPENVHGVHWAOUMHVUSPYPYHWJNZQPOPCJELCVWSGCQPBXJZTNXAJTHIEJIGMJVMTNDFWOOQVGGA");

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
    msg.setTimeStamp(0.25178120758982403);
    msg.setSource(35182U);
    msg.setSourceEntity(115U);
    msg.setDestination(60609U);
    msg.setDestinationEntity(205U);
    msg.id.assign("GDZNIFCLVLMXUJETAVJZQJGUIMRCFPKFAPREBCZSGRGTHWBPIKEGVHRNKSNUJDHUDJBBXVBMMMSNYQMWHFQUKTYRDYAOKZLSKJVPHXWQZXWIESUDUDHGKNOGRFEPPUQIZKSHTAFPMDZOQLWAAEFTZOVYKJIQTLPBWPLILVGBYDEFAHYCONYTNCGSPZCLDWBRVIZOUOJSGSUECCSQJWNBDRXR");
    msg.sensor_class.assign("LGDTCWCOJVZNCSRMQIPDUYNSFAGLSIZFNJYXKWOMTEJEOYGHSXAGBEYPGVUMPEHPNVMKDUWMWYIJFBIGOYQGBJPSKMPPJJFTXNDXERKAAUDABRRWLZDINIHQEOACXOFWVRBBIKTHWBPWZJQYHFGGUNXLAUIMCLYNRVHBLETVTXZ");
    msg.lat = 0.17757814363913094;
    msg.lon = 0.7748366179794163;
    msg.alt = 0.7920203563304323;
    msg.heading = 0.4981637270021747;
    msg.data.assign("CFWLKFEAJSOBMEZRVYGHMDRGXFFNQRBIIBPYJROSZRVFRPZQVOCPBPNAEWUTGTPHXIWFBQKHGDPOASJXHGNLNTZFYLKBVIQURHHTSLMKNXWBJNSYNMLYZNGQEWUTTLIOYRQUEZZYCYUMKVAFZOANGXCURUTPGSAFHUOMCVIXMZLVCABLWYP");

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
    msg.setTimeStamp(0.8253133708075434);
    msg.setSource(24813U);
    msg.setSourceEntity(175U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(105U);
    msg.id.assign("OONRNYXRILPGGKOUWFDLEEAHLMFMHUFAHAQYRDKNEMWKQIMF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DOYHUQVWKNZTXCUXHDDSOLMJYSEOLACTBGWFXPBWUPRFWASHNJCVPAGAYEBVRNRCVQKGGJXUPJTGQLYETKSWLLMGSEXHYGQZC");
    tmp_msg_0.feature_type = 43U;
    tmp_msg_0.rgb_red = 180U;
    tmp_msg_0.rgb_green = 49U;
    tmp_msg_0.rgb_blue = 235U;
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
    msg.setTimeStamp(0.07597833753771477);
    msg.setSource(25710U);
    msg.setSourceEntity(160U);
    msg.setDestination(23475U);
    msg.setDestinationEntity(121U);
    msg.id.assign("SBXFCAROOCZBOXJSHKDQJYHGMYUNZXSFCOLEQPBEMKCDSRQOUKKPBPTUSNVTJPOVZJOASDGJPVGUAJHGECLQAGVYUHDBGDFCLMTENMOBRDUBAQKXNYBGKSDMRWPFIQCZVKXUMKWITICZNMMFEQYRRSSFFEAVYBDCLTWAYPWZRHKIFNPRIYLIUGVJXZANWDWPHVRIZFNCHPLUHWLYRMETEXLAVLILXQNJQTKWXXWAVIUBT");

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
    msg.setTimeStamp(0.17769583140298617);
    msg.setSource(24258U);
    msg.setSourceEntity(230U);
    msg.setDestination(53182U);
    msg.setDestinationEntity(33U);
    msg.id.assign("AAVPDNILHYUHTTELPEKNECJIIQCWUCVTIFZWCZYBVQDPOQEUUZRGDOJPBYJFOXPGDRTJWGKNKLKSODHKXFRJQMSKZOLVGVXJBRMXWZTISCTBUNHFRERABIMWQFKSHAEFWFRYBCWFMWNBBQRFNVLXSYDMXQSIXJFJRPDOEPKATUGCNGKITLVXHVLBJLGWYJKDLQHORUWTCAUYOCDGZAEPGIVBHPNQOXUZYMHEZMYASQTNPIYU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EKVWDJMSCZXOGFANXRNRXRJOZNVEDBIMPYHGQLQEJBWFMTOBLMPXGTFAQTKOGSXEIQWZROKCFLCEQFPHNRTSTKAJTCHIOHIFJEWQZDQQVRLTJEGLMLKMZXNUJWP");
    tmp_msg_0.feature_type = 120U;
    tmp_msg_0.rgb_red = 235U;
    tmp_msg_0.rgb_green = 121U;
    tmp_msg_0.rgb_blue = 48U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0022462444695607875;
    tmp_tmp_msg_0_0.lon = 0.38931197148717533;
    tmp_tmp_msg_0_0.alt = 0.4115724139309057;
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
    msg.setTimeStamp(0.9574367357619);
    msg.setSource(57772U);
    msg.setSourceEntity(91U);
    msg.setDestination(47145U);
    msg.setDestinationEntity(140U);
    msg.id.assign("EDMRFMSCJLZYWDKLADAEUUOMNAISXXQKBSQ");
    msg.feature_type = 11U;
    msg.rgb_red = 18U;
    msg.rgb_green = 98U;
    msg.rgb_blue = 98U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9549427770474884;
    tmp_msg_0.lon = 0.9800364916902156;
    tmp_msg_0.alt = 0.809525219996631;
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
    msg.setTimeStamp(0.011093052450235175);
    msg.setSource(19112U);
    msg.setSourceEntity(23U);
    msg.setDestination(8538U);
    msg.setDestinationEntity(64U);
    msg.id.assign("FPDUXNKVAUQAJRMRJTIHUREJERJZPYHLULIBTAQGEFLTSTGVXLLXM");
    msg.feature_type = 226U;
    msg.rgb_red = 253U;
    msg.rgb_green = 150U;
    msg.rgb_blue = 154U;

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
    msg.setTimeStamp(0.2276185742633633);
    msg.setSource(22026U);
    msg.setSourceEntity(66U);
    msg.setDestination(45101U);
    msg.setDestinationEntity(79U);
    msg.id.assign("WCMALHOUFQIUFTFGFJJYVLDDIQGWEOXHDKSGERYZCNAJRPWNDWILZUXQWJTGRFNVFSDOWVOJUEIMCATTBCHHDVKSQERYUWQPPGWELEEHYZUIDEABKNKLNPKYLUQPHZKAERAIJIT");
    msg.feature_type = 246U;
    msg.rgb_red = 192U;
    msg.rgb_green = 83U;
    msg.rgb_blue = 107U;

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
    msg.setTimeStamp(0.8545323781992153);
    msg.setSource(7020U);
    msg.setSourceEntity(140U);
    msg.setDestination(64164U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.5768317380955743;
    msg.lon = 0.897750703019016;
    msg.alt = 0.9834390210650765;

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
    msg.setTimeStamp(0.10961165768488568);
    msg.setSource(14274U);
    msg.setSourceEntity(247U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.4986874619898656;
    msg.lon = 0.18077730091180277;
    msg.alt = 0.4785230954154859;

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
    msg.setTimeStamp(0.3869634272468506);
    msg.setSource(32807U);
    msg.setSourceEntity(3U);
    msg.setDestination(15075U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.08831006134043617;
    msg.lon = 0.8647144212488183;
    msg.alt = 0.17318849537216296;

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
    msg.setTimeStamp(0.17403747117235957);
    msg.setSource(58534U);
    msg.setSourceEntity(184U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(34U);
    msg.type = 241U;
    msg.id.assign("BEQSPZQUKZSFPAEWCJDQLRUUAXBYAZDPBBRNFJYCLIMVIOZLWETWHMSBNQWYYXNDHNBLKFGUIGHMBKFKPKXVGSOJNTIQSCCFASKIWJXIDFYPSHYDMSEYLVEOGMTCMJENNFJPCNUKHZHMUVRTRSWBSJQPRTRQDVTGVCGAOEXTCRUOOLOFPIMFVAZWCELQGNXLHVB");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 44U;
    tmp_msg_0.goal_id.assign("HHCNGNUTXQVMEVSNGSLTXPFUVDOUDBJWHCSLFRMZYPDOLRFEQGLFDCWCMKXIVKTWUPVCLCJXQPFFVAAUFMJBKEBGGYOIZWKYYAHOEDURVRSDMTVY");
    tmp_msg_0.goal_xml.assign("XYKROKHNUGVVLNJFSZYZSQQFPUVTCSQTTGXTCIYPHDFNFLQAIMNBIPJMAJKXPWECSGPWMKSUFSOQWCTEDQDUFCAUPRXMHCMZCSVFSTNBNXRYK");
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
    msg.setTimeStamp(0.3358969163106269);
    msg.setSource(19190U);
    msg.setSourceEntity(93U);
    msg.setDestination(59310U);
    msg.setDestinationEntity(184U);
    msg.type = 78U;
    msg.id.assign("IMFLRJNOCSFQVQFRKYPBWXWFPNLOUGBAVRHDCMGUBDRNGABKLWAEKCV");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MTDFHJIKOEHXVAXKYARGVWQYJNVOENAUDZQPHZGCMBMHHSCUOUUQIXCHPUZEFARQBDSAWEJNSDSBQJWZOVTFCBEHFZOSRTWLRRIXVNCBPZZTGDUQNCOGWGMJGHVTMSPKLYVLIXTKLUIKAICLYKJZCIRJKYTVANKXXFTBLCRFLBNDBOWTYPOGCAWZGGPSSPDKBMPDQNYXHBHRPSR");
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
    msg.setTimeStamp(0.7209749598142118);
    msg.setSource(10323U);
    msg.setSourceEntity(196U);
    msg.setDestination(24467U);
    msg.setDestinationEntity(241U);
    msg.type = 21U;
    msg.id.assign("ILABZLZJHWXFVQOWRVTSSKOEEMYSIRZQTXQPHEAMYNOPAYQCJUIAONKFMJYFDDNMZTKFUNXZAXBKZJYISLQLOXKZPUWQWXUTYJFYHDFBLA");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.12143857558814886;
    tmp_msg_0.lon = 0.7687549878868892;
    tmp_msg_0.height = 0.7885682948179077;
    tmp_msg_0.x = 0.28417341933731943;
    tmp_msg_0.y = 0.4489342915673532;
    tmp_msg_0.z = 0.7312350625356829;
    tmp_msg_0.phi = 0.45415199832633546;
    tmp_msg_0.theta = 0.9818471169227486;
    tmp_msg_0.psi = 0.9152802951262884;
    tmp_msg_0.u = 0.3742070305626072;
    tmp_msg_0.v = 0.03912765906821214;
    tmp_msg_0.w = 0.31957289111819276;
    tmp_msg_0.vx = 0.25305387736428764;
    tmp_msg_0.vy = 0.6609318249112761;
    tmp_msg_0.vz = 0.9013795845834767;
    tmp_msg_0.p = 0.8886271331488258;
    tmp_msg_0.q = 0.019990907433545924;
    tmp_msg_0.r = 0.5271448110595351;
    tmp_msg_0.depth = 0.5851790268807162;
    tmp_msg_0.alt = 0.9901777526382644;
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
    msg.setTimeStamp(0.2130242530985973);
    msg.setSource(42956U);
    msg.setSourceEntity(141U);
    msg.setDestination(19005U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("MYKSHARDYPOTOHOYEJUUPGFSKDKPXLUHLQDDAFWEIHCSNOJDSCYRBSLKTBGIFLGCBVJDTAWHMICEGZFCUVIONZILARPMUJEWXRZMKJBKGVSQCKEXVXQJZFANTXIEWJICMEJNJNDMLEOOEWLRN");

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
    msg.setTimeStamp(0.32328293922927176);
    msg.setSource(24712U);
    msg.setSourceEntity(134U);
    msg.setDestination(19085U);
    msg.setDestinationEntity(32U);
    msg.localname.assign("WXGEMAEMKFUAPEHXCVYQIESHZJRFVWZVVDIARXVOPBWAPUITNMZXNWHYTPUAYNRRKOQTZKCZLBSSGCMEOXNJUKLSUWEXWGTCRYRGWWFIDJYDGNFWQPIDORCSLI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YBCPKOEAMRJHVLWENXEDEVDHQQBETCEZDCAPULAGVWORWRQJLXOVGWDMCRRIFWBVTIKWQXYRZJFDCHIAZKJULVHMKVZSXBMGKWQTOYVFKKLNTZMPXDJSFZIPRHDTGBOGUYGBATQPZSIKOUNSPRLPCRQRHXIUUBVBPKHAQMUMHDJYOSUDT");
    tmp_msg_0.sys_type = 2U;
    tmp_msg_0.owner = 56243U;
    tmp_msg_0.lat = 0.021096704262422827;
    tmp_msg_0.lon = 0.6487063937007048;
    tmp_msg_0.height = 0.80688713286829;
    tmp_msg_0.services.assign("ECSXWURSNLRDCSJFAHVZIYBLQUJEPRGJLXZVIEFGRIWGMUIWHHX");
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
    msg.setTimeStamp(0.833979826034753);
    msg.setSource(38307U);
    msg.setSourceEntity(104U);
    msg.setDestination(47798U);
    msg.setDestinationEntity(123U);
    msg.localname.assign("EJUQZXATCDQWDTUMMKMSLZYXUWBVFLDQDMOFOQVQWYMPFEYROFKPNBDWQIIUKSAYZHKYTEGZPOBAXMJQKTISJDERIQVCNTPLYLCIQVARSHCTXVNALEYLSCVHKUFXHWCCXIWFRNTSXBMCRGIAGPMHFDNVOZABLBSGZXZTOUKRRUPPGAICT");

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
    msg.setTimeStamp(0.10658793779620646);
    msg.setSource(12803U);
    msg.setSourceEntity(215U);
    msg.setDestination(21097U);
    msg.setDestinationEntity(104U);
    msg.timeline.assign("TLESGYRHMCNJARKBMOQWDUNQVJZFVFXVKKBALKLKVFIBABHWTRQXCVUMDEYUQTACPETQHUJFEVWYUVEIRIGRQZSIUNCVWSKHOTKRQNZRUXLSWR");
    msg.predicate.assign("FEHCCXTFLBSJIHSZALGIZWARSUYTSBPPULGQDVUPVXKMNKWPEJRDFPERBNOWTTCYQQPMYJERLJNUIEVEUIBMNMZVSZCFXSNCF");
    msg.attributes.assign("MSLWOGFDVWHNZEDSDAMCERYOBNTUZLKKVIZHUVCMZBRQQPJJVGBXEPFUSCPXJWUCYCUIZAKAWUTGFFXCVDDTIYXPYOOAZMDSGNVAEWQBIBMIKLYWKDRXOHPBOIVSXALKDXIFCIJNUULUQRKNGBNQQHGWSQGMQLIJSGLPJFMSXRNFYAOK");

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
    msg.setTimeStamp(0.05578196255437318);
    msg.setSource(32694U);
    msg.setSourceEntity(86U);
    msg.setDestination(38965U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("DLEMNPKQNVEJTAGOXGEONGUZSVWONFDKWZUFGLZWBHJUSLGEQLBWQHUJMTTFOEQXWYOZXNXFHJWTCKNQBOAYESXURMTYLIIQTOILGSTUXYCV");
    msg.predicate.assign("ZCWKUJJCXJFNOGFBHWTRMSQRYBVTSCZXNSEXGQZIGZZOTORFELTNTVWCQJFOEIQZVWTKEUPPFPDVTUBWHHDOAAGZLDOJUIRXNCREFDTKRZMMADOYIYENONIJREOGGULHBSHPPQKIYHMVKLCEGYGUPBPQSBSHDALYV");
    msg.attributes.assign("VXRENQFKFJQUYMFILLLORXWSPCRGHBHELOBSFPBQNTEFETIQVMIAUZGTNYUQIOVCUHXIVYYVIEKLYUDAPVMVXRGJKQRROBHZAPHIZWNKEWLODOPRUTXMDBPLCJADOGZYCHCCCUQLRAPFWMHIAHQYXMDJ");

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
    msg.setTimeStamp(0.927000801081615);
    msg.setSource(14288U);
    msg.setSourceEntity(234U);
    msg.setDestination(42604U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("DWVGLTTXYYEFLHEAULIURBMQOJHZCBGWSHTCDANNWQYGDZXAWHQVGFCRBYGENQONXWRUMTAUFNWPBGPXFAMEKUMBHCOSVDZAUJSSKQVBTNZVGIFIVDLAJJFXIJJHZCJVDVEOZDOXIQYMRILDQFHYGLFIPSCCHQTZHYRI");
    msg.predicate.assign("PAVPULRCBPGKLFHMEZCUEPDRTWQMIPXWHEXMGNOAITNKPRYBHYVMIBNCNXARIMABEJMXUOKGHKOGTZRQYXTRLSIUQCFBJLGEPVVWCTWWJJCQGVWOBITAHMHZCCOYUUYZRIJKBGHQSAYQKVIERNXGSUUNXVOAXTDRSD");
    msg.attributes.assign("UZFLXXLNCEHRAOZJQMPNKEBJCIAJDHUTUBNDZERBAERUHQHOJQFJMXSIVWHOPFVYKYYVMWFAYRKWRGPQYAVPQCXPZOZBOCZCNSORQBTILKUDKMJTGFNHGMSWYIOJTWZMSSNKXYYIXVCPKRHHTUZUQZBGVQTDGLW");

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
    msg.setTimeStamp(0.9118445113031278);
    msg.setSource(56069U);
    msg.setSourceEntity(50U);
    msg.setDestination(46445U);
    msg.setDestinationEntity(169U);
    msg.command = 165U;
    msg.goal_id.assign("NWILECXXSKFFENIJAYCOHDRTIOJCKOEDYOCXLQBPZIRYUELGGOATYCAEBYKFXWGYKSHNUUHAHKDXPVRHTWTINBVNOAFPTZIOCJNIQPCCPYDZVBSGFVSAULNSTXRWLD");
    msg.goal_xml.assign("IJUETFXPOKFQSEIRNRZDUSRYDQECXFNHDXTPCWOPQEGVQEUHOSBTHRECQKAWSKFPKBEZWQTWFKPZCBYAUPTASMJSWHAMWLKDRFVMAYNXBNLMFVHKWLFYWMHJVIRJSNMCFZHENBJMVPIXYRZYCQGL");

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
    msg.setTimeStamp(0.5837774128271793);
    msg.setSource(62032U);
    msg.setSourceEntity(193U);
    msg.setDestination(50896U);
    msg.setDestinationEntity(130U);
    msg.command = 150U;
    msg.goal_id.assign("YXPFXOMPJCBFXCPLOGCTIFPQUILFKKPMNBZRPXVVIQQIUAVGQCOMFRZNYXVBIVGYUPWOMAQRULDBPLCLEMSHIYHOSMGKUSVJNSBLLKBIQOTDEQANORTJTNZYEYCUQJSWAEANXZJNDXFGOCTQKHWUFJ");
    msg.goal_xml.assign("FSPTMOSQZLTKLQOIZGYUYDNSGNFTATRDEUFTWXNYUWHUUPLSRPFWVVKSNSGVBCWHXLOIPVGIARCYMBQPHWYDBEINDFVILKZYFYJB");

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
    msg.setTimeStamp(0.14797374979394484);
    msg.setSource(4748U);
    msg.setSourceEntity(216U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(23U);
    msg.command = 68U;
    msg.goal_id.assign("QNZEPGIOLVNCMRLVLZWXSESKUVQBCAYNSNJGWKLRKORFLDUVOPYQDNBMKGSGDRUWXHXWLBAJH");
    msg.goal_xml.assign("DABIXHFSLARRAPVDGSWCFWPLPUMKNPOGHKTTLEIOTUMJBCXFXRYGRJZDXQKAGPHOYNYQJVGRKJILTHWFEGADVHDBZTISRWJBONSCCQEQIOMRZSFVNLAREQHWVQKLXNIFUUQQYBTLDZZSZNEYTYRLTIDGMXTBIZYNNEPQJKUWFPMJAIFZXGBKNDTNHIEHUZHAGAKBXVFMESSDKVURWSWOVPELZEPFBMOJJCOMUCMWUOYQWCYDYGAPOVSH");

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
    msg.setTimeStamp(0.8460388125335114);
    msg.setSource(5772U);
    msg.setSourceEntity(27U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(34U);
    msg.id = 38U;
    msg.width = 33002U;
    msg.height = 18492U;
    msg.widthstep = 58479U;
    msg.channels = 80U;
    msg.depth = 128U;
    msg.finaldata = 125U;
    const char tmp_msg_0[] = {4, 12, -71, 1, -58, -60, 112, 26, -89, -89, -28, -71, 79, 67, -11, 11, -117, 41, 97, 15, -72, 121, -16, -73, 37, -81, -29, 111, -50, 52, 112, -5, 111, 53, -81, 59, -28, 35, -49, -128, -49, 80, 93, -73, 122, -80, 115, -100, 46, 95, 95, 72, -113, -99, 90, -32, -102, -40, 58, 91, 34, 79, 86, 2, -112, -69, 65, 54, 34, 121, -107, 4, -104, 84, -106, -114, 112, -62, 33, 120, -25, -10, 75, -50, -59, -87, 97, 23, 115, -78, 66, 14, -65, -116, -42, 96, -37, -117, -98, -54, 38, -72, 44, 99, -32, -69, -35, -84, -72, -28, 104, -14, 115, -114, 7, -54, 55, -3, 22, 27, 22, -106, 105, 43, 88, -99, -65, 34, 40, -3, -125, -106, -123, 72, -96, 108, 28, -122, 107, -126, -30, 117, 90, 117, -30, -59, -95, -61, -36, -92, 78, -87, -90, 22, 16, 21, 93, 74, 10, 40, 120, 106, -88, -122, -123, -79, -85, -80, 25, -24, -59, 54, 117, 26, 24, -67, -116, 87, -81, -27, -26, 65, -56, -100, 88, -63, -55, 35, 22, -128, 47, 67, 3, -52, -36, -48, -77, -70, -75, -13, -100, -44, 40, -85, 86, -12, 7, -3, 91, -4, 17, -66, 1, -63, -104, -65, 53, -48, -98, 92, 58, -5, -100, 16, 119, 30, -120, -36, -86, -62, 110, 67, 125, 81, 16, -2};
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
    msg.setTimeStamp(0.9101766446706493);
    msg.setSource(35550U);
    msg.setSourceEntity(128U);
    msg.setDestination(27191U);
    msg.setDestinationEntity(201U);
    msg.id = 157U;
    msg.width = 1741U;
    msg.height = 46074U;
    msg.widthstep = 36334U;
    msg.channels = 146U;
    msg.depth = 20U;
    msg.finaldata = 68U;
    const char tmp_msg_0[] = {-36, 68, -103, -95, -111, -83, -103, -85, -97, -121, -8, -101, -11, -7, 34, -56, 62, 38, -86, 1, -73, 26, 81, 109, -3, 121, -25, -21, -25, -78, -46, 106, 83, 111, -87, -118, 47, 34, 62, 2, 17, -11, 49, -51, -13, -36, -88, -105, -95, -71, -98, -75, 5, 112, 63, 41, -14, -12, -54, -5, -2, 32, -69, 1, -53, -65, -52};
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
    msg.setTimeStamp(0.5534914642100192);
    msg.setSource(15590U);
    msg.setSourceEntity(15U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(53U);
    msg.id = 160U;
    msg.width = 45694U;
    msg.height = 17681U;
    msg.widthstep = 16519U;
    msg.channels = 27U;
    msg.depth = 172U;
    msg.finaldata = 11U;
    const char tmp_msg_0[] = {46, 104, 93, -111, -15, 8, 113, -48, -63, 73, 114, -55, -21, 113, 39, 23, 84, -68, -82, -27, 74, -67, 119, -14, 69, 124, 114, 112, -67, 44, -121, -36, -82, 47, -6, -54, -47, 40, 75, 93, -47, -59, 59, 108, 30, 71, -34, 9, -6, -44, -112, 1, 72, 99, 122, -12, 44, -65, 34, -45, 102, -31, -82, 111, -15, -83, 79, 117, -12, -114, -122, 61, 102, 55, 65, -105, -8, -34, -122, 42, -54, -78, 24, 7, 77, 110, 42, -98, -67, 40, 21, 10, 99, 105, -121, -107, -79, -105, 111, 100, 59, 42, -113, 101, -119, -79, 99, 70, -125, 33, -50, 64, -30, 51, -25, -75, 44, -4, 12, -37, 3, 27, 93, -106, -59, -3, -25, 93, 65, 54, -16, 57, 105, -42, 73, -33, 35, 77, -125, -37, -64, 69, 100, 98, -90, -15, 18, 71, 39};
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
    msg.setTimeStamp(0.02516652786455953);
    msg.setSource(23648U);
    msg.setSourceEntity(131U);
    msg.setDestination(33486U);
    msg.setDestinationEntity(47U);
    msg.width = 36096U;
    msg.height = 45960U;
    msg.channels = 184U;
    msg.depth = 249U;
    const char tmp_msg_0[] = {-72, -41, -88, 74, 76, 27, -27, 67, -47, 20, -22, 67, 41, -9, 36, -68, 40, 111, -123, -67, -62, -94, 82, 119, 99, -56, 45, 106, -127, -22, -6, -102, 39, -86, 4, -3, -100, 84, 3, -74, 36, -124, -97, 61, -109, -104, 8, -32, -16, 67, -85, -88, 57, -31, -31, -52, -8, 21, -74, -99, -50, 101, 59, -118, -72, -42, -15, 80, -84, 36, -68, -37, -77, 89, -68, -33, -87, 24, -89, -35, 86, -8, 52, -92, -24, -112, 51, 72, -103, -50, -29, 91, -43, -100, -96, 40, -122, -27, 19, 15, -102, 13, 51, -101, 45, -7, -72, 16};
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
    msg.setTimeStamp(0.1895268091446567);
    msg.setSource(61005U);
    msg.setSourceEntity(197U);
    msg.setDestination(43147U);
    msg.setDestinationEntity(192U);
    msg.width = 4794U;
    msg.height = 61564U;
    msg.channels = 16U;
    msg.depth = 211U;
    const char tmp_msg_0[] = {104, 1, -117, -29, -98, 75, -79, 58, 93, -40, 28, 16, -123, 8, 37, 44, 12, -8, 71, -77, 95, 93, -91, -125, 125, -25, 73, 114, 40, 88, -112, 72, 107, 12, 6, 82, 117, -41, -51, -74, 13, 49, 106, -69, -8, -87, 124, -32, 6, -93, -49, -45, -110, -8, -122, 75, -52, 126, 81, 99, 83, 56, 83, -39, 42, 126, -17, 58, -6, 119, 16, 88, 32, 27, -11, 57, -73, -70, 101, 18, -128, -70, 119, -94, -21, -125, 47, 32, 110, -93, 110, 83, 36, -53, -56, 89, 90, -13, 23, -26, 111, -114, 85, 62, -96, 18, 91, -44, -104, -103, -80, -35, -67, 49, 107, 33, -126, 41, 29, -23, -92, 126, -90, -25, 91, -101, 79, -97, 101, 68, -21, 65, -67, 35, 52, 62, -81, -10, 123, 77, 16, 65, 62, 82, 88, 89, -89, -40, 111, -26, 8, -125, -110, 86, 124, -10, -1, 3, 50, 60, -5, 95, -18, 8, -65, -103, -119, 33, -122, -10, -112, -76, -86, -72, 97, -54, -43, 7, 111, 23, 111, 93, -30, 90, -37, 113, 123, 71, 3, 68, 61, 20, 44, 46, -121, -47, 21, 119, -8, -123, -59, -10, -119, 12, -39, -55, 116, -11, 81, 13, 108, 100, -37, -90, -17, 97, -36, 94, -115, 37, 72, -31, -57, 50, 92, 117, 39, 42, 28, -109, -80, -77, -35, -93, 4, -26, -52, -72, 85, 119, 69, -101, -54, -89, -98, 113, 22, 84, -114, 59, -50, -11, -49};
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
    msg.setTimeStamp(0.6041440272017783);
    msg.setSource(29636U);
    msg.setSourceEntity(160U);
    msg.setDestination(28431U);
    msg.setDestinationEntity(128U);
    msg.width = 15595U;
    msg.height = 30878U;
    msg.channels = 114U;
    msg.depth = 13U;
    const char tmp_msg_0[] = {-25, -101, -128, 94, -96, 68, 98, -126, -102, 112, -33, -32, -118, -11, 13, 6, -92, -79, -77, 115, 70, -126, -66, -74, 91, 27, -28, 69, -22, -90, 78, 55, -86, -90, -31, -73, 117, -90, 23, -28, -95, -71, -74, 11, -83, 12, -2, 90, 76, -118, 23, -96, 104, 108, -37, -32, 99, 72, -65, 16, -21, -103, -58, 116, 52, 111, -28, 70, 28, -28, 10, 105, 103, 91, 28, -37, -19, -34, 57, 114, 122, 8, 64, -8, -55, 110, 73, 51, 3, -84, -35, 26, -90, -45, -117, -9, 22, -42, -113, 40, 116, -94, 72, -30, 6, -54, -32, -111, 82, 69, 61, 55, -122, -54, 40, 92, -82, 19, 62, 92, -118, -116, 34, -8, -34, -118, -113, 97, -5, 121, -29, 77, 99, -82, 107, -116, -27, 99, -86, 53, -26, -80, -70, 125, -71, 79, 125, 101, 36};
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
    msg.setTimeStamp(0.14595500975295506);
    msg.setSource(39828U);
    msg.setSourceEntity(124U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(237U);
    msg.frameid = 61U;
    const char tmp_msg_0[] = {84, -123, 98, -120, -127, 4, 24, 98, 39, -104, 6, 110, 106, -92, -63, 5, -65, 82, -69, -117, -97, -3, 96, -118, 43, -27, 69, -75, 92, 67, 107, 105, 110, -51, 67, -79, 96, 87, 91, -6, 63, -37, 121, 125, 125, -24, 85, -71, 68, 59, 94, -74, -68, -63, 67, 67, -103, 102, -13, 107, 45, -28, -26, -54, -114, -100, 75, 41, -108, -59, 100, 59, 67, 86, 13, 11, -60, -125, 37, 29, 88, -81, 89, -44, 46, -69, -120, -75, 43, 75, -104, 8, -69, -15, -90, 81, -34, -61, 124, 24, -20, -95, 81, 17, 114, 22, 67, -79, 98, 87, -87, -61, -108, -39, -123, 85, 108, -28, 48, 113, 122, 38, 10, 9, 31, -70, 47, 16, 89, 0, 76, -98, 72, 37, -108, -109, -30, -85, -103, 16, 61, 69, 60, 101, 21, 109, 122, 8, 28, 56, 90, 84};
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
    msg.setTimeStamp(0.9861405909794531);
    msg.setSource(15323U);
    msg.setSourceEntity(66U);
    msg.setDestination(29326U);
    msg.setDestinationEntity(192U);
    msg.frameid = 62U;
    const char tmp_msg_0[] = {-48, 8, 52, 88, -47, -73, 101, 102, -90, -88, 47, 53, 91, -95, -4, -97, -103, -84, 92, 5, -106, 69, -15, -105, 69, 45, 24, 4, -52, -9, -63, -93, -93, -17, -37, 27, -75, 105, 74, 40, 106, 83, 42, -112, -31, -77, 112, 102, -53, 5, 7, 10, 109, 11, -77, 78, -22, 80, -8, 92, -29, -67, 119, 115, -7, -4, -21, -45, -91, -47, 107, 48, 77, 28, -88, -116, -65, -116, -72, -30, 61, -125, 6, 62, -124, 31, 10, -32, -55, 93, -26, -46, -3, -15, -73, 54, 62, -69, -8, 33, -103, -80, -111, 99, -116, -84, 123, -36, -90, -75, 52, 37, -51, 106, -46, -50, 19, -128, -29, -117, 58, -80, -94, -76, 51, 27, -127, 32, 54, 111, 109, -40, -49, -82, -54, -89, 102, -4, 75, -53, 65, 5, -106, -5, -77, -21, -13, 111, -93, 27, 10, -58, 71, 87, 13, -119, 19, -119, 44, -71, 96, 121, 120, 114, -97, 97, 64, -34, 111, 93, 79, 46, 51, -110, 40, 86, -14, 75, 100, 38, 10, -106, -81, 70, 33, -69, 117, 55, 38, 112, 96, 18, 125, 71, 57, 70, -72, 102};
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
    msg.setTimeStamp(0.7290555303019873);
    msg.setSource(61666U);
    msg.setSourceEntity(22U);
    msg.setDestination(50126U);
    msg.setDestinationEntity(39U);
    msg.frameid = 83U;
    const char tmp_msg_0[] = {-122, -61, 1, 112, -62, -45, 35, 2, 71, -50, -106, -69, 50, 27, -30, 60, -97, 100, 29, 64, -8, -61, 61, 53, -106, 87, 102, -37, 40, -13, -100, 21, 3, -22, -51, 3, 118, -32, -121, 92, 121, -7, 20, 100, 13, -24, -103, -81, -67, -24, 122, 79, -58, 88, 39, 116, 30, -125, -2, 89, -121, -88, 115, -113, -104, -108, 65, -37, -64, 25, 101, 28, 5, -24, 85, -2, -97, 77, -34, 22, -16, 56, -57, -4, 0, 19, -32, 43, 50, 30, 15, 44, -91, 116, 113, -58, -5, -69, -90, 46, -119, 95, 79, 115, 56, 66, 30, 25, -40, 88, -8, 80, -11, -121, -128, 20, 81, -84, 16, 119, 94, -2, -86, -64, 13, 83, -79, -128, -117, -122, -110, 115, -36, -123, -103, 93, -24, 38, -34, -123, 79, 21, -32, -31, -87, -26, 61, -75, -1, -79, -33, 46};
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
    msg.setTimeStamp(0.07986473776231162);
    msg.setSource(33178U);
    msg.setSourceEntity(228U);
    msg.setDestination(21564U);
    msg.setDestinationEntity(184U);
    msg.fps = 95U;
    msg.quality = 157U;
    msg.reps = 80U;
    msg.tsize = 49U;

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
    msg.setTimeStamp(0.512155565891767);
    msg.setSource(61604U);
    msg.setSourceEntity(65U);
    msg.setDestination(51555U);
    msg.setDestinationEntity(188U);
    msg.fps = 181U;
    msg.quality = 76U;
    msg.reps = 184U;
    msg.tsize = 7U;

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
    msg.setTimeStamp(0.6026446216292504);
    msg.setSource(28086U);
    msg.setSourceEntity(181U);
    msg.setDestination(2297U);
    msg.setDestinationEntity(239U);
    msg.fps = 84U;
    msg.quality = 136U;
    msg.reps = 232U;
    msg.tsize = 81U;

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
    msg.setTimeStamp(0.7529547629804539);
    msg.setSource(6930U);
    msg.setSourceEntity(142U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.3974612220380306;
    msg.lon = 0.9515988839509107;
    msg.depth = 93U;
    msg.speed = 0.6264366174937253;
    msg.psi = 0.8200685833175745;

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
    msg.setTimeStamp(0.9044899080216594);
    msg.setSource(53872U);
    msg.setSourceEntity(170U);
    msg.setDestination(64104U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.8318895105303735;
    msg.lon = 0.9922228683569924;
    msg.depth = 166U;
    msg.speed = 0.6741525394098531;
    msg.psi = 0.3345958329528468;

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
    msg.setTimeStamp(0.5579334250393571);
    msg.setSource(25199U);
    msg.setSourceEntity(224U);
    msg.setDestination(16935U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.06456819122416457;
    msg.lon = 0.46266749675258834;
    msg.depth = 39U;
    msg.speed = 0.8251087531073713;
    msg.psi = 0.7260842000003362;

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
    msg.setTimeStamp(0.7518564333162294);
    msg.setSource(56489U);
    msg.setSourceEntity(158U);
    msg.setDestination(45560U);
    msg.setDestinationEntity(74U);
    msg.label.assign("GBNCHTAPFKZZZMPL");
    msg.lat = 0.8618575101225237;
    msg.lon = 0.3200935365821689;
    msg.z = 0.10236078341243593;
    msg.z_units = 55U;
    msg.cog = 0.471446914036584;
    msg.sog = 0.8625351425451605;

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
    msg.setTimeStamp(0.8987308825532392);
    msg.setSource(35729U);
    msg.setSourceEntity(237U);
    msg.setDestination(42512U);
    msg.setDestinationEntity(217U);
    msg.label.assign("SAGTYCSKDHXRLUZAWVOEVXYUMUASFXDLPDVIGCMLRLYLZIAWQIWRWVAQEGLXRVMNHIDXOUSZPJHBPNCKRZYTBKHSXCREBWTIKMRNCOQCNKQRVIOTEMCMBEPRTKNKEUXLJJJJA");
    msg.lat = 0.4296898066173952;
    msg.lon = 0.5353255603987297;
    msg.z = 0.14462060963433498;
    msg.z_units = 152U;
    msg.cog = 0.580589296272304;
    msg.sog = 0.03800583219791165;

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
    msg.setTimeStamp(0.9819139329000067);
    msg.setSource(8987U);
    msg.setSourceEntity(248U);
    msg.setDestination(191U);
    msg.setDestinationEntity(137U);
    msg.label.assign("QDMOEOXKKKIFQFHWOGKBEOKQJRLJDXRYUAVTJGNPYYMRZYBCKEUPYPOFNLVWLLBGVWJNSCMJPRWKFWZ");
    msg.lat = 0.8844109442642837;
    msg.lon = 0.05647123388496189;
    msg.z = 0.1603220115828441;
    msg.z_units = 179U;
    msg.cog = 0.4921596236713093;
    msg.sog = 0.8207902964437153;

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
    msg.setTimeStamp(0.11762989203430918);
    msg.setSource(37091U);
    msg.setSourceEntity(126U);
    msg.setDestination(13184U);
    msg.setDestinationEntity(211U);
    msg.name.assign("HLYBJKIKAZCVXWRQNABGZZBVUNVPSMONQXXZCCMFIICPSLOZNFEUWYLHTAKIIALTWW");
    msg.value.assign("EZHBMVGORVXDCGXIPAUXESQZFSQRHSWANRHUQCAKTCKZDPPXKFFZQWVHPDRTJKIUNXVLBJTSNQUBZGSYADRYDHEHPFQXBYWOQMGZSILNMNNWGBOTTFCELPZWPCJWZYPRGWOUOUGXDBEWERXJSUIAQNUKBBKMQIHKLUNRMZFECAFLJVYHPLCTYKYSYOKCIXIKMDIJHOJJIGFGM");

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
    msg.setTimeStamp(0.014848872764247512);
    msg.setSource(23986U);
    msg.setSourceEntity(13U);
    msg.setDestination(10732U);
    msg.setDestinationEntity(147U);
    msg.name.assign("UEYENIDJSNWPZYQZMPUWJEGOKZPUCEYLEQNACAPQMYPPGNDRMAREVSDEMQKLACCHMIDQUTAVKYUMCXZLOBQLJWNLKJFGUTIHRTSSKKVIFWKVHFNFNMZLAHIQWWKSMRHQCVDKBXSBLXMETIGWNFPGVISCXJJPVFQ");
    msg.value.assign("UZLWOJVMGUZXWBRXLTWDAXLOUHQUTMMZAJMUJGSVQTBIJPEXJLTNKXKFFGILRQJNAYBCKDUCMBGMHLOVNKRPAREFUORZVDNZVBPSOCCAHRPIAPDFWILNHEFSHQYFICIDXBXPBGXYKTPSZWZFOMQBWDKPSGSQYCXOYEJGRFAACOFFNJXKWLGLDTJESYHHPTSIUNUAMCMENEVHZQDHVVTNJYOPQTZYYII");

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
    msg.setTimeStamp(0.5106951286798112);
    msg.setSource(5576U);
    msg.setSourceEntity(83U);
    msg.setDestination(4428U);
    msg.setDestinationEntity(192U);
    msg.name.assign("DVJQAZQOCJCMYFNYNWIJCOZSFLVYCOULAASDMGLTTHTZYHVWIKKNCPLKWVVORMPAHTHBIZHVBKMBEXVULPMIV");
    msg.value.assign("FOVSWOGKMRHDNHKLCYIQKVAKFIAEWUUNILJLYFRKTJMHXGBDTYQPHFUVIQOGFNVWBHRAXBDXYJDFZBVAMKPNBWGQYEPCJYQSCWGPLJWUUTAPMERYWEJKJRHVENZZNETZSASLDINHLU");

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
    msg.setTimeStamp(0.3827126135671527);
    msg.setSource(10826U);
    msg.setSourceEntity(86U);
    msg.setDestination(12947U);
    msg.setDestinationEntity(89U);
    msg.name.assign("THLJCDTDHWUJKAY");

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
    msg.setTimeStamp(0.8900220739184889);
    msg.setSource(34145U);
    msg.setSourceEntity(224U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(172U);
    msg.name.assign("QMCYRPAHTTALWYVMXKFGUOULKEBJXLAGPPAWNBWFMRWRUEDNSGEPTMWRZTYNDKOWTXSPDQISJDDMQBGAWIXLOHRGSBQPOTGSVUXNSJTKZLZVRAQQXZIMKHGV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MPGNBZFFSBUTKYJXMAPIWKGNIKFEUVAPFMTGJZCODQKWWLQGVHENJHVVZLZBFESVQWLLQTJFGNAJOQVRPEXEXUIKDYHHSACELDCUXZNHGEPLOXQAKSRNGTDXBLCSZFNXWFZHOWYWROIHRG");
    tmp_msg_0.value.assign("UZOSQBBGGNIVWSXMHUZQXUQZFHJTDGKMOTDSHLQLFDRDTUWLOEVKMXFTOTIGBBWPLSEWSZHXYDVVXHAUCXNQOBTUWDRFMTNIQVKXPPFZJUGFJSGJVSWACDASLILALKNHKXMJZNZXJRFHQPLYSKNWPDYGMNTFHAGIVJERJZUERPCZYOYQWYCETUYATJCO");
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
    msg.setTimeStamp(0.4596066583720234);
    msg.setSource(59886U);
    msg.setSourceEntity(190U);
    msg.setDestination(2412U);
    msg.setDestinationEntity(117U);
    msg.name.assign("NWKEPBAEVNZVWAVSKRHSWMCGTLXIEZSUBBQYSOHYRHJZEBKLBOHFYQTBNURIMWALAQCTLWWDUIVFFILXDWZETGXLDLUPGYAJGSVEDNUPHYRLYZMUGFWMXDTJBKRKNFPVFDOCXXXSHQFNSVIAUQQOU");

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
    msg.setTimeStamp(0.04704316393900665);
    msg.setSource(80U);
    msg.setSourceEntity(230U);
    msg.setDestination(14551U);
    msg.setDestinationEntity(39U);
    msg.name.assign("FEEEKPAJUPABCL");
    msg.visibility.assign("FWLJQYJFASQJSACYQZXWHRVNYUXWHBRZRMTVXLZLVIBLYPSKUQJCCFLFETMJAXOXXOLEYDRCXPEONHNSNQWSJIDMEQDJTBGNGFLMMEPZTTGXZYHVIMXPAAFKSFKIIVODTUSTZNYRPDEZBNDVBWCZLKDKHHQMHMJSPONLIAWQRBC");
    msg.scope.assign("APIRHTFDENMALLLKNESQTAWYXPZYBJOMHJXWRCDGQHEBTKWRFZKPUFSMQFGPTMAKPCBCUIRGHWLJGVJOZURRCAPBBQWQOFMHFZAVDOOKJUHKRQDEWOOIMMZNWLLREYJPVAALDZXSUVTNDPJTCGXAFYOSEIVZPGEGTQFLWUTUVYEMLXCJKCIWSGUETRAJHQTZCNFYMCDUIJISSHBKDCNYVBFRPNBNOGIKXUYYXELXYVSZSHB");

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
    msg.setTimeStamp(0.906455703081146);
    msg.setSource(22876U);
    msg.setSourceEntity(198U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(118U);
    msg.name.assign("XIVAGBNNGBIXHXKLTORDEQGBRGCDWDJDFOELWDU");
    msg.visibility.assign("KZVDMSCXGNBITQFFJXGOWETOJZNTIGPLFKISTPIBJIOTAKQMYYIIFDJBVKFVTHZSYRSUUCADWHAKTBZFTSPBRPUXUVEYARKFAZVDJEVLLESUGDZQOUXTADHCPZCHEGHWWGSRSRYAMGAHNBYQOSMXLWCMFCJOWNAXQDJMWYMLUQNWHDVPHCXNHUKNRCNRQPGQIOPBLSPMXKRBKIYVPYTYLKFBDXQEUXGLNQZR");
    msg.scope.assign("JBIPQDNQVAJC");

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
    msg.setTimeStamp(0.9797682367060105);
    msg.setSource(51985U);
    msg.setSourceEntity(236U);
    msg.setDestination(42096U);
    msg.setDestinationEntity(121U);
    msg.name.assign("KRUKADCPAISKQMQOOHZUZMLDPKQEFOOXGKGBROHCSJUKKXWVR");
    msg.visibility.assign("CHGFZPPBRBIJQDIJAEUGNWQXVRPDADSYCTNCHVTDFCNTOAPSXZGXIRJOOPDRIFJSMEUJTMLKSNVZLLRQIQCXG");
    msg.scope.assign("PYIFKUABDQSFNSXZUZJLGNXROQVOEEXVBOJQCPIRDTADJWYEQABEUUKVGVITKLYCCDMJFAIFNHKMCWQANJXXQVPRBTRGWMJJDTVYCDFHWDLLXMXOZAQFNIWZASTGGUNUSGXHOSEKKPKSLS");

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
    msg.setTimeStamp(0.1282300379708159);
    msg.setSource(24077U);
    msg.setSourceEntity(66U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(145U);
    msg.name.assign("UHQHPYXLESFOGASWXACMLQYOJYZGROPAMDENVHITILOLDPQKAGWUVHWPNVWURNQYIGOKYTHJHCDMOVHIKOFPAGTTXOWKZTCYRBRBFZCTAEFUHQZXUKPJJEM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UAQSCUNGZLFHRPIZMQTXSDWGRIEZIFTYHNIWLXEKLRHKAPLCIMGVRDSSABEJJBEEHGPNNVGHUDJMREKQTMJOQCKUIOHRSZCWRNAWVWQEAKDOWPDBEIKMNHALDTDFTTARVCVDMBVJNDQUKWI");
    tmp_msg_0.value.assign("JNNEDLRUFGARIXWAIGUXYCHZNKRLEUOOZAQVDWFJIDNNFMPLJICRHUGJRYIOKZPLHSPLOPVVGBHBCUHXNHQMSFZGZQTCCDTONSTGVSJWTSFBVEVVENFBPRXSKZQDIQDWKBLJOBXJGHOGLHEPZNKMKVLZALN");
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
    msg.setTimeStamp(0.8822920607744601);
    msg.setSource(52535U);
    msg.setSourceEntity(245U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(112U);
    msg.name.assign("HKEBSRZPTUWLCGXDGWFXYAPVGIJOWXUTYCJTQARMTDFPEPYZFOZSLBRCALKISMUUJYCFVKWLOPZLCNSARVJYQORHMRIBQJENANYJBFIOIZKMHTUUDNDMJIDAVEQHLLCVEP");

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
    msg.setTimeStamp(0.9461782210843238);
    msg.setSource(10927U);
    msg.setSourceEntity(215U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(151U);
    msg.name.assign("AXQMRAVDNKQHVSKFCYNFKABFZGBBOOEAHXLSCQBONYZILQLYAECERAURSSGNDYXAKTOCIFULRPDKLOFGHVEBYJRWCUXRJJXZMBFSHAICFZSFWIQFBZEWTPEROEVHQZMJWJXMTYKLOWLSKJZHIXOWSTPILBKMVDWCZPDMNDTGEOZVERUQCBBVVKHDIGQUDELPYZNPMDXHMMTJIGUCKRIPAXTRWCNUHUALYGWUJW");

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
    msg.setTimeStamp(0.5136611336172312);
    msg.setSource(58923U);
    msg.setSourceEntity(50U);
    msg.setDestination(4090U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HQPFFUGSIYJZSVHOTPFFKVEXBKAEXZOCGIIKLURCGWUQZCLAPWFUJRRVTDKBNBXPXBHUCPCEYDNWUOKDLSVMMTRYWPNARDUZXMTEVZCYMZJIOVYBQVHOEABIWQLWIXSHBNHABWTVHTBHJGRNMNATCGRYXLRXNGFIYAOJMZEESTRQGWHZJJWKSMDFJGVZDZDTFDNVCFLUQ");

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
    msg.setTimeStamp(0.9938911106059868);
    msg.setSource(15465U);
    msg.setSourceEntity(124U);
    msg.setDestination(57777U);
    msg.setDestinationEntity(177U);
    msg.name.assign("KCOALTPIQADPADXHAQVDMBMARBKRNWLTUWFEGRMIOBOYCVRHFCYJZGSNHRTAJVNIUHYZCUIEWWMKANJGHTCZUPJBLZHYXUWBJOOPLPMXIVLSPLTMLFKZEFNM");

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
    msg.setTimeStamp(0.7699158889459126);
    msg.setSource(28001U);
    msg.setSourceEntity(231U);
    msg.setDestination(42383U);
    msg.setDestinationEntity(214U);
    msg.name.assign("BVRMYZJOOXXWEUKIZUSDEUQBIFCMLQPRPPBZZLHVNUPSWVRXNJVTRLEIFMHGDTSYARGJTEXLYVUWPDLWGMXYOXFKKGHTOBBVEMJAVWMJAJFRICNQYFHSNSVKCVIFPPTDEPWFFAOKDEKCBOOSEAUXADBWSRAMLOGNDAD");

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
    msg.setTimeStamp(0.7207679660488975);
    msg.setSource(19489U);
    msg.setSourceEntity(235U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(249U);
    msg.timeout = 1258625254U;

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
    msg.setTimeStamp(0.7214479115973041);
    msg.setSource(52347U);
    msg.setSourceEntity(201U);
    msg.setDestination(8197U);
    msg.setDestinationEntity(94U);
    msg.timeout = 3462411757U;

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
    msg.setTimeStamp(0.6245664841585242);
    msg.setSource(51982U);
    msg.setSourceEntity(127U);
    msg.setDestination(60578U);
    msg.setDestinationEntity(198U);
    msg.timeout = 1316961741U;

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
    msg.setTimeStamp(0.956881830558313);
    msg.setSource(39646U);
    msg.setSourceEntity(129U);
    msg.setDestination(59167U);
    msg.setDestinationEntity(106U);
    msg.sessid = 3591449033U;

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
    msg.setTimeStamp(0.020698657784378183);
    msg.setSource(16416U);
    msg.setSourceEntity(143U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(123U);
    msg.sessid = 2400906609U;

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
    msg.setTimeStamp(0.1776296209898215);
    msg.setSource(58931U);
    msg.setSourceEntity(215U);
    msg.setDestination(54760U);
    msg.setDestinationEntity(152U);
    msg.sessid = 658817696U;

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
    msg.setTimeStamp(0.33658337649390424);
    msg.setSource(33092U);
    msg.setSourceEntity(208U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(46U);
    msg.sessid = 2384592644U;
    msg.messages.assign("IXGGJHQHQTSGIPICTERMNCWFDCNAESKYJGDQBWIFZKPPAAEVNKHLVSJDEQSEFJAXPQMBCDHBVXZKTUSMBFINBKBGCZNRRRERHLXUTOBTFX");

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
    msg.setTimeStamp(0.5482203319432276);
    msg.setSource(20217U);
    msg.setSourceEntity(249U);
    msg.setDestination(48648U);
    msg.setDestinationEntity(181U);
    msg.sessid = 3283063172U;
    msg.messages.assign("TSAUJAVZSFGPXLRKLFLDBECMWVMEIAFNHJVASPLBXWKYOOBRCPQOTWMYWKHROVXPVSFDZIOZASRXJDTUYUBWCTASWQAGDJKHIIBIHVUVYLNYB");

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
    msg.setTimeStamp(0.13134906739409902);
    msg.setSource(47478U);
    msg.setSourceEntity(75U);
    msg.setDestination(56440U);
    msg.setDestinationEntity(19U);
    msg.sessid = 545019716U;
    msg.messages.assign("RVUKFNTEIPBJZXRUNEZZTIVZXVYMAQMALUEXQUFMAKFVPETKKBKSQMLXZEKMHPKCVIOJLHDGGLAKTHUJSDRQWAHYKLISOOFEISFTJRSFQXHBCPPWAQBCNADBCOOIDRNQHIPZSEMFWABYOLD");

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
    msg.setTimeStamp(0.7555777318475234);
    msg.setSource(6235U);
    msg.setSourceEntity(127U);
    msg.setDestination(795U);
    msg.setDestinationEntity(216U);
    msg.sessid = 208550609U;

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
    msg.setTimeStamp(0.6049070529431603);
    msg.setSource(28994U);
    msg.setSourceEntity(205U);
    msg.setDestination(12843U);
    msg.setDestinationEntity(217U);
    msg.sessid = 884370349U;

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
    msg.setTimeStamp(0.9053318730809716);
    msg.setSource(48879U);
    msg.setSourceEntity(85U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(64U);
    msg.sessid = 2853297099U;

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
    msg.setTimeStamp(0.8529698959228417);
    msg.setSource(27120U);
    msg.setSourceEntity(130U);
    msg.setDestination(48287U);
    msg.setDestinationEntity(199U);
    msg.sessid = 1120893706U;
    msg.status = 89U;

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
    msg.setTimeStamp(0.7203658212853313);
    msg.setSource(8917U);
    msg.setSourceEntity(121U);
    msg.setDestination(40613U);
    msg.setDestinationEntity(213U);
    msg.sessid = 747582844U;
    msg.status = 209U;

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
    msg.setTimeStamp(0.2502441747438262);
    msg.setSource(5247U);
    msg.setSourceEntity(47U);
    msg.setDestination(60862U);
    msg.setDestinationEntity(228U);
    msg.sessid = 1856125228U;
    msg.status = 208U;

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
    msg.setTimeStamp(0.23567943337093678);
    msg.setSource(10690U);
    msg.setSourceEntity(80U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(102U);
    msg.name.assign("GJDPFGJGRHAMLEQKGSNXCHCTTBPXBAIXRMHWZQGEFQJHBAEALJPRBJUDXZVHEOHPIKODMVEOFVSGWGMXLVXPVNPUSYVNQKLFNDFZZOIJDTFCJUWYNRCYMLOYZQFB");

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
    msg.setTimeStamp(0.7874221144294515);
    msg.setSource(42964U);
    msg.setSourceEntity(146U);
    msg.setDestination(40962U);
    msg.setDestinationEntity(117U);
    msg.name.assign("QMIYEIRLNBTZZWDDRVEBADLBLGFQMPJHOOLZIFMOKPOEHCCZZYWHESHPUJLMIAPSYDBKKEEAUSJVZGMNTDYCLJXBXBHXEZSOYMDTNWHYCQXKRUAACOZHSRMTNBRMGOGOXWQPJMYKTPSENTSYNGJAQWCXHFIJBFDJRVWFDLRPDBKIBCGAAPQPWLVGRIVCUQVYUETKQHURVZVQDAWWUXTTIKMGIKFLFFNGFLWJXCSXFOTXJAIUH");

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
    msg.setTimeStamp(0.2644182443112233);
    msg.setSource(54147U);
    msg.setSourceEntity(90U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(213U);
    msg.name.assign("WYMIUMBSMPXJZBCIYJTTSCJDCGAGTXGWWOVFEPDJTWVEBDLWMLXNAMFBKEPBOEIOZSXNHZNSDNZKUCBVCEKWLFRIQXHHPWXTSQJZOAVWUDKIHYEPBQQPQLANNTAVSDCTAPUBTLKGQJQFUGVCYXEOUJAZXKMTJRROMJIFNWUQGMILDPOLXEHHHUVS");

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
    msg.setTimeStamp(0.1619477903891996);
    msg.setSource(38061U);
    msg.setSourceEntity(39U);
    msg.setDestination(31776U);
    msg.setDestinationEntity(113U);
    msg.name.assign("DMZJJQPYXOZWTTXZPXRYZMGEFFXNIEKPVJDTPHBQHDKXFGWATZHFCGLBBLZBOLVSMDIYFDONNBWAAMJINTOJZACXSYJYHSYPLQAPXDHBQNSOKEIIJIWTCRNGMYEGLQOEGEBNRWGNWIAOOUVLVWDLOFVACKMQCPCQOCUYKVJNXIXPUBDUVDDRCHKUWJEGZBAESRGHAEWISYCMKTRSPKCKLMZUYSQTRHILHJSTPWUQTBLURFFQRUSKZM");

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
    msg.setTimeStamp(0.4375124718390173);
    msg.setSource(62189U);
    msg.setSourceEntity(154U);
    msg.setDestination(44664U);
    msg.setDestinationEntity(39U);
    msg.name.assign("OYVDDSXNZDVNIFUBFBHAJBBABBODXGMJNTOOBVCECAIXWYNAVHGTTBCEKXAIWYVBIFKPWUTDEPZMCDHJQRRUTRHXQZNDWWLJUKUUAJDBCFEYSAQSNAFRHKFIHHEMZXNZPMEJTKYCFGDJNGEKQCQSQXGULCVLLIPUMWHZJWOURJLMOMQKHYHGSWAYPGERCGTNLSQMTSUZXVQRVOOZTNPLWLMPQSWIGJARSDPYFTOLRXOEZKMRCSK");

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
    msg.setTimeStamp(0.23295101356167203);
    msg.setSource(4265U);
    msg.setSourceEntity(134U);
    msg.setDestination(33164U);
    msg.setDestinationEntity(59U);
    msg.name.assign("ESUHAFXVJBJUKFVNIMPKYZQDKZBHRKQYMVNOLONREZOICFZPXIMHWLPFQOLMPIVXOUHBLBDJYNOANSUFDYFAXQVSTVKPCEZGYQWOVIBNFZARIACELLWOZBZLTRKRKAW");

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
