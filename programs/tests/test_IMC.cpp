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
    msg.setTimeStamp(0.298973642174);
    msg.setSource(33851U);
    msg.setSourceEntity(119U);
    msg.setDestination(40382U);
    msg.setDestinationEntity(140U);
    msg.state = 254U;
    msg.flags = 122U;
    msg.description.assign("BPNJWIEYKPRVXEHSPWOOAPKMEZOCGLOWYYKEKHFKHTYXCRYPBCUHYLIXLMXZGJEFSMXQNXKIZTNUJGTIPVAVRDUOCFBAQXFJZOQCHTAIUCSQBEZDQHBINDWRKKVTUTTFLMAXZNJGOJLWPDTRMRVKXUMVVSKVYWOLJLAHCE");

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
    msg.setTimeStamp(0.938883807897);
    msg.setSource(62736U);
    msg.setSourceEntity(234U);
    msg.setDestination(18144U);
    msg.setDestinationEntity(7U);
    msg.state = 180U;
    msg.flags = 164U;
    msg.description.assign("STZKBXYJJBMYNHYQDRLUDIFCHSKELGNQUOGMCCDZLHYOGCPWXLJXYPUZUFZNBKCFLHHOIBTIUONEUUHSQSLOBWAEFZRJCGEBQKNGOCEFQPZDPREJCUROAQDRKDVBWTSMJOPGPAWTTTMLGEMDEFT");

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
    msg.setTimeStamp(0.509812976589);
    msg.setSource(45187U);
    msg.setSourceEntity(39U);
    msg.setDestination(6211U);
    msg.setDestinationEntity(2U);
    msg.state = 57U;
    msg.flags = 3U;
    msg.description.assign("NSBKAYJUMRBURCLBNACZUYKNBHPZCFIPNVYGQFVPDCDHTJVOBXEWVLDQGTKMOOTHDLZODDAYEQPJXOLXWBQVVQDULFVNKRLRWFZLRBRFTPEOKTRHJNJGCLUSQHYNMBQGEPMYPGXWIFJWTQCZCBRIKUAMMIAFJSGTWBKPAXXYXMYEGTWDEUMSYNJXOOHQHVSUNVZQHEYEELFCJCAOAXGPFIISUJDSXNMUPIIRFWGSLH");

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
    msg.setTimeStamp(0.622944746212);
    msg.setSource(56101U);
    msg.setSourceEntity(41U);
    msg.setDestination(20054U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.901298139877);
    msg.setSource(34604U);
    msg.setSourceEntity(151U);
    msg.setDestination(13562U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.415093192516);
    msg.setSource(56155U);
    msg.setSourceEntity(119U);
    msg.setDestination(17481U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.80028746);
    msg.setSource(61605U);
    msg.setSourceEntity(183U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(159U);
    msg.id = 141U;
    msg.label.assign("SNKKXXNPGLUAIERHSJXRKJPTFNVWUQFSQJGNLDPDTOYAYAAHIGRLWTFAGTBJZSLMDXUHMMUAYZFXNJEVHSNKPWAOKEHSPRFYCOZN");
    msg.component.assign("WTJKEMOBAVRCNNUBFHQTKPMEJACRVWPLGVRNAJYAEWRYZPIOOBWFDZYICIAPKLNIHSUQTRFQUPUUWJXTUFIQMHXUPCLUKHQMDQYX");
    msg.act_time = 43506U;
    msg.deact_time = 52965U;

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
    msg.setTimeStamp(0.239566890287);
    msg.setSource(52417U);
    msg.setSourceEntity(150U);
    msg.setDestination(55241U);
    msg.setDestinationEntity(223U);
    msg.id = 210U;
    msg.label.assign("PIXFGYACGLKFLURHDBMLJHTXFXKENJMEZJKZQVUEYKIEFSDLOTSYXWRNTCPIMQSZOUTBZKAMG");
    msg.component.assign("SKNKSXYXEXOECDMGOQLWXLCBQQCXIMIIGONSUEVRZQVQHBJFELRZMRMFBGVFGHQWJCCBOLPOZPVGWGIWSTGFAFDGPRAWFKMHHBUSMUDTDNABMARJIKQTJZYRTIZAPYVYLHHKKEMAVYLYUENSLPLIKPILHZHSRSNJTXDEONUIQYZVPBNOULYPCJWWMUUSCEOYRZJZETVZTXBDIRYCTVFXPEJKCDTPQDFNQJSXFCUMNHJTNUOVOKADBDABA");
    msg.act_time = 17444U;
    msg.deact_time = 14780U;

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
    msg.setTimeStamp(0.153471641138);
    msg.setSource(19763U);
    msg.setSourceEntity(94U);
    msg.setDestination(51158U);
    msg.setDestinationEntity(244U);
    msg.id = 101U;
    msg.label.assign("LRMSUYYNQTORRXFSAYKDVMBZBGKRJGKJWFKYNDBENLSLQWHQGHCWWNPYEAKIOVAZMDTGDANBSQNQXBEZFTMFENAPXURXJWCVPZZIJXFKMGRRXPDHZQJGSGPJXXCJKKVVVMFAEMXIGPORNYPSGYLU");
    msg.component.assign("JCYHWOFSWZOCTUIHELCVOXPBIGQCHSYKLDDIFNPGULGZWHEASQUIAGJBW");
    msg.act_time = 30674U;
    msg.deact_time = 57137U;

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
    msg.setTimeStamp(0.037910930434);
    msg.setSource(31806U);
    msg.setSourceEntity(62U);
    msg.setDestination(61490U);
    msg.setDestinationEntity(161U);
    msg.id = 228U;

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
    msg.setTimeStamp(0.40086948345);
    msg.setSource(49713U);
    msg.setSourceEntity(53U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(11U);
    msg.id = 223U;

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
    msg.setTimeStamp(0.557443048996);
    msg.setSource(832U);
    msg.setSourceEntity(185U);
    msg.setDestination(35076U);
    msg.setDestinationEntity(151U);
    msg.id = 15U;

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
    msg.setTimeStamp(0.83968016641);
    msg.setSource(26949U);
    msg.setSourceEntity(129U);
    msg.setDestination(54838U);
    msg.setDestinationEntity(99U);
    msg.op = 31U;
    msg.list.assign("XRRVSWUZEIEAHMTEDHBEGQQTLYVYGRTUFQAKJQTSHDCCNRHUWLAWLTLSC");

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
    msg.setTimeStamp(0.994929840336);
    msg.setSource(18280U);
    msg.setSourceEntity(162U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(70U);
    msg.op = 186U;
    msg.list.assign("FTEJZOXRNSBVDHXOICGTHPIKFWCUNUMPZXPBXOUZFRBPLZGQTWFRLZRAJQGDUFPBENRAHVGIMCAUDFUQONNFIGCMWDEEYQALIHVZHBLCKJSXVQDRDSHYFIWSGKLEYDRHYVBJQJXZOFKBCQSYCVTKMPPCWEQNYTVPSHSKCMQIOFCJXONUOJOKVBSEEJABMIRENMPAAYGOLLDSYRNRVH");

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
    msg.setTimeStamp(0.994411520253);
    msg.setSource(57788U);
    msg.setSourceEntity(77U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(83U);
    msg.op = 61U;
    msg.list.assign("ADCCXUQLSZHDTYNKENJVPXZIWFBKSOWSCTOJLBZGOFNKYRYXBDMTOHIDZTPQMWPZZGAMGXZNKHTUSBKXXDOPUMKUVKJGEYNMHHPOBFVILHXDUSLOKWRCJBKFBILNDWXZSJVLTUWSUZJTPTMCVRCNVFWWRPXLIAWVZHPQEJBLEYAGDYRNCFRAQGDM");

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
    msg.setTimeStamp(0.484061903235);
    msg.setSource(49529U);
    msg.setSourceEntity(66U);
    msg.setDestination(42756U);
    msg.setDestinationEntity(39U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.386930384173);
    msg.setSource(6303U);
    msg.setSourceEntity(124U);
    msg.setDestination(30821U);
    msg.setDestinationEntity(36U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.00206880958851);
    msg.setSource(6172U);
    msg.setSourceEntity(97U);
    msg.setDestination(40030U);
    msg.setDestinationEntity(55U);
    msg.op = 165U;

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
    msg.setTimeStamp(0.949550566399);
    msg.setSource(14775U);
    msg.setSourceEntity(146U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(226U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.706898006418);
    msg.setSource(6082U);
    msg.setSourceEntity(18U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(77U);
    msg.value = 148U;

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
    msg.setTimeStamp(0.541552257671);
    msg.setSource(49721U);
    msg.setSourceEntity(67U);
    msg.setDestination(53435U);
    msg.setDestinationEntity(237U);
    msg.value = 76U;

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
    msg.setTimeStamp(0.0602305649502);
    msg.setSource(49280U);
    msg.setSourceEntity(37U);
    msg.setDestination(17647U);
    msg.setDestinationEntity(254U);
    msg.consumer.assign("RCXGOMIESLPSTQLVBCKDVNTJPPHFIHNQOPJXLYBVIRBUNLSFECEVDZDHOD");
    msg.message_id = 11510U;

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
    msg.setTimeStamp(0.276112309068);
    msg.setSource(12820U);
    msg.setSourceEntity(51U);
    msg.setDestination(1961U);
    msg.setDestinationEntity(94U);
    msg.consumer.assign("BVMHTMYKPMUVGQXUOGISXLLHXDWSOJIYIFJCCLPMGXWTEOYG");
    msg.message_id = 13869U;

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
    msg.setTimeStamp(0.501526670769);
    msg.setSource(50080U);
    msg.setSourceEntity(3U);
    msg.setDestination(34311U);
    msg.setDestinationEntity(99U);
    msg.consumer.assign("OPNZYYEXLJEZNDKMHPCOJOIXKCOCMQOIINRXSGPZLNYQWEJRBCJWUIUXBFALYRHDPXHZHAZFGXWOKFFADXHQVIITWRJHK");
    msg.message_id = 53202U;

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
    msg.setTimeStamp(0.428594167449);
    msg.setSource(22940U);
    msg.setSourceEntity(40U);
    msg.setDestination(61852U);
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
    msg.setTimeStamp(0.198689794298);
    msg.setSource(16927U);
    msg.setSourceEntity(92U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.46029387178);
    msg.setSource(45922U);
    msg.setSourceEntity(126U);
    msg.setDestination(52308U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.209045733128);
    msg.setSource(50814U);
    msg.setSourceEntity(59U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(1U);
    msg.section.assign("PHRDYULFFJOXQQGJPAVDBGAHDWOIXAMGVXLLUPTSTAABJYHNERJXKQHMYIETOAKQDZEMBSBKIMPKFTBRDOLQKSM");
    msg.param.assign("XLSRFAUHUHRWPBAMFRCMEWKPDFDZYATORRYBNXQZKJFKIXYXOHTKFWXMJVDASGCRMCEUCQXVQZGTEDZVPCEAQEOUTYVOBFPCZMXLHQTCPVBGVNJKONFIXWSAWBRHMMSLNRFLJHKXJZLOUHEAZHQTYWSGAKECUKEEYTIIWNNILPRDO");
    msg.value.assign("AFZUJMJRQDTPQILZQPCPRHNOOLSDTUIKMWGBTWFSNODYXNFUJPXXTUHFSBQAPDQEFTVUIUCTZWYPBQAPUEIJROTNIKNLYDWZNKOLRNHCEGBWMZKKKXBRJCHTNLFYLRVX");

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
    msg.setTimeStamp(0.777855350264);
    msg.setSource(13038U);
    msg.setSourceEntity(84U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(93U);
    msg.section.assign("FBEEOULHTUVVWHNUTXRYSLKOZWJPYJWXQLASDZIZTRRLGJLWJQCQYQCKRORKBNIQCXACNUQVROBGYWETNMYAZTHMOWGMUGDIKDKXATKVGWDNKG");
    msg.param.assign("ARYEAJHGIWNFWUFEKCLWHEYJBNSUFMDL");
    msg.value.assign("AQZMUFHAQQGACLSZOUDZEPNFUKHQBDGXCAKJODRIWGOULVPEHQXFIKVDIVJJWSSDJKWWMTNTAAVGUXBATNSGJQEYDUMLJYONBCOHCYNZKMYLOFILMBCZAYSPCBZIRPPBQORVERXITILUWKDBKPVDMYFR");

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
    msg.setTimeStamp(0.113699832802);
    msg.setSource(53945U);
    msg.setSourceEntity(34U);
    msg.setDestination(49167U);
    msg.setDestinationEntity(252U);
    msg.section.assign("SXZWNODEQRVUTBZNDRDRSCAYWKEEKCYUSFOCT");
    msg.param.assign("TYQZTXXSLYNYMDJSPILUXIDEJAEFLDQDRPJEUWLPTQAPYRFVGVQMXQSWHYPSPLHNNCSTJGOVMMFEPZLHJFU");
    msg.value.assign("OPLIGKFCPBTKNQDGVYGODTUUDKMZPYNMEELHLEANTHZRADTQHCM");

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
    msg.setTimeStamp(0.812764792299);
    msg.setSource(47061U);
    msg.setSourceEntity(9U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(66U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.347764682491);
    msg.setSource(7406U);
    msg.setSourceEntity(64U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(186U);
    msg.op = 240U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("HRFTPEQMREOTAODFOUQWPRYNYZWLICTGKHLTUQAEXRSBLGVDZLYZNLGNGHKDCBIVKYSGASHDVFLCYCJIHCFUBAQNROTWDQGVKXLUGJCWNWBSXGDOCMYCQKXKFMRBEHHDFFMAJ");
    tmp_msg_0.param.assign("KMJMNIENWDBAKPOQOICUFJLJOKVVPHEQMOQFOYCFFNKTDGVWVMJITHEAXAHHOMGWRJTIZUXSYIQFBCHYDCJNXSQFRTXHNOCTWUTVEMFLMZNIBWXZAPCZDXITGXRWKLBWBYCQSMGBYLURWETSSFCENDEFRGTVZCABVXNKULSHPPYJELSPBHYRKIQASWLRZPIIOEVMQVOZZLASJFSGTVCDG");
    tmp_msg_0.value.assign("UFVABBPPXCMTHAWTRSIYLFPLQBEZRKZLNTAYD");
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
    msg.setTimeStamp(0.699904152961);
    msg.setSource(41322U);
    msg.setSourceEntity(65U);
    msg.setDestination(37134U);
    msg.setDestinationEntity(137U);
    msg.op = 30U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("UGNMEWMFFMMVSTOELTAYAEELQDXZRFBNCPHAEQPWRQSDJKCFDAOUNFKPVHQOHVCWMHYCESIOYYZBRBEKXRFIRJSUTNHSVJWFDVGSMOTXPUBDAXMKZJEOULVGUYRCWYWABOVYYOJLZTUYLYPQJZDVUIJWQJHXWKILMKPWHQFTKAUCLPNAVQDNBGGNJHURGQKZGNRDRNTZCBBZGIZBXMBDSZESPFCNQCKIDCTLXIXIRXIGHJALVKSIMPALOF");
    tmp_msg_0.param.assign("ITNXKZLIZAIDDUXQKDWCIEOKHVTZYUDPMCBCJCIYGZHENOEAHSKSBMARKTTFSRCOIVJWPPKTALPZXWMHWLVCTQGVLYTEDNSA");
    tmp_msg_0.value.assign("ETAMGOBBVRHDSNHQDHAUVCBTYULSVJQLRODWGQVKKZBWCWGFEOAWBPJYLPYXHMNLLPFSVYZIAXRJUUPKMWJNEUNTKYQXICFDJFVHIIXJYUCFWHORXLVWWKYHPPFCAKOHIXSQYRNOBIQGACEKRJGZIKQEDANMMDJZKMBULIPISZBZNOHCRLQJUECSTTQTWBZWRESSXOHDINFFZRYNZUYMAMGVEXTPRGGTDVDZANQJFLPA");
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
    msg.setTimeStamp(0.701772968181);
    msg.setSource(39918U);
    msg.setSourceEntity(62U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(58U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.797135069139);
    msg.setSource(58242U);
    msg.setSourceEntity(36U);
    msg.setDestination(34013U);
    msg.setDestinationEntity(25U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.247002279493);
    msg.setSource(63191U);
    msg.setSourceEntity(39U);
    msg.setDestination(18254U);
    msg.setDestinationEntity(40U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.388323079728);
    msg.setSource(32365U);
    msg.setSourceEntity(178U);
    msg.setDestination(44193U);
    msg.setDestinationEntity(214U);
    msg.total_steps = 207U;
    msg.step_number = 121U;
    msg.step.assign("IMIVMASTKVJCLCIQDFDRPRKHVRLEHWKDVVEYJQIONFAIOLRXMKKXMUXHPOTSBEEWPKGTCXXZZBFWKCLZZCLFYEBVP");
    msg.flags = 246U;

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
    msg.setTimeStamp(0.211100831749);
    msg.setSource(18354U);
    msg.setSourceEntity(29U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 55U;
    msg.step_number = 195U;
    msg.step.assign("CSVKNIWPAFKGMNCZUVWNUEEUNOOJCFPMQXKHBTTGXIKWUPVZYTUICDEEJD");
    msg.flags = 254U;

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
    msg.setTimeStamp(0.36939751772);
    msg.setSource(23322U);
    msg.setSourceEntity(135U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(235U);
    msg.total_steps = 229U;
    msg.step_number = 60U;
    msg.step.assign("DPUUBAALHBTQSNWKQTEDLIKZPCDLTWKTHJHXXIYQFHYPJWZXHXNDJCBMLEYYARLPIOWJVMIGYWZJEXKAVMCWFYRNCVPODBSVNYCEYSHPCKDAPPQTDKANQUJEXORUIFBBZGQXFTVCMGEOGAIHVAKOXGIFKJRMFMMNWBXGVPZRQLZTVGVNIFGWCHOASUQSWRXSKGEIRMESDLTUZBSDCMONZQTJERBBS");
    msg.flags = 209U;

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
    msg.setTimeStamp(0.052393219274);
    msg.setSource(38751U);
    msg.setSourceEntity(243U);
    msg.setDestination(48447U);
    msg.setDestinationEntity(218U);
    msg.state = 113U;
    msg.error.assign("XQGGOWOUIMZCBHJSKILBSFJAUCRGVAVGUUTDEXWGLFFDKIBHKRWMUPXONAHHYJGAYCH");

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
    msg.setTimeStamp(0.796580129454);
    msg.setSource(59312U);
    msg.setSourceEntity(186U);
    msg.setDestination(52565U);
    msg.setDestinationEntity(116U);
    msg.state = 46U;
    msg.error.assign("RWLZEFMCJNBHSEATGDYNQRDDOBICYWJQKGJUJQJCRROTNYEDAVFKCJISUZUEWKNAZLMQDHXRQCXGNPMXPABLZTSMCHNSJEBLJUHRZMUBBUXYZNLVDHXHWAFAXIVIQVTKTNMNSWXWXRTAKVHAFGPFBIPAXOPHDGTRVPUIEUCBYCMFSIHSYLKDDLPTIKJFDCEBZGWHOMLTOQSMJEYTOVIRCUGWLIQBYGFFOYZUKPFROOZGENPSQ");

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
    msg.setTimeStamp(0.349035824654);
    msg.setSource(16850U);
    msg.setSourceEntity(74U);
    msg.setDestination(10567U);
    msg.setDestinationEntity(234U);
    msg.state = 164U;
    msg.error.assign("KKSCXFYTFKNLRNAOLGHUSQVMMHUEOXAIZDRHONVIWLARLIYWGFZHSZPUXYBTMPQKOPEXETKZHYVWUMQPENKXWDFXEJTDMJZNKGLOBACVYBSWNSHRAKPDCJCNZOWYCQRZJACDLUIARSVDUWVIQXOFNOHRHIPKRIEGLUSQLOVUMGTABGXRBTRHPSSGFJBDTXQZUMDCCFYYFIBQEVGGWTQWPDNMMBYZJIAPDJTWQPUJECGVLEVCTFKHYEJBM");

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
    msg.setTimeStamp(0.173925799596);
    msg.setSource(38550U);
    msg.setSourceEntity(135U);
    msg.setDestination(29502U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.416048552512);
    msg.setSource(61245U);
    msg.setSourceEntity(60U);
    msg.setDestination(13863U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.793820988609);
    msg.setSource(36585U);
    msg.setSourceEntity(25U);
    msg.setDestination(26818U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.889131282253);
    msg.setSource(56556U);
    msg.setSourceEntity(15U);
    msg.setDestination(54342U);
    msg.setDestinationEntity(249U);
    msg.op = 238U;
    msg.speed_min = 0.991070261847;
    msg.speed_max = 0.163819355301;
    msg.long_accel = 0.99871007294;
    msg.alt_max_msl = 0.970941111424;
    msg.dive_fraction_max = 0.375942074089;
    msg.climb_fraction_max = 0.487180532342;
    msg.bank_max = 0.963090769745;
    msg.p_max = 0.557580886606;
    msg.pitch_min = 0.749589007631;
    msg.pitch_max = 0.203575847247;
    msg.q_max = 0.0907747675154;
    msg.g_min = 0.718035109043;
    msg.g_max = 0.0428534241431;
    msg.g_lat_max = 0.734567361784;
    msg.rpm_min = 0.00690186317077;
    msg.rpm_max = 0.19530914575;
    msg.rpm_rate_max = 0.718691763272;

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
    msg.setTimeStamp(0.469482751776);
    msg.setSource(21612U);
    msg.setSourceEntity(0U);
    msg.setDestination(63194U);
    msg.setDestinationEntity(155U);
    msg.op = 97U;
    msg.speed_min = 0.90801865457;
    msg.speed_max = 0.978338259221;
    msg.long_accel = 0.059641141733;
    msg.alt_max_msl = 0.18786025459;
    msg.dive_fraction_max = 0.755454744537;
    msg.climb_fraction_max = 0.119580218746;
    msg.bank_max = 0.68395300945;
    msg.p_max = 0.989037162103;
    msg.pitch_min = 0.674650016184;
    msg.pitch_max = 0.260146440138;
    msg.q_max = 0.57456932548;
    msg.g_min = 0.360822036044;
    msg.g_max = 0.473869240297;
    msg.g_lat_max = 0.0697602875281;
    msg.rpm_min = 0.130108081108;
    msg.rpm_max = 0.15928866863;
    msg.rpm_rate_max = 0.849234930636;

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
    msg.setTimeStamp(0.211562497627);
    msg.setSource(124U);
    msg.setSourceEntity(240U);
    msg.setDestination(5630U);
    msg.setDestinationEntity(16U);
    msg.op = 253U;
    msg.speed_min = 0.847098195921;
    msg.speed_max = 0.592571325461;
    msg.long_accel = 0.263453493399;
    msg.alt_max_msl = 0.724149473612;
    msg.dive_fraction_max = 0.477210812431;
    msg.climb_fraction_max = 0.110998709473;
    msg.bank_max = 0.794514723668;
    msg.p_max = 0.845835899761;
    msg.pitch_min = 0.909696047184;
    msg.pitch_max = 0.238422265634;
    msg.q_max = 0.702207475761;
    msg.g_min = 0.411627381566;
    msg.g_max = 0.542240563117;
    msg.g_lat_max = 0.0892993450067;
    msg.rpm_min = 0.869182536328;
    msg.rpm_max = 0.645334908489;
    msg.rpm_rate_max = 0.267026386259;

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
    msg.setTimeStamp(0.0639390210405);
    msg.setSource(63139U);
    msg.setSourceEntity(48U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(83U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 41738U;
    tmp_msg_0.sys.assign("AZACZMSLEUAHDYWCCGVFND");
    tmp_msg_0.value = 0.197643993707;
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
    msg.setTimeStamp(0.907250891315);
    msg.setSource(7998U);
    msg.setSourceEntity(184U);
    msg.setDestination(7567U);
    msg.setDestinationEntity(164U);
    IMC::RestartSystem tmp_msg_0;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.144930519826);
    msg.setSource(1131U);
    msg.setSourceEntity(157U);
    msg.setDestination(25139U);
    msg.setDestinationEntity(148U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 178U;
    tmp_msg_0.goal_id.assign("ZYESMXMWVDVHPIQSEAIKYXDAMOSJIUEHTTIPGGJPTRMBGQHBZMRLJLHGZUXHESFSBLODOVREERMEJVKSONEZDSDSCSKHRNYEDVWUFGLWVKNNHXAHULIQRNLMKWQRYQU");
    tmp_msg_0.goal_xml.assign("IZVLNRBZNAEVXNEHTUAQXXQXQOLUTFGDKHMYTMUHZDCPTUQCAMEGWTHFXYJPPLTKJSVQJJPBLSAVYTQFYMJBOGJNSWCEBBDDGCCRPDRVHFFMNIWCVRKDKUFWGQZRLBLIVUOOXYCNQGOTKNJEJPADAKCUZSZYHWIWMYATOYHNSTBIOWZWPPEFPNYIXVKPGLFRXLSIMIAKB");
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
    msg.setTimeStamp(0.752901382569);
    msg.setSource(26161U);
    msg.setSourceEntity(158U);
    msg.setDestination(8530U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.336456661256;
    msg.lon = 0.760758342324;
    msg.height = 0.232749302051;
    msg.x = 0.392186710188;
    msg.y = 0.0382348790386;
    msg.z = 0.404506724221;
    msg.phi = 0.495732000448;
    msg.theta = 0.519517871569;
    msg.psi = 0.437473031512;
    msg.u = 0.334911319943;
    msg.v = 0.950119793248;
    msg.w = 0.752095508084;
    msg.p = 0.735619377371;
    msg.q = 0.160182772254;
    msg.r = 0.946468419123;
    msg.svx = 0.827751193763;
    msg.svy = 0.0689785684802;
    msg.svz = 0.632719450031;

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
    msg.setTimeStamp(0.0902036891273);
    msg.setSource(29801U);
    msg.setSourceEntity(52U);
    msg.setDestination(59530U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.182350699447;
    msg.lon = 0.369082781108;
    msg.height = 0.312101150331;
    msg.x = 0.238241276199;
    msg.y = 0.375819415252;
    msg.z = 0.0179394958651;
    msg.phi = 0.967744365135;
    msg.theta = 0.331310781782;
    msg.psi = 0.303254954675;
    msg.u = 0.0839772856953;
    msg.v = 0.572984574455;
    msg.w = 0.500004964652;
    msg.p = 0.698367026277;
    msg.q = 0.0461997453867;
    msg.r = 0.920130213658;
    msg.svx = 0.180804279887;
    msg.svy = 0.0578768010636;
    msg.svz = 0.452777910013;

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
    msg.setTimeStamp(0.790895209339);
    msg.setSource(64563U);
    msg.setSourceEntity(206U);
    msg.setDestination(44177U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.565101329746;
    msg.lon = 0.796804510598;
    msg.height = 0.595635131647;
    msg.x = 0.401735788517;
    msg.y = 0.704388166703;
    msg.z = 0.127691796732;
    msg.phi = 0.432906325541;
    msg.theta = 0.641926661507;
    msg.psi = 0.358267303535;
    msg.u = 0.261403917617;
    msg.v = 0.090236849576;
    msg.w = 0.178999696894;
    msg.p = 0.243131836116;
    msg.q = 0.428719721347;
    msg.r = 0.834243530431;
    msg.svx = 0.420835630462;
    msg.svy = 0.238448659376;
    msg.svz = 0.62413545429;

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
    msg.setTimeStamp(0.792978927264);
    msg.setSource(39397U);
    msg.setSourceEntity(118U);
    msg.setDestination(3U);
    msg.setDestinationEntity(181U);
    msg.op = 97U;
    msg.entities.assign("TXPXHFEFWSFZHEYHZEKDQVJKURYUFPBUVHPWGRHPPGUSITIWETAIRCLFMLKXSKRBADBLLXAAORFKCUVGBSCWHBARYDXIVCWY");

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
    msg.setTimeStamp(0.0920326569827);
    msg.setSource(50740U);
    msg.setSourceEntity(77U);
    msg.setDestination(51857U);
    msg.setDestinationEntity(6U);
    msg.op = 114U;
    msg.entities.assign("HXHJUYHSUHQHVAXGNKPVXMZCORUJBWVTHKKWTPOJWOEHETRWASZRQAVMUGCXZJIIQXDJCPMYYNCCZGDMMUERDBEWGYLMDELLTQTZNEIIRUKCGYDOKNHDNROAIBUFPIONPEVAKXFYAKRSVDFEJXGZOFFWAAILYCMDSVYCSTSQNHLMPPCEMCBBRDSYTJNQPRWWIQ");

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
    msg.setTimeStamp(0.299867696304);
    msg.setSource(25212U);
    msg.setSourceEntity(101U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(83U);
    msg.op = 46U;
    msg.entities.assign("TTBOICLKNHPJVFWGPQVFAYGHAVXCAPYZTOFTLLAGIHAYZOSSTCNXDACMNMGWNWYAIPBSKQURVICBQEPEJMOPGDWJNUSPWHGMDEARHRFZQLSBJWLJYPHKWMQCTRNZNDRGOVRCLGLFGJPQUTHLXDIJQNKGSOVXOBMRTORRNVWAEFDVNQKCPYZVZDYTEKESTIUXZOYBQREHLBUXSUHWAXEBZQMJ");

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
    msg.setTimeStamp(0.141441691305);
    msg.setSource(41355U);
    msg.setSourceEntity(90U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(134U);
    msg.type = 2U;
    msg.speed = 46268U;
    const char tmp_msg_0[] = {-73, 72, -84, 86, 50, -128, -71, 29, 45, -46, 24, 83, -38, -103, -128, -85, -118, 76, -6, -68, -117, 96, 56, 23, -115, -17, 1, -115, -31, 20, 109, -40, -13, 83, -9, 48, 10, 53, -32, -30, -30, 19, -1, -109, 22, -24, -56, 21, -113, 21, 2, 98, -66, 38, 25, -108, -103, -121, 28, -16, -60, -84, -98, 81, 93, 45, 77, 72, -18, -59, 28, -72, -46, 10, 73, -12, 113, -5, 48, 62, 14, -112, -3, -72, -28, -66, -73, 86, -119, 99, 125, -107, 76, 23, 65, 21, -77, -36, 17, 31, 84, 91, -62, -113, -73, 43, 74, -87, -53, -79, -118, -102, 90, -74, -33, -61, 13, -93, 4, 60, -90, 5, -113, 97, -6, 76, 19, 92, 106, -102, 89, 9, -86, -98, -18, 2, -108, -44, 117, -19, 2, -9, 123, -45, -37, 106, 15, -22, 45, 50, -97, -108, -104, -123, 113, -125, 23, 12, -73, -83, -92, -48, -50, -55, 25, -38, 92, 119, 41, -73, -60, 16, -109, 84, -63, 82, 69, -117, 96, -98, -20, -65, -1, -60, -26, 74, 124, 101, -29, 119, 67, -111, 9, -110, -102, -85, -55, -122, 86, 124, -106, 39, 117, 17, 79, -78, 37, 107, -13, -1, 115, -58, -89, 83, 114, 64, 123, 91, 122, -13, 25, 126};
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
    msg.setTimeStamp(0.318124625082);
    msg.setSource(36230U);
    msg.setSourceEntity(31U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(81U);
    msg.type = 179U;
    msg.speed = 7802U;
    const char tmp_msg_0[] = {111, -17, -89, -80, -19, -12, 56, 89, -118, 76, -61, -23, -24, 40, 50, 16, -58, -121, -113, -103, -32, 88, -110, 111, -33, -121, -125, -94, -62, -70, -109, 89, 45, 13, 70, 39, -33, 99, -36, -54, -76, 65, -36, 91, 20, -109};
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
    msg.setTimeStamp(0.439705771785);
    msg.setSource(20695U);
    msg.setSourceEntity(213U);
    msg.setDestination(20342U);
    msg.setDestinationEntity(162U);
    msg.type = 170U;
    msg.speed = 61934U;
    const char tmp_msg_0[] = {19, 93, -108, -81, 69, 106, -117, -17, 68, -72, -44, -116, 6, -10, -126, 91, 98, 80, 100, 113, -9, -124, 109, -76, -32, 39, 82, 68, -74, 78, 21, 85, -126, -126, -35, 10, -10, 2, 78, 56, -65, -79, 32, 62, 61, 68, -88, -120, 114, -52, -3, 47, 45, 121, -53, 34, -35, -7, -84, 118, 108, -42, -6, -92, -80, 79, -108, -111, -61, 12, -34, 67, 88, 74, 57, -120, -73, -61, 11, 27, -123, 31, 111, -83, 57, -123, 30, -14, -75, 113, 62, 7, 20, 17, -34, 88, -50, -16, -50, 71, 22, -47, -34, -24, 122, -109, -30, -79, 115, -103, 94, -54, 118, 42, -17, 29, -31, 17, 77, 50, -92, 40, 46, -89, 1, -27, 18, -60, -118, -88, -48, -65, 86, -122, 30, 104, 104, -90, 56, 14, 34, -87, 86, -26, 100, 100, -19, -88, 96, 34, 73, -34, -18, -18, -4, 94, 5, -89, 69, -55, 42, 74, -39, -15, -68, 53, -18, -12, -24, -34, -5, -47, 96, -114, -12, -49, 68, -67, -96, 92, -94, -111, -3, 20, -32, -47, -66, 16, -76, 90, 120, 79, -28, 70, 23, -69, 60, 16, -15, -118, 62, 6, -23, -29, -92};
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
    msg.setTimeStamp(0.12038607122);
    msg.setSource(26376U);
    msg.setSourceEntity(124U);
    msg.setDestination(9740U);
    msg.setDestinationEntity(237U);
    msg.op = 48U;
    msg.tas2acc_pgain = 0.530991478222;
    msg.bank2p_pgain = 0.319662511261;

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
    msg.setTimeStamp(0.823042327702);
    msg.setSource(5830U);
    msg.setSourceEntity(13U);
    msg.setDestination(62382U);
    msg.setDestinationEntity(165U);
    msg.op = 241U;
    msg.tas2acc_pgain = 0.552596311365;
    msg.bank2p_pgain = 0.838595830226;

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
    msg.setTimeStamp(0.545404329224);
    msg.setSource(59341U);
    msg.setSourceEntity(70U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(154U);
    msg.op = 146U;
    msg.tas2acc_pgain = 0.729913805346;
    msg.bank2p_pgain = 0.449009115335;

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
    msg.setTimeStamp(0.0155660320849);
    msg.setSource(36592U);
    msg.setSourceEntity(36U);
    msg.setDestination(8949U);
    msg.setDestinationEntity(165U);
    msg.available = 182407708U;
    msg.value = 140U;

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
    msg.setTimeStamp(0.0379439484319);
    msg.setSource(27975U);
    msg.setSourceEntity(171U);
    msg.setDestination(54795U);
    msg.setDestinationEntity(157U);
    msg.available = 3026302245U;
    msg.value = 231U;

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
    msg.setTimeStamp(0.711729207898);
    msg.setSource(5452U);
    msg.setSourceEntity(54U);
    msg.setDestination(62703U);
    msg.setDestinationEntity(58U);
    msg.available = 3975747989U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.622229279776);
    msg.setSource(62351U);
    msg.setSourceEntity(190U);
    msg.setDestination(27740U);
    msg.setDestinationEntity(38U);
    msg.op = 212U;
    msg.snapshot.assign("WAAULQOHRNDVZDEVJAOTWLXBLVGGIFGHWXPGBYIEXJFUNCTHKQEZEIUFCPYXCXYKMYQACGWSBIMSPRVTMNVKKGUDMWSLKNAFCXXJURPAKHCFSXGUHLNYLAHJZYMUZQZJRSDOEWTKMYPIDKYMLXIRZIOECRXECRYSTDGQTHBVSKBHRQCSLSQBWFCKJDPELZMPVBJVAVPDFJHWOHMAWPYERBBOBIDFLZGOQNEFTRP");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("YOPSXWUMZCPDDOAYCNHREXAQYAXYLLIDEEPSOXNKEHQLTCDZBOTYCJMWIJRKLUBQTPQGJXDGGKZJSWABSHFUXBWJRJNWKIIBJRPGDPQRYMJNBKLQFVOR");
    tmp_msg_0.reference_frame = 174U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 63803U;
    tmp_tmp_msg_0_0.off_x = 0.493623603262;
    tmp_tmp_msg_0_0.off_y = 0.856444975542;
    tmp_tmp_msg_0_0.off_z = 0.512182758894;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RJMJRINTYMXEBRNHAPMFGDETGEKCXJQLZQODWLNBCM");
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
    msg.setTimeStamp(0.549638048521);
    msg.setSource(52349U);
    msg.setSourceEntity(133U);
    msg.setDestination(64680U);
    msg.setDestinationEntity(116U);
    msg.op = 175U;
    msg.snapshot.assign("UBSDFDMCIMCBVBTPKPRXZFWLARVUEKIHNDMCQFLIUPXPFVDFZESLXNTEXHIAYLGWSKXTNLAELQACVBYPQTRDYRWJIECMDKVEGFIZSENLPEIUJPVECCSMFBLGZXAJGNARZYEOHCTWDCOCYUJQQTVUYKNBOGBZTOUQ");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 24U;
    tmp_msg_0.request_id = 30725U;
    tmp_msg_0.command = 1U;
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.162635987982;
    tmp_tmp_msg_0_0.lon = 0.330367072747;
    tmp_tmp_msg_0_0.z = 0.608590707742;
    tmp_tmp_msg_0_0.z_units = 157U;
    tmp_tmp_msg_0_0.speed = 0.0164854609949;
    tmp_tmp_msg_0_0.speed_units = 51U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.435824981113;
    tmp_tmp_tmp_msg_0_0_0.y = 0.492960628169;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0215379076777;
    tmp_tmp_tmp_msg_0_0_0.t = 0.872473645815;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 37797U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.687261317619;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.14156650892;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.638467229611;
    tmp_tmp_msg_0_0.participants.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.start_time = 0.463923307268;
    tmp_tmp_msg_0_0.custom.assign("PMHDKOSQVUUCVYIBFREXOJARAPQGOIZZHFXSABYFNAQSYYTIWLARVGLQPRJELEHJEGCOZSAKNBVJQWWLBVUDKMCNQTHDDNSIDKUCMYCRPGKSAMJNYQQZZFZVJMUGIDEOETHJLOYKYKBRAZJCTBBEBBNMHFRNHXTRQAUSUITFWXXGWDRFYCIJPYMTUVHWCZNMMP");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 17781U;
    tmp_msg_0.info.assign("EJGISLQXLFMEBXKCPRKWWQHINPDHOETEKIOSZFWZAYBUZOHJLBUKAEAMZDAUGHKUTDGQOFRSBBJTIIISXRRONYTQVCDCMLGWBYHGUXOUFNIPQWVGKJNVJRYVBNSJYPCDOWSCDAWLVTICDEDUOGVZLAVKRWMFFAHTPQJENQLOWCPHSMZYUEUVPVUH");
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
    msg.setTimeStamp(0.127520403679);
    msg.setSource(59229U);
    msg.setSourceEntity(119U);
    msg.setDestination(15878U);
    msg.setDestinationEntity(230U);
    msg.op = 158U;
    msg.snapshot.assign("WMIALBKSIHMQZHEHWCMODQQMN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TLHGJRPNOUAMRZQIFJKYOAHPIELZDKWRXGDLQJMLCNUVPBVLCESUANFYJRDCFFSXAAICVFHYXCFTXZRIXGDIMREHNQMYSNPNLTQQUBEBLBOKHCSGWMMZOBNSVFKOPPAIRHHZSMTEPFDQECXOHYGTVVTRPOJYCIJTSDNRKVBOSJPJWYAIINBEOLDWWVKEWXNZVKAI");
    tmp_msg_0.feature_type = 212U;
    tmp_msg_0.rgb_red = 116U;
    tmp_msg_0.rgb_green = 99U;
    tmp_msg_0.rgb_blue = 187U;
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
    msg.setTimeStamp(0.178749142554);
    msg.setSource(49297U);
    msg.setSourceEntity(203U);
    msg.setDestination(29153U);
    msg.setDestinationEntity(32U);
    msg.op = 104U;
    msg.name.assign("DVDOYBWOEVSHNTGBMQOIHFZSPHEVXUIVJGTAGZWELFBBDUWCWKNXMKLNI");

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
    msg.setTimeStamp(0.114893283623);
    msg.setSource(29541U);
    msg.setSourceEntity(9U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(234U);
    msg.op = 81U;
    msg.name.assign("SHKUMAIEBCQHTAEPWK");

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
    msg.setTimeStamp(0.217223867986);
    msg.setSource(33365U);
    msg.setSourceEntity(31U);
    msg.setDestination(58257U);
    msg.setDestinationEntity(157U);
    msg.op = 91U;
    msg.name.assign("MCJXEBFZPWAPUTBPDWFEVMPICCLEWUASTNADKH");

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
    msg.setTimeStamp(0.0501331403126);
    msg.setSource(36449U);
    msg.setSourceEntity(98U);
    msg.setDestination(19203U);
    msg.setDestinationEntity(69U);
    msg.type = 34U;
    msg.htime = 0.565717999057;
    msg.context.assign("TJTUADFPRCUYLEVPQKQAPVWLFXWRAARUNGQBQKLDHYWZOUQPPDRHWHDMJYBMJNNZGTJKFRCILNBOHZIXXTDHWARELVSMZSEPKJHBUXRICOKIYLFFMYVMTFEKCARBTSOFOODGGPIXEUTRSQFCGCJYIYXNTVZDMBXJASIGMBBQ");
    msg.text.assign("VWNZUVVZWNVHGSXEZQZREOVIPJCSIADCKLNMZGJNGPMXMGTLUBVOMXWAOALAHTQHBTKCNACSQPMSHLXMWFEQRXJKHXOKOXSLZYWRYDVECPEWMCZNMJOXQTILLJRSOOGDFDWFERKHAEPYAJTEYQDBUPTXGGBTURXDARPEYRIDNVTUMYUPTJFIIPIZKICWZGYSPTHQBKHSCYBFUGUVKUYDFINJGDQJOSRFNFHJYBCACBQWVFWNLKZBEDKLMBSF");

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
    msg.setTimeStamp(0.130842873893);
    msg.setSource(16264U);
    msg.setSourceEntity(169U);
    msg.setDestination(32247U);
    msg.setDestinationEntity(162U);
    msg.type = 48U;
    msg.htime = 0.339080896167;
    msg.context.assign("YCELZQSPDQEUEZSRSNBZJLJLHMIGSLWHIEXTVPYDKCNMJYMGZZOGXREWTXIAPYXGAOFBORAYGCBDFQFICGAVYY");
    msg.text.assign("GVKMEFMUJFSETJZABHSIIDCIJOZRQOBRCOYEBDSMXLJZXHCCNDWVGIIKRIMLOHMBJENFURNSHONNRWUJXDXUAXPSKAKVYLLWWVGTXWUHJX");

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
    msg.setTimeStamp(0.998874641816);
    msg.setSource(16134U);
    msg.setSourceEntity(60U);
    msg.setDestination(53754U);
    msg.setDestinationEntity(83U);
    msg.type = 167U;
    msg.htime = 0.952392354244;
    msg.context.assign("CRBYAHXAVYIUGJNJMLTZEFSNYHHZPOJPQTLZSMYUTXQJGRKETIANVOJJJUFTWHGCPXAIIODANEQBFRHASQTZDFHZAMEDGWLYXOVWILBOBBSRJFXDZJQMVLRYDQOOVVNDHKCBMXKKDJWKCQEDSSGEWYRZWQMKGAEVOIUUV");
    msg.text.assign("FAOOPLDRYNKWCZUUTRNVQFNYJTYXCRZ");

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
    msg.setTimeStamp(0.938106155181);
    msg.setSource(13060U);
    msg.setSourceEntity(36U);
    msg.setDestination(46320U);
    msg.setDestinationEntity(83U);
    msg.command = 221U;
    msg.htime = 0.594611965102;

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
    msg.setTimeStamp(0.682156619767);
    msg.setSource(17014U);
    msg.setSourceEntity(148U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(118U);
    msg.command = 50U;
    msg.htime = 0.0701062915318;

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
    msg.setTimeStamp(0.539469680817);
    msg.setSource(36944U);
    msg.setSourceEntity(59U);
    msg.setDestination(8088U);
    msg.setDestinationEntity(53U);
    msg.command = 61U;
    msg.htime = 0.344829226808;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 176U;
    tmp_msg_0.htime = 0.751176612573;
    tmp_msg_0.context.assign("PSXFQHTUUKMGHUETAJLECVMTBDOQXXMIJIGQKKUAIQEXGKSYYNTMCGPOGDROGFDKYJXMILIFWUOJKUUXVWFIZDHADJPHMSGUKHFRZFBBNJVHWCRJGPPTTETYJOCNZFJLAXESPNELQBZYAEGZBDPANRUNBSICAHWLJMYSLESDKPTTHBANAVRDNMZNWCPZCQOQSDFZXORYHUVCIWQOER");
    tmp_msg_0.text.assign("NFJZWEBRPVZVHEYIFDJQUIFBDMFNMRLSHRNWPDQNOKMLQXMKHFGVGIENYQOHCWZBGVQLFRIJBVEPAOQATVUSGPCSFSMRICYZWZKWEZZUNPRIJTGZVLXWGXSAKAMCGTCNEMPAIIIFSYD");
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
    msg.setTimeStamp(0.471129477754);
    msg.setSource(13424U);
    msg.setSourceEntity(171U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(208U);
    msg.op = 76U;
    msg.file.assign("ZWTURMMUPZYGYDALEAKOLWIJWXDMEHCYLIPWNLQNRWDNJPMFQPRYQJCXKOBXWRVJGFTDYSXCGWMHVMJUOSQTCHPEVARGABIODMSBKDUWFJFSLLCZYAWBBRFIXDMQXCAIEKGYOQRYKMKUTFNFTIUHEBXNVYGGBTODSBHKSNOZLIUCSEZPMKNCXKPHFVFVZHQDIJRHYZ");

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
    msg.setTimeStamp(0.782620477469);
    msg.setSource(9705U);
    msg.setSourceEntity(177U);
    msg.setDestination(1062U);
    msg.setDestinationEntity(141U);
    msg.op = 29U;
    msg.file.assign("CGTKCHPDIXTVEHXWOBFLLNZAVXCEFZGXHYKMIAITCZVSSIRJSPPXEMQOIODPGLRC");

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
    msg.setTimeStamp(0.568151260623);
    msg.setSource(11259U);
    msg.setSourceEntity(189U);
    msg.setDestination(49715U);
    msg.setDestinationEntity(184U);
    msg.op = 254U;
    msg.file.assign("XWOXUGYFTBSFFHUJXEZLYVKGQTIIADYEVJBNOYJIRSXPCRLSPJQORGPCADIRNLQCFHNSMJJRWTHQBZVMGEHXFIPECPFKZEBASDGYDTLDMUXYCBLAMUTSUOKCRGWNHNLYMWIVVJKTTTAQWOXVTINMLZ");

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
    msg.setTimeStamp(0.135199402402);
    msg.setSource(36914U);
    msg.setSourceEntity(156U);
    msg.setDestination(51975U);
    msg.setDestinationEntity(106U);
    msg.op = 101U;
    msg.clock = 0.824437740095;
    msg.tz = 3;

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
    msg.setTimeStamp(0.218892338367);
    msg.setSource(20298U);
    msg.setSourceEntity(151U);
    msg.setDestination(55376U);
    msg.setDestinationEntity(67U);
    msg.op = 189U;
    msg.clock = 0.0981630838023;
    msg.tz = 81;

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
    msg.setTimeStamp(0.131874279157);
    msg.setSource(41592U);
    msg.setSourceEntity(102U);
    msg.setDestination(53425U);
    msg.setDestinationEntity(43U);
    msg.op = 252U;
    msg.clock = 0.448137633012;
    msg.tz = 54;

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
    msg.setTimeStamp(0.936532886164);
    msg.setSource(28793U);
    msg.setSourceEntity(90U);
    msg.setDestination(32789U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.856164490571);
    msg.setSource(8851U);
    msg.setSourceEntity(227U);
    msg.setDestination(30058U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.1208948947);
    msg.setSource(12095U);
    msg.setSourceEntity(193U);
    msg.setDestination(592U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.936594434124);
    msg.setSource(27278U);
    msg.setSourceEntity(121U);
    msg.setDestination(15081U);
    msg.setDestinationEntity(16U);
    msg.sys_name.assign("BTVTVXZIGZUHOWKOKKQTLFLCOEGHOPMURUNHNMRAJYIJIPGMQETUIWSZSSDOWJOEVPJJXVYPOAYRLEUPLEXFCELPJFFDJCXJDKSRNNEQZAALTRGUMSZAMWAWMQKZSYOZBLBHKCGWGSGXUYTBRDDAMQKXNNOUEQAGTHX");
    msg.sys_type = 77U;
    msg.owner = 13720U;
    msg.lat = 0.845650929441;
    msg.lon = 0.800098221408;
    msg.height = 0.504424970556;
    msg.services.assign("ODCQIYHPHIGOZAUCFSLDYUFIHRDJNMJIQJQZBNYEMJZBLFNVZWMUKWDENVVMNLVNKJHQOOOWYEKHEYXPOZEQMDBOUTOXPXWBHZJAKURSSCULGBGWPWBROIUPFYMXQJUFRAQAVVQPFKTRTLBTUPFIRCNNLXCZSMQAMMTGYNSHTRZCYZSXPDJWNJIHOTETLWVGKWARRKLMICACXDGVDSVWCSDTJGXTAHISSEPKVXKAKXEYGFBG");

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
    msg.setTimeStamp(0.511984463008);
    msg.setSource(346U);
    msg.setSourceEntity(93U);
    msg.setDestination(31148U);
    msg.setDestinationEntity(35U);
    msg.sys_name.assign("YHLZQGBZRIHVHZDYNDNTVWOFWPXTPBCCATUCWDEAUQPDGPKKMJNLURSTHBZEJBVFAHZOKXYJRIODNMIXQFTXJQQG");
    msg.sys_type = 17U;
    msg.owner = 19015U;
    msg.lat = 0.900768317276;
    msg.lon = 0.0279034885668;
    msg.height = 0.7558786236;
    msg.services.assign("VJRPFKORWHIZNRXLEOUIMGBJCZKZZUOHJNJYPVEEQW");

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
    msg.setTimeStamp(0.0539976563149);
    msg.setSource(6150U);
    msg.setSourceEntity(201U);
    msg.setDestination(28747U);
    msg.setDestinationEntity(45U);
    msg.sys_name.assign("NXNPQWJTAUDSPUOKGWSRAMMYCXPBDSCAUTQYBLOTBHYDKRUNKTHWBFJXHEECVPRMGIZZHNPHRPVUTLDPBCJUQFUDOJQTUXFPCKGFLDEYYNWOJXLTZGZVRZOJLASUNXCOQCWZONJQIQNRYVICKHGHEMPYCFXSERBGFIQAAOHAWDUJVSKQIHVGRSABVMLNPL");
    msg.sys_type = 136U;
    msg.owner = 17304U;
    msg.lat = 0.832479628254;
    msg.lon = 0.307433558531;
    msg.height = 0.856431982524;
    msg.services.assign("KVDDOJHJYKHJPUUD");

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
    msg.setTimeStamp(0.209771895633);
    msg.setSource(54745U);
    msg.setSourceEntity(174U);
    msg.setDestination(21713U);
    msg.setDestinationEntity(236U);
    msg.service.assign("PEFZTGRVDJERWYSQBXBXNXVNLCWEJFIUCHUBRENVOWLCKOJZKZLAXDEVIVAINHLGDZHLUJIKSOHMGXJOYVDWYZPCYFPKKIEGQWWLUMUOSJIGXHOWDGPRMRACAFVFLYZSTBDYTGNBHILTHXZQMJLZAVBAYRPVYQFBEIOEUJQSAEYKRXOCBQDTRQULMMMZNKNVPJSIB");
    msg.service_type = 88U;

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
    msg.setTimeStamp(0.601622111001);
    msg.setSource(65215U);
    msg.setSourceEntity(152U);
    msg.setDestination(14531U);
    msg.setDestinationEntity(131U);
    msg.service.assign("RDNDNUFVESINTKJBLCZFUASGDPYWDYHVLWREPVGOROHHXQGRVVLWQIBAWTPQOBEYEWQWULOPZIFTXFENZPFNCZYXVAXUSMHJCAMTUZQZOKZSLANPXALTKJXRMWGGBXHKCTIGJJEPHIBMUZVINBNFLGBWZVIUTOCBDRYCASQZJALRHGPDMFSWHYRRKKGLAKYVOCBEKLIFAHWJYTNSIMOCGKFHMVKTJMBEMECSU");
    msg.service_type = 159U;

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
    msg.setTimeStamp(0.38699113578);
    msg.setSource(24933U);
    msg.setSourceEntity(77U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(30U);
    msg.service.assign("YBKIYWSJCYMTKEUADKBOESXVPATNHCDUTDGNTEAVHREEGKFAITGWLGUTWUBZFLZSNNVXUGEDRBAHNRSONHJJNZUPXVJPKOVFJECJNMIYVXDGSVMBMNSDRDZCZQIHSDBKTUIBCXWGFHWKFVLIISQJAJOGXOWZHBKHXHRCDDARERMYLFLFSCRLZYPLFNBXMYEFWAIJIFLOPOYQQZJPOUPOQMTRTEYGKSQWVPAIMMTZYC");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.332456192118);
    msg.setSource(56153U);
    msg.setSourceEntity(80U);
    msg.setDestination(65528U);
    msg.setDestinationEntity(16U);
    msg.value = 0.859650777076;

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
    msg.setTimeStamp(0.451705003955);
    msg.setSource(17255U);
    msg.setSourceEntity(148U);
    msg.setDestination(43069U);
    msg.setDestinationEntity(64U);
    msg.value = 0.631711681041;

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
    msg.setTimeStamp(0.566977267864);
    msg.setSource(60512U);
    msg.setSourceEntity(48U);
    msg.setDestination(34358U);
    msg.setDestinationEntity(163U);
    msg.value = 0.617422412542;

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
    msg.setTimeStamp(0.290816842461);
    msg.setSource(35062U);
    msg.setSourceEntity(202U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(212U);
    msg.value = 0.364156049513;

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
    msg.setTimeStamp(0.464365073525);
    msg.setSource(53865U);
    msg.setSourceEntity(148U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(109U);
    msg.value = 0.352499380442;

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
    msg.setTimeStamp(0.145062838495);
    msg.setSource(45171U);
    msg.setSourceEntity(87U);
    msg.setDestination(55955U);
    msg.setDestinationEntity(166U);
    msg.value = 0.919479623589;

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
    msg.setTimeStamp(0.870900132524);
    msg.setSource(62020U);
    msg.setSourceEntity(252U);
    msg.setDestination(15654U);
    msg.setDestinationEntity(178U);
    msg.value = 0.486213100417;

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
    msg.setTimeStamp(0.441787537035);
    msg.setSource(2372U);
    msg.setSourceEntity(44U);
    msg.setDestination(54269U);
    msg.setDestinationEntity(156U);
    msg.value = 0.593170513669;

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
    msg.setTimeStamp(0.898375360503);
    msg.setSource(60014U);
    msg.setSourceEntity(217U);
    msg.setDestination(38934U);
    msg.setDestinationEntity(41U);
    msg.value = 0.102601502395;

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
    msg.setTimeStamp(0.163390892079);
    msg.setSource(9603U);
    msg.setSourceEntity(198U);
    msg.setDestination(14678U);
    msg.setDestinationEntity(203U);
    msg.number.assign("UCWSYTPPHZJMPTANZLLHKZUQIEQWMGVRJVWMAYXPOVBPUAULTLZAJYYTOVHGJXFJKIOAXIDCWXWMZEKKVJRVUANMENZRIEOJIKPOFJASNCWABOIQBNXTXOLLCBXNIBSRWDOCLURDDRFTAOHVYNPGCBPELSKCHRZFGCQGWMXGSDQRQCXHPQGFSQZTWLCTBVFYGYJNVTRJWPFQZDBIUKURUESOVTZEE");
    msg.timeout = 37787U;
    msg.contents.assign("VFYJTRPRXYYNURNDUGYNVFOSKGEWUFKWHXGQQZCXRDCKNBVNGPDMZOTWQNAMTHAAEFZHLQIKYBDIPUVSDGQRHKMRPXDABIAQBXEMGZAETMGIVDSHGWBZDNTRYBERWBO");

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
    msg.setTimeStamp(0.142881973005);
    msg.setSource(892U);
    msg.setSourceEntity(85U);
    msg.setDestination(57016U);
    msg.setDestinationEntity(193U);
    msg.number.assign("NBEWDQDETSQGSYMJONMIFTBGXVKXJAM");
    msg.timeout = 52444U;
    msg.contents.assign("HDLHJRSVTQLBTGRNDZGCYPHQEMCDFUJGYMRHVOJWGDLLNAGKOCNELCNUEJFEMIOWRXZBVUCPUPRFH");

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
    msg.setTimeStamp(0.707520245169);
    msg.setSource(63881U);
    msg.setSourceEntity(179U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(104U);
    msg.number.assign("ZEXFJEQZYUNSONFFNAITHXQYVIIXGMDTIUOJKZPLQRAOECPOUQBJWTDZXSVLEHRKDNWQPMLQXBNJROAJPYTQSEGISKSECMVYNXZGUGXLGHJYSFFTWLRBOQCYAGLCRHKCMAKSHJTMMOKWRIIYHPOWNCPIYVDUPKXDQFCFRBGFNLAODMVJZVEAMGRG");
    msg.timeout = 47298U;
    msg.contents.assign("ZVXMQWNIOXDIBAGNDUCUJGLBHKYMPAHOWFJTNAJOBFOLPSBZONAPVRHLGVCQQPWSENBHWTNQKJUPUXQUVQHSTLDJYDFCLERHRVAWZICZIZKPYGKDSWLRKVCTRMIYPFHEQPGEMJIXTSDNMXGMTMNEGBEYNSRCKICLUCYAVQWHUYKWFMKXJAGKTFAXFMLRYYEBLXPDERRUBPZKFOZBTRWCXFHEZUNIDQXFWCJSDVGODBAUSJZESIOQAO");

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
    msg.setTimeStamp(0.902663308668);
    msg.setSource(44108U);
    msg.setSourceEntity(252U);
    msg.setDestination(35811U);
    msg.setDestinationEntity(185U);
    msg.seq = 3884137120U;
    msg.destination.assign("NQMSOFWIOMOOORNGEFUZPIYWJSKJJJGLQTDXBKHTEOLEBCVQEYXLPNDVKQGXRBSJLXNXEHHVMUSNJSLPTUVPEBBIZJQLMPBQGGFIYTTFLNOGUKBZGAPRSUDAMZTMLRVUQGUVRXDYPJCZCTCEOYCIDCURJNHXVVQHRDZZBIWFXPUHDXJWYWSCFPKMHFLAWQOCSKDMWCYEAZSNFRLWIFKIRAAEMVBNTPUGQCAZTAMABRZHYKEVAIYNHXOWKY");
    msg.timeout = 31562U;
    const char tmp_msg_0[] = {7, 125, 110, 111, 107, 50, -107, -7, -48, -75, -61, 117, -80, 37, 84, -104, 123, 54, 76, 80, -36, -117, 102, 20, 108, 68, 62, 60, 56, 52, -111, 95, 113, -94, 92, -89, -122, 4, -9, 40, 125, 120, 83, -66, 56, 57, -18, 5, -126, -87, 96, 5, -20, 51, -76, 93, -44, 69, -127, -95, -64, -41, 61, 42, 103, -11, -10, -75, 66, 33, 98, -28, 31, -99, -2, -84, 108, -71, -53, -119, 33, 7, -24, -95, -78, -76, -115, -25, 102, -55, -59, -39, 101, 69, 66, -107, -63, -12, 56, -68, 28, -110, -117, 99, 83, 45, -61, 19, -43, 125, -12, -44, 125, 117, 118, 74, -100, 119, -41, 30, 6, -81, 91, -10, 63, 118, 20, -122, 64, 95, 51, -98, -70, -93, 31, -110, -115, -91, 101, -4, 60, -9, 76, -81, -56, -38, 110, -21, -51, 87, 59, 76, -113, -126, 16, 14, -50, 109, 73, 115, 18, 57, -27, -105, -86, 18, -6, -5, -89, 100, -64, 80, 97, -60, -105, -111, 46, 126, -34, 41, 31, 51, 100, 8, -8, 83, -61, 108, -41, 111, -33, 70, -7, -76, -65, -80, 115, 99, 54, 6, -19, -53, -20, -41, 34, 121, -4, 38, -15, -116, 5, 100, -113, 92, -40, 120, -41, -36, -107, -114, 87, -8, -39, -110, -117, 98, -71, 93, -66, -2, -77, 30, 44, -53};
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
    msg.setTimeStamp(0.025545291874);
    msg.setSource(21163U);
    msg.setSourceEntity(188U);
    msg.setDestination(12319U);
    msg.setDestinationEntity(59U);
    msg.seq = 2938820368U;
    msg.destination.assign("UAOXZSBVXKISCITFYGHLZWNHDLMIPQOLPUVBIZOQUJCVXBIAJCSERZPWRZAELFJFSAGOYZWLAEHKXDRMJDIKBPAHMQDIJVXWXQXJLHBRTKBAGTLZRSWCWPMDQOUCYOJEMYBOTYGJEVKNOUVHGNHNFKEDFFSZFTIPOQLFYQFCUEYAKBTNMNDBNGEXMWISYXSTUEVCDANBPLRTRJRWTXMZRPCQPUKNKQL");
    msg.timeout = 60696U;
    const char tmp_msg_0[] = {52, 90, -82, 38, 58, -106, -112, 46, -40, -30, 110, 100, 29, 70, 52, 90, 24, -8, 72, -110, -54, 9, 20, -68, 66, 58, 57, 66, 26, -22, 67, 42, 73, 4, 101, 70, -11, 55, 119, 6, 15, -24, -10, -95, 74, 95, -40, -21, -54, 63, 108, -50, -109, 89, -32, 93, -11, -48, -126, -42, -66, -99, 43, -60, -126, 51, -73, 89, 8, -111, -33, 26, 105, -1, 28, -1, -91, 36, 65, 24, -6, 21, -21, -86, -118, 70, -122, -42, -62, -22, 22, -13, 18, -107, 93, -109, -101, -106, 8, 117, 48, -114, -29, -75, 64, -54, -69, -36, -72, 19, -92, 79, -48, -65, 76, 89, 70, 52, -102, -67, 26, 4, -17, 91, 43, -7, -50, -70, -114, -11, 71, 61, -22, -59, -84, 101, 10, 18, -35, 92, 75, -17, 81, 33, -118, -116, -43, -26, 90, 6, -11, -46, 81, 58, -71, -40, 20, 8, 35, 10, 122, -95, 121, 67, 101, 126, -79, -95, 43, 80, 49, -83, 59, 73};
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
    msg.setTimeStamp(0.0366440308014);
    msg.setSource(15491U);
    msg.setSourceEntity(119U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(161U);
    msg.seq = 1430304122U;
    msg.destination.assign("BUVLLGAIEQJWFMPLGEMXMMVBLIMESFSZHFZBSYJBLBIWTZYTEXBOOEUCTOSEZVNKSUFHHDHSFCHPKNHQORNGAKZXRWJGFMXPJPIDLXUVAGJGPQYCRYALEWQWTIRSJFNLIDFZYMDNXCBNMORNQCQKNXXZIDFHVDDBCUYDSAZTUTDSVMACDJGRO");
    msg.timeout = 55015U;
    const char tmp_msg_0[] = {2, 67, 80, -121, -37, 45, -66, 83, -32, -26, -14, 99, -84, -120, 23, 100, 109, 115, 46, -108, 6, 102, -97, 50, -96, -89, -121, 120, 105, -57, 64, -79, -93, -59, -68, 75, 86, -104, -42, 119, -5, 10, -20, 70, 71, -37, 62, 41, 41, -120, 64, -66, -71, 112, 52, -83, -24, 51, -95, -29, 43, -81, 113, 105, -28, 74, -83, 51, -94, 93, -12, -32, 44, 14, 86, -17, 74, -99, 70, 107, 12, -69, 13, 88, 96, -106, -10, 90, -72, -95, 20, 4, 90, 52, 22, 111, -37, -100, 57, -21, -51, 95, -115, 69, 125, -115, 22, -74, 14, 81, -16, 67, 10, -44, -52, 8, 67, -102, -84, -93, -79, -48, 32, -32, -115, 122, 110, -76, -115, -50, -66, 53, 80, -128, -31, 16, -121, 106, 115, -121, 98, -26, 107, 72, 26, -65, -29, 75, -78, -68, -78, 123, -65, 52, -41, -81, -23, -104, 76, 100, -84, 50, -119, 55, 41, -54, 117, -37, -39, -111, 55, 93, -66, 11, -36, -4, -55, -95, 52, -121, -93, -10, -92, 101, 59, 6, 58, 46, -90, -52, -94, -102, -32, 107, -11, 61, 46, -127, 32, -2, 45, -32, -63, 7, 76, 102};
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
    msg.setTimeStamp(0.153039637428);
    msg.setSource(55804U);
    msg.setSourceEntity(150U);
    msg.setDestination(52990U);
    msg.setDestinationEntity(108U);
    msg.source.assign("ECQKUBEFSMTVZPLEDXDRUCIWSGCBYVJWGYDDHXZQIWGKJNNJXLIZBONBIYJPARSKSLQQPAPRFWRMQFLTDOVTNEYEBCFHKMHUDPYIZDWLLDVFXUJJGXZMSGLNUKUKXGOQEAKHTTHOYHZAVVXQDMAIBHCWNYHPSIDJAWQCNRZBKMTATBXCOPOKWUESWBUCUIOVMNMHWGXCASVFPAUTOFJRLMXIRKCBZYAF");
    const char tmp_msg_0[] = {102, 45, 53, 15, 14, -30, -41, -84, 91, -66, 35, -2, 23, 71, 118, 92, 118, -16, -128, 100, 104, -53, -25, 73, 118, -20, -13, 93, -22, 99, 101, -46, -104, -123, 15, -98, 57, 67, -81, 68, 88, 57, -95, -115, -75, -89, -118, 122, 91, 10, 78, -59, -126, 21, -87, -99, 98, 50, 37, -61, 9, 47, -86, 6, 30, -100, 47, -76, -108, -108, 24, -5, -109, -79, 117, 112, -9, -107, 35, 68, 125, 42, -8, 84, 90, -113, -67, -12, 106, 104, -46, 41, 95, -69, -84, -50, -66, -115, -101, -48, -42, -13, 69, -11, -22, -49, 4, -19, 41, -72, -50, -57, -51, -66, 78, 113, 38, -10, -105, 116, -58, 87, -64, -103, 46, -126, -111, 9, -119, 75, 79, -95, 79, -45, 86, 80, -78, 28, -75, 32, -92, 23, 56, -32, -42, -73, 60, 95, -6, 49, -108, 71, 68, 15, -31, -67, -93, -103, 0, -92, 27, 47, 88, 56, -87, -80, 52, 11, 61, 87, -44, 120, 74, -2, 5, 84, 69, 35, 114, 29, -8, 15, -15, 22, 93, 112, 57, -110, -27, -4, 40, -85, -63, -122, -117, 7, -45, 66, 55, -22, -25, 46, -81, -97, -9, 39, 54, 66, -31, 24, -126, -102, 117, -4, -1, -71, -114, -53, 21, 84, -34, 85, -112, 63, 46, -62, -101};
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
    msg.setTimeStamp(0.785877424543);
    msg.setSource(61971U);
    msg.setSourceEntity(19U);
    msg.setDestination(48434U);
    msg.setDestinationEntity(111U);
    msg.source.assign("BQNBJXKJOJCINVEDOPG");
    const char tmp_msg_0[] = {27, 126, 95, 6, -117, -96, 98, 88, 110, -117, -27, -89, -38, 38, 86, -19, -18, -42, 104, 0, -38, -49, 41, 112, -47, -25, 15, -70, 0, 21, -79, 17, 112, -42, -125, 6, 9, -59, -80, 20, 36, -27, -58, 27, -76, 122, -69, 27, 35, 14, 19, 32, -37, -24, 81, 29, -82, -90, -128, 90, 122, 29, 62, -23, -86, 16, 13, -53, 80, -17, -48, -124, 78, 35, 24, -12, 13, 67, 85, -79, 63, 49, 11, -32, -51, 115, -2, -67, -108, -69, -35, 2, -27, 114, -124, 123, 115, 37, 6, 102, 23, 34, -101, -9, -28, -67, -112, 110, -8, 87, -75, 102, -1, -68, -128, -9, 89, -49, 29, 68, -19, 83, 85, 74, 119, -6, -16, -26, -82, 110, 16, -54, -71, 101, -2, 55, 98, -71, 87, 95, -94, -68, 116, -80, -12, -76, 8, 24, -61, -110, -55, 83, -77, -39, 41, -14, 45, 38, 34, -13, 67, -116, -12, -40, -78, 49, -23, -29, 8, 23, 75, 102, -104, -59, -13, 89, 42, 30, 66, 82, 118, 123, -121, 51, -51, 10, 61, 26, -11, 6, -125, -28, 52, -22, -89, 116, -29, -118, 19, 84, 83, 115};
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
    msg.setTimeStamp(0.93530024491);
    msg.setSource(25067U);
    msg.setSourceEntity(154U);
    msg.setDestination(18298U);
    msg.setDestinationEntity(93U);
    msg.source.assign("OANTCJRSTSEBPNKXWIBLDYZSKMRRZZXMLYPGIKECKBPASWBFQHHMPOTBQUCSOVVEZVEIUAHDJTEZPIAQGXAFOLDJQWQIRNVUGMBQEFLQAWMKODTJYDWYPNRJZVPFRURKGCOHAUBNZCOJLXCMETROSBMLZDETLUYDXGDFSWDPFVHTXLSAVNXVQZALNNNPFEQPLYYHJDMUGZEBVNCTGHKHMMFWHCRYKXVWORXCOWSKGUIQYJJIT");
    const char tmp_msg_0[] = {-8, -40, 108, -81, -69, -48, -4, -7, -6, 35, 14, -113, -76, -47, 94, 45, -78, -62, 13, -74, 58, 119, 69, 84, 46, -61, 89, 56, 11, -95, 92, -108, 55, 96, 64, -20, 114, 115, -126, 69, 32, -6, 51, -73, 14, -2, -79, 22, -74, -36, 32, 2, 16, 94, -108, 109, 115, 38, -56, -118, 83, 126, 94, -104, 94, 42, 93, -86, -41, 4, 88, 56, -108, -6, -26, -65, 18, -128, 62, -58, -100, 3, 35, 109, -28, 33, 14, -95, 90, 25, -55, 3, 19, -81, -90, -8, -29, 70, 118, -109, -43, 70, 64, 79, 118, 113, -65, 87, 33, 6};
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
    msg.setTimeStamp(0.389308028559);
    msg.setSource(12553U);
    msg.setSourceEntity(130U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(38U);
    msg.seq = 2898305246U;
    msg.state = 233U;
    msg.error.assign("MLGUMKVBECIAHQSUEYCGCUIJLNQYKYNZIDZMJEQUNPGILYPZUPSBRLSVVVQYMBOPXSVFXKBMYHTZWFFNVEKYJDBDKQDTEFANJCYOERGNCDOYROHW");

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
    msg.setTimeStamp(0.0682592824907);
    msg.setSource(11857U);
    msg.setSourceEntity(162U);
    msg.setDestination(22526U);
    msg.setDestinationEntity(179U);
    msg.seq = 1245621686U;
    msg.state = 175U;
    msg.error.assign("ENOMZVJPYYWMJIOKIGTEMCYRLFCECPYYATTCZGMZKUDOOGPLBDODGHMKRMNEQTOLWTUMOLQYHSUUCLRVBJJDHZFN");

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
    msg.setTimeStamp(0.780514924602);
    msg.setSource(18269U);
    msg.setSourceEntity(149U);
    msg.setDestination(34004U);
    msg.setDestinationEntity(122U);
    msg.seq = 3103344156U;
    msg.state = 122U;
    msg.error.assign("BJRIPHKGZKOVRGSUOAOEQZGWMEQDZRWULXDJYMASXDCYCQDPDLKWXVAMXZEJLPKIYCRSXDDPZWHNTVWEXSNVMCIMPGUAHAZTQWOJDAXXQUCWQNKDJVPVPIOTJTROPIXFNVNRZRNZROTROUYUGFLYIYSXNWSYZBJAIBUEFNBFAHKGFSDCTMWMGHJWLHNIQLVRTPGEKPVUBGKIBMCQQELFYCZSBIAJLMYTFY");

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
    msg.setTimeStamp(0.281288686686);
    msg.setSource(48689U);
    msg.setSourceEntity(226U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(51U);
    msg.origin.assign("JTRSVUBAQONRIAZWWORCHBZCEGPSCAPDXEQWTCFFDXKYYVEIUGCGHKFXEZKTJKULNJUNUDQHARIIXMZYGNFTCTTUYEL");
    msg.text.assign("QCMHBOICMKZRSDTMEGPORDZLUPEAWZCPOYSUOEXWFKDGQVTMNTVJUXLUPPMTARJMARGKHFYFOJJAGDIJHIQWCLBKBYBMOIQTDIVOCXWVSUKNHKLZWXJGNEFNTSWJFWRNPLEHPVNIHRREXRZEDUSINNFBHNXIDJOPGYYKBEEAGICUVTCMBSAFUADWVQYQYJYWYXLLZNLPHTHSIFJXWAZ");

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
    msg.setTimeStamp(0.461350147979);
    msg.setSource(57443U);
    msg.setSourceEntity(177U);
    msg.setDestination(14167U);
    msg.setDestinationEntity(182U);
    msg.origin.assign("UOKKWRUDEFFFGIQLUFPUQIYMRUFHWGVOJLCTECLTRJNSVSWBOOVDJPBHHBXFCSQJXYAEPDFYDVWZSQNNKMDCRZTMLTWNRXNRNTYOZAPDDLIGGPWUZETHWLVSXBUKXDHBKVEMQRQLSBDQGCHYPGOJBKZBMGNAOWLUVHJBUAHQTQIQAPPK");
    msg.text.assign("UDVVRVNAYJFQCMSNYEEAJFMONXSZL");

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
    msg.setTimeStamp(0.229441546399);
    msg.setSource(20289U);
    msg.setSourceEntity(77U);
    msg.setDestination(46116U);
    msg.setDestinationEntity(67U);
    msg.origin.assign("PAQZMNUITWPAICVLSYNAZNLIHJSGPMELJKXXVJMWDRYJXEVENQZBYV");
    msg.text.assign("TAETICZDNGNNGHYIDJQKNIZNALNYZHLNRPYPUTCNHWPEHJRFPNVQMOKRZYSVWPMDBBJAOGJHHCXCEEEETRFXDDESISXMCUCRWLBRGGVWVQAACYELTYQYOILYXCBVOFCWUMMFXGZMXZLPZKUYOSMXOKFFDDUUJKWZOUREOZWDHLSQAGLQXCDLIBRFSFSQSFKNVUXSIOAKTISBHQKBJWQVMMKVTPGAWWJFGDHTTPYAUTBJKMAQBGRLPI");

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
    msg.setTimeStamp(0.651508050811);
    msg.setSource(11554U);
    msg.setSourceEntity(205U);
    msg.setDestination(49845U);
    msg.setDestinationEntity(198U);
    msg.origin.assign("DRXPXMPMEBONZGLGPTOIHCPBDNLXQFISQMAKACNPRIBGRXTJHOLNIOFEUWF");
    msg.htime = 0.689909261606;
    msg.lat = 0.0438592821925;
    msg.lon = 0.638223402454;
    const char tmp_msg_0[] = {104, 112, -32, -92, -113, -91, -31, 6, -115, 99, 75, -71, 102, 25, -59, -18, 56, 72, 36, -85, -109, -28, 102, 2, 107, 75, -125, 34, 101, 9, 95, 82, -83, 121, -19, -108, -71, 124, -39, 2, 52, -28, -105, 42, 15, -23, 118, -83, -108, 14, -112, 126, -111, 33, -57, 59, -71, 94, 26, 26, -31, -93, -12, 42, 104, -8, -45, -22, -95, 112, -96, -6, -76, 35, 122, 119, -109, -64, -45, 87, -87, -95, 119, 64, 11, 12, -68, 9, 120, 37, -21, -97, -94, 7, -82, 29, -120, -90, 30, -38, -118, 26, -24, -21, 91, -31, -47, -65, 101, 85, 119, -125, 20, 76, -93, 26, -33, 68, -10, 48, 11, -62, -115, -66, 47, 4, -91, 108, 29, 11, -55, -60, 80, -62, -58, 32, 60, 94, 22, 82, 34, -63, 12, -99, 73, -73, 57, -97, -123, -56, 11, -127, 119, -127, -113, -43, 64, -8, -66, 49, -105, -14, 81, 17, 8, -101, -55, -81, 57, -68, 8, 114, 115, 29, 46, -10, 62, -11, 45, 119, -109, -111, 95, -119, -88, -81, -62, -114, -115, 20, -120, 85, -83, -18, -35, 0, -88, 12, 78, 112, 75, 34, -96, 81, -85, -113, -24, -123, -123, 79, 85, -11, 23};
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
    msg.setTimeStamp(0.171547207612);
    msg.setSource(32057U);
    msg.setSourceEntity(130U);
    msg.setDestination(63978U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("ZNJXWHYCZDPBDTHHTFUKBQKDCGJSXQRQHFEYSPWRSXUUZDTIXFGTAGKWRLMYMEPNSMEKUVLJOLZWAZNXSFZMTIBUDYQVIQLVJARPYTMTEGLERDWKNFHQVPTKXFKWCLZSCAYMZEIOMOAGKDOVIIRNZGVHCOPCMLVJMXHBIYSGBO");
    msg.htime = 0.224718881715;
    msg.lat = 0.218576435538;
    msg.lon = 0.42010374501;
    const char tmp_msg_0[] = {-55, 107, -27, -54, -23, 3, 98, 79, 91, -4, 116, -52, -42, 121, 100, 77, 82, -125, 91, 71, 7, 1, 90, 117, -116, 72, 16, -87, -51, -7, -12, 125, 38, -85, 77, 52, 89, -37, -53, 30, 119, -52, 8, 7, -40, 119, 11, 102, 78, 33, -124, 95, 110, 104, 43, 50, -74, -57, 79, -82, -8, -89, 34, -43, -78, -20, -48, 56, 31, -4, -55, -82, 83, 52, -104, 35, 82, 20, 119, -42, -37, -73, -37, 121, -126, -81, 53, 23, -77, -96, 39, -113, -111, 84, 44, -107, 69, -123, -6, 25, -93, -32, -92, -3, 108, -59, 69, 120, 115, -59, -4, -30, 47, 12, 8, -80, -2, 70, 27, -46, -95, -24, 46, 34, -84, 48, -109, 115, 42, 75, -85, -100, 44, -28, 27, -117, 85, 6, -33, 90, 25, -122, -77, 68, -95};
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
    msg.setTimeStamp(0.496070161792);
    msg.setSource(12987U);
    msg.setSourceEntity(253U);
    msg.setDestination(55816U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("IDQZRESUFRWAWQJZBPPNIZQJTIOBITFHLEQKQKKIVYUNRAFUTHRVPABNUSJOZPZHVXOYKYBHAV");
    msg.htime = 0.688186134516;
    msg.lat = 0.707694725654;
    msg.lon = 0.908499978793;
    const char tmp_msg_0[] = {79, -12, -20, -116, 39, 61, -42, 61, -9, 0, 84, 86, 33, -98, -42, 125, 81, -8, 44, 57, -99, -22, -36, -113, 4, -124, 61, 74, -104, 28, -53, -87, -96, -4, 73, 6, -76, -112, -124, 32, 87, -47, -39, -107, -65, 11, 100, -88, -77, 55, 125, -23, 86, 84, 1, 47, -70, -79, -73, -20, 125, -68, -62, -25, -99, -62, -91, -4, -12, -10, 16, -41, -94, 110, -67, -52, 78, 73, 89, -100, -124, -51, -105, -46, -40, 119, -11, -97, -9, 7, -25, -62, -50, -92, -34, -111, -66, -106, -75, -86, 75, 116, -34, 19, 21, 14, -64, -32, -108, 36, 108, -39, 110, 17, -31, 2, 24, -82, -93, -14, 29, -117, 120, -59, 57, -116, -80, -87, 13, -127, 124, 54, -72, -112, -31, 66, -42, -52, -93, -106, 125, -72, 35, 13, -119};
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
    msg.setTimeStamp(0.805511912888);
    msg.setSource(3094U);
    msg.setSourceEntity(124U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(27U);
    msg.req_id = 12912U;
    msg.ttl = 2844U;
    msg.destination.assign("URYYPDXGHUDFCVQVNHAQ");
    const char tmp_msg_0[] = {-23, -66, -15, -97, -18, -73, 106, 25, -46, 93, -39, 31, -20, -17, 35, 27, 1, 59, -20, -121, 15, 78, -15, 58, 51, 84, 3, -116, -46, 120, -114, -15, -9, 97, 51, 64, -85, 67, -100, -73, 106, 50, -73, 32, -105, 49, 43, -28, 90, 65, -69, 48, -3, 94};
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
    msg.setTimeStamp(0.227435198796);
    msg.setSource(6073U);
    msg.setSourceEntity(200U);
    msg.setDestination(40417U);
    msg.setDestinationEntity(173U);
    msg.req_id = 42786U;
    msg.ttl = 41286U;
    msg.destination.assign("IROBUZPUPPNSRHUWIYQBRDYDMDQNACCYWDPMKTXZETNUWLOXSSLBZUYGSJCZEAGVOFEBRSWGDITCSVCKIDUIZSHMCJJOOLYQJERPLUBVFXMAGXLUTAKNJZTLUHBLVAHASKQCKENZYQMHDPIGK");
    const char tmp_msg_0[] = {-27, 18, -75, 16, 125, -26, -63, 97, 73, -27, 101, 96, 24, 48, -96, -12, 116, 23, 50, 85, -107, -40, 45, 53, -62, 22, -69, -104, -1, -58, -21, 69, 24, 84, -63, -99, -3, 15, 110, -24, 60, 21, 101, -111, 62, 54, 103, -34, -34, 74, -59, -33, 69, 114, 107, -86, -31, 0, -96, -103, 104, 14, 6, -24, -25, -11, 29, -99, -88, 12, 58, -40, 115, 94, 75, -14, -7, -71, 64, -77, 15, -107, -127, -108, -121, 36, 103, -94, 10, 124, -35, 31, 16, -34, -107, -51, 96, -126, 99, 4, 63, -11, 15, -32, -67, -69, 5, -111, 21, 28, 63, -70, -57, -6, -71, 111, -93, -126, 61, 104, -98, -117, -8, 26, 96, 76, 35, 111, 104, 90, -110, -81, 4, 98, 88, -30, -4, -116, 112, 119, -85, -106, -89, 111, 88, 0, 65, -121, -62, 91, -122, 0, -95, -86, -58, 48, -34, -73, 78, -86, 126, -70, -71, 45, 38, -106, 26, 8, -29, 54, -60, 64, -11, -102, -93, 52, -22, -112, 4, 64, 44, 90, -5, 95, 5, 39, -64, -124, 102, -40, 22};
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
    msg.setTimeStamp(0.986566865934);
    msg.setSource(5049U);
    msg.setSourceEntity(15U);
    msg.setDestination(55920U);
    msg.setDestinationEntity(253U);
    msg.req_id = 25443U;
    msg.ttl = 48889U;
    msg.destination.assign("XVBYUCJFJRJEOFYDRFTBXQXDAUINSSWYFAGQPVSYDADIREMOHPTHYRTYCFXMZBNRFOESEERQKNSBOWPAUMDTUGHQLLWVWMIUUNPZFKGGYLDZPZHXDPECLLDMVMIBAUMGZOGWRATOJVWCLZGFAFKXUCUOAWDKNQVPIOCJGMVKQXVOSBWLCTBKZLBPHGSMHIZKZECQQONTNNHEHSWGPFBERHNIEMKCRTXYJJJUPQTLJSY");
    const char tmp_msg_0[] = {81, -68, -37, -58, 34, -97, 105, -128, -33, -87, -70, -72, -71, 98, 86, 112, -41, -122, -21, -6, 58, 51, -26, 109, -56, -6, -115, -83, -64, 83, -74, -15, -28, -88, -119, 16, -36, 121, -7, -128, 56, -1, 26, -48, 115, 1, 7, 101, -55, 111, 33, -92, 67, 81, -84, -7, 43, -9, 17, -21, -13, -40, -99, 13, 115, -96, -93, 75, -3, 92, 52, -128, 18, -68, 122, 5, 62, 104, -112, 2, 58, 34, 60, 54, 69, -116, 13, -76, -128, 35, -30, 79, -57, -124, -66, -115, -62, -57, -62, -15, -2, 72, 11, -38, -118, 55, -19, 13, -90, 96, -29, 67, 125, -2, 39, -125, -117, 78, -30, 124, 4, -33, 22, 15, -128, -17, -80, 6, 88, -92, -76, -61, -69, 7, -128, 79, 45, 68, -91, -28, 83, 113, 32, -33, 76, -94, 110, -2, 102, 56, 93, 65, 99, 35, 121, 13, -25, -123, -3, 105, -16, -107, 35, -37, -45, -89, 11, 106, 114, 119, -78, -110, -91, 44, -105, 111, 89, -72, 29, 37, -10, -57, 120, 32, -51, 94, -17, 72, -51, -66, 33, -112, 123, -59, 61, -128, 79, -66, -95, -80, -107, -113, 70, -90, 115, -69, -104, -71, -126, 67, 43, -56, 5, -23, 60, 24, 14, 119, -31, 38, 63, -43, -26, -16, -102, 17, 4, -85, 86, 116, -97, 114, -65, 27, 13, 115, -18, -26, 84};
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
    msg.setTimeStamp(0.671961192719);
    msg.setSource(51296U);
    msg.setSourceEntity(195U);
    msg.setDestination(13321U);
    msg.setDestinationEntity(123U);
    msg.req_id = 6728U;
    msg.status = 138U;
    msg.text.assign("NMGQDVPNCRBLAERGHPDGVRWNYFFOXAXZPDZUQBBSECGOIYJWBAFNBWXDLVITDDEVYCTOHPFBXRIJXSBYOARYKHFVZRIULGVBGCWPHPEAWKNDTJOIBIZURQBXZPQEKEFVWRLPQLQMHVGUYQLSEYAOZTXUAFMJAJFPJFOIRCNTKHSSVOZCH");

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
    msg.setTimeStamp(0.393625525133);
    msg.setSource(22172U);
    msg.setSourceEntity(48U);
    msg.setDestination(50021U);
    msg.setDestinationEntity(190U);
    msg.req_id = 51827U;
    msg.status = 85U;
    msg.text.assign("RHOSDMIAKBHKBGFIKMASUEZGXPFRYHOJDMIBAUUV");

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
    msg.setTimeStamp(0.332201817303);
    msg.setSource(30250U);
    msg.setSourceEntity(92U);
    msg.setDestination(13092U);
    msg.setDestinationEntity(75U);
    msg.req_id = 37923U;
    msg.status = 87U;
    msg.text.assign("CSOXJUBVDOSWHBGFCZPCSTYMFZDKZNVRNQFH");

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
    msg.setTimeStamp(0.665665711378);
    msg.setSource(1426U);
    msg.setSourceEntity(106U);
    msg.setDestination(45473U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("CQHLPUXZBMERSGZPKZWABINEANMDWBPATVZSCUPMPXJJOMNKYXSPYRKIHSNLHDHHCGMWOBJLRFGJXDGXLULVOBJFEZFVGCJVQUQTHHYSWFFRBNQXCGNYSRKEZMDARIWWSBLYOQPUNRMCUEOPHCTHDAFNEENDKXECUHBGJQRCLSINTTOORIEXZVSTWLYAIOFFUYQTEIMXJUFAIGLCODVVZDKDVBYAMTQAGDKIJWGJKZTLWTVKMKIOAVPWXFQ");
    msg.links = 2822718542U;

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
    msg.setTimeStamp(0.217503723663);
    msg.setSource(11754U);
    msg.setSourceEntity(187U);
    msg.setDestination(29747U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("UYCOYLLHTDCHJEEAMBCPOFMTLJUASSNERMQYJPCFCPEGMNWBPIYLABGWZXTGEYZQKQUGIWIXMTNF");
    msg.links = 3184331125U;

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
    msg.setTimeStamp(0.885581380249);
    msg.setSource(2415U);
    msg.setSourceEntity(197U);
    msg.setDestination(24065U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("JJZAMHCHETXYWZLLGVVRJCNQTTFOYRAYIMPECESPHUFHSOSCAEGSKCNSLNFQFHTSPRDVXERQDCKSIMQEFAFMBYLAHAIZPNKGFDINYUVYRYOVPWOIDLLDIJRBNEQAAJUCRBLBIBYKTHNXCDANGGOWUORLPZMWUIBWKJOYNKXTLCGPMTQZWXDGYSXV");
    msg.links = 3183217663U;

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
    msg.setTimeStamp(0.919862235168);
    msg.setSource(7211U);
    msg.setSourceEntity(197U);
    msg.setDestination(425U);
    msg.setDestinationEntity(244U);
    msg.groupname.assign("ULVJBXGDSHZYMWTJTRXQBQPZOUHRSGLYIJSYJDBDKWHSMYK");
    msg.action = 31U;
    msg.grouplist.assign("JAVJAOCLDXKCPSFWTWPYBJQDNHZG");

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
    msg.setTimeStamp(0.154781823893);
    msg.setSource(44731U);
    msg.setSourceEntity(137U);
    msg.setDestination(65042U);
    msg.setDestinationEntity(31U);
    msg.groupname.assign("WPGQIAZDGUWGYJHOVBUZTIPMVAYDVHKFMQUXGRYLDDEFAVLPTZHCWBAUULBMPMKYGNFVNBIMGRWOGALWVSJHKVEONUUMQXRQJB");
    msg.action = 162U;
    msg.grouplist.assign("FIOFMSATYGJMXYYWBMHAEEHLDWIQGINJAGQAZJOWJYDNBOUAAYMKCMWHTWWUEOBXSHTJJPCTSSCDWEOTQPXYIESZZQXVWHTNNVRECVXGRIZTNRKEOIQOQBVSVZMUR");

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
    msg.setTimeStamp(0.228288641002);
    msg.setSource(46218U);
    msg.setSourceEntity(158U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(155U);
    msg.groupname.assign("WWQORNRPCIORRWSYUPJAZHZCCYTSHTZDCFFZLXSTHUSGXMBBWJIEXBTXEUJLMGUGDACFTLFCGYJBYWPCZTYSIYQKV");
    msg.action = 61U;
    msg.grouplist.assign("FQWNNTKAOINEZTXKWFPIPIMBIHCZZVKZVXCZSQDUBUSORHPILETUKMXHLFYDPJHBATLYCOSVXUVHYQIOAGFEDLGJKUSYESMINMGABOUNKRYCXYMULAXSQSZLJTPENYFGGWPPAOGTDCNOHLTLSODVMMKAHTFJNUPWRKQLULBYMNEJFYVRBK");

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
    msg.setTimeStamp(0.537412001168);
    msg.setSource(36190U);
    msg.setSourceEntity(173U);
    msg.setDestination(20971U);
    msg.setDestinationEntity(88U);
    msg.id = 182U;
    msg.range = 0.462668557979;

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
    msg.setTimeStamp(0.396409996788);
    msg.setSource(35900U);
    msg.setSourceEntity(175U);
    msg.setDestination(36909U);
    msg.setDestinationEntity(29U);
    msg.id = 108U;
    msg.range = 0.74278907235;

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
    msg.setTimeStamp(0.749674494594);
    msg.setSource(49765U);
    msg.setSourceEntity(227U);
    msg.setDestination(61978U);
    msg.setDestinationEntity(159U);
    msg.id = 38U;
    msg.range = 0.146019300593;

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
    msg.setTimeStamp(0.986644752312);
    msg.setSource(48163U);
    msg.setSourceEntity(19U);
    msg.setDestination(49875U);
    msg.setDestinationEntity(204U);
    msg.tx = 174U;
    msg.channel = 124U;
    msg.timer = 51044U;

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
    msg.setTimeStamp(0.535554380553);
    msg.setSource(50604U);
    msg.setSourceEntity(216U);
    msg.setDestination(45847U);
    msg.setDestinationEntity(83U);
    msg.tx = 49U;
    msg.channel = 231U;
    msg.timer = 43657U;

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
    msg.setTimeStamp(0.0176568382445);
    msg.setSource(9909U);
    msg.setSourceEntity(151U);
    msg.setDestination(24936U);
    msg.setDestinationEntity(37U);
    msg.tx = 34U;
    msg.channel = 55U;
    msg.timer = 4547U;

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
    msg.setTimeStamp(0.945670824767);
    msg.setSource(59245U);
    msg.setSourceEntity(78U);
    msg.setDestination(57175U);
    msg.setDestinationEntity(104U);
    msg.beacon.assign("AGTVZYWIWGZMRDPNHLCWPXQJLCKYAWRPZLFDFECAXBRGUVKUOETIVXRTFQCZSSTDBDVWXVVLQWYMKAXXEPZIDOLIEKUTRIEKMJHNQCPCKCXABJTIMGNXWHGZNOUSSEHASOFGVBKQULAGREPMLGJDYTHOF");
    msg.lat = 0.954059650303;
    msg.lon = 0.4035264633;
    msg.depth = 0.829232957879;
    msg.query_channel = 161U;
    msg.reply_channel = 210U;
    msg.transponder_delay = 106U;

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
    msg.setTimeStamp(0.764990742438);
    msg.setSource(46952U);
    msg.setSourceEntity(243U);
    msg.setDestination(27084U);
    msg.setDestinationEntity(84U);
    msg.beacon.assign("IJHSXHUQZXXUJWROWGCZULQDLXLMKHMWLAKIZLBCESWGHZDAKTYKSPLDLCCDFUPGMGISHFYOBJPQPSPCSEPIOEARESIMTVGJDXXJZHJOZYNEHITURWHFVFVWPUTBBBRHOCDYKSRCJBGKTYYWPXDNVAKFWNFQOOOXCKMZCBTLIEFUTHVFANIQJQPRMEBNWYGRSUEKTNQECAQYBZXARQVDNDVNMPA");
    msg.lat = 0.176714378426;
    msg.lon = 0.871453620656;
    msg.depth = 0.583485573476;
    msg.query_channel = 70U;
    msg.reply_channel = 31U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.185617147703);
    msg.setSource(52145U);
    msg.setSourceEntity(191U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(95U);
    msg.beacon.assign("GQDVHPGRHKHIKHXPOJMUHDFVWEENVGLZIERBTCNETHNVKLBCEYDQWLOU");
    msg.lat = 0.838710145926;
    msg.lon = 0.182843685708;
    msg.depth = 0.517781766744;
    msg.query_channel = 5U;
    msg.reply_channel = 247U;
    msg.transponder_delay = 50U;

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
    msg.setTimeStamp(0.203075794995);
    msg.setSource(56167U);
    msg.setSourceEntity(251U);
    msg.setDestination(56214U);
    msg.setDestinationEntity(178U);
    msg.op = 216U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WLNQHSHWAGLTFEAHPJYAJAITUAEYOUFEOSCBMBKELVDNHPQZXCQMTFZXYEZBWBLRAPDRONAXKFQRLDAJWQPZSKDPXWFBNUCCGIJXOGAPSLOPMGYQCKGJTKRHMXQJZVYWJDRUJZXULFEQIVNGDRFZXTFWMQUHUUHSMIJGSKCTXZSMTPBOWVCNRGUVBRTPQUYDLYMTZGIBINBHNIDSYLJZYSXIVVIKEKHENKOORKBNCC");
    tmp_msg_0.lat = 0.0382722538364;
    tmp_msg_0.lon = 0.961613070232;
    tmp_msg_0.depth = 0.0805057077262;
    tmp_msg_0.query_channel = 136U;
    tmp_msg_0.reply_channel = 199U;
    tmp_msg_0.transponder_delay = 117U;
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
    msg.setTimeStamp(0.0253411557654);
    msg.setSource(1153U);
    msg.setSourceEntity(137U);
    msg.setDestination(28522U);
    msg.setDestinationEntity(228U);
    msg.op = 125U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WDXMNPOEMAHAJUGQJFAZOHLQSIBTDWRRPLLRVQDIGYGXYQZFZG");
    tmp_msg_0.lat = 0.573131253057;
    tmp_msg_0.lon = 0.421707526172;
    tmp_msg_0.depth = 0.635815291987;
    tmp_msg_0.query_channel = 180U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 7U;
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
    msg.setTimeStamp(0.822685614805);
    msg.setSource(3076U);
    msg.setSourceEntity(177U);
    msg.setDestination(28979U);
    msg.setDestinationEntity(42U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.175344174604);
    msg.setSource(28166U);
    msg.setSourceEntity(2U);
    msg.setDestination(17126U);
    msg.setDestinationEntity(40U);
    msg.address = 154U;

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
    msg.setTimeStamp(0.302095928475);
    msg.setSource(26579U);
    msg.setSourceEntity(64U);
    msg.setDestination(53282U);
    msg.setDestinationEntity(44U);
    msg.address = 107U;

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
    msg.setTimeStamp(0.16610467104);
    msg.setSource(46027U);
    msg.setSourceEntity(67U);
    msg.setDestination(10131U);
    msg.setDestinationEntity(170U);
    msg.address = 128U;

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
    msg.setTimeStamp(0.162438938623);
    msg.setSource(7482U);
    msg.setSourceEntity(182U);
    msg.setDestination(49679U);
    msg.setDestinationEntity(20U);
    msg.address = 140U;
    msg.status = 124U;
    msg.range = 0.416516912899;

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
    msg.setTimeStamp(0.133354796859);
    msg.setSource(17114U);
    msg.setSourceEntity(160U);
    msg.setDestination(59819U);
    msg.setDestinationEntity(53U);
    msg.address = 249U;
    msg.status = 33U;
    msg.range = 0.941669172913;

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
    msg.setTimeStamp(0.537603775379);
    msg.setSource(39504U);
    msg.setSourceEntity(209U);
    msg.setDestination(44947U);
    msg.setDestinationEntity(227U);
    msg.address = 151U;
    msg.status = 175U;
    msg.range = 0.649587023686;

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
    msg.setTimeStamp(0.0285124747174);
    msg.setSource(27765U);
    msg.setSourceEntity(229U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(166U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 56996U;
    tmp_msg_0.lat = 0.114530325475;
    tmp_msg_0.lon = 0.654183280333;
    tmp_msg_0.z = 0.79377121422;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.772545105637;
    tmp_msg_0.speed_units = 191U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.598512398943;
    tmp_tmp_msg_0_0.y = 0.310409858098;
    tmp_tmp_msg_0_0.z = 0.0402931665366;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UJVFUFCRYQAGJPYPANNOSRUACVBOIWYUQTTKVOCGMWQSFUCECZFBIMJWGXBSQNIIJZIXVGFBKQLEYWXHKDWPSNMZMZKQYKDHAHVFUYDBETPGXRTDAJCBCFYCLLGSEQZ");
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
    msg.setTimeStamp(0.483554524738);
    msg.setSource(38727U);
    msg.setSourceEntity(231U);
    msg.setDestination(11069U);
    msg.setDestinationEntity(199U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 51U;
    tmp_msg_0.eta = 7082U;
    tmp_msg_0.info.assign("FDCZOMTYRGCGSPYKJEMJHFCORJWTNADJLHHWZYUGUVYCFBMUCLTLQKTOXDPJHBECWAUSCHHZWJRMVXGNAONJYXZHQZOAEDD");
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
    msg.setTimeStamp(0.190314236075);
    msg.setSource(11582U);
    msg.setSourceEntity(67U);
    msg.setDestination(33664U);
    msg.setDestinationEntity(214U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.796744447539;
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
    msg.setTimeStamp(0.417203821126);
    msg.setSource(57628U);
    msg.setSourceEntity(73U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(135U);
    msg.enable = 220U;

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
    msg.setTimeStamp(0.0951622015987);
    msg.setSource(60521U);
    msg.setSourceEntity(232U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(236U);
    msg.enable = 52U;

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
    msg.setTimeStamp(0.381866316113);
    msg.setSource(41802U);
    msg.setSourceEntity(93U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(159U);
    msg.enable = 90U;

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
    msg.setTimeStamp(0.503334669239);
    msg.setSource(4480U);
    msg.setSourceEntity(166U);
    msg.setDestination(52241U);
    msg.setDestinationEntity(47U);
    msg.summary = 144U;
    msg.level = 148U;

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
    msg.setTimeStamp(0.202292522561);
    msg.setSource(55647U);
    msg.setSourceEntity(249U);
    msg.setDestination(38668U);
    msg.setDestinationEntity(139U);
    msg.summary = 4U;
    msg.level = 91U;

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
    msg.setTimeStamp(0.47633502685);
    msg.setSource(15266U);
    msg.setSourceEntity(164U);
    msg.setDestination(29064U);
    msg.setDestinationEntity(70U);
    msg.summary = 219U;
    msg.level = 66U;

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
    msg.setTimeStamp(0.146234829827);
    msg.setSource(44543U);
    msg.setSourceEntity(250U);
    msg.setDestination(31359U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.411808823627);
    msg.setSource(19053U);
    msg.setSourceEntity(104U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.890281401486);
    msg.setSource(52804U);
    msg.setSourceEntity(89U);
    msg.setDestination(8251U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.827834290631);
    msg.setSource(23709U);
    msg.setSourceEntity(118U);
    msg.setDestination(17846U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.293326459148);
    msg.setSource(51352U);
    msg.setSourceEntity(70U);
    msg.setDestination(15634U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.497233967153);
    msg.setSource(52511U);
    msg.setSourceEntity(177U);
    msg.setDestination(59798U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.681895243621);
    msg.setSource(22404U);
    msg.setSourceEntity(156U);
    msg.setDestination(13672U);
    msg.setDestinationEntity(85U);
    msg.op = 69U;
    msg.system.assign("IQERQHIUCPRDAYGPJCWMVOTWCFFDVMUGFCFOEKJUKQNXKYPSROHVJTBZYSAHEDNKEYQXMGQDYAZPXVFXLNXXBPLMOBLVEPGBRUMFVMNLJTMKGCNTVBSGYXAHVQNHUDDLKOLJQAISEYSXFHTTKPUWKHPMIFJLNFAWWRUWIPHIRBEAAOHAOLZQZUYBILE");
    msg.range = 0.406216604495;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.219574190796);
    msg.setSource(1046U);
    msg.setSourceEntity(195U);
    msg.setDestination(4437U);
    msg.setDestinationEntity(120U);
    msg.op = 52U;
    msg.system.assign("WLYHKDNVPRPIEFJOAWBIOTSUXGOHCXTQBOSOTSCSPEARHBXJACQZGCAJIIFXWJOIRDXRJUMYQKYJEURDUPTJVMEKVZUUNKNQGDOEGZSMWAVEGCPJBUKQXWPAHFFIQNMWQLLYEKGNTICKSBDPFBAYFMYNVHKVXXHYIPHV");
    msg.range = 0.24981071797;
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.282785217825);
    msg.setSource(46607U);
    msg.setSourceEntity(121U);
    msg.setDestination(14720U);
    msg.setDestinationEntity(15U);
    msg.op = 225U;
    msg.system.assign("JXBOLETEYSMMGFGNPKLEOPLBRIJOJZPNTYBJQUIEFCPLXORWTISSILCRKAHNXWBEXDHHULAMUQDQBACOKPXSUWWWTRKQOVAFSZITKODYCWVOVVIHFQFIVPNJAQTHGCBZXUKWRJZSBIZRIACMUYQMBYRHHESEDGJGYVPYRPMETVNWMWZJZCAYOFHKDXQULUMLXZUBFYUHMGOZNKAGRSHEVJIPNJFZPTETFQGCLGDSCACDDF");
    msg.range = 0.0793363953976;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.45554222399;
    tmp_msg_0.x = 0.0930340168962;
    tmp_msg_0.y = 0.258121300824;
    tmp_msg_0.z = 0.512762008864;
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
    msg.setTimeStamp(0.607894242002);
    msg.setSource(35884U);
    msg.setSourceEntity(221U);
    msg.setDestination(42155U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.930831781891);
    msg.setSource(41195U);
    msg.setSourceEntity(112U);
    msg.setDestination(63129U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.786708346216);
    msg.setSource(31554U);
    msg.setSourceEntity(205U);
    msg.setDestination(14611U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.842315942834);
    msg.setSource(11215U);
    msg.setSourceEntity(214U);
    msg.setDestination(20954U);
    msg.setDestinationEntity(140U);
    msg.list.assign("XBNCYXHYJIOOZTNASJZRWLTDMJGOSPCGZMSJXNKBDPIIUVFSPHDQQAZEHGXLWZBMJHTPMAMPQNKQMJWWGEOEDZBDNTG");

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
    msg.setTimeStamp(0.566698129335);
    msg.setSource(60927U);
    msg.setSourceEntity(161U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(103U);
    msg.list.assign("AVSQMYYQWRSYHKZPHNONGFOFRNNQJPVKIKIHFBBZUDTUAIOAIRTJIZVNTPEAGPVJIIRWHSZLMZNCTGXSHBVGFFUKOBTDJADDESQQKBDCUUUBICSKJNFOUBXGUPXCARKLEDKKHMYCKYMIHVYNLRBZUVYEWTRFOFATQUQWCLJMYGWPEZCPHQFXJRGEDPWXIJMGOEQOWSPMJLSXAVAEXTWXMFVBLHMRGWLYOSTALRZYMQDGEEOTZPVJLNZBCHLXS");

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
    msg.setTimeStamp(0.994866182729);
    msg.setSource(54753U);
    msg.setSourceEntity(118U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(111U);
    msg.list.assign("SMJIVNAHCLZFQBCWAIWJHCTREEJDQSUOSCWHDXJYYGI");

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
    msg.setTimeStamp(0.438570917873);
    msg.setSource(40346U);
    msg.setSourceEntity(70U);
    msg.setDestination(38866U);
    msg.setDestinationEntity(95U);
    msg.value = -30707;

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
    msg.setTimeStamp(0.629795545652);
    msg.setSource(64662U);
    msg.setSourceEntity(35U);
    msg.setDestination(45722U);
    msg.setDestinationEntity(152U);
    msg.value = -7168;

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
    msg.setTimeStamp(0.648741754212);
    msg.setSource(62351U);
    msg.setSourceEntity(34U);
    msg.setDestination(53329U);
    msg.setDestinationEntity(195U);
    msg.value = -15468;

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
    msg.setTimeStamp(0.346274102694);
    msg.setSource(56473U);
    msg.setSourceEntity(205U);
    msg.setDestination(16768U);
    msg.setDestinationEntity(249U);
    msg.value = 0.436010643603;

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
    msg.setTimeStamp(0.183273957672);
    msg.setSource(14756U);
    msg.setSourceEntity(127U);
    msg.setDestination(32672U);
    msg.setDestinationEntity(110U);
    msg.value = 0.560240616238;

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
    msg.setTimeStamp(0.714717757192);
    msg.setSource(65004U);
    msg.setSourceEntity(29U);
    msg.setDestination(52865U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0490113607543;

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
    msg.setTimeStamp(0.78876315305);
    msg.setSource(6809U);
    msg.setSourceEntity(80U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(37U);
    msg.value = 0.939800810021;

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
    msg.setTimeStamp(0.062351500761);
    msg.setSource(31629U);
    msg.setSourceEntity(79U);
    msg.setDestination(1864U);
    msg.setDestinationEntity(108U);
    msg.value = 0.433819109431;

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
    msg.setTimeStamp(0.748899111422);
    msg.setSource(12249U);
    msg.setSourceEntity(45U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(177U);
    msg.value = 0.650924872507;

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
    msg.setTimeStamp(0.906972708087);
    msg.setSource(22034U);
    msg.setSourceEntity(77U);
    msg.setDestination(46646U);
    msg.setDestinationEntity(126U);
    msg.validity = 1732U;
    msg.type = 161U;
    msg.utc_year = 48377U;
    msg.utc_month = 17U;
    msg.utc_day = 200U;
    msg.utc_time = 0.103909357376;
    msg.lat = 0.63778000433;
    msg.lon = 0.129502412887;
    msg.height = 0.178438573845;
    msg.satellites = 140U;
    msg.cog = 0.663522870549;
    msg.sog = 0.10989953494;
    msg.hdop = 0.484036346628;
    msg.vdop = 0.517896197718;
    msg.hacc = 0.954207788924;
    msg.vacc = 0.102916128617;

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
    msg.setTimeStamp(0.996091231738);
    msg.setSource(2420U);
    msg.setSourceEntity(208U);
    msg.setDestination(60385U);
    msg.setDestinationEntity(178U);
    msg.validity = 48935U;
    msg.type = 233U;
    msg.utc_year = 25099U;
    msg.utc_month = 27U;
    msg.utc_day = 40U;
    msg.utc_time = 0.0957186361;
    msg.lat = 0.0196607878583;
    msg.lon = 0.237480373449;
    msg.height = 0.476901103097;
    msg.satellites = 162U;
    msg.cog = 0.229550151014;
    msg.sog = 0.682133173117;
    msg.hdop = 0.798711562105;
    msg.vdop = 0.350671931446;
    msg.hacc = 0.306382968306;
    msg.vacc = 0.554085406206;

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
    msg.setTimeStamp(0.855825154705);
    msg.setSource(40647U);
    msg.setSourceEntity(239U);
    msg.setDestination(26993U);
    msg.setDestinationEntity(178U);
    msg.validity = 65316U;
    msg.type = 214U;
    msg.utc_year = 17977U;
    msg.utc_month = 187U;
    msg.utc_day = 164U;
    msg.utc_time = 0.0596220049058;
    msg.lat = 0.688104984268;
    msg.lon = 0.827229824697;
    msg.height = 0.485781444495;
    msg.satellites = 121U;
    msg.cog = 0.943656819981;
    msg.sog = 0.10637972272;
    msg.hdop = 0.979861963708;
    msg.vdop = 0.349252254245;
    msg.hacc = 0.245082730122;
    msg.vacc = 0.857678797259;

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
    msg.setTimeStamp(0.54379668471);
    msg.setSource(51624U);
    msg.setSourceEntity(240U);
    msg.setDestination(22992U);
    msg.setDestinationEntity(80U);
    msg.time = 0.00088075293368;
    msg.phi = 0.514317127856;
    msg.theta = 0.461906356892;
    msg.psi = 0.0804374546948;
    msg.psi_magnetic = 0.526716497627;

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
    msg.setTimeStamp(0.89023199628);
    msg.setSource(26696U);
    msg.setSourceEntity(119U);
    msg.setDestination(14021U);
    msg.setDestinationEntity(3U);
    msg.time = 0.27627343073;
    msg.phi = 0.419370965763;
    msg.theta = 0.110579202674;
    msg.psi = 0.652776488792;
    msg.psi_magnetic = 0.351550611493;

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
    msg.setTimeStamp(0.689261359507);
    msg.setSource(55934U);
    msg.setSourceEntity(242U);
    msg.setDestination(3765U);
    msg.setDestinationEntity(76U);
    msg.time = 0.166825544259;
    msg.phi = 0.958119617818;
    msg.theta = 0.130678368364;
    msg.psi = 0.169605051223;
    msg.psi_magnetic = 0.333145654106;

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
    msg.setTimeStamp(0.177106488292);
    msg.setSource(3168U);
    msg.setSourceEntity(219U);
    msg.setDestination(55895U);
    msg.setDestinationEntity(17U);
    msg.time = 0.492877017732;
    msg.x = 0.82152753118;
    msg.y = 0.985733827664;
    msg.z = 0.302059506589;
    msg.timestep = 0.946556533894;

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
    msg.setTimeStamp(0.730711808297);
    msg.setSource(40463U);
    msg.setSourceEntity(7U);
    msg.setDestination(16687U);
    msg.setDestinationEntity(184U);
    msg.time = 0.0102228226612;
    msg.x = 0.103534325752;
    msg.y = 0.300996232452;
    msg.z = 0.423359554277;
    msg.timestep = 0.205913500171;

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
    msg.setTimeStamp(0.724731165456);
    msg.setSource(20076U);
    msg.setSourceEntity(254U);
    msg.setDestination(15952U);
    msg.setDestinationEntity(48U);
    msg.time = 0.21633923013;
    msg.x = 0.912864087695;
    msg.y = 0.797276565858;
    msg.z = 0.475748377123;
    msg.timestep = 0.465055362874;

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
    msg.setTimeStamp(0.235009343079);
    msg.setSource(43343U);
    msg.setSourceEntity(254U);
    msg.setDestination(52408U);
    msg.setDestinationEntity(124U);
    msg.time = 0.668840492499;
    msg.x = 0.758120507944;
    msg.y = 0.827942120344;
    msg.z = 0.160686689368;

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
    msg.setTimeStamp(0.852549022193);
    msg.setSource(38861U);
    msg.setSourceEntity(69U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(82U);
    msg.time = 0.172654011916;
    msg.x = 0.991326132638;
    msg.y = 0.328576249236;
    msg.z = 0.961299036166;

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
    msg.setTimeStamp(0.543435165411);
    msg.setSource(34448U);
    msg.setSourceEntity(35U);
    msg.setDestination(50429U);
    msg.setDestinationEntity(219U);
    msg.time = 0.53686938622;
    msg.x = 0.81877357392;
    msg.y = 0.565017292492;
    msg.z = 0.208013453246;

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
    msg.setTimeStamp(0.95150029854);
    msg.setSource(26610U);
    msg.setSourceEntity(243U);
    msg.setDestination(43756U);
    msg.setDestinationEntity(242U);
    msg.time = 0.881965345712;
    msg.x = 0.0542455211492;
    msg.y = 0.619638516299;
    msg.z = 0.661417813793;

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
    msg.setTimeStamp(0.969799215722);
    msg.setSource(60121U);
    msg.setSourceEntity(76U);
    msg.setDestination(20677U);
    msg.setDestinationEntity(48U);
    msg.time = 0.213279456573;
    msg.x = 0.041389998294;
    msg.y = 0.670343598713;
    msg.z = 0.432312792258;

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
    msg.setTimeStamp(0.975200270528);
    msg.setSource(48101U);
    msg.setSourceEntity(78U);
    msg.setDestination(34503U);
    msg.setDestinationEntity(197U);
    msg.time = 0.299415582478;
    msg.x = 0.978820143857;
    msg.y = 0.0944475421176;
    msg.z = 0.562466674806;

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
    msg.setTimeStamp(0.820869242059);
    msg.setSource(36927U);
    msg.setSourceEntity(25U);
    msg.setDestination(46727U);
    msg.setDestinationEntity(92U);
    msg.time = 0.756681906447;
    msg.x = 0.557207828402;
    msg.y = 0.185721979868;
    msg.z = 0.359380620946;

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
    msg.setTimeStamp(0.591788214286);
    msg.setSource(3786U);
    msg.setSourceEntity(113U);
    msg.setDestination(20037U);
    msg.setDestinationEntity(220U);
    msg.time = 0.716975995464;
    msg.x = 0.253236528921;
    msg.y = 0.782761168931;
    msg.z = 0.888277562388;

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
    msg.setTimeStamp(0.464992039125);
    msg.setSource(2984U);
    msg.setSourceEntity(8U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(39U);
    msg.time = 0.755949579093;
    msg.x = 0.193599393046;
    msg.y = 0.653570075101;
    msg.z = 0.86517337211;

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
    msg.setTimeStamp(0.602275017484);
    msg.setSource(3500U);
    msg.setSourceEntity(253U);
    msg.setDestination(40254U);
    msg.setDestinationEntity(206U);
    msg.validity = 190U;
    msg.x = 0.678674850106;
    msg.y = 0.782181875764;
    msg.z = 0.989986447472;

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
    msg.setTimeStamp(0.565379817422);
    msg.setSource(58618U);
    msg.setSourceEntity(13U);
    msg.setDestination(24632U);
    msg.setDestinationEntity(245U);
    msg.validity = 202U;
    msg.x = 0.33955912226;
    msg.y = 0.463743055257;
    msg.z = 0.500723406323;

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
    msg.setTimeStamp(0.614257866841);
    msg.setSource(20903U);
    msg.setSourceEntity(9U);
    msg.setDestination(40357U);
    msg.setDestinationEntity(5U);
    msg.validity = 221U;
    msg.x = 0.388372792908;
    msg.y = 0.503459632072;
    msg.z = 0.426356550571;

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
    msg.setTimeStamp(0.361939005708);
    msg.setSource(11798U);
    msg.setSourceEntity(137U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(121U);
    msg.validity = 28U;
    msg.x = 0.672909083541;
    msg.y = 0.439373070517;
    msg.z = 0.275348338272;

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
    msg.setTimeStamp(0.594333166003);
    msg.setSource(9498U);
    msg.setSourceEntity(148U);
    msg.setDestination(36534U);
    msg.setDestinationEntity(233U);
    msg.validity = 38U;
    msg.x = 0.466145836589;
    msg.y = 0.998992463114;
    msg.z = 0.538699693686;

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
    msg.setTimeStamp(0.73015790025);
    msg.setSource(48589U);
    msg.setSourceEntity(220U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(240U);
    msg.validity = 251U;
    msg.x = 0.498837376119;
    msg.y = 0.423701620415;
    msg.z = 0.793296067111;

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
    msg.setTimeStamp(0.477295689558);
    msg.setSource(55208U);
    msg.setSourceEntity(171U);
    msg.setDestination(46337U);
    msg.setDestinationEntity(22U);
    msg.time = 0.732220380004;
    msg.x = 0.6094081309;
    msg.y = 0.619859389661;
    msg.z = 0.728789126153;

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
    msg.setTimeStamp(0.663335173038);
    msg.setSource(61585U);
    msg.setSourceEntity(111U);
    msg.setDestination(22270U);
    msg.setDestinationEntity(237U);
    msg.time = 0.322245534747;
    msg.x = 0.664188712325;
    msg.y = 0.932919100557;
    msg.z = 0.190233749988;

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
    msg.setTimeStamp(0.370998687522);
    msg.setSource(16480U);
    msg.setSourceEntity(149U);
    msg.setDestination(17263U);
    msg.setDestinationEntity(95U);
    msg.time = 0.944225312496;
    msg.x = 0.463660544928;
    msg.y = 0.807676232681;
    msg.z = 0.637293453431;

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
    msg.setTimeStamp(0.146907812485);
    msg.setSource(31394U);
    msg.setSourceEntity(19U);
    msg.setDestination(2209U);
    msg.setDestinationEntity(26U);
    msg.validity = 78U;
    msg.value = 0.385815850666;

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
    msg.setTimeStamp(0.772418675432);
    msg.setSource(25148U);
    msg.setSourceEntity(242U);
    msg.setDestination(60490U);
    msg.setDestinationEntity(140U);
    msg.validity = 10U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0576656794093;
    tmp_msg_0.y = 0.249311600079;
    tmp_msg_0.z = 0.980625475092;
    tmp_msg_0.phi = 0.738152783301;
    tmp_msg_0.theta = 0.920168182767;
    tmp_msg_0.psi = 0.750224744767;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.169246077707;
    tmp_msg_1.beam_height = 0.274914598876;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.138560896946;

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
    msg.setTimeStamp(0.593198119979);
    msg.setSource(43796U);
    msg.setSourceEntity(132U);
    msg.setDestination(58599U);
    msg.setDestinationEntity(39U);
    msg.validity = 140U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.499520852809;
    tmp_msg_0.y = 0.754664938474;
    tmp_msg_0.z = 0.919102866569;
    tmp_msg_0.phi = 0.185953947155;
    tmp_msg_0.theta = 0.403976532523;
    tmp_msg_0.psi = 0.608984026813;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0757649047521;

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
    msg.setTimeStamp(0.141232970566);
    msg.setSource(44740U);
    msg.setSourceEntity(145U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(150U);
    msg.value = 0.419942947595;

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
    msg.setTimeStamp(0.774698100083);
    msg.setSource(16290U);
    msg.setSourceEntity(180U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(16U);
    msg.value = 0.794122725938;

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
    msg.setTimeStamp(0.735479865157);
    msg.setSource(22377U);
    msg.setSourceEntity(159U);
    msg.setDestination(9715U);
    msg.setDestinationEntity(156U);
    msg.value = 0.185443076564;

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
    msg.setTimeStamp(0.525600103177);
    msg.setSource(34959U);
    msg.setSourceEntity(61U);
    msg.setDestination(58593U);
    msg.setDestinationEntity(75U);
    msg.value = 0.272262354603;

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
    msg.setTimeStamp(0.265519137328);
    msg.setSource(22828U);
    msg.setSourceEntity(164U);
    msg.setDestination(42010U);
    msg.setDestinationEntity(72U);
    msg.value = 0.649411533058;

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
    msg.setTimeStamp(0.614171790221);
    msg.setSource(32584U);
    msg.setSourceEntity(99U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(191U);
    msg.value = 0.898321639521;

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
    msg.setTimeStamp(0.54533049543);
    msg.setSource(3024U);
    msg.setSourceEntity(244U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(246U);
    msg.value = 0.763993291596;

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
    msg.setTimeStamp(0.649444113603);
    msg.setSource(51179U);
    msg.setSourceEntity(54U);
    msg.setDestination(30296U);
    msg.setDestinationEntity(227U);
    msg.value = 0.856111735694;

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
    msg.setTimeStamp(0.695749444072);
    msg.setSource(12758U);
    msg.setSourceEntity(127U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(176U);
    msg.value = 0.859698228228;

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
    msg.setTimeStamp(0.19844016866);
    msg.setSource(38213U);
    msg.setSourceEntity(86U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(67U);
    msg.value = 0.840636942598;

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
    msg.setTimeStamp(0.250913862317);
    msg.setSource(56669U);
    msg.setSourceEntity(105U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(78U);
    msg.value = 0.119922667848;

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
    msg.setTimeStamp(0.209687480782);
    msg.setSource(55688U);
    msg.setSourceEntity(22U);
    msg.setDestination(33571U);
    msg.setDestinationEntity(34U);
    msg.value = 0.573800205724;

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
    msg.setTimeStamp(0.606858451577);
    msg.setSource(6770U);
    msg.setSourceEntity(221U);
    msg.setDestination(19085U);
    msg.setDestinationEntity(212U);
    msg.value = 0.23109617169;

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
    msg.setTimeStamp(0.989587756681);
    msg.setSource(41749U);
    msg.setSourceEntity(21U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(111U);
    msg.value = 0.694953938614;

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
    msg.setTimeStamp(0.415250416781);
    msg.setSource(28845U);
    msg.setSourceEntity(212U);
    msg.setDestination(5313U);
    msg.setDestinationEntity(248U);
    msg.value = 0.726908970476;

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
    msg.setTimeStamp(0.987261819046);
    msg.setSource(809U);
    msg.setSourceEntity(114U);
    msg.setDestination(29625U);
    msg.setDestinationEntity(135U);
    msg.value = 0.391098103045;

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
    msg.setTimeStamp(0.359886500566);
    msg.setSource(57204U);
    msg.setSourceEntity(89U);
    msg.setDestination(37708U);
    msg.setDestinationEntity(100U);
    msg.value = 0.441995757008;

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
    msg.setTimeStamp(0.786416452669);
    msg.setSource(3480U);
    msg.setSourceEntity(11U);
    msg.setDestination(17208U);
    msg.setDestinationEntity(84U);
    msg.value = 0.799969417842;

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
    msg.setTimeStamp(0.0351368980703);
    msg.setSource(24802U);
    msg.setSourceEntity(242U);
    msg.setDestination(3513U);
    msg.setDestinationEntity(86U);
    msg.value = 0.818138655364;

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
    msg.setTimeStamp(0.11133830915);
    msg.setSource(12139U);
    msg.setSourceEntity(128U);
    msg.setDestination(25U);
    msg.setDestinationEntity(186U);
    msg.value = 0.123260712139;

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
    msg.setTimeStamp(0.544335654743);
    msg.setSource(64635U);
    msg.setSourceEntity(124U);
    msg.setDestination(51079U);
    msg.setDestinationEntity(169U);
    msg.value = 0.445632003264;

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
    msg.setTimeStamp(0.775897951117);
    msg.setSource(17805U);
    msg.setSourceEntity(141U);
    msg.setDestination(40879U);
    msg.setDestinationEntity(75U);
    msg.value = 0.504119989369;

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
    msg.setTimeStamp(0.373181057347);
    msg.setSource(39184U);
    msg.setSourceEntity(216U);
    msg.setDestination(59264U);
    msg.setDestinationEntity(154U);
    msg.value = 0.862993945537;

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
    msg.setTimeStamp(0.674649132523);
    msg.setSource(23481U);
    msg.setSourceEntity(137U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(98U);
    msg.value = 0.128121568009;

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
    msg.setTimeStamp(0.501347249012);
    msg.setSource(62191U);
    msg.setSourceEntity(152U);
    msg.setDestination(59761U);
    msg.setDestinationEntity(132U);
    msg.direction = 0.0901122180201;
    msg.speed = 0.558998046073;
    msg.turbulence = 0.143730050207;

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
    msg.setTimeStamp(0.0178184733147);
    msg.setSource(10918U);
    msg.setSourceEntity(38U);
    msg.setDestination(33320U);
    msg.setDestinationEntity(117U);
    msg.direction = 0.722754131426;
    msg.speed = 0.861901748112;
    msg.turbulence = 0.563582933492;

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
    msg.setTimeStamp(0.116896946023);
    msg.setSource(9968U);
    msg.setSourceEntity(185U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(230U);
    msg.direction = 0.921482740101;
    msg.speed = 0.190203585292;
    msg.turbulence = 0.302827240195;

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
    msg.setTimeStamp(0.399040413618);
    msg.setSource(9209U);
    msg.setSourceEntity(66U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(44U);
    msg.value = 0.801447138095;

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
    msg.setTimeStamp(0.56267804596);
    msg.setSource(19565U);
    msg.setSourceEntity(124U);
    msg.setDestination(19712U);
    msg.setDestinationEntity(238U);
    msg.value = 0.91788196261;

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
    msg.setTimeStamp(0.265419250023);
    msg.setSource(17959U);
    msg.setSourceEntity(79U);
    msg.setDestination(1849U);
    msg.setDestinationEntity(127U);
    msg.value = 0.533917066907;

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
    msg.setTimeStamp(0.803926728583);
    msg.setSource(60087U);
    msg.setSourceEntity(124U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(91U);
    msg.value.assign("VKQOSFBLENKLAFWNTUKMDODMLCCYRIGXAOIBXRVPSQEXNIJRWQNAPYVFHAUTBUTTBRMCYNXFWHKXOJEZPPNYNLDYGIWTVMEHOCBMSAIICHZTDZDLUSHOSPJRLOEUEXFAPTNVHBYKJGABEOSBWXZARLMASZLEQKJCZDNSHPYJFQDGMWBHCOIHZRMUGKRFXKLLEJFCXFZTUJMRUG");

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
    msg.setTimeStamp(0.780242004794);
    msg.setSource(62605U);
    msg.setSourceEntity(31U);
    msg.setDestination(42617U);
    msg.setDestinationEntity(49U);
    msg.value.assign("KBADUHBLZIVIZUKFHPETWGNJCYGQHZQMXYJETVQYUOPAIRQJURRCHWKMZMIYSXHFGJBXGONLWCRRETQWYBFSDLFXTTJNDSWQRBWNNDVITESWXDACRNIWEPGVLFXAMHEJFKIUQZOLPHLFNBPTORYSDAQBUUCBVZUOLKMODEYFXRXILVNYCVOLPFAOPKJYOPSW");

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
    msg.setTimeStamp(0.805132677295);
    msg.setSource(12960U);
    msg.setSourceEntity(90U);
    msg.setDestination(61792U);
    msg.setDestinationEntity(62U);
    msg.value.assign("KUFFORRPQOSWNQ");

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
    msg.setTimeStamp(0.790666301677);
    msg.setSource(42089U);
    msg.setSourceEntity(100U);
    msg.setDestination(56649U);
    msg.setDestinationEntity(34U);
    const char tmp_msg_0[] = {-62, -112, -126, 66, 20, -105, 67, 39, 84, -122, 23, -87, -106, 78, -20, 120, 104, 22, -43, 60, 123, -66, 48, 30, 78, -39, -115, 98, -102, -43, 91, -61, 68, 20, -118, -45, -27, -36, -23, -4, 5, 12, 6, 7, 18, -111, -25, 11, 73, 74, -83, -120, 42, 65, -3, -4, 81, 5, 37, -109, -37, 48};
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
    msg.setTimeStamp(0.762474280365);
    msg.setSource(37763U);
    msg.setSourceEntity(25U);
    msg.setDestination(46825U);
    msg.setDestinationEntity(12U);
    const char tmp_msg_0[] = {41, 17, 71, 12, 95, 68, 107, 100, 85, -49, -111, 44, 96, -64, -45, -123, 42, 118, -107, -88, 114, -89, 19, 97, 7, -60, 60, -76, -95, -105, -89, 112, -41, 103, -48, -28, 67, -91, -60, 86, -17, -92, 19, -110, 64, 88, 71, -23, 68, 47, 13, -116, 43, 74, 73, 39, 47, -128, 21, -14, 124, 19, 89, -24, 46, 125, 74, 21, -111, 37, -95, -25, 57, 7, -80, -21, -81, 61, -45, -116, -29, 17, 102, -78, 91, -115, -53, 10, 102, -127, -65, -42, 50, 31, -6, 21, 4, -42, 65, 27, 12, -82, 17, -78, -113, 45, 99, -82, -54, -21, 40, -84, -94, 82, -37, -27, -66, 30, 74, -55, 70, 74, 119, -17, 70, 3, 30, 78, -31, 6, -33, 91, 97, 52, -22, -73, -46, -66, 43, -105, 68, -14, -1, -6, -58, -11, 61, -90, 62, -61, -82, -79, 3, 104, 15, -103, -47, 98, 26, 29};
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
    msg.setTimeStamp(0.771926038);
    msg.setSource(37431U);
    msg.setSourceEntity(221U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(38U);
    const char tmp_msg_0[] = {80, 119, -65, -111, -42, 119, -2, 64, -79, -88, -83, 40, -110, -122, 11, 105, 103, 16, -6, -84, -2, 76, 107, -67, 53, -23, 21, 98, -109, 25, 45, -40, 5, 27, 68, 17, 20, 77, 77, -110, 107, -104, 39, -108, 21, 37, -72, -27, -69, -24, -124, 87, -46, -95, -12, 123, 92, 66, -119, 76, 103, 70, 75, 3, -71, -24, -57, 49, -95, 2, 84, 85, -108, -18, 20, 90, 119, 49, 8, -4, 8, 12, -99, 64, 23, -37, 96, 89, 1, -111, -116, 98, -60, -109, -51, -33, 99, 6, -72, -84, 60, -121, 83, -80, 105, 26, 22, 30, -44, -46, 73, -58, -88, 23, 103};
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
    msg.setTimeStamp(0.835041793432);
    msg.setSource(26729U);
    msg.setSourceEntity(49U);
    msg.setDestination(2002U);
    msg.setDestinationEntity(146U);
    msg.frequency = 2969833574U;
    msg.min_range = 61381U;
    msg.max_range = 36487U;

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
    msg.setTimeStamp(0.396739398017);
    msg.setSource(45351U);
    msg.setSourceEntity(237U);
    msg.setDestination(40386U);
    msg.setDestinationEntity(74U);
    msg.frequency = 3287128717U;
    msg.min_range = 42619U;
    msg.max_range = 51187U;

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
    msg.setTimeStamp(0.36015130954);
    msg.setSource(17363U);
    msg.setSourceEntity(56U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(127U);
    msg.frequency = 2924437079U;
    msg.min_range = 40822U;
    msg.max_range = 47657U;

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
    msg.setTimeStamp(0.22013946556);
    msg.setSource(60719U);
    msg.setSourceEntity(195U);
    msg.setDestination(43664U);
    msg.setDestinationEntity(168U);
    msg.type = 235U;
    msg.frequency = 3731725542U;
    msg.min_range = 12182U;
    msg.max_range = 28794U;
    msg.bits_per_point = 126U;
    msg.scale_factor = 0.0465191651859;
    const char tmp_msg_0[] = {-102, -62, -116, -85, 57, 71, 48, -115, -90, 111, -56, -128, 98, 12, 27, -46, -21, -30, -73, 111, 61, 48, -63, 76, 106, 46, -67, -28, 25, -85, 43, -120, 122, -119, 120, 106, 6, -70, -14, 49, 16, 98, 23, 5, -28, 61, -52, -20, -125, 70, 44, -52, -36, -105, 17, -100, -78, -72, -105, -101, 53, -20, 57, -96, 43, -109, 94, -18, 12, -32, -8, 99, -55, -67, 51, -42, -113, 31, -124, -89, -17, 34, 125, 56, -83, 72, -12, 119, -101, -98, 15, -11, 50, 58, -44, -79, -104, -33, 70, -52};
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
    msg.setTimeStamp(0.693844695059);
    msg.setSource(11795U);
    msg.setSourceEntity(126U);
    msg.setDestination(26445U);
    msg.setDestinationEntity(203U);
    msg.type = 48U;
    msg.frequency = 1216641966U;
    msg.min_range = 29864U;
    msg.max_range = 33136U;
    msg.bits_per_point = 100U;
    msg.scale_factor = 0.460482077111;
    const char tmp_msg_0[] = {-38, -50, 2, -117, 95, -27, 19, -77, 119, 31, -110, 126, -34, -118, 25, -3, -48, 24, 83, -51, -50, 61, -13, -52, 25, -83, 49, 35, -124, -87, -115, 116, 7, 102, 123, -92, 50, -115, 78, -121, -127, 20, -60, -126, 97, 90, 14, -74, 91, 55, 22, -25, -94, -61, -62, -9, 17, 78, 102, -81, -51, -57, -90, 30, 68, -68, -14, 21, -13, -109, -49, -83, 57, 18, -98, -91, 104, -39, 106, 55, -105, 17, -101, 121, -34, -101, -9, 17, -24, 103, 107, 98, 69, 101, -8, -14, 64, 111, -81, -54, 29, 97, 55, -11, -108, 25, 84, 119, -85, 107, -59, 42, -66, 107, 116, -28, 88, -119, 92, -63, -40, 84, -22, -3, 71, -39, 43, 70, -99, 122, -54, -27, 93, -104, 50, 43, 43, -91, -3, -79, 70, -4, 65, -52, 97, 18, -73, -112, 96, 126, 105, -83, 65, 112, 0, 51};
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
    msg.setTimeStamp(0.982549865919);
    msg.setSource(21240U);
    msg.setSourceEntity(173U);
    msg.setDestination(48412U);
    msg.setDestinationEntity(105U);
    msg.type = 169U;
    msg.frequency = 851774235U;
    msg.min_range = 32931U;
    msg.max_range = 8775U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.0759071850384;
    const char tmp_msg_0[] = {-38, 24, -86, 71, -103, -128, 70, 102, 37, 52, -46, 38, 115, 49, -7, 54, -67, -124, -96, 124, -70, 92, -3, -29, -69, -117, 14, 111, 76, 51, -107, -88, 90, 30, 100, -35, 96, -127, 50, -52, -3, -51, 97, 14, 10, -72, -13, 12, 31, 97, -90, -66, -87, 92, -56, 113, 114, 13, -97, -74, -56, -39, 54, -33, 48, -102, -14, 31, -95, 64, -104, -108, 1, -45, -62, 104, 16, -26, 83, 123, -28, 114, -109, -34, -110, -27, 31, 85, 12, 110, -35, -78, 124, -94, -99, -119, 40, 55, -37, -9, 45, -48, -30, -87, 105, -32, 4, -64};
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
    msg.setTimeStamp(0.666835227621);
    msg.setSource(19111U);
    msg.setSourceEntity(74U);
    msg.setDestination(5482U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.134823108929);
    msg.setSource(25017U);
    msg.setSourceEntity(167U);
    msg.setDestination(6088U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.0350780131352);
    msg.setSource(58103U);
    msg.setSourceEntity(50U);
    msg.setDestination(18219U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.968401626811);
    msg.setSource(54365U);
    msg.setSourceEntity(60U);
    msg.setDestination(21927U);
    msg.setDestinationEntity(242U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.0971879938568);
    msg.setSource(5030U);
    msg.setSourceEntity(173U);
    msg.setDestination(59175U);
    msg.setDestinationEntity(213U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.363209884157);
    msg.setSource(34528U);
    msg.setSourceEntity(225U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(42U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.0808232206687);
    msg.setSource(19072U);
    msg.setSourceEntity(134U);
    msg.setDestination(43643U);
    msg.setDestinationEntity(124U);
    msg.value = 0.811757708012;
    msg.confidence = 0.595148992125;
    msg.opmodes.assign("WUZCSCJVKIENHRGVFPVSMJPXYHBOVKZURXFODQFKQHVFLGUCIUPOXZ");

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
    msg.setTimeStamp(0.781509232758);
    msg.setSource(34151U);
    msg.setSourceEntity(153U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0231811542731;
    msg.confidence = 0.1747553153;
    msg.opmodes.assign("YUYUMJZENPVISVFNUZFWIIOAHZXDFKSDGOYZIQFEUYLKGJWRJYLCT");

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
    msg.setTimeStamp(0.886419654882);
    msg.setSource(43104U);
    msg.setSourceEntity(181U);
    msg.setDestination(49628U);
    msg.setDestinationEntity(233U);
    msg.value = 0.664178878348;
    msg.confidence = 0.388201506343;
    msg.opmodes.assign("YXDCOBCTRXAWSGNSQELOIJHIAITNAOSPBSJBXNUBDFVZDXSTJAJXAUTRXYIRQGYQPJEZZSQKWRGRAJZOCMFTPNDMMNAGDBITPPWEUUFGOQIKXANFENJSYVHBSGKHHCOYCUCCEPUPNKUTKYGEIRZHWOZLIDFKWQKIBLULUPRZDLVBXBKHQVVCPFGEYLOJQJLSDXVBDWFTMQAPKNLSOVHFROUGQYKWCJRIVZXLLMMMFZWECZEHGHYDEWMRM");

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
    msg.setTimeStamp(0.221965084785);
    msg.setSource(62605U);
    msg.setSourceEntity(87U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(184U);
    msg.itow = 3762417444U;
    msg.lat = 0.166612778624;
    msg.lon = 0.340871339217;
    msg.height_ell = 0.330606207764;
    msg.height_sea = 0.361162489802;
    msg.hacc = 0.553319075012;
    msg.vacc = 0.292383890076;
    msg.vel_n = 0.246368819709;
    msg.vel_e = 0.565822309327;
    msg.vel_d = 0.611405116588;
    msg.speed = 0.354065906649;
    msg.gspeed = 0.0602458526278;
    msg.heading = 0.417229785916;
    msg.sacc = 0.195347785896;
    msg.cacc = 0.956513617032;

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
    msg.setTimeStamp(0.416849857702);
    msg.setSource(51654U);
    msg.setSourceEntity(130U);
    msg.setDestination(14513U);
    msg.setDestinationEntity(113U);
    msg.itow = 2849317079U;
    msg.lat = 0.211744381668;
    msg.lon = 0.587462620814;
    msg.height_ell = 0.27305381077;
    msg.height_sea = 0.209885985185;
    msg.hacc = 0.683560621457;
    msg.vacc = 0.843491600449;
    msg.vel_n = 0.0610807590322;
    msg.vel_e = 0.279926983066;
    msg.vel_d = 0.158853145665;
    msg.speed = 0.624237478958;
    msg.gspeed = 0.988833783889;
    msg.heading = 0.21590761085;
    msg.sacc = 0.517845176908;
    msg.cacc = 0.674330993862;

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
    msg.setTimeStamp(0.449241372853);
    msg.setSource(43348U);
    msg.setSourceEntity(209U);
    msg.setDestination(8970U);
    msg.setDestinationEntity(221U);
    msg.itow = 273756459U;
    msg.lat = 0.329475618606;
    msg.lon = 0.467894246675;
    msg.height_ell = 0.283978750504;
    msg.height_sea = 0.570947661585;
    msg.hacc = 0.140570581478;
    msg.vacc = 0.637487070717;
    msg.vel_n = 0.788260539848;
    msg.vel_e = 0.715641148899;
    msg.vel_d = 0.858782595626;
    msg.speed = 0.504650661158;
    msg.gspeed = 0.425142397686;
    msg.heading = 0.894326136616;
    msg.sacc = 0.503451154708;
    msg.cacc = 0.780504220135;

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
    msg.setTimeStamp(0.588643341252);
    msg.setSource(24690U);
    msg.setSourceEntity(226U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(145U);
    msg.id = 199U;
    msg.value = 0.741116819127;

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
    msg.setTimeStamp(0.274318535798);
    msg.setSource(67U);
    msg.setSourceEntity(55U);
    msg.setDestination(3478U);
    msg.setDestinationEntity(171U);
    msg.id = 205U;
    msg.value = 0.55039885825;

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
    msg.setTimeStamp(0.999552098437);
    msg.setSource(1369U);
    msg.setSourceEntity(55U);
    msg.setDestination(49415U);
    msg.setDestinationEntity(225U);
    msg.id = 215U;
    msg.value = 0.986639871814;

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
    msg.setTimeStamp(0.615976924962);
    msg.setSource(23302U);
    msg.setSourceEntity(87U);
    msg.setDestination(35587U);
    msg.setDestinationEntity(237U);
    msg.x = 0.206520477026;
    msg.y = 0.330072429487;
    msg.z = 0.0138993252864;
    msg.phi = 0.556689848682;
    msg.theta = 0.644574153885;
    msg.psi = 0.31507970923;

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
    msg.setTimeStamp(0.42746238522);
    msg.setSource(24398U);
    msg.setSourceEntity(152U);
    msg.setDestination(30170U);
    msg.setDestinationEntity(26U);
    msg.x = 0.848039453771;
    msg.y = 0.495800712329;
    msg.z = 0.579938898207;
    msg.phi = 0.299579555689;
    msg.theta = 0.82947391263;
    msg.psi = 0.821474437848;

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
    msg.setTimeStamp(0.0349771897903);
    msg.setSource(29081U);
    msg.setSourceEntity(85U);
    msg.setDestination(41496U);
    msg.setDestinationEntity(102U);
    msg.x = 0.917968051715;
    msg.y = 0.00229793991413;
    msg.z = 0.37679177803;
    msg.phi = 0.0783694963978;
    msg.theta = 0.671718080469;
    msg.psi = 0.518955172049;

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
    msg.setTimeStamp(0.361817608191);
    msg.setSource(31632U);
    msg.setSourceEntity(247U);
    msg.setDestination(59736U);
    msg.setDestinationEntity(228U);
    msg.beam_width = 0.755658629043;
    msg.beam_height = 0.711783296418;

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
    msg.setTimeStamp(0.344837448054);
    msg.setSource(27531U);
    msg.setSourceEntity(81U);
    msg.setDestination(33778U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.398264741882;
    msg.beam_height = 0.826961942895;

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
    msg.setTimeStamp(0.789028004941);
    msg.setSource(51366U);
    msg.setSourceEntity(111U);
    msg.setDestination(12833U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.534811484806;
    msg.beam_height = 0.86042940001;

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
    msg.setTimeStamp(0.529047656162);
    msg.setSource(32291U);
    msg.setSourceEntity(33U);
    msg.setDestination(47137U);
    msg.setDestinationEntity(232U);
    msg.sane = 36U;

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
    msg.setTimeStamp(0.620959501877);
    msg.setSource(1703U);
    msg.setSourceEntity(141U);
    msg.setDestination(40778U);
    msg.setDestinationEntity(64U);
    msg.sane = 166U;

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
    msg.setTimeStamp(0.0933432323111);
    msg.setSource(61069U);
    msg.setSourceEntity(9U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(141U);
    msg.sane = 169U;

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
    msg.setTimeStamp(0.821761956948);
    msg.setSource(12083U);
    msg.setSourceEntity(103U);
    msg.setDestination(44412U);
    msg.setDestinationEntity(233U);
    msg.id = 141U;
    msg.zoom = 6U;
    msg.action = 233U;

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
    msg.setTimeStamp(0.808073040367);
    msg.setSource(45069U);
    msg.setSourceEntity(213U);
    msg.setDestination(26410U);
    msg.setDestinationEntity(14U);
    msg.id = 68U;
    msg.zoom = 49U;
    msg.action = 236U;

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
    msg.setTimeStamp(0.0573871454417);
    msg.setSource(21316U);
    msg.setSourceEntity(10U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(183U);
    msg.id = 235U;
    msg.zoom = 166U;
    msg.action = 219U;

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
    msg.setTimeStamp(0.266602831411);
    msg.setSource(31862U);
    msg.setSourceEntity(22U);
    msg.setDestination(28782U);
    msg.setDestinationEntity(152U);
    msg.id = 129U;
    msg.value = 0.874298237123;

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
    msg.setTimeStamp(0.271137851091);
    msg.setSource(42711U);
    msg.setSourceEntity(228U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(233U);
    msg.id = 206U;
    msg.value = 0.758034164798;

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
    msg.setTimeStamp(0.566257294604);
    msg.setSource(44132U);
    msg.setSourceEntity(217U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(68U);
    msg.id = 193U;
    msg.value = 0.907645107572;

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
    msg.setTimeStamp(0.659461817772);
    msg.setSource(44474U);
    msg.setSourceEntity(36U);
    msg.setDestination(63064U);
    msg.setDestinationEntity(214U);
    msg.id = 127U;
    msg.value = 0.678674284413;

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
    msg.setTimeStamp(0.270586804162);
    msg.setSource(21888U);
    msg.setSourceEntity(250U);
    msg.setDestination(32074U);
    msg.setDestinationEntity(54U);
    msg.id = 240U;
    msg.value = 0.326613756397;

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
    msg.setTimeStamp(0.610971283483);
    msg.setSource(26986U);
    msg.setSourceEntity(135U);
    msg.setDestination(36U);
    msg.setDestinationEntity(212U);
    msg.id = 155U;
    msg.value = 0.791109808911;

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
    msg.setTimeStamp(0.144735684158);
    msg.setSource(33127U);
    msg.setSourceEntity(170U);
    msg.setDestination(19083U);
    msg.setDestinationEntity(123U);
    msg.id = 106U;
    msg.angle = 0.795773996978;

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
    msg.setTimeStamp(0.382634209037);
    msg.setSource(12102U);
    msg.setSourceEntity(138U);
    msg.setDestination(7953U);
    msg.setDestinationEntity(102U);
    msg.id = 61U;
    msg.angle = 0.165311406096;

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
    msg.setTimeStamp(0.439093180762);
    msg.setSource(26226U);
    msg.setSourceEntity(36U);
    msg.setDestination(13254U);
    msg.setDestinationEntity(2U);
    msg.id = 118U;
    msg.angle = 0.412812383309;

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
    msg.setTimeStamp(0.272212096595);
    msg.setSource(42828U);
    msg.setSourceEntity(146U);
    msg.setDestination(44708U);
    msg.setDestinationEntity(98U);
    msg.op = 21U;
    msg.actions.assign("OHVBHTTZUIYMLQDBHPBEESJNDMETOCSVFNGAQEZQYLZNQJEDWSZIKOKFGCKDWZLTOLFRXTPARBGBVJACQOPDXRRGWAJZYQBHAMRQCVHJQZSNLGYFXDAHXIUXXXKDKYRNCWGHBPIBLIWLXNJKKPITMKGSIOPZUIBEAEYSUTCUCWMLIPYJJSUACWOSMRCMELBYUADKGMFCDJAGWTOEVNPFVXISRLYTWMR");

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
    msg.setTimeStamp(0.287489235976);
    msg.setSource(20076U);
    msg.setSourceEntity(78U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(29U);
    msg.op = 32U;
    msg.actions.assign("MJEKKXTSTQIEKFBDUPCLZETBSSOQAFRWIRTYYVJOLCOGWBAHLDHAQWGNKYFTPPZUM");

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
    msg.setTimeStamp(0.0309687878923);
    msg.setSource(53530U);
    msg.setSourceEntity(177U);
    msg.setDestination(61562U);
    msg.setDestinationEntity(24U);
    msg.op = 114U;
    msg.actions.assign("XJUYMXRKVRKGQEFZLTAARTJONHCUPHHDARVNVXEBVUJTPWDOOLFXWRGPIHMNUIICFRMVBQWYUDJRBYVQGF");

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
    msg.setTimeStamp(0.717417669466);
    msg.setSource(3785U);
    msg.setSourceEntity(24U);
    msg.setDestination(43877U);
    msg.setDestinationEntity(192U);
    msg.actions.assign("JHTSWGDJWZYZSXEBKDFSHPMMQHZIMCPQAGRQVVPIENVSGUCDLGMFAPTHUUWUZKDNZXZQTNZQAECUYSXIWTTVTPXIPESQVJIIVORMRBMNUMFREBIUPXSVAOBGAQLJRKXLZOYRBQLYTFYUIANUKHXVHLJKYBTEDFDBJTDEWXFJFKAMODDGHFWUTPOCRLFYIKOXCPPYHWZE");

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
    msg.setTimeStamp(0.616310270689);
    msg.setSource(31474U);
    msg.setSourceEntity(4U);
    msg.setDestination(25957U);
    msg.setDestinationEntity(178U);
    msg.actions.assign("JBDNTHWTAFURLRABYUMLTIQLZULODV");

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
    msg.setTimeStamp(0.576271778914);
    msg.setSource(58345U);
    msg.setSourceEntity(226U);
    msg.setDestination(17564U);
    msg.setDestinationEntity(12U);
    msg.actions.assign("XDDVEKNVPVTDRCEHOBCNEQRBSNCALGLSYNLJRVCFXJYWOXZVPHZEQANTWFTTPIMBOYCTGNMKKJKIGFM");

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
    msg.setTimeStamp(0.373783953567);
    msg.setSource(20743U);
    msg.setSourceEntity(244U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(151U);
    msg.button = 46U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.279948421241);
    msg.setSource(38991U);
    msg.setSourceEntity(194U);
    msg.setDestination(11189U);
    msg.setDestinationEntity(111U);
    msg.button = 190U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.414590714956);
    msg.setSource(44884U);
    msg.setSourceEntity(152U);
    msg.setDestination(17116U);
    msg.setDestinationEntity(125U);
    msg.button = 193U;
    msg.value = 225U;

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
    msg.setTimeStamp(0.742871527423);
    msg.setSource(36202U);
    msg.setSourceEntity(106U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(214U);
    msg.op = 250U;
    msg.text.assign("KZMNDTBMNLEEREQIOIDUIVQDRYSKPRSVIEZIDQBMHAUNYGTNMRDHQOFYRJFBOTJSWKJJYZQFEOGIZMCGCAHLAHMCBKRUGEHKLUXOHGNUHMELTCQBQCSWWPLCKRHMUKUVYVMCUYZZAELXLBPXIVVSHRCIPGIGTARDJNDNYSSYWHVATXAWWPFNQBZACTODMBRJTFKVAJGFDPVXZWJYGOYXEQAZKPOSJUDFC");

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
    msg.setTimeStamp(0.325783317131);
    msg.setSource(62801U);
    msg.setSourceEntity(249U);
    msg.setDestination(11385U);
    msg.setDestinationEntity(137U);
    msg.op = 144U;
    msg.text.assign("WCEXBWFOLTIUURGRDFKXFDPNPKMIBPHFZDVHUYCVPDIIZFFSAWAGBBYKVGPIUEGAOMXAFVGUFYHQKYWBYJTNQUSZWDY");

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
    msg.setTimeStamp(0.973000520159);
    msg.setSource(27549U);
    msg.setSourceEntity(75U);
    msg.setDestination(1473U);
    msg.setDestinationEntity(200U);
    msg.op = 83U;
    msg.text.assign("YBZEWKTBARHSXTAWJPYKRBPJPAPLRFWPLAUMHR");

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
    msg.setTimeStamp(0.0796250676354);
    msg.setSource(2536U);
    msg.setSourceEntity(21U);
    msg.setDestination(6424U);
    msg.setDestinationEntity(195U);
    msg.op = 39U;
    msg.time_remain = 0.0351211134624;
    msg.sched_time = 0.587657070512;

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
    msg.setTimeStamp(0.512353503265);
    msg.setSource(39186U);
    msg.setSourceEntity(24U);
    msg.setDestination(7007U);
    msg.setDestinationEntity(122U);
    msg.op = 252U;
    msg.time_remain = 0.228571222438;
    msg.sched_time = 0.204595952961;

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
    msg.setTimeStamp(0.192933550465);
    msg.setSource(60100U);
    msg.setSourceEntity(219U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(20U);
    msg.op = 64U;
    msg.time_remain = 0.941413366411;
    msg.sched_time = 0.778399467885;

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
    msg.setTimeStamp(0.29073101699);
    msg.setSource(14825U);
    msg.setSourceEntity(147U);
    msg.setDestination(2493U);
    msg.setDestinationEntity(3U);
    msg.name.assign("BZRJEZNLYTFTDMAAMQOHNIRIDXYPKYJYSNZIILCRGYTISEGONZZTMCBBIWEUQGJAHEOMOKVHTXSYHXWPJQRKGFHVFMNFQKUQZMQLSYRRIVNSZNXWJRJWXZKVOCA");
    msg.op = 174U;
    msg.sched_time = 0.042723579125;

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
    msg.setTimeStamp(0.396135771369);
    msg.setSource(33351U);
    msg.setSourceEntity(113U);
    msg.setDestination(2642U);
    msg.setDestinationEntity(211U);
    msg.name.assign("SCOAWGMYISZPDNXLTDRHGQJHVO");
    msg.op = 225U;
    msg.sched_time = 0.181245807022;

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
    msg.setTimeStamp(0.851124024623);
    msg.setSource(44903U);
    msg.setSourceEntity(189U);
    msg.setDestination(64205U);
    msg.setDestinationEntity(33U);
    msg.name.assign("VWOOPPIEYKHWOQCERZHRPHESVTMQZQRVBFIHJWSUULOUSPAKHDIDFBLLPKCEKESUGGMXNFFABTYEJHGWZQNVDAEIJGKEAGBVMNRNRBQXFBMYBYMLXMTQAWXZAYXJACIBKTQV");
    msg.op = 210U;
    msg.sched_time = 0.450049303119;

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
    msg.setTimeStamp(0.518166737585);
    msg.setSource(31250U);
    msg.setSourceEntity(132U);
    msg.setDestination(54093U);
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
    msg.setTimeStamp(0.966623668669);
    msg.setSource(62368U);
    msg.setSourceEntity(124U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.221408370787);
    msg.setSource(48696U);
    msg.setSourceEntity(173U);
    msg.setDestination(56372U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.647347203129);
    msg.setSource(33110U);
    msg.setSourceEntity(247U);
    msg.setDestination(18593U);
    msg.setDestinationEntity(195U);
    msg.name.assign("BCGRDXGNWDOSARIQVZHSOAKVPRXLYSXCMDNVKRWKMOTEEBVLMDETGVECQKFWGRPSUVCQQSBNBBQNBWGROLDUKAJDQHGXITUDPKTFHSSFGOSBFZFTXJSPNIHFFRLLRHFLITTVAMOGXDNEZOUOVWZCWRALBOQ");
    msg.state = 127U;

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
    msg.setTimeStamp(0.532770572557);
    msg.setSource(23916U);
    msg.setSourceEntity(232U);
    msg.setDestination(45063U);
    msg.setDestinationEntity(9U);
    msg.name.assign("WRBAWPPLDGTJHQSQKDCELEPXSSWZFLOZNYWVJUSYWBKODFBTBFLUKRQHWCFMLBDTEIHIEFNRYAKYWGSAOCDCMZNOACTDRXZFNTSYQGXGRJUSVVKGKAVPYZZODYNHSPJHOEKM");
    msg.state = 236U;

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
    msg.setTimeStamp(0.958332059106);
    msg.setSource(8089U);
    msg.setSourceEntity(24U);
    msg.setDestination(9750U);
    msg.setDestinationEntity(250U);
    msg.name.assign("EQVLXFMLSAQTZTTCGWJMODMNITNZJAFZKNXKZBKJNNZMPVEHLKODXRWSVYQCUVNUXTTSMGOOBIPWJLDIMUSBZGRYGHCKHCPVVACRHZSEEAXNBPRLOKHPBTCWWJULWUMFPJDPESLGBMZQFHFKXAILEWPXAIUIBGAAVWJBYRKGC");
    msg.state = 190U;

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
    msg.setTimeStamp(0.211242437107);
    msg.setSource(9356U);
    msg.setSourceEntity(142U);
    msg.setDestination(12719U);
    msg.setDestinationEntity(117U);
    msg.name.assign("AFXOQRUOSSYLQLRFWNGEZJBGQQYIEXFKHLXRKUBTQZJQRBPIGSUMPAASTNKBMDKKLBLETOBIAOVSFCVWMDTYLWAVVFNJDHMCDHGJUFXNNEPGBGHDHUGLIPMJKMZHCJOWBTMSNYUYELCJXUAYKVXJNYEFQVXQODGVVUMCMAWISJIUAQETLPHZTPZCZNTFUDSHIJWIZVDKYHPEOWGXADOOBR");
    msg.value = 60U;

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
    msg.setTimeStamp(0.603719294896);
    msg.setSource(6125U);
    msg.setSourceEntity(50U);
    msg.setDestination(23991U);
    msg.setDestinationEntity(65U);
    msg.name.assign("NDXTKMXWKKSSGAMXKNKA");
    msg.value = 158U;

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
    msg.setTimeStamp(0.193399571778);
    msg.setSource(5110U);
    msg.setSourceEntity(185U);
    msg.setDestination(20910U);
    msg.setDestinationEntity(159U);
    msg.name.assign("VUELIOMYGNXRZCBZEFEQANGOLCJPLRUSKHINDUVEQAPGOZWOYARFQNNGXSWATAVVXOLNTMYBTYWPCQGNMLKSGKRDGLPMJXZBXWAIEVTV");
    msg.value = 207U;

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
    msg.setTimeStamp(0.592495166387);
    msg.setSource(31657U);
    msg.setSourceEntity(92U);
    msg.setDestination(11352U);
    msg.setDestinationEntity(215U);
    msg.name.assign("JPUUWYQTKMXBMVHLKYDCESLELRTIWLKKZJEYDNCPHIUIRTQDCANSJAICCYMBAPWGUGZISEHZWELOSGRVPFGZKTFIHIMLTZTHDVDFPVVNYXZQRWYARMABOOGCPHUQVBXDWPEQMVAHULKWJPDSXUZLYNEOJERTQABTNXFMQGBOAZTBOHKPLOXMWJMFEKL");

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
    msg.setTimeStamp(0.317939450638);
    msg.setSource(17698U);
    msg.setSourceEntity(84U);
    msg.setDestination(5029U);
    msg.setDestinationEntity(37U);
    msg.name.assign("XTZMXSHMDPSGCBLXOBFPOAJVDYFVCDHEGEJWFREIIAUFOQJEZSDQLWNAMWZAGFMNJS");

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
    msg.setTimeStamp(0.881155605381);
    msg.setSource(20873U);
    msg.setSourceEntity(193U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(27U);
    msg.name.assign("UWIEYTERSYJSNHDEMMGQWTLCONPDQFDCQZBEFWMLYNDBWQSFUAAOQYCIKXIOKLAIRAJYVJBEIVFMVRFRLUKOLSHAHQKNZOCCHTBVZMSZYMBUGTNHGRRVGRMMLLOVNWBZRDMEIKSRBWJMPFEJSZFYLH");

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
    msg.setTimeStamp(0.298406993722);
    msg.setSource(39213U);
    msg.setSourceEntity(29U);
    msg.setDestination(39955U);
    msg.setDestinationEntity(55U);
    msg.name.assign("JNHIVRRCBASNRLVNQJXWGHCEPVOQDFGZYSHGQFIFRLZKCOVRUAYQVOOBXJJASLOYDTOPUWMZFRSSQJFWZHEMDNRXKAHIET");
    msg.value = 253U;

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
    msg.setTimeStamp(0.215867102251);
    msg.setSource(8521U);
    msg.setSourceEntity(152U);
    msg.setDestination(58532U);
    msg.setDestinationEntity(1U);
    msg.name.assign("IJUCBVYKCCFMYYVTLNLSDUMMAVDTORSJLZAUGQJBSLBOSPSJGXDMKWSILXHNPDKUACJBKIETPPDIHMGPQWTLZYWMLOHTKAILERAQVQUDTBPFQRDOVRMGIBURWQYYEOCVRPTIZZHMRJGLXZYATHDZBLXWFINAFZJFOXIXPZEXMRFCAGUMNZJOWGHONUODBFPQSESNHRDJWGVHFGGZVKVSYRWCYX");
    msg.value = 197U;

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
    msg.setTimeStamp(0.280869252168);
    msg.setSource(19384U);
    msg.setSourceEntity(191U);
    msg.setDestination(25134U);
    msg.setDestinationEntity(143U);
    msg.name.assign("EHFORSMJGRZWZBJEFWUGPRIHMUEIOUBHJHPHGUXCGMZQSRKHFWJPVNYBFYCFGXNNFPQADXHKPZTTYCNTBAMEOWBSGRWKRNLGXDLJBLMOHANDXKFSEOOORJTWTIQKCOCZBLCTEIMAAMAEDVZUGVZOPPIAOJKLYWQZYCGUKIRCVYPLQADQDJHKVYYZETMSHVSYUDGBFCISLMRKKQDIQBTAXLLMLIFWANPBQDYTVRZVUNXPVQ");
    msg.value = 33U;

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
    msg.setTimeStamp(0.902364752212);
    msg.setSource(15992U);
    msg.setSourceEntity(231U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(246U);
    msg.id = 236U;
    msg.period = 2987645185U;
    msg.duty_cycle = 3261793370U;

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
    msg.setTimeStamp(0.0244933579252);
    msg.setSource(8369U);
    msg.setSourceEntity(67U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(133U);
    msg.id = 180U;
    msg.period = 126444657U;
    msg.duty_cycle = 3540095173U;

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
    msg.setTimeStamp(0.44932307275);
    msg.setSource(1824U);
    msg.setSourceEntity(41U);
    msg.setDestination(17979U);
    msg.setDestinationEntity(11U);
    msg.id = 158U;
    msg.period = 624669073U;
    msg.duty_cycle = 836870081U;

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
    msg.setTimeStamp(0.197309005516);
    msg.setSource(32822U);
    msg.setSourceEntity(80U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(144U);
    msg.id = 254U;
    msg.period = 2828397867U;
    msg.duty_cycle = 501982126U;

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
    msg.setTimeStamp(0.745423024322);
    msg.setSource(21082U);
    msg.setSourceEntity(229U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(196U);
    msg.id = 189U;
    msg.period = 578434247U;
    msg.duty_cycle = 1527826759U;

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
    msg.setTimeStamp(0.383093846452);
    msg.setSource(60406U);
    msg.setSourceEntity(37U);
    msg.setDestination(49879U);
    msg.setDestinationEntity(132U);
    msg.id = 183U;
    msg.period = 3656751655U;
    msg.duty_cycle = 1382006362U;

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
    msg.setTimeStamp(0.293539321374);
    msg.setSource(33714U);
    msg.setSourceEntity(113U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.937227842358;
    msg.lon = 0.724575261216;
    msg.height = 0.837346073175;
    msg.x = 0.874729669799;
    msg.y = 0.266305150661;
    msg.z = 0.655343672141;
    msg.phi = 0.234903765861;
    msg.theta = 0.512782934685;
    msg.psi = 0.850598043463;
    msg.u = 0.0896051797571;
    msg.v = 0.579091491452;
    msg.w = 0.998001732116;
    msg.vx = 0.536058884171;
    msg.vy = 0.0771498541605;
    msg.vz = 0.871599089673;
    msg.p = 0.203940956998;
    msg.q = 0.8425134558;
    msg.r = 0.367952630808;
    msg.depth = 0.183269090364;
    msg.alt = 0.3309183553;

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
    msg.setTimeStamp(0.156904586599);
    msg.setSource(1714U);
    msg.setSourceEntity(70U);
    msg.setDestination(14109U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.111967459392;
    msg.lon = 0.270259709512;
    msg.height = 0.482131303475;
    msg.x = 0.948167885931;
    msg.y = 0.289147113414;
    msg.z = 0.426102142012;
    msg.phi = 0.36095609411;
    msg.theta = 0.674776025087;
    msg.psi = 0.698213333605;
    msg.u = 0.255131666042;
    msg.v = 0.928066641015;
    msg.w = 0.811284981669;
    msg.vx = 0.772054290927;
    msg.vy = 0.0727958193637;
    msg.vz = 0.167753866933;
    msg.p = 0.565250040116;
    msg.q = 0.540855974062;
    msg.r = 0.885304440759;
    msg.depth = 0.261338213071;
    msg.alt = 0.676884916552;

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
    msg.setTimeStamp(0.811305976445);
    msg.setSource(8989U);
    msg.setSourceEntity(34U);
    msg.setDestination(59390U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.134548704221;
    msg.lon = 0.919549506137;
    msg.height = 0.662551111397;
    msg.x = 0.580624879266;
    msg.y = 0.084425784452;
    msg.z = 0.426298755921;
    msg.phi = 0.179101091548;
    msg.theta = 0.229385183121;
    msg.psi = 0.863433443482;
    msg.u = 0.505221127436;
    msg.v = 0.386643566104;
    msg.w = 0.206907460434;
    msg.vx = 0.829983798336;
    msg.vy = 0.556857639706;
    msg.vz = 0.976537612388;
    msg.p = 0.555153503662;
    msg.q = 0.289516095537;
    msg.r = 0.716249023692;
    msg.depth = 0.825249721666;
    msg.alt = 0.179511721283;

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
    msg.setTimeStamp(0.207527470118);
    msg.setSource(13950U);
    msg.setSourceEntity(145U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(246U);
    msg.x = 0.950212053283;
    msg.y = 0.59679440759;
    msg.z = 0.228786680375;

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
    msg.setTimeStamp(0.44386597188);
    msg.setSource(54868U);
    msg.setSourceEntity(152U);
    msg.setDestination(3582U);
    msg.setDestinationEntity(90U);
    msg.x = 0.0448050132753;
    msg.y = 0.334191097577;
    msg.z = 0.534240660453;

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
    msg.setTimeStamp(0.716644736545);
    msg.setSource(15475U);
    msg.setSourceEntity(197U);
    msg.setDestination(31503U);
    msg.setDestinationEntity(149U);
    msg.x = 0.512713516746;
    msg.y = 0.313388223366;
    msg.z = 0.436155337983;

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
    msg.setTimeStamp(0.0813310493815);
    msg.setSource(5581U);
    msg.setSourceEntity(19U);
    msg.setDestination(18054U);
    msg.setDestinationEntity(100U);
    msg.value = 0.126614371578;

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
    msg.setTimeStamp(0.981595711951);
    msg.setSource(17893U);
    msg.setSourceEntity(204U);
    msg.setDestination(26644U);
    msg.setDestinationEntity(11U);
    msg.value = 0.511357381166;

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
    msg.setTimeStamp(0.828176368101);
    msg.setSource(55673U);
    msg.setSourceEntity(176U);
    msg.setDestination(1780U);
    msg.setDestinationEntity(114U);
    msg.value = 0.327007018317;

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
    msg.setTimeStamp(0.467048496861);
    msg.setSource(54629U);
    msg.setSourceEntity(29U);
    msg.setDestination(35297U);
    msg.setDestinationEntity(80U);
    msg.value = 0.866882836683;

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
    msg.setTimeStamp(0.753636648548);
    msg.setSource(33808U);
    msg.setSourceEntity(53U);
    msg.setDestination(10900U);
    msg.setDestinationEntity(57U);
    msg.value = 0.849259541875;

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
    msg.setTimeStamp(0.514773123734);
    msg.setSource(14686U);
    msg.setSourceEntity(252U);
    msg.setDestination(28003U);
    msg.setDestinationEntity(68U);
    msg.value = 0.454089946743;

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
    msg.setTimeStamp(0.0912231467033);
    msg.setSource(65522U);
    msg.setSourceEntity(96U);
    msg.setDestination(2941U);
    msg.setDestinationEntity(108U);
    msg.x = 0.436131006782;
    msg.y = 0.885124499613;
    msg.z = 0.0775173533534;
    msg.phi = 0.53358968029;
    msg.theta = 0.571826948931;
    msg.psi = 0.68894107091;
    msg.p = 0.177217219994;
    msg.q = 0.196424376505;
    msg.r = 0.234680724771;
    msg.u = 0.711390730841;
    msg.v = 0.58456939536;
    msg.w = 0.201585365085;
    msg.bias_psi = 0.991184132197;
    msg.bias_r = 0.677038599648;

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
    msg.setTimeStamp(0.151451131435);
    msg.setSource(57011U);
    msg.setSourceEntity(130U);
    msg.setDestination(52115U);
    msg.setDestinationEntity(232U);
    msg.x = 0.0183275353823;
    msg.y = 0.130410287103;
    msg.z = 0.931565155737;
    msg.phi = 0.382881845679;
    msg.theta = 0.030843485909;
    msg.psi = 0.212047677778;
    msg.p = 0.95104943047;
    msg.q = 0.400647043815;
    msg.r = 0.340023354798;
    msg.u = 0.14256911632;
    msg.v = 0.549114823241;
    msg.w = 0.502540963689;
    msg.bias_psi = 0.379085971631;
    msg.bias_r = 0.313312555577;

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
    msg.setTimeStamp(0.193209026864);
    msg.setSource(22159U);
    msg.setSourceEntity(217U);
    msg.setDestination(24781U);
    msg.setDestinationEntity(103U);
    msg.x = 0.637388450952;
    msg.y = 0.495412750344;
    msg.z = 0.406897825537;
    msg.phi = 0.679525793088;
    msg.theta = 0.909578409206;
    msg.psi = 0.485457311803;
    msg.p = 0.435103825041;
    msg.q = 0.483297841538;
    msg.r = 0.826587618881;
    msg.u = 0.235429887815;
    msg.v = 0.473612801539;
    msg.w = 0.940564554026;
    msg.bias_psi = 0.824511871035;
    msg.bias_r = 0.18404868223;

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
    msg.setTimeStamp(0.0812458773016);
    msg.setSource(7102U);
    msg.setSourceEntity(83U);
    msg.setDestination(22249U);
    msg.setDestinationEntity(245U);
    msg.bias_psi = 0.148736618122;
    msg.bias_r = 0.482482238489;
    msg.cog = 0.523049264603;
    msg.cyaw = 0.791725442955;
    msg.lbl_rej_level = 0.65861122109;
    msg.gps_rej_level = 0.573843253387;
    msg.custom_x = 0.59628022835;
    msg.custom_y = 0.321668998876;
    msg.custom_z = 0.106630285408;

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
    msg.setTimeStamp(0.53611488087);
    msg.setSource(1908U);
    msg.setSourceEntity(8U);
    msg.setDestination(25841U);
    msg.setDestinationEntity(227U);
    msg.bias_psi = 0.211570641982;
    msg.bias_r = 0.152314940026;
    msg.cog = 0.482263419116;
    msg.cyaw = 0.600911632123;
    msg.lbl_rej_level = 0.95582925373;
    msg.gps_rej_level = 0.0671041531794;
    msg.custom_x = 0.798840029756;
    msg.custom_y = 0.727562807785;
    msg.custom_z = 0.698108449409;

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
    msg.setTimeStamp(0.387800465474);
    msg.setSource(31647U);
    msg.setSourceEntity(123U);
    msg.setDestination(49080U);
    msg.setDestinationEntity(105U);
    msg.bias_psi = 0.0821486422028;
    msg.bias_r = 0.377488216518;
    msg.cog = 0.258871957677;
    msg.cyaw = 0.433723864829;
    msg.lbl_rej_level = 0.394702427818;
    msg.gps_rej_level = 0.140696597574;
    msg.custom_x = 0.632677113264;
    msg.custom_y = 0.631075489685;
    msg.custom_z = 0.675511547929;

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
    msg.setTimeStamp(0.970674895092);
    msg.setSource(42988U);
    msg.setSourceEntity(65U);
    msg.setDestination(7401U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.00953053496974;
    msg.reason = 11U;

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
    msg.setTimeStamp(0.246373879726);
    msg.setSource(53138U);
    msg.setSourceEntity(141U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(24U);
    msg.utc_time = 0.890682460668;
    msg.reason = 101U;

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
    msg.setTimeStamp(0.670037784619);
    msg.setSource(44594U);
    msg.setSourceEntity(201U);
    msg.setDestination(60011U);
    msg.setDestinationEntity(179U);
    msg.utc_time = 0.0866868984774;
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
    msg.setTimeStamp(0.110920656322);
    msg.setSource(3604U);
    msg.setSourceEntity(70U);
    msg.setDestination(9137U);
    msg.setDestinationEntity(27U);
    msg.id = 18U;
    msg.range = 0.860636302858;
    msg.acceptance = 120U;

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
    msg.setTimeStamp(0.890448205377);
    msg.setSource(39703U);
    msg.setSourceEntity(166U);
    msg.setDestination(44330U);
    msg.setDestinationEntity(160U);
    msg.id = 71U;
    msg.range = 0.982706940243;
    msg.acceptance = 120U;

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
    msg.setTimeStamp(0.16568543352);
    msg.setSource(63436U);
    msg.setSourceEntity(3U);
    msg.setDestination(4995U);
    msg.setDestinationEntity(43U);
    msg.id = 141U;
    msg.range = 0.506031860691;
    msg.acceptance = 150U;

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
    msg.setTimeStamp(0.731024545861);
    msg.setSource(31090U);
    msg.setSourceEntity(186U);
    msg.setDestination(47515U);
    msg.setDestinationEntity(61U);
    msg.type = 11U;
    msg.reason = 172U;
    msg.value = 0.713882385225;
    msg.timestep = 0.188823601514;

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
    msg.setTimeStamp(0.118423031737);
    msg.setSource(4650U);
    msg.setSourceEntity(74U);
    msg.setDestination(54590U);
    msg.setDestinationEntity(11U);
    msg.type = 235U;
    msg.reason = 94U;
    msg.value = 0.807270485757;
    msg.timestep = 0.196726544769;

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
    msg.setTimeStamp(0.578660618257);
    msg.setSource(17614U);
    msg.setSourceEntity(85U);
    msg.setDestination(28900U);
    msg.setDestinationEntity(115U);
    msg.type = 161U;
    msg.reason = 176U;
    msg.value = 0.764312527569;
    msg.timestep = 0.872732569413;

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
    msg.setTimeStamp(0.865099780221);
    msg.setSource(37393U);
    msg.setSourceEntity(238U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.545395394396);
    msg.setSource(51635U);
    msg.setSourceEntity(63U);
    msg.setDestination(56683U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.762668477437);
    msg.setSource(20595U);
    msg.setSourceEntity(158U);
    msg.setDestination(12160U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.183002205286);
    msg.setSource(326U);
    msg.setSourceEntity(176U);
    msg.setDestination(19864U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JQCBGSJFNQSNIVOROGNFU");
    tmp_msg_0.lat = 0.633452631034;
    tmp_msg_0.lon = 0.418663976355;
    tmp_msg_0.depth = 0.457382508947;
    tmp_msg_0.query_channel = 183U;
    tmp_msg_0.reply_channel = 170U;
    tmp_msg_0.transponder_delay = 111U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.995883584111;
    msg.y = 0.080198170866;
    msg.var_x = 0.0752126881376;
    msg.var_y = 0.735065920692;
    msg.distance = 0.516439326919;

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
    msg.setTimeStamp(0.949615636911);
    msg.setSource(40021U);
    msg.setSourceEntity(35U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UCVTOZRPEUSXUNYKABWKCZZIVGJZLGDRXXSHFFVMOXSLVFWBPDVHXINLKCGBUWQJPMGOQDDTUQBQAEMEHRZJCTTEEQAZRKAFWOHQPLOACLPOKCEICSKXUPQSYJJZNDRQYXIAMEHMBMIFTXGXQSSIINOYGFKDKLPTMPYJMALNRQOHHAWODNDSMGJIDWHLJLIGFD");
    tmp_msg_0.lat = 0.0264317090118;
    tmp_msg_0.lon = 0.367592748017;
    tmp_msg_0.depth = 0.270644110068;
    tmp_msg_0.query_channel = 131U;
    tmp_msg_0.reply_channel = 142U;
    tmp_msg_0.transponder_delay = 12U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.991820713875;
    msg.y = 0.817908769187;
    msg.var_x = 0.148690148346;
    msg.var_y = 0.1053640131;
    msg.distance = 0.435008838059;

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
    msg.setTimeStamp(0.451449998394);
    msg.setSource(7324U);
    msg.setSourceEntity(111U);
    msg.setDestination(42607U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZGQIBUNHPRKIEWXWSEDWUXQKLXCVGCPIZJJVSMSRWHBUXOEFMXXBKHQODAOJTQCYCOAMBNRXFCYCZLVYVDTANBRQBVTVWJMTWHQFPCMJFCDZKWDYIJUWHKFONPCDFBBLJYQHBNSNSILGLVT");
    tmp_msg_0.lat = 0.849875530995;
    tmp_msg_0.lon = 0.0425641779524;
    tmp_msg_0.depth = 0.402056412881;
    tmp_msg_0.query_channel = 76U;
    tmp_msg_0.reply_channel = 12U;
    tmp_msg_0.transponder_delay = 153U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.118641846634;
    msg.y = 0.769225401534;
    msg.var_x = 0.512011888618;
    msg.var_y = 0.0243478947077;
    msg.distance = 0.378860858249;

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
    msg.setTimeStamp(0.639535720643);
    msg.setSource(23409U);
    msg.setSourceEntity(62U);
    msg.setDestination(31256U);
    msg.setDestinationEntity(62U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.252527027386);
    msg.setSource(52732U);
    msg.setSourceEntity(179U);
    msg.setDestination(47205U);
    msg.setDestinationEntity(71U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.450410500315);
    msg.setSource(39026U);
    msg.setSourceEntity(72U);
    msg.setDestination(11082U);
    msg.setDestinationEntity(216U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.422204542927);
    msg.setSource(28844U);
    msg.setSourceEntity(153U);
    msg.setDestination(17070U);
    msg.setDestinationEntity(217U);
    msg.x = 0.964291571749;
    msg.y = 0.578554761273;
    msg.z = 0.768039746177;

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
    msg.setTimeStamp(0.513934340534);
    msg.setSource(21426U);
    msg.setSourceEntity(198U);
    msg.setDestination(31510U);
    msg.setDestinationEntity(133U);
    msg.x = 0.170284610592;
    msg.y = 0.462409082841;
    msg.z = 0.59440173215;

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
    msg.setTimeStamp(0.295106608158);
    msg.setSource(3653U);
    msg.setSourceEntity(46U);
    msg.setDestination(10467U);
    msg.setDestinationEntity(137U);
    msg.x = 0.324928911174;
    msg.y = 0.186390895287;
    msg.z = 0.954408545467;

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
    msg.setTimeStamp(0.58356992518);
    msg.setSource(62792U);
    msg.setSourceEntity(7U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(104U);
    msg.value = 0.323571125497;

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
    msg.setTimeStamp(0.159646869573);
    msg.setSource(58649U);
    msg.setSourceEntity(180U);
    msg.setDestination(23667U);
    msg.setDestinationEntity(65U);
    msg.value = 0.804459046062;

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
    msg.setTimeStamp(0.599908139596);
    msg.setSource(26427U);
    msg.setSourceEntity(105U);
    msg.setDestination(65320U);
    msg.setDestinationEntity(112U);
    msg.value = 0.306049778165;

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
    msg.setTimeStamp(0.791565384433);
    msg.setSource(4496U);
    msg.setSourceEntity(138U);
    msg.setDestination(33468U);
    msg.setDestinationEntity(81U);
    msg.value = 0.46031501973;
    msg.z_units = 214U;

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
    msg.setTimeStamp(0.795982814673);
    msg.setSource(50234U);
    msg.setSourceEntity(53U);
    msg.setDestination(54346U);
    msg.setDestinationEntity(232U);
    msg.value = 0.22143147633;
    msg.z_units = 137U;

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
    msg.setTimeStamp(0.587022774674);
    msg.setSource(48929U);
    msg.setSourceEntity(157U);
    msg.setDestination(1708U);
    msg.setDestinationEntity(205U);
    msg.value = 0.814944431725;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.334090650167);
    msg.setSource(39834U);
    msg.setSourceEntity(164U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(48U);
    msg.value = 0.305244054443;
    msg.speed_units = 183U;

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
    msg.setTimeStamp(0.791237435923);
    msg.setSource(6351U);
    msg.setSourceEntity(90U);
    msg.setDestination(4572U);
    msg.setDestinationEntity(192U);
    msg.value = 0.142902122572;
    msg.speed_units = 29U;

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
    msg.setTimeStamp(0.547032415494);
    msg.setSource(23550U);
    msg.setSourceEntity(96U);
    msg.setDestination(24952U);
    msg.setDestinationEntity(247U);
    msg.value = 0.03185752541;
    msg.speed_units = 212U;

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
    msg.setTimeStamp(0.918581217815);
    msg.setSource(65417U);
    msg.setSourceEntity(195U);
    msg.setDestination(62373U);
    msg.setDestinationEntity(38U);
    msg.value = 0.621303163273;

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
    msg.setTimeStamp(0.239434571257);
    msg.setSource(38631U);
    msg.setSourceEntity(53U);
    msg.setDestination(37591U);
    msg.setDestinationEntity(61U);
    msg.value = 0.00122602770649;

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
    msg.setTimeStamp(0.275559998077);
    msg.setSource(40120U);
    msg.setSourceEntity(54U);
    msg.setDestination(15729U);
    msg.setDestinationEntity(121U);
    msg.value = 0.390767241286;

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
    msg.setTimeStamp(0.736465126471);
    msg.setSource(2734U);
    msg.setSourceEntity(54U);
    msg.setDestination(62520U);
    msg.setDestinationEntity(14U);
    msg.value = 0.850320341674;

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
    msg.setTimeStamp(0.462652238006);
    msg.setSource(18068U);
    msg.setSourceEntity(239U);
    msg.setDestination(61382U);
    msg.setDestinationEntity(9U);
    msg.value = 0.294715205065;

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
    msg.setTimeStamp(0.933318438032);
    msg.setSource(18167U);
    msg.setSourceEntity(16U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(215U);
    msg.value = 0.227784314068;

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
    msg.setTimeStamp(0.785696364308);
    msg.setSource(55534U);
    msg.setSourceEntity(75U);
    msg.setDestination(23343U);
    msg.setDestinationEntity(166U);
    msg.value = 0.140176121458;

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
    msg.setTimeStamp(0.373406811826);
    msg.setSource(3058U);
    msg.setSourceEntity(224U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(160U);
    msg.value = 0.369502892006;

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
    msg.setTimeStamp(0.6759811491);
    msg.setSource(60225U);
    msg.setSourceEntity(151U);
    msg.setDestination(24801U);
    msg.setDestinationEntity(107U);
    msg.value = 0.805904325083;

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
    msg.setTimeStamp(0.601449608608);
    msg.setSource(30321U);
    msg.setSourceEntity(28U);
    msg.setDestination(20663U);
    msg.setDestinationEntity(41U);
    msg.start_lat = 0.299220843498;
    msg.start_lon = 0.898061178063;
    msg.start_z = 0.107519351753;
    msg.start_z_units = 22U;
    msg.end_lat = 0.99905697693;
    msg.end_lon = 0.897434833823;
    msg.end_z = 0.617855598949;
    msg.end_z_units = 36U;
    msg.speed = 0.917789104585;
    msg.speed_units = 131U;
    msg.lradius = 0.52240866851;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.623493952065);
    msg.setSource(11196U);
    msg.setSourceEntity(177U);
    msg.setDestination(1707U);
    msg.setDestinationEntity(241U);
    msg.start_lat = 0.350672013127;
    msg.start_lon = 0.670949097;
    msg.start_z = 0.439720871342;
    msg.start_z_units = 172U;
    msg.end_lat = 0.606807190289;
    msg.end_lon = 0.429720488486;
    msg.end_z = 0.826879796771;
    msg.end_z_units = 168U;
    msg.speed = 0.427602199362;
    msg.speed_units = 83U;
    msg.lradius = 0.673869148425;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.79041354068);
    msg.setSource(31691U);
    msg.setSourceEntity(38U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(117U);
    msg.start_lat = 0.100369677459;
    msg.start_lon = 0.200956765546;
    msg.start_z = 0.545106020149;
    msg.start_z_units = 223U;
    msg.end_lat = 0.105141668687;
    msg.end_lon = 0.797436526308;
    msg.end_z = 0.8562525279;
    msg.end_z_units = 24U;
    msg.speed = 0.280382034869;
    msg.speed_units = 141U;
    msg.lradius = 0.243328584685;
    msg.flags = 201U;

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
    msg.setTimeStamp(0.961086138028);
    msg.setSource(22355U);
    msg.setSourceEntity(138U);
    msg.setDestination(23940U);
    msg.setDestinationEntity(51U);
    msg.x = 0.350394256278;
    msg.y = 0.323341955648;
    msg.z = 0.852699785613;
    msg.k = 0.154526685775;
    msg.m = 0.215346530824;
    msg.n = 0.398576650252;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.890054357165);
    msg.setSource(54767U);
    msg.setSourceEntity(190U);
    msg.setDestination(35355U);
    msg.setDestinationEntity(109U);
    msg.x = 0.461652373653;
    msg.y = 0.399299301763;
    msg.z = 0.448526137744;
    msg.k = 0.0980043448524;
    msg.m = 0.771308523608;
    msg.n = 0.982994951378;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.102230679334);
    msg.setSource(48274U);
    msg.setSourceEntity(17U);
    msg.setDestination(53463U);
    msg.setDestinationEntity(27U);
    msg.x = 0.263634819873;
    msg.y = 0.565896482282;
    msg.z = 0.599472785996;
    msg.k = 0.24968566308;
    msg.m = 0.360032133471;
    msg.n = 0.714725099044;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.411234227357);
    msg.setSource(46815U);
    msg.setSourceEntity(233U);
    msg.setDestination(15036U);
    msg.setDestinationEntity(184U);
    msg.value = 0.621597883387;

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
    msg.setTimeStamp(0.963377130772);
    msg.setSource(2100U);
    msg.setSourceEntity(150U);
    msg.setDestination(13484U);
    msg.setDestinationEntity(248U);
    msg.value = 0.621240573577;

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
    msg.setTimeStamp(0.128303336059);
    msg.setSource(48243U);
    msg.setSourceEntity(170U);
    msg.setDestination(56736U);
    msg.setDestinationEntity(184U);
    msg.value = 0.687464219828;

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
    msg.setTimeStamp(0.478233188878);
    msg.setSource(38578U);
    msg.setSourceEntity(81U);
    msg.setDestination(31287U);
    msg.setDestinationEntity(164U);
    msg.u = 0.577369365739;
    msg.v = 0.345143069204;
    msg.w = 0.169463726104;
    msg.p = 0.430130814273;
    msg.q = 0.304563064129;
    msg.r = 0.732071987704;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.64800370251);
    msg.setSource(7655U);
    msg.setSourceEntity(99U);
    msg.setDestination(59770U);
    msg.setDestinationEntity(205U);
    msg.u = 0.970130101444;
    msg.v = 0.726601522745;
    msg.w = 0.140264763292;
    msg.p = 0.965131279238;
    msg.q = 0.303228259623;
    msg.r = 0.318092652894;
    msg.flags = 46U;

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
    msg.setTimeStamp(0.252461279934);
    msg.setSource(36522U);
    msg.setSourceEntity(232U);
    msg.setDestination(2716U);
    msg.setDestinationEntity(160U);
    msg.u = 0.0369849576239;
    msg.v = 0.966267498322;
    msg.w = 0.873922648608;
    msg.p = 0.73474179986;
    msg.q = 0.78811199886;
    msg.r = 0.904323917725;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.484284280743);
    msg.setSource(23744U);
    msg.setSourceEntity(206U);
    msg.setDestination(53679U);
    msg.setDestinationEntity(122U);
    msg.start_lat = 0.00747578492619;
    msg.start_lon = 0.444830530195;
    msg.start_z = 0.388122249467;
    msg.start_z_units = 96U;
    msg.end_lat = 0.908817603448;
    msg.end_lon = 0.470467492038;
    msg.end_z = 0.370271353242;
    msg.end_z_units = 66U;
    msg.lradius = 0.0843202425006;
    msg.flags = 0U;
    msg.x = 0.96813788409;
    msg.y = 0.444879857733;
    msg.z = 0.503594921242;
    msg.vx = 0.366153014417;
    msg.vy = 0.364860198546;
    msg.vz = 0.214595979791;
    msg.course_error = 0.383680505935;
    msg.eta = 26911U;

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
    msg.setTimeStamp(0.65278879967);
    msg.setSource(6213U);
    msg.setSourceEntity(251U);
    msg.setDestination(54225U);
    msg.setDestinationEntity(178U);
    msg.start_lat = 0.278650688521;
    msg.start_lon = 0.499453694788;
    msg.start_z = 0.0791405893835;
    msg.start_z_units = 110U;
    msg.end_lat = 0.774991430368;
    msg.end_lon = 0.386378618153;
    msg.end_z = 0.441024835129;
    msg.end_z_units = 69U;
    msg.lradius = 0.861542150485;
    msg.flags = 204U;
    msg.x = 0.0786943315556;
    msg.y = 0.626496839249;
    msg.z = 0.444143798057;
    msg.vx = 0.742874004855;
    msg.vy = 0.783711560929;
    msg.vz = 0.746891407434;
    msg.course_error = 0.441557494553;
    msg.eta = 60376U;

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
    msg.setTimeStamp(0.898032711303);
    msg.setSource(20827U);
    msg.setSourceEntity(60U);
    msg.setDestination(19925U);
    msg.setDestinationEntity(127U);
    msg.start_lat = 0.563023825224;
    msg.start_lon = 0.159717865549;
    msg.start_z = 0.199236100814;
    msg.start_z_units = 132U;
    msg.end_lat = 0.67798839175;
    msg.end_lon = 0.750774570721;
    msg.end_z = 0.244755414189;
    msg.end_z_units = 169U;
    msg.lradius = 0.545774635449;
    msg.flags = 169U;
    msg.x = 0.994336721793;
    msg.y = 0.983495328347;
    msg.z = 0.876739427281;
    msg.vx = 0.79853502795;
    msg.vy = 0.123642566122;
    msg.vz = 0.571848893785;
    msg.course_error = 0.152788820458;
    msg.eta = 56161U;

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
    msg.setTimeStamp(0.00293423141639);
    msg.setSource(418U);
    msg.setSourceEntity(173U);
    msg.setDestination(46873U);
    msg.setDestinationEntity(195U);
    msg.k = 0.0879284892747;
    msg.m = 0.863787147927;
    msg.n = 0.379705843987;

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
    msg.setTimeStamp(0.970084563712);
    msg.setSource(4342U);
    msg.setSourceEntity(177U);
    msg.setDestination(28734U);
    msg.setDestinationEntity(186U);
    msg.k = 0.740571997715;
    msg.m = 0.832023086335;
    msg.n = 0.871113780928;

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
    msg.setTimeStamp(0.955316761571);
    msg.setSource(52895U);
    msg.setSourceEntity(6U);
    msg.setDestination(13540U);
    msg.setDestinationEntity(96U);
    msg.k = 0.269894433198;
    msg.m = 0.333036712679;
    msg.n = 0.818178315558;

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
    msg.setTimeStamp(0.769042620642);
    msg.setSource(6682U);
    msg.setSourceEntity(130U);
    msg.setDestination(27294U);
    msg.setDestinationEntity(65U);
    msg.p = 0.651641393501;
    msg.i = 0.00159342401012;
    msg.d = 0.0556943178267;
    msg.a = 0.787101687261;

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
    msg.setTimeStamp(0.713520462792);
    msg.setSource(15356U);
    msg.setSourceEntity(206U);
    msg.setDestination(14486U);
    msg.setDestinationEntity(12U);
    msg.p = 0.342126498427;
    msg.i = 0.992226765724;
    msg.d = 0.2147688671;
    msg.a = 0.139039005724;

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
    msg.setTimeStamp(0.859995617684);
    msg.setSource(14998U);
    msg.setSourceEntity(148U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(132U);
    msg.p = 0.576245019633;
    msg.i = 0.964334451816;
    msg.d = 0.0163033860163;
    msg.a = 0.741492032185;

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
    msg.setTimeStamp(0.254315010659);
    msg.setSource(59581U);
    msg.setSourceEntity(35U);
    msg.setDestination(24016U);
    msg.setDestinationEntity(2U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.76524286974);
    msg.setSource(57578U);
    msg.setSourceEntity(254U);
    msg.setDestination(11638U);
    msg.setDestinationEntity(232U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.046322245362);
    msg.setSource(60178U);
    msg.setSourceEntity(87U);
    msg.setDestination(59447U);
    msg.setDestinationEntity(227U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.685460639734);
    msg.setSource(24735U);
    msg.setSourceEntity(96U);
    msg.setDestination(9054U);
    msg.setDestinationEntity(235U);
    msg.timeout = 7067U;
    msg.lat = 0.598517573388;
    msg.lon = 0.926050954312;
    msg.z = 0.247279478426;
    msg.z_units = 121U;
    msg.speed = 0.567839662659;
    msg.speed_units = 19U;
    msg.roll = 0.584083878045;
    msg.pitch = 0.11102023635;
    msg.yaw = 0.939693679517;
    msg.custom.assign("UFQGOBFANVLHTJWDHCPLWNYAXRA");

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
    msg.setTimeStamp(0.989825516237);
    msg.setSource(32444U);
    msg.setSourceEntity(247U);
    msg.setDestination(34839U);
    msg.setDestinationEntity(151U);
    msg.timeout = 32217U;
    msg.lat = 0.526964371531;
    msg.lon = 0.0467240986205;
    msg.z = 0.207714211636;
    msg.z_units = 88U;
    msg.speed = 0.695685555859;
    msg.speed_units = 107U;
    msg.roll = 0.268773636119;
    msg.pitch = 0.149430831702;
    msg.yaw = 0.31875358314;
    msg.custom.assign("BMYWANKZIEFFRGBEOPHHCNUARYELRYGITXOWXINTHDKSSKJNIGBPGYWKYZEVTFZGQRDSHCDRMFLNDVTPLZXJNKDQHJBLGDADPBCCEHUWFVZNHVFRP");

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
    msg.setTimeStamp(0.583294142568);
    msg.setSource(48533U);
    msg.setSourceEntity(145U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(199U);
    msg.timeout = 56055U;
    msg.lat = 0.202740878005;
    msg.lon = 0.211105827691;
    msg.z = 0.393273413517;
    msg.z_units = 254U;
    msg.speed = 0.583374741907;
    msg.speed_units = 149U;
    msg.roll = 0.633106191468;
    msg.pitch = 0.104284525677;
    msg.yaw = 0.318317250098;
    msg.custom.assign("WKTEEITQJLQLDEABJVTOCSRIXUCLTPKKWJXFFXH");

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
    msg.setTimeStamp(0.54332251948);
    msg.setSource(7794U);
    msg.setSourceEntity(152U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(94U);
    msg.timeout = 46981U;
    msg.lat = 0.313066984032;
    msg.lon = 0.453475996311;
    msg.z = 0.0183872286753;
    msg.z_units = 154U;
    msg.speed = 0.564549795295;
    msg.speed_units = 39U;
    msg.duration = 63792U;
    msg.radius = 0.878694070818;
    msg.flags = 34U;
    msg.custom.assign("RIFWLTHNJFEGQZGKJCRFQBZKRQEZHUHHQSIZNKXTZXXHWNUCWNDMGVYAYRSEMSUKZWDVKWUKTNAVCMPNUIVWFYJQACOAPOSSDOTYFQSJOUCOFKYZIEYPRGDLICATMBHMPIKPYMQWEPKCNYLRNGPGSCIXBUHCJXAVSYIJUXABTFDBFHXMBJEOZVQBE");

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
    msg.setTimeStamp(0.293299703746);
    msg.setSource(34601U);
    msg.setSourceEntity(170U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(181U);
    msg.timeout = 8566U;
    msg.lat = 0.915380826558;
    msg.lon = 0.655525254439;
    msg.z = 0.771256611045;
    msg.z_units = 171U;
    msg.speed = 0.480187102398;
    msg.speed_units = 86U;
    msg.duration = 10258U;
    msg.radius = 0.0410211633609;
    msg.flags = 135U;
    msg.custom.assign("VSDAUDGAFYTJVMQAVFAEKSOKEAYKZJKHXFQHMCEIHFBNDGRJNCZZBFHLTCFBGLYQOMDVWN");

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
    msg.setTimeStamp(0.735978955865);
    msg.setSource(46510U);
    msg.setSourceEntity(119U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(97U);
    msg.timeout = 15590U;
    msg.lat = 0.0112819369249;
    msg.lon = 0.187658934289;
    msg.z = 0.30985649508;
    msg.z_units = 172U;
    msg.speed = 0.534467505806;
    msg.speed_units = 200U;
    msg.duration = 14949U;
    msg.radius = 0.190039518865;
    msg.flags = 243U;
    msg.custom.assign("QWVCQIQHZYFERJRYCEPTURSLGMKMJADCODMDVLWZTWJNYHNRWEBXOFVAAOXRVFSTSICYRZIPQODGWPNLFLQNUCSVTZVGPVMH");

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
    msg.setTimeStamp(0.124613033613);
    msg.setSource(54899U);
    msg.setSourceEntity(19U);
    msg.setDestination(42046U);
    msg.setDestinationEntity(0U);
    msg.custom.assign("EUTZWVOMSUWSDAXANDHVCOFFKMFQZOJWZJMSSRFQCGEHYEGMXPAHCPGJCTTFVVCKQPSGEJIOOYRKBMAHERMKUCWTHVADLGKGIYEFOWPILOXJIVNZPBRJDBTAQBEMQCEUAPNYGTDYBBPTGB");

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
    msg.setTimeStamp(0.00652245977776);
    msg.setSource(64138U);
    msg.setSourceEntity(241U);
    msg.setDestination(37592U);
    msg.setDestinationEntity(239U);
    msg.custom.assign("CBFXDEDZTCUXZEWQRZFWSOFOQVSEZLFHBYCRNPZIAOTXKVMRYDQKNLWDKJOIHSPBEXIOWTQCFMIGYLDPOEUMOBJHAQPSNZIHNWJDSDKILGXTVXWEWDYJNPOCGBUCLIZSYRGUBLUNLESCVBZVNDYWPUVNMTMOTGLPK");

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
    msg.setTimeStamp(0.0845590847874);
    msg.setSource(21071U);
    msg.setSourceEntity(200U);
    msg.setDestination(38732U);
    msg.setDestinationEntity(0U);
    msg.custom.assign("XODKUQYKYRVLVVXRZAGBPNPYKAKKGMRTZZKHBFIJOUWFXSEODKHXVEULFCRRWTLYCGICCUZTJRHZQCEWEYPCEFITZFXDGWKMSMDTMUEVNQUPJTBANBHPMZHDBYXSWNPILSODPZQGQZETFXROIQBBTNOIFWBBGLCHOFKSMXLVIJVYGIUFCWLNDNRSCEYINHTWDJYAJRBJGLY");

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
    msg.setTimeStamp(0.0778406649437);
    msg.setSource(16790U);
    msg.setSourceEntity(115U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(108U);
    msg.timeout = 64091U;
    msg.lat = 0.376512821322;
    msg.lon = 0.444812272398;
    msg.z = 0.297171695391;
    msg.z_units = 129U;
    msg.duration = 31686U;
    msg.speed = 0.252973270421;
    msg.speed_units = 113U;
    msg.type = 14U;
    msg.radius = 0.102039414631;
    msg.length = 0.974145130435;
    msg.bearing = 0.167646091577;
    msg.direction = 196U;
    msg.custom.assign("ODPPZBVJNELKFW");

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
    msg.setTimeStamp(0.526493148549);
    msg.setSource(36447U);
    msg.setSourceEntity(133U);
    msg.setDestination(56325U);
    msg.setDestinationEntity(118U);
    msg.timeout = 41366U;
    msg.lat = 0.0280243827806;
    msg.lon = 0.706345682582;
    msg.z = 0.308932976893;
    msg.z_units = 38U;
    msg.duration = 4700U;
    msg.speed = 0.54740618185;
    msg.speed_units = 226U;
    msg.type = 116U;
    msg.radius = 0.0737964494044;
    msg.length = 0.213955249338;
    msg.bearing = 0.607870223665;
    msg.direction = 61U;
    msg.custom.assign("URJFOGSSENZCCKRATBGYKPRWZDUVTICPQEKEXQMRLEIXWTITNPBBHBBXFGETCXHANBUXMKBMDYMJAOVNVQBHPGZHWHQHGOWLY");

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
    msg.setTimeStamp(0.431540124899);
    msg.setSource(46343U);
    msg.setSourceEntity(147U);
    msg.setDestination(18249U);
    msg.setDestinationEntity(46U);
    msg.timeout = 39962U;
    msg.lat = 0.159464661183;
    msg.lon = 0.22282238355;
    msg.z = 0.630722459002;
    msg.z_units = 58U;
    msg.duration = 28108U;
    msg.speed = 0.502737148414;
    msg.speed_units = 89U;
    msg.type = 10U;
    msg.radius = 0.920245646955;
    msg.length = 0.600461060215;
    msg.bearing = 0.690103426738;
    msg.direction = 169U;
    msg.custom.assign("ZASPUOPXYIKFBTVBJSSPLQFRWGEDEEATCFFTZIIIVTMJQDXFSWGACSCTOZYZDHKUICDCASRYQRHEEDDBNCCOFCAZPLMHNSLGYKJVQMVEHCKMKDFTKLNUMVPRGUOMO");

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
    msg.setTimeStamp(0.770679979551);
    msg.setSource(16609U);
    msg.setSourceEntity(154U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(86U);
    msg.duration = 15835U;
    msg.custom.assign("NXDLGMDDUDOTKQCFKCZWDPEYBVCCUXGSCIQUXESKEJSEWQRAFJSLYYTUSIHAZUMFSNOCREFZTYRIJADSSBDHLRWBVBRYKXGEKTLIFIPGNMTXKHNNHHWURIABTOXGLHJOPQLWXSYBTBWZJVEYVQVMNZKSJOGAJAZQDFMVHTVZVKWGLIYCFZOPUPTETXYRLOWCZPGPKRDV");

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
    msg.setTimeStamp(0.808432317548);
    msg.setSource(34749U);
    msg.setSourceEntity(67U);
    msg.setDestination(62741U);
    msg.setDestinationEntity(59U);
    msg.duration = 5995U;
    msg.custom.assign("CBHPPHXARWSQLXLEWORRTVPKABNWMGCMIVYOJEHEVSWFEMVXANLHFYIPSCOZRCITQMBANQJKQLJJEZJOPCHQGXA");

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
    msg.setTimeStamp(0.699491196901);
    msg.setSource(25355U);
    msg.setSourceEntity(61U);
    msg.setDestination(19445U);
    msg.setDestinationEntity(86U);
    msg.duration = 22019U;
    msg.custom.assign("MYVWRDFJSJPWKAUFGIXEFXDSBOONONOOHMYAGKTSYKKTLTGWVWVPOBUWZLPLVAXOZQFSVMTMRFGXDKYQJNIAZLKDYEUZLJSBHEMCTULVZPHBUAIRICIFZUQQZPJXUQBPBCTPUFQHHQFVR");

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
    msg.setTimeStamp(0.234785156161);
    msg.setSource(5626U);
    msg.setSourceEntity(142U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(31U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.41940558161;
    tmp_msg_0.start_lon = 0.854362144111;
    tmp_msg_0.start_z = 0.117249201795;
    tmp_msg_0.start_z_units = 149U;
    tmp_msg_0.end_lat = 0.609988019344;
    tmp_msg_0.end_lon = 0.308270007802;
    tmp_msg_0.end_z = 0.429882964289;
    tmp_msg_0.end_z_units = 133U;
    tmp_msg_0.speed = 0.703893223345;
    tmp_msg_0.speed_units = 182U;
    tmp_msg_0.lradius = 0.0688623020457;
    tmp_msg_0.flags = 136U;
    msg.control.set(tmp_msg_0);
    msg.duration = 4900U;
    msg.custom.assign("ZSSPLFBWXDYZJATWPGECXLUAHLWZUCFVSYGNGQMCTIQEOKEAICDNGCIKIRFDULQSDBMKXBSVETBVSRVRPHLJHUNLQRLNMYWATSWQMVBJHBMXGKAIUWYXFHANJHHZCULCMNGBOOIHWNWNOMXYTIESKQJW");

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
    msg.setTimeStamp(0.295156378176);
    msg.setSource(31375U);
    msg.setSourceEntity(118U);
    msg.setDestination(15379U);
    msg.setDestinationEntity(76U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.128928254496;
    msg.control.set(tmp_msg_0);
    msg.duration = 11097U;
    msg.custom.assign("DZERYPIBTDXJCQYXBCLOLVGOZQZTLZRMXQYTVBYANLMSMQKNYQXVHO");

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
    msg.setTimeStamp(0.845233556691);
    msg.setSource(40179U);
    msg.setSourceEntity(206U);
    msg.setDestination(19415U);
    msg.setDestinationEntity(32U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.156095576768;
    tmp_msg_0.start_lon = 0.0217161720847;
    tmp_msg_0.start_z = 0.259947853723;
    tmp_msg_0.start_z_units = 75U;
    tmp_msg_0.end_lat = 0.912009736106;
    tmp_msg_0.end_lon = 0.00047517836622;
    tmp_msg_0.end_z = 0.207678648928;
    tmp_msg_0.end_z_units = 151U;
    tmp_msg_0.speed = 0.922928670829;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.lradius = 0.852279903068;
    tmp_msg_0.flags = 41U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53803U;
    msg.custom.assign("QVQTLDJZWOZRVCLDPUJKYXCBYTEKUAXBVJWMXRDFFXTYLUZMNSEPBAABAIJAXGPHPCHSDXUJMAMPICGBZZHMVBWNTVRFDYYNNSQGHBJVSFUNFMKNDNUQHNEJVHXALTRRQOHQNDIUXZVWYGTUNKTUOKZEIOFMWDEPKCQLZWEKMTTESPRLARJGFCXGSVIRBSGFACOCGCXWBHOOYVHIQWYQDKLZSFJPUSRPYO");

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
    msg.setTimeStamp(0.381720547838);
    msg.setSource(28874U);
    msg.setSourceEntity(29U);
    msg.setDestination(258U);
    msg.setDestinationEntity(205U);
    msg.timeout = 48636U;
    msg.lat = 0.203289341935;
    msg.lon = 0.754738401442;
    msg.z = 0.278302918016;
    msg.z_units = 67U;
    msg.speed = 0.758351197494;
    msg.speed_units = 172U;
    msg.bearing = 0.238062148564;
    msg.cross_angle = 0.953709243743;
    msg.width = 0.175747439894;
    msg.length = 0.149980483618;
    msg.hstep = 0.193535151499;
    msg.coff = 235U;
    msg.alternation = 67U;
    msg.flags = 100U;
    msg.custom.assign("QSFCTPZUNRWEAIBTYRWCMDCUXGERMRXUDQLQRMSNCKVANKGERNMPOHVHBKSGIXJCIJQNZFOQLGOSRLHNPUXBDEGXOQOAWWGDVINYACQFJHWWVGOFASFHUXDCDTNFORQCAYSVOJEZYQZZHZOWLHTUKJPYQELAEBJWKMLZUVPYBIFEOJKSIBPJIHLJYZBKMTAFTADNHITIUBGXSSDLVEFPSLUEAVFKMPITYR");

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
    msg.setTimeStamp(0.121389240108);
    msg.setSource(57890U);
    msg.setSourceEntity(109U);
    msg.setDestination(41659U);
    msg.setDestinationEntity(117U);
    msg.timeout = 45521U;
    msg.lat = 0.240539541644;
    msg.lon = 0.306193179759;
    msg.z = 0.611070862333;
    msg.z_units = 96U;
    msg.speed = 0.252421989932;
    msg.speed_units = 117U;
    msg.bearing = 0.483458053796;
    msg.cross_angle = 0.373032139377;
    msg.width = 0.809254670797;
    msg.length = 0.962477551237;
    msg.hstep = 0.10252324923;
    msg.coff = 56U;
    msg.alternation = 201U;
    msg.flags = 247U;
    msg.custom.assign("KUDODBMFCYOHRZGENUROKTTCADCIXHHMFXYULNRNWPQPPOMKXLMSEEOXHFEAEYFHZDBGZAHFUWCYDKKAEANABXHRTQPTVJIRXWZCHNZLPKOIBHIMVTNGYJLWCNCTRBSFVWGPUSZIIQMJVJQIOFGBSGAIKSBGADNKQLNJLEXVVCGYZVMSJKRDQQDHYYZJRGSKDPMSALWYFEUORDRIXT");

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
    msg.setTimeStamp(0.806730370158);
    msg.setSource(43644U);
    msg.setSourceEntity(55U);
    msg.setDestination(9730U);
    msg.setDestinationEntity(95U);
    msg.timeout = 60951U;
    msg.lat = 0.152526177753;
    msg.lon = 0.467257770441;
    msg.z = 0.214602948354;
    msg.z_units = 23U;
    msg.speed = 0.575931797308;
    msg.speed_units = 188U;
    msg.bearing = 0.685786053476;
    msg.cross_angle = 0.403350856591;
    msg.width = 0.489207164968;
    msg.length = 0.332748481478;
    msg.hstep = 0.466465698502;
    msg.coff = 207U;
    msg.alternation = 9U;
    msg.flags = 84U;
    msg.custom.assign("CZOPMCGTTKNAQKFYXUPXKRSZEFTFPTCOWXZEWSGZCUARVJNEPYBSMNJEVOAKQACLCXOMPADKQEZIUATOUXMEKTLLNIFPDYKVQSUQVMBPLSUSIUXQQFXHMWGXSHLGD");

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
    msg.setTimeStamp(0.118667408961);
    msg.setSource(57752U);
    msg.setSourceEntity(180U);
    msg.setDestination(48519U);
    msg.setDestinationEntity(48U);
    msg.timeout = 60009U;
    msg.lat = 0.672440014073;
    msg.lon = 0.182753894832;
    msg.z = 0.731020741476;
    msg.z_units = 245U;
    msg.speed = 0.0366464331556;
    msg.speed_units = 221U;
    msg.custom.assign("KBPEXOVQJKAHXXJCODBHAZYHAEFGNQLHNHZIWLJNBMAEWUCJPAPVKXRKYRHGSLIPGXJXCKPFIWPCGFMIQBOGNESINLBRWEPTMZQGRTXIRAZYNIMKEFUYL");

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
    msg.setTimeStamp(0.34985279142);
    msg.setSource(14361U);
    msg.setSourceEntity(196U);
    msg.setDestination(5122U);
    msg.setDestinationEntity(238U);
    msg.timeout = 31315U;
    msg.lat = 0.688753563229;
    msg.lon = 0.401005863705;
    msg.z = 0.765199011088;
    msg.z_units = 69U;
    msg.speed = 0.0696755264444;
    msg.speed_units = 117U;
    msg.custom.assign("SPUBGRHYKSWGJOWKAQESNJCVJVSFMDVBYPIMFWKBXJZOEZCSONLEZDPWXHDJJYAOJLZQXUIWYOQVFRAAFPXYOIRPCALDWSXOPZTCLSUGJVLRTAMIIBLKVFIGWSSNTZEDEUFIEETURGT");

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
    msg.setTimeStamp(0.045352883262);
    msg.setSource(29225U);
    msg.setSourceEntity(119U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(89U);
    msg.timeout = 10530U;
    msg.lat = 0.375719162655;
    msg.lon = 0.875398474034;
    msg.z = 0.612012235836;
    msg.z_units = 25U;
    msg.speed = 0.476080198984;
    msg.speed_units = 211U;
    msg.custom.assign("KSVIHEMLWSECGUBUSSBNCARNQFHKQAGSZAHKBIQOLONYLFENUKOYTYJTGZTWBZPJKFPBGKDXXJXTQNIGQDHTXRMIQVKEDILSPPWOTHUDCWWCFHZGBRVFUYRQJWLQMRXMARMIUNZMLOPRGENHDVAEVBEGGY");

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
    msg.setTimeStamp(0.238008648733);
    msg.setSource(24518U);
    msg.setSourceEntity(217U);
    msg.setDestination(51663U);
    msg.setDestinationEntity(127U);
    msg.x = 0.012507517426;
    msg.y = 0.0100919237898;
    msg.z = 0.900696786015;

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
    msg.setTimeStamp(0.0401164015266);
    msg.setSource(18581U);
    msg.setSourceEntity(239U);
    msg.setDestination(44877U);
    msg.setDestinationEntity(207U);
    msg.x = 0.778485082303;
    msg.y = 0.706321960282;
    msg.z = 0.365198429798;

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
    msg.setTimeStamp(0.358167745281);
    msg.setSource(10945U);
    msg.setSourceEntity(24U);
    msg.setDestination(5423U);
    msg.setDestinationEntity(234U);
    msg.x = 0.868655181141;
    msg.y = 0.81904964679;
    msg.z = 0.965503346585;

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
    msg.setTimeStamp(0.828124279002);
    msg.setSource(22862U);
    msg.setSourceEntity(144U);
    msg.setDestination(4826U);
    msg.setDestinationEntity(140U);
    msg.timeout = 29158U;
    msg.lat = 0.364955154115;
    msg.lon = 0.148152600644;
    msg.z = 0.795251337534;
    msg.z_units = 71U;
    msg.amplitude = 0.242208784074;
    msg.pitch = 0.413613941049;
    msg.speed = 0.729321598648;
    msg.speed_units = 138U;
    msg.custom.assign("QFSHCFQDFPIVENVFYXWGDSTMLSTUXSTYAZCTUSLDWDXSBNQLDLZEPQVDXLATAZWEJPVDXTWOTRAMVLGOBBOFSADIZNIK");

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
    msg.setTimeStamp(0.952799347144);
    msg.setSource(47391U);
    msg.setSourceEntity(164U);
    msg.setDestination(60070U);
    msg.setDestinationEntity(206U);
    msg.timeout = 31694U;
    msg.lat = 0.211505484005;
    msg.lon = 0.700720676164;
    msg.z = 0.87023945205;
    msg.z_units = 11U;
    msg.amplitude = 0.0152240028538;
    msg.pitch = 0.52630220556;
    msg.speed = 0.987168754701;
    msg.speed_units = 14U;
    msg.custom.assign("IGRMRWYEHFSSRKRKZIZJUUYGHKFNFGHFNSAOWPDQRYSUINWLJCNVOEAPVSPOCUGWOAYLTFUJQJEMQNWDTHZFWAAKBFFNRBTCBCFNHVJMLLOZKQPXLLELGBBMLFIVIQZIMUXPXOZKIDBZIKOPGSDWNTCQHBCQAOXOXPVQJDMJCCRWJBABUXMXGJKDZGVETXLAK");

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
    msg.setTimeStamp(0.767367929932);
    msg.setSource(56547U);
    msg.setSourceEntity(30U);
    msg.setDestination(26975U);
    msg.setDestinationEntity(194U);
    msg.timeout = 6913U;
    msg.lat = 0.475500261189;
    msg.lon = 0.600909852615;
    msg.z = 0.277169719631;
    msg.z_units = 102U;
    msg.amplitude = 0.524704439174;
    msg.pitch = 0.463196116525;
    msg.speed = 0.80807403495;
    msg.speed_units = 30U;
    msg.custom.assign("VGCADTFYABSBHQRJZIZVYBRSCIKHARDMOMUMMSRSUQKXKGIELDIZKOZBMGPWCASSLVMCBLRFQWDSKKHLTEPJPYOTDPAVGNBIOHCTBOCEYUIHFQXLMXMVJYDOMTWOJJUAEQULHHAYUEZHOQWWTFIZRBPNUFWXPUMJQOKQSKRGPEGCNV");

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
    msg.setTimeStamp(0.541431107176);
    msg.setSource(11355U);
    msg.setSourceEntity(55U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.581925718985);
    msg.setSource(56344U);
    msg.setSourceEntity(147U);
    msg.setDestination(60663U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.984401590278);
    msg.setSource(1705U);
    msg.setSourceEntity(88U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.137740274698);
    msg.setSource(53982U);
    msg.setSourceEntity(67U);
    msg.setDestination(37688U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.435541928783;
    msg.lon = 0.00445006982949;
    msg.z = 0.0449580026296;
    msg.z_units = 80U;
    msg.radius = 0.927341308587;
    msg.duration = 9559U;
    msg.speed = 0.43288195449;
    msg.speed_units = 44U;
    msg.custom.assign("PYHJBFQDNMLTGEBJIRKNIBQDBCHGXTVIZYWUMNYKWDXRQCKGFALDVIFTGPUWNXAZYCSEVACHDRJVM");

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
    msg.setTimeStamp(0.944357590211);
    msg.setSource(50727U);
    msg.setSourceEntity(114U);
    msg.setDestination(63884U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.26650701139;
    msg.lon = 0.260635739171;
    msg.z = 0.624741340905;
    msg.z_units = 35U;
    msg.radius = 0.552311857509;
    msg.duration = 47471U;
    msg.speed = 0.677718687192;
    msg.speed_units = 150U;
    msg.custom.assign("LAQZPYUDJIIWWEXTGANPJATJPWIEVIBFNGYVTMFFFFXKXSCPZUJMKMVXDCLMHEWVHRLTHZPLOGHOCWPUUCBIXSBNTSDORSNNBAOBOWHABQBJPKOSQDALOYKISIEQWMROFSGYINTAXSVXCFQXDEVNYCUNLLVUFYNFKXMDSYKWJPEOPLQJCZQGZTKGHAMZMUKKQBZSHUIUWVMQIRDBZUENBVKZGR");

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
    msg.setTimeStamp(0.782511166212);
    msg.setSource(26688U);
    msg.setSourceEntity(239U);
    msg.setDestination(65119U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.224955326713;
    msg.lon = 0.385837761775;
    msg.z = 0.305502418103;
    msg.z_units = 72U;
    msg.radius = 0.895501177106;
    msg.duration = 29819U;
    msg.speed = 0.604264170427;
    msg.speed_units = 139U;
    msg.custom.assign("WBJNVFARBFFSQHXGFTDRJQSGJOKVTOWBZEAJCWJTOMWVFTLTWBUXQBZCXZTQCZIYSDWPUMYILVMEOYOGZPTZWQXOYIXDSNFNRBGRUGITLJRMNNEBKROHJWP");

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
    msg.setTimeStamp(0.951428983985);
    msg.setSource(41521U);
    msg.setSourceEntity(252U);
    msg.setDestination(30763U);
    msg.setDestinationEntity(72U);
    msg.timeout = 26194U;
    msg.flags = 73U;
    msg.lat = 0.887532196324;
    msg.lon = 0.71202866949;
    msg.start_z = 0.204670851738;
    msg.start_z_units = 168U;
    msg.end_z = 0.530350064116;
    msg.end_z_units = 25U;
    msg.radius = 0.464098946174;
    msg.speed = 0.527585487807;
    msg.speed_units = 50U;
    msg.custom.assign("MREXNVWZAASTCMMQDDIDRZSGJLVJZVNREOXQDATSYRJAVAMQFFZDAJEPSVDBYTVYTZRHEENWDFUWXGUQUPZGJYBCTROYLHSHPTQONUHUUXQLGUNKPCOFPEYJNCNBMZMPHUQBQVOKXSIMPWPLIXBUAIMLRIJJHVQFCDBMCLYBKXDSQKZGGAXXGFGNKTLOWGLYTICISTSDRMWLBIHHX");

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
    msg.setTimeStamp(0.491183292107);
    msg.setSource(19143U);
    msg.setSourceEntity(142U);
    msg.setDestination(20593U);
    msg.setDestinationEntity(142U);
    msg.timeout = 20668U;
    msg.flags = 5U;
    msg.lat = 0.498777352969;
    msg.lon = 0.356890363051;
    msg.start_z = 0.38396263387;
    msg.start_z_units = 181U;
    msg.end_z = 0.322531813208;
    msg.end_z_units = 250U;
    msg.radius = 0.0945443293935;
    msg.speed = 0.805273400798;
    msg.speed_units = 46U;
    msg.custom.assign("SRXFQCFOWAHGBAXLRYFTBKBVQOZPJNGKXOYBMCDQRTEYVCJDZTKUQVKTUGVPLAACWZCIPNROKCUWZLDFTYTAPXNOOOGVPXNOZVEHF");

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
    msg.setTimeStamp(0.115388088724);
    msg.setSource(34268U);
    msg.setSourceEntity(216U);
    msg.setDestination(17408U);
    msg.setDestinationEntity(55U);
    msg.timeout = 24823U;
    msg.flags = 146U;
    msg.lat = 0.688876746837;
    msg.lon = 0.375906528755;
    msg.start_z = 0.503925055878;
    msg.start_z_units = 119U;
    msg.end_z = 0.73238687475;
    msg.end_z_units = 230U;
    msg.radius = 0.251109636384;
    msg.speed = 0.539824894247;
    msg.speed_units = 194U;
    msg.custom.assign("RILODECCRSHO");

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
    msg.setTimeStamp(0.105210913498);
    msg.setSource(55148U);
    msg.setSourceEntity(85U);
    msg.setDestination(48210U);
    msg.setDestinationEntity(87U);
    msg.timeout = 45362U;
    msg.lat = 0.639034728171;
    msg.lon = 0.181651891869;
    msg.z = 0.894598746149;
    msg.z_units = 33U;
    msg.speed = 0.161443380439;
    msg.speed_units = 78U;
    msg.custom.assign("JOTPSAIKMXRLONQLRVZDJVZZBIZZJPKAEDMCOEIETRPOBYGYTZHBWMJGSMMRWITKGTKZCVWBWIAWHLTIFJWRLD");

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
    msg.setTimeStamp(0.558908748184);
    msg.setSource(35437U);
    msg.setSourceEntity(215U);
    msg.setDestination(25010U);
    msg.setDestinationEntity(28U);
    msg.timeout = 24089U;
    msg.lat = 0.00646716892957;
    msg.lon = 0.435563629287;
    msg.z = 0.0496017254945;
    msg.z_units = 26U;
    msg.speed = 0.505739486022;
    msg.speed_units = 231U;
    msg.custom.assign("VASDUYMNAHFEJSKOVTTRHRPWLOBUVFDGVAREGPRBJBOHVNADKZYTYWNCJMWPXDPDFICGSQKCILZJYVECXBYWZRZZIQIFMLUPGIEKJJKYCLMVUND");

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
    msg.setTimeStamp(0.874488563702);
    msg.setSource(64103U);
    msg.setSourceEntity(227U);
    msg.setDestination(35217U);
    msg.setDestinationEntity(2U);
    msg.timeout = 14929U;
    msg.lat = 0.400096000609;
    msg.lon = 0.478789174922;
    msg.z = 0.129169483702;
    msg.z_units = 226U;
    msg.speed = 0.055208862209;
    msg.speed_units = 54U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.41645756513;
    tmp_msg_0.y = 0.994651131141;
    tmp_msg_0.z = 0.881428174428;
    tmp_msg_0.t = 0.383352925238;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JQASIFUPZZWPZNTOOIGTLENIXATGOUIZMVYUDJCNLZCWOFDSAGVVAAKGMUBKHXKUUHARNDNFWOQMJSTRCRXNPYJFTOZUYGEFXRAYHJMXMGCCSEENNJSCADEYTSEPLHOHMU");

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
    msg.setTimeStamp(0.870973483396);
    msg.setSource(65020U);
    msg.setSourceEntity(60U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(191U);
    msg.x = 0.92380239199;
    msg.y = 0.240508785143;
    msg.z = 0.194818216414;
    msg.t = 0.997133025422;

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
    msg.setTimeStamp(0.0275175514739);
    msg.setSource(40294U);
    msg.setSourceEntity(171U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(28U);
    msg.x = 0.0147812025886;
    msg.y = 0.392768756041;
    msg.z = 0.35372562929;
    msg.t = 0.321916029266;

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
    msg.setTimeStamp(0.797836629463);
    msg.setSource(26382U);
    msg.setSourceEntity(214U);
    msg.setDestination(26904U);
    msg.setDestinationEntity(21U);
    msg.x = 0.165221056838;
    msg.y = 0.707845691129;
    msg.z = 0.517142262444;
    msg.t = 0.564236099719;

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
    msg.setTimeStamp(0.678288911743);
    msg.setSource(56269U);
    msg.setSourceEntity(24U);
    msg.setDestination(37255U);
    msg.setDestinationEntity(78U);
    msg.timeout = 42710U;
    msg.name.assign("IPLJOUWJRRFIMCMBZZTCLXOZDOSMBUAMKPSLIDEDTJYVLKLCPUJGLPATDGEHNBYZGKBZXTATWTIKTJSQASWOBCTMZPNGSDYZYVFFTTKVFUOPVGUAXSHIVNUCGYFCWRJNGHSWZOANVLOUUWRBLFKHCFYWNWRJNBUIXEFXKEGEMKAJUJPPRDMDFOXEVYDQEBMHYCILQEMISXSEQSAQGXNRVPWVCMZREIQOJHONHZHGRQYDH");
    msg.custom.assign("TVJFBXLCPCHOAFRRYFYOKOVEGRZULLIAKFRWLZNZHDTLSGFWCIWJQFRKAAFOUGUCZYIOEEVKVIBAINOGWHNITAHPYGSDQBRGXRDZMNCDHJGJBQSCZDUSMJEAHEKNXMCVQPWPSLPDSGJYARVXSOBMYTTUGBCHRWNWCQUZVGZWMXODMDNHUVMDKTTVLBPTIJ");

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
    msg.setTimeStamp(0.789038872569);
    msg.setSource(60559U);
    msg.setSourceEntity(50U);
    msg.setDestination(20399U);
    msg.setDestinationEntity(173U);
    msg.timeout = 50733U;
    msg.name.assign("HWCJULBYIKXQBZAGVJTZXNFQMUNDGHTRBBGVDMCOJLOSMMHCUGKXARGKTTYINNPRPCEDKZKTLFSACHVDRMRYWUGQNNOOGVSAKKCLXPUWZRDTQWFSZNIJXLSARTDBVSWWCJQZHMMEWNHMYJMBHGMJHVCAOVENLHZPPXFZDFTPZVFYUVHDOPFWOIYKXAPBDUESKAJJCTDIZQOWSBXOSBQKEWVUQLLBALLQTGPXYREIREYJY");
    msg.custom.assign("JRPVYESEICMMFYAYWPKISAGFAXZAHLQJHWDAORVOBBJNFVZHFYVIZJSRZCBNDPXHOWNDBHPJZOQFVXSAQRVJLRHKIMSLUQMKWKCD");

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
    msg.setTimeStamp(0.76066721034);
    msg.setSource(46817U);
    msg.setSourceEntity(194U);
    msg.setDestination(22905U);
    msg.setDestinationEntity(121U);
    msg.timeout = 60632U;
    msg.name.assign("PARPSHOHLUDPMEHZICYQVXGPEWKFCIXCRUKBKDLBENQJPMGJYOEFNKKCYRVJGNRIIXOEXBKAHLJHWAGJUDQRUIOFZJLJM");
    msg.custom.assign("GDNYAARLKQWQKIBFMKFWZANMCMLOOVEHBDCOWQWHGIFYTBCTPKOTHLJSOAWRBXTIHINQGLBVNJPIHZRJHMDRJCNHYVZMXSZKSCYSZVRPMJUEDXISPDUUPGVRBSFAXNQSLGIXEPUNVKPXOXYTEAZCDEWFYDIUGUIBNRCXERMBHCJRDJXZUTTUOFWLLOMSZQUBDWFUEBGYSKCLK");

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
    msg.setTimeStamp(0.00552255600096);
    msg.setSource(32921U);
    msg.setSourceEntity(204U);
    msg.setDestination(568U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.816420433418;
    msg.lon = 0.756651681214;
    msg.z = 0.314137088417;
    msg.z_units = 140U;
    msg.speed = 0.254251435056;
    msg.speed_units = 148U;
    msg.start_time = 0.672046536179;
    msg.custom.assign("PELKOIVQPKOBGEEVHGLSJQSRHZG");

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
    msg.setTimeStamp(0.332396503418);
    msg.setSource(22145U);
    msg.setSourceEntity(69U);
    msg.setDestination(25597U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.232672053064;
    msg.lon = 0.593409896548;
    msg.z = 0.228641081102;
    msg.z_units = 170U;
    msg.speed = 0.714663884386;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0214958296112;
    tmp_msg_0.y = 0.634306544035;
    tmp_msg_0.z = 0.774939723131;
    tmp_msg_0.t = 0.992495539582;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0180771569314;
    msg.custom.assign("QIVRJPYBOFHVCAEUWFQSFHJIBNTHHQDRUNWMIVCUSXYWEENQHVZQIPEUHDTFBXEXCUMSFEMFBDRLN");

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
    msg.setTimeStamp(0.108849688235);
    msg.setSource(13087U);
    msg.setSourceEntity(158U);
    msg.setDestination(15817U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.793752467313;
    msg.lon = 0.100616030262;
    msg.z = 0.83483658305;
    msg.z_units = 34U;
    msg.speed = 0.306993929251;
    msg.speed_units = 213U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0530773209224;
    tmp_msg_0.y = 0.316055389619;
    tmp_msg_0.z = 0.319821616387;
    tmp_msg_0.t = 0.236155118064;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61418U;
    tmp_msg_1.off_x = 0.358927355227;
    tmp_msg_1.off_y = 0.997830666186;
    tmp_msg_1.off_z = 0.502792012929;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.162124051087;
    msg.custom.assign("PEVBCJHXSTLPAFOZHKKYSE");

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
    msg.setTimeStamp(0.807653734969);
    msg.setSource(32880U);
    msg.setSourceEntity(244U);
    msg.setDestination(13991U);
    msg.setDestinationEntity(179U);
    msg.vid = 30678U;
    msg.off_x = 0.475251126077;
    msg.off_y = 0.767104913782;
    msg.off_z = 0.783310552445;

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
    msg.setTimeStamp(0.484677220021);
    msg.setSource(10889U);
    msg.setSourceEntity(52U);
    msg.setDestination(27063U);
    msg.setDestinationEntity(213U);
    msg.vid = 1407U;
    msg.off_x = 0.60416756929;
    msg.off_y = 0.235084928285;
    msg.off_z = 0.894142409598;

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
    msg.setTimeStamp(0.322301943642);
    msg.setSource(56447U);
    msg.setSourceEntity(77U);
    msg.setDestination(55808U);
    msg.setDestinationEntity(168U);
    msg.vid = 30626U;
    msg.off_x = 0.708073876182;
    msg.off_y = 0.530219584251;
    msg.off_z = 0.829407182382;

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
    msg.setTimeStamp(0.258457730996);
    msg.setSource(15893U);
    msg.setSourceEntity(110U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.0458132300882);
    msg.setSource(61822U);
    msg.setSourceEntity(231U);
    msg.setDestination(19484U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.400025055039);
    msg.setSource(57813U);
    msg.setSourceEntity(205U);
    msg.setDestination(42712U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.372732309929);
    msg.setSource(45499U);
    msg.setSourceEntity(7U);
    msg.setDestination(19549U);
    msg.setDestinationEntity(185U);
    msg.mid = 38840U;

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
    msg.setTimeStamp(0.370613928211);
    msg.setSource(24563U);
    msg.setSourceEntity(56U);
    msg.setDestination(21086U);
    msg.setDestinationEntity(56U);
    msg.mid = 47523U;

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
    msg.setTimeStamp(0.0568297380971);
    msg.setSource(60136U);
    msg.setSourceEntity(184U);
    msg.setDestination(54160U);
    msg.setDestinationEntity(164U);
    msg.mid = 17074U;

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
    msg.setTimeStamp(0.506813366533);
    msg.setSource(22527U);
    msg.setSourceEntity(208U);
    msg.setDestination(34643U);
    msg.setDestinationEntity(253U);
    msg.state = 46U;
    msg.eta = 8905U;
    msg.info.assign("JJAQLCNQPKZMVVMHARYYJTCIUEOGNZKFSEWUMJOZJFPIMUBLBWIGXHDPMRREOENSLITCZFEHHSPTBDDTZUCCSIJJFQLNQWTYSKCP");

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
    msg.setTimeStamp(0.920098600359);
    msg.setSource(18829U);
    msg.setSourceEntity(161U);
    msg.setDestination(64995U);
    msg.setDestinationEntity(103U);
    msg.state = 33U;
    msg.eta = 29380U;
    msg.info.assign("YDQSHIXHYNJJLMCUWMIZCVKDHFGNTPEZPGLPTAOFHBJIUTUDXVINJUEBOQRKGRVDVYFXOLYPJFBASKPKQJACRXHAUNWSZHFUTIBSMTEKVRDOUWXJODXIZSMOVJGTCZCCSREVCJGYHPMDPFYGSWOBLCCKRLPXUGDLAEW");

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
    msg.setTimeStamp(0.107537168745);
    msg.setSource(22562U);
    msg.setSourceEntity(185U);
    msg.setDestination(28961U);
    msg.setDestinationEntity(188U);
    msg.state = 198U;
    msg.eta = 20337U;
    msg.info.assign("FIOACGWSFZXGCRNUUPVTOOUNZAWNHENBZHVWVR");

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
    msg.setTimeStamp(0.204865611331);
    msg.setSource(5268U);
    msg.setSourceEntity(191U);
    msg.setDestination(13287U);
    msg.setDestinationEntity(19U);
    msg.system = 47608U;
    msg.duration = 270U;
    msg.speed = 0.295851970801;
    msg.speed_units = 134U;
    msg.x = 0.156614902706;
    msg.y = 0.846425429182;
    msg.z = 0.915456902493;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.635239373043);
    msg.setSource(24847U);
    msg.setSourceEntity(71U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(231U);
    msg.system = 26431U;
    msg.duration = 10161U;
    msg.speed = 0.588091343398;
    msg.speed_units = 229U;
    msg.x = 0.278652395108;
    msg.y = 0.205013919602;
    msg.z = 0.817579116432;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.876208815898);
    msg.setSource(19363U);
    msg.setSourceEntity(13U);
    msg.setDestination(8714U);
    msg.setDestinationEntity(49U);
    msg.system = 60333U;
    msg.duration = 54767U;
    msg.speed = 0.969232851444;
    msg.speed_units = 108U;
    msg.x = 0.871205837932;
    msg.y = 0.228442201124;
    msg.z = 0.326180697164;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.293574134576);
    msg.setSource(51687U);
    msg.setSourceEntity(156U);
    msg.setDestination(9507U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.275385564074;
    msg.lon = 0.0384325000929;
    msg.speed = 0.89436056162;
    msg.speed_units = 115U;
    msg.duration = 3057U;
    msg.sys_a = 22931U;
    msg.sys_b = 11655U;
    msg.move_threshold = 0.0791134710848;

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
    msg.setTimeStamp(0.829946761614);
    msg.setSource(48312U);
    msg.setSourceEntity(74U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.487750622612;
    msg.lon = 0.00436557990822;
    msg.speed = 0.643154097631;
    msg.speed_units = 193U;
    msg.duration = 52247U;
    msg.sys_a = 60747U;
    msg.sys_b = 22589U;
    msg.move_threshold = 0.813745629403;

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
    msg.setTimeStamp(0.570072224481);
    msg.setSource(39366U);
    msg.setSourceEntity(192U);
    msg.setDestination(7275U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.0711404932564;
    msg.lon = 0.824615819513;
    msg.speed = 0.570471978477;
    msg.speed_units = 16U;
    msg.duration = 5886U;
    msg.sys_a = 41790U;
    msg.sys_b = 58799U;
    msg.move_threshold = 0.295863708732;

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
    msg.setTimeStamp(0.926091763115);
    msg.setSource(19088U);
    msg.setSourceEntity(145U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.238042720942;
    msg.lon = 0.58127441663;
    msg.z = 0.206629625373;
    msg.z_units = 195U;
    msg.speed = 0.978688102538;
    msg.speed_units = 74U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.938967645463;
    tmp_msg_0.lon = 0.755437626809;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AQJQNSJKXNZALTBCCIXMZRRITJPBEGCOGPMXFBZVKWPZNSDEFPZUXMWEOSGQWNUAFUGJYDLBMZOWPYRXDBICCQRKQBFAZFYOQKFDHIORUVESALYENWIXOXBESBJPKPUVFFMDZITADITJJHXRVMHZAHUNOZWLOGMGVEMLPHEUGWPVKVTGSRYCSKSF");

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
    msg.setTimeStamp(0.302353456178);
    msg.setSource(19256U);
    msg.setSourceEntity(68U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.346949205742;
    msg.lon = 0.462164233869;
    msg.z = 0.499686038749;
    msg.z_units = 36U;
    msg.speed = 0.29899990587;
    msg.speed_units = 250U;
    msg.custom.assign("RYJMACYVYMFMCWRTXTNHTZZCAXKGHDXYLWJGUWCUCUQPBLQVHYKKIHPTUVQBTKOJUFKODSFEFLSPILNUMCHKTLIQEBPMGPSOVBXSSMZHILRXDXZFENNIXUHDIDPSGDNCRGGOITTAZEOB");

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
    msg.setTimeStamp(0.287109699794);
    msg.setSource(36365U);
    msg.setSourceEntity(197U);
    msg.setDestination(22310U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.348257370762;
    msg.lon = 0.881276101545;
    msg.z = 0.292913557993;
    msg.z_units = 105U;
    msg.speed = 0.131815093856;
    msg.speed_units = 180U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1757338307;
    tmp_msg_0.lon = 0.905717720438;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ALAGRONHHODMVBWTKOLPUABRYFULYOQVHSIFDNKVIRGDPHNZWJAFBSBXUEIFSMLIKWRYMZRJWPPDBOK");

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
    msg.setTimeStamp(0.113218409417);
    msg.setSource(8285U);
    msg.setSourceEntity(90U);
    msg.setDestination(56228U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.971637843833;
    msg.lon = 0.995186326128;

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
    msg.setTimeStamp(0.530296859997);
    msg.setSource(59839U);
    msg.setSourceEntity(231U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.958952898712;
    msg.lon = 0.261126873691;

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
    msg.setTimeStamp(0.435689483274);
    msg.setSource(4065U);
    msg.setSourceEntity(105U);
    msg.setDestination(29051U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.114330969745;
    msg.lon = 0.33849649693;

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
    msg.setTimeStamp(0.934717067563);
    msg.setSource(11703U);
    msg.setSourceEntity(149U);
    msg.setDestination(37823U);
    msg.setDestinationEntity(67U);
    msg.timeout = 7448U;
    msg.lat = 0.813003748518;
    msg.lon = 0.932710129508;
    msg.z = 0.639710683958;
    msg.z_units = 87U;
    msg.pitch = 0.21996891941;
    msg.amplitude = 0.186391075476;
    msg.duration = 38434U;
    msg.speed = 0.745179328863;
    msg.speed_units = 12U;
    msg.radius = 0.428256456791;
    msg.direction = 118U;
    msg.custom.assign("XHOJQXQUQPEJKIZSIMOPYMGKKZSWXVTXYFDKLUUBKCNCPWBTVYJRCNAYMHFASSEVNMTLXPXGORQOWHZONPGJXWUVLWUIYDKUNDSBOEVCBJPNBTLMWKMSYLIHCFAU");

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
    msg.setTimeStamp(0.687290529885);
    msg.setSource(48328U);
    msg.setSourceEntity(120U);
    msg.setDestination(1931U);
    msg.setDestinationEntity(198U);
    msg.timeout = 3797U;
    msg.lat = 0.596409572116;
    msg.lon = 0.633041816899;
    msg.z = 0.264219914167;
    msg.z_units = 245U;
    msg.pitch = 0.370946770079;
    msg.amplitude = 0.272884097878;
    msg.duration = 51660U;
    msg.speed = 0.141515618157;
    msg.speed_units = 154U;
    msg.radius = 0.840318641786;
    msg.direction = 99U;
    msg.custom.assign("WGLLTYKKFXISNQULVFQUTINJPZ");

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
    msg.setTimeStamp(0.792534377976);
    msg.setSource(56032U);
    msg.setSourceEntity(178U);
    msg.setDestination(53688U);
    msg.setDestinationEntity(121U);
    msg.timeout = 17172U;
    msg.lat = 0.423112004135;
    msg.lon = 0.0732287453141;
    msg.z = 0.169802936394;
    msg.z_units = 207U;
    msg.pitch = 0.299334731201;
    msg.amplitude = 0.811152690124;
    msg.duration = 34345U;
    msg.speed = 0.392721921542;
    msg.speed_units = 90U;
    msg.radius = 0.269556561;
    msg.direction = 176U;
    msg.custom.assign("TJSXUZNMYAHFESVMOLUMJWPYDRVJBNFZILKABEIMPMCKGZDGRPMWCEVZVVIJFFGCUSTTOPDPRQWFLXDESOTLCXAFQZVYIQDBIFRFCQQUAKHOTHJSBHROUZOAJGXQAFGXGNIFVWYDJUSLRDOTCZTGNPWYWYYRWUCMNKVCNRD");

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
    msg.setTimeStamp(0.0587670207533);
    msg.setSource(48176U);
    msg.setSourceEntity(226U);
    msg.setDestination(6004U);
    msg.setDestinationEntity(25U);
    msg.formation_name.assign("UGZOOAJBBSVVQKYPRDWGHCPLBRMKQZTENVINUAGLGRNIQOVAFDJOXTKVSJFRQRTOSIJBNVKBFJMBKBUNBVWSIWFYMRHEXUCDWAZYHTCJEXVLAHMMXWUYDTZCCQHSCPYAVRHHDZBX");
    msg.reference_frame = 161U;
    msg.custom.assign("DXQYYMHYIVAACGNMITHUCGRZRROMVXCMTBJRDGVHNBVOBZBTLACNVFYVXLUSPDVEPWFJLIUOULXCHAXJWRNGWDOXTEGSZSGKUYPFQSXJKYIZKAMNDDMUQHPRFJJGXPBHWDRMLSPWKLNCDHBCNZLPRAJGRCZUCUEHKWMVPYTLFWQSWIEJQXDETEBW");

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
    msg.setTimeStamp(0.703413974016);
    msg.setSource(28781U);
    msg.setSourceEntity(51U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(239U);
    msg.formation_name.assign("OVHVOVCFRYQXGHWLGWENDFQNAUYEGDHDNFPHWMIIFMGRJKWLYCWUUREYCTUENOLCJGVZHIQTPUVMIRQPOKAXWRBWKSBSXAZXDTKIOXRFIPMEYSTZZYMGBNBXLONJABELPUENHQPZKCYJUBOOQTCRQLTXUFANLJLOIWFQFAKBYZKLDVKGLOMHKCGAKTANSJTSMFVGZADUDPSNJHSECDMWBBRERHYZFWSISVYXSZCUVMD");
    msg.reference_frame = 97U;
    msg.custom.assign("QRHGHEHUEHQRGONPTSZIUAJDTONOQSJKRFARXOGIQJRUDVGZNYGCVMGLBQZFIEKXIMALICREUWTKIUGDYHCESAVYTKYZMGJLP");

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
    msg.setTimeStamp(0.6163754455);
    msg.setSource(46458U);
    msg.setSourceEntity(138U);
    msg.setDestination(30830U);
    msg.setDestinationEntity(115U);
    msg.formation_name.assign("GPNYYWBACAOKKTHGHWZJRHJSTKOYPKIRHSPWEBKRCBYEBERYDDYNSFTJWZZHQVCAABNAXEDPXVJORMLISRXCQAGXMMPSHPMJLLEISFGOOLLNZQWGXGAEKKEQNOUPJVKVUFMJTQLV");
    msg.reference_frame = 236U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37887U;
    tmp_msg_0.off_x = 0.80806982244;
    tmp_msg_0.off_y = 0.338632131542;
    tmp_msg_0.off_z = 0.970262685972;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RJJMPQLITWGXHUMKZCPREONHFUVCFXBKKPILPTSIFDYFVVTOFYEAQSXHYEFEVBRZIZTINAGKQTXZHIXFZHEICTKSNHPUGOLKGQQMARRNTUTUJAIDEVYKQMSUNCNOUSPRBIAWDRVGQXEDBVLYEZVKHBWJDOUQHGWOXUCAOCZVLCVSOCHZLDAAJWWRXDORTQSBWWGCXJDNZWMYELGKZJJBBMSWPPPPSEBACDMTALQGSMNFRMX");

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
    msg.setTimeStamp(0.517539828089);
    msg.setSource(43446U);
    msg.setSourceEntity(240U);
    msg.setDestination(31179U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("OBUXOWKHTARWZZNEORAVTQDNLROMMYHDUFILBIQRQXGTTRCOJHNIKNENWSPUSGQLGQQWPILLBBFTKSMCDSEFRDJTKPWRMUJGYVGDHBMTFSCISBF");
    msg.formation_name.assign("UPLMRJEONTWCPIAZDSYYNBBJTPNWZKAMUZWJQRPCQRDQKPOXFPQNTFQDSYUGWELHEQGGXRTEXAJGQVNXSYOKHYPXUHVRXQNDZDQWMLEAEYGJ");
    msg.plan_id.assign("WTNUSCQGGYFTBYKJOJYIGKYYGVJBPPBXNQSTCEJXKGMBDUZRQHTSSYREHZCSBPIUSGRWFUFPWYFXLHOODPOIQADMEZVWPDRIUJLKOCIGXKUTCVAQTVRIDJMFROLERRRFFWIRBQKLAKALVZZWKNQAXTVGHNMLXBZYLUTDTEPSNXCIQUJEAFZPNJHBNKPOWHQDHLLHVZSFBJAXUTMNKZAMOGAVMDIVUHCEAVFYEMNC");
    msg.description.assign("QJFXFNVRZWXSPQFCXVNYNKYAJRLCAPQOORLIOMOGVIEYRPDEELBQTCSEISCFMNGYYBLDSSRMZODBXJHUVJTHW");
    msg.leader_speed = 0.827008775777;
    msg.leader_bank_lim = 0.890512512251;
    msg.pos_sim_err_lim = 0.213249399793;
    msg.pos_sim_err_wrn = 0.890047822844;
    msg.pos_sim_err_timeout = 27717U;
    msg.converg_max = 0.978711080356;
    msg.converg_timeout = 34986U;
    msg.comms_timeout = 46021U;
    msg.turb_lim = 0.958817270357;
    msg.custom.assign("WONRQJFPPLPJSFJNTTPZMIZQCMYYHVOPSCHUCLCQZIWAGLGRGBWGWWLJBRPOIMRHKNJMQUUPNDYSDSEZHVYRMZXFPUONCSGUIGUNRALMLQSPCVBZFCMRDVXHAKQABTELNQSOAUVHRKFWKEOUZKSEKYYXLGIDIWZAJOUEYVRDBSAEXOGDETJWUAFTFVBVMSMJAF");

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
    msg.setTimeStamp(0.731416065103);
    msg.setSource(24087U);
    msg.setSourceEntity(196U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("YKLMIUUTIEOOGBYCRQETYSWWLBVOUJLYMPBGJFXJGQOKGQOVOTBKHXPIFULACWYQIEJSHXHXKZETNKAGVEYVTKDCQGTADDCRQLCFDTMXUNSXZDSPZPICHRUAINXAFZZNDUEOQLYWKQSJVVYUPRXZMSHLUEMFFHMRSBLDRWNKVRJNWCAEBOMPGVAJVGXWMYRDDRDEONASANAMTUFMT");
    msg.formation_name.assign("SKRILJEUXGKDTSVPMAPIINIHLEJMGQCKDLDWYXLVZBJBEHKOOUKYWRVLFJQEBJODGMEQZTHDMUASBAFRKDVQPGUZNSGQPBUDYGTTACEPLRFFSFOREHQQSEIYPKGTUVZRETTXFZCXYNQOGCWWRVHZJLMNWTWWQZCRCAJWDKPANXCXFZVIBIPPSGNVLQDCTX");
    msg.plan_id.assign("XKHAMLLVTJCVDSIGAASZNYNNGZOHKOLTQBAEUIQYIPJGVUPHOXBJXZV");
    msg.description.assign("FFFULXSLLJYAMKBTUIGCMREGZLIYFGQDKRDZBFSJOFHVXICCRKLCZCWOTOBKRPCRQIZXJESIVDEMFNQOPHHVDIZUTWAIMBPUBWNIJMAUUGYHABHQCSGHJATEUNWQRPTLOIWEYXBNTOSS");
    msg.leader_speed = 0.970849328273;
    msg.leader_bank_lim = 0.309678562211;
    msg.pos_sim_err_lim = 0.146447740937;
    msg.pos_sim_err_wrn = 0.525163959252;
    msg.pos_sim_err_timeout = 51030U;
    msg.converg_max = 0.821193148533;
    msg.converg_timeout = 14043U;
    msg.comms_timeout = 14660U;
    msg.turb_lim = 0.229724041913;
    msg.custom.assign("UFHDWIZVQELNGYLQYPIPVLMBBSUPBWCQMTOSNUUALTIYWNRJDLMDVXDEFXMXDXTBWCH");

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
    msg.setTimeStamp(0.0141655703278);
    msg.setSource(38636U);
    msg.setSourceEntity(176U);
    msg.setDestination(44318U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("TFTUZDNJVOUMCNUMKXGMECLS");
    msg.formation_name.assign("NFLMHSLPGCGCUKADJRXIPBTQJDUZOHFRIOBVMNSGIPVYKCKZOEACEQPNQPMJOAZRCEPAPSDFSK");
    msg.plan_id.assign("RYCRTZAAXRDTFMYKFIIKNNDLUPJLAZCBVNGDOXPBMXSVDETTZHFLPRAFSVMXKSNPHMXJRGWWTOYFWTTVERKUBRZGYNXMHZQDBQAWQTFYOSAEKZVYOIIYHIPQAEDOPBJLDREEHQU");
    msg.description.assign("ILOZMPLAONWLWXUIPHUDOBPXABQPIVHHHEKJZGCOKCUQYMXHMECTGPILGIJBWVBQHKERCCCTUSZTR");
    msg.leader_speed = 0.473120020721;
    msg.leader_bank_lim = 0.699881298499;
    msg.pos_sim_err_lim = 0.227406591297;
    msg.pos_sim_err_wrn = 0.162314947666;
    msg.pos_sim_err_timeout = 34624U;
    msg.converg_max = 0.518918779029;
    msg.converg_timeout = 47956U;
    msg.comms_timeout = 54159U;
    msg.turb_lim = 0.408179881069;
    msg.custom.assign("AWMQMLNGQISDULKROVHORNKWUPZKOWPUEFUJPMGHXXAZSCSVJLVZJBXWPNEVVBRLFDYNKBZYVROFDSCTLQFSTTCIHYJDVHEYNRMKZJEVONBNLXNCKQWNHXHIJCPWLMEYTOGFNATKUQVBSIOFTSPKIEVHGGAFAZRREDTCXGPYBRKALMGJAGAWHYCRXFFEBZEDZQYPZIPSHPMZTJQAYWOWDCXMDT");

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
    msg.setTimeStamp(0.291794023981);
    msg.setSource(10443U);
    msg.setSourceEntity(46U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(91U);
    msg.control_src = 26399U;
    msg.control_ent = 113U;
    msg.timeout = 0.4171174421;
    msg.loiter_radius = 0.457827748599;
    msg.altitude_interval = 0.394020435488;

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
    msg.setTimeStamp(0.716693817261);
    msg.setSource(889U);
    msg.setSourceEntity(239U);
    msg.setDestination(22629U);
    msg.setDestinationEntity(148U);
    msg.control_src = 34532U;
    msg.control_ent = 8U;
    msg.timeout = 0.43821637004;
    msg.loiter_radius = 0.990201120665;
    msg.altitude_interval = 0.878292115789;

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
    msg.setTimeStamp(0.03622957701);
    msg.setSource(46933U);
    msg.setSourceEntity(30U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(59U);
    msg.control_src = 22667U;
    msg.control_ent = 105U;
    msg.timeout = 0.864309029189;
    msg.loiter_radius = 0.453044092465;
    msg.altitude_interval = 0.614200735932;

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
    msg.setTimeStamp(0.344503268724);
    msg.setSource(35596U);
    msg.setSourceEntity(34U);
    msg.setDestination(57675U);
    msg.setDestinationEntity(210U);
    msg.flags = 106U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.660566985508;
    tmp_msg_0.speed_units = 204U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.121647528235;
    tmp_msg_1.z_units = 150U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.42479474784;
    msg.lon = 0.12598818288;
    msg.radius = 0.963042924818;

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
    msg.setTimeStamp(0.405877609781);
    msg.setSource(61006U);
    msg.setSourceEntity(179U);
    msg.setDestination(27445U);
    msg.setDestinationEntity(189U);
    msg.flags = 158U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.720667272092;
    tmp_msg_0.speed_units = 38U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.422161707904;
    tmp_msg_1.z_units = 49U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.385307242325;
    msg.lon = 0.0948323436006;
    msg.radius = 0.709909771328;

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
    msg.setTimeStamp(0.776565742259);
    msg.setSource(14387U);
    msg.setSourceEntity(246U);
    msg.setDestination(36070U);
    msg.setDestinationEntity(194U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.388724884134;
    tmp_msg_0.speed_units = 67U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.554483081331;
    tmp_msg_1.z_units = 105U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0005083515789;
    msg.lon = 0.599377006262;
    msg.radius = 0.706895268092;

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
    msg.setTimeStamp(0.995879559262);
    msg.setSource(25644U);
    msg.setSourceEntity(75U);
    msg.setDestination(61531U);
    msg.setDestinationEntity(44U);
    msg.control_src = 61887U;
    msg.control_ent = 66U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.540149534336;
    tmp_tmp_msg_0_0.speed_units = 35U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.447698105037;
    tmp_tmp_msg_0_1.z_units = 78U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.473542700545;
    tmp_msg_0.lon = 0.702854065935;
    tmp_msg_0.radius = 0.647787845551;
    msg.reference.set(tmp_msg_0);
    msg.state = 108U;
    msg.proximity = 241U;

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
    msg.setTimeStamp(0.162842914647);
    msg.setSource(48723U);
    msg.setSourceEntity(7U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(54U);
    msg.control_src = 2584U;
    msg.control_ent = 13U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 180U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.742756182972;
    tmp_tmp_msg_0_0.speed_units = 17U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.934029642904;
    tmp_tmp_msg_0_1.z_units = 12U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.491765587228;
    tmp_msg_0.lon = 0.214517058246;
    tmp_msg_0.radius = 0.343166098303;
    msg.reference.set(tmp_msg_0);
    msg.state = 120U;
    msg.proximity = 93U;

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
    msg.setTimeStamp(0.811185980948);
    msg.setSource(11969U);
    msg.setSourceEntity(93U);
    msg.setDestination(35962U);
    msg.setDestinationEntity(167U);
    msg.control_src = 1019U;
    msg.control_ent = 107U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 79U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.159871008819;
    tmp_tmp_msg_0_0.speed_units = 182U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0408559141859;
    tmp_tmp_msg_0_1.z_units = 199U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0875061790547;
    tmp_msg_0.lon = 0.230360446586;
    tmp_msg_0.radius = 0.367404162422;
    msg.reference.set(tmp_msg_0);
    msg.state = 157U;
    msg.proximity = 58U;

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
    msg.setTimeStamp(0.0262907600533);
    msg.setSource(20044U);
    msg.setSourceEntity(11U);
    msg.setDestination(36013U);
    msg.setDestinationEntity(58U);
    msg.ax_cmd = 0.594587184058;
    msg.ay_cmd = 0.171364046889;
    msg.az_cmd = 0.606273040604;
    msg.ax_des = 0.392094395252;
    msg.ay_des = 0.601764139495;
    msg.az_des = 0.468580199678;
    msg.virt_err_x = 0.473500859913;
    msg.virt_err_y = 0.0415348948145;
    msg.virt_err_z = 0.750844207049;
    msg.surf_fdbk_x = 0.379885796296;
    msg.surf_fdbk_y = 0.480364437897;
    msg.surf_fdbk_z = 0.72147247391;
    msg.surf_unkn_x = 0.201924159228;
    msg.surf_unkn_y = 0.589064481823;
    msg.surf_unkn_z = 0.335984048952;
    msg.ss_x = 0.762886197135;
    msg.ss_y = 0.0468451596826;
    msg.ss_z = 0.398361328705;

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
    msg.setTimeStamp(0.542599676526);
    msg.setSource(11920U);
    msg.setSourceEntity(127U);
    msg.setDestination(6571U);
    msg.setDestinationEntity(178U);
    msg.ax_cmd = 0.995203979714;
    msg.ay_cmd = 0.652435812461;
    msg.az_cmd = 0.297678772955;
    msg.ax_des = 0.773427865026;
    msg.ay_des = 0.948673396733;
    msg.az_des = 0.774084920817;
    msg.virt_err_x = 0.978999570972;
    msg.virt_err_y = 0.605976956216;
    msg.virt_err_z = 0.9238771619;
    msg.surf_fdbk_x = 0.217677768323;
    msg.surf_fdbk_y = 0.0838710716172;
    msg.surf_fdbk_z = 0.358393509778;
    msg.surf_unkn_x = 0.886449462408;
    msg.surf_unkn_y = 0.509540277306;
    msg.surf_unkn_z = 0.484872915873;
    msg.ss_x = 0.83826781369;
    msg.ss_y = 0.703891355962;
    msg.ss_z = 0.91505404535;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JDSXVCPOFZJOUQOALGSOWUTIHJBZVBJMJBLIMRLPMQSHT");
    tmp_msg_0.dist = 0.91522765367;
    tmp_msg_0.err = 0.274847555439;
    tmp_msg_0.ctrl_imp = 0.708375811477;
    tmp_msg_0.rel_dir_x = 0.228829136999;
    tmp_msg_0.rel_dir_y = 0.275407555925;
    tmp_msg_0.rel_dir_z = 0.201857624902;
    tmp_msg_0.err_x = 0.947551042603;
    tmp_msg_0.err_y = 0.353461904461;
    tmp_msg_0.err_z = 0.80833015329;
    tmp_msg_0.rf_err_x = 0.0835571818516;
    tmp_msg_0.rf_err_y = 0.701913770721;
    tmp_msg_0.rf_err_z = 0.872263294151;
    tmp_msg_0.rf_err_vx = 0.126822748054;
    tmp_msg_0.rf_err_vy = 0.685471102352;
    tmp_msg_0.rf_err_vz = 0.879372914004;
    tmp_msg_0.ss_x = 0.385934314798;
    tmp_msg_0.ss_y = 0.522992511547;
    tmp_msg_0.ss_z = 0.594629599392;
    tmp_msg_0.virt_err_x = 0.392488033844;
    tmp_msg_0.virt_err_y = 0.100494142665;
    tmp_msg_0.virt_err_z = 0.647737667991;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.284032620831);
    msg.setSource(47919U);
    msg.setSourceEntity(179U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(67U);
    msg.ax_cmd = 0.401215713365;
    msg.ay_cmd = 0.483179259461;
    msg.az_cmd = 0.676062856449;
    msg.ax_des = 0.789770971773;
    msg.ay_des = 0.792855765562;
    msg.az_des = 0.304975390571;
    msg.virt_err_x = 0.487543765634;
    msg.virt_err_y = 0.994821928899;
    msg.virt_err_z = 0.283400849755;
    msg.surf_fdbk_x = 0.43709734733;
    msg.surf_fdbk_y = 0.974225296465;
    msg.surf_fdbk_z = 0.983425619627;
    msg.surf_unkn_x = 0.0948487118728;
    msg.surf_unkn_y = 0.432075831772;
    msg.surf_unkn_z = 0.027791640186;
    msg.ss_x = 0.365380028765;
    msg.ss_y = 0.156386285538;
    msg.ss_z = 0.0687616968713;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YTFBDRAXQDL");
    tmp_msg_0.dist = 0.559015159871;
    tmp_msg_0.err = 0.0593752863563;
    tmp_msg_0.ctrl_imp = 0.0308864789075;
    tmp_msg_0.rel_dir_x = 0.670093068914;
    tmp_msg_0.rel_dir_y = 0.998529675344;
    tmp_msg_0.rel_dir_z = 0.654223450464;
    tmp_msg_0.err_x = 0.797969988313;
    tmp_msg_0.err_y = 0.946146449306;
    tmp_msg_0.err_z = 0.0359905676836;
    tmp_msg_0.rf_err_x = 0.489952470598;
    tmp_msg_0.rf_err_y = 0.604740817556;
    tmp_msg_0.rf_err_z = 0.48177272245;
    tmp_msg_0.rf_err_vx = 0.0212203801192;
    tmp_msg_0.rf_err_vy = 0.358508842793;
    tmp_msg_0.rf_err_vz = 0.551259465341;
    tmp_msg_0.ss_x = 0.284147542736;
    tmp_msg_0.ss_y = 0.855419720839;
    tmp_msg_0.ss_z = 0.0663420931673;
    tmp_msg_0.virt_err_x = 0.337674834926;
    tmp_msg_0.virt_err_y = 0.433324617702;
    tmp_msg_0.virt_err_z = 0.515316419476;
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
    msg.setTimeStamp(0.0307788842376);
    msg.setSource(31902U);
    msg.setSourceEntity(214U);
    msg.setDestination(33047U);
    msg.setDestinationEntity(246U);
    msg.s_id.assign("VSJCFGLNWJLQVOSEUNZIZIMOHUKE");
    msg.dist = 0.725759605777;
    msg.err = 0.145339380812;
    msg.ctrl_imp = 0.898853627545;
    msg.rel_dir_x = 0.184018245202;
    msg.rel_dir_y = 0.339071200112;
    msg.rel_dir_z = 0.831197987172;
    msg.err_x = 0.536974549734;
    msg.err_y = 0.309778372845;
    msg.err_z = 0.999564066251;
    msg.rf_err_x = 0.602380280434;
    msg.rf_err_y = 0.753174655823;
    msg.rf_err_z = 0.321516652969;
    msg.rf_err_vx = 0.658263304501;
    msg.rf_err_vy = 0.361023662419;
    msg.rf_err_vz = 0.87408325064;
    msg.ss_x = 0.199701093085;
    msg.ss_y = 0.504326306376;
    msg.ss_z = 0.0425220414428;
    msg.virt_err_x = 0.627247050115;
    msg.virt_err_y = 0.712046988086;
    msg.virt_err_z = 0.988864227061;

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
    msg.setTimeStamp(0.722791705373);
    msg.setSource(8336U);
    msg.setSourceEntity(247U);
    msg.setDestination(8869U);
    msg.setDestinationEntity(167U);
    msg.s_id.assign("YTVHHJSMAAWCLCFBQLWSEIGCQZAYBOZKIQZDMSEMJNGDRIXOABPCDVLUVPUXLRQYGVTJOBCFVMLYDUSYPKNTQEPOBMKDNMVLHROYWQGQIZYTVTEKOGJZWVZXLNQRNJHACZLPXFBPIRFVXPBWARXVNEOEZWUFKP");
    msg.dist = 0.702398708429;
    msg.err = 0.967729029985;
    msg.ctrl_imp = 0.131716603798;
    msg.rel_dir_x = 0.359512540528;
    msg.rel_dir_y = 0.82431855941;
    msg.rel_dir_z = 0.938630920805;
    msg.err_x = 0.773434177618;
    msg.err_y = 0.0650092907969;
    msg.err_z = 0.411767861367;
    msg.rf_err_x = 0.194806467514;
    msg.rf_err_y = 0.199040871077;
    msg.rf_err_z = 0.858977132697;
    msg.rf_err_vx = 0.129044355835;
    msg.rf_err_vy = 0.762647385093;
    msg.rf_err_vz = 0.0091597084219;
    msg.ss_x = 0.537386888758;
    msg.ss_y = 0.942534491012;
    msg.ss_z = 0.79416208835;
    msg.virt_err_x = 0.465554975842;
    msg.virt_err_y = 0.185072630827;
    msg.virt_err_z = 0.832964340688;

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
    msg.setTimeStamp(0.331009119206);
    msg.setSource(55324U);
    msg.setSourceEntity(54U);
    msg.setDestination(17823U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("TWKEAWGPDWARLBPBRCPURUKQISOMABNOWRAJXVQREQANFZAXQYEQFRNGECBHUWETVNZJUTVSGCOCDINIVMBBYSOHNKVGHIQZNCZMXX");
    msg.dist = 0.620725065045;
    msg.err = 0.871308282381;
    msg.ctrl_imp = 0.0927375910048;
    msg.rel_dir_x = 0.949589138562;
    msg.rel_dir_y = 0.724041955346;
    msg.rel_dir_z = 0.565570571908;
    msg.err_x = 0.561314296219;
    msg.err_y = 0.51502401154;
    msg.err_z = 0.713340135486;
    msg.rf_err_x = 0.925719395345;
    msg.rf_err_y = 0.14977044428;
    msg.rf_err_z = 0.650227771959;
    msg.rf_err_vx = 0.818854523636;
    msg.rf_err_vy = 0.421170858156;
    msg.rf_err_vz = 0.181448736084;
    msg.ss_x = 0.818653866789;
    msg.ss_y = 0.165093296948;
    msg.ss_z = 0.149685804177;
    msg.virt_err_x = 0.339366978345;
    msg.virt_err_y = 0.0395248299193;
    msg.virt_err_z = 0.612322204416;

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
    msg.setTimeStamp(0.346029212153);
    msg.setSource(37783U);
    msg.setSourceEntity(200U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(230U);
    msg.op_mode = 70U;
    msg.error_count = 9U;
    msg.error_ents.assign("HEVFRGYQFJTHBYIKFZDPNNSGMLDWKJSODCHGOOKXAAEXGIDDUMUYQAUVHZNCLSMFGWHATBRVENKLRWXMEBMKUJGNISPQDUTNQFJQXOETPHNILECPXRLIWOCIRVGQEMISTOTCDYPZSZVXSTCDQUMAMVHOAEMBZJPFNOTXZPGPQXWUGYFBCKBAKNLVBZFLZFOESKCUWRPXBCYWHSVJAJTALKSRDAWWKTDRVUJXUQHHWBNJRZLIEY");
    msg.maneuver_type = 57769U;
    msg.maneuver_stime = 0.234769479138;
    msg.maneuver_eta = 41167U;
    msg.control_loops = 1783460737U;
    msg.flags = 62U;
    msg.last_error.assign("CSZFJPKUBZUIQJISIBKOAQQSMUWHTWZWKKDGDXHSMNZKDZSMJLGSTBNBRUXZMGOJCVIXOWOGKJFWLDGDOERCB");
    msg.last_error_time = 0.0622990139358;

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
    msg.setTimeStamp(0.302917640551);
    msg.setSource(60864U);
    msg.setSourceEntity(160U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 40U;
    msg.error_count = 58U;
    msg.error_ents.assign("LDQQBIVVOPSWDKZAFSBVXUSPHQOBYWBWWZRLJCUCCXIVDKENXNUCHIBAFOJVZOAYZJMEPNGITLVHADEYGEPKTEAUJICKGXHOPHQFMFXYNQDEWTRDJNEINWMMHTUMCLGLFPRI");
    msg.maneuver_type = 28137U;
    msg.maneuver_stime = 0.645879711357;
    msg.maneuver_eta = 7413U;
    msg.control_loops = 3565341291U;
    msg.flags = 82U;
    msg.last_error.assign("GXURTOKTARYZJBTTRHUYYKFAAFWMPJHEICMUKPGMGEAGYZUDMWLJLUQDVKHZQLWBHEBNOQPISXNJBAVXQIRKZDNYEOXHSWPTCFCMQBBTYKXTWGWMDLDOPGQ");
    msg.last_error_time = 0.2518632494;

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
    msg.setTimeStamp(0.927179915504);
    msg.setSource(62179U);
    msg.setSourceEntity(88U);
    msg.setDestination(46378U);
    msg.setDestinationEntity(71U);
    msg.op_mode = 201U;
    msg.error_count = 215U;
    msg.error_ents.assign("EHWHKQOEGHKJBFIGYAFTEDNFWCJUPKQOCXCZ");
    msg.maneuver_type = 18173U;
    msg.maneuver_stime = 0.843218162179;
    msg.maneuver_eta = 133U;
    msg.control_loops = 2850412445U;
    msg.flags = 77U;
    msg.last_error.assign("RNQUFRUJJPINHZPTDMTQWLNWXKJIORRMYRNDUHURWDIEZDMUJNBZYGVPIFVGVYHQKKOHPOEAMUBAYMSBTQPQJPVDBAESXGBLBMYYPFTZIQYGWIOJFGBXWLVLFCRIBMOFQXUVZTXCBOSXXTHKDNLEPHSMATVCHCYVXVEYUKFRMNOGZHJLVCEOPJSLFOMUYWGEACISEAZDEOKDLAHFGWSNPEGQLXZKCJTA");
    msg.last_error_time = 0.0764865369684;

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
    msg.setTimeStamp(0.206638658351);
    msg.setSource(23592U);
    msg.setSourceEntity(26U);
    msg.setDestination(61592U);
    msg.setDestinationEntity(137U);
    msg.type = 59U;
    msg.request_id = 61839U;
    msg.command = 110U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 42432U;
    tmp_msg_0.lat = 0.994559529747;
    tmp_msg_0.lon = 0.963108224166;
    tmp_msg_0.z = 0.158227274004;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.duration = 24107U;
    tmp_msg_0.speed = 0.486626471588;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.type = 110U;
    tmp_msg_0.radius = 0.267137110501;
    tmp_msg_0.length = 0.707795479887;
    tmp_msg_0.bearing = 0.60629888699;
    tmp_msg_0.direction = 31U;
    tmp_msg_0.custom.assign("KNACUWMCUIS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40367U;
    msg.info.assign("QVRVLSUZKBOJULOKCSKCWWONGLHDBGORSLLYZYDSLGQEARAFVJPQRBNGXWZJNKKHWCFQVOGUHOHUAAEITYWWTURAPCBKNETDQPHTUVHVKMMEIDAXZNMZRYVJNBMRAXBCMBNOCZFHLPEIETZGPIX");

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
    msg.setTimeStamp(0.663918650628);
    msg.setSource(20160U);
    msg.setSourceEntity(51U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(29U);
    msg.type = 253U;
    msg.request_id = 22039U;
    msg.command = 32U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 15441U;
    tmp_msg_0.custom.assign("SAYPPHTLFRATNHGFHOJKEMKNWOSWNYAFIZNOEUYRQKFCWRAK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58620U;
    msg.info.assign("EJVBYZFOVXUMDYQHZANFOMKRTEEQNBIEAUGLPHASPCAZRXNNGCUYHGJOOPWDQDRDYSWZCXPCEDIWULBZFKSCQGEYKXTPNCDSZUJUJUKPVSLTXYFHKIPUYLHIGSSCXBLCABFFGWEHYCKWGUGBJDRTEILJMOQQDXLTRTLWEMKPIZWF");

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
    msg.setTimeStamp(0.418406470814);
    msg.setSource(12743U);
    msg.setSourceEntity(159U);
    msg.setDestination(8332U);
    msg.setDestinationEntity(73U);
    msg.type = 166U;
    msg.request_id = 50345U;
    msg.command = 88U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.394094590376;
    tmp_msg_0.lon = 0.294172352585;
    tmp_msg_0.z = 0.279212276231;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.speed = 0.31389420908;
    tmp_msg_0.speed_units = 5U;
    tmp_msg_0.custom.assign("IMAMBKMDNPJENLPFJAUDBSHTGTAJCTCDEQUBMOWTLEHZLSFYKTMJFQZPFOJCVJCKAKRQGBSZXHVMFWUYDBYSEAOGYPQTGPHRPEULTZBKVBNOPJSXOXAAHUZHEHZEDIWDORPCNFKLVNYDNVNRPQEXTRYLCYAPZDUXILOQIQXJFVCFQEYYKNWSCXCDLMTIICMXVSZWWRFNBJSRFIOGIGLOZWUMODVZNBGWHHUQEHRKLUXYWGVXTUJAGRRVSGI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64968U;
    msg.info.assign("DGHMBNKEJMHFMBNRICVIGALXAWHGJKAROKCSLIDNLUOJCNOWPUSOFWQBSAROTOBLYHFBMLXDXDZBXTGSIGRFZQVZIFIRALNPYANQKHUPPWOAMXXKTEUCLSMCZKYXLWOTMSBUIGEZPHZPTKRCDZVSMEFWCKVPWEWIZXEJRRJNYUTLBDFJPDOQEXGXFQQJK");

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
    msg.setTimeStamp(0.0945012332742);
    msg.setSource(44461U);
    msg.setSourceEntity(18U);
    msg.setDestination(15858U);
    msg.setDestinationEntity(31U);
    msg.command = 41U;
    msg.entities.assign("XCOKKMFKYMNGZOHCRZRWXCGLGRRTJYCTKIEAKLLWULSRRABUD");

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
    msg.setTimeStamp(0.39094595653);
    msg.setSource(34416U);
    msg.setSourceEntity(84U);
    msg.setDestination(9767U);
    msg.setDestinationEntity(87U);
    msg.command = 5U;
    msg.entities.assign("GUWUYXPWQCCFXPENPKDJOWWBVTETAJIMTSUHIVJHREAJTRAAMXVVKVHFXRQYYULGTDFZUUDFSVMEXRBQPJTHMLZPPNBEXJZKPMIINMLLCSZBGBRBNUNIRDXZIUFIYR");

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
    msg.setTimeStamp(0.00861618932531);
    msg.setSource(20266U);
    msg.setSourceEntity(39U);
    msg.setDestination(43828U);
    msg.setDestinationEntity(20U);
    msg.command = 156U;
    msg.entities.assign("FGYWSSNVGUMALUEMPBIWVJNWZMXGANNPDGOECAPUDYJRZSYQHVRAQXYNYCXPHFAKJDYNBZCSKCUSMJDSXPJBITOMSGHZATOZEIIPUHIZSDZHTOFOAWTMLPXOTELIKBDXMLERBZJJFWBCVOQEBQFINFXKTAKSHKHCWHQECKDGVMVARIWGOVILXRQZMAFKKBPDPLCYEWYTLVFKCSQTRFICNLERYTBJXRELZURGDGNUUFQDVPTVWBRHWMYLUJUH");

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
    msg.setTimeStamp(0.710479490631);
    msg.setSource(21001U);
    msg.setSourceEntity(12U);
    msg.setDestination(34202U);
    msg.setDestinationEntity(1U);
    msg.mcount = 53U;
    msg.mnames.assign("BGXRDTANRPCRDHZLOPCGGVCEBYBSZPPMFTQQAWZLBYJJKSURBXFSPLORSEPHLJHMDDFEFOOUTQRYMJXUUURJGKSEDMMDIANHINDNQQYCXIGMICIKNZRUFZNCHVLHUNJEKTTGTOJSISOVALFJDXYPLBVWCKFAIYGBUHQHWZFDAKXP");
    msg.ecount = 95U;
    msg.enames.assign("KYYCGDIZJIVBURWZIFHJWCOPHVGYNJLEUSIVGZTTATAWSBKQCGUTIWPENONNTSVNOGWGXXDRAJFWBXNRLAYXQHTARQDEFLXZVESDEAAMJRMRLOLSGVANY");
    msg.ccount = 58U;
    msg.cnames.assign("NIYCCMYQEWKEKHLFTWZBRWYQGLJXSRCZLHWJPNVVYFNXWZLQIAJUKIHYCXBPYKUVSUUFDGOJMXKEPJZVDMZODDSHBHUXISURGNCZIGDBXQMXJEYWFQTXJFWLRRGSVTTBZOZDUEKVYPRLROOXYRUDTBPVDBONHLDVKAGESKIKSZPDNAJMABQENGVQAREAOTWFFTGEWNSLMHVQ");
    msg.last_error.assign("MNBXVUOJGYMWKDMRGGPILSGITTEMAQWNFJSNNLYCUQBRHKARSVSNQBEZBPHZVXGCJUFMLBFXWPALKYNOQIDRBVZUPMXSWEEOZBJIHWIPYCWEDW");
    msg.last_error_time = 0.258195738362;

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
    msg.setTimeStamp(0.305396399447);
    msg.setSource(45086U);
    msg.setSourceEntity(243U);
    msg.setDestination(10808U);
    msg.setDestinationEntity(21U);
    msg.mcount = 101U;
    msg.mnames.assign("GTPCMVYBHQLNNSVVGJERTUJTPFSCXNOLBAKSVBOPAHIRNQTLWIWWIZHNFMKAZSEUVJIPCCXD");
    msg.ecount = 66U;
    msg.enames.assign("NBFQJLCMRYZPRTVBUHTSGPFMGNXKGDAWRLCRKGFUJVYQMZJJKGCTDTMJOQXEOTNCJEVYLXCEHTCIERABCWNIQGYDAREFHNOVOLBQSDBNNXZKBOOPOJSLWCALPJYAWXZCPQPDAIIGFWBQMXHNOPSSWZRNDAIVZKFVPHKBEWMIFLNKUUBWLVQZEEFJUYGIHLKTTXSVZREDZYLVXOTIMS");
    msg.ccount = 139U;
    msg.cnames.assign("HABRESKADAVBXUUNRRZGLGVBEONXOYFVXKNZJQINXARGGFHILYATOVOFWFPQGMEGDSLKSVEWBIJHFJJWCDTHXPUUXUBILEBVRLOIJCXBQQDYXCVPQZRNIGSYRPWHITDFODKAYLNOQMWSJKYRJHYZYTHKPBDASTTZJDMOVNMPTHNTEDDEWXGZBQBKUMAWLVRSJS");
    msg.last_error.assign("RAIACMPCMEDNQFLPEGRZNKGNXJFPQNKSLHBXVENTTOWCJGHEKPZIXURMRAJJDLLESIBKSJDJSYZYHRCYFZRUZQLHLMEHVVLAVYNVUXMGOIDYVXGQOPXKWBKVDTBFYEUFXGNCCRYPOXTGQGMVTHFNGNQOYIWATOBJQW");
    msg.last_error_time = 0.217084536349;

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
    msg.setTimeStamp(0.596159445492);
    msg.setSource(51956U);
    msg.setSourceEntity(12U);
    msg.setDestination(40963U);
    msg.setDestinationEntity(133U);
    msg.mcount = 160U;
    msg.mnames.assign("XCPXXWNPEYEOQELOTBANFVIOILUEYJBQDKOVFCUSQICLRQQHZBRCJDUJZUQKQYAGSKPVDUZSPXQDYFEMWWHVJMSSVCYPZPGRBOGRTCZRPUVOWDBTNDUDGWHFAYOGVNMJRKEFVFYETKQLTJUYBTGSYWHLESMAJIIHTNLXLBRNZNMSPLOZIGZATRHHSXMGVTXDKAUONMKCSFAWWCBKWXAXIPUODCKZQGENBFHMJLKIJBFJRWMNIDHHRLZMAX");
    msg.ecount = 54U;
    msg.enames.assign("CCWSSFSTRUSARPLEAWNDHVYYJNURMMIKLAOEIRRUXGDGOADGDLEMLOTREXKTSIUYORKPJINEGYQNMAJZOPLQKUYHMVVQOGRKBMVKBHHSCIXBFFEHSPWWKMHZOQVHZAPGBIYXZXQDJDNUNWEZLGHWJVZNZBZSHP");
    msg.ccount = 169U;
    msg.cnames.assign("PRMNBMCSAFIXCBPTUGFZMVZGHFNENIKKIMFHZHZJQWAREDNLAJDMADZXVLMLPJ");
    msg.last_error.assign("XNWHOBWILNXYFCTVNUWQXMYUGEOSCROKUUAHPIJRGRUJHMXZDMBJLOCQNCBKWRFRKWLFFAAOZVAH");
    msg.last_error_time = 0.187292558324;

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
    msg.setTimeStamp(0.313579059916);
    msg.setSource(57581U);
    msg.setSourceEntity(101U);
    msg.setDestination(3944U);
    msg.setDestinationEntity(215U);
    msg.mask = 36U;
    msg.max_depth = 0.702524920117;
    msg.min_altitude = 0.2249216994;
    msg.max_altitude = 0.217388516827;
    msg.min_speed = 0.377054864662;
    msg.max_speed = 0.959680669341;
    msg.max_vrate = 0.00264852565695;
    msg.lat = 0.0421560959708;
    msg.lon = 0.590404968212;
    msg.orientation = 0.147701745082;
    msg.width = 0.989964638087;
    msg.length = 0.104071284508;

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
    msg.setTimeStamp(0.215468228419);
    msg.setSource(32209U);
    msg.setSourceEntity(31U);
    msg.setDestination(58209U);
    msg.setDestinationEntity(246U);
    msg.mask = 95U;
    msg.max_depth = 0.0678390830717;
    msg.min_altitude = 0.464842420652;
    msg.max_altitude = 0.402436084282;
    msg.min_speed = 0.366351463728;
    msg.max_speed = 0.60282180576;
    msg.max_vrate = 0.340919412754;
    msg.lat = 0.0738934208185;
    msg.lon = 0.945474705265;
    msg.orientation = 0.270049669876;
    msg.width = 0.174288592884;
    msg.length = 0.829528181983;

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
    msg.setTimeStamp(0.374811958268);
    msg.setSource(62084U);
    msg.setSourceEntity(74U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(226U);
    msg.mask = 218U;
    msg.max_depth = 0.157234000903;
    msg.min_altitude = 0.25191049952;
    msg.max_altitude = 0.367720367282;
    msg.min_speed = 0.202104383188;
    msg.max_speed = 0.329747823623;
    msg.max_vrate = 0.796166967026;
    msg.lat = 0.345503927929;
    msg.lon = 0.684263322282;
    msg.orientation = 0.182604783773;
    msg.width = 0.537079984214;
    msg.length = 0.0330430091617;

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
    msg.setTimeStamp(0.0924420994116);
    msg.setSource(36569U);
    msg.setSourceEntity(196U);
    msg.setDestination(42875U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.818290330281);
    msg.setSource(40490U);
    msg.setSourceEntity(137U);
    msg.setDestination(37218U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.0146296946945);
    msg.setSource(54588U);
    msg.setSourceEntity(157U);
    msg.setDestination(38008U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.763854295556);
    msg.setSource(19286U);
    msg.setSourceEntity(77U);
    msg.setDestination(52076U);
    msg.setDestinationEntity(59U);
    msg.duration = 4145U;

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
    msg.setTimeStamp(0.522970763717);
    msg.setSource(42264U);
    msg.setSourceEntity(2U);
    msg.setDestination(57596U);
    msg.setDestinationEntity(97U);
    msg.duration = 30550U;

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
    msg.setTimeStamp(0.466913802073);
    msg.setSource(58647U);
    msg.setSourceEntity(168U);
    msg.setDestination(8152U);
    msg.setDestinationEntity(231U);
    msg.duration = 64926U;

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
    msg.setTimeStamp(0.661708754988);
    msg.setSource(32347U);
    msg.setSourceEntity(32U);
    msg.setDestination(36336U);
    msg.setDestinationEntity(136U);
    msg.enable = 61U;
    msg.mask = 531499558U;
    msg.scope_ref = 4059055963U;

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
    msg.setTimeStamp(0.547396095322);
    msg.setSource(764U);
    msg.setSourceEntity(29U);
    msg.setDestination(534U);
    msg.setDestinationEntity(188U);
    msg.enable = 221U;
    msg.mask = 1850895629U;
    msg.scope_ref = 1453621419U;

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
    msg.setTimeStamp(0.714772026936);
    msg.setSource(52851U);
    msg.setSourceEntity(208U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(155U);
    msg.enable = 102U;
    msg.mask = 1767135811U;
    msg.scope_ref = 2256270511U;

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
    msg.setTimeStamp(0.515915419024);
    msg.setSource(31163U);
    msg.setSourceEntity(36U);
    msg.setDestination(5821U);
    msg.setDestinationEntity(111U);
    msg.medium = 237U;

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
    msg.setTimeStamp(0.66514858309);
    msg.setSource(44409U);
    msg.setSourceEntity(45U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(225U);
    msg.medium = 9U;

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
    msg.setTimeStamp(0.92233364025);
    msg.setSource(51618U);
    msg.setSourceEntity(202U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(44U);
    msg.medium = 216U;

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
    msg.setTimeStamp(0.422171912615);
    msg.setSource(3943U);
    msg.setSourceEntity(197U);
    msg.setDestination(15624U);
    msg.setDestinationEntity(127U);
    msg.value = 0.475154122718;
    msg.type = 69U;

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
    msg.setTimeStamp(0.598158371986);
    msg.setSource(1371U);
    msg.setSourceEntity(41U);
    msg.setDestination(44665U);
    msg.setDestinationEntity(89U);
    msg.value = 0.000709480068826;
    msg.type = 125U;

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
    msg.setTimeStamp(0.837625036277);
    msg.setSource(41575U);
    msg.setSourceEntity(101U);
    msg.setDestination(45203U);
    msg.setDestinationEntity(84U);
    msg.value = 0.909487111627;
    msg.type = 207U;

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
    msg.setTimeStamp(0.149107318801);
    msg.setSource(1471U);
    msg.setSourceEntity(205U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(79U);
    msg.possimerr = 0.802251867563;
    msg.converg = 0.769285386665;
    msg.turbulence = 0.660268528354;
    msg.possimmon = 25U;
    msg.commmon = 196U;
    msg.convergmon = 45U;

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
    msg.setTimeStamp(0.259880791617);
    msg.setSource(3676U);
    msg.setSourceEntity(105U);
    msg.setDestination(12985U);
    msg.setDestinationEntity(45U);
    msg.possimerr = 0.618743838285;
    msg.converg = 0.416647797948;
    msg.turbulence = 0.204416165022;
    msg.possimmon = 199U;
    msg.commmon = 114U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.90067637479);
    msg.setSource(32361U);
    msg.setSourceEntity(248U);
    msg.setDestination(577U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.225658000387;
    msg.converg = 0.0966541187139;
    msg.turbulence = 0.836129683489;
    msg.possimmon = 174U;
    msg.commmon = 192U;
    msg.convergmon = 110U;

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
    msg.setTimeStamp(0.992438361622);
    msg.setSource(43474U);
    msg.setSourceEntity(219U);
    msg.setDestination(31572U);
    msg.setDestinationEntity(210U);
    msg.autonomy = 79U;
    msg.mode.assign("TUPPZUSFVXYDHHHQQMJVKCQCVOYKWQQUZOBFRJYLJENGEMXLUEKGNFNSHQBOEISRXEUCNEYAMGSZQMXFBIVHPCILWDEAELABHMKOYTGKTWSVFLDFHWZACWWMCXMCJTSYAQUWISLLZDPSOTENUVFTAERUAYJYQPHTYICMXCKNIDGAZNGVKNXRMRSZBGNKMPPPHROHXOIOUKJXCGLRPBVF");

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
    msg.setTimeStamp(0.55900439092);
    msg.setSource(58159U);
    msg.setSourceEntity(22U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(70U);
    msg.autonomy = 35U;
    msg.mode.assign("JDTVPVWXGFBVQYTGENPMSTDZIWIBHUDBMRJSXBHXTJSMJXWYXZFZKYAHOAXLHKCMAUHUGIGVISQXMENNYQOYCHDDYYWZZLWLJNRKRJKZZFBOHXPOFLEDVRTPLZUFOKSNUTWQJCPVIWEICLJTUUXPYGBCWUIMWNUBQ");

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
    msg.setTimeStamp(0.292804497841);
    msg.setSource(40252U);
    msg.setSourceEntity(44U);
    msg.setDestination(49203U);
    msg.setDestinationEntity(74U);
    msg.autonomy = 168U;
    msg.mode.assign("FILSTKKTMTEWZPRCCZLLPCUGVIGVYALVRYDAGXIAGANGZKJZXYGJKMQSVKKTEWSLQDRGYOOITJHMWPSCXJNSIBHZRTLOAUUVGWFLIBDIBFNCEHACUFZFJOADMUXBTJRNQEZQXPIHHCNWNDPLBOOEKKYQAYBTDMETYZKXMCMNBLRVVSFRGJRJQO");

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
    msg.setTimeStamp(0.974082914995);
    msg.setSource(44591U);
    msg.setSourceEntity(140U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.551332709906);
    msg.setSource(16024U);
    msg.setSourceEntity(223U);
    msg.setDestination(27197U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.534445033259);
    msg.setSource(47113U);
    msg.setSourceEntity(158U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.394674397669);
    msg.setSource(26173U);
    msg.setSourceEntity(67U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("VNOFSCLALMCZACQJBCWLUNZHLMGIUIYKKNMMGVSSVDWZLGZSCEBMJVPOYDSQWEHAPXUVRKDH");
    msg.description.assign("EKWNVQOFBVNGSSDOCOBAINHHXZJKZQXPJEAAMJRKKJBURYGECLXMCSFZGWCVFFKRCNZXUAILUBUPTMWFSXMCGIVHQWVFFZYKHIDVRHUZJDOKPQBLQPAKDMLXEPBQOARKUTLRDSYXMFQAYIJGNQSQWMSFYHGEWBLLAXOBSZDCRWPVNHEDQPX");
    msg.vnamespace.assign("UZIWVAGYDINGEIJLSIJZEHSUQOHXTFEDIJYNNLUPSDUENEACRGRSFQQKCBZ");
    msg.start_man_id.assign("AQFEAHFULUNDSQNBJTVVTOXJDPGZWXBSWIFMJXDWNXMLLPXEDITYZAPZNEQROEBNCFGYNRFPWVKDQRACZJEMEMBFWNWYURQSAKXVXSLTJYAJCUITKWDHCLVZJSDTREHGOBNMOIIIHKJLOGVTCQZFQGYA");

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
    msg.setTimeStamp(0.633781280537);
    msg.setSource(31713U);
    msg.setSourceEntity(198U);
    msg.setDestination(65375U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("KAEMIWPNRECNFWXUJNFBUPDASQZFKMCQTVRMNCZESPEIAJSKTLDLYDSKBYUBHLIPOBHQATIVUSVBJLNRHQWOMMBCUMGXHVJAGRUCGYJOKACGDWSVPKJORFGUIKCDSKYDMIXWLJRWEGOUEELWRZZFFIRTLNBNNXHGXQ");
    msg.description.assign("FEZPICSVZASQVLMVHKGWNCIQGDCXBMIWJDNKYBTVBOERKQJXDRSUWGOBVBFPYRBFKSOEAYB");
    msg.vnamespace.assign("PKGTKWZQYQLXCHYXMBFAZOILULFKPNWDGUCZOUCSBLPCSOSRPATDBVJGSMUHVEGTFOXMXYEHUTHVNQQEYXXBMDPFXUMFVLCJGAEUVXTJHWYIWOEAERDUWCFJSUMSGKIWFLXZCQZOOREMNHNQZIDQTXNAPQIJJEDVBLJVWMYHCOACIEASIRILKBMBNAVKBKHWTYBTGURPTJGKJRYGDOHINCKLRAOQRGYWJFDVNZBSFVDDQNHPEM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EKXIOPCWFBQULFJLINLMCAF");
    tmp_msg_0.value.assign("DTMGZOFIRAKMOOLGMHSIGLQNLDYDMLDNAUUYDVSSJTDWIQEXBRPWHJFNUJOGARCVRVWHDBNVVEBGBQPMFEKVINSZCMAKBDZACACYNTKRJTTFHSRMXUOLHHETSTOCEQLTJZCQXZLBUWYKVKZMMRWOCCGWMWJHQCKFSGRZNXEHQSVBEDPARLKF");
    tmp_msg_0.type = 102U;
    tmp_msg_0.access = 39U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WNTBLJKZNCYCYLEVWFGKRJDVTFNRRQVIUZPOOSSUCGWJFZBOOQHPPTXY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("OCFIAGKRLDCOXYUZXNHAUSOFVBWYBFMJJOXWGOYUIBGVBBQIJCYIQGAGHTGDEQIZVJEXZPZVQWETCJIVTTTSFSKDNWPYAZFJIPGENLHNKNELGFUXMSMAQB");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("TLFDULTMHFAJZFQPFMOVZRZDGVEF");
    tmp_tmp_msg_1_0.formation_name.assign("WCOFAUNEUNWPDYXWERIOCMEMMZPZPRTMVOGQRJUXPQRELQGPVAHTKDIFRCCQOVFMBWYHALMPXALHUFSQCVPGAJLCSYKRTISTYYZYGJFJGNXQTXLMCQFWKOGYKRDHVDQKHGTEFCHNISKZESKBJ");
    tmp_tmp_msg_1_0.plan_id.assign("WMKPZFSJBHQKWVEXXWSPSHKKBSACTRBONHVBRSIXMWMOQJHJTJBZEOVGUQAOJWLEGURYLFVDLAPFDCZTNMNPSPINXLLTTZZWEIVGLQPIDIKMDLDAQECEMCRQIVEUYYRCROHCJKIQGSXAEOYVHIMBKFZLEJCQFLYRBYJUGANZJFCTRBYQONMSCPWXYKGNHPUMTWXZWGRXKYLFIVSODFQHZOUSDUMNEVAVUFPYBAFDXCXATADUNZNIG");
    tmp_tmp_msg_1_0.description.assign("HORFRPZTGHXQGOCVALQVSAQWFWSWZPABXHCWAHPYPMEOBTRRDSEJBUJULUMEONVBXQYYBLJBXNEULCDMMHISZNAFLEDFUSZWTZZRNFPJTDLWVDADEHIFLQGOUNCKKSAEQIQLWIIYVWKPMNVWMNSDRQLKJADBOGRHGBZJFUIRGTOEUMLMSCVCKECJAIKPUXYXVXZTFHCYUPTOVTXSSBGGMNJTNKJGXXHFOJHM");
    tmp_tmp_msg_1_0.leader_speed = 0.999366798411;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.599015727701;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.69083383192;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.499997695276;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 56762U;
    tmp_tmp_msg_1_0.converg_max = 0.630217962479;
    tmp_tmp_msg_1_0.converg_timeout = 3531U;
    tmp_tmp_msg_1_0.comms_timeout = 15940U;
    tmp_tmp_msg_1_0.turb_lim = 0.191073186602;
    tmp_tmp_msg_1_0.custom.assign("TOAGULNKHWHBFRTZCPOGJAEHJQWQQUNIDVQXJKJAYMRODMJKKLCYLXVRTBCMZTURSOHTCEHDWGZIKLUF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::VehicleFormation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.lat = 0.318585254774;
    tmp_tmp_msg_1_1.lon = 0.330765207183;
    tmp_tmp_msg_1_1.z = 0.114186828645;
    tmp_tmp_msg_1_1.z_units = 50U;
    tmp_tmp_msg_1_1.speed = 0.587781334478;
    tmp_tmp_msg_1_1.speed_units = 12U;
    tmp_tmp_msg_1_1.start_time = 0.560243511137;
    tmp_tmp_msg_1_1.custom.assign("ALCJFXWOXQKSGMNDTZINPFGDMVUIJSS");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::SessionStatus tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.sessid = 220189220U;
    tmp_tmp_msg_1_2.status = 65U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("CBMPMLSFKUSXWBSUVJTIIADNXORDRTIZZPVLJMZWPFGYJLRXNPNHCDDUVUIUVACAUEHCSYIVUMRGAHHKLMRZVBQDWFEYKCTGEPQYFOGSBCZDOKWGJFHHEQKFBCYZRTHABNWIPJVNYKKAPGJJFAXTNPKTKLBOOLSWXNMAFQTOHEXOOFENDLCPWSQJGEMAXIZNWIHLMYVUTBIUWZYXJVDQSEQQYERGDDVMNBPKCXURTGZZAQWJSGOQHE");
    tmp_msg_2.dest_man.assign("UEKJKDBKXVCCYHNLWZSFGZOYMUOEFDOIAUYKYJNPUMCYMJARRGKCEBDXMEJACIKHMVGHQMJATCBNWXXQCFQCPMOIOEYPNVRUHFQFZIFYXBJRGVBJGZPWHNHLRYDDHL");
    tmp_msg_2.conditions.assign("LNGCUOELYRKGMBXBQJQBRYOCAAOBSRPBSDNZTPYHZPWSKZFYQNFLLDEUSHKRCYDXNSCPOXERILKQTTZJYWRPPDAVCTWUNWGKUMMBALRNOHVQTTXLCUEFQHJPOCPFVAH");
    IMC::AcousticRange tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.address = 211U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::TrexObservation tmp_msg_3;
    tmp_msg_3.timeline.assign("IRVUAOEILCQTQPWTAAUYZHEJHJUKMNVRPBXLBIEFYOGQSORNBHRGYLCPYTMGOKMPKEOXAYYHQPTQUBZUUUQBMFTBL");
    tmp_msg_3.predicate.assign("HZYMGYRFYSCFIFXGBSHNDPPEHKDLZFIXVDMFLZAJTKWEZRJRV");
    tmp_msg_3.attributes.assign("WHUVFAGFJBTPTQOJMRHVBOIXEICRGJYWHORTKCVMXJPYXGUOKLLPXQAKRMNOOLNPMLUQUSDT");
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
    msg.setTimeStamp(0.302905458516);
    msg.setSource(21160U);
    msg.setSourceEntity(79U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(219U);
    msg.plan_id.assign("TJICVDKDHGEGWPIBMMVSAHXNZEZPFQGOVDAPZWUTFQMKADRTRJLLYDKOGRLYQPMSWUYUKTHTDFIQPQYCXBSPRMBVIEFZWSJGFJCDUSIQPABXCAVZKUEITYNQMUAKSMZCVBTYHAEWHFJEABNICKOIWPLXHJSCKRUQXQOFYOLNNBEOGGUZHOLAGUQWFRMRWXLWZDGESKCTRLAYVRIEJDUZXXJJLLNYPBTCVMO");
    msg.description.assign("LYNNSZIJOCRIBVYXWBFKWQOWFFUMKQJAVWKHFSBAMFNFBDWKKEJHUICPKLVQZFVWTASAWVDQTPWFIJHRGVEVXISZCGRCRGMRAIEXRTSMPCPPNDNTJEBDAQXXF");
    msg.vnamespace.assign("LBOQKSUZEVCCRDMNJDVNXWJLLZIEBCQKMIFCCREQSVZEPWGUQFXHMURZQNTBRINXMKMCODSEYFPARBJHEPSGTKHJFTYZZLFJYPCDNDJYTGULCUHXTZFZXXIYBUVZIYUQWFDKNHAVWHGMOVUYLHDGQWVCTVINBRDIVYELTRKAPTAXMGILRJAJSVSRBQMQFO");
    msg.start_man_id.assign("WAJKWZQQNVKYEGMBLNIYTSLPMWRHJEHSURIUPG");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("QQPURXTXPWENRQBOWDHVCWUIAIZLJZUGJZ");
    tmp_msg_0.dest_man.assign("LGUIHMGSHBOTEWOHBBDIXCGADUNYPUXDVWRNOPDKBUGKJXQTCYLMOQCQFQRYNYPKFIVOZSPVAFYJGYEKIUCZZFEQJ");
    tmp_msg_0.conditions.assign("HVNMCBWTUWJTNVDPKCLCRTUSBKXFFBPSAMTNVANGSWEBHLIPRSDHHAEAYEXSIGWWDUTVFZOMCFINQNYSALIPFVYSJRO");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.229714563877);
    msg.setSource(12017U);
    msg.setSourceEntity(45U);
    msg.setDestination(41206U);
    msg.setDestinationEntity(185U);
    msg.maneuver_id.assign("OIHWZSOWNYPCDZBYZBRRIQWGFLQEBXLPZIVEKOVXRUHJKT");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 58580U;
    tmp_msg_0.custom.assign("VTRRYMFLWSHMUAJUXBAKNJAEXWBQBBKPUHSNNDUBDIEFXTERCMJKKWOHUEBYCWDFJKZHGHDXPNSVKQVQOPGQJPTVIOSHLYAILDGCAPVREYXTWFJUQZSMEMUTCNNFZALLMZCELZGBOMLOSFQGIZOYDZWHOGK");
    msg.data.set(tmp_msg_0);
    IMC::FormationEval tmp_msg_1;
    tmp_msg_1.err_mean = 0.0663967897575;
    tmp_msg_1.dist_min_abs = 0.273886997375;
    tmp_msg_1.dist_min_mean = 0.582761179866;
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
    msg.setTimeStamp(0.244915467429);
    msg.setSource(45575U);
    msg.setSourceEntity(135U);
    msg.setDestination(58003U);
    msg.setDestinationEntity(10U);
    msg.maneuver_id.assign("YBBDAEDZUSDKXWRPWVHDWVOELHXRDKCAESKPYNCT");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 6299U;
    tmp_msg_0.lat = 0.265497816461;
    tmp_msg_0.lon = 0.388398822585;
    tmp_msg_0.z = 0.967649664099;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.amplitude = 0.976160017385;
    tmp_msg_0.pitch = 0.581886595776;
    tmp_msg_0.speed = 0.549903701788;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("DOQXVCFIBFIMPQMGJQENQPVYUVWBWBJRTQJFFVTFNYAJTOQLNCQAGBBDIWTCOGSGHSNKQEORAERRSFBMCGMWRVVLHQPAM");
    msg.data.set(tmp_msg_0);
    IMC::SmsRx tmp_msg_1;
    tmp_msg_1.source.assign("DIQQDMLXXTERTBPHVWMZMESTLPYJNFYXJMHSGXGVHASGCXFUQHCURHKZNWBINZAXMDCLZZWTFYIMTRQLSOVJFRETCQTBIGUJVUHQTADKBLLPWUNGAVYHFFSDGOUDRMRFWMMRKCUEZQIPYKLWXOUVIYRNCFXJAEZKPKOFNCBWEXRAOAOKSBICPULKLBGSLQYCJRXJJHQAAVWKZPJNNFOYGJPHEIW");
    const char tmp_tmp_msg_1_0[] = {-31, 122, 2, -114, 33, -64, 105, 76, 82, -110, 84, 93, 21, 103, -98, 107, 62, 20, -28, 21, -56, -13, -23, -91, 76, 54, -30, 29, 121, 39, 81, 16, 124, 117, 35, -25, 62, 96, 6, 15, 105, -115, 26, -64, -121, -97, -60, 32, 17, -47, -97, -33, 23, -45, 87, -116, 42, 57, -86, -48, 107, 18, 30, -61, -91, 50, -81, 108, -5, -34, -66, -83, 99, 80, 12, -110, -26, -49, -34, 19, 92, 40, 5, -70, -117, 112, 0, -113, -95, -15, 117, 31, -24, -100, 0, 117, -26, 62, -41, 118, 68, 30, -94, -63, 122, -97, 20, 122, 84, 28, 47, -76, 27, 88, -75, -90, -9, -23, 97, 94, -94, -6, -13, -107, 113, -6, -125, 83, 63, -44, 105, -118, -86, 122, 111, 47, -64, 38, -35, -28, -98, -38, 42, 103, 91, -93, -50, 79, 50, 15, -81, 101, -114, 12, -63, 125, -115, -61, 3, 80, 67, 95, 81, 71, 123, 125, -29, 50, -34, 105, 68, 124, 112, -82, -62, -93, -112, -100, -37, 126, -68, -19, 85, 112, -16, -49, 5, -50, 123, 122, 35, -46, -36, 38, -119, 11, 123, -109, -90, -79, -49, 55, 61, -28, -118, 2, 113, 28, -89, -19, 3, -72, 17, 104, 89, -112, 125, -51, 120, 6, 91, -60, 2, 49, 4, 95, 96, -49, -92, -12, 83, -55, 12, -1, -114, -8};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.569477382206);
    msg.setSource(9326U);
    msg.setSourceEntity(86U);
    msg.setDestination(10432U);
    msg.setDestinationEntity(29U);
    msg.maneuver_id.assign("HKKNDUNAPRLCARMMVQPQQHTTKWKMECHSHNULRWURQHIOCFZBQHXMNVNUJDJQOEJQLBVJVXEATLKDWHZTITZYVEHGAIKLPUEAIORGUNCLKGTFYRERUSSRWQPLWSLOMXFPEKBXJTKFDWXYJNPHVZCTVQIZWLXOAGOWUFMDWDFLDNOSZEGSBMKRVAYOYFGXPISJBMHINCIBQUCIIE");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 34408U;
    tmp_msg_0.lat = 0.352144361674;
    tmp_msg_0.lon = 0.035182178936;
    tmp_msg_0.z = 0.411360783896;
    tmp_msg_0.z_units = 119U;
    tmp_msg_0.speed = 0.165798521718;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.custom.assign("UHGZCHETMXIFYFVQHRLDEOCXPWNARDFTKLZMTBLDUCFMVAYMEHWEADXCJIZNOEZOQAPFVDLXLSIACSNHVQDWYBJDQPBRASZTRANFTOXNCSSUMNGEQTHERUTKVWPFTGSKPZOWNRDCBIQHWVDEWGAUMJULXOBQHSKCVZVWGJLUGIXX");
    msg.data.set(tmp_msg_0);
    IMC::EntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("LOKROSHRLBOLFGDIKYTNBKRWOIDWGWKEHVWFYETEIVCMICKYSOJTYIYLWEGXABXFDXOVOBZSBVPQHHC");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("IXNWCLNTQMREIPWKAOTDCUVINMVVIYECKYTDAZYZNRQDPBAMXESBGYRHDIGGYKZXNFNHNYHGZJTUBUMVIKXQAWYPAFXXBZLWTKFSKELRBPVGTKQVUQIFDPCXACGHSAZJLONIJKQJMHSEVOEXXO");
    tmp_tmp_msg_1_0.value.assign("HZBWHMDFFXEYNOYWZOCHRVYKHEPRCILZAPUCMJEEXLHHBYLAKWHGJFDMNPZVJYQTFTQAWMOJCVD");
    tmp_msg_1.params.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.62668475113);
    msg.setSource(38172U);
    msg.setSourceEntity(193U);
    msg.setDestination(11150U);
    msg.setDestinationEntity(14U);
    msg.source_man.assign("WUSLYQUGSLNPRTUJZRAD");
    msg.dest_man.assign("LLFFXERPGQMDIMACVVTADEQBXPKKLVIZGTPGXXAWSNYYNUXSHUZUUUVEXHBMGIOAOKMNCOIWCCQTMGCYFRIGPWVSBYEERGHNUDLMIAUUTXMPDBENWDBYFKLKSRZZTXOIJNROPAJRCFZOBFMDVGSAWKJZKY");
    msg.conditions.assign("KGEVZUEPNHVEQXYZMJGUAWTWRLBWPYCNOJIRUHBLRLTHFUHFAPXPWWOACXZFDYGSPOZBJXILXBIOGDUJWVRGKHSKBJKEXCGMSWTZNBMECSOTFKSQVMEADFXDKPHNXYRWQQSMZLUFQIIGRCTDMCSI");

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
    msg.setTimeStamp(0.517816463915);
    msg.setSource(48002U);
    msg.setSourceEntity(45U);
    msg.setDestination(11763U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("KVZWYSIDIXDGEMQEWHYTOVMSYSAKYXFUTHLEXWAC");
    msg.dest_man.assign("BBRAUHOVWSVQODRNIEMYPVFATZCXBTNLESZJGKBWPMEUNCWARYUQPHGBZGMRKKGXEKJPUTJFQOJORISFSVHGYKECVAOUKACGKY");
    msg.conditions.assign("HREXTGJCBCTJFGUQPACFMCOVNOFNWOXJFLLXZRONJQKVXRVTLSNHSYRELVZOMFIRWXZMSSAZFBNKYKIBRQTWWBHCTDKCJHUPAKDGSXNAEDAWEGHTMDXPAOIKPBVCJU");

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
    msg.setTimeStamp(0.582322424617);
    msg.setSource(10905U);
    msg.setSourceEntity(226U);
    msg.setDestination(8091U);
    msg.setDestinationEntity(67U);
    msg.source_man.assign("GIBRZCAUNPUMXNSGUBNKSEMHNPMZQRWVXKGXCJIJKSYGDNCYTUKIDPLZOVEQEBEZJXDWWMDH");
    msg.dest_man.assign("GCDODABQKLSZSTRWMCBQJBDQGVRYSYHNPLMACPWLUENDCZTYGHIQIFLOXUFEZCTPHIKDFEJUMTNMTBUQFSXNVVGDIANZWGNFPKPLTMSFPXKVSIMQJZZPESZOHETLZWBNEFGNKAEYHOZGOJCDQOZWFPOYOLBUREXGAUANYAASCVKBKXRSGHXNDUIIYLEORMIKRXWCYXEVHKBXLVJFVDVUJIMJGQRYHVAWIOQLTTDRHAU");
    msg.conditions.assign("RGYQHQFUWLIPLSWZLCREXVYGXZGUJDWYGPMHTEEYGCQFCJOBUKNYSAEMBSZCDREZJMKSDOYRFKXDHT");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 184U;
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
    msg.setTimeStamp(0.300478985307);
    msg.setSource(20545U);
    msg.setSourceEntity(217U);
    msg.setDestination(43451U);
    msg.setDestinationEntity(123U);
    msg.command = 181U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TCXLLJBCXGOXIBKRKURFBYCRLUFOPVMZNNWJAWEVQQDFJPDCTFNVFJIAMIFSQEBHPNKXSNHEIGDC");
    tmp_msg_0.description.assign("DSKHFAWMOMJRHXRFXBFVNFWTVCTBGGSQTQALYPYCZKAJLXYYWLFXHEHIMBTDXYILSNUYGCTCOZSNHOGAYWJFNEVCWYHAJXLRCWGJBXICRILNLOZWZIHKBAWTXFLQTYWONQSKJXRUOJAVKDDPUVMMRUUDVIKMTOZQGMZMVLCQSEFPMKFIWPNZBQEASMDLORJEGJNKVNBZPKRQPADBEOURRUHUGIAFEDKEXZHZSIEJGGHPVQQ");
    tmp_msg_0.vnamespace.assign("LOOZWLPGIBACGTNBZBKOJNRBHYVOAGUCGHNDDOIXIZALXZXIXDRIHJPXTDVRWZLDQJOYVRUKDSPLMORGDERXOXMKYTCTSEYVPZHFLGRZPRGEQUMCBDHWCBYLJRAPSWXSQGXUBNYHFTZJFMEVTNEVTRUBSO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IBZYYFUQLFKBATRAOULFRSIRCNWDWGLLOTIYWGBEAROLMUZVPCPMDDMCYFPIBOUVGQRTWIHUPTFZQROADETCMDBMHJRZKGDPEFTIXJBWCKWVPINLZYUYPHSNGEZBUXCKIVNLZNUHCGXJOEOVAVTQYXRSWMVGIJDLKBZFATHOMXVJCXKWXEXQSGJNCFLAYZP");
    tmp_tmp_msg_0_0.value.assign("MTSDUTEXXGOMEIHOQZMAUWQSSVLSVNYJHDHGYLDBWKOJJPRSQGFYUERCDDGEPMNIPVBEOKTYFUNEAMZALCPZWNHJIKLASNDBGRMTOCRUNPMYZGLFJCUNKXSOQQWFBAIUMPHLOQUIGDSFFONTAHARKXFJEZKRLRRVQXDCQXNUCIZVHSFABZTTTYLECWYXPKJMBYOPEOZBXVWGWIVKRCABLUWQJWGBFCXHVLEYFHJVKABWDKIGH");
    tmp_tmp_msg_0_0.type = 77U;
    tmp_tmp_msg_0_0.access = 196U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KAMSEFUGETZXJQEMPMHDZARDDHUJHPAWQXGWMVBVYYFRIREBLYMBFPXSIJSDHQNOGAEFEYDBMDXHOISCSUZPVVCLRGITRPGRYNAYBVVKNBIIZFEQQZMXCPOGTQZITSFATLKXWOPJVTCSHWKMZTJCMDGDCYGBYRWOTXKXNRAFNBSUJLPWLXZYOJOZCLTMUFUKCLNPKVEWWQHOOJGIVJFKQESDRNCIQAPXHE");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KYUEBYDGJVNFKKFLRGXNTUPAYRNLJBFSLMMFMLJRQGWGOC");
    IMC::Loiter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 2377U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.390697774332;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.439459550923;
    tmp_tmp_tmp_msg_0_1_0.z = 0.422827369129;
    tmp_tmp_tmp_msg_0_1_0.z_units = 187U;
    tmp_tmp_tmp_msg_0_1_0.duration = 3117U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0899990533543;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 155U;
    tmp_tmp_tmp_msg_0_1_0.type = 75U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.907929422692;
    tmp_tmp_tmp_msg_0_1_0.length = 0.953378650592;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.659714751929;
    tmp_tmp_tmp_msg_0_1_0.direction = 155U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YJNNIYTSMLMXALHJJRBEZKUATJVJLEEELKIIYCRJBRJCLCHCOKZFYIVYBXIHFKPDPBXKFGKEPYNPAXBHZOOXLTMVQDQLZKSQVFVAMHNWPDRGSOUMXMJLUTRCZIYTALWYIXERECIUDUBGVSUZSEWNOXPYCTHOQXOHGCVMWCOSSWNDCPTVDAFDIHVMTGNAEKUDFWFFNGSZWPDBBQHTXWFSQNZAQURUGMGHFKKDEOJGRPA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SetPWM tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id = 248U;
    tmp_tmp_tmp_msg_0_1_1.period = 436825423U;
    tmp_tmp_tmp_msg_0_1_1.duty_cycle = 1657519125U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("BSGPMZRLLCGTRAXFMXROJOSTTACOBFUFWYICPXKXMYFLIRPEGNOQRFNWQCVUZVNZWXRZHDTJKYUCGEGOLVQGMNEWWCBMEJIZDQYNZBHSRWXPIJDDSNOGHYTAUBFEOSSYZQYJINJWNKYNXHIVHIVMYLTVQSHMHTSPVOIVFCWTUUUGTQHZBBFBKURKLMIFEPHHXWCPOVYPAMRCALBDPUELDFJEKQEXXP");
    tmp_tmp_msg_0_2.dest_man.assign("CTSFZCUZSFHHZCAZQYGSNWEOOXUQHDOAKJVJIUYJDFEGYMQMVTTLHLXLUJNMUIBQBIDYWKSEJPYXMNNBGXGZPEKRKXJRHWLWKYRXXCRTLWTBNNANWDJOSPIMRCVDZIYGLIYZCRJIAPFFSHTGWOSDXFNMEDPUPOGBTPGVTBFVFENAMBIWXJBCWACZTLVFYKQHZQCAKOMPSLSIABEUAJRHYZQOUESQRUVFBNHMOLEGDITQRADKVEDLVXOHKGM");
    tmp_tmp_msg_0_2.conditions.assign("UPQZSREHZRXNTQZZGPHXNHVCAOQUYJFZDWSDUPYPBBOLFFCVVNJXXVMSFBHSYDYWZSGNOOTAHL");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::VSWR tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.351535924214;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Voltage tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.481877676726;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.0281763312463);
    msg.setSource(13422U);
    msg.setSourceEntity(165U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(199U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FAZFATBMUQYUPYZMXUMODZKMRXMSGCKKIQLNJYIVXCKXFGPYFODLSWXHDYKGJDMPWEOIQFFPGLJPINVRGKFJRRZ");
    tmp_msg_0.description.assign("ALWUPPCKUTFZIJCGXTXHHDFBEGGUBKNCWOLARODJSOKCDCOIVZHJKLKJEPDNYQJOORIUPLQBXWVHPVINFVWTLRBLALFOQQZHEYGSGYCAINYCZNULYMMUKPPJTWDANVSEZQVDJQKTNWRBMRMZNXOVPAYSETOKHFFMQBHUSXKVZIVBUPSFBNAYULNRGHWCYCDQAGRJDOREEEG");
    tmp_msg_0.vnamespace.assign("BCUKCZLYSMATXMTDLOGYOSUXSYPIPWPEUBFBEFPGQPDBPKEQQBLOSACYVZMBRDAPBWVAJFESRJXTOGNHCCWQXZXCTVQYJEDJVFDYGZLXGNKJRRFUQSOVZAVHLPWKDVYLUUJIHUOIFDCJNOPHWAZIDGNSKBKGQUNGAMSWTRYTNRNIRHNVHMCE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IIWFRCJZVEDJNFNTAHGGOOPFVAGFMDBYDUSAVRHXPAHERLIMSCUKUFSHPZALUYSDCDVOBGMHEUGLXTPKKBVYVRYRYAAIMNQHPGJQIZPXPJFZBKOULPRJKOELKRCKTSXRIZAXBCXHQMQWVAXLNJBVXFSWFOUJETPQOQTZNVIKMTXGJQJPCDZJDNGWCDIM");
    tmp_tmp_msg_0_0.value.assign("FOVLFNBRQGJTFIRRHUVQAQWJKDFEXVINLRAXPPTZXUZDPVKVYDVRGQL");
    tmp_tmp_msg_0_0.type = 26U;
    tmp_tmp_msg_0_0.access = 187U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RHFLPKUSKIEOPABYOCXZTLJSQNDTFYBNOCKQBZKKINLSZTVJZGVQNMDRARBAWYRSCAMDFRLURVIQAXDPGOUHYLRFDBMPXGTCBWWWISUWSAKOCSAJLMQRGJZSFHMIMWIEWVVGMSXXYZYHEFPLVEFXUEIGFEHNPQVTDVUKQBWCRMWOARJDVLEHOWDJPPNLFOJCDVCHYXTJCTFTJO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LFVFLELTCHJIPIAYLGTIRCSMUSTGQOEINDXYBMOMNWSDURVZUQVXHRMFUFONZSNGHXZRFZAEGVPHBWZWKLPSITYTXPJQSRCGLAQYJCWPGFQJUCWVCFKOPASLBKECAWHQUYJRTGKBUZFWTEEROSVKRPMSXNVOEGRBVHBJKGOKHDXBYKNXFMQJVKUCMMXNWDKDOJLDFXECAIMGJDZILTNBADQCTQ");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 18736U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.482379206456;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.896510547714;
    tmp_tmp_tmp_msg_0_1_0.z = 0.155846289906;
    tmp_tmp_tmp_msg_0_1_0.z_units = 125U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.712636405984;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 23U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.556862027942;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.173685422545;
    tmp_tmp_tmp_msg_0_1_0.width = 0.113152971627;
    tmp_tmp_tmp_msg_0_1_0.length = 0.388990239506;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.366523644421;
    tmp_tmp_tmp_msg_0_1_0.coff = 119U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 53U;
    tmp_tmp_tmp_msg_0_1_0.flags = 145U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SNMKWEPVVMNPESCSTCCIUSUBKHENHKFYBOOYKHJMJTQTZOYDJOLSENYPBKGKKTZCLPMLRKHWMZJLUHGJZMMEFXDLDBCPUBMQTZIYEJUXLIQCGCFZUQLPSOTWPXPNGOXGXXGOVGIFDCTTLKWSJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QINKJWOALLUZYJECIDBTNBZENIRQLURRLTYXANTDNUSYXYXQHITFCAWEVFKQGGHUWOSSTYWZWUOJXHXZZTA");
    tmp_tmp_msg_0_2.dest_man.assign("SHEYAJXBDNKLECYAVXXGCOGNZOBHOQNTEYYQDAVPFRUSVYAJLZFYPFMRWRZGDETEPMZZNQWEDPSFZEBKCRKYLCRSMVRZFNORGHCHJCSMTBXDPLEJSILKNIHGUCOHWLUXSWWGJDURKPAHWPIRKJAPZLITDIQMKLYUIFDTGOXNQNSXMMBSQTUPOUYIKOFDPBBJDQMIRGIAVAATOH");
    tmp_tmp_msg_0_2.conditions.assign("AFBQULRAOZKRCYNGQQAFPASQMNCZTTZCBNDPBSFJXFOFJLCSRDAPYSKNQEVPWIVIWEWKYOFPHECLSYDNYKMYWHXOBHBDMASCRCZCUJXTZOPIVGMTZIYJTBMWJWCKEWKQTBOHKXMXRHOPISLRHNFKXRVSQEFUGIBEBFVIQPZRVHTANAMHGERSIJLKFUGULADUKVTTJVZVO");
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.397395095559;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 235U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DataSanity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sane = 244U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::UamRxRange tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.seq = 40342U;
    tmp_tmp_msg_0_4.sys.assign("JZKXVBGVONKQQCTWOGLUDHQBRXYT");
    tmp_tmp_msg_0_4.value = 0.0972495277094;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.791084103462);
    msg.setSource(22784U);
    msg.setSourceEntity(127U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(117U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DHHQJWSCLZEKCJZGKMURXNIQFBWGVXGEKSWVBIVMHIQYYBFEXDGFQEXEDTBVZLVWIIHFRMBRCBMKWSGUZUCACTNROAILMZHSTAUPIDAKLNFEPVRCDFLVCFAPQOTOIDQN");
    tmp_msg_0.description.assign("OOMXMVECOETZSVLPSTGWSCYOGDFWAAYKAFEIHURTDAYGCAJLYWAKNPQLERFMISIZPXVMJOHTDNRZBBUWCXFZAAGNRHEDHOGXSYRMPXJPSFFSWBNQKIZBHMTYFG");
    tmp_msg_0.vnamespace.assign("KWCMDZIAICNRJTYBVWAISERRE");
    tmp_msg_0.start_man_id.assign("MZDXAHRLGLIIXJWKGEKBFIPBJNQWUALWJVQEFMAZUFNOIKBG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QVIKWMLZMGQADBNJZFHWZRQXOVRNREHSXUPWCNUTXKBCKPVAKIWLXYNWXUIZFKCGCSQQLDUYFBKMDTJNLJCYINQCIFOFORWWUSJYPPWEGVTJGCGYSTPHGVPZMRQAAEVKEQLKINDBGMMHXGAKJIQMMDKBHPFCUEEEEVUDVTRJATORJOHWUHVJSASSYCAYELBNZIRTMLFDRJTXDDNUPXLFA");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.299982156473;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.460125901017;
    tmp_tmp_tmp_msg_0_0_0.z = 0.259432828716;
    tmp_tmp_tmp_msg_0_0_0.z_units = 101U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.203968467368;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 253U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.203872297622;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.163715600523;
    tmp_tmp_tmp_msg_0_0_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("XUZSBLUYNBSSUUEMKHPSKOMFLBDXZPNHVDBTGYZGCLTUJPAAZECVRIDNJSTBVBFSMTDIXXJFWIHZLCOVXMMMRVOEPOZVPDXFZCUJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Rpm tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = -4613;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GHSCIOEVWKLNBUVOOQUFKYWHWPMQBMQQIMCOFLYIVCFVYQXZKDDCDVUAJKUHRWETSTXIRYWEXDKCVUNVGFIKAXRLWBCLSTZGAHPHZNEXOQ");
    tmp_tmp_msg_0_1.dest_man.assign("PSYRAHGYHVCGMYOTALNHWXNPSCIYHOVDTQDJXPCIOYMBIMPSUHFNKFUVBUQVNOLNFUJPBTQKHEXULIECYHCRYWNJZIGAESGAPJSMKPLQRXSCNZNLRQOEWKBIDCMRIWKUOEEBEFHLOFYLZKGWWTZXQGQERAFDXQBFWFQNCKYBBNFTSSGAGHJUDXTXOCPTBYQPIDTHAZMDPZVMDIKDJEJRRT");
    tmp_tmp_msg_0_1.conditions.assign("KREMLLKYAQIHJYCALRADDOGAIIHQMGXQGFEUTYMVMLNSCTBLPEMHNNOXQNZFWVIPFAHCUUGTOZSZHDLUEAFTTSKQWHTPFYSXCGKNWWEDJLOBYHNRFYJVVRFWCEJPBPAWWUINAYD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SaveEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("PUDGULBTRADUVNWWHWONJQAYXZPULSSKKXKVKPCPAOTZJWEJFBMGZQFHUEZYMTKKGBTIYBMBEQDPZRXTKXMGVOGJWIHEOMOCTQYKECEISLSNMALDXZCQKQSWMFAERRBJZNFHGLERIHXARUDPISNQOZACOHFDZIJJBOP");
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
    msg.setTimeStamp(0.476909796952);
    msg.setSource(34215U);
    msg.setSourceEntity(184U);
    msg.setDestination(23913U);
    msg.setDestinationEntity(133U);
    msg.state = 171U;
    msg.plan_id.assign("UADHYCIVUDGAEEVFSWILKVCZDXYPNJKPUUPEMTZQERWLFVNEOWIKWVYXFADTAMZXMDMFLNLINXTAUEKGEBSLGKKXUSARIOWUEJLMDRUKQJWHQWBUCVPP");
    msg.comm_level = 150U;

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
    msg.setTimeStamp(0.810954158794);
    msg.setSource(35580U);
    msg.setSourceEntity(252U);
    msg.setDestination(36554U);
    msg.setDestinationEntity(70U);
    msg.state = 188U;
    msg.plan_id.assign("ROZAVFACMBODGTLOEWAJEPBSEYYKQEBHMWDPBHGQIPJKSFMIFQMRLWJFWIYJNCGVQVAGXSKZIZATNXGXJTONHZRDERZVQGRAKLDVDFMSNSAIJYRNRHHBPIDILDJUIPHNOQBELPFHADCSFKJVCOMVCKMYXNLTUCGPUNWYGTUAYTGMSCLNHWYUJFXVFBKZWTZPWUHNWBBYEXAUCOHXWXUOQEQIMDRCFERQXVVSEOXDPSSPLUZJGTQLUOTB");
    msg.comm_level = 45U;

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
    msg.setTimeStamp(0.654634240066);
    msg.setSource(36894U);
    msg.setSourceEntity(162U);
    msg.setDestination(292U);
    msg.setDestinationEntity(97U);
    msg.state = 202U;
    msg.plan_id.assign("EJAUXRSCOUHFXLQISWRBQORWDNGMIPPEXASIBTSQYCXHQFYTUTIOHRJIMORNNFOVAQSPMKONBVUTHJ");
    msg.comm_level = 149U;

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
    msg.setTimeStamp(0.563304926274);
    msg.setSource(25280U);
    msg.setSourceEntity(78U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(135U);
    msg.type = 244U;
    msg.op = 23U;
    msg.request_id = 1561U;
    msg.plan_id.assign("QNJKHIVQSNXVJFMYODVJMGAFTAWDLNHFZAHAMWKLBJGYNNDPFYUAUYTMZGXVFYEOOTZZGQTZFMFZPXBCXIYLQVYCPCSVIU");
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.90327959889;
    tmp_msg_0.ay_cmd = 0.49575418784;
    tmp_msg_0.az_cmd = 0.44530018785;
    tmp_msg_0.ax_des = 0.0691469229341;
    tmp_msg_0.ay_des = 0.757137993172;
    tmp_msg_0.az_des = 0.952186357193;
    tmp_msg_0.virt_err_x = 0.358077013807;
    tmp_msg_0.virt_err_y = 0.660483266125;
    tmp_msg_0.virt_err_z = 0.138823502777;
    tmp_msg_0.surf_fdbk_x = 0.355682006402;
    tmp_msg_0.surf_fdbk_y = 0.612899372802;
    tmp_msg_0.surf_fdbk_z = 0.260349124286;
    tmp_msg_0.surf_unkn_x = 0.649070434051;
    tmp_msg_0.surf_unkn_y = 0.919472580374;
    tmp_msg_0.surf_unkn_z = 0.169550941761;
    tmp_msg_0.ss_x = 0.196352188262;
    tmp_msg_0.ss_y = 0.237241552962;
    tmp_msg_0.ss_z = 0.24999801281;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("CVDJPGSGUWNROYRQEDFPRAQJOME");
    tmp_tmp_msg_0_0.dist = 0.641637712838;
    tmp_tmp_msg_0_0.err = 0.294811063485;
    tmp_tmp_msg_0_0.ctrl_imp = 0.792749891315;
    tmp_tmp_msg_0_0.rel_dir_x = 0.419020274037;
    tmp_tmp_msg_0_0.rel_dir_y = 0.332650352829;
    tmp_tmp_msg_0_0.rel_dir_z = 0.666748932081;
    tmp_tmp_msg_0_0.err_x = 0.319865987644;
    tmp_tmp_msg_0_0.err_y = 0.0226154418228;
    tmp_tmp_msg_0_0.err_z = 0.567372320792;
    tmp_tmp_msg_0_0.rf_err_x = 0.274200226107;
    tmp_tmp_msg_0_0.rf_err_y = 0.507936434907;
    tmp_tmp_msg_0_0.rf_err_z = 0.900845117095;
    tmp_tmp_msg_0_0.rf_err_vx = 0.766369632466;
    tmp_tmp_msg_0_0.rf_err_vy = 0.297440795069;
    tmp_tmp_msg_0_0.rf_err_vz = 0.14141865862;
    tmp_tmp_msg_0_0.ss_x = 0.848772760188;
    tmp_tmp_msg_0_0.ss_y = 0.619856562396;
    tmp_tmp_msg_0_0.ss_z = 0.921849225433;
    tmp_tmp_msg_0_0.virt_err_x = 0.153424817701;
    tmp_tmp_msg_0_0.virt_err_y = 0.922722501593;
    tmp_tmp_msg_0_0.virt_err_z = 0.189458771307;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EANMPWBPBVLOESDEHUYCZIPDFAQCAQOAGZTIGACCWXBVGUKDHXEAMWYQSOHOPMNJKWXOMLKJBP");

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
    msg.setTimeStamp(0.0277771694009);
    msg.setSource(24062U);
    msg.setSourceEntity(178U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(234U);
    msg.type = 225U;
    msg.op = 41U;
    msg.request_id = 8546U;
    msg.plan_id.assign("XBCRFKZPYGNSFNWEAYILYZCNVRSUDTAMIQKPDQSNQWSIJGPXKENMARMKNYMUUFGCDDME");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1985665154U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IPKIUHXRUZUYUQHOYQERJIQDQDGPVYQFRWNYNURMPZYJWBBKSAHWTZTLAPMDMXBKXCMGRBAQDPYZJVPLNWGUYRGLGMCETNKAQKOJAKYLTSYPIHZMUBLGSGWWTVEVFJOCNVWNJEDVTILJAEESVMXVFDCCSTGMICFLOOFJEDBFWUIGBSLSNKIFOFHXCODSJBKHMYXCHJVTEZRTSEXDRLNLPXAORBAIOPPZBHV");

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
    msg.setTimeStamp(0.906206957351);
    msg.setSource(35023U);
    msg.setSourceEntity(102U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(225U);
    msg.type = 60U;
    msg.op = 54U;
    msg.request_id = 4435U;
    msg.plan_id.assign("AYCQXUVHKCTVROJZWGMFAYPTIWCOUSXAJYYTRHBXQWDTEXMKEYGKDHOCGAIJWOPQCOXBLWYFVLBUOQVXUYILOLBKLYDIEJSXUWJTEXLIKMPBHFDRHMVHDCUSUETZZPSKQRUPGUIHQOPUCIGNWFLRSZSKONJWAAZVFGZLNRZDZMQENVEFLMKAFQJASGGFNYOIJWJPXWGKSHPNHRMPTI");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.73209263893;
    tmp_msg_0.start_lon = 0.699514633256;
    tmp_msg_0.start_z = 0.581127362908;
    tmp_msg_0.start_z_units = 167U;
    tmp_msg_0.end_lat = 0.490967945434;
    tmp_msg_0.end_lon = 0.215445014336;
    tmp_msg_0.end_z = 0.469248939397;
    tmp_msg_0.end_z_units = 179U;
    tmp_msg_0.speed = 0.467678243978;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.lradius = 0.0986204061763;
    tmp_msg_0.flags = 205U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ISXNEFIUXCKQE");

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
    msg.setTimeStamp(0.561850626532);
    msg.setSource(1470U);
    msg.setSourceEntity(28U);
    msg.setDestination(50685U);
    msg.setDestinationEntity(167U);
    msg.plan_count = 24453U;
    msg.plan_size = 2278045788U;
    msg.change_time = 0.929070602028;
    msg.change_sid = 23106U;
    msg.change_sname.assign("HGMKYZWMTYHDUXLSJWHYNTSGRTMDAPYFPHPVYJFIVGFOLSYXIECISZFUNBDQKJTDDAOGXNZEELQJMXANBAHJCPPRCXQWQVKLEIHEOFVDTIWLQOXNDXTUEJWKOJZSYMCGOAJHYDMJMEWGBAYEZKOGXLKBSBDHTHKSPVRCHGFQOQEWMJKVNGUYIF");
    const char tmp_msg_0[] = {-99, 94, -119, -49, -20, 9, 25, -80, -41, -17, 4, 48, 40, 123, 4, -4, -69, 64, 119, -51, -52, 83, 105, -67, -27, -84, 79, -60, 89, -13, -17, 110, -127, 106, 121, -115, -58, -29, -92, 99, -105, 40, -69, 29, -10, 99, 112, 104, -96, 45, -9, -35, -52, 91, 80, 31, 117, -107, -70, -71, -52, -4, 49, -72, 66, 53, -33, -4, -123, -45, 34, 57, 41, 101, -126, -120, 124, -37, -31, -65, -55, -114, -102, -9, 99, -7, 87, 46, 105, -36, 114, 90, 89, -53, -45, 8, -82, -49, 66, 116, 66, 87, -1, 98, 126, 117, 25, -75, 39, -32, -70, 15, 53};
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
    msg.setTimeStamp(0.843954800436);
    msg.setSource(19071U);
    msg.setSourceEntity(183U);
    msg.setDestination(57184U);
    msg.setDestinationEntity(112U);
    msg.plan_count = 30067U;
    msg.plan_size = 1180862436U;
    msg.change_time = 0.737844617735;
    msg.change_sid = 55442U;
    msg.change_sname.assign("DWKULAFHKCYRGUGWTUJEZFJISQYMKFLYYKMNLIBDXOAQTTIAZIYUFJSDYQMAZMRUGEQDMMXXQFTLFQRALYONRNWXVOXPTOHVBSTLEEKVWJGTLWEMAOIKPWHAJJPGUHLZCSWHRWXIKKITZXNMGYRBOLAIYVGRDCXDUWRFEBDVOXNHCOEUPHIKOQICSJNPGTZNPPWGNFZSDSZPEJLAZACJD");
    const char tmp_msg_0[] = {115, -126, -73, 70, -112, 124, -74, -32, -95, -54, 55, 125, -75, -4, 49, 87, -89, 13, 53, -65, 96, -42, -95, 90, 12, 75, -104, -39, 56, 13, 105, 7, -96, -34, 94, -24, 110, 38, 69, -26, -22, 69, 41, 51, 49, -90, -46, 68, -16, 93, 73, 71, -58, -121, -58, -57, 101, 11, 31, -100, 18, -77, 34, 33, -86, 45, 124, 83, 77, -12, 115, -104, 84, -58, -113, 110, 98, -29, 118, 33, -47, -41, -122, -3, 40, -7, 0, 8, 90, 56, -78, -110, -34, 92, 42, 76, 87, -107, 4, 93, 14, 5, 88, -22, 71, -30, -90, 8, -113, 71, -48, -33, 110, -53, -108, 69, 95, -51, -53, 120, -20, -98, -42, -106, -72, 46, 19, 111, -90, -38, -123, 19, -100, -124, 123, -101, 42, 104, 49, -33, -99, 52, 82, -2, -24, -39, 85, 68, -33, 88, 10, 102, -76, 43, 51, 71, -24, -17, -6, -15, -17, -86, 1, -63, -58, -69, 94, 77, -82, -83, -37, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NUXBBSIEPGVLSAJAVTFOSFYZEAAHKDIGZIZEJTQFKWFWUWYPNTMKTLRGSXPVEZGCPBKIMNBRJMBQZDIIMXXPZCDHOORDSHSFBLVIXDXVKZZGFSLWFQJBREHCGMKANAONEDUXNEOODJIEQRLUCHPGSJB");
    tmp_msg_1.plan_size = 19686U;
    tmp_msg_1.change_time = 0.789737815067;
    tmp_msg_1.change_sid = 22606U;
    tmp_msg_1.change_sname.assign("XOPHTGLJGFEVYGBGDYTEZLFIEJCLZOZXEUSDKFITZWWKABVSIXMCMZZSTORFHFRJMHWWUQXSYHXCSVVOAVHNOMIORUKUBSBKBJTCNMLETQKZCXOKATWPPYSOVFIRQOPJRVHNBLJGDQWCBYYHJDANIKJIVFIBGXRZVNGULADGGRRNZNG");
    const char tmp_tmp_msg_1_0[] = {-22, -122, 40, -113, -46, -15, 42, 84, 61, 102, 119, -30, 71, 43, -52, 76, -37, -106, 98, 39, -53, -53, -44, 68, -85, 42, 14, -81, 120, -106, 35, -6, -50, 46, 76, 20, 103, -63, 56, -23, 57, -101, -43, 51, 37, -120, 87, 71, -1, -35, -110, -27, 9, -38, -93, -24, 92, -19, -118, -80, 25, 23, -122, -81, 62, 31, -108, 44, -44, -38, 61, -77, -117, 86, 20, 23, -10, 39, 10, 28, 115, -4, -27, 35, 39, 32, 101, 30, 126, -50, -27, 122, 8, -44, -29, 125, 62, 43, -49, 17, 2, 79, 52, 8, 126, 16, 108, 14, 115, 114, -17, -28, 73, 108, 33, 92, 6, -15, 29, -62, -126, 35, -69, 10, 101, 2, 54, 124, -114, -94, -3, 87, 65, -106, -23, 46, -73, 52, -14, -4, -123, 23, -47, -23, 47, -88, 12, 54, -78, 88, 37, -78, -54, 111, 121, 33, 102, -125, 30, 42, -55, 95, 114, -13, 112, -99, -23, -115, 81, 48, 5};
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
    msg.setTimeStamp(0.312893844699);
    msg.setSource(27687U);
    msg.setSourceEntity(135U);
    msg.setDestination(57520U);
    msg.setDestinationEntity(64U);
    msg.plan_count = 21432U;
    msg.plan_size = 2299046700U;
    msg.change_time = 0.448369487244;
    msg.change_sid = 13128U;
    msg.change_sname.assign("KCJYIVYSGDOSRYNGWIHCFTKBQHGFXQQCNVEXNDNOLSPFLDMDIDFYXXKA");
    const char tmp_msg_0[] = {109, -104, 66, -106, 104, 122, 106, -82, 56, -59, 104, 52, 10, 6, 47, 72, 33, -15, 2, -92, -116, -40, 106, 6, -128, 60, -122, -25, 89, -119, -47, 48, -42, 28, -6, -89, -24, -19, -73, -116, 95, -63, -19, 106, -7, 23, 122, -105, -102, -97};
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
    msg.setTimeStamp(0.6047403456);
    msg.setSource(56237U);
    msg.setSourceEntity(11U);
    msg.setDestination(65003U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("BCDHEHXSLRZYOSXIFIFMRKOZTUQACZWCKMBYAZGJCDJIPRDMUFKVECRCXQWJPELHTAXVLJGLXNGKOXSKTCFBKTXUBUIMAZDFSOVBVGZQLXOEP");
    msg.plan_size = 11958U;
    msg.change_time = 0.885918247224;
    msg.change_sid = 18666U;
    msg.change_sname.assign("VRNIOYZFMQNILOGJSTQVEQJNEGEDATSZTXZSTCDTDLRRVBNUEHQSRCSLKZZAMHAFOJCXDMGAWCHXPIZFGHPMKRJUNXXLPPDSZOBHUFPZAMIOYMLLDOFCWUHWYYYIMTHMEKNWJFUVMSIXHKJZDDPBVBRAFMWPLYSKETLJWOFYBRKFJBBIVBAYVGCVXUCCSLNCTY");
    const char tmp_msg_0[] = {-101, 66, -51, -65, 118, -53, 118, -60, -104, -66, 113, -21, 39, -93, 72, 10, -39, -42, 103, -5, 111, 36, -11, -127, 27, 88, -82, -100, 5, -27, -81, 24, -108, -55, 76, -1, 64, -19, 85, -81, 45, -4, -69, -37, 85, 24, -102, -117, -7, 82, 18, -96, -119, 94, 84, 123, 36, -102, 102, -72, -63, 61, -12, 86, -83, -30, -24, -41, 67, 41, -21, 18, 64, 45, 44, -63, -46, 70, -97, 51, -109, -104, 95, 106, -12, -46, -23, 118, -105, 86, 55, -89, -22, -27};
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
    msg.setTimeStamp(0.403058581549);
    msg.setSource(50824U);
    msg.setSourceEntity(174U);
    msg.setDestination(13639U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("DNPOSMLSCHPWHMBDQBDVBXJMRPXWYNMIBLUJVJXNTAROVWFFJRCYEBHECXPIONXWWUURZZGUAUFYNEPBGFFCIQGQKKJSYGFCKLNJYJVDAUGLQYYZRZTSMRKUBNZVIDZVNMRLFAOQQICAXQJO");
    msg.plan_size = 49977U;
    msg.change_time = 0.441366856994;
    msg.change_sid = 29301U;
    msg.change_sname.assign("GCABCUJMNWICOXWKNOFLXNIWQIVWXSXVMHKMHXNRTMQTQDGCAYOMBBQVSJCBEGUGEWEVHIIHEQEUGFTOZFOSVBDJYUXZYUDYNTFGQRVZULPHRTSEPGOFWNKAYBYQIZZOAYKHMMBUZEHPVPAPNJVLRQKKFJNDW");
    const char tmp_msg_0[] = {125, 10, 122, 43, 62, -41, -37, -80, 12, -18, -2, -43, 11, 40, -69, 120, 23, -61, -1, -123, 20, 91, -106, -63, -104, -128, 49, -119, -126, -3, -89, 119, 61, 94, 50, -46, 30};
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
    msg.setTimeStamp(0.637499849733);
    msg.setSource(51108U);
    msg.setSourceEntity(190U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(77U);
    msg.plan_id.assign("BGUIRAOHXHTBDFLOJPQMNBUCZHTLJZFVFRUBFESZRZEOTVNHJBMIBAMWZVEZKQNHJNANVZEGIUTPCQGQYUZCBQGXVRD");
    msg.plan_size = 21767U;
    msg.change_time = 0.176603402296;
    msg.change_sid = 25783U;
    msg.change_sname.assign("ERXGSPBFSFRNGQEPJGLRFKCBODDWCPKSTOLIVMLNZXAUBTULDMGHBQVZHNMWGJZCUROUUXZBWUBIVMASLZGYLDPKD");
    const char tmp_msg_0[] = {4, -121, 8, 97, 70, 89, 25, -98, -57, 112, -56, 32, -85, -109, -69, 102, 52, -78, -104, 4, -54, 45, -33, 17, 108, 23, -104, 87, 34, 89, 63, -105, 122, 80, -21, 49, 23, 114, 101, 95, 99, 27, -21, 2, 39, 94, 62, -58, -81, -77, 8, -114, 119, -3, -23, -31, -127, 56, -100, 122, -29, 42, -13, -79, 31, 61, -47, 65, -9, -6, 81, -70, -41, 5, 82, 70, 69, 102, 99, 117, 64, -99, 20, 67, 95, 94, -98, 105, -72, 35, -104, 83, 62, 90, -70, 40, -81, 21};
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
    msg.setTimeStamp(0.690436057131);
    msg.setSource(17930U);
    msg.setSourceEntity(198U);
    msg.setDestination(28881U);
    msg.setDestinationEntity(2U);
    msg.type = 119U;
    msg.op = 150U;
    msg.request_id = 51495U;
    msg.plan_id.assign("FMUVMXBUEZBNZR");
    msg.flags = 41873U;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("CUFCBDCVVT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LOCRDKBONXUPBTLGQSRKTEFUFCTAIZPCNUCKKGVXZAGGFQMBSYXHLAMMHPGWYJRWUUPQDDKBM");

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
    msg.setTimeStamp(0.655542122419);
    msg.setSource(50488U);
    msg.setSourceEntity(147U);
    msg.setDestination(3522U);
    msg.setDestinationEntity(63U);
    msg.type = 163U;
    msg.op = 209U;
    msg.request_id = 17081U;
    msg.plan_id.assign("LHLMUHXAYCZPNZBNTKTEOBIPOLMVMGPWGATBWXAWIZENCVCVJWPQFBRVNJNIMWDQXMNBQEIWRFPMCANAYKLRZQKPYHFNMIOKWAOHYOYLUHOAUZSHGYGTGQBJMJTJZETIDYKMSWSLCQARQDPPIRDSHWTVROSVXSDPVRDEAQYXHTKZUXANGFS");
    msg.flags = 46480U;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("BZXGTLHEAPRTRMWFYCANPSBLCESYJASL");
    tmp_msg_0.action = 77U;
    tmp_msg_0.grouplist.assign("EMKZKWUWHRRGUQEEXMKSYABVTTBYIVTAYQNHBFJJXGUPYMWHNZXOONEWJFWLJEVDGRRISBCACWQEQNZCYMLCRPVESAKNULUVNRWNDBUGGNHLCCOQSHVLAXQBOBOG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VSVPMWRVSYAUREMFOWFMQXIDCUQOKENRLGEZXQTEKUJFGMCEHRNEOJJBGLAZEAJLLIKNITYHPCBCYFBPYUDPTHFBKWJNIQFQJNLQK");

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
    msg.setTimeStamp(0.120184641223);
    msg.setSource(24717U);
    msg.setSourceEntity(158U);
    msg.setDestination(28596U);
    msg.setDestinationEntity(195U);
    msg.type = 78U;
    msg.op = 26U;
    msg.request_id = 56914U;
    msg.plan_id.assign("QODZRYGJYOFDATXXACRZTBOPOZXXTORAYAUGSMYCLZFJGCCKDKHHMGBDRSVBGLMBDSUMHJMSKGHQQGTBAKEHVBWXSLDCQWFFPJNLBMFKINSWZCQEFJEVQSIKUAUYRZBPXPTKUOEGNSGTRVNHVNLIPIKYQVUDJTJOWCPNLZYZENOEWYVMEUSUQBTNJCBMLVWPRLRHWRINEFAAQPFXYMITVZHDOFAIJTIMXCRXZDIHGWIECFLQU");
    msg.flags = 11343U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 191U;
    const char tmp_tmp_msg_0_0[] = {-42, -79, 67, 32, 98, -104, -16, -77, -112, -115, -64, -14, 62, 105, 84, 94, -51, -91, -128, 21, 83, -23, 9, 111, -124, -124, 55, -122, -24, 41, 3, 2, 84, 42, 6, 84, 106, 37, 83, -78, -35, 41, 102, -120, -85, -97, -6, 86, 85, 30, 123, 32, 96, 21, 80, 74, 41, -105, -37, 70, 52, 31, 25, -128, -73, 123, 93, 65, 16, 103, 36, -63, -54, -122, 42, 122, 93, -32, -58, -116, -93, -92, 17, -128, -97, 52, -119, 106, 116};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DGHMDMMMOMBBFIYJNECBRSPEJRRNBQSQOTJEARTXABMGWNWYPTBEHVNQUXLRT");

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
    msg.setTimeStamp(0.0144528889752);
    msg.setSource(24385U);
    msg.setSourceEntity(74U);
    msg.setDestination(35838U);
    msg.setDestinationEntity(153U);
    msg.state = 91U;
    msg.plan_id.assign("ZRYECLRGZNPUDQPKYAVDCDYFCSGQKVLXHICOBXFFULGJJQPZWMDKSSKQWAOLRUKPSQMVOMJGTAZWECXYTTUXCJZLQJFWSRVICUTTWNEAJVANLORTEFTSHWFWFMVFBNFO");
    msg.plan_eta = -104288923;
    msg.plan_progress = 0.500584140926;
    msg.man_id.assign("WPLNWDHQJPIOUGRERJXWXQXIJSQAGEBIJCHFYZRNDTAPQZKFHSVLZGWWTKIVZCADYLPPVSMUNWXGZVQGNYECYSMHDMRAYOGVAOCISBQOHKXFFEIEKBLUUCHBOLUWTTHSCYBZIYKOJYCFHOQAEKJGINUBLCRMSSWFUEYNFASQJBPLSOYKAZTEPUATTVWDXUGNGVRVEMOXTJZKBCVNMBTLCKJMDNZ");
    msg.man_type = 3428U;
    msg.man_eta = -1928426091;
    msg.last_outcome = 219U;

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
    msg.setTimeStamp(0.930584426777);
    msg.setSource(2846U);
    msg.setSourceEntity(233U);
    msg.setDestination(27348U);
    msg.setDestinationEntity(106U);
    msg.state = 248U;
    msg.plan_id.assign("WTKDCUPONXVEPTJLIOVHEHKXZWRQKFAJDDZUNLCLEISWHKPUYNFHYSSIRKPOSKAZPFFCFMZAUQGCTBFRQOTPCWBQHBDRATXSCDQPMSJULEGNJCVEWEBXMLRZMJODYFRKUBDJWAYMFVROMWPNJIMEJGKYPTGAUS");
    msg.plan_eta = 743791090;
    msg.plan_progress = 0.0304349488707;
    msg.man_id.assign("KJHRDUQZTAOJEOBDTMXSCXTWGPUCVXGSOWOXIGPDSWIASFXYGJUQAGVKMNKOMHBAHVESUFKBRYHWY");
    msg.man_type = 16425U;
    msg.man_eta = -1880126260;
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
    msg.setTimeStamp(0.587892995499);
    msg.setSource(42314U);
    msg.setSourceEntity(237U);
    msg.setDestination(55008U);
    msg.setDestinationEntity(131U);
    msg.state = 37U;
    msg.plan_id.assign("EGIHGBIRZPVEOEVFZFNLP");
    msg.plan_eta = -69326414;
    msg.plan_progress = 0.259300513645;
    msg.man_id.assign("WPUBSHZQSMBRBVAPCQLVEFVCOKQYUSCKLKDBNNFZIQJMTGIEFTSZVOLJIODYYZDJEURGJUBWMAUXDFMNUMZIOIZCOZCPGRAIYWLSZAWCFXBKTDOKSHGDKDWMJDCSTTJNRKIVGXRLIKCSFBVEFCYLGYNXASLQMDIHEOXXGJULQUWGOWABXBVPVDOQYFPSJHGECPYKEXTANERQRWKXAVZGHHPXATYATWVPRRYFHJJLPQENNHEUNMRIMUBLWNTOMZ");
    msg.man_type = 958U;
    msg.man_eta = -1202663363;
    msg.last_outcome = 16U;

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
    msg.setTimeStamp(0.379068073645);
    msg.setSource(19222U);
    msg.setSourceEntity(211U);
    msg.setDestination(62955U);
    msg.setDestinationEntity(183U);
    msg.name.assign("WLPAEDAJTWXZHTHJMNSNLCTAVVIPWRV");
    msg.value.assign("ZQOJOKSLKTUVYNNVUKFPIGFIYWTKAZGUHCMIPDQFRLFYWCHAB");
    msg.type = 110U;
    msg.access = 39U;

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
    msg.setTimeStamp(0.958081483572);
    msg.setSource(32350U);
    msg.setSourceEntity(68U);
    msg.setDestination(51316U);
    msg.setDestinationEntity(83U);
    msg.name.assign("PLJOYNAEZUUJDVVVRCCVBLGYLXPGQTEFZWGDQSIIDYVMPSCMKNHGSUGJPBWWMTNNDBOSOZFMZQMDFBQJBZKWXKNKHFWXCZLFVQXFBPCJARYDIFKPXGSRL");
    msg.value.assign("MGNZXPORGFMEOEGCYJKXPVCR");
    msg.type = 192U;
    msg.access = 123U;

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
    msg.setTimeStamp(0.548357094243);
    msg.setSource(50488U);
    msg.setSourceEntity(77U);
    msg.setDestination(14504U);
    msg.setDestinationEntity(157U);
    msg.name.assign("LUKHMNZVLSZWDZVRKTVSILSQLBRUQGRUJVTRFBKZIDVBGYTFGASZIIQMBJMGNBVONLRYTZQEOJRPYPGPOWZDRRKUVHKXSQMRKYEUOTSXHNXGFF");
    msg.value.assign("WDTDYXVSEAYYLWUEOAHGNJJCEXZGVQCKKUJLJVH");
    msg.type = 136U;
    msg.access = 115U;

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
    msg.setTimeStamp(0.438839419883);
    msg.setSource(55701U);
    msg.setSourceEntity(103U);
    msg.setDestination(17639U);
    msg.setDestinationEntity(242U);
    msg.cmd = 236U;
    msg.op = 81U;
    msg.plan_id.assign("JEMBOUCPDQCMBJHWRHGFOSKYKEZYTRLFIDJKJQBLZASWJEHKIIXGLPCWDPUOHANEHXIUZOKXJFAICCLIGAVRMQCUXOGMVDQFZAMMHYOELVYKYLOPMEZHSBKUEJTZTWZFATSWVASLQ");
    msg.params.assign("WUIDRZATZIBBYHPENJCTGNMYXAJCVHOGKUAJYVTXNSDXHAAGSJOEYVYARIWROWYTPQQDZAKBXVKLLMXSEFQVRHPGHGYCFCXTEFUJKRMNEKWGFMLEZSOKKKCXBRHWTQIWOPVABIZLCYOTMWUFIZNFDEZVPJOMBSVHXLROPNQSKQWSGPCLSUSQRKUBYVJLJRWDEZMBLEJRUDHOQTZXPYPMTPIGSNHGNNC");

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
    msg.setTimeStamp(0.345875244399);
    msg.setSource(32735U);
    msg.setSourceEntity(93U);
    msg.setDestination(36381U);
    msg.setDestinationEntity(85U);
    msg.cmd = 84U;
    msg.op = 91U;
    msg.plan_id.assign("OWGIHZESHWYPMTNBDNNEPGIZLKRUJVCHRUQFRJWTVCADPMTMIMODKYSXFUTHVXQHVTXBBLXIDXWSNTYSBIAVKMXXHVUEZUQLLCLKCBRBBOTJAKFNBCCGAQBDNMDXJKUYSZN");
    msg.params.assign("BUAFAELIPXXEZLOVGVVYSSBFRCFYZZEMYVXCIIWSMNTQEYLRP");

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
    msg.setTimeStamp(0.760901001106);
    msg.setSource(43745U);
    msg.setSourceEntity(91U);
    msg.setDestination(45303U);
    msg.setDestinationEntity(101U);
    msg.cmd = 238U;
    msg.op = 239U;
    msg.plan_id.assign("NYFDCBAVZZKEMRRYMIXBSZYWFCJHKORE");
    msg.params.assign("LDNIHGQEKPBFCOVRFXZATPDFIRMRDMQLLXQVHCQEUSEIHSGDAECIVTRHVDWNTQSFRZFKFZGWNMUTWCPWBWLYMZEXQKSCHUWBUNXVYAJLXTBEGCETAHRKHVJPGOCPWYTBBZALECOSXUKRSMQMOISIXPYGLGBFTBPWBPOHDURUJIQZDNNAIHKVGWBOXJOUNOUSYTSQDEJOMMNZGSYJLLCPJIAFENFJYMYRHRTXZQDMZ");

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
    msg.setTimeStamp(0.882282640007);
    msg.setSource(5758U);
    msg.setSourceEntity(214U);
    msg.setDestination(10087U);
    msg.setDestinationEntity(146U);
    msg.group_name.assign("ZUUYDXFHIMNKXWOTHVVGXSFIXEHCWEQKJJRXLWJATLBBYDFIDWYDMUZJCP");
    msg.op = 62U;
    msg.lat = 0.382236444097;
    msg.lon = 0.114524701708;
    msg.height = 0.710625968569;
    msg.x = 0.667464836759;
    msg.y = 0.915644186033;
    msg.z = 0.862265673803;
    msg.phi = 0.192744225456;
    msg.theta = 0.495632224723;
    msg.psi = 0.936939128621;
    msg.vx = 0.730952233902;
    msg.vy = 0.294228170132;
    msg.vz = 0.357882275526;
    msg.p = 0.544527850486;
    msg.q = 0.697457697463;
    msg.r = 0.0741517000879;
    msg.svx = 0.576314808685;
    msg.svy = 0.881386088566;
    msg.svz = 0.749823258766;

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
    msg.setTimeStamp(0.087024772105);
    msg.setSource(35468U);
    msg.setSourceEntity(132U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("JARBHLEPRWLTDCTPHRMRXESPYRENCKCEB");
    msg.op = 30U;
    msg.lat = 0.739801647343;
    msg.lon = 0.657445140111;
    msg.height = 0.156511532385;
    msg.x = 0.444978089188;
    msg.y = 0.7894977774;
    msg.z = 0.0768588433829;
    msg.phi = 0.738328167006;
    msg.theta = 0.715620331383;
    msg.psi = 0.246262239379;
    msg.vx = 0.497978794448;
    msg.vy = 0.212434902504;
    msg.vz = 0.0422703236959;
    msg.p = 0.213331914904;
    msg.q = 0.294745276343;
    msg.r = 0.0592888300504;
    msg.svx = 0.286523589655;
    msg.svy = 0.0971473395636;
    msg.svz = 0.387374461307;

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
    msg.setTimeStamp(0.0888434385002);
    msg.setSource(27144U);
    msg.setSourceEntity(104U);
    msg.setDestination(42639U);
    msg.setDestinationEntity(209U);
    msg.group_name.assign("TFOVMWNHCJFODFONYANLIUGIWUWUMQACUJJHARSMIUJMICTYEAOIDHZSVJPGFQWXXDKGCKDHHGMJBOBTSRRFLSVPSUSQSBCEDWKBQCBYAFIXERALLCRNPMNZOYWEQLVKWYWIZJQPPEYBGWVFBKDTBPXBDJMKQSNMTVJ");
    msg.op = 12U;
    msg.lat = 0.77977235866;
    msg.lon = 0.74549992534;
    msg.height = 0.804815130096;
    msg.x = 0.971258745988;
    msg.y = 0.857427210012;
    msg.z = 0.407650515149;
    msg.phi = 0.0185519011399;
    msg.theta = 0.906037692107;
    msg.psi = 0.98756897664;
    msg.vx = 0.940077757466;
    msg.vy = 0.886987829454;
    msg.vz = 0.1323005538;
    msg.p = 0.669798872721;
    msg.q = 0.933735242201;
    msg.r = 0.800764587367;
    msg.svx = 0.80879977052;
    msg.svy = 0.00688033171413;
    msg.svz = 0.00300090217476;

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
    msg.setTimeStamp(0.0814074777238);
    msg.setSource(49329U);
    msg.setSourceEntity(127U);
    msg.setDestination(40072U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.932717442497;
    msg.lon = 0.0458862945913;
    msg.depth = 0.505236254853;
    msg.roll = 0.49220530892;
    msg.pitch = 0.17104569695;
    msg.yaw = 0.00667681737952;
    msg.rcp_time = 0.714427700558;
    msg.sid.assign("BPPUPKEJMOAMHEOIJUTQFDLYLYKDNBC");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.667003482834);
    msg.setSource(36935U);
    msg.setSourceEntity(132U);
    msg.setDestination(34656U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.848684068408;
    msg.lon = 0.78913409525;
    msg.depth = 0.0561842377736;
    msg.roll = 0.593919389085;
    msg.pitch = 0.67962330735;
    msg.yaw = 0.0779218407932;
    msg.rcp_time = 0.0321155068689;
    msg.sid.assign("JPIAWEACLCZOAMVFKXOYUMYJJFNQTOTRROPQEGTWCBBBQBZTMARRYOJZCDCDFQDFNSFHLJIYLUNGYWLJZWQEVDUZRRFDOMKYUYHPUIVNQHSANTWPFEJDWNRSKIRKZORSXSIEPWEUATZZSMZDAKUIEHWKVKXGLHW");
    msg.s_type = 182U;

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
    msg.setTimeStamp(0.0516122779709);
    msg.setSource(61157U);
    msg.setSourceEntity(209U);
    msg.setDestination(45053U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.518557156045;
    msg.lon = 0.215218168667;
    msg.depth = 0.823639373663;
    msg.roll = 0.0263986253239;
    msg.pitch = 0.910943079702;
    msg.yaw = 0.267557260045;
    msg.rcp_time = 0.790703289643;
    msg.sid.assign("NASDTUXCJDNTPJSJQBSGFUIXCDKKDLDIPWAIFXHRALBBMMNAZQHQKDWPFTPGSXHYQPZLOBLRVTNRUKGAMXGXBVNWFCRUMGWFIHJDROFBJBYGXVTNYLZZBACOQMQYEEFSZVCGHMOWMIRQEXKICPUYQKNYSPJQDIYAULUNUNTABSEOZZIYDUHKTTJLEPVMKGYTWOWHISSOIXPEUCF");
    msg.s_type = 158U;

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
    msg.setTimeStamp(0.0474885337481);
    msg.setSource(6445U);
    msg.setSourceEntity(249U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(1U);
    msg.id.assign("RENEMBCANOIL");
    msg.sensor_class.assign("SKARNPXTAGVIFZCINGZHJOQLULHGHQQRQVFQVXOCULNBTLHEHGDQBPWMWOEAVHFFSCCGUXDSOFTXPQJWLKSJRPEUZRNSETUPGFZPZMYYEQAWYTIOTSACAVPCWRBEYCUDBBPMCCEXONMTM");
    msg.lat = 0.160086449844;
    msg.lon = 0.207756868581;
    msg.alt = 0.855285246656;
    msg.heading = 0.857669769273;
    msg.data.assign("TKFUDPWSKXNQMORMHNBMRZCXLZXCCFOVMJDACDOJVGVBBAIOTEAXCSJDOPQAVE");

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
    msg.setTimeStamp(0.823622679587);
    msg.setSource(31791U);
    msg.setSourceEntity(200U);
    msg.setDestination(21045U);
    msg.setDestinationEntity(170U);
    msg.id.assign("DFIDXIXMDNLNMJACCEYHICBSQYAEVMXHPVYGBBWWMGKDFXTRWCZMUPRQKWDSQGNPGTQEVIVYKPABAXPZKGJOHWPUWCSSKEDCWIDSBOZHOLJSCNLJONU");
    msg.sensor_class.assign("GDQJWPUUFZBFCSZIMGXXFZDAUWWAVPRLSGRQVFCEFTVOCLOBJHMKOHOMYXRCBIIAPIEYSNEPFJIAHLPOWBYGQZCWKDRJIRKKOXPVIZPVRIKLEVQYRTBPXGKDZNUDZDCFWWMDUPJJSKNKDUEUTGMMHHDSQNOSNXXNEOMJKCBJBQMOXVAVXOTMWTEJVGAQ");
    msg.lat = 0.73354802504;
    msg.lon = 0.7557668502;
    msg.alt = 0.426380790977;
    msg.heading = 0.253401097177;
    msg.data.assign("KPROPJCTLJURI");

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
    msg.setTimeStamp(0.206331182154);
    msg.setSource(51922U);
    msg.setSourceEntity(192U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(196U);
    msg.id.assign("DKYAOYUVLSVHQCZAACIKRJOUVIVBJKUBZENPNTLPINXJFIPUHFBCMFGXGLHZRGXJSRRGBKREWFFLVXNDSITBCMJDIZDKEEBSCMFGTIDIUOUYXLOWWMYXGXUOWSPPOJFPATNONCTXVQHWLYTOKWQKCYDZENFRMCXYCBHQWHTNAJMZZHMSOWQEAHDUYLQPJDZJGYLXGZETQSPEBQATQHSFWLSNYSVV");
    msg.sensor_class.assign("IYOBTVDTNSRKXQIPXEFFKGVTXYUZEZQELCTSCIPPUGBATCESFRWDGEUGWMZWTRKMJLLOJIMCYAXTPMOVYWZKKLUHXMQOXNBSABBLJMDHHGEHWHCOMKNXJPJRJNDVNEIUAQSIBKZFBWIJNFUSWVTBYIVGPGZBQHCVRPLKPOOPDGZCINVULMIZTROZSCKGRUUMFYSAARDOHCLMZPFLDVHJSQAYEREONYWWVHRANCUSQDGYEXDQWLJA");
    msg.lat = 0.253984911072;
    msg.lon = 0.783149357371;
    msg.alt = 0.719402755364;
    msg.heading = 0.952062981056;
    msg.data.assign("VTOWAUDAULSRWAHSDAEOJDJIAE");

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
    msg.setTimeStamp(0.561159123046);
    msg.setSource(25541U);
    msg.setSourceEntity(10U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(98U);
    msg.id.assign("XBPAECRKLCPVYISFKGTSEWUONDDNTDJIDELVJLPFAWYRTSROYELEQKSQRXECBLOSMLLSYFNA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DTFSQBDIHIJRJKLVMBXXCCYGOGNCAIQEVPLLJRFJSULEEVATKEVSQPZMBCLDDKJ");
    tmp_msg_0.feature_type = 154U;
    tmp_msg_0.rgb_red = 177U;
    tmp_msg_0.rgb_green = 102U;
    tmp_msg_0.rgb_blue = 220U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.581652867136;
    tmp_tmp_msg_0_0.lon = 0.524479616803;
    tmp_tmp_msg_0_0.alt = 0.592260954057;
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
    msg.setTimeStamp(0.541260342794);
    msg.setSource(48857U);
    msg.setSourceEntity(241U);
    msg.setDestination(42777U);
    msg.setDestinationEntity(182U);
    msg.id.assign("NELNNIHIMIYQKCLABGVLBXDETSEFTMXGEOEBINMWFTENNOGARREGPEJVNLQLWHUOHFWYHULSGNVFJXFYJDMPQSDYKQYVCKQSCTFXZCNWXIOBVQTGAFJBGH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WGLMRHZCDYOJLIHQXPGSMPHKQG");
    tmp_msg_0.feature_type = 125U;
    tmp_msg_0.rgb_red = 121U;
    tmp_msg_0.rgb_green = 214U;
    tmp_msg_0.rgb_blue = 169U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.996030895679;
    tmp_tmp_msg_0_0.lon = 0.837817744544;
    tmp_tmp_msg_0_0.alt = 0.49203993222;
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
    msg.setTimeStamp(0.0332107713881);
    msg.setSource(39817U);
    msg.setSourceEntity(24U);
    msg.setDestination(49608U);
    msg.setDestinationEntity(74U);
    msg.id.assign("XLUGXXILABKAMTLFEZXSYTQODFBNBAYEGMFPBQOQJGVJZWGOUMHORJZOXUWMQGPDAAFJYWJVQMHHBREAULJDZLNHWCZPNIBKMQGTTPGXBVWDTRTHXFMEYHTSNWEWCANCOWMKISRAILRORAXPRTJCUINGUGYIYPVOWUDTQHU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DSKGRCYSFGTORMJYTWLJGHPJLNETKKMTMLDFJJTNNLITLWNUMXWGFEVOFMBBADCZVRCZIRMTEAVYPOELAITAJUSKBZXDRDPGHSWEZCQUUBIHMDLRAVGKZCEINOAXGULJ");
    tmp_msg_0.feature_type = 199U;
    tmp_msg_0.rgb_red = 229U;
    tmp_msg_0.rgb_green = 77U;
    tmp_msg_0.rgb_blue = 15U;
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
    msg.setTimeStamp(0.747044416063);
    msg.setSource(2968U);
    msg.setSourceEntity(32U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(134U);
    msg.id.assign("BZXDWJRWDJSYNXAERUKLYIHWQKQMPPNDEKSOODRJLIFHUEGANNJKNZVDGUOT");
    msg.feature_type = 253U;
    msg.rgb_red = 177U;
    msg.rgb_green = 22U;
    msg.rgb_blue = 217U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.404883962183;
    tmp_msg_0.lon = 0.564497875365;
    tmp_msg_0.alt = 0.388620388184;
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
    msg.setTimeStamp(0.450286978257);
    msg.setSource(38404U);
    msg.setSourceEntity(229U);
    msg.setDestination(3060U);
    msg.setDestinationEntity(19U);
    msg.id.assign("LTPXAMPMYHWOGITFLZWCASONBRIAJRNBBXFEYGZALJNRVTYMKRARQWLNGFGNKVDRYIHIUUQEJKJBCNHGNGTDPRUKYJXJDQOBUIAZSCB");
    msg.feature_type = 254U;
    msg.rgb_red = 44U;
    msg.rgb_green = 165U;
    msg.rgb_blue = 250U;

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
    msg.setTimeStamp(0.165688613333);
    msg.setSource(32883U);
    msg.setSourceEntity(11U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(112U);
    msg.id.assign("QTUBHXRQKFVIMVLQIBNTUUCCOJEFH");
    msg.feature_type = 72U;
    msg.rgb_red = 168U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 220U;

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
    msg.setTimeStamp(0.428678961351);
    msg.setSource(65217U);
    msg.setSourceEntity(23U);
    msg.setDestination(29181U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.833844720527;
    msg.lon = 0.252925519789;
    msg.alt = 0.663538135888;

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
    msg.setTimeStamp(0.833169073565);
    msg.setSource(59625U);
    msg.setSourceEntity(163U);
    msg.setDestination(38173U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.748989162007;
    msg.lon = 0.102344107613;
    msg.alt = 0.416152365196;

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
    msg.setTimeStamp(0.793108739414);
    msg.setSource(61953U);
    msg.setSourceEntity(16U);
    msg.setDestination(20383U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.239977342633;
    msg.lon = 0.143552404308;
    msg.alt = 0.07792216575;

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
    msg.setTimeStamp(0.453620834916);
    msg.setSource(5128U);
    msg.setSourceEntity(140U);
    msg.setDestination(39981U);
    msg.setDestinationEntity(91U);
    msg.type = 85U;
    msg.id.assign("MHETJNJEATPPZYKRHPKWJKEJGMQVIKQELXQJABSJMICFUFTLCUXWHEXAQJEXLGZMBDCUYFDKBFUQKAOYMLKNOY");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.0325657073727;
    tmp_msg_0.y = 0.7484806365;
    tmp_msg_0.z = 0.178051025403;
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
    msg.setTimeStamp(0.160989392389);
    msg.setSource(5037U);
    msg.setSourceEntity(177U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(157U);
    msg.type = 234U;
    msg.id.assign("FGHVADTODMPCDVOJUXAXPRQRZNDXZUEDUPFNMRPUZIZQSALTVP");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 60U;
    tmp_msg_0.mode.assign("RQEFPCAHTVTKOWBQIFKZLNFDHRKGZGUNMAANDPUBCZCUBZXJDZKZIVEYSOGXUALVWRWXTJLFUSTEITZCGYYGTTNIHRFIKRSXCZLRYYRXMLGKEUCYQAJJTBGJPLBPEMDFPPBJLCKRWQPEGSDSWSRMFADNESIHZBFHDLAWNDGVIPCSIXWVQNMBWAMWPMHNMDDOHVMVFAKRTVYXVUHXIKTVIFZ");
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
    msg.setTimeStamp(0.248971415686);
    msg.setSource(43928U);
    msg.setSourceEntity(174U);
    msg.setDestination(56831U);
    msg.setDestinationEntity(182U);
    msg.type = 87U;
    msg.id.assign("CNNFWAQGWNWZANCIJISSBSVZSRFUJVDYMDNGTQPVJLJYGZMXMGKYLHZPSGJFDIBAEBPKHLWVSXBUMMZLXCDTBEKJRL");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 110U;
    tmp_msg_0.angle = 0.191244485131;
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
    msg.setTimeStamp(0.685918919139);
    msg.setSource(43515U);
    msg.setSourceEntity(92U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(213U);
    msg.localname.assign("UEATLGAMSBFGHKQKFWTFXXSVERBHNADZFRUYBCISYEIZMSZDEDIZXPNNNLSBTFCGDUXJPWJRVNKEEXQRTHJYUSRLOHWCUOIJFJZVGPYRAHOECKUVCDPWYYIZLZTZZGKHGMPMQDOCFHDWLVAQOVSLHLZWPTPJAOAAURSIWNEQJMOGV");

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
    msg.setTimeStamp(0.495832243395);
    msg.setSource(6734U);
    msg.setSourceEntity(171U);
    msg.setDestination(19394U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("STPAJBEUVWFDGFXQYXFPPHBMNRGBYMXQZTQCLMZUYIDDVDLJZPVXUQGNYFJJAFQGKCIVTJYDPCWQNHHYLRTSUKWPMXQKCLUMEOIIVNCQKEOUKABFMFAWZNMSDKEAHSHECODMUWJRBJGXETLTLUFXOKXKGOBYZCLOTOEUIIZJPSRPBACQVRYAPRYHQFNTDHHZWOOSBGNGIEYKIZVWSRISBTMZDBMGLSAVVRXRPNE");

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
    msg.setTimeStamp(0.290593490432);
    msg.setSource(64587U);
    msg.setSourceEntity(61U);
    msg.setDestination(43195U);
    msg.setDestinationEntity(58U);
    msg.localname.assign("ZTQXHBJKUGHWAMNMKDPUCAUWEEBZWIVZMIRLQEHLTYRIACUSRNKZKLXIFBAQNOLUSYWZCIKDLYICLCVCKOQUXWDJPMUDVSVAPRCEJASRFJNJYFPKXVNLWPDXHTFQXCOBVGZFSNMIUEJGVRFSNCQLHQBZWHNFFGSTIGKDHWGOMXBVHZZMQOTBGEKRSTDALBCUPHYPWVAPREXOEAJGHIRTWBKEETJOPGDXYTDMAYFUJMBIDQO");

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
    msg.setTimeStamp(0.359929089543);
    msg.setSource(48769U);
    msg.setSourceEntity(86U);
    msg.setDestination(34294U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("RYPGRHDWVAWNCZTSEWZFHIKONOULADCEDLQX");
    msg.predicate.assign("WSBWRTLOYFHTZKJUXCBUKASCGIKFAXSPOXNLXTQJPLSYYRVWECFTILDMMDRTYZCMUANRQESTUAGVPVLKKCHKPUNYAWBBYAOA");
    msg.attributes.assign("NKSVVDYNHWOKFETFSVSZCNMTVXKBZOHYGSUMZGYASHQEWCWFWARFUFKAETFUZJORIWJRBOUKMXZOXILDLQRGOZYJQMNHDBVZBGJZDMURMNYXIDGPWHDUHOPOGHQOLGLKAIPINOJILARAGVKDTCSPFEDHCNWJZVMBEYJTSURTFWKLUJWBWCSVCIXVQPPAIETZNSTVFCACXPQNXQMBHKJCNJALEBYYXBPACYSRIUTDXEQPPRGDYKHQXTEGMLB");

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
    msg.setTimeStamp(0.417905744735);
    msg.setSource(40046U);
    msg.setSourceEntity(129U);
    msg.setDestination(65305U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("LXWMOYLUPMFZIPWRAXAASAFZCNNYKISLCQWNNBGYWTTDFUYJLHJ");
    msg.predicate.assign("CBLLVOTWOHSQNIYFCURZKYQABGXEECXMEBNULGJOVXVHBNZQFEUHNWKRLAUUGFJCANBIRAQZXRTWFGMVKGWIILXQBUVQLSSSVFOXEQMWFTPAZJCMSHOFMLEPGBHYDCGEGQTWURZAEVJJDBYTZCXNZCCSHIOTRSKSMSLYEVLIDNDTIVWZAPKNXXQDFLVOPJJNKOPJRDYRIPFDTKFDK");
    msg.attributes.assign("KMMDTZNHIL");

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
    msg.setTimeStamp(0.452171618446);
    msg.setSource(42041U);
    msg.setSourceEntity(82U);
    msg.setDestination(7644U);
    msg.setDestinationEntity(203U);
    msg.timeline.assign("RTBZXAKWGMPPMRVUYPTTCRWXNBDUFKMYOLHEVRMVUKFDDRGBKTYRYZAJTKKQXSACGNHTZBFSFSPQTKQRDJRHWI");
    msg.predicate.assign("YEOXTJNUQOBWMIZKUVHSBVWIAKKMJXCYJPIBMVDGYDXHUVQPBDQHWCDHPOIRWQBZRTLXNOJLRPVGOPAOUTGDKBYJYCZYKSSXYVAEGTLMCEOTNPAVHAABKCOUWYHFDSLEEFTCQCGKWQGKDUJMFAFIPSEZOXRLPBQCSZPUBIRVFPFLXGNYBIIHGWUOIYHSFZJLHGRIQFZNCX");
    msg.attributes.assign("NNDHLCOJEQWZRFRJOPMSMGPZVVZPDKKOVBKXJPCLELSIQBCNEJTIMHJPTKCNMOIJKGPASJEXNQRXYMIQP");

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
    msg.setTimeStamp(0.353246556502);
    msg.setSource(63973U);
    msg.setSourceEntity(66U);
    msg.setDestination(8552U);
    msg.setDestinationEntity(115U);
    msg.command = 94U;
    msg.goal_id.assign("MKMXGFOWYBKWONXRFBKFIIVPWKTZRJWPYITZCZWHIGZECGBAANVVILQYCHHXKVYEEINQIJAHYSLPTKHGDZKOAWURTBUOTOXLSBUNPAPRDRMMCUNQQSNEOJNLLTRVWWDDRSSFMHVGFMHGZDDMXCWBAJJAOYKOQBJGTLGPEJGXIXELPZQC");
    msg.goal_xml.assign("ZKEGTFWQVEMKKKOZDHLVUWSVKAS");

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
    msg.setTimeStamp(0.332562196472);
    msg.setSource(34933U);
    msg.setSourceEntity(53U);
    msg.setDestination(21188U);
    msg.setDestinationEntity(99U);
    msg.command = 111U;
    msg.goal_id.assign("BAQRKOAYWHFSPCAIVFMOCKJDCVSRMOTBKGQNFOSEFZXIQTSFRBQUBCGHOPGOJIZYLUGTGGKKMVNFVLLHMTJAAJKFS");
    msg.goal_xml.assign("BEYBINCYPZDSAICBSYFQDPNHWCJZIILQGBCAIVIDOLSRLFVACCUQGLGQYFXBMRWGDXVHQJNOPXKPNTYBLUZVRTKXFXFHLMFGEPPOPAHHIGLRBEKXRUARROASRNAZDRLZZQUCJVBJHWBMUTSZKGODWCWZVKMUKBKUVPRDOEJMZPJOINMXTESTAQGWETKDOVKLWNUTAHNNXFIJQSCFPVVGOQDJWYSDFKHHLCJJTQAHMXZWFGMYUT");

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
    msg.setTimeStamp(0.482355155052);
    msg.setSource(8801U);
    msg.setSourceEntity(135U);
    msg.setDestination(64757U);
    msg.setDestinationEntity(67U);
    msg.command = 80U;
    msg.goal_id.assign("NYRGSJYALS");
    msg.goal_xml.assign("VAXNKVOTSQTLCEECPZKIBMDXIXYPHFAJUKQNHJMBZNWRXXTLSBVFLYCYYGUKBIPIZWJJOZMHXLKFHGYBJAGNHIYOQYODMNFRRVO");

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
    msg.setTimeStamp(0.519864480995);
    msg.setSource(17264U);
    msg.setSourceEntity(183U);
    msg.setDestination(49572U);
    msg.setDestinationEntity(196U);
    msg.op = 76U;
    msg.goal_id.assign("GKIIACIDDQUHJXVPLLIFXSRNUFMSPSRTSJJLWVEBAPEVMLWXTQBEBABZNZOOUHTMXGHUONZZLRODHMVPRHOZCYMDVXHJMKFKV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XISTSKGYYCMLBYPIYIJZVYKFJPCKACKTPQLRUTMEQVPXWZPOMDIIARHOPMTMPCRVMFGTGCSFTEWPIRWOMPRXOMSDZTEXJROHUEXA");
    tmp_msg_0.predicate.assign("DHZOMSCDITOETTR");
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
    msg.setTimeStamp(0.974843971843);
    msg.setSource(10661U);
    msg.setSourceEntity(141U);
    msg.setDestination(6525U);
    msg.setDestinationEntity(199U);
    msg.op = 83U;
    msg.goal_id.assign("BMREAEEDIEKVYGLKDFHXBWMBTAIERAZMXURJEFJMMOBCMBNQRQPOXILZDVXGHZXWJCDBVKYRQPIPPKCWPYWJOMPKLUGOCJTONVWAHLU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IYCTBNEOAXHTPLJEUVVYJFBTPMLXMHUJTGIGKENYCFVEMNKGESVZFZEYZVYHGKXONHDJNRDRVLSLLEMGBILKDHFTBMFRGCOWLERZMXMOPJBJXIQNIHCWAOPFAJZSWWFIQCXYYKDNDTVHRQOQHQSWFTECBGLWKRPMOBGKEXMSSOVJADUDQ");
    tmp_msg_0.predicate.assign("SBUZMPZZULWDFSERQYNGHJJMEVTTXLEAKUNVXIIKNMMFWZEKYHEJIHRGOZQCKFIIXACOSSQRLFLSWNJYLMGDCYDJZMGUAPULGNIGOPONWYPKJUPVDNQURSRFZKBLJHFOBYVJRCVEADSFQDWOBBPVBXRUASNHFVHXXQCCGJCCIXKSMAFU");
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
    msg.setTimeStamp(0.683217959842);
    msg.setSource(19063U);
    msg.setSourceEntity(73U);
    msg.setDestination(39938U);
    msg.setDestinationEntity(232U);
    msg.op = 145U;
    msg.goal_id.assign("OFZLSUYAKQKQAZCIRDOKZNNHGBFPKDVCIMJGLKFDLHRJQPUQUNTYJKLPWNFMWKMCSWLRDVPHNRWBEDPYROBHJSGHOZEMMIYTUGJJVWPBXMNVRKTCAXSSWOBXMLXSHBDZUNVAPVIQVHRLUEGFTOTQEDIKESPMOGREZXALEOFRYOXJTQFYUWCCVIAPGBEALMURBVDOJGIUADQCJCFSNYZAPBZYHIEY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ORJRIEISKEBTTQRUGMIKMZGQTCLPPCHIMQCLKVRHAGGSGUNSEBMASESFRHYCTNEDQFGWXMCUFXIVTGXXKHOTJUVMRQYDVSIJYVEFVMXAJIHTCKDYSUXOONSFDZIEFBUMCBYVKNFJZQXWWOLPPLOEDHMPSZRZG");
    tmp_msg_0.predicate.assign("GDTEQCHHNYPIHOYLILVGPXGODTAMLHFMXWCSLGQIRTYJBYFWQZSXFCFQUIUBPOCGDTCDLVSANLJKEZTSSDNMITPRTNCDIHYRVUMPANYQIOUIREIDPAMWNPCSBYHWRUOBKHBWZLMVKXJEVODIVGZXGGRVWJBOSXRDFBKFGQAKMONQKWZNEUKUBAXJABFEYOWOEFCVMHLCQWKXSEJNJQQJBTJCXKAATLZFTPZSKYPMURJMENVZYGPLAHURUVW");
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
    msg.setTimeStamp(0.915765185077);
    msg.setSource(17686U);
    msg.setSourceEntity(209U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(176U);
    msg.name.assign("PAVBPCAODLTAHDQLKLPSSXRJXIOZFNSJSSBNJJ");
    msg.attr_type = 187U;
    msg.min.assign("UQZBBZCJTONSXFAQLKIKWWVTCQILYFGHORTFJROMNJCBVYSYKMJMMUPRKNOROFBADQHVCRVSHISZY");
    msg.max.assign("CMUDATXUARPOEOMPFXYSWQHMAEUPGSBDUVWDKFZOXBMXOEEVBCZOVIYPDOYHHCVGAEAXBLBWDBSMTHBBDGNLQMSOUHIALWLVGLSRJVJYWIITQKEUOYRXXACXJGOFPAKIUYZRFRZYZKWFQALHMJSIEOWPYCGHHSWJYVCTSEFUMGBKKJNEZSQJIJDYEWRDPQNGSHFABTMTRVLLRGKKXRN");

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
    msg.setTimeStamp(0.393612508261);
    msg.setSource(61801U);
    msg.setSourceEntity(117U);
    msg.setDestination(27085U);
    msg.setDestinationEntity(4U);
    msg.name.assign("EPDAZRVVPGVZNCCPNZUOXCBYIJCTZINZBRIKADGYHKKFYAPSTUQKREFHLVCBLORMJDHLMMOZNYGYWCXHDJWXISXKZCCGJZIBTCBMRHVLUAALKFLXMDFBEMLEVEWEXEUDOWLYSOMSSOSKNGNVDWXSSBLEQZEHRWNPFNUHBVFRGXMUWFCEJIDHYJTOQMZIILHJRPYUJVGFPHUTQIADMOGOIFPTPQQYVDQRWB");
    msg.attr_type = 163U;
    msg.min.assign("YUTRYGXSVNQROSNPXNAFCEKTTOQCMXQUDCWYIFKRGGTBSDJZRZWZUNVIOJEHVYDVHUBYILGMMTDF");
    msg.max.assign("QQQRCDRKSVNMWCORSHTMPLTAOEXFQLBYXGBBZDJIUHQLRHFQLRZBGOTXAWPTGWQUAJDCNWOJFXCUFIDSASSFUYBRFYNKPVGZMXEQHHCVAVCHXWEOUCXOHDTAWNMVTKRINJYSXJMSERZGMJYTVWDDLVEJNGSEYYILJAOXIXVEKNANLVJVPKBIOSYPZPTPUKUZCADZWMGNBOBRKIOBQEHGLMP");

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
    msg.setTimeStamp(0.218236010448);
    msg.setSource(36955U);
    msg.setSourceEntity(184U);
    msg.setDestination(58416U);
    msg.setDestinationEntity(240U);
    msg.name.assign("TYOYXAIOWIJLVRJMLMMCKBABFGOHNALIMHCBRGAPIQYQUKJSQPLFTNEIGPISLJDOWUIIQWJZYCEEAVQGMVTGDPANTRSICKFUXBANPGTVSWLXKZZFDNKRCBJXHZMQAFUDXZZLVYGQPRFBQXKBWELXWSHNOOHZRYMRSPPHNDTDFROWEWEUYQOZKYHLOTHSUEQVDWACZSUPJPEWDTFEEIZNCJ");
    msg.attr_type = 168U;
    msg.min.assign("ZZAABUYGCILGIRTDMGHFIFLVLPVEFYNQEMUMPXCAQSXMPVHXHINDTZOIRWZFHPYXXNKFFJTBRACXYLFPYJUOUKENOCZPNULASRYMZAEDMWWRSJINKZWHQWQVFAEBKPBBGDDPBBHDVRXHJTMYTZSMRWJAKBUSXTSPXQKGRGJOWJENIWELTMUTIAJZCCVIXCOVKNQGGYQZWDOBHMKYUVHDSOBLORDVNSHKCYRQGACKGSO");
    msg.max.assign("ALDNLDPTJWEFEAMQIPRBLKZWPRPCNBGAFGLBALNGBLBPHUNBDZ");

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
    msg.setTimeStamp(0.947382919312);
    msg.setSource(63537U);
    msg.setSourceEntity(14U);
    msg.setDestination(61678U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("JJGXTCPYZFPHTYHDUW");
    msg.predicate.assign("ZIWNFHYZKDJFZOTBYVXDCMBWIDJRUUNGBUVWMESTWGSNHWGORSXTVXZNXJLMYYOEIYUBFZDGYMXLXNVJVONJOLMEGZPX");

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
    msg.setTimeStamp(0.483616190888);
    msg.setSource(41577U);
    msg.setSourceEntity(123U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("HXQOOEIGAWTTFYQNMESTZIWDCKHVAMGHBWJWFPDQCYSZKSWNABKBUCUFLNKSHNKOVECLGPPOFRRRUBRLVVRLSCOVYNDTMKDLLATRTHMYADACUWJHZZJCZBFLSUISKFABERRIOWDDMUYEQZSMPJTGQDOVHJHNXVBVCGOMPMYXFYJTQVGOQCQPGPIEMDICEOTABXWINKXFWJFHYPBGKNDFVNEHLAZWZKZLYXAELIISR");
    msg.predicate.assign("TMKJBVVDWSQEOLFXOSEDJZUUZPALTFZMZYADSQRRZCQKRLSHLIFOPAYPRAQYTZXELSHUHUMLOJWFVYNVGQCQXCZIGQP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GACAJSYWVAFHKEPXZOTDATMUIFNPWFGOSAXUQWZDRVZWPQZBIWHDBDFZSFQJMJXERVNMERALQFDOMNGYRJJSWGSEXQSMAVUOJQLIYMNUPWBRVAXJRTKJCHNBVCXKCGWIHYMLDDDDANUTIRIQJFYLIKCSYBZEFDCILYKUJENUTATLTVLPVORBUOQSYZOCCNEERMXPNKILGPHWPSZOTILVHHBYPKQVCXPMGUNYHQEEBLKKTZBRGGXHZMCGB");
    tmp_msg_0.attr_type = 44U;
    tmp_msg_0.min.assign("JIXVJHWPSPZTEBBKJHLZQNPBXXTKFFACKORUTEQFEWELJSVJQXIYEWHXENOMAOCVMWMPWQFLUFQGTUSMNJVKVFQUKWDHNWPPYBOGGVEOBHRDTTYURIZNRCWVRIJGKMBAYSPCTRHUQDLIPJANKMZXBZTKVRLSZUANSHYCCOASMSQQLALDZFFACWECFSIHPGWJBYDZSFDLDVINLRKTOXHONZMPBQXODIEXAUYJYCGAMGCOUBDYMZTYGRVHIGDKG");
    tmp_msg_0.max.assign("OFLBQKWRELUMSXYPZVUKVJLBDGZKRTOVEUVREWHWSVETYPMBVAYSYAJIYAPTUWDPELEHTLOZINTHXYTLSRXJDXARBMIFUQDKXMXSXCZH");
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
    msg.setTimeStamp(0.995030917417);
    msg.setSource(15890U);
    msg.setSourceEntity(80U);
    msg.setDestination(53783U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("GVVGIOBPFORUBZPOWKDISEKPNMEUZLIXFGJIWGUBTXAYDTSYRYQYMNARRXHYQNAEIGRQQQHWTQPLLLQBJZTXOTSISFUBHMXSCTZLIEFNHOSSKDUDHJBCMXCCNVFBHPVDYAA");
    msg.predicate.assign("ZGJFKLERCWBWUCRBOEAIPBEWT");

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
    msg.setTimeStamp(0.285012956666);
    msg.setSource(40573U);
    msg.setSourceEntity(97U);
    msg.setDestination(2629U);
    msg.setDestinationEntity(113U);
    msg.reactor.assign("RAGKEGSHCCZZESMGMBADPJOVZKNUVJOYSZXHJKSTRAOZPPTZBAUMMGYJSYYJERFVQIRHWSXOCHKVUIWNHYSQOOLFIDZCCRMQVKDVRTLFLOMKRKMBTDORBTGTEVQIELYMELSWXVXAHWFDGPUDIUGTSKQJVXCGNFTNUPCIBPLONXBQRYLQUJOCHAFFIWWFCSWCEZT");

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
    msg.setTimeStamp(0.513784533231);
    msg.setSource(60170U);
    msg.setSourceEntity(64U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(163U);
    msg.reactor.assign("UEFBBSZQBHESTAOHFBMCDFHAKWZYPMLARDCXNYQTBRLMVMJGJWVXAVWDAOPGELWSMINHHUCQUBIPERIRHPHFQTYUZYVVIBWFEFKORLNXUHXZIKDECWRVZME");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QPQHOVWKQUPEIYJFDITBXDQPVCTNLEVBMUXMBQDOHGOIINJRYGTXXTSLLKKGPVNNFZYJSUAYQPZDXGEEAUXCUPHILCMKCGUDXRVNWVABSRGYOTFXFERUGMUQHCDNRFOFLMPZPKNYDTLQHLSIKHTFTIZCJMJSEDQZOZULIYTNZJSSOKKGXYCOFVLA");
    tmp_msg_0.predicate.assign("HRAFOXIMXWGCMRZRUKXTHPADOAOFQJXYSFNBSPRUKYWSEDQZVTTGLAHFBTBIEKWETGIXENXIVBLQJTUJHDCDUUEYZYFPJZFICJGBOGVLPEZNZCSGNGBVEAQTHKFXWSOCDKMHMLVPTNHAZMHCICOMRVSMYNRLYXXGW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XYIUIGJHQDDWGDOZLIOHKGWPBUJFUPQNLQBCCSWVIUDIINBAERUFFXQMOWVX");
    tmp_tmp_msg_0_0.attr_type = 12U;
    tmp_tmp_msg_0_0.min.assign("SFJRSUVGOHSWJJFQOUOEBNQGMVZFTNPQLL");
    tmp_tmp_msg_0_0.max.assign("QTKDJUKFBVQXNQYRZCISRRPPUJOMEUANQWXVLFGGDTNVTATRZWGDGMENALDAIDHYWLOBGXMMPDXJMRBDBAMOOUVXSIADYICFCCIWFWYYCCMPKNBHZLILGEPPWNZNHNOXBHUYAJZKXBULTQWVMMQXKEUCZIVJHSWFSBOOLZKCNOIVHHSEXP");
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
    msg.setTimeStamp(0.295152526582);
    msg.setSource(54303U);
    msg.setSourceEntity(189U);
    msg.setDestination(22200U);
    msg.setDestinationEntity(151U);
    msg.reactor.assign("ZUEKWWHJWUHQKQDLDCAJSHQEYOCTBDTINPLFXSGWWPPXZXLUFKMXKYQYEHONUAGGUKBFQKTHHGMTOETHRAMQRBICWIDBBFNBGXUJSSXLCNVRPXOCZQIFTPNTMHDPSZJOMVOPGDCDJVVPDZSROJBNITVPMSBQUIFECVSXDLQPLZLMIUWCAEWNRYVYGGFRMALYWUNFWAIQSX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PSPVJMJUOJMUPTMRAKWTZBUISNNJKUAUNWDSLAGVTSFCBFU");
    tmp_msg_0.predicate.assign("GWFPQNYWRCOJTIEUZKHTJGNKKHAXVOHHQBEOSWGVTDRXILOMKGHMQPUMDEBBYXZRQTMQSJBTVCKL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TCKOOVRMSWFGKEXVBMUEKVTQHJWGYQWQJNOYEGSYZUOXIXYMSGMXLIQBWZYCPPTMYKMURKDXIECJQVBLZEOWPPGVUDFTRIPIWEPCWRHUJVSAKWJJDSAZBNHLFAJZZHVHOXU");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("SRGCZYIKJTATWQQGNGZEYPKKWJNETNOFCZLECAPDLICFKKUCVGREPEYPQPTIRFFABTWWIKKQX");
    tmp_tmp_msg_0_0.max.assign("RHXPXZWUWTIIUDXASSBGYCYOMJVWZDHJALDNZVDKTQNTMQFDCVLXCQRVLWOPMPOBEPVEXBCGSQMETSSEZLVAXIZRUBNIKPLBYHFZMENIKLNBOWBQSOISOSQAUTEYECEFJFZYKCMDAUFKWFZUHWHRGGVJFLUAGBURJOXONEGAUQCVGPAVRGSHXQMTKTBRYFKXRPYEJL");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.723413145556);
    msg.setSource(16335U);
    msg.setSourceEntity(57U);
    msg.setDestination(27214U);
    msg.setDestinationEntity(92U);
    msg.id = 55U;
    msg.width = 53927U;
    msg.height = 54872U;
    msg.widthstep = 18851U;
    msg.channels = 204U;
    msg.depth = 2U;
    msg.finaldata = 216U;
    const char tmp_msg_0[] = {-104, 26, 20, 84, -90, 21, 76, 0, -45, -80, 51, -91, 16, 61, -122, 14, 61, -85, 94, -125, 79, -120, -34, 72, -119, -93, -18, 45, 98, -83, -51, 23, -46, -94, 123, -13, 32, -99, 119, 85, -102, 117, 51, 101, -107, 88, 90, 97, 31, 125, -114, -43, -112, -63, -5, -21, -52, -37, -48, 32, -61, -63, -20, 74, 87, 39, -29, 126, -12, 30, 61, 14, 21, 96, -118, 104, 4, -45, 114, 70, -116, -18, 22, -58, 52, 20, -67, -26, 58, -56, -16, 116, -102, -81, -65, -92, -100, -30, -25, -47, -69, -90, -123, -85, 90, 73, 54, -55, 87, 98, -81, -112, -24, -25, -45, -108, -67, -52, -19, 100, -111, 76, 55, 47, 100, -10, -4, -3, -68, -77};
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
    msg.setTimeStamp(0.0115938994122);
    msg.setSource(36114U);
    msg.setSourceEntity(59U);
    msg.setDestination(33827U);
    msg.setDestinationEntity(202U);
    msg.id = 151U;
    msg.width = 44344U;
    msg.height = 41689U;
    msg.widthstep = 45873U;
    msg.channels = 5U;
    msg.depth = 236U;
    msg.finaldata = 21U;
    const char tmp_msg_0[] = {-8, 100, 27, 45, -90, 57, 80, 28, -64, -1, -89, -48, -40, 67, -22, -26, -64, 20, -35, 70, 71, 83, -126, -49, -18, 37, 30, -122, -81, -104, -79, 96, 14, -96, -110, -119, -100, -25, -87, 46, -4, -8, 66, 43, -46, -75, -58, -82, 96, 30, -33, -93, -37, 19, 49, -99, -60, 59, 24, 78, -118, 118, 22, 60, -31, -28, 43, -10, 44, -112, 45, 45, 3, -69, -19, -81, -47, -25, -121, -34, 9, -74, -85, -44, 89, 39, -38, 105, 38, 104, -127, 105, 47, 122, 73, 9, -97, -25, -94, 117, -65, 40, 53, -105, -54, 29, -85, -75, 89, -103, -70, -2, -102, 107, -116, 92, -63, -102, 25, -117, -118, -126, 95, 79, -127, -84, -67, -91, 55, -50, 90, 19, -35, 36, -46, 84, 12, -123, 99, -9, 87, 109, -19, 73, -4, 109, 50, -126, -70, 70, -92, 75, -86, 55, -15, 102};
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
    msg.setTimeStamp(0.607220719716);
    msg.setSource(11321U);
    msg.setSourceEntity(48U);
    msg.setDestination(55293U);
    msg.setDestinationEntity(22U);
    msg.id = 42U;
    msg.width = 20883U;
    msg.height = 39454U;
    msg.widthstep = 38649U;
    msg.channels = 202U;
    msg.depth = 4U;
    msg.finaldata = 233U;
    const char tmp_msg_0[] = {15, 36, -68, -75, 14, -121, 41, -126, 50, -38, 56, -52, -127, -84, -61, 112, 48, -69, -89, 18, 52, 38, 123, 114, 100, -39, -116, 90, -76, 85, -64, 86, -90, 111, -41, 35, -34, -113, -64, -88, -63, -104, -117, -5, 82, -66, -87, 123, 105, -49, -70, -31, 82, 91, -113, -51, -77, 24, 64, 63, 12, -82, 43, -115, 73, -107, 62, -60, 25, -70, -98, -31, 30, -18, 46, -102, -113, 106, 58, 104, -75, -90, 96, -54, 53, 108, -55, -54, -109, 89, 16, -63, -40, -83, -55, -86, -37, 83, -14, -109, -78, -48, -30, 5, -27, -10, -9, -74, -97, 68, 15, 50, 38, 81, -127, -65, -125, 82, 100, 88, 105, -128, -93, 119, 126, -116, 87, -31, 22, -50, 115, 33, 43, -52, -31, -107, 104, 38, 69, 27, -94, -74, -88, 50, 124, 64, 71, -88, 33, 69, 5, 64, 94, -98, -90, 119, 78, -123, 122, 108, 53, 78, -63, -29, -10, -34, 119, 75, -71, 105, -115, -113, 103, 16, 95, 66, 111, -4, -54, -50, -42, -20, -36, 25, 88, 121, 73, 15, 118, -76, -76, 77, 124, 99, 107, 81, 49, -104, 19, -125, -97, -93, -77, 17, -18, 0, 13, 97, 4, -53, -109, -95, -101, -37, 100, 99, -109, -71, -14, -47, -62, -98, 89, 118, 13, -12, -123, 97, 94, -74, -113, -51, 95, -127, -120};
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
    msg.setTimeStamp(0.0536433197744);
    msg.setSource(18230U);
    msg.setSourceEntity(130U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(192U);
    msg.width = 61316U;
    msg.height = 33736U;
    msg.channels = 191U;
    msg.depth = 147U;
    const char tmp_msg_0[] = {33, 82, 80, 55, 23, -52, 73, -114, 27, -86, -121, 42, 49, -92, -5, -8, 0, 42, 47, 37, 104, 120, -85, -82, 15, 93, -73, 109, 101, -65, 90, 56, 49, -70, 85, 51, 121, 61, -52, 70, -110, 78, 6, -127, -44, 26, -12, -84, 71, 74, -108, -79, -56, 103, -119, -31, 18};
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
    msg.setTimeStamp(0.429473144752);
    msg.setSource(55196U);
    msg.setSourceEntity(218U);
    msg.setDestination(56409U);
    msg.setDestinationEntity(253U);
    msg.width = 23645U;
    msg.height = 40283U;
    msg.channels = 176U;
    msg.depth = 149U;
    const char tmp_msg_0[] = {83, -39, -127, -70, 52, -103, 89, -89, -100, 31, 78, 47, 38, -49, 20, -19, 76, 92, 75, -116, -92, -19, -48, -38, 123, -110, 104, 5, -125, 125, 74, -62, 34, 66, 56, 121, -80, 87, -52, -71, 118, 117, -108, 104, 33, -6, 46, 122, 100, -96, -52, -122, 91, 2, -37, 26, -101, -82, 106, 29};
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
    msg.setTimeStamp(0.840394836335);
    msg.setSource(21048U);
    msg.setSourceEntity(131U);
    msg.setDestination(6828U);
    msg.setDestinationEntity(249U);
    msg.width = 36074U;
    msg.height = 3221U;
    msg.channels = 149U;
    msg.depth = 131U;
    const char tmp_msg_0[] = {27, -124, -78, 51, -86, -53, -36, 74, 85, 91, -64, 115, 110, -15, -93, -12, -118, 116, 123, 8, 111, 124, 121, 75, -38, -107, -1, -119, -90, -55, 123, -10, 125, -26, 39, 89, -41, -122, 106, 46, -4, 96, -7, 124, 7, -80, -5, 37, 67, 122, -58, 86, -121, -84, 26, 77, 80, -119, 78, -84, 19, -128, -40, -37, 72, 86, -110, 42, 115, 16, -34, 124, -79, -78, 96, 100, 113, -110, -14, -128, 61, -123, -89, 24, -5, -102, 38, 42, 70, 39, 31, 55, -24, 51, -18, -48, -73, -57, 1, 77, -52, -121, 84, 2, -16, -46, 59, 38, 40, 15, 60, 27, -77, 37, 78, -121, -120, -120, 51, -87, -92, 65, 12, 15, 42, -109, -76, -105, -118, 41, 71, -67, 100, 28, -72, 117, -101, -25, -62, 3, 62, -14, -62, -50, -13, 96, 64, -88, 36, -100, -25, -113, 124, 95, 66, 46, 74, -26, 18, -46, -51, -26, 19, -29, -30, -39, -56, -107, 125, 69, 83, -116, 19, -62, 28, 33, -98, 122, 87, -57, -33, -121, 98, 67, -42, 50, 76, 70, -113, -120, 119, -43, -106, 51, -41, 2, 103, -10, -99, 38, 79, -44, 65, -40, -36, 64, -10, -55, -85, 22, -64, 59, 57, -47, 51};
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
    msg.setTimeStamp(0.898544864669);
    msg.setSource(24974U);
    msg.setSourceEntity(161U);
    msg.setDestination(51217U);
    msg.setDestinationEntity(118U);
    msg.frameid = 110U;
    const char tmp_msg_0[] = {-58, -17, -36, -70, -102, -51, 63, -11, -125, 3, 60, 117, 93, 116, 106, -7, 112, 25, 47, 96, 72, 41, -61, 51, 39, 51, 104, -104, -15, 73, -33, -102, -59, -23, 44, 58, 25, 116, 121, 16, 31, 38, 123, -58, -56, -22, 99, -87, -7, 119, 44};
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
    msg.setTimeStamp(0.391310168691);
    msg.setSource(20164U);
    msg.setSourceEntity(225U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(169U);
    msg.frameid = 14U;
    const char tmp_msg_0[] = {-68, -127, -117, 11, -80, -63, 39, -103, 13, 66, 3, -59, 59, 41, 86, -65, -95, -13, 61, -50, -108, -76};
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
    msg.setTimeStamp(0.343376078295);
    msg.setSource(58266U);
    msg.setSourceEntity(236U);
    msg.setDestination(28234U);
    msg.setDestinationEntity(201U);
    msg.frameid = 235U;
    const char tmp_msg_0[] = {-75, 41, -96, 114, -33, 21, -117, 15, -89, 123, 52, 45, -41, -4, 40, -28, 115, 120, 75, 65, -127, -17, 9, -58, 10, 119, 105, 108, -29, -10, -44, 66, 98, 111, -94, -86, 28, -94, 67, -9, -98, -59, 2, 116, 61, -62, -118, -39, 44};
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
    msg.setTimeStamp(0.166310474679);
    msg.setSource(2581U);
    msg.setSourceEntity(201U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(163U);
    msg.fps = 44U;
    msg.quality = 134U;
    msg.reps = 109U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.962182384693);
    msg.setSource(65193U);
    msg.setSourceEntity(252U);
    msg.setDestination(31780U);
    msg.setDestinationEntity(7U);
    msg.fps = 213U;
    msg.quality = 106U;
    msg.reps = 91U;
    msg.tsize = 161U;

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
    msg.setTimeStamp(0.563780646027);
    msg.setSource(20592U);
    msg.setSourceEntity(30U);
    msg.setDestination(26275U);
    msg.setDestinationEntity(84U);
    msg.fps = 95U;
    msg.quality = 134U;
    msg.reps = 186U;
    msg.tsize = 226U;

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
    msg.setTimeStamp(0.5484948845);
    msg.setSource(56159U);
    msg.setSourceEntity(179U);
    msg.setDestination(50209U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.158749858871;
    msg.lon = 0.878246058748;
    msg.depth = 58U;
    msg.speed = 0.569864437794;
    msg.psi = 0.454962951725;

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
    msg.setTimeStamp(0.677027760833);
    msg.setSource(64989U);
    msg.setSourceEntity(195U);
    msg.setDestination(26280U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.17194351205;
    msg.lon = 0.369588795505;
    msg.depth = 42U;
    msg.speed = 0.346265206822;
    msg.psi = 0.760131023541;

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
    msg.setTimeStamp(0.929670685011);
    msg.setSource(568U);
    msg.setSourceEntity(8U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.139185124619;
    msg.lon = 0.408400785633;
    msg.depth = 235U;
    msg.speed = 0.752649558654;
    msg.psi = 0.504078776824;

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
    msg.setTimeStamp(0.271714127839);
    msg.setSource(7717U);
    msg.setSourceEntity(114U);
    msg.setDestination(28225U);
    msg.setDestinationEntity(179U);
    msg.label.assign("BCZWNOPGCFBXZJDVFWGAEJVXAGSUTSUPRVLJTIFRRFVMXKHAUNAJTQL");
    msg.lat = 0.683279654726;
    msg.lon = 0.000366465448202;
    msg.z = 0.611260803742;
    msg.z_units = 32U;
    msg.cog = 0.794259163038;
    msg.sog = 0.179753850567;

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
    msg.setTimeStamp(0.81164060672);
    msg.setSource(15177U);
    msg.setSourceEntity(13U);
    msg.setDestination(15752U);
    msg.setDestinationEntity(101U);
    msg.label.assign("PTWLMWMDPWXVGPJOSJPFOAJXATDSGOUNLMLOTNFLDIYTSSECMQBSMBAFGYRISZFQUTJLKVNJKKZDLEGRDCGQBIKLBTYIOFOHVVECTWEPHBFXXQZUNBQRQYCKMJMEUXVBYFKIHQZPWMQFBMAGHUNZNLNNXWNCQWJAPTYKX");
    msg.lat = 0.372674058712;
    msg.lon = 0.966277077122;
    msg.z = 0.656659705393;
    msg.z_units = 47U;
    msg.cog = 0.224648027741;
    msg.sog = 0.939813845002;

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
    msg.setTimeStamp(0.800843083657);
    msg.setSource(44617U);
    msg.setSourceEntity(81U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(172U);
    msg.label.assign("POQYVQNRPZNLDQNVJHUTZOGAUWUTKABCMTELNLCOKGWVFEPXOXDXQGYZIPZSVRSBZQXINVYRGMUDBFMWKPLDIEPHENYGPCYFVIFWSYBLRFXJGMLSRUENTQSPJGAOIYVRLXVAUHHDMCEZRDAREJAFQSKHINKSM");
    msg.lat = 0.768676799278;
    msg.lon = 0.734064013384;
    msg.z = 0.70215722215;
    msg.z_units = 35U;
    msg.cog = 0.993114529568;
    msg.sog = 0.857551873762;

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
    msg.setTimeStamp(0.673744945916);
    msg.setSource(9290U);
    msg.setSourceEntity(99U);
    msg.setDestination(36907U);
    msg.setDestinationEntity(227U);
    msg.name.assign("HGKBDMOWQAWTLYGXTKUSPCAUHXCLEKNDOYGRZLRXCQJHXLMATHQWKKYDYSFGWIGRFUNBCSBPJCMBWLPFSQNKUJDTYVDUSENVMTXMJIMRNQNWZDYBIOXPMTEJVENESQXVUZOREARJBXXONPNWFDZYKGTAPKFSIOAFRSUZDOIHTVPCAIBVJWZPHUISPMDQWTXYGUIVLCHZQFJAFMEHAIQLSZFOKVCNLEYRPLVWBQAGGYKHHBJEOOI");
    msg.value.assign("CTOJXELVMBEJPGLQRKXEQWNNNWWUDMYACIPBQDOQTSJKHREAAZVLUGHVJWGHNDHNYMWJNNBFQDWRGKUOIJSLVBRLUOMDICZZKASLSGFBQYTFVVURXCOXLAZPQAOXKIOKYHMBTFQZWTZJIUMZJZPJLSKFUCUCCRHIDDNEYPTC");

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
    msg.setTimeStamp(0.12617341372);
    msg.setSource(31965U);
    msg.setSourceEntity(29U);
    msg.setDestination(48693U);
    msg.setDestinationEntity(129U);
    msg.name.assign("BGKNPXZDCXXOBUYKEZUYHBQKOJAQSIGQRSLDWLEGFZTRVGSQWWGNPTVZUYMOAFHRXANBDLOFMIUSOZPHAKCFBTZGBPHHKJQRYJITIIJTMDSQCXZVRULABLFTRCTFJDVJAQHPNVLBNHAEMFRNORPMYPWTLVESLENLDXDZQDDIGCKEXJIKEVUEWYFCKWOMRWIWCDYKVLQMIMNTCSISVSUXOPJHWFEAGFTGMBUZSOMWPJEURUKNJ");
    msg.value.assign("PJXCKAUNLFGJGBMUXQQIVDOSIYKHJNYFASJJCODELVAWGJEGPRQ");

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
    msg.setTimeStamp(0.232475696042);
    msg.setSource(6597U);
    msg.setSourceEntity(40U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(134U);
    msg.name.assign("KHUODMDZXQSEGOCPUFSQLELFOUIZVJTHOIVJALWQIOHKFLPOWDTYVJZCVRWPSAIJUQJWCZCUHWUJNBEUADEFKSFTTMVZIMMBRJXQWTXTAGNRKOFYDV");
    msg.value.assign("VRUTHSDBRQPRAREJXOQCGGSZVHDHPVMHZVXXDLFISQPIYTRJGCUYNRAJKCMWKBKHLFQFENSUOBNHKKDJYRZGUXDKJTLCEQJCGQBIEVTIVFWQLMEVINISFOMOKGMZWQNYXFFJBDINAOBLSDLWBLEBOPWSFYXTNPLWYKGTOSUFYGAEZPCMPWAPTLWIZRXJJOUOPYBCFXRCTIULPDEGCJEKZUHNHYOBARNTSVZ");

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
    msg.setTimeStamp(0.770762388065);
    msg.setSource(33870U);
    msg.setSourceEntity(98U);
    msg.setDestination(25400U);
    msg.setDestinationEntity(46U);
    msg.name.assign("XQZUJPBPNNUYUPTDBZDPKSPFRNOUREIKIRSOWELYGZPAIVCJUCIEJYOVVUFTWDYOGHGPLYDZIOIXKHNCWTJMFAWJRKVKCNDFXMKBDFQXUCWQGVLYYVJZXZRKAGVOMUOJZXHLQXAIMDCEHJWFDSHSZZBQEWNESBNXQQAGLMGOITYTEBPMSBHRADDWJVAAFIBBMHRROMSTZTTKTQAGBNLQFTYPHERN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PXJIEAYIJEPBKNFJCYLAOGPPB");
    tmp_msg_0.value.assign("CUYCNJYHAMWJWGCZNLLBEGUDOPQUXA");
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
    msg.setTimeStamp(0.925992868561);
    msg.setSource(37128U);
    msg.setSourceEntity(108U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(90U);
    msg.name.assign("KDYFSEEWVOQLVSUTUGHXRJTPFRNGTXKGRQVXPWMV");

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
    msg.setTimeStamp(0.520823333813);
    msg.setSource(37922U);
    msg.setSourceEntity(142U);
    msg.setDestination(27684U);
    msg.setDestinationEntity(125U);
    msg.name.assign("JPZYPETUYGNCSWCLLRLUISRDIEVORNQMZXMDFTVDDOAKOHQQSXHPTCEWGXKFAZMPYIWKOCDHKNOOVBJJEQFSSRTYTUMGUFXODBDKLIVSARWSWOKRTBPFGUZJABAPQVUKQFOMIICYLCCEZNFBI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MMHHCYJTUMAXDWCBEPSKMHEMAGKYDQTVGQSJQUUAYEKYSCRDHPEDMFLJJBVFCOJXOKTJLPHZYQNRPSVVRELBIEXIVLKBGQJZGTACSHSPCBHIBLUFCLOFHPZT");
    tmp_msg_0.value.assign("WPIMVGPSZEJSLHXJEJHXGAJODEYYDMKOVNAYEBQJXRMGMELXZSVWQIUTMNSGTBNAKYMQPNCICRXYNLJDOKXSPULXJUOVOHVIQNKAFLFFLEAWHZVUKFTCTCKADXGGVZFIFXYQSDLLCBPGIQZFNCJIWMIDNCCYXAPWPBFTZNKDTTEMQOGBHNVTFRBPWZJOADBGERKROEVBEWQSYHIQRLUCUCRDTHTKYAZWMWSOZPMLBAGDUJHUPFVYHRRH");
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
    msg.setTimeStamp(0.354398014807);
    msg.setSource(55316U);
    msg.setSourceEntity(180U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(75U);
    msg.name.assign("PTXTHMXCPNWFVVDQCLMRAKUFOKZWVXBSPXCFBTJHUCXNLDPGCRWAJPNBHJICUAZKOYOYSFUEIXFVOYXLQHGYKOCLPEWCMLSDNDJSGROYYVBPCZDIEGITSKMHGHIURWBWOTMAIZFDEFHYGCANPTGJRHAIHEKLPENWSXPLNRDMVWJGQJTDUMQZDNDNOJQVMKVLFLIBFXYRQBVRK");
    msg.visibility.assign("XUSLTMAQHLRPLDZJMLSIONGFLCKQKCJLCPKRPOREZMMYSFTYSEUTRYIEGBWDFGTHQWTYBWEOVKPPEYTWXVZCADNTMFLWYXZRMUYKWCA");
    msg.scope.assign("VXIQCMYKPIFEHXQPQLAJJNMLRFEOPGGYPSXUOEBLFM");

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
    msg.setTimeStamp(0.096884776496);
    msg.setSource(11629U);
    msg.setSourceEntity(116U);
    msg.setDestination(31236U);
    msg.setDestinationEntity(53U);
    msg.name.assign("VLRZNAVFMEUHVZLNOZZSLXCBCNDXGIJMBNKEMXVCFUGOSKZEUNHEFBPTPTBYPX");
    msg.visibility.assign("ZXFJLTZHWCLENZXFQWBCNEIJUFRJGAXZBHOHUJLPHYNTYHW");
    msg.scope.assign("FUWETUWEDAEKDJFRNGHIFYTGCODWMGMSAYSJXGBYFZ");

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
    msg.setTimeStamp(0.126490541833);
    msg.setSource(41420U);
    msg.setSourceEntity(52U);
    msg.setDestination(27568U);
    msg.setDestinationEntity(178U);
    msg.name.assign("EDYFNHFLNWHCYKDFTQJHSXFHOIAOJHVCDBWBMJSTSJZEANKPZPADHMTXEXUBUATRIIYIJSQSYLGTZYLIVMQOFEEJUGZGMUICERKSPKXEYXRUGNTPNOBQSWNVJFRWKQPJZFOTKLCIWRFVWCLHRJO");
    msg.visibility.assign("LIMAASXIXPGHNKQLZLATUTBSWWXKJCJXYQLTATFBFTVWQXMNLFQZFYPIESYYDLSHWGTYYRODXFADWJKBZZVFUNIMCVKUCRJXTOIFMHPHXWZSKNRDSOZLDHRHZJVBDNHKISJ");
    msg.scope.assign("WGDFOWTDPUEASG");

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
    msg.setTimeStamp(0.980434551886);
    msg.setSource(57378U);
    msg.setSourceEntity(151U);
    msg.setDestination(50463U);
    msg.setDestinationEntity(93U);
    msg.name.assign("DCBZXGOZSJZMQFCAVMBBKKSAFHIBLVCQCBYZQJWXXVUJMSYSLUJIGIVTZTHOXUVKQIOHEFGTCNITRXAVOMGFLRZFGYLOQPJWOUOGINQLNKZUMNXCWLRJCRPYHPEPWNDQRCWXSEWUSDBPAMOKJPTEWMSAVJBMITEFVOEAFEMTYGAHSDMFNLHNFZWQDHXAIDRJPKTYYDFBEGSOAKWWNZBAKIULRUQCPRDXZEDHYKENKXTGVYG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DTIQFSOXUCFMCUDFPEQUSEZYHZLCBGBEAYNJZOCCVFBSXRAHGTEPWPRCNMINDYGCOORXZPADYQMRJKTHMNMVARYMBGIAIHMNNRIISGPGKLMBHZQUQRDPJAWYZAAXSWROXCAWTCBOUEDWTZJHPEUXSFEKXKCQFVYSUYAOKQNPJZJNH");
    tmp_msg_0.value.assign("GDHARUXZSUXBTKYVTYHEGVSYLVNZMKQGYRNCPXLQTOHDXSLOUJDGLIZIEOAHFJCZWALRSVNRINIVZIWHFSUEEQUFAWETIBUQNQJBCJEZYKWVCIMTRKZNJQXDSOSWFSQHPJBRIMTMOKDGPXDBUHSFUZYAEKLZFDVYPABCLNLUTUXFMEKOLTBYGXIGASRPKFOAEJFQOGQP");
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
    msg.setTimeStamp(0.0361621055156);
    msg.setSource(33587U);
    msg.setSourceEntity(75U);
    msg.setDestination(20649U);
    msg.setDestinationEntity(81U);
    msg.name.assign("QSMBUECZZDNHUEINTICWVNZUDEOFUMSWJIYGXRQIKSECHMXBHYCSWNUZKLPRYDXMFMRZCGIODPHVQDCODFHFLQOBVZZALBERBPMROLYMALYOGPKNDAXSRKQWCJPN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EGVEZQZPIXPFSSYRQLYEMLINQNOUWELKMTIPYHCDUWWBTBRTMCCARHGDKAYBRQHVDGIXAQFAY");
    tmp_msg_0.value.assign("LEKPCWEYIDYWVONQLTRWERP");
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
    msg.setTimeStamp(0.418408082031);
    msg.setSource(29311U);
    msg.setSourceEntity(84U);
    msg.setDestination(16675U);
    msg.setDestinationEntity(62U);
    msg.name.assign("FNFQASIXEIMRKFWDUMEMFHVAYVPYMAKSSGLFONCTEGOQUFKKGLQPYTDSDCNCNUBNGNYRFQDYWQBXCGGSCSMXUYEPUR");

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
    msg.setTimeStamp(0.429533665607);
    msg.setSource(28186U);
    msg.setSourceEntity(231U);
    msg.setDestination(56963U);
    msg.setDestinationEntity(170U);
    msg.name.assign("BYFVAJGGZAWYHELORWOBSXXBVBYQURALPRJZTZZFLXZKCRIBPEZFXKTGJVJDWVKHOXNOMGNNLFNBMZQEKILDDIEJINLRYSVNRKXZTUWSMJNUTPKJGEPMEHISLZHTXLGVJIVPDFBIYWMMJUKWWWQQPNUTCSO");

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
    msg.setTimeStamp(0.80126609913);
    msg.setSource(49368U);
    msg.setSourceEntity(18U);
    msg.setDestination(42806U);
    msg.setDestinationEntity(182U);
    msg.name.assign("RXGJXGKMCNBVGLQGJNQGRWCSCMTFIAJEOOKIBWNIDIVYBLBTWFPOOIWSCWKVYSXDEWUSTEVRAYTWPGAMZBELMZRYMSADJFXGDPWKNBANUOJVVQDKAXLIAIGRNEOUDJTPHYKFKUADFFMFMPIMBZQCTXUUYRHYVHRWZHTUCBO");

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
    msg.setTimeStamp(0.384135068615);
    msg.setSource(45199U);
    msg.setSourceEntity(243U);
    msg.setDestination(11888U);
    msg.setDestinationEntity(158U);
    msg.name.assign("BTYFDXEAHWXVSJGRZGHKJKVYQKFXJXFIOPBQHLGHUULMZKSZFPAHLFRQGEOTYIRIMOENVZTSCKTFNWLLVPYWJMWGGQHOMMXDKFPGCGVEOFNPDUCJYYBJDSXXDIWEDTBULQAWPULIKBTIBQTFNQNJJGXHUAYPWEUCAOSVLSIY");

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
    msg.setTimeStamp(0.0958564402115);
    msg.setSource(34357U);
    msg.setSourceEntity(63U);
    msg.setDestination(47979U);
    msg.setDestinationEntity(65U);
    msg.timeout = 117536767U;

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
    msg.setTimeStamp(0.57547701392);
    msg.setSource(49618U);
    msg.setSourceEntity(21U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(4U);
    msg.timeout = 955207865U;

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
    msg.setTimeStamp(0.576631407924);
    msg.setSource(42677U);
    msg.setSourceEntity(81U);
    msg.setDestination(48334U);
    msg.setDestinationEntity(245U);
    msg.timeout = 1525245774U;

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
    msg.setTimeStamp(0.984883607314);
    msg.setSource(29991U);
    msg.setSourceEntity(92U);
    msg.setDestination(61981U);
    msg.setDestinationEntity(195U);
    msg.sessid = 3499314486U;

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
    msg.setTimeStamp(0.789723548074);
    msg.setSource(9587U);
    msg.setSourceEntity(128U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(203U);
    msg.sessid = 2296585100U;

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
    msg.setTimeStamp(0.691995126243);
    msg.setSource(38269U);
    msg.setSourceEntity(70U);
    msg.setDestination(16039U);
    msg.setDestinationEntity(218U);
    msg.sessid = 2355125154U;

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
    msg.setTimeStamp(0.670580295092);
    msg.setSource(18957U);
    msg.setSourceEntity(179U);
    msg.setDestination(51789U);
    msg.setDestinationEntity(61U);
    msg.sessid = 3512148639U;
    msg.messages.assign("EAGECMPKGZZEHXONZLEFBPTYORXNCLDRHICESENSACZYYJABQJQTQBURKVJFRVBOGJWTBNLLMVBIIQSEPBWSFZZHIMQU");

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
    msg.setTimeStamp(0.827439967993);
    msg.setSource(41821U);
    msg.setSourceEntity(123U);
    msg.setDestination(10476U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3937637094U;
    msg.messages.assign("ICJMWJPUXZWQSCXKDVFMDPCMOINHAQKPYAQSAYGVTEEUTBVXMFHUEFRHJKCDFHKHIRCKFIGEBVYXGTMTCYWL");

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
    msg.setTimeStamp(0.57961627495);
    msg.setSource(29421U);
    msg.setSourceEntity(17U);
    msg.setDestination(38696U);
    msg.setDestinationEntity(159U);
    msg.sessid = 2825132170U;
    msg.messages.assign("EEDXNQHJUKHBHXOUANLVTCCUTVRGNZZMILGESDTOCRFJDAOOCWGMHPPIWYQLRIXKQTESMLVNJOSC");

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
    msg.setTimeStamp(0.0648327788051);
    msg.setSource(4211U);
    msg.setSourceEntity(241U);
    msg.setDestination(17223U);
    msg.setDestinationEntity(214U);
    msg.sessid = 2357406555U;

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
    msg.setTimeStamp(0.0280714229623);
    msg.setSource(33939U);
    msg.setSourceEntity(187U);
    msg.setDestination(1947U);
    msg.setDestinationEntity(19U);
    msg.sessid = 3520551339U;

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
    msg.setTimeStamp(0.136592009052);
    msg.setSource(22966U);
    msg.setSourceEntity(103U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(40U);
    msg.sessid = 605871376U;

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
    msg.setTimeStamp(0.765680015828);
    msg.setSource(6144U);
    msg.setSourceEntity(254U);
    msg.setDestination(30081U);
    msg.setDestinationEntity(136U);
    msg.sessid = 248505661U;
    msg.status = 15U;

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
    msg.setTimeStamp(0.775402724275);
    msg.setSource(11278U);
    msg.setSourceEntity(217U);
    msg.setDestination(35898U);
    msg.setDestinationEntity(164U);
    msg.sessid = 2424186014U;
    msg.status = 159U;

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
    msg.setTimeStamp(0.80607512227);
    msg.setSource(36210U);
    msg.setSourceEntity(52U);
    msg.setDestination(9647U);
    msg.setDestinationEntity(60U);
    msg.sessid = 3912953596U;
    msg.status = 14U;

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
    msg.setTimeStamp(0.88972252738);
    msg.setSource(54501U);
    msg.setSourceEntity(54U);
    msg.setDestination(59985U);
    msg.setDestinationEntity(153U);
    msg.name.assign("UYDWTREDVXHEFXFPXCPQDNSOIHPIRJTUFCKMOSF");

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
    msg.setTimeStamp(0.586478005833);
    msg.setSource(60993U);
    msg.setSourceEntity(119U);
    msg.setDestination(55829U);
    msg.setDestinationEntity(219U);
    msg.name.assign("NPNKMWBLXHKTBCRXFOCCQFIIAFSDVTAAAZRSDLJDNUJOMURNXNYTBENMHMIKWXTOCEKSLUHRCEOFXDQKCVNMFZMQFIKZYTZGEWXPOLQUGDGQEAEVCLRYYCSFLEJQRVLYYETRDONJPEJKVPKJOKSVYMNDSVSWMHIBRSORHHLOTPFJVXZXIIHBQQGAPAVWUFAWIPEZIZPXBDPTGCWSDTMJJWGGUF");

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
    msg.setTimeStamp(0.496448943789);
    msg.setSource(65181U);
    msg.setSourceEntity(230U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(251U);
    msg.name.assign("CSCERBDYQTKPIRWAPCKRFOUHAKBPXBCHELZUGNGAUKVAGLHFKBJFSZGNJESOBRGMFRFFLJUFEFDNGJXMETUKQTUMQINJTZSWBTQBIYMYPVXTW");

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
    msg.setTimeStamp(0.677265210644);
    msg.setSource(40612U);
    msg.setSourceEntity(254U);
    msg.setDestination(30763U);
    msg.setDestinationEntity(92U);
    msg.name.assign("DDKWRDZDEPLBOIPMYXRCWHRJTHZMJZEONJ");

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
    msg.setTimeStamp(0.868196346471);
    msg.setSource(9886U);
    msg.setSourceEntity(239U);
    msg.setDestination(65224U);
    msg.setDestinationEntity(158U);
    msg.name.assign("VRWHUCAVFIXMLTMKTWIIQCCOQABYWJZEDOBVKCXGAXTLMJAUICUHYPDHDOTWDNNVXWPZOYNKMVWQJZIHYCDFJKCNQVFEGOSLCPLHVGBAZOMRCRXXESBIQEZUKMGDUULENEJIPLKSTKZFIPOLUPQGKNBGJHOXP");

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
    msg.setTimeStamp(0.504400044938);
    msg.setSource(32116U);
    msg.setSourceEntity(187U);
    msg.setDestination(12532U);
    msg.setDestinationEntity(127U);
    msg.name.assign("YJIMZUNVWZLXLSSONPKZNTRMLKBTQYVQGJQKUSZMAIFUTBJHQUDEPIPMKYIFBMGUVNUYXQCCYJJKXWCROAGHRUAPQTJYIOAEWLAWHWBSPKLFLJDXRDNTLNIBPZBMTUKKMTFVJAIUSZHNZXRD");

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
    msg.setTimeStamp(0.275249052664);
    msg.setSource(64668U);
    msg.setSourceEntity(103U);
    msg.setDestination(38055U);
    msg.setDestinationEntity(87U);
    msg.type = 65U;
    msg.error.assign("KBUDLAGBQKYLFXXPEDQVMRAJBNLRKQZSNZMYTQCESMNLFSCZJAOMAHFFUASGRMBGFTRNYHKVRNGOKVTOAXLCYHOLHIQUDWLDSVTNTDUOJJGPYEZEBUERPGCOPNFZZUQYURDAKUOXYMZJRWZDEWWPPJQQGWCBVFXZTHQIYNMBTRCMBXWNVGWJTPPSGIWEULEACIQIEIYXVKJGLDSYHFKOTPVIMHHJFHZXXLCABBIJHSKOD");

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
    msg.setTimeStamp(0.680452140813);
    msg.setSource(425U);
    msg.setSourceEntity(94U);
    msg.setDestination(42937U);
    msg.setDestinationEntity(218U);
    msg.type = 71U;
    msg.error.assign("TYXFPDEXLLQTTBUXNRAENYIOPKQKHMGHAMAEBYJPXWIMCWYKAZRNGIVDZCBZDVIJUIESJETGKLBWCPPUBPYQMFZAYNBEOGKLJKISTCDXQUFWCWCYTNIFMDNEGCJ");

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
    msg.setTimeStamp(0.563547151103);
    msg.setSource(37808U);
    msg.setSourceEntity(173U);
    msg.setDestination(61903U);
    msg.setDestinationEntity(157U);
    msg.type = 87U;
    msg.error.assign("YPSQLIFZNHJBPZBWDCZAFAIQEHCRJVKPLJRFWMCIHRGQJQRKIEOVYZEUYOATGMXTMKDXMSZPLKHYRDFMLZROUHTZNKXWEFWSLTZLWEVNHMDBXXOMNCJLATQCBPVUNWFHQNPIGVCRJS");

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
    msg.setTimeStamp(0.419028531279);
    msg.setSource(37748U);
    msg.setSourceEntity(39U);
    msg.setDestination(46938U);
    msg.setDestinationEntity(238U);
    msg.seq = 39300U;
    msg.sys_dst.assign("HKGQXYMRCNJOVVRUJICFDHXBWUIOOHFNSJCTNZPVQJBOEAADSCYGFPPQUKCCNAQKIDNHSYUZIHTL");
    msg.flags = 10U;
    const char tmp_msg_0[] = {-57, -47, -1, -66, 115, -45, 68, -27, 22, 25, -91, -4, -120, -98, -93, 37, -6, -80, -112, -48, -54, -52, 114, -118, -70, 47, 26, 126, -41, -65, -112, -50, 102, -9, 60, 14, 74, -106, 44, 88, 14, 45, 44, 51, 93, -101, 55, -38, 35, 93, 96, 87, -90, 25, 49, 121, 82, -63, -43, -72, 91, -104, -110, 86, 78, -49, 118, 72, -9, 25, -88, 57, 57, -124, -43, 32, -60, -26, -28, -112, -120, 116, -21, -61, 124, 117, -91, 5, 59, 29, 10, 71, 116, -9, -88, -77, 27, 73, -124, -108, -30, 70, 7, 104, 78, 83, -128, 95, 41, -85, 39, -88, -125, -47, -127, 118, -67, -40, 26, 33, -90, -21, 90, 100, 103, -56, 18, -100, 19, -125, 85, 10, 93, -43, -58, -116, -73, 105, -51, -101, -4, 108, 8, 115, 67, 119, -115, 93, 30, 6, -16, 50, -88, 14, 37, -35, 118, 101, 75, 100, -25, 105, -94, -90, 44, 124, 103, 86, -11, 21, 42, -57, -58, -64, 23, 100, 96, 82, 61, 117, -90, -124, -58, -127, 62, 63, 33, 120, 41, 18, 33, -25, -105, -46, -3, 58, 85, 45, -62, 100, -106, -115, -105, 68, -18, 116, -49, -27, 78, -125, -73, -100, -43, 121, 92, 73, 66};
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
    msg.setTimeStamp(0.982157436196);
    msg.setSource(22087U);
    msg.setSourceEntity(129U);
    msg.setDestination(35736U);
    msg.setDestinationEntity(212U);
    msg.seq = 18737U;
    msg.sys_dst.assign("XDKKMJEABHPPOIFYLYCVOUMSNQIAINDPHNWLIOFNXNLZVYIMAQZESXKGFCVDDZUTXDZMZWAYOHHKO");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-113, 125, -111, 67, 79, 3, -1, 62, -57, -24, 29, -3, 49, -72, 75, -114, 16, -59, 49, -90, 66, 27, 9, -113, 68, 110, -44, -123, 105, -86, 108, 41, 49, 52, -64, -106, 87, -97, 38, 9, -46, -123, -85, 91, -35, -79, 123, 17, -62, 61, -13, -26, 30, 100, -122, -81, 72, -19, -71, -72, -45, -17, -34, 61, -3, -25, 114, -47, -119, 107, -43, -120, -101, -26, -88, 88, 67, -6, -26, -83, -44, -15, -115, 87, -22, -38, 117, 57, 49, 66, -16, -107, -4, 6, -7, -95, 123, -10, -62, 93, -92, 52, 75, -109, 101, -97, -100, 92, -21, -85, -105, 9, 120, -46, -53, 94, 59, 87, 30, -82, -118, 93, -83, 58, -103, 125, -15, -121, 64, -21, -38, -2, -124, -94, -41, 86, 122, 7, -96, 93, -10, 82, 59, -8, 36, -41, -14, 36, -21, -118, -88, -22, 18, 87, -63, 35, 68, 14, 31, 71, 66, -72, -92, -52, 50, -43, -101, 40, -19, 30, -114, -125, 13, -94, -93, 102, 111, 50, 49, -15, -41, 49, 79, 117, -38, 124, 5, 49, -66, -126, -41};
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
    msg.setTimeStamp(0.445751487406);
    msg.setSource(6734U);
    msg.setSourceEntity(219U);
    msg.setDestination(41449U);
    msg.setDestinationEntity(4U);
    msg.seq = 52676U;
    msg.sys_dst.assign("PPVGOCYKDIQLNCKOQIBDBUVTJEWMXKCGEELABUOPKHW");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-22, -23, -117, 41, 25, 56, 38, -79, -71, 30, -126, -18, -79, 120, 56, 18, -9, -87, -54, -85, 4, 89, -3, 16, 125, 70, 20, 59, -120, -37, -29, -27, -56, 82, -73, 3, 43, 59, -106, 113, 50, 12};
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
    msg.setTimeStamp(0.374797027672);
    msg.setSource(45587U);
    msg.setSourceEntity(102U);
    msg.setDestination(20729U);
    msg.setDestinationEntity(109U);
    msg.sys_src.assign("HTBVPUAEHAGKLJLJASDENYGWDQGSHZMVIVCQMYMRKDXNTTC");
    msg.sys_dst.assign("GWLWYDGPLAFHYAJLLYBKYRTV");
    msg.flags = 225U;
    const char tmp_msg_0[] = {-113, 56, -42, 78, -78, -58, 90, -55, 107, 89, 36, 32, -31, 26, -116, -62, 109, 97, -66, -79, 36, -38, -70, -93, 124, -15, 37, -27, -93, -81, -109, 8, -58, 80, -128, 11, 72, 78, -106, 40, 97, 110, 60, -70, -103, -111, 64, -61, 6, 100, -30, -32, 112, 92, -88, 44, -87, -81, -51, 112, -91, 72, 13, -51, 80, 52, -52, -70, -106, -30, -124, 94, -74, 23, 11, 16, -32, 106, 48, 67};
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
    msg.setTimeStamp(0.00387310820079);
    msg.setSource(56997U);
    msg.setSourceEntity(98U);
    msg.setDestination(15643U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("HBPABQLOQQQUDIFKSHCNESIQKKDJKGMXQZZEHOWCOCRJGCVWNPXWFTIADPUMDQIEJTPFVYMPALVMGJUCFIZDPZR");
    msg.sys_dst.assign("JJPCGOIVQCDLNMJDZHWWTFYUGSMCYLNIVOKLQODGSAPMPROSFXOELHESCAWLHQRPNEQBJWTQRPUIYQVJRIPTTPSIXFZDZEYLWHQWINSQSBMAXMGZPCONIZKXBZXRMRUFELGNAYKUUHTDCGAEKPODDHBAGOTEVMZAHZFVFJBD");
    msg.flags = 23U;
    const char tmp_msg_0[] = {105, 101, -36, -64, 112, 85, -92, -106, 77, 31, -46, 73, 112, 31, 53, 108, 65, 1, 11, -122, 16, 42, 28, 99, -43, 68, 105, -24, 57, 95, 98, 126, 78, 74, -85, -85, 112, 113, 56, -102, 43, 64, 106, 56, -4, -67, -16, 22, -112, 31, -68, -121, 105, -52, 89, 63, 75, 72, 94, -105, 11, -5, -50, 47, -30, -76, 71, -54, 124, 75, -25, -101, -66, -74, -112, -79, -94, -113, 1, 70, 20, -9, -96, -21, 33, -45, 35, 37, 20, 47, -12, -48, 122, 15, 66, -92, 0, -82, -118, 52, -18, -74, -4, -52, -30, -10, 13, 0, 61, -58, 68, 86, 75, 16, 30, 32, 41, 57, -128, -105, -67, -113, -23, -70, 111, 29, 123, -5, -26, -62, -10, 49, 29, 116, 106, -8, 59, -93, 73, 89, -27, -32, 71, -52, -107, -30, -121, 22, -120, -118, -121, 107, 47, 21, 50, 99, -65, -74, -113, -91, 4, 102, -121, -81, 15, 115, -48, 64, -20, 95, 64, -114, 75, 9, 77, 52, -59, -101, -2, -128, 61, 94, 110, -105, -57, 45, 52, 122, 85, 114, 30, 32, 103, 82, -2, -110, 9, -32, 12, 107, -9, 66, -118, 19, 3, -17, -119, -109, 58, 94, -113, -22, -29, -51, -16, -12, -2, -107, -49, 39, -69, 26, -102, 112, -12, 75, -37, 84, -107, 33, 113, 103, 95, 76, -21, -83, -116, 59, 52, 48, 50, -72};
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
    msg.setTimeStamp(0.390101595056);
    msg.setSource(47679U);
    msg.setSourceEntity(239U);
    msg.setDestination(4487U);
    msg.setDestinationEntity(157U);
    msg.sys_src.assign("MAKDBTINGVNEKCBNDZXIIOXVKJTAGVPAIYFLWMZZWLQJALNPFZMJUOTZBAHVMSDMHLJPVBAXUOKYBBEYWQIRYNYWIFHVQYDUGDQFHLQPXAMJZEYCETMBGCUZUFRPOANGRUOGMCVJCQLPTUQAWIGWZYJRCDXHWWEDGPRUIKODUMPSXTVHZSTSLHISKBREGRDLJNSSTVTXLXERVHWQSCKCSHQZEOKQJ");
    msg.sys_dst.assign("DONIXPTHACLDTWBELMULPXZKFRTYQQNOOPICVCSXUHZUTGNPAKVVRWSFYGUBDRQQDYRSYICANJYUVWFHPSSTDXPOOBFHRKHZQMNIEDVLOSBRWINCZTSHVXJGMBBAFJSYWJGGOCRFJCVRLZXVGAWJAIKKPFAWWWIKCJDTQEUAUFMJBQJZDGMXRDPAZTNULOQMUEMHRDJIEGMIUYGPYBWYSQKKEXFOLNSPMNETEEHZH");
    msg.flags = 107U;
    const char tmp_msg_0[] = {-69, 0, 70, -40, 25, 118, -125, 63, 2, -113, -80, -122, 5, 4, 94, -25, 57, 47, 100, 72, 31, -5, -104, 13, -16, 80, 46, -104, -55, 29, -68, -79, 5, 74, -88, 64, -16, -101, -16, 33, -67, -17, 99, 9, 92, -82, -51, 33, 106, -120, -115, -115, 88, 14, -109, 113, 4, -81, 69, 94, -19, 69, -95, -10, -66, -127, 90, 65, -9, 78, -64, 104, -58, 77, -67, -124, -16, 43, -90, -122, 44, 83, 90, -11, 21, 33, -93, -118, -94, 124, 11, 48, -125, -43, -1, -6, -87, 55, 17, 64, 76, -33, 72, -49, -21, -66, -119, -102, 34, 14, -102, -73, 117, 124, 76, -104, 115, 49, 19, 108, -116, -124, 19, -99, 50, 14, 46, -124, 12, 81, 8, -93, -126, -95, -59, 80, 30, -29, -69, -106, 69, 120, 18, -58, 122, -48, 61, -71, -99, 54, -119, -57, -119, 19, 45, 116, 105, -92, -9, 50, 65, -72, 76, -122};
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
    msg.setTimeStamp(0.0222743940359);
    msg.setSource(36202U);
    msg.setSourceEntity(129U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(45U);
    msg.seq = 1533U;
    msg.value = 45U;
    msg.error.assign("DBRONHMQMYSGHSZTNKKHGBWOOCICVVMIRNICEURIUPYXKRJKXNHLZMNBKXWEFLJHUGPWPBBDHSQINTIHPQOMBVIGKTQNNTQZDUWJFYLHVTLXBEGRZDKZZJWQNTDIKOMEJDFDLUTCSYXJWSPCYKAEJPHSDCTRGABFWVAAFUETTLGEUP");

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
    msg.setTimeStamp(0.689844754194);
    msg.setSource(49984U);
    msg.setSourceEntity(219U);
    msg.setDestination(625U);
    msg.setDestinationEntity(44U);
    msg.seq = 37001U;
    msg.value = 67U;
    msg.error.assign("OOSZSBULPPPDCEEJYOXWKPRLVIWSUZZGVKENMLZWYBIFRERDURTVALUYOGUYEFMCDFQXXRALFWTYOBHAPXFPMCNNVCHIQCKXWRROIOBQZAKJMUYSGGDTJTIAOPNTVZCVBCBKAWJNAZTLSQFXHNKPTHZKPFLTWUEQGLLXHGFNRBKEDQADMHUIWMJBVSGDQZYXITXCPFMVLIIIBQUVDRDMAEMHJENHHONSFYBSYRXJASJYDNJCGJUCQTHWSQ");

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
    msg.setTimeStamp(0.104325878612);
    msg.setSource(36778U);
    msg.setSourceEntity(103U);
    msg.setDestination(55816U);
    msg.setDestinationEntity(144U);
    msg.seq = 31589U;
    msg.value = 34U;
    msg.error.assign("CDBCNUUKKXSBRAHSHFAMNYBEYBZFNQSBITSCJIJLPDRYQPVZUMXAWSBJYOOCWVQAMFTINKWWMRLCLTEJLLTWGHSTJ");

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
    msg.setTimeStamp(0.332492188093);
    msg.setSource(16406U);
    msg.setSourceEntity(26U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(216U);
    msg.seq = 22969U;
    msg.sys.assign("QIVTHSPPETFHTBNWOGBTSLKHCR");
    msg.value = 0.66032348572;

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
    msg.setTimeStamp(0.596310760253);
    msg.setSource(16932U);
    msg.setSourceEntity(112U);
    msg.setDestination(13946U);
    msg.setDestinationEntity(136U);
    msg.seq = 21800U;
    msg.sys.assign("WFXGETPEDKFLAHVEXBTDBABPSOKJEGFDLJZXQKSYHLWQIZPCNBVYPQAMXAHFIUTGVCGLSKRXUOEGVORVZOMRT");
    msg.value = 0.79858735771;

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
    msg.setTimeStamp(0.248217127818);
    msg.setSource(3355U);
    msg.setSourceEntity(76U);
    msg.setDestination(31865U);
    msg.setDestinationEntity(34U);
    msg.seq = 3180U;
    msg.sys.assign("GTOENTUTEPMNPKYPOEBCJQLAJHPRIKAHAZQNDYBGJWULUSAKDPIFVXEUORQDCRXKGJAIWLCCWFNMVIJPOMENRAZRHFFKSAOWWGUGVWYECTIDRSFLRYMOHLWTIFYJGTQQZQFRXPGUKILQTDVSDXZNCSUITMSCJVYNZVK");
    msg.value = 0.700298044375;

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
    msg.setTimeStamp(0.286246846313);
    msg.setSource(42771U);
    msg.setSourceEntity(20U);
    msg.setDestination(33080U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.313967448585);
    msg.setSource(20011U);
    msg.setSourceEntity(219U);
    msg.setDestination(41859U);
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
    msg.setTimeStamp(0.361115697331);
    msg.setSource(26900U);
    msg.setSourceEntity(107U);
    msg.setDestination(52975U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.161492130011);
    msg.setSource(15062U);
    msg.setSourceEntity(202U);
    msg.setDestination(22103U);
    msg.setDestinationEntity(153U);
    msg.action = 254U;
    msg.longain = 2277452902U;
    msg.latgain = 1942137866U;
    msg.bondthick = 3021652317U;
    msg.leadgain = 444037919U;
    msg.deconflgain = 811907886U;

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
    msg.setTimeStamp(0.842352570408);
    msg.setSource(52821U);
    msg.setSourceEntity(175U);
    msg.setDestination(5139U);
    msg.setDestinationEntity(34U);
    msg.action = 161U;
    msg.longain = 1423545970U;
    msg.latgain = 1113977863U;
    msg.bondthick = 1829829770U;
    msg.leadgain = 1284064076U;
    msg.deconflgain = 1814890827U;

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
    msg.setTimeStamp(0.694857890919);
    msg.setSource(19271U);
    msg.setSourceEntity(38U);
    msg.setDestination(36195U);
    msg.setDestinationEntity(104U);
    msg.action = 62U;
    msg.longain = 3634836146U;
    msg.latgain = 2871412438U;
    msg.bondthick = 1320360935U;
    msg.leadgain = 1503973326U;
    msg.deconflgain = 1496783100U;

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
    msg.setTimeStamp(0.0816459331942);
    msg.setSource(30456U);
    msg.setSourceEntity(178U);
    msg.setDestination(61567U);
    msg.setDestinationEntity(208U);
    msg.err_mean = 0.680779529116;
    msg.dist_min_abs = 0.456058374707;
    msg.dist_min_mean = 0.136862228461;

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
    msg.setTimeStamp(0.687133569081);
    msg.setSource(2837U);
    msg.setSourceEntity(155U);
    msg.setDestination(30271U);
    msg.setDestinationEntity(164U);
    msg.err_mean = 0.288597256467;
    msg.dist_min_abs = 0.879255383968;
    msg.dist_min_mean = 0.72222468584;

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
    msg.setTimeStamp(0.482816806609);
    msg.setSource(29004U);
    msg.setSourceEntity(71U);
    msg.setDestination(20942U);
    msg.setDestinationEntity(29U);
    msg.err_mean = 0.908918649938;
    msg.dist_min_abs = 0.791804387419;
    msg.dist_min_mean = 0.523076222645;

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
    msg.setTimeStamp(0.269578279971);
    msg.setSource(10173U);
    msg.setSourceEntity(11U);
    msg.setDestination(5367U);
    msg.setDestinationEntity(119U);
    msg.uid = 12U;
    msg.frag_number = 190U;
    msg.num_frags = 234U;
    const char tmp_msg_0[] = {-90, -24, -20, -25, -40, -22, -102, -49, -89, -113, -48, 81, -63, -24, -59, 84, -64, 21, 36, 58, 45, -122, 51, -36, -85, -59, 79, 28, -1, -27, -121, -111, -113, -103, -83, 3, -93, 42, -82, 25, 69, 73, -126, -52, 22, -78, 69, -96, 97, -32, 22, -106, -24, 80, 59, -14, 56, -76, -127, 21, -63, 7, -93, 119, 76, 59, -38, 123, 115, -77, 120, 51, 11, 107, 39, -110, -127, 9, -64, -124, 87, 58, 11, -116, -88, -59, 107, 31, 67, 86, 22, -45, -89, -34, 75, -102, 26, 91, -126, 118, -59, -3, 77, -37, 11, 13};
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
    msg.setTimeStamp(0.292687115641);
    msg.setSource(8173U);
    msg.setSourceEntity(126U);
    msg.setDestination(58314U);
    msg.setDestinationEntity(122U);
    msg.uid = 108U;
    msg.frag_number = 193U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {59, 120, -106, -17, -78, -7, 33, 42, -7, -104, -109, 62, 34, -103, -106, -64, -10, 25, -107, 68, -79, 46, 125, -105, 17, 40, 114, 19, 111, -128, -54, 6, -100, 116, -60, 101, -122, 22, 92, 92, 62, -125, -106, -14, 56, -45, -85, 104, -119, 66, 26, 8, 21, 97, 58, 6, -6, -84, -113, 12, 38, -42, -46, -125, 83, 76, 111, -124, -99, 87, -16, 82, -125, 121, 7, -64, -81, 13, -7, -52, 64, -46, -2, -28, 12, -50, 7, 38, -55, 13, 25, 120, -67, 67, -71, 57, -35, -66, -31, 26, -20, -125, -2, -18, -81, -87, -54, 48, -29, 104, -40, -91, -122, -124, -99, -82, 113, 111, -49, 110, 72, -105, -69, -61, -29, 35, 100, -18, -65, -3, -48, -41, -73, 102, -78, -5, -125, 28, 123, -107, 9, 105, -121, 104, -104, 101, -83, 33, 48, 84, 73, 25, -67, 49, -7, 101, -66, -108, 29, 120, -125, 32, 42};
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
    msg.setTimeStamp(0.569258215037);
    msg.setSource(16376U);
    msg.setSourceEntity(15U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(97U);
    msg.uid = 46U;
    msg.frag_number = 57U;
    msg.num_frags = 225U;
    const char tmp_msg_0[] = {102, 116, 126, -78, -7, -16, -43, 37, -65, -41, 34, -82, 37, -34, -62, -122, 76, -109, 60, 110, -95, 70, -2, -123, 33, -119, 116, -111, 32, 81, 102, -120, -91, 56, 72, -103, -47, -63, 102, -35, 104, 66, -119, -117, -31, -27, -30, -65, 115, 85, 60, 44, 48, -33, 102, 111, 42, 109, 42, 72, 11, 26, -36, 18, -48, -6, -58, 120, 3, -111, 43, -72, -103, -43, -117, -113, 49, 46, -118, 30, -15, -40, -19, -117, 102, 46, -90, 114, -85, 72, -90, 90, -121, -60, -94, -84, -117, -80, -55, 105, 105, -119, -47, -91, -113, 111, -30, 11, 118, 83, -66, -5};
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
    msg.setTimeStamp(0.00240441382768);
    msg.setSource(7238U);
    msg.setSourceEntity(76U);
    msg.setDestination(33664U);
    msg.setDestinationEntity(3U);
    msg.content_type.assign("NYHXJSCPSBSNKLQCYZVREZQWLBIHCHDWGNOTKNELKLXXYJGIFPEFRESKTKJJRSVZPLVZLMKAHGBOE");
    const char tmp_msg_0[] = {-61, -44, -80, -28, -128, -78, 49, 33, -86, 47, -22, -50, 79, -83, 105, 70, -88, 11, -126, -52, 79, 6, -28, -50, 80, 44, -43, -70, 21, -107, -110, 82, 71, 41, 111, 58, -24, -120, -83, 23, 60, -121, -16, -73, -83, 97, 67, -61, -5, 113, -81, 67, 20, 80, 16, -54, 97, 90, 112, -118, 75};
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
    msg.setTimeStamp(0.277853681894);
    msg.setSource(23508U);
    msg.setSourceEntity(45U);
    msg.setDestination(31046U);
    msg.setDestinationEntity(124U);
    msg.content_type.assign("SQXACZXOUBNOUUGQEDGIQHYEAEYPJIKUPWMDNTDYDJSQSRDJXZOYBAWALXZCHZSTNXULPFRPGPCBSEPZDEVAKACAXNLLNDLHBGZHCFAZBXFKSTQCJ");
    const char tmp_msg_0[] = {-103, -90, -34, -108, -64, -87, 17, 61, -62, -47, 35, 22, -117, -38, 30, 0, -58, -76, -33, 80, -75, 40, -124, -124, -127, -49, -45, 16, 122, -101, -119, 91, -42, -14, -9, -100, -96, 10, -46, 37, -24, 67, 44, -127, -55, 55, 23, 44, 101, 66, 49, -91, 83, -46, 109, -90, -3, -115, -24, -128, -10, 44, 73, -56, -82, -10, 83, -78, -75, -80, 50, -8, -2, -24, 11, 79, 32, -70, -101, 125, -8, 80, 52, -75, 37, -114, 36, 125, -90, 10, 2, 55, -64, 51, 124, -28, -127, -123, 56, 84, 35, 112, 108, -54, 90, 73, -4, 23, 87, -20, -107, -96, -16, -59, -111, 35, -78, 86, -107, 125, 96, -42, 9, -127, 91, -80, 13, 33, -83, -13, 105, -5, 11, 76, 115, 126, -94, 24, 10, -9, -50, 7, 109, -115, 2, 97, 99, -85};
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
    msg.setTimeStamp(0.554015843651);
    msg.setSource(17511U);
    msg.setSourceEntity(12U);
    msg.setDestination(10347U);
    msg.setDestinationEntity(159U);
    msg.content_type.assign("PVJDGKZNKLBGFQJSHQZEFOWQOAAVLEUIDDMZKQWFXCFLWNLRVHUFPBCPDTEAUGXNCUNXMDHAAERYSNAEJODTRMZYAGQDYCNZDXWSHOKTSPVPTOLLWMYWKYOURMUDSIEVYMMIRINTHGMNSVYIEQWOLEXSHRZBBTYLVSRQUFFTIMCIWSZOYXVHJRHDBFJLJZGMXABBNICTNLOYPVJFAGPOWUGKF");
    const char tmp_msg_0[] = {33, 65, -118, -112, -20, 90, -94, -51, 77, 122, -33, -79, -119, -2, 90, -77, 87, -48, 40, 45, -113, 13, 122, -47, 77, 2, -102, -75, 26, 17, -88, 64, 9, -20, 1, -87, -98, 119, -3, 0, 103, 70, 25, -44, -57, -64, 72, 123, 77, -104, 86, -126, 20, -98, 41, 19, 22, 31, -55, -126, 16};
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

  return test.getReturnValue();
}
