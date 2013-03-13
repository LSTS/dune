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
    msg.setTimeStamp(0.6754946517989998);
    msg.setSource(35309U);
    msg.setSourceEntity(186U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(254U);
    msg.state = 174U;
    msg.flags = 182U;
    msg.description.assign("RGDHYUPHYTKNMMGMKFYWZUAIDLCEJIZQRNSRTFOGTOJEUFQGVVGUCBAKFODIMFOLMVTJQNSKPQPXVBZGXMTYMIEBDSIQEHHM");

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
    msg.setTimeStamp(0.28480205377489676);
    msg.setSource(56165U);
    msg.setSourceEntity(152U);
    msg.setDestination(52521U);
    msg.setDestinationEntity(74U);
    msg.state = 125U;
    msg.flags = 31U;
    msg.description.assign("GMDVCZBFKCLGPUBXVYPNDVWVOJZZIJXZCQROFXKLVPGEHOMMPDIHAAUJMPFRYOTNDYGVONDCGHYYMUWCCRSQIAJUGFLLRLTDXJPKBYRCVKSLMBSDJRFHHWFURBYJHNQMRWOUTXZNWINYZTBKWWUEHRLIAQEAYDPCSZLZMBCEOGEGONTVOAJBNSKVCGEPEIATQSHYEKZKXIAWQBTUHFJXXMUFXDTDRK");

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
    msg.setTimeStamp(0.7984204180255222);
    msg.setSource(19083U);
    msg.setSourceEntity(190U);
    msg.setDestination(26486U);
    msg.setDestinationEntity(140U);
    msg.state = 227U;
    msg.flags = 245U;
    msg.description.assign("XBYYRRVHQEYKMPUGSRZQJWRACBYDIDHQJJSUSJQTMAMFLLRCGNDAZTMZPLTMJWHELNFDXEBVJFGRYHSLWKJSSKKQXKEGSIZLKSEJKFOTPAWFVNZIAQTYUOVNCBMONURYNFINOQODEFEAVJERDQCLKDCHPDXRATQCWG");

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
    msg.setTimeStamp(0.7160197039145745);
    msg.setSource(21552U);
    msg.setSourceEntity(125U);
    msg.setDestination(56362U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.9033822459759411);
    msg.setSource(3815U);
    msg.setSourceEntity(65U);
    msg.setDestination(53926U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.027978955578763065);
    msg.setSource(43403U);
    msg.setSourceEntity(174U);
    msg.setDestination(63265U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.4220256535049308);
    msg.setSource(45565U);
    msg.setSourceEntity(4U);
    msg.setDestination(32927U);
    msg.setDestinationEntity(13U);
    msg.id = 87U;
    msg.label.assign("GGCFEWIJRVMBJCKGCESOBITSCEDVOETDVLINKKKKWAJUXPRTMNRADKCXNAXFZ");
    msg.component.assign("VUVNBQDFPZODVGIEMJEFMWWYQJEFXUFKCPDGQOJCAHABCIJAPDWGFWDRSENNINRUTFBNYGQJKZLEWRRCSCTYGBRWEZT");
    msg.act_time = 60395U;
    msg.deact_time = 50276U;

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
    msg.setTimeStamp(0.752790997385315);
    msg.setSource(40264U);
    msg.setSourceEntity(134U);
    msg.setDestination(33144U);
    msg.setDestinationEntity(47U);
    msg.id = 250U;
    msg.label.assign("NYVGEPNJCLCBOFKHAATFXDWKKJRALPKRMKYJGUISQHSKUUHONLWEBNBVTPDOVZENETUERWCZBPTFUVZFSSNRMDXIAOTOLDXLFKGYLJIDHQWSPAQSYJSQXIMJLXZBXTXNWCEUGXDWVGTANGGTZ");
    msg.component.assign("HGPUNEZXWQBTNYUOBAPBYXGSETHGSTJDKKZRFWJCCWEUTOJDQSPFSPCFICYZTWGJNTVGWOPQLRAYIXOODLHDXFLKDPNCLZIRQRWCKKAOHYKAEFAFUZJVMVBLYDNAJLQJLVDSTUEIAPKAGPBZYTSJXUVKZBOLDXRMPFUQTQDVREFKYRMHGMVVKCMYSGRBCNMALIEJVIRXGPYNHSDNBZCUQOHXIBNJWHOBEWMMQSFSIIFMNMEGWTVWAIUUXO");
    msg.act_time = 58258U;
    msg.deact_time = 3232U;

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
    msg.setTimeStamp(0.3507111358713958);
    msg.setSource(42086U);
    msg.setSourceEntity(170U);
    msg.setDestination(15662U);
    msg.setDestinationEntity(224U);
    msg.id = 224U;
    msg.label.assign("JUNILAQYQBOSGDYLUMXRACTAHKRTHWXTXZBRMCQOCGQPTGPLXNJQJUOMENCHGPDEFRSOKGYOBIAMMBSBAEWWZUQIXWSVBVPKLEYONJXSDAGRZPWCLHVYHIYWZVCFORSBUX");
    msg.component.assign("KHFRLWYEFIMHWAIELUACEPKCVRZMEYEGGPYQRQTBUJGVWBHIPUZYUMJIIJYTVQNXFCLMTPPEVFEUOQCGGBJDDYAMTCBOUONHWQQNOPAZKRFDGKSRTVOTHABGMKNTSSDHLHRAXDAVEPINSGASSZLXWXREWWJJNKUTZMKKUUVCQZECKHYRSLLFYXXDVQAVSJXOYQND");
    msg.act_time = 49959U;
    msg.deact_time = 21399U;

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
    msg.setTimeStamp(0.12075434772484273);
    msg.setSource(48866U);
    msg.setSourceEntity(113U);
    msg.setDestination(45194U);
    msg.setDestinationEntity(76U);
    msg.id = 135U;

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
    msg.setTimeStamp(0.1528716318054134);
    msg.setSource(46236U);
    msg.setSourceEntity(153U);
    msg.setDestination(31631U);
    msg.setDestinationEntity(206U);
    msg.id = 174U;

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
    msg.setTimeStamp(0.7124875787627142);
    msg.setSource(47981U);
    msg.setSourceEntity(221U);
    msg.setDestination(42369U);
    msg.setDestinationEntity(153U);
    msg.id = 49U;

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
    msg.setTimeStamp(0.5639375516980121);
    msg.setSource(25469U);
    msg.setSourceEntity(96U);
    msg.setDestination(37737U);
    msg.setDestinationEntity(107U);
    msg.op = 84U;
    msg.list.assign("KEHGCIAUGRCACHDSASWBBWXUODXHALOJPSLRIEKNYGVHDVMDWELJOUBNDQZEXYVJCNEYZWYBEDPA");

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
    msg.setTimeStamp(0.006038015985752265);
    msg.setSource(44466U);
    msg.setSourceEntity(57U);
    msg.setDestination(41144U);
    msg.setDestinationEntity(206U);
    msg.op = 67U;
    msg.list.assign("IQDVAMPVEJBMMEZCUZYAXLJSVAUFFRVHCQJOIKKEJFCLBNNTHLPOMGGODXAHTLDOXYLGTTNDSYIXYNPRRJWGUEWFDVNLQLKNONOSFSGDQAKFHZHWMIVXXPMUZSSAELQEBOWZKBVLCDHEHYELACKYUTSUFRJGNBJTWWCACZPRRRXAMYIOZPXEBQKNQXKYWPFUPZQCGKYIZSTDJTKVWIGPBMHJHSEGZUQB");

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
    msg.setTimeStamp(0.3994406616781917);
    msg.setSource(24548U);
    msg.setSourceEntity(208U);
    msg.setDestination(18995U);
    msg.setDestinationEntity(93U);
    msg.op = 11U;
    msg.list.assign("QIGPUUUKORTWBYWXRBMTPWUQPYKCKYFQDL");

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
    msg.setTimeStamp(0.5077556508225123);
    msg.setSource(19371U);
    msg.setSourceEntity(223U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(157U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.4623892111919423);
    msg.setSource(11228U);
    msg.setSourceEntity(34U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(173U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.3206337134243271);
    msg.setSource(28627U);
    msg.setSourceEntity(111U);
    msg.setDestination(51062U);
    msg.setDestinationEntity(114U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.4686745531272901);
    msg.setSource(19657U);
    msg.setSourceEntity(57U);
    msg.setDestination(49876U);
    msg.setDestinationEntity(140U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.9265155424114419);
    msg.setSource(60408U);
    msg.setSourceEntity(167U);
    msg.setDestination(12813U);
    msg.setDestinationEntity(117U);
    msg.value = 27U;

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
    msg.setTimeStamp(0.2548324875184882);
    msg.setSource(33987U);
    msg.setSourceEntity(37U);
    msg.setDestination(42739U);
    msg.setDestinationEntity(96U);
    msg.value = 62U;

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
    msg.setTimeStamp(0.21351609674997551);
    msg.setSource(9110U);
    msg.setSourceEntity(68U);
    msg.setDestination(45532U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("PNWMTKMXKETJZKKPZPZVRPMOOYUIUHFOJFIZQRGUNAGUMLGJDXXBOEVVARNABGEPOHCVOZUBHDFXDHEZYACQUXSFBFSQFWKUGRTMIDMETPNSRLHLLKHVCWLLJCIXS");
    msg.message_id = 48874U;

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
    msg.setTimeStamp(0.3689857383791969);
    msg.setSource(47006U);
    msg.setSourceEntity(39U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("YPLDDCNZEXFRYXGPIXIKRL");
    msg.message_id = 41497U;

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
    msg.setTimeStamp(0.38169064998884905);
    msg.setSource(52342U);
    msg.setSourceEntity(38U);
    msg.setDestination(43286U);
    msg.setDestinationEntity(139U);
    msg.consumer.assign("QTXOWAIDQFSWFYIJMYTFMVXDHTBYZJYGACXXDQOECNCIUMLKZNGFZZZROELESTELPVRMESMCPWSBBDJGHXQKQVDOQJRFWNZQTSAOAJHYESGFKNLDUXVLPKHESPMNMIGLWGDBZCRLUIYT");
    msg.message_id = 46873U;

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
    msg.setTimeStamp(0.8190171811209053);
    msg.setSource(33362U);
    msg.setSourceEntity(154U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.7440934993131508);
    msg.setSource(51652U);
    msg.setSourceEntity(220U);
    msg.setDestination(8760U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.010142782238921622);
    msg.setSource(36162U);
    msg.setSourceEntity(249U);
    msg.setDestination(48338U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.7313346667584837);
    msg.setSource(63456U);
    msg.setSourceEntity(137U);
    msg.setDestination(45527U);
    msg.setDestinationEntity(86U);
    msg.section.assign("EQIUWEPRNFHXJUOODPUMAUHLMBWXSLFUJBVMYVGAIFBUIVCIZKODTMSVDZLIQLRZKCTKCGNRUWVHDIXSWSCTBTSYNYGDVNOZYVXBPQECDYVVSKKCDRHRJCVSHLENMFRMZKTWUJKQHFQPJDPYIFEPCJSSZAFLPNOHOEHYLJCZPBUPJBGEOIGHRYAFA");
    msg.param.assign("SPAUXEELYCNZARNTSDYDBTZHGPIOEFKOKEYUXXYZXUQSHETCCFBYWDIMVZJTJIQIOSEKCSRWAVEKFNCHZMFRNANGLVALXVJJNAEPMGERILUVAUPKOHSGBTFTPIALQNUWDBXDGQMHTGZSNGIDFLKDXMPROAFTLGEOKWYFOVDLQUZFYMHVNJCZBJSCRWNWQTBCXPBCRCMQVFBURMYVJLGHKQHHH");
    msg.value.assign("FBSJPDUUQYAXGPCIEPQHAEHVPATSRVVTAPJHHVWWEKVIWZYARMRYFDWSUCQIAVGBPFTSYTXEJ");

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
    msg.setTimeStamp(0.6495343026485174);
    msg.setSource(6490U);
    msg.setSourceEntity(89U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(232U);
    msg.section.assign("OOSBUQSRPBJSKDLEROREKJDSCNHEAQIVCCWBZYXXAOQBVUUBYZDJEIAZTYITPFPHCUTGLSDMPQXOQNEIZHFGHWOGKELGQWLLJFARDCYLJQPMZPNDNTGIGNMKVEDWBGUPJTIGMGSRXHYBAAVPYFDHJTRMHAMHZEOFSCXJYTMIAH");
    msg.param.assign("EDTZRJHCHLEMRQDYZMIAVDZMIOFTGASIGKYOIZBCFWKLXRDLCBMNHHZSZWRJVLWSNRNEGDQCUTHFCBBIUQWGTAXBEMFNXDWIXCRYZNXAFASHEZJ");
    msg.value.assign("BBUEWWNISFDMDNZLDMSYEGICFMNREPDAMKCPHXCBQISDTMKAWUZNZANRAJZYZKSIAUOGGAIKQXXVNELPTEJTJHBTJGCPJOQIHJWKBVIOJHHOKUXVQAXFZODVOMAPUPJGGACCYQQHEVNGRGAJF");

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
    msg.setTimeStamp(0.24371687740592662);
    msg.setSource(40108U);
    msg.setSourceEntity(198U);
    msg.setDestination(49921U);
    msg.setDestinationEntity(206U);
    msg.section.assign("PWNPMMLKGWYSDYCFXFSLZXYOICEKTNFIDLNNCQEKPQZQFUPOHOJURHLBDHHWCQJJXALJFICGAYEHQIEMZKJSPGOZMCHPFKYRSKDLUSCEFZJSBDXVGMRTJXTPCLBRMTUVHNLSQOMWYYIAEHKBISWWOZWRTAQWQQPOEHUFNVJVKYTVJLGIJVVQB");
    msg.param.assign("QKJPUPPMBUXWXXREXNGVNWJILYENFQRHEEOWNLCTPMESCIYWGTQWSZOBUCVEFB");
    msg.value.assign("ZPYECJGICHDYLTRBZCYDOOFTDIQOWVVOMNUJRESAXMVNC");

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
    msg.setTimeStamp(0.24351355697183208);
    msg.setSource(27995U);
    msg.setSourceEntity(149U);
    msg.setDestination(17476U);
    msg.setDestinationEntity(173U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.7534385846965971);
    msg.setSource(5040U);
    msg.setSourceEntity(105U);
    msg.setDestination(27155U);
    msg.setDestinationEntity(101U);
    msg.op = 14U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("UKGIUIKNMHLZJHDPJPDWHRPIOSLQSRYLJPOKFEJTYKQXESKEBTJQVFUTVPZGBGUCBCHMDRAVXVOCQIJKXKDNLBGKLOQGXDUNPDFBALZXEFFCOGHOHRJLPRXIYCIIWYLMQGPATZRRMMQVSSELBMWRSBNCCAZXVFWMSEKSWFVUVWENUYCDWZTTMXQBHNQGAUAFHINWCEVWCMZIAORHYFTSFSEZDIDHYOWANUTOBYPTJXRTYP");
    tmp_msg_0.param.assign("ZUFKEBFBLCGVLCGECWXFKZYECWXWQOUSWXBZOWBQLRASUVJWUKOTHJJQBHUKOYBKBMLJTZDYAGIPLQJPHTSFIERYYRLIRFZXNEISMNQYPKPXMUHLZCOMNNEOPSTJUTPAVALRVLDGHYNGEWDKSPCZHUIPQNKTSODIEFHDYMFXMBSGSOFQAVXGFDNVBZCWWTA");
    tmp_msg_0.value.assign("RLUMIUEEJASLTKWRNZTTILMSKSKBANEVGMADOLDZEIVKKGQMGWTAEZVSQBDNSSOLTFRCCOPM");
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
    msg.setTimeStamp(0.19479664276544195);
    msg.setSource(38826U);
    msg.setSourceEntity(198U);
    msg.setDestination(28891U);
    msg.setDestinationEntity(253U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.3407905426105676);
    msg.setSource(57237U);
    msg.setSourceEntity(50U);
    msg.setDestination(63485U);
    msg.setDestinationEntity(115U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.7131183664672246);
    msg.setSource(1248U);
    msg.setSourceEntity(25U);
    msg.setDestination(59066U);
    msg.setDestinationEntity(249U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.5124593490702476);
    msg.setSource(34544U);
    msg.setSourceEntity(238U);
    msg.setDestination(29389U);
    msg.setDestinationEntity(28U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.38305141331894077);
    msg.setSource(34777U);
    msg.setSourceEntity(46U);
    msg.setDestination(40379U);
    msg.setDestinationEntity(238U);
    msg.total_steps = 98U;
    msg.step_number = 20U;
    msg.step.assign("FEURUXADHJBCHTGFTVIPABPAFYPHNXLOWICZSCKLLCLJXNHLPQYTHAKVZYSEJCKDAWAYBTJNKZYGHNGNKPTLTMFDVJXUWPBRITBIENKSGQYSMDQMWMPBQMQHZOWDWEOEIEJOVRXPCMAKSHFIOQJWULVGNUJDNHZTSRDMSHRURAYTCZXVOCUJRRNEQFKYJZOELRICBXGQPZGF");
    msg.flags = 152U;

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
    msg.setTimeStamp(0.5850420797463641);
    msg.setSource(50749U);
    msg.setSourceEntity(205U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(142U);
    msg.total_steps = 186U;
    msg.step_number = 142U;
    msg.step.assign("WJSPZYMYNVZJQEQCWEEBCUDKSQKBAFQUOADLZNVWSVDTBXPDJEAIVHGBJASITIZTNQKSMPSPQUZOHHRTEYOSXUAZWZJMEFNHBMJF");
    msg.flags = 52U;

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
    msg.setTimeStamp(0.36045480053920764);
    msg.setSource(44213U);
    msg.setSourceEntity(147U);
    msg.setDestination(52634U);
    msg.setDestinationEntity(64U);
    msg.total_steps = 172U;
    msg.step_number = 237U;
    msg.step.assign("PSHNEUNLZFXPBXOGKTOIGHYPWVHJIEMHKTXTNEPNIQRSFOZPYRLDBQFKZXQYQMYCLFFEVSGKOCZACKAMDHUYRRQXVRRSRDAJDMMVIVKVRLAFEFJIOVQDLWCTSGZKQGXWBTM");
    msg.flags = 141U;

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
    msg.setTimeStamp(0.8501672958749127);
    msg.setSource(63244U);
    msg.setSourceEntity(180U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(222U);
    msg.state = 31U;
    msg.error.assign("VTOAOUSDFT");

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
    msg.setTimeStamp(0.6366499723898181);
    msg.setSource(14590U);
    msg.setSourceEntity(27U);
    msg.setDestination(60053U);
    msg.setDestinationEntity(240U);
    msg.state = 151U;
    msg.error.assign("ZGKXQPVORNOWLFTZFBYHIYKQYUSODTJARXEOFRUQCMPECTKDEHDGXEOICGYQPUBZOLMCWVDHSPBPHTPAGITRGGMHCEBGRFF");

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
    msg.setTimeStamp(0.5759132826448032);
    msg.setSource(49057U);
    msg.setSourceEntity(62U);
    msg.setDestination(15281U);
    msg.setDestinationEntity(252U);
    msg.state = 140U;
    msg.error.assign("RFSCAQJCQTPRGXZMLVPFSYHKMSTBIFDJDXONZSVDKKJODLHOJVWEEJWINXSILBNXQDVZHFNVZHTKDTXUOLYKRQPEYSLCEIJXLICBUTRIYNTMFXXHUFVUJSWRNHVCZYWZREKNKMWGRWLAFZMIHQUFJGQSPBBYWPSZHCHEBQGKYVJAYGRDAWYGRMIBXATCBNEIAIAUWKOLG");

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
    msg.setTimeStamp(0.18056868227975975);
    msg.setSource(35686U);
    msg.setSourceEntity(168U);
    msg.setDestination(39019U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.8808093503211715;
    msg.lon = 0.9317352914536067;
    msg.height = 0.10361912784653338;
    msg.x = 0.19484046387600862;
    msg.y = 0.868309008151248;
    msg.z = 0.36257116956162916;
    msg.phi = 0.5143145604615885;
    msg.theta = 0.35461228783298226;
    msg.psi = 0.31726408803783546;
    msg.u = 0.5198519040213346;
    msg.v = 0.5888848975583741;
    msg.w = 0.5942171726079796;
    msg.p = 0.9046861738538866;
    msg.q = 0.6313050204829125;
    msg.r = 0.1628071600614578;
    msg.svx = 0.4674522158071517;
    msg.svy = 0.8046046193226912;
    msg.svz = 0.021577653768059757;

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
    msg.setTimeStamp(0.5142884575803964);
    msg.setSource(25011U);
    msg.setSourceEntity(63U);
    msg.setDestination(13228U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.8775071294269958;
    msg.lon = 0.30953275642849953;
    msg.height = 0.8301833600827737;
    msg.x = 0.8102115456664575;
    msg.y = 0.685057121996629;
    msg.z = 0.5112997454577002;
    msg.phi = 0.48204109157061026;
    msg.theta = 0.14316072129756274;
    msg.psi = 0.4112219667868412;
    msg.u = 0.4261785579379511;
    msg.v = 0.7477642450527109;
    msg.w = 0.08690639201155825;
    msg.p = 0.25472565304384687;
    msg.q = 0.5151691905779023;
    msg.r = 0.6099957006554655;
    msg.svx = 0.19663460355266393;
    msg.svy = 0.7468678039318444;
    msg.svz = 0.3123195663980777;

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
    msg.setTimeStamp(0.10785976220111682);
    msg.setSource(48154U);
    msg.setSourceEntity(40U);
    msg.setDestination(11991U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.031089355763018744;
    msg.lon = 0.3104632812015812;
    msg.height = 0.7033925142880763;
    msg.x = 0.9398160351762743;
    msg.y = 0.6503071860727346;
    msg.z = 0.2408363723246616;
    msg.phi = 0.7129090664468299;
    msg.theta = 0.8575911698487975;
    msg.psi = 0.33582806094318174;
    msg.u = 0.5709591315047796;
    msg.v = 0.9288951970392554;
    msg.w = 0.4487078888931435;
    msg.p = 0.8380491552529034;
    msg.q = 0.46682974777738007;
    msg.r = 0.15390689686308934;
    msg.svx = 0.27957514371689196;
    msg.svy = 0.33068625382568584;
    msg.svz = 0.12474480496543994;

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
    msg.setTimeStamp(0.6440982571698239);
    msg.setSource(46989U);
    msg.setSourceEntity(198U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(150U);
    msg.op = 150U;
    msg.entities.assign("BBTZNPYKJNRWTDUJDDWQXLATXQYNWPQEBPHQABLLLKHQJYZVYLOQCPK");

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
    msg.setTimeStamp(0.7280986613145648);
    msg.setSource(6940U);
    msg.setSourceEntity(147U);
    msg.setDestination(38945U);
    msg.setDestinationEntity(126U);
    msg.op = 38U;
    msg.entities.assign("NOYYGLBFBFQREDMAYUQCBZTFFCRBBQCHWMCHOXALHWCYXTFVZEAFWHSUJZPPTISAWQMWEWDIIRYVZUWHJNHWPBHZEIEMGFLCTKXFMRKTZIDPNKRLDSYVNQRUJGBZVCHPUJMOPDOGGDKNKCSTTJMPFGNIINMQYSP");

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
    msg.setTimeStamp(0.08657098072943481);
    msg.setSource(32257U);
    msg.setSourceEntity(45U);
    msg.setDestination(22459U);
    msg.setDestinationEntity(124U);
    msg.op = 235U;
    msg.entities.assign("UXGWRWHQJXPSAPQLTFHDCFBKCMPTLYKAAURLUBIJOZLKWRXQVCDDJLIHGJEGKFENOBPJTYFKFAAOZRTGCGZTAZTWGKAVEYIBWYEPSOVNWXRSDLCVDEKNLTRMSWFKCTLZEVBCQPSMUHOYOQMQZHBNJOMURCGHCIEYGINNIEBAAOZWOYXMRLKVISFUBXYFHNRKUDTFTPRSGPVDCDZMQJXQOXIDVNDYUUJAHZNULGMJEIVZEBPYMWFX");

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
    msg.setTimeStamp(0.2403532613990771);
    msg.setSource(57435U);
    msg.setSourceEntity(159U);
    msg.setDestination(13351U);
    msg.setDestinationEntity(119U);
    msg.type = 17U;
    msg.speed = 39927U;
    const char tmp_msg_0[] = {112, -23, 65, -89, 74, -61, 90, 19, 60, -26, 102, 125, -4, 52, -91, 79, -89, 48, 51, 38, -21, 112, 11, 104, 97, -64, -116, 38, 5, 105, -14, 46, -70, -47, 98, -123, 126, 60, -16, -17, -21, -28, 68, 32, 71, -60, 40, 113, -71, 123, 59, 67, -23, 121, -83, -114, 110, 25, 33, -102, -36, 117, 98, -105, 110, -86, -8, -118, -73, 28, -109, 20, -3, 25, 80, 102, 117, 18, -76, 121, -80, 108, -4, 116, -53, -12, -23, 36, -26, -127, 0, 96, -113, 53, 55, -67, -76, 47};
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
    msg.setTimeStamp(0.670790301861066);
    msg.setSource(14568U);
    msg.setSourceEntity(225U);
    msg.setDestination(18884U);
    msg.setDestinationEntity(39U);
    msg.type = 241U;
    msg.speed = 3291U;
    const char tmp_msg_0[] = {-27, -108, -2, 1, 103, 91, -88, 5, -57, -99, -85, -15, -64, 89, 101, 69, -46, 110, -47, 48, 61, 1, 93, 80, -95, -67, -60, 123, -77, 53, -68, -84, -26, -103, 83, 114, 10, -18, 57, -73, -2, 32, 34, -115, -66, 25, 22, 0, -61, -21, -84, 18, 3, 28, -55, 5, -120, 94, 100, -37, 107, -70, -93, 83};
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
    msg.setTimeStamp(0.04484530669947118);
    msg.setSource(44356U);
    msg.setSourceEntity(178U);
    msg.setDestination(54393U);
    msg.setDestinationEntity(113U);
    msg.type = 109U;
    msg.speed = 57686U;
    const char tmp_msg_0[] = {19, 37, -128, -106, -83, 56, 40, -75, 99, 54, -62, -65, 56, -24, -34};
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
    msg.setTimeStamp(0.7408972546537932);
    msg.setSource(60153U);
    msg.setSourceEntity(108U);
    msg.setDestination(4426U);
    msg.setDestinationEntity(173U);
    msg.available = 3579884039U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.44692620874744804);
    msg.setSource(49759U);
    msg.setSourceEntity(112U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(252U);
    msg.available = 2578238570U;
    msg.value = 238U;

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
    msg.setTimeStamp(0.05672207090685166);
    msg.setSource(2000U);
    msg.setSourceEntity(248U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(229U);
    msg.available = 3642152600U;
    msg.value = 26U;

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
    msg.setTimeStamp(0.24990504237548272);
    msg.setSource(33790U);
    msg.setSourceEntity(209U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(186U);
    msg.op = 36U;
    msg.snapshot.assign("LMCCSEIRHSLRLXJOAHNJSFDGYSVRFBBBLCGQPSPLZVYMQXBYHRABJOAJYFZZASFDVPKVKWQCBZEIAGCVUOVTGEYGWOZNDPPLTWEHTOG");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.9513970655322681;
    tmp_msg_0.x = 0.2702967906317947;
    tmp_msg_0.y = 0.4532411974298103;
    tmp_msg_0.z = 0.1555861898884111;
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
    msg.setTimeStamp(0.9183353381213827);
    msg.setSource(59965U);
    msg.setSourceEntity(181U);
    msg.setDestination(29640U);
    msg.setDestinationEntity(113U);
    msg.op = 156U;
    msg.snapshot.assign("CWGYTVMXWNJQBOJSSIRKGMMUPZHRPNERBEEIHWGSHLDOWNSSKYDTMTZAPVEVHHFAQRFPBVOMUMCBVPKQTKHYDUW");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2051735784U;
    tmp_msg_0.messages.assign("PHCTZHJHUALPGOGXEKOPTPDMOCCLFKSQRRYKJTFSRFDSTKTMPYQIQLYIWGHQENDMOHZKHGWIYNOVSRXJF");
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
    msg.setTimeStamp(0.5236728558278475);
    msg.setSource(9581U);
    msg.setSourceEntity(101U);
    msg.setDestination(42200U);
    msg.setDestinationEntity(7U);
    msg.op = 204U;
    msg.snapshot.assign("BFZIBBYPBQWUROMMQUGEHLYNQDGLKDTRPJENLXUWZGJYFL");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 3802601635U;
    tmp_msg_0.value = 88U;
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
    msg.setTimeStamp(0.31680018269078725);
    msg.setSource(14950U);
    msg.setSourceEntity(129U);
    msg.setDestination(62562U);
    msg.setDestinationEntity(32U);
    msg.op = 16U;
    msg.name.assign("VCDKNVPQZALBNRPOQQLCMIGKRDOOTUBUZPGTBZSGQMTFGIVDSYGTPZUBJFLHJIYECIOZUTKORBTXRADMCEPYDILJFQOLFHWNEJJSTHYVWVYHVYFEKJJITWULIOXHCVHTWHKKDCNJYMLQKVRFLJSUPKFBBZISFEWVKWPCXORSOEEZEPZUHAAMMNXPAMAMAADGCNBVTDRSOXCMXGXEKJBAUBQYYFYRSCWSNQLLGNE");

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
    msg.setTimeStamp(0.9721512212811985);
    msg.setSource(30202U);
    msg.setSourceEntity(43U);
    msg.setDestination(51720U);
    msg.setDestinationEntity(203U);
    msg.op = 108U;
    msg.name.assign("MWZHNRTXUGTSLDSSFQYCKVDIEWRNATONCGLIVZVAOCRNOOKVWUDZUIGBBIRHKMBRKXSZBJNDXOUYQGFDSHBMIUMZKRNXVGRHAJJDDCECEZOTMJQLLGWMGUWVUPLDSVSEWTBPFXAVHSYXCEPYNBYOKBNYZVWMQPRBFYW");

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
    msg.setTimeStamp(0.06109252079442906);
    msg.setSource(7339U);
    msg.setSourceEntity(164U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(54U);
    msg.op = 210U;
    msg.name.assign("YWKDFUPNTHVWVTIMDMIATSHGFZCCAQYXXKNIXXRKMHTRWMQYLPPGCEAXZCVPWWPYXPZVURGRUDGJBQGEXFTWXGJHKTTSRNBILKKZUZIKJEJHVYUELVWOZCEVD");

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
    msg.setTimeStamp(0.8824836673038841);
    msg.setSource(57752U);
    msg.setSourceEntity(76U);
    msg.setDestination(39718U);
    msg.setDestinationEntity(192U);
    msg.type = 130U;
    msg.htime = 0.2674024814065773;
    msg.context.assign("DVEXTQQJRECEWVGLUSXHCSHNNBDQHXSMJHYPKNQYIBQJLFMKGGVORPDOEDHRUDPAONILELHYDUAERIKGASVCMCMAZRMGEOAZKUZZIXGYOUHDORKQWZJATMZBBGQFTJTBTXMCTCSTXBFZRBITDOKWNFAOCBEIZICTMYBWSWIFNRPMVLRUWUHUFWNDODQZCJKQLYNMHXQSEVJXPLAEXLNIUPSXHVWYIVOYVYAPPVLJY");
    msg.text.assign("EBRFFITZRYKXTHRHLVCVGUNEKSIZFCTZCEXGJAMWXHIRYAVRCOLNIZZWUTMHXGQXXMNGLQTPAEKRVMZGAQOTPGBOYYFARKWYWFULAFDVXCUDSUSLOPPDBVBYAJWJTSIQ");

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
    msg.setTimeStamp(0.5106765802391323);
    msg.setSource(49202U);
    msg.setSourceEntity(4U);
    msg.setDestination(20991U);
    msg.setDestinationEntity(89U);
    msg.type = 251U;
    msg.htime = 0.6957537818022743;
    msg.context.assign("HGNMMMMIUHFNMMRZIAJQWXBETSCOTLVBXUWXNTBFYNMCTRJXWRUDQFROBOFEZLOJZPHLSCOQPYKVCWRIKTWLQCOSHAQYNGFDKYSOUBGRGTWGGGLPZGALXZNLBFDVLIWEVPENTBHAID");
    msg.text.assign("ARAFURRFLPXQTLUSZEKERGRVICTQBHZZVMPZGTMDYRSWXMRPQFUYCPXUOLZNYMUWHTIWABXFJRFUOMAFWYXHNDQPTOLFLBLNOIDSYAASCRZWTSAJLNCJMVKFHLKYOHGBZSSVMDXIMHKZLGQFTPQOQOFXVACGWBGBVAGEBVQZINIECWRJIYJJQHAXDSZPPTNYIIJENMBBWJEHEEDCUCGIQYYWNDGJPMNUKSWHJOOBEKHDX");

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
    msg.setTimeStamp(0.6815204478289707);
    msg.setSource(50947U);
    msg.setSourceEntity(253U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(150U);
    msg.type = 28U;
    msg.htime = 0.24182492092704477;
    msg.context.assign("XYZBTEDHEGWUQBRLRTWNHVSXVQOWLFNBHRHDMXDZTTPEGVLOFIIXMMZCQIVDNUDIUPGSEVIPHLJECDYKFHQYJBRBMEXTALZCULBSVOFKJMEJZOV");
    msg.text.assign("OBDNNSJGJASMEPKPNETXVJDIELOWMEJRTZZROGTCTPYOBAVILHQLIURMQNXHUBVKBYKLCCSQDOVAFPZNRLQKWSBQWZESYLCDWPRXBFRJZTDFWXXMYOTTUUMDZHCYKHMHSLQQZWXFEQYPZYJGEGKVSQIKLGVUKKXGUFSCSACVVJXIANXGHONYGIIYMVHUQLADAXPBNWKIIVBRFCJAGYEOAMRMDTNOBCWMTPEB");

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
    msg.setTimeStamp(0.5276144482130297);
    msg.setSource(48308U);
    msg.setSourceEntity(170U);
    msg.setDestination(56961U);
    msg.setDestinationEntity(79U);
    msg.command = 161U;
    msg.htime = 0.01152859013603691;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 222U;
    tmp_msg_0.htime = 0.018163976966826922;
    tmp_msg_0.context.assign("QEHPXUSGXPWAZPFIWJYSAFNDVKFIZWWMBOANGTYGGXTODFSQUHNQKGWJXBOWWCHMHLDQHEEVMEXMMRQPAVCCOTLRQUSLCMXKKINZPHPKVVVLVKJRUJDQWEUYDXQACNAVEPODGNMOHLYGJYZQTCCTSBKUOYBQROUBZRCFXSKUHFBOTBTYCMFJZULNXSNHTKWYPAEI");
    tmp_msg_0.text.assign("YHVWJZFKXKPFQWKRPKVGYXHVUWVVGCHILJLAUXZAYQUJPZATKYNEQFVNHMTPGENORDQSDYRRBYMGWOVGUXYNJUZIQPDSDSEPYRJVZPEHMAYKEAGEBMHKZMXBEASLOSNIINPTIKLSBOLGBFTWJAJZCBRQCCFCMRHJOXONASHQWXNOMOGCMCD");
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
    msg.setTimeStamp(0.5647968312353213);
    msg.setSource(23150U);
    msg.setSourceEntity(176U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(63U);
    msg.command = 240U;
    msg.htime = 0.5833084715900193;

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
    msg.setTimeStamp(0.7761395581154513);
    msg.setSource(38488U);
    msg.setSourceEntity(114U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(206U);
    msg.command = 45U;
    msg.htime = 0.6428700649433842;

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
    msg.setTimeStamp(0.5463081302168135);
    msg.setSource(10376U);
    msg.setSourceEntity(45U);
    msg.setDestination(9287U);
    msg.setDestinationEntity(66U);
    msg.op = 186U;
    msg.file.assign("FBIFBCRPCWWMKEEXOUISFKLWKAIJLLAEUBKBUAKAFOBSZCJKZLYHFNPGYNBDHUVYNWVXPPSXQGWLXAW");

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
    msg.setTimeStamp(0.31494939569273295);
    msg.setSource(42247U);
    msg.setSourceEntity(33U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(192U);
    msg.op = 131U;
    msg.file.assign("CLVGJFSCWYMYRIAOQUHFNHNCVZOSFHLPBMXKMKTRLQCGRKGSVMSGJUXZHAYGNPEZMLOXIMKRXAUEGEOSVSUFEBNWRWLLDQONZBUTHWYPHWSIIGVDFZTOYGDBTFZXATTJQAQVYMYWECWVCALXNKBBJXXQNUPTJGGDOZIIQFFYLRFMKBUJLKARCAO");

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
    msg.setTimeStamp(0.38895116602037594);
    msg.setSource(22438U);
    msg.setSourceEntity(225U);
    msg.setDestination(13609U);
    msg.setDestinationEntity(79U);
    msg.op = 200U;
    msg.file.assign("JVVEJHPLWMXUYLNAOZIDYNGTGOWGLKSRVYBYUTHHTFGBNBZROWAGPAQDIIZDCKZJCFDQNXSZCHTSXKISGXNPRNIZRRYMBYFZMHOWJLFHRTJALVNQXHEDQAAWAPMPQBUIEVLOHDWRIVESVOTZKLFPFCQDMEUTWLRAQGZXUDDRCTKPKUCBRKPEICIKOKHJHYQNTCYUXQXBOYUSWJE");

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
    msg.setTimeStamp(0.8323466110977553);
    msg.setSource(50935U);
    msg.setSourceEntity(101U);
    msg.setDestination(34029U);
    msg.setDestinationEntity(44U);
    msg.op = 7U;
    msg.clock = 0.7671631914139297;
    msg.tz = 96;

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
    msg.setTimeStamp(0.05702292910659157);
    msg.setSource(22125U);
    msg.setSourceEntity(226U);
    msg.setDestination(9605U);
    msg.setDestinationEntity(176U);
    msg.op = 201U;
    msg.clock = 0.8657242036569638;
    msg.tz = 74;

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
    msg.setTimeStamp(0.36293606707036774);
    msg.setSource(19375U);
    msg.setSourceEntity(64U);
    msg.setDestination(50155U);
    msg.setDestinationEntity(58U);
    msg.op = 225U;
    msg.clock = 0.8263438541305704;
    msg.tz = 57;

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
    msg.setTimeStamp(0.28115026334941784);
    msg.setSource(51864U);
    msg.setSourceEntity(247U);
    msg.setDestination(45665U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.7466068091246075);
    msg.setSource(64817U);
    msg.setSourceEntity(252U);
    msg.setDestination(39780U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.3054737105988916);
    msg.setSource(1325U);
    msg.setSourceEntity(68U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.42102543771448975);
    msg.setSource(46139U);
    msg.setSourceEntity(175U);
    msg.setDestination(21247U);
    msg.setDestinationEntity(168U);
    msg.sys_name.assign("AWDXQEYJRDKAMMLIWKEKTVGVKWAXXULJXQPNICCJOQYRNFCGGBQBLCXZRDOKEEAHVBBMFKFRPHMJQPV");
    msg.sys_type = 94U;
    msg.owner = 30582U;
    msg.lat = 0.534969755227049;
    msg.lon = 0.11680034759867908;
    msg.height = 0.8005777745962733;
    msg.services.assign("ACAFNXQDJOBFCZNZFDOIOIKEAUZKYXHZXPBELFJOYNALRKEXQSWGZXYMTZMJDESTSGCTAWAFUGHBPBBQWCBLVLTTRIVMOOWAIMNEUV");

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
    msg.setTimeStamp(0.15293046354619355);
    msg.setSource(49430U);
    msg.setSourceEntity(8U);
    msg.setDestination(52466U);
    msg.setDestinationEntity(102U);
    msg.sys_name.assign("CACPPKXEVUILNRXASDXGGJSSHCPEHEYAFBKUNXYP");
    msg.sys_type = 7U;
    msg.owner = 46199U;
    msg.lat = 0.2388608256221485;
    msg.lon = 0.8186976753439161;
    msg.height = 0.7381921658743696;
    msg.services.assign("DAWPQSKOOXHZWCTBHCULKUTXISLZAOQNRIQLKOAQTWFOWHFWPBIRYXXKWAIOZIPTUXGAUHMTMGSICDURSMBVEYQYGADYKFUQUVJTSNKPDYGLBTHJQJOXXRBXRVGZCEPZCFFZVGNJTNPPBA");

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
    msg.setTimeStamp(0.06724502912181407);
    msg.setSource(41285U);
    msg.setSourceEntity(141U);
    msg.setDestination(46624U);
    msg.setDestinationEntity(219U);
    msg.sys_name.assign("GRUGXTPXSJERIMWGTXOIAKDYTDABSKDYOLBFDDELBTHSROQSBEXNIWCRUJJMYCLEUNIWHBPJD");
    msg.sys_type = 64U;
    msg.owner = 5262U;
    msg.lat = 0.20564539420341577;
    msg.lon = 0.14178043867893175;
    msg.height = 0.500146199815293;
    msg.services.assign("THUPMOKVSIJEFBYGQIMDYIRKTUDWWHWMCSEHHXNAZMRBLWIJZRTOPWNWC");

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
    msg.setTimeStamp(0.6871196980020859);
    msg.setSource(62550U);
    msg.setSourceEntity(128U);
    msg.setDestination(23686U);
    msg.setDestinationEntity(77U);
    msg.service.assign("CXSKMXERFWIZIMTGCQZAHNUNOGZKMWAXJNPLYEULOBYTZTTIKKTBDGXVFFRXIUUNUYULMZEAEQYKSFSNWLMCYQBFILIKRRILGVVEZVJBGNMCHTNLHJADHGGNCULJPJKEDOHUVBWJVKGRWFYZBODSSFIWFRWFTVOVSMWMYUCBSPMCLTD");
    msg.service_type = 20U;

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
    msg.setTimeStamp(0.4842521336494343);
    msg.setSource(12474U);
    msg.setSourceEntity(32U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(35U);
    msg.service.assign("GODNHEOSORHYZGBRBNDDXLVIODTAAVDHXNCHAXSVKQFEUQREFKLQSOUVVKAKDNGSCTHAQCBUFMTSMPAPSFYRFORWIRWNVXEZNTYVPBLWQIIQMPJWGBBXSTUQMPMJXIEMKEMYNCYGEROCDLNQEDZLZHCTUGOYWVJUEVCUAIUSMPHOWNFLYADLJT");
    msg.service_type = 103U;

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
    msg.setTimeStamp(0.558912794555927);
    msg.setSource(31934U);
    msg.setSourceEntity(53U);
    msg.setDestination(24608U);
    msg.setDestinationEntity(112U);
    msg.service.assign("DPPNCHBTJSRBGZUCABKFGNANZEHLXZJRTBQUMSHZMUNQGMKOIUPDARYZCQKFAGRNYHNXFEIFBFVLMYHYJZPUJECPJFDPMSCWOQHNLXOAJPVAOIXGUSYIAULYKFGHKHGQOLMJQCAPANV");
    msg.service_type = 92U;

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
    msg.setTimeStamp(0.14574594122407603);
    msg.setSource(40030U);
    msg.setSourceEntity(163U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(57U);
    msg.value = 0.04301283003170975;

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
    msg.setTimeStamp(0.5442210351439162);
    msg.setSource(18454U);
    msg.setSourceEntity(121U);
    msg.setDestination(7685U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8752106358495022;

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
    msg.setTimeStamp(0.018160881486143587);
    msg.setSource(64070U);
    msg.setSourceEntity(105U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7918592287353787;

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
    msg.setTimeStamp(0.0799076452909463);
    msg.setSource(5102U);
    msg.setSourceEntity(3U);
    msg.setDestination(32672U);
    msg.setDestinationEntity(11U);
    msg.value = 0.1427666661816841;

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
    msg.setTimeStamp(0.42880369955360964);
    msg.setSource(34342U);
    msg.setSourceEntity(186U);
    msg.setDestination(26800U);
    msg.setDestinationEntity(122U);
    msg.value = 0.4872585339528731;

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
    msg.setTimeStamp(0.7318072626089465);
    msg.setSource(65114U);
    msg.setSourceEntity(107U);
    msg.setDestination(63838U);
    msg.setDestinationEntity(148U);
    msg.value = 0.857111310007875;

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
    msg.setTimeStamp(0.2989545475710613);
    msg.setSource(9930U);
    msg.setSourceEntity(252U);
    msg.setDestination(51687U);
    msg.setDestinationEntity(239U);
    msg.value = 0.29925387483601285;

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
    msg.setTimeStamp(0.32396666209485314);
    msg.setSource(7110U);
    msg.setSourceEntity(170U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(80U);
    msg.value = 0.28221948850890477;

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
    msg.setTimeStamp(0.3541619172500027);
    msg.setSource(29075U);
    msg.setSourceEntity(171U);
    msg.setDestination(54821U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6467570637232221;

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
    msg.setTimeStamp(0.3636560531215971);
    msg.setSource(1811U);
    msg.setSourceEntity(77U);
    msg.setDestination(65078U);
    msg.setDestinationEntity(70U);
    msg.number.assign("EFALUKRWFLDUDXRNLKNFMWYBZKPJVOZVIMSGAOBOIDQFTLZK");
    msg.timeout = 36126U;
    msg.contents.assign("KNKPJFHCMVFQMQFSZIMGJHVGBNORSQQMWLWSBCOGFKGYXXVTNDYEZAZEMMJDNWRTNIDYGXODALICTZIUMTYQZEGTVLVIXPZFMXNFEEPJSKRIALDKBDAQLYKXICUBRHOYPHRWUADLFSHOSPVJFHOJOQLUAMNRSFPUYPJZWKSJGCHEKUAOAQETCDUNBRFVYZUXTPWEOIDGUUCVXPRWCKILBKWBR");

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
    msg.setTimeStamp(0.7131111151367057);
    msg.setSource(9943U);
    msg.setSourceEntity(161U);
    msg.setDestination(21858U);
    msg.setDestinationEntity(40U);
    msg.number.assign("VJGIUNCVHSCLGBD");
    msg.timeout = 29967U;
    msg.contents.assign("XARNADTNYJJTGLIYUAUBAHIRODJPBAPCCBQEQGFQLOGQKKUO");

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
    msg.setTimeStamp(0.9857453800647097);
    msg.setSource(37246U);
    msg.setSourceEntity(252U);
    msg.setDestination(47191U);
    msg.setDestinationEntity(67U);
    msg.number.assign("AJYGUEBLWSWSTQOUFDDMOYNRMCMMRHFKIYRRYTRSIHKV");
    msg.timeout = 15507U;
    msg.contents.assign("SHQEBJBOMAZHKOFOEZSNQUIJZPUFGPTULNBQVCNKS");

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
    msg.setTimeStamp(0.02459434799058291);
    msg.setSource(7969U);
    msg.setSourceEntity(230U);
    msg.setDestination(19264U);
    msg.setDestinationEntity(55U);
    msg.id = 116U;
    msg.range = 0.43524074757338105;

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
    msg.setTimeStamp(0.7383975648128942);
    msg.setSource(51585U);
    msg.setSourceEntity(33U);
    msg.setDestination(49550U);
    msg.setDestinationEntity(35U);
    msg.id = 90U;
    msg.range = 0.08878426835935893;

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
    msg.setTimeStamp(0.7085532410846264);
    msg.setSource(51218U);
    msg.setSourceEntity(187U);
    msg.setDestination(21698U);
    msg.setDestinationEntity(163U);
    msg.id = 98U;
    msg.range = 0.8083219595793197;

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
    msg.setTimeStamp(0.30005841448326587);
    msg.setSource(23435U);
    msg.setSourceEntity(191U);
    msg.setDestination(32562U);
    msg.setDestinationEntity(14U);
    msg.tx = 102U;
    msg.channel = 26U;
    msg.timer = 26398U;

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
    msg.setTimeStamp(0.9212203209840473);
    msg.setSource(21656U);
    msg.setSourceEntity(90U);
    msg.setDestination(12338U);
    msg.setDestinationEntity(245U);
    msg.tx = 139U;
    msg.channel = 95U;
    msg.timer = 63741U;

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
    msg.setTimeStamp(0.10210006451027831);
    msg.setSource(41189U);
    msg.setSourceEntity(81U);
    msg.setDestination(53525U);
    msg.setDestinationEntity(146U);
    msg.tx = 171U;
    msg.channel = 175U;
    msg.timer = 39651U;

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
    msg.setTimeStamp(0.9925528955967993);
    msg.setSource(30230U);
    msg.setSourceEntity(203U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("OKDNYVTXTKASHMTXOIGSCSZIDDQNBDFVAJQAYRRQCJDMNKFBLPLPNHZRLTCWQVBYXSNHE");
    msg.lat = 0.38934227428600043;
    msg.lon = 0.09338941208655038;
    msg.depth = 0.2626276221564623;
    msg.query_channel = 244U;
    msg.reply_channel = 144U;
    msg.transponder_delay = 132U;

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
    msg.setTimeStamp(0.634749213904385);
    msg.setSource(54328U);
    msg.setSourceEntity(180U);
    msg.setDestination(19114U);
    msg.setDestinationEntity(208U);
    msg.beacon.assign("SDUPBNOKNJHUFYNXMWWNFHJOLENUB");
    msg.lat = 0.40260189739300334;
    msg.lon = 0.13224420226466993;
    msg.depth = 0.2646326201044331;
    msg.query_channel = 254U;
    msg.reply_channel = 47U;
    msg.transponder_delay = 240U;

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
    msg.setTimeStamp(0.6985379275731484);
    msg.setSource(2833U);
    msg.setSourceEntity(159U);
    msg.setDestination(22453U);
    msg.setDestinationEntity(224U);
    msg.beacon.assign("UHGVFLQRLJZEWLBVLKPTAYUUENYPOESKVXXBDBRNAXCMAXZEKCPOIKAIQNOKQABOAIGRUSFVJRRWKFABCOETOJETNWYGTGCBFTDDSLTDCMSMJJVFWMVNQXSOTEVTCXXNHDRSYQDRMGSSWSFXHBUPWKBHXMIGMEAWZIZORGOJEZYRWTJAJCZWGPJMRCFNDCYLADDIPHHYKLUGPNTZFVXIEUMP");
    msg.lat = 0.3066056896352125;
    msg.lon = 0.9185576160863984;
    msg.depth = 0.35667530462615193;
    msg.query_channel = 0U;
    msg.reply_channel = 181U;
    msg.transponder_delay = 56U;

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
    msg.setTimeStamp(0.41234492912505294);
    msg.setSource(6378U);
    msg.setSourceEntity(29U);
    msg.setDestination(2717U);
    msg.setDestinationEntity(59U);
    msg.op = 42U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JVATXOAWMYJDECXWHQCLWTZTNGOHDSSPQOUZSPFIFKMRGHRCFYGDHUJJDHAKKYQLZYKNSWRPRVMWXOLULVBPGBUZTLPACSTDBMGGEJF");
    tmp_msg_0.lat = 0.7994396209363329;
    tmp_msg_0.lon = 0.24848088689605874;
    tmp_msg_0.depth = 0.697630033309335;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 152U;
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
    msg.setTimeStamp(0.5118750483630026);
    msg.setSource(34327U);
    msg.setSourceEntity(60U);
    msg.setDestination(28276U);
    msg.setDestinationEntity(193U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.7025998086535538);
    msg.setSource(12131U);
    msg.setSourceEntity(207U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(16U);
    msg.op = 82U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("COUJTMEBPZDILSMHHGGQJBVXLWAJJPONUXDEFTCERIXIBIFQXDYPBPMYQAWZONGJYHEKXUZDDWYVOACZILSWTFBSLQWBANWNTPXGPAECHPCUQHFMGBIRLMKTWFCYKOUKZHZRMCMXRUGTZMEZTIKSTNKCGAIOQBYTOLNILFUOEUSJIERVDVUHDRYDSSGQVFSKOVKHBAGJEMNQRPGXJH");
    tmp_msg_0.lat = 0.2492576343305315;
    tmp_msg_0.lon = 0.3268414654642594;
    tmp_msg_0.depth = 0.49997186179381126;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 124U;
    tmp_msg_0.transponder_delay = 109U;
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
    msg.setTimeStamp(0.6510797705360739);
    msg.setSource(20672U);
    msg.setSourceEntity(131U);
    msg.setDestination(39074U);
    msg.setDestinationEntity(72U);
    msg.address = 168U;

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
    msg.setTimeStamp(0.7618037930381596);
    msg.setSource(47878U);
    msg.setSourceEntity(61U);
    msg.setDestination(22892U);
    msg.setDestinationEntity(150U);
    msg.address = 64U;

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
    msg.setTimeStamp(0.3554354402416219);
    msg.setSource(48969U);
    msg.setSourceEntity(225U);
    msg.setDestination(47116U);
    msg.setDestinationEntity(90U);
    msg.address = 80U;

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
    msg.setTimeStamp(0.8214859418813557);
    msg.setSource(12404U);
    msg.setSourceEntity(217U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(100U);
    msg.address = 204U;
    msg.status = 236U;
    msg.range = 0.7923052758503699;

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
    msg.setTimeStamp(0.6346664588786243);
    msg.setSource(56650U);
    msg.setSourceEntity(72U);
    msg.setDestination(777U);
    msg.setDestinationEntity(88U);
    msg.address = 138U;
    msg.status = 41U;
    msg.range = 0.8509724012795642;

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
    msg.setTimeStamp(0.3172845026266835);
    msg.setSource(14023U);
    msg.setSourceEntity(17U);
    msg.setDestination(2824U);
    msg.setDestinationEntity(161U);
    msg.address = 20U;
    msg.status = 165U;
    msg.range = 0.6732397780651385;

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
    msg.setTimeStamp(0.2841384022575826);
    msg.setSource(13624U);
    msg.setSourceEntity(117U);
    msg.setDestination(25977U);
    msg.setDestinationEntity(195U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3319925436208321;
    tmp_msg_0.speed_units = 142U;
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
    msg.setTimeStamp(0.15606046996966816);
    msg.setSource(34765U);
    msg.setSourceEntity(117U);
    msg.setDestination(55878U);
    msg.setDestinationEntity(118U);
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 598951778U;
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
    msg.setTimeStamp(0.9596778903838065);
    msg.setSource(50766U);
    msg.setSourceEntity(218U);
    msg.setDestination(21913U);
    msg.setDestinationEntity(22U);
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 91U;
    tmp_msg_0.text.assign("ZLOCLBUEHZNJBNQTNHGONRYDHRFXXCKDYRNMWHYUEKPICQBBEXUIIOUWCHPPWIWEMPFGNKTKYRIFGHRXJZVEAKLDVYUDPDKKXNGWZGSNSDPVWJOKBEZOACTJJTZOVLUOVJYUFAMWSVFRAWZHTGQBMBFJKNZMQWUBOCLUFAMODQVRXDDQSELHJSNBSGFAQBTCVJACKZGHLJMQMTSEYHPXUIIPVTIOAGQSPGCTXFXPYRQEMDLAYL");
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
    msg.setTimeStamp(0.9491365461893231);
    msg.setSource(53273U);
    msg.setSourceEntity(230U);
    msg.setDestination(62847U);
    msg.setDestinationEntity(146U);
    msg.enable = 92U;

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
    msg.setTimeStamp(0.01657164441156045);
    msg.setSource(54022U);
    msg.setSourceEntity(182U);
    msg.setDestination(37030U);
    msg.setDestinationEntity(247U);
    msg.enable = 20U;

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
    msg.setTimeStamp(0.4852280244429974);
    msg.setSource(17601U);
    msg.setSourceEntity(50U);
    msg.setDestination(38223U);
    msg.setDestinationEntity(217U);
    msg.enable = 220U;

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
    msg.setTimeStamp(0.18878671066080632);
    msg.setSource(63543U);
    msg.setSourceEntity(197U);
    msg.setDestination(46058U);
    msg.setDestinationEntity(86U);
    msg.summary = 18U;
    msg.level = 172U;

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
    msg.setTimeStamp(0.9151938726154236);
    msg.setSource(16512U);
    msg.setSourceEntity(50U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(147U);
    msg.summary = 224U;
    msg.level = 187U;

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
    msg.setTimeStamp(0.6205673356808865);
    msg.setSource(42314U);
    msg.setSourceEntity(228U);
    msg.setDestination(53462U);
    msg.setDestinationEntity(98U);
    msg.summary = 222U;
    msg.level = 54U;

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
    msg.setTimeStamp(0.6270328067371552);
    msg.setSource(39135U);
    msg.setSourceEntity(68U);
    msg.setDestination(62749U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.25945811858193135);
    msg.setSource(8732U);
    msg.setSourceEntity(124U);
    msg.setDestination(24042U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.2436143076394236);
    msg.setSource(9766U);
    msg.setSourceEntity(140U);
    msg.setDestination(59712U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.36273988302950055);
    msg.setSource(39328U);
    msg.setSourceEntity(13U);
    msg.setDestination(20329U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.5063020709208033);
    msg.setSource(23827U);
    msg.setSourceEntity(41U);
    msg.setDestination(8312U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.9954194363144367);
    msg.setSource(7144U);
    msg.setSourceEntity(13U);
    msg.setDestination(42699U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.8576227837668332);
    msg.setSource(54618U);
    msg.setSourceEntity(37U);
    msg.setDestination(20292U);
    msg.setDestinationEntity(65U);
    msg.op = 38U;
    msg.system.assign("MLMZPORJCLFCLRNNEITIISGFTLUWMQXEPNMQTBDSQLXDRYHZPHJUNATMVJTADDPJWSYFELBRBSBWZTZQZHNVHTWEABPIDUVYAOCZLYJOBXYZFDPVCDEPUSNMWZGIACVUCHKPUUDJEOZGVHRWAGIIVDCNOKXVAWESRXE");
    msg.range = 0.3628948871042832;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 6197U;
    tmp_msg_0.duration = 51354U;
    tmp_msg_0.speed = 0.07511639170701245;
    tmp_msg_0.speed_units = 205U;
    tmp_msg_0.x = 0.6759895361140938;
    tmp_msg_0.y = 0.619197794680581;
    tmp_msg_0.z = 0.006302531603367467;
    tmp_msg_0.z_units = 150U;
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
    msg.setTimeStamp(0.23223183742472242);
    msg.setSource(26833U);
    msg.setSourceEntity(94U);
    msg.setDestination(14059U);
    msg.setDestinationEntity(51U);
    msg.op = 113U;
    msg.system.assign("GYUTTTAWPECWNCOQQTDKZLXNHVQIBNEELIDZCDO");
    msg.range = 0.3571643220425329;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 41117U;
    tmp_msg_0.lat = 0.7922705981285781;
    tmp_msg_0.lon = 0.6644414257149105;
    tmp_msg_0.z = 0.5703314630655093;
    tmp_msg_0.z_units = 216U;
    tmp_msg_0.amplitude = 0.8515239423897211;
    tmp_msg_0.pitch = 0.8642615459713785;
    tmp_msg_0.speed = 0.34829259329993734;
    tmp_msg_0.speed_units = 112U;
    tmp_msg_0.custom.assign("HWRAIPNJXBGGEFBZWMWBENGDNYPRTMHEDHIWZOBMTNRFVBTZOBAMUFUQPQILQHRFYFALXAHIFHLEGKLUOJFAAXFUKTDPMOJCQLZMDCVWYDPJTMVKCUIJTN");
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
    msg.setTimeStamp(0.7644793344400528);
    msg.setSource(61378U);
    msg.setSourceEntity(126U);
    msg.setDestination(44137U);
    msg.setDestinationEntity(214U);
    msg.op = 200U;
    msg.system.assign("SLXBADNVLXCZVJCMNPACORJKYZYOSUOLQACACBRYTHFEXUBPITUEQSIRRBFHBPIQDFVCTWIRHAZSWBNZPKRUAPEUNAGDLHXDWVQCYYWELHYOQQQGFEUNYNMVXMLNYRMDIBQVTVTOGOXQUKFHJVNDM");
    msg.range = 0.4833562876567232;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 130U;
    tmp_msg_0.range = 0.5620619176635528;
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
    msg.setTimeStamp(0.425567420331463);
    msg.setSource(54985U);
    msg.setSourceEntity(146U);
    msg.setDestination(46895U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.10185413933967502);
    msg.setSource(4023U);
    msg.setSourceEntity(135U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.04327070280166434);
    msg.setSource(44378U);
    msg.setSourceEntity(241U);
    msg.setDestination(63983U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.12079155755537796);
    msg.setSource(45820U);
    msg.setSourceEntity(123U);
    msg.setDestination(57960U);
    msg.setDestinationEntity(110U);
    msg.list.assign("VYZCXQNKQRBYDMZPLTRUSASCDVRNHJUCHMOGGUPNNEQBMKGUBGVVLH");

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
    msg.setTimeStamp(0.7234971410242257);
    msg.setSource(40985U);
    msg.setSourceEntity(77U);
    msg.setDestination(40707U);
    msg.setDestinationEntity(187U);
    msg.list.assign("GIWVSEFDJUXYVTWFGSIGBCDXMYQJAAMEAQLCGYBECFCVCENOSFQSUJYQYXTPVPJSGSJOTXVYIMZTNHKTEZUWZULHWMEMSWXAPXJLDNPCPNUVFGYBNBIRUDLZIQTVBVZSWNTADUODWIRHDHMKCZUXKTEGFAEZNLZSNAIMHFKDKBAKKMQKDOTECZIAQRSGUHQJDOQAEPJXLYYIK");

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
    msg.setTimeStamp(0.0654516421765019);
    msg.setSource(21895U);
    msg.setSourceEntity(210U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(54U);
    msg.list.assign("HXFOWMJXBNVSLYYSYMCPVNTTKJXGMUVBYHQSVZYIZAWYFKOBODTUXVUPNQEICGRZDBRKFQPMWWSTARHBGEIYSFMCQEBECEOANPDSUZKPJRBUWEILQCLAGCGEZJHQQJHTOMHPLNPOTDZQVPJWBZAKPUXXKRWNXYAXPUSQFXDHFRSEIUOAKVJBIKCNZFWCCNHJOKUCAJAMIIHGTRALGLGDTDYEDWLFDZRUHOVIWXGJDNIFEVTRNLLGMM");

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
    msg.setTimeStamp(0.797243148000783);
    msg.setSource(28863U);
    msg.setSourceEntity(44U);
    msg.setDestination(4352U);
    msg.setDestinationEntity(137U);
    msg.value = -22393;

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
    msg.setTimeStamp(0.5310441859837832);
    msg.setSource(49259U);
    msg.setSourceEntity(253U);
    msg.setDestination(33732U);
    msg.setDestinationEntity(193U);
    msg.value = -21056;

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
    msg.setTimeStamp(0.05178255999171588);
    msg.setSource(54957U);
    msg.setSourceEntity(94U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(146U);
    msg.value = 17424;

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
    msg.setTimeStamp(0.17527623450877117);
    msg.setSource(5123U);
    msg.setSourceEntity(18U);
    msg.setDestination(37146U);
    msg.setDestinationEntity(146U);
    msg.value = 0.18403225234976583;

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
    msg.setTimeStamp(0.9383569162606276);
    msg.setSource(27034U);
    msg.setSourceEntity(167U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(130U);
    msg.value = 0.17226537341409476;

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
    msg.setTimeStamp(0.8987659194375954);
    msg.setSource(48401U);
    msg.setSourceEntity(4U);
    msg.setDestination(58897U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7598893483904441;

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
    msg.setTimeStamp(0.24747920693332537);
    msg.setSource(44153U);
    msg.setSourceEntity(139U);
    msg.setDestination(6427U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3102694898968301;

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
    msg.setTimeStamp(0.6285599086065986);
    msg.setSource(42948U);
    msg.setSourceEntity(188U);
    msg.setDestination(26729U);
    msg.setDestinationEntity(230U);
    msg.value = 0.2263500830975741;

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
    msg.setTimeStamp(0.8779049387431044);
    msg.setSource(42367U);
    msg.setSourceEntity(28U);
    msg.setDestination(32287U);
    msg.setDestinationEntity(58U);
    msg.value = 0.33126215622258626;

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
    msg.setTimeStamp(0.7517673069288618);
    msg.setSource(3181U);
    msg.setSourceEntity(7U);
    msg.setDestination(1981U);
    msg.setDestinationEntity(169U);
    msg.validity = 62902U;
    msg.type = 23U;
    msg.utc_year = 28742U;
    msg.utc_month = 63U;
    msg.utc_day = 2U;
    msg.utc_time = 0.9730748834148636;
    msg.lat = 0.0906002286151597;
    msg.lon = 0.32783286656922617;
    msg.height = 0.929182158802437;
    msg.satellites = 215U;
    msg.cog = 0.5599476098197881;
    msg.sog = 0.0039009377859089422;
    msg.hdop = 0.4064249306307939;
    msg.vdop = 0.8809186036581882;
    msg.hacc = 0.7187291792044995;
    msg.vacc = 0.7184516078871811;

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
    msg.setTimeStamp(0.9532938070126984);
    msg.setSource(52876U);
    msg.setSourceEntity(136U);
    msg.setDestination(47418U);
    msg.setDestinationEntity(188U);
    msg.validity = 26973U;
    msg.type = 99U;
    msg.utc_year = 50088U;
    msg.utc_month = 142U;
    msg.utc_day = 165U;
    msg.utc_time = 0.42142159367183674;
    msg.lat = 0.8887530374359996;
    msg.lon = 0.698961888608768;
    msg.height = 0.6595858700997107;
    msg.satellites = 176U;
    msg.cog = 0.18091846331570915;
    msg.sog = 0.07147269504407938;
    msg.hdop = 0.20340816358395963;
    msg.vdop = 0.2510069001956664;
    msg.hacc = 0.9771885539208234;
    msg.vacc = 0.1525895801159034;

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
    msg.setTimeStamp(0.5631352223823464);
    msg.setSource(6965U);
    msg.setSourceEntity(196U);
    msg.setDestination(37720U);
    msg.setDestinationEntity(76U);
    msg.validity = 19985U;
    msg.type = 217U;
    msg.utc_year = 54188U;
    msg.utc_month = 232U;
    msg.utc_day = 185U;
    msg.utc_time = 0.6238109266852703;
    msg.lat = 0.8957012707055306;
    msg.lon = 0.009517755840040554;
    msg.height = 0.207351758619863;
    msg.satellites = 174U;
    msg.cog = 0.720816780281409;
    msg.sog = 0.42939999354785696;
    msg.hdop = 0.7029261071084724;
    msg.vdop = 0.9528171197085836;
    msg.hacc = 0.508479729770628;
    msg.vacc = 0.2168702745464801;

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
    msg.setTimeStamp(0.45561597848905155);
    msg.setSource(9984U);
    msg.setSourceEntity(218U);
    msg.setDestination(4795U);
    msg.setDestinationEntity(40U);
    msg.time = 0.6451430773280712;
    msg.phi = 0.8076565693991292;
    msg.theta = 0.031172609489042102;
    msg.psi = 0.1372266457046274;
    msg.psi_magnetic = 0.9683212856820719;

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
    msg.setTimeStamp(0.28347442044265836);
    msg.setSource(42427U);
    msg.setSourceEntity(0U);
    msg.setDestination(11791U);
    msg.setDestinationEntity(105U);
    msg.time = 0.5211842868626482;
    msg.phi = 0.03269593999845877;
    msg.theta = 0.17434543522639667;
    msg.psi = 0.7647507217457826;
    msg.psi_magnetic = 0.29786529337538714;

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
    msg.setTimeStamp(0.9407147669583059);
    msg.setSource(55660U);
    msg.setSourceEntity(68U);
    msg.setDestination(10596U);
    msg.setDestinationEntity(150U);
    msg.time = 0.18676568305594343;
    msg.phi = 0.3436202966535823;
    msg.theta = 0.8233112217509679;
    msg.psi = 0.9281394274470814;
    msg.psi_magnetic = 0.6402641780295318;

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
    msg.setTimeStamp(0.08798436153663014);
    msg.setSource(4061U);
    msg.setSourceEntity(205U);
    msg.setDestination(61818U);
    msg.setDestinationEntity(109U);
    msg.time = 0.041995556753281815;
    msg.x = 0.11941567385370289;
    msg.y = 0.1557123425207385;
    msg.z = 0.7711599099760703;
    msg.timestep = 0.7944152895908793;

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
    msg.setTimeStamp(0.4596721748147514);
    msg.setSource(58927U);
    msg.setSourceEntity(147U);
    msg.setDestination(53224U);
    msg.setDestinationEntity(65U);
    msg.time = 0.04438807021056168;
    msg.x = 0.7960175369378416;
    msg.y = 0.8838301165823488;
    msg.z = 0.41449447052536625;
    msg.timestep = 0.024627862289296254;

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
    msg.setTimeStamp(0.42973188168124277);
    msg.setSource(26380U);
    msg.setSourceEntity(95U);
    msg.setDestination(54447U);
    msg.setDestinationEntity(131U);
    msg.time = 0.043989766846158185;
    msg.x = 0.7977262830926202;
    msg.y = 0.7449555616142999;
    msg.z = 0.014327839727374614;
    msg.timestep = 0.049887611951271116;

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
    msg.setTimeStamp(0.507948751925917);
    msg.setSource(15359U);
    msg.setSourceEntity(57U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(254U);
    msg.time = 0.9285198674106557;
    msg.x = 0.06393211614717453;
    msg.y = 0.45280393190099844;
    msg.z = 0.33908597304615706;

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
    msg.setTimeStamp(0.828588860177392);
    msg.setSource(53310U);
    msg.setSourceEntity(165U);
    msg.setDestination(41615U);
    msg.setDestinationEntity(107U);
    msg.time = 0.7602821624693072;
    msg.x = 0.14251733281147716;
    msg.y = 0.8055067405084043;
    msg.z = 0.1306985704345618;

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
    msg.setTimeStamp(0.1271687298132782);
    msg.setSource(29276U);
    msg.setSourceEntity(135U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(66U);
    msg.time = 0.7746398458423674;
    msg.x = 0.040161340022407566;
    msg.y = 0.4161369351539166;
    msg.z = 0.9811907533438358;

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
    msg.setTimeStamp(0.13010082211252916);
    msg.setSource(56223U);
    msg.setSourceEntity(148U);
    msg.setDestination(15981U);
    msg.setDestinationEntity(100U);
    msg.time = 0.641920918468711;
    msg.x = 0.43567873347672637;
    msg.y = 0.025532695358695068;
    msg.z = 0.9392614136398395;

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
    msg.setTimeStamp(0.2849395534317746);
    msg.setSource(54779U);
    msg.setSourceEntity(251U);
    msg.setDestination(1138U);
    msg.setDestinationEntity(226U);
    msg.time = 0.33653224157184236;
    msg.x = 0.02786295601470179;
    msg.y = 0.8467129238403227;
    msg.z = 0.5325588801982594;

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
    msg.setTimeStamp(0.39664430894143565);
    msg.setSource(9026U);
    msg.setSourceEntity(171U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(6U);
    msg.time = 0.8767605733827422;
    msg.x = 0.6542867356353635;
    msg.y = 0.4505716238558424;
    msg.z = 0.19362152176942593;

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
    msg.setTimeStamp(0.6114882620919175);
    msg.setSource(55801U);
    msg.setSourceEntity(153U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(60U);
    msg.time = 0.8797639965275581;
    msg.x = 0.8173349905509893;
    msg.y = 0.02923222935175207;
    msg.z = 0.4229901774617618;

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
    msg.setTimeStamp(0.35383357411182936);
    msg.setSource(59932U);
    msg.setSourceEntity(138U);
    msg.setDestination(25618U);
    msg.setDestinationEntity(87U);
    msg.time = 0.07311091130407177;
    msg.x = 0.8152260115196359;
    msg.y = 0.9845736580568177;
    msg.z = 0.7749067003058763;

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
    msg.setTimeStamp(0.1699508677802537);
    msg.setSource(62968U);
    msg.setSourceEntity(158U);
    msg.setDestination(59743U);
    msg.setDestinationEntity(76U);
    msg.time = 0.9661502237787647;
    msg.x = 0.8279920823116199;
    msg.y = 0.11145083355561092;
    msg.z = 0.9972458917210489;

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
    msg.setTimeStamp(0.8451638182327779);
    msg.setSource(14816U);
    msg.setSourceEntity(174U);
    msg.setDestination(29297U);
    msg.setDestinationEntity(37U);
    msg.validity = 226U;
    msg.x = 0.7917267389040414;
    msg.y = 0.005136535802609532;
    msg.z = 0.1493773456843287;

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
    msg.setTimeStamp(0.1381227535619557);
    msg.setSource(48162U);
    msg.setSourceEntity(13U);
    msg.setDestination(30940U);
    msg.setDestinationEntity(13U);
    msg.validity = 195U;
    msg.x = 0.6721702344987359;
    msg.y = 0.40858117369195146;
    msg.z = 0.02083686565238352;

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
    msg.setTimeStamp(0.3596484310639996);
    msg.setSource(10769U);
    msg.setSourceEntity(137U);
    msg.setDestination(12030U);
    msg.setDestinationEntity(139U);
    msg.validity = 240U;
    msg.x = 0.9453922248512214;
    msg.y = 0.2998260006983309;
    msg.z = 0.12075095178253004;

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
    msg.setTimeStamp(0.42539870241720534);
    msg.setSource(34042U);
    msg.setSourceEntity(246U);
    msg.setDestination(46519U);
    msg.setDestinationEntity(25U);
    msg.validity = 232U;
    msg.x = 0.5042362181443594;
    msg.y = 0.7969476568277896;
    msg.z = 0.59323418691779;

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
    msg.setTimeStamp(0.553175990824911);
    msg.setSource(17117U);
    msg.setSourceEntity(75U);
    msg.setDestination(52583U);
    msg.setDestinationEntity(7U);
    msg.validity = 222U;
    msg.x = 0.4347663047846799;
    msg.y = 0.8444240972359136;
    msg.z = 0.2192856586271097;

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
    msg.setTimeStamp(0.6343769115904053);
    msg.setSource(58915U);
    msg.setSourceEntity(196U);
    msg.setDestination(6979U);
    msg.setDestinationEntity(172U);
    msg.validity = 247U;
    msg.x = 0.9056858319552186;
    msg.y = 0.7713029984231692;
    msg.z = 0.034557708302773826;

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
    msg.setTimeStamp(0.365789671401599);
    msg.setSource(7825U);
    msg.setSourceEntity(231U);
    msg.setDestination(6696U);
    msg.setDestinationEntity(133U);
    msg.time = 0.5189687095233206;
    msg.x = 0.5147118238087751;
    msg.y = 0.6503781294542555;
    msg.z = 0.16589975512297583;

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
    msg.setTimeStamp(0.8838589722992498);
    msg.setSource(26356U);
    msg.setSourceEntity(230U);
    msg.setDestination(43394U);
    msg.setDestinationEntity(142U);
    msg.time = 0.17065261414373667;
    msg.x = 0.6482576236819101;
    msg.y = 0.11801461287579806;
    msg.z = 0.13573850826322786;

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
    msg.setTimeStamp(0.11883831215179674);
    msg.setSource(49694U);
    msg.setSourceEntity(104U);
    msg.setDestination(42622U);
    msg.setDestinationEntity(235U);
    msg.time = 0.22835382265908777;
    msg.x = 0.9562214358548384;
    msg.y = 0.32509940733013687;
    msg.z = 0.9700106323993457;

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
    msg.setTimeStamp(0.9012924345866661);
    msg.setSource(50675U);
    msg.setSourceEntity(71U);
    msg.setDestination(592U);
    msg.setDestinationEntity(68U);
    msg.validity = 90U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3643027584281967;
    tmp_msg_0.y = 0.9996711279072297;
    tmp_msg_0.z = 0.07707173919008414;
    tmp_msg_0.phi = 0.6386497145557174;
    tmp_msg_0.theta = 0.7622256479668547;
    tmp_msg_0.psi = 0.9201935146660077;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.06899367193775696;
    tmp_msg_1.beam_height = 0.5050989238912325;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.48210379675853865;

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
    msg.setTimeStamp(0.9268709709411089);
    msg.setSource(2993U);
    msg.setSourceEntity(233U);
    msg.setDestination(48046U);
    msg.setDestinationEntity(2U);
    msg.validity = 75U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3412105299825696;
    tmp_msg_0.y = 0.40484375793274874;
    tmp_msg_0.z = 0.7857378869276469;
    tmp_msg_0.phi = 0.3938704728247723;
    tmp_msg_0.theta = 0.5075872004970974;
    tmp_msg_0.psi = 0.056635861772562746;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9682566594404739;

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
    msg.setTimeStamp(0.9159808086337572);
    msg.setSource(28877U);
    msg.setSourceEntity(240U);
    msg.setDestination(23312U);
    msg.setDestinationEntity(128U);
    msg.validity = 69U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2511651014127463;
    tmp_msg_0.y = 0.8775256423706544;
    tmp_msg_0.z = 0.5714532255986194;
    tmp_msg_0.phi = 0.35727374905949927;
    tmp_msg_0.theta = 0.696376185904153;
    tmp_msg_0.psi = 0.6716455806919781;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9172142389906477;

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
    msg.setTimeStamp(0.26865486541168837);
    msg.setSource(8789U);
    msg.setSourceEntity(18U);
    msg.setDestination(21944U);
    msg.setDestinationEntity(27U);
    msg.value = 0.48638649993812577;

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
    msg.setTimeStamp(0.2457757079567242);
    msg.setSource(20861U);
    msg.setSourceEntity(199U);
    msg.setDestination(55963U);
    msg.setDestinationEntity(128U);
    msg.value = 0.4406072473399384;

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
    msg.setTimeStamp(0.33615631261607537);
    msg.setSource(48654U);
    msg.setSourceEntity(210U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(130U);
    msg.value = 0.01928215690056978;

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
    msg.setTimeStamp(0.049409984696110354);
    msg.setSource(1803U);
    msg.setSourceEntity(203U);
    msg.setDestination(15532U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9013348402620234;

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
    msg.setTimeStamp(0.7621834801943722);
    msg.setSource(19681U);
    msg.setSourceEntity(105U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5657083692267227;

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
    msg.setTimeStamp(0.34882636024651426);
    msg.setSource(59304U);
    msg.setSourceEntity(166U);
    msg.setDestination(29627U);
    msg.setDestinationEntity(182U);
    msg.value = 0.8243356206767681;

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
    msg.setTimeStamp(0.04153167961545001);
    msg.setSource(52530U);
    msg.setSourceEntity(183U);
    msg.setDestination(6U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8691998100739807;

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
    msg.setTimeStamp(0.05411246049937557);
    msg.setSource(35331U);
    msg.setSourceEntity(49U);
    msg.setDestination(31784U);
    msg.setDestinationEntity(115U);
    msg.value = 0.7539756456830173;

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
    msg.setTimeStamp(0.2085009281209078);
    msg.setSource(23101U);
    msg.setSourceEntity(110U);
    msg.setDestination(65516U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9737156025366864;

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
    msg.setTimeStamp(0.9050540771365757);
    msg.setSource(54952U);
    msg.setSourceEntity(219U);
    msg.setDestination(34709U);
    msg.setDestinationEntity(128U);
    msg.value = 0.0610955911540183;

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
    msg.setTimeStamp(0.02861118375933791);
    msg.setSource(9407U);
    msg.setSourceEntity(122U);
    msg.setDestination(11585U);
    msg.setDestinationEntity(252U);
    msg.value = 0.28015697973380005;

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
    msg.setTimeStamp(0.6630250984041673);
    msg.setSource(13129U);
    msg.setSourceEntity(118U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5155090657604355;

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
    msg.setTimeStamp(0.47834236921501905);
    msg.setSource(58242U);
    msg.setSourceEntity(49U);
    msg.setDestination(37308U);
    msg.setDestinationEntity(71U);
    msg.value = 0.026343959550692353;

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
    msg.setTimeStamp(0.39377792147960966);
    msg.setSource(48879U);
    msg.setSourceEntity(178U);
    msg.setDestination(1183U);
    msg.setDestinationEntity(244U);
    msg.value = 0.7877591248669621;

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
    msg.setTimeStamp(0.06503908333587549);
    msg.setSource(4121U);
    msg.setSourceEntity(134U);
    msg.setDestination(14692U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8881190092023004;

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
    msg.setTimeStamp(0.8245613883242735);
    msg.setSource(33142U);
    msg.setSourceEntity(117U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6424022423999424;

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
    msg.setTimeStamp(0.7105383881402215);
    msg.setSource(63645U);
    msg.setSourceEntity(242U);
    msg.setDestination(26420U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8803839105940009;

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
    msg.setTimeStamp(0.44237338629310075);
    msg.setSource(20765U);
    msg.setSourceEntity(163U);
    msg.setDestination(48275U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4344322554092407;

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
    msg.setTimeStamp(0.23826373037377113);
    msg.setSource(27921U);
    msg.setSourceEntity(30U);
    msg.setDestination(57748U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6522146707582102;

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
    msg.setTimeStamp(0.8589094850005538);
    msg.setSource(62174U);
    msg.setSourceEntity(41U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(167U);
    msg.value = 0.34033673054355085;

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
    msg.setTimeStamp(0.2544706667687894);
    msg.setSource(52132U);
    msg.setSourceEntity(1U);
    msg.setDestination(58686U);
    msg.setDestinationEntity(136U);
    msg.value = 0.9434826196622845;

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
    msg.setTimeStamp(0.4645888018067117);
    msg.setSource(35980U);
    msg.setSourceEntity(75U);
    msg.setDestination(17307U);
    msg.setDestinationEntity(47U);
    msg.value = 0.12701251342451259;

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
    msg.setTimeStamp(0.3793124420596976);
    msg.setSource(54975U);
    msg.setSourceEntity(107U);
    msg.setDestination(26831U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5711716105854;

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
    msg.setTimeStamp(0.7453656450967646);
    msg.setSource(47652U);
    msg.setSourceEntity(159U);
    msg.setDestination(56366U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7122662723602851;

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
    msg.setTimeStamp(0.1747914718233715);
    msg.setSource(33700U);
    msg.setSourceEntity(4U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(144U);
    msg.direction = 0.6299512341696637;
    msg.speed = 0.10302568619638608;

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
    msg.setTimeStamp(0.19544033700050822);
    msg.setSource(18021U);
    msg.setSourceEntity(14U);
    msg.setDestination(862U);
    msg.setDestinationEntity(201U);
    msg.direction = 0.16396757668763784;
    msg.speed = 0.8486367746028384;

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
    msg.setTimeStamp(0.6322101861844783);
    msg.setSource(29355U);
    msg.setSourceEntity(185U);
    msg.setDestination(34480U);
    msg.setDestinationEntity(90U);
    msg.direction = 0.06650850142761433;
    msg.speed = 0.42248644887291686;

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
    msg.setTimeStamp(0.12541636068215922);
    msg.setSource(14463U);
    msg.setSourceEntity(249U);
    msg.setDestination(4113U);
    msg.setDestinationEntity(1U);
    msg.value = 0.15996231367522917;

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
    msg.setTimeStamp(0.29612586694960863);
    msg.setSource(15746U);
    msg.setSourceEntity(66U);
    msg.setDestination(20963U);
    msg.setDestinationEntity(224U);
    msg.value = 0.02870015957354788;

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
    msg.setTimeStamp(0.8079590140508532);
    msg.setSource(7194U);
    msg.setSourceEntity(188U);
    msg.setDestination(8690U);
    msg.setDestinationEntity(66U);
    msg.value = 0.26914932888690046;

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
    msg.setTimeStamp(0.9544807766466943);
    msg.setSource(37238U);
    msg.setSourceEntity(4U);
    msg.setDestination(59672U);
    msg.setDestinationEntity(68U);
    msg.value.assign("DCXNNARINGTSIKKJKUFIIEPRDBUSVWJWUZLCRUVMQYDBYLKVKJZMHMRYCOQOCGBBLEFKWAGHNPQIPECAWGSLPMLPHYJFAFDTOVNHPNEFPXEBZWZFIRRXQMXRVUTHWAFEDAZWOQMUXCVJOIZZDAC");

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
    msg.setTimeStamp(0.6185906891162609);
    msg.setSource(30443U);
    msg.setSourceEntity(48U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(56U);
    msg.value.assign("SJVMOVXEJCDCGXYPKPMQS");

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
    msg.setTimeStamp(0.5523866240340419);
    msg.setSource(50873U);
    msg.setSourceEntity(182U);
    msg.setDestination(24366U);
    msg.setDestinationEntity(70U);
    msg.value.assign("CKDZBUEVQLQUBRMBGBYKQNSNNTSIZDWPLYLEPHUMKDFPAFEZEVTQIBVXFYOASQYHHTEKFRIXRMFJGHLTWEHOVIDSJTBVEYCSKNRWGJGOFJDXANJYACKXVYLNHFCXHDKPKEJXAZAUOMQYASAJMIGSZXSRRJFOGBTMIPKZDBCCLCMYTPDMUZCHXRHHRVZFKJLA");

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
    msg.setTimeStamp(0.5117768145604574);
    msg.setSource(792U);
    msg.setSourceEntity(238U);
    msg.setDestination(38989U);
    msg.setDestinationEntity(74U);
    const char tmp_msg_0[] = {-7, 69, 86, -22, -99, 23, -8, -53, 8, -56, 84, -57, -99, 53, -113, 81, -106, -29, -44, 16, -120, 126, 98, -76, -111, 74, 13, 11, 27, 5, 19};
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
    msg.setTimeStamp(0.9118630689944754);
    msg.setSource(61713U);
    msg.setSourceEntity(106U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(73U);
    const char tmp_msg_0[] = {-119, -118, -26, 96, -14, 123, -40, -98, 56, 5, 72, -14, 61, 35, -78, -120, 85, -80, 78, -37, 49, 1, 22, 64, 74, -13, 79, 70, -9, 23, 61, 106, 36, -127, 1, -72, 47, -121, 49, 28, 84, -127, 47, 46, -95, -5, 75, 123, -102, 123, 14, -70, 96, 102, -70, -23, 7, -112, -83, 110, 87, -56, 108, -93, -8, -118, 91, 50, -101, -120, -103, -85, 79, -88, 84, -48, -68, -1, 52, 84, 126, 96, 75, 97, -93, 110, 78, -119, -124, -24, 54, -18, 67, -30, -15, 91, -76, 3, 12, 121, -32, -67, 71, -50, -14, 35, -83, 9, -96, 124, -47, 27, -124, -76, 121, 10};
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
    msg.setTimeStamp(0.6222503968776586);
    msg.setSource(46940U);
    msg.setSourceEntity(185U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(94U);
    const char tmp_msg_0[] = {-98, -74, 90, 26, -116, 36, 12, 124, 21, 19, 81, -86, 54, 49, 44, -118, -122, 62, -64, 76, -50, 43, 25, 66, 35, 0, -30, 83, -76, -92, -12, -86, 123, 122, -38, 80, -62, 5, -62, -39, -27, 39, -98, 18};
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
    msg.setTimeStamp(0.6247936083942837);
    msg.setSource(60868U);
    msg.setSourceEntity(104U);
    msg.setDestination(47850U);
    msg.setDestinationEntity(88U);
    msg.frequency = 3521243912U;
    msg.min_range = 12230U;
    msg.max_range = 4205U;

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
    msg.setTimeStamp(0.7745864958637427);
    msg.setSource(26377U);
    msg.setSourceEntity(107U);
    msg.setDestination(13769U);
    msg.setDestinationEntity(5U);
    msg.frequency = 4212994438U;
    msg.min_range = 13779U;
    msg.max_range = 60395U;

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
    msg.setTimeStamp(0.21936310742846798);
    msg.setSource(54151U);
    msg.setSourceEntity(72U);
    msg.setDestination(47588U);
    msg.setDestinationEntity(7U);
    msg.frequency = 2729680607U;
    msg.min_range = 44074U;
    msg.max_range = 26932U;

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
    msg.setTimeStamp(0.24068478804674776);
    msg.setSource(14968U);
    msg.setSourceEntity(36U);
    msg.setDestination(27387U);
    msg.setDestinationEntity(184U);
    msg.type = 6U;
    msg.frequency = 3739841570U;
    msg.min_range = 54572U;
    msg.max_range = 38867U;
    msg.bits_per_point = 71U;
    msg.scale_factor = 0.8562081228067601;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.390171079130895;
    tmp_msg_0.beam_height = 0.9239861448452886;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-127, 20, -33, -68, 97, -62, 47, 20, 94, -34, 69, 47, 118, 23, -52, -79, 126, 55, -55, -61, -107, -73, 92, 101, 38, -49, -89, 25, 78, 122, -65, -30, -79, 74, 22, -21, 59, 97, 76, -72, -30, -78, 66, 37, -84, -41, 1, 29, 121, -112, -5, -15, -28, -110, -79, 15, -62, 70, -100, -56, 73, -29, -28, -115, 75, -52, 26, -5, 90, 87, 41, -110, -14, -121, -18, -48, -96, -96, 30, 81, 107, 23, 29, -77, -24, 103, -51};
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
    msg.setTimeStamp(0.41916694456277526);
    msg.setSource(34921U);
    msg.setSourceEntity(126U);
    msg.setDestination(8731U);
    msg.setDestinationEntity(5U);
    msg.type = 71U;
    msg.frequency = 1884670020U;
    msg.min_range = 63307U;
    msg.max_range = 43396U;
    msg.bits_per_point = 52U;
    msg.scale_factor = 0.6655007811262141;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7885024205166876;
    tmp_msg_0.beam_height = 0.6386103612361725;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-91, 11, -73, -99, 31, 106, -67, 106, -45, 122, -16, 4, 35, -36};
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
    msg.setTimeStamp(0.8006983601651234);
    msg.setSource(28557U);
    msg.setSourceEntity(178U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(20U);
    msg.type = 9U;
    msg.frequency = 2931848796U;
    msg.min_range = 44371U;
    msg.max_range = 55828U;
    msg.bits_per_point = 108U;
    msg.scale_factor = 0.9926570762939159;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.10592839588472569;
    tmp_msg_0.beam_height = 0.2323165894667425;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {8, -127, 8, 53, -66, 111, 25, 19, -36, -84, -83, -47, 46, -92, 62, 79, 17, 18, 60, -15, -96, 103, -36, 20, -84, 90, -116, 111, 35, 87, 39, 92, -54, -6, 124, 116, -36, -128, 39, 114, 40, 6, -27, -21, 110, 29, -8, -62, 78, 35, 40, 48, 76, 29, -49, -70, -39, 6, 109, 70, -17, 68, -17, -19, -17, 20, -48, -122, -114, -19, 74, 75, -69, -58, -55, 123, 70, 4, -41, 76, -54, 79, 0, 19, 52, -108, -26, -12, -1, -37, -20, 24, 23, 70, 45, 25, -126, 30, -27, 26, 77, -123, 89, 117, 72, -102, 97, -2, -23, 36, 33, 92, -24, 120, -17, 119, -93, 121, -40, 25, -105, 102, -17, -15, -11, -74, -102, 67, 16, -120, 0, 78, 11, -71, 55, -100, -38, -29, -67, -52, -14, -64, -88, -11, 33, -12, 22, -47, 95, 30, 68, 39, -41, 32, 31, -30, 97, -48, -89, 123, 62, -123, -19, -10, -33, -46, 16, 95, 51, 116, 34, -74, 115, -12, -63, 42, -25, -54, 119, -19, -8, 73, 20, -44, -27, 71, -40, -85, 18, -54, 44, -67, -82, 94, -17, -41, -45, -115, 83, -38, 61, -104, 119, -50, 66};
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
    msg.setTimeStamp(0.835624609797117);
    msg.setSource(34990U);
    msg.setSourceEntity(1U);
    msg.setDestination(63301U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.9494685977490994);
    msg.setSource(50595U);
    msg.setSourceEntity(207U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.4349878278804796);
    msg.setSource(7300U);
    msg.setSourceEntity(94U);
    msg.setDestination(57852U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.36240194102186063);
    msg.setSource(12648U);
    msg.setSourceEntity(20U);
    msg.setDestination(47990U);
    msg.setDestinationEntity(7U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.014496235992188522);
    msg.setSource(6724U);
    msg.setSourceEntity(173U);
    msg.setDestination(63018U);
    msg.setDestinationEntity(42U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.2692830608589294);
    msg.setSource(50623U);
    msg.setSourceEntity(153U);
    msg.setDestination(30284U);
    msg.setDestinationEntity(123U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.47562071850140897);
    msg.setSource(89U);
    msg.setSourceEntity(225U);
    msg.setDestination(10612U);
    msg.setDestinationEntity(56U);
    msg.value = 0.9073531088963407;
    msg.confidence = 0.6045157643212947;
    msg.opmodes.assign("DBVFMHODBEOEKKIXXEXWQFADNRWDXRKXHTTSCADGLJ");

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
    msg.setTimeStamp(0.3336458455324479);
    msg.setSource(2751U);
    msg.setSourceEntity(236U);
    msg.setDestination(65525U);
    msg.setDestinationEntity(134U);
    msg.value = 0.7612889528208447;
    msg.confidence = 0.13611255450769544;
    msg.opmodes.assign("KXGFGWSOZQPEXQNNGMNLJHGCXFDYFQYORZKEHILTQNXMCZLVSVFWFUSBOUWQAHSIATRKPVNFDCYVKYBQMVJNOHLWDTBPCZMWWMJOTRSUPAYOHFIZMHQXRXDYEBFWUVKRYUDGLJTSUFEEPAPISSQBCGEVVXBTWDRYKPPGNBVDNGYNDOBMUJMCTHOWZZNGAKIHMJKDVHXXIIFEJ");

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
    msg.setTimeStamp(0.5831664657523294);
    msg.setSource(58601U);
    msg.setSourceEntity(24U);
    msg.setDestination(26284U);
    msg.setDestinationEntity(193U);
    msg.value = 0.8190162927757206;
    msg.confidence = 0.46124193457317175;
    msg.opmodes.assign("MSDWYAOLUQPIOYBVVJQUSQUPTQOVDZIECVZFTJKFTMLXNTTWNZJECQZNKTUPK");

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
    msg.setTimeStamp(0.3565463299369033);
    msg.setSource(42193U);
    msg.setSourceEntity(242U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(81U);
    msg.itow = 1772832589U;
    msg.lat = 0.6041185847362261;
    msg.lon = 0.13733270178263424;
    msg.height_ell = 0.7533698360072532;
    msg.height_sea = 0.6043540727004286;
    msg.hacc = 0.23825237708526048;
    msg.vacc = 0.34138472868983616;
    msg.vel_n = 0.1847366124777956;
    msg.vel_e = 0.45581088884227017;
    msg.vel_d = 0.3007980957025682;
    msg.speed = 0.19841809377382502;
    msg.gspeed = 0.31562671871053516;
    msg.heading = 0.08120033698371876;
    msg.sacc = 0.9305011529201197;
    msg.cacc = 0.0793015828658924;

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
    msg.setTimeStamp(0.041156915851610854);
    msg.setSource(49632U);
    msg.setSourceEntity(159U);
    msg.setDestination(6082U);
    msg.setDestinationEntity(122U);
    msg.itow = 1979852672U;
    msg.lat = 0.044060986088800824;
    msg.lon = 0.7720041196303045;
    msg.height_ell = 0.796454665632122;
    msg.height_sea = 0.3591682304217019;
    msg.hacc = 0.2503098878011555;
    msg.vacc = 0.3975278416303386;
    msg.vel_n = 0.6964193396074242;
    msg.vel_e = 0.049019375257648656;
    msg.vel_d = 0.32605445583876824;
    msg.speed = 0.9294323874886646;
    msg.gspeed = 0.27270173511261153;
    msg.heading = 0.2152451273986934;
    msg.sacc = 0.28095951898266414;
    msg.cacc = 0.5758737594118379;

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
    msg.setTimeStamp(0.8240171489826433);
    msg.setSource(50519U);
    msg.setSourceEntity(246U);
    msg.setDestination(42053U);
    msg.setDestinationEntity(244U);
    msg.itow = 2969876197U;
    msg.lat = 0.4238945021196434;
    msg.lon = 0.8187065866051239;
    msg.height_ell = 0.2204354405737351;
    msg.height_sea = 0.851686732034896;
    msg.hacc = 0.7012678151782182;
    msg.vacc = 0.2513142275594413;
    msg.vel_n = 0.27875855909524805;
    msg.vel_e = 0.12328322050961737;
    msg.vel_d = 0.18628494020583408;
    msg.speed = 0.15765985794366855;
    msg.gspeed = 0.8515502273674828;
    msg.heading = 0.9108105883675782;
    msg.sacc = 0.16968362985426988;
    msg.cacc = 0.5972849850898483;

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
    msg.setTimeStamp(0.1358563726250549);
    msg.setSource(44328U);
    msg.setSourceEntity(219U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(121U);
    msg.id = 213U;
    msg.value = 0.7569850616411161;

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
    msg.setTimeStamp(0.6485476758613682);
    msg.setSource(13339U);
    msg.setSourceEntity(177U);
    msg.setDestination(64207U);
    msg.setDestinationEntity(218U);
    msg.id = 127U;
    msg.value = 0.863411277132751;

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
    msg.setTimeStamp(0.6080471938405598);
    msg.setSource(21260U);
    msg.setSourceEntity(193U);
    msg.setDestination(64553U);
    msg.setDestinationEntity(71U);
    msg.id = 77U;
    msg.value = 0.2522059612999107;

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
    msg.setTimeStamp(0.5110165479746692);
    msg.setSource(55119U);
    msg.setSourceEntity(233U);
    msg.setDestination(49088U);
    msg.setDestinationEntity(56U);
    msg.x = 0.8044344643800305;
    msg.y = 0.5113993083232931;
    msg.z = 0.4442613888531243;
    msg.phi = 0.7481266338053048;
    msg.theta = 0.40277148086338843;
    msg.psi = 0.9935791441738977;

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
    msg.setTimeStamp(0.3509643069739621);
    msg.setSource(57004U);
    msg.setSourceEntity(35U);
    msg.setDestination(7590U);
    msg.setDestinationEntity(232U);
    msg.x = 0.5574611014510693;
    msg.y = 0.8228883992636141;
    msg.z = 0.7802847875872356;
    msg.phi = 0.3748072365460544;
    msg.theta = 0.8496715343929547;
    msg.psi = 0.6328002081409136;

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
    msg.setTimeStamp(0.2781067150101091);
    msg.setSource(11080U);
    msg.setSourceEntity(78U);
    msg.setDestination(43390U);
    msg.setDestinationEntity(242U);
    msg.x = 0.790628177518511;
    msg.y = 0.07013589496287354;
    msg.z = 0.8643005545108585;
    msg.phi = 0.6352496917356362;
    msg.theta = 0.5516146581727682;
    msg.psi = 0.1055624509701798;

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
    msg.setTimeStamp(0.7014073809056751);
    msg.setSource(3940U);
    msg.setSourceEntity(139U);
    msg.setDestination(55942U);
    msg.setDestinationEntity(125U);
    msg.beam_width = 0.9306264716755729;
    msg.beam_height = 0.42129150072262334;

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
    msg.setTimeStamp(0.744350539094579);
    msg.setSource(46769U);
    msg.setSourceEntity(186U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(113U);
    msg.beam_width = 0.04436551929596855;
    msg.beam_height = 0.9502816467754487;

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
    msg.setTimeStamp(0.6594722329725161);
    msg.setSource(9432U);
    msg.setSourceEntity(9U);
    msg.setDestination(40272U);
    msg.setDestinationEntity(169U);
    msg.beam_width = 0.30538256566238775;
    msg.beam_height = 0.3912455369216513;

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
    msg.setTimeStamp(0.4674221877354363);
    msg.setSource(38558U);
    msg.setSourceEntity(157U);
    msg.setDestination(28119U);
    msg.setDestinationEntity(193U);
    msg.id = 129U;
    msg.zoom = 50U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.7398373609233637);
    msg.setSource(23166U);
    msg.setSourceEntity(49U);
    msg.setDestination(47492U);
    msg.setDestinationEntity(168U);
    msg.id = 77U;
    msg.zoom = 50U;
    msg.action = 125U;

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
    msg.setTimeStamp(0.6244505210754294);
    msg.setSource(6708U);
    msg.setSourceEntity(198U);
    msg.setDestination(5706U);
    msg.setDestinationEntity(224U);
    msg.id = 0U;
    msg.zoom = 205U;
    msg.action = 117U;

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
    msg.setTimeStamp(0.5434809321212956);
    msg.setSource(42918U);
    msg.setSourceEntity(212U);
    msg.setDestination(60941U);
    msg.setDestinationEntity(163U);
    msg.id = 130U;
    msg.value = 0.49296041415544856;

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
    msg.setTimeStamp(0.46878811876512894);
    msg.setSource(9311U);
    msg.setSourceEntity(231U);
    msg.setDestination(893U);
    msg.setDestinationEntity(68U);
    msg.id = 205U;
    msg.value = 0.2609895824459241;

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
    msg.setTimeStamp(0.21703151831222245);
    msg.setSource(20582U);
    msg.setSourceEntity(28U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(230U);
    msg.id = 8U;
    msg.value = 0.8997529576083652;

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
    msg.setTimeStamp(0.7165376135560473);
    msg.setSource(46226U);
    msg.setSourceEntity(216U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(93U);
    msg.id = 24U;
    msg.value = 0.5114830369099782;

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
    msg.setTimeStamp(0.36013791845580023);
    msg.setSource(33342U);
    msg.setSourceEntity(50U);
    msg.setDestination(25033U);
    msg.setDestinationEntity(3U);
    msg.id = 209U;
    msg.value = 0.4851967145459726;

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
    msg.setTimeStamp(0.6929320998583441);
    msg.setSource(1590U);
    msg.setSourceEntity(189U);
    msg.setDestination(35466U);
    msg.setDestinationEntity(29U);
    msg.id = 37U;
    msg.value = 0.30035654103823184;

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
    msg.setTimeStamp(0.32982936317553413);
    msg.setSource(38374U);
    msg.setSourceEntity(82U);
    msg.setDestination(37131U);
    msg.setDestinationEntity(190U);
    msg.id = 210U;
    msg.angle = 0.9744134617392292;

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
    msg.setTimeStamp(0.3191150949218412);
    msg.setSource(44374U);
    msg.setSourceEntity(237U);
    msg.setDestination(58426U);
    msg.setDestinationEntity(148U);
    msg.id = 220U;
    msg.angle = 0.7713669050283513;

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
    msg.setTimeStamp(0.7423322820150682);
    msg.setSource(673U);
    msg.setSourceEntity(27U);
    msg.setDestination(64373U);
    msg.setDestinationEntity(139U);
    msg.id = 47U;
    msg.angle = 0.9239656830395727;

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
    msg.setTimeStamp(0.0015102695494274565);
    msg.setSource(19540U);
    msg.setSourceEntity(50U);
    msg.setDestination(12771U);
    msg.setDestinationEntity(187U);
    msg.op = 72U;
    msg.actions.assign("EZDUGFBGHEEACZSXNPDMISJLRSDWUAFQGFIUBUVQHIZNHBNGYBPZMDLNQZJUYPXFZGJLYNNJVOBRTEMALOYSWQVWHCSHSKNCTFTGIZUGHPLPKEYYBUNDWKTCTRRXPKOBVXHCWYIXJECLSCXZF");

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
    msg.setTimeStamp(0.2750073698105382);
    msg.setSource(60580U);
    msg.setSourceEntity(182U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(77U);
    msg.op = 22U;
    msg.actions.assign("ZEWFBIGNVFRYROGEFBANPBSRVUWPASJGOURKFCZKVRBYLZNTPDKXPLGTWAWHDDQZGVAIHDJYCUYPTLPOMXIJEKKDTNHUBWVVWPFNFGNIFWBESDZSYXGMDPLYPELCOOJJXAXIYHAOGQJKWVOEHERDUZIEWMACQTNKHCQNXQIAKFYLBUUQXUUEYLPQMAG");

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
    msg.setTimeStamp(0.3289969409828404);
    msg.setSource(64978U);
    msg.setSourceEntity(64U);
    msg.setDestination(59147U);
    msg.setDestinationEntity(166U);
    msg.op = 243U;
    msg.actions.assign("GGFKHZASWIZCCOCIXRMMRZAPDBQBNYZZMKJJNSQPNGYNRLEXDHALABKMRPGHJUFIZPOBDLAMYPJRMHIYGGPTKPNPGDWBWOJNNUMVLDHWQINIXGXTOXQQXVCSJJPRTREPYDDCITYEMTKAAWAEDQEBCESMRXSKUUWAOYMQZFTLCVDNFLFLXCRVXJCXQUEFUOILVKHYKNKTSVFSOEGVRDVZYUFBJOISIOHESWBSHE");

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
    msg.setTimeStamp(0.30915076049764756);
    msg.setSource(55947U);
    msg.setSourceEntity(136U);
    msg.setDestination(47258U);
    msg.setDestinationEntity(142U);
    msg.actions.assign("TZSOUTQUGLIPUEJBDXFMLCZZGRGXVLHWYQIYLQCYDQDWPKOCZEXVXUCAJYVYYDHEML");

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
    msg.setTimeStamp(0.08929284358776068);
    msg.setSource(21012U);
    msg.setSourceEntity(113U);
    msg.setDestination(47390U);
    msg.setDestinationEntity(42U);
    msg.actions.assign("DFWQMMNRZIYDQGCQNEVANDOHGLHCXFRRGTEATYGIOCJZWISNRRIPPLRDRVNZPJFLOIUAZKUNKMUQSKLRSCXBOVKFWBSOWM");

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
    msg.setTimeStamp(0.7033839687970546);
    msg.setSource(25189U);
    msg.setSourceEntity(10U);
    msg.setDestination(26581U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("UNAIMCKYAIVFDTTLINZDXPVNXDVWTEZHDQIEZXGDFJIYJHEOCLOJKFRXXJCBCGIHFEZQUGMUMPPJTQSKIRQCCTNNQPYAWCBRYJOBRPICLIISWQZUTNAFRVEEYSLZFLFLBWGPMSWGUVOOWKONPJYUPBGAGGZX");

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
    msg.setTimeStamp(0.019323230524490254);
    msg.setSource(40767U);
    msg.setSourceEntity(252U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(51U);
    msg.button = 13U;
    msg.value = 253U;

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
    msg.setTimeStamp(0.5249879399200057);
    msg.setSource(44012U);
    msg.setSourceEntity(54U);
    msg.setDestination(48279U);
    msg.setDestinationEntity(171U);
    msg.button = 214U;
    msg.value = 103U;

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
    msg.setTimeStamp(0.01712047734665345);
    msg.setSource(47317U);
    msg.setSourceEntity(62U);
    msg.setDestination(60690U);
    msg.setDestinationEntity(56U);
    msg.button = 102U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.4511226511259635);
    msg.setSource(59829U);
    msg.setSourceEntity(140U);
    msg.setDestination(41073U);
    msg.setDestinationEntity(37U);
    msg.op = 243U;
    msg.text.assign("LCQTPJMUTHMKBJ");

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
    msg.setTimeStamp(0.0495144519701296);
    msg.setSource(16247U);
    msg.setSourceEntity(33U);
    msg.setDestination(53071U);
    msg.setDestinationEntity(53U);
    msg.op = 71U;
    msg.text.assign("PAABKOTLMPTLZYEEECHDPCQZOGIDVORVGJAUKHZMJUFZEYEBLQOPTMBUJCLTUQGZFYBPLJCZPXLFWVGSZFMKDMHRCUIRRVWQBDVGNPHMWQULRJTWXOATEBKYSVIQDMKX");

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
    msg.setTimeStamp(0.5127707166085506);
    msg.setSource(59270U);
    msg.setSourceEntity(47U);
    msg.setDestination(31314U);
    msg.setDestinationEntity(206U);
    msg.op = 127U;
    msg.text.assign("EILFVUAXPAPHDILSZIDEJWIPAMKZNDWTWBSPQKVWWGOQYUCHBJFRMOOTYDROGJTYQBRNDRLBGRWZPZTVUC");

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
    msg.setTimeStamp(0.510791020708493);
    msg.setSource(35242U);
    msg.setSourceEntity(51U);
    msg.setDestination(60489U);
    msg.setDestinationEntity(41U);
    msg.op = 173U;
    msg.time_remain = 0.04923516521028326;
    msg.sched_time = 0.9985938549124524;

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
    msg.setTimeStamp(0.6736452498786145);
    msg.setSource(54096U);
    msg.setSourceEntity(101U);
    msg.setDestination(30389U);
    msg.setDestinationEntity(20U);
    msg.op = 38U;
    msg.time_remain = 0.9176695592718166;
    msg.sched_time = 0.7281574902594461;

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
    msg.setTimeStamp(0.27809770443596027);
    msg.setSource(60684U);
    msg.setSourceEntity(230U);
    msg.setDestination(35280U);
    msg.setDestinationEntity(36U);
    msg.op = 143U;
    msg.time_remain = 0.01227762725467274;
    msg.sched_time = 0.30255578690666296;

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
    msg.setTimeStamp(0.4964880570150396);
    msg.setSource(29519U);
    msg.setSourceEntity(26U);
    msg.setDestination(23561U);
    msg.setDestinationEntity(98U);
    msg.name.assign("VGBCRNBVWVHPUTXKPZLKIKJOQAHCDRLHPLDQNFZNIHXEZEFBGQWLTHXAJNTWST");
    msg.op = 182U;
    msg.sched_time = 0.005885255529066158;

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
    msg.setTimeStamp(0.35442703646384177);
    msg.setSource(33720U);
    msg.setSourceEntity(167U);
    msg.setDestination(11819U);
    msg.setDestinationEntity(177U);
    msg.name.assign("GYJFHZYVTJMXQQAVYZLPQJGEZMLQTYWKLZSWBQASRPUVSRMOTKVMTLPEXSWCOPUQATLFRLQGRFKSHBCDNXCPXULMXNUPDVWEHNUSBAZKDAXWHHWICUTPOMBGFCAZJT");
    msg.op = 62U;
    msg.sched_time = 0.09036819955374398;

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
    msg.setTimeStamp(0.8736241609938352);
    msg.setSource(56100U);
    msg.setSourceEntity(13U);
    msg.setDestination(61718U);
    msg.setDestinationEntity(77U);
    msg.name.assign("EQXUQIXMYJTLENFIMDNNRRQKFRZBWHRMWQCTMONYGDTRIXTWDWDGCIAZPFODOOYDML");
    msg.op = 42U;
    msg.sched_time = 0.3606802259111539;

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
    msg.setTimeStamp(0.15214792398592647);
    msg.setSource(14909U);
    msg.setSourceEntity(153U);
    msg.setDestination(59886U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.6317436824224312);
    msg.setSource(19516U);
    msg.setSourceEntity(144U);
    msg.setDestination(17500U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.33778239206604843);
    msg.setSource(49554U);
    msg.setSourceEntity(250U);
    msg.setDestination(22153U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.5093271048625854);
    msg.setSource(32043U);
    msg.setSourceEntity(194U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(82U);
    msg.name.assign("AFKPTAYKCGYXMFACOJDLFITCLKIJNRSDJMQXHOWCZFCVIJQJAWZIWWWSAQOAJRNBNOTHELUJXPSDCUKOAPYJKZECLSBZDPZSMDXIIWGVVNUQRDUVKBNNBXGAHHLKXLOFGYRNSYGCOUEBXXVHSVYMEUUKMQUKHTKQTJBOLMRRAZBGVCY");
    msg.state = 166U;

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
    msg.setTimeStamp(0.6298090783071704);
    msg.setSource(31286U);
    msg.setSourceEntity(133U);
    msg.setDestination(17974U);
    msg.setDestinationEntity(144U);
    msg.name.assign("SEIJENXMSNGLKSJTWHCCICQFOHZV");
    msg.state = 131U;

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
    msg.setTimeStamp(0.09836478550486105);
    msg.setSource(49706U);
    msg.setSourceEntity(78U);
    msg.setDestination(44588U);
    msg.setDestinationEntity(238U);
    msg.name.assign("QXZCFWGWOSIQTDULAHPAGEBMLELUWPFPIPMXLTVGHSPJVXWKEUSDKTMTBAUOXLQLNMDYMCYNZHSMWIODYICJOOOKYGIBCJMMBWDXJYUINFNCJPGJKNDNTZYDSEBEGSGAEGKQFXYEIIHFOWZVVIUPVHVUVVASMFOCUJHSVRCAHRYANBXTQBLRXPZRWLPTDZXERKCEKDFQCBQKOGXRIQWHYSJUOBKNNZTLUZSAJCAHKERGQVLTQNRMJ");
    msg.state = 134U;

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
    msg.setTimeStamp(0.7218918498882709);
    msg.setSource(3557U);
    msg.setSourceEntity(76U);
    msg.setDestination(24418U);
    msg.setDestinationEntity(90U);
    msg.id = 143U;
    msg.op = 158U;

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
    msg.setTimeStamp(0.7247176884769423);
    msg.setSource(62363U);
    msg.setSourceEntity(117U);
    msg.setDestination(53745U);
    msg.setDestinationEntity(236U);
    msg.id = 120U;
    msg.op = 169U;

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
    msg.setTimeStamp(0.5198051164655396);
    msg.setSource(23208U);
    msg.setSourceEntity(250U);
    msg.setDestination(56265U);
    msg.setDestinationEntity(35U);
    msg.id = 246U;
    msg.op = 228U;

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
    msg.setTimeStamp(0.6762716056336253);
    msg.setSource(49089U);
    msg.setSourceEntity(214U);
    msg.setDestination(64483U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.6561172595459268;
    msg.lon = 0.17381715438825396;
    msg.height = 0.7356860690362388;
    msg.x = 0.33067575352896705;
    msg.y = 0.1361282021435406;
    msg.z = 0.6916874042978246;
    msg.phi = 0.0019103660053729765;
    msg.theta = 0.24064926328181035;
    msg.psi = 0.03969925345062375;
    msg.u = 0.6912495400643031;
    msg.v = 0.3411543849188644;
    msg.w = 0.6797335090566712;
    msg.vx = 0.8484355406028304;
    msg.vy = 0.3915403953308868;
    msg.vz = 0.13128454044354676;
    msg.p = 0.893397741961913;
    msg.q = 0.3851736073461105;
    msg.r = 0.018551160347837214;
    msg.depth = 0.2053920220835912;
    msg.alt = 0.780367868052375;

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
    msg.setTimeStamp(0.4045499570513499);
    msg.setSource(40125U);
    msg.setSourceEntity(243U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.3421781756228168;
    msg.lon = 0.3565574348399271;
    msg.height = 0.442191626118701;
    msg.x = 0.49868691500631246;
    msg.y = 0.4873445677097761;
    msg.z = 0.9229801355155138;
    msg.phi = 0.8390475072450061;
    msg.theta = 0.4746092289014121;
    msg.psi = 0.22741729922003562;
    msg.u = 0.974862609904698;
    msg.v = 0.393057482146977;
    msg.w = 0.08485406741236268;
    msg.vx = 0.07090235138905654;
    msg.vy = 0.6759625828125908;
    msg.vz = 0.6343167986942418;
    msg.p = 0.4698439410344445;
    msg.q = 0.4416816617800482;
    msg.r = 0.01468600759427463;
    msg.depth = 0.6385662540790817;
    msg.alt = 0.6491060113072048;

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
    msg.setTimeStamp(0.48875807967623386);
    msg.setSource(22339U);
    msg.setSourceEntity(93U);
    msg.setDestination(19015U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.8507459629682985;
    msg.lon = 0.8283654811887389;
    msg.height = 0.8468049607650098;
    msg.x = 0.7652663203528648;
    msg.y = 0.6404659207351205;
    msg.z = 0.7938555305970635;
    msg.phi = 0.23256575723523298;
    msg.theta = 0.0843140687189119;
    msg.psi = 0.01903241213367657;
    msg.u = 0.7098082244450366;
    msg.v = 0.9130465724726372;
    msg.w = 0.8640496479286663;
    msg.vx = 0.754238486308422;
    msg.vy = 0.8353759087824517;
    msg.vz = 0.7257168513284457;
    msg.p = 0.3761353644793429;
    msg.q = 0.4200878798068859;
    msg.r = 0.49159201090831317;
    msg.depth = 0.6641219193516376;
    msg.alt = 0.4708915721961612;

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
    msg.setTimeStamp(0.18837404716347284);
    msg.setSource(49561U);
    msg.setSourceEntity(192U);
    msg.setDestination(25106U);
    msg.setDestinationEntity(102U);
    msg.x = 0.9954413241808407;
    msg.y = 0.7784257515521111;
    msg.z = 0.17546316032084786;

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
    msg.setTimeStamp(0.7106459541427923);
    msg.setSource(16469U);
    msg.setSourceEntity(112U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(27U);
    msg.x = 0.8405749220270028;
    msg.y = 0.5305558720103314;
    msg.z = 0.26947064218285366;

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
    msg.setTimeStamp(0.278136339567273);
    msg.setSource(38932U);
    msg.setSourceEntity(185U);
    msg.setDestination(42656U);
    msg.setDestinationEntity(63U);
    msg.x = 0.3086507432129052;
    msg.y = 0.2136216693699473;
    msg.z = 0.9976695750427145;

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
    msg.setTimeStamp(0.7786204687033131);
    msg.setSource(15003U);
    msg.setSourceEntity(87U);
    msg.setDestination(59825U);
    msg.setDestinationEntity(244U);
    msg.value = 0.30706756006869174;

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
    msg.setTimeStamp(0.021931652889696895);
    msg.setSource(2942U);
    msg.setSourceEntity(43U);
    msg.setDestination(7475U);
    msg.setDestinationEntity(139U);
    msg.value = 0.3628940466669599;

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
    msg.setTimeStamp(0.7236931725581894);
    msg.setSource(1592U);
    msg.setSourceEntity(63U);
    msg.setDestination(5695U);
    msg.setDestinationEntity(7U);
    msg.value = 0.18969877232282073;

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
    msg.setTimeStamp(0.01943485856544236);
    msg.setSource(56280U);
    msg.setSourceEntity(81U);
    msg.setDestination(43490U);
    msg.setDestinationEntity(36U);
    msg.value = 0.22345027528110017;

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
    msg.setTimeStamp(0.9307412274482445);
    msg.setSource(29322U);
    msg.setSourceEntity(82U);
    msg.setDestination(53548U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7450022688336363;

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
    msg.setTimeStamp(0.5406237569589951);
    msg.setSource(40798U);
    msg.setSourceEntity(87U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5305885011535197;

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
    msg.setTimeStamp(0.5145347816591622);
    msg.setSource(25949U);
    msg.setSourceEntity(42U);
    msg.setDestination(29714U);
    msg.setDestinationEntity(90U);
    msg.x = 0.733104635900685;
    msg.y = 0.5930431347284295;
    msg.z = 0.8830128332939049;
    msg.phi = 0.016721076357388398;
    msg.theta = 0.9576319218119493;
    msg.psi = 0.43509176008938477;
    msg.p = 0.8757992110873121;
    msg.q = 0.8052542289087423;
    msg.r = 0.30494305431971014;
    msg.u = 0.3870032335322009;
    msg.v = 0.11372505523444254;
    msg.w = 0.594400456614614;
    msg.bias_psi = 0.15179752214602338;
    msg.bias_r = 0.857075539361559;

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
    msg.setTimeStamp(0.08757986091301606);
    msg.setSource(64770U);
    msg.setSourceEntity(88U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(120U);
    msg.x = 0.5444153309320873;
    msg.y = 0.11585338176800342;
    msg.z = 0.253484754656335;
    msg.phi = 0.42251261615123825;
    msg.theta = 0.10834900893444066;
    msg.psi = 0.07375439687700258;
    msg.p = 0.28996196155206755;
    msg.q = 0.793109029811841;
    msg.r = 0.9167510828356399;
    msg.u = 0.47536324662596574;
    msg.v = 0.08879293024965518;
    msg.w = 0.27678018591759457;
    msg.bias_psi = 0.3378732493822708;
    msg.bias_r = 0.25056857957509693;

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
    msg.setTimeStamp(0.3133720219207342);
    msg.setSource(45690U);
    msg.setSourceEntity(246U);
    msg.setDestination(27312U);
    msg.setDestinationEntity(117U);
    msg.x = 0.7601248399793569;
    msg.y = 0.13042826797292617;
    msg.z = 0.3937435516101674;
    msg.phi = 0.32608509911681627;
    msg.theta = 0.5680930909739738;
    msg.psi = 0.11658767134112213;
    msg.p = 0.2852800860174731;
    msg.q = 0.25519546368462565;
    msg.r = 0.2291733236491893;
    msg.u = 0.30234346808735924;
    msg.v = 0.3860157750001494;
    msg.w = 0.13040739937294743;
    msg.bias_psi = 0.40346782400732684;
    msg.bias_r = 0.05936519714857724;

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
    msg.setTimeStamp(0.8153129779121792);
    msg.setSource(7051U);
    msg.setSourceEntity(25U);
    msg.setDestination(64673U);
    msg.setDestinationEntity(156U);
    msg.bias_psi = 0.19884730823206653;
    msg.bias_r = 0.93233818986946;
    msg.cog = 0.7168295175610719;
    msg.cyaw = 0.5655648617407443;
    msg.lbl_rej_level = 0.5047792879756542;
    msg.gps_rej_level = 0.5102608475793475;
    msg.custom_x = 0.23725427188180293;
    msg.custom_y = 0.829900899682629;
    msg.custom_z = 0.0210681384037259;

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
    msg.setTimeStamp(0.3440245350379172);
    msg.setSource(64150U);
    msg.setSourceEntity(150U);
    msg.setDestination(1522U);
    msg.setDestinationEntity(178U);
    msg.bias_psi = 0.8189148007690333;
    msg.bias_r = 0.8053105560304138;
    msg.cog = 0.7797094000643717;
    msg.cyaw = 0.862839951996654;
    msg.lbl_rej_level = 0.006670706275970328;
    msg.gps_rej_level = 0.8715556730818023;
    msg.custom_x = 0.7405626904918324;
    msg.custom_y = 0.9132206601324733;
    msg.custom_z = 0.15763897239374403;

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
    msg.setTimeStamp(0.7679739412019312);
    msg.setSource(37370U);
    msg.setSourceEntity(122U);
    msg.setDestination(19129U);
    msg.setDestinationEntity(77U);
    msg.bias_psi = 0.40848971617436935;
    msg.bias_r = 0.2759902748854647;
    msg.cog = 0.10519662443843181;
    msg.cyaw = 0.41067751766880733;
    msg.lbl_rej_level = 0.4093111834098616;
    msg.gps_rej_level = 0.2354967511223125;
    msg.custom_x = 0.20258556573975683;
    msg.custom_y = 0.2572563105141846;
    msg.custom_z = 0.5127674596400943;

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
    msg.setTimeStamp(0.7271520598272646);
    msg.setSource(50490U);
    msg.setSourceEntity(37U);
    msg.setDestination(35161U);
    msg.setDestinationEntity(244U);
    msg.utc_time = 0.5800590275397124;
    msg.reason = 52U;

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
    msg.setTimeStamp(0.7641518095199274);
    msg.setSource(62435U);
    msg.setSourceEntity(25U);
    msg.setDestination(14721U);
    msg.setDestinationEntity(190U);
    msg.utc_time = 0.8503302308863631;
    msg.reason = 215U;

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
    msg.setTimeStamp(0.5546701473540251);
    msg.setSource(34378U);
    msg.setSourceEntity(223U);
    msg.setDestination(29897U);
    msg.setDestinationEntity(79U);
    msg.utc_time = 0.7051114884307559;
    msg.reason = 45U;

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
    msg.setTimeStamp(0.24620121045093357);
    msg.setSource(50332U);
    msg.setSourceEntity(126U);
    msg.setDestination(16213U);
    msg.setDestinationEntity(51U);
    msg.id = 15U;
    msg.range = 0.5979602102523381;
    msg.acceptance = 190U;

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
    msg.setTimeStamp(0.5672668657593859);
    msg.setSource(25492U);
    msg.setSourceEntity(45U);
    msg.setDestination(50150U);
    msg.setDestinationEntity(93U);
    msg.id = 80U;
    msg.range = 0.46179295127818776;
    msg.acceptance = 175U;

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
    msg.setTimeStamp(0.3020572204950819);
    msg.setSource(6519U);
    msg.setSourceEntity(205U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(39U);
    msg.id = 7U;
    msg.range = 0.7563162948715951;
    msg.acceptance = 82U;

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
    msg.setTimeStamp(0.28676118273540596);
    msg.setSource(65509U);
    msg.setSourceEntity(212U);
    msg.setDestination(30740U);
    msg.setDestinationEntity(85U);
    msg.type = 158U;
    msg.reason = 84U;
    msg.value = 0.2693482198409921;
    msg.timestep = 0.08790146294232126;

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
    msg.setTimeStamp(0.35550405095982907);
    msg.setSource(8098U);
    msg.setSourceEntity(102U);
    msg.setDestination(27850U);
    msg.setDestinationEntity(0U);
    msg.type = 200U;
    msg.reason = 251U;
    msg.value = 0.6916083669268303;
    msg.timestep = 0.14940093594552528;

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
    msg.setTimeStamp(0.8262310077917746);
    msg.setSource(60601U);
    msg.setSourceEntity(243U);
    msg.setDestination(3923U);
    msg.setDestinationEntity(58U);
    msg.type = 33U;
    msg.reason = 93U;
    msg.value = 0.9735126123878074;
    msg.timestep = 0.2277206784750614;

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
    msg.setTimeStamp(0.11476884278792077);
    msg.setSource(18095U);
    msg.setSourceEntity(250U);
    msg.setDestination(37967U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.19447382092222254);
    msg.setSource(35214U);
    msg.setSourceEntity(186U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.8635656592662972);
    msg.setSource(17020U);
    msg.setSourceEntity(151U);
    msg.setDestination(29478U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.9322512618681447);
    msg.setSource(5614U);
    msg.setSourceEntity(148U);
    msg.setDestination(16188U);
    msg.setDestinationEntity(164U);
    msg.beacon.assign("JVIKVXFHPHYREIVQTJWSLLDAJNTWUFCLXYMPJEZYBXTOPIUQNIOIXGWPJZEPKQMBEAFBG");
    msg.x = 0.27389837234763714;
    msg.y = 0.6649733697508465;
    msg.depth = 0.7345309811157493;
    msg.var_x = 0.4534979441825462;
    msg.var_y = 0.05305175633451309;

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
    msg.setTimeStamp(0.13865906026516472);
    msg.setSource(15283U);
    msg.setSourceEntity(36U);
    msg.setDestination(43071U);
    msg.setDestinationEntity(115U);
    msg.beacon.assign("INGZONSMXCFUEJMQFLBGFXTIZPVHTTFKZSBATRXYASYVHWUZMJPIIQRUCRSOJHJKYQGOMMHCBLZAMDUDUKVZOZFFUUURIWBOGWDHVRVXFNKFOOEYFGOEXSMLANPJRDYPVXKGDQNWCYNGQQWXTHEBD");
    msg.x = 0.03731357414134551;
    msg.y = 0.7936278765318796;
    msg.depth = 0.09357105523461984;
    msg.var_x = 0.6906682892973054;
    msg.var_y = 0.8248455711581693;

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
    msg.setTimeStamp(0.8348615952872838);
    msg.setSource(5479U);
    msg.setSourceEntity(174U);
    msg.setDestination(25015U);
    msg.setDestinationEntity(1U);
    msg.beacon.assign("ECDTZMCRHNDXOAJSVJUPWZSQHTFJPYUWFNBQBUZHZAYXTUIDQOEKPPXTWYOUJPSKVACOMCJYPJRBEKLDHCVYRFTFSX");
    msg.x = 0.41846437440984396;
    msg.y = 0.8603583524302207;
    msg.depth = 0.6169200548796264;
    msg.var_x = 0.45963104524096565;
    msg.var_y = 0.19522373375511926;

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
    msg.setTimeStamp(0.5609045907154788);
    msg.setSource(43532U);
    msg.setSourceEntity(16U);
    msg.setDestination(12262U);
    msg.setDestinationEntity(76U);
    msg.value = 0.739643575859791;

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
    msg.setTimeStamp(0.09010802662321304);
    msg.setSource(59160U);
    msg.setSourceEntity(191U);
    msg.setDestination(51613U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8214909063694718;

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
    msg.setTimeStamp(0.45374275127635866);
    msg.setSource(1225U);
    msg.setSourceEntity(202U);
    msg.setDestination(405U);
    msg.setDestinationEntity(127U);
    msg.value = 0.3268405978316955;

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
    msg.setTimeStamp(0.7223518588550217);
    msg.setSource(64357U);
    msg.setSourceEntity(170U);
    msg.setDestination(57374U);
    msg.setDestinationEntity(205U);
    msg.value = 0.05389106317025849;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.1760527362122689);
    msg.setSource(22870U);
    msg.setSourceEntity(61U);
    msg.setDestination(51456U);
    msg.setDestinationEntity(134U);
    msg.value = 0.22998143929794335;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.6231852770898618);
    msg.setSource(47378U);
    msg.setSourceEntity(166U);
    msg.setDestination(63311U);
    msg.setDestinationEntity(241U);
    msg.value = 0.7742674851995328;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.6272278646646887);
    msg.setSource(62055U);
    msg.setSourceEntity(251U);
    msg.setDestination(15184U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8558226951970754;
    msg.speed_units = 187U;

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
    msg.setTimeStamp(0.4899122423634853);
    msg.setSource(10633U);
    msg.setSourceEntity(237U);
    msg.setDestination(54030U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9901840895000295;
    msg.speed_units = 193U;

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
    msg.setTimeStamp(0.6624900514408559);
    msg.setSource(33895U);
    msg.setSourceEntity(203U);
    msg.setDestination(46022U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5866461447127528;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.01687303261241968);
    msg.setSource(5360U);
    msg.setSourceEntity(215U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5882716540734425;

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
    msg.setTimeStamp(0.06422716616975832);
    msg.setSource(3244U);
    msg.setSourceEntity(48U);
    msg.setDestination(32216U);
    msg.setDestinationEntity(30U);
    msg.value = 0.9259305849278354;

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
    msg.setTimeStamp(0.7584702132485155);
    msg.setSource(40087U);
    msg.setSourceEntity(210U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9976594404644987;

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
    msg.setTimeStamp(0.9230505997517353);
    msg.setSource(35677U);
    msg.setSourceEntity(248U);
    msg.setDestination(48234U);
    msg.setDestinationEntity(95U);
    msg.value = 0.23027211774322753;

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
    msg.setTimeStamp(0.4441524086834453);
    msg.setSource(3957U);
    msg.setSourceEntity(77U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(24U);
    msg.value = 0.7406778079035825;

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
    msg.setTimeStamp(0.14034887411768127);
    msg.setSource(29412U);
    msg.setSourceEntity(46U);
    msg.setDestination(49196U);
    msg.setDestinationEntity(222U);
    msg.value = 0.399447666397287;

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
    msg.setTimeStamp(0.7056210521072658);
    msg.setSource(49631U);
    msg.setSourceEntity(36U);
    msg.setDestination(33139U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5190928248101176;

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
    msg.setTimeStamp(0.04217736069097322);
    msg.setSource(39886U);
    msg.setSourceEntity(94U);
    msg.setDestination(7477U);
    msg.setDestinationEntity(230U);
    msg.value = 0.24411120184811008;

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
    msg.setTimeStamp(0.05274689619512296);
    msg.setSource(32260U);
    msg.setSourceEntity(70U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(62U);
    msg.value = 0.975459567222553;

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
    msg.setTimeStamp(0.5516638385960219);
    msg.setSource(29776U);
    msg.setSourceEntity(37U);
    msg.setDestination(19430U);
    msg.setDestinationEntity(218U);
    msg.start_lat = 0.7090146461315802;
    msg.start_lon = 0.6929271929969462;
    msg.start_z = 0.7119505618270683;
    msg.start_z_units = 211U;
    msg.end_lat = 0.5395568179497344;
    msg.end_lon = 0.2940317324360653;
    msg.end_z = 0.49598398517528475;
    msg.end_z_units = 116U;
    msg.speed = 0.08958245565097955;
    msg.speed_units = 177U;
    msg.lradius = 0.8962931759943907;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.8991582203602078);
    msg.setSource(56262U);
    msg.setSourceEntity(128U);
    msg.setDestination(18177U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.6984653689565039;
    msg.start_lon = 0.05671504371753677;
    msg.start_z = 0.3968250938099952;
    msg.start_z_units = 119U;
    msg.end_lat = 0.9041923993983281;
    msg.end_lon = 0.24473238954875054;
    msg.end_z = 0.6748137417139176;
    msg.end_z_units = 209U;
    msg.speed = 0.6914948655481173;
    msg.speed_units = 35U;
    msg.lradius = 0.4770200435049222;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.946645908818658);
    msg.setSource(63677U);
    msg.setSourceEntity(199U);
    msg.setDestination(51536U);
    msg.setDestinationEntity(113U);
    msg.start_lat = 0.01337646591231434;
    msg.start_lon = 0.17579717145135254;
    msg.start_z = 0.5891512585063409;
    msg.start_z_units = 36U;
    msg.end_lat = 0.8720957270515154;
    msg.end_lon = 0.3995150010603251;
    msg.end_z = 0.025258703232518;
    msg.end_z_units = 161U;
    msg.speed = 0.19167376114138612;
    msg.speed_units = 171U;
    msg.lradius = 0.6084611534834269;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.3229237949730914);
    msg.setSource(39984U);
    msg.setSourceEntity(156U);
    msg.setDestination(14080U);
    msg.setDestinationEntity(193U);
    msg.x = 0.06168053717537936;
    msg.y = 0.9430461989294442;
    msg.z = 0.33815546263626717;
    msg.k = 0.8646557848920561;
    msg.m = 0.09854270392029163;
    msg.n = 0.03849205439124492;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.4154919272420039);
    msg.setSource(61551U);
    msg.setSourceEntity(0U);
    msg.setDestination(25044U);
    msg.setDestinationEntity(45U);
    msg.x = 0.9391266450706339;
    msg.y = 0.1386151783203624;
    msg.z = 0.3831125082160719;
    msg.k = 0.17781070941334465;
    msg.m = 0.4794704448066405;
    msg.n = 0.6249065442283636;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.12853887791214402);
    msg.setSource(53544U);
    msg.setSourceEntity(8U);
    msg.setDestination(16950U);
    msg.setDestinationEntity(33U);
    msg.x = 0.19020945421022384;
    msg.y = 0.9106384454197389;
    msg.z = 0.7997389680907362;
    msg.k = 0.4341454342280696;
    msg.m = 0.17772289196289803;
    msg.n = 0.5737850835992043;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.5429595137894268);
    msg.setSource(43654U);
    msg.setSourceEntity(134U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(172U);
    msg.value = 0.29632754303597586;

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
    msg.setTimeStamp(0.8664398008329761);
    msg.setSource(40916U);
    msg.setSourceEntity(177U);
    msg.setDestination(47614U);
    msg.setDestinationEntity(216U);
    msg.value = 0.4823344475461274;

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
    msg.setTimeStamp(0.24493134869408917);
    msg.setSource(63457U);
    msg.setSourceEntity(93U);
    msg.setDestination(24769U);
    msg.setDestinationEntity(35U);
    msg.value = 0.19186221217073707;

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
    msg.setTimeStamp(0.5616829927077905);
    msg.setSource(21242U);
    msg.setSourceEntity(100U);
    msg.setDestination(50823U);
    msg.setDestinationEntity(77U);
    msg.u = 0.033050875568468197;
    msg.v = 0.9626364994549288;
    msg.w = 0.5693159781157336;
    msg.p = 0.2713289409580002;
    msg.q = 0.9866915733266544;
    msg.r = 0.18073544399246122;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.2109973476555056);
    msg.setSource(47118U);
    msg.setSourceEntity(116U);
    msg.setDestination(9733U);
    msg.setDestinationEntity(181U);
    msg.u = 0.7258884983998045;
    msg.v = 0.07345608579613305;
    msg.w = 0.7616379252953841;
    msg.p = 0.815287443483705;
    msg.q = 0.24758088553577207;
    msg.r = 0.5149684341123205;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.001469972661280905);
    msg.setSource(50327U);
    msg.setSourceEntity(98U);
    msg.setDestination(55210U);
    msg.setDestinationEntity(160U);
    msg.u = 0.3398430253665822;
    msg.v = 0.7069824486095744;
    msg.w = 0.2510720830841425;
    msg.p = 0.39864095224113494;
    msg.q = 0.854520379495106;
    msg.r = 0.5452932536300463;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.19682102440615923);
    msg.setSource(13021U);
    msg.setSourceEntity(210U);
    msg.setDestination(18660U);
    msg.setDestinationEntity(138U);
    msg.start_lat = 0.5109995341055278;
    msg.start_lon = 0.1215339773023637;
    msg.start_z = 0.27724829276112295;
    msg.start_z_units = 158U;
    msg.end_lat = 0.5331179171055511;
    msg.end_lon = 0.11318068136185855;
    msg.end_z = 0.9772334918699781;
    msg.end_z_units = 235U;
    msg.lradius = 0.1639161967241325;
    msg.flags = 113U;
    msg.x = 0.895728228324739;
    msg.y = 0.659571930516671;
    msg.z = 0.622595980777622;
    msg.vx = 0.9326293822988218;
    msg.vy = 0.6926177373907988;
    msg.vz = 0.5249185879418383;
    msg.course_error = 0.3010769536854938;
    msg.eta = 20701U;

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
    msg.setTimeStamp(0.3090894201488543);
    msg.setSource(63966U);
    msg.setSourceEntity(176U);
    msg.setDestination(49638U);
    msg.setDestinationEntity(10U);
    msg.start_lat = 0.6692570547752132;
    msg.start_lon = 0.9971009671501423;
    msg.start_z = 0.7495628395730572;
    msg.start_z_units = 8U;
    msg.end_lat = 0.5130783297778412;
    msg.end_lon = 0.943176284570195;
    msg.end_z = 0.7339161156400533;
    msg.end_z_units = 249U;
    msg.lradius = 0.9999380560705391;
    msg.flags = 162U;
    msg.x = 0.8755151953580365;
    msg.y = 0.5568824895095081;
    msg.z = 0.26126795166912664;
    msg.vx = 0.8654205683030443;
    msg.vy = 0.7219898845585201;
    msg.vz = 0.10008784666544535;
    msg.course_error = 0.9579951102419794;
    msg.eta = 8020U;

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
    msg.setTimeStamp(0.853719926856724);
    msg.setSource(41096U);
    msg.setSourceEntity(38U);
    msg.setDestination(12678U);
    msg.setDestinationEntity(104U);
    msg.start_lat = 0.9334709063622686;
    msg.start_lon = 0.27728086074721126;
    msg.start_z = 0.9707337191696755;
    msg.start_z_units = 231U;
    msg.end_lat = 0.05932833918728131;
    msg.end_lon = 0.9717413530304416;
    msg.end_z = 0.7038847704472496;
    msg.end_z_units = 62U;
    msg.lradius = 0.7533243075454582;
    msg.flags = 22U;
    msg.x = 0.5645099991618654;
    msg.y = 0.5663786032352128;
    msg.z = 0.852941152471585;
    msg.vx = 0.6595370370695947;
    msg.vy = 0.9257380704572835;
    msg.vz = 0.17804560413982784;
    msg.course_error = 0.3979774062331688;
    msg.eta = 57591U;

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
    msg.setTimeStamp(0.8328263245609687);
    msg.setSource(20151U);
    msg.setSourceEntity(61U);
    msg.setDestination(5168U);
    msg.setDestinationEntity(166U);
    msg.k = 0.7588981321786233;
    msg.m = 0.9839523138949836;
    msg.n = 0.8507966580734342;

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
    msg.setTimeStamp(0.3746064433643542);
    msg.setSource(27336U);
    msg.setSourceEntity(11U);
    msg.setDestination(2161U);
    msg.setDestinationEntity(101U);
    msg.k = 0.926401340314185;
    msg.m = 0.20667604079442126;
    msg.n = 0.750082496254704;

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
    msg.setTimeStamp(0.5086810340192905);
    msg.setSource(33658U);
    msg.setSourceEntity(180U);
    msg.setDestination(45264U);
    msg.setDestinationEntity(46U);
    msg.k = 0.03440593989697471;
    msg.m = 0.19036911204195583;
    msg.n = 0.5181523873997106;

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
    msg.setTimeStamp(0.8886375686383579);
    msg.setSource(58861U);
    msg.setSourceEntity(199U);
    msg.setDestination(46269U);
    msg.setDestinationEntity(77U);
    msg.p = 0.8746549301586333;
    msg.i = 0.22595871451148974;
    msg.d = 0.7134272601304056;
    msg.a = 0.0973223753911644;

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
    msg.setTimeStamp(0.8721761330632525);
    msg.setSource(29427U);
    msg.setSourceEntity(8U);
    msg.setDestination(12409U);
    msg.setDestinationEntity(72U);
    msg.p = 0.7204402828146856;
    msg.i = 0.5665678671397728;
    msg.d = 0.0441886626525857;
    msg.a = 0.7529160306602346;

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
    msg.setTimeStamp(0.3408640749372216);
    msg.setSource(6267U);
    msg.setSourceEntity(155U);
    msg.setDestination(45006U);
    msg.setDestinationEntity(196U);
    msg.p = 0.47247485816753154;
    msg.i = 0.5498968491423054;
    msg.d = 0.33312181464849944;
    msg.a = 0.6319339128270918;

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
    msg.setTimeStamp(0.6011145443294119);
    msg.setSource(43221U);
    msg.setSourceEntity(74U);
    msg.setDestination(65396U);
    msg.setDestinationEntity(236U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.18265153110254595);
    msg.setSource(18886U);
    msg.setSourceEntity(71U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(140U);
    msg.op = 19U;

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
    msg.setTimeStamp(0.9395826044071514);
    msg.setSource(18906U);
    msg.setSourceEntity(115U);
    msg.setDestination(44900U);
    msg.setDestinationEntity(187U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.8481712705852799);
    msg.setSource(38008U);
    msg.setSourceEntity(237U);
    msg.setDestination(55191U);
    msg.setDestinationEntity(148U);
    msg.timeout = 10909U;
    msg.lat = 0.9205116696923397;
    msg.lon = 0.7827454438988788;
    msg.z = 0.5619777104518366;
    msg.z_units = 124U;
    msg.speed = 0.36491972763319913;
    msg.speed_units = 156U;
    msg.roll = 0.7596524960008793;
    msg.pitch = 0.947629031817762;
    msg.yaw = 0.1632492718133558;
    msg.custom.assign("SYQJYDLQCTDGCDRKUQWBVVCIYVZQ");

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
    msg.setTimeStamp(0.8741179177143676);
    msg.setSource(13471U);
    msg.setSourceEntity(116U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(124U);
    msg.timeout = 27236U;
    msg.lat = 0.49386683161684464;
    msg.lon = 0.6388782674243136;
    msg.z = 0.43887446558354215;
    msg.z_units = 43U;
    msg.speed = 0.787195290981366;
    msg.speed_units = 191U;
    msg.roll = 0.2401113374396543;
    msg.pitch = 0.42568818847032075;
    msg.yaw = 0.6695019941977393;
    msg.custom.assign("VXKJEMBRAXAMTAIQOTZGUYAIUZBFRTQDSGUVXOVYSTHKBGYVFYNKVNHLPQYWOXUTOFOQWAHZLOPMSDLUIWHRBJXORCAJZEPPXJJDODMRUEZGWF");

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
    msg.setTimeStamp(0.017883241164918684);
    msg.setSource(21443U);
    msg.setSourceEntity(171U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(197U);
    msg.timeout = 39312U;
    msg.lat = 0.7791289887090761;
    msg.lon = 0.9355770139227643;
    msg.z = 0.8353449435943072;
    msg.z_units = 106U;
    msg.speed = 0.5953972071222984;
    msg.speed_units = 112U;
    msg.roll = 0.2627766292242957;
    msg.pitch = 0.4785081276998767;
    msg.yaw = 0.7396467766873994;
    msg.custom.assign("LGLJOIJQUFUTZQENPCCKFBHCTXAZDVSGFGKJOFRSDUZYWQFWGADQLNZQTCUGOHBFMENIXKHSEWMIUJLOUWHPHRYXZIPZBIPRX");

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
    msg.setTimeStamp(0.9973007353064685);
    msg.setSource(41942U);
    msg.setSourceEntity(63U);
    msg.setDestination(61309U);
    msg.setDestinationEntity(138U);
    msg.timeout = 50595U;
    msg.lat = 0.9451385953176293;
    msg.lon = 0.9034074758728027;
    msg.z = 0.8324855819493728;
    msg.z_units = 103U;
    msg.speed = 0.05109444004676422;
    msg.speed_units = 243U;
    msg.duration = 45389U;
    msg.radius = 0.05104921558403863;
    msg.flags = 134U;
    msg.custom.assign("FDHWDJDEUVOANQPLDJXKUPRJXDXOZKHYXHFWEMHSAWYPIFVTTQCCCOIJBUINGQGMQNAEVSQFEVIBYKGHSSQNXXOVZRAPAOFVCWRPLVJTYVRAIULURJIZEGQOFFKABCXWMSHMJWEEPCGPTDTITBGLTMLMZGYLNINGLXRKVSACRMXYSQVYKLEPZLPHENOBWFQQJPDDSCNCNOCYTIFIBRKWUTWMKFUJDEZZKKDZOYJHONXUSULA");

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
    msg.setTimeStamp(0.0029533725255456167);
    msg.setSource(25722U);
    msg.setSourceEntity(33U);
    msg.setDestination(53050U);
    msg.setDestinationEntity(43U);
    msg.timeout = 38351U;
    msg.lat = 0.8636725757351118;
    msg.lon = 0.038125418985991755;
    msg.z = 0.185907034716298;
    msg.z_units = 222U;
    msg.speed = 0.3141245209255946;
    msg.speed_units = 13U;
    msg.duration = 58245U;
    msg.radius = 0.3461640589956415;
    msg.flags = 205U;
    msg.custom.assign("TQKWAQDICARBLOBDZQVEAUDPFTJUXOVZHMJ");

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
    msg.setTimeStamp(0.6216150510252361);
    msg.setSource(37382U);
    msg.setSourceEntity(228U);
    msg.setDestination(63182U);
    msg.setDestinationEntity(42U);
    msg.timeout = 15618U;
    msg.lat = 0.6127724668513893;
    msg.lon = 0.12201958872477281;
    msg.z = 0.42450671772529636;
    msg.z_units = 194U;
    msg.speed = 0.017218459550152443;
    msg.speed_units = 98U;
    msg.duration = 25480U;
    msg.radius = 0.061556463649690585;
    msg.flags = 22U;
    msg.custom.assign("BPIFDULIGDRDJFXAEUURCVXVDAMGLBDLEKRRLOWNFCSNQUHILATKJWWALXOSOTAWYWGUHSBHYQIVRHPKUXNVQJEFVIELCCJYTXZCPXCXZURGHEVBEYYKSUTWPHRYQFAUONUKJCOAILJEWZMHTJPAKNNHVIZLVGFHZTRYGHSEZQMKYSZSPDNVSGMENJKQXBMPODOZPJDMSSBXQGYCEFMBBQNMTMCZOWBDOKKIQWN");

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
    msg.setTimeStamp(0.19191508743029217);
    msg.setSource(44772U);
    msg.setSourceEntity(123U);
    msg.setDestination(60474U);
    msg.setDestinationEntity(40U);
    msg.custom.assign("AQCWGNBBTRGBRNJWQCOZRSFQZCGWZGLIWLOBZA");

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
    msg.setTimeStamp(0.3360885581057341);
    msg.setSource(52310U);
    msg.setSourceEntity(40U);
    msg.setDestination(52289U);
    msg.setDestinationEntity(41U);
    msg.custom.assign("DTBKTEKLGUXKVCIZNCHXNENTHXDBJDYFPTQOAGEPLZKZOEQCRJAOOXDGERSKRWARPGAPWLBOKSHWSYYSVLUUYLMBVWZJXCXABYKMVYQBJAFAHUTVZCNFOZITMQPIBGZMDEXPXRBSSFIXZLSZSERFMCJELTTQWDAIDDUCLIGUJQGHGKOPYKV");

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
    msg.setTimeStamp(0.3898657782045014);
    msg.setSource(43939U);
    msg.setSourceEntity(226U);
    msg.setDestination(19266U);
    msg.setDestinationEntity(183U);
    msg.custom.assign("LBNOHABFEGXOLZJQARB");

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
    msg.setTimeStamp(0.4087083504499234);
    msg.setSource(56871U);
    msg.setSourceEntity(69U);
    msg.setDestination(7586U);
    msg.setDestinationEntity(6U);
    msg.timeout = 44627U;
    msg.lat = 0.7941666185043925;
    msg.lon = 0.4296849781088682;
    msg.z = 0.9840364461057789;
    msg.z_units = 20U;
    msg.duration = 32825U;
    msg.speed = 0.2894416236061418;
    msg.speed_units = 217U;
    msg.type = 105U;
    msg.radius = 0.8538440901399125;
    msg.length = 0.2680783421720889;
    msg.bearing = 0.15807302753023666;
    msg.direction = 120U;
    msg.custom.assign("HPVHDFNZZGCBXEMJVISWZZBSHJEXBWYARGH");

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
    msg.setTimeStamp(0.5323163774309588);
    msg.setSource(38876U);
    msg.setSourceEntity(62U);
    msg.setDestination(18258U);
    msg.setDestinationEntity(72U);
    msg.timeout = 5222U;
    msg.lat = 0.7320500063014178;
    msg.lon = 0.2825988907638697;
    msg.z = 0.943599149961928;
    msg.z_units = 63U;
    msg.duration = 31685U;
    msg.speed = 0.29846872810231406;
    msg.speed_units = 52U;
    msg.type = 201U;
    msg.radius = 0.4413927380144035;
    msg.length = 0.42107459099164257;
    msg.bearing = 0.7823765573884879;
    msg.direction = 231U;
    msg.custom.assign("JSCKETCTPCBGZMBJDLEKIIQLTEZDCRWDKQWFMQERBQUNTAYKCDIGPPGDBNRUDDXVFNWKFGKTXSRJUVUALOWZCOIRSZKUHGFFYTJSJGEAPHHJTVCYOZLXKHIPRMPJYXOPGZUWSZRXXZLXNGBVIWFAAOBQAVOEQAMYYNMZEDLBHNHQSTIFGTVSBJGVIMYTYALONWEJFJCXNWMOM");

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
    msg.setTimeStamp(0.37145348743542317);
    msg.setSource(17997U);
    msg.setSourceEntity(99U);
    msg.setDestination(22993U);
    msg.setDestinationEntity(34U);
    msg.timeout = 60517U;
    msg.lat = 0.19945718050511196;
    msg.lon = 0.8699033741208707;
    msg.z = 0.23320498588651672;
    msg.z_units = 151U;
    msg.duration = 16958U;
    msg.speed = 0.4678523631179057;
    msg.speed_units = 24U;
    msg.type = 117U;
    msg.radius = 0.058340152144384705;
    msg.length = 0.2408795398345518;
    msg.bearing = 0.3482693838618488;
    msg.direction = 172U;
    msg.custom.assign("AMVGBUBFWSPHTQDKDXBNOXYPFTCOKYPDWDNQIRHYOXOTDJRUHMXQRVLMTQWWOXFNEPPMBOPUSE");

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
    msg.setTimeStamp(0.7260421609507662);
    msg.setSource(28598U);
    msg.setSourceEntity(35U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(243U);
    msg.duration = 7702U;
    msg.custom.assign("TFDRAMBSRDPWYQZFXGVRMSUVAKAKHEDFMNSCEXAUYDDLBCBYOPTKWITWQIYGMNCXDLWBOLNGCQGVZSBIGZRIQLFOUXLDXJPWWNIUGQVRUZXWCBHQKNMEPHOANZUEOSJDVJYQERMSHKKIVMGSTLGOYOTEBSCKJWCJTEHLINNTEQZFTVHPJTMQFRAWUJCFHBPGPZYZAFNWUJHMOLZXPHEYKRZXVCAGKPA");

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
    msg.setTimeStamp(0.4584440196879408);
    msg.setSource(52460U);
    msg.setSourceEntity(229U);
    msg.setDestination(21876U);
    msg.setDestinationEntity(39U);
    msg.duration = 25884U;
    msg.custom.assign("CMHRETHVCRNSAFCITAQVIXAXUYHNFMIVNQDYKCLPCSJQWSBOBOKDKOABLOWPTCGKBMLASJKFLNUUDAOHTDSMZXPLHAEWBDXFTSJZGGIWWNWCQZOPQMTJG");

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
    msg.setTimeStamp(0.3151954230612902);
    msg.setSource(26197U);
    msg.setSourceEntity(180U);
    msg.setDestination(7134U);
    msg.setDestinationEntity(23U);
    msg.duration = 11856U;
    msg.custom.assign("CIFQYALUTPVDLMPYDUSAPMROYENFHUHQGKBYBWFVNHHHKEUHOIHRDNCCIVLFZECXCMJGVILGBLJAIYNREWOQMOIFEUQIOAOVDFKAFNFASRGDRMPXAKXJSWWDWQXBSYTZMKXWAVWHKNYYGBJGSJGJYBZBZLSLCIOTTPEVOEXQJJZNYSLKCEZTSKUQWDTRUTUZOKDMKFPVUPZCXBWIMTIECLZP");

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
    msg.setTimeStamp(0.4482963190710092);
    msg.setSource(43082U);
    msg.setSourceEntity(199U);
    msg.setDestination(52214U);
    msg.setDestinationEntity(61U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12678668499790136;
    tmp_msg_0.speed_units = 150U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54602U;
    msg.custom.assign("ARGGOIVHDGCVJEWOHFTELMHDFLMPYTIYFIXXBPRMPZCRTCHJKRSSZUTBBXAURJPMFZAYWXNYXOSWYTPYKPQIALGDQSQWCRNEJQFJZCJYWWKRPFBUFMHGJUQPZSLIUCNWBLHXWVKEDXGKLZLRNORLTMNEDIYGZZOKDBUFDERIVDAVKEGAVAJINZEVOBYTAYUBCPLUSKNTFXIQUVJCQOOEJAHOMPSTMEHQMWHHVDCSXQBBVNMGTKLUSGK");

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
    msg.setTimeStamp(0.17789896473938538);
    msg.setSource(46569U);
    msg.setSourceEntity(157U);
    msg.setDestination(60096U);
    msg.setDestinationEntity(112U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3112398212700589;
    tmp_msg_0.speed_units = 49U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17655U;
    msg.custom.assign("OKPATFPGSAYWXZIYCFAOTCWHNCHBKIBTLOEOHFRSTGEHRXGSMQAEXTVODVJGEUCGTXJIASMMIBVDKSQIRRPLAQVFFDSORDXFIUIOFONZKLTVVABEZYWWQDRHJOQFGPMQKMGHABMGHMLUVDOWSZYXLLCKNBDEYXLZKMPPZDNUKENNJRVCYYDQPTBMWIJXREXJWTNSSSNXQUUCCLCENKMYHIQJCAGZZFTUJRIHGWBLRU");

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
    msg.setTimeStamp(0.07948365672624325);
    msg.setSource(38133U);
    msg.setSourceEntity(0U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(170U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.03284659335586804;
    msg.control.set(tmp_msg_0);
    msg.duration = 57868U;
    msg.custom.assign("GCJSXHQPQLSJMXFTUOEFDMJUDXXKOAEWVGHXNDNEHPHEAUZZPZDSEAKTPJKVVUWZJWFGONCBMJCKFIURTWMBODHLFXTRCXYRRRJFMTIREEIGWAISLNOMCQBSSNWYVBZBQVZMTHIMTGZAVYFPHOKBWRYZLTAVKAHEBYSDCKHXGIPBPPTFNWULGEYCPYLDQBMDLICNO");

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
    msg.setTimeStamp(0.16003336932137313);
    msg.setSource(3299U);
    msg.setSourceEntity(125U);
    msg.setDestination(25925U);
    msg.setDestinationEntity(105U);
    msg.timeout = 24161U;
    msg.lat = 0.7728172705905088;
    msg.lon = 0.6384640416884834;
    msg.z = 0.5781248836754221;
    msg.z_units = 101U;
    msg.speed = 0.11597229205495052;
    msg.speed_units = 152U;
    msg.bearing = 0.5883692317158767;
    msg.cross_angle = 0.8292382334264977;
    msg.width = 0.841208357878579;
    msg.length = 0.15101565032314612;
    msg.hstep = 0.14437085590390042;
    msg.coff = 244U;
    msg.alternation = 80U;
    msg.flags = 0U;
    msg.custom.assign("TGPXEWDGPZRCOTAIIDOXBVKQKESJYTIYH");

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
    msg.setTimeStamp(0.26566432899964243);
    msg.setSource(41641U);
    msg.setSourceEntity(185U);
    msg.setDestination(24173U);
    msg.setDestinationEntity(209U);
    msg.timeout = 18355U;
    msg.lat = 0.9677587192051361;
    msg.lon = 0.6504378640127653;
    msg.z = 0.6116388013128998;
    msg.z_units = 203U;
    msg.speed = 0.8947856390403326;
    msg.speed_units = 162U;
    msg.bearing = 0.7465050492008986;
    msg.cross_angle = 0.07294480676928727;
    msg.width = 0.9481975792815593;
    msg.length = 0.2896384749180142;
    msg.hstep = 0.845428706993151;
    msg.coff = 43U;
    msg.alternation = 207U;
    msg.flags = 170U;
    msg.custom.assign("XNNTNZVTIZRGTMCVTPKUXNWQFSAELFJSSEJPQXGWDVIXHKRMUFPCOJJOZHETDCYHWIDQYROSGQTRTADNZOSCJGJMYLIGQUSS");

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
    msg.setTimeStamp(0.27931577808307595);
    msg.setSource(38157U);
    msg.setSourceEntity(92U);
    msg.setDestination(22045U);
    msg.setDestinationEntity(47U);
    msg.timeout = 18507U;
    msg.lat = 0.8687179890349148;
    msg.lon = 0.6944518830959209;
    msg.z = 0.1572637841896254;
    msg.z_units = 18U;
    msg.speed = 0.24680020361912736;
    msg.speed_units = 24U;
    msg.bearing = 0.5949465314998876;
    msg.cross_angle = 0.6558605252766575;
    msg.width = 0.3905242982336895;
    msg.length = 0.5569665171243853;
    msg.hstep = 0.8557644618190505;
    msg.coff = 126U;
    msg.alternation = 11U;
    msg.flags = 91U;
    msg.custom.assign("MVBLJKTXDOPTUHGHYEJLFRZHUWMJLVWLMNFMJVTBJCWSQIAVXZNVBUWUYCDQERHRNPDAZO");

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
    msg.setTimeStamp(0.868159871466716);
    msg.setSource(63393U);
    msg.setSourceEntity(159U);
    msg.setDestination(29825U);
    msg.setDestinationEntity(222U);
    msg.timeout = 19546U;
    msg.lat = 0.04676683470352794;
    msg.lon = 0.7025261809000836;
    msg.z = 0.3680499512839668;
    msg.z_units = 129U;
    msg.speed = 0.19438287431038936;
    msg.speed_units = 208U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8656352021708389;
    tmp_msg_0.y = 0.4675283803794772;
    tmp_msg_0.z = 0.7143291686734947;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EQMRPNODRZCGAJNXQCZAKUCREFLPBYNWIWOGTQYIHPIDUMS");

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
    msg.setTimeStamp(0.7539759260471135);
    msg.setSource(12654U);
    msg.setSourceEntity(115U);
    msg.setDestination(57242U);
    msg.setDestinationEntity(97U);
    msg.timeout = 60431U;
    msg.lat = 0.6013706344372948;
    msg.lon = 0.06125393593736417;
    msg.z = 0.7907208660235421;
    msg.z_units = 169U;
    msg.speed = 0.46244881663693516;
    msg.speed_units = 180U;
    msg.custom.assign("WMZXNATYTEYECGNUXAPEGCCJQ");

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
    msg.setTimeStamp(0.3143302645439975);
    msg.setSource(24750U);
    msg.setSourceEntity(40U);
    msg.setDestination(27095U);
    msg.setDestinationEntity(246U);
    msg.timeout = 33519U;
    msg.lat = 0.5066706392450145;
    msg.lon = 0.924930188248353;
    msg.z = 0.13456117012602864;
    msg.z_units = 160U;
    msg.speed = 0.8776479164244647;
    msg.speed_units = 8U;
    msg.custom.assign("TXMGVMBPQJNKVEFYSZFQFEDURHYNRNJCPETKRXYJFJBACUIBOBPNLVXHTFTCUKRPGFSRRPQABTSWLWILLCRNZBPIIHQWVZCHERVUSYNGGYESIOWURZZJLDKYNMBAZWFNVHWBJAGXVZCMUUMQMELFGLOYVAXIZYDURHBODDNOJGVISATDPIEVW");

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
    msg.setTimeStamp(0.5873039499831417);
    msg.setSource(31739U);
    msg.setSourceEntity(6U);
    msg.setDestination(10078U);
    msg.setDestinationEntity(114U);
    msg.x = 0.8420694432852383;
    msg.y = 0.6870704129070907;
    msg.z = 0.40432970014972636;

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
    msg.setTimeStamp(0.2950248165501428);
    msg.setSource(36076U);
    msg.setSourceEntity(45U);
    msg.setDestination(64845U);
    msg.setDestinationEntity(253U);
    msg.x = 0.07300045256879695;
    msg.y = 0.46166881674205185;
    msg.z = 0.026487315417986323;

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
    msg.setTimeStamp(0.4190592234891134);
    msg.setSource(35227U);
    msg.setSourceEntity(84U);
    msg.setDestination(27457U);
    msg.setDestinationEntity(172U);
    msg.x = 0.6461430678667427;
    msg.y = 0.3133647227653189;
    msg.z = 0.33072181379669696;

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
    msg.setTimeStamp(0.0444809947842848);
    msg.setSource(23902U);
    msg.setSourceEntity(119U);
    msg.setDestination(386U);
    msg.setDestinationEntity(134U);
    msg.timeout = 56934U;
    msg.lat = 0.8997635899015898;
    msg.lon = 0.45208894875739514;
    msg.z = 0.426137835610362;
    msg.z_units = 36U;
    msg.amplitude = 0.4154811125239115;
    msg.pitch = 0.9612298018722942;
    msg.speed = 0.6981591228263675;
    msg.speed_units = 229U;
    msg.custom.assign("QOZZHFRZCKJMXEWFYTNBALLZVYRCOFKQTEOSWMDGPSFLNXGYMQRPWQABYDBENYCGQTTTFYVSESLDTHSIVWOZMUAJTNSFPECAHGTXFRITLIQYVEWIRPDEIJDZZREIOCOXUGMHCOSLXVN");

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
    msg.setTimeStamp(0.23787984893488934);
    msg.setSource(26477U);
    msg.setSourceEntity(24U);
    msg.setDestination(50564U);
    msg.setDestinationEntity(44U);
    msg.timeout = 17024U;
    msg.lat = 0.9976099453147808;
    msg.lon = 0.5685267452844673;
    msg.z = 0.36770610322933905;
    msg.z_units = 7U;
    msg.amplitude = 0.17437810783353314;
    msg.pitch = 0.6152002158572635;
    msg.speed = 0.20075916738320032;
    msg.speed_units = 205U;
    msg.custom.assign("KTFTILJZKJLCNTUCTGGVERSCEQLXRQNGUPOPFYQJNBBZFRXWLHRHAZWTVBVFMGEYDJEPACCOIZPJUVABZNLAYISHTCYSKHXFVKMTEVDCMASTSDJZFMIDYXRDUUXMWJOQXQQNBWQRROUDFGPYOFINIBLODTULHHKVNKRCYIAFDHCBMKUDJAFBWZMXAIWHGSOWSRAKYIID");

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
    msg.setTimeStamp(0.6576832097059513);
    msg.setSource(51311U);
    msg.setSourceEntity(66U);
    msg.setDestination(13769U);
    msg.setDestinationEntity(104U);
    msg.timeout = 32829U;
    msg.lat = 0.45302939838972656;
    msg.lon = 0.32616893903900046;
    msg.z = 0.7265066741248726;
    msg.z_units = 234U;
    msg.amplitude = 0.3483867234672633;
    msg.pitch = 0.55729550203457;
    msg.speed = 0.8589527115997031;
    msg.speed_units = 151U;
    msg.custom.assign("SKPVEVJBLYPRDABDYDYIMNETDZCPMHXHWYPJZNRIF");

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
    msg.setTimeStamp(0.016212547852309522);
    msg.setSource(64125U);
    msg.setSourceEntity(106U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.4683862003166426);
    msg.setSource(43082U);
    msg.setSourceEntity(28U);
    msg.setDestination(23106U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.41961017510325915);
    msg.setSource(1644U);
    msg.setSourceEntity(154U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.6701147794847481);
    msg.setSource(43373U);
    msg.setSourceEntity(76U);
    msg.setDestination(22351U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.7932445300881185;
    msg.lon = 0.6775094276001866;
    msg.z = 0.039057973788747646;
    msg.z_units = 148U;
    msg.radius = 0.010231970413108527;
    msg.duration = 33710U;
    msg.speed = 0.6662517624474518;
    msg.speed_units = 3U;
    msg.custom.assign("ACSWCVTHNGKFYUMZDQXFMSQINEJREYSRJZXVDQOZJQRVBBAKZXKINYC");

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
    msg.setTimeStamp(0.3987759234911832);
    msg.setSource(19291U);
    msg.setSourceEntity(32U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.7557256514214813;
    msg.lon = 0.6624855512175186;
    msg.z = 0.9865948992819845;
    msg.z_units = 198U;
    msg.radius = 0.7481367191692009;
    msg.duration = 63061U;
    msg.speed = 0.34844207770541824;
    msg.speed_units = 36U;
    msg.custom.assign("RHTZZFLSUSHGRVYUFCHCLDNTJXYYVUCUNWEPJKJKAPDPBPCQGTNOMHUKWQWYFRZZBDFRUXCZTYTTLHMPXIQMBVSJCFAXWLCECBWOFFUXVWWGIRHBKAORKIYBJGLAMNSOYIRMDZRJKOTFHENGVXOPYKMEAUROUPETAQNCXAIDILSEGVLWXXADACMMZHGIZTZQQRVLEOIDPQLJBAGVMXBSS");

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
    msg.setTimeStamp(0.31295824326838606);
    msg.setSource(53044U);
    msg.setSourceEntity(18U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.912704161343286;
    msg.lon = 0.40045479635000036;
    msg.z = 0.8728473072199793;
    msg.z_units = 234U;
    msg.radius = 0.6006276369333925;
    msg.duration = 29051U;
    msg.speed = 0.24575176150175138;
    msg.speed_units = 80U;
    msg.custom.assign("HZUSXKFHROQENPGNVTDJIQPRFMJKHCWQGVDTAIYCGZQNHAYZUMLGCMMDKJYYLDBCMJDVXEBNOAXJKGIETQSEPNWEZRANTG");

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
    msg.setTimeStamp(0.0350100797994608);
    msg.setSource(6799U);
    msg.setSourceEntity(123U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(126U);
    msg.timeout = 63017U;
    msg.flags = 101U;
    msg.lat = 0.14420016019981652;
    msg.lon = 0.3804779226640862;
    msg.start_z = 0.232491892543498;
    msg.start_z_units = 216U;
    msg.end_z = 0.8945477315108328;
    msg.end_z_units = 220U;
    msg.radius = 0.6085684023563981;
    msg.speed = 0.29844330570935196;
    msg.speed_units = 136U;
    msg.custom.assign("CLBAQUVJMJBWRIWGQNPMABEJCPMPHLLLBPEYXQDITZTUJKOIEHALIEQYQHPFUVVYWVGDXDASKTYOIHGKEHR");

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
    msg.setTimeStamp(0.7837342616487887);
    msg.setSource(27623U);
    msg.setSourceEntity(162U);
    msg.setDestination(34330U);
    msg.setDestinationEntity(66U);
    msg.timeout = 63845U;
    msg.flags = 189U;
    msg.lat = 0.010127360244998163;
    msg.lon = 0.12846038899630963;
    msg.start_z = 0.013548240457645355;
    msg.start_z_units = 215U;
    msg.end_z = 0.06309188968487134;
    msg.end_z_units = 37U;
    msg.radius = 0.270702566835762;
    msg.speed = 0.10763283781173083;
    msg.speed_units = 26U;
    msg.custom.assign("SLVFKIUMVZCDQVIYLBYPHGRCILRUXHGJHXJJRGUXATWVMPWYSMXCJBDMZIJKFYTHPGGIJDIPFBKQFXOSUFXPLZTIBNVJLUGKOWDERBRZVEJZPVOPBBWAYFEZSNEDNICSIUEGGOHXSYQTOMVNTBXNLAVENODSSAFRKEMZKTGOAFCHHUMAQTGAZKOCJDCPLQURUNTDVHUYZ");

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
    msg.setTimeStamp(0.9121060415860156);
    msg.setSource(13158U);
    msg.setSourceEntity(195U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(189U);
    msg.timeout = 14237U;
    msg.flags = 100U;
    msg.lat = 0.6412886924427621;
    msg.lon = 0.7261590104445729;
    msg.start_z = 0.5299274569641984;
    msg.start_z_units = 156U;
    msg.end_z = 0.20445143643901953;
    msg.end_z_units = 230U;
    msg.radius = 0.4597183159004242;
    msg.speed = 0.9058208493954629;
    msg.speed_units = 48U;
    msg.custom.assign("TIHTXAYQMFHTIDVTRLUMECOVEJOGNSYUHHZCKZNPFDEDXZMQOYNIWEZHZSIVQK");

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
    msg.setTimeStamp(0.5542173055577042);
    msg.setSource(18644U);
    msg.setSourceEntity(183U);
    msg.setDestination(4270U);
    msg.setDestinationEntity(244U);
    msg.timeout = 62961U;
    msg.lat = 0.2578987908439746;
    msg.lon = 0.19804558618999335;
    msg.z = 0.3913661095135529;
    msg.z_units = 71U;
    msg.speed = 0.7579247209714823;
    msg.speed_units = 19U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.44285033512229954;
    tmp_msg_0.y = 0.37967470936746084;
    tmp_msg_0.z = 0.5972885211366864;
    tmp_msg_0.t = 0.6028371754107429;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CQVKLYQBJOXWNOYUFYLPQ");

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
    msg.setTimeStamp(0.2755118728222701);
    msg.setSource(30978U);
    msg.setSourceEntity(12U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(173U);
    msg.timeout = 37386U;
    msg.lat = 0.2872348980670508;
    msg.lon = 0.5666925508922976;
    msg.z = 0.6513634547936002;
    msg.z_units = 73U;
    msg.speed = 0.2844379482256921;
    msg.speed_units = 163U;
    msg.custom.assign("YUNKINPEBYWZJOAIAJWHONDXJUFWRVVDZUHRXYGMELOGREOJSFPDXXVTTFCPVBXYTUFYDSQNQJMRPDPTPLRKJQCTXLCEAXSKMNSPWCYDRUNUIHMAXZGNOWMDEIZLDOZSSHYZWMLFYHBSQCIEOTICDUKLHVCPMFPARRQCMGBAVJKAOVPFWEVNGUBCYBFQSUOBHTZGXQJWNKNQLHZEUMGLRKMVGQAF");

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
    msg.setTimeStamp(0.20101969234256);
    msg.setSource(33333U);
    msg.setSourceEntity(77U);
    msg.setDestination(49697U);
    msg.setDestinationEntity(103U);
    msg.timeout = 7104U;
    msg.lat = 0.7990055734212564;
    msg.lon = 0.7537421646909679;
    msg.z = 0.8275996270477001;
    msg.z_units = 185U;
    msg.speed = 0.43149214647070244;
    msg.speed_units = 60U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.47794853925990144;
    tmp_msg_0.y = 0.45193254225706647;
    tmp_msg_0.z = 0.7686383597037812;
    tmp_msg_0.t = 0.7540284860746956;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JFNRKCRRCXZDUORGXDEAVZJYLAFFTTCUXDYEVHDQBCFEIQNNIMESTPPNGKEHTUQGZXYIEGPJVGVUQJAPCYXQYEOIMHFOSJICDARLZLOZRDPGVMTHOQKZVLWXPKIIHXJRARVBMMENTAKWBZXHWAOWNWIQLMMBTODNKJBJPSHJYDSLBYLCDPWCRQZUWAE");

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
    msg.setTimeStamp(0.19779797619973527);
    msg.setSource(8589U);
    msg.setSourceEntity(42U);
    msg.setDestination(50435U);
    msg.setDestinationEntity(46U);
    msg.x = 0.5814539136226915;
    msg.y = 0.4822732676674133;
    msg.z = 0.9522026060775822;
    msg.t = 0.769342390252155;

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
    msg.setTimeStamp(0.5095379953468303);
    msg.setSource(40502U);
    msg.setSourceEntity(76U);
    msg.setDestination(54531U);
    msg.setDestinationEntity(181U);
    msg.x = 0.9102939122915606;
    msg.y = 0.04773185779516731;
    msg.z = 0.6006445952523183;
    msg.t = 0.581703302571726;

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
    msg.setTimeStamp(0.9235497262199701);
    msg.setSource(63315U);
    msg.setSourceEntity(44U);
    msg.setDestination(19192U);
    msg.setDestinationEntity(68U);
    msg.x = 0.3399657210381771;
    msg.y = 0.8156990911877283;
    msg.z = 0.44088366231340637;
    msg.t = 0.8189515734405649;

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
    msg.setTimeStamp(0.026498646247093083);
    msg.setSource(12035U);
    msg.setSourceEntity(192U);
    msg.setDestination(51513U);
    msg.setDestinationEntity(171U);
    msg.timeout = 64670U;
    msg.name.assign("EBQDLMUNPWNAUOQBORQILUSMUISTDWVJPZJHGSXEHINSYQRYXWOWIBBEWHSKHHYJJMVLEYRCBNKRLIBKYQOMOJILOLJECZZELZZCUKTPWMPCKHVQGMVVYTKXXXGCPBNQDIHPZDVGFFSRSJQZUFPOHTWDHTGAEXAKLKRDRCIEVVGMPZKBROAZOILIBDXAGNFSCPNDKQTZHRWCDMYGXQVWNGUANTSCTYTASMFGYFDN");
    msg.custom.assign("ZFMEYRRDEPMVVF");

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
    msg.setTimeStamp(0.6759531590422475);
    msg.setSource(51062U);
    msg.setSourceEntity(191U);
    msg.setDestination(51783U);
    msg.setDestinationEntity(102U);
    msg.timeout = 12719U;
    msg.name.assign("ZECGQVDVOSAIJEBMTHSZDNJCJTSMKYRSLTYYOGMDGTGIYMCHRHCONPXWALFJXVAOVHRNYWGKFKZWBPVPLAMZUQPQNIF");
    msg.custom.assign("BEVSFVXVZCQJTZFIRJXLTNYBARIOCAFGIWJLASUUAHTQFBNPERSAVRFXVQPLTHDGYCOBLXILODOMJTXOGOAMZJYCYHMJDTMDFASQDZLGOUHWVDJCRYCCENTMPXIIHLJEIGXUSEBEBHYXGKZUPBPMHGSDUQGKYKENRNJZAVRKSPREKDKSDBQMZWBLKVWNQTACRIQGSWWHRCJVFUFQLTEENPBYMXYHMUOHITUDWXPZKWCNUKLFKZNMGPYZW");

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
    msg.setTimeStamp(0.3252351051638338);
    msg.setSource(62844U);
    msg.setSourceEntity(20U);
    msg.setDestination(16541U);
    msg.setDestinationEntity(105U);
    msg.timeout = 5422U;
    msg.name.assign("DEQULCGXUWBXUSPITVVOGWXDQNGHAZOSKCOCPAIUKUFVLPUEJGHIUVRXCMFBJSVXRKTDFANAOOYUMWZKDSGOYYNPFEABYCIEWIMZQSNLLEQNTFJLNAPHKLEVPMWGFREBWOBZZYMBIMFRHQIMSGJSQHEPQLWMBXTPTHDDFCOT");
    msg.custom.assign("OZBDPQTTMAHGOZCXRAHJYYGMSQYFSTELJXGWBXIIPHPSVPWEOWHJSECWCBCRTDIJTJCQUDMZWHAXUOUGAERTKXDXLZHFGKCLEFWANGCVRHLUNIXHSONRJDMZJQNYURQLVHIAUAPSKOLNHKBJPUQMLVYKZFCYPAMVNWXKLFCMVVORIVRSGOZTPMMBKE");

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
    msg.setTimeStamp(0.1556516310919842);
    msg.setSource(17047U);
    msg.setSourceEntity(93U);
    msg.setDestination(36642U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.8422761808792738;
    msg.lon = 0.6651050726864884;
    msg.z = 0.10671317624142906;
    msg.z_units = 129U;
    msg.speed = 0.02164482469087481;
    msg.speed_units = 1U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7057475767900167;
    tmp_msg_0.y = 0.7029956474701788;
    tmp_msg_0.z = 0.38121659071565783;
    tmp_msg_0.t = 0.43348701381495125;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.4515719407828632;
    msg.custom.assign("SFWFHILFJQHHLWDINBCYZJTSHUOWCDBZRXISUNQVEWVLDYEYBJGNGATYRDYOBXREXRGAHLWLASMOKSTCDVISIULNPTMDHVZAXBBUNIVJXXMOCOLUWLEZGKSAGBDDCARWOPZKMTW");

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
    msg.setTimeStamp(0.4891157446658654);
    msg.setSource(40843U);
    msg.setSourceEntity(244U);
    msg.setDestination(1267U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.644888223126681;
    msg.lon = 0.3867504018515354;
    msg.z = 0.6564692378041396;
    msg.z_units = 81U;
    msg.speed = 0.719729697058468;
    msg.speed_units = 71U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36038U;
    tmp_msg_0.off_x = 0.1357553252159449;
    tmp_msg_0.off_y = 0.4404686236094951;
    tmp_msg_0.off_z = 0.7023167208524639;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8117025825344578;
    msg.custom.assign("RTXPUIJPPMZEMNBKBHAFJGKJNMHQFOQSLCKXSHHGWXNVWKWQZICRRQQXDDHZTIAVBMYUOCCWYENLSROOROOYUGSXZNBYGTQXGRJWWDBPKTNDHUJVYAHDCOKSABRGCKMRKANAWSEDTJEYSWHXLENHLERBEFJFLCLIPMWVLTXXBDFDIGCKCZGTSTJEBMRUQIFANEZFD");

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
    msg.setTimeStamp(0.7061759166624666);
    msg.setSource(1794U);
    msg.setSourceEntity(208U);
    msg.setDestination(2419U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.10158831454657113;
    msg.lon = 0.791300681850034;
    msg.z = 0.26361419054659085;
    msg.z_units = 224U;
    msg.speed = 0.07665438350410991;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8793679705281433;
    tmp_msg_0.y = 0.8311280969435574;
    tmp_msg_0.z = 0.33247851306652554;
    tmp_msg_0.t = 0.6450359941143851;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2745U;
    tmp_msg_1.off_x = 0.7467049496575795;
    tmp_msg_1.off_y = 0.025424097347444996;
    tmp_msg_1.off_z = 0.8485539138298258;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.40507663711397424;
    msg.custom.assign("SMQOQVXWXFIPJGZIRETJCDCZJUJTECPLVNNPIYVSAPOEZXWTHJCURQBUNHPXZLHB");

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
    msg.setTimeStamp(0.3745004998913518);
    msg.setSource(38878U);
    msg.setSourceEntity(8U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(55U);
    msg.vid = 531U;
    msg.off_x = 0.3947945624048893;
    msg.off_y = 0.9301398506822888;
    msg.off_z = 0.5202730873440771;

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
    msg.setTimeStamp(0.8718562335634961);
    msg.setSource(9917U);
    msg.setSourceEntity(48U);
    msg.setDestination(15541U);
    msg.setDestinationEntity(231U);
    msg.vid = 38400U;
    msg.off_x = 0.9501338446159222;
    msg.off_y = 0.5471616966640901;
    msg.off_z = 0.3824843214161239;

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
    msg.setTimeStamp(0.20060983275044864);
    msg.setSource(43583U);
    msg.setSourceEntity(175U);
    msg.setDestination(26910U);
    msg.setDestinationEntity(101U);
    msg.vid = 23439U;
    msg.off_x = 0.8006163507956797;
    msg.off_y = 0.8780422528680573;
    msg.off_z = 0.7256348656072658;

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
    msg.setTimeStamp(0.15489351912196814);
    msg.setSource(64281U);
    msg.setSourceEntity(83U);
    msg.setDestination(51908U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.6854156169476537);
    msg.setSource(49058U);
    msg.setSourceEntity(203U);
    msg.setDestination(61195U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.15255396476296013);
    msg.setSource(9485U);
    msg.setSourceEntity(197U);
    msg.setDestination(57284U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.5707722916005689);
    msg.setSource(5103U);
    msg.setSourceEntity(250U);
    msg.setDestination(53172U);
    msg.setDestinationEntity(152U);
    msg.mid = 41852U;

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
    msg.setTimeStamp(0.20379737592892722);
    msg.setSource(55943U);
    msg.setSourceEntity(217U);
    msg.setDestination(39353U);
    msg.setDestinationEntity(253U);
    msg.mid = 19515U;

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
    msg.setTimeStamp(0.4272995819007288);
    msg.setSource(2404U);
    msg.setSourceEntity(217U);
    msg.setDestination(49647U);
    msg.setDestinationEntity(171U);
    msg.mid = 13119U;

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
    msg.setTimeStamp(0.2680537716544278);
    msg.setSource(24729U);
    msg.setSourceEntity(0U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(112U);
    msg.state = 98U;
    msg.eta = 47276U;
    msg.info.assign("WIQBSDSOOLFPCFPKVGTMFUVDQGRFELJKDJURLNGGIHOENNLWWXHYQKHPGXMDPJJRXMLSUOMDYBZIPPGRAHSAYTAAZWBAUHHGCDLCOZJZQBWTOXICXEVEUTXBRKQIVKEWCPUUJRMNNTKNEBBAVHCCMRLYCOBANWQVUFOIOWDCAHYPRUGRXDMSZVKTITVKTGZYLSPQIFGRNWSAAS");

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
    msg.setTimeStamp(0.8629598838261106);
    msg.setSource(18365U);
    msg.setSourceEntity(159U);
    msg.setDestination(27821U);
    msg.setDestinationEntity(29U);
    msg.state = 36U;
    msg.eta = 59820U;
    msg.info.assign("FMAPOYFVKYQVJUKJNJNVTEXPNXFTCVJTWYSESGMMDCSNYLGKKPQBNRSBMBOTHFOXRKWTYIRAAIGLBUSGZKCWUNXJBNQDRZUEZHTIQRDCYHEMHZGFUJCUMKJQQRTJYWSLFLIIFXPBDWPOCHDPQFNSYLBCHEVARGWCGUVDNIZEVRYGHMAKXESABQZXEWHACOTQHXUDCXALLFHWPQAJUOIRWZOUVGXWPPYDOILMZIKDVFZP");

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
    msg.setTimeStamp(0.43296622803150264);
    msg.setSource(63601U);
    msg.setSourceEntity(240U);
    msg.setDestination(49241U);
    msg.setDestinationEntity(68U);
    msg.state = 63U;
    msg.eta = 34278U;
    msg.info.assign("BGKADKBZBWVEIIDUVGHWJWQSMISQTYUNYWLWAQEGZQZBSXTDIVIRDHKMDMHHCSOZQNHPCLHOEGLEYREFEURXEWVAAWXXMVFTNAMNSMBKYKJXLNSTBPQYVYDJGGRZFVAUXHYNQXHGGSSCSOCLZNUCIQAKWZRBCQJEJPEQDMEPJDPXAJIOUZXKGCCMKYFIPBJTUXYHCJLFVDFFUFVRDLUTFYTNVAZTPUILMJBRORNPFBOLATC");

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
    msg.setTimeStamp(0.1045373440234848);
    msg.setSource(163U);
    msg.setSourceEntity(145U);
    msg.setDestination(57873U);
    msg.setDestinationEntity(188U);
    msg.system = 34841U;
    msg.duration = 3325U;
    msg.speed = 0.2548422210810014;
    msg.speed_units = 83U;
    msg.x = 0.4996352055823118;
    msg.y = 0.6430069864877915;
    msg.z = 0.5995158232592677;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.25255743313064616);
    msg.setSource(53856U);
    msg.setSourceEntity(225U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(147U);
    msg.system = 35945U;
    msg.duration = 25424U;
    msg.speed = 0.06143848803747576;
    msg.speed_units = 117U;
    msg.x = 0.6792910787644563;
    msg.y = 0.14536968984203313;
    msg.z = 0.1683116531294363;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.3768083810766121);
    msg.setSource(13021U);
    msg.setSourceEntity(37U);
    msg.setDestination(57251U);
    msg.setDestinationEntity(219U);
    msg.system = 42270U;
    msg.duration = 52253U;
    msg.speed = 0.08731644332975264;
    msg.speed_units = 165U;
    msg.x = 0.7563102427444492;
    msg.y = 0.48570234021578373;
    msg.z = 0.4309251650430893;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.22481306344647667);
    msg.setSource(36596U);
    msg.setSourceEntity(225U);
    msg.setDestination(47869U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.01645892501693158;
    msg.lon = 0.1239660229243933;
    msg.speed = 0.5304094988993143;
    msg.speed_units = 128U;
    msg.duration = 50988U;
    msg.sys_a = 16139U;
    msg.sys_b = 34094U;
    msg.move_threshold = 0.5907155787080517;

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
    msg.setTimeStamp(0.713138583816418);
    msg.setSource(4514U);
    msg.setSourceEntity(236U);
    msg.setDestination(38046U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.384121192261737;
    msg.lon = 0.577550552625079;
    msg.speed = 0.5025187858155886;
    msg.speed_units = 245U;
    msg.duration = 38312U;
    msg.sys_a = 2201U;
    msg.sys_b = 50561U;
    msg.move_threshold = 0.8588445143840269;

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
    msg.setTimeStamp(0.32074601349861986);
    msg.setSource(942U);
    msg.setSourceEntity(176U);
    msg.setDestination(14949U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.9120229946297337;
    msg.lon = 0.7246177006366525;
    msg.speed = 0.34049521318632003;
    msg.speed_units = 129U;
    msg.duration = 12809U;
    msg.sys_a = 49483U;
    msg.sys_b = 59442U;
    msg.move_threshold = 0.9902557188281458;

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
    msg.setTimeStamp(0.8288453112002131);
    msg.setSource(2404U);
    msg.setSourceEntity(175U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.6584614169792772;
    msg.lon = 0.5816795661011921;
    msg.z = 0.7937854271778747;
    msg.z_units = 205U;
    msg.speed = 0.4576913761455035;
    msg.speed_units = 115U;
    msg.custom.assign("VKTRTZKBTKFUYMKGPIOWFAYWFPZHSR");

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
    msg.setTimeStamp(0.7427132728667915);
    msg.setSource(39932U);
    msg.setSourceEntity(210U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.5872865597252581;
    msg.lon = 0.28548623812453244;
    msg.z = 0.27814807957099097;
    msg.z_units = 170U;
    msg.speed = 0.4542818067284783;
    msg.speed_units = 132U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9316397774279177;
    tmp_msg_0.lon = 0.00262346537933722;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NMLGSUXAKUBNKGIZESOYCBEXZHJVDUDMGZPFNNOOZJRTRYPSZMLYJNAWRPXJQZMQOYSIKQJJESNLHBIYWXXVQWWAQZNGLFSLUEKLBYAGYEDKOHKCHSSLWMENDNXFWXICDVDWARVFPUTWOJBRTEVBQKPLAEUPRKGCBHBNAUAJBFAUKZFTQFMMLIDPGGQQCOYTHWDCCYDPIHEUPAWYORTRBCHZKVIOF");

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
    msg.setTimeStamp(0.5516606123102732);
    msg.setSource(19821U);
    msg.setSourceEntity(63U);
    msg.setDestination(64623U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.7430203209213442;
    msg.lon = 0.6471991669448629;
    msg.z = 0.7400695220917654;
    msg.z_units = 60U;
    msg.speed = 0.3970270134133892;
    msg.speed_units = 103U;
    msg.custom.assign("WOXXFCLWBGWSH");

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
    msg.setTimeStamp(0.7164769404877938);
    msg.setSource(51937U);
    msg.setSourceEntity(136U);
    msg.setDestination(37371U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.0142131654301616;
    msg.lon = 0.3138645293002378;

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
    msg.setTimeStamp(0.9189771746681052);
    msg.setSource(22160U);
    msg.setSourceEntity(12U);
    msg.setDestination(22888U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.29624752261551635;
    msg.lon = 0.91899617413247;

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
    msg.setTimeStamp(0.32304590639059494);
    msg.setSource(35467U);
    msg.setSourceEntity(184U);
    msg.setDestination(38400U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.15574895863786187;
    msg.lon = 0.9708192321825355;

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
    msg.setTimeStamp(0.3903297281968119);
    msg.setSource(48029U);
    msg.setSourceEntity(173U);
    msg.setDestination(7239U);
    msg.setDestinationEntity(213U);
    msg.timeout = 11050U;
    msg.lat = 0.1348419519062467;
    msg.lon = 0.2737125143046193;
    msg.z = 0.15603598471698932;
    msg.z_units = 168U;
    msg.pitch = 0.3667880926359607;
    msg.amplitude = 0.06721084735407334;
    msg.duration = 62606U;
    msg.speed = 0.34855041959918487;
    msg.speed_units = 242U;
    msg.radius = 0.4398838913047928;
    msg.direction = 141U;
    msg.custom.assign("DFPZASIULKPZZNRMTWMDRTFZVLNKGOEFUEJJSEMJBCQUUNPVCAZDRKEPBUBTXQDJWVYZFGLBMVTKUQSQDCANNOGQFBOEIMYLYJVHDAJAMCNOFYVRGRSUXWQUBDHHXOROJARWKMECEGPXWGFK");

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
    msg.setTimeStamp(0.8098770519041067);
    msg.setSource(25525U);
    msg.setSourceEntity(200U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(147U);
    msg.timeout = 19804U;
    msg.lat = 0.8222590790958116;
    msg.lon = 0.8288801312440692;
    msg.z = 0.5004436252014949;
    msg.z_units = 220U;
    msg.pitch = 0.7736602612432134;
    msg.amplitude = 0.4110786067487834;
    msg.duration = 53999U;
    msg.speed = 0.40228574036463494;
    msg.speed_units = 165U;
    msg.radius = 0.3495000800478275;
    msg.direction = 224U;
    msg.custom.assign("LCQHHEVPFOKFJYFDBVRUXLDUIFROTGYNPXEXDZHGTUWHZAIADBHTCXHHXOWDMPIELIZBCESCHWBVUOXWMDQVWROKLJUMMEAIXRELHYQOJUXGRGQOZQYZLCTRKBVSWMNJYFYJKURSLPSNIAZGPAMDDCATWWQKCOTIALQHJPPZOIGIPDVQKMVQTTNYUSRBBRZUZNJNWTCYBKFSFGUAMGF");

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
    msg.setTimeStamp(0.8597348748140764);
    msg.setSource(31312U);
    msg.setSourceEntity(123U);
    msg.setDestination(6124U);
    msg.setDestinationEntity(42U);
    msg.timeout = 5279U;
    msg.lat = 0.3798546577217967;
    msg.lon = 0.3946128184166968;
    msg.z = 0.004896787812285086;
    msg.z_units = 239U;
    msg.pitch = 0.8173450610445299;
    msg.amplitude = 0.509028073619178;
    msg.duration = 25050U;
    msg.speed = 0.0756882895190738;
    msg.speed_units = 218U;
    msg.radius = 0.38949610974925686;
    msg.direction = 198U;
    msg.custom.assign("XVDISKWNBMJMXAYDLKKYSPPEEMUNFTHNOAYJKGBBPG");

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
    msg.setTimeStamp(0.4830193777167018);
    msg.setSource(49125U);
    msg.setSourceEntity(33U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(48U);
    msg.control_src = 9885U;
    msg.control_ent = 151U;
    msg.timeout = 0.9063938001649826;
    msg.loiter_radius = 0.425749080318929;
    msg.altitude_interval = 0.6649644730963247;

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
    msg.setTimeStamp(0.4101661197187726);
    msg.setSource(25898U);
    msg.setSourceEntity(14U);
    msg.setDestination(13537U);
    msg.setDestinationEntity(216U);
    msg.control_src = 64053U;
    msg.control_ent = 75U;
    msg.timeout = 0.8490581083538362;
    msg.loiter_radius = 0.8636780609914799;
    msg.altitude_interval = 0.4908194416596481;

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
    msg.setTimeStamp(0.5578158932453062);
    msg.setSource(53141U);
    msg.setSourceEntity(52U);
    msg.setDestination(7515U);
    msg.setDestinationEntity(231U);
    msg.control_src = 25589U;
    msg.control_ent = 248U;
    msg.timeout = 0.19495180895411157;
    msg.loiter_radius = 0.3227681879425912;
    msg.altitude_interval = 0.48327188903210205;

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
    msg.setTimeStamp(0.5713305295207354);
    msg.setSource(34986U);
    msg.setSourceEntity(205U);
    msg.setDestination(17942U);
    msg.setDestinationEntity(112U);
    msg.flags = 245U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7567070493274206;
    tmp_msg_0.speed_units = 205U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.39758134924811106;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6419713278441813;
    msg.lon = 0.7643722756333626;

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
    msg.setTimeStamp(0.06587124255994348);
    msg.setSource(21976U);
    msg.setSourceEntity(52U);
    msg.setDestination(63095U);
    msg.setDestinationEntity(167U);
    msg.flags = 241U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.14600744517554998;
    tmp_msg_0.speed_units = 238U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6882634207125268;
    tmp_msg_1.z_units = 129U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7452144201036512;
    msg.lon = 0.6843477430696975;

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
    msg.setTimeStamp(0.6842974170931044);
    msg.setSource(8295U);
    msg.setSourceEntity(30U);
    msg.setDestination(53268U);
    msg.setDestinationEntity(254U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7184659270205886;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5425852640730552;
    tmp_msg_1.z_units = 20U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3189100192582556;
    msg.lon = 0.04339195984435029;

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
    msg.setTimeStamp(0.872130063213244);
    msg.setSource(62053U);
    msg.setSourceEntity(69U);
    msg.setDestination(1887U);
    msg.setDestinationEntity(28U);
    msg.op_mode = 225U;
    msg.error_count = 114U;
    msg.error_ents.assign("UPHTXOWKJJGSVIWOGBMEUUTEAJFUQXTLYBWKSQHOHGVYUBOYAVNEKGYVEQLBWUEPCSMZMZXZNURUIOANGHQETADMVHDYFJXYVXAQLMONKPFIAEAEVTYJDRBHTPYIPMHVDXPCIOJLKQFCJFTDZPDFDOAIHDSMRDCANWXRSGWWBKRUKQQVGD");
    msg.maneuver_type = 39861U;
    msg.maneuver_stime = 0.7116101567854644;
    msg.maneuver_eta = 61038U;
    msg.control_loops = 4221304346U;
    msg.flags = 84U;
    msg.last_error.assign("BBRDUDTQVZXLZIULJBLEQCSMFRSQJCORAMZCUGZJMUXVQYWROFTUHN");
    msg.last_error_time = 0.741845522676517;

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
    msg.setTimeStamp(0.39808496527618464);
    msg.setSource(58710U);
    msg.setSourceEntity(91U);
    msg.setDestination(49818U);
    msg.setDestinationEntity(176U);
    msg.op_mode = 174U;
    msg.error_count = 156U;
    msg.error_ents.assign("ONAMKIFKZFUDWNNTJXXKWBCRTEWLNAFYPPWQCUHMIPSRDAGFRJOLPQYVIKGTAHLSNQXFUMQGOQNBSJUSXFXSDYTDBQXSZMAOSJJKBYNRXJCO");
    msg.maneuver_type = 11020U;
    msg.maneuver_stime = 0.13559489965423954;
    msg.maneuver_eta = 39714U;
    msg.control_loops = 3975023306U;
    msg.flags = 109U;
    msg.last_error.assign("MITWEOBGKRUYDXFVKAUZEPBNTHBNCDMBMXQRIONAWGRBORDHXAWJVWZADJJTHGAATVYNPFNBXIEUPSHXNFMWZCPFZIRZPCGTZLUGYJXPGOZLHQURIVMCKNSVWXNIJDLUTESOYIVJSTJQZLNEFMSCDYOKHIOBFPQKCETGDWXLIKDZQ");
    msg.last_error_time = 0.4822072894985322;

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
    msg.setTimeStamp(0.31021048126135187);
    msg.setSource(51004U);
    msg.setSourceEntity(240U);
    msg.setDestination(19720U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 174U;
    msg.error_count = 235U;
    msg.error_ents.assign("IZPYUMNBPVZQVNLGTSWNWYOSZQFKRQDOTLATAYYTCVBUMPETNADUE");
    msg.maneuver_type = 23532U;
    msg.maneuver_stime = 0.6925051870904462;
    msg.maneuver_eta = 39722U;
    msg.control_loops = 45660691U;
    msg.flags = 232U;
    msg.last_error.assign("OXJOCKYUZODLEBDCKUDQJRV");
    msg.last_error_time = 0.3183046733253264;

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
    msg.setTimeStamp(0.30958311883744105);
    msg.setSource(3486U);
    msg.setSourceEntity(156U);
    msg.setDestination(12531U);
    msg.setDestinationEntity(63U);
    msg.type = 94U;
    msg.request_id = 19738U;
    msg.command = 93U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 8882U;
    tmp_msg_0.custom.assign("KPSVMDNAXSSBTGVQESAEERSBEFJUHWADECYO");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("ZKOJWQBGQBWAIAOPCIMJGDLFKXSJSRRFDXGQRZTOVNKXPUDUHQDREBIWDSZMH");

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
    msg.setTimeStamp(0.8686960068675955);
    msg.setSource(6812U);
    msg.setSourceEntity(96U);
    msg.setDestination(57504U);
    msg.setDestinationEntity(218U);
    msg.type = 216U;
    msg.request_id = 5870U;
    msg.command = 47U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 60698U;
    tmp_msg_0.lat = 0.3606223179757976;
    tmp_msg_0.lon = 0.7444604416565821;
    tmp_msg_0.z = 0.6608492260016778;
    tmp_msg_0.z_units = 142U;
    tmp_msg_0.speed = 0.23765125224212025;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.custom.assign("UTUJHVEYWCCUVDQCFRMSPNEPRMRJBSHEQUEVXFZMBGBVLUQJZTLOHYNWLIMICKZNUQZFVDKXLATTUVPHIINTWRHXYIKMBPGXAXFSIWTSLHYZDSPZDFYFWPOJAMEAXOFOJXIKLRZBVISKKYCBXLSGGGAGOJQAQHDCPJTALZWUUSWDPBACRINEUOGSGMCXDCZNOREKHJYRQEFLCJAWYYPWTHRNWGKOERGHSMPT");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("VGHXGBCGEENSDVKIHAQFRRXUZAZAEYVCTSLURCWOY");

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
    msg.setTimeStamp(0.07945796271397554);
    msg.setSource(2249U);
    msg.setSourceEntity(254U);
    msg.setDestination(57652U);
    msg.setDestinationEntity(44U);
    msg.type = 157U;
    msg.request_id = 44060U;
    msg.command = 28U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 16007U;
    tmp_msg_0.name.assign("QWTUEVDRRORNWTCNSMVWLUILSCAZKQUDIAACYUZIUTOVWHTPFMEMZPNSZLMUIAPCECXZEYQQJPBZUBLJMBYCFAEIFIHNCCYTGVGXDBJHYBXOELFIQYHEGMPRONOQXGUQVDQKLFFYBZYKAVEMH");
    tmp_msg_0.custom.assign("YQBNBALZVNQGHEUPGXWVWIEAKHZWMXGIPZEOEQTLSKTUNNTJJWDBKJEOTQBIGRTIJTKCNSHLKKUTXVMWXUKDOYQWRPFGKJMXORLQNRCCRDWIHDNWMLBAYINRYDYGGABALSSAVULIREZAD");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("AEPQENBAFTWGSEDKVLSXPOVQJDJXAWIMITZHGCLWCFYHMFCXMNCKMRUKNASOYNSOPNGTPQGUAUWRYPUHYPQXLQTRFLKBSIJXDCFSNISZGYIQEZEIVMEKAITOSQHLBDFXGYIXFBPZBDXYVXUHDZVTOBBNGRHLZHLPDMYFISNHHUBZLLQOEKTODFFRTUWXOZROLAASKJJNEKDRR");

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
    msg.setTimeStamp(0.3936898549848703);
    msg.setSource(15822U);
    msg.setSourceEntity(51U);
    msg.setDestination(34579U);
    msg.setDestinationEntity(228U);
    msg.command = 124U;
    msg.entities.assign("DHDWPKZYQUTZMRNFTWIAHLRIZQSYTHOSPBQWRYTIZFGFTNJKANCTQJVVNWBOESVEUEHDGFINJVLTSITOXOKRGEDMXQFPYJNPXDKLZEZTUVYSRPRSCAM");

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
    msg.setTimeStamp(0.1476959693991141);
    msg.setSource(25592U);
    msg.setSourceEntity(209U);
    msg.setDestination(517U);
    msg.setDestinationEntity(197U);
    msg.command = 211U;
    msg.entities.assign("UZHNMMLYDWXFEBKFFJFJXHDRPHFDEUKTKPQPUGQNSEELLXXDSJLOIUDMMIDSGTFISQVXMERGZQIPCIVYMOJKZAUWPYNGEYRTZYJIOXCPXSGCHAWNWSGLBRSQWNVAXYOLWEGBVZPARIQLNBGAUCBTTFHWXWMLVSCNTUREKKBGCWXVSGUTLZDMBJQBJCIQVRRAWDKBVDFNCVHTJBONZFSAMZKT");

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
    msg.setTimeStamp(0.8926210383100665);
    msg.setSource(54652U);
    msg.setSourceEntity(13U);
    msg.setDestination(1013U);
    msg.setDestinationEntity(22U);
    msg.command = 86U;
    msg.entities.assign("LPZJBXEVNJRCUOGCOSVFBYCUUTZXBVZMING");

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
    msg.setTimeStamp(0.16345339049493146);
    msg.setSource(22458U);
    msg.setSourceEntity(102U);
    msg.setDestination(15847U);
    msg.setDestinationEntity(221U);
    msg.mcount = 98U;
    msg.mnames.assign("PPYYNJHCDPHFJNKIBNWQGZBCGVVHLDIXOXKPDJMEADBRHONJMTRMHWGCCREFBKNLLSPGBYOXOUSEFHDXNRPOYYPYKFRZZLKFHCOZUHYAKXXJNXQZTTSYKUTIVGBADFYEOLQCLSTIYJPIGIDNUWSXIZMVBWMLWMARKLRMNJWWFTUS");
    msg.ecount = 73U;
    msg.enames.assign("KWVWTBBHTMYHISINPWDKICJHNWCDCRMYPBKEBUAWGYFPNYMKFRNPHXZSMMZAILRWEZGTOXIYAWDESCFCGHAQTTJJKQLSAAEJYJCUTRRXKQNKVCJJVYZZREYODUHESZABQTQPDXYLOOLGUGXZUHZFNSDSVTIKPKOVXVRHIJFAGLDPJFEZUXFOMNEMITCVWEUFLXQGIDYVHL");
    msg.ccount = 7U;
    msg.cnames.assign("XZQZSMBSEWSULACVYLOBCQOVDXOMJWXVHAJFRVAEKYDRKTGEDPZAJKNOTZJDQRMIFPMXPKBNVBOZBCAWGUXHNCPZKMDZVMTCECEIGVAJMKWBETGFYISLCIOJFARAYNUCRYXOYICHPHSMSYPDBLQTHTGYHBVEMOLQDGSKRKBSQHFWVQHDZLUWIDKZQQJFNXNWUJDTAINEISLEUIGUPT");
    msg.last_error.assign("WQRYSUTOSKVIFZSIJBOLVRXMOSULMZCDUBELBYUTLNJKTVDXOWBJYPPTWTBGGKKDTQXKHRWRDWGYXHNNCSSJ");
    msg.last_error_time = 0.5826548719414603;

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
    msg.setTimeStamp(0.5652205475222775);
    msg.setSource(5366U);
    msg.setSourceEntity(164U);
    msg.setDestination(64239U);
    msg.setDestinationEntity(148U);
    msg.mcount = 35U;
    msg.mnames.assign("MPAVRXEPAQTHUOVHQJFGHDLXKGOYBJXQMQEGXNHXRRAPGQDDCCXDDEIJBIGVKFZONNSNZUQSEKTTVIMOWDCXMVDKPHAUYTCEWZPCYYKNFLYYJUVGJKPKWFBXWSNLLLWHYRMLUZPYJGATIJQABROAEIEYKFTBTRIMBPRYSHSDFWWUZGARWHCUOMTLLHIQNUEP");
    msg.ecount = 77U;
    msg.enames.assign("XNGXSGHWXGOILFBLYFNNREIJATFQEIANCZULICWCKORYGFHHLIZPDXYNKUPKPIKEBLTZUMOMDVCVDURBNOADCSUUQGENNTOQZNPMAYVAWMFQVLVAHJEYLJMKRYRCGYYCHHZWJUBKPPRDMTGFPIOZXXIZKOGVWGQWTQACPBFPPWJTZXEDBHUYDVKNIGBVAJSVZQLSJEQAECALTMHMWFJREZJTFMRQC");
    msg.ccount = 89U;
    msg.cnames.assign("NLDUPRCHCFTGMWFMJWIZRTXIGJSVSVNKBZNIKLQCHGNQYOZXMHATEJYHIDKOPWJWOTMOLKXXPHXBKEFWUNSLFVCQFWQP");
    msg.last_error.assign("RYGPODSTKGBBEUYDDL");
    msg.last_error_time = 0.2295238461221234;

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
    msg.setTimeStamp(0.7487162229617567);
    msg.setSource(40062U);
    msg.setSourceEntity(179U);
    msg.setDestination(52669U);
    msg.setDestinationEntity(107U);
    msg.mcount = 0U;
    msg.mnames.assign("EQBDBQTUPEQJLRXCHVOMPNGIOKOBJUIDEJNLJNOVFLYRBMKYQYUAFVUYFWHFQALCQNLWDVSTXZWPDNATFAKBAUDIZUWGCPPILRJCXDISMTNFGLZSTMRYOKSZQAGEGRIWROVLGGFZLYODIVWBVBPORCLMJVHJGZNMQOXCCENYMPKCQDMTQPJMHENUSTGHXTJBRSCDYESBAGPYWYHEPAENF");
    msg.ecount = 236U;
    msg.enames.assign("CKNKMJZMVKCLIWRCLKZSDYHWHJQIDUVSBNPCFELNTUFSLFMUETPLTGHRYEHMCCGZMJAKWZKRXTNWDXQTDWUMJNEVUHMDZVGYRGMBRXIQKPBEUAWVJSGQFSROWFOFWJXYCPBOAOZEGWDFVTLQXAHXEBJCRCXNGISGYJLYNAFPODGBXWRE");
    msg.ccount = 105U;
    msg.cnames.assign("ICQDLCULQRJZDGQKCAJW");
    msg.last_error.assign("VGSOWJJTKLSRQMHLUZHJQDODIRUTFRXTWCGSGVFNTYXVNVKXUKBVMWOJPVECPGOGFHTURPLPSPUCWHTBZOAOVEYCDDDXSUFGEZFIGSYDIUAOUBGQNVNQRAXOIMOPCZLAYKFWCJRIJHQJWWFNAIUZMCXXJMAZENRVBMAYAFRIMTBPYKVBYSYQSDPSLQCWNAXGPEBFLESHGTLLZ");
    msg.last_error_time = 0.25552418496411455;

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
    msg.setTimeStamp(0.4235240605603726);
    msg.setSource(34376U);
    msg.setSourceEntity(211U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(206U);
    msg.mask = 131U;
    msg.max_depth = 0.1635155306574294;
    msg.min_altitude = 0.8591413196206802;
    msg.max_altitude = 0.3903291856997272;
    msg.min_speed = 0.2296823970266061;
    msg.max_speed = 0.6100254475935207;
    msg.max_vrate = 0.392162280972172;
    msg.lat = 0.5551529740885358;
    msg.lon = 0.2795111723229924;
    msg.orientation = 0.8011206400666226;
    msg.width = 0.7375142946095463;
    msg.length = 0.5927072693813287;

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
    msg.setTimeStamp(0.877382161430455);
    msg.setSource(15084U);
    msg.setSourceEntity(59U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(84U);
    msg.mask = 52U;
    msg.max_depth = 0.09833841504976426;
    msg.min_altitude = 0.8216951409039162;
    msg.max_altitude = 0.8074996978673463;
    msg.min_speed = 0.4854789322695252;
    msg.max_speed = 0.9645938529924623;
    msg.max_vrate = 0.6554799610697601;
    msg.lat = 0.18849215910066297;
    msg.lon = 0.15784315166348095;
    msg.orientation = 0.22627110999839917;
    msg.width = 0.16713550863045434;
    msg.length = 0.9297728146793286;

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
    msg.setTimeStamp(0.14046621598870712);
    msg.setSource(9866U);
    msg.setSourceEntity(26U);
    msg.setDestination(28088U);
    msg.setDestinationEntity(246U);
    msg.mask = 86U;
    msg.max_depth = 0.3022092150065524;
    msg.min_altitude = 0.7174361874148939;
    msg.max_altitude = 0.38984772089396535;
    msg.min_speed = 0.6458284888016677;
    msg.max_speed = 0.6166694419881794;
    msg.max_vrate = 0.42925986686876283;
    msg.lat = 0.33333492051905755;
    msg.lon = 0.07597916580924635;
    msg.orientation = 0.9414032210413501;
    msg.width = 0.40398576394444186;
    msg.length = 0.8713234110235274;

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
    msg.setTimeStamp(0.2135376885132343);
    msg.setSource(19217U);
    msg.setSourceEntity(39U);
    msg.setDestination(23581U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.47254039540191406);
    msg.setSource(50042U);
    msg.setSourceEntity(156U);
    msg.setDestination(45328U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.048486372504700115);
    msg.setSource(54866U);
    msg.setSourceEntity(4U);
    msg.setDestination(62822U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.3356088324501566);
    msg.setSource(31215U);
    msg.setSourceEntity(92U);
    msg.setDestination(59627U);
    msg.setDestinationEntity(202U);
    msg.duration = 61722U;

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
    msg.setTimeStamp(0.24497976825500067);
    msg.setSource(24236U);
    msg.setSourceEntity(67U);
    msg.setDestination(4414U);
    msg.setDestinationEntity(242U);
    msg.duration = 42370U;

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
    msg.setTimeStamp(0.021869189201728645);
    msg.setSource(21402U);
    msg.setSourceEntity(146U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(241U);
    msg.duration = 30631U;

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
    msg.setTimeStamp(0.1263979944315492);
    msg.setSource(6157U);
    msg.setSourceEntity(248U);
    msg.setDestination(60543U);
    msg.setDestinationEntity(84U);
    msg.enable = 11U;
    msg.mask = 2567644576U;

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
    msg.setTimeStamp(0.42160347447138424);
    msg.setSource(20258U);
    msg.setSourceEntity(187U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(201U);
    msg.enable = 80U;
    msg.mask = 2374765646U;

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
    msg.setTimeStamp(0.5367900212147448);
    msg.setSource(60146U);
    msg.setSourceEntity(233U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(225U);
    msg.enable = 62U;
    msg.mask = 4254595985U;

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
    msg.setTimeStamp(0.6232042634193599);
    msg.setSource(56551U);
    msg.setSourceEntity(147U);
    msg.setDestination(59015U);
    msg.setDestinationEntity(222U);
    msg.medium = 132U;

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
    msg.setTimeStamp(0.7797843895975141);
    msg.setSource(46865U);
    msg.setSourceEntity(227U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(233U);
    msg.medium = 129U;

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
    msg.setTimeStamp(0.07754504706702847);
    msg.setSource(52775U);
    msg.setSourceEntity(112U);
    msg.setDestination(7765U);
    msg.setDestinationEntity(5U);
    msg.medium = 78U;

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
    msg.setTimeStamp(0.5899643626013212);
    msg.setSource(22079U);
    msg.setSourceEntity(175U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.7550807239103788);
    msg.setSource(16665U);
    msg.setSourceEntity(5U);
    msg.setDestination(25020U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.9154497975400472);
    msg.setSource(9323U);
    msg.setSourceEntity(31U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.13222024877981509);
    msg.setSource(64802U);
    msg.setSourceEntity(11U);
    msg.setDestination(16109U);
    msg.setDestinationEntity(136U);
    msg.plan_id.assign("THXUZARVHQKVMGYUKJEQULAMEPFXOOMKLVZSOVCWTVKFIFPYOZSRAIKWTQSPBRODSGYHLXSXQWJKNFYBXUNUDGUYLCGCWIFIRWBNWHLTAUZPQESWRTDHBIDTHIUIAJWZFFXFYGIXNPKDKNZJTOZQBGMDMQADGZTYPLEDPEDMXHTRT");
    msg.description.assign("XKWZYKRENHWGXOTZNULPH");
    msg.vnamespace.assign("CYLMGXFZYBTYUXAHLWVAHPOTBQFMFCACZRSDUOKGSTZAAKJOSTJLPYJCDVLRMUCAWWWGFUDSLKBMEYBGQGXKWDHRNRPAFMKNSKUEVQVEERRWGSGZDWMKOTBGQAAPHC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NASFZIXHNLECKMGBEVSRVTMGRIYMGDWOTDUAFBVLFJZWRNUMSPJVQWZXJGLRNKELCSHQLPAJJZBQTUEWSTOZOEIJBWFKNFOIZPETICUMWRGAYESCACHDPNACARYYYPWPZ");
    tmp_msg_0.value.assign("HQAWNUGPLTQXCIZQQSEJZPRUAOHJTMCFFYR");
    tmp_msg_0.type = 98U;
    tmp_msg_0.access = 48U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VPFLEDWJNCVVTHUDOTEFGGPPDVQIQLLMWRFINANPHNVTOYQQKJFZFAQWMLBUFQBCVOIOWAIMSRWAJRZCNKUZEZHTLJSEHRHKYFQ");
    IMC::VehicleFormation tmp_msg_1;
    tmp_msg_1.lat = 0.26441305706329177;
    tmp_msg_1.lon = 0.43590406565082407;
    tmp_msg_1.z = 0.38249782929419884;
    tmp_msg_1.z_units = 8U;
    tmp_msg_1.speed = 0.44813887212635084;
    tmp_msg_1.speed_units = 119U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.28570228341355774;
    tmp_tmp_msg_1_0.y = 0.09447952982893182;
    tmp_tmp_msg_1_0.z = 0.46024128451755286;
    tmp_tmp_msg_1_0.t = 0.18766670597301693;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.vid = 47191U;
    tmp_tmp_msg_1_1.off_x = 0.6577054935591852;
    tmp_tmp_msg_1_1.off_y = 0.12216175788130246;
    tmp_tmp_msg_1_1.off_z = 0.6951398647370723;
    tmp_msg_1.participants.push_back(tmp_tmp_msg_1_1);
    tmp_msg_1.start_time = 0.45588298743970357;
    tmp_msg_1.custom.assign("DXPFUMIDUIWBXYZMCJCHJSYVXTOBTXFQ");
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
    msg.setTimeStamp(0.377377517903411);
    msg.setSource(58532U);
    msg.setSourceEntity(96U);
    msg.setDestination(30346U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("NDNDRLZHKLGIOXYJXXZVRCNQNVYPZDGVDWGCKLHSARIHODZYJTTUQUUHEAKQWSSENDXPEMTJHPFXYEQAKODGCMZIOPKFMAFVWBHHQCTNGMPTQGLUVLVRAGFTFXLBSFZRAUIXBFRZEPLMKKOPQXHWNTWIWYVYBLZRNAUCSBERP");
    msg.description.assign("OOECATJZNXPPUTAAEOFWNAJMYQUUXLAVBYPIFBNIBGOWSFISCRDIKKXHIQVGTSZLHETGCWBVVQFTBIPZYFVKGNXDQUMRDVSRJFPMUPKZLEWCDMIQKSFVNTSOKHZEQTXGDHTECRLVPHWUZMXLQOSKEQWSCMJFTEBONZYDMRJNELKOJSGUXLUGAWFZJGCDNUHFHHNYRJAHYXPEIIMTLBQ");
    msg.vnamespace.assign("JMLJWNGKHEECIEBTSDLPWZRKQHSOIJNPKEHFDQPORMEIXVIUAMSLRMPLGQRWQBGBBFAHPMUFIQTGJBZPOGQGMCJRNKFHIRNVTAGIAIXTLUSPGHEDDYNCXHOAPWJDMISTBLCUYWVQSYFNNKHPXSSOETVFOYVBLBODZQYUZCMYEZKVTWUZGTEZNBCEHJTUAGKSTFPFZSZCMXWOUVJLXRYZOLDDW");
    msg.start_man_id.assign("DEQGNFKNJIZIHALRKTRMHPKPYYTHGSZKSPAWYPUSLSPKDDMOROGVNBKCEGVCSFJPVPXOJWWZZTBFHNKFOLXZNXCQBPFQIUADAHMQOASIVFXYAZYFTCPQDEJNYLDLQOLBBNXWJRRZQNUIJUSVRGIMKCIJFEFQUTTRNMPZRJYRAIGWTATMWJCVQQOKGLSSVGCTYBUHUCWWHWUELLVXCUEJYEEHOFEXWDTMDXHAHOVBIDBZXBOS");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.7143626648621499;
    tmp_msg_0.speed = 0.6165659418229855;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::EntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("TSNFIJKFDCVXPBYGEXMNDMQIULKOUWMUEQPBCPBTZGEKZBGZFHPYAQTCEYWNYUXHSRUOJG");
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
    msg.setTimeStamp(0.41368383949593646);
    msg.setSource(52836U);
    msg.setSourceEntity(231U);
    msg.setDestination(3266U);
    msg.setDestinationEntity(40U);
    msg.plan_id.assign("AXAYCDWFAAZCPHBNTPQZHBTLKBCPNABYUYKQODTKKLSPJMXTBMILXXPJGEWRSXCCZLDIYDVNEUOKRGTZUVBKQVJMEHUMMZHXS");
    msg.description.assign("JXVYRZLGCYDNICWEAHUOZESHMYCJKGWFBTUDRXKGMDZWCPODSAFJTTDWSXYZGRSCRRRDOFDEXKFPIBNSUTPAAEKCZWDEHNVEWKHTNUWLETYTRXINBNVGOKSHHJ");
    msg.vnamespace.assign("GWOLWUBYVASNNILHYWLKGWVADMYTAYOBJWXMVEPQKTRSSLNDTFWFREQOCSAJSZDEFFGDXWFKCIVUWLSECULGMTBQXZUAXUZKGJKFXVLALQHXNQIJZTBWBSRYQZHFGQJMB");
    msg.start_man_id.assign("EOSVSRDEHOSDKLSTLCXUUKCIDKQZGZIACMIWJCZUXAEMHTQYFGXJLMFPIHOTKUZTQMUTMZJDPKNNWRBMTCSDOFXBHYAFDEVRVEEXWNSXAZIXBKXIEFIMPPKZHPGRGPZVAQVPRTBWYSYBQBRQEJWJMHEIQBGOGRCBGLTIADNKCNXYZHULBJWLARIDUUMNWFNQDFVZSAFWYOULSYVVPJOFYNNLGWPXOMFOLHVRBNGYYVLWTORJCUSKGPJJEHCQDA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FCOFBTSIBMDLJWERRPWCCSZHTXYIPFYQYWGGEQLEWAJRLCAYSJIISZUQOOUSZKFRKDGMXYLOTIBPYPASQRYDDGNUHNNTDHXAKSTBZOBJNMLWCUJVFLXRFCGXMCYTZOBOJEGKWZDFQKIUMAHXXVWVMERMYEUYJOSBXGPBDVRFVLJNGKLUFASPGAVQAWN");
    tmp_msg_0.dest_man.assign("KRHBFIACTPXKXJZJAGBOQXSKHIASLGTVDUAENTISYOKZDVJEFCBAFQNXNLRAWIMDXJTSPENZMQGPKFQAKPCLPJEHNDXLQMZECBZIDBJXERBQTYYLMMCBYIZOVYKOZMUWLVMNVHRYSBCGKWUZLVDHROFECPKLUSPQWGFFRDMUVIDZLWPUZWMEICUGWOBSXULWBAOTQDCIHFNRJINUUPENYYS");
    tmp_msg_0.conditions.assign("ZGEYOKNWOZJDKNVKLEACYDKZICFEPRSYAAVONMVHUDRPHUSKAIMEIDKCSXICQCUDWAWMXRRXTQTVXGHYBNLRLBJCUGFIQJMPFTERRCDOBVLNXXUWWTFT");
    msg.transitions.push_back(tmp_msg_0);
    IMC::SoundSpeed tmp_msg_1;
    tmp_msg_1.value = 0.11244552817539522;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Parameter tmp_msg_2;
    tmp_msg_2.section.assign("QCAZRIRNXDCRYSDDZHMMAOPFPTRXXRDVIPDWQKFVKHKPNCBSUKOMNMRPTCKHBFWDAMGEZEVOQYXNGQRELCFPPJJUHUKACTGNSCAMLJYJXWEFWNLCHEWOXSNBQYNUVYXGYMODIEGZSGXVUFAUOZQYWJWQAHRTMLDGEKFLVILQTBHPIABGIOQBMKYTGRRBFDVAMILQEHVUJCZIBIUJSTJLYEPZH");
    tmp_msg_2.param.assign("JCDOTEBQZOKICBBCWDHLCHCWUZEXQFMBGRUNVFGYBREJKFYKFMYTAOXMPESXRRFTTROVGIOKYKIIEXAPCQKQJCMWFSPSQPOELYUATSGVIVFTLVSVEYFH");
    tmp_msg_2.value.assign("TCJGVKGDOIMRARZOODIFYIHGLTHNYLVHPLDEYHJTFKVKJNQBPILWHZGXLGKZTBFMBSYWEDAPGOUJHPJVLAWQADDIBXUEHZQHXQMBAVUFSGLAJPPZYFEJUPTCRCARAEOPKDSCODBCHMXRPYCTWXZWXBCYZFSWKEJSUIGZVNNTXQR");
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
    msg.setTimeStamp(0.7434594976364185);
    msg.setSource(8895U);
    msg.setSourceEntity(95U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(209U);
    msg.maneuver_id.assign("ONYSGLBCMMLWUQKKWCKYSGTQQLPMTMAAHHIJYSKTODAPEVGOFFDRMWKNAGGILZFRBBAODENIBZHPKJAYUZYWANLFMPETWXXWFCQLNSSSUZJZNUCVTRVXHOJUDQILIVMDIUXTKGCHIDGFBUSKXOKJYJCEPPHGEPROBFNWMHPEHFQMWWDYTRXEJDGTPILSXTCZNUIQIVDZUXUFM");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 62409U;
    tmp_msg_0.lat = 0.033980136758682944;
    tmp_msg_0.lon = 0.8338036533213813;
    tmp_msg_0.z = 0.3028014389789304;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.7578769804839214;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.roll = 0.38049092150257025;
    tmp_msg_0.pitch = 0.4736717899335846;
    tmp_msg_0.yaw = 0.15639162898747427;
    tmp_msg_0.custom.assign("RDAASAXWCEFVYWZQRMDGUZNXPGQSUOBKS");
    msg.data.set(tmp_msg_0);
    IMC::Teleoperation tmp_msg_1;
    tmp_msg_1.custom.assign("MXWRVPBLHDNHLVSAKXZIGOTKSHUAASLZTUEYJUMQ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GpsNavData tmp_msg_2;
    tmp_msg_2.itow = 3202412073U;
    tmp_msg_2.lat = 0.8998891507020959;
    tmp_msg_2.lon = 0.9708822937225804;
    tmp_msg_2.height_ell = 0.8718775849148004;
    tmp_msg_2.height_sea = 0.6822048760721917;
    tmp_msg_2.hacc = 0.3876121118620599;
    tmp_msg_2.vacc = 0.06499060663171419;
    tmp_msg_2.vel_n = 0.7964696602525673;
    tmp_msg_2.vel_e = 0.7296514137513599;
    tmp_msg_2.vel_d = 0.4424388830738474;
    tmp_msg_2.speed = 0.3022730524819547;
    tmp_msg_2.gspeed = 0.4941244996815488;
    tmp_msg_2.heading = 0.2581391259310748;
    tmp_msg_2.sacc = 0.3673795610866961;
    tmp_msg_2.cacc = 0.9921090504254035;
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
    msg.setTimeStamp(0.420406848105918);
    msg.setSource(15032U);
    msg.setSourceEntity(249U);
    msg.setDestination(58067U);
    msg.setDestinationEntity(217U);
    msg.maneuver_id.assign("WJTXTCABKWHLEPNUEPGHZOTRXMQIEMIWAA");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 59246U;
    tmp_msg_0.lat = 0.10827031993337821;
    tmp_msg_0.lon = 0.47627813733844293;
    tmp_msg_0.z = 0.9248038420710596;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.speed = 0.4730050724815551;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.bearing = 0.8563510265802768;
    tmp_msg_0.cross_angle = 0.9823858483935081;
    tmp_msg_0.width = 0.18488708990997715;
    tmp_msg_0.length = 0.32259620757462637;
    tmp_msg_0.hstep = 0.8100199324400599;
    tmp_msg_0.coff = 154U;
    tmp_msg_0.alternation = 208U;
    tmp_msg_0.flags = 245U;
    tmp_msg_0.custom.assign("RMRZKRBAOKCTZGNTVFEKSIREOFCPPLALJINEPAWSWHEITIXJOTQICFFMHUDVWINAOLYGGDXMXFWUOHUGZDQPGAWSUFYTXSUUWPUXNHKLHPMZHZZHYRYDVWVKFBYPCEBCBJDDMDDSQS");
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
    msg.setTimeStamp(0.7856921411734497);
    msg.setSource(20294U);
    msg.setSourceEntity(90U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(47U);
    msg.maneuver_id.assign("PGQDPEEDURNGAHEBVXSCFCSYSYEJXLHHODTWCVNZVMXLBJEKCHJCBYZUSQOOWJWLXBITGTJEXVTZGFEGMMRWMCFUCAGBVHYKNWWWYEDLERIMKIAQKLRTQMTOPZRXQUYVSXBAAWFATINM");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.33309820705291826;
    tmp_msg_0.lon = 0.29190070141841995;
    tmp_msg_0.z = 0.46992051742280927;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.radius = 0.35002922590522256;
    tmp_msg_0.duration = 11406U;
    tmp_msg_0.speed = 0.7852629952433599;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.custom.assign("ZSQHPGYCXJRSAMCKDTFIWTIGSBYEMABPXCWBBIHXXTRULSGDXQNWFOFAUPUZADTHWHLAVKDPHIIKMIIZMEMNWIJNWPDZODJKMNRGMNKUFETOHUEORGLGESOCQTLWSDUSSMMGZGLHQBKKESTCSVHFJNLLTLVXQRVMNYYXYPIF");
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
    msg.setTimeStamp(0.9504120922178366);
    msg.setSource(18054U);
    msg.setSourceEntity(182U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(159U);
    msg.source_man.assign("PBBICWOOJUKKYLELWGVIDEBUR");
    msg.dest_man.assign("BHRMIOIGIEPCSQNIMFQNEYHOCKLTN");
    msg.conditions.assign("FAWEZXCPRRIZMDMFVVSEHNBPZLPWYFXBMQISPQHHKDSDXMIUJEQTTIEDTTEXLWDMRYCIAJQRPBGKUXVTDHYUOBWPHEIHOUKYUCLWIDACZEKLCQOJYFUONFGYSNCZLOTRQBAAJDGBFNGVJSXZHRQHALNFLJYNOJZCGFNUYIWVBQQPNXYW");

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
    msg.setTimeStamp(0.7559729275932139);
    msg.setSource(63210U);
    msg.setSourceEntity(155U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(239U);
    msg.source_man.assign("DFGGURYYEIWCHPUKUNELETQYTBJSCOGTIFAEXEHZULAXMSDOSKCDMWUBKNNPWHCAVNXOJLPNGVOXIATWYLEQKFBFJIMTJAK");
    msg.dest_man.assign("RBBUYUALCDOYPVLZMQVHVRDFNUOGAGIABBIBFNEMXSZGWHRECLAFQHXBWTNQNPZCIZWWESJHORMIHHZSVPCSSGUKCDVHLYWLSERETPGRJMIKEOPQMJXDXWFUUYFOKZKYXIMAUSIJUMZSMXXPKWQDMKKLAJOGFJITDANVOJCBGWFFTKJFEUNQOWXZCHPATRTZYKXJDMCYHNPIGYLFTPEVNVVOBCYHLOTLLRWQYTDQCKNSAGNBET");
    msg.conditions.assign("WJVYNYIZECTWOOKVRLGOBBE");
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("THIQRPJBDGJELUTDGPVMCGVPVGLXL");
    tmp_msg_0.x = 0.880217360858051;
    tmp_msg_0.y = 0.42268292244366057;
    tmp_msg_0.depth = 0.02589163783837789;
    tmp_msg_0.var_x = 0.7608948693918708;
    tmp_msg_0.var_y = 0.7071010636783273;
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
    msg.setTimeStamp(0.33564315238208986);
    msg.setSource(26011U);
    msg.setSourceEntity(211U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("YEJDCRCMGFCIWOPSHVXOYRSKVJFRTBNJSATVQCSLFAYFFYYXWZGMQILWKKGCEUVWNHZPUBLSODZVAGSHMDAEHHAVJEZTHUZKDIMKPPBHHNLBOQOLORYIKCGLYANLEKUKJEXRXUSUTMGRIWJVXKTMWNBBAQJJZVAXQXNMFYQPORTOPTAQUQOETPBEZCMSFFUBHNWRZSPWENWVYRXCAXYCKEFNVUDBNTIGFURWLS");
    msg.dest_man.assign("BAFQJAYRGRSMMBVWXISQINZESYVGGWCH");
    msg.conditions.assign("SUXLNYGICFUZWVPPMLEVFWWQLWAXEQREPUATUBPIQBIZKZXZHFCQOAPJNZPCTNRPZYSIURGZOLJCZMRZROJALDEVOEZXAEKKNEJUPHBMMTTPJQOXTOTYASTFHDHNHRXCEKABJVUJYCJONUMDGLHFYMGMEIJYVYTHBGAGKWVDPKLNBWWFRTICIDYNQMBLBSVHAYBSXUMXBOOGAQ");

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
    msg.setTimeStamp(0.5304140562135251);
    msg.setSource(32767U);
    msg.setSourceEntity(170U);
    msg.setDestination(16462U);
    msg.setDestinationEntity(63U);
    msg.command = 2U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HNJGSLCCAJEHXQHMNEZOIRGHYJUNLQXWEIUQLXDAZJRDYMXLJBYESCPCXBJRIVQUMRMCSUTYRFOGGBKSMXDTPNXLTMAWKOANLDKDGZJQGZLXVQLIBKQJSYKOFESAPUSVCSUFWIHRVIFYDKNE");
    tmp_msg_0.description.assign("BIPGIHKUKQYLAKULYOQMOEODWHTOPXAIDGQEUHPWCNODGGTYAAGMEDSFFOXVYBYWVMVVXZIPYHM");
    tmp_msg_0.vnamespace.assign("RONZSTXFARXHYSPGKYQALTUJKWHFRWXLHUXDTIJMWXJKIGUBQJGVAILVCKTWDJKDGJZCLDQDESBNVCKOYMMOZQXTQSPRHBLNEVUANDZMEUPHBANIECTWKYUIBYQRJLQKDPFADZMEGKONYJQNUVBVRTHEFQUCVSVSKOOFYAXWTRBCJCHMUFJVEVPNZEHQMLC");
    tmp_msg_0.start_man_id.assign("XNQYHVKMYCGZLSUJRDQFSIKGHDGNDAAVRSJFAWRISNYPBFXMJAPFLIUCUE");
    IMC::QueryEntityInfo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 243U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9838298319807516);
    msg.setSource(33383U);
    msg.setSourceEntity(162U);
    msg.setDestination(38649U);
    msg.setDestinationEntity(127U);
    msg.command = 146U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ENRBIBRFNQKRTPVZONQYMCYKTXKCQBCJGFMAYXDIOBYKDLMU");
    tmp_msg_0.description.assign("OHHPRGLNSVQDEILGTCSKZARTZNUAJBEWXUJBHWXZYWYVFVPWFKCVDACPQVHZXZARMONTBCSGXYPCQBLXROPTWHXKKSVNQHRWZZSIYGWKVBEBUODGBWWUAFVZMUVEEMFMUPABOAVJXANEEYELOLTLGRQEIMCYDUKTFIOGQDBRUHLYRALXPP");
    tmp_msg_0.vnamespace.assign("MBKDDFWGRMOWURFWWONJUKMKZBIXPSDEJATFXVTNCCFAZCMPWAOIRPCJEQWGSGHDYSQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XQYGMLBSPURMJBHVZDENEGZBKRFKHTSOGXQVMIDECZMIVVUXZTYGOMAWVKXSIXGMEBKBNETJUMRNAUZVAPLFBVPKUDNYREHCCKHCMQSNDRFYWALTJIQDQQZMNRLAPRSHWJTJHASTLDZADAYWNPIKRBIOIWGQYOJDWVQSYZIRCCLFCFXZOUTBXVXLEAIEFKFHVOGIOFRNPUNFTLCOTCYGYQWPXKJHSBQFPLWPKUZS");
    tmp_tmp_msg_0_0.value.assign("JTGHAXCYMNIKOHZHFYAVVCYNOEWBYMSLNGMFCJKUGHJOABCMRARDREZA");
    tmp_tmp_msg_0_0.type = 47U;
    tmp_tmp_msg_0_0.access = 131U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LQMELZOVBERPLSD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OZGIAZOCNGAUULXNDRJZMFNUANZVKHBPXIXXDUYVDOJLOPEGCEIYFORKQSRZGMYRDEDGDBJLZAOSBYVWPFZXMLRTBUMYXHGNBJQAOFDEFHQGIQWCUNOAQDISFQT");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.13848150517616808;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.40589886103469264;
    tmp_tmp_tmp_msg_0_1_0.z = 0.08693381992755989;
    tmp_tmp_tmp_msg_0_1_0.z_units = 122U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9634317092920521;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 13U;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.9715278418998182;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.16815608234004686;
    tmp_tmp_tmp_msg_0_1_0.polygon.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WUTAKEHAPVRFZMUQLMPCQVSQIXMFTRFTZYHQGDODTEFWZXJDNGBORFVERLOYOSNOFNYCSCGPOTKRZKSZIVCISOMIZL");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::StopManeuver tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ZINEGCSYDYHZVLGHOFCCJHNFJLEQIYGSMXNKRIMHZWVOTFXHPCJMURLGHWGTVGKXBDDODEWCLCALPMPGXP");
    tmp_tmp_msg_0_2.dest_man.assign("PJCLYQDYVCHKXUBOIPRLMWIQUEGPAQVIMHUOSPJNFSOFGNCMYIKQMPVYXKFRCROCTHNOGVHYYODLSLXOPEJHZGMQELRUZSETAWEPLJIXAXMWZLDEDNCMINABNMFKHTVQNABVWXDWGRBNGGGWEPYUFHVRJQSQYZCDAUTRLTSYTKUUM");
    tmp_tmp_msg_0_2.conditions.assign("OMEJKWUZZLJWIHNTXDLAHRPRFYCLIGDLRYBVZQJMKQWKGTZTTLSXKXVNSNQEQXWHKTHMQICFMADXOZLCBMOGCFOWUQSADAYSDVHZIDEZYJHXCEZUSHBYDAYKJNYIABOQFXFCIPPCRMZATWTECCMVSBETPKUBJGQFGFBUAXJEVUHUFBWGKBLGNG");
    IMC::TeleoperationDone tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::AcousticRange tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.address = 79U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.4590142424696644);
    msg.setSource(31778U);
    msg.setSourceEntity(26U);
    msg.setDestination(11304U);
    msg.setDestinationEntity(34U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DTVOPMWVVVOOICRAGPXPCFBJTEDGCTLRCCZFKLAGHLNCLFESJUYJGQFGXISNFIHJYCCTQOEQRYXAEDRSZNZPKBYKTEZSNNBPQHIHHMIRINJWBVUMXGOXNZUXWELYTSZHKKAVZTDYHPMPSYHBMEVKOJTQWKVLLXKDDRQGJOIPL");
    tmp_msg_0.description.assign("NJVLQWSVMQYZUEVNGHUFFSEKBMOGRGRDXWDKQEQGIMHTKYRTPTWWQRCNLPOFJJBEOLGDKMNCMWAJLTCMVATECFNAYTBFPCEXYBSVQXSLIPJSUSRKZMXJLBHOZFEDIBGHVFGRQQCPRZOKUWUQSNXWAWAMUSBGFTPUPZCPIY");
    tmp_msg_0.vnamespace.assign("IYLJGYQTZEWAMDDWUHYGDECQZUAQXHVIGNBGVERCPHZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NSSTAFWRCDMWXYAEKMCQMWGEHDYJPLNKZDWVXNESUIQPXISIXILEXOIGHMORUWYNVCLHZLSXAOHLIUNPHKAAHQBEYZYQRVQLKPGRJHFIDZCZTWKNDHASZUOCMOFPDAOVTZYAPSYGBHOCTGNTVUCUZCFSKKUUDJQPJLBCBJEX");
    tmp_tmp_msg_0_0.value.assign("FAHWECFOLHYWIBDVUNOPDVFOHYXMTDALHAFLSVKHDBKHHUTBOHCLIIATBFZEEJYWMRPXGTKGJNWTRDJQKAXMTVURMOUSRPSVSBGISQQUWDJKN");
    tmp_tmp_msg_0_0.type = 63U;
    tmp_tmp_msg_0_0.access = 112U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PVPHQTGCYYZZGBIXHTLMUCXTWACMKEJHFEDWIOXVQDUYKJZRBIZMLIANDWXDNHNRGOWBSAIAXSVKQQOAPFZNVFIPTWPYYECVSNDLEQUDZFSUKOGJFRKQXTHNKOXOPDJVXVWVWQBAHABFPSHCMUFZSPHGUNRROLKPGOWEKPSQMXVOYFIBJUWZNHGMRTOEGYCBEMQAEQLD");
    IMC::WaterVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 192U;
    tmp_tmp_msg_0_1.x = 0.639369759326883;
    tmp_tmp_msg_0_1.y = 0.26110810060397904;
    tmp_tmp_msg_0_1.z = 0.42512401098072905;
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
    msg.setTimeStamp(0.8137133699073914);
    msg.setSource(60580U);
    msg.setSourceEntity(76U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(126U);
    msg.state = 138U;
    msg.plan_id.assign("EIGNFAEOBRSGTUURDAIQQXBPYFKISNKJKWYPJDIDXPEHDLGQRFWZCWUYSTRPDPYYOVZSHMUDUQCDJSVMAJZFUGZKDZVMBBBLNMYLHGKFNXDFEGJOBVVEMJHWYLOZNZOYLZHWWVIOKQMOURSRFVLDFVSBUHLJAGTQTHIAJZCUTQBSI");
    msg.comm_level = 207U;

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
    msg.setTimeStamp(0.12044925809017415);
    msg.setSource(40587U);
    msg.setSourceEntity(215U);
    msg.setDestination(37124U);
    msg.setDestinationEntity(98U);
    msg.state = 33U;
    msg.plan_id.assign("SOVDPXVKSAWKTDPQKTRULFFEGENNEXVLJFYFYPVSKBGCWFUQWNNUQNDCYUNXNCOYGSORZCHTBTJMFEODTAOCXTDYBIVVIVCCWWYJRZGIIAXQXAMSPKLNTJUHLGZRIJEMPAACOZUZYPKQFRLFIHPGZRWRDLHCLLHKDMZMSXHAGSSTXEHRUGPLWMM");
    msg.comm_level = 184U;

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
    msg.setTimeStamp(0.298120635587793);
    msg.setSource(25655U);
    msg.setSourceEntity(253U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(90U);
    msg.state = 124U;
    msg.plan_id.assign("XSZTRDVFDDARFSQFUHYUTUOUHMMIKGPGFLVZEBWXBNGXIIEGVNTZYEKRAYQGOCSUKKHGIGPNPGJVDGZCPNZPZCIRAHHPVZQATIFPCFJKLRWONNUDOQXWNEHVWOCEAHLLWQXCQAEXDOCXIUQWSRAWGTIXBHRWJFFMSXDDFRDZJAMYVHESFACJVZPNHBTJDWRVUJIWSBYQJTOUKQUYCBLQOR");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.8048850583078327);
    msg.setSource(54472U);
    msg.setSourceEntity(233U);
    msg.setDestination(51834U);
    msg.setDestinationEntity(40U);
    msg.type = 13U;
    msg.op = 205U;
    msg.request_id = 23834U;
    msg.plan_id.assign("TGVPKGNJDYEWWTLEMCAXNUIZBXHKSRHVNIXVHINFZFZDYLTKLQCCAPSRGCIYRNUOAOVEKGJHPWTUBULZQAMQJRTDXEVXITNLEDEAJKFKSZORPOVASYSXBXOTIHYBNZQZGYZGBCIPSENOGOBWSSREWJMYJHGQMCQWRIMEP");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.8737119594162731;
    tmp_msg_0.reason = 67U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VOMJXQCRIPZYNTFXIQBMQPZEOWCOMHLVQMESOPUFEHLYNIUZDDAUKUSNYJVJGQSTGDQBBXZGUGVDHAHSXKPILFZOECILIPWVAKWUFRVHFSUJJBRKAYWDWMSYYMBXDHWHTCOTEJRYWQFSNZBVHGLJLNPNXYPWCGRPCX");

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
    msg.setTimeStamp(0.3269021305463128);
    msg.setSource(46390U);
    msg.setSourceEntity(229U);
    msg.setDestination(40141U);
    msg.setDestinationEntity(202U);
    msg.type = 86U;
    msg.op = 146U;
    msg.request_id = 23796U;
    msg.plan_id.assign("TWDWMPRWMJAZIDLRMQOYWHULXVJUOTZIJEVHOODKHSNNLOJZFY");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 8913U;
    tmp_msg_0.duration = 1248U;
    tmp_msg_0.speed = 0.2952412961240487;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.x = 0.848618247590086;
    tmp_msg_0.y = 0.3571432114557115;
    tmp_msg_0.z = 0.384224318620888;
    tmp_msg_0.z_units = 113U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UKEZMXNJHRYDNVBCQOALYBFKMQTOLKMHIFZSARETVSKNUEIOTAYXAQGPGQBHPIISATZZSPGXRDEJILTQWPYCUWUFBTJDYGGBCJKFUXMBJYNPHDVZLWEWWSW");

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
    msg.setTimeStamp(0.1032952025467534);
    msg.setSource(3832U);
    msg.setSourceEntity(98U);
    msg.setDestination(8312U);
    msg.setDestinationEntity(185U);
    msg.type = 3U;
    msg.op = 181U;
    msg.request_id = 21661U;
    msg.plan_id.assign("RTQEFVRWRWJIBJIDMDGNZOALWTYEKTCKSIKQXLFFNVPWUDXEGBQEAPQGRUBYZPJLTASKHEKJCNYZOCWFIZEQKHVASDLTQXJTHEPYSSPFOWUONKLXVIHZJFSGQXOLLPBRVGCDICMMPCVDWWFKXKWBPYGVRVNFMQHVUXAPAAUXYXUICDLWANAVCOLRZSSYGMOBHQBBLGPMSXYTBMEIJUJSRTKUFQOGNATJIRUMNCDFTDZ");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 80U;
    tmp_msg_0.op = 192U;
    tmp_msg_0.plan_id.assign("TGPDRUUUWBWONCPQPXLIPCCGWAXOZNDGWIXNPYJJSCZOIEMLABMAZLUBRMYMRSSDLHVQXVPWSNKOLGOSHSZJEZHFM");
    tmp_msg_0.params.assign("BPJSXGPYIXWJMFVOPRAHEKHAYIUZBOHHLPNDEYIEWFXMCVGRNILYHYQQQZPSTYQCNCCMLGLEVDUTSSQGQTAEQMIZQDRVERBQTPYUNARAGRDAICJUZWIWPRJMAFILTMJXNNFANODJCDVFEKOGLWGKGPJHKCVEKJOYBUSUOQHBWYFNGVZNLKTKSBBO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XNPWKHHZOIEFXPJRIVGGYRSYDXQOBJUFXOVMGTERIBWRHENGLPDUVLTBVQPCOCMRLEATUCGSIZETHFDCVKDDHORMSBBRIFIDZYDAHZHXBBUUNLIJVQCLJKSHDWTBXEKOXYRLXNCROAKIZXGCS");

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
    msg.setTimeStamp(0.3380791084086596);
    msg.setSource(3223U);
    msg.setSourceEntity(146U);
    msg.setDestination(63615U);
    msg.setDestinationEntity(136U);
    msg.plan_count = 31488U;
    msg.plan_size = 2073702894U;
    msg.change_time = 0.26727365735438435;
    msg.change_sid = 42717U;
    msg.change_sname.assign("TPDJSOSZILCXBEINEGHNVKTUHAOLECJSYLMGCLXRIZMWBKLJPTDAFGQHJQQBACVGBJECXALAPKAJZXOXLDPKDUHKDAWOYKIVTRSYQNTFTENYWBPBFOSFMPTLXYHGIIWCWCLYOTWVRRUWKCXXSZURQVYZZYMZVWDQIHRVXAFZBTERQYRGUPEYEUDGBFRJHW");
    const char tmp_msg_0[] = {110, 83, -92, -65, -15, -46, -78, -53, -79, 41, 43, -65, -66, -126, -104, 68, -110, -84, 110, -42, -89, 109, 21, -123, -12, -21, -80, -109, -20, 115, -67, -3, -91, -83, -99, -52, 101, -127, 75, 107, -5, 8, -57, 3, -64, -65, -51, 66, 50, 24, 106, -97, 14, 69, -87, 82, -107, -89, 53, 17, 24, -10, -111, -42, 69, 23, -87, 98, -66, -41, -48, -6, -114, 77, -1, -116, 80, -5, 89, -75, -51, -116, 110, 52, -111, 120, -124, -112, 76, 9, 23, -33, -122, 51, 29, 23, -70, 99, -56, 52, 114, 43, 12, -79, 33, 121, -68, 121, 120, -32, -7, 73, -11, 31, -37, 32, -77, 45, 69, -99, 109, -110, -92, -69, 40, 56, 13, -128, 45, 35, 122, 52, 123, 68, 14, 96, -116, -44, 103, 9, 104, -36, -85, -113, -64, -68, -108, -104, -6, 25, 46, -127, 91, -28, 97, -33, -125, 120, 60, -108, -84, 19, -108, 57, -63, -91, -69, -34, 113, 86, 16, 16, -71, -121, 123, -51, 4, 41, 118, 2, 51, 51, 58, 50, 105, -10, 100, 56, -120, -126, -95, 22, -105, 87, 26, -124, 115, 86, 69, -46, -21, -48, 64, -24, -81, 107, -99, -115, -72, 43, -49, 2, 106, -108, -68, -79, 50, 121, 111, -51, 14, -48, -7, -27, -55};
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
    msg.setTimeStamp(0.8312989154060787);
    msg.setSource(10461U);
    msg.setSourceEntity(19U);
    msg.setDestination(23760U);
    msg.setDestinationEntity(166U);
    msg.plan_count = 7093U;
    msg.plan_size = 3692481841U;
    msg.change_time = 0.9525130106505589;
    msg.change_sid = 6073U;
    msg.change_sname.assign("EAJFGYEBHKXMUIWMWGOXYGYIRJWPXZNVNHUQRWKKBZOWJKXBSNCEDVYLNVDRPBZMGTOJNGTVAWOGVRHFKUTDZAHKRWPIIZDPEFHCDUQWDBHLCIXFSXHCTVOSBPALTZXESVDIUTPOSAZQAIDRQC");
    const char tmp_msg_0[] = {81, 41, 47, -46, -3, -42, 20, 92, -97, 108, -121, 61, -48, -49, -123, -3, 38, -109, 81, 9, -49, -106, 4, 101, -45, -15, -93, -40, 109, -80, 61, -126, -11, 13, -32, 29, 11, -44, -87, 109, 68, -7, 109, 93, -44, -37, 78, 62, -65, 16, -8};
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
    msg.setTimeStamp(0.9595336049753931);
    msg.setSource(41446U);
    msg.setSourceEntity(159U);
    msg.setDestination(33018U);
    msg.setDestinationEntity(130U);
    msg.plan_count = 47550U;
    msg.plan_size = 3745952488U;
    msg.change_time = 0.236649681445944;
    msg.change_sid = 32481U;
    msg.change_sname.assign("EFNWJPSXMNPSMABVBDFZAYUGSQDYADPFCOGSRIHJFRHVHIYDCCHRXKVDNTTUEIQPSNYTWVLDCMNRUDAONKTMEYXPLIGXNQTCNRLBMO");
    const char tmp_msg_0[] = {48, -70, -29, -23, -17, 12, -17, -93, 98, 13, 52, -34, -52, 44, 17, -100, 115, -103, 102, 57, -65, -50, -78, 125, 7, 38, -26, 73, 59, -7, -44, -94, 58, 93, -28, -82, -102, 7, 27, 103, 86, -83, -31, 17, 98, -35, 11, -64, 32, -43, -89, 28, -41, 55, -58, 114, -120, 86, -98, 2, -106, -123, 74, -13, -85, 117, 6, 112, -50, -14, 123, -117, 41, -64, -122, -13, -124, 7, -6, 74, 116, 110, -82, -112, -104, -47, 86, -83, -52, 102, -61, 98, 70, 102, 117, 84, -97, -19, -113, 42, 110, -26, -79, 40, -91, -4, 31, 123, -50, -26, -33, -11, -65, -1, 55, -34, 31, -87, 108, -4, -16, 39, 19, 101, -69, 105, -55, 100, 104, 101, 111, 117, -57, -61, 120, 16, 24, -96, -53, -99, -30, -95, -109, 99, 11, 73, 1, -9, -74, -102, -84, -128, -14, -99, -111, 75, -35, -83, 5, -15, 26, 54, 2, -59, 37, 72, -16, -30, -26, 79, -39, 100, -31, -44, 81, 120, 97, -78, -32, -69, -68, 5, 27, -98, 87, -54, -90, 101, -84, -71, -123, 21, -120, 58, 43, -11, -35, 92, 67, -128, 106, 26, -125, -122, 117, 64, -65, 82, -14, -13, -34, -74, -79, -19, 102, 59, 100, -109, -48, 33, 77, 97, 104, 12, 87, 116, -64, 100, 104, -59, -73, -25, 33, -42, -93, -56, -122, 108, 85, -37, 102, 104, 17, 120, -123, -79, -76, -10, -71, -30, 14};
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
    msg.setTimeStamp(0.4805089997952873);
    msg.setSource(39441U);
    msg.setSourceEntity(42U);
    msg.setDestination(24620U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("ZDJTCXTLBLRIJADMDWQKSQAVIKFVKIBGOSKGTFMRJVTWCVQURQHSMURXXFMYJADBUIAVFLKAWKFIG");
    msg.plan_size = 50411U;
    msg.change_time = 0.9512042968597939;
    msg.change_sid = 17036U;
    msg.change_sname.assign("BCLZTIUMUBHLPQCDFAZHIJADEUOFDSBVOSNQVHIXORKRVMZAKRFHRFDEGRUPDIWFZOXASVMJNFNNDZMXGYJPNEVGTGKPBMSJJFIRLPEWFJQJLFAKQUXGDDTWSKORIGEBTGXMSVCBAYITUHCAVXMRLQRUPWHSPSTYXMHZUOVEKERHBNHTQIUTKPIHWQLZYXQLWVKLZCTLUANCNINWOVY");
    const char tmp_msg_0[] = {116, -73, 19, -24, -6, 12, -96, -76, -73, -49, -48, 3, 53, 58, -122, 108, -94, -90, -63, -24, -16, 23, -111, 36, -94, 88, 124, -60, 47, -9, 78, 19, -12, 11, 20, 93, -127, 67, 24, -70, 96, 62, -22, -34, -26, 102, 4, -36, 80, -50, -117, 66, -65, 56, 82, -103, 65, 26, 22, -86};
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
    msg.setTimeStamp(0.40948352551406675);
    msg.setSource(50848U);
    msg.setSourceEntity(62U);
    msg.setDestination(43433U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("KFNLFEPKBDPRPQNXYDWPVHZGFBWMUOVFKAKJTTBZPRQDDVSJSYWZXVWNYXPRTIQCUEAMABTUYACNPREVGGIBHKISMVZMGHDXJELJOXRS");
    msg.plan_size = 42146U;
    msg.change_time = 0.03609882608401249;
    msg.change_sid = 54639U;
    msg.change_sname.assign("WWBYDMHRKOKIVKSASONDLUSQKXSGBWNUMLEJWXIIOOVWYIQYCQGGEJBLXDZUXVKPLTXKXSPNVBOJVQNCJMAXCUWGAJMCHJSAUHCXINRFZHRRLTMFETEPEWFVLORYNTHAASKIJFUNYBUDKPTFBXYDWCTPJUFCMUIOVEAQQMXGPKLIBPLBINRITQDQDYPTARBMUFVCWYROFAFGZHZZJDEFORMHHVKGTGYRNSDNLZGVZZA");
    const char tmp_msg_0[] = {-126, 56, 51, 4, 9, 110, -18, 3, 116, -123, 53, 75, 36, -48, 43, 73, 14, -124, -106, 57, 65, 80, 106, -23, 49, 90, 92, -114, -7, 122, -16, -87, 86, 1, 36, -16, 64, 50, -1, 118, -98, 32, -68, 55, 35, -5, -19, 55, -91, -11, 85, -68, 75, 125, 22, 81, -57, -51, -89, -75, 96, -57, 123, -107, -15, 83, -66, 91, 70, -8, 52, -87, 100, -55, 105, 95, 99, -114, -104, 74, 49, 80, -92, 53, -78, -31, 74, 105, 23, 61, 125, -43, 32, -44, -122, 100, 97, 9, 123, -82, -84, -127, -3, 120, -122, 44, -57, 17, -53, 95, -76, 15, 4, -127, 40, 89, -79, 9, 84, -14, 49, 109, -88, 106, -5, -24, -78, -35, -92, 99, 58, -41, 89, 80, 6, -23, 62, -45, -7, -88, 19, -70, -116, -89, 21, 115, -57, 88, -93, -31, 14, -38, -41, 4, 100, -8, -54, -103, -104, 101, 109, -15, 76, -27, 70, 76, 60, -74, 36, 113, 73, -24, -82, 0, 98, -115, -122, 17, 31, -94, 30, -13, -87, -98, 13, 15, 43, -22, 51, -14, 30, 18, -127, -94, -115, 80, 16, -5, 103, -19, -6, 125, 120, -107, -34, 40, -121, -121, -103, -88, 33, 27, -92, 103, -122, -79, 32, 40, 64, 69, 39, 2, 65, -30, 62, -39, -122, -75, 124, 105, -113, 37, -53, 39, 102, 97, -60, 123, -124, -29, -115};
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
    msg.setTimeStamp(0.31062103663328866);
    msg.setSource(34442U);
    msg.setSourceEntity(236U);
    msg.setDestination(52357U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("WZEHZVJIFSEPSXKPGQTXDJZRFCAOIGGGMBDQFCYMOIPSXQTGXDZAJWFQRDZCVSPQAEDPDXLWXVTUEMLAQ");
    msg.plan_size = 14027U;
    msg.change_time = 0.7666428517045975;
    msg.change_sid = 9197U;
    msg.change_sname.assign("PDPRDUHCTTLZMTGWLMLXIWVKQOQRURRGSSIEXMUOWBEDVKPAD");
    const char tmp_msg_0[] = {44, -98, -48, 66, 58, 32, 31, 9, 31, 99, 45, -124, -68, -98, 18, 51, 85, -60, -73, -29, 109, -38, -30, -83, 32, 4, 125, 126, 84, -35, 18, 45, 70, -20, -48, -90, -75, 99, -66, -98, 84, -23, -9, -56, 48, 79, 118, 4, 3, 1, -89, 100, -109, 109, 123, 58, -7, -39, -6, -122, 57, -61, 20, -125, 126, 72, 18, -36, -2, 119, -69, -117, 75, 36, 33, -28, -19};
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
    msg.setTimeStamp(0.9539268042708903);
    msg.setSource(35307U);
    msg.setSourceEntity(16U);
    msg.setDestination(60384U);
    msg.setDestinationEntity(143U);
    msg.type = 175U;
    msg.op = 103U;
    msg.request_id = 29894U;
    msg.plan_id.assign("ZWCVAAGRFJQGUATOUCFJRJVXDOAFLSIRXSCMIMHVLNCXKPEKWRMQCHQVOVBMSDIOXMPDBQKWPDIYDZDOXESBCMTTXKFSULRPXFIMEAYEZXQEOYDYWNHVFRZXEUIBMNULWDASZFUTCUVGIHIAGCKWGCSEAOTXJSWLTBNPPFWPRUHESWLZGGBTQYQEHN");
    msg.flags = 23829U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 144U;
    tmp_msg_0.value = 0.48080768109457717;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXRSKEKYTZBPUTXWXFBNJLXURDDLNGRCHEQSDLNHNAWXYLQDXYSOHKGRUPIEKTAIJHQFOVVXTAECDWMWJZYMPCSXGBOVMHZOAUSGMFNGQJVXFURYIPDUZQPHJJXVQLJWRGKBFRPDOSKKOCTWOIUEYLFEOKIZPFDVLACFTPSWRQAMVMCPUELWVISZLCNLSGNVDKMBRJTZBIYFYAMJGHPNMA");

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
    msg.setTimeStamp(0.2766630110484023);
    msg.setSource(6263U);
    msg.setSourceEntity(29U);
    msg.setDestination(7629U);
    msg.setDestinationEntity(184U);
    msg.type = 159U;
    msg.op = 13U;
    msg.request_id = 44127U;
    msg.plan_id.assign("RQJPOBMFUFQDYFFJOINMKVETUGWFAJSNNZVNBZKIYOZHPDQWECRHWEBCHGKIHPLKOWOPYGXTXSRQUCOXYVALVTEDNMLZNEXWXAWMTXRQDWRPGVGBUFXYJSUSUMHHOTAKDLFCRXKZQRHKSCRJKCSCNZYJDMGIGLKWSA");
    msg.flags = 37048U;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.43208528789568335;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GCWSIRMIYLILHVUFHPKPBZWMJRTQMXQJOIYVFJEHBVXYKWFCEARCBFXNTDPGGMJZAKVQJRATFOKSVOHXDEBAZBQIFTSSXUBPJDONJUGPEWUYHIKTAFNFLODOAYZLABDF");

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
    msg.setTimeStamp(0.2708397316052148);
    msg.setSource(64925U);
    msg.setSourceEntity(60U);
    msg.setDestination(30855U);
    msg.setDestinationEntity(35U);
    msg.type = 32U;
    msg.op = 140U;
    msg.request_id = 39240U;
    msg.plan_id.assign("DITDYFIHNGODPMABZXPKQVANDZUSPASYKCBNHREOOCBPHGWSZBKCEEQZJLHXYQVNBZZUECWTIQUNEKNMWMEOZHFYNGKSCEUPLMVJRHXLIFVXTWVEHKUANRDETDTDGUFMJNXZCDSATLDFSXIOOVWDJBCXJQJEUWMKGOHIGYLSXOBIWSNFLUAMPQUXJRTURIKMRISVWQYMBTAZJGCPPALRORSFYZHWTRKYXFIGLGCQHBALCQYFOFBRAM");
    msg.flags = 38521U;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 218U;
    tmp_msg_0.htime = 0.30187311393380134;
    tmp_msg_0.context.assign("DCRSZOYNQIFRWYJVXKHJLEQXAYVQRHQLNDIZPHPVAJPXGTLLRZIWHWVEPMNDOOLMUAINOFPPYDBQVJSYMELDEDUUZIAFKEZGBZKFKMSOWIJWGEUXDOPCVSRBSDRDBFTUURCATOYJHQJCMLXCSUNYXBJULFPTQNRJIGOEHUCQIMEFTGMFINNN");
    tmp_msg_0.text.assign("YJFDNKDUSOTXHNRXFAZPHSNGFXMZTJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XCSIONWSGUFFMDOOIMURYLKKTKVALOYKYORMEDZTPCSPYEDBCIBTNJHDTBOFZVLWVAZKXSGXEYKTNHBARKILWDQBTVZBCVPMMIFYGQZRLGSRDLAVGJAAWQDNUMZYTCQFWPGDXRWDHVEJFQYRJWNHEJSWNLHZXRXEELDWCUCIEOKCMTRPQOAX");

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
    msg.setTimeStamp(0.46528847003932006);
    msg.setSource(16110U);
    msg.setSourceEntity(68U);
    msg.setDestination(33775U);
    msg.setDestinationEntity(14U);
    msg.state = 59U;
    msg.plan_id.assign("ENXVXQOVDGRSRZHYYGMSUFREBTBBGHRWVDZZDGVSKKEUJJFQHAZWPIMAHLAXYKJJSQQMBLLQSOZYSLAJUPTLMNLXYBLNABLVTGEPDNOBWCMTAXFHOINIVFWURQHFQECBUTOYXWSJVAPQWPUKFUGAYTGEYJOPHVXLOJPMXTNFWVHICWAUIOWMFWDMICCPECBZJDCKYFTMGNVPHDSTZGCKSKRRYNIIQDDFIIRXOUKCMBTKZZQHN");
    msg.plan_eta = 1636852668;
    msg.plan_progress = 0.7226609553220951;
    msg.man_id.assign("KQMMISNMMAPROVZEBKAKTYCOYGMFPLAPZNQUWHZGQSBTQZZVIEVEULVRNOIYUCPQHNLYKUGJATGHWEPXSRUIKJUNGMLXJQHPIFJJINAGSGHKDFGPRDAPKCBPNMFFVTLZEOUKIYDGEZOOCJNLEBYWXDXBRCTMLBVRIJWZRYISOPGYVFFANIDBDZXSWMHRWJAWWKHTU");
    msg.man_type = 23482U;
    msg.man_eta = 1396459498;
    msg.last_outcome = 107U;

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
    msg.setTimeStamp(0.9095352256896078);
    msg.setSource(13509U);
    msg.setSourceEntity(91U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(217U);
    msg.state = 75U;
    msg.plan_id.assign("EDOTDRPPCVMWKPVCLZIAUWRSTXSUIVBRZPDQKRPRFSMFGQWYMFHHKYXHHQKTBDXCZSCEDSRZNQBYGVOYFLLTWFGPNIHLIHCLIFJIQJZSLBDWZSFMGOHDJYQSAYJEPWHZQQYWNETUVXENEWNBKEVVHX");
    msg.plan_eta = -660164964;
    msg.plan_progress = 0.4577064285408976;
    msg.man_id.assign("PQUAMJQUXZQAMHDNKKTGHLYHRBJZDVFLDZUROAGAZSYJIUEDXPUOBYDLODSVZOUKLWGOBYHZXQAZIRDWQFJGLNWGCXOETWIJOSGSHMNXCPPTCKLBIDBJKWDKPUOPWIBZIQBFRFWHLFHCYMOTIVFPARXXWKSJYNMLZPHEDVOCKTCQEGPCNXYGYFQKSGBTMWTJAHHSIAVTBATEEPGRRMUCNCFQVWYVT");
    msg.man_type = 26310U;
    msg.man_eta = 2094778722;
    msg.last_outcome = 131U;

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
    msg.setTimeStamp(0.28772835851807455);
    msg.setSource(14403U);
    msg.setSourceEntity(39U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(230U);
    msg.state = 197U;
    msg.plan_id.assign("DBUUTSQZCUZHMAUEBGYWBEJIJMHGNEDTJFRKWEBBRHFFCYDAPXVUEQCGCIDSOXLHAIAPYMWLHFEOSEXYSCUYVPHDKOUT");
    msg.plan_eta = -326017036;
    msg.plan_progress = 0.22746328661982584;
    msg.man_id.assign("VCGLSCELOAGWHZIBBCNJVYBWTXTGKKHVXZOEKQURAXIFSUVWNIEVVLCKXPAFJWABSMGNGHPLEQUTCJNHHSKTHYSWIRXZOQQFJANRUJ");
    msg.man_type = 34176U;
    msg.man_eta = 645219903;
    msg.last_outcome = 46U;

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
    msg.setTimeStamp(0.674948477861908);
    msg.setSource(49333U);
    msg.setSourceEntity(238U);
    msg.setDestination(52626U);
    msg.setDestinationEntity(190U);
    msg.name.assign("SFUUBQPPNNJOVSQ");
    msg.value.assign("PYWINBEXWNOLBEQOPECILKSTKHWOWIZSTRJPASADIHEGXQCIKSMEEWRBFULHHIWTTPUBYBFZUMMFCRYBGURVODHTGNLKIXCZGSSQVZNFVLMEUBTWJYYVBQECDXYWVFYHLDMAZJXVTQKCCLNAXKSRANAOIUMGKQMCOYALPAJZGGQFAFHOJWQVXINRPJZNUVEMPZRWETGUGPRH");
    msg.type = 59U;
    msg.access = 206U;

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
    msg.setTimeStamp(0.1703111976561077);
    msg.setSource(43564U);
    msg.setSourceEntity(156U);
    msg.setDestination(61523U);
    msg.setDestinationEntity(70U);
    msg.name.assign("CXJQHCTTIMKLBMKXQGYMQADWSGOTOFOLJBPDTUOVYMBEPCYWQPAAGPQKHPRRJEYMSTWILBWWKNUXRZECVBLQGKFSTJZGCGQKZCZPODHJNOOAUSZWWFHLILPRZACFBXYDUXFQMMVCMKTVGMVOLYIXVJYANPSDHBSACRMRZFKWJJNDNEEXVUFSUNRSKLJTNGGUDUGRHQBRBESQZEWNUHXRIHUXZEIE");
    msg.value.assign("VZVSBKWYGWMGXKNFXWPCOPLJAYESPKDTEEFXWLXUTYEWGCFGNSKUXRTDJBBNOKLGTXYHSCWDYITVDRBZLKQFDMGPCCUVBWRBFEWRCMFICQVLIGTFSDYCUJKOYALEETZMDEUUBAZHRQHQJHRHCXAZTWXXSHMUATVDTOISQPJZQAMJNMJZLFHPHSVIVBKIQAUYINLFWBNRYPKZ");
    msg.type = 251U;
    msg.access = 103U;

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
    msg.setTimeStamp(0.5953511058691486);
    msg.setSource(30318U);
    msg.setSourceEntity(60U);
    msg.setDestination(33291U);
    msg.setDestinationEntity(50U);
    msg.name.assign("HXADUVPZPGFJIIJTWOLYDSQJPUOXLSQLVEFXYQZBWJDCETEUDPBTRIMJUVRNXIBAZQBLKLHQPXIDWTDCSWYCYKXRSRHTDFBFISGNFTQKMAEGUCSDZXLKASWCGTNFYRUNBVVTAJMLFZBKXGUUIIKCPRMNHSYTLHEZDKPEBYE");
    msg.value.assign("QMMNBSMPCXFXYOVODJEJGDKZQLXCFSLRQVSZFSSKGVMWNMDVYWUUOUUAAQLDGQXFKOATBSKLPVBJUQLIIZEIUWSDEPTHTFZPKPFNMPMCGMCLKZRTCEBSWGDUOCQGWGIHWGHCAHWRLJHCCEBQEDB");
    msg.type = 174U;
    msg.access = 1U;

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
    msg.setTimeStamp(0.6965483709762458);
    msg.setSource(18714U);
    msg.setSourceEntity(83U);
    msg.setDestination(5054U);
    msg.setDestinationEntity(107U);
    msg.cmd = 167U;
    msg.op = 35U;
    msg.plan_id.assign("VSNLTLFMFYIHVGPWYLDDAMSCHUOIWMTHRSNQOKZSSPPMUXQAKURMIUZRGRCALVALWUUBHPYIOGZGLKZJLAFNMYQIXNQXNJBKESLQISKSDSJOGJPGQYAEHQJX");
    msg.params.assign("PUDAQDQPLGKGJPQFCBCNSWNYZUGYOGKUWAGRFJIXTIGTSVLPAPFWLEQQEKVYDTGTIRSLQQCFUARKVBTTCXPEBHBLBSTJXOQJDZJYJFWMCWPBOVZBOKGRVXNRPRNLAPOPHDINTUDNKZHRXLUWSKNJFZIQCMCCEXBOLFRHHNAIESNUMIOTFIWJHBMSMMTDZZYMFIXENA");

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
    msg.setTimeStamp(0.9701363940905678);
    msg.setSource(40972U);
    msg.setSourceEntity(97U);
    msg.setDestination(3761U);
    msg.setDestinationEntity(233U);
    msg.cmd = 109U;
    msg.op = 71U;
    msg.plan_id.assign("BOJPAWFUGJRIZBKJPOPIJNORXOONZTONKRNVLWZZLYCTHCLVIHPPGDUWQDWFHEWIEBLTUUUASDNXJCSGMWAFKMBDQFKRZXLQLRTMHPHCOXAPVHXZBZGVBXFNSGCVCSSKJMRRTSISFQMNIPQAHCLYDKITIJKZVUENJMYAYVNQEMCESMECUYTHAYDWHBGDUIUQMIWEGSFPQYYFAVSZVRRE");
    msg.params.assign("THLVWDVLXGPTCZQKEFAJOHOKEUMZEUDIVQMCOLBWYULBDKMGYTPAYKLRTNUWMTIINQXNKDMVXRMOKBURHBBHAPIWOBFGBNWRMELIFZEFZEZSFXUJWJFHFSDESGLPXYFRSGNGASCICACPNRAOQHROJXCCXHGYQZTDVJZQGADPPPZJTNDC");

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
    msg.setTimeStamp(0.2744133845515623);
    msg.setSource(49256U);
    msg.setSourceEntity(203U);
    msg.setDestination(6759U);
    msg.setDestinationEntity(36U);
    msg.cmd = 17U;
    msg.op = 252U;
    msg.plan_id.assign("IYBJLBVYNGSDASTFEAVUKECAIPZIJZYLDHHWVFRLRPRVYBKDQNRGXYTUERSSKMXMKEJPXMAQOJSCQNDVETIHCZQMOQPQAFMRBROWVSIANCZFQFTIDFUIJFKJHVEQTBLBXUFDGYNLWPKVPVKZOJCCPEXPCMXONZFUTNIDWOBGZNHZKXIOWODZUNGTCWULSCNHWEJHMSCAUVGAUGGLHTLGDEBABKHPSHUMLXFAWOMRJQXWYDTRSJEPBOIT");
    msg.params.assign("RJGQJBPVYUYWGMXMIUCJJGZHWKGIHTAMKCZBTATXMVQQXSUTLLWGVPZOIYYOJMSLDWT");

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
    msg.setTimeStamp(0.3143330516132036);
    msg.setSource(56135U);
    msg.setSourceEntity(242U);
    msg.setDestination(24140U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.49859987156068897;
    msg.lon = 0.8165936030328901;
    msg.depth = 0.45775883947274665;
    msg.roll = 0.23728518639405094;
    msg.pitch = 0.13745082858318713;
    msg.yaw = 0.44385443770747135;
    msg.rcp_time = 0.7147203442329185;
    msg.sid.assign("HSGZGATTOHFVFCOCNRVKKDZERIJLTGXGPERMUYSKLYCNASWQAPJKRRAQNQUAQZVRBNEOQQSKYBTOKE");
    msg.s_type = 196U;

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
    msg.setTimeStamp(0.8243123239431432);
    msg.setSource(32300U);
    msg.setSourceEntity(69U);
    msg.setDestination(35881U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.3633203521879653;
    msg.lon = 0.2651125907504245;
    msg.depth = 0.813798064759176;
    msg.roll = 0.039766360409283164;
    msg.pitch = 0.9072114069425466;
    msg.yaw = 0.09019738431863045;
    msg.rcp_time = 0.08547756663092032;
    msg.sid.assign("YEWKMHFIHHQDLXCVWVIPRIOTGJCJQMPGACXPCSPZJMCWMDNQIBNZELYDAUKQOIHXCDMDPBAOGCLORMOAADZEVRJCONJKXBWJKQFNHGTPLABOHFVLSBZKFJRXWIDTSWPUXKFYWARZHUENZWFUKLFYRLRHECHMHQXUBTUABUGNOVUDMEQBZVBKKSJXIFQXNZGVUXAWKRNQIPTDIYLIBDMJGSPTWVNTLOYUSPMNQ");
    msg.s_type = 13U;

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
    msg.setTimeStamp(0.30391138023091135);
    msg.setSource(49660U);
    msg.setSourceEntity(178U);
    msg.setDestination(56911U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.8673101517724641;
    msg.lon = 0.0890957678226032;
    msg.depth = 0.7743143252305926;
    msg.roll = 0.5205458221946363;
    msg.pitch = 0.6102581701294578;
    msg.yaw = 0.055302262127897905;
    msg.rcp_time = 0.011815531715663075;
    msg.sid.assign("EEEYOGIILFJRAPHTXFMRWUPHAEPZFOORBDUUKWFNLZRXNGWBQVHUOUYKNATQVJCZSJKJRWSVXSTRSLDNGBBMSXDKKYUXCFPGCATIRSQIFDBVLCEKJIUGJZGCUVZZDELKXTBFLPAJZDQGAWMFVWDXSBVQFUNWYDGTPXNXORCVAOFHLNEZIIPKESROMWIPHOMQQLKSIDOPKQBNRIEJYPBHCAA");
    msg.s_type = 197U;

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
    msg.setTimeStamp(0.8122537349093483);
    msg.setSource(60967U);
    msg.setSourceEntity(145U);
    msg.setDestination(11684U);
    msg.setDestinationEntity(19U);
    msg.id.assign("EOSGXFITACWXSFEKYZHGBOFURBGNWUCLYKVIVRUYJACVPSPDZUZPPHQFRDAXSMPIIZTXJYMLTGJIKGOZHAATYGLYMZHXVMSVBQHAXLRJRFBTABUDQKIQFDMPFPMBEIJZSTNYKRJVHMASPKOTOKDTCOLEEANLEGWOCWBFWVREJNYMRQPEPJOTDWRUCSELNADCSGXHQXCBXEBNCKUMNOWQVZZGW");
    msg.sensor_class.assign("FJMJDPHBWTHJYPQDGBLSSVLLPEHMTHAASJEVUPHVCPBKMROCN");
    msg.lat = 0.16116896072425757;
    msg.lon = 0.9808103032609351;
    msg.alt = 0.42237920957605213;
    msg.heading = 0.7190711461748004;
    msg.data.assign("FOGVBVPAAHCWQMEQDHMPDEWJLOOBTFOTYJUVEQCVBJIKBB");

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
    msg.setTimeStamp(0.6161445894650407);
    msg.setSource(59389U);
    msg.setSourceEntity(15U);
    msg.setDestination(51326U);
    msg.setDestinationEntity(59U);
    msg.id.assign("EGNDNGDSEIZVIOMDGHEOFYNLACCDUBXLVWCFLBRIKKMIVDPQVHGHYSBPRFMURQBBZUKITKOYKRFBWVWZEWTKZFWGSUHFJSYRZAWQYTNCSPYACYDHAPVMTCWPCFBQPUSLEXLYOZRJAOTJTHLIHXIQKSLREEDOJTGVUDVXZKMANDSTALQVABJOFGKXGIXJZCHQDWPJRUNBYRWZOCUMAXHJSMESJXNPOOMENTEXFNLMARQJIFQYBITW");
    msg.sensor_class.assign("XOFLHNUDGBXJPZLIQXKUFJHTVGBZSMBYDMYROIDQGUFZYNYCBQMFTKNRTALQEIBLKWNDLDIAPXJTQICGGBDCOOMGSFDBHVANTTMSWZJKOYTMLRXFSEGVZAMDMIBSCFOKGCURVVABQULRZWYVILERLJVRTMNUCSGFUPHCWEVPNJOEISOQQDZZEMYWPWANHCXWWXGOJSHXAJEBXCKRFZYFUATCHUJWPQWNREA");
    msg.lat = 0.7794346895301376;
    msg.lon = 0.9543701606925641;
    msg.alt = 0.8811896616788817;
    msg.heading = 0.1275878305993119;
    msg.data.assign("ZLWUUUAYCQKTBFWWBPLWJJLVIJKGYFDHKSNVBQHNDUQAKYFSOPJFMGBRAPYC");

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
    msg.setTimeStamp(0.319113787826254);
    msg.setSource(25646U);
    msg.setSourceEntity(136U);
    msg.setDestination(28729U);
    msg.setDestinationEntity(179U);
    msg.id.assign("GUSKXCUNGXIGMQDYUH");
    msg.sensor_class.assign("ASBLLXUCXUTCBSRESTYBPBBPWGGXZMYMGURCOYJFYJPQRDRKLZWHMJDPEWTOEQKRWUCYCTMHBJNHONGXJTVEZGEOUJIEXCRZ");
    msg.lat = 0.6862998819393864;
    msg.lon = 0.4724090013638469;
    msg.alt = 0.3298581214874522;
    msg.heading = 0.39556757864621817;
    msg.data.assign("DLHDRPBAMYLSRGTBTUWJCSEWXRNAVKKRPJGSWSQVVHECIPYAAXCUHVORYTIRSEBKJZXXYPYDGLWHSFJE");

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
    msg.setTimeStamp(0.18815785985718692);
    msg.setSource(15246U);
    msg.setSourceEntity(26U);
    msg.setDestination(35867U);
    msg.setDestinationEntity(33U);
    msg.id.assign("YDERCCFDSSOKFSOUUBYZXYNBFWWQSBYMREHREXZJPHPMPIVWGXHLOZFKQQSNJZPKERDSJIVXPQGUXJJDTENVQIMZIAOUVXSOAICTFHAKSXLDGVQCKETKNBVEMCZTAGCGABYIHGQWYNEFHODYJIQRZOQUVQXWH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FVRUPLFCPBGDUVGUTMOCUJLVETOUJORBDXEZDRYCZHEAYILGHDJZPGYTSXXVJBTDBAVHUHNQ");
    tmp_msg_0.feature_type = 36U;
    tmp_msg_0.rgb_red = 113U;
    tmp_msg_0.rgb_green = 7U;
    tmp_msg_0.rgb_blue = 13U;
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
    msg.setTimeStamp(0.37591824644461935);
    msg.setSource(41714U);
    msg.setSourceEntity(25U);
    msg.setDestination(4669U);
    msg.setDestinationEntity(189U);
    msg.id.assign("VZWTFQOHIEBBZESRVKVAYW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GUTSYDMKKOQETKNFEBXYFMB");
    tmp_msg_0.feature_type = 50U;
    tmp_msg_0.rgb_red = 186U;
    tmp_msg_0.rgb_green = 254U;
    tmp_msg_0.rgb_blue = 64U;
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
    msg.setTimeStamp(0.2337121463113836);
    msg.setSource(46U);
    msg.setSourceEntity(43U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(83U);
    msg.id.assign("YULUVUUUQPOZWZBCGKQNLOWVYROVHFWYSFXVRGMXEMHIQDATYJAQJNRIDCBLXXGJUVPKWZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NWQGSHTMKTNYVVSWPAZIVHUDRHMCZEQQYETIHNVBPDFXUUGFZCYZVRQKBTRRIIDOKLRRLKXSQEYNNIJPGDPECMWFPOUGVEDWKA");
    tmp_msg_0.feature_type = 66U;
    tmp_msg_0.rgb_red = 112U;
    tmp_msg_0.rgb_green = 133U;
    tmp_msg_0.rgb_blue = 135U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.37040381688983315;
    tmp_tmp_msg_0_0.lon = 0.4296629264735651;
    tmp_tmp_msg_0_0.alt = 0.6076253465050897;
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
    msg.setTimeStamp(0.006586653320556524);
    msg.setSource(31822U);
    msg.setSourceEntity(69U);
    msg.setDestination(34465U);
    msg.setDestinationEntity(136U);
    msg.id.assign("KUTJMOTIEHGGYPIKJJUNSAVBLPNPJNOGOTRWUAIWYBAQMCIDPYPLQXTEXXCESYQTDTJXKZBZVDBXJHZRRSMGXNUBQBKRWHHDJNDIPYAXANAOEVLFWVCZDGKJUMFUFWKLVQEGLMAQVJYNREQHZMLIHENRMQYZOOWGCCXAJVLQHZFAIWKIXFHTTGYWYWFPUOTSVCZZLFGUVSSFRXICVUHABTUQDWESNHFSMRDOSCG");
    msg.feature_type = 139U;
    msg.rgb_red = 112U;
    msg.rgb_green = 0U;
    msg.rgb_blue = 94U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7727193241581558;
    tmp_msg_0.lon = 0.7854307168681717;
    tmp_msg_0.alt = 0.9278646586135446;
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
    msg.setTimeStamp(0.34606017245959053);
    msg.setSource(38408U);
    msg.setSourceEntity(60U);
    msg.setDestination(62433U);
    msg.setDestinationEntity(53U);
    msg.id.assign("VDVIGXKWMIVMDRUUTQVLGJMSWBAPTTUSCZYYCKODNVBHGTGYJJVZQJISZLAPHRZWKHTAZNIQKKWAIRFNOQAWJDURYTBALMPFOGWECXPNCJBKBINAXHQAZOSNMGDZPPVTBSQXEYHJFBRHQLFECARCZLHIPEXFBJUFSDGFWCEYHYKZJOXPZLDUCN");
    msg.feature_type = 222U;
    msg.rgb_red = 110U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 172U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5938566181882555;
    tmp_msg_0.lon = 0.9652715823361117;
    tmp_msg_0.alt = 0.8233511727482316;
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
    msg.setTimeStamp(0.0004989103897109493);
    msg.setSource(64578U);
    msg.setSourceEntity(106U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(114U);
    msg.id.assign("ZWSLMFFJPZQQDENCVFPUGZZFRYYZOLMYSTVBKRNSNCYJBUGIOKTMDUYCQGEOQNPPSCIVWUJSWCPXFEKPKXFWJSNBHUCMQJGAQBVCEXFPXJKTDMFRAYOOGNUXHNMZERGLDJUBEVITBICUSHCDKGHLDHXJUZTOFGEILZQU");
    msg.feature_type = 1U;
    msg.rgb_red = 227U;
    msg.rgb_green = 17U;
    msg.rgb_blue = 228U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5301399072307835;
    tmp_msg_0.lon = 0.18953719932434365;
    tmp_msg_0.alt = 0.7596617515382504;
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
    msg.setTimeStamp(0.49788970162380664);
    msg.setSource(7922U);
    msg.setSourceEntity(64U);
    msg.setDestination(22362U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.23160346124572428;
    msg.lon = 0.16031152766479184;
    msg.alt = 0.025740105516230516;

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
    msg.setTimeStamp(0.6930071584671939);
    msg.setSource(60432U);
    msg.setSourceEntity(148U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.28583583232538834;
    msg.lon = 0.6906416136094744;
    msg.alt = 0.6299143819518577;

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
    msg.setTimeStamp(0.3210640369219012);
    msg.setSource(19003U);
    msg.setSourceEntity(222U);
    msg.setDestination(54131U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.05354659009662499;
    msg.lon = 0.08790546356479345;
    msg.alt = 0.5377607905730233;

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
    msg.setTimeStamp(0.610837900748335);
    msg.setSource(17833U);
    msg.setSourceEntity(151U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(182U);
    msg.type = 69U;
    msg.id.assign("FDOHRPAJPNIKLKVIABMUTGLDJVOAATDKMUFLFICHXM");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 119U;
    tmp_msg_0.op = 30U;
    tmp_msg_0.plan_id.assign("DTPLASOLQMEXFZCVQBJVIFITPRVZUVLHTRFZUINBIXUJYIPMGEGNCPYFZULAIQXCDTTWSSVCHQLNSDCQRYPISWQNKYFRGPLMWTWMM");
    tmp_msg_0.params.assign("CNJHZTUFHADLPIROEFMUBJIYWUBMXMTQGHHIXOYVFPRTQDUSZDKLZVTLHNVEUEAMJQDLOTVALEXGAOJQWIGUKCLFIBSZVEHBZEJAIRTWWCQMRGXZFSLHVJYYGRCW");
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
    msg.setTimeStamp(0.8226659972679035);
    msg.setSource(7988U);
    msg.setSourceEntity(178U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(3U);
    msg.type = 121U;
    msg.id.assign("GOBGKNNUKUPUCHLCWWFBUDROUSPYWXCPYQERMZTOLAIIFCBHMCIXXMYMWVEBJFWPKAVLGRIZZAOCYVPREQXJEPYCHJBVHGVCAFCKOCWXTQKM");
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("BZQYNYPKBDAQYTFHZELP");
    tmp_msg_0.x = 0.9872212447363745;
    tmp_msg_0.y = 0.6731236411716796;
    tmp_msg_0.depth = 0.20436749298963963;
    tmp_msg_0.var_x = 0.3302378523955124;
    tmp_msg_0.var_y = 0.012024303688034865;
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
    msg.setTimeStamp(0.4967828464326044);
    msg.setSource(40624U);
    msg.setSourceEntity(82U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(91U);
    msg.type = 25U;
    msg.id.assign("SWBVIOTNAOCKZDVYXMNRHZJJDUCDYXLSIJDCSBRTEERXNIKNCFPVCHPMKBNUZBOCRMLTZXBTIFEXTIBTNPEWRAVEGUIOUNAD");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 19055U;
    tmp_msg_0.duration = 43533U;
    tmp_msg_0.speed = 0.36323032446719683;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.x = 0.5698261217830097;
    tmp_msg_0.y = 0.6849249956354225;
    tmp_msg_0.z = 0.1705410575510805;
    tmp_msg_0.z_units = 160U;
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
    msg.setTimeStamp(0.9589078180118376);
    msg.setSource(18222U);
    msg.setSourceEntity(196U);
    msg.setDestination(56827U);
    msg.setDestinationEntity(75U);
    msg.localname.assign("YURVQOSTZUXDAVUNDLRCUCHAJJABGAMWGTDBISBLFVLJSHZDYVCPOVXJWCSOCRLQUPCBHLKQCGOKPSJAQQSYJGZQZNIMVUWXYUGFXEPEPWKHVYJIETYUUJDEHVEGODRYQEBPZFHZTPVNOKEMA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PXJCYQCBTLGQVFFFRTMFRUOZUDQYGHVIMVOECVSGHLEIOQZUBTZT");
    tmp_msg_0.sys_type = 35U;
    tmp_msg_0.owner = 25538U;
    tmp_msg_0.lat = 0.15503662367805593;
    tmp_msg_0.lon = 0.6136335459410088;
    tmp_msg_0.height = 0.11021243062922959;
    tmp_msg_0.services.assign("DFSTGBRLAAANGXUPGRUUXCMLSWIZHYAUMRXAQKKTWTOPXUQQECIUVCOXKM");
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
    msg.setTimeStamp(0.44623973301593134);
    msg.setSource(21124U);
    msg.setSourceEntity(25U);
    msg.setDestination(410U);
    msg.setDestinationEntity(120U);
    msg.localname.assign("GXEVOISIJRVKPQYALNZBXMARFDHCJIBNREUWQKAIFXLXJEBOZJXKIDAKMVJCLKBJWBSQFOJDFEIWTMIBWQMWFAOUQUAXFEWVLSVM");

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
    msg.setTimeStamp(0.5441402370435269);
    msg.setSource(16926U);
    msg.setSourceEntity(246U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("JYDCOBUYRNEPXYKJOHZUFKYNJQNKFYHKUIMTGNCMSZIGOJVRKRDRWABTTIFLDWAEQWQHSFLBOEVHZTUOPBWNNLXPHWLXVSXEXQSPKHIOZUMJ");

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
    msg.setTimeStamp(0.6594440332569426);
    msg.setSource(36006U);
    msg.setSourceEntity(226U);
    msg.setDestination(39229U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("KGODUVIDHWWRLXUXICQJPMCRHXOCMNGZOTSAYCHDTWGPXDKIAEYXEBPFPSYNNFKTABFXPLJZVJXNWAXZQOTGHNCHMDRY");
    msg.predicate.assign("RCUASPTNHWKPLWWQOINLIPNYDKYHMTZOBVQPHJHJKJELR");
    msg.attributes.assign("JGPBPWINDDOIPKGJECLWRJJEPGLCJHIHDEIFTOFSSNNXHZFQMSAADYOQDFBPTZWDBNRTJSVVYARUZPCRRETOETBFHAXRYEEMOBRMAVXFMRYNJWMWMLHPQSZVYBWUCYTNQEZXLFXUOCXHNIOIJGCKBPDOTLKZANHQDKTYAAQSNWGVUKHABLVUSMLIVCFBIQWMCLWKKYKLFZXSPQVZ");

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
    msg.setTimeStamp(0.3155749979454182);
    msg.setSource(52256U);
    msg.setSourceEntity(240U);
    msg.setDestination(52493U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("UXWHLWKLVBYBBMMOBNNIJMKZYVZFTIKYFDDEZWGLTJFOJJMLBEPTRYSU");
    msg.predicate.assign("FRXHMZNJWIEAJ");
    msg.attributes.assign("EJFFTCEBRPWDIVFMPCZIQSPJDICXYBYWYIRXJRTSISYJFKUHVGSEIIJZCFWPDKQUTVHODAHGUKVEAVCLNVPSJTOILGRWLCZLOKXRCWLRWZ");

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
    msg.setTimeStamp(0.1639534619340497);
    msg.setSource(17126U);
    msg.setSourceEntity(87U);
    msg.setDestination(14240U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("HVYGKJQZENFVTBKSTBQJGBNIWGIYTRJTES");
    msg.predicate.assign("UVBWOTSQWCGDRHTLAWUXKSYSRRXERLEQKAHXLNHEHESSWQINFTIO");
    msg.attributes.assign("BSBYSRDABRWEUDHTEUXEHAJDFDJNGQKAHVNFMFYITGQXXGL");

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
    msg.setTimeStamp(0.14190950407143832);
    msg.setSource(5700U);
    msg.setSourceEntity(154U);
    msg.setDestination(61731U);
    msg.setDestinationEntity(149U);
    msg.command = 202U;
    msg.goal_id.assign("GOUDPLFXUCDCEWSKXBOKWIZJAVFNFPGHOZTNNOXKPSDAPDFVVPVUJOTBDEIPXWHLOBHNOMAFSKPMVWRNGQBAMJJQLOJXAVTICGVFWSNZACIKPQRCSIDGHJGMYXTGXJBECUDNFRUBIZAWRSGOKZLSTPTKZQXBTVQ");
    msg.goal_xml.assign("WIEPJIQANZQYJBGUFXCCGWSERVIWKXZOTHLXYEOJTWCVZDZAFOPEVDGZHNASEJSNGUYULPVGKVXRCRHMSQJDDUOKHDQSZPUFYNYTKOKXTENKUMBMCUZBWQOALXA");

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
    msg.setTimeStamp(0.7681363140653928);
    msg.setSource(54674U);
    msg.setSourceEntity(184U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(238U);
    msg.command = 247U;
    msg.goal_id.assign("OCQGFOJMMYWWMBXHTHJLCDGRRNHGORAIMYAPXKALAVUFFNMYJFWBJFAVDEIPVX");
    msg.goal_xml.assign("SISPQDHURSNFMMZHBQRTCAYLHALYOBWACKEFCKCELBYWEMSIRUJHCHMZVGLBPRJFVSXVYBAXQOWCLTLIBTXDGQPWYXYQQTLZFOYEDHZVKMAWFMIRUEPT");

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
    msg.setTimeStamp(0.7708291375835656);
    msg.setSource(64778U);
    msg.setSourceEntity(47U);
    msg.setDestination(19331U);
    msg.setDestinationEntity(166U);
    msg.command = 101U;
    msg.goal_id.assign("KKKVOZNKTVTQDVIBCBXLKZLSSLPPDJBMBJXGXBNALPJURQAHOYQGUMIPVGYWZXGFZHZDPCUHJPCYMOFAWLMYWQFGEEEIMRXRMHRFQLKVCXAUJNXXECOBDQNPWMCOVBRGNTONTHUIUDYBOLUVSJRABDEJFNLCFIIMOFBIRVUGWEKEYEDAQWFYWYPTHRVZKPWWFGHSJSFAS");
    msg.goal_xml.assign("AZZLOJXOTNAKLFSBIWQRGAXJLKIZIVUPGGWHQEXBRIRNZDFEKLCVKYTDKSBBHYMOYKOHZEOOVTBU");

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
    msg.setTimeStamp(0.9095180138264684);
    msg.setSource(4627U);
    msg.setSourceEntity(214U);
    msg.setDestination(35817U);
    msg.setDestinationEntity(225U);
    msg.id = 167U;
    msg.width = 10993U;
    msg.height = 57986U;
    msg.widthstep = 13834U;
    msg.channels = 108U;
    msg.depth = 95U;
    msg.finaldata = 141U;
    const char tmp_msg_0[] = {93, -84, 101, -105, 25, 69, 50, 99, 55, 64, -113, -50, 99, -109, 35, -110, -15, -66, 41, 53, 5, 111, -126, 106, 36, 97, 26, 69, 55, 119, 51, 56, -115, -93, 33, 65, 96, -19, 53, 41, 82, 2, 98, -25, 36, -47, 41, 26, -91, 30, 60, 40, 51, -25, 28, 64, 14, 62, 74, -5, -75, 109, 23, 53, 84, 12, -106, -12, 22, 74, -116, -76, 85, -93, 40, -21, 98, -101, -22, 67, -36, 38, 111, -81, 45, 123, 12, 111, -104, -52, -30, -60, -35, -64, -30, -128, 52, 6, -60, -64, 69, 45, -61, 94, -115, -85, 110, -62, 68, 72, 110, 48, -27, -125, -94, -10, 45, 89, -73, 105, 6, -63, 72, 109, 79, 75, 15, -118, 72, 4, 84, 124, 68, -127, 4, -48, 69, 55, 78, -123, -45, 21, -8, 58, -15, -121, 86, 63, 108, -50, -106, 93, -98, -94, 45, -16, 38, -42, -28, 76, -79, 113, -31, 98, 45, -79, -20, 7, 68, 94, 28, -13, -119, -5, 33, 13, 91, -109, 101, 102, -40, -105, 29, 41, -55, 88, -119, -67, 98, -115, -50, 37, 72, 124, -45, -9, 50, 69, 70, 52, 12, 122, 0, -16, 68, 66, -108, -98, -83, -21, -38, -117, 15, 90, 32, 96, -22, 86, 56, 68, 29, 73, 44, 119, -124, -67, -21, 82, 82, -118, -30, 32, 116, -9, 62, -79, 25, 39, 113, -127, -107, -33, -123, -103, 24, 108, 70, -111, 99};
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
    msg.setTimeStamp(0.6737006790791383);
    msg.setSource(60985U);
    msg.setSourceEntity(10U);
    msg.setDestination(39963U);
    msg.setDestinationEntity(61U);
    msg.id = 146U;
    msg.width = 39199U;
    msg.height = 50521U;
    msg.widthstep = 18272U;
    msg.channels = 239U;
    msg.depth = 122U;
    msg.finaldata = 43U;
    const char tmp_msg_0[] = {-64, -39, -8, 107, -118, 17, 1, -45, -92, 71, 41, -55, -108, 31, -5, -128, -115, 78, 82, 49, 47, 113, -112, 19, 32, -45, 53, 57, -59, -71, 38, -83, 76, 121, -53, -97, -107, -72, 31, -24, -29, 25, -72, -114, 112, 8, -126, 23, -34, -45, -103, -116, -2, 123, 59, 83, -104, -2, 44, 10, -75, -29, -20, 23, -93, -88, -78, -4, -98, 77, -13, -93, 104, 30, 45, 9, -64, 87, -72, -38, -16, -109, 22, -95, 78, 16, 123, 121, -61, 113, 43, -65, 25, 46, -114, 47, 35, -38, 62, -120, -61, -69, -45};
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
    msg.setTimeStamp(0.8998259696892885);
    msg.setSource(3317U);
    msg.setSourceEntity(101U);
    msg.setDestination(57519U);
    msg.setDestinationEntity(113U);
    msg.id = 9U;
    msg.width = 41536U;
    msg.height = 55933U;
    msg.widthstep = 51848U;
    msg.channels = 162U;
    msg.depth = 141U;
    msg.finaldata = 169U;
    const char tmp_msg_0[] = {68, 106, -104, -128, -95, 43, -104, -39, -27, 22, 54, -60, -67, 108, -59, 113, 122, 49, -10};
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
    msg.setTimeStamp(0.9755689406222263);
    msg.setSource(45022U);
    msg.setSourceEntity(97U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(218U);
    msg.width = 60989U;
    msg.height = 39074U;
    msg.channels = 225U;
    msg.depth = 38U;
    const char tmp_msg_0[] = {-74, -109, -75, -93, -52, 43, -46, 89, 105, -26, 97, 69, 67, 100, -30, 0, -79, -110, 63, -78, 123, -123, -126, -95, 98, 82, -122, -92, 40, 42, -38, -16, 103, 88, -23, -45, 89, -15, -57, 83, -47, 12, 105, -88, 107, -25, 47, -15, 56, 39, 56, 71, -98, 71, -119, 16, -1, 102, -40, 81, -41, -42, -107, 34, -48, -29, 123, 6, -128, -104, -96, 84, 54, 11, -9, 39, 31, 65, -32, -18, 14, 62, 52, 73, -37, 14, 46, 40, -28, 25, -58, 60, 108, -128, 62, -34, 64, -118, -1, -127, 121, -90, 10, 117, -21, 83, -4, 40, -111, -62, -123, 32, 18, -65, -114, -111, -127, -103, 63, -71, -64, -102, 98, -120, 108, -7, 68, -54, 113, -55, -7, -100, -108, 105, 28, -5, 33};
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
    msg.setTimeStamp(0.5994329047100546);
    msg.setSource(54544U);
    msg.setSourceEntity(203U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(36U);
    msg.width = 51531U;
    msg.height = 17699U;
    msg.channels = 230U;
    msg.depth = 154U;
    const char tmp_msg_0[] = {-79, 79, -3, 88, -17, -42, 30, -128, 28, 19, -35, -108, -26, -84, -37, -33, -43, 19, 25, -11, 38, -42, -116, 71, -82, -74, 106, -44, 99, -22, 20, -35, 104, -74, -47, 9, -127, -58, -55, 31, -48, 121, 57, -128, -89, 107, 96, 107, 3, -94, -109, -68, -84, 40, 100, 41, -18, 36, 117, 18, -123, 74, 112, 94, -101, -119, 47, -87, 28, 64, -9, -51, -5, 70, -43, -5, -59, -86, -80, 55, -36, 65, -112, 75, 33, 35, 77, -20, -68, 42, 47, 62, -76, 11, -94, -67, 38, 108, 63, 81, 118, -121, 68, 31, -125, -19, 41, 78, 58, 77, -126, -57, -126, -125, 48, -66, 62, -52, -14, -28, -73, 54, 84, 119, -107, -96, -88, 17, -120, -39, 0, 124, 112, 54, -16, -55, -59, -106, -95, 10, -106, -120, -54, 8, -18, -51, 62, 57, -72, -58, -21, 63, -29, -80, -32, 9, -118, 69, 98, 97, -1, 95, -76, -117, 29, 2, -48, -6, 93, -120, 61, -29, 77, -31, 52, 123, 115, 25, -122, -86, -14, 11, 89, 70, 79, 21, 51, -10, 69, 108, 0, 117, -26, 15, -8, 58, 51, -75, 42, -29, -89, 84};
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
    msg.setTimeStamp(0.6643153622547878);
    msg.setSource(62743U);
    msg.setSourceEntity(111U);
    msg.setDestination(170U);
    msg.setDestinationEntity(80U);
    msg.width = 16263U;
    msg.height = 45834U;
    msg.channels = 250U;
    msg.depth = 224U;
    const char tmp_msg_0[] = {107, 54, 107, -120, -84, 28, -90, -98, 28, 114, -21, 37, -5, 112, -16, 16, 16, 108, -69, 51, 13, 59, -67, 44, -26, -100, 27, 95, 117, -113, -32, 67, 122, -17, 15, 113, 81, 27, -67, -41, 14, 32, 41, -55, 81, 55, 64, 100, -36, -50, -21, 100, -43, 57, 44, 0, -56, -77, -91, 10, -128, -54, -126, 78, -108, 16, 20, 87, -56, 35, 0, -18, 46, -25, -38, -23, 59, 29, 19, 43, -42, -33, 61, 78, 21, 12, -89, 15, -86, -4, -29, -6, 52, 64};
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
    msg.setTimeStamp(0.1539643488677258);
    msg.setSource(47344U);
    msg.setSourceEntity(41U);
    msg.setDestination(137U);
    msg.setDestinationEntity(69U);
    msg.frameid = 111U;
    const char tmp_msg_0[] = {42, 93, -49, 120, -59, -50, -40, 125, 9, -118, -102, -111, 72, -47, 83, -110, -101, 103, 100, -92, -72, 109, 112, 64, 91, 15, -46, -100, 21, -37, 56, -118, -16, -19, -105, -100, 57, -4, -82, -93, 31, -80, 54, -71, -19, 70, -96, 89, 85, 11, -111, -42, 73, 49, -126, 22, -19, 124, 106, 116, -37, -68, -23, 28, 40, 55, 121, -78, 5, -39, 21, -60, 34, 79, 83, -111, 122, 54, 98, -81, 3, 56, 39, 16, 49, 50, -22, 32, 61, 84, -31, -75, 58, 85, -74, -122, -16, 25, -121, -83, 7, 83, -92, -38, -62, 22, -22, 118, 88, 26, 9, -109, -119, 70, -94, -24, 27, -126, -40, 19, -54, -9, -21, -15, 19, 10, -95, 85, -34, 50, 102, 43, -109, -40, 39, -76, -42, 3, 119, -18, -116, -23, 104, -38, 71, -67, 107, 79, -7, 61, -116, 54, 70, -34, 24, 28, 30, 7, 120, 91, 108, -35, 54, 88, -40, -15, -82, -77, 27, -46, 35, 87, -61, -80, -118, 6, -121, -12, -39, -69, -105, -119, 97, -21, -52, -97, 76, 6, 102, 8, -84, -92, -93, -111, -22, -119, -41, 81, 70, -24, 30, 91, 62, 81, -43, 33, 83, -93, -111, -29, 59, 112, 84, 42, 4, -89, -52, 111, 75, 69, 79};
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
    msg.setTimeStamp(0.3783219491968569);
    msg.setSource(4998U);
    msg.setSourceEntity(176U);
    msg.setDestination(21736U);
    msg.setDestinationEntity(147U);
    msg.frameid = 159U;
    const char tmp_msg_0[] = {-55, -52, -57, -113, -85, -33, 69, -104, -19, 27, -74, -37, -7, 15, 60, -98, -8, 43, -123, 80, 59, 26, -114, -32, -89};
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
    msg.setTimeStamp(0.7775762351493519);
    msg.setSource(43894U);
    msg.setSourceEntity(15U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(98U);
    msg.frameid = 90U;
    const char tmp_msg_0[] = {34, -84, 120, -126, 27, -85, -98, 99, -40, -80, -38, -128, 104, 29, 91, -48, -96, -98, 25, -104, -44, -94, 93, -123, 75, -4, 46, 7, -111, -77, -43, 114, 110, -76, -64, 47, 94, 92, 90, -126, -38, -64, -104, 57, 84, 51, -86, 22, 64, 124, 90, 42, 89, 39, 17, -92, -44, 108, -100, -117, -9, 41, 75, 102, 47, 123, -41, 1, 118, 110, -115, 67, 54, -61, -94, 110, 87, -16, 126, -120, -50, -106, -49, -37, 74, -99, -23, 53, 67, 64, 53, 91, 88, 60, 90, 118, 31, -49, 120, 3, -62, 106, 26, -24, -127, -24, 10, 18, -108, 2, 77, -87, -57, 58, 7, -66, -79, -9, -6, -40, -20, 99, 27, 84, -35, -105, 123, -70, -89, -5, -31, 38, -74, -33, -110, 111, 18, -98, -26, 43, 56, 44, -67, -82, 49, 115, -128, 28, -110, -90, -98, -83, -2, 84, 123, 10, 25, -96, 85, 5, -87, -91, 70, 19, 27, -67, 38, -128, 24, 31, -65, 94, 110, -50, 40};
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
    msg.setTimeStamp(0.06379197397027925);
    msg.setSource(47276U);
    msg.setSourceEntity(38U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(93U);
    msg.fps = 131U;
    msg.quality = 197U;
    msg.reps = 103U;
    msg.tsize = 118U;

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
    msg.setTimeStamp(0.763076138145628);
    msg.setSource(19682U);
    msg.setSourceEntity(2U);
    msg.setDestination(64411U);
    msg.setDestinationEntity(130U);
    msg.fps = 77U;
    msg.quality = 237U;
    msg.reps = 73U;
    msg.tsize = 162U;

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
    msg.setTimeStamp(0.10791363531144327);
    msg.setSource(678U);
    msg.setSourceEntity(237U);
    msg.setDestination(6189U);
    msg.setDestinationEntity(124U);
    msg.fps = 9U;
    msg.quality = 230U;
    msg.reps = 77U;
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
    msg.setTimeStamp(0.9632798556755797);
    msg.setSource(19367U);
    msg.setSourceEntity(215U);
    msg.setDestination(46575U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.5935614201039299;
    msg.lon = 0.8521681588082985;
    msg.depth = 186U;
    msg.speed = 0.7667813065964154;
    msg.psi = 0.7305721519002372;

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
    msg.setTimeStamp(0.5722476503956042);
    msg.setSource(8889U);
    msg.setSourceEntity(6U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.8828429959510505;
    msg.lon = 0.3176074342523476;
    msg.depth = 35U;
    msg.speed = 0.10325219068407954;
    msg.psi = 0.47472735227712404;

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
    msg.setTimeStamp(0.43645651480876224);
    msg.setSource(1533U);
    msg.setSourceEntity(230U);
    msg.setDestination(63261U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.13803505282490702;
    msg.lon = 0.966833533130439;
    msg.depth = 33U;
    msg.speed = 0.8031861463867612;
    msg.psi = 0.8184379402214959;

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
    msg.setTimeStamp(0.49690360139749423);
    msg.setSource(41737U);
    msg.setSourceEntity(51U);
    msg.setDestination(56865U);
    msg.setDestinationEntity(205U);
    msg.label.assign("FJNBIILDMOIHJXARECBTSGTUCRNQILAYSZULYSCHPBJQYDWLNHTNWFVVODSJSKXJAPWMVWCKWKEMQQHNTEYIOMGZCXXVKSCRQTBGPYNACBHJUMIQZDGHTAOSUKCPHYHOGEFIRSHWYMZWTKDEMQAXEHZAODBQVBFARYZIZSKDNFPJRMUPWRBQXJKQXO");
    msg.lat = 0.45335508770877897;
    msg.lon = 0.5849849036645687;
    msg.z = 0.6860171758231676;
    msg.z_units = 221U;
    msg.cog = 0.40250546630272377;
    msg.sog = 0.09341180912189817;

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
    msg.setTimeStamp(0.29316588215421435);
    msg.setSource(37166U);
    msg.setSourceEntity(185U);
    msg.setDestination(11118U);
    msg.setDestinationEntity(169U);
    msg.label.assign("ZPVZVUAZIJPEPXWXXWCVFUUCYTCNJNJTNOZEQOEDJQJDBHVMWKDBUAWCJAQOWUDVGIKVEYASGTHCWDCYIUZQCODJJOFKSIAQPMSRNTLMTKYKPSEFPXQXGYGDMAAOIRRVDFODRIZBSUZBFFGFCPRMRBYYYIXMKNLTACTVHJXOVBLIDYTAULFVBHJTEKHHBGGNZTQRLZMHAZLWUMEXKLRLGEPNYSBMIXQWNOGFOEMUQBCLHKLGEQRN");
    msg.lat = 0.4724500724391718;
    msg.lon = 0.1229414384388472;
    msg.z = 0.5518066366079555;
    msg.z_units = 165U;
    msg.cog = 0.6195316124856437;
    msg.sog = 0.5259984406950281;

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
    msg.setTimeStamp(0.06471314015463592);
    msg.setSource(59036U);
    msg.setSourceEntity(173U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(222U);
    msg.label.assign("OQLVHXYUYPMUVYTZBZXCGCLTPARYISTSREWGUIAWBHPDVQKNICNYYROGCGEONRZVNUAZJUXGMDOCUAOICPIPALGFNFESBWXQBQZXGQBZFFCUTDQLENLDBHQQPQTJLPMJMFUMOSTLRZZANZIVJHYVDPBOCIVPRMOQWHJXWUHLGSEBADKZKBCSOVSEFVGEYKIMRKDMFMKYAHFKIKPBEJFHTRS");
    msg.lat = 0.29870018846814095;
    msg.lon = 0.48707581484144946;
    msg.z = 0.41723702069874;
    msg.z_units = 72U;
    msg.cog = 0.056265473575895286;
    msg.sog = 0.005908918622945625;

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
    msg.setTimeStamp(0.20334358597731328);
    msg.setSource(57084U);
    msg.setSourceEntity(245U);
    msg.setDestination(58385U);
    msg.setDestinationEntity(229U);
    msg.name.assign("ICDQZISKNAZTMKICJZEEIWWJZDONKPPFJAPRXRMZFYDJSCMZQKONWTEGUXVTXSHGKHRFNVWYLCMNBCBPDIHSBNWLWTCHDFLAOGKBKRPHSJFRWWUQPSURJTGTZLYCAHFZVFLUPAAYNHEGRMFYBLEOXTRALFIGBGAULIYXVQXUDDHJQMOOBZENUUMOAZTUIAMKRPNLBQMHYGOJJVQKCYBRSDOUHXEGSQQTLYWVMVYIXN");
    msg.value.assign("RHYBRGMIPXACHOESZSZTAMYKUWYNBWXFWJKVJZGKZQZNOZBJRPECGKRUSHVSZZNCGTXMEFWTMUHPFPTDMYCQLFFCVWHVUBQBOIVJNOLEHKCXFMFOABLQDNGJYWIEGPNWAJHFJGLTICANMPDAHJYHLLXULBVPWFMAVPUYITXQAIYBXFGIATPQPGOANXROIUYDQDQEOTSKDLZUKRZEESMSYDCIMULVORSRUQNCOVTLDKXD");

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
    msg.setTimeStamp(0.30805965575370464);
    msg.setSource(35237U);
    msg.setSourceEntity(82U);
    msg.setDestination(52187U);
    msg.setDestinationEntity(193U);
    msg.name.assign("BMHIRONTPPXVJMJAHCCPTESTYTCJMWRIYDADPZTXMRONCBQVFZBKOVPOSVQBTEN");
    msg.value.assign("ZPZBFUTVAJPLZBXDQRCIPAKXUONYPJUEHSERJLYQEXTMMIMROHHMUVUUYABVVQMDNJKOFTVNCMSOTSFISVASCUBQKYOKGDZH");

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
    msg.setTimeStamp(0.6077217023200769);
    msg.setSource(30574U);
    msg.setSourceEntity(125U);
    msg.setDestination(35388U);
    msg.setDestinationEntity(172U);
    msg.name.assign("PUAWVTUIBSBPFHLYAGAYOQIJYFWKTISMYTVHYFNBJRFVPZVEWCZUFNKFOEJSIQNDMLMCWCJPQOBSWMUGYGDQAHGOAMCVEALYQISEJQOEZTCBXBZOVLZHBVENOBCKKUETZPYBXXPTXDUSEDJERVLLHWWNLXXZVAUTBUACHSZCRDPLSOQMMIZXRRJQHKUKCSHMD");
    msg.value.assign("UCBVTGLGWJTUCBEZENKBRWRNZYOFHRLEATMZVPXOPOXJDQKZACDJQZLCJOYLGQOFUKQWYVNTFPMIIDXYFPAZMWVPMZAK");

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
    msg.setTimeStamp(0.6211630111014994);
    msg.setSource(46897U);
    msg.setSourceEntity(9U);
    msg.setDestination(20766U);
    msg.setDestinationEntity(35U);
    msg.name.assign("SZFTUCVGMTTPRROXBIMRHAYLRVGAOBGICNTDBYUWDIYQKVLSBLOIIQEAZJSFCNIANYWLDCMUROXVTZTWLNQQLXFOPOFVBHIMTKDWGXDIHERMKKVVPVMHDFQUEUGGNXCWHFFXLULOVUVYGUJFRSKOPXECRPKZEAYEZHDFJWK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YLAWHUEYODPNRXFGEFREASFYIMJFEVNRYXNYNTBCQPPWIAWTIKKISTRJIE");
    tmp_msg_0.value.assign("KPNELBOGKNZQXCEBE");
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
    msg.setTimeStamp(0.16256656175499462);
    msg.setSource(10710U);
    msg.setSourceEntity(16U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(159U);
    msg.name.assign("QBDAKKRPUAXDBXDJBXRFOMCSKJLFNETEIZIFWOOYTUQWAVS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XLMGLWCIESILRNRDNMYCTFZMIKWGLXOIWKHOBIFYOXXMHEZPZECIVFDQEMPWOSTBAKQRLJGPHCFJTDKUOFEXNWJ");
    tmp_msg_0.value.assign("GHOQAGHMVTUUGYLQDVXZXVZJHDBVIBTIJNNSMCEZPWMFSZFYIMARVDKVRPPFJSKFUIGLEAFRPJDFETZRDOOTDNLIAWYNCEYOAZZKBUJPXYCNXOSNOYKVWPLUELZQQYTXOKARFXTEUGZMEWYGUABCQBZQOIJICLBMEPSXHXEFQBMIHGJVXLKKOWCGJWDHRNCKJYCRWYDAPPRSJX");
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
    msg.setTimeStamp(0.945154863052154);
    msg.setSource(43921U);
    msg.setSourceEntity(19U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(91U);
    msg.name.assign("MEUKJMETUNFSINYYFWVHILX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UWQDHFJFXNXUCAUHKLLGZOAVVSFCURBWFJXZMITRMNZJZDPWGLORPRHTFSTKIIYYBUFVAGQAJCVFBBNTUFHLMRESRKUIKRGBYNGELIADVCKVETSGITPNSAINZLLEYHCPHPJYDDEKKLLKGZAORSQFNNPDCQRHQOMIWLTGAVPODEEXDFMSONTIUQZAXHPOMXVIBYJJWXORXQWYYSKTD");
    tmp_msg_0.value.assign("MOBXGLNUETSJSFUCOYRCGMVOLPNXFEKBPUJCRAOTIXSGOFNJCEYOXKVPHRQZWQZTMVENLFNGSKELPWABUVESMJGVLRNDTFLZHQWWAIKYYAKYCY");
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
    msg.setTimeStamp(0.8589922329684947);
    msg.setSource(28919U);
    msg.setSourceEntity(199U);
    msg.setDestination(47689U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ALRWBNATOASEHJLRFSSXKEMFKYL");
    msg.visibility.assign("KVMTSLJNQCQUBLOGQWPDDGFGYGRZAOWBDNTZFITIDJUSJMHYVNSDBITUXMJYQTPXWUKEOHQPMVMJABJJABSIRVRFCWRDLAWYMLPEXITZHCRVAPYAORKIASDEHPRZVBLFGUOZQZCMOKVUJASEWLD");
    msg.scope.assign("DSBUWHRXSHKXNYPENZSVIOTQNMEKUMMKTABCXQDRUNMMEOPWCPLJZCQCYRRREYYHPGIZDLAYSGZWOEONXCMAFVFEUWGPKQRUYVUCKRPDKUVMFSDITZDJIGDCXRZJLJOBRFWITLBTBIOFOKHWHWAWBSXFJMQILFBCFALEPTSGTWOQVJSMYWBSGDDJUKHXAPEGAZKEZAQVIHUHYNXIUSZQJCATFRYVZXINKJL");

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
    msg.setTimeStamp(0.2253459342015356);
    msg.setSource(37142U);
    msg.setSourceEntity(22U);
    msg.setDestination(17161U);
    msg.setDestinationEntity(124U);
    msg.name.assign("GQUTAVEIWMOZUNCVNKWGPLHEYFHYXSXCBVROYCGBWTTKZXJAJPHPMARJNLAOSZJTBDOLBQFGXYSJMMIMXLBUPIYITOQVCZZIVDFUQIZWWWNKDSFIDRUZCUAKDPELEPTQWMFKBLAUNOCVWRQTAJGVEFFPXSFGEHFBOEOQWXNGIVBOTJDNYRLLDJEIRQKZSXNBIQFEQGAPVRMHUSHXMOHSCHUYUYRLTZKCVDKRTGSLDKCBANAEGYJHDZNHSR");
    msg.visibility.assign("OPJEMUDYKDYKTT");
    msg.scope.assign("IFPBQOJFOXWHLEJVDFVUBRVNMDQCPJOYAXTSTHFWHQBSNZJXECMSWIREIAQGIHQXTDGKMVABWWLTIMEPJXFSBLZZUJRAUMRXNVALYYWNBKZKDGJBKKYRTPGYCPGKHQPPFEOUWVOIDQCAUGCZZLCFAUPADRGKCLKIEWYVOSRSLYHPQNSGGZURXEVQRPFCUODXTIMMEYHOHJBCDOYDSOGNMDQVAUJANYHFWFTESR");

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
    msg.setTimeStamp(0.9940435694695324);
    msg.setSource(42703U);
    msg.setSourceEntity(37U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(144U);
    msg.name.assign("UUKAVDNALIRJIAQDSODFK");
    msg.visibility.assign("CYFEIKUDAXPSCOBMMSGGJRQIYUDNTL");
    msg.scope.assign("UAFYLCPQGHMXVBXBVYQJXFYQUFQLEDGLNCFWOAICMIEOKFUBPVDSNIDPPFNRQHKZJHWEGONGPEWJCRTUMEGBAMXPWNZXKNMAMEUSSKJJPLJHST");

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
    msg.setTimeStamp(0.4256959772402473);
    msg.setSource(44929U);
    msg.setSourceEntity(227U);
    msg.setDestination(43662U);
    msg.setDestinationEntity(74U);
    msg.name.assign("KJUWTBXERSFBWNOFAKOZZHZABISARVOPIYOWIVNSYNGSXQMMPDHNUGIXALTAETURGJEVPSEMQAZGGYUSIYFQMYCUDXGLBOIWVDEAFKJZUC");

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
    msg.setTimeStamp(0.6883325469530068);
    msg.setSource(43942U);
    msg.setSourceEntity(252U);
    msg.setDestination(19478U);
    msg.setDestinationEntity(230U);
    msg.name.assign("UQBHGWQTJOCRBRUZXKBECLBORXCMYZIFSDLWVPKJJC");

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
    msg.setTimeStamp(0.9417431587219081);
    msg.setSource(19936U);
    msg.setSourceEntity(182U);
    msg.setDestination(11528U);
    msg.setDestinationEntity(14U);
    msg.name.assign("WXCDUUTJTNTULDMOZICMCMXVDMHBZSRKLFSUBTRHVWZMYGDVZLWFZKYTRVYBGYQEXOUVEALDEORBBNPCIENXJXGCRVERIRVKLQOPJQGQ");

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
    msg.setTimeStamp(0.11364467550145119);
    msg.setSource(24585U);
    msg.setSourceEntity(90U);
    msg.setDestination(40447U);
    msg.setDestinationEntity(52U);
    msg.name.assign("DUXHEORQAVJWUMNZTBRTCUNCXIBTRJSCWRTROGRJOFWDOFGZNPSDKPPBDMLFCLPGBPHVUDPNYCEOYIQKJHVZKZCFGSK");

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
    msg.setTimeStamp(0.3793200231890467);
    msg.setSource(42029U);
    msg.setSourceEntity(82U);
    msg.setDestination(33942U);
    msg.setDestinationEntity(72U);
    msg.name.assign("UOCUBPXTGTFNABOXENXEPYMAMBSSEMNWWMFUXGSDZGCIVANZYJNRCJGVDDPYWTDRQLVYAIGJBHANYQNOGILLYKWJDDFTMREOIXZJQEXUZSWBLFHKEITPYNJR");

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
    msg.setTimeStamp(0.9541133321269993);
    msg.setSource(48037U);
    msg.setSourceEntity(40U);
    msg.setDestination(39337U);
    msg.setDestinationEntity(204U);
    msg.name.assign("VMWYRBPYTLGREUIBECFLKHBDSLVKTQKREYTZPRJHSGNYXAYAAIBPXQWGFHLCLCEFWJUPNUMXKOYTAFHDUIGQQYFIUXAIQWKWUMTVGCVGKDJHMWSHIXEPNVABDDZZSYBQRFLLYHUZBBQSTIOSDJOSKOFCRNGEJPKONOWZUOXBQHAQVVWQDVMCNPTJEHTJXNZKLZHFMEGWXZAMGDINWTXRLSOOV");

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
    msg.setTimeStamp(0.2903028116065407);
    msg.setSource(30387U);
    msg.setSourceEntity(22U);
    msg.setDestination(60127U);
    msg.setDestinationEntity(107U);
    msg.timeout = 2757176504U;

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
    msg.setTimeStamp(0.1067854854930732);
    msg.setSource(45096U);
    msg.setSourceEntity(191U);
    msg.setDestination(49515U);
    msg.setDestinationEntity(55U);
    msg.timeout = 4276471989U;

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
    msg.setTimeStamp(0.16928859685101305);
    msg.setSource(59365U);
    msg.setSourceEntity(7U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(247U);
    msg.timeout = 949592573U;

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
    msg.setTimeStamp(0.9876864252594022);
    msg.setSource(15325U);
    msg.setSourceEntity(236U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(167U);
    msg.sessid = 834796321U;

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
    msg.setTimeStamp(0.10671696131679043);
    msg.setSource(43775U);
    msg.setSourceEntity(25U);
    msg.setDestination(53725U);
    msg.setDestinationEntity(28U);
    msg.sessid = 3486700521U;

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
    msg.setTimeStamp(0.20465860656145551);
    msg.setSource(22970U);
    msg.setSourceEntity(33U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(73U);
    msg.sessid = 1398870744U;

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
    msg.setTimeStamp(0.7209442300276192);
    msg.setSource(32411U);
    msg.setSourceEntity(140U);
    msg.setDestination(49880U);
    msg.setDestinationEntity(194U);
    msg.sessid = 1271890831U;
    msg.messages.assign("AZISNCTYWOHIMSQOETRQGBLZPQYWMIVRGZGGRUVGUXBRKWBBHYXCSMHFIQ");

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
    msg.setTimeStamp(0.4678885863715453);
    msg.setSource(18217U);
    msg.setSourceEntity(52U);
    msg.setDestination(27429U);
    msg.setDestinationEntity(116U);
    msg.sessid = 1134493611U;
    msg.messages.assign("NRCRMUJKTPBWSLTEGNYYSQUMJWWVHYOBBKRUUKEWMOSEVFUTWPXFPOZIQHRUABQIQQTIFVDSJICDPFNCQMJZLXQSZGZADLSPDXGOWYZHDQFCRDBNXAGFPUYCIPVLPIORHEMBCNLUXXJVGMOONLVEKIZATECJGDWQCDJMQOKHGSTRNVZKVZKUYAATBYHGXTGNXMBAXJRIZAKVU");

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
    msg.setTimeStamp(0.19535015560775748);
    msg.setSource(26938U);
    msg.setSourceEntity(58U);
    msg.setDestination(42323U);
    msg.setDestinationEntity(56U);
    msg.sessid = 1521106604U;
    msg.messages.assign("JJMJKPSXQASWUVYGKUDDHUDMFQKNSFIOEYBCSOUBMNBTXCTLOECLIIXISRNEJQEKUMFWRDGFZZAOMKLWJULXAWKLYNQDCFXDHHVLPVAWPNUKZGVWOOOSWCRQAOBLTBIAWPZZKHZENRBJGQJCPYFTEHCFVLABTTXXYPXHEIUISFITOGMTRLWQXJZNBXRRJCMNDEYZKWPOGAVAJVYYFERIHMUGDMYHQVVPKSZTSRDGACHPN");

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
    msg.setTimeStamp(0.26803443263169);
    msg.setSource(40665U);
    msg.setSourceEntity(109U);
    msg.setDestination(60735U);
    msg.setDestinationEntity(49U);
    msg.sessid = 2173621703U;

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
    msg.setTimeStamp(0.4621346531944396);
    msg.setSource(33734U);
    msg.setSourceEntity(33U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(22U);
    msg.sessid = 3859277181U;

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
    msg.setTimeStamp(0.3384917950150026);
    msg.setSource(60431U);
    msg.setSourceEntity(169U);
    msg.setDestination(59675U);
    msg.setDestinationEntity(121U);
    msg.sessid = 560676312U;

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
    msg.setTimeStamp(0.5046669242080253);
    msg.setSource(22968U);
    msg.setSourceEntity(204U);
    msg.setDestination(6123U);
    msg.setDestinationEntity(125U);
    msg.sessid = 2451300421U;
    msg.status = 3U;

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
    msg.setTimeStamp(0.18178646019195432);
    msg.setSource(27501U);
    msg.setSourceEntity(115U);
    msg.setDestination(13032U);
    msg.setDestinationEntity(73U);
    msg.sessid = 1979800767U;
    msg.status = 127U;

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
    msg.setTimeStamp(0.8183040681563637);
    msg.setSource(58004U);
    msg.setSourceEntity(26U);
    msg.setDestination(39926U);
    msg.setDestinationEntity(185U);
    msg.sessid = 4247370051U;
    msg.status = 239U;

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
    msg.setTimeStamp(0.6380909512173489);
    msg.setSource(58708U);
    msg.setSourceEntity(180U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(134U);
    msg.name.assign("KLGLHMTBYFVMTINMRSDJCKLSXUHMMGTYWIYOVCYDSJPGHPUVEZSTKKU");

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
    msg.setTimeStamp(0.7641869494798968);
    msg.setSource(60207U);
    msg.setSourceEntity(110U);
    msg.setDestination(12324U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LUDOXNFBXEBWDYJZQRBLVHKRIFUPSQBLQVBHRYMTZNSQIXMRQNOJUGIVDUKCMBLYMWKRRMJGXLKOWQWHGDEXAAUFBIJTODOHQITGAENSHVPNDXFWWHLZMDGTJNECKMTVBTWOMZTSG");

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
    msg.setTimeStamp(0.16143708983396454);
    msg.setSource(15719U);
    msg.setSourceEntity(17U);
    msg.setDestination(42074U);
    msg.setDestinationEntity(89U);
    msg.name.assign("DERZRLBEFHQZSAHMFERWCWQGKJUKVILAAPXDXSCHBJYISVJUXESUZYYHJUJFQGFUCOHHOGIBECYZPLXNABDRMNYNIIKTQUP");

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
    msg.setTimeStamp(0.8706215868759979);
    msg.setSource(61627U);
    msg.setSourceEntity(75U);
    msg.setDestination(25398U);
    msg.setDestinationEntity(118U);
    msg.name.assign("IUWTCPZGIGPSRBONYMSLHTFBKAYCYYNOLRCJBXXFSUMYXJFOYQOIZ");

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
    msg.setTimeStamp(0.6457147670417931);
    msg.setSource(50753U);
    msg.setSourceEntity(209U);
    msg.setDestination(59056U);
    msg.setDestinationEntity(175U);
    msg.name.assign("JARIMXKOLGWXUSYZLAKHLMELSTBNDJVYVREWQDOCYM");

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
    msg.setTimeStamp(0.8571087271372346);
    msg.setSource(40239U);
    msg.setSourceEntity(196U);
    msg.setDestination(27865U);
    msg.setDestinationEntity(10U);
    msg.name.assign("DVDDWXWICWXWKBYNNLLLOKYFFSZYZEVHHPFYOAYAXKMKXNGSCLMYSOKQFTGUXDPHROMSFGNKRGBLOSEEQIDFURNWUNHPHGOIFAWSPAJTRMMTMVGKCWFXPWVTZJVUWULQTULRTXORDYZIGJGVBNGSSKBHUZUOJUZEPENJCZQAJMFXEMHATJXKBUTXMRWLAOSMQPOZTCTFJICRCPCNHREDDYVQIZBIQINVAGIYPBBQRDBCVKEEQLCPSI");

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
