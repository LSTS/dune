//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: fb518ea37f5ba0224ab0eb1bbc93cede                            *
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
    msg.setTimeStamp(0.102481133617);
    msg.setSource(46935U);
    msg.setSourceEntity(66U);
    msg.setDestination(60839U);
    msg.setDestinationEntity(88U);
    msg.state = 211U;
    msg.flags = 235U;
    msg.description.assign("BBVRCREMMRSFUAYOIQZGLLJPWJGFGRFJVXKTAKQSRDEGJWJXGYWABJKGKBXEEVWCQKPDONBUXNCHPTTUHSPUQNVOTWXXFYWTDJXUSDHZBUIPEOSFWZIOMHJNYYIBHQOMTECLQQFHISRMNGVLILDLVNQAZMVTELSHSHHIFCOWKPATLAOCFFYG");

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
    msg.setTimeStamp(0.414101568693);
    msg.setSource(3839U);
    msg.setSourceEntity(228U);
    msg.setDestination(8638U);
    msg.setDestinationEntity(204U);
    msg.state = 92U;
    msg.flags = 56U;
    msg.description.assign("UODGIXMBZRPQEZSBVWXKYXJYNFEIJPIJIBXMKMYPOMASSPBFXFREOVWZRMWNDUOXGGYHTFXELWZLYHJDSHVOVCLTLGLJCPUPWQFLMSFTRZZJKMIZVAFNNQQUCPTRVVWNXCUDRNTJTOGIDBPKHHPBJDIJQTCQGPVYOLWDQEWGAHQELDNUAUBDWNIEMSUMWBCKHKREAAQZTNAOR");

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
    msg.setTimeStamp(0.444727755886);
    msg.setSource(28115U);
    msg.setSourceEntity(159U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(80U);
    msg.state = 223U;
    msg.flags = 52U;
    msg.description.assign("WPZLXIYZAXJRAPQUBDRWETSNSIPLTOKIOCUFYADLENBOQXMFNHJMFAJCOVBN");

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
    msg.setTimeStamp(0.905506543727);
    msg.setSource(47696U);
    msg.setSourceEntity(207U);
    msg.setDestination(59180U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.902001955027);
    msg.setSource(57818U);
    msg.setSourceEntity(83U);
    msg.setDestination(27360U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.610832758307);
    msg.setSource(47334U);
    msg.setSourceEntity(230U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.660628038974);
    msg.setSource(65020U);
    msg.setSourceEntity(181U);
    msg.setDestination(3501U);
    msg.setDestinationEntity(140U);
    msg.id = 215U;
    msg.label.assign("ELCRQXXSPYSCABTLSKNIEBPOFBFOLMIVWVNHKSMZOTMUDDBXQTGKNBYIGWWMMSIQHKUWDNTGTSLXJOMTUECIAFJNVXEURHSGRFHQYNXMEWAVDIIFLKKWTAZPDGCTAAQBYOHOYJDJRUPKBKBZYWZVZLYSXUNEDPMVJANVYVXBCSFOZOHFXEZQERZJYJNDVJ");
    msg.component.assign("FGOQUMFMVENJTMCKVRWFJETMRFWZCTNPSJEZ");
    msg.act_time = 39387U;
    msg.deact_time = 36409U;

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
    msg.setTimeStamp(0.877229109972);
    msg.setSource(18692U);
    msg.setSourceEntity(38U);
    msg.setDestination(14472U);
    msg.setDestinationEntity(48U);
    msg.id = 220U;
    msg.label.assign("SHPJRTLGWRKPBCSTGWXKNKKNNTRWFJTUVEMVNDUTENHZJVXEJQUOQRDZQ");
    msg.component.assign("MWGYOFKHMDUJINLECJIOXHNVKUGCDEWMOBLUQINVWDRPQMBQHEDAVKMRNPSJAZXRQUIONBXUEVRYPKXEQZUFGXLQEID");
    msg.act_time = 19962U;
    msg.deact_time = 40722U;

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
    msg.setTimeStamp(0.119289259846);
    msg.setSource(10863U);
    msg.setSourceEntity(178U);
    msg.setDestination(49146U);
    msg.setDestinationEntity(198U);
    msg.id = 142U;
    msg.label.assign("CWLQQYFQBPJCJOFZTZFTDHRATTSYOWIJNYTHLACDNSSJUKKHVSTWXHDYYFZDNOGMMLGABZMZUARRJISEQLQIEXMVNPRFGQABBLUYZMWDMEQHTELNPRVBGXECGOHUOBQHXCKPTCRSBKRVXKKHVCPOVYSROSAREDVLCFOEZMKNLSZAXGJACXZDFTWUBREDLOIBJAMUPTSVPEZWNUMNQKDYOGYFVWLIINI");
    msg.component.assign("JITHAKEXOVQIGXLRUSXCUQLJEOV");
    msg.act_time = 14495U;
    msg.deact_time = 40983U;

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
    msg.setTimeStamp(0.131045629288);
    msg.setSource(9886U);
    msg.setSourceEntity(145U);
    msg.setDestination(44091U);
    msg.setDestinationEntity(20U);
    msg.id = 12U;

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
    msg.setTimeStamp(0.400379504049);
    msg.setSource(50095U);
    msg.setSourceEntity(105U);
    msg.setDestination(3686U);
    msg.setDestinationEntity(239U);
    msg.id = 63U;

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
    msg.setTimeStamp(0.0384291103134);
    msg.setSource(40600U);
    msg.setSourceEntity(94U);
    msg.setDestination(21961U);
    msg.setDestinationEntity(75U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.276730647117);
    msg.setSource(30963U);
    msg.setSourceEntity(145U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(136U);
    msg.op = 216U;
    msg.list.assign("WUGMONEMIQSNAAPUBGDKQDCOKOMVXKSAVWOPPRNUBKVPCLFDZPTBBYMGGZCVWGDRUOFXEAARGPBYLJOHEFSTNUZXYDKFNLDYJVFRICMATHGCWCLMZXFQMCTPETIUFLLRHAJFOWSICJQQKXKYQIUITTHWMRNGLLTBHOSYNNZJJQHEJWPXTSXWYMGOAJSDNVEZYHZRIXWTDQUKACIBEMWNAPBHFEXYRXJKVSLQDZKVUEB");

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
    msg.setTimeStamp(0.730974216108);
    msg.setSource(4370U);
    msg.setSourceEntity(80U);
    msg.setDestination(20182U);
    msg.setDestinationEntity(51U);
    msg.op = 80U;
    msg.list.assign("MQAIDHNTVOAZSOTWNQVIIKINWFOJCOKUPMJADOKGYZXFJKFPUAVRZSPXSYQANEGBKYEYXIUUTDLKHTBTDSRIQXBYHWTHCTJHSPMYWLYJEUAOZBXEOIRFGQCMXPCKVDJRXJLGKBMSURHPNVPGYCFZHRHENLISPSCGUEG");

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
    msg.setTimeStamp(0.193091781877);
    msg.setSource(40591U);
    msg.setSourceEntity(9U);
    msg.setDestination(14874U);
    msg.setDestinationEntity(167U);
    msg.op = 207U;
    msg.list.assign("TYELDRSYUKKISZCEWBULBVOQWIWHQJXPGYDUYFKVVFXGYRHIKSDFAJAQKZTNGMLRZXSWSMYQBIXMNLSJGOPCPIRTRSYYUWHNEJUCPRAEZGATOHZRFMKQNOBICPEEGATQTMPXAGONBHVISFOZXOHQD");

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
    msg.setTimeStamp(0.589903828661);
    msg.setSource(12948U);
    msg.setSourceEntity(176U);
    msg.setDestination(25193U);
    msg.setDestinationEntity(65U);
    msg.value = 140U;

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
    msg.setTimeStamp(0.0762241263649);
    msg.setSource(15538U);
    msg.setSourceEntity(197U);
    msg.setDestination(29084U);
    msg.setDestinationEntity(94U);
    msg.value = 175U;

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
    msg.setTimeStamp(0.738599697196);
    msg.setSource(53886U);
    msg.setSourceEntity(193U);
    msg.setDestination(26349U);
    msg.setDestinationEntity(78U);
    msg.value = 184U;

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
    msg.setTimeStamp(0.412661514938);
    msg.setSource(41009U);
    msg.setSourceEntity(114U);
    msg.setDestination(53902U);
    msg.setDestinationEntity(68U);
    msg.consumer.assign("MURPZDGGPVIVTXRQTIZYVRRJNHXZBDQHUKEBQKGNXRJWRIBJLEVENWFAXIUYIJCDEMKABFJDZLXZPYEKICHIFYCLAOSYRRTPNFNUVATBGUUBHEMCCVFOHCSUWENBDJSYVUSPAKIQQDTMTHKOPXOPCVHOLMJWGTXLWYBKOWKHMLIZSNGKFMEUASDDDZOFEJW");
    msg.message_id = 62138U;

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
    msg.setTimeStamp(0.00768279750099);
    msg.setSource(29979U);
    msg.setSourceEntity(174U);
    msg.setDestination(2301U);
    msg.setDestinationEntity(240U);
    msg.consumer.assign("JYJDWGHAUURFHKTRVNFFUCELWBUCTZIGPSMFHTCDTSJPHZMEWPMABEWQRTPUQRFXROBQIUALVOBHCCVZLXRYYBOXGJXLSMVMNJRATJWNAVVAHBXUGQEWSPVRAQUZZKKLWIFMHNDENEPGIKWKLFMXRNXVZKZXCNZMHAFZSXQUMZVXHYNNDIPYLSHPOSGECODUYEIIKLFOQNOYYJAGPRMDSCPEIFIDBTKDASDCQDTQOTLYGEJJB");
    msg.message_id = 28681U;

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
    msg.setTimeStamp(0.872169231426);
    msg.setSource(10262U);
    msg.setSourceEntity(188U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(240U);
    msg.consumer.assign("XBJAIAVYCPMLRXKNTTNAZZWLMEIYSZYUHQXGRIOVZSGVNBLQERVTGKLRMFTBPZKKPUKENADEEPOBBAZJJYQFDNDJRHDDHGWJLUJWNWWUHAQJOLXIGFCKTMNUSRHVLOCEJMZGTAAHPUBLFQZFSHKOIAIHIXOYTFTQBGSTNVNRAUBLECYDPSDFHBTESQGKOQUDWIPQCDMECBFDXWSIHUREJKOMCZQSPSMZX");
    msg.message_id = 29510U;

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
    msg.setTimeStamp(0.496055483061);
    msg.setSource(2827U);
    msg.setSourceEntity(118U);
    msg.setDestination(57366U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.194403865474);
    msg.setSource(32959U);
    msg.setSourceEntity(18U);
    msg.setDestination(11915U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.188635909808);
    msg.setSource(41175U);
    msg.setSourceEntity(214U);
    msg.setDestination(42828U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.2985444395);
    msg.setSource(52758U);
    msg.setSourceEntity(217U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(240U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.703251306823);
    msg.setSource(5058U);
    msg.setSourceEntity(99U);
    msg.setDestination(62184U);
    msg.setDestinationEntity(65U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.239693081768);
    msg.setSource(36496U);
    msg.setSourceEntity(249U);
    msg.setDestination(32081U);
    msg.setDestinationEntity(108U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.800535034047);
    msg.setSource(17553U);
    msg.setSourceEntity(14U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(175U);
    msg.total_steps = 112U;
    msg.step_number = 200U;
    msg.step.assign("WRULIARJMSTKKNJPRLXCGMKXQMUIJSMKFATNVCSJGJPPUPQLDMGJSTPOBMCDPCMVOVFVNZKIFEYFVCKEBZOXGBUSPONTHQGGLOSLDXABLEUDZCSGRWHADNTQZTIFIAPOAEFIJHNCQZXWJQHAYTWYNUAEWLVFTCBOISDNJKJOBZDGWEOIUYBWPOEDKSVEWXTTFYGUPQZRHXYFMBUVBQFCLZDKYQYMHWRYIAYXWZRCK");
    msg.flags = 82U;

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
    msg.setTimeStamp(0.225754248723);
    msg.setSource(24049U);
    msg.setSourceEntity(17U);
    msg.setDestination(35673U);
    msg.setDestinationEntity(222U);
    msg.total_steps = 53U;
    msg.step_number = 39U;
    msg.step.assign("BNQGZDVBHWFCSWDHWQELRGXUOMQFJXMVYNULUNZOTODVIVTZAYUFKDIGXHGMPLGJDUIICIRCAWMACV");
    msg.flags = 187U;

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
    msg.setTimeStamp(0.420011732823);
    msg.setSource(28530U);
    msg.setSourceEntity(241U);
    msg.setDestination(62231U);
    msg.setDestinationEntity(126U);
    msg.total_steps = 230U;
    msg.step_number = 118U;
    msg.step.assign("VVSFTYPHDHJXHLJXVUCAMFRHAXSLMTYUDEZQDMPHXVDQEWYJCXUNEFVRFSMQOHBEXYTSJWDNLVPIYFJDTNBXKCXRRGTXJEKFOQBKKISXJEDLWLCHWKTKZTLUGBITLNWUKARAGYIBTCEPOPEGNNGRBAQNGPWINGDPQOAUHZOIFBFRMBCPJCNSWGBZMCPQZSHSMJOESZYLWZYKLRMQZQDI");
    msg.flags = 36U;

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
    msg.setTimeStamp(0.804209604212);
    msg.setSource(47502U);
    msg.setSourceEntity(0U);
    msg.setDestination(54587U);
    msg.setDestinationEntity(182U);
    msg.state = 179U;
    msg.error.assign("DZGZGDVPIPGTPNKNAJUSVOBVGIPZQSIFQMBWOWTAIRBLFVFRROLLKWVODEZTNJJZLXZCUTXT");

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
    msg.setTimeStamp(0.504652745031);
    msg.setSource(56487U);
    msg.setSourceEntity(229U);
    msg.setDestination(36740U);
    msg.setDestinationEntity(120U);
    msg.state = 85U;
    msg.error.assign("LFQPBNNAORBZSNIHSQYWWVWGQPYZESNBOTDAJULXKRGIYXGSYYWNPYJXNIKVQWNSWCLBHMNXTWKAMMOWALTZRRQETIFZGMPCIQMVZVQPVPDJBKTWCHZLGXRFANRBJYKJDGUC");

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
    msg.setTimeStamp(0.927314732792);
    msg.setSource(10522U);
    msg.setSourceEntity(215U);
    msg.setDestination(22625U);
    msg.setDestinationEntity(170U);
    msg.state = 27U;
    msg.error.assign("ETVQKOWDGBHNJANVGXQFEQDKWKSLFKPCFUNVKBYQSWIBZTYISEDMHTNPPGSWWDCUCNRJPABQRUYMCGORZHZOOSHHEXPQLNDJWEVAUFRYCTEUGFKKXNYQVAIRBAUFKIOSUSLPYTJZLLYEOQRXMTOPXILZBVSJCSWBJPAONHGVHUDRTYELRCABLZMD");

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
    msg.setTimeStamp(0.661360784123);
    msg.setSource(29281U);
    msg.setSourceEntity(24U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.367252489037);
    msg.setSource(32030U);
    msg.setSourceEntity(172U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.0351153199688);
    msg.setSource(35269U);
    msg.setSourceEntity(37U);
    msg.setDestination(26269U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.455544617401);
    msg.setSource(34243U);
    msg.setSourceEntity(183U);
    msg.setDestination(60497U);
    msg.setDestinationEntity(114U);
    msg.op = 149U;
    msg.speed_min = 0.273918020546;
    msg.speed_max = 0.67778061535;
    msg.long_accel = 0.463791924153;
    msg.alt_max_msl = 0.073128611008;
    msg.dive_fraction_max = 0.950607687505;
    msg.climb_fraction_max = 0.0677771865369;
    msg.bank_max = 0.275908199025;
    msg.p_max = 0.865945771662;
    msg.pitch_min = 0.580246494528;
    msg.pitch_max = 0.595478376756;
    msg.q_max = 0.300507059847;
    msg.g_min = 0.820506760492;
    msg.g_max = 0.37596357778;
    msg.g_lat_max = 0.708566544341;
    msg.rpm_min = 0.611161852768;
    msg.rpm_max = 0.738353836679;
    msg.rpm_rate_max = 0.889932862306;

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
    msg.setTimeStamp(0.0188264377125);
    msg.setSource(63301U);
    msg.setSourceEntity(15U);
    msg.setDestination(56515U);
    msg.setDestinationEntity(37U);
    msg.op = 22U;
    msg.speed_min = 0.78822926154;
    msg.speed_max = 0.443528995637;
    msg.long_accel = 0.547873533307;
    msg.alt_max_msl = 0.942053680773;
    msg.dive_fraction_max = 0.0953657948484;
    msg.climb_fraction_max = 0.0383086854659;
    msg.bank_max = 0.948547744915;
    msg.p_max = 0.644192447184;
    msg.pitch_min = 0.650058877255;
    msg.pitch_max = 0.34712234116;
    msg.q_max = 0.372239668201;
    msg.g_min = 0.839256594784;
    msg.g_max = 0.112130863941;
    msg.g_lat_max = 0.755795172195;
    msg.rpm_min = 0.17459471223;
    msg.rpm_max = 0.195055790962;
    msg.rpm_rate_max = 0.921664074467;

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
    msg.setTimeStamp(0.443352448809);
    msg.setSource(37904U);
    msg.setSourceEntity(73U);
    msg.setDestination(1294U);
    msg.setDestinationEntity(192U);
    msg.op = 15U;
    msg.speed_min = 0.994322900594;
    msg.speed_max = 0.97286315085;
    msg.long_accel = 0.0254544385146;
    msg.alt_max_msl = 0.147342544667;
    msg.dive_fraction_max = 0.871335451316;
    msg.climb_fraction_max = 0.198547767386;
    msg.bank_max = 0.622065748279;
    msg.p_max = 0.916492924813;
    msg.pitch_min = 0.873215627931;
    msg.pitch_max = 0.558786515792;
    msg.q_max = 0.277912324744;
    msg.g_min = 0.812325027111;
    msg.g_max = 0.0408269229011;
    msg.g_lat_max = 0.693485486046;
    msg.rpm_min = 0.0773174021669;
    msg.rpm_max = 0.984331764551;
    msg.rpm_rate_max = 0.0355743160185;

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
    msg.setTimeStamp(0.0425562634254);
    msg.setSource(41403U);
    msg.setSourceEntity(148U);
    msg.setDestination(50371U);
    msg.setDestinationEntity(54U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("NIPLQOMNJMEGLCFXIUQCCYZVTHLXDQO");
    tmp_msg_0.data.assign("OJJWCOYGFDFRXCFQRXTEHMYHJLPFCGQOTKATIULRHJBRUSAYQECYZYLIVBKTVHURRYLWSMIXNHEYHQQI");
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
    msg.setTimeStamp(0.863686893799);
    msg.setSource(31704U);
    msg.setSourceEntity(121U);
    msg.setDestination(46855U);
    msg.setDestinationEntity(164U);
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.404555930237;
    tmp_msg_0.x = 0.969430695694;
    tmp_msg_0.y = 0.32386405854;
    tmp_msg_0.z = 0.579480564128;
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
    msg.setTimeStamp(0.266679277441);
    msg.setSource(14104U);
    msg.setSourceEntity(84U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.166525086749);
    msg.setSource(29741U);
    msg.setSourceEntity(116U);
    msg.setDestination(43306U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.670094073689;
    msg.lon = 0.674018081595;
    msg.height = 0.488636859232;
    msg.x = 0.82596361601;
    msg.y = 0.722857338906;
    msg.z = 0.646128352129;
    msg.phi = 0.791451838736;
    msg.theta = 0.336872224291;
    msg.psi = 0.728386711927;
    msg.u = 0.0114080352194;
    msg.v = 0.62128723071;
    msg.w = 0.711375910997;
    msg.p = 0.711819919168;
    msg.q = 0.581054514984;
    msg.r = 0.826848208208;
    msg.svx = 0.557832021393;
    msg.svy = 0.536174164823;
    msg.svz = 0.784890457836;

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
    msg.setTimeStamp(0.802258631374);
    msg.setSource(46286U);
    msg.setSourceEntity(140U);
    msg.setDestination(50947U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.0376323684992;
    msg.lon = 0.010890530066;
    msg.height = 0.0344633035053;
    msg.x = 0.845120104604;
    msg.y = 0.439295474612;
    msg.z = 0.523128092148;
    msg.phi = 0.839897179861;
    msg.theta = 0.888420266489;
    msg.psi = 0.406139688437;
    msg.u = 0.307377306256;
    msg.v = 0.98417841345;
    msg.w = 0.289598227628;
    msg.p = 0.445026653921;
    msg.q = 0.206431446478;
    msg.r = 0.586120233152;
    msg.svx = 0.643371377743;
    msg.svy = 0.949015024178;
    msg.svz = 0.899885719603;

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
    msg.setTimeStamp(0.676167351785);
    msg.setSource(58918U);
    msg.setSourceEntity(168U);
    msg.setDestination(21714U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.774368570072;
    msg.lon = 0.921623783661;
    msg.height = 0.137703774208;
    msg.x = 0.422694448889;
    msg.y = 0.112690458038;
    msg.z = 0.269962198348;
    msg.phi = 0.563616013433;
    msg.theta = 0.580895224454;
    msg.psi = 0.618420478814;
    msg.u = 0.609190996516;
    msg.v = 0.608046865939;
    msg.w = 0.180136678742;
    msg.p = 0.879638991601;
    msg.q = 0.484554821572;
    msg.r = 0.833343138428;
    msg.svx = 0.576479527772;
    msg.svy = 0.33977896213;
    msg.svz = 0.0928313997161;

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
    msg.setTimeStamp(0.748946822109);
    msg.setSource(18234U);
    msg.setSourceEntity(56U);
    msg.setDestination(23891U);
    msg.setDestinationEntity(94U);
    msg.op = 10U;
    msg.entities.assign("XRQTMDWZIYGDAKLUWMDTOTDMAANAHHEMKYNFOFLOBYZTBRBCTZJFFVIHWGQIKNOMHXDCZBDPVCNEOITJFGXYLACTRRIGIPUBHAFMPANTRGA");

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
    msg.setTimeStamp(0.20300059635);
    msg.setSource(26793U);
    msg.setSourceEntity(102U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(4U);
    msg.op = 64U;
    msg.entities.assign("XIPIKMTIVYUCFXLYOEMKQGANLTNIRGBQGRCDRMPTZLTRWJTAULUBLODEXWFFRQQHSNYIPOYUXCVPSQTAGKVYFZERVRLDJWNFMYAJHGXOZJGOJSHYQDPKJFBPKSBWWPSQTRKRVNZBJLFVDWHDM");

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
    msg.setTimeStamp(0.886593035914);
    msg.setSource(29581U);
    msg.setSourceEntity(124U);
    msg.setDestination(42003U);
    msg.setDestinationEntity(15U);
    msg.op = 195U;
    msg.entities.assign("CHLURDIMYKKRDOAJOBVDZAXFXQGTHGECFURABYQPZRDBDMKSRQRYNBIW");

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
    msg.setTimeStamp(0.250843499571);
    msg.setSource(26268U);
    msg.setSourceEntity(112U);
    msg.setDestination(44518U);
    msg.setDestinationEntity(142U);
    msg.type = 31U;
    msg.speed = 48121U;
    const char tmp_msg_0[] = {92, 58, -48, 88, -75, 30, -44, -128, 75, 11, -115, 126, 71, -25, 4, -7, -65, 44, 59, 44, -92, -37, 75, 82, 8, 47, -114, 42, 73, -21, -97, 74, -84, 121, 97, -97, -48, -44, -106, 25, 78, -30, 84, -74, -49, 28, 15, 41, 46, 99, -102, 108, -23, 12, 15, -41, 106, -114, -71, 22, -80, 32, -73, 19, 94, -91, -80, -79, -83, -57, -47, -118, -78, -72, 73, -105, 114, 29, -22, -31, 18, 77, -80, -12, -4, -20, 21, 13, -124, -21, -103, -106, -78, -112, 94, -20, -48, -65, 7, 57, -54, 106, 48, -8, -98, 45, -114, -34, 102, -79, -128, 85, 91, -99, -90, -128, 95, -114, -38, 46, 123, 20, -115, 63, 59, -41, -34, -68, -43, -50, 121, -46, -70, 15, -82, -103, 112, -13, -19, 48, 17, 71, -31, -54, 106, -95, 63, -26, -20, -115, 105, 34, 89, -18, -59, 93, -126, 15, 64, 65, 117, 72, 15, -111, -85, 68, 63, -42, -66, -73, -60, -71, 69, 107, -25, 7, -74, -9, 90, 124, -114, -81, -100, 81, -25, -42, -116, -31, 38, 72, -125, -10, -14};
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
    msg.setTimeStamp(0.698960856661);
    msg.setSource(61488U);
    msg.setSourceEntity(171U);
    msg.setDestination(23853U);
    msg.setDestinationEntity(190U);
    msg.type = 210U;
    msg.speed = 47781U;
    const char tmp_msg_0[] = {-11, -103, -113, 61, 34, -2, -62, -31, -78, 80, -97, 5, 105, -49, -56, -40, -32, 15, -68, -103, -105, -18, -20, -74, -80, -51, 9, 5, -123, -109, 98, -77, 5, 116, 52, -111, -87, -89, 89, 103, -73, -69};
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
    msg.setTimeStamp(0.877675922705);
    msg.setSource(17122U);
    msg.setSourceEntity(233U);
    msg.setDestination(48057U);
    msg.setDestinationEntity(18U);
    msg.type = 34U;
    msg.speed = 32761U;
    const char tmp_msg_0[] = {105, 41, 15, 59, -128, -9, 125, -22, -71, -84, -121, -51, -81, 91, 61, 108, 121, 58, 122, -45, -120, -16, -42, -124, -86, -8, -20, -92, 70, -25, -4, -79, -106, 60, 44, -12, 4, -112, -103, -108, -31, 26, -85, 93, -49, -28, 31, 41, -51, 93, 82, 82, 106, -21, 20, 76, 83, -29, -118, 70, -90, 101, -89, 125, -7, 30, -78, -19, 5, 65, -2, 46, -79, 101, -29, 62, -17, -19, 6, 28, 89, -115, -15, 35, -4, 23, -106, -93, 13, -7, 88, 1, -48, -37, 71, -111, 17, -5, -72};
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
    msg.setTimeStamp(0.177886023398);
    msg.setSource(57215U);
    msg.setSourceEntity(162U);
    msg.setDestination(22218U);
    msg.setDestinationEntity(3U);
    msg.op = 165U;
    msg.tas2acc_pgain = 0.583047079579;
    msg.bank2p_pgain = 0.477393569916;

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
    msg.setTimeStamp(0.142946555933);
    msg.setSource(26447U);
    msg.setSourceEntity(182U);
    msg.setDestination(62410U);
    msg.setDestinationEntity(29U);
    msg.op = 44U;
    msg.tas2acc_pgain = 0.802313402244;
    msg.bank2p_pgain = 0.844929433402;

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
    msg.setTimeStamp(0.0990683352059);
    msg.setSource(24480U);
    msg.setSourceEntity(149U);
    msg.setDestination(27899U);
    msg.setDestinationEntity(237U);
    msg.op = 127U;
    msg.tas2acc_pgain = 0.556899569196;
    msg.bank2p_pgain = 0.622546450525;

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
    msg.setTimeStamp(0.254028268314);
    msg.setSource(11293U);
    msg.setSourceEntity(30U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(19U);
    msg.available = 922625359U;
    msg.value = 244U;

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
    msg.setTimeStamp(0.4347291045);
    msg.setSource(6859U);
    msg.setSourceEntity(86U);
    msg.setDestination(44267U);
    msg.setDestinationEntity(72U);
    msg.available = 1890346614U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.216581064403);
    msg.setSource(16137U);
    msg.setSourceEntity(161U);
    msg.setDestination(51207U);
    msg.setDestinationEntity(124U);
    msg.available = 1144579164U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.730878953613);
    msg.setSource(28867U);
    msg.setSourceEntity(113U);
    msg.setDestination(34804U);
    msg.setDestinationEntity(63U);
    msg.op = 235U;
    msg.snapshot.assign("LVLFEHLVWUNBNTQHFOIRSDOGTNQWICMALKSQCBQUORWZCPXPMTZTYXRWBAOFWJKETQUCPHWWMMEZPIOZUSCPCXJOVKEEHTRYJMTYNHKDGNEDGDEODZ");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 20408U;
    tmp_msg_0.value = 223U;
    tmp_msg_0.error.assign("VNTYENHIERUQGBSKSJWZWRODHODRIQSNMEXMQGZNLVUPRZFXGQIYOZSTMMYCFQWKOQCUSFJBJXMQSMOTLXHISNCCNCWMKT");
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
    msg.setTimeStamp(0.248814591419);
    msg.setSource(9842U);
    msg.setSourceEntity(254U);
    msg.setDestination(32293U);
    msg.setDestinationEntity(31U);
    msg.op = 192U;
    msg.snapshot.assign("NINZUGJMRLEUVHVCEAZVHWYUPDLXRUCALRKGREZDFWQJBAAYYTSKKOWXJNTWIIVSMLFCJNCCQMKCFKPCZFZCMY");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.185440405201;
    tmp_tmp_msg_0_0.speed_units = 160U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.922233995679;
    tmp_tmp_msg_0_1.z_units = 70U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.719386111685;
    tmp_msg_0.lon = 0.619956403309;
    tmp_msg_0.radius = 0.854716305356;
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
    msg.setTimeStamp(0.752267642978);
    msg.setSource(31500U);
    msg.setSourceEntity(142U);
    msg.setDestination(26192U);
    msg.setDestinationEntity(216U);
    msg.op = 23U;
    msg.snapshot.assign("FCWXRZJUQKNZIKJCIYEJXGTIAPCTMGICJVEASVOEZPNJTSLITPEZBEAAIXXVETFNZOLWTHYYHPVBGHLMDCOFLLVPZDKTFMZUXPUKQAWHGVYHEKYNWERMGUDNKCDYNOLEPSWKJJFBMCRYLRJDVCXBBRIXMAFFQBANLBDYBGVUDHPQWGRXIQKOCPBIVAPWRQQFNSSMSTWUKKHHTMUHGNFYLZFBOWJOGRMNAOSRYJSAZSGOULEVQQUXUHDSRC");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 197U;
    tmp_msg_0.snapshot.assign("KJCCYYYLITFHVQDWLSHFLPQNSRRZPEYTJCESOJECLZOAZORVENWUVSZDRLAZZNTPHZYWFUIBXAQVXADLNUSQE");
    IMC::PlanStatistics tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("TIDHABNMIWOJQMSLTACURTVSBTMLIJPRSCQMXTTFKNNQFJRHSVZEPBCSMGUMQBNAGCAECOPKVULZMHBVFPWVXXGQWSDHXQENZQUYAVDZOILVORGPWYIXJFOSRHDLUGGZVWNZNEXFFDYKZJXPHZRAHDEWQEZLLRTRIUOGXDBPWUNKOYXKYYIKKCUNZCSWOBWJPBOYMJGEODDFYFUSMKHAQBRLMFFBNHA");
    tmp_tmp_msg_0_0.type = 160U;
    tmp_tmp_msg_0_0.properties = 151U;
    tmp_tmp_msg_0_0.durations.assign("AXJZNCJNVWNVYPBMVWZZPRZQIHOZFYAZOBYHBTRICZMHGMEKRGBFFOAZGBN");
    tmp_tmp_msg_0_0.distances.assign("DSOIXEMMKQCLQSDJJTEIMGRSPBXWGEJBWMOHVWXWQFLLSIWKAAPKCHFYNMTZZSFQBFGOTFMIEAIGQPACUDSXPWARTUQIJLHKLGEVDUVPVGNFIYFBJKAGVZVJVRNZLCCLHQYIADEWDMBNZOKKPKXRBOTYJWN");
    tmp_tmp_msg_0_0.actions.assign("VVVJWKKHGF");
    tmp_tmp_msg_0_0.fuel.assign("LJXFHOMWGMPQWDAMYUPQHSJKETNJMDMUCNQEKVXLYIUIHDBALZFIGTPSBUZSJHKUJDBLEQJDZLHRJAFRNSASTBIEYELYDVHRTGZYXXAGKLZLHTNRFFXCRNFPBNXBKVVYUIWYAJSSJNVGQSYCWHGIXNRMKKCRWPOINXGOMEFESAQZAZMOHIGPAROVXBPUWOOWOFKCQHKFDMZEESDCTQCRIVQUKBNPTBFTTWDPUOOXZPYVJMLEGVITQUCZDCRVY");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.25238379457);
    msg.setSource(27126U);
    msg.setSourceEntity(135U);
    msg.setDestination(1040U);
    msg.setDestinationEntity(179U);
    msg.op = 1U;
    msg.name.assign("WEYXEFSOAGIIDUMODSYFPYGHSXFYFPUTEKLVBPEDJCJP");

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
    msg.setTimeStamp(0.28130339558);
    msg.setSource(4591U);
    msg.setSourceEntity(146U);
    msg.setDestination(49134U);
    msg.setDestinationEntity(207U);
    msg.op = 247U;
    msg.name.assign("AJSGBNGFDCVBXOCKUESNXVEHXZPVKSOUJNPGTPUPEFLLMTHDKNKYYTQMRCITLKLCZURWAVYEBABLIXJYOWNGGRIOLHWRQCOGWBKZSAMXNIOFXVPYQNIMWEKGVYHRWFDGWRHQFHRPIIDFLFQVPERCBHDLSUTTAMZRNLBTPSTQ");

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
    msg.setTimeStamp(0.145045216771);
    msg.setSource(50647U);
    msg.setSourceEntity(238U);
    msg.setDestination(16307U);
    msg.setDestinationEntity(112U);
    msg.op = 191U;
    msg.name.assign("RPJKVXTOPOZZULADNHDPDXMIIMQJBOFEZHGEWEDYKIYJERPTGUCEWJLBEXGJKURTFLTHMCISDPKPNZUHXVRDOBMJAIILYWBIAYQBVSUCFNRVTGBSCUSNLIYNIMXUQFTQNZZEAMJVFAELVCZFWTORSIEWPQDFKWHR");

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
    msg.setTimeStamp(0.561940151995);
    msg.setSource(7132U);
    msg.setSourceEntity(244U);
    msg.setDestination(41323U);
    msg.setDestinationEntity(140U);
    msg.type = 250U;
    msg.htime = 0.0175877450207;
    msg.context.assign("IVJXATUKSJPSBCGBWOFGIFCHESQQSJXYFBLTXVAMNWYCXKAWUKQLURKUUDPHPCGERCKTVORDBIYPUPWLVUTPQSBXZSVTTZQLXFJMKEAWYDVJSFXEZMDIPYSYRALKDCOWQJFWMOMAEBJGZQWNBGXGZAWMGHGEQNOASYUZGJDZRTTNNCXFCHQVOHHIVLTFVIURMNDEZMPBXELNNKIDFMOCKPZARPQZWHHTHVOM");
    msg.text.assign("RLDFNEUQMOREMTNGQGQKXKOYNKGWKGSOAMDBISOBCDAZIAKJZX");

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
    msg.setTimeStamp(0.543087896297);
    msg.setSource(44746U);
    msg.setSourceEntity(87U);
    msg.setDestination(52082U);
    msg.setDestinationEntity(171U);
    msg.type = 19U;
    msg.htime = 0.917050995328;
    msg.context.assign("TWQXVAVAYSZBIXCLGFULVLNAOIWPTGJQNRXSUQEQRGIVSVLDWZNPKLTKFDXUNRZZFVPCFSWJJYOPXLPLFNOSYPDYPCJJNJBHEREZZRQKBYRMMJUXOBNZAQBUPKGFRJCLGIWEIPMTIMIYQEVAKIGKTABDTLUGAMWHBARLBUSTHRTHYDGOZWKNSWHMCMGK");
    msg.text.assign("TGWIRLMAPXZEMNNXSZPOVMPIVWLYICZPDMHJVOVVFRYCRPONEWUIECCPIXEOAKZONQNUAXKJZJMPOGGRJXMSOOCMLHGGBYGOSFJDHDDCDELBFXTESYTTIBATKQLTNHHMIHAZUUQUFC");

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
    msg.setTimeStamp(0.956454539206);
    msg.setSource(55326U);
    msg.setSourceEntity(239U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(29U);
    msg.type = 185U;
    msg.htime = 0.024853394862;
    msg.context.assign("VBQIDRHTPWXUKRGTIXRGQUNBOYNEFAKJWYHWSAPQHLLJERUEODHMNIVYYFGRODIXQWDTOLSIXCUKPHTZGPNKPFWTMCCEUPMOUIBNCIUDMKOSGEQJAKVQAZZAJFYPKPCBHLRHZMFAICEAYFLDX");
    msg.text.assign("WJZEWEBMMUTFWFARIFMAGAHCDLOOWDZITZAINVTBLOOBVNOKOLBEFRMZYNLPFNXTHTHSPEDXFAGILRCAUXITYJUJSSLXQQQIHEFOMKRSNKKUWDBSHYRWZYFLBUVICTPGZPXQZLCADREALJRFIUDJXJSUWNTXEPYGNZRGGVYVEJBYSNYPQHDKYQZMKLBXCHBQYNJQRXSXJBWQCPIOKA");

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
    msg.setTimeStamp(0.628656124266);
    msg.setSource(38836U);
    msg.setSourceEntity(92U);
    msg.setDestination(58135U);
    msg.setDestinationEntity(48U);
    msg.command = 125U;
    msg.htime = 0.658534823507;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 240U;
    tmp_msg_0.htime = 0.187522383039;
    tmp_msg_0.context.assign("ZRFIOJJHDMZQYWHEUQQIHRGUBTBKGLSHNDDBNNPVNWCXCZPTBNBAOXFAOTYIYPZUXFYHCPOJBDUKBYTATVZJLAFUWEKAKXJHENZAUIQELYRMOSOHWGWVXRSRPJZRMALHYMSDXIGVXMDSUUGCEGVLFYCISTKOFDCLPLBLXVLVUGMYDMEEWPZDPSJFBFZGTKWWW");
    tmp_msg_0.text.assign("UOQFROWQLNWRRWNBADRPXHHHXUEQFUGBZBFXNEQVSNPJCTSJGYXHBDCRXUCGVVHMAVUMWWATYRZKXBFBOAVOPGITIIGWPAPYLDQZKSFFHNOGZSTCPDXOSKXKMNEEWAANIMDOGSPUYKQNKNDRXGPCHCSWEULIKHETYHVGLZSHNLMZIILQSRTXTCOMQBWJLMFGJDWLEIUCAAYYVZOI");
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
    msg.setTimeStamp(0.395522879214);
    msg.setSource(51040U);
    msg.setSourceEntity(97U);
    msg.setDestination(30451U);
    msg.setDestinationEntity(63U);
    msg.command = 105U;
    msg.htime = 0.618619669419;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 44U;
    tmp_msg_0.htime = 0.8198131954;
    tmp_msg_0.context.assign("ZQMUKCSWOYQOVKBXUTGPCFOLFOORHNZAVDNWJHNXPIZXXTBUHIGLJHZBEUAFYIPKEAVFTGQLDAMSEJPXJOBNLMLIXKAIRCREEZLSBQKUCMVIYBQEBUZQDUYFUVRMQSCOHHDWVJYAIAEWDYFOZSSGLJIXECNSHBMYWKAGQPSBQPPRYDRWFDXVFTIDCL");
    tmp_msg_0.text.assign("KKWNUYSUHZNZFIATGUFLLASKCWQGS");
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
    msg.setTimeStamp(0.27778365246);
    msg.setSource(34222U);
    msg.setSourceEntity(254U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(95U);
    msg.command = 61U;
    msg.htime = 0.758089976635;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 35U;
    tmp_msg_0.htime = 0.847667193461;
    tmp_msg_0.context.assign("OEXZURFHFJKPKHLEKTLCMBMHQGVRYGRAXNWBFYHDKMWCIMYAPGAQIJWCGNXXAQBENZYRWPDQEGWHOMTWKYDARWOEFMXUYAHCNIOYGZZSSVWOZPO");
    tmp_msg_0.text.assign("LQDEERWBCDHSJYIMTFXSTAUTWVYGOIZYHHLPKSBXKHSDNCAXUSHANPQFKFSMQLUSANHBCBGVQEDOOZAMZDUPOZGRBDWCAWGYEGUAFRKRFEFBRFPWYXDXYXGLSIQUCQIRJNVQTJCJOEGWJWVLIPQXEPONJLIOBKMSPHLBHZTJGVYOFWMVCGTFVIDVLAMMOZRKPWYNXCQRRAWYRFLUKJEXVNUDZOTZCABCPNTNVZJLIUTBZYISNE");
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
    msg.setTimeStamp(0.0154475317335);
    msg.setSource(10336U);
    msg.setSourceEntity(52U);
    msg.setDestination(55321U);
    msg.setDestinationEntity(127U);
    msg.op = 197U;
    msg.file.assign("FCYCTFEREBLSOLXHXXQWMNKHPFCVZALIVMRHJDGWQPOBYYWTXKWSQRCKGHUZMDOGSAINNFGX");

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
    msg.setTimeStamp(0.0943680374239);
    msg.setSource(20828U);
    msg.setSourceEntity(64U);
    msg.setDestination(3920U);
    msg.setDestinationEntity(60U);
    msg.op = 191U;
    msg.file.assign("OGQNWJNDJVIEKZZMZEHPQDJU");

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
    msg.setTimeStamp(0.841596018175);
    msg.setSource(51899U);
    msg.setSourceEntity(201U);
    msg.setDestination(32218U);
    msg.setDestinationEntity(70U);
    msg.op = 123U;
    msg.file.assign("CAXRNVFJMTHSCBQYRHGHCSG");

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
    msg.setTimeStamp(0.404381156181);
    msg.setSource(23772U);
    msg.setSourceEntity(226U);
    msg.setDestination(47061U);
    msg.setDestinationEntity(130U);
    msg.op = 87U;
    msg.clock = 0.405275555424;
    msg.tz = -75;

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
    msg.setTimeStamp(0.968803841075);
    msg.setSource(23600U);
    msg.setSourceEntity(1U);
    msg.setDestination(21388U);
    msg.setDestinationEntity(56U);
    msg.op = 180U;
    msg.clock = 0.312700859894;
    msg.tz = -75;

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
    msg.setTimeStamp(0.536288315835);
    msg.setSource(11659U);
    msg.setSourceEntity(54U);
    msg.setDestination(54744U);
    msg.setDestinationEntity(99U);
    msg.op = 22U;
    msg.clock = 0.847694784358;
    msg.tz = 9;

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
    msg.setTimeStamp(0.00963667394678);
    msg.setSource(23870U);
    msg.setSourceEntity(83U);
    msg.setDestination(20692U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.84887975113);
    msg.setSource(4699U);
    msg.setSourceEntity(217U);
    msg.setDestination(12152U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.392907839801);
    msg.setSource(5713U);
    msg.setSourceEntity(216U);
    msg.setDestination(44327U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.367180675546);
    msg.setSource(45502U);
    msg.setSourceEntity(245U);
    msg.setDestination(32825U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("PZWAGEGDXICXRVIOHZBDYVZFKACWAMOQRMQHVFGVSEKBDCEMIPEXGYTBLTLOZVEFSBFSJEMHWBNYUMWWBTZSKYHOXZSRJHKGDDAVFOUJSNNIJLFVLNXGOUNKLRLHUMNGITSCEBGVZCPJQXPCQBYYNFILWQCKCXRBEDOQCDMUDAKQORTPKJOGFGPZQYYLA");
    msg.sys_type = 200U;
    msg.owner = 16548U;
    msg.lat = 0.637454519223;
    msg.lon = 0.861698591017;
    msg.height = 0.584341043655;
    msg.services.assign("KDLQPJHDEIAJAEKVPANBBFCSKIKCPIUVLXRKDAZQQBDRMOIHJBIV");

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
    msg.setTimeStamp(0.469257306861);
    msg.setSource(4946U);
    msg.setSourceEntity(218U);
    msg.setDestination(18668U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("YULYIAOPSDZBHMPHEKENXWUKGEWAYSXRAOQVIMPWKVALMQZCUHTGBVKCYGTWRKCDEMSIOQIDOEDCVXYJBBLLKNJITFTBDHZTYHZVNFKIAMZSIPWGEQFTPVPPYICYTRSCSGGAMLLWFSTXBHCUUORQAAXQKJICHEUNRWXBILJKRCDLSYNKJRLQSUWEJUBFMGMNPHZVGTFJPPVTZXNXONDFZRUDOGQDJVHUHVBARWMQCFSQOZONEFRJWDFAMBJ");
    msg.sys_type = 206U;
    msg.owner = 49037U;
    msg.lat = 0.928887724305;
    msg.lon = 0.904630828075;
    msg.height = 0.16270465541;
    msg.services.assign("OROWSXHIDSBMFPNFWLDYERTVGVBSUALBNRTFBMXVIROQKPUBAAAWJXENPBLKDQZJMAEYVTJGQKGMDABUHAPIVFJZHHFHGYUSGNHFDLDRCROZAAWNOFHHTRVU");

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
    msg.setTimeStamp(0.873207052335);
    msg.setSource(34849U);
    msg.setSourceEntity(94U);
    msg.setDestination(2001U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("IBRJPETMVLSYJRBTCOWNWACDOGNCZWZVJINJLBFVPIXKXNMSZKKYPSDAUHAMEPPQVYGEOVEZZCPGVWBBNUEAHKBGOFLRQHHGXMSZHJYRYOIRFKQYTEXDMJBGBCHNXWWYDSIIKNACYHPFODDTQKLMXTJWISUIBOUAIWERTQGQVLMUVZULXQDCTOODQUCTATXEGTHASCRLKRRJKCVMPDZFZY");
    msg.sys_type = 79U;
    msg.owner = 42406U;
    msg.lat = 0.248381268485;
    msg.lon = 0.308872977176;
    msg.height = 0.812940729933;
    msg.services.assign("JDFUFAZZEEPAISYPPTMNDEMTQXFRGMMOBFBKWDQRSNKNLSBHAZZXIDMTZWUQQHTXTXKLBDAGXHUOWZAWUVPSYLZQKNHMNSGIHKEFHAVDCKQMLUSHTRQYUKGWVSARBDYVCZAECIFHXIFXQLJIRETXGVWQFRHUUGKJILJNSFLGWCJPPOJENICRDCYGNUOPYAEIJRIKLOBNAKLRCZXNYSCWTCOBOEPVPVO");

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
    msg.setTimeStamp(0.301529642433);
    msg.setSource(41717U);
    msg.setSourceEntity(149U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(64U);
    msg.service.assign("MSWFFTBLTEWUGIUAETRWTOHUCXYJCEETEAIBBCJFLHKPAUZZEPPRUFDUIGFSYXRNXANQSLPVVIIZSRQCQZKGFWQQQAODAUYGGXOIUMMIXETGYRHMVIYEAPCGVTQYKELMXBYSJYFABNXWZCVRCWPHZXDWTSPOOSHJWDNOVPKODVMNMTBDUDYNPJKMGAKJNIHOOZNJJRHFZKRTHNLLCDBBILLRSVSMWBDXAGZQQPRYKWCHXZLFUQEMO");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.166525321339);
    msg.setSource(29483U);
    msg.setSourceEntity(28U);
    msg.setDestination(28340U);
    msg.setDestinationEntity(169U);
    msg.service.assign("PZYVMCZQISHAOXYKYWRWGVLMJNUMHTJHPXGZMKXPZSPLURDVGEBTDSERZDNQCVXQGLDV");
    msg.service_type = 212U;

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
    msg.setTimeStamp(0.336301911431);
    msg.setSource(47054U);
    msg.setSourceEntity(154U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(172U);
    msg.service.assign("RFMUWSBSWTXBZIHIKFCGCIPCPYEXNIKSCBMOXHNGYYIYISFIMPOICVBAVRASNOKJLJLJJJPLZTDHCCFGMAMAKLXTDBMGAOURUTRGVHHTUXUUSDULQLJPVIOKDVQXHPMCNRLSBTDEWDZUQPKEGBSVGTQONLHOKBZ");
    msg.service_type = 79U;

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
    msg.setTimeStamp(0.677226768242);
    msg.setSource(18626U);
    msg.setSourceEntity(185U);
    msg.setDestination(21686U);
    msg.setDestinationEntity(102U);
    msg.value = 0.602489549036;

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
    msg.setTimeStamp(0.856212331405);
    msg.setSource(46887U);
    msg.setSourceEntity(123U);
    msg.setDestination(5681U);
    msg.setDestinationEntity(224U);
    msg.value = 0.399659611661;

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
    msg.setTimeStamp(0.566226402976);
    msg.setSource(64083U);
    msg.setSourceEntity(205U);
    msg.setDestination(10561U);
    msg.setDestinationEntity(73U);
    msg.value = 0.779102351147;

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
    msg.setTimeStamp(0.979340018186);
    msg.setSource(45869U);
    msg.setSourceEntity(32U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(67U);
    msg.value = 0.735461580578;

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
    msg.setTimeStamp(0.889821823304);
    msg.setSource(27422U);
    msg.setSourceEntity(30U);
    msg.setDestination(52527U);
    msg.setDestinationEntity(186U);
    msg.value = 0.15194147291;

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
    msg.setTimeStamp(0.0270483888969);
    msg.setSource(39717U);
    msg.setSourceEntity(79U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(141U);
    msg.value = 0.412923457555;

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
    msg.setTimeStamp(0.310619265718);
    msg.setSource(64048U);
    msg.setSourceEntity(11U);
    msg.setDestination(6205U);
    msg.setDestinationEntity(144U);
    msg.value = 0.58535417375;

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
    msg.setTimeStamp(0.679345771757);
    msg.setSource(11754U);
    msg.setSourceEntity(195U);
    msg.setDestination(43577U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0762295954438;

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
    msg.setTimeStamp(0.717356341325);
    msg.setSource(51801U);
    msg.setSourceEntity(50U);
    msg.setDestination(15757U);
    msg.setDestinationEntity(12U);
    msg.value = 0.254309466877;

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
    msg.setTimeStamp(0.339233788468);
    msg.setSource(62004U);
    msg.setSourceEntity(31U);
    msg.setDestination(56703U);
    msg.setDestinationEntity(251U);
    msg.number.assign("MATLFYILRTMJLYKKOCNXLWWPKEBVNUIWTAMXCRUPOMAHPESJMOOJPVYDALDFRUNNDKIFEGJRZBJCJJGFVFMVFQMUTZZMHRILVKTTXYVGXTZLNPYOJBJZSWLACXYQXQUHSSABDODFRISMQPGQHKEEAZSCFQCWQUPSOBDYNNZPDZ");
    msg.timeout = 6852U;
    msg.contents.assign("XNRASZDVLYJSZPFWRDXGCFNDRAAZCRMLMVDYDUYRJCLSBGESTQCUPNBJCHTLWNUWITJBXKNIIJOKJQLQSVBWQIBMKTIAQKNFXZLFVZGTIQXLYTVZXAU");

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
    msg.setTimeStamp(0.959251195759);
    msg.setSource(20680U);
    msg.setSourceEntity(126U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(254U);
    msg.number.assign("MMOWRFBGHEYIISGAXRGNXQQWIDVRBUOMDWHLLYXMLJVMKLCDJEIJTQREBSRPJHDDQXAAXZASUQGZDVWGMWTNXUXQNVJILEICAYAUSLDPBIECVMTYCUWVOHKKKUAPXTPPJTUTKZNNGWMLESZYZOHFSCTATLUMBRLCCACHBNZCFKJBKVOBNSEHZHNKHFYFRWWRWGELJPPZGIQXVPBDFGTDPNOQSMNFDOFUHRO");
    msg.timeout = 49285U;
    msg.contents.assign("FPOLTVASLXIUUKFEOQFNDLGUPDWCEMHNBXVRRFQLVQGILVBAUZRWCINCFACANQMLSWOUXRESSIPHYEMVMNBHXTBMNHGGPHZSOAVWKYFSVPGJTHTIFKGFSHUTMQDKBFJEKIKDLGUMFRZUPJOUJPEOQDHRANBYLXEDNORVPNKKDSZYGXDXMJBXBZABPCIIJQJWCYTVOCQEICHSEWOYQOYDGAZRYKRW");

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
    msg.setTimeStamp(0.848284010321);
    msg.setSource(14317U);
    msg.setSourceEntity(37U);
    msg.setDestination(33447U);
    msg.setDestinationEntity(159U);
    msg.number.assign("DCOVHHNNBIABDONFKYULBRTIZUVZIXZBFCVSFOLYEUJAKAMHIBXFGXPYGWVJPZCSNBUCADCLPUTUXWFSCRNIBOCTQQFSRPXHXLGQKAWCWWBXMSZQRJWVQPS");
    msg.timeout = 39652U;
    msg.contents.assign("JHPUEMEUYCJQDDJWVQWJMQOIFPVWTEFOJTVHZJOWTBQVRBSRKAFEMITKDUSITVRTBUNCHFXQGDZREDQRIZTBLMSBTOKQYHRPNBXXHSDBAFLYCYIIEECXUOZKGTXN");

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
    msg.setTimeStamp(0.914668364662);
    msg.setSource(25161U);
    msg.setSourceEntity(47U);
    msg.setDestination(17450U);
    msg.setDestinationEntity(139U);
    msg.seq = 1838704809U;
    msg.destination.assign("OELPXXKNQIOZWLJETFMXAHDYDWMHZMSQNCUUHCWWTCWSJGEGMJAWBQNIFHUEFDAIPXSINUGOHSQKLUBWRXBYGRLYTHGPPSIZSHSUGXLRXNAQVEOCBKBBZE");
    msg.timeout = 41722U;
    const char tmp_msg_0[] = {-4, -16, 106, 48, -3, 43, 27, -19, 85, -72, -114, 34, 1, -117, -79, 20, -76, 83, -91, -28, -119, -88, 86, -113, 97, -95, -5, -14, 55, -10, 89, -98, -89, -56, -96, -99, 118, 34, 82, -65, -44, -107, 68, -50, 122, 123, -1, -89, -2, 7, -63, -115, -59, 125, -49, 56, 87, -107, 85, 115, 36, -53, -107, -21, -4, -113, 14, 2, -3, 37, 110, -28, -90, -94, -47, 80, 114, -13, 87, 93, 35, -17, -3, 36, -109, -20, -67, 99, 48, -32, 37, -44, 64, 74, -1, 119, 37, -42, -91, 121, -91, 30, 74, -87, -38, -86, -14, 92, -98, 39, -45, 63, 59, -98, 39, -4, 119, -9, 23, 36, 20, 117, 33, -126, 37, 17, 5, -97, -17, -52, 118, 77};
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
    msg.setTimeStamp(0.234305023997);
    msg.setSource(38879U);
    msg.setSourceEntity(88U);
    msg.setDestination(14302U);
    msg.setDestinationEntity(1U);
    msg.seq = 992003543U;
    msg.destination.assign("KWUMMURASSROIQSKFZUTXCSSBDMKMIULWMZUPNJQZBPFDFRURYWGOQHJVWZZIRBCSYDCGYHUOLTCXGNLRGEIPXEFFMDIXIRKSACYJQDXTWTTXNFBLVMZOPCXHDNOPGISCWAUHXAOBZKODHGHMVZQQVBKJQENPGBJKPLPMEEGGPYZOVJWRAHUWNVTYLFEYVKCHVYLMHOCN");
    msg.timeout = 51140U;
    const char tmp_msg_0[] = {36, 75, 96, 32, 20, 26, -22, -81, 88, 8, 83, 60, 109, -116, 103, -15, 46, -71, -110, -127, -116, -123, 12, -71, 35, 121, -20, 44, -100, -96, 3, -6, -103, -94, 59, -61, 109, 20, 116, -17, -114, -48, -75, 38, 91, 106, -4, -58, 88, -100, -124, 106, -42, -86, -79, -86, 28, -8, -14, -89, -32, 41, 87, 0, 38, 65, -43, -18, -84, -22, 40, 6, -63, -85, 56, 66, -107, 69, 98, 74, -109, 108, 59, 24, -56, 6, -8, 20, -9, -54, -58, 123, 47, -128, -62, -74, -53, 11, 99, -66, -125, 106, 41, 1, -5, -64, -14, 37, 112, -91, -45, 7, -112, -38, 44, -87, -27, 0, -11, 88, -85, -42, -40, 119, 57, -77, 55, 111, 21, -94, 102, 93, 89, 55, -46, -117, 65, -72, -30, 126, -122, -56, -98, 125, -72, 74, -72, 122, -114, -100, -93, 46, -111, 17, -89, 66, -108, 107, -54, 100, 112, 108, -72, 116, 19, 122, -33, -92, 104, -117, 25, -41, 121, 106, 20, -127, 1, 5, 16, 44, -98, 45, 41, 71, -20, 119, 55, 59, 4, -38, -113, 94, -89, 4, 120, -82, -103, 85, 83, 112, -127, 50, -69, -82, -58, 92, -15, 25, -95, 103, 112, -54, -19, -22, 17, 101, -43, -88, -116, -14, -87, 66, -13, -35, 77, 9, -110, 10, 48, 98, 9, 18, 82, -95, 25, 68, -27, -17, -15, -25, -90, 11};
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
    msg.setTimeStamp(0.106136220173);
    msg.setSource(55845U);
    msg.setSourceEntity(251U);
    msg.setDestination(6996U);
    msg.setDestinationEntity(64U);
    msg.seq = 613650180U;
    msg.destination.assign("TDNYXCFIDUDUSGSIHDYETVVMKSGFRUNJFVOERPARSHMPLJLXHDZGKISQAIOIYQPMHTSRFPUPNPSVEQGZMWZSFTOZVETQQECONXHXCZKRYNXIVKVWUDDGAGQGWEAXUTGZAYAROOQIBOJUBMWNKFEWWFZVIJKXJCPKTYGJOLTDLNSLHAXICCOZPAHWJYTKRVIWBALPMMFWFLQRLKXDJBHQDBYLBUCEPNNRLV");
    msg.timeout = 30327U;
    const char tmp_msg_0[] = {90, 9, -23, 64, -86, 18, 68, -72, -16, -47, 41, 28, 27, -54, -59, 107, -52, -37, -37, 0, 113, -85, 63, 39, 106, 89, 83, 39, 91, 50, 112, 44, 82, -77, -41, 77, 107, -119, 36, -80, -8, 36, -62, -91, -54, -65, 62, -46, 66, -112, 26, 95, 39, 123, 118, -128, -1, 85, 100, -19, 94, 39, -101, 56, -97, -95, -35, -116, -48, -12, 114, -123, 54, -123, 60, -68, 123, 14, 54, 95};
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
    msg.setTimeStamp(0.846807421406);
    msg.setSource(31454U);
    msg.setSourceEntity(161U);
    msg.setDestination(52497U);
    msg.setDestinationEntity(181U);
    msg.source.assign("EAXRDKZVUUGPAGBWGWLQYBFMGXXFQTSIVZMLFAAKGUPBZDNRAYQBLPHCIUGIQJSRBGCSVYF");
    const char tmp_msg_0[] = {52, 57, -3, 125, 18, -88, -120, -97, 117, -84, -38, -67, 32, -75, 11, -81, -93, -14, -120, 79, 93, 0, -71, -13, -94, -92, -8, 49, -84, 108, -27, 7, -42, 96, 115, -16, 92, -128, -123, 78, 72, 58, 22, -118, 14, 66, 8, -54, -17, -20, -17, 10, 22, -123, 68, -102, 73, 68, 68, 117, -101, 82, 62, -125, 123, 62, 72, 71, 107, 6, -126, -70, 77, 32, -36, 84, 51, 54, -127, 119, 60, 0, 124, 116, 94, -11, 5, -49, 25, 71, -117, -30, 98, -17, 77, 46, 73, -117, 52, 71, 4, -35, 9, -119, -87, -126, 110, -119, -31, 67, -112, -112, -88, -46, 0, -80, 120, 9, 36, 67, -4, -88, 67, 119, 99, 76, 36, -95, 123, 63, 57, 71, 10, -82, -48, -88, -60, 19, 100, 58, -24, -12, 98, 103, -117, -112, 91, 5, -53, -22, -97, 9, 88, -104, -37, -7, 76, -65, 91, 63, -13, 0, 53, 116, -109, -60, -11, 89, -115, -118, 12, 101, -74, -39, 119, -52, -22, -15, -12, -110, 34, 47, -106, 33, -32, -22, 61, 105, 61, -65, 31, -52, 16, 43, -94, -80, -46, -53, -54, -74, 123, -105, 123, -66, -125, -45, 92, -10, -62, 52, -98, -33, -46, 22, -108, 121, -56, -18, 23, -51, -33, 99, -57, -113, 50, 64, -109};
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
    msg.setTimeStamp(0.0989110013684);
    msg.setSource(8604U);
    msg.setSourceEntity(53U);
    msg.setDestination(1466U);
    msg.setDestinationEntity(111U);
    msg.source.assign("QHOPEDYUFECCBCNJIOXUJIXJBNDIRMVFMVGVVFWCKIGIDAXDZORCJIZDTUTEEBUQWRKIWOMQKLODNESEKDXJYBZWAUSLXDHCTRYQGAVLCFAPWOTHMFCDEVQYMUASPBHBFLJWKMXPSQFHCOLBOZZYFUZTMGTWRQQBIZXVRNYXHAGAFPGGEKYRKJQHKWLSQPZVULPJSUNRSMITRGNXYNGKWCMDHJTANSHWRVO");
    const char tmp_msg_0[] = {-60, -3, -94, -39, 76, -15, 45, -42, 1, 1, 91, 90, 115, -72, 52, 116, 27, 62, -71, -28, -73, 26, 0, -50, -111, -77, -55, -104, -77, 51, -46, -50, 107, 78, 21, 114, -10, -87, -3, 54, 2, 46, 57, 105, -104, 4, -97, 26, -15, -76, -82, -20, 81, 54, -41, -110, -62, 13, -75, 14, -49, -52, 4, -117, 11, -52, 96, 116, -23, 86, 49, -110, 37, -6, -65, 66, -54, 29, -72, -124, -24, 109, -110, 75, -93, -69, -34, 70, -18, -65, 126, 120, -114, 77, -22, 69, 80, -54, -25, -62, -4, 72, 73, -77, -122, 86, 9, 56, 62, -16, 88, 113, 12, 29, 95, -111, -55, 59, 65, 113, -42, -116, -22, -62, -59, -68, -42, -94, 42, -111, -44, 126, 64, 25, 90, 84, 77, -120, -101, 41, 74, 114, -85, 5, -127, 99, 83, 103, -48, 10, -108, -84, 120, -98, -36, -26, -5, 99, -104, 122, -24, 121, -97, -52, 113, 22, -100, -4, -30, -20, 125, -19, 20, 120, -90, 115, -58, 24, -59, -44, -49, -117, -110, 46, -123, -69, 52, -46, 107, 22, -84, 60, 99, -92, 29, -28, -86, -41, -44, 24, 98, -126, -63, 67, 49, 103, -31, 78, -77, 44, -102, 120, -87};
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
    msg.setTimeStamp(0.860593036329);
    msg.setSource(20966U);
    msg.setSourceEntity(113U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(121U);
    msg.source.assign("KMANHVZNHVXFZZVWJSNOXHLAPCEPC");
    const char tmp_msg_0[] = {-34, 123, -121, -38, -64, 95, -67, -126, 116, -113, 14, -91, 100, 37, 61, -36, -30, -1, 40, -8, 117, -87, -92, 43, -101, 119, -48, -116, 86, -7, 9, 40, -80, 67, 79, 75, -88, 66, 101, 76, -19, 62, 117, 77, 45, 90, 3, 0, 39, 51, 1, -106, -8, -34, 62, -58, 8, 99, 63, 54, -108, 98, -74, 95, 63, -124, 7, 60, -4, 0, -52, 56, 70, 66, -124, 113, 74, 106, -34, -72, 10, -16, -80, 17, -45, 28, -128, 1, 1, -69, -96, 68, -78, -20, 50, 75, 24, -100, 46, -107, -32, -69, 35, 73, -123, 49, -109, -94, 115, 95, 55, 99, -118, 91, 103, -19, 68, -20, -103, -102, -123, -58, 78, -75, 36, -19, -77, 29, -76, -106, -21, -72, -3, 55, 19, 1, -116, -5, -82, 125, 92, -29, 39, 108, 95, -85, 67, 38, -122, 82, -21, 25, 33, -43, 50, 47, -128, 50, 65, 21, 47, 59, -55, -114, -92, 32, 103, -100, -107, 98, 23, 9, -16, -60, 45, -15, 2, -98, 42, 22, 109, -25, 113, -30, -120, 18};
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
    msg.setTimeStamp(0.921029421592);
    msg.setSource(37433U);
    msg.setSourceEntity(7U);
    msg.setDestination(47028U);
    msg.setDestinationEntity(213U);
    msg.seq = 4234701697U;
    msg.state = 105U;
    msg.error.assign("YXHUJHKAJPOBTDGUZOTTOWTEUNELGFXORDRYQKINDFANEKPNNRJPWXMZWBOMBDLBUEBZFKBCLGRAQVJYRPDWCPLIFSZLHGIXIBMCRYIYPNIUJBHGXCHEXIVQPZTSTNCQXFXMVUYJLYRQPVHAKIVKMFDDJVYAWKHCNFACRVEOECZPMLKGAALIW");

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
    msg.setTimeStamp(0.0621018482515);
    msg.setSource(1787U);
    msg.setSourceEntity(129U);
    msg.setDestination(55242U);
    msg.setDestinationEntity(20U);
    msg.seq = 452844997U;
    msg.state = 8U;
    msg.error.assign("HRBCCGGMTRHVGUXGBUPTSPTTCAIHXURVCVPXCDTLFNSMLKENPDUEZKYOYYUGSOGKHQNTIOVVMTNUEMBPFFELLMSORBBZWLMAXOAYAHCIZLQVKZVMKJEDWABOKDJCGQGNVZRKYJSDXTWOVDHTHYBXSOMZYQZKJOFOSNEIWFMSQPIWECEDVACRJQHIBJQJLIPAADYWQZIHKWARLUFN");

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
    msg.setTimeStamp(6.02721647831e-05);
    msg.setSource(55687U);
    msg.setSourceEntity(91U);
    msg.setDestination(58266U);
    msg.setDestinationEntity(110U);
    msg.seq = 3483126265U;
    msg.state = 115U;
    msg.error.assign("HMLXNYZALCELLEURTGOQIOIGYIAWQRBBUWZSQIGJZKAVMHXPJTXRGDCDMDXQFGODMYWXZXMSVLOINWVCPLNPHPVPNXRHTEUZBBPAVVVRSUPRFSO");

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
    msg.setTimeStamp(0.483933912979);
    msg.setSource(54097U);
    msg.setSourceEntity(216U);
    msg.setDestination(27976U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("FPLBMITJBECPNJQHNEGWLSYIHWYHPRNJIGYAMGXFUIUSPHVXDNIXRNJEOAQDHJWBPUFUTVMWZRHGAZEVDCDKCSJYOPWBKIMRZVNTCSSLQPZWOZBQAQMFYPBJEKVLMHBHCLPTYWSXENAGFMELDXYZDFESUCNGLOVUZGNXAYFSRLFFJTTRCDTDEQKXNRKOQ");
    msg.text.assign("TPIABDOOXRDSUNWXRLFYHHSGYLVIPEYYJDNBBUQNQTUQLJKIKQRJQDCCWPIBAUMUGACIPSPWSRCPPXQCBJUCAWMOWXGOEFIDLYPLFZHUNMAGSNMIXOSUGDCNZLQITVIJCYALJVZJXOBXYGMFF");

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
    msg.setTimeStamp(0.881055539885);
    msg.setSource(48766U);
    msg.setSourceEntity(218U);
    msg.setDestination(10047U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("BOQDMBUWGXNRXEZN");
    msg.text.assign("DRFRZKGTRQWIASMBPIVRXVEYREEWDETABYILYLKPNGFXMAFXMEZSUZTD");

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
    msg.setTimeStamp(0.227616658037);
    msg.setSource(18070U);
    msg.setSourceEntity(90U);
    msg.setDestination(52089U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("HKFQWZUQIRQVWBHMEYGVJNRVAOWBENAAHCMGUNHMCUBMEPFXEXUSWTZTCYKOQZCZPJBQOKSLESLIVZDXSVCBOHHBEMFSSKYQWQIKGNDNXQTDTFLTGEDGYZJVPORDRJSRNCCFYPLILKMVNHMCTHMDWAXLITXRGAPKGQFROTHAXWTSOXZHDCTRFBKZSEQRWOFAXKVNPGUYYIUZD");
    msg.text.assign("TDEIOERFBOZAODYOZMUQHVATUCBOSXIMDICSKIVFNKHWEIUKQWZNTHTBIDJGUPVRJXNEUBZGIEKTXLJFMUVYRULIAFRWKQ");

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
    msg.setTimeStamp(0.8818337605);
    msg.setSource(19166U);
    msg.setSourceEntity(166U);
    msg.setDestination(38137U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("WAHGPDRCBYYHDTLRYWVQFIXMTAFICAZOLTKHOXJJCSWGWTFIVORXTHBVTAIXOQHIVOLUTQUVJXSBIGHWXNEMCGWCRSSXNPUOOFLOYBDGLVFNHTJVKQLNKULURREVDJQIUTGFBKFEZYCQHPTFRZXWEWAAKCZZJWURMQPZCBSSJM");
    msg.htime = 0.0238994999239;
    msg.lat = 0.906974468813;
    msg.lon = 0.587624216526;
    const char tmp_msg_0[] = {-53, -70, 104, 87, 17, -5, 122, 13, -81, -89, 8, 99, -117, 23, -97, 43, 36, -76, -49, -114, 114, -52, 40, 40, 14, -78, 124, 121, 22, -3, 23, 67, 75, -51, 27, 5, 118, -80, 32, 64, 105, 126, -26, -31, -112, 78, 79, 55, -101, -43, 82, 104, -62, 53, 28, -22, -83, 23, -80, 75, 55, -114, -94, -114, -53, 5, -9, -72, 107, 67, 20, -26, 31, -31, 95, -51, -2, 83, 23, -38, -128, 34, -33, -22, 116, 95, -34, 64, -54, -59, -93, -114, 126, 6, -35, 74, 73, -43, -92, 69, -117, -95, -47, 103, 47, 66, 43, 17, 115, -96, -16, -77, 85, -11, 31, 41, 0, -16, -51, 3, 121, -102, -7, -68, 107, -122, -120, 4, 44, 13, 65, -118, 47, -18, 115, -33, 73, -90, 123, -7, -73, 25, 75, 92, -44, -122, -113, -24, 67, -9, 54, 2, 21, -16, 67, -38, 122, 123, -61, 66, -115, 112, -105, -7, -6, -45, -56, -12, -125, -11, -43, -29, -116, -43, -40, -47, -110, -10, 32, -73, -79, 41, 106, 29, -54, -118, -77, 64, 89, 92, -79, -98, 96, -84, 11, 60, 36, -57, -92, -120, -32, -54, -12, -6, -118, 103, 52, -109, -94, -103, -30, -21, -115, -26, -27};
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
    msg.setTimeStamp(0.626764791058);
    msg.setSource(6522U);
    msg.setSourceEntity(222U);
    msg.setDestination(6414U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("MYJCKFKFDRODCIGFPXIFWELEKQSOJAPMRVDHFAOZIVWMOONAQNYEYKLYKPMBDIWDAAFXXJFNSHNLQGBNBSYXRXZYQOTZWTTCUU");
    msg.htime = 0.295124751826;
    msg.lat = 0.745859131928;
    msg.lon = 0.520035680405;
    const char tmp_msg_0[] = {-75, -126, -18, 63, 109, -95, -61, 30, 51, 47, 113, -21, -127, -6, 20, -77, 32, -15, -64, 64, -104, -101, -96, -47, 62, 80, -73, 28, 83, 5, -107, 89, 37, 94, 78, -5, -128, 60, 72, 53, -56, -96, -3, -104, -61, 90, -56, 105, 10, -42, -16, 23, 26, 53, 124, 119, -100, 36, -79, -26, 29, 41, 41, -99, -80, -73, -3, 44, -60, -122, -107, 65};
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
    msg.setTimeStamp(0.310188258485);
    msg.setSource(27739U);
    msg.setSourceEntity(163U);
    msg.setDestination(31296U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("WQNOIALDRKJKBTZFTIFPQYAUQDIUXVIMSVSFYQKNGTUSOGWZCEGQPORLEYAVGIMVQWDLDHTJMZCKBUGANKXFREXKACJFVESJSPDRUDPGEYNPOSMHHCRTVRTHARQJMDHVMBTWT");
    msg.htime = 0.996187431942;
    msg.lat = 0.947383019405;
    msg.lon = 0.642242640729;
    const char tmp_msg_0[] = {-72, -24, 119, -15, 123, 29, -76, -35, -92, -21, 7, 101, 92, -67, 14, -94, 76, 102, -48, -17, -47, 98, -49, 31, 69, -103, -54, -104, 73, 114, 119, -85, -20, 48, -96, -38, 45, 50, -2, -56, 20, -101, 92, 53, -36, -93, 50, 57, 96, 97, 84, -112, 104, 0, -6, 111, -68, 116, 43, -19, -97, 59, 74, -92, -10, 57, 79, 17, 22, 23, -60, -96, -97, -1, 50, 118, 44, 7, 53, -114, -77, 104, 2, 95, 72, -120, -76, -61, 27, 116, -89, 5, 108, -125, -34, 71, -73, -5, 67, -83, -77, -17, 98, 30, -103, 35, -114, 123, 5, -128, 72, -102, 37, 50, -8, 61, 75, 110, -39, -22, -40, 46, 122, 83, 27, 47, -91, 21, 124, 92, 97, -107, -26, -36, 109, 78, 125, 10, 2, 92, 59, -2, -19, -64, -24, 104, 27, 65, -53, -125, 107, -41, 110, 71, 65, 81, -59, 69, -95, 114, 59, -101, 35, 37, 115, -113, 24, -52, -58, -81, -107, 109, -122, -117, -31, 99, 103, -110, -118, -58, 5, -120, 89, 11, -73, 12};
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
    msg.setTimeStamp(0.610413657273);
    msg.setSource(34283U);
    msg.setSourceEntity(205U);
    msg.setDestination(28769U);
    msg.setDestinationEntity(53U);
    msg.req_id = 30163U;
    msg.ttl = 8174U;
    msg.destination.assign("HGINAYTUVLRLCHCHRXSVHDSLKBJABCXKUKARXYXWPLAOTBHYSQGPOTQYOKWQAJPWKKNDNCLGECWTFSGJMFIDELZPREEEIOTZJGDZNFSGXOWRFFGSGBZJIMZYKCVXPTIFXZMZBDOWUSLUSOWQ");
    const char tmp_msg_0[] = {55, 95, 20, 93, -23, 101, -120, 4, 35, 31, -113, 107, -4, -83, 64, -43, -23, 46, 86, -75, 0, 83, -14, -11, 6, -60, -72, -17, 5, 8, 67, 31, -27, 64, 72, -97, -95, -113, -63, -32, 2, 50, -31, 89, -83, -7, 33, 44, 51, -41, 112, 57, -77, 104, 3, 61, -107, -23, -73, -106, 103, -29, -56, 106, 35, -71, 10, -1, -29, -126, -120, -57, 88, 93, 35, -48, -57, 15, -46, 115, -120, 42, 5, 8, -43, -123, 108, -17, -67, -58, -127, -25, -7, -100, 72, 78, -2, -28, 24, 74, 38, -37, -75, 118, 54, 76, 63, 117, -1, 69, -54, 125, 94, 88, -91, 55, 96, -11, -31, 88, 31, -24, -50, -73, -85, 51, -12, 34, -16, 60, 56, -124, 45, 83, -65, -28, -83, -85, -107, 115, 20, 105, -23, 56, -119, -48};
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
    msg.setTimeStamp(0.527264968361);
    msg.setSource(61250U);
    msg.setSourceEntity(21U);
    msg.setDestination(27755U);
    msg.setDestinationEntity(181U);
    msg.req_id = 56260U;
    msg.ttl = 63696U;
    msg.destination.assign("ZAJIWPQQBXBSKENDFJTAOSNVFWYLAPZVTVUUGMELNHUEISORLDDEZGQHANROLKVOPJNCLIXTDDMRDKCKXEYJCXZOBTLABDOOFFMEDMIHUYPJYKSWHWXTWKRYXHNNTPTOSMQSSPLEDQCJZESIHANRYBARQCIPPYRWQSZPBHGBMLVXWDWCOCFFLVJZANVGZHXGCOGGRFHYIEGRUKLQTCIIGZKJUYVFBFBZKAXRNKFCXUSJ");
    const char tmp_msg_0[] = {-105, -6, 14, 97, -96, 87, 105, -58, -9, -57, 20, 19, -55, -105, -101, 89, 66, 54, 21, -36, 4, 85, 55, -69, -72, 43, 35, 24, -93, 89, -88, -56, -7, -75, -68, 52, -70, 18, 76, -124, -3, -11, -62, 40, 34, -65, 10, 17, 63, 95, 38, -32, 60, 61, -3, -29, 46, 109, -110, 20, 35, -28, -99, 3, -64, -114, -113, 120, 90, 111, 31, 89, 109, 60, 44, -34, 35, -122, 70, -38, -24, -22, 90, 72, -60, -112, -63, -26, -81, 92, 36, -99, 79, 25, 28, -103, -71, -69, 33, -58, -21, 71, -100, -33, -19, -54, -115, 70, -25, -36, 107, -69, -75, 14, -53, -103, 28, -71, -99, -51, -58, 21, 68, 99, -66, -43, 3, -102, 52, 2, 59, -10, -116, 80, -9, -60, -37, 125, 43, -43, 90, 54, 86, -117, -22, -70, 114, -116, -67, 60, 87, 5, -84, -22, -2, -99, 38, -121, 60, -8, -128, 2, -80, -46, 60, -18, -46, -12, 5};
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
    msg.setTimeStamp(0.24513577931);
    msg.setSource(2169U);
    msg.setSourceEntity(51U);
    msg.setDestination(45404U);
    msg.setDestinationEntity(177U);
    msg.req_id = 31705U;
    msg.ttl = 51156U;
    msg.destination.assign("MQKMBCEHOYWWPUMZEQZXZBPJESBDLKNIKHFBLFZHKS");
    const char tmp_msg_0[] = {-50, -44, 96, 98, 6, 110, -37, -71, -102, -37, 55, 97, -8, 125, 74, 79, -77, 92, 22, 69, -3, -86, 21, 25, 5, 77, -113, 103, -63, 52, 49, -12, -115, -9, -99, 73, 81, -12, -87, -51, -62, -52, -107, 52, -46, 99, -65, -102, -8, -59, -111, 1, 84, -38, 8, 87, -59, 70, -95, 88, 10, -83, 44, 17, -25, 107, 29, 64, -111, -117, -14, -103, -59, -123, -82, -95, -29, 120, 34, -29, 80, -21, -110, -48, -94, -56, -9, -48, 101, -5, 115, -110, 81, -45, 89, 56, -32, 35, -35, -61, -97, 67, 65, 53, -95, 63, -8, -70, -44, 21, 10};
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
    msg.setTimeStamp(0.832549292602);
    msg.setSource(42664U);
    msg.setSourceEntity(115U);
    msg.setDestination(29251U);
    msg.setDestinationEntity(61U);
    msg.req_id = 46807U;
    msg.status = 104U;
    msg.text.assign("ETEIYUSMHGAPVJOSTUXBIWPMTTJDQGCDYPGSFILTKAJEZOZFYLXWPCZXNIRDEAJHSVWQSRLKCXHQSJQLQBLOEPZCNWNSACVTDWIOGUUCJXYGEIRPYJZNGIQEERFGMDKCMYBNRTSBFHQHAAUMDUOPPNMLMZYFKPORZIVSMLNGMSWDKBZLLOTXXREIYGVVWKUHVUHUBAXDDQBJXAORNHOWJATCHBPCYFZKKVOQFELNXGVDAZ");

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
    msg.setTimeStamp(0.0436262011941);
    msg.setSource(62598U);
    msg.setSourceEntity(120U);
    msg.setDestination(43083U);
    msg.setDestinationEntity(252U);
    msg.req_id = 37673U;
    msg.status = 6U;
    msg.text.assign("BTRZDQVOEVQBDOOUPYMHNWENOOQDNQUIBHLSAJDGNLAUKQSPCKCGHCHHQDJAGTAVMTFRGWFHYOIYKRKUWONGXQMPIZZXYAIWMSPTYEKTBIOXLIQPBMMMXLJYTYPUERSDSSZZRI");

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
    msg.setTimeStamp(0.364383220922);
    msg.setSource(19309U);
    msg.setSourceEntity(218U);
    msg.setDestination(18712U);
    msg.setDestinationEntity(115U);
    msg.req_id = 59797U;
    msg.status = 159U;
    msg.text.assign("DXBCYZEUSRNRDLEBRXDEQXQCYKNBGHSCDOYUHKTZPFKFOBVVDKYANAQUALTVIXNPNMBCLBVIAJXSYLHRFRVQIWTRUWUTVJHFFWEPBVOJGHMFKMJZNXKGXACJEVLOSMLTIZROTVBFWQPUZLASWMQRPGHMCSGKIWLTCRIQIHGSMBMOWGZCUKKZJDSBLZKFUEIRADGTYYJGHPDJMCEYULHWITNJWPNAPOYYPOXZESDOFQANNHTCVQMXZDJWIGO");

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
    msg.setTimeStamp(0.788785883473);
    msg.setSource(60869U);
    msg.setSourceEntity(79U);
    msg.setDestination(65026U);
    msg.setDestinationEntity(201U);
    msg.group_name.assign("TWUCXUMHJEJAKCYTYRJDVUZTMQIIQPZE");
    msg.links = 1047084631U;

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
    msg.setTimeStamp(0.651630612165);
    msg.setSource(51657U);
    msg.setSourceEntity(112U);
    msg.setDestination(59951U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("VNQIYBHGSOMDIDJUEXZNZKMZUEPJLEDR");
    msg.links = 1440839566U;

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
    msg.setTimeStamp(0.557181151253);
    msg.setSource(31659U);
    msg.setSourceEntity(127U);
    msg.setDestination(18138U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("OGOBMSAYCNYMAFVRDWDIZXOCDQPZBYJRKXKFGEBPQCPPVERUWKWGPTHUNCNZNVVJAXIRUXEYKKJWLTBQWETZBKKFGTMGMPNDTIDKQVLNSOELHSCAQFNSAVGRCGADJBRUXDMVHJEUCIXLYWEYGBYPTPZLVTZMQQIHOOOKFXBYQQHBHEBRUZXZJOG");
    msg.links = 3919138626U;

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
    msg.setTimeStamp(0.552482814279);
    msg.setSource(62127U);
    msg.setSourceEntity(84U);
    msg.setDestination(27096U);
    msg.setDestinationEntity(139U);
    msg.groupname.assign("YHUCRWZKALLIFEQFJGKAUCBTQCKVSLJSOMPNTUEBWPVCMISJLMMIGVPRHOUELGRUKJITIZKGQJTBDIAPOIDESFWOTAWZFKUFUZBXEBPUVRVYBATXMEOFQRLDYKZLCYMQLDDADHIOVXAMNKGIOYOXTABERHMJNXLWNRFBBJSCRSFOWESMXGVUQEXYHTDLHCPNKNWTZHNVEFZTQFJZVXSGGDUQNGMVSAZ");
    msg.action = 121U;
    msg.grouplist.assign("IZTBAGUQBRSAOOEPLMGNVCZMFGECKWXFPMQOXJHXVVMJCWGVLFJCGNFUIBANXHUJDLITZLSEDMRRHKPYNDYBPLBHITERSWGXBAISPXJCTLNKQFOYBEOCCHTATBZKBKHYDCLPQXLIDWIKLMNAPXSMVJHSFHIRURUQWZETWEJICVOQGSQNFUUUDYPZSEKOETYGDW");

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
    msg.setTimeStamp(0.139897821047);
    msg.setSource(15756U);
    msg.setSourceEntity(173U);
    msg.setDestination(53891U);
    msg.setDestinationEntity(208U);
    msg.groupname.assign("ZKWBVURTJXYSBJLJQIKCQEBJJM");
    msg.action = 164U;
    msg.grouplist.assign("LYLQYJKRLCPZXIVYZOXKOFTOFVSNQMRRECHBEAOCCVGVYJWAWGLNAXUMDGDIFETGTAMXVMUUCWSIJLFAZHJSBLWPGJUUIUUNNEQROSZGEBBARKNHTCZDHHJPGPVDOSLESIXEDMGZIATFLSCBMITQBRINHXJWDWFPFSBSHMJTHELCVYQBPZVCRUAXWVCODMQRZFKKGOGWBXRMFUENKPYLYWXNNWDKIHMQBNHOXFPTTKYQYTEQVUDROZQAP");

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
    msg.setTimeStamp(0.179720411519);
    msg.setSource(53275U);
    msg.setSourceEntity(116U);
    msg.setDestination(1500U);
    msg.setDestinationEntity(132U);
    msg.groupname.assign("DLYJPDYVIRCQEDQYNQCORLKLVGQDSKTLTKSRCADXAXMHBKRLUFXEOEHZBDENPBFNUDOWCSKBEHJRMQJAAVLQOYCZIXUVNRXNYTZSQNLYWWIFHZA");
    msg.action = 234U;
    msg.grouplist.assign("CUPZXEWJAOILD");

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
    msg.setTimeStamp(0.971141582557);
    msg.setSource(42980U);
    msg.setSourceEntity(37U);
    msg.setDestination(48588U);
    msg.setDestinationEntity(93U);
    msg.value = 0.989069375006;
    msg.sys_src = 22775U;

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
    msg.setTimeStamp(0.130179664381);
    msg.setSource(55977U);
    msg.setSourceEntity(225U);
    msg.setDestination(8498U);
    msg.setDestinationEntity(15U);
    msg.value = 0.701687431827;
    msg.sys_src = 22004U;

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
    msg.setTimeStamp(0.0442662459208);
    msg.setSource(15420U);
    msg.setSourceEntity(126U);
    msg.setDestination(43117U);
    msg.setDestinationEntity(110U);
    msg.value = 0.608927365209;
    msg.sys_src = 58753U;

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
    msg.setTimeStamp(0.0194285333953);
    msg.setSource(5224U);
    msg.setSourceEntity(73U);
    msg.setDestination(45324U);
    msg.setDestinationEntity(106U);
    msg.value = 0.814817532939;
    msg.units = 200U;

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
    msg.setTimeStamp(0.728686559882);
    msg.setSource(48434U);
    msg.setSourceEntity(24U);
    msg.setDestination(14829U);
    msg.setDestinationEntity(69U);
    msg.value = 0.0391594776304;
    msg.units = 72U;

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
    msg.setTimeStamp(0.127362429705);
    msg.setSource(33774U);
    msg.setSourceEntity(226U);
    msg.setDestination(49339U);
    msg.setDestinationEntity(109U);
    msg.value = 0.745009258129;
    msg.units = 43U;

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
    msg.setTimeStamp(0.527187668245);
    msg.setSource(1493U);
    msg.setSourceEntity(34U);
    msg.setDestination(40415U);
    msg.setDestinationEntity(172U);
    msg.base_lat = 0.398492157336;
    msg.base_lon = 0.257670655981;
    msg.base_time = 0.183703101792;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 65209U;
    tmp_msg_0.priority = 39;
    tmp_msg_0.x = 27871;
    tmp_msg_0.y = 19884;
    tmp_msg_0.z = -21901;
    tmp_msg_0.t = 29752;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 97U;
    tmp_tmp_msg_0_0.lon_gain = 0.742593555304;
    tmp_tmp_msg_0_0.lat_gain = 0.221601872981;
    tmp_tmp_msg_0_0.bond_thick = 0.584947816145;
    tmp_tmp_msg_0_0.lead_gain = 0.730001991646;
    tmp_tmp_msg_0_0.deconfl_gain = 0.834406541945;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.661331217866;
    tmp_tmp_msg_0_0.safe_dist = 0.0657033744287;
    tmp_tmp_msg_0_0.deconflict_offset = 0.387351341448;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.884028567351;
    tmp_tmp_msg_0_0.accel_lim_x = 0.274113180465;
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
    msg.setTimeStamp(0.469907204674);
    msg.setSource(53522U);
    msg.setSourceEntity(57U);
    msg.setDestination(32639U);
    msg.setDestinationEntity(244U);
    msg.base_lat = 0.0221428634462;
    msg.base_lon = 0.658924603227;
    msg.base_time = 0.212374634816;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 27626U;
    tmp_msg_0.priority = 101;
    tmp_msg_0.x = 2426;
    tmp_msg_0.y = -22400;
    tmp_msg_0.z = -32314;
    tmp_msg_0.t = 24999;
    IMC::Fluorescein tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0573321768968;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.970868828374);
    msg.setSource(44722U);
    msg.setSourceEntity(224U);
    msg.setDestination(25984U);
    msg.setDestinationEntity(133U);
    msg.base_lat = 0.381029559179;
    msg.base_lon = 0.117080214847;
    msg.base_time = 0.243335261122;

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
    msg.setTimeStamp(0.469880879649);
    msg.setSource(56867U);
    msg.setSourceEntity(44U);
    msg.setDestination(36174U);
    msg.setDestinationEntity(13U);
    msg.base_lat = 0.929785096281;
    msg.base_lon = 0.10084056471;
    msg.base_time = 0.818830923709;
    const char tmp_msg_0[] = {-19, -127, 90, -111, -6, 120, -9, -68, 66, 1, -51, -35, 104, -118, 41, -78, 31, -112, -92, -40, 114, -39, 40, -70, 63, -13, -125, 69, 46, -27, -110, 56, -33, 76, 104, 27, 95, -11, 124, -78, -103, 31, -54, 88, -6, -120, 57, -70, -106, 108, 56, 89};
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
    msg.setTimeStamp(0.438923173032);
    msg.setSource(2040U);
    msg.setSourceEntity(65U);
    msg.setDestination(47209U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.155191166159;
    msg.base_lon = 0.1232909785;
    msg.base_time = 0.417706073994;
    const char tmp_msg_0[] = {-121, 108, -90, -27, -9, -100, 78, -93, 47, 102, 112, 16, -97, 18, -124, -103, -122, -2, -44, -90, 86, -89, -43, 30, -121, 0, -60, -118, -75, 86, -66, 47, -5, -124, -31, -32, -78, -115, -32, 34, -63, 8, 66, -61, 107, 85, 7, 75, -66, -29, -96, -23, -69, -5, 49, -18, -34, 49, 93, 113, 32, -123, 117, -45, -87, 2, -1, -126, -50, 21, 118, -5, -75, -126, -71, -65, 85, -73, -103, -29, 90, -99, 55, 110, -100, 101, 0, 12, -3, -22, -127, -46, -86, 79, 46, 21, 25, 74, -40, 97, -71, -36, -113, -115, -24, -30, 122, 121, 74, 10, 92, -9, -20, -18, 109, -97, 34, -93, 110, 24, 33, 10, 73, 96, -12, 117};
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
    msg.setTimeStamp(0.575542226318);
    msg.setSource(46581U);
    msg.setSourceEntity(253U);
    msg.setDestination(2827U);
    msg.setDestinationEntity(74U);
    msg.base_lat = 0.65401874477;
    msg.base_lon = 0.190727907213;
    msg.base_time = 0.580990764819;
    const char tmp_msg_0[] = {112, -80, -118, -126, -59, 79, -86, 57, -76, -118, 37, 79, -114, -101, 35, -39, 0, -100, 99, 49, -3, 51, -96, -78, -54, -35, -117, -121, 52, -95, -46, 99, 111, 64, -16, -1, -25, 45, -123, 98, -123, -60, -29, 83, 62, -8, 94, -91, 94, -80, -52, -49, 117, 31, 67, 48, 78, 77, -18, 70, -105, 82, -116, 3, 88, 18, 21, 9, 23, 93, -119, -94, 22, 111, 59, -101, -38, -120, -60, -44, -21, 126, 25, -48, 126, -112, -70};
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
    msg.setTimeStamp(0.673821841424);
    msg.setSource(37547U);
    msg.setSourceEntity(2U);
    msg.setDestination(37305U);
    msg.setDestinationEntity(198U);
    msg.sys_id = 34797U;
    msg.priority = 81;
    msg.x = 23356;
    msg.y = -19560;
    msg.z = -14201;
    msg.t = 21320;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2332593278U;
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
    msg.setTimeStamp(0.68672131655);
    msg.setSource(1031U);
    msg.setSourceEntity(184U);
    msg.setDestination(40431U);
    msg.setDestinationEntity(194U);
    msg.sys_id = 6773U;
    msg.priority = -102;
    msg.x = -181;
    msg.y = 24263;
    msg.z = 28649;
    msg.t = -31927;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("PNRLDWPSCOQCUGCVQAOGDTZJVJOUCBYMFYQJWAXGXDWSAOWPXMYCLQYIEFAMTTYKMCHUMFRKVJEWHUNXZCVMBUSFWISUBDLTRFTDPESZNYREIPKOINRKOULKMQZCSWQBZHJZPFZHTPODGAMRJBSBLQXUTHDACAKNLGXQENKIPATNVELDKXOTHFGUAIIUFTSDJWDJLXKCYSPNRMN");
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
    msg.setTimeStamp(0.809574648151);
    msg.setSource(64934U);
    msg.setSourceEntity(210U);
    msg.setDestination(19485U);
    msg.setDestinationEntity(198U);
    msg.sys_id = 53724U;
    msg.priority = 4;
    msg.x = -20952;
    msg.y = 7174;
    msg.z = -32555;
    msg.t = 27138;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3400760134U;
    tmp_msg_0.state = 103U;
    tmp_msg_0.error.assign("EJFURUYSQLBOSQGSLWFEBTDMMCLNTBATLOSWETFXPKUJBFXWKOGKJAHJQNVTQWLFHLDYYRHDVDSXWMNSYCVHFIQZUJMRVQVYGQYMKQFCPRDXAPCSEENBXTPLGIHZIBZXUIIVMQOWRJRXEVYYEXUCZGGNAHBNWSGHRDWZVVFTTHODAXMFBPJNEIJB");
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.14046987028);
    msg.setSource(12653U);
    msg.setSourceEntity(70U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(165U);
    msg.id = 253U;
    msg.range = 0.950343578114;

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
    msg.setTimeStamp(0.00769985302858);
    msg.setSource(27987U);
    msg.setSourceEntity(73U);
    msg.setDestination(48418U);
    msg.setDestinationEntity(122U);
    msg.id = 12U;
    msg.range = 0.8607543966;

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
    msg.setTimeStamp(0.350594941539);
    msg.setSource(7222U);
    msg.setSourceEntity(217U);
    msg.setDestination(34487U);
    msg.setDestinationEntity(39U);
    msg.id = 59U;
    msg.range = 0.773843362172;

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
    msg.setTimeStamp(0.932884598086);
    msg.setSource(52747U);
    msg.setSourceEntity(72U);
    msg.setDestination(19738U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("BEMEWUKFVENCISMZBMAPFTYUSQS");
    msg.lat = 0.513023763999;
    msg.lon = 0.67035621014;
    msg.depth = 0.841242398543;
    msg.query_channel = 146U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 222U;

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
    msg.setTimeStamp(0.178408689669);
    msg.setSource(8829U);
    msg.setSourceEntity(236U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(134U);
    msg.beacon.assign("RVTHRFFZXEJSRLOQLRGWSNPCFLIFMBPQWMZUKUUMETNIDXTSGLTDXBHXGLMMBAZSUAYWZJCDYVGJJOEFICDDDWKWUMYTOUWTRVCYNECKHVBGCUYKNZDDSFMCAPXIHIMSRSOKXOCGBEHNQYELABFRMHQZJPZVCKHVKIJTPBHQZAWZY");
    msg.lat = 0.0541119037753;
    msg.lon = 0.43249999359;
    msg.depth = 0.578494805705;
    msg.query_channel = 185U;
    msg.reply_channel = 5U;
    msg.transponder_delay = 195U;

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
    msg.setTimeStamp(0.482917063267);
    msg.setSource(22775U);
    msg.setSourceEntity(124U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(164U);
    msg.beacon.assign("RRKDEARXFXNIGYOVBXTLHDMKEWBEZKIEIHKHGYOFYJROHJZBSGLVUTMRYRIRFJJDPFHGSIJQWQKYMPOLCMKCQQFQTMPZNEWNCAGZWCCHSGSNULAKLULPUHUZXGNTXVIIZNALMLJTEENQADEHGMWISDDBSTVZCYNVZJFWSCPRKUUXCVPULEPRBOIXCJSQWAYNNJXZBAOPJOWVCVOSBTMGLRBOOAFDAHSWYXBEYU");
    msg.lat = 0.849236964958;
    msg.lon = 0.616363212458;
    msg.depth = 0.593362096499;
    msg.query_channel = 7U;
    msg.reply_channel = 201U;
    msg.transponder_delay = 237U;

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
    msg.setTimeStamp(0.284560415175);
    msg.setSource(34471U);
    msg.setSourceEntity(165U);
    msg.setDestination(65327U);
    msg.setDestinationEntity(48U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.0971546096344);
    msg.setSource(20839U);
    msg.setSourceEntity(12U);
    msg.setDestination(56476U);
    msg.setDestinationEntity(234U);
    msg.op = 243U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SVVZZIATFBOVMLEOXSPNXIUKWFZCZKWJWQRUJYBADVUAQMYWWREUOEFPLHSZJNDC");
    tmp_msg_0.lat = 0.976266748562;
    tmp_msg_0.lon = 0.348995527011;
    tmp_msg_0.depth = 0.0209833324781;
    tmp_msg_0.query_channel = 181U;
    tmp_msg_0.reply_channel = 122U;
    tmp_msg_0.transponder_delay = 216U;
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
    msg.setTimeStamp(0.315565187481);
    msg.setSource(65376U);
    msg.setSourceEntity(206U);
    msg.setDestination(22484U);
    msg.setDestinationEntity(237U);
    msg.op = 175U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OZSOGTSZHOZICHPPXRDLKFQIOGBIIQWNSGQWBFTXUKAHCAXTGMHQMNBGVOZIJZKDEVXCOVSCMFVMLRALQWQNXGDNLLIKPZVKCSYCAYXUJSERKJJAQAPZJOYOZNFGLYWZPXDDVKKGUCWMBNEBFHULDGNNMTTOCBMQWRUWTAXXF");
    tmp_msg_0.lat = 0.0791982402714;
    tmp_msg_0.lon = 0.338283571884;
    tmp_msg_0.depth = 0.205336238702;
    tmp_msg_0.query_channel = 168U;
    tmp_msg_0.reply_channel = 117U;
    tmp_msg_0.transponder_delay = 110U;
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
    msg.setTimeStamp(0.922917213285);
    msg.setSource(11170U);
    msg.setSourceEntity(110U);
    msg.setDestination(26843U);
    msg.setDestinationEntity(52U);
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.81906327806);
    msg.setSource(636U);
    msg.setSourceEntity(173U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(39U);
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 33291U;
    tmp_msg_0.lat = 0.186052396176;
    tmp_msg_0.lon = 0.791764960428;
    tmp_msg_0.z = 0.661410241243;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.speed = 0.2507158435;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.custom.assign("YKEZFNPRHWPQCQXOFUCKIVETRQTOLRKWPSROZESBMOHKZSADIYZTWFFNNNAVGITITVVMDBOYEJOGMBGCKUYTCLNXGSHBOOLBSMCLXMBAVJDDAZMFPYPFGGXDSYIRWISTWQQBPEAXNLZPJ");
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
    msg.setTimeStamp(0.358326518665);
    msg.setSource(17260U);
    msg.setSourceEntity(43U);
    msg.setDestination(52578U);
    msg.setDestinationEntity(175U);
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.279869441844;
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
    msg.setTimeStamp(0.56588629629);
    msg.setSource(55899U);
    msg.setSourceEntity(112U);
    msg.setDestination(3227U);
    msg.setDestinationEntity(247U);
    msg.op = 23U;
    msg.system.assign("KVVEKEQGAKNJXMK");
    msg.range = 0.590060656288;
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.735861565119;
    tmp_msg_0.x = 0.743554035854;
    tmp_msg_0.y = 0.322143167386;
    tmp_msg_0.z = 0.559208277721;
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
    msg.setTimeStamp(0.164161246928);
    msg.setSource(24123U);
    msg.setSourceEntity(40U);
    msg.setDestination(29961U);
    msg.setDestinationEntity(97U);
    msg.op = 50U;
    msg.system.assign("XUBWXZSYIVCPXSBQVGPTLHPVFMTZDTMUCJFRYPTAJEMURUXHSZODDTOOCUKVQNZBEFDRUEILNYKPMYEDLJRCMISGETIASNYVZBTWHQBHPVUIBNFCAPNNGCHHQVUAQPGWMFBNVBCDFXKZOGFROGGNDKSZWALMJAOBJAKEJTDSMDKXQLNFZWWRTEGDKVOIYQ");
    msg.range = 0.916323108516;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.0601216985809;
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
    msg.setTimeStamp(0.0892942282047);
    msg.setSource(15391U);
    msg.setSourceEntity(163U);
    msg.setDestination(32715U);
    msg.setDestinationEntity(32U);
    msg.op = 182U;
    msg.system.assign("UAHOTOMOXVFUGBYUYDMPTNSFNZEACQDTPMRDHIJDELJODNISEVKNGLUIPFBVZRSNVYUQDSTKCTHBHXIBW");
    msg.range = 0.293333237509;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 190U;
    tmp_msg_0.actions.assign("IWNTXTJUVHBGYSUIVXBNYHLXWSGPFLYCCAUHGRDNRQUREOMDIBJXWKSMFWHXCJJAQEPHXNDXCMZAKZNEYKFVWMTMEIOHVHSAAPTYFJQRILHUFZZBOBVYQBWPFKFCGRJKROCYZERDOHUXADKUN");
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
    msg.setTimeStamp(0.296772595139);
    msg.setSource(26566U);
    msg.setSourceEntity(158U);
    msg.setDestination(4500U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.581861961134);
    msg.setSource(25980U);
    msg.setSourceEntity(221U);
    msg.setDestination(37129U);
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
    msg.setTimeStamp(0.4443090253);
    msg.setSource(60303U);
    msg.setSourceEntity(194U);
    msg.setDestination(43322U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.80437788271);
    msg.setSource(41627U);
    msg.setSourceEntity(82U);
    msg.setDestination(63713U);
    msg.setDestinationEntity(144U);
    msg.list.assign("RCRPGXIQXWDQLMMHTAPWDE");

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
    msg.setTimeStamp(0.837470850183);
    msg.setSource(47744U);
    msg.setSourceEntity(21U);
    msg.setDestination(37772U);
    msg.setDestinationEntity(191U);
    msg.list.assign("SOOQRLLWICEK");

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
    msg.setTimeStamp(0.517923797865);
    msg.setSource(31396U);
    msg.setSourceEntity(53U);
    msg.setDestination(30464U);
    msg.setDestinationEntity(171U);
    msg.list.assign("DZCRAFALKK");

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
    msg.setTimeStamp(0.161494048794);
    msg.setSource(3437U);
    msg.setSourceEntity(194U);
    msg.setDestination(13635U);
    msg.setDestinationEntity(61U);
    msg.peer.assign("OUOHWPLSWAIHHAXGDVSOMLEISKQNTWRNKIJMJTXNJPXUZFDTEBAUZTVRLZOCPDGLOQBLJFYWPBQDCHHMGIYCRYVGMMDPJCVKVN");
    msg.rssi = 0.480152001539;
    msg.integrity = 39903U;

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
    msg.setTimeStamp(0.350097732701);
    msg.setSource(8191U);
    msg.setSourceEntity(229U);
    msg.setDestination(22701U);
    msg.setDestinationEntity(244U);
    msg.peer.assign("ATEGVHSPPNQDKHWIEKMYSZRPFUEVBTGDDUKUUFERIPTPCFSBLHMVKRFQMZXDRCYIWODGTZMFSXLVNSDQWBBFSNUBPTYXFPAGRVHCOWNZBEEPBDIAZFJJQSZLMEQCTDUMWOYTIKAELXXOZNWJSJVFIRVKJLRRGTLYNMGKPHXROYBQJOCSNAEUCHHBVCWIUJJBWQXHLXSWGKTZNOYLGTIXGAUYQV");
    msg.rssi = 0.669774469591;
    msg.integrity = 34231U;

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
    msg.setTimeStamp(0.72750652458);
    msg.setSource(10338U);
    msg.setSourceEntity(190U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(11U);
    msg.peer.assign("BQQMFGSJVWNNSRUBUHETZKJIMLCYIERKZNWBIHXODNAFQDYHFWILTCDJHDBZLTXPGRTFOGQNMUZYPOUJWAEHKSSRQMVCELADPBWTILVMAZTDFQIKRKEHEMCMJAHBMTACLOXTOFOSWFZCFPVBXGKGXPYZUYRODIYIJRVPALSVBCGKQEWPOKCIGUGSLSRVSTEKYHJZSYQXNFK");
    msg.rssi = 0.85766078503;
    msg.integrity = 60912U;

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
    msg.setTimeStamp(0.594972311009);
    msg.setSource(38525U);
    msg.setSourceEntity(252U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(128U);
    msg.value = 13178;

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
    msg.setTimeStamp(0.444406788447);
    msg.setSource(20833U);
    msg.setSourceEntity(186U);
    msg.setDestination(17200U);
    msg.setDestinationEntity(69U);
    msg.value = 27807;

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
    msg.setTimeStamp(0.161905229099);
    msg.setSource(38874U);
    msg.setSourceEntity(148U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(37U);
    msg.value = 27649;

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
    msg.setTimeStamp(0.623080490102);
    msg.setSource(33653U);
    msg.setSourceEntity(75U);
    msg.setDestination(47994U);
    msg.setDestinationEntity(103U);
    msg.value = 0.254985040863;

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
    msg.setTimeStamp(0.246207108851);
    msg.setSource(61260U);
    msg.setSourceEntity(19U);
    msg.setDestination(35555U);
    msg.setDestinationEntity(178U);
    msg.value = 0.0857486626756;

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
    msg.setTimeStamp(0.362337417525);
    msg.setSource(61607U);
    msg.setSourceEntity(21U);
    msg.setDestination(10757U);
    msg.setDestinationEntity(0U);
    msg.value = 0.310984591;

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
    msg.setTimeStamp(0.136235343651);
    msg.setSource(41249U);
    msg.setSourceEntity(189U);
    msg.setDestination(41292U);
    msg.setDestinationEntity(149U);
    msg.value = 0.242829530734;

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
    msg.setTimeStamp(0.611107716219);
    msg.setSource(11036U);
    msg.setSourceEntity(59U);
    msg.setDestination(30804U);
    msg.setDestinationEntity(6U);
    msg.value = 0.597118247676;

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
    msg.setTimeStamp(0.786002872598);
    msg.setSource(45324U);
    msg.setSourceEntity(70U);
    msg.setDestination(36752U);
    msg.setDestinationEntity(164U);
    msg.value = 0.672250884658;

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
    msg.setTimeStamp(0.219781215307);
    msg.setSource(14422U);
    msg.setSourceEntity(80U);
    msg.setDestination(37752U);
    msg.setDestinationEntity(184U);
    msg.validity = 30900U;
    msg.type = 170U;
    msg.utc_year = 6124U;
    msg.utc_month = 15U;
    msg.utc_day = 2U;
    msg.utc_time = 0.732873455296;
    msg.lat = 0.391578921902;
    msg.lon = 0.351527787971;
    msg.height = 0.89697721793;
    msg.satellites = 144U;
    msg.cog = 0.974211049305;
    msg.sog = 0.355207187828;
    msg.hdop = 0.673753709706;
    msg.vdop = 0.25577684371;
    msg.hacc = 0.438266792794;
    msg.vacc = 0.309860144286;

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
    msg.setTimeStamp(0.697026233178);
    msg.setSource(63541U);
    msg.setSourceEntity(40U);
    msg.setDestination(61167U);
    msg.setDestinationEntity(186U);
    msg.validity = 13335U;
    msg.type = 152U;
    msg.utc_year = 14672U;
    msg.utc_month = 191U;
    msg.utc_day = 20U;
    msg.utc_time = 0.209159464073;
    msg.lat = 0.502789641281;
    msg.lon = 0.117369837569;
    msg.height = 0.54989290357;
    msg.satellites = 246U;
    msg.cog = 0.682192119581;
    msg.sog = 0.932819646048;
    msg.hdop = 0.75378191396;
    msg.vdop = 0.289929517566;
    msg.hacc = 0.357318994107;
    msg.vacc = 0.279943522859;

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
    msg.setTimeStamp(0.618188631541);
    msg.setSource(25702U);
    msg.setSourceEntity(22U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(199U);
    msg.validity = 24001U;
    msg.type = 172U;
    msg.utc_year = 59788U;
    msg.utc_month = 1U;
    msg.utc_day = 202U;
    msg.utc_time = 0.36305769135;
    msg.lat = 0.0966902469047;
    msg.lon = 0.625901811431;
    msg.height = 0.746218796443;
    msg.satellites = 222U;
    msg.cog = 0.020118251887;
    msg.sog = 0.958096772329;
    msg.hdop = 0.655662458132;
    msg.vdop = 0.560352849;
    msg.hacc = 0.258637680379;
    msg.vacc = 0.923970807205;

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
    msg.setTimeStamp(0.82982149638);
    msg.setSource(46115U);
    msg.setSourceEntity(65U);
    msg.setDestination(4578U);
    msg.setDestinationEntity(110U);
    msg.time = 0.0156926245488;
    msg.phi = 0.863497626733;
    msg.theta = 0.753422854305;
    msg.psi = 0.00118410446697;
    msg.psi_magnetic = 0.458252048934;

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
    msg.setTimeStamp(0.481503054842);
    msg.setSource(11946U);
    msg.setSourceEntity(92U);
    msg.setDestination(30290U);
    msg.setDestinationEntity(16U);
    msg.time = 0.0453503440449;
    msg.phi = 0.839718989086;
    msg.theta = 0.689628795991;
    msg.psi = 0.622868330799;
    msg.psi_magnetic = 0.616536853966;

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
    msg.setTimeStamp(0.0620530198175);
    msg.setSource(3574U);
    msg.setSourceEntity(54U);
    msg.setDestination(34864U);
    msg.setDestinationEntity(99U);
    msg.time = 0.220211033587;
    msg.phi = 0.431675410625;
    msg.theta = 0.858849432725;
    msg.psi = 0.736506940805;
    msg.psi_magnetic = 0.0248890818746;

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
    msg.setTimeStamp(0.422083412698);
    msg.setSource(56938U);
    msg.setSourceEntity(191U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(184U);
    msg.time = 0.135738672759;
    msg.x = 0.3985307838;
    msg.y = 0.436229368394;
    msg.z = 0.499341117126;
    msg.timestep = 0.879457864047;

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
    msg.setTimeStamp(0.785528302893);
    msg.setSource(1169U);
    msg.setSourceEntity(128U);
    msg.setDestination(56933U);
    msg.setDestinationEntity(33U);
    msg.time = 0.0996051642608;
    msg.x = 0.810738872321;
    msg.y = 0.827215891109;
    msg.z = 0.283877941523;
    msg.timestep = 0.48113969025;

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
    msg.setTimeStamp(0.980955048257);
    msg.setSource(56867U);
    msg.setSourceEntity(198U);
    msg.setDestination(37438U);
    msg.setDestinationEntity(105U);
    msg.time = 0.919505773345;
    msg.x = 0.0893639709649;
    msg.y = 0.572741540531;
    msg.z = 0.343911255497;
    msg.timestep = 0.596910379604;

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
    msg.setTimeStamp(0.657535702805);
    msg.setSource(53272U);
    msg.setSourceEntity(239U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(127U);
    msg.time = 0.984413145022;
    msg.x = 0.59305162791;
    msg.y = 0.87181352514;
    msg.z = 0.235003002894;

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
    msg.setTimeStamp(0.726881790885);
    msg.setSource(5519U);
    msg.setSourceEntity(251U);
    msg.setDestination(16897U);
    msg.setDestinationEntity(116U);
    msg.time = 0.240821417198;
    msg.x = 0.978029153647;
    msg.y = 0.188414670339;
    msg.z = 0.136243691928;

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
    msg.setTimeStamp(0.788206316525);
    msg.setSource(8135U);
    msg.setSourceEntity(231U);
    msg.setDestination(8385U);
    msg.setDestinationEntity(119U);
    msg.time = 0.672552266022;
    msg.x = 0.880983993079;
    msg.y = 0.749951335968;
    msg.z = 0.555364575282;

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
    msg.setTimeStamp(0.677495429824);
    msg.setSource(17961U);
    msg.setSourceEntity(87U);
    msg.setDestination(43454U);
    msg.setDestinationEntity(160U);
    msg.time = 0.236575289328;
    msg.x = 0.319500816479;
    msg.y = 0.60796013346;
    msg.z = 0.312817711666;

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
    msg.setTimeStamp(0.915665856537);
    msg.setSource(63160U);
    msg.setSourceEntity(234U);
    msg.setDestination(24379U);
    msg.setDestinationEntity(50U);
    msg.time = 0.719046427135;
    msg.x = 0.44987893467;
    msg.y = 0.374668255936;
    msg.z = 0.409011640134;

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
    msg.setTimeStamp(0.590649811175);
    msg.setSource(31666U);
    msg.setSourceEntity(31U);
    msg.setDestination(55002U);
    msg.setDestinationEntity(15U);
    msg.time = 0.772277885827;
    msg.x = 0.111979464228;
    msg.y = 0.836748265376;
    msg.z = 0.433633882541;

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
    msg.setTimeStamp(0.708905077528);
    msg.setSource(44126U);
    msg.setSourceEntity(75U);
    msg.setDestination(30813U);
    msg.setDestinationEntity(191U);
    msg.time = 0.626063591656;
    msg.x = 0.934464739148;
    msg.y = 0.00995413550132;
    msg.z = 0.438593337938;

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
    msg.setTimeStamp(0.998166906023);
    msg.setSource(58193U);
    msg.setSourceEntity(158U);
    msg.setDestination(63795U);
    msg.setDestinationEntity(113U);
    msg.time = 0.373841658996;
    msg.x = 0.974037094239;
    msg.y = 0.759145144541;
    msg.z = 0.5253975325;

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
    msg.setTimeStamp(0.419013714599);
    msg.setSource(64283U);
    msg.setSourceEntity(182U);
    msg.setDestination(63417U);
    msg.setDestinationEntity(6U);
    msg.time = 0.987821801828;
    msg.x = 0.414313760719;
    msg.y = 0.513466347367;
    msg.z = 0.834606930259;

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
    msg.setTimeStamp(0.719779683113);
    msg.setSource(13335U);
    msg.setSourceEntity(72U);
    msg.setDestination(48644U);
    msg.setDestinationEntity(120U);
    msg.validity = 240U;
    msg.x = 0.206069829268;
    msg.y = 0.508642243234;
    msg.z = 0.878666322614;

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
    msg.setTimeStamp(0.525536738574);
    msg.setSource(28287U);
    msg.setSourceEntity(40U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(49U);
    msg.validity = 244U;
    msg.x = 0.603104253316;
    msg.y = 0.480547368514;
    msg.z = 0.70776297208;

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
    msg.setTimeStamp(0.847598449785);
    msg.setSource(34021U);
    msg.setSourceEntity(109U);
    msg.setDestination(42911U);
    msg.setDestinationEntity(144U);
    msg.validity = 230U;
    msg.x = 0.872668861732;
    msg.y = 0.866304155342;
    msg.z = 0.611002842493;

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
    msg.setTimeStamp(0.0950609781686);
    msg.setSource(48662U);
    msg.setSourceEntity(26U);
    msg.setDestination(20568U);
    msg.setDestinationEntity(213U);
    msg.validity = 43U;
    msg.x = 0.0544877900168;
    msg.y = 0.991687599614;
    msg.z = 0.810775868774;

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
    msg.setTimeStamp(0.775292222214);
    msg.setSource(51542U);
    msg.setSourceEntity(190U);
    msg.setDestination(60716U);
    msg.setDestinationEntity(200U);
    msg.validity = 197U;
    msg.x = 0.829186937015;
    msg.y = 0.972172521964;
    msg.z = 0.996987887542;

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
    msg.setTimeStamp(0.0360613370324);
    msg.setSource(28368U);
    msg.setSourceEntity(248U);
    msg.setDestination(46954U);
    msg.setDestinationEntity(189U);
    msg.validity = 46U;
    msg.x = 0.984651883448;
    msg.y = 0.189131781854;
    msg.z = 0.657387452674;

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
    msg.setTimeStamp(0.148254221753);
    msg.setSource(9208U);
    msg.setSourceEntity(229U);
    msg.setDestination(10347U);
    msg.setDestinationEntity(83U);
    msg.time = 0.767609675803;
    msg.x = 0.461124593066;
    msg.y = 0.760406071688;
    msg.z = 0.0848237697015;

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
    msg.setTimeStamp(0.0281376330461);
    msg.setSource(6840U);
    msg.setSourceEntity(218U);
    msg.setDestination(56836U);
    msg.setDestinationEntity(123U);
    msg.time = 0.865181970501;
    msg.x = 0.0180229993861;
    msg.y = 0.885555501783;
    msg.z = 0.657408397179;

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
    msg.setTimeStamp(0.0401756750015);
    msg.setSource(60944U);
    msg.setSourceEntity(102U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(252U);
    msg.time = 0.80555362508;
    msg.x = 0.751605818937;
    msg.y = 0.546749482264;
    msg.z = 0.485813013034;

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
    msg.setTimeStamp(0.968835750913);
    msg.setSource(39913U);
    msg.setSourceEntity(81U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(55U);
    msg.validity = 24U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.897808272405;
    tmp_msg_0.y = 0.713084627735;
    tmp_msg_0.z = 0.717037257155;
    tmp_msg_0.phi = 0.0273914904547;
    tmp_msg_0.theta = 0.82602467611;
    tmp_msg_0.psi = 0.879289701346;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.833803479876;
    tmp_msg_1.beam_height = 0.110313691968;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.512001990409;

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
    msg.setTimeStamp(0.215238018175);
    msg.setSource(12658U);
    msg.setSourceEntity(241U);
    msg.setDestination(13754U);
    msg.setDestinationEntity(215U);
    msg.validity = 142U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.631121675773;
    tmp_msg_0.y = 0.920499407071;
    tmp_msg_0.z = 0.8868306225;
    tmp_msg_0.phi = 0.0423804619328;
    tmp_msg_0.theta = 0.829113905489;
    tmp_msg_0.psi = 0.586966698316;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.274066859094;
    tmp_msg_1.beam_height = 0.174102347284;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.38990659172;

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
    msg.setTimeStamp(0.541995776868);
    msg.setSource(34835U);
    msg.setSourceEntity(7U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(73U);
    msg.validity = 10U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.942169240046;
    tmp_msg_0.y = 0.71526642577;
    tmp_msg_0.z = 0.335648556736;
    tmp_msg_0.phi = 0.425057435039;
    tmp_msg_0.theta = 0.294088511946;
    tmp_msg_0.psi = 0.397653208517;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.338934934334;
    tmp_msg_1.beam_height = 0.888863058214;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.519737329914;

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
    msg.setTimeStamp(0.703521860821);
    msg.setSource(33157U);
    msg.setSourceEntity(9U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(144U);
    msg.value = 0.220234665055;

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
    msg.setTimeStamp(0.457185247579);
    msg.setSource(31338U);
    msg.setSourceEntity(222U);
    msg.setDestination(12508U);
    msg.setDestinationEntity(50U);
    msg.value = 0.347598443618;

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
    msg.setTimeStamp(0.798035720548);
    msg.setSource(34390U);
    msg.setSourceEntity(146U);
    msg.setDestination(45108U);
    msg.setDestinationEntity(179U);
    msg.value = 0.0793965031905;

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
    msg.setTimeStamp(0.0789760344541);
    msg.setSource(60320U);
    msg.setSourceEntity(174U);
    msg.setDestination(39480U);
    msg.setDestinationEntity(87U);
    msg.value = 0.673392509353;

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
    msg.setTimeStamp(0.261444515364);
    msg.setSource(4238U);
    msg.setSourceEntity(133U);
    msg.setDestination(55841U);
    msg.setDestinationEntity(226U);
    msg.value = 0.541645433378;

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
    msg.setTimeStamp(0.975997621755);
    msg.setSource(19201U);
    msg.setSourceEntity(210U);
    msg.setDestination(26185U);
    msg.setDestinationEntity(227U);
    msg.value = 0.947809429009;

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
    msg.setTimeStamp(0.0340276838973);
    msg.setSource(34072U);
    msg.setSourceEntity(85U);
    msg.setDestination(14291U);
    msg.setDestinationEntity(199U);
    msg.value = 0.916140825911;

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
    msg.setTimeStamp(0.627080621401);
    msg.setSource(63999U);
    msg.setSourceEntity(10U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(62U);
    msg.value = 0.262504972591;

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
    msg.setTimeStamp(0.753787185198);
    msg.setSource(59848U);
    msg.setSourceEntity(4U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(158U);
    msg.value = 0.647634187063;

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
    msg.setTimeStamp(0.209224854481);
    msg.setSource(30597U);
    msg.setSourceEntity(182U);
    msg.setDestination(41733U);
    msg.setDestinationEntity(33U);
    msg.value = 0.384108067624;

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
    msg.setTimeStamp(0.388507203819);
    msg.setSource(63956U);
    msg.setSourceEntity(211U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(206U);
    msg.value = 0.683881631362;

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
    msg.setTimeStamp(0.490433887092);
    msg.setSource(39896U);
    msg.setSourceEntity(167U);
    msg.setDestination(4186U);
    msg.setDestinationEntity(242U);
    msg.value = 0.300223528105;

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
    msg.setTimeStamp(0.628036652296);
    msg.setSource(42564U);
    msg.setSourceEntity(90U);
    msg.setDestination(45143U);
    msg.setDestinationEntity(95U);
    msg.value = 0.678258795143;

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
    msg.setTimeStamp(0.517525436175);
    msg.setSource(35475U);
    msg.setSourceEntity(87U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(85U);
    msg.value = 0.71184869234;

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
    msg.setTimeStamp(0.0861306629406);
    msg.setSource(22564U);
    msg.setSourceEntity(69U);
    msg.setDestination(60405U);
    msg.setDestinationEntity(197U);
    msg.value = 0.619592275899;

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
    msg.setTimeStamp(0.187845898342);
    msg.setSource(31091U);
    msg.setSourceEntity(182U);
    msg.setDestination(34450U);
    msg.setDestinationEntity(156U);
    msg.value = 0.760138217935;

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
    msg.setTimeStamp(0.425424900004);
    msg.setSource(54073U);
    msg.setSourceEntity(14U);
    msg.setDestination(2211U);
    msg.setDestinationEntity(184U);
    msg.value = 0.56282213219;

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
    msg.setTimeStamp(0.385113549105);
    msg.setSource(29752U);
    msg.setSourceEntity(115U);
    msg.setDestination(10711U);
    msg.setDestinationEntity(150U);
    msg.value = 0.949653373196;

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
    msg.setTimeStamp(0.903225412265);
    msg.setSource(51374U);
    msg.setSourceEntity(132U);
    msg.setDestination(19168U);
    msg.setDestinationEntity(38U);
    msg.value = 0.54034726589;

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
    msg.setTimeStamp(0.783992741609);
    msg.setSource(3370U);
    msg.setSourceEntity(75U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(92U);
    msg.value = 0.723887545083;

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
    msg.setTimeStamp(0.542273798265);
    msg.setSource(10819U);
    msg.setSourceEntity(163U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(65U);
    msg.value = 0.829445381382;

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
    msg.setTimeStamp(0.584159953621);
    msg.setSource(64813U);
    msg.setSourceEntity(249U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(221U);
    msg.value = 0.97568010844;

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
    msg.setTimeStamp(0.522864280096);
    msg.setSource(22803U);
    msg.setSourceEntity(33U);
    msg.setDestination(56734U);
    msg.setDestinationEntity(120U);
    msg.value = 0.948257355199;

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
    msg.setTimeStamp(0.126603908172);
    msg.setSource(35873U);
    msg.setSourceEntity(104U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(196U);
    msg.value = 0.949964168754;

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
    msg.setTimeStamp(0.702234954805);
    msg.setSource(23968U);
    msg.setSourceEntity(101U);
    msg.setDestination(33198U);
    msg.setDestinationEntity(166U);
    msg.direction = 0.629267529543;
    msg.speed = 0.493033291;
    msg.turbulence = 0.671941186602;

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
    msg.setTimeStamp(0.442447456773);
    msg.setSource(59888U);
    msg.setSourceEntity(214U);
    msg.setDestination(22407U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.656699951516;
    msg.speed = 0.655043662836;
    msg.turbulence = 0.690704237812;

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
    msg.setTimeStamp(0.905671496994);
    msg.setSource(39786U);
    msg.setSourceEntity(254U);
    msg.setDestination(12039U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.217560221925;
    msg.speed = 0.598419033636;
    msg.turbulence = 0.678633962747;

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
    msg.setTimeStamp(0.523464552268);
    msg.setSource(23161U);
    msg.setSourceEntity(73U);
    msg.setDestination(17936U);
    msg.setDestinationEntity(163U);
    msg.value = 0.548529881208;

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
    msg.setTimeStamp(0.0284856773765);
    msg.setSource(29797U);
    msg.setSourceEntity(31U);
    msg.setDestination(38982U);
    msg.setDestinationEntity(86U);
    msg.value = 0.141633277324;

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
    msg.setTimeStamp(0.594082135768);
    msg.setSource(12488U);
    msg.setSourceEntity(241U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(51U);
    msg.value = 0.568692764134;

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
    msg.setTimeStamp(0.954327792109);
    msg.setSource(40489U);
    msg.setSourceEntity(59U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(25U);
    msg.value.assign("AOAQWOSTBKMLWGRTWGZEAKFOJZWXCRGHTTVJYOVRHOZYXCQUOBGSHUEPNSIDJYMSDFFKYVECCPLDXJURDGXIYLBIRHCNZDFMFHNSXCNBKZIRGSMANRQUOLBKQSUOVHQGCMDZGKVQAEZZY");

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
    msg.setTimeStamp(0.878988083569);
    msg.setSource(52452U);
    msg.setSourceEntity(20U);
    msg.setDestination(14555U);
    msg.setDestinationEntity(247U);
    msg.value.assign("SXVZABUMVWDDFWMIUVNASLZTXUEYPBHMEXKHESJMKHLPBYGHSWLMUKRTTIAYWJCXYOFOLLKNXIZXOXGBVTPDGNMTPVRLCIROFBQDGCU");

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
    msg.setTimeStamp(0.686374330439);
    msg.setSource(4108U);
    msg.setSourceEntity(28U);
    msg.setDestination(1716U);
    msg.setDestinationEntity(222U);
    msg.value.assign("OQXRGSSTVPRFDAQSOZYWAZLNQSFEMBBYJYGPM");

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
    msg.setTimeStamp(0.611052303285);
    msg.setSource(32310U);
    msg.setSourceEntity(174U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(38U);
    const char tmp_msg_0[] = {-75, -97, -55, -43, 110, -19, -18, 13, 5, -51, 71, 121, 64, -115, 30, 28, 84, 18, 103, -22, -88, -122, -64, -2, -40, -103, -61, -31, 106, -32, -41, 16, 70, 6, 30, -63, 75, 96, -29, -80, -12, 15, -27, 97, 65, -125, 37, -116, 106, 23, 31, 118, -104, -61, 119, 94, 64, 122, 1, 76, -81, 118, -71, -44, -39, 12, -2, 78, -49, -10, 62, -4, 110, 44, -125, 81, -101, -107, -56, -43, 32, 112, 19, 60, 117, -127, 42, 91, 32, 80, 122};
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
    msg.setTimeStamp(0.279323174643);
    msg.setSource(17274U);
    msg.setSourceEntity(201U);
    msg.setDestination(21386U);
    msg.setDestinationEntity(94U);
    const char tmp_msg_0[] = {-5, -32, 96, 0, -10, -16, 81, 76, 64, -112, 88, 10, -107, 118, -4, 118, -4, 105, -105, -102, -30, 124, 114, 4, -118, -55};
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
    msg.setTimeStamp(0.580918896147);
    msg.setSource(34769U);
    msg.setSourceEntity(122U);
    msg.setDestination(44282U);
    msg.setDestinationEntity(219U);
    const char tmp_msg_0[] = {-44, 39, 50, 46, 69, -59, -29, -42, 122, -77, -67, 98, 39, -56, -36, 113, 73, 29, 85, 114, 7, -33, -64, -41, 10, -115, -9, -119, -80, 10, -98, 97, 63, 77, -109, 8, -9, 108, -128, 102, -91, 46, 21, 116, 62, 109, 93, -44, 46, 42, -84, 7, 35, 125, -109, 96, 86, -6, -109, 12, 54, -94, 72, 59, -25, 89, -112, -118, 93, 94, 67, -125, -88, 37, -34, -97, 3, 10, 58, -81, -79, 19, 36, 104, 70, -39, -106, -18, -101, 29, 61, 25, 77, 47, -65, 55, 28, -93, 87, 40, 123, 83, -23, -127, 81, 22, -9, -122, 120, -97, 9, -72, -46, 84, -22, -53, -70, 91, 46, -40, -12, -58, 111, -32, -76, -7, -11, 68, 55, -7, -32, 118, -68, 99, 72, 71};
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
    msg.setTimeStamp(0.283757568592);
    msg.setSource(11227U);
    msg.setSourceEntity(190U);
    msg.setDestination(48016U);
    msg.setDestinationEntity(91U);
    msg.type = 147U;
    msg.frequency = 2051309051U;
    msg.min_range = 4845U;
    msg.max_range = 5818U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.591959394197;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.920797463299;
    tmp_msg_0.beam_height = 0.949071579301;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-87, -65, -33, -58, -101, 44, -120, 98, 27, -73, 122, 39, 40, -48, 11, 105, -22, -89, -59, -5, -28, -28, 0, 113, -116};
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
    msg.setTimeStamp(0.437010857235);
    msg.setSource(61412U);
    msg.setSourceEntity(157U);
    msg.setDestination(61207U);
    msg.setDestinationEntity(178U);
    msg.type = 161U;
    msg.frequency = 3419391019U;
    msg.min_range = 47368U;
    msg.max_range = 19207U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.600131972202;
    const char tmp_msg_0[] = {-90, 9, -126, 61, 101, 120, -121, -19, -81, 54, -85, -19, -94, -56, -102, 101, 86, 85, -63, 67, 79, 37, -124, 108, 69};
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
    msg.setTimeStamp(0.0540631608933);
    msg.setSource(28353U);
    msg.setSourceEntity(39U);
    msg.setDestination(20725U);
    msg.setDestinationEntity(168U);
    msg.type = 62U;
    msg.frequency = 2239382901U;
    msg.min_range = 59082U;
    msg.max_range = 12165U;
    msg.bits_per_point = 161U;
    msg.scale_factor = 0.6993503404;
    const char tmp_msg_0[] = {-105, -83, -125, 74, 12, -82, -74, 10, 122, 64, 79, 79, -82, 61, -30, 14, -81, -72, -3, -50, -60, -105, 33, -40, -41, 17, 91, 14, -94, 24, 71, 17, -115, 58, -30, -114, 40, -5, 65, 83, 118, 12, -59, -49, -120, 52, 48, -21, -83, 116, -102, 45, -9, 15, -95, 99, 39, -46, 63, 111, 83, -5, 58, -33, 9, -64, 11, -27, -16, -78, -57, -62, -22, -47, 80, -30, -31, -13, -4, 6, 121, 71, 74, 118, 70, 117, 76, 16, -28, -40, 102, -21, -103, -35, -64, 45, 49, 82, -24, -103, 29, 96, -99, -55, 35, -57, 35, -123, 15, 45, 110, 118, 52, 35, 109, -93, -120, -2};
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
    msg.setTimeStamp(0.0280827687927);
    msg.setSource(28464U);
    msg.setSourceEntity(207U);
    msg.setDestination(7042U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.646735801465);
    msg.setSource(35359U);
    msg.setSourceEntity(113U);
    msg.setDestination(36624U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.453624099024);
    msg.setSource(11936U);
    msg.setSourceEntity(238U);
    msg.setDestination(29742U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.426437558838);
    msg.setSource(41202U);
    msg.setSourceEntity(117U);
    msg.setDestination(41391U);
    msg.setDestinationEntity(176U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.300413854437);
    msg.setSource(10254U);
    msg.setSourceEntity(211U);
    msg.setDestination(58603U);
    msg.setDestinationEntity(182U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.655858723641);
    msg.setSource(1871U);
    msg.setSourceEntity(147U);
    msg.setDestination(16836U);
    msg.setDestinationEntity(101U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.341569347734);
    msg.setSource(31948U);
    msg.setSourceEntity(38U);
    msg.setDestination(5929U);
    msg.setDestinationEntity(33U);
    msg.value = 0.752470094906;
    msg.confidence = 0.657902288173;
    msg.opmodes.assign("LUXUDIWTKKALUJMHWZUELTMFXZOCKNIBVUBXCBXGMWGWJSYFVAFQKCTCPYZIQFJPRAKLZRPEVGQPYDIYCTAMSLSGCHNSUVUJFXPKBVNJKCLVYWGRGEIRIHDSRHOHQWCWJGHJNSB");

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
    msg.setTimeStamp(0.685659061896);
    msg.setSource(36389U);
    msg.setSourceEntity(134U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(91U);
    msg.value = 0.353239593337;
    msg.confidence = 0.534713700632;
    msg.opmodes.assign("HCFYPPKOUBHMBIFCVNRHXXBOEQJRRXXGVFZIUYYAUMTKRFIVJLMFRSVRNYGQAJDWSSVKZAZCJIFGASYEEIDCMCNYTOQDQHPDZBETJCYJBBMFDQADCQPGLPUNPRBLTVNQHWZWLTLCPTDOEGBKELEPOIEWMKNSXFSGIOVZGDOUBAJFBWHXMVRIAQOSNWGEJWEIHLQTTMQOKWKUXTVLNSNPZMLZSYRVGWKPJGUDDUHMAORCIZKJYTCHU");

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
    msg.setTimeStamp(0.36427900874);
    msg.setSource(27504U);
    msg.setSourceEntity(57U);
    msg.setDestination(21169U);
    msg.setDestinationEntity(179U);
    msg.value = 0.787570950905;
    msg.confidence = 0.363685479281;
    msg.opmodes.assign("RJWMOZIOXRNHIXJMGTMZQQZDLOOTKLOHUUAMPINNCJMVFINODUYHDBBMPTUALFSWCZFOPWRMEUAJHXNNQXPYJBGYSDERFBNSHWBDGXTGKBAVFPVWMPKHZROTPHYVLJYFDVPATCQVU");

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
    msg.setTimeStamp(0.23928684546);
    msg.setSource(45688U);
    msg.setSourceEntity(61U);
    msg.setDestination(6907U);
    msg.setDestinationEntity(207U);
    msg.itow = 3699498107U;
    msg.lat = 0.602984250652;
    msg.lon = 0.606200601047;
    msg.height_ell = 0.14320146568;
    msg.height_sea = 0.604607801644;
    msg.hacc = 0.467640616621;
    msg.vacc = 0.510478157474;
    msg.vel_n = 0.713205937136;
    msg.vel_e = 0.535028962864;
    msg.vel_d = 0.54781328682;
    msg.speed = 0.127160879296;
    msg.gspeed = 0.965333409721;
    msg.heading = 0.475427163319;
    msg.sacc = 0.291932752717;
    msg.cacc = 0.603989004624;

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
    msg.setTimeStamp(0.0873071821544);
    msg.setSource(27508U);
    msg.setSourceEntity(50U);
    msg.setDestination(15365U);
    msg.setDestinationEntity(93U);
    msg.itow = 499995622U;
    msg.lat = 0.403943517538;
    msg.lon = 0.471923611579;
    msg.height_ell = 0.946920253974;
    msg.height_sea = 0.622419210585;
    msg.hacc = 0.672925747387;
    msg.vacc = 0.151228440362;
    msg.vel_n = 0.525351533973;
    msg.vel_e = 0.510260688327;
    msg.vel_d = 0.22637176614;
    msg.speed = 0.075068233897;
    msg.gspeed = 0.90843414603;
    msg.heading = 0.796709256841;
    msg.sacc = 0.980307960074;
    msg.cacc = 0.95065668359;

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
    msg.setTimeStamp(0.866269321168);
    msg.setSource(43548U);
    msg.setSourceEntity(225U);
    msg.setDestination(2583U);
    msg.setDestinationEntity(8U);
    msg.itow = 1043470852U;
    msg.lat = 0.768949870787;
    msg.lon = 0.798096327539;
    msg.height_ell = 0.00222356706149;
    msg.height_sea = 0.712229130194;
    msg.hacc = 0.778327133631;
    msg.vacc = 0.770914761569;
    msg.vel_n = 0.871484861;
    msg.vel_e = 0.295179314653;
    msg.vel_d = 0.634246248199;
    msg.speed = 0.346076625062;
    msg.gspeed = 0.402255652014;
    msg.heading = 0.719861185533;
    msg.sacc = 0.160674103079;
    msg.cacc = 0.247154942094;

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
    msg.setTimeStamp(0.640627053726);
    msg.setSource(14041U);
    msg.setSourceEntity(251U);
    msg.setDestination(21940U);
    msg.setDestinationEntity(73U);
    msg.id = 83U;
    msg.value = 0.389219148295;

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
    msg.setTimeStamp(0.963305047103);
    msg.setSource(6795U);
    msg.setSourceEntity(168U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(32U);
    msg.id = 166U;
    msg.value = 0.782958675472;

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
    msg.setTimeStamp(0.192047674256);
    msg.setSource(50616U);
    msg.setSourceEntity(37U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(231U);
    msg.id = 221U;
    msg.value = 0.244643646033;

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
    msg.setTimeStamp(0.881177989119);
    msg.setSource(11401U);
    msg.setSourceEntity(240U);
    msg.setDestination(57312U);
    msg.setDestinationEntity(84U);
    msg.x = 0.437297013323;
    msg.y = 0.210998223659;
    msg.z = 0.466277118552;
    msg.phi = 0.721515395924;
    msg.theta = 0.761773132319;
    msg.psi = 0.693547794912;

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
    msg.setTimeStamp(0.468540598015);
    msg.setSource(43171U);
    msg.setSourceEntity(17U);
    msg.setDestination(28084U);
    msg.setDestinationEntity(196U);
    msg.x = 0.703766786227;
    msg.y = 0.876165333158;
    msg.z = 0.288368607037;
    msg.phi = 0.603111597384;
    msg.theta = 0.133016196768;
    msg.psi = 0.0434584973062;

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
    msg.setTimeStamp(0.321146362595);
    msg.setSource(24853U);
    msg.setSourceEntity(221U);
    msg.setDestination(63979U);
    msg.setDestinationEntity(8U);
    msg.x = 0.606143581179;
    msg.y = 0.410536106047;
    msg.z = 0.301545729941;
    msg.phi = 0.290918113009;
    msg.theta = 0.690629896047;
    msg.psi = 0.515648575639;

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
    msg.setTimeStamp(0.362774410712);
    msg.setSource(62425U);
    msg.setSourceEntity(5U);
    msg.setDestination(52707U);
    msg.setDestinationEntity(79U);
    msg.beam_width = 0.920704686508;
    msg.beam_height = 0.532727860385;

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
    msg.setTimeStamp(0.413275124901);
    msg.setSource(61416U);
    msg.setSourceEntity(236U);
    msg.setDestination(20533U);
    msg.setDestinationEntity(67U);
    msg.beam_width = 0.421358410284;
    msg.beam_height = 0.838542591573;

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
    msg.setTimeStamp(0.13155680274);
    msg.setSource(64641U);
    msg.setSourceEntity(159U);
    msg.setDestination(48242U);
    msg.setDestinationEntity(133U);
    msg.beam_width = 0.76680402926;
    msg.beam_height = 0.735174018843;

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
    msg.setTimeStamp(0.166539399814);
    msg.setSource(43257U);
    msg.setSourceEntity(84U);
    msg.setDestination(27527U);
    msg.setDestinationEntity(214U);
    msg.sane = 0U;

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
    msg.setTimeStamp(0.0956355843349);
    msg.setSource(14702U);
    msg.setSourceEntity(194U);
    msg.setDestination(19581U);
    msg.setDestinationEntity(127U);
    msg.sane = 208U;

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
    msg.setTimeStamp(0.512617368068);
    msg.setSource(54408U);
    msg.setSourceEntity(51U);
    msg.setDestination(28672U);
    msg.setDestinationEntity(208U);
    msg.sane = 123U;

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
    msg.setTimeStamp(0.497831415531);
    msg.setSource(54056U);
    msg.setSourceEntity(208U);
    msg.setDestination(53287U);
    msg.setDestinationEntity(70U);
    msg.value = 0.334080541198;

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
    msg.setTimeStamp(0.470544807584);
    msg.setSource(35363U);
    msg.setSourceEntity(213U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(169U);
    msg.value = 0.614078705799;

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
    msg.setTimeStamp(0.947708532574);
    msg.setSource(10201U);
    msg.setSourceEntity(168U);
    msg.setDestination(6912U);
    msg.setDestinationEntity(9U);
    msg.value = 0.439998134812;

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
    msg.setTimeStamp(0.00219327230552);
    msg.setSource(8527U);
    msg.setSourceEntity(173U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(27U);
    msg.value = 0.288737733128;

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
    msg.setTimeStamp(0.975868537389);
    msg.setSource(11960U);
    msg.setSourceEntity(65U);
    msg.setDestination(1715U);
    msg.setDestinationEntity(226U);
    msg.value = 0.167108955205;

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
    msg.setTimeStamp(0.837888280679);
    msg.setSource(58178U);
    msg.setSourceEntity(168U);
    msg.setDestination(48913U);
    msg.setDestinationEntity(82U);
    msg.value = 0.229404122281;

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
    msg.setTimeStamp(0.182573039881);
    msg.setSource(4161U);
    msg.setSourceEntity(199U);
    msg.setDestination(36043U);
    msg.setDestinationEntity(119U);
    msg.value = 0.22648683936;

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
    msg.setTimeStamp(0.96731657083);
    msg.setSource(48100U);
    msg.setSourceEntity(23U);
    msg.setDestination(652U);
    msg.setDestinationEntity(66U);
    msg.value = 0.769084477542;

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
    msg.setTimeStamp(0.713560370205);
    msg.setSource(18783U);
    msg.setSourceEntity(57U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(52U);
    msg.value = 0.195990872263;

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
    msg.setTimeStamp(0.371153955319);
    msg.setSource(13333U);
    msg.setSourceEntity(141U);
    msg.setDestination(27089U);
    msg.setDestinationEntity(128U);
    msg.value = 0.912524762672;

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
    msg.setTimeStamp(0.37232620532);
    msg.setSource(55690U);
    msg.setSourceEntity(149U);
    msg.setDestination(16037U);
    msg.setDestinationEntity(100U);
    msg.value = 0.224098606061;

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
    msg.setTimeStamp(0.2200066964);
    msg.setSource(21273U);
    msg.setSourceEntity(42U);
    msg.setDestination(29296U);
    msg.setDestinationEntity(24U);
    msg.value = 0.908420429205;

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
    msg.setTimeStamp(0.223772904266);
    msg.setSource(41547U);
    msg.setSourceEntity(249U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(166U);
    msg.value = 0.289976934664;

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
    msg.setTimeStamp(0.190656149367);
    msg.setSource(22999U);
    msg.setSourceEntity(56U);
    msg.setDestination(15726U);
    msg.setDestinationEntity(73U);
    msg.value = 0.496861785434;

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
    msg.setTimeStamp(0.405555849924);
    msg.setSource(23631U);
    msg.setSourceEntity(135U);
    msg.setDestination(23678U);
    msg.setDestinationEntity(109U);
    msg.value = 0.83389725006;

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
    msg.setTimeStamp(0.499605233164);
    msg.setSource(33524U);
    msg.setSourceEntity(134U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(45U);
    msg.value = 0.426326131176;

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
    msg.setTimeStamp(0.668252434152);
    msg.setSource(62403U);
    msg.setSourceEntity(153U);
    msg.setDestination(37491U);
    msg.setDestinationEntity(236U);
    msg.value = 0.87849116724;

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
    msg.setTimeStamp(0.230416700355);
    msg.setSource(2950U);
    msg.setSourceEntity(109U);
    msg.setDestination(51899U);
    msg.setDestinationEntity(54U);
    msg.value = 0.202070733016;

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
    msg.setTimeStamp(0.115079439069);
    msg.setSource(12434U);
    msg.setSourceEntity(92U);
    msg.setDestination(32206U);
    msg.setDestinationEntity(221U);
    msg.value = 0.482684841645;

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
    msg.setTimeStamp(0.715586439894);
    msg.setSource(15565U);
    msg.setSourceEntity(119U);
    msg.setDestination(10157U);
    msg.setDestinationEntity(15U);
    msg.value = 0.747708387491;

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
    msg.setTimeStamp(0.155279000025);
    msg.setSource(55617U);
    msg.setSourceEntity(129U);
    msg.setDestination(58569U);
    msg.setDestinationEntity(205U);
    msg.value = 0.644472705031;

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
    msg.setTimeStamp(0.828506193861);
    msg.setSource(5228U);
    msg.setSourceEntity(239U);
    msg.setDestination(34083U);
    msg.setDestinationEntity(187U);
    msg.value = 0.469167920546;

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
    msg.setTimeStamp(0.368414844096);
    msg.setSource(12926U);
    msg.setSourceEntity(130U);
    msg.setDestination(22570U);
    msg.setDestinationEntity(68U);
    msg.value = 0.737666043675;

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
    msg.setTimeStamp(0.0240304550732);
    msg.setSource(61195U);
    msg.setSourceEntity(11U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(195U);
    msg.value = 0.679013987182;

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
    msg.setTimeStamp(0.856716056017);
    msg.setSource(3543U);
    msg.setSourceEntity(23U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(245U);
    msg.validity = 10298U;
    msg.type = 235U;
    msg.tow = 1359237188U;
    msg.base_lat = 0.909114550704;
    msg.base_lon = 0.600478131212;
    msg.base_height = 0.693119486924;
    msg.n = 0.00642429195977;
    msg.e = 0.580186301452;
    msg.d = 0.166051830204;
    msg.v_n = 0.769894910069;
    msg.v_e = 0.954746954696;
    msg.v_d = 0.169240955414;
    msg.satellites = 38U;
    msg.iar_hyp = 38561U;
    msg.iar_ratio = 0.168146042885;

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
    msg.setTimeStamp(0.837931429632);
    msg.setSource(8580U);
    msg.setSourceEntity(54U);
    msg.setDestination(56902U);
    msg.setDestinationEntity(152U);
    msg.validity = 39146U;
    msg.type = 193U;
    msg.tow = 2606893378U;
    msg.base_lat = 0.237727030069;
    msg.base_lon = 0.309136429885;
    msg.base_height = 0.856811453033;
    msg.n = 0.341443276941;
    msg.e = 0.253487580867;
    msg.d = 0.379669721764;
    msg.v_n = 0.234957474704;
    msg.v_e = 0.639910464622;
    msg.v_d = 0.530868958542;
    msg.satellites = 18U;
    msg.iar_hyp = 46180U;
    msg.iar_ratio = 0.521724851872;

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
    msg.setTimeStamp(0.988700465606);
    msg.setSource(36005U);
    msg.setSourceEntity(157U);
    msg.setDestination(51095U);
    msg.setDestinationEntity(173U);
    msg.validity = 33866U;
    msg.type = 194U;
    msg.tow = 2972899638U;
    msg.base_lat = 0.159976565062;
    msg.base_lon = 0.410224265305;
    msg.base_height = 0.17360397206;
    msg.n = 0.811466659888;
    msg.e = 0.429758128549;
    msg.d = 0.897951232317;
    msg.v_n = 0.393901939472;
    msg.v_e = 0.404247809159;
    msg.v_d = 0.354051167548;
    msg.satellites = 192U;
    msg.iar_hyp = 43100U;
    msg.iar_ratio = 0.851697862798;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.213231762855);
    msg.setSource(7247U);
    msg.setSourceEntity(224U);
    msg.setDestination(23783U);
    msg.setDestinationEntity(118U);
    msg.id = 149U;
    msg.zoom = 77U;
    msg.action = 64U;

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
    msg.setTimeStamp(0.678741267926);
    msg.setSource(61900U);
    msg.setSourceEntity(186U);
    msg.setDestination(50470U);
    msg.setDestinationEntity(237U);
    msg.id = 93U;
    msg.zoom = 35U;
    msg.action = 187U;

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
    msg.setTimeStamp(0.826031440759);
    msg.setSource(18378U);
    msg.setSourceEntity(58U);
    msg.setDestination(49043U);
    msg.setDestinationEntity(152U);
    msg.id = 59U;
    msg.zoom = 100U;
    msg.action = 80U;

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
    msg.setTimeStamp(0.119724161624);
    msg.setSource(31201U);
    msg.setSourceEntity(92U);
    msg.setDestination(50286U);
    msg.setDestinationEntity(195U);
    msg.id = 152U;
    msg.value = 0.486363818486;

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
    msg.setTimeStamp(0.36285057552);
    msg.setSource(48698U);
    msg.setSourceEntity(159U);
    msg.setDestination(62090U);
    msg.setDestinationEntity(201U);
    msg.id = 100U;
    msg.value = 0.412771153722;

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
    msg.setTimeStamp(0.655390806281);
    msg.setSource(54548U);
    msg.setSourceEntity(102U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(73U);
    msg.id = 32U;
    msg.value = 0.716569782115;

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
    msg.setTimeStamp(0.904549586912);
    msg.setSource(45630U);
    msg.setSourceEntity(124U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(157U);
    msg.id = 214U;
    msg.value = 0.399515726652;

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
    msg.setTimeStamp(0.182119728706);
    msg.setSource(24313U);
    msg.setSourceEntity(243U);
    msg.setDestination(22486U);
    msg.setDestinationEntity(234U);
    msg.id = 126U;
    msg.value = 0.0659410115699;

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
    msg.setTimeStamp(0.60633205587);
    msg.setSource(52947U);
    msg.setSourceEntity(165U);
    msg.setDestination(6131U);
    msg.setDestinationEntity(71U);
    msg.id = 223U;
    msg.value = 0.700860325493;

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
    msg.setTimeStamp(0.891076279537);
    msg.setSource(8406U);
    msg.setSourceEntity(208U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(172U);
    msg.id = 93U;
    msg.angle = 0.194776951233;

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
    msg.setTimeStamp(0.908952587791);
    msg.setSource(618U);
    msg.setSourceEntity(193U);
    msg.setDestination(24833U);
    msg.setDestinationEntity(69U);
    msg.id = 82U;
    msg.angle = 0.287636073995;

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
    msg.setTimeStamp(0.845328562345);
    msg.setSource(116U);
    msg.setSourceEntity(94U);
    msg.setDestination(30523U);
    msg.setDestinationEntity(89U);
    msg.id = 126U;
    msg.angle = 0.452668345744;

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
    msg.setTimeStamp(0.374742085752);
    msg.setSource(9646U);
    msg.setSourceEntity(217U);
    msg.setDestination(3785U);
    msg.setDestinationEntity(240U);
    msg.op = 49U;
    msg.actions.assign("FPYGTACKCMTXHXTLJBCMOXBEFVZAGBWEAVDFMLVTUFSYQJCNCTTDDNIFUBBWHLRRXORNVVJ");

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
    msg.setTimeStamp(0.384943414409);
    msg.setSource(48464U);
    msg.setSourceEntity(190U);
    msg.setDestination(8316U);
    msg.setDestinationEntity(6U);
    msg.op = 205U;
    msg.actions.assign("IAUIXUPOYOKFJWVLHEWRSWBFFTJRAGSFONIVICNVIGQDHVVQHGEDKYVJGLYUJLMSM");

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
    msg.setTimeStamp(0.680294083572);
    msg.setSource(54451U);
    msg.setSourceEntity(239U);
    msg.setDestination(9610U);
    msg.setDestinationEntity(167U);
    msg.op = 85U;
    msg.actions.assign("HNRTOURFWNNSDEZEHVRRCGNTSZPAUCIWXECYTEGNFSYYABDSX");

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
    msg.setTimeStamp(0.948260256676);
    msg.setSource(25919U);
    msg.setSourceEntity(82U);
    msg.setDestination(20477U);
    msg.setDestinationEntity(27U);
    msg.actions.assign("LUUQQBHXHMZPWFHRFHARECDJVIWAMGKRPZWJEPJTATEVPTRQFXS");

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
    msg.setTimeStamp(0.64596585227);
    msg.setSource(38932U);
    msg.setSourceEntity(198U);
    msg.setDestination(42370U);
    msg.setDestinationEntity(209U);
    msg.actions.assign("ZNXWCELCIBBAIMXOYFMPJZBFTUGTWNVZPJEWICHHKEXHOQCIVLVMMJMZWLFSRZFTMDVYLUUIZVPQYSWYERVNHNJREYKAHIIZQQBEXSQSJ");

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
    msg.setTimeStamp(0.773529717567);
    msg.setSource(3579U);
    msg.setSourceEntity(7U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(232U);
    msg.actions.assign("YQVWVAKLUGZAJMRAPSFPLHDPBUNKLWVLL");

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
    msg.setTimeStamp(0.083187551437);
    msg.setSource(4395U);
    msg.setSourceEntity(164U);
    msg.setDestination(27U);
    msg.setDestinationEntity(58U);
    msg.button = 171U;
    msg.value = 239U;

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
    msg.setTimeStamp(0.578576332368);
    msg.setSource(53625U);
    msg.setSourceEntity(212U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(0U);
    msg.button = 158U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.537055519142);
    msg.setSource(3396U);
    msg.setSourceEntity(0U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(232U);
    msg.button = 201U;
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
    msg.setTimeStamp(0.641867610454);
    msg.setSource(64354U);
    msg.setSourceEntity(44U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(97U);
    msg.op = 45U;
    msg.text.assign("UVNCYNIEIPWXDOZMZROWWKLVGAUPWWIWXGOXEYROLAGGFVOUSCKJAMMFHTJMXUFKCJVPYEFUXDZCFLZVTKHJLBXDKDDGGLOBIPYRMMQZRMRXORJLBAHCSSVBGBXNUCJHGHHYTENBYCALL");

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
    msg.setTimeStamp(0.319879010202);
    msg.setSource(8285U);
    msg.setSourceEntity(183U);
    msg.setDestination(32403U);
    msg.setDestinationEntity(116U);
    msg.op = 70U;
    msg.text.assign("SZDPIUEDNZNQABSYLQEPHCIVMVJHRJQAWCLAKKYRHLUOZJDIKTGNQULPCVELMQAJGBGMYRRLZSKEOSWUGTZXTUEFNTYWDOECJOTETJKPRSMIVMITCPCVMIJAFFOHHAPQXKFXRBTHDIPUJKKQDGLRYCWYHPHTFFEFFPXSAHBBXDDYNNWUMVZRMYDNGAOZWVLWGFUWJCXKEOOUVMZQUOBBGSNERXADWIVMYTPSIW");

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
    msg.setTimeStamp(0.0188321272724);
    msg.setSource(33565U);
    msg.setSourceEntity(3U);
    msg.setDestination(7234U);
    msg.setDestinationEntity(163U);
    msg.op = 214U;
    msg.text.assign("UZOOBEXOCMNEKIDAPOAHNLDQAVIXYYGMDPJDUKNOOGYERSTYULGKQTDXTLKPXELNTZVHBGMRTSMUQXPIDNJSLSLSUUEQPJFRMONQVYWHXKFLUSAMHJPBHMZWOKHBKMIKGPJQHEWWTFDGPLSIFFZHLEVRIPRFAZOBJSFETNCXW");

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
    msg.setTimeStamp(0.0120058603217);
    msg.setSource(271U);
    msg.setSourceEntity(137U);
    msg.setDestination(19068U);
    msg.setDestinationEntity(83U);
    msg.op = 20U;
    msg.time_remain = 0.441793450399;
    msg.sched_time = 0.978768430124;

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
    msg.setTimeStamp(0.1855583431);
    msg.setSource(44693U);
    msg.setSourceEntity(204U);
    msg.setDestination(57061U);
    msg.setDestinationEntity(43U);
    msg.op = 178U;
    msg.time_remain = 0.110729151043;
    msg.sched_time = 0.157724842675;

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
    msg.setTimeStamp(0.375916595462);
    msg.setSource(10192U);
    msg.setSourceEntity(253U);
    msg.setDestination(33987U);
    msg.setDestinationEntity(174U);
    msg.op = 44U;
    msg.time_remain = 0.985057651223;
    msg.sched_time = 0.340164877056;

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
    msg.setTimeStamp(0.335407122647);
    msg.setSource(5958U);
    msg.setSourceEntity(32U);
    msg.setDestination(2060U);
    msg.setDestinationEntity(3U);
    msg.name.assign("QRONBSUGWIDXNKVMJCEVQZQXIYKLEDGJKNAHOPSWVXYEVPBCWRGIMZBGPVDODHQFIVTFZBJLUOASVWFIXBDXTAISUFZHYDPTKPPIMGVRVONYSSLTCFFGBMXYXURNSDERNWCAOSLCVUAXQJXJH");
    msg.op = 142U;
    msg.sched_time = 0.913993636155;

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
    msg.setTimeStamp(0.765483174343);
    msg.setSource(50976U);
    msg.setSourceEntity(246U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(254U);
    msg.name.assign("CIHLZQQBPOPKAWTGGNXFAOKNDLEREYOYDSCAZFMTMXXICEXBHVHECBMBICUZCOBVEKPKDSQDDVRQVZJQATDSWSKAYWRMEGG");
    msg.op = 64U;
    msg.sched_time = 0.0341819794974;

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
    msg.setTimeStamp(0.672454357853);
    msg.setSource(50960U);
    msg.setSourceEntity(17U);
    msg.setDestination(1642U);
    msg.setDestinationEntity(83U);
    msg.name.assign("OMHWHPWNYPTSVZZFQOQEUEMZFBFFTRXSELBMXAOVWLWBBALGDJXYZ");
    msg.op = 243U;
    msg.sched_time = 0.60401208231;

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
    msg.setTimeStamp(0.688304684358);
    msg.setSource(28515U);
    msg.setSourceEntity(50U);
    msg.setDestination(37184U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.0532327976635);
    msg.setSource(6507U);
    msg.setSourceEntity(63U);
    msg.setDestination(64032U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.0411460367153);
    msg.setSource(9729U);
    msg.setSourceEntity(54U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.217742451539);
    msg.setSource(11874U);
    msg.setSourceEntity(38U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(239U);
    msg.name.assign("ZBUKRYYHRVKIFZNDNOXEZJKAARVOZMKXXOYIIUOSKPFCCIYQLGHRBFPZAUDNZCEQYPEXPQNOMJSPJUUGXHTZRCZKTNJUQM");
    msg.state = 179U;

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
    msg.setTimeStamp(0.551959018874);
    msg.setSource(25927U);
    msg.setSourceEntity(232U);
    msg.setDestination(2099U);
    msg.setDestinationEntity(110U);
    msg.name.assign("DZRSOOTPFNWNYYRUQKNJTNPEURCJLRBWSGHCLGXEWME");
    msg.state = 99U;

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
    msg.setTimeStamp(0.714075429568);
    msg.setSource(8122U);
    msg.setSourceEntity(160U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(136U);
    msg.name.assign("ISFVMKKNXASAONXJKRDIEOUDWTSUNSVCPYVQJOZLPKMBTOGJYRPHRKUBARWWEFLLORZFYVHHMLKTFKGNWSPCPASVNHWGLXNQBIXWTTYJBCIODBHSZRNG");
    msg.state = 187U;

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
    msg.setTimeStamp(0.0242220834892);
    msg.setSource(46930U);
    msg.setSourceEntity(40U);
    msg.setDestination(47023U);
    msg.setDestinationEntity(252U);
    msg.name.assign("TEQNKXYDWMHDSTVSFMKICNFAXILRUTQYBZZLNLSXGRGCMZQVFVAHFEJMUMGPKGUXWYDREHKLPYNZOETQSCBSPCEYYBCFQMUWQIBQIVCXYMAVJLTKHJVEPBE");
    msg.value = 41U;

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
    msg.setTimeStamp(0.330079434835);
    msg.setSource(62556U);
    msg.setSourceEntity(244U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(127U);
    msg.name.assign("NVKTGCSEQTOZMBPSPQHCWGQXYBGZATGUEAWXCSSKBNDZARBNIKQPHMFLWOFSSPJUQUOXOYQUXQMTGWDVWBJIOYYJPHURKODUFGRXITNMJMULKJFYHETZCGRCUKBBWRXDMAWKCKDITJPSOLNEAHVAIUGSPWHFSNTELIJHBLZLOI");
    msg.value = 101U;

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
    msg.setTimeStamp(0.859000124386);
    msg.setSource(34627U);
    msg.setSourceEntity(59U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(13U);
    msg.name.assign("LGULROUMZFETFRNSGOMJXLVXEILIAZCPJYPUOJYZUEPYZCAHUDHKNQSOXKAFDIANZKMLBDEOXFBMJRERMPWVLJDPQXRKHQABLEYQIXGFDBBHSHNPASLWTVAFTMHBQKVQZTZUNINDCERCRAOQIWBEYZWPIJYTXWMMXTBFFQGINSSOTYUQNGKBJUOVPHKEFZULGQVRJKMXPVRWGCLSSXSGIODOVTJJCK");
    msg.value = 35U;

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
    msg.setTimeStamp(0.312741267797);
    msg.setSource(54096U);
    msg.setSourceEntity(115U);
    msg.setDestination(12635U);
    msg.setDestinationEntity(130U);
    msg.name.assign("GJYEGFYLJIRBIOBAQCPYUZOKSGZJGOWQCERMQOEIRUNXOEYDIPVRBEGBYQAFZDPAHHMLNGZNBBXVPBISXRCYRVQMXTKCYSFNHJPPUDBUEXASVQVZWFCPSLFTJVZFHZZBAXDMOMPEKQPHFCRECXFNUIMXKVKTFJOLWTJTXDVELICMAPZNQYDZXTSKTUHOWBQAGUWHIWRGKDLLVGRKMUNAWYJAUUSNMLSIHCSMDLHO");

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
    msg.setTimeStamp(0.602056762012);
    msg.setSource(3081U);
    msg.setSourceEntity(33U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KGHLGHAZGBIDSHQYSUXOVQ");

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
    msg.setTimeStamp(0.237875794403);
    msg.setSource(60961U);
    msg.setSourceEntity(83U);
    msg.setDestination(1721U);
    msg.setDestinationEntity(223U);
    msg.name.assign("XTPLKJDIHQWKDEFRKWBGTZGWOVFMEFGBJNURWTXXXGQOVHRNOYTMPBNZWRVFAUBQVLCCKLCPREKPOEKFFCCZLPKRNMAMQNJEKNYKTYXTIWAQBOYMSILSAQSPMUHMVCYEHTOQAPLDQDGSNHBCRBMJBVILYHEOEGJBVJDNQFDWOACVRQZUHFDGZOVUXUDJXBNWJDUUNIMKAIXVSZTYCARLAEHGZIAWSHFZOTTWZYIYZPS");

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
    msg.setTimeStamp(0.64379065102);
    msg.setSource(42887U);
    msg.setSourceEntity(76U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(11U);
    msg.name.assign("ZUPUZTZHSWARCNCKKGYPHGORUWHBPJINTDDIZSEAXKGSWLFKRGVQQJLYVOBXKETVOOEUHDOFGI");
    msg.value = 237U;

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
    msg.setTimeStamp(0.133565024223);
    msg.setSource(20620U);
    msg.setSourceEntity(26U);
    msg.setDestination(28655U);
    msg.setDestinationEntity(38U);
    msg.name.assign("NTKRBOQXSUZVGATENZEOFMUSAERYWUMSXMIOTIQCWQIDQRJGNJYMETGJYYTRGAWBPLWMJHFUSPCCMAVCGGBKVJSOCEETXSLAZMCGAPUFIHZUBQTYQNLLOFIPUFVRUEOAWLWXGGWHBKZQWZVHNKHHMXOCEUPDDNSVKHNLTISYAVMJFXYENHDIR");
    msg.value = 33U;

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
    msg.setTimeStamp(0.547616643498);
    msg.setSource(373U);
    msg.setSourceEntity(102U);
    msg.setDestination(36337U);
    msg.setDestinationEntity(140U);
    msg.name.assign("ASRYQYXCANCIQVRIHGWZTKVYFQ");
    msg.value = 205U;

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
    msg.setTimeStamp(0.283409812279);
    msg.setSource(17854U);
    msg.setSourceEntity(141U);
    msg.setDestination(53364U);
    msg.setDestinationEntity(185U);
    msg.id = 53U;
    msg.period = 2240954054U;
    msg.duty_cycle = 397867653U;

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
    msg.setTimeStamp(0.312174357715);
    msg.setSource(46873U);
    msg.setSourceEntity(188U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(51U);
    msg.id = 187U;
    msg.period = 1630751204U;
    msg.duty_cycle = 903755392U;

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
    msg.setTimeStamp(0.204803366713);
    msg.setSource(36510U);
    msg.setSourceEntity(21U);
    msg.setDestination(31088U);
    msg.setDestinationEntity(58U);
    msg.id = 58U;
    msg.period = 2263609616U;
    msg.duty_cycle = 931544571U;

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
    msg.setTimeStamp(0.936138108201);
    msg.setSource(32777U);
    msg.setSourceEntity(161U);
    msg.setDestination(25718U);
    msg.setDestinationEntity(132U);
    msg.id = 118U;
    msg.period = 1501169401U;
    msg.duty_cycle = 3558039994U;

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
    msg.setTimeStamp(0.113375088204);
    msg.setSource(29412U);
    msg.setSourceEntity(97U);
    msg.setDestination(47671U);
    msg.setDestinationEntity(178U);
    msg.id = 12U;
    msg.period = 155891985U;
    msg.duty_cycle = 336028207U;

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
    msg.setTimeStamp(0.939374690784);
    msg.setSource(25408U);
    msg.setSourceEntity(223U);
    msg.setDestination(7864U);
    msg.setDestinationEntity(119U);
    msg.id = 177U;
    msg.period = 4242095479U;
    msg.duty_cycle = 1290205292U;

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
    msg.setTimeStamp(0.231211884762);
    msg.setSource(37193U);
    msg.setSourceEntity(65U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.808007799963;
    msg.lon = 0.407806430827;
    msg.height = 0.928594581135;
    msg.x = 0.929642737179;
    msg.y = 0.784649038331;
    msg.z = 0.979965665722;
    msg.phi = 0.951322189532;
    msg.theta = 0.469468402964;
    msg.psi = 0.148108106084;
    msg.u = 0.0635915191569;
    msg.v = 0.315111572802;
    msg.w = 0.0376775385341;
    msg.vx = 0.0528134366411;
    msg.vy = 0.446561862865;
    msg.vz = 0.315860532954;
    msg.p = 0.824019827408;
    msg.q = 0.237255572971;
    msg.r = 0.0954044446588;
    msg.depth = 0.365682372999;
    msg.alt = 0.428607139634;

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
    msg.setTimeStamp(0.501449754132);
    msg.setSource(34337U);
    msg.setSourceEntity(12U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.211746993767;
    msg.lon = 0.00378058037371;
    msg.height = 0.707711576835;
    msg.x = 0.526107353041;
    msg.y = 0.574979012064;
    msg.z = 0.827577166393;
    msg.phi = 0.677627199774;
    msg.theta = 0.0125582277529;
    msg.psi = 0.899759574668;
    msg.u = 0.318094302814;
    msg.v = 0.492930639934;
    msg.w = 0.0687806056799;
    msg.vx = 0.238860427709;
    msg.vy = 0.34226472391;
    msg.vz = 0.210166240112;
    msg.p = 0.11719485101;
    msg.q = 0.335640219356;
    msg.r = 0.906132738479;
    msg.depth = 0.577179155888;
    msg.alt = 0.273361928714;

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
    msg.setTimeStamp(0.810708402558);
    msg.setSource(51675U);
    msg.setSourceEntity(144U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.739592258325;
    msg.lon = 0.448639584864;
    msg.height = 0.385262648826;
    msg.x = 0.40404349519;
    msg.y = 0.115437100006;
    msg.z = 0.362124577172;
    msg.phi = 0.259219152239;
    msg.theta = 0.920618976458;
    msg.psi = 0.280823956989;
    msg.u = 0.710649804814;
    msg.v = 0.054302759284;
    msg.w = 0.291403631233;
    msg.vx = 0.178337624673;
    msg.vy = 0.973144247244;
    msg.vz = 0.732950304959;
    msg.p = 0.822692453843;
    msg.q = 0.208096035914;
    msg.r = 0.251237864024;
    msg.depth = 0.0352179567269;
    msg.alt = 0.291772725863;

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
    msg.setTimeStamp(0.752789306609);
    msg.setSource(46707U);
    msg.setSourceEntity(155U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(177U);
    msg.x = 0.386811630315;
    msg.y = 0.883533891579;
    msg.z = 0.383027649439;

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
    msg.setTimeStamp(0.902356167901);
    msg.setSource(62377U);
    msg.setSourceEntity(186U);
    msg.setDestination(17079U);
    msg.setDestinationEntity(223U);
    msg.x = 0.360747001959;
    msg.y = 0.191686675764;
    msg.z = 0.814913000388;

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
    msg.setTimeStamp(0.760692049816);
    msg.setSource(32616U);
    msg.setSourceEntity(179U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(162U);
    msg.x = 0.384552503953;
    msg.y = 0.00656008189491;
    msg.z = 0.531523619;

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
    msg.setTimeStamp(0.558197052627);
    msg.setSource(13715U);
    msg.setSourceEntity(91U);
    msg.setDestination(46911U);
    msg.setDestinationEntity(241U);
    msg.value = 0.434200476029;

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
    msg.setTimeStamp(0.860807807964);
    msg.setSource(57738U);
    msg.setSourceEntity(187U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(68U);
    msg.value = 0.596319447606;

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
    msg.setTimeStamp(0.0937290235072);
    msg.setSource(17278U);
    msg.setSourceEntity(252U);
    msg.setDestination(57031U);
    msg.setDestinationEntity(105U);
    msg.value = 0.325115421973;

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
    msg.setTimeStamp(0.887082498588);
    msg.setSource(48890U);
    msg.setSourceEntity(169U);
    msg.setDestination(16852U);
    msg.setDestinationEntity(236U);
    msg.value = 0.0184958679519;

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
    msg.setTimeStamp(0.855648156645);
    msg.setSource(32914U);
    msg.setSourceEntity(50U);
    msg.setDestination(12126U);
    msg.setDestinationEntity(186U);
    msg.value = 0.30809951428;

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
    msg.setTimeStamp(0.930574479874);
    msg.setSource(23486U);
    msg.setSourceEntity(118U);
    msg.setDestination(15527U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0717029904742;

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
    msg.setTimeStamp(0.897531113067);
    msg.setSource(61121U);
    msg.setSourceEntity(237U);
    msg.setDestination(65354U);
    msg.setDestinationEntity(60U);
    msg.x = 0.248594007567;
    msg.y = 0.568052677098;
    msg.z = 0.530193563183;
    msg.phi = 0.715991696483;
    msg.theta = 0.767619457207;
    msg.psi = 0.320273815402;
    msg.p = 0.119239486566;
    msg.q = 0.950748009278;
    msg.r = 0.944188336541;
    msg.u = 0.704270280174;
    msg.v = 0.699083115154;
    msg.w = 0.735622984665;
    msg.bias_psi = 0.38143070454;
    msg.bias_r = 0.392008038677;

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
    msg.setTimeStamp(0.0383996151996);
    msg.setSource(57403U);
    msg.setSourceEntity(7U);
    msg.setDestination(42704U);
    msg.setDestinationEntity(157U);
    msg.x = 0.976192321514;
    msg.y = 0.853406064561;
    msg.z = 0.143838527842;
    msg.phi = 0.48779472235;
    msg.theta = 0.998670436652;
    msg.psi = 0.352289004459;
    msg.p = 0.68532602231;
    msg.q = 0.0988669519395;
    msg.r = 0.813919815736;
    msg.u = 0.980821376276;
    msg.v = 0.468929044042;
    msg.w = 0.183956680989;
    msg.bias_psi = 0.902392862641;
    msg.bias_r = 0.565152313639;

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
    msg.setTimeStamp(0.770278491039);
    msg.setSource(40799U);
    msg.setSourceEntity(222U);
    msg.setDestination(35563U);
    msg.setDestinationEntity(141U);
    msg.x = 0.461621535991;
    msg.y = 0.50306384339;
    msg.z = 0.398326463501;
    msg.phi = 0.653477388021;
    msg.theta = 0.542511587726;
    msg.psi = 0.846076336058;
    msg.p = 0.265673258362;
    msg.q = 0.262690655111;
    msg.r = 0.985306861448;
    msg.u = 0.482391902424;
    msg.v = 0.561049093443;
    msg.w = 0.50363857507;
    msg.bias_psi = 0.795775537052;
    msg.bias_r = 0.473370891591;

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
    msg.setTimeStamp(0.8939227527);
    msg.setSource(35351U);
    msg.setSourceEntity(200U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(66U);
    msg.bias_psi = 0.634926529582;
    msg.bias_r = 0.920613011929;
    msg.cog = 0.491233127682;
    msg.cyaw = 0.967119782483;
    msg.lbl_rej_level = 0.667713749149;
    msg.gps_rej_level = 0.326046275854;
    msg.custom_x = 0.793510580985;
    msg.custom_y = 0.283465307921;
    msg.custom_z = 0.395242788767;

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
    msg.setTimeStamp(0.116598976664);
    msg.setSource(1138U);
    msg.setSourceEntity(139U);
    msg.setDestination(15356U);
    msg.setDestinationEntity(212U);
    msg.bias_psi = 0.796675956052;
    msg.bias_r = 0.761633115265;
    msg.cog = 0.412712280417;
    msg.cyaw = 0.0124972676887;
    msg.lbl_rej_level = 0.429509426218;
    msg.gps_rej_level = 0.0288553017445;
    msg.custom_x = 0.132971007257;
    msg.custom_y = 0.317508562712;
    msg.custom_z = 0.801839667839;

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
    msg.setTimeStamp(0.782743543147);
    msg.setSource(8010U);
    msg.setSourceEntity(217U);
    msg.setDestination(49922U);
    msg.setDestinationEntity(146U);
    msg.bias_psi = 0.984036046528;
    msg.bias_r = 0.977812105379;
    msg.cog = 0.862929309675;
    msg.cyaw = 0.697354779507;
    msg.lbl_rej_level = 0.104885799259;
    msg.gps_rej_level = 0.279794269165;
    msg.custom_x = 0.257704837784;
    msg.custom_y = 0.971345185562;
    msg.custom_z = 0.369005733192;

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
    msg.setTimeStamp(0.374460354966);
    msg.setSource(6772U);
    msg.setSourceEntity(10U);
    msg.setDestination(11211U);
    msg.setDestinationEntity(162U);
    msg.utc_time = 0.771188287994;
    msg.reason = 71U;

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
    msg.setTimeStamp(0.00264592483128);
    msg.setSource(33483U);
    msg.setSourceEntity(180U);
    msg.setDestination(26654U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.249288567779;
    msg.reason = 189U;

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
    msg.setTimeStamp(0.580153746129);
    msg.setSource(62306U);
    msg.setSourceEntity(42U);
    msg.setDestination(29990U);
    msg.setDestinationEntity(96U);
    msg.utc_time = 0.118549300271;
    msg.reason = 240U;

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
    msg.setTimeStamp(0.276029179803);
    msg.setSource(15773U);
    msg.setSourceEntity(177U);
    msg.setDestination(41910U);
    msg.setDestinationEntity(52U);
    msg.id = 88U;
    msg.range = 0.338583058729;
    msg.acceptance = 49U;

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
    msg.setTimeStamp(0.405482879786);
    msg.setSource(5594U);
    msg.setSourceEntity(239U);
    msg.setDestination(50020U);
    msg.setDestinationEntity(103U);
    msg.id = 44U;
    msg.range = 0.130723057779;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.393674290145);
    msg.setSource(37432U);
    msg.setSourceEntity(135U);
    msg.setDestination(8741U);
    msg.setDestinationEntity(190U);
    msg.id = 8U;
    msg.range = 0.249121737028;
    msg.acceptance = 117U;

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
    msg.setTimeStamp(0.384321213492);
    msg.setSource(35590U);
    msg.setSourceEntity(250U);
    msg.setDestination(11214U);
    msg.setDestinationEntity(156U);
    msg.type = 87U;
    msg.reason = 228U;
    msg.value = 0.998204109657;
    msg.timestep = 0.248163823474;

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
    msg.setTimeStamp(0.216418069485);
    msg.setSource(63540U);
    msg.setSourceEntity(61U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(146U);
    msg.type = 69U;
    msg.reason = 134U;
    msg.value = 0.959710863677;
    msg.timestep = 0.822596079028;

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
    msg.setTimeStamp(0.757095071925);
    msg.setSource(50088U);
    msg.setSourceEntity(52U);
    msg.setDestination(41746U);
    msg.setDestinationEntity(124U);
    msg.type = 115U;
    msg.reason = 207U;
    msg.value = 0.352452440342;
    msg.timestep = 0.157248204403;

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
    msg.setTimeStamp(0.8195056356);
    msg.setSource(55936U);
    msg.setSourceEntity(131U);
    msg.setDestination(56694U);
    msg.setDestinationEntity(201U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GHTICAEGHRYDBEDTBLLGEQHXXRUQZWICOSWOKJPWNMXGHQHPJWRNOBSJQICJNJWKYECLFCHVWSSFSSOZKVMLDZOEZHDRIKHGKBV");
    tmp_msg_0.lat = 0.0911439991976;
    tmp_msg_0.lon = 0.913775694928;
    tmp_msg_0.depth = 0.951440422455;
    tmp_msg_0.query_channel = 152U;
    tmp_msg_0.reply_channel = 28U;
    tmp_msg_0.transponder_delay = 162U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0931644175938;
    msg.y = 0.807480963453;
    msg.var_x = 0.860132597527;
    msg.var_y = 0.787417988329;
    msg.distance = 0.790413385537;

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
    msg.setTimeStamp(0.500246768478);
    msg.setSource(57676U);
    msg.setSourceEntity(0U);
    msg.setDestination(14166U);
    msg.setDestinationEntity(51U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YGVFDXTNSICYLKZNASZVLGUISIFKBOOCMYSJIWZRKBPIVAGXRQJQHRJFSODJNRFAWQNVXVIUBKKWRMGLSADMLCWQFIJVYWEOUKOTJPAHLDQZOFFJGZWZFXBJHYCXOZGDKTAYWCFHVMEYNMBURBXMHBVLEEMA");
    tmp_msg_0.lat = 0.695574237828;
    tmp_msg_0.lon = 0.539315790353;
    tmp_msg_0.depth = 0.219394321277;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 137U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.821633314975;
    msg.y = 0.419155356235;
    msg.var_x = 0.705384884639;
    msg.var_y = 0.898550563874;
    msg.distance = 0.747339257833;

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
    msg.setTimeStamp(0.179090955579);
    msg.setSource(37702U);
    msg.setSourceEntity(90U);
    msg.setDestination(24553U);
    msg.setDestinationEntity(93U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HGINRQNEHMEFIYZNLIRLJMYADTWPBNFSASCLYSRBFWGNOCXEDOYOSNKGVYOQKFFPZPQAPPFLSEQCHMQXMUMIJNVRKXCECXPGZEYUKPBDSNMNAEAFZVWJZXPUKAZOCKIDEBGJGXUOARFYYQHRJZDSKUUBDILNYQHKGCWLCBHUDLPRRZIVE");
    tmp_msg_0.lat = 0.400257431681;
    tmp_msg_0.lon = 0.369644202387;
    tmp_msg_0.depth = 0.292787935185;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 185U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0399863180479;
    msg.y = 0.330951321545;
    msg.var_x = 0.168242279631;
    msg.var_y = 0.426783191586;
    msg.distance = 0.111350922546;

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
    msg.setTimeStamp(0.0463140555026);
    msg.setSource(56919U);
    msg.setSourceEntity(100U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(112U);
    msg.state = 116U;

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
    msg.setTimeStamp(0.287911791615);
    msg.setSource(8296U);
    msg.setSourceEntity(223U);
    msg.setDestination(46187U);
    msg.setDestinationEntity(179U);
    msg.state = 159U;

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
    msg.setTimeStamp(0.392128592936);
    msg.setSource(33533U);
    msg.setSourceEntity(155U);
    msg.setDestination(48726U);
    msg.setDestinationEntity(75U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.398297927769);
    msg.setSource(25990U);
    msg.setSourceEntity(131U);
    msg.setDestination(45526U);
    msg.setDestinationEntity(248U);
    msg.x = 0.147002917531;
    msg.y = 0.181562719375;
    msg.z = 0.269098400428;

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
    msg.setTimeStamp(0.567293169353);
    msg.setSource(32457U);
    msg.setSourceEntity(45U);
    msg.setDestination(18113U);
    msg.setDestinationEntity(49U);
    msg.x = 0.597685791934;
    msg.y = 0.669458323509;
    msg.z = 0.525407333732;

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
    msg.setTimeStamp(0.0697409240514);
    msg.setSource(35202U);
    msg.setSourceEntity(97U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(215U);
    msg.x = 0.960926820126;
    msg.y = 0.965539270153;
    msg.z = 0.75717796001;

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
    msg.setTimeStamp(0.864839881746);
    msg.setSource(22074U);
    msg.setSourceEntity(14U);
    msg.setDestination(61693U);
    msg.setDestinationEntity(107U);
    msg.va = 0.56583537243;
    msg.aoa = 0.741378092289;
    msg.ssa = 0.747038141567;

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
    msg.setTimeStamp(0.602696900106);
    msg.setSource(25164U);
    msg.setSourceEntity(89U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(237U);
    msg.va = 0.980096875106;
    msg.aoa = 0.77780161211;
    msg.ssa = 0.284655700804;

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
    msg.setTimeStamp(0.990616446125);
    msg.setSource(8487U);
    msg.setSourceEntity(15U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(2U);
    msg.va = 0.397839941901;
    msg.aoa = 0.0831073483171;
    msg.ssa = 0.506981794586;

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
    msg.setTimeStamp(0.554640387372);
    msg.setSource(50852U);
    msg.setSourceEntity(241U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(92U);
    msg.value = 0.555015511901;

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
    msg.setTimeStamp(0.837412477408);
    msg.setSource(52238U);
    msg.setSourceEntity(205U);
    msg.setDestination(35449U);
    msg.setDestinationEntity(234U);
    msg.value = 0.370997988648;

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
    msg.setTimeStamp(0.0261565924269);
    msg.setSource(55907U);
    msg.setSourceEntity(110U);
    msg.setDestination(55292U);
    msg.setDestinationEntity(175U);
    msg.value = 0.523776417139;

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
    msg.setTimeStamp(0.861299302001);
    msg.setSource(6362U);
    msg.setSourceEntity(24U);
    msg.setDestination(33603U);
    msg.setDestinationEntity(57U);
    msg.value = 0.59013370044;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.00182536366927);
    msg.setSource(30881U);
    msg.setSourceEntity(230U);
    msg.setDestination(65111U);
    msg.setDestinationEntity(59U);
    msg.value = 0.101974580914;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.555923148743);
    msg.setSource(35997U);
    msg.setSourceEntity(4U);
    msg.setDestination(12399U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0843059096666;
    msg.z_units = 11U;

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
    msg.setTimeStamp(0.419045675193);
    msg.setSource(64101U);
    msg.setSourceEntity(68U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(181U);
    msg.value = 0.606349769141;
    msg.speed_units = 225U;

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
    msg.setTimeStamp(0.0473743524298);
    msg.setSource(59378U);
    msg.setSourceEntity(239U);
    msg.setDestination(39878U);
    msg.setDestinationEntity(126U);
    msg.value = 0.614565976724;
    msg.speed_units = 72U;

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
    msg.setTimeStamp(0.212764401763);
    msg.setSource(34932U);
    msg.setSourceEntity(94U);
    msg.setDestination(18806U);
    msg.setDestinationEntity(140U);
    msg.value = 0.179791126563;
    msg.speed_units = 85U;

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
    msg.setTimeStamp(0.577136913795);
    msg.setSource(17181U);
    msg.setSourceEntity(150U);
    msg.setDestination(24800U);
    msg.setDestinationEntity(208U);
    msg.value = 0.162273957919;

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
    msg.setTimeStamp(0.346098659102);
    msg.setSource(7526U);
    msg.setSourceEntity(57U);
    msg.setDestination(65252U);
    msg.setDestinationEntity(68U);
    msg.value = 0.857959768888;

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
    msg.setTimeStamp(0.270141231397);
    msg.setSource(35795U);
    msg.setSourceEntity(236U);
    msg.setDestination(7905U);
    msg.setDestinationEntity(109U);
    msg.value = 0.0574123445615;

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
    msg.setTimeStamp(0.110155938973);
    msg.setSource(47027U);
    msg.setSourceEntity(166U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(92U);
    msg.value = 0.0912118475185;

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
    msg.setTimeStamp(0.44463458122);
    msg.setSource(48069U);
    msg.setSourceEntity(9U);
    msg.setDestination(36511U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0452934067885;

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
    msg.setTimeStamp(0.973745600972);
    msg.setSource(2911U);
    msg.setSourceEntity(72U);
    msg.setDestination(33877U);
    msg.setDestinationEntity(84U);
    msg.value = 0.467107694709;

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
    msg.setTimeStamp(0.243578999266);
    msg.setSource(6418U);
    msg.setSourceEntity(139U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(216U);
    msg.value = 0.831030416495;

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
    msg.setTimeStamp(0.399220885245);
    msg.setSource(60345U);
    msg.setSourceEntity(95U);
    msg.setDestination(56942U);
    msg.setDestinationEntity(8U);
    msg.value = 0.482760898691;

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
    msg.setTimeStamp(0.806615675988);
    msg.setSource(31148U);
    msg.setSourceEntity(132U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(140U);
    msg.value = 0.0047214061861;

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
    msg.setTimeStamp(0.562542140244);
    msg.setSource(64768U);
    msg.setSourceEntity(139U);
    msg.setDestination(30515U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 3934481517U;
    msg.start_lat = 0.972124599848;
    msg.start_lon = 0.126498100858;
    msg.start_z = 0.999513095205;
    msg.start_z_units = 6U;
    msg.end_lat = 0.0825441579334;
    msg.end_lon = 0.34396570572;
    msg.end_z = 0.10601294505;
    msg.end_z_units = 59U;
    msg.speed = 0.0698895921164;
    msg.speed_units = 65U;
    msg.lradius = 0.682062374328;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.22646587841);
    msg.setSource(38660U);
    msg.setSourceEntity(190U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(176U);
    msg.path_ref = 1870939517U;
    msg.start_lat = 0.442492181923;
    msg.start_lon = 0.668374400919;
    msg.start_z = 0.393964392128;
    msg.start_z_units = 170U;
    msg.end_lat = 0.456543804336;
    msg.end_lon = 0.281443516943;
    msg.end_z = 0.173226910053;
    msg.end_z_units = 56U;
    msg.speed = 0.605368958966;
    msg.speed_units = 122U;
    msg.lradius = 0.391028230336;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.780481177867);
    msg.setSource(51973U);
    msg.setSourceEntity(181U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 3157094374U;
    msg.start_lat = 0.941731719304;
    msg.start_lon = 0.975119657721;
    msg.start_z = 0.365565835742;
    msg.start_z_units = 7U;
    msg.end_lat = 0.961355764792;
    msg.end_lon = 0.591223731932;
    msg.end_z = 0.503776158349;
    msg.end_z_units = 178U;
    msg.speed = 0.864358988814;
    msg.speed_units = 115U;
    msg.lradius = 0.204362277011;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.849016902566);
    msg.setSource(54046U);
    msg.setSourceEntity(153U);
    msg.setDestination(59723U);
    msg.setDestinationEntity(15U);
    msg.x = 0.123126037132;
    msg.y = 0.253947933774;
    msg.z = 0.514886019525;
    msg.k = 0.714032531047;
    msg.m = 0.93529334074;
    msg.n = 0.348016400052;
    msg.flags = 33U;

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
    msg.setTimeStamp(0.897664057037);
    msg.setSource(22576U);
    msg.setSourceEntity(129U);
    msg.setDestination(11471U);
    msg.setDestinationEntity(16U);
    msg.x = 0.76663528198;
    msg.y = 0.153975290482;
    msg.z = 0.4345739796;
    msg.k = 0.15459265877;
    msg.m = 0.363312971426;
    msg.n = 0.534471543511;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.820875718408);
    msg.setSource(16237U);
    msg.setSourceEntity(188U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(152U);
    msg.x = 0.530615391185;
    msg.y = 0.2232593405;
    msg.z = 0.8065814294;
    msg.k = 0.571178082206;
    msg.m = 0.132108948678;
    msg.n = 0.975228501274;
    msg.flags = 79U;

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
    msg.setTimeStamp(0.0538592819515);
    msg.setSource(28546U);
    msg.setSourceEntity(224U);
    msg.setDestination(58536U);
    msg.setDestinationEntity(64U);
    msg.value = 0.0582553897315;

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
    msg.setTimeStamp(0.385702977019);
    msg.setSource(53735U);
    msg.setSourceEntity(186U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0472029250138;

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
    msg.setTimeStamp(0.845694065394);
    msg.setSource(1324U);
    msg.setSourceEntity(111U);
    msg.setDestination(7010U);
    msg.setDestinationEntity(177U);
    msg.value = 0.753927655138;

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
    msg.setTimeStamp(0.0841336941354);
    msg.setSource(37366U);
    msg.setSourceEntity(105U);
    msg.setDestination(8613U);
    msg.setDestinationEntity(145U);
    msg.u = 0.432739361272;
    msg.v = 0.384715391144;
    msg.w = 0.875822924421;
    msg.p = 0.660068218263;
    msg.q = 0.457622827864;
    msg.r = 0.103363317938;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.453445419296);
    msg.setSource(37833U);
    msg.setSourceEntity(53U);
    msg.setDestination(47841U);
    msg.setDestinationEntity(254U);
    msg.u = 0.352279937858;
    msg.v = 0.132787522357;
    msg.w = 0.680624064561;
    msg.p = 0.496296443507;
    msg.q = 0.17433181287;
    msg.r = 0.634404435901;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.639183635007);
    msg.setSource(60169U);
    msg.setSourceEntity(70U);
    msg.setDestination(19465U);
    msg.setDestinationEntity(206U);
    msg.u = 0.793388129509;
    msg.v = 0.11127772929;
    msg.w = 0.396194680317;
    msg.p = 0.668876019604;
    msg.q = 0.45166977386;
    msg.r = 0.827619865133;
    msg.flags = 10U;

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
    msg.setTimeStamp(0.0205470530735);
    msg.setSource(37287U);
    msg.setSourceEntity(28U);
    msg.setDestination(55575U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 696375788U;
    msg.start_lat = 0.792232745617;
    msg.start_lon = 0.0324003976708;
    msg.start_z = 0.247800762721;
    msg.start_z_units = 208U;
    msg.end_lat = 0.82711456293;
    msg.end_lon = 0.811171546443;
    msg.end_z = 0.681329893989;
    msg.end_z_units = 212U;
    msg.lradius = 0.0264886928111;
    msg.flags = 209U;
    msg.x = 0.744788787835;
    msg.y = 0.202050738896;
    msg.z = 0.296838593312;
    msg.vx = 0.226547149367;
    msg.vy = 0.743040878266;
    msg.vz = 0.543423952942;
    msg.course_error = 0.710393800278;
    msg.eta = 5954U;

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
    msg.setTimeStamp(0.15175138219);
    msg.setSource(20189U);
    msg.setSourceEntity(123U);
    msg.setDestination(47907U);
    msg.setDestinationEntity(203U);
    msg.path_ref = 1522336476U;
    msg.start_lat = 0.387325812521;
    msg.start_lon = 0.0220971147467;
    msg.start_z = 0.691096027792;
    msg.start_z_units = 128U;
    msg.end_lat = 0.833339434243;
    msg.end_lon = 0.192716560314;
    msg.end_z = 0.587257742063;
    msg.end_z_units = 13U;
    msg.lradius = 0.909283469176;
    msg.flags = 63U;
    msg.x = 0.181507292753;
    msg.y = 0.708618539886;
    msg.z = 0.861237475215;
    msg.vx = 0.228964820333;
    msg.vy = 0.275101407241;
    msg.vz = 0.698405866819;
    msg.course_error = 0.878162162755;
    msg.eta = 60774U;

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
    msg.setTimeStamp(0.683654792842);
    msg.setSource(37515U);
    msg.setSourceEntity(86U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(29U);
    msg.path_ref = 1626143372U;
    msg.start_lat = 0.864197892802;
    msg.start_lon = 0.750449696742;
    msg.start_z = 0.260802597218;
    msg.start_z_units = 101U;
    msg.end_lat = 0.12893856917;
    msg.end_lon = 0.0177030097462;
    msg.end_z = 0.690321847874;
    msg.end_z_units = 152U;
    msg.lradius = 0.119814923424;
    msg.flags = 101U;
    msg.x = 0.562241929499;
    msg.y = 0.867513844923;
    msg.z = 0.753967461227;
    msg.vx = 0.681730926569;
    msg.vy = 0.870316948554;
    msg.vz = 0.359717761718;
    msg.course_error = 0.284769790377;
    msg.eta = 45106U;

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
    msg.setTimeStamp(0.866217280472);
    msg.setSource(57173U);
    msg.setSourceEntity(127U);
    msg.setDestination(4487U);
    msg.setDestinationEntity(198U);
    msg.k = 0.969057257026;
    msg.m = 0.869741094126;
    msg.n = 0.650830222586;

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
    msg.setTimeStamp(0.926536317765);
    msg.setSource(57503U);
    msg.setSourceEntity(243U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(134U);
    msg.k = 0.355749925312;
    msg.m = 0.436319848872;
    msg.n = 0.3123710121;

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
    msg.setTimeStamp(0.284590196592);
    msg.setSource(2387U);
    msg.setSourceEntity(102U);
    msg.setDestination(34306U);
    msg.setDestinationEntity(5U);
    msg.k = 0.900771675879;
    msg.m = 0.345223248483;
    msg.n = 0.463019130207;

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
    msg.setTimeStamp(0.54926638543);
    msg.setSource(64756U);
    msg.setSourceEntity(100U);
    msg.setDestination(21707U);
    msg.setDestinationEntity(10U);
    msg.p = 0.754727264599;
    msg.i = 0.246688939868;
    msg.d = 0.422217523491;
    msg.a = 0.23146415301;

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
    msg.setTimeStamp(0.339650846251);
    msg.setSource(8406U);
    msg.setSourceEntity(138U);
    msg.setDestination(53860U);
    msg.setDestinationEntity(189U);
    msg.p = 0.794295397033;
    msg.i = 0.495328281422;
    msg.d = 0.00950750961795;
    msg.a = 0.589102774984;

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
    msg.setTimeStamp(0.151030039744);
    msg.setSource(47983U);
    msg.setSourceEntity(243U);
    msg.setDestination(24022U);
    msg.setDestinationEntity(77U);
    msg.p = 0.303407484557;
    msg.i = 0.95786812097;
    msg.d = 0.160256759089;
    msg.a = 0.625819441766;

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
    msg.setTimeStamp(0.219159591693);
    msg.setSource(6694U);
    msg.setSourceEntity(246U);
    msg.setDestination(41477U);
    msg.setDestinationEntity(105U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.617134615903);
    msg.setSource(25505U);
    msg.setSourceEntity(45U);
    msg.setDestination(50533U);
    msg.setDestinationEntity(108U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.417144767346);
    msg.setSource(45321U);
    msg.setSourceEntity(13U);
    msg.setDestination(895U);
    msg.setDestinationEntity(10U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.171548397265);
    msg.setSource(21253U);
    msg.setSourceEntity(42U);
    msg.setDestination(2223U);
    msg.setDestinationEntity(224U);
    msg.x = 0.85061623661;
    msg.y = 0.0384044067107;
    msg.z = 0.407478046088;
    msg.vx = 0.970167242444;
    msg.vy = 0.864973783998;
    msg.vz = 0.679937775986;
    msg.ax = 0.581246022841;
    msg.ay = 0.0773465432356;
    msg.az = 0.367105092491;
    msg.flags = 31975U;

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
    msg.setTimeStamp(0.680697311806);
    msg.setSource(12907U);
    msg.setSourceEntity(27U);
    msg.setDestination(55895U);
    msg.setDestinationEntity(164U);
    msg.x = 0.442350069891;
    msg.y = 0.536566865661;
    msg.z = 0.398758268809;
    msg.vx = 0.599246206053;
    msg.vy = 0.95642856334;
    msg.vz = 0.906864415425;
    msg.ax = 0.849930846465;
    msg.ay = 0.510063639752;
    msg.az = 0.332599146739;
    msg.flags = 16417U;

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
    msg.setTimeStamp(0.632149593612);
    msg.setSource(29227U);
    msg.setSourceEntity(18U);
    msg.setDestination(18582U);
    msg.setDestinationEntity(156U);
    msg.x = 0.738925066381;
    msg.y = 0.66376839424;
    msg.z = 0.820046477899;
    msg.vx = 0.882700256268;
    msg.vy = 0.596203524546;
    msg.vz = 0.0234817061223;
    msg.ax = 0.774713461087;
    msg.ay = 0.93662131519;
    msg.az = 0.292682098764;
    msg.flags = 48350U;

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
    IMC::Goto msg;
    msg.setTimeStamp(0.5183773309);
    msg.setSource(58057U);
    msg.setSourceEntity(233U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(196U);
    msg.timeout = 42224U;
    msg.lat = 0.105626285707;
    msg.lon = 0.395755650733;
    msg.z = 0.179853570187;
    msg.z_units = 142U;
    msg.speed = 0.376211703697;
    msg.speed_units = 91U;
    msg.roll = 0.546120152538;
    msg.pitch = 0.849929714119;
    msg.yaw = 0.986129745628;
    msg.custom.assign("AIGKIKBRXACWFLPLBHIXGNQBZXTTHPHSUDRPDJTFTGSHNGJKTIFIZJKFEYWJLTCGOMMRPLVUAGWMXLEAWIEJOYZCCBMLGMSYJUNIWKTJQJZOEINHEBZLHAXYNHYDOQPDWCYSOIXAQVGRBNQTXNMPGDVBQNFPSYDFNVLRELNXPCYQDAUXZUWOKOQVCOJFSYHMUSTDUZUKRDBV");

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
    msg.setTimeStamp(0.329458355999);
    msg.setSource(24803U);
    msg.setSourceEntity(162U);
    msg.setDestination(4471U);
    msg.setDestinationEntity(115U);
    msg.timeout = 2661U;
    msg.lat = 0.193130171939;
    msg.lon = 0.942896562896;
    msg.z = 0.284977811668;
    msg.z_units = 147U;
    msg.speed = 0.138295221313;
    msg.speed_units = 188U;
    msg.roll = 0.419287743308;
    msg.pitch = 0.380361851048;
    msg.yaw = 0.627231019636;
    msg.custom.assign("LJPSOICCXGALMACLOYDMKCGXTRBZRYIJUAFQIBLZTIKBFCYBSJEBMOGLTDWMARIUHDONIQYTMNLOLEUQNHMGBWBCAXVSEJUHEYKVXDAZZGARBMXFUONWDHWTPRPFUXKHXXMDWVDPFJHCSWRBXRGLPLRZS");

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
    msg.setTimeStamp(0.0406174738263);
    msg.setSource(2095U);
    msg.setSourceEntity(216U);
    msg.setDestination(28430U);
    msg.setDestinationEntity(220U);
    msg.timeout = 30233U;
    msg.lat = 0.484886672533;
    msg.lon = 0.847702641446;
    msg.z = 0.484580631089;
    msg.z_units = 39U;
    msg.speed = 0.926808310397;
    msg.speed_units = 31U;
    msg.roll = 0.820790431079;
    msg.pitch = 0.122344127632;
    msg.yaw = 0.843549222887;
    msg.custom.assign("GYUJHTZAMIBTCSCTUAOYKSCJZMFKCMQLNADSWTBHRFSVSQMDRZLQHNGLDBDEPWHDOLAQRTMNDZUIBBJHYWVRGODXIBGXFMDYKZHCNOZYPMPBLYOPIIZUFPCPWSTVQIBZPUUXLDFRFSUPLIGVNBHETKMYKEEYWXOQE");

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
    msg.setTimeStamp(0.805433822895);
    msg.setSource(7380U);
    msg.setSourceEntity(195U);
    msg.setDestination(49552U);
    msg.setDestinationEntity(214U);
    msg.timeout = 38998U;
    msg.lat = 0.150207330682;
    msg.lon = 0.574437777626;
    msg.z = 0.306924493467;
    msg.z_units = 121U;
    msg.speed = 0.507624287872;
    msg.speed_units = 16U;
    msg.duration = 48497U;
    msg.radius = 0.747834472493;
    msg.flags = 217U;
    msg.custom.assign("JMQLHOJMKWIHYHNJKDCBPXCXSWQDBWLBREAGYBCQQGXGTPDNLXEZQYKRHWORUOBU");

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
    msg.setTimeStamp(0.181345351666);
    msg.setSource(38619U);
    msg.setSourceEntity(125U);
    msg.setDestination(38274U);
    msg.setDestinationEntity(62U);
    msg.timeout = 31514U;
    msg.lat = 0.148742834234;
    msg.lon = 0.890157501765;
    msg.z = 0.116124488737;
    msg.z_units = 96U;
    msg.speed = 0.184408923602;
    msg.speed_units = 147U;
    msg.duration = 9197U;
    msg.radius = 0.19693476979;
    msg.flags = 104U;
    msg.custom.assign("UBABRBYROCVFOJCYNEHSKAMSWVKQSFZTOZYLQICVTNWURHEDFJOAHSLUSSCRIVJIJDVXYQPMRRAYIWTZESCZDEXKXGNXFPUXEMNDJWZ");

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
    msg.setTimeStamp(0.896095099122);
    msg.setSource(28238U);
    msg.setSourceEntity(187U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(147U);
    msg.timeout = 15017U;
    msg.lat = 0.612068223078;
    msg.lon = 0.82891588755;
    msg.z = 0.291656883062;
    msg.z_units = 30U;
    msg.speed = 0.0701216864122;
    msg.speed_units = 231U;
    msg.duration = 21418U;
    msg.radius = 0.560100477471;
    msg.flags = 32U;
    msg.custom.assign("ARQCUZDQTIE");

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
    msg.setTimeStamp(0.82256499043);
    msg.setSource(24466U);
    msg.setSourceEntity(235U);
    msg.setDestination(33869U);
    msg.setDestinationEntity(239U);
    msg.custom.assign("DSYARMNVDWRWZFTZULXMYHTCRSVOBHAWDPPPNAGULKOILWSTXXMPNWUJAJDNRAJCHBDABBPNLFFMZGHXLGUFWNKBCJSYJMBVGKYDSIZNJYEWMVNWDOQQIWSFRZIJDRKVWQZOHRIGQGHEPFQGUPZCOVLCVVIQZGHYQLXDUXASKXGBK");

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
    msg.setTimeStamp(0.718958604174);
    msg.setSource(16852U);
    msg.setSourceEntity(244U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(99U);
    msg.custom.assign("GIBWSQFKDEOVMGOPHWBWLAXMRUNRUKERUCUKCJSCEWJLYZNVCMOYCOHICLDPGQMVYIKPMQFCFBRANSXKPZPTISQEXTXLJOSJBVDIBZDOWYYFCYAIQHYSLXIANOHSZIFZPXKJQAGRMBVNRQAHBSIJJQWFLEKCEFZUBBHMKZDGNDVQOROTKDFVPXINTGUMAWVWNUWZODMFZVLWHTZHNDAXJKSDAGXGLPBALJFQTPTXMVTCGE");

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
    msg.setTimeStamp(0.752974297956);
    msg.setSource(32157U);
    msg.setSourceEntity(71U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(27U);
    msg.custom.assign("MBOQOHSEJDRQKZFBXFMDGLSSFPBZXJUJYQCNOEDWIYTKPZTDRVD");

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
    msg.setTimeStamp(0.721695015969);
    msg.setSource(6092U);
    msg.setSourceEntity(16U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(47U);
    msg.timeout = 63492U;
    msg.lat = 0.820919382722;
    msg.lon = 0.62536978498;
    msg.z = 0.35276453561;
    msg.z_units = 89U;
    msg.duration = 22936U;
    msg.speed = 0.262311396882;
    msg.speed_units = 183U;
    msg.type = 218U;
    msg.radius = 0.87362765907;
    msg.length = 0.500757902004;
    msg.bearing = 0.817036670449;
    msg.direction = 213U;
    msg.custom.assign("GGKZJDRJAKYJJTFLTRPKLHYMQHBNMIDONUAMYCBQJTBDKSKNCEFGVSWYSGGXVBSGXFZNTDTOXPKWLYXVUDIQTWNUNLOAVVORRBFZLPRICCZQDJRPCLWYSJFOULWWQXIGMUPBZWLXECIICATJHVDEMMURZPGOIRMNSITVPIBLNXYFASVHPUFSEXWMCHNQWKAPQOUDVQLKTGKFFEMZ");

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
    msg.setTimeStamp(0.558433801988);
    msg.setSource(4988U);
    msg.setSourceEntity(66U);
    msg.setDestination(28334U);
    msg.setDestinationEntity(148U);
    msg.timeout = 31475U;
    msg.lat = 0.516202371651;
    msg.lon = 0.541636487759;
    msg.z = 0.238046481051;
    msg.z_units = 24U;
    msg.duration = 38018U;
    msg.speed = 0.396573996214;
    msg.speed_units = 193U;
    msg.type = 213U;
    msg.radius = 0.952817228533;
    msg.length = 0.831519029634;
    msg.bearing = 0.868766531198;
    msg.direction = 12U;
    msg.custom.assign("HYPVGPXRZLJEFXAOIDGHXBYMWPMBMNMKZPRQWIAACOJWFKAONBPCEFWFTLZDESYNNAUFQDAWPVRKUTDUI");

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
    msg.setTimeStamp(0.581536326054);
    msg.setSource(14598U);
    msg.setSourceEntity(79U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(158U);
    msg.timeout = 19505U;
    msg.lat = 0.250522503825;
    msg.lon = 0.11960928637;
    msg.z = 0.569758514884;
    msg.z_units = 187U;
    msg.duration = 57976U;
    msg.speed = 0.265498347464;
    msg.speed_units = 184U;
    msg.type = 33U;
    msg.radius = 0.343760964783;
    msg.length = 0.377267022634;
    msg.bearing = 0.43594533905;
    msg.direction = 190U;
    msg.custom.assign("MHXCLLWJAOBXOHCJVWPEVZZQXBSRMHNBROPNQRWYXTYSZVFAGIOTTKGIYYNLJYXRMAEVPFEXLBDBSYNBNSUZSCYIXOTVQXJWQHKRIHUIAZQWGFIFPKPHDVADEYMWUOFECONNBXHMKDNWVUDAEEUWSHIRVJLSAQEZJAKZJGOCGMMFTUIRMYLEGCXLSTUQUHCFVAGTPFJKBYPJDMCINDFMOURSGRPKDQHWNQAT");

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
    msg.setTimeStamp(0.920688667683);
    msg.setSource(22850U);
    msg.setSourceEntity(114U);
    msg.setDestination(43110U);
    msg.setDestinationEntity(219U);
    msg.duration = 3031U;
    msg.custom.assign("GPIEMFWYMEXMKVDAHVWZLCCJIEUVKTUFJZPOLJKGZOTGDMIYBHIYYFDJSXMINFBHUJOXLUWCOALRCEZ");

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
    msg.setTimeStamp(0.968405646802);
    msg.setSource(49140U);
    msg.setSourceEntity(193U);
    msg.setDestination(65138U);
    msg.setDestinationEntity(57U);
    msg.duration = 25609U;
    msg.custom.assign("YUDDPFDNMBYPZKUZRPOXUMJBNZEFOJNTCIVASTQEDXGCIXZRJVFTIRNMHLXCALGWAPGLPJVVRJQHOCTRBCMYIVIWNBHFPPHEUPIURNZHEWCMLBFXUTKGUGJOXQVUSXTKAONAIQYECKLJWAGSOUAGSQSWROIQWRLZWEVHYFSTAJBKHPRHORWVEVNOJJDLUMFQTIKPXKZMLHEFWNBLSXOEYXILQCEQSMBDVAYGDYY");

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
    msg.setTimeStamp(0.242372607915);
    msg.setSource(59278U);
    msg.setSourceEntity(163U);
    msg.setDestination(58614U);
    msg.setDestinationEntity(100U);
    msg.duration = 39881U;
    msg.custom.assign("ZQCQYEYHHNSTVDNGRFBVDPXFZOUMWHVFKJYDIITARMLLZIEBRDHLKDGICEMBVULPQWGMCSADKZXQPFQSTYRFNMNSNAFOKVSKVQESPEVCUEGTLPXWHAFWRRQGIIUYHLSBFHRMYZJBLZIQNZGJUJAYVDESDLKOLCXBJJC");

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
    msg.setTimeStamp(0.897223644456);
    msg.setSource(43564U);
    msg.setSourceEntity(234U);
    msg.setDestination(9060U);
    msg.setDestinationEntity(140U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.803767213663;
    tmp_msg_0.z_units = 90U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38066U;
    msg.custom.assign("UAUBFDRHPZWGHNFAQELZOCEZJMRKLNJHDBBBZKSVDPEGNQE");

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
    msg.setTimeStamp(0.65331212596);
    msg.setSource(11021U);
    msg.setSourceEntity(209U);
    msg.setDestination(18837U);
    msg.setDestinationEntity(158U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0138121662144;
    tmp_msg_0.speed_units = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17266U;
    msg.custom.assign("OYNRRAIDUAGOGJXZAWLPTSVAKFOOMBMYXBVZSDHRVQNYQJHNMTBEGSIKWFZYCFIHCXEHSWLWIDNIMUBUZQGCCLPTTEGCRNXJWVSRLUHYPIPKEZFUJBJAMIQMHQYCDRLRDTZEWIXRRRFTSJNNHLFELXWXATNZVEVFBUENTSPUDLKNDF");

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
    msg.setTimeStamp(0.643617217487);
    msg.setSource(11786U);
    msg.setSourceEntity(203U);
    msg.setDestination(13312U);
    msg.setDestinationEntity(18U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.950920106204;
    tmp_msg_0.z_units = 191U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58419U;
    msg.custom.assign("IAFJKONIVSJUTSTADPIMXTZKLODUZSPIQIFLMZMVKEDWFQVKUXWHUGKBOREAYHIGMECNBLOYIJECNDGORAPHFBNXMSZGLYGYGLUITZFEWUCKWCRJUBQROEZXNLOQLDKRJHPLLQZXEJTADYXTFPAYFATYQHJYDESVBUBQFHILYKPGKBCVHCNXWPROMNAMCNTSEGAFXHRXWBMMSAZORSUVOPCTYQ");

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
    msg.setTimeStamp(0.560784293241);
    msg.setSource(31361U);
    msg.setSourceEntity(35U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(217U);
    msg.timeout = 8125U;
    msg.lat = 0.23992708277;
    msg.lon = 0.827201866675;
    msg.z = 0.0201591821605;
    msg.z_units = 222U;
    msg.speed = 0.901471522687;
    msg.speed_units = 95U;
    msg.bearing = 0.0745511911198;
    msg.cross_angle = 0.628579306258;
    msg.width = 0.0386697576733;
    msg.length = 0.776978620198;
    msg.hstep = 0.217764215269;
    msg.coff = 147U;
    msg.alternation = 153U;
    msg.flags = 47U;
    msg.custom.assign("NSSPIHCYSIJPNGMTJZDRVPHKXBDBZMANKXPPVQMQXYNOVLTEYQIODZVGHDAMMUECKEROUYXMGOVAAUYKBQLVGIRRBRWCEZLBDJINHKPCRWWVXFGHNECDLASMZUOKWSQZYFCIAQYWBIRXGLSQ");

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
    msg.setTimeStamp(0.63564071107);
    msg.setSource(24479U);
    msg.setSourceEntity(45U);
    msg.setDestination(3746U);
    msg.setDestinationEntity(77U);
    msg.timeout = 4593U;
    msg.lat = 0.36866661725;
    msg.lon = 0.556489275491;
    msg.z = 0.502219879359;
    msg.z_units = 185U;
    msg.speed = 0.391489117752;
    msg.speed_units = 136U;
    msg.bearing = 0.194847692456;
    msg.cross_angle = 0.0346187081636;
    msg.width = 0.232288548379;
    msg.length = 0.557641937104;
    msg.hstep = 0.123812178244;
    msg.coff = 4U;
    msg.alternation = 208U;
    msg.flags = 205U;
    msg.custom.assign("XFTXBWNQUXHCNQHHBLFVZBGCOSJAVLLEMNUDKIUWVLARXDMOSUIJMKOHIIRTYQOPCJJAYZELTPTLSRRBGAUWKKXGTKRORCQSVULAMRXANVKJNQROVPNEMPBEEDDDVZPWFSDNIBOGNHOYXG");

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
    msg.setTimeStamp(0.197041260024);
    msg.setSource(42808U);
    msg.setSourceEntity(137U);
    msg.setDestination(24899U);
    msg.setDestinationEntity(220U);
    msg.timeout = 61580U;
    msg.lat = 0.748217454211;
    msg.lon = 0.0320268143452;
    msg.z = 0.428654652248;
    msg.z_units = 36U;
    msg.speed = 0.728772257172;
    msg.speed_units = 187U;
    msg.bearing = 0.882266655693;
    msg.cross_angle = 0.638935150042;
    msg.width = 0.47477700477;
    msg.length = 0.799862091501;
    msg.hstep = 0.601364408528;
    msg.coff = 113U;
    msg.alternation = 150U;
    msg.flags = 27U;
    msg.custom.assign("HUPWYHORMLFQIBTQFUPQTFDCNWGEMZXRJADJXNMAKWYSGFFCPZRORUSNBFXYMEPYIJLGDJVLADKVQOKCDZWUTFLWGEWLHJVKQODMCITLQOCXETMUQZLLLSTFYVWHVESRAIEOWUDLZCRKSHKBYIHCSSOYHQEGNKIIVRVSHITRSKONPB");

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
    msg.setTimeStamp(0.780031988812);
    msg.setSource(10215U);
    msg.setSourceEntity(220U);
    msg.setDestination(20184U);
    msg.setDestinationEntity(241U);
    msg.timeout = 31335U;
    msg.lat = 0.580523987554;
    msg.lon = 0.406081435053;
    msg.z = 0.445040233537;
    msg.z_units = 151U;
    msg.speed = 0.0433105777664;
    msg.speed_units = 251U;
    msg.custom.assign("SNGXWJJJGJY");

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
    msg.setTimeStamp(0.0553993474644);
    msg.setSource(56707U);
    msg.setSourceEntity(52U);
    msg.setDestination(64715U);
    msg.setDestinationEntity(253U);
    msg.timeout = 5758U;
    msg.lat = 0.837053700147;
    msg.lon = 0.89218070977;
    msg.z = 0.728363682979;
    msg.z_units = 29U;
    msg.speed = 0.691667992082;
    msg.speed_units = 65U;
    msg.custom.assign("KSBCNNGTBWNHA");

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
    msg.setTimeStamp(0.57189302482);
    msg.setSource(44394U);
    msg.setSourceEntity(13U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(207U);
    msg.timeout = 9445U;
    msg.lat = 0.956161958391;
    msg.lon = 0.736426660543;
    msg.z = 0.622374357078;
    msg.z_units = 69U;
    msg.speed = 0.0784000401154;
    msg.speed_units = 208U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.487141774124;
    tmp_msg_0.y = 0.748979950941;
    tmp_msg_0.z = 0.401464358911;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UXJAOFXSPBFXNDHFPZCKSMYTGAIOMAIQVCCMRKSGWMLKLIMXCPJRCBUEVAAKVTPWQCTSBLHXQJSIWVRXPVSHUYJVQFTZGYEPCGFTFZSDXKOH");

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
    msg.setTimeStamp(0.844177412786);
    msg.setSource(21561U);
    msg.setSourceEntity(173U);
    msg.setDestination(22894U);
    msg.setDestinationEntity(94U);
    msg.x = 0.897896326359;
    msg.y = 0.65025731603;
    msg.z = 0.500625485823;

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
    msg.setTimeStamp(0.265056813831);
    msg.setSource(48117U);
    msg.setSourceEntity(216U);
    msg.setDestination(39176U);
    msg.setDestinationEntity(155U);
    msg.x = 0.481621470083;
    msg.y = 0.277576034206;
    msg.z = 0.494932434552;

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
    msg.setTimeStamp(0.00970171028564);
    msg.setSource(43897U);
    msg.setSourceEntity(247U);
    msg.setDestination(2362U);
    msg.setDestinationEntity(76U);
    msg.x = 0.871416989054;
    msg.y = 0.110900463504;
    msg.z = 0.118887428465;

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
    msg.setTimeStamp(0.186143988084);
    msg.setSource(1014U);
    msg.setSourceEntity(112U);
    msg.setDestination(53103U);
    msg.setDestinationEntity(141U);
    msg.timeout = 49565U;
    msg.lat = 0.0275856733681;
    msg.lon = 0.482982663885;
    msg.z = 0.241306450619;
    msg.z_units = 61U;
    msg.amplitude = 0.794803681099;
    msg.pitch = 0.0996945152441;
    msg.speed = 0.893119916343;
    msg.speed_units = 213U;
    msg.custom.assign("XCSINCMJJESQAYSZGSDCWCMEKJBRLQINHPOKFIXYCGOLGVSQLPSSTYMRMPYEGRJFTFBXUJYNRXDHLDRODGRPTCHJNNGAJBWEWFTQHZGSHFLAUKVAXMHNWBVILUKUJTEQRIXEXKGRIXZIVEOAJZOMHWMCGOGOZVITDCFNQLEQVBZMFMUPRTKUYDYWFWEYDAAZXBLBJTBAOZSZWUTRIVOENQNXUUKMKQQF");

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
    msg.setTimeStamp(0.0977927783966);
    msg.setSource(11031U);
    msg.setSourceEntity(195U);
    msg.setDestination(9332U);
    msg.setDestinationEntity(91U);
    msg.timeout = 51344U;
    msg.lat = 0.0931183213176;
    msg.lon = 0.922456292992;
    msg.z = 0.460262028271;
    msg.z_units = 75U;
    msg.amplitude = 0.343803282912;
    msg.pitch = 0.517653250329;
    msg.speed = 0.543957449098;
    msg.speed_units = 33U;
    msg.custom.assign("LRVFPEXYOHAFCLMPKNMUJQLBHZHXCSGTEPMBNIOQPXMSDYQXKXUSHIACVSQNLNKDCBEIZAHSXOPRJXHGWYAPWGKADROZUGJQMCUTKSMOIJATITDOQWLYZRPICGGGPHBFYSCPHEVZZWBRAHDURYATWBGWVIVFJZUMEWXGDARIJENZF");

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
    msg.setTimeStamp(0.485032504729);
    msg.setSource(38551U);
    msg.setSourceEntity(238U);
    msg.setDestination(62080U);
    msg.setDestinationEntity(105U);
    msg.timeout = 18088U;
    msg.lat = 0.395473338177;
    msg.lon = 0.485018993119;
    msg.z = 0.177894366818;
    msg.z_units = 146U;
    msg.amplitude = 0.493148164826;
    msg.pitch = 0.567932228288;
    msg.speed = 0.379147460699;
    msg.speed_units = 175U;
    msg.custom.assign("UQSLYKIDGYMNWEAWLYGOCGQNQBENTGEAEBNKMZZKKVDIMXQOHTSIWNQNFLLHUEKTLHVFJCIOIZWCZAQRLKDJZMTDSFRKITFXAQSJCRPDXNGSSJYRCTZXXTRKYVHEHXUAGEZLUJICMPLSSPPZJMPBAZUQHZWWFRAWYHDKBSQR");

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
    msg.setTimeStamp(0.875346093727);
    msg.setSource(44190U);
    msg.setSourceEntity(156U);
    msg.setDestination(21677U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.956737810455);
    msg.setSource(8744U);
    msg.setSourceEntity(208U);
    msg.setDestination(3217U);
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
    msg.setTimeStamp(0.840717215233);
    msg.setSource(45940U);
    msg.setSourceEntity(140U);
    msg.setDestination(29063U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.632167380853);
    msg.setSource(18636U);
    msg.setSourceEntity(246U);
    msg.setDestination(25377U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.604822367298;
    msg.lon = 0.670724547932;
    msg.z = 0.190302397122;
    msg.z_units = 198U;
    msg.radius = 0.559742291457;
    msg.duration = 15997U;
    msg.speed = 0.435599588737;
    msg.speed_units = 40U;
    msg.custom.assign("FCXRNCTSJPWXDRAFMRFUDYERIQVIRTGSUPPQHTYVOFYGVKCGANYYDCGYSIZOBVQIDNNRQJLEKFHYIFDMDFIUXCZDVHNTESJCOHQE");

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
    msg.setTimeStamp(0.708855923731);
    msg.setSource(22652U);
    msg.setSourceEntity(136U);
    msg.setDestination(27057U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.686903963168;
    msg.lon = 0.950058418566;
    msg.z = 0.542121077905;
    msg.z_units = 94U;
    msg.radius = 0.167891245478;
    msg.duration = 35075U;
    msg.speed = 0.447862508535;
    msg.speed_units = 56U;
    msg.custom.assign("GGACXHRHGITAMSMWNBAEMDNUJWJHFHNUXPHUOYKQIUXKDZSXU");

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
    msg.setTimeStamp(0.487741778034);
    msg.setSource(18097U);
    msg.setSourceEntity(146U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.907867751921;
    msg.lon = 0.0811840807785;
    msg.z = 0.185744465883;
    msg.z_units = 46U;
    msg.radius = 0.672446438095;
    msg.duration = 13534U;
    msg.speed = 0.00684273776863;
    msg.speed_units = 195U;
    msg.custom.assign("ZCBNBDIFDAKRWBOPCGJUCRODKHXEUUIUZHQDPALAHILCMPAQRHIIMZVGXQAXNGAIVJKEPZRWTMNWIFUOKVCTTDEDODFYZYXDTCQVCBFRPXNMNKYXBUJRBCQBGWMWKQIURSSBSWAIPYJLZXHLOVJPSFXFMJZSGKQJUSMLPOAAWYYZJORNVIORGQNHXOGQETNUBYVJRSTSTTSCZKBZWYTGWETXJFHWUFCVEMLEHPGFQSVEEEMLMYOYNPFGL");

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
    msg.setTimeStamp(0.0536773321924);
    msg.setSource(9401U);
    msg.setSourceEntity(153U);
    msg.setDestination(63867U);
    msg.setDestinationEntity(190U);
    msg.timeout = 47471U;
    msg.flags = 249U;
    msg.lat = 0.497776923222;
    msg.lon = 0.816295244409;
    msg.start_z = 0.484427636712;
    msg.start_z_units = 30U;
    msg.end_z = 0.520485856416;
    msg.end_z_units = 170U;
    msg.radius = 0.534906125724;
    msg.speed = 0.147165195908;
    msg.speed_units = 40U;
    msg.custom.assign("HKJPLQFPAJIPMPDSPDCLBNDOFGFHXBYZASPEPANUKXWYEEJZDAW");

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
    msg.setTimeStamp(0.171598032169);
    msg.setSource(22681U);
    msg.setSourceEntity(137U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(192U);
    msg.timeout = 16438U;
    msg.flags = 145U;
    msg.lat = 0.12026235173;
    msg.lon = 0.567166702851;
    msg.start_z = 0.542679193578;
    msg.start_z_units = 132U;
    msg.end_z = 0.723148955813;
    msg.end_z_units = 85U;
    msg.radius = 0.735725448244;
    msg.speed = 0.945254785985;
    msg.speed_units = 153U;
    msg.custom.assign("SPJKEBRNVIGLWEBRHYZCOWXGIBAXGVGRPDYJLBXWHJPTBLLGQRFPMWUUSLPKIPWICSYNLQDUFWKHYPX");

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
    msg.setTimeStamp(0.590594562644);
    msg.setSource(15037U);
    msg.setSourceEntity(50U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(38U);
    msg.timeout = 22254U;
    msg.flags = 217U;
    msg.lat = 0.758838385367;
    msg.lon = 0.563595026055;
    msg.start_z = 0.346180511036;
    msg.start_z_units = 238U;
    msg.end_z = 0.125286646663;
    msg.end_z_units = 243U;
    msg.radius = 0.195161102696;
    msg.speed = 0.864957726764;
    msg.speed_units = 205U;
    msg.custom.assign("VBSUTCITZJQBKKXSXBPFMXYOLSYUMWDXEFEPEJLYKTKIHRAGWOCHCYCQBUFXWYBZUINAXDFKOLNWAGGZVZJXOHSTQRMQJVPJNWLVOITTENMDAAYRUVUYVWXQNSKQLUCHXJSKWTVGYJIGEEIIRYABDMNNCRWSDKCBHSMDWALMDBNHEJFZSNJZHZIFOGYGAZQPUCROABQR");

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
    msg.setTimeStamp(0.538417782213);
    msg.setSource(2193U);
    msg.setSourceEntity(109U);
    msg.setDestination(27644U);
    msg.setDestinationEntity(177U);
    msg.timeout = 54176U;
    msg.lat = 0.417298345984;
    msg.lon = 0.584101130866;
    msg.z = 0.543251637317;
    msg.z_units = 9U;
    msg.speed = 0.0645225737385;
    msg.speed_units = 102U;
    msg.custom.assign("CGRGHISXWRLZKNSFYRDVUTPOUHQGRHDCYHOVYLAJAWNZHB");

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
    msg.setTimeStamp(0.147983569125);
    msg.setSource(5822U);
    msg.setSourceEntity(70U);
    msg.setDestination(35113U);
    msg.setDestinationEntity(27U);
    msg.timeout = 28299U;
    msg.lat = 0.366031977794;
    msg.lon = 0.472508754368;
    msg.z = 0.321207755917;
    msg.z_units = 94U;
    msg.speed = 0.246283595907;
    msg.speed_units = 151U;
    msg.custom.assign("WRRCPXHIWKSBOXUHELGGBKWEFBBJSROVDQGYZHEMRXMIVEDLFLJHEUCXODEPTWQLMAYVRNMSSXABIYPUJBQMYMWIJQYECDGQHCXSTKYGPLDYUWUNTKUVPAMOPKZGAPNDDITUNRFOTLMKYVRJQZEAOIXSFTVCFROFKWQOPKTGESTLLJRFH");

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
    msg.setTimeStamp(0.262118856215);
    msg.setSource(19161U);
    msg.setSourceEntity(49U);
    msg.setDestination(46345U);
    msg.setDestinationEntity(127U);
    msg.timeout = 28240U;
    msg.lat = 0.22069890812;
    msg.lon = 0.895059685847;
    msg.z = 0.220918313308;
    msg.z_units = 74U;
    msg.speed = 0.258947377707;
    msg.speed_units = 101U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.857892800696;
    tmp_msg_0.y = 0.320876544618;
    tmp_msg_0.z = 0.235956933182;
    tmp_msg_0.t = 0.862921402785;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AKCESPSPHFMYDBSAHBGCAOJDIHIRLBHTSQSNFAQIRIGE");

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
    msg.setTimeStamp(0.666182279538);
    msg.setSource(50220U);
    msg.setSourceEntity(92U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(165U);
    msg.x = 0.419106837404;
    msg.y = 0.347091084179;
    msg.z = 0.406667560555;
    msg.t = 0.0607215064455;

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
    msg.setTimeStamp(0.903703013702);
    msg.setSource(60299U);
    msg.setSourceEntity(49U);
    msg.setDestination(29722U);
    msg.setDestinationEntity(125U);
    msg.x = 0.608726034243;
    msg.y = 0.718035258492;
    msg.z = 0.459226957296;
    msg.t = 0.279584755593;

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
    msg.setTimeStamp(0.177772950596);
    msg.setSource(57632U);
    msg.setSourceEntity(225U);
    msg.setDestination(14863U);
    msg.setDestinationEntity(8U);
    msg.x = 0.879964273697;
    msg.y = 0.884468818381;
    msg.z = 0.930389703588;
    msg.t = 0.369116392681;

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
    msg.setTimeStamp(0.490418338998);
    msg.setSource(25749U);
    msg.setSourceEntity(214U);
    msg.setDestination(16256U);
    msg.setDestinationEntity(149U);
    msg.timeout = 62519U;
    msg.name.assign("NVKITMZCDOOAVTEZNJGCBSBQMBXJXSBWGFLRMPRSUBJBBWGJYBTLAERGFDBKQWHCDIHUXAFXDZUEYQQSFPYTTQFNPEIDDXIFUVYXYHMJVKTYIFCIKOPILRSAVZOSEAJVQMMCIOEXQLODKAPSUKMLDPRHRKKLGNIFNLNRDHWXRGKCXSRUOSHMPOZAVJMCYNLTYWORNUCXZVVHTZJAQFQGTUBZQNHTZWEWGLLZEFUSKNAHJYWPGYUWEACDW");
    msg.custom.assign("UHVXDZXDISQVUDLTCXKSEWVEJZOQUYWDQNJGKDXETOAKPHQPFWSNHKZPZOLQOAHMJURRMCLVSMWLWHXFGGRVBFZQCIFUWVXYHPJBSLUATWNZBZNCNRDJYVGFMSIEADEKRWFBUOKALOHLUCACTFRTJBBPHMXODEEYEWCUPPLYTQOBXFHPBRZAVNYEAWIJSNJRZFKUYIRGMMKIQSRJGIOYITDHYAOXVTABGPVLCTGBEDMTGQFKLQIIKZSN");

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
    msg.setTimeStamp(0.165841487383);
    msg.setSource(31050U);
    msg.setSourceEntity(141U);
    msg.setDestination(34112U);
    msg.setDestinationEntity(99U);
    msg.timeout = 60433U;
    msg.name.assign("SWPEIETFKDLZTUPZTVAELWJQGUZFZLYRXYIDUASXUMHQNPGWIFAXADTUGMJRDAFNWORLYOOGNWYZLTIHLGDJEBWDHEOMUUCBCOMQVIIFVEOBONITGDCCKBCSBJHMWROWWJKXUEPLHYFSHSGAWICRTYHQKQGKCMSFSPPREQLBVVFAHPBADMTFKDKT");
    msg.custom.assign("FTXUEMRTSPGJFDEIEQEQTNZWVHXGXBANCHMFQXTWBIXOPZKUQVYCJHREWCYNLGSNHFASAVXDMYJVJOFLGFQKHWVWUEKOCPRPRHWIAMOKQRUZIXABPSFTPAGZEQKSMPOYTCHLTROMLETVJXCOGLTII");

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
    msg.setTimeStamp(0.0794741244967);
    msg.setSource(54526U);
    msg.setSourceEntity(156U);
    msg.setDestination(53287U);
    msg.setDestinationEntity(173U);
    msg.timeout = 59679U;
    msg.name.assign("NLRFDHGXPMUQOLWKUGYWTQFVVASRHCHIJSDZLOWGBBGDMHTKLDMMFJBQENGDGKREIQJCKRRNEYDTFICEFPKVORVNQYOLVXCOCEGNQONXYKCZHSEHSUYEHUSFZHAZWEAAWPMDDZACUBELSOIIPPSMDEKZTJNBWVPJOMQFDNMKRLSIIBXVUTPMOXTUKJXPFLNQJXTFTXQIXABICBYBJYAGTYOBPWYSRWUCLWALHJZFPXUIWCAUYQ");
    msg.custom.assign("ZSLOQZXXWKJVBFQAYLQOSOUYEPBYCKNTPHUDEZLZIPGODVWJEXIQBNTALWLODTTYZMXYNZEITKZPFEXTVBWCYPFZAFQEQDJERPQUCSDOFISUOJ");

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
    msg.setTimeStamp(0.95381936435);
    msg.setSource(61625U);
    msg.setSourceEntity(77U);
    msg.setDestination(18324U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.94348238982;
    msg.lon = 0.798751818597;
    msg.z = 0.340015283342;
    msg.z_units = 13U;
    msg.speed = 0.0552707800391;
    msg.speed_units = 187U;
    msg.start_time = 0.193216117179;
    msg.custom.assign("LNBHNZSJMUMGYKHNQWRFUTYSWGSZMLBDZZOBWSFVGRSQUCDJDHOVEOBOLLIOSWFLSJZMTRLIDLFTUSVMBPVQATAQMOYPIHHCMBNKHRVIDZTGWQFXIGNUU");

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
    msg.setTimeStamp(0.0814757124342);
    msg.setSource(28146U);
    msg.setSourceEntity(14U);
    msg.setDestination(6244U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.10344291843;
    msg.lon = 0.927491585043;
    msg.z = 0.972728978863;
    msg.z_units = 42U;
    msg.speed = 0.624124405039;
    msg.speed_units = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64664U;
    tmp_msg_0.off_x = 0.409151559181;
    tmp_msg_0.off_y = 0.880145573486;
    tmp_msg_0.off_z = 0.474609796886;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.664412841166;
    msg.custom.assign("TPNYEBNKCHGXMOEIUFZRSCIARNOMGENQZXFRT");

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
    msg.setTimeStamp(0.786718075034);
    msg.setSource(3870U);
    msg.setSourceEntity(51U);
    msg.setDestination(57528U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.849313729389;
    msg.lon = 0.0548902254815;
    msg.z = 0.340623844375;
    msg.z_units = 89U;
    msg.speed = 0.822871650353;
    msg.speed_units = 206U;
    msg.start_time = 0.700632203545;
    msg.custom.assign("XYSWRAELDIVWMBUUIQHZOJFEZHFCADHZKCJPZGWOMCMEIUSWUWFDLVGRAZDZPKIHEZMNBGRSIAFBZCMGXFOIOVWWRWTSCQIYGKVXXJCPLPFSDJYFVLYQDMPOYJAPXDLIBQEXAQBAWKCNHDMGHIJGAUFBNVEURQNOSRAHRHKSTTRFLVHULQNPXVFMLECTGOPSDYXYBUJNYMIYKEGZRWTGZOTBBKTESJ");

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
    msg.setTimeStamp(0.866272970063);
    msg.setSource(33985U);
    msg.setSourceEntity(72U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(110U);
    msg.vid = 39374U;
    msg.off_x = 0.418127375737;
    msg.off_y = 0.0579278141725;
    msg.off_z = 0.42054069825;

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
    msg.setTimeStamp(0.259939993292);
    msg.setSource(52698U);
    msg.setSourceEntity(102U);
    msg.setDestination(44068U);
    msg.setDestinationEntity(203U);
    msg.vid = 45414U;
    msg.off_x = 0.0297376362681;
    msg.off_y = 0.415570035852;
    msg.off_z = 0.0544690191615;

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
    msg.setTimeStamp(0.96716852812);
    msg.setSource(13428U);
    msg.setSourceEntity(200U);
    msg.setDestination(16703U);
    msg.setDestinationEntity(155U);
    msg.vid = 51075U;
    msg.off_x = 0.680739118594;
    msg.off_y = 0.195024034856;
    msg.off_z = 0.532844540818;

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
    msg.setTimeStamp(0.618624457374);
    msg.setSource(47611U);
    msg.setSourceEntity(162U);
    msg.setDestination(11327U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.0137337538764);
    msg.setSource(9291U);
    msg.setSourceEntity(118U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.838089189065);
    msg.setSource(26209U);
    msg.setSourceEntity(231U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.09858659984);
    msg.setSource(24201U);
    msg.setSourceEntity(104U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(149U);
    msg.mid = 24463U;

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
    msg.setTimeStamp(0.413533238796);
    msg.setSource(50892U);
    msg.setSourceEntity(134U);
    msg.setDestination(62778U);
    msg.setDestinationEntity(80U);
    msg.mid = 21639U;

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
    msg.setTimeStamp(0.874683401501);
    msg.setSource(12418U);
    msg.setSourceEntity(149U);
    msg.setDestination(2509U);
    msg.setDestinationEntity(170U);
    msg.mid = 7493U;

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
    msg.setTimeStamp(0.345325973867);
    msg.setSource(19297U);
    msg.setSourceEntity(127U);
    msg.setDestination(30875U);
    msg.setDestinationEntity(135U);
    msg.state = 138U;
    msg.eta = 38999U;
    msg.info.assign("NLXRFVUYHYXGHMTEUVCKJIGVTPTZQSLHLEXEVAPPZQFXAMFZCZSDOADRDYIZMBBSTMEAYBUZFVBQJGPKC");

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
    msg.setTimeStamp(0.932698743637);
    msg.setSource(42798U);
    msg.setSourceEntity(187U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(207U);
    msg.state = 48U;
    msg.eta = 24019U;
    msg.info.assign("OSKMFBZOFQFYPJMEFUFHJRGVOCEBGUYSGYLPPIUNBPBCPT");

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
    msg.setTimeStamp(0.98985808997);
    msg.setSource(14222U);
    msg.setSourceEntity(58U);
    msg.setDestination(34576U);
    msg.setDestinationEntity(235U);
    msg.state = 38U;
    msg.eta = 23254U;
    msg.info.assign("DQSABSAZXATINDPLXWCSWTDLYGLDXGKHVRHFUAGURXMFBUXUNKJPGKTHCJZTGEILWIELKVPSSPXYENYKYVLFIIRQDRDWQDEHJTFHCIMYDYMUPFXBBZJ");

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
    msg.setTimeStamp(0.214348138391);
    msg.setSource(29765U);
    msg.setSourceEntity(150U);
    msg.setDestination(4766U);
    msg.setDestinationEntity(53U);
    msg.system = 23467U;
    msg.duration = 15359U;
    msg.speed = 0.326342826829;
    msg.speed_units = 84U;
    msg.x = 0.37704122065;
    msg.y = 0.971590485555;
    msg.z = 0.423184491491;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.384245254986);
    msg.setSource(41782U);
    msg.setSourceEntity(169U);
    msg.setDestination(26788U);
    msg.setDestinationEntity(104U);
    msg.system = 35274U;
    msg.duration = 42752U;
    msg.speed = 0.145702925496;
    msg.speed_units = 70U;
    msg.x = 0.551570001594;
    msg.y = 0.761771045046;
    msg.z = 0.532754874304;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.17536424484);
    msg.setSource(7651U);
    msg.setSourceEntity(106U);
    msg.setDestination(48184U);
    msg.setDestinationEntity(217U);
    msg.system = 50704U;
    msg.duration = 22130U;
    msg.speed = 0.773834532477;
    msg.speed_units = 46U;
    msg.x = 0.321761988438;
    msg.y = 0.938289610654;
    msg.z = 0.751250063885;
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
    msg.setTimeStamp(0.15433096784);
    msg.setSource(16631U);
    msg.setSourceEntity(65U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.133298026686;
    msg.lon = 0.294825451758;
    msg.speed = 0.392642299284;
    msg.speed_units = 203U;
    msg.duration = 23636U;
    msg.sys_a = 17830U;
    msg.sys_b = 1827U;
    msg.move_threshold = 0.170009911541;

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
    msg.setTimeStamp(0.246310502647);
    msg.setSource(4896U);
    msg.setSourceEntity(177U);
    msg.setDestination(64133U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.921155924957;
    msg.lon = 0.249537958186;
    msg.speed = 0.164020496611;
    msg.speed_units = 152U;
    msg.duration = 21284U;
    msg.sys_a = 12519U;
    msg.sys_b = 14274U;
    msg.move_threshold = 0.851185311715;

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
    msg.setTimeStamp(0.416656997359);
    msg.setSource(24236U);
    msg.setSourceEntity(184U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.349903843028;
    msg.lon = 0.201956335415;
    msg.speed = 0.34069578436;
    msg.speed_units = 98U;
    msg.duration = 30698U;
    msg.sys_a = 41433U;
    msg.sys_b = 12479U;
    msg.move_threshold = 0.546537864484;

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
    msg.setTimeStamp(0.331447352022);
    msg.setSource(28986U);
    msg.setSourceEntity(231U);
    msg.setDestination(18126U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.121996970673;
    msg.lon = 0.957661476508;
    msg.z = 0.875013872777;
    msg.z_units = 163U;
    msg.speed = 0.736932756332;
    msg.speed_units = 232U;
    msg.custom.assign("MOXHRBCPVHPNJWPGATUGRGCSCNUPMVSMKQDCZVVSCFXIKZZCPBJTXJXYXVVGWNLFFRKZRDSTKPDZHNXBDJWZXLALADVNSZQENMAIYFQRFQMDQNAILOJYJILFXQMITTDBMKNVAAOBOEZHUHEXFDAQIVRLECOOUGUONRG");

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
    msg.setTimeStamp(0.383599655281);
    msg.setSource(3166U);
    msg.setSourceEntity(22U);
    msg.setDestination(42013U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.0786497471425;
    msg.lon = 0.578844226636;
    msg.z = 0.156036406832;
    msg.z_units = 20U;
    msg.speed = 0.0969835100669;
    msg.speed_units = 205U;
    msg.custom.assign("RIRLMBKLNYUAWKFCVDOFLKQOUQRXAURCQCYBTKMFPHHMNRYORZAMMBEFWOFIXSSODSUBUDPEJBEXUSEWSWFJHLAESEXQNZSGJUISVJDCHKAHZICQVTIOTHMQOYEFDTDYUCJZVLCPEJ");

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
    msg.setTimeStamp(0.258552801525);
    msg.setSource(25931U);
    msg.setSourceEntity(73U);
    msg.setDestination(13675U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.708353704682;
    msg.lon = 0.694870076287;
    msg.z = 0.0239597769804;
    msg.z_units = 74U;
    msg.speed = 0.696753681807;
    msg.speed_units = 29U;
    msg.custom.assign("WZIJORVPISQQKEEZNLMKPKJTYGQXTNSXDBZUFCNAYEYUKCOKRXAGHEPWDZOVEMVOIHINETGJQUTHBZA");

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
    msg.setTimeStamp(0.719658665112);
    msg.setSource(9254U);
    msg.setSourceEntity(144U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.0209029273011;
    msg.lon = 0.704544167385;

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
    msg.setTimeStamp(0.367982543548);
    msg.setSource(11277U);
    msg.setSourceEntity(214U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.111723254693;
    msg.lon = 0.624370352058;

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
    msg.setTimeStamp(0.882437177982);
    msg.setSource(56747U);
    msg.setSourceEntity(254U);
    msg.setDestination(13665U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.00122438190499;
    msg.lon = 0.91729388436;

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
    msg.setTimeStamp(0.106224204855);
    msg.setSource(42438U);
    msg.setSourceEntity(38U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(48U);
    msg.timeout = 47636U;
    msg.lat = 0.97736842577;
    msg.lon = 0.641913246332;
    msg.z = 0.268947405586;
    msg.z_units = 242U;
    msg.pitch = 0.392597293356;
    msg.amplitude = 0.903058972062;
    msg.duration = 18221U;
    msg.speed = 0.288139990112;
    msg.speed_units = 58U;
    msg.radius = 0.221744845053;
    msg.direction = 132U;
    msg.custom.assign("AZYDICEDZQDFGQSRQNXPNJCGGIOENQHCYKXHEMLTEHHVVXVLIIJMBSMNJMZXCCOMKCATHUIEJYPIYAEGYHUSHTGTARWGOCSOMSNFLKETXADBFCDGOJLFQUFLYKPIEKPZYCPLRKBPQDROZPWNAWWQMEUZGVBLDLJBLZPRDOARDXJWNNBWWJYWTVFHFQQTSBUIRLFKSH");

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
    msg.setTimeStamp(0.967264997479);
    msg.setSource(52704U);
    msg.setSourceEntity(49U);
    msg.setDestination(458U);
    msg.setDestinationEntity(83U);
    msg.timeout = 62791U;
    msg.lat = 0.620755846164;
    msg.lon = 0.351792304747;
    msg.z = 0.82699044195;
    msg.z_units = 112U;
    msg.pitch = 0.61758009099;
    msg.amplitude = 0.914830191547;
    msg.duration = 14566U;
    msg.speed = 0.0860849749627;
    msg.speed_units = 71U;
    msg.radius = 0.278057256125;
    msg.direction = 27U;
    msg.custom.assign("AJGSMEDETBPRVCMKYVYLHIEZIOVWRITSMNFBGHFZOSBDQJBKAWVEGXUCNMPWGNBHJYHUMYJQEFHDPNMFNKK");

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
    msg.setTimeStamp(0.813472642056);
    msg.setSource(39835U);
    msg.setSourceEntity(42U);
    msg.setDestination(10745U);
    msg.setDestinationEntity(44U);
    msg.timeout = 1479U;
    msg.lat = 0.171984979757;
    msg.lon = 0.731919735254;
    msg.z = 0.949395708363;
    msg.z_units = 46U;
    msg.pitch = 0.773927753439;
    msg.amplitude = 0.926912659051;
    msg.duration = 55623U;
    msg.speed = 0.356656531432;
    msg.speed_units = 138U;
    msg.radius = 0.900270825395;
    msg.direction = 6U;
    msg.custom.assign("OSHTNJSIRYJIRYFHYOWTW");

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
    msg.setTimeStamp(0.656257580222);
    msg.setSource(41030U);
    msg.setSourceEntity(111U);
    msg.setDestination(54262U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("RLMSZPGNGFLN");
    msg.reference_frame = 235U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15095U;
    tmp_msg_0.off_x = 0.769919549244;
    tmp_msg_0.off_y = 0.213176438815;
    tmp_msg_0.off_z = 0.925525415985;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NVLIMAQZNORRYWBQZEYPZFJXPBNOFJUEAEPVQWUMGXCHBHXOWZXDFTTOUNIDYOUSGSBKFMDZROA");

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
    msg.setTimeStamp(0.241751088792);
    msg.setSource(10356U);
    msg.setSourceEntity(20U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(149U);
    msg.formation_name.assign("HVGGYUCBDGNSAFZXMGEYISCLUCXDUKLRQERBWRWSEUALQRQKVKPITXJBLIWIKMMWBPVUYQRVMDJNKUVJAQTNHSAHSZHPXOPTPDCPEGJOSCEIAXRYRUGLCGTZU");
    msg.reference_frame = 246U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 29956U;
    tmp_msg_0.off_x = 0.044915753881;
    tmp_msg_0.off_y = 0.173268619033;
    tmp_msg_0.off_z = 0.193741232181;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BYWCOOPUPLTUWSMVYRWGAAACTZMMVFDYIKGGRPDEPTPKJFIEBBCYOGZYQLHPJAXQWSQVSWOXYTLEBVDZNTHFDHSEYSNEBEFQRXVCCNCHLJUOFMHNGGAPCIACFZQFXTZVLVPNYMHKNWRBEFJTUMVHAIKJUHTWIXKKXSDOJDOOLVURB");

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
    msg.setTimeStamp(0.864207677243);
    msg.setSource(16347U);
    msg.setSourceEntity(134U);
    msg.setDestination(20807U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("THUMBGQFDWZMNXYADNOYIENSKJVGPSKQJRIU");
    msg.reference_frame = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64770U;
    tmp_msg_0.off_x = 0.18868657668;
    tmp_msg_0.off_y = 0.308119815538;
    tmp_msg_0.off_z = 0.422221657782;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PYPZLULDDECYEQWOISMGISTXAIBWBHXTMKCYHDLTECLGFQNUEKYTZLIIFMBNZDOJMLCFQKVUWVPBSRYOHOKGPVZFRTVJTZGFXNKRJNFJXRODUBHXMWAPSIUYUFMDRHPYEIGCPPGXSNKGLISWSMNHBQUVNQOZCOGAZWOGAFNXWERUHUBFKVWABHQA");

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
    msg.setTimeStamp(0.814649375294);
    msg.setSource(63088U);
    msg.setSourceEntity(109U);
    msg.setDestination(21461U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("YMIIKKVPXNTMQVPNEOKGGNCNNRLPQBXKHXICACTFGIONKRXWNVXGFLUZSGRZBUXAOWBLTHRMDOTPQDAVCX");
    msg.formation_name.assign("WYXFEJIFHCHUAKGCGOTOLTDEUCUULTRRMICBCXBFPEUEWAGVRHKPNSGDODZAPMVAQKSFZSPYTPTJONWPCWDXXZMQQQNQZRVNSZOIBHCBBWWAKIEAGXPKFJZGRBJYDMQVQAB");
    msg.plan_id.assign("KOCHFWKRADFXJESIYROZGHSCZPXGGTYJWOYQHMMHFPHUFEQOQGJWCESOOFBNZZXWKJUMJLUHCNTAUECPSTVOSDMNXWDBQUPEFTJBTEESLVYIEYLJD");
    msg.description.assign("YDZXEKJDMSAQEXRPVDDOWYMYSNOGUVBQHUJXKC");
    msg.leader_speed = 0.747820989683;
    msg.leader_bank_lim = 0.791131572171;
    msg.pos_sim_err_lim = 0.388339165232;
    msg.pos_sim_err_wrn = 0.375331634628;
    msg.pos_sim_err_timeout = 63318U;
    msg.converg_max = 0.777228589337;
    msg.converg_timeout = 25752U;
    msg.comms_timeout = 27679U;
    msg.turb_lim = 0.0538215736911;
    msg.custom.assign("IUJQVTATVVMKKSYZPRSQOBQLPMGAJILHRLDWSPTDDHPUDMGSVRLCCQVONYQPPTFTHGGBXMRLGNYEGWFNERURQCUHTWYHGSCWBFXEZZJDEXAOKUJQWOEYNDXMXBNWQCVZFJPAMFNIKCWW");

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
    msg.setTimeStamp(0.15742771596);
    msg.setSource(54108U);
    msg.setSourceEntity(117U);
    msg.setDestination(64080U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("GVRDWWKMOFSVDMQJATRNILOBQBCZYWJJYKTMYIGFDNGIWPEZCEKGKYEITKPSXVTAUQMUWCBNSANVFOKQSPOIYQIPMEZUGBRTWJZYQLHAQXHXFRSZHAUTVLPVGJC");
    msg.formation_name.assign("SWNBHCKCWXETGRWKOILVKQUENTTCMEJUEDXHMI");
    msg.plan_id.assign("WPUJMFIVLFPBVAOGSSRQRJKKKBNOQBANSHIOROIYINHUPRFQNDHDDVNCVMP");
    msg.description.assign("AELIRNQWKWJNIEEOTHUQFNPEEKHBGGFXQKP");
    msg.leader_speed = 0.871638343796;
    msg.leader_bank_lim = 0.951791860076;
    msg.pos_sim_err_lim = 0.0240003510696;
    msg.pos_sim_err_wrn = 0.607829770213;
    msg.pos_sim_err_timeout = 5946U;
    msg.converg_max = 0.377021285433;
    msg.converg_timeout = 64725U;
    msg.comms_timeout = 55477U;
    msg.turb_lim = 0.345300097509;
    msg.custom.assign("APAPIGYQRVSQZWWEJVTRGWFFEPNAMNIGZDLHWCHLIZYNUITSYGAFXXDSUKAVLOBWDTJVVJPGFXDFEWCYADROCIPBKCGODAXPJBCRGNHXWMBFPSBLKHQCQLJYPBJSHCTMMXEQEUIWAMJWEMRCVINZNYJGOFOQZWNRVUSGVKVKUCOHHMIDXDMHSRZLUUNODQQULEYRSJFQLUBTBMMKIBKOPZNRCGLKUYSONHKETDX");

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
    msg.setTimeStamp(0.979696268477);
    msg.setSource(60471U);
    msg.setSourceEntity(111U);
    msg.setDestination(236U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("QZHZFSLUSBPLTZRJEVPSYBQDRHOQLECLPNGAFWDJUBHOLWUAQRXURQBVSEQRXHAYROEIMNFJXOVZMCIMMLCXXPZVQTYMVKNKGWVPTUYGDDGIHITQCENTIDYAKSJBAJNGEGVZL");
    msg.formation_name.assign("HTDHPFGFZWGYBUL");
    msg.plan_id.assign("BWSOJTHUSDERCBENPNXFHBYMRHALIPCBEMTFLGFNMPEBVCKONFMGVYRZTYTAWFXDXWFGYVQNDBJGIGAUOHVCXPRRZALKSZAHGYVQOKSWCKYVVIJLEZXFMMJMUICHQJRNKLURQOPICEKIWPSDYDCUINWGRETSKFZVBAMCHADTGTJSHTVESKUVXGQPDMCKGNRWOZYPBUKOHXXIMZNZWXEDOQQLTB");
    msg.description.assign("ZEMJUKWAICJIJHGFNNYVPOJYXBOZKUAQOZEZGDSOVUNWPTICCVKDSPDBDXSGRZPYVMWGUYFQADOLRQMNURRVCJSHGHTIITIEAOIQSVEBKUJPYPHEMHOJFHZBZORTUYUNAKMHHWTLFNWHXVLCFXWVGQYBDTQGARGXZXIBOMFRDTNKBGKICCOAAWNPRDMLFXT");
    msg.leader_speed = 0.485766740582;
    msg.leader_bank_lim = 0.678214574351;
    msg.pos_sim_err_lim = 0.97857569506;
    msg.pos_sim_err_wrn = 0.227142585215;
    msg.pos_sim_err_timeout = 45909U;
    msg.converg_max = 0.00980421463759;
    msg.converg_timeout = 43731U;
    msg.comms_timeout = 1316U;
    msg.turb_lim = 0.157862827131;
    msg.custom.assign("TWPQAJRVZCFDNQUMFMYEHXRLAUVXUCZIHWHKCVCPYRNODPBDHGJFSBBQTRDBGSCMWPRKDATOXVZJXSXYMGYZINHGRFXUNWXHTSPLBGSKZVROISOLPCLONKIDVEJOFGVGUWSCOMNKKZHLVPNKLATEAEOGWDGYZOCSEDFUMJEZBRJHITQXZBIJAIQWNEMCYXNHKGMSJLYEPLPUADBAFBFXLWEJVRIKQFNSLKTPIQEUVUYYMQZAWID");

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
    msg.setTimeStamp(0.758329753384);
    msg.setSource(15700U);
    msg.setSourceEntity(57U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(182U);
    msg.control_src = 60965U;
    msg.control_ent = 75U;
    msg.timeout = 0.0625174413952;
    msg.loiter_radius = 0.279582942132;
    msg.altitude_interval = 0.421439144021;

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
    msg.setTimeStamp(0.558344460899);
    msg.setSource(31094U);
    msg.setSourceEntity(130U);
    msg.setDestination(56705U);
    msg.setDestinationEntity(167U);
    msg.control_src = 7531U;
    msg.control_ent = 213U;
    msg.timeout = 0.0375104144199;
    msg.loiter_radius = 0.374729670566;
    msg.altitude_interval = 0.410209280567;

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
    msg.setTimeStamp(0.230141289457);
    msg.setSource(62464U);
    msg.setSourceEntity(52U);
    msg.setDestination(63481U);
    msg.setDestinationEntity(193U);
    msg.control_src = 17884U;
    msg.control_ent = 66U;
    msg.timeout = 0.699188106766;
    msg.loiter_radius = 0.503516840717;
    msg.altitude_interval = 0.92284925582;

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
    msg.setTimeStamp(0.976379332838);
    msg.setSource(30375U);
    msg.setSourceEntity(166U);
    msg.setDestination(23511U);
    msg.setDestinationEntity(201U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.867207948787;
    tmp_msg_0.speed_units = 212U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.54366782438;
    tmp_msg_1.z_units = 20U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.765108207062;
    msg.lon = 0.992379287981;
    msg.radius = 0.689358407975;

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
    msg.setTimeStamp(0.43969029588);
    msg.setSource(53569U);
    msg.setSourceEntity(65U);
    msg.setDestination(9122U);
    msg.setDestinationEntity(172U);
    msg.flags = 20U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.900935674125;
    tmp_msg_0.speed_units = 195U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0927758878578;
    tmp_msg_1.z_units = 254U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.656584047302;
    msg.lon = 0.80392248936;
    msg.radius = 0.708145791981;

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
    msg.setTimeStamp(0.832517000833);
    msg.setSource(35605U);
    msg.setSourceEntity(204U);
    msg.setDestination(38354U);
    msg.setDestinationEntity(247U);
    msg.flags = 124U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.996130280947;
    tmp_msg_0.speed_units = 39U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.240281502394;
    tmp_msg_1.z_units = 75U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.77352903101;
    msg.lon = 0.510162796237;
    msg.radius = 0.151898085476;

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
    msg.setTimeStamp(0.54123299794);
    msg.setSource(10195U);
    msg.setSourceEntity(187U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(90U);
    msg.control_src = 34795U;
    msg.control_ent = 116U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 206U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 7.7657456083e-05;
    tmp_tmp_msg_0_0.speed_units = 5U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.776621753369;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.81586994037;
    tmp_msg_0.lon = 0.993968005315;
    tmp_msg_0.radius = 0.722730958726;
    msg.reference.set(tmp_msg_0);
    msg.state = 177U;
    msg.proximity = 47U;

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
    msg.setTimeStamp(0.886282218755);
    msg.setSource(28633U);
    msg.setSourceEntity(41U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(184U);
    msg.control_src = 56984U;
    msg.control_ent = 49U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.753318810148;
    tmp_tmp_msg_0_0.speed_units = 142U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.558035537563;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.191616094985;
    tmp_msg_0.lon = 0.659211680509;
    tmp_msg_0.radius = 0.434493488548;
    msg.reference.set(tmp_msg_0);
    msg.state = 53U;
    msg.proximity = 69U;

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
    msg.setTimeStamp(0.0858974507041);
    msg.setSource(6478U);
    msg.setSourceEntity(109U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(219U);
    msg.control_src = 57833U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.115795437824;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.363368543216;
    tmp_tmp_msg_0_1.z_units = 211U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.892983807552;
    tmp_msg_0.lon = 0.728464008002;
    tmp_msg_0.radius = 0.897357263872;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 99U;

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
    msg.setTimeStamp(0.690584630063);
    msg.setSource(20685U);
    msg.setSourceEntity(241U);
    msg.setDestination(17521U);
    msg.setDestinationEntity(25U);
    msg.ax_cmd = 0.162917529571;
    msg.ay_cmd = 0.338028017764;
    msg.az_cmd = 0.880415786317;
    msg.ax_des = 0.475308036052;
    msg.ay_des = 0.515240217116;
    msg.az_des = 0.440094838602;
    msg.virt_err_x = 0.505753685397;
    msg.virt_err_y = 0.843361666691;
    msg.virt_err_z = 0.406873989077;
    msg.surf_fdbk_x = 0.955486786918;
    msg.surf_fdbk_y = 0.778786141294;
    msg.surf_fdbk_z = 0.217253275165;
    msg.surf_unkn_x = 0.805173491009;
    msg.surf_unkn_y = 0.553416793141;
    msg.surf_unkn_z = 0.190205777526;
    msg.ss_x = 0.118139772497;
    msg.ss_y = 0.567706210025;
    msg.ss_z = 0.172648055193;

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
    msg.setTimeStamp(0.111971250835);
    msg.setSource(19200U);
    msg.setSourceEntity(143U);
    msg.setDestination(54974U);
    msg.setDestinationEntity(166U);
    msg.ax_cmd = 0.459881853289;
    msg.ay_cmd = 0.471253646721;
    msg.az_cmd = 0.812444912837;
    msg.ax_des = 0.181642646452;
    msg.ay_des = 0.510190833487;
    msg.az_des = 0.0180546777607;
    msg.virt_err_x = 0.676899803144;
    msg.virt_err_y = 0.248955102145;
    msg.virt_err_z = 0.783614934446;
    msg.surf_fdbk_x = 0.0115764695985;
    msg.surf_fdbk_y = 0.352865980176;
    msg.surf_fdbk_z = 0.315124714675;
    msg.surf_unkn_x = 0.181978853193;
    msg.surf_unkn_y = 0.223084354489;
    msg.surf_unkn_z = 0.882235214605;
    msg.ss_x = 0.131589285753;
    msg.ss_y = 0.934274111457;
    msg.ss_z = 0.29227052319;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DAWXHBSCPKRIDUXQXKNVWUNGFCXZKGYEJIEVUWHLXOPZKKYTCNFTEVUHPAPPDMTBUWKLAJUVHJIRHLWSHGJTXRAMKBYZAODPOFTBRNIAOGDEWRNKLJRAFCAIRIEYXWBQBVTPGGBIDHLNQJEPONZECMQLUHRJFZWSGQYTYFZJGFQFMZBLRREUSEFUBDSMVVJQICYSYDSYOYWCAOPOLOSWQASQONNPVMDGBCGQMCSLJZ");
    tmp_msg_0.dist = 0.230113474711;
    tmp_msg_0.err = 0.029691199925;
    tmp_msg_0.ctrl_imp = 0.500935200056;
    tmp_msg_0.rel_dir_x = 0.962128260684;
    tmp_msg_0.rel_dir_y = 0.549023904352;
    tmp_msg_0.rel_dir_z = 0.258389247388;
    tmp_msg_0.err_x = 0.445872484139;
    tmp_msg_0.err_y = 0.669366655061;
    tmp_msg_0.err_z = 0.69799804827;
    tmp_msg_0.rf_err_x = 0.366268792061;
    tmp_msg_0.rf_err_y = 0.292285483903;
    tmp_msg_0.rf_err_z = 0.673682457017;
    tmp_msg_0.rf_err_vx = 0.351158515037;
    tmp_msg_0.rf_err_vy = 0.181922836655;
    tmp_msg_0.rf_err_vz = 0.586084045459;
    tmp_msg_0.ss_x = 0.142021442274;
    tmp_msg_0.ss_y = 0.234877315629;
    tmp_msg_0.ss_z = 0.5143996887;
    tmp_msg_0.virt_err_x = 0.116251466575;
    tmp_msg_0.virt_err_y = 0.978456005547;
    tmp_msg_0.virt_err_z = 0.845146472721;
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
    msg.setTimeStamp(0.229789245373);
    msg.setSource(29836U);
    msg.setSourceEntity(116U);
    msg.setDestination(11530U);
    msg.setDestinationEntity(136U);
    msg.ax_cmd = 0.611850793041;
    msg.ay_cmd = 0.0543855728028;
    msg.az_cmd = 0.320854228853;
    msg.ax_des = 0.0546145734035;
    msg.ay_des = 0.643617910149;
    msg.az_des = 0.76369044727;
    msg.virt_err_x = 0.316545589648;
    msg.virt_err_y = 0.952984549934;
    msg.virt_err_z = 0.847670203728;
    msg.surf_fdbk_x = 0.809376270571;
    msg.surf_fdbk_y = 0.836015376652;
    msg.surf_fdbk_z = 0.409840779452;
    msg.surf_unkn_x = 0.134513211786;
    msg.surf_unkn_y = 0.0432155651839;
    msg.surf_unkn_z = 0.729490806517;
    msg.ss_x = 0.69270642273;
    msg.ss_y = 0.5676150161;
    msg.ss_z = 0.292869275605;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QSIQPOZBZUYZWDQNTLRQQKDIBOSVPCBGXVZAUECIRGDOEOUGEORXMXCWYPBHFYELREYJNPEWWXMLSUXRYDZLAVJINCATCKGXHNSXSVOJMMBYDNGGKFLZIHOXMLRJXQEGRNQR");
    tmp_msg_0.dist = 0.171536695497;
    tmp_msg_0.err = 0.628380292214;
    tmp_msg_0.ctrl_imp = 0.908537376847;
    tmp_msg_0.rel_dir_x = 0.18543028142;
    tmp_msg_0.rel_dir_y = 0.547923508229;
    tmp_msg_0.rel_dir_z = 0.754398645854;
    tmp_msg_0.err_x = 0.13650938768;
    tmp_msg_0.err_y = 0.996694855523;
    tmp_msg_0.err_z = 0.677940157128;
    tmp_msg_0.rf_err_x = 0.753230310457;
    tmp_msg_0.rf_err_y = 0.610221310902;
    tmp_msg_0.rf_err_z = 0.435184363824;
    tmp_msg_0.rf_err_vx = 0.0791180009247;
    tmp_msg_0.rf_err_vy = 0.151037984776;
    tmp_msg_0.rf_err_vz = 0.855016989453;
    tmp_msg_0.ss_x = 0.884115231437;
    tmp_msg_0.ss_y = 0.425996824198;
    tmp_msg_0.ss_z = 0.791620065292;
    tmp_msg_0.virt_err_x = 0.351912766432;
    tmp_msg_0.virt_err_y = 0.395738528309;
    tmp_msg_0.virt_err_z = 0.134090630181;
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
    msg.setTimeStamp(0.573245278387);
    msg.setSource(54563U);
    msg.setSourceEntity(33U);
    msg.setDestination(20300U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("WWAXHJPTCTIPBNFNJOZDDKRXDXNIBOUVJFEKXUTKAZHZVROOROHZHZXYKQVKQTYGWTCDWEDSMGXRSCILQZPARDGQHSVOOTHPHLENSCYBXQDJCASJAAEIHMQUEUULGNOSDHQCLPIFVLYGFYQFUWVMNUPWXFMNGIUPGAYLJFSVMTOJVYYKBBEMZLTHYAVTLQNACRRNTWLMRSDWBLMBBENGGIZCORZIK");
    msg.dist = 0.304999289986;
    msg.err = 0.88125069517;
    msg.ctrl_imp = 0.624918577156;
    msg.rel_dir_x = 0.224990271344;
    msg.rel_dir_y = 0.910194851987;
    msg.rel_dir_z = 0.100838191878;
    msg.err_x = 0.180564674354;
    msg.err_y = 0.775227377443;
    msg.err_z = 0.259872590659;
    msg.rf_err_x = 0.18876940955;
    msg.rf_err_y = 0.558009547657;
    msg.rf_err_z = 0.654589526331;
    msg.rf_err_vx = 0.385805062881;
    msg.rf_err_vy = 0.0180571875503;
    msg.rf_err_vz = 0.799205538949;
    msg.ss_x = 0.447841836253;
    msg.ss_y = 0.114510495133;
    msg.ss_z = 0.853554912394;
    msg.virt_err_x = 0.576341647327;
    msg.virt_err_y = 0.00914837546437;
    msg.virt_err_z = 0.743319987326;

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
    msg.setTimeStamp(0.0749279489849);
    msg.setSource(18250U);
    msg.setSourceEntity(210U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(236U);
    msg.s_id.assign("VCVZPXGGTFKSNQGQZAKIIOHJAUYDZLDPBXYHHYIBEUCRDIOWAZQQZJSEIXKGIEQFRMTSDGSSEYMXPDDZPNUBYPFDOOWRFSRLXTZRHNNVVAEVHTLJJCBULZQLUKYKKAJEWEKALVPTBZBWJCKYFHSBRI");
    msg.dist = 0.423153951878;
    msg.err = 0.209804995989;
    msg.ctrl_imp = 0.975844999412;
    msg.rel_dir_x = 0.369625145922;
    msg.rel_dir_y = 0.652346095627;
    msg.rel_dir_z = 0.0556331790178;
    msg.err_x = 0.175464143432;
    msg.err_y = 0.130129073629;
    msg.err_z = 0.671555790112;
    msg.rf_err_x = 0.417762348598;
    msg.rf_err_y = 0.579296361283;
    msg.rf_err_z = 0.130060757116;
    msg.rf_err_vx = 0.505564639996;
    msg.rf_err_vy = 0.203707906545;
    msg.rf_err_vz = 0.621057315855;
    msg.ss_x = 0.0735685044143;
    msg.ss_y = 0.732216883484;
    msg.ss_z = 0.822455002507;
    msg.virt_err_x = 0.986142047734;
    msg.virt_err_y = 0.209064695881;
    msg.virt_err_z = 0.997799502715;

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
    msg.setTimeStamp(0.0223485037532);
    msg.setSource(59559U);
    msg.setSourceEntity(129U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(196U);
    msg.s_id.assign("JMXBDOARJUOYDCVGESTQQWHFJXJREKQSIIKQLPLKOMTSPNDDFZJMAICTMYKVNNTLXLPWMOZUBDUQCJNLBZPCSVBFVLDWOPNGQKCATHLKXUSFQVPOPGFYFWHAIIMETPLKYGSLYEUVSAXVZIPRUAGPAQTNXABREGINRQRYMSOWHZEHLVKNREWMZTFUBFGDRUQBYHUKZJGCABTRAHSVMWFW");
    msg.dist = 0.7926131213;
    msg.err = 0.0331504020823;
    msg.ctrl_imp = 0.230777220389;
    msg.rel_dir_x = 0.632243338049;
    msg.rel_dir_y = 0.14897220152;
    msg.rel_dir_z = 0.400258959688;
    msg.err_x = 0.0472614396276;
    msg.err_y = 0.171740706859;
    msg.err_z = 0.857239639586;
    msg.rf_err_x = 0.866991316097;
    msg.rf_err_y = 0.0985618998796;
    msg.rf_err_z = 0.643937870851;
    msg.rf_err_vx = 0.495903469395;
    msg.rf_err_vy = 0.579922170646;
    msg.rf_err_vz = 0.568565404221;
    msg.ss_x = 0.832977867423;
    msg.ss_y = 0.767865502813;
    msg.ss_z = 0.778471865909;
    msg.virt_err_x = 0.0081076302537;
    msg.virt_err_y = 0.844491313128;
    msg.virt_err_z = 0.90441787783;

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
    msg.setTimeStamp(0.700700939963);
    msg.setSource(5088U);
    msg.setSourceEntity(177U);
    msg.setDestination(27234U);
    msg.setDestinationEntity(12U);
    msg.timeout = 14649U;
    msg.rpm = 0.168350328776;
    msg.direction = 59U;
    msg.custom.assign("LSRVFBAKUAUSFPYHQUVMAUHHRCQQYCMZZZKGHVVLWNDRWOEPSFWSYNLQOMPKERMATWBVFEOQNUGTEZLRIAJLCHXSYPODJGRFRTOSDIKBUVOIHBSCJWIBXDYECLZPIOLJXFHLGKSTWGMNGEUZXQNTKPRGIICKUPQXVDZTIMXDJATCXABYGUZTJDJWVQDXFNSGBHFZAKMBY");

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
    msg.setTimeStamp(0.16423559696);
    msg.setSource(64505U);
    msg.setSourceEntity(80U);
    msg.setDestination(63184U);
    msg.setDestinationEntity(138U);
    msg.timeout = 53969U;
    msg.rpm = 0.751725521086;
    msg.direction = 251U;
    msg.custom.assign("HBTJBTPXWGZALOHINOPYWYKXUSZGPCCEMGSVAODUFAJIJQBUBNGTGTSRRYXLSUJULZEBDMRRAJQBXWMQNJC");

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
    msg.setTimeStamp(0.376560349484);
    msg.setSource(953U);
    msg.setSourceEntity(129U);
    msg.setDestination(49620U);
    msg.setDestinationEntity(241U);
    msg.timeout = 13543U;
    msg.rpm = 0.960964851517;
    msg.direction = 47U;
    msg.custom.assign("AJDDIXMNGQILGLRZFPWSUKTELQVEQQWFMYRHYLYTXZGIUPRPBIAJNURPDOFDBQRCZDMNHAKNDMKQHVRSNSLLJCIANYODVLSTHIJATLCJVYSNKMAICFGDKHEYEXP");

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
    msg.setTimeStamp(0.632972412791);
    msg.setSource(40525U);
    msg.setSourceEntity(180U);
    msg.setDestination(65132U);
    msg.setDestinationEntity(111U);
    msg.formation_name.assign("ZQRRXKLXMJESNGLPNCPEQETGBXWDVTIBMEWSVUUNVYILFCBMSXDOOZHHMFYROZNGCYHCAKCTBAGPAIJOZTRIYTGAELAQAVJXXAUJWKGBKCFWKWFPHTZLUOJJUQSOLGROMURJYWBN");
    msg.type = 41U;
    msg.op = 237U;
    msg.group_name.assign("QWMGHZRQHFSFCXTRPXDJABYXDDIBWHRNOMWQTCKKRIGXHAKSBKVDOPXBTSUIRHYOKSCUJXNZXOZXEOVFZJFKYIS");
    msg.plan_id.assign("PWABEZAIXFCMHBVEBPCLYNGFAXRVDAOSWSYVLJXBHQNAUBC");
    msg.description.assign("XTODJAVSQXQDLYHEWYELUVKPOOJGBSGYOBJHZAHKJTZIYQJPSUSMJKWWAZPUFBMNNWFQLZOUDTTCPVUHRXIHITGSUHBXGOFHICELFVDPKMZFKNNR");
    msg.reference_frame = 148U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51569U;
    tmp_msg_0.off_x = 0.417250842836;
    tmp_msg_0.off_y = 0.143612227321;
    tmp_msg_0.off_z = 0.180135044301;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.432423838284;
    msg.leader_speed_min = 0.876983931541;
    msg.leader_speed_max = 0.856073693747;
    msg.leader_alt_min = 0.198844479889;
    msg.leader_alt_max = 0.825521475747;
    msg.pos_sim_err_lim = 0.742405486213;
    msg.pos_sim_err_wrn = 0.541147404165;
    msg.pos_sim_err_timeout = 20435U;
    msg.converg_max = 0.227794899681;
    msg.converg_timeout = 10826U;
    msg.comms_timeout = 55515U;
    msg.turb_lim = 0.751164691275;
    msg.custom.assign("AICZFSPCWPOFQSUIMVGTTOHUGVXYLWEMJBGWMQNDHIENPAQJZRINTZKGWWQMRLNLBSEALRRAVTGBODOTSGGFKNOLSFPIMVNKKJPKTEKBJHQEKDZZKHSMUABLAXPDDLIRYJNLXSCWVXUFEURBYVEXCVHCEWRUZHTATYSUNXCIOXQACQXAHPJOYNKVW");

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
    msg.setTimeStamp(0.442638413187);
    msg.setSource(19849U);
    msg.setSourceEntity(246U);
    msg.setDestination(16340U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("MFYUJTSQDZBFNITCFTMKXLJTVCCAODMWSKPFFHNNAUMZDOIFELQGQTXJCWKLJORNNQSVBWGZJYNDTNLBBZAOUVGQZXAYDBXJUHYXUOGVQROBJSIAODQEIPRVYHMPWHEHLUVSQHFVAURBLICGSPVNAXHIHERBRVAJOQGKSIPFEIZKBJNJYTYHBICMXPZRADPHDYFYVMAIEWNRGWOUGPQOUSE");
    msg.type = 191U;
    msg.op = 8U;
    msg.group_name.assign("AJOPTSZKIGOTISQEYVWMASZMPZVMTWQQKLZNJVBBUONYXNQVIQMKZCHGHGWKGWDNIJNIDERZQFWMFSXDLQXVRCBAAXXAYGFEBKTNGWRPXZXOSTULHASITPOIJEEKYVDYHXRLLMBKVMDLLURLBYMUUEFEBIOWCSCACWHDJFVGIZNJBYOAHFNRTBHBPO");
    msg.plan_id.assign("TDCZGOSQBFEDUDYNVNANDJULFHCHNEMBGFQQUGBGBUIKMQWWXJTDMDOKFZLOGR");
    msg.description.assign("QMCJNTPVRMMJG");
    msg.reference_frame = 147U;
    msg.leader_bank_lim = 0.151514647397;
    msg.leader_speed_min = 0.07802915048;
    msg.leader_speed_max = 0.671924284914;
    msg.leader_alt_min = 0.0403163657716;
    msg.leader_alt_max = 0.545795710375;
    msg.pos_sim_err_lim = 0.0445043237833;
    msg.pos_sim_err_wrn = 0.138043740919;
    msg.pos_sim_err_timeout = 23202U;
    msg.converg_max = 0.275254464594;
    msg.converg_timeout = 63071U;
    msg.comms_timeout = 61643U;
    msg.turb_lim = 0.128961737808;
    msg.custom.assign("KMOQFXAOGWILQFQHAEH");

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
    msg.setTimeStamp(0.130039621681);
    msg.setSource(42557U);
    msg.setSourceEntity(236U);
    msg.setDestination(15702U);
    msg.setDestinationEntity(92U);
    msg.formation_name.assign("LSHYJGWPPHTGNODWTJHPCIBMTVKCYMNUSVRQSRXOQTAXGDNAYZFGWSSAXOVBDAUICRKCJHVSLMSVSJELNNOVECHRPUQLISEOQGXPBOMQLFDKTW");
    msg.type = 192U;
    msg.op = 49U;
    msg.group_name.assign("TZPQEBRKHOEHQUULIIUGAETMWVCOAQEHEMHAGFKGHLMSPAJEIXKNJQNNXFMGDTJZTYVFIQKFXLMURLHNWSZRJZSYZCXSLUYVSCJDFKCYNVTBADXLOUHGGZODKBOKXNOAJRNALAYZMUJWRTSPRINVFNRHTVBMCBHILCFBLXCXVTISWQPQTRYDUJGGBOQDSVMAGKHDFKJWIAZCZBKXYVZTRO");
    msg.plan_id.assign("QHJBTXAENMHYUIKRLPSMPMTEFFEBXMTISKRDLBVAHZFXDNNOMDLWRPKVAIABNZLJJUQXCDHHWEBBVCAAGFWCYKNBYWRURGMQLEGIDZCRJGZQOICVEICNPQKGJPNYWIQATKOBHXOQEKIKFWVJBFOQTLWLPTNGJZPOYZKZMYAGTNACYEGUWVSUTPPUONSFHTRYHZDDZVIJDWMMSPLDFRAOSXJCVCXYCLTFEHU");
    msg.description.assign("ZYSDUCGTKVNLKFWBLMTROTDJLVXXCRWIWGVFCAHBXSTAZOBSTCYLCRZNPMRINGNMBZEPLPJLJABUQUFKNXBESJDCYROTDLZEJHSEYZOWOKHOUWAPXQQMEOMURRLZEPHWIHVAZQKJKVE");
    msg.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50497U;
    tmp_msg_0.off_x = 0.989546949422;
    tmp_msg_0.off_y = 0.424166776546;
    tmp_msg_0.off_z = 0.800166337865;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.53486512627;
    msg.leader_speed_min = 0.714377960955;
    msg.leader_speed_max = 0.450823785473;
    msg.leader_alt_min = 0.562184912128;
    msg.leader_alt_max = 0.547809017963;
    msg.pos_sim_err_lim = 0.149984822659;
    msg.pos_sim_err_wrn = 0.358478277251;
    msg.pos_sim_err_timeout = 48432U;
    msg.converg_max = 0.497807185296;
    msg.converg_timeout = 44697U;
    msg.comms_timeout = 27909U;
    msg.turb_lim = 0.705332551407;
    msg.custom.assign("YUBISCMAPLDHHGWJJSMWNJXRIFVQYILDBUWKUXFYSFFLXYDNEQPQQFRSRCKHIPYYWTI");

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
    msg.setTimeStamp(0.625014104815);
    msg.setSource(47724U);
    msg.setSourceEntity(124U);
    msg.setDestination(47755U);
    msg.setDestinationEntity(113U);
    msg.timeout = 26191U;
    msg.lat = 0.666058625208;
    msg.lon = 0.110750012359;
    msg.z = 0.819874252656;
    msg.z_units = 99U;
    msg.speed = 0.27842228017;
    msg.speed_units = 216U;
    msg.custom.assign("LZMZTQUUDACHSAZSKUWEDYGRFEBWNIZQAPRHXAOJQGHWFGCMVVUFNWRPQZTEQMPDVLPDLZGEGCCKQUNTUFQOXACRGDEJHSVAOYXBJYQBYPXWCPNFPZOBDWPNWINKYBUJOSMSBBQMNRFJMCKDJWUVNLJFHKRXZOPMOTBSWAHALYCTMRTPMTDJFRCAOGHMYLEIXZKVKRLZJDILBRKLDGEFESIEIUTVSXIXHIYBQFAJILYYSNVGVC");

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
    msg.setTimeStamp(0.142714026057);
    msg.setSource(20836U);
    msg.setSourceEntity(247U);
    msg.setDestination(26017U);
    msg.setDestinationEntity(3U);
    msg.timeout = 50658U;
    msg.lat = 0.310418706375;
    msg.lon = 0.862796486125;
    msg.z = 0.624087579295;
    msg.z_units = 35U;
    msg.speed = 0.496795706372;
    msg.speed_units = 107U;
    msg.custom.assign("EGIVTNULDNQHEXJMJQOTLLJYDDEODHLNNKGKNICHFDYQTESNVIKZXIPUPBCPWNPKKALTZYZLRSPBKEIQTCFBVSTSCSIPQYDRJUEFFCHUCQMIGHGGBZKSPBASAGMARXQMHXOFFPEHKOGXWUUXIRYUJWMBWDCOEDKMLIJAQRWVZOSABJPOYLUWBDCTITMAXMHFUNZOYDRRJRRAZEFB");

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
    msg.setTimeStamp(0.832806536223);
    msg.setSource(53816U);
    msg.setSourceEntity(66U);
    msg.setDestination(54391U);
    msg.setDestinationEntity(48U);
    msg.timeout = 63012U;
    msg.lat = 0.110996063226;
    msg.lon = 0.489647940493;
    msg.z = 0.387374059129;
    msg.z_units = 254U;
    msg.speed = 0.492845933996;
    msg.speed_units = 140U;
    msg.custom.assign("MUNXJFDXRHHTPVGXCGCOQWPIAEQYJWNETSCMONVXZPMTHGBZAJKCPYTHIUQLABIUUXKDAFFTZRLTJYLPRMKFZOEWBGELBNPVJJDRNOVUOONQKPKASZMSBVSACHYHFSVEDTIQBXCKLUBNFWJYIJNHBMO");

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
    msg.setTimeStamp(0.00954741023089);
    msg.setSource(348U);
    msg.setSourceEntity(250U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(162U);
    msg.timeout = 18078U;
    msg.lat = 0.758755748692;
    msg.lon = 0.349318330533;
    msg.z = 0.950033281136;
    msg.z_units = 64U;
    msg.speed = 0.756684953777;
    msg.speed_units = 116U;
    msg.custom.assign("YJXXWKLXZGHQIJRECZTHLWSCXJNRERSKZCGLWWMWXQYIEWBDARMZTBTHVRMNAGILBJMQOHCFSYABCBHEDUONRAGXEPQKZNVUKIP");

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
    msg.setTimeStamp(0.36930881882);
    msg.setSource(55307U);
    msg.setSourceEntity(18U);
    msg.setDestination(9309U);
    msg.setDestinationEntity(207U);
    msg.timeout = 53081U;
    msg.lat = 0.800435776238;
    msg.lon = 0.127137082981;
    msg.z = 0.247274812679;
    msg.z_units = 141U;
    msg.speed = 0.767732283765;
    msg.speed_units = 144U;
    msg.custom.assign("KBGYOHQCQNFRPMZQQBZDTWFMAQJGERXDKTFPAPMCBNEUAEEWLBMTZYPQECKHXHXRNGVEUTHQCLWNJHFKBYJIZCFYKLQHJKUXZJADZFLRSSJISENKFAYBEVWFNVFPXPOXRKYGDOWPILTMNXJMZHUGXDMONOZASZIGDFOZBOHDIYSYYSWVIXNUUGUCHALBHTIVALUTOSM");

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
    msg.setTimeStamp(0.739749661455);
    msg.setSource(15655U);
    msg.setSourceEntity(109U);
    msg.setDestination(28825U);
    msg.setDestinationEntity(237U);
    msg.timeout = 11080U;
    msg.lat = 0.285115255245;
    msg.lon = 0.760796328316;
    msg.z = 0.141190914147;
    msg.z_units = 102U;
    msg.speed = 0.932692032235;
    msg.speed_units = 141U;
    msg.custom.assign("ZUZETJCGANGZUOMLDQVLXPADKQJZAJTDKMRMAIQXKPZYLTENADFELOJQYRNBHASTOWCVLEVEUSYMNXCRMYYPFQKPVRSK");

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
    msg.setTimeStamp(0.831260736234);
    msg.setSource(4074U);
    msg.setSourceEntity(137U);
    msg.setDestination(11595U);
    msg.setDestinationEntity(13U);
    msg.arrival_time = 0.491130309021;
    msg.lat = 0.838324888686;
    msg.lon = 0.0868019610859;
    msg.z = 0.843455097646;
    msg.z_units = 15U;
    msg.travel_z = 0.975934260271;
    msg.travel_z_units = 211U;
    msg.delayed = 130U;

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
    msg.setTimeStamp(0.785586862682);
    msg.setSource(6273U);
    msg.setSourceEntity(203U);
    msg.setDestination(5931U);
    msg.setDestinationEntity(155U);
    msg.arrival_time = 0.628206589358;
    msg.lat = 0.907299868544;
    msg.lon = 0.151231911316;
    msg.z = 0.0492166835129;
    msg.z_units = 218U;
    msg.travel_z = 0.902990905172;
    msg.travel_z_units = 157U;
    msg.delayed = 73U;

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
    msg.setTimeStamp(0.892328268582);
    msg.setSource(53091U);
    msg.setSourceEntity(196U);
    msg.setDestination(60706U);
    msg.setDestinationEntity(19U);
    msg.arrival_time = 0.163341303884;
    msg.lat = 0.120411300038;
    msg.lon = 0.113842346164;
    msg.z = 0.460910958272;
    msg.z_units = 67U;
    msg.travel_z = 0.231481580039;
    msg.travel_z_units = 168U;
    msg.delayed = 111U;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.468932588166);
    msg.setSource(51359U);
    msg.setSourceEntity(198U);
    msg.setDestination(41310U);
    msg.setDestinationEntity(137U);
    msg.op_mode = 222U;
    msg.error_count = 100U;
    msg.error_ents.assign("OUJGGRAUDGIZBBDFEHCJS");
    msg.maneuver_type = 61474U;
    msg.maneuver_stime = 0.865019026212;
    msg.maneuver_eta = 33006U;
    msg.control_loops = 2463272356U;
    msg.flags = 46U;
    msg.last_error.assign("XEHVUPLLEQHSCASPJIKNLLJWCUOZTRREUMAVXGDKNIIOQNINWVSJEWFODSFMSKBPNECTYCUHAYTNNKGYWGHLQMXVVZLBZWOJKCIXTFDFOQGJNBVDWTDYPUCRSJBZFMACVYPFKJEDWPHIBBUXOZHAIDTRQPNHLMNKKTGJAXUVMFGZDDZCBWXPFBIHCRBGXLMMRWGGOGQIAPQVOWOEPTZJTSFC");
    msg.last_error_time = 0.492566099712;

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
    msg.setTimeStamp(0.0261796016327);
    msg.setSource(47500U);
    msg.setSourceEntity(227U);
    msg.setDestination(59205U);
    msg.setDestinationEntity(86U);
    msg.op_mode = 16U;
    msg.error_count = 158U;
    msg.error_ents.assign("PMSFNVPAZHBKTZMOKWEXWSQLTARUSQQEFOSIAGMKTQNJQLHKBIPLOHLVGWJGHDWJXIGHSXBBZPGWVRQWDLFEDPTBXXSPHFCRCMOHXCUTVEEPBTZVFEQDLKYJYPNOUFNZTCUJEKYZNBKUXDTNPDFHZWJRODMQOGZLIMCCUVZZYRUPATCBMLFGAGXEBJLYSVYLARHIOWGDAYNUSXSDWYYAECJMYISQIWHT");
    msg.maneuver_type = 23993U;
    msg.maneuver_stime = 0.557464666517;
    msg.maneuver_eta = 588U;
    msg.control_loops = 1299824518U;
    msg.flags = 160U;
    msg.last_error.assign("SSDGPAKDTOLRBTREMWQPGGJCUFFTQXLZEKFALSSNTXROAIHNQCOMBOYMMNRXCUOGOOYLPGUDHSWDADGYXUHVACMIQLTNELUYFYVDSMRMQKIIAJUNWBRJSTWQWSJLYJBRAGEENXGTPXIEGSDFPXSVFPBZNLZAOFKEUWKZXBJWKEPXPVXNCVFCUBTOCZRKWAUHFZRJTPHIMCY");
    msg.last_error_time = 0.0169389297252;

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
    msg.setTimeStamp(0.538790278503);
    msg.setSource(25515U);
    msg.setSourceEntity(67U);
    msg.setDestination(11164U);
    msg.setDestinationEntity(102U);
    msg.op_mode = 2U;
    msg.error_count = 121U;
    msg.error_ents.assign("AOAMQDRWHMMXEABDKYJTRFHKYGCLOBVEIBIIJTFDTXXGUNVIVXPEFZRBVNUWPBZHSKHQATZCJOQPMCERSXLTSVPAHKLOGSMWKYXSLISUCIUKNFUJJAXMSPFJUAKQRORLZEZUMAELLMKBCUOVJYNAXNGQE");
    msg.maneuver_type = 46655U;
    msg.maneuver_stime = 0.471410461984;
    msg.maneuver_eta = 8218U;
    msg.control_loops = 1030291264U;
    msg.flags = 66U;
    msg.last_error.assign("OCFIVZCBOJQZJDXYCNYJZRHWVRSUQQMJTJRUYCOBWLGFXHKOPHAAGKNOFPEGUUMGJIODQMVVPLHLILEULJKCWEIAPKIAIBAOYVEFLQNZFZBASXZRSRWXWJUCNHXFFJQSXOKEKTNEBBSZTDDVTENVMRFKLTITMMEGQSGNBYTMPCSEPFIXLVAHZBDPNLKTUWZWSZRX");
    msg.last_error_time = 0.523620617002;

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
    msg.setTimeStamp(0.923413197015);
    msg.setSource(60918U);
    msg.setSourceEntity(38U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(69U);
    msg.type = 224U;
    msg.request_id = 9259U;
    msg.command = 53U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 42912U;
    tmp_msg_0.lat = 0.638557209211;
    tmp_msg_0.lon = 0.371015803371;
    tmp_msg_0.z = 0.323565108389;
    tmp_msg_0.z_units = 95U;
    tmp_msg_0.duration = 28967U;
    tmp_msg_0.speed = 0.61229992935;
    tmp_msg_0.speed_units = 244U;
    tmp_msg_0.type = 90U;
    tmp_msg_0.radius = 0.750296621848;
    tmp_msg_0.length = 0.751104914168;
    tmp_msg_0.bearing = 0.492769529855;
    tmp_msg_0.direction = 250U;
    tmp_msg_0.custom.assign("KWFTILLQMAUYHPUPDETDOSOFSPKPNEISHAVRFVOLUGOTMVWBMNNGNHQRGFJMRBRHJRTGENIKCN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60333U;
    msg.info.assign("TTFKSXQQZGXJWLUVSFTVEMNQJSRAHTBPHBKAHIMMGFWDQBVJXYRVUOOYJUFUGJFFSYIFLHPYVEBWDEMVXTXRIOZQZZABZCBRCCQAXYOAJWUJNKLBEGLNBHDTUJINMXIRVQRJOYFFKOKMOIWWCWLPHNDCEVLNZGNAEKMITSWDSNJ");

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
    msg.setTimeStamp(0.375514641319);
    msg.setSource(34483U);
    msg.setSourceEntity(182U);
    msg.setDestination(52132U);
    msg.setDestinationEntity(220U);
    msg.type = 29U;
    msg.request_id = 8689U;
    msg.command = 2U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 31298U;
    tmp_msg_0.lat = 0.329352689507;
    tmp_msg_0.lon = 0.495524847026;
    tmp_msg_0.z = 0.487200057605;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.991756981359;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.custom.assign("SOOWXRDULZFGJIKMPVERSVPPVMKITYOESFBDZLXNWRAWSNLYWNTUPMBIMSTHVBMCJDHSKAWSNMHCEGIYYFTWEYDUMEAVPGHBQQKTBYOXTDUKQCPFYZLGKXBVGDORJEBPMYLUGQATVMNANYDFRRXTLJEHLJXVCZTJHXLAGCQULHIXVBVOCCKWJCFRUAOT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58615U;
    msg.info.assign("EFBSMYTAJRHHUACVRNVRLVXKQXZNVKPPBUTOKPPYXLJPEAUHZOMECBYRQQDSQMWDGEAXFPGHKGIFUJWLFZLJIIZYJYCEQBONRMNILXTWTOUJVGLMJQELCCNBSDTHNXAMDGQDRLSEOPQNWABDXOBHFFVNDOGXYUZAWHGAYVHMSBIMIYJFEIZTWPXBYTUEZZERVKJWVKZC");

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
    msg.setTimeStamp(0.177204987382);
    msg.setSource(45700U);
    msg.setSourceEntity(22U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(126U);
    msg.type = 229U;
    msg.request_id = 16666U;
    msg.command = 166U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 43024U;
    tmp_msg_0.lat = 0.79002383853;
    tmp_msg_0.lon = 0.962475463851;
    tmp_msg_0.z = 0.604887072756;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.speed = 0.453496376728;
    tmp_msg_0.speed_units = 71U;
    tmp_msg_0.custom.assign("SIEFOJAHOLYRTPQAXJBWLHTWFLFLKBXVTBYTPEHAIONXNASBBYUFMOT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44798U;
    msg.info.assign("SUVXADCVREOLGOOODXNBKVRURHASBBPJQECGAJWGNEFICUEPPYYEVPTXCPHWLIIYHMFFYUTMGDWWZFFSFLMHXRNXPXTAEWNTKYOAESIERSDTMMQGWRQKLWQMNMFMTCVLGXVCTUCZZTOMABZJDHPNWBVZNJOQNEZJPBLLKAJFVIDKGXZPSYFAQYTBZBTJLVOULVCHI");

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
    msg.setTimeStamp(0.157735874458);
    msg.setSource(44716U);
    msg.setSourceEntity(5U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(189U);
    msg.command = 154U;
    msg.entities.assign("HSHOUOHVNTMBNTDYDYDCNFPRLBTJCGW");

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
    msg.setTimeStamp(0.538976636046);
    msg.setSource(64307U);
    msg.setSourceEntity(90U);
    msg.setDestination(24873U);
    msg.setDestinationEntity(192U);
    msg.command = 34U;
    msg.entities.assign("AEZXKWSEEBYBEAMRKCCVDBYGRYHKESFVQCZFYDHTQFQVVLGYKOJAOTEZPJGQJFLXGTLZQPOWNQCDYFKBUNLMZBBIQHRUMLFIJCMAMVZFXICUEUCWRIHTOSOCOSAXROGDLNUPVVVRMCHYYNZAZXUFKUKXAVGABFRWNKGUHLOZJTQCJSNOQXUEGWNNHXBTLWIPWSPPQNZMDDYIRSXTJRIJIHUHBVSPDJTLOEXWMYDDJIPNAGMHRLGF");

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
    msg.setTimeStamp(0.397441559806);
    msg.setSource(61408U);
    msg.setSourceEntity(224U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(79U);
    msg.command = 168U;
    msg.entities.assign("ERHMDPVBYVVQDCGANHPGWKSLVZUBORNOGOGMHBMRCLELFYYJUSMYDORPQGSCOGISTZNXYLILFMJYNIYTVRSTEIQRTCJKEUFEWTIXOZBDBVYYUFTQWCFXQZJUKXKHQAHWPJNTQPODXZATISECGMWWFULIEDDKEXDJCHKNF");

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
    msg.setTimeStamp(0.43067406164);
    msg.setSource(24645U);
    msg.setSourceEntity(243U);
    msg.setDestination(33490U);
    msg.setDestinationEntity(18U);
    msg.mcount = 233U;
    msg.mnames.assign("XLXZZJTOBOCEOWPXRANNBDKNOANMXQD");
    msg.ecount = 38U;
    msg.enames.assign("BWPOIJFNGRVTRJFBEZNIPFFSTNIKMFCONBLKSFWLTBCPAZZJWXDLNOYXCEGHWMREKVLHUSMJODNZMLWACYTNOKSOHHPFFGSAYCI");
    msg.ccount = 225U;
    msg.cnames.assign("SPAUQWIQQAGVVUTWUAVE");
    msg.last_error.assign("XQDWIKHOVSWCFIMMESQKQUFYLTZONALDPDVARAPRENFBPJYVAAYKIBHFCJBAPCPKPSMUFRGTGTBGJDBXIASGUXRBKVQXKLZLSKY");
    msg.last_error_time = 0.797767633302;

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
    msg.setTimeStamp(0.316966930309);
    msg.setSource(56330U);
    msg.setSourceEntity(182U);
    msg.setDestination(26948U);
    msg.setDestinationEntity(200U);
    msg.mcount = 169U;
    msg.mnames.assign("CTEIGNPEPTSDSZJPIFAXXESRIVEARNUPVFNCCVPQYHAXUIZJCQKKZYSDOFFLIQLDIFSMWHZQYUEEXNJKYVIBHFSAYKOOHLIBQSSBKJZTAMMHPZFAJTCEQTJKDRCMUGLGQAEPJBIGBCDTLGUMTHLWLMBHXURRBMMNWNUDXVKVKDZRPPHBXXTGOPYEDZWGVGRXYUNRZJOLYFBTJYRTQWHWUODLHCAAGCNDAOJGNFVZUWWW");
    msg.ecount = 128U;
    msg.enames.assign("IOJEPOKTRGJGTHTJKWHYWPBMOGZYYEYYARCUJWGRIIFFZBCBJKDYBQPHLDFLTHRVWPECLCFRUQTJVJZSAHQUKKSFIAIRNFQN");
    msg.ccount = 78U;
    msg.cnames.assign("ZLAPDKLNEJMGEVWXUWYVWNNVHTPMDQGNQTVTFSKZBYOCYSJOBXBLIBCKPXRQDHHFDSKYFHPZ");
    msg.last_error.assign("COCSUGXPOZMEZRXHHIVKKLZHJMPGGLYOLLYFSWBJRDFLHVVPMDQWVJQNQQXQCDLDFDIZITCWKJCEXWYEKNVPSYZQRBLQWZBFDLRJBWBKROGBYAMUUXEMHETDZWFAGNMAJXIGIOFM");
    msg.last_error_time = 0.718339938929;

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
    msg.setTimeStamp(0.393153466856);
    msg.setSource(17716U);
    msg.setSourceEntity(193U);
    msg.setDestination(42573U);
    msg.setDestinationEntity(176U);
    msg.mcount = 113U;
    msg.mnames.assign("MPNNMQNADTCCTFVLRCJIOQOMMJPVZVQVYGZEVQAZKTFYRMWOQFEBEGWSFCFOIUEDYWMRKZSRPELWUWDXHGKEMTKWUDHAYJWQMNRHBDTHXHSGLYHAPYNBACDUIWYPLMOAZDIYCMCRYESSRCZUGXKUGLRBBGAHLGXNRBTUDESKOBSXFYFWOQXNXJOIXSDCTHLZPEAVCTDUQBGZFIVJBVJPFSKAPJZVJRKIN");
    msg.ecount = 125U;
    msg.enames.assign("WTCQFZBYBLFSWMOKBDAOOJINJUGGXDVECCWXPAGUNUKPPVZMCVIYWXMYTHAWVREBFSTELGGUEKVJLYAHJOHCJQDQEDFVFZQIZOJTDXHCZFULTMOCR");
    msg.ccount = 6U;
    msg.cnames.assign("LJCUWIRQGBMFDDFERCPBRETSSVNNGTEHGYIUZWNIAAVHXJUOBQLYLSPZJVMRXWDGFIDXFEQKCVQVBZTMCZUGNTVDOZULKHFFRWGBGTMVSAABBGSIRT");
    msg.last_error.assign("ERFTHAADFQDXIXNIROJBZUCYGRGBXOWPFVSTDSOFENFCEDQIFSCHQUKCUNVJTGLJBPWIOWCWXWEAAABMOUJCHVOFYPSXXMNVQIHVCMENRZYYHUTCGPWWFZRYLQLSYSTQFEUHTMHWBIVDGLMWYZAJQKKKZAOBHPCNIGTXLANVSYJQTIOYKNJKEPZSOMSLDGGJZMVHIKRAGNJTDKDBPVU");
    msg.last_error_time = 0.058869135231;

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
    msg.setTimeStamp(0.400283582321);
    msg.setSource(65172U);
    msg.setSourceEntity(245U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(220U);
    msg.mask = 250U;
    msg.max_depth = 0.265664700473;
    msg.min_altitude = 0.775505588593;
    msg.max_altitude = 0.658366049697;
    msg.min_speed = 0.907641814073;
    msg.max_speed = 0.347822970503;
    msg.max_vrate = 0.264359024649;
    msg.lat = 0.530259510952;
    msg.lon = 0.077300336175;
    msg.orientation = 0.769820822903;
    msg.width = 0.561697940177;
    msg.length = 0.350491630012;

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
    msg.setTimeStamp(0.909594454729);
    msg.setSource(61048U);
    msg.setSourceEntity(233U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(198U);
    msg.mask = 34U;
    msg.max_depth = 0.782622937837;
    msg.min_altitude = 0.320709234792;
    msg.max_altitude = 0.800618396292;
    msg.min_speed = 0.0812607886188;
    msg.max_speed = 0.847296917244;
    msg.max_vrate = 0.854224313307;
    msg.lat = 0.0941554411478;
    msg.lon = 0.848997146549;
    msg.orientation = 0.968681735835;
    msg.width = 0.977973075766;
    msg.length = 0.0404014120796;

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
    msg.setTimeStamp(0.611570581664);
    msg.setSource(7596U);
    msg.setSourceEntity(139U);
    msg.setDestination(57847U);
    msg.setDestinationEntity(145U);
    msg.mask = 108U;
    msg.max_depth = 0.361733579848;
    msg.min_altitude = 0.353343871435;
    msg.max_altitude = 0.508571239832;
    msg.min_speed = 0.77073774267;
    msg.max_speed = 0.912850526311;
    msg.max_vrate = 0.618051587147;
    msg.lat = 0.209791025906;
    msg.lon = 0.345408500896;
    msg.orientation = 0.0681064148287;
    msg.width = 0.670946313252;
    msg.length = 0.636832739018;

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
    msg.setTimeStamp(0.78486778868);
    msg.setSource(14793U);
    msg.setSourceEntity(80U);
    msg.setDestination(2740U);
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
    msg.setTimeStamp(0.0844746383919);
    msg.setSource(12456U);
    msg.setSourceEntity(186U);
    msg.setDestination(2083U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.018601364515);
    msg.setSource(58352U);
    msg.setSourceEntity(4U);
    msg.setDestination(63244U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.798530341228);
    msg.setSource(7514U);
    msg.setSourceEntity(200U);
    msg.setDestination(26420U);
    msg.setDestinationEntity(8U);
    msg.duration = 21059U;

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
    msg.setTimeStamp(0.0998924208079);
    msg.setSource(2891U);
    msg.setSourceEntity(105U);
    msg.setDestination(41288U);
    msg.setDestinationEntity(196U);
    msg.duration = 6205U;

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
    msg.setTimeStamp(0.952053766999);
    msg.setSource(48443U);
    msg.setSourceEntity(198U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(231U);
    msg.duration = 39257U;

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
    msg.setTimeStamp(0.816584939795);
    msg.setSource(25620U);
    msg.setSourceEntity(198U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(137U);
    msg.enable = 244U;
    msg.mask = 492844573U;
    msg.scope_ref = 746265968U;

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
    msg.setTimeStamp(0.940212640229);
    msg.setSource(54822U);
    msg.setSourceEntity(241U);
    msg.setDestination(14291U);
    msg.setDestinationEntity(2U);
    msg.enable = 94U;
    msg.mask = 2717440774U;
    msg.scope_ref = 4231230495U;

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
    msg.setTimeStamp(0.0112812896301);
    msg.setSource(38301U);
    msg.setSourceEntity(165U);
    msg.setDestination(36429U);
    msg.setDestinationEntity(202U);
    msg.enable = 118U;
    msg.mask = 2436400242U;
    msg.scope_ref = 679883855U;

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
    msg.setTimeStamp(0.86270616581);
    msg.setSource(49749U);
    msg.setSourceEntity(170U);
    msg.setDestination(65432U);
    msg.setDestinationEntity(128U);
    msg.medium = 32U;

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
    msg.setTimeStamp(0.225567813795);
    msg.setSource(1213U);
    msg.setSourceEntity(60U);
    msg.setDestination(2227U);
    msg.setDestinationEntity(60U);
    msg.medium = 79U;

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
    msg.setTimeStamp(0.112600076734);
    msg.setSource(7006U);
    msg.setSourceEntity(211U);
    msg.setDestination(65370U);
    msg.setDestinationEntity(209U);
    msg.medium = 159U;

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
    msg.setTimeStamp(0.934350065559);
    msg.setSource(37619U);
    msg.setSourceEntity(139U);
    msg.setDestination(50736U);
    msg.setDestinationEntity(24U);
    msg.value = 0.405809200377;
    msg.type = 223U;

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
    msg.setTimeStamp(0.307407715446);
    msg.setSource(50726U);
    msg.setSourceEntity(233U);
    msg.setDestination(60741U);
    msg.setDestinationEntity(167U);
    msg.value = 0.919631466733;
    msg.type = 180U;

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
    msg.setTimeStamp(0.00362367144678);
    msg.setSource(9913U);
    msg.setSourceEntity(186U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(95U);
    msg.value = 0.882917209155;
    msg.type = 158U;

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
    msg.setTimeStamp(0.947596024829);
    msg.setSource(59006U);
    msg.setSourceEntity(13U);
    msg.setDestination(29568U);
    msg.setDestinationEntity(95U);
    msg.possimerr = 0.00332398133156;
    msg.converg = 0.0802284267873;
    msg.turbulence = 0.874541832572;
    msg.possimmon = 49U;
    msg.commmon = 13U;
    msg.convergmon = 228U;

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
    msg.setTimeStamp(0.869586749872);
    msg.setSource(56424U);
    msg.setSourceEntity(80U);
    msg.setDestination(11054U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.966243478461;
    msg.converg = 0.180802335258;
    msg.turbulence = 0.400121580807;
    msg.possimmon = 176U;
    msg.commmon = 139U;
    msg.convergmon = 147U;

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
    msg.setTimeStamp(0.0757589182155);
    msg.setSource(52639U);
    msg.setSourceEntity(147U);
    msg.setDestination(20142U);
    msg.setDestinationEntity(200U);
    msg.possimerr = 0.243873142512;
    msg.converg = 0.644870158739;
    msg.turbulence = 0.982006423319;
    msg.possimmon = 152U;
    msg.commmon = 45U;
    msg.convergmon = 231U;

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
    msg.setTimeStamp(0.659813219859);
    msg.setSource(2037U);
    msg.setSourceEntity(119U);
    msg.setDestination(47533U);
    msg.setDestinationEntity(145U);
    msg.autonomy = 27U;
    msg.mode.assign("MEZAXLZLKWGLUTGEVSPJKWYPQKEJDASEQFVZAFUBSJAHSXFCDYONTCSJAJGIRFVNMHXSHMDYKEMAYFUKBDCOQXHHQTTWKHXRHVORRHEGZAFNBGCHMOONPOLPINMQDTPLBUBQMBWDDXKFAVBMZCSGWRAVPYNWUY");

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
    msg.setTimeStamp(0.218050103514);
    msg.setSource(12426U);
    msg.setSourceEntity(148U);
    msg.setDestination(32827U);
    msg.setDestinationEntity(14U);
    msg.autonomy = 135U;
    msg.mode.assign("TSWWBDIMOGVPSWLFQTRCMHXCXIOAKTKNJNAYPGMMZTDSQFREWTNYSQHKXKAZWSMUWECEEILPHKBZKAPBJELLSVANSIMEDQOUVDRUVOWXYXMAEGZCWNXEPYBTDQHPZOQ");

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
    msg.setTimeStamp(0.680732829171);
    msg.setSource(10687U);
    msg.setSourceEntity(198U);
    msg.setDestination(6528U);
    msg.setDestinationEntity(226U);
    msg.autonomy = 164U;
    msg.mode.assign("SDPTRZSMMHSYSRNNEACGVYILFIGDZQDTJOIUGYSLXKOUANVWXWCBQGVCXQTSGEXUSDCZRPUKVOJIUMFDDRIFVTOKFTILNBDFBWHWPZKCJPQIONBHWLZSMYQGYAHEWHUP");

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
    msg.setTimeStamp(0.979213897619);
    msg.setSource(11740U);
    msg.setSourceEntity(253U);
    msg.setDestination(4504U);
    msg.setDestinationEntity(188U);
    msg.type = 254U;
    msg.op = 162U;
    msg.possimerr = 0.695034799299;
    msg.converg = 0.452265429433;
    msg.turbulence = 0.335388071158;
    msg.possimmon = 68U;
    msg.commmon = 7U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.572339942549);
    msg.setSource(16779U);
    msg.setSourceEntity(96U);
    msg.setDestination(23611U);
    msg.setDestinationEntity(108U);
    msg.type = 235U;
    msg.op = 133U;
    msg.possimerr = 0.639459626809;
    msg.converg = 0.187232312017;
    msg.turbulence = 0.320879931876;
    msg.possimmon = 49U;
    msg.commmon = 132U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.460992932728);
    msg.setSource(18124U);
    msg.setSourceEntity(190U);
    msg.setDestination(47592U);
    msg.setDestinationEntity(208U);
    msg.type = 216U;
    msg.op = 87U;
    msg.possimerr = 0.802626075548;
    msg.converg = 0.367189347469;
    msg.turbulence = 0.555384084787;
    msg.possimmon = 54U;
    msg.commmon = 64U;
    msg.convergmon = 52U;

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
    msg.setTimeStamp(0.899981083355);
    msg.setSource(19502U);
    msg.setSourceEntity(112U);
    msg.setDestination(33156U);
    msg.setDestinationEntity(199U);
    msg.op = 58U;
    msg.comm_interface = 84U;
    msg.period = 65006U;
    msg.sys_dst.assign("QLWQUJOAMSDSPSGLCSZNJENWCDZJOZLDBBKRNVBOXAFPXRWJKWCEDQIMUTODYAQFXADEKBKVEZZQDVRJBYLHDTWTMNNZVQMI");

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
    msg.setTimeStamp(0.552820705023);
    msg.setSource(17273U);
    msg.setSourceEntity(232U);
    msg.setDestination(20239U);
    msg.setDestinationEntity(209U);
    msg.op = 13U;
    msg.comm_interface = 128U;
    msg.period = 38761U;
    msg.sys_dst.assign("XUKJWGGJHTODCSCOWGFXTSISHTXRALPWIUZANMUWEZLUKYGIERIRDOQQEAWVFXNKPXSOOYHQYEKJBSWBQAFVJUIPGRNEFNKCNVYFWOWRZOHFYKTLRFDDKNHCVNUJIFPODLGVZKCRZRUXNQVYUCXHTWMPMBOLMVNIJKMZGQWPQMXCDENHBMCGIVAZBHATYASAYQJHETSFSQLPTDRPBUJXGCBVGPDVLXMALALMDCTLQSJYB");

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
    msg.setTimeStamp(0.1143063118);
    msg.setSource(15903U);
    msg.setSourceEntity(242U);
    msg.setDestination(23599U);
    msg.setDestinationEntity(16U);
    msg.op = 59U;
    msg.comm_interface = 119U;
    msg.period = 55548U;
    msg.sys_dst.assign("GLXHBTKGZCBUALAMJCVFLBCSSEMRKSWIRGQANRCJXZHRFJVJGQXMNCTRED");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.775519816591);
    msg.setSource(43468U);
    msg.setSourceEntity(160U);
    msg.setDestination(50964U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.115461915349);
    msg.setSource(30050U);
    msg.setSourceEntity(171U);
    msg.setDestination(44689U);
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
    msg.setTimeStamp(0.492499203961);
    msg.setSource(4952U);
    msg.setSourceEntity(68U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.64577455335);
    msg.setSource(4039U);
    msg.setSourceEntity(64U);
    msg.setDestination(52289U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("JMUDOFBAANGQHVBRYSJDVXWQYBNKQUQDXYTLMJUBSCVUYDGWFXZZFMBCULSBMRYVTKGIJCPIYPUDCYWKWZANMWEZBIMRPKILKSGSFAWXILACZRECEMNCYQFHWQHJYADG");
    msg.description.assign("HMRLTTZIILJJTDCZIZXKMWOBSVQLQDKTNXUHXZVHTSFUZAFVYRCFCPGAHGKAGYBNKBPVZQWROBNVOCNKRUKMYAKCBCPTJBREZLEPULJPDFBHTYEYMDSLNXDQUHGSHLEDVTOGXQERIFPTSGOYJCRGMROBYAXFQYVEXIMJZDYWBWWEWWFAMOLMLVZPDAIUEAGXXUKXUPRUSZS");
    msg.vnamespace.assign("GBNDBMUUOVHGXZFMFXESAZBPAMUILVNDCAAGBIVYAQWYMJWZTAUNQSDVZPLEDOZAPJGE");
    msg.start_man_id.assign("PPFWDLSSVIECSRYCYLPUDLLRRSTGIHZESJRIAFZRQYHJUIVWMJXNGCKFWSZDKFKWXJIY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CNWAPOBVFVKANAPJKXGOSTMFURMTJDWWLZBNOVGQHVVGGUBGQCUYIFJDFUGCLRRGSQLYNIDDRBOVSAFBMTTBCRYGKIVPIHZUOQFSZNTQSQTPLCUUJEQHMVJYYINJTFXSDKBIKHIPWKMEXNELGFMCZBVVMKNXXIPCNIPDLXYRX");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 41622U;
    tmp_tmp_msg_0_0.custom.assign("YWIINRYMRGUVOCOPXPUKSYFERMXPVNAYHHAYNQFNJMTCLVOQGHHYMRJDWBCNJPWFRSYFATGAKGUCZMJJNZQARXQYTEPBELVVUSUUERCXRYEOJST");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.path_ref = 214709410U;
    tmp_tmp_msg_0_1.start_lat = 0.59437728019;
    tmp_tmp_msg_0_1.start_lon = 0.539416058183;
    tmp_tmp_msg_0_1.start_z = 0.573214359516;
    tmp_tmp_msg_0_1.start_z_units = 59U;
    tmp_tmp_msg_0_1.end_lat = 0.337571842675;
    tmp_tmp_msg_0_1.end_lon = 0.318876489371;
    tmp_tmp_msg_0_1.end_z = 0.758377142462;
    tmp_tmp_msg_0_1.end_z_units = 6U;
    tmp_tmp_msg_0_1.speed = 0.712064094097;
    tmp_tmp_msg_0_1.speed_units = 157U;
    tmp_tmp_msg_0_1.lradius = 0.163060838841;
    tmp_tmp_msg_0_1.flags = 166U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JXKREGEOJJWRGCASLRFKXNGYTWUMTYQVRCAUAHXSHLLWEAEDFVMBKUSUKFBMTYPMHIJJDEKYMJPGBRYDCDKVWVITVGZDGCSPZOMUULSDNQHVHINXFAZVENTYTBXCNJTOKRNQTQPFJUIIQZNLFV");
    tmp_msg_1.dest_man.assign("IJHQXTSHDIHGADFJWXW");
    tmp_msg_1.conditions.assign("FLVWSSPMUXQCGZITEFATAHINQBKQZWRICYMWMXKJKDWPQONIAODVLXOPSPUHTUWHVFPINUOSFRUDTONFHBKRGIYIIABZYHUQLFICDAEZTHYFRAEPFMAMXNNDYCGXJLPOKWDVEYCXIZHMYOZVWJWEPBORHRFCPDYKXZGBHKCLLPSYTZMZQELRGDUEBSAGLSJQMVGCRLKOQMJYVOWTAFBDTDQNKAZNMLUXKSRTWVCHVEGEGNQXBUU");
    IMC::VelocityDelta tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.time = 0.193652866905;
    tmp_tmp_msg_1_0.x = 0.40548993861;
    tmp_tmp_msg_1_0.y = 0.881031802696;
    tmp_tmp_msg_1_0.z = 0.483555333324;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::TrexAttribute tmp_msg_2;
    tmp_msg_2.name.assign("NACUBGGKWJGVFSPMWWFBQGESTPQZSXSCIUMJWKVNDVVTJ");
    tmp_msg_2.attr_type = 74U;
    tmp_msg_2.min.assign("MVIJANGBZSNDNVCDTKEULLMTVXEXPJKQYGUEDJFCVFHKVZKUGGYASBOTMRLXPODUQVWPAQZIUIHUCAQBYKYEJEJLJAXAFFLFWPQKICQZJXWTERYDASKHHOWOTROGAHPSWKYZVS");
    tmp_msg_2.max.assign("USJCXUWVOIYKOJNCCBPPXATMPZRHF");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.886062185706);
    msg.setSource(32397U);
    msg.setSourceEntity(217U);
    msg.setDestination(5363U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("CAKWLNMMRMBMUQTHLMEGDFGICGXCZWURXSCUKPXVLHXXVMXVBNSUFSGYKALZTHOBTQTTREDUTLUGIXVWIBEPAKWFQSEYZSCCJSUFAPNAJJQRXIHYZWELPPIJZNAIHMJDKEWFKVOLRWOXRPKZAESBZBIGQFASBRTGKNYYNIUWGJZSVYPOTLWUQHKNOBSOVEHZQFJHQHOMDPYBRPDBHVODDTJRFJKROXVVNYFDDJCTUDCAOQNFCEIZNM");
    msg.description.assign("BSAFUCJJOAWFKHOXHGPATESVYVQBCEDNILVDOWBUKOMRCLHVNMPHZKCNZZRRGEBFOACYBS");
    msg.vnamespace.assign("WREEKAIIVXYZKTXQAPCGHDHARPRKYDVOVEIYRJJPWRLZMBALUPIOXTINCASIGFMFLSPCSGCWZXQBMCZGNGGJWBWLJOAAZOBETQQVSQVEBVOLUNSOXACLHNXIEOFSNWHDMMBUGDAKAKQDSMEIZLRDJXCNRUFVXTISZNSTVFDNLWQJBEYJ");
    msg.start_man_id.assign("CMZRYLSJNTEGIEBTNIKTHQGWKTEDSSPYDCVLTGHQMPAJLHQVRJUORXACQOXYVFRVOLDCTUUMTMNQCRQWOIAVSYJPNSKOZVFRINGEZPJZLHVWHCXCBWUPDWXASDNBYPIBKDOFHBKRJIAJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WOUZTTFFWLHHTGNUKFIXYMZNFLPRBSNPQYJUXJWIEZWRUBAKKQCJYDLGABODKOQDGCLETCLUAQBTMOHNAYFODIWPJCRTE");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 45518U;
    tmp_tmp_msg_0_0.flags = 114U;
    tmp_tmp_msg_0_0.lat = 0.416991979093;
    tmp_tmp_msg_0_0.lon = 0.959997269669;
    tmp_tmp_msg_0_0.start_z = 0.37482432232;
    tmp_tmp_msg_0_0.start_z_units = 46U;
    tmp_tmp_msg_0_0.end_z = 0.718851353989;
    tmp_tmp_msg_0_0.end_z_units = 132U;
    tmp_tmp_msg_0_0.radius = 0.502254893842;
    tmp_tmp_msg_0_0.speed = 0.283905942959;
    tmp_tmp_msg_0_0.speed_units = 62U;
    tmp_tmp_msg_0_0.custom.assign("TQMRFYTIPSUTBXAARKIOEMFTZAAYSFYIMXEZAYXYDXTKTGMJSYPJU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LowLevelControl tmp_tmp_msg_0_1;
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.227339600224;
    tmp_tmp_msg_0_1.control.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.duration = 19916U;
    tmp_tmp_msg_0_1.custom.assign("KXFXBOUHRBMRTGSUVLXPTJSCPHZOXYNGKPIKLRNWHQJVCRDWMBVGYZARONAPXVSYPGLQPHXZMPQOMIWMTUGYWWNSEIDCICTVZKLVGDSFJUNHXPFJLETAOFHBXUQDBKNRLBFRCUWABLOJTLEMSHJUEDPIZGAVQZWIROJVUTJCSSRIJLZAIHKSWFAGYHTYMVNDWCGEERIMJNNZFYQZDZYEQOKFEIOTAELGFMYEAQFXDUQDVSXBPHYCQOUBCKWCAB");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::FollowTrajectory tmp_msg_1;
    tmp_msg_1.timeout = 62507U;
    tmp_msg_1.lat = 0.936877615112;
    tmp_msg_1.lon = 0.770982578557;
    tmp_msg_1.z = 0.742654166479;
    tmp_msg_1.z_units = 77U;
    tmp_msg_1.speed = 0.42843203712;
    tmp_msg_1.speed_units = 236U;
    tmp_msg_1.custom.assign("YNZTLJSPSHBMIPEPAZAPMTGWSKEXFTMCTQNSSOJMLLQIWNUPIERGOIERNBXNSCLJEVGRZBDPSUBNANXDJXIHKGEXVXAHJTLAPNMABYJYMFTDQOUAUFUPNLZXAKFEHYFBVQUFJEVQVCNGXCLWOZVVCKPBHABWMZHMXOZRBMYQCDBKUTIRGDDRUOFOOHUJZYKMZDLXHJEYYYGRLDVKTSZHOGCQYKC");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.445187350434);
    msg.setSource(26611U);
    msg.setSourceEntity(109U);
    msg.setDestination(18439U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("KKESXECMDKNARPMTAQUPDOPCMLBCUSXXYDKLZANRZNCEGGQPEOGYQFRDHYDXUHI");
    msg.description.assign("LDOLBAUOXVOTMSFFAMEHL");
    msg.vnamespace.assign("ZJGDADDURCKMHVOTQKXMKOZVIJDODSPPBZPPCLAAYXHWEGPVWFWXSXPRGMWCBOJUXHFCBTOCSLUCJUTGGQUNLIQZXBPLIBRTITWDHVEKIOVEDFENHYGNYQTSZGRWKQYJKNOUTHHCJZVIAERKQPUYIYXLNLBLWKHXCZMMLQZA");
    msg.start_man_id.assign("AIFSPIDLOKVYSPZIWQBZBUCYIQGPGMRYNCUXHWZGFVILMEYXRRZPEDKTCKXXYPYBNTUUUAXLHWYRCFSZMGZQSXMOEVWZNFLXNCJOKTMWYTNLVGCFOSPEJOBQQLMZXWEQSPKYIEIWHEIMFPUTATTFJKRMPJMTUSUDHDJRVBFVBCZNJIQOALWARAJCCSHMDNSNGSRHUJ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WXPCBNGYRQFGXTWZLCGSNMGXXIDMBSXHHJZGSSCHOAVUOVGFLMCYVBYFLHLRBWAITNRTSKCCKVJJQUTVKCMYJAKHXUOKJIVKDWEZUFXQOQWJMUKDKYFANZQUWAYEIBADCIZNDYYUOJLWTMXOGPASDZSPMREPUPRBH");
    tmp_msg_0.dest_man.assign("LLQBRBZOIOBAXTDTXMTUEPTPUWWAZCVFSOIBLOVLUXFAPPSGSGFYUQUFMGHEWQOKSHVDIR");
    tmp_msg_0.conditions.assign("XYLJKOPLZLXASCDPRVNWHAUMJZEBNQNWRUQYUNJDVRUENABDMEZKFIBMQQPBWJTSZIBZGCSNDBDWXPWSMPWBFJIULNVIHIHFWLJGEPIYTTBRYDXHRCPFWSIFKSREHAQNYYFHDQLEXZFFSDETXPYKJSMVBTOHLYVTGXWOVLRV");
    IMC::CpuUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 140U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::Calibration tmp_msg_1;
    tmp_msg_1.duration = 55682U;
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
    msg.setTimeStamp(0.385278707936);
    msg.setSource(23955U);
    msg.setSourceEntity(13U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(25U);
    msg.maneuver_id.assign("NVABEOBSVJYXGWSIWFGKTSZTFA");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.21855565378;
    tmp_msg_0.lon = 0.604534523454;
    tmp_msg_0.z = 0.745578223858;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.837948687561;
    tmp_msg_0.speed_units = 154U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.624324039585;
    tmp_tmp_msg_0_0.y = 0.160876508127;
    tmp_tmp_msg_0_0.z = 0.395050050797;
    tmp_tmp_msg_0_0.t = 0.232072012402;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.442148786067;
    tmp_msg_0.custom.assign("CUDXZHZZOGATQQRRZLIEVVJSPBJ");
    msg.data.set(tmp_msg_0);
    IMC::RemoteState tmp_msg_1;
    tmp_msg_1.lat = 0.322139441446;
    tmp_msg_1.lon = 0.63286456316;
    tmp_msg_1.depth = 102U;
    tmp_msg_1.speed = 0.718841940666;
    tmp_msg_1.psi = 0.549294737802;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Airflow tmp_msg_2;
    tmp_msg_2.va = 0.914329035852;
    tmp_msg_2.aoa = 0.302240353914;
    tmp_msg_2.ssa = 0.618857215363;
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
    msg.setTimeStamp(0.869203440684);
    msg.setSource(44588U);
    msg.setSourceEntity(30U);
    msg.setDestination(46805U);
    msg.setDestinationEntity(67U);
    msg.maneuver_id.assign("WCLUMNYGCUNEIIBSSOXZDZROLDNLWMKSFQIVOJXQOBPWVMBGICLGXPJMIFXKLEWNSSGURAATPDMUIIBTRFKLCAZTOTGPJSPNQHAGVCXDWYNGHSDRYHZQSECHRZQNAUPVJDIYHKHVFCOUPLXRTMSYVEGKIEVJGBSYHPDMOMBLMVTBBWHPQVZAQFC");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.64156654682;
    tmp_msg_0.lon = 0.125856254327;
    tmp_msg_0.z = 0.365627677386;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.radius = 0.912141235319;
    tmp_msg_0.duration = 46486U;
    tmp_msg_0.speed = 0.994278519313;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.custom.assign("VXXNCINTDKPEDVBRLRTCHOUPSEQDXBTXVPSAMLMRHQPQTPWKLDUJORDNQINAOKFIQWVZSDPFUUJKHHWKLCBRVFVDAIMHNIIGKJGWZWZGZFCAEONVPYAMJLCTQVQIPAFEYFSYJWTNYZSDWCFKULHZLLTBIAAETEOULBYGBKSCWAXHNWRHONQMGZGNVUZYHBJXMDZGEOCJSUXSJYUTIBIEWPJOGRQ");
    msg.data.set(tmp_msg_0);
    IMC::UamTxFrame tmp_msg_1;
    tmp_msg_1.seq = 29101U;
    tmp_msg_1.sys_dst.assign("LDMYHVMDURZKDFGMAOXQACYGGB");
    tmp_msg_1.flags = 94U;
    const char tmp_tmp_msg_1_0[] = {-45, -78, 27, 119, -64, 55, 20, 116, 62, -89, 38, -15, -8, -30, -20, 115, 78, 63, 31, 8, 101, -30, -89, 125, -111, -107, 80, 56, -20, 107, 106, 14, -20, 84, -120, 72, -70, 29, -123, 107, -98, 30, -104, -91, -9, -89, -82, -71, -118, -12, -15, -94, -58, -48, -77, -33, 82, -91, 94, -38, -61, -121, -56, -10, 99, -43, 99, -103, 126, -78, -16, 10, -20, 111, -58, -112, 30, -17, -68, -13, 91, 84, -3, 21, -125, -99, -40, -114, 7, 61, 101, -63, -67, 92, -98, -27, -48, -69, -76, 6, 19, -28, 14, -12, -120, -7, -5, 97, -10, 76, 29, -31, -21, -64, -85, 40, 2, 1, -89, 116, -90, -22, -44, 4, -63, 88, -14, 65, 16, 19, 51, 114, 41, 108, -111, 85, -77, -81, 15, 111, 23, -118, -6, -47, -68, 122, 100, -92, 50, 120, 126, 105, -24, 9, -81, -108, -110, -92, 42, -31, 14, -41, -105, -61, 119, 69, 28, 25, 59, 80, 111, 126, 121, 20, 77, 83, -90, -63, 64, 40, 115, 78, 53, 39, -55, -49, -49, 52, 14, -76, 75, 72, -128, 92, 33, 107, -62, -101, 5, 115, 35, 76, 48, 111, 104, -83, 40, 17, 91, -71, -87, -44, -2, -77, -21, -60, -67, -50, -73, -91, -25, -96, 4, 3, 78, 47, -27, 24, -19, 15, 11, -3, -77, -110, -50, -73, 22, 73, -28, -9, -8, 24, -77, 78, -81, 41, -105, -113, 40, -92, -108, -56, -66, 45};
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
    msg.setTimeStamp(0.451210648218);
    msg.setSource(6489U);
    msg.setSourceEntity(212U);
    msg.setDestination(54494U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("JXVBFPPFRQ");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.826424143935;
    tmp_msg_0.lon = 0.419708867231;
    tmp_msg_0.z = 0.129262916751;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.radius = 0.568183624558;
    tmp_msg_0.duration = 46810U;
    tmp_msg_0.speed = 0.355946606694;
    tmp_msg_0.speed_units = 214U;
    tmp_msg_0.custom.assign("HHVKXSJYTGUKOGSGSEGDYYYJNBVMNYFE");
    msg.data.set(tmp_msg_0);
    IMC::Target tmp_msg_1;
    tmp_msg_1.label.assign("AZAKZWSHYTDAIYRFUILZLDHHLDQVUTVISEXWTNBUNPOVESGLVWYZGRMOOWBYVIOTXNDPMBHQQCDRSGKKRRHDSTRPLLCPMWNQANKPCHTISFLTTUGBYFOYAIGBBKGXFIROJXVUFBKKCXTQRAGMWUPAUQPXUEVNXZSKBEQPZOXVZYMFSDHENAMSBVWLQMXONMWUCOJIQC");
    tmp_msg_1.lat = 0.243002274469;
    tmp_msg_1.lon = 0.82886191737;
    tmp_msg_1.z = 0.678512189326;
    tmp_msg_1.z_units = 47U;
    tmp_msg_1.cog = 0.540743342237;
    tmp_msg_1.sog = 0.632228819958;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevCalibrationControl tmp_msg_2;
    tmp_msg_2.op = 155U;
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
    msg.setTimeStamp(0.478054613255);
    msg.setSource(13969U);
    msg.setSourceEntity(5U);
    msg.setDestination(36013U);
    msg.setDestinationEntity(137U);
    msg.source_man.assign("HLRMRLLUIPNRTFNURWJZODDKBHWZIWKURXTXHVFGIBVNQMHMDUNZBCPKM");
    msg.dest_man.assign("CRFMLBMVBOXDFJJKUSHBGISNRQEAUPQFYXZUGDHASFFRUQPNJMCLTCKQAHQUEIUTDEMEPQMPYRLETSZACVSNVTJESGNIWOVYUJYPZUFNAHHXSYKYNRCFJBGYCROZOPPLLKNVAORKHZTMYCNECXOVXSIVXHTKGLDUAYJIHOXMQRLWR");
    msg.conditions.assign("YWSACHEGDWCFJLVAHSWFCBXPSLKMDAYODECRRAJQZAUSWBOOSMDCHOTPZYXYSVNBEOBIFADTWIBUFSNCKVJGBDUWFGQVZVDJHMNUJGFXPIAIEJLRXYDUZND");

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
    msg.setTimeStamp(0.345423584525);
    msg.setSource(6337U);
    msg.setSourceEntity(234U);
    msg.setDestination(37804U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("BLZSBGHUXEWCDLCZJAMYRFMWPDONKCHYF");
    msg.dest_man.assign("IRWDHPKUYHONUVRTCXDMNTWMYZVNKEMQBQWPXOJBTNWIFLGARXHLNLLGKELWCNWXLISDLOMAQPBXOJBFNCLKQKOKPMISISZLV");
    msg.conditions.assign("RXUHFENTXXLYCVBAMPUSPVYONYUNCCHTKSGXLPEBTZEWYETXLVIDWSEFOCKPWRQKAOWRBHUOORVVAXOGVKNAZNFCMAUAPZDPICEFZFYZGBJEGLHW");

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
    msg.setTimeStamp(0.954536583639);
    msg.setSource(45818U);
    msg.setSourceEntity(185U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("PWCFMXAXZXLQHRJRWDGEVVIZDLKNQFIONCUEIGPFJEZURPATQTRKWVDFSDDBSCBWAFZMSAFFISAVDBV");
    msg.dest_man.assign("NZNJEERJHAUIGWKHCHBVDRRYVBAMWAJFAQBIILUGLATSXFKHNCAXEJAUFQIUTLYZGMXSEYDKFSDDQHOJCCOQMEKBZVITK");
    msg.conditions.assign("QGLMAWJNXOMASUCJNXVSO");

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
    msg.setTimeStamp(0.261101130359);
    msg.setSource(37850U);
    msg.setSourceEntity(10U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(70U);
    msg.command = 241U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GCETRHFPMOGAEPUIKQVEJQPXTNVPLMJOZNWGTUMEHWQUANRLRBBAVFEGWSJYYWHABJUUEOEOTZDAKIAPYFMBCOZM");
    tmp_msg_0.description.assign("HGCCQECWDRECRYRYZPRCFPHBGBGEJKUAPGCAPSOGPXIZLWSHYIXGBKYLCHHFYFAVT");
    tmp_msg_0.vnamespace.assign("GSTIXTMQEQUWXHUBSBOVGXCIWPKZWGWPVUSRNWGORGELFQHZJMRHKJBBSMNOYGQKSRDDOCJIBJTEVJMHFVFLNAKQODLGCA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MCZQJBHZRIUUSSQYTZPMMRKLURA");
    tmp_tmp_msg_0_0.value.assign("ECLVCRFSWXJTIQDOQCTEBJUMKWOGZNILXWLFCIGYUZMZIJROBUGRMLEYSWKFEVZQRAUTGBPSLJTASSZDBAHQBICNJOYDHDGUELEDKPIYRMXMS");
    tmp_tmp_msg_0_0.type = 22U;
    tmp_tmp_msg_0_0.access = 145U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GBXNJYPRDHIRXJUKOQLWFZJRLGGDGHFMSTKLKYOEKGDMSSXUYQQDDNIZEQEUNSMBUAVRWJOFLJPOFVACSXXTUYMAJQXVYYQIFIUMKVJNDIEGRVMBNPCCAWMCCLZRJKHXZPIKJBVPIYSKFDWUBBCENWGVJZYELOLPBTZROIOWUWCHQTTIAYPQLELTCYDHFGSCNTAQOAMSEMTDKMPFESHQNHWFZOCKPAVRV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GKQHCIVTJHEGMALWXARLPCXYVRFNYQGLFINYANOAJNQHQUZPOQRGBATLXROYWPIHBKULCMCYXITYEKDXSDCSSYTTFWCTRGUGOVCJYLXEZUZDQYR");
    tmp_tmp_msg_0_1.dest_man.assign("TPTXFMJUTDZJHPIJQIKECZFUTCXACCDSEGIYTTJPAWPABCTZDYYREUWNKYZKQGQBGLELVHJUMEIBBNBWAIXPYAYOWGQDZLKXQGZUSESFLOXDROULWHURREIMGYORNBNMWUPLRAFMKWX");
    tmp_tmp_msg_0_1.conditions.assign("RELLVTYLLUMJGCUDQXJJEOKFFMUEIPGBJBJCYDBGUIWXZXGGBJUXQIAGKUNILSWXWGRQCLITWUCNCAEIOPFLBMHXMZORDASLQKXANHHHEFPNCRADJSJARWMDLWOPMMTRTLWDBESQYNZATVFPRMYDTKYQHQFBGWHOUTFTZXYSZHIVFATBZER");
    IMC::TrexOperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 193U;
    tmp_tmp_tmp_msg_0_1_0.goal_id.assign("BMEDRNMTMMIXKICREGUDRSZRLRMFXQBAYFPJYVBZWHBIBFHA");
    IMC::TrexToken tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.timeline.assign("IPLELKGLMLUNKWVRWBXENUCPMAUNBOEODLBYFNJYAHUTVVWOBVVPETREJRJSQ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.predicate.assign("OPAXZFPJIYTYSJDIYMLRQAALRWTAVBAKLAE");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.name.assign("LEGDYCCLVEUZVUPRHTSSYVSSYTRLIGCYAAXKNLHBFUHOWIPEEZKQQVYBERKNJSBHDWXMPCOJUIGVJMWXQPTGXBRJBWUDXKPHIBZUBQCEVHEXTZDXNNFQIMDIQCUMESILXOMLTHFJAOYQZNYSZGTOBGLQIPHADWLJIZZGPYVBSTNGONKFCJFKNOO");
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.attr_type = 48U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.min.assign("EANSNAQXEFTMOZGGJQESFISXIZKEGYZAGMXYKORTFJQTEDRGMBBE");
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0.max.assign("WDHEGNQOUFCGEBVSVDCJNIEVPBBWXHZJXRDKCPVKDMVPDHKHDMFDPHCAUUFXFZNUAIVYAGIFDCOWNOIRAEROLJKBXRQSRCQTUUMQWJUBUCOKIQTQZZEOKYCPAWLZNJNMZPUWCJDFXNMZPEMQSHRBRJXY");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.attributes.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_0_0);
    tmp_tmp_tmp_msg_0_1_0.token.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EntityState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 33U;
    tmp_tmp_msg_0_2.flags = 245U;
    tmp_tmp_msg_0_2.description.assign("PXPZSNXOUYQOOOMWXZTDFGEUCWCRBBEUAWQJIRWVTCWTZENL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Chlorophyll tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.822735778799;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.441561328369);
    msg.setSource(4855U);
    msg.setSourceEntity(103U);
    msg.setDestination(517U);
    msg.setDestinationEntity(152U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KZJGEGKPLBQUSMVUAPREKNSUVIJGDSVGBMTCXJPSCQEZGEIRGLXANRHDIYKLBFWZBGATQMAYJAWKSUYRCMFDLXJZSJGCDTHUNCMZWONJEWRHPAIDSOCGPNVCXMFWZEOBDOPKWDRFGWHSTQXBHEUTBHNOPAZPWVWYRTMKUJMZTXHIHJMIIDDOBARSKEUICQN");
    tmp_msg_0.description.assign("CZXETUGDOPUOTTNYGRQBFBNJWWKFYDISDMZHSVWMUTBQDYKLFIASNLOQHVSSZOVYRMHTJUXWEJPXUAMEGEPXGIGEGPBNKASLVRAZLERELHZLQZKZQTUMRXPKWIPDTMDOKTNLUFBABVFGWQLHYXHRADGHMJJOWQPJKQJUZBACSCXMSCLBKVRTSOYGCRMWBQVCZDPFWUHEHILNKFCBDNIUPJADXCITRYIIAHOONCO");
    tmp_msg_0.vnamespace.assign("ZQNSHCOIQKMMTBWVBUPAKVKSPBPMGUEXZJMCTWGYIVZPKZIODYUTBDQTECQYHGNAAVJWPLSVOLHUCECZNSXMINPULX");
    tmp_msg_0.start_man_id.assign("FENPEFYVXAIIRBTVSXAQZEXOQPJDPEZFQRQNDUEUBBMOTNBWQZKCXTRDHEMKTHLHJNAFGNGQMWQVDAFCRUOGFVICEYIEFVNVFLKWGLCHMJOGWLXEBCZDCLYAOSZWTUPSPSUTJZTAZUKDBHZZJHLMICWKAXKLCGCRCVFPVKQLQDRXUIVSADDGMED");
    IMC::CrudeOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.788345377046;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.715902567382);
    msg.setSource(11577U);
    msg.setSourceEntity(92U);
    msg.setDestination(27183U);
    msg.setDestinationEntity(244U);
    msg.command = 88U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DYPJRCBGDZFOYVIBOESLHFKCIRZKNZIQSHPZVQSCWNNZXJBFQGSNATREKFFQQVECRAURPVBGWUXVCG");
    tmp_msg_0.description.assign("VWSZOLJECUTJPMRSAFYUQNKDOWWMSISSDRVUZCINDWECZQEEFDFRECWGERHMBMLKHEMZRQHKFTGMIEYYVBWMNIPBJOTUANPLYGOVOIEAOBVAJZFKIWHIUKRSBHBZXHMCOBKNQOLRTWSVHDDUTRKATVPIQBHHGYIJULFZSUCWGXPPPYKYGVGACQIA");
    tmp_msg_0.vnamespace.assign("YNYSIJTYKZDRFBGTZBUPURJZVDPNEALWMJUGKMRBPXBILUFSAFBOHODNUWIRXEZTLIERDYPWIJLYVHKHNQQKFSPFPXFHHVMZLCYEKHIRVYQGSWAGBQMCINHGLCPLIMOFMXSDCWXQPQZYXGWRQXMETXOSWEQKQAFDTVXSGSMEDELUZSTNXZELVTSBNAMOTZRFWGWYGUJVVVWUAAOTJCKJQHZTCBCRARBKAKDKNHIDHJPMB");
    tmp_msg_0.start_man_id.assign("LVJDDIKDWQJPYPWKRTHIKDXQJBNRZMCNEFHPDUQGPMACFYWSHXHUPCRDCOEEHSNAFTESHMGOLVFIAJVTIKWAQNTWAMVFRCLLWHQJDAVOMEZBJOZAJLMVLUBYRSDYCPXLJBQVKUBFRMVNTZGMICBIHBUGRCZLKNXOQBOZEQOPDIVZZXATSJBWTKRXIVWECEUSUZXOQCMHKUFXXJWSYNIPYHKUUGNLGTTFSABY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WBIIZLBJXHYJQEWJZKKVLEVQPINNJHAVYCOVQTYOCUOGKMUIJEGUOSOYXNFYDPZJKDDTDTGNILYQMJWDG");
    tmp_tmp_msg_0_0.dest_man.assign("DYWMPQKZQLSGIATCHLMFOTURYAITTSMSHAFXPFWJZUGFUELCZNMXXGOEQNDREYHSTDQKJVMIZAJCVHUOINTXKYFWGRRBFXHZODKELRRBGFPWSLMHEGGURHJBKNWUADRNNVWCYVYMQCRLAJUQFEAWBKHHYXVUTXCQMVLIDESMLLSWDVSJBXOHEVZJOAQZNIUNWKTGWOXSZQKBJBOIDCVAPPAKBDEJPOYVP");
    tmp_tmp_msg_0_0.conditions.assign("RYXQPITBPJDIGJCOXBULHKDNOSBRLTHTOYZXHZXFQJCGHUCIPOXWMLOOFBTDAVMRPKLLMAPKMNPSYTDZPCLSQUEYWFVFTZULUSNBBAWSCGINXMSZHJKCTFKJQUNHOPGRJWETMGE");
    IMC::MessagePart tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.uid = 46U;
    tmp_tmp_tmp_msg_0_0_0.frag_number = 2U;
    tmp_tmp_tmp_msg_0_0_0.num_frags = 46U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {82, 76, -66, -72, -29, 54, -26, -31, 24, 12, -108, 18, -88, 28, -92, -69, 113, 33, 43, -71, 92, 64, -20, -109, 124, -78};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Launch tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 26035U;
    tmp_tmp_msg_0_1.lat = 0.796494937616;
    tmp_tmp_msg_0_1.lon = 0.325166474152;
    tmp_tmp_msg_0_1.z = 0.470786440676;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_tmp_msg_0_1.speed = 0.365331634603;
    tmp_tmp_msg_0_1.speed_units = 232U;
    tmp_tmp_msg_0_1.custom.assign("PXIRJNEDVGIUMOVTSTGSBAYQUVYJGPOTNUZFPQSWRVBHCJZUOLVEKARXZCYLEYSEJVKRTXDIWLXZFPPSHVHMFUIFNWRIFWNFHOXKGSBKRDWJJJQGXOIBNKEABJFECARXKAZLUDTLYJLOABCZQOTENNQBTKMPIYVWXPAQR");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Chlorophyll tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.891760168225;
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
    msg.setTimeStamp(0.547246043806);
    msg.setSource(51244U);
    msg.setSourceEntity(41U);
    msg.setDestination(14144U);
    msg.setDestinationEntity(97U);
    msg.state = 247U;
    msg.plan_id.assign("KDIXNVYNSAYWVCZYUKTLNOPQVSPWCTCWFAUGQOTWTPIVCDVNHEIVRBBJMJLWPBONVRUMNDAYLZWMNXZVEMYCIBQJIAQMXTEGNBFHLELYPTCVDHTMUENFOOBWGZSSAJXHTAOKGUWRHLXDREZKBYRTFPYQKIWJBQZCCUEDUGELQLUQDGHXFJJZJFH");
    msg.comm_level = 193U;

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
    msg.setTimeStamp(0.543274593424);
    msg.setSource(6147U);
    msg.setSourceEntity(227U);
    msg.setDestination(8532U);
    msg.setDestinationEntity(41U);
    msg.state = 192U;
    msg.plan_id.assign("NTQYDPLOLBTJOZOITAMNXXGPOCKAUWAORWRZHFWHTNQYSZLBMKYXSFKCQVVYLAXXAGYYMSMFBZVPASHKWRQTJOQVUJUHTTCVQMXHYJBEVULBI");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.903405418448);
    msg.setSource(40040U);
    msg.setSourceEntity(125U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(233U);
    msg.state = 63U;
    msg.plan_id.assign("GSGRLRYAILZVZUWQDTHLISDMBUHZHHASMOPIWPQMXDZXCJ");
    msg.comm_level = 248U;

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
    msg.setTimeStamp(0.754689673088);
    msg.setSource(52393U);
    msg.setSourceEntity(28U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(108U);
    msg.type = 84U;
    msg.op = 41U;
    msg.request_id = 51849U;
    msg.plan_id.assign("YFAHADHYRGZBUNFVEFLMWNMCEIKCLKMKKLMHGXSIKSPPJVVEHNBFYYDGVUJVQJGETAIAJNZOMQWICQZMBOCVEAQURBPCJPOQSUHTCAUNYIYKXODBRMKYRTDRWUQRIJTWSSVZNJOLORF");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("MVYZQHJLYRWBSLXOBFQSGPRPQKRIFPWIKOTHAOGUUCSYTLNPDPJQLEWRNCRBIWPCDXEIMENUYLAAOGGOJNIUXERDVGCBEUBHZYTGLLDKSIPTHDFIDYVOFFFSOHCBRTZVHVSNNGRTZDQSJBJKNMSVMQJJKATHNGAHPUCKEOBRWWTAVHEKCZJPYVXQJAIK");
    tmp_msg_0.dest_man.assign("XIAEYWFSDUIEYWSNBWVHKRPTSBALFARTZJHDCMRHMGHPRFNWNYOQCCKUKZWCEQCHQEJNVMEQQSPVEZNGBJSTCBPYCDXVVVTNNABORZJXGTIUVZCWLOMJJOAEXBIALGUKCNKPTLIQTWQSJFEIJMHYTUYILKWXWDDFGVXOHBXFAYFHNYAMUHXWZLUMMHKXDAIZODOQYPLLGMKFRKSQULSDTQSFKBEJTINZIBVPLRJV");
    tmp_msg_0.conditions.assign("IPQCKKVPYLTWYLMBUVVTSPXWDEIRZBOUCIMYJCYBOQREPEWJSGZOWRKQXQGUVUWXVYMRNXCLAAXMZOQJVDLN");
    IMC::Depth tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.746363085611;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TAPEQYDBSKTCZVIXVOJBYRIUVKSPJLQCLXAQCWPWSTMREUBEFAANMWVWHGYOXFMEDGCKTKUAZCOLWIDYJBFR");

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
    msg.setTimeStamp(0.952495058345);
    msg.setSource(63348U);
    msg.setSourceEntity(63U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(19U);
    msg.type = 180U;
    msg.op = 55U;
    msg.request_id = 57688U;
    msg.plan_id.assign("PDGZXRSLYBMSFRYVIXYIEIUPTBGFSIPHCKYTDFFZXJIOZRWQDKLVQMNTKSRGBNEKNIQBVZJVIBWBUPFGLAPNXSWUNOBDIYXJQFMSAOOMDKKEVBCWUJICHSSTEYUNLALNTCHRNHKCYNRQTZXCLYKOJFWZWHODDPZULMHQWGDBIDSWAGPRSNHOROWHCVTXEMTLWQQEAPVVXXJOHRQQZGVAYZKUGGRMPFEA");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.571770937932;
    tmp_msg_0.y = 0.183050419138;
    tmp_msg_0.z = 0.439101167739;
    tmp_msg_0.phi = 0.386946446027;
    tmp_msg_0.theta = 0.891778956257;
    tmp_msg_0.psi = 0.359045247655;
    tmp_msg_0.p = 0.0659875165996;
    tmp_msg_0.q = 0.897668157331;
    tmp_msg_0.r = 0.613593149864;
    tmp_msg_0.u = 0.467965065827;
    tmp_msg_0.v = 0.203925421764;
    tmp_msg_0.w = 0.123321314473;
    tmp_msg_0.bias_psi = 0.449958850244;
    tmp_msg_0.bias_r = 0.656496470844;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AFYARKBYVPFKJZXXYRAHZWABTXBGZSPEHOSRYLTYSHKFTRCIRIDTOJNZWHVXGIZQIPCISNNLIGJZOEQXWXNORLJWMAZLXEKSDSZFCJMVQKBGUYUVOBYAKYTVMATLJNGHJPVICGWEDFLEFDTPNUCHMPINUMWKVSQEOGDFLBDVUJRQGFMSHJOYVPXULKDKRNEVWKZHEUCNQACMQLQDTXTOUCMPEUGBAHJCWCSRBBXIAQYTWSEHFGFMDQLNUOOBZ");

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
    msg.setTimeStamp(0.805348903372);
    msg.setSource(34286U);
    msg.setSourceEntity(16U);
    msg.setDestination(11945U);
    msg.setDestinationEntity(72U);
    msg.type = 48U;
    msg.op = 237U;
    msg.request_id = 63116U;
    msg.plan_id.assign("OYNTDAIIGPUWG");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 17647U;
    tmp_msg_0.lat = 0.0525305311769;
    tmp_msg_0.lon = 0.103230749218;
    tmp_msg_0.z = 0.0907169384269;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.speed = 0.57513758561;
    tmp_msg_0.speed_units = 12U;
    tmp_msg_0.roll = 0.654446997516;
    tmp_msg_0.pitch = 0.252658376348;
    tmp_msg_0.yaw = 0.126675138712;
    tmp_msg_0.custom.assign("KJAGDYSDDSAAZAICQEMMFHSJYJLEVHSPATIJNHIXPRDPQYJSBZFNJZRHIVNHXLBPOFRLTTBIRTUZPUJOYDIGYCCOQRFMWKIFMRBVLRLXL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SXLNXBVUNFYGGDAVMXNUUMWCNRAHOXOERYXTETCZQPFJGUNOWPBXDZPAAEQJURLQHVCZYYYSZVKPQPENSKYKVTDJNPCWGELZJAYGOTLBDLREMTBKBGTZBIGWQXISOVRUGSEDGZUBRJNWCIJVAFMWHMIQRBOYSTEZCSPWKTLELHVHIFKBSSQQFFRUFPDRXZCELDFJFMMAUMDWCGHJKNUNI");

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
    msg.setTimeStamp(0.914250575749);
    msg.setSource(51253U);
    msg.setSourceEntity(220U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(0U);
    msg.plan_count = 53296U;
    msg.plan_size = 1893820123U;
    msg.change_time = 0.0683669319823;
    msg.change_sid = 61462U;
    msg.change_sname.assign("AANYSWTOVRUQCPQNWCYIURWYTHLFGMANBSXLPIRPVRHSJEUKRSLDTIXRTGKYOQQNWHOGJHNJDNMMEGDMNZCJWKGQXQXAQIEBVHFBBZZYBRWTGSYPYVFHTWZEPQCOCDHGBVUAOWEJJAZJCCWUYXKOVHUCLHLTTXRUEACSKDMZFGSXEKDOIFINWKOKSSEIBZNIJADDKOXZFDMEEFMXGPYDKVVILGTMZ");
    const char tmp_msg_0[] = {-36, 38, 31, 114, 94, -42, 27, -104, 71, -33, -58, -21, -18, -41, 115, 94, -38, 105, -121, -109, -125, -25, 40, -5, -114, 91, -29, -1, 93, 60, -81, 98, -59, 87, -21, -6, -71, -79, 108, 59, 62, 54, -104, -30, -3, 46, 102, -60, 15, 80, -106, -48, 91, 68, -122, -81, -110, 30, -16, -3, -105, 121, 94, 76, -99, 96, -65, -55, -101, -6, -123, -102, -16, -119, 105, -77, -48, 114, 98, -84, 46, -84, -9, -32, 113, -68, -99, 103, 29, -8, 2, 89, -94, -79, 114, 62, -3, 29, -32, -22, -63, 82, -83, 46, 126, -39, -78, 42, 39, 66, 21, 106, -84, 43, -21, 40, -115, 108, -99, -53, 1, 94, 65, -118, 87, -8, 70, 22, -66, 33, -56, 91, 90, -63, 21, -3, 11, -72, 27, 101, -45, -66, 2, 13, -113, 57, -53, 46, -123, -118, -45, 7, 44, 91, -32, 80, 85, -48, 9, -31, 29, 107, -46, -46, -37, -40, -113, -107, 46, 20, -91, -122, 63, -20, -30, 106, 112, 79, -36, 115, -77, 53, -88, -15, 15, 116, 80, 14, 2, -113, 124, 18, -52, -92, -84, 46};
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
    msg.setTimeStamp(0.536661664416);
    msg.setSource(18932U);
    msg.setSourceEntity(200U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(131U);
    msg.plan_count = 61527U;
    msg.plan_size = 2080991139U;
    msg.change_time = 0.297060591331;
    msg.change_sid = 29720U;
    msg.change_sname.assign("OZZPWNCENPKQGVRIUKQAXCBZDQMWSJNJARBRETMMCIBYUZZEJAMROJCIHVRUWKJBXIODUDPLHKJPRVFYGGJGKOEUSVUFFHKFYASLTFOBOQTYBGTTAFJOWQHKHWHMXNERDHBYGQLYNRUUILWVTCGITZLDPCSFXPEFNKNXAHGMRVQOWSIIDRXSFCSLXIPVVALPQYMZVLCPGBXAAEGOVNKUEIHTJQQCYTFJZAWWECMSDDMTNYMYNLWDXB");
    const char tmp_msg_0[] = {-58, 101, 61, -104, 46, -117, -11, 92, -122, -45, -56, 38, -94, 25, 93, 80, -58, 4, 1, 121, -37, -35, -80, 6, -86, -47, -111, 114, -36, -87, 118, 95, 14, 66, 47, -43, -37, 75, 54, 59, 21, -14, 23, 126, 82, -26, 54, 98, -108, -59, 120, 11, 85, -18, 115, 107, -41, -85, -18, -2, 99, 65, 38, 16, -73, 42, 105, 21, 121, -89, -108, 64, 61, 34, -77, -31, 22, -7, 66, -52, -72, 107, -125, 112, -126, 101, -122, 113, -45, 89, 30, 44, -93, -101, 25, -26, 50, -102, 112, 56, -40, 18, 53, -14, -83, -125, 85, -29, 86, 51, 66, -122, 98, 87, -75, -7, 8, 61, 113, -113, -76, -10, -60, -124, -67, 22, 70, 88, 117, -121, 0, -79, -28, -123, 94, -125, -79, -98, 48, -105, 7, 78, -54, -111, 29, 120, -95, 84, -2, -22, 71, -104, 29, -8, -56, -95, -67, -33, -66, -68, -69, -75, -90, 18, 112, -73, 41, 21, 91, -20, 68, 52, -109, -27, 93, 66, 118, -56, 62, 64, -36, 62, -85, 91, 25, -87, -29, -30, 26, -116, -113, 21, 61, 51, -46, -46, 49, 51, 32, 27, 89, 18, 38};
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
    msg.setTimeStamp(0.751979684796);
    msg.setSource(19541U);
    msg.setSourceEntity(250U);
    msg.setDestination(14224U);
    msg.setDestinationEntity(133U);
    msg.plan_count = 29982U;
    msg.plan_size = 2258562674U;
    msg.change_time = 0.940547708485;
    msg.change_sid = 6606U;
    msg.change_sname.assign("YHOQHJZTOUIXASOSAYCOBTXVKNRZFVDOYVNXDTJK");
    const char tmp_msg_0[] = {-116, 79, -55, -91, -5, 41, 80, 60, 66, -79, 84, -58, 51, -96, -22, 69, -121, -19, 44, -117, -41, -89, -54, 24, -31, -116};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RTSUUEXUNIBQVYBSJOHLXDMWXVQBHRAJQYEIUAPAWEFOFDCYPTOKXEJNOWBHMQCNMEVNECJDLMIZMDLBTEEIURPKFLZLEGPKBDFNSFYCNTCWZKMMWIRPVAWHKYBWR");
    tmp_msg_1.plan_size = 15465U;
    tmp_msg_1.change_time = 0.297737294493;
    tmp_msg_1.change_sid = 37871U;
    tmp_msg_1.change_sname.assign("YCWMKEFBSUNGNSYBRBGJNGNIWVFEURXAFTIDBSOOVGZMFBBRPCZWPDGKLOHFYFESQCYLYDYRUCNWZJZPQQRRZGFCHAMAUNMEKBVXDKXPKBDLHTKVPJMWVNRCMFZNMLSMTQUMLXOXTAQLJTQRG");
    const char tmp_tmp_msg_1_0[] = {68, -108, 50, 58, 57, -21, -54, 85, 53, -128, 88, 59, -2, 97, -61, -27, -8, -75, -11, -81, 14, -101, 67, -65, -105, 112, 27, 41, -34, 24, -89, 21, -58, -78, 46, 65, 126, -113, 39, 73, -128, -12, -55, 50, -116, -105, -62, -60, -55, 50, 13, 49, 119, -118, -79, -5, -3, 83, -104, 122, 104, -69, 54, -108, -119, 93, 58, -27, -46, 60, -121, -71, -125, 4, -94, 51, -56, -36, 33, -4, 76, 71, -13, 23, 89, 120, 122, 106, 118, 82, -5, -25, -26, -46, -48, -81, -34, -78, 35, 96, 90, 110, -55, 78, 33, 47, 99, 19, 102, -48, 102, 77, 79, -110, -100, 31, 35, -106, 47, 27, -5, -88, -66, -1, -21, -125, 34, -15, -24, 35, 51, -95, 48, -24, 60, 103, 61, -47, 34, -124, 15, -127, 22, -25, -55, -92, -63, 71, 104, -35, 72, -101, -86, 45, 14, 104, 26, 30, 29, -57, -32, 76, 74, 49, 112, 102, -100, 115, 57, 9, 110, -54, 100, -82, -96, 61, -48, 124, -30, 12, -77, 81, 107, -87, -106, -26, -122, -9, 44, -44, -67, 16, 9, -10, -107, 69, 65, -35, -7, -123, -37, 54, -101, -25, -11, -6, 110, 29, 93, -125, -52, 103, -116, 114, 18, -25, 47, 89, 50, -54, -108, -54, -21, -70, -80, -97, 68, -11, 60, -84, 101, 110, 116, 109, -40, 34, 82, -127, 27, 122, 33, 55, 40};
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
    msg.setTimeStamp(0.820259345514);
    msg.setSource(55342U);
    msg.setSourceEntity(141U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("RHFVHLITHN");
    msg.plan_size = 14446U;
    msg.change_time = 0.756739443571;
    msg.change_sid = 32470U;
    msg.change_sname.assign("NIVXGLUVULKZMYGSNQTBENKKDCYAYZOSJJZDESFJERSXMVKNFNXSOVQPQGQGCCWUSBQCFIRHUCIZLDJNJAZEGRBJHASIYBBVIXABREPPRPTVXTWJVBRLRBPFXXWOTILAWATGAQFLWEOKMIDCVVMKOVATPWCBRQTLIQWEHKIDGYHFHOHNLPHTNMOWHEFOJXDCWMKZXEUAGUFMXZMIGYCBZSGKUJQNCPQKAHRPZFNDTDOMLFJULEPWD");
    const char tmp_msg_0[] = {-125, -15, -33, -125, -42, -99, 53, -104, -106, 82, 66, -32, -97, 25, -87, -90, -41, 51, -54, -106, 50, 48, -97, -88, -28, 90, 110, -90, -50, -106, 113, -33, 53, -14, -46, -92, 87, -34, 33, -21, -77, -39, -35, 108, 91, 84, 82, 48, 91, -18, -81, 47, -47, -64, -109, 63, 85, 85, 75, -69, 102, 74, 56, 118, 124, 74, 5, -8, -126, 126, 122, -40, 27, 10, 59, 36, 121, -14, -82, 76, 59, -28, -59, 123, -34, 95, -120, 107, 104, 51, 30, 37, 8, 1, 49, 7, -33, -30, -43, 76, 84, -40, 6, -56, 82, 90, -23, -58, 56, -5, -68, 36, 104, -60, -74, 125, -106, 26, 38, -28, 102, 9, 52, -28, -19, 2, 80, -27, -69, -84, 60, 91, 107, -49, 107, -37, 5, 41, 14, 55, -19, -29, -56, 111, 15, 48, 68, -49, -96, -36, 84, 38, 27, 122, 107, -22, 99, 26, 67, -23, 22, 78, 18, -60, -21, -49, -62, 5, -32, -14, 73, -18, 5, -24, -86, -5, 113, -19, -124, -18, -15, 74, -16, 89, 65, 68, -24, 73};
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
    msg.setTimeStamp(0.383091107896);
    msg.setSource(28664U);
    msg.setSourceEntity(40U);
    msg.setDestination(6044U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("LTSAUIJAJYAVBQACXBSQHEXMBHYDHQORYOIYVDZWNWUEFNHNPHDTQPTOKATGJFSQLTALKGPGLSMYCPGPIHKNKETPRYTMEWIKKRRQWXNNRZVSBYILUOJCXEQUKZBSWMSXDUXGHJIQVNFQZNMHGMIJOMYVMMDVPODVEXADIXZMVLCNB");
    msg.plan_size = 64115U;
    msg.change_time = 0.626792515104;
    msg.change_sid = 33790U;
    msg.change_sname.assign("GODPOTOBZILPEDKCGYVOSRMWVKGFLCQZXEWQPNPAMUDEAJTNTBSUJCIULBRTKADOYOXGWBESEXPVHKUNSVMOZMSRIDDTVIWKUFFVJEDZIENCRIKDCXQMBYWXXNWXYZGFKHJIVRZHPZAENCGSDAVLIHP");
    const char tmp_msg_0[] = {80, 23, 83, 59, -77, -60, -70, -62, -97, -123, 35, -6, -127, -27, -42, -56, 108, 37, 41, 96, -73, -94, -66, -122, 18, -73, 17, -11, 64, -47, -22, -100, -124, 59, -122, 52, -46, 10, 17, 86, -87, -39, -30, -98, -116, 93, -111, 67, -33, 122, 106, 122, 38, -64, 74, 80, 101, -20, -93, 10, -103, 53, 115, 57, 7, -80, -92, -100, 42, -122, 44, 109, 19, -60, 91, -114, 15, 123, 7, -50, -19, 51, -65, 126, -41, 43, 91, -89, 9, -36, -57, 106, 31, -2, -26, 40, 3, -8, 112, -56, -3, -66, 116, 50, -6, -70, 21, -45, -35, 26, 71, -76, 119, 86, -47, 11, -114, -1, -83, 16, -113, -27, 96, 27, -117, 74, -77, -53, -62, -96, -115, -32, -33, 57, 44, -84, 5};
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
    msg.setTimeStamp(0.996437604095);
    msg.setSource(37188U);
    msg.setSourceEntity(18U);
    msg.setDestination(5216U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("ONQDRPHGPUJOGMDOUFWBOWHVSAOKKQWSUQYAWDVEIKEOSJAZXPNEXISTICLRUJQSATJDOBFNLAJTCMBMBLRJZXWLSYRSXUPVHWMZLXXKNPFVPDZMYQTDCDNFGTV");
    msg.plan_size = 42340U;
    msg.change_time = 0.397097106266;
    msg.change_sid = 58199U;
    msg.change_sname.assign("PVULPKAWOSKVRR");
    const char tmp_msg_0[] = {78, 90, 51, -64, -111, 106, 3, -80, 117, 111, -33, -39, -120, -109, 91, -57, 94, 50, 37, 110, -77, -77, -99, 28, -36, 109, -69, -103, 52, 41, 42, 101, 86, 88, 101, 80, 102, 100, -39, -126, -123, -9, -67, 97, 98, -53, -109, -94, 50, -53, -93, 61, 27, -19, 125, -86, 108, 31, 97, 90, -25, 124, 27, -15, 53, -90, 14, -122, -106, 22, -116, 28, -103, 70, 100, 62, 105, -120, -42, 56, -100, -117, -65, -67, 99, -49, 62, -18, 0, -74, -112, -111, 97, -54, -8, 112, 44, 35, -43, 53, -103, 75, -41, -21, 71, 31, -17, 105, 80, -4, -76, -73, -18, -106, -106, 57, -71, 122, 7, -36, -91, -29, -26, -62, -40, -95, -98, 91, 5, 25, 74, 95, -105, -14, -96, -9, 57, -6, 19, 104, 53, 106, 112, -61, -75, 59, 105, 116, -67, 15, -56, -87, 20, 52, 12, -56, -5, -128, -120, -81, 74, 77, -57, -4, -11, 122, -102, -108, -123, -13, 58, -60, -76, 36, -85, -103};
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
    msg.setTimeStamp(0.55813347745);
    msg.setSource(20527U);
    msg.setSourceEntity(155U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(104U);
    msg.type = 29U;
    msg.op = 63U;
    msg.request_id = 38046U;
    msg.plan_id.assign("HRGYBAIUOZMEKREKLSGVPZXEYBKB");
    msg.flags = 53563U;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 9U;
    tmp_msg_0.error_count = 209U;
    tmp_msg_0.error_ents.assign("TLCXGEJJOOCIMVBFLHGJPWPXLCXXVTUSSQQLTPOQXYAOTFNQSGCGCFZXZFIKKZTJDMJPWUJVTIREQMRQZKENKNFZKLRPBQUPBXYLESDSDHASMDULJEAFOTRZSUFVRHYMACBKOBZEGYIIDHQGRJSVTHWUVAIBEYZQMRDBUPYYBSDAHLY");
    tmp_msg_0.maneuver_type = 52240U;
    tmp_msg_0.maneuver_stime = 0.0911262971978;
    tmp_msg_0.maneuver_eta = 33172U;
    tmp_msg_0.control_loops = 3597611125U;
    tmp_msg_0.flags = 246U;
    tmp_msg_0.last_error.assign("NYAFIWDWCLYWXAAXJMHMOPHFODMFZYUMQTXRTHASUAPUVAWKIQNXLSBZIXQGWGFBCQWYIEIFVGQIUPVKSDOGT");
    tmp_msg_0.last_error_time = 0.98982048074;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OJECXNOBQMJOOQHMXUQIHWMFGCFDNRTVZPGIQGNLMXKVPTJFTPUHUFUBMOAHMBGZPHUWOYLEGSRTDHNDCLYMWUGMRPQTVQAPFDQJLRSCOHXNRWRYIXFDCYFLPSRMHTXZKPOYCVWYBVGSNKYLEISZIBDAQVTHKZDGAZSXECAKPIIDNKPCDFLGKSJTWLBZAUNUXFAXMCWWVYWYIIUQZETSXEVLEEEGEJBLA");

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
    msg.setTimeStamp(0.339208963751);
    msg.setSource(4670U);
    msg.setSourceEntity(146U);
    msg.setDestination(31951U);
    msg.setDestinationEntity(213U);
    msg.type = 40U;
    msg.op = 234U;
    msg.request_id = 39205U;
    msg.plan_id.assign("GTGPHCEZBAXMKFPYEBJZOEYDAIXZCVNLCKKJIGQVWGUSGDAKDKHHFDFBPNQOBRNJRZBVQCWCVFLCRYWOJAMSLNESUPMAITZFISMKWWEXYJMQXPDZOJEAPQMUSSTIDGUQAAUPHXVQRDLFYSBMNZUTNMRVJRYIHLMWXNFRCVIRHQRFPKTLHOIWWT");
    msg.flags = 8919U;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("YCQODTNBFYTUPEWDNVSIWEHMWNTKTCGTUALBDJUCFYDVAUVESRMGZUHAWDRGREROJPMIULWQQDFPEOPZOXXGWUPHCBLZZGHIKUQSFVYMKDWZZHYZIBQLDVQOTARJAJLKTLBVIHFBQKNYRKJISKDVPYONXGPEHXONPXLJMFRCOMGCJXSGNQNVHNJFXZCWUAKCYFLRMFJCIJHHQEXMLFKRVBBERSSSOBGSWENPESWMKTP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CTZLCSAWWABFFJQONLPRZUQYHWVZBZDXVHDSEMAZTOYXIQKBXLMRMGUOJKVCEUPNODSRDKLZGKUEBMBFORWPRFINKCUAMZJLFTNWJQDHLHCMKHVQSYPNMZNIXXHWYYR");

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
    msg.setTimeStamp(0.787562213385);
    msg.setSource(42885U);
    msg.setSourceEntity(108U);
    msg.setDestination(11181U);
    msg.setDestinationEntity(33U);
    msg.type = 131U;
    msg.op = 52U;
    msg.request_id = 46365U;
    msg.plan_id.assign("DBRAGYEFSIKWTOSWWHZSPTOJMRVXPBHIBAYKPEKXVTFZFBPCWHLVPOUYMYTNXOSWPYZBVDXEMY");
    msg.flags = 9365U;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.0729737045508;
    tmp_msg_0.i = 0.620455803615;
    tmp_msg_0.d = 0.452201184589;
    tmp_msg_0.a = 0.826968413158;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QXMOUFTRUHYTVFCLYBDDWFDTCZIBQJNCUDSHNNHMROJMQKBQVKWZKGQKKRLJIYZIMWJUAOPEVXALCAEXGORFOSCFZEFEPMHXCSLUMPXIWNQBYIMDSYKSMAPHHSJVHALOXXRQFXLGLCILITWTPBVYTKMCEHRGRGGETKIRNEBPWFVQJHFVTGYJEUNSXUYSZWZVVTMEZPUBDQOBZXYIKAV");

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
    msg.setTimeStamp(0.838395592507);
    msg.setSource(52132U);
    msg.setSourceEntity(39U);
    msg.setDestination(32363U);
    msg.setDestinationEntity(187U);
    msg.state = 11U;
    msg.plan_id.assign("TRDQQBKZPPDNOQXHOPRITIDSLYRLCHOUHWBHZFMRDOPRKWYWCEUSAJLVEOETYYLNSWMMXTMFZC");
    msg.plan_eta = 1325345901;
    msg.plan_progress = 0.446513859838;
    msg.man_id.assign("GKCFEQBGBJCCRDSZPELEUSOHOMYRULPRZEARHHQSUDZUNWNIUY");
    msg.man_type = 60966U;
    msg.man_eta = -1045485323;
    msg.last_outcome = 123U;

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
    msg.setTimeStamp(0.607592024346);
    msg.setSource(18240U);
    msg.setSourceEntity(112U);
    msg.setDestination(16998U);
    msg.setDestinationEntity(67U);
    msg.state = 48U;
    msg.plan_id.assign("KEXFWVCACXIBOTROJLICKXBFOMZPTGIJFJJAQCDTOWNWRWHPWLLQFJKROLQSSQIUOXTEZXIPXYDKVNNQTOHDUVHSUPQHNMGNUMXZMLXAIIZYEJXJGEKZU");
    msg.plan_eta = -1268043009;
    msg.plan_progress = 0.574623554843;
    msg.man_id.assign("UZRJSTNIIXESCTWPFURXBCKPIDEQXJNHGLEBTRQYTIPRUGZHFICODFDNLFMAIVWNBUVLDJXIOZMDWRUULBMCPOKSKTHFAGNQIFGKUYRQPEFTUBRSZOYNYHHYKXCKQGWRGLWCEAEMSWIFDEVMPJQQVKHWJNPVVXPDJQBPJKJLDWOAOSBAAOFW");
    msg.man_type = 41051U;
    msg.man_eta = -798506899;
    msg.last_outcome = 18U;

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
    msg.setTimeStamp(0.0710904030181);
    msg.setSource(6118U);
    msg.setSourceEntity(54U);
    msg.setDestination(43352U);
    msg.setDestinationEntity(2U);
    msg.state = 76U;
    msg.plan_id.assign("ERXBTLFADNCYJYGCFYIKQGWROJOWRHHWBAEQZVOUWMKATISNCLPZHOTUIITXFQKTVAPOUUITIMNKFRLNUUTGRJPERBJ");
    msg.plan_eta = -59201230;
    msg.plan_progress = 0.924493352355;
    msg.man_id.assign("LVXMAAMPYTCLOQOEQRDRSFPZBYRUNUNUBINSJXSKICHFPDQGLDNZZXRGSJKZENYWQHWFYMBJJPZBHMGATLQXLZWCYELSWDHKAIIZPTKMFTOXRBLKQVWUIGWGTWYOMFIMGRVIEQEURFMOSDVJTYDETC");
    msg.man_type = 60850U;
    msg.man_eta = -1432169321;
    msg.last_outcome = 127U;

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
    msg.setTimeStamp(0.174459585902);
    msg.setSource(19782U);
    msg.setSourceEntity(128U);
    msg.setDestination(24372U);
    msg.setDestinationEntity(226U);
    msg.name.assign("TFIQNHUFNGQKLMOPNPCWVXKCNJLEPLJKDZTWVSFVVGIFLDRGWGZFWDIRFPNJBXWXKQBIMCARHDKLBDYPTAZYKXXKATOJDJTGLOQEUYQPNRUJOMGFLENDGPVSVUFECMIZHISMRKEUKUIYTEUYADPLYSGWTRRGBYDKHXHOIFYHTQXINFASUSQHRMBPZXABOHCNCQJXAVEHXMMGAURCVYCZWBNJMCWZBEBWOA");
    msg.value.assign("FFVYGDGPXLVIWIVALHYWXJCXZSEDSRVIENSQIUICASSBGNBIO");
    msg.type = 78U;
    msg.access = 220U;

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
    msg.setTimeStamp(0.230612816762);
    msg.setSource(17461U);
    msg.setSourceEntity(150U);
    msg.setDestination(52464U);
    msg.setDestinationEntity(240U);
    msg.name.assign("AIUSFSFNYMRJRIBZKOXWHQDCTGACUMYPDDGETBNETZSULVGHORFOURTZWMYSLWXFPBIHCRVSEMFVEFKYLDABQGWOOBDAXRPSMPPBCYJGXEIWDAEONCTGHXEAYYQFLCVLQDIOIOIGKIAAMKNHJ");
    msg.value.assign("LEOBYQARDQADABVZJGSYUNPTQTUMSELQSMTCXSCZNYMVZBLWLJBXYKFTRBNKCTPFNTRLAJGHKXTGJQZHZJXUPCEMAWGRRKNTIJWNYWLUWLPGPIPHBQCPWMXTWVDZIAZHMMDKUEBCSMCNDWQGFRIDEOFRSILHJDOKFENFAVFYZDPRQKWPJVVPGDXLEIUFJVUHSFGYEDAKBKYOZSKCUNLHJUNAWFQEOERSO");
    msg.type = 245U;
    msg.access = 48U;

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
    msg.setTimeStamp(0.24044106306);
    msg.setSource(26790U);
    msg.setSourceEntity(104U);
    msg.setDestination(24495U);
    msg.setDestinationEntity(63U);
    msg.name.assign("JRRJAFYMMRQKKHQBQBJHVVIIGSJVTWRCQVBZTCEVLJWWQUIRUEOGTMPOGKLETGYIFWNCCBXMISGGDMHFEAPOECYCQUUHLMACLZPOITJSYYVCISNUZJDYXSKLWQMBKAXAXHXVALOVNHEKDVZZUCAGBHFRDMRRJKYJPPKFXSDDWEIAVLGOBTDNAPXBRFBUT");
    msg.value.assign("XKUOGCIGCXFIHFTHUMAOXMFSVBZBTQGXNSOHXQNSMPRCAZPINAEVDEYTDSPMRYWLHWQFWNOTCIGNYGZLMOIAQWEAFDPVHWZSRMZNJHGKYJJUAATVIMAANYVHKYFQUHZULOXZYJRQSTNWRK");
    msg.type = 91U;
    msg.access = 130U;

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
    msg.setTimeStamp(0.439013745698);
    msg.setSource(37575U);
    msg.setSourceEntity(235U);
    msg.setDestination(36341U);
    msg.setDestinationEntity(203U);
    msg.cmd = 15U;
    msg.op = 212U;
    msg.plan_id.assign("KPDAGBWJVLMZGBKYCAQPHTCIDLJQYUATISFWKSQGXCNHEIHVAEOYIRKJMJWFNQKSYENOAUKFXPOBOAAFHAUJEJCQVPHMAVCFWFZCEAQEBVYXEBOQBVRVDJFMTUMRIYWDHILQSURKCDMGXWDVNLZGRHXSWGVZLZHTLOFMISKXZXXJCPHKROYBLHPGTLSNGCULZTKUTYUDQVIP");
    msg.params.assign("FPMBBJEGFJAWHKNXXAFOFMDWTYRQZEZDIUUFZYGUTQMYHIQFZRCZTNJLURPOSXVGLHVVUKNYZJTDRWWNSBTRLEGAGQEBBGCJSWFDJRAVIEUWUNJAOXTYKDIKQDCMULVFDPSVKMTVPHYWXOXAIMETPCTTRPGKVWGRGXLAOOIYYUSIBIXRUYBWBNCKPCCMEQMHQEDOFILXDPBNICLZSHCZOHSESKRLZGXNJLWQOQDYHPSCFJBNVA");

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
    msg.setTimeStamp(0.35896777434);
    msg.setSource(8188U);
    msg.setSourceEntity(57U);
    msg.setDestination(44850U);
    msg.setDestinationEntity(237U);
    msg.cmd = 172U;
    msg.op = 49U;
    msg.plan_id.assign("NOMLCXFFOEISDJQGTLELVBYBSHKTZSMVKVUMTPEJBWAKJMXVKMZPAXPEUNEUDONSQNCAHCLZCYRQFTRUJHNUI");
    msg.params.assign("FKJOSOUMRGPXTQEWFAIWORWMJJVQNBLDSGBFEVCFWZPZLLT");

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
    msg.setTimeStamp(0.851125474584);
    msg.setSource(12533U);
    msg.setSourceEntity(95U);
    msg.setDestination(41430U);
    msg.setDestinationEntity(164U);
    msg.cmd = 133U;
    msg.op = 247U;
    msg.plan_id.assign("JVFCFUDTNXIEABBPRBAYENJQQQLOAOKMNPXQLBEIWSTDCYUXJROSSHZIHYXMXWEZAMDKRTUIFVIULQLKYXHRDXLPBMRGACLWQHHTVVSVPAKOJBCVJSYTBBAEGQKZTWEWPMPGNQRZFFP");
    msg.params.assign("LQPRNMBITXGVYTNTYZLUWYJIQLLNWLLKGOBLEWKFUIQJRVEMD");

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
    msg.setTimeStamp(0.980205375806);
    msg.setSource(25508U);
    msg.setSourceEntity(198U);
    msg.setDestination(25900U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("QHOCFEOTGNBHUNALSRPZYHUXAHXCYIVAPIZCTEOOTLZAIJGHXSDQLNJMWEYQEFGZCFNDHXJCQTEJRXIMILDBESIPXTCWWFOADEGVRLBZVPDDQZYALXPMIMSRVBOMSGIVEIULGTRYKNSXOMUFPBUKZBHASHDNTWFBW");
    msg.op = 162U;
    msg.lat = 0.714504939543;
    msg.lon = 0.655880044271;
    msg.height = 0.256337594915;
    msg.x = 0.378138465518;
    msg.y = 0.515129120379;
    msg.z = 0.609244861881;
    msg.phi = 0.726735053096;
    msg.theta = 0.136003448409;
    msg.psi = 0.936912353685;
    msg.vx = 0.822552751988;
    msg.vy = 0.806190534925;
    msg.vz = 0.588553491569;
    msg.p = 0.93108423103;
    msg.q = 0.897516785322;
    msg.r = 0.217638798961;
    msg.svx = 0.399284840726;
    msg.svy = 0.752836715018;
    msg.svz = 0.442899042724;

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
    msg.setTimeStamp(0.299254643979);
    msg.setSource(14125U);
    msg.setSourceEntity(51U);
    msg.setDestination(58379U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("SQFKQIPITQPWWLKNFMXUPIOLP");
    msg.op = 117U;
    msg.lat = 0.646051500043;
    msg.lon = 0.454846358664;
    msg.height = 0.990872641364;
    msg.x = 0.571099046272;
    msg.y = 0.119692159785;
    msg.z = 0.156544254757;
    msg.phi = 0.884181547869;
    msg.theta = 0.744006093495;
    msg.psi = 0.866429301254;
    msg.vx = 0.623392180949;
    msg.vy = 0.76402877822;
    msg.vz = 0.052853136749;
    msg.p = 0.351577242271;
    msg.q = 0.558891545393;
    msg.r = 0.510407979111;
    msg.svx = 0.00880794394574;
    msg.svy = 0.99714960198;
    msg.svz = 0.118387515716;

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
    msg.setTimeStamp(0.167960347054);
    msg.setSource(41939U);
    msg.setSourceEntity(114U);
    msg.setDestination(22511U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("GCOCMCRJUNAGNWIUGFDAJMSLFWMVEZGUSZOYLRRGXBDVTCGHZAXINOWIMMDRWPBFBCO");
    msg.op = 197U;
    msg.lat = 0.78658660202;
    msg.lon = 0.370316879801;
    msg.height = 0.166574997747;
    msg.x = 0.696505730492;
    msg.y = 0.742482445667;
    msg.z = 0.102981459494;
    msg.phi = 0.926279530654;
    msg.theta = 0.784582543966;
    msg.psi = 0.416401099577;
    msg.vx = 0.147556288992;
    msg.vy = 0.32973412613;
    msg.vz = 0.228192079808;
    msg.p = 0.477957693834;
    msg.q = 0.499835625139;
    msg.r = 0.356362083518;
    msg.svx = 0.82273621653;
    msg.svy = 0.899896400329;
    msg.svz = 0.0895195688316;

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
    msg.setTimeStamp(0.731888101472);
    msg.setSource(8700U);
    msg.setSourceEntity(169U);
    msg.setDestination(22632U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("TFLKNAGOSTSXVMAWNURQNPCRNJPIDPAHVDWXADYKHEKSNBYLCFGFPKIFJMSNGPMTERHJOADNQFWBKXZFBSGIYZULRTOCJMAQUERKZNYOQZTVXMUEAXCKNJCLIW");
    msg.type = 64U;
    msg.properties = 221U;
    msg.durations.assign("VLFJAOQKPDDBKQYTGCSVURZLMYAJIENMTRTYFRESUDKZWOGBAPSLSZCAOPLXPTWLMWZCHSIWMKHBPALCZSNZQQPZYUIGFNMHJRBWDXURXOZNOJHXUHDWUDNYLJFHKWICLKOTJNSYYVWMTQCPAMQUYEUYCFAGLQTAGKVXREZQBPVFODCMVIGIXHFTGDVYVCEOBWFTJUXGEENQS");
    msg.distances.assign("QSZKBXRVGLUWTGNMJYDFGLIWPRLFOJZXNWSXYTLJUMOGIFHTLYVPTLSZOSRKNDEEFHQBUHWADRIIHVNTQEJBEVHMFLBJDUGHQASKDOICZAYEVXKQQGVMWFHYNMBFWEQQWRJURPEYWYCPAPCHIDLEBCYGIBSXCDZCHOKMRHIGFOUQSVK");
    msg.actions.assign("JONFRXMTTULTPEHVBHSKWRGZUCZLQQHOJISLPXTNJWZPUQSHOLDOEEZSQYKYODNNGAWWIGPVVZFJPGXMWFKMEWNCTWXWPBZQDONNQBGUVF");
    msg.fuel.assign("HYMDOLVSPHQRRTMZUMWGNBLRCWDXFMBGBBAYMXMWSXPLPVTWGUUUFIWPJGFUERCXVKHIKAYFQIBQBNSIDJYGGQKUBZGYFQBYTZTLIEJNGSSIRLOMEODFUZZMESZUACNNDTTJPZRSEKIGEPVKPKDCFIOKRZLWKKMITCQHFVBAMTNYL");

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
    msg.setTimeStamp(0.613356418561);
    msg.setSource(41093U);
    msg.setSourceEntity(199U);
    msg.setDestination(11863U);
    msg.setDestinationEntity(2U);
    msg.plan_id.assign("NSLBSOQPVXXJGNBVFONOAHWLJXXKIGDSBBMKGVUIIQICCHWSPXSDTSDMHWVABETBWHVDFAQYUBGUGZDPGOLKFEWXLQZTCACMZVZKUWCOKHOXXAZMEEGPKNHGWVHCYVOTTJWQOIYSEJBXJLKUIKRCMRCNAMEZFUERJRKUTDWHGLMFFRSQYJPATCCPEBZPOPVQUARTGYEREHZLLIRQKFYUNVXDTDLJQMTMDOPIRDYSIRFYPFQ");
    msg.type = 105U;
    msg.properties = 99U;
    msg.durations.assign("TJDVFCQCRJQDLRABPGMMSWVCRHCMHEUQIKJLIZXVKIXSHVVLWYFHJRUAHVUZLGFOCBOUHHFXDELNHGWWSGZYRPBDRQOWQLLUAZXBAISGMTPSDNDPSIRKEUAVJBJMUFZKBUTXGMZFFGKSEPYEOCDINMDXTGTZXCKWITRJMLAIIONFJYLAZJOBSQTAQPPKQLNKZZQQVROSECCKAWNTRDHPMEXPMNNNFWVSGYOBTYBIYGCX");
    msg.distances.assign("ICFSCDFAQGKXNPCTOJXZJOXLFLFUTJUZXMDZUGOZKKAJTDOMDGUINLHEQUERWKBRWGPKJNONGCIPRECWDNAERDNQCBOGKAVSLPBCKRUFKEMAINCZQJRFHEIYNBURYEHGHSBLVYJLFZFHSIAJMXTWTOSWBTVXPTWKSVDOHJVPPYRDTEVUJAQMXGDUSRXYEWLAIAZGSLHWMIWDFPVMYBEWZO");
    msg.actions.assign("KOBXELGYFPGZQHPDECCNWSPUMSMTJSUDYAURLEICAVJQIODYWJYLKFSVDRRZWZMAZMPDHGWFKRUKKABSISVEPTNDTGTUXZSIIRQXQBJWCUUZONDAMANQUMGWMKYYEMKLXX");
    msg.fuel.assign("OOLMVMUPYUKGNXDUXQBQQGBSMFSYFQCYRJTBUHIQYTLRKUJPTIHOCKFDSLPVEJGTTIAJVHHEDAAQGMRNXUXPGUTZXAHTNDKLXJSBWJXACSOJLWOSEZNTVRWAUZNAOGSZJNGSQIMKZROHIOZCBYZYNPDZWPKVVIGELHCTXIAAZNSELLBDPKQMHEMKMIRJHCYFFFNKRVDDKWFPEQEBE");

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
    msg.setTimeStamp(0.669388960343);
    msg.setSource(26122U);
    msg.setSourceEntity(100U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("REUESZTFUHBIVGBGCYGUZNVLFZGMXVLJFTBNXHLUAFQXOWHZJHVDGYXZERRJLAEQQXOASXIILMRALIMWRPADLMOYSNNOPUIYTQETQWEXTGGTRFVXYJORXPKYNRSWDSEIHQCVZYSDBPNTBJIFOU");
    msg.type = 210U;
    msg.properties = 60U;
    msg.durations.assign("CPQJTQPYAGBXQJLTXTEKWPWXHJPPOQDYSBIQYIEVGSGHREEJKADTZPLOWOFFEZGVXHVAMR");
    msg.distances.assign("QWFANPQNRKLYDCWVETACOCSGVMCRYRPQRLTEUSHWOHZKKLGHBIBJSIAIWOPXOVDUFPMPUDWXUIYBACBVGJOLJUONSACGZLTGJEVYAXZKDZGMBOAHHBMULYLPHJVCNQAWNE");
    msg.actions.assign("CDGMIHZZFKMODYWECIUVUXVWPNPLIWWUZKMNCYFFLKLEZNNTQVOSXNWBZFFAEUDEYXFTOITURTZXDAMFMEDRKPAQBPGOTWBREHDBMOZTJCUCVGLVSYGUYXOHQXKGJQHMXJKRPAVUZWQSWKFOQSWMHNVDBACYKDGAFLJSTSAVEGHLNBEACXSINWMJYPJCIRKDQVHLEHXGRTBR");
    msg.fuel.assign("XMBKMMHCLXSWZDQWFOQROCAFFEHTGSPUMTIVADXWLJGYRTTOMBOZVCEQZYUSENNNFPUJRNRCXNXLBKDNAXWEHMHVELKULPJSQTQVIFAPOSDGWKUILWMLQMJMRJNWHZBABEXJCIFTUFYYYAIYPTIYSVCC");

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
    msg.setTimeStamp(0.989694765462);
    msg.setSource(23658U);
    msg.setSourceEntity(230U);
    msg.setDestination(52294U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.268738631995;
    msg.lon = 0.335650111518;
    msg.depth = 0.207198700434;
    msg.roll = 0.512375844173;
    msg.pitch = 0.485712632088;
    msg.yaw = 0.55029881973;
    msg.rcp_time = 0.159226813838;
    msg.sid.assign("HTMIOVFQWQWYHYDILNUGEKBNUSPBPQTBOQKYCBCDRZHJMFCGOVNIWWYNTZBQWNAJDIJXQUVGWJICRDMFSOSUKZZXGMSBHRLGOJNMEULBCFM");
    msg.s_type = 138U;

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
    msg.setTimeStamp(0.0749254956352);
    msg.setSource(51700U);
    msg.setSourceEntity(220U);
    msg.setDestination(44349U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.220080581646;
    msg.lon = 0.0247000540665;
    msg.depth = 0.281860499783;
    msg.roll = 0.0864418083391;
    msg.pitch = 0.230775721637;
    msg.yaw = 0.0723155026707;
    msg.rcp_time = 0.00541548068191;
    msg.sid.assign("RYERUOYHEZ");
    msg.s_type = 26U;

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
    msg.setTimeStamp(0.265807107701);
    msg.setSource(16070U);
    msg.setSourceEntity(46U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.529579951923;
    msg.lon = 0.775302936997;
    msg.depth = 0.649922090693;
    msg.roll = 0.669179842179;
    msg.pitch = 0.838056026135;
    msg.yaw = 0.638716313632;
    msg.rcp_time = 0.727111443132;
    msg.sid.assign("XRJNZQBJAEPLELRAMVLMUYIEDQCESLFRXWCYLEVVHMBFFKQTBWRDCGKWXDAUGBRSKMUMBPITZZJLVNQSZGRDMFDBVXYPXSSYISGMAHSCXNSXWXUIAKTLFJNAWQJVFYAPQNOITIBXCTWVKWGUUPJZDZICYDVOSFHYCXJYTELTNLJGWLAOQHNHTJZOZFKRIOUOANBJPDTBHKPEPGGYBOKVFRRKPOMZEDFEZGHAUKWDUCRNE");
    msg.s_type = 210U;

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
    msg.setTimeStamp(0.848503798849);
    msg.setSource(46343U);
    msg.setSourceEntity(67U);
    msg.setDestination(58917U);
    msg.setDestinationEntity(241U);
    msg.id.assign("AQCLPFLMGNZUGWBACGUIEFOHLGKYHHPACMNKQPNPJSMRYVMIEQPXKGIWKBXJOKCTZANZZSKUYIAJERVSUALGYTRTAFTQ");
    msg.sensor_class.assign("KVPJQKSAAABYNWDCRIIFINBTRMQWQZXMSOWZJWVMYACFEVRXSMMAMCDJJBUFSKEBHASVPDEAKRGTXPUBMHDUDTGZCWLENQKYTELFXLIPIMFTLOPIECPWQXORUQOZAENENRSRCLYVQGZNFLWWXOYGUHTBBSAVYAXWUOUMC");
    msg.lat = 0.188474586943;
    msg.lon = 0.0219491115413;
    msg.alt = 0.821959903149;
    msg.heading = 0.970853586125;
    msg.data.assign("VDYXLBDFVEMBVCUGOXSJZNLBIVUQTLHAKNBYJULERQPPHEABQHYFQVNWZRODXSAKFLVIDPDXIZTZGHCMBMSOCHSPLCTTHAKKHLRJBCUUFQOCDPNZMJOKMVFGUHERPMRIYTTPNUOYQEAYMYIOCXHNFIGWNYMVBEIQNGQAACFWXGPWUGGZIW");

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
    msg.setTimeStamp(0.00567701618427);
    msg.setSource(43460U);
    msg.setSourceEntity(28U);
    msg.setDestination(63066U);
    msg.setDestinationEntity(168U);
    msg.id.assign("CSNWOBPNZMLFWSSKYKXWIGJBUMKPGIXOJGQDMLUHAZJKCHZKEMOABNGXSSTLSYJCLXLXQ");
    msg.sensor_class.assign("ZFVOJDGDPNPHQCENSODAKRONXJPCIAOIT");
    msg.lat = 0.382806499521;
    msg.lon = 0.130179141076;
    msg.alt = 0.652118308789;
    msg.heading = 0.801015541619;
    msg.data.assign("GKICHQAFNDTUMRFSQQBBZVMMRFNRLIRKEJKZBOXLDRZMGGQLHEWYWRSFJAOGUCFBJBXICXUBUAHRDUDVGNLHJKZTGKOLEVEOCHKL");

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
    msg.setTimeStamp(0.730538506131);
    msg.setSource(5100U);
    msg.setSourceEntity(194U);
    msg.setDestination(29268U);
    msg.setDestinationEntity(73U);
    msg.id.assign("BLCFQCJZODUMOXVYDOXMZEABAFKHPBPLARYHKGTSENHCNOINNQAUUMYFSRIG");
    msg.sensor_class.assign("FEXPLXGVBTQFVAAPHNJZWJUVSRAIJXGEYZFSIUNLCTRKYQQBZMXQPQCKWWYZYJOF");
    msg.lat = 0.533796431599;
    msg.lon = 0.348184940725;
    msg.alt = 0.0154153900556;
    msg.heading = 0.570637841181;
    msg.data.assign("CPMJBEGTQGGYTSNHDJRBCHSUMQLNJYLUBLBIAEKKSLXGITVCQWBYKINRKHSHLPKDUV");

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
    msg.setTimeStamp(0.473921950324);
    msg.setSource(4458U);
    msg.setSourceEntity(96U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(56U);
    msg.id.assign("PUPHBRPHPSOUKQOTKZMQUXFUEVWGRJWDWRWHNUTSXYVXJFEOFRIVOALINGCEAD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NWJLNESUNJYQFJWAXRIQAMPCESRCSOLBBQROIOQIRZBYNJDAWEXMUVJPCDVQYLLGXKTGITDECQKYZTCTMPZHQMQUZMDMNNFMIKDROGKENZBAFBAJFJXUALGKZFZRBIFBYZEIHXHFQBXKKUYHLGMAXRJWYUDVOAPTEOAFVUGWVCNGHOSTEPVLCSVGUFQTEUGYWITVCKBWPCJC");
    tmp_msg_0.feature_type = 15U;
    tmp_msg_0.rgb_red = 218U;
    tmp_msg_0.rgb_green = 139U;
    tmp_msg_0.rgb_blue = 49U;
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
    msg.setTimeStamp(0.804894682013);
    msg.setSource(40174U);
    msg.setSourceEntity(25U);
    msg.setDestination(20171U);
    msg.setDestinationEntity(136U);
    msg.id.assign("TXJYBSIVQHFRXEFVWSPUCNEBGPTMMQBPYFCHLSCMXPPNPUXXBQLZKIZCBVYEESRYZZKXOJKZUHCAJKJVZAPQBJDDCAQXTMDWRBGFRGBZOWNNWCLJYRZDNAOQYYKDZRMSUIEJCUMGQVLFJIHPQLLPRSVYBOEUSLVGEKALJQNOUHGSVSFCMEHAIOGFANYEDMTFW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PRDALZTYMVFRQGJKVGJDJTLIAMHKNYMDUERQCLONFBESAXZTOOCOVYJXXRDIFABTXRHXJIYPUWOBAQVTBQUCZNGKNHXGZ");
    tmp_msg_0.feature_type = 158U;
    tmp_msg_0.rgb_red = 196U;
    tmp_msg_0.rgb_green = 24U;
    tmp_msg_0.rgb_blue = 194U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0414735379416;
    tmp_tmp_msg_0_0.lon = 0.171636621702;
    tmp_tmp_msg_0_0.alt = 0.567559750224;
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
    msg.setTimeStamp(0.295812488064);
    msg.setSource(39694U);
    msg.setSourceEntity(76U);
    msg.setDestination(56954U);
    msg.setDestinationEntity(184U);
    msg.id.assign("WFIXDSZXFJDDPMAMRNOKOLBGXQWWTGJMCEZYWLICBMKSQEACATMQKRZIVLXUEHOBSRKQJAYYFFUGHFNPEQBPCJYYSGBOTMLKPAGUMTZJOBNGKXAGQLHYOKPIVTKTDHIJDXDVZCSBPRHVUKBEUVSBVDAIWWRAPNLCZSZGYFUXMJIAACCRJHMUFHQMGOCNPETWIWLUZNUNCHJPDDNVZHXFXQIYYLSDENTUORGKQQRLYVOZFO");

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
    msg.setTimeStamp(0.53971629018);
    msg.setSource(37231U);
    msg.setSourceEntity(187U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(148U);
    msg.id.assign("FOZIIENQCNXYBYTMTBZGUDXGHALGJDOAVLTWUTPXHTFPOUCLZEQUAWMPJMDAOJCAFNGYRRISCUZLENHGRKBAPSVXQYMECURLPPSDTGUHYSJAMSGHKKVXINWQWIXLACTWSBOUGKPRYJKMVJFKOXBOYMNDQJWOMTLZZHKCERCNZQIHUWLODXDYZYFFXICPSQHRJVBKEDKTQAYDBXBFWHJVPUNVANVKEMZEIIFVFER");
    msg.feature_type = 135U;
    msg.rgb_red = 143U;
    msg.rgb_green = 157U;
    msg.rgb_blue = 254U;

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
    msg.setTimeStamp(0.390032697266);
    msg.setSource(31080U);
    msg.setSourceEntity(76U);
    msg.setDestination(58670U);
    msg.setDestinationEntity(101U);
    msg.id.assign("NKTVPPDYKXIHFVJEETVSDDTLALXMCFSZQGQGHRRQCZDBECOXHLGGQNNHDEXPMLWJKYBKTJFJAOMSJIYHRWCKHOSIMFCXOBSPHXPJNHPYQBQBICOUOCCSNZNXPGSABDXEEQMWVEEWVGKSYWAVGTKO");
    msg.feature_type = 187U;
    msg.rgb_red = 92U;
    msg.rgb_green = 190U;
    msg.rgb_blue = 182U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.236836356267;
    tmp_msg_0.lon = 0.838150568068;
    tmp_msg_0.alt = 0.526717563612;
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
    msg.setTimeStamp(0.897244711789);
    msg.setSource(54690U);
    msg.setSourceEntity(57U);
    msg.setDestination(15926U);
    msg.setDestinationEntity(82U);
    msg.id.assign("LZRFSVBQOCDGQWVJJHYCZNTMPUXUCOHTMKIDOJDOPDSAVUESWCNTHWUHHKGZRJRETCFGAUBKMUZGPIGSKKKZZQQRGUYXREXLTOQFLATLWSLLHBMHNRATBWLWUMEOQTYDINPQKEAH");
    msg.feature_type = 52U;
    msg.rgb_red = 185U;
    msg.rgb_green = 186U;
    msg.rgb_blue = 123U;

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
    msg.setTimeStamp(0.76405226063);
    msg.setSource(6327U);
    msg.setSourceEntity(132U);
    msg.setDestination(2738U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.318206747802;
    msg.lon = 0.417466857602;
    msg.alt = 0.278776035527;

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
    msg.setTimeStamp(0.772498890754);
    msg.setSource(36981U);
    msg.setSourceEntity(118U);
    msg.setDestination(44352U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.546230145228;
    msg.lon = 0.258636592757;
    msg.alt = 0.44361086954;

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
    msg.setTimeStamp(0.326878739174);
    msg.setSource(10136U);
    msg.setSourceEntity(171U);
    msg.setDestination(6543U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.451950262974;
    msg.lon = 0.758472423603;
    msg.alt = 0.387593729962;

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
    msg.setTimeStamp(0.30391932167);
    msg.setSource(35410U);
    msg.setSourceEntity(74U);
    msg.setDestination(58024U);
    msg.setDestinationEntity(159U);
    msg.type = 48U;
    msg.id.assign("UDOYAWRCAZQRMUVNMMJTPHJSASDTVNYGDZOLXLGSXQCEEHIFXCCQVJEOZWDCHLPBCTHFMMKHXRTVAMSWNYYXEHGCYVTKFGIOTBSKXSDORFLQGPBDJPAZSWBKUYYWNN");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("JQAMLRQJPZZLFMGFAPKYPPTLHROIUUNWQSTMCLQKYPRNHNESEADTJPCOAARQCNGOTCCVGDUHUKTKLJVUTYEKTRGPSCKYNXQAFDBXCCQHWHBNQDQXZAYAKSPLBWOXDZUXVIZTMMEWRTMEWOJVXBFZYGBM");
    tmp_msg_0.op = 249U;
    tmp_msg_0.lat = 0.912763554584;
    tmp_msg_0.lon = 0.0522749814091;
    tmp_msg_0.height = 0.238245894809;
    tmp_msg_0.x = 0.443179229145;
    tmp_msg_0.y = 0.969652937127;
    tmp_msg_0.z = 0.150880930325;
    tmp_msg_0.phi = 0.82036193203;
    tmp_msg_0.theta = 0.384123596455;
    tmp_msg_0.psi = 0.181283704114;
    tmp_msg_0.vx = 0.533801648976;
    tmp_msg_0.vy = 0.742115896568;
    tmp_msg_0.vz = 0.516093841808;
    tmp_msg_0.p = 0.0171774280993;
    tmp_msg_0.q = 0.826988579805;
    tmp_msg_0.r = 0.412049475168;
    tmp_msg_0.svx = 0.645507503545;
    tmp_msg_0.svy = 0.753207944304;
    tmp_msg_0.svz = 0.270455379711;
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
    msg.setTimeStamp(0.998885154213);
    msg.setSource(3726U);
    msg.setSourceEntity(112U);
    msg.setDestination(11664U);
    msg.setDestinationEntity(63U);
    msg.type = 35U;
    msg.id.assign("XOBIEPZGOCSPDZVDIGNIQUHEKWHCDSIXKYAOYNERXSQTRGYQHUSFGQRMTMIMKOTIIAYQOWCXQFACVSLBZPWHYSQRGCVJEEDNXRKDVZRBWMXUAHXWNLZZWLPZMLMETDYKNJYNFVKUDPTLPONBROLCPFZCVMEUUBVKHPAJQXDLIBHTGZMYABNLSAMSFKJIORVBLLJZC");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 44065U;
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
    msg.setTimeStamp(0.0528888075041);
    msg.setSource(19987U);
    msg.setSourceEntity(200U);
    msg.setDestination(28558U);
    msg.setDestinationEntity(142U);
    msg.type = 138U;
    msg.id.assign("GZJQZHBDYTWUHZGKZKULIHSWFDXGLAWTJZBITBXYXEUEOKEEUJYTNVMKYWJEWYCLNSPFHZMFPPMROCSXTNFOULJAEXJBVELPNJAKOSKOMKWOHUQDETIKOWBGFHHCTAGRHXQOLRIYCRXJYYFNUKDMZESGNSJNNUQWCGMRDVARXCVXFZZSOXIORIQQHGQFIRKVEQALDVBUWPFDFJDYVIVTGATUSYCIMPRWHQNALBPMBPVQCVRAMPLNZCB");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 145U;
    tmp_msg_0.period = 1753530305U;
    tmp_msg_0.duty_cycle = 2171793211U;
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
    msg.setTimeStamp(0.0117431654537);
    msg.setSource(55924U);
    msg.setSourceEntity(254U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(142U);
    msg.localname.assign("MAKLPMONHKEJUPMRPBUIVUPNMUWEWPOOEQWLNAOOUOYXBTZJKYFOPZEPWTBSZGGSATTKISWZHWGOEDIMGHHJAVKWGPRTTVFSSLBQMVLBWLEUJKIZRFYCLCKXNPXFJIQYIRXKMRGSBEAZRYRJFHTSZVHOQEFIYUAUYRFUSTLNBCCDQDSI");

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
    msg.setTimeStamp(0.782581679626);
    msg.setSource(30254U);
    msg.setSourceEntity(195U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("EJJYNNOHBCRNJPNVENXTUYHESIEYAXDAIFKEOTQDKHKUUQXRPIHACWCZHLWFFFYLMQGYSXNPPZKQDQPMAIHZFGZSUKBOIWTYMBMAVZSWEZWJCQQFLRGXPBJPJNEVLCAJUDYNFZEYNRTAOLMGICCPOWAHVLQOSYIHKMIFOXDLSLAGBRBVJFTSRPZKRQUEXOHWVBVEKBCWYIZGTVUMRSMMFDBPTTGRQVUGZVSTXWLHUXMIGACJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YPLVTCIYNUFVFWSHNNUJINAQPYRDEB");
    tmp_msg_0.sys_type = 51U;
    tmp_msg_0.owner = 26031U;
    tmp_msg_0.lat = 0.237733345888;
    tmp_msg_0.lon = 0.455211623711;
    tmp_msg_0.height = 0.34933461693;
    tmp_msg_0.services.assign("OKEUHMVPOKZONOTLKLJKOYLWFWYDBKLHCRNUUTENPIADXTEROMGAGSQHIWRWIAFZITFALRFZSGSLFBAAJPGAZXJBMCPPDWJXYBDRXYWIYBMYWCAKRJNXKTDUBZEQYCZQUDVTJVZHENEIURRFTJHXYFEMMQJOSIHYYLUWCBPNWZJIGNVBBGMCXDUHAVEPQCNZRQDUVFMSIAOG");
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
    msg.setTimeStamp(0.27512063134);
    msg.setSource(11037U);
    msg.setSourceEntity(234U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(136U);
    msg.localname.assign("PSTSKSKLNGOXFJAVMHZBTALTU");

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
    msg.setTimeStamp(0.510102632959);
    msg.setSource(44615U);
    msg.setSourceEntity(224U);
    msg.setDestination(7600U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("MKYJZAWSBADHNYGQQIIKGWPBTCGWTQSTPAKSNXZCICFKNISHCROMMLREFJGJNPLDXVSLUZYEKNOTKIBUPCPAWBYPWHDGCFSMOOGFRXOTEXJZSXBFLYTBRLKVRZHWEH");
    msg.predicate.assign("PDILVPQSICNIVWEJZRXMPXGRHVJKKLBFDCEOQLZBDJHGKJUIYWNCRQJXVBCAHFVMDCWRUNBYVEBWATFYPFOEIZLBVAJQLRCRCOQIZKEDFTJEHRWUSQUMYZOQRGMFKYTPHOXLHOGBLTSXTWIXYNMKAOFAMMMHTNUUOGIUDMUGZXQSTBCKILXKVCNVPFDRS");
    msg.attributes.assign("CLJIODVEWANLRHDXRWHVZBUYUSS");

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
    msg.setTimeStamp(0.711909626937);
    msg.setSource(46654U);
    msg.setSourceEntity(77U);
    msg.setDestination(3077U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("MGXOHARFLNGLNISCDMMOTIIWLDXCHVMSLTQFA");
    msg.predicate.assign("CAOTBSORVYCSPYUAHQZLZCMYUGLUSXQMXFUOIQEDRNHNUBHGWBQEFEPLBOZKDMIUWEXQFVXTPJGVFDZQHPHOAIFNVGMCKSHSALHYDEJNRUNIAREMBRRWRCKICPHTQMTWXZTGAVAHETPXPUZNMZWMJZRJJXUTQVDLGBUKINGKXXKVNZOVFWBVODOXNJJ");
    msg.attributes.assign("RTEOVSAZGKLLNFOMSOHISKPHDCZEWCLLYINLYGDNGWOAZZZZCGJRKCCMUWSXPJGOVVAQHTAHAIDEBQIPLWJYTHO");

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
    msg.setTimeStamp(0.698561007227);
    msg.setSource(41146U);
    msg.setSourceEntity(164U);
    msg.setDestination(22167U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("LIXDCVNPXSTOHZTRMOFGWYFSGVHDHEWEIVZMWTJWDXKDBALYFAUBMAPPVEMIPXHUQZZBZZNWRNKBBWQHYSQFYIHLTCVDJJOXZSNFQOFWOCELFSQTYNDBNKUIUTQWLOJGPRMGCKBSHIRDBCCGUCJREEYKXYEEVDHXHDJIVJFUHLXESWRVGOSPYUCNRRANXLYATUGOSUBMMNXSQJCZLQPIDNBRYPAZV");
    msg.predicate.assign("TUORHSKMNGPR");
    msg.attributes.assign("ZOLVQWWCMTJQLWZDENLISJBCLZPWORMMPBTVZBSLXKXRXSUZRMOGFZNLIRCCVWRIVHOBXPMUDXHIHOIUHQYSEJNDRESKAOYGGSJKYDJYCMXGSTAKCODACAGPMSORVJHOAFXZEUNYNKVLTKQFUJYKEWQELZHQAADYYWTMBCWBTFUPTBXGRDHQQTCBAJFFKVILYJFVOGGHEQPBMTNPXEVWLDJSKPINPID");

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
    msg.setTimeStamp(0.105380501874);
    msg.setSource(38084U);
    msg.setSourceEntity(26U);
    msg.setDestination(61768U);
    msg.setDestinationEntity(175U);
    msg.command = 68U;
    msg.goal_id.assign("GAOYUACOKPATPWGEHRPXFITHCRZYWGAAPBJBKLEJVITSFVWBPVQCUCGLRINHJMGUPOWVYXDBHQZHCSQFBXBAYBJFNZLLRUIMTTVMBZUHMHNYRDZVWBKPNMIMYKSMSPKXSAFMIDOSUKAQEYXXRSZLZZLQTRYRDJJX");
    msg.goal_xml.assign("RMGVCXYJJFJPNYFFMCNOEWIRVBNWWCQJGSJYGKTIIFWEKFFVDDLNEHYSFWJULPKWRKZKHYBQGMCCNMLSURTHEUZM");

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
    msg.setTimeStamp(0.372709039492);
    msg.setSource(52634U);
    msg.setSourceEntity(131U);
    msg.setDestination(53290U);
    msg.setDestinationEntity(25U);
    msg.command = 5U;
    msg.goal_id.assign("UFRJCZERVREAPCMLPSBCPNYIQMWAEFCJMSMIWFLDRBWHXILUPTQYUMNLHIUKMVNZKWDLTQDCDIZUZJSJQIPAEGVPJFLDOLFWOIKKJHMNBRJSVTEDCRVLSRCSZGFUHUHHDWJYQUGTYECASOXQSKQBTTAKPBTGOEUKPDYXWAVARVPGJNBNBGSVGQJNOIHGVOYKRXUAZNROZYKSGHVFTX");
    msg.goal_xml.assign("EYXDDILFGPALDPXWWJQGBMXBKUGFAJESBFTNVVZPWVZKSCDOPKTVMIVZNZSYOFMWHRAXXORPATLBMTEYQEEEXUJVPYHBDRZLN");

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
    msg.setTimeStamp(0.582591431237);
    msg.setSource(60224U);
    msg.setSourceEntity(99U);
    msg.setDestination(39444U);
    msg.setDestinationEntity(130U);
    msg.command = 250U;
    msg.goal_id.assign("DJESEPRIOECRQQFSKVEMPGUUANMXYFBRSPAWLMBJKZOGXCZZKVUZTGXZKPJDVMKIVLIEHHEWNDQJOUROQHUSDGCSRQNPVFKROJIMASNKTLTANKAMDIULQQYILXBFFYDBUTXWYDOAUGHQIJLCYFEOZUCIZMPXGFYWLTIHLTFEBBYEPGPRROJBAYQFWZVCXETFCOIUPHNXDAXRGJNZYVRNSLMSCJHWP");
    msg.goal_xml.assign("IYUTCEHHCHAAYXQZVHEORGRJMFSNJBSOXWQKBIRUNSNRTYROVDZNNSZUXAIWKIDKXGGCLWQHPWAEULUXJSMCMOWFFHDNDKXMFRIPLSTAJWETWOBKQBJESDYXCPIURQORENGQEITPPUOGGXVSVCZZYAJFMKNTYEWVRWILHPAFZDFMDBJQUKPFMFHJGYZMQLJXVLPBCUJDETHNZ");

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
    msg.setTimeStamp(0.102015317555);
    msg.setSource(26658U);
    msg.setSourceEntity(242U);
    msg.setDestination(14196U);
    msg.setDestinationEntity(190U);
    msg.op = 156U;
    msg.goal_id.assign("UOYHAMEEZOJHJMFBGPTQWDLSZPJYQCMRKXFSDJKANNPXBKLCULDPARDVARPKLMNNYBQVTXEJTAWIQRPGDZIIYOSZXWFXCBRGZXVJKORSZWGYEGRRBHMMIELEUYWDHQASXLUIDWEAFVHYLLNTKJMZSZUWCHCNZCVQHNKPTMHVSIUDTFCUGIOFXOPDMRULSVNJOGTFGMKQVKYYVZGBPBQTIOISBT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BOERIQCSSRBDWTLCZUXMIKTHBNADINRTPBMQUNMHOZRKZFAWAPDCWMISPKYUCEHOODTMUVEAXVIKDXGNEFWYOPZGAETHUQILQTQAXCAZAENHZWUJFFETJQPBXJOYGSFXTOKGYMUGOKZKJWJSVFXKDUOLRRJHDEFFZVIBKLVLGNKDRCPGBDJONHRWINGNQXTLIEFM");
    tmp_msg_0.predicate.assign("VPGLKHUZAXOJXGWZNOTPUWEUIIDJZMKUEXVHCAPBEYIHCIJYWCLBLERDANQCFIDWSQJCHPLQTSZADPMQCMIFOQFVWCQVNLQLRYOKVFXTAGVPKNNZQIOYUQPSBTCJVGSHORGWRHDWGASKRMONPFNLWSXKFYATJEYAFKNCBLKRKSJSMXYXHMBTDVTUXVHXOEOAUGDSTTEJNARZLZMPGREXWZBUGPBDJTLEFDQUGSZWYZRKMMCJMY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BSWGGXWRSXNMLKEOEVSPWABGHHZFMYLFTPCNYJMFFUFUHLCEITICVXUVPNUYUDBQJLBOOAWQKOQOQLPRKLOSMKXWCAYNLDRZZDKRXSZZYWRRHDTMYBUOFWGTTCZKLUYXKARPMIVEPHJRST");
    tmp_tmp_msg_0_0.attr_type = 196U;
    tmp_tmp_msg_0_0.min.assign("GJAWTDGRCYSOVWFPDRZLTXQGZMPDVTIBRIONCUDLHRYHXRASBTVDGFKGLGMJXOUYDCVKMOJAFJQWRNNESHRCTGEANBOJMUTEIYJHLTFZHBFPSLXZEEWUPMKSYUFOTFZMKCSZUCNQOLVCXGVYKBKNEBHYPJDGUYELSUAAAYKXTPVRXRINBKRMMEZMCBQVIPWYMDLXFUJWJEXBBAWLIWDNHZQIFNN");
    tmp_tmp_msg_0_0.max.assign("SJXPJZYGWOKXELBQMAYDMGTSYUEOANMWNDVKPSVZUSJIGEARQBOERDFHOQVPCJVWJRTPCDLXOLNBUBGZFLJNNHKILBSOXNLKVMITQIZICRLHVBGTSYMTZWZXARRLWKAGMXDBXFNHXQ");
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
    msg.setTimeStamp(0.61341921547);
    msg.setSource(47389U);
    msg.setSourceEntity(148U);
    msg.setDestination(41291U);
    msg.setDestinationEntity(155U);
    msg.op = 177U;
    msg.goal_id.assign("QFFGVSOKRUHSCJAXIZHYLXGJRRHYTPROCOKEAVKQCNWYNWDIEYDMSQZAVLZQSOCRGLQYTRNMJIPUPOXNUVWEOIEWUETLYVUAQUCMKGZMJGPTXLBWRJHVYSFEKPMAHEBYSFJDIAZKEKLXHVQSFZPACWTIBDKIRBOCTZFOSLBJWFGDDJFXLWQHXBTQZNCMKIXNLFUDMLUIFUSVVWTPXEGOTJBWMNRGGAJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ORNTPCDIHEQASJEAMRRNWQMYKTHZQJASORFCCVVJEGMMKMBUXJOPKRUABJNNLDXVTEVJWYULFRCLELLXWTITCMDIVCVKXELZWGWYCZDHCKVFLKMXPOGHKQZDJQZAILLSMNHPSXGQUWBNNRXOXGCJFGAGWHUJHADYSAIQFGWUEZFVVSZBLRPJNMUOASIBFZYNTDZGYFSFFTXKOKIWUTUIUWHCBKOXNYQAQBBYYER");
    tmp_msg_0.predicate.assign("QRDRKXTPYYJJEHORFKOLEIWGANWVHCSLSIYTCZBXSGEQYOBIUXWEAZUWAGDMJOFSQRRPDVZLHPXIENYCXTTDNPKRIUGUFCVWQFWXEMRSLQWCRPZFFYKCULKXXQVMPCPEBNJDIANGKVGBNGMVKJOCNAIMUEIZMBHKTKZIDBYHLTGASJUJQHHFAJXUNVSSMZJMTQOUYDDSLBZLNOAHXMBFTHBYPKLIWCZTQHRQOUVBOWLMPATPR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GPOKGYEPSJCKQYFJSAAWEZIGJNYGBTQUDXHNNHUJNKGZYJLPROCCWGDUZPZWIFNINUCDNQDQWZYHZIXMPQOMQPVSQBJOMOABAKDUVZVBEYJRJIPGGRSFWKJEBTCTZRHFRDKMXSRUSXSFAESLVPXWHIL");
    tmp_tmp_msg_0_0.attr_type = 14U;
    tmp_tmp_msg_0_0.min.assign("SEICUUFVLPWISWIWRLOULUSPDBZPXLFQTZBCGXMMYNRGDOMYNIDUWKEQRTWBNRKFBHANQRHRXVQJZTGTEOGDDYYHFESBWQDIVBKOVACDZNZPYXNYQVHUQYAJACXJAKUTSSCOBRFUQLXIJNJUCMTGIZRFPXFEGHZJXHFKWQWMHMJXCVVIIBFAHCWCAAGYGGFYTAMEHSKOODNKLRPMLQAVZLLTDCENKJBMHJRTSUESETSZZPDPOKWVNEPBV");
    tmp_tmp_msg_0_0.max.assign("GJYWVYMBZRFUXVXUSQAXLSLDUPOUGKCKDIRMJVRZKIBDIBNDPETQIHOWQFVUZQUWPQVJSIMXBNVGBFHONTZETDTFOMGPDRZHZTEDNTOLGITSCGCCXQUKSLHHKKDPIHEPQAIPMORAZTGTWJAYBCJYLYCIHACETWFGUWASPMVEMXSENYROSGAVFNKARPOZEWLGYHOVHNRQFXVIDYSKFZHKNWBYXWCUZUAJMJ");
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
    msg.setTimeStamp(0.458347732684);
    msg.setSource(20548U);
    msg.setSourceEntity(21U);
    msg.setDestination(25059U);
    msg.setDestinationEntity(112U);
    msg.op = 139U;
    msg.goal_id.assign("VLXBTQGZFUKHOPWEJFPLTJBNJLLJOUUUCUSPLEKGOUCDFTJHVAWFQVMTNPCHZQVMLJJTUTMEDSNCSXOXTSGDXWRYCBPAZGNPXXMZAIESZVGXVBWSRAXNAAGQAWUKAJYEFCSXTWRZPNNYDHQWPYEMHADEYUIEJDELPBZOPJKYISMQFWHOBVHVRWYIFOGLMORRESO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UMUCWWJFDNKHWBLZRHIVAKJYSIIOQUYJKIRASYKFFLZLPDHFESEHCWWQKBLRGZPYTEAYDUCIDGTPIJEWMMGVLQUIKTNTU");
    tmp_msg_0.predicate.assign("PLSCPKOJRZXDMCIFGNUGADCTFWCQIXL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHTVRWSROWNUBRPNEBVMOZOXEDHQDAGERJRFVYYITJEGQBNGLPSNMGCVUQFFE");
    tmp_tmp_msg_0_0.attr_type = 154U;
    tmp_tmp_msg_0_0.min.assign("SJWCHLSVRWDNQGOYSEFLDBJCPEOICOFKBAHZEHIPVELHIDNRYDXKZKNYSBHDRCJBVJRSUMRTTJWMQMXGZ");
    tmp_tmp_msg_0_0.max.assign("WBJLFWKLRQWSGEEMSCGHVYPFZQPCVCDRKCTGJTQODZMMFJNIHUEVGK");
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
    msg.setTimeStamp(0.465531852961);
    msg.setSource(43193U);
    msg.setSourceEntity(23U);
    msg.setDestination(35404U);
    msg.setDestinationEntity(39U);
    msg.name.assign("VZULLUHKWQTLPHKXGOFOLEYGDNUHMLDLULFFXPUISJZEZANFPICQIQMOYYXSIXZKAVHUCNADARTXGXOOYDCQVQTWWCSFTXTMIRANTNEKDIVYMOZJYPKGSUEQFSPTERICREJCAMKYQWIUUVRAGJBFJHLTNXZQAGBDWZQDNHVSGCOEATAODFBRBGJPIWTERZYMSMUXLBMWKCQYSVWNBZNPCPRRG");
    msg.attr_type = 121U;
    msg.min.assign("WZMAJYHAKMOBVCVPXHWAFWXTHJMVKAUUWFEDEVKBDPQDKSVBNIEMGNUDHZRGPTDHOSVSGHIGEGOOCJOMZEPBLEQOYTOCJQLXKTFWVICRNZIZHCLTSPNGVBLRIPYWDJSYJXPRYWWZ");
    msg.max.assign("INFMZDONVALJGTLLYRJEZZZHDYATNKCETPCFJZOTSIGQTXVPQIBECTABVUZXCSQWQVENKERLPUXQZYFYCJVFGDCYXVAZRAUNWODPXCMWVRUKIRABTKPFDRSNVBRWSLHJQEOPOMHQKNUSUAYKXDJRIKUTXFWIHSXXEFGSGBVAUNOHYSODMHELJBUUDGAICRLOGLGMBSPMGPJGIWRZFZTCWCJJIWWPEBKNHIHQH");

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
    msg.setTimeStamp(0.842204431184);
    msg.setSource(11141U);
    msg.setSourceEntity(243U);
    msg.setDestination(19385U);
    msg.setDestinationEntity(154U);
    msg.name.assign("UEZDYOFHKRVQGYLAQJCLWHBFMTJAVQNKUEBZJOTCNARSNQLJJKANGXBAKIXGWCNQUDWEFYIIHRBSPTGYPZWYXISI");
    msg.attr_type = 93U;
    msg.min.assign("QULJOGOXRKQOBGHCHHGYVDOKZHDQAVTCSZWNLUESQEDFLMPPJVOYHICEBESXYMHCNPKGYBTMUKJSMEBFSDAUKNZEVSMKIIWTKEYGVSFM");
    msg.max.assign("MMNKKZSFYCCHBZPZSCXWIBNPRRFZAPUVTFVXJWMLDIJDVAUBWSMTVGWGYUL");

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
    msg.setTimeStamp(0.11322834426);
    msg.setSource(14982U);
    msg.setSourceEntity(192U);
    msg.setDestination(52056U);
    msg.setDestinationEntity(20U);
    msg.name.assign("JWTRRKHKLZYKYVROAOVGBBRJICOLFGXICTCQYWNSERPJKIMOBQVSQJYBGSVSOPEENUACZXZLTSRFOPHGXQWRLGJDUBMINKXNQNDUHPAUSTXQTWVCNBYRHNIWANFOYXFTLJMPAQMDTVMGLKUZAHUISAHPWJHHIRELBXHBHATLWAWQBXFGEUGFKZWWDGJKQCDADYCINKUDJVPUZSRMFUDP");
    msg.attr_type = 152U;
    msg.min.assign("XTHWKYTMEJHZDJORIFIQVVLFHITJLVGRZEAEZMHYDLQGWKDXHFYFSVRYVATFMSLRBINZQNQQLIOWWUZRNCITYYCOGGARJUWVCBGESDXXKLDWOXUSKMJOQAUYMJEGFOIQWYNKKXLRZAMZBZ");
    msg.max.assign("NZTMGRFHPYDXGWHRIOLNBULLWUSJUKNHLXCSYAFLJBUWMWKNJI");

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
    msg.setTimeStamp(0.685480122508);
    msg.setSource(23226U);
    msg.setSourceEntity(120U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(107U);
    msg.timeline.assign("MFBNLCBAKNOJGHUIAVRMCWRNIYTXPTMEVRSCKHNODDSMEOCYFLVZQNZGYWFZGDPPPBHPUHYQMZYXKYJEXWKXZZBJZTLJXVVCBQKQBKHUEEYISGPGMAHULKDBAVWGWBXQCHLVLDWBRMGZHKVYQOCFTUONDUWTQGJIDCJXOZUISPITMHJBOJHASLVMTFFTSXDDUENXAELRKANQFYQEDRWMTJUCIOSNFSPR");
    msg.predicate.assign("CEKAWVKMCJGTXEWHKRTDZTXTMBAHNPMRTTSOQLMYDZRGDCOFIUNURBEARBRKOYWWSWWZFAPBHLABDVLHJTSDELQUNBHCKQRNIQCXKNDFWVOPGEIKTRFNHFSFBSGECEMJYNSFJBRGGIUVXUGOLMQWJVIOUKEKXQFYYANBCUZISQDIGTGPFJIEUZXMTOULSPVCIBQFXDUQVYLPJYPJYJZYAMOAKVYHINSPVZXZEHNHLXWLLG");

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
    msg.setTimeStamp(0.725861654767);
    msg.setSource(8376U);
    msg.setSourceEntity(154U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("CRRBFJAHKMSWUEGYRYTHHDCUZSRTMMUBOXZTSOPUGAGQSCSLBVALCRKDMKTEDBEMFWAXCIDPERTDNYLSELRQJMWIKHYYFGXNBETBFRVEFCNMKHOGIMGGZMQOISHJPPDSWJTOLQIZBEIUOWBCOZYIKAPYXZQXVQLKZDKTHAGUDQO");
    msg.predicate.assign("QWHBYUGAEJLAFTTYJQXMHAVGXPDOIHSEXXZJXCYUDDRCYMJVZNOQRNGKRDLNSFXUKOYZELBLDMDTUUTZGWKJLBKIMIHNRTBSRNZIPUEVTIWSNWIZKBGMQFKHAVJMOALHETLBTEGORCOCHWXPWXPAJOUFXEOHNWPWSMIUZKMFFJHBPADQRATNVCVUVLFFGQMKYDQKIZPPEEWZVSNKQUIVGRGDIZSMJDBYCHEASGVTFCYNPRLBFCSB");

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
    msg.setTimeStamp(0.520980135991);
    msg.setSource(41669U);
    msg.setSourceEntity(251U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("KIIKTMYIPPCBBGUZQXJGMUTBFKONHCKMEEJVPIGCXRVBLXSIWBMGFWIZUPUZBDKAOJQYEHNGCURJWIJUYOBXBHNLYODLFOCPHVATSWHUVADEXRPMXVDAFMYRUAXHNCKYZQQXYFEGWFRNXEJFWSRHDILKFQDRCCQNYHIZPTBZLVDQZRTVLQPYJTLNSVMWASBJSOAGZJETLALFOOTEPKMKRGUSDNOGZRMQYDHSHAZNDV");
    msg.predicate.assign("ZWWXFUQNPSECPASCYLJVPKXSLWJDOGPGFFJJMTFLTZWUBLMYWWMXVGVEGATFCOFNQVDKNNORILFTWUMQRIVRUUHGTOXZDHZSZCLKORQVNMDEBAPKOWSFHLBJLUIOSNUDXTISZALVAH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YIGSTKFNVRMWODAMFWGUFECMLVWKJLYHCOIDICIXHIOSBPUFGOESXDYYYJZSCDLFUFSJTQJMVHHEGSPANDACVNVVBBZSDJWNWWAAXLZAOYHGPGAMJXTOXRIOLZQARFZDKBKRQWXKBBOUNIBYWVVTWQZMQMHHJRHLQ");
    tmp_msg_0.attr_type = 204U;
    tmp_msg_0.min.assign("YGTAIYOQEWZDXFBHIAW");
    tmp_msg_0.max.assign("ARWUISENOGIMGKYKRDNHXARBXTJBBLFRRPTEMETENBDBHUULYKNBJXERZAHYTHESIZVPZSLZZWKADTVDDAWHMQOSWQSAZCFANGEIJOOXMKTTEVZIOVZSHXQGWJMGPFBGUHJVICILRDB");
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
    msg.setTimeStamp(0.146455424147);
    msg.setSource(21445U);
    msg.setSourceEntity(59U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(251U);
    msg.reactor.assign("HDZGFCLDFPXTELSVLBUQIVJGZOOQ");

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
    msg.setTimeStamp(0.764654662717);
    msg.setSource(31298U);
    msg.setSourceEntity(204U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("CHXHBMIGPJIXMDXNGFMKRILHRUJULJFZRVPMGBIB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IWFXEBFIIX");
    tmp_msg_0.predicate.assign("LZVVWCLHDZQHVIKEHZLBSOCPEQZQERWTBZVEGJLSTSMPKEXTJIRBPYAOTGCAPZBCBZCXGMLWRJYQGVSLUUWUKFFMCAULGTVHMRFRRYXXWAONUENYMKTUQUQDQIXDCDPXFDFTCJJIDKXJGLVZHFFMUHYFNBKOYGQBXGYPRVQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("STWMKXDLVKANJRQEUIQTBVWGJVYAOYVBIGXBBCJEYOLRST");
    tmp_tmp_msg_0_0.attr_type = 239U;
    tmp_tmp_msg_0_0.min.assign("MILEOXQELJNICXVCHVRZYN");
    tmp_tmp_msg_0_0.max.assign("GAVKQGXIMYYQLQLYWWVVXJBELVHSQCUPPEQMQKOHKVYYXTPZGFTUPZBXKFDBFPNOZMWVYQHIVCEWMCRDYBXYBJRJAZDOADEPFESFOJOOSTHMHGZSNUZBSWUTLJLWITEOGNOSCGFGJMLTWCMFIPCAKCKNHRBAJCBNZSUWRPCBNYVHSRGKPTIFXRIEDJIUNFUNANQOJJRHEQVULGDAHANZDAFSLXZ");
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
    msg.setTimeStamp(0.545506512863);
    msg.setSource(59991U);
    msg.setSourceEntity(13U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(175U);
    msg.reactor.assign("ZFRMBEVSIXIJQKMNZPWFOZNSWRPLQVATLPQTTUJQPTBTLFGRHOYJEIAKMNHJPCYYDUERYSZAHNAQSKHQVLYLCJDUZJWIYIATPXDKHUZNJHNIGCWTSULGWZSX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IKBMPGSMCVWWJPGESWOJSYHDEMYUPDLLCOLHCYRUUMSIUZOLGXCKQRIFOQQFVBYVTNRXXOZNREMJCHGIGHDDTZSOPBVKALCBNKQFZBALQDOXSHUHTHVKB");
    tmp_msg_0.predicate.assign("VSOULUWIANJHDAKHF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CQQIFATRSBLPTHKEPKXEBIWECYAIGZROODNFRUTNKHKTDPYLTCZNXXVYIOQLQBDSTJKVOHDGTUFZVAHARAOZFYKZDYXYBTVKJYWAQ");
    tmp_tmp_msg_0_0.attr_type = 72U;
    tmp_tmp_msg_0_0.min.assign("OCDOAIKFVZGZVYMXEWQLJAXXCYNJDOQPYWUOVVOPPMFUFJZGJJZSKKZFXLDKTSACXVTWXENKEFZWVLGRBXHRGTAWGCBUMNTHOCMTVYSEIHNIRDLHQQGIBP");
    tmp_tmp_msg_0_0.max.assign("GXFXQCXACUHRZHIAOKWYUDYAFGUGPQNCZWRCYMWHAAVOHPFIIEPBKXDTDYVLDEKKZHQNJLYNBIHUVSNWXROYOUPVWTBWMSNUGMENTSMWXC");
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
    msg.setTimeStamp(0.861135557332);
    msg.setSource(12813U);
    msg.setSourceEntity(151U);
    msg.setDestination(2987U);
    msg.setDestinationEntity(39U);
    msg.topic.assign("VNZAGTHMXYIXNAESWGITBTWGQQOZRMREEKWTHIZUKUIOFXLUMXOZRYTXUDCRRNPWYNWVUEFGPDDQOOGERIRSLLRPCNQMKIBMVJUGFMJHXDHZTYETMJLRSJTDSACVFHKZEZCLIMMKFJSWLBGIUKPNYHSFJOAXBOHVQTSSXPLP");
    msg.data.assign("OJJYRTQYDYHLVMFUDEWBYAXQHWNTDOSMERITBCUZYSFWZLORKLVXGKNSKVAFPNQVSJPS");

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
    msg.setTimeStamp(0.258981725875);
    msg.setSource(35080U);
    msg.setSourceEntity(175U);
    msg.setDestination(51887U);
    msg.setDestinationEntity(249U);
    msg.topic.assign("JPGCLWJTTMVNBNEJZZHWDOOKASRYZSXXDOMDHLZFJUVQPGJWKBLYFHPINPVUNTGWZKMYETAAQYCUSUKZHXQEQWORFCWRQOFESXFKJJPHPZNUUGMGLDSUBVSIOGPXCMFIOEAIYBUQKYMGUWKEIYOXESMSTHDPIDTVNPTKHPKQMBCQYIQXLN");
    msg.data.assign("JGXXDDWTUFBGVBTZNDXQLLQZEWEUWGIHIWFAQUHSNYDBMBPZCKPTJVHCIZHOYPHKRXKNEAYSCMRPFWOBYSZKMJKFFRUUGDKBCTQAACLHQZVZWVAEFPTALAWJDXQJWQDSMGMCNHLPYIVYRUBVCUHGJL");

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
    msg.setTimeStamp(0.572518360967);
    msg.setSource(6824U);
    msg.setSourceEntity(117U);
    msg.setDestination(32341U);
    msg.setDestinationEntity(209U);
    msg.topic.assign("ZJITLKNUOZPJQVRHOSKSAJICKMLXAFEVXFBIEWUTQWYDYGNFISG");
    msg.data.assign("BJUJKGFQLBQHPBOXJMIHYQBMMKHOECVNIGXRDOZERNUWVOFVCORRSSJDMWUIJWJCJVURUYYDTUAWFZIBYAGIZUAGGUTNZFXEPYDODPQ");

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
    msg.setTimeStamp(0.507392396175);
    msg.setSource(29418U);
    msg.setSourceEntity(182U);
    msg.setDestination(35851U);
    msg.setDestinationEntity(215U);
    msg.frameid = 104U;
    const char tmp_msg_0[] = {54, -81, -16, -15, -3, -97, -26, -63, -59, 46, -114, 108, 67, -108, -127, -48, 66, -106, -19, 51, -55, -118, -114, 108, -35, 83, -41, -53, 41, 84, 5, -71, -28, -128, -108, 82, 5, 119, 105, -123, -49, 15, 66, -114, -95, 66, 28, -22, 49, -120, 45, 115, -36, -113, 114, -93, -8, 107, 99, -68, -74, 22, -117, 10, -47, 43, -106, 12, -61, -127, 82, -65, -51, 69, -117, 105, -16, -70, 44, -66, -115, -79, 8, -93, 66};
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
    msg.setTimeStamp(0.241948731247);
    msg.setSource(32319U);
    msg.setSourceEntity(251U);
    msg.setDestination(18733U);
    msg.setDestinationEntity(131U);
    msg.frameid = 91U;
    const char tmp_msg_0[] = {-121, -47, -65, -79, 40, 125, 86, -87, 76, 56, -46, 91, -60, -67, -40, -33, 71, -78, -79, 76, -59, -30, 19, -90, 25, -5, 96, -18, -98, 94, -101, 86, -28, -119, -92, -54, -78, 51, 25, -4, -14, 63, 30, 6, -72, -38, -39, 67, 9, -45, 119, -50, 49, 57, -57, -89, 126, -124, -101, -11, -89, -72, 91, -77, -20, 13, -44, 90, -94, 104, -61, -24, 43, -8, -120, -18, -9, 99, -73, -33, -52, -106, 76, -116, 58, 126, -108, -58, -124, -54, 28, 51, -51, 106, 89, -117, 21, 85, -2, -10, -94, -45, 52, 31, -48, 76, -11, -114, 45, -100, -119, -18, 17, -76, 112, -30, 107, -105, 26, 88, -86, -118, -114, 3, -76, -70, 8, -121, 29, -76, 23, 102, 84, 90, 64, 88, 20, 126, 12, -25, 39, -100, 69, -46, 98, -24, 82, -116, 0, -49, 8, 73, -64, -116, -86, 96, -118, 102, 115, 18, -10, 82, -50, -33, 19, -20, -93, 59, -21, 125, -33, 2, -20, 120, 13, 125, -84, -96, 52, 108, -95, -120, 31, 97, -91, -36, 35, 32, -127, 70, 5, -39, -37, 123, 107};
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
    msg.setTimeStamp(0.411511923041);
    msg.setSource(61039U);
    msg.setSourceEntity(54U);
    msg.setDestination(9858U);
    msg.setDestinationEntity(48U);
    msg.frameid = 197U;
    const char tmp_msg_0[] = {-110, -19, -126, 113, -103, 113, 39, -54, -92, 95, -122, 76, 67, 107, -32, 24, 111, -2, 78, -2, -88, -63, -58, 100, 30, 92, 95, -81, -85, -20, -25, -18, -57, 122, 96, -126, -73, 116, 73, 88, 99, -8, 20, 49, -127, -26, 119, 51, -90, 121, -113, -68, -20, -122, 18, -8, 125, -118, 50, 4, -126, 65, 60, 71, 114, -124, 13, 40, -31, -105, 81, 29, 117, -5, -3, -3, 102, 68, 27, 4, -9, -74, -90, -83, -82, -104, -9, -95, 70, -4, -57, -26, -70, 61, -121, 77, 97, 52, -7, -75, -48, 13, 74, -30, -46, 113, -18, -127, 118, 33, -14, -125, 27, -54, 108, 1, -19, -118, 4, -88, 45, 12, 86, -50, 99, 79, 117, 21, 126, -114, 108, -89, 81, 86, -35, -75, -77, -93, 37, -119, -45, 9, 52, -67, 0, -112, -118, -80, -36, 44, -46, 52, 69, 83, 50, -26, -35, 60, 63, 65, -74, -59, -87, 51, 70, 49, 103, 82, 52, 121, -118, 79, 113, -6, 105, -98, -9, 16, 31, -19, -128, -92, 86, 42, -61, 64, -120, -104, -62, -80, 74, -126, 70, -68, 118, 66, -52, -7, 120, -35, -72, -124, -116, -72, -11, 112, 93, 124, -92, -37, 19, 118, 41, 80, 58, 95, 41, -9, -62, -76, -86};
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
    msg.setTimeStamp(0.507891930578);
    msg.setSource(47373U);
    msg.setSourceEntity(183U);
    msg.setDestination(59184U);
    msg.setDestinationEntity(224U);
    msg.fps = 158U;
    msg.quality = 44U;
    msg.reps = 185U;
    msg.tsize = 189U;

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
    msg.setTimeStamp(0.720238165335);
    msg.setSource(7366U);
    msg.setSourceEntity(91U);
    msg.setDestination(5397U);
    msg.setDestinationEntity(3U);
    msg.fps = 73U;
    msg.quality = 31U;
    msg.reps = 230U;
    msg.tsize = 0U;

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
    msg.setTimeStamp(0.0822434706929);
    msg.setSource(55502U);
    msg.setSourceEntity(57U);
    msg.setDestination(50717U);
    msg.setDestinationEntity(240U);
    msg.fps = 163U;
    msg.quality = 120U;
    msg.reps = 108U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.543245262302);
    msg.setSource(43094U);
    msg.setSourceEntity(122U);
    msg.setDestination(43011U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.0762278288691;
    msg.lon = 0.357219539341;
    msg.depth = 4U;
    msg.speed = 0.330134947491;
    msg.psi = 0.57464950128;

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
    msg.setTimeStamp(0.470075377703);
    msg.setSource(53511U);
    msg.setSourceEntity(133U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.827334522254;
    msg.lon = 0.760642123063;
    msg.depth = 68U;
    msg.speed = 0.189710962656;
    msg.psi = 0.0384458660822;

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
    msg.setTimeStamp(0.550364524058);
    msg.setSource(13689U);
    msg.setSourceEntity(94U);
    msg.setDestination(28972U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.527834523247;
    msg.lon = 0.541196356941;
    msg.depth = 44U;
    msg.speed = 0.214161218117;
    msg.psi = 0.56064866471;

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
    msg.setTimeStamp(0.580906076314);
    msg.setSource(6743U);
    msg.setSourceEntity(141U);
    msg.setDestination(43726U);
    msg.setDestinationEntity(247U);
    msg.label.assign("VATAXWLOSDFFSXVFUXBHPHGPOGVTXBMZQJYLMSVPOAZWSNJGUYHEQZUDQHIXAUXJMPHLLXBJNZBYCRTASIKRSOWEITRYZMDCKEVADBSSRCLNUIDFKJYAWYEUWNRLTPQGBCBHZAPWERMLIGWASUBHKLYRFBDKXCUOVOZDYEZQMYBNOCTKWOILT");
    msg.lat = 0.71247619099;
    msg.lon = 0.934001796757;
    msg.z = 0.524761671438;
    msg.z_units = 142U;
    msg.cog = 0.206385616264;
    msg.sog = 0.442757888888;

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
    msg.setTimeStamp(0.673013152362);
    msg.setSource(64627U);
    msg.setSourceEntity(1U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(198U);
    msg.label.assign("POIHUYGXXEPOJMUFTCRXJFJGRKNEPWSMNAFWUGQBDBETZLEBMWPGFBPQXHZCBFAIKKHNIYAAZDGSZDVLARMZUTCJJFRGIYEPNXWVBFRYRKFXTQWXCKDQKUSIHBJHVXDIRWESOVF");
    msg.lat = 0.0051468964151;
    msg.lon = 0.0234813879134;
    msg.z = 0.706945869191;
    msg.z_units = 240U;
    msg.cog = 0.215470101924;
    msg.sog = 0.335286667743;

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
    msg.setTimeStamp(0.868944199826);
    msg.setSource(3176U);
    msg.setSourceEntity(110U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(41U);
    msg.label.assign("RLPQGDOUZPHHDRCGNPGHEPAXQOGFILNUQNDGSIXSUBVRSHLQHVYCDJTZSUZUOAYJIANTXLXQYDYCGBJBFMGTWEKELJOORCPBYKVIJLDTKGGFCBCWKTONDZT");
    msg.lat = 0.190657539746;
    msg.lon = 0.748722593214;
    msg.z = 0.416876565526;
    msg.z_units = 10U;
    msg.cog = 0.552382825808;
    msg.sog = 0.696051209929;

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
    msg.setTimeStamp(0.757566089955);
    msg.setSource(64419U);
    msg.setSourceEntity(65U);
    msg.setDestination(30486U);
    msg.setDestinationEntity(158U);
    msg.name.assign("WRCUYJTHXPWUQRERGEAHRMYUYQNQYKBLLNOBHTGMXGJEQFRBLJQKNSYZL");
    msg.value.assign("BUGTKMEBCGLWCTRIRDIMVGXOJSLOXUYXKQCXQZJBDQNUOMSRCHULQOUPGWNIHVFXJKINUSJWCNIAJUZRP");

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
    msg.setTimeStamp(0.459356836155);
    msg.setSource(1111U);
    msg.setSourceEntity(164U);
    msg.setDestination(56517U);
    msg.setDestinationEntity(148U);
    msg.name.assign("USARCOGFTVNGBRKSHVGOHNBGQLAFZOJVPNWGMCIJXREHFDAMXPSHMJZTYWHQCYRTPNCHPFMYMPLFGCWUHPQKLKVYBSTCBZZNZAJKRJUQJLSKEBWMXBTVBVYXMXODQZFSL");
    msg.value.assign("VQZQBEEEXCACHQSXSBVIPVMFWHOHFXQIGBBFDKLLJFHEYENEAOYJJOPSNFTHZXTLCFVORCNCHJNBRIMYWWODZDYEABNDQUMTFWVMNSFDBMLHDZPZGAYXNSPWDVZGQCDXGUKTIEYAMUOQLBYZOGWKWNJFGSYPRILHTJWGURNPREMIIWDYAAUPICFOAOAPH");

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
    msg.setTimeStamp(0.908022164204);
    msg.setSource(46662U);
    msg.setSourceEntity(83U);
    msg.setDestination(60206U);
    msg.setDestinationEntity(71U);
    msg.name.assign("TNTTVOFENECXERUVGMOOYBJAQMQYQN");
    msg.value.assign("AQHJZCWLFRDMXLMWURBSLMZIMTWHRTCJNGALQADOPXIJYAJUPWXSWZAIUEHFEKCGDZBRDRQOCUVOMSZSKUCXTRHUVCXXJECUUGWGVEPFIMXFXWMUADCEMQQBNRWKLITSTNRFNLZSQFXEPTEPDQVBQPVBOHHOBEKLWYZNFAHYZIQVBTKIGOBQATTLDHSEOXRGK");

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
    msg.setTimeStamp(0.80429984742);
    msg.setSource(15592U);
    msg.setSourceEntity(145U);
    msg.setDestination(43145U);
    msg.setDestinationEntity(213U);
    msg.name.assign("SWAMRLNCXEDRYAWIFVRZNTKRMWHROROMTXDQFMDKYVLBNYLZTGUQVTQBSRZFMFNEOYXZLHZCTKAJHXAQNBWLNU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RRBQOTYBQYWXNUFLZTIIGLOTWMIJRFUSAXPIDEFAKUFBHBVPSHSTAAWUHQF");
    tmp_msg_0.value.assign("JZWXWNQLMKBCKVDVCLPILYPCAIPFKDRVIYCYGSWBPSVDOAUUGOQYFZYZDOZCLABJNJGTMYESCUVWLZWOJTYUOBQIUCESHDYCQNANXS");
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
    msg.setTimeStamp(0.385798718459);
    msg.setSource(25953U);
    msg.setSourceEntity(101U);
    msg.setDestination(52940U);
    msg.setDestinationEntity(63U);
    msg.name.assign("LYNVHGGHJOX");

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
    msg.setTimeStamp(0.0192224223725);
    msg.setSource(58319U);
    msg.setSourceEntity(16U);
    msg.setDestination(50155U);
    msg.setDestinationEntity(30U);
    msg.name.assign("IAROGPYJONCPRGRKYQIVRQDHPLNEODCXVNEEUMSQBZYWUPXKIQXCQMGYJXIXWKLSFLQZWZVPJBCKADSTBFEDDFSMJTHKUVSJHMOJULCMZNWJJFBINJTY");

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
    msg.setTimeStamp(0.838178767869);
    msg.setSource(34016U);
    msg.setSourceEntity(204U);
    msg.setDestination(47726U);
    msg.setDestinationEntity(188U);
    msg.name.assign("QIVGMJOUDISEONUEFOKDJLXAVVKWBQHIYELDWWZHQRDUSHHKRJTTRDKNUWTYZXWBZPLGJDSUWKVOHKFZRAMBLHXPCMLVNOVQUZDBWSTQRYQVRLIKTGKKHAPWNWOTSVEPCIDXNULBSXUCAWGEPFVUQRMZSSAUYKPXBPPJDCLYJNLAAFFTTEMGJGXJGLEIBFCAZYAFZ");
    msg.visibility.assign("QVGEGZGSWLCPDRCCGITHHWUQEKPYWTTIUXBSZQZUSAU");
    msg.scope.assign("FLLOIOPFGKJNMSRAOETOJWLAEWWDQNYZDKFMNNTEBPJTNKYXEODCIZZIDQRDHMRRKMCWJSCLGXSQVYWHDBSPIGZAOOXVZQXNFSOSTBSGYXSSPPYYYICVVKYJHHJYBBMQXKOUUCBIGBXMPZLYCIELITDQCDUEWGTPTJNDAHSFAUAEM");

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
    msg.setTimeStamp(0.424475248973);
    msg.setSource(41434U);
    msg.setSourceEntity(182U);
    msg.setDestination(24906U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DPNLLWGPLFLAPISMCMYHLEWIXIPAWFNDWXXLCIOYMZTZDKVGVIKTBUIWLLKSJQTSPKEJCKMTVRMVCGQXUXQDETHKMOGVGXNCJHYYRGZCAYKUXPVBBGRYFUH");
    msg.visibility.assign("YHSQZGASMRPMSJPBMWB");
    msg.scope.assign("CGPWLLUPXLXYPLKNMSQTFCHSQDXJPYRWIBXOASAFFKLYEOEGZEPNKTUHZRESPBSVKUQRGSSALWCIVUXGHPJUPQBMXRRDKZITSIHFDQJOBRBKXDZDQ");

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
    msg.setTimeStamp(0.101550168927);
    msg.setSource(17135U);
    msg.setSourceEntity(250U);
    msg.setDestination(48539U);
    msg.setDestinationEntity(125U);
    msg.name.assign("ROQSPUHVIGTPOJUYUMYIOLQHDMKMMEOILGAAYFWLEUSWXPMGAVZRCKFWBQGTZNHYEDOQGD");
    msg.visibility.assign("DAQJVKQZCKOQOMDERMITILHVXQXWUNAYGRFJAYUWDSEYJBUNGQRMKGOFHUVFESTJHXDACXLHFSXCIVZAVHWRLNCNSDGTTZPEGQBAHMIYRCOMVJSQGEZZ");
    msg.scope.assign("UEHHPQZBQIBVOYVJIJNCGRBNFDUDFUMEXSCHCDJPLCRRVKTGSSMNYHZVXRJTVOPWULFQQYDZIYBJLWPQDOXGYBJ");

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
    msg.setTimeStamp(0.711132631583);
    msg.setSource(64077U);
    msg.setSourceEntity(163U);
    msg.setDestination(57572U);
    msg.setDestinationEntity(198U);
    msg.name.assign("JSSHADBJXYPCZWUYMRIGQLNSVHWENNCUJDWNQJBMYAJGUWIDKXFMHFLJAUIGMTEHSRQCNUPTEFPDQOQDLGUPYBQLYIYRIGXZOTUFOVORHTUKAPRZAEQPGTZLSWOKYSNLSXIJMKFXSPQDCLOPZWDJGBZRADTNWPBRWCELAOWFHTGLBVCRZFXFRAT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IIKWCHELXCT");
    tmp_msg_0.value.assign("JUPAPVHNGTXMGJWSDFQPNMYSVNBPGNRICVSPXJTCVCHOEIEHCGAYZMLTNJRWDBEKUQADFZUKYFHBILEHSPRGCFVNWOLTCKORBXDUVKQBLMIWQBLUSUDUUCUFXZBEDWFHARHGGJWOTJG");
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
    msg.setTimeStamp(0.507682270467);
    msg.setSource(9506U);
    msg.setSourceEntity(21U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(238U);
    msg.name.assign("FLXZUCVTBRVQGZHAVLQDQLIFKLUYRFJAKUVXITVAQCXURVMNISSVGSTCSUTNFOOCEDZRKZBWUOJNGCGNMQWHZKYIWXFEJGTIJUHHTEDLLOBTPYRFDMLPA");

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
    msg.setTimeStamp(0.137010649696);
    msg.setSource(44999U);
    msg.setSourceEntity(90U);
    msg.setDestination(1044U);
    msg.setDestinationEntity(107U);
    msg.name.assign("KLREFUMZPBTLBNDDVRFZAHRHCVKBXUEVZIRIBJJXCGUSJZSQGZKRVNOKCVZPSYKJBIZATYHIFGXTUXDFEHMUPHDWQTIUMLAWVYCHLCWNVRZILAKHGNPHYRWNGIATYWWMNMDEWJNBDQDKMMDONTSQPFSFYCAPPHKQUBKGKBVNJJYGAPSXY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CADAKFRVIGSBODNLNSBUIRROHBIJZQRJZQHDECFLWLIYUOFICCBTEULFRTEZFABYYMEQDTXYFMRHEIFPZXYGVOTYWTUFKBTXHTMGGKRMBCYHAVGACQUMOZOYMOLWPJCAWZXGNQGYVVSVLKBFNEWNUSTXSJWQWEHPJTYCDEXAGUUMKLRLPPHNQIIJCXDTVKMPLAZNS");
    tmp_msg_0.value.assign("CRLHQPBCCJHULUAHVXFOWZTNEENTXLMFCPLCGVHPMZGAYTQGTFJRSNVLYQUDJAAZITRVAVNTRMZSKGYNZWQUAZEUWYDZHKSKPHLDYYVSDENRFONTNXR");
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
    msg.setTimeStamp(0.738032962849);
    msg.setSource(41223U);
    msg.setSourceEntity(143U);
    msg.setDestination(43135U);
    msg.setDestinationEntity(222U);
    msg.name.assign("CSZVWRZKEBXHSFLJPZRQZQJMMNFCISRRLYAMLTPDRFVYGZQHFTRAVSMBDXPZMNFHNHKIACMIUFSYOYOOSHEOFZDCVCIUPHQWQBGCELIUYCGLJVJTVPRAMAZUQFGEGZRZOQVRABWYGUXEKXLQYXJGCPBDANLWLBLIDNTGTPBBAPTJYGELWTKFDKQUDINVJYKFOJNQECPIAHUVCSKGOIWWRNXXDUTXOSNMJDNOTBKUUJXWKM");

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
    msg.setTimeStamp(0.272755521888);
    msg.setSource(13228U);
    msg.setSourceEntity(71U);
    msg.setDestination(62787U);
    msg.setDestinationEntity(241U);
    msg.name.assign("XIKWERVVVXGKKUBTHGEMIKTILXCLPZRNUADBPIFDMXHEOBGPFVKNHUAQSKEMQNIQXHHDNZNRBANKCHDYOIEDDWVTJUDJSKNHQMCFXCLX");

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
    msg.setTimeStamp(0.746403627788);
    msg.setSource(10737U);
    msg.setSourceEntity(219U);
    msg.setDestination(41590U);
    msg.setDestinationEntity(9U);
    msg.name.assign("EFDBIJELVZYMJRGTEIQLQNSAQJDKAIXUBHTLYRHKOXTXKOOCMHTDFVSXKSNUSOGVYJNBIGUAZPXQFRCWVGYDNVUZZDEQALWEUSDCBXKLYHGGYWSCMNWVLFFQMDUPRJHMETRQHIXWRZTBXBCOAJSAJTKFVXKJORGWUKZLJCRRTOPDTFPOEMQJLZWXDZIOVVPPHU");

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
    msg.setTimeStamp(0.416958572046);
    msg.setSource(41744U);
    msg.setSourceEntity(10U);
    msg.setDestination(23025U);
    msg.setDestinationEntity(51U);
    msg.timeout = 3360637255U;

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
    msg.setTimeStamp(0.427535377349);
    msg.setSource(37721U);
    msg.setSourceEntity(230U);
    msg.setDestination(19493U);
    msg.setDestinationEntity(83U);
    msg.timeout = 2387927886U;

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
    msg.setTimeStamp(0.472495836208);
    msg.setSource(12481U);
    msg.setSourceEntity(75U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(208U);
    msg.timeout = 1179534297U;

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
    msg.setTimeStamp(0.861856032248);
    msg.setSource(47189U);
    msg.setSourceEntity(104U);
    msg.setDestination(50890U);
    msg.setDestinationEntity(233U);
    msg.sessid = 2374760570U;

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
    msg.setTimeStamp(0.832221563295);
    msg.setSource(21320U);
    msg.setSourceEntity(86U);
    msg.setDestination(29730U);
    msg.setDestinationEntity(239U);
    msg.sessid = 627641404U;

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
    msg.setTimeStamp(0.43363151928);
    msg.setSource(1448U);
    msg.setSourceEntity(75U);
    msg.setDestination(29074U);
    msg.setDestinationEntity(178U);
    msg.sessid = 2154321145U;

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
    msg.setTimeStamp(0.461798011465);
    msg.setSource(35380U);
    msg.setSourceEntity(90U);
    msg.setDestination(1344U);
    msg.setDestinationEntity(108U);
    msg.sessid = 1349758502U;
    msg.messages.assign("NFIVXSHSFPVPECVEPZQKDEYRYNUNQBTFWDQRIJDIWOUIWEBKJBZKCZCLFZPUOTDJBYJRQJYOUANXIQZDDTHNXHLMRHWADNGAOOCTSSGYEEGJYXBLSOUNJQTXORCGJIXVHDQNIZPCLMNGYMMKOYMSSPAULUEGKOJUEPZVCHVZGTNBWVXMUWLLQTCBKGTVCFSKHFXQIHWUIRWAPXRFHGPJSAMKMRMFXEFCHFOBEDW");

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
    msg.setTimeStamp(0.678436797051);
    msg.setSource(33721U);
    msg.setSourceEntity(195U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(202U);
    msg.sessid = 2454026490U;
    msg.messages.assign("QFRQPIJAGXTRNYDEICHLYOWLPQTZOWNDDGGHMUOVMMJTPIPOYFXLRYJNRFWAIOQLBPNQBRVFSJKSUUIAUUODZWMHYUAIJNWVZEZBIKACFCZGXLYEBJWYMERNKCFSLLWRIZNBIGBG");

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
    msg.setTimeStamp(0.758813692971);
    msg.setSource(4043U);
    msg.setSourceEntity(101U);
    msg.setDestination(61028U);
    msg.setDestinationEntity(11U);
    msg.sessid = 2954735825U;
    msg.messages.assign("ZGELFCDOBWHKRWZBTYODTWQMNCYAFFPANWXMKOYDJWIPQONNGSWZEXOPYCHGWOAVJTQGXMYKIDMBKVMFZCGYSIERICKTRAATXAUBEEVOLFYFISCJCCTQTSSUCJLLLFZUSRLRNPXXHRWIJZSUAPFQDXTYEQNOBJXEPBJNPLLZVDBTBKEAZUIGOEJTMQ");

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
    msg.setTimeStamp(0.916994931115);
    msg.setSource(24580U);
    msg.setSourceEntity(134U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(64U);
    msg.sessid = 1450013215U;

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
    msg.setTimeStamp(0.576730033174);
    msg.setSource(64922U);
    msg.setSourceEntity(210U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(110U);
    msg.sessid = 2544712229U;

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
    msg.setTimeStamp(0.126373482373);
    msg.setSource(40810U);
    msg.setSourceEntity(83U);
    msg.setDestination(31345U);
    msg.setDestinationEntity(113U);
    msg.sessid = 2763310432U;

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
    msg.setTimeStamp(0.860197041717);
    msg.setSource(11945U);
    msg.setSourceEntity(204U);
    msg.setDestination(14308U);
    msg.setDestinationEntity(194U);
    msg.sessid = 2450992179U;
    msg.status = 154U;

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
    msg.setTimeStamp(0.350951090338);
    msg.setSource(33224U);
    msg.setSourceEntity(95U);
    msg.setDestination(49039U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3517854095U;
    msg.status = 237U;

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
    msg.setTimeStamp(0.306723164048);
    msg.setSource(44381U);
    msg.setSourceEntity(161U);
    msg.setDestination(14612U);
    msg.setDestinationEntity(182U);
    msg.sessid = 49691904U;
    msg.status = 173U;

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
    msg.setTimeStamp(0.87596249399);
    msg.setSource(5392U);
    msg.setSourceEntity(197U);
    msg.setDestination(29396U);
    msg.setDestinationEntity(180U);
    msg.name.assign("MIQASSEVYZERHFENQOPRYGNFXOLSAWGPDQXDPYMAQFJLVKPHBIIGUGUEGMLZTPMQZMZCFEIIZVOIXFQCFBNIZJPXEERKLXJLNJMWFJRCCBBLGQXPTCNDLLZNSWKTNDDAYZVVMVULVHRWNJTKKTXCHSUGKMVJBHUOSTSGRXBKDQ");

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
    msg.setTimeStamp(0.900089196879);
    msg.setSource(20810U);
    msg.setSourceEntity(188U);
    msg.setDestination(53683U);
    msg.setDestinationEntity(190U);
    msg.name.assign("OMKSWJIRUDKFZPGHSTGTGKHLVQBDSLEYIEUUCKHUXRINZUYTPYDIDMXEXMAE");

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
    msg.setTimeStamp(0.90110292298);
    msg.setSource(11513U);
    msg.setSourceEntity(177U);
    msg.setDestination(61883U);
    msg.setDestinationEntity(17U);
    msg.name.assign("GLKJZMASBPZOOPXLZETPAANUDXNDXKRSBNIBWPUNBOXGZJFPFSSGXUEMZD");

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
    msg.setTimeStamp(0.153178541442);
    msg.setSource(40038U);
    msg.setSourceEntity(150U);
    msg.setDestination(49037U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZGAISTJJMGEARGWIWVUGQGXCUQVUXZQYSUHOWRHLEKKFWRQGNNYJCXNACSNRYELLDFORJMLLTONOEBBVAUFJLZTDTZKQTVHXMWFTIUECMMWAI");

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
    msg.setTimeStamp(0.818044696048);
    msg.setSource(46084U);
    msg.setSourceEntity(124U);
    msg.setDestination(20963U);
    msg.setDestinationEntity(10U);
    msg.name.assign("HNSXRAFSIWNAFNWQBKVUWOSMJBFBFYXAKXKJUHLPNGAHJLJOHUIILYNUSKBLXBTJNRBGPTCAVISQIWQKXODPKZJWYCYOLIBFOAYDMDNGCRLPLUFUWWTRFHVCYQXHVREPXTOOQMAFJSUKGSGLNZUSPZEKPQJZKIDTCMISGOYFZOAORRSRRKHUTGXDQDEWVGQZMTEEHXJJMVTVMIN");

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
    msg.setTimeStamp(0.410407167392);
    msg.setSource(59864U);
    msg.setSourceEntity(120U);
    msg.setDestination(63109U);
    msg.setDestinationEntity(109U);
    msg.name.assign("LTBAWXVMGJUWFWUYFMOGIULSBQPDWKFGMACGLQSYOGJXRVPAUSRCKNMITXNLDVHMTHDGAQDABKXZLPECYINTBPRVXSUEZDQZQBUBVADJCPHWEMCGTGRLEKQTRBEEORYTNUNHYMPJSNWVHAQOPEWOPCRNVPWEOLR");

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
    msg.setTimeStamp(0.830669558243);
    msg.setSource(13448U);
    msg.setSourceEntity(113U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(177U);
    msg.type = 230U;
    msg.error.assign("PYQNLEKUNQLLCRYZOAMDESWAEOBEVKRTXAVNUIYKMBZHZFFYVZRATAVKIJWQUCMRMKXUXSWFDRHLJPTJWLFMIQLOBSGZJRTUDSQXRBMSWSN");

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
    msg.setTimeStamp(0.00411992809695);
    msg.setSource(24467U);
    msg.setSourceEntity(14U);
    msg.setDestination(12076U);
    msg.setDestinationEntity(240U);
    msg.type = 237U;
    msg.error.assign("LNFCKGFKPMLZNVAAZWOTBHPGPFCAFHOYNCWETRZRYLGQYQODGUGIOMQFEVGBVWLJLUPBGXYFZFMQZPTKWJLYEYAISBUCIEMJLLQYCIFJDNTBHZHSKRHHPXRXJJEWMQIZNBBUAJ");

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
    msg.setTimeStamp(0.766044120577);
    msg.setSource(61859U);
    msg.setSourceEntity(171U);
    msg.setDestination(7987U);
    msg.setDestinationEntity(191U);
    msg.type = 20U;
    msg.error.assign("SCPMPRQXVYSPVHB");

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
    msg.setTimeStamp(0.933978802509);
    msg.setSource(57750U);
    msg.setSourceEntity(123U);
    msg.setDestination(47107U);
    msg.setDestinationEntity(15U);
    msg.seq = 29281U;
    msg.sys_dst.assign("GRUTTQQWCLHWFAAJESSTIXBFGIOCOVWHDGKLSWKTGVBEGDMWUHRQVXADKBSHYCVZEGWLHMIQPKFTVTYNHJMXOIYQMAFJKNOLYVYFLCPLNLFYSWZJAUARBPSEUESEJMDFXQUXYNWRYHPXUBCPYRDPTZKPUIZ");
    msg.flags = 24U;
    const char tmp_msg_0[] = {79, -17, 56, 61, -101, -40, -21, 105, -127, 63, -45, -81, -91, 30, 24, -51, -77, 71, 5, -25, -92, 81, -44, 79, -37, -21, 32, -37, -12, 91, 76, -62, -102, 83, 60, -66, 24, 97, 90, 122, 71, -101, -54, 6, -87, 112, -1, -103, -70, -76, -17, -83, 54, 123, 53, -2, -61, 73, 88, 88, -16, 75, 24, -21, 74, 58, 79, -70, -59, -85, -72, 0, 104, -19, -116, 7, -13, 27, 19, -43, 108, 104, -121, 15, 79, 101, 15, 96, -31, -88, 11, -125, -120, 95, -14, -81, 3, -108, 0, 89, 18, 64, 112, -49, 95, 37, 72, -80, -31, 42, -48, -121, 17, 35, 25, -84, -29, -34, -100, -16, -76, 82, -109, 118, 22, 13, -63, -66, 70, -82, 110, 63, 114, -24, -43, 113, 15, -8, 10, 12, 8, 87, 88, -85, -61, 1, -11, -72, 117, 1, -47, -62, -72, 30, -6, 90, -99, 78, -93, -121, 1, -74, 14, -45, 102, -78, -93, -101};
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
    msg.setTimeStamp(0.814517955772);
    msg.setSource(38576U);
    msg.setSourceEntity(135U);
    msg.setDestination(19631U);
    msg.setDestinationEntity(252U);
    msg.seq = 9491U;
    msg.sys_dst.assign("JFIDHTTEGALETYULZQVUJUQXNTULNXLCAGAKZMXMVTYDOOLXR");
    msg.flags = 83U;
    const char tmp_msg_0[] = {-38, -88, -103, -88, -14, -4, 33, -88, -94, -110, -78, -90, 74, 102, 111, -1, -64, 50, 13, 8, -103, 81, 74, -61, -51, -61, 95, 69, -127, -42, 70, -73, -74, -72, -17, -65, 10, 54, 32, 62, 91, -56, 9, -108, 105, 73, 67, 105, 69, -100, -120, -115, -105, 114, 82, -107, -116, 60, 31, -80, -15, -18, -97, 65, 91, 93, 41, -118, 28, 92, -126, -80, -6, 28, 20, -69, -126, -101, -64, -119, 47, 12, 106, 36, -63, -44, -6, -70, 74, 74, 110, 15, 45, 106, 0, 26, -117, 37, -50, -9, -106, 28, 7, -84, -50, 119, -18, -4, -38, 66, 88, 22, -11, -69, -3, -37, 52, 111, -104, 54, -62, -69, -67, -11, -40, 121, 58, 38, -37, -118, -49, 34, 80, -70, 78, -96, 89, 114, 2, -51, -7, -46, -46, -109, 47, 7, -118, 122, -7, -37, 96, -36, 122, 101, 119, 90, -96, 19, -78, -96, -32, -33, -55, -18, -38, 98, -103, -73, 80, 43, -25, 83, 6, -57, 10, -68, -1, 43, -38, -74, -66, -83, 80, 72, -65, 5, 44, -92, 7, 31, 78, -68, -94, -67, -2, 9, 1, -128, 54};
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
    msg.setTimeStamp(0.565718856598);
    msg.setSource(22901U);
    msg.setSourceEntity(116U);
    msg.setDestination(17973U);
    msg.setDestinationEntity(180U);
    msg.seq = 52037U;
    msg.sys_dst.assign("JHMKPUEHZJLXLJMTOOWYWRECWBNSTHSSDSBQKYPUQMZHDRHTWHJUAIQTKZAGCIAZQGTOIUZOVBIFEKXQTECLUYWNBTEJXFRNUBGSSBYYYPWFOFLZAXOUZDAEILRLXCPDMMNPAGPRYVXDXUEGNNKNJDLPRUFQNDFIVWURAVTXYVEJBLNSEKQAMMJFHXHHDGPKLGIOGDTVSPBJCI");
    msg.flags = 110U;
    const char tmp_msg_0[] = {46, -18, -75, -106, -113, -108, 31, 4, 119, 120, 61, 105, 108, -96, 18, -88, 117, -43, 92, 45, 26, 101, 69, -113, 33, -65, 114, -68, 81, 88, 22, -9, 104, 114, -90, -14, -104, 102, -52, 52, -43, 21, 39, 89, 97, -42, -100, 63, -50, 103, 52, 31, 72, -61, -51, -64, -109, -31, -13, 94, -65, 23, -122, 22, 106, 64, 99, 76, -41, -61, -35, -71, -78, 119, -69, 96, 12, 114, 54, -70, -33, 41, -110, -121, -116, 85, -59, 20, 89, -128, 49, -118, 116, 12, 13, -10, 67, 14, 41, -32, -42, 47, 7, 112, 46, 68, 14, 30, -28, -49, -15, 125, 9, 34, -100, -119, -118, 95, 12, -115, 16, -13, 111, 41, -121, -96, 124, 99, -128, -110, 83, 50, -121, -57, 114};
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
    msg.setTimeStamp(0.527748271205);
    msg.setSource(51231U);
    msg.setSourceEntity(235U);
    msg.setDestination(44692U);
    msg.setDestinationEntity(118U);
    msg.sys_src.assign("XTCBLKJMHSMYQAFHSIQDTHHVZJHUOUAXPZGWRJGSLZXBEQFNHMVGIEXWBEWOIMQPVLEUEWBRNHBNNEZYRNDSFTTYNLNJCGFYQILCSJWJFKMUZLKELWZQMACLQJECIWCPIDGHDIJCRPUUMQDJOXOUTVROPKKCUVWKAVFTSOWUGDBPUXVLQGHANZMZGYXMAIWRDBAICYAKGKKDAMXSBRAFPFTOYTZRJPCSBFGOXKOIYNPNFDZVHYEPS");
    msg.sys_dst.assign("DXRDKCCTPFRVXEJYGYINQRQEUTHLVICVGZWBTRIUFXJMOHZEHKARVGEGWSKQBUOJBMMMGPRATAIKSCPFFPAKUXGCEADONTSXBIDPNOOPNQLODBGXADTSNNCIAMNMWXMCODJVHPQEVEZYWNUSTYMAFYHUYHZQJQJPGVJZVJLZXARUKDSTVOZWNFIMWZBKYNRKWYCFTIHSEZ");
    msg.flags = 117U;
    const char tmp_msg_0[] = {123, -62, -77, 115, -80, 33, -120, 54, 97, 107, 125, -13, 99, -94, -24, 70, -28, 60, -68, -84, 51, -128, -2, 8, 82, -103, -104, 93, -118, -85, -103, -74, -68, 96, 72, 90, 31, -113, 5, 47, -111, -79, 39, 110, 17, -22, -2, 6, -9, 86, -106, -125, 75, -53, 99, 23, -92, -15, -9, 95, -128, -16, 28, -123, -79, -40, 62, -62, -32, -37, 60, -44, -102, -21, -61, 29, 78, 51, 16, -48, -15, -68, 104, -102, -97, 61, 107, -101, 22, -80, 123, -41, -51, 4, -23, 117, 17, -121, 42, -95, -128, -19, -19, -96, -113, -34, 0, 36, 4, 88, -49, -25, 71, 17, 22, -66, -17, -106, 93, -61, -91, -82, 10, -42, 14, -39, 106, -91, -66, 52, -94, -84, -114, 93, -5, 126, 65, -70, -104, 107, 90, -127, -120, -33, 120, -15, 59, -12, -14, 4, -102, -64, -71, 107, -60, 36, -51, 47, -125, 3, -35, -72, -99, -39, -21, 0, -76, -106, 71, -8, 103, 66, 58, 107, -101, -105, 23, -123, 77, -23, -54, -85, 16, -58, 67, 6, -101, -73, -51, 4, -93, 71, -90, -47, 35, 8, 57, 15, 58, -20, 61, -81, 115, 116, 5, -84, 12, -118, 55, 72, -80, -87, -4, 106, 105, 72, -38, 88, 118, -37, 44, -72, -21, 42, 17, -42, -86, -14, -61, 46, 80, 59, -74, -22, -15, 81, -40, -46, 81, 68, -68, 107, 8, -25, -8, 57, -81, 126, -128, -79};
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
    msg.setTimeStamp(0.467933461192);
    msg.setSource(61584U);
    msg.setSourceEntity(35U);
    msg.setDestination(4201U);
    msg.setDestinationEntity(35U);
    msg.sys_src.assign("OYMPUGBRBIRGXWQRHEFQNFDIJDMDOENSOWESFBTXNQJTZMTGFZINFXIZLGVCJINKJRJNAIOZULGTDACMRUODQXHBYRUCHWLKWKAMDVSNCJQHUXWFRKWYJIEPMPZPIYRIMKTBELEMKLDPSDLYBHCSMGAAOWOYXDHEKVSNXANACCYVFZDZTRKUUWXSMECPCBPUTVW");
    msg.sys_dst.assign("DHSHKUDXFFEGTSYOSZVPHNEVBQRVCQEHFDBMWIFPUBCHMKUCPRIRREGJEDVLOFZDUTDWODIUWHYOCWUJEGXKYTPTHNZUULQGVMBXZBLAGNNWBEPJZOKMXZZWPSSJFOOKSKNV");
    msg.flags = 62U;
    const char tmp_msg_0[] = {-120, 67, -86, 121, -72, 5, -57, -110, -18, -45, -124, -56, 43, 14, 13, -58, -43, -4, -77, -83, -122, -28, -37, 83, -32, -13, -47, 55, -111, -77, 3, 95, -72, -14, -86, -72, -91, -16, -23, 5, -9, -112, -23, 19, 42, 32, 90, -53};
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
    msg.setTimeStamp(0.522505179272);
    msg.setSource(2431U);
    msg.setSourceEntity(176U);
    msg.setDestination(63379U);
    msg.setDestinationEntity(197U);
    msg.sys_src.assign("PLGNPBUUZCPRRVUMCLRVTPOHKITTWUZWMTXBCGUDWSWDPYHWOEVKOIOYXOAHBKCHGJAYDDQRCVIVQKZJGDFZNYVFHXGQJRMOZITBRNOFVVEUIDZVCMXOYFRXISJSZJEGYRLLXMQYASTBDNGLDKVMYNWHNEWJKIOFTIEHUZXQGQNGRCFQAYLAEQKZHMESLPSMBTASCMXLJPP");
    msg.sys_dst.assign("IEXSDOOAYIXPZDPKTKFJGOBLQRKAIKTNCZSECWWBLHWQPUELPRXJZXLFVLYZXGRJKTHRNRMNUVVABIJNCKQMFRTWPJIWSGZVBVXUDLMTQRMALBXCHUVAXTNZYOAYSGZEHBAAMLMVMVYTHCGMIOQUDFWYGEEDONPKSUQUPPSGOKINIHFHOHWUCZWBDSCWJYGCYRDLGSKMBJBQQSGIDFACXYQTOPSNJZAFVENDEMQFHFPRZNH");
    msg.flags = 51U;
    const char tmp_msg_0[] = {-7, -59, -40, 26, 119, 32, 7, 34, -82, 122, 51, -34, 68, -122, -87, -71, -52, -66, 12, -93, -128, 98, -81, 92, 87, -18, 26, 9, 62, -12, 45, 21, 16, 123, 101, 125, 69, -43, -72, 62, 13, -117, -83, 29, -74, 121, 110, 22, -106, 24, -122, -15, 108, -122, 50, 79, -60, 25, 105, 42, 47, -18, 86, 86, -73, -77, -93, 91, 105, 73, 71, -70, -59};
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
    msg.setTimeStamp(0.0548430054896);
    msg.setSource(16571U);
    msg.setSourceEntity(176U);
    msg.setDestination(17093U);
    msg.setDestinationEntity(31U);
    msg.seq = 50444U;
    msg.value = 223U;
    msg.error.assign("CRMURQSNEMRWGPIGUNKTIFAKEJKJIALSNBKFDYQYVCSWFQKKTHXLKXITEBBWVPHZRRGOEBC");

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
    msg.setTimeStamp(0.0514017373253);
    msg.setSource(36960U);
    msg.setSourceEntity(225U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(185U);
    msg.seq = 24401U;
    msg.value = 239U;
    msg.error.assign("NOPVSPYRHIEPIVPDBCOZGNLCANFQAWVNRXHHBMKEUWPQSKXEZDHCUTKDCMZZWTQMRUGHCJDANMPIHOYGOKLFYCYLEBLRKMMESOBQOTAAQLLMEBIBLJVUYJEU");

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
    msg.setTimeStamp(0.705196826783);
    msg.setSource(48259U);
    msg.setSourceEntity(4U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(109U);
    msg.seq = 6844U;
    msg.value = 89U;
    msg.error.assign("ZBUISNRXJWPGXLTVVOZUICUSYZGERALSQCYPBEFYKGJHYCJDTFQVFQDXZLEQVZERJZHMVHTXRQQODJQCNECTYG");

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
    msg.setTimeStamp(0.57018212385);
    msg.setSource(27293U);
    msg.setSourceEntity(47U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(213U);
    msg.seq = 30408U;
    msg.sys.assign("STQBBBMIKDMSUZDAXSHBUZIPEKKHUFHPLZYFTGCVYUIVEUYMRAVZFXJFRYIHAPFW");
    msg.value = 0.181293690745;

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
    msg.setTimeStamp(0.86820989296);
    msg.setSource(15475U);
    msg.setSourceEntity(207U);
    msg.setDestination(24716U);
    msg.setDestinationEntity(200U);
    msg.seq = 1673U;
    msg.sys.assign("ISWBJTHVFLQHOQGMAUNBIJQWUQLCGGMROFZVOTKKLVUANTNHJDSDPUCCXHVUP");
    msg.value = 0.473634977484;

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
    msg.setTimeStamp(0.993055504796);
    msg.setSource(4690U);
    msg.setSourceEntity(221U);
    msg.setDestination(47815U);
    msg.setDestinationEntity(22U);
    msg.seq = 20953U;
    msg.sys.assign("URYLDAEVULCYQXXSLCISTKEFPZAZHBZYUAITKKAOKFECHVRCMYIIGUGBBXDVLXLVAOSOBCXJKPTUNBRZOHIJMYESKTTTHBJJXSWYFTYHUYAZQXIHVKRBVGCRDEDGNOAWJUIIFJEPPJJMYMNFTMXWOZQHTOGQVDPUWQEPRLNSPWQEONLUJTMSQQFZWAWGPGMWEFVBYSGVQIHPJNBKDNZDOCGRZDLMCOAMDHSGCPQXRFHKLWREFFCNBNUDS");
    msg.value = 0.415169462222;

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
    msg.setTimeStamp(0.432278713772);
    msg.setSource(29992U);
    msg.setSourceEntity(9U);
    msg.setDestination(61327U);
    msg.setDestinationEntity(125U);
    msg.action = 38U;
    msg.longain = 0.494014590191;
    msg.latgain = 0.18015371999;
    msg.bondthick = 1900653237U;
    msg.leadgain = 0.289437835534;
    msg.deconflgain = 0.45469670261;

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
    msg.setTimeStamp(0.867710595559);
    msg.setSource(19097U);
    msg.setSourceEntity(144U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(61U);
    msg.action = 240U;
    msg.longain = 0.9511796924;
    msg.latgain = 0.129181180797;
    msg.bondthick = 2592719761U;
    msg.leadgain = 0.215882619894;
    msg.deconflgain = 0.948752251004;

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
    msg.setTimeStamp(0.748189556336);
    msg.setSource(22448U);
    msg.setSourceEntity(136U);
    msg.setDestination(57774U);
    msg.setDestinationEntity(189U);
    msg.action = 178U;
    msg.longain = 0.909663514066;
    msg.latgain = 0.932334567609;
    msg.bondthick = 338352833U;
    msg.leadgain = 0.175814034084;
    msg.deconflgain = 0.209647016499;

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
    msg.setTimeStamp(0.267000422829);
    msg.setSource(15049U);
    msg.setSourceEntity(134U);
    msg.setDestination(45999U);
    msg.setDestinationEntity(90U);
    msg.err_mean = 0.233270515836;
    msg.dist_min_abs = 0.484798335616;
    msg.dist_min_mean = 0.867853887032;

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
    msg.setTimeStamp(0.488706620193);
    msg.setSource(14092U);
    msg.setSourceEntity(219U);
    msg.setDestination(27617U);
    msg.setDestinationEntity(48U);
    msg.err_mean = 0.200597449241;
    msg.dist_min_abs = 0.363684486189;
    msg.dist_min_mean = 0.667599870425;

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
    msg.setTimeStamp(0.187947181865);
    msg.setSource(12084U);
    msg.setSourceEntity(9U);
    msg.setDestination(56468U);
    msg.setDestinationEntity(141U);
    msg.err_mean = 0.0210423334485;
    msg.dist_min_abs = 0.323551351416;
    msg.dist_min_mean = 0.627196126615;

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
    msg.setTimeStamp(0.559231264269);
    msg.setSource(49050U);
    msg.setSourceEntity(15U);
    msg.setDestination(55210U);
    msg.setDestinationEntity(127U);
    msg.action = 113U;
    msg.lon_gain = 0.220919440192;
    msg.lat_gain = 0.463493166055;
    msg.bond_thick = 0.0957257911807;
    msg.lead_gain = 0.0795981863585;
    msg.deconfl_gain = 0.194973965724;
    msg.accel_switch_gain = 0.606037756188;
    msg.safe_dist = 0.684995761152;
    msg.deconflict_offset = 0.801301792633;
    msg.accel_safe_margin = 0.488701156861;
    msg.accel_lim_x = 0.991393922477;

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
    msg.setTimeStamp(0.570827571222);
    msg.setSource(52639U);
    msg.setSourceEntity(77U);
    msg.setDestination(4168U);
    msg.setDestinationEntity(112U);
    msg.action = 121U;
    msg.lon_gain = 0.732861489162;
    msg.lat_gain = 0.919552496748;
    msg.bond_thick = 0.930628264584;
    msg.lead_gain = 0.0731406608537;
    msg.deconfl_gain = 0.104650194822;
    msg.accel_switch_gain = 0.161885596601;
    msg.safe_dist = 0.641356706828;
    msg.deconflict_offset = 0.285755455257;
    msg.accel_safe_margin = 0.131228687312;
    msg.accel_lim_x = 0.174780802598;

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
    msg.setTimeStamp(0.628550564384);
    msg.setSource(14007U);
    msg.setSourceEntity(250U);
    msg.setDestination(50655U);
    msg.setDestinationEntity(111U);
    msg.action = 141U;
    msg.lon_gain = 0.361170185635;
    msg.lat_gain = 0.389745151637;
    msg.bond_thick = 0.864467018739;
    msg.lead_gain = 0.828365169079;
    msg.deconfl_gain = 0.216323458808;
    msg.accel_switch_gain = 0.595124599848;
    msg.safe_dist = 0.704926798847;
    msg.deconflict_offset = 0.59413818606;
    msg.accel_safe_margin = 0.470245590775;
    msg.accel_lim_x = 0.711308943968;

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
    msg.setTimeStamp(0.170911835568);
    msg.setSource(56891U);
    msg.setSourceEntity(136U);
    msg.setDestination(25556U);
    msg.setDestinationEntity(102U);
    msg.type = 199U;
    msg.op = 144U;
    msg.err_mean = 0.305731690176;
    msg.dist_min_abs = 0.115805735646;
    msg.dist_min_mean = 0.781198861715;
    msg.roll_rate_mean = 0.170302961503;
    msg.time = 0.622086280259;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 7U;
    tmp_msg_0.lon_gain = 0.0925850053639;
    tmp_msg_0.lat_gain = 0.218488842737;
    tmp_msg_0.bond_thick = 0.383629000539;
    tmp_msg_0.lead_gain = 0.847541470904;
    tmp_msg_0.deconfl_gain = 0.766961667048;
    tmp_msg_0.accel_switch_gain = 0.870305056333;
    tmp_msg_0.safe_dist = 0.737847849105;
    tmp_msg_0.deconflict_offset = 0.510616854785;
    tmp_msg_0.accel_safe_margin = 0.225717916284;
    tmp_msg_0.accel_lim_x = 0.403938614745;
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
    msg.setTimeStamp(0.945863480782);
    msg.setSource(1405U);
    msg.setSourceEntity(71U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(233U);
    msg.type = 58U;
    msg.op = 212U;
    msg.err_mean = 0.855374311161;
    msg.dist_min_abs = 0.319586303507;
    msg.dist_min_mean = 0.253938856843;
    msg.roll_rate_mean = 0.933714390657;
    msg.time = 0.118458400627;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 179U;
    tmp_msg_0.lon_gain = 0.901889635933;
    tmp_msg_0.lat_gain = 0.68144983675;
    tmp_msg_0.bond_thick = 0.379898374869;
    tmp_msg_0.lead_gain = 0.644458829253;
    tmp_msg_0.deconfl_gain = 0.207869764143;
    tmp_msg_0.accel_switch_gain = 0.172258767194;
    tmp_msg_0.safe_dist = 0.911685868436;
    tmp_msg_0.deconflict_offset = 0.00871402588957;
    tmp_msg_0.accel_safe_margin = 0.598735359374;
    tmp_msg_0.accel_lim_x = 0.965935678186;
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
    msg.setTimeStamp(0.990024664257);
    msg.setSource(4015U);
    msg.setSourceEntity(45U);
    msg.setDestination(7858U);
    msg.setDestinationEntity(206U);
    msg.type = 189U;
    msg.op = 130U;
    msg.err_mean = 0.458767409425;
    msg.dist_min_abs = 0.900611181046;
    msg.dist_min_mean = 0.812465789348;
    msg.roll_rate_mean = 0.228828873134;
    msg.time = 0.828726506618;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 135U;
    tmp_msg_0.lon_gain = 0.519717344296;
    tmp_msg_0.lat_gain = 0.764722871577;
    tmp_msg_0.bond_thick = 0.50789343293;
    tmp_msg_0.lead_gain = 0.0711391255068;
    tmp_msg_0.deconfl_gain = 0.727989770671;
    tmp_msg_0.accel_switch_gain = 0.980137006024;
    tmp_msg_0.safe_dist = 0.427347138951;
    tmp_msg_0.deconflict_offset = 0.128302025331;
    tmp_msg_0.accel_safe_margin = 0.486950808284;
    tmp_msg_0.accel_lim_x = 0.444850566396;
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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.858882108838);
    msg.setSource(44759U);
    msg.setSourceEntity(166U);
    msg.setDestination(51102U);
    msg.setDestinationEntity(235U);
    msg.uid = 115U;
    msg.frag_number = 215U;
    msg.num_frags = 201U;
    const char tmp_msg_0[] = {-66, -19, 32, 58, -34, -29, -105, -101, -6, 105, -75, 115, -122, -101, 59, -51, -61, -22, -109, -21, 33, 55, 38, -44, 77, -74, -89, 104, 63, -54, 68, -114, 97, 23, -77, 64, 67, -72, -64, -126, 40, 12, -26, 71, -52, -27, 7, -8, 32, 68, -35, 12, -76, 31, 25, 108, 69, -94, 72, 78, -43, 120, -7, -53, -58, 55, 51};
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
    msg.setTimeStamp(0.485998978238);
    msg.setSource(49002U);
    msg.setSourceEntity(0U);
    msg.setDestination(54770U);
    msg.setDestinationEntity(236U);
    msg.uid = 180U;
    msg.frag_number = 128U;
    msg.num_frags = 19U;
    const char tmp_msg_0[] = {-73, -24, -22, 113, 124, -124, 2, 113, -41, 48, -73, -127, 77, 78, 50, 58, 34, -55, 12, 79, 47, 125, 121, 5, 27, -98, -32, 21, -101, 88, -128, -25, -27, 121, 31, 91, 18, 46, 26, -126, -79, 104, 65, -92, -77, -89, 94, -88, 7, 118, -39, 90, 55, -41, 88, -97, -127, -58, 15, 32, 46, -12, 84, 51, 10, -72, 103, 15, 83, 107, -55, -39, -42, -27, -73, -99, -33};
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
    msg.setTimeStamp(0.880037711016);
    msg.setSource(33533U);
    msg.setSourceEntity(164U);
    msg.setDestination(61140U);
    msg.setDestinationEntity(230U);
    msg.uid = 179U;
    msg.frag_number = 187U;
    msg.num_frags = 240U;
    const char tmp_msg_0[] = {1, -69, -36, -126, 89, -51, 61, 67, 70, -18, -124, 52, 12, 124, -11, 18, -112, -14, 81, -28, 54, 102, -125, 60, -77, 95, -95, -54, 72, 54, 91, -18, 26, 14, 116, 65, -42, 7, 1, -124, 81, 3, 22, -9, -56, -73, -73, 116, 97, -47, -15, 79, -52, -103, -109, -95, -20, 103, 121, 21, -61, -71, -37, 110, -10, -109, 119, 117, -92, -63, 3, -67, 56, 40, 93, 124, -52, -44, -69, -42, -82, 30, -55, 17, 71, -100, -10, -114, -84, -49, -12, 24, -79, -37, 36, -121, -75, -124, 30, 52, -98, -73, 124, -45, 123, 116, -112, -58, 113, -6, 48, 25, 52, -54, -61, 92, -45, -5, -42, 99, 107, -80, 64, 6, 22, 49, 72, 101, -83, 122, -28, 15, 32, 121, 98, -71, 77, -106, -105, -15, 119, 110, 94, -4, 110, 49, -86, -73, -37, 62, -81, -60, -95, 61, -73, -112, -118, 105, 118, 113, -77, 51, 51, -26, 30, -68, -53, -13, 87, 126, -27, 111, -20, -96, -66, 35, -16, 72};
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
    msg.setTimeStamp(0.400791713237);
    msg.setSource(36866U);
    msg.setSourceEntity(207U);
    msg.setDestination(38532U);
    msg.setDestinationEntity(146U);
    msg.content_type.assign("UXPFFCKYPZQXLWN");
    const char tmp_msg_0[] = {-108, 38, 110, 55, 124, 34, -56, 25, -67, -34, -47, -60, 45, 4, -32, -81};
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
    msg.setTimeStamp(0.703443609019);
    msg.setSource(24896U);
    msg.setSourceEntity(149U);
    msg.setDestination(44551U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("VCFGDNOYUWTOCPOAVRRGWVGKATCIWJZYBCOYUNPDRSELGSJZJQXNVIPTBBKRYPURNTMZDJCKKVUAVENVDPWWEDTTBHJIKYLYDJYMBOICXLLIIUQBHCISXCOVUNZGFAGREGFFNAKZWVYKQQSW");
    const char tmp_msg_0[] = {32, -82, -80, 57, -49, -48, -13, -44, -54, 88, 25, -113, -53, -58, 101, 7, 21, -91, -45, 113, -29, 76, 11, -95, -18, -86, 101, 0, 107, 43, 21, -45, -29, -66, -63, 25};
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
    msg.setTimeStamp(0.986277117481);
    msg.setSource(411U);
    msg.setSourceEntity(236U);
    msg.setDestination(31087U);
    msg.setDestinationEntity(168U);
    msg.content_type.assign("AVKWZLFEIDKGKJYEGDTDJJYUDOLYENXSKEEZLRUWMIOIHNCUSKDCRROYKAHMJBQBVCTMVXDWWTXIROMPYHYJANTZIUWVLTZIQHQINPLACXFNGFBOXYXCHACMSQWHMTZN");
    const char tmp_msg_0[] = {-125, 9, -84, -48, 12, 35, -35, -88, -121, -87, -86, -105, -91, -27, -15, 41, -122, -97, -88, -101, -44, -121, 107, -115, 109, 61, -28, -106, 54, 65, -44, -10, -111, 52, 55, -72, 112, -53, 18, 48, -65, 28, 42, -28, 24, -9, -78, 2, -100, -106, 56, -89, -105, 70, -128, 33, 106, 53, 58, -127, -109, -85, -109, -114, -28, 60, 53, -94, -23, 48, -26, 81, -116, -74, -21, -18, 67, 21, -50, -23, -114, 92, -108, -86, -87, -124, -100, -38, -49, 74, 50, -93, -123, 72, -19, -106, -105};
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
    msg.setTimeStamp(0.788308549486);
    msg.setSource(44533U);
    msg.setSourceEntity(143U);
    msg.setDestination(17452U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.14958763998);
    msg.setSource(62331U);
    msg.setSourceEntity(219U);
    msg.setDestination(6634U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.574471161289);
    msg.setSource(44659U);
    msg.setSourceEntity(84U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.543344870361);
    msg.setSource(21976U);
    msg.setSourceEntity(95U);
    msg.setDestination(52956U);
    msg.setDestinationEntity(186U);
    msg.target = 43050U;
    msg.bearing = 0.759723436637;
    msg.elevation = 0.947470478812;

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
    msg.setTimeStamp(0.545541906669);
    msg.setSource(29880U);
    msg.setSourceEntity(27U);
    msg.setDestination(21456U);
    msg.setDestinationEntity(235U);
    msg.target = 42067U;
    msg.bearing = 0.35861469632;
    msg.elevation = 0.203929893474;

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
    msg.setTimeStamp(0.450808179027);
    msg.setSource(7711U);
    msg.setSourceEntity(83U);
    msg.setDestination(31216U);
    msg.setDestinationEntity(108U);
    msg.target = 45534U;
    msg.bearing = 0.377504002376;
    msg.elevation = 0.0243184482269;

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
    msg.setTimeStamp(0.221650611412);
    msg.setSource(47745U);
    msg.setSourceEntity(240U);
    msg.setDestination(467U);
    msg.setDestinationEntity(167U);
    msg.target = 40050U;
    msg.x = 0.306623638869;
    msg.y = 0.100785350408;
    msg.z = 0.817202138608;

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
    msg.setTimeStamp(0.652024650136);
    msg.setSource(12540U);
    msg.setSourceEntity(48U);
    msg.setDestination(19936U);
    msg.setDestinationEntity(71U);
    msg.target = 55410U;
    msg.x = 0.863671347267;
    msg.y = 0.681623981616;
    msg.z = 0.891581455371;

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
    msg.setTimeStamp(0.930698306579);
    msg.setSource(61289U);
    msg.setSourceEntity(134U);
    msg.setDestination(27743U);
    msg.setDestinationEntity(74U);
    msg.target = 45248U;
    msg.x = 0.578107730305;
    msg.y = 0.97809176723;
    msg.z = 0.216541201853;

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
    msg.setTimeStamp(0.303553111069);
    msg.setSource(51673U);
    msg.setSourceEntity(112U);
    msg.setDestination(37793U);
    msg.setDestinationEntity(144U);
    msg.target = 54565U;
    msg.lat = 0.492414834859;
    msg.lon = 0.271242789556;
    msg.z_units = 11U;
    msg.z = 0.0595871776867;

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
    msg.setTimeStamp(0.0090987991894);
    msg.setSource(46597U);
    msg.setSourceEntity(79U);
    msg.setDestination(29361U);
    msg.setDestinationEntity(242U);
    msg.target = 29143U;
    msg.lat = 0.950483537306;
    msg.lon = 0.718333409475;
    msg.z_units = 93U;
    msg.z = 0.476176635498;

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
    msg.setTimeStamp(0.741681092636);
    msg.setSource(22032U);
    msg.setSourceEntity(35U);
    msg.setDestination(28308U);
    msg.setDestinationEntity(246U);
    msg.target = 52339U;
    msg.lat = 0.362632723938;
    msg.lon = 0.307978519244;
    msg.z_units = 187U;
    msg.z = 0.00490853241105;

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
    msg.setTimeStamp(0.082583433485);
    msg.setSource(31025U);
    msg.setSourceEntity(189U);
    msg.setDestination(36132U);
    msg.setDestinationEntity(184U);
    msg.locale.assign("YEABRPMQXAEJRXJAJBEFKPZMMQBQZSIJKEJANGKGEHFGHLTNDHNIVFPBLISGLQUDNFUOVNARTKOOXHYZUUTXYDJWUFPCWBBMCLRMUDFRMYTNSLVKCPZDHJYSECAURQSONDIDBL");
    const char tmp_msg_0[] = {-71, -102, 26, 73, -78, 58, 43, -81, -87, 71, 50, -100, -78, 81, 13, 112, -119, -17, 79, 111, 89, 55, 88, -81, 29, 76, 0, 120, -41, 24, 63, 9, -96, 81, -44, -43, 66, 27, 48, 101, -7, -35, -32, 69, -55, -34, -109, 27, -48, -111, 67, -23, -38, -23, 108, 126, -31, -92, 55, -83, 82, -127, -33, -59, -22, -16, -112, 119, -61, -84, -3, -50, 123, 64, 53, 8, -96, 60, -29, -119, 122, -61, -73, 104, 7, -96, -127, -92, 10, 82, -10, -68, 62, -83, -85, 44, -94, -51, 34, -100, 13, 101, 49, -89, 115, -11, 98, 40, -7, -97, 53, 56, -104, -24, 119, -105, 85, 106, 71, 4, -41, -15, -127, 52, -75, 65, 103, -82, -65, 84, -84, -95, -48, 44, 109, -76, -124, -8, -84, 9, 79, 87, 17, -91, -100, -52, 51, -115, 10, -120, 97, 114, -126, -61, -95, -104, -16, -32, 86, 33, 77, 29, -12, -57, 17, -31, -14, -66, -17, 77, 110, 35, 98, 31, -57, 51, -68, -18, 84, -125, 19, -90, -97, -66, -89, -115, 61, -33, -18, -69, -30, 47, 73, -28, 17, 68, 62, -118, -100, -56, 94, -94, -118, 122, -94, -12, -6, 43, 72, -58, 99, -82, 76, -103, 119, -92, -53, 125, -121, 108, 0, 86, 45, 54, 92};
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
    msg.setTimeStamp(0.631299733355);
    msg.setSource(23513U);
    msg.setSourceEntity(209U);
    msg.setDestination(16813U);
    msg.setDestinationEntity(200U);
    msg.locale.assign("JGRLPNLSHTAGVGDZINEFZMZHDTDAXIAYCBXONACHNWTKJUTUJPKHNYMA");
    const char tmp_msg_0[] = {-46, 117, 60, 67, -8, -24, -88, -9, 50, -117, -67, 2, 50, 96, -21, 100, 72, -82, 86, 92, -45, 46, 6, 1, -108, -79, 29, -122, -40, -89, 8, 122, -34, 102, -88, 89, 117, 13, 51, -53, -9, -113, -123, -69, -77, -122, -16, 63, -36, 104, -16, -29, -80, 29, -113, 5, 105, -19, -14, 50, -46, 93, 29, 45, -120, 124, 116, -99, -72, -32, 3, 78, 92, 94, 109, -34, 51, 26, -106, -4, -31, 30, 118, -67, 6, -93, -126, 18, 13, 107, 97, 87, 121, 99, -5, -94, 34, -51, -74, -8, 97, 3, -58, 41, -74, 8, 5, -125, -121, 81, 64, 44, 20, -35, 105, -70, -106, 34, 111, 124};
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
    msg.setTimeStamp(0.166531414653);
    msg.setSource(2720U);
    msg.setSourceEntity(206U);
    msg.setDestination(18085U);
    msg.setDestinationEntity(133U);
    msg.locale.assign("FCCLHVPWWINEYATXVTQUGGNQPYRRAWXJHMULSQGOBHTPRMCRBXPHAHWRIDTRKHEWNDZIOZNQAIXBXJEYTLMCRATMNNZVJOCWZDGPUZLLZQRLDVBTOIBASLQLQPEUYUHQURJFCXBOSMUYQAIGXVKDRYDGEKPMBXNQYYFKLSJMCAEIUSASFG");
    const char tmp_msg_0[] = {114, -13, -92, -117, -31, -45, -89, 122, 54, 64, 89, 111, 15, 11, -19, 53, 113, 4, 78};
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
    msg.setTimeStamp(0.219644179893);
    msg.setSource(8308U);
    msg.setSourceEntity(68U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.987218935459);
    msg.setSource(59647U);
    msg.setSourceEntity(5U);
    msg.setDestination(14466U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.726179995774);
    msg.setSource(62606U);
    msg.setSourceEntity(68U);
    msg.setDestination(1907U);
    msg.setDestinationEntity(88U);

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

  return test.getReturnValue();
}
